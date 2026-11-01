/* ===== 180289860 FUN_180289860 ===== */

void FUN_180289860(longlong param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar9 = (longlong)(param_3 - 1) >> 1;
  lVar6 = param_2;
  lVar4 = param_2;
  if (param_2 < lVar9) {
    do {
      iVar1 = *(int *)(param_1 + 8 + lVar6 * 8);
      uVar8 = (ulonglong)*(uint *)(param_1 + 4 + lVar6 * 8);
      lVar4 = FUN_180280d30(iVar1);
      iVar7 = (int)uVar8;
      lVar5 = FUN_180280d30(uVar8 & 0xffffffff);
      if ((lVar4 == 0) || (lVar5 == 0)) {
        bVar3 = iVar1 < iVar7;
      }
      else {
        bVar2 = FUN_180023470(lVar4 + 0x28,lVar5 + 0x28);
        bVar3 = (bool)(bVar2 >> 7);
      }
      lVar4 = lVar6 * 2 + 1 + (ulonglong)(bVar3 ^ 1);
      *(undefined4 *)(param_1 + lVar6 * 4) = *(undefined4 *)(param_1 + lVar4 * 4);
      lVar6 = lVar4;
    } while (lVar4 < lVar9);
  }
  if ((lVar4 == lVar9) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + lVar4 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar4 = param_3 - 1;
  }
  if (lVar4 <= param_2) {
    *(int *)(param_1 + lVar4 * 4) = *param_4;
    return;
  }
  iVar1 = *param_4;
  do {
    lVar5 = lVar4 + -1 >> 1;
    iVar7 = *(int *)(param_1 + lVar5 * 4);
    lVar6 = FUN_180280d30(iVar7);
    lVar9 = FUN_180280d30(iVar1);
    if ((lVar6 == 0) || (lVar9 == 0)) {
      bVar3 = iVar7 < iVar1;
    }
    else {
      bVar2 = FUN_180023470(lVar6 + 0x28,lVar9 + 0x28);
      bVar3 = (bool)(bVar2 >> 7);
    }
    if (bVar3 == false) break;
    *(int *)(param_1 + lVar4 * 4) = iVar7;
    lVar4 = lVar5;
  } while (param_2 < lVar5);
  *(int *)(param_1 + lVar4 * 4) = iVar1;
  return;
}



/* ===== 1802899b0 FUN_1802899b0 ===== */

void FUN_1802899b0(ulonglong *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *local_res18;
  int *local_58;
  
  piVar8 = param_3 + 1;
  if (param_2 < param_3) {
    while( true ) {
      iVar1 = param_3[-1];
      piVar10 = param_3 + -1;
      iVar2 = *param_3;
      lVar5 = FUN_180280d30(iVar1);
      lVar6 = FUN_180280d30(iVar2);
      if ((lVar5 == 0) || (lVar6 == 0)) {
        bVar4 = iVar1 < iVar2;
      }
      else {
        bVar3 = FUN_180023470(lVar5 + 0x28,lVar6 + 0x28);
        bVar4 = (bool)(bVar3 >> 7);
      }
      if (bVar4 != false) break;
      if ((lVar6 == 0) || (lVar5 == 0)) {
        bVar4 = iVar2 < iVar1;
      }
      else {
        bVar3 = FUN_180023470(lVar6 + 0x28,lVar5 + 0x28);
        bVar4 = (bool)(bVar3 >> 7);
      }
      if ((bVar4 != false) || (param_3 = piVar10, piVar10 <= param_2)) break;
    }
  }
  if (piVar8 < param_4) {
    iVar1 = *param_3;
    while( true ) {
      iVar2 = *piVar8;
      lVar5 = FUN_180280d30(iVar2);
      lVar6 = FUN_180280d30(iVar1);
      if ((lVar5 == 0) || (lVar6 == 0)) {
        bVar4 = iVar2 < iVar1;
      }
      else {
        bVar3 = FUN_180023470(lVar5 + 0x28,lVar6 + 0x28);
        bVar4 = (bool)(bVar3 >> 7);
      }
      if (bVar4 != false) break;
      if ((lVar6 == 0) || (lVar5 == 0)) {
        bVar4 = iVar1 < iVar2;
      }
      else {
        bVar3 = FUN_180023470(lVar6 + 0x28,lVar5 + 0x28);
        bVar4 = (bool)(bVar3 >> 7);
      }
      if ((bVar4 != false) || (piVar8 = piVar8 + 1, param_4 <= piVar8)) break;
    }
  }
  piVar9 = piVar8;
  piVar10 = param_3;
  local_res18 = param_3;
  local_58 = piVar8;
  do {
    piVar11 = piVar10;
    if (piVar9 < param_4) {
      do {
        iVar1 = *param_3;
        iVar2 = *piVar9;
        lVar5 = FUN_180280d30(iVar1);
        lVar6 = FUN_180280d30(iVar2);
        if ((lVar5 == 0) || (lVar6 == 0)) {
          bVar4 = iVar1 < iVar2;
        }
        else {
          bVar3 = FUN_180023470(lVar5 + 0x28,lVar6 + 0x28);
          bVar4 = (bool)(bVar3 >> 7);
        }
        if (bVar4 == false) {
          if ((lVar6 == 0) || (lVar5 == 0)) {
            bVar4 = iVar2 < iVar1;
          }
          else {
            bVar3 = FUN_180023470(lVar6 + 0x28,lVar5 + 0x28);
            bVar4 = (bool)(bVar3 >> 7);
          }
          if (bVar4 != false) break;
          if (piVar8 != piVar9) {
            iVar1 = *piVar8;
            *piVar8 = iVar2;
            *piVar9 = iVar1;
          }
          piVar8 = piVar8 + 1;
        }
        piVar9 = piVar9 + 1;
      } while (piVar9 < param_4);
      piVar11 = local_res18;
      local_58 = piVar9;
    }
    if (param_2 < piVar11) {
      do {
        iVar1 = piVar11[-1];
        piVar10 = piVar11 + -1;
        iVar2 = *param_3;
        lVar5 = FUN_180280d30(iVar1);
        lVar6 = FUN_180280d30(iVar2);
        if ((lVar5 == 0) || (lVar6 == 0)) {
          bVar4 = iVar1 < iVar2;
        }
        else {
          bVar3 = FUN_180023470(lVar5 + 0x28,lVar6 + 0x28);
          bVar4 = (bool)(bVar3 >> 7);
        }
        if (bVar4 == false) {
          if ((lVar6 == 0) || (lVar5 == 0)) {
            bVar4 = iVar2 < iVar1;
          }
          else {
            bVar3 = FUN_180023470(lVar6 + 0x28,lVar5 + 0x28);
            bVar4 = (bool)(bVar3 >> 7);
          }
          if (bVar4 != false) break;
          if (piVar11 != param_3) {
            iVar2 = param_3[-1];
            param_3[-1] = iVar1;
            *piVar10 = iVar2;
          }
          param_3 = param_3 + -1;
        }
        piVar11 = piVar10;
      } while (param_2 < piVar10);
      piVar9 = local_58;
      local_res18 = piVar11;
    }
    if (piVar11 == param_2) {
      if (piVar9 == param_4) {
        *param_1 = (ulonglong)param_3;
        param_1[1] = (ulonglong)piVar8;
        return;
      }
      if (piVar8 != piVar9) {
        iVar1 = *param_3;
        *param_3 = *piVar8;
        *piVar8 = iVar1;
      }
      iVar1 = *param_3;
      piVar8 = piVar8 + 1;
      *param_3 = *piVar9;
      *piVar9 = iVar1;
      piVar9 = piVar9 + 1;
      param_3 = param_3 + 1;
      piVar10 = piVar11;
      local_58 = piVar9;
    }
    else {
      piVar10 = piVar11 + -1;
      local_res18 = piVar10;
      if (piVar9 == param_4) {
        piVar7 = param_3 + -1;
        if (param_3 != piVar11) {
          iVar1 = *piVar10;
          *piVar10 = *piVar7;
          *piVar7 = iVar1;
        }
        piVar11 = piVar8 + -1;
        piVar8 = piVar8 + -1;
        iVar1 = *piVar7;
        *piVar7 = *piVar11;
        *piVar8 = iVar1;
        param_3 = piVar7;
      }
      else {
        iVar1 = *piVar9;
        *piVar9 = *piVar10;
        piVar9 = piVar9 + 1;
        *piVar10 = iVar1;
        local_58 = piVar9;
      }
    }
  } while( true );
}



/* ===== 180289d20 FUN_180289d20 ===== */

undefined4 * FUN_180289d20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_3[-0x26] = param_2[-0x26];
    FUN_18002ba60(param_3 + -0x24,param_2 + -0x24);
    FUN_18002ba60(param_3 + -0x1c,param_2 + -0x1c);
    FUN_18002ba60(param_3 + -0x14,param_2 + -0x14);
    param_3[-0xc] = param_2[-0xc];
    FUN_18002ba60(param_3 + -10,param_2 + -10);
    param_3[-2] = param_2[-2];
    param_3 = param_3 + -0x26;
    param_2 = param_2 + -0x26;
  }
  return param_3;
}



/* ===== 180289de0 FUN_180289de0 ===== */

void FUN_180289de0(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar3 = param_2;
  if (param_2 < lVar5) {
    do {
      cVar1 = FUN_180023470(param_1 + 0x158 + lVar3 * 0x130,param_1 + 0xc0 + lVar3 * 0x130);
      lVar2 = lVar3 * 0x98;
      lVar3 = ((longlong)cVar1 >> 0x3f) + 2 + lVar3 * 2;
      lVar4 = lVar3 * 0x98;
      *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)(param_1 + lVar4);
      FUN_18002ba60(param_1 + 8 + lVar2,param_1 + 8 + lVar4);
      FUN_18002ba60(param_1 + 0x28 + lVar2,param_1 + 0x28 + lVar4);
      FUN_18002ba60(param_1 + 0x48 + lVar2,param_1 + 0x48 + lVar4);
      *(undefined4 *)(param_1 + 0x68 + lVar2) = *(undefined4 *)(param_1 + 0x68 + lVar4);
      FUN_18002ba60(param_1 + 0x70 + lVar2,param_1 + 0x70 + lVar4);
      *(undefined4 *)(param_1 + 0x90 + lVar2) = *(undefined4 *)(param_1 + 0x90 + lVar4);
    } while (lVar3 < lVar5);
  }
  if ((lVar3 == lVar5) && ((param_3 & 1) == 0)) {
    lVar5 = param_3 * 0x98;
    lVar3 = lVar3 * 0x98;
    *(undefined4 *)(lVar3 + param_1) = *(undefined4 *)(lVar5 + -0x98 + param_1);
    FUN_18002ba60(param_1 + 8 + lVar3,param_1 + -0x90 + lVar5);
    FUN_18002ba60(param_1 + 0x28 + lVar3,param_1 + -0x70 + lVar5);
    FUN_18002ba60(param_1 + 0x48 + lVar3,param_1 + -0x50 + lVar5);
    *(undefined4 *)(lVar3 + 0x68 + param_1) = *(undefined4 *)(lVar5 + -0x30 + param_1);
    FUN_18002ba60(param_1 + 0x70 + lVar3,param_1 + -0x28 + lVar5);
    *(undefined4 *)(lVar3 + 0x90 + param_1) = *(undefined4 *)(lVar5 + -8 + param_1);
    lVar3 = param_3 - 1;
  }
  if (param_2 < lVar3) {
    do {
      lVar5 = lVar3 + -1 >> 1;
      lVar2 = lVar5 * 0x98;
      cVar1 = FUN_180023470(lVar2 + param_1 + 0x28,param_4 + 10);
      if (-1 < cVar1) break;
      lVar3 = lVar3 * 0x98;
      *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_1 + lVar2);
      FUN_18002ba60(param_1 + 8 + lVar3,param_1 + 8 + lVar2);
      FUN_18002ba60(param_1 + 0x28 + lVar3,lVar2 + param_1 + 0x28);
      FUN_18002ba60(param_1 + 0x48 + lVar3,param_1 + 0x48 + lVar2);
      *(undefined4 *)(param_1 + 0x68 + lVar3) = *(undefined4 *)(param_1 + 0x68 + lVar2);
      FUN_18002ba60(param_1 + 0x70 + lVar3,param_1 + 0x70 + lVar2);
      *(undefined4 *)(param_1 + 0x90 + lVar3) = *(undefined4 *)(param_1 + 0x90 + lVar2);
      lVar3 = lVar5;
    } while (param_2 < lVar5);
  }
  lVar3 = lVar3 * 0x98;
  *(undefined4 *)(lVar3 + param_1) = *param_4;
  FUN_18002ba60(param_1 + 8 + lVar3,param_4 + 2);
  FUN_18002ba60(param_1 + 0x28 + lVar3,param_4 + 10);
  FUN_18002ba60(param_1 + 0x48 + lVar3,param_4 + 0x12);
  *(undefined4 *)(lVar3 + 0x68 + param_1) = param_4[0x1a];
  FUN_18002ba60(param_1 + 0x70 + lVar3,param_4 + 0x1c);
  *(undefined4 *)(lVar3 + 0x90 + param_1) = param_4[0x24];
  return;
}



/* ===== 18028a0b0 FUN_18028a0b0 ===== */

void FUN_18028a0b0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = (param_3 - param_1 >> 3) * -0x79435e50d79435e5;
  if (lVar3 < 0x29) {
    cVar2 = FUN_180023470(param_2 + 0x28,param_1 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b790(param_2,param_1);
    }
    cVar2 = FUN_180023470(param_3 + 0x28,param_2 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b790(param_3,param_2);
      cVar2 = FUN_180023470(param_2 + 0x28,param_1 + 0x28);
      if (cVar2 < '\0') {
        FUN_18028b790(param_2,param_1);
        return;
      }
    }
  }
  else {
    lVar4 = lVar3 + 1 >> 3;
    lVar3 = lVar4 * 0x130 + param_1;
    lVar1 = lVar4 * 0x98 + param_1;
    cVar2 = FUN_180023470(lVar1 + 0x28,param_1 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b790(lVar1,param_1);
    }
    cVar2 = FUN_180023470(lVar3 + 0x28,lVar1 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b790(lVar3,lVar1);
      cVar2 = FUN_180023470(lVar1 + 0x28,param_1 + 0x28);
      if (cVar2 < '\0') {
        FUN_18028b790(lVar1,param_1);
      }
    }
    lVar5 = param_2 + lVar4 * -0x98;
    lVar3 = lVar4 * 0x98 + param_2;
    cVar2 = FUN_180023470(param_2 + 0x28,lVar5 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b790(param_2,lVar5);
    }
    cVar2 = FUN_180023470(lVar3 + 0x28,param_2 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b790(lVar3,param_2);
      cVar2 = FUN_180023470(param_2 + 0x28,lVar5 + 0x28);
      if (cVar2 < '\0') {
        FUN_18028b790(param_2,lVar5);
      }
    }
    lVar5 = param_3 + lVar4 * -0x130;
    lVar3 = param_3 + lVar4 * -0x98;
    cVar2 = FUN_180023470(lVar3 + 0x28,lVar5 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b790(lVar3,lVar5);
    }
    cVar2 = FUN_180023470(param_3 + 0x28,lVar3 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b790(param_3,lVar3);
      cVar2 = FUN_180023470(lVar3 + 0x28,lVar5 + 0x28);
      if (cVar2 < '\0') {
        FUN_18028b790(lVar3,lVar5);
      }
    }
    cVar2 = FUN_180023470(param_2 + 0x28,lVar1 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b790(param_2,lVar1);
    }
    cVar2 = FUN_180023470(lVar3 + 0x28,param_2 + 0x28);
    if (cVar2 < '\0') {
      FUN_18028b790(lVar3,param_2);
      cVar2 = FUN_180023470(param_2 + 0x28,lVar1 + 0x28);
      if (cVar2 < '\0') {
        FUN_18028b790(param_2,lVar1);
      }
    }
  }
  return;
}



/* ===== 18028a300 FUN_18028a300 ===== */

void FUN_18028a300(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = param_3;
  while (((param_2 < uVar3 && (cVar2 = FUN_180023470(uVar3 - 0x70,uVar3 + 0x28), -1 < cVar2)) &&
         (cVar2 = FUN_180023470(uVar3 + 0x28,uVar3 - 0x70), -1 < cVar2))) {
    uVar3 = uVar3 - 0x98;
  }
  do {
    uVar6 = param_3 + 0x98;
    uVar1 = uVar6;
    uVar4 = uVar3;
    if ((param_4 <= uVar6) || (cVar2 = FUN_180023470(param_3 + 0xc0,uVar3 + 0x28), cVar2 < '\0'))
    break;
    cVar2 = FUN_180023470(uVar3 + 0x28,param_3 + 0xc0);
    param_3 = uVar6;
  } while (-1 < cVar2);
joined_r0x00018028a39a:
  do {
    uVar7 = uVar3;
    if (param_4 <= uVar1) {
joined_r0x00018028a3e8:
      for (; param_2 < uVar7; uVar7 = uVar7 - 0x98) {
        cVar2 = FUN_180023470(uVar7 - 0x70,uVar4 + 0x28);
        if (-1 < cVar2) {
          cVar2 = FUN_180023470(uVar4 + 0x28,uVar7 - 0x70);
          if (cVar2 < '\0') break;
          if (uVar7 != uVar4) {
            FUN_18028b790(uVar4 - 0x98,uVar7 - 0x98);
          }
          uVar4 = uVar4 - 0x98;
        }
      }
      if ((uVar7 == param_2) && (uVar1 == param_4)) {
        *param_1 = uVar4;
        param_1[1] = uVar6;
        return;
      }
      if (uVar7 == param_2) {
        if (uVar6 != uVar1) {
          FUN_18028b790(uVar4,uVar6);
        }
        uVar6 = uVar6 + 0x98;
        uVar5 = uVar4 + 0x98;
        uVar3 = uVar7;
        uVar7 = uVar1;
      }
      else {
        uVar3 = uVar7 - 0x98;
        if (uVar1 == param_4) {
          uVar5 = uVar4 - 0x98;
          if (uVar4 != uVar7) {
            FUN_18028b790(uVar3,uVar5);
          }
          uVar6 = uVar6 - 0x98;
          FUN_18028b790(uVar5,uVar6);
          uVar4 = uVar5;
          goto joined_r0x00018028a39a;
        }
        uVar5 = uVar4;
        uVar7 = uVar3;
        uVar4 = uVar1;
      }
      FUN_18028b790(uVar4,uVar7);
      uVar1 = uVar1 + 0x98;
      uVar4 = uVar5;
      goto joined_r0x00018028a39a;
    }
    cVar2 = FUN_180023470(uVar4 + 0x28,uVar1 + 0x28);
    if (-1 < cVar2) {
      cVar2 = FUN_180023470(uVar1 + 0x28,uVar4 + 0x28);
      if (cVar2 < '\0') goto joined_r0x00018028a3e8;
      if (uVar6 != uVar1) {
        FUN_18028b790(uVar6,uVar1);
      }
      uVar6 = uVar6 + 0x98;
    }
    uVar1 = uVar1 + 0x98;
  } while( true );
}



/* ===== 18028a500 FUN_18028a500 ===== */

void FUN_18028a500(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(param_3 - 1) >> 1;
  lVar3 = param_2;
  while (lVar3 < lVar8) {
    lVar6 = lVar3 * 0x1f0;
    iVar1 = *(int *)(param_1 + 0x1c0 + lVar6);
    iVar2 = *(int *)(param_1 + 0x2b8 + lVar6);
    if (iVar2 == iVar1) {
      bVar4 = FUN_180023470(param_1 + 0x218 + lVar6,param_1 + 0x120 + lVar6);
      bVar5 = (bool)(bVar4 >> 7);
    }
    else {
      bVar5 = iVar1 <= iVar2;
    }
    lVar6 = (ulonglong)(bVar5 ^ 1) + (lVar3 * 2 | 1U);
    FUN_18027ca40(lVar3 * 0xf8 + param_1,lVar6 * 0xf8 + param_1);
    lVar3 = lVar6;
  }
  if ((lVar3 == lVar8) && ((param_3 & 1) == 0)) {
    FUN_18027ca40(lVar3 * 0xf8 + param_1,param_3 * 0xf8 + -0xf8 + param_1);
    lVar3 = param_3 - 1;
  }
  while (param_2 < lVar3) {
    lVar7 = lVar3 + -1 >> 1;
    lVar6 = lVar7 * 0xf8;
    lVar8 = lVar6 + param_1;
    iVar1 = *(int *)(lVar8 + 200);
    if (iVar1 == *(int *)(param_4 + 200)) {
      bVar4 = FUN_180023470(param_1 + 0x28 + lVar6,param_4 + 0x28);
      bVar5 = (bool)(bVar4 >> 7);
    }
    else {
      bVar5 = *(int *)(param_4 + 200) <= iVar1;
    }
    if (bVar5 == false) break;
    FUN_18027ca40(lVar3 * 0xf8 + param_1,lVar8);
    lVar3 = lVar7;
  }
  FUN_18027ca40(lVar3 * 0xf8 + param_1,param_4);
  return;
}



/* ===== 18028a670 FUN_18028a670 ===== */

void FUN_18028a670(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = param_3 + 0xf8;
  if (param_2 < param_3) {
    while( true ) {
      iVar1 = *(int *)(param_3 + 200);
      iVar2 = *(int *)(param_3 - 0x30);
      if (iVar2 == iVar1) {
        bVar3 = FUN_180023470(param_3 - 0xd0,param_3 + 0x28);
        bVar4 = (bool)(bVar3 >> 7);
      }
      else {
        bVar4 = iVar1 <= iVar2;
      }
      if (bVar4 != false) break;
      if (iVar1 == iVar2) {
        bVar3 = FUN_180023470(param_3 + 0x28,param_3 - 0xd0);
        bVar4 = (bool)(bVar3 >> 7);
      }
      else {
        bVar4 = iVar2 <= iVar1;
      }
      if ((bVar4 != false) || (param_3 = param_3 - 0xf8, param_3 <= param_2)) break;
    }
  }
  uVar9 = uVar8;
  uVar5 = param_3;
  if (uVar8 < param_4) {
    iVar1 = *(int *)(param_3 + 200);
    while( true ) {
      iVar2 = *(int *)(uVar8 + 200);
      if (iVar2 == iVar1) {
        bVar3 = FUN_180023470(uVar8 + 0x28,param_3 + 0x28);
        bVar4 = (bool)(bVar3 >> 7);
      }
      else {
        bVar4 = iVar1 <= iVar2;
      }
      uVar9 = uVar8;
      if (bVar4 != false) break;
      if (iVar1 == iVar2) {
        bVar3 = FUN_180023470(param_3 + 0x28,uVar8 + 0x28);
        bVar4 = (bool)(bVar3 >> 7);
      }
      else {
        bVar4 = iVar2 <= iVar1;
      }
      if ((bVar4 != false) || (uVar8 = uVar8 + 0xf8, uVar9 = uVar8, param_4 <= uVar8)) break;
    }
  }
joined_r0x00018028a756:
  do {
    if (param_4 <= uVar8) {
joined_r0x00018028a7cf:
      for (; param_2 < param_3; param_3 = param_3 - 0xf8) {
        iVar1 = *(int *)(uVar5 + 200);
        iVar2 = *(int *)(param_3 - 0x30);
        if (iVar2 == iVar1) {
          bVar3 = FUN_180023470(param_3 - 0xd0,uVar5 + 0x28);
          bVar4 = (bool)(bVar3 >> 7);
        }
        else {
          bVar4 = iVar1 <= iVar2;
        }
        if (bVar4 == false) {
          if (iVar1 == iVar2) {
            bVar3 = FUN_180023470(uVar5 + 0x28,param_3 - 0xd0);
            bVar4 = (bool)(bVar3 >> 7);
          }
          else {
            bVar4 = iVar2 <= iVar1;
          }
          if (bVar4 != false) break;
          if (param_3 != uVar5) {
            FUN_18028b990(uVar5 - 0xf8,param_3 - 0xf8);
          }
          uVar5 = uVar5 - 0xf8;
        }
      }
      if ((param_3 == param_2) && (uVar8 == param_4)) {
        *param_1 = uVar5;
        param_1[1] = uVar9;
        return;
      }
      if (param_3 == param_2) {
        if (uVar9 != uVar8) {
          FUN_18028b990(uVar5,uVar9);
        }
        uVar9 = uVar9 + 0xf8;
        uVar6 = uVar5 + 0xf8;
        uVar7 = uVar8;
      }
      else {
        uVar7 = param_3 - 0xf8;
        if (uVar8 == param_4) {
          uVar6 = uVar5 - 0xf8;
          if (uVar5 != param_3) {
            FUN_18028b990(uVar7,uVar6);
          }
          FUN_18028b990(uVar6,uVar9 - 0xf8);
          uVar9 = uVar9 - 0xf8;
          param_3 = uVar7;
          uVar5 = uVar6;
          goto joined_r0x00018028a756;
        }
        uVar6 = uVar5;
        param_3 = uVar7;
        uVar5 = uVar8;
      }
      uVar8 = uVar8 + 0xf8;
      FUN_18028b990(uVar5,uVar7);
      uVar5 = uVar6;
      goto joined_r0x00018028a756;
    }
    iVar1 = *(int *)(uVar8 + 200);
    iVar2 = *(int *)(uVar5 + 200);
    if (iVar2 == iVar1) {
      bVar3 = FUN_180023470(uVar5 + 0x28,uVar8 + 0x28);
      bVar4 = (bool)(bVar3 >> 7);
    }
    else {
      bVar4 = iVar1 <= iVar2;
    }
    if (bVar4 == false) {
      if (iVar1 == iVar2) {
        bVar3 = FUN_180023470(uVar8 + 0x28,uVar5 + 0x28);
        bVar4 = (bool)(bVar3 >> 7);
      }
      else {
        bVar4 = iVar2 <= iVar1;
      }
      if (bVar4 != false) goto joined_r0x00018028a7cf;
      if (uVar9 != uVar8) {
        FUN_18028b990(uVar9,uVar8);
      }
      uVar9 = uVar9 + 0xf8;
    }
    uVar8 = uVar8 + 0xf8;
  } while( true );
}



/* ===== 18028a910 FUN_18028a910 ===== */

void FUN_18028a910(longlong param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  if (param_2 < lVar5) {
    do {
      lVar1 = lVar4 * 0x70;
      lVar4 = (ulonglong)
              (*(int *)(param_1 + 0xe0 + lVar4 * 0xe0) <= *(int *)(param_1 + 0x70 + lVar4 * 0xe0)) +
              1 + lVar4 * 2;
      lVar3 = lVar4 * 0x70;
      *(undefined4 *)(param_1 + lVar1) = *(undefined4 *)(param_1 + lVar3);
      FUN_18002ba60(param_1 + 8 + lVar1,param_1 + 8 + lVar3);
      FUN_18002ba60(param_1 + 0x28 + lVar1,param_1 + 0x28 + lVar3);
      FUN_18002ba60(param_1 + 0x48 + lVar1,param_1 + 0x48 + lVar3);
      *(undefined4 *)(param_1 + 0x68 + lVar1) = *(undefined4 *)(param_1 + 0x68 + lVar3);
      *(undefined4 *)(param_1 + 0x6c + lVar1) = *(undefined4 *)(param_1 + 0x6c + lVar3);
    } while (lVar4 < lVar5);
  }
  if ((lVar4 == lVar5) && ((param_3 & 1) == 0)) {
    uVar2 = lVar4 * 0x70;
    lVar4 = param_3 * 0x70;
    *(undefined4 *)(uVar2 + param_1) = *(undefined4 *)(lVar4 + -0x70 + param_1);
    FUN_18002ba60((uVar2 | 8) + param_1,param_1 + -0x68 + lVar4);
    FUN_18002ba60(param_1 + 0x28 + uVar2,param_1 + -0x48 + lVar4);
    FUN_18002ba60(param_1 + 0x48 + uVar2,param_1 + -0x28 + lVar4);
    *(undefined4 *)(uVar2 + 0x68 + param_1) = *(undefined4 *)(lVar4 + -8 + param_1);
    *(undefined4 *)(uVar2 + 0x6c + param_1) = *(undefined4 *)(lVar4 + -4 + param_1);
    lVar4 = param_3 - 1;
  }
  while (param_2 < lVar4) {
    lVar5 = lVar4 + -1 >> 1;
    lVar1 = lVar5 * 0x70;
    if (*(int *)(param_1 + lVar1) <= *param_4) break;
    lVar4 = lVar4 * 0x70;
    *(int *)(param_1 + lVar4) = *(int *)(param_1 + lVar1);
    FUN_18002ba60(param_1 + 8 + lVar4,lVar1 + param_1 + 8);
    FUN_18002ba60(param_1 + 0x28 + lVar4,param_1 + 0x28 + lVar1);
    FUN_18002ba60(param_1 + 0x48 + lVar4,param_1 + 0x48 + lVar1);
    *(undefined4 *)(param_1 + 0x68 + lVar4) = *(undefined4 *)(param_1 + 0x68 + lVar1);
    *(undefined4 *)(param_1 + 0x6c + lVar4) = *(undefined4 *)(param_1 + 0x6c + lVar1);
    lVar4 = lVar5;
  }
  uVar2 = lVar4 * 0x70;
  *(int *)(uVar2 + param_1) = *param_4;
  FUN_18002ba60((uVar2 | 8) + param_1,param_4 + 2);
  FUN_18002ba60(param_1 + 0x28 + uVar2,param_4 + 10);
  FUN_18002ba60(param_1 + 0x48 + uVar2,param_4 + 0x12);
  *(int *)(uVar2 + 0x68 + param_1) = param_4[0x1a];
  *(int *)(uVar2 + 0x6c + param_1) = param_4[0x1b];
  return;
}



/* ===== 18028ab20 FUN_18028ab20 ===== */

void FUN_18028ab20(undefined8 *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = param_3 + 0x1c;
  while (piVar6 = param_3, param_2 < piVar6) {
    iVar1 = piVar6[-0x1c];
    if ((*piVar6 < iVar1) || (param_3 = piVar6 + -0x1c, iVar1 < *piVar6)) break;
  }
  piVar2 = piVar7;
  piVar4 = piVar6;
  if (piVar7 < param_4) {
    do {
      piVar2 = piVar7;
      if ((*piVar6 < *piVar7) || (*piVar7 < *piVar6)) break;
      piVar7 = piVar7 + 0x1c;
      piVar2 = piVar7;
    } while (piVar7 < param_4);
  }
joined_r0x00018028ab88:
  do {
    if (param_4 <= piVar2) {
joined_r0x00018028abb8:
      while (piVar3 = piVar6, param_2 < piVar3) {
        piVar6 = piVar3 + -0x1c;
        if (*piVar6 <= *piVar4) {
          if (*piVar6 < *piVar4) break;
          if (piVar3 != piVar4) {
            FUN_18028bae0(piVar4 + -0x1c,piVar6);
          }
          piVar4 = piVar4 + -0x1c;
        }
      }
      if ((piVar3 == param_2) && (piVar2 == param_4)) {
        *param_1 = piVar4;
        param_1[1] = piVar7;
        return;
      }
      if (piVar3 == param_2) {
        if (piVar7 != piVar2) {
          FUN_18028bae0(piVar4,piVar7);
        }
        piVar7 = piVar7 + 0x1c;
        FUN_18028bae0(piVar4,piVar2);
        piVar2 = piVar2 + 0x1c;
        piVar6 = piVar3;
        piVar4 = piVar4 + 0x1c;
      }
      else {
        piVar6 = piVar3 + -0x1c;
        if (piVar2 == param_4) {
          piVar5 = piVar4 + -0x1c;
          if (piVar4 != piVar3) {
            FUN_18028bae0(piVar6,piVar5);
          }
          piVar7 = piVar7 + -0x1c;
          FUN_18028bae0(piVar5,piVar7);
          piVar4 = piVar5;
        }
        else {
          FUN_18028bae0(piVar2,piVar6);
          piVar2 = piVar2 + 0x1c;
        }
      }
      goto joined_r0x00018028ab88;
    }
    if (*piVar4 <= *piVar2) {
      if (*piVar4 < *piVar2) goto joined_r0x00018028abb8;
      if (piVar7 != piVar2) {
        FUN_18028bae0(piVar7,piVar2);
      }
      piVar7 = piVar7 + 0x1c;
    }
    piVar2 = piVar2 + 0x1c;
  } while( true );
}



/* ===== 18028acb0 FUN_18028acb0 ===== */

longlong FUN_18028acb0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    if (param_5 == 0) {
      return param_1;
    }
    if ((param_5 < param_4) || (lVar1 = param_1, lVar2 = param_6, param_7 < param_4)) {
      lVar1 = param_2;
      lVar2 = param_6;
      if (param_7 < param_5) {
        if (param_1 != param_2) {
          if (param_2 == param_3) {
            param_3 = param_1;
          }
          else {
            lVar2 = param_1;
            do {
              lVar1 = lVar1 + -0x98;
              if (lVar2 == lVar1) break;
              FUN_18028b790(lVar2,lVar1);
              lVar2 = lVar2 + 0x98;
            } while (lVar2 != lVar1);
            lVar1 = param_3;
            lVar2 = param_2;
            do {
              lVar1 = lVar1 + -0x98;
              if (lVar2 == lVar1) break;
              FUN_18028b790(lVar2,lVar1);
              lVar2 = lVar2 + 0x98;
            } while (lVar2 != lVar1);
            lVar1 = param_3;
            lVar2 = param_1;
            if (param_1 != param_3) {
              do {
                lVar1 = lVar1 + -0x98;
                if (lVar2 == lVar1) break;
                FUN_18028b790(lVar2,lVar1);
                lVar2 = lVar2 + 0x98;
              } while (lVar2 != lVar1);
            }
            param_3 = ((param_3 - param_2) / 0x98) * 0x98 + param_1;
          }
        }
      }
      else {
        for (; lVar1 != param_3; lVar1 = lVar1 + 0x98) {
          FUN_180288890(lVar2);
          lVar2 = lVar2 + 0x98;
        }
        FUN_180289d20(param_1,param_2,param_3);
        param_3 = FUN_180285c10(param_6,lVar2,param_1);
        for (; param_6 != lVar2; param_6 = param_6 + 0x98) {
          FUN_18000f890(param_6 + 0x70);
          FUN_18000f890(param_6 + 0x48);
          FUN_18000f890(param_6 + 0x28);
          FUN_18000f890(param_6 + 8);
        }
      }
    }
    else {
      for (; lVar1 != param_2; lVar1 = lVar1 + 0x98) {
        FUN_180288890(lVar2);
        lVar2 = lVar2 + 0x98;
      }
      param_3 = FUN_180285c10(param_2,param_3,param_1);
      FUN_180285c10(param_6,lVar2,param_3);
      for (; param_6 != lVar2; param_6 = param_6 + 0x98) {
        FUN_18000f890(param_6 + 0x70);
        FUN_18000f890(param_6 + 0x48);
        FUN_18000f890(param_6 + 0x28);
        FUN_18000f890(param_6 + 8);
      }
    }
  }
  return param_3;
}



/* ===== 18028af10 FUN_18028af10 ===== */

void FUN_18028af10(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x98) {
    FUN_18000f890(lVar2 + 0x70);
    FUN_18000f890(lVar2 + 0x48);
    FUN_18000f890(lVar2 + 0x28);
    FUN_18000f890(lVar2 + 8);
  }
  return;
}



/* ===== 18028afd0 FUN_18028afd0 ===== */

