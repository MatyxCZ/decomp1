/* ===== 18006ade0 FUN_18006ade0 ===== */

longlong FUN_18006ade0(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  longlong *local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  
  lVar8 = *param_1;
  lVar3 = (param_1[1] - lVar8 >> 3) * -0x3333333333333333;
  uVar7 = 0x666666666666666;
  if (lVar3 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (param_1[2] - lVar8 >> 3) * -0x3333333333333333;
  if (uVar5 <= 0x666666666666666 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar7 = uVar1;
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x666666666666666 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar7 * 0x28);
  lVar3 = lVar4 + ((param_2 - lVar8) / 0x28) * 0x28;
  lVar8 = lVar3 + 0x28;
  local_68 = param_1;
  local_60 = lVar4;
  local_58 = uVar7;
  local_50 = lVar8;
  local_48 = lVar8;
  FUN_180024b50(lVar3,param_3);
  *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  lVar6 = param_1[1];
  local_50 = lVar3;
  if (param_2 == lVar6) {
    param_2 = *param_1;
    lVar8 = lVar4;
  }
  else {
    FUN_18006c480(*param_1,param_2,lVar4,param_1);
    lVar6 = param_1[1];
    local_50 = lVar4;
  }
  FUN_18006c480(param_2,lVar6,lVar8,param_1);
  puVar9 = auStack_88;
  puVar10 = auStack_88;
  local_60 = 0;
  lVar8 = *param_1;
  puVar11 = auStack_88;
  if (lVar8 == 0) goto LAB_18006afca;
  lVar6 = param_1[1];
  for (; lVar8 != lVar6; lVar8 = lVar8 + 0x28) {
    FUN_18000f890(lVar8);
  }
  lVar8 = *param_1;
  lVar6 = lVar8;
  if ((ulonglong)((param_1[2] - lVar8 >> 3) * 8) < 0x1000) {
LAB_18006afbf:
    puVar10 = puVar9;
  }
  else {
    lVar6 = *(longlong *)(lVar8 + -8);
    if (0x1f < (lVar8 - lVar6) - 8U) {
      lVar6 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_80;
      goto LAB_18006afbf;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x18006afca;
  thunk_FUN_1803d64e0(lVar6);
  puVar11 = puVar10;
LAB_18006afca:
  *param_1 = lVar4;
  param_1[1] = lVar4 + uVar1 * 0x28;
  param_1[2] = *(longlong *)(puVar11 + 0x98) + lVar4;
  return lVar3;
}



/* ===== 18006b010 FUN_18006b010 ===== */

undefined8 * FUN_18006b010(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 *local_68;
  ulonglong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  lVar16 = *param_1;
  lVar11 = (param_1[1] - lVar16 >> 5) * -0x5555555555555555;
  uVar15 = 0x2aaaaaaaaaaaaaa;
  if (lVar11 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar11 + 1;
  uVar14 = (param_1[2] - lVar16 >> 5) * -0x5555555555555555;
  if (uVar14 <= 0x2aaaaaaaaaaaaaa - (uVar14 >> 1)) {
    uVar14 = (uVar14 >> 1) + uVar14;
    uVar15 = uVar1;
    if (uVar1 <= uVar14) {
      uVar15 = uVar14;
    }
    if (0x2aaaaaaaaaaaaaa < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar12 = (undefined8 *)FUN_18000fb70(uVar15 * 0x60);
  puVar17 = auStack_d8;
  puVar18 = auStack_d8;
  puVar13 = puVar12 + ((param_2 - lVar16) / 0x60) * 0xc;
  puVar2 = puVar13 + 0xc;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  uVar7 = param_3[1];
  *puVar13 = *param_3;
  puVar13[1] = uVar7;
  uVar7 = param_3[3];
  puVar13[2] = param_3[2];
  puVar13[3] = uVar7;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  uVar7 = param_3[5];
  puVar13[4] = param_3[4];
  puVar13[5] = uVar7;
  uVar7 = param_3[7];
  puVar13[6] = param_3[6];
  puVar13[7] = uVar7;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 4) = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  uVar19 = *(undefined4 *)(param_3 + 8);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar5 = *(undefined4 *)(param_3 + 9);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x4c);
  *(undefined4 *)(puVar13 + 8) = uVar19;
  *(undefined4 *)((longlong)puVar13 + 0x44) = uVar4;
  *(undefined4 *)(puVar13 + 9) = uVar5;
  *(undefined4 *)((longlong)puVar13 + 0x4c) = uVar6;
  uVar7 = param_3[0xb];
  puVar13[10] = param_3[10];
  puVar13[0xb] = uVar7;
  param_3[10] = 0;
  param_3[0xb] = 0xf;
  *(undefined1 *)(param_3 + 8) = 0;
  lVar16 = param_1[1];
  lVar11 = *param_1;
  local_58 = puVar13;
  local_48 = puVar13;
  local_50 = puVar2;
  puVar8 = puVar12;
  puVar9 = puVar12;
  local_68 = puVar12;
  local_60 = uVar15;
  plVar10 = param_1;
  local_70 = param_1;
  if (param_2 == lVar16) {
    local_b8 = puVar12;
    local_b0 = puVar12;
    local_a8 = param_1;
    if (lVar11 != lVar16) {
      do {
        puVar2 = local_b0;
        uVar19 = FUN_18006c520(uVar19,local_b0);
        local_b0 = puVar2 + 0xc;
        lVar11 = lVar11 + 0x60;
      } while (lVar11 != lVar16);
    }
    local_b8 = local_b0;
  }
  else {
    while( true ) {
      local_90 = plVar10;
      local_a0 = puVar9;
      local_98 = puVar8;
      if (lVar11 == param_2) break;
      uVar19 = FUN_18006c520(uVar19,puVar8);
      lVar11 = lVar11 + 0x60;
      puVar8 = puVar8 + 0xc;
      puVar9 = local_a0;
      plVar10 = local_90;
    }
    lVar16 = param_1[1];
    local_a0 = puVar8;
    local_88 = puVar2;
    local_80 = puVar2;
    local_78 = param_1;
    local_58 = puVar12;
    if (param_2 != lVar16) {
      do {
        puVar2 = local_80;
        uVar19 = FUN_18006c520(uVar19,local_80,param_2);
        local_80 = puVar2 + 0xc;
        param_2 = param_2 + 0x60;
      } while (param_2 != lVar16);
    }
    local_88 = local_80;
  }
  local_68 = (undefined8 *)0x0;
  lVar16 = *param_1;
  if (lVar16 == 0) goto LAB_18006b2e5;
  lVar11 = param_1[1];
  for (; lVar16 != lVar11; lVar16 = lVar16 + 0x60) {
    FUN_18000f890(lVar16 + 0x40);
    FUN_18000f890(lVar16 + 0x20);
    FUN_18000f890(lVar16);
  }
  lVar16 = *param_1;
  lVar11 = lVar16;
  if ((ulonglong)((param_1[2] - lVar16 >> 5) << 5) < 0x1000) {
LAB_18006b2da:
    puVar18 = puVar17;
  }
  else {
    lVar11 = *(longlong *)(lVar16 + -8);
    if (0x1f < (lVar16 - lVar11) - 8U) {
      lVar11 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar17 = auStack_d0;
      goto LAB_18006b2da;
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x18006b2e5;
  thunk_FUN_1803d64e0(lVar11);
LAB_18006b2e5:
  *param_1 = (longlong)puVar12;
  param_1[1] = (longlong)(puVar12 + uVar1 * 0xc);
  param_1[2] = (longlong)(puVar12 + uVar15 * 0xc);
  return puVar13;
}



/* ===== 18006b340 FUN_18006b340 ===== */

longlong FUN_18006b340(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  longlong *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  
  lVar7 = *param_1;
  lVar3 = (param_1[1] - lVar7 >> 3) * 0x2fc962fc962fc963;
  uVar6 = 0x6d3a06d3a06d3a;
  if (lVar3 == 0x6d3a06d3a06d3a) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (param_1[2] - lVar7 >> 3) * 0x2fc962fc962fc963;
  if (uVar5 <= 0x6d3a06d3a06d3a - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar6 = uVar1;
    if (uVar1 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x6d3a06d3a06d3a < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar6 * 600);
  lVar11 = ((param_2 - lVar7) / 600) * 600 + lVar4;
  lVar7 = lVar11 + 600;
  local_78 = param_1;
  local_70 = lVar4;
  local_68 = uVar6;
  local_60 = lVar7;
  local_58 = lVar7;
  FUN_18006cf60(lVar11,param_3);
  lVar3 = param_1[1];
  local_60 = lVar11;
  if (param_2 == lVar3) {
    param_2 = *param_1;
    lVar7 = lVar4;
  }
  else {
    FUN_18006c5c0(*param_1,param_2,lVar4,param_1);
    lVar3 = param_1[1];
    local_60 = lVar4;
  }
  FUN_18006c5c0(param_2,lVar3,lVar7,param_1);
  puVar8 = auStack_98;
  puVar9 = auStack_98;
  local_70 = 0;
  lVar7 = *param_1;
  puVar10 = auStack_98;
  if (lVar7 == 0) goto LAB_18006b4f9;
  lVar3 = param_1[1];
  for (; lVar7 != lVar3; lVar7 = lVar7 + 600) {
    FUN_180054030(lVar7);
  }
  lVar7 = *param_1;
  lVar3 = lVar7;
  if ((ulonglong)((param_1[2] - lVar7 >> 3) * 8) < 0x1000) {
LAB_18006b4ee:
    puVar9 = puVar8;
  }
  else {
    lVar3 = *(longlong *)(lVar7 + -8);
    if (0x1f < (lVar7 - lVar3) - 8U) {
      lVar3 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar8 = auStack_90;
      goto LAB_18006b4ee;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x18006b4f9;
  thunk_FUN_1803d64e0(lVar3);
  puVar10 = puVar9;
LAB_18006b4f9:
  *param_1 = lVar4;
  param_1[1] = uVar1 * 600 + lVar4;
  param_1[2] = *(longlong *)(puVar10 + 0xa0) + lVar4;
  return lVar11;
}



/* ===== 18006b540 FUN_18006b540 ===== */

longlong FUN_18006b540(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_180024b50(param_3,param_1);
    param_3 = param_3 + 0x20;
    param_1 = param_1 + 0x20;
  }
  return param_3;
}



/* ===== 18006b5b0 FUN_18006b5b0 ===== */

ulonglong * FUN_18006b5b0(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar11 = param_1[2];
  if (uVar11 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18002a1a0();
  }
  uVar4 = param_1[3];
  if (param_4 <= uVar4 - uVar11) {
    param_1[2] = uVar11 + param_4;
    puVar6 = param_1;
    if (0xf < uVar4) {
      puVar6 = (ulonglong *)*param_1;
    }
    uVar4 = (longlong)puVar6 + param_2;
    if ((uVar4 < param_3 + param_4) && (param_3 <= (longlong)puVar6 + uVar11)) {
      if (param_3 < uVar4) {
        uVar9 = uVar4 - param_3;
      }
      else {
        uVar9 = 0;
      }
    }
    else {
      uVar9 = param_4;
    }
    FUN_180540530(uVar4 + param_4,uVar4,(uVar11 - param_2) + 1);
    FUN_180540530(uVar4,param_3,uVar9);
    FUN_180540530(uVar9 + uVar4,uVar9 + param_3 + param_4,param_4 - uVar9);
    return param_1;
  }
  if (0x7fffffffffffffff - uVar11 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  uVar7 = uVar11 + param_4 | 0xf;
  uVar9 = 0x7fffffffffffffff;
  if (((uVar7 < 0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) &&
     (uVar2 = (uVar4 >> 1) + uVar4, uVar9 = uVar7, uVar7 < uVar2)) {
    uVar9 = uVar2;
  }
  uVar7 = FUN_18000fb70(uVar9 + 1);
  param_1[3] = uVar9;
  param_1[2] = uVar11 + param_4;
  lVar10 = (uVar11 - param_2) + 1;
  lVar3 = param_2 + uVar7;
  if (uVar4 < 0x10) {
    FUN_180540530(uVar7,param_1,param_2);
    FUN_180540530(lVar3,param_3,param_4);
    FUN_180540530(lVar3 + param_4,(longlong)param_1 + param_2,lVar10);
  }
  else {
    uVar11 = *param_1;
    FUN_180540530(uVar7,uVar11,param_2);
    FUN_180540530(lVar3,param_3,param_4);
    FUN_180540530(lVar3 + param_4,uVar11 + param_2,lVar10);
    puVar8 = auStack_48;
    if (0xfff < uVar4 + 1) {
      plVar1 = (longlong *)(uVar11 - 8);
      uVar11 = (uVar11 - *plVar1) - 8;
      if (uVar11 < 0x20) {
        thunk_FUN_1803d64e0(*plVar1,uVar4 + 0x28);
        goto LAB_18006b76d;
      }
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar8 = auStack_40;
    }
    *(undefined8 *)(puVar8 + -8) = 0x18006b745;
    thunk_FUN_1803d64e0(uVar11);
  }
LAB_18006b76d:
  *param_1 = uVar7;
  return param_1;
}



/* ===== 18006b7f0 FUN_18006b7f0 ===== */

void FUN_18006b7f0(longlong param_1)

{
  FUN_1804e56f0(*(undefined8 *)(param_1 + 0x50));
  FUN_1800289e0(param_1 + 0x30);
  return;
}



/* ===== 18006b820 FUN_18006b820 ===== */

undefined8 FUN_18006b820(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_80 [8];
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined2 local_50;
  longlong local_48;
  undefined2 local_40;
  longlong local_38;
  undefined1 local_30;
  longlong local_28;
  undefined1 local_20;
  
  uVar4 = 0;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar2 = (undefined8 *)FUN_1804ecaa0(0x10);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      puVar3 = &DAT_18058b643;
    }
    else {
      puVar3 = *(undefined1 **)(lVar1 + 0x28);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = (undefined1 *)(lVar1 + 0x30);
      }
    }
    FUN_1804ea500(local_80,0,param_3,param_4,uVar4);
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4d30("bad locale name");
    }
    FUN_1804ea850(local_80,puVar3);
    *puVar2 = std::_Facet_base::vftable;
    *puVar2 = std::locale::facet::vftable;
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = std::codecvt_base::vftable;
    *puVar2 = std::codecvt<char,char,_Mbstatet>::vftable;
    *param_1 = (longlong)puVar2;
    FUN_1804ea910(local_80);
    if (local_28 != 0) {
      thunk_FUN_1805277b0();
    }
    local_28 = 0;
    if (local_38 != 0) {
      thunk_FUN_1805277b0();
    }
    local_38 = 0;
    if (local_48 != 0) {
      thunk_FUN_1805277b0();
    }
    local_48 = 0;
    if (local_58 != 0) {
      thunk_FUN_1805277b0();
    }
    local_58 = 0;
    if (local_68 != 0) {
      thunk_FUN_1805277b0();
    }
    local_68 = 0;
    if (local_78 != 0) {
      thunk_FUN_1805277b0();
    }
    local_78 = 0;
    FUN_1804ea5a0(local_80);
  }
  return 2;
}



/* ===== 18006b9f0 FUN_18006b9f0 ===== */

void FUN_18006b9f0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

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
  if (uVar5 == 0) goto LAB_18006ba4f;
  uVar2 = uVar5;
  if ((ulonglong)(((longlong)(param_1[2] - uVar5) >> 2) * 4) < 0x1000) {
LAB_18006ba47:
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
      goto LAB_18006ba47;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x18006ba4f;
  thunk_FUN_1803d64e0(uVar2);
LAB_18006ba4f:
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}



/* ===== 18006ba70 FUN_18006ba70 ===== */

void FUN_18006ba70(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  lVar2 = *param_1;
  uVar7 = param_1[2] - lVar2 >> 2;
  if (0x3fffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar7 = 0x3fffffffffffffff;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    if (uVar7 < param_2) {
      uVar7 = param_2;
    }
  }
  puVar6 = auStack_28;
  if (lVar2 == 0) goto LAB_18006bb1d;
  lVar3 = lVar2;
  if ((ulonglong)((param_1[2] - lVar2 >> 2) * 4) < 0x1000) {
LAB_18006bb05:
    puVar5 = puVar4;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar3) - 8U) {
      lVar3 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_20;
      goto LAB_18006bb05;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x18006bb10;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar6 = puVar5;
LAB_18006bb1d:
  if (0x3fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar6 + -8) = &UNK_18006bb55;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar6 + -8) = 0x18006bb32;
  lVar2 = FUN_18000fb70(uVar7 * 4);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar2 + uVar7 * 4;
  return;
}



/* ===== 18006bb60 FUN_18006bb60 ===== */

void FUN_18006bb60(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar5 = auStack_48;
  puVar6 = auStack_48;
  if (0x7ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  lVar4 = *param_1;
  uVar2 = param_1[2] - lVar4 >> 5;
  if (0x7ffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar2 = 0x7ffffffffffffff;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    if (uVar2 < param_2) {
      uVar2 = param_2;
    }
  }
  puVar7 = auStack_48;
  if (lVar4 == 0) goto LAB_18006bc1c;
  lVar3 = param_1[1];
  for (; lVar4 != lVar3; lVar4 = lVar4 + 0x20) {
    FUN_18000f890(lVar4);
  }
  lVar4 = *param_1;
  if ((param_1[2] - lVar4 & 0xffffffffffffffe0U) < 0x1000) {
LAB_18006bc07:
    lVar3 = lVar4;
    puVar6 = puVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar3) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar4 = (*pcVar1)(5);
      puVar5 = auStack_40;
      goto LAB_18006bc07;
    }
  }
  *(undefined8 *)(puVar6 + -8) = 0x18006bc0f;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar7 = puVar6;
LAB_18006bc1c:
  if (0x7ffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + -8) = &UNK_18006bc4b;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar7 + -8) = 0x18006bc2d;
  lVar4 = FUN_18000fb70(uVar2 * 0x20);
  *param_1 = lVar4;
  param_1[1] = lVar4;
  param_1[2] = lVar4 + uVar2 * 0x20;
  return;
}



/* ===== 18006bc60 FUN_18006bc60 ===== */

void FUN_18006bc60(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



/* ===== 18006bca0 FUN_18006bca0 ===== */

longlong FUN_18006bca0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = FUN_1804eab10(param_2,param_3,0x40,param_2,0);
    if (lVar2 != 0) {
      FUN_1800698d0(param_1,lVar2,1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8);
      local_18 = plVar1;
      (**(code **)(*plVar1 + 8))(plVar1);
      uVar3 = FUN_180068df0(local_20);
      FUN_180069760(param_1,uVar3);
      if (plVar1 != (longlong *)0x0) {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      return param_1;
    }
  }
  return 0;
}



/* ===== 18006bd70 FUN_18006bd70 ===== */

undefined8 * FUN_18006bd70(undefined8 *param_1)

{
  FUN_18006cdb0();
  *param_1 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x71) = 0;
  param_1[3] = param_1 + 1;
  param_1[4] = param_1 + 2;
  param_1[7] = param_1 + 5;
  param_1[8] = param_1 + 6;
  param_1[10] = param_1 + 9;
  param_1[0xb] = (undefined4 *)((longlong)param_1 + 0x4c);
  param_1[2] = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = DAT_180ca0000;
  param_1[0xd] = 0;
  return param_1;
}



/* ===== 18006be00 FUN_18006be00 ===== */

longlong * FUN_18006be00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  longlong *local_50;
  char local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [40];
  
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    FUN_180069000(&local_50,param_1);
    if (local_48 != '\0') {
      iVar2 = (**(code **)(*plVar1 + 0x68))(plVar1);
      uVar8 = 0;
      if (iVar2 == -1) {
        uVar8 = 4;
      }
      lVar4 = (longlong)*(int *)(*param_1 + 4);
      uVar6 = *(uint *)(lVar4 + 0x10 + (longlong)param_1);
      uVar9 = uVar8 | uVar6;
      uVar5 = 4;
      if (*(longlong *)(lVar4 + 0x48 + (longlong)param_1) != 0) {
        uVar5 = 0;
      }
      *(uint *)(lVar4 + 0x10 + (longlong)param_1) = uVar5 | uVar8 | uVar6 & 0x17;
      uVar6 = (uVar5 | uVar9) & *(uint *)(lVar4 + 0x14 + (longlong)param_1);
      if ((uVar6 & 0x17) != 0) {
        if ((uVar6 & 4) == 0) {
          pcVar7 = "ios_base::failbit set";
          if ((uVar6 & 2) == 0) {
            pcVar7 = "ios_base::eofbit set";
          }
        }
        else {
          pcVar7 = "ios_base::badbit set";
        }
        uVar3 = FUN_18004d7f0(local_40,1,uVar9,param_4,uVar8);
        FUN_18004e280(local_30,pcVar7,uVar3);
                    /* WARNING: Subroutine does not return */
        FUN_1804ef5f0(local_30,&DAT_180915ec0);
      }
    }
    iVar2 = thunk_FUN_1804ef6a0();
    if (iVar2 == 0) {
      FUN_18006bf40(local_50);
    }
    plVar1 = *(longlong **)((longlong)*(int *)(*local_50 + 4) + 0x48 + (longlong)local_50);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return param_1;
}



/* ===== 18006bf40 FUN_18006bf40 ===== */

void FUN_18006bf40(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_48 [16];
  undefined1 local_38 [48];
  
  lVar3 = (longlong)*(int *)(*param_1 + 4);
  if ((*(int *)(lVar3 + 0x10 + (longlong)param_1) == 0) &&
     ((*(byte *)(lVar3 + 0x18 + (longlong)param_1) & 2) != 0)) {
    iVar1 = (**(code **)(**(longlong **)(lVar3 + 0x48 + (longlong)param_1) + 0x68))();
    if (iVar1 == -1) {
      lVar3 = (longlong)*(int *)(*param_1 + 4);
      uVar4 = *(uint *)(lVar3 + 0x10 + (longlong)param_1);
      *(uint *)(lVar3 + 0x10 + (longlong)param_1) = uVar4 & 0x17 | 4;
      uVar4 = (uVar4 | 4) & *(uint *)(lVar3 + 0x14 + (longlong)param_1);
      if ((uVar4 & 0x17) != 0) {
        if ((uVar4 & 4) == 0) {
          pcVar5 = "ios_base::failbit set";
          if ((uVar4 & 2) == 0) {
            pcVar5 = "ios_base::eofbit set";
          }
        }
        else {
          pcVar5 = "ios_base::badbit set";
        }
        uVar2 = FUN_18004d7f0(local_48,1);
        FUN_18004e280(local_38,pcVar5,uVar2);
                    /* WARNING: Subroutine does not return */
        FUN_1804ef5f0(local_38,&DAT_180915ec0);
      }
    }
  }
  return;
}



/* ===== 18006bff0 FUN_18006bff0 ===== */

longlong * FUN_18006bff0(longlong *param_1)

{
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x10;
  FUN_18006ce70((longlong)*(int *)(*param_1 + 4) + (longlong)param_1);
  return param_1;
}



/* ===== 18006c040 FUN_18006c040 ===== */

longlong * FUN_18006c040(longlong *param_1)

{
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  FUN_18006ce70((longlong)*(int *)(*param_1 + 4) + (longlong)param_1);
  return param_1;
}



/* ===== 18006c090 FUN_18006c090 ===== */

undefined8 * FUN_18006c090(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Ref_count_obj2<std::filesystem::_Dir_enum_impl>::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x58);
  }
  return param_1;
}



