/* ===== 180354f20 FUN_180354f20 ===== */

undefined8 * FUN_180354f20(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar8 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar7 = (undefined8 *)(DAT_1811077e0 & uVar8);
  puVar4 = *(undefined8 **)(DAT_1811077c8 + 8 + (longlong)puVar7 * 0x10);
  puVar9 = DAT_1811077b8;
  if (puVar4 != DAT_1811077b8) {
    puVar7 = *(undefined8 **)(DAT_1811077c8 + (longlong)puVar7 * 0x10);
    iVar1 = *(int *)(puVar4 + 2);
    puVar9 = puVar4;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == puVar7) break;
      puVar9 = (undefined8 *)puVar9[1];
      iVar1 = *(int *)(puVar9 + 2);
    }
  }
  if (DAT_1811077c0 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x20,puVar7,DAT_1811077c8,param_4,&DAT_1811077b8,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
  uVar3 = DAT_1811077e8;
  if (DAT_1811077b0 < (float)(DAT_1811077c0 + 1) / (float)DAT_1811077e8) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_1811077c0 + 1) / DAT_1811077b0);
    lVar5 = 0;
    if ((DAT_1808acd00 <= fVar11) && (fVar11 = fVar11 - DAT_1808acd00, fVar11 < DAT_1808acd00)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar5)) {
      uVar6 = (longlong)fVar11 + lVar5;
    }
    uVar10 = uVar3;
    if ((uVar3 < uVar6) && ((0x1ff < uVar3 || (uVar10 = uVar3 * 8, uVar3 * 8 < uVar6)))) {
      uVar10 = uVar6;
    }
    FUN_18035abf0(uVar6,uVar10);
    puVar7 = *(undefined8 **)(DAT_1811077c8 + 8 + (DAT_1811077e0 & uVar8) * 0x10);
    puVar9 = DAT_1811077b8;
    if (puVar7 != DAT_1811077b8) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar9 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar9 == *(undefined8 **)(DAT_1811077c8 + (DAT_1811077e0 & uVar8) * 0x10))
        goto LAB_18035514f;
        puVar9 = (undefined8 *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_18035514f:
  puVar7 = (undefined8 *)puVar9[1];
  DAT_1811077c0 = DAT_1811077c0 + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar9[1] = puVar4;
  lVar5 = DAT_1811077c8;
  uVar8 = DAT_1811077e0 & uVar8;
  puVar2 = *(undefined8 **)(DAT_1811077c8 + uVar8 * 0x10);
  if (puVar2 == DAT_1811077b8) {
    *(undefined8 **)(DAT_1811077c8 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar9) {
      *(undefined8 **)(DAT_1811077c8 + uVar8 * 0x10) = puVar4;
      goto LAB_1803551ae;
    }
    if (*(undefined8 **)(DAT_1811077c8 + 8 + uVar8 * 0x10) != puVar7) goto LAB_1803551ae;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
LAB_1803551ae:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1803551e0 FUN_1803551e0 ===== */

void FUN_1803551e0(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    do {
      FUN_1803498b0(param_1 + 0xe8);
      FUN_18000f890(param_1 + 200);
      FUN_18000f890(param_1 + 0xa8);
      FUN_18000f890(param_1 + 0x70);
      FUN_18000f890(param_1 + 0x50);
      FUN_18000f890(param_1 + 0x20);
      FUN_18000f890(param_1);
      param_1 = param_1 + 0x100;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 180355260 FUN_180355260 ===== */

undefined8 * FUN_180355260(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar8 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar7 = (undefined8 *)(DAT_181107000 & uVar8);
  puVar4 = *(undefined8 **)(DAT_181106fe8 + 8 + (longlong)puVar7 * 0x10);
  puVar9 = DAT_181106fd8;
  if (puVar4 != DAT_181106fd8) {
    puVar7 = *(undefined8 **)(DAT_181106fe8 + (longlong)puVar7 * 0x10);
    iVar1 = *(int *)(puVar4 + 2);
    puVar9 = puVar4;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == puVar7) break;
      puVar9 = (undefined8 *)puVar9[1];
      iVar1 = *(int *)(puVar9 + 2);
    }
  }
  if (DAT_181106fe0 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x20,puVar7,DAT_181106fe8,param_4,&DAT_181106fd8,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
  uVar3 = DAT_181107008;
  if (DAT_181106fd0 < (float)(DAT_181106fe0 + 1) / (float)DAT_181107008) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_181106fe0 + 1) / DAT_181106fd0);
    lVar5 = 0;
    if ((DAT_1808acd00 <= fVar11) && (fVar11 = fVar11 - DAT_1808acd00, fVar11 < DAT_1808acd00)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar5)) {
      uVar6 = (longlong)fVar11 + lVar5;
    }
    uVar10 = uVar3;
    if ((uVar3 < uVar6) && ((0x1ff < uVar3 || (uVar10 = uVar3 * 8, uVar3 * 8 < uVar6)))) {
      uVar10 = uVar6;
    }
    FUN_18035adc0(uVar6,uVar10);
    puVar7 = *(undefined8 **)(DAT_181106fe8 + 8 + (DAT_181107000 & uVar8) * 0x10);
    puVar9 = DAT_181106fd8;
    if (puVar7 != DAT_181106fd8) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar9 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar9 == *(undefined8 **)(DAT_181106fe8 + (DAT_181107000 & uVar8) * 0x10))
        goto LAB_18035548f;
        puVar9 = (undefined8 *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_18035548f:
  puVar7 = (undefined8 *)puVar9[1];
  DAT_181106fe0 = DAT_181106fe0 + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar9[1] = puVar4;
  lVar5 = DAT_181106fe8;
  uVar8 = DAT_181107000 & uVar8;
  puVar2 = *(undefined8 **)(DAT_181106fe8 + uVar8 * 0x10);
  if (puVar2 == DAT_181106fd8) {
    *(undefined8 **)(DAT_181106fe8 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar9) {
      *(undefined8 **)(DAT_181106fe8 + uVar8 * 0x10) = puVar4;
      goto LAB_1803554ee;
    }
    if (*(undefined8 **)(DAT_181106fe8 + 8 + uVar8 * 0x10) != puVar7) goto LAB_1803554ee;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
LAB_1803554ee:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180355520 FUN_180355520 ===== */

void FUN_180355520(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_1800e8580(puVar2 + 10);
    FUN_18000f890(puVar2 + 6);
    FUN_18000f890(puVar2 + 2);
    thunk_FUN_1803d64e0(puVar2,0x68);
    puVar2 = puVar1;
  }
  return;
}



/* ===== 180355580 FUN_180355580 ===== */

void FUN_180355580(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_1800e8580(lVar1 + 0x50);
    FUN_18000f890(lVar1 + 0x30);
    FUN_18000f890(lVar1 + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x68);
  }
  return;
}



/* ===== 1803555d0 FUN_1803555d0 ===== */

void FUN_1803555d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_1800244c0(lVar2);
  }
  return;
}



/* ===== 180355610 FUN_180355610 ===== */

void FUN_180355610(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  thunk_FUN_1803d64e0(param_1,0x10);
  return;
}



/* ===== 180355620 FUN_180355620 ===== */

TypeDescriptor * FUN_180355620(void)

{
  return &`void___cdecl_menu::_anon_9464B40D::draw_language_row(ImDrawList*___ptr64)'::__l46::
          <lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 180355630 FUN_180355630 ===== */

void FUN_180355630(longlong param_1)

{
  FUN_18035fb30(*(undefined4 *)(param_1 + 8));
  if (DAT_180cd0fa6 == '\0') {
    DAT_180cd0fa6 = '\x01';
    FUN_18035be50();
    FUN_18035dd90();
  }
  FUN_180310b90(DAT_1811078b0);
  return;
}



/* ===== 180355670 FUN_180355670 ===== */

undefined8 * FUN_180355670(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::
             _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::draw_language_row(ImDrawList*___ptr64)'::`46'::<lambda_1>,void>
             ::vftable;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
  return param_2;
}



/* ===== 1803556a0 FUN_1803556a0 ===== */

void FUN_1803556a0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_18034e360(param_1[3],*(undefined8 *)(lVar1 + 8));
    *(longlong *)(lVar1 + 8) = param_1[1];
  }
  return;
}



/* ===== 1803556e0 FUN_1803556e0 ===== */

void FUN_1803556e0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  if (*param_1 == 0) goto LAB_180355758;
  FUN_18034e360(*param_1,param_1[1]);
  puVar3 = auStack_48;
  puVar4 = auStack_48;
  uVar5 = *param_1;
  uVar2 = uVar5;
  if ((ulonglong)(((longlong)(param_1[2] - uVar5) >> 3) * 8) < 0x1000) {
LAB_180355750:
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
      goto LAB_180355750;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x180355758;
  thunk_FUN_1803d64e0(uVar2);
LAB_180355758:
  *param_1 = param_2;
  param_1[1] = param_3 * 0xb8 + param_2;
  param_1[2] = param_4 * 0xb8 + param_2;
  return;
}



/* ===== 180355780 FUN_180355780 ===== */

void FUN_180355780(float *param_1)

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
  FUN_1801d5c70(param_1,uVar4);
  return;
}



/* ===== 180355830 FUN_180355830 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180355830(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = DAT_181107648;
  fVar5 = (float)FUN_18053ef70((float)(DAT_181107620 + 1) / _DAT_181107610);
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
  FUN_180358fe0(uVar3,uVar4);
  return;
}



/* ===== 1803558e0 FUN_1803558e0 ===== */

longlong * FUN_1803558e0(undefined8 param_1,ulonglong param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = *(undefined8 **)(param_3 + 8);
  DAT_181107620 = DAT_181107620 + 1;
  *param_4 = param_3;
  param_4[1] = (longlong)puVar1;
  *puVar1 = param_4;
  *(longlong **)(param_3 + 8) = param_4;
  lVar3 = DAT_181107628;
  param_2 = DAT_181107640 & param_2;
  lVar2 = *(longlong *)(DAT_181107628 + param_2 * 0x10);
  if (lVar2 == DAT_181107618) {
    *(longlong **)(DAT_181107628 + param_2 * 0x10) = param_4;
    *(longlong **)(lVar3 + 8 + param_2 * 0x10) = param_4;
    return param_4;
  }
  if (lVar2 == param_3) {
    *(longlong **)(DAT_181107628 + param_2 * 0x10) = param_4;
    return param_4;
  }
  if (*(undefined8 **)(DAT_181107628 + 8 + param_2 * 0x10) == puVar1) {
    *(longlong **)(DAT_181107628 + 8 + param_2 * 0x10) = param_4;
  }
  return param_4;
}



/* ===== 1803559d0 FUN_1803559d0 ===== */

