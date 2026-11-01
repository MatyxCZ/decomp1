/* ===== 180023a00 FUN_180023a00 ===== */

undefined8 * FUN_180023a00(undefined8 *param_1,undefined8 *param_2)

{
  if (param_2 + -0x2000 < (undefined8 *)0x7ffffffeffff) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    return param_1;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



/* ===== 180023a50 FUN_180023a50 ===== */

ulonglong FUN_180023a50(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 + -0x2000 < (undefined8 *)0x7ffffffeffff) {
    *param_1 = *param_2;
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 1) = uVar1;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return (ulonglong)(param_1 + -0x2000) & 0xffffffffffffff00;
}



/* ===== 180023a80 FUN_180023a80 ===== */

void FUN_180023a80(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1803d64e0(puVar1,0x20);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x20);
  return;
}



/* ===== 180023ae0 FUN_180023ae0 ===== */

void FUN_180023ae0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_180027bd0(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      thunk_FUN_1803d64e0(puVar1,0x20);
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



/* ===== 180023b90 FUN_180023b90 ===== */

undefined4 * FUN_180023b90(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 local_res10;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar4 = FUN_1804ecaa0(0x20);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(param_1 + 2) = lVar4;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  uVar2 = *(undefined8 *)(param_1 + 2);
  local_res10 = uVar2;
  if (0x7f < *(ulonglong *)(param_1 + 8)) {
    FUN_180026a10(0,*(ulonglong *)(param_1 + 8),&local_res10);
    return param_1;
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x80);
  puVar7 = auStack_28;
  puVar8 = auStack_28;
  lVar4 = *(longlong *)(param_1 + 6);
  if (*(longlong *)(param_1 + 10) - lVar4 == 0) goto LAB_180023c55;
  if ((ulonglong)((*(longlong *)(param_1 + 10) - lVar4 >> 3) * 8) < 0x1000) {
LAB_180023c4d:
    lVar6 = lVar4;
    puVar8 = puVar7;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar6) - 8U) {
      pcVar3 = (code *)swi(0x29);
      lVar4 = (*pcVar3)(5);
      puVar7 = auStack_20;
      goto LAB_180023c4d;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x180023c55;
  thunk_FUN_1803d64e0(lVar6);
LAB_180023c55:
  *(undefined8 **)(param_1 + 6) = puVar5;
  puVar1 = puVar5 + 0x10;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *(undefined8 **)(param_1 + 10) = puVar1;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    *puVar5 = uVar2;
  }
  return param_1;
}



/* ===== 180023ca0 FUN_180023ca0 ===== */

void FUN_180023ca0(ulonglong *param_1)

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
  *(undefined8 *)(puVar5 + -8) = 0x180023cf5;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180023d10 FUN_180023d10 ===== */

void FUN_180023d10(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1803d64e0(puVar1,0x28);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x28);
  return;
}



/* ===== 180023d70 FUN_180023d70 ===== */

void FUN_180023d70(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_180027e40(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      thunk_FUN_1803d64e0(puVar1,0x28);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_180026ac0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8);
  }
  return;
}



/* ===== 180023e20 FUN_180023e20 ===== */

void FUN_180023e20(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_18000f890(puVar1 + 2);
    thunk_FUN_1803d64e0(puVar1,0x38);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x38);
  return;
}



/* ===== 180023e90 FUN_180023e90 ===== */

undefined4 * FUN_180023e90(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 local_res10;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar4 = FUN_1804ecaa0(0x38);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(param_1 + 2) = lVar4;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  uVar2 = *(undefined8 *)(param_1 + 2);
  local_res10 = uVar2;
  if (0x7f < *(ulonglong *)(param_1 + 8)) {
    FUN_180026a10(0,*(ulonglong *)(param_1 + 8),&local_res10);
    return param_1;
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x80);
  puVar7 = auStack_28;
  puVar8 = auStack_28;
  lVar4 = *(longlong *)(param_1 + 6);
  if (*(longlong *)(param_1 + 10) - lVar4 == 0) goto LAB_180023f55;
  if ((ulonglong)((*(longlong *)(param_1 + 10) - lVar4 >> 3) * 8) < 0x1000) {
LAB_180023f4d:
    lVar6 = lVar4;
    puVar8 = puVar7;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar6) - 8U) {
      pcVar3 = (code *)swi(0x29);
      lVar4 = (*pcVar3)(5);
      puVar7 = auStack_20;
      goto LAB_180023f4d;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x180023f55;
  thunk_FUN_1803d64e0(lVar6);
LAB_180023f55:
  *(undefined8 **)(param_1 + 6) = puVar5;
  puVar1 = puVar5 + 0x10;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *(undefined8 **)(param_1 + 10) = puVar1;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    *puVar5 = uVar2;
  }
  return param_1;
}



/* ===== 180023fa0 FUN_180023fa0 ===== */

void FUN_180023fa0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1803d64e0(puVar1,0x20);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x20);
  return;
}



/* ===== 180024000 FUN_180024000 ===== */

void FUN_180024000(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_180028160(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      thunk_FUN_1803d64e0(puVar1,0x20);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_180026ac0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8);
  }
  return;
}



/* ===== 1800240b0 FUN_1800240b0 ===== */

void FUN_1800240b0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1803d64e0(puVar1,0x30);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x30);
  return;
}



/* ===== 180024110 FUN_180024110 ===== */

void FUN_180024110(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1800283d0(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      thunk_FUN_1803d64e0(puVar1,0x30);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_180026ac0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8);
  }
  return;
}



/* ===== 1800241c0 FUN_1800241c0 ===== */

void FUN_1800241c0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1803d64e0(puVar1,0x48);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x48);
  return;
}



/* ===== 180024220 FUN_180024220 ===== */

void FUN_180024220(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_180028640(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      thunk_FUN_1803d64e0(puVar1,0x48);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_180026ac0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8);
  }
  return;
}



/* ===== 1800242d0 FUN_1800242d0 ===== */