/* ===== 18006c0c0 FUN_18006c0c0 ===== */

longlong FUN_18006c0c0(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_180540530(param_3,param_1,param_2 - param_1);
  return param_3 + (param_2 - param_1 & 0xfffffffffffffff8U);
}



/* ===== 18006c100 FUN_18006c100 ===== */

undefined8 * FUN_18006c100(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
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
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
    param_3 = param_3 + 5;
  }
  return param_3;
}



/* ===== 18006c190 FUN_18006c190 ===== */

void FUN_18006c190(undefined8 param_1,longlong param_2,longlong param_3)

{
  FUN_18006d7e0(param_2,param_3);
  FUN_18006d7e0(param_2 + 0x18,param_3 + 0x18);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
  FUN_180024b50(param_2 + 0x40,param_3 + 0x40);
  *(undefined1 *)(param_2 + 0x60) = *(undefined1 *)(param_3 + 0x60);
  FUN_18006d7e0(param_2 + 0x68,param_3 + 0x68);
  FUN_18006d740(param_2 + 0x80,param_3 + 0x80);
  FUN_180024b50(param_2 + 0x98,param_3 + 0x98);
  FUN_180024b50(param_2 + 0xb8,param_3 + 0xb8);
  *(undefined1 *)(param_2 + 0xd8) = *(undefined1 *)(param_3 + 0xd8);
  *(undefined1 *)(param_2 + 0xd9) = *(undefined1 *)(param_3 + 0xd9);
  return;
}



/* ===== 18006c260 FUN_18006c260 ===== */

undefined8 * FUN_18006c260(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 8) {
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
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    uVar1 = param_1[5];
    param_3[4] = param_1[4];
    param_3[5] = uVar1;
    uVar1 = param_1[7];
    param_3[6] = param_1[6];
    param_3[7] = uVar1;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[6] = 0;
    param_1[7] = 0xf;
    param_3 = param_3 + 8;
  }
  return param_3;
}



/* ===== 18006c320 FUN_18006c320 ===== */

undefined4 * FUN_18006c320(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 10) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    *(undefined8 *)(param_3 + 2) = 0;
    *(undefined8 *)(param_3 + 4) = 0;
    *(undefined8 *)(param_3 + 6) = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    uVar1 = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(param_3 + 4) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_3 + 6) = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_3 + 8) = uVar1;
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0xf;
    param_3 = param_3 + 10;
  }
  return param_3;
}



/* ===== 18006c3c0 FUN_18006c3c0 ===== */

undefined8 * FUN_18006c3c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 7) {
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
    *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)((longlong)param_3 + 0x21) = *(undefined1 *)((longlong)param_1 + 0x21);
    *(undefined1 *)((longlong)param_3 + 0x22) = *(undefined1 *)((longlong)param_1 + 0x22);
    *(undefined1 *)((longlong)param_3 + 0x23) = *(undefined1 *)((longlong)param_1 + 0x23);
    param_3[5] = param_1[5];
    *(undefined4 *)(param_3 + 6) = *(undefined4 *)(param_1 + 6);
    *(undefined4 *)((longlong)param_3 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x34);
    param_3 = param_3 + 7;
  }
  return param_3;
}



/* ===== 18006c480 FUN_18006c480 ===== */

undefined8 * FUN_18006c480(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
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
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)((longlong)param_3 + 0x24) = *(undefined4 *)((longlong)param_1 + 0x24);
    param_3 = param_3 + 5;
  }
  return param_3;
}



/* ===== 18006c520 FUN_18006c520 ===== */

void FUN_18006c520(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar1;
  uVar1 = param_3[3];
  param_2[2] = param_3[2];
  param_2[3] = uVar1;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  uVar1 = param_3[5];
  param_2[4] = param_3[4];
  param_2[5] = uVar1;
  uVar1 = param_3[7];
  param_2[6] = param_3[6];
  param_2[7] = uVar1;
  *(undefined1 *)(param_3 + 4) = 0;
  param_3[6] = 0;
  param_3[7] = 0xf;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  uVar1 = param_3[9];
  param_2[8] = param_3[8];
  param_2[9] = uVar1;
  uVar1 = param_3[0xb];
  param_2[10] = param_3[10];
  param_2[0xb] = uVar1;
  *(undefined1 *)(param_3 + 8) = 0;
  param_3[10] = 0;
  param_3[0xb] = 0xf;
  return;
}



/* ===== 18006c5c0 FUN_18006c5c0 ===== */

longlong FUN_18006c5c0(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 600) {
    FUN_18006cf60(param_3,param_1);
    param_3 = param_3 + 600;
  }
  return param_3;
}



/* ===== 18006c630 FUN_18006c630 ===== */

ulonglong FUN_18006c630(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    if ((*(byte **)plVar1[7] == (byte *)0x0) || (*(int *)plVar1[10] < 1)) {
      uVar2 = (**(code **)(*plVar1 + 0x30))();
    }
    else {
      uVar2 = (ulonglong)**(byte **)plVar1[7];
    }
    if ((int)uVar2 != -1) {
      *(char *)((longlong)param_1 + 9) = (char)uVar2;
      *(undefined1 *)(param_1 + 1) = 1;
      return uVar2;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return (ulonglong)*(byte *)((longlong)param_1 + 9);
}



/* ===== 18006c690 FUN_18006c690 ===== */

void FUN_18006c690(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar7 = auStack_28;
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar6 = *(longlong *)(param_1 + 0x18); lVar6 != lVar1; lVar6 = lVar6 + 0x28) {
    FUN_18000f890(lVar6);
  }
  uVar5 = *(ulonglong *)(param_1 + 8);
  uVar4 = *(longlong *)(param_1 + 0x10) * 0x28;
  uVar3 = uVar5;
  if (0xfff < uVar4) {
    uVar3 = *(ulonglong *)(uVar5 - 8);
    uVar5 = (uVar5 - uVar3) - 8;
    if (uVar5 < 0x20) {
      uVar4 = uVar4 + 0x27;
      puVar7 = auStack_28;
    }
    else {
      uVar4 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar7 = auStack_20;
      uVar3 = uVar5;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x18006c720;
  thunk_FUN_1803d64e0(uVar3,uVar4);
  return;
}



/* ===== 18006c740 FUN_18006c740 ===== */

void FUN_18006c740(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar4 = *(longlong *)(param_1 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 0xe0) {
    FUN_1800589f0(lVar4);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 0xe0;
  lVar4 = *(longlong *)(param_1 + 8);
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



/* ===== 18006c890 FUN_18006c890 ===== */

void FUN_18006c890(longlong param_1)

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
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  for (lVar3 = *(longlong *)(param_1 + 0x18); lVar3 != lVar2; lVar3 = lVar3 + 0x40) {
    FUN_18000f890(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 6)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_18006c917;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar3 = lVar2;
  puVar5 = puVar4;
LAB_18006c917:
  *(undefined8 *)(puVar5 + -8) = 0x18006c91c;
  thunk_FUN_1803d64e0(lVar3);
  return;
}



/* ===== 18006c930 FUN_18006c930 ===== */

void FUN_18006c930(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar7 = auStack_28;
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar6 = *(longlong *)(param_1 + 0x18); lVar6 != lVar1; lVar6 = lVar6 + 0x28) {
    FUN_18000f890(lVar6 + 8);
  }
  uVar5 = *(ulonglong *)(param_1 + 8);
  uVar4 = *(longlong *)(param_1 + 0x10) * 0x28;
  uVar3 = uVar5;
  if (0xfff < uVar4) {
    uVar3 = *(ulonglong *)(uVar5 - 8);
    uVar5 = (uVar5 - uVar3) - 8;
    if (uVar5 < 0x20) {
      uVar4 = uVar4 + 0x27;
      puVar7 = auStack_28;
    }
    else {
      uVar4 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar7 = auStack_20;
      uVar3 = uVar5;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x18006c9c1;
  thunk_FUN_1803d64e0(uVar3,uVar4);
  return;
}



/* ===== 18006c9e0 FUN_18006c9e0 ===== */

void FUN_18006c9e0(longlong param_1)

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
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  for (lVar3 = *(longlong *)(param_1 + 0x18); lVar3 != lVar2; lVar3 = lVar3 + 0x38) {
    FUN_18000f890(lVar3);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x38)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_18006ca5a;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar3 = lVar2;
  puVar5 = puVar4;
LAB_18006ca5a:
  *(undefined8 *)(puVar5 + -8) = 0x18006ca5f;
  thunk_FUN_1803d64e0(lVar3);
  return;
}



/* ===== 18006cac0 FUN_18006cac0 ===== */

void FUN_18006cac0(longlong param_1)

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
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar3 = *(longlong *)(param_1 + 0x18); lVar3 != lVar1; lVar3 = lVar3 + 0x60) {
    FUN_18000f890(lVar3 + 0x40);
    FUN_18000f890(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  lVar3 = lVar1;
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x60)) {
    lVar3 = *(longlong *)(lVar1 + -8);
    if ((lVar1 - lVar3) - 8U < 0x20) goto LAB_18006cb55;
    lVar3 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18006cb55:
  *(undefined8 *)(puVar5 + -8) = 0x18006cb5d;
  thunk_FUN_1803d64e0(lVar3);
  return;
}



/* ===== 18006cb70 FUN_18006cb70 ===== */

void FUN_18006cb70(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar4 = *(longlong *)(param_1 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 600) {
    FUN_180054030(lVar4);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 600;
  lVar4 = *(longlong *)(param_1 + 8);
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



/* ===== 18006cc10 FUN_18006cc10 ===== */

ulonglong FUN_18006cc10(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 local_res8 [2];
  
  uVar5 = (*param_2 - *param_1 >> 2) * 0x20 + param_2[1];
  if (param_3 != 0) {
    if (0x7fffffffffffffffU - param_1[3] < param_3) {
      FUN_18006d4f0();
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    local_res8[0] = 0;
    FUN_18006d5a0(param_1,param_3 + 0x1f + param_1[3] >> 5,local_res8);
    uVar3 = param_1[3];
    if (uVar3 == 0) {
      param_1[3] = param_3;
    }
    else {
      lVar1 = *param_1;
      if (((longlong)uVar3 < 0) && (uVar3 != 0)) {
        puVar6 = (uint *)(lVar1 + (~uVar3 >> 5) * -4 + -4);
      }
      else {
        puVar6 = (uint *)(lVar1 + (uVar3 >> 5) * 4);
      }
      param_3 = uVar3 + param_3;
      uVar3 = (ulonglong)((uint)uVar3 & 0x1f);
      param_1[3] = param_3;
      if (((longlong)param_3 < 0) && (param_3 != 0)) {
        puVar7 = (uint *)(lVar1 + (~param_3 >> 5) * -4 + -4);
      }
      else {
        puVar7 = (uint *)(lVar1 + (param_3 >> 5) * 4);
      }
      uVar4 = (ulonglong)((uint)param_3 & 0x1f);
      if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
        puVar9 = (uint *)(lVar1 + (~uVar5 >> 5) * -4 + -4);
      }
      else {
        puVar9 = (uint *)(lVar1 + (uVar5 >> 5) * 4);
      }
      while ((puVar9 != puVar6 || (((uint)uVar5 & 0x1f) != uVar3))) {
        if (uVar3 == 0) {
          uVar3 = 0x1f;
          puVar6 = puVar6 + -1;
        }
        else {
          uVar3 = uVar3 - 1;
        }
        puVar8 = puVar7 + -1;
        if (uVar4 == 0) {
          uVar4 = 0x1f;
        }
        else {
          uVar4 = uVar4 - 1;
          puVar8 = puVar7;
        }
        puVar7 = puVar8;
        if ((*puVar6 & 1 << ((byte)uVar3 & 0x1f)) == 0) {
          *puVar8 = *puVar8 & ~(1 << ((uint)uVar4 & 0x1f));
        }
        else {
          *puVar8 = *puVar8 | 1 << ((uint)uVar4 & 0x1f);
        }
      }
    }
  }
  return uVar5;
}



/* ===== 18006cdb0 FUN_18006cdb0 ===== */

undefined8 * FUN_18006cdb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  puVar1 = param_1 + 1;
  puVar2 = param_1 + 2;
  puVar3 = param_1 + 5;
  puVar4 = param_1 + 6;
  puVar5 = param_1 + 9;
  puVar6 = (undefined4 *)((longlong)param_1 + 0x4c);
  *param_1 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *puVar1 = 0;
  *puVar2 = 0;
  *puVar3 = 0;
  *puVar4 = 0;
  *(undefined4 *)puVar5 = 0;
  *puVar6 = 0;
  lVar7 = FUN_1804ecaa0(0x10);
  uVar8 = FUN_1804ea760(1);
  *(undefined8 *)(lVar7 + 8) = uVar8;
  param_1[0xc] = lVar7;
  param_1[3] = puVar1;
  param_1[4] = puVar2;
  param_1[7] = puVar3;
  param_1[8] = puVar4;
  param_1[10] = puVar5;
  param_1[0xb] = puVar6;
  *puVar2 = 0;
  *puVar4 = 0;
  *puVar6 = 0;
  *puVar1 = 0;
  *puVar3 = 0;
  *(undefined4 *)puVar5 = 0;
  return param_1;
}



/* ===== 18006ce70 FUN_18006ce70 ===== */

void FUN_18006ce70(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined1 local_68 [16];
  undefined1 local_58 [56];
  
  *(undefined4 *)(param_1 + 0x18) = 0x201;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 6;
  lVar5 = FUN_1804ecaa0(0x10);
  uVar6 = FUN_1804ea760(1);
  *(undefined8 *)(lVar5 + 8) = uVar6;
  *(longlong *)(param_1 + 0x40) = lVar5;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar3 = FUN_18006d510(param_1,0x20);
  *(undefined1 *)(param_1 + 0x58) = uVar3;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar2 = *(uint *)(param_1 + 0x14);
    uVar4 = uVar1 & 0x13 | 4;
    *(uint *)(param_1 + 0x10) = uVar4;
    if ((uVar4 & uVar2) != 0) {
      if ((uVar2 & 4) == 0) {
        pcVar7 = "ios_base::failbit set";
        if (((byte)uVar1 & (byte)uVar2 & 2) == 0) {
          pcVar7 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar7 = "ios_base::badbit set";
      }
      uVar6 = FUN_18004d7f0(local_68,1);
      FUN_18004e280(local_58,pcVar7,uVar6);
                    /* WARNING: Subroutine does not return */
      FUN_1804ef5f0(local_58,&DAT_180915ec0);
    }
  }
  return;
}



/* ===== 18006cf60 FUN_18006cf60 ===== */

undefined4 * FUN_18006cf60(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
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
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
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
  uVar1 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_2 + 0x2c) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_2 + 0x2a) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x2a) = uVar2;
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_2 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = uVar1;
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  puVar4 = (undefined8 *)((longlong)param_1 + 0xd1);
  puVar5 = (undefined8 *)((longlong)param_2 + 0xd1);
  lVar6 = 2;
  do {
    uVar1 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
    uVar1 = puVar5[3];
    puVar4[2] = puVar5[2];
    puVar4[3] = uVar1;
    uVar1 = puVar5[5];
    puVar4[4] = puVar5[4];
    puVar4[5] = uVar1;
    uVar1 = puVar5[7];
    puVar4[6] = puVar5[6];
    puVar4[7] = uVar1;
    uVar1 = puVar5[9];
    puVar4[8] = puVar5[8];
    puVar4[9] = uVar1;
    uVar1 = puVar5[0xb];
    puVar4[10] = puVar5[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar5[0xd];
    puVar4[0xc] = puVar5[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar5[0xf];
    puVar4[0xe] = puVar5[0xe];
    puVar4[0xf] = uVar1;
    puVar4 = puVar4 + 0x10;
    puVar5 = puVar5 + 0x10;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined1 *)((longlong)param_1 + 0x1d1) = *(undefined1 *)((longlong)param_2 + 0x1d1);
  param_1[0x75] = param_2[0x75];
  param_1[0x76] = param_2[0x76];
  *(undefined1 *)(param_1 + 0x77) = *(undefined1 *)(param_2 + 0x77);
  param_1[0x78] = param_2[0x78];
  param_1[0x79] = param_2[0x79];
  *(undefined8 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x7a) = *(undefined8 *)(param_2 + 0x7a);
  *(undefined8 *)(param_1 + 0x7c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x7e) = *(undefined8 *)(param_2 + 0x7e);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined1 *)(param_2 + 0x7a) = 0;
  *(undefined8 *)(param_2 + 0x7e) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0xf;
  *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_2 + 0x82);
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x86) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8a) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x86);
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x86) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x8a);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x8a) = uVar1;
  *(undefined1 *)(param_2 + 0x84) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x8a) = 0xf;
  param_1[0x8c] = param_2[0x8c];
  param_1[0x8d] = param_2[0x8d];
  param_1[0x8e] = param_2[0x8e];
  param_1[0x8f] = param_2[0x8f];
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  param_1[0x92] = param_2[0x92];
  param_1[0x93] = param_2[0x93];
  param_1[0x94] = param_2[0x94];
  return param_1;
}



/* ===== 18006d2d0 FUN_18006d2d0 ===== */

void FUN_18006d2d0(longlong *param_1)

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



/* ===== 18006d320 FUN_18006d320 ===== */

void FUN_18006d320(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 600) {
    FUN_180054030(lVar2);
  }
  return;
}



/* ===== 18006d360 FUN_18006d360 ===== */

void FUN_18006d360(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_18000f890(lVar2 + 0x40);
    FUN_18000f890(lVar2 + 0x20);
    FUN_18000f890(lVar2);
  }
  return;
}



/* ===== 18006d3c0 FUN_18006d3c0 ===== */

void FUN_18006d3c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    FUN_18000f890(lVar2);
  }
  return;
}



/* ===== 18006d410 FUN_18006d410 ===== */

void FUN_18006d410(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    FUN_18000f890(lVar2);
  }
  return;
}



/* ===== 18006d460 FUN_18006d460 ===== */

void FUN_18006d460(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    FUN_18000f890(lVar2 + 8);
  }
  return;
}



/* ===== 18006d4b0 FUN_18006d4b0 ===== */

void FUN_18006d4b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0xe0) {
    FUN_1800589f0(lVar2);
  }
  return;
}



/* ===== 18006d4f0 FUN_18006d4f0 ===== */

void FUN_18006d4f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1804e4cd0("vector<bool> too long");
}



/* ===== 18006d510 FUN_18006d510 ===== */

ulonglong FUN_18006d510(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 local_20 [8];
  longlong *local_18;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 8);
  local_18 = plVar1;
  (**(code **)(*plVar1 + 8))(plVar1);
  uVar5 = 1;
  plVar2 = (longlong *)FUN_1800666c0(local_20);
  uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,*plVar2,param_4,uVar5);
  uVar5 = 0;
  if (plVar1 != (longlong *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1,(undefined8 *)*puVar4,param_4,uVar5);
    }
    uVar3 = uVar3 & 0xff;
  }
  return uVar3;
}



/* ===== 18006d5a0 FUN_18006d5a0 ===== */