void FUN_18028afd0(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  byte bVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  
  for (lVar15 = 0x3f; 0xfffffffffffffffU >> lVar15 == 0; lVar15 = lVar15 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar15 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  plVar2 = *(longlong **)(param_1 + 8);
  uVar8 = param_2 - 1 | 1;
  lVar15 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  bVar11 = (char)lVar15 + 1;
  lVar15 = 1L << (bVar11 & 0x3f);
  FUN_180029d30(param_1 + 0x18,2L << (bVar11 & 0x3f),plVar2);
  *(longlong *)(param_1 + 0x38) = lVar15;
  *(longlong *)(param_1 + 0x30) = lVar15 + -1;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x00018028b058:
  do {
    while( true ) {
      if (plVar6 == plVar2) {
        return;
      }
      uVar17 = plVar6[5];
      plVar10 = plVar6 + 2;
      plVar3 = (longlong *)*plVar6;
      uVar8 = plVar6[4];
      if (0xf < uVar17) {
        plVar10 = (longlong *)plVar6[2];
      }
      uVar13 = 0xcbf29ce484222325;
      uVar9 = 0;
      if (uVar8 != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar10 + uVar9);
          uVar9 = uVar9 + 1;
          uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
        } while (uVar9 < uVar8);
      }
      lVar15 = *(longlong *)(param_1 + 0x18);
      uVar13 = *(ulonglong *)(param_1 + 0x30) & uVar13;
      plVar10 = *(longlong **)(lVar15 + uVar13 * 0x10);
      if (plVar10 != plVar2) break;
      *(longlong **)(lVar15 + uVar13 * 0x10) = plVar6;
      *(longlong **)(lVar15 + 8 + uVar13 * 0x10) = plVar6;
      plVar6 = plVar3;
    }
    plVar16 = *(longlong **)(lVar15 + 8 + uVar13 * 0x10);
    plVar14 = plVar16 + 2;
    if (0xf < (ulonglong)plVar16[5]) {
      plVar14 = (longlong *)*plVar14;
    }
    plVar12 = plVar6 + 2;
    if (0xf < uVar17) {
      plVar12 = (longlong *)plVar6[2];
    }
    if (uVar8 != plVar16[4]) {
LAB_18028b15f:
      if (plVar10 != plVar16) {
        do {
          plVar16 = (longlong *)plVar16[1];
          plVar14 = plVar16 + 2;
          if (0xf < (ulonglong)plVar16[5]) {
            plVar14 = (longlong *)*plVar14;
          }
          if (uVar17 < 0x10) {
            plVar12 = plVar6 + 2;
          }
          else {
            plVar12 = (longlong *)plVar6[2];
          }
          if (uVar8 == plVar16[4]) {
            if ((uVar8 == 0) || (iVar7 = memcmp(plVar12,plVar14,uVar8), iVar7 == 0)) {
              lVar15 = *plVar16;
              plVar10 = (longlong *)plVar6[1];
              *plVar10 = (longlong)plVar3;
              plVar14 = (longlong *)plVar3[1];
              *plVar14 = lVar15;
              puVar4 = *(undefined8 **)(lVar15 + 8);
              *puVar4 = plVar6;
              *(longlong **)(lVar15 + 8) = plVar14;
              plVar3[1] = (longlong)plVar10;
              plVar6[1] = (longlong)puVar4;
              plVar6 = plVar3;
              goto joined_r0x00018028b058;
            }
            plVar10 = *(longlong **)(lVar15 + uVar13 * 0x10);
            uVar17 = plVar6[5];
          }
        } while (plVar10 != plVar16);
      }
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar16;
      puVar5 = (undefined8 *)plVar16[1];
      *puVar5 = plVar6;
      plVar16[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
      *(longlong **)(lVar15 + uVar13 * 0x10) = plVar6;
      plVar6 = plVar3;
      goto joined_r0x00018028b058;
    }
    if ((uVar8 != 0) && (iVar7 = memcmp(plVar12,plVar14,uVar8), iVar7 != 0)) {
      plVar10 = *(longlong **)(lVar15 + uVar13 * 0x10);
      uVar17 = plVar6[5];
      goto LAB_18028b15f;
    }
    plVar16 = (longlong *)*plVar16;
    if (plVar16 != plVar6) {
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar16;
      puVar5 = (undefined8 *)plVar16[1];
      *puVar5 = plVar6;
      plVar16[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
    }
    *(longlong **)(lVar15 + 8 + uVar13 * 0x10) = plVar6;
    plVar6 = plVar3;
  } while( true );
}



/* ===== 18028b270 FUN_18028b270 ===== */

void FUN_18028b270(undefined8 param_1,ulonglong param_2)

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
  
  plVar9 = DAT_180cfc8d8;
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
  FUN_180029a30(&DAT_180cfc8e8,2L << (bVar11 & 0x3f),DAT_180cfc8d8);
  DAT_180cfc900 = lVar12 - 1;
  DAT_180cfc908 = lVar12;
  plVar8 = (longlong *)*DAT_180cfc8d8;
joined_r0x00018028b2ec:
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
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 & DAT_180cfc900;
        plVar3 = *(longlong **)(DAT_180cfc8e8 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_180cfc8e8 + uVar10 * 0x10);
        lVar12 = DAT_180cfc8e8 + uVar10 * 0x10;
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
        goto joined_r0x00018028b2ec;
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



/* ===== 18028b440 FUN_18028b440 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18028b440(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined4 local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_e8;
  puVar1 = param_1;
  FUN_1802886b0(&local_c8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  FUN_18002ba60(puVar1 + 2,param_2 + 2);
  FUN_18002ba60(param_1 + 10,param_2 + 10);
  param_1[0x12] = param_2[0x12];
  FUN_18002ba60(param_1 + 0x14,param_2 + 0x14);
  FUN_18002ba60(param_1 + 0x1c,param_2 + 0x1c);
  *param_2 = local_c8;
  param_2[1] = local_c4;
  FUN_18002ba60(param_2 + 2,local_c0);
  FUN_18002ba60(param_2 + 10,local_a0);
  param_2[0x12] = local_80;
  FUN_18002ba60(param_2 + 0x14,local_78);
  FUN_18002ba60(param_2 + 0x1c,local_58);
  FUN_18000f890(local_58);
  FUN_18000f890(local_78);
  FUN_18000f890(local_a0);
  FUN_18000f890(local_c0);
  return;
}



/* ===== 18028b570 FUN_18028b570 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18028b570(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [2];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_80 [32];
  undefined1 local_60 [40];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_f8;
  puVar1 = param_1;
  FUN_1802887a0(local_d8);
  *puVar1 = *param_2;
  FUN_18002ba60(puVar1 + 2,param_2 + 2);
  FUN_18002ba60(param_1 + 10,param_2 + 10);
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  FUN_18002ba60(param_1 + 0x16,param_2 + 0x16);
  FUN_18002ba60(param_1 + 0x1e,param_2 + 0x1e);
  *param_2 = local_d8[0];
  FUN_18002ba60(param_2 + 2,local_d0);
  FUN_18002ba60(param_2 + 10,local_b0);
  param_2[0x12] = local_90;
  param_2[0x13] = local_8c;
  *(undefined1 *)(param_2 + 0x14) = local_88;
  FUN_18002ba60(param_2 + 0x16,local_80);
  FUN_18002ba60(param_2 + 0x1e,local_60);
  FUN_18000f890(local_60);
  FUN_18000f890(local_80);
  FUN_18000f890(local_b0);
  FUN_18000f890(local_d0);
  return;
}



/* ===== 18028b6b0 FUN_18028b6b0 ===== */

void FUN_18028b6b0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  lVar6 = FUN_180280d30(iVar2);
  lVar5 = FUN_180280d30(iVar1);
  if ((lVar6 == 0) || (lVar5 == 0)) {
    bVar4 = iVar2 < iVar1;
  }
  else {
    bVar3 = FUN_180023470(lVar6 + 0x28,lVar5 + 0x28);
    bVar4 = (bool)(bVar3 >> 7);
  }
  if (bVar4 != false) {
    *param_2 = iVar1;
    *param_1 = iVar2;
  }
  iVar1 = *param_3;
  iVar2 = *param_2;
  lVar6 = FUN_180280d30(iVar1);
  lVar5 = FUN_180280d30(iVar2);
  if ((lVar6 == 0) || (lVar5 == 0)) {
    bVar4 = iVar1 < iVar2;
  }
  else {
    bVar3 = FUN_180023470(lVar6 + 0x28,lVar5 + 0x28);
    bVar4 = (bool)(bVar3 >> 7);
  }
  if (bVar4 != false) {
    *param_3 = iVar2;
    *param_2 = iVar1;
    iVar2 = *param_1;
    lVar6 = FUN_180280d30(iVar1);
    lVar5 = FUN_180280d30(iVar2);
    if ((lVar6 == 0) || (lVar5 == 0)) {
      bVar4 = iVar1 < iVar2;
    }
    else {
      bVar3 = FUN_180023470(lVar6 + 0x28,lVar5 + 0x28);
      bVar4 = (bool)(bVar3 >> 7);
    }
    if (bVar4 != false) {
      *param_2 = iVar2;
      *param_1 = iVar1;
    }
  }
  return;
}



/* ===== 18028b790 FUN_18028b790 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18028b790(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [2];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined4 local_70;
  undefined1 local_68 [32];
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_f8;
  puVar1 = param_1;
  FUN_180288890(local_d8);
  *puVar1 = *param_2;
  FUN_18002ba60(puVar1 + 2,param_2 + 2);
  FUN_18002ba60(param_1 + 10,param_2 + 10);
  FUN_18002ba60(param_1 + 0x12,param_2 + 0x12);
  param_1[0x1a] = param_2[0x1a];
  FUN_18002ba60(param_1 + 0x1c,param_2 + 0x1c);
  param_1[0x24] = param_2[0x24];
  *param_2 = local_d8[0];
  FUN_18002ba60(param_2 + 2,local_d0);
  FUN_18002ba60(param_2 + 10,local_b0);
  FUN_18002ba60(param_2 + 0x12,local_90);
  param_2[0x1a] = local_70;
  FUN_18002ba60(param_2 + 0x1c,local_68);
  param_2[0x24] = local_48;
  FUN_18000f890(local_68);
  FUN_18000f890(local_90);
  FUN_18000f890(local_b0);
  FUN_18000f890(local_d0);
  return;
}



/* ===== 18028b8d0 FUN_18028b8d0 ===== */

void FUN_18028b8d0(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  bool bVar2;
  
  if (*(int *)(param_2 + 200) == *(int *)(param_1 + 200)) {
    bVar1 = FUN_180023470(param_2 + 0x28,param_1 + 0x28);
    bVar2 = (bool)(bVar1 >> 7);
  }
  else {
    bVar2 = *(int *)(param_1 + 200) <= *(int *)(param_2 + 200);
  }
  if (bVar2 != false) {
    FUN_18028b990(param_2,param_1);
  }
  if (*(int *)(param_3 + 200) == *(int *)(param_2 + 200)) {
    bVar1 = FUN_180023470(param_3 + 0x28,param_2 + 0x28);
    bVar2 = (bool)(bVar1 >> 7);
  }
  else {
    bVar2 = *(int *)(param_2 + 200) <= *(int *)(param_3 + 200);
  }
  if (bVar2 != false) {
    FUN_18028b990(param_3,param_2);
    if (*(int *)(param_2 + 200) == *(int *)(param_1 + 200)) {
      bVar1 = FUN_180023470(param_2 + 0x28,param_1 + 0x28);
      bVar2 = (bool)(bVar1 >> 7);
    }
    else {
      bVar2 = *(int *)(param_1 + 200) <= *(int *)(param_2 + 200);
    }
    if (bVar2 != false) {
      FUN_18028b990(param_2,param_1);
    }
  }
  return;
}



/* ===== 18028b990 FUN_18028b990 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18028b990(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_138 [32];
  undefined4 local_118 [2];
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_138;
  FUN_1802774b0(local_118,param_1,param_3,param_1);
  FUN_18027ca40(param_1,param_2);
  *param_2 = local_118[0];
  FUN_18002ba60(param_2 + 2,local_110);
  FUN_18002ba60(param_2 + 10,local_f0);
  FUN_18002ba60(param_2 + 0x12,local_d0);
  FUN_18002ba60(param_2 + 0x1a,local_b0);
  FUN_18002ba60(param_2 + 0x22,local_90);
  FUN_18002ba60(param_2 + 0x2a,local_70);
  param_2[0x32] = local_50;
  param_2[0x33] = local_4c;
  *(undefined1 *)(param_2 + 0x34) = local_48;
  FUN_18002ba60(param_2 + 0x36,local_40);
  FUN_18000f890(local_40);
  FUN_18000f890(local_70);
  FUN_18000f890(local_90);
  FUN_18000f890(local_b0);
  FUN_18000f890(local_d0);
  FUN_18000f890(local_f0);
  FUN_18000f890(local_110);
  return;
}



/* ===== 18028bae0 FUN_18028bae0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18028bae0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_c8;
  uVar1 = *param_1;
  local_a0 = *(undefined8 *)(param_1 + 2);
  uStack_98 = *(undefined8 *)(param_1 + 4);
  uStack_90 = *(undefined8 *)(param_1 + 6);
  local_88 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0xf;
  local_80 = *(undefined8 *)(param_1 + 10);
  local_68 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = *(undefined8 *)(param_1 + 0xc);
  uStack_70 = *(undefined8 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xf;
  local_60 = *(undefined8 *)(param_1 + 0x12);
  local_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = *(undefined8 *)(param_1 + 0x14);
  uStack_50 = param_1[0x16];
  uStack_4c = param_1[0x17];
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  local_40 = param_1[0x1a];
  local_3c = param_1[0x1b];
  *param_1 = *param_2;
  local_a8 = uVar1;
  FUN_18002ba60(param_1 + 2,param_2 + 2);
  FUN_18002ba60(param_1 + 10,param_2 + 10);
  FUN_18002ba60(param_1 + 0x12,param_2 + 0x12);
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  *param_2 = uVar1;
  FUN_18002ba60(param_2 + 2,&local_a0);
  FUN_18002ba60(param_2 + 10,&local_80);
  FUN_18002ba60(param_2 + 0x12,&local_60);
  param_2[0x1a] = local_40;
  param_2[0x1b] = local_3c;
  FUN_18000f890(&local_60);
  FUN_18000f890(&local_80);
  FUN_18000f890(&local_a0);
  return;
}



/* ===== 18028bcb0 FUN_18028bcb0 ===== */

void FUN_18028bcb0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_18028bd80(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_18000f890(puVar1 + 6);
      FUN_18000f890(puVar1 + 2);
      thunk_FUN_1803d64e0(puVar1,0x50);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_180026a10(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8);
  }
  return;
}



/* ===== 18028bd80 FUN_18028bd80 ===== */

longlong * FUN_18028bd80(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  if (param_2 == param_3) {
    return param_3;
  }
  plVar13 = param_2 + 2;
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar4 = (undefined8 *)param_2[1];
  if (0xf < (ulonglong)param_2[5]) {
    plVar13 = (longlong *)*plVar13;
  }
  uVar9 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (param_2[4] != 0) {
    do {
      pbVar1 = (byte *)(uVar9 + (longlong)plVar13);
      uVar9 = uVar9 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar9 < (ulonglong)param_2[4]);
  }
  lVar6 = (*(ulonglong *)(param_1 + 0x30) & uVar10) * 0x10;
  plVar13 = *(longlong **)(lVar6 + lVar2);
  plVar7 = (longlong *)(lVar6 + 8 + lVar2);
  plVar5 = (longlong *)*plVar7;
  plVar11 = param_2;
  do {
    plVar12 = (longlong *)*plVar11;
    FUN_18000f890(plVar11 + 6);
    FUN_18000f890(plVar11 + 2);
    thunk_FUN_1803d64e0(plVar11,0x50);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar11 == plVar5) {
      if (plVar13 == param_2) {
        *(longlong *)(lVar6 + lVar2) = (longlong)puVar3;
        puVar8 = puVar3;
      }
      else {
        puVar8 = puVar4;
      }
      *plVar7 = (longlong)puVar8;
      while (plVar12 != param_3) {
        plVar13 = plVar12 + 2;
        if (0xf < (ulonglong)plVar12[5]) {
          plVar13 = (longlong *)*plVar13;
        }
        uVar9 = 0;
        uVar10 = 0xcbf29ce484222325;
        if (plVar12[4] != 0) {
          do {
            pbVar1 = (byte *)(uVar9 + (longlong)plVar13);
            uVar9 = uVar9 + 1;
            uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
          } while (uVar9 < (ulonglong)plVar12[4]);
        }
        uVar10 = *(ulonglong *)(param_1 + 0x30) & uVar10;
        plVar5 = *(longlong **)(lVar2 + 8 + uVar10 * 0x10);
        plVar13 = (longlong *)(lVar2 + uVar10 * 0x10);
        plVar11 = plVar12;
        while( true ) {
          plVar12 = (longlong *)*plVar11;
          FUN_18000f890(plVar11 + 6);
          FUN_18000f890(plVar11 + 2);
          thunk_FUN_1803d64e0(plVar11,0x50);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar11 == plVar5) break;
          plVar11 = plVar12;
          if (plVar12 == param_3) {
            *plVar13 = (longlong)plVar12;
            goto LAB_18028bf7d;
          }
        }
        *plVar13 = (longlong)puVar3;
        *(undefined8 **)(lVar2 + 8 + uVar10 * 0x10) = puVar3;
      }
      goto LAB_18028bf7d;
    }
    plVar11 = plVar12;
  } while (plVar12 != param_3);
  if (plVar13 == param_2) {
    *(longlong *)(lVar6 + lVar2) = (longlong)plVar12;
  }
LAB_18028bf7d:
  *puVar4 = plVar12;
  plVar12[1] = (longlong)puVar4;
  return param_3;
}



/* ===== 18028bfe0 FUN_18028bfe0 ===== */

