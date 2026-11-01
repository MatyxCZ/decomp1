/* ===== 1800e1070 FUN_1800e1070 ===== */

longlong * FUN_1800e1070(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar2 = DAT_180cd1038;
  uVar3 = DAT_180cd1028;
  if ((ulonglong)param_3[5] < 0x10) {
    plVar6 = param_3 + 2;
  }
  else {
    plVar6 = (longlong *)param_3[2];
  }
  uVar4 = 0;
  uVar5 = 0xcbf29ce484222325;
  if (param_3[4] != 0) {
    do {
      pbVar1 = (byte *)((longlong)plVar6 + uVar4);
      uVar4 = uVar4 + 1;
      uVar5 = (uVar5 ^ *pbVar1) * 0x100000001b3;
    } while (uVar4 < (ulonglong)param_3[4]);
  }
  uVar5 = DAT_180cd1050 & uVar5;
  plVar6 = *(longlong **)(DAT_180cd1038 + uVar5 * 0x10);
  if (*(longlong **)(DAT_180cd1038 + 8 + uVar5 * 0x10) == param_3) {
    if (plVar6 == param_3) {
      *(undefined8 *)(DAT_180cd1038 + uVar5 * 0x10) = DAT_180cd1028;
      *(undefined8 *)(lVar2 + 8 + uVar5 * 0x10) = uVar3;
    }
    else {
      *(longlong *)(DAT_180cd1038 + 8 + uVar5 * 0x10) = param_3[1];
    }
  }
  else if (plVar6 == param_3) {
    *(longlong *)(DAT_180cd1038 + uVar5 * 0x10) = *param_3;
  }
  lVar2 = *param_3;
  DAT_180cd1030 = DAT_180cd1030 + -1;
  *(longlong *)param_3[1] = lVar2;
  *(longlong *)(lVar2 + 8) = param_3[1];
  FUN_18000f890(param_3 + 2);
  thunk_FUN_1803d64e0(param_3,0x40);
  *param_2 = lVar2;
  return param_2;
}



/* ===== 1800e1170 FUN_1800e1170 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_1800e1170(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  undefined8 *puVar6;
  ulonglong uVar7;
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
  FUN_1800268a0(&DAT_180ca0de0,&local_58,param_3,uVar7);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180ca0df0 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x38);
  FUN_180024b50(puVar4 + 2,param_3);
  puVar4[6] = *param_4;
  if (_DAT_180ca0de0 < (float)(DAT_180ca0df0 + 1) / (float)DAT_180ca0e18) {
    FUN_1800280b0(&DAT_180ca0de0);
    puVar6 = *(undefined8 **)(DAT_180ca0df8 + 8 + (DAT_180ca0e10 & uVar7) * 0x10);
    local_58 = DAT_180ca0de8;
    if (puVar6 != DAT_180ca0de8) {
      puVar1 = *(undefined8 **)(DAT_180ca0df8 + (DAT_180ca0e10 & uVar7) * 0x10);
      uVar5 = puVar4[5];
      _Size = puVar4[4];
      local_58 = puVar6;
      while( true ) {
        puVar6 = local_58 + 2;
        if (0xf < (ulonglong)local_58[5]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        if (uVar5 < 0x10) {
          _Buf1 = puVar4 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar4[2];
        }
        if ((_Size == local_58[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar6,_Size), iVar3 == 0)))) break;
        if (local_58 == puVar1) goto LAB_1800e135f;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_1800e135f:
  puVar6 = (undefined8 *)local_58[1];
  DAT_180ca0df0 = DAT_180ca0df0 + 1;
  *puVar4 = local_58;
  puVar4[1] = puVar6;
  *puVar6 = puVar4;
  local_58[1] = puVar4;
  lVar2 = DAT_180ca0df8;
  uVar7 = DAT_180ca0e10 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180ca0df8 + uVar7 * 0x10);
  if (puVar1 == DAT_180ca0de8) {
    *(undefined8 **)(DAT_180ca0df8 + uVar7 * 0x10) = puVar4;
  }
  else {
    if (puVar1 == local_58) {
      *(undefined8 **)(DAT_180ca0df8 + uVar7 * 0x10) = puVar4;
      goto LAB_1800e13b9;
    }
    if (*(undefined8 **)(DAT_180ca0df8 + 8 + uVar7 * 0x10) != puVar6) goto LAB_1800e13b9;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar4;
LAB_1800e13b9:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1800e13f0 FUN_1800e13f0 ===== */

void FUN_1800e13f0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_18000f890(puVar1 + 2);
    thunk_FUN_1803d64e0(puVar1,0x40);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x40);
  return;
}



/* ===== 1800e1460 FUN_1800e1460 ===== */

longlong * FUN_1800e1460(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  undefined4 uVar11;
  longlong local_48;
  longlong lStack_40;
  undefined8 *local_38;
  longlong *local_30;
  
  if ((ulonglong)param_3[3] < 0x10) {
    puVar7 = param_3;
  }
  else {
    puVar7 = (undefined8 *)*param_3;
  }
  uVar9 = 0xcbf29ce484222325;
  uVar4 = 0;
  if (param_3[2] != 0) {
    do {
      uVar9 = (uVar9 ^ *(byte *)(uVar4 + (longlong)puVar7)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)param_3[2]);
  }
  FUN_1800e16c0(uVar4,&local_48,param_3,uVar9);
  if (lStack_40 != 0) {
    *param_2 = lStack_40;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180cd1030 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  local_38 = &DAT_180cd1028;
  local_30 = (longlong *)0x0;
  plVar2 = (longlong *)FUN_1804ecaa0(0x40);
  local_30 = plVar2;
  FUN_180024b50(plVar2 + 2,param_3);
  plVar2[6] = 0;
  plVar2[7] = 0;
  uVar4 = DAT_180cd1058;
  if (DAT_180cd1020 < (float)(DAT_180cd1030 + 1) / (float)DAT_180cd1058) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180cd1030 + 1) / DAT_180cd1020);
    lVar5 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar5)) {
      uVar6 = (longlong)fVar10 + lVar5;
    }
    uVar8 = uVar4;
    if ((uVar4 < uVar6) && ((0x1ff < uVar4 || (uVar8 = uVar4 * 8, uVar4 * 8 < uVar6)))) {
      uVar8 = uVar6;
    }
    uVar11 = FUN_1800e17e0(uVar6,uVar8);
    plVar3 = (longlong *)FUN_1800e16c0(uVar11,&local_38,plVar2 + 2,uVar9);
    local_48 = *plVar3;
  }
  plVar3 = *(longlong **)(local_48 + 8);
  DAT_180cd1030 = DAT_180cd1030 + 1;
  *plVar2 = local_48;
  plVar2[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar2;
  *(longlong **)(local_48 + 8) = plVar2;
  lVar1 = DAT_180cd1038;
  uVar9 = DAT_180cd1050 & uVar9;
  lVar5 = *(longlong *)(DAT_180cd1038 + uVar9 * 0x10);
  if (lVar5 == DAT_180cd1028) {
    *(longlong **)(DAT_180cd1038 + uVar9 * 0x10) = plVar2;
  }
  else {
    if (lVar5 == local_48) {
      *(longlong **)(DAT_180cd1038 + uVar9 * 0x10) = plVar2;
      goto LAB_1800e1699;
    }
    if (*(longlong **)(DAT_180cd1038 + 8 + uVar9 * 0x10) != plVar3) goto LAB_1800e1699;
  }
  *(longlong **)(lVar1 + 8 + uVar9 * 0x10) = plVar2;
LAB_1800e1699:
  *param_2 = (longlong)plVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1800e16c0 FUN_1800e16c0 ===== */

undefined8 *
FUN_1800e16c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(DAT_180cd1038 + 8 + (DAT_180cd1050 & param_4) * 0x10);
  if (puVar4 == DAT_180cd1028) {
    *param_2 = DAT_180cd1028;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = *(undefined8 **)(DAT_180cd1038 + (DAT_180cd1050 & param_4) * 0x10);
  _Size = param_3[2];
  uVar2 = param_3[3];
  while( true ) {
    _Buf2 = puVar4 + 2;
    if (0xf < (ulonglong)puVar4[5]) {
      _Buf2 = (undefined8 *)*_Buf2;
    }
    if (uVar2 < 0x10) {
      _Buf1 = param_3;
    }
    else {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == puVar4[4]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0))))
    break;
    if (puVar4 == puVar1) {
      *param_2 = puVar4;
      param_2[1] = 0;
      return param_2;
    }
    puVar4 = (undefined8 *)puVar4[1];
  }
  *param_2 = *puVar4;
  param_2[1] = puVar4;
  return param_2;
}



/* ===== 1800e17a0 FUN_1800e17a0 ===== */

void FUN_1800e17a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18000f890(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x40);
  return;
}



/* ===== 1800e17e0 FUN_1800e17e0 ===== */

void FUN_1800e17e0(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong _Size;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  
  plVar9 = DAT_180cd1028;
  for (lVar17 = 0x3f; 0xfffffffffffffffU >> lVar17 == 0; lVar17 = lVar17 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar17 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar11 = param_2 - 1 | 1;
  lVar17 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
  }
  bVar13 = (char)lVar17 + 1;
  lVar17 = 1L << (bVar13 & 0x3f);
  FUN_180029d30(&DAT_180cd1038,2L << (bVar13 & 0x3f),DAT_180cd1028);
  DAT_180cd1050 = lVar17 - 1;
  DAT_180cd1058 = lVar17;
  plVar8 = (longlong *)*DAT_180cd1028;
joined_r0x0001800e186a:
  do {
    while( true ) {
      if (plVar8 == plVar9) {
        return;
      }
      uVar11 = plVar8[5];
      plVar18 = plVar8 + 2;
      plVar3 = (longlong *)*plVar8;
      _Size = plVar8[4];
      uVar12 = 0xcbf29ce484222325;
      if (0xf < uVar11) {
        plVar18 = (longlong *)plVar8[2];
      }
      uVar15 = 0;
      if (_Size != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar18 + uVar15);
          uVar15 = uVar15 + 1;
          uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
        } while (uVar15 < _Size);
      }
      uVar12 = uVar12 & DAT_180cd1050;
      plVar18 = *(longlong **)(DAT_180cd1038 + uVar12 * 0x10);
      puVar2 = (undefined8 *)(DAT_180cd1038 + uVar12 * 0x10);
      lVar17 = DAT_180cd1038 + uVar12 * 0x10;
      if (plVar18 != plVar9) break;
      *puVar2 = plVar8;
      *(longlong **)(lVar17 + 8) = plVar8;
      plVar8 = plVar3;
    }
    plVar4 = *(longlong **)(lVar17 + 8);
    plVar16 = plVar4 + 2;
    if (0xf < (ulonglong)plVar4[5]) {
      plVar16 = (longlong *)*plVar16;
    }
    plVar14 = plVar8 + 2;
    if (0xf < uVar11) {
      plVar14 = (longlong *)plVar8[2];
    }
    if (_Size != plVar4[4]) {
joined_r0x0001800e1973:
      while (plVar18 != plVar4) {
        plVar4 = (longlong *)plVar4[1];
        plVar16 = plVar4 + 2;
        if (0xf < (ulonglong)plVar4[5]) {
          plVar16 = (longlong *)*plVar16;
        }
        if (uVar11 < 0x10) {
          plVar14 = plVar8 + 2;
        }
        else {
          plVar14 = (longlong *)plVar8[2];
        }
        if (_Size == plVar4[4]) {
          if ((_Size == 0) || (iVar10 = memcmp(plVar14,plVar16,_Size), iVar10 == 0)) {
            lVar17 = *plVar4;
            puVar2 = (undefined8 *)plVar8[1];
            *puVar2 = plVar3;
            plVar18 = (longlong *)plVar3[1];
            *plVar18 = lVar17;
            puVar5 = *(undefined8 **)(lVar17 + 8);
            *puVar5 = plVar8;
            *(longlong **)(lVar17 + 8) = plVar18;
            plVar3[1] = (longlong)puVar2;
            plVar8[1] = (longlong)puVar5;
            plVar8 = plVar3;
            goto joined_r0x0001800e186a;
          }
          uVar11 = plVar8[5];
        }
      }
      puVar5 = (undefined8 *)plVar8[1];
      *puVar5 = plVar3;
      puVar6 = (undefined8 *)plVar3[1];
      *puVar6 = plVar4;
      puVar7 = (undefined8 *)plVar4[1];
      *puVar7 = plVar8;
      plVar4[1] = (longlong)puVar6;
      plVar3[1] = (longlong)puVar5;
      plVar8[1] = (longlong)puVar7;
      *puVar2 = plVar8;
      plVar8 = plVar3;
      goto joined_r0x0001800e186a;
    }
    if ((_Size != 0) && (iVar10 = memcmp(plVar14,plVar16,_Size), iVar10 != 0)) {
      uVar11 = plVar8[5];
      goto joined_r0x0001800e1973;
    }
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != plVar8) {
      puVar2 = (undefined8 *)plVar8[1];
      *puVar2 = plVar3;
      puVar5 = (undefined8 *)plVar3[1];
      *puVar5 = plVar4;
      puVar6 = (undefined8 *)plVar4[1];
      *puVar6 = plVar8;
      plVar4[1] = (longlong)puVar5;
      plVar3[1] = (longlong)puVar2;
      plVar8[1] = (longlong)puVar6;
    }
    *(longlong **)(lVar17 + 8) = plVar8;
    plVar8 = plVar3;
  } while( true );
}



/* ===== 1800e1a60 FUN_1800e1a60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e1a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ULONGLONG UVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined1 local_1a8 [384];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180540170(local_1a8,0,0x180);
  puVar1 = (ulonglong *)FUN_180013640();
  local_1b8 = 0;
  local_1b0 = &local_res10;
  FUN_180501904(*puVar1 | 2,local_1a8,0x180,param_1);
  UVar2 = GetTickCount64();
  FUN_1802b2870("wl_preview.log","[%llu] scene | %s\n",UVar2,local_1a8);
  return;
}



/* ===== 1800e1b20 FUN_1800e1b20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800e1b20(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_a8;
  local_80 = param_1;
  uVar4 = FUN_18004e4f0(local_38,*(undefined8 *)(param_2 + 0x60));
  uVar5 = FUN_180066a20(local_58,"WlSceneHost",param_2);
  puVar6 = (undefined4 *)FUN_1800134a0(uVar5,&DAT_1806eaf48,1);
  local_78 = *puVar6;
  uStack_74 = puVar6[1];
  uStack_70 = puVar6[2];
  uStack_6c = puVar6[3];
  local_68 = puVar6[4];
  uStack_64 = puVar6[5];
  uStack_60 = puVar6[6];
  uStack_5c = puVar6[7];
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 6) = 0xf;
  *(undefined1 *)puVar6 = 0;
  FUN_18000f890(local_58);
  FUN_180066820(param_1,&local_78,uVar4);
  uVar3 = CONCAT44(uStack_5c,uStack_60);
  if (0xf < uVar3) {
    uVar8 = uVar3 + 1;
    lVar2 = CONCAT44(uStack_74,local_78);
    lVar7 = lVar2;
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar7) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar8 = uVar3 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar7,uVar8);
  }
  FUN_18000f890(local_38);
  return param_1;
}



/* ===== 1800e1c40 FUN_1800e1c40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800e1c40(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_118;
  local_f0 = param_1;
  uVar4 = FUN_18003a390(local_48,param_3);
  uVar5 = FUN_18004e4f0(local_68,*(undefined8 *)(param_2 + 0x60));
  uVar6 = FUN_180066a20(local_88,"WlScene",param_2);
  puVar7 = (undefined4 *)FUN_1800134a0(uVar6,&DAT_1806eaf48,1);
  local_c8 = *puVar7;
  uStack_c4 = puVar7[1];
  uStack_c0 = puVar7[2];
  uStack_bc = puVar7[3];
  local_b8 = puVar7[4];
  uStack_b4 = puVar7[5];
  uStack_b0 = puVar7[6];
  uStack_ac = puVar7[7];
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0xf;
  *(undefined1 *)puVar7 = 0;
  uVar5 = FUN_180066820(local_a8,&local_c8,uVar5);
  puVar7 = (undefined4 *)FUN_1800134a0(uVar5,&DAT_1806f1df0,1);
  local_e8 = *puVar7;
  uStack_e4 = puVar7[1];
  uStack_e0 = puVar7[2];
  uStack_dc = puVar7[3];
  local_d8 = puVar7[4];
  uStack_d4 = puVar7[5];
  uStack_d0 = puVar7[6];
  uStack_cc = puVar7[7];
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0xf;
  *(undefined1 *)puVar7 = 0;
  FUN_180066820(param_1,&local_e8,uVar4);
  uVar3 = CONCAT44(uStack_cc,uStack_d0);
  if (0xf < uVar3) {
    uVar9 = uVar3 + 1;
    lVar2 = CONCAT44(uStack_e4,local_e8);
    lVar8 = lVar2;
    if (0xfff < uVar9) {
      lVar8 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar8) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        goto LAB_1800e1e1a;
      }
      uVar9 = uVar3 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar8,uVar9);
  }
  FUN_18000f890(local_a8);
  uVar3 = CONCAT44(uStack_ac,uStack_b0);
  if (0xf < uVar3) {
    uVar9 = uVar3 + 1;
    lVar2 = CONCAT44(uStack_c4,local_c8);
    lVar8 = lVar2;
    if (0xfff < uVar9) {
      lVar8 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar8) - 8U) {
LAB_1800e1e1a:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar9 = uVar3 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar8,uVar9);
  }
  FUN_18000f890(local_88);
  FUN_18000f890(local_68);
  FUN_18000f890(local_48);
  return param_1;
}



/* ===== 1800e1e30 FUN_1800e1e30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800e1e30(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  ulonglong local_a8 [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_b0 = param_1;
  uVar3 = FUN_18003a390(local_48,param_3);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  sVar4 = strlen("wl_scene_");
  FUN_1800133a0(local_a8,"wl_scene_",sVar4);
  uVar5 = FUN_1800667a0(local_68,local_a8,param_2);
  puVar6 = (undefined4 *)FUN_1800134a0(uVar5,&DAT_1806e64f8,1);
  local_88 = *puVar6;
  uStack_84 = puVar6[1];
  uStack_80 = puVar6[2];
  uStack_7c = puVar6[3];
  local_78 = puVar6[4];
  uStack_74 = puVar6[5];
  uStack_70 = puVar6[6];
  uStack_6c = puVar6[7];
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 6) = 0xf;
  *(undefined1 *)puVar6 = 0;
  FUN_180066820(param_1,&local_88,uVar3);
  uVar8 = CONCAT44(uStack_6c,uStack_70);
  if (0xf < uVar8) {
    uVar9 = uVar8 + 1;
    lVar2 = CONCAT44(uStack_84,local_88);
    lVar7 = lVar2;
    if (0xfff < uVar9) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar7) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        goto LAB_1800e1fcc;
      }
      uVar9 = uVar8 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar7,uVar9);
  }
  FUN_18000f890(local_68);
  if (0xf < local_a8[3]) {
    uVar9 = local_a8[3] + 1;
    uVar8 = local_a8[0];
    if (0xfff < uVar9) {
      uVar8 = *(ulonglong *)(local_a8[0] - 8);
      if (0x1f < (local_a8[0] - uVar8) - 8) {
LAB_1800e1fcc:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      uVar9 = local_a8[3] + 0x28;
    }
    thunk_FUN_1803d64e0(uVar8,uVar9);
  }
  local_a8[2] = 0;
  local_a8[3] = 0xf;
  local_a8[0] = local_a8[0] & 0xffffffffffffff00;
  FUN_18000f890(local_48);
  return param_1;
}



/* ===== 1800e1fe0 FUN_1800e1fe0 ===== */

void FUN_1800e1fe0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_1809ebd60);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebdac == 0x7fffffff) {
    DAT_1809ebdac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180cd10a0 == DAT_180cd10a8) {
    FUN_1800e5600();
  }
  else {
    FUN_1800e5d20(DAT_180cd10a0,param_1);
    DAT_180cd10a0 = DAT_180cd10a0 + 0xc0;
  }
  FUN_1804e4e90(&DAT_1809ebd60);
  return;
}