void FUN_18006d5a0(longlong *param_1,ulonglong param_2,int *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int *piVar9;
  
  piVar6 = (int *)param_1[1];
  lVar3 = *param_1;
  uVar7 = (longlong)piVar6 - lVar3 >> 2;
  if (param_2 < uVar7) {
    param_1[1] = lVar3 + param_2 * 4;
  }
  else if (uVar7 < param_2) {
    uVar2 = param_1[2] - lVar3 >> 2;
    if (uVar2 < param_2) {
      if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      uVar4 = 0x3fffffffffffffff;
      if (uVar2 <= 0x3fffffffffffffff - (uVar2 >> 1)) {
        uVar4 = (uVar2 >> 1) + uVar2;
        if (uVar4 < param_2) {
          uVar4 = param_2;
        }
        else if (0x3fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_18000d840();
        }
      }
      lVar1 = FUN_18000fb70(uVar4 * 4);
      piVar6 = (int *)(((longlong)piVar6 - lVar3 & 0xfffffffffffffffcU) + lVar1);
      lVar3 = param_2 - uVar7;
      piVar5 = piVar6;
      plVar8 = param_1;
      uVar7 = uVar4;
      if (*param_3 == 0) {
        piVar9 = piVar6;
        FUN_180540170(piVar6,0,lVar3 * 4);
        piVar5 = piVar6 + lVar3;
        piVar6 = piVar9;
      }
      else {
        for (; lVar3 != 0; lVar3 = lVar3 + -1) {
          *piVar5 = *param_3;
          piVar5 = piVar5 + 1;
        }
      }
      FUN_180540530(lVar1,*param_1,param_1[1] - *param_1);
      FUN_18006b9f0(param_1,lVar1,param_2,uVar4,plVar8,0,uVar7,piVar6,piVar5);
    }
    else {
      lVar3 = param_2 - uVar7;
      if (*param_3 == 0) {
        FUN_180540170(piVar6,0,lVar3 * 4);
        piVar6 = piVar6 + lVar3;
      }
      else {
        for (; lVar3 != 0; lVar3 = lVar3 + -1) {
          *piVar6 = *param_3;
          piVar6 = piVar6 + 1;
        }
      }
      param_1[1] = (longlong)piVar6;
    }
  }
  return;
}



/* ===== 18006d740 FUN_18006d740 ===== */

longlong * FUN_18006d740(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    uVar3 = param_2[1] - *param_2 >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar1 = uVar3 * 4;
    lVar2 = FUN_18000fb70(lVar1);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + lVar1;
    lVar1 = *param_1;
    uVar3 = param_2[1] - *param_2;
    FUN_180540530(lVar1,*param_2,uVar3,param_4,param_1);
    param_1[1] = (uVar3 & 0xfffffffffffffffc) + lVar1;
  }
  return param_1;
}



/* ===== 18006d7e0 FUN_18006d7e0 ===== */

longlong * FUN_18006d7e0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    uVar3 = param_2[1] - *param_2 >> 5;
    if (0x7ffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar4 = uVar3 * 0x20;
    lVar2 = FUN_18000fb70(lVar4);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + lVar4;
    lVar2 = *param_1;
    lVar1 = param_2[1];
    lVar6 = lVar2;
    plVar5 = param_1;
    plVar7 = param_1;
    for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 0x20) {
      FUN_180024b50(lVar2,lVar4,param_3,param_4,plVar5,lVar6,lVar2,plVar7);
      lVar2 = lVar2 + 0x20;
    }
    param_1[1] = lVar2;
  }
  return param_1;
}



/* ===== 18006d8a0 FUN_18006d8a0 ===== */

undefined8 * FUN_18006d8a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[2];
  param_2[2] = 0;
  uVar2 = param_2[1];
  param_2[1] = 0;
  uVar3 = *param_2;
  *param_2 = 0;
  *param_1 = uVar3;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  uVar1 = param_2[5];
  param_2[5] = 0;
  uVar2 = param_2[4];
  param_2[4] = 0;
  uVar3 = param_2[3];
  param_2[3] = 0;
  param_1[3] = uVar3;
  param_1[4] = uVar2;
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
  param_2[0xf] = 0;
  uVar2 = param_2[0xe];
  param_2[0xe] = 0;
  uVar3 = param_2[0xd];
  param_2[0xd] = 0;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x12];
  param_2[0x12] = 0;
  uVar2 = param_2[0x11];
  param_2[0x11] = 0;
  uVar3 = param_2[0x10];
  param_2[0x10] = 0;
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  uVar1 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar1;
  uVar1 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar1;
  *(undefined1 *)(param_2 + 0x13) = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0xf;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  uVar1 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar1;
  uVar1 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = uVar1;
  *(undefined1 *)(param_2 + 0x17) = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0xf;
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  *(undefined1 *)((longlong)param_1 + 0xd9) = *(undefined1 *)((longlong)param_2 + 0xd9);
  return param_1;
}



/* ===== 18006da7c FUN_18006da7c ===== */

void FUN_18006da7c(longlong param_1)

{
  FUN_1800687a0(param_1 - *(int *)(param_1 + -4));
  return;
}



/* ===== 18006da88 FUN_18006da88 ===== */

void FUN_18006da88(longlong param_1)

{
  FUN_180068720(param_1 - *(int *)(param_1 + -4));
  return;
}



/* ===== 18006da94 FUN_18006da94 ===== */

void FUN_18006da94(longlong param_1)

{
  FUN_180068820(param_1 - *(int *)(param_1 + -4));
  return;
}



/* ===== 18006daa0 FUN_18006daa0 ===== */

void FUN_18006daa0(longlong param_1)

{
  FUN_1800686e0(param_1 - *(int *)(param_1 + -4));
  return;
}



/* ===== 18006dab0 FUN_18006dab0 ===== */

void FUN_18006dab0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1804e4cd0("map/set too long");
}



/* ===== 18006dad0 FUN_18006dad0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18006dad0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 ***local_60;
  undefined8 ***local_58 [3];
  ulonglong local_40;
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_68 = 0;
  local_60 = local_58;
  local_30 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_38 = param_2;
  FUN_180028c20(local_58,&local_38);
  local_68 = 0;
  pppuVar2 = local_58;
  if (7 < local_40) {
    pppuVar2 = local_58[0];
  }
  iVar1 = FUN_1804e5830(pppuVar2,&local_38,0x21,0xffffffff);
  puVar4 = (undefined8 *)0x8000000000000000;
  if (iVar1 == 0) {
    puVar4 = local_38;
  }
  FUN_1800289e0();
  puVar3 = (undefined8 *)0x0;
  if (iVar1 == 0) {
    puVar3 = puVar4;
  }
  *param_1 = puVar3;
  return param_1;
}



/* ===== 18006dbc0 FUN_18006dbc0 ===== */

undefined8 FUN_18006dbc0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_18047fc70(param_1,1,0);
  if (lVar3 == 0) {
    iVar1 = FUN_18047dec0(param_1,1,"__tostring");
    if ((iVar1 != 0) && (iVar1 = FUN_18047ee00(param_1,0xffffffff), iVar1 != 0)) {
      return 1;
    }
    uVar2 = FUN_18047fe10(param_1,1);
    uVar4 = FUN_18047fe70(param_1,uVar2);
    lVar3 = FUN_18047f380(param_1,"(error object is a %s value)",uVar4);
  }
  FUN_18048af10(param_1,param_1,lVar3,1);
  return 1;
}



/* ===== 18006dc50 FUN_18006dc50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ***** FUN_18006dc50(longlong *****param_1)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong *****ppppplVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [24];
  undefined8 local_1b8;
  longlong *****local_1b0;
  ulonglong local_1a8;
  undefined4 local_198;
  longlong *****local_190;
  undefined ***local_188;
  undefined8 local_180;
  longlong local_178 [2];
  undefined1 local_168 [128];
  undefined **local_e8 [12];
  longlong *****local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong *****local_68 [2];
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  local_198 = 0;
  local_190 = param_1;
  FUN_180075780(local_178);
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0xf;
  local_88 = (longlong *****)0x0;
  *param_1 = (longlong ****)0x0;
  param_1[1] = (longlong ****)0x0;
  param_1[2] = (longlong ****)0x0;
  param_1[3] = (longlong ****)0x0;
  param_1[2] = (longlong ****)0x0;
  param_1[3] = (longlong ****)0xf;
  *(undefined1 *)param_1 = 0;
  local_198 = 1;
  iVar11 = 0;
  bVar4 = true;
  uVar5 = FUN_18006d510((longlong)local_178 + (longlong)*(int *)(local_178[0] + 4),10);
  plVar6 = (longlong *)FUN_180075fd0(local_178,&local_88,uVar5);
  puVar10 = auStack_1d8;
  bVar2 = *(byte *)((longlong)*(int *)(*plVar6 + 4) + 0x10 + (longlong)plVar6);
  while ((bVar2 & 6) == 0) {
    if (bVar4) {
      if ((longlong ******)param_1 != &local_88) {
        ppppplVar8 = (longlong *****)&local_88;
        if (0xf < local_70) {
          ppppplVar8 = local_88;
        }
        FUN_180029840(param_1,ppppplVar8,local_78);
      }
      bVar4 = false;
    }
    else {
      ppppplVar8 = (longlong *****)&local_88;
      if (0xf < local_70) {
        ppppplVar8 = local_88;
      }
      if (((local_78 < 0x10) ||
          (pcVar1 = (char *)(local_78 + (longlong)ppppplVar8),
          pcVar7 = (char *)thunk_FUN_1804e92d0(ppppplVar8,pcVar1,"stack traceback:",0x10),
          pcVar7 == pcVar1)) || ((longlong)pcVar7 - (longlong)ppppplVar8 == -1)) {
        ppppplVar8 = (longlong *****)&local_88;
        if (0xf < local_70) {
          ppppplVar8 = local_88;
        }
        if (((local_78 < 3) ||
            (pcVar1 = (char *)(local_78 + (longlong)ppppplVar8),
            pcVar7 = (char *)thunk_FUN_1804e92d0(ppppplVar8,pcVar1,&DAT_1806e180c,3),
            pcVar7 == pcVar1)) || ((longlong)pcVar7 - (longlong)ppppplVar8 == -1)) {
          ppppplVar8 = (longlong *****)&local_88;
          if (0xf < local_70) {
            ppppplVar8 = local_88;
          }
          if (((4 < local_78) &&
              (pcVar1 = (char *)(local_78 + (longlong)ppppplVar8),
              pcVar7 = (char *)thunk_FUN_1804e92d0(ppppplVar8,pcVar1,".lua:",5), pcVar7 != pcVar1))
             && ((longlong)pcVar7 - (longlong)ppppplVar8 != -1)) {
            while (local_78 != 0) {
              ppppplVar8 = (longlong *****)&local_88;
              if (0xf < local_70) {
                ppppplVar8 = local_88;
              }
              if (*(char *)ppppplVar8 != '\t') {
                ppppplVar8 = (longlong *****)&local_88;
                if (0xf < local_70) {
                  ppppplVar8 = local_88;
                }
                if (*(char *)ppppplVar8 != ' ') break;
              }
              ppppplVar8 = (longlong *****)&local_88;
              if (0xf < local_70) {
                ppppplVar8 = local_88;
              }
              uVar9 = local_78 - (local_78 != 0);
              FUN_180540530(ppppplVar8,(char *)((ulonglong)(local_78 != 0) + (longlong)ppppplVar8),
                            uVar9 + 1);
              local_78 = uVar9;
            }
            if (0x7fffffffffffffff - local_78 < 4) goto LAB_18006e0c1;
            local_1b0 = (longlong *****)&local_88;
            if (0xf < local_70) {
              local_1b0 = local_88;
            }
            local_1b8 = 4;
            local_1a8 = local_78;
            FUN_180069380(local_68);
            local_198 = 3;
            ppppplVar8 = (longlong *****)local_68;
            if (0xf < local_50) {
              ppppplVar8 = local_68[0];
            }
            FUN_1800134a0(param_1,ppppplVar8,local_58);
            local_198 = 1;
            FUN_18000f890(local_68);
            iVar11 = iVar11 + 1;
            if (3 < iVar11) break;
          }
        }
      }
    }
    uVar5 = FUN_18006d510((longlong)local_178 + (longlong)*(int *)(local_178[0] + 4),10);
    plVar6 = (longlong *)FUN_180075fd0(local_178,&local_88,uVar5);
    bVar2 = *(byte *)((longlong)plVar6 + (longlong)*(int *)(*plVar6 + 4) + 0x10);
  }
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    ppppplVar8 = local_88;
    if (0xfff < uVar9) {
      ppppplVar8 = (longlong *****)local_88[-1];
      if ((char *)0x1f < (char *)((longlong)local_88 + (-8 - (longlong)ppppplVar8))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar10 = auStack_1d0;
LAB_18006e0c1:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar10 + -8) = &UNK_18006e0c6;
        FUN_180011990();
      }
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppplVar8,uVar9);
  }
  local_78 = 0;
  local_70 = 0xf;
  local_88 = (longlong *****)((ulonglong)local_88 & 0xffffffffffffff00);
  local_188 = local_e8;
  *(undefined ***)((longlong)local_178 + (longlong)*(int *)(local_178[0] + 4)) =
       std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_178 + (longlong)*(int *)(local_178[0] + 4) + -4) =
       *(int *)(local_178[0] + 4) + -0x90;
  FUN_180075e50(local_168);
  *(undefined ***)((longlong)local_178 + (longlong)*(int *)(local_178[0] + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_178 + (longlong)*(int *)(local_178[0] + 4) + -4) =
       *(int *)(local_178[0] + 4) + -0x18;
  local_180 = local_e8;
  local_e8[0] = std::ios_base::vftable;
  FUN_1804eaa10(local_e8);
  return param_1;
}



/* ===== 18006e0d0 FUN_18006e0d0 ===== */

void FUN_18006e0d0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 0x12;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x90;
  FUN_180075e50(param_1 + 2);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  *plVar1 = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
  *plVar1 = (longlong)std::ios_base::vftable;
  FUN_1804eaa10(plVar1);
  return;
}



/* ===== 18006e170 FUN_18006e170 ===== */

undefined8 * FUN_18006e170(undefined8 *param_1)

{
  ulonglong uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  size_t _Size;
  longlong *plVar4;
  int iVar5;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  longlong *plVar6;
  
  plVar4 = DAT_180ccfa98;
  if (DAT_180ccfa90 != DAT_180ccfa98) {
    uVar1 = param_1[3];
    sVar2 = param_1[2];
    plVar6 = DAT_180ccfa90;
    do {
      puVar3 = (undefined8 *)*plVar6;
      if (uVar1 < 0x10) {
        _Buf2 = param_1;
      }
      else {
        _Buf2 = (undefined8 *)*param_1;
      }
      _Size = puVar3[2];
      if ((ulonglong)puVar3[3] < 0x10) {
        _Buf1 = puVar3;
      }
      else {
        _Buf1 = (undefined8 *)*puVar3;
      }
      if (_Size == sVar2) {
        if (_Size == 0) {
          return puVar3;
        }
        iVar5 = memcmp(_Buf1,_Buf2,_Size);
        if (iVar5 == 0) {
          return puVar3;
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar4);
  }
  return (undefined8 *)0x0;
}



/* ===== 18006e200 FUN_18006e200 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18006e200(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 *local_d0;
  undefined4 *puStack_c8;
  undefined4 *local_c0;
  longlong local_b8;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 local_a0;
  ulonglong uStack_98;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_f8;
  local_d8 = 0;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    local_d0 = (undefined4 *)0x0;
    puStack_c8 = (undefined4 *)0x0;
    local_c0 = (undefined4 *)0x0;
    puVar13 = *(undefined8 **)(param_1 + 0x58);
    puVar4 = puStack_c8;
    for (puVar11 = *(undefined8 **)(param_1 + 0x50); puStack_c8 = puVar4, puVar11 != puVar13;
        puVar11 = puVar11 + 5) {
      if ((ulonglong)puVar11[3] < 0x10) {
        puVar12 = puVar11;
      }
      else {
        puVar12 = (undefined8 *)*puVar11;
      }
      if ((puVar11[2] == 6) && (iVar6 = memcmp(puVar12,"unload",6), iVar6 == 0)) {
        if (puStack_c8 == local_c0) {
          FUN_18006a410(&local_d0);
        }
        else {
          *puStack_c8 = *(undefined4 *)(puVar11 + 4);
          puStack_c8 = puStack_c8 + 1;
        }
      }
      puVar4 = puStack_c8;
    }
    for (puVar16 = local_d0; puVar16 != puVar4; puVar16 = puVar16 + 1) {
      FUN_18047f2b0(lVar1,FUN_18006dbc0,0);
      FUN_18047f6f0(lVar1,0xffffd8f0);
      iVar6 = FUN_18047f190(lVar1,0,0,0xfffffffe);
      if (iVar6 != 0) {
        lVar7 = FUN_18047fc70(lVar1,0xffffffff,0);
        if (lVar7 == 0) {
          puVar8 = &DAT_1806dfbb4;
        }
        else {
          puVar8 = (undefined2 *)FUN_18047fc70(lVar1,0xffffffff,0);
        }
        FUN_180013350(local_90,puVar8);
        uVar9 = FUN_18006dc50(local_70,local_90);
        puVar10 = (uint *)FUN_18006b5b0(uVar9,0,"unload: ",8);
        local_b0 = *puVar10;
        uStack_ac = puVar10[1];
        uStack_a8 = puVar10[2];
        uStack_a4 = puVar10[3];
        local_a0 = *(undefined8 *)(puVar10 + 4);
        uStack_98 = *(ulonglong *)(puVar10 + 6);
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[6] = 0xf;
        puVar10[7] = 0;
        *(undefined1 *)puVar10 = 0;
        local_d8 = 1;
        FUN_180070170(param_1,&local_b0);
        local_d8 = 0;
        if (0xf < uStack_98) {
          uVar14 = uStack_98 + 1;
          lVar3 = CONCAT44(uStack_ac,local_b0);
          lVar7 = lVar3;
          if (0xfff < uVar14) {
            lVar7 = *(longlong *)(lVar3 + -8);
            if (0x1f < (lVar3 - lVar7) - 8U) {
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar14 = uStack_98 + 0x28;
          }
          thunk_FUN_1803d64e0(lVar7,uVar14);
        }
        local_a0 = 0;
        uStack_98 = 0xf;
        local_b0 = local_b0 & 0xffffff00;
        FUN_18000f890(local_70);
        FUN_18000f890(local_90);
        FUN_18047fb50(lVar1,0xfffffffe);
      }
      FUN_18047fb50(lVar1,0xfffffffe);
    }
    FUN_180068f30(&local_d0);
    plVar5 = DAT_180cd02c0;
    for (plVar15 = DAT_180cd02b8; plVar15 != plVar5; plVar15 = plVar15 + 5) {
      if (((char)plVar15[4] != '\0') && (*plVar15 == *(longlong *)(param_1 + 0x148))) {
        *(undefined1 *)(plVar15 + 4) = 0;
        FUN_180429140(plVar15[1]);
      }
    }
    FUN_180080870(param_1);
    FUN_180063b70(param_1);
    FUN_1800aa570(*(undefined8 *)(param_1 + 0x148));
    lVar7 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x118) != lVar7) {
      local_b8 = *(longlong *)(param_1 + 0x118);
      do {
        lVar3 = local_b8;
        FUN_18000f890(local_b8 + 0x20);
        FUN_18000f890(lVar3);
        local_b8 = lVar3 + 0x48;
      } while (local_b8 != lVar7);
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x118);
    }
    puVar11 = *(undefined8 **)(param_1 + 0x90);
    puVar13 = *(undefined8 **)(param_1 + 0x88);
    if (puVar11 != puVar13) {
      do {
        puVar12 = puVar11 + -2;
        FUN_180264d90(*puVar12,puVar11[-1]);
        puVar13 = *(undefined8 **)(param_1 + 0x88);
        puVar11 = puVar12;
      } while (puVar12 != puVar13);
    }
    if (puVar13 != *(undefined8 **)(param_1 + 0x90)) {
      *(undefined8 **)(param_1 + 0x90) = puVar13;
    }
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_180098430();
      FUN_180098180(param_1);
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    FUN_18048eb00(lVar1);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* ===== 18006e590 FUN_18006e590 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18006e590(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  longlong local_90;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_a8 = 0;
  if ((DAT_180ccfa18 < 1) &&
     (uVar6 = 0, lVar4 = DAT_180ccfa90, lVar5 = DAT_180ccfa98,
     DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0)) {
    do {
      lVar1 = *(longlong *)(lVar4 + uVar6 * 8);
      if ((*(char *)(lVar1 + 0x48) == '\0') && (*(char *)(lVar1 + 0x49) == '\0')) {
        if (*(char *)(lVar1 + 0x4a) != '\0') {
LAB_18006e624:
          if (*(char *)(lVar1 + 0x48) != '\0') goto LAB_18006e62d;
          bVar3 = true;
          goto LAB_18006e630;
        }
        uVar6 = uVar6 + 1;
      }
      else {
        if (*(char *)(lVar1 + 0x4a) != '\0') goto LAB_18006e624;
LAB_18006e62d:
        bVar3 = false;
LAB_18006e630:
        FUN_180024b50(local_a0,lVar1);
        FUN_180024b50(local_60,lVar1 + 0x20);
        if ((*(char *)(lVar1 + 0x49) == '\0') || (*(char *)(lVar1 + 0x48) != '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        FUN_18006e200(lVar1);
        if (bVar2) {
          if (0x7fffffffffffffffU - local_90 < 10) {
                    /* WARNING: Subroutine does not return */
            FUN_180011990();
          }
          local_b8 = 10;
          local_c0 = ": unloaded";
          local_c8 = local_90;
          FUN_180069380(local_80);
          local_a8 = 1;
          FUN_18009afb0(local_80);
          local_a8 = 0;
          FUN_18000f890(local_80);
        }
        FUN_1800764a0(DAT_180ccfa90 + uVar6 * 8 + 8,DAT_180ccfa98);
        lVar4 = *(longlong *)(DAT_180ccfa98 + -8);
        if (lVar4 != 0) {
          FUN_1800769f0(lVar4);
          thunk_FUN_1803d64e0(lVar4,0x1c8);
        }
        DAT_180ccfa98 = DAT_180ccfa98 + -8;
        if (bVar3) {
          FUN_180070b90(local_a0,local_60);
        }
        FUN_18000f890(local_60);
        FUN_18000f890(local_a0);
        lVar4 = DAT_180ccfa90;
        lVar5 = DAT_180ccfa98;
      }
    } while (uVar6 < (ulonglong)(lVar5 - lVar4 >> 3));
  }
  return;
}