void FUN_1800242d0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 != (undefined8 *)param_1[2]) {
    *puVar6 = *param_2;
    param_1[1] = param_1[1] + 8;
    return;
  }
  uVar7 = 0x1fffffffffffffff;
  uVar9 = (longlong)puVar6 - *param_1;
  lVar3 = (longlong)uVar9 >> 3;
  if (lVar3 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar4 = param_1[2] - *param_1 >> 3;
  uVar1 = lVar3 + 1;
  if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar7 = uVar1;
    if (uVar1 <= uVar4) {
      uVar7 = uVar4;
    }
    if (0x1fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar3 = FUN_18000fb70(uVar7 * 8);
  uVar9 = uVar9 & 0xfffffffffffffff8;
  *(undefined8 *)(uVar9 + lVar3) = *param_2;
  puVar2 = (undefined8 *)*param_1;
  if (puVar6 == (undefined8 *)param_1[1]) {
    lVar8 = param_1[1] - (longlong)puVar2;
    lVar5 = lVar3;
    puVar6 = puVar2;
  }
  else {
    FUN_180540530(lVar3,puVar2,(longlong)puVar6 - (longlong)puVar2);
    lVar5 = uVar9 + 8 + lVar3;
    lVar8 = param_1[1] - (longlong)puVar6;
  }
  FUN_180540530(lVar5,puVar6,lVar8);
  FUN_18002b8d0(param_1,lVar3,uVar1,uVar7);
  return;
}



/* ===== 180024400 thunk_FUN_1800132b0 ===== */

void thunk_FUN_1800132b0(ulonglong *param_1)

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
  *(undefined8 *)(puVar5 + -8) = 0x180013305;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180024410 thunk_FUN_1800288b0 ===== */

void thunk_FUN_1800288b0(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x20) {
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  if (0xfff < (param_1[2] - lVar3 & 0xffffffffffffffe0U)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_180028921;
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar2 = lVar3;
  puVar5 = puVar4;
LAB_180028921:
  *(undefined8 *)(puVar5 + -8) = 0x180028926;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180024420 FUN_180024420 ===== */

void FUN_180024420(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = (undefined8 *)param_1[1];
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    FUN_1804e56f0(*puVar5);
  }
  lVar2 = *param_1;
  lVar4 = lVar2;
  if (0xfff < (ulonglong)((param_1[2] - lVar2 >> 3) * 8)) {
    lVar4 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar4) - 8U < 0x20) goto LAB_180024499;
    lVar4 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar6 = auStack_20;
  }
  puVar7 = puVar6;
LAB_180024499:
  *(undefined8 *)(puVar7 + -8) = 0x1800244a1;
  thunk_FUN_1803d64e0(lVar4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800244c0 FUN_1800244c0 ===== */

void FUN_1800244c0(longlong *param_1)

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
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  if (0xfff < (param_1[2] - lVar2 & 0xfffffffffffffff0U)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_180024506;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar3 = lVar2;
  puVar5 = puVar4;
LAB_180024506:
  *(undefined8 *)(puVar5 + -8) = 0x18002450b;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180024520 FUN_180024520 ===== */

longlong * FUN_180024520(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  short *psVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  short *psVar8;
  short *psVar9;
  longlong *plVar10;
  
  plVar6 = (longlong *)param_1[5];
  lVar1 = param_1[3];
  plVar10 = param_1 + 1;
  lVar2 = plVar6[2];
  plVar4 = plVar6;
  if ((ulonglong)plVar6[3] < 8) {
    plVar4 = param_1 + 5;
  }
  psVar3 = (short *)*plVar4;
  psVar8 = (short *)*param_1;
  if (psVar3 == psVar8) {
    *param_1 = (longlong)(psVar8 + lVar1);
    if ((ulonglong)plVar6[3] < 8) {
      plVar4 = plVar6;
    }
    else {
      plVar4 = (longlong *)*plVar6;
    }
    plVar6 = (longlong *)((longlong)plVar4 + plVar6[2] * 2);
    plVar5 = (longlong *)FUN_180013e50(plVar4);
    for (plVar7 = plVar5;
        (plVar7 != plVar6 && (((short)*plVar7 == 0x5c || ((short)*plVar7 == 0x2f))));
        plVar7 = (longlong *)((longlong)plVar7 + 2)) {
    }
    if ((plVar4 != plVar5) && (plVar5 != plVar7)) {
      FUN_1800277d0(plVar10,plVar5,(longlong)plVar7 - (longlong)plVar5 >> 1);
      return param_1;
    }
  }
  else {
    if (((*psVar8 == 0x5c) || (*psVar8 == 0x2f)) && (lVar1 == 0)) {
      *param_1 = (longlong)(psVar8 + 1);
      return param_1;
    }
    *param_1 = (longlong)(psVar8 + lVar1);
  }
  psVar3 = psVar3 + lVar2;
  psVar8 = (short *)*param_1;
  if ((short *)*param_1 != psVar3) {
    do {
      psVar9 = psVar8;
      if ((*psVar9 != 0x5c) && (*psVar9 != 0x2f)) goto LAB_180024670;
      psVar8 = psVar9 + 1;
      *param_1 = (longlong)psVar8;
    } while (psVar8 != psVar3);
    *param_1 = (longlong)psVar9;
  }
  param_1[3] = 0;
  if (7 < (ulonglong)param_1[4]) {
    plVar10 = (longlong *)*plVar10;
  }
  *(undefined2 *)plVar10 = 0;
  return param_1;
LAB_180024670:
  if (*psVar9 == 0x5c) {
LAB_180024689:
    FUN_1800277d0(plVar10,*param_1,(longlong)psVar9 - *param_1 >> 1);
    return param_1;
  }
  if ((*psVar9 == 0x2f) || (psVar9 = psVar9 + 1, psVar9 == psVar3)) goto LAB_180024689;
  goto LAB_180024670;
}



/* ===== 1800246b0 thunk_FUN_180028940 ===== */

void thunk_FUN_180028940(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x40) {
    FUN_18000f890(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  if (0xfff < (param_1[2] - lVar3 & 0xffffffffffffffc0U)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800289ba;
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar2 = lVar3;
  puVar5 = puVar4;
LAB_1800289ba:
  *(undefined8 *)(puVar5 + -8) = 0x1800289bf;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800246c0 FUN_1800246c0 ===== */

void FUN_1800246c0(undefined8 *param_1,ulonglong param_2,undefined2 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  undefined1 local_res8;
  
  uVar1 = param_1[2];
  if (param_2 <= uVar1) {
    param_1[2] = param_2;
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined2 *)((longlong)param_1 + param_2 * 2) = 0;
    return;
  }
  uVar2 = param_2 - uVar1;
  if (param_1[3] - uVar1 < uVar2) {
    FUN_180029680(param_1,uVar2,local_res8,uVar2,param_3);
    return;
  }
  param_1[2] = param_2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  puVar3 = (undefined2 *)((longlong)param_1 + uVar1 * 2);
  if (uVar2 != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = param_3;
      puVar3 = puVar3 + 1;
    }
  }
  *(undefined2 *)((longlong)param_1 + param_2 * 2) = 0;
  return;
}



/* ===== 180024750 FUN_180024750 ===== */

void FUN_180024750(ulonglong *param_1,undefined2 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar9 = param_1[2];
  uVar3 = param_1[3];
  if (uVar9 < uVar3) {
    param_1[2] = uVar9 + 1;
    if (7 < uVar3) {
      param_1 = (ulonglong *)*param_1;
    }
    *(undefined2 *)((longlong)param_1 + uVar9 * 2) = param_2;
    *(undefined2 *)((longlong)param_1 + uVar9 * 2 + 2) = 0;
    return;
  }
  uVar8 = 0x7ffffffffffffffe;
  if (uVar9 == 0x7ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  uVar6 = uVar9 + 1 | 7;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar2 = (uVar3 >> 1) + uVar3;
    uVar8 = uVar6;
    if (uVar6 < uVar2) {
      uVar8 = uVar2;
    }
    uVar6 = uVar8 + 1;
    if (0x7fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  else {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar6 = FUN_18000fb70(uVar6 * 2);
  param_1[3] = uVar8;
  lVar5 = uVar9 * 2;
  param_1[2] = uVar9 + 1;
  if (uVar3 < 8) {
    FUN_180540530(uVar6,param_1,lVar5);
    *(undefined2 *)(lVar5 + uVar6) = param_2;
    *(undefined2 *)(lVar5 + 2 + uVar6) = 0;
  }
  else {
    uVar9 = *param_1;
    FUN_180540530(uVar6,uVar9,lVar5);
    puVar7 = auStack_38;
    *(undefined2 *)(lVar5 + uVar6) = param_2;
    *(undefined2 *)(lVar5 + 2 + uVar6) = 0;
    if (0xfff < uVar3 * 2 + 2) {
      plVar1 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar1) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_1803d64e0(*plVar1,uVar3 * 2 + 0x29);
        goto LAB_1800248a9;
      }
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar7 = auStack_30;
    }
    *(undefined8 *)(puVar7 + -8) = 0x180024892;
    thunk_FUN_1803d64e0(uVar9);
  }
LAB_1800248a9:
  *param_1 = uVar6;
  return;
}



/* ===== 1800248e0 FUN_1800248e0 ===== */

longlong * FUN_1800248e0(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (param_1 != param_2) {
    if (7 < (ulonglong)param_1[3]) {
      puVar3 = auStack_28;
      if ((0xfff < param_1[3] * 2 + 2U) &&
         (puVar3 = auStack_28, 0x1f < (*param_1 - *(longlong *)(*param_1 + -8)) - 8U)) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar3 = auStack_20;
      }
      *(undefined8 *)(puVar3 + -8) = 0x180024940;
      thunk_FUN_1803d64e0();
    }
    param_1[3] = 7;
    param_1[2] = 0;
    *(undefined2 *)param_1 = 0;
    lVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar2;
    lVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar2;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
  }
  return param_1;
}



/* ===== 180024980 FUN_180024980 ===== */

undefined8 * FUN_180024980(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (uVar1 < 8) {
    param_1[2] = uVar1;
    param_1[3] = 7;
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    return param_1;
  }
  uVar2 = uVar1 | 7;
  uVar4 = 0x7ffffffffffffffe;
  if (uVar2 < 0x7fffffffffffffff) {
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    uVar4 = uVar2;
    if (0x7fffffffffffffff < uVar2 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  uVar3 = FUN_18000fb70(uVar4 * 2 + 2);
  *param_1 = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  FUN_180540530(uVar3,param_2,uVar1 * 2 + 2);
  return param_1;
}



/* ===== 180024a60 FUN_180024a60 ===== */

undefined8 *
FUN_180024a60(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if ((ulonglong)param_1[2] < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18002a1a0();
  }
  uVar1 = param_1[2] - param_3;
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  FUN_1800133a0(param_2,(longlong)param_1 + param_3,param_4);
  return param_2;
}



/* ===== 180024ac0 FUN_180024ac0 ===== */

void FUN_180024ac0(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_180029840(param_1,param_2,sVar1);
  return;
}



/* ===== 180024af0 FUN_180024af0 ===== */

undefined8 * FUN_180024af0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  return param_1;
}



/* ===== 180024b20 FUN_180024b20 ===== */

undefined8 * FUN_180024b20(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1800133a0();
  return param_1;
}



/* ===== 180024b50 FUN_180024b50 ===== */

undefined8 * FUN_180024b50(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (uVar1 < 0x10) {
    param_1[2] = uVar1;
    param_1[3] = 0xf;
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    return param_1;
  }
  uVar2 = uVar1 | 0xf;
  uVar4 = 0x7fffffffffffffff;
  if ((uVar2 < 0x8000000000000000) && (uVar4 = uVar2, uVar2 < 0x16)) {
    uVar4 = 0x16;
  }
  uVar3 = FUN_18000fb70(uVar4 + 1);
  *param_1 = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  FUN_180540530(uVar3,param_2,uVar1 + 1);
  return param_1;
}



/* ===== 180024c00 FUN_180024c00 ===== */

void FUN_180024c00(longlong param_1)

{
  FUN_1804e56f0(*(undefined8 *)(param_1 + 0x20));
  FUN_1800289e0(param_1);
  return;
}



/* ===== 180024c20 FUN_180024c20 ===== */

undefined8 * FUN_180024c20(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int extraout_var;
  ulonglong uVar6;
  
  uVar3 = FUN_1804e5000();
  uVar1 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  if (uVar1 != 0) {
    if (0x7fffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800139d0(0x16);
    }
    uVar2 = *param_2;
    uVar4 = FUN_1804e5080(uVar3,uVar2,uVar1 & 0xffffffff,0,0);
    if ((int)((ulonglong)uVar4 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013cb0();
    }
    uVar6 = (ulonglong)(int)uVar4;
    if ((ulonglong)param_1[2] < uVar6) {
      FUN_180028a50(param_1,uVar6 - param_1[2],0);
    }
    else {
      param_1[2] = uVar6;
      puVar5 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      *(undefined1 *)(uVar6 + (longlong)puVar5) = 0;
    }
    if ((ulonglong)param_1[3] < 0x10) {
      puVar5 = param_1;
    }
    else {
      puVar5 = (undefined8 *)*param_1;
    }
    FUN_1804e5080(uVar3,uVar2,uVar1 & 0xffffffff,puVar5,(int)uVar4);
    if (extraout_var != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013cb0(extraout_var);
    }
  }
  return param_1;
}



/* ===== 180024d40 FUN_180024d40 ===== */

void FUN_180024d40(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    FUN_180540530(param_1,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)param_1) = 0;
    return;
  }
  uVar1 = param_3 | 7;
  if (uVar1 < 0x7fffffffffffffff) {
    if (uVar1 < 10) {
      uVar1 = 10;
    }
    uVar3 = uVar1 + 1;
    if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  else {
    uVar3 = 0x7fffffffffffffff;
    uVar1 = 0x7ffffffffffffffe;
  }
  lVar2 = FUN_18000fb70(uVar3 * 2);
  param_1[2] = param_3;
  *param_1 = lVar2;
  param_1[3] = uVar1;
  FUN_180540530(lVar2,param_2,param_3 * 2);
  *(undefined2 *)(param_3 * 2 + lVar2) = 0;
  return;
}



/* ===== 180024e20 FUN_180024e20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_180024e20(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  undefined8 *****pppppuVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined1 auStack_198 [40];
  longlong *local_170;
  longlong *local_168;
  undefined8 *****local_158 [2];
  longlong *local_148;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong local_118;
  undefined8 *****local_110 [2];
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 *****local_e0 [2];
  undefined8 local_d0;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0 [32];
  longlong local_90;
  longlong local_88;
  undefined1 local_80 [32];
  longlong local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_198;
  local_120 = param_5;
  lVar2 = param_2[5];
  local_e8 = *param_2;
  pppppuVar1 = (undefined8 *****)(param_2 + 1);
  local_170 = param_4;
  local_148 = param_1;
  local_138 = param_2;
  local_130 = param_3;
  local_128 = param_4;
  FUN_180024980(local_e0,pppppuVar1);
  lVar3 = param_3[5];
  local_88 = *param_3;
  local_168 = param_3 + 1;
  local_c0 = lVar2;
  FUN_180024980(local_80,local_168);
  lVar2 = param_4[5];
  local_118 = *param_4;
  pppppuVar8 = (undefined8 *****)(param_4 + 1);
  local_60 = lVar3;
  FUN_180024980(local_110,pppppuVar8);
  lVar3 = param_5[5];
  local_b8 = *param_5;
  local_f0 = lVar2;
  FUN_180024980(local_b0,param_5 + 1);
  lVar5 = local_88;
  lVar2 = local_b8;
  local_90 = lVar3;
  while ((local_e8 != lVar5 && (local_118 != lVar2))) {
    local_158[0] = local_110;
    if (7 < local_f8) {
      local_158[0] = local_110[0];
    }
    iVar6 = FUN_180014140(local_e0,local_158);
    if (iVar6 != 0) break;
    FUN_180027990(&local_e8);
    FUN_180027990(&local_118);
  }
  plVar4 = local_170;
  *local_170 = local_118;
  if ((undefined8 ******)pppppuVar8 != local_110) {
    pppppuVar7 = local_110;
    if (7 < local_f8) {
      pppppuVar7 = local_110[0];
    }
    FUN_1800277d0(pppppuVar8,pppppuVar7,local_100);
  }
  *param_2 = local_e8;
  if ((undefined8 ******)pppppuVar1 != local_e0) {
    pppppuVar7 = local_e0;
    if (7 < local_c8) {
      pppppuVar7 = local_e0[0];
    }
    FUN_1800277d0(pppppuVar1,pppppuVar7,local_d0);
  }
  *param_1 = *param_2;
  FUN_180024980(param_1 + 1,pppppuVar1);
  param_1[5] = param_2[5];
  param_1[6] = *plVar4;
  FUN_180024980(param_1 + 7,pppppuVar8);
  param_1[0xb] = plVar4[5];
  FUN_1800289e0(local_b0);
  FUN_1800289e0(local_110);
  FUN_1800289e0(local_80);
  FUN_1800289e0(local_e0);
  FUN_1800289e0(pppppuVar1);
  FUN_1800289e0(local_168);
  FUN_1800289e0(pppppuVar8);
  FUN_1800289e0(param_5 + 1);
  return param_1;
}



/* ===== 180025060 FUN_180025060 ===== */

ulonglong *
FUN_180025060(ulonglong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar10 = param_1[3];
  uVar8 = param_1[2];
  if (param_4 <= uVar10 - uVar8) {
    param_1[2] = param_4 + uVar8;
    if (uVar10 < 8) {
      puVar11 = param_1;
    }
    else {
      puVar11 = (ulonglong *)*param_1;
    }
    if ((puVar11 < (ulonglong *)((longlong)param_3 + param_4 * 2)) &&
       (param_3 <= (ulonglong *)((longlong)puVar11 + uVar8 * 2))) {
      if (param_3 < puVar11) {
        uVar10 = (longlong)puVar11 - (longlong)param_3 >> 1;
      }
      else {
        uVar10 = 0;
      }
    }
    else {
      uVar10 = param_4;
    }
    FUN_180540530((longlong)puVar11 + param_4 * 2,puVar11,uVar8 * 2 + 2);
    FUN_180540530(puVar11,param_3,uVar10 * 2);
    FUN_180540530(uVar10 * 2 + (longlong)puVar11,(longlong)param_3 + (uVar10 + param_4) * 2,
                  (param_4 - uVar10) * 2);
    return param_1;
  }
  uVar7 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar8 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  uVar6 = param_4 + uVar8 | 7;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar10 <= 0x7ffffffffffffffe - (uVar10 >> 1))) {
    uVar2 = (uVar10 >> 1) + uVar10;
    uVar7 = uVar6;
    if (uVar6 < uVar2) {
      uVar7 = uVar2;
    }
    uVar6 = uVar7 + 1;
    if (0x7fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  else {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar6 = FUN_18000fb70(uVar6 * 2);
  param_1[2] = param_4 + uVar8;
  param_1[3] = uVar7;
  lVar4 = uVar8 * 2 + 2;
  lVar3 = param_4 * 2 + uVar6;
  if (uVar10 < 8) {
    FUN_180540530(uVar6,param_3);
    FUN_180540530(lVar3,param_1,lVar4);
  }
  else {
    uVar8 = *param_1;
    FUN_180540530(uVar6,param_3);
    FUN_180540530(lVar3,uVar8,lVar4);
    puVar9 = auStack_48;
    if (0xfff < uVar10 * 2 + 2) {
      plVar1 = (longlong *)(uVar8 - 8);
      uVar8 = (uVar8 - *plVar1) - 8;
      if (uVar8 < 0x20) {
        thunk_FUN_1803d64e0(*plVar1,uVar10 * 2 + 0x29);
        goto LAB_180025224;
      }
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar9 = auStack_40;
    }
    *(undefined8 *)(puVar9 + -8) = 0x18002520f;
    thunk_FUN_1803d64e0(uVar8);
  }
LAB_180025224:
  *param_1 = uVar6;
  return param_1;
}



/* ===== 180025260 FUN_180025260 ===== */

ulonglong * FUN_180025260(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar5 = param_1[3];
  uVar11 = param_1[2];
  if (param_3 <= uVar5 - uVar11) {
    param_1[2] = uVar11 + param_3;
    if (uVar5 < 8) {
      puVar9 = param_1;
    }
    else {
      puVar9 = (ulonglong *)*param_1;
    }
    FUN_180540530((longlong)puVar9 + uVar11 * 2,param_2,param_3 * 2);
    *(undefined2 *)((longlong)puVar9 + (uVar11 + param_3) * 2) = 0;
    return param_1;
  }
  uVar10 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar11 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  uVar2 = uVar11 + param_3;
  uVar7 = uVar2 | 7;
  if ((uVar7 < 0x7fffffffffffffff) && (uVar5 <= 0x7ffffffffffffffe - (uVar5 >> 1))) {
    uVar3 = (uVar5 >> 1) + uVar5;
    uVar10 = uVar7;
    if (uVar7 < uVar3) {
      uVar10 = uVar3;
    }
    uVar7 = uVar10 + 1;
    if (0x7fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  else {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar7 = FUN_18000fb70(uVar7 * 2);
  param_1[2] = uVar2;
  param_1[3] = uVar10;
  lVar4 = uVar11 * 2 + uVar7;
  if (uVar5 < 8) {
    FUN_180540530(uVar7,param_1);
    FUN_180540530(lVar4,param_2,param_3 * 2);
    *(undefined2 *)(uVar7 + uVar2 * 2) = 0;
  }
  else {
    uVar11 = *param_1;
    FUN_180540530(uVar7,uVar11);
    FUN_180540530(lVar4,param_2,param_3 * 2);
    puVar8 = auStack_48;
    *(undefined2 *)(uVar7 + uVar2 * 2) = 0;
    if (0xfff < uVar5 * 2 + 2) {
      plVar1 = (longlong *)(uVar11 - 8);
      uVar11 = (uVar11 - *plVar1) - 8;
      if (uVar11 < 0x20) {
        thunk_FUN_1803d64e0(*plVar1,uVar5 * 2 + 0x29);
        goto LAB_1800253d5;
      }
      pcVar6 = (code *)swi(0x29);
      (*pcVar6)(5);
      puVar8 = auStack_40;
    }
    *(undefined8 *)(puVar8 + -8) = 0x1800253b6;
    thunk_FUN_1803d64e0(uVar11);
  }
LAB_1800253d5:
  *param_1 = uVar7;
  return param_1;
}



/* ===== 180025410 FUN_180025410 ===== */

undefined8 * FUN_180025410(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(DAT_180cc3f30 & uVar7);
  puVar3 = *(undefined8 **)(DAT_180cc3f18 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_180cc3f08;
  if (puVar3 != DAT_180cc3f08) {
    puVar6 = *(undefined8 **)(DAT_180cc3f18 + (longlong)puVar6 * 0x10);
    lVar4 = puVar3[2];
    puVar8 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar4 = puVar8[2];
    }
  }
  if (DAT_180cc3f10 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x20,puVar6,DAT_180cc3f18,param_4,&DAT_180cc3f08,0);
  puVar3[2] = *(undefined8 *)param_3;
  *(undefined2 *)(puVar3 + 3) = 0;
  uVar2 = DAT_180cc3f38;
  if (DAT_180cc3f00 < (float)(DAT_180cc3f10 + 1) / (float)DAT_180cc3f38) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180cc3f10 + 1) / DAT_180cc3f00);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar9 = uVar2;
    if ((uVar2 < uVar5) && ((0x1ff < uVar2 || (uVar9 = uVar2 * 8, uVar2 * 8 < uVar5)))) {
      uVar9 = uVar5;
    }
    FUN_18002b4d0(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_180cc3f18 + 8 + (DAT_180cc3f30 & uVar7) * 0x10);
    puVar8 = DAT_180cc3f08;
    if (puVar6 != DAT_180cc3f08) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_180cc3f18 + (DAT_180cc3f30 & uVar7) * 0x10))
        goto LAB_180025679;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_180025679:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_180cc3f10 = DAT_180cc3f10 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_180cc3f18;
  uVar7 = DAT_180cc3f30 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180cc3f18 + uVar7 * 0x10);
  if (puVar1 == DAT_180cc3f08) {
    *(undefined8 **)(DAT_180cc3f18 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_180cc3f18 + uVar7 * 0x10) = puVar3;
      goto LAB_1800256d8;
    }
    if (*(undefined8 **)(DAT_180cc3f18 + 8 + uVar7 * 0x10) != puVar6) goto LAB_1800256d8;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_1800256d8:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180025700 FUN_180025700 ===== */

undefined8 * FUN_180025700(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(DAT_180cc3fd0 & uVar7);
  puVar3 = *(undefined8 **)(DAT_180cc3fb8 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_180cc3fa8;
  if (puVar3 != DAT_180cc3fa8) {
    puVar6 = *(undefined8 **)(DAT_180cc3fb8 + (longlong)puVar6 * 0x10);
    lVar4 = puVar3[2];
    puVar8 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar4 = puVar8[2];
    }
  }
  if (DAT_180cc3fb0 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x48,puVar6,DAT_180cc3fb8,param_4,&DAT_180cc3fa8,0);
  puVar3[2] = *(undefined8 *)param_3;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x3c) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
  uVar2 = DAT_180cc3fd8;
  if (DAT_180cc3fa0 < (float)(DAT_180cc3fb0 + 1) / (float)DAT_180cc3fd8) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180cc3fb0 + 1) / DAT_180cc3fa0);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar9 = uVar2;
    if ((uVar2 < uVar5) && ((0x1ff < uVar2 || (uVar9 = uVar2 * 8, uVar2 * 8 < uVar5)))) {
      uVar9 = uVar5;
    }
    FUN_18002b6d0(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_180cc3fb8 + 8 + (DAT_180cc3fd0 & uVar7) * 0x10);
    puVar8 = DAT_180cc3fa8;
    if (puVar6 != DAT_180cc3fa8) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_180cc3fb8 + (DAT_180cc3fd0 & uVar7) * 0x10))
        goto LAB_18002597c;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_18002597c:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_180cc3fb0 = DAT_180cc3fb0 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_180cc3fb8;
  uVar7 = DAT_180cc3fd0 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180cc3fb8 + uVar7 * 0x10);
  if (puVar1 == DAT_180cc3fa8) {
    *(undefined8 **)(DAT_180cc3fb8 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_180cc3fb8 + uVar7 * 0x10) = puVar3;
      goto LAB_1800259db;
    }
    if (*(undefined8 **)(DAT_180cc3fb8 + 8 + uVar7 * 0x10) != puVar6) goto LAB_1800259db;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_1800259db:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180025a00 FUN_180025a00 ===== */