/* ===== 1800e2080 FUN_1800e2080 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e2080(longlong param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint7 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  size_t sVar21;
  undefined *puVar22;
  undefined8 uVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined *unaff_RBX;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  uint *puVar32;
  longlong lVar33;
  longlong lVar34;
  undefined8 *puVar35;
  uint uVar36;
  ulonglong uVar37;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [24];
  longlong local_298;
  uint *local_288;
  undefined1 local_280;
  undefined7 uStack_27f;
  undefined8 uStack_278;
  ulonglong local_270;
  ulonglong uStack_268;
  undefined1 local_260 [16];
  undefined1 local_250 [16];
  uint local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 local_230;
  undefined8 uStack_228;
  uint local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 local_210;
  undefined8 uStack_208;
  uint local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  uint local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  uint local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 local_160 [40];
  undefined1 local_138 [64];
  longlong local_f8 [7];
  longlong *local_c0;
  undefined1 local_b8 [64];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_2b8;
  FUN_1800d2370(local_138,2);
  local_c0 = (longlong *)0x0;
  FUN_1800d2370(local_b8,2);
  puVar28 = auStack_2b8;
  puVar29 = auStack_2b8;
  uVar37 = 0;
  do {
    local_280 = 0;
    uStack_27f = 0;
    uStack_278 = 0;
    local_270 = 0;
    uStack_268 = 0;
    sVar21 = strlen(
                   "\n(function () {\n    var root = $.GetContextPanel();\n    while (root && root.GetParent && root.GetParent()) root = root.GetParent();\n    if (!root) return;\n\n    try {\n        var children = root.Children();\n        for (var i = 0; i < children.length; i++) {\n            var child = children[i];\n            if (child && child.id && child.id.indexOf(\'$HOSTPREFIX$\') === 0) { try { child.DeleteAsync(0.0); } catch (e) {} }\n        }\n    } catch (e) {}\n\n    var host = $.CreatePanel(\'Panel\', root, \'$HOST$\', {\n        hittest: false,\n        style: \'width: 1px; height: 1px; overflow: clip; opacity: 0.01; z-index: -1000;\'\n    });\n    if (!host) return;\n\n    var width = $W$;\n    var height = $H$;\n    try {\n        var rootWidth = root.actuallayoutwidth / (root.actualuiscale_x || 1);\n        var rootHeight = root.actuallayoutheight / (root.actualuiscale_y || 1);\n        if (!(rootWidth > 0) || !(rootHeight > 0)) {\n            rootWidth = 1920;\n            rootHeight = 1080;\n        }\n        {\n            var fit = Math.min(rootWidth / width, rootHeight / height);\n            width = Math.floor(width * fit);\n            height = Math.floor(height * fit);\n        }\n    } catch (e) {}\n\n    var frame = $.CreatePanel(\'Panel\', host, \'$HOST$Frame\', {\n        hittest: false,\n        style: \'width: \' + width + \'px; height: \' + height + \'px;\'\n    });\n    if (!frame) return;\n\n    var panel = null;\n    try {\n$BUILD$\n    } catch (e) {\n        panel = null;\n    }\n    if (!panel) return;\n\n    var tick = 0;\n    var pulse = function () {\n        if (!panel || (panel.IsValid && !panel.IsValid())) return;\n        try {\n            if (panel.SetReadyForDisplay) panel.SetReadyForDisplay(true);\n            panel.style.opacity = (tick % 2) ? \'1.0\' : \'0.999\';\n            tick++;\n        } catch (e) {}\n        $.Schedule(0.25, pulse);\n    };\n    $.Schedule(0.25, pulse);\n})();\n"
                   );
    FUN_1800133a0(&local_280,
                  "\n(function () {\n    var root = $.GetContextPanel();\n    while (root && root.GetParent && root.GetParent()) root = root.GetParent();\n    if (!root) return;\n\n    try {\n        var children = root.Children();\n        for (var i = 0; i < children.length; i++) {\n            var child = children[i];\n            if (child && child.id && child.id.indexOf(\'$HOSTPREFIX$\') === 0) { try { child.DeleteAsync(0.0); } catch (e) {} }\n        }\n    } catch (e) {}\n\n    var host = $.CreatePanel(\'Panel\', root, \'$HOST$\', {\n        hittest: false,\n        style: \'width: 1px; height: 1px; overflow: clip; opacity: 0.01; z-index: -1000;\'\n    });\n    if (!host) return;\n\n    var width = $W$;\n    var height = $H$;\n    try {\n        var rootWidth = root.actuallayoutwidth / (root.actualuiscale_x || 1);\n        var rootHeight = root.actuallayoutheight / (root.actualuiscale_y || 1);\n        if (!(rootWidth > 0) || !(rootHeight > 0)) {\n            rootWidth = 1920;\n            rootHeight = 1080;\n        }\n        {\n            var fit = Math.min(rootWidth / width, rootHeight / height);\n            width = Math.floor(width * fit);\n            height = Math.floor(height * fit);\n        }\n    } catch (e) {}\n\n    var frame = $.CreatePanel(\'Panel\', host, \'$HOST$Frame\', {\n        hittest: false,\n        style: \'width: \' + width + \'px; height: \' + height + \'px;\'\n    });\n    if (!frame) return;\n\n    var panel = null;\n    try {\n$BUILD$\n    } catch (e) {\n        panel = null;\n    }\n    if (!panel) return;\n\n    var tick = 0;\n    var pulse = function () {\n        if (!panel || (panel.IsValid && !panel.IsValid())) return;\n        try {\n            if (panel.SetReadyForDisplay) panel.SetReadyForDisplay(true);\n            panel.style.opacity = (tick % 2) ? \'1.0\' : \'0.999\';\n            tick++;\n        } catch (e) {}\n        $.Schedule(0.25, pulse);\n    };\n    $.Schedule(0.25, pulse);\n})();\n"
                  ,sVar21);
    local_288 = (uint *)&local_280;
    puVar31 = &local_280;
    if (0xf < uStack_268) {
      puVar31 = (undefined1 *)CONCAT71(uStack_27f,local_280);
    }
    if (6 < local_270) {
      unaff_RBX = puVar31 + local_270;
      puVar22 = (undefined *)thunk_FUN_1804e92d0(puVar31,unaff_RBX,"$BUILD$",7);
      if ((puVar22 != unaff_RBX) && (lVar33 = (longlong)puVar22 - (longlong)puVar31, lVar33 != -1))
      {
        while( true ) {
          local_298 = *(longlong *)(param_1 + 0x38);
          if (*(ulonglong *)(param_1 + 0x40) < 0x10) {
            lVar34 = param_1 + 0x28;
          }
          else {
            lVar34 = *(longlong *)(param_1 + 0x28);
          }
          FUN_1800d8750(&local_280,lVar33,7,lVar34);
          puVar31 = &local_280;
          if (0xf < uStack_268) {
            puVar31 = (undefined1 *)CONCAT71(uStack_27f,local_280);
          }
          if ((local_270 < 7) ||
             (uVar26 = *(longlong *)(param_1 + 0x38) + lVar33, local_270 - 7 < uVar26)) break;
          unaff_RBX = puVar31 + local_270;
          puVar22 = (undefined *)thunk_FUN_1804e92d0(puVar31 + uVar26,unaff_RBX,"$BUILD$",7);
          if ((puVar22 == unaff_RBX) ||
             (lVar33 = (longlong)puVar22 - (longlong)puVar31, lVar33 == -1)) break;
        }
      }
    }
    uVar19 = uStack_268;
    uVar18 = local_270;
    puVar31 = (undefined1 *)CONCAT71(uStack_27f,local_280);
    auVar7._8_8_ = uStack_278;
    auVar7._0_8_ = puVar31;
    uVar16 = (uint7)uStack_27f >> 0x18;
    uVar43 = (undefined4)uStack_278;
    uVar26 = (ulonglong)uStack_278 >> 0x20;
    auVar8._8_8_ = uStack_268;
    auVar8._0_8_ = local_270;
    uVar38 = (undefined4)local_270;
    uVar27 = local_270 >> 0x20;
    uVar40 = (undefined4)uStack_268;
    uVar17 = uStack_268 >> 0x20;
    local_270 = 0;
    uStack_268 = 0xf;
    local_280 = 0;
    local_1a0 = auVar7;
    local_190 = auVar8;
    FUN_18000f890(&local_280);
    uVar23 = FUN_180066a20(local_160,"WlSceneHost",param_1);
    plVar24 = (longlong *)FUN_1800134a0(uVar23,&DAT_1806eaf48,1);
    local_180 = (undefined8 *)*plVar24;
    uStack_178 = plVar24[1];
    local_170 = (undefined4)plVar24[2];
    uStack_16c = *(undefined4 *)((longlong)plVar24 + 0x14);
    uStack_168 = (undefined4)plVar24[3];
    uStack_164 = *(undefined4 *)((longlong)plVar24 + 0x1c);
    plVar24[2] = 0;
    plVar24[3] = 0xf;
    *(undefined1 *)plVar24 = 0;
    FUN_18000f890(local_160);
    local_190 = ZEXT816(0xf) << 0x40;
    auVar9[0xf] = 0;
    auVar9._0_15_ = local_1a0._1_15_;
    local_1a0 = auVar9 << 8;
    local_288 = (uint *)local_260;
    puVar30 = local_260;
    if (0xf < uVar19) {
      puVar30 = puVar31;
    }
    uVar39 = (int)uVar27;
    uVar41 = (int)uVar17;
    uVar36 = (uint)puVar31;
    uVar42 = (int)uVar16;
    uVar44 = (int)uVar26;
    local_260 = auVar7;
    if (0xb < uVar18) {
      local_250 = auVar8;
      unaff_RBX = (undefined *)thunk_FUN_1804e92d0(puVar30,puVar30 + uVar18,"$HOSTPREFIX$",0xc);
      if ((unaff_RBX != puVar30 + uVar18) &&
         (unaff_RBX = unaff_RBX + -(longlong)puVar30, unaff_RBX != (undefined *)0xffffffffffffffff))
      {
        lVar33 = CONCAT44(uStack_16c,local_170);
        while( true ) {
          puVar25 = &local_180;
          if (0xf < CONCAT44(uStack_164,uStack_168)) {
            puVar25 = local_180;
          }
          local_298 = lVar33;
          FUN_1800d8750(local_260,unaff_RBX,0xc,puVar25);
          puVar31 = local_260;
          if (0xf < (ulonglong)local_250._8_8_) {
            puVar31 = (undefined1 *)local_260._0_8_;
          }
          if ((ulonglong)local_250._0_8_ < 0xc) break;
          lVar33 = CONCAT44(uStack_16c,local_170);
          if ((((undefined *)(local_250._0_8_ - 0xc) < unaff_RBX + lVar33) ||
              (puVar22 = puVar31 + local_250._0_8_,
              unaff_RBX = (undefined *)
                          thunk_FUN_1804e92d0(puVar31 + (longlong)(unaff_RBX + lVar33),puVar22,
                                              "$HOSTPREFIX$",0xc), unaff_RBX == puVar22)) ||
             (unaff_RBX = unaff_RBX + -(longlong)puVar31,
             unaff_RBX == (undefined *)0xffffffffffffffff)) break;
        }
      }
      uVar38 = local_250._0_4_;
      uVar39 = local_250._4_4_;
      uVar40 = local_250._8_4_;
      uVar41 = local_250._12_4_;
      uVar36 = local_260._0_4_;
      uVar42 = local_260._4_4_;
      uVar43 = local_260._8_4_;
      uVar44 = local_260._12_4_;
    }
    local_250 = ZEXT816(0xf) << 0x40;
    auVar10[0xf] = 0;
    auVar10._0_15_ = local_260._1_15_;
    local_260 = auVar10 << 8;
    FUN_18000f890(local_260);
    local_1a0._4_4_ = uVar42;
    local_1a0._0_4_ = uVar36;
    local_1a0._8_4_ = uVar43;
    local_1a0._12_4_ = uVar44;
    local_190._4_4_ = uVar39;
    local_190._0_4_ = uVar38;
    local_190._8_4_ = uVar40;
    local_190._12_4_ = uVar41;
    uVar26 = CONCAT44(uStack_164,uStack_168);
    if (0xf < uVar26) {
      uVar27 = uVar26 + 1;
      puVar25 = local_180;
      if (uVar27 < 0x1000) {
LAB_1800e240c:
        thunk_FUN_1803d64e0(puVar25,uVar27);
        goto LAB_1800e2411;
      }
      puVar25 = (undefined8 *)local_180[-1];
      if ((ulonglong)((longlong)local_180 + (-8 - (longlong)puVar25)) < 0x20) {
        uVar27 = uVar26 + 0x28;
        goto LAB_1800e240c;
      }
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar28 = auStack_2b0;
LAB_1800e2b68:
      pcVar1 = (code *)swi(0x29);
      lVar33 = (*pcVar1)(5);
      puVar31 = puVar28 + 8;
      uVar23 = extraout_XMM0_Qa_00;
      goto LAB_1800e2b6f;
    }
LAB_1800e2411:
    puVar25 = (undefined8 *)FUN_1800e1b20(local_160,param_1);
    local_230 = CONCAT44(uVar39,uVar38);
    uStack_228 = CONCAT44(uVar41,uVar40);
    local_190 = ZEXT816(0xf) << 0x40;
    auVar11[0xf] = 0;
    auVar11._0_15_ = local_1a0._1_15_;
    local_1a0 = auVar11 << 8;
    local_288 = &local_240;
    auVar2._4_4_ = uVar39;
    auVar2._0_4_ = uVar38;
    auVar2._8_4_ = uVar40;
    auVar2._12_4_ = uVar41;
    puVar32 = &local_240;
    if (0xf < auVar2._8_8_) {
      puVar32 = (uint *)CONCAT44(uVar42,uVar36);
    }
    local_240 = uVar36;
    uStack_23c = uVar42;
    uStack_238 = uVar43;
    uStack_234 = uVar44;
    if (5 < CONCAT44(uVar39,uVar38)) {
      unaff_RBX = (undefined *)(CONCAT44(uVar39,uVar38) + (longlong)puVar32);
      puVar22 = (undefined *)thunk_FUN_1804e92d0(puVar32,unaff_RBX,"$HOST$",6);
      if ((puVar22 != unaff_RBX) && (lVar33 = (longlong)puVar22 - (longlong)puVar32, lVar33 != -1))
      {
        while( true ) {
          local_298 = puVar25[2];
          if ((ulonglong)puVar25[3] < 0x10) {
            puVar35 = puVar25;
          }
          else {
            puVar35 = (undefined8 *)*puVar25;
          }
          FUN_1800d8750(&local_240,lVar33,6,puVar35);
          puVar32 = &local_240;
          if (0xf < uStack_228) {
            puVar32 = (uint *)CONCAT44(uStack_23c,local_240);
          }
          if ((local_230 < 6) || (local_230 - 6 < (ulonglong)(puVar25[2] + lVar33))) break;
          unaff_RBX = (undefined *)(local_230 + (longlong)puVar32);
          puVar22 = (undefined *)
                    thunk_FUN_1804e92d0(puVar25[2] + lVar33 + (longlong)puVar32,unaff_RBX,"$HOST$",6
                                       );
          if ((puVar22 == unaff_RBX) ||
             (lVar33 = (longlong)puVar22 - (longlong)puVar32, lVar33 == -1)) break;
        }
      }
      uVar38 = (undefined4)local_230;
      uVar39 = local_230._4_4_;
      uVar40 = (undefined4)uStack_228;
      uVar41 = uStack_228._4_4_;
    }
    uVar44 = uStack_234;
    uVar42 = uStack_238;
    uVar43 = uStack_23c;
    uVar36 = local_240;
    local_230 = 0;
    uStack_228 = 0xf;
    local_240 = local_240 & 0xffffff00;
    FUN_18000f890(&local_240);
    local_1a0._4_4_ = uVar43;
    local_1a0._0_4_ = uVar36;
    local_1a0._8_4_ = uVar42;
    local_1a0._12_4_ = uVar44;
    local_190._4_4_ = uVar39;
    local_190._0_4_ = uVar38;
    local_190._8_4_ = uVar40;
    local_190._12_4_ = uVar41;
    FUN_18000f890(local_160);
    puVar25 = (undefined8 *)FUN_18003a390(local_160,*(undefined4 *)(param_1 + 0x20));
    local_210 = CONCAT44(uVar39,uVar38);
    uStack_208 = CONCAT44(uVar41,uVar40);
    local_190 = ZEXT816(0xf) << 0x40;
    auVar12[0xf] = 0;
    auVar12._0_15_ = local_1a0._1_15_;
    local_1a0 = auVar12 << 8;
    local_288 = &local_220;
    auVar3._4_4_ = uVar39;
    auVar3._0_4_ = uVar38;
    auVar3._8_4_ = uVar40;
    auVar3._12_4_ = uVar41;
    puVar32 = &local_220;
    if (0xf < auVar3._8_8_) {
      puVar32 = (uint *)CONCAT44(uVar43,uVar36);
    }
    local_220 = uVar36;
    uStack_21c = uVar43;
    uStack_218 = uVar42;
    uStack_214 = uVar44;
    if (2 < CONCAT44(uVar39,uVar38)) {
      unaff_RBX = (undefined *)(CONCAT44(uVar39,uVar38) + (longlong)puVar32);
      puVar22 = (undefined *)thunk_FUN_1804e92d0(puVar32,unaff_RBX,&DAT_1806f1e2c,3);
      if ((puVar22 != unaff_RBX) && (lVar33 = (longlong)puVar22 - (longlong)puVar32, lVar33 != -1))
      {
        while( true ) {
          local_298 = puVar25[2];
          if ((ulonglong)puVar25[3] < 0x10) {
            puVar35 = puVar25;
          }
          else {
            puVar35 = (undefined8 *)*puVar25;
          }
          FUN_1800d8750(&local_220,lVar33,3,puVar35);
          puVar32 = &local_220;
          if (0xf < uStack_208) {
            puVar32 = (uint *)CONCAT44(uStack_21c,local_220);
          }
          if ((local_210 < 3) || (local_210 - 3 < (ulonglong)(puVar25[2] + lVar33))) break;
          unaff_RBX = (undefined *)(local_210 + (longlong)puVar32);
          puVar22 = (undefined *)
                    thunk_FUN_1804e92d0((longlong)puVar32 + puVar25[2] + lVar33,unaff_RBX,
                                        &DAT_1806f1e2c,3);
          if ((puVar22 == unaff_RBX) ||
             (lVar33 = (longlong)puVar22 - (longlong)puVar32, lVar33 == -1)) break;
        }
      }
      uVar38 = (undefined4)local_210;
      uVar39 = local_210._4_4_;
      uVar40 = (undefined4)uStack_208;
      uVar41 = uStack_208._4_4_;
    }
    uVar44 = uStack_214;
    uVar42 = uStack_218;
    uVar43 = uStack_21c;
    uVar36 = local_220;
    local_210 = 0;
    uStack_208 = 0xf;
    local_220 = local_220 & 0xffffff00;
    FUN_18000f890(&local_220);
    local_1a0._4_4_ = uVar43;
    local_1a0._0_4_ = uVar36;
    local_1a0._8_4_ = uVar42;
    local_1a0._12_4_ = uVar44;
    local_190._4_4_ = uVar39;
    local_190._0_4_ = uVar38;
    local_190._8_4_ = uVar40;
    local_190._12_4_ = uVar41;
    FUN_18000f890(local_160);
    puVar25 = (undefined8 *)FUN_18003a390(local_160,*(undefined4 *)(param_1 + 0x24));
    local_1f0 = CONCAT44(uVar39,uVar38);
    uStack_1e8 = CONCAT44(uVar41,uVar40);
    local_190 = ZEXT816(0xf) << 0x40;
    auVar13[0xf] = 0;
    auVar13._0_15_ = local_1a0._1_15_;
    local_1a0 = auVar13 << 8;
    local_288 = &local_200;
    auVar4._4_4_ = uVar39;
    auVar4._0_4_ = uVar38;
    auVar4._8_4_ = uVar40;
    auVar4._12_4_ = uVar41;
    puVar32 = &local_200;
    if (0xf < auVar4._8_8_) {
      puVar32 = (uint *)CONCAT44(uVar43,uVar36);
    }
    local_200 = uVar36;
    uStack_1fc = uVar43;
    uStack_1f8 = uVar42;
    uStack_1f4 = uVar44;
    if (2 < CONCAT44(uVar39,uVar38)) {
      unaff_RBX = (undefined *)(CONCAT44(uVar39,uVar38) + (longlong)puVar32);
      puVar22 = (undefined *)thunk_FUN_1804e92d0(puVar32,unaff_RBX,&DAT_1806f1e7c,3);
      if ((puVar22 != unaff_RBX) && (lVar33 = (longlong)puVar22 - (longlong)puVar32, lVar33 != -1))
      {
        while( true ) {
          local_298 = puVar25[2];
          if ((ulonglong)puVar25[3] < 0x10) {
            puVar35 = puVar25;
          }
          else {
            puVar35 = (undefined8 *)*puVar25;
          }
          FUN_1800d8750(&local_200,lVar33,3,puVar35);
          puVar32 = &local_200;
          if (0xf < uStack_1e8) {
            puVar32 = (uint *)CONCAT44(uStack_1fc,local_200);
          }
          if ((local_1f0 < 3) || (local_1f0 - 3 < (ulonglong)(puVar25[2] + lVar33))) break;
          unaff_RBX = (undefined *)(local_1f0 + (longlong)puVar32);
          puVar22 = (undefined *)
                    thunk_FUN_1804e92d0((longlong)puVar32 + puVar25[2] + lVar33,unaff_RBX,
                                        &DAT_1806f1e7c,3);
          if ((puVar22 == unaff_RBX) ||
             (lVar33 = (longlong)puVar22 - (longlong)puVar32, lVar33 == -1)) break;
        }
      }
      uVar38 = (undefined4)local_1f0;
      uVar39 = local_1f0._4_4_;
      uVar40 = (undefined4)uStack_1e8;
      uVar41 = uStack_1e8._4_4_;
    }
    uVar44 = uStack_1f4;
    uVar42 = uStack_1f8;
    uVar43 = uStack_1fc;
    uVar36 = local_200;
    local_1f0 = 0;
    uStack_1e8 = 0xf;
    local_200 = local_200 & 0xffffff00;
    FUN_18000f890(&local_200);
    local_1a0._4_4_ = uVar43;
    local_1a0._0_4_ = uVar36;
    local_1a0._8_4_ = uVar42;
    local_1a0._12_4_ = uVar44;
    local_190._4_4_ = uVar39;
    local_190._0_4_ = uVar38;
    local_190._8_4_ = uVar40;
    local_190._12_4_ = uVar41;
    FUN_18000f890(local_160);
    puVar25 = (undefined8 *)FUN_1800e1c40(local_160,param_1,uVar37);
    local_1d0 = CONCAT44(uVar39,uVar38);
    uStack_1c8 = CONCAT44(uVar41,uVar40);
    local_190 = ZEXT816(0xf) << 0x40;
    auVar14[0xf] = 0;
    auVar14._0_15_ = local_1a0._1_15_;
    local_1a0 = auVar14 << 8;
    local_288 = &local_1e0;
    auVar5._4_4_ = uVar39;
    auVar5._0_4_ = uVar38;
    auVar5._8_4_ = uVar40;
    auVar5._12_4_ = uVar41;
    puVar32 = &local_1e0;
    if (0xf < auVar5._8_8_) {
      puVar32 = (uint *)CONCAT44(uVar43,uVar36);
    }
    local_1e0 = uVar36;
    uStack_1dc = uVar43;
    uStack_1d8 = uVar42;
    uStack_1d4 = uVar44;
    if (6 < CONCAT44(uVar39,uVar38)) {
      unaff_RBX = (undefined *)(CONCAT44(uVar39,uVar38) + (longlong)puVar32);
      puVar22 = (undefined *)thunk_FUN_1804e92d0(puVar32,unaff_RBX,"$PANEL$",7);
      if ((puVar22 != unaff_RBX) && (lVar33 = (longlong)puVar22 - (longlong)puVar32, lVar33 != -1))
      {
        while( true ) {
          local_298 = puVar25[2];
          if ((ulonglong)puVar25[3] < 0x10) {
            puVar35 = puVar25;
          }
          else {
            puVar35 = (undefined8 *)*puVar25;
          }
          FUN_1800d8750(&local_1e0,lVar33,7,puVar35);
          puVar32 = &local_1e0;
          if (0xf < uStack_1c8) {
            puVar32 = (uint *)CONCAT44(uStack_1dc,local_1e0);
          }
          if ((local_1d0 < 7) || (local_1d0 - 7 < (ulonglong)(puVar25[2] + lVar33))) break;
          unaff_RBX = (undefined *)(local_1d0 + (longlong)puVar32);
          puVar22 = (undefined *)
                    thunk_FUN_1804e92d0((longlong)puVar32 + puVar25[2] + lVar33,unaff_RBX,"$PANEL$",
                                        7);
          if ((puVar22 == unaff_RBX) ||
             (lVar33 = (longlong)puVar22 - (longlong)puVar32, lVar33 == -1)) break;
        }
      }
      uVar38 = (undefined4)local_1d0;
      uVar39 = local_1d0._4_4_;
      uVar40 = (undefined4)uStack_1c8;
      uVar41 = uStack_1c8._4_4_;
    }
    uVar44 = uStack_1d4;
    uVar42 = uStack_1d8;
    uVar43 = uStack_1dc;
    uVar36 = local_1e0;
    local_1d0 = 0;
    uStack_1c8 = 0xf;
    local_1e0 = local_1e0 & 0xffffff00;
    FUN_18000f890(&local_1e0);
    local_1a0._4_4_ = uVar43;
    local_1a0._0_4_ = uVar36;
    local_1a0._8_4_ = uVar42;
    local_1a0._12_4_ = uVar44;
    local_190._4_4_ = uVar39;
    local_190._0_4_ = uVar38;
    local_190._8_4_ = uVar40;
    local_190._12_4_ = uVar41;
    FUN_18000f890(local_160);
    puVar25 = (undefined8 *)FUN_1800e1e30(local_160,param_1,uVar37);
    local_1b0 = CONCAT44(uVar39,uVar38);
    uStack_1a8 = CONCAT44(uVar41,uVar40);
    local_190 = ZEXT816(0xf) << 0x40;
    auVar15[0xf] = 0;
    auVar15._0_15_ = local_1a0._1_15_;
    local_1a0 = auVar15 << 8;
    local_288 = &local_1c0;
    auVar6._4_4_ = uVar39;
    auVar6._0_4_ = uVar38;
    auVar6._8_4_ = uVar40;
    auVar6._12_4_ = uVar41;
    puVar32 = &local_1c0;
    if (0xf < auVar6._8_8_) {
      puVar32 = (uint *)CONCAT44(uVar43,uVar36);
    }
    local_1c0 = uVar36;
    uStack_1bc = uVar43;
    uStack_1b8 = uVar42;
    uStack_1b4 = uVar44;
    if (6 < CONCAT44(uVar39,uVar38)) {
      unaff_RBX = (undefined *)(CONCAT44(uVar39,uVar38) + (longlong)puVar32);
      puVar22 = (undefined *)thunk_FUN_1804e92d0(puVar32,unaff_RBX,"$LAYER$",7);
      if ((puVar22 != unaff_RBX) && (lVar33 = (longlong)puVar22 - (longlong)puVar32, lVar33 != -1))
      {
        while( true ) {
          local_298 = puVar25[2];
          if ((ulonglong)puVar25[3] < 0x10) {
            puVar35 = puVar25;
          }
          else {
            puVar35 = (undefined8 *)*puVar25;
          }
          FUN_1800d8750(&local_1c0,lVar33,7,puVar35);
          puVar32 = &local_1c0;
          if (0xf < uStack_1a8) {
            puVar32 = (uint *)CONCAT44(uStack_1bc,local_1c0);
          }
          if ((local_1b0 < 7) || (local_1b0 - 7 < (ulonglong)(puVar25[2] + lVar33))) break;
          unaff_RBX = (undefined *)(local_1b0 + (longlong)puVar32);
          puVar22 = (undefined *)
                    thunk_FUN_1804e92d0((longlong)puVar32 + puVar25[2] + lVar33,unaff_RBX,"$LAYER$",
                                        7);
          if ((puVar22 == unaff_RBX) ||
             (lVar33 = (longlong)puVar22 - (longlong)puVar32, lVar33 == -1)) break;
        }
      }
      uVar38 = (undefined4)local_1b0;
      uVar39 = local_1b0._4_4_;
      uVar40 = (undefined4)uStack_1a8;
      uVar41 = uStack_1a8._4_4_;
    }
    local_180 = (undefined8 *)CONCAT44(uStack_1bc,local_1c0);
    uStack_178 = CONCAT44(uStack_1b4,uStack_1b8);
    local_1b0 = 0;
    uStack_1a8 = 0xf;
    local_1c0 = local_1c0 & 0xffffff00;
    local_170 = uVar38;
    uStack_16c = uVar39;
    uStack_168 = uVar40;
    uStack_164 = uVar41;
    FUN_18000f890(&local_1c0);
    FUN_18002ba60(local_138 + uVar37 * 0x20,&local_180);
    uVar26 = CONCAT44(uStack_164,uStack_168);
    if (0xf < uVar26) {
      uVar27 = uVar26 + 1;
      puVar25 = local_180;
      if (0xfff < uVar27) {
        puVar25 = (undefined8 *)local_180[-1];
        if (0x1f < (ulonglong)((longlong)local_180 + (-8 - (longlong)puVar25))) goto LAB_1800e2b68;
        uVar27 = uVar26 + 0x28;
      }
      thunk_FUN_1803d64e0(puVar25,uVar27);
    }
    FUN_18000f890(local_160);
    uVar36 = (int)uVar37 + 1;
    uVar37 = (ulonglong)uVar36;
  } while ((int)uVar36 < 2);
  unaff_RBX = &DAT_1809ebd60;
  local_288 = (uint *)&DAT_1809ebd60;
  iVar20 = FUN_1804e4d70(&DAT_1809ebd60);
  if (iVar20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebdac == 0x7fffffff) {
    DAT_1809ebdac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar33 = DAT_180cd10a0;
  puVar31 = auStack_2b8;
  uVar23 = extraout_XMM0_Qa;
  if (DAT_180cd10a0 == DAT_180cd10a8) {
LAB_1800e2b6f:
    puVar29 = puVar31;
    *(undefined8 *)(puVar29 + -8) = 0x1800e2b7e;
    FUN_1800e5600(uVar23,lVar33,local_138);
  }
  else {
    FUN_1800e5d20(DAT_180cd10a0,local_138);
    DAT_180cd10a0 = DAT_180cd10a0 + 0xc0;
  }
  *(undefined8 *)(puVar29 + -8) = 0x1800e2b87;
  FUN_1804e4e90(unaff_RBX);
  *(undefined8 *)(puVar29 + -8) = 0x1800e2ba6;
  FUN_1804eced0(local_b8,0x20,2,thunk_FUN_18000f890);
  if (local_c0 != (longlong *)0x0) {
    pcVar1 = *(code **)(*local_c0 + 0x20);
    *(undefined8 *)(puVar29 + -8) = 0x1800e2bc5;
    (*pcVar1)(local_c0,local_c0 != local_f8);
    local_c0 = (longlong *)0x0;
  }
  *(undefined8 *)(puVar29 + -8) = 0x1800e2bea;
  FUN_1804eced0(local_138,0x20,2,thunk_FUN_18000f890);
  *(undefined8 *)(puVar29 + -8) = 0x1800e2bfa;
  return;
}



/* ===== 1800e2c40 FUN_1800e2c40 ===== */

void FUN_1800e2c40(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1804eced0(param_1 + 0x80,0x20,2,thunk_FUN_18000f890);
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  FUN_1804eced0(param_1,0x20,2,thunk_FUN_18000f890);
  return;
}



/* ===== 1800e2cb0 FUN_1800e2cb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e2cb0(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  size_t sVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined *unaff_RBX;
  undefined1 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar15;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 *local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 local_140 [40];
  undefined1 local_118 [64];
  longlong local_d8 [7];
  longlong *local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  FUN_1800d2370(local_118,2);
  local_a0 = (longlong *)0x0;
  FUN_1800d2370(local_98,2);
  puVar11 = auStack_1b8;
  uVar14 = 0;
  do {
    puVar7 = (undefined8 *)FUN_1800e1b20(local_140,param_1);
    local_188 = (undefined8 *)0x0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    sVar8 = strlen(
                  "\n(function () {\n    var root = $.GetContextPanel();\n    while (root && root.GetParent && root.GetParent()) root = root.GetParent();\n    if (!root) return;\n    var host = root.FindChildTraverse(\'$HOST$\');\n    if (host) { try { host.DeleteAsync(0.0); } catch (e) {} }\n})();\n"
                  );
    FUN_1800133a0(&local_188,
                  "\n(function () {\n    var root = $.GetContextPanel();\n    while (root && root.GetParent && root.GetParent()) root = root.GetParent();\n    if (!root) return;\n    var host = root.FindChildTraverse(\'$HOST$\');\n    if (host) { try { host.DeleteAsync(0.0); } catch (e) {} }\n})();\n"
                  ,sVar8);
    local_168 = &local_188;
    puVar12 = &local_188;
    if (0xf < uStack_170) {
      puVar12 = local_188;
    }
    if (5 < local_178) {
      puVar1 = (undefined *)(local_178 + (longlong)puVar12);
      unaff_RBX = (undefined *)thunk_FUN_1804e92d0(puVar12,puVar1,"$HOST$",6);
      if ((unaff_RBX != puVar1) &&
         (unaff_RBX = unaff_RBX + -(longlong)puVar12, unaff_RBX != (undefined *)0xffffffffffffffff))
      {
        while( true ) {
          local_198 = puVar7[2];
          if ((ulonglong)puVar7[3] < 0x10) {
            puVar12 = puVar7;
          }
          else {
            puVar12 = (undefined8 *)*puVar7;
          }
          FUN_1800d8750(&local_188,unaff_RBX,6,puVar12);
          puVar12 = &local_188;
          if (0xf < uStack_170) {
            puVar12 = local_188;
          }
          if ((local_178 < 6) || ((undefined *)(local_178 - 6) < unaff_RBX + puVar7[2])) break;
          puVar1 = (undefined *)(local_178 + (longlong)puVar12);
          unaff_RBX = (undefined *)
                      thunk_FUN_1804e92d0((undefined *)
                                          ((longlong)puVar12 + (longlong)(unaff_RBX + puVar7[2])),
                                          puVar1,"$HOST$",6);
          if ((unaff_RBX == puVar1) ||
             (unaff_RBX = unaff_RBX + -(longlong)puVar12,
             unaff_RBX == (undefined *)0xffffffffffffffff)) break;
        }
      }
    }
    local_160 = (undefined4)local_188;
    uStack_15c = local_188._4_4_;
    uStack_158 = (undefined4)uStack_180;
    uStack_154 = uStack_180._4_4_;
    local_150 = (undefined4)local_178;
    uStack_14c = local_178._4_4_;
    uStack_148 = (undefined4)uStack_170;
    uStack_144 = uStack_170._4_4_;
    local_178 = 0;
    uStack_170 = 0xf;
    local_188 = (undefined8 *)((ulonglong)local_188 & 0xffffffffffffff00);
    FUN_18000f890(&local_188);
    FUN_18002ba60(local_118 + uVar14 * 0x20,&local_160);
    uVar4 = CONCAT44(uStack_144,uStack_148);
    if (0xf < uVar4) {
      uVar10 = uVar4 + 1;
      lVar3 = CONCAT44(uStack_15c,local_160);
      lVar9 = lVar3;
      if (0xfff < uVar10) {
        lVar9 = *(longlong *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar9) - 8U) {
          pcVar2 = (code *)swi(0x29);
          lVar9 = (*pcVar2)(5);
          puVar5 = auStack_1b0;
          uVar15 = extraout_XMM0_Da_00;
          goto LAB_1800e2f23;
        }
        uVar10 = uVar4 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar9,uVar10);
    }
    FUN_18000f890(local_140);
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
  } while ((int)uVar13 < 2);
  unaff_RBX = &DAT_1809ebd60;
  local_168 = (undefined8 *)&DAT_1809ebd60;
  iVar6 = FUN_1804e4d70(&DAT_1809ebd60);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebdac == 0x7fffffff) {
    DAT_1809ebdac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar9 = DAT_180cd10a0;
  puVar5 = auStack_1b8;
  uVar15 = extraout_XMM0_Da;
  if (DAT_180cd10a0 == DAT_180cd10a8) {
LAB_1800e2f23:
    puVar11 = puVar5;
    *(undefined8 *)(puVar11 + -8) = 0x1800e2f2f;
    FUN_1800e5600(uVar15,lVar9,local_118);
  }
  else {
    FUN_1800e5d20(DAT_180cd10a0,local_118);
    DAT_180cd10a0 = DAT_180cd10a0 + 0xc0;
  }
  *(undefined8 *)(puVar11 + -8) = 0x1800e2f38;
  FUN_1804e4e90(unaff_RBX);
  *(undefined8 *)(puVar11 + -8) = 0x1800e2f54;
  FUN_1804eced0(local_98,0x20,2,thunk_FUN_18000f890);
  if (local_a0 != (longlong *)0x0) {
    pcVar2 = *(code **)(*local_a0 + 0x20);
    *(undefined8 *)(puVar11 + -8) = 0x1800e2f6d;
    (*pcVar2)(local_a0,local_a0 != local_d8);
    local_a0 = (longlong *)0x0;
  }
  *(undefined8 *)(puVar11 + -8) = 0x1800e2f8c;
  FUN_1804eced0(local_118,0x20,2,thunk_FUN_18000f890);
  *(undefined8 *)(puVar11 + -8) = 0x1800e2f99;
  return;
}



/* ===== 1800e2fd0 FUN_1800e2fd0 ===== */

void FUN_1800e2fd0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_1804e4d70(&DAT_1809ebd10);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebd5c == 0x7fffffff) {
    DAT_1809ebd5c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1800e4f60();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1800e4f60();
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
  puVar2 = (undefined8 *)(param_1 + 0xb8);
  if (param_1 != param_1 + 0x10) {
    do {
      LOCK();
      *puVar2 = 0;
      UNLOCK();
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined8 *)(param_1 + 200));
  }
  FUN_1804e4e90(&DAT_1809ebd10);
  return;
}



/* ===== 1800e30f0 FUN_1800e30f0 ===== */

ulonglong FUN_1800e30f0(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (param_1 == 0) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar1 = 0;
    while ((uVar1 + 1 < 0x80 && (*(char *)(uVar1 + param_1) != '\0'))) {
      *(char *)(uVar1 + param_2) = *(char *)(uVar1 + param_1);
      uVar1 = uVar1 + 1;
    }
    *(undefined1 *)(uVar1 + param_2) = 0;
    uVar1 = CONCAT71((int7)(uVar1 >> 8),uVar1 != 0);
  }
  return uVar1;
}