/* ===== 18006e7b0 FUN_18006e7b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18006e7b0(undefined8 param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined1 auStack_248 [32];
  undefined *local_228;
  int iStack_21c;
  longlong local_218 [2];
  byte local_208 [56];
  longlong alStack_1d0 [13];
  undefined **local_168 [12];
  undefined ***local_108;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined2 uStack_fa;
  undefined8 *******local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined ***local_c8;
  undefined2 uStack_c0;
  undefined2 uStack_ba;
  undefined8 *******local_a8 [3];
  ulonglong local_90;
  undefined8 *******local_88 [3];
  ulonglong local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_248;
  uVar11 = 1;
  pcVar5 = (char *)FUN_18047e090(param_1,1,0);
  cVar1 = *pcVar5;
  pcVar12 = pcVar5;
  while( true ) {
    if (cVar1 == '\0') {
      FUN_18047eb70(param_1,0xffffd8f0,"wl_modules");
      FUN_18047eb70(param_1,0xffffffff,pcVar5);
      iVar3 = FUN_18047fe10(param_1,0xffffffff);
      if (iVar3 == 0) {
        FUN_18047fb50(param_1,0xfffffffe);
        uVar6 = FUN_180013350(local_68,"C:\\neverlose\\scripts\\lib");
        uVar6 = FUN_180042850(&local_c8,uVar6,&DAT_1806e067c);
        uVar6 = FUN_180042850(&local_108,uVar6,pcVar5);
        FUN_180042850(local_a8,uVar6,&DAT_1806e188c);
        FUN_18000f890(&local_108);
        FUN_18000f890(&local_c8);
        FUN_18000f890(local_68);
        pppppppuVar8 = local_a8;
        if (0xf < local_90) {
          pppppppuVar8 = local_a8[0];
        }
        FUN_1800695d0(local_218,pppppppuVar8,0x20);
        *(undefined ***)((longlong)local_218 + (longlong)*(int *)(local_218[0] + 4)) =
             std::basic_ifstream<char,std::char_traits<char>_>::vftable;
        *(int *)((longlong)local_218 + (longlong)*(int *)(local_218[0] + 4) + -4) =
             *(int *)(local_218[0] + 4) + -0xb0;
        if ((local_208[*(int *)(local_218[0] + 4)] & 6) == 0) {
          local_108 = *(undefined ****)
                       ((longlong)alStack_1d0 + (longlong)*(int *)(local_218[0] + 4));
          uStack_100 = local_108 == (undefined ***)0x0;
          local_e8 = (undefined8 *******)0x0;
          uStack_e0 = 0;
          local_d8 = 0;
          local_d0 = 0;
          uStack_ff = 0;
          local_c8 = (undefined ***)0x0;
          uStack_c0 = 1;
          uStack_ba = uStack_fa;
          if ((local_108 == (undefined ***)0x0) ||
             (FUN_18006c630(&local_108), local_108 == (undefined ***)0x0)) {
            local_d8 = 0;
            local_d0 = 0xf;
            local_e8 = (undefined8 *******)((ulonglong)local_e8 & 0xffffffffffffff00);
          }
          else {
            FUN_180068a20(&local_e8,&local_108,&local_c8);
          }
          uVar6 = FUN_180013350(&local_108,"@lib/");
          uVar6 = FUN_180042850(local_68,uVar6,pcVar5);
          FUN_180042850(local_88,uVar6,&DAT_1806e188c);
          FUN_18000f890(local_68);
          FUN_18000f890(&local_108);
          FUN_18047f270(param_1,0);
          FUN_18047f8e0(param_1,0xfffffffe,pcVar5);
          pppppppuVar8 = local_88;
          if (0xf < local_70) {
            pppppppuVar8 = local_88[0];
          }
          pppppppuVar9 = &local_e8;
          if (0xf < local_d0) {
            pppppppuVar9 = local_e8;
          }
          local_228 = &DAT_1806dfd54;
          iVar3 = FUN_1804829e0(param_1,pppppppuVar9,local_d8,pppppppuVar8);
          if (iVar3 == 0) {
            FUN_18047f530(param_1,pcVar5);
            FUN_18047e730(param_1,1,1);
            iVar3 = FUN_18047fe10(param_1,0xffffffff);
            if (iVar3 == 0) {
              FUN_18047fb50(param_1,0xfffffffe);
              FUN_18047f270(param_1,1);
            }
            FUN_18047f610(param_1,0xffffffff);
            FUN_18047f8e0(param_1,0xfffffffd,pcVar5);
          }
          else {
            uVar4 = FUN_180484c80();
            uVar11 = (ulonglong)uVar4;
          }
          FUN_18000f890(local_88);
          if (0xf < local_d0) {
            uVar10 = local_d0 + 1;
            pppppppuVar8 = local_e8;
            if (0xfff < uVar10) {
              pppppppuVar8 = (undefined8 *******)local_e8[-1];
              if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pppppppuVar8))) {
                pcVar2 = (code *)swi(0x29);
                (*pcVar2)(5);
                pcVar2 = (code *)swi(3);
                uVar11 = (*pcVar2)();
                return uVar11;
              }
              uVar10 = local_d0 + 0x28;
            }
            thunk_FUN_1803d64e0(pppppppuVar8,uVar10);
          }
          local_d8 = 0;
          local_d0 = 0xf;
          local_e8 = (undefined8 *******)((ulonglong)local_e8 & 0xffffffffffffff00);
        }
        else {
          pppppppuVar8 = local_a8;
          if (0xf < local_90) {
            pppppppuVar8 = local_a8[0];
          }
          uVar4 = FUN_180484c10(param_1,"require: no module \'%s\' (looked for %s)",pcVar5,
                                pppppppuVar8);
          uVar11 = (ulonglong)uVar4;
        }
        local_c8 = local_168;
        *(undefined ***)((longlong)local_218 + (longlong)*(int *)(local_218[0] + 4)) =
             std::basic_ifstream<char,std::char_traits<char>_>::vftable;
        *(int *)((longlong)local_218 + (longlong)*(int *)(local_218[0] + 4) + -4) =
             *(int *)(local_218[0] + 4) + -0xb0;
        FUN_1800681f0(local_208);
        *(undefined ***)((longlong)local_218 + (longlong)*(int *)(local_218[0] + 4)) =
             std::basic_istream<char,std::char_traits<char>_>::vftable;
        *(int *)((longlong)local_218 + (longlong)*(int *)(local_218[0] + 4) + -4) =
             *(int *)(local_218[0] + 4) + -0x18;
        local_108 = local_168;
        local_168[0] = std::ios_base::vftable;
        FUN_1804eaa10(local_168);
        FUN_18000f890(local_a8);
      }
      return uVar11;
    }
    if ((0x19 < (byte)(*pcVar12 + 0x9fU)) &&
       ((bVar7 = *pcVar12 - 0x2d, 0x32 < bVar7 ||
        ((0x43ffffff01ff9U >> ((ulonglong)bVar7 & 0x3f) & 1) == 0)))) break;
    pcVar12 = pcVar12 + 1;
    cVar1 = *pcVar12;
  }
  uVar11 = FUN_180484c10(param_1,"require: bad module name \'%s\' (letters, digits, _ and - only)",
                         pcVar5);
  return uVar11;
}



/* ===== 18006ec70 FUN_18006ec70 ===== */

undefined8 FUN_18006ec70(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  uVar2 = FUN_18047e090(param_1,1,local_res10);
  uVar3 = FUN_18047e510(param_1,2,"=(load)",0);
  iVar1 = FUN_1804829e0(param_1,uVar2,local_res10[0],uVar3,&DAT_1806dfd54);
  if (iVar1 == 0) {
    return 1;
  }
  FUN_18047f4d0(param_1);
  FUN_18047ed50(param_1,0xfffffffe);
  return 2;
}



/* ===== 18006ed10 FUN_18006ed10 ===== */

undefined8 FUN_18006ed10(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180512a60(0);
  FUN_18047f4f0(param_1,(double)lVar1);
  return 1;
}



/* ===== 18006ed40 FUN_18006ed40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18006ed40(undefined8 param_1)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  longlong local_148 [5];
  undefined4 local_120;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_168;
  uVar3 = FUN_18047e510(param_1,1,"%Y-%m-%d %H:%M:%S",0);
  iVar2 = FUN_18047fe10(param_1,2);
  if (iVar2 < 1) {
    local_148[0] = FUN_180512a60(0);
  }
  else {
    dVar1 = (double)FUN_18047e140(param_1,2);
    local_148[0] = (longlong)dVar1;
  }
  local_120 = 0;
  local_148[1] = 0;
  local_148[2] = 0;
  local_148[3] = 0;
  local_148[4] = 0;
  iVar2 = thunk_FUN_1805121e4(local_148 + 1,local_148);
  if (iVar2 == 0) {
    FUN_180540170(local_118,0,0x100);
    lVar4 = FUN_180512a44(local_118,0x100,uVar3,local_148 + 1);
    if (lVar4 == 0) {
      uVar3 = FUN_180484c10(param_1,"os.date: bad format");
    }
    else {
      FUN_18047f530(param_1,local_118);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== 18006ee50 FUN_18006ee50 ===== */

void FUN_18006ee50(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  FUN_18047f2b0(uVar1,FUN_18048c790,0);
  FUN_18047f530(uVar1,&DAT_18058b643);
  FUN_18047e730(uVar1,1,0);
  FUN_18047f2b0(uVar1,FUN_180487770,0);
  FUN_18047f530(uVar1,"table");
  FUN_18047e730(uVar1,1,0);
  FUN_18047f2b0(uVar1,FUN_18048d5c0,0);
  FUN_18047f530(uVar1,"string");
  FUN_18047e730(uVar1,1,0);
  FUN_18047f2b0(uVar1,FUN_18048e580,0);
  FUN_18047f530(uVar1,&DAT_1806e1904);
  FUN_18047e730(uVar1,1,0);
  FUN_18047f2b0(uVar1,FUN_18048f500,0);
  FUN_18047f530(uVar1,&DAT_1806e190c);
  FUN_18047e730(uVar1,1,0);
  FUN_18047f2b0(uVar1,FUN_180486af0,0);
  FUN_18047f530(uVar1,&DAT_1806e1910);
  FUN_18047e730(uVar1,1,0);
  if (*(char *)(param_1 + 0x4b) != '\0') {
    FUN_18047f2b0(uVar1,FUN_180489a10,0);
    FUN_18047f530(uVar1,&DAT_1806e1914);
    FUN_18047e730(uVar1,1,0);
    if (*(char *)(param_1 + 0x4b) != '\0') {
      FUN_18047eb70(uVar1,0xffffd8f0,"_LOADED");
      FUN_18047eb70(uVar1,0xffffffff,&DAT_1806e1914);
      FUN_18047f8e0(uVar1,0xffffd8ee,&DAT_1806e1914);
      FUN_18047fb50(uVar1,0xfffffffe);
    }
  }
  FUN_18047f4d0(uVar1);
  FUN_18047f8e0(uVar1,0xffffd8ee,"dofile");
  FUN_18047f4d0(uVar1);
  FUN_18047f8e0(uVar1,0xffffd8ee,"loadfile");
  FUN_18047f2b0(uVar1,FUN_18006ec70,0);
  FUN_18047f8e0(uVar1,0xffffd8ee,&DAT_1806e1934);
  FUN_18047f2b0(uVar1,FUN_18006ec70,0);
  FUN_18047f8e0(uVar1,0xffffd8ee,"loadstring");
  FUN_18047f2b0(uVar1,FUN_18006e7b0,0);
  FUN_18047f8e0(uVar1,0xffffd8ee,"require");
  FUN_18047e8f0(uVar1,0,0);
  FUN_18047f8e0(uVar1,0xffffd8f0,"wl_modules");
  FUN_18047e8f0(uVar1,0,0);
  FUN_18047f2b0(uVar1,FUN_18005c380,0);
  FUN_18047f8e0(uVar1,0xfffffffe,"clock");
  FUN_18047f2b0(uVar1,FUN_18006ed10,0);
  FUN_18047f8e0(uVar1,0xfffffffe,&DAT_1806e1960);
  FUN_18047f2b0(uVar1,FUN_18006ed40,0);
  FUN_18047f8e0(uVar1,0xfffffffe,&DAT_1806e1968);
  FUN_18047f8e0(uVar1,0xffffd8ee,&DAT_1806e1970);
  FUN_18047f400(uVar1,param_1);
  FUN_18047f8e0(uVar1,0xffffd8f0,"wl_state");
  return;
}



/* ===== 18006f1a0 FUN_18006f1a0 ===== */