void FUN_1803559d0(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4,
                  longlong *param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar3 = param_2;
  lVar2 = param_2;
  if (param_2 < lVar5) {
    do {
      cVar1 = FUN_180023470(*(longlong *)(param_1 + 0x10 + lVar3 * 0x10) * 0x20 + *param_5,
                            *(longlong *)(param_1 + 8 + lVar3 * 0x10) * 0x20 + *param_5);
      lVar2 = ((longlong)cVar1 >> 0x3f) + 2 + lVar3 * 2;
      *(undefined8 *)(param_1 + lVar3 * 8) = *(undefined8 *)(param_1 + lVar2 * 8);
      lVar3 = lVar2;
    } while (lVar2 < lVar5);
  }
  if ((lVar2 == lVar5) && ((param_3 & 1) == 0)) {
    *(undefined8 *)(param_1 + lVar2 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar2 = param_3 - 1;
  }
  if (param_2 < lVar2) {
    lVar3 = *param_4;
    do {
      lVar4 = lVar2 + -1 >> 1;
      lVar5 = *(longlong *)(param_1 + lVar4 * 8);
      cVar1 = FUN_180023470(lVar5 * 0x20 + *param_5,lVar3 * 0x20 + *param_5);
      if (-1 < cVar1) break;
      *(longlong *)(param_1 + lVar2 * 8) = lVar5;
      lVar2 = lVar4;
    } while (param_2 < lVar4);
  }
  *(longlong *)(param_1 + lVar2 * 8) = *param_4;
  return;
}



/* ===== 180355ae0 FUN_180355ae0 ===== */

void FUN_180355ae0(ulonglong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_res18;
  longlong *local_58;
  
  plVar5 = param_3 + 1;
  if (param_2 < param_3) {
    lVar1 = *param_5;
    while( true ) {
      plVar6 = param_3 + -1;
      lVar8 = param_3[-1] * 0x20 + lVar1;
      lVar3 = *param_3 * 0x20 + lVar1;
      cVar2 = FUN_180023470(lVar8,lVar3);
      if (cVar2 < '\0') break;
      cVar2 = FUN_180023470(lVar3,lVar8);
      if ((cVar2 < '\0') || (param_3 = plVar6, plVar6 <= param_2)) break;
    }
  }
  if (plVar5 < param_4) {
    lVar1 = *param_5;
    lVar3 = *param_3 * 0x20 + lVar1;
    do {
      lVar8 = *plVar5 * 0x20 + lVar1;
      cVar2 = FUN_180023470(lVar8,lVar3);
      if ((cVar2 < '\0') || (cVar2 = FUN_180023470(lVar3,lVar8), cVar2 < '\0')) break;
      plVar5 = plVar5 + 1;
    } while (plVar5 < param_4);
  }
  plVar6 = param_3;
  plVar9 = plVar5;
  local_res18 = param_3;
  local_58 = plVar5;
  do {
    plVar4 = param_3;
    if (plVar5 < param_4) {
      do {
        lVar1 = *plVar5;
        lVar8 = lVar1 * 0x20 + *param_5;
        lVar3 = *plVar6 * 0x20 + *param_5;
        cVar2 = FUN_180023470(lVar3,lVar8);
        if (-1 < cVar2) {
          cVar2 = FUN_180023470(lVar8,lVar3);
          if (cVar2 < '\0') break;
          if (plVar9 != plVar5) {
            lVar3 = *plVar9;
            *plVar9 = lVar1;
            *plVar5 = lVar3;
          }
          plVar9 = plVar9 + 1;
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 < param_4);
      plVar4 = local_res18;
      local_58 = plVar5;
    }
    if (param_2 < plVar4) {
      do {
        plVar5 = plVar4 + -1;
        lVar1 = *plVar5;
        lVar3 = lVar1 * 0x20 + *param_5;
        lVar8 = *plVar6 * 0x20 + *param_5;
        cVar2 = FUN_180023470(lVar3,lVar8);
        if (-1 < cVar2) {
          cVar2 = FUN_180023470(lVar8,lVar3);
          if (cVar2 < '\0') break;
          if (plVar4 != plVar6) {
            lVar3 = plVar6[-1];
            plVar6[-1] = lVar1;
            *plVar5 = lVar3;
          }
          plVar6 = plVar6 + -1;
        }
        plVar4 = plVar5;
      } while (param_2 < plVar5);
      plVar5 = local_58;
      local_res18 = plVar4;
    }
    if (plVar4 == param_2) {
      if (plVar5 == param_4) {
        *param_1 = (ulonglong)plVar6;
        param_1[1] = (ulonglong)plVar9;
        return;
      }
      if (plVar9 != plVar5) {
        lVar1 = *plVar6;
        *plVar6 = *plVar9;
        *plVar9 = lVar1;
      }
      plVar9 = plVar9 + 1;
      lVar1 = *plVar6;
      *plVar6 = *plVar5;
      *plVar5 = lVar1;
      plVar5 = plVar5 + 1;
      param_3 = plVar4;
      plVar6 = plVar6 + 1;
      local_58 = plVar5;
    }
    else {
      param_3 = plVar4 + -1;
      local_res18 = param_3;
      if (plVar5 == param_4) {
        plVar7 = plVar6 + -1;
        if (plVar6 != plVar4) {
          lVar1 = *param_3;
          *param_3 = *plVar7;
          *plVar7 = lVar1;
        }
        plVar6 = plVar9 + -1;
        plVar9 = plVar9 + -1;
        lVar1 = *plVar7;
        *plVar7 = *plVar6;
        *plVar9 = lVar1;
        plVar6 = plVar7;
      }
      else {
        lVar1 = *plVar5;
        *plVar5 = *param_3;
        plVar5 = plVar5 + 1;
        *param_3 = lVar1;
        local_58 = plVar5;
      }
    }
  } while( true );
}



/* ===== 180355db0 FUN_180355db0 ===== */

void FUN_180355db0(longlong param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar6 = param_2;
  while (lVar6 < lVar5) {
    iVar1 = *(int *)(param_1 + 8 + lVar6 * 8);
    iVar2 = *(int *)(param_1 + 4 + lVar6 * 8);
    if (iVar1 == 0) {
      if (iVar2 == 0) goto LAB_180355e05;
      uVar3 = 0;
    }
    else if (iVar2 == 0) {
LAB_180355e05:
      uVar3 = 1;
    }
    else {
      uVar3 = (ulonglong)(iVar1 <= iVar2);
    }
    lVar4 = lVar6 * 2 + 1 + uVar3;
    *(undefined4 *)(param_1 + lVar6 * 4) = *(undefined4 *)(param_1 + lVar4 * 4);
    lVar6 = lVar4;
  }
  if ((lVar6 == lVar5) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + lVar6 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar6 = param_3 - 1;
  }
  if (param_2 < lVar6) {
    iVar1 = *param_4;
    do {
      lVar5 = lVar6 + -1 >> 1;
      iVar2 = *(int *)(param_1 + lVar5 * 4);
      if (iVar2 == 0) {
        if (iVar1 == 0) break;
      }
      else if ((iVar1 == 0) || (iVar2 <= iVar1)) break;
      *(int *)(param_1 + lVar6 * 4) = iVar2;
      lVar6 = lVar5;
    } while (param_2 < lVar5);
  }
  *(int *)(param_1 + lVar6 * 4) = *param_4;
  return;
}



/* ===== 180355e90 FUN_180355e90 ===== */

void FUN_180355e90(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = *param_1;
  lVar2 = (longlong)param_3 - (longlong)param_1 >> 2;
  if (lVar2 < 0x29) {
    iVar3 = *param_2;
    if (iVar3 == 0) {
      if (iVar1 == 0) goto LAB_1803560b6;
    }
    else if ((iVar1 == 0) || (iVar3 <= iVar1)) goto LAB_1803560b6;
    *param_2 = iVar1;
    *param_1 = iVar3;
LAB_1803560b6:
    iVar1 = *param_3;
    iVar3 = *param_2;
    if (iVar1 == 0) {
      if (iVar3 == 0) {
        return;
      }
      *param_3 = iVar3;
      *param_2 = 0;
      if (*param_1 == 0) {
        return;
      }
      *param_2 = *param_1;
      *param_1 = 0;
      return;
    }
    if (iVar3 == 0) {
      return;
    }
    if (iVar1 <= iVar3) {
      return;
    }
    *param_3 = iVar3;
    *param_2 = iVar1;
    iVar3 = *param_1;
    if (iVar3 == 0) {
      return;
    }
    if (iVar3 < iVar1) {
      *param_2 = iVar3;
      *param_1 = iVar1;
      return;
    }
    return;
  }
  lVar2 = lVar2 + 1 >> 3;
  iVar3 = param_1[lVar2];
  if (iVar3 == 0) {
    if (iVar1 != 0) goto LAB_180355ee2;
  }
  else if ((iVar1 != 0) && (iVar1 < iVar3)) {
LAB_180355ee2:
    param_1[lVar2] = iVar1;
    *param_1 = iVar3;
  }
  iVar1 = param_1[lVar2 * 2];
  iVar3 = param_1[lVar2];
  if (iVar1 == 0) {
    if (iVar3 != 0) {
      param_1[lVar2 * 2] = iVar3;
      param_1[lVar2] = 0;
      iVar3 = *param_1;
      if (iVar3 != 0) goto LAB_180355f2c;
    }
  }
  else if ((iVar3 != 0) && (iVar3 < iVar1)) {
    param_1[lVar2 * 2] = iVar3;
    param_1[lVar2] = iVar1;
    iVar3 = *param_1;
    if ((iVar3 != 0) && (iVar3 < iVar1)) {
LAB_180355f2c:
      param_1[lVar2] = iVar3;
      *param_1 = iVar1;
    }
  }
  iVar1 = *param_2;
  piVar4 = param_2 + -lVar2;
  iVar3 = *piVar4;
  if (iVar1 == 0) {
    if (iVar3 != 0) goto LAB_180355f55;
  }
  else if ((iVar3 != 0) && (iVar3 < iVar1)) {
LAB_180355f55:
    *param_2 = iVar3;
    *piVar4 = iVar1;
  }
  iVar1 = param_2[lVar2];
  iVar3 = *param_2;
  if (iVar1 == 0) {
    if (iVar3 != 0) {
      param_2[lVar2] = iVar3;
      *param_2 = 0;
      iVar3 = *piVar4;
      if (iVar3 != 0) goto LAB_180355f9b;
    }
  }
  else if ((iVar3 != 0) && (iVar3 < iVar1)) {
    param_2[lVar2] = iVar3;
    *param_2 = iVar1;
    iVar3 = *piVar4;
    if ((iVar3 != 0) && (iVar3 < iVar1)) {
LAB_180355f9b:
      *param_2 = iVar3;
      *piVar4 = iVar1;
    }
  }
  piVar5 = param_3 + lVar2 * -2;
  piVar4 = param_3 + -lVar2;
  iVar1 = *piVar4;
  iVar3 = *piVar5;
  if (iVar1 == 0) {
    if (iVar3 != 0) goto LAB_180355fce;
  }
  else if ((iVar3 != 0) && (iVar3 < iVar1)) {
LAB_180355fce:
    *piVar4 = iVar3;
    *piVar5 = iVar1;
  }
  iVar1 = *param_3;
  iVar3 = *piVar4;
  if (iVar1 == 0) {
    if (iVar3 != 0) {
      *param_3 = iVar3;
      *piVar4 = 0;
      iVar3 = *piVar5;
      if (iVar3 != 0) goto LAB_180356011;
    }
  }
  else if ((iVar3 != 0) && (iVar3 < iVar1)) {
    *param_3 = iVar3;
    *piVar4 = iVar1;
    iVar3 = *piVar5;
    if ((iVar3 != 0) && (iVar3 < iVar1)) {
LAB_180356011:
      *piVar4 = iVar3;
      *piVar5 = iVar1;
    }
  }
  iVar1 = *param_2;
  iVar3 = param_1[lVar2];
  if (iVar1 == 0) {
    if (iVar3 == 0) goto LAB_18035603b;
  }
  else if ((iVar3 == 0) || (iVar1 <= iVar3)) goto LAB_18035603b;
  *param_2 = iVar3;
  param_1[lVar2] = iVar1;
LAB_18035603b:
  iVar1 = *piVar4;
  iVar3 = *param_2;
  if (iVar1 == 0) {
    if (iVar3 != 0) {
      *piVar4 = iVar3;
      *param_2 = 0;
      if (param_1[lVar2] != 0) {
        *param_2 = param_1[lVar2];
        param_1[lVar2] = 0;
        return;
      }
    }
  }
  else if ((iVar3 != 0) && (iVar3 < iVar1)) {
    *piVar4 = iVar3;
    *param_2 = iVar1;
    iVar3 = param_1[lVar2];
    if ((iVar3 != 0) && (iVar3 < iVar1)) {
      *param_2 = iVar3;
      param_1[lVar2] = iVar1;
      return;
    }
  }
  return;
}



/* ===== 180356100 FUN_180356100 ===== */

undefined8 * FUN_180356100(undefined8 *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  
  piVar6 = param_3 + 1;
  do {
    while( true ) {
      piVar8 = param_3;
      if (piVar8 <= param_2) goto LAB_18035615e;
      iVar1 = piVar8[-1];
      iVar2 = *piVar8;
      param_3 = piVar8 + -1;
      if (iVar1 == 0) break;
      if (((iVar2 == 0) || (iVar2 < iVar1)) || (iVar1 < iVar2)) goto LAB_18035615e;
    }
  } while (iVar2 == 0);
LAB_18035615e:
  piVar7 = piVar6;
  piVar4 = piVar8;
  if (piVar6 < param_4) {
    iVar1 = *piVar8;
    do {
      iVar2 = *piVar6;
      piVar7 = piVar6;
      if (iVar2 == 0) {
        if (iVar1 != 0) break;
      }
      else if (((iVar1 == 0) || (iVar1 < iVar2)) || (iVar2 < iVar1)) break;
      piVar6 = piVar6 + 1;
      piVar7 = piVar6;
    } while (piVar6 < param_4);
  }
joined_r0x000180356193:
  do {
    if (param_4 <= piVar6) {
joined_r0x0001803561db:
      piVar3 = piVar8;
      if (piVar3 <= param_2) goto LAB_18035622f;
      iVar1 = piVar3[-1];
      piVar8 = piVar3 + -1;
      iVar2 = *piVar4;
      if (iVar1 == 0) break;
      if (iVar2 == 0) goto LAB_18035622f;
      if (iVar2 < iVar1) goto joined_r0x0001803561db;
      if (iVar2 != 0) {
        if ((iVar1 == 0) || (iVar2 <= iVar1)) goto LAB_18035620f;
        goto LAB_18035622f;
      }
      if (iVar1 != 0) goto LAB_18035622f;
      goto LAB_18035620f;
    }
    iVar1 = *piVar4;
    iVar2 = *piVar6;
    if (iVar1 != 0) {
      if (iVar2 != 0) {
        if (iVar2 < iVar1) goto LAB_1803561cf;
        if (iVar2 == 0) {
          if (iVar1 == 0) goto LAB_1803561be;
        }
        else if ((iVar1 == 0) || (iVar2 <= iVar1)) {
LAB_1803561be:
          if (piVar7 != piVar6) {
            iVar1 = *piVar7;
            *piVar7 = iVar2;
            *piVar6 = iVar1;
          }
          piVar7 = piVar7 + 1;
          goto LAB_1803561cf;
        }
      }
      goto joined_r0x0001803561db;
    }
    if (iVar2 == 0) goto LAB_1803561be;
LAB_1803561cf:
    piVar6 = piVar6 + 1;
  } while( true );
  if (iVar2 != 0) goto joined_r0x0001803561db;
LAB_18035620f:
  piVar5 = piVar4 + -1;
  bVar9 = piVar3 != piVar4;
  piVar4 = piVar5;
  if (bVar9) {
    iVar2 = *piVar5;
    *piVar5 = iVar1;
    *piVar8 = iVar2;
  }
  goto joined_r0x0001803561db;
LAB_18035622f:
  if (piVar3 == param_2) {
    if (piVar6 == param_4) {
      *param_1 = piVar4;
      param_1[1] = piVar7;
      return param_1;
    }
    if (piVar7 != piVar6) {
      iVar1 = *piVar4;
      *piVar4 = *piVar7;
      *piVar7 = iVar1;
    }
    iVar1 = *piVar4;
    *piVar4 = *piVar6;
    *piVar6 = iVar1;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
    piVar8 = piVar3;
    piVar4 = piVar4 + 1;
  }
  else {
    piVar8 = piVar3 + -1;
    if (piVar6 == param_4) {
      piVar5 = piVar4 + -1;
      if (piVar4 != piVar3) {
        iVar1 = *piVar8;
        *piVar8 = *piVar5;
        *piVar5 = iVar1;
      }
      iVar1 = *piVar5;
      *piVar5 = piVar7[-1];
      piVar7[-1] = iVar1;
      piVar7 = piVar7 + -1;
      piVar4 = piVar5;
    }
    else {
      iVar1 = *piVar6;
      *piVar6 = *piVar8;
      piVar6 = piVar6 + 1;
      *piVar8 = iVar1;
    }
  }
  goto joined_r0x000180356193;
}



/* ===== 1803562d0 FUN_1803562d0 ===== */

void FUN_1803562d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_5 <= param_4) {
joined_r0x00018035641b:
    for (; param_1 != param_2; param_1 = param_1 + 0xb8) {
      FUN_18034ad30(param_3,param_1);
      param_3 = param_3 + 0xb8;
    }
    return;
  }
  lVar2 = param_1;
LAB_180356320:
  param_5 = param_5 - param_4;
  lVar1 = lVar2 + param_4 * 0xb8;
  lVar3 = param_4;
  if (param_5 < param_4) {
    lVar3 = param_5;
  }
  param_5 = param_5 - lVar3;
  param_1 = lVar3 * 0xb8 + lVar1;
  lVar3 = lVar1;
  lVar4 = param_3;
  do {
    while( true ) {
      if (*(char *)(lVar3 + 0x90) == *(char *)(lVar2 + 0x90)) {
        bVar5 = *(int *)(lVar2 + 0x48) < *(int *)(lVar3 + 0x48);
      }
      else {
        bVar5 = *(char *)(lVar3 + 0x90) == '\0';
      }
      param_3 = lVar4 + 0xb8;
      if (!bVar5) break;
      FUN_18034ad30(lVar4,lVar3);
      lVar3 = lVar3 + 0xb8;
      lVar4 = param_3;
      if (lVar3 == param_1) goto joined_r0x000180356385;
    }
    FUN_18034ad30(lVar4,lVar2);
    lVar2 = lVar2 + 0xb8;
    lVar4 = param_3;
  } while (lVar2 != lVar1);
  for (; lVar3 != param_1; lVar3 = lVar3 + 0xb8) {
    FUN_18034ad30(param_3,lVar3);
    param_3 = param_3 + 0xb8;
  }
  goto LAB_1803563ee;
joined_r0x000180356385:
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0xb8) {
    FUN_18034ad30(param_3,lVar2);
    param_3 = param_3 + 0xb8;
  }
LAB_1803563ee:
  lVar2 = param_1;
  if (param_5 <= param_4) goto joined_r0x00018035641b;
  goto LAB_180356320;
}



/* ===== 180356450 FUN_180356450 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180356450(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58;
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_108;
  puVar1 = param_2;
  FUN_18034fd60(&local_e8);
  while (puVar1 != param_1) {
    param_2 = param_2 + -0x2e;
    param_3 = param_3 + -0xb8;
    FUN_18034ad30(param_3,param_2);
    puVar1 = param_2;
  }
  *param_1 = local_e8;
  param_1[1] = local_e4;
  FUN_18002ba60(param_1 + 2,local_e0);
  FUN_18002ba60(param_1 + 10,local_c0);
  param_1[0x12] = local_a0;
  *(undefined1 *)(param_1 + 0x13) = local_9c;
  FUN_18002ba60(param_1 + 0x14,local_98);
  FUN_18002ba60(param_1 + 0x1c,local_78);
  *(undefined1 *)(param_1 + 0x24) = local_58;
  FUN_18002ba60(param_1 + 0x26,local_50);
  FUN_18000f890(local_50);
  FUN_18000f890(local_78);
  FUN_18000f890(local_98);
  FUN_18000f890(local_c0);
  FUN_18000f890(local_e0);
  return;
}



/* ===== 180356580 FUN_180356580 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180356580(undefined4 *param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_f8;
  FUN_18034fd60(&local_d8,param_1);
  for (; param_2 != param_3; param_2 = param_2 + 0xb8) {
    FUN_18034ad30(param_1,param_2);
    param_1 = param_1 + 0x2e;
  }
  *param_1 = local_d8;
  param_1[1] = local_d4;
  FUN_18002ba60(param_1 + 2,local_d0);
  FUN_18002ba60(param_1 + 10,local_b0);
  param_1[0x12] = local_90;
  *(undefined1 *)(param_1 + 0x13) = local_8c;
  FUN_18002ba60(param_1 + 0x14,local_88);
  FUN_18002ba60(param_1 + 0x1c,local_68);
  *(undefined1 *)(param_1 + 0x24) = local_48;
  FUN_18002ba60(param_1 + 0x26,local_40);
  FUN_18000f890(local_40);
  FUN_18000f890(local_68);
  FUN_18000f890(local_88);
  FUN_18000f890(local_b0);
  FUN_18000f890(local_d0);
  return;
}



/* ===== 1803566c0 FUN_1803566c0 ===== */