/* ===== 1800e3150 FUN_1800e3150 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800e3150(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  size_t sVar7;
  undefined8 *puVar8;
  char *_Str2;
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_e8;
  lVar5 = FUN_18000f3a0(param_1 + 8);
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
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (lVar5 != 0) {
    uVar6 = FUN_18000f3a0(lVar5);
    cVar3 = FUN_1800e30f0(uVar6,&local_b8);
    if ((cVar3 != '\0') && (lVar5 = FUN_1804ef120(&local_b8,"wl_scene_"), lVar5 != 0)) {
      local_c8 = &DAT_1809ebca0;
      iVar4 = FUN_1804e4d70(&DAT_1809ebca0);
      puVar8 = DAT_180cd10c8;
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809ebcec == 0x7fffffff) {
        DAT_1809ebcec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      puVar1 = (undefined8 *)*DAT_180cd10c8;
      do {
        if (puVar1 == puVar8) {
          sVar7 = strlen((char *)&local_b8);
          puVar8 = &DAT_1809ebcf0;
          if (0xf < DAT_1809ebd08) {
            puVar8 = DAT_1809ebcf0;
          }
          if ((DAT_1809ebd00 != sVar7) ||
             ((DAT_1809ebd00 != 0 && (iVar4 = memcmp(puVar8,&local_b8,DAT_1809ebd00), iVar4 != 0))))
          {
            FUN_180029840(&DAT_1809ebcf0,&local_b8,sVar7);
            FUN_1800e1a60("layer %s | no scene of that name",&local_b8);
          }
          uVar6 = 0;
LAB_1800e32e7:
          FUN_1804e4e90(&DAT_1809ebca0);
          return uVar6;
        }
        uVar2 = puVar1[4];
        _Str2 = (char *)(puVar1 + 2);
        if (0xf < (ulonglong)puVar1[5]) {
          _Str2 = *(char **)_Str2;
        }
        iVar4 = strncmp((char *)(lVar5 + 9),_Str2,uVar2 & 0xffffffff);
        if (((iVar4 == 0) && (*(char *)(uVar2 + 9 + lVar5) == '_')) &&
           (cVar3 = *(char *)(uVar2 + 10 + lVar5), (byte)(cVar3 - 0x30U) < 2)) {
          *param_2 = cVar3 + -0x30;
          uVar6 = puVar1[6];
          goto LAB_1800e32e7;
        }
        puVar1 = (undefined8 *)*puVar1;
      } while( true );
    }
  }
  return 0;
}



/* ===== 1800e3350 FUN_1800e3350 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e3350(longlong param_1,undefined4 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  int local_78 [6];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_b8;
  local_98 = (longlong *)0x0;
  (**(code **)(*param_3 + 0x38))(param_3,&local_98);
  if (local_98 != (longlong *)0x0) {
    local_90 = (longlong *)&DAT_1809ebd10;
    iVar4 = FUN_1804e4d70(&DAT_1809ebd10);
    if (iVar4 != 0) {
LAB_1800e35d1:
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809ebd5c == 0x7fffffff) {
LAB_1800e35bc:
      DAT_1809ebd5c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    if ((local_98 == *(longlong **)(param_1 + 0x80)) || (local_98 == *(longlong **)(param_1 + 0x98))
       ) {
      (**(code **)(*local_98 + 0x10))();
      FUN_1804e4e90(&DAT_1809ebd10);
    }
    else {
      FUN_1804e4e90(&DAT_1809ebd10);
      local_80 = (longlong *)0x0;
      iVar4 = (**(code **)*local_98)(local_98,&DAT_18058a4c0,&local_80);
      if ((-1 < iVar4) && (local_80 != (longlong *)0x0)) {
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        (**(code **)(*local_80 + 0x50))(local_80,&local_60);
        plVar3 = local_80;
        local_90 = (longlong *)0x0;
        (**(code **)(*local_80 + 0x18))(local_80,&local_90);
        if (local_90 != (longlong *)0x0) {
          local_78[2] = 0;
          local_78[4] = 0;
          local_78[5] = 0;
          if ((int)local_50 == 9) {
            local_78[0] = 10;
          }
          else if ((int)local_50 == 0x17) {
            local_78[0] = 0x18;
          }
          else if ((int)local_50 == 0x1b) {
            local_78[0] = 0x1c;
          }
          else if ((int)local_50 == 0x5a) {
            local_78[0] = 0x57;
          }
          else {
            local_78[0] = 0x58;
            if ((int)local_50 != 0x5c) {
              local_78[0] = (int)local_50;
            }
          }
          local_78[1] = 4;
          local_78[3] = 1;
          local_88 = 0;
          iVar4 = (**(code **)(*local_90 + 0x38))(local_90,plVar3,local_78,&local_88);
          if (iVar4 < 0) {
            local_88 = 0;
            iVar4 = (**(code **)(*local_90 + 0x38))(local_90,plVar3,0,&local_88);
            if (iVar4 < 0) {
              local_88 = 0;
            }
          }
          (**(code **)(*local_90 + 0x10))();
          lVar2 = local_88;
          if (local_88 != 0) {
            local_90 = (longlong *)&DAT_1809ebd10;
            iVar4 = FUN_1804e4d70(&DAT_1809ebd10);
            if (iVar4 != 0) goto LAB_1800e35d1;
            if (DAT_1809ebd5c == 0x7fffffff) goto LAB_1800e35bc;
            if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
            }
            *(longlong *)(param_1 + 0x90) = lVar2;
            *(longlong **)(param_1 + 0x98) = local_98;
            *(undefined4 *)(param_1 + 0xa0) = (undefined4)local_60;
            *(undefined4 *)(param_1 + 0xa4) = local_60._4_4_;
            *(undefined4 *)(param_1 + 0xa8) = param_2;
            LOCK();
            cVar1 = *(char *)(param_1 + 0xb0);
            *(char *)(param_1 + 0xb0) = '\0';
            UNLOCK();
            if (cVar1 != '\0') {
              LOCK();
              DAT_180cd10b0 = DAT_180cd10b0 + -1;
              UNLOCK();
            }
            FUN_1804e4e90(&DAT_1809ebd10);
          }
        }
        (**(code **)(*local_80 + 0x10))();
      }
      (**(code **)(*local_98 + 0x10))();
    }
  }
  return;
}



/* ===== 1800e35e0 FUN_1800e35e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800e35e0(char *param_1)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  ulonglong uVar3;
  int iVar4;
  size_t sVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 ****ppppuVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined *local_68 [2];
  undefined8 ****local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_68[0] = &DAT_1809ebca0;
  iVar4 = FUN_1804e4d70(&DAT_1809ebca0);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebcec == 0x7fffffff) {
    DAT_1809ebcec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_58 = (undefined8 ****)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  sVar5 = strlen(param_1);
  FUN_1800133a0(&local_58,param_1,sVar5);
  uVar3 = local_40;
  ppppuVar2 = local_58;
  ppppuVar8 = &local_58;
  if (0xf < local_40) {
    ppppuVar8 = local_58;
  }
  uVar7 = 0;
  uVar12 = 0xcbf29ce484222325;
  if (local_48 != 0) {
    do {
      uVar12 = (uVar12 ^ *(byte *)(uVar7 + (longlong)ppppuVar8)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_48);
  }
  lVar6 = FUN_1800e5860(uVar7,local_68,&local_58,uVar12);
  lVar11 = DAT_180cd10c8;
  if (*(longlong *)(lVar6 + 8) != 0) {
    lVar11 = *(longlong *)(lVar6 + 8);
  }
  if (uVar3 < 0x10) {
LAB_1800e3701:
    puVar10 = auStack_88;
    if (lVar11 == DAT_180cd10c8) {
      uVar9 = 0;
      puVar10 = auStack_88;
      goto LAB_1800e3715;
    }
  }
  else {
    uVar7 = uVar3 + 1;
    ppppuVar8 = ppppuVar2;
    if (uVar7 < 0x1000) {
LAB_1800e36f2:
      thunk_FUN_1803d64e0(ppppuVar8,uVar7);
      goto LAB_1800e3701;
    }
    ppppuVar8 = (undefined8 ****)ppppuVar2[-1];
    if ((ulonglong)((longlong)ppppuVar2 + (-8 - (longlong)ppppuVar8)) < 0x20) {
      uVar7 = uVar3 + 0x28;
      goto LAB_1800e36f2;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar10 = auStack_80;
  }
  uVar9 = *(undefined8 *)(lVar11 + 0x30);
LAB_1800e3715:
  *(undefined8 *)(puVar10 + -8) = 0x1800e371d;
  FUN_1804e4e90(&DAT_1809ebca0);
  *(undefined8 *)(puVar10 + -8) = 0x1800e372d;
  return uVar9;
}



/* ===== 1800e3760 FUN_1800e3760 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e3760(char *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined *local_68;
  undefined1 local_60 [16];
  ulonglong local_50 [5];
  
  local_50[4] = DAT_180919500 ^ (ulonglong)auStack_88;
  lVar12 = 0;
  local_68 = &DAT_1809ebca0;
  iVar3 = FUN_1804e4d70(&DAT_1809ebca0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebcec == 0x7fffffff) {
    DAT_1809ebcec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  sVar4 = strlen(param_1);
  uVar13 = FUN_1800133a0(local_50,param_1,sVar4);
  plVar5 = (longlong *)FUN_1800e5100(uVar13,local_60,local_50);
  lVar9 = *plVar5;
  uVar13 = extraout_XMM0_Da;
  if (local_50[3] < 0x10) {
LAB_1800e383a:
    local_50[2] = 0;
    local_50[3] = 0xf;
    local_50[0] = local_50[0] & 0xffffffffffffff00;
    if (*(longlong *)(lVar9 + 0x30) == 0) {
      puVar6 = (undefined8 *)FUN_1804ecaa0();
      *(undefined4 *)((longlong)puVar6 + 0x51) = 0;
      *(undefined2 *)((longlong)puVar6 + 0x55) = 0;
      *(undefined1 *)((longlong)puVar6 + 0x57) = 0;
      puVar6[0xe] = 0;
      *(undefined4 *)((longlong)puVar6 + 0xb1) = 0;
      *(undefined2 *)((longlong)puVar6 + 0xb5) = 0;
      *(undefined1 *)((longlong)puVar6 + 0xb7) = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0xf;
      *(undefined1 *)puVar6 = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0xf;
      *(undefined1 *)(puVar6 + 5) = 0;
      puVar6[9] = 0;
      *(undefined1 *)(puVar6 + 10) = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      *(undefined4 *)(puVar6 + 0xd) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x6c) = 0xfffe7960;
      puVar6[0xf] = 0;
      puVar6[0x10] = 0;
      puVar6[0x11] = 0;
      puVar6[0x12] = 0;
      puVar6[0x13] = 0;
      puVar6[0x14] = 0;
      puVar6[0x15] = 0xffffffffffffffff;
      *(undefined1 *)(puVar6 + 0x16) = 0;
      puVar6[0x17] = 0;
      puVar6[0x18] = 0;
      lVar12 = *(longlong *)(lVar9 + 0x30);
      *(undefined8 **)(lVar9 + 0x30) = puVar6;
      if (lVar12 != 0) {
        FUN_18000f890(lVar12 + 0x28);
        FUN_18000f890(lVar12);
        thunk_FUN_1803d64e0(lVar12,200);
      }
      sVar4 = strlen(param_1);
      uVar13 = FUN_180029840(*(undefined8 *)(lVar9 + 0x30),param_1,sVar4);
    }
    puVar11 = auStack_88;
    puVar10 = auStack_88;
    lVar9 = *(longlong *)(lVar9 + 0x30);
    *(undefined4 *)(lVar9 + 0x6c) = DAT_180cd1078;
    *(undefined4 *)(lVar9 + 0x20) = param_2;
    *(undefined4 *)(lVar9 + 0x24) = param_3;
    if ((*(longlong *)(lVar9 + 0x48) == param_5) && (*(longlong *)(lVar9 + 0x38) != 0))
    goto LAB_1800e39a0;
    puVar11 = auStack_88;
    if ((undefined8 *)(lVar9 + 0x28) != param_4) {
      lVar12 = param_5;
      if ((ulonglong)param_4[3] < 0x10) goto LAB_1800e3990;
      puVar6 = (undefined8 *)*param_4;
      puVar11 = auStack_88;
      goto LAB_1800e3993;
    }
  }
  else {
    uVar8 = local_50[3] + 1;
    uVar7 = local_50[0];
    if (uVar8 < 0x1000) {
LAB_1800e3835:
      uVar13 = thunk_FUN_1803d64e0(uVar7,uVar8);
      goto LAB_1800e383a;
    }
    uVar7 = *(ulonglong *)(local_50[0] - 8);
    if ((local_50[0] - uVar7) - 8 < 0x20) {
      uVar8 = local_50[3] + 0x28;
      goto LAB_1800e3835;
    }
    pcVar2 = (code *)swi(0x29);
    uVar13 = (*pcVar2)(5);
    puVar10 = auStack_80;
LAB_1800e3990:
    puVar6 = param_4;
    puVar11 = puVar10;
    param_5 = lVar12;
LAB_1800e3993:
    uVar1 = param_4[2];
    *(undefined8 *)(puVar11 + -8) = 0x1800e399c;
    FUN_180029840(uVar13,puVar6,uVar1);
  }
  *(longlong *)(lVar9 + 0x48) = param_5;
LAB_1800e39a0:
  *(undefined8 *)(puVar11 + -8) = 0x1800e39a8;
  FUN_1804e4e90(&DAT_1809ebca0);
  *(undefined8 *)(puVar11 + -8) = 0x1800e39b5;
  return;
}



/* ===== 1800e39f0 FUN_1800e39f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e39f0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  size_t sVar8;
  undefined *puVar9;
  ulonglong uVar10;
  undefined *unaff_RBX;
  undefined1 *puVar11;
  undefined8 *puVar12;
  uint *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar17;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [24];
  undefined8 local_1a8;
  uint *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  ulonglong local_180;
  ulonglong uStack_178;
  uint local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 uStack_158;
  uint local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 local_130 [40];
  undefined1 local_108 [64];
  longlong local_c8 [7];
  longlong *local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  lVar6 = FUN_1800e35e0();
  puVar11 = auStack_1c8;
  if ((lVar6 != 0) && (puVar11 = auStack_1c8, *(char *)(lVar6 + 0x50) != '\0')) {
    FUN_1800d2370(local_108,2);
    local_90 = (longlong *)0x0;
    FUN_1800d2370(local_88,2);
    puVar11 = auStack_1c8;
    uVar16 = 0;
    do {
      puVar7 = (undefined8 *)FUN_1800e1c40(local_130,lVar6,uVar16);
      local_190 = (undefined8 *)0x0;
      uStack_188 = 0;
      local_180 = 0;
      uStack_178 = 0;
      sVar8 = strlen(
                    "\n(function () {\n    var root = $.GetContextPanel();\n    while (root && root.GetParent && root.GetParent()) root = root.GetParent();\n    if (!root) return;\n    var panel = root.FindChildTraverse(\'$PANEL$\');\n    if (!panel || (panel.IsValid && !panel.IsValid())) return;\n    try {\n$COMMAND$\n    } catch (e) {}\n})();\n"
                    );
      FUN_1800133a0(&local_190,
                    "\n(function () {\n    var root = $.GetContextPanel();\n    while (root && root.GetParent && root.GetParent()) root = root.GetParent();\n    if (!root) return;\n    var panel = root.FindChildTraverse(\'$PANEL$\');\n    if (!panel || (panel.IsValid && !panel.IsValid())) return;\n    try {\n$COMMAND$\n    } catch (e) {}\n})();\n"
                    ,sVar8);
      local_198 = (uint *)&local_190;
      puVar12 = &local_190;
      if (0xf < uStack_178) {
        puVar12 = local_190;
      }
      if (8 < local_180) {
        puVar9 = (undefined *)(local_180 + (longlong)puVar12);
        unaff_RBX = (undefined *)thunk_FUN_1804e92d0(puVar12,puVar9,"$COMMAND$",9);
        if ((unaff_RBX != puVar9) &&
           (unaff_RBX = unaff_RBX + -(longlong)puVar12, unaff_RBX != (undefined *)0xffffffffffffffff
           )) {
          while( true ) {
            local_1a8 = param_2[2];
            if ((ulonglong)param_2[3] < 0x10) {
              puVar12 = param_2;
            }
            else {
              puVar12 = (undefined8 *)*param_2;
            }
            FUN_1800d8750(&local_190,unaff_RBX,9,puVar12);
            puVar12 = &local_190;
            if (0xf < uStack_178) {
              puVar12 = local_190;
            }
            if ((local_180 < 9) || ((undefined *)(local_180 - 9) < unaff_RBX + param_2[2])) break;
            puVar9 = (undefined *)(local_180 + (longlong)puVar12);
            unaff_RBX = (undefined *)
                        thunk_FUN_1804e92d0((undefined *)
                                            ((longlong)puVar12 + (longlong)(unaff_RBX + param_2[2]))
                                            ,puVar9,"$COMMAND$",9);
            if ((unaff_RBX == puVar9) ||
               (unaff_RBX = unaff_RBX + -(longlong)puVar12,
               unaff_RBX == (undefined *)0xffffffffffffffff)) break;
          }
        }
      }
      local_170 = (uint)local_190;
      uStack_16c = local_190._4_4_;
      uStack_168 = (undefined4)uStack_188;
      uStack_164 = uStack_188._4_4_;
      local_160 = local_180;
      uStack_158 = uStack_178;
      local_180 = 0;
      uStack_178 = 0xf;
      local_190 = (undefined8 *)((ulonglong)local_190 & 0xffffffffffffff00);
      FUN_18000f890(&local_190);
      local_198 = &local_170;
      puVar13 = &local_170;
      if (0xf < uStack_158) {
        puVar13 = (uint *)CONCAT44(uStack_16c,local_170);
      }
      if (6 < local_160) {
        unaff_RBX = (undefined *)(local_160 + (longlong)puVar13);
        puVar9 = (undefined *)thunk_FUN_1804e92d0(puVar13,unaff_RBX,"$PANEL$",7);
        if ((puVar9 != unaff_RBX) && (lVar14 = (longlong)puVar9 - (longlong)puVar13, lVar14 != -1))
        {
          while( true ) {
            local_1a8 = puVar7[2];
            if ((ulonglong)puVar7[3] < 0x10) {
              puVar12 = puVar7;
            }
            else {
              puVar12 = (undefined8 *)*puVar7;
            }
            FUN_1800d8750(&local_170,lVar14,7,puVar12);
            puVar13 = &local_170;
            if (0xf < uStack_158) {
              puVar13 = (uint *)CONCAT44(uStack_16c,local_170);
            }
            if ((local_160 < 7) || (local_160 - 7 < (ulonglong)(puVar7[2] + lVar14))) break;
            unaff_RBX = (undefined *)(local_160 + (longlong)puVar13);
            puVar9 = (undefined *)
                     thunk_FUN_1804e92d0((longlong)puVar13 + puVar7[2] + lVar14,unaff_RBX,"$PANEL$",
                                         7);
            if ((puVar9 == unaff_RBX) ||
               (lVar14 = (longlong)puVar9 - (longlong)puVar13, lVar14 == -1)) break;
          }
        }
      }
      local_150 = local_170;
      uStack_14c = uStack_16c;
      uStack_148 = uStack_168;
      uStack_144 = uStack_164;
      local_140 = (undefined4)local_160;
      uStack_13c = local_160._4_4_;
      uStack_138 = (undefined4)uStack_158;
      uStack_134 = uStack_158._4_4_;
      local_160 = 0;
      uStack_158 = 0xf;
      local_170 = local_170 & 0xffffff00;
      FUN_18000f890(&local_170);
      FUN_18002ba60(local_108 + uVar16 * 0x20,&local_150);
      uVar3 = CONCAT44(uStack_134,uStack_138);
      if (0xf < uVar3) {
        uVar10 = uVar3 + 1;
        lVar2 = CONCAT44(uStack_14c,local_150);
        lVar14 = lVar2;
        if (0xfff < uVar10) {
          lVar14 = *(longlong *)(lVar2 + -8);
          if (0x1f < (lVar2 - lVar14) - 8U) {
            pcVar1 = (code *)swi(0x29);
            lVar6 = (*pcVar1)(5);
            puVar4 = auStack_1c0;
            uVar17 = extraout_XMM0_Da_00;
            goto LAB_1800e3daf;
          }
          uVar10 = uVar3 + 0x28;
        }
        thunk_FUN_1803d64e0(lVar14,uVar10);
      }
      FUN_18000f890(local_130);
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
    } while ((int)uVar15 < 2);
    unaff_RBX = &DAT_1809ebd60;
    local_198 = (uint *)&DAT_1809ebd60;
    iVar5 = FUN_1804e4d70(&DAT_1809ebd60);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809ebdac == 0x7fffffff) {
      DAT_1809ebdac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    lVar6 = DAT_180cd10a0;
    puVar4 = auStack_1c8;
    uVar17 = extraout_XMM0_Da;
    if (DAT_180cd10a0 == DAT_180cd10a8) {
LAB_1800e3daf:
      puVar11 = puVar4;
      *(undefined8 *)(puVar11 + -8) = 0x1800e3dbb;
      FUN_1800e5600(uVar17,lVar6,local_108);
    }
    else {
      FUN_1800e5d20(DAT_180cd10a0,local_108);
      DAT_180cd10a0 = DAT_180cd10a0 + 0xc0;
    }
    *(undefined8 *)(puVar11 + -8) = 0x1800e3dc4;
    FUN_1804e4e90(unaff_RBX);
    *(undefined8 *)(puVar11 + -8) = 0x1800e3de0;
    FUN_1804eced0(local_88,0x20,2,thunk_FUN_18000f890);
    if (local_90 != (longlong *)0x0) {
      pcVar1 = *(code **)(*local_90 + 0x20);
      *(undefined8 *)(puVar11 + -8) = 0x1800e3df9;
      (*pcVar1)(local_90,local_90 != local_c8);
      local_90 = (longlong *)0x0;
    }
    *(undefined8 *)(puVar11 + -8) = 0x1800e3e18;
    FUN_1804eced0(local_108,0x20,2,thunk_FUN_18000f890);
  }
  *(undefined8 *)(puVar11 + -8) = 0x1800e3e28;
  return;
}



/* ===== 1800e3e70 FUN_1800e3e70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e3e70(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined1 local_108 [64];
  longlong local_c8 [7];
  longlong *local_90;
  undefined1 local_88 [64];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_138;
  local_118 = param_2;
  lVar2 = FUN_1800e35e0();
  if (((lVar2 == 0) || (*(char *)(lVar2 + 0x50) == '\0')) || (param_2[7] == 0)) {
    plVar1 = (longlong *)param_2[7];
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
  }
  else {
    FUN_1800d2370(local_108,2);
    local_90 = (longlong *)0x0;
    FUN_1800d2370(local_88,2);
    if (local_c8 != param_2) {
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x20))
                  (local_90,CONCAT71((int7)((ulonglong)local_c8 >> 8),local_90 != local_c8));
        local_90 = (longlong *)0x0;
      }
      FUN_1800e5380(local_c8,param_2);
    }
    uVar4 = 0;
    do {
      uVar3 = FUN_1800e1c40(local_48,lVar2,uVar4);
      FUN_18002ba60(local_88 + (ulonglong)uVar4 * 0x20,uVar3);
      FUN_18000f890(local_48);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 2);
    FUN_1800e1fe0(local_108);
    FUN_1804eced0(local_88,0x20,2,thunk_FUN_18000f890);
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 0x20))(local_90,local_90 != local_c8);
      local_90 = (longlong *)0x0;
    }
    FUN_1804eced0(local_108,0x20,2,thunk_FUN_18000f890);
    plVar1 = (longlong *)param_2[7];
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
  }
  param_2[7] = 0;
  return;
}



/* ===== 1800e4040 FUN_1800e4040 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e4040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined1 local_1a8 [384];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180540170(local_1a8,0,0x180);
  puVar1 = (ulonglong *)FUN_180013640();
  local_1b8 = 0;
  local_1b0 = &local_res10;
  FUN_180501904(*puVar1 | 2,local_1a8,0x180,param_1);
  FUN_1800e1a60(&DAT_1806d3198,local_1a8);
  return;
}



/* ===== 1800e40f0 FUN_1800e40f0 ===== */

undefined8 FUN_1800e40f0(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_1800e35e0();
  if (lVar3 == 0) {
    return 0;
  }
  iVar2 = FUN_1804e4d70(&DAT_1809ebd10);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebd5c == 0x7fffffff) {
    DAT_1809ebd5c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  uVar1 = *(undefined8 *)(lVar3 + 0x78);
  FUN_1804e4e90(&DAT_1809ebd10);
  return uVar1;
}



/* ===== 1800e4160 FUN_1800e4160 ===== */

void FUN_1800e4160(void)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  
  iVar7 = DAT_180cd1078 + 1;
  puVar6 = DAT_180cd1088;
  puVar9 = DAT_180cd1080;
  DAT_180cd1078 = iVar7;
  if (DAT_180cd1080 != DAT_180cd1088) {
    do {
      puVar1 = puVar9 + 2;
      if (iVar7 < *(int *)(puVar9 + 1)) {
        puVar9 = puVar1;
      }
      else {
        (**(code **)(*(longlong *)*puVar9 + 0x10))();
        FUN_180540530(puVar9,puVar1,(longlong)DAT_180cd1088 - (longlong)puVar1);
        puVar6 = DAT_180cd1088 + -2;
        iVar7 = DAT_180cd1078;
        DAT_180cd1088 = puVar6;
      }
    } while (puVar9 != puVar6);
  }
  cVar2 = DAT_180cc3d74;
  LOCK();
  DAT_180cc3d74 = 0;
  UNLOCK();
  if (cVar2 == '\0') {
LAB_1800e4273:
    iVar7 = FUN_1804e4d70(&DAT_1809ebd60);
    lVar5 = DAT_180cd10a0;
    lVar4 = DAT_180cd1098;
    if (iVar7 != 0) {
LAB_1800e468e:
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809ebdac == 0x7fffffff) {
      DAT_1809ebdac = 0x7ffffffe;
      goto LAB_1800e46a3;
    }
    FUN_1804e4e90(&DAT_1809ebd60);
    if (((lVar4 != lVar5) && (DAT_180cd1078 == (DAT_180cd1078 / 10) * 10)) &&
       (DAT_1811079d8 != (HWND)0x0)) {
      PostMessageA(DAT_1811079d8,0x8057,0,0);
    }
    if (0 < DAT_180cd10b4) {
      DAT_180cd10b4 = DAT_180cd10b4 + -1;
      return;
    }
    iVar7 = FUN_1804e4d70(&DAT_1809ebca0);
    puVar6 = DAT_180cd10c8;
    if (iVar7 != 0) goto LAB_1800e468e;
    if (DAT_1809ebcec != 0x7fffffff) {
      puVar9 = (undefined8 *)*DAT_180cd10c8;
      do {
        if (puVar9 == puVar6) {
          FUN_1804e4e90(&DAT_1809ebca0);
          return;
        }
        plVar3 = (longlong *)puVar9[6];
        iVar7 = DAT_180cd1078 - *(int *)((longlong)plVar3 + 0x6c);
        if (2 < iVar7) {
          if (((char)plVar3[10] != '\0') && (300 < iVar7)) {
            FUN_1800e2cb0(plVar3);
            FUN_1800e2fd0(plVar3);
            LOCK();
            lVar4 = plVar3[0x16];
            *(char *)(plVar3 + 0x16) = '\0';
            UNLOCK();
            if ((char)lVar4 != '\0') {
              LOCK();
              DAT_180cd10b0 = DAT_180cd10b0 + -1;
              UNLOCK();
            }
            *(undefined1 *)(plVar3 + 10) = 0;
          }
          goto LAB_1800e466a;
        }
        if ((char)plVar3[10] == '\0') {
LAB_1800e45fa:
          plVar3[0xc] = plVar3[0xc] + 1;
          if ((ulonglong)plVar3[3] < 0x10) {
            plVar8 = plVar3;
          }
          else {
            plVar8 = (longlong *)*plVar3;
          }
          FUN_1800e1a60("build %s | %dx%d | version %llu | build %llu",plVar8,(int)plVar3[4],
                        *(undefined4 *)((longlong)plVar3 + 0x24),plVar3[9],plVar3[0xc]);
          FUN_1800e2080(plVar3);
          *(undefined1 *)(plVar3 + 10) = 1;
          plVar3[0xb] = plVar3[9];
          *(int *)(plVar3 + 0xd) = DAT_180cd1078;
          *(undefined4 *)(plVar3 + 0xe) = 0;
          LOCK();
          lVar4 = plVar3[0x16];
          *(char *)(plVar3 + 0x16) = '\x01';
          UNLOCK();
          if ((char)lVar4 != '\x01') {
LAB_1800e4663:
            LOCK();
            DAT_180cd10b0 = DAT_180cd10b0 + 1;
            UNLOCK();
          }
        }
        else {
          if (plVar3[0xb] != plVar3[9]) {
            FUN_1800e2fd0(plVar3);
            goto LAB_1800e45fa;
          }
          iVar7 = FUN_1804e4d70(&DAT_1809ebd10);
          if (iVar7 != 0) {
LAB_1800e4683:
                    /* WARNING: Subroutine does not return */
            FUN_1804e4a90(5);
          }
          if (DAT_1809ebd5c == 0x7fffffff) {
LAB_1800e46ae:
            DAT_1809ebd5c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1804e4a90(6);
          }
          if (plVar3[0x12] != 0) {
            if (plVar3[0xf] != 0) {
              FUN_1800e4f60();
            }
            if ((((int)plVar3[0x11] != (int)plVar3[0x14]) ||
                (*(int *)((longlong)plVar3 + 0x8c) != *(int *)((longlong)plVar3 + 0xa4))) ||
               (*(int *)((longlong)plVar3 + 0xac) != (int)plVar3[0x15])) {
              if ((ulonglong)plVar3[3] < 0x10) {
                plVar8 = plVar3;
              }
              else {
                plVar8 = (longlong *)*plVar3;
              }
              FUN_1800e1a60("texture %s | %ux%u | tree %d | panel %dx%d",plVar8,(int)plVar3[0x14],
                            *(undefined4 *)((longlong)plVar3 + 0xa4),(int)plVar3[0x15],
                            (int)plVar3[4],*(undefined4 *)((longlong)plVar3 + 0x24));
            }
            plVar3[0xf] = plVar3[0x12];
            plVar3[0x10] = plVar3[0x13];
            *(int *)(plVar3 + 0x11) = (int)plVar3[0x14];
            *(undefined4 *)((longlong)plVar3 + 0x8c) = *(undefined4 *)((longlong)plVar3 + 0xa4);
            *(int *)((longlong)plVar3 + 0xac) = (int)plVar3[0x15];
            plVar3[0x12] = 0;
            plVar3[0x13] = 0;
          }
          FUN_1804e4e90(&DAT_1809ebd10);
          iVar7 = FUN_1804e4d70(&DAT_1809ebd10);
          if (iVar7 != 0) goto LAB_1800e4683;
          if (DAT_1809ebd5c == 0x7fffffff) goto LAB_1800e46ae;
          lVar4 = plVar3[0xf];
          FUN_1804e4e90(&DAT_1809ebd10);
          if (lVar4 != 0) {
            if ((char)plVar3[0x16] != '\0') {
              *(int *)(plVar3 + 0xe) = (int)plVar3[0xe] + 1;
              if (3 < (int)plVar3[0xe]) {
                LOCK();
                lVar4 = plVar3[0x16];
                *(char *)(plVar3 + 0x16) = '\0';
                UNLOCK();
                if ((char)lVar4 != '\0') {
                  LOCK();
                  DAT_180cd10b0 = DAT_180cd10b0 + -1;
                  UNLOCK();
                }
              }
              goto LAB_1800e466a;
            }
            if (DAT_180cd1078 != (DAT_180cd1078 / 0xf0) * 0xf0) goto LAB_1800e466a;
            *(undefined4 *)(plVar3 + 0xe) = 0;
            LOCK();
            lVar4 = plVar3[0x16];
            *(char *)(plVar3 + 0x16) = '\x01';
            UNLOCK();
            if ((char)lVar4 == '\x01') goto LAB_1800e466a;
            goto LAB_1800e4663;
          }
          if ((char)plVar3[0x16] == '\0') {
            *(undefined4 *)(plVar3 + 0xe) = 0;
            LOCK();
            lVar4 = plVar3[0x16];
            *(char *)(plVar3 + 0x16) = '\x01';
            UNLOCK();
            if ((char)lVar4 != '\x01') {
              LOCK();
              DAT_180cd10b0 = DAT_180cd10b0 + 1;
              UNLOCK();
            }
          }
          iVar7 = DAT_180cd1078 - (int)plVar3[0xd];
          if (900 < iVar7) {
            if ((ulonglong)plVar3[3] < 0x10) {
              plVar8 = plVar3;
            }
            else {
              plVar8 = (longlong *)*plVar3;
            }
            FUN_1800e1a60("stall %s | no layer texture %d frames after build %llu | rebuilding",
                          plVar8,iVar7,plVar3[0xc]);
            *(undefined1 *)(plVar3 + 10) = 0;
          }
        }
LAB_1800e466a:
        puVar9 = (undefined8 *)*puVar9;
      } while( true );
    }
  }
  else {
    iVar7 = FUN_1804e4d70(&DAT_1809ebca0);
    puVar6 = DAT_180cd10c8;
    if (iVar7 != 0) goto LAB_1800e468e;
    if (DAT_1809ebcec != 0x7fffffff) {
      for (puVar9 = (undefined8 *)*DAT_180cd10c8; puVar9 != puVar6; puVar9 = (undefined8 *)*puVar9)
      {
        FUN_1800e2fd0(puVar9[6]);
        LOCK();
        cVar2 = *(char *)(puVar9[6] + 0xb0);
        *(char *)(puVar9[6] + 0xb0) = '\0';
        UNLOCK();
        if (cVar2 != '\0') {
          LOCK();
          DAT_180cd10b0 = DAT_180cd10b0 + -1;
          UNLOCK();
        }
        *(undefined1 *)(puVar9[6] + 0x50) = 0;
      }
      DAT_180cd10b4 = 0x78;
      FUN_1804e4e90(&DAT_1809ebca0);
      goto LAB_1800e4273;
    }
  }
  DAT_1809ebcec = 0x7ffffffe;
LAB_1800e46a3:
                    /* WARNING: Subroutine does not return */
  FUN_1804e4a90(6);
}



/* ===== 1800e46d0 FUN_1800e46d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e46d0(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  longlong lVar6;
  longlong lVar7;
  size_t sVar8;
  longlong lVar9;
  code *pcVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint *puVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  longlong local_128;
  uint local_118;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 ******local_98 [2];
  longlong local_88;
  ulonglong local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  puVar14 = auStack_148;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_148;
  uVar21 = 0;
  local_118 = 0;
  if (DAT_180961ab0 == 0) goto LAB_1800e4ceb;
  if (DAT_1811150a0 == 0) {
    hModule = GetModuleHandleA("panorama.dll");
    puVar14 = auStack_148;
    if (hModule == (HMODULE)0x0) goto LAB_1800e4ceb;
    pFVar5 = GetProcAddress(hModule,"CreateInterface");
    puVar14 = auStack_148;
    if (pFVar5 == (FARPROC)0x0) goto LAB_1800e4ceb;
    DAT_1811150a0 = (*pFVar5)("PanoramaUIEngine001",0);
    puVar14 = auStack_148;
    if (DAT_1811150a0 == 0) goto LAB_1800e4ceb;
  }
  puVar14 = auStack_148;
  cVar3 = FUN_180200ed0();
  if (cVar3 == '\0') goto LAB_1800e4ceb;
  local_b0 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  iVar4 = FUN_1804e4d70(&DAT_1809ebd60);
  puVar16 = DAT_180cd10a0;
  puVar19 = DAT_180cd1098;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebdac == 0x7fffffff) {
    DAT_1809ebdac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_b0 = DAT_180cd1098;
  DAT_180cd1098 = (undefined8 *)0x0;
  local_b8 = DAT_180cd10a0;
  puStack_a8 = DAT_180cd10a0;
  DAT_180cd10a0 = (undefined8 *)0x0;
  local_a0 = DAT_180cd10a8;
  DAT_180cd10a8 = 0;
  FUN_1804e4e90(&DAT_1809ebd60);
  if (((DAT_180961ab8 == 0) || (lVar6 = FUN_18000f3a0(), lVar6 == 0)) ||
     (lVar6 = FUN_18000f3a0(lVar6 + 8), lVar6 == 0)) {
LAB_1800e482d:
    local_110 = 0;
    lVar6 = 0;
  }
  else {
    local_110 = lVar6;
    lVar7 = FUN_18000f3a0(lVar6);
    if ((lVar7 == 0) || (lVar7 = FUN_18000f3a0(lVar7), lVar7 == 0)) goto LAB_1800e482d;
  }
  if (((DAT_180961ab0 == 0) || (lVar7 = FUN_18000f3a0(), lVar7 == 0)) ||
     ((local_108 = FUN_18000f3a0(lVar7 + 8), local_108 == 0 ||
      ((lVar7 = FUN_18000f3a0(local_108), lVar7 == 0 || (lVar7 = FUN_18000f3a0(lVar7), lVar7 == 0)))
      ))) {
    local_108 = 0;
  }
  puVar14 = auStack_148;
  if (puVar19 != puVar16) {
    do {
      uVar15 = 0;
      plVar1 = (longlong *)puVar19[0xf];
      if (plVar1 == (longlong *)0x0) {
LAB_1800e4bc6:
        if ((lVar6 != 0) && (puVar19[2] != 0)) {
          if ((ulonglong)puVar19[3] < 0x10) {
            puVar13 = puVar19;
          }
          else {
            puVar13 = (undefined8 *)*puVar19;
          }
          if (((puVar13 != (undefined8 *)0x0) && (cVar3 = FUN_180200ed0(), cVar3 != '\0')) &&
             ((lVar7 = FUN_180200ff0(), lVar7 != 0 &&
              (((lVar9 = FUN_18000f3a0(lVar7), lVar9 != 0 &&
                (pcVar10 = (code *)FUN_18000f3a0(lVar9 + 0x268), DAT_180ceb448 <= pcVar10)) &&
               (pcVar10 < DAT_180ceb440)))))) {
            local_128 = 1;
            (*pcVar10)(lVar7,lVar6,puVar13,&DAT_18070230d);
          }
        }
        lVar7 = local_108;
        if ((local_108 != 0) && (puVar19[6] != 0)) {
          puVar13 = puVar19 + 4;
          if (0xf < (ulonglong)puVar19[7]) {
            puVar13 = (undefined8 *)*puVar13;
          }
          if (((puVar13 != (undefined8 *)0x0) && (cVar3 = FUN_180200ed0(), cVar3 != '\0')) &&
             ((lVar9 = FUN_180200ff0(), lVar9 != 0 &&
              (((lVar11 = FUN_18000f3a0(lVar9), lVar11 != 0 &&
                (pcVar10 = (code *)FUN_18000f3a0(lVar11 + 0x268), DAT_180ceb448 <= pcVar10)) &&
               (pcVar10 < DAT_180ceb440)))))) {
            local_128 = 1;
            (*pcVar10)(lVar9,lVar7,puVar13,&DAT_18070230d);
          }
        }
      }
      else {
        (**(code **)(*plVar1 + 0x10))(plVar1,local_98);
        uVar21 = uVar21 | 4;
        local_118 = uVar21;
        if (local_88 != 0) {
          do {
            uVar21 = local_118;
            local_100 = (undefined8 *)0x0;
            uStack_f8 = 0;
            local_f0 = 0;
            uStack_e8 = 0;
            sVar8 = strlen(
                          "\n(function () {\n    var root = $.GetContextPanel();\n    while (root && root.GetParent && root.GetParent()) root = root.GetParent();\n    if (!root) return;\n    var panel = root.FindChildTraverse(\'$PANEL$\');\n    if (!panel || (panel.IsValid && !panel.IsValid())) return;\n    try {\n$COMMAND$\n    } catch (e) {}\n})();\n"
                          );
            FUN_1800133a0(&local_100,
                          "\n(function () {\n    var root = $.GetContextPanel();\n    while (root && root.GetParent && root.GetParent()) root = root.GetParent();\n    if (!root) return;\n    var panel = root.FindChildTraverse(\'$PANEL$\');\n    if (!panel || (panel.IsValid && !panel.IsValid())) return;\n    try {\n$COMMAND$\n    } catch (e) {}\n})();\n"
                          ,sVar8);
            local_c0 = (uint *)&local_100;
            puVar16 = &local_100;
            if (0xf < uStack_e8) {
              puVar16 = local_100;
            }
            lVar6 = local_128;
            if (8 < local_f0) {
              lVar7 = local_f0 + (longlong)puVar16;
              lVar9 = thunk_FUN_1804e92d0(puVar16,lVar7,"$COMMAND$",9);
              lVar6 = local_128;
              if (lVar9 != lVar7) {
                lVar9 = lVar9 - (longlong)puVar16;
                local_128 = local_88;
                while( true ) {
                  local_88 = local_128;
                  if (lVar9 == -1) break;
                  ppppppuVar18 = local_98;
                  if (0xf < local_80) {
                    ppppppuVar18 = local_98[0];
                  }
                  FUN_1800d8750(&local_100,lVar9,9,ppppppuVar18);
                  puVar16 = &local_100;
                  if (0xf < uStack_e8) {
                    puVar16 = local_100;
                  }
                  lVar6 = local_128;
                  if ((local_f0 < 9) || (local_f0 - 9 < (ulonglong)(local_88 + lVar9))) break;
                  lVar7 = local_f0 + (longlong)puVar16;
                  lVar9 = thunk_FUN_1804e92d0(local_88 + lVar9 + (longlong)puVar16,lVar7,"$COMMAND$"
                                              ,9);
                  lVar6 = local_128;
                  if (lVar9 == lVar7) break;
                  lVar9 = lVar9 - (longlong)puVar16;
                  local_128 = local_88;
                }
              }
            }
            local_128 = lVar6;
            local_e0 = (uint)local_100;
            uStack_dc = local_100._4_4_;
            uStack_d8 = (undefined4)uStack_f8;
            uStack_d4 = uStack_f8._4_4_;
            local_d0 = local_f0;
            uStack_c8 = uStack_e8;
            local_f0 = 0;
            uStack_e8 = 0xf;
            local_100 = (undefined8 *)((ulonglong)local_100 & 0xffffffffffffff00);
            FUN_18000f890(&local_100);
            local_c0 = &local_e0;
            puVar17 = &local_e0;
            if (0xf < uStack_c8) {
              puVar17 = (uint *)CONCAT44(uStack_dc,local_e0);
            }
            if (6 < local_d0) {
              lVar6 = local_d0 + (longlong)puVar17;
              lVar7 = thunk_FUN_1804e92d0(puVar17,lVar6,"$PANEL$",7);
              if (lVar7 != lVar6) {
                for (lVar7 = lVar7 - (longlong)puVar17; lVar7 != -1;
                    lVar7 = lVar7 - (longlong)puVar17) {
                  local_128 = puVar19[uVar15 * 4 + 0x12];
                  if ((ulonglong)puVar19[uVar15 * 4 + 0x13] < 0x10) {
                    puVar16 = puVar19 + uVar15 * 4 + 0x10;
                  }
                  else {
                    puVar16 = (undefined8 *)puVar19[uVar15 * 4 + 0x10];
                  }
                  FUN_1800d8750(&local_e0,lVar7,7,puVar16);
                  puVar17 = &local_e0;
                  if (0xf < uStack_c8) {
                    puVar17 = (uint *)CONCAT44(uStack_dc,local_e0);
                  }
                  if (((local_d0 < 7) ||
                      (local_d0 - 7 < (ulonglong)(puVar19[uVar15 * 4 + 0x12] + lVar7))) ||
                     (lVar6 = local_d0 + (longlong)puVar17,
                     lVar7 = thunk_FUN_1804e92d0(puVar19[uVar15 * 4 + 0x12] + lVar7 +
                                                 (longlong)puVar17,lVar6,"$PANEL$",7),
                     lVar7 == lVar6)) break;
                }
                uVar21 = local_118;
              }
            }
            local_78 = local_e0;
            uStack_74 = uStack_dc;
            uStack_70 = uStack_d8;
            uStack_6c = uStack_d4;
            local_68 = (undefined4)local_d0;
            uStack_64 = local_d0._4_4_;
            uStack_60 = (undefined4)uStack_c8;
            uStack_5c = uStack_c8._4_4_;
            local_d0 = 0;
            uStack_c8 = 0xf;
            local_e0 = local_e0 & 0xffffff00;
            FUN_18000f890(&local_e0);
            FUN_18002ba60(puVar19 + uVar15 * 4,&local_78);
            uVar2 = CONCAT44(uStack_5c,uStack_60);
            if (0xf < uVar2) {
              uVar12 = uVar2 + 1;
              lVar7 = CONCAT44(uStack_74,local_78);
              lVar6 = lVar7;
              if (0xfff < uVar12) {
                lVar6 = *(longlong *)(lVar7 + -8);
                if (0x1f < (lVar7 - lVar6) - 8U) {
                  pcVar10 = (code *)swi(0x29);
                  (*pcVar10)(5);
                  puVar14 = auStack_140;
                  goto LAB_1800e4ce2;
                }
                uVar12 = uVar2 + 0x28;
              }
              thunk_FUN_1803d64e0(lVar6,uVar12);
            }
            uVar21 = uVar21 | 3;
            uVar20 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar20;
            local_118 = uVar21;
          } while ((int)uVar20 < 2);
          FUN_18000f890(local_98);
          puVar16 = local_b8;
          lVar6 = local_110;
          goto LAB_1800e4bc6;
        }
        FUN_18000f890(local_98);
      }
      puVar19 = puVar19 + 0x18;
      puVar14 = auStack_148;
    } while (puVar19 != puVar16);
  }
LAB_1800e4ce2:
  *(undefined8 *)(puVar14 + -8) = 0x1800e4ceb;
  FUN_1800e4e80(&local_b0);
LAB_1800e4ceb:
  *(undefined8 *)(puVar14 + -8) = 0x1800e4cf7;
  return;
}



/* ===== 1800e4d30 FUN_1800e4d30 ===== */