void FUN_18006f1a0(ulonglong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong local_res8;
  undefined8 local_res10;
  undefined *local_res18;
  undefined8 *local_18;
  ulonglong *local_10;
  
  local_res18 = &DAT_1809e8e50;
  local_res8 = param_1;
  local_res10 = param_2;
  iVar2 = FUN_1804e4d70(&DAT_1809e8e50);
  uVar1 = DAT_180ccfa88;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((local_res8 < 0x30) && ((&DAT_180962e10)[local_res8 * 4] != 0)) {
    DAT_180ccfa88 = local_res10;
    DAT_180ccfa1c = DAT_180ccfa1c + 1;
    local_18 = &local_res10;
    local_10 = &local_res8;
    puVar3 = (undefined8 *)(&DAT_180962e00 + local_res8 * 0x20);
    if (0xf < (ulonglong)(&DAT_180962e18)[local_res8 * 4]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    FUN_180073df0(puVar3,&local_18);
    DAT_180ccfa1c = DAT_180ccfa1c + -1;
  }
  DAT_180ccfa88 = uVar1;
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 18006f290 FUN_18006f290 ===== */

void FUN_18006f290(char param_1)

{
  double dVar1;
  double dVar2;
  LARGE_INTEGER LVar3;
  LARGE_INTEGER LVar4;
  LARGE_INTEGER LVar5;
  LARGE_INTEGER LVar6;
  _struct_19 _Var7;
  double dVar8;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  LARGE_INTEGER local_res10;
  
  if (DAT_180ca0018 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_180ca0018);
  }
  local_res10.QuadPart = 0;
  QueryPerformanceCounter(&local_res10);
  LVar6.s = DAT_180ccfab0.s;
  dVar2 = DAT_1808ac620;
  dVar1 = (double)local_res10.QuadPart;
  dVar8 = (double)DAT_180ca0018;
  for (LVar5.s = DAT_180ccfaa8.s;
      (LVar5.QuadPart != DAT_180ccfab0.QuadPart &&
      (dVar1 / dVar8 - *(double *)((longlong)LVar5.s + 0x28) <= DAT_1808ac620));
      LVar5.QuadPart = (longlong)LVar5.s + 0x30) {
  }
  if (LVar5.QuadPart != DAT_180ccfab0.QuadPart) {
    _Var7 = (_struct_19)((longlong)LVar5.s + 0x30);
    if (_Var7 != DAT_180ccfab0.s) {
      do {
        if (dVar1 / dVar8 - *(double *)((longlong)_Var7 + 0x28) <= dVar2) {
          FUN_18002ba60(LVar5.QuadPart,_Var7);
          *(undefined1 *)((longlong)LVar5.s + 0x20) = *(undefined1 *)((longlong)_Var7 + 0x20);
          *(undefined1 *)((longlong)LVar5.s + 0x21) = *(undefined1 *)((longlong)_Var7 + 0x21);
          *(undefined8 *)((longlong)LVar5.s + 0x28) = *(undefined8 *)((longlong)_Var7 + 0x28);
          LVar5.QuadPart = LVar5.QuadPart + 0x30;
        }
        _Var7 = (_struct_19)((longlong)_Var7 + 0x30);
      } while (_Var7 != LVar6.s);
      if (LVar5.QuadPart == LVar6.QuadPart) goto LAB_18006f3de;
    }
    LVar4.QuadPart = FUN_1800761f0(LVar6.QuadPart,DAT_180ccfab0.QuadPart,LVar5.QuadPart);
    LVar6.s = DAT_180ccfab0.s;
    for (LVar5.QuadPart = LVar4.QuadPart; local_res10 = LVar5, LVar5.QuadPart != LVar6.QuadPart;
        LVar5.QuadPart = LVar5.QuadPart + 0x30) {
      FUN_18000f890(LVar5.QuadPart);
    }
    DAT_180ccfab0.QuadPart = LVar4.QuadPart;
  }
LAB_18006f3de:
  LVar3.s = DAT_180ccfab0.s;
  LVar5.s = DAT_180ccfaa8.s;
  LVar6.s = DAT_180ccfaa8.s;
  LVar4.s = DAT_180ccfab0.s;
  if (param_1 != '\0') {
    for (; DAT_180ccfaa8 = LVar6, DAT_180ccfab0 = LVar4, LVar5.QuadPart != LVar3.QuadPart;
        LVar5.QuadPart = LVar5.QuadPart + 0x30) {
      local_res8 = *(undefined1 *)((longlong)LVar5.s + 0x20);
      local_res9 = *(undefined1 *)((longlong)LVar5.s + 0x21);
      local_resa = 0;
      FUN_1800d84f0(LVar5.QuadPart,&local_res8);
      LVar6.s = DAT_180ccfaa8.s;
      LVar4.s = DAT_180ccfab0.s;
    }
    if (LVar6.QuadPart != LVar4.QuadPart) {
      do {
        local_res10.s = LVar6.s;
        FUN_18000f890(LVar6.QuadPart);
        LVar6.QuadPart = LVar6.QuadPart + 0x30;
      } while (LVar6.QuadPart != LVar4.QuadPart);
      DAT_180ccfab0.s = DAT_180ccfaa8.s;
    }
  }
  return;
}



/* ===== 18006f480 FUN_18006f480 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18006f480(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined *puVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  char *pcVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char *pcVar17;
  undefined8 *puVar18;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  longlong local_f8;
  undefined2 *local_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  ulonglong local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  undefined1 local_a0 [16];
  longlong local_90;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  pcVar1 = DAT_180ccfa28;
  puVar13 = auStack_118;
  local_40 = DAT_180919500 ^ (ulonglong)auStack_118;
  local_d8 = 0;
  local_d0 = param_2;
  if (DAT_180ccfa28 != DAT_180ccfa30) {
    if (param_1 != 0) {
      param_2 = param_1;
    }
    do {
      puVar13 = auStack_118;
      if (param_2 == 0) break;
      FUN_180013350(local_a0,&DAT_1806e17c8);
      if (*(ulonglong *)(pcVar1 + 0x18) < 0x10) {
        pcVar17 = pcVar1;
      }
      else {
        pcVar17 = *(char **)pcVar1;
      }
      pcVar14 = pcVar17 + *(longlong *)(pcVar1 + 0x10);
      for (; pcVar17 != pcVar14; pcVar17 = pcVar17 + 1) {
        cVar3 = *pcVar17;
        if (cVar3 == '\n') {
          puVar11 = &DAT_1806e17d4;
LAB_18006f55f:
          FUN_1800134a0(local_a0,puVar11,2);
        }
        else if (cVar3 != '\r') {
          if (cVar3 == '\'') {
            puVar11 = &DAT_1806e17d0;
          }
          else {
            if (cVar3 != '\\') {
              FUN_1800690a0();
              goto LAB_18006f56a;
            }
            puVar11 = &DAT_1806e17cc;
          }
          goto LAB_18006f55f;
        }
LAB_18006f56a:
      }
      if (local_90 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_180011990();
      }
      local_e8 = 1;
      local_f0 = &DAT_1806e17c8;
      local_f8 = local_90;
      FUN_180069380(local_80);
      local_d8 = 1;
      FUN_18000f890(local_a0);
      puVar4 = (ulonglong *)FUN_18006b5b0(local_80,0,"GameInterfaceAPI.ConsoleCommand(",0x20);
      local_c0 = *puVar4;
      uStack_b8 = puVar4[1];
      local_b0 = puVar4[2];
      uStack_a8 = puVar4[3];
      puVar4[2] = 0;
      puVar4[3] = 0xf;
      *(undefined1 *)puVar4 = 0;
      local_d8 = 5;
      puVar5 = (undefined8 *)FUN_180042850(local_60,&local_c0,&DAT_1806e1984);
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      if (((((puVar5 != (undefined8 *)0x0) && (cVar3 = FUN_180200ed0(), cVar3 != '\0')) &&
           (lVar6 = FUN_180200ff0(), lVar6 != 0)) &&
          ((lVar7 = FUN_18000f3a0(lVar6), lVar7 != 0 &&
           (pcVar8 = (code *)FUN_18000f3a0(lVar7 + 0x268), DAT_180ceb448 <= pcVar8)))) &&
         (pcVar8 < DAT_180ceb440)) {
        local_f8 = 1;
        (*pcVar8)(lVar6,param_2,puVar5,&DAT_18070230d);
      }
      FUN_18000f890(local_60);
      local_d8 = 1;
      if (0xf < uStack_a8) {
        uVar12 = uStack_a8 + 1;
        uVar10 = local_c0;
        if (0xfff < uVar12) {
          uVar10 = *(ulonglong *)(local_c0 - 8);
          if (0x1f < (local_c0 - uVar10) - 8) {
            pcVar8 = (code *)swi(0x29);
            (*pcVar8)(5);
            puVar13 = auStack_110;
            break;
          }
          uVar12 = uStack_a8 + 0x28;
        }
        thunk_FUN_1803d64e0(uVar10,uVar12);
      }
      local_b0 = 0;
      uStack_a8 = 0xf;
      local_c0 = local_c0 & 0xffffffffffffff00;
      local_d8 = 0;
      FUN_18000f890(local_80);
      pcVar2 = DAT_180ccfa30;
      pcVar14 = pcVar1;
      pcVar17 = pcVar1;
      while (pcVar17 = pcVar17 + 0x20, pcVar17 != pcVar2) {
        FUN_18002ba60(pcVar14,pcVar17);
        pcVar14 = pcVar14 + 0x20;
      }
      FUN_18000f890(DAT_180ccfa30 + -0x20);
      DAT_180ccfa30 = DAT_180ccfa30 + -0x20;
      puVar13 = auStack_118;
    } while (pcVar1 != DAT_180ccfa30);
  }
  puVar5 = DAT_180ccfac0;
  puVar18 = DAT_180ccfac8;
  if (DAT_180ccfac0 != DAT_180ccfac8) {
    do {
      if (*(int *)(puVar5 + 4) == 1) {
        lVar6 = param_1;
      }
      else {
        lVar6 = local_d0;
        if ((*(int *)(puVar5 + 4) != 2) && (lVar6 = local_d0, param_1 != 0)) {
          lVar6 = param_1;
        }
      }
      if (lVar6 == 0) {
        puVar5 = puVar5 + 5;
      }
      else {
        if ((ulonglong)puVar5[3] < 0x10) {
          puVar15 = puVar5;
        }
        else {
          puVar15 = (undefined8 *)*puVar5;
        }
        if (puVar15 != (undefined8 *)0x0) {
          *(undefined8 *)(puVar13 + -8) = 0x18006f7e3;
          cVar3 = FUN_180200ed0();
          if (cVar3 != '\0') {
            *(undefined8 *)(puVar13 + -8) = 0x18006f7ec;
            lVar7 = FUN_180200ff0();
            if (lVar7 != 0) {
              *(undefined8 *)(puVar13 + -8) = 0x18006f7fc;
              lVar9 = FUN_18000f3a0(lVar7);
              if (lVar9 != 0) {
                *(undefined8 *)(puVar13 + -8) = 0x18006f80d;
                pcVar8 = (code *)FUN_18000f3a0(lVar9 + 0x268);
                if ((DAT_180ceb448 <= pcVar8) && (pcVar8 < DAT_180ceb440)) {
                  *(undefined8 *)(puVar13 + 0x20) = 1;
                  *(undefined8 *)(puVar13 + -8) = 0x18006f83a;
                  (*pcVar8)(lVar7,lVar6,puVar15,&DAT_18070230d);
                }
              }
            }
          }
          puVar18 = DAT_180ccfac8;
        }
        puVar15 = puVar5 + 5;
        puVar16 = puVar5;
        if (puVar15 != puVar18) {
          do {
            *(undefined8 *)(puVar13 + -8) = 0x18006f85b;
            FUN_18002ba60(puVar16,puVar15);
            *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(puVar15 + 4);
            puVar16 = puVar16 + 5;
            puVar15 = puVar15 + 5;
          } while (puVar15 != puVar18);
          puVar18 = DAT_180ccfac8;
        }
        local_c8 = puVar18 + -5;
        *(undefined8 *)(puVar13 + -8) = 0x18006f882;
        FUN_18000f890();
        puVar18 = DAT_180ccfac8 + -5;
        DAT_180ccfac8 = puVar18;
      }
    } while (puVar5 != puVar18);
  }
  *(undefined8 *)(puVar13 + -8) = 0x18006f8ae;
  return;
}



/* ===== 18006f8d0 FUN_18006f8d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18006f8d0(void)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  LARGE_INTEGER LVar9;
  LARGE_INTEGER LVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  double dVar14;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  longlong local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  if (DAT_180ca0018 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_180ca0018);
  }
  local_90.QuadPart = 0;
  QueryPerformanceCounter(&local_90);
  plVar8 = DAT_180ccfa98;
  puVar11 = auStack_d8;
  puVar12 = auStack_d8;
  dVar14 = (double)local_90.QuadPart / (double)DAT_180ca0018;
  puVar13 = auStack_d8;
  if (dVar14 - _DAT_180ccfa20 < DAT_1808ac500) goto LAB_18006fc2e;
  puVar13 = auStack_d8;
  _DAT_180ccfa20 = dVar14;
  plVar3 = DAT_180ccfa90;
  if (DAT_18092106f == '\0') goto LAB_18006fc2e;
  for (; plVar3 != plVar8; plVar3 = plVar3 + 1) {
    lVar2 = *plVar3;
    if ((((*(char *)(lVar2 + 0x48) == '\0') && (*(char *)(lVar2 + 0x4a) == '\0')) &&
        (FUN_18006dad0(&local_90,lVar2 + 0x20), local_90.QuadPart != 0)) &&
       (local_90.QuadPart != *(longlong *)(*plVar3 + 0x130))) {
      *(undefined1 *)(*plVar3 + 0x4a) = 1;
      if (0x7fffffffffffffffU - *(longlong *)(*plVar3 + 0x10) < 0x19) {
                    /* WARNING: Subroutine does not return */
        FUN_180011990();
      }
      local_a8 = 0x19;
      local_b0 = ": file changed, reloading";
      local_b8 = *(longlong *)(*plVar3 + 0x10);
      FUN_180069380(local_68);
      local_98 = 2;
      FUN_18009afb0(local_68);
      local_98 = 0;
      FUN_18000f890(local_68);
    }
  }
  local_88.QuadPart = 0;
  uStack_80 = 0;
  local_78 = 0;
  plVar8 = (longlong *)*DAT_180ca0ca0;
  cVar1 = *(char *)((longlong)plVar8 + 0x19);
  uVar5 = uStack_80;
  while (cVar1 == '\0') {
    uStack_80 = uVar5;
    FUN_18006dad0(&local_90,plVar8 + 8);
    uVar5 = uStack_80;
    if ((local_90.QuadPart != 0) && (local_90.QuadPart != plVar8[0x10])) {
      if (uStack_80 == local_78) {
        FUN_180076ac0(&local_88,uStack_80,plVar8 + 4,plVar8 + 8);
      }
      else {
        local_70 = uStack_80;
        FUN_180024b50(uStack_80,plVar8 + 4);
        FUN_180024b50(uVar5 + 0x20,plVar8 + 8);
        uStack_80 = uStack_80 + 0x40;
      }
    }
    plVar3 = (longlong *)plVar8[2];
    if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar3 + 0x19);
      plVar8 = plVar3;
      while (cVar1 == '\0') {
        plVar8 = (longlong *)*plVar8;
        cVar1 = *(char *)(*plVar8 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar8[1] + 0x19);
      plVar7 = (longlong *)plVar8[1];
      plVar3 = plVar8;
      while ((plVar8 = plVar7, cVar1 == '\0' && (plVar3 == (longlong *)plVar8[2]))) {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar7 = (longlong *)plVar8[1];
        plVar3 = plVar8;
      }
    }
    uVar5 = uStack_80;
    cVar1 = *(char *)((longlong)plVar8 + 0x19);
  }
  uVar6 = uVar5;
  for (LVar9.s = local_88.s; uStack_80 = uVar6, LVar9.QuadPart != uVar5;
      LVar9.QuadPart = LVar9.QuadPart + 0x40) {
    if (0x7fffffffffffffffU - *(longlong *)((longlong)LVar9.s + 0x10) < 0x1d) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    local_a8 = 0x1d;
    local_b0 = ": file changed, loading again";
    local_b8 = *(longlong *)((longlong)LVar9.s + 0x10);
    FUN_180069380(local_68);
    local_98 = 1;
    FUN_18009afb0(local_68);
    local_98 = 0;
    FUN_18000f890(local_68);
    FUN_180070b90(LVar9.QuadPart,LVar9.QuadPart + 0x20);
    uVar6 = uStack_80;
  }
  puVar13 = auStack_d8;
  if (local_88.QuadPart == 0) goto LAB_18006fc2e;
  for (LVar9.s = local_88.s; local_90 = LVar9, LVar9.QuadPart != uVar6;
      LVar9.QuadPart = LVar9.QuadPart + 0x40) {
    FUN_18000f890(LVar9.QuadPart + 0x20);
    FUN_18000f890(LVar9.QuadPart);
  }
  LVar9.s = local_88.s;
  if ((local_78 - local_88.QuadPart & 0xffffffffffffffc0) < 0x1000) {
LAB_18006fc16:
    puVar12 = puVar11;
  }
  else {
    LVar9.s = *(_struct_19 *)((longlong)local_88.s - 8);
    LVar10.QuadPart = (local_88.QuadPart - LVar9.QuadPart) - 8;
    if (0x1f < (ulonglong)LVar10.s) {
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar11 = auStack_d0;
      LVar9.QuadPart = LVar10.QuadPart;
      goto LAB_18006fc16;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x18006fc1e;
  thunk_FUN_1803d64e0(LVar9.QuadPart);
  puVar13 = puVar12;
LAB_18006fc2e:
  *(undefined8 *)(puVar13 + -8) = 0x18006fc3a;
  return;
}



/* ===== 18006fc60 FUN_18006fc60 ===== */

void FUN_18006fc60(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  LARGE_INTEGER LVar12;
  ulonglong uVar13;
  double dVar14;
  LARGE_INTEGER local_res8;
  
  if (DAT_180ca0018 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_180ca0018);
  }
  local_res8.QuadPart = 0;
  QueryPerformanceCounter(&local_res8);
  dVar6 = DAT_1808ac500;
  dVar5 = (double)local_res8.QuadPart;
  local_res8.QuadPart = 0;
  dVar14 = (double)DAT_180ca0018;
  lVar9 = DAT_180ccfa90;
  if (DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0) {
    do {
      LVar12.s = local_res8.s;
      uVar13 = 0;
      lVar3 = *(longlong *)(lVar9 + local_res8.QuadPart * 8);
      if ((*(char *)(lVar3 + 0x48) == '\0') && (*(longlong *)(lVar3 + 0xa0) != 0)) {
        FUN_180063970(lVar3);
        if (*(char *)(lVar3 + 0x48) == '\0') {
          lVar9 = *(longlong *)(lVar3 + 0xa0);
          if (lVar9 != 0) {
            if ((*(longlong *)(lVar9 + 0x70) - *(longlong *)(lVar9 + 0x68) >> 3) *
                0x2fc962fc962fc963 != 0) {
              do {
                iVar10 = 0;
                if (*(char *)(lVar3 + 0x48) != '\0') break;
                lVar9 = *(longlong *)(lVar9 + 0x68);
                lVar8 = uVar13 * 600;
                if (*(char *)(lVar8 + 0x1dc + lVar9) == '\0') {
                  if (0 < *(int *)(lVar8 + 0x1e0 + lVar9)) {
                    iVar11 = *(int *)(lVar8 + 0x1e0 + lVar9);
                    *(undefined4 *)(lVar8 + 0x1e0 + lVar9) = 0;
                    *(undefined1 *)(lVar8 + 0x1dc + lVar9) = 0;
                    goto LAB_18006fe06;
                  }
                }
                else {
                  iVar11 = *(int *)(lVar8 + 0x1e0 + lVar9);
                  *(undefined4 *)(lVar8 + 0x1e0 + lVar9) = 0;
                  *(undefined1 *)(lVar8 + 0x1dc + lVar9) = 0;
                  *(double *)(lVar3 + 0x138) = dVar5 / dVar14;
LAB_18006fe06:
                  iVar1 = *(int *)(lVar8 + 0x1e4 + lVar9);
                  if (1 < iVar1 + 2U) {
                    uVar2 = *(undefined4 *)(lVar8 + lVar9);
                    if (iVar11 < 1) {
                      iVar11 = 1;
                    }
                    do {
                      if (*(char *)(lVar3 + 0x48) != '\0') break;
                      FUN_18047f6f0(*(undefined8 *)(lVar3 + 0x40),0xffffd8f0,iVar1);
                      uVar4 = *(undefined8 *)(lVar3 + 0x40);
                      puVar7 = (undefined4 *)FUN_18047efb0(uVar4,4);
                      *puVar7 = uVar2;
                      FUN_18047eb70(uVar4,0xffffd8f0,"wl.ui");
                      FUN_18047f990(uVar4,0xfffffffe);
                      FUN_180070500(lVar3,1,0);
                      iVar10 = iVar10 + 1;
                    } while (iVar10 < iVar11);
                  }
                }
                lVar9 = *(longlong *)(lVar3 + 0xa0);
                uVar13 = uVar13 + 1;
              } while (uVar13 < (ulonglong)
                                ((*(longlong *)(lVar9 + 0x70) - *(longlong *)(lVar9 + 0x68) >> 3) *
                                0x2fc962fc962fc963));
              LVar12.s = local_res8.s;
              if (lVar9 == 0) goto LAB_18006fefc;
            }
            if ((0.0 <= *(double *)(lVar3 + 0x138)) &&
               (dVar6 < dVar5 / dVar14 - *(double *)(lVar3 + 0x138))) {
              FUN_180098430(lVar9);
              *(undefined8 *)(lVar3 + 0x138) = 0xbff0000000000000;
            }
          }
        }
LAB_18006fefc:
        lVar9 = DAT_180ccfa90;
      }
      local_res8.QuadPart = LVar12.QuadPart + 1;
    } while ((ulonglong)local_res8.s < (ulonglong)(DAT_180ccfa98 - lVar9 >> 3));
  }
  return;
}



/* ===== 18006ff70 FUN_18006ff70 ===== */