ulonglong FUN_18028bfe0(longlong param_1,ulonglong param_2,longlong *param_3,ulonglong param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  lVar13 = *param_3;
  lVar9 = param_3[1];
  if (lVar13 != param_3[1]) {
    param_3[1] = lVar13;
    lVar9 = lVar13;
  }
  uVar4 = param_3[2] - lVar13;
  if (uVar4 < param_4) {
    if (0x7fffffffffffffff < param_4) {
LAB_18028c2b4:
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    uVar5 = FUN_18000fb70(param_4);
    FUN_180540530(uVar5,*param_3,param_3[1] - *param_3);
    uVar4 = FUN_180082ac0(param_3,uVar5,lVar9 - lVar13,param_4);
  }
  uVar11 = 0;
  if (param_2 != 0) {
    do {
      bVar2 = *(byte *)(uVar11 + param_1);
      uVar11 = uVar11 + 1;
      uVar7 = (ulonglong)(bVar2 >> 4);
      if (uVar7 == 0xf) {
        do {
          if (param_2 <= uVar11) goto LAB_18028c2b0;
          pbVar1 = (byte *)(uVar11 + param_1);
          uVar4 = (ulonglong)*pbVar1;
          uVar11 = uVar11 + 1;
          uVar7 = uVar7 + uVar4;
        } while (*pbVar1 == 0xff);
      }
      uVar7 = uVar7 + uVar11;
      if (param_2 < uVar7) {
LAB_18028c2b0:
        return uVar4 & 0xffffffffffffff00;
      }
      uVar4 = FUN_180211af0(param_3,param_3[1],uVar11 + param_1,uVar7 - uVar11);
      if (param_2 <= uVar7) break;
      uVar11 = uVar7 + 2;
      if (param_2 < uVar11) goto LAB_18028c2b0;
      uVar4 = 0;
      uVar7 = (ulonglong)
              CONCAT11(*(undefined1 *)(uVar7 + 1 + param_1),*(undefined1 *)(uVar7 + param_1));
      if (uVar7 == 0) goto LAB_18028c2b0;
      uVar4 = param_3[1] - *param_3;
      if (uVar4 < uVar7) goto LAB_18028c2b0;
      uVar14 = (ulonglong)(bVar2 & 0xf);
      if (uVar14 == 0xf) {
        do {
          if (param_2 <= uVar11) goto LAB_18028c2b0;
          pbVar1 = (byte *)(uVar11 + param_1);
          uVar4 = (ulonglong)*pbVar1;
          uVar11 = uVar11 + 1;
          uVar14 = uVar14 + uVar4;
        } while (*pbVar1 == 0xff);
      }
      uVar4 = 0;
      lVar13 = (param_3[1] - uVar7) - *param_3;
      if (uVar14 != 0xfffffffffffffffc) {
        do {
          lVar9 = *param_3;
          puVar10 = (undefined1 *)param_3[1];
          if (puVar10 == (undefined1 *)param_3[2]) {
            lVar12 = (longlong)puVar10 - lVar9;
            if (lVar12 == 0x7fffffffffffffff) goto LAB_18028c2b4;
            uVar8 = param_3[2] - lVar9;
            uVar7 = lVar12 + 1;
            if (0x7fffffffffffffff - (uVar8 >> 1) < uVar8) {
              uVar8 = 0x7fffffffffffffff;
            }
            else {
              uVar8 = (uVar8 >> 1) + uVar8;
              if (uVar8 < uVar7) {
                uVar8 = uVar7;
              }
            }
            lVar6 = FUN_18000fb70(uVar8);
            *(undefined1 *)(lVar6 + lVar12) = *(undefined1 *)(lVar13 + lVar9 + uVar4);
            puVar3 = (undefined1 *)*param_3;
            if (puVar10 == (undefined1 *)param_3[1]) {
              lVar12 = param_3[1] - (longlong)puVar3;
              lVar9 = lVar6;
              puVar10 = puVar3;
            }
            else {
              FUN_180540530(lVar6,puVar3,(longlong)puVar10 - (longlong)puVar3);
              lVar9 = lVar12 + 1 + lVar6;
              lVar12 = param_3[1] - (longlong)puVar10;
            }
            FUN_180540530(lVar9,puVar10,lVar12);
            FUN_180082ac0(param_3,lVar6,uVar7,uVar8);
          }
          else {
            *puVar10 = *(undefined1 *)(lVar13 + lVar9 + uVar4);
            param_3[1] = param_3[1] + 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar14 + 4);
      }
      uVar4 = param_3[1] - *param_3;
      if (param_4 < uVar4) goto LAB_18028c2b0;
    } while (uVar11 < param_2);
  }
  return CONCAT71((int7)((ulonglong)(param_3[1] - *param_3) >> 8),param_3[1] - *param_3 == param_4);
}



/* ===== 18028c2c0 FUN_18028c2c0 ===== */

bool FUN_18028c2c0(longlong *param_1,byte param_2,undefined4 *param_3,int param_4)

{
  undefined8 *puVar1;
  float fVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  byte bVar16;
  short sVar17;
  ushort uVar18;
  int iVar19;
  uint uVar20;
  undefined1 uVar21;
  longlong lVar22;
  double dVar23;
  
  if (((char)param_1[0x16] != '\0') || (0x40 < param_4)) {
switchD_18028c311_caseD_6:
    return false;
  }
  switch(param_2 - 1) {
  case 0:
    *param_3 = 0;
    return (char)param_1[0x16] == '\0';
  case 1:
    *param_3 = 1;
    lVar10 = param_1[7] + param_1[0x10];
    param_1[0x10] = param_1[0x10] + 1;
    lVar22 = *(longlong *)*param_1;
    if ((ulonglong)(((longlong *)*param_1)[1] - lVar22) < lVar10 + 1U) {
      *(undefined1 *)(param_1 + 0x16) = 1;
      *(undefined1 *)(param_3 + 1) = 0;
      return (char)param_1[0x16] == '\0';
    }
    *(bool *)(param_3 + 1) = *(char *)(lVar22 + lVar10) != '\0';
    return (char)param_1[0x16] == '\0';
  case 2:
    *param_3 = 2;
    lVar22 = param_1[10] + param_1[0x13] * 8;
    param_1[0x13] = param_1[0x13] + 1;
    lVar10 = *(longlong *)*param_1;
    if ((ulonglong)(((longlong *)*param_1)[1] - lVar10) < lVar22 + 8U) {
      *(undefined1 *)(param_1 + 0x16) = 1;
      *(undefined8 *)(param_3 + 2) = 0;
      return (char)param_1[0x16] == '\0';
    }
    *(double *)(param_3 + 2) = (double)*(longlong *)(lVar10 + lVar22);
    return (char)param_1[0x16] == '\0';
  case 3:
    *param_3 = 2;
    lVar22 = param_1[10] + param_1[0x13] * 8;
    param_1[0x13] = param_1[0x13] + 1;
    lVar10 = *(longlong *)*param_1;
    if ((ulonglong)(((longlong *)*param_1)[1] - lVar10) < lVar22 + 8U) {
      uVar9 = 0;
      *(undefined1 *)(param_1 + 0x16) = 1;
    }
    else {
      uVar9 = *(ulonglong *)(lVar10 + lVar22);
    }
    if ((longlong)uVar9 < 0) {
      *(double *)(param_3 + 2) = (double)uVar9;
      return (char)param_1[0x16] == '\0';
    }
    *(double *)(param_3 + 2) = (double)(longlong)uVar9;
    return (char)param_1[0x16] == '\0';
  case 4:
    *param_3 = 2;
    lVar22 = param_1[10] + param_1[0x13] * 8;
    param_1[0x13] = param_1[0x13] + 1;
    lVar10 = *(longlong *)*param_1;
    if ((ulonglong)(((longlong *)*param_1)[1] - lVar10) < lVar22 + 8U) {
      *(undefined1 *)(param_1 + 0x16) = 1;
      *(undefined8 *)(param_3 + 2) = 0;
      return (char)param_1[0x16] == '\0';
    }
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(lVar10 + lVar22);
    return (char)param_1[0x16] == '\0';
  case 5:
    *param_3 = 3;
    lVar22 = param_1[9] + param_1[0x12] * 4;
    param_1[0x12] = param_1[0x12] + 1;
    lVar10 = *(longlong *)*param_1;
    if ((ulonglong)(((longlong *)*param_1)[1] - lVar10) < lVar22 + 4U) {
      iVar19 = 0;
      *(undefined1 *)(param_1 + 0x16) = 1;
    }
    else {
      iVar19 = *(int *)(lVar10 + lVar22);
      if (iVar19 < 0) break;
    }
    if ((((ulonglong)(longlong)iVar19 < (ulonglong)(param_1[3] - param_1[2] >> 5)) &&
        (puVar15 = (undefined8 *)((longlong)iVar19 * 0x20 + param_1[2]),
        puVar15 != (undefined8 *)0x0)) && (puVar4 = (undefined8 *)(param_3 + 4), puVar4 != puVar15))
    {
      if ((ulonglong)puVar15[3] < 0x10) {
        FUN_180029840(puVar4,puVar15,puVar15[2]);
        return (char)param_1[0x16] == '\0';
      }
      FUN_180029840(puVar4,*puVar15,puVar15[2]);
      return (char)param_1[0x16] == '\0';
    }
    break;
  default:
    goto switchD_18028c311_caseD_6;
  case 7:
    lVar22 = param_1[9] + param_1[0x12] * 4;
    param_1[0x12] = param_1[0x12] + 1;
    lVar10 = *(longlong *)*param_1;
    if ((ulonglong)(((longlong *)*param_1)[1] - lVar10) < lVar22 + 4U) {
      iVar19 = 0;
      *(undefined1 *)(param_1 + 0x16) = 1;
    }
    else {
      iVar19 = *(int *)(lVar10 + lVar22);
    }
    *param_3 = 4;
    FUN_18028dd60(param_3 + 0xc,(longlong)iVar19);
    lVar22 = *(longlong *)(param_3 + 0xc);
    lVar10 = *(longlong *)(param_3 + 0xe);
    while( true ) {
      if (lVar22 == lVar10) {
        return true;
      }
      lVar14 = param_1[0x14];
      uVar9 = param_1[0xb] + lVar14;
      param_1[0x14] = lVar14 + 1;
      lVar3 = *(longlong *)*param_1;
      if ((ulonglong)(((longlong *)*param_1)[1] - lVar3) < uVar9 + 1) {
        *(undefined1 *)(param_1 + 0x16) = 1;
        uVar9 = uVar9 & 0xffffffffffffff00;
      }
      else {
        bVar16 = *(byte *)(uVar9 + lVar3);
        uVar9 = (ulonglong)bVar16;
        if ((char)bVar16 < '\0') {
          uVar9 = (ulonglong)(bVar16 & 0x7f);
          param_1[0x14] = lVar14 + 2;
        }
      }
      cVar7 = FUN_18028c2c0(param_1,uVar9,lVar22,param_4 + 1);
      if (cVar7 == '\0') break;
      lVar22 = lVar22 + 0x60;
    }
    return false;
  case 8:
    if ((char)param_1[5] == '\0') {
      lVar22 = param_1[9] + param_1[0x12] * 4;
      param_1[0x12] = param_1[0x12] + 1;
    }
    else {
      lVar22 = param_1[6] + param_1[0xf] * 4;
      param_1[0xf] = param_1[0xf] + 1;
    }
    lVar10 = *(longlong *)*param_1;
    if ((ulonglong)(((longlong *)*param_1)[1] - lVar10) < lVar22 + 4U) {
      *(undefined1 *)(param_1 + 0x16) = 1;
      iVar19 = 0;
    }
    else {
      iVar19 = *(int *)(lVar10 + lVar22);
    }
    if (iVar19 < 0) {
      return false;
    }
    *param_3 = 5;
    lVar10 = *(longlong *)(param_3 + 0x14);
    lVar22 = *(longlong *)(param_3 + 0x12);
    uVar11 = (ulonglong)iVar19;
    uVar9 = lVar10 - lVar22 >> 7;
    if (uVar11 < uVar9) {
      lVar22 = uVar11 * 0x80 + lVar22;
      for (lVar14 = lVar22; lVar14 != lVar10; lVar14 = lVar14 + 0x80) {
        FUN_1800fc680(lVar14 + 0x20);
        FUN_18000f890(lVar14);
      }
      *(longlong *)(param_3 + 0x14) = lVar22;
    }
    else if (uVar9 < uVar11) {
      if ((ulonglong)(*(longlong *)(param_3 + 0x16) - lVar22 >> 7) < uVar11) {
        FUN_18028e0b0(param_3 + 0x12);
      }
      else {
        uVar8 = FUN_18028e2f0(lVar10,uVar11 - uVar9);
        *(undefined8 *)(param_3 + 0x14) = uVar8;
      }
    }
    puVar15 = *(undefined8 **)(param_3 + 0x12);
    puVar4 = *(undefined8 **)(param_3 + 0x14);
    if (puVar15 != puVar4) {
      while( true ) {
        lVar22 = param_1[9] + param_1[0x12] * 4;
        param_1[0x12] = param_1[0x12] + 1;
        lVar10 = *(longlong *)*param_1;
        if ((ulonglong)(((longlong *)*param_1)[1] - lVar10) < lVar22 + 4U) {
          iVar19 = 0;
          *(undefined1 *)(param_1 + 0x16) = 1;
        }
        else {
          iVar19 = *(int *)(lVar22 + lVar10);
          if (iVar19 < 0) {
            return false;
          }
        }
        if ((ulonglong)(param_1[3] - param_1[2] >> 5) <= (ulonglong)(longlong)iVar19) {
          return false;
        }
        puVar12 = (undefined8 *)(param_1[2] + (longlong)iVar19 * 0x20);
        if (puVar12 == (undefined8 *)0x0) {
          return false;
        }
        if (puVar15 != puVar12) {
          puVar1 = puVar12 + 2;
          if (0xf < (ulonglong)puVar12[3]) {
            puVar12 = (undefined8 *)*puVar12;
          }
          FUN_180029840(puVar15,puVar12,*puVar1);
        }
        lVar22 = param_1[0x14];
        uVar9 = param_1[0xb] + lVar22;
        param_1[0x14] = lVar22 + 1;
        lVar10 = *(longlong *)*param_1;
        if ((ulonglong)(((longlong *)*param_1)[1] - lVar10) < uVar9 + 1) {
          *(undefined1 *)(param_1 + 0x16) = 1;
          uVar9 = uVar9 & 0xffffffffffffff00;
        }
        else {
          bVar16 = *(byte *)(uVar9 + lVar10);
          uVar9 = (ulonglong)bVar16;
          if ((char)bVar16 < '\0') {
            uVar9 = (ulonglong)(bVar16 & 0x7f);
            param_1[0x14] = lVar22 + 2;
          }
        }
        cVar7 = FUN_18028c2c0(param_1,uVar9,puVar15 + 4,param_4 + 1);
        if (cVar7 == '\0') break;
        puVar15 = puVar15 + 0x10;
        if (puVar15 == puVar4) {
          return (char)param_1[0x16] == '\0';
        }
      }
      return false;
    }
    break;
  case 9:
    plVar5 = (longlong *)*param_1;
    lVar22 = param_1[9] + param_1[0x12] * 4;
    param_1[0x12] = param_1[0x12] + 1;
    if ((ulonglong)(plVar5[1] - *plVar5) < lVar22 + 4U) {
      iVar19 = 0;
      *(undefined1 *)(param_1 + 0x16) = 1;
    }
    else {
      iVar19 = *(int *)(*plVar5 + lVar22);
      if (iVar19 < 0) {
        return false;
      }
    }
    lVar22 = param_1[0x14];
    param_1[0x14] = lVar22 + 1;
    if ((ulonglong)(plVar5[1] - *plVar5) < param_1[0xb] + lVar22 + 1U) {
      *(undefined1 *)(param_1 + 0x16) = 1;
      bVar16 = 0;
    }
    else {
      bVar16 = *(byte *)(param_1[0xb] + lVar22 + *plVar5);
      if ((char)bVar16 < '\0') {
        bVar16 = bVar16 & 0x7f;
        param_1[0x14] = lVar22 + 2;
      }
    }
    *param_3 = 4;
    FUN_18028dd60(param_3 + 0xc,(longlong)iVar19);
    lVar22 = *(longlong *)(param_3 + 0xc);
    lVar10 = *(longlong *)(param_3 + 0xe);
    while( true ) {
      if (lVar22 == lVar10) {
        return true;
      }
      cVar7 = FUN_18028c2c0(param_1,bVar16,lVar22,param_4 + 1);
      if (cVar7 == '\0') break;
      lVar22 = lVar22 + 0x60;
    }
    return false;
  case 10:
    *param_3 = 2;
    lVar22 = param_1[9] + param_1[0x12] * 4;
    param_1[0x12] = param_1[0x12] + 1;
    lVar10 = *(longlong *)*param_1;
    if ((ulonglong)(((longlong *)*param_1)[1] - lVar10) < lVar22 + 4U) {
      *(undefined1 *)(param_1 + 0x16) = 1;
      *(undefined8 *)(param_3 + 2) = 0;
      return (char)param_1[0x16] == '\0';
    }
    *(double *)(param_3 + 2) = (double)*(int *)(lVar10 + lVar22);
    return (char)param_1[0x16] == '\0';
  case 0xb:
    *param_3 = 2;
    lVar22 = param_1[9] + param_1[0x12] * 4;
    param_1[0x12] = param_1[0x12] + 1;
    lVar10 = *(longlong *)*param_1;
    if ((ulonglong)(((longlong *)*param_1)[1] - lVar10) < lVar22 + 4U) {
      uVar20 = 0;
      *(undefined1 *)(param_1 + 0x16) = 1;
    }
    else {
      uVar20 = *(uint *)(lVar10 + lVar22);
    }
    *(double *)(param_3 + 2) = (double)uVar20;
    return (char)param_1[0x16] == '\0';
  case 0xc:
    *param_3 = 1;
    *(undefined1 *)(param_3 + 1) = 1;
    return (char)param_1[0x16] == '\0';
  case 0xd:
    *param_3 = 1;
    *(undefined1 *)(param_3 + 1) = 0;
    return (char)param_1[0x16] == '\0';
  case 0xe:
  case 0x10:
    *param_3 = 2;
    *(undefined8 *)(param_3 + 2) = 0;
    return (char)param_1[0x16] == '\0';
  case 0xf:
  case 0x11:
    *param_3 = 2;
    *(undefined8 *)(param_3 + 2) = 0x3ff0000000000000;
    return (char)param_1[0x16] == '\0';
  case 0x12:
    *param_3 = 2;
    lVar22 = param_1[9] + param_1[0x12] * 4;
    param_1[0x12] = param_1[0x12] + 1;
    lVar10 = *(longlong *)*param_1;
    if ((ulonglong)(((longlong *)*param_1)[1] - lVar10) < lVar22 + 4U) {
      *(undefined1 *)(param_1 + 0x16) = 1;
      *(undefined8 *)(param_3 + 2) = 0;
      return (char)param_1[0x16] == '\0';
    }
    *(double *)(param_3 + 2) = (double)*(float *)(lVar22 + lVar10);
    return (char)param_1[0x16] == '\0';
  case 0x13:
    *param_3 = 2;
    lVar22 = param_1[8] + param_1[0x11] * 2;
    param_1[0x11] = param_1[0x11] + 1;
    lVar10 = *(longlong *)*param_1;
    if ((ulonglong)(((longlong *)*param_1)[1] - lVar10) < lVar22 + 2U) {
      sVar17 = 0;
      *(undefined1 *)(param_1 + 0x16) = 1;
    }
    else {
      sVar17 = *(short *)(lVar10 + lVar22);
    }
    *(double *)(param_3 + 2) = (double)(int)sVar17;
    return (char)param_1[0x16] == '\0';
  case 0x14:
    *param_3 = 2;
    lVar22 = param_1[8] + param_1[0x11] * 2;
    param_1[0x11] = param_1[0x11] + 1;
    lVar10 = *(longlong *)*param_1;
    if ((ulonglong)(((longlong *)*param_1)[1] - lVar10) < lVar22 + 2U) {
      uVar18 = 0;
      *(undefined1 *)(param_1 + 0x16) = 1;
    }
    else {
      uVar18 = *(ushort *)(lVar10 + lVar22);
    }
    *(double *)(param_3 + 2) = (double)uVar18;
    return (char)param_1[0x16] == '\0';
  case 0x17:
    plVar5 = (longlong *)*param_1;
    lVar22 = param_1[7] + param_1[0x10];
    param_1[0x10] = param_1[0x10] + 1;
    if ((ulonglong)(plVar5[1] - *plVar5) < lVar22 + 1U) {
      uVar21 = 0;
      *(undefined1 *)(param_1 + 0x16) = 1;
    }
    else {
      uVar21 = *(undefined1 *)(lVar22 + *plVar5);
    }
    lVar22 = param_1[0x14];
    param_1[0x14] = lVar22 + 1;
    if ((ulonglong)(plVar5[1] - *plVar5) < param_1[0xb] + lVar22 + 1U) {
      *(undefined1 *)(param_1 + 0x16) = 1;
      bVar16 = 0;
    }
    else {
      bVar16 = *(byte *)(*plVar5 + param_1[0xb] + lVar22);
      if ((char)bVar16 < '\0') {
        bVar16 = bVar16 & 0x7f;
        param_1[0x14] = lVar22 + 2;
      }
    }
    *param_3 = 4;
    FUN_18028dd60(param_3 + 0xc,uVar21);
    lVar22 = *(longlong *)(param_3 + 0xc);
    lVar10 = *(longlong *)(param_3 + 0xe);
    while( true ) {
      if (lVar22 == lVar10) {
        return true;
      }
      cVar7 = FUN_18028c2c0(param_1,bVar16,lVar22,param_4 + 1);
      if (cVar7 == '\0') break;
      lVar22 = lVar22 + 0x60;
    }
    return false;
  case 0x18:
    plVar5 = (longlong *)*param_1;
    lVar22 = param_1[7] + param_1[0x10];
    param_1[0x10] = param_1[0x10] + 1;
    if ((ulonglong)(plVar5[1] - *plVar5) < lVar22 + 1U) {
      uVar21 = 0;
      *(undefined1 *)(param_1 + 0x16) = 1;
    }
    else {
      uVar21 = *(undefined1 *)(lVar22 + *plVar5);
    }
    lVar22 = param_1[0x14];
    param_1[0x14] = lVar22 + 1;
    if ((ulonglong)(plVar5[1] - *plVar5) < param_1[0xb] + lVar22 + 1U) {
      *(undefined1 *)(param_1 + 0x16) = 1;
      bVar16 = 0;
    }
    else {
      bVar16 = *(byte *)(*plVar5 + param_1[0xb] + lVar22);
      if ((char)bVar16 < '\0') {
        bVar16 = bVar16 & 0x7f;
        param_1[0x14] = lVar22 + 2;
      }
    }
    *param_3 = 4;
    FUN_18028dd60(param_3 + 0xc,uVar21);
    puVar6 = *(undefined4 **)(param_3 + 0xe);
    for (puVar13 = *(undefined4 **)(param_3 + 0xc); puVar13 != puVar6; puVar13 = puVar13 + 0x18) {
      if (param_1[1] == 0) {
        return false;
      }
      *puVar13 = 2;
      if (bVar16 == 5) {
        lVar22 = param_1[0xc] + param_1[0x15] * 8;
        param_1[0x15] = param_1[0x15] + 1;
        lVar10 = *(longlong *)param_1[1];
        if ((ulonglong)(((longlong *)param_1[1])[1] - lVar10) < lVar22 + 8U) {
          return false;
        }
        dVar23 = *(double *)(lVar22 + lVar10);
      }
      else {
        if ((bVar16 - 0xb & 0xf6) != 0) {
          return false;
        }
        if (bVar16 == 0x14) {
          return false;
        }
        lVar22 = param_1[0xd] + param_1[0xe] * 4;
        param_1[0xe] = param_1[0xe] + 1;
        lVar10 = *(longlong *)param_1[1];
        if ((ulonglong)(((longlong *)param_1[1])[1] - lVar10) < lVar22 + 4U) {
          return false;
        }
        fVar2 = *(float *)(lVar22 + lVar10);
        if (bVar16 == 0xb) {
          dVar23 = (double)(int)fVar2;
        }
        else if (bVar16 == 0xc) {
          dVar23 = (double)(uint)fVar2;
        }
        else {
          dVar23 = (double)fVar2;
        }
      }
      *(double *)(puVar13 + 2) = dVar23;
    }
  }
  return (char)param_1[0x16] == '\0';
}



/* ===== 18028d0a0 FUN_18028d0a0 ===== */

undefined1 FUN_18028d0a0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined1 uVar8;
  undefined1 **ppuVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 **ppuVar12;
  undefined1 *puVar13;
  undefined1 **ppuVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 **ppuVar19;
  undefined1 *puVar20;
  uint uVar21;
  undefined1 **ppuVar22;
  undefined1 *puVar23;
  longlong local_res8;
  undefined1 *local_res10;
  undefined8 local_res18;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  undefined1 *local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined1 **local_f8;
  undefined8 local_f0;
  undefined1 **local_e8;
  undefined1 **ppuStack_e0;
  undefined1 **local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48;
  
  local_118 = (undefined1 *)0x0;
  lStack_110 = 0;
  local_108 = 0;
  uVar2 = *(uint *)(param_2 + 0x20);
  lVar10 = *param_1;
  local_res18 = param_3;
  if ((ulonglong)uVar2 + 0x48 <= (ulonglong)(param_1[1] - lVar10)) {
    if (*(int *)(param_2 + 4) == 0) {
      if (*(uint *)(param_2 + 0x1c) <= uVar2) {
        FUN_18028de20(&local_118,lVar10 + 0x48,*(uint *)(param_2 + 0x1c));
LAB_18028d137:
        puVar17 = auStack_138;
        local_f0 = 0;
        local_e8 = (undefined1 **)0x0;
        ppuStack_e0 = (undefined1 **)0x0;
        local_d8 = (undefined1 **)0x0;
        local_d0 = 0;
        local_c8 = 0;
        local_a0 = (undefined1 *)0x0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        ppuVar19 = &local_118;
        local_f8 = ppuVar19;
        local_c0 = 0;
        local_b8 = (ulonglong)*(uint *)(param_2 + 8) + 1 & 0xfffffffffffffffe;
        local_b0 = (ulonglong)(uint)(*(int *)(param_2 + 0x24) * 2) + 3 + local_b8 &
                   0xfffffffffffffffc;
        local_a8 = (ulonglong)(uint)(*(int *)(param_2 + 0xc) << 2) + 7 + local_b0 &
                   0xfffffffffffffff8;
        puVar23 = (undefined1 *)((uint)(*(int *)(param_2 + 0x10) << 3) + local_a8);
        local_68 = 1;
        if ((ulonglong)(lStack_110 - (longlong)local_118) < local_b0 + 4) {
          local_48 = 1;
LAB_18028d1f6:
          ppuVar9 = (undefined1 **)0x0;
          lVar10 = 0;
LAB_18028d1fb:
          for (ppuVar14 = *(undefined1 ***)(puVar17 + 0x50); ppuVar14 != ppuVar9;
              ppuVar14 = ppuVar14 + 4) {
            puVar23 = puVar23 + (longlong)(ppuVar14[2] + 1);
          }
          local_a0 = puVar23;
          puVar23 = puVar23 + lVar10;
          local_58 = lVar10 + 1;
          if (ppuVar19[1] + -(longlong)*ppuVar19 < puVar23 + 1) {
            local_48 = 1;
            uVar11 = (ulonglong)puVar23 & 0xffffffffffffff00;
          }
          else {
            bVar1 = puVar23[(longlong)*ppuVar19];
            uVar11 = (ulonglong)bVar1;
            if ((char)bVar1 < '\0') {
              uVar11 = (ulonglong)(bVar1 & 0x7f);
              local_58 = lVar10 + 2;
            }
          }
          *(undefined8 *)(puVar17 + -8) = 0x18028d432;
          uVar8 = FUN_18028c2c0(puVar17 + 0x40,uVar11,param_3,0);
          puVar16 = puVar17;
        }
        else {
          uVar2 = *(uint *)(local_118 + local_b0);
          puVar18 = (undefined1 *)(lStack_110 - (longlong)local_118);
          puVar16 = auStack_138;
          if (-1 < (int)uVar2) {
            if (uVar2 == 0) goto LAB_18028d1f6;
            puVar20 = (undefined1 *)((ulonglong)uVar2 * 0x20);
            puVar15 = local_118;
            ppuVar9 = (undefined1 **)FUN_18000fb70();
            ppuVar22 = ppuStack_e0;
            puVar17 = auStack_138;
            ppuVar14 = ppuVar9;
            for (ppuVar12 = local_e8; ppuVar12 != ppuStack_e0; ppuVar12 = ppuVar12 + 4) {
              *ppuVar14 = (undefined1 *)0x0;
              ppuVar14[1] = (undefined1 *)0x0;
              ppuVar14[2] = (undefined1 *)0x0;
              ppuVar14[3] = (undefined1 *)0x0;
              uVar4 = *(undefined4 *)((longlong)ppuVar12 + 4);
              uVar5 = *(undefined4 *)(ppuVar12 + 1);
              uVar6 = *(undefined4 *)((longlong)ppuVar12 + 0xc);
              *(undefined4 *)ppuVar14 = *(undefined4 *)ppuVar12;
              *(undefined4 *)((longlong)ppuVar14 + 4) = uVar4;
              *(undefined4 *)(ppuVar14 + 1) = uVar5;
              *(undefined4 *)((longlong)ppuVar14 + 0xc) = uVar6;
              puVar16 = ppuVar12[3];
              ppuVar14[2] = ppuVar12[2];
              ppuVar14[3] = puVar16;
              ppuVar12[2] = (undefined1 *)0x0;
              ppuVar12[3] = (undefined1 *)0xf;
              *(undefined1 *)ppuVar12 = 0;
              ppuVar14 = ppuVar14 + 4;
            }
            ppuVar14 = local_e8;
            if (local_e8 != (undefined1 **)0x0) {
              for (; ppuVar14 != ppuVar22; ppuVar14 = ppuVar14 + 4) {
                FUN_18000f890(ppuVar14);
              }
              uVar11 = (longlong)local_d8 - (longlong)local_e8 & 0xffffffffffffffe0;
              ppuVar14 = local_e8;
              if (0xfff < uVar11) {
                ppuVar14 = (undefined1 **)local_e8[-1];
                puVar13 = (undefined1 *)((longlong)local_e8 + (-8 - (longlong)ppuVar14));
                if ((undefined1 *)0x1f < puVar13) {
                  lVar10 = 5;
                  pcVar3 = (code *)swi(0x29);
                  (*pcVar3)();
                  puVar17 = auStack_130;
                  goto LAB_18028d391;
                }
                uVar11 = uVar11 + 0x27;
              }
              thunk_FUN_1803d64e0(ppuVar14,uVar11);
            }
            local_e8 = ppuVar9;
            ppuStack_e0 = ppuVar9;
            local_d8 = ppuVar9 + (ulonglong)uVar2 * 4;
            puVar20 = (undefined1 *)0x0;
            ppuVar22 = (undefined1 **)0x0;
            puVar15 = puVar23;
            while (puVar16 = puVar17, puVar15 < puVar18) {
              lVar10 = *(longlong *)(puVar17 + 0x20);
              puVar13 = puVar15;
              while( true ) {
                if ((undefined1 *)(*(longlong *)(puVar17 + 0x28) - lVar10) <= puVar13)
                goto LAB_18028d379;
                ppuVar19 = local_d8;
                if (puVar13[lVar10] == (char)puVar20) break;
                puVar13 = puVar13 + 1;
                if (puVar18 <= puVar13) goto LAB_18028d379;
              }
LAB_18028d391:
              local_res8 = (longlong)puVar13 - (longlong)puVar15;
              local_res10 = puVar15 + lVar10;
              if (ppuVar9 == ppuVar19) {
                *(undefined8 *)(puVar17 + -8) = 0x18028d3e3;
                FUN_18028dec0(puVar17 + 0x50,ppuVar9,&local_res10,&local_res8);
                ppuVar9 = *(undefined1 ***)(puVar17 + 0x58);
              }
              else {
                *ppuVar9 = (undefined1 *)0x0;
                ppuVar9[1] = (undefined1 *)0x0;
                ppuVar9[2] = puVar20;
                ppuVar9[3] = puVar20;
                *(undefined8 *)(puVar17 + -8) = 0x18028d3be;
                FUN_1800133a0(ppuVar9);
                ppuVar9 = (undefined1 **)(*(longlong *)(puVar17 + 0x58) + 0x20);
                *(undefined1 ***)(puVar17 + 0x58) = ppuVar9;
              }
              uVar21 = (int)ppuVar22 + 1;
              ppuVar22 = (undefined1 **)(ulonglong)uVar21;
              if ((int)uVar2 <= (int)uVar21) {
                ppuVar19 = *(undefined1 ***)(puVar17 + 0x40);
                lVar10 = local_58;
                param_3 = local_res18;
                goto LAB_18028d1fb;
              }
              puVar15 = puVar13 + 1;
            }
          }
LAB_18028d379:
          uVar8 = 0;
        }
        *(undefined8 *)(puVar16 + -8) = 0x18028d385;
        FUN_1800288b0(puVar16 + 0x50);
        goto LAB_18028d43c;
      }
    }
    else if ((*(int *)(param_2 + 4) == 1) &&
            (cVar7 = FUN_18028bfe0(lVar10 + 0x48,(ulonglong)uVar2,&local_118), cVar7 != '\0'))
    goto LAB_18028d137;
  }
  puVar16 = auStack_138;
  uVar8 = 0;
LAB_18028d43c:
  *(undefined8 *)(puVar16 + -8) = 0x18028d446;
  FUN_180081c30(puVar16 + 0x20);
  return uVar8;
}



/* ===== 18028d480 FUN_18028d480 ===== */

ulonglong FUN_18028d480(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  char cVar9;
  byte bVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [24];
  longlong local_178;
  ulonglong uStack_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 *local_138;
  longlong *local_130;
  undefined8 *local_128;
  undefined8 *puStack_120;
  undefined8 *local_118;
  undefined1 local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  local_160 = param_2;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uVar12 = 0;
  lVar21 = *param_1;
  lVar13 = param_1[1];
  do {
    uVar24 = uVar12 * 4 + 0x4c;
    if ((ulonglong)(lVar13 - lVar21) < uVar24) goto LAB_18028d9d0;
    *(undefined4 *)((longlong)&local_68 + uVar12 * 4) = *(undefined4 *)(lVar21 + 0x48 + uVar12 * 4);
    uVar12 = uVar12 + 1;
  } while (uVar12 < 0xc);
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uVar24 = local_68 >> 0x20;
  uVar12 = uVar24 + 0x78;
  local_70 = param_3;
  if ((ulonglong)(lVar13 - lVar21) < uVar12) {
LAB_18028d93d:
    puVar18 = auStack_198;
    bVar10 = 0;
  }
  else {
    if (*(int *)(param_2 + 4) != 0) {
      if ((*(int *)(param_2 + 4) == 1) &&
         (cVar9 = FUN_18028bfe0(lVar21 + 0x78,uVar24,&local_178), cVar9 != '\0'))
      goto LAB_18028d566;
      goto LAB_18028d93d;
    }
    if (uVar24 < (local_68 & 0xffffffff)) goto LAB_18028d93d;
    FUN_18028de20(&local_178,lVar21 + 0x78,local_68 & 0xffffffff);
LAB_18028d566:
    uVar25 = uStack_60 >> 0x20;
    lVar21 = *param_1;
    if ((ulonglong)(param_1[1] - lVar21) < uVar25 + 0x78 + uVar24) goto LAB_18028d93d;
    if (*(int *)(param_2 + 4) == 0) {
      if (uVar25 < (uStack_60 & 0xffffffff)) goto LAB_18028d93d;
      FUN_18028de20(&local_158,lVar21 + uVar12,uStack_60 & 0xffffffff);
    }
    else if ((*(int *)(param_2 + 4) != 1) ||
            (cVar9 = FUN_18028bfe0(lVar21 + uVar12,uVar25,&local_158), cVar9 == '\0'))
    goto LAB_18028d93d;
    puVar18 = auStack_198;
    local_128 = (undefined8 *)0x0;
    puStack_120 = (undefined8 *)0x0;
    uVar12 = 0;
    puVar22 = (undefined8 *)0x0;
    local_118 = (undefined8 *)0x0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    lVar21 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_138 = &local_158;
    local_130 = &local_178;
    local_110 = 1;
    uVar25 = (ulonglong)*(uint *)(param_2 + 8);
    uVar24 = uVar25 + 3 & 0xfffffffffffffffc;
    puVar8 = auStack_198;
    if (uStack_170 - local_178 < uVar24 + 4) {
LAB_18028d7b9:
      puVar18 = puVar8;
      bVar10 = 0;
    }
    else {
      iVar1 = *(int *)(local_178 + uVar24);
      uVar23 = (ulonglong)iVar1;
      puVar8 = auStack_198;
      if (iVar1 < 0) goto LAB_18028d7b9;
      lVar13 = local_178;
      uVar14 = uStack_170;
      if (iVar1 == 0) {
LAB_18028d77b:
        puVar11 = *(undefined8 **)(puVar18 + 0x78);
      }
      else {
        if (0x7ffffffffffffff < uVar23) {
                    /* WARNING: Subroutine does not return */
          FUN_1800118d0();
        }
        param_2 = uVar23 * 0x20;
        puVar11 = (undefined8 *)FUN_18000fb70();
        puVar7 = puStack_120;
        puVar18 = auStack_198;
        puVar16 = puVar11;
        for (puVar15 = local_128; puVar15 != puStack_120; puVar15 = puVar15 + 4) {
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          puVar16[3] = 0;
          uVar3 = *(undefined4 *)((longlong)puVar15 + 4);
          uVar4 = *(undefined4 *)(puVar15 + 1);
          uVar5 = *(undefined4 *)((longlong)puVar15 + 0xc);
          *(undefined4 *)puVar16 = *(undefined4 *)puVar15;
          *(undefined4 *)((longlong)puVar16 + 4) = uVar3;
          *(undefined4 *)(puVar16 + 1) = uVar4;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uVar5;
          uVar6 = puVar15[3];
          puVar16[2] = puVar15[2];
          puVar16[3] = uVar6;
          puVar15[2] = 0;
          puVar15[3] = 0xf;
          *(undefined1 *)puVar15 = 0;
          puVar16 = puVar16 + 4;
        }
        puVar16 = local_128;
        if (local_128 != (undefined8 *)0x0) {
          for (; puVar16 != puVar7; puVar16 = puVar16 + 4) {
            FUN_18000f890(puVar16);
          }
          uVar14 = (longlong)local_118 - (longlong)local_128 & 0xffffffffffffffe0;
          puVar16 = local_128;
          if (0xfff < uVar14) {
            puVar16 = (undefined8 *)local_128[-1];
            if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_128 + (-8 - (longlong)puVar16)))
            {
              lVar13 = 5;
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)();
              puVar18 = auStack_190;
              goto LAB_18028d77b;
            }
            uVar14 = uVar14 + 0x27;
          }
          thunk_FUN_1803d64e0(puVar16,uVar14);
        }
        puStack_120 = puVar11;
        puVar22 = puVar11 + uVar23 * 4;
        local_118 = puVar22;
        uVar12 = 0;
        lVar13 = local_178;
        uVar14 = uStack_170;
        lVar21 = local_98;
        param_2 = local_160;
        local_128 = puVar11;
      }
      uVar20 = uVar12 & 0xffffffff;
      uVar23 = uVar12;
      puVar8 = puVar18;
      if (0 < iVar1) {
        while (uVar17 = uVar12, uVar12 < uVar25) {
          while( true ) {
            if (uVar14 - lVar13 <= uVar17) goto LAB_18028d7b9;
            if (*(char *)(uVar17 + lVar13) == '\0') break;
            uVar17 = uVar17 + 1;
            if (uVar25 <= uVar17) goto LAB_18028d7b9;
          }
          *(ulonglong *)(puVar18 + 0x38) = uVar17 - uVar12;
          local_78 = uVar12 + lVar13;
          if (puVar11 == puVar22) {
            *(undefined8 *)(puVar18 + -8) = 0x18028d821;
            FUN_18028dec0(puVar18 + 0x70,puVar11,&local_78,puVar18 + 0x38);
            puVar11 = *(undefined8 **)(puVar18 + 0x78);
          }
          else {
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = uVar23;
            puVar11[3] = uVar23;
            *(undefined8 *)(puVar18 + -8) = 0x18028d7fb;
            FUN_1800133a0(puVar11);
            puVar11 = (undefined8 *)(*(longlong *)(puVar18 + 0x78) + 0x20);
            *(undefined8 **)(puVar18 + 0x78) = puVar11;
          }
          uVar19 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar19;
          if (iVar1 <= (int)uVar19) {
            uVar12 = 0;
            lVar21 = local_98;
            goto LAB_18028d84d;
          }
          uVar14 = *(ulonglong *)(puVar18 + 0x28);
          lVar13 = *(longlong *)(puVar18 + 0x20);
          uVar23 = 0;
          puVar22 = local_118;
          uVar12 = uVar17 + 1;
        }
        goto LAB_18028d7b9;
      }
LAB_18028d84d:
      local_d8 = (ulonglong)(uint)(*(int *)(param_2 + 0xc) << 2) + 7 + uVar24 & 0xfffffffffffffff8;
      local_d0 = uVar24 + 4;
      local_100 = (local_48 >> 0x20) * 4;
      local_f8 = (local_100 | 1) + (local_58 & 0xffffffff) & 0xfffffffffffffffe;
      local_f0 = local_f8 + (local_58 >> 0x20) * 2 + 3 & 0xfffffffffffffffc;
      local_e8 = local_f0 + (uStack_50 & 0xffffffff) * 4 + 7 & 0xfffffffffffffff8;
      local_108 = uVar12;
      if ((ulonglong)(*(longlong *)(puVar18 + 0x48) - *(longlong *)(puVar18 + 0x40)) <
          (ulonglong)*(uint *)(param_2 + 0x14) + 4) goto LAB_18028d7b9;
      local_e0 = ((*(longlong *)(puVar18 + 0x48) - (ulonglong)*(uint *)(param_2 + 0x14)) -
                 *(longlong *)(puVar18 + 0x40)) + -4;
      uVar12 = lVar21 + local_e0;
      local_98 = lVar21 + 1;
      lVar13 = **(longlong **)(puVar18 + 0x60);
      if ((ulonglong)((*(longlong **)(puVar18 + 0x60))[1] - lVar13) < uVar12 + 1) {
        local_88 = 1;
        uVar12 = uVar12 & 0xffffffffffffff00;
      }
      else {
        bVar10 = *(byte *)(lVar13 + uVar12);
        uVar12 = (ulonglong)bVar10;
        if ((char)bVar10 < '\0') {
          uVar12 = (ulonglong)(bVar10 & 0x7f);
          local_98 = lVar21 + 2;
        }
      }
      *(undefined8 *)(puVar18 + -8) = 0x18028d935;
      bVar10 = FUN_18028c2c0(puVar18 + 0x60,uVar12,local_70,0);
    }
    *(undefined8 *)(puVar18 + -8) = 0x18028d7c5;
    FUN_1800288b0(puVar18 + 0x70);
  }
  lVar21 = *(longlong *)(puVar18 + 0x40);
  if (lVar21 == 0) {
LAB_18028d985:
    lVar21 = *(longlong *)(puVar18 + 0x20);
    if (lVar21 != 0) {
      uVar12 = *(longlong *)(puVar18 + 0x30) - lVar21;
      lVar13 = lVar21;
      if (0xfff < uVar12) {
        lVar13 = *(longlong *)(lVar21 + -8);
        if (0x1f < (lVar21 - lVar13) - 8U) goto LAB_18028d9c9;
        uVar12 = uVar12 + 0x27;
      }
      *(undefined8 *)(puVar18 + -8) = 0x18028d9bd;
      thunk_FUN_1803d64e0(lVar13,uVar12);
    }
    uVar24 = (ulonglong)bVar10;
  }
  else {
    uVar12 = *(longlong *)(puVar18 + 0x50) - lVar21;
    lVar13 = lVar21;
    if (uVar12 < 0x1000) {
LAB_18028d972:
      *(undefined8 *)(puVar18 + -8) = 0x18028d977;
      thunk_FUN_1803d64e0(lVar13,uVar12);
      *(undefined8 *)(puVar18 + 0x40) = 0;
      *(undefined8 *)(puVar18 + 0x48) = 0;
      *(undefined8 *)(puVar18 + 0x50) = 0;
      goto LAB_18028d985;
    }
    lVar13 = *(longlong *)(lVar21 + -8);
    if ((lVar21 - lVar13) - 8U < 0x20) {
      uVar12 = uVar12 + 0x27;
      goto LAB_18028d972;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
LAB_18028d9c9:
    pcVar2 = (code *)swi(0x29);
    uVar24 = (*pcVar2)(5);
LAB_18028d9d0:
    uVar24 = uVar24 & 0xffffffffffffff00;
  }
  return uVar24;
}



/* ===== 18028da00 FUN_18028da00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_18028da00(longlong *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  undefined4 local_108 [2];
  int *local_100;
  longlong lStack_f8;
  longlong local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined2 local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_128;
  local_100 = (int *)0x0;
  lStack_f8 = 0;
  local_f0 = 0;
  lVar4 = *param_1;
  uVar13 = param_1[1] - lVar4;
  if ((0xf < uVar13) && (uVar2 = *(uint *)(lVar4 + 0xc), uVar2 < 0x41)) {
    uVar12 = 0;
    if (uVar2 != 0) {
      while( true ) {
        uVar9 = *(int *)(lVar4 + 8) + 8 + uVar12 * 0xc;
        uVar17 = (ulonglong)uVar9;
        if (uVar13 < (ulonglong)uVar9 + 0xc) break;
        local_108[0] = *(undefined4 *)((ulonglong)uVar9 + lVar4);
        uVar9 = 0;
        if (uVar17 + 8 <= (ulonglong)(param_1[1] - lVar4)) {
          uVar9 = *(uint *)(uVar17 + 4 + lVar4);
        }
        lVar10 = 0;
        do {
          lVar11 = lVar10 + 1;
          if (*(byte *)((longlong)local_108 + lVar10) != (&DAT_1806f1fb0)[lVar10]) {
            uVar7 = -(uint)(*(byte *)((longlong)local_108 + lVar10) < (byte)(&DAT_1806f1fb0)[lVar10]
                           ) | 1;
            goto LAB_18028dadf;
          }
          lVar10 = lVar11;
        } while (lVar11 != 4);
        uVar7 = 0;
LAB_18028dadf:
        if (uVar7 == 0) {
          if (uVar9 + uVar17 + 4 + (ulonglong)*(uint *)(uVar17 + 8 + lVar4) <= uVar13) {
            FUN_18028de20(&local_100,lVar4 + 4 + uVar9 + uVar17);
            local_e8 = 0;
            uVar13 = lStack_f8 - (longlong)local_100;
            if ((((((3 < uVar13) && (iVar3 = *local_100, local_e8 = iVar3, 0x17 < uVar13)) &&
                  (local_e4 = local_100[5], 0x1f < uVar13)) &&
                 ((local_e0 = local_100[7], 0x23 < uVar13 &&
                  (local_dc = local_100[8], 0x27 < uVar13)))) &&
                ((local_d8 = local_100[9], 0x2b < uVar13 &&
                 ((local_d4 = local_100[10], 0x2d < uVar13 &&
                  (local_d0 = (undefined2)local_100[0xb], 0x33 < uVar13)))))) &&
               ((local_cc = local_100[0xc], 0x37 < uVar13 &&
                (local_c8 = local_100[0xd], 0x43 < uVar13)))) {
              local_c4 = local_100[0x10];
              local_b8 = 0;
              local_b4 = 0;
              local_b0 = 0;
              uStack_a0 = 0;
              local_98 = 0;
              local_90 = 0xf;
              local_a8 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_68 = 0;
              uStack_60 = 0;
              *param_2 = 0;
              *(undefined1 *)(param_2 + 1) = 0;
              *(undefined8 *)(param_2 + 2) = 0;
              FUN_18002ba60(param_2 + 4,&local_a8);
              puVar1 = (undefined8 *)(param_2 + 0xc);
              if (puVar1 != &local_88) {
                FUN_1801a69c0(puVar1);
                *puVar1 = local_88;
                *(undefined8 *)(param_2 + 0xe) = uStack_80;
                *(undefined8 *)(param_2 + 0x10) = local_78;
                local_88 = 0;
                uStack_80 = 0;
                local_78 = 0;
              }
              puVar1 = (undefined8 *)(param_2 + 0x12);
              if (puVar1 != &uStack_70) {
                FUN_1801a6920(puVar1);
                *puVar1 = uStack_70;
                *(undefined8 *)(param_2 + 0x14) = local_68;
                *(undefined8 *)(param_2 + 0x16) = uStack_60;
                uStack_70 = 0;
                local_68 = 0;
                uStack_60 = 0;
              }
              FUN_1801a6920(&uStack_70);
              FUN_1801a69c0(&local_88);
              FUN_18000f890(&local_a8);
              if (iVar3 == 0x4b563304) {
                uVar6 = FUN_18028d0a0(&local_100,&local_e8,param_2);
                goto LAB_18028daec;
              }
              if (iVar3 == 0x4b563305) {
                uVar6 = FUN_18028d480(&local_100,&local_e8,param_2);
                goto LAB_18028daec;
              }
            }
          }
          break;
        }
        uVar12 = uVar12 + 1;
        if (uVar2 <= uVar12) break;
      }
    }
  }
  uVar6 = 0;
LAB_18028daec:
  puVar14 = auStack_128;
  puVar15 = auStack_128;
  puVar16 = auStack_128;
  if (local_100 == (int *)0x0) goto LAB_18028dd3d;
  piVar8 = local_100;
  if ((ulonglong)(local_f0 - (longlong)local_100) < 0x1000) {
LAB_18028dd35:
    puVar15 = puVar14;
  }
  else {
    piVar8 = *(int **)(local_100 + -2);
    if (0x1f < (ulonglong)((longlong)local_100 + (-8 - (longlong)piVar8))) {
      pcVar5 = (code *)swi(0x29);
      piVar8 = (int *)(*pcVar5)(5);
      puVar14 = auStack_120;
      goto LAB_18028dd35;
    }
  }
  *(undefined8 *)(puVar15 + -8) = 0x18028dd3d;
  thunk_FUN_1803d64e0(piVar8);
  puVar16 = puVar15;
LAB_18028dd3d:
  *(undefined8 *)(puVar16 + -8) = 0x18028dd4c;
  return uVar6;
}



/* ===== 18028dd60 FUN_18028dd60 ===== */

void FUN_18028dd60(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar1 = param_1[1];
  lVar4 = *param_1;
  lVar2 = lVar1 - lVar4 >> 5;
  uVar3 = lVar2 * -0x5555555555555555;
  if (param_2 < uVar3) {
    lVar4 = param_2 * 0x60 + lVar4;
    for (lVar2 = lVar4; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
      FUN_1800fc680(lVar2);
    }
    param_1[1] = lVar4;
    return;
  }
  if (uVar3 < param_2) {
    if ((ulonglong)((param_1[2] - lVar4 >> 5) * -0x5555555555555555) < param_2) {
      FUN_18028e370(param_1);
      return;
    }
    lVar1 = FUN_18028e5b0(lVar1,param_2 + lVar2 * 0x5555555555555555);
    param_1[1] = lVar1;
  }
  return;
}



/* ===== 18028de20 FUN_18028de20 ===== */

void FUN_18028de20(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  if ((ulonglong)(param_1[2] - lVar1) < param_3) {
    FUN_1800950c0(param_1,param_3);
    lVar1 = *param_1;
    FUN_180540530(lVar1,param_2,param_3);
    param_1[1] = lVar1 + param_3;
    return;
  }
  uVar2 = param_1[1] - lVar1;
  if (uVar2 < param_3) {
    FUN_180540530(lVar1,param_2,uVar2);
    lVar1 = param_1[1];
    FUN_180540530(lVar1,uVar2 + param_2,param_3 - uVar2);
    lVar1 = (param_3 - uVar2) + lVar1;
  }
  else {
    FUN_180540530(lVar1);
    lVar1 = lVar1 + param_3;
  }
  param_1[1] = lVar1;
  return;
}



/* ===== 18028dec0 FUN_18028dec0 ===== */

undefined8 *
FUN_18028dec0(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  lVar2 = *param_1;
  if (param_1[1] - lVar2 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = (param_1[1] - lVar2 >> 5) + 1;
  uVar14 = param_1[2] - lVar2 >> 5;
  uVar15 = 0x7ffffffffffffff;
  if (uVar14 <= 0x7ffffffffffffff - (uVar14 >> 1)) {
    uVar14 = (uVar14 >> 1) + uVar14;
    uVar15 = uVar1;
    if (uVar1 <= uVar14) {
      uVar15 = uVar14;
    }
    if (0x7ffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar11 = (undefined8 *)FUN_18000fb70(uVar15 << 5);
  puVar12 = (undefined8 *)(((longlong)param_2 - lVar2 & 0xffffffffffffffe0U) + (longlong)puVar11);
  puVar10 = puVar12 + 4;
  uVar3 = *param_4;
  uVar4 = *param_3;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  plVar16 = param_1;
  puVar17 = puVar11;
  uVar14 = uVar15;
  puVar18 = puVar10;
  puVar19 = puVar10;
  FUN_1800133a0(puVar12,uVar4,uVar3);
  puVar5 = (undefined4 *)param_1[1];
  puVar13 = (undefined4 *)*param_1;
  puVar9 = puVar11;
  if (param_2 == puVar5) {
    for (; puVar13 != puVar5; puVar13 = puVar13 + 8) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar6 = puVar13[1];
      uVar7 = puVar13[2];
      uVar8 = puVar13[3];
      *(undefined4 *)puVar9 = *puVar13;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar6;
      *(undefined4 *)(puVar9 + 1) = uVar7;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar8;
      uVar3 = *(undefined8 *)(puVar13 + 6);
      puVar9[2] = *(undefined8 *)(puVar13 + 4);
      puVar9[3] = uVar3;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 6) = 0xf;
      *(undefined1 *)puVar13 = 0;
      puVar9 = puVar9 + 4;
    }
  }
  else {
    for (; puVar13 != param_2; puVar13 = puVar13 + 8) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar6 = puVar13[1];
      uVar7 = puVar13[2];
      uVar8 = puVar13[3];
      *(undefined4 *)puVar9 = *puVar13;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar6;
      *(undefined4 *)(puVar9 + 1) = uVar7;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar8;
      uVar3 = *(undefined8 *)(puVar13 + 6);
      puVar9[2] = *(undefined8 *)(puVar13 + 4);
      puVar9[3] = uVar3;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 6) = 0xf;
      *(undefined1 *)puVar13 = 0;
      puVar9 = puVar9 + 4;
    }
    puVar5 = (undefined4 *)param_1[1];
    for (; param_2 != puVar5; param_2 = param_2 + 8) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      *(undefined4 *)puVar10 = *param_2;
      *(undefined4 *)((longlong)puVar10 + 4) = uVar6;
      *(undefined4 *)(puVar10 + 1) = uVar7;
      *(undefined4 *)((longlong)puVar10 + 0xc) = uVar8;
      uVar3 = *(undefined8 *)(param_2 + 6);
      puVar10[2] = *(undefined8 *)(param_2 + 4);
      puVar10[3] = uVar3;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      puVar10 = puVar10 + 4;
    }
  }
  FUN_18002b950(param_1,puVar11,uVar1,uVar15,plVar16,puVar17,uVar14,puVar18,puVar19);
  return puVar12;
}



/* ===== 18028e0b0 FUN_18028e0b0 ===== */