longlong FUN_1800e4d30(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int local_res10 [2];
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return param_2;
  }
  if (DAT_180cd10b0 < 1) {
    return param_2;
  }
  uVar4 = 0xffffffff;
  local_res10[0] = -1;
  iVar2 = FUN_1804e4d70(&DAT_1809ebca0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebcec == 0x7fffffff) {
    DAT_1809ebcec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar3 = 0;
  for (puVar1 = (undefined8 *)*DAT_180cd10c8; puVar1 != DAT_180cd10c8;
      puVar1 = (undefined8 *)*puVar1) {
    uVar6 = 0;
    do {
      if (lVar3 != 0) goto LAB_1800e4de8;
      if (*(longlong *)(puVar1[6] + 0xb8 + uVar6 * 8) == param_1) {
        lVar3 = puVar1[6];
        uVar4 = uVar6;
        local_res10[0] = (int)uVar6;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < 2);
    if (lVar3 != 0) break;
  }
LAB_1800e4de8:
  FUN_1804e4e90(&DAT_1809ebca0);
  if (lVar3 == 0) {
    lVar3 = FUN_1800e3150(param_1,local_res10);
    if (lVar3 == 0) {
      return param_2;
    }
    uVar4 = (ulonglong)local_res10[0];
    *(longlong *)(lVar3 + 0xb8 + uVar4 * 8) = param_1;
    if (*(char *)(lVar3 + 0xb0) == '\0') {
      return param_2;
    }
  }
  else if (*(char *)(lVar3 + 0xb0) == '\0') {
    return param_2;
  }
  FUN_1800e3350(lVar3,uVar4,param_2);
  return param_2;
}



/* ===== 1800e4e80 FUN_1800e4e80 ===== */

void FUN_1800e4e80(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0xc0) {
    FUN_1800e2c40(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 6) << 6)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800e4f0e;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1800e4f0e:
  *(undefined8 *)(puVar5 + -8) = 0x1800e4f16;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800e4f30 FUN_1800e4f30 ===== */

void FUN_1800e4f30(undefined8 *param_1)

{
  FUN_1800e5940(param_1,*param_1);
  thunk_FUN_1803d64e0(*param_1,0x38);
  return;
}



/* ===== 1800e4f60 FUN_1800e4f60 ===== */

undefined8 * FUN_1800e4f60(undefined8 param_1,undefined8 *param_2)

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
  
  puVar6 = DAT_180cd1088;
  if (DAT_180cd1088 != DAT_180cd1090) {
    uVar5 = param_2[1];
    *DAT_180cd1088 = *param_2;
    puVar6[1] = uVar5;
    puVar6 = DAT_180cd1088;
    DAT_180cd1088 = DAT_180cd1088 + 2;
    return puVar6;
  }
  uVar14 = 0xfffffffffffffff;
  uVar15 = (longlong)DAT_180cd1088 - (longlong)DAT_180cd1080;
  lVar10 = (longlong)uVar15 >> 4;
  if (lVar10 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar11 = lVar10 + 1;
  uVar8 = (longlong)DAT_180cd1090 - (longlong)DAT_180cd1080 >> 4;
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
  if (puVar6 == DAT_180cd1088) {
    lVar10 = (longlong)DAT_180cd1088 - (longlong)DAT_180cd1080;
    puVar9 = puVar7;
    puVar6 = DAT_180cd1080;
  }
  else {
    FUN_180540530(puVar7,DAT_180cd1080,(longlong)puVar6 - (longlong)DAT_180cd1080);
    puVar9 = puVar16 + 2;
    lVar10 = (longlong)DAT_180cd1088 - (longlong)puVar6;
  }
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  FUN_180540530(puVar9,puVar6,lVar10);
  if (DAT_180cd1080 == (undefined8 *)0x0) goto LAB_1800e50b1;
  puVar6 = DAT_180cd1080;
  if (((longlong)DAT_180cd1090 - (longlong)DAT_180cd1080 & 0xfffffffffffffff0U) < 0x1000) {
LAB_1800e50a9:
    puVar13 = puVar12;
  }
  else {
    puVar6 = (undefined8 *)DAT_180cd1080[-1];
    if (0x1f < (ulonglong)((longlong)DAT_180cd1080 + (-8 - (longlong)puVar6))) {
      pcVar1 = (code *)swi(0x29);
      puVar6 = (undefined8 *)(*pcVar1)(5);
      puVar12 = auStack_30;
      goto LAB_1800e50a9;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x1800e50b1;
  thunk_FUN_1803d64e0(puVar6);
LAB_1800e50b1:
  DAT_180cd1088 = puVar7 + uVar11 * 2;
  DAT_180cd1080 = puVar7;
  DAT_180cd1090 = puVar7 + uVar14 * 2;
  return puVar16;
}



/* ===== 1800e5100 FUN_1800e5100 ===== */

longlong * FUN_1800e5100(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  undefined4 uVar10;
  longlong local_58;
  longlong lStack_50;
  undefined8 *local_48;
  longlong *local_40;
  
  if ((ulonglong)param_3[3] < 0x10) {
    plVar2 = param_3;
  }
  else {
    plVar2 = (longlong *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar4 = 0;
  if (param_3[2] != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)(uVar4 + (longlong)plVar2)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)param_3[2]);
  }
  FUN_1800e5860(uVar4,&local_58,param_3,uVar7);
  if (lStack_50 != 0) {
    *param_2 = lStack_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180cd10d0 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  local_48 = &DAT_180cd10c8;
  local_40 = (longlong *)0x0;
  plVar2 = (longlong *)FUN_1804ecaa0(0x38);
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  lVar5 = param_3[1];
  plVar2[2] = *param_3;
  plVar2[3] = lVar5;
  lVar5 = param_3[3];
  plVar2[4] = param_3[2];
  plVar2[5] = lVar5;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  plVar2[6] = 0;
  uVar4 = DAT_180cd10f8;
  if (DAT_180cd10c0 < (float)(DAT_180cd10d0 + 1) / (float)DAT_180cd10f8) {
    local_40 = plVar2;
    fVar9 = (float)FUN_18053ef70((float)(DAT_180cd10d0 + 1) / DAT_180cd10c0);
    lVar5 = 0;
    if ((DAT_1808acd00 <= fVar9) && (fVar9 = fVar9 - DAT_1808acd00, fVar9 < DAT_1808acd00)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar9 + lVar5)) {
      uVar6 = (longlong)fVar9 + lVar5;
    }
    uVar8 = uVar4;
    if ((uVar4 < uVar6) && ((0x1ff < uVar4 || (uVar8 = uVar4 * 8, uVar4 * 8 < uVar6)))) {
      uVar8 = uVar6;
    }
    uVar10 = FUN_1800e5ab0(uVar6,uVar8);
    plVar3 = (longlong *)FUN_1800e5860(uVar10,&local_48,plVar2 + 2,uVar7);
    local_58 = *plVar3;
  }
  plVar3 = *(longlong **)(local_58 + 8);
  DAT_180cd10d0 = DAT_180cd10d0 + 1;
  *plVar2 = local_58;
  plVar2[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar2;
  *(longlong **)(local_58 + 8) = plVar2;
  lVar1 = DAT_180cd10d8;
  uVar7 = DAT_180cd10f0 & uVar7;
  lVar5 = *(longlong *)(DAT_180cd10d8 + uVar7 * 0x10);
  if (lVar5 == DAT_180cd10c8) {
    *(longlong **)(DAT_180cd10d8 + uVar7 * 0x10) = plVar2;
  }
  else {
    if (lVar5 == local_58) {
      *(longlong **)(DAT_180cd10d8 + uVar7 * 0x10) = plVar2;
      goto LAB_1800e535b;
    }
    if (*(longlong **)(DAT_180cd10d8 + 8 + uVar7 * 0x10) != plVar3) goto LAB_1800e535b;
  }
  *(longlong **)(lVar1 + 8 + uVar7 * 0x10) = plVar2;
LAB_1800e535b:
  *param_2 = (longlong)plVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1800e5380 FUN_1800e5380 ===== */

void FUN_1800e5380(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
        param_2[7] = 0;
        return;
      }
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar1;
      param_2[7] = 0;
    }
  }
  return;
}



/* ===== 1800e53f0 FUN_1800e53f0 ===== */

undefined8 * FUN_1800e53f0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  
  if (param_2 != param_3) {
    puVar10 = param_2 + 2;
    puVar2 = *(undefined8 **)(param_1 + 8);
    lVar3 = *(longlong *)(param_1 + 0x18);
    puVar4 = (undefined8 *)param_2[1];
    if (0xf < (ulonglong)param_2[5]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    uVar7 = 0;
    uVar8 = 0xcbf29ce484222325;
    if (param_2[4] != 0) {
      do {
        pbVar1 = (byte *)(uVar7 + (longlong)puVar10);
        uVar7 = uVar7 + 1;
        uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
      } while (uVar7 < (ulonglong)param_2[4]);
    }
    puVar10 = (undefined8 *)*param_2;
    puVar11 = (undefined8 *)((*(ulonglong *)(param_1 + 0x30) & uVar8) * 0x10 + lVar3);
    puVar6 = (undefined8 *)*puVar11;
    puVar5 = (undefined8 *)puVar11[1];
    FUN_1800e5a50(uVar7,param_2);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    puVar9 = puVar10;
    if (param_2 != puVar5) {
      do {
        if (puVar9 == param_3) {
          if (puVar6 == param_2) {
            *puVar11 = puVar9;
          }
          *puVar4 = puVar9;
          puVar9[1] = puVar4;
          return param_3;
        }
        puVar10 = (undefined8 *)*puVar9;
        FUN_1800e5a50();
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
        bVar12 = puVar9 != puVar5;
        puVar9 = puVar10;
      } while (bVar12);
    }
    if (puVar6 == param_2) {
      *puVar11 = puVar2;
      puVar6 = puVar2;
    }
    else {
      puVar6 = puVar4;
    }
    puVar11[1] = puVar6;
    while (puVar10 != param_3) {
      puVar6 = puVar10 + 2;
      if (0xf < (ulonglong)puVar10[5]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      uVar7 = 0;
      uVar8 = 0xcbf29ce484222325;
      if (puVar10[4] != 0) {
        do {
          pbVar1 = (byte *)((longlong)puVar6 + uVar7);
          uVar7 = uVar7 + 1;
          uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
        } while (uVar7 < (ulonglong)puVar10[4]);
      }
      puVar6 = (undefined8 *)*puVar10;
      puVar11 = (undefined8 *)((*(ulonglong *)(param_1 + 0x30) & uVar8) * 0x10 + lVar3);
      puVar5 = (undefined8 *)puVar11[1];
      FUN_1800e5a50(uVar7,puVar10);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      puVar9 = puVar10;
      while (puVar10 = puVar6, puVar9 != puVar5) {
        if (puVar10 == param_3) {
          *puVar11 = puVar10;
          goto LAB_1800e55c1;
        }
        puVar6 = (undefined8 *)*puVar10;
        FUN_1800e5a50();
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
        puVar9 = puVar10;
      }
      *puVar11 = puVar2;
      puVar11[1] = puVar2;
    }
LAB_1800e55c1:
    *puVar4 = puVar10;
    puVar10[1] = puVar4;
  }
  return param_3;
}



/* ===== 1800e5600 FUN_1800e5600 ===== */

longlong FUN_1800e5600(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar7 = DAT_180cd1098;
  uVar8 = 0x155555555555555;
  lVar4 = (DAT_180cd10a0 - DAT_180cd1098 >> 6) * -0x5555555555555555;
  if (lVar4 == 0x155555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar4 + 1;
  uVar6 = (DAT_180cd10a8 - DAT_180cd1098 >> 6) * -0x5555555555555555;
  if (uVar6 <= 0x155555555555555 - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar8 = uVar1;
    if (uVar1 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0x155555555555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar5 = FUN_18000fb70(uVar8 * 0xc0);
  lVar11 = ((param_2 - lVar7) / 0xc0) * 0xc0 + lVar5;
  FUN_1800e5d20(lVar11,param_3);
  lVar3 = DAT_180cd10a0;
  puVar9 = auStack_48;
  puVar10 = auStack_48;
  lVar7 = lVar5;
  lVar4 = DAT_180cd1098;
  if (param_2 == DAT_180cd10a0) {
    for (; lVar4 != lVar3; lVar4 = lVar4 + 0xc0) {
      FUN_1800e5d20(lVar7,lVar4);
      lVar7 = lVar7 + 0xc0;
    }
  }
  else {
    for (; DAT_180cd10a0 = lVar3, lVar4 != param_2; lVar4 = lVar4 + 0xc0) {
      FUN_1800e5d20(lVar7,lVar4);
      lVar7 = lVar7 + 0xc0;
      lVar3 = DAT_180cd10a0;
    }
    lVar7 = lVar11;
    for (; param_2 != lVar3; param_2 = param_2 + 0xc0) {
      lVar7 = lVar7 + 0xc0;
      FUN_1800e5d20(lVar7,param_2);
    }
  }
  lVar4 = DAT_180cd10a0;
  lVar7 = DAT_180cd1098;
  if (DAT_180cd1098 == 0) goto LAB_1800e5807;
  for (; lVar7 != lVar4; lVar7 = lVar7 + 0xc0) {
    FUN_1800e2c40(lVar7);
  }
  lVar7 = DAT_180cd1098;
  if ((ulonglong)((DAT_180cd10a8 - DAT_180cd1098 >> 6) << 6) < 0x1000) {
LAB_1800e57fc:
    puVar10 = puVar9;
  }
  else {
    lVar7 = *(longlong *)(DAT_180cd1098 + -8);
    if (0x1f < (DAT_180cd1098 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_40;
      goto LAB_1800e57fc;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x1800e5807;
  thunk_FUN_1803d64e0(lVar7);
LAB_1800e5807:
  DAT_180cd1098 = lVar5;
  DAT_180cd10a0 = uVar1 * 0xc0 + lVar5;
  DAT_180cd10a8 = uVar8 * 0xc0 + lVar5;
  return lVar11;
}



/* ===== 1800e5860 FUN_1800e5860 ===== */

undefined8 *
FUN_1800e5860(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(DAT_180cd10d8 + 8 + (DAT_180cd10f0 & param_4) * 0x10);
  if (puVar4 == DAT_180cd10c8) {
    *param_2 = DAT_180cd10c8;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = *(undefined8 **)(DAT_180cd10d8 + (DAT_180cd10f0 & param_4) * 0x10);
  _Size = param_3[2];
  uVar2 = param_3[3];
  while( true ) {
    _Buf2 = puVar4 + 2;
    if (0xf < (ulonglong)puVar4[5]) {
      _Buf2 = (undefined8 *)*_Buf2;
    }
    if (uVar2 < 0x10) {
      _Buf1 = param_3;
    }
    else {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == puVar4[4]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0))))
    break;
    if (puVar4 == puVar1) {
      *param_2 = puVar4;
      param_2[1] = 0;
      return param_2;
    }
    puVar4 = (undefined8 *)puVar4[1];
  }
  *param_2 = *puVar4;
  param_2[1] = puVar4;
  return param_2;
}



/* ===== 1800e5940 FUN_1800e5940 ===== */

void FUN_1800e5940(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)param_2[1] = 0;
  puVar3 = (undefined8 *)*param_2;
  while (puVar3 != (undefined8 *)0x0) {
    lVar1 = puVar3[6];
    puVar2 = (undefined8 *)*puVar3;
    if (lVar1 != 0) {
      FUN_18000f890(lVar1 + 0x28);
      FUN_18000f890(lVar1);
      thunk_FUN_1803d64e0(lVar1,200);
    }
    FUN_18000f890(puVar3 + 2);
    thunk_FUN_1803d64e0(puVar3,0x38);
    puVar3 = puVar2;
  }
  return;
}



/* ===== 1800e59d0 FUN_1800e59d0 ===== */

void FUN_1800e59d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x30);
    if (lVar2 != 0) {
      FUN_18000f890(lVar2 + 0x28);
      FUN_18000f890(lVar2);
      thunk_FUN_1803d64e0(lVar2,200);
    }
    FUN_18000f890(lVar1 + 0x10);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x38);
  return;
}



/* ===== 1800e5a50 FUN_1800e5a50 ===== */

void FUN_1800e5a50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    FUN_18000f890(lVar1 + 0x28);
    FUN_18000f890(lVar1);
    thunk_FUN_1803d64e0(lVar1,200);
  }
  FUN_18000f890(param_2 + 0x10);
  thunk_FUN_1803d64e0(param_2,0x38);
  return;
}



/* ===== 1800e5ab0 FUN_1800e5ab0 ===== */

void FUN_1800e5ab0(undefined8 param_1,ulonglong param_2)

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
  
  plVar7 = DAT_180cd10c8;
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
  FUN_180029d30(&DAT_180cd10d8,2L << (bVar12 & 0x3f),DAT_180cd10c8);
  DAT_180cd10f0 = lVar14 - 1;
  DAT_180cd10f8 = lVar14;
  plVar6 = (longlong *)*DAT_180cd10c8;
  lVar14 = DAT_180cd10d8;
joined_r0x0001800e5b31:
  do {
    while( true ) {
      if (plVar6 == plVar7) {
        DAT_180cd10d8 = lVar14;
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
      uVar17 = uVar17 & DAT_180cd10f0;
      plVar11 = *(longlong **)(lVar14 + uVar17 * 0x10);
      DAT_180cd10d8 = lVar14;
      if (plVar11 != plVar7) break;
      *(longlong **)(lVar14 + uVar17 * 0x10) = plVar6;
      *(longlong **)(lVar14 + 8 + uVar17 * 0x10) = plVar6;
      plVar6 = plVar2;
      lVar14 = DAT_180cd10d8;
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
LAB_1800e5c3a:
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
              lVar14 = DAT_180cd10d8;
              goto joined_r0x0001800e5b31;
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
      lVar14 = DAT_180cd10d8;
      goto joined_r0x0001800e5b31;
    }
    if ((uVar9 != 0) && (iVar8 = memcmp(_Buf1,plVar13,uVar9), iVar8 != 0)) {
      plVar11 = *(longlong **)(lVar14 + uVar17 * 0x10);
      uVar16 = plVar6[5];
      goto LAB_1800e5c3a;
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
    lVar14 = DAT_180cd10d8;
  } while( true );
}



/* ===== 1800e5d20 FUN_1800e5d20 ===== */

longlong FUN_1800e5d20(longlong param_1,longlong param_2)

{
  FUN_1804ed050(param_1,param_2,0x20,2,FUN_180024af0,thunk_FUN_18000f890);
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_1800e5380(param_1 + 0x40,param_2 + 0x40);
  FUN_1804ed050(param_1 + 0x80,param_2 + 0x80,0x20,2,FUN_180024af0,thunk_FUN_18000f890);
  return param_1;
}



/* ===== 1800e5db0 FUN_1800e5db0 ===== */

undefined8 FUN_1800e5db0(undefined8 *param_1)

{
  int iVar1;
  size_t sVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  sVar2 = strlen("gen|");
  uVar4 = 4;
  if ((ulonglong)param_1[2] < 4) {
    uVar4 = param_1[2];
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar3 = uVar4;
  if (sVar2 < uVar4) {
    uVar3 = sVar2;
  }
  iVar1 = memcmp(param_1,&DAT_1806f1fc8,uVar3);
  uVar3 = CONCAT44(extraout_var,iVar1);
  bVar5 = false;
  if (iVar1 == 0) {
    if (uVar4 < sVar2) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (ulonglong)(sVar2 < uVar4);
    }
    bVar5 = (int)uVar3 == 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),bVar5);
}



/* ===== 1800e5e30 FUN_1800e5e30 ===== */

undefined8 * FUN_1800e5e30(undefined8 *param_1)

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
  undefined8 *local_res18;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 7;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar5 = param_1 + 0xd;
  *(undefined4 *)puVar5 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_res18 = puVar5;
  lVar4 = FUN_1804ecaa0(0x58);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  param_1[0xe] = lVar4;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 7;
  param_1[0x14] = 8;
  *(undefined4 *)puVar5 = 0x3f800000;
  uVar2 = param_1[0xe];
  local_res10 = uVar2;
  if (0x7f < (ulonglong)(param_1[0x11] - param_1[0x10])) {
    FUN_180026a10(param_1[0x10],param_1[0x11],&local_res10);
    goto LAB_1800e5f79;
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x80);
  puVar7 = auStack_38;
  puVar8 = auStack_38;
  lVar4 = param_1[0x10];
  if (7 < (ulonglong)(param_1[0x12] - lVar4)) {
    if ((ulonglong)((param_1[0x12] - lVar4 >> 3) * 8) < 0x1000) {
LAB_1800e5f40:
      lVar6 = lVar4;
      puVar8 = puVar7;
    }
    else {
      lVar6 = *(longlong *)(lVar4 + -8);
      if (0x1f < (lVar4 - lVar6) - 8U) {
        pcVar3 = (code *)swi(0x29);
        lVar4 = (*pcVar3)(5);
        puVar7 = auStack_30;
        goto LAB_1800e5f40;
      }
    }
    *(undefined8 *)(puVar8 + -8) = 0x1800e5f48;
    thunk_FUN_1803d64e0(lVar6);
  }
  param_1[0x10] = puVar5;
  puVar1 = puVar5 + 0x10;
  param_1[0x11] = puVar1;
  param_1[0x12] = puVar1;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    *puVar5 = uVar2;
  }
LAB_1800e5f79:
  param_1[0x15] = "not opened";
  return param_1;
}



/* ===== 1800e5fa0 FUN_1800e5fa0 ===== */

void FUN_1800e5fa0(longlong param_1)

{
  FUN_1800132b0(param_1 + 0x80);
  FUN_1800e8810(param_1 + 0x70);
  FUN_1800289e0(param_1 + 0x40);
  FUN_18000f890(param_1 + 0x20);
  FUN_1800289e0(param_1);
  return;
}



/* ===== 1800e5fe0 FUN_1800e5fe0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800e5fe0(longlong *param_1,longlong param_2)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined8 ****ppppuVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  float local_a8;
  undefined8 local_a0;
  int local_98;
  undefined4 local_90;
  int local_88;
  undefined8 ****local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_c8;
  uVar13 = param_1[1];
  uVar5 = uVar13 - *param_1;
  puVar12 = auStack_c8;
  if (3 < (longlong)uVar5) {
    uVar6 = thunk_FUN_1804e92d0(*param_1,uVar13,&DAT_1806f1f6c,4);
    uVar5 = uVar6;
    puVar12 = auStack_c8;
    if ((uVar6 != uVar13) && (puVar12 = auStack_c8, 5 < (longlong)(uVar13 - uVar6))) {
      uVar5 = thunk_FUN_1804e6890(uVar6,uVar13,"</svg>",6);
      puVar12 = auStack_c8;
      if (uVar5 != uVar13) {
        local_78 = (undefined8 ****)0x0;
        uStack_70 = 0;
        local_68 = 0;
        local_60 = 0;
        if (uVar6 == uVar5 + 6) {
          local_68 = 0;
          local_60 = 0xf;
          local_78 = (undefined8 ****)0x0;
        }
        else {
          FUN_1800133a0(&local_78,uVar6,(uVar5 + 6) - uVar6);
        }
        fVar3 = DAT_1808acafc;
        ppppuVar11 = &local_78;
        if (0xf < local_60) {
          ppppuVar11 = local_78;
        }
        pfVar7 = (float *)FUN_180399ee0(ppppuVar11);
        if (pfVar7 == (float *)0x0) {
LAB_1800e6299:
          uVar5 = 0;
        }
        else {
          if (((*pfVar7 <= 0.0) || (pfVar7[1] <= 0.0)) ||
             (puVar8 = (undefined8 *)_malloc_base(0x80), puVar8 == (undefined8 *)0x0)) {
            FUN_18039a280(pfVar7);
            goto LAB_1800e6299;
          }
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[7] = 0;
          puVar8[8] = 0;
          puVar8[9] = 0;
          puVar8[10] = 0;
          puVar8[0xb] = 0;
          puVar8[0xc] = 0;
          puVar8[0xd] = 0;
          puVar8[0xe] = 0;
          puVar8[0xf] = 0;
          *(undefined4 *)(puVar8 + 1) = 0x3e800000;
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0x3c23d70a;
          fVar1 = pfVar7[1];
          iVar4 = (int)((fVar3 / fVar1) * *pfVar7 + DAT_1808ac1f4);
          iVar10 = 1;
          if (1 < iVar4) {
            iVar10 = iVar4;
          }
          *(int *)(param_2 + 0x20) = iVar10;
          *(undefined4 *)(param_2 + 0x24) = 0x60;
          uVar13 = (longlong)iVar10 * 0x180;
          lVar9 = *(longlong *)(param_2 + 0x28);
          if ((ulonglong)(*(longlong *)(param_2 + 0x38) - lVar9) < uVar13) {
            FUN_1800950c0(param_2 + 0x28,uVar13);
            lVar9 = *(longlong *)(param_2 + 0x28);
LAB_1800e61a8:
            FUN_180540170(lVar9,0,uVar13);
            lVar9 = lVar9 + uVar13;
          }
          else {
            uVar5 = *(longlong *)(param_2 + 0x30) - lVar9;
            if (uVar5 < uVar13) {
              FUN_180540170(lVar9,0,uVar5);
              uVar13 = uVar13 - uVar5;
              lVar9 = *(longlong *)(param_2 + 0x30);
              goto LAB_1800e61a8;
            }
            FUN_180540170(lVar9,0,uVar13);
            lVar9 = lVar9 + uVar13;
          }
          *(longlong *)(param_2 + 0x30) = lVar9;
          local_98 = *(int *)(param_2 + 0x20);
          local_88 = local_98 * 4;
          local_90 = *(undefined4 *)(param_2 + 0x24);
          local_a0 = *(undefined8 *)(param_2 + 0x28);
          local_a8 = fVar3 / fVar1;
          FUN_18039d7c0(puVar8,pfVar7,0,0);
          lVar9 = puVar8[9];
          while (lVar9 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x408);
            thunk_FUN_1805277b0();
          }
          if (puVar8[2] != 0) {
            thunk_FUN_1805277b0();
          }
          if (puVar8[4] != 0) {
            thunk_FUN_1805277b0();
          }
          if (puVar8[6] != 0) {
            thunk_FUN_1805277b0();
          }
          if (puVar8[0xb] != 0) {
            thunk_FUN_1805277b0();
          }
          thunk_FUN_1805277b0(puVar8);
          FUN_18039a280(pfVar7);
          uVar5 = 1;
        }
        puVar12 = auStack_c8;
        if (local_60 < 0x10) goto LAB_1800e62e2;
        uVar13 = local_60 + 1;
        ppppuVar11 = local_78;
        if (0xfff < uVar13) {
          ppppuVar11 = (undefined8 ****)local_78[-1];
          if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar11))) {
            pcVar2 = (code *)swi(0x29);
            uVar5 = (*pcVar2)(5);
            puVar12 = auStack_c0;
            goto LAB_1800e62e0;
          }
          uVar13 = local_60 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppuVar11,uVar13);
        goto LAB_1800e62e2;
      }
    }
  }
LAB_1800e62e0:
  uVar5 = uVar5 & 0xffffffffffffff00;
LAB_1800e62e2:
  *(undefined8 *)(puVar12 + -8) = 0x1800e62ef;
  return uVar5;
}



/* ===== 1800e6320 FUN_1800e6320 ===== */

byte FUN_1800e6320(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  HRESULT HVar1;
  int iVar2;
  byte extraout_var;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint local_res20 [2];
  uint local_68 [2];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40 [2];
  
  local_60 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_40[0] = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_res20[0] = 0;
  local_68[0] = 0;
  bVar3 = 0;
  HVar1 = CoCreateInstance((IID *)&DAT_180571d70,(LPUNKNOWN)0x0,1,(IID *)&DAT_1806f1fd0,&local_60);
  if (HVar1 < 0) goto LAB_1800e6519;
  iVar2 = (**(code **)(*local_60 + 0x70))(local_60,&local_48);
  if (iVar2 < 0) goto LAB_1800e6519;
  iVar2 = (**(code **)(*local_48 + 0x80))(local_48,param_1,param_2);
  if (iVar2 < 0) goto LAB_1800e6519;
  iVar2 = (**(code **)(*local_60 + 0x20))(local_60,local_48,0,0,local_40);
  if (iVar2 < 0) goto LAB_1800e6519;
  iVar2 = (**(code **)(*local_40[0] + 0x68))(local_40[0],0,&local_50);
  if (iVar2 < 0) goto LAB_1800e6519;
  iVar2 = (**(code **)(*local_50 + 0x18))(local_50,local_res20,local_68);
  if (((iVar2 < 0) || (local_res20[0] == 0)) || (local_68[0] == 0)) goto LAB_1800e6519;
  iVar2 = (**(code **)(*local_60 + 0x50))(local_60,&local_58);
  if (iVar2 < 0) goto LAB_1800e6519;
  iVar2 = (**(code **)(*local_58 + 0x40))(local_58,local_50,&DAT_180571d80,0,0,0,0);
  if (iVar2 < 0) goto LAB_1800e6519;
  *(uint *)(param_3 + 0x24) = local_68[0];
  *(uint *)(param_3 + 0x20) = local_res20[0];
  lVar5 = *(longlong *)(param_3 + 0x28);
  uVar6 = (ulonglong)local_68[0] * (ulonglong)local_res20[0] * 4;
  if ((ulonglong)(*(longlong *)(param_3 + 0x38) - lVar5) < uVar6) {
    FUN_1800950c0(param_3 + 0x28,uVar6);
    lVar5 = *(longlong *)(param_3 + 0x28);
LAB_1800e64ca:
    FUN_180540170(lVar5,0,uVar6);
    lVar5 = lVar5 + uVar6;
  }
  else {
    uVar4 = *(longlong *)(param_3 + 0x30) - lVar5;
    if (uVar4 < uVar6) {
      FUN_180540170(lVar5,0,uVar4);
      uVar6 = uVar6 - uVar4;
      lVar5 = *(longlong *)(param_3 + 0x30);
      goto LAB_1800e64ca;
    }
    FUN_180540170(lVar5,0,uVar6);
    lVar5 = lVar5 + uVar6;
  }
  *(longlong *)(param_3 + 0x30) = lVar5;
  (**(code **)(*local_58 + 0x38))
            (local_58,0,local_res20[0] * 4,(int)lVar5 - (int)*(undefined8 *)(param_3 + 0x28),
             *(undefined8 *)(param_3 + 0x28));
  bVar3 = extraout_var >> 7 ^ 1;
LAB_1800e6519:
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
  return bVar3;
}



/* ===== 1800e6580 FUN_1800e6580 ===== */