void FUN_18006ff70(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *local_58;
  longlong *local_50;
  
  FUN_180096800(&local_58);
  for (plVar8 = local_58; plVar8 != local_50; plVar8 = plVar8 + 0xe) {
    if (DAT_180ccfa90 != DAT_180ccfa98) {
      lVar6 = 0;
      plVar4 = DAT_180ccfa90;
      do {
        lVar1 = *plVar4;
        if ((*(longlong *)(lVar1 + 0x148) == *plVar8) && (*(char *)(lVar1 + 0x48) == '\0')) {
          lVar6 = lVar1;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != DAT_180ccfa98);
      if (lVar6 != 0) {
        uVar2 = *(undefined8 *)(lVar6 + 0x40);
        FUN_18047f6f0(uVar2,0xffffd8f0,(int)plVar8[1]);
        FUN_180485280(uVar2,0xffffd8f0,(int)plVar8[1]);
        FUN_18047e8f0(uVar2,0,5);
        FUN_18047f270(uVar2,*(undefined1 *)((longlong)plVar8 + 0xc));
        FUN_18047f8e0(uVar2,0xfffffffe,&DAT_1806d2ba0);
        FUN_18047f3d0(uVar2,(longlong)(int)plVar8[2]);
        FUN_18047f8e0(uVar2,0xfffffffe,"status");
        plVar4 = plVar8 + 3;
        if (0xf < (ulonglong)plVar8[6]) {
          plVar4 = (longlong *)*plVar4;
        }
        FUN_18047f450(uVar2,plVar4,plVar8[5]);
        FUN_18047f8e0(uVar2,0xfffffffe,&DAT_1806e19f0);
        if (plVar8[9] != 0) {
          plVar4 = plVar8 + 7;
          if (0xf < (ulonglong)plVar8[10]) {
            plVar4 = (longlong *)*plVar4;
          }
          FUN_18047f530(uVar2,plVar4);
          FUN_18047f8e0(uVar2,0xfffffffe,"error");
        }
        FUN_18047e8f0(uVar2,0,0);
        puVar3 = (undefined8 *)plVar8[0xc];
        for (puVar5 = (undefined8 *)plVar8[0xb]; puVar5 != puVar3; puVar5 = puVar5 + 8) {
          plVar4 = puVar5 + 4;
          if (0xf < (ulonglong)puVar5[7]) {
            plVar4 = (longlong *)*plVar4;
          }
          FUN_18047f530(uVar2,plVar4);
          if ((ulonglong)puVar5[3] < 0x10) {
            puVar7 = puVar5;
          }
          else {
            puVar7 = (undefined8 *)*puVar5;
          }
          FUN_18047f8e0(uVar2,0xfffffffe,puVar7);
        }
        FUN_18047f8e0(uVar2,0xfffffffe,"headers");
        FUN_180070500(lVar6,1,0);
      }
    }
  }
  FUN_1800756a0(&local_58);
  return;
}



/* ===== 180070170 FUN_180070170 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180070170(longlong param_1,undefined8 *param_2,char param_3)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  size_t sVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  char *pcVar14;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  longlong local_e8;
  char *local_e0;
  size_t local_d8;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  ulonglong uStack_a8;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined8 local_90;
  ulonglong uStack_88;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_108;
  local_c8 = 0;
  pcVar14 = ": ";
  if (param_3 != '\0') {
    pcVar14 = " error: ";
  }
  lVar9 = *(longlong *)(param_1 + 0x10);
  sVar5 = strlen(pcVar14);
  puVar13 = auStack_108;
  if (0x7fffffffffffffffU - lVar9 < sVar5) goto LAB_1800703e5;
  local_e8 = lVar9;
  local_e0 = pcVar14;
  local_d8 = sVar5;
  FUN_180069380(local_80);
  local_c8 = 1;
  if ((ulonglong)param_2[3] < 0x10) {
    puVar10 = param_2;
  }
  else {
    puVar10 = (undefined8 *)*param_2;
  }
  puVar6 = (undefined4 *)FUN_1800134a0(local_80,puVar10,param_2[2]);
  local_c0 = *puVar6;
  uStack_bc = puVar6[1];
  uStack_b8 = puVar6[2];
  uStack_b4 = puVar6[3];
  local_b0 = *(undefined8 *)(puVar6 + 4);
  uStack_a8 = *(ulonglong *)(puVar6 + 6);
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 6) = 0xf;
  *(undefined1 *)puVar6 = 0;
  local_c8 = 2;
  FUN_18000f890(local_80);
  FUN_18009afb0(&local_c0);
  cVar4 = DAT_18092106e;
  cVar3 = DAT_18092106d;
  if ((DAT_18092106d == '\0') && (DAT_18092106e == '\0')) {
LAB_18007035b:
    FUN_1800b09f0(5,&local_c0,0);
    puVar12 = auStack_108;
    local_c8 = 0;
    if (uStack_a8 < 0x10) {
      return;
    }
    uVar11 = uStack_a8 + 1;
    lVar2 = CONCAT44(uStack_bc,local_c0);
    lVar9 = lVar2;
    if (uVar11 < 0x1000) {
LAB_1800703a4:
      thunk_FUN_1803d64e0(lVar9,uVar11);
      return;
    }
    lVar9 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar9) - 8U < 0x20) {
      uVar11 = uStack_a8 + 0x28;
      goto LAB_1800703a4;
    }
  }
  else {
    pcVar14 = "[lua] ";
    if (param_3 != '\0') {
      pcVar14 = "[lua error] ";
    }
    uVar7 = FUN_180013350(local_60,pcVar14);
    puVar6 = &local_c0;
    if (0xf < uStack_a8) {
      puVar6 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
    }
    puVar8 = (uint *)FUN_1800134a0(uVar7,puVar6,local_b0);
    local_a0 = *puVar8;
    uStack_9c = puVar8[1];
    uStack_98 = puVar8[2];
    uStack_94 = puVar8[3];
    local_90 = *(undefined8 *)(puVar8 + 4);
    uStack_88 = *(ulonglong *)(puVar8 + 6);
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0xf;
    puVar8[7] = 0;
    *(undefined1 *)puVar8 = 0;
    local_c8 = 6;
    FUN_180070a00(&local_a0,cVar3,cVar4);
    local_c8 = 2;
    if (uStack_88 < 0x10) {
LAB_180070341:
      local_90 = 0;
      uStack_88 = 0xf;
      local_a0 = local_a0 & 0xffffff00;
      FUN_18000f890(local_60);
      goto LAB_18007035b;
    }
    uVar11 = uStack_88 + 1;
    lVar2 = CONCAT44(uStack_9c,local_a0);
    lVar9 = lVar2;
    if (uVar11 < 0x1000) {
LAB_18007033c:
      thunk_FUN_1803d64e0(lVar9,uVar11);
      goto LAB_180070341;
    }
    lVar9 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar9) - 8U < 0x20) {
      uVar11 = uStack_88 + 0x28;
      goto LAB_18007033c;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar12 = auStack_100;
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar13 = puVar12 + 8;
LAB_1800703e5:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar13 + -8) = &UNK_1800703ea;
  FUN_180011990();
}



/* ===== 1800703f0 FUN_1800703f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800703f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_98 [48];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x48) == '\0') {
    *(undefined1 *)(param_1 + 0x48) = 1;
    FUN_180070170(param_1,param_2,1);
    FUN_180024b50(local_68,param_1 + 0x20);
    FUN_180024b50(local_48,param_2);
    local_28 = *(undefined8 *)(param_1 + 0x130);
    plVar2 = (longlong *)FUN_1800762f0();
    lVar1 = *plVar2;
    FUN_18002ba60(lVar1 + 0x40,local_68);
    FUN_18002ba60(lVar1 + 0x60,local_48);
    *(undefined8 *)(lVar1 + 0x80) = local_28;
    FUN_18000f890(local_48);
    FUN_18000f890(local_68);
  }
  return;
}



/* ===== 1800704d0 FUN_1800704d0 ===== */

void FUN_1800704d0(longlong param_1)

{
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 180070500 FUN_180070500 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180070500(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  iVar1 = FUN_18047ed40(uVar4);
  iVar1 = iVar1 - param_2;
  FUN_18047f2b0(uVar4,FUN_18006dbc0,0);
  FUN_18047ed50(uVar4,iVar1);
  iVar2 = FUN_18047f190(uVar4,param_2,param_3,iVar1);
  if (iVar2 == 0) {
    FUN_18047f880(uVar4,iVar1);
    uVar4 = 1;
  }
  else {
    pcVar3 = (char *)FUN_18047fc70(uVar4,0xffffffff,0);
    pcVar5 = "unknown error";
    if (pcVar3 != (char *)0x0) {
      pcVar5 = pcVar3;
    }
    FUN_180013350(local_78,pcVar5);
    FUN_18006dc50(local_58,local_78);
    FUN_18000f890(local_78);
    FUN_18047fb50(uVar4,0xfffffffd);
    FUN_1800703f0(param_1,local_58);
    FUN_18000f890(local_58);
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== 180070600 FUN_180070600 ===== */

undefined8 FUN_180070600(longlong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  uVar1 = param_1[3];
  lVar3 = param_1[2];
  plVar2 = param_1;
  if (0xf < uVar1) {
    plVar2 = (longlong *)*param_1;
  }
  if (lVar3 == 5) {
    iVar4 = (int)*plVar2 + -0x6e696170;
    if (iVar4 == 0) {
      iVar4 = *(byte *)((longlong)plVar2 + 4) - 0x74;
    }
    if (iVar4 == 0) {
      return 1;
    }
  }
  plVar2 = param_1;
  if (0xf < uVar1) {
    plVar2 = (longlong *)*param_1;
  }
  if (lVar3 == 10) {
    lVar5 = *plVar2 + -0x6f6d657461657263;
    if (lVar5 == 0) {
      lVar5 = (ulonglong)*(ushort *)(plVar2 + 1) - 0x6576;
    }
    if (lVar5 == 0) {
      return 1;
    }
  }
  plVar2 = param_1;
  if (0xf < uVar1) {
    plVar2 = (longlong *)*param_1;
  }
  if (lVar3 == 0xb) {
    lVar5 = *plVar2 + -0x74735f656d617266;
    if ((lVar5 == 0) && (lVar5 = (ulonglong)*(ushort *)(plVar2 + 1) - 0x6761, lVar5 == 0)) {
      lVar5 = (ulonglong)*(byte *)((longlong)plVar2 + 10) - 0x65;
    }
    if (lVar5 == 0) {
      return 1;
    }
  }
  plVar2 = param_1;
  if (0xf < uVar1) {
    plVar2 = (longlong *)*param_1;
  }
  if (lVar3 == 6) {
    iVar4 = (int)*plVar2 + -0x6f6c6e75;
    if (iVar4 == 0) {
      iVar4 = *(ushort *)((longlong)plVar2 + 4) - 0x6461;
    }
    if (iVar4 == 0) {
      return 1;
    }
  }
  plVar2 = param_1;
  if (0xf < uVar1) {
    plVar2 = (longlong *)*param_1;
  }
  if (lVar3 == 0xc) {
    lVar5 = *plVar2 + -0x676f745f756e656d;
    if (lVar5 == 0) {
      lVar5 = (ulonglong)*(uint *)(plVar2 + 1) - 0x64656c67;
    }
    if (lVar5 == 0) {
      return 1;
    }
  }
  plVar2 = param_1;
  if (0xf < uVar1) {
    plVar2 = (longlong *)*param_1;
  }
  if (lVar3 == 0xd) {
    lVar5 = *plVar2 + -0x656469727265766f;
    if ((lVar5 == 0) && (lVar5 = (ulonglong)*(uint *)(plVar2 + 1) - 0x6569765f, lVar5 == 0)) {
      lVar5 = (ulonglong)*(byte *)((longlong)plVar2 + 0xc) - 0x77;
    }
    if (lVar5 == 0) {
      return 1;
    }
  }
  plVar2 = param_1;
  if (0xf < uVar1) {
    plVar2 = (longlong *)*param_1;
  }
  if (lVar3 == 5) {
    iVar4 = (int)*plVar2 + -0x75706e69;
    if (iVar4 == 0) {
      iVar4 = *(byte *)((longlong)plVar2 + 4) - 0x74;
    }
    if (iVar4 == 0) {
      return 1;
    }
  }
  plVar2 = param_1;
  if (0xf < uVar1) {
    plVar2 = (longlong *)*param_1;
  }
  if (lVar3 == 10) {
    lVar5 = *plVar2 + -0x655f726579616c70;
    if (lVar5 == 0) {
      lVar5 = (ulonglong)*(ushort *)(plVar2 + 1) - 0x7073;
    }
    if (lVar5 == 0) {
      return 1;
    }
  }
  plVar2 = param_1;
  if (0xf < uVar1) {
    plVar2 = (longlong *)*param_1;
  }
  if (lVar3 == 0xe) {
    lVar5 = *plVar2 + -0x655f726579616c70;
    if ((lVar5 == 0) && (lVar5 = (ulonglong)*(uint *)(plVar2 + 1) - 0x705f7073, lVar5 == 0)) {
      lVar5 = (ulonglong)*(ushort *)((longlong)plVar2 + 0xc) - 0x6572;
    }
    if (lVar5 == 0) {
      return 1;
    }
  }
  plVar2 = param_1;
  if (0xf < uVar1) {
    plVar2 = (longlong *)*param_1;
  }
  if (lVar3 == 10) {
    lVar5 = *plVar2 + -0x6e695f6c6576656c;
    if (lVar5 == 0) {
      lVar5 = (ulonglong)*(ushort *)(plVar2 + 1) - 0x7469;
    }
    if (lVar5 == 0) {
      return 1;
    }
  }
  plVar2 = param_1;
  if (0xf < uVar1) {
    plVar2 = (longlong *)*param_1;
  }
  if (lVar3 == 0xe) {
    lVar5 = *plVar2 + -0x68735f6c6576656c;
    if ((lVar5 == 0) && (lVar5 = (ulonglong)*(uint *)(plVar2 + 1) - 0x6f647475, lVar5 == 0)) {
      lVar5 = (ulonglong)*(ushort *)((longlong)plVar2 + 0xc) - 0x6e77;
    }
    if (lVar5 == 0) {
      return 1;
    }
  }
  if (0xf < uVar1) {
    param_1 = (longlong *)*param_1;
  }
  if (lVar3 == 0xc) {
    lVar3 = *param_1 + -0x746e656d65766f6d;
    if (lVar3 == 0) {
      lVar3 = (ulonglong)*(uint *)(param_1 + 1) - 0x7469685f;
    }
    if (lVar3 == 0) {
      return 1;
    }
  }
  return 0;
}



/* ===== 1800708e0 FUN_1800708e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800708e0(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined1 local_40;
  undefined8 local_3f;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_68;
  if ((ulonglong)(((longlong)DAT_180ccfac8 - DAT_180ccfac0 >> 3) * -0x3333333333333333) < 0x40) {
    uVar2 = FUN_180024b50(&local_40,param_1);
    puVar1 = DAT_180ccfac8;
    local_20 = param_2;
    if (DAT_180ccfac8 == DAT_180ccfad0) {
      FUN_180076cb0(uVar2,DAT_180ccfac8,&local_40);
    }
    else {
      local_48 = DAT_180ccfac8;
      *DAT_180ccfac8 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined1 *)puVar1 = local_40;
      *(undefined8 *)((longlong)puVar1 + 1) = local_3f;
      *(undefined4 *)((longlong)puVar1 + 9) = local_37;
      *(undefined2 *)((longlong)puVar1 + 0xd) = local_33;
      *(undefined1 *)((longlong)puVar1 + 0xf) = local_31;
      puVar1[2] = local_30;
      puVar1[3] = uStack_28;
      local_30 = _DAT_1808ad410;
      uStack_28 = _UNK_1808ad418;
      local_40 = 0;
      *(undefined4 *)(puVar1 + 4) = param_2;
      DAT_180ccfac8 = DAT_180ccfac8 + 5;
    }
    FUN_18000f890(&local_40);
  }
  return;
}



/* ===== 1800709e0 FUN_1800709e0 ===== */

void FUN_1800709e0(void)

{
  FUN_18000f890();
  return;
}



/* ===== 180070a00 FUN_180070a00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180070a00(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  _struct_19 _Var1;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined1 local_50;
  undefined8 local_4f;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined1 local_2f;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_78;
  if (0x3f < (ulonglong)(((longlong)DAT_180ccfab0 - DAT_180ccfaa8 >> 4) * -0x5555555555555555)) {
    FUN_1800761f0(DAT_180ccfaa8 + 0x30);
    local_58.QuadPart = (longlong)DAT_180ccfab0 + -0x30;
    FUN_18000f890();
    DAT_180ccfab0 = (_struct_19)((longlong)DAT_180ccfab0 + -0x30);
  }
  FUN_180024b50(&local_50,param_1);
  local_30 = param_2;
  local_2f = param_3;
  if (DAT_180ca0018 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_180ca0018);
  }
  local_58.QuadPart = 0;
  QueryPerformanceCounter(&local_58);
  _Var1 = DAT_180ccfab0;
  local_28 = (double)local_58.QuadPart / (double)DAT_180ca0018;
  if (DAT_180ccfab0 == DAT_180ccfab8) {
    FUN_180076f10((double)DAT_180ca0018,DAT_180ccfab0,&local_50);
  }
  else {
    local_58.s = DAT_180ccfab0;
    *(undefined8 *)DAT_180ccfab0 = 0;
    *(undefined8 *)((longlong)_Var1 + 8) = 0;
    *(undefined8 *)((longlong)_Var1 + 0x10) = 0;
    *(undefined8 *)((longlong)_Var1 + 0x18) = 0;
    *(undefined1 *)_Var1 = local_50;
    *(undefined8 *)((longlong)_Var1 + 1) = local_4f;
    *(undefined4 *)((longlong)_Var1 + 9) = local_47;
    *(undefined2 *)((longlong)_Var1 + 0xd) = local_43;
    *(undefined1 *)((longlong)_Var1 + 0xf) = local_41;
    *(undefined8 *)((longlong)_Var1 + 0x10) = local_40;
    *(undefined8 *)((longlong)_Var1 + 0x18) = uStack_38;
    local_40 = _DAT_1808ad410;
    uStack_38 = _UNK_1808ad418;
    local_50 = 0;
    *(undefined1 *)((longlong)_Var1 + 0x20) = param_2;
    *(undefined1 *)((longlong)_Var1 + 0x21) = param_3;
    *(double *)((longlong)_Var1 + 0x28) = local_28;
    DAT_180ccfab0 = (_struct_19)((longlong)DAT_180ccfab0 + 0x30);
  }
  FUN_18000f890(&local_50);
  return;
}



/* ===== 180070b90 FUN_180070b90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_180070b90(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint *puVar13;
  char ******ppppppcVar14;
  undefined8 *puVar15;
  char *pcVar16;
  undefined8 ******ppppppuVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong *plVar24;
  char *pcVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 uStack_3e0;
  undefined1 auStack_3d8 [8];
  undefined1 auStack_3d0 [24];
  longlong local_3b8;
  char *local_3b0;
  ulonglong local_3a8 [2];
  uint local_398 [2];
  longlong local_390;
  undefined *local_388;
  longlong alStack_330 [25];
  undefined8 ******local_268;
  undefined2 uStack_260;
  undefined2 uStack_25a;
  ulonglong local_250;
  longlong local_248;
  bool bStack_240;
  undefined1 uStack_23f;
  undefined2 uStack_23a;
  char ******local_228;
  undefined8 uStack_220;
  ulonglong local_218;
  ulonglong local_210;
  undefined8 ******local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  ulonglong uStack_1e0;
  ulonglong local_1d8;
  ulonglong uStack_1d0;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined8 local_1b8;
  ulonglong uStack_1b0;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  ulonglong uStack_190;
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined8 local_148 [2];
  undefined1 local_138 [32];
  undefined4 local_118;
  undefined1 local_114;
  undefined1 local_113;
  undefined1 local_112;
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  undefined4 local_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_3d8;
  local_398[0] = 0;
  local_388 = &DAT_1809e8e50;
  iVar8 = FUN_1804e4d70(&DAT_1809e8e50);
  puVar21 = auStack_3d8;
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180962431 == '\0') {
    local_3b8 = param_1[2];
    if (0x7fffffffffffffffU - local_3b8 < 0x14) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    local_3a8[0] = 0x14;
    local_3b0 = " error: lua is off (";
    FUN_180069380(local_c8);
    local_398[0] = 1;
    puVar19 = &DAT_180963400;
    if (0xf < DAT_180963418) {
      puVar19 = DAT_180963400;
    }
    puVar9 = (ulonglong *)FUN_1800134a0(local_c8,puVar19,DAT_180963410);
    local_1e8 = *puVar9;
    uStack_1e0 = puVar9[1];
    local_1d8 = puVar9[2];
    uStack_1d0 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 0xf;
    *(undefined1 *)puVar9 = 0;
    local_398[0] = 3;
    uVar10 = FUN_180042850(local_68,&local_1e8,&DAT_1806e1ac0);
    FUN_18009afb0(uVar10);
    FUN_18000f890(local_68);
    local_398[0] = 1;
    if (0xf < uStack_1d0) {
      uVar18 = uStack_1d0 + 1;
      uVar23 = local_1e8;
      if (0xfff < uVar18) {
        uVar23 = *(ulonglong *)(local_1e8 - 8);
        if (0x1f < (local_1e8 - uVar23) - 8) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar21 = auStack_3d0;
          goto LAB_180070e20;
        }
        uVar18 = uStack_1d0 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar23,uVar18);
    }
    local_1d8 = 0;
    uStack_1d0 = 0xf;
    local_1e8 = local_1e8 & 0xffffffffffffff00;
    local_398[0] = 0;
    FUN_18000f890(local_c8);
    FUN_180024b50(local_188,param_2);
    FUN_180066a20(local_168,"lua is off: ",&DAT_180963400);
    uVar28 = FUN_18006dad0(local_148,param_2);
    plVar11 = (longlong *)FUN_1800762f0(uVar28,&local_268,param_1);
    lVar12 = *plVar11;
    FUN_18002ba60(lVar12 + 0x40,local_188);
    FUN_18002ba60(lVar12 + 0x60,local_168);
    *(undefined8 *)(lVar12 + 0x80) = local_148[0];
    FUN_18000f890(local_168);
    FUN_18000f890(local_188);
    puVar21 = auStack_3d8;
    cVar7 = '\0';
    goto LAB_1800719d5;
  }
LAB_180070e20:
  *(undefined8 *)(puVar21 + -8) = 0x180070e28;
  lVar12 = FUN_18006e170(param_1);
  uVar28 = extraout_XMM0_Da;
  local_248 = lVar12;
  if (lVar12 != 0) {
    *(undefined8 *)(puVar21 + -8) = 0x180070e43;
    uVar28 = FUN_18006e200(lVar12);
    plVar22 = DAT_180ccfa98;
    for (plVar11 = DAT_180ccfa90; (plVar11 != DAT_180ccfa98 && (*plVar11 != lVar12));
        plVar11 = plVar11 + 1) {
    }
    if (plVar11 != DAT_180ccfa98) {
      plVar24 = plVar11 + 1;
      plVar5 = DAT_180ccfa98;
      if (plVar24 != DAT_180ccfa98) {
        lVar12 = local_248;
        do {
          lVar1 = *plVar24;
          if (lVar1 != lVar12) {
            *plVar24 = 0;
            lVar2 = *plVar11;
            *plVar11 = lVar1;
            if (lVar2 != 0) {
              *(undefined8 *)(puVar21 + -8) = 0x180070ea9;
              FUN_1800769f0(lVar2);
              *(undefined8 *)(puVar21 + -8) = 0x180070eb6;
              uVar28 = thunk_FUN_1803d64e0(lVar2,0x1c8);
              lVar12 = local_248;
            }
            plVar11 = plVar11 + 1;
          }
          plVar24 = plVar24 + 1;
        } while (plVar24 != plVar22);
        plVar5 = DAT_180ccfa98;
        if (plVar11 == plVar22) goto LAB_180070f56;
      }
      while( true ) {
        plVar6 = DAT_180ccfa98;
        bVar4 = plVar22 == DAT_180ccfa98;
        plVar24 = plVar11;
        DAT_180ccfa98 = plVar5;
        if (bVar4) break;
        lVar12 = *plVar22;
        *plVar22 = 0;
        lVar1 = *plVar11;
        *plVar11 = lVar12;
        if (lVar1 != 0) {
          *(undefined8 *)(puVar21 + -8) = 0x180070efd;
          FUN_1800769f0(lVar1);
          *(undefined8 *)(puVar21 + -8) = 0x180070f0a;
          uVar28 = thunk_FUN_1803d64e0(lVar1,0x1c8);
        }
        plVar11 = plVar11 + 1;
        plVar22 = plVar22 + 1;
        plVar5 = DAT_180ccfa98;
        DAT_180ccfa98 = plVar6;
      }
      for (; plVar24 != plVar5; plVar24 = plVar24 + 1) {
        lVar12 = *plVar24;
        if (lVar12 != 0) {
          *(undefined8 *)(puVar21 + -8) = 0x180070f36;
          FUN_1800769f0(lVar12);
          *(undefined8 *)(puVar21 + -8) = 0x180070f43;
          uVar28 = thunk_FUN_1803d64e0(lVar12,0x1c8);
        }
      }
      DAT_180ccfa98 = plVar11;
    }
  }
LAB_180070f56:
  *(undefined8 *)(puVar21 + -8) = 0x180070f5e;
  FUN_180075560(uVar28,param_1);
  uStack_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0xf;
  local_208 = (undefined8 ******)0x0;
  *(undefined8 *)(puVar21 + -8) = 0x180070fa9;
  FUN_1800a04a0(local_138,param_1,param_2,&local_208);
  lVar12 = local_1f8;
  uVar23 = 0x7fffffffffffffff;
  if (local_1f8 == 0) {
LAB_1800710fc:
    uVar26 = 0;
    puVar19 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar19 = (undefined8 *)*param_2;
    }
    *(undefined8 *)(puVar21 + -8) = 0x18007111a;
    FUN_1800695d0(puVar21 + 0x60,puVar19,0x20);
    *(undefined ***)(puVar21 + (longlong)*(int *)(*(longlong *)(puVar21 + 0x60) + 4) + 0x60) =
         std::basic_ifstream<char,std::char_traits<char>_>::vftable;
    *(int *)(puVar21 + (longlong)*(int *)(*(longlong *)(puVar21 + 0x60) + 4) + 0x5c) =
         *(int *)(*(longlong *)(puVar21 + 0x60) + 4) + -0xb0;
    lVar12 = (longlong)*(int *)(*(longlong *)(puVar21 + 0x60) + 4);
    uVar27 = uVar26;
    if ((puVar21[lVar12 + 0x70] & 6) != 0) {
      lVar12 = param_1[2];
      uVar23 = 0x7fffffffffffffff - lVar12;
      if (uVar23 < 0x14) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar21 + -8) = 0x180071a4b;
        FUN_180011990();
      }
      goto LAB_18007117e;
    }
LAB_18007132b:
    local_248 = *(longlong *)((longlong)alStack_330 + lVar12);
    local_228 = (char ******)0x0;
    uStack_220 = 0;
    local_218 = 0;
    local_210 = 0;
    bStack_240 = local_248 == 0;
    uStack_23f = 0;
    uStack_23a = uStack_25a;
    local_268 = (undefined8 ******)0x0;
    uStack_260 = 1;
    if (local_248 == 0) {
LAB_1800713ab:
      local_218 = 0;
      local_210 = 0xf;
      local_228 = (char ******)((ulonglong)local_228 & 0xffffffffffffff00);
    }
    else {
      *(undefined8 *)(puVar21 + -8) = 0x18007139f;
      FUN_18006c630(&local_248);
      if (local_248 == 0) goto LAB_1800713ab;
      *(undefined8 *)(puVar21 + -8) = 0x1800713f5;
      FUN_180068a20(&local_228,&local_248,&local_268);
    }
    if (2 < local_218) {
      ppppppcVar14 = (char ******)&local_228;
      if (0xf < local_210) {
        ppppppcVar14 = local_228;
      }
      if (*(char *)ppppppcVar14 == -0x11) {
        ppppppcVar14 = (char ******)&local_228;
        if (0xf < local_210) {
          ppppppcVar14 = local_228;
        }
        if (*(char *)((longlong)ppppppcVar14 + 1) == -0x45) {
          ppppppcVar14 = (char ******)&local_228;
          if (0xf < local_210) {
            ppppppcVar14 = local_228;
          }
          if (*(char *)((longlong)ppppppcVar14 + 2) == -0x41) {
            uVar18 = 3;
            if (local_218 < 3) {
              uVar18 = local_218;
            }
            ppppppcVar14 = (char ******)&local_228;
            if (0xf < local_210) {
              ppppppcVar14 = local_228;
            }
            uVar20 = local_218 - uVar18;
            *(undefined8 *)(puVar21 + -8) = 0x18007147b;
            FUN_180540530(ppppppcVar14,(char *)((longlong)ppppppcVar14 + uVar18),uVar20 + 1);
            local_218 = uVar20;
          }
        }
      }
    }
    *(undefined8 *)(puVar21 + -8) = 0x18007148c;
    FUN_180074070(puVar21 + 0x48);
    puVar19 = *(undefined8 **)(puVar21 + 0x48);
    if (puVar19 != param_1) {
      puVar15 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar15 = (undefined8 *)*param_1;
      }
      uVar10 = param_1[2];
      *(undefined8 *)(puVar21 + -8) = 0x1800714b0;
      FUN_180029840(puVar19,puVar15,uVar10);
    }
    if (puVar19 + 4 != param_2) {
      if ((ulonglong)param_2[3] < 0x10) {
        puVar15 = param_2;
      }
      else {
        puVar15 = (undefined8 *)*param_2;
      }
      uVar10 = param_2[2];
      *(undefined8 *)(puVar21 + -8) = 0x1800714d2;
      FUN_180029840(puVar19 + 4,puVar15,uVar10);
    }
    *(undefined8 *)(puVar21 + -8) = 0x1800714e1;
    puVar15 = (undefined8 *)FUN_18006dad0(&local_248,param_2);
    puVar19[0x26] = *puVar15;
    *(undefined1 *)((longlong)puVar19 + 0x4b) = DAT_18092106c;
    *(undefined8 *)(puVar21 + -8) = 0x180071508;
    FUN_18002ba60(puVar19 + 0x15,local_138);
    *(undefined4 *)(puVar19 + 0x19) = local_118;
    *(undefined1 *)((longlong)puVar19 + 0xcc) = local_114;
    *(undefined1 *)((longlong)puVar19 + 0xcd) = local_113;
    *(undefined1 *)((longlong)puVar19 + 0xce) = local_112;
    *(undefined8 *)(puVar21 + -8) = 0x18007154e;
    FUN_18002ba60(puVar19 + 0x1a,local_110);
    *(undefined8 *)(puVar21 + -8) = 0x180071561;
    FUN_18002ba60(puVar19 + 0x1e,local_f0);
    *(undefined4 *)(puVar19 + 0x22) = local_d0;
    lVar12 = DAT_180962df0 + 1;
    puVar19[0x29] = DAT_180962df0;
    DAT_180962df0 = lVar12;
    *(undefined8 *)(puVar21 + -8) = 0x18007158b;
    lVar12 = FUN_180485080();
    puVar19[8] = lVar12;
    if (lVar12 == 0) {
      lVar12 = param_1[2];
      if (uVar23 - lVar12 < 0x15) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar21 + -8) = 0x180071a51;
        FUN_180011990();
      }
      *(undefined8 *)(puVar21 + 0x30) = 0x15;
      *(char **)(puVar21 + 0x28) = " error: out of memory";
      *(longlong *)(puVar21 + 0x20) = lVar12;
      *(undefined8 *)(puVar21 + -8) = 0x1800715d5;
      FUN_180069380(&local_268);
      *(uint *)(puVar21 + 0x40) = uVar27 | 0x200;
      *(undefined8 *)(puVar21 + -8) = 0x1800715e8;
      FUN_18009afb0(&local_268);
      *(uint *)(puVar21 + 0x40) = uVar27;
      *(undefined8 *)(puVar21 + -8) = 0x1800715fb;
      FUN_18000f890(&local_268);
      cVar7 = '\0';
    }
    else {
      if (DAT_180ccfa98 == DAT_180ccfaa0) {
        *(undefined8 *)(puVar21 + -8) = 0x180071635;
        FUN_180077180(extraout_XMM0_Da_00,DAT_180ccfa98,puVar21 + 0x48);
      }
      else {
        lVar12 = *(longlong *)(puVar21 + 0x48);
        *(undefined8 *)(puVar21 + 0x48) = 0;
        *DAT_180ccfa98 = lVar12;
        DAT_180ccfa98 = DAT_180ccfa98 + 1;
      }
      *(undefined8 *)(puVar21 + -8) = 0x18007163d;
      FUN_18006ee50(puVar19);
      *(undefined8 *)(puVar21 + -8) = 0x180071645;
      uVar10 = FUN_180097f30(param_1);
      puVar19[0x14] = uVar10;
      uVar10 = puVar19[8];
      DAT_180ccfa18 = DAT_180ccfa18 + 1;
      *(undefined8 *)(puVar21 + -8) = 0x180071672;
      iVar8 = FUN_180482900(uVar10,
                            "\nlocal sqrt, floor, atan2, sin, cos, pi = math.sqrt, math.floor, math.atan2, math.sin, math.cos, math.pi\nlocal type, setmetatable, rawget, tostring, tonumber, format = type, setmetatable, rawget, tostring, tonumber, string.format\n\nlocal vector_mt = {}\nvector_mt.__index = vector_mt\nlocal function vector(x, y, z) return setmetatable({ x = x or 0, y = y or 0, z = z or 0 }, vector_mt) end\nlocal function as_vector(v) return type(v) == \'number\' and vector(v, v, v) or v end\nvector_mt.__add = function(a, b) a, b = as_vector(a), as_vector(b) return vector(a.x + b.x, a.y + b.y, a.z + b.z) end\nvector_mt.__sub = function(a, b) a, b = as_vector(a), as_vector(b) return vector(a.x - b.x, a.y - b.y, a.z - b.z) end\nvector_mt.__mul = function(a, b) a, b = as_vector(a), as_vector(b) return vector(a.x * b.x, a.y * b.y, a.z * b.z) end\nvector_mt.__div = function(a, b) a, b = as_vector(a), as_vector(b) return vector(a.x / b.x, a.y / b.y, a.z / b.z) end\nvector_mt.__unm = function(a) return vector(-a.x, -a.y, -a.z) end\nvector_mt.__eq = function(a, b) return a.x == b.x and a.y == b.y and a.z == b.z end\nvector_mt.__tostring = function(a) return format(\'vector(%.3f, %.3f, %.3f)\', a.x, a.y, a.z) end\nfunction vector_mt:length() return sqrt(self.x * self.x + self.y * self.y + self.z * self.z) end\nfunction vector_mt:length_sqr() return self.x * self.x + self.y * self.y + self.z * self.z end\nfunction vector_mt:length2d() return sqrt(self.x * self.x + self.y * self.y) end\nfunction vector_mt:dist(o) return (self - o):length() end\nfunction vector_mt:dist2d(o) return (self - o):length2d() end\nfunction vector_mt:dot(o) return self.x * o.x + self.y * o.y + self.z * o.z end\nfunction vector_mt:cross(o) return vector(self.y * o.z - self.z * o.y, self.z * o.x - self.x * o.z, self.x * o.y - self.y * o.x) end\nfunction vector_mt:normalized() local l = self:length() if l == 0 then return vector() end return vector(self.x / l, self.y / l, self.z / l) end\nfunction vector_mt:clone() return vector(self.x, self.y, self.z) end\nfunction vector_mt:unpack() return sel..." /* TRUNCATED STRING LITERAL */
                            ,0x2c33,"=prelude");
      if (iVar8 == 0) {
        *(undefined8 *)(puVar21 + -8) = 0x180071687;
        cVar7 = FUN_180070500(puVar19,0,0);
        if (cVar7 == '\0') goto LAB_18007182a;
        *(undefined8 *)(puVar21 + -8) = 0x1800716a3;
        FUN_18047eb70(uVar10,0xffffd8ee,"vector");
        *(undefined8 *)(puVar21 + -8) = 0x1800716b0;
        uVar28 = FUN_1804851b0(uVar10,0xffffd8f0);
        *(undefined4 *)(puVar19 + 0x28) = uVar28;
        *(undefined8 *)(puVar21 + -8) = 0x1800716ca;
        FUN_18047eb70(uVar10,0xffffd8ee,"color");
        *(undefined8 *)(puVar21 + -8) = 0x1800716d7;
        uVar28 = FUN_1804851b0(uVar10,0xffffd8f0);
        *(undefined4 *)((longlong)puVar19 + 0x144) = uVar28;
        *(undefined8 *)(puVar21 + -8) = 0x1800716e5;
        FUN_1800641b0(puVar19);
        if (uVar23 == param_1[2]) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar21 + -8) = &UNK_180071a57;
          FUN_180011990();
        }
        if ((ulonglong)param_1[3] < 0x10) {
          puVar15 = param_1;
        }
        else {
          puVar15 = (undefined8 *)*param_1;
        }
        *(undefined8 *)(puVar21 + 0x30) = param_1[2];
        *(undefined8 **)(puVar21 + 0x28) = puVar15;
        *(undefined8 *)(puVar21 + 0x20) = 1;
        *(undefined8 *)(puVar21 + -8) = 0x18007172f;
        FUN_180069380(&local_248);
        *(uint *)(puVar21 + 0x40) = uVar27 | 0x400;
        *(undefined8 *)(puVar21 + -8) = 0x180071750;
        FUN_180042850(&local_268,&local_248,&DAT_1806e188c);
        *(uint *)(puVar21 + 0x40) = uVar27;
        *(undefined8 *)(puVar21 + -8) = 0x180071767;
        FUN_18000f890(&local_248);
        ppppppuVar17 = &local_268;
        if (0xf < local_250) {
          ppppppuVar17 = local_268;
        }
        ppppppcVar14 = (char ******)&local_228;
        if (0xf < local_210) {
          ppppppcVar14 = local_228;
        }
        *(undefined **)(puVar21 + 0x20) = &DAT_1806dfd54;
        *(undefined8 *)(puVar21 + -8) = 0x1800717ab;
        iVar8 = FUN_1804829e0(uVar10,ppppppcVar14,local_218,ppppppuVar17);
        if (iVar8 == 0) {
          *(undefined8 *)(puVar21 + -8) = 0x180071816;
          cVar7 = FUN_180070500(puVar19,0,0);
        }
        else {
          *(undefined8 *)(puVar21 + -8) = 0x1800717bf;
          pcVar16 = (char *)FUN_18047fc70(uVar10,0xffffffff,0);
          pcVar25 = "cannot load";
          if (pcVar16 != (char *)0x0) {
            pcVar25 = pcVar16;
          }
          *(undefined8 *)(puVar21 + -8) = 0x1800717d9;
          FUN_180013350(&local_248,pcVar25);
          *(undefined8 *)(puVar21 + -8) = 0x1800717e9;
          FUN_1800703f0(puVar19,&local_248);
          *(undefined8 *)(puVar21 + -8) = 0x1800717f6;
          FUN_18000f890(&local_248);
          *(undefined8 *)(puVar21 + -8) = 0x180071804;
          FUN_18047fb50(uVar10,0xfffffffe);
          cVar7 = '\0';
        }
        *(undefined8 *)(puVar21 + -8) = 0x180071823;
        FUN_18000f890(&local_268);
      }
      else {
LAB_18007182a:
        cVar7 = '\0';
        if (*(char *)(puVar19 + 9) == '\0') {
          *(undefined8 *)(puVar21 + -8) = 0x180071846;
          FUN_180013350(&local_268,"the prelude did not load");
          *(undefined8 *)(puVar21 + -8) = 0x180071853;
          FUN_1800703f0(puVar19,&local_268);
          *(undefined8 *)(puVar21 + -8) = 0x18007185d;
          FUN_18000f890(&local_268);
        }
      }
      DAT_180ccfa18 = DAT_180ccfa18 + -1;
      if ((cVar7 != '\0') && (*(char *)(puVar19 + 9) == '\0')) {
        pcVar25 = "";
        if (*(char *)((longlong)puVar19 + 0x4b) != '\0') {
          pcVar25 = " (insecure)";
        }
        lVar12 = param_1[2];
        if (uVar23 - lVar12 < 8) goto LAB_180071a16;
        *(undefined8 *)(puVar21 + 0x30) = 8;
        *(char **)(puVar21 + 0x28) = ": loaded";
        *(longlong *)(puVar21 + 0x20) = lVar12;
        *(undefined8 *)(puVar21 + -8) = 0x1800718ce;
        FUN_180069380(&local_268);
        *(uint *)(puVar21 + 0x40) = uVar27 | 0x800;
        *(undefined8 *)(puVar21 + -8) = 0x1800718eb;
        uVar10 = FUN_180042850(&local_248,&local_268,pcVar25);
        *(undefined8 *)(puVar21 + -8) = 0x1800718f4;
        FUN_18009afb0(uVar10);
        *(undefined8 *)(puVar21 + -8) = 0x180071901;
        FUN_18000f890(&local_248);
        *(uint *)(puVar21 + 0x40) = uVar27;
        *(undefined8 *)(puVar21 + -8) = 0x180071915;
        FUN_18000f890(&local_268);
      }
      *(undefined8 *)(puVar21 + -8) = 0x18007191b;
      FUN_18006e590();
    }
    lVar12 = *(longlong *)(puVar21 + 0x48);
    if (lVar12 != 0) {
      *(undefined8 *)(puVar21 + -8) = 0x18007192e;
      FUN_1800769f0(lVar12);
      *(undefined8 *)(puVar21 + -8) = 0x18007193b;
      thunk_FUN_1803d64e0(lVar12,0x1c8);
    }
    *(undefined8 *)(puVar21 + -8) = 0x180071948;
    FUN_18000f890(&local_228);
  }
  else {
    lVar1 = param_1[2];
    if (0x7fffffffffffffffU - lVar1 < 2) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar21 + -8) = 0x180071a45;
      FUN_180011990();
    }
    *(undefined8 *)(puVar21 + 0x30) = 2;
    *(undefined **)(puVar21 + 0x28) = &DAT_1806dfa2c;
    *(longlong *)(puVar21 + 0x20) = lVar1;
    *(undefined8 *)(puVar21 + -8) = 0x18007100b;
    FUN_180069380(local_a8);
    *(undefined4 *)(puVar21 + 0x40) = 8;
    ppppppuVar17 = &local_208;
    if (0xf < local_1f0) {
      ppppppuVar17 = local_208;
    }
    *(undefined8 *)(puVar21 + -8) = 0x180071039;
    puVar13 = (uint *)FUN_1800134a0(local_a8,ppppppuVar17,lVar12);
    local_1c8 = *puVar13;
    uStack_1c4 = puVar13[1];
    uStack_1c0 = puVar13[2];
    uStack_1bc = puVar13[3];
    local_1b8 = *(undefined8 *)(puVar13 + 4);
    uStack_1b0 = *(ulonglong *)(puVar13 + 6);
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = 0xf;
    puVar13[7] = 0;
    *(undefined1 *)puVar13 = 0;
    *(undefined4 *)(puVar21 + 0x40) = 0x18;
    *(undefined8 *)(puVar21 + -8) = 0x180071083;
    FUN_18009afb0(&local_1c8);
    uVar26 = 8;
    *(undefined4 *)(puVar21 + 0x40) = 8;
    if (uStack_1b0 < 0x10) {
LAB_1800710cd:
      local_1b8 = 0;
      uStack_1b0 = 0xf;
      local_1c8 = local_1c8 & 0xffffff00;
      *(undefined4 *)(puVar21 + 0x40) = 0;
      *(undefined8 *)(puVar21 + -8) = 0x1800710fb;
      FUN_18000f890(local_a8);
      goto LAB_1800710fc;
    }
    uVar18 = uStack_1b0 + 1;
    lVar1 = CONCAT44(uStack_1c4,local_1c8);
    lVar12 = lVar1;
    if (uVar18 < 0x1000) {
LAB_1800710c8:
      *(undefined8 *)(puVar21 + -8) = 0x1800710cd;
      thunk_FUN_1803d64e0(lVar12,uVar18);
      goto LAB_1800710cd;
    }
    lVar12 = *(longlong *)(lVar1 + -8);
    if ((lVar1 - lVar12) - 8U < 0x20) {
      uVar18 = uStack_1b0 + 0x28;
      goto LAB_1800710c8;
    }
    pcVar3 = (code *)swi(0x29);
    lVar12 = (*pcVar3)(5);
    puVar21 = puVar21 + 8;