void FUN_18028e0b0(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  if (0x1ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar11 = param_1[2] - *param_1 >> 7;
  uVar17 = 0x1ffffffffffffff;
  if (uVar11 <= 0x1ffffffffffffff - (uVar11 >> 1)) {
    uVar17 = (uVar11 >> 1) + uVar11;
    if (uVar17 < param_2) {
      uVar17 = param_2;
    }
    else if (0x1ffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  uVar11 = param_1[1] - *param_1;
  puVar10 = (undefined8 *)FUN_18000fb70(uVar17 * 0x80);
  FUN_18028e2f0((longlong)puVar10 + (uVar11 & 0xffffffffffffff80),param_2 - ((longlong)uVar11 >> 7))
  ;
  puVar14 = auStack_38;
  puVar15 = auStack_38;
  puVar1 = (undefined8 *)param_1[1];
  puVar9 = puVar10;
  for (puVar16 = (undefined8 *)*param_1; puVar16 != puVar1; puVar16 = puVar16 + 0x10) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    uVar2 = puVar16[1];
    *puVar9 = *puVar16;
    puVar9[1] = uVar2;
    uVar2 = puVar16[3];
    puVar9[2] = puVar16[2];
    puVar9[3] = uVar2;
    puVar16[2] = 0;
    puVar16[3] = 0xf;
    *(undefined1 *)puVar16 = 0;
    *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar16 + 4);
    *(undefined1 *)((longlong)puVar9 + 0x24) = *(undefined1 *)((longlong)puVar16 + 0x24);
    puVar9[5] = puVar16[5];
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    uVar6 = *(undefined4 *)((longlong)puVar16 + 0x34);
    uVar7 = *(undefined4 *)(puVar16 + 7);
    uVar8 = *(undefined4 *)((longlong)puVar16 + 0x3c);
    *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(puVar16 + 6);
    *(undefined4 *)((longlong)puVar9 + 0x34) = uVar6;
    *(undefined4 *)(puVar9 + 7) = uVar7;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar8;
    uVar2 = puVar16[9];
    puVar9[8] = puVar16[8];
    puVar9[9] = uVar2;
    puVar16[8] = 0;
    puVar16[9] = 0xf;
    *(undefined1 *)(puVar16 + 6) = 0;
    uVar2 = puVar16[0xc];
    uVar3 = puVar16[0xb];
    uVar4 = puVar16[10];
    puVar16[0xc] = 0;
    puVar16[0xb] = 0;
    puVar16[10] = 0;
    puVar9[10] = uVar4;
    puVar9[0xb] = uVar3;
    puVar9[0xc] = uVar2;
    uVar2 = puVar16[0xf];
    uVar3 = puVar16[0xe];
    uVar4 = puVar16[0xd];
    puVar16[0xf] = 0;
    puVar16[0xe] = 0;
    puVar16[0xd] = 0;
    puVar9[0xd] = uVar4;
    puVar9[0xe] = uVar3;
    puVar9[0xf] = uVar2;
    puVar9 = puVar9 + 0x10;
  }
  lVar13 = *param_1;
  if (lVar13 == 0) goto LAB_18028e2ac;
  lVar12 = param_1[1];
  for (; lVar13 != lVar12; lVar13 = lVar13 + 0x80) {
    FUN_1800fc680(lVar13 + 0x20);
    FUN_18000f890(lVar13);
  }
  lVar13 = *param_1;
  if ((param_1[2] - lVar13 & 0xffffffffffffff80U) < 0x1000) {
LAB_18028e2a4:
    lVar12 = lVar13;
    puVar15 = puVar14;
  }
  else {
    lVar12 = *(longlong *)(lVar13 + -8);
    if (0x1f < (lVar13 - lVar12) - 8U) {
      pcVar5 = (code *)swi(0x29);
      lVar13 = (*pcVar5)(5);
      puVar14 = auStack_30;
      goto LAB_18028e2a4;
    }
  }
  *(undefined8 *)(puVar15 + -8) = 0x18028e2ac;
  thunk_FUN_1803d64e0(lVar12);
LAB_18028e2ac:
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + param_2 * 0x10);
  param_1[2] = (longlong)(puVar10 + uVar17 * 0x10);
  return;
}



/* ===== 18028e2f0 FUN_18028e2f0 ===== */

undefined8 * FUN_18028e2f0(undefined8 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    *(undefined2 *)((longlong)param_1 + 0x25) = 0;
    *(undefined1 *)((longlong)param_1 + 0x27) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0xf;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1 = param_1 + 0x10;
  }
  return param_1;
}



/* ===== 18028e370 FUN_18028e370 ===== */

void FUN_18028e370(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  if (0x2aaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar11 = (param_1[2] - *param_1 >> 5) * -0x5555555555555555;
  uVar16 = 0x2aaaaaaaaaaaaaa;
  if (uVar11 <= 0x2aaaaaaaaaaaaaa - (uVar11 >> 1)) {
    uVar16 = (uVar11 >> 1) + uVar11;
    if (uVar16 < param_2) {
      uVar16 = param_2;
    }
    else if (0x2aaaaaaaaaaaaaa < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar13 = param_1[1] - *param_1 >> 5;
  puVar10 = (undefined4 *)FUN_18000fb70(uVar16 * 0x60);
  FUN_18028e5b0(puVar10 + lVar13 * 8,param_2 + lVar13 * 0x5555555555555555);
  puVar14 = auStack_38;
  puVar15 = auStack_38;
  puVar1 = (undefined4 *)param_1[1];
  puVar9 = puVar10;
  for (puVar17 = (undefined4 *)*param_1; puVar17 != puVar1; puVar17 = puVar17 + 0x18) {
    *puVar9 = *puVar17;
    *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar17 + 1);
    *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar17 + 2);
    *(undefined8 *)(puVar9 + 4) = 0;
    *(undefined8 *)(puVar9 + 6) = 0;
    *(undefined8 *)(puVar9 + 8) = 0;
    *(undefined8 *)(puVar9 + 10) = 0;
    uVar6 = puVar17[5];
    uVar7 = puVar17[6];
    uVar8 = puVar17[7];
    puVar9[4] = puVar17[4];
    puVar9[5] = uVar6;
    puVar9[6] = uVar7;
    puVar9[7] = uVar8;
    uVar2 = *(undefined8 *)(puVar17 + 10);
    *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar17 + 8);
    *(undefined8 *)(puVar9 + 10) = uVar2;
    *(undefined8 *)(puVar17 + 8) = 0;
    *(undefined8 *)(puVar17 + 10) = 0xf;
    *(undefined1 *)(puVar17 + 4) = 0;
    uVar2 = *(undefined8 *)(puVar17 + 0x10);
    uVar3 = *(undefined8 *)(puVar17 + 0xe);
    uVar4 = *(undefined8 *)(puVar17 + 0xc);
    *(undefined8 *)(puVar17 + 0x10) = 0;
    *(undefined8 *)(puVar17 + 0xe) = 0;
    *(undefined8 *)(puVar17 + 0xc) = 0;
    *(undefined8 *)(puVar9 + 0xc) = uVar4;
    *(undefined8 *)(puVar9 + 0xe) = uVar3;
    *(undefined8 *)(puVar9 + 0x10) = uVar2;
    uVar2 = *(undefined8 *)(puVar17 + 0x16);
    uVar3 = *(undefined8 *)(puVar17 + 0x14);
    uVar4 = *(undefined8 *)(puVar17 + 0x12);
    *(undefined8 *)(puVar17 + 0x16) = 0;
    *(undefined8 *)(puVar17 + 0x14) = 0;
    *(undefined8 *)(puVar17 + 0x12) = 0;
    *(undefined8 *)(puVar9 + 0x12) = uVar4;
    *(undefined8 *)(puVar9 + 0x14) = uVar3;
    *(undefined8 *)(puVar9 + 0x16) = uVar2;
    puVar9 = puVar9 + 0x18;
  }
  lVar13 = *param_1;
  if (lVar13 == 0) goto LAB_18028e562;
  lVar12 = param_1[1];
  for (; lVar13 != lVar12; lVar13 = lVar13 + 0x60) {
    FUN_1800fc680(lVar13);
  }
  lVar13 = *param_1;
  lVar12 = lVar13;
  if ((ulonglong)((param_1[2] - lVar13 >> 5) << 5) < 0x1000) {
LAB_18028e557:
    puVar15 = puVar14;
  }
  else {
    lVar12 = *(longlong *)(lVar13 + -8);
    if (0x1f < (lVar13 - lVar12) - 8U) {
      lVar12 = 5;
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar14 = auStack_30;
      goto LAB_18028e557;
    }
  }
  *(undefined8 *)(puVar15 + -8) = 0x18028e562;
  thunk_FUN_1803d64e0(lVar12);
LAB_18028e562:
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + param_2 * 0x18);
  param_1[2] = (longlong)(puVar10 + uVar16 * 0x18);
  return;
}



/* ===== 18028e5b0 FUN_18028e5b0 ===== */

undefined4 * FUN_18028e5b0(undefined4 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined2 *)((longlong)param_1 + 5) = 0;
    *(undefined1 *)((longlong)param_1 + 7) = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0xf;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    param_1 = param_1 + 0x18;
  }
  return param_1;
}



/* ===== 18028e610 FUN_18028e610 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18028e610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ULONGLONG UVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 *local_130;
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_158;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180540170(local_128,0,0x100);
  puVar1 = (ulonglong *)FUN_180013640();
  local_138 = 0;
  local_130 = &local_res10;
  FUN_180501904(*puVar1 | 2,local_128,0x100,param_1);
  UVar2 = GetTickCount64();
  FUN_1802b2870("wl_skins.log","[%llu] colors | composite | %s\n",UVar2,local_128);
  return;
}



/* ===== 18028e6d0 FUN_18028e6d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_18028e6d0(void)

{
  ULONGLONG UVar1;
  bool bVar2;
  
  bVar2 = DAT_180cfca18 == 0;
  if (!bVar2) {
    UVar1 = GetTickCount64();
    if (DAT_180cfca10 < UVar1) {
      if (DAT_180cfca18 == 2) {
        UVar1 = GetTickCount64();
        FUN_18028e610("glove window expired | consumed %d | %llu ms after arming",
                      DAT_180ccfedc != '\0',UVar1 - _DAT_180cfc9b8);
      }
      DAT_180cfca18 = 0;
      LOCK();
      DAT_180ccfedb = 0;
      UNLOCK();
    }
    bVar2 = DAT_180cfca18 == 0;
  }
  return bVar2;
}



/* ===== 18028e740 FUN_18028e740 ===== */

undefined1 FUN_18028e740(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  (*DAT_180961e30)(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0x40) = 9;
  *(undefined4 *)(param_1 + 0x8c) = param_3;
  return 1;
}



/* ===== 18028e780 FUN_18028e780 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18028e780(undefined8 param_1,code *param_2,code *param_3,longlong param_4)

{
  int iVar1;
  undefined1 auStack_538 [32];
  int local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined1 local_4d8 [512];
  undefined1 local_2d8 [64];
  undefined4 local_298;
  undefined4 local_24c;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_538;
  local_510 = 0;
  local_508 = 0;
  local_500 = 0;
  FUN_180540170(local_4d8,0,0x200);
  for (iVar1 = 0; local_518 = iVar1, iVar1 < 8; iVar1 = iVar1 + 1) {
    FUN_180540170(local_2d8,0,0x288);
    local_4f8 = 0;
    uStack_4f0 = 0;
    local_4e8 = 0;
    uStack_4e0 = 0;
    snprintf(&local_4f8,0x20,"g_vColorTint%d",iVar1 + 1);
    (*DAT_180961e30)(local_2d8,&local_4f8,0);
    local_298 = 9;
    local_24c = *(undefined4 *)(param_4 + (longlong)iVar1 * 4);
    (*param_2)(&local_510);
  }
  (*DAT_180961e40)(local_4d8,"instance_params",&local_510);
  (*param_3)(param_1,local_4d8);
  (*DAT_180961e50)(local_4d8);
  (*DAT_180961e38)(&local_510);
  return 1;
}



/* ===== 18028e8c0 FUN_18028e8c0 ===== */

ulonglong FUN_18028e8c0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 - 0x10000U < 0x7ffffffeffff) {
    uVar2 = 0;
    while ((uVar2 + 1 < 0x14 && (*(char *)(uVar2 + lVar1) != '\0'))) {
      *(char *)(uVar2 + param_2) = *(char *)(uVar2 + lVar1);
      uVar2 = uVar2 + 1;
    }
    *(undefined1 *)(uVar2 + param_2) = 0;
    uVar2 = CONCAT71((int7)(uVar2 >> 8),*(char *)(uVar2 + lVar1) == '\0');
  }
  else {
    uVar2 = lVar1 - 0x10000U & 0xffffffffffffff00;
  }
  return uVar2;
}



/* ===== 18028e920 FUN_18028e920 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18028e920(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_88 [32];
  undefined *local_68;
  char local_60;
  char local_58 [16];
  char local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  cVar1 = FUN_18028e8c0(0,local_48);
  if (cVar1 == '\0') {
    return;
  }
  iVar2 = strncmp(local_48,"g_vColor",8);
  if (iVar2 != 0) {
    return;
  }
  local_68 = &DAT_1809f3770;
  iVar2 = FUN_1804e4d70(&DAT_1809f3770);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f37bc == 0x7fffffff) {
    DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  cVar1 = FUN_18028e6d0();
  if (cVar1 != '\0') goto LAB_18028ead0;
  local_68 = (undefined *)0x726f6c6f43765f67;
  builtin_strncpy(local_58,"g_vColorTint",0xc);
  local_60 = cVar1;
  local_58[0xc] = cVar1;
  if (DAT_180cfca18 == 2) {
    iVar2 = strncmp(local_48,local_58,0xc);
    if (iVar2 != 0) goto LAB_18028ead0;
    if ((7 < (byte)(local_48[0xc] - 0x31U)) || (local_48[0xd] != '\0')) goto LAB_18028ead0;
    uVar3 = (int)local_48[0xc] - 0x31;
  }
  else {
    iVar2 = strncmp(local_48,(char *)&local_68,8);
    if (iVar2 != 0) goto LAB_18028ead0;
    if ((3 < (byte)(local_48[8] - 0x30U)) || (local_48[9] != '\0')) goto LAB_18028ead0;
    uVar3 = (int)local_48[8] - 0x30;
  }
  if ((-1 < (int)uVar3) && (cVar1 = FUN_180013280(param_1 + 0x40,&DAT_180650228), cVar1 != '\0')) {
    cVar1 = FUN_180013280(param_1 + 0x8c,&DAT_180cfc9f0 + (int)uVar3);
    if (cVar1 != '\0') {
      DAT_180ccfedc = 1;
      LOCK();
      DAT_180cfc9e8 = DAT_180cfc9e8 + 1;
      UNLOCK();
      if (DAT_180cfca18 == 2) {
        (&DAT_180cfc9c0)[(int)uVar3] = (&DAT_180cfc9f0)[(int)uVar3];
        DAT_180cfc9e0 = DAT_180cfc9e0 | 1 << (uVar3 & 0x1f);
        DAT_180ccfedd = 1;
      }
    }
  }
LAB_18028ead0:
  FUN_1804e4e90(&DAT_1809f3770);
  return;
}



/* ===== 18028eb20 FUN_18028eb20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18028eb20(undefined4 *param_1)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f3770);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f37bc == 0x7fffffff) {
    DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_180cfc9f0 = *param_1;
  DAT_180cfc9f4 = param_1[1];
  DAT_180cfc9f8 = param_1[2];
  DAT_180cfc9fc = param_1[3];
  DAT_180cfca18 = 1;
  _DAT_180cfca00 = param_1[4];
  uRam0000000180cfca04 = param_1[5];
  uRam0000000180cfca08 = param_1[6];
  uRam0000000180cfca0c = param_1[7];
  UVar2 = GetTickCount64();
  DAT_180ccfedc = 0;
  DAT_180cfca10 = UVar2 + 5000;
  FUN_1804e4e90(&DAT_1809f3770);
  return;
}



/* ===== 18028ebb0 FUN_18028ebb0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18028ebb0(undefined4 *param_1)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f3770);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f37bc == 0x7fffffff) {
    DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_180cfc9f0 = *param_1;
  DAT_180cfc9f4 = param_1[1];
  DAT_180cfc9f8 = param_1[2];
  DAT_180cfc9fc = param_1[3];
  DAT_180cfca18 = 2;
  _DAT_180cfca00 = param_1[4];
  uRam0000000180cfca04 = param_1[5];
  uRam0000000180cfca08 = param_1[6];
  uRam0000000180cfca0c = param_1[7];
  UVar2 = GetTickCount64();
  DAT_180ccfedc = 0;
  DAT_180cfca10 = UVar2 + 10000;
  DAT_180ccfedd = 0;
  DAT_180cfc9e0 = 0;
  _DAT_180cfc9c0 = 0;
  _DAT_180cfc9c8 = 0;
  _DAT_180cfc9d0 = 0;
  _DAT_180cfc9d8 = 0;
  LOCK();
  DAT_180ccfedb = 1;
  UNLOCK();
  _DAT_180cfc9b8 = GetTickCount64();
  FUN_1804e4e90(&DAT_1809f3770);
  return;
}



/* ===== 18028ec90 FUN_18028ec90 ===== */

void FUN_18028ec90(void)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f3770);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f37bc == 0x7fffffff) {
    DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_180cfca18 = 0;
  DAT_180ccfedc = 0;
  DAT_180cfca10 = 0;
  LOCK();
  DAT_180ccfedb = 0;
  UNLOCK();
  FUN_1804e4e90(&DAT_1809f3770);
  return;
}



/* ===== 18028ed00 FUN_18028ed00 ===== */

undefined1 FUN_18028ed00(void)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1804e4d70(&DAT_1809f3770);
  uVar1 = DAT_180ccfedc;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f37bc == 0x7fffffff) {
    DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  FUN_1804e4e90(&DAT_1809f3770);
  return uVar1;
}



/* ===== 18028ed70 FUN_18028ed70 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18028ed70(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f3770);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f37bc == 0x7fffffff) {
    DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_180cfca18 = *param_1;
  DAT_180cfc9f0 = param_1[1];
  DAT_180cfc9f4 = param_1[2];
  DAT_180cfc9f8 = param_1[3];
  DAT_180cfc9fc = param_1[4];
  _DAT_180cfca00 = param_1[5];
  uRam0000000180cfca04 = param_1[6];
  uRam0000000180cfca08 = param_1[7];
  uRam0000000180cfca0c = param_1[8];
  DAT_180cfca10 = *(undefined8 *)(param_1 + 10);
  DAT_180ccfedc = *(undefined1 *)(param_1 + 0xc);
  FUN_1804e4e90(&DAT_1809f3770);
  return;
}



/* ===== 18028ee00 FUN_18028ee00 ===== */

undefined8 FUN_18028ee00(int *param_1)

{
  int iVar1;
  ULONGLONG UVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f3770);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f37bc == 0x7fffffff) {
    DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180cfca18 == 2) {
    UVar2 = GetTickCount64();
    if (((((((((UVar2 <= DAT_180cfca10) && (DAT_180ccfedd != '\0')) && (DAT_180cfc9e0 != 0)) &&
            (((DAT_180cfc9e0 & 1) == 0 || (DAT_180cfc9c0 == *param_1)))) &&
           (((DAT_180cfc9e0 & 2) == 0 || (DAT_180cfc9c4 == param_1[1])))) &&
          (((DAT_180cfc9e0 & 4) == 0 || (DAT_180cfc9c8 == param_1[2])))) &&
         (((DAT_180cfc9e0 & 8) == 0 || (DAT_180cfc9cc == param_1[3])))) &&
        (((((DAT_180cfc9e0 & 0x10) == 0 || (DAT_180cfc9d0 == param_1[4])) &&
          (((DAT_180cfc9e0 & 0x20) == 0 || (DAT_180cfc9d4 == param_1[5])))) &&
         (((DAT_180cfc9e0 & 0x40) == 0 || (DAT_180cfc9d8 == param_1[6])))))) &&
       ((-1 < (char)DAT_180cfc9e0 || (DAT_180cfc9dc == param_1[7])))) {
      uVar3 = 1;
      goto LAB_18028eeec;
    }
  }
  uVar3 = 0;
LAB_18028eeec:
  FUN_1804e4e90(&DAT_1809f3770);
  return uVar3;
}



/* ===== 18028ef30 FUN_18028ef30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18028ef30(void)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f3770);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f37bc == 0x7fffffff) {
    DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_180ccfedd = 0;
  _DAT_180cfc9c0 = 0;
  _DAT_180cfc9c8 = 0;
  _DAT_180cfc9d0 = 0;
  _DAT_180cfc9d8 = 0;
  DAT_180cfc9e0 = iVar1;
  FUN_1804e4e90(&DAT_1809f3770);
  return;
}



/* ===== 18028efa0 FUN_18028efa0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18028efa0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_328 [32];
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined *local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined1 local_2b8 [656];
  ulonglong local_28;
  
  lVar2 = DAT_180cd19e0;
  if (((param_1 != 0) && (local_28 = DAT_180919500 ^ (ulonglong)auStack_328, param_2 != 0)) &&
     (DAT_180cd19e0 != 0)) {
    iVar4 = FUN_180011200();
    if ((iVar4 == 0) && (DAT_180961e30 != 0)) {
      local_308 = 0;
      uStack_300 = 0;
      local_2f8 = 0;
      uStack_2f0 = 0;
      local_2e8 = &DAT_1809f3770;
      iVar4 = FUN_1804e4d70(&DAT_1809f3770);
      if (iVar4 != 0) {
LAB_18028f161:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f37bc == 0x7fffffff) {
LAB_18028f14c:
        DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      bVar1 = false;
      cVar3 = FUN_18028e6d0();
      if ((cVar3 == '\0') && (DAT_180cfca18 == 1)) {
        local_308 = CONCAT44(DAT_180cfc9f4,DAT_180cfc9f0);
        uStack_300 = CONCAT44(DAT_180cfc9fc,DAT_180cfc9f8);
        local_2f8 = _DAT_180cfca00;
        uStack_2f0 = uRam0000000180cfca08;
        bVar1 = true;
      }
      FUN_1804e4e90(&DAT_1809f3770);
      if (bVar1) {
        uVar6 = 0;
        do {
          FUN_180540170(local_2b8,0,0x288);
          local_2e0 = 0;
          uStack_2d8 = 0;
          local_2d0 = 0;
          uStack_2c8 = 0;
          snprintf(&local_2e0,0x20,"g_vColor%d",uVar6);
          cVar3 = FUN_18028e740(local_2b8,&local_2e0,*(undefined4 *)(auStack_328 + uVar6 * 4 + 0x20)
                               );
          if ((cVar3 == '\0') || (cVar3 = FUN_1800175c0(lVar2,param_1,local_2b8), cVar3 == '\0'))
          goto LAB_18028f11c;
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while ((int)uVar5 < 4);
        iVar4 = FUN_1804e4d70(&DAT_1809f3770);
        if (iVar4 != 0) goto LAB_18028f161;
        if (DAT_1809f37bc == 0x7fffffff) goto LAB_18028f14c;
        DAT_180ccfedc = 1;
        LOCK();
        DAT_180cfc9e8 = DAT_180cfc9e8 + 1;
        UNLOCK();
        FUN_1804e4e90(&DAT_1809f3770);
      }
    }
LAB_18028f11c:
    FUN_18028e920(param_2);
  }
  return;
}



/* ===== 18028f170 FUN_18028f170 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18028f170(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  DWORD DVar6;
  ULONGLONG UVar7;
  char *pcVar8;
  longlong lVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined *local_28;
  
  DVar6 = DAT_180cfc9e4;
  lVar1 = DAT_180cd1e28;
  lVar9 = DAT_180cd19e0;
  DVar4 = GetCurrentThreadId();
  if ((((DVar6 != DVar4) && (param_1 != 0)) && (lVar9 != 0)) &&
     ((((lVar1 != 0 && (DAT_180ccfedb != '\0')) &&
       ((DAT_180961e30 != 0 && ((DAT_180961e40 != 0 && (DAT_180961e50 != 0)))))) &&
      (DAT_180961e38 != 0)))) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = &DAT_1809f3770;
    iVar5 = FUN_1804e4d70(&DAT_1809f3770);
    if (iVar5 != 0) {
LAB_18028f38f:
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f37bc == 0x7fffffff) {
LAB_18028f37a:
      DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    cVar3 = FUN_18028e6d0();
    if (((cVar3 == '\0') && (DAT_180cfca18 == 2)) && (DAT_180ccfedb != '\0')) {
      local_48 = DAT_180cfc9f0;
      uStack_44 = DAT_180cfc9f4;
      uStack_40 = DAT_180cfc9f8;
      uStack_3c = DAT_180cfc9fc;
      local_38 = CONCAT44(uRam0000000180cfca04,_DAT_180cfca00);
      uStack_30 = CONCAT44(uRam0000000180cfca0c,uRam0000000180cfca08);
      LOCK();
      DAT_180ccfedb = '\0';
      UNLOCK();
      FUN_1804e4e90(&DAT_1809f3770);
      DAT_180cfc9e4 = GetCurrentThreadId();
      LOCK();
      UNLOCK();
      cVar3 = FUN_18028e780(param_1,lVar9,lVar1,&local_48);
      uVar2 = local_48;
      LOCK();
      DAT_180cfc9e4 = 0;
      UNLOCK();
      UVar7 = GetTickCount64();
      lVar9 = UVar7 - _DAT_180cfc9b8;
      DVar6 = GetCurrentThreadId();
      pcVar8 = "[error] faulted";
      if (cVar3 != '\0') {
        pcVar8 = "added";
      }
      FUN_18028e610("glove container %s | list %p | thread %lu | %llu ms after arming | tint1 %08X",
                    pcVar8,param_1,DVar6,lVar9,uVar2);
      if (cVar3 == '\0') {
        return;
      }
      iVar5 = FUN_1804e4d70(&DAT_1809f3770);
      if (iVar5 != 0) goto LAB_18028f38f;
      if (DAT_1809f37bc == 0x7fffffff) goto LAB_18028f37a;
      DAT_180ccfedc = 1;
      LOCK();
      DAT_180cfc9e8 = DAT_180cfc9e8 + 1;
      UNLOCK();
      DAT_180cfc9c0 = local_48;
      DAT_180cfc9c4 = uStack_44;
      DAT_180cfc9c8 = uStack_40;
      DAT_180cfc9cc = uStack_3c;
      _DAT_180cfc9d0 = local_38;
      _DAT_180cfc9d8 = uStack_30;
      DAT_180cfc9e0 = 0xff;
      DAT_180ccfedd = 1;
    }
    FUN_1804e4e90(&DAT_1809f3770);
  }
  return;
}



/* ===== 18028f3a0 FUN_18028f3a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18028f3a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_c8 [32];
  uint local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  char local_78 [16];
  char local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if (param_1 != 0) {
    local_80 = param_1 + 0x50;
    local_a0 = param_2;
    local_90 = param_3;
    local_88 = param_4;
    uVar2 = FUN_180011200(local_80);
    local_a8 = uVar2;
    lVar5 = FUN_18000f3a0(param_1 + 0x58);
    if (0x40 < uVar2) {
      return -1;
    }
    if ((uVar2 != 0) && (lVar5 == 0)) {
      return -1;
    }
    iVar11 = 0;
    uVar10 = 0;
    local_98 = lVar5;
    if (0 < (int)uVar2) {
      do {
        lVar7 = uVar10 * 0x138;
        iVar3 = FUN_180011200(lVar5 + 4 + lVar7);
        if (iVar3 == 3) {
          iVar3 = FUN_180011200(lVar5 + 0xf8 + lVar7);
          lVar6 = FUN_18000f3a0(lVar5 + 0x100 + lVar7);
          lVar7 = local_a0;
          if (((iVar3 - 1U < 0x100) && (lVar6 != 0)) && (uVar8 = 0, 0 < iVar3)) {
            do {
              lVar5 = uVar8 * 0x288;
              local_68[0] = '\0';
              local_68[1] = '\0';
              local_68[2] = '\0';
              local_68[3] = '\0';
              local_68[4] = '\0';
              local_68[5] = '\0';
              local_68[6] = '\0';
              local_68[7] = '\0';
              local_68[8] = '\0';
              local_68[9] = '\0';
              local_68[10] = '\0';
              local_68[0xb] = '\0';
              local_68[0xc] = '\0';
              local_68[0xd] = '\0';
              local_68[0xe] = '\0';
              local_68[0xf] = '\0';
              local_68[0x10] = '\0';
              local_68[0x11] = '\0';
              local_68[0x12] = '\0';
              local_68[0x13] = '\0';
              cVar1 = FUN_18028e8c0(lVar5 + lVar6,local_68);
              if (cVar1 != '\0') {
                builtin_strncpy(local_78,"g_vColorTint",0xd);
                iVar4 = strncmp(local_68,local_78,0xc);
                if (iVar4 == 0) {
                  iVar4 = (int)local_68[0xc];
                  if ((((byte)(local_68[0xc] - 0x31U) < 8) && (local_68[0xd] == '\0')) &&
                     ((0x30 < iVar4 &&
                      ((cVar1 = FUN_180013280(lVar6 + 0x40 + lVar5,&DAT_180650228), cVar1 != '\0' &&
                       (cVar1 = FUN_180013280(lVar6 + 0x8c + lVar5,
                                              (longlong)(iVar4 + -0x31) * 4 + lVar7), cVar1 != '\0')
                       ))))) {
                    iVar11 = iVar11 + 1;
                  }
                }
              }
              uVar2 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar2;
            } while ((int)uVar2 < iVar3);
            lVar5 = local_98;
            uVar2 = local_a8;
          }
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while ((int)uVar9 < (int)uVar2);
      if (iVar11 != 0) goto LAB_18028f5fc;
      param_3 = local_90;
      param_2 = local_a0;
      param_4 = local_88;
    }
    if (((((param_3 != 0) && (param_4 != 0)) && (DAT_180961e30 != 0)) &&
        ((DAT_180961e40 != 0 && (DAT_180961e50 != 0)))) && (DAT_180961e38 != 0)) {
      DAT_180cfc9e4 = GetCurrentThreadId();
      LOCK();
      UNLOCK();
      cVar1 = FUN_18028e780(local_80,param_3,param_4,param_2);
      LOCK();
      DAT_180cfc9e4 = 0;
      UNLOCK();
      if (cVar1 != '\0') {
LAB_18028f5fc:
        LOCK();
        DAT_180cfc9e8 = DAT_180cfc9e8 + 1;
        UNLOCK();
        return iVar11;
      }
    }
  }
  return -1;
}



/* ===== 18028f630 FUN_18028f630 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18028f630(undefined8 *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 auStack_58 [40];
  byte *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_58;
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    pbVar5 = param_2;
  }
  else {
    pbVar5 = *(byte **)param_2;
  }
  pbVar6 = pbVar5 + *(longlong *)(param_2 + 0x10);
  local_30 = param_2;
  for (; pbVar5 != pbVar6; pbVar5 = pbVar5 + 1) {
    iVar4 = tolower((uint)*pbVar5);
    *pbVar5 = (byte)iVar4;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *param_2 = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0xf;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  FUN_18000f890(param_2);
  return param_1;
}



/* ===== 18028f700 FUN_18028f700 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18028f700(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_a8;
  local_88 = param_1;
  if (*(longlong *)(param_2 + 0x68) == 0) {
    uVar2 = FUN_180024b50(&local_58,param_2 + 8);
    FUN_18028f630(param_1,uVar2);
    return param_1;
  }
  FUN_180024b50(&local_78,param_2 + 0x58);
  lVar3 = FUN_1800f18b0(&local_78);
  puVar7 = auStack_a8;
  if (lVar3 == -1) {
LAB_18028f80a:
    puVar6 = &local_78;
    if (0xf < uStack_60) {
      puVar6 = (undefined4 *)CONCAT44(uStack_74,local_78);
    }
    uVar5 = 0xffffffffffffffff;
    if (local_68 != 0) {
      lVar3 = local_68 + (longlong)puVar6;
      lVar4 = thunk_FUN_1804e6c50(puVar6,lVar3,0x2e);
      if (lVar4 != lVar3) {
        uVar5 = lVar4 - (longlong)puVar6;
      }
    }
    if (uVar5 == 0xffffffffffffffff) goto LAB_18028f8c1;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    if (local_68 < uVar5) {
      uVar5 = local_68;
    }
    puVar6 = &local_78;
    if (0xf < uStack_60) {
      puVar6 = (undefined4 *)CONCAT44(uStack_74,local_78);
    }
    FUN_1800133a0(&local_58,puVar6,uVar5);
    if (0xf < uStack_60) {
      uVar5 = uStack_60 + 1;
      lVar4 = CONCAT44(uStack_74,local_78);
      lVar3 = lVar4;
      if (0xfff < uVar5) {
        lVar3 = *(longlong *)(lVar4 + -8);
        if (0x1f < (lVar4 - lVar3) - 8U) goto LAB_18028f909;
        uVar5 = uStack_60 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar3,uVar5);
    }
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    uStack_60 = uStack_40;
LAB_18028f8c1:
    uVar2 = FUN_180024b50(&local_58,&local_78);
    FUN_18028f630(param_1,uVar2);
    FUN_18000f890(&local_78);
    return param_1;
  }
  uVar5 = lVar3 + 1;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (local_68 < uVar5) goto LAB_18028f910;
  lVar3 = -1;
  if (local_68 - uVar5 != -1) {
    lVar3 = local_68 - uVar5;
  }
  puVar6 = &local_78;
  if (0xf < uStack_60) {
    puVar6 = (undefined4 *)CONCAT44(uStack_74,local_78);
  }
  FUN_1800133a0(&local_58,(longlong)puVar6 + uVar5,lVar3);
  if (uStack_60 < 0x10) {
LAB_18028f7fa:
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    uStack_60 = uStack_40;
    goto LAB_18028f80a;
  }
  uVar5 = uStack_60 + 1;
  lVar4 = CONCAT44(uStack_74,local_78);
  lVar3 = lVar4;
  if (uVar5 < 0x1000) {
LAB_18028f7f5:
    thunk_FUN_1803d64e0(lVar3,uVar5);
    goto LAB_18028f7fa;
  }
  lVar3 = *(longlong *)(lVar4 + -8);
  if ((lVar4 - lVar3) - 8U < 0x20) {
    uVar5 = uStack_60 + 0x28;
    goto LAB_18028f7f5;
  }
LAB_18028f909:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar7 = auStack_a0;
LAB_18028f910:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar7 + -8) = &UNK_18028f915;
  FUN_18002a1a0();
}



/* ===== 18028f920 FUN_18028f920 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18028f920(char *param_1,longlong param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 ****local_80;
  longlong lStack_78;
  longlong local_70;
  ulonglong uStack_68;
  undefined8 ****local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    local_20 = local_20 & 0xffffffffffffff00;
  }
  else {
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    local_88 = 0;
    sVar2 = strlen(param_1);
    FUN_1800133a0(&local_a0,param_1,sVar2);
    FUN_18028f630(local_60,&local_a0);
    puVar3 = (undefined8 *)FUN_180073a70(&local_80,param_2,&DAT_1806e6f24);
    local_b8 = puVar3[2];
    if (0xf < (ulonglong)puVar3[3]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    ppppuVar8 = local_60;
    if (0xf < local_48) {
      ppppuVar8 = local_60[0];
    }
    lVar4 = FUN_180043210(ppppuVar8,local_50,0,puVar3);
    FUN_18000f890(&local_80);
    if (lVar4 == 0) {
      bVar10 = true;
    }
    else {
      uVar5 = FUN_180066a20(local_40,&DAT_1806e08bc,param_2);
      plVar6 = (longlong *)FUN_1800134a0(uVar5,&DAT_1806e6f24,1);
      local_80 = (undefined8 ****)*plVar6;
      lStack_78 = plVar6[1];
      local_b8 = plVar6[2];
      uStack_68 = plVar6[3];
      plVar6[2] = 0;
      plVar6[3] = 0xf;
      *(undefined1 *)plVar6 = 0;
      ppppuVar8 = &local_80;
      if (0xf < uStack_68) {
        ppppuVar8 = local_80;
      }
      ppppuVar7 = local_60;
      if (0xf < local_48) {
        ppppuVar7 = local_60[0];
      }
      local_70 = local_b8;
      lVar4 = FUN_180068d80(ppppuVar7,local_50,0,ppppuVar8);
      bVar10 = lVar4 != -1;
      if (0xf < uStack_68) {
        uVar9 = uStack_68 + 1;
        ppppuVar8 = local_80;
        if (0xfff < uVar9) {
          ppppuVar8 = (undefined8 ****)local_80[-1];
          if (0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)ppppuVar8))) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            uVar9 = (*pcVar1)();
            return uVar9;
          }
          uVar9 = uStack_68 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppuVar8,uVar9);
      }
      local_70 = 0;
      uStack_68 = 0xf;
      local_80 = (undefined8 ****)((ulonglong)local_80 & 0xffffffffffffff00);
      FUN_18000f890(local_40);
    }
    FUN_18000f890(local_60);
    local_20 = (ulonglong)bVar10;
  }
  return local_20;
}



/* ===== 18028fb00 FUN_18028fb00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_18028fb00(int param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_78;
  if ((param_1 == 0) || (lVar3 = FUN_180280d30(), lVar3 == 0)) {
    return 0;
  }
  FUN_18028f700(local_50,lVar3);
  local_58 = &DAT_1809f3b50;
  iVar2 = FUN_1804e4d70(&DAT_1809f3b50);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f3b9c == 0x7fffffff) {
    DAT_1809f3b9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  uVar4 = 0;
  puVar5 = &DAT_180cfcb20;
  do {
    if ((uVar4 < *puVar5) && (cVar1 = FUN_18028f920(puVar5 + 1,local_50), cVar1 != '\0')) {
      uVar4 = *puVar5;
    }
    puVar5 = puVar5 + 0x33;
  } while (puVar5 != &DAT_180cfe4a0);
  FUN_1804e4e90(&DAT_1809f3b50);
  FUN_18000f890(local_50);
  return uVar4;
}



/* ===== 18028fbf0 FUN_18028fbf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18028fbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ULONGLONG UVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 *local_230;
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_258;
  if (DAT_180cfe688 < 0x5dd) {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_180540170(local_228,0,0x200);
    puVar1 = (ulonglong *)FUN_180013640();
    local_238 = 0;
    local_230 = &local_res10;
    FUN_180501904(*puVar1 | 2,local_228,0x200,param_1);
    UVar2 = GetTickCount64();
    FUN_1802b2870("wl_skins.log","[%llu] %s\n",UVar2,local_228);
    DAT_180cfe688 = DAT_180cfe688 + 1;
  }
  return;
}



/* ===== 18028fcc0 FUN_18028fcc0 ===== */