void FUN_1803566c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((param_5 < param_4) || (lVar4 = param_1, lVar1 = param_6, param_7 < param_4)) {
    if (param_7 < param_5) {
      FUN_180359c10(param_1,param_2);
      return;
    }
    FUN_180359a60(param_1,param_2,param_3,param_6);
    return;
  }
  for (; lVar4 != param_2; lVar4 = lVar4 + 0xb8) {
    FUN_18034fd60(lVar1);
    lVar1 = lVar1 + 0xb8;
  }
  FUN_18034ad30(param_1,param_2);
  param_2 = param_2 + 0xb8;
  lVar2 = param_1 + 0xb8;
  lVar4 = param_6;
  do {
    if (*(char *)(param_2 + 0x90) == *(char *)(lVar4 + 0x90)) {
      bVar5 = *(int *)(lVar4 + 0x48) < *(int *)(param_2 + 0x48);
    }
    else {
      bVar5 = *(char *)(param_2 + 0x90) == '\0';
    }
    lVar3 = lVar2 + 0xb8;
    if (bVar5) {
      FUN_18034ad30(lVar2,param_2);
      param_2 = param_2 + 0xb8;
      if (param_2 == param_3) {
        for (; lVar4 != lVar1; lVar4 = lVar4 + 0xb8) {
          FUN_18034ad30(lVar3,lVar4);
          lVar3 = lVar3 + 0xb8;
        }
        for (; param_6 != lVar1; param_6 = param_6 + 0xb8) {
          FUN_18000f890(param_6 + 0x98);
          FUN_18000f890(param_6 + 0x70);
          FUN_18000f890(param_6 + 0x50);
          FUN_18000f890(param_6 + 0x28);
          FUN_18000f890(param_6 + 8);
        }
        return;
      }
    }
    else {
      FUN_18034ad30(lVar2,lVar4);
      if (lVar4 == lVar1 + -0x170) {
        for (; param_2 != param_3; param_2 = param_2 + 0xb8) {
          FUN_18034ad30(lVar3,param_2);
          lVar3 = lVar3 + 0xb8;
        }
        FUN_18034ad30(lVar3,lVar1 + -0xb8);
        for (; param_6 != lVar1; param_6 = param_6 + 0xb8) {
          FUN_18000f890(param_6 + 0x98);
          FUN_18000f890(param_6 + 0x70);
          FUN_18000f890(param_6 + 0x50);
          FUN_18000f890(param_6 + 0x28);
          FUN_18000f890(param_6 + 8);
        }
        return;
      }
      lVar4 = lVar4 + 0xb8;
    }
    lVar2 = lVar3;
  } while( true );
}



/* ===== 180356920 FUN_180356920 ===== */

void FUN_180356920(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_5 <= param_4) {
joined_r0x000180356a6b:
    for (; param_1 != param_2; param_1 = param_1 + 0xb8) {
      FUN_18034ad30(param_3,param_1);
      param_3 = param_3 + 0xb8;
    }
    return;
  }
  lVar2 = param_1;
LAB_180356970:
  param_5 = param_5 - param_4;
  lVar1 = lVar2 + param_4 * 0xb8;
  lVar3 = param_4;
  if (param_5 < param_4) {
    lVar3 = param_5;
  }
  param_5 = param_5 - lVar3;
  param_1 = lVar3 * 0xb8 + lVar1;
  lVar3 = lVar1;
  lVar4 = param_3;
  do {
    while( true ) {
      if (*(char *)(lVar3 + 0x90) == *(char *)(lVar2 + 0x90)) {
        bVar5 = *(int *)(lVar2 + 4) < *(int *)(lVar3 + 4);
      }
      else {
        bVar5 = *(char *)(lVar3 + 0x90) == '\0';
      }
      param_3 = lVar4 + 0xb8;
      if (!bVar5) break;
      FUN_18034ad30(lVar4,lVar3);
      lVar3 = lVar3 + 0xb8;
      lVar4 = param_3;
      if (lVar3 == param_1) goto joined_r0x0001803569d5;
    }
    FUN_18034ad30(lVar4,lVar2);
    lVar2 = lVar2 + 0xb8;
    lVar4 = param_3;
  } while (lVar2 != lVar1);
  for (; lVar3 != param_1; lVar3 = lVar3 + 0xb8) {
    FUN_18034ad30(param_3,lVar3);
    param_3 = param_3 + 0xb8;
  }
  goto LAB_180356a3e;
joined_r0x0001803569d5:
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0xb8) {
    FUN_18034ad30(param_3,lVar2);
    param_3 = param_3 + 0xb8;
  }
LAB_180356a3e:
  lVar2 = param_1;
  if (param_5 <= param_4) goto joined_r0x000180356a6b;
  goto LAB_180356970;
}



/* ===== 180356aa0 FUN_180356aa0 ===== */

void FUN_180356aa0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((param_5 < param_4) || (lVar4 = param_1, lVar1 = param_6, param_7 < param_4)) {
    if (param_7 < param_5) {
      FUN_180359fa0(param_1,param_2);
      return;
    }
    FUN_180359df0(param_1,param_2,param_3,param_6);
    return;
  }
  for (; lVar4 != param_2; lVar4 = lVar4 + 0xb8) {
    FUN_18034fd60(lVar1);
    lVar1 = lVar1 + 0xb8;
  }
  FUN_18034ad30(param_1,param_2);
  param_2 = param_2 + 0xb8;
  lVar2 = param_1 + 0xb8;
  lVar4 = param_6;
  do {
    if (*(char *)(param_2 + 0x90) == *(char *)(lVar4 + 0x90)) {
      bVar5 = *(int *)(lVar4 + 4) < *(int *)(param_2 + 4);
    }
    else {
      bVar5 = *(char *)(param_2 + 0x90) == '\0';
    }
    lVar3 = lVar2 + 0xb8;
    if (bVar5) {
      FUN_18034ad30(lVar2,param_2);
      param_2 = param_2 + 0xb8;
      if (param_2 == param_3) {
        for (; lVar4 != lVar1; lVar4 = lVar4 + 0xb8) {
          FUN_18034ad30(lVar3,lVar4);
          lVar3 = lVar3 + 0xb8;
        }
        for (; param_6 != lVar1; param_6 = param_6 + 0xb8) {
          FUN_18000f890(param_6 + 0x98);
          FUN_18000f890(param_6 + 0x70);
          FUN_18000f890(param_6 + 0x50);
          FUN_18000f890(param_6 + 0x28);
          FUN_18000f890(param_6 + 8);
        }
        return;
      }
    }
    else {
      FUN_18034ad30(lVar2,lVar4);
      if (lVar4 == lVar1 + -0x170) {
        for (; param_2 != param_3; param_2 = param_2 + 0xb8) {
          FUN_18034ad30(lVar3,param_2);
          lVar3 = lVar3 + 0xb8;
        }
        FUN_18034ad30(lVar3,lVar1 + -0xb8);
        for (; param_6 != lVar1; param_6 = param_6 + 0xb8) {
          FUN_18000f890(param_6 + 0x98);
          FUN_18000f890(param_6 + 0x70);
          FUN_18000f890(param_6 + 0x50);
          FUN_18000f890(param_6 + 0x28);
          FUN_18000f890(param_6 + 8);
        }
        return;
      }
      lVar4 = lVar4 + 0xb8;
    }
    lVar2 = lVar3;
  } while( true );
}



/* ===== 180356d00 FUN_180356d00 ===== */

void FUN_180356d00(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_5 <= param_4) {
joined_r0x000180356e50:
    for (; param_1 != param_2; param_1 = param_1 + 0xb8) {
      FUN_18034ad30(param_3,param_1);
      param_3 = param_3 + 0xb8;
    }
    return;
  }
  lVar3 = param_1;
LAB_180356d50:
  param_5 = param_5 - param_4;
  lVar1 = param_4 * 0xb8 + lVar3;
  lVar4 = param_4;
  if (param_5 < param_4) {
    lVar4 = param_5;
  }
  param_5 = param_5 - lVar4;
  param_1 = lVar4 * 0xb8 + lVar1;
  lVar4 = lVar1;
  lVar5 = param_3;
  do {
    while( true ) {
      if (*(char *)(lVar4 + 0x90) == *(char *)(lVar3 + 0x90)) {
        bVar2 = FUN_180023470(lVar4 + 8,lVar3 + 8);
        bVar6 = (bool)(bVar2 >> 7);
      }
      else {
        bVar6 = *(char *)(lVar4 + 0x90) == '\0';
      }
      param_3 = lVar5 + 0xb8;
      if (bVar6 == false) break;
      FUN_18034ad30(lVar5,lVar4);
      lVar4 = lVar4 + 0xb8;
      lVar5 = param_3;
      if (lVar4 == param_1) goto joined_r0x000180356dbf;
    }
    FUN_18034ad30(lVar5,lVar3);
    lVar3 = lVar3 + 0xb8;
    lVar5 = param_3;
  } while (lVar3 != lVar1);
  for (; lVar4 != param_1; lVar4 = lVar4 + 0xb8) {
    FUN_18034ad30(param_3,lVar4);
    param_3 = param_3 + 0xb8;
  }
  goto LAB_180356e1e;
joined_r0x000180356dbf:
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0xb8) {
    FUN_18034ad30(param_3,lVar3);
    param_3 = param_3 + 0xb8;
  }
LAB_180356e1e:
  lVar3 = param_1;
  if (param_5 <= param_4) goto joined_r0x000180356e50;
  goto LAB_180356d50;
}



/* ===== 180356e80 FUN_180356e80 ===== */

void FUN_180356e80(undefined4 *param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_5 <= param_4) {
LAB_180356f83:
    FUN_180540530(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  puVar8 = param_1;
LAB_180356ed0:
  puVar1 = puVar8 + param_4;
  lVar10 = param_5 - param_4;
  lVar5 = param_4;
  if (lVar10 < param_4) {
    lVar5 = lVar10;
  }
  lVar7 = param_4 * 2;
  if (lVar10 < param_4) {
    lVar7 = param_5;
  }
  param_1 = puVar8 + lVar7;
  puVar6 = puVar1;
  do {
    uVar9 = *puVar6;
    uVar2 = *puVar8;
    iVar3 = FUN_1802f7770(uVar9);
    iVar4 = FUN_1802f7770(uVar2);
    if (iVar3 < iVar4) {
      puVar6 = puVar6 + 1;
      *param_3 = uVar9;
      if (puVar6 == param_1) break;
    }
    else {
      puVar8 = puVar8 + 1;
      *param_3 = uVar2;
      if (puVar8 == puVar1) {
        lVar7 = (longlong)param_1 - (longlong)puVar6;
        goto LAB_180356f4b;
      }
    }
    param_3 = param_3 + 1;
  } while( true );
  lVar7 = (longlong)puVar1 - (longlong)puVar8;
  puVar6 = puVar8;
LAB_180356f4b:
  FUN_180540530(param_3 + 1,puVar6,lVar7);
  param_3 = (undefined4 *)((longlong)param_3 + lVar7 + 4);
  puVar8 = param_1;
  param_5 = lVar10 - lVar5;
  if (lVar10 - lVar5 <= param_4) goto LAB_180356f83;
  goto LAB_180356ed0;
}



/* ===== 180356fa0 FUN_180356fa0 ===== */

void FUN_180356fa0(uint *param_1,uint *param_2,uint *param_3,longlong param_4,longlong param_5,
                  uint *param_6,longlong param_7,undefined1 param_8)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    FUN_180540530(param_6,param_1,lVar6);
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = param_6;
    puVar10 = param_1 + 1;
    do {
      uVar5 = *param_2;
      puVar1 = puVar10 + 1;
      uVar8 = (ulonglong)*puVar7;
      iVar3 = FUN_1802f7770(uVar5);
      uVar11 = (uint)uVar8;
      iVar4 = FUN_1802f7770(uVar8 & 0xffffffff);
      if (iVar3 < iVar4) {
        param_2 = param_2 + 1;
        *puVar10 = uVar5;
        if (param_2 == param_3) {
          FUN_180540530(puVar1,puVar7,(longlong)param_6 + (lVar6 - (longlong)puVar7));
          return;
        }
      }
      else {
        *puVar10 = uVar11;
        if (puVar7 == (uint *)((longlong)param_6 + lVar6 + -8)) {
          uVar2 = *(undefined4 *)((longlong)param_6 + lVar6 + -4);
          FUN_180540530(puVar1,param_2,(longlong)param_3 - (longlong)param_2);
          *(undefined4 *)((longlong)puVar1 + ((longlong)param_3 - (longlong)param_2)) = uVar2;
          return;
        }
        puVar7 = puVar7 + 1;
      }
      puVar10 = puVar1;
    } while( true );
  }
  if (param_7 < param_5) {
    if (param_5 < param_4) {
      lVar6 = param_5 >> 1;
      uVar8 = (longlong)param_2 - (longlong)param_1 >> 2;
      puVar10 = param_2 + lVar6;
      puVar7 = param_1;
      if (0 < (longlong)uVar8) {
        uVar5 = FUN_1802f7770(*puVar10);
        uVar12 = (ulonglong)uVar5;
        do {
          uVar9 = uVar8 >> 1;
          iVar3 = FUN_1802f7770(puVar7[uVar9]);
          if (iVar3 <= (int)uVar12) {
            puVar7 = puVar7 + uVar9 + 1;
            uVar9 = uVar8 + (-1 - uVar9);
          }
          uVar8 = uVar9;
        } while (0 < (longlong)uVar9);
      }
      lVar13 = (longlong)puVar7 - (longlong)param_1 >> 2;
    }
    else {
      lVar13 = param_4 >> 1;
      uVar8 = (longlong)param_3 - (longlong)param_2 >> 2;
      puVar7 = param_1 + lVar13;
      puVar10 = param_2;
      if (0 < (longlong)uVar8) {
        uVar5 = FUN_1802f7770(*puVar7);
        uVar12 = (ulonglong)uVar5;
        do {
          uVar9 = uVar8 >> 1;
          iVar3 = FUN_1802f7770(puVar10[uVar9]);
          if (iVar3 < (int)uVar12) {
            puVar10 = puVar10 + uVar9 + 1;
            uVar9 = uVar8 + (-1 - uVar9);
          }
          uVar8 = uVar9;
        } while (0 < (longlong)uVar9);
      }
      lVar6 = (longlong)puVar10 - (longlong)param_2 >> 2;
    }
    FUN_18035b260(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar7,puVar10,
                  lVar13,lVar6);
  }
  else {
    FUN_180540530(param_6,param_2,(longlong)param_3 - (longlong)param_2);
    puVar7 = param_3 + -1;
    puVar10 = (uint *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -4);
    *puVar7 = param_2[-1];
    param_2 = param_2 + -2;
    while( true ) {
      while( true ) {
        uVar5 = *puVar10;
        uVar11 = *param_2;
        iVar3 = FUN_1802f7770(uVar5);
        iVar4 = FUN_1802f7770(uVar11);
        if (iVar4 <= iVar3) break;
        puVar7[-1] = uVar11;
        if (param_1 == param_2) {
          puVar7[-2] = *puVar10;
          FUN_180540530((longlong)(puVar7 + -2) - ((longlong)puVar10 - (longlong)param_6),param_6,
                        (longlong)puVar10 - (longlong)param_6);
          return;
        }
        param_2 = param_2 + -1;
        puVar7 = puVar7 + -1;
      }
      puVar10 = puVar10 + -1;
      puVar7[-1] = uVar5;
      if (param_6 == puVar10) break;
      puVar7 = puVar7 + -1;
    }
    puVar7[-2] = *param_2;
    FUN_180540530((longlong)(puVar7 + -2) - ((longlong)param_2 - (longlong)param_1),param_1,
                  (longlong)param_2 - (longlong)param_1);
    *param_1 = *param_6;
  }
  return;
}