LAB_18007117e:
    *(undefined8 *)(puVar21 + 0x30) = 0x14;
    *(char **)(puVar21 + 0x28) = " error: cannot read ";
    *(longlong *)(puVar21 + 0x20) = lVar12;
    *(undefined8 *)(puVar21 + -8) = 0x1800711a4;
    FUN_180069380(local_88);
    *(uint *)(puVar21 + 0x40) = uVar26 | 0x20;
    if ((ulonglong)param_2[3] < 0x10) {
      puVar19 = param_2;
    }
    else {
      puVar19 = (undefined8 *)*param_2;
    }
    uVar10 = param_2[2];
    *(undefined8 *)(puVar21 + -8) = 0x1800711cd;
    puVar13 = (uint *)FUN_1800134a0(local_88,puVar19,uVar10);
    local_1a8 = *puVar13;
    uStack_1a4 = puVar13[1];
    uStack_1a0 = puVar13[2];
    uStack_19c = puVar13[3];
    local_198 = *(undefined8 *)(puVar13 + 4);
    uStack_190 = *(ulonglong *)(puVar13 + 6);
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = 0xf;
    puVar13[7] = 0;
    *(undefined1 *)puVar13 = 0;
    *(uint *)(puVar21 + 0x40) = uVar26 | 0x60;
    *(undefined8 *)(puVar21 + -8) = 0x180071215;
    FUN_18009afb0(&local_1a8);
    uVar27 = uVar26 | 0x20;
    *(uint *)(puVar21 + 0x40) = uVar27;
    if (0xf < uStack_190) {
      uVar18 = uStack_190 + 1;
      lVar1 = CONCAT44(uStack_1a4,local_1a8);
      lVar12 = lVar1;
      if (0xfff < uVar18) {
        lVar12 = *(longlong *)(lVar1 + -8);
        if (0x1f < (lVar1 - lVar12) - 8U) {
          lVar12 = 5;
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)();
          puVar21 = puVar21 + 8;
          goto LAB_18007132b;
        }
        uVar18 = uStack_190 + 0x28;
      }
      *(undefined8 *)(puVar21 + -8) = 0x18007125f;
      thunk_FUN_1803d64e0(lVar12,uVar18);
    }
    local_198 = 0;
    uStack_190 = 0xf;
    local_1a8 = local_1a8 & 0xffffff00;
    *(uint *)(puVar21 + 0x40) = uVar26;
    *(undefined8 *)(puVar21 + -8) = 0x18007128d;
    FUN_18000f890(local_88);
    *(undefined8 *)(puVar21 + -8) = 0x18007129d;
    FUN_180024b50(local_188,param_2);
    *(undefined8 *)(puVar21 + -8) = 0x1800712b4;
    FUN_180066a20(local_168,"cannot read ",param_2);
    *(undefined8 *)(puVar21 + -8) = 0x1800712c4;
    uVar28 = FUN_18006dad0(local_148,param_2);
    *(undefined8 *)(puVar21 + -8) = 0x1800712d1;
    plVar11 = (longlong *)FUN_1800762f0(uVar28,&local_268,param_1);
    lVar12 = *plVar11;
    *(undefined8 *)(puVar21 + -8) = 0x1800712e4;
    FUN_18002ba60(lVar12 + 0x40,local_188);
    *(undefined8 *)(puVar21 + -8) = 0x1800712f4;
    FUN_18002ba60(lVar12 + 0x60,local_168);
    *(undefined8 *)(lVar12 + 0x80) = local_148[0];
    *(undefined8 *)(puVar21 + -8) = 0x18007130e;
    FUN_18000f890(local_168);
    *(undefined8 *)(puVar21 + -8) = 0x18007131b;
    FUN_18000f890(local_188);
    cVar7 = '\0';
  }
  *(undefined8 *)(puVar21 + -8) = 0x180071953;
  FUN_18005e2f0(puVar21 + 0x60);
  *(undefined8 *)(puVar21 + -8) = 0x180071960;
  FUN_18000f890(local_f0);
  *(undefined8 *)(puVar21 + -8) = 0x18007196d;
  FUN_18000f890(local_110);
  *(undefined8 *)(puVar21 + -8) = 0x18007197a;
  FUN_18000f890(local_138);
  if (0xf < local_1f0) {
    uVar23 = local_1f0 + 1;
    ppppppuVar17 = local_208;
    if (0xfff < uVar23) {
      ppppppuVar17 = (undefined8 ******)local_208[-1];
      if (0x1f < (ulonglong)((longlong)local_208 + (-8 - (longlong)ppppppuVar17))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar21 = puVar21 + 8;
LAB_180071a16:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar21 + -8) = 0x180071a1b;
        FUN_180011990();
      }
      uVar23 = local_1f0 + 0x28;
    }
    *(undefined8 *)(puVar21 + -8) = 0x1800719b8;
    thunk_FUN_1803d64e0(ppppppuVar17,uVar23);
  }
  local_1f8 = 0;
  local_1f0 = 0xf;
  local_208 = (undefined8 ******)((ulonglong)local_208 & 0xffffffffffffff00);
LAB_1800719d5:
  *(undefined8 *)(puVar21 + -8) = 0x1800719e1;
  FUN_1804e4e90(&DAT_1809e8e50);
  *(undefined8 *)(puVar21 + -8) = 0x1800719f4;
  return cVar7;
}