void FUN_18028fcc0(void)

{
  if (DAT_180961aa8 == (code *)0x0) {
    return;
  }
  (*DAT_180961aa8)("HudWeaponSelection");
  return;
}



/* ===== 18028fcf0 FUN_18028fcf0 ===== */

void FUN_18028fcf0(longlong param_1,undefined8 param_2)

{
  if ((DAT_180961f28 != (code *)0x0) && (param_1 != 0)) {
    (*DAT_180961f28)(param_1,param_2,0);
  }
  return;
}



/* ===== 18028fd20 FUN_18028fd20 ===== */

void FUN_18028fd20(undefined4 param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  ULONGLONG UVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 local_res10 [8];
  
  if (((param_2 != 0) && (DAT_180961f28 != 0)) && (uVar4 = FUN_18028fcc0(), 0x98 < uVar4)) {
    uVar2 = FUN_180011200(uVar4 - 0x48);
    lVar5 = FUN_18000f3a0(uVar4 - 0x40);
    if ((lVar5 != 0) && (uVar2 - 1 < 0x40)) {
      do {
        uVar2 = uVar2 - 1;
        if ((int)uVar2 < 0) goto LAB_18028fdc9;
        iVar3 = FUN_180011200(((ulonglong)uVar2 * 9 + 7) * 8 + lVar5);
      } while ((iVar3 == -1) ||
              (plVar6 = (longlong *)FUN_1803a0940(local_res10,iVar3), *plVar6 != param_2));
      FUN_18028fcf0(uVar4 - 0x98,(ulonglong)uVar2);
    }
  }
LAB_18028fdc9:
  puVar7 = (undefined4 *)thunk_FUN_1804e6e50(DAT_180cfe710,DAT_180cfe718,param_1);
  puVar11 = DAT_180cfe718;
  if (puVar7 == DAT_180cfe718) {
    if (DAT_180cfe718 == DAT_180cfe720) {
      uVar12 = (longlong)DAT_180cfe718 - (longlong)DAT_180cfe710;
      uVar4 = 0x3fffffffffffffff;
      lVar5 = (longlong)uVar12 >> 2;
      if (lVar5 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      uVar1 = lVar5 + 1;
      uVar9 = (longlong)DAT_180cfe720 - (longlong)DAT_180cfe710 >> 2;
      if (uVar9 <= 0x3fffffffffffffff - (uVar9 >> 1)) {
        uVar9 = (uVar9 >> 1) + uVar9;
        uVar4 = uVar1;
        if (uVar1 <= uVar9) {
          uVar4 = uVar9;
        }
        if (0x3fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_18000d840();
        }
      }
      lVar5 = FUN_18000fb70(uVar4 * 4);
      uVar12 = uVar12 & 0xfffffffffffffffc;
      *(undefined4 *)(uVar12 + lVar5) = param_1;
      if (puVar11 == DAT_180cfe718) {
        lVar13 = (longlong)DAT_180cfe718 - (longlong)DAT_180cfe710;
        lVar10 = lVar5;
        puVar11 = DAT_180cfe710;
      }
      else {
        FUN_180540530(lVar5,DAT_180cfe710,(longlong)puVar11 - (longlong)DAT_180cfe710);
        lVar13 = (longlong)DAT_180cfe718 - (longlong)puVar11;
        lVar10 = uVar12 + 4 + lVar5;
      }
      FUN_180540530(lVar10,puVar11,lVar13);
      FUN_18006b9f0(&DAT_180cfe710,lVar5,uVar1,uVar4);
    }
    else {
      *DAT_180cfe718 = param_1;
      DAT_180cfe718 = DAT_180cfe718 + 1;
    }
  }
  UVar8 = GetTickCount64();
  DAT_180cfe5b8 = UVar8 + 0x32;
  return;
}



/* ===== 18028ff10 FUN_18028ff10 ===== */

ulonglong FUN_18028ff10(uint *param_1,uint *param_2)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  undefined4 extraout_var;
  float *pfVar5;
  float *pfVar6;
  
  pfVar4 = (float *)(ulonglong)*param_2;
  if ((((*param_1 == *param_2) &&
       (pfVar4 = (float *)(ulonglong)param_2[2], param_1[2] == param_2[2])) &&
      ((float)param_1[3] == (float)param_2[3])) &&
     (((pfVar4 = (float *)(ulonglong)param_2[4], param_1[4] == param_2[4] &&
       (pfVar4 = (float *)0x0, (char)param_1[5] == (char)param_2[5])) &&
      (pfVar4 = (float *)(ulonglong)param_2[6], param_1[6] == param_2[6])))) {
    iVar3 = memcmp(param_1 + 7,param_2 + 7,0x40);
    pfVar4 = (float *)CONCAT44(extraout_var,iVar3);
    if ((iVar3 == 0) && (pfVar4 = (float *)0x0, (char)param_1[0x17] == (char)param_2[0x17])) {
      pfVar6 = (float *)(param_2 + 0x18);
      pfVar5 = (float *)(param_1 + 0x18);
      if (param_1 != param_1 + 0x20) {
        while( true ) {
          pfVar1 = pfVar5 + 4;
          pfVar4 = pfVar6;
          for (; pfVar5 != pfVar1; pfVar5 = pfVar5 + 1) {
            if (*pfVar5 != *pfVar4) goto LAB_1802903ca;
            pfVar4 = pfVar4 + 1;
          }
          if (pfVar1 == (float *)(param_1 + 0x38)) break;
          pfVar6 = pfVar6 + 4;
          pfVar5 = pfVar1;
        }
      }
      pfVar4 = (float *)(ulonglong)param_2[0x38];
      if ((((((param_1[0x38] == param_2[0x38]) && ((float)param_1[0x39] == (float)param_2[0x39])) &&
            ((float)param_1[0x3a] == (float)param_2[0x3a])) &&
           (((float)param_1[0x3b] == (float)param_2[0x3b] &&
            ((float)param_1[0x3c] == (float)param_2[0x3c])))) &&
          (((((float)param_1[0x3d] == (float)param_2[0x3d] &&
             ((pfVar4 = (float *)(ulonglong)param_2[0x3e], param_1[0x3e] == param_2[0x3e] &&
              (pfVar4 = (float *)(ulonglong)param_2[0x3f], param_1[0x3f] == param_2[0x3f])))) &&
            (((float)param_1[0x40] == (float)param_2[0x40] &&
             ((((float)param_1[0x41] == (float)param_2[0x41] &&
               ((float)param_1[0x42] == (float)param_2[0x42])) &&
              ((float)param_1[0x43] == (float)param_2[0x43])))))) &&
           ((((float)param_1[0x44] == (float)param_2[0x44] &&
             (pfVar4 = (float *)(ulonglong)param_2[0x45], param_1[0x45] == param_2[0x45])) &&
            ((pfVar4 = (float *)(ulonglong)param_2[0x46], param_1[0x46] == param_2[0x46] &&
             (((float)param_1[0x47] == (float)param_2[0x47] &&
              ((float)param_1[0x48] == (float)param_2[0x48])))))))))) &&
         (((float)param_1[0x49] == (float)param_2[0x49] &&
          ((((((float)param_1[0x4a] == (float)param_2[0x4a] &&
              ((float)param_1[0x4b] == (float)param_2[0x4b])) &&
             (pfVar4 = (float *)(ulonglong)param_2[0x4c], param_1[0x4c] == param_2[0x4c])) &&
            (((pfVar4 = (float *)(ulonglong)param_2[0x4d], param_1[0x4d] == param_2[0x4d] &&
              ((float)param_1[0x4e] == (float)param_2[0x4e])) &&
             (((float)param_1[0x4f] == (float)param_2[0x4f] &&
              (((float)param_1[0x50] == (float)param_2[0x50] &&
               ((float)param_1[0x51] == (float)param_2[0x51])))))))) &&
           (((float)param_1[0x52] == (float)param_2[0x52] &&
            (((((((pfVar4 = (float *)(ulonglong)param_2[0x53], param_1[0x53] == param_2[0x53] &&
                  (pfVar4 = (float *)(ulonglong)param_2[0x54], param_1[0x54] == param_2[0x54])) &&
                 ((float)param_1[0x55] == (float)param_2[0x55])) &&
                (((float)param_1[0x56] == (float)param_2[0x56] &&
                 ((float)param_1[0x57] == (float)param_2[0x57])))) &&
               ((float)param_1[0x58] == (float)param_2[0x58])) &&
              (((float)param_1[0x59] == (float)param_2[0x59] &&
               (pfVar4 = (float *)(ulonglong)param_2[0x5a], param_1[0x5a] == param_2[0x5a])))) &&
             (((pfVar4 = (float *)(ulonglong)param_2[0x5b], param_1[0x5b] == param_2[0x5b] &&
               ((((float)param_1[0x5c] == (float)param_2[0x5c] &&
                 ((float)param_1[0x5d] == (float)param_2[0x5d])) &&
                ((float)param_1[0x5e] == (float)param_2[0x5e])))) &&
              (((float)param_1[0x5f] == (float)param_2[0x5f] &&
               ((float)param_1[0x60] == (float)param_2[0x60])))))))))))))) {
        uVar2 = param_2[0x61];
        pfVar4 = (float *)(ulonglong)uVar2;
        if (param_1[0x61] == uVar2) {
          return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
        }
      }
    }
  }
LAB_1802903ca:
  return (ulonglong)pfVar4 & 0xffffffffffffff00;
}



/* ===== 1802903e0 FUN_1802903e0 ===== */

undefined8 * FUN_1802903e0(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  ulonglong uVar9;
  longlong lVar10;
  float local_68 [2];
  float local_60 [2];
  float local_58 [2];
  float local_50 [2];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c [9];
  
  fVar3 = DAT_1808acb94;
  fVar2 = DAT_1808ac34c;
  uVar9 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  fVar1 = DAT_1808ac1f4;
  lVar10 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  do {
    local_68[0] = *(float *)(param_2 + 0x60 + lVar10);
    local_60[0] = *(float *)(param_2 + 100 + lVar10);
    local_58[0] = *(float *)(param_2 + 0x68 + lVar10);
    local_50[0] = *(float *)(param_2 + 0x6c + lVar10);
    local_44 = 1.0;
    local_48 = 0.0;
    local_3c = 1.0;
    local_40 = 0.0;
    local_34 = 1.0;
    local_38 = 0.0;
    local_2c[0] = 1.0;
    pfVar8 = &local_48;
    if (0.0 <= local_68[0]) {
      pfVar8 = local_68;
    }
    local_30 = 0.0;
    pfVar4 = &local_44;
    if (local_68[0] <= fVar2) {
      pfVar4 = pfVar8;
    }
    pfVar8 = &local_40;
    if (0.0 <= local_60[0]) {
      pfVar8 = local_60;
    }
    pfVar5 = &local_3c;
    if (local_60[0] <= fVar2) {
      pfVar5 = pfVar8;
    }
    pfVar8 = &local_38;
    if (0.0 <= local_58[0]) {
      pfVar8 = local_58;
    }
    pfVar6 = &local_34;
    if (local_58[0] <= fVar2) {
      pfVar6 = pfVar8;
    }
    pfVar8 = &local_30;
    if (0.0 <= local_50[0]) {
      pfVar8 = local_50;
    }
    pfVar7 = local_2c;
    if (local_50[0] <= fVar2) {
      pfVar7 = pfVar8;
    }
    *(uint *)((longlong)param_1 + uVar9 * 4) =
         (((int)(longlong)(*pfVar7 * fVar3 + fVar1) << 8 | (uint)(longlong)(*pfVar6 * fVar3 + fVar1)
          ) << 8 | (uint)(longlong)(*pfVar5 * fVar3 + fVar1)) << 8 |
         (uint)(longlong)(*pfVar4 * fVar3 + fVar1);
    local_68[0] = *(float *)(param_2 + 0x70 + lVar10);
    local_60[0] = *(float *)(param_2 + 0x74 + lVar10);
    local_58[0] = *(float *)(param_2 + 0x78 + lVar10);
    local_50[0] = *(float *)(param_2 + 0x7c + lVar10);
    pfVar8 = &local_48;
    if (0.0 <= local_68[0]) {
      pfVar8 = local_68;
    }
    pfVar4 = &local_44;
    if (local_68[0] <= fVar2) {
      pfVar4 = pfVar8;
    }
    pfVar8 = &local_40;
    if (0.0 <= local_60[0]) {
      pfVar8 = local_60;
    }
    pfVar5 = &local_3c;
    if (local_60[0] <= fVar2) {
      pfVar5 = pfVar8;
    }
    pfVar8 = &local_38;
    if (0.0 <= local_58[0]) {
      pfVar8 = local_58;
    }
    pfVar6 = &local_34;
    if (local_58[0] <= fVar2) {
      pfVar6 = pfVar8;
    }
    pfVar8 = &local_30;
    if (0.0 <= local_50[0]) {
      pfVar8 = local_50;
    }
    pfVar7 = local_2c;
    if (local_50[0] <= fVar2) {
      pfVar7 = pfVar8;
    }
    *(uint *)((longlong)param_1 + uVar9 * 4 + 4) =
         (((int)(longlong)(*pfVar7 * fVar3 + fVar1) << 8 | (uint)(longlong)(*pfVar6 * fVar3 + fVar1)
          ) << 8 | (uint)(longlong)(*pfVar5 * fVar3 + fVar1)) << 8 |
         (uint)(longlong)(*pfVar4 * fVar3 + fVar1);
    local_68[0] = *(float *)(param_2 + 0x80 + lVar10);
    local_60[0] = *(float *)(param_2 + 0x84 + lVar10);
    local_58[0] = *(float *)(param_2 + 0x88 + lVar10);
    local_50[0] = *(float *)(param_2 + 0x8c + lVar10);
    pfVar8 = &local_48;
    if (0.0 <= local_68[0]) {
      pfVar8 = local_68;
    }
    pfVar4 = &local_44;
    if (local_68[0] <= fVar2) {
      pfVar4 = pfVar8;
    }
    pfVar8 = &local_40;
    if (0.0 <= local_60[0]) {
      pfVar8 = local_60;
    }
    pfVar5 = &local_3c;
    if (local_60[0] <= fVar2) {
      pfVar5 = pfVar8;
    }
    pfVar8 = &local_38;
    if (0.0 <= local_58[0]) {
      pfVar8 = local_58;
    }
    pfVar6 = &local_34;
    if (local_58[0] <= fVar2) {
      pfVar6 = pfVar8;
    }
    pfVar8 = &local_30;
    if (0.0 <= local_50[0]) {
      pfVar8 = local_50;
    }
    pfVar7 = local_2c;
    if (local_50[0] <= fVar2) {
      pfVar7 = pfVar8;
    }
    *(uint *)((longlong)param_1 + uVar9 * 4 + 8) =
         (((int)(longlong)(*pfVar7 * fVar3 + fVar1) << 8 | (uint)(longlong)(*pfVar6 * fVar3 + fVar1)
          ) << 8 | (uint)(longlong)(*pfVar5 * fVar3 + fVar1)) << 8 |
         (uint)(longlong)(*pfVar4 * fVar3 + fVar1);
    local_68[0] = *(float *)(param_2 + 0x90 + lVar10);
    local_60[0] = *(float *)(param_2 + 0x94 + lVar10);
    local_58[0] = *(float *)(param_2 + 0x98 + lVar10);
    local_50[0] = *(float *)(param_2 + 0x9c + lVar10);
    pfVar8 = &local_48;
    if (0.0 <= local_68[0]) {
      pfVar8 = local_68;
    }
    pfVar4 = &local_44;
    if (local_68[0] <= fVar2) {
      pfVar4 = pfVar8;
    }
    pfVar8 = &local_40;
    if (0.0 <= local_60[0]) {
      pfVar8 = local_60;
    }
    pfVar5 = &local_3c;
    if (local_60[0] <= fVar2) {
      pfVar5 = pfVar8;
    }
    pfVar8 = &local_38;
    if (0.0 <= local_58[0]) {
      pfVar8 = local_58;
    }
    pfVar6 = &local_34;
    if (local_58[0] <= fVar2) {
      pfVar6 = pfVar8;
    }
    pfVar8 = &local_30;
    if (0.0 <= local_50[0]) {
      pfVar8 = local_50;
    }
    pfVar7 = local_2c;
    if (local_50[0] <= fVar2) {
      pfVar7 = pfVar8;
    }
    *(uint *)((longlong)param_1 + uVar9 * 4 + 0xc) =
         (((int)(longlong)(*pfVar7 * fVar3 + fVar1) << 8 | (uint)(longlong)(*pfVar6 * fVar3 + fVar1)
          ) << 8 | (uint)(longlong)(*pfVar5 * fVar3 + fVar1)) << 8 |
         (uint)(longlong)(*pfVar4 * fVar3 + fVar1);
    lVar10 = lVar10 + 0x40;
    uVar9 = uVar9 + 4;
  } while (uVar9 < 8);
  return param_1;
}



/* ===== 180290880 FUN_180290880 ===== */

void FUN_180290880(longlong param_1)

{
  if ((DAT_180961e90 != (code *)0x0) && (param_1 != 0)) {
    (*DAT_180961e90)();
  }
  return;
}



/* ===== 1802908a0 FUN_1802908a0 ===== */

longlong FUN_1802908a0(longlong param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((DAT_180cfe63c != 0) && (param_2 != 0)) {
    uVar6 = (ulonglong)DAT_180cfe63c;
    iVar3 = FUN_180011200((ulonglong)DAT_180cfe63c + 8 + param_1);
    lVar4 = FUN_18000f3a0(uVar6 + 0x10 + param_1);
    if ((iVar3 - 1U < 0x4000) && ((lVar4 != 0 && (uVar6 = 0, 0 < iVar3)))) {
      do {
        cVar1 = FUN_180011220(lVar4 + 0x40 + uVar6 * 0x48);
        if (cVar1 == '\0') {
          uVar2 = FUN_180011440(lVar4 + 0x30 + uVar6 * 0x48);
          if (uVar2 == param_2) {
            return lVar4 + uVar6 * 0x48;
          }
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < iVar3);
    }
  }
  return 0;
}



/* ===== 180290960 FUN_180290960 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180290960(undefined8 param_1,char *param_2,undefined4 param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  size_t sVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 ****ppppuVar8;
  undefined1 *puVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined8 ****local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined8 ****)0x0;
  uStack_48 = 0;
  local_68 = param_3;
  sVar5 = strlen(param_2);
  FUN_1800133a0(&local_50,param_2,sVar5);
  uVar4 = local_38;
  ppppuVar3 = local_50;
  if (DAT_180ccfeda == '\0') {
LAB_180290a41:
    iVar10 = 0;
  }
  else {
    uVar11 = 0xcbf29ce484222325;
    ppppuVar8 = &local_50;
    if (0xf < local_38) {
      ppppuVar8 = local_50;
    }
    uVar7 = 0;
    if (local_40 != 0) {
      do {
        pbVar1 = (byte *)(uVar7 + (longlong)ppppuVar8);
        uVar7 = uVar7 + 1;
        uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
      } while (uVar7 < local_40);
    }
    lVar6 = FUN_1800268a0(&DAT_180ca1520,local_60,&local_50,uVar11);
    lVar6 = *(longlong *)(lVar6 + 8);
    if ((lVar6 == 0) || (lVar6 == DAT_180ca1528)) goto LAB_180290a41;
    iVar10 = *(int *)(lVar6 + 0x30);
  }
  if (uVar4 < 0x10) {
LAB_180290a76:
    puVar9 = auStack_88;
    if (iVar10 == 0) {
      FUN_180290880(param_1,param_2,param_3);
      puVar9 = auStack_88;
      goto LAB_180290abd;
    }
  }
  else {
    uVar11 = uVar4 + 1;
    ppppuVar8 = ppppuVar3;
    if (uVar11 < 0x1000) {
LAB_180290a6e:
      thunk_FUN_1803d64e0(ppppuVar8,uVar11);
      goto LAB_180290a76;
    }
    ppppuVar8 = (undefined8 ****)ppppuVar3[-1];
    if ((ulonglong)((longlong)ppppuVar3 + (-8 - (longlong)ppppuVar8)) < 0x20) {
      uVar11 = uVar4 + 0x28;
      goto LAB_180290a6e;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar9 = auStack_80;
  }
  *(undefined8 *)(puVar9 + -8) = 0x180290aa0;
  FUN_180290880();
  *(undefined8 *)(puVar9 + -8) = 0x180290aaa;
  lVar6 = FUN_1802908a0(param_1,iVar10);
  if (lVar6 != 0) {
    *(undefined8 *)(puVar9 + -8) = 0x180290abd;
    FUN_180013280(lVar6 + 0x34,puVar9 + 0x20);
  }
LAB_180290abd:
  *(undefined8 *)(puVar9 + -8) = 0x180290aca;
  return;
}



/* ===== 180290ae0 FUN_180290ae0 ===== */

void FUN_180290ae0(longlong param_1)

{
  if ((DAT_180961e98 != (code *)0x0) && (param_1 != 0)) {
    (*DAT_180961e98)();
  }
  return;
}



/* ===== 180290b00 FUN_180290b00 ===== */

void FUN_180290b00(code *param_1,longlong param_2)

{
  if ((param_1 != (code *)0x0) && (param_2 != 0)) {
    (*param_1)(param_2);
  }
  return;
}



/* ===== 180290b20 FUN_180290b20 ===== */

void FUN_180290b20(code *param_1,longlong param_2,undefined8 param_3)

{
  if ((param_1 != (code *)0x0) && (param_2 != 0)) {
    (*param_1)(param_2,param_3);
  }
  return;
}



/* ===== 180290b50 FUN_180290b50 ===== */

void FUN_180290b50(longlong param_1,byte param_2)

{
  if ((DAT_180961eb8 != (code *)0x0) && (param_1 != 0)) {
    (*DAT_180961eb8)(param_1,(ulonglong)param_2 + 1);
  }
  return;
}



/* ===== 180290b80 FUN_180290b80 ===== */

void FUN_180290b80(longlong param_1)

{
  if (((DAT_180961e78 != (code *)0x0) && (DAT_180961e80 != 0)) && (param_1 != 0)) {
    (*DAT_180961e78)((ulonglong)DAT_180961e80 + param_1,1);
  }
  return;
}



/* ===== 180290bc0 FUN_180290bc0 ===== */

void FUN_180290bc0(longlong param_1)

{
  if ((DAT_180961e60 != (code *)0x0) && (param_1 != 0)) {
    (*DAT_180961e60)();
  }
  return;
}



/* ===== 180290be0 FUN_180290be0 ===== */

void FUN_180290be0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x50))(param_1,1);
  }
  return;
}



/* ===== 180290c00 FUN_180290c00 ===== */

undefined8 FUN_180290c00(longlong param_1)

{
  undefined8 uVar1;
  
  if ((DAT_180961ec8 == (code *)0x0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_180961ec8)();
  }
  return uVar1;
}



/* ===== 180290c30 FUN_180290c30 ===== */

void FUN_180290c30(longlong param_1,char *param_2)

{
  if ((((DAT_180961ed0 != (code *)0x0) && (param_1 != 0)) && (param_2 != (char *)0x0)) &&
     (*param_2 != '\0')) {
    (*DAT_180961ed0)();
  }
  return;
}



/* ===== 180290c60 FUN_180290c60 ===== */

void FUN_180290c60(longlong param_1,char *param_2)

{
  ulonglong uVar1;
  size_t sVar2;
  ulonglong uVar3;
  undefined1 local_res18 [8];
  
  uVar1 = (ulonglong)DAT_180cfe5f0;
  if ((DAT_180cfe5f0 != 0) && (param_1 != 0)) {
    sVar2 = strlen(param_2);
    if (0xa0 < sVar2) {
      sVar2 = 0xa0;
    }
    uVar3 = 0;
    if (sVar2 != 0) {
      do {
        FUN_1800233d0(uVar3 + param_1 + uVar1,param_2 + uVar3);
        uVar3 = uVar3 + 1;
      } while (uVar3 < sVar2);
    }
    local_res18[0] = 0;
    FUN_1800233d0(sVar2 + param_1 + uVar1,local_res18);
  }
  return;
}



/* ===== 180290cf0 FUN_180290cf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180290cf0(longlong param_1,longlong param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char *_Str1;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  longlong local_120;
  longlong local_118;
  undefined1 local_110 [184];
  ulonglong local_58;
  
  uVar9 = DAT_180cfe61c;
  uVar8 = DAT_180cfe618;
  uVar7 = DAT_180cfe614;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_148;
  if ((((param_1 == 0) || (DAT_180cfe614 == 0)) || (DAT_180cfe618 == 0)) || (DAT_180cfe61c == 0)) {
    return 0;
  }
  FUN_180540170(local_110,0,0xb8);
  iVar6 = 0;
  local_118 = param_1;
  uVar5 = 1;
  local_128 = 0;
  do {
    lVar4 = (ulonglong)uVar7 + *(longlong *)(local_110 + local_128 * 8 + -8);
    while ((lVar4 = FUN_18000f3a0(lVar4), lVar4 - 0x10000U < 0x7ffffffeffff && (iVar6 < 0xc0))) {
      lVar2 = FUN_18000f3a0((ulonglong)uVar9 + lVar4);
      if (lVar2 - 0x10000U < 0x7ffffffeffff) {
        if ((param_2 != 0) && (lVar3 = FUN_18000f3a0(lVar2), lVar3 == param_2)) {
          return lVar2;
        }
        if (param_3 != (char *)0x0) {
          local_120 = lVar2;
          _Str1 = (char *)FUN_1803a0710(&local_120);
          if ((_Str1 != (char *)0x0) && (iVar1 = strcmp(_Str1,param_3), iVar1 == 0)) {
            return lVar2;
          }
          uVar8 = DAT_180cfe618;
          uVar9 = DAT_180cfe61c;
        }
      }
      iVar6 = iVar6 + 1;
      if (uVar5 < 0x18) {
        *(longlong *)(local_110 + uVar5 * 8 + -8) = lVar4;
        uVar5 = uVar5 + 1;
      }
      lVar4 = (ulonglong)uVar8 + lVar4;
    }
    local_128 = local_128 + 1;
    if (uVar5 <= local_128) {
      return 0;
    }
    uVar7 = DAT_180cfe614;
  } while( true );
}



/* ===== 180290e90 FUN_180290e90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180290e90(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  char *_Str1;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  longlong local_108 [3];
  undefined1 local_f0 [184];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_128;
  if ((DAT_180cfe634 != 0) && (param_1 != 0)) {
    uVar1 = FUN_180011200((ulonglong)DAT_180cfe634 + param_1);
    FUN_1803a0940(local_108,uVar1);
    if (local_108[0] != 0) {
      local_108[2] = FUN_18000f3a0((ulonglong)DAT_180cfe610 + local_108[0]);
      uVar10 = DAT_180cfe61c;
      uVar9 = DAT_180cfe618;
      uVar7 = DAT_180cfe614;
      if ((((local_108[2] != 0) && (DAT_180cfe614 != 0)) && (DAT_180cfe618 != 0)) &&
         (DAT_180cfe61c != 0)) {
        FUN_180540170(local_f0,0,0xb8);
        iVar6 = 0;
        uVar8 = 0;
        uVar5 = 1;
        while( true ) {
          lVar4 = (ulonglong)uVar7 + local_108[uVar8 + 2];
          while ((lVar4 = FUN_18000f3a0(lVar4), lVar4 - 0x10000U < 0x7ffffffeffff && (iVar6 < 0xc0))
                ) {
            lVar3 = FUN_18000f3a0((ulonglong)uVar10 + lVar4);
            if (lVar3 - 0x10000U < 0x7ffffffeffff) {
              local_108[0] = lVar3;
              _Str1 = (char *)FUN_1803a0710(local_108);
              if ((_Str1 != (char *)0x0) &&
                 (iVar2 = strcmp(_Str1,"C_CS2HudModelWeapon"), iVar2 == 0)) {
                return lVar3;
              }
              uVar9 = DAT_180cfe618;
              uVar10 = DAT_180cfe61c;
            }
            iVar6 = iVar6 + 1;
            if (uVar5 < 0x18) {
              local_108[uVar5 + 2] = lVar4;
              uVar5 = uVar5 + 1;
            }
            lVar4 = (ulonglong)uVar9 + lVar4;
          }
          uVar8 = uVar8 + 1;
          if (uVar5 <= uVar8) break;
          uVar7 = DAT_180cfe614;
        }
      }
      return 0;
    }
  }
  return 0;
}



/* ===== 1802910c0 FUN_1802910c0 ===== */

void FUN_1802910c0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  char *_Str1;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  lVar1 = DAT_180961ee0;
  uVar7 = (ulonglong)DAT_180961ee8;
  if (((((DAT_180961ee8 != 0) && (DAT_180961ee0 != 0)) && (DAT_180cfe650 != 0)) &&
      ((param_1 != 0 && (iVar3 = FUN_180011200((ulonglong)DAT_180cfe650 + param_1), iVar3 != -1))))
     && ((FUN_1803a0940(&local_res10,iVar3), uVar2 = local_res10, local_res10 != 0 &&
         ((_Str1 = (char *)FUN_1803a0710(&local_res10), _Str1 != (char *)0x0 &&
          (iVar3 = strcmp(_Str1,"C_CS2HudModelWeapon"), iVar3 == 0)))))) {
    uVar5 = FUN_180011200(uVar2 + 4 + uVar7);
    if ((uVar5 & 0x7fffffff) == 0) {
      FUN_180011200(uVar2 + 0x14 + uVar7);
      return;
    }
    lVar6 = FUN_18000f3a0(uVar2 + 8 + uVar7);
    iVar3 = FUN_180011200(uVar2 + 0x14 + uVar7);
    if ((lVar6 != 0) && (iVar3 - 1U < 0x1000)) {
      iVar10 = 0;
      uVar9 = 0;
      if (0 < iVar3) {
        do {
          uVar7 = (ulonglong)uVar9 * 0x10;
          iVar4 = FUN_180011200(uVar7 + lVar6);
          if (-1 < iVar4) {
            local_res10 = local_res10 & 0xffffffff00000000;
            FUN_180013280((uVar7 | 8) + lVar6,&local_res10);
            lVar8 = (uVar7 | 0xc) + lVar6;
            iVar4 = FUN_180011200(lVar8);
            if ((iVar4 != -1) && (FUN_1803a0940(local_res18,iVar4), local_res18[0] != 0)) {
              FUN_180290b00(lVar1);
              FUN_180013280(lVar8,&DAT_180650268);
              iVar10 = iVar10 + 1;
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < iVar3);
      }
      FUN_18028fbf0("hud addons | copy %p | entries %d | removed %d",uVar2,iVar3,iVar10);
    }
  }
  return;
}



/* ===== 1802912b0 FUN_1802912b0 ===== */

void FUN_1802912b0(longlong param_1,undefined8 param_2,char param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 local_res8;
  undefined7 uStackX_9;
  
  if (((DAT_180cfe650 == 0) || (param_1 == 0)) ||
     (iVar1 = FUN_180011200(param_1 + (ulonglong)DAT_180cfe650), iVar1 == -1)) {
LAB_1802912f9:
    if ((param_3 == '\0') || (lVar2 = FUN_180290e90(param_2), lVar2 == 0)) {
      uVar5 = (ulonglong)DAT_180cfe610;
      uVar3 = 0;
      goto LAB_180291327;
    }
  }
  else {
    FUN_1803a0940(&local_res8,iVar1);
    lVar2 = CONCAT71(uStackX_9,local_res8);
    if (lVar2 == 0) goto LAB_1802912f9;
  }
  uVar5 = (ulonglong)DAT_180cfe610;
  uVar3 = FUN_18000f3a0(lVar2 + uVar5);
LAB_180291327:
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_18000f3a0(uVar5 + param_1);
  }
  if ((DAT_180961e70 != 0) && (param_1 != 0)) {
    local_res8 = 1;
    FUN_1800233d0(param_1 + (ulonglong)DAT_180961e70,&local_res8);
  }
  FUN_180290b50(uVar3,param_4);
  FUN_180290b50(uVar4,param_4);
  FUN_180290be0(param_1);
  FUN_180290b50(uVar3,param_4);
  FUN_180290b50(uVar4,param_4);
  if (((param_1 == 0) || (DAT_180961e88 == 0)) ||
     (iVar1 = FUN_180011200(param_1 + (ulonglong)DAT_180961e88), iVar1 < 1)) {
    FUN_180290b80(param_1);
    FUN_180290bc0(param_1,0);
    return;
  }
  return;
}



/* ===== 1802913d0 FUN_1802913d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802913d0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  uVar3 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  do {
    snprintf(&local_68,0x40,"sticker slot %zu id",uVar3);
    lVar4 = uVar3 * 0x1c;
    if (*(int *)(param_2 + 0xe0 + lVar4) < 1) {
      FUN_180290960(param_1,&local_68,0);
    }
    else {
      FUN_180290960(param_1,&local_68);
      snprintf(&local_68,0x40,"sticker slot %zu schema",uVar3);
      uVar1 = *(uint *)(param_2 + 0xf8 + lVar4);
      uVar5 = (ulonglong)uVar1;
      if ((int)uVar1 < 0) {
        uVar5 = uVar3 & 0xffffffff;
      }
      FUN_180290960(param_1,&local_68,uVar5);
      uVar1 = *(uint *)(param_2 + 0xf8 + lVar4);
      uVar2 = uVar1;
      if ((int)uVar1 < 0) {
        uVar2 = (uint)uVar3;
      }
      if (uVar2 != (uint)uVar3) {
        local_70 = (double)*(float *)(param_2 + 0xf4 + lVar4);
        uVar5 = (ulonglong)uVar1;
        if ((int)uVar1 < 0) {
          uVar5 = uVar3 & 0xffffffff;
        }
        local_78 = (double)*(float *)(param_2 + 0xf0 + lVar4);
        FUN_18028fbf0("stickers | slot %zu | sticker %d | schema %d (NL 0x71ebe0 / 0x70ca24 placement) | offset %.3f %.3f"
                      ,uVar3,*(undefined4 *)(param_2 + 0xe0 + lVar4),uVar5);
      }
      snprintf(&local_68,0x40,"sticker slot %zu wear",uVar3);
      FUN_180290880(param_1,&local_68,*(undefined4 *)(param_2 + 0xe4 + lVar4));
      snprintf(&local_68,0x40,"sticker slot %zu scale",uVar3);
      FUN_180290880(param_1,&local_68,*(undefined4 *)(param_2 + 0xe8 + lVar4));
      snprintf(&local_68,0x40,"sticker slot %zu rotation",uVar3);
      FUN_180290880(param_1,&local_68,*(undefined4 *)(param_2 + 0xec + lVar4));
      snprintf(&local_68,0x40,"sticker slot %zu offset x",uVar3);
      FUN_180290880(param_1,&local_68,*(undefined4 *)(param_2 + 0xf0 + lVar4));
      snprintf(&local_68,0x40,"sticker slot %zu offset y",uVar3);
      FUN_180290880(param_1,&local_68,*(undefined4 *)(param_2 + 0xf4 + lVar4));
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  return;
}



/* ===== 180291600 FUN_180291600 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180291600(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  uVar1 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  do {
    snprintf(&local_58,0x40,"sticker slot %zu id",uVar1);
    FUN_180290960(param_1,&local_58,0);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 6);
  if (param_1 != 0) {
    FUN_180290960(param_1,"keychain slot 0 id",0);
  }
  return;
}



/* ===== 1802916b0 FUN_1802916b0 ===== */