/* ===== 1803572c0 FUN_1803572c0 ===== */

void FUN_1803572c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_5 <= param_4) {
joined_r0x00018035741f:
    for (; param_1 != param_2; param_1 = param_1 + 0x50) {
      FUN_18002ba60(param_3,param_1);
      FUN_180351790(param_3 + 0x20,param_1 + 0x20);
      param_3 = param_3 + 0x50;
    }
    return;
  }
  lVar5 = param_1;
LAB_180357310:
  param_5 = param_5 - param_4;
  lVar1 = param_4 * 0x50 + lVar5;
  lVar4 = param_4;
  if (param_5 < param_4) {
    lVar4 = param_5;
  }
  param_5 = param_5 - lVar4;
  param_1 = lVar4 * 0x50 + lVar1;
  lVar3 = param_3;
  lVar4 = lVar1;
  do {
    while( true ) {
      param_3 = lVar3 + 0x50;
      cVar2 = FUN_180023470(lVar4,lVar5);
      if (-1 < cVar2) break;
      FUN_18002ba60(lVar3,lVar4);
      FUN_180351790(lVar3 + 0x20,lVar4 + 0x20);
      lVar4 = lVar4 + 0x50;
      lVar3 = param_3;
      if (lVar4 == param_1) goto joined_r0x00018035736c;
    }
    FUN_18002ba60(lVar3,lVar5);
    FUN_180351790(lVar3 + 0x20,lVar5 + 0x20);
    lVar5 = lVar5 + 0x50;
    lVar3 = param_3;
  } while (lVar5 != lVar1);
  for (; lVar4 != param_1; lVar4 = lVar4 + 0x50) {
    FUN_18002ba60(param_3,lVar4);
    FUN_180351790(param_3 + 0x20,lVar4 + 0x20);
    param_3 = param_3 + 0x50;
  }
  goto LAB_1803573e5;
joined_r0x00018035736c:
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0x50) {
    FUN_18002ba60(param_3,lVar5);
    FUN_180351790(param_3 + 0x20,lVar5 + 0x20);
    param_3 = param_3 + 0x50;
  }
LAB_1803573e5:
  lVar5 = param_1;
  if (param_5 <= param_4) goto joined_r0x00018035741f;
  goto LAB_180357310;
}



/* ===== 180357450 FUN_180357450 ===== */

void FUN_180357450(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    FUN_18035a860(param_1,param_2,param_3,param_6);
    return;
  }
  if (param_7 < param_5) {
    FUN_18035a9d0(param_1,param_2);
    return;
  }
  lVar2 = FUN_1803576e0(param_2,param_3,param_6);
  lVar3 = param_3 + -0x50;
  FUN_18002ba60(lVar3,param_2 + -0x50);
  FUN_180351790(param_3 + -0x30,param_2 + -0x30);
  lVar4 = lVar2 + -0x50;
  param_2 = param_2 + -0xa0;
  while( true ) {
    while( true ) {
      cVar1 = FUN_180023470(lVar4,param_2);
      if (-1 < cVar1) break;
      FUN_18002ba60(lVar3 + -0x50,param_2);
      FUN_180351790(lVar3 + -0x30,param_2 + 0x20);
      if (param_1 == param_2) {
        FUN_18002ba60(lVar3 + -0xa0,lVar4);
        FUN_180351790(lVar3 + -0x80,lVar4 + 0x20);
        lVar3 = lVar3 + -0xa0;
        while (lVar4 != param_6) {
          FUN_18002ba60(lVar3 + -0x50,lVar4 + -0x50);
          FUN_180351790(lVar3 + -0x30,lVar4 + -0x30);
          lVar3 = lVar3 + -0x50;
          lVar4 = lVar4 + -0x50;
        }
        for (; param_6 != lVar2; param_6 = param_6 + 0x50) {
          FUN_18034fab0(param_6 + 0x38);
          FUN_1800288b0(param_6 + 0x20);
          FUN_18000f890(param_6);
        }
        return;
      }
      param_2 = param_2 + -0x50;
      lVar3 = lVar3 + -0x50;
    }
    FUN_18002ba60(lVar3 + -0x50,lVar4);
    FUN_180351790(lVar3 + -0x30,lVar4 + 0x20);
    lVar4 = lVar4 + -0x50;
    if (param_6 == lVar4) break;
    lVar3 = lVar3 + -0x50;
  }
  FUN_18002ba60(lVar3 + -0xa0,param_2);
  FUN_180351790(lVar3 + -0x80,param_2 + 0x20);
  lVar3 = lVar3 + -0xa0;
  while (param_2 != param_1) {
    FUN_18002ba60(lVar3 + -0x50,param_2 + -0x50);
    FUN_180351790(lVar3 + -0x30,param_2 + -0x30);
    lVar3 = lVar3 + -0x50;
    param_2 = param_2 + -0x50;
  }
  FUN_18002ba60(param_1,param_6);
  FUN_180351790(param_1 + 0x20,param_6 + 0x20);
  for (; param_6 != lVar2; param_6 = param_6 + 0x50) {
    FUN_18034fab0(param_6 + 0x38);
    FUN_1800288b0(param_6 + 0x20);
    FUN_18000f890(param_6);
  }
  return;
}



/* ===== 1803576e0 FUN_1803576e0 ===== */

undefined8 * FUN_1803576e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 10) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    uVar1 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar1;
    uVar1 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar1;
    *(undefined1 *)param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    uVar1 = param_1[6];
    uVar2 = param_1[5];
    uVar3 = param_1[4];
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_3[4] = uVar3;
    param_3[5] = uVar2;
    param_3[6] = uVar1;
    uVar1 = param_1[9];
    uVar2 = param_1[8];
    uVar3 = param_1[7];
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_3[7] = uVar3;
    param_3[8] = uVar2;
    param_3[9] = uVar1;
    param_3 = param_3 + 10;
  }
  return param_3;
}



/* ===== 1803577a0 FUN_1803577a0 ===== */

undefined8 * FUN_1803577a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_3 = *param_1;
    uVar1 = param_1[3];
    uVar2 = param_1[2];
    uVar3 = param_1[1];
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_3[1] = uVar3;
    param_3[2] = uVar2;
    param_3[3] = uVar1;
    param_3 = param_3 + 4;
  }
  return param_3;
}



/* ===== 180357810 FUN_180357810 ===== */

longlong FUN_180357810(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    uVar4 = 0;
    do {
      FUN_180359720(param_3);
      uVar1 = *(undefined8 *)(param_1 + 0xf0);
      uVar2 = *(undefined8 *)(param_1 + 0xf8);
      uVar3 = *(undefined8 *)(param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0xf0) = uVar4;
      *(undefined8 *)(param_1 + 0xf8) = uVar4;
      *(undefined8 *)(param_1 + 0xe8) = uVar4;
      param_1 = param_1 + 0x100;
      *(undefined8 *)(param_3 + 0xe8) = uVar3;
      *(undefined8 *)(param_3 + 0xf0) = uVar1;
      *(undefined8 *)(param_3 + 0xf8) = uVar2;
      param_3 = param_3 + 0x100;
    } while (param_1 != param_2);
  }
  FUN_1803551e0(param_3,param_3);
  return param_3;
}



/* ===== 1803578a0 FUN_1803578a0 ===== */

void FUN_1803578a0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_3[1] - *param_3 != 0) {
    uVar2 = param_3[1] - *param_3 >> 4;
    if (0xfffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar3 = uVar2 * 0x10;
    lVar1 = FUN_18000fb70(lVar3);
    *param_2 = lVar1;
    param_2[1] = lVar1;
    param_2[2] = lVar3 + lVar1;
    uVar2 = param_3[1] - *param_3;
    FUN_180540530(lVar1,*param_3,uVar2);
    param_2[1] = (uVar2 & 0xfffffffffffffff0) + lVar1;
  }
  return;
}



/* ===== 180357940 FUN_180357940 ===== */

void FUN_180357940(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar5 = auStack_58;
  puVar6 = auStack_58;
  uVar4 = *param_1;
  uVar2 = (longlong)(param_1[2] - uVar4) >> 4;
  if (param_3 <= uVar2) {
    uVar2 = (longlong)(param_1[1] - uVar4) >> 4;
    if (uVar2 < param_3) {
      FUN_180540530(uVar4,param_2,uVar2 * 0x10);
      uVar4 = param_1[1];
      lVar8 = (param_3 - uVar2) * 0x10;
      FUN_180540530(uVar4,uVar2 * 0x10 + param_2,lVar8);
    }
    else {
      lVar8 = param_3 << 4;
      FUN_180540530(uVar4,param_2,lVar8);
    }
    goto LAB_180357a74;
  }
  if (0xfffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  if (0xfffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar2 = 0xfffffffffffffff;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    if (uVar2 < param_3) {
      uVar2 = param_3;
    }
  }
  puVar7 = auStack_58;
  if (uVar4 != 0) {
    uVar3 = uVar4;
    if ((param_1[2] - uVar4 & 0xfffffffffffffff0) < 0x1000) {
LAB_1803579d7:
      puVar6 = puVar5;
    }
    else {
      uVar3 = *(ulonglong *)(uVar4 - 8);
      uVar4 = (uVar4 - uVar3) - 8;
      if (0x1f < uVar4) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar5 = auStack_50;
        uVar3 = uVar4;
        goto LAB_1803579d7;
      }
    }
    *(undefined8 *)(puVar6 + -8) = 0x1803579df;
    thunk_FUN_1803d64e0(uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar7 = puVar6;
  }
  if (0xfffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + -8) = &UNK_180357a8e;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar7 + -8) = 0x180357a01;
  uVar4 = FUN_18000fb70(uVar2 * 0x10);
  *param_1 = uVar4;
  param_1[1] = uVar4;
  lVar8 = param_3 << 4;
  param_1[2] = uVar2 * 0x10 + uVar4;
  *(undefined8 *)(puVar7 + -8) = 0x180357a25;
  FUN_180540530(uVar4,param_2,lVar8);
LAB_180357a74:
  param_1[1] = lVar8 + uVar4;
  return;
}



/* ===== 180357aa0 FUN_180357aa0 ===== */

void FUN_180357aa0(longlong param_1,char param_2)

{
  FUN_18000f890(param_1 + 0x30);
  if (param_2 != '\0') {
    thunk_FUN_1803d64e0(param_1,0x228);
  }
  return;
}



/* ===== 180357ae0 FUN_180357ae0 ===== */

TypeDescriptor * FUN_180357ae0(void)

