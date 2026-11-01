/* ===== 1803b8440 FUN_1803b8440 ===== */

void FUN_1803b8440(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  
  if (param_5 <= param_4) {
LAB_1803b85e5:
    FUN_180540530(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  puVar13 = param_1;
LAB_1803b8490:
  puVar2 = puVar13 + param_4 * 6;
  lVar11 = param_5 - param_4;
  lVar8 = param_4;
  if (lVar11 < param_4) {
    lVar8 = lVar11;
  }
  lVar12 = param_4 * 2;
  if (lVar11 < param_4) {
    lVar12 = param_5;
  }
  param_1 = puVar13 + lVar12 * 6;
  puVar10 = puVar2;
  do {
    iVar9 = *(int *)*puVar10;
    if (iVar9 == 0x2b) {
      iVar9 = 4;
    }
    else if (iVar9 == 0x2c) {
      iVar9 = 0;
    }
    else if (iVar9 == 0x2d) {
      iVar9 = 3;
    }
    else if (iVar9 == 0x2e) {
      iVar9 = 1;
    }
    else if (iVar9 == 0x30) {
      iVar9 = 2;
    }
    else {
      iVar9 = iVar9 + 1000;
    }
    iVar7 = *(int *)*puVar13;
    if (iVar7 == 0x2b) {
      iVar7 = 4;
    }
    else if (iVar7 == 0x2c) {
      iVar7 = 0;
    }
    else if (iVar7 == 0x2d) {
      iVar7 = 3;
    }
    else if (iVar7 == 0x2e) {
      iVar7 = 1;
    }
    else if (iVar7 == 0x30) {
      iVar7 = 2;
    }
    else {
      iVar7 = iVar7 + 1000;
    }
    if (iVar9 < iVar7) {
      uVar6 = puVar10[1];
      *param_3 = *puVar10;
      param_3[1] = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar10 + 0x14);
      uVar4 = *(undefined4 *)(puVar10 + 3);
      uVar5 = *(undefined4 *)((longlong)puVar10 + 0x1c);
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar10 + 2);
      *(undefined4 *)((longlong)param_3 + 0x14) = uVar3;
      *(undefined4 *)(param_3 + 3) = uVar4;
      *(undefined4 *)((longlong)param_3 + 0x1c) = uVar5;
      puVar1 = puVar10 + 4;
      uVar3 = *(undefined4 *)((longlong)puVar10 + 0x24);
      uVar4 = *(undefined4 *)(puVar10 + 5);
      uVar5 = *(undefined4 *)((longlong)puVar10 + 0x2c);
      puVar10 = puVar10 + 6;
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)puVar1;
      *(undefined4 *)((longlong)param_3 + 0x24) = uVar3;
      *(undefined4 *)(param_3 + 5) = uVar4;
      *(undefined4 *)((longlong)param_3 + 0x2c) = uVar5;
      if (puVar10 == param_1) break;
    }
    else {
      uVar6 = puVar13[1];
      *param_3 = *puVar13;
      param_3[1] = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar13 + 0x14);
      uVar4 = *(undefined4 *)(puVar13 + 3);
      uVar5 = *(undefined4 *)((longlong)puVar13 + 0x1c);
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar13 + 2);
      *(undefined4 *)((longlong)param_3 + 0x14) = uVar3;
      *(undefined4 *)(param_3 + 3) = uVar4;
      *(undefined4 *)((longlong)param_3 + 0x1c) = uVar5;
      puVar1 = puVar13 + 4;
      uVar3 = *(undefined4 *)((longlong)puVar13 + 0x24);
      uVar4 = *(undefined4 *)(puVar13 + 5);
      uVar5 = *(undefined4 *)((longlong)puVar13 + 0x2c);
      puVar13 = puVar13 + 6;
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)puVar1;
      *(undefined4 *)((longlong)param_3 + 0x24) = uVar3;
      *(undefined4 *)(param_3 + 5) = uVar4;
      *(undefined4 *)((longlong)param_3 + 0x2c) = uVar5;
      if (puVar13 == puVar2) {
        lVar12 = (longlong)param_1 - (longlong)puVar10;
        goto LAB_1803b85b6;
      }
    }
    param_3 = param_3 + 6;
  } while( true );
  lVar12 = (longlong)puVar2 - (longlong)puVar13;
  puVar10 = puVar13;
LAB_1803b85b6:
  FUN_180540530(param_3 + 6,puVar10,lVar12);
  param_3 = (undefined8 *)((longlong)param_3 + lVar12 + 0x30);
  param_5 = lVar11 - lVar8;
  puVar13 = param_1;
  if (lVar11 - lVar8 <= param_4) goto LAB_1803b85e5;
  goto LAB_1803b8490;
}



/* ===== 1803b8600 FUN_1803b8600 ===== */

void FUN_1803b8600(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,longlong param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    lVar14 = (longlong)param_2 - (longlong)param_1;
    FUN_180540530(param_6,param_1,lVar14);
    uVar6 = param_2[1];
    puVar18 = param_2 + 6;
    *param_1 = *param_2;
    param_1[1] = uVar6;
    uVar6 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar6;
    uVar6 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar6;
    puVar17 = param_6;
    puVar16 = param_1 + 6;
    do {
      iVar13 = *(int *)*puVar18;
      if (iVar13 == 0x2b) {
        iVar13 = 4;
      }
      else if (iVar13 == 0x2c) {
        iVar13 = 0;
      }
      else if (iVar13 == 0x2d) {
        iVar13 = 3;
      }
      else if (iVar13 == 0x2e) {
        iVar13 = 1;
      }
      else if (iVar13 == 0x30) {
        iVar13 = 2;
      }
      else {
        iVar13 = iVar13 + 1000;
      }
      iVar12 = *(int *)*puVar17;
      if (iVar12 == 0x2b) {
        iVar12 = 4;
      }
      else if (iVar12 == 0x2c) {
        iVar12 = 0;
      }
      else if (iVar12 == 0x2d) {
        iVar12 = 3;
      }
      else if (iVar12 == 0x2e) {
        iVar12 = 1;
      }
      else if (iVar12 == 0x30) {
        iVar12 = 2;
      }
      else {
        iVar12 = iVar12 + 1000;
      }
      puVar1 = puVar16 + 6;
      if (iVar13 < iVar12) {
        uVar6 = puVar18[1];
        *puVar16 = *puVar18;
        puVar16[1] = uVar6;
        uVar3 = *(undefined4 *)((longlong)puVar18 + 0x14);
        uVar4 = *(undefined4 *)(puVar18 + 3);
        uVar5 = *(undefined4 *)((longlong)puVar18 + 0x1c);
        *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(puVar18 + 2);
        *(undefined4 *)((longlong)puVar16 + 0x14) = uVar3;
        *(undefined4 *)(puVar16 + 3) = uVar4;
        *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar5;
        puVar2 = puVar18 + 4;
        uVar3 = *(undefined4 *)((longlong)puVar18 + 0x24);
        uVar4 = *(undefined4 *)(puVar18 + 5);
        uVar5 = *(undefined4 *)((longlong)puVar18 + 0x2c);
        puVar18 = puVar18 + 6;
        *(undefined4 *)(puVar16 + 4) = *(undefined4 *)puVar2;
        *(undefined4 *)((longlong)puVar16 + 0x24) = uVar3;
        *(undefined4 *)(puVar16 + 5) = uVar4;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar5;
        if (puVar18 == param_3) {
          FUN_180540530(puVar1,puVar17,(longlong)param_6 + (lVar14 - (longlong)puVar17));
          return;
        }
      }
      else {
        uVar6 = puVar17[1];
        *puVar16 = *puVar17;
        puVar16[1] = uVar6;
        uVar3 = *(undefined4 *)((longlong)puVar17 + 0x14);
        uVar4 = *(undefined4 *)(puVar17 + 3);
        uVar5 = *(undefined4 *)((longlong)puVar17 + 0x1c);
        *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(puVar17 + 2);
        *(undefined4 *)((longlong)puVar16 + 0x14) = uVar3;
        *(undefined4 *)(puVar16 + 3) = uVar4;
        *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar5;
        uVar3 = *(undefined4 *)((longlong)puVar17 + 0x24);
        uVar4 = *(undefined4 *)(puVar17 + 5);
        uVar5 = *(undefined4 *)((longlong)puVar17 + 0x2c);
        *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(puVar17 + 4);
        *(undefined4 *)((longlong)puVar16 + 0x24) = uVar3;
        *(undefined4 *)(puVar16 + 5) = uVar4;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar5;
        if (puVar17 == (undefined8 *)((longlong)param_6 + lVar14 + -0x60)) {
          lVar15 = (longlong)param_3 - (longlong)puVar18;
          uVar6 = *(undefined8 *)((longlong)param_6 + lVar14 + -0x30);
          uVar7 = *(undefined8 *)((longlong)param_6 + lVar14 + -0x28);
          uVar8 = *(undefined8 *)((longlong)param_6 + lVar14 + -0x20);
          uVar9 = *(undefined8 *)((longlong)param_6 + lVar14 + -0x18);
          uVar10 = *(undefined8 *)((longlong)param_6 + lVar14 + -0x10);
          uVar11 = *(undefined8 *)((longlong)param_6 + lVar14 + -8);
          FUN_180540530(puVar1,puVar18,lVar15);
          *(undefined8 *)((longlong)puVar1 + lVar15) = uVar6;
          ((undefined8 *)((longlong)puVar1 + lVar15))[1] = uVar7;
          puVar18 = (undefined8 *)((longlong)puVar16 + lVar15 + 0x40);
          *puVar18 = uVar8;
          puVar18[1] = uVar9;
          puVar16 = (undefined8 *)((longlong)puVar16 + lVar15 + 0x50);
          *puVar16 = uVar10;
          puVar16[1] = uVar11;
          return;
        }
        puVar17 = puVar17 + 6;
      }
      puVar16 = puVar1;
    } while( true );
  }
  if (param_7 < param_5) {
    FUN_1803b9930(param_1,param_2);
    return;
  }
  FUN_180540530(param_6,param_2,(longlong)param_3 - (longlong)param_2);
  uVar6 = param_2[-5];
  puVar18 = param_3 + -6;
  *puVar18 = param_2[-6];
  param_3[-5] = uVar6;
  puVar17 = (undefined8 *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -0x30);
  puVar16 = param_2 + -0xc;
  uVar6 = param_2[-3];
  param_3[-4] = param_2[-4];
  param_3[-3] = uVar6;
  uVar6 = param_2[-1];
  param_3[-2] = param_2[-2];
  param_3[-1] = uVar6;
  while( true ) {
    while( true ) {
      iVar13 = *(int *)*puVar17;
      if (iVar13 == 0x2b) {
        iVar13 = 4;
      }
      else if (iVar13 == 0x2c) {
        iVar13 = 0;
      }
      else if (iVar13 == 0x2d) {
        iVar13 = 3;
      }
      else if (iVar13 == 0x2e) {
        iVar13 = 1;
      }
      else if (iVar13 == 0x30) {
        iVar13 = 2;
      }
      else {
        iVar13 = iVar13 + 1000;
      }
      iVar12 = *(int *)*puVar16;
      if (iVar12 == 0x2b) {
        iVar12 = 4;
      }
      else if (iVar12 == 0x2c) {
        iVar12 = 0;
      }
      else if (iVar12 == 0x2d) {
        iVar12 = 3;
      }
      else if (iVar12 == 0x2e) {
        iVar12 = 1;
      }
      else if (iVar12 == 0x30) {
        iVar12 = 2;
      }
      else {
        iVar12 = iVar12 + 1000;
      }
      if (iVar13 < iVar12) break;
      uVar6 = puVar17[1];
      puVar18[-6] = *puVar17;
      puVar18[-5] = uVar6;
      uVar6 = puVar17[3];
      puVar18[-4] = puVar17[2];
      puVar18[-3] = uVar6;
      puVar1 = puVar17 + 4;
      uVar6 = puVar17[5];
      puVar17 = puVar17 + -6;
      puVar18[-2] = *puVar1;
      puVar18[-1] = uVar6;
      if (param_6 == puVar17) {
        uVar6 = puVar16[1];
        puVar18[-0xc] = *puVar16;
        puVar18[-0xb] = uVar6;
        uVar3 = *(undefined4 *)((longlong)puVar16 + 0x14);
        uVar4 = *(undefined4 *)(puVar16 + 3);
        uVar5 = *(undefined4 *)((longlong)puVar16 + 0x1c);
        *(undefined4 *)(puVar18 + -10) = *(undefined4 *)(puVar16 + 2);
        *(undefined4 *)((longlong)puVar18 + -0x4c) = uVar3;
        *(undefined4 *)(puVar18 + -9) = uVar4;
        *(undefined4 *)((longlong)puVar18 + -0x44) = uVar5;
        uVar3 = *(undefined4 *)((longlong)puVar16 + 0x24);
        uVar4 = *(undefined4 *)(puVar16 + 5);
        uVar5 = *(undefined4 *)((longlong)puVar16 + 0x2c);
        *(undefined4 *)(puVar18 + -8) = *(undefined4 *)(puVar16 + 4);
        *(undefined4 *)((longlong)puVar18 + -0x3c) = uVar3;
        *(undefined4 *)(puVar18 + -7) = uVar4;
        *(undefined4 *)((longlong)puVar18 + -0x34) = uVar5;
        FUN_180540530((longlong)(puVar18 + -0xc) - ((longlong)puVar16 - (longlong)param_1),param_1);
        uVar6 = param_6[1];
        *param_1 = *param_6;
        param_1[1] = uVar6;
        uVar6 = param_6[3];
        param_1[2] = param_6[2];
        param_1[3] = uVar6;
        uVar6 = param_6[5];
        param_1[4] = param_6[4];
        param_1[5] = uVar6;
        return;
      }
      puVar18 = puVar18 + -6;
    }
    uVar6 = puVar16[1];
    puVar18[-6] = *puVar16;
    puVar18[-5] = uVar6;
    uVar6 = puVar16[3];
    puVar18[-4] = puVar16[2];
    puVar18[-3] = uVar6;
    uVar6 = puVar16[5];
    puVar18[-2] = puVar16[4];
    puVar18[-1] = uVar6;
    if (param_1 == puVar16) break;
    puVar16 = puVar16 + -6;
    puVar18 = puVar18 + -6;
  }
  uVar6 = puVar17[1];
  puVar18[-0xc] = *puVar17;
  puVar18[-0xb] = uVar6;
  uVar3 = *(undefined4 *)((longlong)puVar17 + 0x14);
  uVar4 = *(undefined4 *)(puVar17 + 3);
  uVar5 = *(undefined4 *)((longlong)puVar17 + 0x1c);
  *(undefined4 *)(puVar18 + -10) = *(undefined4 *)(puVar17 + 2);
  *(undefined4 *)((longlong)puVar18 + -0x4c) = uVar3;
  *(undefined4 *)(puVar18 + -9) = uVar4;
  *(undefined4 *)((longlong)puVar18 + -0x44) = uVar5;
  uVar3 = *(undefined4 *)((longlong)puVar17 + 0x24);
  uVar4 = *(undefined4 *)(puVar17 + 5);
  uVar5 = *(undefined4 *)((longlong)puVar17 + 0x2c);
  *(undefined4 *)(puVar18 + -8) = *(undefined4 *)(puVar17 + 4);
  *(undefined4 *)((longlong)puVar18 + -0x3c) = uVar3;
  *(undefined4 *)(puVar18 + -7) = uVar4;
  *(undefined4 *)((longlong)puVar18 + -0x34) = uVar5;
  FUN_180540530((longlong)(puVar18 + -0xc) - ((longlong)puVar17 - (longlong)param_6),param_6,
                (longlong)puVar17 - (longlong)param_6);
  return;
}



/* ===== 1803b89e0 FUN_1803b89e0 ===== */

void FUN_1803b89e0(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  if (param_5 <= param_4) {
LAB_1803b8b4d:
    FUN_180540530(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  puVar9 = param_1;
LAB_1803b8a20:
  puVar1 = puVar9 + param_4;
  lVar10 = param_5 - param_4;
  lVar5 = param_4;
  if (lVar10 < param_4) {
    lVar5 = lVar10;
  }
  lVar8 = param_4 * 2;
  if (lVar10 < param_4) {
    lVar8 = param_5;
  }
  param_1 = puVar9 + lVar8;
  puVar7 = puVar1;
  do {
    puVar2 = (undefined8 *)*puVar7;
    iVar6 = *(int *)*puVar2;
    if (iVar6 == 0x2b) {
      iVar6 = 4;
    }
    else if (iVar6 == 0x2c) {
      iVar6 = 0;
    }
    else if (iVar6 == 0x2d) {
      iVar6 = 3;
    }
    else if (iVar6 == 0x2e) {
      iVar6 = 1;
    }
    else if (iVar6 == 0x30) {
      iVar6 = 2;
    }
    else {
      iVar6 = iVar6 + 1000;
    }
    puVar3 = (undefined8 *)*puVar9;
    iVar4 = *(int *)*puVar3;
    if (iVar4 == 0x2b) {
      iVar4 = 4;
    }
    else if (iVar4 == 0x2c) {
      iVar4 = 0;
    }
    else if (iVar4 == 0x2d) {
      iVar4 = 3;
    }
    else if (iVar4 == 0x2e) {
      iVar4 = 1;
    }
    else if (iVar4 == 0x30) {
      iVar4 = 2;
    }
    else {
      iVar4 = iVar4 + 1000;
    }
    if (iVar6 < iVar4) {
      puVar7 = puVar7 + 1;
      *param_3 = puVar2;
      if (puVar7 == param_1) break;
    }
    else {
      puVar9 = puVar9 + 1;
      *param_3 = puVar3;
      if (puVar9 == puVar1) {
        lVar8 = (longlong)param_1 - (longlong)puVar7;
        goto LAB_1803b8b1e;
      }
    }
    param_3 = param_3 + 1;
  } while( true );
  lVar8 = (longlong)puVar1 - (longlong)puVar9;
  puVar7 = puVar9;
LAB_1803b8b1e:
  FUN_180540530(param_3 + 1,puVar7,lVar8);
  param_3 = (undefined8 *)((longlong)param_3 + lVar8 + 8);
  puVar9 = param_1;
  param_5 = lVar10 - lVar5;
  if (lVar10 - lVar5 <= param_4) goto LAB_1803b8b4d;
  goto LAB_1803b8a20;
}



/* ===== 1803b8b70 FUN_1803b8b70 ===== */

void FUN_1803b8b70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,longlong param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    FUN_180540530(param_6,param_1,lVar6);
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = param_6;
    puVar8 = param_1 + 1;
    do {
      puVar2 = (undefined8 *)*param_2;
      iVar5 = *(int *)*puVar2;
      if (iVar5 == 0x2b) {
        iVar5 = 4;
      }
      else if (iVar5 == 0x2c) {
        iVar5 = 0;
      }
      else if (iVar5 == 0x2d) {
        iVar5 = 3;
      }
      else if (iVar5 == 0x2e) {
        iVar5 = 1;
      }
      else if (iVar5 == 0x30) {
        iVar5 = 2;
      }
      else {
        iVar5 = iVar5 + 1000;
      }
      iVar4 = **(int **)*puVar7;
      if (iVar4 == 0x2b) {
        iVar4 = 4;
      }
      else if (iVar4 == 0x2c) {
        iVar4 = 0;
      }
      else if (iVar4 == 0x2d) {
        iVar4 = 3;
      }
      else if (iVar4 == 0x2e) {
        iVar4 = 1;
      }
      else if (iVar4 == 0x30) {
        iVar4 = 2;
      }
      else {
        iVar4 = iVar4 + 1000;
      }
      puVar1 = puVar8 + 1;
      if (iVar5 < iVar4) {
        param_2 = param_2 + 1;
        *puVar8 = puVar2;
        if (param_2 == param_3) {
          FUN_180540530(puVar1,puVar7,(longlong)param_6 + (lVar6 - (longlong)puVar7));
          return;
        }
      }
      else {
        *puVar8 = (undefined8 *)*puVar7;
        if (puVar7 == (undefined8 *)((longlong)param_6 + lVar6 + -0x10)) {
          uVar3 = *(undefined8 *)((longlong)param_6 + lVar6 + -8);
          FUN_180540530(puVar1,param_2,(longlong)param_3 - (longlong)param_2);
          *(undefined8 *)(((longlong)param_3 - (longlong)param_2) + (longlong)puVar1) = uVar3;
          return;
        }
        puVar7 = puVar7 + 1;
      }
      puVar8 = puVar1;
    } while( true );
  }
  if (param_7 < param_5) {
    FUN_1803b9c10(param_1,param_2);
    return;
  }
  FUN_180540530(param_6,param_2,(longlong)param_3 - (longlong)param_2);
  puVar7 = param_3 + -1;
  puVar8 = (undefined8 *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -8);
  *puVar7 = param_2[-1];
  param_2 = param_2 + -2;
  while( true ) {
    while( true ) {
      puVar2 = (undefined8 *)*puVar8;
      iVar5 = *(int *)*puVar2;
      if (iVar5 == 0x2b) {
        iVar5 = 4;
      }
      else if (iVar5 == 0x2c) {
        iVar5 = 0;
      }
      else if (iVar5 == 0x2d) {
        iVar5 = 3;
      }
      else if (iVar5 == 0x2e) {
        iVar5 = 1;
      }
      else if (iVar5 == 0x30) {
        iVar5 = 2;
      }
      else {
        iVar5 = iVar5 + 1000;
      }
      iVar4 = **(int **)*param_2;
      if (iVar4 == 0x2b) {
        iVar4 = 4;
      }
      else if (iVar4 == 0x2c) {
        iVar4 = 0;
      }
      else if (iVar4 == 0x2d) {
        iVar4 = 3;
      }
      else if (iVar4 == 0x2e) {
        iVar4 = 1;
      }
      else if (iVar4 == 0x30) {
        iVar4 = 2;
      }
      else {
        iVar4 = iVar4 + 1000;
      }
      if (iVar5 < iVar4) break;
      puVar8 = puVar8 + -1;
      puVar7[-1] = puVar2;
      if (param_6 == puVar8) {
        puVar7[-2] = *param_2;
        FUN_180540530((longlong)(puVar7 + -2) - ((longlong)param_2 - (longlong)param_1),param_1,
                      (longlong)param_2 - (longlong)param_1);
        *param_1 = *param_6;
        return;
      }
      puVar7 = puVar7 + -1;
    }
    puVar7[-1] = (undefined8 *)*param_2;
    if (param_1 == param_2) break;
    param_2 = param_2 + -1;
    puVar7 = puVar7 + -1;
  }
  puVar7[-2] = *puVar8;
  FUN_180540530((longlong)(puVar7 + -2) - ((longlong)puVar8 - (longlong)param_6),param_6,
                (longlong)puVar8 - (longlong)param_6);
  return;
}



/* ===== 1803b8e70 FUN_1803b8e70 ===== */

void FUN_1803b8e70(undefined4 *param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 local_res18;
  longlong local_res20;
  
  local_res20 = param_4;
  if (param_5 <= param_4) {
LAB_1803b8fb8:
    FUN_180540530(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  puVar9 = param_1;
LAB_1803b8ec0:
  local_res18 = param_6;
  lVar5 = param_5 - local_res20;
  puVar1 = puVar9 + local_res20;
  lVar6 = local_res20;
  if (lVar5 < local_res20) {
    lVar6 = lVar5;
  }
  lVar8 = local_res20 * 2;
  if (lVar5 < local_res20) {
    lVar8 = param_5;
  }
  param_1 = puVar9 + lVar8;
  puVar7 = puVar1;
  do {
    uVar2 = *puVar9;
    uVar3 = *puVar7;
    cVar4 = FUN_1803b3af0(&local_res18,uVar3,uVar2);
    if (cVar4 == '\0') {
      puVar9 = puVar9 + 1;
      *param_3 = uVar2;
      if (puVar9 == puVar1) {
        lVar8 = (longlong)param_1 - (longlong)puVar7;
        goto LAB_1803b8f60;
      }
    }
    else {
      puVar7 = puVar7 + 1;
      *param_3 = uVar3;
      if (puVar7 == param_1) break;
    }
    param_3 = param_3 + 1;
  } while( true );
  lVar8 = (longlong)puVar1 - (longlong)puVar9;
  puVar7 = puVar9;
LAB_1803b8f60:
  FUN_180540530(param_3 + 1,puVar7,lVar8);
  param_3 = (undefined4 *)((longlong)param_3 + lVar8 + 4);
  param_5 = lVar5 - lVar6;
  puVar9 = param_1;
  if (lVar5 - lVar6 <= local_res20) goto LAB_1803b8fb8;
  goto LAB_1803b8ec0;
}



/* ===== 1803b8fd0 FUN_1803b8fd0 ===== */

void FUN_1803b8fd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
                  undefined4 *param_5,undefined4 *param_6,longlong param_7,undefined4 *param_8)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *local_res20;
  undefined4 *puVar11;
  undefined4 *local_48;
  undefined4 *local_40;
  
  puVar6 = param_8;
  puVar8 = param_6;
  if ((param_4 <= (longlong)param_5) && (param_4 <= param_7)) {
    local_res20 = param_8;
    FUN_180540530(param_6,param_1,(longlong)param_2 - (longlong)param_1);
    lVar1 = ((longlong)param_2 - (longlong)param_1) + (longlong)puVar8;
    puVar6 = param_2 + 1;
    *param_1 = *param_2;
    puVar9 = param_1 + 1;
    param_5 = (undefined4 *)lVar1;
    do {
      uVar2 = *puVar8;
      uVar3 = *puVar6;
      puVar5 = puVar9 + 1;
      cVar4 = FUN_1803b3af0(&local_res20,uVar3,uVar2);
      if (cVar4 == '\0') {
        *puVar9 = uVar2;
        if (puVar8 == (undefined4 *)(lVar1 + -8)) {
          uVar2 = *(undefined4 *)(lVar1 + -4);
          FUN_180540530(puVar5,puVar6,(longlong)param_3 - (longlong)puVar6);
          *(undefined4 *)(((longlong)param_3 - (longlong)puVar6) + (longlong)puVar5) = uVar2;
          return;
        }
        puVar8 = puVar8 + 1;
      }
      else {
        puVar6 = puVar6 + 1;
        *puVar9 = uVar3;
        if (puVar6 == param_3) {
          FUN_180540530(puVar5,puVar8,lVar1 - (longlong)puVar8);
          return;
        }
      }
      puVar9 = puVar5;
    } while( true );
  }
  if (param_7 < (longlong)param_5) {
    if ((longlong)param_5 < param_4) {
      local_48 = (undefined4 *)((longlong)param_5 >> 1);
      uVar10 = (longlong)param_2 - (longlong)param_1 >> 2;
      local_40 = param_8;
      puVar9 = param_2 + (longlong)local_48;
      puVar8 = param_1;
      local_res20 = puVar9;
      if (0 < (longlong)uVar10) {
        do {
          uVar7 = uVar10 >> 1;
          cVar4 = FUN_1803b3af0(&local_40,*puVar9,puVar8[uVar7]);
          if (cVar4 == '\0') {
            puVar8 = puVar8 + uVar7 + 1;
            uVar7 = uVar10 + (-1 - uVar7);
          }
          uVar10 = uVar7;
        } while (0 < (longlong)uVar7);
      }
      puVar5 = (undefined4 *)((longlong)puVar8 - (longlong)param_1 >> 2);
      puVar9 = local_res20;
      puVar11 = local_48;
    }
    else {
      local_48 = param_8;
      local_40 = (undefined4 *)(param_4 >> 1);
      uVar10 = (longlong)param_3 - (longlong)param_2 >> 2;
      puVar8 = param_1 + (longlong)local_40;
      puVar9 = param_2;
      local_res20 = puVar8;
      if (0 < (longlong)uVar10) {
        do {
          uVar7 = uVar10 >> 1;
          cVar4 = FUN_1803b3af0(&local_48,puVar9[uVar7],*puVar8);
          if (cVar4 != '\0') {
            puVar9 = puVar9 + uVar7 + 1;
            uVar7 = uVar10 + (-1 - uVar7);
          }
          uVar10 = uVar7;
        } while (0 < (longlong)uVar7);
      }
      puVar8 = local_res20;
      puVar5 = local_40;
      puVar11 = (undefined4 *)((longlong)puVar9 - (longlong)param_2 >> 2);
    }
    FUN_1803ba290(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar6,puVar8,puVar9,
                  puVar5,puVar11);
  }
  else {
    param_5 = param_8;
    FUN_180540530(param_6,param_2,(longlong)param_3 - (longlong)param_2);
    puVar5 = param_3 + -1;
    puVar9 = (undefined4 *)((longlong)puVar8 + ((longlong)param_3 - (longlong)param_2) + -4);
    puVar6 = param_2 + -2;
    *puVar5 = param_2[-1];
    while( true ) {
      while( true ) {
        uVar2 = *puVar6;
        uVar3 = *puVar9;
        cVar4 = FUN_1803b3af0(&param_5,uVar3,uVar2);
        if (cVar4 == '\0') break;
        puVar5[-1] = uVar2;
        if (param_1 == puVar6) {
          puVar5[-2] = *puVar9;
          FUN_180540530((longlong)(puVar5 + -2) - ((longlong)puVar9 - (longlong)puVar8),puVar8,
                        (longlong)puVar9 - (longlong)puVar8);
          return;
        }
        puVar6 = puVar6 + -1;
        puVar5 = puVar5 + -1;
      }
      puVar9 = puVar9 + -1;
      puVar5[-1] = uVar3;
      if (puVar8 == puVar9) break;
      puVar5 = puVar5 + -1;
    }
    puVar5[-2] = *puVar6;
    FUN_180540530((longlong)(puVar5 + -2) - ((longlong)puVar6 - (longlong)param_1),param_1,
                  (longlong)puVar6 - (longlong)param_1);
    *param_1 = *puVar8;
  }
  return;
}



/* ===== 1803b93b0 FUN_1803b93b0 ===== */

void FUN_1803b93b0(undefined8 param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  
  plVar9 = DAT_181108e38;
  for (lVar12 = 0x3f; 0xfffffffffffffffU >> lVar12 == 0; lVar12 = lVar12 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar12 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar10 = param_2 - 1 | 1;
  lVar12 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  bVar11 = (char)lVar12 + 1;
  lVar12 = 1L << (bVar11 & 0x3f);
  FUN_180029d30(&DAT_181108e48,2L << (bVar11 & 0x3f),DAT_181108e38);
  DAT_181108e60 = lVar12 - 1;
  DAT_181108e68 = lVar12;
  plVar8 = (longlong *)*DAT_181108e38;
joined_r0x0001803b942c:
  do {
    while( true ) {
      while( true ) {
        if (plVar8 == plVar9) {
          return;
        }
        plVar2 = (longlong *)*plVar8;
        uVar10 = (((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 & DAT_181108e60;
        plVar3 = *(longlong **)(DAT_181108e48 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_181108e48 + uVar10 * 0x10);
        lVar12 = DAT_181108e48 + uVar10 * 0x10;
        if (plVar3 != plVar9) break;
        *puVar1 = plVar8;
        *(longlong **)(lVar12 + 8) = plVar8;
        plVar8 = plVar2;
      }
      plVar4 = *(longlong **)(lVar12 + 8);
      if ((int)plVar8[2] != (int)plVar4[2]) break;
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != plVar8) {
        puVar1 = (undefined8 *)plVar8[1];
        *puVar1 = plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar8;
        plVar4[1] = (longlong)puVar5;
        plVar2[1] = (longlong)puVar1;
        plVar8[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar12 + 8) = plVar8;
      plVar8 = plVar2;
    }
    do {
      if (plVar3 == plVar4) {
        puVar5 = (undefined8 *)plVar8[1];
        *puVar5 = plVar2;
        puVar6 = (undefined8 *)plVar2[1];
        *puVar6 = plVar4;
        puVar7 = (undefined8 *)plVar4[1];
        *puVar7 = plVar8;
        plVar4[1] = (longlong)puVar6;
        plVar2[1] = (longlong)puVar5;
        plVar8[1] = (longlong)puVar7;
        *puVar1 = plVar8;
        plVar8 = plVar2;
        goto joined_r0x0001803b942c;
      }
      plVar4 = (longlong *)plVar4[1];
    } while ((int)plVar8[2] != (int)plVar4[2]);
    lVar12 = *plVar4;
    puVar1 = (undefined8 *)plVar8[1];
    *puVar1 = plVar2;
    plVar3 = (longlong *)plVar2[1];
    *plVar3 = lVar12;
    puVar5 = *(undefined8 **)(lVar12 + 8);
    *puVar5 = plVar8;
    *(longlong **)(lVar12 + 8) = plVar3;
    plVar2[1] = (longlong)puVar1;
    plVar8[1] = (longlong)puVar5;
    plVar8 = plVar2;
  } while( true );
}



/* ===== 1803b9580 FUN_1803b9580 ===== */

void FUN_1803b9580(undefined8 param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  
  plVar9 = DAT_181108e78;
  for (lVar12 = 0x3f; 0xfffffffffffffffU >> lVar12 == 0; lVar12 = lVar12 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar12 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar10 = param_2 - 1 | 1;
  lVar12 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  bVar11 = (char)lVar12 + 1;
  lVar12 = 1L << (bVar11 & 0x3f);
  FUN_180029d30(&DAT_181108e88,2L << (bVar11 & 0x3f),DAT_181108e78);
  DAT_181108ea0 = lVar12 - 1;
  DAT_181108ea8 = lVar12;
  plVar8 = (longlong *)*DAT_181108e78;
joined_r0x0001803b95fc:
  do {
    while( true ) {
      while( true ) {
        if (plVar8 == plVar9) {
          return;
        }
        plVar2 = (longlong *)*plVar8;
        uVar10 = (((((((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar8 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar8 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x17)) * 0x100000001b3 & DAT_181108ea0;
        plVar3 = *(longlong **)(DAT_181108e88 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_181108e88 + uVar10 * 0x10);
        lVar12 = DAT_181108e88 + uVar10 * 0x10;
        if (plVar3 != plVar9) break;
        *puVar1 = plVar8;
        *(longlong **)(lVar12 + 8) = plVar8;
        plVar8 = plVar2;
      }
      plVar4 = *(longlong **)(lVar12 + 8);
      if (plVar8[2] != plVar4[2]) break;
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != plVar8) {
        puVar1 = (undefined8 *)plVar8[1];
        *puVar1 = plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar8;
        plVar4[1] = (longlong)puVar5;
        plVar2[1] = (longlong)puVar1;
        plVar8[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar12 + 8) = plVar8;
      plVar8 = plVar2;
    }
    do {
      if (plVar3 == plVar4) {
        puVar5 = (undefined8 *)plVar8[1];
        *puVar5 = plVar2;
        puVar6 = (undefined8 *)plVar2[1];
        *puVar6 = plVar4;
        puVar7 = (undefined8 *)plVar4[1];
        *puVar7 = plVar8;
        plVar4[1] = (longlong)puVar6;
        plVar2[1] = (longlong)puVar5;
        plVar8[1] = (longlong)puVar7;
        *puVar1 = plVar8;
        plVar8 = plVar2;
        goto joined_r0x0001803b95fc;
      }
      plVar4 = (longlong *)plVar4[1];
    } while (plVar8[2] != plVar4[2]);
    lVar12 = *plVar4;
    puVar1 = (undefined8 *)plVar8[1];
    *puVar1 = plVar2;
    plVar3 = (longlong *)plVar2[1];
    *plVar3 = lVar12;
    puVar5 = *(undefined8 **)(lVar12 + 8);
    *puVar5 = plVar8;
    *(longlong **)(lVar12 + 8) = plVar3;
    plVar2[1] = (longlong)puVar1;
    plVar8[1] = (longlong)puVar5;
    plVar8 = plVar2;
  } while( true );
}



/* ===== 1803b9780 FUN_1803b9780 ===== */

void FUN_1803b9780(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_5 < param_4) {
    lVar1 = param_5 >> 1;
    uVar2 = ((longlong)param_2 - (longlong)param_1 >> 4) * -0x5555555555555555;
    plVar4 = param_2 + lVar1 * 6;
    plVar5 = param_1;
    if (0 < (longlong)uVar2) {
      do {
        uVar3 = uVar2 >> 1;
        if (*(float *)(plVar5[uVar3 * 6] + 0x28) <= *(float *)(*plVar4 + 0x28)) {
          plVar5 = plVar5 + uVar3 * 6 + 6;
          uVar3 = uVar2 + (-1 - uVar3);
        }
        uVar2 = uVar3;
      } while (0 < (longlong)uVar3);
    }
    lVar6 = ((longlong)plVar5 - (longlong)param_1 >> 4) * -0x5555555555555555;
  }
  else {
    lVar6 = param_4 >> 1;
    plVar5 = param_1 + lVar6 * 6;
    uVar2 = (param_3 - (longlong)param_2 >> 4) * -0x5555555555555555;
    plVar4 = param_2;
    if (0 < (longlong)uVar2) {
      do {
        uVar3 = uVar2 >> 1;
        if (!(*(float *)(*plVar5 + 0x28) < *(float *)(plVar4[uVar3 * 6] + 0x28) ||
             *(float *)(*plVar5 + 0x28) == *(float *)(plVar4[uVar3 * 6] + 0x28))) {
          plVar4 = plVar4 + uVar3 * 6 + 6;
          uVar3 = uVar2 + (-1 - uVar3);
        }
        uVar2 = uVar3;
      } while (0 < (longlong)uVar3);
    }
    lVar1 = ((longlong)plVar4 - (longlong)param_2 >> 4) * -0x5555555555555555;
  }
  FUN_1803b9f00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5,plVar4,lVar6,
                lVar1);
  return;
}



/* ===== 1803b9930 FUN_1803b9930 ===== */

void FUN_1803b9930(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  if (param_5 < param_4) {
    lVar3 = param_5 >> 1;
    uVar7 = ((longlong)param_2 - (longlong)param_1 >> 4) * -0x5555555555555555;
    puVar9 = param_2 + lVar3 * 6;
    puVar5 = param_1;
    if (0 < (longlong)uVar7) {
      iVar1 = *(int *)*puVar9;
      do {
        uVar8 = uVar7 >> 1;
        if (iVar1 == 0x2b) {
          iVar4 = 4;
        }
        else if (iVar1 == 0x2c) {
          iVar4 = 0;
        }
        else if (iVar1 == 0x2d) {
          iVar4 = 3;
        }
        else if (iVar1 == 0x2e) {
          iVar4 = 1;
        }
        else if (iVar1 == 0x30) {
          iVar4 = 2;
        }
        else {
          iVar4 = iVar1 + 1000;
        }
        iVar2 = *(int *)puVar5[uVar8 * 6];
        if (iVar2 == 0x2b) {
          iVar2 = 4;
        }
        else if (iVar2 == 0x2c) {
          iVar2 = 0;
        }
        else if (iVar2 == 0x2d) {
          iVar2 = 3;
        }
        else if (iVar2 == 0x2e) {
          iVar2 = 1;
        }
        else if (iVar2 == 0x30) {
          iVar2 = 2;
        }
        else {
          iVar2 = iVar2 + 1000;
        }
        if (iVar2 <= iVar4) {
          puVar5 = puVar5 + uVar8 * 6 + 6;
          uVar8 = uVar7 + (-1 - uVar8);
        }
        uVar7 = uVar8;
      } while (0 < (longlong)uVar8);
    }
    lVar6 = ((longlong)puVar5 - (longlong)param_1 >> 4) * -0x5555555555555555;
  }
  else {
    lVar6 = param_4 >> 1;
    uVar7 = (param_3 - (longlong)param_2 >> 4) * -0x5555555555555555;
    puVar5 = param_1 + lVar6 * 6;
    puVar9 = param_2;
    if (0 < (longlong)uVar7) {
      iVar1 = *(int *)*puVar5;
      do {
        uVar8 = uVar7 >> 1;
        iVar4 = *(int *)puVar9[uVar8 * 6];
        if (iVar4 == 0x2b) {
          iVar4 = 4;
        }
        else if (iVar4 == 0x2c) {
          iVar4 = 0;
        }
        else if (iVar4 == 0x2d) {
          iVar4 = 3;
        }
        else if (iVar4 == 0x2e) {
          iVar4 = 1;
        }
        else if (iVar4 == 0x30) {
          iVar4 = 2;
        }
        else {
          iVar4 = iVar4 + 1000;
        }
        if (iVar1 == 0x2b) {
          iVar2 = 4;
        }
        else if (iVar1 == 0x2c) {
          iVar2 = 0;
        }
        else if (iVar1 == 0x2d) {
          iVar2 = 3;
        }
        else if (iVar1 == 0x2e) {
          iVar2 = 1;
        }
        else if (iVar1 == 0x30) {
          iVar2 = 2;
        }
        else {
          iVar2 = iVar1 + 1000;
        }
        if (iVar4 < iVar2) {
          puVar9 = puVar9 + uVar8 * 6 + 6;
          uVar8 = uVar7 + (-1 - uVar8);
        }
        uVar7 = uVar8;
      } while (0 < (longlong)uVar8);
    }
    lVar3 = ((longlong)puVar9 - (longlong)param_2 >> 4) * -0x5555555555555555;
  }
  FUN_1803b9ff0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar5,puVar9,lVar6,
                lVar3);
  return;
}



/* ===== 1803b9c10 FUN_1803b9c10 ===== */

void FUN_1803b9c10(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_5 < param_4) {
    uVar5 = param_2 - param_1 >> 3;
    puVar1 = (undefined8 *)(param_2 + (param_5 >> 1) * 8);
    lVar7 = param_1;
    if (0 < (longlong)uVar5) {
      iVar2 = **(int **)*puVar1;
      do {
        uVar6 = uVar5 >> 1;
        if (iVar2 == 0x2b) {
          iVar4 = 4;
        }
        else if (iVar2 == 0x2c) {
          iVar4 = 0;
        }
        else if (iVar2 == 0x2d) {
          iVar4 = 3;
        }
        else if (iVar2 == 0x2e) {
          iVar4 = 1;
        }
        else if (iVar2 == 0x30) {
          iVar4 = 2;
        }
        else {
          iVar4 = iVar2 + 1000;
        }
        iVar3 = *(int *)**(undefined8 **)(lVar7 + uVar6 * 8);
        if (iVar3 == 0x2b) {
          iVar3 = 4;
        }
        else if (iVar3 == 0x2c) {
          iVar3 = 0;
        }
        else if (iVar3 == 0x2d) {
          iVar3 = 3;
        }
        else if (iVar3 == 0x2e) {
          iVar3 = 1;
        }
        else if (iVar3 == 0x30) {
          iVar3 = 2;
        }
        else {
          iVar3 = iVar3 + 1000;
        }
        if (iVar3 <= iVar4) {
          lVar7 = lVar7 + uVar6 * 8 + 8;
          uVar6 = uVar5 + (-1 - uVar6);
        }
        uVar5 = uVar6;
      } while (0 < (longlong)uVar6);
    }
    FUN_1803ba0e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar7,puVar1,
                  lVar7 - param_1 >> 3,param_5 >> 1);
  }
  else {
    uVar5 = param_3 - param_2 >> 3;
    puVar1 = (undefined8 *)(param_1 + (param_4 >> 1) * 8);
    lVar7 = param_2;
    if (0 < (longlong)uVar5) {
      iVar2 = **(int **)*puVar1;
      do {
        uVar6 = uVar5 >> 1;
        iVar4 = *(int *)**(undefined8 **)(lVar7 + uVar6 * 8);
        if (iVar4 == 0x2b) {
          iVar4 = 4;
        }
        else if (iVar4 == 0x2c) {
          iVar4 = 0;
        }
        else if (iVar4 == 0x2d) {
          iVar4 = 3;
        }
        else if (iVar4 == 0x2e) {
          iVar4 = 1;
        }
        else if (iVar4 == 0x30) {
          iVar4 = 2;
        }
        else {
          iVar4 = iVar4 + 1000;
        }
        if (iVar2 == 0x2b) {
          iVar3 = 4;
        }
        else if (iVar2 == 0x2c) {
          iVar3 = 0;
        }
        else if (iVar2 == 0x2d) {
          iVar3 = 3;
        }
        else if (iVar2 == 0x2e) {
          iVar3 = 1;
        }
        else if (iVar2 == 0x30) {
          iVar3 = 2;
        }
        else {
          iVar3 = iVar2 + 1000;
        }
        if (iVar4 < iVar3) {
          lVar7 = lVar7 + uVar6 * 8 + 8;
          uVar6 = uVar5 + (-1 - uVar6);
        }
        uVar5 = uVar6;
      } while (0 < (longlong)uVar6);
    }
    FUN_1803ba0e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar1,lVar7,
                  param_4 >> 1,lVar7 - param_2 >> 3);
  }
  return;
}



/* ===== 1803b9f00 FUN_1803b9f00 ===== */

void FUN_1803b9f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1803ba400(param_9,param_2,param_10,param_4 - param_11,param_12,param_6,param_7);
  FUN_1803b6e50(param_1,param_9,uVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_1803b6e50(uVar1,param_10,param_3,param_4 - param_11);
  return;
}



/* ===== 1803b9ff0 FUN_1803b9ff0 ===== */

void FUN_1803b9ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1803ba400(param_9,param_2,param_10,param_4 - param_11,param_12,param_6,param_7);
  FUN_1803b7260(param_1,param_9,uVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_1803b7260(uVar1,param_10,param_3,param_4 - param_11);
  return;
}



/* ===== 1803ba0e0 FUN_1803ba0e0 ===== */

void FUN_1803ba0e0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,undefined1 param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12)

{
  longlong lVar1;
  
  param_4 = param_4 - param_11;
  if (param_4 == 0) {
LAB_1803ba1e1:
    lVar1 = param_10;
  }
  else {
    if (param_12 != 0) {
      if ((param_4 <= param_12) && (param_4 <= param_7)) {
        FUN_180540530(param_6,param_9,param_2 - param_9);
        FUN_180540530(param_9,param_2,param_10 - param_2);
        lVar1 = (param_10 - param_2) + param_9;
        FUN_180540530(lVar1,param_6,param_2 - param_9);
        goto LAB_1803ba208;
      }
      if (param_12 <= param_7) {
        lVar1 = param_10 - param_2;
        FUN_180540530(param_6,param_2,lVar1);
        FUN_180540530(param_10 - (param_2 - param_9),param_9,param_2 - param_9);
        FUN_180540530(param_9,param_6,lVar1);
        lVar1 = lVar1 + param_9;
        goto LAB_1803ba208;
      }
      if (param_9 == param_2) goto LAB_1803ba1e1;
      if (param_2 != param_10) {
        FUN_1804ea090(param_9,param_2,param_10);
        lVar1 = (param_10 - param_2 & 0xfffffffffffffff8U) + param_9;
        goto LAB_1803ba208;
      }
    }
    lVar1 = param_9;
  }
LAB_1803ba208:
  FUN_1803b7790(param_1,param_9,lVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_1803b7790(lVar1,param_10,param_3,param_4);
  return;
}



/* ===== 1803ba290 FUN_1803ba290 ===== */

void FUN_1803ba290(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18035b6c0(param_9,param_2,param_10,param_4 - param_11,param_12,param_6,param_7);
  FUN_1803b7c30(param_1,param_9,uVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_1803b7c30(uVar1,param_10,param_3,param_4 - param_11);
  return;
}



/* ===== 1803ba380 FUN_1803ba380 ===== */

void FUN_1803ba380(ulonglong *param_1)

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
  *(undefined8 *)(puVar5 + -8) = 0x1803ba3e7;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1803ba400 FUN_1803ba400 ===== */

longlong FUN_1803ba400(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
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
          param_3 = (param_3 - param_2 >> 4) * 0x10 + param_1;
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



/* ===== 1803ba540 FUN_1803ba540 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803ba540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  DWORD DVar1;
  ulonglong *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_458 [32];
  undefined8 local_438;
  undefined8 *local_430;
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_458;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180540170(local_428,0,0x400);
  puVar2 = (ulonglong *)FUN_180013640();
  local_438 = 0;
  local_430 = &local_res10;
  FUN_180501904(*puVar2 | 2,local_428,0x400,param_1);
  DVar1 = GetTickCount();
  FUN_1802b2870("wl_preview.log","[%lu] %s\n",DVar1,local_428);
  return;
}



/* ===== 1803ba600 FUN_1803ba600 ===== */

undefined8 FUN_1803ba600(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 local_res8;
  longlong *local_res18;
  int local_28 [8];
  
  local_res18 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x18))(param_1,&local_res18);
  if (local_res18 == (longlong *)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  local_28[2] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  if (iVar1 == 9) {
    local_28[0] = 10;
  }
  else if (iVar1 == 0x17) {
    local_28[0] = 0x18;
  }
  else if (iVar1 == 0x1b) {
    local_28[0] = 0x1c;
  }
  else if (iVar1 == 0x5a) {
    local_28[0] = 0x57;
  }
  else {
    local_28[0] = 0x58;
    if (iVar1 != 0x5c) {
      local_28[0] = iVar1;
    }
  }
  local_28[1] = 4;
  local_28[3] = 1;
  local_res8 = 0;
  iVar1 = (**(code **)(*local_res18 + 0x38))(local_res18,param_1,local_28,&local_res8);
  if (iVar1 < 0) {
    local_res8 = 0;
    iVar1 = (**(code **)(*local_res18 + 0x38))(local_res18,param_1,0,&local_res8);
    if (iVar1 < 0) {
      local_res8 = 0;
    }
  }
  (**(code **)(*local_res18 + 0x10))();
  return local_res8;
}



/* ===== 1803ba710 FUN_1803ba710 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803ba710(longlong *param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  size_t sVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  uint local_d0 [2];
  longlong *local_c8;
  undefined *local_c0;
  undefined1 local_b8 [8];
  char local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined8 uStack_84;
  char local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_f8;
  local_d8 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x38))(param_1,&local_d8);
  if (local_d8 == (longlong *)0x0) {
    return;
  }
  local_c0 = &DAT_1809f9e90;
  iVar3 = FUN_1804e4d70(&DAT_1809f9e90);
  if (iVar3 != 0) goto LAB_1803baaa9;
  if (DAT_1809f9edc == 0x7fffffff) goto LAB_1803baab4;
  plVar5 = &DAT_1809f9df0;
  do {
    if ((local_d8 == (longlong *)*plVar5) || (local_d8 == (longlong *)plVar5[4]))
    goto LAB_1803baa92;
    plVar5 = plVar5 + 8;
  } while (plVar5 != (longlong *)&DAT_1809f9e70);
  FUN_1803be1b0(local_d8,local_b8,&local_d8);
  if (local_b0 == '\0') {
LAB_1803baa92:
    (**(code **)(*local_d8 + 0x10))();
    FUN_1804e4e90(&DAT_1809f9e90);
    return;
  }
  FUN_1804e4e90(&DAT_1809f9e90);
  local_c8 = (longlong *)0x0;
  iVar3 = (**(code **)*local_d8)(local_d8,&DAT_18058a4c0,&local_c8);
  if ((iVar3 < 0) || (local_c8 == (longlong *)0x0)) goto LAB_1803baa5c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  local_88 = 0;
  uStack_84 = 0;
  (**(code **)(*local_c8 + 0x50))(local_c8,&local_a8);
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
  local_d0[0] = 0x3f;
  if (((((local_88 & 8) == 0) ||
       (((((local_88 & 0x40) != 0 || (local_98._4_4_ != 1)) || (uStack_a0._4_4_ != 1)) ||
        (((uint)local_a8 < 0x40 || (local_a8._4_4_ < 0x40)))))) || (0x1000 < (uint)local_a8)) ||
     ((0x1000 < local_a8._4_4_ ||
      (iVar3 = (**(code **)(*local_c8 + 0x20))(local_c8,&DAT_1806b9b28,local_d0,local_78), iVar3 < 0
      )))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar6 = (ulonglong)local_d0[0];
  if (0x3f < local_d0[0]) {
    uVar6 = 0x3f;
  }
  if (0x3f < (uint)uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_1804ed0f0();
  }
  local_78[uVar6] = '\0';
  if (bVar1) {
    iVar3 = strncmp(local_78,"panorama_rt_wl_esp_preview",0x1a);
    puVar2 = PTR_s_wl_esp_preview_e_menu_1806b9b08;
    if (iVar3 == 0) {
      sVar7 = strlen(PTR_s_wl_esp_preview_e_menu_1806b9b08 + 0xe);
      iVar3 = strncmp(local_78 + 0x1a,puVar2 + 0xe,sVar7 & 0xffffffff);
      puVar2 = PTR_s_wl_esp_preview_e_hud_1806b9b10;
      if (iVar3 != 0) {
LAB_1803ba910:
        sVar7 = strlen(PTR_s_wl_esp_preview_e_hud_1806b9b10 + 0xe);
        iVar3 = strncmp(local_78 + 0x1a,puVar2 + 0xe,sVar7 & 0xffffffff);
        puVar2 = PTR_s_wl_esp_preview_t_menu_1806b9b18;
        if (iVar3 == 0) {
          iVar3 = 1;
          if ((local_78[sVar7 + 0x1a] == '\0') || (local_78[sVar7 + 0x1a] == '.'))
          goto LAB_1803ba9be;
        }
        sVar7 = strlen(PTR_s_wl_esp_preview_t_menu_1806b9b18 + 0xe);
        iVar3 = strncmp(local_78 + 0x1a,puVar2 + 0xe,sVar7 & 0xffffffff);
        puVar2 = PTR_s_wl_esp_preview_t_hud_1806b9b20;
        if (iVar3 == 0) {
          iVar3 = 2;
          if ((local_78[sVar7 + 0x1a] == '\0') || (local_78[sVar7 + 0x1a] == '.'))
          goto LAB_1803ba9be;
        }
        sVar7 = strlen(PTR_s_wl_esp_preview_t_hud_1806b9b20 + 0xe);
        iVar3 = strncmp(local_78 + 0x1a,puVar2 + 0xe,sVar7 & 0xffffffff);
        if (iVar3 == 0) {
          iVar3 = 3;
          if ((local_78[sVar7 + 0x1a] == '\0') || (local_78[sVar7 + 0x1a] == '.'))
          goto LAB_1803ba9be;
        }
        goto LAB_1803ba9b9;
      }
      iVar3 = 0;
      if ((local_78[sVar7 + 0x1a] != '\0') && (local_78[sVar7 + 0x1a] != '.')) goto LAB_1803ba910;
    }
    else {
LAB_1803ba9b9:
      iVar3 = -1;
    }
LAB_1803ba9be:
    if ((-1 < iVar3) && (lVar8 = FUN_1803ba600(local_c8,&local_a8), plVar5 = local_d8, lVar8 != 0))
    {
      local_c0 = &DAT_1809f9e90;
      iVar4 = FUN_1804e4d70(&DAT_1809f9e90);
      if (iVar4 != 0) {
LAB_1803baaa9:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f9edc == 0x7fffffff) {
LAB_1803baab4:
        DAT_1809f9edc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      lVar9 = (longlong)(iVar3 / 2);
      if ((longlong *)(&DAT_1809f9e18)[lVar9 * 8] != (longlong *)0x0) {
        (**(code **)(*(longlong *)(&DAT_1809f9e18)[lVar9 * 8] + 0x10))();
      }
      (&DAT_1809f9e2c)[lVar9 * 0x10] = iVar3 % 2;
      (&DAT_1809f9e18)[lVar9 * 8] = lVar8;
      (&DAT_1809f9e10)[lVar9 * 8] = plVar5;
      (&DAT_1809f9e20)[lVar9 * 0x10] = (uint)local_a8;
      (&DAT_1809f9e24)[lVar9 * 0x10] = local_a8._4_4_;
      (&DAT_1809f9e28)[lVar9 * 0x10] = (undefined4)local_98;
      FUN_1804e4e90(&DAT_1809f9e90);
    }
  }
  (**(code **)(*local_c8 + 0x10))();
LAB_1803baa5c:
  (**(code **)(*local_d8 + 0x10))();
  return;
}



/* ===== 1803baad0 FUN_1803baad0 ===== */

int FUN_1803baad0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1 != 0) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      lVar1 = FUN_1804ef120(param_1,(&PTR_s_wl_esp_preview_e_menu_1806b9b08)[iVar2],param_3,param_4,
                            iVar2);
      if (lVar1 != 0) {
        return iVar2;
      }
    }
  }
  return -1;
}



/* ===== 1803bab40 FUN_1803bab40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803bab40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  size_t sVar7;
  size_t sVar8;
  undefined8 *_Buf1;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_c8;
  lVar5 = FUN_18000f3a0(param_1 + 8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (lVar5 != 0) {
    uVar6 = FUN_18000f3a0(lVar5);
    cVar3 = FUN_1800e30f0(uVar6,&local_98);
    if ((cVar3 != '\0') &&
       ((lVar5 = FUN_1804ef120(&local_98,"panorama"), lVar5 != 0 ||
        (lVar5 = FUN_1804ef120(&local_98,&DAT_18089fcec), lVar5 != 0)))) {
      local_a8 = &DAT_1809f9f30;
      iVar4 = FUN_1804e4d70(&DAT_1809f9f30);
      puVar2 = DAT_18110b590;
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f9f7c == 0x7fffffff) {
        DAT_1809f9f7c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      puVar1 = DAT_18110b588;
      if ((ulonglong)((longlong)DAT_18110b590 - (longlong)DAT_18110b588) < 0x600) {
        for (; puVar1 != puVar2; puVar1 = puVar1 + 4) {
          sVar7 = strlen((char *)&local_98);
          sVar8 = puVar1[2];
          if ((ulonglong)puVar1[3] < 0x10) {
            _Buf1 = puVar1;
          }
          else {
            _Buf1 = (undefined8 *)*puVar1;
          }
          if ((sVar8 == sVar7) &&
             ((sVar8 == 0 || (iVar4 = memcmp(_Buf1,&local_98,sVar8), iVar4 == 0))))
          goto LAB_1803bacd9;
        }
        if (puVar2 == DAT_18110b598) {
          FUN_1803be710();
        }
        else {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          sVar8 = strlen((char *)&local_98);
          FUN_1800133a0(puVar2,&local_98,sVar8);
          DAT_18110b590 = DAT_18110b590 + 4;
        }
      }
LAB_1803bacd9:
      FUN_1804e4e90(&DAT_1809f9f30);
    }
  }
  return;
}



/* ===== 1803bad30 FUN_1803bad30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803bad30(void)

{
  undefined2 local_13;
  undefined1 local_11;
  undefined4 local_c;
  
  if (DAT_181109070 != (longlong *)0x0) {
    (**(code **)(*DAT_181109070 + 0x10))();
  }
  _DAT_181109085 = local_13;
  DAT_181109087 = local_11;
  DAT_181109088._4_4_ = local_c;
  DAT_181109070 = (longlong *)0x0;
  _DAT_181109078 = 0;
  DAT_181109080 = 0;
  DAT_181109084 = 0;
  DAT_181109088._0_4_ = 0;
  return;
}



/* ===== 1803bad90 FUN_1803bad90 ===== */

void FUN_1803bad90(void)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f9e90);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f9edc == 0x7fffffff) {
    DAT_1809f9edc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  FUN_18025ba80(&DAT_18110b5c0);
  FUN_1804e4e90(&DAT_1809f9e90);
  DAT_181108f58 = 0;
  DAT_180cd1306 = 1;
  return;
}



/* ===== 1803bae00 FUN_1803bae00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803bae00(void)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar5;
  undefined8 *local_res8;
  longlong local_98;
  int local_90;
  longlong local_88;
  int local_80;
  undefined2 local_77;
  undefined1 local_75;
  uint7 uStack_1f;
  
  DAT_180cd1306 = 0;
  local_res8 = (undefined8 *)&DAT_1809f9e90;
  iVar2 = FUN_1804e4d70(&DAT_1809f9e90);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f9edc == 0x7fffffff) {
    DAT_1809f9edc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar4 = &DAT_1809f9df0;
  uVar5 = extraout_XMM0_Da;
  do {
    if (puVar4[1] != 0) {
      local_90 = DAT_181108f70 + 4;
      local_98 = puVar4[1];
      uVar5 = FUN_1803be010(uVar5,&local_98);
    }
    if (puVar4[5] != 0) {
      local_80 = DAT_181108f70 + 4;
      local_88 = puVar4[5];
      uVar5 = FUN_1803be010(uVar5,&local_88);
    }
    puVar4[1] = 0;
    puVar4[5] = 0;
    *puVar4 = 0;
    puVar4[4] = 0;
    puVar4[2] = 0;
    puVar1 = DAT_18110b5c8;
    puVar4 = puVar4 + 8;
  } while (puVar4 != (undefined8 *)&DAT_1809f9e70);
  if (DAT_18110b5d0 != 0) {
    if (DAT_18110b5d0 < DAT_18110b5f8 >> 3) {
      FUN_18025d8f0(&DAT_18110b5c0,*DAT_18110b5c8,DAT_18110b5c8);
    }
    else {
      *(undefined8 *)DAT_18110b5c8[1] = 0;
      puVar4 = (undefined8 *)*puVar1;
      while (puVar4 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*puVar4;
        thunk_FUN_1803d64e0(puVar4,0x18);
        puVar4 = puVar1;
      }
      *DAT_18110b5c8 = DAT_18110b5c8;
      DAT_18110b5c8[1] = DAT_18110b5c8;
      DAT_18110b5d0 = 0;
      local_res8 = DAT_18110b5c8;
      FUN_180026a10(DAT_18110b5d8,DAT_18110b5e0,&local_res8);
    }
  }
  FUN_1804e4e90(&DAT_1809f9e90);
  FUN_1803bad30();
  DAT_180cd1305 = 0;
  DAT_181108fd0 = 0;
  DAT_181109010 = 0;
  DAT_181108fd8._0_4_ = 0;
  _DAT_181109018 = 0;
  _DAT_181109020 = 0;
  DAT_181109028._0_1_ = 0;
  DAT_181109028._1_2_ = local_77;
  DAT_181109028._3_1_ = local_75;
  _DAT_181108fb8 = 0;
  _DAT_181108fc0 = 0;
  DAT_181108fc8 = 0;
  _DAT_181108fc9 = local_77;
  DAT_181108fcb = local_75;
  lVar3 = 0;
  do {
    (&DAT_181108eb0)[lVar3 * 10] = 0;
    *(undefined8 *)(&DAT_181108eb8 + lVar3 * 0x50) = 0;
    *(undefined8 *)(&DAT_181108ec0 + lVar3 * 0x50) = 0;
    *(undefined8 *)(lVar3 * 0x50 + 0x181108ec8) = 0;
    *(undefined8 *)(&DAT_181108ed0 + lVar3 * 0x50) = 0;
    *(undefined8 *)(lVar3 * 0x50 + 0x181108ed8) = 0;
    *(undefined8 *)(&DAT_181108ee0 + lVar3 * 0x50) = 0;
    *(undefined8 *)(lVar3 * 0x50 + 0x181108ee8) = 0;
    *(undefined8 *)(&DAT_181108ef0 + lVar3 * 0x50) = 0;
    *(ulonglong *)(&DAT_181108ef8 + lVar3 * 0x50) = (ulonglong)uStack_1f << 8;
    (&DAT_181109000)[lVar3] = 0;
    (&DAT_1809f9d98)[lVar3] = 0xffffffff;
    (&DAT_18110b570)[lVar3] = 0;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 2);
  lVar3 = 0;
  do {
    (&DAT_181108fe0)[lVar3] = 0;
    (&DAT_181109090)[lVar3] = 0;
    (&DAT_181108f78)[lVar3] = 0;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  return;
}



/* ===== 1803bb0d0 FUN_1803bb0d0 ===== */

undefined1 * FUN_1803bb0d0(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  if (DAT_180cd1307 == '\0') {
    if (DAT_180cd1a96 != '\0') {
      puVar2 = (undefined1 *)0x0;
      if (param_1 == 0) {
        puVar2 = &DAT_18093c750;
      }
      return puVar2;
    }
    if ((DAT_18110902c != 3) || (param_1 == 0)) {
      if (DAT_18110902c == 3) {
        uVar1 = 3;
      }
      else {
        uVar1 = (uint)(param_1 != 0);
      }
      lVar3 = 0;
      if (uVar1 < 4) {
        lVar3 = (longlong)(int)uVar1;
      }
      return &DAT_18091baf8 + lVar3 * 0x192c;
    }
  }
  return (undefined1 *)0x0;
}



/* ===== 1803bb180 FUN_1803bb180 ===== */

void FUN_1803bb180(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  HMODULE hModule;
  FARPROC pFVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  longlong *plVar11;
  uint uVar12;
  undefined8 uVar13;
  bool bVar14;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  iVar5 = FUN_1804e4d70(&DAT_1809f9ee0);
  iVar3 = DAT_181108fd8._4_4_;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f9f2c == 0x7fffffff) {
    DAT_1809f9f2c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  LOCK();
  DAT_181108fd8._4_4_ = 0;
  UNLOCK();
  if (iVar3 != 0) {
    if (((DAT_180961ab0 == 0) ||
        ((DAT_1811150a0 == 0 &&
         (((hModule = GetModuleHandleA("panorama.dll"), hModule == (HMODULE)0x0 ||
           (pFVar6 = GetProcAddress(hModule,"CreateInterface"), pFVar6 == (FARPROC)0x0)) ||
          (DAT_1811150a0 = (*pFVar6)("PanoramaUIEngine001",0), DAT_1811150a0 == 0)))))) ||
       (cVar4 = FUN_180200ed0(), cVar4 == '\0')) {
      FUN_1803ba540("job %d | panorama not ready",iVar3);
      DAT_1811090b0 = 2;
    }
    else if (iVar3 == 2) {
      if (((DAT_180961ab0 == 0) || (lVar7 = FUN_18000f3a0(), lVar7 == 0)) ||
         ((lVar7 = FUN_18000f3a0(lVar7 + 8), lVar7 == 0 ||
          ((lVar8 = FUN_18000f3a0(lVar7), lVar8 == 0 || (lVar8 = FUN_18000f3a0(lVar8), lVar8 == 0)))
          ))) {
        lVar7 = 0;
      }
      local_58 = lVar7;
      if ((((DAT_180961ab8 == 0) || (lVar7 = FUN_18000f3a0(), lVar7 == 0)) ||
          (lVar7 = FUN_18000f3a0(lVar7 + 8), lVar7 == 0)) ||
         ((lVar8 = FUN_18000f3a0(lVar7), lVar8 == 0 || (lVar8 = FUN_18000f3a0(lVar8), lVar8 == 0))))
      {
        lVar7 = 0;
      }
      local_50 = lVar7;
      plVar11 = &local_58;
      do {
        lVar7 = *plVar11;
        if (((lVar7 != 0) && (cVar4 = FUN_180200ed0(), cVar4 != '\0')) &&
           ((lVar8 = FUN_180200ff0(), lVar8 != 0 &&
            (((lVar9 = FUN_18000f3a0(lVar8), lVar9 != 0 &&
              (pcVar10 = (code *)FUN_18000f3a0(lVar9 + 0x268), DAT_180ceb448 <= pcVar10)) &&
             (pcVar10 < DAT_180ceb440)))))) {
          (*pcVar10)(lVar8,lVar7,
                     "\n(function () {\n    var root = $.GetContextPanel();\n    while (root && root.GetParent && root.GetParent()) root = root.GetParent();\n    if (!root) return;\n    var host = root.FindChildTraverse(\'WlEspPreviewHost\');\n    if (host) { try { host.DeleteAsync(0.0); } catch (e) {} }\n})();\n"
                     ,&DAT_18070230d,1);
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != &local_48);
    }
    else {
      bVar2 = false;
      bVar14 = false;
      uVar12 = 0;
      do {
        lVar7 = DAT_180961ab0;
        if (uVar12 != 1) {
          lVar7 = DAT_180961ab8;
        }
        if (((lVar7 == 0) || (lVar7 = FUN_18000f3a0(), lVar7 == 0)) ||
           ((lVar7 = FUN_18000f3a0(lVar7 + 8), lVar7 == 0 ||
            ((lVar8 = FUN_18000f3a0(lVar7), lVar8 == 0 || (lVar8 = FUN_18000f3a0(lVar8), lVar8 == 0)
             ))))) {
          lVar7 = 0;
        }
        if (lVar7 != 0) {
          bVar2 = true;
          if (((((&DAT_1811090d0 + (ulonglong)uVar12 * 0x124f == (undefined *)0x0) ||
                (cVar4 = FUN_180200ed0(), cVar4 == '\0')) || (lVar8 = FUN_180200ff0(), lVar8 == 0))
              || ((lVar9 = FUN_18000f3a0(lVar8), lVar9 == 0 ||
                  (pcVar10 = (code *)FUN_18000f3a0(lVar9 + 0x268), pcVar10 < DAT_180ceb448)))) ||
             (DAT_180ceb440 <= pcVar10)) {
            bVar1 = false;
            uVar13 = 0;
          }
          else {
            (*pcVar10)(lVar8,lVar7,&DAT_1811090d0 + (ulonglong)uVar12 * 0x124f,&DAT_18070230d,1);
            bVar1 = true;
            uVar13 = 1;
          }
          FUN_1803ba540("build script | tree %d | root %p | ran %d",uVar12,lVar7,uVar13);
          bVar14 = bVar1 || bVar14;
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < 2);
      if (bVar2) {
        DAT_1811090b0 = 2 - (uint)bVar14;
      }
      else {
        DAT_1811090b0 = 3;
      }
    }
  }
  FUN_1804e4e90(&DAT_1809f9ee0);
  return;
}



/* ===== 1803bb4e0 FUN_1803bb4e0 ===== */

undefined1 FUN_1803bb4e0(char *param_1)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  iVar1 = FUN_1804e4e00(&DAT_1809f9ee0);
  if ((iVar1 == 0) && (DAT_181108fd8._4_4_ == 0)) {
    uVar4 = 7;
    if (param_1 == "grenade") {
      uVar4 = 0x2e;
    }
    uVar5 = 600;
    if (param_1 == "weapon") {
      uVar5 = 0x1e6;
    }
    uVar6 = 0x15e;
    if (param_1 == "weapon") {
      uVar6 = 0x360;
    }
    lVar3 = 0;
    do {
      if ((param_1 == "weapon") || (param_1 == "grenade")) {
        snprintf(&DAT_1811090d0 + lVar3 * 0x124f,0x124f,
                 "\n(function () {\n    var root = $.GetContextPanel();\n    while (root && root.GetParent && root.GetParent()) root = root.GetParent();\n    if (!root) return;\n\n    var stale = root.FindChildTraverse(\'WlEspPreviewHost\');\n    if (stale) { try { stale.DeleteAsync(0.0); } catch (e) {} }\n\n    var host = $.CreatePanel(\'Panel\', root, \'WlEspPreviewHost\', {\n        hittest: false,\n        style: \'width: 1px; height: 1px; overflow: clip; opacity: 0.01; z-index: -1000;\'\n    });\n    if (!host) return;\n\n    var frame = $.CreatePanel(\'Panel\', host, \'WlEspPreviewFrame\', {\n        hittest: false,\n        style: \'width: %dpx; height: %dpx;\'\n    });\n    if (!frame) return;\n\n    var model = null;\n    try {\n        model = $.CreatePanel(\'MapItemPreviewPanel\', frame, \'%s\', {\n            map: \'ui/acknowledge_item\',\n            camera: \'cam_default\',\n            initial_entity: \'item\',\n            active_item_idx: \'0\',\n            player: false,\n            \'require-composition-layer\': true,\n            \'composition-layer-texture-name\': \'%s\',\n            \'transparent-background\': true,\n            \'disable-depth-of-field\': true,\n            mouse_rotate: false,\n            auto_recenter: false,\n            rotation_limit_x: \'360\',\n            rotation_limit_y: \'90\',\n            auto_rotate_x: \'0\',\n            auto_rotate_y: \'0\',\n            auto_rotate_period_x: \'0\',\n            auto_rotate_period_y: \'0\',\n            hide_while_waiting_for_composite_materials: false,\n            \'pin-fov\': \'horizontal\',\n            hittest: false,\n            style: \'width: 100%%; height: 100%%;\'\n        });\n    } catch (e) {\n        model = null;\n    }\n    if (!model) return;\n\n    var def = %d;\n    var placed = false;\n    var tries = 0;\n    var place = function () {\n        if (placed || tries > 120 || !model.SetItemItemId || typeof InventoryAPI === \'undefined\') return;\n        tries++;\n        try {\n            var id = InventoryAPI.GetFauxItemIDFromDefAndPaintIndex(def, 0);\n            if (model.SetActiveItem) model.SetActiveItem(0);\n            if (mod..." /* TRUNCATED STRING LITERAL */
                 ,uVar6,uVar5,(&PTR_s_WlEspPreviewModelEM_1806b9c88)[lVar3],
                 (&PTR_s_wl_esp_preview_e_menu_1806b9b08)[lVar3],uVar4);
      }
      else if (param_1 == "players") {
        snprintf(&DAT_1811090d0 + lVar3 * 0x124f,0x124f,
                 "\n(function () {\n    var root = $.GetContextPanel();\n    while (root && root.GetParent && root.GetParent()) root = root.GetParent();\n    if (!root) return;\n\n    var stale = root.FindChildTraverse(\'WlEspPreviewHost\');\n    if (stale) { try { stale.DeleteAsync(0.0); } catch (e) {} }\n\n    var host = $.CreatePanel(\'Panel\', root, \'WlEspPreviewHost\', {\n        hittest: false,\n        style: \'width: 1px; height: 1px; overflow: clip; opacity: 0.01; z-index: -1000;\'\n    });\n    if (!host) return;\n\n    var width = %d;\n    var height = %d;\n    var scenes = [[\'%s\', \'%s\', \'%s\', %d], [\'%s\', \'%s\', \'%s\', %d]];\n    var weapon = %d;\n    var models = [null, null];\n\n    var call = function (model, name, value) {\n        try {\n            if (model && model[name]) model[name](value);\n        } catch (e) {}\n    };\n\n    var faux = function (def) {\n        if (typeof InventoryAPI === \'undefined\') return \'\';\n        return InventoryAPI.GetFauxItemIDFromDefAndPaintIndex(def, 0);\n    };\n\n    var spawn = function (index, attempt) {\n        var info = scenes[index];\n        var frame = host.FindChildTraverse(\'WlEspPreviewFrame\' + index);\n        if (!frame) {\n            frame = $.CreatePanel(\'Panel\', host, \'WlEspPreviewFrame\' + index, {\n                hittest: false,\n                style: \'width: \' + width + \'px; height: \' + height + \'px;\'\n            });\n        }\n        if (!frame) return;\n\n        var previous = frame.FindChildTraverse(info[0]);\n        if (previous) { try { previous.DeleteAsync(0.0); } catch (e) {} }\n\n        var model = null;\n        try {\n            model = $.CreatePanel(\'MapPlayerPreviewPanel\', frame, info[0], {\n                \'require-composition-layer\': true,\n                \'composition-layer-texture-name\': info[1],\n                map: \'ui/buy_menu\',\n                player: true,\n                camera: \'cam_loadoutmenu_ct\',\n                \'transparent-background\': true,\n                animgraphcharactermode: \'main-menu\',\n                playername: \'vanity_character\',\n                playermodel: \'%s\',\n    ..." /* TRUNCATED STRING LITERAL */
                 ,0x15e,600,(&PTR_s_WlEspPreviewModelEM_1806b9c88)[lVar3],
                 (&PTR_s_wl_esp_preview_e_menu_1806b9b08)[lVar3],
                 "agents/models/ctm_sas/ctm_sas.vmdl",0x13ad,
                 (&PTR_s_WlEspPreviewModelTM_1806b9c98)[lVar3],
                 (&PTR_s_wl_esp_preview_t_menu_1806b9b18)[lVar3],
                 "agents/models/tm_phoenix/tm_phoenix.vmdl",0x13ac,0x28,
                 "agents/models/ctm_fbi/ctm_fbi.vmdl","models/player/ctm_sas.vmdl");
      }
      else {
        snprintf(&DAT_1811090d0 + lVar3 * 0x124f,0x124f,
                 "\n(function () {\n    var root = $.GetContextPanel();\n    while (root && root.GetParent && root.GetParent()) root = root.GetParent();\n    if (!root) return;\n\n    var stale = root.FindChildTraverse(\'WlEspPreviewHost\');\n    if (stale) { try { stale.DeleteAsync(0.0); } catch (e) {} }\n\n    var host = $.CreatePanel(\'Panel\', root, \'WlEspPreviewHost\', {\n        hittest: false,\n        style: \'width: 1px; height: 1px; overflow: clip; opacity: 0.01; z-index: -1000;\'\n    });\n    if (!host) return;\n\n    var frame = $.CreatePanel(\'Panel\', host, \'WlEspPreviewFrame\', {\n        hittest: false,\n        style: \'width: %dpx; height: %dpx;\'\n    });\n    if (!frame) return;\n\n    var sequence = \'t_main_menu_rifle_awp_lookat\';\n    var models = [\'%s\', \'%s\'];\n    var model = null;\n    var tick = 0;\n\n    var spawn = function (index) {\n        if (index >= models.length) return;\n\n        var previous = frame.FindChildTraverse(\'%s\');\n        if (previous) { try { previous.DeleteAsync(0.0); } catch (e) {} }\n\n        try {\n            model = $.CreatePanel(\'MapPlayerPreviewPanel\', frame, \'%s\', {\n                map: \'ui/buy_menu\',\n                camera: \'cam_loadoutmenu_ct\',\n                \'require-composition-layer\': true,\n                \'composition-layer-texture-name\': \'%s\',\n                \'transparent-background\': true,\n                \'pin-fov\': \'vertical\',\n                playermodel: models[index],\n                playername: \'vanity_character\',\n                animgraphcharactermode: \'main-menu\',\n                pose_sequence: sequence,\n                player: true,\n                sync_spawn_addons: true,\n                hittest: false,\n                style: \'width: 100%%; height: 100%%;\'\n            });\n        } catch (e) {\n            model = null;\n        }\n\n        if (!model) {\n            $.Schedule(0.1, function () { spawn(index + 1); });\n            return;\n        }\n\n        var held = %d;\n        $.Schedule(0.3, function () {\n            try {\n                if (held > 0 && model && model.EquipPlayerWithItem && typeof ..." /* TRUNCATED STRING LITERAL */
                 ,0x15e,600,param_1,param_1,(&PTR_s_WlEspPreviewModelEM_1806b9c88)[lVar3],
                 (&PTR_s_WlEspPreviewModelEM_1806b9c88)[lVar3],
                 (&PTR_s_wl_esp_preview_e_menu_1806b9b08)[lVar3],0);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 2);
    DAT_1811090b0 = 0;
    LOCK();
    bVar7 = DAT_181108fd8._4_4_ == 0;
    if (bVar7) {
      DAT_181108fd8._4_4_ = 1;
    }
    UNLOCK();
    if (bVar7) {
      DAT_181108fac = 3;
      uVar2 = 1;
      goto LAB_1803bb784;
    }
  }
  uVar2 = 0;
  if (iVar1 != 0) {
    return 0;
  }
LAB_1803bb784:
  FUN_1804e4e90(&DAT_1809f9ee0);
  return uVar2;
}



/* ===== 1803bb7a0 FUN_1803bb7a0 ===== */

ulonglong FUN_1803bb7a0(longlong *param_1,float *param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  
  uVar9 = DAT_18110907c;
  uVar8 = DAT_181109078;
  uVar3 = 0;
  switch(DAT_181109080 + -9) {
  case 0:
  case 1:
    lVar16 = 8;
    iVar15 = 8;
    break;
  default:
    goto switchD_1803bb7ec_caseD_2;
  case 0xe:
  case 0xf:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x4e:
  case 0x51:
  case 0x52:
    iVar15 = 4;
    lVar16 = 4;
  }
  uVar2 = DAT_181109080 - 0x17;
  uVar4 = DAT_1809f9d98;
  if ((int)DAT_1809f9d98 < 0) {
    uVar4 = (uint)(DAT_181108fe0 == 0);
  }
  uVar3 = (ulonglong)(uint)*(float *)(&DAT_181108f9c + (longlong)(int)uVar4 * 4);
  uVar5 = uVar9;
  if ((*(float *)(&DAT_181108f9c + (longlong)(int)uVar4 * 4) < DAT_1808ac34c) ||
     (*(float *)(&DAT_1811090b8 + (longlong)(int)uVar4 * 4) < DAT_1808ac34c)) {
    uVar4 = DAT_181109078;
  }
  else {
    fVar20 = (float)FUN_18053ef70();
    uVar4 = uVar8;
    if ((uint)(longlong)fVar20 < uVar8) {
      uVar4 = (uint)(longlong)fVar20;
    }
    fVar20 = (float)FUN_18053ef70();
    uVar3 = (ulonglong)fVar20;
    if ((uint)uVar3 < uVar9) {
      uVar5 = (uint)uVar3;
    }
  }
  fVar20 = DAT_1808ac540;
  if (uVar5 != 0) {
    uVar14 = 0;
    uVar18 = 0;
    uVar17 = 0;
    uVar13 = 0;
    dVar22 = 0.0;
    do {
      uVar12 = (uint)uVar13;
      if (uVar4 != 0) {
        uVar11 = 0;
        lVar7 = *(uint *)(param_1 + 1) * uVar13 + *param_1;
        do {
          uVar10 = (uint)uVar11;
          lVar6 = lVar16 * uVar11;
          if (iVar15 == 8) {
            uVar1 = *(ushort *)(lVar7 + 6 + lVar6);
            uVar3 = (ulonglong)uVar1;
            if ((-1 < (short)uVar1) && (0x2a66 < uVar1)) {
LAB_1803bb932:
              if (uVar12 < uVar9) {
                uVar9 = uVar12;
              }
              if (uVar14 < uVar12) {
                uVar14 = uVar12;
              }
              if (uVar10 < uVar8) {
                uVar8 = uVar10;
              }
              if (uVar18 < uVar10) {
                uVar18 = uVar10;
              }
              uVar17 = uVar17 + 1;
              dVar22 = dVar22 + (double)uVar11;
              uVar3 = uVar11;
            }
          }
          else {
            if (uVar2 < 2) {
              bVar19 = 0x3fffffff < *(uint *)(lVar7 + lVar6);
            }
            else {
              bVar19 = 0x18 < *(byte *)(lVar7 + 3 + lVar6);
            }
            uVar3 = CONCAT71((int7)(uVar11 >> 8),bVar19);
            if (bVar19 != false) goto LAB_1803bb932;
          }
          uVar11 = (ulonglong)(uVar10 + 2);
        } while (uVar10 + 2 < uVar4);
      }
      uVar13 = (ulonglong)(uVar12 + 2);
    } while (uVar12 + 2 < uVar5);
    if ((0x3f < uVar17) && (uVar9 < uVar14)) {
      fVar24 = (float)DAT_181109078;
      uVar3 = (ulonglong)DAT_18110907c;
      fVar23 = (float)(dVar22 / (double)uVar17) / fVar24;
      fVar21 = (((float)(uVar14 - uVar9) + DAT_1808ac540) * DAT_1808ac1d4 * DAT_1808ac1f4) / fVar24;
      *param_2 = fVar23 - fVar21;
      param_2[2] = fVar21 + fVar23;
      if ((DAT_180cd1a96 != '\0') || (DAT_180cd1307 != '\0')) {
        *param_2 = (float)uVar8 / fVar24;
        param_2[2] = ((float)uVar18 + fVar20) / fVar24;
      }
      *(undefined1 *)(param_2 + 4) = 1;
      param_2[1] = (float)uVar9 / (float)uVar3;
      param_2[3] = ((float)uVar14 + fVar20) / (float)uVar3;
      return CONCAT71((uint7)(uint3)(uVar14 >> 8),1);
    }
  }
switchD_1803bb7ec_caseD_2:
  return uVar3 & 0xffffffffffffff00;
}



/* ===== 1803bbb30 FUN_1803bbb30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803bbb30(void)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined **local_c0;
  longlong *local_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  ulonglong local_58;
  
  plVar4 = DAT_1811079f8;
  plVar3 = DAT_1811079e0;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_e8;
  if ((DAT_1811079f8 != (longlong *)0x0) && (DAT_1811079e0 != (longlong *)0x0)) {
    if (DAT_181109084 == '\0') {
      if (DAT_181108f70 == (DAT_181108f70 / 0xc) * 0xc) {
        local_b8 = (longlong *)0x0;
        local_b0 = &DAT_1809f9e90;
        iVar6 = FUN_1804e4d70(&DAT_1809f9e90);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(5);
        }
        if (DAT_1809f9edc == 0x7fffffff) {
          DAT_1809f9edc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(6);
        }
        if (DAT_1809f9df8 == (longlong *)0x0) {
          FUN_1804e4e90(&DAT_1809f9e90);
        }
        else {
          (**(code **)(*DAT_1809f9df8 + 0x38))(DAT_1809f9df8,&local_b8);
          iVar2 = DAT_1809f9e08;
          iVar1 = DAT_1809f9e04;
          iVar6 = DAT_1809f9e00;
          FUN_1804e4e90(&DAT_1809f9e90);
          if (local_b8 != (longlong *)0x0) {
            if ((((DAT_181109070 == 0) || (DAT_181109078 != iVar6)) || (DAT_18110907c != iVar1)) ||
               (DAT_181109080 != iVar2)) {
              FUN_1803bad30();
              local_74 = 1;
              local_6c = 3;
              local_64 = 0x20000;
              local_88 = iVar6;
              local_84 = iVar1;
              local_80 = 1;
              local_7c = 1;
              local_78 = iVar2;
              iVar7 = (**(code **)(*plVar3 + 0x28))(plVar3,&local_88,0,&DAT_181109070);
              if (iVar7 < 0) {
                DAT_181109070 = 0;
                (**(code **)(*local_b8 + 0x10))();
                return;
              }
              DAT_181109078 = iVar6;
              DAT_18110907c = iVar1;
              DAT_181109080 = iVar2;
            }
            (**(code **)(*plVar4 + 0x178))(plVar4,DAT_181109070,local_b8);
            (**(code **)(*local_b8 + 0x10))();
            DAT_181109084 = '\x01';
            DAT_181109088._0_4_ = 0;
          }
        }
      }
    }
    else {
      local_b0 = (undefined *)0x0;
      uStack_a8 = 0;
      local_c0 = &local_b0;
      local_c8 = 0x100000;
      iVar6 = (**(code **)(*DAT_1811079f8 + 0x70))(DAT_1811079f8,DAT_181109070,0,1);
      if (iVar6 == -0x7785fff6) {
        DAT_181109088._0_4_ = (int)DAT_181109088 + 1;
        if ((int)DAT_181109088 < 0x1f) {
          return;
        }
      }
      else if (-1 < iVar6) {
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = local_90 & 0xffffff00;
        cVar5 = FUN_1803bb7a0(&local_b0,&local_a0);
        if (cVar5 != '\0') {
          DAT_181109018 = (undefined4)local_a0;
          DAT_18110901c = local_a0._4_4_;
          DAT_181109020 = (undefined4)uStack_98;
          DAT_181109024 = uStack_98._4_4_;
          DAT_181109028 = local_90;
        }
        (**(code **)(*plVar4 + 0x78))(plVar4,DAT_181109070,0);
      }
      DAT_181109084 = '\0';
    }
  }
  return;
}



/* ===== 1803bbde0 FUN_1803bbde0 ===== */

ulonglong FUN_1803bbde0(int param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  byte bVar16;
  uint uVar17;
  undefined1 local_48 [64];
  
  uVar13 = param_1 * 2;
  if ((int)(&DAT_1809f9d98)[param_1] < 0) {
    uVar17 = uVar13 | 1;
    if ((&DAT_181108fe0)[(int)uVar13] != 0) {
      uVar17 = uVar13;
    }
  }
  else {
    uVar17 = uVar13 + (&DAT_1809f9d98)[param_1];
  }
  uVar14 = (ulonglong)(int)uVar17;
  lVar3 = (&DAT_181108fe0)[uVar14];
  uVar4 = (&DAT_181109090)[uVar14];
  if (((lVar3 == 0) || (uVar4 == 0)) || (uVar14 = FUN_18000f3a0(lVar3), uVar14 != uVar4)) {
    return uVar14 & 0xffffffffffffff00;
  }
  if (DAT_181108e24 == 0) {
    if (DAT_180961ac8 == 0) {
      uVar13 = 0x2f8;
    }
    else {
      uVar4 = DAT_180961ac8 + 0x100;
      DAT_181108e24 = 0;
      for (uVar14 = DAT_180961ac8; uVar14 < uVar4; uVar14 = uVar14 + 1) {
        cVar12 = FUN_180011220(uVar14);
        if (((cVar12 == '\x0f') && (cVar12 = FUN_180011220(uVar14 + 1), cVar12 == '\x10')) &&
           ((cVar12 = FUN_180011220(uVar14 + 2), cVar12 == -0x75 &&
            (uVar13 = FUN_180011200(uVar14 + 3), uVar13 - 0x41 < 0x3fbf)))) goto LAB_1803bbedc;
      }
      uVar13 = 0x2f8;
    }
LAB_1803bbedc:
    DAT_181108e24 = uVar13;
  }
  puVar15 = (undefined8 *)FUN_1802010e0(local_48,(ulonglong)DAT_181108e24 + lVar3);
  bVar16 = 0;
  pfVar1 = param_2 + 0x10;
  uVar5 = puVar15[1];
  uVar6 = puVar15[2];
  uVar7 = puVar15[3];
  uVar8 = puVar15[4];
  uVar9 = puVar15[5];
  uVar10 = puVar15[6];
  uVar11 = puVar15[7];
  *(undefined8 *)param_2 = *puVar15;
  *(undefined8 *)(param_2 + 2) = uVar5;
  *(undefined8 *)(param_2 + 4) = uVar6;
  *(undefined8 *)(param_2 + 6) = uVar7;
  *(undefined8 *)(param_2 + 8) = uVar8;
  *(undefined8 *)(param_2 + 10) = uVar9;
  *(undefined8 *)(param_2 + 0xc) = uVar10;
  *(undefined8 *)(param_2 + 0xe) = uVar11;
  if (param_2 == pfVar1) {
    return 0;
  }
  do {
    pfVar2 = param_2 + 4;
    for (; param_2 != pfVar2; param_2 = param_2 + 1) {
      if (((uint)*param_2 & 0x7f800000) == 0x7f800000) {
        return 0;
      }
      if ((bVar16 != 0) || (bVar16 = 0, *param_2 != 0.0)) {
        bVar16 = 1;
      }
    }
    param_2 = pfVar2;
  } while (pfVar2 != pfVar1);
  return (ulonglong)bVar16;
}



/* ===== 1803bbfb0 FUN_1803bbfb0 ===== */

void FUN_1803bbfb0(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (((DAT_1809f9e70 == '\0') && (DAT_1809f9e70 = '\x01', DAT_180961ad0 != 0)) &&
     (uVar6 = DAT_180961ad0 + 0x60, uVar5 = DAT_180961ad0, DAT_180961ad0 < uVar6)) {
    while (((cVar1 = FUN_180011220(uVar5), cVar1 != 'H' ||
            (cVar1 = FUN_180011220(uVar5 + 1), cVar1 != 'c')) ||
           (cVar1 = FUN_180011220(uVar5 + 2), cVar1 != -0x7a))) {
      uVar5 = uVar5 + 1;
      if (uVar6 <= uVar5) {
        return;
      }
    }
    iVar3 = FUN_180011200(uVar5 + 3);
    iVar4 = FUN_180011200(uVar5 + 7);
    if (((iVar4 == -0x7ff372b4) && (cVar1 = FUN_180011220(uVar5 + 0xb), cVar1 == 'H')) &&
       ((cVar1 = FUN_180011220(uVar5 + 0xc), cVar1 == -0x75 &&
        (cVar1 = FUN_180011220(uVar5 + 0xd), cVar1 == -0x7a)))) {
      iVar4 = FUN_180011200(uVar5 + 0xe);
      cVar1 = FUN_180011220(uVar5 + 0x12);
      if (((((cVar1 == 'I') && (cVar1 = FUN_180011220(uVar5 + 0x13), cVar1 == -0x3f)) &&
           (cVar1 = FUN_180011220(uVar5 + 0x14), cVar1 == -0x1f)) &&
          ((bVar2 = FUN_180011220(uVar5 + 0x15), iVar3 - 0x100U < 0x3f01 &&
           (iVar4 - 0x100U < 0x3f01)))) && (bVar2 < 9)) {
        uVar6 = uVar5 + 0x16;
        DAT_1809f9e7c = 5 << (bVar2 & 0x1f);
        DAT_1809f9e74 = iVar3;
        DAT_1809f9e78 = iVar4;
        if (uVar6 < uVar5 + 0x40) {
          while (((cVar1 = FUN_180011220(uVar6), cVar1 != 'L' ||
                  (cVar1 = FUN_180011220(uVar6 + 1), cVar1 != -0x75)) ||
                 (cVar1 = FUN_180011220(uVar6 + 2), cVar1 != '\x05'))) {
            uVar6 = uVar6 + 1;
            if (uVar5 + 0x40 <= uVar6) {
              return;
            }
          }
          iVar3 = FUN_180011200(uVar6 + 3);
          DAT_1809f9e80 = (longlong)iVar3 + 7 + uVar6;
        }
      }
    }
  }
  return;
}



/* ===== 1803bc190 FUN_1803bc190 ===== */

undefined8 FUN_1803bc190(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((DAT_1809f9e80 != 0) && (param_1 < 0xfffffffe)) {
    lVar2 = FUN_18000f3a0();
    if (lVar2 != 0) {
      lVar2 = FUN_18000f3a0(lVar2 + (ulonglong)((param_1 & 0x7fff) >> 9) * 8);
      if (lVar2 != 0) {
        lVar2 = (ulonglong)(param_1 & 0x1ff) * 0x70 + lVar2;
        uVar1 = FUN_180011200(lVar2 + 0x10);
        if (uVar1 == param_1) {
          uVar3 = FUN_18000f3a0(lVar2);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



/* ===== 1803bc210 FUN_1803bc210 ===== */

undefined8
FUN_1803bc210(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  char *_Str1;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (param_1 == 0) {
    uVar6 = (*DAT_180ca0948)();
    goto LAB_1803bc43c;
  }
  lVar3 = FUN_18000f3a0(param_1 + 8);
  if (lVar3 == 0) {
LAB_1803bc2e6:
    lVar3 = -1;
    iVar1 = -1;
    lVar4 = -1;
  }
  else {
    lVar4 = FUN_18000f3a0(lVar3);
    if (lVar4 == 0) goto LAB_1803bc2e6;
    pcVar5 = (code *)FUN_18000f3a0(lVar4 + 0x50);
    if (pcVar5 == (code *)0x0) goto LAB_1803bc2e6;
    _Str1 = (char *)(*pcVar5)(lVar3);
    if (_Str1 == (char *)0x0) goto LAB_1803bc2e6;
    iVar1 = strcmp(_Str1,PTR_s_WlEspPreviewModelEM_1806b9c88);
    if (iVar1 == 0) {
      iVar1 = 0;
      lVar4 = 0;
      lVar3 = 0;
    }
    else {
      iVar1 = strcmp(_Str1,PTR_s_WlEspPreviewModelEH_1806b9c90);
      if (iVar1 == 0) {
        lVar4 = 1;
        iVar1 = 1;
        lVar3 = 1;
      }
      else {
        iVar1 = strcmp(_Str1,PTR_s_WlEspPreviewModelTM_1806b9c98);
        if (iVar1 == 0) {
          lVar4 = 2;
          iVar1 = 2;
          lVar3 = 2;
        }
        else {
          iVar1 = 3;
          iVar2 = strcmp(_Str1,PTR_s_WlEspPreviewModelTH_1806b9ca0);
          lVar4 = 3;
          lVar3 = 3;
          if (iVar2 != 0) goto LAB_1803bc2e6;
        }
      }
    }
  }
  if (-1 < iVar1) {
    uVar6 = FUN_18000f3a0(param_1);
    (&DAT_181109090)[lVar4] = uVar6;
    (&DAT_181108fe0)[lVar4] = param_1;
  }
  uVar6 = (*DAT_180ca0948)(param_1,param_2,param_3,param_4,param_5);
  if (-1 < iVar1) {
    lVar4 = FUN_18000f3a0(param_1 + 8);
    if (lVar4 != 0) {
      lVar7 = FUN_18000f3a0(lVar4);
      if ((lVar7 != 0) && (lVar7 - 0xfca8U < 0x7ffffffeffff)) {
        pcVar5 = (code *)FUN_18000f3a0(lVar7 + 0x350);
        fVar8 = (float)(*pcVar5)(lVar4);
        pcVar5 = (code *)FUN_18000f3a0(lVar7 + 0x358);
        fVar9 = (float)(*pcVar5)(lVar4);
        if ((((uint)fVar8 & 0x7f800000) != 0x7f800000) &&
           (((((uint)fVar9 & 0x7f800000) != 0x7f800000 && (DAT_1808ac34c <= fVar8)) &&
            (DAT_1808ac34c <= fVar9)))) {
          *(float *)(&DAT_181108f9c + lVar3 * 4) = fVar8;
          *(float *)(&DAT_1811090b8 + lVar3 * 4) = fVar9;
        }
      }
    }
  }
LAB_1803bc43c:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar6;
}



/* ===== 1803bc460 FUN_1803bc460 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1803bc460(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_98;
  if (((param_2 != (longlong *)0x0) && (param_1 != 0)) && (DAT_180cd1306 != '\0')) {
    DAT_181108f98 = DAT_181108f98 + 1;
    FUN_1803bab40();
    uVar6 = 0;
    do {
      iVar1 = (int)uVar6;
      if (param_1 == (&DAT_181108f78)[uVar6]) goto LAB_1803bc504;
      uVar6 = (ulonglong)(iVar1 + 1U);
    } while ((int)(iVar1 + 1U) < 4);
    lVar3 = FUN_18000f3a0(param_1 + 8);
    if (lVar3 == 0) {
      iVar1 = -1;
    }
    else {
      uVar4 = FUN_18000f3a0(lVar3);
      iVar1 = FUN_1803baad0(uVar4);
      if (-1 < iVar1) {
        (&DAT_181108f78)[iVar1] = param_1;
      }
    }
LAB_1803bc504:
    if (-1 < iVar1) {
      local_78 = (longlong *)0x0;
      (**(code **)(*param_2 + 0x38))(param_2,&local_78);
      if (local_78 != (longlong *)0x0) {
        local_68 = &DAT_1809f9e90;
        iVar2 = FUN_1804e4d70(&DAT_1809f9e90);
        if (iVar2 != 0) {
LAB_1803bc6e2:
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(5);
        }
        if (DAT_1809f9edc == 0x7fffffff) {
LAB_1803bc6cd:
          DAT_1809f9edc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(6);
        }
        plVar5 = &DAT_1809f9df0;
        do {
          if ((local_78 == (longlong *)*plVar5) || (local_78 == (longlong *)plVar5[4])) {
            (**(code **)(*local_78 + 0x10))();
            FUN_1804e4e90(&DAT_1809f9e90);
            return param_2;
          }
          plVar5 = plVar5 + 8;
        } while (plVar5 != (longlong *)&DAT_1809f9e70);
        FUN_1804e4e90(&DAT_1809f9e90);
        local_70 = (longlong *)0x0;
        iVar2 = (**(code **)*local_78)(local_78,&DAT_18058a4c0,&local_70);
        if ((-1 < iVar2) && (local_70 != (longlong *)0x0)) {
          local_60 = 0;
          uStack_58 = 0;
          local_50 = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          (**(code **)(*local_70 + 0x50))(local_70,&local_60);
          lVar3 = FUN_1803ba600(local_70,&local_60);
          plVar5 = local_78;
          if (lVar3 != 0) {
            local_68 = &DAT_1809f9e90;
            iVar2 = FUN_1804e4d70(&DAT_1809f9e90);
            if (iVar2 != 0) goto LAB_1803bc6e2;
            if (DAT_1809f9edc == 0x7fffffff) goto LAB_1803bc6cd;
            lVar7 = (longlong)(iVar1 / 2);
            if ((longlong *)(&DAT_1809f9e18)[lVar7 * 8] != (longlong *)0x0) {
              (**(code **)(*(longlong *)(&DAT_1809f9e18)[lVar7 * 8] + 0x10))();
            }
            (&DAT_1809f9e2c)[lVar7 * 0x10] = iVar1 % 2;
            (&DAT_1809f9e18)[lVar7 * 8] = lVar3;
            (&DAT_1809f9e10)[lVar7 * 8] = plVar5;
            (&DAT_1809f9e20)[lVar7 * 0x10] = (undefined4)local_60;
            (&DAT_1809f9e24)[lVar7 * 0x10] = local_60._4_4_;
            (&DAT_1809f9e28)[lVar7 * 0x10] = (undefined4)local_50;
            FUN_1804e4e90(&DAT_1809f9e90);
          }
          (**(code **)(*local_70 + 0x10))();
        }
        (**(code **)(*local_78 + 0x10))();
      }
    }
  }
  return param_2;
}



/* ===== 1803bc6f0 FUN_1803bc6f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803bc6f0(int param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  double dVar9;
  undefined *puVar10;
  undefined2 *puVar11;
  float *pfVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  char *pcVar24;
  longlong lVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [24];
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined *local_1a8;
  undefined2 *local_1a0;
  double local_198;
  double local_190;
  double local_188;
  longlong local_180;
  undefined8 local_178;
  float local_170;
  undefined4 local_168;
  undefined *local_160 [2];
  uint local_150;
  int local_14c;
  undefined4 local_148;
  longlong local_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  lVar25 = (longlong)param_1;
  local_14c = param_1;
  iVar5 = FUN_1804e4d70(&DAT_1809f9e90);
  if (iVar5 != 0) {
LAB_1803bd27b:
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f9edc == 0x7fffffff) {
    DAT_1809f9edc = 0x7ffffffe;
LAB_1803bd270:
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar13 = (&DAT_1809f9df8)[lVar25 * 8];
  uVar8 = (&DAT_1809f9e00)[lVar25 * 0x10];
  local_168 = (&DAT_1809f9e04)[lVar25 * 0x10];
  local_148 = uVar8;
  local_140 = lVar25;
  FUN_1804e4e90(&DAT_1809f9e90);
  uVar26 = param_1 * 2;
  if ((int)(&DAT_1809f9d98)[lVar25] < 0) {
    uVar7 = uVar26 | 1;
    if ((&DAT_181108fe0)[(int)uVar26] != 0) {
      uVar7 = uVar26;
    }
  }
  else {
    uVar7 = (&DAT_1809f9d98)[lVar25] + uVar26;
  }
  lVar15 = (&DAT_181108fe0)[(int)uVar7];
  if ((int)(&DAT_1809f9d98)[lVar25] < 0) {
    uVar7 = uVar26 | 1;
    if ((&DAT_181108fe0)[(int)uVar26] != 0) {
      uVar7 = uVar26;
    }
  }
  else {
    uVar7 = uVar26 + (&DAT_1809f9d98)[lVar25];
  }
  local_190 = (double)(&DAT_181108f78)[(int)uVar7];
  if (((DAT_180cd1307 == '\0') && (DAT_180cd1a96 == '\0')) && (DAT_18110902c != 3)) {
    pcVar24 = "teammate, agent 5036";
    if (param_1 == 0) {
      pcVar24 = "enemy, agent 5037";
    }
  }
  else {
    pcVar24 = "single";
  }
  local_188 = (double)CONCAT44(local_188._4_4_,DAT_181108f98);
  local_198 = (double)CONCAT44(local_198._4_4_,local_168);
  local_1a0 = (undefined2 *)CONCAT44(local_1a0._4_4_,uVar8);
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,(uint)(lVar13 != 0));
  local_1b0 = (double)CONCAT44(local_1b0._4_4_,(uint)(DAT_180cd1306 != '\0'));
  local_1b8 = (double)CONCAT44(local_1b8._4_4_,DAT_181109010);
  local_1c0 = (double)CONCAT44(local_1c0._4_4_,(&DAT_1809f9d98)[lVar25]);
  local_1c8 = (double)CONCAT44(local_1c8._4_4_,(uint)(DAT_180cd1305 != '\0'));
  local_180 = lVar15;
  local_150 = uVar26;
  FUN_1803ba540("state | slot %d (%s) | stage %d | injected %d | live tree %d | stall %d | hunting %d | captured %d %ux%u | layer_tex %p | rv_calls %d | panel %p"
                ,param_1,pcVar24,DAT_181108fac);
  if (DAT_180cd1307 == '\0') {
    if (DAT_180cd1a96 == '\0') {
      pcVar24 = "characters/models/ctm_sas/ctm_sas.vmdl";
      if (DAT_18110902c != 3) {
        pcVar24 = "players";
      }
    }
    else {
      pcVar24 = "weapon";
    }
  }
  else {
    pcVar24 = "grenade";
  }
  iVar5 = 0;
  puVar11 = (undefined2 *)0x0;
  if ((int)((pcVar24 == "players") + 1) <= param_1 + 1) {
    DAT_181108f98 = 0;
  }
  local_160[0] = &DAT_1809f9f30;
  iVar6 = FUN_1804e4d70(&DAT_1809f9f30);
  puVar2 = DAT_18110b590;
  puVar23 = auStack_1e8;
  puVar21 = auStack_1e8;
  puVar22 = auStack_1e8;
  if (iVar6 != 0) goto LAB_1803bd27b;
  if (DAT_1809f9f7c == 0x7fffffff) {
    DAT_1809f9f7c = 0x7ffffffe;
    goto LAB_1803bd270;
  }
  if (DAT_18110b588 != DAT_18110b590) {
    uStack_120 = (longlong *)0x0;
    local_118 = 0;
    uStack_110 = 0xf;
    local_128 = (longlong *)0x0;
    puVar19 = DAT_18110b588;
    do {
      if ((ulonglong)puVar19[3] < 0x10) {
        puVar17 = puVar19;
      }
      else {
        puVar17 = (undefined8 *)*puVar19;
      }
      FUN_1800134a0(&local_128,puVar17,puVar19[2]);
      FUN_1800134a0(&local_128,&DAT_18075d4b0,3);
      puVar19 = puVar19 + 4;
    } while (puVar19 != puVar2);
    plVar16 = &local_128;
    if (0xf < uStack_110) {
      plVar16 = local_128;
    }
    FUN_1803ba540("texture names: %s",plVar16);
    puVar2 = DAT_18110b590;
    puVar19 = DAT_18110b588;
    if (DAT_18110b588 != DAT_18110b590) {
      do {
        FUN_18000f890(puVar19);
        puVar19 = puVar19 + 4;
      } while (puVar19 != puVar2);
      DAT_18110b590 = DAT_18110b588;
    }
    FUN_18000f890(&local_128);
  }
  FUN_1804e4e90(&DAT_1809f9f30);
  if (lVar15 == 0) goto LAB_1803bd211;
  FUN_1803bbfb0();
  uVar7 = FUN_180011200((ulonglong)DAT_1809f9e74 + lVar15);
  dVar9 = (double)FUN_18000f3a0((ulonglong)DAT_1809f9e78 + lVar15);
  if ((dVar9 == 0.0) || (0x3f < uVar7)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_180011200((longlong)(int)uVar7 * (ulonglong)DAT_1809f9e7c + (longlong)dVar9);
  }
  puVar10 = (undefined *)FUN_1803bc190(uVar8);
  if (puVar10 != (undefined *)0x0) {
    local_160[0] = puVar10;
    puVar11 = (undefined2 *)FUN_1803a0710(local_160);
  }
  local_1a0 = &DAT_1806eb0d8;
  if (puVar11 != (undefined2 *)0x0) {
    local_1a0 = puVar11;
  }
  local_198 = DAT_180961ad0;
  local_1b0 = (double)CONCAT44(local_1b0._4_4_,uVar8);
  local_1c0 = (double)CONCAT44(local_1c0._4_4_,uVar7);
  local_1c8 = (double)CONCAT44(local_1c8._4_4_,DAT_1809f9e7c);
  local_1b8 = dVar9;
  local_1a8 = puVar10;
  FUN_1803ba540("panel entity | list %p | offsets %X %X %X | index %d | records %p | handle %08X | entity %p | class %s | bone fn %p"
                ,DAT_1809f9e80,DAT_1809f9e74,DAT_1809f9e78);
  if (puVar10 != (undefined *)0x0) {
    if (DAT_180ca09f8 == 0) {
      fVar33 = 0.0;
      fVar34 = 0.0;
      fVar35 = 0.0;
    }
    else {
      lVar25 = FUN_18000f3a0(puVar10 + DAT_180ca09f8);
      fVar33 = 0.0;
      fVar34 = 0.0;
      fVar35 = 0.0;
      if ((lVar25 != 0) && (DAT_180ca0954 != 0)) {
        pfVar12 = (float *)FUN_1800111b0(&local_178,lVar25 + (ulonglong)DAT_180ca0954);
        fVar33 = *pfVar12;
        fVar34 = pfVar12[1];
        fVar35 = pfVar12[2];
      }
    }
    fVar27 = 0.0;
    fVar29 = 0.0;
    fVar31 = 0.0;
    if (DAT_180ca09f8 == 0) {
LAB_1803bcc57:
      fVar28 = 0.0;
      fVar30 = 0.0;
      fVar32 = 0.0;
    }
    else {
      lVar25 = FUN_18000f3a0(puVar10 + DAT_180ca09f8);
      if (((lVar25 != 0) && (uVar14 = (ulonglong)DAT_180ca0964, DAT_180ca0964 != 0)) &&
         (DAT_180ca0968 != 0)) {
        lVar13 = FUN_18000f3a0(lVar25 + uVar14 + (ulonglong)DAT_180ca0968);
        if (lVar13 != 0) {
          if (DAT_180ca096c != 0) {
            FUN_180011200((ulonglong)DAT_180ca096c + lVar25 + uVar14);
          }
          pfVar12 = (float *)FUN_1800111b0(&local_178,lVar13);
          fVar27 = *pfVar12;
          fVar29 = pfVar12[1];
          fVar31 = pfVar12[2];
        }
      }
      if (((DAT_180ca09f8 == 0) || (lVar25 = FUN_18000f3a0(puVar10 + DAT_180ca09f8), lVar25 == 0))
         || (DAT_180ca0950 == 0)) goto LAB_1803bcc57;
      pfVar12 = (float *)FUN_1800111b0(&local_178,lVar25 + (ulonglong)DAT_180ca0950);
      fVar28 = *pfVar12;
      fVar30 = pfVar12[1];
      fVar32 = pfVar12[2];
    }
    local_1a0 = (undefined2 *)(double)fVar31;
    local_1a8 = (undefined *)(double)fVar29;
    local_1b0 = (double)fVar27;
    local_1b8 = (double)fVar32;
    local_1c0 = (double)fVar30;
    local_1c8 = (double)fVar28;
    FUN_1803ba540("  panel entity node %.1f %.1f %.1f | origin %.1f %.1f %.1f | bone0 %.1f %.1f %.1f"
                  ,(double)fVar33,(double)fVar34,(double)fVar35);
    iVar6 = 1;
    fVar33 = DAT_1808accf0;
    fVar27 = DAT_1808acea4;
    fVar34 = DAT_1808accf0;
    fVar35 = DAT_1808accf0;
    fVar29 = DAT_1808acea4;
    fVar31 = DAT_1808acea4;
    do {
      local_178 = 0;
      local_170 = 0.0;
      local_160[0] = puVar10;
      cVar3 = FUN_1803a07f0(local_160,iVar6,&local_178);
      fVar30 = fVar29;
      fVar28 = fVar31;
      if (cVar3 != '\0') {
        iVar5 = iVar5 + 1;
        fVar28 = (float)local_178;
        if (fVar33 <= (float)local_178) {
          fVar28 = fVar33;
        }
        fVar33 = fVar28;
        fVar28 = local_178._4_4_;
        if (fVar34 <= local_178._4_4_) {
          fVar28 = fVar34;
        }
        fVar34 = fVar28;
        fVar28 = local_170;
        if (fVar35 <= local_170) {
          fVar28 = fVar35;
        }
        fVar35 = fVar28;
        fVar28 = (float)local_178;
        if ((float)local_178 <= fVar27) {
          fVar28 = fVar27;
        }
        fVar27 = fVar28;
        fVar30 = local_178._4_4_;
        if (local_178._4_4_ <= fVar29) {
          fVar30 = fVar29;
        }
        fVar28 = local_170;
        if (local_170 <= fVar31) {
          fVar28 = fVar31;
        }
      }
      iVar6 = iVar6 + 1;
      fVar29 = fVar30;
      fVar31 = fVar28;
    } while (iVar6 < 0x100);
    local_1b0 = (double)fVar28;
    local_1b8 = (double)fVar30;
    local_1c0 = (double)fVar27;
    local_1c8 = (double)fVar35;
    FUN_1803ba540("  skeleton %d bones | min %.1f %.1f %.1f | max %.1f %.1f %.1f",iVar5,
                  (double)fVar33,(double)fVar34);
  }
  uVar4 = FUN_1803a10a0();
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_160);
    puVar18 = local_160[0];
  }
  else {
    puVar18 = DAT_181108a00;
  }
  FUN_1803ba540("  local controller %p | in_match %d",puVar18,uVar4);
  FUN_1803a09f0(&local_128);
  plVar16 = uStack_120;
  plVar20 = local_128;
  if (local_128 != uStack_120) {
    do {
      if (((*plVar20 != 0) &&
          (lVar25 = FUN_18000f3a0((ulonglong)DAT_180961968 + *plVar20), lVar25 != 0)) &&
         ((lVar25 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar25), lVar25 != 0 &&
          ((((lVar25 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar25), lVar25 != 0 &&
             (lVar25 = FUN_18000f3a0((ulonglong)DAT_180961974 + lVar25),
             lVar25 - 0x10000U < 0x7ffffffeffff)) && (lVar25 != 0)) &&
           (lVar13 = FUN_1804ef120(lVar25,"Preview"), lVar13 != 0)))))) {
        uVar14 = (ulonglong)DAT_180ca09f8;
        if ((*plVar20 == 0) || (DAT_180ca09f8 == 0)) {
          fVar33 = 0.0;
          fVar34 = 0.0;
          fVar35 = 0.0;
        }
        else {
          lVar13 = FUN_18000f3a0(*plVar20 + uVar14);
          fVar33 = 0.0;
          fVar34 = 0.0;
          fVar35 = 0.0;
          if ((lVar13 != 0) && (DAT_180ca0954 != 0)) {
            pfVar12 = (float *)FUN_1800111b0(&local_178,lVar13 + (ulonglong)DAT_180ca0954);
            fVar33 = *pfVar12;
            fVar34 = pfVar12[1];
            fVar35 = pfVar12[2];
          }
          uVar14 = (ulonglong)DAT_180ca09f8;
        }
        uVar26 = (uint)uVar14;
        if ((*plVar20 == 0) || (uVar26 == 0)) {
LAB_1803bcf8c:
          fVar27 = 0.0;
          fVar29 = 0.0;
          fVar31 = 0.0;
        }
        else {
          lVar13 = FUN_18000f3a0(uVar14 + *plVar20);
          if ((lVar13 == 0) || (DAT_180ca0950 == 0)) {
            uVar26 = DAT_180ca09f8;
            goto LAB_1803bcf8c;
          }
          pfVar12 = (float *)FUN_1800111b0(local_160,lVar13 + (ulonglong)DAT_180ca0950);
          fVar27 = *pfVar12;
          fVar29 = pfVar12[1];
          fVar31 = pfVar12[2];
          uVar26 = DAT_180ca09f8;
        }
        fVar28 = 0.0;
        fVar30 = 0.0;
        fVar32 = 0.0;
        if ((((*plVar20 != 0) && (uVar26 != 0)) &&
            (lVar13 = FUN_18000f3a0((ulonglong)uVar26 + *plVar20), lVar13 != 0)) &&
           ((uVar14 = (ulonglong)DAT_180ca0964, DAT_180ca0964 != 0 && (DAT_180ca0968 != 0)))) {
          lVar15 = FUN_18000f3a0(lVar13 + uVar14 + (ulonglong)DAT_180ca0968);
          if (lVar15 != 0) {
            if (DAT_180ca096c != 0) {
              FUN_180011200((ulonglong)DAT_180ca096c + lVar13 + uVar14);
            }
            pfVar12 = (float *)FUN_1800111b0(local_138,lVar15);
            fVar28 = *pfVar12;
            fVar30 = pfVar12[1];
            fVar32 = pfVar12[2];
          }
        }
        pcVar24 = "";
        if ((undefined *)*plVar20 == puVar10) {
          pcVar24 = " [tracked]";
        }
        local_188 = (double)fVar32;
        local_190 = (double)fVar30;
        local_198 = (double)fVar28;
        local_1a0 = (undefined2 *)(double)fVar31;
        local_1a8 = (undefined *)(double)fVar29;
        local_1b0 = (double)fVar27;
        local_1b8 = (double)fVar35;
        local_1c0 = (double)fVar34;
        local_1c8 = (double)fVar33;
        FUN_1803ba540("  %s %p%s | node %.1f %.1f %.1f | origin %.1f %.1f %.1f | bone0 %.1f %.1f %.1f"
                      ,lVar25,(undefined *)*plVar20,pcVar24);
      }
      plVar20 = plVar20 + 1;
    } while (plVar20 != plVar16);
    uVar26 = local_150;
  }
  puVar23 = auStack_1e8;
  if (local_128 != (longlong *)0x0) {
    plVar16 = local_128;
    if ((ulonglong)((local_118 - (longlong)local_128 >> 3) * 8) < 0x1000) {
LAB_1803bd0ea:
      puVar22 = puVar21;
    }
    else {
      plVar16 = (longlong *)local_128[-1];
      plVar20 = (longlong *)((longlong)local_128 + (-8 - (longlong)plVar16));
      if (&DAT_0000001f < plVar20) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar21 = auStack_1e0;
        plVar16 = plVar20;
        goto LAB_1803bd0ea;
      }
    }
    *(undefined8 *)(puVar22 + -8) = 0x1803bd0f2;
    thunk_FUN_1803d64e0(plVar16);
    puVar23 = puVar22;
  }
  local_128 = (longlong *)0x0;
  uStack_120 = (longlong *)0x0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  *(undefined8 *)(puVar23 + -8) = 0x1803bd111;
  cVar3 = FUN_1803bbde0(local_14c);
  if (cVar3 != '\0') {
    *(double *)(puVar23 + 0x40) = (double)uStack_f0._4_4_;
    *(double *)(puVar23 + 0x38) = (double)(float)uStack_f0;
    *(double *)(puVar23 + 0x30) = (double)local_f8._4_4_;
    *(double *)(puVar23 + 0x28) = (double)(float)local_f8;
    *(double *)(puVar23 + 0x20) = (double)uStack_120._4_4_;
    *(undefined8 *)(puVar23 + -8) = 0x1803bd18e;
    FUN_1803ba540("  matrix row0 %.3f %.3f %.3f %.3f | row3 %.3f %.3f %.3f %.3f",
                  (double)(float)local_128,(double)local_128._4_4_,(double)(float)uStack_120);
  }
  if ((int)(&DAT_1809f9d98)[local_140] < 0) {
    if ((&DAT_181108fe0)[(int)uVar26] == 0) {
      uVar26 = uVar26 | 1;
    }
  }
  else {
    uVar26 = uVar26 + (&DAT_1809f9d98)[local_140];
  }
  fVar33 = *(float *)(&DAT_1811090b8 + (longlong)(int)uVar26 * 4);
  fVar34 = *(float *)(&DAT_181108f9c + (longlong)(int)uVar26 * 4);
  *(uint *)(puVar23 + 0x28) = (uint)((&DAT_18110b570)[local_140] != 0);
  *(undefined4 *)(puVar23 + 0x20) = local_168;
  *(undefined8 *)(puVar23 + -8) = 0x1803bd211;
  FUN_1803ba540("  panel pixels %.0fx%.0f (from the game\'s panel_position) | layer texture %ux%u | glow %d"
                ,(double)fVar34,(double)fVar33,local_148);
LAB_1803bd211:
  *(undefined8 *)(puVar23 + -8) = 0x1803bd21d;
  return;
}



/* ===== 1803bd290 FUN_1803bd290 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803bd290(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  char *pcVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar21;
  float fVar22;
  longlong local_68;
  int local_60;
  undefined2 local_57;
  undefined1 local_55;
  
  iVar12 = DAT_181108f70 + 1;
  puVar8 = DAT_18110b5a8;
  puVar15 = DAT_18110b5a0;
  DAT_181108f70 = iVar12;
  if (DAT_18110b5a0 != DAT_18110b5a8) {
    do {
      puVar1 = puVar15 + 2;
      if (iVar12 < *(int *)(puVar15 + 1)) {
        puVar15 = puVar1;
      }
      else {
        (**(code **)(*(longlong *)*puVar15 + 0x10))();
        FUN_180540530(puVar15,puVar1,(longlong)DAT_18110b5a8 - (longlong)puVar1);
        puVar8 = DAT_18110b5a8 + -2;
        iVar12 = DAT_181108f70;
        DAT_18110b5a8 = puVar8;
      }
    } while (puVar15 != puVar8);
  }
  if (((DAT_181108fd8._4_4_ != 0) && (DAT_181108f70 == (DAT_181108f70 / 10) * 10)) &&
     (DAT_1811079d8 != (HWND)0x0)) {
    PostMessageA(DAT_1811079d8,0x8057,0,0);
  }
  iVar12 = DAT_1811090b0;
  cVar6 = DAT_180cd1a94;
  LOCK();
  DAT_1811090b0 = 0;
  UNLOCK();
  if (iVar12 == 2) {
    DAT_181108fac = 1;
LAB_1803bd37e:
    DAT_180cd1305 = '\0';
  }
  else if (iVar12 == 3) {
    DAT_181108fac = 2;
    goto LAB_1803bd37e;
  }
  LOCK();
  DAT_180cd1a94 = 0;
  UNLOCK();
  if (cVar6 != '\0') {
    FUN_1803bae00();
    DAT_1811090b4 = 0xb4;
    DAT_181108fac = 0;
  }
  DAT_180cd1a95 = DAT_181108f70 - DAT_1809f758c < 3;
  if (2 < DAT_181108f70 - DAT_1809f758c) {
    if (DAT_180cd1305 == '\0') {
      return;
    }
    if (DAT_181108f70 - DAT_1809f758c < 0x259) {
      return;
    }
LAB_1803bdb2b:
    LOCK();
    if (DAT_181108fd8._4_4_ == 0) {
      DAT_181108fd8._4_4_ = 2;
    }
    UNLOCK();
    FUN_1803bae00();
    DAT_181108fac = 0;
    return;
  }
  pcVar16 = "grenade";
  if (DAT_181108f70 == (DAT_181108f70 / 0x3c) * 0x3c) {
    iVar12 = 0;
    while( true ) {
      if (DAT_180cd1307 == '\0') {
        if (DAT_180cd1a96 == '\0') {
          pcVar14 = "characters/models/ctm_sas/ctm_sas.vmdl";
          if (DAT_18110902c != 3) {
            pcVar14 = "players";
          }
        }
        else {
          pcVar14 = "weapon";
        }
      }
      else {
        pcVar14 = "grenade";
      }
      if ((int)((pcVar14 == "players") + 1) <= iVar12) break;
      FUN_1803bc6f0(iVar12);
      iVar12 = iVar12 + 1;
    }
  }
  if (0 < DAT_1811090b4) {
    DAT_1811090b4 = DAT_1811090b4 + -1;
    return;
  }
  iVar12 = FUN_1804e4d70(&DAT_1809f9e90);
  if (iVar12 != 0) {
LAB_1803bdb57:
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f9edc == 0x7fffffff) {
LAB_1803bdb62:
    DAT_1809f9edc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar18 = 0;
  uVar21 = extraout_XMM0_Da;
  do {
    if ((&DAT_1809f9e18)[lVar18 * 8] != 0) {
      if ((&DAT_1809f9df8)[lVar18 * 8] != 0) {
        local_60 = DAT_181108f70 + 4;
        local_68 = (&DAT_1809f9df8)[lVar18 * 8];
        uVar21 = FUN_1803be010(uVar21,&local_68);
      }
      (&DAT_1809f9df8)[lVar18 * 8] = (&DAT_1809f9e18)[lVar18 * 8];
      (&DAT_1809f9df0)[lVar18 * 8] = (&DAT_1809f9e10)[lVar18 * 8];
      (&DAT_1809f9e00)[lVar18 * 0x10] = (&DAT_1809f9e20)[lVar18 * 0x10];
      (&DAT_1809f9e04)[lVar18 * 0x10] = (&DAT_1809f9e24)[lVar18 * 0x10];
      (&DAT_1809f9e08)[lVar18 * 0x10] = (&DAT_1809f9e28)[lVar18 * 0x10];
      if (-1 < (int)(&DAT_1809f9e2c)[lVar18 * 0x10]) {
        (&DAT_1809f9d98)[lVar18] = (&DAT_1809f9e2c)[lVar18 * 0x10];
      }
      (&DAT_1809f9e18)[lVar18 * 8] = 0;
      (&DAT_1809f9e10)[lVar18 * 8] = 0;
    }
    lVar18 = lVar18 + 1;
  } while (lVar18 != 2);
  FUN_1804e4e90(&DAT_1809f9e90);
  if (DAT_180cd1307 == '\0') {
    if (DAT_180cd1a96 == '\0') {
      pcVar14 = "characters/models/ctm_sas/ctm_sas.vmdl";
      if (DAT_18110902c != 3) {
        pcVar14 = "players";
      }
    }
    else {
      pcVar14 = "weapon";
    }
  }
  else {
    pcVar14 = "grenade";
  }
  if (DAT_180cd1305 == '\0') {
    if (DAT_181108f70 != (DAT_181108f70 / 0x3c) * 0x3c) {
      return;
    }
    cVar6 = FUN_1803bb4e0(pcVar14);
    if (cVar6 == '\0') {
      return;
    }
    DAT_180cd1305 = 1;
    DAT_181109010 = 0;
    _DAT_181109018 = 0;
    _DAT_181109020 = 0;
    DAT_181109028 = (uint)CONCAT12(local_55,local_57) << 8;
    _DAT_181108fb8 = 0;
    _DAT_181108fc0 = 0;
    _DAT_181108fc8 = (uint)CONCAT12(local_55,local_57) << 8;
    DAT_181108fd0 = pcVar14;
    FUN_1803bad90();
    return;
  }
  if (pcVar14 != DAT_181108fd0) goto LAB_1803bdb2b;
  if (DAT_180cd1307 == '\0') {
    if (DAT_180cd1a96 == '\0') {
      pcVar16 = "characters/models/ctm_sas/ctm_sas.vmdl";
      if (DAT_18110902c != 3) {
        pcVar16 = "players";
      }
    }
    else {
      pcVar16 = "weapon";
    }
  }
  iVar19 = (pcVar16 == "players") + 1;
  iVar12 = FUN_1804e4d70(&DAT_1809f9e90);
  lVar18 = DAT_1809f9df8;
  if (iVar12 != 0) goto LAB_1803bdb57;
  if (DAT_1809f9edc == 0x7fffffff) goto LAB_1803bdb62;
  bVar5 = true;
  iVar12 = 0;
  do {
    if ((bVar5) && ((&DAT_1809f9df8)[(longlong)iVar12 * 8] != 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < iVar19);
  FUN_1804e4e90(&DAT_1809f9e90);
  if (lVar18 == 0) {
    DAT_181108fac = 3;
    if (DAT_180cd1306 == '\0') {
      FUN_1803bad90();
    }
    DAT_181109010 = DAT_181109010 + 1;
    if (DAT_181109010 < 0x259) {
      return;
    }
    _DAT_18110b580 = _DAT_18110b580 + 1;
    goto LAB_1803bdb2b;
  }
  DAT_181108fac = 4;
  DAT_181109010 = 0;
  _DAT_18110b580 = 0;
  if (bVar5) {
    DAT_181108fd8._0_4_ = 0;
LAB_1803bd6c1:
    if (DAT_180cd1306 != '\0') {
      DAT_181108f58 = DAT_181108f58 + 1;
      if (3 < DAT_181108f58) {
        DAT_180cd1306 = '\0';
      }
      goto LAB_1803bd732;
    }
    if (DAT_181108f70 != (DAT_181108f70 / 0xf0) * 0xf0) goto LAB_1803bd732;
  }
  else {
    DAT_181108fd8._0_4_ = (int)DAT_181108fd8 + 1;
    if (600 < (int)DAT_181108fd8) goto LAB_1803bd6c1;
    if (DAT_180cd1306 != '\0') goto LAB_1803bd732;
  }
  FUN_1803bad90();
LAB_1803bd732:
  if ((DAT_18096221c != '\0') && (DAT_180cd1ac4 != '\0')) {
    uVar17 = 0;
    do {
      uVar20 = (ulonglong)uVar17;
      lVar18 = uVar20 * 0x50;
      (&DAT_181108ef8)[lVar18] = 0;
      cVar6 = FUN_1803bbde0(uVar17,&DAT_181108eb8 + lVar18);
      if (cVar6 != '\0') {
        uVar13 = uVar17 * 2;
        if ((int)(&DAT_1809f9d98)[uVar20] < 0) {
          if ((&DAT_181108fe0)[(int)uVar13] == 0) {
            uVar13 = uVar13 | 1;
          }
        }
        else {
          uVar13 = uVar13 + (&DAT_1809f9d98)[uVar20];
        }
        lVar10 = (&DAT_181108fe0)[(int)uVar13];
        lVar3 = (&DAT_181109090)[(int)uVar13];
        if (((lVar10 == 0) || (lVar3 == 0)) || (lVar9 = FUN_18000f3a0(lVar10), lVar9 != lVar3)) {
LAB_1803bd81b:
          lVar10 = 0;
        }
        else {
          FUN_1803bbfb0();
          uVar13 = FUN_180011200((ulonglong)DAT_1809f9e74 + lVar10);
          lVar10 = FUN_18000f3a0((ulonglong)DAT_1809f9e78 + lVar10);
          if (((0x40 < uVar13) || (lVar10 == 0)) ||
             (uVar13 = FUN_180011200((ulonglong)DAT_1809f9e7c * (longlong)(int)uVar13 + lVar10),
             0xfffffffd < uVar13)) goto LAB_1803bd81b;
          lVar10 = FUN_1803bc190(uVar13);
        }
        (&DAT_181108eb0)[uVar20 * 10] = lVar10;
        (&DAT_181108ef8)[lVar18] = lVar10 != 0;
      }
      if ((&DAT_181108ef8)[lVar18] == '\0') {
        uVar11 = 0;
      }
      else {
        uVar11 = (&DAT_181108eb0)[uVar20 * 10];
      }
      (&DAT_181109000)[uVar20] = uVar11;
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < iVar19);
  }
  if ((DAT_180cd1a96 != '\0') || (DAT_180cd1307 != '\0')) {
    FUN_1803bbb30();
    if ((char)DAT_181109028 != '\0') {
      if (DAT_181108fc8 == '\0') {
        _DAT_181108fb8 = _DAT_181109018;
        _DAT_181108fc0 = _DAT_181109020;
        _DAT_181108fc8 = DAT_181109028;
      }
      else {
        fVar22 = (float)FUN_18051ab90((float)(*(uint *)(DAT_180ca0a50 + 0x40) ^ DAT_1808adec0) *
                                      DAT_1808ac8e4);
        fVar22 = DAT_1808ac34c - fVar22;
        _DAT_181108fb8 =
             CONCAT44(DAT_181108fbc + (DAT_18110901c - DAT_181108fbc) * fVar22,
                      DAT_181108fb8 + (DAT_181109018 - DAT_181108fb8) * fVar22);
        _DAT_181108fc0 =
             CONCAT44(DAT_181108fc4 + (DAT_181109024 - DAT_181108fc4) * fVar22,
                      DAT_181108fc0 + (DAT_181109020 - DAT_181108fc0) * fVar22);
      }
    }
  }
  iVar12 = 0;
  do {
    lVar18 = (longlong)iVar12;
    (&DAT_18110b570)[lVar18] = 0;
    if (((iVar12 < iVar19) && (pcVar16 = (char *)FUN_1803bb0d0(iVar12), pcVar16 != (char *)0x0)) &&
       (*pcVar16 != '\0')) {
      iVar7 = FUN_1804e4d70(&DAT_1809f9e90);
      if (iVar7 != 0) goto LAB_1803bdb57;
      if (DAT_1809f9edc == 0x7fffffff) goto LAB_1803bdb62;
      plVar4 = (longlong *)(&DAT_1809f9df8)[lVar18 * 8];
      if (plVar4 == (longlong *)0x0) {
        FUN_1804e4e90(&DAT_1809f9e90);
      }
      else {
        uVar21 = (&DAT_1809f9e00)[lVar18 * 0x10];
        uVar2 = (&DAT_1809f9e04)[lVar18 * 0x10];
        (**(code **)(*plVar4 + 8))(plVar4);
        FUN_1804e4e90(&DAT_1809f9e90);
        uVar11 = FUN_1803bf0c0(DAT_1811079e0,DAT_1811079f8,iVar12,plVar4,uVar21,uVar2,pcVar16 + 4);
        (&DAT_18110b570)[lVar18] = uVar11;
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    iVar12 = iVar12 + 1;
    if (1 < iVar12) {
      return;
    }
  } while( true );
}



/* ===== 1803bdb80 FUN_1803bdb80 ===== */

undefined8 FUN_1803bdb80(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_1804e4d70(&DAT_1809f9e90);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f9edc == 0x7fffffff) {
    DAT_1809f9edc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  uVar1 = (&DAT_1809f9df8)[(longlong)param_1 * 8];
  FUN_1804e4e90(&DAT_1809f9e90);
  return uVar1;
}



/* ===== 1803bdbf0 FUN_1803bdbf0 ===== */

void FUN_1803bdbf0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  uint uVar10;
  float local_res8 [6];
  
  *param_2 = 1.0;
  lVar9 = (longlong)param_1;
  uVar3 = param_1 * 2;
  *param_3 = 1.0;
  if ((int)(&DAT_1809f9d98)[lVar9] < 0) {
    uVar10 = uVar3 | 1;
    if ((&DAT_181108fe0)[(int)uVar3] != 0) {
      uVar10 = uVar3;
    }
  }
  else {
    uVar10 = uVar3 + (&DAT_1809f9d98)[lVar9];
  }
  fVar1 = *(float *)(&DAT_181108f9c + (longlong)(int)uVar10 * 4);
  fVar2 = *(float *)(&DAT_1811090b8 + (longlong)(int)uVar10 * 4);
  iVar6 = FUN_1804e4d70(&DAT_1809f9e90);
  fVar5 = DAT_1808ac34c;
  fVar4 = DAT_1808ac064;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f9edc == 0x7fffffff) {
    DAT_1809f9edc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (((((&DAT_1809f9e00)[lVar9 * 0x10] != 0) && ((&DAT_1809f9e04)[lVar9 * 0x10] != 0)) &&
      (DAT_1808ac34c <= fVar1)) && (DAT_1808ac34c <= fVar2)) {
    local_res8[4] = 1.0;
    local_res8[0] = 0.05;
    local_res8[2] = fVar1 / (float)(uint)(&DAT_1809f9e00)[lVar9 * 0x10];
    pfVar8 = local_res8;
    if (DAT_1808ac064 <= local_res8[2]) {
      pfVar8 = local_res8 + 2;
    }
    pfVar7 = local_res8 + 4;
    if (local_res8[2] <= DAT_1808ac34c) {
      pfVar7 = pfVar8;
    }
    *param_2 = *pfVar7;
    local_res8[4] = 1.0;
    local_res8[0] = 0.05;
    local_res8[2] = fVar2 / (float)(uint)(&DAT_1809f9e04)[lVar9 * 0x10];
    pfVar8 = local_res8;
    if (fVar4 <= local_res8[2]) {
      pfVar8 = local_res8 + 2;
    }
    pfVar7 = local_res8 + 4;
    if (local_res8[2] <= fVar5) {
      pfVar7 = pfVar8;
    }
    *param_3 = *pfVar7;
  }
  FUN_1804e4e90(&DAT_1809f9e90);
  return;
}



/* ===== 1803bdda0 FUN_1803bdda0 ===== */

char * FUN_1803bdda0(void)

{
  if (DAT_181108fac == 1) {
    return "panorama unavailable";
  }
  if (DAT_181108fac == 2) {
    return "no root panel";
  }
  if (DAT_181108fac == 3) {
    return "loading model";
  }
  if (DAT_181108fac != 4) {
    return "starting";
  }
  if (DAT_181108ef8 == '\0') {
    snprintf(&DAT_181109030,0x40,"no panel entity");
    return &DAT_181109030;
  }
  return "ok";
}



/* ===== 1803bde30 FUN_1803bde30 ===== */

/* WARNING: Removing unreachable block (ram,0x0001803bdf18) */

int FUN_1803bde30(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong local_res8;
  
  if (param_1 != 0) {
    if (DAT_180cd1307 == '\0') {
      if (DAT_180cd1a96 == '\0') {
        pcVar2 = "characters/models/ctm_sas/ctm_sas.vmdl";
        if (DAT_18110902c != 3) {
          pcVar2 = "players";
        }
      }
      else {
        pcVar2 = "weapon";
      }
    }
    else {
      pcVar2 = "grenade";
    }
    iVar5 = -1;
    iVar4 = 0;
    do {
      if ((&DAT_181109000)[iVar4] == param_1) {
        return iVar4;
      }
      if ((&DAT_181109000)[iVar4] == 0) {
        iVar1 = iVar4;
        if (-1 < iVar5) {
          iVar1 = iVar5;
        }
        iVar5 = iVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)((pcVar2 == "players") + 1));
    if (((-1 < iVar5) && (local_res8 = param_1, lVar3 = FUN_1803a0710(&local_res8), lVar3 != 0)) &&
       (lVar3 = FUN_1804ef120(lVar3,"C_CSGO_PreviewPlayer"), lVar3 != 0)) {
      return iVar5;
    }
  }
  return -1;
}



/* ===== 1803bdf40 FUN_1803bdf40 ===== */

char * FUN_1803bdf40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  bool bVar4;
  longlong local_res10 [3];
  
  if ((DAT_180cd1a95 != '\0') && (DAT_180cd1307 == '\0')) {
    if (DAT_180cd1a96 != '\0') {
      if (DAT_181109000 == 0) {
        if ((param_1 != 0) &&
           (local_res10[0] = param_1, lVar2 = FUN_1803a0710(local_res10), lVar2 != 0)) {
          lVar2 = FUN_1804ef120(lVar2,"C_CSGO_PreviewModel");
          bVar4 = true;
          if (lVar2 != 0) goto LAB_1803bdfc2;
        }
        bVar4 = false;
      }
      else {
        bVar4 = param_1 == DAT_181109000;
      }
LAB_1803bdfc2:
      pcVar3 = (char *)0x0;
      if ((DAT_18093c750 != '\0') && (bVar4)) {
        pcVar3 = &DAT_18093c750;
      }
      return pcVar3;
    }
    iVar1 = FUN_1803bde30();
    if (((-1 < iVar1) && (pcVar3 = (char *)FUN_1803bb0d0(iVar1), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      return pcVar3;
    }
  }
  return (char *)0x0;
}



/* ===== 1803be010 FUN_1803be010 ===== */

undefined8 * FUN_1803be010(undefined8 param_1,undefined8 *param_2)

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
  
  puVar6 = DAT_18110b5a8;
  if (DAT_18110b5a8 != DAT_18110b5b0) {
    uVar5 = param_2[1];
    *DAT_18110b5a8 = *param_2;
    puVar6[1] = uVar5;
    puVar6 = DAT_18110b5a8;
    DAT_18110b5a8 = DAT_18110b5a8 + 2;
    return puVar6;
  }
  uVar14 = 0xfffffffffffffff;
  uVar15 = (longlong)DAT_18110b5a8 - (longlong)DAT_18110b5a0;
  lVar10 = (longlong)uVar15 >> 4;
  if (lVar10 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar11 = lVar10 + 1;
  uVar8 = (longlong)DAT_18110b5b0 - (longlong)DAT_18110b5a0 >> 4;
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
  if (puVar6 == DAT_18110b5a8) {
    lVar10 = (longlong)DAT_18110b5a8 - (longlong)DAT_18110b5a0;
    puVar9 = puVar7;
    puVar6 = DAT_18110b5a0;
  }
  else {
    FUN_180540530(puVar7,DAT_18110b5a0,(longlong)puVar6 - (longlong)DAT_18110b5a0);
    puVar9 = puVar16 + 2;
    lVar10 = (longlong)DAT_18110b5a8 - (longlong)puVar6;
  }
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  FUN_180540530(puVar9,puVar6,lVar10);
  if (DAT_18110b5a0 == (undefined8 *)0x0) goto LAB_1803be161;
  puVar6 = DAT_18110b5a0;
  if (((longlong)DAT_18110b5b0 - (longlong)DAT_18110b5a0 & 0xfffffffffffffff0U) < 0x1000) {
LAB_1803be159:
    puVar13 = puVar12;
  }
  else {
    puVar6 = (undefined8 *)DAT_18110b5a0[-1];
    if (0x1f < (ulonglong)((longlong)DAT_18110b5a0 + (-8 - (longlong)puVar6))) {
      pcVar1 = (code *)swi(0x29);
      puVar6 = (undefined8 *)(*pcVar1)(5);
      puVar12 = auStack_30;
      goto LAB_1803be159;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x1803be161;
  thunk_FUN_1803d64e0(puVar6);
LAB_1803be161:
  DAT_18110b5a8 = puVar7 + uVar11 * 2;
  DAT_18110b5a0 = puVar7;
  DAT_18110b5b0 = puVar7 + uVar14 * 2;
  return puVar16;
}



/* ===== 1803be1b0 FUN_1803be1b0 ===== */

undefined8 * FUN_1803be1b0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  float fVar10;
  
  uVar8 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(DAT_18110b5f0 & uVar8);
  puVar3 = *(undefined8 **)(DAT_18110b5d8 + 8 + (longlong)puVar6 * 0x10);
  puVar9 = DAT_18110b5c8;
  if (puVar3 != DAT_18110b5c8) {
    puVar6 = *(undefined8 **)(DAT_18110b5d8 + (longlong)puVar6 * 0x10);
    lVar4 = puVar3[2];
    puVar9 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == puVar6) break;
      puVar9 = (undefined8 *)puVar9[1];
      lVar4 = puVar9[2];
    }
  }
  if (DAT_18110b5d0 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x18,puVar6,DAT_18110b5d8,param_4,&DAT_18110b5c8,0);
  puVar3[2] = *(undefined8 *)param_3;
  uVar2 = DAT_18110b5f8;
  if (DAT_18110b5c0 < (float)(DAT_18110b5d0 + 1) / (float)DAT_18110b5f8) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_18110b5d0 + 1) / DAT_18110b5c0);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar7 = uVar2;
    if ((uVar2 < uVar5) && ((0x1ff < uVar2 || (uVar7 = uVar2 * 8, uVar2 * 8 < uVar5)))) {
      uVar7 = uVar5;
    }
    FUN_1803be920(uVar5,uVar7);
    puVar6 = *(undefined8 **)(DAT_18110b5d8 + 8 + (DAT_18110b5f0 & uVar8) * 0x10);
    puVar9 = DAT_18110b5c8;
    if (puVar6 != DAT_18110b5c8) {
      lVar4 = puVar6[2];
      puVar9 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar9 == *(undefined8 **)(DAT_18110b5d8 + (DAT_18110b5f0 & uVar8) * 0x10))
        goto LAB_1803be40c;
        puVar9 = (undefined8 *)puVar9[1];
        lVar4 = puVar9[2];
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_1803be40c:
  puVar6 = (undefined8 *)puVar9[1];
  DAT_18110b5d0 = DAT_18110b5d0 + 1;
  *puVar3 = puVar9;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar9[1] = puVar3;
  lVar4 = DAT_18110b5d8;
  uVar8 = DAT_18110b5f0 & uVar8;
  puVar1 = *(undefined8 **)(DAT_18110b5d8 + uVar8 * 0x10);
  if (puVar1 == DAT_18110b5c8) {
    *(undefined8 **)(DAT_18110b5d8 + uVar8 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar9) {
      *(undefined8 **)(DAT_18110b5d8 + uVar8 * 0x10) = puVar3;
      goto LAB_1803be46b;
    }
    if (*(undefined8 **)(DAT_18110b5d8 + 8 + uVar8 * 0x10) != puVar6) goto LAB_1803be46b;
  }
  *(undefined8 **)(lVar4 + 8 + uVar8 * 0x10) = puVar3;
LAB_1803be46b:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1803be490 FUN_1803be490 ===== */

void FUN_1803be490(undefined8 param_1,uint param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (((param_2 != 0xffffffff) && (DAT_180cd1306 != '\0')) && (param_3 != 0)) {
    uVar3 = param_2;
    if (8 < param_2) {
      uVar3 = 8;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        if (*(longlong *)(param_3 + uVar2 * 8) != 0) {
          FUN_1803ba710();
        }
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < uVar3);
    }
  }
  (*DAT_181108f50)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1803be540 FUN_1803be540 ===== */

void FUN_1803be540(undefined8 param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if ((DAT_180cd1306 != '\0') && (param_3 != 0)) {
    uVar3 = param_2;
    if (8 < param_2) {
      uVar3 = 8;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        if (*(longlong *)(param_3 + uVar2 * 8) != 0) {
          FUN_1803ba710();
        }
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < uVar3);
    }
  }
  FUN_180385b80(param_1,param_2,param_3,param_4);
  (*DAT_181108fb0)(param_1,param_2,param_3,param_4);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1803be5d0 FUN_1803be5d0 ===== */

void FUN_1803be5d0(undefined8 param_1,uint param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (((param_2 != 0xffffffff) && (DAT_180cd1306 != '\0')) && (param_3 != 0)) {
    uVar3 = param_2;
    if (8 < param_2) {
      uVar3 = 8;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        if (*(longlong *)(param_3 + uVar2 * 8) != 0) {
          FUN_1803ba710();
        }
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < uVar3);
    }
  }
  (*DAT_181108f60)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1803be680 FUN_1803be680 ===== */

void FUN_1803be680(undefined8 param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if ((DAT_180cd1306 != '\0') && (param_3 != 0)) {
    uVar3 = param_2;
    if (8 < param_2) {
      uVar3 = 8;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        if (*(longlong *)(param_3 + uVar2 * 8) != 0) {
          FUN_1803ba710();
        }
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < uVar3);
    }
  }
  FUN_180385b80(param_1,param_2,param_3,param_4);
  (*DAT_181108f68)(param_1,param_2,param_3,param_4);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1803be710 FUN_1803be710 ===== */

undefined8 * FUN_1803be710(undefined8 param_1,undefined4 *param_2,char *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  size_t sVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  puVar8 = DAT_18110b588;
  if ((longlong)DAT_18110b590 - (longlong)DAT_18110b588 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = ((longlong)DAT_18110b590 - (longlong)DAT_18110b588 >> 5) + 1;
  uVar12 = DAT_18110b598 - (longlong)DAT_18110b588 >> 5;
  uVar13 = 0x7ffffffffffffff;
  if (uVar12 <= 0x7ffffffffffffff - (uVar12 >> 1)) {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar13 = uVar1;
    if (uVar1 <= uVar12) {
      uVar13 = uVar12;
    }
    if (0x7ffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar10 = (undefined8 *)FUN_18000fb70(uVar13 << 5);
  puVar14 = (undefined8 *)
            (((longlong)param_2 - (longlong)puVar8 & 0xffffffffffffffe0U) + (longlong)puVar10);
  puVar2 = puVar14 + 4;
  puVar15 = &DAT_18110b588;
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar14[3] = 0;
  puVar16 = puVar10;
  uVar12 = uVar13;
  puVar17 = puVar2;
  puVar18 = puVar2;
  sVar11 = strlen(param_3);
  FUN_1800133a0(puVar14,param_3,sVar11);
  puVar9 = DAT_18110b590;
  puVar7 = puVar10;
  puVar8 = DAT_18110b588;
  if (param_2 == DAT_18110b590) {
    for (; puVar8 != puVar9; puVar8 = puVar8 + 8) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      *(undefined4 *)puVar7 = *puVar8;
      *(undefined4 *)((longlong)puVar7 + 4) = uVar3;
      *(undefined4 *)(puVar7 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0xc) = uVar5;
      uVar6 = *(undefined8 *)(puVar8 + 6);
      puVar7[2] = *(undefined8 *)(puVar8 + 4);
      puVar7[3] = uVar6;
      *(undefined8 *)(puVar8 + 4) = 0;
      *(undefined8 *)(puVar8 + 6) = 0xf;
      *(undefined1 *)puVar8 = 0;
      puVar7 = puVar7 + 4;
    }
  }
  else {
    for (; DAT_18110b590 = puVar9, puVar8 != param_2; puVar8 = puVar8 + 8) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      *(undefined4 *)puVar7 = *puVar8;
      *(undefined4 *)((longlong)puVar7 + 4) = uVar3;
      *(undefined4 *)(puVar7 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0xc) = uVar5;
      uVar6 = *(undefined8 *)(puVar8 + 6);
      puVar7[2] = *(undefined8 *)(puVar8 + 4);
      puVar7[3] = uVar6;
      *(undefined8 *)(puVar8 + 4) = 0;
      *(undefined8 *)(puVar8 + 6) = 0xf;
      *(undefined1 *)puVar8 = 0;
      puVar7 = puVar7 + 4;
      puVar9 = DAT_18110b590;
    }
    for (; param_2 != puVar9; param_2 = param_2 + 8) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      *(undefined4 *)puVar2 = *param_2;
      *(undefined4 *)((longlong)puVar2 + 4) = uVar3;
      *(undefined4 *)(puVar2 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
      uVar6 = *(undefined8 *)(param_2 + 6);
      puVar2[2] = *(undefined8 *)(param_2 + 4);
      puVar2[3] = uVar6;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      puVar2 = puVar2 + 4;
    }
  }
  FUN_18002b950(&DAT_18110b588,puVar10,uVar1,uVar13,puVar15,puVar16,uVar12,puVar17,puVar18);
  return puVar14;
}



/* ===== 1803be920 FUN_1803be920 ===== */

void FUN_1803be920(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  
  plVar8 = DAT_18110b5c8;
  for (lVar11 = 0x3f; 0xfffffffffffffffU >> lVar11 == 0; lVar11 = lVar11 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar11 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar9 = param_2 - 1 | 1;
  lVar11 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  bVar10 = (char)lVar11 + 1;
  lVar11 = 1L << (bVar10 & 0x3f);
  FUN_180029a30(&DAT_18110b5d8,2L << (bVar10 & 0x3f),DAT_18110b5c8);
  DAT_18110b5f0 = lVar11 - 1;
  DAT_18110b5f8 = lVar11;
  plVar7 = (longlong *)*DAT_18110b5c8;
  lVar11 = DAT_18110b5d8;
joined_r0x0001803be99c:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_18110b5d8 = lVar11;
          return;
        }
        plVar1 = (longlong *)*plVar7;
        uVar9 = (((((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar7 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_18110b5f0;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_18110b5d8 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_18110b5d8;
      }
      plVar3 = *(longlong **)(lVar11 + 8 + uVar9 * 0x10);
      if (plVar7[2] != plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar7) {
        puVar4 = (undefined8 *)plVar7[1];
        *puVar4 = plVar1;
        puVar5 = (undefined8 *)plVar1[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar1[1] = (longlong)puVar4;
        plVar7[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
      plVar7 = plVar1;
      lVar11 = DAT_18110b5d8;
    }
    do {
      if (plVar2 == plVar3) {
        puVar4 = (undefined8 *)plVar7[1];
        *puVar4 = plVar1;
        puVar5 = (undefined8 *)plVar1[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar1[1] = (longlong)puVar4;
        plVar7[1] = (longlong)puVar6;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_18110b5d8;
        goto joined_r0x0001803be99c;
      }
      plVar3 = (longlong *)plVar3[1];
    } while (plVar7[2] != plVar3[2]);
    lVar11 = *plVar3;
    puVar4 = (undefined8 *)plVar7[1];
    *puVar4 = plVar1;
    plVar2 = (longlong *)plVar1[1];
    *plVar2 = lVar11;
    puVar5 = *(undefined8 **)(lVar11 + 8);
    *puVar5 = plVar7;
    *(longlong **)(lVar11 + 8) = plVar2;
    plVar1[1] = (longlong)puVar4;
    plVar7[1] = (longlong)puVar5;
    plVar7 = plVar1;
    lVar11 = DAT_18110b5d8;
  } while( true );
}



/* ===== 1803beb20 FUN_1803beb20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803beb20(void)

{
  longlong *plVar1;
  
  if (DAT_18110b620 != (longlong *)0x0) {
    (**(code **)(*DAT_18110b620 + 0x10))();
    DAT_18110b620 = (longlong *)0x0;
  }
  if (DAT_18110b618 != (longlong *)0x0) {
    (**(code **)(*DAT_18110b618 + 0x10))();
    DAT_18110b618 = (longlong *)0x0;
  }
  if (DAT_18110b610 != (longlong *)0x0) {
    (**(code **)(*DAT_18110b610 + 0x10))();
  }
  DAT_18110b610 = (longlong *)0x0;
  DAT_18110b618 = (longlong *)0x0;
  DAT_18110b620 = (longlong *)0x0;
  _DAT_18110b628 = 0;
  plVar1 = &DAT_18110b650;
  do {
    if ((longlong *)plVar1[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[2] + 0x10))();
      plVar1[2] = 0;
    }
    if ((longlong *)plVar1[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[1] + 0x10))();
      plVar1[1] = 0;
    }
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1 = plVar1 + 4;
  } while ((longlong **)plVar1 != &DAT_18110b690);
  if (DAT_18110b6a8 != (longlong *)0x0) {
    (**(code **)(*DAT_18110b6a8 + 0x10))();
    DAT_18110b6a8 = (longlong *)0x0;
  }
  if (DAT_18110b6a0 != (longlong *)0x0) {
    (**(code **)(*DAT_18110b6a0 + 0x10))();
    DAT_18110b6a0 = (longlong *)0x0;
  }
  if (DAT_18110b698 != (longlong *)0x0) {
    (**(code **)(*DAT_18110b698 + 0x10))();
    DAT_18110b698 = (longlong *)0x0;
  }
  if (DAT_18110b690 != (longlong *)0x0) {
    (**(code **)(*DAT_18110b690 + 0x10))();
    DAT_18110b690 = (longlong *)0x0;
  }
  if (DAT_18110b600 != (longlong *)0x0) {
    (**(code **)(*DAT_18110b600 + 0x10))();
    DAT_18110b600 = (longlong *)0x0;
  }
  if (DAT_18110b638 != (longlong *)0x0) {
    (**(code **)(*DAT_18110b638 + 0x10))();
    DAT_18110b638 = (longlong *)0x0;
  }
  if (DAT_18110b630 != (longlong *)0x0) {
    (**(code **)(*DAT_18110b630 + 0x10))();
    DAT_18110b630 = (longlong *)0x0;
  }
  if (DAT_18110b608 != (longlong *)0x0) {
    (**(code **)(*DAT_18110b608 + 0x10))();
    DAT_18110b608 = (longlong *)0x0;
  }
  DAT_18110b640 = 0;
  return;
}



/* ===== 1803becd0 FUN_1803becd0 ===== */

undefined8 FUN_1803becd0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_res18;
  
  plVar3 = (longlong *)
           FUN_18036e5f0("\ncbuffer glow_constants : register(b0) {\n    float4 step_sigma;\n    float4 tint;\n};\n\nTexture2D source : register(t0);\nSamplerState linear_sampler : register(s0);\n\nstruct vs_output {\n    float4 position : SV_Position;\n    float2 uv : TEXCOORD0;\n};\n\nvs_output vs_main(uint id : SV_VertexID) {\n    vs_output output;\n    float2 uv = float2((id << 1) & 2, id & 2);\n    output.uv = uv;\n    output.position = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return output;\n}\n\nfloat blurred(float2 uv, int channel) {\n    float sigma = step_sigma.z;\n    float value = 0.0;\n    float total = 0.0;\n    [unroll] for (int i = -12; i <= 12; i++) {\n        float weight = exp(-(i * i) / (2.0 * sigma * sigma));\n        float4 texel = source.Sample(linear_sampler, uv + step_sigma.xy * i);\n        value += (channel == 3 ? texel.a : texel.r) * weight;\n        total += weight;\n    }\n    return value / total;\n}\n\nfloat4 ps_alpha(vs_output input) : SV_Target {\n    float a = blurred(input.uv, 3);\n    return float4(a, a, a, a);\n}\n\nfloat4 ps_tint(vs_output input) : SV_Target {\n    float a = saturate(blurred(input.uv, 0) * step_sigma.w) * tint.a;\n    return float4(tint.rgb, a);\n}\n"
                         ,0x49c,"neverlose_preview_glow",param_2,"ps_5_0",0x8000,&DAT_1809f9f80);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  local_res18 = 0;
  lVar1 = *param_1;
  uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
  uVar5 = (**(code **)(*plVar3 + 0x18))(plVar3);
  iVar2 = (**(code **)(lVar1 + 0x78))(param_1,uVar5,uVar4,0,&local_res18);
  if (iVar2 < 0) {
    local_res18 = 0;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return local_res18;
}



/* ===== 1803bedb0 FUN_1803bedb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1803bedb0(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_98;
  if (((*param_2 == 0) || ((int)param_2[3] != param_3)) ||
     (*(int *)((longlong)param_2 + 0x1c) != param_4)) {
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[2] + 0x10))();
      param_2[2] = 0;
    }
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[1] + 0x10))();
      param_2[1] = 0;
    }
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    local_64 = 1;
    local_54 = 0;
    local_70 = 1;
    local_6c = 1;
    local_68 = 0x1c;
    local_5c = 0;
    local_58 = 0x28;
    local_78 = param_3;
    local_74 = param_4;
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,&local_78,0,param_2);
    if ((-1 < iVar1) && (*param_2 != 0)) {
      iVar1 = (**(code **)(*param_1 + 0x38))(param_1,*param_2,0,param_2 + 1);
      if (((-1 < iVar1) &&
          ((param_2[1] != 0 &&
           (iVar1 = (**(code **)(*param_1 + 0x48))(param_1,*param_2,0,param_2 + 2), -1 < iVar1))))
         && (param_2[2] != 0)) {
        *(int *)(param_2 + 3) = param_3;
        *(int *)((longlong)param_2 + 0x1c) = param_4;
        return 1;
      }
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_2[2] + 0x10))();
        param_2[2] = 0;
      }
      if ((longlong *)param_2[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_2[1] + 0x10))();
        param_2[1] = 0;
      }
      if ((longlong *)*param_2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_2 + 0x10))();
      }
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== 1803bef60 FUN_1803bef60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803bef60(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  float local_78;
  undefined4 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_98;
  local_70 = &local_48;
  local_78 = 0.0;
  local_48 = (undefined4 *)0x0;
  uStack_40 = 0;
  local_58 = param_3;
  iVar8 = (**(code **)(*param_1 + 0x70))(param_1,DAT_18110b600,0,4);
  if (-1 < iVar8) {
    uVar1 = param_5[1];
    uVar2 = param_5[2];
    uVar3 = param_5[3];
    uVar4 = param_5[4];
    uVar5 = param_5[5];
    uVar6 = param_5[6];
    uVar7 = param_5[7];
    *local_48 = *param_5;
    local_48[1] = uVar1;
    local_48[2] = uVar2;
    local_48[3] = uVar3;
    local_48[4] = uVar4;
    local_48[5] = uVar5;
    local_48[6] = uVar6;
    local_48[7] = uVar7;
    (**(code **)(*param_1 + 0x78))(param_1,DAT_18110b600,0);
    local_38 = 0;
    uStack_30 = 0;
    (**(code **)(*param_1 + 400))(param_1,*(undefined8 *)(param_4 + 0x10),&local_38);
    local_78 = (float)*(uint *)(param_4 + 0x1c);
    local_60 = DAT_18110b600;
    local_70 = (undefined4 **)DAT_18110b608;
    local_68 = param_2;
    FUN_18036e3d0(&DAT_18110b690,param_1,*(undefined8 *)(param_4 + 0x10),
                  (float)*(uint *)(param_4 + 0x18));
    (**(code **)(*param_1 + 0x40))(param_1,0,1,&local_58);
    (**(code **)(*param_1 + 0x68))(param_1,3,0);
    local_50 = 0;
    (**(code **)(*param_1 + 0x40))(param_1,0,1,&local_50);
  }
  return;
}



/* ===== 1803bf0c0 FUN_1803bf0c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1803bf0c0(longlong *param_1,longlong param_2,uint param_3,longlong param_4,uint param_5,
             uint param_6,undefined8 *param_7)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_338 [32];
  ulonglong *local_318;
  undefined4 local_310;
  undefined *local_308;
  longlong local_2f8;
  longlong local_2f0;
  undefined4 local_2e8 [2];
  undefined8 local_2e0;
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
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 local_258 [384];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_338;
  if (1 < param_3) {
    return 0;
  }
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_5 == 0) {
    return 0;
  }
  if (param_6 == 0) {
    return 0;
  }
  local_2f8 = param_2;
  local_2f0 = param_4;
  if ((DAT_18110b640 == param_1) && (DAT_18110b638 != 0)) goto LAB_1803bf2e4;
  if (DAT_180cd1a97 != '\0') {
    return 0;
  }
  FUN_1803beb20();
  local_308 = &DAT_1809f9f80;
  local_310 = 0x8000;
  local_318 = (ulonglong *)0x18058c000;
  plVar5 = (longlong *)
           FUN_18036e5f0("\ncbuffer glow_constants : register(b0) {\n    float4 step_sigma;\n    float4 tint;\n};\n\nTexture2D source : register(t0);\nSamplerState linear_sampler : register(s0);\n\nstruct vs_output {\n    float4 position : SV_Position;\n    float2 uv : TEXCOORD0;\n};\n\nvs_output vs_main(uint id : SV_VertexID) {\n    vs_output output;\n    float2 uv = float2((id << 1) & 2, id & 2);\n    output.uv = uv;\n    output.position = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return output;\n}\n\nfloat blurred(float2 uv, int channel) {\n    float sigma = step_sigma.z;\n    float value = 0.0;\n    float total = 0.0;\n    [unroll] for (int i = -12; i <= 12; i++) {\n        float weight = exp(-(i * i) / (2.0 * sigma * sigma));\n        float4 texel = source.Sample(linear_sampler, uv + step_sigma.xy * i);\n        value += (channel == 3 ? texel.a : texel.r) * weight;\n        total += weight;\n    }\n    return value / total;\n}\n\nfloat4 ps_alpha(vs_output input) : SV_Target {\n    float a = blurred(input.uv, 3);\n    return float4(a, a, a, a);\n}\n\nfloat4 ps_tint(vs_output input) : SV_Target {\n    float a = saturate(blurred(input.uv, 0) * step_sigma.w) * tint.a;\n    return float4(tint.rgb, a);\n}\n"
                         ,0x49c,"neverlose_preview_glow","vs_main");
  if (plVar5 == (longlong *)0x0) {
    DAT_180cd1a97 = 1;
    return 0;
  }
  lVar1 = *param_1;
  uVar6 = (**(code **)(*plVar5 + 0x20))(plVar5);
  uVar7 = (**(code **)(*plVar5 + 0x18))(plVar5);
  local_318 = &DAT_18110b608;
  iVar4 = (**(code **)(lVar1 + 0x60))(param_1,uVar7,uVar6,0);
  (**(code **)(*plVar5 + 0x10))();
  if (iVar4 < 0) {
    DAT_18110b630 = 0;
LAB_1803bf249:
    DAT_18110b638 = 0;
    if (-1 < iVar4) goto LAB_1803bf25a;
  }
  else {
    DAT_18110b630 = FUN_1803becd0(param_1,"ps_alpha");
    if (DAT_18110b630 == 0) goto LAB_1803bf249;
    DAT_18110b638 = FUN_1803becd0(param_1,"ps_tint");
LAB_1803bf25a:
    if ((DAT_18110b630 != 0) && (DAT_18110b638 != 0)) {
      local_78 = 0;
      local_88 = 0x200000020;
      _uStack_80 = 0x1000000000004;
      iVar4 = (**(code **)(*param_1 + 0x18))(param_1,&local_88,0,&DAT_18110b600);
      if ((-1 < iVar4) && (cVar3 = FUN_18036e1f0(&DAT_18110b690,param_1), cVar3 != '\0')) {
        DAT_18110b640 = param_1;
LAB_1803bf2e4:
        lVar1 = local_2f8;
        param_5 = param_5 >> 1;
        if (param_5 == 0) {
          param_5 = 1;
        }
        param_6 = param_6 >> 1;
        if (param_6 == 0) {
          param_6 = 1;
        }
        cVar3 = FUN_1803bedb0(param_1,&DAT_18110b610,param_5,param_6);
        if (cVar3 == '\0') {
          return 0;
        }
        cVar3 = FUN_1803bedb0(param_1,&DAT_18110b650 + (longlong)(int)param_3 * 4,param_5,param_6);
        if (cVar3 == '\0') {
          return 0;
        }
        local_2e8[0] = 0;
        local_2e0 = 0;
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
        local_280 = 0;
        uStack_278 = 0;
        local_270 = 0;
        local_268 = 0;
        local_260 = 0;
        local_25c = 0x10;
        FUN_180540170(local_258,0,0x180);
        local_98 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        FUN_18036dda0(local_2e8,lVar1);
        fVar2 = DAT_1808ac34c;
        local_78 = 0;
        uStack_70 = 0;
        _uStack_80 = 0x40600000;
        local_318 = &local_88;
        local_88 = (ulonglong)(uint)(DAT_1808ac34c / (float)param_5);
        FUN_1803bef60(lVar1,DAT_18110b630,local_2f0,&DAT_18110b610);
        _uStack_80 = CONCAT44(0x400ccccd,uStack_80);
        local_78 = *param_7;
        uStack_70 = param_7[1];
        local_318 = &local_88;
        local_88 = (ulonglong)(uint)(fVar2 / (float)param_6) << 0x20;
        FUN_1803bef60(lVar1,DAT_18110b638,DAT_18110b618,&DAT_18110b650 + (longlong)(int)param_3 * 4)
        ;
        FUN_18036df30(local_2e8,lVar1);
        return (&DAT_18110b658)[(longlong)(int)param_3 * 4];
      }
      goto LAB_1803bf4e0;
    }
  }
  local_78 = 0;
  local_88 = 0x200000020;
  _uStack_80 = 0x1000000000004;
LAB_1803bf4e0:
  FUN_1803beb20();
  DAT_180cd1a97 = 1;
  return 0;
}



/* ===== 1803bf520 FUN_1803bf520 ===== */

void FUN_1803bf520(longlong param_1,float *param_2)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  int local_res8 [2];
  int local_res18 [2];
  int local_res20 [2];
  
  uVar3 = (ulonglong)DAT_18096191c;
  local_res20[0] = 0xff;
  local_res18[0] = 0;
  local_res8[0] = (int)((float)*(byte *)(uVar3 + param_1) * *param_2);
  piVar2 = local_res18;
  if (-1 < local_res8[0]) {
    piVar2 = local_res8;
  }
  piVar1 = local_res20;
  if (local_res8[0] < 0x100) {
    piVar1 = piVar2;
  }
  *(char *)(uVar3 + param_1) = (char)*piVar1;
  local_res8[0] = (int)((float)*(byte *)(uVar3 + 1 + param_1) * param_2[1]);
  piVar2 = local_res18;
  if (-1 < local_res8[0]) {
    piVar2 = local_res8;
  }
  piVar1 = local_res20;
  if (local_res8[0] < 0x100) {
    piVar1 = piVar2;
  }
  *(char *)(uVar3 + 1 + param_1) = (char)*piVar1;
  local_res8[0] = (int)((float)*(byte *)(uVar3 + 2 + param_1) * param_2[2]);
  piVar2 = local_res18;
  if (-1 < local_res8[0]) {
    piVar2 = local_res8;
  }
  piVar1 = local_res20;
  if (local_res8[0] < 0x100) {
    piVar1 = piVar2;
  }
  *(char *)(uVar3 + 2 + param_1) = (char)*piVar1;
  local_res8[0] = (int)((float)*(byte *)(uVar3 + 3 + param_1) * param_2[3]);
  piVar2 = local_res18;
  if (-1 < local_res8[0]) {
    piVar2 = local_res8;
  }
  piVar1 = local_res20;
  if (local_res8[0] < 0x100) {
    piVar1 = piVar2;
  }
  *(char *)(uVar3 + 3 + param_1) = (char)*piVar1;
  return;
}



/* ===== 1803bf650 FUN_1803bf650 ===== */

void FUN_1803bf650(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((param_2 != 0) &&
     (iVar2 = *(int *)(param_1 + 1), iVar2 < *(int *)((longlong)param_1 + 0xc) + iVar2)) {
    uVar3 = (ulonglong)DAT_180961928;
    uVar5 = (ulonglong)DAT_180961914;
    do {
      lVar4 = (ulonglong)DAT_180961910 * (longlong)iVar2 + *(longlong *)*param_1;
      *(longlong *)(lVar4 + uVar5) = param_2;
      FUN_1803bf520(lVar4,param_3);
      if (param_4 != '\0') {
        pbVar1 = (byte *)(uVar3 + 1 + lVar4);
        *pbVar1 = *pbVar1 | 4;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((longlong)param_1 + 0xc) + *(int *)(param_1 + 1));
  }
  return;
}



/* ===== 1803bf710 FUN_1803bf710 ===== */

ulonglong FUN_1803bf710(longlong *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  iVar6 = (int)param_1[1];
  if ((iVar3 + iVar6 <= iVar6) || (iVar3 == 0)) {
    return CONCAT71((uint7)(uint3)((uint)(iVar3 + iVar6) >> 8),1);
  }
  lVar2 = *param_1;
  iVar5 = *(int *)(lVar2 + 0xc);
  if (*(int *)(lVar2 + 8) < iVar5 + iVar3) {
    uVar4 = (ulonglong)(uint3)((uint)(iVar5 + iVar3) >> 8) << 8;
  }
  else {
    uVar4 = (ulonglong)DAT_180961928;
    do {
      lVar7 = (longlong)iVar5 * (ulonglong)DAT_180961910 + *(longlong *)*param_1;
      FUN_180540530(lVar7,(longlong)iVar6 * (ulonglong)DAT_180961910 + *(longlong *)*param_1);
      *(longlong *)(lVar7 + (ulonglong)DAT_180961914) = param_2;
      FUN_1803bf520(lVar7,param_3);
      if (param_4 != '\0') {
        pbVar1 = (byte *)(uVar4 + 1 + lVar7);
        *pbVar1 = *pbVar1 | 4;
      }
      iVar6 = iVar6 + 1;
      iVar5 = *(int *)(lVar2 + 0xc) + 1;
      *(int *)(lVar2 + 0xc) = iVar5;
      iVar3 = *(int *)((longlong)param_1 + 0xc) + (int)param_1[1];
    } while (iVar6 < iVar3);
    uVar4 = CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
  }
  return uVar4;
}



/* ===== 1803bf830 FUN_1803bf830 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803bf830(longlong *param_1,longlong param_2,longlong param_3,float param_4)

{
  byte *pbVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  int *piVar5;
  char cVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  float fVar15;
  undefined1 auStack_b8 [32];
  float local_98 [2];
  float local_90 [2];
  float local_88 [2];
  float local_80 [2];
  float *local_78;
  undefined8 *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  fVar3 = DAT_1808ac34c;
  local_50 = DAT_180919500 ^ (ulonglong)auStack_b8;
  local_98[0] = 0.0;
  local_90[0] = param_4;
  fVar15 = 0.0;
  pfVar4 = local_98;
  if (0.0 <= param_4) {
    pfVar4 = local_90;
  }
  uVar7 = 0;
  local_98[0] = DAT_1808ac34c;
  if (*pfVar4 <= DAT_1808ac34c) {
    local_98[0] = *pfVar4;
  }
  local_60 = 0;
  uStack_58 = 0;
  if (*(ulonglong *)(param_2 + 0x410) != 0) {
    do {
      if (*(longlong *)(param_2 + uVar7 * 0x10) == param_3) {
        cVar6 = *(char *)(param_2 + 8 + uVar7 * 0x10);
        goto LAB_1803bf8ca;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ulonglong *)(param_2 + 0x410));
  }
  cVar6 = '\0';
LAB_1803bf8ca:
  local_78 = local_98;
  local_70 = &local_60;
  local_68 = param_1;
  if (cVar6 == '\x01') {
    FUN_1803bfe40(&local_78,1,0);
    return;
  }
  if (cVar6 == '\x02') {
    FUN_1803bfe40(&local_78,6,5);
    return;
  }
  if (cVar6 == '\x03') {
    cVar6 = '\0';
    piVar5 = (int *)FUN_180094020(8);
    if (0 < *piVar5) {
      local_88[0] = 0.0;
      local_80[0] = param_4 * DAT_1808ac31c;
      pfVar4 = local_88;
      if (fVar15 <= param_4 * DAT_1808ac31c) {
        pfVar4 = local_80;
      }
      local_60 = CONCAT44(piVar5[2],piVar5[1]);
      fVar15 = fVar3;
      if (*pfVar4 <= fVar3) {
        fVar15 = *pfVar4;
      }
      uStack_58 = CONCAT44(fVar15,piVar5[3]);
      if (((float)piVar5[4] <= fVar3 && fVar3 != (float)piVar5[4]) || (fVar15 < fVar3)) {
        plVar11 = &DAT_1809a66f0;
        puVar8 = &DAT_1809a66f8;
      }
      else {
        plVar11 = &DAT_1809a65a0;
        puVar8 = &DAT_1809a65a8;
      }
      if (*piVar5 - 1U < 7) {
        if ((DAT_1809a6598 == *piVar5) && (lVar9 = *plVar11, lVar9 != 0)) {
          iVar14 = (int)param_1[1];
          iVar2 = *(int *)((longlong)param_1 + 0xc);
          if ((iVar14 < iVar2 + iVar14) && (iVar2 != 0)) {
            lVar13 = *param_1;
            iVar10 = *(int *)(lVar13 + 0xc);
            if (*(int *)(lVar13 + 8) < iVar10 + iVar2) goto LAB_1803bfcd8;
            do {
              lVar12 = (longlong)iVar10 * (ulonglong)DAT_180961910 + *(longlong *)*param_1;
              FUN_180540530(lVar12,(longlong)iVar14 * (ulonglong)DAT_180961910 +
                                   *(longlong *)*param_1);
              *(longlong *)(lVar12 + (ulonglong)DAT_180961914) = lVar9;
              FUN_1803bf520(lVar12,&local_60);
              iVar14 = iVar14 + 1;
              pbVar1 = (byte *)(lVar12 + 1 + (ulonglong)DAT_180961928);
              *pbVar1 = *pbVar1 | 4;
              iVar10 = *(int *)(lVar13 + 0xc) + 1;
              *(int *)(lVar13 + 0xc) = iVar10;
            } while (iVar14 < *(int *)((longlong)param_1 + 0xc) + (int)param_1[1]);
          }
          cVar6 = '\x01';
        }
        else {
          *puVar8 = 1;
        }
      }
    }
LAB_1803bfcd8:
    piVar5 = (int *)FUN_180094020(7);
    if (*piVar5 < 1) {
      if (cVar6 != '\0') {
        return;
      }
      if (param_4 < fVar3) {
        return;
      }
      iVar14 = (int)param_1[1];
      if (*(int *)((longlong)param_1 + 0xc) + iVar14 <= iVar14) {
        return;
      }
      do {
        lVar9 = (longlong)iVar14;
        iVar14 = iVar14 + 1;
        pbVar1 = (byte *)((ulonglong)DAT_180961928 + 1 +
                         lVar9 * (ulonglong)DAT_180961910 + *(longlong *)*param_1);
        *pbVar1 = *pbVar1 | 4;
      } while (iVar14 < *(int *)((longlong)param_1 + 0xc) + (int)param_1[1]);
      return;
    }
    local_60 = *(undefined8 *)(piVar5 + 1);
    uStack_58 = CONCAT44(local_98[0],piVar5[3]);
    if (((float)piVar5[4] <= fVar3 && fVar3 != (float)piVar5[4]) || (local_98[0] < fVar3)) {
      plVar11 = &DAT_1809a6440;
      puVar8 = &DAT_1809a6448;
    }
    else {
      plVar11 = &DAT_1809a62f0;
      puVar8 = &DAT_1809a62f8;
    }
    if (6 < *piVar5 - 1U) {
      return;
    }
    if ((DAT_1809a62e8 == *piVar5) && (lVar9 = *plVar11, lVar9 != 0)) {
      iVar14 = (int)param_1[1];
      if (*(int *)((longlong)param_1 + 0xc) + iVar14 <= iVar14) {
        return;
      }
      do {
        lVar13 = *(longlong *)*param_1 + (longlong)iVar14 * (ulonglong)DAT_180961910;
        *(longlong *)(lVar13 + (ulonglong)DAT_180961914) = lVar9;
        FUN_1803bf520(lVar13,&local_60);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)((longlong)param_1 + 0xc) + (int)param_1[1]);
      return;
    }
    goto LAB_1803bfdaa;
  }
  if (cVar6 != '\x04') {
    return;
  }
  piVar5 = (int *)FUN_180094020(4);
  if (*piVar5 < 1) {
    return;
  }
  local_60 = *(undefined8 *)(piVar5 + 1);
  uStack_58 = CONCAT44(local_98[0],piVar5[3]);
  if (DAT_180920889 == '\0') {
LAB_1803bfaaa:
    if (DAT_180920888 == '\0') {
      return;
    }
  }
  else {
    if (((float)piVar5[4] <= fVar3 && fVar3 != (float)piVar5[4]) || (local_98[0] < fVar3)) {
      plVar11 = &DAT_1809a5cd8;
      puVar8 = &DAT_1809a5ce0;
    }
    else {
      plVar11 = &DAT_1809a5b88;
      puVar8 = &DAT_1809a5b90;
    }
    if (*piVar5 - 1U < 7) {
      if ((DAT_1809a5ad8 == *piVar5) && (lVar9 = *plVar11, lVar9 != 0)) {
        iVar14 = (int)param_1[1];
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        if ((iVar14 < iVar2 + iVar14) && (iVar2 != 0)) {
          lVar13 = *param_1;
          iVar10 = *(int *)(lVar13 + 0xc);
          if (iVar10 + iVar2 <= *(int *)(lVar13 + 8)) {
            do {
              lVar12 = (longlong)iVar10 * (ulonglong)DAT_180961910 + *(longlong *)*param_1;
              FUN_180540530(lVar12,(longlong)iVar14 * (ulonglong)DAT_180961910 +
                                   *(longlong *)*param_1);
              *(longlong *)(lVar12 + (ulonglong)DAT_180961914) = lVar9;
              FUN_1803bf520(lVar12,&local_60);
              iVar14 = iVar14 + 1;
              iVar10 = *(int *)(lVar13 + 0xc) + 1;
              *(int *)(lVar13 + 0xc) = iVar10;
            } while (iVar14 < *(int *)((longlong)param_1 + 0xc) + (int)param_1[1]);
          }
        }
      }
      else {
        *puVar8 = 1;
      }
    }
    if (DAT_180920888 == '\0') {
      iVar14 = (int)param_1[1];
      if (*(int *)((longlong)param_1 + 0xc) + iVar14 <= iVar14) {
        return;
      }
      do {
        lVar9 = (longlong)iVar14;
        iVar14 = iVar14 + 1;
        pbVar1 = (byte *)((ulonglong)DAT_180961928 + 1 +
                         lVar9 * (ulonglong)DAT_180961910 + *(longlong *)*param_1);
        *pbVar1 = *pbVar1 | 4;
      } while (iVar14 < *(int *)((longlong)param_1 + 0xc) + (int)param_1[1]);
      goto LAB_1803bfaaa;
    }
  }
  if (((float)piVar5[4] <= fVar3 && fVar3 != (float)piVar5[4]) || (local_98[0] < fVar3)) {
    plVar11 = &DAT_1809a5c30;
    puVar8 = &DAT_1809a5c38;
  }
  else {
    plVar11 = &DAT_1809a5ae0;
    puVar8 = &DAT_1809a5ae8;
  }
  if (6 < *piVar5 - 1U) {
    return;
  }
  if ((DAT_1809a5ad8 == *piVar5) && (lVar9 = *plVar11, lVar9 != 0)) {
    iVar14 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) + iVar14 <= iVar14) {
      return;
    }
    do {
      lVar13 = (longlong)iVar14 * (ulonglong)DAT_180961910 + *(longlong *)*param_1;
      *(longlong *)(lVar13 + (ulonglong)DAT_180961914) = lVar9;
      FUN_1803bf520(lVar13,&local_60);
      iVar14 = iVar14 + 1;
      pbVar1 = (byte *)(lVar13 + 1 + (ulonglong)DAT_180961928);
      *pbVar1 = *pbVar1 | 4;
    } while (iVar14 < *(int *)((longlong)param_1 + 0xc) + (int)param_1[1]);
    return;
  }
LAB_1803bfdaa:
  *puVar8 = 1;
  return;
}



/* ===== 1803bfe40 FUN_1803bfe40 ===== */

void FUN_1803bfe40(undefined8 *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  int *piVar5;
  int *piVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 *puVar12;
  
  lVar11 = (longlong)param_2;
  lVar9 = (longlong)(int)param_3;
  piVar5 = (int *)FUN_180094020(param_2);
  fVar4 = DAT_1808ac34c;
  if (*piVar5 < 1) goto LAB_1803bff0d;
  piVar6 = (int *)param_1[1];
  pfVar3 = (float *)*param_1;
  fVar2 = *pfVar3;
  *piVar6 = piVar5[1];
  piVar6[1] = piVar5[2];
  iVar10 = piVar5[3];
  piVar6[3] = (int)fVar2;
  piVar6[2] = iVar10;
  if (((float)piVar5[4] <= fVar4 && fVar4 != (float)piVar5[4]) ||
     (*pfVar3 <= fVar4 && fVar4 != *pfVar3)) {
    puVar7 = (undefined8 *)&DAT_1809a5218;
    puVar12 = &DAT_1809a5220;
  }
  else {
    puVar7 = &DAT_1809a50c8;
    puVar12 = &DAT_1809a50d0;
  }
  if (((uint)lVar11 < 0x191) && (*piVar5 - 1U < 7)) {
    if (((&DAT_1809a5018)[lVar11 * 0xac] != *piVar5) || (lVar8 = puVar7[lVar11 * 0x56], lVar8 == 0))
    {
      puVar12[lVar11 * 0x2b0] = 1;
      goto LAB_1803bfeff;
    }
  }
  else {
LAB_1803bfeff:
    lVar8 = 0;
  }
  FUN_1803bf710(param_1[2],lVar8,piVar6,0);
LAB_1803bff0d:
  piVar6 = (int *)FUN_180094020(param_3);
  if (*piVar6 < 1) {
    if (0 < *piVar5) {
      puVar7 = (undefined8 *)param_1[2];
      iVar10 = *(int *)(puVar7 + 1);
      if (iVar10 < *(int *)((longlong)puVar7 + 0xc) + iVar10) {
        do {
          lVar9 = (longlong)iVar10;
          iVar10 = iVar10 + 1;
          pbVar1 = (byte *)(lVar9 * (ulonglong)DAT_180961910 + *(longlong *)*puVar7 + 1 +
                           (ulonglong)DAT_180961928);
          *pbVar1 = *pbVar1 | 4;
        } while (iVar10 < *(int *)((longlong)puVar7 + 0xc) + *(int *)(puVar7 + 1));
      }
    }
  }
  else {
    pfVar3 = (float *)*param_1;
    piVar5 = (int *)param_1[1];
    fVar2 = *pfVar3;
    *piVar5 = piVar6[1];
    piVar5[1] = piVar6[2];
    iVar10 = piVar6[3];
    piVar5[3] = (int)fVar2;
    piVar5[2] = iVar10;
    if (((float)piVar6[4] <= fVar4 && fVar4 != (float)piVar6[4]) ||
       (*pfVar3 <= fVar4 && fVar4 != *pfVar3)) {
      puVar7 = (undefined8 *)&DAT_1809a5170;
      puVar12 = &DAT_1809a5178;
    }
    else {
      puVar7 = &DAT_1809a5020;
      puVar12 = &DAT_1809a5028;
    }
    if ((param_3 < 0x191) && (*piVar6 - 1U < 7)) {
      if (((&DAT_1809a5018)[lVar9 * 0xac] == *piVar6) &&
         (lVar11 = puVar7[lVar9 * 0x56], lVar11 != 0)) {
        puVar7 = (undefined8 *)param_1[2];
        iVar10 = *(int *)(puVar7 + 1);
        if (iVar10 < *(int *)((longlong)puVar7 + 0xc) + iVar10) {
          do {
            lVar9 = (longlong)iVar10 * (ulonglong)DAT_180961910 + *(longlong *)*puVar7;
            *(longlong *)(lVar9 + (ulonglong)DAT_180961914) = lVar11;
            FUN_1803bf520(lVar9,piVar5);
            iVar10 = iVar10 + 1;
            pbVar1 = (byte *)(lVar9 + 1 + (ulonglong)DAT_180961928);
            *pbVar1 = *pbVar1 | 4;
          } while (iVar10 < *(int *)((longlong)puVar7 + 0xc) + *(int *)(puVar7 + 1));
        }
      }
      else {
        puVar12[lVar9 * 0x2b0] = 1;
      }
    }
  }
  return;
}



/* ===== 1803c0070 FUN_1803c0070 ===== */

void FUN_1803c0070(undefined8 *param_1,int param_2,float param_3)

{
  byte *pbVar1;
  longlong lVar2;
  int *piVar3;
  float *pfVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  float local_28 [2];
  float local_20 [2];
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  
  lVar8 = (longlong)param_2;
  piVar3 = (int *)FUN_180094020(param_2);
  iVar7 = *piVar3;
  if (0 < iVar7) {
    if (DAT_1808ac31c <= param_3) {
      param_3 = DAT_1808ac31c;
    }
    local_14 = piVar3[2];
    local_28[0] = 0.0;
    local_18 = piVar3[1];
    local_20[0] = param_3;
    pfVar4 = local_28;
    if (0.0 <= param_3) {
      pfVar4 = local_20;
    }
    local_c = DAT_1808ac34c;
    if (*pfVar4 <= DAT_1808ac34c) {
      local_c = *pfVar4;
    }
    local_10 = piVar3[3];
    if (((float)piVar3[4] <= DAT_1808ac34c && DAT_1808ac34c != (float)piVar3[4]) ||
       (local_c < DAT_1808ac34c)) {
      puVar6 = (undefined8 *)&DAT_1809a5218;
      puVar5 = &DAT_1809a5220;
    }
    else {
      puVar6 = &DAT_1809a50c8;
      puVar5 = &DAT_1809a50d0;
    }
    if (((uint)lVar8 < 0x191) && (iVar7 < 8)) {
      if (((&DAT_1809a5018)[lVar8 * 0xac] != iVar7) || (lVar2 = puVar6[lVar8 * 0x56], lVar2 == 0)) {
        puVar5[lVar8 * 0x2b0] = 1;
        return;
      }
      iVar7 = *(int *)(param_1 + 1);
      if (iVar7 < *(int *)((longlong)param_1 + 0xc) + iVar7) {
        do {
          lVar8 = (longlong)iVar7 * (ulonglong)DAT_180961910 + *(longlong *)*param_1;
          *(longlong *)(lVar8 + (ulonglong)DAT_180961914) = lVar2;
          FUN_1803bf520(lVar8,&local_18);
          iVar7 = iVar7 + 1;
          pbVar1 = (byte *)(lVar8 + 1 + (ulonglong)DAT_180961928);
          *pbVar1 = *pbVar1 | 4;
        } while (iVar7 < *(int *)((longlong)param_1 + 0xc) + *(int *)(param_1 + 1));
      }
    }
  }
  return;
}



/* ===== 1803c01e0 FUN_1803c01e0 ===== */

void FUN_1803c01e0(longlong *param_1,longlong param_2,longlong param_3,int param_4,char param_5,
                  float param_6)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  undefined1 *puVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0 [2];
  float local_b8 [2];
  float local_b0 [2];
  float local_a8 [2];
  int local_a0;
  int local_9c;
  int local_98;
  float local_94;
  int local_90;
  int local_8c;
  int local_88;
  float local_84;
  
  uVar7 = 0;
  lVar14 = param_3;
  iVar15 = param_4;
  if (*(ulonglong *)(param_2 + 0x758) != 0) {
    do {
      if (*(longlong *)(param_2 + 0x418 + uVar7 * 8) == param_3) {
        iVar6 = (int)uVar7;
        if ((-1 < iVar6) && (*(char *)((longlong)iVar6 + 0x718 + param_2) != '\0')) {
          iVar6 = *(int *)(param_2 + 0x618 + (longlong)iVar6 * 4);
          if (iVar6 < 0) goto LAB_1803c024b;
          iVar18 = iVar6 * 6;
          if (param_4 == 7) {
            uVar20 = iVar18 + 0x15;
            uVar7 = (ulonglong)(iVar18 + 0x16);
            piVar8 = (int *)FUN_180094020(uVar20);
            if ((0 < *piVar8) || (piVar8 = (int *)FUN_180094020(uVar7 & 0xffffffff), 0 < *piVar8)) {
              bVar2 = true;
              goto LAB_1803c0288;
            }
          }
          uVar20 = iVar18 + 0x11;
          piVar8 = (int *)FUN_180094020(uVar20);
          if ((*piVar8 < 1) && (piVar8 = (int *)FUN_180094020((iVar6 + 3) * 6), *piVar8 < 1))
          goto LAB_1803c024b;
          uVar7 = (ulonglong)(iVar18 + 0x12);
          bVar2 = true;
          goto LAB_1803c0288;
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ulonglong *)(param_2 + 0x758));
  }
  iVar6 = -1;
LAB_1803c024b:
  if (iVar15 == 7) {
    uVar20 = 0xf;
    piVar8 = (int *)FUN_180094020(0xf);
    uVar7 = 0x10;
    if ((*piVar8 < 1) && (piVar8 = (int *)FUN_180094020(0x10), *piVar8 < 1)) goto LAB_1803c0277;
  }
  else {
LAB_1803c0277:
    uVar7 = 0xe;
    uVar20 = 0xd;
  }
  bVar2 = false;
LAB_1803c0288:
  fVar5 = DAT_1808ac34c;
  uVar16 = (uint)uVar7;
  fVar21 = 0.0;
  local_b8[0] = param_6;
  local_c0[0] = 0.0;
  local_d0 = 0;
  uStack_c8 = 0;
  pfVar9 = local_c0;
  if (0.0 <= param_6) {
    pfVar9 = local_b8;
  }
  fVar22 = DAT_1808ac34c;
  if (*pfVar9 <= DAT_1808ac34c) {
    fVar22 = *pfVar9;
  }
  piVar8 = (int *)FUN_180094020(uVar7 & 0xffffffff);
  puVar19 = &DAT_1809a5020;
  iVar15 = *piVar8;
  if (0 < iVar15) {
    local_b0[0] = 0.0;
    local_a8[0] = param_6 * DAT_1808ac31c;
    local_d0 = *(undefined8 *)(piVar8 + 1);
    pfVar9 = local_b0;
    if (fVar21 <= param_6 * DAT_1808ac31c) {
      pfVar9 = local_a8;
    }
    fVar21 = fVar5;
    if (*pfVar9 <= fVar5) {
      fVar21 = *pfVar9;
    }
    uStack_c8 = CONCAT44(fVar21,piVar8[3]);
    if (((float)piVar8[4] <= fVar5 && fVar5 != (float)piVar8[4]) || (fVar21 < fVar5)) {
      puVar19 = (undefined8 *)&DAT_1809a5170;
      puVar13 = &DAT_1809a5178;
    }
    else {
      puVar13 = &DAT_1809a5028;
    }
    if ((uVar16 < 0x191) && (iVar15 < 8)) {
      lVar10 = (longlong)(int)uVar16;
      if (((&DAT_1809a5018)[lVar10 * 0xac] == iVar15) &&
         (lVar11 = puVar19[lVar10 * 0x56], lVar11 != 0)) {
        iVar15 = (int)param_1[1];
        iVar18 = *(int *)((longlong)param_1 + 0xc);
        if ((iVar15 < iVar18 + iVar15) && (iVar18 != 0)) {
          lVar10 = *param_1;
          iVar17 = *(int *)(lVar10 + 0xc);
          if (*(int *)(lVar10 + 8) < iVar17 + iVar18) {
            do {
              lVar14 = (longlong)iVar15 * (ulonglong)DAT_180961910 + *(longlong *)*param_1;
              *(longlong *)(lVar14 + (ulonglong)DAT_180961914) = lVar11;
              FUN_1803bf520(lVar14,&local_d0);
              iVar15 = iVar15 + 1;
              pbVar1 = (byte *)((ulonglong)DAT_180961928 + 1 + lVar14);
              *pbVar1 = *pbVar1 | 4;
              lVar14 = param_3;
            } while (iVar15 < *(int *)((longlong)param_1 + 0xc) + (int)param_1[1]);
          }
          else {
            do {
              lVar14 = (longlong)iVar17 * (ulonglong)DAT_180961910 + *(longlong *)*param_1;
              FUN_180540530(lVar14,(longlong)iVar15 * (ulonglong)DAT_180961910 +
                                   *(longlong *)*param_1);
              *(longlong *)(lVar14 + (ulonglong)DAT_180961914) = lVar11;
              FUN_1803bf520(lVar14,&local_d0);
              iVar15 = iVar15 + 1;
              pbVar1 = (byte *)(lVar14 + 1 + (ulonglong)DAT_180961928);
              *pbVar1 = *pbVar1 | 4;
              iVar17 = *(int *)(lVar10 + 0xc) + 1;
              *(int *)(lVar10 + 0xc) = iVar17;
              lVar14 = param_3;
            } while (iVar15 < *(int *)((longlong)param_1 + 0xc) + (int)param_1[1]);
          }
        }
      }
      else {
        puVar13[lVar10 * 0x2b0] = 1;
      }
    }
  }
  puVar19 = &DAT_1809a5020;
  puVar13 = &DAT_1809a5028;
  if (param_4 == 9) {
    bVar3 = false;
    if (((*(uint *)(param_2 + 0x780) != 0) && (*(int *)(param_2 + 0x784) != 0)) && (lVar14 != 0)) {
      lVar14 = FUN_18000f3a0(lVar14 + 8 + (ulonglong)*(uint *)(param_2 + 0x780));
      if ((lVar14 - 0x10000U < 0x7ffffffeffff) &&
         (iVar15 = FUN_180011200((ulonglong)*(uint *)(param_2 + 0x784) + lVar14), iVar15 == 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
    }
    if (((iVar6 < 0) || (lVar14 = (longlong)iVar6 * 0x2ac, lVar14 == -0x180931b4c)) ||
       (*(char *)(lVar14 + 0x180931cc4) == '\0')) {
      if ((!bVar2) && (DAT_180920cc4 != '\0')) {
        piVar8 = &DAT_180920cd8;
        if (!bVar3) {
          piVar8 = (int *)&DAT_180920cc8;
        }
        goto LAB_1803c0639;
      }
      piVar8 = (int *)FUN_180094020(uVar20);
      if (*piVar8 < 1) goto LAB_1803c0873;
      piVar8 = piVar8 + 1;
    }
    else {
      piVar8 = (int *)(&DAT_180931cc8 + lVar14);
    }
    if (piVar8 != (int *)0x0) {
LAB_1803c0639:
      fVar4 = DAT_1808ac21c;
      fVar21 = DAT_1808ac1b0;
      iVar15 = (int)param_1[1];
      if (*(int *)((longlong)param_1 + 0xc) + iVar15 <= iVar15) {
        return;
      }
      do {
        lVar10 = (ulonglong)DAT_180961910 * (longlong)iVar15 + *(longlong *)*param_1;
        lVar14 = *(longlong *)(lVar10 + (ulonglong)DAT_180961914);
        if (bVar3) {
          if (lVar14 == 0) goto LAB_1803c0788;
          lVar11 = FUN_1801d2840(lVar14);
          if ((lVar11 == 0) ||
             (lVar11 = FUN_1804ef120(lVar11,"stattrak_module_display_knife"), lVar11 == 0))
          goto LAB_1803c0717;
          local_9c = piVar8[1];
          local_a0 = *piVar8;
          local_98 = piVar8[2];
          local_94 = (float)piVar8[3] * fVar4 * fVar22 + fVar21;
          FUN_1803bf520(lVar10,&local_a0);
        }
        else {
          if (lVar14 != 0) {
LAB_1803c0717:
            lVar14 = FUN_1801d2840(lVar14);
            if (((lVar14 != 0) &&
                (lVar14 = FUN_1804ef120(lVar14,"stattrak_module_display"), lVar14 != 0)) &&
               ((param_5 == '\0' || (fVar5 <= fVar22)))) {
              local_8c = piVar8[1];
              local_90 = *piVar8;
              local_84 = fVar22 * (float)piVar8[3];
              local_88 = piVar8[2];
              FUN_1803bf520(lVar10,&local_90);
              pbVar1 = (byte *)(lVar10 + 1 + (ulonglong)DAT_180961928);
              *pbVar1 = *pbVar1 | 4;
              goto LAB_1803c0843;
            }
          }
LAB_1803c0788:
          piVar12 = (int *)FUN_180094020(uVar20);
          iVar6 = *piVar12;
          if (0 < iVar6) {
            local_d0 = *(undefined8 *)(piVar12 + 1);
            uStack_c8 = CONCAT44(fVar22,piVar12[3]);
            if (((float)piVar12[4] <= fVar5 && fVar5 != (float)piVar12[4]) || (fVar22 < fVar5)) {
              puVar19 = (undefined8 *)&DAT_1809a5170;
              puVar13 = &DAT_1809a5178;
            }
            else {
              puVar19 = &DAT_1809a5020;
              puVar13 = &DAT_1809a5028;
            }
            if ((uVar20 < 0x191) && (iVar6 < 8)) {
              lVar14 = (longlong)(int)uVar20;
              if (((&DAT_1809a5018)[lVar14 * 0xac] == iVar6) && (puVar19[lVar14 * 0x56] != 0)) {
                *(undefined8 *)(lVar10 + (ulonglong)DAT_180961914) = puVar19[lVar14 * 0x56];
                FUN_1803bf520(lVar10,&local_d0);
                pbVar1 = (byte *)(lVar10 + 1 + (ulonglong)DAT_180961928);
                *pbVar1 = *pbVar1 | 4;
              }
              else {
                puVar13[lVar14 * 0x2b0] = 1;
              }
            }
          }
        }
LAB_1803c0843:
        iVar15 = iVar15 + 1;
        if (*(int *)((longlong)param_1 + 0xc) + (int)param_1[1] <= iVar15) {
          return;
        }
      } while( true );
    }
  }
LAB_1803c0873:
  piVar8 = (int *)FUN_180094020(uVar20);
  iVar15 = *piVar8;
  if (iVar15 < 1) {
    return;
  }
  local_d0 = *(undefined8 *)(piVar8 + 1);
  uStack_c8 = CONCAT44(fVar22,piVar8[3]);
  if (((float)piVar8[4] <= fVar5 && fVar5 != (float)piVar8[4]) || (fVar22 < fVar5)) {
    puVar19 = (undefined8 *)&DAT_1809a5170;
    puVar13 = &DAT_1809a5178;
  }
  if ((uVar20 < 0x191) && (iVar15 < 8)) {
    lVar14 = (longlong)(int)uVar20;
    if (((&DAT_1809a5018)[lVar14 * 0xac] == iVar15) &&
       (lVar10 = puVar19[lVar14 * 0x56], lVar10 != 0)) goto LAB_1803c08fb;
    puVar13[lVar14 * 0x2b0] = 1;
  }
  lVar10 = 0;
LAB_1803c08fb:
  FUN_1803bf650(param_1,lVar10,&local_d0,param_4 != 6);
  return;
}



/* ===== 1803c0940 FUN_1803c0940 ===== */

ulonglong FUN_1803c0940(longlong param_1)

{
  int iVar1;
  char *_Str1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar2;
  undefined4 extraout_var_01;
  
  uVar2 = (ulonglong)DAT_180961914;
  if (*(longlong *)(uVar2 + param_1) != 0) {
    _Str1 = (char *)FUN_1801d2840();
    uVar2 = 0;
    if (_Str1 != (char *)0x0) {
      iVar1 = strncmp(_Str1,"compmat_",8);
      uVar2 = CONCAT44(extraout_var,iVar1);
      if (iVar1 == 0) {
LAB_1803c097b:
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
      iVar1 = strncmp(_Str1,"char",4);
      uVar2 = CONCAT44(extraout_var_00,iVar1);
      if (iVar1 == 0) {
        uVar2 = strlen(_Str1);
        if (0x21 < uVar2) {
          iVar1 = strncmp(_Str1 + 0x1e,"glov",4);
          uVar2 = CONCAT44(extraout_var_01,iVar1);
          if (iVar1 == 0) goto LAB_1803c097b;
        }
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



/* ===== 1803c09d0 FUN_1803c09d0 ===== */

void FUN_1803c09d0(longlong *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ULONGLONG UVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  
  uVar5 = DAT_180cec848;
  uVar4 = DAT_180cec840;
  if (((DAT_180cc4c8c != '\0') && (DAT_180cec840 != 0)) && (DAT_180cec848 != 0)) {
    iVar10 = (int)param_1[1];
    lVar3 = *param_1;
    iVar13 = *(int *)((longlong)param_1 + 0xc) + iVar10;
    iVar12 = iVar10;
    for (; iVar10 < iVar13; iVar10 = iVar10 + 1) {
      lVar11 = (ulonglong)DAT_180961910 * (longlong)iVar10 + *(longlong *)*param_1;
      lVar6 = FUN_18000f3a0(lVar11);
      if ((lVar6 == 0) ||
         (uVar7 = FUN_18000f3a0(lVar6 + 0x38), (uVar5 & uVar7) == 0 || (uVar4 & uVar7) == 0)) {
        if (iVar12 != iVar10) {
          FUN_180540530((longlong)iVar12 * (ulonglong)DAT_180961910 + *(longlong *)*param_1,lVar11);
        }
        iVar12 = iVar12 + 1;
      }
    }
    iVar10 = iVar13 - iVar12;
    if (0 < iVar10) {
      iVar9 = *(int *)(lVar3 + 0xc) - iVar13;
      if (0 < iVar9) {
        uVar7 = (ulonglong)DAT_180961910;
        FUN_180540530((longlong)iVar12 * uVar7 + *(longlong *)*param_1,
                      (longlong)iVar13 * uVar7 + *(longlong *)*param_1,(longlong)iVar9 * uVar7);
      }
      piVar1 = (int *)(lVar3 + 0xc);
      *piVar1 = *piVar1 - iVar10;
      if ((DAT_18110b6b8 < 0x28) && (iVar10 != DAT_1809f7718)) {
        uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
        DAT_18110b6b8 = DAT_18110b6b8 + 1;
        DAT_1809f7718 = iVar10;
        UVar8 = GetTickCount64();
        FUN_1802b2870("wl_skins.log",
                      "[%llu] sleeves | removed %d of %d hud arms primitives | masks %llx %llx\n",
                      UVar8,iVar10,uVar2,uVar4,uVar5);
      }
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - iVar10;
    }
  }
  return;
}



/* ===== 1803c0b70 FUN_1803c0b70 ===== */

void FUN_1803c0b70(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  uint local_res8;
  uint local_res10;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_res10 = 0xb;
  uVar15 = 0xc;
  local_res8 = 9;
  uVar19 = 10;
  if ((*(char *)(param_2 + 0x769) != '\0') && (-1 < *(int *)(param_2 + 0x764))) {
    iVar20 = *(int *)(param_2 + 0x764) * 6;
    uVar17 = iVar20 + 0x11;
    uVar18 = (ulonglong)(iVar20 + 0x12);
    piVar6 = (int *)FUN_180094020(uVar17);
    if ((0 < *piVar6) || (piVar6 = (int *)FUN_180094020(uVar18 & 0xffffffff), 0 < *piVar6)) {
      uVar15 = uVar18 & 0xffffffff;
      local_res10 = uVar17;
    }
  }
  if ((*(char *)(param_2 + 0x768) != '\0') && (-1 < *(int *)(param_2 + 0x760))) {
    iVar20 = *(int *)(param_2 + 0x760) * 6;
    uVar17 = iVar20 + 0x13;
    piVar6 = (int *)FUN_180094020(uVar17);
    if ((0 < *piVar6) || (piVar6 = (int *)FUN_180094020(iVar20 + 0x14), 0 < *piVar6)) {
      uVar19 = iVar20 + 0x14;
      local_res8 = uVar17;
    }
  }
  uVar17 = (uint)uVar15;
  local_58 = 0;
  uStack_50 = 0;
  piVar6 = (int *)FUN_180094020(uVar15 & 0xffffffff);
  iVar20 = *piVar6;
  if (0 < iVar20) {
    local_58 = *(undefined8 *)(piVar6 + 1);
    uStack_50 = CONCAT44(0x3f7d70a4,piVar6[3]);
    if ((uVar17 < 0x191) && (iVar20 < 8)) {
      lVar8 = (longlong)(int)uVar17 * 0x2b0;
      if (((&DAT_1809a5018)[(longlong)(int)uVar17 * 0xac] == iVar20) &&
         (lVar7 = *(longlong *)(&DAT_1809a5170 + lVar8), lVar7 != 0)) {
        iVar20 = (int)param_1[1];
        iVar11 = 0;
        lVar8 = *param_1;
        if (iVar20 < *(int *)((longlong)param_1 + 0xc) + iVar20) {
          do {
            cVar5 = FUN_1803c0940((longlong)iVar20 * (ulonglong)DAT_180961910 +
                                  *(longlong *)*param_1);
            iVar14 = (int)param_1[1];
            iVar11 = (iVar11 + 1) - (uint)(cVar5 == '\0');
            iVar20 = iVar20 + 1;
            iVar10 = *(int *)((longlong)param_1 + 0xc) + iVar14;
          } while (iVar20 < iVar10);
          if (((iVar11 != 0) && (*(int *)(lVar8 + 0xc) + iVar11 <= *(int *)(lVar8 + 8))) &&
             (iVar14 < iVar10)) {
            do {
              lVar13 = (longlong)iVar14 * (ulonglong)DAT_180961910 + *(longlong *)*param_1;
              cVar5 = FUN_1803c0940(lVar13);
              if (cVar5 != '\0') {
                lVar12 = (longlong)*(int *)(lVar8 + 0xc) * (ulonglong)DAT_180961910 +
                         *(longlong *)*param_1;
                FUN_180540530(lVar12,lVar13);
                *(longlong *)(lVar12 + (ulonglong)DAT_180961914) = lVar7;
                FUN_1803bf520(lVar12,&local_58);
                pbVar1 = (byte *)(lVar12 + 1 + (ulonglong)DAT_180961928);
                *pbVar1 = *pbVar1 | 4;
                *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)((longlong)param_1 + 0xc) + (int)param_1[1]);
          }
        }
      }
      else {
        (&DAT_1809a5178)[lVar8] = 1;
      }
    }
  }
  piVar6 = (int *)FUN_180094020(uVar19);
  iVar20 = *piVar6;
  if (0 < iVar20) {
    local_58 = *(undefined8 *)(piVar6 + 1);
    uStack_50 = CONCAT44(0x3f7d70a4,piVar6[3]);
    if ((uVar19 < 0x191) && (iVar20 < 8)) {
      lVar8 = (longlong)(int)uVar19 * 0x2b0;
      if (((&DAT_1809a5018)[(longlong)(int)uVar19 * 0xac] == iVar20) &&
         (lVar7 = *(longlong *)(&DAT_1809a5170 + lVar8), lVar7 != 0)) {
        iVar20 = (int)param_1[1];
        iVar11 = 0;
        lVar8 = *param_1;
        if (iVar20 < *(int *)((longlong)param_1 + 0xc) + iVar20) {
          do {
            cVar5 = FUN_1803c0940((longlong)iVar20 * (ulonglong)DAT_180961910 +
                                  *(longlong *)*param_1);
            iVar14 = (int)param_1[1];
            iVar11 = iVar11 + (uint)(cVar5 == '\0');
            iVar20 = iVar20 + 1;
            iVar10 = *(int *)((longlong)param_1 + 0xc) + iVar14;
          } while (iVar20 < iVar10);
          if (((iVar11 != 0) && (*(int *)(lVar8 + 0xc) + iVar11 <= *(int *)(lVar8 + 8))) &&
             (iVar14 < iVar10)) {
            do {
              lVar13 = (longlong)iVar14 * (ulonglong)DAT_180961910 + *(longlong *)*param_1;
              cVar5 = FUN_1803c0940(lVar13);
              if (cVar5 == '\0') {
                lVar12 = (longlong)*(int *)(lVar8 + 0xc) * (ulonglong)DAT_180961910 +
                         *(longlong *)*param_1;
                FUN_180540530(lVar12,lVar13);
                *(longlong *)(lVar12 + (ulonglong)DAT_180961914) = lVar7;
                FUN_1803bf520(lVar12,&local_58);
                pbVar1 = (byte *)(lVar12 + 1 + (ulonglong)DAT_180961928);
                *pbVar1 = *pbVar1 | 4;
                *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)((longlong)param_1 + 0xc) + (int)param_1[1]);
          }
        }
      }
      else {
        (&DAT_1809a5178)[lVar8] = 1;
      }
    }
  }
  fVar4 = DAT_1808ac34c;
  iVar20 = (int)param_1[1];
  if (iVar20 < *(int *)((longlong)param_1 + 0xc) + iVar20) {
    do {
      lVar8 = (ulonglong)DAT_180961910 * (longlong)iVar20 + *(longlong *)*param_1;
      cVar5 = FUN_1803c0940(lVar8);
      uVar19 = local_res8;
      if (cVar5 != '\0') {
        uVar19 = local_res10;
      }
      piVar6 = (int *)FUN_180094020(uVar19);
      iVar11 = *piVar6;
      if (0 < iVar11) {
        bVar2 = fVar4 != (float)piVar6[4];
        bVar3 = (float)piVar6[4] <= fVar4;
        puVar9 = &DAT_1809a5028;
        puVar16 = &DAT_1809a5020;
        local_58 = *(undefined8 *)(piVar6 + 1);
        if (bVar3 && bVar2) {
          puVar9 = &DAT_1809a5178;
        }
        uStack_50 = CONCAT44(0x3f800000,piVar6[3]);
        if (bVar3 && bVar2) {
          puVar16 = (undefined8 *)&DAT_1809a5170;
        }
        if ((uVar19 < 0x191) && (iVar11 < 8)) {
          lVar7 = (longlong)(int)uVar19;
          if (((&DAT_1809a5018)[lVar7 * 0xac] == iVar11) && (puVar16[lVar7 * 0x56] != 0)) {
            *(undefined8 *)(lVar8 + (ulonglong)DAT_180961914) = puVar16[lVar7 * 0x56];
            FUN_1803bf520(lVar8,&local_58);
          }
          else {
            puVar9[lVar7 * 0x2b0] = 1;
          }
        }
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)((longlong)param_1 + 0xc) + (int)param_1[1]);
  }
  return;
}



/* ===== 1803c1070 FUN_1803c1070 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_1803c1070(undefined4 *param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_178 [32];
  longlong local_158 [2];
  char local_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_178;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 6;
  *(undefined1 *)(param_1 + 7) = 0;
  pcVar6 = (char *)FUN_1803a0710(param_3);
  if (pcVar6 == (char *)0x0) {
    return param_1;
  }
  iVar2 = strcmp(pcVar6,"C_CSPlayerPawn");
  if (iVar2 == 0) {
    *(longlong *)(param_1 + 2) = *param_3;
    *param_1 = 1;
    return param_1;
  }
  iVar2 = strcmp(pcVar6,"C_WorldModelGloves");
  if (iVar2 == 0) {
    uVar10 = (ulonglong)DAT_180ca095c;
    if (DAT_180ca095c == 0) {
      return param_1;
    }
    uVar12 = (ulonglong)DAT_180ca0960;
    if (DAT_180ca0960 == 0) {
      return param_1;
    }
    if (((*param_3 == 0) || (DAT_180ca09f8 == 0)) ||
       ((lVar7 = FUN_18000f3a0(*param_3 + (ulonglong)DAT_180ca09f8), lVar7 == 0 ||
        (lVar7 = FUN_18000f3a0(lVar7 + uVar10), lVar7 == 0)))) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_18000f3a0(lVar7 + uVar12);
    }
    if (lVar7 == 0) {
      return param_1;
    }
    lVar8 = FUN_18000f3a0();
    if (lVar8 == 0) {
      pcVar6 = (char *)0x0;
    }
    else {
      lVar8 = FUN_18000f3a0();
      if (lVar8 == 0) {
        pcVar6 = (char *)0x0;
      }
      else {
        lVar8 = FUN_18000f3a0();
        if (lVar8 == 0) {
          pcVar6 = (char *)0x0;
        }
        else {
          pcVar9 = (char *)FUN_18000f3a0();
          pcVar6 = (char *)0x0;
          if (pcVar9 + -0x10000 < (char *)0x7ffffffeffff) {
            pcVar6 = pcVar9;
          }
        }
      }
    }
    if (pcVar6 == (char *)0x0) {
      return param_1;
    }
LAB_1803c11ee:
    iVar2 = strcmp(pcVar6,"C_CSPlayerPawn");
    if (iVar2 == 0) {
      *param_1 = 1;
      *(longlong *)(param_1 + 2) = lVar7;
    }
    return param_1;
  }
  iVar2 = strcmp(pcVar6,"C_CS2HudModelArms");
  if (iVar2 == 0) {
    if ((*(uint *)(param_2 + 0x77c) != 0) && (*param_3 != 0)) {
      lVar7 = *param_3 + (ulonglong)*(uint *)(param_2 + 0x77c);
LAB_1803c1631:
      uVar3 = FUN_180011200(lVar7);
      if ((uVar3 != 0) && ((uVar3 & 0x7fff) != 0x7fff)) {
        FUN_1803a0940(local_158,uVar3);
        goto LAB_1803c165f;
      }
    }
  }
  else {
    iVar2 = strcmp(pcVar6,"C_CS2HudModelWeapon");
    if (iVar2 == 0) {
      if ((((*(uint *)(param_2 + 0x77c) == 0) || (*param_3 == 0)) ||
          (uVar3 = FUN_180011200(*param_3 + (ulonglong)*(uint *)(param_2 + 0x77c)), uVar3 == 0)) ||
         ((uVar3 & 0x7fff) == 0x7fff)) {
        local_158[0] = 0;
      }
      else {
        FUN_1803a0940(local_158,uVar3);
      }
      if (local_158[0] == 0) {
        return param_1;
      }
      lVar7 = thunk_FUN_1804e6f30(param_2 + 0x418,
                                  param_2 + (*(longlong *)(param_2 + 0x758) + 0x83) * 8,local_158[0]
                                 );
      if (lVar7 == param_2 + (*(longlong *)(param_2 + 0x758) + 0x83) * 8) {
        return param_1;
      }
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 0x770);
      *param_1 = 2;
      *(longlong *)(param_1 + 4) = local_158[0];
      *(undefined1 *)(param_1 + 7) = 1;
      return param_1;
    }
    iVar2 = strcmp(pcVar6,"C_CS2HudModelAddon");
    uVar3 = DAT_180ca09f8;
    if (iVar2 != 0) {
      iVar2 = strcmp(pcVar6,"C_KeychainModule");
      iVar4 = strcmp(pcVar6,"C_NametagModule");
      iVar5 = strcmp(pcVar6,"C_StattrakModule");
      if (((iVar2 == 0) || (iVar4 == 0)) || (iVar5 == 0)) {
        uVar10 = (ulonglong)DAT_180ca095c;
        if (DAT_180ca095c == 0) {
          return param_1;
        }
        uVar12 = (ulonglong)DAT_180ca0960;
        if (DAT_180ca0960 == 0) {
          return param_1;
        }
        if ((((*param_3 == 0) || (DAT_180ca09f8 == 0)) ||
            (lVar7 = FUN_18000f3a0(*param_3 + (ulonglong)DAT_180ca09f8), lVar7 == 0)) ||
           (lVar7 = FUN_18000f3a0(lVar7 + uVar10), lVar7 == 0)) {
          lVar7 = 0;
        }
        else {
          lVar7 = FUN_18000f3a0(lVar7 + uVar12);
        }
        if (lVar7 == 0) {
          return param_1;
        }
        lVar8 = thunk_FUN_1804e6f30(param_2 + 0x418,
                                    param_2 + (*(longlong *)(param_2 + 0x758) + 0x83) * 8,lVar7);
        if (lVar8 == param_2 + (*(longlong *)(param_2 + 0x758) + 0x83) * 8) {
          return param_1;
        }
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 0x770);
        *param_1 = 2;
        *(longlong *)(param_1 + 4) = lVar7;
        if (iVar2 == 0) {
          iVar2 = 7;
        }
        else {
          iVar2 = (iVar4 != 0) + 8;
        }
LAB_1803c190f:
        param_1[6] = iVar2;
        return param_1;
      }
      iVar2 = strcmp(pcVar6,"C_PlantedC4");
      if ((iVar2 != 0) && (iVar4 = strcmp(pcVar6,"C_Multimeter"), iVar4 != 0)) {
        if (*param_3 == 0) {
          return param_1;
        }
        lVar7 = thunk_FUN_1804e6f30(param_2 + 0x418,
                                    param_2 + (*(longlong *)(param_2 + 0x758) + 0x83) * 8);
        if (lVar7 == param_2 + (*(longlong *)(param_2 + 0x758) + 0x83) * 8) {
          return param_1;
        }
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 0x770);
        *(longlong *)(param_1 + 4) = *param_3;
        *param_1 = 2;
        return param_1;
      }
      if (DAT_18095cfd8 == '\0') {
        return param_1;
      }
      if (*(int *)(param_2 + 0x788) == 0) {
        return param_1;
      }
      if (*(int *)(param_2 + 0x78c) == 0) {
        return param_1;
      }
      if (iVar2 != 0) {
        if (*(uint *)(param_2 + 0x790) == 0) {
          return param_1;
        }
        uVar3 = FUN_180011200((ulonglong)*(uint *)(param_2 + 0x790) + *param_3);
        if (uVar3 == 0) {
          return param_1;
        }
        if ((uVar3 & 0x7fff) == 0x7fff) {
          return param_1;
        }
        param_3 = (longlong *)FUN_1803a0940(local_158,uVar3);
        if (*param_3 == 0) {
          return param_1;
        }
      }
      lVar7 = *param_3;
      cVar1 = FUN_180011220((ulonglong)*(uint *)(param_2 + 0x788) + lVar7);
      if (cVar1 != '\x01') {
        return param_1;
      }
      uVar3 = FUN_180011200((ulonglong)*(uint *)(param_2 + 0x78c) + lVar7);
      if (uVar3 == 0) {
        return param_1;
      }
      if ((uVar3 & 0x7fff) == 0x7fff) {
        return param_1;
      }
      FUN_1803a0940(local_158,uVar3);
      if (local_158[0] == 0) {
        return param_1;
      }
      pcVar6 = (char *)FUN_1803a0710(local_158);
      if (pcVar6 == (char *)0x0) {
        return param_1;
      }
      lVar7 = local_158[0];
      goto LAB_1803c11ee;
    }
    uVar10 = (ulonglong)DAT_180ca095c;
    if ((DAT_180ca095c == 0) || (uVar12 = (ulonglong)DAT_180ca0960, DAT_180ca0960 == 0)) {
      lVar7 = 0;
    }
    else {
      uVar11 = (ulonglong)DAT_180ca09f8;
      if (((*param_3 == 0) || (DAT_180ca09f8 == 0)) ||
         ((lVar7 = FUN_18000f3a0(*param_3 + uVar11), lVar7 == 0 ||
          (lVar7 = FUN_18000f3a0(lVar7 + uVar10), lVar7 == 0)))) {
        lVar7 = 0;
      }
      else {
        lVar7 = FUN_18000f3a0(lVar7 + uVar12);
      }
      if (lVar7 == 0) {
        return param_1;
      }
      lVar8 = FUN_18000f3a0();
      if (lVar8 == 0) {
        pcVar6 = (char *)0x0;
      }
      else {
        lVar8 = FUN_18000f3a0();
        if (lVar8 == 0) {
          pcVar6 = (char *)0x0;
        }
        else {
          lVar8 = FUN_18000f3a0();
          if (lVar8 == 0) {
            pcVar6 = (char *)0x0;
          }
          else {
            pcVar9 = (char *)FUN_18000f3a0();
            pcVar6 = (char *)0x0;
            if (pcVar9 + -0x10000 < (char *)0x7ffffffeffff) {
              pcVar6 = pcVar9;
            }
          }
        }
      }
      if ((pcVar6 != (char *)0x0) && (iVar2 = strcmp(pcVar6,"C_CS2HudModelWeapon"), iVar2 == 0)) {
        FUN_180540170(local_148,0,0x104);
        if (((*param_3 != 0) &&
            (((uVar3 != 0 && (lVar8 = FUN_18000f3a0(*param_3 + uVar11), lVar8 != 0)) &&
             (DAT_180ca0964 != 0)))) &&
           ((DAT_18110b6d4 != 0 &&
            (lVar8 = FUN_18000f3a0((ulonglong)DAT_180ca0964 + lVar8 + (ulonglong)DAT_18110b6d4),
            lVar8 - 0x10000U < 0x7ffffffeffff)))) {
          lVar13 = 0;
          do {
            cVar1 = FUN_180011220(lVar13 + lVar8);
            local_148[lVar13] = cVar1;
            if (cVar1 == '\0') break;
            uVar10 = lVar13 + 2;
            lVar13 = lVar13 + 1;
          } while (uVar10 < 0x104);
        }
        lVar8 = FUN_1804ef120(local_148,"stattrak");
        if (lVar8 == 0) {
          lVar8 = FUN_1804ef120(local_148,"nametag");
          if (lVar8 == 0) {
            lVar8 = FUN_1804ef120(local_148,"keychain");
            if ((lVar8 == 0) && (lVar8 = FUN_1804ef120(local_148,&DAT_18070b6bc), lVar8 == 0)) {
              return param_1;
            }
            iVar2 = 7;
          }
          else {
            iVar2 = 8;
          }
        }
        else {
          iVar2 = 9;
        }
        if (((*(uint *)(param_2 + 0x77c) == 0) ||
            (uVar3 = FUN_180011200(lVar7 + (ulonglong)*(uint *)(param_2 + 0x77c)), uVar3 == 0)) ||
           ((uVar3 & 0x7fff) == 0x7fff)) {
          local_158[0] = 0;
        }
        else {
          FUN_1803a0940(local_158,uVar3);
        }
        if (local_158[0] == 0) {
          return param_1;
        }
        lVar7 = thunk_FUN_1804e6f30(param_2 + 0x418,
                                    param_2 + (*(longlong *)(param_2 + 0x758) + 0x83) * 8,
                                    local_158[0]);
        if (lVar7 == param_2 + (*(longlong *)(param_2 + 0x758) + 0x83) * 8) {
          return param_1;
        }
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 0x770);
        *param_1 = 2;
        *(longlong *)(param_1 + 4) = local_158[0];
        *(undefined1 *)(param_1 + 7) = 1;
        goto LAB_1803c190f;
      }
    }
    if (lVar7 == 0) {
      return param_1;
    }
    lVar8 = FUN_18000f3a0();
    if (lVar8 == 0) {
      pcVar6 = (char *)0x0;
    }
    else {
      lVar8 = FUN_18000f3a0();
      if (lVar8 == 0) {
        pcVar6 = (char *)0x0;
      }
      else {
        lVar8 = FUN_18000f3a0();
        if (lVar8 == 0) {
          pcVar6 = (char *)0x0;
        }
        else {
          pcVar9 = (char *)FUN_18000f3a0();
          pcVar6 = (char *)0x0;
          if (pcVar9 + -0x10000 < (char *)0x7ffffffeffff) {
            pcVar6 = pcVar9;
          }
        }
      }
    }
    if (pcVar6 == (char *)0x0) {
      return param_1;
    }
    iVar2 = strcmp(pcVar6,"C_CS2HudModelArms");
    if (iVar2 != 0) {
      return param_1;
    }
    if (*(uint *)(param_2 + 0x77c) != 0) {
      lVar7 = lVar7 + (ulonglong)*(uint *)(param_2 + 0x77c);
      goto LAB_1803c1631;
    }
  }
  local_158[0] = 0;
LAB_1803c165f:
  lVar7 = *(longlong *)(param_2 + 0x770);
  if (local_158[0] != lVar7) {
    return param_1;
  }
  if (lVar7 == 0) {
    return param_1;
  }
  *param_1 = 3;
  *(longlong *)(param_1 + 2) = lVar7;
  return param_1;
}



/* ===== 1803c1950 FUN_1803c1950 ===== */

void FUN_1803c1950(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (DAT_1809fa7a1 == '\0') {
    lVar1 = FUN_180264b70(PTR_s_sc_no_vis_1809fa798);
    if (lVar1 != 0) {
      DAT_1809fa7a1 = '\x01';
      uVar2 = FUN_180264d70(lVar1);
      if ((uVar2 & 0xff) != (ulonglong)DAT_1809fa7a0) {
        FUN_180264d90(lVar1,uVar2 & 0xffffffffffffff00 | (ulonglong)DAT_1809fa7a0);
        FUN_1802b2560("[chams] %s was %u (left by an older build), set back to the game default %u",
                      PTR_s_sc_no_vis_1809fa798,uVar2 & 0xff,DAT_1809fa7a0);
      }
    }
  }
  if (DAT_1809f9fa9 == '\0') {
    lVar1 = FUN_180264b70(PTR_s_r_csgo_player_occlusion_query_1809f9fa0);
    if (lVar1 != 0) {
      DAT_1809f9fa9 = '\x01';
      uVar2 = FUN_180264d70(lVar1);
      if ((uVar2 & 0xff) != (ulonglong)DAT_1809f9fa8) {
        FUN_180264d90(lVar1,uVar2 & 0xffffffffffffff00 | (ulonglong)DAT_1809f9fa8);
        FUN_1802b2560("[chams] %s was %u (left by an older build), set back to the game default %u",
                      PTR_s_r_csgo_player_occlusion_query_1809f9fa0,uVar2 & 0xff,DAT_1809f9fa8);
      }
    }
  }
  return;
}



/* ===== 1803c1a50 FUN_1803c1a50 ===== */

void FUN_1803c1a50(longlong param_1,int param_2,int param_3,longlong param_4,undefined1 param_5,
                  int param_6)

{
  ushort uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  uint *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  int local_80 [18];
  
  if (((param_1 != 0) && (-1 < param_2)) && (param_2 < param_3)) {
    if (param_4 != 0) {
      iVar16 = *(int *)(param_4 + 4);
      if (iVar16 == 0) {
        iVar16 = 1;
      }
      local_80[2] = 0xff;
      local_80[5] = 0xff;
      local_80[9] = 0;
      local_80[6] = 0;
      local_80[3] = 0;
      local_80[0] = 0;
      local_80[8] = 0xff;
      local_80[0xb] = 0xff;
      local_80[10] = (int)(*(float *)(param_4 + 8) * DAT_1808acb94 + DAT_1808ac1f4);
      local_80[7] = (int)(*(float *)(param_4 + 0xc) * DAT_1808acb94 + DAT_1808ac1f4);
      local_80[4] = (int)(*(float *)(param_4 + 0x10) * DAT_1808acb94 + DAT_1808ac1f4);
      local_80[1] = (int)(*(float *)(param_4 + 0x14) * DAT_1808acb94 + DAT_1808ac1f4);
      piVar11 = local_80;
      if (-1 < local_80[1]) {
        piVar11 = local_80 + 1;
      }
      piVar2 = local_80 + 2;
      if (local_80[1] < 0x100) {
        piVar2 = piVar11;
      }
      puVar12 = (uint *)(local_80 + 3);
      if (-1 < local_80[4]) {
        puVar12 = (uint *)(local_80 + 4);
      }
      puVar3 = (uint *)(local_80 + 5);
      if (local_80[4] < 0x100) {
        puVar3 = puVar12;
      }
      puVar12 = (uint *)(local_80 + 6);
      if (-1 < local_80[7]) {
        puVar12 = (uint *)(local_80 + 7);
      }
      puVar4 = (uint *)(local_80 + 8);
      if (local_80[7] < 0x100) {
        puVar4 = puVar12;
      }
      puVar12 = (uint *)(local_80 + 9);
      if (-1 < local_80[10]) {
        puVar12 = (uint *)(local_80 + 10);
      }
      puVar5 = (uint *)(local_80 + 0xb);
      if (local_80[10] < 0x100) {
        puVar5 = puVar12;
      }
      uVar18 = ((*piVar2 << 8 | *puVar3) << 8 | *puVar4) << 8 | *puVar5;
      lVar6 = FUN_1801d40a0(iVar16,param_5,uVar18);
      uVar1 = DAT_18096192c;
      if (lVar6 != 0) {
        iVar16 = 0x7fffffff - param_6;
        uVar15 = (ulonglong)DAT_180961924;
        uVar17 = (ulonglong)DAT_180961928;
        if (param_3 - param_2 < 4) goto LAB_1803c1da0;
        do {
          uVar14 = (ulonglong)DAT_180961910;
          lVar13 = uVar14 * (longlong)param_2;
          lVar7 = (ulonglong)DAT_180961914 + param_1;
          *(longlong *)(lVar7 + lVar13) = lVar6;
          lVar8 = (ulonglong)DAT_180961918 + param_1;
          *(longlong *)(lVar8 + lVar13) = lVar6;
          lVar9 = (ulonglong)DAT_18096191c + param_1;
          *(uint *)(lVar9 + lVar13) = uVar18;
          lVar10 = (ulonglong)DAT_180961920 + param_1;
          *(undefined4 *)(lVar10 + lVar13) = *(undefined4 *)(param_4 + 0x14);
          if (0 < param_6) {
            lVar13 = lVar13 + param_1;
            *(ushort *)(lVar13 + uVar17) = *(ushort *)(lVar13 + uVar17) | uVar1;
            if (*(int *)(lVar13 + uVar15) < iVar16) {
              *(int *)(lVar13 + uVar15) = *(int *)(lVar13 + uVar15) + param_6;
            }
          }
          lVar13 = ((longlong)param_2 + 1) * uVar14;
          *(longlong *)(lVar7 + lVar13) = lVar6;
          *(longlong *)(lVar8 + lVar13) = lVar6;
          *(uint *)(lVar9 + lVar13) = uVar18;
          *(undefined4 *)(lVar10 + lVar13) = *(undefined4 *)(param_4 + 0x14);
          if (0 < param_6) {
            lVar13 = lVar13 + param_1;
            *(ushort *)(lVar13 + uVar17) = *(ushort *)(lVar13 + uVar17) | uVar1;
            if (*(int *)(lVar13 + uVar15) < iVar16) {
              *(int *)(lVar13 + uVar15) = *(int *)(lVar13 + uVar15) + param_6;
            }
          }
          lVar13 = ((longlong)param_2 + 2) * uVar14;
          *(longlong *)(lVar7 + lVar13) = lVar6;
          *(longlong *)(lVar8 + lVar13) = lVar6;
          *(uint *)(lVar9 + lVar13) = uVar18;
          *(undefined4 *)(lVar10 + lVar13) = *(undefined4 *)(param_4 + 0x14);
          if (0 < param_6) {
            lVar13 = lVar13 + param_1;
            *(ushort *)(lVar13 + uVar17) = *(ushort *)(lVar13 + uVar17) | uVar1;
            if (*(int *)(lVar13 + uVar15) < iVar16) {
              *(int *)(lVar13 + uVar15) = *(int *)(lVar13 + uVar15) + param_6;
            }
          }
          lVar13 = ((longlong)param_2 + 3) * uVar14;
          *(longlong *)(lVar7 + lVar13) = lVar6;
          *(longlong *)(lVar8 + lVar13) = lVar6;
          *(uint *)(lVar9 + lVar13) = uVar18;
          *(undefined4 *)(lVar13 + lVar10) = *(undefined4 *)(param_4 + 0x14);
          if (0 < param_6) {
            lVar13 = lVar13 + param_1;
            *(ushort *)(lVar13 + uVar17) = *(ushort *)(lVar13 + uVar17) | uVar1;
            if (*(int *)(lVar13 + uVar15) < iVar16) {
              *(int *)(lVar13 + uVar15) = *(int *)(lVar13 + uVar15) + param_6;
            }
          }
          param_2 = param_2 + 4;
        } while (param_2 < param_3 + -3);
        for (; param_2 < param_3; param_2 = param_2 + 1) {
LAB_1803c1da0:
          uVar14 = (ulonglong)DAT_180961920;
          lVar13 = (ulonglong)DAT_180961910 * (longlong)param_2;
          *(longlong *)((ulonglong)DAT_180961914 + param_1 + lVar13) = lVar6;
          *(longlong *)((ulonglong)DAT_180961918 + param_1 + lVar13) = lVar6;
          *(uint *)((ulonglong)DAT_18096191c + param_1 + lVar13) = uVar18;
          *(undefined4 *)(uVar14 + param_1 + lVar13) = *(undefined4 *)(param_4 + 0x14);
          if (0 < param_6) {
            lVar13 = lVar13 + param_1;
            *(ushort *)(lVar13 + uVar17) = *(ushort *)(lVar13 + uVar17) | uVar1;
            if (*(int *)(lVar13 + uVar15) < iVar16) {
              *(int *)(lVar13 + uVar15) = *(int *)(lVar13 + uVar15) + param_6;
            }
          }
        }
        return;
      }
    }
    uVar1 = DAT_18096192c;
    if (0 < param_6) {
      uVar17 = (ulonglong)DAT_180961928;
      uVar15 = (ulonglong)DAT_180961924;
      uVar14 = (ulonglong)DAT_180961910;
      do {
        lVar6 = uVar14 * (longlong)param_2 + param_1;
        *(ushort *)(lVar6 + uVar17) = *(ushort *)(lVar6 + uVar17) | uVar1;
        iVar16 = *(int *)(lVar6 + uVar15);
        if (iVar16 < 0x7fffffff - param_6) {
          *(int *)(lVar6 + uVar15) = iVar16 + param_6;
        }
        param_2 = param_2 + 1;
      } while (param_2 < param_3);
    }
  }
  return;
}



/* ===== 1803c1e90 FUN_1803c1e90 ===== */

undefined8
FUN_1803c1e90(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             undefined1 param_5,longlong param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_res18;
  longlong *local_res20;
  byte local_48 [8];
  longlong *local_40;
  longlong **local_38;
  undefined1 *local_30;
  undefined8 *local_28;
  longlong *local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  if ((longlong *)0x7ffffffefffe < param_4 + -0x2000) {
    return 0;
  }
  iVar1 = *(int *)((longlong)param_4 + 0xc);
  if (iVar1 < 0) {
    return 0;
  }
  iVar2 = (int)param_4[2];
  if (iVar2 < 0) {
    return 0;
  }
  if ((int)param_4[1] < 0) {
    return 0;
  }
  if ((int)param_4[4] < 0) {
    return 0;
  }
  if ((int)param_4[1] < iVar1) {
    return 0;
  }
  if ((int)param_4[4] < iVar2) {
    return 0;
  }
  if ((iVar1 != 0) && (*param_4 == 0)) {
    return 0;
  }
  if ((iVar2 != 0) && (param_4[3] == 0)) {
    return 0;
  }
  if (0x10000 < iVar1) {
    return 0;
  }
  if (0x10000 < iVar2) {
    return 0;
  }
  uVar6 = (ulonglong)DAT_180961904;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_40 = param_4;
  bVar4 = FUN_180011220(uVar6 + param_2);
  if (bVar4 != 0) {
    local_48[0] = ~DAT_180961908 & bVar4;
    FUN_1800233d0(uVar6 + param_2,local_48);
  }
  lVar3 = param_6;
  local_38 = &local_40;
  local_30 = &param_5;
  local_28 = &local_res8;
  local_20 = &local_res10;
  local_18 = &local_res18;
  local_10 = &local_res20;
  if ((*(char *)(param_6 + 0x1c) != '\0') &&
     (cVar5 = FUN_1803c2070(&local_38,param_6 + 0x1c,1,0,1), cVar5 == '\0')) {
    return 1;
  }
  if ((*(char *)(lVar3 + 0x4c) != '\0') &&
     (cVar5 = FUN_1803c2070(&local_38,lVar3 + 0x4c,1,0,1), cVar5 == '\0')) {
    return 1;
  }
  cVar5 = FUN_1803c2070(&local_38,lVar3 + 4,0,0,*(undefined1 *)(lVar3 + 4));
  if ((cVar5 != '\0') && (*(char *)(lVar3 + 0x34) != '\0')) {
    FUN_1803c2070(&local_38,lVar3 + 0x34,0,1,1);
  }
  return 1;
}



/* ===== 1803c2070 FUN_1803c2070 ===== */

undefined8
FUN_1803c2070(undefined8 *param_1,undefined8 param_2,undefined1 param_3,int param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  plVar5 = *(longlong **)*param_1;
  iVar1 = *(int *)((longlong)plVar5 + 0xc);
  if ((-1 < iVar1) && (iVar2 = (int)plVar5[2], -1 < iVar2)) {
    if ((((-1 < (int)plVar5[1]) &&
         ((((-1 < (int)plVar5[4] && (iVar1 <= (int)plVar5[1])) && (iVar2 <= (int)plVar5[4])) &&
          ((iVar1 == 0 || (*plVar5 != 0)))))) && ((iVar2 == 0 || (plVar5[3] != 0)))) &&
       ((iVar1 < 0x10001 && (iVar2 < 0x10001)))) {
      (**(code **)param_1[1])
                (*(undefined8 *)param_1[2],*(undefined8 *)param_1[3],*(undefined8 *)param_1[4],
                 *(undefined8 *)param_1[5]);
      plVar5 = *(longlong **)*param_1;
      iVar3 = *(int *)((longlong)plVar5 + 0xc);
      if (-1 < iVar3) {
        iVar4 = (int)plVar5[2];
        if ((((((-1 < iVar4) && (-1 < (int)plVar5[1])) && (-1 < (int)plVar5[4])) &&
             (((iVar3 <= (int)plVar5[1] && (iVar4 <= (int)plVar5[4])) &&
              ((iVar3 == 0 || (*plVar5 != 0)))))) && ((iVar4 == 0 || (plVar5[3] != 0)))) &&
           ((iVar3 < 0x10001 && (iVar4 < 0x10001)))) {
          if ((param_5 == '\0') && (param_4 < 1)) {
            return 1;
          }
          uVar6 = 0;
          if (param_5 != '\0') {
            uVar6 = param_2;
          }
          FUN_1803c1a50(*plVar5,iVar1,iVar3,uVar6,param_3,param_4);
          FUN_1803c1a50(*(undefined8 *)(*(longlong *)*param_1 + 0x18),iVar2,
                        *(undefined4 *)(*(longlong *)*param_1 + 0x10),uVar6,param_3,param_4);
          return 1;
        }
      }
    }
  }
  return 0;
}



/* ===== 1803c2230 FUN_1803c2230 ===== */

void FUN_1803c2230(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong local_res18;
  byte local_res20;
  
  if ((DAT_18110b6e8 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_18110b6e8 = '\x01';
    DAT_18110b6ec = FUN_18038eaf0("C_BaseEntity","m_pRenderComponent");
    uVar9 = FUN_18038eaf0("CRenderComponent","m_bIsRenderingWithViewModels");
    if (uVar9 < 0x19) {
      DAT_18110b6f0 = 0;
    }
    else {
      DAT_18110b6f0 = uVar9 - 0x18;
    }
    DAT_18110b6f4 = FUN_18038eaf0("CEntityIdentity","m_flags");
    DAT_18110b6f8 = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
    DAT_18110b6fc = FUN_18038eaf0("CEntityIdentity","m_pPrevByClass");
    DAT_18110b700 = FUN_18038eaf0("CEntityIdentity","m_pNextByClass");
    if ((((DAT_18110b6ec == 0) || (DAT_18110b6f0 == 0)) || (DAT_18110b6f4 == 0)) ||
       (((DAT_18110b6f8 == 0 || (DAT_18110b6fc == 0)) || (DAT_18110b700 == 0)))) {
      DAT_18110b6e9 = '\0';
      bVar1 = false;
    }
    else {
      DAT_18110b6e9 = '\x01';
      bVar1 = true;
    }
    pcVar14 = "[error] chams |";
    if (bVar1) {
      pcVar14 = "[chams]";
    }
    FUN_1802b2560("%s behind walls vis | render component 0x%x, scene objects 0x%x, identity flags 0x%x, world group 0x%x, class links 0x%x/0x%x"
                  ,pcVar14,DAT_18110b6ec,DAT_18110b6f0,DAT_18110b6f4,DAT_18110b6f8,DAT_18110b6fc,
                  DAT_18110b700);
  }
  iVar4 = DAT_1809208e4;
  iVar3 = DAT_1809206e8;
  if ((DAT_18110b6e9 != '\0') && ((0 < DAT_1809206e8 || (0 < DAT_1809208e4)))) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res18);
      DAT_181108a00 = local_res18;
      local_res18 = FUN_1803a0c50(&local_res18);
      DAT_180cd1304 = '\x01';
    }
    else {
      local_res18 = DAT_1811089f8;
    }
    lVar5 = local_res18;
    DAT_1811089f8 = local_res18;
    if ((((local_res18 != 0) &&
         (pcVar14 = (char *)FUN_1803a0710(&local_res18), pcVar14 != (char *)0x0)) &&
        (iVar10 = strcmp(pcVar14,"C_CSPlayerPawn"), iVar10 == 0)) &&
       (lVar12 = FUN_18000f3a0((ulonglong)DAT_180961968 + lVar5), lVar12 - 0x10000U < 0x7ffffffeffff
       )) {
      iVar10 = 0;
      uVar15 = (ulonglong)DAT_18110b6fc;
      do {
        lVar13 = FUN_18000f3a0(lVar12 + uVar15);
        if (0x7ffffffefffe < lVar13 - 0x10000U) break;
        iVar10 = iVar10 + 1;
        lVar12 = lVar13;
      } while (iVar10 < 0x1000);
      if (DAT_180cd1aa4 == '\0') {
        DAT_180cd1aa4 = '\x01';
        DAT_18110b6b0 = FUN_180264b70("mp_teammates_are_enemies");
      }
      if ((DAT_18110b6b0 == 0) || (cVar6 = FUN_180264d70(DAT_18110b6b0), cVar6 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      uVar9 = DAT_180ca09f4;
      uVar15 = (ulonglong)DAT_180ca09f4;
      if ((lVar5 == 0) || (DAT_180ca09f4 == 0)) {
        cVar6 = '\0';
      }
      else {
        cVar6 = FUN_180011220(lVar5 + uVar15);
      }
      iVar10 = 0;
      local_res18 = CONCAT71(local_res18._1_7_,~DAT_180961908);
      do {
        if (0x7ffffffefffe < lVar12 - 0x10000U) {
          return;
        }
        cVar7 = FUN_180011200((ulonglong)DAT_18110b6f4 + lVar12);
        if ((((-1 < cVar7) &&
             (iVar11 = FUN_180011200((ulonglong)DAT_18110b6f8 + lVar12), iVar11 == 0)) &&
            (lVar13 = FUN_18000f3a0(lVar12), lVar13 - 0x10000U < 0x7ffffffeffff)) &&
           (lVar13 != lVar5)) {
          if (bVar1) {
LAB_1803c2604:
            bVar2 = false;
          }
          else {
            if ((lVar13 == 0) || (uVar9 == 0)) {
              cVar7 = '\0';
            }
            else {
              cVar7 = FUN_180011220(lVar13 + uVar15);
            }
            if (cVar7 != cVar6) goto LAB_1803c2604;
            bVar2 = true;
          }
          iVar11 = iVar3;
          if (bVar2) {
            iVar11 = iVar4;
          }
          if ((0 < iVar11) &&
             (lVar13 = FUN_18000f3a0((ulonglong)DAT_18110b6ec + lVar13), lVar13 != 0)) {
            uVar16 = (ulonglong)DAT_18110b6f0;
            iVar11 = FUN_180011200(uVar16 + lVar13);
            if ((0 < iVar11) &&
               (((lVar13 = FUN_18000f3a0(uVar16 + 8 + lVar13), lVar13 != 0 &&
                 (lVar13 = FUN_18000f3a0(lVar13), lVar13 != 0)) &&
                (lVar13 = FUN_18000f3a0(lVar13 + 0x20), lVar13 != 0)))) {
              uVar16 = (ulonglong)DAT_180961904;
              bVar8 = FUN_180011220(uVar16 + lVar13);
              if ((DAT_180961908 & bVar8) != 0) {
                local_res20 = (byte)local_res18 & bVar8;
                FUN_1800233d0(uVar16 + lVar13);
              }
            }
          }
        }
        iVar10 = iVar10 + 1;
        lVar12 = FUN_18000f3a0((ulonglong)DAT_18110b700 + lVar12);
      } while (iVar10 < 0x1000);
    }
  }
  return;
}



/* ===== 1803c2720 FUN_1803c2720 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803c2720(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  longlong lVar12;
  uint *puVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 auStack_838 [32];
  longlong local_818;
  undefined1 local_810;
  undefined4 uStack_80f;
  undefined2 uStack_80b;
  undefined1 uStack_809;
  undefined8 local_7f8;
  undefined1 uStack_7f0;
  undefined4 uStack_7ef;
  undefined2 uStack_7eb;
  undefined1 auStack_7e9 [1025];
  ulonglong local_3e8;
  longlong local_3e0 [64];
  int local_1e0 [64];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined2 local_90;
  longlong local_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_838;
  if ((DAT_18110b6c0 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_18110b6c0 = '\x01';
    iVar7 = FUN_18038eaf0("C_EconEntity","m_AttributeManager");
    iVar8 = FUN_18038eaf0("C_AttributeContainer","m_Item");
    iVar9 = FUN_18038eaf0("C_EconItemView","m_iItemDefinitionIndex");
    if ((iVar7 != 0) && ((iVar8 != 0 && (iVar9 != 0)))) {
      DAT_18110b6d8 = iVar9 + iVar8 + iVar7;
    }
    DAT_18110b6c4 = FUN_18038eaf0("C_BaseEntity","m_hOwnerEntity");
    DAT_18110b6c8 = FUN_18038eaf0("CPlayer_WeaponServices","m_hMyWeapons");
    DAT_18110b6cc = FUN_18038eaf0("C_BaseEntity","m_nSubclassID");
    DAT_18110b6d0 = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
    DAT_18110b6d4 = FUN_18038eaf0("CModelState","m_ModelName");
    DAT_18110b6dc = FUN_18038eaf0("C_PlantedC4","m_bBeingDefused");
    DAT_18110b6e0 = FUN_18038eaf0("C_PlantedC4","m_hBombDefuser");
    DAT_18110b6e4 = FUN_18038eaf0("C_Multimeter","m_hTargetC4");
  }
  uVar10 = DAT_18110b6e4;
  FUN_180540170(&local_7f8,0,0x410);
  local_3e8 = 0;
  FUN_180540170(local_3e0,0,0x200);
  FUN_180540170(local_1e0,0,0x100);
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0xffffffffffffffff;
  local_90 = 0;
  local_7c = DAT_18110b6c4;
  local_78 = DAT_18110b6cc;
  local_74 = DAT_18110b6d0;
  local_70 = DAT_18110b6dc;
  local_6c = DAT_18110b6e0;
  local_68 = uVar10;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_818);
    DAT_181108a00 = local_818;
    DAT_1811089f8 = FUN_1803a0c50(&local_818);
    DAT_180cd1304 = '\x01';
  }
  lVar12 = DAT_1811089f8;
  if ((DAT_1811089f8 == 0) || (local_80 = 1, DAT_180ca12ef != '\0')) {
    local_80 = 0;
  }
  local_88 = DAT_1811089f8;
  FUN_1803a13a0(&local_818);
  lVar2 = CONCAT17(uStack_809,CONCAT25(uStack_80b,CONCAT41(uStack_80f,local_810)));
  uVar15 = 0;
  if (local_818 != lVar2) {
    uVar15 = local_3e8;
    lVar17 = local_818;
    lVar19 = lVar12;
    do {
      lVar1 = *(longlong *)(lVar17 + 8);
      if (lVar1 != 0) {
        if (uVar15 < 0x41) {
          if (lVar1 == lVar19) {
            uVar14 = 3;
          }
          else {
            if (lVar12 != 0) {
              if (DAT_180ca09f4 == 0) {
                cVar5 = '\0';
              }
              else {
                cVar5 = FUN_180011220(lVar1 + (ulonglong)DAT_180ca09f4);
              }
              if (DAT_180ca09f4 == 0) {
                cVar4 = '\0';
              }
              else {
                cVar4 = FUN_180011220(lVar12 + (ulonglong)DAT_180ca09f4);
              }
              if (cVar5 == cVar4) {
                if (DAT_180cd1aa4 == '\0') {
                  DAT_180cd1aa4 = '\x01';
                  DAT_18110b6b0 = FUN_180264b70("mp_teammates_are_enemies");
                }
                if ((DAT_18110b6b0 == 0) || (cVar5 = FUN_180264d70(), cVar5 == '\0')) {
                  uVar14 = 2;
                  goto LAB_1803c2adc;
                }
              }
            }
            if (((*(longlong *)(lVar17 + 8) == 0) || (DAT_180ca09f0 == 0)) ||
               (iVar7 = FUN_180011200((ulonglong)DAT_180ca09f0 + *(longlong *)(lVar17 + 8)),
               999 < iVar7 - 1U)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            uVar14 = 4;
            if (bVar3) {
              uVar14 = 1;
            }
          }
LAB_1803c2adc:
          *(undefined8 *)(auStack_7e9 + uVar15 * 0x10 + -0xf) = *(undefined8 *)(lVar17 + 8);
          auStack_7e9[uVar15 * 0x10 + -7] = uVar14;
          *(undefined4 *)(auStack_7e9 + uVar15 * 0x10 + -6) = uStack_80f;
          *(undefined2 *)(auStack_7e9 + uVar15 * 0x10 + -2) = uStack_80b;
          auStack_7e9[uVar15 * 0x10] = uStack_809;
          uVar15 = local_3e8 + 1;
          lVar19 = local_88;
          local_3e8 = uVar15;
        }
      }
      lVar17 = lVar17 + 0x10;
    } while (lVar17 != lVar2);
    uVar15 = local_a0;
  }
  FUN_1800244c0(&local_818);
  if (lVar12 == 0) goto LAB_1803c2ec3;
  if (DAT_180ca09f4 == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = FUN_180011220(lVar12 + (ulonglong)DAT_180ca09f4);
  }
  if (cVar5 == '\x03') {
    uVar16 = 0;
LAB_1803c2b9f:
    if (DAT_180921498 != '\0') {
      if (uVar16 == 0) {
        iVar7 = DAT_1809214ac;
        iVar8 = DAT_1809214a0;
      }
      else {
        iVar7 = DAT_1809214b0;
        iVar8 = DAT_1809214a8;
        if (DAT_1809214a8 < 0) {
          iVar8 = DAT_1809214a0;
        }
      }
      if (iVar7 < 1) {
        iVar9 = -1;
      }
      else {
        piVar11 = &DAT_180931b4c;
        do {
          if ((*piVar11 == iVar7) && (piVar11[1] == uVar16)) goto LAB_1803c2c29;
          piVar11 = piVar11 + 0xab;
        } while (piVar11 != &DAT_18093c64c);
        piVar11 = &DAT_180931b4c;
        do {
          if ((*piVar11 == iVar7) && (piVar11[1] == -1)) goto LAB_1803c2c17;
          piVar11 = piVar11 + 0xab;
        } while (piVar11 != &DAT_18093c64c);
        piVar11 = (int *)0x0;
LAB_1803c2c17:
        if (piVar11 == (int *)0x0) {
          iVar9 = -1;
        }
        else {
LAB_1803c2c29:
          iVar9 = (int)((longlong)(piVar11 + -0x6024c6d3) >> 2) * -0x17f405fd;
        }
      }
      if (0 < iVar8) {
        piVar11 = &DAT_18092174c;
        do {
          if ((*piVar11 == iVar8) && (piVar11[1] == uVar16)) goto LAB_1803c2cd0;
          piVar11 = piVar11 + 0x68;
        } while (piVar11 != &DAT_180931b4c);
        piVar11 = &DAT_18092174c;
        do {
          if ((*piVar11 == iVar8) && (piVar11[1] < 0)) goto LAB_1803c2cd0;
          piVar11 = piVar11 + 0x68;
        } while (piVar11 != &DAT_180931b4c);
      }
      local_90 = (ushort)(0 < iVar7);
      if (0 < iVar8) goto LAB_1803c2c87;
      local_98 = CONCAT44(0xffffffff,iVar9);
    }
  }
  else {
    uVar16 = 0xffffffff;
    if (cVar5 == '\x02') {
      uVar16 = 1;
      goto LAB_1803c2b9f;
    }
  }
LAB_1803c2cf6:
  if (((DAT_180ca0a0c != 0) && (DAT_18110b6c8 != 0)) &&
     (lVar12 = FUN_18000f3a0(lVar12 + (ulonglong)DAT_180ca0a0c), lVar12 != 0)) {
    iVar7 = FUN_180011200((ulonglong)DAT_18110b6c8 + lVar12);
    lVar12 = FUN_18000f3a0((ulonglong)DAT_18110b6c8 + 8 + lVar12);
    if (((iVar7 - 1U < 0x40) && (lVar12 != 0)) && (uVar20 = 0, 0 < iVar7)) {
LAB_1803c2d70:
      if (uVar15 < 0x40) {
        uVar10 = FUN_180011200(lVar12 + uVar20 * 4);
        FUN_1803a0940(&local_818,uVar10);
        lVar2 = local_818;
        if (local_818 != 0) {
          if (DAT_18110b6d8 == 0) {
            uVar18 = 0;
          }
          else {
            uVar6 = FUN_180011440(local_818 + (ulonglong)DAT_18110b6d8);
            uVar18 = (uint)uVar6;
          }
          if (((-1 < (int)uVar16) && (DAT_180921498 != '\0')) && (uVar18 != 0)) {
            puVar13 = &DAT_18092174c;
            do {
              if ((*puVar13 == uVar18) && (puVar13[1] == uVar16)) goto LAB_1803c2e7a;
              puVar13 = puVar13 + 0x68;
            } while (puVar13 != &DAT_180931b4c);
            puVar13 = &DAT_18092174c;
            do {
              if ((*puVar13 == uVar18) && ((int)puVar13[1] < 0)) goto LAB_1803c2e7a;
              puVar13 = puVar13 + 0x68;
            } while (puVar13 != &DAT_180931b4c);
          }
          *(undefined1 *)((longlong)local_1e0 + uVar15 + 0x100) = 0;
          if ((uVar18 != 0) && (-1 < (int)uVar16)) goto LAB_1803c2e25;
          goto LAB_1803c2e84;
        }
        goto LAB_1803c2eb7;
      }
    }
  }
LAB_1803c2ec3:
  iVar7 = FUN_1804e4d70(&DAT_1809f9fb0);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f9ffc == 0x7fffffff) {
    DAT_1809f9ffc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  FUN_180540530(&DAT_1809fa000,&local_7f8,0x798);
  FUN_1804e4e90(&DAT_1809f9fb0);
  FUN_1803c1950();
  return;
LAB_1803c2cd0:
  local_90 = CONCAT11(1,0 < iVar7);
LAB_1803c2c87:
  piVar11 = &DAT_180931b4c;
  do {
    if ((*piVar11 == iVar8) && (piVar11[1] == uVar16)) goto LAB_1803c2cd9;
    piVar11 = piVar11 + 0xab;
  } while (piVar11 != &DAT_18093c64c);
  piVar11 = &DAT_180931b4c;
  do {
    if ((*piVar11 == iVar8) && (piVar11[1] == -1)) goto LAB_1803c2cbe;
    piVar11 = piVar11 + 0xab;
  } while (piVar11 != &DAT_18093c64c);
  piVar11 = (int *)0x0;
LAB_1803c2cbe:
  if (piVar11 == (int *)0x0) {
    local_98 = CONCAT44(0xffffffff,iVar9);
  }
  else {
LAB_1803c2cd9:
    local_98 = CONCAT44((int)((longlong)(piVar11 + -0x6024c6d3) >> 2) * -0x17f405fd,iVar9);
  }
  goto LAB_1803c2cf6;
LAB_1803c2e7a:
  *(undefined1 *)((longlong)local_1e0 + uVar15 + 0x100) = 1;
LAB_1803c2e25:
  puVar13 = &DAT_180931b4c;
  do {
    if ((*puVar13 == uVar18) && (puVar13[1] == uVar16)) goto LAB_1803c2e63;
    puVar13 = puVar13 + 0xab;
  } while (puVar13 != &DAT_18093c64c);
  puVar13 = &DAT_180931b4c;
  do {
    if ((*puVar13 == uVar18) && (puVar13[1] == 0xffffffff)) goto LAB_1803c2e5e;
    puVar13 = puVar13 + 0xab;
  } while (puVar13 != &DAT_18093c64c);
  puVar13 = (uint *)0x0;
LAB_1803c2e5e:
  if (puVar13 == (uint *)0x0) {
LAB_1803c2e84:
    iVar8 = -1;
  }
  else {
LAB_1803c2e63:
    iVar8 = (int)((longlong)(puVar13 + -0x6024c6d3) >> 2) * -0x17f405fd;
  }
  local_1e0[local_a0] = iVar8;
  local_3e0[local_a0] = lVar2;
  uVar15 = local_a0 + 1;
  local_a0 = uVar15;
LAB_1803c2eb7:
  uVar18 = (int)uVar20 + 1;
  uVar20 = (ulonglong)uVar18;
  if (iVar7 <= (int)uVar18) goto LAB_1803c2ec3;
  goto LAB_1803c2d70;
}



/* ===== 1803c2f50 FUN_1803c2f50 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1803c2f50(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,code *param_5
             )

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  char *_Str1;
  undefined8 uVar12;
  longlong *plVar13;
  int *piVar14;
  ulonglong uVar15;
  char cVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  bool bVar19;
  undefined4 uVar20;
  float fVar21;
  undefined1 auStack_1068 [32];
  code *local_1048;
  undefined1 *local_1040;
  char local_1038;
  char local_1037;
  char local_1036;
  byte local_1035 [5];
  longlong local_1030;
  uint local_1028;
  longlong *local_1020;
  int local_1018;
  undefined1 local_1014;
  undefined2 uStack_1013;
  undefined1 uStack_1011;
  int local_1010;
  undefined4 local_100c;
  longlong local_1008;
  int local_1000;
  undefined8 local_ff8;
  undefined8 local_ff0;
  undefined8 local_fe8;
  code *local_fe0;
  undefined1 local_fd8 [32];
  longlong local_fb8;
  undefined1 local_fb0;
  undefined4 local_faf;
  undefined2 local_fab;
  undefined1 local_fa9;
  undefined8 local_ba8;
  undefined1 local_818 [1040];
  undefined8 local_408;
  undefined1 local_400 [512];
  undefined1 local_200 [256];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 local_a8;
  char local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  ulonglong local_78;
  undefined8 uStack_48;
  
  uStack_48 = 0x1803c2f6f;
  local_78 = DAT_180919500 ^ (ulonglong)auStack_1068;
  local_fe0 = param_5;
  if (((param_2 == 0) || (param_4 == (longlong *)0x0)) || (param_5 == (code *)0x0)) {
LAB_1803c38be:
    uVar12 = 0;
  }
  else {
    local_ff0 = param_3;
    local_fe8 = param_1;
    uVar6 = FUN_180011200((ulonglong)DAT_180961900 + param_2);
    if ((uVar6 == 0) || ((uVar6 & 0x7fff) == 0x7fff)) {
      local_1030 = 0;
LAB_1803c31f2:
      lVar11 = local_1030;
      iVar7 = 0;
      FUN_180540170(local_818,0,0x410);
      local_408 = 0;
      FUN_180540170(local_400,0,0x200);
      FUN_180540170(local_200,0,0x100);
      local_c0 = 0;
      local_b8 = 0xffffffffffffffff;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = '\0';
      local_9c = 0;
      local_94 = 0;
      local_8c = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      if (lVar11 != 0) {
        iVar8 = FUN_1804e4d70(&DAT_1809f9fb0);
        if (iVar8 != 0) goto LAB_1803c3908;
        if (DAT_1809f9ffc == 0x7fffffff) {
          DAT_1809f9ffc = 0x7ffffffe;
          goto LAB_1803c38fd;
        }
        FUN_180540530(local_818,&DAT_1809fa000,0x798);
        FUN_1804e4e90(&DAT_1809f9fb0);
      }
      iVar8 = FUN_1804e4d70(&DAT_1809635a0);
      if (iVar8 != 0) {
LAB_1803c3908:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      plVar13 = DAT_180cd00f0;
      if (DAT_1809635ec == 0x7fffffff) {
        DAT_1809635ec = 0x7ffffffe;
LAB_1803c38fd:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      for (; plVar13 != DAT_180cd00f8; plVar13 = plVar13 + 0x207) {
        if (*plVar13 == param_2) {
          if ((char)plVar13[0x206] == '\0') {
            iVar8 = 2;
            fVar21 = 0.0;
          }
          else {
            iVar8 = 2;
            fVar21 = *(float *)(plVar13 + 2);
            if (DAT_1808ac31c <= *(float *)(plVar13 + 2)) {
              fVar21 = DAT_1808ac31c;
            }
          }
          goto LAB_1803c3394;
        }
      }
      plVar13 = &DAT_1809635f0;
      do {
        if ((*plVar13 != 0) && (*plVar13 == param_2)) {
          iVar8 = 1;
          fVar21 = *(float *)(plVar13 + 2);
          if (DAT_1808ac31c <= *(float *)(plVar13 + 2)) {
            fVar21 = DAT_1808ac31c;
          }
          goto LAB_1803c3394;
        }
        plVar13 = plVar13 + 0x205;
      } while (plVar13 != (longlong *)&DAT_1809a5018);
      fVar21 = 0.0;
      iVar8 = iVar7;
LAB_1803c3394:
      FUN_1804e4e90(&DAT_1809635a0);
      local_1008 = 0;
      local_1010 = 6;
      local_1036 = '\0';
      if ((((local_1030 == 0) || (DAT_180cd1a95 == '\0')) || (DAT_180cd1307 != '\0')) ||
         ((DAT_180cd1a96 != '\0' || (iVar9 = FUN_1803bde30(), iVar9 < 0)))) {
        local_1028 = 0;
        cVar16 = '\0';
      }
      else if (((DAT_180cd1307 == '\0') && (DAT_180cd1a96 == '\0')) && (DAT_18110902c != 3)) {
        cVar16 = '\x01';
        local_1028 = (uint)(iVar9 != 0);
      }
      else {
        cVar16 = '\x01';
        local_1028 = DAT_18110902c;
      }
      local_1037 = cVar16;
      if ((iVar8 == 0) && (local_1030 != 0)) {
        if (cVar16 != '\0') goto LAB_1803c34f6;
        piVar14 = (int *)FUN_1803c1070(local_fd8,local_818,&local_1030);
        local_1008 = *(longlong *)(piVar14 + 4);
        local_ff8 = *(undefined8 *)(piVar14 + 2);
        iVar7 = *piVar14;
        local_1010 = piVar14[6];
        local_1036 = (char)piVar14[7];
      }
      else {
        local_ff8 = 0;
        if (cVar16 != '\0') {
LAB_1803c34f6:
          iVar7 = 1;
          local_ff8 = 0;
        }
      }
      uVar15 = FUN_18008e210(param_2);
      cVar3 = (char)uVar15;
      cVar4 = (char)(uVar15 >> 8);
      if ((cVar3 != '\0') || (local_1038 = '\0', cVar4 != '\0')) {
        local_1038 = '\x01';
      }
      if ((((((((iVar8 == 0) && (iVar7 == 0 && local_1038 == '\0')) ||
              ((longlong *)0x7ffffffefffe < param_4 + -0x2000)) ||
             ((iVar9 = *(int *)((longlong)param_4 + 0xc), iVar9 < 0 ||
              (iVar1 = (int)param_4[2], iVar1 < 0)))) || ((int)param_4[1] < 0)) ||
           ((((int)param_4[4] < 0 || ((int)param_4[1] < iVar9)) ||
            (((int)param_4[4] < iVar1 || ((iVar9 != 0 && (*param_4 == 0)))))))) ||
          ((iVar1 != 0 && (param_4[3] == 0)))) || ((0x10000 < iVar9 || (0x10000 < iVar1))))
      goto LAB_1803c38be;
      if (cVar16 != '\0') {
        uVar17 = (ulonglong)DAT_180961904;
        bVar5 = FUN_180011220(uVar17 + param_2);
        if (bVar5 != 0) {
          local_1035[0] = ~DAT_180961908 & bVar5;
          FUN_1800233d0(uVar17 + param_2,local_1035);
        }
      }
      iVar9 = *(int *)((longlong)param_4 + 0xc);
      local_100c = (undefined4)param_4[2];
      local_1000 = iVar9;
      (*local_fe0)(local_fe8,param_2,local_ff0,param_4);
      uVar20 = DAT_1808ac34c;
      iVar1 = *(int *)((longlong)param_4 + 0xc);
      if (((((-1 < iVar1) && (iVar2 = (int)param_4[2], -1 < iVar2)) && (-1 < (int)param_4[1])) &&
          (((-1 < (int)param_4[4] && (iVar1 <= (int)param_4[1])) &&
           ((iVar2 <= (int)param_4[4] && ((iVar1 == 0 || (*param_4 != 0)))))))) &&
         (((iVar2 == 0 || (param_4[3] != 0)) && ((iVar1 < 0x10001 && (iVar2 < 0x10001)))))) {
        iVar10 = iVar1 - iVar9;
        local_1014 = (undefined1)iVar10;
        uStack_1013 = (undefined2)((uint)iVar10 >> 8);
        uStack_1011 = (undefined1)((uint)iVar10 >> 0x18);
        if (iVar7 == 4) {
LAB_1803c38ae:
          *(undefined4 *)(param_4 + 2) = local_100c;
          *(int *)((longlong)param_4 + 0xc) = iVar9;
        }
        else {
          local_1020 = param_4;
          local_1018 = iVar9;
          if (local_1038 != '\0') {
            if ((char)(uVar15 >> 0x10) != '\0') goto LAB_1803c38ae;
            if ((cVar3 != '\0') || (cVar4 != '\0')) {
              lVar11 = param_4[3];
              uVar18 = (undefined4)(uVar15 >> 0x20);
              local_1048._0_4_ = uVar18;
              FUN_18008dd40(*param_4,local_1000,iVar1,uVar15 & 0xff);
              local_1048 = (code *)CONCAT44(local_1048._4_4_,uVar18);
              FUN_18008dd40(lVar11,local_100c,iVar2,uVar15 & 0xff);
              if (cVar3 != '\0') {
                uVar20 = DAT_180963598;
              }
            }
          }
          if (0 < CONCAT13(uStack_1011,CONCAT21(uStack_1013,local_1014))) {
            if (iVar8 == 1) {
              FUN_1803c0070(&local_1020,3,fVar21);
              return 1;
            }
            if (iVar8 == 2) {
              FUN_1803c0070(&local_1020,2,fVar21);
              return 1;
            }
            if (local_1037 != '\0') {
              FUN_180540530(&local_fb8,local_818,0x798);
              local_ba8 = 1;
              if (local_1028 == 1) {
                local_fb0 = 2;
              }
              else if (local_1028 == 2) {
                local_fb0 = 3;
              }
              else {
                local_fb0 = 1;
                if (local_1028 == 3) {
                  local_fb0 = 4;
                }
              }
              local_faf = CONCAT13(local_1014,local_1018._1_3_);
              local_fab = uStack_1013;
              local_fa9 = uStack_1011;
              local_fb8 = local_1030;
              FUN_1803bf830(&local_1020,&local_fb8,local_1030,DAT_1808ac34c);
              return 1;
            }
            if (iVar7 == 3) {
              FUN_1803c09d0(&local_1020);
              if (CONCAT13(uStack_1011,CONCAT21(uStack_1013,local_1014)) < 1) {
                return 1;
              }
LAB_1803c3805:
              FUN_1803c0b70(&local_1020,local_818);
              return 1;
            }
            if (iVar7 == 1) {
              FUN_1803bf830(&local_1020,local_818,local_ff8,uVar20);
              return 1;
            }
            if (iVar7 == 2) {
              if (local_1036 != '\0') {
                uVar20 = DAT_1808ac34c;
LAB_1803c383c:
                local_1040 = (undefined1 *)CONCAT44(local_1040._4_4_,uVar20);
                local_1048 = (code *)CONCAT71(local_1048._1_7_,local_1036);
                FUN_1803c01e0(&local_1020,local_818,local_1008,local_1010);
                return 1;
              }
              if (local_a0 == '\0') goto LAB_1803c383c;
            }
            else if (iVar7 == 3) goto LAB_1803c3805;
          }
        }
      }
    }
    else {
      FUN_1803a0940(&local_1030,uVar6);
      if (local_1030 == 0) goto LAB_1803c31f2;
      if ((DAT_180ca12ef == '\0') && (DAT_180cc4bff == '\0')) {
LAB_1803c30d7:
        if (local_1030 != 0) {
          if (((DAT_180cd1a95 != '\0') && (DAT_180cd1307 == '\0')) && (DAT_180cd1a96 != '\0')) {
            if (DAT_181109000 == 0) {
              if (local_1030 != 0) {
                local_1008 = local_1030;
                lVar11 = FUN_1803a0710(&local_1008);
                if ((lVar11 != 0) &&
                   (lVar11 = FUN_1804ef120(lVar11,"C_CSGO_PreviewModel"), lVar11 != 0)) {
                  bVar19 = true;
                  goto LAB_1803c315a;
                }
              }
              bVar19 = false;
            }
            else {
              bVar19 = local_1030 == DAT_181109000;
            }
LAB_1803c315a:
            if (((bVar19) && (DAT_18093c6ec != '\0')) &&
               ((DAT_18093c6f0 != '\0' ||
                (((DAT_18093c708 != '\0' || (DAT_18093c720 != '\0')) || (DAT_18093c738 != '\0'))))))
            {
              local_1040 = &DAT_18093c6ec;
              goto LAB_1803c3197;
            }
          }
          lVar11 = FUN_1803c5d30(local_1030);
          if (((lVar11 != 0) && (*(char *)(lVar11 + 0x1c) != '\0')) &&
             (((*(char *)(lVar11 + 0x20) != '\0' ||
               ((*(char *)(lVar11 + 0x38) != '\0' || (*(char *)(lVar11 + 0x50) != '\0')))) ||
              (*(char *)(lVar11 + 0x68) != '\0')))) {
            local_1040 = (undefined1 *)(lVar11 + 0x1c);
LAB_1803c3197:
            local_1048 = param_5;
            uVar12 = FUN_1803c1e90(param_1,param_2,param_3,param_4);
            return uVar12;
          }
        }
        goto LAB_1803c31f2;
      }
      if (local_1030 == 0) goto LAB_1803c31f2;
      lVar11 = FUN_18000f3a0((ulonglong)DAT_180961968 + local_1030);
      if ((((lVar11 == 0) ||
           (lVar11 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar11), lVar11 == 0)) ||
          (lVar11 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar11), lVar11 == 0)) ||
         ((_Str1 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar11),
          (char *)0x7ffffffefffe < _Str1 + -0x10000 ||
          (iVar7 = strncmp(_Str1,"C_CS2HudModel",0xd), iVar7 != 0)))) goto LAB_1803c30d7;
      if (DAT_180ca12ef == '\0') {
        LOCK();
        _DAT_180ceb5f8 = _DAT_180ceb5f8 + 1;
        UNLOCK();
        return 1;
      }
    }
    uVar12 = 1;
  }
  return uVar12;
}



/* ===== 1803c3c40 FUN_1803c3c40 ===== */

void FUN_1803c3c40(void)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  
  if ((DAT_18110ff60 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_18110ff64 = FUN_18038eaf0("C_BaseEntity","m_nCreationTick");
    DAT_18110ff68 = FUN_18038eaf0("C_CSPlayerPawnBase","m_flLastSpawnTimeIndex");
    if (DAT_18110ff68 == 0) {
      DAT_18110ff68 = FUN_18038eaf0("C_CSPlayerPawn","m_flLastSpawnTimeIndex");
    }
    DAT_18110ff6c = FUN_18038eaf0("C_CSPlayerPawn","m_bGunGameImmunity");
    if (DAT_18110ff6c == 0) {
      DAT_18110ff6c = FUN_18038eaf0("C_CSPlayerPawnBase","m_bGunGameImmunity");
    }
    DAT_18110ff70 = FUN_18038eaf0("C_BaseModelEntity","m_pClientAlphaProperty");
    DAT_18110ff74 = FUN_18038eaf0("CClientAlphaProperty","m_nAlpha");
    DAT_18110ff78 = FUN_18038eaf0("C_CSPlayerPawn","m_flNextSprayDecalTime");
    DAT_18110ff7c = FUN_18038eaf0("C_BaseEntity","m_pRenderComponent");
    DAT_18110ff80 = FUN_18038eaf0("CRenderComponent","m_bEnableRendering");
    uVar2 = FUN_18038eaf0("CRenderComponent","m_bIsRenderingWithViewModels");
    if (uVar2 < 0x19) {
      DAT_18110ff8c = 0;
    }
    else {
      DAT_18110ff8c = uVar2 - 0x18;
    }
    DAT_18110ff84 = FUN_18038eaf0("C_BaseModelEntity","m_nRenderMode");
    DAT_18110ff88 = FUN_18038eaf0("C_BaseEntity","m_pCollision");
    DAT_18110ff90 = FUN_18038eaf0("CGlowProperty","m_glowColorOverride");
    DAT_18110ff94 = FUN_18038eaf0("CGlowProperty","m_bGlowing");
    DAT_18110ff98 = FUN_18038eaf0("CGlowProperty","m_iGlowType");
    DAT_18110ff9c = FUN_18038eaf0("CGlowProperty","m_flGlowTime");
    DAT_18110ffa0 = FUN_18038eaf0("CGlowProperty","m_flGlowStartTime");
    if (((((DAT_180961930 == 0) || (DAT_18110ff7c == 0)) || (DAT_18110ff80 == 0)) ||
        (((DAT_18110ff8c == 0 || (DAT_18110ff84 == 0)) ||
         ((DAT_18110ff88 == 0 || ((DAT_18110ff90 == 0 || (DAT_18110ff94 == 0)))))))) ||
       ((DAT_18110ff98 == 0 ||
        ((((DAT_18110ff9c == 0 || (DAT_18110ffa0 == 0)) || (DAT_180961a10 == 0)) ||
         (DAT_180961a18 == 0)))))) {
      DAT_18110ffa4 = 0;
      bVar1 = false;
    }
    else {
      DAT_18110ffa4 = 1;
      bVar1 = true;
    }
    pcVar3 = "[error] glow |";
    if (bVar1) {
      pcVar3 = "[glow]";
    }
    DAT_18110ff60 = '\x01';
    FUN_1802b2560("%s glow manager | m_Glow 0x%x color 0x%x glowing 0x%x type 0x%x time 0x%x start 0x%x | render component 0x%x enable 0x%x scene objects 0x%x | render mode 0x%x collision 0x%x | SetType %p SetColorOverride %p"
                  ,pcVar3,DAT_180961930,DAT_18110ff90,DAT_18110ff94,DAT_18110ff98,DAT_18110ff9c,
                  DAT_18110ffa0,DAT_18110ff7c,DAT_18110ff80,DAT_18110ff8c,DAT_18110ff84,
                  DAT_18110ff88,DAT_180961a10,DAT_180961a18);
  }
  return;
}



/* ===== 1803c3fb0 FUN_1803c3fb0 ===== */

void FUN_1803c3fb0(longlong param_1,float *param_2,float param_3)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  char *_Str1;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_88 [4];
  longlong local_78 [4];
  undefined4 local_54;
  
  if ((((param_1 != 0) && (DAT_18110df50 < 0xc0)) &&
      ((0.0 < *param_2 || ((0.0 < param_2[1] || (0.0 < param_2[2])))))) &&
     ((DAT_18110ffa4 == '\0' ||
      ((((lVar5 = FUN_18000f3a0((ulonglong)DAT_18110ff88 + param_1), lVar5 != 0 &&
         (lVar5 = FUN_18000f3a0((ulonglong)DAT_18110ff7c + param_1), lVar5 != 0)) &&
        (cVar2 = FUN_180011220((ulonglong)DAT_18110ff80 + lVar5), cVar2 == '\x01')) &&
       (cVar2 = FUN_180011220((ulonglong)DAT_18110ff84 + param_1), cVar2 != '\n')))))) {
    fVar1 = DAT_1808acb94;
    fVar15 = DAT_1808ac34c;
    fVar11 = DAT_1808ac34c;
    if ((DAT_18110ff70 != 0) && (uVar10 = (ulonglong)DAT_18110ff74, DAT_18110ff74 != 0)) {
      lVar5 = FUN_18000f3a0(param_1 + (ulonglong)DAT_18110ff70);
      if (lVar5 == 0) {
        return;
      }
      bVar3 = FUN_180011220(lVar5 + uVar10);
      fVar11 = (float)bVar3 / fVar1;
    }
    local_88[1] = param_3 * param_2[3];
    local_88[2] = 1.0;
    local_88[0] = 0.0;
    pfVar7 = local_88;
    if (0.0 <= local_88[1]) {
      pfVar7 = local_88 + 1;
    }
    pfVar6 = local_88 + 2;
    if (local_88[1] <= fVar15) {
      pfVar6 = pfVar7;
    }
    iVar9 = (int)(fVar11 * *pfVar6 * fVar1);
    if (0 < iVar9) {
      local_78[0] = param_1;
      _Str1 = (char *)FUN_1803a0710(local_78);
      if (_Str1 == (char *)0x0) {
LAB_1803c4169:
        if (0xfe < iVar9) {
          iVar9 = 0xfe;
        }
      }
      else {
        lVar5 = 0;
        do {
          lVar8 = lVar5 + 1;
          if (_Str1[lVar5] != (&DAT_1806d4100)[lVar5]) {
            iVar4 = strcmp(_Str1,"C_PlantedC4");
            if (iVar4 != 0) goto LAB_1803c4169;
            break;
          }
          lVar5 = lVar8;
        } while (lVar8 != 5);
      }
      uVar10 = DAT_18110df50;
      fVar11 = fVar15;
      if (*param_2 <= fVar15) {
        fVar11 = *param_2;
      }
      lVar5 = DAT_18110df50 * 0x20;
      fVar13 = fVar15;
      if (param_2[1] <= fVar15) {
        fVar13 = param_2[1];
      }
      fVar14 = fVar15;
      if (param_2[2] <= fVar15) {
        fVar14 = param_2[2];
      }
      lVar8 = DAT_18110df50 * 4;
      DAT_18110df50 = DAT_18110df50 + 1;
      (&DAT_18110c740)[lVar8] = param_1;
      *(float *)(&DAT_18110c748 + lVar5) = fVar11;
      fVar12 = fVar15;
      if (fVar11 <= fVar15) {
        fVar12 = fVar11;
      }
      *(float *)(&DAT_18110c74c + lVar5) = fVar13;
      *(float *)(&DAT_18110c750 + lVar5) = fVar14;
      *(float *)(&DAT_18110c754 + lVar5) = (float)iVar9 / fVar1;
      fVar11 = fVar15;
      if (fVar13 <= fVar15) {
        fVar11 = fVar13;
      }
      if (fVar14 <= fVar15) {
        fVar15 = fVar14;
      }
      (&DAT_18110c758)[uVar10 * 8] =
           (((int)(fVar15 * fVar1) & 0xffU | iVar9 << 8) << 8 | (int)(fVar11 * fVar1) & 0xffU) << 8
           | (int)(fVar12 * fVar1) & 0xffU;
      *(undefined4 *)(&DAT_18110c75c + lVar5) = local_54;
    }
  }
  return;
}



/* ===== 1803c4270 FUN_1803c4270 ===== */

void FUN_1803c4270(void)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  char *_Str1;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  float *pfVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  float *pfVar17;
  int *piVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_res8 [6];
  longlong local_res20;
  longlong local_e8;
  longlong local_e0;
  
  DAT_18110df50 = 0;
  if (DAT_180961930 != 0) {
    FUN_1803c3c40();
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(local_res8);
      DAT_181108a00 = CONCAT44(local_res8[1],local_res8[0]);
      DAT_1811089f8 = FUN_1803a0c50(local_res8);
      DAT_180cd1304 = '\x01';
    }
    lVar6 = DAT_1811089f8;
    FUN_1803a13a0(&local_e8);
    fVar5 = DAT_1808ac710;
    fVar4 = DAT_1808ac34c;
    fVar3 = DAT_1808ac140;
    fVar2 = DAT_1808ac00c;
    for (lVar19 = local_e8; lVar19 != local_e0; lVar19 = lVar19 + 0x10) {
      _Str1 = (char *)FUN_1803a0710(lVar19 + 8);
      if ((_Str1 == (char *)0x0) || (iVar9 = strcmp(_Str1,"C_CSPlayerPawn"), iVar9 != 0))
      goto LAB_1803c479c;
      if ((*(longlong *)(lVar19 + 8) == 0) ||
         ((DAT_180ca09f0 == 0 ||
          (iVar9 = FUN_180011200(*(longlong *)(lVar19 + 8) + (ulonglong)DAT_180ca09f0),
          999 < iVar9 - 1U)))) {
        iVar9 = 3;
        piVar18 = (int *)&DAT_180920680;
        uVar16 = (ulonglong)DAT_180ca09f4;
        cVar7 = DAT_18092067c;
LAB_1803c4471:
        if (lVar6 != 0) goto LAB_1803c447a;
LAB_1803c452f:
        if (iVar9 == 3) {
          if (lVar6 != 0) {
            if ((*(longlong *)(lVar19 + 8) == 0) || ((int)uVar16 == 0)) {
              cVar7 = '\0';
            }
            else {
              cVar7 = FUN_180011220(uVar16 + *(longlong *)(lVar19 + 8));
              uVar16 = (ulonglong)DAT_180ca09f4;
            }
            if ((int)uVar16 == 0) {
              cVar8 = '\0';
            }
            else {
              cVar8 = FUN_180011220(uVar16 + lVar6);
            }
            if (cVar7 == cVar8) goto LAB_1803c479c;
          }
          if ((DAT_180920874 != '\0') && (DAT_18092081c != 0)) {
            piVar12 = (int *)&DAT_180920878;
            goto LAB_1803c45aa;
          }
        }
        else if (cVar7 != '\0') goto LAB_1803c45a1;
      }
      else {
        uVar16 = (ulonglong)DAT_180ca09f4;
        if (lVar6 == 0) {
LAB_1803c4446:
          iVar9 = 0;
          piVar18 = (int *)&DAT_18091bafc;
          cVar7 = DAT_18091baf8;
          goto LAB_1803c4471;
        }
        lVar1 = *(longlong *)(lVar19 + 8);
        if (lVar1 == lVar6) {
          iVar9 = 2;
          piVar18 = (int *)&DAT_18091ed54;
          cVar7 = DAT_18091ed50;
        }
        else {
          if ((lVar1 == 0) || (DAT_180ca09f4 == 0)) {
            cVar7 = '\0';
          }
          else {
            cVar7 = FUN_180011220(uVar16 + lVar1);
            uVar16 = (ulonglong)DAT_180ca09f4;
          }
          if ((int)uVar16 == 0) {
            cVar8 = '\0';
          }
          else {
            cVar8 = FUN_180011220(uVar16 + lVar6);
            uVar16 = (ulonglong)DAT_180ca09f4;
          }
          if (cVar7 != cVar8) goto LAB_1803c4446;
          iVar9 = 1;
          piVar18 = (int *)&DAT_18091d428;
          cVar7 = DAT_18091d424;
        }
LAB_1803c447a:
        lVar1 = *(longlong *)(lVar19 + 8);
        if (lVar1 != lVar6) goto LAB_1803c452f;
        piVar18 = (int *)&DAT_18091ed54;
        if (DAT_18091ed50 == '\0') {
          piVar18 = (int *)0x0;
        }
        if (((DAT_180921498 != '\0') && (lVar1 != 0)) && ((int)uVar16 != 0)) {
          cVar7 = FUN_180011220(uVar16 + lVar1);
          if ((byte)(cVar7 - 2U) < 2) {
            uVar10 = DAT_1809214b0;
            if (cVar7 == '\x03') {
              uVar10 = DAT_1809214ac;
            }
            piVar11 = (int *)FUN_18027fb40(uVar10);
            if (piVar11 != (int *)0x0) {
              if (0 < *piVar11) {
                piVar12 = &DAT_180931b4c;
                do {
                  if ((*piVar12 == *piVar11) && (piVar12[1] == (uint)(cVar7 != '\x03'))) {
                    if ((char)piVar12[99] != '\0') {
                      piVar12 = piVar12 + 100;
                      if (piVar12 != (int *)0x0) goto LAB_1803c45aa;
                    }
                    break;
                  }
                  piVar12 = piVar12 + 0xab;
                } while (piVar12 != &DAT_18093c64c);
              }
            }
          }
        }
LAB_1803c45a1:
        piVar12 = piVar18;
        if (piVar12 != (int *)0x0) {
LAB_1803c45aa:
          if (((DAT_18110ff6c == 0) ||
              (cVar7 = FUN_180011220((ulonglong)DAT_18110ff6c + *(longlong *)(lVar19 + 8)),
              cVar7 == '\0')) &&
             ((lVar6 == 0 || ((*(longlong *)(lVar19 + 8) != lVar6 || (DAT_180ccf984 != '\0')))))) {
            if (iVar9 == 3) {
              fVar20 = fVar4;
            }
            else {
              lVar1 = *(longlong *)(lVar19 + 8);
              local_res8[0] = 1.0;
              if ((DAT_180961a50 == 0) || (lVar13 = FUN_18000f3a0(), lVar13 == 0)) {
                fVar20 = 0.0;
              }
              else {
                fVar20 = (float)FUN_18000f3d0(lVar13 + 0x30);
              }
              if (DAT_18110ff64 == 0) {
                fVar22 = fVar4;
              }
              else {
                iVar9 = FUN_180011200(lVar1 + (ulonglong)DAT_18110ff64);
                fVar22 = fVar20 - (float)iVar9 * fVar2;
                if (0.0 < fVar22) {
                  fVar22 = fVar22 * fVar5;
                  local_res8[0] = fVar4;
                  if (fVar22 <= fVar4) {
                    local_res8[0] = fVar22;
                  }
                  fVar22 = local_res8[0];
                }
                else {
                  local_res8[0] = 0.0;
                  fVar22 = 0.0;
                }
              }
              if (DAT_18110ff68 != 0) {
                fVar21 = (float)FUN_18000f3d0(lVar1 + (ulonglong)DAT_18110ff68);
                fVar20 = fVar20 - fVar21;
                if (fVar20 <= fVar3) {
                  fVar21 = 0.0;
                  if (0.0 <= fVar20) {
                    fVar21 = fVar20;
                  }
                  fVar22 = fVar21 * fVar5 * fVar22;
                  local_res8[0] = fVar22;
                }
                else {
                  fVar22 = fVar4 * fVar22;
                  local_res8[0] = fVar22;
                }
              }
              cVar7 = FUN_18008f330(lVar1);
              if (cVar7 != '\0') {
                fVar22 = DAT_180963598 * fVar22;
                local_res8[0] = fVar22;
              }
              local_res8[4] = 1.0;
              local_res8[2] = 0.0;
              pfVar17 = local_res8 + 2;
              if (0.0 <= fVar22) {
                pfVar17 = local_res8;
              }
              pfVar14 = local_res8 + 4;
              if (fVar22 <= fVar4) {
                pfVar14 = pfVar17;
              }
              fVar20 = *pfVar14;
            }
            if (DAT_18110ff78 != 0) {
              uVar10 = FUN_180011200((ulonglong)DAT_18110ff78 + 8 + *(longlong *)(lVar19 + 8));
              FUN_1803a0940(&local_res20,uVar10);
              if (local_res20 != 0) {
                FUN_1803c3fb0(local_res20,piVar12,fVar20);
              }
            }
            uVar15 = FUN_1803a08e0(lVar19 + 8);
            FUN_1803c3fb0(uVar15,piVar12,fVar20);
            FUN_1803c3fb0(*(undefined8 *)(lVar19 + 8),piVar12,fVar20);
          }
        }
      }
LAB_1803c479c:
    }
    FUN_1800244c0(&local_e8);
  }
  return;
}



/* ===== 1803c4810 FUN_1803c4810 ===== */

undefined1 FUN_1803c4810(void)

{
  (*DAT_180961a10)();
  return 1;
}



/* ===== 1803c4830 FUN_1803c4830 ===== */

undefined1 FUN_1803c4830(void)

{
  (*DAT_180961a18)();
  return 1;
}



/* ===== 1803c4850 FUN_1803c4850 ===== */

void FUN_1803c4850(undefined4 param_1,longlong param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte local_res10 [8];
  char local_res18;
  undefined4 local_44;
  
  local_res18 = param_3;
  lVar3 = FUN_18000f3a0((ulonglong)DAT_18110ff7c + param_2);
  uVar10 = DAT_18110df40;
  if (lVar3 != 0) {
    uVar10 = (ulonglong)DAT_18110ff8c;
    iVar2 = FUN_180011200(uVar10 + lVar3);
    lVar3 = FUN_18000f3a0(uVar10 + lVar3 + 8);
    uVar10 = DAT_18110df40;
    if ((0 < iVar2) && (lVar3 != 0)) {
      uVar7 = 0;
      bVar8 = ~DAT_180961908;
      uVar9 = DAT_18110df40;
      do {
        lVar4 = FUN_18000f3a0(uVar7 * 8 + lVar3);
        uVar10 = uVar9;
        if ((lVar4 != 0) && (lVar4 = FUN_18000f3a0(lVar4 + 0x20), lVar4 != 0)) {
          uVar5 = (ulonglong)DAT_180961904;
          bVar1 = FUN_180011220(uVar5 + lVar4);
          if ((DAT_180961908 & bVar1) != 0) {
            if (uVar9 < 0x400) {
              uVar10 = uVar9 + 1;
              (&DAT_1809fea00)[uVar9 * 4] = param_1;
              *(undefined4 *)(&DAT_1809fea04 + uVar9 * 0x10) = local_44;
              *(longlong *)(&DAT_1809fea08 + uVar9 * 0x10) = lVar4;
            }
            if (local_res18 != '\0') {
              local_res10[0] = bVar8 & bVar1;
              FUN_1800233d0(uVar5 + lVar4,local_res10);
            }
          }
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar9 = uVar10;
      } while ((int)uVar6 < iVar2);
    }
  }
  DAT_18110df40 = uVar10;
  return;
}



/* ===== 1803c49c0 FUN_1803c49c0 ===== */

void FUN_1803c49c0(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte local_res8 [8];
  undefined1 local_res10 [8];
  
  uVar7 = 0;
  if (DAT_18110df40 != 0) {
    do {
      if ((&DAT_1809fea00)[uVar7 * 4] != -1) {
        plVar1 = (longlong *)FUN_1803a0940(local_res10);
        if (*plVar1 != 0) {
          lVar8 = *(longlong *)(&DAT_1809fea08 + uVar7 * 0x10);
          lVar3 = FUN_18000f3a0((ulonglong)DAT_18110ff7c + *plVar1);
          if (lVar3 != 0) {
            uVar5 = (ulonglong)DAT_18110ff8c;
            iVar2 = FUN_180011200(uVar5 + lVar3);
            lVar3 = FUN_18000f3a0(uVar5 + lVar3 + 8);
            if ((0 < iVar2) && (lVar3 != 0)) {
              uVar5 = 0;
              do {
                lVar4 = FUN_18000f3a0(lVar3 + uVar5 * 8);
                if ((lVar4 != 0) && (lVar4 = FUN_18000f3a0(lVar4 + 0x20), lVar4 == lVar8)) {
                  uVar5 = (ulonglong)DAT_180961904;
                  lVar8 = *(longlong *)(&DAT_1809fea08 + uVar7 * 0x10);
                  local_res8[0] = FUN_180011220(lVar8 + uVar5);
                  local_res8[0] = local_res8[0] | DAT_180961908;
                  FUN_1800233d0(lVar8 + uVar5,local_res8);
                  break;
                }
                uVar6 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar6;
              } while ((int)uVar6 < iVar2);
            }
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < DAT_18110df40);
  }
  DAT_18110df40 = 0;
  lVar8 = DAT_18110df48;
  while (lVar8 != 0) {
    lVar8 = lVar8 + -1;
    if ((&DAT_1809fa800)[lVar8 * 6] != -1) {
      plVar1 = (longlong *)FUN_1803a0940(local_res8);
      if (*plVar1 != 0) {
        lVar3 = (ulonglong)DAT_180961930 + *plVar1;
        FUN_1803c4810(lVar3,*(undefined4 *)(&DAT_1809fa80c + lVar8 * 0x18),
                      *(undefined4 *)(&DAT_1809fa810 + lVar8 * 0x18));
        FUN_180013280((ulonglong)DAT_18110ffa0 + lVar3,&DAT_1809fa814 + lVar8 * 0x18);
        FUN_1800233d0((ulonglong)DAT_18110ff94 + lVar3,&DAT_1809fa808 + lVar8 * 0x18);
        FUN_1803c4830(lVar3,*(undefined4 *)(&DAT_1809fa804 + lVar8 * 0x18));
      }
    }
  }
  DAT_18110df48 = 0;
  return;
}



/* ===== 1803c4bb0 FUN_1803c4bb0 ===== */

void FUN_1803c4bb0(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_res8 [8];
  undefined2 local_4f;
  undefined1 local_4d;
  
  if ((((param_1 != 0) && (DAT_18110df48 < 0x2c0)) &&
      (lVar6 = FUN_18000f3a0(param_1 + 0x10), lVar6 != 0)) &&
     ((iVar3 = FUN_180011200(lVar6 + 0x10), iVar3 != -1 &&
      (plVar7 = (longlong *)FUN_1803a0940(local_res8,iVar3), *plVar7 == param_1)))) {
    lVar8 = (ulonglong)DAT_180961930 + param_1;
    uVar4 = FUN_180011200((ulonglong)DAT_18110ff90 + lVar8);
    uVar2 = FUN_180011220((ulonglong)DAT_18110ff94 + lVar8);
    uVar5 = FUN_180011200((ulonglong)DAT_18110ff98 + lVar8);
    uVar9 = FUN_18000f3d0((ulonglong)DAT_18110ff9c + lVar8);
    uVar10 = FUN_18000f3d0((ulonglong)DAT_18110ffa0 + lVar8);
    uVar1 = DAT_18110df48;
    lVar6 = DAT_18110df48 * 6;
    DAT_18110df48 = DAT_18110df48 + 1;
    (&DAT_1809fa800)[lVar6] = iVar3;
    *(undefined4 *)(&DAT_1809fa804 + uVar1 * 0x18) = uVar4;
    (&DAT_1809fa808)[uVar1 * 0x18] = uVar2;
    *(undefined2 *)(&DAT_1809fa809 + uVar1 * 0x18) = local_4f;
    (&DAT_1809fa80b)[uVar1 * 0x18] = local_4d;
    *(undefined4 *)(&DAT_1809fa80c + uVar1 * 0x18) = uVar5;
    *(undefined4 *)(&DAT_1809fa810 + uVar1 * 0x18) = uVar9;
    *(undefined4 *)(&DAT_1809fa814 + uVar1 * 0x18) = uVar10;
    FUN_1803c4850(iVar3,param_1,0);
    FUN_1803c4810(lVar8,3,0);
    local_res8[0] = 1;
    FUN_1800233d0((ulonglong)DAT_18110ff94 + lVar8,local_res8);
    FUN_1803c4830(lVar8,param_2);
  }
  return;
}



/* ===== 1803c4d60 FUN_1803c4d60 ===== */

void FUN_1803c4d60(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_68;
  float local_64 [17];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  LOCK();
  DAT_18110ffa8 = DAT_18110ffa8 + 1;
  UNLOCK();
  if (DAT_180cd1aa6 == '\0') {
    iVar7 = FUN_1804e4d70(&DAT_1809fa7b0);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809fa7fc == 0x7fffffff) {
      DAT_1809fa7fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    if ((DAT_18110df48 != 0) || (DAT_18110df40 != 0)) {
      FUN_1803c49c0();
    }
    FUN_1803c4270();
    uVar11 = 0;
    if (DAT_18110df50 != 0) {
      do {
        FUN_1803c4bb0((&DAT_18110c740)[uVar11 * 4],(&DAT_18110c758)[uVar11 * 8]);
        uVar11 = uVar11 + 1;
      } while (uVar11 < DAT_18110df50);
    }
    lVar14 = (longlong)DAT_1811117f8 * 0x14000;
    uVar11 = *(ulonglong *)(&DAT_1811117e0 + (longlong)DAT_1811117f8 * 8);
    uVar12 = 0;
    uVar13 = 0;
    if (uVar11 != 0) {
      do {
        if (0x1ff < uVar12) break;
        lVar10 = uVar13 * 0xa0;
        if ((*(longlong *)(&DAT_180a02a00 + lVar10 + lVar14) != 0) &&
           ((&DAT_180a02a88)[lVar10 + lVar14] != '\0')) {
          (&DAT_18110b710)[uVar12] = *(longlong *)(&DAT_180a02a00 + lVar10 + lVar14);
          puVar1 = (undefined4 *)(&DAT_180a02a8c + lVar10 + lVar14);
          uVar2 = puVar1[1];
          uVar3 = puVar1[2];
          uVar4 = puVar1[3];
          (&DAT_18110df60)[uVar12 * 4] = *puVar1;
          (&DAT_18110df64)[uVar12 * 4] = uVar2;
          (&DAT_18110df68)[uVar12 * 4] = uVar3;
          (&DAT_18110df6c)[uVar12 * 4] = uVar4;
          uVar12 = uVar12 + 1;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar11);
    }
    fVar6 = DAT_1808acb94;
    fVar5 = DAT_1808ac34c;
    uVar11 = 0;
    if (uVar12 != 0) {
      do {
        local_64[0] = 1.0;
        local_68 = 0.0;
        fVar15 = fVar5;
        if ((float)(&DAT_18110df68)[uVar11 * 4] <= fVar5) {
          fVar15 = (float)(&DAT_18110df68)[uVar11 * 4];
        }
        fVar16 = fVar5;
        if ((float)(&DAT_18110df64)[uVar11 * 4] <= fVar5) {
          fVar16 = (float)(&DAT_18110df64)[uVar11 * 4];
        }
        fVar17 = fVar5;
        if ((float)(&DAT_18110df60)[uVar11 * 4] <= fVar5) {
          fVar17 = (float)(&DAT_18110df60)[uVar11 * 4];
        }
        pfVar9 = &local_68;
        if (0.0 <= (float)(&DAT_18110df6c)[uVar11 * 4]) {
          pfVar9 = (float *)(&DAT_18110df6c + uVar11 * 4);
        }
        pfVar8 = local_64;
        if ((float)(&DAT_18110df6c)[uVar11 * 4] <= fVar5) {
          pfVar8 = pfVar9;
        }
        FUN_1803c4bb0((&DAT_18110b710)[uVar11],
                      (int)(*pfVar8 * fVar6) << 0x18 |
                      (int)(fVar17 * fVar6) & 0xffU | ((int)(fVar16 * fVar6) & 0xffU) << 8 |
                      ((int)(fVar15 * fVar6) & 0xffU) << 0x10);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar12);
    }
    FUN_1804e4e90(&DAT_1809fa7b0);
  }
  LOCK();
  DAT_18110ffa8 = DAT_18110ffa8 + -1;
  UNLOCK();
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1803c4ff0 FUN_1803c4ff0 ===== */

void FUN_1803c4ff0(void)

{
  int iVar1;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  LOCK();
  DAT_18110ffa8 = DAT_18110ffa8 + 1;
  UNLOCK();
  iVar1 = FUN_1804e4d70(&DAT_1809fa7b0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809fa7fc == 0x7fffffff) {
    DAT_1809fa7fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  FUN_1803c49c0();
  FUN_1804e4e90(&DAT_1809fa7b0);
  LOCK();
  DAT_18110ffa8 = DAT_18110ffa8 + -1;
  UNLOCK();
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1803c5070 FUN_1803c5070 ===== */

void FUN_1803c5070(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 local_res18 [16];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if ((DAT_180cd1aa7 != '\0') && (DAT_180cd1aa6 == '\0')) {
    LOCK();
    DAT_18110ffa8 = DAT_18110ffa8 + 1;
    UNLOCK();
    iVar1 = FUN_1804e4d70(&DAT_1809fa7b0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809fa7fc == 0x7fffffff) {
      DAT_1809fa7fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    uVar3 = 0;
    if (DAT_18110df48 != 0) {
      do {
        if ((&DAT_1809fa800)[uVar3 * 6] != -1) {
          plVar2 = (longlong *)FUN_1803a0940(local_res18);
          if (*plVar2 != 0) {
            FUN_1803c4850((&DAT_1809fa800)[uVar3 * 6],*plVar2,1);
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < DAT_18110df48);
    }
    FUN_1804e4e90(&DAT_1809fa7b0);
    LOCK();
    DAT_18110ffa8 = DAT_18110ffa8 + -1;
    UNLOCK();
  }
  (*DAT_18110ffb0)(param_1,param_2);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1803c5190 FUN_1803c5190 ===== */

void FUN_1803c5190(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  INT_PTR IVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (DAT_180cd1aa5 != '\0') {
    return;
  }
  if (DAT_180cd1aa6 != '\0') {
    return;
  }
  FUN_1803c3c40();
  if (DAT_18110ff60 == '\0') {
    return;
  }
  DAT_180cd1aa5 = '\x01';
  if (DAT_18110ffa4 == '\0') {
    DAT_180cd1aa5 = '\x01';
    return;
  }
  hModule = GetModuleHandleA("scenesystem.dll");
  if ((((hModule == (HMODULE)0x0) ||
       (pFVar5 = GetProcAddress(hModule,"CreateInterface"), pFVar5 == (FARPROC)0x0)) ||
      (IVar6 = (*pFVar5)("SceneSystem_002",0), IVar6 == 0)) ||
     (lVar7 = FUN_18000f3a0(IVar6), lVar7 == 0)) {
    DAT_18110b708 = 0;
LAB_1803c52dc:
    bVar1 = false;
  }
  else {
    DAT_18110b708 = FUN_18000f3a0(lVar7 + 200);
    if (((DAT_18110b708 == 0) ||
        (iVar4 = FUN_180428df0(DAT_18110b708,FUN_1803c5070,&DAT_18110ffb0), iVar4 != 0)) ||
       (iVar4 = FUN_1804293b0(DAT_18110b708,1), iVar4 != 0)) goto LAB_1803c52dc;
    bVar1 = true;
    cVar2 = FUN_18026b620(&DAT_18110c710,"EventClientPreOutput_t",FUN_1803c4d60,0x7fffffff);
    if ((cVar2 != '\0') &&
       (cVar2 = FUN_18026b620(&DAT_18110ffb8,"EventFrameBoundary_t",FUN_1803c4ff0,0x80000000),
       cVar2 != '\0')) {
      cVar2 = '\x01';
      goto LAB_1803c5367;
    }
  }
  cVar2 = '\0';
  if (DAT_18110c730 != '\0') {
    DAT_18110c730 = '\0';
    cVar3 = FUN_18026b600(DAT_18110c728,&DAT_18110c710,DAT_18110c720);
    if (cVar3 == '\0') {
      FUN_1802b2560("[error] event listeners | unregister failed");
    }
  }
  if (DAT_18110ffd8 != '\0') {
    DAT_18110ffd8 = '\0';
    cVar3 = FUN_18026b600(DAT_18110ffd0,&DAT_18110ffb8,DAT_18110ffc8);
    if (cVar3 == '\0') {
      FUN_1802b2560("[error] event listeners | unregister failed");
    }
  }
  if (bVar1) {
    FUN_1804293b0(DAT_18110b708,0);
  }
LAB_1803c5367:
  pcVar8 = "FAILED (IsGlowing / GetGlowColor hooks stay)";
  if (cVar2 != '\0') {
    pcVar8 = "registered";
  }
  pcVar10 = "NOT hooked";
  if (bVar1) {
    pcVar10 = "hooked";
  }
  pcVar9 = "[error] glow |";
  if (cVar2 != '\0') {
    pcVar9 = "[glow]";
  }
  DAT_180cd1aa7 = cVar2;
  FUN_1802b2560("%s glow manager | CSceneSystem slot 25 (FinishRenderingViews) %p %s | PreOutput first / FrameBoundary last listeners %s"
                ,pcVar9,DAT_18110b708,pcVar10,pcVar8);
  return;
}



/* ===== 1803c53e0 FUN_1803c53e0 ===== */

bool FUN_1803c53e0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  char *_Str1;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((((param_1 != 0) && (lVar5 = FUN_18000f3a0((ulonglong)DAT_180961968 + param_1), lVar5 != 0))
      && (lVar5 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar5), lVar5 != 0)) &&
     ((lVar5 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar5), lVar5 != 0 &&
      (_Str1 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar5),
      _Str1 + -0x10000 < (char *)0x7ffffffeffff)))) {
    *param_2 = param_1;
    param_2[2] = (longlong)_Str1;
    iVar4 = strcmp(_Str1,"C_PlantedC4");
    uVar2 = DAT_181111810;
    uVar1 = DAT_181111800;
    if (iVar4 == 0) {
      uVar6 = (ulonglong)DAT_181111810;
      *(undefined4 *)(param_2 + 1) = 2;
      if ((uVar2 == 0) || (cVar3 = FUN_180011220(param_1 + uVar6), cVar3 == '\0')) {
        return true;
      }
      return false;
    }
    lVar5 = 0;
    do {
      lVar7 = lVar5 + 1;
      if (_Str1[lVar5] != (&DAT_1806d4100)[lVar5]) {
        lVar5 = FUN_18039e5c0(_Str1);
        uVar1 = DAT_181111800;
        if (lVar5 == 0) {
          return false;
        }
        *(undefined4 *)(param_2 + 1) = 0;
        if (uVar1 == 0) {
          return false;
        }
        goto LAB_1803c54f4;
      }
      lVar5 = lVar7;
    } while (lVar7 != 5);
    *(undefined4 *)(param_2 + 1) = 1;
    if (uVar1 != 0) {
LAB_1803c54f4:
      iVar4 = FUN_180011200(param_1 + (ulonglong)uVar1);
      if (0xfffffffd < iVar4 - 1U) {
        if (DAT_180ca09f8 == 0) {
          return true;
        }
        lVar5 = FUN_18000f3a0(param_1 + (ulonglong)DAT_180ca09f8);
        if (lVar5 == 0) {
          return true;
        }
        if (DAT_180ca095c == 0) {
          return true;
        }
        lVar5 = FUN_18000f3a0((ulonglong)DAT_180ca095c + lVar5);
        return lVar5 == 0;
      }
    }
  }
  return false;
}



/* ===== 1803c5580 FUN_1803c5580 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1803c5580(longlong param_1,longlong param_2,uint *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_88 [32];
  byte local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_88;
  if (((DAT_180961d58 == (code *)0x0) || (param_1 == 0)) || (param_2 == 0)) {
    uVar1 = (ulonglong)DAT_180961d58 & 0xffffffffffffff00;
  }
  else {
    local_68[0] = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    uVar1 = (*DAT_180961d58)(0,param_2,local_68,&local_58);
    if ((char)uVar1 != '\0') {
      *param_3 = (uint)local_68[0];
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* ===== 1803c5610 FUN_1803c5610 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803c5610(void)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  char cVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  int iVar23;
  ulonglong uVar24;
  undefined *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  int local_res8;
  undefined8 uStack_f0;
  ulonglong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 uStack_5c;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  FUN_1800422d0();
  uVar24 = 0;
  if (((((DAT_18093c6ec != '\0') || (DAT_18093c750 != '\0')) || (DAT_18093c780 != '\0')) ||
      (DAT_18093c7e4 != '\0')) && ((DAT_1809619d0 != 0 && (lVar16 = FUN_18000f3a0(), lVar16 != 0))))
  {
    local_res8 = 0;
    do {
      if (0xff < uVar24) break;
      lVar17 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                             (ulonglong)(uint)(local_res8 * DAT_180961944) + lVar16);
      if (lVar17 - 0x10000U < 0x7ffffffeffff) {
        iVar23 = 0;
        uVar27 = uVar24;
        do {
          uVar24 = uVar27;
          if (0xff < uVar27) break;
          if ((0x40 < local_res8 * 0x200 + iVar23) &&
             (lVar18 = FUN_18000f3a0((ulonglong)(uint)(iVar23 * DAT_180961948) + lVar17),
             lVar18 - 0x10000U < 0x7ffffffeffff)) {
            local_58 = 0;
            iStack_50 = 0;
            local_48 = 0;
            cVar15 = FUN_1803c53e0(lVar18,&local_58);
            if (cVar15 != '\0') {
              puVar25 = &DAT_18093c764;
              cVar15 = DAT_18093c780;
              if (iStack_50 == 0) {
                puVar25 = &DAT_18093c6d0;
                cVar15 = DAT_18093c6ec;
              }
              if ((cVar15 != '\0') || (puVar25[0x80] != '\0')) {
                uVar24 = uVar27 + 1;
                *(undefined4 *)(&DAT_18110ffe0 + uVar27 * 3) = (undefined4)local_58;
                *(undefined4 *)((longlong)&DAT_18110ffe0 + uVar27 * 0x18 + 4) = local_58._4_4_;
                (&DAT_18110ffe8)[uVar27 * 6] = iStack_50;
                *(undefined4 *)(uVar27 * 0x18 + 0x18110ffec) = uStack_4c;
                (&DAT_18110fff0)[uVar27 * 3] = local_48;
              }
            }
          }
          iVar23 = iVar23 + 1;
          uVar27 = uVar24;
        } while (iVar23 < 0x200);
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < 0x40);
  }
  LOCK();
  UNLOCK();
  lVar28 = (longlong)(int)(DAT_1811117f8 ^ 1);
  uVar26 = 0;
  DAT_1811117f0 = uVar24;
  uVar27 = 0;
  lVar16 = _DAT_1808adb40;
  lVar17 = _UNK_1808adb48;
  lVar18 = _DAT_1808adc30;
  lVar3 = _UNK_1808adc38;
  plVar19 = DAT_180ccf6e8;
  plVar12 = DAT_180ccf6f0;
  if (uVar24 != 0) {
    do {
      uVar27 = uVar26;
      lVar16 = _DAT_1808adb40;
      lVar17 = _UNK_1808adb48;
      lVar18 = _DAT_1808adc30;
      lVar3 = _UNK_1808adc38;
      plVar19 = DAT_180ccf6e8;
      plVar12 = DAT_180ccf6f0;
      if (0x1ff < uVar26) break;
      plVar19 = (longlong *)&DAT_18093c764;
      if ((&DAT_18110ffe8)[uVar26 * 6] == 0) {
        plVar19 = (longlong *)&DAT_18093c6d0;
      }
      uStack_f0 = *plVar19;
      lVar16 = plVar19[1];
      lVar17 = plVar19[2];
      uStack_d8 = plVar19[3];
      local_d0 = plVar19[4];
      lVar18 = plVar19[5];
      lVar3 = plVar19[6];
      uStack_b8 = plVar19[7];
      lVar4 = plVar19[8];
      lVar5 = plVar19[9];
      local_a0 = plVar19[10];
      lVar6 = plVar19[0xb];
      lVar7 = plVar19[0xc];
      uStack_88 = plVar19[0xd];
      lVar8 = plVar19[0xe];
      lVar9 = plVar19[0xf];
      local_70 = plVar19[0x10];
      lVar10 = plVar19[0x11];
      lVar13 = plVar19[0x12];
      uVar27 = uVar26 + 1;
      lVar20 = uVar26 * 0xa0;
      puVar1 = (undefined8 *)(&DAT_180a02a00 + lVar20 + lVar28 * 0x14000);
      *puVar1 = (&DAT_18110ffe0)[uVar26 * 3];
      puVar1[1] = uStack_f0;
      plVar19 = (longlong *)(&DAT_180a02a00 + lVar20 + 0x10 + lVar28 * 0x14000);
      *plVar19 = lVar16;
      plVar19[1] = lVar17;
      puVar2 = (ulonglong *)(&DAT_180a02a00 + lVar20 + 0x20 + lVar28 * 0x14000);
      *puVar2 = uStack_d8;
      puVar2[1] = local_d0;
      plVar19 = (longlong *)(&DAT_180a02a00 + lVar20 + 0x30 + lVar28 * 0x14000);
      *plVar19 = lVar18;
      plVar19[1] = lVar3;
      plVar19 = (longlong *)(&DAT_180a02a00 + lVar20 + 0x40 + lVar28 * 0x14000);
      *plVar19 = uStack_b8;
      plVar19[1] = lVar4;
      plVar19 = (longlong *)(&DAT_180a02a00 + lVar20 + 0x50 + lVar28 * 0x14000);
      *plVar19 = lVar5;
      plVar19[1] = local_a0;
      plVar19 = (longlong *)(&DAT_180a02a00 + lVar20 + 0x60 + lVar28 * 0x14000);
      *plVar19 = lVar6;
      plVar19[1] = lVar7;
      plVar19 = (longlong *)(&DAT_180a02a00 + lVar20 + 0x70 + lVar28 * 0x14000);
      *plVar19 = uStack_88;
      plVar19[1] = lVar8;
      plVar19 = (longlong *)(&DAT_180a02a00 + lVar20 + 0x80 + lVar28 * 0x14000);
      *plVar19 = lVar9;
      plVar19[1] = local_70;
      plVar19 = (longlong *)(&DAT_180a02a00 + lVar20 + 0x90 + lVar28 * 0x14000);
      *plVar19 = lVar10;
      plVar19[1] = CONCAT44(uStack_5c,(int)lVar13);
      uVar26 = uVar27;
      lVar16 = _DAT_1808adb40;
      lVar17 = _UNK_1808adb48;
      lVar18 = _DAT_1808adc30;
      lVar3 = _UNK_1808adc38;
      plVar19 = DAT_180ccf6e8;
      plVar12 = DAT_180ccf6f0;
    } while (uVar27 < uVar24);
  }
  do {
    plVar14 = DAT_180ccf6f0;
    lVar7 = _UNK_1808adc38;
    lVar6 = _DAT_1808adc30;
    lVar5 = _UNK_1808adb48;
    lVar4 = _DAT_1808adb40;
    _DAT_1808adb40 = lVar16;
    _UNK_1808adb48 = lVar17;
    _DAT_1808adc30 = lVar18;
    _UNK_1808adc38 = lVar3;
    if (plVar19 == DAT_180ccf6f0) {
LAB_1803c5ad0:
      DAT_180ccf6f0 = plVar12;
      *(ulonglong *)(&DAT_1811117e0 + lVar28 * 8) = uVar27;
      DAT_1811117f8 = DAT_1811117f8 ^ 1;
      return;
    }
    if (uVar27 == 0) {
LAB_1803c59a3:
      if (0x1ff < uVar27) goto LAB_1803c5ad0;
      plVar22 = (longlong *)(&DAT_180a02a00 + uVar27 * 0xa0 + lVar28 * 0x14000);
      uVar27 = uVar27 + 1;
      uVar24 = (ulonglong)uStack_f0 >> 0x38;
      uStack_f0 = CONCAT17((char)uVar24,0x1010001010000);
      DAT_180ccf6f0 = plVar12;
      *plVar22 = *plVar19;
      plVar22[1] = uStack_f0;
      plVar22[2] = lVar6;
      plVar22[3] = lVar7;
      uStack_d8 = uStack_d8 & 0xffffff0000000000;
      uVar11 = (uint)local_d0;
      local_d0 = CONCAT44(1,uVar11 & 0xffffff00);
      plVar22[4] = uStack_d8;
      plVar22[5] = local_d0;
      uVar11 = (uint)uStack_b8;
      plVar22[6] = lVar4;
      plVar22[7] = lVar5;
      uStack_b8 = CONCAT44(1,uVar11 & 0xffffff00);
      plVar22[8] = uStack_b8;
      plVar22[9] = 0x3e8000003f800000;
      uVar11 = (uint)local_a0;
      local_a0 = CONCAT44(1,uVar11 & 0xffffff00);
      plVar22[10] = 0x3f8000003e800000;
      plVar22[0xb] = local_a0;
      uVar11 = (uint)uStack_88;
      plVar22[0xc] = lVar4;
      plVar22[0xd] = lVar5;
      uStack_88 = CONCAT44(1,uVar11 & 0xffffff00);
      plVar22[0xe] = uStack_88;
      plVar22[0xf] = 0x3e8000003f800000;
      uVar11 = (uint)local_70;
      local_70 = CONCAT44(0x3e4ccccd,uVar11 & 0xffffff00);
      plVar22[0x10] = 0x3f8000003e800000;
      plVar22[0x11] = local_70;
      plVar22[0x12] = 0x3f8000003f4ccccd;
      plVar22[0x13] = CONCAT44(uStack_5c,0x3f800000);
    }
    else {
      plVar22 = (longlong *)0x0;
      uVar24 = 0;
      do {
        plVar21 = (longlong *)(&DAT_180a02a00 + uVar24 * 0xa0 + lVar28 * 0x14000);
        if (*plVar21 == *plVar19) {
          plVar22 = plVar21;
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar27);
      DAT_180ccf6f0 = plVar12;
      if (plVar22 == (longlong *)0x0) goto LAB_1803c59a3;
    }
    *(undefined1 *)(plVar22 + 0x11) = 1;
    lVar16 = plVar19[2];
    *(longlong *)((longlong)plVar22 + 0x8c) = plVar19[1];
    *(longlong *)((longlong)plVar22 + 0x94) = lVar16;
    lVar16 = _DAT_1808adb40;
    lVar17 = _UNK_1808adb48;
    lVar18 = _DAT_1808adc30;
    lVar3 = _UNK_1808adc38;
    plVar19 = plVar19 + 3;
    plVar12 = DAT_180ccf6f0;
    DAT_180ccf6f0 = plVar14;
    _UNK_1808adc38 = lVar7;
    _DAT_1808adc30 = lVar6;
    _UNK_1808adb48 = lVar5;
    _DAT_1808adb40 = lVar4;
  } while( true );
}



/* ===== 1803c5af0 FUN_1803c5af0 ===== */

ulonglong FUN_1803c5af0(void)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  char *_Str1;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong *puVar10;
  uint local_res8;
  undefined4 uStackX_c;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  ulonglong *local_28;
  ulonglong *local_20;
  longlong local_18;
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = CONCAT44(uStackX_c,local_res8);
    DAT_1811089f8 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  lVar3 = DAT_1811089f8;
  if ((((DAT_18095cf94 == '\0') || (DAT_18095cfac == '\0')) || (DAT_1811089f8 == 0)) ||
     ((DAT_180ca09f0 == 0 ||
      (iVar5 = FUN_180011200(DAT_1811089f8 + (ulonglong)DAT_180ca09f0), 999 < iVar5 - 1U))))
  goto LAB_1803c5cfd;
  FUN_1803a09f0(&local_28);
  puVar8 = auStack_48;
  puVar9 = auStack_48;
  puVar10 = local_28;
  if (local_28 != local_20) {
    do {
      _Str1 = (char *)FUN_1803a0710(puVar10);
      if (((_Str1 != (char *)0x0) && (iVar5 = strcmp(_Str1,"C_PlantedC4"), iVar5 == 0)) &&
         ((DAT_181111810 == 0 ||
          (cVar4 = FUN_180011220((ulonglong)DAT_181111810 + *puVar10), cVar4 == '\0')))) {
        local_res8 = 0;
        cVar4 = FUN_1803c5580(*puVar10,lVar3,&local_res8);
        if (cVar4 != '\0') {
          if (DAT_180ca09f0 == 0) {
            DAT_180ccf600 = 0;
          }
          else {
            DAT_180ccf600 = FUN_180011200(lVar3 + (ulonglong)DAT_180ca09f0);
          }
          uVar2 = DAT_180962b5c;
          DAT_180ccf608 = *puVar10;
          LOCK();
          UNLOCK();
          LOCK();
          DAT_180962b5c = local_res8;
          UNLOCK();
          LOCK();
          UNLOCK();
          if (local_28 == (ulonglong *)0x0) {
            return (ulonglong)uVar2;
          }
          uVar6 = (local_18 - (longlong)local_28 >> 3) * 8;
          if (uVar6 < 0x1000) {
            uVar6 = thunk_FUN_1803d64e0();
            return uVar6;
          }
          if ((undefined1 *)((longlong)local_28 + (-8 - local_28[-1])) < (undefined1 *)0x20) {
            uVar6 = thunk_FUN_1803d64e0(local_28[-1],uVar6 + 0x27);
            return uVar6;
          }
          goto LAB_1803c5cee;
        }
        break;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != local_20);
  }
  if (local_28 == (ulonglong *)0x0) goto LAB_1803c5cfd;
  puVar7 = local_28;
  if ((ulonglong)((local_18 - (longlong)local_28 >> 3) * 8) < 0x1000) {
LAB_1803c5cf5:
    puVar9 = puVar8;
  }
  else {
    puVar7 = (ulonglong *)local_28[-1];
    puVar10 = (ulonglong *)((longlong)local_28 + (-8 - (longlong)puVar7));
    if (&DAT_0000001f < puVar10) {
LAB_1803c5cee:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar8 = auStack_40;
      puVar7 = puVar10;
      goto LAB_1803c5cf5;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x1803c5cfd;
  thunk_FUN_1803d64e0(puVar7);
LAB_1803c5cfd:
  uVar6 = DAT_180ccf608;
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  DAT_180ccf608 = 0;
  DAT_180ccf600 = 0;
  DAT_180962b5c = 0xffffffff;
  return uVar6;
}



/* ===== 1803c5d30 FUN_1803c5d30 ===== */

undefined * FUN_1803c5d30(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    lVar2 = (longlong)DAT_1811117f8 * 0x14000;
    if (*(ulonglong *)(&DAT_1811117e0 + (longlong)DAT_1811117f8 * 8) != 0) {
      do {
        if (*(longlong *)(&DAT_180a02a00 + uVar1 * 0xa0 + lVar2) == param_1) {
          return &DAT_180a02a08 + uVar1 * 0xa0 + lVar2;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ulonglong *)(&DAT_1811117e0 + (longlong)DAT_1811117f8 * 8));
    }
  }
  return (undefined *)0x0;
}



/* ===== 1803c5da0 FUN_1803c5da0 ===== */

undefined1 FUN_1803c5da0(void)

{
  FUN_180540530();
  return 1;
}



/* ===== 1803c5dc0 FUN_1803c5dc0 ===== */

undefined8 * FUN_1803c5dc0(longlong param_1,longlong param_2,ulonglong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float *pfVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  undefined1 local_78 [64];
  
  lVar6 = FUN_18000f3a0(param_1 + 0x1428);
  uVar7 = FUN_18000f3a0(param_1 + 0x1498);
  pfVar8 = (float *)FUN_1800111b0(local_78,param_1 + 0x14a0);
  fVar1 = *pfVar8;
  fVar2 = pfVar8[1];
  fVar3 = pfVar8[2];
  uVar5 = FUN_180011200();
  if ((lVar6 != 0) && (uVar5 < 0x401)) {
    fVar14 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
    if (fVar14 < 0.0) {
      fVar14 = (float)FUN_18051af10(fVar14);
    }
    else {
      fVar14 = SQRT(fVar14);
    }
    if (DAT_1808ac34c <= fVar14) {
      uVar10 = 0;
      if (DAT_180a2aa00 != param_1) {
        uVar10 = 0x10;
      }
      if (DAT_180a4ba20 == param_1) {
        uVar10 = 1;
      }
      if (DAT_180a6ca40 == param_1) {
        uVar10 = 2;
      }
      if (DAT_180a8da60 == param_1) {
        uVar10 = 3;
      }
      if (DAT_180aaea80 == param_1) {
        uVar10 = 4;
      }
      if (DAT_180acfaa0 == param_1) {
        uVar10 = 5;
      }
      if (DAT_180af0ac0 == param_1) {
        uVar10 = 6;
      }
      if (DAT_180b11ae0 == param_1) {
        uVar10 = 7;
      }
      if (DAT_180b32b00 == param_1) {
        uVar10 = 8;
      }
      if (DAT_180b53b20 == param_1) {
        uVar10 = 9;
      }
      if (DAT_180b74b40 == param_1) {
        uVar10 = 10;
      }
      if (DAT_180b95b60 == param_1) {
        uVar10 = 0xb;
      }
      if (DAT_180bb6b80 == param_1) {
        uVar10 = 0xc;
      }
      if (DAT_180bd7ba0 == param_1) {
        uVar10 = 0xd;
      }
      uVar11 = (ulonglong)uVar10;
      if (DAT_180bf8bc0 == param_1) {
        uVar11 = 0xe;
      }
      if (DAT_180c19be0 == param_1) {
        uVar11 = 0xf;
      }
      else if (uVar11 == 0x10) {
        uVar9 = 0;
        while( true ) {
          uVar10 = (int)DAT_181111828 + (int)uVar9 & 0xf;
          uVar11 = (ulonglong)uVar10;
          if (*(char *)(param_2 + uVar11) == '\0') break;
          uVar9 = uVar9 + 1;
          if (0xf < uVar9) {
            return (undefined8 *)0x0;
          }
        }
        DAT_181111828 = (ulonglong)(uVar10 + 1 & 0xf);
        (&DAT_180a2aa00)[uVar11 * 0x4204] = param_1;
        (&DAT_180a2aa0c)[uVar11 * 0x21020] = 0;
      }
      lVar13 = uVar11 * 0x21020;
      *param_3 = uVar11;
      if (((&DAT_180a2aa0c)[lVar13] != '\0') && (*(uint *)(&DAT_180a2aa08 + lVar13) == uVar5)) {
        return &DAT_180a2aa00 + uVar11 * 0x4204;
      }
      lVar12 = (longlong)(int)uVar5 * 0x1000;
      if (((((ulonglong)(lVar12 + -0xeff8 + lVar6) < 0x7ffffffeffff) &&
           ((ulonglong)(lVar6 + -0xdff9 + lVar12) < 0x7ffffffeffff)) && (0xffff < uVar7)) &&
         ((uVar7 < 0x7fffffffffff && (uVar7 + 0xffff < 0x7ffffffeffff)))) {
        (&DAT_180a2aa0c)[lVar13] = 0;
        cVar4 = FUN_1803c5da0(&DAT_180a2aa20 + lVar13,lVar12 + 0x1008 + lVar6,0x1000);
        if ((cVar4 != '\0') &&
           (cVar4 = FUN_1803c5da0(&DAT_180a2ba20 + lVar13,uVar7,0x20000), cVar4 != '\0')) {
          *(float *)(lVar13 + 0x180a2aa10) = fVar1;
          *(float *)(lVar13 + 0x180a2aa14) = fVar2;
          *(float *)(lVar13 + 0x180a2aa18) = fVar3;
          *(uint *)(&DAT_180a2aa08 + lVar13) = uVar5;
          (&DAT_180a2aa0c)[lVar13] = 1;
          return &DAT_180a2aa00 + uVar11 * 0x4204;
        }
      }
    }
  }
  return (undefined8 *)0x0;
}



/* ===== 1803c6100 FUN_1803c6100 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1803c6100(float *param_1,float *param_2,float *param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char *_Str1;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [24];
  float local_1c8;
  float local_1c4;
  float local_1c0;
  longlong local_1b8;
  int local_1b0;
  int local_1ac;
  float *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong local_188 [16];
  char local_108 [16];
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  iVar20 = 0;
  if (param_3 != (float *)0x0) {
    *param_3 = 0.0;
  }
  local_1a8 = param_3;
  FUN_1803a09f0(&local_1a0);
  iVar5 = FUN_1804e4d70(&DAT_180c3ac00);
  puVar11 = auStack_1e8;
  puVar12 = auStack_1e8;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_180c3ac4c == 0x7fffffff) {
    DAT_180c3ac4c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_108[0] = '\0';
  local_108[1] = '\0';
  local_108[2] = '\0';
  local_108[3] = '\0';
  local_108[4] = '\0';
  local_108[5] = '\0';
  local_108[6] = '\0';
  local_108[7] = '\0';
  local_108[8] = '\0';
  local_108[9] = '\0';
  local_108[10] = '\0';
  local_108[0xb] = '\0';
  local_108[0xc] = '\0';
  local_108[0xd] = '\0';
  local_108[0xe] = '\0';
  local_108[0xf] = '\0';
  local_188[0] = 0;
  local_188[1] = 0;
  local_188[2] = 0;
  local_188[3] = 0;
  local_188[4] = 0;
  local_188[5] = 0;
  local_188[6] = 0;
  local_188[7] = 0;
  local_188[8] = 0;
  local_188[9] = 0;
  local_188[10] = 0;
  local_188[0xb] = 0;
  local_188[0xc] = 0;
  local_188[0xd] = 0;
  local_188[0xe] = 0;
  local_188[0xf] = 0;
  uVar21 = 0;
  plVar9 = local_1a0;
  if (local_1a0 == local_198) {
LAB_1803c65c7:
    bVar10 = false;
  }
  else {
    do {
      if (0xf < uVar21) break;
      local_1b8 = *plVar9;
      _Str1 = (char *)FUN_1803a0710(&local_1b8);
      if ((_Str1 != (char *)0x0) && (iVar5 = strcmp(_Str1,"C_SmokeGrenadeProjectile"), iVar5 == 0))
      {
        local_1b8 = 0;
        lVar6 = FUN_1803c5dc0(*plVar9,local_108,&local_1b8);
        if ((lVar6 != 0) && (local_108[local_1b8] == '\0')) {
          local_108[local_1b8] = '\x01';
          local_188[uVar21] = lVar6;
          uVar21 = uVar21 + 1;
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != local_198);
    if (uVar21 == 0) goto LAB_1803c65c7;
    local_1c8 = *param_1;
    fVar29 = *param_2 - local_1c8;
    local_1c4 = param_1[1];
    fVar30 = param_2[1] - local_1c4;
    local_1c0 = param_1[2];
    fVar31 = param_2[2] - local_1c0;
    local_1b0 = 1;
    fVar25 = fVar30 * fVar30 + fVar29 * fVar29 + fVar31 * fVar31;
    if (fVar25 < 0.0) {
      fVar25 = (float)FUN_18051af10();
    }
    else {
      fVar25 = SQRT(fVar25);
    }
    fVar4 = DAT_1808ac950;
    fVar3 = DAT_1808ac918;
    fVar2 = DAT_1808ac1f4;
    local_1ac = (int)(fVar25 / DAT_1808ac864);
    piVar8 = &local_1b0;
    if (0 < local_1ac) {
      piVar8 = &local_1ac;
    }
    if (0x400 < local_1ac) {
      piVar8 = &DAT_1806bfc68;
    }
    iVar5 = *piVar8;
    iVar22 = 0;
    if (-1 < iVar5) {
      local_1b8 = CONCAT44(local_1b8._4_4_,(float)iVar5);
      fVar26 = local_1c8;
      fVar27 = local_1c4;
      fVar28 = local_1c0;
      fVar25 = (float)iVar5;
      do {
        fVar25 = (float)iVar22 / fVar25;
        uVar15 = 0;
        if (uVar21 != 0) {
          do {
            lVar6 = local_188[uVar15];
            fVar23 = (float)FUN_18053f0d0(((fVar26 + fVar29 * fVar25) - *(float *)(lVar6 + 0x10)) /
                                          fVar4 + fVar3 + fVar2);
            uVar14 = (uint)fVar23;
            fVar23 = (float)FUN_18053f0d0(((fVar27 + fVar30 * fVar25) - *(float *)(lVar6 + 0x14)) /
                                          fVar4 + fVar3 + fVar2);
            fVar24 = (float)FUN_18053f0d0(((fVar28 + fVar31 * fVar25) - *(float *)(lVar6 + 0x18)) /
                                          fVar4 + fVar3 + fVar2);
            if ((((((-1 < (int)uVar14) && (uVar19 = (uint)fVar23, -1 < (int)uVar19)) &&
                  (uVar18 = (uint)fVar24, -1 < (int)uVar18)) &&
                 (((int)uVar14 < 0x20 && ((int)uVar19 < 0x20)))) &&
                (((int)uVar18 < 0x20 &&
                 ((uVar7 = ((uVar14 & 0x3ff) << 0x10 | uVar14 & 0x3ff) & 0x30000ff,
                  uVar7 = (uVar7 << 8 | uVar7) & 0x300f00f,
                  uVar17 = (uVar7 << 4 | uVar7) & 0x30c30c3,
                  uVar7 = ((uVar19 & 0x3ff) << 0x10 | uVar19 & 0x3ff) & 0x30000ff,
                  uVar7 = (uVar7 << 8 | uVar7) & 0x300f00f,
                  uVar16 = (uVar7 << 4 | uVar7) & 0x30c30c3,
                  uVar7 = ((uVar18 & 0x3ff) << 0x10 | uVar18 & 0x3ff) & 0x30000ff,
                  uVar7 = (uVar7 << 8 | uVar7) & 0x300f00f, uVar7 = (uVar7 << 4 | uVar7) & 0x30c30c3
                  , uVar7 = (uVar17 * 4 | uVar17) & 0x9249249 |
                            ((uVar16 * 4 | uVar16) & 0x9249249) * 2 |
                            ((uVar7 * 4 | uVar7) & 0x9249249) << 2, uVar7 < 0x8000 &&
                  ((*(ulonglong *)(lVar6 + 0x20 + (ulonglong)(uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1
                   ) != 0)))))) &&
               (4 < *(byte *)(lVar6 + 0x1023 +
                             (longlong)(int)((uVar19 + uVar18 * 0x20) * 0x20 + uVar14) * 4))) {
              iVar20 = iVar20 + 1;
              break;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar21);
          fVar26 = local_1c8;
          fVar27 = local_1c4;
          fVar28 = local_1c0;
        }
        iVar22 = iVar22 + 1;
        fVar25 = (float)local_1b8;
      } while (iVar22 <= iVar5);
    }
    if (local_1a8 != (float *)0x0) {
      *local_1a8 = (float)iVar20 / (float)(iVar5 + 1);
    }
    bVar10 = 0 < iVar20;
  }
  FUN_1804e4e90(&DAT_180c3ac00);
  puVar13 = auStack_1e8;
  if (local_1a0 == (longlong *)0x0) goto LAB_1803c6626;
  plVar9 = local_1a0;
  if ((ulonglong)((local_190 - (longlong)local_1a0 >> 3) * 8) < 0x1000) {
LAB_1803c661b:
    puVar12 = puVar11;
  }
  else {
    plVar9 = (longlong *)local_1a0[-1];
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_1a0 + (-8 - (longlong)plVar9))) {
      plVar9 = (longlong *)&DAT_00000005;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar11 = auStack_1e0;
      goto LAB_1803c661b;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1803c6626;
  thunk_FUN_1803d64e0(plVar9);
  puVar13 = puVar12;
LAB_1803c6626:
  *(undefined8 *)(puVar13 + -8) = 0x1803c6635;
  return bVar10;
}



/* ===== 1803c66b0 FUN_1803c66b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1803c66b0(void)

{
  int iVar1;
  char **ppcVar2;
  char **ppcVar3;
  undefined1 auStack_368 [32];
  char *local_348;
  char *local_340;
  char *local_338;
  char *local_330;
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
  char *local_f8 [3];
  char *local_e0 [3];
  char *local_c8 [3];
  char *local_b0 [3];
  char *local_98 [3];
  char *local_80 [3];
  char *local_68 [3];
  char *local_50 [4];
  char *local_30;
  
  ppcVar3 = &local_268;
  local_30 = (char *)(DAT_180919500 ^ (ulonglong)auStack_368);
  if (DAT_1811089f0 == 0) {
    DAT_180cd1ac4 = 0;
  }
  else {
    ppcVar2 = &local_348;
    local_348 = "C_BaseEntity";
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_iHealth");
      if (iVar1 != 0) goto LAB_1803c677b;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_340);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_348,"m_iHealth");
    iVar1 = 0;
LAB_1803c677b:
    ppcVar2 = &local_340;
    local_340 = "C_BaseEntity";
    DAT_180ca09f0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_iTeamNum");
      if (iVar1 != 0) goto LAB_1803c67cb;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_338);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_340,"m_iTeamNum");
    iVar1 = 0;
LAB_1803c67cb:
    ppcVar2 = &local_338;
    local_338 = "C_BaseEntity";
    DAT_180ca09f4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_pGameSceneNode");
      if (iVar1 != 0) goto LAB_1803c681b;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_330);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_338,"m_pGameSceneNode");
    iVar1 = 0;
LAB_1803c681b:
    ppcVar2 = &local_330;
    local_330 = "C_BaseEntity";
    DAT_180ca09f8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecAbsVelocity");
      if (iVar1 != 0) goto LAB_1803c686b;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_328);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_330,"m_vecAbsVelocity");
    iVar1 = 0;
LAB_1803c686b:
    ppcVar2 = &local_328;
    local_328 = "C_BaseEntity";
    DAT_180ca0a1c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_fFlags");
      if (iVar1 != 0) goto LAB_1803c68bb;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_320);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_328,"m_fFlags");
    iVar1 = 0;
LAB_1803c68bb:
    ppcVar2 = &local_320;
    local_320 = "C_BaseEntity";
    DAT_180ca0a18 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nActualMoveType");
      if (iVar1 != 0) goto LAB_1803c690b;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_318);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_320,"m_nActualMoveType");
    iVar1 = 0;
LAB_1803c690b:
    ppcVar2 = &local_318;
    local_318 = "C_BaseEntity";
    DAT_180ca0a44 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flGravityScale");
      if (iVar1 != 0) goto LAB_1803c695b;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_310);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_318,"m_flGravityScale");
    iVar1 = 0;
LAB_1803c695b:
    local_310 = "CCSPlayerController";
    ppcVar2 = &local_310;
    DAT_180ca0a48 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_hPlayerPawn");
      if (iVar1 != 0) goto LAB_1803c69bb;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_308);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_310,"m_hPlayerPawn");
    iVar1 = 0;
LAB_1803c69bb:
    local_1a8 = "CBasePlayerController";
    ppcVar2 = &local_1a8;
    local_1a0 = "CCSPlayerController";
    DAT_180ca09fc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_hPawn");
      if (iVar1 != 0) goto LAB_1803c6a1f;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_198);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_1a8,"m_hPawn");
    iVar1 = 0;
LAB_1803c6a1f:
    ppcVar2 = &local_308;
    local_308 = "CCSPlayerController";
    DAT_180ca0a00 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_sSanitizedPlayerName");
      if (iVar1 != 0) goto LAB_1803c6a6b;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_300);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_308,"m_sSanitizedPlayerName");
    iVar1 = 0;
LAB_1803c6a6b:
    ppcVar2 = &local_198;
    local_198 = "CCSPlayerController";
    local_190 = "CBasePlayerController";
    DAT_180ca0a08 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bIsLocalPlayerController");
      if (iVar1 != 0) goto LAB_1803c6acf;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_188);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_198,"m_bIsLocalPlayerController");
    iVar1 = 0;
LAB_1803c6acf:
    local_188 = "C_BasePlayerPawn";
    local_180 = "C_CSPlayerPawn";
    ppcVar2 = &local_188;
    DAT_180ca0a04 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_pWeaponServices");
      if (iVar1 != 0) goto LAB_1803c6b3f;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_178);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_188,"m_pWeaponServices");
    iVar1 = 0;
LAB_1803c6b3f:
    ppcVar2 = &local_178;
    local_178 = "CPlayer_WeaponServices";
    local_170 = "CCSPlayer_WeaponServices";
    DAT_180ca0a0c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_hActiveWeapon");
      if (iVar1 != 0) goto LAB_1803c6baf;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_168);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_178,"m_hActiveWeapon");
    iVar1 = 0;
LAB_1803c6baf:
    local_160 = "C_CSPlayerPawnBase";
    ppcVar2 = &local_168;
    local_168 = "C_CSPlayerPawn";
    DAT_180ca0a10 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_ArmorValue");
      if (iVar1 != 0) goto LAB_1803c6c10;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_158);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_168,"m_ArmorValue");
    iVar1 = 0;
LAB_1803c6c10:
    ppcVar2 = &local_158;
    local_158 = "C_CSPlayerPawn";
    local_150 = "C_CSPlayerPawnBase";
    DAT_180ca0a14 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_angEyeAngles");
      if (iVar1 != 0) goto LAB_1803c6c6f;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_148);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_158,"m_angEyeAngles");
    iVar1 = 0;
LAB_1803c6c6f:
    ppcVar2 = &local_148;
    local_148 = "C_CSPlayerPawn";
    local_140 = "C_CSPlayerPawnBase";
    DAT_180ca0a20 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_entitySpottedState");
      if (iVar1 != 0) goto LAB_1803c6ccf;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_138);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_148,"m_entitySpottedState");
    iVar1 = 0;
LAB_1803c6ccf:
    ppcVar2 = &local_138;
    local_138 = "C_CSPlayerPawn";
    local_130 = "C_CSPlayerPawnBase";
    DAT_180ca0a24 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bIsScoped");
      if (iVar1 != 0) goto LAB_1803c6d2f;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_128);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_138,"m_bIsScoped");
    iVar1 = 0;
LAB_1803c6d2f:
    ppcVar2 = &local_128;
    local_128 = "C_CSPlayerPawn";
    local_120 = "C_CSPlayerPawnBase";
    DAT_180ca0a28 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_iShotsFired");
      if (iVar1 != 0) goto LAB_1803c6d8f;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_118);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_128,"m_iShotsFired");
    iVar1 = 0;
LAB_1803c6d8f:
    local_f8[0] = "C_BaseModelEntity";
    ppcVar2 = local_f8;
    local_f8[1] = "C_BaseEntity";
    local_f8[2] = "C_BasePlayerPawn";
    DAT_180ca0a2c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecViewOffset");
      if (iVar1 != 0) goto LAB_1803c6dff;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != local_f8 + 3);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_f8[0],"m_vecViewOffset");
    iVar1 = 0;
LAB_1803c6dff:
    ppcVar2 = local_f8 + 3;
    local_e0[0] = "C_CSPlayerPawnBase";
    local_e0[1] = "C_CSPlayerPawn";
    local_e0[2] = "C_BasePlayerPawn";
    DAT_180ca0a34 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_iIDEntIndex");
      if (iVar1 != 0) goto LAB_1803c6e60;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != local_f8 + 6);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_e0[0],"m_iIDEntIndex");
    iVar1 = 0;
LAB_1803c6e60:
    ppcVar2 = local_f8 + 0x15;
    local_50[0] = "C_BaseEntity";
    local_50[1] = "C_BaseModelEntity";
    local_50[2] = "C_CSPlayerPawn";
    local_50[3] = "C_CSPlayerPawnBase";
    _DAT_180ca0a38 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_pCollision");
      if (iVar1 != 0) goto LAB_1803c6ecf;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != local_f8 + 0x19);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_50[0],"m_pCollision");
    iVar1 = 0;
LAB_1803c6ecf:
    ppcVar2 = local_f8 + 6;
    local_c8[0] = "C_CSPlayerPawn";
    local_c8[1] = "C_CSPlayerPawnBase";
    local_c8[2] = "C_BasePlayerPawn";
    DAT_180ca0a3c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_pAimPunchServices");
      if (iVar1 != 0) goto LAB_1803c6f30;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != local_f8 + 9);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_c8[0],"m_pAimPunchServices");
    iVar1 = 0;
LAB_1803c6f30:
    local_300 = "CCollisionProperty";
    ppcVar2 = &local_300;
    DAT_180ca0a40 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecMins");
      if (iVar1 != 0) goto LAB_1803c6f8b;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_2f8);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_300,"m_vecMins");
    iVar1 = 0;
LAB_1803c6f8b:
    ppcVar2 = &local_2f8;
    local_2f8 = "CCollisionProperty";
    DAT_180ca09b0._0_4_ = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecMaxs");
      if (iVar1 != 0) goto LAB_1803c6fdb;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_2f0);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_2f8,"m_vecMaxs");
    iVar1 = 0;
LAB_1803c6fdb:
    ppcVar2 = &local_2f0;
    local_2f0 = "CBasePlayerController";
    DAT_180ca09b0._4_4_ = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nTickBase");
      if (iVar1 != 0) goto LAB_1803c702a;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_2e8);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_2f0,"m_nTickBase");
    iVar1 = 0;
LAB_1803c702a:
    ppcVar2 = &local_2e8;
    local_2e8 = "C_BaseEntity";
    DAT_180ca09b8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecVelocity");
      if (iVar1 != 0) goto LAB_1803c7079;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_2e0);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_2e8,"m_vecVelocity");
    iVar1 = 0;
LAB_1803c7079:
    ppcVar2 = &local_2e0;
    local_2e0 = "C_BaseEntity";
    DAT_180ca09bc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecAbsVelocity");
      if (iVar1 != 0) goto LAB_1803c70c9;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_2d8);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_2e0,"m_vecAbsVelocity");
    iVar1 = 0;
LAB_1803c70c9:
    ppcVar2 = &local_2d8;
    local_2d8 = "C_BaseEntity";
    DAT_180ca09c0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecBaseVelocity");
      if (iVar1 != 0) goto LAB_1803c7119;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_2d0);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_2d8,"m_vecBaseVelocity");
    iVar1 = 0;
LAB_1803c7119:
    ppcVar2 = &local_2d0;
    local_2d0 = "C_BaseEntity";
    _DAT_180ca09c4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_hGroundEntity");
      if (iVar1 != 0) goto LAB_1803c7169;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_2c8);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_2d0,"m_hGroundEntity");
    iVar1 = 0;
LAB_1803c7169:
    ppcVar2 = &local_2c8;
    local_2c8 = "C_BaseEntity";
    _DAT_180ca09c8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flSimulationTime");
      if (iVar1 != 0) goto LAB_1803c71b9;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_2c0);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_2c8,"m_flSimulationTime");
    iVar1 = 0;
LAB_1803c71b9:
    ppcVar2 = &local_2c0;
    local_2c0 = "C_BaseEntity";
    DAT_180ca09cc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nSimulationTick");
      if (iVar1 != 0) goto LAB_1803c7209;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_2b8);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_2c0,"m_nSimulationTick");
    iVar1 = 0;
LAB_1803c7209:
    local_2b8 = "CGameSceneNode";
    ppcVar2 = &local_2b8;
    _DAT_180ca09d0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecOrigin");
      if (iVar1 != 0) goto LAB_1803c7259;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_2b0);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_2b8,"m_vecOrigin");
    iVar1 = 0;
LAB_1803c7259:
    local_2b0 = "CCSPlayer_MovementServices";
    ppcVar2 = &local_2b0;
    DAT_180ca09d4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flStamina");
      if (iVar1 != 0) goto LAB_1803c72a9;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_2a8);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_2b0,"m_flStamina");
    iVar1 = 0;
LAB_1803c72a9:
    ppcVar2 = &local_2a8;
    local_2a8 = "CCSPlayer_MovementServices";
    _DAT_180ca09d8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bDucked");
      if (iVar1 != 0) goto LAB_1803c72f9;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_2a0);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_2a8,"m_bDucked");
    iVar1 = 0;
LAB_1803c72f9:
    ppcVar2 = &local_2a0;
    local_2a0 = "CCSPlayer_MovementServices";
    _DAT_180ca09dc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bDucking");
      if (iVar1 != 0) goto LAB_1803c7349;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_298);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_2a0,"m_bDucking");
    iVar1 = 0;
LAB_1803c7349:
    ppcVar2 = &local_298;
    local_298 = "CCSPlayer_MovementServices";
    _DAT_180ca09e0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flDuckAmount");
      if (iVar1 != 0) goto LAB_1803c7399;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_290);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_298,"m_flDuckAmount");
    iVar1 = 0;
LAB_1803c7399:
    ppcVar2 = &local_118;
    local_118 = "C_BasePlayerPawn";
    local_110 = "C_CSPlayerPawn";
    _DAT_180ca09e4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_pMovementServices");
      if (iVar1 != 0) goto LAB_1803c73ff;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_108);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_118,"m_pMovementServices");
    iVar1 = 0;
LAB_1803c73ff:
    ppcVar2 = &local_290;
    local_290 = "CCSPlayer_MovementServices";
    DAT_180ca0970 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_ModernJump");
      if (iVar1 != 0) goto LAB_1803c7449;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_288);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_290,"m_ModernJump");
    iVar1 = 0;
LAB_1803c7449:
    local_288 = "CCSPlayerModernJump";
    ppcVar2 = &local_288;
    DAT_180ca0974 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flLastLandedFrac");
      if (iVar1 != 0) goto LAB_1803c7499;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_280);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_288,"m_flLastLandedFrac");
    iVar1 = 0;
LAB_1803c7499:
    ppcVar2 = &local_280;
    local_280 = "CCSPlayerModernJump";
    DAT_180ca0978 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nLastLandedTick");
      if (iVar1 != 0) goto LAB_1803c74e9;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_278);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_280,"m_nLastLandedTick");
    iVar1 = 0;
LAB_1803c74e9:
    ppcVar2 = &local_278;
    local_278 = "CCSPlayerModernJump";
    DAT_180ca097c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nLastActualJumpPressTick");
      if (iVar1 != 0) goto LAB_1803c7539;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_270);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_278,"m_nLastActualJumpPressTick");
    iVar1 = 0;
LAB_1803c7539:
    ppcVar2 = &local_270;
    local_270 = "CCSPlayerModernJump";
    _DAT_180ca0980 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flLastActualJumpPressFrac");
      if (iVar1 != 0) goto LAB_1803c7589;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != ppcVar3);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_270,"m_flLastActualJumpPressFrac")
    ;
    iVar1 = 0;
LAB_1803c7589:
    local_268 = "CCSPlayerModernJump";
    _DAT_180ca0984 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_nLastUsableJumpPressTick");
      if (iVar1 != 0) goto LAB_1803c75d9;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_260);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_268,"m_nLastUsableJumpPressTick");
    iVar1 = 0;
LAB_1803c75d9:
    ppcVar3 = &local_260;
    local_260 = "CCSPlayerModernJump";
    _DAT_180ca0988 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flLastUsableJumpPressFrac");
      if (iVar1 != 0) goto LAB_1803c7629;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_258);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_260,"m_flLastUsableJumpPressFrac")
    ;
    iVar1 = 0;
LAB_1803c7629:
    local_b0[0] = "CPlayer_MovementServices";
    local_b0[2] = "CPlayer_MovementServices_Humanoid";
    ppcVar3 = local_f8 + 9;
    local_b0[1] = "CCSPlayer_MovementServices";
    _DAT_180ca098c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_nButtons");
      if (iVar1 != 0) goto LAB_1803c769f;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != local_f8 + 0xc);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_b0[0],"m_nButtons");
    iVar1 = 0;
LAB_1803c769f:
    local_258 = "C_BaseModelEntity";
    ppcVar3 = &local_258;
    DAT_180ca0990 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_Glow");
      if (iVar1 != 0) goto LAB_1803c76f9;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_250);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_258,"m_Glow");
    iVar1 = 0;
LAB_1803c76f9:
    ppcVar3 = &local_250;
    local_250 = "CGlowProperty";
    DAT_180961930 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_glowColorOverride");
      if (iVar1 != 0) goto LAB_1803c7749;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_248);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_250,"m_glowColorOverride");
    iVar1 = 0;
LAB_1803c7749:
    ppcVar3 = &local_248;
    local_248 = "CGameSceneNode";
    _DAT_180961934 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_vecAbsOrigin");
      if (iVar1 != 0) goto LAB_1803c7799;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_240);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_248,"m_vecAbsOrigin");
    iVar1 = 0;
LAB_1803c7799:
    ppcVar3 = &local_240;
    local_240 = "CGameSceneNode";
    DAT_180ca0950 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_nodeToWorld");
      if (iVar1 != 0) goto LAB_1803c77e9;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_238);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_240,"m_nodeToWorld");
    iVar1 = 0;
LAB_1803c77e9:
    ppcVar3 = &local_238;
    local_238 = "CGameSceneNode";
    DAT_180ca0954 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flAbsScale");
      if (iVar1 != 0) goto LAB_1803c7839;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_230);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_238,"m_flAbsScale");
    iVar1 = 0;
LAB_1803c7839:
    ppcVar3 = &local_230;
    local_230 = "CGameSceneNode";
    _DAT_180ca0958 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_pParent");
      if (iVar1 != 0) goto LAB_1803c7889;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_228);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_230,"m_pParent");
    iVar1 = 0;
LAB_1803c7889:
    local_228 = "CGameSceneNode";
    ppcVar3 = &local_228;
    DAT_180ca095c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_pOwner");
      if (iVar1 != 0) goto LAB_1803c78d9;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_220);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_228,"m_pOwner");
    iVar1 = 0;
LAB_1803c78d9:
    ppcVar3 = &local_220;
    local_220 = "CSkeletonInstance";
    DAT_180ca0960 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_modelState");
      if (iVar1 != 0) goto LAB_1803c7929;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_218);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_220,"m_modelState");
    iVar1 = 0;
LAB_1803c7929:
    local_218 = "C_BasePlayerWeapon";
    ppcVar3 = &local_218;
    DAT_180ca0968 = 0x80;
    DAT_180ca096c = 0x8c;
    DAT_180ca0964 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_iClip1");
      if (iVar1 != 0) goto LAB_1803c7999;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_210);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_218,"m_iClip1");
    iVar1 = 0;
LAB_1803c7999:
    ppcVar3 = &local_210;
    local_210 = "C_BasePlayerWeapon";
    DAT_180961990 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_pReserveAmmo");
      if (iVar1 != 0) goto LAB_1803c79e9;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_208);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_210,"m_pReserveAmmo");
    iVar1 = 0;
LAB_1803c79e9:
    ppcVar3 = &local_208;
    local_208 = "C_BasePlayerWeapon";
    DAT_180961994 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_nNextPrimaryAttackTick");
      if (iVar1 != 0) goto LAB_1803c7a39;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_200);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_208,"m_nNextPrimaryAttackTick");
    iVar1 = 0;
LAB_1803c7a39:
    ppcVar3 = &local_200;
    local_200 = "C_EconItemView";
    DAT_18096199c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_iItemDefinitionIndex");
      if (iVar1 != 0) goto LAB_1803c7a89;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_1f8);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_200,"m_iItemDefinitionIndex");
    iVar1 = 0;
LAB_1803c7a89:
    ppcVar3 = &local_1f8;
    local_1f8 = "C_BaseEntity";
    DAT_180961998 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_nSubclassID");
      if (iVar1 != 0) goto LAB_1803c7ad9;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_1f0);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_1f8,"m_nSubclassID");
    iVar1 = 0;
LAB_1803c7ad9:
    ppcVar3 = &local_1f0;
    local_1f0 = "C_EconEntity";
    DAT_1809619a0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_AttributeManager");
      if (iVar1 != 0) goto LAB_1803c7b2c;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_1e8);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_1f0,"m_AttributeManager");
    iVar1 = 0;
LAB_1803c7b2c:
    ppcVar3 = &local_1e8;
    local_1e8 = "C_AttributeContainer";
    DAT_1809619a4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_Item");
      if (iVar1 != 0) goto LAB_1803c7b8f;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_1e0);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_1e8,"m_Item");
    iVar1 = 0;
LAB_1803c7b8f:
    local_1e0 = "C_CSWeaponBase";
    ppcVar3 = &local_1e0;
    DAT_1809619a8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flRecoilIndex");
      if (iVar1 != 0) goto LAB_1803c7bef;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_1d8);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_1e0,"m_flRecoilIndex");
    iVar1 = 0;
LAB_1803c7bef:
    ppcVar3 = &local_1d8;
    local_1d8 = "C_CSWeaponBase";
    DAT_1809619ac = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flTurningInaccuracyDelta");
      if (iVar1 != 0) goto LAB_1803c7c4f;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_1d0);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_1d8,"m_flTurningInaccuracyDelta");
    iVar1 = 0;
LAB_1803c7c4f:
    local_1d0 = "CCSWeaponBaseVData";
    ppcVar3 = &local_1d0;
    DAT_1809619b0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_nNumBullets");
      if (iVar1 != 0) goto LAB_1803c7caf;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_1c8);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_1d0,"m_nNumBullets");
    iVar1 = 0;
LAB_1803c7caf:
    ppcVar3 = &local_1c8;
    local_1c8 = "C_CSWeaponBaseGun";
    DAT_1809619b4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_zoomLevel");
      if (iVar1 != 0) goto LAB_1803c7d0f;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_1c0);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_1c8,"m_zoomLevel");
    iVar1 = 0;
LAB_1803c7d0f:
    local_1c0 = "CCSWeaponBaseVData";
    ppcVar3 = &local_1c0;
    DAT_1809619b8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flMaxSpeed");
      if (iVar1 != 0) goto LAB_1803c7d6f;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_1b8);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_1c0,"m_flMaxSpeed");
    iVar1 = 0;
LAB_1803c7d6f:
    ppcVar3 = local_f8 + 0xc;
    local_98[0] = "CPlayer_MovementServices";
    local_98[1] = "CCSPlayer_MovementServices";
    local_98[2] = "CPlayer_MovementServices_Humanoid";
    DAT_1809619bc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flCmdForwardMove");
      if (iVar1 != 0) goto LAB_1803c7dd0;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != local_f8 + 0xf);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_98[0],"m_flCmdForwardMove");
    iVar1 = 0;
LAB_1803c7dd0:
    ppcVar3 = local_f8 + 0xf;
    local_80[0] = "CPlayer_MovementServices";
    local_80[1] = "CCSPlayer_MovementServices";
    local_80[2] = "CPlayer_MovementServices_Humanoid";
    DAT_180ca0994 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flCmdLeftMove");
      if (iVar1 != 0) goto LAB_1803c7e3f;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != local_f8 + 0x12);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_80[0],"m_flCmdLeftMove");
    iVar1 = 0;
LAB_1803c7e3f:
    local_68[0] = "CPlayer_MovementServices";
    ppcVar3 = local_f8 + 0x12;
    local_68[1] = "CCSPlayer_MovementServices";
    local_68[2] = "CPlayer_MovementServices_Humanoid";
    DAT_180ca0998 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flMaxspeed");
      if (iVar1 != 0) goto LAB_1803c7eaf;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != local_f8 + 0x15);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_68[0],"m_flMaxspeed");
    iVar1 = 0;
LAB_1803c7eaf:
    ppcVar3 = &local_1b8;
    local_1b8 = "CCSPlayer_MovementServices";
    DAT_180ca099c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flStamina");
      if (iVar1 != 0) goto LAB_1803c7f0f;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_1b0);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_1b8,"m_flStamina");
    iVar1 = 0;
LAB_1803c7f0f:
    local_108 = "CPlayer_MovementServices_Humanoid";
    ppcVar3 = &local_108;
    local_100 = "CCSPlayer_MovementServices";
    DAT_180ca09a0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flSurfaceFriction");
      if (iVar1 != 0) goto LAB_1803c7f7f;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != local_f8);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_108,"m_flSurfaceFriction");
    iVar1 = 0;
LAB_1803c7f7f:
    local_1b0 = "CCSPlayer_MovementServices";
    ppcVar3 = &local_1b0;
    DAT_180ca09a4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flDuckAmount");
      if (iVar1 != 0) goto LAB_1803c7fdf;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_1a8);
    FUN_1802b2560("[error] schema field not found | %s::%s",local_1b0,"m_flDuckAmount");
    iVar1 = 0;
LAB_1803c7fdf:
    DAT_180ca09a8 = iVar1;
    if ((((DAT_180ca09f0 == 0) || (DAT_180ca09f4 == 0)) || (DAT_180ca09f8 == 0)) ||
       ((DAT_180ca09fc == 0 || (DAT_180ca0950 == 0)))) {
      DAT_180cd1ac4 = 0;
    }
    else {
      DAT_180cd1ac4 = 1;
    }
  }
  return DAT_180cd1ac4;
}



/* ===== 1803c8040 FUN_1803c8040 ===== */

char * FUN_1803c8040(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  short *BaseAddress;
  BOOLEAN BVar3;
  PRUNTIME_FUNCTION p_Var4;
  longlong lVar5;
  short *local_res10;
  
  BaseAddress = DAT_181111838;
  local_res10 = (short *)0x0;
  p_Var4 = RtlLookupFunctionEntry(0x1803c8040,(PDWORD64)&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if ((p_Var4 != (PRUNTIME_FUNCTION)0x0) && (local_res10 == BaseAddress)) {
    *param_1 = "registered by the loader";
    return "e";
  }
  if ((*BaseAddress != 0x5a4d) ||
     (lVar5 = (longlong)*(int *)(BaseAddress + 0x1e),
     *(int *)(lVar5 + (longlong)BaseAddress) != 0x4550)) {
    *param_1 = "no unwind table registered and the headers are gone";
    return "ve";
  }
  uVar1 = *(uint *)(lVar5 + 0xa0 + (longlong)BaseAddress);
  if ((uVar1 == 0) || (uVar2 = *(uint *)(lVar5 + 0xa4 + (longlong)BaseAddress), uVar2 == 0)) {
    *param_1 = "the module has no unwind table";
    return "ve";
  }
  p_Var4 = (PRUNTIME_FUNCTION)((longlong)BaseAddress + (ulonglong)uVar1);
  BVar3 = RtlAddFunctionTable(p_Var4,uVar2 / 0xc,(DWORD64)BaseAddress);
  if (BVar3 == '\0') {
    *param_1 = "RtlAddFunctionTable failed";
    return "ve";
  }
  DAT_181111830 = p_Var4;
  *param_1 = "registered by neverlose";
  return "e";
}



/* ===== 1803c8170 FUN_1803c8170 ===== */

void FUN_1803c8170(LPCSTR param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001803c8182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MessageBoxA((HWND)0x0,param_1,"neverlose",0x10);
  return;
}



/* ===== 1803c8190 FUN_1803c8190 ===== */

int FUN_1803c8190(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    cVar1 = FUN_1803c81f0();
    if (cVar1 != '\0') goto LAB_1803c81bc;
    Sleep(100);
    iVar2 = iVar2 + 100;
  } while (iVar2 < 10000);
  FUN_1803c81f0();
LAB_1803c81bc:
  iVar2 = 0;
  do {
    if (DAT_180cd0250 == 0) {
      return 0;
    }
    Sleep(100);
    iVar2 = iVar2 + 100;
  } while (iVar2 < 10000);
  return DAT_180cd0250;
}



/* ===== 1803c81f0 FUN_1803c81f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1803c81f0(void)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [32];
  undefined8 ****local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  puVar2 = PTR_DAT_1809f3760;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_20 = 0;
  sVar4 = strlen(PTR_DAT_1809f3760);
  FUN_1800133a0(&local_38,puVar2,sVar4);
  uVar10 = local_20;
  uVar8 = local_28;
  ppppuVar9 = local_38;
  if (DAT_180ccfeda == '\0') {
    ppppuVar7 = &local_38;
    if (0xf < local_20) {
      ppppuVar7 = local_38;
    }
    if (local_28 != 4) {
LAB_1803c828e:
      ppppuVar7 = &local_38;
      if (0xf < uVar10) {
        ppppuVar7 = ppppuVar9;
      }
      if (8 < uVar8) {
        lVar5 = thunk_FUN_1804e92d0(ppppuVar7,uVar8 + (longlong)ppppuVar7,"not found",9);
        if ((lVar5 != uVar8 + (longlong)ppppuVar7) && (lVar5 - (longlong)ppppuVar7 != -1))
        goto LAB_1803c8326;
        ppppuVar9 = local_38;
        uVar8 = local_28;
        uVar10 = local_20;
      }
      ppppuVar7 = &local_38;
      if (0xf < uVar10) {
        ppppuVar7 = ppppuVar9;
      }
      if (3 < uVar8) {
        lVar5 = thunk_FUN_1804e92d0(ppppuVar7,uVar8 + (longlong)ppppuVar7,&DAT_1808a0c54,4);
        if ((lVar5 != uVar8 + (longlong)ppppuVar7) && (lVar5 - (longlong)ppppuVar7 != -1))
        goto LAB_1803c8326;
        ppppuVar9 = local_38;
        uVar10 = local_20;
      }
      uVar6 = 0;
      goto LAB_1803c8333;
    }
    iVar3 = memcmp(ppppuVar7,&DAT_180700ea0,4);
    if (iVar3 != 0) goto LAB_1803c828e;
  }
  else {
LAB_1803c8326:
    ppppuVar9 = local_38;
    uVar10 = local_20;
  }
  uVar6 = 1;
LAB_1803c8333:
  if (0xf < uVar10) {
    uVar8 = uVar10 + 1;
    ppppuVar7 = ppppuVar9;
    if (0xfff < uVar8) {
      ppppuVar7 = (undefined8 ****)ppppuVar9[-1];
      if (0x1f < (ulonglong)((longlong)ppppuVar9 + (-8 - (longlong)ppppuVar7))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      uVar8 = uVar10 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar7,uVar8);
  }
  return uVar6;
}



/* ===== 1803c83a0 FUN_1803c83a0 ===== */

void FUN_1803c83a0(void)

{
  HMODULE pHVar1;
  undefined4 *puVar2;
  SIZE_T SVar3;
  LPTHREAD_START_ROUTINE lpStartAddress;
  undefined8 uVar4;
  HANDLE pvVar5;
  undefined4 local_res8;
  undefined1 local_resc [4];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  
  pHVar1 = DAT_181111838;
  FUN_1800e89a0(local_38);
  FUN_1803c8660(local_res10,local_38);
  FUN_1803c8660(local_res20,local_38);
  FUN_1803c8660(local_res18,local_38);
  FUN_1801a6890(local_68,local_res10,local_res18);
  local_res8 = 0x28ec8348;
  puVar2 = (undefined4 *)FUN_1801a6890(local_48,&local_res8,local_resc);
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  FUN_1803c8640(local_res10,&local_58);
  local_res8 = CONCAT31(local_res8._1_3_,0xb9);
  puVar2 = (undefined4 *)FUN_1801a6890(local_48,&local_res8,(longlong)&local_res8 + 1);
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  FUN_1803c8640(local_res10,&local_58);
  FUN_1803c8670(local_res20,0x5dc);
  FUN_1803c8720(local_68,Sleep_exref);
  local_res8._0_2_ = 0xb948;
  puVar2 = (undefined4 *)FUN_1801a6890(local_48,&local_res8,(longlong)&local_res8 + 2);
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  FUN_1803c8640(local_res10,&local_58);
  FUN_1803c86c0(local_res18,pHVar1);
  FUN_1803c8720(local_68,FreeLibrary_exref);
  local_res8._0_2_ = 0xb948;
  puVar2 = (undefined4 *)FUN_1801a6890(local_48,&local_res8,(longlong)&local_res8 + 2);
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  FUN_1803c8640(local_res10,&local_58);
  FUN_1803c86c0(local_res18,pHVar1);
  local_res8._0_2_ = 0xd231;
  puVar2 = (undefined4 *)FUN_1801a6890(local_48,&local_res8,(longlong)&local_res8 + 2);
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  FUN_1803c8640(local_res10,&local_58);
  local_res8._0_2_ = 0xb841;
  puVar2 = (undefined4 *)FUN_1801a6890(local_48,&local_res8,(longlong)&local_res8 + 2);
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  FUN_1803c8640(local_res10,&local_58);
  FUN_1803c8670(local_res20,0x8000);
  FUN_1803c8720(local_68,VirtualFree_exref);
  local_res8 = CONCAT22(local_res8._2_2_,0xc931);
  puVar2 = (undefined4 *)FUN_1801a6890(local_48,&local_res8,(longlong)&local_res8 + 2);
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  FUN_1803c8640(local_res10,&local_58);
  FUN_1803c8720(local_68,ExitThread_exref);
  SVar3 = FUN_180081480();
  lpStartAddress = VirtualAlloc((LPVOID)0x0,SVar3,0x3000,0x40);
  if (lpStartAddress != (LPTHREAD_START_ROUTINE)0x0) {
    FUN_180081480(local_38);
    uVar4 = FUN_1800950b0(local_38);
    FUN_180540530(lpStartAddress,uVar4);
    SVar3 = FUN_180081480(local_38);
    pvVar5 = GetCurrentProcess();
    FlushInstructionCache(pvVar5,lpStartAddress,SVar3);
    pvVar5 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,lpStartAddress,(LPVOID)0x0,0,(LPDWORD)0x0);
    if (pvVar5 != (HANDLE)0x0) {
      CloseHandle(pvVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  FreeLibraryAndExitThread(DAT_181111838,0);
}



/* ===== 1803c8640 FUN_1803c8640 ===== */

void FUN_1803c8640(longlong *param_1,longlong *param_2)

{
  FUN_180211af0(*param_1,*(undefined8 *)(*param_1 + 8),*param_2,param_2[1] - *param_2);
  return;
}