void FUN_1802916b0(longlong param_1,undefined8 param_2,longlong param_3,char param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else if (param_1 == 0) {
    lVar2 = FUN_180290cf0(0,param_3,0);
  }
  else {
    uVar1 = FUN_18000f3a0((ulonglong)DAT_180cfe610 + param_1);
    lVar2 = FUN_180290cf0(uVar1,param_3,0);
  }
  if (param_4 == '\0') {
    if (lVar2 != 0) {
      FUN_180290b00(DAT_180961ee0,lVar2);
    }
  }
  else if (lVar2 == 0) {
    FUN_180290b20(param_5,param_1,param_2);
    return;
  }
  return;
}



/* ===== 180291740 FUN_180291740 ===== */

void FUN_180291740(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  FUN_180013280((ulonglong)DAT_180cfe5fc + param_1,param_2 + 8);
  FUN_180013280((ulonglong)DAT_180cfe600 + param_1,param_2 + 0x10);
  local_res10[0] = 0x3f800000;
  local_res8[0] = 0;
  puVar1 = local_res8;
  if (0.0 <= *(float *)(param_2 + 0xc)) {
    puVar1 = (undefined4 *)(param_2 + 0xc);
  }
  puVar2 = local_res10;
  if (*(float *)(param_2 + 0xc) <= DAT_1808ac34c) {
    puVar2 = puVar1;
  }
  FUN_180013280((ulonglong)DAT_180cfe604 + param_1,puVar2);
  if (*(char *)(param_2 + 0x14) == '\0') {
    local_res8[0] = 0xffffffff;
  }
  else {
    local_res8[0] = *(undefined4 *)(param_2 + 0x18);
  }
  FUN_180013280((ulonglong)DAT_180cfe608 + param_1,local_res8);
  return;
}



/* ===== 1802917f0 FUN_1802917f0 ===== */

void FUN_1802917f0(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong local_res8;
  
  uVar4 = (ulonglong)DAT_180cfe5d0;
  if ((DAT_180cfe650 == 0) || (param_1 == 0)) {
LAB_180291848:
    if (param_3 == '\0') {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_180290e90(param_2);
      if (lVar2 != 0) goto LAB_18029185d;
    }
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_180011200(param_1 + (ulonglong)DAT_180cfe650);
    if (iVar1 == -1) goto LAB_180291848;
    FUN_1803a0940(&local_res8,iVar1);
    lVar2 = local_res8;
    if (local_res8 == 0) goto LAB_180291848;
LAB_18029185d:
    uVar3 = FUN_18000f3a0((ulonglong)DAT_180cfe610 + lVar2);
  }
  FUN_180290b50(uVar3,0);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_18000f3a0((ulonglong)DAT_180cfe610 + param_1);
  }
  FUN_180290b50(uVar3,0);
  FUN_180290b80(param_1);
  uVar3 = FUN_180290c00(uVar4 + param_1);
  FUN_180290c30(param_1,uVar3);
  FUN_180290be0(param_1);
  FUN_180290bc0(param_1,0);
  FUN_180290be0(lVar2);
  FUN_180290b00(DAT_180961ea0,uVar4 + param_1);
  return;
}



/* ===== 180291900 FUN_180291900 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180291900(longlong param_1,undefined8 param_2,char param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  longlong lVar18;
  undefined4 *puVar19;
  ULONGLONG UVar20;
  undefined8 uVar21;
  longlong local_80;
  undefined1 local_78 [64];
  
  if (*(int *)(param_4 + 8) == 0) {
    FUN_1802917f0(param_1);
    return;
  }
  lVar18 = FUN_180280d30();
  if ((lVar18 == 0) || (*(char *)(lVar18 + 0x50) == '\0')) {
    uVar21 = 0;
  }
  else {
    uVar21 = 1;
  }
  if (*(char *)(param_4 + 0x5c) == '\0') {
    FUN_1802912b0(param_1,param_2,param_3,uVar21);
    goto LAB_180291c10;
  }
  iVar14 = FUN_1804e4d70(&DAT_1809f3770);
  uVar13 = DAT_180cfca18;
  uVar12 = uRam0000000180cfca08;
  uVar11 = _DAT_180cfca00;
  uVar10 = DAT_180cfc9fc;
  uVar9 = DAT_180cfc9f8;
  uVar5 = DAT_180cfc9f4;
  uVar17 = DAT_180cfc9f0;
  uVar8 = DAT_180ccfedc;
  if (iVar14 != 0) {
LAB_180291c76:
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f37bc == 0x7fffffff) {
LAB_180291c61:
    DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_80 = DAT_180cfca10;
  FUN_1804e4e90(&DAT_1809f3770);
  puVar19 = (undefined4 *)FUN_1802903e0(local_78,param_4);
  iVar14 = DAT_180cfc9e8;
  uVar1 = puVar19[1];
  uVar2 = *puVar19;
  uVar6 = *(undefined8 *)(puVar19 + 4);
  uVar7 = *(undefined8 *)(puVar19 + 6);
  uVar3 = puVar19[2];
  uVar4 = puVar19[3];
  iVar15 = FUN_1804e4d70(&DAT_1809f3770);
  if (iVar15 != 0) goto LAB_180291c76;
  if (DAT_1809f37bc == 0x7fffffff) goto LAB_180291c61;
  DAT_180cfca18 = 1;
  DAT_180cfc9f0 = uVar2;
  DAT_180cfc9f4 = uVar1;
  DAT_180cfc9f8 = uVar3;
  DAT_180cfc9fc = uVar4;
  _DAT_180cfca00 = uVar6;
  uRam0000000180cfca08 = uVar7;
  UVar20 = GetTickCount64();
  DAT_180ccfedc = 0;
  DAT_180cfca10 = UVar20 + 5000;
  FUN_1804e4e90(&DAT_1809f3770);
  FUN_1802912b0(param_1,param_2,param_3,uVar21);
  iVar15 = DAT_180cfc9e8;
  iVar16 = FUN_1804e4d70(&DAT_1809f3770);
  if (iVar16 != 0) goto LAB_180291c76;
  if (DAT_1809f37bc == 0x7fffffff) goto LAB_180291c61;
  DAT_180cfca10 = local_80;
  DAT_180ccfedc = uVar8;
  DAT_180cfc9f0 = uVar17;
  DAT_180cfc9f4 = uVar5;
  DAT_180cfc9f8 = uVar9;
  DAT_180cfc9fc = uVar10;
  _DAT_180cfca00 = uVar11;
  uRam0000000180cfca08 = uVar12;
  DAT_180cfca18 = uVar13;
  FUN_1804e4e90(&DAT_1809f3770);
  if ((param_1 == 0) || (DAT_180961e88 == 0)) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = FUN_180011200(param_1 + (ulonglong)DAT_180961e88);
  }
  uVar5 = *(undefined4 *)(param_4 + 8);
  if ((DAT_180cfe650 == 0) || (param_1 == 0)) {
LAB_180291bbc:
    if (param_3 == '\0') {
      lVar18 = 0;
    }
    else {
      lVar18 = FUN_180290e90(param_2);
    }
  }
  else {
    iVar16 = FUN_180011200(param_1 + (ulonglong)DAT_180cfe650);
    if (iVar16 == -1) goto LAB_180291bbc;
    FUN_1803a0940(&local_80,iVar16);
    lVar18 = local_80;
    if (local_80 == 0) goto LAB_180291bbc;
  }
  FUN_18028fbf0("colors | weapon %p | hud %p | kit %d | armed %08X %08X %08X %08X | injected %u | pending %d"
                ,param_1,lVar18,uVar5,uVar2,uVar1,uVar3,uVar4,iVar15 - iVar14,uVar17);
LAB_180291c10:
  FUN_180290b00(DAT_180961ea0,(ulonglong)DAT_180cfe5d0 + param_1);
  return;
}



/* ===== 180291c90 FUN_180291c90 ===== */

void FUN_180291c90(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  longlong lVar3;
  int iVar4;
  undefined4 local_res18 [4];
  
  lVar3 = (ulonglong)DAT_180cfe5d0 + param_1;
  uVar1 = DAT_180cfe654;
  if (((DAT_180cfe654 != 0) || ((DAT_180cfe63c != 0 && (uVar1 = DAT_180cfe63c + 8, uVar1 != 0)))) &&
     (lVar3 != 0)) {
    local_res18[0] = 0;
    FUN_180013280((ulonglong)uVar1 + lVar3,local_res18);
  }
  local_res18[0] = param_3;
  FUN_180013280((ulonglong)DAT_180cfe5dc + lVar3,&DAT_18065025c);
  FUN_180013280((ulonglong)DAT_180cfe5e0 + lVar3,&DAT_180650298);
  FUN_180013280((ulonglong)DAT_180cfe5e4 + lVar3,local_res18);
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
  FUN_1800233d0((ulonglong)DAT_180cfe5e8 + lVar3,local_res18);
  FUN_180291740(param_1,param_2);
  FUN_180290c60(lVar3,param_2 + 0x1c);
  FUN_1802913d0(lVar3,param_2);
  FUN_18021b510(lVar3,param_2 + 0x188);
  if (*(char *)(param_2 + 0x14) == '\0') {
    FUN_180290ae0(lVar3,0x50);
    FUN_180290ae0(lVar3,0x51);
  }
  else {
    iVar4 = *(int *)(param_2 + 0x18);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    FUN_180290960(lVar3,"kill eater",iVar4);
    FUN_180290960(lVar3,"kill eater score type",0);
  }
  puVar2 = &DAT_180650258;
  if (*(char *)(param_2 + 0x14) != '\0') {
    puVar2 = &DAT_180650270;
  }
  FUN_180013280((ulonglong)DAT_180cfe5ec + lVar3,puVar2);
  FUN_1802916b0(param_1,lVar3,DAT_180cfe5b0,*(char *)(param_2 + 0x1c) != '\0',DAT_180961ea8);
  FUN_1802916b0(param_1,lVar3,DAT_180cfe5c8,*(undefined1 *)(param_2 + 0x14),DAT_180961eb0);
  FUN_1802910c0(param_1);
  return;
}



/* ===== 180291e40 FUN_180291e40 ===== */

undefined8
FUN_180291e40(char *param_1,longlong param_2,undefined8 param_3,char param_4,longlong param_5,
             undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ULONGLONG UVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  char cVar15;
  bool bVar16;
  int local_res8;
  undefined4 uStackX_c;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar17;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar18;
  longlong local_68;
  undefined4 local_5e;
  undefined2 local_5a;
  undefined2 local_3a;
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  if ((*param_1 == '\0') && (param_1[1] == '\0')) {
    return 0;
  }
  UVar6 = GetTickCount64();
  if (UVar6 < *(ulonglong *)(param_1 + 8)) {
    return 0;
  }
  uVar5 = 0xffffffff;
  if ((param_2 == 0) || (DAT_180961e84 == 0)) {
    local_res8 = -1;
    if (param_2 != 0) goto LAB_180291ebd;
LAB_180291ed5:
    iVar1 = -1;
    iVar3 = local_res8;
  }
  else {
    local_res8 = FUN_180011200(param_2 + (ulonglong)DAT_180961e84);
LAB_180291ebd:
    iVar3 = local_res8;
    if (DAT_180961e88 == 0) goto LAB_180291ed5;
    iVar1 = FUN_180011200(param_2 + (ulonglong)DAT_180961e88);
  }
  if (param_1[1] != '\0') {
    if ((iVar3 < 0) || (iVar1 < 0)) {
      param_1[1] = '\0';
      return 0;
    }
    if (0 < iVar1) {
      UVar7 = *(ULONGLONG *)(param_1 + 0x10);
      if (*(ULONGLONG *)(param_1 + 0x10) == 0) {
        *(ULONGLONG *)(param_1 + 0x10) = UVar6;
        UVar7 = UVar6;
      }
      if (UVar6 - UVar7 < 12000) {
        return 0;
      }
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[1] = '\0';
      FUN_18028fbf0("%s %08X | kit %d | job still running after %llu ms, rebuilding",param_6,param_7
                    ,*(undefined4 *)(param_5 + 8),12000);
      *param_1 = '\x01';
      param_1[0x24] = '\x01';
      return 0;
    }
    param_1[1] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    if (*(int *)(param_5 + 8) != 0) {
      if (iVar3 < 1) {
        FUN_18028fbf0("%s %08X | kit %d | the game did not start a composite, retrying",param_6,
                      param_7,*(int *)(param_5 + 8));
        *param_1 = '\x01';
        *(ULONGLONG *)(param_1 + 8) = UVar6 + 0xfa;
        return 0;
      }
      uVar2 = FUN_18028fb00();
      if ((*(uint *)(param_1 + 0x18) < uVar2) && (*(int *)(param_1 + 0x20) < 3)) {
        iVar3 = *(int *)(param_1 + 0x20) + 1;
        FUN_18028fbf0("%s %08X | kit %d | the game fell back to missing_paintkit, retry %d",param_6,
                      param_7,*(undefined4 *)(param_5 + 8),CONCAT44(uVar17,iVar3));
        *(undefined4 *)(param_1 + 2) = local_5e;
        *(undefined2 *)(param_1 + 6) = local_5a;
        *(undefined2 *)(param_1 + 0x26) = local_3a;
        *(ULONGLONG *)(param_1 + 8) = UVar6 + 600;
        param_1[0] = '\x01';
        param_1[1] = '\0';
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
        param_1[0x24] = '\0';
        param_1[0x25] = '\0';
        *(int *)(param_1 + 0x20) = iVar3;
        if (DAT_180cfca60 == DAT_180cfe674) {
          return 0;
        }
        DAT_180cfe674 = DAT_180cfca60;
        FUN_180298530();
        return 0;
      }
    }
    FUN_18028fbf0("%s %08X | kit %d | painted | counts %d %d",param_6,param_7,
                  *(undefined4 *)(param_5 + 8),CONCAT44(uVar17,iVar3),CONCAT44(uVar18,iVar1));
    if (param_4 == '\0') {
      return 0;
    }
    if (*(int *)(param_5 + 8) == 0) {
      return 0;
    }
    lVar8 = FUN_180280d30();
    if (((DAT_180cfe650 != 0) && (param_2 != 0)) &&
       (iVar3 = FUN_180011200(param_2 + (ulonglong)DAT_180cfe650), iVar3 != -1)) {
      FUN_1803a0940(&local_res8,iVar3);
      lVar9 = CONCAT44(uStackX_c,local_res8);
      if (lVar9 != 0) goto LAB_1802920e6;
    }
    lVar9 = FUN_180290e90(param_3);
LAB_1802920e6:
    if ((lVar8 == 0) || (*(char *)(lVar8 + 0x50) == '\0')) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    if (lVar9 == 0) {
      FUN_180290b50(0,uVar13);
      pcVar11 = "not found";
    }
    else {
      uVar10 = FUN_18000f3a0((ulonglong)DAT_180cfe610 + lVar9);
      FUN_180290b50(uVar10,uVar13);
      if ((lVar8 == 0) || (*(char *)(lVar8 + 0x50) == '\0')) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      lVar8 = FUN_18000f3a0((ulonglong)DAT_180cfe610 + lVar9);
      if (((lVar8 == 0) || (DAT_180cfe648 == 0)) || (DAT_180cfe64c == 0)) {
        bVar16 = true;
      }
      else {
        uVar2 = FUN_18000f3a0((ulonglong)DAT_180cfe648 + lVar8 + (ulonglong)DAT_180cfe64c);
        if (bVar16) {
          bVar16 = (uVar2 & 3) == 2;
        }
        else {
          bVar16 = (uVar2 & 3) == 1;
        }
      }
      pcVar11 = "out of sync";
      if (bVar16) {
        pcVar11 = "in sync";
      }
    }
    FUN_18028fbf0("%s %08X | kit %d | hand model mesh %s",param_6,param_7,
                  *(undefined4 *)(param_5 + 8),pcVar11);
    return 0;
  }
  if ((0 < iVar1) && (param_1[0x24] == '\0')) {
    UVar7 = *(ULONGLONG *)(param_1 + 0x10);
    if (*(ULONGLONG *)(param_1 + 0x10) == 0) {
      *(ULONGLONG *)(param_1 + 0x10) = UVar6;
      UVar7 = UVar6;
    }
    if (UVar6 - UVar7 < 12000) {
      return 0;
    }
  }
  lVar8 = 0;
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x24] = '\0';
  if (7 < *(int *)(param_1 + 0x1c)) {
    FUN_18028fbf0("%s %08X | kit %d | gave up after %d builds",param_6,param_7,
                  *(undefined4 *)(param_5 + 8),CONCAT44(uVar17,*(int *)(param_1 + 0x1c)));
    *param_1 = '\0';
    return 0;
  }
  if (0 < iVar1) {
    FUN_180290b80(param_2);
  }
  if ((*(int *)(param_5 + 8) != 0) && (param_1[0x25] == '\0')) {
    lVar9 = FUN_180280d30();
    if ((lVar9 == 0) || (*(char *)(lVar9 + 0x50) == '\0')) {
      cVar15 = '\0';
    }
    else {
      cVar15 = '\x01';
    }
    if (param_2 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = FUN_18000f3a0((ulonglong)DAT_180cfe610 + param_2);
    }
    if (((((DAT_180cfe650 != 0) && (param_2 != 0)) &&
         (iVar3 = FUN_180011200(param_2 + (ulonglong)DAT_180cfe650), iVar3 != -1)) &&
        (FUN_1803a0940(&local_68,iVar3), local_68 != 0)) ||
       ((param_4 != '\0' && (local_68 = FUN_180290e90(param_3), local_68 != 0)))) {
      lVar8 = FUN_18000f3a0((ulonglong)DAT_180cfe610 + local_68);
    }
    uVar12 = (ulonglong)DAT_180cfe648;
    if (((lVar9 != 0) && (DAT_180cfe648 != 0)) && (DAT_180cfe64c != 0)) {
      uVar2 = FUN_18000f3a0(uVar12 + (ulonglong)DAT_180cfe64c + lVar9);
      if (cVar15 == '\0') {
        bVar16 = (uVar2 & 3) == 1;
      }
      else {
        bVar16 = (uVar2 & 3) == 2;
      }
      if (!bVar16) goto LAB_1802923e9;
      uVar12 = (ulonglong)DAT_180cfe648;
    }
    if (((lVar8 != 0) && ((int)uVar12 != 0)) && (DAT_180cfe64c != 0)) {
      uVar2 = FUN_18000f3a0(uVar12 + (ulonglong)DAT_180cfe64c + lVar8);
      if (cVar15 == '\0') {
        if ((uVar2 & 3) != 1) goto LAB_1802923e9;
      }
      else if ((uVar2 & 3) != 2) {
LAB_1802923e9:
        FUN_180290b50(lVar8,cVar15);
        FUN_180290b50(lVar9,cVar15);
        FUN_180290be0(param_2);
        *(ULONGLONG *)(param_1 + 8) = UVar6 + 100;
        param_1[0x25] = '\x01';
        pcVar11 = "default";
        if (cVar15 != '\0') {
          pcVar11 = "legacy";
        }
        FUN_18028fbf0("%s %08X | kit %d | mesh switched to %s first, painting in %llu ms",param_6,
                      param_7,*(undefined4 *)(param_5 + 8),pcVar11,100);
        return 0;
      }
    }
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  uVar4 = FUN_18028fb00(*(undefined4 *)(param_5 + 8));
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  FUN_180291900(param_2,param_3,param_4,param_5);
  param_1[0] = '\0';
  param_1[1] = '\x01';
  *(ULONGLONG *)(param_1 + 8) = UVar6 + 0xfa;
  if ((param_2 == 0) || (DAT_180961e88 == 0)) {
    uVar14 = 0xffffffff;
    uVar4 = 0xffffffff;
    if (param_2 == 0) goto LAB_180292482;
  }
  else {
    uVar4 = FUN_180011200(param_2 + (ulonglong)DAT_180961e88);
  }
  uVar14 = uVar4;
  if (DAT_180961e84 != 0) {
    uVar5 = FUN_180011200(param_2 + (ulonglong)DAT_180961e84);
  }
LAB_180292482:
  FUN_18028fbf0("%s %08X | kit %d | build %d | counts %d %d -> %d %d",param_6,param_7,
                *(undefined4 *)(param_5 + 8),CONCAT44(uVar17,*(undefined4 *)(param_1 + 0x1c)),
                CONCAT44(uVar18,local_res8),iVar1,uVar5,uVar14);
  return 1;
}



/* ===== 1802924f0 FUN_1802924f0 ===== */

void FUN_1802924f0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ULONGLONG UVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong local_res20;
  
  if (param_3 == 0) {
    return;
  }
  UVar2 = GetTickCount64();
  if (UVar2 < DAT_180cfe6e0) {
    return;
  }
  UVar2 = GetTickCount64();
  DAT_180cfe6e0 = UVar2 + 100;
  lVar3 = FUN_180280d30(param_3);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x50) == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  if ((((DAT_180cfe650 == 0) || (param_1 == 0)) ||
      (iVar1 = FUN_180011200(param_1 + (ulonglong)DAT_180cfe650), iVar1 == -1)) ||
     (FUN_1803a0940(&local_res20,iVar1), local_res20 == 0)) {
    local_res20 = FUN_180290e90(param_2);
    uVar4 = 0;
    if (local_res20 == 0) goto LAB_18029259b;
  }
  uVar4 = FUN_18000f3a0((ulonglong)DAT_180cfe610 + local_res20);
LAB_18029259b:
  FUN_180290b50(uVar4,uVar5);
  return;
}