{
  return &`void___cdecl_menu::_anon_9464B40D::sync_item<`void___cdecl_menu::_anon_9464B40D::show_agent_view_scene(int,int,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,menu::_anon_9464B40D::scene_item&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,`void___cdecl_menu::_anon_9464B40D::show_agent_view_scene(int,int,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>&&___ptr64,int)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 180357af0 FUN_180357af0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180357af0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_60 = param_2;
  uVar5 = FUN_1802dc850(param_1 + 8,local_38);
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x40);
  uVar6 = s_try___panel_Data___wlShown____re_18076a738._8_8_;
  local_48 = 0x36;
  local_40 = 0x3f;
  *(undefined8 *)local_58 = s_try___panel_Data___wlShown____re_18076a738._0_8_;
  *(undefined8 *)(local_58 + 8) = uVar6;
  uVar6 = s_try___panel_Data___wlShown____re_18076a738._24_8_;
  *(undefined8 *)(local_58 + 0x10) = s_try___panel_Data___wlShown____re_18076a738._16_8_;
  *(undefined8 *)(local_58 + 0x18) = uVar6;
  uVar4 = s_try___panel_Data___wlShown____re_18076a738._40_4_;
  uVar3 = s_try___panel_Data___wlShown____re_18076a738._36_4_;
  uVar2 = CONCAT22(s_try___panel_Data___wlShown____re_18076a738._46_2_,
                   s_try___panel_Data___wlShown____re_18076a738._44_2_);
  *(undefined4 *)(local_58 + 0x20) = s_try___panel_Data___wlShown____re_18076a738._32_4_;
  *(undefined4 *)(local_58 + 0x24) = uVar3;
  *(undefined4 *)(local_58 + 0x28) = uVar4;
  *(undefined4 *)(local_58 + 0x2c) = uVar2;
  *(ulonglong *)(local_58 + 0x2e) =
       CONCAT62(s_try___panel_Data___wlShown____re_18076a738._48_6_,
                s_try___panel_Data___wlShown____re_18076a738._46_2_);
  local_58[0x36] = '\0';
  FUN_180066820(param_2,&local_58,uVar5);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  FUN_18000f890(local_38);
  return param_2;
}



/* ===== 180357c00 FUN_180357c00 ===== */

undefined8 * FUN_180357c00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1804ecaa0(0x228);
  *puVar1 = std::
            _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::sync_item<`void___cdecl_menu::_anon_9464B40D::show_agent_view_scene(int,int,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,menu::_anon_9464B40D::scene_item&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,`void___cdecl_menu::_anon_9464B40D::show_agent_view_scene(int,int,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>&&___ptr64,int)'::`2'::<lambda_1>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
            ::vftable;
  FUN_1803450b0(puVar1 + 1,param_1 + 8);
  return puVar1;
}



/* ===== 180357c50 FUN_180357c50 ===== */

TypeDescriptor * FUN_180357c50(void)

{
  return &`void___cdecl_menu::_anon_9464B40D::show_agent_view_scene(int,int,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 180357c60 FUN_180357c60 ===== */

undefined8 FUN_180357c60(longlong param_1,undefined8 param_2)

{
  FUN_1802dc850(param_1 + 8);
  return param_2;
}



/* ===== 180357c80 FUN_180357c80 ===== */

undefined8 * FUN_180357c80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1804ecaa0(0x228);
  *puVar1 = std::
            _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::show_agent_view_scene(int,int,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            ::vftable;
  FUN_1803450b0(puVar1 + 1,param_1 + 8);
  return puVar1;
}



/* ===== 180357cd0 FUN_180357cd0 ===== */

void FUN_180357cd0(longlong param_1,char param_2)

{
  FUN_18000f890(param_1 + 0x30);
  if (param_2 != '\0') {
    thunk_FUN_1803d64e0(param_1,0x3b0);
  }
  return;
}



/* ===== 180357d10 FUN_180357d10 ===== */

TypeDescriptor * FUN_180357d10(void)

{
  return &`void___cdecl_menu::_anon_9464B40D::sync_item<`void___cdecl_menu::_anon_9464B40D::show_agent_scene(int,int,config::skin_settings_const*___ptr64,int)'::`2'::<lambda_1>_>(char_const*___ptr64,menu::_anon_9464B40D::scene_item&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,`void___cdecl_menu::_anon_9464B40D::show_agent_scene(int,int,config::skin_settings_const*___ptr64,int)'::`2'::<lambda_1>&&___ptr64,int)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 180357d20 FUN_180357d20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180357d20(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_60 = param_2;
  uVar5 = FUN_1802db550(param_1 + 8,local_38);
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x40);
  uVar6 = s_try___panel_Data___wlShown____re_18076a738._8_8_;
  local_48 = 0x36;
  local_40 = 0x3f;
  *(undefined8 *)local_58 = s_try___panel_Data___wlShown____re_18076a738._0_8_;
  *(undefined8 *)(local_58 + 8) = uVar6;
  uVar6 = s_try___panel_Data___wlShown____re_18076a738._24_8_;
  *(undefined8 *)(local_58 + 0x10) = s_try___panel_Data___wlShown____re_18076a738._16_8_;
  *(undefined8 *)(local_58 + 0x18) = uVar6;
  uVar4 = s_try___panel_Data___wlShown____re_18076a738._40_4_;
  uVar3 = s_try___panel_Data___wlShown____re_18076a738._36_4_;
  uVar2 = CONCAT22(s_try___panel_Data___wlShown____re_18076a738._46_2_,
                   s_try___panel_Data___wlShown____re_18076a738._44_2_);
  *(undefined4 *)(local_58 + 0x20) = s_try___panel_Data___wlShown____re_18076a738._32_4_;
  *(undefined4 *)(local_58 + 0x24) = uVar3;
  *(undefined4 *)(local_58 + 0x28) = uVar4;
  *(undefined4 *)(local_58 + 0x2c) = uVar2;
  *(ulonglong *)(local_58 + 0x2e) =
       CONCAT62(s_try___panel_Data___wlShown____re_18076a738._48_6_,
                s_try___panel_Data___wlShown____re_18076a738._46_2_);
  local_58[0x36] = '\0';
  FUN_180066820(param_2,&local_58,uVar5);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  FUN_18000f890(local_38);
  return param_2;
}



/* ===== 180357e30 FUN_180357e30 ===== */

undefined8 * FUN_180357e30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1804ecaa0(0x3b0);
  *puVar1 = std::
            _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::sync_item<`void___cdecl_menu::_anon_9464B40D::show_agent_scene(int,int,config::skin_settings_const*___ptr64,int)'::`2'::<lambda_1>_>(char_const*___ptr64,menu::_anon_9464B40D::scene_item&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,`void___cdecl_menu::_anon_9464B40D::show_agent_scene(int,int,config::skin_settings_const*___ptr64,int)'::`2'::<lambda_1>&&___ptr64,int)'::`2'::<lambda_1>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
            ::vftable;
  FUN_180344c60(puVar1 + 1,param_1 + 8);
  return puVar1;
}



/* ===== 180357e80 FUN_180357e80 ===== */

TypeDescriptor * FUN_180357e80(void)

{
  return &`void___cdecl_menu::_anon_9464B40D::show_agent_scene(int,int,config::skin_settings_const*___ptr64,int)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 180357e90 FUN_180357e90 ===== */

undefined8 FUN_180357e90(longlong param_1,undefined8 param_2)

{
  FUN_1802db550(param_1 + 8);
  return param_2;
}



/* ===== 180357eb0 FUN_180357eb0 ===== */

undefined8 * FUN_180357eb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1804ecaa0(0x3b0);
  *puVar1 = std::
            _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::show_agent_scene(int,int,config::skin_settings_const*___ptr64,int)'::`2'::<lambda_1>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            ::vftable;
  FUN_180344c60(puVar1 + 1,param_1 + 8);
  return puVar1;
}



/* ===== 180357f00 FUN_180357f00 ===== */

void FUN_180357f00(longlong param_1,char param_2)

{
  FUN_1800288b0(param_1 + 0x68);
  FUN_18000f890(param_1 + 0x48);
  FUN_18000f890(param_1 + 0x28);
  FUN_18000f890(param_1 + 8);
  if (param_2 != '\0') {
    thunk_FUN_1803d64e0(param_1,0x88);
  }
  return;
}



/* ===== 180357f50 FUN_180357f50 ===== */

TypeDescriptor * FUN_180357f50(void)

{
  return &`void___cdecl_menu::_anon_9464B40D::sync_item<`void___cdecl_menu::_anon_9464B40D::show_flat_scene(menu::_anon_9464B40D::inv_scene_kind,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,menu::_anon_9464B40D::scene_item&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,`void___cdecl_menu::_anon_9464B40D::show_flat_scene(menu::_anon_9464B40D::inv_scene_kind,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>&&___ptr64,int)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 180357f60 FUN_180357f60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180357f60(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_60 = param_2;
  uVar5 = FUN_1802d9bf0(param_1 + 8,local_38);
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x40);
  uVar6 = s_try___panel_Data___wlShown____re_18076a738._8_8_;
  local_48 = 0x36;
  local_40 = 0x3f;
  *(undefined8 *)local_58 = s_try___panel_Data___wlShown____re_18076a738._0_8_;
  *(undefined8 *)(local_58 + 8) = uVar6;
  uVar6 = s_try___panel_Data___wlShown____re_18076a738._24_8_;
  *(undefined8 *)(local_58 + 0x10) = s_try___panel_Data___wlShown____re_18076a738._16_8_;
  *(undefined8 *)(local_58 + 0x18) = uVar6;
  uVar4 = s_try___panel_Data___wlShown____re_18076a738._40_4_;
  uVar3 = s_try___panel_Data___wlShown____re_18076a738._36_4_;
  uVar2 = CONCAT22(s_try___panel_Data___wlShown____re_18076a738._46_2_,
                   s_try___panel_Data___wlShown____re_18076a738._44_2_);
  *(undefined4 *)(local_58 + 0x20) = s_try___panel_Data___wlShown____re_18076a738._32_4_;
  *(undefined4 *)(local_58 + 0x24) = uVar3;
  *(undefined4 *)(local_58 + 0x28) = uVar4;
  *(undefined4 *)(local_58 + 0x2c) = uVar2;
  *(ulonglong *)(local_58 + 0x2e) =
       CONCAT62(s_try___panel_Data___wlShown____re_18076a738._48_6_,
                s_try___panel_Data___wlShown____re_18076a738._46_2_);
  local_58[0x36] = '\0';
  FUN_180066820(param_2,&local_58,uVar5);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  FUN_18000f890(local_38);
  return param_2;
}



/* ===== 180358070 FUN_180358070 ===== */

undefined8 * FUN_180358070(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1804ecaa0(0x88);
  *puVar1 = std::
            _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::sync_item<`void___cdecl_menu::_anon_9464B40D::show_flat_scene(menu::_anon_9464B40D::inv_scene_kind,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,menu::_anon_9464B40D::scene_item&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,`void___cdecl_menu::_anon_9464B40D::show_flat_scene(menu::_anon_9464B40D::inv_scene_kind,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>&&___ptr64,int)'::`2'::<lambda_1>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
            ::vftable;
  FUN_180344920(puVar1 + 1,param_1 + 8);
  return puVar1;
}



/* ===== 1803580c0 FUN_1803580c0 ===== */

TypeDescriptor * FUN_1803580c0(void)

{
  return &`void___cdecl_menu::_anon_9464B40D::show_flat_scene(menu::_anon_9464B40D::inv_scene_kind,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 1803580d0 FUN_1803580d0 ===== */

undefined8 FUN_1803580d0(longlong param_1,undefined8 param_2)

{
  FUN_1802d9bf0(param_1 + 8);
  return param_2;
}



/* ===== 1803580f0 FUN_1803580f0 ===== */

undefined8 * FUN_1803580f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1804ecaa0(0x88);
  *puVar1 = std::
            _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::show_flat_scene(menu::_anon_9464B40D::inv_scene_kind,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
            ::vftable;
  FUN_180344920(puVar1 + 1,param_1 + 8);
  return puVar1;
}



/* ===== 180358140 FUN_180358140 ===== */

void FUN_180358140(longlong param_1,char param_2)

{
  FUN_1800288b0(param_1 + 0x228);
  FUN_18000f890(param_1 + 0x208);
  FUN_18000f890(param_1 + 0x1e8);
  if (param_2 != '\0') {
    thunk_FUN_1803d64e0(param_1,0x260);
  }
  return;
}



/* ===== 180358190 FUN_180358190 ===== */

TypeDescriptor * FUN_180358190(void)

{
  return &`void___cdecl_menu::_anon_9464B40D::sync_item<`void___cdecl_menu::_anon_9464B40D::show_weapon_scene(econ::item_const&___ptr64,config::skin_settings_const*___ptr64,placement::scene_setup_const*___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,menu::_anon_9464B40D::scene_item&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,`void___cdecl_menu::_anon_9464B40D::show_weapon_scene(econ::item_const&___ptr64,config::skin_settings_const*___ptr64,placement::scene_setup_const*___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>&&___ptr64,int)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 1803581a0 FUN_1803581a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1803581a0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_60 = param_2;
  uVar5 = FUN_1802d8530(param_1 + 8,local_38);
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x40);
  uVar6 = s_try___panel_Data___wlShown____re_18076a738._8_8_;
  local_48 = 0x36;
  local_40 = 0x3f;
  *(undefined8 *)local_58 = s_try___panel_Data___wlShown____re_18076a738._0_8_;
  *(undefined8 *)(local_58 + 8) = uVar6;
  uVar6 = s_try___panel_Data___wlShown____re_18076a738._24_8_;
  *(undefined8 *)(local_58 + 0x10) = s_try___panel_Data___wlShown____re_18076a738._16_8_;
  *(undefined8 *)(local_58 + 0x18) = uVar6;
  uVar4 = s_try___panel_Data___wlShown____re_18076a738._40_4_;
  uVar3 = s_try___panel_Data___wlShown____re_18076a738._36_4_;
  uVar2 = CONCAT22(s_try___panel_Data___wlShown____re_18076a738._46_2_,
                   s_try___panel_Data___wlShown____re_18076a738._44_2_);
  *(undefined4 *)(local_58 + 0x20) = s_try___panel_Data___wlShown____re_18076a738._32_4_;
  *(undefined4 *)(local_58 + 0x24) = uVar3;
  *(undefined4 *)(local_58 + 0x28) = uVar4;
  *(undefined4 *)(local_58 + 0x2c) = uVar2;
  *(ulonglong *)(local_58 + 0x2e) =
       CONCAT62(s_try___panel_Data___wlShown____re_18076a738._48_6_,
                s_try___panel_Data___wlShown____re_18076a738._46_2_);
  local_58[0x36] = '\0';
  FUN_180066820(param_2,&local_58,uVar5);
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar7)) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  FUN_18000f890(local_38);
  return param_2;
}



/* ===== 1803582b0 FUN_1803582b0 ===== */

undefined8 * FUN_1803582b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1804ecaa0(0x260);
  *puVar1 = std::
            _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::sync_item<`void___cdecl_menu::_anon_9464B40D::show_weapon_scene(econ::item_const&___ptr64,config::skin_settings_const*___ptr64,placement::scene_setup_const*___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>_>(char_const*___ptr64,menu::_anon_9464B40D::scene_item&___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,`void___cdecl_menu::_anon_9464B40D::show_weapon_scene(econ::item_const&___ptr64,config::skin_settings_const*___ptr64,placement::scene_setup_const*___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>&&___ptr64,int)'::`2'::<lambda_1>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
            ::vftable;
  FUN_180344470(puVar1 + 1,param_1 + 8);
  return puVar1;
}



/* ===== 180358300 FUN_180358300 ===== */

TypeDescriptor * FUN_180358300(void)

{
  return &`void___cdecl_menu::_anon_9464B40D::show_weapon_scene(econ::item_const&___ptr64,config::skin_settings_const*___ptr64,placement::scene_setup_const*___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 180358310 FUN_180358310 ===== */

undefined8 FUN_180358310(longlong param_1,undefined8 param_2)

{
  FUN_1802d8530(param_1 + 8);
  return param_2;
}



/* ===== 180358330 FUN_180358330 ===== */

undefined8 * FUN_180358330(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1804ecaa0(0x260);
  *puVar1 = std::
            _Func_impl_no_alloc<`void___cdecl_menu::_anon_9464B40D::show_weapon_scene(econ::item_const&___ptr64,config::skin_settings_const*___ptr64,placement::scene_setup_const*___ptr64,bool,menu::_anon_9464B40D::inv_scene_size_const&___ptr64)'::`2'::<lambda_1>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            ::vftable;
  FUN_180344470(puVar1 + 1,param_1 + 8);
  return puVar1;
}



/* ===== 1803583a0 FUN_1803583a0 ===== */

void FUN_1803583a0(undefined8 param_1,ulonglong param_2)

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
  
  plVar9 = DAT_181107878;
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
  FUN_180029a30(&DAT_181107888,2L << (bVar11 & 0x3f),DAT_181107878);
  DAT_1811078a0 = lVar12 - 1;
  DAT_1811078a8 = lVar12;
  plVar8 = (longlong *)*DAT_181107878;
joined_r0x00018035841c:
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
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 & DAT_1811078a0;
        plVar3 = *(longlong **)(DAT_181107888 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_181107888 + uVar10 * 0x10);
        lVar12 = DAT_181107888 + uVar10 * 0x10;
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
        goto joined_r0x00018035841c;
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



/* ===== 180358570 FUN_180358570 ===== */

void FUN_180358570(undefined8 param_1,ulonglong param_2)

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
  
  plVar9 = DAT_181107688;
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
  FUN_180029a30(&DAT_181107698,2L << (bVar11 & 0x3f),DAT_181107688);
  DAT_1811076b0 = lVar12 - 1;
  DAT_1811076b8 = lVar12;
  plVar8 = (longlong *)*DAT_181107688;
joined_r0x0001803585ec:
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
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 & DAT_1811076b0;
        plVar3 = *(longlong **)(DAT_181107698 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_181107698 + uVar10 * 0x10);
        lVar12 = DAT_181107698 + uVar10 * 0x10;
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
        goto joined_r0x0001803585ec;
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



/* ===== 180358750 FUN_180358750 ===== */

void FUN_180358750(undefined8 param_1,ulonglong param_2)

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
  
  plVar9 = DAT_181106ec8;
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
  FUN_180029a30(&DAT_181106ed8,2L << (bVar11 & 0x3f),DAT_181106ec8);
  DAT_181106ef0 = lVar12 - 1;
  DAT_181106ef8 = lVar12;
  plVar8 = (longlong *)*DAT_181106ec8;
joined_r0x0001803587cc:
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
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 & DAT_181106ef0;
        plVar3 = *(longlong **)(DAT_181106ed8 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_181106ed8 + uVar10 * 0x10);
        lVar12 = DAT_181106ed8 + uVar10 * 0x10;
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
        goto joined_r0x0001803587cc;
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



/* ===== 180358920 FUN_180358920 ===== */

void FUN_180358920(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  for (lVar6 = *(longlong *)(param_1 + 0x18); lVar6 != lVar2; lVar6 = lVar6 + 0x18) {
    FUN_1800244c0(lVar6);
  }
  uVar5 = *(ulonglong *)(param_1 + 8);
  uVar4 = *(longlong *)(param_1 + 0x10) * 0x18;
  if (0xfff < uVar4) {
    plVar1 = (longlong *)(uVar5 - 8);
    uVar5 = (uVar5 - *plVar1) - 8;
    if (uVar5 < 0x20) {
      thunk_FUN_1803d64e0(*plVar1,uVar4 + 0x27);
      return;
    }
    uVar4 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
  }
  thunk_FUN_1803d64e0(uVar5,uVar4);
  return;
}



/* ===== 1803589d0 FUN_1803589d0 ===== */

void FUN_1803589d0(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  byte bVar12;
  longlong *_Buf1;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  plVar7 = DAT_181107428;
  for (lVar14 = 0x3f; 0xfffffffffffffffU >> lVar14 == 0; lVar14 = lVar14 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar14 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar9 = param_2 - 1 | 1;
  lVar14 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  bVar12 = (char)lVar14 + 1;
  lVar14 = 1L << (bVar12 & 0x3f);
  FUN_180029d30(&DAT_181107438,2L << (bVar12 & 0x3f),DAT_181107428);
  DAT_181107450 = lVar14 - 1;
  DAT_181107458 = lVar14;
  plVar6 = (longlong *)*DAT_181107428;
  lVar14 = DAT_181107438;
joined_r0x000180358a51:
  do {
    while( true ) {
      if (plVar6 == plVar7) {
        DAT_181107438 = lVar14;
        return;
      }
      uVar16 = plVar6[5];
      plVar11 = plVar6 + 2;
      plVar2 = (longlong *)*plVar6;
      uVar9 = plVar6[4];
      if (0xf < uVar16) {
        plVar11 = (longlong *)plVar6[2];
      }
      uVar17 = 0xcbf29ce484222325;
      uVar10 = 0;
      if (uVar9 != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar11 + uVar10);
          uVar10 = uVar10 + 1;
          uVar17 = (uVar17 ^ *pbVar1) * 0x100000001b3;
        } while (uVar10 < uVar9);
      }
      uVar17 = uVar17 & DAT_181107450;
      plVar11 = *(longlong **)(lVar14 + uVar17 * 0x10);
      DAT_181107438 = lVar14;
      if (plVar11 != plVar7) break;
      *(longlong **)(lVar14 + uVar17 * 0x10) = plVar6;
      *(longlong **)(lVar14 + 8 + uVar17 * 0x10) = plVar6;
      plVar6 = plVar2;
      lVar14 = DAT_181107438;
    }
    plVar15 = *(longlong **)(lVar14 + 8 + uVar17 * 0x10);
    plVar13 = plVar15 + 2;
    if (0xf < (ulonglong)plVar15[5]) {
      plVar13 = (longlong *)*plVar13;
    }
    _Buf1 = plVar6 + 2;
    if (0xf < uVar16) {
      _Buf1 = (longlong *)plVar6[2];
    }
    if (uVar9 != plVar15[4]) {
LAB_180358b5a:
      if (plVar11 != plVar15) {
        do {
          plVar15 = (longlong *)plVar15[1];
          plVar11 = plVar15 + 2;
          if (0xf < (ulonglong)plVar15[5]) {
            plVar11 = (longlong *)*plVar11;
          }
          if (uVar16 < 0x10) {
            plVar13 = plVar6 + 2;
          }
          else {
            plVar13 = (longlong *)plVar6[2];
          }
          if (uVar9 == plVar15[4]) {
            if ((uVar9 == 0) || (iVar8 = memcmp(plVar13,plVar11,uVar9), iVar8 == 0)) {
              lVar14 = *plVar15;
              puVar3 = (undefined8 *)plVar6[1];
              *puVar3 = plVar2;
              plVar11 = (longlong *)plVar2[1];
              *plVar11 = lVar14;
              puVar4 = *(undefined8 **)(lVar14 + 8);
              *puVar4 = plVar6;
              *(longlong **)(lVar14 + 8) = plVar11;
              plVar2[1] = (longlong)puVar3;
              plVar6[1] = (longlong)puVar4;
              plVar6 = plVar2;
              lVar14 = DAT_181107438;
              goto joined_r0x000180358a51;
            }
            uVar16 = plVar6[5];
          }
        } while (*(longlong **)(lVar14 + uVar17 * 0x10) != plVar15);
      }
      puVar3 = (undefined8 *)plVar6[1];
      *puVar3 = plVar2;
      puVar4 = (undefined8 *)plVar2[1];
      *puVar4 = plVar15;
      puVar5 = (undefined8 *)plVar15[1];
      *puVar5 = plVar6;
      plVar15[1] = (longlong)puVar4;
      plVar2[1] = (longlong)puVar3;
      plVar6[1] = (longlong)puVar5;
      *(longlong **)(lVar14 + uVar17 * 0x10) = plVar6;
      plVar6 = plVar2;
      lVar14 = DAT_181107438;
      goto joined_r0x000180358a51;
    }
    if ((uVar9 != 0) && (iVar8 = memcmp(_Buf1,plVar13,uVar9), iVar8 != 0)) {
      plVar11 = *(longlong **)(lVar14 + uVar17 * 0x10);
      uVar16 = plVar6[5];
      goto LAB_180358b5a;
    }
    plVar15 = (longlong *)*plVar15;
    if (plVar15 != plVar6) {
      puVar3 = (undefined8 *)plVar6[1];
      *puVar3 = plVar2;
      puVar4 = (undefined8 *)plVar2[1];
      *puVar4 = plVar15;
      puVar5 = (undefined8 *)plVar15[1];
      *puVar5 = plVar6;
      plVar15[1] = (longlong)puVar4;
      plVar2[1] = (longlong)puVar3;
      plVar6[1] = (longlong)puVar5;
    }
    *(longlong **)(lVar14 + 8 + uVar17 * 0x10) = plVar6;
    plVar6 = plVar2;
    lVar14 = DAT_181107438;
  } while( true );
}