ulonglong FUN_1800e6580(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong in_RAX;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  uint uVar28;
  uint local_res20;
  undefined4 *local_98;
  undefined4 *puStack_90;
  undefined4 *local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  
  lVar16 = param_1[1];
  puVar7 = (uint *)*param_1;
  uVar15 = lVar16 - (longlong)puVar7;
  if ((uVar15 < 0x10) || (puVar7[3] == 0)) {
LAB_1800e6c38:
    return in_RAX & 0xffffffffffffff00;
  }
  lVar20 = 0;
  uVar25 = 0;
  uVar26 = (ulonglong)(puVar7[2] + 8);
  do {
    in_RAX = uVar26 + 0xc + uVar25 * 0xc;
    if ((ulonglong)(lVar16 - (longlong)puVar7) < in_RAX) goto LAB_1800e6c38;
    lVar24 = uVar26 + uVar25 * 0xc;
    if (*(int *)((longlong)puVar7 + lVar24) == 0x41544144) {
      uVar22 = 0;
      in_RAX = uVar26 + 8 + uVar25 * 0xc;
      if (in_RAX <= uVar15) {
        in_RAX = uVar26 + uVar25 * 0xc;
        uVar22 = *(uint *)(in_RAX + 4 + (longlong)puVar7);
      }
      lVar20 = (ulonglong)uVar22 + 4 + lVar24;
    }
    uVar22 = (int)uVar25 + 1;
    uVar25 = (ulonglong)uVar22;
  } while (uVar22 < puVar7[3]);
  if ((lVar20 == 0) || (in_RAX = lVar20 + 0x28, uVar15 < in_RAX)) goto LAB_1800e6c38;
  local_7c = 0;
  if (lVar20 + 0x16U <= uVar15) {
    local_7c = (uint)*(ushort *)((longlong)puVar7 + lVar20 + 0x14);
  }
  uVar22 = 0;
  local_80 = 0;
  in_RAX = lVar20 + 0x18;
  if (in_RAX <= uVar15) {
    uVar6 = *(ushort *)((longlong)puVar7 + lVar20 + 0x16);
    uVar22 = (uint)uVar6;
    local_80 = (uint)uVar6;
  }
  bVar3 = *(byte *)((longlong)puVar7 + lVar20 + 0x1b);
  local_74 = (uint)bVar3;
  if (bVar3 == 0) {
    local_74 = 1;
  }
  if (((short)local_7c == 0) || ((short)uVar22 == 0)) goto LAB_1800e6c38;
  local_70 = *puVar7;
  uVar25 = (ulonglong)local_70;
  bVar3 = *(byte *)((longlong)puVar7 + lVar20 + 0x1a);
  in_RAX = (ulonglong)(bVar3 - 0xf);
  if ((byte)(bVar3 - 0xf) < 4) {
    if ((uVar25 < uVar15) &&
       (in_RAX = FUN_1800e6320(uVar25 + (longlong)puVar7,(lVar16 - uVar25) - (longlong)puVar7,
                               param_2), (char)in_RAX != '\0')) {
      return 1;
    }
    goto LAB_1800e6c38;
  }
  if ((bVar3 != 4) && (bVar3 != 0x1c)) goto LAB_1800e6c38;
  local_98 = (undefined4 *)0x0;
  puStack_90 = (undefined4 *)0x0;
  puVar11 = (undefined4 *)0x0;
  local_88 = (undefined4 *)0x0;
  uVar28 = 0;
  if (lVar20 + 0x24U <= uVar15) {
    uVar28 = *(uint *)(lVar20 + 0x20 + (longlong)puVar7);
  }
  lVar16 = (ulonglong)uVar28 + lVar20;
  local_78 = *(uint *)(lVar20 + 0x24 + (longlong)puVar7);
  uVar15 = 0;
  local_res20 = 0;
  puVar13 = (undefined4 *)0x0;
  local_58 = lVar16;
  if (local_78 != 0) {
    do {
      lVar20 = uVar15 * 0xc;
      lVar24 = *param_1;
      uVar15 = param_1[1] - lVar24;
      uVar25 = lVar16 + 0x24 + lVar20;
      if (uVar25 <= uVar15) {
        if (*(int *)(lVar20 + lVar16 + 0x20 + lVar24) == 4) {
          uVar22 = 0;
          if ((ulonglong)(lVar16 + 0x28 + lVar20) <= uVar15) {
            uVar22 = *(uint *)(lVar24 + uVar25);
          }
          uVar25 = (ulonglong)uVar22;
          uVar22 = 0;
          if (lVar16 + 0x30 + lVar20 + uVar25 <= uVar15) {
            uVar22 = *(uint *)(lVar16 + 0x2c + lVar20 + uVar25 + lVar24);
          }
          uVar28 = 0;
          if (lVar16 + 0x2c + lVar20 + uVar25 <= uVar15) {
            uVar28 = *(uint *)(lVar16 + 0x28 + lVar20 + uVar25 + lVar24);
          }
          lVar24 = lVar16 + 0x28 + lVar20 + uVar25 + (ulonglong)uVar28;
          uVar15 = 0;
          local_68 = lVar24;
          if (uVar22 != 0) {
            local_60 = lVar16 + 0x2c + lVar20 + uVar25 + (ulonglong)uVar28;
            do {
              uVar27 = 0;
              if (local_60 + uVar15 * 4 <= (ulonglong)(param_1[1] - *param_1)) {
                uVar27 = *(undefined4 *)(*param_1 + lVar24 + uVar15 * 4);
              }
              if (puVar13 == puVar11) {
                uVar25 = (longlong)puVar13 - (longlong)local_98;
                lVar16 = (longlong)uVar25 >> 2;
                if (lVar16 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  FUN_1800118d0();
                }
                uVar26 = lVar16 + 1;
                uVar12 = (longlong)puVar11 - (longlong)local_98 >> 2;
                if (0x3fffffffffffffff - (uVar12 >> 1) < uVar12) {
                  uVar18 = 0x3fffffffffffffff;
                }
                else {
                  uVar12 = (uVar12 >> 1) + uVar12;
                  uVar18 = uVar26;
                  if (uVar26 <= uVar12) {
                    uVar18 = uVar12;
                  }
                  if (0x3fffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
                    FUN_18000d840();
                  }
                }
                lVar16 = FUN_18000fb70(uVar18 * 4);
                uVar25 = uVar25 & 0xfffffffffffffffc;
                *(undefined4 *)(uVar25 + lVar16) = uVar27;
                if (puVar13 == puStack_90) {
                  lVar24 = (longlong)puStack_90 - (longlong)local_98;
                  lVar20 = lVar16;
                  puVar13 = local_98;
                }
                else {
                  FUN_180540530(lVar16,local_98,(longlong)puVar13 - (longlong)local_98);
                  lVar24 = (longlong)puStack_90 - (longlong)puVar13;
                  lVar20 = lVar16 + 4 + uVar25;
                }
                FUN_180540530(lVar20,puVar13,lVar24);
                FUN_18006b9f0(&local_98,lVar16,uVar26,uVar18);
                lVar24 = local_68;
              }
              else {
                *puVar13 = uVar27;
                puStack_90 = puStack_90 + 1;
              }
              uVar28 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar28;
              puVar13 = puStack_90;
              puVar11 = local_88;
            } while (uVar28 < uVar22);
            lVar16 = local_58;
          }
        }
      }
      local_res20 = local_res20 + 1;
      uVar15 = (ulonglong)local_res20;
    } while (local_res20 < local_78);
    uVar25 = (ulonglong)local_70;
    uVar22 = local_80;
  }
  if ((local_98 == puVar13) || ((int)local_74 <= (int)((longlong)puVar13 - (longlong)local_98 >> 2))
     ) {
    uVar23 = local_7c & 0xffff;
    iVar9 = 0;
    uVar28 = local_74;
    iVar17 = 0;
    if (1 < local_74) {
      do {
        iVar17 = iVar9;
        if ((int)uVar23 >> ((byte)iVar9 & 0x1f) < 0x101) break;
        iVar17 = iVar9 + 1;
        iVar8 = iVar9 + 2;
        iVar9 = iVar17;
      } while (iVar8 < (int)local_74);
    }
    while (uVar28 = uVar28 - 1, iVar17 < (int)uVar28) {
      if (local_98 == puVar13) {
        iVar8 = (int)uVar23 >> ((byte)uVar28 & 0x1f);
        iVar9 = (int)(uVar22 & 0xffff) >> ((byte)uVar28 & 0x1f);
        if (iVar9 < 1) {
          iVar9 = 1;
        }
        if (iVar8 < 1) {
          iVar8 = 1;
        }
        uVar15 = (longlong)iVar9 * (longlong)iVar8 * 4;
      }
      else {
        uVar15 = (ulonglong)(uint)local_98[(int)uVar28];
      }
      uVar25 = uVar25 + uVar15;
    }
    iVar8 = (int)uVar23 >> ((byte)iVar17 & 0x1f);
    iVar9 = (int)(uVar22 & 0xffff) >> ((byte)iVar17 & 0x1f);
    if (local_98 == puVar13) {
      iVar17 = iVar9;
      if (iVar9 < 1) {
        iVar17 = 1;
      }
      iVar10 = iVar8;
      if (iVar8 < 1) {
        iVar10 = 1;
      }
      uVar15 = (longlong)iVar17 * (longlong)iVar10 * 4;
    }
    else {
      uVar15 = (ulonglong)(uint)local_98[iVar17];
    }
    if (uVar15 + uVar25 <= (ulonglong)(param_1[1] - *param_1)) {
      if (iVar8 < 1) {
        iVar8 = 1;
      }
      *(int *)(param_2 + 0x20) = iVar8;
      if (iVar9 < 1) {
        iVar9 = 1;
      }
      *(int *)(param_2 + 0x24) = iVar9;
      plVar1 = (longlong *)(param_2 + 0x28);
      FUN_1800e88a0(plVar1,(longlong)iVar9 * (longlong)iVar8 * 4);
      lVar16 = *plVar1;
      uVar26 = *(longlong *)(param_2 + 0x30) - lVar16;
      lVar20 = uVar25 + *param_1;
      if (local_98 == puStack_90) {
        FUN_180540530(lVar16,lVar20);
      }
      else {
        uVar25 = 0;
        uVar12 = 0;
        if (uVar15 != 0) {
          do {
            bVar4 = *(byte *)(uVar25 + lVar20);
            uVar25 = uVar25 + 1;
            uVar18 = (ulonglong)(bVar4 >> 4);
            if (uVar18 == 0xf) {
              do {
                if (uVar15 <= uVar25) goto LAB_1800e6c03;
                pbVar2 = (byte *)(uVar25 + lVar20);
                uVar25 = uVar25 + 1;
                uVar18 = uVar18 + *pbVar2;
              } while (*pbVar2 == 0xff);
            }
            uVar14 = uVar18 + uVar25;
            if ((uVar15 < uVar14) || (uVar18 = uVar18 + uVar12, uVar26 < uVar18))
            goto LAB_1800e6c03;
            FUN_180540530(uVar12 + lVar16,uVar25 + lVar20);
            uVar12 = uVar18;
            if (uVar15 <= uVar14) break;
            uVar25 = uVar14 + 2;
            if (((uVar15 < uVar25) ||
                (uVar14 = (ulonglong)
                          CONCAT11(*(undefined1 *)(lVar20 + 1 + uVar14),
                                   *(undefined1 *)(lVar20 + uVar14)), uVar14 == 0)) ||
               (uVar18 < uVar14)) goto LAB_1800e6c03;
            uVar21 = (ulonglong)(bVar4 & 0xf) + 4;
            if ((bVar4 & 0xf) == 0xf) {
              do {
                if (uVar15 <= uVar25) goto LAB_1800e6c03;
                pbVar2 = (byte *)(uVar25 + lVar20);
                uVar25 = uVar25 + 1;
                uVar21 = uVar21 + *pbVar2;
              } while (*pbVar2 == 0xff);
            }
            uVar12 = uVar21 + uVar18;
            if (uVar26 < uVar12) goto LAB_1800e6c03;
            uVar19 = 0;
            if (uVar21 != 0) {
              do {
                *(undefined1 *)(lVar16 + uVar19 + uVar18) =
                     *(undefined1 *)(lVar16 + uVar19 + (uVar18 - uVar14));
                uVar19 = uVar19 + 1;
              } while (uVar19 < uVar21);
            }
          } while (uVar25 < uVar15);
        }
        if (uVar12 != uVar26) goto LAB_1800e6c03;
      }
      if (bVar3 == 0x1c) {
        lVar16 = *plVar1;
        lVar20 = 0;
        if (3 < (ulonglong)(*(longlong *)(param_2 + 0x30) - lVar16)) {
          do {
            uVar5 = *(undefined1 *)(lVar16 + lVar20);
            *(undefined1 *)(lVar16 + lVar20) = *(undefined1 *)(lVar16 + 2 + lVar20);
            *(undefined1 *)(lVar16 + 2 + lVar20) = uVar5;
            lVar16 = *plVar1;
            uVar15 = lVar20 + 7;
            lVar20 = lVar20 + 4;
          } while (uVar15 < (ulonglong)(*(longlong *)(param_2 + 0x30) - lVar16));
        }
      }
      uVar15 = 1;
      goto LAB_1800e6c05;
    }
  }
LAB_1800e6c03:
  uVar15 = 0;
LAB_1800e6c05:
  FUN_180068f30(&local_98);
  return uVar15;
}



/* ===== 1800e6c60 FUN_1800e6c60 ===== */

void FUN_1800e6c60(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  int local_68;
  int local_64;
  
  iVar4 = (int)(*(int *)(param_1 + 0x20) + (*(int *)(param_1 + 0x20) >> 0x1f & 0x1ffU)) >> 9;
  iVar10 = 1;
  if (1 < iVar4) {
    iVar10 = iVar4;
  }
  FUN_18002ba60(param_2,param_1);
  iVar5 = *(int *)(param_1 + 0x20) / iVar10;
  iVar4 = 1;
  if (1 < iVar5) {
    iVar4 = iVar5;
  }
  *(int *)(param_2 + 0x20) = iVar4;
  iVar6 = *(int *)(param_1 + 0x24) / iVar10;
  iVar5 = 1;
  if (1 < iVar6) {
    iVar5 = iVar6;
  }
  *(int *)(param_2 + 0x24) = iVar5;
  if (iVar10 == 1) {
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    FUN_180081c90(param_2 + 0x28,param_1 + 0x28);
    return;
  }
  lVar9 = *(longlong *)(param_2 + 0x28);
  uVar16 = (longlong)iVar4 * (longlong)iVar5 * 4;
  if ((ulonglong)(*(longlong *)(param_2 + 0x38) - lVar9) < uVar16) {
    FUN_1800950c0(param_2 + 0x28,uVar16);
    lVar9 = *(longlong *)(param_2 + 0x28);
  }
  else {
    uVar14 = *(longlong *)(param_2 + 0x30) - lVar9;
    if (uVar16 <= uVar14) {
      FUN_180540170(lVar9,0,uVar16);
      lVar9 = lVar9 + uVar16;
      goto LAB_1800e6d70;
    }
    FUN_180540170(lVar9,0,uVar14);
    uVar16 = uVar16 - uVar14;
    lVar9 = *(longlong *)(param_2 + 0x30);
  }
  FUN_180540170(lVar9,0,uVar16);
  lVar9 = lVar9 + uVar16;
LAB_1800e6d70:
  *(longlong *)(param_2 + 0x30) = lVar9;
  local_64 = 0;
  if (0 < *(int *)(param_2 + 0x24)) {
    do {
      if (0 < *(int *)(param_2 + 0x20)) {
        local_68 = 0;
        uVar16 = (longlong)iVar10 * (longlong)iVar10;
        do {
          lVar15 = 0;
          lVar9 = 0;
          lVar11 = 0;
          uVar14 = 0;
          if (0 < iVar10) {
            iVar4 = 0;
            do {
              lVar7 = (longlong)local_68 * (longlong)iVar10 * 4 +
                      (longlong)(local_64 * iVar10 + iVar4) * (longlong)*(int *)(param_1 + 0x20) * 4
                      + *(longlong *)(param_1 + 0x28);
              uVar8 = 0;
              do {
                uVar12 = (ulonglong)*(byte *)(lVar7 + 3 + uVar8 * 4);
                uVar14 = uVar14 + uVar12;
                lVar15 = lVar15 + *(byte *)(lVar7 + uVar8 * 4) * uVar12;
                lVar9 = lVar9 + *(byte *)(lVar7 + 1 + uVar8 * 4) * uVar12;
                lVar2 = uVar8 * 4;
                uVar13 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar13;
                lVar11 = lVar11 + *(byte *)(lVar7 + 2 + lVar2) * uVar12;
              } while ((int)uVar13 < iVar10);
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar10);
          }
          puVar1 = (undefined2 *)
                   (*(longlong *)(param_2 + 0x28) +
                   ((longlong)*(int *)(param_2 + 0x20) * (longlong)local_64 + (longlong)local_68) *
                   4);
          if (uVar14 == 0) {
            *puVar1 = 0;
            uVar3 = 0;
          }
          else {
            uVar8 = uVar14 >> 1;
            *(char *)puVar1 = (char)((lVar15 + uVar8) / uVar14);
            *(char *)((longlong)puVar1 + 1) = (char)((lVar9 + uVar8) / uVar14);
            uVar3 = (undefined1)((lVar11 + uVar8) / uVar14);
          }
          *(undefined1 *)(puVar1 + 1) = uVar3;
          local_68 = local_68 + 1;
          *(char *)((longlong)puVar1 + 3) = (char)(((uVar16 >> 1) + uVar14) / uVar16);
        } while (local_68 < *(int *)(param_2 + 0x20));
      }
      local_64 = local_64 + 1;
    } while (local_64 < *(int *)(param_2 + 0x24));
  }
  return;
}



/* ===== 1800e6f30 FUN_1800e6f30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e6f30(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 ******ppppppuVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 *****pppppuVar18;
  undefined8 *****pppppuVar19;
  size_t _Size;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [24];
  char *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 ******local_150;
  undefined8 *****pppppuStack_148;
  undefined8 *****local_140;
  undefined8 *****pppppuStack_138;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  ulonglong local_110;
  undefined8 local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_198;
  CoInitializeEx((LPVOID)0x0,0);
  FUN_180390a90(&local_128);
  cVar9 = '\0';
  if ((char)local_108 != '\0') {
    local_178 = "pak01_dir.vpk";
    local_170 = 0xd;
    uVar10 = FUN_1804e5000();
    FUN_180013d60(local_68,uVar10,&local_178);
    uVar12 = FUN_180014f50(&local_e8,&local_128,local_68);
    DAT_180cc3d75 = FUN_18038fa80(&DAT_180ca0e60,uVar12);
    FUN_1800289e0(&local_e8);
    FUN_1800289e0(local_68);
    cVar9 = (char)local_108;
  }
  if (cVar9 != '\0') {
    FUN_1800289e0(&local_128);
  }
  if (DAT_180cc3d75 == '\0') {
    FUN_1802b2560("[error] econ images | pak01_dir.vpk not opened");
  }
  puVar16 = auStack_198;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  while (puVar17 = auStack_198, DAT_180cc3d76 != '\0') {
    pppppuStack_148 = (undefined8 *****)0x0;
    pppppuVar18 = (undefined8 *****)0x0;
    local_140 = (undefined8 *****)0x0;
    pppppuVar19 = (undefined8 *****)0xf;
    pppppuStack_138 = (undefined8 *****)0xf;
    local_150 = (undefined8 ******)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0xf;
    local_a8 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    iVar11 = FUN_1804e4d70(&DAT_1809ebdb0);
    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809ebdfc == 0x7fffffff) {
      DAT_1809ebdfc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    while (((DAT_180ca0f30 == 0 && (DAT_180ca0e50 == 0)) && (DAT_180cc3d76 != '\0'))) {
      FUN_1804eb6e0(&DAT_180cd1150,&DAT_1809ebdb0);
    }
    if (DAT_180cc3d76 == '\0') goto LAB_1800e7659;
    if (DAT_180ca0e50 == 0) {
      bVar4 = false;
      ppppppuVar13 = *(undefined8 *******)(DAT_180ca0f18 + (DAT_180ca0f20 - 1U & DAT_180ca0f28) * 8)
      ;
      if (&local_150 != (undefined8 *******)ppppppuVar13) {
        local_150 = (undefined8 ******)*ppppppuVar13;
        pppppuStack_148 = ppppppuVar13[1];
        pppppuVar18 = ppppppuVar13[2];
        pppppuVar19 = ppppppuVar13[3];
        ppppppuVar13[2] = (undefined8 *****)0x0;
        ppppppuVar13[3] = (undefined8 *****)0xf;
        *(undefined1 *)ppppppuVar13 = 0;
        local_140 = pppppuVar18;
        pppppuStack_138 = pppppuVar19;
      }
      FUN_18000f890(*(undefined8 *)(DAT_180ca0f18 + (DAT_180ca0f20 - 1U & DAT_180ca0f28) * 8));
      DAT_180ca0f30 = DAT_180ca0f30 + -1;
      if (DAT_180ca0f30 == 0) {
        DAT_180ca0f28 = 0;
      }
      else {
        DAT_180ca0f28 = DAT_180ca0f28 + 1;
      }
    }
    else {
      puVar2 = *(undefined8 **)(DAT_180ca0e38 + (DAT_180ca0e40 - 1U & DAT_180ca0e48) * 8);
      if (&local_a8 != puVar2) {
        local_a8 = *puVar2;
        uStack_a0 = puVar2[1];
        local_98 = puVar2[2];
        local_90 = puVar2[3];
        puVar2[2] = 0;
        puVar2[3] = 0xf;
        *(undefined1 *)puVar2 = 0;
      }
      local_88 = puVar2[4];
      puVar1 = puVar2 + 5;
      if (&local_80 != puVar1) {
        local_80 = *puVar1;
        local_78 = puVar2[6];
        uStack_70 = puVar2[7];
        *puVar1 = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
      }
      lVar14 = *(longlong *)(DAT_180ca0e38 + (DAT_180ca0e40 - 1U & DAT_180ca0e48) * 8);
      FUN_180081c30(lVar14 + 0x28);
      FUN_18000f890(lVar14);
      DAT_180ca0e50 = DAT_180ca0e50 + -1;
      if (DAT_180ca0e50 == 0) {
        DAT_180ca0e48 = 0;
        bVar4 = true;
      }
      else {
        DAT_180ca0e48 = DAT_180ca0e48 + 1;
        bVar4 = true;
      }
    }
    FUN_1804e4e90(&DAT_1809ebdb0);
    if (bVar4) {
      uStack_e0 = 0;
      local_d8 = 0;
      local_d0 = 0xf;
      local_e8 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      FUN_1800e6c60(&local_a8,&local_e8);
      local_178 = &DAT_1809ebdb0;
      iVar11 = FUN_1804e4d70(&DAT_1809ebdb0);
      uVar8 = uStack_b0;
      uVar7 = local_b8;
      uVar6 = local_c0;
      puVar5 = DAT_180cd11a0;
      if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809ebdfc == 0x7fffffff) {
        DAT_1809ebdfc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      if (DAT_180cd11a0 == DAT_180cd11a8) {
        FUN_1800e9cb0(extraout_XMM0_Qa,DAT_180cd11a0,&local_e8);
      }
      else {
        *DAT_180cd11a0 = local_e8;
        puVar5[1] = uStack_e0;
        puVar5[2] = local_d8;
        puVar5[3] = local_d0;
        local_d8 = 0;
        local_d0 = 0xf;
        local_e8 = local_e8 & 0xffffffffffffff00;
        *(undefined4 *)(puVar5 + 4) = (undefined4)local_c8;
        *(undefined4 *)((longlong)puVar5 + 0x24) = local_c8._4_4_;
        uStack_b0 = 0;
        local_b8 = 0;
        local_c0 = 0;
        puVar5[5] = uVar6;
        puVar5[6] = uVar7;
        puVar5[7] = uVar8;
        DAT_180cd11a0 = DAT_180cd11a0 + 8;
      }
      FUN_1804e4e90(&DAT_1809ebdb0);
      FUN_180081c30(&local_c0);
      FUN_18000f890(&local_e8);
      FUN_180081c30(&local_80);
      FUN_18000f890(&local_a8);
    }
    else {
      uStack_120 = 0;
      local_118 = 0;
      local_110 = 0xf;
      local_128 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      ppppppuVar13 = &local_150;
      if ((undefined8 *****)0xf < pppppuVar19) {
        ppppppuVar13 = local_150;
      }
      FUN_180029840(&local_128,ppppppuVar13,pppppuVar18);
      pppppuVar19 = pppppuStack_138;
      if (local_140 < (undefined8 *****)0x8) {
LAB_1800e743a:
        bVar4 = false;
      }
      else {
        pppppuVar18 = (undefined8 *****)((longlong)local_140 - 7);
        if (local_140 < pppppuVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_18002a1a0();
        }
        _Size = 7;
        if ((ulonglong)((longlong)local_140 - (longlong)pppppuVar18) < 7) {
          _Size = (longlong)local_140 - (longlong)pppppuVar18;
        }
        ppppppuVar13 = &local_150;
        if ((undefined8 *****)0xf < pppppuStack_138) {
          ppppppuVar13 = local_150;
        }
        iVar11 = memcmp((void *)((longlong)pppppuVar18 + (longlong)ppppppuVar13),".vsvg_c",_Size);
        if ((iVar11 != 0) || (_Size < 7)) goto LAB_1800e743a;
        bVar4 = true;
      }
      if (DAT_180cc3d75 == '\0') {
LAB_1800e7494:
        bVar4 = false;
      }
      else {
        cVar9 = FUN_180390640(&DAT_180ca0e60,&local_150,&local_168,0xffffffff);
        if (cVar9 == '\0') {
LAB_1800e748f:
          pppppuVar19 = pppppuStack_138;
          goto LAB_1800e7494;
        }
        if (bVar4) {
          cVar9 = FUN_1800e5fe0();
        }
        else {
          cVar9 = FUN_1800e6580(&local_168,&local_128);
        }
        if (cVar9 == '\0') goto LAB_1800e748f;
        bVar4 = true;
        pppppuVar19 = pppppuStack_138;
      }
      local_178 = &DAT_1809ebdb0;
      iVar11 = FUN_1804e4d70(&DAT_1809ebdb0);
      uVar8 = uStack_f0;
      uVar7 = local_f8;
      uVar6 = local_100;
      puVar2 = DAT_180cd11b8;
      puVar5 = DAT_180cd11a0;
      if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809ebdfc == 0x7fffffff) {
        DAT_1809ebdfc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      if (bVar4) {
        if (DAT_180cd11a0 == DAT_180cd11a8) {
          FUN_1800e9cb0(extraout_XMM0_Qa_00,DAT_180cd11a0,&local_128);
        }
        else {
          *DAT_180cd11a0 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          *puVar5 = local_128;
          puVar5[1] = uStack_120;
          puVar5[2] = local_118;
          puVar5[3] = local_110;
          local_118 = 0;
          local_110 = 0xf;
          local_128 = local_128 & 0xffffffffffffff00;
          *(undefined4 *)(puVar5 + 4) = (undefined4)local_108;
          *(undefined4 *)((longlong)puVar5 + 0x24) = local_108._4_4_;
          uStack_f0 = 0;
          local_f8 = 0;
          local_100 = 0;
          puVar5[5] = uVar6;
          puVar5[6] = uVar7;
          puVar5[7] = uVar8;
          DAT_180cd11a0 = DAT_180cd11a0 + 8;
        }
      }
      else if (DAT_180cd11b8 == DAT_180cd11c0) {
        FUN_18009bb20(&DAT_180cd11b0,DAT_180cd11b8,&local_150);
        pppppuVar19 = pppppuStack_138;
      }
      else {
        *DAT_180cd11b8 = local_150;
        puVar2[1] = pppppuStack_148;
        puVar2[2] = local_140;
        puVar2[3] = pppppuStack_138;
        local_150 = (undefined8 ******)((ulonglong)local_150 & 0xffffffffffffff00);
        DAT_180cd11b8 = DAT_180cd11b8 + 4;
        pppppuVar19 = (undefined8 *****)0xf;
      }
      FUN_1804e4e90(&DAT_1809ebdb0);
      FUN_180081c30(&local_100);
      FUN_18000f890(&local_128);
      FUN_180081c30(&local_80);
      FUN_18000f890(&local_a8);
    }
    if ((undefined8 *****)0xf < pppppuVar19) {
      pppppuVar18 = (undefined8 *****)((longlong)pppppuVar19 + 1);
      ppppppuVar13 = local_150;
      if ((undefined8 *****)0xfff < pppppuVar18) {
        ppppppuVar13 = (undefined8 ******)local_150[-1];
        if (0x1f < (ulonglong)((longlong)local_150 + (-8 - (longlong)ppppppuVar13))) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar16 = auStack_190;
LAB_1800e7659:
          *(undefined8 *)(puVar16 + -8) = 0x1800e7661;
          FUN_1804e4e90(&DAT_1809ebdb0);
          *(undefined8 *)(puVar16 + -8) = 0x1800e766b;
          FUN_180081c30(&local_80);
          *(undefined8 *)(puVar16 + -8) = 0x1800e7674;
          FUN_18000f890(&local_a8);
          puVar17 = puVar16;
          break;
        }
        pppppuVar18 = pppppuVar19 + 5;
      }
      thunk_FUN_1803d64e0(ppppppuVar13,pppppuVar18);
    }
  }
  lVar14 = *(longlong *)(puVar17 + 0x30);
  if (lVar14 == 0) goto LAB_1800e7686;
  if ((ulonglong)(*(longlong *)(puVar17 + 0x40) - lVar14) < 0x1000) {
LAB_1800e767e:
    lVar15 = lVar14;
  }
  else {
    lVar15 = *(longlong *)(lVar14 + -8);
    if (0x1f < (lVar14 - lVar15) - 8U) {
      pcVar3 = (code *)swi(0x29);
      lVar14 = (*pcVar3)(5);
      puVar17 = puVar17 + 8;
      goto LAB_1800e767e;
    }
  }
  *(undefined8 *)(puVar17 + -8) = 0x1800e7686;
  thunk_FUN_1803d64e0(lVar15);
LAB_1800e7686:
  *(undefined8 *)(puVar17 + -8) = 0x1800e7692;
  return;
}



/* ===== 1800e7710 FUN_1800e7710 ===== */

void FUN_1800e7710(longlong param_1)

{
  FUN_180081c30(param_1 + 0x28);
  FUN_18000f890(param_1);
  return;
}