undefined8 * FUN_180025a00(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(DAT_180cc40d0 & uVar7);
  puVar3 = *(undefined8 **)(DAT_180cc40b8 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_180cc40a8;
  if (puVar3 != DAT_180cc40a8) {
    puVar6 = *(undefined8 **)(DAT_180cc40b8 + (longlong)puVar6 * 0x10);
    lVar4 = puVar3[2];
    puVar8 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar4 = puVar8[2];
    }
  }
  if (DAT_180cc40b0 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x20,puVar6,DAT_180cc40b8,param_4,&DAT_180cc40a8,0);
  puVar3[2] = *(undefined8 *)param_3;
  puVar3[3] = 0;
  uVar2 = DAT_180cc40d8;
  if (DAT_180cc40a0 < (float)(DAT_180cc40b0 + 1) / (float)DAT_180cc40d8) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180cc40b0 + 1) / DAT_180cc40a0);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar9 = uVar2;
    if ((uVar2 < uVar5) && ((0x1ff < uVar2 || (uVar9 = uVar2 * 8, uVar2 * 8 < uVar5)))) {
      uVar9 = uVar5;
    }
    FUN_18002b2d0(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_180cc40b8 + 8 + (DAT_180cc40d0 & uVar7) * 0x10);
    puVar8 = DAT_180cc40a8;
    if (puVar6 != DAT_180cc40a8) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_180cc40b8 + (DAT_180cc40d0 & uVar7) * 0x10))
        goto LAB_180025c69;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_180025c69:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_180cc40b0 = DAT_180cc40b0 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_180cc40b8;
  uVar7 = DAT_180cc40d0 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180cc40b8 + uVar7 * 0x10);
  if (puVar1 == DAT_180cc40a8) {
    *(undefined8 **)(DAT_180cc40b8 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_180cc40b8 + uVar7 * 0x10) = puVar3;
      goto LAB_180025cc8;
    }
    if (*(undefined8 **)(DAT_180cc40b8 + 8 + uVar7 * 0x10) != puVar6) goto LAB_180025cc8;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_180025cc8:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180025cf0 FUN_180025cf0 ===== */

undefined8 * FUN_180025cf0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(DAT_180cc3ef0 & uVar7);
  puVar3 = *(undefined8 **)(DAT_180cc3ed8 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_180cc3ec8;
  if (puVar3 != DAT_180cc3ec8) {
    puVar6 = *(undefined8 **)(DAT_180cc3ed8 + (longlong)puVar6 * 0x10);
    lVar4 = puVar3[2];
    puVar8 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar4 = puVar8[2];
    }
  }
  if (DAT_180cc3ed0 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x30,puVar6,DAT_180cc3ed8,param_4,&DAT_180cc3ec8,0);
  puVar3[2] = *(undefined8 *)param_3;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  uVar2 = DAT_180cc3ef8;
  if (DAT_180cc3ec0 < (float)(DAT_180cc3ed0 + 1) / (float)DAT_180cc3ef8) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180cc3ed0 + 1) / DAT_180cc3ec0);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar9 = uVar2;
    if ((uVar2 < uVar5) && ((0x1ff < uVar2 || (uVar9 = uVar2 * 8, uVar2 * 8 < uVar5)))) {
      uVar9 = uVar5;
    }
    FUN_18002b0d0(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_180cc3ed8 + 8 + (DAT_180cc3ef0 & uVar7) * 0x10);
    puVar8 = DAT_180cc3ec8;
    if (puVar6 != DAT_180cc3ec8) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_180cc3ed8 + (DAT_180cc3ef0 & uVar7) * 0x10))
        goto LAB_180025f59;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_180025f59:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_180cc3ed0 = DAT_180cc3ed0 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_180cc3ed8;
  uVar7 = DAT_180cc3ef0 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180cc3ed8 + uVar7 * 0x10);
  if (puVar1 == DAT_180cc3ec8) {
    *(undefined8 **)(DAT_180cc3ed8 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_180cc3ed8 + uVar7 * 0x10) = puVar3;
      goto LAB_180025fb8;
    }
    if (*(undefined8 **)(DAT_180cc3ed8 + 8 + uVar7 * 0x10) != puVar6) goto LAB_180025fb8;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_180025fb8:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180025fe0 FUN_180025fe0 ===== */

undefined8 * FUN_180025fe0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(DAT_180cc3f70 & uVar7);
  puVar3 = *(undefined8 **)(DAT_180cc3f58 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_180cc3f48;
  if (puVar3 != DAT_180cc3f48) {
    puVar6 = *(undefined8 **)(DAT_180cc3f58 + (longlong)puVar6 * 0x10);
    lVar4 = puVar3[2];
    puVar8 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar4 = puVar8[2];
    }
  }
  if (DAT_180cc3f50 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x28,puVar6,DAT_180cc3f58,param_4,&DAT_180cc3f48,0);
  puVar3[2] = *(undefined8 *)param_3;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  uVar2 = DAT_180cc3f78;
  if (DAT_180cc3f40 < (float)(DAT_180cc3f50 + 1) / (float)DAT_180cc3f78) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180cc3f50 + 1) / DAT_180cc3f40);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar9 = uVar2;
    if ((uVar2 < uVar5) && ((0x1ff < uVar2 || (uVar9 = uVar2 * 8, uVar2 * 8 < uVar5)))) {
      uVar9 = uVar5;
    }
    FUN_18002aed0(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_180cc3f58 + 8 + (DAT_180cc3f70 & uVar7) * 0x10);
    puVar8 = DAT_180cc3f48;
    if (puVar6 != DAT_180cc3f48) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_180cc3f58 + (DAT_180cc3f70 & uVar7) * 0x10))
        goto LAB_180026249;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_180026249:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_180cc3f50 = DAT_180cc3f50 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_180cc3f58;
  uVar7 = DAT_180cc3f70 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180cc3f58 + uVar7 * 0x10);
  if (puVar1 == DAT_180cc3f48) {
    *(undefined8 **)(DAT_180cc3f58 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_180cc3f58 + uVar7 * 0x10) = puVar3;
      goto LAB_1800262a8;
    }
    if (*(undefined8 **)(DAT_180cc3f58 + 8 + uVar7 * 0x10) != puVar6) goto LAB_1800262a8;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_1800262a8:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1800262d0 FUN_1800262d0 ===== */

undefined8 * FUN_1800262d0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(DAT_180cc4010 & uVar7);
  puVar3 = *(undefined8 **)(DAT_180cc3ff8 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_180cc3fe8;
  if (puVar3 != DAT_180cc3fe8) {
    puVar6 = *(undefined8 **)(DAT_180cc3ff8 + (longlong)puVar6 * 0x10);
    lVar4 = puVar3[2];
    puVar8 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar4 = puVar8[2];
    }
  }
  if (DAT_180cc3ff0 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x20,puVar6,DAT_180cc3ff8,param_4,&DAT_180cc3fe8,0);
  puVar3[2] = *(undefined8 *)param_3;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 3) = 0x3f800000;
  uVar2 = DAT_180cc4018;
  if (DAT_180cc3fe0 < (float)(DAT_180cc3ff0 + 1) / (float)DAT_180cc4018) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180cc3ff0 + 1) / DAT_180cc3fe0);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar9 = uVar2;
    if ((uVar2 < uVar5) && ((0x1ff < uVar2 || (uVar9 = uVar2 * 8, uVar2 * 8 < uVar5)))) {
      uVar9 = uVar5;
    }
    FUN_18002acd0(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_180cc3ff8 + 8 + (DAT_180cc4010 & uVar7) * 0x10);
    puVar8 = DAT_180cc3fe8;
    if (puVar6 != DAT_180cc3fe8) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_180cc3ff8 + (DAT_180cc4010 & uVar7) * 0x10))
        goto LAB_180026539;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_180026539:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_180cc3ff0 = DAT_180cc3ff0 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_180cc3ff8;
  uVar7 = DAT_180cc4010 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180cc3ff8 + uVar7 * 0x10);
  if (puVar1 == DAT_180cc3fe8) {
    *(undefined8 **)(DAT_180cc3ff8 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_180cc3ff8 + uVar7 * 0x10) = puVar3;
      goto LAB_180026598;
    }
    if (*(undefined8 **)(DAT_180cc3ff8 + 8 + uVar7 * 0x10) != puVar6) goto LAB_180026598;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_180026598:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1800265c0 FUN_1800265c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800265c0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  lVar3 = param_2 - param_1;
  while( true ) {
    if (lVar3 >> 6 < 0x21) {
      FUN_180028c50(param_1,param_2);
      return;
    }
    lVar3 = param_2 - param_1 >> 7;
    if (param_3 < 1) break;
    lVar3 = lVar3 * 0x40 + param_1;
    FUN_18002a360(param_1,lVar3,param_2 + -0x40,param_4);
    FUN_18002a580(&local_98,param_1,lVar3,param_2);
    lVar3 = local_90;
    lVar5 = local_98;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (local_98 - param_1 >> 6 < param_2 - local_90 >> 6) {
      FUN_1800265c0(param_1,local_98,param_3,param_4);
      param_1 = lVar3;
      lVar5 = param_2;
    }
    else {
      FUN_1800265c0(local_90,param_2,param_3,param_4);
    }
    lVar3 = lVar5 - param_1;
    param_2 = lVar5;
  }
  lVar5 = param_2 - param_1 >> 6;
  while (0 < lVar3) {
    lVar4 = lVar3 * 0x40;
    lVar3 = lVar3 + -1;
    puVar2 = (undefined8 *)(lVar4 + -0x40 + param_1);
    local_88 = *puVar2;
    uStack_80 = puVar2[1];
    puVar2 = (undefined8 *)(lVar4 + -0x30 + param_1);
    local_78 = *puVar2;
    uStack_70 = puVar2[1];
    *(undefined1 *)(lVar4 + -0x40 + param_1) = 0;
    *(undefined8 *)(lVar4 + -0x30 + param_1) = 0;
    *(undefined8 *)(lVar4 + -0x28 + param_1) = 0xf;
    local_68 = *(undefined8 *)(lVar4 + -0x20 + param_1);
    local_50 = *(undefined8 *)(lVar4 + -8 + param_1);
    puVar2 = (undefined8 *)(lVar4 + -0x18 + param_1);
    uStack_60 = *puVar2;
    uStack_58 = *(undefined4 *)(puVar2 + 1);
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 0xc);
    *(undefined1 *)(lVar4 + -0x20 + param_1) = 0;
    *(undefined8 *)(lVar4 + -0x10 + param_1) = 0;
    *(undefined8 *)(lVar4 + -8 + param_1) = 0xf;
    local_a8 = param_4;
    FUN_18002a1f0(param_1,lVar3,lVar5,&local_88);
    FUN_18000f890(&local_68);
    FUN_18000f890(&local_88);
  }
  if (lVar5 < 2) {
    return;
  }
  do {
    if (1 < param_2 - param_1 >> 6) {
      local_88 = *(undefined8 *)(param_2 + -0x40);
      uStack_80 = *(undefined8 *)(param_2 + -0x38);
      puVar1 = (undefined1 *)(param_2 + -0x40);
      local_78 = *(undefined8 *)(param_2 + -0x30);
      uStack_70 = *(undefined8 *)(param_2 + -0x28);
      *puVar1 = 0;
      *(undefined8 *)(param_2 + -0x30) = 0;
      *(undefined8 *)(param_2 + -0x28) = 0xf;
      local_68 = *(undefined8 *)(param_2 + -0x20);
      local_50 = *(undefined8 *)(param_2 + -8);
      uStack_60 = *(undefined8 *)(param_2 + -0x18);
      uStack_58 = *(undefined4 *)(param_2 + -0x10);
      uStack_54 = *(undefined4 *)(param_2 + -0xc);
      *(undefined1 *)(param_2 + -0x20) = 0;
      *(undefined8 *)(param_2 + -0x10) = 0;
      *(undefined8 *)(param_2 + -8) = 0xf;
      FUN_18002ba60(puVar1,param_1);
      FUN_18002ba60(param_2 + -0x20,param_1 + 0x20);
      local_a8 = param_4;
      FUN_18002a1f0(param_1,0,(longlong)puVar1 - param_1 >> 6,&local_88);
      FUN_18000f890(&local_68);
      FUN_18000f890(&local_88);
    }
    param_2 = param_2 + -0x40;
  } while (0x7f < param_2 - param_1);
  return;
}



/* ===== 1800268a0 FUN_1800268a0 ===== */

longlong * FUN_1800268a0(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  longlong *_Buf2;
  longlong *plVar4;
  
  param_4 = *(ulonglong *)(param_1 + 0x30) & param_4;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + param_4 * 0x10);
  if (plVar4 == *(longlong **)(param_1 + 8)) {
    *param_2 = (longlong)*(longlong **)(param_1 + 8);
    param_2[1] = 0;
    return param_2;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + param_4 * 0x10);
  _Size = param_3[2];
  uVar2 = param_3[3];
  while( true ) {
    _Buf2 = plVar4 + 2;
    if (0xf < (ulonglong)plVar4[5]) {
      _Buf2 = (longlong *)*_Buf2;
    }
    if (uVar2 < 0x10) {
      _Buf1 = param_3;
    }
    else {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == plVar4[4]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0))))
    break;
    if (plVar4 == plVar1) {
      *param_2 = (longlong)plVar4;
      param_2[1] = 0;
      return param_2;
    }
    plVar4 = (longlong *)plVar4[1];
  }
  *param_2 = *plVar4;
  param_2[1] = (longlong)plVar4;
  return param_2;
}