/* ===== 180358c40 FUN_180358c40 ===== */

void FUN_180358c40(undefined8 param_1,ulonglong param_2)

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
  
  plVar9 = DAT_181107118;
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
  FUN_180029d30(&DAT_181107128,2L << (bVar11 & 0x3f),DAT_181107118);
  DAT_181107140 = lVar12 - 1;
  DAT_181107148 = lVar12;
  plVar8 = (longlong *)*DAT_181107118;
joined_r0x000180358cbc:
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
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 & DAT_181107140;
        plVar3 = *(longlong **)(DAT_181107128 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_181107128 + uVar10 * 0x10);
        lVar12 = DAT_181107128 + uVar10 * 0x10;
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
        goto joined_r0x000180358cbc;
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



/* ===== 180358e10 FUN_180358e10 ===== */

void FUN_180358e10(undefined8 param_1,ulonglong param_2)

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
  
  plVar9 = DAT_181107778;
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
  FUN_180029d30(&DAT_181107788,2L << (bVar11 & 0x3f),DAT_181107778);
  DAT_1811077a0 = lVar12 - 1;
  DAT_1811077a8 = lVar12;
  plVar8 = (longlong *)*DAT_181107778;
joined_r0x000180358e8c:
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
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 & DAT_1811077a0;
        plVar3 = *(longlong **)(DAT_181107788 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_181107788 + uVar10 * 0x10);
        lVar12 = DAT_181107788 + uVar10 * 0x10;
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
        goto joined_r0x000180358e8c;
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



/* ===== 180358fe0 FUN_180358fe0 ===== */

void FUN_180358fe0(undefined8 param_1,ulonglong param_2)

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
  
  plVar9 = DAT_181107618;
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
  FUN_180029d30(&DAT_181107628,2L << (bVar11 & 0x3f),DAT_181107618);
  DAT_181107640 = lVar12 - 1;
  DAT_181107648 = lVar12;
  plVar8 = (longlong *)*DAT_181107618;
joined_r0x00018035905c:
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
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 & DAT_181107640;
        plVar3 = *(longlong **)(DAT_181107628 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_181107628 + uVar10 * 0x10);
        lVar12 = DAT_181107628 + uVar10 * 0x10;
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
        goto joined_r0x00018035905c;
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



/* ===== 1803591b0 FUN_1803591b0 ===== */

undefined4 * FUN_1803591b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0xf;
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  uVar2 = *(undefined8 *)(param_2 + 10);
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_1 + 10) = uVar2;
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x16);
  uVar2 = *(undefined8 *)(param_2 + 0x14);
  uVar3 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  *(undefined8 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x1c);
  uVar3 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x1a) = uVar3;
  *(undefined8 *)(param_1 + 0x1c) = uVar2;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_2 + 0x22) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0xf;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  *(undefined1 *)(param_2 + 0x26) = 0;
  *(undefined8 *)(param_2 + 0x2a) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0xf;
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  return param_1;
}



/* ===== 180359320 FUN_180359320 ===== */

undefined4 * FUN_180359320(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0xf;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0xf;
  uVar1 = *(undefined8 *)(param_2 + 0x16);
  uVar2 = *(undefined8 *)(param_2 + 0x14);
  uVar3 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  *(undefined8 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x1c);
  uVar3 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x1a) = uVar3;
  *(undefined8 *)(param_1 + 0x1c) = uVar2;
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = uVar1;
  *(undefined1 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x26) = 0xf;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2e) = uVar1;
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x2e) = 0xf;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x36) = uVar1;
  *(undefined1 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined8 *)(param_2 + 0x36) = 0xf;
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  return param_1;
}



/* ===== 1803594f0 FUN_1803594f0 ===== */

undefined8 * FUN_1803594f0(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  *(undefined1 *)(param_2 + 8) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0xf;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar1 = param_2[0xf];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xd];
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  param_2[0xd] = 0;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  *(undefined1 *)(param_2 + 0x10) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0xf;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  uVar1 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  *(undefined1 *)(param_2 + 0x14) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0xf;
  param_1[0x18] = param_2[0x18];
  uVar1 = param_2[0x1b];
  uVar2 = param_2[0x1a];
  uVar3 = param_2[0x19];
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  param_2[0x19] = 0;
  param_1[0x19] = uVar3;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar1 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar1;
  uVar1 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = uVar1;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0xf;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x101) = *(undefined1 *)((longlong)param_2 + 0x101);
  return param_1;
}



/* ===== 180359720 FUN_180359720 ===== */

undefined8 * FUN_180359720(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[6] = 0;
  param_2[7] = 0xf;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0xf;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  *(undefined1 *)(param_2 + 0xe) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0xf;
  param_1[0x12] = param_2[0x12];
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uVar1 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar1;
  uVar1 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar1;
  *(undefined1 *)(param_2 + 0x15) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0xf;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = uVar1;
  uVar1 = param_2[0x1c];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = uVar1;
  *(undefined1 *)(param_2 + 0x19) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0xf;
  return param_1;
}



/* ===== 1803598d0 FUN_1803598d0 ===== */

undefined1 * FUN_1803598d0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0xf;
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  param_1[0x74] = param_2[0x74];
  param_1[0x75] = param_2[0x75];
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  param_1[0x84] = param_2[0x84];
  return param_1;
}



/* ===== 1803599b0 FUN_1803599b0 ===== */

void FUN_1803599b0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  lVar1 = *param_1;
  lVar2 = *param_2;
  cVar3 = FUN_180023470(lVar2 * 0x20 + *param_4,lVar1 * 0x20 + *param_4);
  if (cVar3 < '\0') {
    *param_2 = lVar1;
    *param_1 = lVar2;
  }
  lVar1 = *param_3;
  lVar2 = *param_2;
  cVar3 = FUN_180023470(*param_4 + lVar1 * 0x20,lVar2 * 0x20 + *param_4);
  if (cVar3 < '\0') {
    *param_3 = lVar2;
    *param_2 = lVar1;
    lVar2 = *param_1;
    cVar3 = FUN_180023470(*param_4 + lVar1 * 0x20,lVar2 * 0x20 + *param_4);
    if (cVar3 < '\0') {
      *param_2 = lVar2;
      *param_1 = lVar1;
    }
  }
  return;
}



/* ===== 180359a60 FUN_180359a60 ===== */

void FUN_180359a60(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = param_4;
  for (lVar1 = param_2; lVar1 != param_3; lVar1 = lVar1 + 0xb8) {
    FUN_18034fd60(lVar2);
    lVar2 = lVar2 + 0xb8;
  }
  param_3 = param_3 + -0xb8;
  FUN_18034ad30(param_3,param_2 + -0xb8);
  param_2 = param_2 + -0x170;
  lVar1 = lVar2 + -0xb8;
  do {
    while( true ) {
      if (*(char *)(lVar1 + 0x90) == *(char *)(param_2 + 0x90)) {
        bVar3 = *(int *)(param_2 + 0x48) < *(int *)(lVar1 + 0x48);
      }
      else {
        bVar3 = *(char *)(lVar1 + 0x90) == '\0';
      }
      if (!bVar3) break;
      FUN_18034ad30(param_3 + -0xb8,param_2);
      if (param_1 == param_2) {
        param_3 = param_3 + -0x170;
        FUN_18034ad30(param_3,lVar1);
        while (lVar1 != param_4) {
          lVar1 = lVar1 + -0xb8;
          param_3 = param_3 + -0xb8;
          FUN_18034ad30(param_3,lVar1);
        }
joined_r0x000180359bbc:
        for (; param_4 != lVar2; param_4 = param_4 + 0xb8) {
          FUN_18000f890(param_4 + 0x98);
          FUN_18000f890(param_4 + 0x70);
          FUN_18000f890(param_4 + 0x50);
          FUN_18000f890(param_4 + 0x28);
          FUN_18000f890(param_4 + 8);
        }
        return;
      }
      param_2 = param_2 + -0xb8;
      param_3 = param_3 + -0xb8;
    }
    FUN_18034ad30(param_3 + -0xb8,lVar1);
    lVar1 = lVar1 + -0xb8;
    if (param_4 == lVar1) {
      param_3 = param_3 + -0x170;
      FUN_18034ad30(param_3,param_2);
      while (param_2 != param_1) {
        param_2 = param_2 + -0xb8;
        param_3 = param_3 + -0xb8;
        FUN_18034ad30(param_3,param_2);
      }
      FUN_18034ad30(param_1,param_4);
      goto joined_r0x000180359bbc;
    }
    param_3 = param_3 + -0xb8;
  } while( true );
}



/* ===== 180359c10 FUN_180359c10 ===== */

void FUN_180359c10(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if (param_5 < param_4) {
    lVar6 = param_5 >> 1;
    uVar3 = (param_2 - param_1 >> 3) * -0x2c8590b21642c859;
    lVar5 = lVar6 * 0xb8 + param_2;
    lVar7 = param_1;
    if (0 < (longlong)uVar3) {
      do {
        uVar2 = uVar3 >> 1;
        lVar4 = uVar2 * 0xb8;
        if (*(char *)(lVar5 + 0x90) == *(char *)(lVar4 + 0x90 + lVar7)) {
          bVar8 = *(int *)(lVar4 + 0x48 + lVar7) < *(int *)(lVar5 + 0x48);
        }
        else {
          bVar8 = *(char *)(lVar5 + 0x90) == '\0';
        }
        if (!bVar8) {
          lVar7 = lVar7 + 0xb8 + lVar4;
          uVar2 = uVar3 + (-1 - uVar2);
        }
        uVar3 = uVar2;
      } while (0 < (longlong)uVar2);
    }
    lVar4 = (lVar7 - param_1 >> 3) * -0x2c8590b21642c859;
  }
  else {
    lVar4 = param_4 >> 1;
    uVar3 = (param_3 - param_2 >> 3) * -0x2c8590b21642c859;
    lVar7 = lVar4 * 0xb8 + param_1;
    lVar5 = param_2;
    if (0 < (longlong)uVar3) {
      do {
        uVar2 = uVar3 >> 1;
        lVar6 = uVar2 * 0xb8;
        cVar1 = *(char *)(lVar6 + 0x90 + lVar5);
        if (cVar1 == *(char *)(lVar7 + 0x90)) {
          bVar8 = *(int *)(lVar7 + 0x48) < *(int *)(lVar6 + 0x48 + lVar5);
        }
        else {
          bVar8 = cVar1 == '\0';
        }
        if (bVar8) {
          lVar5 = lVar5 + 0xb8 + lVar6;
          uVar2 = uVar3 + (-1 - uVar2);
        }
        uVar3 = uVar2;
      } while (0 < (longlong)uVar2);
    }
    lVar6 = (lVar5 - param_2 >> 3) * -0x2c8590b21642c859;
  }
  FUN_18035af90(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar7,lVar5,lVar4,
                lVar6);
  return;
}