/* ===== 180071a60 FUN_180071a60 ===== */

void FUN_180071a60(longlong param_1)

{
  FUN_18000f890(param_1 + 0x48);
  FUN_18000f890(param_1 + 0x28);
  FUN_18000f890(param_1);
  return;
}



/* ===== 180071a90 FUN_180071a90 ===== */

longlong FUN_180071a90(longlong param_1,longlong param_2)

{
  FUN_18002ba60();
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  FUN_18002ba60(param_1 + 0x28,param_2 + 0x28);
  FUN_18002ba60(param_1 + 0x48,param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  return param_1;
}



/* ===== 180071af0 FUN_180071af0 ===== */

void FUN_180071af0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_1804e4d70(&DAT_1809e8e50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  FUN_180075560();
  lVar2 = FUN_18006e170(param_1);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x49) = 1;
    FUN_18006e590();
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 180071b80 FUN_180071b80 ===== */

void FUN_180071b80(void)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 in_R9;
  undefined *puVar5;
  
  puVar5 = &DAT_1809e8e50;
  iVar3 = FUN_1804e4d70(&DAT_1809e8e50);
  lVar1 = DAT_180ca0ca0;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  FUN_180076260(&DAT_180ca0ca0,&DAT_180ca0ca0,*(undefined8 *)(DAT_180ca0ca0 + 8),in_R9,puVar5);
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  plVar2 = DAT_180ccfa98;
  DAT_180ca0ca8 = 0;
  for (plVar4 = DAT_180ccfa90; plVar4 != plVar2; plVar4 = plVar4 + 1) {
    *(undefined1 *)(*plVar4 + 0x49) = 1;
  }
  FUN_18006e590();
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 180071c50 FUN_180071c50 ===== */

undefined8 FUN_180071c50(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1804e4d70(&DAT_1809e8e50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar2 = FUN_18006e170(param_1);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x48) != '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return uVar3;
}



/* ===== 180071cd0 FUN_180071cd0 ===== */

undefined8 *
FUN_180071cd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined *puVar7;
  
  uVar6 = 0;
  puVar7 = &DAT_1809e8e50;
  iVar3 = FUN_1804e4d70(&DAT_1809e8e50);
  plVar1 = DAT_180ca0ca0;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  plVar4 = (longlong *)DAT_180ca0ca0[1];
  cVar2 = *(char *)((longlong)plVar4 + 0x19);
  plVar5 = DAT_180ca0ca0;
  while (cVar2 == '\0') {
    cVar2 = FUN_180023470(plVar4 + 4,param_2,param_3,param_4,uVar6,puVar7);
    if (cVar2 < '\0') {
      plVar4 = plVar4 + 2;
    }
    else {
      plVar5 = plVar4;
    }
    plVar4 = (longlong *)*plVar4;
    cVar2 = *(char *)((longlong)plVar4 + 0x19);
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') ||
     (cVar2 = FUN_180023470(param_2,plVar5 + 4,param_3,param_4,uVar6,puVar7), cVar2 < '\0')) {
    plVar5 = plVar1;
  }
  if (plVar5 == plVar1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_180024b50(param_1,plVar5 + 0xc);
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return param_1;
}



/* ===== 180071e00 FUN_180071e00 ===== */

void FUN_180071e00(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  int local_res8 [2];
  int *local_res10;
  undefined *puVar8;
  
  puVar8 = &DAT_1809e8e50;
  local_res8[0] = param_1;
  iVar3 = FUN_1804e4d70(&DAT_1809e8e50);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_180ccfa1c = DAT_180ccfa1c + 1;
  FUN_180080af0();
  if ((((DAT_180ccfa90 == DAT_180ccfa98) && (DAT_180ccfaa8 == DAT_180ccfab0)) &&
      (DAT_180ccfa28 == DAT_180ccfa30)) && (DAT_180ccfac0 == DAT_180ccfac8)) goto LAB_180071fa4;
  if (local_res8[0] == 0xc) {
    if (DAT_1809620c0 != 0) {
      lVar4 = FUN_18000f3a0();
      if (lVar4 != 0) {
        uVar7 = 0;
        do {
          if (((&DAT_180962e10)[uVar7 * 4] != 0) && ((&DAT_180ccfa40)[uVar7] == '\0')) {
            puVar6 = (undefined8 *)(&DAT_180962e00 + uVar7 * 0x20);
            if (0xf < (ulonglong)(&DAT_180962e18)[uVar7 * 4]) {
              puVar6 = (undefined8 *)*puVar6;
            }
            cVar1 = FUN_180273b60(puVar6,(&PTR_LAB_18059e420)[uVar7],param_3,param_4,puVar8);
            (&DAT_180ccfa40)[uVar7] = cVar1;
            if (cVar1 == '\0') {
              (&DAT_180ccfa40)[uVar7] = 1;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0x30);
      }
    }
    uVar2 = FUN_1803a10a0();
    FUN_18006f290(uVar2);
    if (DAT_180961ab0 == 0) {
LAB_180071f6b:
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_18000f3a0();
      if (lVar4 == 0) goto LAB_180071f6b;
      lVar4 = FUN_18000f3a0(lVar4 + 8);
      if (lVar4 == 0) goto LAB_180071f6b;
      lVar5 = FUN_18000f3a0(lVar4);
      if (lVar5 == 0) goto LAB_180071f6b;
      lVar5 = FUN_18000f3a0(lVar5);
      if (lVar5 == 0) goto LAB_180071f6b;
    }
    FUN_18006f480(lVar4,0);
  }
  if (DAT_180ccfa90 != DAT_180ccfa98) {
    local_res10 = local_res8;
    FUN_180074270(DAT_180ccfa90,&local_res10);
    FUN_180080af0();
  }
LAB_180071fa4:
  DAT_180ccfa1c = DAT_180ccfa1c + -1;
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 180072000 FUN_180072000 ===== */

void FUN_180072000(longlong param_1)

{
  int iVar1;
  longlong local_res8;
  longlong *local_res10;
  undefined *local_res18;
  
  local_res18 = &DAT_1809e8e50;
  local_res8 = param_1;
  iVar1 = FUN_1804e4d70(&DAT_1809e8e50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((DAT_180ccfa90 != DAT_180ccfa98) && (local_res8 != 0)) {
    DAT_180ccfa10 = local_res8;
    DAT_180ccfa1c = DAT_180ccfa1c + 1;
    local_res10 = &local_res8;
    FUN_180074460();
    DAT_180ccfa10 = 0;
    DAT_180ccfa1c = DAT_180ccfa1c + -1;
    FUN_180080af0();
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 1800720c0 FUN_1800720c0 ===== */

void FUN_1800720c0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  double *pdVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  ulonglong uVar13;
  LARGE_INTEGER local_res10 [3];
  uint local_88 [2];
  undefined *local_80;
  undefined4 *local_78;
  undefined4 *puStack_70;
  undefined4 *local_68;
  
  local_80 = &DAT_1809e8e50;
  iVar8 = FUN_1804e4d70(&DAT_1809e8e50);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  FUN_18006f8d0();
  if (DAT_180ccfa90 != DAT_180ccfa98) {
    DAT_180ccfa18 = DAT_180ccfa18 + 1;
    FUN_18006ff70();
    if (DAT_180ca0018 == 0) {
      QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_180ca0018);
    }
    local_res10[0].QuadPart = 0;
    QueryPerformanceCounter(local_res10);
    dVar4 = (double)local_res10[0].QuadPart;
    dVar3 = (double)DAT_180ca0018;
    uVar13 = 0;
    lVar10 = DAT_180ccfa90;
    lVar11 = DAT_180ccfa98;
    if (DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0) {
      do {
        lVar2 = *(longlong *)(lVar10 + uVar13 * 8);
        if (*(char *)(lVar2 + 0x48) == '\0') {
          local_78 = (undefined4 *)0x0;
          puStack_70 = (undefined4 *)0x0;
          local_68 = (undefined4 *)0x0;
          pdVar12 = *(double **)(lVar2 + 0x70);
          pdVar9 = *(double **)(lVar2 + 0x78);
          puVar5 = local_78;
          puVar6 = puStack_70;
          if (pdVar12 != pdVar9) {
            do {
              if (*pdVar12 <= dVar4 / dVar3) {
                if (puStack_70 == local_68) {
                  FUN_18006a410(&local_78);
                }
                else {
                  *puStack_70 = *(undefined4 *)(pdVar12 + 1);
                  puStack_70 = puStack_70 + 1;
                }
                FUN_180540530(pdVar12,pdVar12 + 2,
                              *(longlong *)(lVar2 + 0x78) - (longlong)(pdVar12 + 2));
                *(longlong *)(lVar2 + 0x78) = *(longlong *)(lVar2 + 0x78) + -0x10;
                pdVar9 = *(double **)(lVar2 + 0x78);
              }
              else {
                pdVar12 = pdVar12 + 2;
              }
              puVar5 = local_78;
              puVar6 = puStack_70;
            } while (pdVar12 != pdVar9);
          }
          while ((puVar7 = puStack_70, puVar5 != puStack_70 && (*(char *)(lVar2 + 0x48) == '\0'))) {
            uVar1 = *puVar5;
            puStack_70 = puVar6;
            FUN_18047f6f0(*(undefined8 *)(lVar2 + 0x40),0xffffd8f0,uVar1);
            FUN_180485280(*(undefined8 *)(lVar2 + 0x40),0xffffd8f0,uVar1);
            FUN_180070500(lVar2,0,0);
            puVar5 = puVar5 + 1;
            puVar6 = puStack_70;
            puStack_70 = puVar7;
          }
          puStack_70 = puVar6;
          FUN_180068f30(&local_78);
          lVar10 = DAT_180ccfa90;
          lVar11 = DAT_180ccfa98;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < (ulonglong)(lVar11 - lVar10 >> 3));
    }
    FUN_18006fc60();
    local_88[0] = (uint)(DAT_18091a190 != '\0');
    if ((-1 < (int)DAT_180962cfc) && (local_88[0] != DAT_180962cfc)) {
      local_res10[0].QuadPart = (LONGLONG)local_88;
      FUN_180074690(DAT_180962cfc,local_res10);
    }
    DAT_180962cfc = local_88[0];
    if (param_1 != 0) {
      DAT_180ccfa78 = param_1;
      FUN_180074880();
    }
    DAT_180ccfa78 = 0;
    DAT_180ccfa18 = DAT_180ccfa18 + -1;
  }
  FUN_18006e590();
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 180072350 FUN_180072350 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180072350(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined *local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_68;
  local_40 = &DAT_1809e8e50;
  iVar1 = FUN_1804e4d70(&DAT_1809e8e50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180ccfa90 != DAT_180ccfa98) {
    puVar2 = &DAT_18058b643;
    if (param_1 != (undefined1 *)0x0) {
      puVar2 = param_1;
    }
    FUN_180013350(local_38,puVar2);
    local_48 = local_38;
    FUN_180074a50();
    FUN_18000f890(local_38);
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 180072420 FUN_180072420 ===== */

void FUN_180072420(void)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_1809e8e50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180ccfa90 != DAT_180ccfa98) {
    FUN_180074c50();
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 180072490 FUN_180072490 ===== */

void FUN_180072490(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_1809e8e50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((DAT_180ccfa90 != DAT_180ccfa98) && (param_1 != 0)) {
    FUN_180074e20();
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 180072540 FUN_180072540 ===== */

void FUN_180072540(longlong param_1)

{
  int iVar1;
  longlong local_res8;
  longlong *local_res10;
  undefined *local_res18;
  
  local_res18 = &DAT_1809e8e50;
  local_res8 = param_1;
  iVar1 = FUN_1804e4d70(&DAT_1809e8e50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((DAT_180ccfa90 != DAT_180ccfa98) && (local_res8 != 0)) {
    DAT_180ccfa80 = local_res8;
    local_res10 = &local_res8;
    FUN_180075040();
    DAT_180ccfa80 = 0;
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 1800725e0 FUN_1800725e0 ===== */

byte FUN_1800725e0(undefined4 param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  int *local_60;
  int *piStack_58;
  int *local_50;
  
  iVar5 = FUN_1804e4d70(&DAT_1809e8e50,param_2,param_3,param_4,&DAT_1809e8e50);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  bVar10 = 0;
  if (DAT_180ccfa90 != DAT_180ccfa98) {
    DAT_180ccfa18 = DAT_180ccfa18 + 1;
    uVar12 = 0;
    lVar8 = DAT_180ccfa90;
    lVar11 = DAT_180ccfa98;
    if (DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(lVar8 + uVar12 * 8);
        if (*(char *)(lVar1 + 0x48) == '\0') {
          if (*(longlong *)(lVar1 + 0x40) != 0) {
            local_60 = (int *)0x0;
            piStack_58 = (int *)0x0;
            local_50 = (int *)0x0;
            piVar2 = *(int **)(lVar1 + 0x58);
            piVar3 = piStack_58;
            for (piVar9 = *(int **)(lVar1 + 0x50); piStack_58 = piVar3, piVar9 != piVar2;
                piVar9 = piVar9 + 10) {
              if (*(ulonglong *)(piVar9 + 6) < 0x10) {
                piVar6 = piVar9;
              }
              else {
                piVar6 = *(int **)piVar9;
              }
              if (*(longlong *)(piVar9 + 4) == 5) {
                iVar5 = *piVar6 + -0x75706e69;
                if (iVar5 == 0) {
                  iVar5 = *(byte *)(piVar6 + 1) - 0x74;
                }
                if (iVar5 == 0) {
                  if (piVar3 == local_50) {
                    FUN_18006a410(&local_60);
                  }
                  else {
                    *piVar3 = piVar9[8];
                    piStack_58 = piVar3 + 1;
                  }
                }
              }
              piVar3 = piStack_58;
            }
            piVar9 = local_60;
            while ((piVar9 != piVar3 && (*(char *)(lVar1 + 0x48) == '\0'))) {
              FUN_18047f6f0(*(undefined8 *)(lVar1 + 0x40),0xffffd8f0,*piVar9);
              iVar5 = FUN_18047fe10(*(undefined8 *)(lVar1 + 0x40),0xffffffff);
              uVar7 = *(undefined8 *)(lVar1 + 0x40);
              if (iVar5 == 6) {
                FUN_18047f3d0(uVar7,param_1);
                FUN_18047f4f0(*(undefined8 *)(lVar1 + 0x40),(double)param_2);
                FUN_18047f4f0(*(undefined8 *)(lVar1 + 0x40),(double)param_3);
                cVar4 = FUN_180070500(lVar1,3,1);
                if (cVar4 != '\0') {
                  iVar5 = FUN_18047fbf0(*(undefined8 *)(lVar1 + 0x40),0xffffffff);
                  bVar10 = bVar10 | iVar5 != 0;
                  uVar7 = *(undefined8 *)(lVar1 + 0x40);
                  goto LAB_1800727cc;
                }
              }
              else {
LAB_1800727cc:
                FUN_18047fb50(uVar7,0xfffffffe);
              }
              piVar9 = piVar9 + 1;
            }
            FUN_180068f30(&local_60);
            lVar8 = DAT_180ccfa90;
            lVar11 = DAT_180ccfa98;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < (ulonglong)(lVar11 - lVar8 >> 3));
    }
    DAT_180ccfa18 = DAT_180ccfa18 + -1;
    FUN_18006e590();
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return bVar10;
}



/* ===== 180072870 FUN_180072870 ===== */

void FUN_180072870(longlong param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  
  iVar3 = FUN_1804e4d70(&DAT_1809e8e50,param_2,param_3,param_4,&DAT_1809e8e50);
  uVar2 = DAT_180ccfa78;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (((DAT_180ccfa90 != DAT_180ccfa98) && (param_1 != 0)) && (param_2 != 0)) {
    bVar1 = false;
    plVar7 = DAT_180ccfa90;
    do {
      for (plVar4 = *(longlong **)(*plVar7 + 0x50); plVar4 != *(longlong **)(*plVar7 + 0x58);
          plVar4 = plVar4 + 5) {
        if ((ulonglong)plVar4[3] < 0x10) {
          plVar5 = plVar4;
        }
        else {
          plVar5 = (longlong *)*plVar4;
        }
        if (plVar4[2] == 10) {
          lVar6 = *plVar5 + -0x655f726579616c70;
          if (lVar6 == 0) {
            lVar6 = (ulonglong)*(ushort *)(plVar5 + 1) - 0x7073;
          }
          bVar8 = lVar6 == 0;
        }
        else {
          bVar8 = false;
        }
        bVar1 = (bool)(bVar1 | bVar8);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != DAT_180ccfa98);
    if (bVar1) {
      DAT_180ccfa78 = param_1;
      FUN_180075270();
    }
  }
  DAT_180ccfa78 = uVar2;
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 1800729f0 FUN_1800729f0 ===== */

undefined1 FUN_1800729f0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  ulonglong local_res20;
  undefined4 *local_68;
  undefined4 *puStack_60;
  undefined4 *local_58;
  
  iVar6 = FUN_1804e4d70(&DAT_1809e8e50);
  uVar4 = DAT_180ccfa78;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((DAT_180ccfa90 == DAT_180ccfa98) || (param_2 == 0)) {
    uVar12 = 0;
  }
  else {
    uVar11 = 0;
    uVar12 = 0;
    DAT_180ccfa18 = DAT_180ccfa18 + 1;
    local_res20 = 0;
    lVar7 = DAT_180ccfa90;
    lVar14 = DAT_180ccfa98;
    DAT_180ccfa78 = param_1;
    if (DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(lVar7 + local_res20 * 8);
        if (*(char *)(lVar1 + 0x48) == '\0') {
          if (*(longlong *)(lVar1 + 0x40) != 0) {
            local_68 = (undefined4 *)0x0;
            puStack_60 = (undefined4 *)0x0;
            local_58 = (undefined4 *)0x0;
            plVar2 = *(longlong **)(lVar1 + 0x58);
            plVar8 = *(longlong **)(lVar1 + 0x50);
            puVar13 = local_68;
            puVar3 = puStack_60;
            while( true ) {
              local_68 = puVar13;
              puStack_60 = puVar3;
              if (plVar8 == plVar2) break;
              if ((ulonglong)plVar8[3] < 0x10) {
                plVar10 = plVar8;
              }
              else {
                plVar10 = (longlong *)*plVar8;
              }
              if (plVar8[2] == 0xe) {
                lVar7 = *plVar10 + -0x655f726579616c70;
                if ((lVar7 == 0) &&
                   (lVar7 = (ulonglong)*(uint *)(plVar10 + 1) - 0x705f7073, lVar7 == 0)) {
                  lVar7 = (ulonglong)*(ushort *)((longlong)plVar10 + 0xc) - 0x6572;
                }
                if (lVar7 == 0) {
                  if (puVar3 == local_58) {
                    FUN_18006a410(&local_68);
                  }
                  else {
                    *puVar3 = (int)plVar8[4];
                    puStack_60 = puVar3 + 1;
                  }
                }
              }
              plVar8 = plVar8 + 5;
              puVar13 = local_68;
              puVar3 = puStack_60;
            }
            if (puVar13 != puVar3) {
              do {
                if (*(char *)(lVar1 + 0x48) != '\0') break;
                FUN_18047f6f0(*(undefined8 *)(lVar1 + 0x40),0xffffd8f0,*puVar13);
                iVar6 = FUN_18047fe10(*(undefined8 *)(lVar1 + 0x40),0xffffffff);
                uVar9 = *(undefined8 *)(lVar1 + 0x40);
                if (iVar6 == 6) {
                  plVar8 = (longlong *)FUN_18047efb0(uVar9,8);
                  *plVar8 = param_2;
                  FUN_18047eb70(uVar9,0xffffd8f0,"wl.entity");
                  FUN_18047f990(uVar9,0xfffffffe);
                  uVar9 = *(undefined8 *)(lVar1 + 0x40);
                  if (param_3 == 0) {
                    FUN_18047f4d0();
                  }
                  else {
                    plVar8 = (longlong *)FUN_18047efb0(uVar9,8);
                    *plVar8 = param_3;
                    FUN_18047eb70(uVar9,0xffffd8f0,"wl.entity");
                    FUN_18047f990(uVar9,0xfffffffe);
                  }
                  cVar5 = FUN_180070500(lVar1,2,1);
                  if (cVar5 != '\0') {
                    iVar6 = FUN_18047fe10(*(undefined8 *)(lVar1 + 0x40),0xffffffff);
                    if (iVar6 == 1) {
                      iVar6 = FUN_18047fbf0(*(undefined8 *)(lVar1 + 0x40),0xffffffff);
                      uVar12 = uVar11;
                      if (iVar6 == 0) {
                        uVar12 = 1;
                        uVar11 = 1;
                      }
                    }
                    uVar9 = *(undefined8 *)(lVar1 + 0x40);
                    goto LAB_180072c6b;
                  }
                }
                else {
LAB_180072c6b:
                  FUN_18047fb50(uVar9,0xfffffffe);
                }
                puVar13 = puVar13 + 1;
              } while (puVar13 != puVar3);
            }
            FUN_180068f30(&local_68);
            lVar7 = DAT_180ccfa90;
            lVar14 = DAT_180ccfa98;
          }
        }
        local_res20 = local_res20 + 1;
      } while (local_res20 < (ulonglong)(lVar14 - lVar7 >> 3));
    }
    DAT_180ccfa18 = DAT_180ccfa18 + -1;
    DAT_180ccfa78 = uVar4;
    FUN_18006e590();
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return uVar12;
}