/* ===== 1802925c0 FUN_1802925c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802925c0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  longlong lVar23;
  undefined8 *puVar24;
  char *pcVar25;
  char cVar26;
  ushort uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong *plVar34;
  undefined8 uVar35;
  longlong *plVar36;
  ULONGLONG UVar37;
  float *pfVar38;
  float *pfVar39;
  undefined8 *puVar40;
  longlong lVar41;
  float *pfVar42;
  int *piVar43;
  float *pfVar44;
  char *pcVar45;
  ulonglong uVar46;
  undefined4 uVar47;
  float fVar48;
  longlong *plVar49;
  char *pcVar50;
  char *pcVar51;
  float fVar52;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined1 auStack_728 [32];
  char *local_708;
  undefined *local_700;
  uint local_6f8;
  undefined4 local_6f0;
  undefined4 local_6e8;
  char *local_6e0;
  uint local_6d8;
  uint local_6d4;
  float local_6d0;
  uint local_6cc;
  uint local_6c8;
  ulonglong local_6c0;
  longlong local_6b8;
  longlong *local_6b0;
  float local_6a8;
  float local_6a4;
  uint local_6a0;
  longlong local_698;
  longlong local_690;
  longlong local_688;
  char *local_680;
  undefined4 local_676;
  undefined2 local_672;
  undefined2 local_652;
  undefined1 local_650 [16];
  undefined1 local_640 [16];
  undefined1 local_630 [16];
  undefined1 local_620 [16];
  undefined1 local_610 [16];
  undefined1 local_600 [16];
  undefined1 local_5f0 [16];
  undefined1 local_5e0 [16];
  undefined1 local_5d0 [16];
  undefined1 local_5c0 [16];
  undefined1 local_5b0 [16];
  undefined1 local_5a0 [16];
  undefined1 local_590 [16];
  float local_580 [106];
  float local_3d8 [2];
  int iStack_3d0;
  char cStack_3c4;
  char cStack_3bc;
  int local_2f8 [42];
  int local_250 [6];
  char local_238 [8];
  int iStack_230;
  char cStack_1dc;
  ulonglong local_98;
  
  local_98 = DAT_180919500 ^ (ulonglong)auStack_728;
  local_6b0 = param_1;
  lVar31 = FUN_18000f3a0((ulonglong)DAT_180cfe620 + *param_1);
  if (lVar31 == 0) {
    lVar33 = 0;
    local_6d8 = 0;
    local_698 = 0;
  }
  else {
    uVar32 = (ulonglong)DAT_180cfe624;
    uVar28 = FUN_180011200(uVar32 + lVar31);
    local_6cc = uVar28;
    lVar33 = FUN_18000f3a0(uVar32 + lVar31 + 8);
    local_698 = lVar33;
    local_6d8 = FUN_180011200((ulonglong)DAT_180cfe628 + lVar31);
    if ((uVar28 < 0x41) && (lVar33 != 0)) goto LAB_18029266e;
  }
  local_6cc = 0;
  uVar28 = 0;
LAB_18029266e:
  local_6c0 = FUN_18000f3a0((ulonglong)DAT_180cfe638 + *param_2);
  if ((*param_1 == 0) || (DAT_180ca09f4 == 0)) {
    cVar26 = '\0';
  }
  else {
    cVar26 = FUN_180011220((ulonglong)DAT_180ca09f4 + *param_1);
  }
  uVar22 = _DAT_1808ade90;
  fVar21 = DAT_1808ac34c;
  fVar20 = DAT_1808abfa0;
  fVar48 = (float)(uint)(cVar26 == '\x02');
  local_6d0 = (float)(uint)(cVar26 == '\x02');
  if ((int)uVar28 < 1) {
    return;
  }
  local_680 = "no skin for this weapon on CT";
  local_6d4 = uVar28 & 0xffffff00;
  if (cVar26 == '\x02') {
    local_680 = "no skin for this weapon on T";
  }
  uVar32 = 0;
  local_6c8 = 0;
  uVar28 = local_6d4;
LAB_180292734:
  plVar34 = (longlong *)0x0;
  uVar32 = FUN_180011200(lVar33 + uVar32 * 4);
  uVar29 = (uint)uVar32;
  local_6e8 = uVar29;
  if (uVar29 - 1 < 0xfffffffe) {
    lVar31 = FUN_18000f3a0(DAT_1809619d0);
    if (lVar31 != 0) {
      lVar31 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                             lVar31 + (ulonglong)(((uint)(uVar32 >> 9) & 0x3f) * DAT_180961944));
      if (lVar31 - 0x10000U < 0xfffffffffffeffff) {
        lVar31 = FUN_18000f3a0((ulonglong)((uVar29 & 0x1ff) * DAT_180961948) + lVar31);
        local_6b8 = lVar31;
        if (lVar31 - 0x10000U < 0xfffffffffffeffff) {
          lVar33 = FUN_18000f3a0((ulonglong)DAT_180cfe60c + (ulonglong)DAT_1809619c0 + lVar31);
          uVar29 = local_6e8;
          if (lVar33 == 0) {
            local_6e0 = (char *)((ulonglong)local_6e8 << 8 | 1);
            plVar34 = (longlong *)FUN_1801d4cb0(&DAT_180ca1600,local_590,&local_6e0);
            if (*(char *)(*plVar34 + 0x18) == '\0') {
              plVar34 = (longlong *)FUN_1801d4cb0(&DAT_180ca1600,local_640,&local_6e0);
              *(undefined1 *)(*plVar34 + 0x18) = 1;
              FUN_18028fbf0("gun %08X | def %d | skipped: %s",uVar29,0,"weapon data not ready");
            }
          }
          else {
            uVar27 = FUN_180011440((ulonglong)DAT_180cfe5d4 + (ulonglong)DAT_180cfe5d0 + lVar31);
            local_6a0 = (uint)uVar27;
            lVar33 = FUN_180280c60(uVar27);
            if (lVar33 == 0) {
              uVar32 = (ulonglong)local_6e8;
              local_6e0 = (char *)(uVar32 << 8 | 2);
              plVar34 = (longlong *)FUN_1801d4cb0(&DAT_180ca1600,local_5b0,&local_6e0);
              if (*(char *)(*plVar34 + 0x18) == '\0') {
                plVar34 = (longlong *)FUN_1801d4cb0(&DAT_180ca1600,local_5a0,&local_6e0);
                pcVar50 = "not in the item list";
LAB_180292acf:
                *(undefined1 *)(*plVar34 + 0x18) = 1;
                FUN_18028fbf0("gun %08X | def %d | skipped: %s",uVar32,uVar27,pcVar50);
              }
            }
            else if (*(int *)(lVar33 + 0x48) == 1) {
              if (DAT_180921499 != '\0') goto LAB_180292982;
              uVar32 = (ulonglong)local_6e8;
              uVar46 = DAT_180cfe6d0 &
                       ((((uVar32 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)local_6e8._1_1_) * 0x100000001b3 ^ (ulonglong)local_6e8._2_1_) *
                        0x100000001b3 ^ (ulonglong)local_6e8._3_1_) * 0x100000001b3;
              plVar36 = *(longlong **)(DAT_180cfe6b8 + 8 + uVar46 * 0x10);
              if (plVar36 == DAT_180cfe6a8) {
LAB_180292926:
                plVar36 = plVar34;
              }
              else {
                uVar29 = *(uint *)(plVar36 + 2);
                while (local_6e8 != uVar29) {
                  if (plVar36 == *(longlong **)(DAT_180cfe6b8 + uVar46 * 0x10)) goto LAB_180292926;
                  plVar36 = (longlong *)plVar36[1];
                  uVar29 = *(uint *)(plVar36 + 2);
                }
              }
              if (((plVar36 == (longlong *)0x0) || (plVar36 == DAT_180cfe6a8)) &&
                 ((int)local_6c0 != 0)) {
                lVar33 = *param_1;
                if ((DAT_180cfe640 == 0) ||
                   (iVar30 = FUN_180011200(lVar31 + (ulonglong)DAT_180cfe640), iVar30 == 0)) {
                  if (DAT_180cfe644 != 0) {
                    uVar47 = FUN_180011200(lVar31 + (ulonglong)DAT_180cfe644);
                    FUN_1803a0940(&local_690,uVar47);
                    if ((local_690 != 0) && (local_690 != lVar33)) goto LAB_180292a7e;
                  }
                  iVar30 = FUN_180011200((ulonglong)DAT_180cfe5d0 +
                                         (ulonglong)DAT_180cfe5e4 + lVar31);
                  if ((iVar30 != 0) && (iVar30 != (int)local_6c0)) goto LAB_180292a7e;
                }
                else if (iVar30 != (int)local_6c0) {
LAB_180292a7e:
                  uVar32 = (ulonglong)local_6e8;
                  local_6e0 = (char *)(uVar32 << 8 | 3);
                  plVar34 = (longlong *)FUN_1801d4cb0(&DAT_180ca1600,local_630,&local_6e0);
                  if (*(char *)(*plVar34 + 0x18) == '\0') {
                    plVar34 = (longlong *)FUN_1801d4cb0(&DAT_180ca1600,local_620,&local_6e0);
                    pcVar50 = "bought by another player";
                    goto LAB_180292acf;
                  }
                  goto LAB_18029357d;
                }
LAB_180292982:
                uVar32 = (ulonglong)local_6e8;
              }
              if (uVar27 != 0) {
                pfVar42 = (float *)&DAT_18092174c;
                do {
                  if ((*pfVar42 == (float)(uint)uVar27) && (pfVar42[1] == fVar48))
                  goto LAB_180292aec;
                  pfVar42 = pfVar42 + 0x68;
                } while (pfVar42 != (float *)&DAT_180931b4c);
                pfVar42 = (float *)&DAT_18092174c;
                do {
                  if ((*pfVar42 == (float)(uint)uVar27) && ((int)pfVar42[1] < 0))
                  goto LAB_180292aec;
                  pfVar42 = pfVar42 + 0x68;
                } while (pfVar42 != (float *)&DAT_180931b4c);
              }
              local_6e0 = (char *)(uVar32 << 8 | 4);
              plVar34 = (longlong *)FUN_1801d4cb0(&DAT_180ca1600,local_5d0,&local_6e0);
              if (*(char *)(*plVar34 + 0x18) == '\0') {
                plVar34 = (longlong *)FUN_1801d4cb0(&DAT_180ca1600,local_5c0,&local_6e0);
                pcVar50 = local_680;
                goto LAB_180292acf;
              }
            }
          }
        }
      }
    }
  }
  goto LAB_18029357d;
LAB_180292aec:
  lVar33 = 3;
  pfVar38 = local_3d8;
  do {
    pfVar44 = pfVar38;
    pfVar39 = pfVar42;
    uVar35 = *(undefined8 *)(pfVar39 + 2);
    uVar15 = *(undefined8 *)(pfVar39 + 4);
    uVar16 = *(undefined8 *)(pfVar39 + 6);
    *(undefined8 *)pfVar44 = *(undefined8 *)pfVar39;
    *(undefined8 *)(pfVar44 + 2) = uVar35;
    uVar35 = *(undefined8 *)(pfVar39 + 8);
    uVar17 = *(undefined8 *)(pfVar39 + 10);
    *(undefined8 *)(pfVar44 + 4) = uVar15;
    *(undefined8 *)(pfVar44 + 6) = uVar16;
    uVar15 = *(undefined8 *)(pfVar39 + 0xc);
    uVar16 = *(undefined8 *)(pfVar39 + 0xe);
    *(undefined8 *)(pfVar44 + 8) = uVar35;
    *(undefined8 *)(pfVar44 + 10) = uVar17;
    uVar35 = *(undefined8 *)(pfVar39 + 0x10);
    uVar17 = *(undefined8 *)(pfVar39 + 0x12);
    *(undefined8 *)(pfVar44 + 0xc) = uVar15;
    *(undefined8 *)(pfVar44 + 0xe) = uVar16;
    uVar15 = *(undefined8 *)(pfVar39 + 0x14);
    uVar16 = *(undefined8 *)(pfVar39 + 0x16);
    *(undefined8 *)(pfVar44 + 0x10) = uVar35;
    *(undefined8 *)(pfVar44 + 0x12) = uVar17;
    uVar35 = *(undefined8 *)(pfVar39 + 0x18);
    uVar17 = *(undefined8 *)(pfVar39 + 0x1a);
    *(undefined8 *)(pfVar44 + 0x14) = uVar15;
    *(undefined8 *)(pfVar44 + 0x16) = uVar16;
    uVar15 = *(undefined8 *)(pfVar39 + 0x1c);
    uVar16 = *(undefined8 *)(pfVar39 + 0x1e);
    *(undefined8 *)(pfVar44 + 0x18) = uVar35;
    *(undefined8 *)(pfVar44 + 0x1a) = uVar17;
    *(undefined8 *)(pfVar44 + 0x1c) = uVar15;
    *(undefined8 *)(pfVar44 + 0x1e) = uVar16;
    lVar33 = lVar33 + -1;
    pfVar42 = pfVar39 + 0x20;
    pfVar38 = pfVar44 + 0x20;
  } while (lVar33 != 0);
  fVar52 = pfVar39[0x20];
  fVar2 = pfVar39[0x21];
  fVar3 = pfVar39[0x22];
  fVar4 = pfVar39[0x23];
  fVar5 = pfVar39[0x24];
  fVar6 = pfVar39[0x25];
  fVar7 = pfVar39[0x26];
  fVar8 = pfVar39[0x27];
  pfVar44[0x20] = fVar52;
  pfVar44[0x21] = fVar2;
  pfVar44[0x22] = fVar3;
  pfVar44[0x23] = fVar4;
  pfVar44[0x24] = fVar5;
  pfVar44[0x25] = fVar6;
  pfVar44[0x26] = fVar7;
  pfVar44[0x27] = fVar8;
  uVar46 = DAT_180cfe6d0 &
           ((((uVar32 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)local_6e8._1_1_) *
             0x100000001b3 ^ (ulonglong)local_6e8._2_1_) * 0x100000001b3 ^
           (ulonglong)local_6e8._3_1_) * 0x100000001b3;
  plVar36 = *(longlong **)(DAT_180cfe6b8 + 8 + uVar46 * 0x10);
  if (plVar36 == DAT_180cfe6a8) {
LAB_180292bc5:
    plVar36 = plVar34;
  }
  else {
    iVar30 = (int)plVar36[2];
    while ((int)uVar32 != iVar30) {
      if (plVar36 == *(longlong **)(DAT_180cfe6b8 + uVar46 * 0x10)) goto LAB_180292bc5;
      plVar36 = (longlong *)plVar36[1];
      iVar30 = (int)plVar36[2];
    }
  }
  plVar49 = DAT_180cfe6a8;
  if (plVar36 != (longlong *)0x0) {
    plVar49 = plVar36;
  }
  if ((((iStack_3d0 == 0) && (cStack_3c4 == '\0')) && (cStack_3bc == '\0')) && (local_250[0] == 0))
  {
    piVar43 = local_2f8;
    do {
      if (*piVar43 != 0) goto LAB_180292c1b;
      piVar43 = piVar43 + 7;
    } while (piVar43 != local_250);
    if (plVar49 == DAT_180cfe6a8) goto LAB_18029357d;
  }
LAB_180292c1b:
  if (plVar49 == DAT_180cfe6a8) {
LAB_180292d57:
    bVar18 = false;
  }
  else {
    fVar52 = (float)FUN_18021b5e0(uVar32,lVar31,(ulonglong)DAT_180cfe5d0 + lVar31,local_250);
    if (local_6e8 == local_6d8) {
      uVar32 = (((((ulonglong)(byte)local_6e8 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)(local_6e8 >> 8 & 0xff)) * 0x100000001b3 ^
                (ulonglong)(local_6e8 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)(local_6e8 >> 0x18)) * 0x100000001b3 & DAT_180cec9c0;
      plVar36 = *(longlong **)(DAT_180cec9a8 + 8 + uVar32 * 0x10);
      if (plVar36 == DAT_180cec998) {
LAB_180292cd7:
        plVar36 = plVar34;
      }
      else {
        uVar29 = *(uint *)(plVar36 + 2);
        while (local_6e8 != uVar29) {
          if (plVar36 == *(longlong **)(DAT_180cec9a8 + uVar32 * 0x10)) goto LAB_180292cd7;
          plVar36 = (longlong *)plVar36[1];
          uVar29 = *(uint *)(plVar36 + 2);
        }
      }
      if (((plVar36 != (longlong *)0x0) && (plVar36 != DAT_180cec998)) &&
         ((char)plVar36[0xb] != '\0')) {
        uVar35 = FUN_180290e90(*param_1);
        fVar52 = (float)FUN_18021b9f0(local_6e8,uVar35);
      }
    }
    if (plVar49 == DAT_180cfe6a8) goto LAB_180292d57;
    if (((*(int *)((longlong)plVar49 + 0x1c) == 0) && ((char)plVar49[5] == '\0')) &&
       (((char)plVar49[6] == '\0' && (*(int *)((longlong)plVar49 + 0x19c) == 0)))) {
      for (piVar43 = (int *)((longlong)plVar49 + 0xf4);
          piVar43 != (int *)((longlong)plVar49 + 0x19c); piVar43 = piVar43 + 7) {
        if (*piVar43 != 0) goto LAB_180292e68;
      }
      goto LAB_180292d57;
    }
LAB_180292e68:
    uVar32 = (ulonglong)DAT_180cfe5d0;
    iVar30 = FUN_180011200((ulonglong)DAT_180cfe5dc + uVar32 + lVar31);
    fVar52 = extraout_XMM0_Da_00;
    if (iVar30 == -0x10000000) {
      iVar30 = FUN_180011200((ulonglong)DAT_180cfe5e0 + uVar32 + lVar31);
      fVar52 = extraout_XMM0_Da_01;
      if (iVar30 == 0x10) {
        iVar30 = FUN_180011200((ulonglong)DAT_180cfe5fc + lVar31);
        fVar52 = extraout_XMM0_Da_02;
        if (iVar30 == *(int *)((longlong)plVar49 + 0x1c)) {
          if (*(int *)((longlong)plVar49 + 0x1c) == 0) goto LAB_180292d57;
          iVar30 = FUN_180011200((ulonglong)DAT_180cfe600 + lVar31);
          fVar52 = extraout_XMM0_Da_03;
          if (iVar30 == *(int *)((longlong)plVar49 + 0x24)) {
            fVar48 = *(float *)(plVar49 + 4);
            local_6a4 = 1.0;
            local_6a8 = 0.0;
            fVar52 = (float)FUN_18000f3d0((ulonglong)DAT_180cfe604 + lVar31);
            pfVar42 = &local_6a8;
            if (0.0 <= fVar48) {
              pfVar42 = (float *)(plVar49 + 4);
            }
            pfVar38 = &local_6a4;
            if (fVar48 <= fVar21) {
              pfVar38 = pfVar42;
            }
            fVar52 = (float)((uint)(fVar52 - *pfVar38) & uVar22);
            if (fVar52 <= fVar20) goto LAB_180292d57;
          }
        }
      }
    }
    bVar18 = true;
  }
  if (plVar49 == DAT_180cfe6a8) {
LAB_180293071:
    bVar19 = true;
    plVar34 = (longlong *)FUN_1802990d0(fVar52,local_650,&local_6e8);
    lVar33 = *plVar34;
    local_6e0 = (char *)(lVar33 + 0x18);
LAB_18029308e:
    pcVar51 = local_6e0;
    plVar34 = (longlong *)FUN_1801d4a30(&DAT_180ca1640,local_600,&local_6e8);
    lVar31 = *plVar34;
    plVar34 = (longlong *)FUN_1802993a0(extraout_XMM0_Da_04,local_5f0,&local_6e8);
    lVar41 = *plVar34;
    if (((bVar18) && (*(int *)(lVar41 + 0x14) < 3)) ||
       (UVar37 = GetTickCount64(), 0xf9 < UVar37 - *(longlong *)(lVar31 + 0x18))) {
      UVar37 = GetTickCount64();
      lVar23 = local_6b8;
      *(ULONGLONG *)(lVar31 + 0x18) = UVar37;
      if (bVar18) {
        *(int *)(lVar41 + 0x14) = *(int *)(lVar41 + 0x14) + 1;
      }
      if (DAT_180961e88 == 0) {
        uVar47 = 0xffffffff;
      }
      else {
        uVar47 = FUN_180011200(local_6b8 + (ulonglong)DAT_180961e88);
      }
      if (DAT_180961e84 == 0) {
        local_6f8 = 0xffffffff;
      }
      else {
        local_6f8 = FUN_180011200(lVar23 + (ulonglong)DAT_180961e84);
      }
      local_708 = "lost, rewritten";
      local_700 = (undefined *)CONCAT44(local_700._4_4_,(uint)(local_6e8 == local_6d8));
      if (bVar19) {
        local_708 = "changed";
      }
      local_6f0 = uVar47;
      FUN_18028fbf0("gun %08X | def %d | kit %d | %s | active %d | counts %d %d",local_6e8,local_6a0
                    ,iStack_3d0);
      FUN_180291c90(lVar23,local_3d8,local_6c0 & 0xffffffff);
      lVar31 = 3;
      pfVar38 = local_580;
      pfVar42 = local_3d8;
      do {
        pfVar44 = pfVar42;
        pfVar39 = pfVar38;
        uVar35 = *(undefined8 *)(pfVar44 + 2);
        uVar15 = *(undefined8 *)(pfVar44 + 4);
        uVar16 = *(undefined8 *)(pfVar44 + 6);
        pfVar42 = pfVar44 + 0x20;
        *(undefined8 *)pfVar39 = *(undefined8 *)pfVar44;
        *(undefined8 *)(pfVar39 + 2) = uVar35;
        uVar35 = *(undefined8 *)(pfVar44 + 8);
        uVar17 = *(undefined8 *)(pfVar44 + 10);
        *(undefined8 *)(pfVar39 + 4) = uVar15;
        *(undefined8 *)(pfVar39 + 6) = uVar16;
        uVar15 = *(undefined8 *)(pfVar44 + 0xc);
        uVar16 = *(undefined8 *)(pfVar44 + 0xe);
        *(undefined8 *)(pfVar39 + 8) = uVar35;
        *(undefined8 *)(pfVar39 + 10) = uVar17;
        uVar35 = *(undefined8 *)(pfVar44 + 0x10);
        uVar17 = *(undefined8 *)(pfVar44 + 0x12);
        *(undefined8 *)(pfVar39 + 0xc) = uVar15;
        *(undefined8 *)(pfVar39 + 0xe) = uVar16;
        uVar15 = *(undefined8 *)(pfVar44 + 0x14);
        uVar16 = *(undefined8 *)(pfVar44 + 0x16);
        *(undefined8 *)(pfVar39 + 0x10) = uVar35;
        *(undefined8 *)(pfVar39 + 0x12) = uVar17;
        uVar35 = *(undefined8 *)(pfVar44 + 0x18);
        uVar17 = *(undefined8 *)(pfVar44 + 0x1a);
        *(undefined8 *)(pfVar39 + 0x14) = uVar15;
        *(undefined8 *)(pfVar39 + 0x16) = uVar16;
        uVar15 = *(undefined8 *)(pfVar44 + 0x1c);
        uVar16 = *(undefined8 *)(pfVar44 + 0x1e);
        *(undefined8 *)(pfVar39 + 0x18) = uVar35;
        *(undefined8 *)(pfVar39 + 0x1a) = uVar17;
        *(undefined8 *)(pfVar39 + 0x1c) = uVar15;
        *(undefined8 *)(pfVar39 + 0x1e) = uVar16;
        lVar31 = lVar31 + -1;
        pfVar38 = pfVar39 + 0x20;
      } while (lVar31 != 0);
      fVar48 = pfVar44[0x21];
      fVar52 = pfVar44[0x22];
      fVar2 = pfVar44[0x23];
      fVar3 = pfVar44[0x24];
      fVar4 = pfVar44[0x25];
      fVar5 = pfVar44[0x26];
      fVar6 = pfVar44[0x27];
      pfVar39[0x20] = *pfVar42;
      pfVar39[0x21] = fVar48;
      pfVar39[0x22] = fVar52;
      pfVar39[0x23] = fVar2;
      pfVar39[0x24] = fVar3;
      pfVar39[0x25] = fVar4;
      pfVar39[0x26] = fVar5;
      pfVar39[0x27] = fVar6;
      plVar34 = (longlong *)FUN_180299650(pfVar42,local_5e0,&local_6e8);
      lVar31 = 3;
      pfVar42 = local_580;
      pfVar38 = (float *)(*plVar34 + 0x14);
      do {
        pfVar44 = pfVar38;
        pfVar39 = pfVar42;
        uVar35 = *(undefined8 *)(pfVar39 + 2);
        uVar15 = *(undefined8 *)(pfVar39 + 4);
        uVar16 = *(undefined8 *)(pfVar39 + 6);
        *(undefined8 *)pfVar44 = *(undefined8 *)pfVar39;
        *(undefined8 *)(pfVar44 + 2) = uVar35;
        uVar35 = *(undefined8 *)(pfVar39 + 8);
        uVar17 = *(undefined8 *)(pfVar39 + 10);
        *(undefined8 *)(pfVar44 + 4) = uVar15;
        *(undefined8 *)(pfVar44 + 6) = uVar16;
        uVar15 = *(undefined8 *)(pfVar39 + 0xc);
        uVar16 = *(undefined8 *)(pfVar39 + 0xe);
        *(undefined8 *)(pfVar44 + 8) = uVar35;
        *(undefined8 *)(pfVar44 + 10) = uVar17;
        uVar35 = *(undefined8 *)(pfVar39 + 0x10);
        uVar17 = *(undefined8 *)(pfVar39 + 0x12);
        *(undefined8 *)(pfVar44 + 0xc) = uVar15;
        *(undefined8 *)(pfVar44 + 0xe) = uVar16;
        uVar15 = *(undefined8 *)(pfVar39 + 0x14);
        uVar16 = *(undefined8 *)(pfVar39 + 0x16);
        *(undefined8 *)(pfVar44 + 0x10) = uVar35;
        *(undefined8 *)(pfVar44 + 0x12) = uVar17;
        uVar35 = *(undefined8 *)(pfVar39 + 0x18);
        uVar17 = *(undefined8 *)(pfVar39 + 0x1a);
        *(undefined8 *)(pfVar44 + 0x14) = uVar15;
        *(undefined8 *)(pfVar44 + 0x16) = uVar16;
        uVar15 = *(undefined8 *)(pfVar39 + 0x1c);
        uVar16 = *(undefined8 *)(pfVar39 + 0x1e);
        *(undefined8 *)(pfVar44 + 0x18) = uVar35;
        *(undefined8 *)(pfVar44 + 0x1a) = uVar17;
        *(undefined8 *)(pfVar44 + 0x1c) = uVar15;
        *(undefined8 *)(pfVar44 + 0x1e) = uVar16;
        lVar31 = lVar31 + -1;
        pfVar42 = pfVar39 + 0x20;
        pfVar38 = pfVar44 + 0x20;
      } while (lVar31 != 0);
      fVar48 = pfVar39[0x21];
      fVar52 = pfVar39[0x22];
      fVar2 = pfVar39[0x23];
      uVar35 = *(undefined8 *)(pfVar39 + 0x24);
      uVar15 = *(undefined8 *)(pfVar39 + 0x26);
      pfVar44[0x20] = pfVar39[0x20];
      pfVar44[0x21] = fVar48;
      pfVar44[0x22] = fVar52;
      pfVar44[0x23] = fVar2;
      *(undefined8 *)(pfVar44 + 0x24) = uVar35;
      *(undefined8 *)(pfVar44 + 0x26) = uVar15;
      if ((bVar19) || (*(int *)(lVar41 + 0x14) < 4)) {
        *(undefined4 *)(lVar33 + 0x1a) = local_676;
        *(undefined2 *)(lVar33 + 0x1e) = local_672;
        *(undefined2 *)(lVar33 + 0x3e) = local_652;
        *(undefined1 *)(lVar33 + 0x19) = 0;
        *(undefined8 *)(lVar33 + 0x20) = 0;
        *(undefined8 *)(lVar33 + 0x28) = 0;
        *(undefined8 *)(lVar33 + 0x30) = 0;
        *(undefined4 *)(lVar33 + 0x38) = 0;
        *(undefined2 *)(lVar33 + 0x3c) = 0;
        *pcVar51 = '\x01';
      }
    }
    pcVar50 = local_6e0;
    lVar31 = local_6b8;
    uVar28 = local_6d4;
LAB_1802932dc:
  }
  else {
    cVar26 = FUN_18028ff10((longlong)plVar49 + 0x14,local_3d8);
    fVar52 = extraout_XMM0_Da;
    if (cVar26 == '\0') goto LAB_180293071;
    plVar36 = (longlong *)FUN_1802990d0(extraout_XMM0_Da,local_650,&local_6e8);
    lVar33 = *plVar36;
    pcVar50 = (char *)(lVar33 + 0x18);
    if (bVar18) {
      bVar19 = false;
      local_6e0 = pcVar50;
      goto LAB_18029308e;
    }
    UVar37 = GetTickCount64();
    plVar36 = (longlong *)FUN_1801d4a30(&DAT_180ca1640,local_610,&local_6e8);
    pcVar51 = pcVar50;
    if (UVar37 - *(longlong *)(*plVar36 + 0x18) < 0x7d1) {
      goto LAB_1802932dc;
    }
    uVar32 = DAT_180ca16b0 &
             (((((ulonglong)(local_6e8 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)local_6e8._1_1_) * 0x100000001b3 ^ (ulonglong)local_6e8._2_1_) *
              0x100000001b3 ^ (ulonglong)local_6e8._3_1_) * 0x100000001b3;
    plVar36 = *(longlong **)(DAT_180ca1698 + 8 + uVar32 * 0x10);
    if (plVar36 == DAT_180ca1688) {
LAB_180292f38:
      plVar36 = plVar34;
    }
    else {
      uVar29 = *(uint *)(plVar36 + 2);
      while (local_6e8 != uVar29) {
        if (plVar36 == *(longlong **)(DAT_180ca1698 + uVar32 * 0x10)) goto LAB_180292f38;
        plVar36 = (longlong *)plVar36[1];
        uVar29 = *(uint *)(plVar36 + 2);
      }
    }
    if ((plVar36 != (longlong *)0x0) && (plVar36 != DAT_180ca1688)) {
      if (3 < *(int *)((longlong)plVar36 + 0x14)) {
        *(undefined4 *)(lVar33 + 0x1a) = local_676;
        *(undefined2 *)(lVar33 + 0x1e) = local_672;
        *(undefined2 *)(lVar33 + 0x3e) = local_652;
        *(undefined1 *)(lVar33 + 0x19) = 0;
        *(undefined8 *)(lVar33 + 0x20) = 0;
        *(undefined8 *)(lVar33 + 0x28) = 0;
        *(undefined8 *)(lVar33 + 0x30) = 0;
        *(undefined4 *)(lVar33 + 0x38) = 0;
        *(undefined2 *)(lVar33 + 0x3c) = 0;
        *pcVar50 = '\x01';
      }
      lVar33 = DAT_180ca1698;
      plVar49 = DAT_180ca1688;
      uVar32 = DAT_180ca16b0 &
               (((((ulonglong)*(byte *)(plVar36 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar36 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar36 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar36 + 0x13)) * 0x100000001b3;
      plVar34 = *(longlong **)(DAT_180ca1698 + uVar32 * 0x10);
      if (*(longlong **)(DAT_180ca1698 + 8 + uVar32 * 0x10) == plVar36) {
        if (plVar34 == plVar36) {
          *(longlong **)(DAT_180ca1698 + uVar32 * 0x10) = DAT_180ca1688;
          *(longlong **)(lVar33 + 8 + uVar32 * 0x10) = plVar49;
        }
        else {
          *(longlong *)(DAT_180ca1698 + 8 + uVar32 * 0x10) = plVar36[1];
        }
      }
      else if (plVar34 == plVar36) {
        *(longlong *)(DAT_180ca1698 + uVar32 * 0x10) = *plVar36;
      }
      lVar33 = *plVar36;
      DAT_180ca1690 = DAT_180ca1690 + -1;
      *(longlong *)plVar36[1] = lVar33;
      *(longlong *)(lVar33 + 8) = plVar36[1];
      thunk_FUN_1803d64e0(plVar36,0x18);
      goto LAB_1802932dc;
    }
  }
  param_1 = local_6b0;
  uVar29 = local_6d8;
  uVar32 = DAT_180cfe6d0 &
           (((((ulonglong)(local_6e8 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)local_6e8._1_1_) * 0x100000001b3 ^ (ulonglong)local_6e8._2_1_) *
            0x100000001b3 ^ (ulonglong)local_6e8._3_1_) * 0x100000001b3;
  plVar34 = *(longlong **)(DAT_180cfe6b8 + 8 + uVar32 * 0x10);
  if (plVar34 == DAT_180cfe6a8) {
LAB_180293366:
    plVar34 = (longlong *)0x0;
  }
  else {
    uVar1 = *(uint *)(plVar34 + 2);
    while (local_6e8 != uVar1) {
      if (plVar34 == *(longlong **)(DAT_180cfe6b8 + uVar32 * 0x10)) goto LAB_180293366;
      plVar34 = (longlong *)plVar34[1];
      uVar1 = *(uint *)(plVar34 + 2);
    }
  }
  if ((plVar34 != (longlong *)0x0) && (plVar34 != DAT_180cfe6a8)) {
    lVar33 = 3;
    puVar24 = (undefined8 *)((longlong)plVar34 + 0x14);
    pcVar25 = local_238;
    do {
      pcVar45 = pcVar25;
      puVar40 = puVar24;
      uVar35 = puVar40[1];
      uVar15 = puVar40[2];
      uVar16 = puVar40[3];
      *(undefined8 *)pcVar45 = *puVar40;
      *(undefined8 *)(pcVar45 + 8) = uVar35;
      uVar35 = puVar40[4];
      uVar17 = puVar40[5];
      *(undefined8 *)(pcVar45 + 0x10) = uVar15;
      *(undefined8 *)(pcVar45 + 0x18) = uVar16;
      uVar15 = puVar40[6];
      uVar16 = puVar40[7];
      *(undefined8 *)(pcVar45 + 0x20) = uVar35;
      *(undefined8 *)(pcVar45 + 0x28) = uVar17;
      uVar35 = puVar40[8];
      uVar17 = puVar40[9];
      *(undefined8 *)(pcVar45 + 0x30) = uVar15;
      *(undefined8 *)(pcVar45 + 0x38) = uVar16;
      uVar15 = puVar40[10];
      uVar16 = puVar40[0xb];
      *(undefined8 *)(pcVar45 + 0x40) = uVar35;
      *(undefined8 *)(pcVar45 + 0x48) = uVar17;
      uVar35 = puVar40[0xc];
      uVar17 = puVar40[0xd];
      *(undefined8 *)(pcVar45 + 0x50) = uVar15;
      *(undefined8 *)(pcVar45 + 0x58) = uVar16;
      uVar15 = puVar40[0xe];
      uVar16 = puVar40[0xf];
      *(undefined8 *)(pcVar45 + 0x60) = uVar35;
      *(undefined8 *)(pcVar45 + 0x68) = uVar17;
      *(undefined8 *)(pcVar45 + 0x70) = uVar15;
      *(undefined8 *)(pcVar45 + 0x78) = uVar16;
      lVar33 = lVar33 + -1;
      puVar24 = puVar40 + 0x10;
      pcVar25 = pcVar45 + 0x80;
    } while (lVar33 != 0);
    uVar47 = *(undefined4 *)((longlong)puVar40 + 0x84);
    uVar9 = *(undefined4 *)(puVar40 + 0x11);
    uVar10 = *(undefined4 *)((longlong)puVar40 + 0x8c);
    uVar11 = *(undefined4 *)(puVar40 + 0x12);
    uVar12 = *(undefined4 *)((longlong)puVar40 + 0x94);
    uVar13 = *(undefined4 *)(puVar40 + 0x13);
    uVar14 = *(undefined4 *)((longlong)puVar40 + 0x9c);
    *(undefined4 *)(pcVar45 + 0x80) = *(undefined4 *)(puVar40 + 0x10);
    *(undefined4 *)(pcVar45 + 0x84) = uVar47;
    *(undefined4 *)(pcVar45 + 0x88) = uVar9;
    *(undefined4 *)(pcVar45 + 0x8c) = uVar10;
    *(undefined4 *)(pcVar45 + 0x90) = uVar11;
    *(undefined4 *)(pcVar45 + 0x94) = uVar12;
    *(undefined4 *)(pcVar45 + 0x98) = uVar13;
    *(undefined4 *)(pcVar45 + 0x9c) = uVar14;
    if (((char)uVar28 == '\0') || (*pcVar51 == '\0')) {
      local_700 = &DAT_1806e4988;
      local_708 = local_238;
      local_6f8 = local_6e8;
      cVar26 = FUN_180291e40(pcVar50,lVar31,*local_6b0,local_6e8 == local_6d8);
      if (cVar26 != '\0') {
        FUN_18028fd20(local_6e8,lVar31);
        uVar28 = uVar28 & 0xff;
        if (cStack_1dc != '\0') {
          uVar28 = 1;
        }
      }
      iVar30 = iStack_230;
      local_6d4 = uVar28;
      if ((local_6e8 == uVar29) && (iStack_230 != 0)) {
        lVar33 = *param_1;
        UVar37 = GetTickCount64();
        if (DAT_180cfe6e0 <= UVar37) {
          UVar37 = GetTickCount64();
          DAT_180cfe6e0 = UVar37 + 100;
          lVar41 = FUN_180280d30(iVar30);
          if ((lVar41 == 0) || (*(char *)(lVar41 + 0x50) == '\0')) {
            uVar47 = 0;
          }
          else {
            uVar47 = 1;
          }
          if ((DAT_180cfe650 == 0) ||
             (iVar30 = FUN_180011200(lVar31 + (ulonglong)DAT_180cfe650), iVar30 == -1)) {
LAB_1802934e7:
            lVar31 = FUN_180290e90(lVar33);
            if (lVar31 == 0) {
              FUN_180290b50(0,uVar47);
              goto LAB_180293579;
            }
          }
          else {
            FUN_1803a0940(&local_688,iVar30);
            lVar31 = local_688;
            if (local_688 == 0) goto LAB_1802934e7;
          }
          uVar35 = FUN_18000f3a0((ulonglong)DAT_180cfe610 + lVar31);
          FUN_180290b50(uVar35,uVar47);
        }
      }
    }
  }
LAB_180293579:
  fVar48 = local_6d0;
LAB_18029357d:
  local_6c8 = local_6c8 + 1;
  uVar32 = (ulonglong)local_6c8;
  lVar33 = local_698;
  if ((int)local_6cc <= (int)local_6c8) {
    return;
  }
  goto LAB_180292734;
}



/* ===== 1802935f0 FUN_1802935f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1802935f0(undefined4 param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  uint local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  FUN_18003a390(&local_38,param_1);
  lVar7 = 0;
  uVar8 = local_28 ^ 0x31415926;
  for (; 3 < local_28; local_28 = local_28 - 4) {
    if (local_20 < 0x10) {
      uVar2 = auStack_58[lVar7 + 0x21];
      uVar1 = auStack_58[lVar7 + 0x20];
      puVar5 = &local_38;
      uVar3 = auStack_58[lVar7 + 0x22];
    }
    else {
      uVar1 = *(undefined1 *)((longlong)local_38 + lVar7);
      uVar2 = *(undefined1 *)((longlong)local_38 + lVar7 + 1);
      uVar3 = *(undefined1 *)((longlong)local_38 + lVar7 + 2);
      puVar5 = local_38;
    }
    lVar4 = lVar7 + 3;
    lVar7 = lVar7 + 4;
    uVar6 = CONCAT13(*(undefined1 *)((longlong)puVar5 + lVar4),CONCAT12(uVar3,CONCAT11(uVar2,uVar1))
                    ) * 0x5bd1e995;
    uVar8 = uVar8 * 0x5bd1e995 ^ (uVar6 >> 0x18 ^ uVar6) * 0x5bd1e995;
  }
  if (local_28 != 1) {
    if (local_28 != 2) {
      if (local_28 != 3) goto LAB_18029371c;
      puVar5 = &local_38;
      if (0xf < local_20) {
        puVar5 = local_38;
      }
      uVar8 = uVar8 ^ (uint)*(byte *)((longlong)puVar5 + lVar7 + 2) << 0x10;
    }
    puVar5 = &local_38;
    if (0xf < local_20) {
      puVar5 = local_38;
    }
    uVar8 = uVar8 ^ (uint)*(byte *)((longlong)puVar5 + lVar7 + 1) << 8;
  }
  puVar5 = &local_38;
  if (0xf < local_20) {
    puVar5 = local_38;
  }
  uVar8 = (*(byte *)((longlong)puVar5 + lVar7) ^ uVar8) * 0x5bd1e995;
LAB_18029371c:
  uVar8 = (uVar8 >> 0xd ^ uVar8) * 0x5bd1e995;
  FUN_18000f890(&local_38);
  return uVar8 >> 0xf ^ uVar8;
}



/* ===== 180293750 FUN_180293750 ===== */

void FUN_180293750(longlong param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  local_res8 = FUN_1802935f0(param_2);
  FUN_180013280((ulonglong)DAT_180cfe60c + param_1,&local_res8);
  FUN_180290b00(DAT_180961ec0,param_1);
  pcVar2 = (char *)FUN_180290c00((ulonglong)DAT_180cfe5d0 + param_1);
  FUN_180290c30(param_1,pcVar2);
  if ((DAT_180cfe650 != 0) && (param_1 != 0)) {
    iVar1 = FUN_180011200(param_1 + (ulonglong)DAT_180cfe650);
    if (iVar1 != -1) {
      FUN_1803a0940(&local_res8,iVar1);
      lVar3 = CONCAT44(uStackX_c,local_res8);
      goto LAB_1802937df;
    }
  }
  lVar3 = 0;
LAB_1802937df:
  FUN_180290c30(lVar3,pcVar2);
  puVar5 = &DAT_1806dfd84;
  if (lVar3 != 0) {
    puVar5 = &DAT_1806e0c90;
  }
  pcVar4 = "no path";
  if (pcVar2 != (char *)0x0) {
    pcVar4 = pcVar2;
  }
  FUN_18028fbf0("knife model | def %d | %s | hud copy %s",param_2,pcVar4,puVar5);
  return;
}



/* ===== 180293830 FUN_180293830 ===== */

void FUN_180293830(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 local_res18 [4];
  
  lVar2 = (ulonglong)DAT_180cfe5d0 + param_1;
  uVar1 = DAT_180cfe654;
  if (((DAT_180cfe654 != 0) || ((DAT_180cfe63c != 0 && (uVar1 = DAT_180cfe63c + 8, uVar1 != 0)))) &&
     (lVar2 != 0)) {
    local_res18[0] = 0;
    FUN_180013280((ulonglong)uVar1 + lVar2,local_res18);
  }
  local_res18[0] = CONCAT22(local_res18[0]._2_2_,*(undefined2 *)param_2);
  FUN_180066890((ulonglong)DAT_180cfe5d4 + lVar2,local_res18);
  local_res18[0] = param_3;
  FUN_180013280((ulonglong)DAT_180cfe5dc + lVar2,&DAT_18065025c);
  FUN_180013280((ulonglong)DAT_180cfe5e0 + lVar2,&DAT_180650298);
  FUN_180013280((ulonglong)DAT_180cfe5e4 + lVar2,local_res18);
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
  FUN_1800233d0((ulonglong)DAT_180cfe5e8 + lVar2,local_res18);
  FUN_180291740(param_1,param_2);
  FUN_180290c60(lVar2,param_2 + 7);
  FUN_180013280((ulonglong)DAT_180cfe5ec + lVar2,&DAT_18065026c);
  FUN_180293750(param_1,*param_2);
  FUN_180291600(lVar2);
  if (*(char *)(param_2 + 5) == '\0') {
    FUN_180290ae0(lVar2,0x50);
    FUN_180290ae0(lVar2,0x51);
  }
  else {
    iVar3 = param_2[6];
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    FUN_180290960(lVar2,"kill eater",iVar3);
    FUN_180290960(lVar2,"kill eater score type",0);
  }
  FUN_1802916b0(param_1,lVar2,DAT_180cfe5b0,*(char *)(param_2 + 7) != '\0',DAT_180961ea8);
  FUN_1802916b0(param_1,lVar2,DAT_180cfe5c8,*(undefined1 *)(param_2 + 5),DAT_180961eb0);
  FUN_1802910c0(param_1);
  DAT_180cd011e = 1;
  return;
}



/* ===== 1802939f0 FUN_1802939f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802939f0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  size_t sVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 local_228 [16];
  char local_218 [2];
  undefined4 uStack_216;
  undefined2 uStack_212;
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
  undefined8 uStack_1cc;
  undefined1 uStack_1c4;
  undefined4 uStack_1c0;
  undefined8 uStack_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined8 local_19c;
  undefined8 uStack_194;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined1 local_17c;
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
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if ((DAT_180cd011e != '\0') && (DAT_180cfca68 != '\0')) {
    lVar12 = (ulonglong)DAT_180cfe5d0 + param_1;
    FUN_180066890((ulonglong)DAT_180cfe5d4 + lVar12,&DAT_180cfca6a);
    FUN_180013280((ulonglong)DAT_180cfe5dc + lVar12,&DAT_180cfca6c);
    FUN_180013280((ulonglong)DAT_180cfe5e0 + lVar12,&DAT_180cfca70);
    FUN_180013280((ulonglong)DAT_180cfe5e4 + lVar12,&DAT_180cfca74);
    FUN_1800233d0((ulonglong)DAT_180cfe5e8 + lVar12,&DAT_180cfca78);
    FUN_180013280((ulonglong)DAT_180cfe5ec + lVar12,&DAT_180cfca90);
    FUN_180013280((ulonglong)DAT_180cfe5fc + param_1,&DAT_180cfca7c);
    FUN_180013280((ulonglong)DAT_180cfe600 + param_1,&DAT_180cfca80);
    FUN_180013280((ulonglong)DAT_180cfe604 + param_1,&DAT_180cfca84);
    FUN_180013280((ulonglong)DAT_180cfe608 + param_1,&DAT_180cfca88);
    FUN_180291600(lVar12);
    FUN_180290ae0(lVar12,0x50);
    FUN_180290ae0(lVar12,0x51);
    uVar8 = (ulonglong)DAT_180cfe5f0;
    _local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    if ((DAT_180cfe5f0 != 0) && (lVar12 != 0)) {
      sVar9 = strlen(local_218);
      uVar13 = 0;
      if (0xa0 < sVar9) {
        sVar9 = 0xa0;
      }
      if (sVar9 != 0) {
        do {
          FUN_1800233d0(uVar13 + lVar12 + uVar8,local_218 + uVar13);
          uVar13 = uVar13 + 1;
        } while (uVar13 < sVar9);
      }
      local_228[0] = 0;
      FUN_1800233d0(sVar9 + lVar12 + uVar8,local_228);
    }
    FUN_180293750(param_1,DAT_180cfca6a);
    if (DAT_180cfca7c == 0) {
      FUN_1802917f0(param_1,param_2,param_3);
    }
    else {
      lVar12 = FUN_180280d30();
      if ((param_1 != 0) && (DAT_180961e88 != 0)) {
        iVar7 = FUN_180011200(param_1 + (ulonglong)DAT_180961e88);
        if (0 < iVar7) {
          FUN_180290b80(param_1);
        }
      }
      if ((lVar12 == 0) || (*(char *)(lVar12 + 0x50) == '\0')) {
        FUN_1802912b0(param_1,param_2,param_3,0);
      }
      else {
        FUN_1802912b0(param_1,param_2,param_3,1);
      }
    }
    local_178 = _DAT_1808adc30;
    uStack_170 = _UNK_1808adc38;
    local_168 = _DAT_1808adc30;
    uStack_160 = _UNK_1808adc38;
    local_158 = _DAT_1808adc30;
    uStack_150 = _UNK_1808adc38;
    uStack_1bc = 0;
    uStack_1b4 = 0;
    DAT_180cd011e = '\0';
    local_1ac = 0;
    uStack_1a4 = 0;
    local_1d8 = 0;
    local_19c = 0;
    uStack_194 = 0;
    uStack_1d4 = 0xffffffff;
    local_18c = 0;
    uStack_184 = 0;
    uStack_1d0 = 0;
    local_148 = _DAT_1808adc30;
    uStack_140 = _UNK_1808adc38;
    local_138 = _DAT_1808adc30;
    uStack_130 = _UNK_1808adc38;
    local_128 = _DAT_1808adc30;
    uStack_120 = _UNK_1808adc38;
    local_118 = _DAT_1808adc30;
    uStack_110 = _UNK_1808adc38;
    local_108 = _DAT_1808adc30;
    uStack_100 = _UNK_1808adc38;
    uStack_1cc = 0x3a83126f;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    local_17c = 0;
    FUN_180540170(&local_f8,0,0xa8);
    lVar12 = 3;
    local_d8 = _DAT_1808ad310;
    uStack_d0 = _UNK_1808ad318;
    local_b8 = _DAT_1808ad2c0;
    uStack_b0 = _UNK_1808ad2c8;
    local_68 = _DAT_1808ad310;
    uStack_60 = _UNK_1808ad318;
    local_f8 = 0;
    local_f0 = 0x3f800000;
    local_e8 = 0;
    local_e0 = 0xffffffff;
    local_dc = 0;
    local_c8 = 0;
    local_c4 = 0xffffffff;
    local_c0 = 0;
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_9c = 0x3f800000;
    local_94 = 0;
    local_8c = 0xffffffff;
    local_88 = 0;
    local_80 = 0x3f800000;
    local_78 = 0;
    local_70 = 0xffffffff;
    local_6c = 0;
    local_58 = 0;
    local_54 = 0xffffffff;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    puVar5 = (undefined8 *)&DAT_1809f39b0;
    puVar6 = (undefined8 *)&local_1d8;
    do {
      puVar11 = puVar6;
      puVar10 = puVar5;
      uVar1 = puVar11[1];
      uVar2 = puVar11[2];
      uVar3 = puVar11[3];
      *puVar10 = *puVar11;
      puVar10[1] = uVar1;
      uVar1 = puVar11[4];
      uVar4 = puVar11[5];
      puVar10[2] = uVar2;
      puVar10[3] = uVar3;
      uVar2 = puVar11[6];
      uVar3 = puVar11[7];
      puVar10[4] = uVar1;
      puVar10[5] = uVar4;
      uVar1 = puVar11[8];
      uVar4 = puVar11[9];
      puVar10[6] = uVar2;
      puVar10[7] = uVar3;
      uVar2 = puVar11[10];
      uVar3 = puVar11[0xb];
      puVar10[8] = uVar1;
      puVar10[9] = uVar4;
      uVar1 = puVar11[0xc];
      uVar4 = puVar11[0xd];
      puVar10[10] = uVar2;
      puVar10[0xb] = uVar3;
      uVar2 = puVar11[0xe];
      uVar3 = puVar11[0xf];
      puVar10[0xc] = uVar1;
      puVar10[0xd] = uVar4;
      puVar10[0xe] = uVar2;
      puVar10[0xf] = uVar3;
      lVar12 = lVar12 + -1;
      puVar5 = puVar10 + 0x10;
      puVar6 = puVar11 + 0x10;
    } while (lVar12 != 0);
    uVar1 = puVar11[0x11];
    DAT_180cfca68 = '\0';
    uVar2 = puVar11[0x12];
    uVar3 = puVar11[0x13];
    DAT_180cfca6a = 0;
    puVar10[0x10] = puVar11[0x10];
    puVar10[0x11] = uVar1;
    _DAT_180cfca6c = 0;
    puVar10[0x12] = uVar2;
    puVar10[0x13] = uVar3;
    DAT_180cfca69 = local_218[1];
    _DAT_180cfca79 = local_208._1_2_;
    DAT_180cfca7b = local_208._3_1_;
    _DAT_180cfe6ea = uStack_216;
    _DAT_180cfe6ee = uStack_212;
    _DAT_180cfca74 = 0;
    DAT_180cfca78 = 0;
    _DAT_180cfca7c = 0;
    _DAT_180cfca84 = 0;
    _DAT_180cfca8c = 0;
    _DAT_180cfe6e8 = 0;
    _DAT_180cfe6f0 = 0;
    _DAT_180cfe6f8 = 0;
    _DAT_180cfe700 = 0;
    _DAT_180cfe708 = 0;
    _DAT_180cfe70c = 0;
    _DAT_180cfe70e = local_1f8._6_2_;
  }
  return;
}



/* ===== 180293ef0 FUN_180293ef0 ===== */