/* ===== 180359df0 FUN_180359df0 ===== */

void FUN_180359df0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = param_4;
  for (lVar1 = param_2; lVar1 != param_3; lVar1 = lVar1 + 0xb8) {
    FUN_18034fd60(lVar2);
    lVar2 = lVar2 + 0xb8;
  }
  param_3 = param_3 + -0xb8;
  FUN_18034ad30(param_3,param_2 + -0xb8);
  param_2 = param_2 + -0x170;
  lVar1 = lVar2 + -0xb8;
  do {
    while( true ) {
      if (*(char *)(lVar1 + 0x90) == *(char *)(param_2 + 0x90)) {
        bVar3 = *(int *)(param_2 + 4) < *(int *)(lVar1 + 4);
      }
      else {
        bVar3 = *(char *)(lVar1 + 0x90) == '\0';
      }
      if (!bVar3) break;
      FUN_18034ad30(param_3 + -0xb8,param_2);
      if (param_1 == param_2) {
        param_3 = param_3 + -0x170;
        FUN_18034ad30(param_3,lVar1);
        while (lVar1 != param_4) {
          lVar1 = lVar1 + -0xb8;
          param_3 = param_3 + -0xb8;
          FUN_18034ad30(param_3,lVar1);
        }
joined_r0x000180359f4c:
        for (; param_4 != lVar2; param_4 = param_4 + 0xb8) {
          FUN_18000f890(param_4 + 0x98);
          FUN_18000f890(param_4 + 0x70);
          FUN_18000f890(param_4 + 0x50);
          FUN_18000f890(param_4 + 0x28);
          FUN_18000f890(param_4 + 8);
        }
        return;
      }
      param_2 = param_2 + -0xb8;
      param_3 = param_3 + -0xb8;
    }
    FUN_18034ad30(param_3 + -0xb8,lVar1);
    lVar1 = lVar1 + -0xb8;
    if (param_4 == lVar1) {
      param_3 = param_3 + -0x170;
      FUN_18034ad30(param_3,param_2);
      while (param_2 != param_1) {
        param_2 = param_2 + -0xb8;
        param_3 = param_3 + -0xb8;
        FUN_18034ad30(param_3,param_2);
      }
      FUN_18034ad30(param_1,param_4);
      goto joined_r0x000180359f4c;
    }
    param_3 = param_3 + -0xb8;
  } while( true );
}



/* ===== 180359fa0 FUN_180359fa0 ===== */

void FUN_180359fa0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if (param_5 < param_4) {
    lVar6 = param_5 >> 1;
    uVar3 = (param_2 - param_1 >> 3) * -0x2c8590b21642c859;
    lVar5 = lVar6 * 0xb8 + param_2;
    lVar7 = param_1;
    if (0 < (longlong)uVar3) {
      do {
        uVar2 = uVar3 >> 1;
        lVar4 = uVar2 * 0xb8;
        if (*(char *)(lVar5 + 0x90) == *(char *)(lVar4 + 0x90 + lVar7)) {
          bVar8 = *(int *)(lVar4 + 4 + lVar7) < *(int *)(lVar5 + 4);
        }
        else {
          bVar8 = *(char *)(lVar5 + 0x90) == '\0';
        }
        if (!bVar8) {
          lVar7 = lVar7 + 0xb8 + lVar4;
          uVar2 = uVar3 + (-1 - uVar2);
        }
        uVar3 = uVar2;
      } while (0 < (longlong)uVar2);
    }
    lVar4 = (lVar7 - param_1 >> 3) * -0x2c8590b21642c859;
  }
  else {
    lVar4 = param_4 >> 1;
    uVar3 = (param_3 - param_2 >> 3) * -0x2c8590b21642c859;
    lVar7 = lVar4 * 0xb8 + param_1;
    lVar5 = param_2;
    if (0 < (longlong)uVar3) {
      do {
        uVar2 = uVar3 >> 1;
        lVar6 = uVar2 * 0xb8;
        cVar1 = *(char *)(lVar6 + 0x90 + lVar5);
        if (cVar1 == *(char *)(lVar7 + 0x90)) {
          bVar8 = *(int *)(lVar7 + 4) < *(int *)(lVar6 + 4 + lVar5);
        }
        else {
          bVar8 = cVar1 == '\0';
        }
        if (bVar8) {
          lVar5 = lVar5 + 0xb8 + lVar6;
          uVar2 = uVar3 + (-1 - uVar2);
        }
        uVar3 = uVar2;
      } while (0 < (longlong)uVar2);
    }
    lVar6 = (lVar5 - param_2 >> 3) * -0x2c8590b21642c859;
  }
  FUN_18035b080(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar7,lVar5,lVar4,
                lVar6);
  return;
}



/* ===== 18035a180 FUN_18035a180 ===== */

void FUN_18035a180(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar4 = param_4;
  for (lVar2 = param_1; lVar2 != param_2; lVar2 = lVar2 + 0xb8) {
    FUN_18034fd60(lVar4);
    lVar4 = lVar4 + 0xb8;
  }
  FUN_18034ad30(param_1,param_2);
  param_2 = param_2 + 0xb8;
  lVar2 = param_4;
  lVar5 = param_1 + 0xb8;
  do {
    if (*(char *)(param_2 + 0x90) == *(char *)(lVar2 + 0x90)) {
      bVar1 = FUN_180023470(param_2 + 8,lVar2 + 8);
      bVar6 = (bool)(bVar1 >> 7);
    }
    else {
      bVar6 = *(char *)(param_2 + 0x90) == '\0';
    }
    lVar3 = lVar5 + 0xb8;
    if (bVar6 == false) {
      FUN_18034ad30(lVar5,lVar2);
      if (lVar2 == lVar4 + -0x170) goto joined_r0x00018035a27f;
      lVar2 = lVar2 + 0xb8;
    }
    else {
      FUN_18034ad30(lVar5,param_2);
      param_2 = param_2 + 0xb8;
      if (param_2 == param_3) break;
    }
    lVar5 = lVar3;
  } while( true );
  for (; lVar2 != lVar4; lVar2 = lVar2 + 0xb8) {
    FUN_18034ad30(lVar3,lVar2);
    lVar3 = lVar3 + 0xb8;
  }
  goto joined_r0x00018035a2b1;
joined_r0x00018035a27f:
  for (; param_2 != param_3; param_2 = param_2 + 0xb8) {
    FUN_18034ad30(lVar3,param_2);
    lVar3 = lVar3 + 0xb8;
  }
  FUN_18034ad30(lVar3,lVar4 + -0xb8);
joined_r0x00018035a2b1:
  for (; param_4 != lVar4; param_4 = param_4 + 0xb8) {
    FUN_18000f890(param_4 + 0x98);
    FUN_18000f890(param_4 + 0x70);
    FUN_18000f890(param_4 + 0x50);
    FUN_18000f890(param_4 + 0x28);
    FUN_18000f890(param_4 + 8);
  }
  return;
}



/* ===== 18035a300 FUN_18035a300 ===== */

void FUN_18035a300(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = param_4;
  for (lVar2 = param_2; lVar2 != param_3; lVar2 = lVar2 + 0xb8) {
    FUN_18034fd60(lVar3);
    lVar3 = lVar3 + 0xb8;
  }
  param_3 = param_3 + -0xb8;
  FUN_18034ad30(param_3,param_2 + -0xb8);
  param_2 = param_2 + -0x170;
  lVar2 = lVar3 + -0xb8;
  do {
    while( true ) {
      if (*(char *)(lVar2 + 0x90) == *(char *)(param_2 + 0x90)) {
        bVar1 = FUN_180023470(lVar2 + 8,param_2 + 8);
        bVar4 = (bool)(bVar1 >> 7);
      }
      else {
        bVar4 = *(char *)(lVar2 + 0x90) == '\0';
      }
      if (bVar4 == false) break;
      FUN_18034ad30(param_3 + -0xb8,param_2);
      if (param_1 == param_2) {
        param_3 = param_3 + -0x170;
        FUN_18034ad30(param_3,lVar2);
        while (lVar2 != param_4) {
          lVar2 = lVar2 + -0xb8;
          param_3 = param_3 + -0xb8;
          FUN_18034ad30(param_3,lVar2);
        }
joined_r0x00018035a45c:
        for (; param_4 != lVar3; param_4 = param_4 + 0xb8) {
          FUN_18000f890(param_4 + 0x98);
          FUN_18000f890(param_4 + 0x70);
          FUN_18000f890(param_4 + 0x50);
          FUN_18000f890(param_4 + 0x28);
          FUN_18000f890(param_4 + 8);
        }
        return;
      }
      param_2 = param_2 + -0xb8;
      param_3 = param_3 + -0xb8;
    }
    FUN_18034ad30(param_3 + -0xb8,lVar2);
    lVar2 = lVar2 + -0xb8;
    if (param_4 == lVar2) {
      param_3 = param_3 + -0x170;
      FUN_18034ad30(param_3,param_2);
      while (param_2 != param_1) {
        param_2 = param_2 + -0xb8;
        param_3 = param_3 + -0xb8;
        FUN_18034ad30(param_3,param_2);
      }
      FUN_18034ad30(param_1,param_4);
      goto joined_r0x00018035a45c;
    }
    param_3 = param_3 + -0xb8;
  } while( true );
}



/* ===== 18035a4b0 FUN_18035a4b0 ===== */

void FUN_18035a4b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_5 < param_4) {
    lVar5 = param_5 >> 1;
    uVar4 = (param_2 - param_1 >> 3) * -0x2c8590b21642c859;
    lVar6 = lVar5 * 0xb8 + param_2;
    lVar9 = param_1;
    if (0 < (longlong)uVar4) {
      cVar1 = *(char *)(lVar6 + 0x90);
      do {
        uVar7 = uVar4 >> 1;
        lVar8 = uVar7 * 0xb8;
        if (cVar1 == *(char *)(lVar8 + 0x90 + lVar9)) {
          bVar3 = FUN_180023470(lVar6 + 8,lVar9 + 8 + lVar8);
          bVar10 = (bool)(bVar3 >> 7);
        }
        else {
          bVar10 = cVar1 == '\0';
        }
        if (bVar10 == false) {
          lVar9 = lVar9 + 0xb8 + lVar8;
          uVar7 = uVar4 + (-1 - uVar7);
        }
        uVar4 = uVar7;
      } while (0 < (longlong)uVar7);
    }
    lVar8 = (lVar9 - param_1 >> 3) * -0x2c8590b21642c859;
  }
  else {
    lVar8 = param_4 >> 1;
    uVar4 = (param_3 - param_2 >> 3) * -0x2c8590b21642c859;
    lVar9 = lVar8 * 0xb8 + param_1;
    lVar6 = param_2;
    if (0 < (longlong)uVar4) {
      cVar1 = *(char *)(lVar9 + 0x90);
      do {
        uVar7 = uVar4 >> 1;
        lVar5 = uVar7 * 0xb8;
        cVar2 = *(char *)(lVar6 + 0x90 + lVar5);
        if (cVar2 == cVar1) {
          bVar3 = FUN_180023470(lVar5 + 8 + lVar6,lVar9 + 8);
          bVar10 = (bool)(bVar3 >> 7);
        }
        else {
          bVar10 = cVar2 == '\0';
        }
        if (bVar10 != false) {
          lVar6 = lVar6 + 0xb8 + lVar5;
          uVar7 = uVar4 + (-1 - uVar7);
        }
        uVar4 = uVar7;
      } while (0 < (longlong)uVar7);
    }
    lVar5 = (lVar6 - param_2 >> 3) * -0x2c8590b21642c859;
  }
  FUN_18035b170(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar9,lVar6,lVar8,
                lVar5);
  return;
}



/* ===== 18035a6f0 FUN_18035a6f0 ===== */

void FUN_18035a6f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar8 = param_2;
  while( true ) {
    while( true ) {
      cVar7 = FUN_180023470(puVar8,param_1);
      if (-1 < cVar7) break;
      *param_4 = 0;
      param_4[1] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      uVar4 = puVar8[1];
      uVar5 = puVar8[2];
      uVar6 = puVar8[3];
      *(undefined4 *)param_4 = *puVar8;
      *(undefined4 *)((longlong)param_4 + 4) = uVar4;
      *(undefined4 *)(param_4 + 1) = uVar5;
      *(undefined4 *)((longlong)param_4 + 0xc) = uVar6;
      uVar4 = puVar8[5];
      uVar5 = puVar8[6];
      uVar6 = puVar8[7];
      *(undefined4 *)(param_4 + 2) = puVar8[4];
      *(undefined4 *)((longlong)param_4 + 0x14) = uVar4;
      *(undefined4 *)(param_4 + 3) = uVar5;
      *(undefined4 *)((longlong)param_4 + 0x1c) = uVar6;
      *(undefined1 *)puVar8 = 0;
      *(undefined8 *)(puVar8 + 4) = 0;
      *(undefined8 *)(puVar8 + 6) = 0xf;
      uVar1 = *(undefined8 *)(puVar8 + 0xc);
      uVar2 = *(undefined8 *)(puVar8 + 10);
      uVar3 = *(undefined8 *)(puVar8 + 8);
      *(undefined8 *)(puVar8 + 0xc) = 0;
      *(undefined8 *)(puVar8 + 10) = 0;
      *(undefined8 *)(puVar8 + 8) = 0;
      param_4[4] = uVar3;
      param_4[5] = uVar2;
      param_4[6] = uVar1;
      uVar1 = *(undefined8 *)(puVar8 + 0x12);
      uVar2 = *(undefined8 *)(puVar8 + 0x10);
      uVar3 = *(undefined8 *)(puVar8 + 0xe);
      *(undefined8 *)(puVar8 + 0x12) = 0;
      *(undefined8 *)(puVar8 + 0x10) = 0;
      *(undefined8 *)(puVar8 + 0xe) = 0;
      puVar9 = puVar8 + 0x14;
      param_4[7] = uVar3;
      param_4[8] = uVar2;
      param_4[9] = uVar1;
      puVar8 = param_1;
      if (puVar9 == param_3) goto LAB_18035a843;
      param_4 = param_4 + 10;
      puVar8 = puVar9;
    }
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    uVar4 = param_1[1];
    uVar5 = param_1[2];
    uVar6 = param_1[3];
    *(undefined4 *)param_4 = *param_1;
    *(undefined4 *)((longlong)param_4 + 4) = uVar4;
    *(undefined4 *)(param_4 + 1) = uVar5;
    *(undefined4 *)((longlong)param_4 + 0xc) = uVar6;
    uVar4 = param_1[5];
    uVar5 = param_1[6];
    uVar6 = param_1[7];
    *(undefined4 *)(param_4 + 2) = param_1[4];
    *(undefined4 *)((longlong)param_4 + 0x14) = uVar4;
    *(undefined4 *)(param_4 + 3) = uVar5;
    *(undefined4 *)((longlong)param_4 + 0x1c) = uVar6;
    *(undefined1 *)param_1 = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0xf;
    uVar1 = *(undefined8 *)(param_1 + 0xc);
    uVar2 = *(undefined8 *)(param_1 + 10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    param_4[4] = uVar3;
    param_4[5] = uVar2;
    param_4[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x12);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    param_1 = param_1 + 0x14;
    param_4[7] = uVar3;
    param_4[8] = uVar2;
    param_4[9] = uVar1;
    if (param_1 == param_2) break;
    param_4 = param_4 + 10;
  }
  param_2 = param_3;
LAB_18035a843:
  FUN_1803576e0(puVar8,param_2,param_4 + 10);
  return;
}