/* ===== 180026970 FUN_180026970 ===== */

undefined8 * FUN_180026970(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t _Size;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar1 = param_3[3];
  sVar2 = param_3[2];
  do {
    if (uVar1 < 0x10) {
      _Buf2 = param_3;
    }
    else {
      _Buf2 = (undefined8 *)*param_3;
    }
    _Size = param_1[2];
    if ((ulonglong)param_1[3] < 0x10) {
      _Buf1 = param_1;
    }
    else {
      _Buf1 = (undefined8 *)*param_1;
    }
    if (_Size == sVar2) {
      if (_Size == 0) {
        return param_1;
      }
      iVar3 = memcmp(_Buf1,_Buf2,_Size);
      if (iVar3 == 0) {
        return param_1;
      }
    }
    param_1 = param_1 + 4;
    if (param_1 == param_2) {
      return param_1;
    }
  } while( true );
}



/* ===== 180026a10 FUN_180026a10 ===== */

void FUN_180026a10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar3 = (longlong)param_2 + (7 - (longlong)param_1);
  uVar2 = uVar3 >> 3;
  if (param_2 < param_1) {
    uVar2 = 0;
  }
  puVar4 = param_1;
  if (1 < uVar2) {
    uVar2 = uVar3 & 0xfffffffffffffff8;
    if (param_2 < param_1) {
      uVar2 = 0;
    }
    if ((param_3 < param_1) || ((undefined8 *)((longlong)param_1 + (uVar2 - 8)) < param_3)) {
      uVar1 = *param_3;
      uVar3 = uVar3 & 0xfffffffffffffff0;
      if (param_2 < param_1) {
        uVar3 = 0;
      }
      puVar4 = (undefined8 *)((longlong)param_1 + uVar3);
      for (uVar3 = uVar3 / 8; uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_1 = uVar1;
        param_1 = param_1 + 1;
      }
    }
  }
  for (; puVar4 != param_2; puVar4 = puVar4 + 1) {
    *puVar4 = *param_3;
  }
  return;
}



/* ===== 180026ac0 FUN_180026ac0 ===== */

void FUN_180026ac0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar3 = (longlong)param_2 + (7 - (longlong)param_1);
  uVar2 = uVar3 >> 3;
  if (param_2 < param_1) {
    uVar2 = 0;
  }
  puVar4 = param_1;
  if (1 < uVar2) {
    uVar2 = uVar3 & 0xfffffffffffffff8;
    if (param_2 < param_1) {
      uVar2 = 0;
    }
    if ((param_3 < param_1) || ((undefined8 *)((longlong)param_1 + (uVar2 - 8)) < param_3)) {
      uVar1 = *param_3;
      uVar3 = uVar3 & 0xfffffffffffffff0;
      if (param_2 < param_1) {
        uVar3 = 0;
      }
      puVar4 = (undefined8 *)((longlong)param_1 + uVar3);
      for (uVar3 = uVar3 / 8; uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_1 = uVar1;
        param_1 = param_1 + 1;
      }
    }
  }
  for (; puVar4 != param_2; puVar4 = puVar4 + 1) {
    *puVar4 = *param_3;
  }
  return;
}



/* ===== 180026b70 FUN_180026b70 ===== */

undefined8 * FUN_180026b70(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(DAT_180cc3eb0 & uVar7);
  puVar3 = *(undefined8 **)(DAT_180cc3e98 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_180cc3e88;
  if (puVar3 != DAT_180cc3e88) {
    puVar6 = *(undefined8 **)(DAT_180cc3e98 + (longlong)puVar6 * 0x10);
    lVar4 = puVar3[2];
    puVar8 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar4 = puVar8[2];
    }
  }
  if (DAT_180cc3e90 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x28,puVar6,DAT_180cc3e98,param_4,&DAT_180cc3e88,0);
  puVar3[2] = *(undefined8 *)param_3;
  puVar3[3] = 0;
  puVar3[4] = 0;
  uVar2 = DAT_180cc3eb8;
  if (DAT_180cc3e80 < (float)(DAT_180cc3e90 + 1) / (float)DAT_180cc3eb8) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180cc3e90 + 1) / DAT_180cc3e80);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar9 = uVar2;
    if ((uVar2 < uVar5) && ((0x1ff < uVar2 || (uVar9 = uVar2 * 8, uVar2 * 8 < uVar5)))) {
      uVar9 = uVar5;
    }
    FUN_18002a7a0(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_180cc3e98 + 8 + (DAT_180cc3eb0 & uVar7) * 0x10);
    puVar8 = DAT_180cc3e88;
    if (puVar6 != DAT_180cc3e88) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_180cc3e98 + (DAT_180cc3eb0 & uVar7) * 0x10))
        goto LAB_180026dd9;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_180026dd9:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_180cc3e90 = DAT_180cc3e90 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_180cc3e98;
  uVar7 = DAT_180cc3eb0 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180cc3e98 + uVar7 * 0x10);
  if (puVar1 == DAT_180cc3e88) {
    *(undefined8 **)(DAT_180cc3e98 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_180cc3e98 + uVar7 * 0x10) = puVar3;
      goto LAB_180026e38;
    }
    if (*(undefined8 **)(DAT_180cc3e98 + 8 + uVar7 * 0x10) != puVar6) goto LAB_180026e38;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_180026e38:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180026e60 FUN_180026e60 ===== */

longlong * FUN_180026e60(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar6;
  ulonglong uVar7;
  float fVar8;
  undefined8 *local_58;
  longlong local_50;
  
  puVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)(uVar5 + (longlong)puVar4)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_3[2]);
  }
  FUN_1800268a0(param_1,&local_58,param_3,uVar7);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x38);
  FUN_180024b50(puVar4 + 2,param_3);
  *(undefined4 *)(puVar4 + 6) = 0;
  fVar8 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (!(fVar8 < *param_1 || fVar8 == *param_1)) {
    FUN_180029e40(param_1);
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_58 = *(undefined8 **)(param_1 + 2);
    if (puVar6 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      _Size = puVar4[4];
      while( true ) {
        _Buf2 = puVar6 + 2;
        if (0xf < (ulonglong)puVar6[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        if ((ulonglong)puVar4[5] < 0x10) {
          _Buf1 = puVar4 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar4[2];
        }
        if ((_Size == puVar6[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0)))) {
          local_58 = (undefined8 *)*puVar6;
          goto LAB_18002701a;
        }
        if (puVar6 == puVar1) break;
        puVar6 = (undefined8 *)puVar6[1];
      }
      local_58 = puVar6;
    }
  }
LAB_18002701a:
  puVar6 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = local_58;
  puVar4[1] = puVar6;
  *puVar6 = puVar4;
  local_58[1] = puVar4;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  puVar1 = *(undefined8 **)(lVar2 + uVar7 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar4;
  }
  else {
    if (puVar1 == local_58) {
      *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar4;
      goto LAB_180027065;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) != puVar6) goto LAB_180027065;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar4;
LAB_180027065:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180027090 FUN_180027090 ===== */

longlong * FUN_180027090(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar6;
  ulonglong uVar7;
  float fVar8;
  undefined8 *local_58;
  longlong local_50;
  
  puVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)(uVar5 + (longlong)puVar4)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_3[2]);
  }
  FUN_1800268a0(param_1,&local_58,param_3,uVar7);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x38);
  FUN_180024b50(puVar4 + 2,param_3);
  puVar4[6] = 0;
  fVar8 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (!(fVar8 < *param_1 || fVar8 == *param_1)) {
    FUN_1800280b0(param_1);
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_58 = *(undefined8 **)(param_1 + 2);
    if (puVar6 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      _Size = puVar4[4];
      while( true ) {
        _Buf2 = puVar6 + 2;
        if (0xf < (ulonglong)puVar6[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        if ((ulonglong)puVar4[5] < 0x10) {
          _Buf1 = puVar4 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar4[2];
        }
        if ((_Size == puVar6[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0)))) {
          local_58 = (undefined8 *)*puVar6;
          goto LAB_18002724a;
        }
        if (puVar6 == puVar1) break;
        puVar6 = (undefined8 *)puVar6[1];
      }
      local_58 = puVar6;
    }
  }
LAB_18002724a:
  puVar6 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = local_58;
  puVar4[1] = puVar6;
  *puVar6 = puVar4;
  local_58[1] = puVar4;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  puVar1 = *(undefined8 **)(lVar2 + uVar7 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar4;
  }
  else {
    if (puVar1 == local_58) {
      *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar4;
      goto LAB_180027295;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) != puVar6) goto LAB_180027295;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar4;
LAB_180027295:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1800272c0 FUN_1800272c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800272c0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  uVar5 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar4 = (undefined8 *)(DAT_180ca0a90 & uVar5);
  puVar3 = *(undefined8 **)(DAT_180ca0a78 + 8 + (longlong)puVar4 * 0x10);
  puVar6 = DAT_180ca0a68;
  if (puVar3 != DAT_180ca0a68) {
    puVar4 = *(undefined8 **)(DAT_180ca0a78 + (longlong)puVar4 * 0x10);
    lVar1 = puVar3[2];
    puVar6 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar1) {
        *param_2 = puVar6;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar6 == puVar4) break;
      puVar6 = (undefined8 *)puVar6[1];
      lVar1 = puVar6[2];
    }
  }
  if (DAT_180ca0a70 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x20,puVar4,DAT_180ca0a78,param_4,&DAT_180ca0a68,0);
  puVar3[2] = *(undefined8 *)param_3;
  *(undefined4 *)(puVar3 + 3) = 0;
  if (_DAT_180ca0a60 < (float)(DAT_180ca0a70 + 1) / (float)DAT_180ca0a98) {
    FUN_180027b20(&DAT_180ca0a60);
    puVar4 = *(undefined8 **)(DAT_180ca0a78 + 8 + (DAT_180ca0a90 & uVar5) * 0x10);
    puVar6 = DAT_180ca0a68;
    if (puVar4 != DAT_180ca0a68) {
      lVar1 = puVar4[2];
      puVar6 = puVar4;
      while (puVar3[2] != lVar1) {
        if (puVar6 == *(undefined8 **)(DAT_180ca0a78 + (DAT_180ca0a90 & uVar5) * 0x10))
        goto LAB_1800274b9;
        puVar6 = (undefined8 *)puVar6[1];
        lVar1 = puVar6[2];
      }
      puVar6 = (undefined8 *)*puVar6;
    }
  }
LAB_1800274b9:
  puVar4 = (undefined8 *)puVar6[1];
  DAT_180ca0a70 = DAT_180ca0a70 + 1;
  *puVar3 = puVar6;
  puVar3[1] = puVar4;
  *puVar4 = puVar3;
  puVar6[1] = puVar3;
  lVar1 = DAT_180ca0a78;
  uVar5 = DAT_180ca0a90 & uVar5;
  puVar2 = *(undefined8 **)(DAT_180ca0a78 + uVar5 * 0x10);
  if (puVar2 == DAT_180ca0a68) {
    *(undefined8 **)(DAT_180ca0a78 + uVar5 * 0x10) = puVar3;
  }
  else {
    if (puVar2 == puVar6) {
      *(undefined8 **)(DAT_180ca0a78 + uVar5 * 0x10) = puVar3;
      goto LAB_180027518;
    }
    if (*(undefined8 **)(DAT_180ca0a78 + 8 + uVar5 * 0x10) != puVar4) goto LAB_180027518;
  }
  *(undefined8 **)(lVar1 + 8 + uVar5 * 0x10) = puVar3;
LAB_180027518:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180027540 FUN_180027540 ===== */

void FUN_180027540(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180028f00(param_1,lVar1,param_2);
    return;
  }
  FUN_180024b50(lVar1);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  return;
}



/* ===== 180027580 FUN_180027580 ===== */

void FUN_180027580(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar8 = auStack_38;
  puVar9 = auStack_38;
  puVar11 = (undefined8 *)*param_1;
  uVar3 = param_1[2] - (longlong)puVar11 >> 6;
  if (param_3 <= uVar3) {
    puVar5 = (undefined8 *)param_1[1];
    uVar3 = (longlong)puVar5 - (longlong)puVar11 >> 6;
    if (uVar3 < param_3) {
      if (puVar11 != puVar5) {
        do {
          if (puVar11 != param_2) {
            if ((ulonglong)param_2[3] < 0x10) {
              puVar5 = param_2;
            }
            else {
              puVar5 = (undefined8 *)*param_2;
            }
            FUN_180029840(puVar11,puVar5,param_2[2]);
            plVar7 = param_2 + 4;
            if (0xf < (ulonglong)param_2[7]) {
              plVar7 = (longlong *)*plVar7;
            }
            FUN_180029840(puVar11 + 4,plVar7,param_2[6]);
          }
          puVar5 = (undefined8 *)param_1[1];
          puVar11 = puVar11 + 8;
          param_2 = param_2 + 8;
        } while (puVar11 != puVar5);
      }
      lVar2 = FUN_1800292c0(param_2,param_3 - uVar3,puVar5,param_1);
      param_1[1] = lVar2;
      return;
    }
    puVar5 = puVar11 + param_3 * 8;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if (puVar11 != param_2) {
        if ((ulonglong)param_2[3] < 0x10) {
          puVar6 = param_2;
        }
        else {
          puVar6 = (undefined8 *)*param_2;
        }
        FUN_180029840(puVar11,puVar6,param_2[2]);
        plVar7 = param_2 + 4;
        if (0xf < (ulonglong)param_2[7]) {
          plVar7 = (longlong *)*plVar7;
        }
        FUN_180029840(puVar11 + 4,plVar7,param_2[6]);
      }
      puVar11 = puVar11 + 8;
      param_2 = param_2 + 8;
    }
    puVar11 = (undefined8 *)param_1[1];
    for (puVar6 = puVar5; puVar6 != puVar11; puVar6 = puVar6 + 8) {
      FUN_18000f890(puVar6 + 4);
      FUN_18000f890(puVar6);
    }
    param_1[1] = (longlong)puVar5;
    return;
  }
  if (0x3ffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  if (0x3ffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar3 = 0x3ffffffffffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar3 < param_3) {
      uVar3 = param_3;
    }
  }
  puVar10 = auStack_38;
  if (puVar11 == (undefined8 *)0x0) goto LAB_180027664;
  puVar5 = (undefined8 *)param_1[1];
  for (; puVar11 != puVar5; puVar11 = puVar11 + 8) {
    FUN_18000f890(puVar11 + 4);
    FUN_18000f890(puVar11);
  }
  lVar2 = *param_1;
  if ((param_1[2] - lVar2 & 0xffffffffffffffc0U) < 0x1000) {
LAB_18002764f:
    lVar4 = lVar2;
    puVar9 = puVar8;
  }
  else {
    lVar4 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar4) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)(5);
      puVar8 = auStack_30;
      goto LAB_18002764f;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x180027657;
  thunk_FUN_1803d64e0(lVar4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar10 = puVar9;
LAB_180027664:
  if (0x3ffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar10 + -8) = &UNK_1800277c8;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar10 + -8) = 0x180027679;
  lVar2 = FUN_18000fb70(uVar3 * 0x40);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = uVar3 * 0x40 + lVar2;
  *(undefined8 *)(puVar10 + -8) = 0x180027699;
  lVar2 = FUN_1800292c0(param_2,param_3,lVar2,param_1);
  param_1[1] = lVar2;
  return;
}