void FUN_180293ef0(undefined8 param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint *puVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong local_res10 [3];
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res10);
    lVar8 = local_res10[0];
  }
  else {
    lVar8 = DAT_181108a00;
  }
  if (((lVar8 != 0) && (lVar4 = FUN_180273f90(param_1,"attacker"), lVar4 == lVar8)) &&
     (lVar4 = FUN_180273f90(param_1,"userid"), lVar4 != lVar8)) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(local_res10);
      DAT_181108a00 = local_res10[0];
      DAT_1811089f8 = FUN_1803a0c50(local_res10);
      DAT_180cd1304 = '\x01';
    }
    lVar8 = DAT_1811089f8;
    if ((((DAT_1811089f8 != 0) && (DAT_180cfe5d0 != 0)) &&
        ((DAT_180cfe5d4 != 0 &&
         ((DAT_180ca0a0c != 0 && (uVar10 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 != 0)))))) &&
       (lVar4 = FUN_18000f3a0(DAT_1811089f8 + (ulonglong)DAT_180ca0a0c), lVar4 != 0)) {
      uVar3 = FUN_180011200(lVar4 + uVar10);
      plVar5 = (longlong *)FUN_1803a0940(local_res10,uVar3);
      if ((*plVar5 != 0) &&
         (((ulonglong)DAT_180cfe5d0 + (ulonglong)DAT_180cfe5d4 + *plVar5) - 0xffff < 0x7ffffffeffff)
         ) {
        uVar2 = FUN_180011440();
        if (DAT_180ca09f4 == 0) {
          cVar1 = '\0';
        }
        else {
          cVar1 = FUN_180011220((ulonglong)DAT_180ca09f4 + lVar8);
        }
        if (uVar2 != 0) {
          puVar6 = &DAT_18092174c;
          do {
            uVar9 = (uint)uVar2;
            if ((*puVar6 == uVar9) && (puVar6[1] == (uint)(cVar1 == '\x02'))) goto LAB_1802940c1;
            puVar6 = puVar6 + 0x68;
          } while (puVar6 != &DAT_180931b4c);
          puVar6 = &DAT_18092174c;
          while ((*puVar6 != uVar9 || (-1 < (int)puVar6[1]))) {
            puVar6 = puVar6 + 0x68;
            if (puVar6 == &DAT_180931b4c) {
              return;
            }
          }
LAB_1802940c1:
          if ((char)puVar6[5] != '\0') {
            puVar7 = &DAT_180931b4c;
            do {
              if ((*puVar7 == uVar9) && (puVar7[1] == puVar6[1])) goto LAB_18029411d;
              puVar7 = puVar7 + 0xab;
            } while (puVar7 != &DAT_18093c64c);
            puVar7 = &DAT_180931b4c;
            do {
              if ((*puVar7 == uVar9) && (puVar7[1] == (uint)(cVar1 == '\x02'))) goto LAB_180294118;
              puVar7 = puVar7 + 0xab;
            } while (puVar7 != &DAT_18093c64c);
            puVar7 = (uint *)0x0;
LAB_180294118:
            if (puVar7 != (uint *)0x0) {
LAB_18029411d:
              if (((char)puVar7[2] != '\0') && ((int)puVar6[6] < 0x7fffffff)) {
                puVar6[6] = puVar6[6] + 1;
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== 180294140 FUN_180294140 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180294140(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined2 uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  ULONGLONG UVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  int *piVar26;
  int *piVar27;
  undefined1 auStack_278 [32];
  undefined4 *local_258;
  char *local_250;
  uint local_248;
  char local_238;
  undefined1 local_237;
  uint local_234;
  longlong *local_230;
  longlong *local_228;
  undefined1 local_21f;
  undefined4 local_21e;
  undefined2 local_21a;
  undefined2 local_20f;
  undefined1 local_20d;
  undefined2 local_1fa;
  undefined8 local_1e8;
  int iStack_1e0;
  undefined8 uStack_1dc;
  undefined1 uStack_1d4;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined8 local_19c;
  undefined8 uStack_194;
  undefined1 local_18c;
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
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_278;
  local_230 = param_1;
  local_228 = param_2;
  lVar16 = FUN_18000f3a0((ulonglong)DAT_180cfe620 + *param_1);
  if (lVar16 == 0) {
    lVar23 = 0;
    local_234 = 0;
LAB_1802941d9:
    uVar9 = 0;
  }
  else {
    uVar25 = (ulonglong)DAT_180cfe624;
    uVar9 = FUN_180011200(uVar25 + lVar16);
    lVar23 = FUN_18000f3a0(uVar25 + lVar16 + 8);
    local_234 = FUN_180011200((ulonglong)DAT_180cfe628 + lVar16);
    if ((0x40 < uVar9) || (lVar23 == 0)) goto LAB_1802941d9;
  }
  if ((*param_1 == 0) || (DAT_180ca09f4 == 0)) {
    uVar24 = 0;
  }
  else {
    cVar6 = FUN_180011220(*param_1 + (ulonglong)DAT_180ca09f4);
    uVar24 = (uint)(cVar6 == '\x02');
    if (cVar6 == '\x02') {
      uVar24 = 1;
      iVar12 = DAT_1809214a4;
      if (DAT_1809214a4 < 0) {
        iVar12 = DAT_18092149c;
      }
      goto LAB_180294220;
    }
  }
  iVar12 = DAT_18092149c;
LAB_180294220:
  piVar26 = (int *)0x0;
  if ((((DAT_180921498 != '\0') && (iVar12 != 0)) && (lVar16 = FUN_180280c60(iVar12), lVar16 != 0))
     && ((*(int *)(lVar16 + 0x48) == 2 && (0 < iVar12)))) {
    piVar26 = &DAT_18092174c;
    do {
      if ((*piVar26 == iVar12) && (piVar26[1] == uVar24)) goto LAB_18029429a;
      piVar26 = piVar26 + 0x68;
    } while (piVar26 != &DAT_180931b4c);
    piVar26 = &DAT_18092174c;
    do {
      if ((*piVar26 == iVar12) && (piVar26[1] < 0)) goto LAB_18029429a;
      piVar26 = piVar26 + 0x68;
    } while (piVar26 != &DAT_180931b4c);
    piVar26 = (int *)0x0;
  }
LAB_18029429a:
  uVar24 = 0;
  if (0 < (int)uVar9) {
    do {
      uVar10 = FUN_180011200(lVar23 + (ulonglong)uVar24 * 4);
      if ((((uVar10 - 1 < 0xfffffffe) && (lVar16 = FUN_18000f3a0(DAT_1809619d0), lVar16 != 0)) &&
          (lVar16 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                                  lVar16 + (ulonglong)((uVar10 >> 9 & 0x3f) * DAT_180961944)),
          lVar16 - 0x10000U < 0xfffffffffffeffff)) &&
         ((lVar16 = FUN_18000f3a0((ulonglong)((uVar10 & 0x1ff) * DAT_180961948) + lVar16),
          lVar16 - 0x10000U < 0xfffffffffffeffff &&
          (lVar17 = FUN_18000f3a0((ulonglong)DAT_180cfe60c + (ulonglong)DAT_1809619c0 + lVar16),
          lVar17 != 0)))) {
        uVar7 = FUN_180011440((ulonglong)DAT_180cfe5d4 + (ulonglong)DAT_180cfe5d0 + lVar16);
        lVar17 = FUN_180280c60(uVar7);
        if ((lVar17 != 0) && (*(int *)(lVar17 + 0x48) == 2)) {
          local_237 = uVar10 == local_234;
          if (piVar26 == (int *)0x0) {
            if (DAT_180cd011e == '\0') {
              return;
            }
            FUN_1802939f0(lVar16,*local_230,local_237);
            FUN_18028fd20(uVar10,lVar16);
            return;
          }
          if (DAT_180cfe68c == uVar10) {
            if (DAT_180cfca68 == '\0') goto LAB_1802946a0;
          }
          else {
            _DAT_180cfe6ea = local_21e;
            _DAT_180cfe6ee = local_21a;
            _DAT_180cfe70e = local_1fa;
            DAT_180cfca69 = local_21f;
            _DAT_180cfca79 = local_20f;
            DAT_180cfca7b = local_20d;
            _DAT_180cfe6e8 = 0;
            _DAT_180cfe6f0 = 0;
            _DAT_180cfe6f8 = 0;
            _DAT_180cfe700 = 0;
            _DAT_180cfe708 = 0;
            _DAT_180cfe70c = 0;
            DAT_180cd011e = '\0';
            DAT_180cfca68 = '\0';
            DAT_180cfca6a = 0;
            _DAT_180cfca6c = 0;
            _DAT_180cfca74 = 0;
            DAT_180cfca78 = 0;
            _DAT_180cfca7c = 0;
            _DAT_180cfca84 = 0;
            _DAT_180cfca8c = 0;
            local_1e8._0_4_ = 0;
            local_1e8._4_4_ = 0xffffffff;
            iStack_1e0 = 0;
            uStack_1dc = 0x3a83126f;
            uStack_1d4 = 0;
            uStack_1d0 = 0;
            uStack_1cc = 0;
            uStack_1c4 = 0;
            local_18c = 0;
            local_1bc = 0;
            uStack_1b4 = 0;
            local_1ac = 0;
            uStack_1a4 = 0;
            local_19c = 0;
            uStack_194 = 0;
            local_188 = _DAT_1808adc30;
            uStack_180 = _UNK_1808adc38;
            local_178 = _DAT_1808adc30;
            uStack_170 = _UNK_1808adc38;
            local_168 = _DAT_1808adc30;
            uStack_160 = _UNK_1808adc38;
            local_158 = _DAT_1808adc30;
            uStack_150 = _UNK_1808adc38;
            local_148 = _DAT_1808adc30;
            uStack_140 = _UNK_1808adc38;
            local_138 = _DAT_1808adc30;
            uStack_130 = _UNK_1808adc38;
            local_128 = _DAT_1808adc30;
            uStack_120 = _UNK_1808adc38;
            local_118 = _DAT_1808adc30;
            uStack_110 = _UNK_1808adc38;
            DAT_180cfe68c = uVar10;
            FUN_180540170(&local_108,0,0xa8);
            local_e8 = _DAT_1808ad310;
            uStack_e0 = _UNK_1808ad318;
            local_c8 = _DAT_1808ad2c0;
            uStack_c0 = _UNK_1808ad2c8;
            local_78 = _DAT_1808ad310;
            uStack_70 = _UNK_1808ad318;
            local_108 = 0;
            local_100 = 0x3f800000;
            local_f8 = 0;
            local_f0 = 0xffffffff;
            local_ec = 0;
            local_d8 = 0;
            local_d4 = 0xffffffff;
            local_d0 = 0;
            local_b8 = 0xffffffff;
            local_b4 = 0;
            local_ac = 0x3f800000;
            local_a4 = 0;
            local_9c = 0xffffffff;
            local_98 = 0;
            local_90 = 0x3f800000;
            local_88 = 0;
            local_80 = 0xffffffff;
            local_7c = 0;
            local_68 = 0;
            local_64 = 0xffffffff;
            local_60 = 0;
            local_58 = 0;
            local_50 = 0;
            lVar23 = 3;
            puVar5 = (undefined8 *)&DAT_1809f39b0;
            puVar18 = &local_1e8;
            do {
              puVar22 = puVar18;
              puVar21 = puVar5;
              uVar20 = puVar22[1];
              uVar1 = puVar22[2];
              uVar2 = puVar22[3];
              *puVar21 = *puVar22;
              puVar21[1] = uVar20;
              uVar20 = puVar22[4];
              uVar3 = puVar22[5];
              puVar21[2] = uVar1;
              puVar21[3] = uVar2;
              uVar1 = puVar22[6];
              uVar2 = puVar22[7];
              puVar21[4] = uVar20;
              puVar21[5] = uVar3;
              uVar20 = puVar22[8];
              uVar3 = puVar22[9];
              puVar21[6] = uVar1;
              puVar21[7] = uVar2;
              uVar1 = puVar22[10];
              uVar2 = puVar22[0xb];
              puVar21[8] = uVar20;
              puVar21[9] = uVar3;
              uVar20 = puVar22[0xc];
              uVar3 = puVar22[0xd];
              puVar21[10] = uVar1;
              puVar21[0xb] = uVar2;
              uVar1 = puVar22[0xe];
              uVar2 = puVar22[0xf];
              puVar21[0xc] = uVar20;
              puVar21[0xd] = uVar3;
              puVar21[0xe] = uVar1;
              puVar21[0xf] = uVar2;
              lVar23 = lVar23 + -1;
              puVar5 = puVar21 + 0x10;
              puVar18 = puVar22 + 0x10;
            } while (lVar23 != 0);
            uVar20 = puVar22[0x11];
            uVar1 = puVar22[0x12];
            uVar2 = puVar22[0x13];
            puVar21[0x10] = puVar22[0x10];
            puVar21[0x11] = uVar20;
            puVar21[0x12] = uVar1;
            puVar21[0x13] = uVar2;
LAB_1802946a0:
            lVar23 = (ulonglong)DAT_180cfe5d0 + lVar16;
            DAT_180cfca6a = FUN_180011440((ulonglong)DAT_180cfe5d4 + lVar23);
            uVar11 = FUN_180011200((ulonglong)DAT_180cfe5dc + lVar23);
            _DAT_180cfca6c = CONCAT44(_DAT_180cfca70,uVar11);
            uVar11 = FUN_180011200((ulonglong)DAT_180cfe5e0 + lVar23);
            _DAT_180cfca6c = CONCAT44(uVar11,_DAT_180cfca6c);
            _DAT_180cfca74 = FUN_180011200((ulonglong)DAT_180cfe5e4 + lVar23);
            DAT_180cfca78 = FUN_180011220((ulonglong)DAT_180cfe5e8 + lVar23);
            uVar11 = FUN_180011200((ulonglong)DAT_180cfe5ec + lVar23);
            _DAT_180cfca90 = uVar11;
            uVar11 = FUN_180011200((ulonglong)DAT_180cfe5fc + lVar16);
            _DAT_180cfca7c = CONCAT44(_DAT_180cfca80,uVar11);
            uVar11 = FUN_180011200((ulonglong)DAT_180cfe600 + lVar16);
            _DAT_180cfca7c = CONCAT44(uVar11,DAT_180cfca7c);
            uVar11 = FUN_18000f3d0((ulonglong)DAT_180cfe604 + lVar16);
            _DAT_180cfca84 = CONCAT44(_DAT_180cfca88,uVar11);
            uVar11 = FUN_180011200((ulonglong)DAT_180cfe608 + lVar16);
            _DAT_180cfca84 = CONCAT44(uVar11,_DAT_180cfca84);
            uVar11 = FUN_180011200((ulonglong)DAT_180cfe60c + lVar16);
            _DAT_180cfca8c = CONCAT44(_DAT_180cfca90,uVar11);
            DAT_180cfca68 = '\x01';
          }
          lVar23 = 3;
          puVar5 = &local_1e8;
          do {
            piVar27 = piVar26;
            puVar18 = puVar5;
            uVar20 = *(undefined8 *)(piVar27 + 2);
            uVar1 = *(undefined8 *)(piVar27 + 4);
            uVar2 = *(undefined8 *)(piVar27 + 6);
            *puVar18 = *(undefined8 *)piVar27;
            puVar18[1] = uVar20;
            uVar20 = *(undefined8 *)(piVar27 + 8);
            uVar3 = *(undefined8 *)(piVar27 + 10);
            puVar18[2] = uVar1;
            puVar18[3] = uVar2;
            uVar1 = *(undefined8 *)(piVar27 + 0xc);
            uVar2 = *(undefined8 *)(piVar27 + 0xe);
            puVar18[4] = uVar20;
            puVar18[5] = uVar3;
            uVar20 = *(undefined8 *)(piVar27 + 0x10);
            uVar3 = *(undefined8 *)(piVar27 + 0x12);
            puVar18[6] = uVar1;
            puVar18[7] = uVar2;
            uVar1 = *(undefined8 *)(piVar27 + 0x14);
            uVar2 = *(undefined8 *)(piVar27 + 0x16);
            puVar18[8] = uVar20;
            puVar18[9] = uVar3;
            uVar20 = *(undefined8 *)(piVar27 + 0x18);
            uVar3 = *(undefined8 *)(piVar27 + 0x1a);
            puVar18[10] = uVar1;
            puVar18[0xb] = uVar2;
            uVar1 = *(undefined8 *)(piVar27 + 0x1c);
            uVar2 = *(undefined8 *)(piVar27 + 0x1e);
            puVar18[0xc] = uVar20;
            puVar18[0xd] = uVar3;
            puVar18[0xe] = uVar1;
            puVar18[0xf] = uVar2;
            lVar23 = lVar23 + -1;
            puVar5 = puVar18 + 0x10;
            piVar26 = piVar27 + 0x20;
          } while (lVar23 != 0);
          uVar20 = *(undefined8 *)(piVar27 + 0x22);
          uVar1 = *(undefined8 *)(piVar27 + 0x24);
          uVar2 = *(undefined8 *)(piVar27 + 0x26);
          puVar18[0x10] = *(undefined8 *)(piVar27 + 0x20);
          puVar18[0x11] = uVar20;
          puVar18[0x12] = uVar1;
          puVar18[0x13] = uVar2;
          if ((DAT_180cd011e != '\0') &&
             (cVar6 = FUN_18028ff10(&DAT_1809f39b0,&local_1e8), cVar6 != '\0')) {
            iVar12 = FUN_180011200((ulonglong)DAT_180cfe60c + lVar16);
            iVar13 = FUN_1802935f0((undefined4)local_1e8);
            if ((iVar12 == iVar13) &&
               (iVar12 = FUN_180011200((ulonglong)DAT_180cfe5fc + lVar16), iVar12 == iStack_1e0))
            goto LAB_180294a7c;
          }
          UVar19 = GetTickCount64();
          if (UVar19 - _DAT_180cfe680 < 0xfa) goto LAB_180294a7c;
          if (DAT_180cd011e == '\0') {
LAB_1802948a3:
            cVar6 = '\x01';
            local_238 = '\x01';
LAB_1802948a9:
            DAT_180cfe670 = 0;
          }
          else {
            cVar6 = FUN_18028ff10(&DAT_1809f39b0,&local_1e8);
            if (cVar6 == '\0') goto LAB_1802948a3;
            cVar6 = '\0';
            local_238 = '\0';
            UVar19 = GetTickCount64();
            if (2000 < UVar19 - _DAT_180cfe680) goto LAB_1802948a9;
            DAT_180cfe670 = DAT_180cfe670 + 1;
          }
          _DAT_180cfe680 = GetTickCount64();
          if (DAT_180961e88 == 0) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = FUN_180011200(lVar16 + (ulonglong)DAT_180961e88);
          }
          uVar14 = 0xffffffff;
          if (DAT_180961e84 != 0) {
            uVar14 = FUN_180011200((ulonglong)DAT_180961e84 + lVar16);
          }
          local_250 = (char *)CONCAT44(local_250._4_4_,uVar11);
          local_258 = (undefined4 *)CONCAT44(local_258._4_4_,uVar14);
          FUN_18028fbf0("knife %08X | def %d | kit %d | applied | counts %d %d",uVar10,
                        (undefined4)local_1e8,iStack_1e0);
          if (cVar6 == '\0') {
            uVar8 = FUN_180011440((ulonglong)DAT_180cfe5d4 + (ulonglong)DAT_180cfe5d0 + lVar16);
            uVar11 = FUN_180011200((ulonglong)DAT_180cfe5fc + lVar16);
            uVar14 = FUN_1802935f0((undefined4)local_1e8);
            uVar15 = FUN_180011200((ulonglong)DAT_180cfe60c + lVar16);
            local_248 = (uint)uVar8;
            local_250 = (char *)CONCAT44(local_250._4_4_,iStack_1e0);
            local_258 = (undefined4 *)CONCAT44(local_258._4_4_,uVar11);
            FUN_18028fbf0("knife %08X | reapply because | subclass %08X want %08X | kit %d want %d | def %d"
                          ,uVar10,uVar15,uVar14);
            cVar6 = local_238;
          }
          lVar23 = 3;
          uVar20 = FUN_18000f3a0((ulonglong)DAT_180cfe638 + *local_228);
          FUN_180293830(lVar16,&local_1e8,uVar20);
          puVar5 = &local_1e8;
          puVar18 = (undefined8 *)&DAT_1809f39b0;
          do {
            puVar22 = puVar18;
            puVar21 = puVar5;
            uVar20 = puVar21[1];
            uVar1 = puVar21[2];
            uVar2 = puVar21[3];
            *puVar22 = *puVar21;
            puVar22[1] = uVar20;
            uVar20 = puVar21[4];
            uVar3 = puVar21[5];
            puVar22[2] = uVar1;
            puVar22[3] = uVar2;
            uVar1 = puVar21[6];
            uVar2 = puVar21[7];
            puVar22[4] = uVar20;
            puVar22[5] = uVar3;
            uVar20 = puVar21[8];
            uVar3 = puVar21[9];
            puVar22[6] = uVar1;
            puVar22[7] = uVar2;
            uVar1 = puVar21[10];
            uVar2 = puVar21[0xb];
            puVar22[8] = uVar20;
            puVar22[9] = uVar3;
            uVar20 = puVar21[0xc];
            uVar3 = puVar21[0xd];
            puVar22[10] = uVar1;
            puVar22[0xb] = uVar2;
            uVar1 = puVar21[0xe];
            uVar2 = puVar21[0xf];
            puVar22[0xc] = uVar20;
            puVar22[0xd] = uVar3;
            puVar22[0xe] = uVar1;
            puVar22[0xf] = uVar2;
            lVar23 = lVar23 + -1;
            puVar5 = puVar21 + 0x10;
            puVar18 = puVar22 + 0x10;
          } while (lVar23 != 0);
          uVar20 = puVar21[0x11];
          uVar1 = puVar21[0x12];
          uVar2 = puVar21[0x13];
          puVar22[0x10] = puVar21[0x10];
          puVar22[0x11] = uVar20;
          puVar22[0x12] = uVar1;
          puVar22[0x13] = uVar2;
          if ((cVar6 != '\0') || (DAT_180cfe670 < 4)) {
            _DAT_180cfe6ea = local_21e;
            _DAT_180cfe6ee = local_21a;
            _DAT_180cfe70e = local_1fa;
            _DAT_180cfe6e8 = 1;
            _DAT_180cfe6f0 = 0;
            _DAT_180cfe6f8 = 0;
            _DAT_180cfe700 = 0;
            _DAT_180cfe708 = 0;
            _DAT_180cfe70c = 0;
          }
LAB_180294a7c:
          plVar4 = local_230;
          if (DAT_180cd011e != '\0') {
            local_250 = "knife";
            local_258 = (undefined4 *)&local_1e8;
            local_248 = uVar10;
            cVar6 = FUN_180291e40(&DAT_180cfe6e8,lVar16,*local_230,local_237);
            if (cVar6 != '\0') {
              FUN_18028fd20(uVar10,lVar16);
            }
          }
          if (uVar10 != local_234) {
            return;
          }
          if (DAT_180cd011e == '\0') {
            return;
          }
          FUN_1802924f0(lVar16,*plVar4,iStack_1e0);
          return;
        }
      }
      uVar24 = uVar24 + 1;
    } while ((int)uVar24 < (int)uVar9);
  }
  return;
}



/* ===== 180294b20 FUN_180294b20 ===== */

undefined8 FUN_180294b20(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 extraout_XMM0_Da;
  
  uVar7 = DAT_180cfe63c;
  uVar4 = (ulonglong)DAT_180cfe63c;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  if (uVar7 != 0) {
    uVar3 = FUN_180011200(uVar4 + 8 + param_1);
    if ((uVar3 < 0x4001) &&
       ((lVar5 = FUN_18000f3a0(param_1 + 0x10 + (ulonglong)uVar7), uVar3 == 0 || (lVar5 != 0)))) {
      uVar4 = 0;
      if (0 < (int)uVar3) {
        do {
          cVar1 = FUN_180011220(lVar5 + 0x40 + uVar4 * 0x48);
          if (cVar1 == '\0') {
            sVar2 = FUN_180011440(lVar5 + 0x30 + uVar4 * 0x48);
            if (sVar2 == 6) {
              lVar6 = 0;
              cVar1 = *(char *)(param_2 + 1);
            }
            else if (sVar2 == 7) {
              cVar1 = *(char *)(param_2 + 3);
              lVar6 = 1;
            }
            else {
              if (sVar2 != 8) goto LAB_180294c3c;
              cVar1 = *(char *)(param_2 + 5);
              lVar6 = 2;
            }
            if (cVar1 == '\0') {
              FUN_18000f3d0(lVar5 + 0x34 + uVar4 * 0x48);
              param_2[lVar6 * 2] = extraout_XMM0_Da;
              *(undefined1 *)(param_2 + lVar6 * 2 + 1) = 1;
            }
          }
LAB_180294c3c:
          uVar7 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar7;
        } while ((int)uVar7 < (int)uVar3);
      }
      return 1;
    }
  }
  return 0;
}



/* ===== 180294c70 FUN_180294c70 ===== */

ulonglong FUN_180294c70(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  int local_20 [6];
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  piVar1 = (int *)FUN_180294b20(0,&local_38);
  if ((char)piVar1 != '\0') {
    piVar1 = (int *)(param_2 + 0xc);
    local_20[1] = 0x3f800000;
    local_20[0] = 0;
    piVar2 = local_20;
    if (0.0 <= *(float *)(param_2 + 0xc)) {
      piVar2 = piVar1;
    }
    piVar3 = local_20 + 1;
    if (*(float *)(param_2 + 0xc) <= DAT_1808ac34c) {
      piVar3 = piVar2;
    }
    if (local_38._4_1_ != '\0') {
      piVar1 = (int *)(ulonglong)(uint)(float)*(int *)(param_2 + 8);
      if (((float)local_38 == (float)*(int *)(param_2 + 8)) && (uStack_30._4_1_ != '\0')) {
        piVar1 = (int *)(ulonglong)(uint)(float)*(int *)(param_2 + 0x10);
        if (((float)uStack_30 == (float)*(int *)(param_2 + 0x10)) && (local_28._4_1_ != '\0')) {
          return (ulonglong)CONCAT31((int3)((uint)*piVar3 >> 8),(int)local_28 == *piVar3);
        }
      }
    }
  }
  return (ulonglong)piVar1 & 0xffffffffffffff00;
}



/* ===== 180294d90 FUN_180294d90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180294d90(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 local_res18 [8];
  
  uVar4 = (ulonglong)DAT_180cfe630;
  if (DAT_180cfe630 != 0) {
    uVar1 = FUN_180011220(param_1 + uVar4);
    local_res18[0] = 1;
    FUN_1800233d0(param_1 + uVar4,local_res18);
    DAT_180cd011d = 1;
    DAT_180cd031c = 0;
    _DAT_180cfe668 = GetTickCount64();
    if ((DAT_180cfe658 == 0) || (param_1 == 0)) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = FUN_180011200(param_1 + (ulonglong)DAT_180cfe658);
    }
    if (DAT_180cfe630 == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      bVar2 = FUN_180011220(param_1 + (ulonglong)DAT_180cfe630);
      uVar4 = (ulonglong)bVar2;
    }
    FUN_18028fbf0("gloves | %s | reapply flag %d -> %d | world gloves %08X",param_2,uVar1,uVar4,
                  uVar3);
  }
  return;
}



/* ===== 180294e60 FUN_180294e60 ===== */

void FUN_180294e60(longlong param_1)

{
  char cVar1;
  int iVar2;
  ULONGLONG UVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  longlong local_res10 [3];
  undefined1 local_28 [32];
  
  if ((DAT_180cfe630 != 0) &&
     (cVar1 = FUN_180011220(param_1 + (ulonglong)DAT_180cfe630), cVar1 == '\0')) {
    if ((DAT_180cfe658 != 0) &&
       (((param_1 != 0 && (iVar2 = FUN_180011200(param_1 + (ulonglong)DAT_180cfe658), iVar2 != -1))
        && (FUN_1803a0940(local_res10,iVar2), local_res10[0] != 0)))) {
      DAT_180cfe4a4 = 0;
      if (0x13 < DAT_180cfca54) {
        DAT_180cfe4a4 = 0;
        return;
      }
      UVar3 = GetTickCount64();
      if (UVar3 < DAT_180cfca58) {
        return;
      }
      pcVar4 = (char *)FUN_18021a550(local_28,param_1);
      if (*pcVar4 == '\0') {
        if (DAT_180cd031d == '\0') {
          FUN_18028fbf0(
                       "gloves | body group | first_or_third_person / thirdperson_hide_default_gloves not on this model, left to the game"
                       );
        }
        DAT_180cd031d = 1;
        return;
      }
      cVar1 = pcVar4[0x12];
      if (((cVar1 != '\0') && (pcVar4[0x10] == '\0')) && (pcVar4[0x11] == '\0')) {
        return;
      }
      DAT_180cfca94 = DAT_180cfca94 + 1;
      if (DAT_180cfca94 < 0x15) {
        pcVar7 = "not taken";
        if (cVar1 != '\0') {
          pcVar7 = "taken";
        }
        pcVar6 = "";
        pcVar5 = "not set";
        if (pcVar4[0x11] != '\0') {
          pcVar6 = ", committed";
        }
        if (pcVar4[0x10] != '\0') {
          pcVar5 = "set";
        }
        FUN_18028fbf0("gloves | body group first_or_third_person (%d) | %d -> %d thirdperson_hide_default_gloves | %s%s | %s"
                      ,*(undefined4 *)(pcVar4 + 4),*(undefined4 *)(pcVar4 + 0xc),
                      *(undefined4 *)(pcVar4 + 8),pcVar5,pcVar6,pcVar7);
      }
      else if (DAT_180cfca94 == 0x15) {
        FUN_18028fbf0(
                     "[error] gloves | body group keeps being reset (%d sets), further sets not logged"
                     );
      }
      if (cVar1 != '\0') {
        DAT_180cfca54 = 0;
        return;
      }
      UVar3 = GetTickCount64();
      DAT_180cfca58 = UVar3 + 500;
      DAT_180cfca54 = DAT_180cfca54 + 1;
      if (DAT_180cfca54 == 0x14) {
        FUN_18028fbf0("[error] gloves | body group not taken after %d attempts, stopped");
        return;
      }
      return;
    }
    if ((DAT_180cfe4a4 < 10) && (UVar3 = GetTickCount64(), DAT_180cfca40 <= UVar3)) {
      UVar3 = GetTickCount64();
      DAT_180cfca40 = UVar3 + 500;
      DAT_180cfe4a4 = DAT_180cfe4a4 + 1;
      if (DAT_180cfe4a4 == 10) {
        FUN_18028fbf0(
                     "[error] gloves | the game did not spawn the world gloves after %d requests, stopped"
                     );
      }
      FUN_180294d90(param_1,"world gloves missing");
      return;
    }
  }
  return;
}



/* ===== 180295090 FUN_180295090 ===== */

void FUN_180295090(void)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f3960);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f39ac == 0x7fffffff) {
    DAT_1809f39ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_180ccfedf = 0;
  FUN_1804e4e90(&DAT_1809f3960);
  return;
}



/* ===== 1802950f0 FUN_1802950f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802950f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  byte bStack_227;
  undefined4 uStack_224;
  byte bStack_209;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined1 uStack_194;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined1 local_14c;
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
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_180295090();
  _DAT_180cfcaa0 = CONCAT44(uStack_224,(uint)bStack_227 << 8);
  DAT_180cfcaa8 = 0;
  _DAT_180cfcab8 = (ulonglong)bStack_209 << 0x38;
  _DAT_180cfcab0 = 0;
  _DAT_180cfcad0 = 0;
  _DAT_180cfcad8 = 0;
  _DAT_180cfcaf0 = 0;
  uRam0000000180cfcaf8 = 0;
  _DAT_180cfcb10 = 0;
  uRam0000000180cfcb18 = 0;
  _DAT_180cfcac0 = 0;
  _DAT_180cfcac8 = 0;
  _DAT_180cfcae0 = 0;
  uRam0000000180cfcae8 = 0;
  _DAT_180cfcb00 = 0;
  uRam0000000180cfcb08 = 0;
  uStack_18c = 0;
  uStack_184 = 0;
  DAT_180cd0257 = 0;
  local_17c = 0;
  uStack_174 = 0;
  DAT_180cd0255 = 0;
  local_16c = 0;
  uStack_164 = 0;
  DAT_180cd0256 = 0;
  local_15c = 0;
  uStack_154 = 0;
  DAT_180cfe690 = 0;
  DAT_180cfca1c = 0;
  DAT_180cfca50 = 0;
  DAT_180cd0254 = 0;
  local_1a8 = 0;
  uStack_1a4 = 0xffffffff;
  uStack_1a0 = 0;
  uStack_19c = 0x3a83126f;
  uStack_194 = 0;
  uStack_190 = 0;
  local_14c = 0;
  local_148 = _DAT_1808adc30;
  uStack_140 = _UNK_1808adc38;
  local_138 = _DAT_1808adc30;
  uStack_130 = _UNK_1808adc38;
  local_128 = _DAT_1808adc30;
  uStack_120 = _UNK_1808adc38;
  local_118 = _DAT_1808adc30;
  uStack_110 = _UNK_1808adc38;
  local_108 = _DAT_1808adc30;
  uStack_100 = _UNK_1808adc38;
  local_f8 = _DAT_1808adc30;
  uStack_f0 = _UNK_1808adc38;
  local_e8 = _DAT_1808adc30;
  uStack_e0 = _UNK_1808adc38;
  local_d8 = _DAT_1808adc30;
  uStack_d0 = _UNK_1808adc38;
  FUN_180540170(&local_c8,0,0xa8);
  local_a8 = _DAT_1808ad310;
  uStack_a0 = _UNK_1808ad318;
  local_c8 = 0;
  local_c0 = 0x3f800000;
  local_b8 = 0;
  local_b0 = 0xffffffff;
  local_ac = 0;
  local_98 = 0;
  local_88 = _DAT_1808ad2c0;
  uStack_80 = _UNK_1808ad2c8;
  local_94 = 0xffffffff;
  lVar9 = 3;
  local_90 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_6c = 0x3f800000;
  local_64 = 0;
  local_5c = 0xffffffff;
  local_58 = 0;
  local_50 = 0x3f800000;
  local_48 = 0;
  local_40 = 0xffffffff;
  local_3c = 0;
  local_38 = _DAT_1808ad310;
  uStack_30 = _UNK_1808ad318;
  local_28 = 0;
  local_24 = 0xffffffff;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  puVar5 = (undefined8 *)&DAT_1809f37c0;
  puVar6 = (undefined8 *)&local_1a8;
  do {
    puVar8 = puVar6;
    puVar7 = puVar5;
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar1;
    uVar1 = puVar8[4];
    uVar4 = puVar8[5];
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar2 = puVar8[6];
    uVar3 = puVar8[7];
    puVar7[4] = uVar1;
    puVar7[5] = uVar4;
    uVar1 = puVar8[8];
    uVar4 = puVar8[9];
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    uVar2 = puVar8[10];
    uVar3 = puVar8[0xb];
    puVar7[8] = uVar1;
    puVar7[9] = uVar4;
    uVar1 = puVar8[0xc];
    uVar4 = puVar8[0xd];
    puVar7[10] = uVar2;
    puVar7[0xb] = uVar3;
    uVar2 = puVar8[0xe];
    uVar3 = puVar8[0xf];
    puVar7[0xc] = uVar1;
    puVar7[0xd] = uVar4;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = uVar3;
    lVar9 = lVar9 + -1;
    puVar5 = puVar7 + 0x10;
    puVar6 = puVar8 + 0x10;
  } while (lVar9 != 0);
  uVar1 = puVar8[0x11];
  DAT_180cfca48 = 0;
  uVar2 = puVar8[0x12];
  uVar3 = puVar8[0x13];
  DAT_180cd011d = 0;
  puVar7[0x10] = puVar8[0x10];
  puVar7[0x11] = uVar1;
  DAT_180cd031c = 0;
  puVar7[0x12] = uVar2;
  puVar7[0x13] = uVar3;
  DAT_180cfca40 = 0;
  DAT_180cfe4a4 = 0;
  DAT_180cfca58 = 0;
  DAT_180cfca54 = 0;
  DAT_180cfca94 = 0;
  DAT_180cd031d = 0;
  FUN_18028ef30();
  return;
}