/* ===== 18035a860 FUN_18035a860 ===== */

void FUN_18035a860(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = FUN_1803576e0(param_1,param_2,param_4);
  FUN_18002ba60(param_1,param_2);
  FUN_180351790(param_1 + 0x20,param_2 + 0x20);
  param_2 = param_2 + 0x50;
  lVar3 = param_4;
  lVar5 = param_1 + 0x50;
  do {
    lVar4 = lVar5 + 0x50;
    cVar1 = FUN_180023470(param_2,lVar3);
    if (cVar1 < '\0') {
      FUN_18002ba60(lVar5,param_2);
      FUN_180351790(lVar5 + 0x20,param_2 + 0x20);
      param_2 = param_2 + 0x50;
      if (param_2 == param_3) break;
    }
    else {
      FUN_18002ba60(lVar5,lVar3);
      FUN_180351790(lVar5 + 0x20,lVar3 + 0x20);
      if (lVar3 == lVar2 + -0xa0) goto joined_r0x00018035a947;
      lVar3 = lVar3 + 0x50;
    }
    lVar5 = lVar4;
  } while( true );
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x50) {
    FUN_18002ba60(lVar4,lVar3);
    FUN_180351790(lVar4 + 0x20,lVar3 + 0x20);
    lVar4 = lVar4 + 0x50;
  }
  goto joined_r0x00018035a991;
joined_r0x00018035a947:
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    FUN_18002ba60(lVar4,param_2);
    FUN_180351790(lVar4 + 0x20,param_2 + 0x20);
    lVar4 = lVar4 + 0x50;
  }
  FUN_18002ba60(lVar4,lVar2 + -0x50);
  FUN_180351790(lVar4 + 0x20,lVar2 + -0x30);
joined_r0x00018035a991:
  for (; param_4 != lVar2; param_4 = param_4 + 0x50) {
    FUN_18034fab0(param_4 + 0x38);
    FUN_1800288b0(param_4 + 0x20);
    FUN_18000f890(param_4);
  }
  return;
}



/* ===== 18035a9d0 FUN_18035a9d0 ===== */

void FUN_18035a9d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_5 < param_4) {
    lVar3 = param_5 >> 1;
    uVar2 = (param_2 - param_1 >> 4) * -0x3333333333333333;
    lVar6 = lVar3 * 0x50 + param_2;
    lVar5 = param_1;
    if (0 < (longlong)uVar2) {
      do {
        uVar4 = uVar2 >> 1;
        lVar7 = uVar4 * 0x50 + lVar5;
        cVar1 = FUN_180023470(lVar6,lVar7);
        if (-1 < cVar1) {
          lVar5 = lVar7 + 0x50;
          uVar4 = uVar2 + (-1 - uVar4);
        }
        uVar2 = uVar4;
      } while (0 < (longlong)uVar4);
    }
    lVar7 = (lVar5 - param_1 >> 4) * -0x3333333333333333;
  }
  else {
    lVar7 = param_4 >> 1;
    uVar2 = (param_3 - param_2 >> 4) * -0x3333333333333333;
    lVar5 = lVar7 * 0x50 + param_1;
    lVar6 = param_2;
    if (0 < (longlong)uVar2) {
      do {
        uVar4 = uVar2 >> 1;
        lVar3 = uVar4 * 0x50 + lVar6;
        cVar1 = FUN_180023470(lVar3,lVar5);
        if (cVar1 < '\0') {
          lVar6 = lVar3 + 0x50;
          uVar4 = uVar2 + (-1 - uVar4);
        }
        uVar2 = uVar4;
      } while (0 < (longlong)uVar4);
    }
    lVar3 = (lVar6 - param_2 >> 4) * -0x3333333333333333;
  }
  FUN_18035b350(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar5,lVar6,lVar7,
                lVar3);
  return;
}



/* ===== 18035abb0 FUN_18035abb0 ===== */

void FUN_18035abb0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    FUN_180068f30(lVar2 + 0x20);
    FUN_18000f890(lVar2);
  }
  return;
}



/* ===== 18035abf0 FUN_18035abf0 ===== */

void FUN_18035abf0(undefined8 param_1,ulonglong param_2)

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
  
  plVar9 = DAT_1811077b8;
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
  FUN_180029d30(&DAT_1811077c8,2L << (bVar11 & 0x3f),DAT_1811077b8);
  DAT_1811077e0 = lVar12 - 1;
  DAT_1811077e8 = lVar12;
  plVar8 = (longlong *)*DAT_1811077b8;
joined_r0x00018035ac6c:
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
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 & DAT_1811077e0;
        plVar3 = *(longlong **)(DAT_1811077c8 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_1811077c8 + uVar10 * 0x10);
        lVar12 = DAT_1811077c8 + uVar10 * 0x10;
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
        goto joined_r0x00018035ac6c;
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



/* ===== 18035adc0 FUN_18035adc0 ===== */

void FUN_18035adc0(undefined8 param_1,ulonglong param_2)

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
  
  plVar9 = DAT_181106fd8;
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
  FUN_180029d30(&DAT_181106fe8,2L << (bVar11 & 0x3f),DAT_181106fd8);
  DAT_181107000 = lVar12 - 1;
  DAT_181107008 = lVar12;
  plVar8 = (longlong *)*DAT_181106fd8;
joined_r0x00018035ae3c:
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
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 & DAT_181107000;
        plVar3 = *(longlong **)(DAT_181106fe8 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_181106fe8 + uVar10 * 0x10);
        lVar12 = DAT_181106fe8 + uVar10 * 0x10;
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
        goto joined_r0x00018035ae3c;
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



/* ===== 18035af90 FUN_18035af90 ===== */

void FUN_18035af90(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18035b440(param_9,param_2,param_10,param_4 - param_11,param_12,param_6,param_7);
  FUN_1803507d0(param_1,param_9,uVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_1803507d0(uVar1,param_10,param_3,param_4 - param_11);
  return;
}



/* ===== 18035b080 FUN_18035b080 ===== */

void FUN_18035b080(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18035b440(param_9,param_2,param_10,param_4 - param_11,param_12,param_6,param_7);
  FUN_180350ba0(param_1,param_9,uVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_180350ba0(uVar1,param_10,param_3,param_4 - param_11);
  return;
}



/* ===== 18035b170 FUN_18035b170 ===== */

void FUN_18035b170(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18035b440(param_9,param_2,param_10,param_4 - param_11,param_12,param_6,param_7);
  FUN_180350f70(param_1,param_9,uVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_180350f70(uVar1,param_10,param_3,param_4 - param_11);
  return;
}



/* ===== 18035b260 FUN_18035b260 ===== */

void FUN_18035b260(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18035b6c0(param_9,param_2,param_10,param_4 - param_11,param_12,param_6,param_7);
  FUN_1803513f0(param_1,param_9,uVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_1803513f0(uVar1,param_10,param_3,param_4 - param_11);
  return;
}



/* ===== 18035b350 FUN_18035b350 ===== */

void FUN_18035b350(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18035b7e0(param_9,param_2,param_10,param_4 - param_11,param_12,param_6,param_7);
  FUN_1803519b0(param_1,param_9,uVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_1803519b0(uVar1,param_10,param_3,param_4 - param_11);
  return;
}



/* ===== 18035b440 FUN_18035b440 ===== */

longlong FUN_18035b440(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 == 0) {
    return param_3;
  }
  if (param_5 == 0) {
    return param_1;
  }
  if ((param_5 < param_4) || (lVar2 = param_1, lVar1 = param_6, param_7 < param_4)) {
    lVar2 = param_2;
    lVar1 = param_6;
    if (param_7 < param_5) {
      if (param_1 != param_2) {
        if (param_2 == param_3) {
          param_3 = param_1;
        }
        else {
          FUN_18034b640(param_1);
          FUN_18034b640(param_2,param_3);
          FUN_18034b640(param_1,param_3);
          lVar2 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_3 - param_2),8) +
                  (param_3 - param_2);
          param_3 = ((lVar2 >> 7) - (lVar2 >> 0x3f)) * 0xb8 + param_1;
        }
      }
      return param_3;
    }
    for (; lVar2 != param_3; lVar2 = lVar2 + 0xb8) {
      FUN_18034fd60(lVar1);
      lVar1 = lVar1 + 0xb8;
    }
    while (param_2 != param_1) {
      param_2 = param_2 + -0xb8;
      param_3 = param_3 + -0xb8;
      FUN_18034ad30(param_3,param_2);
    }
    lVar2 = param_6;
    if (param_6 != lVar1) {
      do {
        FUN_18034ad30(param_1,lVar2);
        param_1 = param_1 + 0xb8;
        lVar2 = lVar2 + 0xb8;
      } while (lVar2 != lVar1);
      do {
        FUN_18000f890(param_6 + 0x98);
        FUN_18000f890(param_6 + 0x70);
        FUN_18000f890(param_6 + 0x50);
        FUN_18000f890(param_6 + 0x28);
        FUN_18000f890(param_6 + 8);
        param_6 = param_6 + 0xb8;
      } while (param_6 != lVar1);
    }
  }
  else {
    for (; lVar2 != param_2; lVar2 = lVar2 + 0xb8) {
      FUN_18034fd60(lVar1);
      lVar1 = lVar1 + 0xb8;
    }
    for (; param_2 != param_3; param_2 = param_2 + 0xb8) {
      FUN_18034ad30(param_1,param_2);
      param_1 = param_1 + 0xb8;
    }
    lVar2 = param_1;
    lVar3 = param_6;
    if (param_6 != lVar1) {
      do {
        FUN_18034ad30(lVar2,lVar3);
        lVar2 = lVar2 + 0xb8;
        lVar3 = lVar3 + 0xb8;
      } while (lVar3 != lVar1);
      do {
        FUN_18000f890(param_6 + 0x98);
        FUN_18000f890(param_6 + 0x70);
        FUN_18000f890(param_6 + 0x50);
        FUN_18000f890(param_6 + 0x28);
        FUN_18000f890(param_6 + 8);
        param_6 = param_6 + 0xb8;
      } while (param_6 != lVar1);
      return param_1;
    }
  }
  return param_1;
}



/* ===== 18035b6c0 FUN_18035b6c0 ===== */

longlong FUN_18035b6c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
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
          param_3 = (param_3 - param_2 & 0xfffffffffffffffcU) + param_1;
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



/* ===== 18035b7e0 FUN_18035b7e0 ===== */

longlong FUN_18035b7e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
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
          FUN_18035b9f0(param_1);
          FUN_18035b9f0(param_2,param_3);
          FUN_18035b9f0(param_1,param_3);
          param_3 = ((param_3 - param_2) / 0x50) * 0x50 + param_1;
        }
      }
      return param_3;
    }
    lVar1 = FUN_1803576e0(param_2,param_3,param_6);
    FUN_180351710(param_1,param_2,param_3);
    if (param_6 != lVar1) {
      lVar2 = param_6;
      do {
        FUN_18002ba60(param_1,lVar2);
        FUN_180351790(param_1 + 0x20,lVar2 + 0x20);
        param_1 = param_1 + 0x50;
        lVar2 = lVar2 + 0x50;
      } while (lVar2 != lVar1);
      do {
        FUN_18034fab0(param_6 + 0x38);
        FUN_1800288b0(param_6 + 0x20);
        FUN_18000f890(param_6);
        param_6 = param_6 + 0x50;
      } while (param_6 != lVar1);
    }
  }
  else {
    lVar1 = FUN_1803576e0(param_1,param_2,param_6);
    for (; param_2 != param_3; param_2 = param_2 + 0x50) {
      FUN_18002ba60(param_1,param_2);
      FUN_180351790(param_1 + 0x20,param_2 + 0x20);
      param_1 = param_1 + 0x50;
    }
    lVar2 = param_1;
    lVar3 = param_6;
    if (param_6 != lVar1) {
      do {
        FUN_18002ba60(lVar2,lVar3);
        FUN_180351790(lVar2 + 0x20,lVar3 + 0x20);
        lVar2 = lVar2 + 0x50;
        lVar3 = lVar3 + 0x50;
      } while (lVar3 != lVar1);
      do {
        FUN_18034fab0(param_6 + 0x38);
        FUN_1800288b0(param_6 + 0x20);
        FUN_18000f890(param_6);
        param_6 = param_6 + 0x50;
      } while (param_6 != lVar1);
      return param_1;
    }
  }
  return param_1;
}



/* ===== 18035b9f0 FUN_18035b9f0 ===== */

void FUN_18035b9f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  if (param_1 != param_2) {
    do {
      puVar13 = param_2 + -0x14;
      if (param_1 == puVar13) {
        return;
      }
      uVar2 = param_2[-0x13];
      uVar3 = param_2[-0x12];
      uVar4 = param_2[-0x11];
      puVar1 = (undefined8 *)(param_1 + 8);
      uVar5 = *param_1;
      uVar6 = param_1[1];
      uVar7 = param_1[2];
      uVar8 = param_1[3];
      uVar9 = param_1[4];
      uVar10 = param_1[5];
      uVar11 = param_1[6];
      uVar12 = param_1[7];
      *param_1 = *puVar13;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      uVar2 = param_2[-0xf];
      uVar3 = param_2[-0xe];
      uVar4 = param_2[-0xd];
      param_1[4] = param_2[-0x10];
      param_1[5] = uVar2;
      param_1[6] = uVar3;
      param_1[7] = uVar4;
      *puVar13 = uVar5;
      param_2[-0x13] = uVar6;
      param_2[-0x12] = uVar7;
      param_2[-0x11] = uVar8;
      param_2[-0x10] = uVar9;
      param_2[-0xf] = uVar10;
      param_2[-0xe] = uVar11;
      param_2[-0xd] = uVar12;
      local_40 = *(undefined8 *)(param_1 + 10);
      local_38 = *(undefined8 *)(param_1 + 0xc);
      local_48 = *puVar1;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 10) = 0;
      *puVar1 = 0;
      uStack_28 = *(undefined8 *)(param_1 + 0x10);
      local_30 = *(undefined8 *)(param_1 + 0xe);
      local_20 = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 0x12) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0xe) = 0;
      FUN_180351790(puVar1,param_2 + -0xc);
      FUN_180067380(param_2 + -0xc,&local_48);
      if ((undefined8 *)(param_2 + -6) != &local_30) {
        FUN_18034fab0();
        *(undefined8 *)(param_2 + -6) = local_30;
        *(undefined8 *)(param_2 + -4) = uStack_28;
        *(undefined8 *)(param_2 + -2) = local_20;
        local_30 = 0;
        uStack_28 = 0;
        local_20 = 0;
      }
      FUN_18034fab0(&local_30);
      FUN_1800288b0(&local_48);
      param_1 = param_1 + 0x14;
      param_2 = puVar13;
    } while (param_1 != puVar13);
  }
  return;
}