/* ===== 1800e7730 FUN_1800e7730 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800e7730(void)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int local_10;
  undefined4 local_c;
  
  cVar1 = DAT_180cc3d76;
  LOCK();
  DAT_180cc3d76 = 1;
  UNLOCK();
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)FUN_1804ecaa0(8);
    *puVar2 = FUN_1800e6f30;
    lVar3 = FUN_180515e84(0,0,FUN_1800d5400,puVar2,0,&local_10);
    if (lVar3 == 0) {
      local_10 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    if (DAT_180ca0e28 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180515f70();
    }
    DAT_180ca0e28 = local_10;
    _DAT_180ca0e2c = local_c;
    _DAT_180ca0e20 = lVar3;
  }
  return;
}



/* ===== 1800e77d0 FUN_1800e77d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800e77d0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined1 local_68 [16];
  longlong local_58 [6];
  
  puVar12 = auStack_88;
  local_58[4] = DAT_180919500 ^ (ulonglong)auStack_88;
  if (param_2[2] == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_1800e7add;
  }
  cVar4 = FUN_1800e5db0(param_2);
  puVar12 = auStack_88;
  if (cVar4 == '\0') {
LAB_1800e79b9:
    *(undefined8 *)(puVar12 + -8) = 0x1800e79be;
    uVar14 = FUN_1800e7730();
    *(undefined8 *)(puVar12 + -8) = 0x1800e79cb;
    FUN_1800e89c0(uVar14,puVar12 + 0x20,param_2);
    lVar6 = *(longlong *)(puVar12 + 0x20);
    *(undefined4 *)(lVar6 + 0x48) = DAT_180cd1100;
    if (puVar12[0x28] != '\0') {
      *(undefined **)(puVar12 + 0x20) = &DAT_1809ebdb0;
      *(undefined8 *)(puVar12 + -8) = 0x1800e79f8;
      iVar5 = FUN_1804e4d70(&DAT_1809ebdb0);
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar12 + -8) = &UNK_1800e7b2b;
        FUN_1804e4a90(5);
      }
      if (DAT_1809ebdfc == 0x7fffffff) {
        DAT_1809ebdfc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar12 + -8) = &UNK_1800e7b1a;
        FUN_1804e4a90(6);
      }
      if (DAT_180ca0f20 <= DAT_180ca0f30 + 1U) {
        *(undefined8 *)(puVar12 + -8) = 0x1800e7a2b;
        FUN_1800ea0c0();
      }
      DAT_180ca0f28 = DAT_180ca0f28 & DAT_180ca0f20 - 1;
      uVar10 = DAT_180ca0f20;
      if (DAT_180ca0f28 != 0) {
        uVar10 = DAT_180ca0f28;
      }
      uVar10 = uVar10 - 1;
      uVar13 = DAT_180ca0f20 - 1 & uVar10;
      if (*(longlong *)(DAT_180ca0f18 + uVar13 * 8) == 0) {
        *(undefined8 *)(puVar12 + -8) = 0x1800e7a6c;
        uVar9 = FUN_1804ecaa0(0x20);
        *(undefined8 *)(DAT_180ca0f18 + uVar13 * 8) = uVar9;
      }
      uVar9 = *(undefined8 *)(DAT_180ca0f18 + (DAT_180ca0f20 - 1 & uVar10) * 8);
      *(undefined8 *)(puVar12 + -8) = 0x1800e7a98;
      FUN_180024b50(uVar9,param_2);
      DAT_180ca0f30 = DAT_180ca0f30 + 1;
      *(undefined8 *)(puVar12 + -8) = 0x1800e7ab2;
      DAT_180ca0f28 = uVar10;
      FUN_1804eb6c0(&DAT_180cd1150);
      *(undefined8 *)(puVar12 + -8) = 0x1800e7abb;
      FUN_1804e4e90(&DAT_1809ebdb0);
    }
    if (*(int *)(lVar6 + 0x30) != 1) {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_1800e7add;
    }
    *param_1 = *(undefined8 *)(lVar6 + 0x38);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar6 + 0x40);
    uVar14 = *(undefined4 *)(lVar6 + 0x44);
  }
  else {
    puVar11 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar11 = (undefined8 *)*param_2;
    }
    uVar13 = 0xcbf29ce484222325;
    uVar10 = 0;
    if (param_2[2] != 0) {
      do {
        uVar13 = (uVar13 ^ *(byte *)((longlong)puVar11 + uVar10)) * 0x100000001b3;
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulonglong)param_2[2]);
    }
    lVar6 = FUN_1800e9300(uVar10,local_68,param_2,uVar13);
    puVar12 = auStack_88;
    lVar6 = *(longlong *)(lVar6 + 8);
    if (((lVar6 == 0) || (lVar6 == DAT_180cd1118)) || (*(int *)(lVar6 + 0x30) != 1)) {
      if (DAT_180ca0a50 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined4 *)(DAT_180ca0a50 + 0x40);
      }
      FUN_1800ed8d0(param_2,uVar14);
      cVar4 = FUN_1800e5db0(param_2);
      if (cVar4 == '\0') {
        FUN_180024b50(local_58,param_2);
      }
      else {
        puVar11 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar11 = (undefined8 *)*param_2;
        }
        lVar6 = FUN_1800ba730(puVar11,param_2[2]);
        local_58[2] = 0;
        local_58[0] = 0;
        local_58[1] = 0;
        if (lVar6 == -1) {
          local_58[3] = 0xf;
          local_58[0] = 0;
        }
        else {
          uVar10 = lVar6 + 1;
          local_58[3] = 0;
          if ((ulonglong)param_2[2] < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_18002a1a0();
          }
          lVar7 = param_2[2] - uVar10;
          lVar6 = -1;
          if (lVar7 != -1) {
            lVar6 = lVar7;
          }
          if (0xf < (ulonglong)param_2[3]) {
            param_2 = (undefined8 *)*param_2;
          }
          FUN_1800133a0(local_58,(longlong)param_2 + uVar10,lVar6);
        }
      }
      puVar8 = (undefined4 *)FUN_1800e77d0(local_68,local_58);
      puVar12 = auStack_88;
      uVar14 = puVar8[1];
      uVar2 = puVar8[2];
      uVar3 = puVar8[3];
      *(undefined4 *)param_1 = *puVar8;
      *(undefined4 *)((longlong)param_1 + 4) = uVar14;
      *(undefined4 *)(param_1 + 1) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
      if ((ulonglong)local_58[3] < 0x10) goto LAB_1800e7add;
      uVar10 = local_58[3] + 1;
      lVar6 = local_58[0];
      if (0xfff < uVar10) {
        lVar6 = *(longlong *)(local_58[0] + -8);
        if (0x1f < (local_58[0] - lVar6) - 8U) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar12 = auStack_80;
          goto LAB_1800e79b9;
        }
        uVar10 = local_58[3] + 0x28;
      }
      thunk_FUN_1803d64e0(lVar6,uVar10);
      puVar12 = auStack_88;
      goto LAB_1800e7add;
    }
    *(undefined4 *)(lVar6 + 0x48) = DAT_180cd1100;
    *param_1 = *(undefined8 *)(lVar6 + 0x38);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar6 + 0x40);
    uVar14 = *(undefined4 *)(lVar6 + 0x44);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar14;
LAB_1800e7add:
  *(undefined8 *)(puVar12 + -8) = 0x1800e7aed;
  return param_1;
}



/* ===== 1800e7b30 FUN_1800e7b30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e7b30(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined *local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_c8;
  local_a8 = param_4;
  if ((((*(longlong *)(param_1 + 0x10) != 0) && (0 < param_2)) && (0 < param_3)) &&
     ((ulonglong)((longlong)param_2 * (longlong)param_3 * 4) <= (ulonglong)(param_4[1] - *param_4)))
  {
    FUN_1800e7730();
    local_a0 = &DAT_1809ebdb0;
    iVar6 = FUN_1804e4d70(&DAT_1809ebdb0);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809ebdfc == 0x7fffffff) {
      DAT_1809ebdfc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    FUN_180024b50(&local_98,param_1);
    lVar2 = param_4[2];
    param_4[2] = 0;
    lVar3 = param_4[1];
    param_4[1] = 0;
    lVar4 = *param_4;
    *param_4 = 0;
    local_78 = param_2;
    local_74 = param_3;
    local_70 = lVar4;
    local_68 = lVar3;
    local_60 = lVar2;
    if (DAT_180ca0e40 <= DAT_180ca0e50 + 1U) {
      FUN_1800e9ef0();
    }
    DAT_180ca0e48 = DAT_180ca0e48 & DAT_180ca0e40 - 1;
    uVar1 = DAT_180ca0e48 + DAT_180ca0e50;
    uVar8 = DAT_180ca0e40 - 1 & uVar1;
    if (*(longlong *)(DAT_180ca0e38 + uVar8 * 8) == 0) {
      uVar7 = FUN_1804ecaa0(0x40);
      *(undefined8 *)(DAT_180ca0e38 + uVar8 * 8) = uVar7;
    }
    puVar5 = *(undefined8 **)(DAT_180ca0e38 + (DAT_180ca0e40 - 1 & uVar1) * 8);
    *puVar5 = CONCAT71(uStack_97,local_98);
    puVar5[1] = local_90;
    puVar5[2] = local_88;
    puVar5[3] = local_80;
    local_88 = 0;
    local_80 = 0xf;
    local_98 = 0;
    *(int *)(puVar5 + 4) = param_2;
    *(int *)((longlong)puVar5 + 0x24) = param_3;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    puVar5[5] = lVar4;
    puVar5[6] = lVar3;
    puVar5[7] = lVar2;
    DAT_180ca0e50 = DAT_180ca0e50 + 1;
    FUN_180081c30(&local_70);
    FUN_18000f890(&local_98);
    FUN_1804eb6c0(&DAT_180cd1150);
    FUN_1804e4e90(&DAT_1809ebdb0);
  }
  FUN_180081c30(param_4);
  return;
}



/* ===== 1800e7d60 FUN_1800e7d60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e7d60(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  int *piVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar23;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [24];
  int *local_148;
  int *piStack_140;
  int *local_138;
  undefined *local_128;
  longlong local_120;
  longlong *local_118 [2];
  undefined *local_108;
  ulonglong local_100;
  undefined8 *local_f8;
  undefined8 *puStack_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 *local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 *local_b0 [2];
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_168;
  DAT_180cd1100 = DAT_180cd1100 + 1;
  local_f8 = (undefined8 *)0x0;
  puStack_f0 = (undefined8 *)0x0;
  local_e8 = 0;
  local_c8 = (undefined8 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  local_128 = &DAT_1809ebdb0;
  iVar8 = FUN_1804e4d70(&DAT_1809ebdb0);
  puVar17 = auStack_168;
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebdfc == 0x7fffffff) goto LAB_1800e845c;
  uVar14 = DAT_180cd11a0 - DAT_180cd1198 & 0xffffffffffffffc0;
  if (6 < (ulonglong)(DAT_180cd11a0 - DAT_180cd1198 >> 6)) {
    uVar14 = 0x180;
  }
  FUN_1800e8ca0(&local_f8,DAT_180cd1198,(longlong)uVar14 >> 6);
  lVar9 = DAT_180cd11a0;
  puVar16 = auStack_168;
  if (uVar14 != 0) {
    lVar15 = uVar14 + DAT_180cd1198;
    lVar19 = DAT_180cd1198;
    lVar3 = DAT_180cd11a0;
    while( true ) {
      lVar2 = lVar19;
      DAT_180cd11a0 = lVar3;
      if (lVar15 == lVar9) break;
      FUN_18002ba60(lVar19,lVar15);
      *(undefined4 *)(lVar19 + 0x20) = *(undefined4 *)(lVar15 + 0x20);
      *(undefined4 *)(lVar19 + 0x24) = *(undefined4 *)(lVar15 + 0x24);
      FUN_180081c90(lVar19 + 0x28);
      lVar19 = lVar19 + 0x40;
      lVar15 = lVar15 + 0x40;
      lVar3 = DAT_180cd11a0;
    }
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x40) {
      FUN_180081c30(lVar2 + 0x28);
      FUN_18000f890(lVar2);
    }
    DAT_180cd11a0 = lVar19;
  }
  puVar4 = DAT_180cd11b8;
  puVar21 = DAT_180cd11b0;
  local_c8 = DAT_180cd11b0;
  DAT_180cd11b0 = (undefined8 *)0x0;
  puStack_c0 = DAT_180cd11b8;
  DAT_180cd11b8 = (undefined8 *)0x0;
  local_b8 = DAT_180cd11c0;
  DAT_180cd11c0 = 0;
  local_100 = DAT_180ca0f30 + DAT_180ca0f28;
  if (DAT_180ca0f10 == (longlong *)0x0) {
    local_128 = (undefined *)0x0;
  }
  else {
    local_128 = (undefined *)*DAT_180ca0f10;
  }
  local_120 = DAT_180ca0f28;
  local_d8 = 0;
  local_e0 = DAT_180ca0f10;
  local_98 = 0;
  local_a0 = DAT_180ca0f10;
  local_108 = local_128;
  local_d0 = local_100;
  lVar9 = FUN_1800e9470(local_b0,&local_128,&local_108);
  local_90 = *(undefined8 *)(lVar9 + 8);
  FUN_1800ea290(extraout_XMM0_Da,&local_88,&local_a0,&local_e0);
  FUN_1804e4e90();
  puVar11 = puStack_f0;
  puVar18 = local_f8;
  puVar20 = DAT_180cd1118;
  if (local_f8 != puStack_f0) {
    do {
      if ((ulonglong)puVar18[3] < 0x10) {
        puVar10 = puVar18;
      }
      else {
        puVar10 = (undefined8 *)*puVar18;
      }
      uVar22 = 0xcbf29ce484222325;
      uVar14 = 0;
      if (puVar18[2] != 0) {
        do {
          uVar22 = (uVar22 ^ *(byte *)((longlong)puVar10 + uVar14)) * 0x100000001b3;
          uVar14 = uVar14 + 1;
        } while (uVar14 < (ulonglong)puVar18[2]);
      }
      lVar9 = FUN_1800e9300(uVar14,&local_e0,puVar18,uVar22);
      puVar10 = *(undefined8 **)(lVar9 + 8);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = puVar20;
LAB_1800e7fe2:
        cVar7 = FUN_1800e5db0();
        if (cVar7 != '\0') {
          FUN_1800e89c0(extraout_XMM0_Da_00,local_b0,puVar18);
          *(int *)(local_b0[0] + 9) = DAT_180cd1100;
          puVar10 = local_b0[0];
        }
        puVar20 = DAT_180cd1118;
      }
      else if (puVar10 == puVar20) goto LAB_1800e7fe2;
      if (puVar10 != puVar20) {
        if ((longlong *)puVar10[7] != (longlong *)0x0) {
          (**(code **)(*(longlong *)puVar10[7] + 0x10))();
          puVar10[7] = 0;
        }
        plVar5 = DAT_1811079e0;
        if (DAT_1811079e0 == (longlong *)0x0) {
LAB_1800e8112:
          *(undefined4 *)(puVar10 + 6) = 2;
        }
        else {
          local_74 = 1;
          local_64 = 0;
          local_88 = *(int *)(puVar18 + 4);
          local_84 = *(undefined4 *)((longlong)puVar18 + 0x24);
          local_80 = 1;
          local_7c = 1;
          local_78 = 0x1c;
          local_6c = 1;
          local_68 = 8;
          local_108 = (undefined *)puVar18[5];
          local_100 = (ulonglong)(uint)(local_88 * 4);
          local_118[0] = (longlong *)0x0;
          iVar8 = (**(code **)(*DAT_1811079e0 + 0x28))(DAT_1811079e0,&local_88,&local_108,local_118)
          ;
          if ((iVar8 < 0) || (local_118[0] == (longlong *)0x0)) goto LAB_1800e8112;
          local_128 = (undefined *)0x0;
          iVar8 = (**(code **)(*plVar5 + 0x38))(plVar5,local_118[0],0,&local_128);
          if (iVar8 < 0) {
            local_128 = (undefined *)0x0;
          }
          (**(code **)(*local_118[0] + 0x10))();
          if (local_128 == (undefined *)0x0) goto LAB_1800e8112;
          *(undefined4 *)(puVar10 + 6) = 1;
          puVar10[7] = local_128;
          *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(puVar18 + 4);
          *(undefined4 *)((longlong)puVar10 + 0x44) = *(undefined4 *)((longlong)puVar18 + 0x24);
        }
        puVar20 = DAT_180cd1118;
      }
      puVar18 = puVar18 + 8;
    } while (puVar18 != puVar11);
  }
  puVar18 = local_f8;
  if (puVar21 != puVar4) {
    do {
      if ((ulonglong)puVar21[3] < 0x10) {
        puVar11 = puVar21;
      }
      else {
        puVar11 = (undefined8 *)*puVar21;
      }
      uVar22 = 0xcbf29ce484222325;
      uVar14 = 0;
      if (puVar21[2] != 0) {
        do {
          uVar22 = (uVar22 ^ *(byte *)(uVar14 + (longlong)puVar11)) * 0x100000001b3;
          uVar14 = uVar14 + 1;
        } while (uVar14 < (ulonglong)puVar21[2]);
      }
      lVar9 = FUN_1800e9300(uVar14,&local_e0,puVar21,uVar22);
      puVar11 = *(undefined8 **)(lVar9 + 8);
      if ((puVar11 != (undefined8 *)0x0) && (puVar11 != puVar20)) {
        *(undefined4 *)(puVar11 + 6) = 2;
        puVar20 = DAT_180cd1118;
      }
      puVar21 = puVar21 + 4;
    } while (puVar21 != puVar4);
    puVar11 = puStack_f0;
  }
  if (DAT_180cd1120 < 0x141) {
LAB_1800e83c2:
    FUN_1800288b0(&local_c8);
    puVar21 = puVar18;
    if (puVar18 == (undefined8 *)0x0) {
      return;
    }
    for (; puVar21 != puVar11; puVar21 = puVar21 + 8) {
      FUN_180081c30(puVar21 + 5);
      FUN_18000f890(puVar21);
    }
    uVar14 = local_e8 - (longlong)puVar18 & 0xffffffffffffffc0;
    puVar21 = puVar18;
    if (uVar14 < 0x1000) {
LAB_1800e8426:
      thunk_FUN_1803d64e0(puVar21,uVar14);
      return;
    }
    puVar21 = (undefined8 *)puVar18[-1];
    if ((ulonglong)((longlong)puVar18 + (-8 - (longlong)puVar21)) < 0x20) {
      uVar14 = uVar14 | 0x27;
      goto LAB_1800e8426;
    }
  }
  else {
    local_148 = (int *)0x0;
    piStack_140 = (int *)0x0;
    local_138 = (int *)0x0;
    piVar12 = (int *)0x0;
    for (puVar21 = (undefined8 *)*puVar20; puVar21 != puVar20; puVar21 = (undefined8 *)*puVar21) {
      if (*(int *)(puVar21 + 6) == 1) {
        if (0xb4 < DAT_180cd1100 - *(int *)(puVar21 + 9)) {
          if (piVar12 == local_138) {
            FUN_1800e9680(&local_148);
            piVar12 = piStack_140;
          }
          else {
            *piVar12 = *(int *)(puVar21 + 9);
            FUN_180024b50(piVar12 + 2,puVar21 + 2);
            piStack_140 = piStack_140 + 10;
            piVar12 = piStack_140;
          }
        }
      }
    }
    FUN_1800e9960(local_148,piVar12,
                  ((longlong)piVar12 - (longlong)local_148 >> 3) * -0x3333333333333333,0);
    piVar6 = piStack_140;
    piVar12 = local_148;
    piVar13 = piStack_140;
    while ((piStack_140 = piVar13, piVar12 != piVar6 && (0x140 < DAT_180cd1120))) {
      if (*(ulonglong *)(piVar12 + 8) < 0x10) {
        piVar13 = piVar12 + 2;
      }
      else {
        piVar13 = *(int **)(piVar12 + 2);
      }
      uVar22 = 0xcbf29ce484222325;
      uVar14 = 0;
      if (*(ulonglong *)(piVar12 + 6) != 0) {
        do {
          uVar22 = (uVar22 ^ *(byte *)((longlong)piVar13 + uVar14)) * 0x100000001b3;
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ulonglong *)(piVar12 + 6));
      }
      lVar9 = FUN_1800e9300(uVar14,&local_e0,piVar12 + 2,uVar22);
      puVar21 = DAT_180cd1118;
      if (*(undefined8 **)(lVar9 + 8) != (undefined8 *)0x0) {
        puVar21 = *(undefined8 **)(lVar9 + 8);
      }
      uVar23 = extraout_XMM0_Da_01;
      if ((longlong *)puVar21[7] != (longlong *)0x0) {
        uVar23 = (**(code **)(*(longlong *)puVar21[7] + 0x10))();
      }
      FUN_1800e8480(uVar23,&local_128,puVar21);
      piVar12 = piVar12 + 10;
      piVar13 = piStack_140;
    }
    piVar12 = local_148;
    if (local_148 == (int *)0x0) goto LAB_1800e83c2;
    for (; piVar12 != piVar13; piVar12 = piVar12 + 10) {
      FUN_18000f890(piVar12 + 2);
    }
    uVar14 = ((longlong)local_138 - (longlong)local_148 >> 3) * 8;
    piVar12 = local_148;
    if (uVar14 < 0x1000) {
LAB_1800e83a8:
      thunk_FUN_1803d64e0(piVar12,uVar14);
      local_148 = (int *)0x0;
      piStack_140 = (int *)0x0;
      local_138 = (int *)0x0;
      goto LAB_1800e83c2;
    }
    piVar12 = *(int **)(local_148 + -2);
    if ((ulonglong)((longlong)local_148 + (-8 - (longlong)piVar12)) < 0x20) {
      uVar14 = uVar14 + 0x27;
      goto LAB_1800e83a8;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar16 = auStack_160;
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar17 = puVar16 + 8;
LAB_1800e845c:
  DAT_1809ebdfc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar17 + -8) = &UNK_1800e8470;
  FUN_1804e4a90(6);
}



/* ===== 1800e8480 FUN_1800e8480 ===== */

longlong * FUN_1800e8480(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar2 = DAT_180cd1128;
  uVar3 = DAT_180cd1118;
  if ((ulonglong)param_3[5] < 0x10) {
    plVar6 = param_3 + 2;
  }
  else {
    plVar6 = (longlong *)param_3[2];
  }
  uVar4 = 0;
  uVar5 = 0xcbf29ce484222325;
  if (param_3[4] != 0) {
    do {
      pbVar1 = (byte *)((longlong)plVar6 + uVar4);
      uVar4 = uVar4 + 1;
      uVar5 = (uVar5 ^ *pbVar1) * 0x100000001b3;
    } while (uVar4 < (ulonglong)param_3[4]);
  }
  uVar5 = DAT_180cd1140 & uVar5;
  plVar6 = *(longlong **)(DAT_180cd1128 + uVar5 * 0x10);
  if (*(longlong **)(DAT_180cd1128 + 8 + uVar5 * 0x10) == param_3) {
    if (plVar6 == param_3) {
      *(undefined8 *)(DAT_180cd1128 + uVar5 * 0x10) = DAT_180cd1118;
      *(undefined8 *)(lVar2 + 8 + uVar5 * 0x10) = uVar3;
    }
    else {
      *(longlong *)(DAT_180cd1128 + 8 + uVar5 * 0x10) = param_3[1];
    }
  }
  else if (plVar6 == param_3) {
    *(longlong *)(DAT_180cd1128 + uVar5 * 0x10) = *param_3;
  }
  lVar2 = *param_3;
  DAT_180cd1120 = DAT_180cd1120 + -1;
  *(longlong *)param_3[1] = lVar2;
  *(longlong *)(lVar2 + 8) = param_3[1];
  FUN_18000f890(param_3 + 2);
  thunk_FUN_1803d64e0(param_3,0x50);
  *param_2 = lVar2;
  return param_2;
}



/* ===== 1800e8580 FUN_1800e8580 ===== */

void FUN_1800e8580(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x28) {
    FUN_18000f890(lVar3 + 8);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800e8610;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1800e8610:
  *(undefined8 *)(puVar5 + -8) = 0x1800e8618;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800e8630 FUN_1800e8630 ===== */

void FUN_1800e8630(longlong *param_1)

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
    FUN_180081c30(lVar3 + 0x28);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  if (0xfff < (param_1[2] - lVar3 & 0xffffffffffffffc0U)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800e86aa;
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar2 = lVar3;
  puVar5 = puVar4;
LAB_1800e86aa:
  *(undefined8 *)(puVar5 + -8) = 0x1800e86af;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800e86d0 FUN_1800e86d0 ===== */

void FUN_1800e86d0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_18000f890(puVar1 + 2);
    thunk_FUN_1803d64e0(puVar1,0x50);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x50);
  return;
}



/* ===== 1800e8740 FUN_1800e8740 ===== */

void FUN_1800e8740(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1800e90b0(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_18000f890(puVar1 + 2);
      thunk_FUN_1803d64e0(puVar1,0x50);
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



/* ===== 1800e8810 FUN_1800e8810 ===== */

void FUN_1800e8810(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_180081c30(puVar1 + 8);
    FUN_18000f890(puVar1 + 2);
    thunk_FUN_1803d64e0(puVar1,0x58);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x58);
  return;
}



/* ===== 1800e88a0 FUN_1800e88a0 ===== */

void FUN_1800e88a0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  lVar1 = *param_1;
  uVar4 = lVar2 - lVar1;
  if (param_2 < uVar4) {
    param_1[1] = lVar1 + param_2;
    return;
  }
  if (uVar4 < param_2) {
    uVar3 = param_1[2] - lVar1;
    if (param_2 <= uVar3) {
      FUN_180540170(lVar2,0,param_2 - uVar4);
      param_1[1] = (param_2 - uVar4) + lVar2;
      return;
    }
    if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    uVar5 = 0x7fffffffffffffff;
    if ((uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1)) &&
       (uVar5 = (uVar3 >> 1) + uVar3, uVar5 < param_2)) {
      uVar5 = param_2;
    }
    lVar2 = FUN_18000fb70(uVar5);
    FUN_180540170(lVar2 + uVar4,0,param_2 - uVar4);
    FUN_180540530(lVar2,*param_1,param_1[1] - *param_1);
    FUN_180082ac0(param_1,lVar2,param_2,uVar5);
  }
  return;
}



/* ===== 1800e89a0 FUN_1800e89a0 ===== */

undefined8 * FUN_1800e89a0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



/* ===== 1800e89c0 FUN_1800e89c0 ===== */

longlong * FUN_1800e89c0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  size_t _Size;
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  undefined8 *puVar10;
  undefined8 *local_58;
  longlong local_50;
  
  puVar6 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar6 = (undefined8 *)*param_3;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar3 = 0;
  if (param_3[2] != 0) {
    do {
      uVar8 = (uVar8 ^ *(byte *)(uVar3 + (longlong)puVar6)) * 0x100000001b3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)param_3[2]);
  }
  FUN_1800e9300(uVar3,&local_58,param_3,uVar8);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180cd1120 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar10 = &DAT_180cd1118;
  puVar2 = (undefined8 *)FUN_1804ecaa0(0x50);
  puVar6 = puVar2;
  FUN_180024b50(puVar2 + 2,param_3);
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  uVar3 = DAT_180cd1148;
  if (DAT_180cd1110 < (float)(DAT_180cd1120 + 1) / (float)DAT_180cd1148) {
    fVar9 = (float)FUN_18053ef70((float)(DAT_180cd1120 + 1) / DAT_180cd1110,DAT_180cd1120,
                                 (float)DAT_180cd1148,DAT_180cd1110,puVar10,puVar6);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar9) && (fVar9 = fVar9 - DAT_1808acd00, fVar9 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar9 + lVar4)) {
      uVar5 = (longlong)fVar9 + lVar4;
    }
    uVar7 = uVar3;
    if ((uVar3 < uVar5) && ((0x1ff < uVar3 || (uVar7 = uVar3 * 8, uVar3 * 8 < uVar5)))) {
      uVar7 = uVar5;
    }
    FUN_1800ea910(uVar5,uVar7);
    puVar6 = *(undefined8 **)(DAT_180cd1128 + 8 + (DAT_180cd1140 & uVar8) * 0x10);
    local_58 = DAT_180cd1118;
    if (puVar6 != DAT_180cd1118) {
      puVar10 = *(undefined8 **)(DAT_180cd1128 + (DAT_180cd1140 & uVar8) * 0x10);
      uVar3 = puVar2[5];
      _Size = puVar2[4];
      local_58 = puVar6;
      while( true ) {
        puVar6 = local_58 + 2;
        if (0xf < (ulonglong)local_58[5]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        if (uVar3 < 0x10) {
          _Buf1 = puVar2 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar2[2];
        }
        if ((_Size == local_58[4]) &&
           ((_Size == 0 || (iVar1 = memcmp(_Buf1,puVar6,_Size), iVar1 == 0)))) break;
        if (local_58 == puVar10) goto LAB_1800e8c11;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_1800e8c11:
  puVar6 = (undefined8 *)local_58[1];
  DAT_180cd1120 = DAT_180cd1120 + 1;
  *puVar2 = local_58;
  puVar2[1] = puVar6;
  *puVar6 = puVar2;
  local_58[1] = puVar2;
  lVar4 = DAT_180cd1128;
  uVar8 = DAT_180cd1140 & uVar8;
  puVar10 = *(undefined8 **)(DAT_180cd1128 + uVar8 * 0x10);
  if (puVar10 == DAT_180cd1118) {
    *(undefined8 **)(DAT_180cd1128 + uVar8 * 0x10) = puVar2;
  }
  else {
    if (puVar10 == local_58) {
      *(undefined8 **)(DAT_180cd1128 + uVar8 * 0x10) = puVar2;
      goto LAB_1800e8c6b;
    }
    if (*(undefined8 **)(DAT_180cd1128 + 8 + uVar8 * 0x10) != puVar6) goto LAB_1800e8c6b;
  }
  *(undefined8 **)(lVar4 + 8 + uVar8 * 0x10) = puVar2;
LAB_1800e8c6b:
  *param_2 = (longlong)puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1800e8ca0 FUN_1800e8ca0 ===== */

void FUN_1800e8ca0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar4 = auStack_38;
  puVar5 = auStack_38;
  lVar8 = *param_1;
  uVar2 = param_1[2] - lVar8 >> 6;
  if (param_3 <= uVar2) {
    uVar2 = param_1[1] - lVar8 >> 6;
    if (param_3 <= uVar2) {
      lVar7 = param_3 * 0x40 + lVar8;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        FUN_18002ba60(lVar8,param_2);
        *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(param_2 + 0x20);
        *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(param_2 + 0x24);
        FUN_180081c90(lVar8 + 0x28,param_2 + 0x28);
        lVar8 = lVar8 + 0x40;
        param_2 = param_2 + 0x40;
      }
      lVar8 = param_1[1];
      for (lVar3 = lVar7; lVar3 != lVar8; lVar3 = lVar3 + 0x40) {
        FUN_180081c30(lVar3 + 0x28);
        FUN_18000f890(lVar3);
      }
      param_1[1] = lVar7;
      return;
    }
    if (lVar8 != param_1[1]) {
      do {
        FUN_18002ba60(lVar8,param_2);
        *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(param_2 + 0x20);
        *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(param_2 + 0x24);
        FUN_180081c90(lVar8 + 0x28,param_2 + 0x28);
        lVar8 = lVar8 + 0x40;
        param_2 = param_2 + 0x40;
      } while (lVar8 != param_1[1]);
    }
    lVar8 = FUN_1800e93e0(param_2,param_3 - uVar2);
    param_1[1] = lVar8;
    return;
  }
  if (0x3ffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  if (0x3ffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar2 = 0x3ffffffffffffff;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    if (uVar2 < param_3) {
      uVar2 = param_3;
    }
  }
  puVar6 = auStack_38;
  if (lVar8 == 0) goto LAB_1800e8d84;
  lVar7 = param_1[1];
  for (; lVar8 != lVar7; lVar8 = lVar8 + 0x40) {
    FUN_180081c30(lVar8 + 0x28);
    FUN_18000f890(lVar8);
  }
  lVar8 = *param_1;
  if ((param_1[2] - lVar8 & 0xffffffffffffffc0U) < 0x1000) {
LAB_1800e8d6f:
    lVar7 = lVar8;
    puVar5 = puVar4;
  }
  else {
    lVar7 = *(longlong *)(lVar8 + -8);
    if (0x1f < (lVar8 - lVar7) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar8 = (*pcVar1)(5);
      puVar4 = auStack_30;
      goto LAB_1800e8d6f;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x1800e8d77;
  thunk_FUN_1803d64e0(lVar7);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar6 = puVar5;
LAB_1800e8d84:
  if (0x3ffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar6 + -8) = &UNK_1800e8eb8;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar6 + -8) = 0x1800e8d99;
  lVar8 = FUN_18000fb70(uVar2 * 0x40);
  *param_1 = lVar8;
  param_1[1] = lVar8;
  param_1[2] = uVar2 * 0x40 + lVar8;
  *(undefined8 *)(puVar6 + -8) = 0x1800e8db6;
  lVar8 = FUN_1800e93e0(param_2,param_3,lVar8);
  param_1[1] = lVar8;
  return;
}



/* ===== 1800e8ec0 FUN_1800e8ec0 ===== */

void FUN_1800e8ec0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)
               (*(longlong *)(param_1 + 8) +
               (*(longlong *)(param_1 + 0x10) - 1U & lVar2 + *(longlong *)(param_1 + 0x18) + -1) * 8
               );
      FUN_180081c30(lVar2 + 0x28);
      FUN_18000f890(lVar2);
      lVar2 = *(longlong *)(param_1 + 0x20) + -1;
      *(longlong *)(param_1 + 0x20) = lVar2;
    } while (lVar2 != 0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  while (0 < lVar2) {
    lVar6 = lVar2 + -1;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + -8 + lVar2 * 8);
    lVar2 = lVar6;
    if (lVar3 != 0) {
      thunk_FUN_1803d64e0(lVar3,0x40);
    }
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = lVar2;
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_1800e8f9d;
    lVar3 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1800e8f9d:
  *(undefined8 *)(puVar5 + -8) = 0x1800e8fa5;
  thunk_FUN_1803d64e0(lVar3);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* ===== 1800e8fc0 FUN_1800e8fc0 ===== */

void FUN_1800e8fc0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    do {
      FUN_18000f890(*(undefined8 *)
                     (*(longlong *)(param_1 + 8) +
                     (*(longlong *)(param_1 + 0x10) - 1U &
                     *(longlong *)(param_1 + 0x18) + -1 + lVar2) * 8));
      lVar2 = *(longlong *)(param_1 + 0x20) + -1;
      *(longlong *)(param_1 + 0x20) = lVar2;
    } while (lVar2 != 0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  while (0 < lVar2) {
    lVar6 = lVar2 + -1;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + -8 + lVar2 * 8);
    lVar2 = lVar6;
    if (lVar3 != 0) {
      thunk_FUN_1803d64e0(lVar3,0x20);
    }
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = lVar2;
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_1800e9092;
    lVar3 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1800e9092:
  *(undefined8 *)(puVar5 + -8) = 0x1800e909a;
  thunk_FUN_1803d64e0(lVar3);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* ===== 1800e90b0 FUN_1800e90b0 ===== */

longlong * FUN_1800e90b0(longlong param_1,longlong *param_2,longlong *param_3)

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
          FUN_18000f890(plVar11 + 2);
          thunk_FUN_1803d64e0(plVar11,0x50);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar11 == plVar5) break;
          plVar11 = plVar12;
          if (plVar12 == param_3) {
            *plVar13 = (longlong)plVar12;
            goto LAB_1800e92a1;
          }
        }
        *plVar13 = (longlong)puVar3;
        *(undefined8 **)(lVar2 + 8 + uVar10 * 0x10) = puVar3;
      }
      goto LAB_1800e92a1;
    }
    plVar11 = plVar12;
  } while (plVar12 != param_3);
  if (plVar13 == param_2) {
    *(longlong *)(lVar6 + lVar2) = (longlong)plVar12;
  }
LAB_1800e92a1:
  *puVar4 = plVar12;
  plVar12[1] = (longlong)puVar4;
  return param_3;
}



/* ===== 1800e9300 FUN_1800e9300 ===== */

undefined8 *
FUN_1800e9300(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(DAT_180cd1128 + 8 + (DAT_180cd1140 & param_4) * 0x10);
  if (puVar4 == DAT_180cd1118) {
    *param_2 = DAT_180cd1118;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = *(undefined8 **)(DAT_180cd1128 + (DAT_180cd1140 & param_4) * 0x10);
  _Size = param_3[2];
  uVar2 = param_3[3];
  while( true ) {
    _Buf2 = puVar4 + 2;
    if (0xf < (ulonglong)puVar4[5]) {
      _Buf2 = (undefined8 *)*_Buf2;
    }
    if (uVar2 < 0x10) {
      _Buf1 = param_3;
    }
    else {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == puVar4[4]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0))))
    break;
    if (puVar4 == puVar1) {
      *param_2 = puVar4;
      param_2[1] = 0;
      return param_2;
    }
    puVar4 = (undefined8 *)puVar4[1];
  }
  *param_2 = *puVar4;
  param_2[1] = puVar4;
  return param_2;
}



/* ===== 1800e93e0 FUN_1800e93e0 ===== */

undefined8 * FUN_1800e93e0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
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
    uVar1 = param_1[7];
    uVar2 = param_1[6];
    uVar3 = param_1[5];
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_3[5] = uVar3;
    param_3[6] = uVar2;
    param_3[7] = uVar1;
    param_3 = param_3 + 8;
    param_1 = param_1 + 8;
  }
  return param_3;
}



/* ===== 1800e9470 FUN_1800e9470 ===== */

longlong * FUN_1800e9470(longlong *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 extraout_XMM0_Da;
  undefined1 local_res8 [8];
  undefined1 local_38 [16];
  
  lVar9 = DAT_180cd1118;
  uVar11 = param_2[1];
  uVar2 = *(ulonglong *)(param_3 + 8);
  lVar3 = *param_2;
  if (uVar11 != uVar2) {
    lVar4 = *(longlong *)(lVar3 + 0x10);
    lVar5 = *(longlong *)(lVar3 + 8);
    do {
      uVar13 = 0xcbf29ce484222325;
      uVar7 = lVar4 - 1U & uVar11;
      plVar6 = *(longlong **)(lVar5 + uVar7 * 8);
      plVar10 = (longlong *)(lVar5 + uVar7 * 8);
      if (0xf < (ulonglong)plVar6[3]) {
        plVar10 = plVar6;
      }
      uVar7 = 0;
      lVar8 = *plVar10;
      if (plVar6[2] != 0) {
        do {
          plVar10 = (longlong *)(ulonglong)*(byte *)(uVar7 + lVar8);
          uVar7 = uVar7 + 1;
          uVar13 = (uVar13 ^ (ulonglong)plVar10) * 0x100000001b3;
        } while (uVar7 < (ulonglong)plVar6[2]);
      }
      lVar8 = FUN_1800e9300(plVar10,local_38,plVar6,uVar13);
      lVar8 = *(longlong *)(lVar8 + 8);
      lVar12 = DAT_180cd1118;
      if (lVar8 != 0) {
        lVar12 = lVar8;
      }
      if (lVar12 == lVar9) break;
      if (2 < DAT_180cd1100 - *(int *)(lVar12 + 0x48)) {
        FUN_1800e8480(lVar8,local_res8);
        break;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar2);
    uVar7 = uVar11;
    if (uVar11 != uVar2) {
      while (uVar7 = uVar7 + 1, uVar7 != uVar2) {
        uVar14 = 0xcbf29ce484222325;
        uVar13 = *(longlong *)(lVar3 + 0x10) - 1U & uVar7;
        plVar6 = *(longlong **)(*(longlong *)(lVar3 + 8) + uVar13 * 8);
        plVar10 = (longlong *)(*(longlong *)(lVar3 + 8) + uVar13 * 8);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar10 = plVar6;
        }
        uVar13 = 0;
        if (plVar6[2] != 0) {
          do {
            pbVar1 = (byte *)(*plVar10 + uVar13);
            uVar13 = uVar13 + 1;
            uVar14 = (uVar14 ^ *pbVar1) * 0x100000001b3;
          } while (uVar13 < (ulonglong)plVar6[2]);
        }
        lVar9 = FUN_1800e9300(uVar13,local_38,plVar6,uVar14);
        lVar9 = *(longlong *)(lVar9 + 8);
        if ((lVar9 != 0) && (lVar9 != DAT_180cd1118)) {
          if (DAT_180cd1100 - *(int *)(lVar9 + 0x48) < 3) {
            uVar13 = *(longlong *)(lVar3 + 0x10) - 1;
            FUN_18002ba60(*(undefined8 *)(*(longlong *)(lVar3 + 8) + (uVar13 & uVar11) * 8),
                          *(undefined8 *)(*(longlong *)(lVar3 + 8) + (uVar13 & uVar7) * 8));
            uVar11 = uVar11 + 1;
          }
          else {
            FUN_1800e8480(extraout_XMM0_Da,local_res8);
          }
        }
      }
    }
  }
  param_2[1] = uVar11;
  lVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar3;
  return param_1;
}



/* ===== 1800e9680 FUN_1800e9680 ===== */