/* ===== 1800277d0 FUN_1800277d0 ===== */

longlong * FUN_1800277d0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    if (uVar2 < 8) {
      plVar11 = param_1;
    }
    else {
      plVar11 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    FUN_180540530(plVar11,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)plVar11) = 0;
    return param_1;
  }
  uVar8 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  uVar6 = param_3 | 7;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar8 = uVar6;
    if (uVar6 < uVar1) {
      uVar8 = uVar1;
    }
    uVar6 = uVar8 + 1;
    if (0x7fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  else {
    uVar6 = 0x7fffffffffffffff;
  }
  lVar5 = FUN_18000fb70(uVar6 * 2);
  param_1[3] = uVar8;
  param_1[2] = param_3;
  FUN_180540530(lVar5,param_2,param_3 * 2);
  puVar9 = auStack_38;
  puVar10 = auStack_38;
  *(undefined2 *)(param_3 * 2 + lVar5) = 0;
  if (uVar2 < 8) goto LAB_1800278f9;
  lVar3 = *param_1;
  lVar7 = lVar3;
  if (uVar2 * 2 + 2 < 0x1000) {
LAB_1800278ee:
    puVar10 = puVar9;
  }
  else {
    lVar7 = *(longlong *)(lVar3 + -8);
    if (0x1f < (lVar3 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar9 = auStack_30;
      goto LAB_1800278ee;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x1800278f9;
  thunk_FUN_1803d64e0(lVar7);
LAB_1800278f9:
  *param_1 = lVar5;
  return param_1;
}



/* ===== 180027950 FUN_180027950 ===== */

void FUN_180027950(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18000f890(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x38);
  return;
}



/* ===== 180027990 FUN_180027990 ===== */

longlong * FUN_180027990(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  short *psVar4;
  longlong *plVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  longlong *plVar10;
  
  plVar1 = (longlong *)param_1[5];
  plVar10 = param_1 + 1;
  lVar2 = param_1[3];
  lVar3 = plVar1[2];
  plVar5 = plVar1;
  if ((ulonglong)plVar1[3] < 8) {
    plVar5 = param_1 + 5;
  }
  psVar4 = (short *)*plVar5;
  psVar7 = (short *)*param_1;
  if (psVar4 == psVar7) {
    *param_1 = (longlong)(psVar7 + lVar2);
    plVar5 = plVar1;
    if ((ulonglong)plVar1[3] < 8) {
      plVar5 = param_1 + 5;
    }
    psVar9 = (short *)*plVar5;
    psVar7 = psVar9 + plVar1[2];
    psVar6 = (short *)FUN_180013e50(psVar9);
    for (psVar8 = psVar6; (psVar8 != psVar7 && ((*psVar8 == 0x5c || (*psVar8 == 0x2f))));
        psVar8 = psVar8 + 1) {
    }
    if ((psVar9 != psVar6) && (psVar6 != psVar8)) {
      FUN_1800277d0(plVar10,psVar6,(longlong)psVar8 - (longlong)psVar6 >> 1);
      return param_1;
    }
  }
  else {
    if (((*psVar7 == 0x5c) || (*psVar7 == 0x2f)) && (lVar2 == 0)) {
      *param_1 = (longlong)(psVar7 + 1);
      return param_1;
    }
    *param_1 = (longlong)(psVar7 + lVar2);
  }
  psVar4 = psVar4 + lVar3;
  psVar7 = (short *)*param_1;
  if ((short *)*param_1 != psVar4) {
    do {
      psVar9 = psVar7;
      if ((*psVar9 != 0x5c) && (*psVar9 != 0x2f)) goto LAB_180027ae0;
      psVar7 = psVar9 + 1;
      *param_1 = (longlong)psVar7;
    } while (psVar7 != psVar4);
    *param_1 = (longlong)psVar9;
  }
  param_1[3] = 0;
  if (7 < (ulonglong)param_1[4]) {
    plVar10 = (longlong *)*plVar10;
  }
  *(undefined2 *)plVar10 = 0;
  return param_1;
LAB_180027ae0:
  if (*psVar9 == 0x5c) {
LAB_180027af9:
    FUN_1800277d0(plVar10,*param_1,(longlong)psVar9 - *param_1 >> 1);
    return param_1;
  }
  if ((*psVar9 == 0x2f) || (psVar9 = psVar9 + 1, psVar9 == psVar4)) goto LAB_180027af9;
  goto LAB_180027ae0;
}



/* ===== 180027b20 FUN_180027b20 ===== */

void FUN_180027b20(float *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  fVar5 = (float)FUN_18053ef70((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
  lVar2 = 0;
  if ((DAT_1808acd00 <= fVar5) && (fVar5 = fVar5 - DAT_1808acd00, fVar5 < DAT_1808acd00)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar5 + lVar2)) {
    uVar3 = (longlong)fVar5 + lVar2;
  }
  uVar4 = uVar1;
  if ((uVar1 < uVar3) && ((0x1ff < uVar1 || (uVar4 = uVar1 * 8, uVar1 * 8 < uVar3)))) {
    uVar4 = uVar3;
  }
  FUN_180029b40(param_1,uVar4);
  return;
}



/* ===== 180027bd0 FUN_180027bd0 ===== */

longlong * FUN_180027bd0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = (undefined8 *)param_2[1];
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x17)) * 0x100000001b3) * 0x10;
  plVar8 = (longlong *)(lVar3 + 8 + lVar5);
  plVar7 = (longlong *)(lVar5 + lVar3);
  plVar4 = *(longlong **)(lVar5 + lVar3);
  plVar10 = (longlong *)*plVar8;
  plVar9 = param_2;
  do {
    plVar11 = (longlong *)*plVar9;
    thunk_FUN_1803d64e0(plVar9,0x20);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar10) {
      if (plVar4 == param_2) {
        *plVar7 = (longlong)puVar1;
        puVar6 = puVar1;
      }
      else {
        puVar6 = puVar2;
      }
      *plVar8 = (longlong)puVar6;
      while (plVar11 != param_3) {
        uVar12 = *(ulonglong *)(param_1 + 0x30) &
                 (((((((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar11 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar11 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar11 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar11 + 0x17)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar3 + 8 + uVar12 * 0x10);
        plVar7 = (longlong *)(lVar3 + uVar12 * 0x10);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_1803d64e0(plVar10,0x20);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) goto LAB_180027de9;
        }
        *plVar7 = (longlong)puVar1;
        *(undefined8 **)(lVar3 + 8 + uVar12 * 0x10) = puVar1;
      }
      goto LAB_180027dec;
    }
    plVar9 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
LAB_180027de9:
    *plVar7 = (longlong)plVar11;
  }
LAB_180027dec:
  *puVar2 = plVar11;
  plVar11[1] = (longlong)puVar2;
  return param_3;
}



/* ===== 180027e40 FUN_180027e40 ===== */

longlong * FUN_180027e40(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = (undefined8 *)param_2[1];
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x17)) * 0x100000001b3) * 0x10;
  plVar8 = (longlong *)(lVar3 + 8 + lVar5);
  plVar7 = (longlong *)(lVar5 + lVar3);
  plVar4 = *(longlong **)(lVar5 + lVar3);
  plVar10 = (longlong *)*plVar8;
  plVar9 = param_2;
  do {
    plVar11 = (longlong *)*plVar9;
    thunk_FUN_1803d64e0(plVar9,0x28);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar10) {
      if (plVar4 == param_2) {
        *plVar7 = (longlong)puVar1;
        puVar6 = puVar1;
      }
      else {
        puVar6 = puVar2;
      }
      *plVar8 = (longlong)puVar6;
      while (plVar11 != param_3) {
        uVar12 = *(ulonglong *)(param_1 + 0x30) &
                 (((((((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar11 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar11 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar11 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar11 + 0x17)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar3 + 8 + uVar12 * 0x10);
        plVar7 = (longlong *)(lVar3 + uVar12 * 0x10);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_1803d64e0(plVar10,0x28);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) goto LAB_180028059;
        }
        *plVar7 = (longlong)puVar1;
        *(undefined8 **)(lVar3 + 8 + uVar12 * 0x10) = puVar1;
      }
      goto LAB_18002805c;
    }
    plVar9 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
LAB_180028059:
    *plVar7 = (longlong)plVar11;
  }
LAB_18002805c:
  *puVar2 = plVar11;
  plVar11[1] = (longlong)puVar2;
  return param_3;
}



/* ===== 1800280b0 FUN_1800280b0 ===== */

void FUN_1800280b0(float *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  fVar5 = (float)FUN_18053ef70((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
  lVar2 = 0;
  if ((DAT_1808acd00 <= fVar5) && (fVar5 = fVar5 - DAT_1808acd00, fVar5 < DAT_1808acd00)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar5 + lVar2)) {
    uVar3 = (longlong)fVar5 + lVar2;
  }
  uVar4 = uVar1;
  if ((uVar1 < uVar3) && ((0x1ff < uVar1 || (uVar4 = uVar1 * 8, uVar1 * 8 < uVar3)))) {
    uVar4 = uVar3;
  }
  FUN_180029ef0(param_1,uVar4);
  return;
}



/* ===== 180028160 FUN_180028160 ===== */

longlong * FUN_180028160(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = (undefined8 *)param_2[1];
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x17)) * 0x100000001b3) * 0x10;
  plVar8 = (longlong *)(lVar3 + 8 + lVar5);
  plVar7 = (longlong *)(lVar5 + lVar3);
  plVar4 = *(longlong **)(lVar5 + lVar3);
  plVar10 = (longlong *)*plVar8;
  plVar9 = param_2;
  do {
    plVar11 = (longlong *)*plVar9;
    thunk_FUN_1803d64e0(plVar9,0x20);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar10) {
      if (plVar4 == param_2) {
        *plVar7 = (longlong)puVar1;
        puVar6 = puVar1;
      }
      else {
        puVar6 = puVar2;
      }
      *plVar8 = (longlong)puVar6;
      while (plVar11 != param_3) {
        uVar12 = *(ulonglong *)(param_1 + 0x30) &
                 (((((((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar11 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar11 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar11 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar11 + 0x17)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar3 + 8 + uVar12 * 0x10);
        plVar7 = (longlong *)(lVar3 + uVar12 * 0x10);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_1803d64e0(plVar10,0x20);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) goto LAB_180028379;
        }
        *plVar7 = (longlong)puVar1;
        *(undefined8 **)(lVar3 + 8 + uVar12 * 0x10) = puVar1;
      }
      goto LAB_18002837c;
    }
    plVar9 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
LAB_180028379:
    *plVar7 = (longlong)plVar11;
  }
LAB_18002837c:
  *puVar2 = plVar11;
  plVar11[1] = (longlong)puVar2;
  return param_3;
}



/* ===== 1800283d0 FUN_1800283d0 ===== */

longlong * FUN_1800283d0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = (undefined8 *)param_2[1];
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x17)) * 0x100000001b3) * 0x10;
  plVar8 = (longlong *)(lVar3 + 8 + lVar5);
  plVar7 = (longlong *)(lVar5 + lVar3);
  plVar4 = *(longlong **)(lVar5 + lVar3);
  plVar10 = (longlong *)*plVar8;
  plVar9 = param_2;
  do {
    plVar11 = (longlong *)*plVar9;
    thunk_FUN_1803d64e0(plVar9,0x30);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar10) {
      if (plVar4 == param_2) {
        *plVar7 = (longlong)puVar1;
        puVar6 = puVar1;
      }
      else {
        puVar6 = puVar2;
      }
      *plVar8 = (longlong)puVar6;
      while (plVar11 != param_3) {
        uVar12 = *(ulonglong *)(param_1 + 0x30) &
                 (((((((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar11 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar11 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar11 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar11 + 0x17)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar3 + 8 + uVar12 * 0x10);
        plVar7 = (longlong *)(lVar3 + uVar12 * 0x10);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_1803d64e0(plVar10,0x30);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) goto LAB_1800285e9;
        }
        *plVar7 = (longlong)puVar1;
        *(undefined8 **)(lVar3 + 8 + uVar12 * 0x10) = puVar1;
      }
      goto LAB_1800285ec;
    }
    plVar9 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
LAB_1800285e9:
    *plVar7 = (longlong)plVar11;
  }
LAB_1800285ec:
  *puVar2 = plVar11;
  plVar11[1] = (longlong)puVar2;
  return param_3;
}



/* ===== 180028640 FUN_180028640 ===== */

longlong * FUN_180028640(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = (undefined8 *)param_2[1];
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x17)) * 0x100000001b3) * 0x10;
  plVar8 = (longlong *)(lVar3 + 8 + lVar5);
  plVar7 = (longlong *)(lVar5 + lVar3);
  plVar4 = *(longlong **)(lVar5 + lVar3);
  plVar10 = (longlong *)*plVar8;
  plVar9 = param_2;
  do {
    plVar11 = (longlong *)*plVar9;
    thunk_FUN_1803d64e0(plVar9,0x48);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar10) {
      if (plVar4 == param_2) {
        *plVar7 = (longlong)puVar1;
        puVar6 = puVar1;
      }
      else {
        puVar6 = puVar2;
      }
      *plVar8 = (longlong)puVar6;
      while (plVar11 != param_3) {
        uVar12 = *(ulonglong *)(param_1 + 0x30) &
                 (((((((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar11 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar11 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar11 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar11 + 0x17)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar3 + 8 + uVar12 * 0x10);
        plVar7 = (longlong *)(lVar3 + uVar12 * 0x10);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_1803d64e0(plVar10,0x48);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) goto LAB_180028859;
        }
        *plVar7 = (longlong)puVar1;
        *(undefined8 **)(lVar3 + 8 + uVar12 * 0x10) = puVar1;
      }
      goto LAB_18002885c;
    }
    plVar9 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
LAB_180028859:
    *plVar7 = (longlong)plVar11;
  }
LAB_18002885c:
  *puVar2 = plVar11;
  plVar11[1] = (longlong)puVar2;
  return param_3;
}



/* ===== 1800288b0 FUN_1800288b0 ===== */

void FUN_1800288b0(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x20) {
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  if (0xfff < (param_1[2] - lVar3 & 0xffffffffffffffe0U)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_180028921;
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar2 = lVar3;
  puVar5 = puVar4;
LAB_180028921:
  *(undefined8 *)(puVar5 + -8) = 0x180028926;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180028940 FUN_180028940 ===== */

void FUN_180028940(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x40) {
    FUN_18000f890(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  if (0xfff < (param_1[2] - lVar3 & 0xffffffffffffffc0U)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800289ba;
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar2 = lVar3;
  puVar5 = puVar4;
LAB_1800289ba:
  *(undefined8 *)(puVar5 + -8) = 0x1800289bf;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800289e0 FUN_1800289e0 ===== */

void FUN_1800289e0(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if ((ulonglong)param_1[3] < 8) goto LAB_180028a34;
  lVar2 = *param_1;
  if (param_1[3] * 2 + 2U < 0x1000) {
LAB_180028a29:
    puVar4 = puVar3;
    lVar5 = lVar2;
  }
  else {
    lVar5 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar5) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)(5);
      puVar3 = auStack_20;
      goto LAB_180028a29;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x180028a34;
  thunk_FUN_1803d64e0(lVar5);
LAB_180028a34:
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  param_1[3] = 7;
  return;
}



/* ===== 180028a50 FUN_180028a50 ===== */

ulonglong * FUN_180028a50(ulonglong *param_1,ulonglong param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar4 = param_1[3];
  uVar5 = param_1[2];
  iVar11 = (int)param_3;
  if (param_2 <= uVar4 - uVar5) {
    param_1[2] = uVar5 + param_2;
    if (uVar4 < 0x10) {
      puVar7 = param_1;
    }
    else {
      puVar7 = (ulonglong *)*param_1;
    }
    FUN_180540170((longlong)puVar7 + uVar5,iVar11,param_2);
    *(undefined1 *)((longlong)puVar7 + uVar5 + param_2) = 0;
    return param_1;
  }
  if (0x7fffffffffffffff - uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  uVar8 = uVar5 + param_2 | 0xf;
  uVar9 = 0x7fffffffffffffff;
  if (((uVar8 < 0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) &&
     (uVar2 = (uVar4 >> 1) + uVar4, uVar9 = uVar8, uVar8 < uVar2)) {
    uVar9 = uVar2;
  }
  uVar8 = FUN_18000fb70(uVar9 + 1);
  param_1[2] = uVar5 + param_2;
  param_1[3] = uVar9;
  lVar3 = uVar8 + uVar5;
  if (uVar4 < 0x10) {
    FUN_180540530(uVar8,param_1,uVar5);
    FUN_180540170(lVar3,iVar11,param_2);
    *(undefined1 *)(lVar3 + param_2) = 0;
  }
  else {
    uVar9 = *param_1;
    FUN_180540530(uVar8,uVar9,uVar5);
    FUN_180540170(lVar3,iVar11,param_2);
    puVar10 = auStack_48;
    *(undefined1 *)(lVar3 + param_2) = 0;
    if (0xfff < uVar4 + 1) {
      plVar1 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar1) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_1803d64e0(*plVar1,uVar4 + 0x28);
        goto LAB_180028b97;
      }
      pcVar6 = (code *)swi(0x29);
      (*pcVar6)(5);
      puVar10 = auStack_40;
    }
    *(undefined8 *)(puVar10 + -8) = 0x180028b7a;
    thunk_FUN_1803d64e0(uVar9);
  }
LAB_180028b97:
  *param_1 = uVar8;
  return param_1;
}



/* ===== 180028bc0 FUN_180028bc0 ===== */

undefined8 FUN_180028bc0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = thunk_FUN_1804e8c80();
  if (lVar1 == param_3) {
    return 0;
  }
  uVar2 = 1;
  if (*(ushort *)(param_1 + lVar1 * 2) < *(ushort *)(param_2 + lVar1 * 2)) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== 180028c20 FUN_180028c20 ===== */

undefined8 FUN_180028c20(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  uVar1 = FUN_1804e5000();
  FUN_180013d60(param_1,uVar1,&local_18);
  return param_1;
}



/* ===== 180028c50 FUN_180028c50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180028c50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 ****ppppuVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  undefined8 ****ppppuVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong _Size;
  undefined8 *puVar10;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  ulonglong local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 ****local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_b8;
  if ((param_1 == param_2) || (local_98 = param_1 + 8, local_98 == param_2)) {
LAB_180028ead:
    return param_2;
  }
  local_88 = param_1;
  local_80 = param_2;
LAB_180028cc0:
  puVar10 = local_98;
  local_70 = local_98[1];
  local_90 = local_98[3];
  ppppuVar1 = (undefined8 ****)*local_98;
  uVar2 = local_98[2];
  *(undefined1 *)local_98 = 0;
  local_98[2] = 0;
  local_98[3] = 0xf;
  local_58 = local_98[4];
  local_40 = local_98[7];
  uStack_50 = local_98[5];
  uStack_48 = local_98[6];
  *(undefined1 *)(local_98 + 4) = 0;
  local_98[6] = 0;
  local_98[7] = 0xf;
  uVar3 = param_1[2];
  if ((ulonglong)param_1[3] < 0x10) {
    puVar8 = param_1;
  }
  else {
    puVar8 = (undefined8 *)*param_1;
  }
  ppppuVar7 = &local_78;
  if (0xf < local_90) {
    ppppuVar7 = ppppuVar1;
  }
  uVar9 = uVar2;
  if (uVar3 < uVar2) {
    uVar9 = uVar3;
  }
  local_78 = ppppuVar1;
  local_68 = uVar2;
  local_60 = local_90;
  iVar5 = memcmp(ppppuVar7,puVar8,uVar9);
  uVar9 = local_90;
  if (iVar5 == 0) {
    if (uVar3 <= uVar2) goto LAB_180028d6f;
  }
  else {
    cVar6 = -1;
    if (-1 < iVar5) {
      cVar6 = '\x01';
    }
    if (-1 < cVar6) {
LAB_180028d6f:
      param_1 = puVar10;
      do {
        puVar10 = param_1 + -8;
        uVar3 = param_1[-6];
        if ((ulonglong)param_1[-5] < 0x10) {
          puVar8 = puVar10;
        }
        else {
          puVar8 = (undefined8 *)*puVar10;
        }
        ppppuVar7 = &local_78;
        if (0xf < uVar9) {
          ppppuVar7 = ppppuVar1;
        }
        _Size = uVar2;
        if (uVar3 < uVar2) {
          _Size = uVar3;
        }
        iVar5 = memcmp(ppppuVar7,puVar8,_Size);
        if (iVar5 == 0) {
          if (uVar3 <= uVar2) goto LAB_180028e18;
        }
        else {
          cVar6 = -1;
          if (-1 < iVar5) {
            cVar6 = '\x01';
          }
          if (-1 < cVar6) goto LAB_180028e18;
        }
        FUN_18002ba60(param_1,puVar10);
        FUN_18002ba60(param_1 + 4,param_1 + -4);
        param_1 = puVar10;
      } while( true );
    }
  }
  puVar8 = puVar10 + 8;
  for (puVar4 = puVar10; puVar4 != param_1; puVar4 = puVar4 + -8) {
    FUN_18002ba60(puVar8 + -8,puVar4 + -8);
    FUN_18002ba60(puVar8 + -4,puVar4 + -4);
    puVar8 = puVar8 + -8;
  }
  puVar8 = param_1;
  goto LAB_180028e22;
LAB_180028e18:
  puVar10 = local_98;
  puVar8 = local_88;
LAB_180028e22:
  FUN_18002ba60(param_1,&local_78);
  FUN_18002ba60(param_1 + 4,&local_58);
  FUN_18000f890(&local_58);
  FUN_18000f890(&local_78);
  local_98 = puVar10 + 8;
  param_2 = local_80;
  param_1 = puVar8;
  if (local_98 == local_80) goto LAB_180028ead;
  goto LAB_180028cc0;
}



/* ===== 180028f00 FUN_180028f00 ===== */

longlong FUN_180028f00(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  lVar13 = *param_1;
  if (param_1[1] - lVar13 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = (param_1[1] - lVar13 >> 5) + 1;
  uVar11 = param_1[2] - lVar13 >> 5;
  uVar12 = 0x7ffffffffffffff;
  if (uVar11 <= 0x7ffffffffffffff - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar12 = uVar1;
    if (uVar1 <= uVar11) {
      uVar12 = uVar11;
    }
    if (0x7ffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar12 << 5);
  lVar13 = ((longlong)param_2 - lVar13 & 0xffffffffffffffe0U) + (longlong)puVar9;
  puVar2 = (undefined8 *)(lVar13 + 0x20);
  plVar14 = param_1;
  puVar15 = puVar9;
  uVar11 = uVar12;
  puVar16 = puVar2;
  puVar17 = puVar2;
  FUN_180024b50(lVar13,param_3);
  puVar3 = (undefined4 *)param_1[1];
  puVar10 = (undefined4 *)*param_1;
  puVar8 = puVar9;
  if (param_2 == puVar3) {
    for (; puVar10 != puVar3; puVar10 = puVar10 + 8) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      *(undefined4 *)puVar8 = *puVar10;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
      *(undefined4 *)(puVar8 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(puVar10 + 6);
      puVar8[2] = *(undefined8 *)(puVar10 + 4);
      puVar8[3] = uVar7;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0xf;
      *(undefined1 *)puVar10 = 0;
      puVar8 = puVar8 + 4;
    }
  }
  else {
    for (; puVar10 != param_2; puVar10 = puVar10 + 8) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      *(undefined4 *)puVar8 = *puVar10;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
      *(undefined4 *)(puVar8 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(puVar10 + 6);
      puVar8[2] = *(undefined8 *)(puVar10 + 4);
      puVar8[3] = uVar7;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0xf;
      *(undefined1 *)puVar10 = 0;
      puVar8 = puVar8 + 4;
    }
    puVar3 = (undefined4 *)param_1[1];
    for (; param_2 != puVar3; param_2 = param_2 + 8) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *(undefined4 *)puVar2 = *param_2;
      *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
      *(undefined4 *)(puVar2 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(param_2 + 6);
      puVar2[2] = *(undefined8 *)(param_2 + 4);
      puVar2[3] = uVar7;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      puVar2 = puVar2 + 4;
    }
  }
  FUN_18002b950(param_1,puVar9,uVar1,uVar12,plVar14,puVar15,uVar11,puVar16,puVar17);
  return lVar13;
}



/* ===== 1800290d0 FUN_1800290d0 ===== */

undefined8 * FUN_1800290d0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar2 = *param_1;
  if (param_1[1] - lVar2 == -8) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar13 = 0x1fffffffffffffff;
  uVar7 = param_1[2] - lVar2 >> 3;
  uVar1 = (param_1[1] - lVar2 >> 3) + 1;
  if (uVar7 <= 0x1fffffffffffffff - (uVar7 >> 1)) {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar13 = uVar1;
    if (uVar1 <= uVar7) {
      uVar13 = uVar7;
    }
    if (0x1fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar6 = (undefined8 *)FUN_18000fb70(uVar13 * 8);
  puVar11 = auStack_48;
  puVar12 = auStack_48;
  uVar3 = *param_3;
  *param_3 = 0xffffffffffffffff;
  puVar14 = (undefined8 *)(((longlong)param_2 - lVar2 & 0xfffffffffffffff8U) + (longlong)puVar6);
  *puVar14 = uVar3;
  puVar10 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
  puVar5 = puVar6;
  if (param_2 == puVar10) {
    for (; puVar8 != puVar10; puVar8 = puVar8 + 1) {
      uVar3 = *puVar8;
      *puVar8 = 0xffffffffffffffff;
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    for (; puVar8 != param_2; puVar8 = puVar8 + 1) {
      uVar3 = *puVar8;
      *puVar8 = 0xffffffffffffffff;
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    }
    puVar10 = (undefined8 *)param_1[1];
    puVar8 = puVar14;
    for (; param_2 != puVar10; param_2 = param_2 + 1) {
      puVar8 = puVar8 + 1;
      uVar3 = *param_2;
      *param_2 = 0xffffffffffffffff;
      *puVar8 = uVar3;
    }
  }
  puVar10 = (undefined8 *)*param_1;
  if (puVar10 == (undefined8 *)0x0) goto LAB_180029279;
  puVar8 = (undefined8 *)param_1[1];
  for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
    FUN_1804e56f0(*puVar10);
  }
  lVar2 = *param_1;
  lVar9 = lVar2;
  if ((ulonglong)((param_1[2] - lVar2 >> 3) * 8) < 0x1000) {
LAB_18002926e:
    puVar12 = puVar11;
  }
  else {
    lVar9 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar9) - 8U) {
      lVar9 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar11 = auStack_40;
      goto LAB_18002926e;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x180029279;
  thunk_FUN_1803d64e0(lVar9);
LAB_180029279:
  *param_1 = (longlong)puVar6;
  param_1[1] = (longlong)(puVar6 + uVar1);
  param_1[2] = (longlong)(puVar6 + uVar13);
  return puVar14;
}



/* ===== 1800292c0 FUN_1800292c0 ===== */

longlong FUN_1800292c0(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_180024b50(param_3,param_1);
    FUN_180024b50(param_3 + 0x20,param_1 + 0x20);
    param_3 = param_3 + 0x40;
    param_1 = param_1 + 0x40;
  }
  return param_3;
}



/* ===== 180029340 FUN_180029340 ===== */

undefined8 * FUN_180029340(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar13 = *param_1;
  if (param_1[1] - lVar13 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar11 = param_1[2] - lVar13 >> 6;
  uVar1 = (param_1[1] - lVar13 >> 6) + 1;
  uVar17 = 0x3ffffffffffffff;
  if (uVar11 <= 0x3ffffffffffffff - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar17 = uVar1;
    if (uVar1 <= uVar11) {
      uVar17 = uVar11;
    }
    if (0x3ffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined8 *)FUN_18000fb70(uVar17 * 0x40);
  puVar14 = auStack_48;
  puVar15 = auStack_48;
  puVar16 = (undefined8 *)(((longlong)param_2 - lVar13 & 0xffffffffffffffc0U) + (longlong)puVar8);
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  puVar16[3] = 0;
  uVar7 = param_3[1];
  *puVar16 = *param_3;
  puVar16[1] = uVar7;
  uVar7 = param_3[3];
  puVar16[2] = param_3[2];
  puVar16[3] = uVar7;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar16[4] = 0;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar5 = *(undefined4 *)(param_3 + 5);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar16 + 0x24) = uVar4;
  *(undefined4 *)(puVar16 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar6;
  uVar7 = param_3[7];
  puVar16[6] = param_3[6];
  puVar16[7] = uVar7;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 4) = 0;
  puVar2 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)*param_1;
  puVar10 = puVar8;
  if (param_2 == puVar2) {
    for (; puVar9 != puVar2; puVar9 = puVar9 + 8) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      uVar7 = puVar9[1];
      *puVar10 = *puVar9;
      puVar10[1] = uVar7;
      uVar7 = puVar9[3];
      puVar10[2] = puVar9[2];
      puVar10[3] = uVar7;
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      *(undefined1 *)puVar9 = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      uVar4 = *(undefined4 *)((longlong)puVar9 + 0x24);
      uVar5 = *(undefined4 *)(puVar9 + 5);
      uVar6 = *(undefined4 *)((longlong)puVar9 + 0x2c);
      *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar9 + 4);
      *(undefined4 *)((longlong)puVar10 + 0x24) = uVar4;
      *(undefined4 *)(puVar10 + 5) = uVar5;
      *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar6;
      uVar7 = puVar9[7];
      puVar10[6] = puVar9[6];
      puVar10[7] = uVar7;
      puVar9[6] = 0;
      puVar9[7] = 0xf;
      *(undefined1 *)(puVar9 + 4) = 0;
      puVar10 = puVar10 + 8;
    }
  }
  else {
    for (; puVar9 != param_2; puVar9 = puVar9 + 8) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      uVar7 = puVar9[1];
      *puVar10 = *puVar9;
      puVar10[1] = uVar7;
      uVar7 = puVar9[3];
      puVar10[2] = puVar9[2];
      puVar10[3] = uVar7;
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      *(undefined1 *)puVar9 = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      uVar4 = *(undefined4 *)((longlong)puVar9 + 0x24);
      uVar5 = *(undefined4 *)(puVar9 + 5);
      uVar6 = *(undefined4 *)((longlong)puVar9 + 0x2c);
      *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar9 + 4);
      *(undefined4 *)((longlong)puVar10 + 0x24) = uVar4;
      *(undefined4 *)(puVar10 + 5) = uVar5;
      *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar6;
      uVar7 = puVar9[7];
      puVar10[6] = puVar9[6];
      puVar10[7] = uVar7;
      puVar9[6] = 0;
      puVar9[7] = 0xf;
      *(undefined1 *)(puVar9 + 4) = 0;
      puVar10 = puVar10 + 8;
    }
    puVar2 = (undefined8 *)param_1[1];
    puVar9 = puVar16;
    for (; param_2 != puVar2; param_2 = param_2 + 8) {
      puVar10 = puVar9 + 8;
      *puVar10 = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      uVar7 = param_2[1];
      *puVar10 = *param_2;
      puVar9[9] = uVar7;
      uVar7 = param_2[3];
      puVar9[10] = param_2[2];
      puVar9[0xb] = uVar7;
      param_2[2] = 0;
      param_2[3] = 0xf;
      *(undefined1 *)param_2 = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      puVar9[0xe] = 0;
      puVar9[0xf] = 0;
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
      uVar5 = *(undefined4 *)(param_2 + 5);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)((longlong)puVar9 + 100) = uVar4;
      *(undefined4 *)(puVar9 + 0xd) = uVar5;
      *(undefined4 *)((longlong)puVar9 + 0x6c) = uVar6;
      uVar7 = param_2[7];
      puVar9[0xe] = param_2[6];
      puVar9[0xf] = uVar7;
      param_2[6] = 0;
      param_2[7] = 0xf;
      *(undefined1 *)(param_2 + 4) = 0;
      puVar9 = puVar10;
    }
  }
  lVar13 = *param_1;
  if (lVar13 == 0) goto LAB_180029637;
  lVar12 = param_1[1];
  for (; lVar13 != lVar12; lVar13 = lVar13 + 0x40) {
    FUN_18000f890(lVar13 + 0x20);
    FUN_18000f890(lVar13);
  }
  lVar13 = *param_1;
  if ((param_1[2] - lVar13 & 0xffffffffffffffc0U) < 0x1000) {
LAB_18002962f:
    lVar12 = lVar13;
    puVar15 = puVar14;
  }
  else {
    lVar12 = *(longlong *)(lVar13 + -8);
    if (0x1f < (lVar13 - lVar12) - 8U) {
      pcVar3 = (code *)swi(0x29);
      lVar13 = (*pcVar3)(5);
      puVar14 = auStack_40;
      goto LAB_18002962f;
    }
  }
  *(undefined8 *)(puVar15 + -8) = 0x180029637;
  thunk_FUN_1803d64e0(lVar12);
LAB_180029637:
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1 * 8);
  param_1[2] = (longlong)(puVar8 + uVar17 * 8);
  return puVar16;
}



/* ===== 180029680 FUN_180029680 ===== */

ulonglong *
FUN_180029680(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined2 param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar3 = param_1[2];
  uVar9 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  uVar4 = param_1[3];
  uVar6 = uVar3 + param_2 | 7;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) {
    uVar2 = (uVar4 >> 1) + uVar4;
    uVar9 = uVar6;
    if (uVar6 < uVar2) {
      uVar9 = uVar2;
    }
    uVar6 = uVar9 + 1;
    if (0x7fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  else {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar6 = FUN_18000fb70(uVar6 * 2);
  param_1[3] = uVar9;
  param_1[2] = uVar3 + param_2;
  puVar10 = (undefined2 *)(uVar3 * 2 + uVar6);
  if (uVar4 < 8) {
    FUN_180540530(uVar6,param_1);
    if (param_4 != 0) {
      for (lVar7 = param_4; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar10 = param_5;
        puVar10 = puVar10 + 1;
      }
    }
    *(undefined2 *)(uVar6 + (uVar3 + param_4) * 2) = 0;
  }
  else {
    uVar9 = *param_1;
    FUN_180540530(uVar6,uVar9);
    puVar8 = auStack_38;
    if (param_4 != 0) {
      for (lVar7 = param_4; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar10 = param_5;
        puVar10 = puVar10 + 1;
      }
    }
    *(undefined2 *)(uVar6 + (uVar3 + param_4) * 2) = 0;
    if (0xfff < uVar4 * 2 + 2) {
      plVar1 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar1) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_1803d64e0(*plVar1,uVar4 * 2 + 0x29);
        goto LAB_1800297c5;
      }
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar8 = auStack_30;
    }
    *(undefined8 *)(puVar8 + -8) = 0x1800297a0;
    thunk_FUN_1803d64e0(uVar9);
  }
LAB_1800297c5:
  *param_1 = uVar6;
  return param_1;
}



/* ===== 180029800 FUN_180029800 ===== */

bool FUN_180029800(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  int iVar1;
  
  if (param_2 != param_4) {
    return false;
  }
  if (param_2 == 0) {
    return true;
  }
  iVar1 = memcmp(param_1,param_3,param_2);
  return iVar1 == 0;
}



/* ===== 180029840 FUN_180029840 ===== */

longlong * FUN_180029840(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    if (uVar2 < 0x10) {
      plVar10 = param_1;
    }
    else {
      plVar10 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    FUN_180540530(plVar10);
    *(undefined1 *)((longlong)plVar10 + param_3) = 0;
    return param_1;
  }
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  uVar6 = param_3 | 0xf;
  uVar11 = 0x7fffffffffffffff;
  if (((uVar6 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
     (uVar1 = (uVar2 >> 1) + uVar2, uVar11 = uVar6, uVar6 < uVar1)) {
    uVar11 = uVar1;
  }
  lVar5 = FUN_18000fb70(uVar11 + 1);
  param_1[2] = param_3;
  param_1[3] = uVar11;
  FUN_180540530(lVar5,param_2,param_3);
  puVar8 = auStack_38;
  puVar9 = auStack_38;
  *(undefined1 *)(lVar5 + param_3) = 0;
  if (uVar2 < 0x10) goto LAB_180029930;
  lVar3 = *param_1;
  lVar7 = lVar3;
  if (uVar2 + 1 < 0x1000) {
LAB_180029925:
    puVar9 = puVar8;
  }
  else {
    lVar7 = *(longlong *)(lVar3 + -8);
    if (0x1f < (lVar3 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar8 = auStack_30;
      goto LAB_180029925;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x180029930;
  thunk_FUN_1803d64e0(lVar7);
LAB_180029930:
  *param_1 = lVar5;
  return param_1;
}



/* ===== 1800299c0 FUN_1800299c0 ===== */

void FUN_1800299c0(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800299cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return;
}



/* ===== 1800299e0 FUN_1800299e0 ===== */

void FUN_1800299e0(longlong param_1)

{
  FUN_180024420(param_1 + 0x58);
  FUN_1804e56f0(*(undefined8 *)(param_1 + 0x50));
  FUN_1800289e0(param_1 + 0x30);
  return;
}



/* ===== 180029a30 FUN_180029a30 ===== */

void FUN_180029a30(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 local_res18;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  local_res18 = param_3;
  if (param_2 <= (ulonglong)(param_1[1] - *param_1 >> 3)) {
    FUN_180026a10(*param_1,param_1[1],&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
  puVar3 = (undefined8 *)FUN_18000fb70(param_2 * 8);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  lVar4 = *param_1;
  if (param_1[2] - lVar4 == 0) goto LAB_180029ad6;
  if ((ulonglong)((param_1[2] - lVar4 >> 3) * 8) < 0x1000) {
LAB_180029ace:
    lVar5 = lVar4;
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar4 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180029ace;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180029ad6;
  thunk_FUN_1803d64e0(lVar5);
LAB_180029ad6:
  *param_1 = (longlong)puVar3;
  puVar1 = puVar3 + param_2;
  param_1[1] = (longlong)puVar1;
  param_1[2] = (longlong)puVar1;
  if (param_2 * 8 != 0) {
    do {
      *puVar3 = param_3;
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
  }
  return;
}



/* ===== 180029b40 FUN_180029b40 ===== */

void FUN_180029b40(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  
  for (lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar10 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar8 = param_2 - 1 | 1;
  lVar10 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  bVar9 = (char)lVar10 + 1;
  lVar10 = 1L << (bVar9 & 0x3f);
  FUN_180029a30(param_1 + 0x18,2L << (bVar9 & 0x3f),plVar1);
  *(longlong *)(param_1 + 0x38) = lVar10;
  *(longlong *)(param_1 + 0x30) = lVar10 + -1;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000180029bb6:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar1) {
          return;
        }
        lVar10 = *(longlong *)(param_1 + 0x18);
        plVar2 = (longlong *)*plVar7;
        uVar8 = *(ulonglong *)(param_1 + 0x30) &
                (((((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar7 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3;
        plVar3 = *(longlong **)(lVar10 + uVar8 * 0x10);
        if (plVar3 != plVar1) break;
        *(longlong **)(lVar10 + uVar8 * 0x10) = plVar7;
        *(longlong **)(lVar10 + 8 + uVar8 * 0x10) = plVar7;
        plVar7 = plVar2;
      }
      plVar4 = *(longlong **)(lVar10 + 8 + uVar8 * 0x10);
      if (plVar7[2] != plVar4[2]) break;
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != plVar7) {
        plVar3 = (longlong *)plVar7[1];
        *plVar3 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar7;
        plVar4[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar3;
        plVar7[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar10 + 8 + uVar8 * 0x10) = plVar7;
      plVar7 = plVar2;
    }
    do {
      if (plVar3 == plVar4) {
        plVar3 = (longlong *)plVar7[1];
        *plVar3 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar7;
        plVar4[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar3;
        plVar7[1] = (longlong)puVar6;
        *(longlong **)(lVar10 + uVar8 * 0x10) = plVar7;
        plVar7 = plVar2;
        goto joined_r0x000180029bb6;
      }
      plVar4 = (longlong *)plVar4[1];
    } while (plVar7[2] != plVar4[2]);
    lVar10 = *plVar4;
    plVar3 = (longlong *)plVar7[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar10;
    puVar5 = *(undefined8 **)(lVar10 + 8);
    *puVar5 = plVar7;
    *(longlong **)(lVar10 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar7[1] = (longlong)puVar5;
    plVar7 = plVar2;
  } while( true );
}



/* ===== 180029d30 FUN_180029d30 ===== */

void FUN_180029d30(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 local_res18;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  local_res18 = param_3;
  if (param_2 <= (ulonglong)(param_1[1] - *param_1 >> 3)) {
    FUN_180026ac0(*param_1,param_1[1],&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
  puVar3 = (undefined8 *)FUN_18000fb70(param_2 * 8);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  lVar4 = *param_1;
  if (param_1[2] - lVar4 == 0) goto LAB_180029dd6;
  if ((ulonglong)((param_1[2] - lVar4 >> 3) * 8) < 0x1000) {
LAB_180029dce:
    lVar5 = lVar4;
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar4 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180029dce;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180029dd6;
  thunk_FUN_1803d64e0(lVar5);
LAB_180029dd6:
  *param_1 = (longlong)puVar3;
  puVar1 = puVar3 + param_2;
  param_1[1] = (longlong)puVar1;
  param_1[2] = (longlong)puVar1;
  if (param_2 * 8 != 0) {
    do {
      *puVar3 = param_3;
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
  }
  return;
}



/* ===== 180029e40 FUN_180029e40 ===== */

void FUN_180029e40(float *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  fVar5 = (float)FUN_18053ef70((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
  lVar2 = 0;
  if ((DAT_1808acd00 <= fVar5) && (fVar5 = fVar5 - DAT_1808acd00, fVar5 < DAT_1808acd00)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar5 + lVar2)) {
    uVar3 = (longlong)fVar5 + lVar2;
  }
  uVar4 = uVar1;
  if ((uVar1 < uVar3) && ((0x1ff < uVar1 || (uVar4 = uVar1 * 8, uVar1 * 8 < uVar3)))) {
    uVar4 = uVar3;
  }
  FUN_18002aa30(param_1,uVar4);
  return;
}



/* ===== 180029ef0 FUN_180029ef0 ===== */

void FUN_180029ef0(longlong param_1,ulonglong param_2)

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
  longlong *_Buf1;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  
  for (lVar14 = 0x3f; 0xfffffffffffffffU >> lVar14 == 0; lVar14 = lVar14 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar14 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  plVar2 = *(longlong **)(param_1 + 8);
  uVar8 = param_2 - 1 | 1;
  lVar14 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  bVar11 = (char)lVar14 + 1;
  lVar14 = 1L << (bVar11 & 0x3f);
  FUN_180029a30(param_1 + 0x18,2L << (bVar11 & 0x3f),plVar2);
  *(longlong *)(param_1 + 0x38) = lVar14;
  *(longlong *)(param_1 + 0x30) = lVar14 + -1;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000180029f72:
  do {
    while( true ) {
      if (plVar6 == plVar2) {
        return;
      }
      uVar16 = plVar6[5];
      plVar10 = plVar6 + 2;
      plVar3 = (longlong *)*plVar6;
      uVar8 = plVar6[4];
      if (0xf < uVar16) {
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
      lVar14 = *(longlong *)(param_1 + 0x18);
      uVar13 = *(ulonglong *)(param_1 + 0x30) & uVar13;
      plVar10 = *(longlong **)(lVar14 + uVar13 * 0x10);
      if (plVar10 != plVar2) break;
      *(longlong **)(lVar14 + uVar13 * 0x10) = plVar6;
      *(longlong **)(lVar14 + 8 + uVar13 * 0x10) = plVar6;
      plVar6 = plVar3;
    }
    plVar15 = *(longlong **)(lVar14 + 8 + uVar13 * 0x10);
    plVar12 = plVar15 + 2;
    if (0xf < (ulonglong)plVar15[5]) {
      plVar12 = (longlong *)*plVar12;
    }
    _Buf1 = plVar6 + 2;
    if (0xf < uVar16) {
      _Buf1 = (longlong *)plVar6[2];
    }
    if (uVar8 != plVar15[4]) {
LAB_18002a07f:
      if (plVar10 != plVar15) {
        do {
          plVar15 = (longlong *)plVar15[1];
          plVar10 = plVar15 + 2;
          if (0xf < (ulonglong)plVar15[5]) {
            plVar10 = (longlong *)*plVar10;
          }
          if (uVar16 < 0x10) {
            plVar12 = plVar6 + 2;
          }
          else {
            plVar12 = (longlong *)plVar6[2];
          }
          if (uVar8 == plVar15[4]) {
            if ((uVar8 == 0) || (iVar7 = memcmp(plVar12,plVar10,uVar8), iVar7 == 0)) {
              lVar14 = *plVar15;
              plVar10 = (longlong *)plVar6[1];
              *plVar10 = (longlong)plVar3;
              plVar12 = (longlong *)plVar3[1];
              *plVar12 = lVar14;
              puVar4 = *(undefined8 **)(lVar14 + 8);
              *puVar4 = plVar6;
              *(longlong **)(lVar14 + 8) = plVar12;
              plVar3[1] = (longlong)plVar10;
              plVar6[1] = (longlong)puVar4;
              plVar6 = plVar3;
              goto joined_r0x000180029f72;
            }
            uVar16 = plVar6[5];
          }
        } while (*(longlong **)(lVar14 + uVar13 * 0x10) != plVar15);
      }
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar15;
      puVar5 = (undefined8 *)plVar15[1];
      *puVar5 = plVar6;
      plVar15[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
      *(longlong **)(lVar14 + uVar13 * 0x10) = plVar6;
      plVar6 = plVar3;
      goto joined_r0x000180029f72;
    }
    if ((uVar8 != 0) && (iVar7 = memcmp(_Buf1,plVar12,uVar8), iVar7 != 0)) {
      plVar10 = *(longlong **)(lVar14 + uVar13 * 0x10);
      uVar16 = plVar6[5];
      goto LAB_18002a07f;
    }
    plVar15 = (longlong *)*plVar15;
    if (plVar15 != plVar6) {
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar15;
      puVar5 = (undefined8 *)plVar15[1];
      *puVar5 = plVar6;
      plVar15[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
    }
    *(longlong **)(lVar14 + 8 + uVar13 * 0x10) = plVar6;
    plVar6 = plVar3;
  } while( true );
}



/* ===== 18002a1a0 FUN_18002a1a0 ===== */

void FUN_18002a1a0(void)

{
  code *pcVar1;
  
  FUN_1804e4d00("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 18002a1c0 FUN_18002a1c0 ===== */

undefined8 * FUN_18002a1c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Ref_count_obj2<std::filesystem::_Recursive_dir_enum_impl>::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x78);
  }
  return param_1;
}



/* ===== 18002a1f0 FUN_18002a1f0 ===== */

void FUN_18002a1f0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar1 = param_2;
  while (lVar1 < lVar5) {
    cVar2 = FUN_180023470(lVar1 * 0x80 + 0x80U + param_1,(lVar1 * 0x80 | 0x40U) + param_1);
    lVar3 = lVar1 * 0x40;
    lVar1 = ((longlong)cVar2 >> 0x3f) + 2 + lVar1 * 2;
    FUN_18002ba60(lVar3 + param_1,lVar1 * 0x40 + param_1);
    FUN_18002ba60(param_1 + 0x20 + lVar3,param_1 + 0x20 + lVar1 * 0x40);
  }
  if ((lVar1 == lVar5) && ((param_3 & 1) == 0)) {
    FUN_18002ba60(lVar1 * 0x40 + param_1,param_1 + -0x40 + param_3 * 0x40);
    FUN_18002ba60(param_1 + (lVar1 * 0x40 | 0x20U),param_1 + -0x20 + param_3 * 0x40);
    lVar1 = param_3 - 1;
  }
  while (param_2 < lVar1) {
    lVar3 = lVar1 + -1 >> 1;
    lVar4 = lVar3 * 0x40;
    lVar5 = lVar4 + param_1;
    cVar2 = FUN_180023470(lVar5,param_4);
    if (-1 < cVar2) break;
    FUN_18002ba60(lVar1 * 0x40 + param_1,lVar5);
    FUN_18002ba60(lVar1 * 0x40 + param_1 + 0x20,lVar4 + param_1 + 0x20);
    lVar1 = lVar3;
  }
  FUN_18002ba60(lVar1 * 0x40 + param_1,param_4);
  FUN_18002ba60(param_1 + (lVar1 * 0x40 | 0x20U),param_4 + 0x20);
  return;
}



/* ===== 18002a360 FUN_18002a360 ===== */

void FUN_18002a360(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = param_3 - param_1 >> 6;
  if (lVar2 < 0x29) {
    cVar1 = FUN_180023470(param_2,param_1);
    if (cVar1 < '\0') {
      FUN_18002bb00(param_2,param_1);
    }
    cVar1 = FUN_180023470(param_3,param_2);
    if (cVar1 < '\0') {
      FUN_18002bb00(param_3,param_2);
      cVar1 = FUN_180023470(param_2,param_1);
      if (cVar1 < '\0') {
        FUN_18002bb00(param_2,param_1);
        return;
      }
    }
  }
  else {
    lVar5 = lVar2 + 1 >> 3;
    lVar2 = lVar5 * 0x40 + param_1;
    lVar3 = lVar5 * 0x80 + param_1;
    cVar1 = FUN_180023470(lVar2,param_1);
    if (cVar1 < '\0') {
      FUN_18002bb00(lVar2,param_1);
    }
    cVar1 = FUN_180023470(lVar3,lVar2);
    if (cVar1 < '\0') {
      FUN_18002bb00(lVar3,lVar2);
      cVar1 = FUN_180023470(lVar2,param_1);
      if (cVar1 < '\0') {
        FUN_18002bb00(lVar2,param_1);
      }
    }
    lVar3 = lVar5 * 0x40 + param_2;
    lVar4 = param_2 + lVar5 * -0x40;
    cVar1 = FUN_180023470(param_2,lVar4);
    if (cVar1 < '\0') {
      FUN_18002bb00(param_2,lVar4);
    }
    cVar1 = FUN_180023470(lVar3,param_2);
    if (cVar1 < '\0') {
      FUN_18002bb00(lVar3,param_2);
      cVar1 = FUN_180023470(param_2,lVar4);
      if (cVar1 < '\0') {
        FUN_18002bb00(param_2,lVar4);
      }
    }
    lVar4 = param_3 + lVar5 * -0x40;
    lVar3 = param_3 + lVar5 * -0x80;
    cVar1 = FUN_180023470(lVar4,lVar3);
    if (cVar1 < '\0') {
      FUN_18002bb00(lVar4,lVar3);
    }
    cVar1 = FUN_180023470(param_3,lVar4);
    if (cVar1 < '\0') {
      FUN_18002bb00(param_3,lVar4);
      cVar1 = FUN_180023470(lVar4,lVar3);
      if (cVar1 < '\0') {
        FUN_18002bb00(lVar4,lVar3);
      }
    }
    cVar1 = FUN_180023470(param_2,lVar2);
    if (cVar1 < '\0') {
      FUN_18002bb00(param_2,lVar2);
    }
    cVar1 = FUN_180023470(lVar4,param_2);
    if (cVar1 < '\0') {
      FUN_18002bb00(lVar4,param_2);
      cVar1 = FUN_180023470(param_2,lVar2);
      if (cVar1 < '\0') {
        FUN_18002bb00(param_2,lVar2);
      }
    }
  }
  return;
}



/* ===== 18002a580 FUN_18002a580 ===== */

void FUN_18002a580(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = param_3;
  while (uVar6 = uVar1, param_2 < uVar6) {
    uVar1 = uVar6 - 0x40;
    cVar3 = FUN_180023470(uVar1,uVar6);
    if ((cVar3 < '\0') || (cVar3 = FUN_180023470(uVar6,uVar1), cVar3 < '\0')) break;
  }
  do {
    param_3 = param_3 + 0x40;
    uVar1 = param_3;
    uVar4 = uVar6;
    if (param_4 <= param_3) break;
    cVar3 = FUN_180023470(param_3,uVar6);
    if ((cVar3 < '\0') || (cVar3 = FUN_180023470(uVar6,param_3), cVar3 < '\0')) break;
  } while( true );
joined_r0x00018002a613:
  if (param_4 <= uVar1) {
joined_r0x00018002a653:
    while (uVar2 = uVar6, param_2 < uVar2) {
      uVar6 = uVar2 - 0x40;
      cVar3 = FUN_180023470(uVar6,uVar4);
      if (-1 < cVar3) {
        cVar3 = FUN_180023470(uVar4,uVar6);
        if (cVar3 < '\0') break;
        if (uVar2 != uVar4) {
          FUN_18002bb00(uVar4 - 0x40,uVar6);
        }
        uVar4 = uVar4 - 0x40;
      }
    }
    if ((uVar2 == param_2) && (uVar1 == param_4)) {
      *param_1 = uVar4;
      param_1[1] = param_3;
      return;
    }
    if (uVar2 == param_2) {
      if (param_3 != uVar1) {
        FUN_18002bb00(uVar4,param_3);
      }
      param_3 = param_3 + 0x40;
      FUN_18002bb00(uVar4,uVar1);
      uVar1 = uVar1 + 0x40;
      uVar6 = uVar2;
      uVar4 = uVar4 + 0x40;
    }
    else {
      uVar6 = uVar2 - 0x40;
      if (uVar1 == param_4) {
        uVar5 = uVar4 - 0x40;
        if (uVar4 != uVar2) {
          FUN_18002bb00(uVar6,uVar5);
        }
        param_3 = param_3 - 0x40;
        FUN_18002bb00(uVar5,param_3);
        uVar4 = uVar5;
      }
      else {
        FUN_18002bb00(uVar1,uVar6);
        uVar1 = uVar1 + 0x40;
      }
    }
    goto joined_r0x00018002a613;
  }
  cVar3 = FUN_180023470(uVar4,uVar1);
  if (-1 < cVar3) {
    cVar3 = FUN_180023470(uVar1,uVar4);
    if (cVar3 < '\0') goto joined_r0x00018002a653;
    if (param_3 != uVar1) {
      FUN_18002bb00(param_3,uVar1);
    }
    param_3 = param_3 + 0x40;
  }
  uVar1 = uVar1 + 0x40;
  goto joined_r0x00018002a613;
}



/* ===== 18002a760 FUN_18002a760 ===== */

void FUN_18002a760(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_18000f890(lVar2 + 0x20);
    FUN_18000f890(lVar2);
  }
  return;
}



/* ===== 18002a7a0 FUN_18002a7a0 ===== */

void FUN_18002a7a0(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180cc3e88;
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
  FUN_180029d30(&DAT_180cc3e98,2L << (bVar10 & 0x3f),DAT_180cc3e88);
  DAT_180cc3eb0 = lVar11 - 1;
  DAT_180cc3eb8 = lVar11;
  plVar7 = (longlong *)*DAT_180cc3e88;
  lVar11 = DAT_180cc3e98;
joined_r0x00018002a81c:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180cc3e98 = lVar11;
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
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_180cc3eb0;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180cc3e98 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180cc3e98;
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
      lVar11 = DAT_180cc3e98;
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
        lVar11 = DAT_180cc3e98;
        goto joined_r0x00018002a81c;
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
    lVar11 = DAT_180cc3e98;
  } while( true );
}



/* ===== 18002a9a0 FUN_18002a9a0 ===== */

void FUN_18002a9a0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar4 = *(longlong *)(param_1 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 0x20) {
    FUN_18000f890(lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  uVar3 = *(longlong *)(param_1 + 0x10) * 0x20;
  if (0xfff < uVar3) {
    if ((lVar4 - *(longlong *)(lVar4 + -8)) - 8U < 0x20) {
      thunk_FUN_1803d64e0(*(longlong *)(lVar4 + -8),uVar3 + 0x27);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    lVar4 = (*pcVar2)(5);
  }
  thunk_FUN_1803d64e0(lVar4);
  return;
}



/* ===== 18002aa30 FUN_18002aa30 ===== */

void FUN_18002aa30(longlong param_1,ulonglong param_2)

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
  FUN_180029a30(param_1 + 0x18,2L << (bVar11 & 0x3f),plVar2);
  *(longlong *)(param_1 + 0x38) = lVar15;
  *(longlong *)(param_1 + 0x30) = lVar15 + -1;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x00018002aab8:
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
LAB_18002abbf:
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
              goto joined_r0x00018002aab8;
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
      goto joined_r0x00018002aab8;
    }
    if ((uVar8 != 0) && (iVar7 = memcmp(plVar12,plVar14,uVar8), iVar7 != 0)) {
      plVar10 = *(longlong **)(lVar15 + uVar13 * 0x10);
      uVar17 = plVar6[5];
      goto LAB_18002abbf;
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



/* ===== 18002acd0 FUN_18002acd0 ===== */

void FUN_18002acd0(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180cc3fe8;
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
  FUN_180029d30(&DAT_180cc3ff8,2L << (bVar10 & 0x3f),DAT_180cc3fe8);
  DAT_180cc4010 = lVar11 - 1;
  DAT_180cc4018 = lVar11;
  plVar7 = (longlong *)*DAT_180cc3fe8;
  lVar11 = DAT_180cc3ff8;
joined_r0x00018002ad4c:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180cc3ff8 = lVar11;
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
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_180cc4010;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180cc3ff8 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180cc3ff8;
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
      lVar11 = DAT_180cc3ff8;
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
        lVar11 = DAT_180cc3ff8;
        goto joined_r0x00018002ad4c;
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
    lVar11 = DAT_180cc3ff8;
  } while( true );
}



/* ===== 18002aed0 FUN_18002aed0 ===== */

void FUN_18002aed0(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180cc3f48;
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
  FUN_180029d30(&DAT_180cc3f58,2L << (bVar10 & 0x3f),DAT_180cc3f48);
  DAT_180cc3f70 = lVar11 - 1;
  DAT_180cc3f78 = lVar11;
  plVar7 = (longlong *)*DAT_180cc3f48;
  lVar11 = DAT_180cc3f58;
joined_r0x00018002af4c:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180cc3f58 = lVar11;
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
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_180cc3f70;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180cc3f58 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180cc3f58;
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
      lVar11 = DAT_180cc3f58;
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
        lVar11 = DAT_180cc3f58;
        goto joined_r0x00018002af4c;
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
    lVar11 = DAT_180cc3f58;
  } while( true );
}



/* ===== 18002b0d0 FUN_18002b0d0 ===== */

void FUN_18002b0d0(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180cc3ec8;
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
  FUN_180029d30(&DAT_180cc3ed8,2L << (bVar10 & 0x3f),DAT_180cc3ec8);
  DAT_180cc3ef0 = lVar11 - 1;
  DAT_180cc3ef8 = lVar11;
  plVar7 = (longlong *)*DAT_180cc3ec8;
  lVar11 = DAT_180cc3ed8;
joined_r0x00018002b14c:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180cc3ed8 = lVar11;
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
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_180cc3ef0;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180cc3ed8 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180cc3ed8;
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
      lVar11 = DAT_180cc3ed8;
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
        lVar11 = DAT_180cc3ed8;
        goto joined_r0x00018002b14c;
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
    lVar11 = DAT_180cc3ed8;
  } while( true );
}



/* ===== 18002b2d0 FUN_18002b2d0 ===== */

void FUN_18002b2d0(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180cc40a8;
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
  FUN_180029d30(&DAT_180cc40b8,2L << (bVar10 & 0x3f),DAT_180cc40a8);
  DAT_180cc40d0 = lVar11 - 1;
  DAT_180cc40d8 = lVar11;
  plVar7 = (longlong *)*DAT_180cc40a8;
  lVar11 = DAT_180cc40b8;
joined_r0x00018002b34c:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180cc40b8 = lVar11;
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
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_180cc40d0;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180cc40b8 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180cc40b8;
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
      lVar11 = DAT_180cc40b8;
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
        lVar11 = DAT_180cc40b8;
        goto joined_r0x00018002b34c;
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
    lVar11 = DAT_180cc40b8;
  } while( true );
}



/* ===== 18002b4d0 FUN_18002b4d0 ===== */

void FUN_18002b4d0(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180cc3f08;
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
  FUN_180029d30(&DAT_180cc3f18,2L << (bVar10 & 0x3f),DAT_180cc3f08);
  DAT_180cc3f30 = lVar11 - 1;
  DAT_180cc3f38 = lVar11;
  plVar7 = (longlong *)*DAT_180cc3f08;
  lVar11 = DAT_180cc3f18;
joined_r0x00018002b54c:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180cc3f18 = lVar11;
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
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_180cc3f30;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180cc3f18 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180cc3f18;
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
      lVar11 = DAT_180cc3f18;
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
        lVar11 = DAT_180cc3f18;
        goto joined_r0x00018002b54c;
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
    lVar11 = DAT_180cc3f18;
  } while( true );
}