undefined8 FUN_1800e9680(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  longlong *local_68;
  undefined4 *local_60;
  ulonglong local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  
  lVar14 = *param_1;
  lVar10 = (param_1[1] - lVar14 >> 3) * -0x3333333333333333;
  uVar18 = 0x666666666666666;
  if (lVar10 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar10 + 1;
  uVar13 = (param_1[2] - lVar14 >> 3) * -0x3333333333333333;
  if (uVar13 <= 0x666666666666666 - (uVar13 >> 1)) {
    uVar13 = (uVar13 >> 1) + uVar13;
    uVar18 = uVar1;
    if (uVar1 <= uVar13) {
      uVar18 = uVar13;
    }
    if (0x666666666666666 < uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar11 = (undefined4 *)FUN_18000fb70(uVar18 * 0x28);
  puVar2 = puVar11 + (((longlong)param_2 - lVar14) / 0x28) * 10;
  puVar9 = puVar2 + 10;
  *puVar2 = *param_3;
  local_68 = param_1;
  local_60 = puVar11;
  local_58 = uVar18;
  local_50 = puVar9;
  local_48 = puVar9;
  FUN_180024b50(puVar2 + 2);
  puVar15 = auStack_88;
  puVar16 = auStack_88;
  puVar2 = (undefined4 *)param_1[1];
  puVar12 = (undefined4 *)*param_1;
  puVar8 = puVar11;
  if (param_2 == puVar2) {
    for (; puVar12 != puVar2; puVar12 = puVar12 + 10) {
      *puVar8 = *puVar12;
      *(undefined8 *)(puVar8 + 2) = 0;
      *(undefined8 *)(puVar8 + 4) = 0;
      *(undefined8 *)(puVar8 + 6) = 0;
      *(undefined8 *)(puVar8 + 8) = 0;
      uVar4 = puVar12[3];
      uVar5 = puVar12[4];
      uVar6 = puVar12[5];
      puVar8[2] = puVar12[2];
      puVar8[3] = uVar4;
      puVar8[4] = uVar5;
      puVar8[5] = uVar6;
      uVar7 = *(undefined8 *)(puVar12 + 8);
      *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar12 + 6);
      *(undefined8 *)(puVar8 + 8) = uVar7;
      *(undefined8 *)(puVar12 + 6) = 0;
      *(undefined8 *)(puVar12 + 8) = 0xf;
      *(undefined1 *)(puVar12 + 2) = 0;
      puVar8 = puVar8 + 10;
    }
  }
  else {
    for (; puVar12 != param_2; puVar12 = puVar12 + 10) {
      *puVar8 = *puVar12;
      *(undefined8 *)(puVar8 + 2) = 0;
      *(undefined8 *)(puVar8 + 4) = 0;
      *(undefined8 *)(puVar8 + 6) = 0;
      *(undefined8 *)(puVar8 + 8) = 0;
      uVar4 = puVar12[3];
      uVar5 = puVar12[4];
      uVar6 = puVar12[5];
      puVar8[2] = puVar12[2];
      puVar8[3] = uVar4;
      puVar8[4] = uVar5;
      puVar8[5] = uVar6;
      uVar7 = *(undefined8 *)(puVar12 + 8);
      *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar12 + 6);
      *(undefined8 *)(puVar8 + 8) = uVar7;
      *(undefined8 *)(puVar12 + 6) = 0;
      *(undefined8 *)(puVar12 + 8) = 0xf;
      *(undefined1 *)(puVar12 + 2) = 0;
      puVar8 = puVar8 + 10;
    }
    puVar2 = (undefined4 *)param_1[1];
    for (; param_2 != puVar2; param_2 = param_2 + 10) {
      *puVar9 = *param_2;
      *(undefined8 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      uVar4 = param_2[3];
      uVar5 = param_2[4];
      uVar6 = param_2[5];
      puVar9[2] = param_2[2];
      puVar9[3] = uVar4;
      puVar9[4] = uVar5;
      puVar9[5] = uVar6;
      uVar7 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(puVar9 + 8) = uVar7;
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined8 *)(param_2 + 8) = 0xf;
      *(undefined1 *)(param_2 + 2) = 0;
      puVar9 = puVar9 + 10;
    }
  }
  lVar14 = *param_1;
  puVar17 = auStack_88;
  if (lVar14 == 0) goto LAB_1800e990c;
  lVar10 = param_1[1];
  for (; lVar14 != lVar10; lVar14 = lVar14 + 0x28) {
    FUN_18000f890(lVar14 + 8);
  }
  lVar14 = *param_1;
  lVar10 = lVar14;
  if ((ulonglong)((param_1[2] - lVar14 >> 3) * 8) < 0x1000) {
LAB_1800e9901:
    puVar16 = puVar15;
  }
  else {
    lVar10 = *(longlong *)(lVar14 + -8);
    if (0x1f < (lVar14 - lVar10) - 8U) {
      lVar10 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar15 = auStack_80;
      goto LAB_1800e9901;
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x1800e990c;
  thunk_FUN_1803d64e0(lVar10);
  puVar17 = puVar16;
LAB_1800e990c:
  *param_1 = (longlong)puVar11;
  param_1[1] = (longlong)(puVar11 + uVar1 * 10);
  param_1[2] = *(longlong *)(puVar17 + 0x90) + (longlong)puVar11;
  return *(undefined8 *)(puVar17 + 0x98);
}



/* ===== 1800e9960 FUN_1800e9960 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e9960(undefined4 *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 *local_98;
  longlong local_90;
  longlong local_88;
  undefined4 *local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_c8;
  lVar2 = param_2 - (longlong)param_1;
  local_90 = param_3;
  while( true ) {
    if (lVar2 < 0x528) {
      FUN_1800ea5b0(param_1,param_2);
      return;
    }
    lVar2 = (param_2 - (longlong)param_1) / 0x28;
    lVar3 = lVar2 >> 1;
    if (param_3 < 1) break;
    lVar2 = ((param_2 + -0x28) - (longlong)param_1 >> 3) * -0x3333333333333333;
    local_98 = param_1 + lVar3 * 10;
    if (lVar2 < 0x29) {
      FUN_1800eb0e0(param_1,local_98,param_2 + -0x28);
      puVar4 = local_98;
    }
    else {
      lVar2 = lVar2 + 1 >> 3;
      FUN_1800eb0e0(param_1,param_1 + lVar2 * 10,param_1 + lVar2 * 0x14);
      puVar4 = local_98;
      FUN_1800eb0e0(local_98 + lVar2 * -10,local_98,param_1 + (lVar2 + lVar3) * 10);
      lVar3 = param_2 + -0x28 + lVar2 * -0x28;
      FUN_1800eb0e0(param_2 + -0x28 + lVar2 * -0x50,lVar3);
      FUN_1800eb0e0(param_1 + lVar2 * 10,puVar4,lVar3);
      param_3 = local_90;
    }
    FUN_1800ead00(&local_88,param_1,puVar4,param_2);
    puVar4 = local_80;
    lVar3 = local_88;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    local_90 = param_3;
    if ((local_88 - (longlong)param_1 >> 3) * -0x3333333333333333 <
        (param_2 - (longlong)local_80 >> 3) * -0x3333333333333333) {
      FUN_1800e9960(param_1,local_88,param_3,param_4);
      param_1 = puVar4;
      lVar3 = param_2;
    }
    else {
      FUN_1800e9960(local_80,param_2,param_3,param_4);
    }
    lVar2 = lVar3 - (longlong)param_1;
    param_2 = lVar3;
  }
  while (0 < lVar3) {
    local_78[0] = param_1[lVar3 * 10 + -10];
    puVar1 = (undefined8 *)(param_1 + lVar3 * 10 + -6);
    uStack_68 = *puVar1;
    uStack_60 = *(undefined4 *)(puVar1 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
    local_70 = *(undefined8 *)(param_1 + lVar3 * 10 + -8);
    local_58 = *(undefined8 *)(param_1 + lVar3 * 10 + -2);
    *(undefined1 *)(param_1 + lVar3 * 10 + -8) = 0;
    *(undefined8 *)(param_1 + lVar3 * 10 + -4) = 0;
    *(undefined8 *)(param_1 + lVar3 * 10 + -2) = 0xf;
    local_a8 = param_4;
    FUN_1800eab80(param_1,lVar3 + -1,lVar2,local_78);
    FUN_18000f890(&local_70);
    lVar3 = lVar3 + -1;
  }
  if (lVar2 < 2) {
    return;
  }
  do {
    if (1 < (param_2 - (longlong)param_1 >> 3) * -0x3333333333333333) {
      local_78[0] = *(undefined4 *)(param_2 + -0x28);
      puVar1 = (undefined8 *)(param_2 + -0x20);
      local_58 = *(undefined8 *)(param_2 + -8);
      local_70 = *puVar1;
      uStack_68 = *(undefined8 *)(param_2 + -0x18);
      uStack_60 = *(undefined4 *)(param_2 + -0x10);
      uStack_5c = *(undefined4 *)(param_2 + -0xc);
      *(undefined1 *)puVar1 = 0;
      *(undefined8 *)(param_2 + -0x10) = 0;
      *(undefined8 *)(param_2 + -8) = 0xf;
      *(undefined4 *)(param_2 + -0x28) = *param_1;
      FUN_18002ba60(puVar1,param_1 + 2);
      local_a8 = param_4;
      FUN_1800eab80(param_1,0,((param_2 + -0x28) - (longlong)param_1 >> 3) * -0x3333333333333333,
                    local_78);
      FUN_18000f890(&local_70);
    }
    param_2 = param_2 + -0x28;
  } while (0x4f < param_2 - (longlong)param_1);
  return;
}



/* ===== 1800e9cb0 FUN_1800e9cb0 ===== */

undefined4 * FUN_1800e9cb0(undefined8 param_1,ulonglong param_2,undefined4 *param_3)

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
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar11 = (ulonglong)DAT_180cd1198;
  if ((longlong)DAT_180cd11a0 - (longlong)DAT_180cd1198 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar10 = (longlong)DAT_180cd11a8 - (longlong)DAT_180cd1198 >> 6;
  uVar14 = ((longlong)DAT_180cd11a0 - (longlong)DAT_180cd1198 >> 6) + 1;
  uVar16 = 0x3ffffffffffffff;
  if (uVar10 <= 0x3ffffffffffffff - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar16 = uVar14;
    if (uVar14 <= uVar10) {
      uVar16 = uVar10;
    }
    if (0x3ffffffffffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined4 *)FUN_18000fb70(uVar16 * 0x40);
  uVar11 = param_2 - uVar11 & 0xffffffffffffffc0;
  *(undefined8 *)(uVar11 + (longlong)puVar9) = 0;
  ((undefined8 *)(uVar11 + (longlong)puVar9))[1] = 0;
  *(undefined8 *)(uVar11 + 0x10 + (longlong)puVar9) = 0;
  puVar1 = (undefined4 *)(uVar11 + (longlong)puVar9);
  *(undefined8 *)(puVar1 + 6) = 0;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  *puVar1 = *param_3;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  puVar1[4] = param_3[4];
  puVar1[5] = uVar6;
  puVar1[6] = uVar7;
  puVar1[7] = uVar8;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined1 *)param_3 = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  puVar1[8] = param_3[8];
  puVar1[9] = param_3[9];
  uVar2 = *(undefined8 *)(param_3 + 0xe);
  uVar3 = *(undefined8 *)(param_3 + 0xc);
  uVar4 = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(param_3 + 0xe) = 0;
  *(undefined8 *)(param_3 + 0xc) = 0;
  *(undefined8 *)(param_3 + 10) = 0;
  *(undefined8 *)(puVar1 + 10) = uVar4;
  *(undefined8 *)(puVar1 + 0xc) = uVar3;
  *(undefined8 *)(puVar1 + 0xe) = uVar2;
  uVar11 = (ulonglong)DAT_180cd1198;
  puVar15 = puVar9;
  if ((undefined4 *)param_2 != DAT_180cd11a0) {
    FUN_1800ea7a0(DAT_180cd1198,param_2,puVar9);
    puVar15 = puVar1 + 0x10;
    uVar11 = param_2;
  }
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  FUN_1800ea7a0(uVar11,DAT_180cd11a0,puVar15);
  uVar10 = (ulonglong)DAT_180cd11a0;
  uVar11 = (ulonglong)DAT_180cd1198;
  if (DAT_180cd1198 == (undefined4 *)0x0) goto LAB_1800e9e5e;
  for (; uVar11 != uVar10; uVar11 = uVar11 + 0x40) {
    FUN_180081c30(uVar11 + 0x28);
    FUN_18000f890(uVar11);
  }
  uVar11 = (ulonglong)DAT_180cd1198;
  if (((longlong)DAT_180cd11a8 - (longlong)DAT_180cd1198 & 0xffffffffffffffc0U) < 0x1000) {
LAB_1800e9e56:
    puVar13 = puVar12;
  }
  else {
    uVar11 = *(ulonglong *)((longlong)DAT_180cd1198 - 8);
    uVar10 = ((longlong)DAT_180cd1198 - uVar11) - 8;
    if (0x1f < uVar10) {
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar12 = auStack_30;
      uVar11 = uVar10;
      goto LAB_1800e9e56;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x1800e9e5e;
  thunk_FUN_1803d64e0(uVar11);
LAB_1800e9e5e:
  DAT_180cd1198 = puVar9;
  DAT_180cd11a0 = puVar9 + uVar14 * 0x10;
  DAT_180cd11a8 = puVar9 + uVar16 * 0x10;
  return puVar1;
}



/* ===== 1800e9eb0 FUN_1800e9eb0 ===== */

void FUN_1800e9eb0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18000f890(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x50);
  return;
}



/* ===== 1800e9ef0 FUN_1800e9ef0 ===== */

void FUN_1800e9ef0(void)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar2 = DAT_180ca0e48;
  uVar6 = 1;
  if (DAT_180ca0e40 != 0) {
    uVar6 = DAT_180ca0e40;
  }
  for (; (uVar6 == DAT_180ca0e40 || (uVar6 < 8)); uVar6 = uVar6 * 2) {
    if (0x3ffffffffffffff - uVar6 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18007e820();
    }
  }
  if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
  lVar3 = FUN_18000fb70(uVar6 * 8);
  lVar5 = uVar2 * 8;
  uVar4 = uVar6 >> 1;
  for (; uVar6 <= uVar4; uVar6 = uVar6 * 2) {
  }
  uVar6 = uVar6 - DAT_180ca0e40;
  lVar9 = (DAT_180ca0e40 - uVar2) * 8;
  FUN_180540530(lVar5 + lVar3,DAT_180ca0e38 + lVar5,lVar9);
  lVar9 = lVar9 + lVar5 + lVar3;
  if (uVar6 < uVar2) {
    lVar5 = uVar6 * 8;
    FUN_180540530(lVar9,DAT_180ca0e38,lVar5);
    lVar9 = (uVar2 - uVar6) * 8;
    FUN_180540530(lVar3,DAT_180ca0e38 + lVar5,lVar9);
    lVar9 = lVar3 + lVar9;
  }
  else {
    FUN_180540530(lVar9,DAT_180ca0e38,lVar5);
    FUN_180540170(lVar9 + lVar5,0,(uVar6 - uVar2) * 8);
    lVar9 = lVar3;
  }
  FUN_180540170(lVar9,0,lVar5);
  puVar7 = auStack_38;
  puVar8 = auStack_38;
  if (DAT_180ca0e38 == 0) goto LAB_1800ea098;
  lVar5 = DAT_180ca0e38;
  if (DAT_180ca0e40 * 8 < 0x1000) {
LAB_1800ea08d:
    puVar8 = puVar7;
  }
  else {
    lVar5 = *(longlong *)(DAT_180ca0e38 + -8);
    if (0x1f < (DAT_180ca0e38 - lVar5) - 8U) {
      lVar5 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar7 = auStack_30;
      goto LAB_1800ea08d;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x1800ea098;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800ea098:
  DAT_180ca0e40 = DAT_180ca0e40 + uVar6;
  DAT_180ca0e38 = lVar3;
  return;
}



/* ===== 1800ea0c0 FUN_1800ea0c0 ===== */

void FUN_1800ea0c0(void)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar2 = DAT_180ca0f28;
  uVar6 = 1;
  if (DAT_180ca0f20 != 0) {
    uVar6 = DAT_180ca0f20;
  }
  for (; (uVar6 == DAT_180ca0f20 || (uVar6 < 8)); uVar6 = uVar6 * 2) {
    if (0x7ffffffffffffff - uVar6 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_1800ce400();
    }
  }
  if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
  lVar3 = FUN_18000fb70(uVar6 * 8);
  lVar5 = uVar2 * 8;
  uVar4 = uVar6 >> 1;
  for (; uVar6 <= uVar4; uVar6 = uVar6 * 2) {
  }
  uVar6 = uVar6 - DAT_180ca0f20;
  lVar9 = (DAT_180ca0f20 - uVar2) * 8;
  FUN_180540530(lVar5 + lVar3,DAT_180ca0f18 + lVar5,lVar9);
  lVar9 = lVar9 + lVar5 + lVar3;
  if (uVar6 < uVar2) {
    lVar5 = uVar6 * 8;
    FUN_180540530(lVar9,DAT_180ca0f18,lVar5);
    lVar9 = (uVar2 - uVar6) * 8;
    FUN_180540530(lVar3,DAT_180ca0f18 + lVar5,lVar9);
    lVar9 = lVar3 + lVar9;
  }
  else {
    FUN_180540530(lVar9,DAT_180ca0f18,lVar5);
    FUN_180540170(lVar9 + lVar5,0,(uVar6 - uVar2) * 8);
    lVar9 = lVar3;
  }
  FUN_180540170(lVar9,0,lVar5);
  puVar7 = auStack_38;
  puVar8 = auStack_38;
  if (DAT_180ca0f18 == 0) goto LAB_1800ea268;
  lVar5 = DAT_180ca0f18;
  if (DAT_180ca0f20 * 8 < 0x1000) {
LAB_1800ea25d:
    puVar8 = puVar7;
  }
  else {
    lVar5 = *(longlong *)(DAT_180ca0f18 + -8);
    if (0x1f < (DAT_180ca0f18 - lVar5) - 8U) {
      lVar5 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar7 = auStack_30;
      goto LAB_1800ea25d;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x1800ea268;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800ea268:
  DAT_180ca0f20 = DAT_180ca0f20 + uVar6;
  DAT_180ca0f18 = lVar3;
  return;
}



/* ===== 1800ea290 FUN_1800ea290 ===== */

undefined8 * FUN_1800ea290(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar3 = DAT_180ca0f28;
  plVar2 = DAT_180ca0f10;
  uVar5 = *(ulonglong *)(param_4 + 0x10);
  uVar6 = *(ulonglong *)(param_3 + 0x10);
  lVar7 = uVar5 - uVar6;
  if (lVar7 == 0) {
    param_2[1] = 0;
    *param_2 = plVar2;
    param_2[2] = uVar6;
    return param_2;
  }
  uVar4 = uVar6 - DAT_180ca0f28;
  if (DAT_180ca0f10 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *DAT_180ca0f10;
  }
  uVar1 = DAT_180ca0f28 + DAT_180ca0f30;
  if (uVar4 < uVar1 - uVar5) {
    if (DAT_180ca0f28 != uVar6) {
      do {
        uVar6 = uVar6 - 1;
        uVar5 = uVar5 - 1;
        FUN_18002ba60(*(undefined8 *)
                       (*(longlong *)(lVar8 + 8) + (*(longlong *)(lVar8 + 0x10) - 1U & uVar5) * 8),
                      *(undefined8 *)
                       (*(longlong *)(lVar8 + 8) + (*(longlong *)(lVar8 + 0x10) - 1U & uVar6) * 8));
      } while (uVar3 != uVar6);
    }
    do {
      FUN_18000f890(*(undefined8 *)(DAT_180ca0f18 + (DAT_180ca0f20 - 1U & DAT_180ca0f28) * 8));
      DAT_180ca0f30 = DAT_180ca0f30 + -1;
      if (DAT_180ca0f30 == 0) {
        DAT_180ca0f28 = 0;
      }
      else {
        DAT_180ca0f28 = DAT_180ca0f28 + 1;
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  else {
    if (uVar5 != uVar1) {
      do {
        FUN_18002ba60(*(undefined8 *)
                       (*(longlong *)(lVar8 + 8) + (*(longlong *)(lVar8 + 0x10) - 1U & uVar6) * 8),
                      *(undefined8 *)
                       (*(longlong *)(lVar8 + 8) + (*(longlong *)(lVar8 + 0x10) - 1U & uVar5) * 8));
        uVar5 = uVar5 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar1);
    }
    do {
      FUN_18000f890(*(undefined8 *)
                     (DAT_180ca0f18 + (DAT_180ca0f30 + -1 + DAT_180ca0f28 & DAT_180ca0f20 - 1U) * 8)
                   );
      DAT_180ca0f30 = DAT_180ca0f30 + -1;
      if (DAT_180ca0f30 == 0) {
        DAT_180ca0f28 = 0;
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  uVar6 = DAT_180ca0f28;
  *param_2 = DAT_180ca0f10;
  param_2[1] = 0;
  param_2[2] = uVar4 + uVar6;
  return param_2;
}



/* ===== 1800ea4a0 FUN_1800ea4a0 ===== */

void FUN_1800ea4a0(longlong *param_1,ulonglong param_2,undefined8 param_3)

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
  if ((ulonglong)(param_1[2] - lVar4) < 8) goto LAB_1800ea54a;
  if ((ulonglong)((param_1[2] - lVar4 >> 3) * 8) < 0x1000) {
LAB_1800ea542:
    lVar5 = lVar4;
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar4 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_1800ea542;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800ea54a;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800ea54a:
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



/* ===== 1800ea5b0 FUN_1800ea5b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_1800ea5b0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_88 [32];
  int *local_68;
  int *local_60;
  int local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int iStack_40;
  int iStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  if (param_1 != param_2) {
    piVar5 = param_1 + 10;
    local_68 = param_1;
    local_60 = param_2;
    if (piVar5 != param_2) {
      do {
        iVar1 = *piVar5;
        local_50 = *(undefined8 *)(piVar5 + 2);
        local_38 = *(undefined8 *)(piVar5 + 8);
        uStack_48 = *(undefined8 *)(piVar5 + 4);
        iStack_40 = piVar5[6];
        iStack_3c = piVar5[7];
        *(undefined1 *)(piVar5 + 2) = 0;
        piVar5[6] = 0;
        piVar5[7] = 0;
        piVar5[8] = 0xf;
        piVar5[9] = 0;
        local_58 = iVar1;
        if (iVar1 == *param_1) {
          cVar3 = FUN_180023470(&local_50,param_1 + 2);
        }
        else {
          cVar3 = -1;
          if (*param_1 <= iVar1) {
            cVar3 = '\x01';
          }
        }
        if (cVar3 < '\0') {
          piVar6 = piVar5 + 10;
          for (piVar4 = piVar5; param_1 != piVar4; piVar4 = piVar4 + -10) {
            piVar6[-10] = piVar4[-10];
            FUN_18002ba60(piVar6 + -8,piVar4 + -8);
            piVar6 = piVar6 + -10;
          }
          *param_1 = iVar1;
          piVar6 = param_1;
        }
        else {
          param_1 = piVar5;
          while( true ) {
            iVar2 = param_1[-10];
            if (iVar1 == iVar2) {
              cVar3 = FUN_180023470(&local_50,param_1 + -8);
            }
            else {
              cVar3 = -1;
              if (iVar2 <= iVar1) {
                cVar3 = '\x01';
              }
            }
            if (-1 < cVar3) break;
            *param_1 = iVar2;
            FUN_18002ba60(param_1 + 2,param_1 + -8);
            param_1 = param_1 + -10;
          }
          *param_1 = iVar1;
          piVar6 = local_68;
        }
        FUN_18002ba60(param_1 + 2,&local_50);
        FUN_18000f890(&local_50);
        piVar5 = piVar5 + 10;
        param_2 = local_60;
        param_1 = piVar6;
      } while (piVar5 != local_60);
    }
  }
  return param_2;
}



/* ===== 1800ea7a0 FUN_1800ea7a0 ===== */

undefined8 * FUN_1800ea7a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)((longlong)param_3 + 0x24) = *(undefined4 *)((longlong)param_1 + 0x24);
    uVar1 = param_1[7];
    uVar2 = param_1[6];
    uVar3 = param_1[5];
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_3[5] = uVar3;
    param_3[6] = uVar2;
    param_3[7] = uVar1;
    param_3 = param_3 + 8;
  }
  return param_3;
}



/* ===== 1800ea860 FUN_1800ea860 ===== */

void FUN_1800ea860(longlong param_1)

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
  for (lVar6 = *(longlong *)(param_1 + 0x18); lVar6 != lVar2; lVar6 = lVar6 + 0x28) {
    FUN_18000f890(lVar6 + 8);
  }
  uVar5 = *(ulonglong *)(param_1 + 8);
  uVar4 = *(longlong *)(param_1 + 0x10) * 0x28;
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



/* ===== 1800ea910 FUN_1800ea910 ===== */

void FUN_1800ea910(undefined8 param_1,ulonglong param_2)

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
  
  plVar7 = DAT_180cd1118;
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
  FUN_180029d30(&DAT_180cd1128,2L << (bVar12 & 0x3f),DAT_180cd1118);
  DAT_180cd1140 = lVar14 - 1;
  DAT_180cd1148 = lVar14;
  plVar6 = (longlong *)*DAT_180cd1118;
  lVar14 = DAT_180cd1128;
joined_r0x0001800ea991:
  do {
    while( true ) {
      if (plVar6 == plVar7) {
        DAT_180cd1128 = lVar14;
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
      uVar17 = uVar17 & DAT_180cd1140;
      plVar11 = *(longlong **)(lVar14 + uVar17 * 0x10);
      DAT_180cd1128 = lVar14;
      if (plVar11 != plVar7) break;
      *(longlong **)(lVar14 + uVar17 * 0x10) = plVar6;
      *(longlong **)(lVar14 + 8 + uVar17 * 0x10) = plVar6;
      plVar6 = plVar2;
      lVar14 = DAT_180cd1128;
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
LAB_1800eaa9a:
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
              lVar14 = DAT_180cd1128;
              goto joined_r0x0001800ea991;
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
      lVar14 = DAT_180cd1128;
      goto joined_r0x0001800ea991;
    }
    if ((uVar9 != 0) && (iVar8 = memcmp(_Buf1,plVar13,uVar9), iVar8 != 0)) {
      plVar11 = *(longlong **)(lVar14 + uVar17 * 0x10);
      uVar16 = plVar6[5];
      goto LAB_1800eaa9a;
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
    lVar14 = DAT_180cd1128;
  } while( true );
}



/* ===== 1800eab80 FUN_1800eab80 ===== */

void FUN_1800eab80(longlong param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar6 = param_2;
  if (param_2 < lVar5) {
    do {
      lVar4 = lVar6 * 0x50;
      iVar1 = *(int *)(param_1 + 0x28 + lVar4);
      iVar2 = *(int *)(param_1 + 0x50 + lVar4);
      if (iVar2 == iVar1) {
        cVar3 = FUN_180023470(param_1 + 0x58 + lVar4,param_1 + 0x30 + lVar4);
      }
      else {
        cVar3 = -1;
        if (iVar1 <= iVar2) {
          cVar3 = '\x01';
        }
      }
      lVar4 = lVar6 * 5 + 1;
      lVar6 = ((longlong)cVar3 >> 0x3f) + (lVar6 + 1) * 2;
      *(undefined4 *)(param_1 + -8 + lVar4 * 8) = *(undefined4 *)(param_1 + lVar6 * 0x28);
      FUN_18002ba60(param_1 + lVar4 * 8,param_1 + (lVar6 * 5 + 1) * 8);
    } while (lVar6 < lVar5);
  }
  if ((lVar6 == lVar5) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + lVar6 * 0x28) = *(undefined4 *)(param_1 + -0x28 + param_3 * 0x28);
    FUN_18002ba60(param_1 + (lVar6 * 5 + 1) * 8,param_1 + (param_3 * 5 + -4) * 8);
    lVar6 = param_3 - 1;
  }
  while (param_2 < lVar6) {
    lVar5 = lVar6 + -1 >> 1;
    iVar1 = *(int *)(param_1 + lVar5 * 0x28);
    if (iVar1 == *param_4) {
      cVar3 = FUN_180023470(param_1 + 8 + lVar5 * 0x28,param_4 + 2);
    }
    else {
      cVar3 = -1;
      if (*param_4 <= iVar1) {
        cVar3 = '\x01';
      }
    }
    if (-1 < cVar3) break;
    *(int *)(param_1 + lVar6 * 0x28) = iVar1;
    FUN_18002ba60(param_1 + (lVar6 * 5 + 1) * 8,param_1 + 8 + lVar5 * 0x28);
    lVar6 = lVar5;
  }
  *(int *)(param_1 + lVar6 * 0x28) = *param_4;
  FUN_18002ba60(param_1 + (lVar6 * 5 + 1) * 8,param_4 + 2);
  return;
}



/* ===== 1800ead00 FUN_1800ead00 ===== */

void FUN_1800ead00(ulonglong *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  char cVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  
  piVar13 = param_3 + 10;
  if (param_2 < param_3) {
    while( true ) {
      iVar1 = param_3[-10];
      piVar15 = param_3 + -10;
      iVar2 = *param_3;
      if (iVar1 == iVar2) {
        cVar10 = FUN_180023470(param_3 + -8,param_3 + 2);
      }
      else {
        cVar10 = -1;
        if (iVar2 <= iVar1) {
          cVar10 = '\x01';
        }
      }
      if (cVar10 < '\0') break;
      if (iVar2 == iVar1) {
        cVar10 = FUN_180023470(param_3 + 2,param_3 + -8);
      }
      else {
        cVar10 = -1;
        if (iVar1 <= iVar2) {
          cVar10 = '\x01';
        }
      }
      if ((cVar10 < '\0') || (param_3 = piVar15, piVar15 <= param_2)) break;
    }
  }
  piVar15 = piVar13;
  piVar12 = param_3;
  if (piVar13 < param_4) {
    iVar1 = *param_3;
    while( true ) {
      iVar2 = *piVar13;
      if (iVar2 == iVar1) {
        cVar10 = FUN_180023470(piVar13 + 2,param_3 + 2);
      }
      else {
        cVar10 = -1;
        if (iVar1 <= iVar2) {
          cVar10 = '\x01';
        }
      }
      piVar15 = piVar13;
      if (cVar10 < '\0') break;
      if (iVar1 == iVar2) {
        cVar10 = FUN_180023470(param_3 + 2,piVar13 + 2);
      }
      else {
        cVar10 = -1;
        if (iVar2 <= iVar1) {
          cVar10 = '\x01';
        }
      }
      if ((cVar10 < '\0') || (piVar13 = piVar13 + 10, piVar15 = piVar13, param_4 <= piVar13)) break;
    }
  }
joined_r0x0001800eae03:
  do {
    piVar11 = piVar12;
    piVar14 = piVar15;
    if (param_4 <= piVar13) {
joined_r0x0001800eaea5:
      while (piVar9 = param_3, param_2 < piVar9) {
        iVar1 = piVar9[-10];
        param_3 = piVar9 + -10;
        iVar2 = *piVar11;
        if (iVar1 == iVar2) {
          cVar10 = FUN_180023470(piVar9 + -8,piVar11 + 2);
        }
        else {
          cVar10 = -1;
          if (iVar2 <= iVar1) {
            cVar10 = '\x01';
          }
        }
        if (-1 < cVar10) {
          if (iVar2 == iVar1) {
            cVar10 = FUN_180023470(piVar11 + 2,piVar9 + -8);
          }
          else {
            cVar10 = -1;
            if (iVar1 <= iVar2) {
              cVar10 = '\x01';
            }
          }
          if (cVar10 < '\0') break;
          if (piVar9 != piVar11) {
            iVar2 = piVar11[-10];
            piVar11[-10] = iVar1;
            *param_3 = iVar2;
            iVar1 = piVar9[-7];
            iVar2 = piVar9[-6];
            iVar3 = piVar9[-5];
            uVar4 = *(undefined8 *)(piVar11 + -8);
            uVar5 = *(undefined8 *)(piVar11 + -6);
            uVar6 = *(undefined8 *)(piVar11 + -4);
            uVar7 = *(undefined8 *)(piVar11 + -2);
            piVar11[-8] = piVar9[-8];
            piVar11[-7] = iVar1;
            piVar11[-6] = iVar2;
            piVar11[-5] = iVar3;
            uVar8 = *(undefined8 *)(piVar9 + -2);
            *(undefined8 *)(piVar11 + -4) = *(undefined8 *)(piVar9 + -4);
            *(undefined8 *)(piVar11 + -2) = uVar8;
            *(undefined8 *)(piVar9 + -8) = uVar4;
            *(undefined8 *)(piVar9 + -6) = uVar5;
            *(undefined8 *)(piVar9 + -4) = uVar6;
            *(undefined8 *)(piVar9 + -2) = uVar7;
          }
          piVar11 = piVar11 + -10;
        }
      }
      if (piVar9 == param_2) {
        if (piVar13 == param_4) {
          *param_1 = (ulonglong)piVar11;
          param_1[1] = (ulonglong)piVar14;
          return;
        }
        if (piVar14 != piVar13) {
          iVar1 = *piVar11;
          *piVar11 = *piVar14;
          *piVar14 = iVar1;
          if (piVar11 != piVar14) {
            iVar1 = piVar14[3];
            iVar2 = piVar14[4];
            iVar3 = piVar14[5];
            uVar4 = *(undefined8 *)(piVar11 + 2);
            uVar5 = *(undefined8 *)(piVar11 + 4);
            uVar6 = *(undefined8 *)(piVar11 + 6);
            uVar7 = *(undefined8 *)(piVar11 + 8);
            piVar11[2] = piVar14[2];
            piVar11[3] = iVar1;
            piVar11[4] = iVar2;
            piVar11[5] = iVar3;
            uVar8 = *(undefined8 *)(piVar14 + 8);
            *(undefined8 *)(piVar11 + 6) = *(undefined8 *)(piVar14 + 6);
            *(undefined8 *)(piVar11 + 8) = uVar8;
            *(undefined8 *)(piVar14 + 2) = uVar4;
            *(undefined8 *)(piVar14 + 4) = uVar5;
            *(undefined8 *)(piVar14 + 6) = uVar6;
            *(undefined8 *)(piVar14 + 8) = uVar7;
          }
        }
        iVar1 = *piVar11;
        *piVar11 = *piVar13;
        *piVar13 = iVar1;
        if (piVar11 != piVar13) {
          iVar1 = piVar13[3];
          iVar2 = piVar13[4];
          iVar3 = piVar13[5];
          uVar4 = *(undefined8 *)(piVar11 + 2);
          uVar5 = *(undefined8 *)(piVar11 + 4);
          uVar6 = *(undefined8 *)(piVar11 + 6);
          uVar7 = *(undefined8 *)(piVar11 + 8);
          piVar11[2] = piVar13[2];
          piVar11[3] = iVar1;
          piVar11[4] = iVar2;
          piVar11[5] = iVar3;
          uVar8 = *(undefined8 *)(piVar13 + 8);
          *(undefined8 *)(piVar11 + 6) = *(undefined8 *)(piVar13 + 6);
          *(undefined8 *)(piVar11 + 8) = uVar8;
          *(undefined8 *)(piVar13 + 2) = uVar4;
          *(undefined8 *)(piVar13 + 4) = uVar5;
          *(undefined8 *)(piVar13 + 6) = uVar6;
          *(undefined8 *)(piVar13 + 8) = uVar7;
        }
        piVar13 = piVar13 + 10;
        piVar15 = piVar14 + 10;
        param_3 = piVar9;
        piVar12 = piVar11 + 10;
      }
      else {
        param_3 = piVar9 + -10;
        if (piVar13 == param_4) {
          piVar12 = piVar11 + -10;
          if (piVar11 != piVar9) {
            iVar1 = *param_3;
            *param_3 = *piVar12;
            *piVar12 = iVar1;
            iVar1 = piVar11[-7];
            iVar2 = piVar11[-6];
            iVar3 = piVar11[-5];
            uVar4 = *(undefined8 *)(piVar9 + -8);
            uVar5 = *(undefined8 *)(piVar9 + -6);
            uVar6 = *(undefined8 *)(piVar9 + -4);
            uVar7 = *(undefined8 *)(piVar9 + -2);
            piVar9[-8] = piVar11[-8];
            piVar9[-7] = iVar1;
            piVar9[-6] = iVar2;
            piVar9[-5] = iVar3;
            uVar8 = *(undefined8 *)(piVar11 + -2);
            *(undefined8 *)(piVar9 + -4) = *(undefined8 *)(piVar11 + -4);
            *(undefined8 *)(piVar9 + -2) = uVar8;
            *(undefined8 *)(piVar11 + -8) = uVar4;
            *(undefined8 *)(piVar11 + -6) = uVar5;
            *(undefined8 *)(piVar11 + -4) = uVar6;
            *(undefined8 *)(piVar11 + -2) = uVar7;
          }
          piVar15 = piVar14 + -10;
          iVar1 = *piVar12;
          *piVar12 = piVar14[-10];
          *piVar15 = iVar1;
          if (piVar11 != piVar14) {
            iVar1 = piVar14[-7];
            iVar2 = piVar14[-6];
            iVar3 = piVar14[-5];
            uVar4 = *(undefined8 *)(piVar11 + -8);
            uVar5 = *(undefined8 *)(piVar11 + -6);
            uVar6 = *(undefined8 *)(piVar11 + -4);
            uVar7 = *(undefined8 *)(piVar11 + -2);
            piVar11[-8] = piVar14[-8];
            piVar11[-7] = iVar1;
            piVar11[-6] = iVar2;
            piVar11[-5] = iVar3;
            uVar8 = *(undefined8 *)(piVar14 + -2);
            *(undefined8 *)(piVar11 + -4) = *(undefined8 *)(piVar14 + -4);
            *(undefined8 *)(piVar11 + -2) = uVar8;
            *(undefined8 *)(piVar14 + -8) = uVar4;
            *(undefined8 *)(piVar14 + -6) = uVar5;
            *(undefined8 *)(piVar14 + -4) = uVar6;
            *(undefined8 *)(piVar14 + -2) = uVar7;
          }
        }
        else {
          iVar1 = *piVar13;
          *piVar13 = *param_3;
          *param_3 = iVar1;
          if (piVar13 != param_3) {
            iVar1 = piVar9[-7];
            iVar2 = piVar9[-6];
            iVar3 = piVar9[-5];
            uVar4 = *(undefined8 *)(piVar13 + 2);
            uVar5 = *(undefined8 *)(piVar13 + 4);
            uVar6 = *(undefined8 *)(piVar13 + 6);
            uVar7 = *(undefined8 *)(piVar13 + 8);
            piVar13[2] = piVar9[-8];
            piVar13[3] = iVar1;
            piVar13[4] = iVar2;
            piVar13[5] = iVar3;
            uVar8 = *(undefined8 *)(piVar9 + -2);
            *(undefined8 *)(piVar13 + 6) = *(undefined8 *)(piVar9 + -4);
            *(undefined8 *)(piVar13 + 8) = uVar8;
            *(undefined8 *)(piVar9 + -8) = uVar4;
            *(undefined8 *)(piVar9 + -6) = uVar5;
            *(undefined8 *)(piVar9 + -4) = uVar6;
            *(undefined8 *)(piVar9 + -2) = uVar7;
          }
          piVar13 = piVar13 + 10;
          piVar15 = piVar14;
          piVar12 = piVar11;
        }
      }
      goto joined_r0x0001800eae03;
    }
    iVar1 = *piVar13;
    iVar2 = *piVar11;
    if (iVar2 == iVar1) {
      cVar10 = FUN_180023470(piVar11 + 2,piVar13 + 2);
    }
    else {
      cVar10 = -1;
      if (iVar1 <= iVar2) {
        cVar10 = '\x01';
      }
    }
    if (-1 < cVar10) {
      if (iVar1 == iVar2) {
        cVar10 = FUN_180023470(piVar13 + 2,piVar11 + 2);
      }
      else {
        cVar10 = -1;
        if (iVar2 <= iVar1) {
          cVar10 = '\x01';
        }
      }
      if (cVar10 < '\0') goto joined_r0x0001800eaea5;
      if (piVar14 != piVar13) {
        iVar2 = *piVar14;
        *piVar14 = iVar1;
        *piVar13 = iVar2;
        iVar1 = piVar13[3];
        iVar2 = piVar13[4];
        iVar3 = piVar13[5];
        uVar4 = *(undefined8 *)(piVar14 + 2);
        uVar5 = *(undefined8 *)(piVar14 + 4);
        uVar6 = *(undefined8 *)(piVar14 + 6);
        uVar7 = *(undefined8 *)(piVar14 + 8);
        piVar14[2] = piVar13[2];
        piVar14[3] = iVar1;
        piVar14[4] = iVar2;
        piVar14[5] = iVar3;
        uVar8 = *(undefined8 *)(piVar13 + 8);
        *(undefined8 *)(piVar14 + 6) = *(undefined8 *)(piVar13 + 6);
        *(undefined8 *)(piVar14 + 8) = uVar8;
        *(undefined8 *)(piVar13 + 2) = uVar4;
        *(undefined8 *)(piVar13 + 4) = uVar5;
        *(undefined8 *)(piVar13 + 6) = uVar6;
        *(undefined8 *)(piVar13 + 8) = uVar7;
      }
      piVar14 = piVar14 + 10;
    }
    piVar13 = piVar13 + 10;
    piVar15 = piVar14;
    piVar12 = piVar11;
  } while( true );
}



/* ===== 1800eb0e0 FUN_1800eb0e0 ===== */

void FUN_1800eb0e0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (iVar2 == iVar1) {
    cVar9 = FUN_180023470(param_2 + 2,param_1 + 2);
  }
  else {
    cVar9 = -1;
    if (iVar1 <= iVar2) {
      cVar9 = '\x01';
    }
  }
  if (cVar9 < '\0') {
    *param_2 = iVar1;
    *param_1 = iVar2;
    if (param_2 != param_1) {
      iVar1 = param_1[3];
      iVar2 = param_1[4];
      iVar3 = param_1[5];
      uVar4 = *(undefined8 *)(param_2 + 2);
      uVar5 = *(undefined8 *)(param_2 + 4);
      uVar6 = *(undefined8 *)(param_2 + 6);
      uVar7 = *(undefined8 *)(param_2 + 8);
      param_2[2] = param_1[2];
      param_2[3] = iVar1;
      param_2[4] = iVar2;
      param_2[5] = iVar3;
      uVar8 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_2 + 8) = uVar8;
      *(undefined8 *)(param_1 + 2) = uVar4;
      *(undefined8 *)(param_1 + 4) = uVar5;
      *(undefined8 *)(param_1 + 6) = uVar6;
      *(undefined8 *)(param_1 + 8) = uVar7;
    }
  }
  iVar1 = *param_2;
  iVar2 = *param_3;
  if (iVar2 == iVar1) {
    cVar9 = FUN_180023470(param_3 + 2,param_2 + 2);
  }
  else {
    cVar9 = -1;
    if (iVar1 <= iVar2) {
      cVar9 = '\x01';
    }
  }
  if (cVar9 < '\0') {
    *param_3 = iVar1;
    *param_2 = iVar2;
    if (param_3 != param_2) {
      iVar1 = param_2[3];
      iVar2 = param_2[4];
      iVar3 = param_2[5];
      uVar4 = *(undefined8 *)(param_3 + 2);
      uVar5 = *(undefined8 *)(param_3 + 4);
      uVar6 = *(undefined8 *)(param_3 + 6);
      uVar7 = *(undefined8 *)(param_3 + 8);
      param_3[2] = param_2[2];
      param_3[3] = iVar1;
      param_3[4] = iVar2;
      param_3[5] = iVar3;
      uVar8 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_3 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_3 + 8) = uVar8;
      *(undefined8 *)(param_2 + 2) = uVar4;
      *(undefined8 *)(param_2 + 4) = uVar5;
      *(undefined8 *)(param_2 + 6) = uVar6;
      *(undefined8 *)(param_2 + 8) = uVar7;
    }
    iVar1 = *param_1;
    iVar2 = *param_2;
    if (iVar2 == iVar1) {
      cVar9 = FUN_180023470(param_2 + 2,param_1 + 2);
    }
    else {
      cVar9 = -1;
      if (iVar1 <= iVar2) {
        cVar9 = '\x01';
      }
    }
    if (cVar9 < '\0') {
      *param_2 = iVar1;
      *param_1 = iVar2;
      if (param_2 != param_1) {
        uVar4 = *(undefined8 *)(param_1 + 4);
        uVar5 = *(undefined8 *)(param_2 + 2);
        uVar6 = *(undefined8 *)(param_2 + 4);
        uVar7 = *(undefined8 *)(param_2 + 6);
        uVar8 = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(param_2 + 4) = uVar4;
        uVar4 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(param_2 + 8) = uVar4;
        *(undefined8 *)(param_1 + 2) = uVar5;
        *(undefined8 *)(param_1 + 4) = uVar6;
        *(undefined8 *)(param_1 + 6) = uVar7;
        *(undefined8 *)(param_1 + 8) = uVar8;
      }
    }
  }
  return;
}



/* ===== 1800eb230 FUN_1800eb230 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800eb230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  ULONGLONG UVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  undefined8 *local_340;
  undefined *local_338;
  undefined1 local_328 [768];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_368;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180540170(local_328,0,0x300);
  puVar2 = (ulonglong *)FUN_180013640();
  local_348 = 0;
  local_340 = &local_res10;
  FUN_180501904(*puVar2 | 2,local_328,0x300,param_1);
  local_338 = &DAT_1809ebfc0;
  iVar1 = FUN_1804e4d70(&DAT_1809ebfc0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ec00c == 0x7fffffff) {
    DAT_1809ec00c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180cd1258 < 800) {
    UVar3 = GetTickCount64();
    FUN_1802b2870("wl_inventory.log","[%llu] icon gen | %s\n",UVar3,local_328);
    DAT_180cd1258 = DAT_180cd1258 + 1;
  }
  FUN_1804e4e90(&DAT_1809ebfc0);
  return;
}



/* ===== 1800eb350 FUN_1800eb350 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800eb350(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  uint local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  puVar8 = auStack_98;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar11 = 1;
  local_78 = 1;
  uVar7 = 0;
  local_70 = param_1;
  do {
    puVar6 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar6 = (undefined8 *)*param_2;
    }
    lVar9 = -1;
    if (uVar7 < (ulonglong)param_2[2]) {
      lVar1 = param_2[2] + (longlong)puVar6;
      lVar4 = thunk_FUN_1804e6c50((longlong)puVar6 + uVar7,lVar1,param_3);
      if (lVar4 != lVar1) {
        lVar9 = lVar4 - (longlong)puVar6;
      }
    }
    uVar10 = lVar9 - uVar7;
    if (lVar9 == -1) {
      uVar10 = 0xffffffffffffffff;
    }
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    if ((ulonglong)param_2[2] < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18002a1a0();
    }
    uVar5 = param_2[2] - uVar7;
    if (uVar5 < uVar10) {
      uVar10 = uVar5;
    }
    puVar6 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar6 = (undefined8 *)*param_2;
    }
    FUN_1800133a0(&local_68,(longlong)puVar6 + uVar7,uVar10);
    uVar11 = uVar11 | 2;
    puVar2 = (undefined4 *)param_1[1];
    local_78 = uVar11;
    if (puVar2 == (undefined4 *)param_1[2]) {
      FUN_18009bb20(param_1,puVar2,&local_68);
      uVar7 = uStack_50;
    }
    else {
      *puVar2 = (undefined4)local_68;
      puVar2[1] = local_68._4_4_;
      puVar2[2] = (undefined4)uStack_60;
      puVar2[3] = uStack_60._4_4_;
      *(undefined8 *)(puVar2 + 4) = local_58;
      *(ulonglong *)(puVar2 + 6) = uStack_50;
      local_68 = local_68 & 0xffffffffffffff00;
      param_1[1] = param_1[1] + 0x20;
      uVar7 = 0xf;
    }
    if (0xf < uVar7) {
      uVar5 = uVar7 + 1;
      uVar10 = local_68;
      if (0xfff < uVar5) {
        uVar10 = *(ulonglong *)(local_68 - 8);
        if (0x1f < (local_68 - uVar10) - 8) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar8 = auStack_90;
LAB_1800eb4cc:
          *(undefined8 *)(puVar8 + -8) = 0x1800eb4dc;
          return param_1;
        }
        uVar5 = uVar7 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar10,uVar5);
    }
    if (lVar9 == -1) goto LAB_1800eb4cc;
    uVar7 = lVar9 + 1;
  } while( true );
}



/* ===== 1800eb500 FUN_1800eb500 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800eb500(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined8 *local_98;
  longlong local_90;
  undefined8 *local_80;
  longlong local_78;
  longlong local_68;
  longlong local_60;
  ulonglong local_48 [6];
  
  local_48[4] = DAT_180919500 ^ (ulonglong)auStack_b8;
  uVar5 = FUN_1800e5db0();
  puVar10 = auStack_b8;
  if ((char)uVar5 == '\0') goto LAB_1800eb992;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  if ((ulonglong)param_1[2] < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_18002a1a0();
  }
  lVar6 = param_1[2] - 4;
  lVar11 = -1;
  if (lVar6 != -1) {
    lVar11 = lVar6;
  }
  puVar12 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar12 = (undefined8 *)*param_1;
  }
  FUN_1800133a0(local_48,(longlong)puVar12 + 4,lVar11);
  FUN_1800eb350(&local_80,local_48,0x7c);
  if (local_48[3] < 0x10) {
LAB_1800eb5d0:
    puVar10 = auStack_b8;
    puVar9 = auStack_b8;
    local_48[2] = 0;
    local_48[3] = 0xf;
    local_48[0] = local_48[0] & 0xffffffffffffff00;
    if (0xdf < (ulonglong)(local_78 - (longlong)local_80)) {
      puVar10 = auStack_b8;
      if (param_2 != param_1) {
        if ((ulonglong)param_1[3] < 0x10) goto LAB_1800eb60f;
        puVar12 = (undefined8 *)*param_1;
        puVar10 = auStack_b8;
        goto LAB_1800eb612;
      }
      goto LAB_1800eb622;
    }
LAB_1800eb9c9:
    bVar13 = false;
  }
  else {
    uVar8 = local_48[3] + 1;
    uVar5 = local_48[0];
    if (uVar8 < 0x1000) {
LAB_1800eb5cb:
      thunk_FUN_1803d64e0(uVar5,uVar8);
      goto LAB_1800eb5d0;
    }
    uVar5 = *(ulonglong *)(local_48[0] - 8);
    if ((local_48[0] - uVar5) - 8 < 0x20) {
      uVar8 = local_48[3] + 0x28;
      goto LAB_1800eb5cb;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar9 = auStack_b0;
LAB_1800eb60f:
    puVar12 = param_1;
    puVar10 = puVar9;
LAB_1800eb612:
    uVar1 = param_1[2];
    *(undefined8 *)(puVar10 + -8) = 0x1800eb61e;
    FUN_180029840(param_2,puVar12,uVar1);
LAB_1800eb622:
    puVar12 = local_80;
    if (0xf < (ulonglong)local_80[3]) {
      puVar12 = (undefined8 *)*local_80;
    }
    *(undefined8 *)(puVar10 + -8) = 0x1800eb631;
    uVar3 = FUN_1805145e4(puVar12);
    *(undefined4 *)(param_2 + 8) = uVar3;
    puVar12 = local_80 + 4;
    if (0xf < (ulonglong)local_80[7]) {
      puVar12 = (undefined8 *)*puVar12;
    }
    *(undefined8 *)(puVar10 + -8) = 0x1800eb64b;
    uVar3 = FUN_1805145e4(puVar12);
    *(undefined4 *)((longlong)param_2 + 0x44) = uVar3;
    puVar12 = local_80 + 8;
    if (0xf < (ulonglong)local_80[0xb]) {
      puVar12 = (undefined8 *)*puVar12;
    }
    *(undefined8 *)(puVar10 + -8) = 0x1800eb66d;
    uVar3 = FUN_18051566c(puVar12,0,0x10);
    *(undefined4 *)(param_2 + 9) = uVar3;
    puVar12 = local_80 + 0xc;
    if (0xf < (ulonglong)local_80[0xf]) {
      puVar12 = (undefined8 *)*puVar12;
    }
    *(undefined8 *)(puVar10 + -8) = 0x1800eb687;
    uVar3 = FUN_1805145e4(puVar12);
    *(undefined4 *)((longlong)param_2 + 0x4c) = uVar3;
    puVar12 = (undefined8 *)(local_78 + -0x20);
    if (param_2 + 4 != puVar12) {
      if (0xf < *(ulonglong *)(local_78 + -8)) {
        puVar12 = (undefined8 *)*puVar12;
      }
      uVar1 = *(undefined8 *)(local_78 + -0x10);
      *(undefined8 *)(puVar10 + -8) = 0x1800eb6b3;
      FUN_180029840(param_2 + 4,puVar12,uVar1);
    }
    puVar12 = local_80;
    if ((ulonglong)local_80[0x17] < 0x10) {
      puVar7 = local_80 + 0x14;
    }
    else {
      puVar7 = (undefined8 *)local_80[0x14];
    }
    if (local_80[0x16] == 1) {
      *(undefined8 *)(puVar10 + -8) = 0x1800eb6ee;
      iVar4 = memcmp(puVar7,&DAT_1806eb0d8,1);
      bVar13 = iVar4 == 0;
    }
    else {
      bVar13 = false;
    }
    *(byte *)(param_2 + 0x1c) = bVar13 ^ 1;
    if (bVar13 == false) {
      *(undefined8 *)(puVar10 + -8) = 0x1800eb719;
      FUN_1800eb350(&local_98,puVar12 + 0x14,0x3a);
      if (local_90 - (longlong)local_98 != 0x100) {
        *(undefined8 *)(puVar10 + -8) = 0x1800eb735;
        FUN_1800288b0(&local_98);
        bVar13 = false;
        goto LAB_1800eb986;
      }
      uVar5 = 0;
      do {
        puVar12 = local_98 + uVar5 * 4;
        if (0xf < (ulonglong)puVar12[3]) {
          puVar12 = (undefined8 *)*puVar12;
        }
        *(undefined8 *)(puVar10 + -8) = 0x1800eb771;
        uVar3 = FUN_18051566c(puVar12,0,0x10);
        *(undefined4 *)((longlong)param_2 + uVar5 * 4 + 0xe4) = uVar3;
        uVar5 = uVar5 + 1;
      } while (uVar5 < (ulonglong)(local_90 - (longlong)local_98 >> 5));
      *(undefined8 *)(puVar10 + -8) = 0x1800eb798;
      FUN_1800288b0(&local_98);
      puVar12 = local_80;
    }
    if ((ulonglong)puVar12[0x13] < 0x10) {
      puVar7 = puVar12 + 0x10;
    }
    else {
      puVar7 = (undefined8 *)puVar12[0x10];
    }
    if (puVar12[0x12] == 1) {
      *(undefined8 *)(puVar10 + -8) = 0x1800eb7d3;
      iVar4 = memcmp(puVar7,&DAT_1806eb0d8,1);
      bVar13 = iVar4 == 0;
    }
    else {
      bVar13 = false;
    }
    *(byte *)(param_2 + 10) = bVar13 ^ 1;
    if (bVar13 == false) {
      *(undefined8 *)(puVar10 + -8) = 0x1800eb7fb;
      FUN_1800eb350(&local_68,puVar12 + 0x10,0x3b);
      uVar5 = 0;
      if (local_60 - local_68 >> 5 != 0) {
        do {
          if (4 < uVar5) break;
          *(undefined8 *)(puVar10 + -8) = 0x1800eb840;
          FUN_1800eb350(&local_98,uVar5 * 0x20 + local_68,0x3a);
          if (((local_90 - (longlong)local_98) - 0xc0U & 0xffffffffffffffdf) != 0) {
            *(undefined8 *)(puVar10 + -8) = 0x1800eb9bf;
            FUN_1800288b0(&local_98);
            *(undefined8 *)(puVar10 + -8) = 0x1800eb9c9;
            FUN_1800288b0(&local_68);
            goto LAB_1800eb9c9;
          }
          lVar11 = uVar5 * 0x1c;
          if (local_90 - (longlong)local_98 == 0xe0) {
            puVar12 = local_98 + 0x18;
            if (0xf < (ulonglong)local_98[0x1b]) {
              puVar12 = (undefined8 *)*puVar12;
            }
            *(undefined8 *)(puVar10 + -8) = 0x1800eb881;
            uVar3 = FUN_1805145e4(puVar12);
          }
          else {
            uVar3 = (undefined4)uVar5;
          }
          *(undefined4 *)((longlong)param_2 + lVar11 + 0x6c) = uVar3;
          puVar12 = local_98;
          if (0xf < (ulonglong)local_98[3]) {
            puVar12 = (undefined8 *)*local_98;
          }
          *(undefined8 *)(puVar10 + -8) = 0x1800eb89c;
          uVar3 = FUN_1805145e4(puVar12);
          *(undefined4 *)((longlong)param_2 + lVar11 + 0x54) = uVar3;
          puVar12 = local_98 + 4;
          if (0xf < (ulonglong)local_98[7]) {
            puVar12 = (undefined8 *)*puVar12;
          }
          *(undefined8 *)(puVar10 + -8) = 0x1800eb8bf;
          uVar3 = FUN_18051566c(puVar12,0,0x10);
          *(undefined4 *)((longlong)param_2 + lVar11 + 0x58) = uVar3;
          puVar12 = local_98 + 8;
          if (0xf < (ulonglong)local_98[0xb]) {
            puVar12 = (undefined8 *)*puVar12;
          }
          *(undefined8 *)(puVar10 + -8) = 0x1800eb8e2;
          uVar3 = FUN_18051566c(puVar12,0,0x10);
          *(undefined4 *)((longlong)param_2 + lVar11 + 0x5c) = uVar3;
          puVar12 = local_98 + 0xc;
          if (0xf < (ulonglong)local_98[0xf]) {
            puVar12 = (undefined8 *)*puVar12;
          }
          *(undefined8 *)(puVar10 + -8) = 0x1800eb905;
          uVar3 = FUN_18051566c(puVar12,0,0x10);
          *(undefined4 *)((longlong)param_2 + lVar11 + 0x60) = uVar3;
          puVar12 = local_98 + 0x10;
          if (0xf < (ulonglong)local_98[0x13]) {
            puVar12 = (undefined8 *)*puVar12;
          }
          *(undefined8 *)(puVar10 + -8) = 0x1800eb928;
          uVar3 = FUN_18051566c(puVar12,0,0x10);
          *(undefined4 *)((longlong)param_2 + lVar11 + 100) = uVar3;
          puVar12 = local_98 + 0x14;
          if (0xf < (ulonglong)local_98[0x17]) {
            puVar12 = (undefined8 *)*puVar12;
          }
          *(undefined8 *)(puVar10 + -8) = 0x1800eb94e;
          uVar3 = FUN_18051566c(puVar12,0,0x10);
          *(undefined4 *)((longlong)param_2 + lVar11 + 0x68) = uVar3;
          *(undefined8 *)(puVar10 + -8) = 0x1800eb95b;
          FUN_1800288b0(&local_98);
          uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong)(local_60 - local_68 >> 5));
      }
      *(undefined8 *)(puVar10 + -8) = 0x1800eb97f;
      FUN_1800288b0(&local_68);
    }
    bVar13 = 0 < *(int *)(param_2 + 8);
  }
LAB_1800eb986:
  *(undefined8 *)(puVar10 + -8) = 0x1800eb98f;
  FUN_1800288b0(&local_80);
  uVar5 = (ulonglong)bVar13;
LAB_1800eb992:
  *(undefined8 *)(puVar10 + -8) = 0x1800eb99e;
  return uVar5;
}



/* ===== 1800eb9e0 FUN_1800eb9e0 ===== */

undefined1 FUN_1800eb9e0(undefined8 param_1,code *param_2)

{
  (*param_2)(DAT_180cd11d0);
  return 1;
}



/* ===== 1800eba00 FUN_1800eba00 ===== */

undefined1 FUN_1800eba00(undefined8 param_1)

{
  (*DAT_1809621c8)(param_1,3,1);
  return 1;
}



/* ===== 1800eba20 FUN_1800eba20 ===== */

void FUN_1800eba20(longlong param_1)

{
  longlong lVar1;
  
  if (DAT_180cd11d0 != 0) {
    lVar1 = FUN_18000f3a0(param_1 + 0xd0);
    if (lVar1 != 0) {
      lVar1 = FUN_18000f3a0(DAT_180cd11d0);
      if (lVar1 != 0) {
        lVar1 = FUN_18000f3a0(lVar1 + 0xd0);
        if (lVar1 != 0) {
          FUN_1800eb9e0();
        }
      }
    }
  }
  FUN_1800eba00(param_1);
  return;
}



/* ===== 1800eba80 FUN_1800eba80 ===== */

void FUN_1800eba80(void)

{
  (*DAT_180961b50)(DAT_180cd1248);
  return;
}



/* ===== 1800ebaa0 FUN_1800ebaa0 ===== */

undefined1 FUN_1800ebaa0(undefined8 param_1,undefined4 param_2)

{
  FUN_180540170(param_1,0,DAT_180cd1248);
  (*DAT_1809621e0)(param_1);
  (*DAT_1809621e8)(param_1,param_2,4,9999,1);
  return 1;
}



/* ===== 1800ebb00 FUN_1800ebb00 ===== */

undefined8 FUN_1800ebb00(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  pcVar1 = (char *)(*DAT_1809621f0)();
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    while (uVar3 + 1 < 0x80) {
      if (pcVar1[uVar3] == '\0') break;
      *(char *)(uVar3 + param_2) = pcVar1[uVar3];
      uVar3 = uVar3 + 1;
    }
    *(undefined1 *)(uVar3 + param_2) = 0;
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== 1800ebb70 FUN_1800ebb70 ===== */

undefined8 FUN_1800ebb70(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_180cd1250;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x98) = 4;
  *(undefined8 *)(param_1 + 0x9c) = 2;
  (*DAT_1809621d0)();
  return 1;
}



/* ===== 1800ebbd0 FUN_1800ebbd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1800ebbd0(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 local_60;
  int local_58;
  undefined8 local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  lVar1 = FUN_18000f3a0();
  if ((lVar1 == 0) || (pcVar2 = (code *)FUN_18000f3a0(lVar1 + 0x250), pcVar2 == (code *)0x0)) {
    return 0;
  }
  local_48 = 0;
  local_58 = param_3 * 4;
  local_60 = 0;
  local_68 = param_5;
  local_70 = &local_48;
  local_78 = 0;
  local_40 = param_3;
  local_3c = param_4;
  uVar3 = (*pcVar2)(param_1,param_2,&local_48,0);
  return uVar3;
}



/* ===== 1800ebc80 FUN_1800ebc80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800ebc80(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 local_res18 [2];
  undefined1 auStack_a8 [32];
  ulonglong local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  lVar1 = DAT_180cd1250;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_a8;
  lVar4 = (ulonglong)DAT_180cd11d8 + DAT_180cd1250;
  local_88[0] = local_88[0] & 0xffffffff00000000;
  local_res18[0] = param_3;
  FUN_180013280(lVar4,local_88);
  uVar2 = FUN_180011200(lVar4 + 0x14);
  if (uVar2 < 0x40000000) {
    lVar3 = FUN_18000f3a0(lVar4 + 8);
    if (lVar3 != 0) {
      if (DAT_180961b58 != 0) {
        FUN_18002d9f0(lVar3);
      }
      local_88[0] = 0;
      FUN_1800239d0(lVar4 + 8,local_88);
    }
    local_88[0] = local_88[0] & 0xffffffff00000000;
    FUN_180013280(lVar4 + 0x10,local_88);
  }
  local_88[0] = CONCAT62(local_88[0]._2_6_,*(undefined2 *)(param_2 + 0x40));
  FUN_180066890((ulonglong)DAT_180cd11dc + lVar1,local_88);
  FUN_180290880(lVar1,"set item texture prefab");
  FUN_180290880(lVar1,"set item texture wear");
  FUN_180290880(lVar1,"set item texture seed");
  FUN_1800239d0((ulonglong)DAT_180cd11e0 + lVar1,local_res18);
  local_88[0]._0_4_ = (int)((ulonglong)param_3 >> 0x20);
  FUN_180013280((ulonglong)DAT_180cd11e4 + lVar1,local_88);
  local_88[0] = CONCAT44(local_88[0]._4_4_,(int)param_3);
  FUN_180013280((ulonglong)DAT_180cd11e8 + lVar1,local_88);
  if (*(char *)(param_2 + 0x50) != '\0') {
    uVar5 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    do {
      lVar4 = uVar5 * 0x1c;
      if (0 < *(int *)(param_2 + 0x54 + lVar4)) {
        snprintf(&local_78,0x40,"sticker slot %d id",uVar5);
        FUN_180290960(lVar1,&local_78,*(undefined4 *)(param_2 + 0x54 + lVar4));
        snprintf(&local_78,0x40,"sticker slot %d schema",uVar5);
        FUN_180290960(lVar1,&local_78,*(undefined4 *)(param_2 + 0x6c + lVar4));
        snprintf(&local_78,0x40,"sticker slot %d wear",uVar5);
        FUN_180290880(lVar1,&local_78);
        snprintf(&local_78,0x40,"sticker slot %d scale",uVar5);
        FUN_180290880(lVar1,&local_78);
        snprintf(&local_78,0x40,"sticker slot %d rotation",uVar5);
        FUN_180290880(lVar1,&local_78);
        snprintf(&local_78,0x40,"sticker slot %d offset x",uVar5);
        FUN_180290880(lVar1,&local_78);
        snprintf(&local_78,0x40,"sticker slot %d offset y",uVar5);
        FUN_180290880(lVar1,&local_78);
      }
      uVar2 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar2;
    } while ((int)uVar2 < 5);
  }
  return;
}



/* ===== 1800ebf50 FUN_1800ebf50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800ebf50(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_var;
  ulonglong uVar9;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_40;
  undefined1 local_38;
  
  iVar7 = FUN_1804e4d70(&DAT_1809f3770);
  iVar8 = DAT_180cfca18;
  uVar6 = DAT_180cfca10;
  uVar5 = uRam0000000180cfca08;
  uVar4 = _DAT_180cfca00;
  uVar3 = _DAT_180cfc9f8;
  uVar2 = _DAT_180cfc9f0;
  uVar1 = DAT_180ccfedc;
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f37bc == 0x7fffffff) {
    DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  FUN_1804e4e90(&DAT_1809f3770);
  local_40 = uVar6;
  uVar9 = 0;
  local_38 = uVar1;
  local_64 = uVar2;
  uStack_5c = uVar3;
  local_54 = uVar4;
  uStack_4c = uVar5;
  if (iVar8 == (DAT_1809ebf70 != '\0') + 1) {
    iVar8 = memcmp(&local_64,&DAT_1809ebf44,0x20);
    uVar9 = CONCAT44(extraout_var,iVar8);
    if (iVar8 == 0) {
      return CONCAT71((int7)(uVar9 >> 8),1);
    }
  }
  return uVar9 & 0xffffffffffffff00;
}



/* ===== 1800ec090 FUN_1800ec090 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ec090(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  ULONGLONG UVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (DAT_1809ebf71 != '\0') {
    cVar1 = FUN_1800ebf50();
    if (cVar1 != '\0') {
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
      DAT_180cfca18 = DAT_1809ebf80;
      DAT_180cfca10 = DAT_1809ebfa8;
      DAT_180ccfedc = DAT_1809ebfb0;
      DAT_180cfc9f0 = _DAT_1809ebf84;
      DAT_180cfc9f4 = uRam00000001809ebf88;
      DAT_180cfc9f8 = uRam00000001809ebf8c;
      DAT_180cfc9fc = uRam00000001809ebf90;
      _DAT_180cfca00 = _DAT_1809ebf94;
      uRam0000000180cfca04 = uRam00000001809ebf98;
      uRam0000000180cfca08 = uRam00000001809ebf9c;
      uRam0000000180cfca0c = uRam00000001809ebfa0;
      FUN_1804e4e90(&DAT_1809f3770);
    }
    cVar1 = DAT_1809ebf73;
    DAT_1809ebf71 = '\0';
    UVar3 = GetTickCount64();
    pcVar4 = "not seen";
    if (cVar1 != '\0') {
      pcVar4 = "seen";
    }
    pcVar5 = "not consumed";
    if (DAT_1809ebf72 != '\0') {
      pcVar5 = "consumed";
    }
    FUN_1800eb230("colors | %s | def %d | kit %d | %s after %llu ms | preview regenerate %s",pcVar5,
                  DAT_1809ebea0,DAT_1809ebea4,param_1,UVar3 - _DAT_1809ebf78,pcVar4);
  }
  return;
}



/* ===== 1800ec1d0 FUN_1800ec1d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ec1d0(longlong param_1,byte param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ULONGLONG UVar6;
  char *pcVar7;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 *local_1d0;
  undefined *local_1c8;
  undefined1 local_1c0 [24];
  undefined2 local_1a8;
  undefined1 local_1a6;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  FUN_1800ec090(param_3);
  lVar1 = DAT_180cd1250;
  if ((DAT_1809ebe51 != '\0') && (DAT_180cd1250 != 0)) {
    lVar4 = FUN_18000f3a0(param_1 + 0x30);
    if (lVar4 == lVar1) {
      cVar2 = FUN_1800eba20(param_1);
      if (cVar2 == '\0') {
        FUN_1800eb230("[error] finish | faulted after %s",param_3);
      }
    }
  }
  local_1c8 = &DAT_1809ebe00;
  iVar3 = FUN_1804e4d70(&DAT_1809ebe00);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebe4c == 0x7fffffff) {
    DAT_1809ebe4c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  plVar5 = (longlong *)FUN_1800ee500(extraout_XMM0_Qa,local_1c0,&DAT_1809ebe60);
  lVar1 = *plVar5;
  *(uint *)(lVar1 + 0x40) = param_2 ^ 1 | 2;
  UVar6 = GetTickCount64();
  *(ULONGLONG *)(lVar1 + 0x48) = UVar6;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  FUN_1804e4e90(&DAT_1809ebe00);
  local_1d0 = &DAT_1809ebe80;
  if (0xf < DAT_1809ebe98) {
    local_1d0 = DAT_1809ebe80;
  }
  pcVar7 = "failed";
  if (param_2 != 0) {
    pcVar7 = "done";
  }
  local_1d8 = param_3;
  FUN_1800eb230("%s | def %d | kit %d | %s | %s",pcVar7,DAT_1809ebea0,DAT_1809ebea4);
  local_1a8 = 0;
  local_1a6 = 0;
  local_1a4 = 0;
  local_1a0 = 0;
  uStack_190 = 0;
  local_188 = _DAT_1808ad410;
  uStack_180 = _UNK_1808ad418;
  local_198 = 0;
  uStack_170 = 0;
  local_168 = _DAT_1808ad410;
  uStack_160 = _UNK_1808ad418;
  local_178 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_144 = 0;
  uStack_13c = 0x3f800000;
  local_134 = 0;
  uStack_12c = 0;
  local_124 = 0;
  uStack_120 = 0x3f800000;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_108 = (undefined4)_DAT_1808ad310;
  local_104 = (undefined4)((ulonglong)_DAT_1808ad310 >> 0x20);
  uStack_100 = (undefined4)_UNK_1808ad318;
  uStack_fc = (undefined4)((ulonglong)_UNK_1808ad318 >> 0x20);
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = (undefined4)_DAT_1808ad2c0;
  local_e4 = (undefined4)((ulonglong)_DAT_1808ad2c0 >> 0x20);
  uStack_e0 = (undefined4)_UNK_1808ad2c8;
  uStack_dc = (undefined4)((ulonglong)_UNK_1808ad2c8 >> 0x20);
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0x3f800000;
  uStack_c8 = 0;
  local_c4 = 0;
  uStack_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  uStack_ac = 0;
  local_a4 = 0;
  uStack_9c = 0;
  local_94 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  _DAT_1809ebe50 = 0;
  DAT_1809ebe52 = 0;
  DAT_1809ebe54 = 0;
  _DAT_1809ebe58 = 0;
  FUN_1800ec550(&DAT_1809ebe60,&local_198);
  DAT_1809ebf68 = local_90;
  DAT_1809ebf70 = (undefined1)local_88;
  DAT_1809ebf71 = local_88._1_1_;
  DAT_1809ebf72 = local_88._2_1_;
  DAT_1809ebf73 = local_88._3_1_;
  _DAT_1809ebf78 = local_80;
  DAT_1809ebf80 = local_78;
  _DAT_1809ebf84 = local_74;
  uRam00000001809ebf8c = uStack_6c;
  _DAT_1809ebf94 = local_64;
  uRam00000001809ebf9c = uStack_5c;
  _DAT_1809ebfa4 = local_54;
  DAT_1809ebfa8 = local_50;
  DAT_1809ebfb0 = local_48;
  _DAT_1809ebfb1 = local_47;
  _DAT_1809ebfb5 = local_43;
  DAT_1809ebfb7 = local_41;
  FUN_18000f890(&local_178);
  FUN_18000f890(&local_198);
  return;
}



