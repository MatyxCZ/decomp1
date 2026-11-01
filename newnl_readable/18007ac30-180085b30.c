/* ===== 18007ac30 FUN_18007ac30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18007ac30(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  char **ppcVar10;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  undefined4 local_f8;
  undefined4 local_f0 [2];
  undefined **local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  ulonglong local_88;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  if ((ulonglong)param_2[3] < 0x10) {
    puVar6 = param_2;
  }
  else {
    puVar6 = (undefined8 *)*param_2;
  }
  local_b8 = param_1;
  if (((param_2[2] == 0) ||
      (lVar7 = param_2[2] + (longlong)puVar6, lVar3 = thunk_FUN_1804e6c50(puVar6,lVar7,0x3a),
      lVar3 == lVar7)) || (lVar3 - (longlong)puVar6 == -1)) {
    puVar9 = auStack_118;
    local_e0 = "C:\\neverlose\\scripts\\fonts\\";
    local_d8 = "C:\\Windows\\Fonts\\";
    ppcVar10 = &local_e0;
    do {
      uVar4 = FUN_180013350(local_60,*ppcVar10);
      FUN_1800667a0(&local_a0,uVar4,param_2);
      FUN_18000f890(local_60);
      local_f0[0] = 0;
      local_e8 = &PTR_vftable_18091a158;
      local_b0 = local_80;
      local_c8 = &local_a0;
      if (0xf < local_88) {
        local_c8 = (undefined1 *)CONCAT71(uStack_9f,local_a0);
      }
      local_c0 = local_90;
      FUN_180028c20(local_80,&local_c8);
      local_f8 = 0;
      puVar5 = (uint *)FUN_180016ab0(local_a8,local_80,local_f0);
      uVar1 = *puVar5;
      if (uVar1 != 0) {
        local_f0[0] = 0;
        local_e8 = &PTR_vftable_18091a158;
      }
      FUN_1800289e0(local_80);
      if (1 < uVar1) {
LAB_18007ae1a:
        *(undefined8 *)(puVar9 + -8) = 0x18007ae26;
        FUN_180024b50(param_1,&local_a0);
        *(undefined4 *)(puVar9 + 0x20) = 1;
        if (0xf < local_88) {
          uVar8 = local_88 + 1;
          lVar3 = CONCAT71(uStack_9f,local_a0);
          lVar7 = lVar3;
          if (0xfff < uVar8) {
            lVar7 = *(longlong *)(lVar3 + -8);
            if (0x1f < (lVar3 - lVar7) - 8U) {
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              pcVar2 = (code *)swi(3);
              puVar6 = (undefined8 *)(*pcVar2)();
              return puVar6;
            }
            uVar8 = local_88 + 0x28;
          }
          *(undefined8 *)(puVar9 + -8) = 0x18007ae66;
          thunk_FUN_1803d64e0(lVar7,uVar8);
        }
        goto LAB_18007ae76;
      }
      if (0xf < local_88) {
        uVar8 = local_88 + 1;
        lVar3 = CONCAT71(uStack_9f,local_a0);
        lVar7 = lVar3;
        if (0xfff < uVar8) {
          lVar7 = *(longlong *)(lVar3 + -8);
          if (0x1f < (lVar3 - lVar7) - 8U) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar9 = auStack_110;
            goto LAB_18007ae1a;
          }
          uVar8 = local_88 + 0x28;
        }
        thunk_FUN_1803d64e0(lVar7,uVar8);
      }
      local_90 = 0;
      local_88 = 0xf;
      local_a0 = 0;
      ppcVar10 = ppcVar10 + 1;
    } while (ppcVar10 != &local_d0);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    puVar9 = auStack_118;
  }
  else {
    FUN_180024b50(param_1,param_2);
    puVar9 = auStack_118;
  }
LAB_18007ae76:
  *(undefined8 *)(puVar9 + -8) = 0x18007ae85;
  return param_1;
}



/* ===== 18007aeb0 FUN_18007aeb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_18007aeb0(undefined8 *param_1)

{
  ulonglong uVar1;
  float fVar2;
  size_t _Size;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  float *pfVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *_Buf1;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_118 [32];
  float local_f8 [4];
  undefined8 *local_e8;
  undefined *local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 ****local_a0 [2];
  ulonglong local_90;
  ulonglong local_88;
  undefined8 ****local_80 [2];
  size_t local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_118;
  local_e8 = param_1;
  uVar6 = FUN_18047e090(param_1,1,0);
  FUN_180013350(local_a0,uVar6);
  fVar2 = DAT_1808ac710;
  local_f8[2] = 128.0;
  local_f8[0] = 4.0;
  dVar3 = (double)FUN_18047e5f0(param_1,2,DAT_1808ac610);
  local_f8[1] = (float)dVar3;
  pfVar7 = local_f8;
  if (fVar2 <= local_f8[1]) {
    pfVar7 = local_f8 + 1;
  }
  pfVar12 = local_f8 + 2;
  if (local_f8[1] <= DAT_1808acb28) {
    pfVar12 = pfVar7;
  }
  ppppuVar10 = local_a0;
  if (0xf < local_88) {
    ppppuVar10 = local_a0[0];
  }
  if (((1 < local_90) &&
      (lVar8 = thunk_FUN_1804e92d0(ppppuVar10,local_90 + (longlong)ppppuVar10,&DAT_1806e0660,2),
      lVar8 != local_90 + (longlong)ppppuVar10)) && (lVar8 - (longlong)ppppuVar10 != -1)) {
    uVar4 = FUN_180484c10(param_1,"bad font name");
    goto LAB_18007b22c;
  }
  FUN_18007ac30(local_80,local_a0);
  if (local_70 == 0) {
    ppppuVar10 = local_a0;
    if (0xf < local_88) {
      ppppuVar10 = local_a0[0];
    }
    uVar4 = FUN_180484c10(param_1,"font \'%s\' not found in scripts\\fonts or Windows\\Fonts",
                          ppppuVar10);
  }
  else {
    local_e0 = &DAT_180963420;
    iVar5 = FUN_1804e4d70(&DAT_180963420);
    uVar1 = DAT_180ca0cc0;
    lVar8 = DAT_180ca0cb8;
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_18096346c == 0x7fffffff) {
      DAT_18096346c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    fVar2 = *pfVar12;
    puVar13 = (undefined8 *)0x0;
    if (DAT_180ca0cd0 == 0) {
LAB_18007b0b7:
      FUN_180024b50(&local_d8,local_80);
      local_b0 = 0;
      local_a8 = 0;
      local_b8 = fVar2;
      if (DAT_180ca0cc0 <= DAT_180ca0cd0 + 1U) {
        FUN_18007e580();
      }
      DAT_180ca0cc8 = DAT_180ca0cc8 & DAT_180ca0cc0 - 1;
      uVar1 = DAT_180ca0cc8 + DAT_180ca0cd0;
      uVar11 = DAT_180ca0cc0 - 1 & uVar1;
      if (*(longlong *)(DAT_180ca0cb8 + uVar11 * 8) == 0) {
        uVar6 = FUN_1804ecaa0(0x38);
        *(undefined8 *)(DAT_180ca0cb8 + uVar11 * 8) = uVar6;
      }
      local_e8 = *(undefined8 **)(DAT_180ca0cb8 + (DAT_180ca0cc0 - 1 & uVar1) * 8);
      *local_e8 = 0;
      local_e8[1] = 0;
      local_e8[2] = 0;
      local_e8[3] = 0;
      *local_e8 = CONCAT71(uStack_d7,local_d8);
      local_e8[1] = local_d0;
      local_e8[2] = local_c8;
      local_e8[3] = local_c0;
      local_c8 = 0;
      local_c0 = 0xf;
      local_d8 = 0;
      *(float *)(local_e8 + 4) = fVar2;
      local_e8[5] = 0;
      *(undefined1 *)(local_e8 + 6) = 0;
      DAT_180ca0cd0 = DAT_180ca0cd0 + 1;
      FUN_18000f890(&local_d8);
      puVar13 = *(undefined8 **)
                 (DAT_180ca0cb8 + (DAT_180ca0cc0 - 1 & DAT_180ca0cd0 + (DAT_180ca0cc8 - 1)) * 8);
    }
    else {
      uVar11 = DAT_180ca0cd0 + DAT_180ca0cc8;
      uVar14 = DAT_180ca0cc8;
      do {
        puVar9 = *(undefined8 **)(lVar8 + (uVar1 - 1 & uVar14) * 8);
        ppppuVar10 = local_80;
        if (0xf < local_68) {
          ppppuVar10 = local_80[0];
        }
        _Size = puVar9[2];
        if ((ulonglong)puVar9[3] < 0x10) {
          _Buf1 = puVar9;
        }
        else {
          _Buf1 = (undefined8 *)*puVar9;
        }
        if (((_Size == local_70) &&
            ((_Size == 0 || (iVar5 = memcmp(_Buf1,ppppuVar10,_Size), iVar5 == 0)))) &&
           (*(float *)(puVar9 + 4) == fVar2)) {
          puVar13 = puVar9;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar11);
      param_1 = local_e8;
      if (puVar13 == (undefined8 *)0x0) goto LAB_18007b0b7;
    }
    FUN_1804e4e90(&DAT_180963420);
    puVar9 = (undefined8 *)FUN_18047efb0(param_1,8);
    *puVar9 = puVar13;
    FUN_18047eb70(param_1,0xffffd8f0,"wl.font");
    FUN_18047f990(param_1,0xfffffffe);
    uVar4 = 1;
  }
  FUN_18000f890(local_80);
LAB_18007b22c:
  FUN_18000f890(local_a0);
  return uVar4;
}



/* ===== 18007b280 FUN_18007b280 ===== */

undefined8 FUN_18007b280(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_18047e2c0(param_1,1,"wl.font");
  if ((*plVar1 == 0) || (*(longlong *)(*plVar1 + 0x28) == 0)) {
    FUN_18047f270(param_1,0);
    return 1;
  }
  FUN_18047f270(param_1,1);
  return 1;
}



/* ===== 18007b2e0 FUN_18007b2e0 ===== */

undefined8 FUN_18007b2e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1801c8250();
  FUN_18047f530(param_1,uVar1);
  return 1;
}



/* ===== 18007b310 FUN_18007b310 ===== */

undefined8 FUN_18007b310(undefined8 param_1)

{
  FUN_18047f3d0(param_1,1);
  return 1;
}



/* ===== 18007b330 FUN_18007b330 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18007b330(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined4 uStack_97;
  undefined2 uStack_93;
  undefined1 uStack_91;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_c8;
  iVar6 = FUN_18047e470(param_1,1,0x60);
  if (iVar6 - 1U < 0x200) {
    FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
    lVar7 = FUN_18047fd90(param_1,0xffffffff);
    FUN_18047fb50(param_1,0xfffffffe);
    uVar3 = _UNK_1808ad418;
    uVar9 = _DAT_1808ad410;
    uVar12 = 0;
    lVar1 = *(longlong *)(lVar7 + 0x150);
    uVar10 = (*(longlong *)(lVar7 + 0x158) - lVar1 >> 3) * 0x6db6db6db6db6db7;
    if (uVar10 != 0) {
      do {
        if ((*(char *)(lVar1 + 0x21 + uVar12 * 0x38) != '\0') &&
           (*(int *)(lVar1 + 0x30 + uVar12 * 0x38) == iVar6)) {
          if (-1 < (int)uVar12) goto LAB_18007b531;
          break;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar10);
    }
    if (uVar10 < 0x100) {
      uStack_9f = 0;
      uStack_98 = 0;
      uStack_97 = 0;
      uStack_93 = 0;
      uStack_91 = 0;
      local_90 = _DAT_1808ad410;
      uStack_88 = _UNK_1808ad418;
      local_a0 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      FUN_180029840(&local_a0,&PNG_1806f8fa0,0x475b);
      uVar4 = local_80;
      local_80._0_2_ = CONCAT11(1,(undefined1)local_80);
      uVar5 = local_80;
      local_70 = CONCAT44(iVar6,iVar6);
      puVar2 = *(undefined8 **)(lVar7 + 0x158);
      if (puVar2 == *(undefined8 **)(lVar7 + 0x160)) {
        FUN_18006a9e0(lVar7 + 0x150,puVar2,&local_a0);
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(undefined1 *)puVar2 = local_a0;
        *(ulonglong *)((longlong)puVar2 + 1) = CONCAT17(uStack_98,uStack_9f);
        *(undefined4 *)((longlong)puVar2 + 9) = uStack_97;
        *(undefined2 *)((longlong)puVar2 + 0xd) = uStack_93;
        *(undefined1 *)((longlong)puVar2 + 0xf) = uStack_91;
        puVar2[2] = local_90;
        puVar2[3] = uStack_88;
        local_90 = uVar9;
        uStack_88 = uVar3;
        local_a0 = 0;
        *(undefined1 *)(puVar2 + 4) = (undefined1)local_80;
        *(undefined1 *)((longlong)puVar2 + 0x21) = 1;
        local_80._2_1_ = SUB41(uVar4,2);
        *(undefined1 *)((longlong)puVar2 + 0x22) = local_80._2_1_;
        local_80._3_1_ = SUB41(uVar4,3);
        *(undefined1 *)((longlong)puVar2 + 0x23) = local_80._3_1_;
        puVar2[5] = local_78;
        *(int *)(puVar2 + 6) = iVar6;
        *(int *)((longlong)puVar2 + 0x34) = iVar6;
        *(longlong *)(lVar7 + 0x158) = *(longlong *)(lVar7 + 0x158) + 0x38;
        local_a8 = puVar2;
        local_80 = uVar5;
      }
      uVar12 = (ulonglong)
               ((int)(*(longlong *)(lVar7 + 0x158) - *(longlong *)(lVar7 + 0x150) >> 3) *
                -0x49249249 - 1);
      FUN_18000f890(&local_a0);
LAB_18007b531:
      puVar8 = (undefined4 *)FUN_18047efb0(param_1,4);
      *puVar8 = (int)uVar12;
      FUN_18047eb70(param_1,0xffffd8f0,"wl.texture");
      FUN_18047f990(param_1,0xfffffffe);
      return 1;
    }
    pcVar11 = "user.avatar: 256 textures per script at most";
  }
  else {
    pcVar11 = "user.avatar: size out of 1..512";
  }
  uVar9 = FUN_180484c10(param_1,pcVar11);
  return uVar9;
}



/* ===== 18007b5a0 FUN_18007b5a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18007b5a0(undefined8 param_1,int param_2)

{
  size_t _Size;
  code *pcVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  char *_Str1;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 ***pppuVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  size_t sVar23;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [32];
  undefined4 local_200;
  longlong local_1e8;
  undefined8 *local_1e0;
  ulonglong local_1c8;
  ulonglong uStack_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  undefined8 ***local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  int local_168;
  undefined8 local_160;
  undefined4 local_158;
  float local_154;
  float local_150;
  float local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  undefined4 local_134;
  undefined2 local_130;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined8 ***local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_228;
  local_200 = 0;
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  puVar8 = (undefined8 *)FUN_18047fd90(param_1,0xffffffff);
  local_1e0 = puVar8;
  FUN_18047fb50(param_1,0xfffffffe);
  local_1e8 = 0;
  uVar9 = FUN_18047e090(param_1,1,&local_1e8);
  if (0x27 < local_1e8 - 1U) {
    uVar19 = FUN_180484c10(param_1,"esp: the name must be 1..%d characters",0x28);
    puVar21 = auStack_228;
    goto LAB_18007bee1;
  }
  FUN_18047e240(param_1,2,6);
  uStack_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0xf;
  local_1c8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_190 = 0xf;
  local_1a8 = (undefined8 ***)0x0;
  uStack_180 = 0;
  local_178 = 0;
  local_170 = 0xf;
  local_188 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 3;
  local_154 = 1.0;
  local_150 = 1.0;
  local_14c = 1.0;
  local_148 = _DAT_1808ad930;
  uStack_140 = _UNK_1808ad938;
  local_138 = 1.0;
  local_134 = 0xc;
  local_130 = 0x100;
  FUN_180029840(&local_1a8,uVar9,local_1e8);
  uVar9 = local_198;
  uVar10 = FUN_180024a60(puVar8,local_78,0);
  uVar10 = FUN_180042850(local_98,uVar10,&DAT_1806e08bc);
  pppuVar15 = &local_1a8;
  if (0xf < local_190) {
    pppuVar15 = local_1a8;
  }
  puVar11 = (ulonglong *)FUN_1800134a0(uVar10,pppuVar15,uVar9);
  local_128 = *puVar11;
  uStack_120 = puVar11[1];
  local_118 = puVar11[2];
  uStack_110 = puVar11[3];
  puVar11[2] = 0;
  puVar11[3] = 0xf;
  *(undefined1 *)puVar11 = 0;
  local_200 = 1;
  if (local_1b0 < 0x10) {
LAB_18007b7c8:
    local_1c8 = local_128;
    uStack_1c0 = uStack_120;
    local_1b8 = local_118;
    local_1b0 = uStack_110;
    local_200 = 0;
    local_118 = 0;
    uStack_110 = 0xf;
    local_128 = local_128 & 0xffffffffffffff00;
    FUN_18000f890(local_98);
    FUN_18000f890(local_78);
    puVar20 = auStack_228;
    puVar21 = auStack_228;
    if (&local_188 != puVar8) {
      if ((ulonglong)puVar8[3] < 0x10) goto LAB_18007b85f;
      puVar17 = (undefined8 *)*puVar8;
      puVar20 = auStack_228;
      goto LAB_18007b862;
    }
  }
  else {
    uVar16 = local_1b0 + 1;
    uVar19 = local_1c8;
    if (uVar16 < 0x1000) {
LAB_18007b7c3:
      thunk_FUN_1803d64e0(uVar19,uVar16);
      goto LAB_18007b7c8;
    }
    uVar19 = *(ulonglong *)(local_1c8 - 8);
    if ((local_1c8 - uVar19) - 8 < 0x20) {
      uVar16 = local_1b0 + 0x28;
      goto LAB_18007b7c3;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar20 = auStack_220;
LAB_18007b85f:
    puVar17 = puVar8;
LAB_18007b862:
    uVar9 = puVar8[2];
    *(undefined8 *)(puVar20 + -8) = 0x18007b86f;
    FUN_180029840(&local_188,puVar17,uVar9);
    puVar21 = puVar20;
  }
  local_160 = puVar8[0x29];
  local_134 = 10;
  if (param_2 == 1) {
    local_158 = 2;
    local_130 = (ushort)local_130._1_1_ << 8;
    local_154 = 0.353;
    local_150 = 0.627;
    local_14c = 1.0;
    local_148 = CONCAT44(local_148._4_4_,0x3f800000);
  }
  else {
    local_158 = 3;
    if (param_2 == 2) {
      local_158 = 1;
    }
    local_130 = CONCAT11(local_130._1_1_,param_2 == 0);
    local_134 = 10;
    if (param_2 == 2) {
      local_134 = 0xe;
    }
  }
  uVar6 = local_158;
  *(undefined8 *)(puVar21 + -8) = 0x18007b8ea;
  local_168 = param_2;
  iVar4 = FUN_18047fe10(param_1,3);
  if (0 < iVar4) {
    *(undefined8 *)(puVar21 + -8) = 0x18007b905;
    FUN_18047e240(param_1,3,5);
    *(undefined8 *)(puVar21 + -8) = 0x18007b919;
    FUN_18047eb70(param_1,3,&DAT_1806e4c58);
    *(undefined8 *)(puVar21 + -8) = 0x18007b921;
    uVar5 = FUN_18047ed40(param_1);
    *(undefined8 *)(puVar21 + -8) = 0x18007b92e;
    iVar4 = FUN_18047fe10(param_1,uVar5);
    if (0 < iVar4) {
      *(undefined8 *)(puVar21 + -8) = 0x18007b940;
      _Str1 = (char *)FUN_18047e090(param_1,uVar5,0);
      uVar6 = 0;
      *(undefined8 *)(puVar21 + -8) = 0x18007b955;
      iVar4 = strcmp(_Str1,PTR_DAT_1805a0588);
      if (iVar4 != 0) {
        uVar6 = 1;
        *(undefined8 *)(puVar21 + -8) = 0x18007b96b;
        iVar4 = strcmp(_Str1,PTR_s_bottom_1805a0590);
        if (iVar4 != 0) {
          uVar6 = 2;
          *(undefined8 *)(puVar21 + -8) = 0x18007b983;
          iVar4 = strcmp(_Str1,PTR_DAT_1805a0598);
          if (iVar4 != 0) {
            uVar6 = 3;
            *(undefined8 *)(puVar21 + -8) = 0x18007b99b;
            iVar4 = strcmp(_Str1,PTR_s_right_1805a05a0);
            if (iVar4 != 0) {
              *(undefined8 *)(puVar21 + -8) = 0x18007b9ae;
              uVar6 = FUN_180484c10(param_1,
                                    "esp: side must be \'top\', \'bottom\', \'left\' or \'right\'");
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar21 + -8) = 0x18007b9c0;
    local_158 = uVar6;
    FUN_18047fb50(param_1,0xfffffffe);
    *(undefined8 *)(puVar21 + -8) = 0x18007b9d4;
    FUN_18047eb70(param_1,3,"color");
    *(undefined8 *)(puVar21 + -8) = 0x18007b9e1;
    iVar4 = FUN_18047fe10(param_1,0xffffffff);
    fVar2 = DAT_1808abfe4;
    if (iVar4 != 0) {
      *(undefined8 *)(puVar21 + -8) = 0x18007b9f5;
      uVar6 = FUN_18047ed40(param_1);
      *(undefined8 *)(puVar21 + -8) = 0x18007b9ff;
      uVar7 = FUN_180063eb0(param_1,uVar6);
      local_154 = (float)(uVar7 & 0xff) * fVar2;
      local_150 = (float)(uVar7 >> 8 & 0xff) * fVar2;
      local_14c = (float)(uVar7 >> 0x10 & 0xff) * fVar2;
      local_148 = CONCAT44(local_148._4_4_,(float)(uVar7 >> 0x18) * fVar2);
    }
    *(undefined8 *)(puVar21 + -8) = 0x18007ba66;
    FUN_18047fb50(param_1,0xfffffffe);
    *(undefined8 *)(puVar21 + -8) = 0x18007ba7a;
    FUN_18047eb70(param_1,3,"second");
    *(undefined8 *)(puVar21 + -8) = 0x18007ba87;
    iVar4 = FUN_18047fe10(param_1,0xffffffff);
    if (iVar4 != 0) {
      *(undefined8 *)(puVar21 + -8) = 0x18007ba93;
      uVar6 = FUN_18047ed40(param_1);
      *(undefined8 *)(puVar21 + -8) = 0x18007ba9d;
      uVar7 = FUN_180063eb0(param_1,uVar6);
      local_148 = CONCAT44((float)(uVar7 & 0xff) * fVar2,(undefined4)local_148);
      uStack_140 = CONCAT44((float)(uVar7 >> 0x10 & 0xff) * fVar2,(float)(uVar7 >> 8 & 0xff) * fVar2
                           );
      local_138 = (float)(uVar7 >> 0x18) * fVar2;
    }
    *(undefined8 *)(puVar21 + -8) = 0x18007bb04;
    FUN_18047fb50(param_1,0xfffffffe);
    *(undefined8 *)(puVar21 + -8) = 0x18007bb18;
    FUN_18047eb70(param_1,3,&DAT_1806e0df8);
    *(undefined8 *)(puVar21 + -8) = 0x18007bb25;
    iVar4 = FUN_18047fe10(param_1,0xffffffff);
    if (iVar4 != 0) {
      *(undefined4 *)(puVar21 + 0x30) = 0x40;
      *(undefined4 *)(puVar21 + 0x24) = 6;
      *(undefined8 *)(puVar21 + -8) = 0x18007bb46;
      iVar4 = FUN_18047e010(param_1,0xffffffff);
      *(int *)(puVar21 + 0x38) = iVar4;
      puVar14 = (undefined4 *)(puVar21 + 0x24);
      if (5 < iVar4) {
        puVar14 = (undefined4 *)(puVar21 + 0x38);
      }
      puVar12 = (undefined4 *)(puVar21 + 0x30);
      if (iVar4 < 0x41) {
        puVar12 = puVar14;
      }
      local_134 = *puVar12;
    }
    *(undefined8 *)(puVar21 + -8) = 0x18007bb7c;
    FUN_18047fb50(param_1,0xfffffffe);
    *(undefined8 *)(puVar21 + -8) = 0x18007bb90;
    FUN_18047eb70(param_1,3,"small");
    *(undefined8 *)(puVar21 + -8) = 0x18007bb9d;
    iVar4 = FUN_18047fe10(param_1,0xffffffff);
    if (iVar4 != 0) {
      *(undefined8 *)(puVar21 + -8) = 0x18007bbae;
      iVar4 = FUN_18047fbf0(param_1,0xffffffff);
      local_130 = CONCAT11(local_130._1_1_,iVar4 != 0);
    }
    *(undefined8 *)(puVar21 + -8) = 0x18007bbc1;
    FUN_18047fb50(param_1,0xfffffffe);
    *(undefined8 *)(puVar21 + -8) = 0x18007bbd5;
    FUN_18047eb70(param_1,3,&DAT_18058b7a0);
    *(undefined8 *)(puVar21 + -8) = 0x18007bbe2;
    iVar4 = FUN_18047fe10(param_1,0xffffffff);
    if (iVar4 != 0) {
      *(undefined8 *)(puVar21 + -8) = 0x18007bbf3;
      iVar4 = FUN_18047fbf0(param_1,0xffffffff);
      local_130 = CONCAT11(iVar4 != 0,(undefined1)local_130);
    }
    *(undefined8 *)(puVar21 + -8) = 0x18007bc06;
    FUN_18047fb50(param_1,0xfffffffe);
  }
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0xf;
  local_108 = (undefined8 ***)0x0;
  *(undefined8 *)(puVar21 + -8) = 0x18007bc34;
  cVar3 = FUN_1800a9fa0(puVar21 + 0x60,&local_108);
  if (cVar3 == '\0') {
    pppuVar15 = &local_108;
    if (0xf < local_f0) {
      pppuVar15 = local_108;
    }
    *(undefined8 *)(puVar21 + -8) = 0x18007bc55;
    uVar7 = FUN_180484c10(param_1,"esp: %s",pppuVar15);
    uVar19 = (ulonglong)uVar7;
  }
  else {
    *(undefined8 *)(puVar21 + -8) = 0x18007bc66;
    FUN_18047f610(param_1,2);
    *(undefined8 *)(puVar21 + -8) = 0x18007bc73;
    uVar6 = FUN_1804851b0(param_1,0xffffd8f0);
    *(undefined4 *)(puVar21 + 0x24) = uVar6;
    cVar3 = '\0';
    puVar21[0x20] = 0;
    plVar22 = puVar8 + 0x23;
    puVar13 = (undefined8 *)puVar8[0x24];
    *(undefined8 **)(puVar21 + 0x30) = puVar13;
    puVar17 = (undefined8 *)*plVar22;
    if (puVar17 == puVar13) {
LAB_18007bd46:
      *(undefined8 *)(puVar21 + -8) = 0x18007bd54;
      FUN_180024b50(&local_e8,puVar21 + 0x60);
      *(undefined8 *)(puVar21 + -8) = 0x18007bd62;
      FUN_180024b50(&local_c8,&local_1a8);
      puVar17 = (undefined8 *)puVar8[0x24];
      local_a8 = param_2;
      local_a4 = uVar6;
      if (puVar17 == (undefined8 *)puVar8[0x25]) {
        *(undefined8 *)(puVar21 + -8) = 0x18007be21;
        FUN_18007e2e0(plVar22,puVar17,&local_e8);
      }
      else {
        *(undefined8 **)(puVar21 + 0x50) = puVar17;
        *puVar17 = 0;
        puVar17[1] = 0;
        puVar17[2] = 0;
        puVar17[3] = 0;
        *puVar17 = CONCAT71(uStack_e7,local_e8);
        puVar17[1] = local_e0;
        puVar17[2] = local_d8;
        puVar17[3] = local_d0;
        local_d8 = 0;
        local_d0 = 0xf;
        local_e8 = 0;
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17[4] = CONCAT71(uStack_c7,local_c8);
        puVar17[5] = local_c0;
        puVar17[6] = local_b8;
        puVar17[7] = local_b0;
        local_b8 = 0;
        local_b0 = 0xf;
        local_c8 = 0;
        *(int *)(puVar17 + 8) = param_2;
        *(undefined4 *)((longlong)puVar17 + 0x44) = uVar6;
        puVar8[0x24] = puVar8[0x24] + 0x48;
      }
      *(undefined8 *)(puVar21 + -8) = 0x18007be2b;
      FUN_18000f890(&local_c8);
      *(undefined8 *)(puVar21 + -8) = 0x18007be35;
      FUN_18000f890(&local_e8);
      uVar19 = *(ulonglong *)(puVar21 + 0x78);
      sVar23 = *(size_t *)(puVar21 + 0x70);
      puVar20 = *(undefined1 **)(puVar21 + 0x60);
    }
    else {
      sVar23 = *(size_t *)(puVar21 + 0x70);
      uVar19 = *(ulonglong *)(puVar21 + 0x78);
      puVar20 = *(undefined1 **)(puVar21 + 0x60);
      do {
        puVar18 = puVar21 + 0x60;
        if (0xf < uVar19) {
          puVar18 = puVar20;
        }
        _Size = puVar17[2];
        if ((ulonglong)puVar17[3] < 0x10) {
          puVar8 = puVar17;
        }
        else {
          puVar8 = (undefined8 *)*puVar17;
        }
        if (_Size == sVar23) {
          if (_Size == 0) {
LAB_18007bcf3:
            uVar5 = *(undefined4 *)((longlong)puVar17 + 0x44);
            *(undefined8 *)(puVar21 + -8) = 0x18007bd04;
            FUN_180485280(param_1,0xffffd8f0,uVar5);
            *(undefined4 *)((longlong)puVar17 + 0x44) = uVar6;
            *(int *)(puVar17 + 8) = param_2;
            cVar3 = '\x01';
            puVar21[0x20] = 1;
          }
          else {
            *(undefined8 *)(puVar21 + -8) = 0x18007bcef;
            iVar4 = memcmp(puVar8,puVar18,_Size);
            if (iVar4 == 0) goto LAB_18007bcf3;
            cVar3 = puVar21[0x20];
          }
          puVar13 = *(undefined8 **)(puVar21 + 0x30);
        }
        puVar17 = puVar17 + 9;
      } while (puVar17 != puVar13);
      puVar8 = *(undefined8 **)(puVar21 + 0x48);
      if (cVar3 == '\0') {
        uVar6 = *(undefined4 *)(puVar21 + 0x24);
        plVar22 = puVar8 + 0x23;
        goto LAB_18007bd46;
      }
    }
    *(undefined8 *)(puVar21 + -8) = 0x18007be52;
    puVar8 = (undefined8 *)FUN_18047efb0(param_1,0x40);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar18 = puVar21 + 0x60;
    if (0xf < uVar19) {
      puVar18 = puVar20;
    }
    *(undefined8 *)(puVar21 + -8) = 0x18007be7c;
    FUN_180540530(puVar8,puVar18,sVar23);
    *(undefined8 *)(puVar21 + -8) = 0x18007be90;
    FUN_18047eb70(param_1,0xffffd8f0,"wl.esp_element");
    *(undefined8 *)(puVar21 + -8) = 0x18007be9d;
    FUN_18047f990(param_1,0xfffffffe);
    uVar19 = 1;
  }
  *(undefined8 *)(puVar21 + -8) = 0x18007beab;
  FUN_18000f890(&local_108);
  *(undefined8 *)(puVar21 + -8) = 0x18007beb5;
  FUN_18000f890(&local_188);
  *(undefined8 *)(puVar21 + -8) = 0x18007bebf;
  FUN_18000f890(&local_1a8);
  *(undefined8 *)(puVar21 + -8) = 0x18007beca;
  FUN_18000f890(puVar21 + 0x60);
LAB_18007bee1:
  *(undefined8 *)(puVar21 + -8) = 0x18007bef0;
  return uVar19;
}



/* ===== 18007bf50 FUN_18007bf50 ===== */

void FUN_18007bf50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  size_t sVar3;
  size_t _Size;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar6 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  puVar9 = *(undefined8 **)(lVar6 + 0x118);
  puVar1 = *(undefined8 **)(lVar6 + 0x120);
  if (puVar9 != puVar1) {
    uVar2 = param_2[3];
    sVar3 = param_2[2];
    do {
      if (uVar2 < 0x10) {
        puVar8 = param_2;
      }
      else {
        puVar8 = (undefined8 *)*param_2;
      }
      _Size = puVar9[2];
      if ((ulonglong)puVar9[3] < 0x10) {
        puVar7 = puVar9;
      }
      else {
        puVar7 = (undefined8 *)*puVar9;
      }
      if ((_Size == sVar3) && ((_Size == 0 || (iVar5 = memcmp(puVar7,puVar8,_Size), iVar5 == 0)))) {
        FUN_180485280(param_1,0xffffd8f0,*(undefined4 *)((longlong)puVar9 + 0x44));
        puVar1 = *(undefined8 **)(lVar6 + 0x120);
        puVar8 = puVar9;
        while (puVar7 = puVar8 + 9, puVar7 != puVar1) {
          FUN_18002ba60(puVar9,puVar7);
          FUN_18002ba60(puVar9 + 4,puVar8 + 0xd);
          *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(puVar8 + 0x11);
          *(undefined4 *)((longlong)puVar9 + 0x44) = *(undefined4 *)((longlong)puVar8 + 0x8c);
          puVar9 = puVar9 + 9;
          puVar8 = puVar7;
        }
        lVar4 = *(longlong *)(lVar6 + 0x120);
        FUN_18000f890(lVar4 + -0x28);
        FUN_18000f890(lVar4 + -0x48);
        *(longlong *)(lVar6 + 0x120) = *(longlong *)(lVar6 + 0x120) + -0x48;
        FUN_1800aa3e0(param_2);
        return;
      }
      puVar9 = puVar9 + 9;
    } while (puVar9 != puVar1);
  }
  return;
}



/* ===== 18007c0a0 FUN_18007c0a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18007c0a0(undefined8 param_1)

{
  longlong lVar1;
  size_t _Size;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined8 *_Buf1;
  ulonglong uVar8;
  undefined8 ****ppppuVar9;
  undefined1 *puVar10;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  longlong local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  undefined8 ****local_70 [2];
  size_t local_60;
  ulonglong local_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  uVar4 = FUN_18047e090(param_1,1,0);
  FUN_180013350(local_70,uVar4);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar5 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  local_b8 = *(longlong *)(lVar5 + 0x10);
  if (local_b8 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  local_a8 = 1;
  local_b0 = &DAT_1806e08bc;
  FUN_180069380(local_50);
  local_98 = 1;
  ppppuVar9 = local_70;
  if (0xf < local_58) {
    ppppuVar9 = local_70[0];
  }
  puVar6 = (ulonglong *)FUN_1800134a0(local_50,ppppuVar9,local_60);
  local_90 = *puVar6;
  uStack_88 = puVar6[1];
  local_80 = puVar6[2];
  uStack_78 = puVar6[3];
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  *(undefined1 *)puVar6 = 0;
  local_98 = 3;
  FUN_18007bf50(param_1,&local_90);
  lVar5 = 1;
  local_98 = 1;
  if (0xf < uStack_78) {
    uVar8 = uStack_78 + 1;
    uVar7 = local_90;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_90 - 8);
      if (0x1f < (local_90 - uVar7) - 8) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar10 = auStack_d0;
LAB_18007c2c3:
        *(undefined8 *)(puVar10 + -8) = 0x18007c2ce;
        FUN_18007bf50(param_1,lVar5);
        goto LAB_18007c2cf;
      }
      uVar8 = uStack_78 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar7,uVar8);
  }
  local_80 = 0;
  uStack_78 = 0xf;
  local_90 = local_90 & 0xffffffffffffff00;
  local_98 = 0;
  FUN_18000f890(local_50);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar5 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  lVar1 = *(longlong *)(lVar5 + 0x120);
  for (lVar5 = *(longlong *)(lVar5 + 0x118); puVar10 = auStack_d8, lVar5 != lVar1;
      lVar5 = lVar5 + 0x48) {
    _Buf1 = (undefined8 *)(lVar5 + 0x20);
    ppppuVar9 = local_70;
    if (0xf < local_58) {
      ppppuVar9 = local_70[0];
    }
    _Size = *(size_t *)(lVar5 + 0x30);
    if (0xf < *(ulonglong *)(lVar5 + 0x38)) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((_Size == local_60) &&
       ((puVar10 = auStack_d8, _Size == 0 ||
        (iVar3 = memcmp(_Buf1,ppppuVar9,_Size), puVar10 = auStack_d8, iVar3 == 0))))
    goto LAB_18007c2c3;
  }
LAB_18007c2cf:
  *(undefined8 *)(puVar10 + -8) = 0x18007c2d8;
  FUN_18000f890(local_70);
  *(undefined8 *)(puVar10 + -8) = 0x18007c2e7;
  return 0;
}



/* ===== 18007c310 FUN_18007c310 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18007c310(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar1 = FUN_18047e2c0(param_1,1,"wl.esp_element");
  uVar2 = FUN_180512ae0(uVar1,0x40);
  uVar1 = FUN_180024b20(local_38,uVar1,uVar2);
  FUN_18007bf50(param_1,uVar1);
  FUN_18000f890(local_38);
  return 0;
}



/* ===== 18007c390 FUN_18007c390 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_18007c390(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  char ****_Str2;
  ulonglong uVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  int local_78 [2];
  char ****local_70 [2];
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_98;
  uVar4 = 1;
  uVar6 = FUN_18047e2c0(param_1,1,"wl.esp_element");
  uVar7 = FUN_180512ae0(uVar6,0x40);
  FUN_180024b20(local_70,uVar6,uVar7);
  lVar8 = FUN_18047e510(param_1,2,&DAT_1806e4c78);
  lVar14 = 0;
  do {
    lVar10 = lVar14 + 1;
    if (*(byte *)(lVar8 + lVar14) != (&DAT_1806e4c78)[lVar14]) {
      uVar3 = -(uint)(*(byte *)(lVar8 + lVar14) < (byte)(&DAT_1806e4c78)[lVar14]) | 1;
      goto LAB_18007c42c;
    }
    lVar14 = lVar10;
  } while (lVar10 != 6);
  uVar3 = 0;
LAB_18007c42c:
  lVar14 = 0;
  do {
    pcVar1 = (char *)(lVar8 + lVar14);
    lVar10 = lVar14 + 1;
    pcVar2 = &DAT_1806e0c0c + lVar14;
    if (*pcVar1 != *pcVar2) break;
    lVar14 = lVar10;
  } while (lVar10 != 5);
  uVar13 = (ulonglong)-(uint)(uVar3 != 0);
  if (*pcVar1 == *pcVar2) {
    uVar13 = 1;
  }
  lVar14 = 0;
  do {
    pcVar1 = (char *)(lVar8 + lVar14);
    lVar10 = lVar14 + 1;
    pcVar2 = "local" + lVar14;
    if (*pcVar1 != *pcVar2) break;
    lVar14 = lVar10;
  } while (lVar10 != 6);
  uVar11 = 2;
  if (*pcVar1 != *pcVar2) {
    if ((int)uVar13 < 0) {
      uVar4 = FUN_180484c10(param_1,"esp: target must be \'enemy\', \'team\' or \'local\'");
      goto LAB_18007c519;
    }
    uVar11 = uVar13;
  }
  uVar13 = 0;
  if ((uint)uVar11 < 4) {
    uVar13 = uVar11;
  }
  lVar14 = uVar13 * 0x192c;
  uVar13 = 0;
  do {
    if (((&DAT_18091b3b8)[uVar13 * 0x74 + lVar14] != '\0') && (local_60 < 0x40)) {
      _Str2 = (char ****)local_70;
      if (0xf < local_58) {
        _Str2 = local_70[0];
      }
      iVar5 = strncmp(&DAT_18091b3b8 + uVar13 * 0x74 + lVar14,(char *)_Str2,0x40);
      if (iVar5 == 0) {
        if (-1 < (int)uVar13) {
          lVar8 = (longlong)(int)uVar13 * 0x74;
          FUN_18047e8f0(param_1,0,6);
          if (((&DAT_18091b3f8)[lVar8 + lVar14] == '\0') || ((&DAT_18091a1e0)[lVar14] == '\0')) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          FUN_18047f270(param_1,uVar6);
          FUN_18047f8e0(param_1,0xfffffffe,"enabled");
          local_78[1] = 3;
          local_78[0] = 0;
          iVar5 = *(int *)(&DAT_18091b3fc + lVar8 + lVar14);
          piVar12 = local_78;
          if (-1 < iVar5) {
            piVar12 = (int *)(&DAT_18091b3fc + lVar8 + lVar14);
          }
          piVar9 = local_78 + 1;
          if (iVar5 < 4) {
            piVar9 = piVar12;
          }
          FUN_18047f530(param_1,(&PTR_DAT_1805a0588)[*piVar9]);
          FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e4c58);
          FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
          uVar6 = FUN_18047fd90(param_1,0xffffffff);
          FUN_18047fb50(param_1,0xfffffffe);
          FUN_180064120(uVar6,&DAT_18091b404 + lVar8 + lVar14);
          FUN_18047f8e0(param_1,0xfffffffe,"color");
          FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
          uVar6 = FUN_18047fd90(param_1,0xffffffff);
          FUN_18047fb50(param_1,0xfffffffe);
          FUN_180064120(uVar6,&DAT_18091b414 + lVar8 + lVar14);
          FUN_18047f8e0(param_1,0xfffffffe,"second");
          FUN_18047f3d0(param_1,(longlong)*(int *)(&DAT_18091b424 + lVar8 + lVar14));
          FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e0df8);
          FUN_18047f270(param_1,(&DAT_18091b429)[lVar8 + lVar14]);
          FUN_18047f8e0(param_1,0xfffffffe,&DAT_18058b7a0);
          goto LAB_18007c519;
        }
        break;
      }
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < 0x10);
  uVar4 = 0;
LAB_18007c519:
  FUN_18000f890(local_70);
  return uVar4;
}



/* ===== 18007c710 FUN_18007c710 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_18007c710(undefined8 param_1)

{
  longlong lVar1;
  size_t _Size;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  size_t sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined8 ****ppppuVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined1 local_d0 [24];
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined4 uStack_af;
  undefined2 uStack_ab;
  undefined1 uStack_a9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 ****local_80 [2];
  size_t local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_f8;
  uVar9 = FUN_18047e090(param_1,1,0);
  FUN_180013350(local_80,uVar9);
  uVar8 = 2;
  iVar6 = FUN_18047e470(param_1,2,0x10);
  sVar5 = local_70;
  if (local_70 - 1 < 0x40) {
    if (iVar6 - 1U < 0x100) {
      FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
      puVar10 = (undefined8 *)FUN_18047fd90(param_1,0xffffffff);
      local_d8 = puVar10;
      FUN_18047fb50(param_1,0xfffffffe);
      uVar15 = 0;
      lVar1 = puVar10[0x2a];
      uVar16 = (puVar10[0x2b] - lVar1 >> 3) * 0x6db6db6db6db6db7;
      if (uVar16 != 0) {
        do {
          puVar10 = (undefined8 *)(uVar15 * 0x38 + lVar1);
          if ((*(char *)((longlong)puVar10 + 0x22) != '\0') &&
             (*(int *)((longlong)puVar10 + 0x34) == iVar6)) {
            ppppuVar14 = local_80;
            if (0xf < local_68) {
              ppppuVar14 = local_80[0];
            }
            _Size = puVar10[2];
            if (0xf < (ulonglong)puVar10[3]) {
              puVar10 = (undefined8 *)*puVar10;
            }
            if ((_Size == sVar5) &&
               ((_Size == 0 || (iVar7 = memcmp(puVar10,ppppuVar14,_Size), iVar7 == 0)))) {
              if (-1 < (int)uVar15) goto LAB_18007c9d2;
              break;
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar16);
      }
      plVar11 = (longlong *)FUN_18007cd20(local_d0,local_80,iVar6);
      puVar10 = local_d8;
      uVar3 = _UNK_1808ad418;
      uVar9 = _DAT_1808ad410;
      if (((*plVar11 == 0) || ((int)plVar11[1] < 1)) || (*(int *)((longlong)plVar11 + 0xc) < 1)) {
        FUN_18047f4d0(param_1);
        FUN_18047f530(param_1,"no such icon");
        goto LAB_18007ca3e;
      }
      plVar11 = local_d8 + 0x2a;
      if ((ulonglong)((local_d8[0x2b] - *plVar11 >> 3) * 0x6db6db6db6db6db7) < 0x100) {
        uStack_b7 = 0;
        uStack_b0 = 0;
        uStack_af = 0;
        uStack_ab = 0;
        uStack_a9 = 0;
        local_a8 = _DAT_1808ad410;
        uStack_a0 = _UNK_1808ad418;
        local_b8 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        ppppuVar14 = local_80;
        if (0xf < local_68) {
          ppppuVar14 = local_80[0];
        }
        FUN_180029840(&local_b8,ppppuVar14,local_70);
        uVar8 = local_98;
        local_98._0_3_ = CONCAT12(1,(undefined2)local_98);
        uVar4 = local_98;
        local_88 = CONCAT44(iVar6,(undefined4)local_88);
        puVar2 = (undefined8 *)puVar10[0x2b];
        if (puVar2 == (undefined8 *)puVar10[0x2c]) {
          FUN_18006a9e0(plVar11,puVar2,&local_b8);
        }
        else {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          *(undefined1 *)puVar2 = local_b8;
          *(ulonglong *)((longlong)puVar2 + 1) = CONCAT17(uStack_b0,uStack_b7);
          *(undefined4 *)((longlong)puVar2 + 9) = uStack_af;
          *(undefined2 *)((longlong)puVar2 + 0xd) = uStack_ab;
          *(undefined1 *)((longlong)puVar2 + 0xf) = uStack_a9;
          puVar2[2] = local_a8;
          puVar2[3] = uStack_a0;
          local_a8 = uVar9;
          uStack_a0 = uVar3;
          local_b8 = 0;
          local_98._0_1_ = (undefined1)uVar8;
          *(undefined1 *)(puVar2 + 4) = (undefined1)local_98;
          local_98._1_1_ = SUB41(uVar8,1);
          *(undefined1 *)((longlong)puVar2 + 0x21) = local_98._1_1_;
          *(undefined1 *)((longlong)puVar2 + 0x22) = 1;
          *(undefined1 *)((longlong)puVar2 + 0x23) = local_98._3_1_;
          puVar2[5] = local_90;
          *(undefined4 *)(puVar2 + 6) = (undefined4)local_88;
          *(int *)((longlong)puVar2 + 0x34) = iVar6;
          puVar10[0x2b] = puVar10[0x2b] + 0x38;
          local_d8 = puVar2;
          local_98 = uVar4;
        }
        uVar15 = (ulonglong)((int)(puVar10[0x2b] - *plVar11 >> 3) * -0x49249249 - 1);
        FUN_18000f890(&local_b8);
LAB_18007c9d2:
        puVar12 = (undefined4 *)FUN_18047efb0(param_1,4);
        *puVar12 = (int)uVar15;
        FUN_18047eb70(param_1,0xffffd8f0,"wl.texture");
        FUN_18047f990(param_1,0xfffffffe);
        uVar8 = 1;
        goto LAB_18007ca3e;
      }
      pcVar13 = "render.icon: 256 textures per script at most";
    }
    else {
      pcVar13 = "render.icon: height out of 1..256";
    }
  }
  else {
    pcVar13 = "render.icon: bad icon name";
  }
  uVar8 = FUN_180484c10(param_1,pcVar13);
LAB_18007ca3e:
  FUN_18000f890(local_80);
  return uVar8;
}



/* ===== 18007ca80 FUN_18007ca80 ===== */

undefined8 FUN_18007ca80(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong local_28;
  longlong local_20;
  
  FUN_18039f7b0(&local_28);
  FUN_18047e8f0(param_1,local_20 - local_28 >> 5,0);
  uVar3 = 0;
  if (local_20 - local_28 >> 5 != 0) {
    do {
      puVar2 = (undefined8 *)(uVar3 * 0x20 + local_28);
      puVar1 = puVar2 + 2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      FUN_18047f450(param_1,puVar2,*puVar1);
      FUN_18047f7e0(param_1,0xfffffffe,(int)uVar3 + 1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)(local_20 - local_28 >> 5));
  }
  FUN_1800288b0(&local_28);
  return 1;
}



/* ===== 18007cb40 FUN_18007cb40 ===== */

undefined8 FUN_18007cb40(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar1 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  plVar2 = (longlong *)(lVar1 + 0xa8);
  FUN_18047e8f0(param_1,0,6);
  if (0xf < *(ulonglong *)(lVar1 + 0xc0)) {
    plVar2 = (longlong *)*plVar2;
  }
  FUN_18047f530(param_1,plVar2);
  FUN_18047f8e0(param_1,0xfffffffe,&DAT_18058b644);
  FUN_18047f3d0(param_1,(longlong)*(int *)(lVar1 + 200));
  FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e4d48);
  FUN_18047f270(param_1,*(undefined1 *)(lVar1 + 0xce));
  FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e4d4c);
  plVar2 = (longlong *)(lVar1 + 0xd0);
  if (0xf < *(ulonglong *)(lVar1 + 0xe8)) {
    plVar2 = (longlong *)*plVar2;
  }
  FUN_18047f530(param_1,plVar2);
  FUN_18047f8e0(param_1,0xfffffffe,"since");
  plVar2 = (longlong *)(lVar1 + 0xf0);
  if (0xf < *(ulonglong *)(lVar1 + 0x108)) {
    plVar2 = (longlong *)*plVar2;
  }
  FUN_18047f530(param_1,plVar2);
  FUN_18047f8e0(param_1,0xfffffffe,"loaded_by");
  FUN_18047f3d0(param_1,(longlong)*(int *)(lVar1 + 0x110));
  FUN_18047f8e0(param_1,0xfffffffe,"loaded_uid");
  return 1;
}



/* ===== 18007ccb0 FUN_18007ccb0 ===== */

undefined8 FUN_18007ccb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_18047e8f0(param_1,0,2);
  uVar1 = FUN_1801c8250();
  FUN_18047f530(param_1,uVar1);
  FUN_18047f8e0(param_1,0xfffffffe,&DAT_18058b644);
  FUN_18047f3d0(param_1,1);
  FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e4d48);
  return 1;
}



/* ===== 18007cd20 FUN_18007cd20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18007cd20(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 ***pppuVar4;
  char *_Str;
  size_t sVar5;
  undefined4 *puVar6;
  undefined8 ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  undefined8 ***local_48 [2];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_88;
  FUN_180024b50(local_48);
  pppuVar7 = local_48;
  if (0xf < local_30) {
    pppuVar7 = local_48[0];
  }
  if (6 < local_38) {
    pppuVar4 = (undefined8 ***)
               thunk_FUN_1804e6890(pppuVar7,(undefined8 ***)((longlong)pppuVar7 + 7),"weapon_",7);
    if ((pppuVar4 != (undefined8 ***)((longlong)pppuVar7 + 7)) && (pppuVar4 == pppuVar7)) {
      uVar8 = 7;
      if (local_38 < 7) {
        uVar8 = local_38;
      }
      pppuVar7 = local_48;
      if (0xf < local_30) {
        pppuVar7 = local_48[0];
      }
      FUN_180540530(pppuVar7,uVar8 + (longlong)pppuVar7,(local_38 - uVar8) + 1);
      local_38 = local_38 - uVar8;
    }
  }
  pppuVar7 = local_48;
  if (0xf < local_30) {
    pppuVar7 = local_48[0];
  }
  if (((1 < local_38) &&
      (pppuVar4 = (undefined8 ***)
                  thunk_FUN_1804e6890(pppuVar7,(undefined8 ***)((longlong)pppuVar7 + 2),
                                      &DAT_1806e4d7c,2),
      pppuVar4 != (undefined8 ***)((longlong)pppuVar7 + 2))) && (pppuVar4 == pppuVar7)) {
    pppuVar7 = local_48;
    if (0xf < local_30) {
      pppuVar7 = local_48[0];
    }
    _Str = (char *)FUN_18039e5c0(pppuVar7);
    if (_Str == (char *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_18000f890(local_48);
      return param_1;
    }
    sVar5 = strlen(_Str);
    FUN_180029840(local_48,_Str,sVar5);
  }
  puVar6 = (undefined4 *)FUN_18039f3d0(local_60,local_48,param_3);
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  *(undefined4 *)param_1 = *puVar6;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  param_1[2] = *(undefined8 *)(puVar6 + 4);
  FUN_18000f890(local_48);
  return param_1;
}



/* ===== 18007ceb0 FUN_18007ceb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18007ceb0(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  int local_5c;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  iVar2 = FUN_18047fe10();
  if (iVar2 == 4) {
    uVar3 = FUN_18047fc70(param_1,param_2,0);
    FUN_180013350(local_50,uVar3);
    plVar4 = (longlong *)FUN_18007cd20(&local_68,local_50,param_3);
    lVar5 = *plVar4;
    lVar1 = plVar4[1];
    iVar2 = *(int *)((longlong)plVar4 + 0xc);
    FUN_18000f890(local_50);
    local_68 = lVar5;
    local_60 = (int)lVar1;
    local_5c = iVar2;
  }
  else {
    lVar5 = FUN_18047e680(param_1,param_2,"wl.texture");
    if (lVar5 == 0) {
      return;
    }
    FUN_18005fe40(&local_68,param_1,param_2);
  }
  if (((local_68 != 0) && (0 < local_60)) && (0 < local_5c)) {
    *(longlong *)(param_4 + 0x38) = local_68;
    *(float *)(param_4 + 0x40) = (float)local_60;
    *(float *)(param_4 + 0x44) = (float)local_5c;
  }
  return;
}



/* ===== 18007cf90 FUN_18007cf90 ===== */

void FUN_18007cf90(undefined8 param_1,ulonglong param_2,longlong param_3,undefined4 param_4,
                  undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  double dVar8;
  undefined8 local_res18;
  float local_38;
  float local_34 [7];
  
  iVar1 = (int)param_2;
  if (*(int *)(param_3 + 0x40) == 1) {
    iVar2 = FUN_18047fe10(param_1);
    if (iVar2 == 3) {
      local_34[0] = 1.0;
      local_res18 = (ulonglong)local_res18._4_4_ << 0x20;
      dVar8 = (double)FUN_18047fd30(param_1,param_2 & 0xffffffff);
      local_38 = (float)dVar8;
      pfVar6 = (float *)&local_res18;
      if (0.0 <= local_38) {
        pfVar6 = &local_38;
      }
      pfVar5 = local_34;
      if (local_38 <= DAT_1808ac34c) {
        pfVar5 = pfVar6;
      }
      *(float *)(param_5 + 0x30) = *pfVar5;
      iVar2 = FUN_18047fe10(param_1,iVar1 + 1);
      if (iVar2 - 3U < 2) {
        local_res18 = 0;
        uVar4 = FUN_18047fc70(param_1,iVar1 + 1,&local_res18);
        uVar7 = local_res18;
        if (0x80 < local_res18) {
          uVar7 = 0x80;
        }
        FUN_180029840(param_5 + 8,uVar4,uVar7);
      }
      iVar2 = FUN_18047fe10(param_1,iVar1 + 2);
      if (0 < iVar2) {
        uVar3 = FUN_180063eb0(param_1,iVar1 + 2);
        *(undefined4 *)(param_5 + 0x2c) = uVar3;
        param_5[0x28] = 1;
      }
      *param_5 = 1;
    }
  }
  else {
    if (*(int *)(param_3 + 0x40) == 2) {
      FUN_18007ceb0(param_1,param_2,param_4,param_5);
      iVar2 = FUN_18047fe10(param_1,iVar1 + 1);
      if (0 < iVar2) {
        uVar3 = FUN_180063eb0(param_1,iVar1 + 1);
        *(undefined4 *)(param_5 + 0x2c) = uVar3;
        param_5[0x28] = 1;
      }
      iVar2 = FUN_18047fe10(param_1,iVar1 + 2);
      if (iVar2 - 3U < 2) {
        local_res18 = 0;
        uVar4 = FUN_18047fc70(param_1,iVar1 + 2,&local_res18);
        uVar7 = local_res18;
        if (0x80 < local_res18) {
          uVar7 = 0x80;
        }
        FUN_180029840(param_5 + 8,uVar4,uVar7);
      }
      if ((*(longlong *)(param_5 + 0x38) == 0) && (*(longlong *)(param_5 + 0x18) == 0)) {
        *param_5 = 0;
        return;
      }
      *param_5 = 1;
      return;
    }
    iVar2 = FUN_18047fe10();
    if (iVar2 - 3U < 2) {
      local_res18 = 0;
      uVar4 = FUN_18047fc70(param_1,param_2 & 0xffffffff,&local_res18);
      uVar7 = local_res18;
      if (0x80 < local_res18) {
        uVar7 = 0x80;
      }
      FUN_180029840(param_5 + 8,uVar4,uVar7);
      iVar2 = FUN_18047fe10(param_1,iVar1 + 1);
      if (0 < iVar2) {
        uVar3 = FUN_180063eb0(param_1,iVar1 + 1);
        *(undefined4 *)(param_5 + 0x2c) = uVar3;
        param_5[0x28] = 1;
      }
      FUN_18007ceb0(param_1,iVar1 + 2,param_4,param_5);
      *param_5 = 1;
      return;
    }
    FUN_18007ceb0(param_1,iVar1 + 2,param_4,param_5);
    *param_5 = *(longlong *)(param_5 + 0x38) != 0;
    if (*(longlong *)(param_5 + 0x38) != 0) {
      iVar2 = FUN_18047fe10(param_1,iVar1 + 1);
      if (0 < iVar2) {
        uVar3 = FUN_180063eb0(param_1,iVar1 + 1);
        *(undefined4 *)(param_5 + 0x2c) = uVar3;
        param_5[0x28] = 1;
        return;
      }
    }
  }
  return;
}



/* ===== 18007d250 FUN_18007d250 ===== */

void FUN_18007d250(longlong param_1)

{
  char **ppcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char **ppcVar6;
  char *local_c8;
  code *local_c0;
  char *local_b8;
  code *local_b0;
  char *local_a8;
  code *local_a0;
  char *local_98;
  code *local_90;
  char *local_88;
  code *local_80;
  char *local_78;
  code *local_70;
  char *local_68;
  code *local_60;
  char *local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  local_c8 = "weapons";
  local_c0 = FUN_1800783e0;
  local_58 = (char *)0x0;
  local_b8 = "weapon_info";
  local_50 = (code *)0x0;
  local_b0 = FUN_1800785c0;
  local_a8 = "hitboxes";
  local_a0 = FUN_180078d00;
  local_98 = "hitbox";
  local_90 = FUN_180079210;
  local_88 = "flags";
  local_80 = FUN_180079460;
  local_78 = "on_ground";
  local_70 = FUN_180079500;
  local_68 = "scoped";
  local_60 = FUN_1800795a0;
  FUN_18047eb70(uVar2,0xffffd8f0,"wl.entity");
  iVar3 = FUN_18047fe10(uVar2,0xffffffff);
  uVar5 = 0xfffffffd;
  if (iVar3 == 5) {
    FUN_18047eb70(uVar2,0xffffffff,"__index");
    iVar3 = FUN_18047fe10(uVar2,0xffffffff);
    if (iVar3 == 5) {
      ppcVar6 = &local_c8;
      do {
        FUN_18047f2b0(uVar2,ppcVar6[1],0);
        FUN_18047f8e0(uVar2,0xfffffffe);
        ppcVar1 = ppcVar6 + 2;
        ppcVar6 = ppcVar6 + 2;
      } while (*ppcVar1 != (char *)0x0);
    }
    uVar4 = 0xfffffffd;
  }
  else {
    uVar4 = 0xfffffffe;
  }
  FUN_18047fb50(uVar2,uVar4);
  local_b8 = (char *)0x0;
  local_c8 = "rotate_movement";
  local_b0 = (code *)0x0;
  local_c0 = FUN_180079a90;
  FUN_18047eb70(uVar2,0xffffd8f0,"wl.cmd");
  iVar3 = FUN_18047fe10(uVar2,0xffffffff);
  if (iVar3 == 5) {
    FUN_18047eb70(uVar2,0xffffffff,"__index");
    iVar3 = FUN_18047fe10(uVar2,0xffffffff);
    if (iVar3 == 5) {
      ppcVar6 = &local_c8;
      do {
        FUN_18047f2b0(uVar2,ppcVar6[1],0);
        FUN_18047f8e0(uVar2,0xfffffffe);
        ppcVar1 = ppcVar6 + 2;
        ppcVar6 = ppcVar6 + 2;
      } while (*ppcVar1 != (char *)0x0);
    }
    uVar4 = 0xfffffffd;
  }
  else {
    uVar4 = 0xfffffffe;
  }
  FUN_18047fb50(uVar2,uVar4);
  local_78 = (char *)0x0;
  local_c8 = "origin";
  local_70 = (code *)0x0;
  local_c0 = FUN_180079cc0;
  local_b8 = "set_origin";
  local_b0 = FUN_180079dd0;
  local_a8 = "angles";
  local_a0 = FUN_180079e60;
  local_98 = "set_angles";
  local_90 = FUN_180079f70;
  local_88 = "aspect";
  local_80 = FUN_18007a000;
  FUN_18047eb70(uVar2,0xffffd8f0,"wl.view");
  iVar3 = FUN_18047fe10(uVar2,0xffffffff);
  if (iVar3 == 5) {
    FUN_18047eb70(uVar2,0xffffffff,"__index");
    iVar3 = FUN_18047fe10(uVar2,0xffffffff);
    if (iVar3 == 5) {
      ppcVar6 = &local_c8;
      do {
        FUN_18047f2b0(uVar2,ppcVar6[1],0);
        FUN_18047f8e0(uVar2,0xfffffffe);
        ppcVar1 = ppcVar6 + 2;
        ppcVar6 = ppcVar6 + 2;
      } while (*ppcVar1 != (char *)0x0);
    }
    uVar4 = 0xfffffffd;
  }
  else {
    uVar4 = 0xfffffffe;
  }
  FUN_18047fb50(uVar2,uVar4);
  local_b8 = (char *)0x0;
  local_c0 = FUN_18007a070;
  local_c8 = "name";
  local_b0 = (code *)0x0;
  FUN_18047eb70(uVar2,0xffffd8f0,"wl.cvar");
  iVar3 = FUN_18047fe10(uVar2,0xffffffff);
  if (iVar3 == 5) {
    FUN_18047eb70(uVar2,0xffffffff,"__index");
    iVar3 = FUN_18047fe10(uVar2,0xffffffff);
    if (iVar3 == 5) {
      ppcVar6 = &local_c8;
      do {
        FUN_18047f2b0(uVar2,ppcVar6[1],0);
        FUN_18047f8e0(uVar2,0xfffffffe);
        ppcVar1 = ppcVar6 + 2;
        ppcVar6 = ppcVar6 + 2;
      } while (*ppcVar1 != (char *)0x0);
    }
  }
  else {
    uVar5 = 0xfffffffe;
  }
  FUN_18047fb50(uVar2,uVar5);
  local_48 = 0;
  local_c8 = "map";
  local_40 = 0;
  local_c0 = FUN_180079780;
  local_b8 = "in_menu";
  local_b0 = FUN_1800797f0;
  local_a8 = "warmup";
  local_a0 = FUN_180079810;
  local_98 = "freeze_time";
  local_90 = FUN_180079840;
  local_88 = "bomb_planted";
  local_80 = FUN_180079870;
  local_78 = "rounds_played";
  local_70 = FUN_1800798a0;
  local_68 = "round_time_left";
  local_60 = FUN_1800798d0;
  local_58 = "match_started";
  local_50 = FUN_1800799c0;
  FUN_180078310(uVar2,&DAT_1806e4e50,&local_c8);
  local_a8 = (char *)0x0;
  local_c8 = "tickcount";
  local_a0 = (code *)0x0;
  local_c0 = FUN_1800799f0;
  local_b8 = "framecount";
  local_b0 = FUN_180079a40;
  FUN_180078310(uVar2,"globals",&local_c8);
  local_a8 = (char *)0x0;
  local_c8 = "time";
  local_a0 = (code *)0x0;
  local_c0 = FUN_18006ed10;
  local_b8 = "date";
  local_b0 = FUN_18007a0d0;
  FUN_180078310(uVar2,"utils",&local_c8);
  local_c8 = "list";
  local_a8 = "remove";
  local_c0 = FUN_18007a1f0;
  local_b8 = "add";
  local_b0 = FUN_18007a4c0;
  local_a0 = FUN_18007a920;
  local_88 = (char *)0x0;
  local_98 = "active";
  local_80 = (code *)0x0;
  local_90 = FUN_18007aa90;
  FUN_180078310(uVar2,"binds",&local_c8);
  local_b8 = (char *)0x0;
  local_c8 = "key_pressed";
  local_b0 = (code *)0x0;
  local_c0 = FUN_18007ab90;
  FUN_180078310(uVar2,"input",&local_c8);
  local_c8 = "name";
  local_c0 = FUN_18007b2e0;
  local_88 = (char *)0x0;
  local_b8 = "uid";
  local_80 = (code *)0x0;
  local_b0 = FUN_18007b310;
  local_a8 = "avatar";
  local_a0 = FUN_18007b330;
  local_98 = "info";
  local_90 = FUN_18007ccb0;
  FUN_180078310(uVar2,&DAT_1806e4e94,&local_c8);
  local_b8 = (char *)0x0;
  local_c8 = "owner";
  local_b0 = (code *)0x0;
  local_c0 = FUN_18007cb40;
  FUN_180078310(uVar2,"client",&local_c8);
  local_98 = "remove";
  local_c8 = "add_text";
  local_88 = (char *)0x0;
  local_c0 = (code *)&LAB_18007bf20;
  local_80 = (code *)0x0;
  local_b8 = "add_bar";
  local_b0 = (code *)&LAB_18007bf30;
  local_a8 = "add_icon";
  local_a0 = (code *)&LAB_18007bf40;
  local_90 = FUN_18007c0a0;
  FUN_180078310(uVar2,&DAT_1806e03f0,&local_c8);
  FUN_18047e380(uVar2,"wl.esp_element");
  FUN_18047e8f0(uVar2,0,0);
  FUN_18047f2b0(uVar2,FUN_18007c310,0);
  FUN_18047f8e0(uVar2,0xfffffffe,"remove");
  FUN_18047f2b0(uVar2,FUN_18007c390,0);
  FUN_18047f8e0(uVar2,0xfffffffe,"settings");
  FUN_18047f8e0(uVar2,0xfffffffe,"__index");
  FUN_18047fb50(uVar2,0xfffffffe);
  local_98 = (char *)0x0;
  local_c8 = "font";
  local_90 = (code *)0x0;
  local_c0 = FUN_18007aeb0;
  local_b8 = "icon";
  local_b0 = FUN_18007c710;
  local_a8 = "icons";
  local_a0 = FUN_18007ca80;
  FUN_180078310(uVar2,"render",&local_c8);
  FUN_18047e380(uVar2,"wl.font");
  FUN_18047e8f0(uVar2,0,0);
  FUN_18047f2b0(uVar2,FUN_18007b280,0);
  FUN_18047f8e0(uVar2,0xfffffffe,"loaded");
  FUN_18047f8e0(uVar2,0xfffffffe,"__index");
  FUN_18047fb50(uVar2,0xfffffffe);
  return;
}



/* ===== 18007da60 FUN_18007da60 ===== */

undefined8 FUN_18007da60(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  ushort *puVar9;
  undefined8 local_18;
  longlong local_10;
  
  if (DAT_180ca0d20 == 0) {
    local_18 = 0;
    local_10 = 0;
    FUN_18007e1d0(&local_18,0x800);
    lVar3 = local_10;
    local_18 = CONCAT44(local_18._4_4_,0x800);
    FUN_180540170(local_10,0,0x2000);
    puVar9 = &DAT_1808a95e4;
    do {
      uVar7 = (uint)*puVar9;
      if (*puVar9 <= puVar9[1]) {
        do {
          if (0xffff < uVar7) break;
          puVar2 = (uint *)(lVar3 + (ulonglong)((uVar7 & 0xffff) >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)(uVar7 & 0xffff) & 0x1f);
          uVar7 = uVar7 + 1;
        } while (uVar7 <= puVar9[1]);
      }
      puVar9 = puVar9 + 2;
    } while (*puVar9 != 0);
    puVar9 = &DAT_1808a95d0;
    do {
      uVar8 = (ulonglong)*puVar9;
      if (*puVar9 <= puVar9[1]) {
        do {
          if (0xffff < (uint)uVar8) break;
          puVar2 = (uint *)(lVar3 + ((uVar8 & 0xffff) >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)(uVar8 & 0xffff) & 0x1f);
          uVar7 = (uint)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 <= puVar9[1]);
      }
      puVar9 = puVar9 + 2;
    } while (*puVar9 != 0);
    puVar9 = &DAT_1808a95f0;
    do {
      uVar7 = (uint)*puVar9;
      if (*puVar9 <= puVar9[1]) {
        do {
          if (0xffff < uVar7) break;
          puVar2 = (uint *)(lVar3 + (ulonglong)((uVar7 & 0xffff) >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)(uVar7 & 0xffff) & 0x1f);
          uVar7 = uVar7 + 1;
        } while (uVar7 <= puVar9[1]);
      }
      puVar9 = puVar9 + 2;
    } while (*puVar9 != 0);
    FUN_180409210(&local_18,&DAT_180ca0d20);
    lVar3 = DAT_180ca0a50;
    if (local_10 != 0) {
      if (DAT_180ca0a50 != 0) {
        piVar1 = (int *)(DAT_180ca0a50 + 4);
        piVar6 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
        if (*piVar6 != *piVar1) {
          iVar5 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
          sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(DAT_180ca0a50 + 0x29bc) = sVar4;
          piVar6 = (int *)(lVar3 + 0x29c0 + (longlong)sVar4 * 8);
          *piVar6 = *piVar1;
          *(undefined4 *)(lVar3 + 0x29c4 + (longlong)sVar4 * 8) = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        *(int *)(lVar3 + 0x29b8) = *(int *)(lVar3 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(local_10);
    }
  }
  return DAT_180ca0d28;
}



/* ===== 18007dc50 FUN_18007dc50 ===== */

void FUN_18007dc50(void)

{
  FUN_18007dea0();
  return;
}



/* ===== 18007dc70 FUN_18007dc70 ===== */

void FUN_18007dc70(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (DAT_180ca0a50 != 0) {
    iVar3 = FUN_1804e4d70(&DAT_180963420);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_18096346c == 0x7fffffff) {
      DAT_18096346c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    uVar7 = DAT_180ca0cd0 + DAT_180ca0cc8;
    for (uVar8 = DAT_180ca0cc8; uVar8 != uVar7; uVar8 = uVar8 + 1) {
      plVar1 = *(longlong **)(DAT_180ca0cb8 + (DAT_180ca0cc0 - 1U & uVar8) * 8);
      if ((plVar1[5] == 0) && ((char)plVar1[6] == '\0')) {
        uVar2 = *(undefined8 *)(DAT_180ca0a50 + 0x60);
        uVar4 = FUN_18007da60();
        if ((ulonglong)plVar1[3] < 0x10) {
          plVar6 = plVar1;
        }
        else {
          plVar6 = (longlong *)*plVar1;
        }
        lVar5 = FUN_180403770(uVar2,plVar6,(int)plVar1[4],0,uVar4);
        plVar1[5] = lVar5;
        if (lVar5 == 0) {
          *(undefined1 *)(plVar1 + 6) = 1;
        }
      }
    }
    FUN_1804e4e90(&DAT_180963420);
  }
  return;
}



/* ===== 18007dd80 FUN_18007dd80 ===== */

ulonglong FUN_18007dd80(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  char **ppcVar3;
  char *local_18;
  char *local_10;
  
  lVar1 = FUN_180079610();
  ppcVar3 = &local_18;
  local_18 = "C_CSGameRules";
  do {
    uVar2 = FUN_18038eaf0(*ppcVar3,param_1);
    if ((int)uVar2 != 0) goto LAB_18007ddcf;
    ppcVar3 = ppcVar3 + 1;
  } while (ppcVar3 != &local_10);
  uVar2 = 0;
LAB_18007ddcf:
  if ((lVar1 == 0) || ((int)uVar2 == 0)) {
    return uVar2 & 0xffffffffffffff00;
  }
  uVar2 = FUN_180011220((uVar2 & 0xffffffff) + lVar1);
  return uVar2;
}



/* ===== 18007de10 FUN_18007de10 ===== */

undefined8 FUN_18007de10(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char **ppcVar4;
  char *local_18;
  char *local_10;
  
  lVar2 = FUN_180079610();
  ppcVar4 = &local_18;
  local_18 = "C_CSGameRules";
  do {
    uVar1 = FUN_18038eaf0(*ppcVar4,param_1);
    if (uVar1 != 0) goto LAB_18007de5f;
    ppcVar4 = ppcVar4 + 1;
  } while (ppcVar4 != &local_10);
  uVar1 = 0;
LAB_18007de5f:
  if ((lVar2 == 0) || (uVar1 == 0)) {
    return 0;
  }
  uVar3 = FUN_180011200((ulonglong)uVar1 + lVar2);
  return uVar3;
}



/* ===== 18007dea0 FUN_18007dea0 ===== */

void FUN_18007dea0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  lVar3 = DAT_180ca0a50;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    if (DAT_180ca0a50 != 0) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar6 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar6 != *piVar1) {
        iVar5 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar4;
        piVar6 = (int *)(lVar3 + 0x29c0 + (longlong)sVar4 * 8);
        *piVar6 = *piVar1;
        *(undefined4 *)(lVar3 + 0x29c4 + (longlong)sVar4 * 8) = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      *(int *)(lVar3 + 0x29b8) = *(int *)(lVar3 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar2);
  }
  return;
}



/* ===== 18007df30 FUN_18007df30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18007df30(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 *param_4)

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
  puVar4 = (undefined8 *)(DAT_180ca0d10 & uVar5);
  puVar3 = *(undefined8 **)(DAT_180ca0cf8 + 8 + (longlong)puVar4 * 0x10);
  puVar6 = DAT_180ca0ce8;
  if (puVar3 != DAT_180ca0ce8) {
    puVar4 = *(undefined8 **)(DAT_180ca0cf8 + (longlong)puVar4 * 0x10);
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
  if (DAT_180ca0cf0 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x20,puVar4,DAT_180ca0cf8,param_4,&DAT_180ca0ce8,0);
  puVar3[2] = *(undefined8 *)param_3;
  *(undefined4 *)(puVar3 + 3) = *param_4;
  if (_DAT_180ca0ce0 < (float)(DAT_180ca0cf0 + 1) / (float)DAT_180ca0d18) {
    FUN_180027b20(&DAT_180ca0ce0);
    puVar4 = *(undefined8 **)(DAT_180ca0cf8 + 8 + (DAT_180ca0d10 & uVar5) * 0x10);
    puVar6 = DAT_180ca0ce8;
    if (puVar4 != DAT_180ca0ce8) {
      lVar1 = puVar4[2];
      puVar6 = puVar4;
      while (puVar3[2] != lVar1) {
        if (puVar6 == *(undefined8 **)(DAT_180ca0cf8 + (DAT_180ca0d10 & uVar5) * 0x10))
        goto LAB_18007e139;
        puVar6 = (undefined8 *)puVar6[1];
        lVar1 = puVar6[2];
      }
      puVar6 = (undefined8 *)*puVar6;
    }
  }
LAB_18007e139:
  puVar4 = (undefined8 *)puVar6[1];
  DAT_180ca0cf0 = DAT_180ca0cf0 + 1;
  *puVar3 = puVar6;
  puVar3[1] = puVar4;
  *puVar4 = puVar3;
  puVar6[1] = puVar3;
  lVar1 = DAT_180ca0cf8;
  uVar5 = DAT_180ca0d10 & uVar5;
  puVar2 = *(undefined8 **)(DAT_180ca0cf8 + uVar5 * 0x10);
  if (puVar2 == DAT_180ca0ce8) {
    *(undefined8 **)(DAT_180ca0cf8 + uVar5 * 0x10) = puVar3;
  }
  else {
    if (puVar2 == puVar6) {
      *(undefined8 **)(DAT_180ca0cf8 + uVar5 * 0x10) = puVar3;
      goto LAB_18007e1a1;
    }
    if (*(undefined8 **)(DAT_180ca0cf8 + 8 + uVar5 * 0x10) != puVar4) goto LAB_18007e1a1;
  }
  *(undefined8 **)(lVar1 + 8 + uVar5 * 0x10) = puVar3;
LAB_18007e1a1:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18007e1d0 FUN_18007e1d0 ===== */

void FUN_18007e1d0(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[1] < param_2) {
    uVar3 = _malloc_base((longlong)param_2 * 4);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_180540530(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 << 2);
      lVar1 = *(longlong *)(param_1 + 2);
      if ((lVar1 != 0) && (lVar2 != 0)) {
        piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
        if (*piVar6 != *(int *)(lVar2 + 4)) {
          iVar5 = *(short *)(lVar2 + 0x29bc) + 1;
          sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(lVar2 + 0x29bc) = sVar4;
          piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)sVar4 * 8);
          *piVar6 = *(int *)(lVar2 + 4);
          *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar4 * 8) = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar1);
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
    param_1[1] = param_2;
  }
  return;
}



/* ===== 18007e2e0 FUN_18007e2e0 ===== */

undefined8 * FUN_18007e2e0(ulonglong *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 *local_78;
  ulonglong *local_70;
  undefined8 *local_68;
  ulonglong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  
  uVar12 = *param_1;
  lVar4 = (longlong)(param_1[1] - uVar12) / 0x48;
  uVar11 = 0x38e38e38e38e38e;
  if (lVar4 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar4 + 1;
  uVar10 = (longlong)(param_1[2] - uVar12) / 0x48;
  if (uVar10 <= 0x38e38e38e38e38e - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar11 = uVar1;
    if (uVar1 <= uVar10) {
      uVar11 = uVar10;
    }
    if (0x38e38e38e38e38e < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar11 * 0x48);
  puVar2 = puVar9 + ((longlong)(param_2 - uVar12) / 0x48) * 9;
  puVar15 = puVar2 + 9;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar16 = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar8 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar8;
  uVar8 = param_3[3];
  puVar2[2] = param_3[2];
  puVar2[3] = uVar8;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar6 = *(undefined4 *)(param_3 + 5);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar5;
  *(undefined4 *)(puVar2 + 5) = uVar6;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar7;
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar6 = *(undefined4 *)(param_3 + 7);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar5;
  *(undefined4 *)(puVar2 + 7) = uVar6;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar7;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 4) = 0;
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)((longlong)puVar2 + 0x44) = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar12 = param_1[1];
  local_78 = puVar2;
  local_70 = param_1;
  local_68 = puVar9;
  local_60 = uVar11;
  local_58 = puVar2;
  local_50 = puVar15;
  if (param_2 == uVar12) {
    param_2 = *param_1;
    puVar15 = puVar9;
  }
  else {
    FUN_18007e750(*param_1,param_2,puVar9,param_1);
    uVar12 = param_1[1];
    local_58 = puVar9;
  }
  FUN_18007e750(param_2,uVar12,puVar15,param_1);
  puVar13 = auStack_98;
  puVar14 = auStack_98;
  uVar12 = *param_1;
  if (uVar12 == 0) goto LAB_18007e544;
  uVar10 = param_1[1];
  local_68 = (undefined8 *)uVar16;
  for (; uVar12 != uVar10; uVar12 = uVar12 + 0x48) {
    FUN_18000f890(uVar12 + 0x20);
    FUN_18000f890(uVar12);
  }
  uVar12 = *param_1;
  uVar10 = uVar12;
  if ((ulonglong)(((longlong)(param_1[2] - uVar12) / 0x48) * 0x48) < 0x1000) {
LAB_18007e53c:
    puVar14 = puVar13;
  }
  else {
    uVar10 = *(ulonglong *)(uVar12 - 8);
    uVar12 = (uVar12 - uVar10) - 8;
    if (0x1f < uVar12) {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar13 = auStack_90;
      uVar10 = uVar12;
      goto LAB_18007e53c;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x18007e544;
  thunk_FUN_1803d64e0(uVar10);
LAB_18007e544:
  *param_1 = (ulonglong)puVar9;
  param_1[1] = (ulonglong)(puVar9 + uVar1 * 9);
  param_1[2] = (ulonglong)(puVar9 + uVar11 * 9);
  return puVar2;
}



/* ===== 18007e580 FUN_18007e580 ===== */

void FUN_18007e580(void)

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
  
  uVar2 = DAT_180ca0cc8;
  uVar6 = 1;
  if (DAT_180ca0cc0 != 0) {
    uVar6 = DAT_180ca0cc0;
  }
  for (; (uVar6 == DAT_180ca0cc0 || (uVar6 < 8)); uVar6 = uVar6 * 2) {
    if (0x492492492492492 - uVar6 < uVar6) {
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
  uVar6 = uVar6 - DAT_180ca0cc0;
  lVar9 = (DAT_180ca0cc0 - uVar2) * 8;
  FUN_180540530(lVar5 + lVar3,DAT_180ca0cb8 + lVar5,lVar9);
  lVar9 = lVar9 + lVar5 + lVar3;
  if (uVar6 < uVar2) {
    lVar5 = uVar6 * 8;
    FUN_180540530(lVar9,DAT_180ca0cb8,lVar5);
    lVar9 = (uVar2 - uVar6) * 8;
    FUN_180540530(lVar3,DAT_180ca0cb8 + lVar5,lVar9);
    lVar9 = lVar3 + lVar9;
  }
  else {
    FUN_180540530(lVar9,DAT_180ca0cb8,lVar5);
    FUN_180540170(lVar9 + lVar5,0,(uVar6 - uVar2) * 8);
    lVar9 = lVar3;
  }
  FUN_180540170(lVar9,0,lVar5);
  puVar7 = auStack_38;
  puVar8 = auStack_38;
  if (DAT_180ca0cb8 == 0) goto LAB_18007e728;
  lVar5 = DAT_180ca0cb8;
  if (DAT_180ca0cc0 * 8 < 0x1000) {
LAB_18007e71d:
    puVar8 = puVar7;
  }
  else {
    lVar5 = *(longlong *)(DAT_180ca0cb8 + -8);
    if (0x1f < (DAT_180ca0cb8 - lVar5) - 8U) {
      lVar5 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar7 = auStack_30;
      goto LAB_18007e71d;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x18007e728;
  thunk_FUN_1803d64e0(lVar5);
LAB_18007e728:
  DAT_180ca0cc0 = DAT_180ca0cc0 + uVar6;
  DAT_180ca0cb8 = lVar3;
  return;
}



/* ===== 18007e750 FUN_18007e750 ===== */

undefined8 * FUN_18007e750(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 9) {
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
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)param_3 + 0x44) = *(undefined4 *)((longlong)param_1 + 0x44);
    param_3 = param_3 + 9;
  }
  return param_3;
}



/* ===== 18007e820 FUN_18007e820 ===== */

void FUN_18007e820(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1804e4cd0("deque<T> too long");
}



/* ===== 18007e840 FUN_18007e840 ===== */

void FUN_18007e840(longlong param_1)

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
  for (lVar6 = *(longlong *)(param_1 + 0x18); lVar6 != lVar1; lVar6 = lVar6 + 0x48) {
    FUN_18000f890(lVar6 + 0x20);
    FUN_18000f890(lVar6);
  }
  uVar5 = *(ulonglong *)(param_1 + 8);
  uVar4 = *(longlong *)(param_1 + 0x10) * 0x48;
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
  *(undefined8 *)(puVar7 + -8) = 0x18007e8da;
  thunk_FUN_1803d64e0(uVar3,uVar4);
  return;
}



/* ===== 18007e8f0 FUN_18007e8f0 ===== */

void FUN_18007e8f0(longlong *param_1)

{
  FUN_1800819d0(param_1,param_1,*(undefined8 *)(*param_1 + 8));
  thunk_FUN_1803d64e0(*param_1,0x40);
  return;
}



/* ===== 18007e920 FUN_18007e920 ===== */

undefined4 FUN_18007e920(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_res20 [2];
  
  local_res20[0] = 0xffffffff;
  (*DAT_180962088)(param_1,local_res20,param_2,param_3,0,0,0,0);
  return local_res20[0];
}



/* ===== 18007e970 FUN_18007e970 ===== */

void FUN_18007e970(void)

{
  (*DAT_180962090)();
  return;
}



/* ===== 18007e990 FUN_18007e990 ===== */

void FUN_18007e990(void)

{
  if (DAT_1809620b0 != (code *)0x0) {
    (*DAT_1809620b0)();
  }
  return;
}



/* ===== 18007ea00 FUN_18007ea00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18007ea00(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100 [200];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  if (((DAT_180ca0020 != (longlong *)0x0) ||
      (((hModule = GetModuleHandleA("particles.dll"), hModule != (HMODULE)0x0 &&
        (pFVar1 = GetProcAddress(hModule,"CreateInterface"), pFVar1 != (FARPROC)0x0)) &&
       (DAT_180ca0020 = (longlong *)(*pFVar1)("ParticleSystemMgr003",0),
       DAT_180ca0020 != (longlong *)0x0)))) && (DAT_1809620a0 != (code *)0x0)) {
    local_198 = (longlong *)0x0;
    local_190 = 0;
    (**(code **)(*DAT_180ca0020 + 0x148))(DAT_180ca0020,&local_198,&local_190);
    if ((local_198 != (longlong *)0x0) && (*local_198 != 0)) {
      (*DAT_1809620a0)(param_1,param_2,0);
      local_188 = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      local_108 = 0;
      FUN_180540170(local_100,0,0xc0);
      local_188 = param_3;
      (**(code **)(*(longlong *)*local_198 + 8))((longlong *)*local_198,param_4,&local_188);
    }
  }
  return;
}



/* ===== 18007eb70 FUN_18007eb70 ===== */

void FUN_18007eb70(longlong *param_1,ulonglong param_2)

{
  if (DAT_1809620a8 != (code *)0x0) {
    (*DAT_1809620a8)(param_1,param_2,1);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2 & 0xffffffff);
  return;
}



/* ===== 18007ebb0 FUN_18007ebb0 ===== */

int * FUN_18007ebb0(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  piVar2 = (int *)FUN_18047e2c0(param_1,1,"wl.particle");
  puVar3 = DAT_180ccfae8;
  while( true ) {
    if (puVar3 == DAT_180ccfaf0) {
      return (int *)0x0;
    }
    piVar1 = (int *)*puVar3;
    if (*piVar1 == *piVar2) break;
    puVar3 = puVar3 + 1;
  }
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar4 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  if (*(longlong *)(piVar1 + 2) != lVar4) {
    return (int *)0x0;
  }
  piVar2 = (int *)0x0;
  if (*(char *)((longlong)piVar1 + 0x41) == '\0') {
    piVar2 = piVar1;
  }
  return piVar2;
}



/* ===== 18007ec60 FUN_18007ec60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18007ec60(undefined8 param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *_Str;
  longlong lVar5;
  size_t sVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined1 auStack_e8 [32];
  int *local_c8 [2];
  int *local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_e8;
  _Str = (char *)FUN_18047e090(param_1,1,0);
  iVar4 = FUN_18047e470(param_1,2,8);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar5 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  uVar10 = 0;
  lVar8 = 0;
  plVar9 = DAT_180ccfae8;
  if (DAT_180ccfae8 != DAT_180ccfaf0) {
    do {
      lVar1 = *plVar9;
      if (((*(longlong *)(lVar1 + 8) == lVar5) && (*(char *)(lVar1 + 0x41) == '\0')) &&
         (uVar10 = uVar10 + 1, lVar8 == 0)) {
        lVar8 = lVar1;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != DAT_180ccfaf0);
    if ((0xff < uVar10) && (lVar8 != 0)) {
      local_a8 = 3;
      local_a4 = 0;
      local_a0 = 0;
      local_9c = 0;
      local_98 = 0;
      local_94 = 0;
      local_90 = 0;
      local_88 = 1;
      uStack_78 = 0;
      local_70 = 0;
      local_68 = 0xf;
      local_80 = 0;
      local_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      puVar2 = *(undefined4 **)(lVar8 + 0x58);
      if (puVar2 == *(undefined4 **)(lVar8 + 0x60)) {
        FUN_1800822d0(lVar8 + 0x50,puVar2,&local_a8);
      }
      else {
        *puVar2 = 3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        *(undefined8 *)(puVar2 + 6) = 0;
        puVar2[8] = 1;
        *(undefined8 *)(puVar2 + 10) = 0;
        *(undefined8 *)(puVar2 + 0xc) = 0;
        *(undefined8 *)(puVar2 + 0xe) = 0;
        *(undefined8 *)(puVar2 + 0x10) = 0;
        *(undefined8 *)(puVar2 + 10) = 0;
        *(undefined8 *)(puVar2 + 0xc) = 0;
        *(undefined8 *)(puVar2 + 0xe) = 0;
        *(undefined8 *)(puVar2 + 0x10) = 0xf;
        local_70 = 0;
        local_68 = 0xf;
        local_80 = 0;
        uStack_50 = 0;
        local_58 = 0;
        local_60 = 0;
        *(undefined8 *)(puVar2 + 0x12) = 0;
        *(undefined8 *)(puVar2 + 0x14) = 0;
        *(undefined8 *)(puVar2 + 0x16) = 0;
        *(longlong *)(lVar8 + 0x58) = *(longlong *)(lVar8 + 0x58) + 0x60;
        local_b8 = puVar2;
      }
      FUN_180011610(&local_60);
      FUN_18000f890(&local_80);
    }
  }
  FUN_1800811b0(local_c8);
  iVar3 = DAT_180962df8 + 1;
  *local_c8[0] = DAT_180962df8;
  DAT_180962df8 = iVar3;
  *(longlong *)(local_c8[0] + 2) = lVar5;
  sVar6 = strlen(_Str);
  uVar11 = FUN_180029840(local_c8[0] + 4,_Str,sVar6);
  piVar7 = local_c8[0];
  local_c8[0][0xc] = iVar4;
  iVar4 = *local_c8[0];
  if (DAT_180ccfaf0 == DAT_180ccfaf8) {
    FUN_180082050(uVar11,DAT_180ccfaf0,local_c8);
  }
  else {
    local_c8[0] = (int *)0x0;
    *DAT_180ccfaf0 = (longlong)piVar7;
    DAT_180ccfaf0 = DAT_180ccfaf0 + 1;
  }
  piVar7 = (int *)FUN_18047efb0(param_1,4);
  *piVar7 = iVar4;
  FUN_18047eb70(param_1,0xffffd8f0,"wl.particle");
  FUN_18047f990(param_1,0xfffffffe);
  piVar7 = local_c8[0];
  if (local_c8[0] != (int *)0x0) {
    local_b8 = local_c8[0];
    FUN_180081d30(local_c8[0] + 0x14);
    FUN_18000f890(piVar7 + 4);
    thunk_FUN_1803d64e0(piVar7,0x68);
  }
  return 1;
}



/* ===== 18007ef40 FUN_18007ef40 ===== */

void FUN_18007ef40(longlong param_1)

{
  FUN_180011610(param_1 + 0x48);
  FUN_18000f890(param_1 + 0x28);
  return;
}



/* ===== 18007ef70 FUN_18007ef70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18007ef70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [48];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar1 = FUN_18047e090(param_1,1,0);
  FUN_180013350(local_38,uVar1);
  FUN_1800816a0();
  FUN_18000f890(local_38);
  return 0;
}



/* ===== 18007efd0 FUN_18007efd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_18007efd0(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 ******ppppppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 ******ppppppuVar12;
  char ******ppppppcVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *puVar17;
  undefined8 *_Buf1;
  char *pcVar18;
  ulonglong uVar19;
  char ******ppppppcVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  char ******ppppppcVar23;
  undefined8 *puVar24;
  size_t sVar25;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [40];
  undefined4 local_2a8;
  undefined8 local_288 [6];
  undefined1 *local_258;
  undefined8 local_250;
  longlong local_248 [2];
  byte abStack_238 [56];
  longlong alStack_200 [25];
  undefined1 local_138;
  undefined7 uStack_137;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  char ******local_f8 [2];
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 ******local_d8 [2];
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 ******local_b8;
  longlong lStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_2d8;
  local_2a8 = 0;
  uVar10 = FUN_18047e090(param_1,1,0);
  FUN_180013350(local_f8,uVar10);
  uVar9 = 2;
  uVar10 = FUN_18047e090(param_1,2,0);
  FUN_180013350(local_d8,uVar10);
  ppppppuVar16 = local_d8;
  if (0xf < local_c0) {
    ppppppuVar16 = local_d8[0];
  }
  if (((local_c8 < 2) ||
      (lVar15 = local_c8 + (longlong)ppppppuVar16,
      lVar11 = thunk_FUN_1804e92d0(ppppppuVar16,lVar15,&DAT_1806e0660,2), lVar11 == lVar15)) ||
     (lVar11 - (longlong)ppppppuVar16 == -1)) {
    ppppppuVar16 = local_d8;
    if (0xf < local_c0) {
      ppppppuVar16 = local_d8[0];
    }
    if (((local_c8 != 0) &&
        (lVar15 = local_c8 + (longlong)ppppppuVar16,
        lVar11 = thunk_FUN_1804e6c50(ppppppuVar16,lVar15,0x3a), lVar11 != lVar15)) &&
       (lVar11 - (longlong)ppppppuVar16 != -1)) goto LAB_18007f174;
    ppppppuVar16 = local_d8;
    if (0xf < local_c0) {
      ppppppuVar16 = local_d8[0];
    }
    if (((local_c8 != 0) &&
        (ppppppuVar2 = (undefined8 ******)(local_c8 + (longlong)ppppppuVar16),
        ppppppuVar12 = (undefined8 ******)thunk_FUN_1804e6c50(ppppppuVar16,ppppppuVar2,0x2f),
        ppppppuVar12 != ppppppuVar2)) && (ppppppuVar12 == ppppppuVar16)) goto LAB_18007f174;
    ppppppuVar16 = local_d8;
    if (0xf < local_c0) {
      ppppppuVar16 = local_d8[0];
    }
    if (((local_c8 != 0) &&
        (ppppppuVar2 = (undefined8 ******)(local_c8 + (longlong)ppppppuVar16),
        ppppppuVar12 = (undefined8 ******)thunk_FUN_1804e6c50(ppppppuVar16,ppppppuVar2,0x5c),
        ppppppuVar12 != ppppppuVar2)) && (ppppppuVar12 == ppppppuVar16)) goto LAB_18007f174;
    ppppppcVar13 = (char ******)local_f8;
    if (0xf < local_e0) {
      ppppppcVar13 = local_f8[0];
    }
    ppppppcVar13 = (char ******)((longlong)ppppppcVar13 + local_e8);
    ppppppcVar20 = (char ******)local_f8;
    ppppppcVar23 = local_f8[0];
    uVar19 = local_e8;
    uVar22 = local_e0;
    if (0xf < local_e0) {
      ppppppcVar20 = local_f8[0];
    }
    while( true ) {
      local_f8[0] = ppppppcVar23;
      local_e8 = uVar19;
      local_e0 = uVar22;
      if (ppppppcVar20 == ppppppcVar13) break;
      if (*(char *)ppppppcVar20 == '\\') {
        *(char *)ppppppcVar20 = '/';
      }
      ppppppcVar20 = (char ******)((longlong)ppppppcVar20 + 1);
      ppppppcVar23 = local_f8[0];
      uVar19 = local_e8;
      uVar22 = local_e0;
    }
    if (2 < uVar19) {
      uVar1 = uVar19 - 2;
      if (uVar19 < uVar1) goto LAB_18007f8a0;
      sVar25 = 2;
      if (uVar19 - uVar1 < 2) {
        sVar25 = uVar19 - uVar1;
      }
      ppppppcVar13 = (char ******)local_f8;
      if (0xf < uVar22) {
        ppppppcVar13 = ppppppcVar23;
      }
      iVar8 = memcmp((char *)((longlong)ppppppcVar13 + uVar1),&DAT_1806e4fb4,sVar25);
      if (iVar8 == 0) {
        if (1 < sVar25) {
          if (uVar19 < uVar1) goto LAB_18007f8a0;
          ppppppcVar13 = (char ******)local_f8;
          if (0xf < uVar22) {
            ppppppcVar13 = ppppppcVar23;
          }
          local_e8 = uVar1;
          *(char *)((longlong)ppppppcVar13 + uVar1) = '\0';
          uVar19 = local_e8;
          uVar22 = local_e0;
          ppppppcVar23 = local_f8[0];
        }
      }
    }
    if (4 < uVar19) {
      uVar1 = uVar19 - 5;
      if (uVar19 < uVar1) {
LAB_18007f8a0:
                    /* WARNING: Subroutine does not return */
        FUN_18002a1a0();
      }
      sVar25 = 5;
      if (uVar19 - uVar1 < 5) {
        sVar25 = uVar19 - uVar1;
      }
      ppppppcVar13 = (char ******)local_f8;
      if (0xf < uVar22) {
        ppppppcVar13 = ppppppcVar23;
      }
      iVar8 = memcmp((char *)((longlong)ppppppcVar13 + uVar1),".vpcf",sVar25);
      if ((iVar8 != 0) || (sVar25 < 5)) goto LAB_18007f83b;
      uVar10 = FUN_180013350(local_78,"C:\\neverlose\\scripts\\particles");
      uVar10 = FUN_180042850(local_98,uVar10,&DAT_1806e067c);
      ppppppuVar16 = local_d8;
      if (0xf < local_c0) {
        ppppppuVar16 = local_d8[0];
      }
      plVar14 = (longlong *)FUN_1800134a0(uVar10,ppppppuVar16,local_c8);
      local_b8 = (undefined8 ******)*plVar14;
      lStack_b0 = plVar14[1];
      local_a8 = plVar14[2];
      uStack_a0 = plVar14[3];
      plVar14[2] = 0;
      plVar14[3] = 0xf;
      *(undefined1 *)plVar14 = 0;
      local_2a8 = 1;
      ppppppuVar16 = &local_b8;
      if (0xf < uStack_a0) {
        ppppppuVar16 = local_b8;
      }
      FUN_1800695d0(local_248,ppppppuVar16,0x20);
      *(undefined ***)((longlong)local_248 + (longlong)*(int *)(local_248[0] + 4)) =
           std::basic_ifstream<char,std::char_traits<char>_>::vftable;
      *(int *)((longlong)local_248 + (longlong)*(int *)(local_248[0] + 4) + -4) =
           *(int *)(local_248[0] + 4) + -0xb0;
      local_2a8 = 0;
      if (uStack_a0 < 0x10) {
LAB_18007f3f9:
        local_a8 = 0;
        uStack_a0 = 0xf;
        local_b8 = (undefined8 ******)((ulonglong)local_b8 & 0xffffffffffffff00);
        FUN_18000f890(local_98);
        FUN_18000f890(local_78);
        puVar21 = auStack_2d8;
        lVar15 = (longlong)*(int *)(local_248[0] + 4);
        if ((abStack_238[lVar15] & 6) == 0) goto LAB_18007f45e;
        FUN_18047f4d0(param_1);
        FUN_18047f530(param_1,"cannot read the file");
        puVar21 = auStack_2d8;
      }
      else {
        uVar19 = uStack_a0 + 1;
        ppppppuVar16 = local_b8;
        if (uVar19 < 0x1000) {
LAB_18007f3f4:
          thunk_FUN_1803d64e0(ppppppuVar16,uVar19);
          goto LAB_18007f3f9;
        }
        ppppppuVar16 = (undefined8 ******)local_b8[-1];
        if ((ulonglong)((longlong)local_b8 + (-8 - (longlong)ppppppuVar16)) < 0x20) {
          uVar19 = uStack_a0 + 0x28;
          goto LAB_18007f3f4;
        }
        pcVar5 = (code *)swi(0x29);
        lVar15 = (*pcVar5)(5);
        puVar21 = auStack_2d0;
LAB_18007f45e:
        lVar15 = *(longlong *)((longlong)alStack_200 + lVar15);
        *(undefined8 *)(puVar21 + 0x50) = 0;
        *(undefined8 *)(puVar21 + 0x58) = 0;
        *(undefined8 *)(puVar21 + 0x60) = 0;
        *(longlong *)(puVar21 + 0x40) = lVar15;
        puVar21[0x48] = lVar15 == 0;
        puVar21[0x49] = 0;
        *(undefined4 *)(puVar21 + 0x4a) = *(undefined4 *)(puVar21 + 0x4a);
        *(undefined2 *)(puVar21 + 0x4e) = *(undefined2 *)(puVar21 + 0x4e);
        *(undefined8 *)(puVar21 + 0x70) = 0;
        *(undefined2 *)(puVar21 + 0x78) = 1;
        *(undefined4 *)(puVar21 + 0x7a) = *(undefined4 *)(puVar21 + 0x4a);
        *(undefined2 *)(puVar21 + 0x7e) = *(undefined2 *)(puVar21 + 0x4e);
        local_258 = puVar21 + 0x50;
        *(undefined4 *)(puVar21 + 0x70) = *(undefined4 *)(puVar21 + 0x70);
        *(undefined4 *)(puVar21 + 0x74) = *(undefined4 *)(puVar21 + 0x74);
        *(undefined4 *)(puVar21 + 0x78) = *(undefined4 *)(puVar21 + 0x78);
        *(undefined4 *)(puVar21 + 0x7c) = *(undefined4 *)(puVar21 + 0x7c);
        *(undefined4 *)(puVar21 + 0x40) = *(undefined4 *)(puVar21 + 0x40);
        *(undefined4 *)(puVar21 + 0x44) = *(undefined4 *)(puVar21 + 0x44);
        *(undefined4 *)(puVar21 + 0x48) = *(undefined4 *)(puVar21 + 0x48);
        *(undefined4 *)(puVar21 + 0x4c) = *(undefined4 *)(puVar21 + 0x4c);
        *(undefined8 *)(puVar21 + -8) = 0x18007f4e6;
        FUN_1800817f0(puVar21 + 0x50,puVar21 + 0x40,puVar21 + 0x70);
        local_258 = (undefined1 *)0x0;
        if ((*(longlong *)(puVar21 + 0x50) == *(longlong *)(puVar21 + 0x58)) ||
           (0x1000000 < (ulonglong)(*(longlong *)(puVar21 + 0x58) - *(longlong *)(puVar21 + 0x50))))
        {
          *(undefined8 *)(puVar21 + -8) = 0x18007f7d1;
          FUN_18047f4d0(param_1);
          *(undefined8 *)(puVar21 + -8) = 0x18007f7e0;
          FUN_18047f530(param_1,"empty or too big");
        }
        else {
          *(undefined8 *)(puVar21 + -8) = 0x18007f520;
          FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
          *(undefined8 *)(puVar21 + -8) = 0x18007f52d;
          local_258 = (undefined1 *)FUN_18047fd90(param_1,0xffffffff);
          *(undefined8 *)(puVar21 + -8) = 0x18007f53e;
          FUN_18047fb50(param_1,0xfffffffe);
          local_250 = &DAT_180963470;
          *(undefined8 *)(puVar21 + -8) = 0x18007f551;
          iVar8 = FUN_1804e4d70(&DAT_180963470);
          uVar22 = local_e0;
          uVar19 = local_e8;
          ppppppcVar13 = local_f8[0];
          puVar7 = DAT_180ccfb08;
          if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar21 + -8) = &UNK_18007f8b0;
            FUN_1804e4a90(5);
          }
          if (DAT_1809634bc == 0x7fffffff) {
            DAT_1809634bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar21 + -8) = 0x18007f89f;
            FUN_1804e4a90(6);
          }
          puVar24 = DAT_180ccfb00;
          if (DAT_180ccfb00 != DAT_180ccfb08) {
            do {
              ppppppcVar20 = (char ******)local_f8;
              if (0xf < uVar22) {
                ppppppcVar20 = ppppppcVar13;
              }
              sVar25 = puVar24[2];
              if ((ulonglong)puVar24[3] < 0x10) {
                puVar17 = puVar24;
              }
              else {
                puVar17 = (undefined8 *)*puVar24;
              }
              if (sVar25 == uVar19) {
                if (sVar25 == 0) break;
                *(undefined8 *)(puVar21 + -8) = 0x18007f5d1;
                iVar8 = memcmp(puVar17,ppppppcVar20,sVar25);
                if (iVar8 == 0) break;
              }
              puVar24 = puVar24 + 8;
            } while (puVar24 != puVar7);
            puVar17 = puVar24;
            if (puVar24 != puVar7) {
joined_r0x00018007f5ee:
              puVar6 = puVar17;
              puVar17 = puVar6 + 8;
              if (puVar17 != puVar7) {
                ppppppcVar20 = (char ******)local_f8;
                if (0xf < uVar22) {
                  ppppppcVar20 = ppppppcVar13;
                }
                sVar25 = puVar6[10];
                if ((ulonglong)puVar6[0xb] < 0x10) {
                  _Buf1 = puVar17;
                }
                else {
                  _Buf1 = (undefined8 *)*puVar17;
                }
                if (sVar25 == uVar19) goto code_r0x00018007f617;
                goto LAB_18007f625;
              }
            }
          }
          *(undefined8 *)(puVar21 + -8) = 0x18007f67e;
          FUN_1800813c0();
          *(undefined8 *)(puVar21 + -8) = 0x18007f691;
          FUN_180024b50(&local_138,local_f8);
          puVar7 = DAT_180ccfb08;
          uVar10 = *(undefined8 *)(puVar21 + 0x60);
          *(undefined8 *)(puVar21 + 0x60) = 0;
          uVar3 = *(undefined8 *)(puVar21 + 0x58);
          *(undefined8 *)(puVar21 + 0x58) = 0;
          uVar4 = *(undefined8 *)(puVar21 + 0x50);
          *(undefined8 *)(puVar21 + 0x50) = 0;
          local_100 = local_258;
          if (DAT_180ccfb08 == DAT_180ccfb10) {
            *(undefined8 *)(puVar21 + -8) = 0x18007f779;
            local_118 = uVar4;
            local_110 = uVar3;
            local_108 = uVar10;
            FUN_180081e00(uVar10,DAT_180ccfb08,&local_138);
          }
          else {
            *(undefined8 **)(puVar21 + 0x70) = DAT_180ccfb08;
            *DAT_180ccfb08 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            *puVar7 = CONCAT71(uStack_137,local_138);
            puVar7[1] = local_130;
            puVar7[2] = local_128;
            puVar7[3] = local_120;
            local_128 = 0;
            local_120 = 0xf;
            local_138 = 0;
            local_108 = 0;
            local_110 = 0;
            local_118 = 0;
            puVar7[4] = uVar4;
            puVar7[5] = uVar3;
            puVar7[6] = uVar10;
            puVar7[7] = local_258;
            DAT_180ccfb08 = DAT_180ccfb08 + 8;
          }
          *(undefined8 *)(puVar21 + -8) = 0x18007f786;
          FUN_180081c30(&local_118);
          *(undefined8 *)(puVar21 + -8) = 0x18007f793;
          FUN_18000f890(&local_138);
          LOCK();
          DAT_180ccfae0 = (undefined4)((longlong)DAT_180ccfb08 - (longlong)DAT_180ccfb00 >> 6);
          UNLOCK();
          *(undefined8 *)(puVar21 + -8) = 0x18007f7b4;
          FUN_1804e4e90(&DAT_180963470);
          *(undefined8 *)(puVar21 + -8) = 0x18007f7c1;
          FUN_18047f270(param_1,1);
          uVar9 = 1;
        }
        lVar15 = *(longlong *)(puVar21 + 0x50);
        if (lVar15 != 0) {
          if ((ulonglong)(*(longlong *)(puVar21 + 0x60) - lVar15) < 0x1000) {
LAB_18007f81a:
            lVar11 = lVar15;
          }
          else {
            lVar11 = *(longlong *)(lVar15 + -8);
            if (0x1f < (lVar15 - lVar11) - 8U) {
              pcVar5 = (code *)swi(0x29);
              lVar15 = (*pcVar5)(5);
              puVar21 = puVar21 + 8;
              goto LAB_18007f81a;
            }
          }
          *(undefined8 *)(puVar21 + -8) = 0x18007f822;
          thunk_FUN_1803d64e0(lVar11);
          *(undefined8 *)(puVar21 + 0x50) = 0;
          *(undefined8 *)(puVar21 + 0x58) = 0;
          *(undefined8 *)(puVar21 + 0x60) = 0;
        }
      }
      *(undefined8 *)(puVar21 + -8) = 0x18007f839;
      FUN_18005e2f0(local_248);
      goto LAB_18007f84d;
    }
LAB_18007f83b:
    pcVar18 = "particle.override: the game path must end in .vpcf";
  }
  else {
LAB_18007f174:
    pcVar18 = "particle.override: bad file name";
  }
  uVar9 = FUN_180484c10(param_1,pcVar18);
  puVar21 = auStack_2d8;
LAB_18007f84d:
  *(undefined8 *)(puVar21 + -8) = 0x18007f859;
  FUN_18000f890(local_d8);
  *(undefined8 *)(puVar21 + -8) = 0x18007f866;
  FUN_18000f890(local_f8);
  *(undefined8 *)(puVar21 + -8) = 0x18007f879;
  return uVar9;
code_r0x00018007f617:
  if (sVar25 != 0) {
    *(undefined8 *)(puVar21 + -8) = 0x18007f621;
    iVar8 = memcmp(_Buf1,ppppppcVar20,sVar25);
    if (iVar8 != 0) {
LAB_18007f625:
      *(undefined8 *)(puVar21 + -8) = 0x18007f630;
      FUN_18002ba60(puVar24,puVar17);
      *(undefined8 *)(puVar21 + -8) = 0x18007f63d;
      FUN_180081c90(puVar24 + 4,puVar6 + 0xc);
      puVar24[7] = puVar6[0xf];
      puVar24 = puVar24 + 8;
      ppppppcVar13 = local_f8[0];
      uVar19 = local_e8;
      uVar22 = local_e0;
    }
  }
  goto joined_r0x00018007f5ee;
}



/* ===== 18007f8c0 FUN_18007f8c0 ===== */

void FUN_18007f8c0(longlong param_1)

{
  FUN_180081c30(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 18007f8f0 FUN_18007f8f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18007f8f0(undefined8 param_1)

{
  undefined4 *puVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  ulonglong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_f8;
  lVar5 = FUN_18007ebb0();
  if (lVar5 == 0) {
    FUN_180484c10(param_1,"this particle is gone");
  }
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 1;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0xf;
  local_a0 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_c8 = 0;
  uVar3 = FUN_18047e010(param_1,2);
  if (0x3f < uVar3) {
    FUN_180484c10(param_1,"control point %d out of 0..%d",uVar3,0x3f);
  }
  local_c8 = CONCAT44(uVar3,(undefined4)local_c8);
  iVar4 = FUN_18047fe10(param_1,3);
  if (iVar4 == 5) {
    pfVar6 = (float *)FUN_180063d70(local_d8,param_1,3);
    fVar8 = *pfVar6;
    fVar9 = pfVar6[1];
    local_c0 = *(undefined8 *)pfVar6;
    fVar7 = pfVar6[2];
  }
  else {
    dVar2 = (double)FUN_18047e140(param_1,3);
    fVar8 = (float)dVar2;
    dVar2 = (double)FUN_18047e5f0(param_1,4,0);
    fVar9 = (float)dVar2;
    local_c0 = CONCAT44(fVar9,fVar8);
    dVar2 = (double)FUN_18047e5f0(param_1,5,0);
    fVar7 = (float)dVar2;
  }
  local_b8 = CONCAT44(local_b8._4_4_,fVar7);
  puVar1 = *(undefined4 **)(lVar5 + 0x58);
  if (puVar1 == *(undefined4 **)(lVar5 + 0x60)) {
    FUN_1800822d0(lVar5 + 0x50,puVar1,&local_c8);
  }
  else {
    *puVar1 = 0;
    puVar1[1] = uVar3;
    puVar1[2] = fVar8;
    puVar1[3] = fVar9;
    puVar1[4] = fVar7;
    *(undefined8 *)(puVar1 + 6) = 0;
    puVar1[8] = 1;
    *(undefined8 *)(puVar1 + 10) = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(ulonglong *)(puVar1 + 10) = local_a0;
    *(undefined8 *)(puVar1 + 0xc) = uStack_98;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0xf;
    local_90 = 0;
    local_88 = 0xf;
    local_a0 = local_a0 & 0xffffffffffffff00;
    uStack_70 = 0;
    local_78 = 0;
    local_80 = 0;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    *(undefined8 *)(puVar1 + 0x14) = 0;
    *(undefined8 *)(puVar1 + 0x16) = 0;
    *(longlong *)(lVar5 + 0x58) = *(longlong *)(lVar5 + 0x58) + 0x60;
    local_d8[0] = puVar1;
  }
  FUN_18047f610(param_1,1);
  FUN_180011610(&local_80);
  FUN_18000f890(&local_a0);
  return 1;
}



/* ===== 18007fb30 FUN_18007fb30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18007fb30(undefined8 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d8;
  lVar4 = FUN_18007ebb0();
  if (lVar4 == 0) {
    FUN_180484c10(param_1,"this particle is gone");
  }
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 1;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0xf;
  local_80 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_a8 = 0;
  uVar2 = FUN_18047e010(param_1,2);
  if (0x3f < uVar2) {
    FUN_180484c10(param_1,"control point %d out of 0..%d",uVar2,0x3f);
  }
  local_a8 = CONCAT44(uVar2,(undefined4)local_a8);
  uVar3 = FUN_180063eb0(param_1,3);
  fVar5 = (float)(uVar3 >> 8 & 0xff);
  local_a0 = CONCAT44(fVar5,(float)(uVar3 & 0xff));
  fVar6 = (float)(uVar3 >> 0x10 & 0xff);
  local_98 = CONCAT44(local_98._4_4_,fVar6);
  puVar1 = *(undefined4 **)(lVar4 + 0x58);
  if (puVar1 == *(undefined4 **)(lVar4 + 0x60)) {
    FUN_1800822d0(lVar4 + 0x50,puVar1,&local_a8);
  }
  else {
    *puVar1 = 0;
    puVar1[1] = uVar2;
    puVar1[2] = (float)(uVar3 & 0xff);
    puVar1[3] = fVar5;
    puVar1[4] = fVar6;
    *(undefined8 *)(puVar1 + 6) = 0;
    puVar1[8] = 1;
    *(undefined8 *)(puVar1 + 10) = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(ulonglong *)(puVar1 + 10) = local_80;
    *(undefined8 *)(puVar1 + 0xc) = uStack_78;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0xf;
    local_70 = 0;
    local_68 = 0xf;
    local_80 = local_80 & 0xffffffffffffff00;
    uStack_50 = 0;
    local_58 = 0;
    local_60 = 0;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    *(undefined8 *)(puVar1 + 0x14) = 0;
    *(undefined8 *)(puVar1 + 0x16) = 0;
    *(longlong *)(lVar4 + 0x58) = *(longlong *)(lVar4 + 0x58) + 0x60;
    local_b8 = puVar1;
  }
  FUN_18047f610(param_1,1);
  FUN_180011610(&local_60);
  FUN_18000f890(&local_80);
  return 1;
}



/* ===== 18007fd10 FUN_18007fd10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_18007fd10(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  char *_Str;
  size_t sVar9;
  double dVar10;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined4 local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d8;
  lVar8 = FUN_18007ebb0();
  if (lVar8 == 0) {
    FUN_180484c10(param_1,"this particle is gone");
  }
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uVar7 = 1;
  local_88 = 1;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0xf;
  local_80 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_a8 = 1;
  uVar5 = FUN_18047e010(param_1,2);
  if (0x3f < uVar5) {
    FUN_180484c10(param_1,"control point %d out of 0..%d",uVar5,0x3f);
  }
  local_a8 = CONCAT44(uVar5,(undefined4)local_a8);
  FUN_18047eb70(param_1,3,"address");
  iVar6 = FUN_18047fe10(param_1,0xffffffff);
  if (iVar6 == 6) {
    FUN_18047f610(param_1,3);
    FUN_18047e730(param_1,1,1);
    dVar10 = (double)FUN_18047fd30(param_1,0xffffffff);
    local_90 = 0;
    if ((DAT_1808acbe8 <= dVar10) && (dVar10 = dVar10 - DAT_1808acbe8, dVar10 < DAT_1808acbe8)) {
      local_90 = -0x8000000000000000;
    }
    local_90 = (longlong)dVar10 + local_90;
    FUN_18047fb50(param_1,0xfffffffe);
    local_88 = FUN_18047e470(param_1,4,1);
    iVar6 = FUN_18047ee00(param_1,5);
    if (iVar6 != 0) {
      _Str = (char *)FUN_18047fc70(param_1,5,0);
      sVar9 = strlen(_Str);
      FUN_180029840(&local_80,_Str,sVar9);
    }
    uVar4 = uStack_50;
    uVar3 = local_58;
    uVar2 = local_60;
    puVar1 = *(undefined4 **)(lVar8 + 0x58);
    if (puVar1 == *(undefined4 **)(lVar8 + 0x60)) {
      FUN_1800822d0(lVar8 + 0x50,puVar1,&local_a8);
    }
    else {
      *puVar1 = (undefined4)local_a8;
      puVar1[1] = local_a8._4_4_;
      puVar1[2] = (undefined4)local_a0;
      puVar1[3] = local_a0._4_4_;
      puVar1[4] = (undefined4)local_98;
      *(longlong *)(puVar1 + 6) = local_90;
      puVar1[8] = local_88;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(ulonglong *)(puVar1 + 10) = local_80;
      *(undefined8 *)(puVar1 + 0xc) = uStack_78;
      *(undefined8 *)(puVar1 + 0xe) = local_70;
      *(undefined8 *)(puVar1 + 0x10) = local_68;
      local_70 = 0;
      local_68 = 0xf;
      local_80 = local_80 & 0xffffffffffffff00;
      uStack_50 = 0;
      local_58 = 0;
      local_60 = 0;
      *(undefined8 *)(puVar1 + 0x12) = uVar2;
      *(undefined8 *)(puVar1 + 0x14) = uVar3;
      *(undefined8 *)(puVar1 + 0x16) = uVar4;
      *(longlong *)(lVar8 + 0x58) = *(longlong *)(lVar8 + 0x58) + 0x60;
      local_b8 = puVar1;
    }
    FUN_18047f610(param_1,1);
  }
  else {
    uVar7 = FUN_180484c10(param_1,":bind needs an entity");
  }
  FUN_180011610(&local_60);
  FUN_18000f890(&local_80);
  return uVar7;
}



/* ===== 18007ffc0 FUN_18007ffc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_18007ffc0(undefined8 param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_d8;
  lVar8 = FUN_18007ebb0();
  if (lVar8 == 0) {
    FUN_180484c10(param_1,"this particle is gone");
  }
  FUN_18047e240(param_1,2,5);
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uVar7 = 1;
  local_78 = 1;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0xf;
  local_70 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_98 = 2;
  iVar5 = FUN_18047f0e0(param_1,2);
  if (0x100 < iVar5) {
    iVar5 = 0x100;
  }
  iVar10 = 1;
  if (0 < iVar5) {
    do {
      FUN_18047f6f0(param_1,2,iVar10);
      uVar6 = FUN_18047ed40(param_1);
      plVar9 = (longlong *)FUN_180063d70(local_a8,param_1,uVar6);
      local_b8 = (undefined4 *)*plVar9;
      local_b0 = (undefined4)plVar9[1];
      FUN_180081aa0(&local_50,&local_b8);
      FUN_18047fb50(param_1,0xfffffffe);
      iVar10 = iVar10 + 1;
    } while (iVar10 <= iVar5);
  }
  uVar4 = uStack_40;
  lVar3 = local_48;
  lVar2 = local_50;
  if ((ulonglong)((local_48 - local_50 >> 2) * -0x5555555555555555) < 2) {
    uVar7 = FUN_180484c10(param_1,":path needs two points or more");
  }
  else {
    puVar1 = *(undefined4 **)(lVar8 + 0x58);
    if (puVar1 == *(undefined4 **)(lVar8 + 0x60)) {
      FUN_1800822d0(lVar8 + 0x50,puVar1,&local_98);
    }
    else {
      *puVar1 = (undefined4)local_98;
      puVar1[1] = local_98._4_4_;
      puVar1[2] = (undefined4)local_90;
      puVar1[3] = local_90._4_4_;
      puVar1[4] = (undefined4)local_88;
      *(undefined8 *)(puVar1 + 6) = local_80;
      puVar1[8] = local_78;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(ulonglong *)(puVar1 + 10) = local_70;
      *(undefined8 *)(puVar1 + 0xc) = uStack_68;
      *(undefined8 *)(puVar1 + 0xe) = local_60;
      *(undefined8 *)(puVar1 + 0x10) = local_58;
      local_60 = 0;
      local_58 = 0xf;
      local_70 = local_70 & 0xffffffffffffff00;
      uStack_40 = 0;
      local_48 = 0;
      local_50 = 0;
      *(longlong *)(puVar1 + 0x12) = lVar2;
      *(longlong *)(puVar1 + 0x14) = lVar3;
      *(undefined8 *)(puVar1 + 0x16) = uVar4;
      *(longlong *)(lVar8 + 0x58) = *(longlong *)(lVar8 + 0x58) + 0x60;
      local_b8 = puVar1;
    }
    FUN_18047f610(param_1,1);
  }
  FUN_180011610(&local_50);
  FUN_18000f890(&local_70);
  return uVar7;
}



/* ===== 180080240 FUN_180080240 ===== */

undefined8 FUN_180080240(undefined8 param_1)

{
  longlong lVar1;
  double dVar2;
  LARGE_INTEGER local_res10 [3];
  
  lVar1 = FUN_18007ebb0();
  if (lVar1 == 0) {
    FUN_180484c10(param_1,"this particle is gone");
  }
  dVar2 = (double)FUN_18047e140(param_1,2);
  if (dVar2 <= 0.0) {
    dVar2 = DAT_1808acdb8;
  }
  else {
    if (DAT_180ca0018 == 0) {
      QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_180ca0018);
    }
    local_res10[0].QuadPart = 0;
    QueryPerformanceCounter(local_res10);
    dVar2 = (double)local_res10[0].QuadPart / (double)DAT_180ca0018 + dVar2;
  }
  *(double *)(lVar1 + 0x48) = dVar2;
  FUN_18047f610(param_1,1);
  return 1;
}



/* ===== 180080310 FUN_180080310 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180080310(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_18007ebb0();
  if (lVar2 != 0) {
    local_78 = 3;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_58 = 1;
    uStack_48 = 0;
    local_40 = 0;
    local_38 = 0xf;
    local_50 = 0;
    local_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    puVar1 = *(undefined4 **)(lVar2 + 0x58);
    if (puVar1 == *(undefined4 **)(lVar2 + 0x60)) {
      FUN_1800822d0(lVar2 + 0x50,puVar1,&local_78);
    }
    else {
      *puVar1 = 3;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1[8] = 1;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0xf;
      local_40 = 0;
      local_38 = 0xf;
      local_50 = 0;
      uStack_20 = 0;
      local_28 = 0;
      local_30 = 0;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      *(undefined8 *)(puVar1 + 0x14) = 0;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      *(longlong *)(lVar2 + 0x58) = *(longlong *)(lVar2 + 0x58) + 0x60;
      local_88 = puVar1;
    }
    FUN_180011610(&local_30);
    FUN_18000f890(&local_50);
  }
  return 0;
}



/* ===== 180080460 FUN_180080460 ===== */

undefined8 FUN_180080460(undefined8 param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = FUN_18007ebb0();
  if (lVar1 != 0) {
    for (piVar2 = *(int **)(lVar1 + 0x50); piVar2 != *(int **)(lVar1 + 0x58); piVar2 = piVar2 + 0x18
        ) {
      if (*piVar2 == 3) goto LAB_1800804ab;
    }
    if (lVar1 != 0) {
      FUN_18047f270(param_1,1);
      return 1;
    }
  }
LAB_1800804ab:
  FUN_18047f270(param_1,0);
  return 1;
}



/* ===== 1800804c0 FUN_1800804c0 ===== */

undefined8 FUN_1800804c0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18007ebb0();
  if (((lVar1 == 0) || (*(char *)(lVar1 + 0x40) == '\0')) || (*(int *)(lVar1 + 0x34) == -1)) {
    return 0;
  }
  FUN_18047f3d0(param_1);
  return 1;
}



/* ===== 180080500 FUN_180080500 ===== */

void FUN_180080500(longlong param_1)

{
  char **ppcVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *local_98;
  code *local_90;
  char *local_88;
  code *local_80;
  undefined *local_78;
  code *local_70;
  undefined1 *local_68;
  code *local_60;
  char *local_58;
  code *local_50;
  char *local_48;
  code *local_40;
  char *local_38;
  code *local_30;
  char *local_28;
  code *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  FUN_18047e380(uVar2,"wl.particle");
  FUN_18047e8f0(uVar2,0,0);
  local_98 = "set_point";
  ppcVar3 = &local_98;
  local_90 = FUN_18007f8f0;
  local_88 = "set_color";
  local_80 = FUN_18007fb30;
  local_78 = &DAT_1806e5064;
  local_70 = FUN_18007fd10;
  local_68 = &DAT_1806e506c;
  local_60 = FUN_18007ffc0;
  local_58 = "lifetime";
  local_50 = FUN_180080240;
  local_48 = "destroy";
  local_40 = FUN_180080310;
  local_38 = "valid";
  local_30 = FUN_180080460;
  local_28 = "index";
  local_20 = FUN_1800804c0;
  local_18 = 0;
  local_10 = 0;
  do {
    FUN_18047f2b0(uVar2,ppcVar3[1],0);
    FUN_18047f8e0(uVar2,0xfffffffe);
    ppcVar1 = ppcVar3 + 2;
    ppcVar3 = ppcVar3 + 2;
  } while (*ppcVar1 != (char *)0x0);
  FUN_18047f8e0(uVar2,0xfffffffe,"__index");
  FUN_18047fb50(uVar2,0xfffffffe);
  FUN_18047e8f0(uVar2,0,0);
  FUN_18047f2b0(uVar2,FUN_18007ec60,0);
  FUN_18047f8e0(uVar2,0xfffffffe,"create");
  FUN_18047f2b0(uVar2,FUN_18007ef70,0);
  FUN_18047f8e0(uVar2,0xfffffffe,"precache");
  FUN_18047f2b0(uVar2,FUN_18007efd0,0);
  FUN_18047f8e0(uVar2,0xfffffffe,"override");
  FUN_18047e8f0(uVar2,0,0);
  FUN_18047f3d0(uVar2,0);
  FUN_18047f8e0(uVar2,0xfffffffe,"absorigin");
  FUN_18047f3d0(uVar2,1);
  FUN_18047f8e0(uVar2,0xfffffffe,"absorigin_follow");
  FUN_18047f3d0(uVar2,2);
  FUN_18047f8e0(uVar2,0xfffffffe,"customorigin");
  FUN_18047f3d0(uVar2,3);
  FUN_18047f8e0(uVar2,0xfffffffe,"customorigin_follow");
  FUN_18047f3d0(uVar2,4);
  FUN_18047f8e0(uVar2,0xfffffffe,"point");
  FUN_18047f3d0(uVar2,5);
  FUN_18047f8e0(uVar2,0xfffffffe,"point_follow");
  FUN_18047f3d0(uVar2,6);
  FUN_18047f8e0(uVar2,0xfffffffe,"eyes_follow");
  FUN_18047f3d0(uVar2,7);
  FUN_18047f8e0(uVar2,0xfffffffe,"overhead_follow");
  FUN_18047f3d0(uVar2,8);
  FUN_18047f8e0(uVar2,0xfffffffe,"worldorigin");
  FUN_18047f3d0(uVar2,9);
  FUN_18047f8e0(uVar2,0xfffffffe,"rootbone_follow");
  FUN_18047f8e0(uVar2,0xfffffffe,"attach");
  FUN_18047f8e0(uVar2,0xffffd8ee,"particle");
  return;
}



/* ===== 180080870 FUN_180080870 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180080870(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  plVar5 = DAT_180ccfaf0;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_e8;
  for (plVar7 = DAT_180ccfae8; plVar7 != plVar5; plVar7 = plVar7 + 1) {
    if (*(longlong *)(*plVar7 + 8) == param_1) {
      *(undefined8 *)(*plVar7 + 8) = 0;
      lVar1 = *plVar7;
      if (*(char *)(lVar1 + 0x41) == '\0') {
        local_b8 = 3;
        local_b4 = 0;
        local_b0 = 0;
        local_ac = 0;
        local_a8 = 0;
        local_a4 = 0;
        local_a0 = 0;
        local_98 = 1;
        uStack_88 = 0;
        local_80 = 0;
        local_78 = 0xf;
        local_90 = 0;
        local_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        puVar2 = *(undefined4 **)(lVar1 + 0x58);
        if (puVar2 == *(undefined4 **)(lVar1 + 0x60)) {
          FUN_1800822d0(lVar1 + 0x50,puVar2,&local_b8);
        }
        else {
          *puVar2 = 3;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          *(undefined8 *)(puVar2 + 6) = 0;
          puVar2[8] = 1;
          *(undefined8 *)(puVar2 + 10) = 0;
          *(undefined8 *)(puVar2 + 0xc) = 0;
          *(undefined8 *)(puVar2 + 0xe) = 0;
          *(undefined8 *)(puVar2 + 0x10) = 0;
          *(undefined8 *)(puVar2 + 10) = 0;
          *(undefined8 *)(puVar2 + 0xc) = 0;
          *(undefined8 *)(puVar2 + 0xe) = 0;
          *(undefined8 *)(puVar2 + 0x10) = 0xf;
          local_80 = 0;
          local_78 = 0xf;
          local_90 = 0;
          uStack_60 = 0;
          local_68 = 0;
          local_70 = 0;
          *(undefined8 *)(puVar2 + 0x12) = 0;
          *(undefined8 *)(puVar2 + 0x14) = 0;
          *(undefined8 *)(puVar2 + 0x16) = 0;
          *(longlong *)(lVar1 + 0x58) = *(longlong *)(lVar1 + 0x58) + 0x60;
          local_c8 = puVar2;
        }
        FUN_180011610(&local_70);
        FUN_18000f890(&local_90);
      }
    }
  }
  local_c0 = &DAT_180963470;
  iVar6 = FUN_1804e4d70(&DAT_180963470);
  lVar1 = DAT_180ccfb08;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809634bc == 0x7fffffff) {
    DAT_1809634bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar8 = DAT_180ccfb00;
  uVar9 = extraout_XMM0_Da;
  if (DAT_180ccfb00 != DAT_180ccfb08) {
    do {
      if (*(longlong *)(lVar8 + 0x38) == param_1) break;
      lVar8 = lVar8 + 0x40;
    } while (lVar8 != DAT_180ccfb08);
    lVar3 = lVar8;
    if (lVar8 != DAT_180ccfb08) {
      while (lVar4 = lVar3, lVar3 = lVar4 + 0x40, lVar3 != lVar1) {
        if (*(longlong *)(lVar4 + 0x78) != param_1) {
          FUN_18002ba60(lVar8,lVar3);
          uVar9 = FUN_180081c90(lVar8 + 0x20,lVar4 + 0x60);
          *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(lVar4 + 0x78);
          lVar8 = lVar8 + 0x40;
        }
      }
    }
  }
  FUN_1800813c0(uVar9,&local_c8,lVar8,lVar1);
  LOCK();
  DAT_180ccfae0 = (undefined4)(DAT_180ccfb08 - DAT_180ccfb00 >> 6);
  UNLOCK();
  FUN_1804e4e90(&DAT_180963470);
  return;
}



/* ===== 180080af0 FUN_180080af0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180080af0(void)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  double dVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int *piVar12;
  longlong *plVar13;
  LARGE_INTEGER LVar14;
  LARGE_INTEGER LVar15;
  double dVar16;
  double extraout_XMM0_Qa;
  undefined8 uVar17;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined4 local_c8;
  LARGE_INTEGER local_c0;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined1 local_98 [32];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_108;
  local_c8 = 0;
  plVar13 = (longlong *)*DAT_180ca0d30;
  if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
    do {
      if ((ulonglong)plVar13[7] < 0x10) {
        plVar10 = plVar13 + 4;
      }
      else {
        plVar10 = (longlong *)plVar13[4];
      }
      FUN_1802080c0(plVar10);
      FUN_180081270(&DAT_180ca0d40,local_b8,plVar13 + 4);
      plVar10 = (longlong *)plVar13[2];
      if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
        cVar7 = *(char *)(*plVar10 + 0x19);
        plVar13 = plVar10;
        while (cVar7 == '\0') {
          plVar13 = (longlong *)*plVar13;
          cVar7 = *(char *)(*plVar13 + 0x19);
        }
      }
      else {
        cVar7 = *(char *)(plVar13[1] + 0x19);
        plVar11 = (longlong *)plVar13[1];
        plVar10 = plVar13;
        while ((plVar13 = plVar11, cVar7 == '\0' && (plVar10 == (longlong *)plVar13[2]))) {
          cVar7 = *(char *)(plVar13[1] + 0x19);
          plVar11 = (longlong *)plVar13[1];
          plVar10 = plVar13;
        }
      }
    } while (*(char *)((longlong)plVar13 + 0x19) == '\0');
  }
  plVar13 = DAT_180ca0d30;
  FUN_1800819d0(&DAT_180ca0d30,&DAT_180ca0d30,DAT_180ca0d30[1]);
  plVar13[1] = (longlong)plVar13;
  *plVar13 = (longlong)plVar13;
  plVar13[2] = (longlong)plVar13;
  DAT_180ca0d38 = 0;
  if (DAT_180ccfae8 != (longlong *)DAT_180ccfaf0.QuadPart) {
    if (((DAT_180962080 == 0) || (DAT_180962088 == 0)) || (DAT_180962090 == 0)) {
      lVar9 = 0;
    }
    else {
      lVar9 = FUN_18000f3a0();
    }
    if (DAT_180ca0018 == 0) {
      QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_180ca0018);
    }
    local_c0.QuadPart = 0;
    QueryPerformanceCounter(&local_c0);
    dVar16 = (double)DAT_180ca0018;
    dVar4 = (double)local_c0.QuadPart / dVar16;
    local_c0.QuadPart._0_4_ = DAT_180ccfaf0._0_4_;
    local_c0.QuadPart._4_4_ = DAT_180ccfaf0._4_4_;
    LVar15.s = DAT_180ccfaf0.s;
    LVar14.s = DAT_180ccfaf0.s;
    plVar13 = DAT_180ccfae8;
    if (DAT_180ccfae8 != (longlong *)DAT_180ccfaf0.QuadPart) {
      do {
        lVar1 = *plVar13;
        if (*(char *)(lVar1 + 0x41) == '\0') {
          if (*(char *)(lVar1 + 0x40) == '\0') {
            for (piVar12 = *(int **)(lVar1 + 0x50); piVar12 != *(int **)(lVar1 + 0x58);
                piVar12 = piVar12 + 0x18) {
              if (*piVar12 == 3) goto LAB_180080f4c;
            }
            if (*(longlong *)(lVar1 + 8) != 0) {
              if (lVar9 != 0) {
                plVar10 = (longlong *)(lVar1 + 0x10);
                plVar11 = (longlong *)DAT_180ca0d40[1];
                cVar7 = *(char *)((longlong)plVar11 + 0x19);
                plVar5 = DAT_180ca0d40;
                while (cVar7 == '\0') {
                  cVar7 = FUN_180023470(plVar11 + 4,plVar10);
                  if (cVar7 < '\0') {
                    plVar11 = plVar11 + 2;
                  }
                  else {
                    plVar5 = plVar11;
                  }
                  plVar11 = (longlong *)*plVar11;
                  cVar7 = *(char *)((longlong)plVar11 + 0x19);
                }
                if ((*(char *)((longlong)plVar5 + 0x19) != '\0') ||
                   (cVar7 = FUN_180023470(plVar10,plVar5 + 4), cVar7 < '\0')) {
                  plVar11 = plVar10;
                  if (0xf < *(ulonglong *)(lVar1 + 0x28)) {
                    plVar11 = (longlong *)*plVar10;
                  }
                  FUN_1802080c0(plVar11);
                  FUN_180081270(&DAT_180ca0d40,local_a8,plVar10);
                }
                plVar11 = plVar10;
                if (0xf < *(ulonglong *)(lVar1 + 0x28)) {
                  plVar11 = *(longlong **)(lVar1 + 0x10);
                }
                iVar8 = FUN_18007e920(lVar9,plVar11,*(undefined4 *)(lVar1 + 0x30));
                *(int *)(lVar1 + 0x34) = iVar8;
                *(longlong *)(lVar1 + 0x38) = lVar9;
                *(undefined1 *)(lVar1 + 0x40) = 1;
                dVar16 = extraout_XMM0_Qa;
                if (iVar8 != -1) goto LAB_180080ca0;
                *(undefined1 *)(lVar1 + 0x41) = 1;
                if (*(longlong *)(lVar1 + 8) != 0) {
                  if (0x7fffffffffffffffU - *(longlong *)(lVar1 + 0x20) < 0x2b) {
                    /* WARNING: Subroutine does not return */
                    FUN_180011990();
                  }
                  if (0xf < *(ulonglong *)(lVar1 + 0x28)) {
                    plVar10 = (longlong *)*plVar10;
                  }
                  local_e8 = 0x2b;
                  local_e0 = plVar10;
                  local_d8 = *(longlong *)(lVar1 + 0x20);
                  FUN_180069380(local_98);
                  local_c8 = 1;
                  FUN_180070170(*(undefined8 *)(lVar1 + 8),local_98,1);
                  local_c8 = 0;
                  dVar16 = (double)FUN_18000f890(local_98);
                }
              }
              goto LAB_180080f50;
            }
          }
          else if (*(longlong *)(lVar1 + 0x38) == lVar9) {
LAB_180080ca0:
            piVar12 = *(int **)(lVar1 + 0x50);
            piVar2 = *(int **)(lVar1 + 0x58);
            if (piVar12 != piVar2) {
              do {
                if (*(char *)(lVar1 + 0x41) != '\0') break;
                iVar8 = *piVar12;
                if (iVar8 == 0) {
                  dVar16 = (double)FUN_18007e970(lVar9,*(undefined4 *)(lVar1 + 0x34),piVar12[1],
                                                 piVar12 + 2);
                }
                else if (iVar8 == 1) {
                  if (*(longlong *)(piVar12 + 0xe) == 0) {
                    local_e0 = (longlong *)0x0;
                  }
                  else {
                    local_e0 = (longlong *)(piVar12 + 10);
                    if (0xf < *(ulonglong *)(piVar12 + 0x10)) {
                      local_e0 = (longlong *)*local_e0;
                    }
                  }
                  local_e8 = CONCAT44(local_e8._4_4_,piVar12[8]);
                  dVar16 = (double)FUN_18007e990(lVar9,*(undefined4 *)(lVar1 + 0x34),piVar12[1],
                                                 *(undefined8 *)(piVar12 + 6));
                }
                else if (iVar8 == 2) {
                  dVar16 = (double)FUN_18007ea00(lVar9,*(undefined4 *)(lVar1 + 0x34),
                                                 *(longlong *)(piVar12 + 0x12),
                                                 (*(longlong *)(piVar12 + 0x14) -
                                                  *(longlong *)(piVar12 + 0x12) >> 2) *
                                                 -0x5555555555555555);
                }
                else if (iVar8 == 3) {
                  dVar16 = (double)FUN_18007eb70(lVar9,*(undefined4 *)(lVar1 + 0x34));
                  *(undefined1 *)(lVar1 + 0x41) = 1;
                }
                piVar12 = piVar12 + 0x18;
              } while (piVar12 != piVar2);
              LVar14.s = local_c0.s;
            }
            lVar3 = *(longlong *)(lVar1 + 0x58);
            if (*(longlong *)(lVar1 + 0x50) != lVar3) {
              local_b8[0] = *(longlong *)(lVar1 + 0x50);
              do {
                lVar6 = local_b8[0];
                FUN_180011610(local_b8[0] + 0x48);
                dVar16 = (double)FUN_18000f890(lVar6 + 0x28);
                local_b8[0] = lVar6 + 0x60;
              } while (local_b8[0] != lVar3);
              *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(lVar1 + 0x50);
            }
            if (((*(char *)(lVar1 + 0x41) != '\0') ||
                (dVar16 = *(double *)(lVar1 + 0x48), dVar16 < 0.0)) || (dVar4 < dVar16))
            goto LAB_180080f50;
            dVar16 = (double)FUN_18007eb70(lVar9,*(undefined4 *)(lVar1 + 0x34));
          }
LAB_180080f4c:
          *(undefined1 *)(lVar1 + 0x41) = 1;
        }
LAB_180080f50:
        LVar15.s = DAT_180ccfaf0.s;
        plVar13 = plVar13 + 1;
      } while (plVar13 != (longlong *)LVar14.QuadPart);
      plVar13 = DAT_180ccfae8;
      if (DAT_180ccfae8 != (longlong *)DAT_180ccfaf0.QuadPart) {
        do {
          if ((*(char *)(*plVar13 + 0x41) != '\0') && (*(longlong *)(*plVar13 + 8) == 0)) break;
          plVar13 = plVar13 + 1;
        } while (plVar13 != (longlong *)DAT_180ccfaf0.QuadPart);
        plVar10 = plVar13;
        if (plVar13 != (longlong *)DAT_180ccfaf0.QuadPart) {
          while (plVar10 = plVar10 + 1, plVar10 != (longlong *)LVar15.QuadPart) {
            lVar9 = *plVar10;
            if ((*(char *)(lVar9 + 0x41) == '\0') || (*(longlong *)(lVar9 + 8) != 0)) {
              *plVar10 = 0;
              lVar1 = *plVar13;
              *plVar13 = lVar9;
              if (lVar1 != 0) {
                local_b8[0] = lVar1;
                FUN_180081d30(lVar1 + 0x50);
                FUN_18000f890(lVar1 + 0x10);
                dVar16 = (double)thunk_FUN_1803d64e0(lVar1,0x68);
              }
              plVar13 = plVar13 + 1;
            }
          }
        }
      }
    }
    uVar17 = FUN_1800815a0(dVar16,local_b8,plVar13,LVar15.QuadPart);
    LVar15.s = DAT_180ccfaf0.s;
    if (0x1000 < (ulonglong)(DAT_180ccfaf0.QuadPart - (longlong)DAT_180ccfae8 >> 3)) {
      plVar13 = DAT_180ccfae8;
      if (DAT_180ccfae8 != (longlong *)DAT_180ccfaf0.QuadPart) {
        do {
          if (*(char *)(*plVar13 + 0x41) != '\0') break;
          plVar13 = plVar13 + 1;
        } while (plVar13 != (longlong *)DAT_180ccfaf0.QuadPart);
        plVar10 = plVar13;
        if (plVar13 != (longlong *)DAT_180ccfaf0.QuadPart) {
          while (plVar10 = plVar10 + 1, plVar10 != (longlong *)LVar15.QuadPart) {
            lVar9 = *plVar10;
            if (*(char *)(lVar9 + 0x41) == '\0') {
              *plVar10 = 0;
              lVar1 = *plVar13;
              *plVar13 = lVar9;
              if (lVar1 != 0) {
                local_b8[0] = lVar1;
                FUN_180081d30(lVar1 + 0x50);
                FUN_18000f890(lVar1 + 0x10);
                uVar17 = thunk_FUN_1803d64e0(lVar1,0x68);
              }
              plVar13 = plVar13 + 1;
            }
          }
        }
      }
      FUN_1800815a0(uVar17,local_b8,plVar13,LVar15.QuadPart);
    }
  }
  return;
}



/* ===== 1800810e0 FUN_1800810e0 ===== */

undefined8 FUN_1800810e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  if (DAT_180ccfae0 == 0) {
    return 0;
  }
  puVar7 = &DAT_180963470;
  iVar4 = FUN_1804e4d70(&DAT_180963470);
  puVar2 = DAT_180ccfb08;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  puVar1 = DAT_180ccfb00;
  if (DAT_1809634bc == 0x7fffffff) {
    DAT_1809634bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  do {
    if (puVar1 == puVar2) {
      uVar6 = 0;
LAB_180081171:
      FUN_1804e4e90(&DAT_180963470);
      return uVar6;
    }
    if ((ulonglong)puVar1[3] < 0x10) {
      puVar5 = puVar1;
    }
    else {
      puVar5 = (undefined8 *)*puVar1;
    }
    cVar3 = FUN_180208200(param_1,puVar5,puVar1[4],puVar1[5] - puVar1[4],puVar7);
    if (cVar3 != '\0') {
      uVar6 = 1;
      goto LAB_180081171;
    }
    puVar1 = puVar1 + 8;
  } while( true );
}



/* ===== 1800811b0 FUN_1800811b0 ===== */

undefined8 * FUN_1800811b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1804ecaa0();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined4 *)puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined4 *)(puVar1 + 6) = 8;
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0xffffffff;
  puVar1[7] = 0;
  *(undefined2 *)(puVar1 + 8) = 0;
  puVar1[9] = 0xbff0000000000000;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *param_1 = puVar1;
  return param_1;
}



/* ===== 180081270 FUN_180081270 ===== */

undefined8 * FUN_180081270(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *local_48;
  longlong *local_40;
  
  plVar1 = (longlong *)*param_1;
  plVar7 = (longlong *)plVar1[1];
  plVar4 = plVar7;
  plVar5 = plVar1;
  if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
    do {
      plVar7 = plVar4;
      cVar2 = FUN_180023470(plVar7 + 4,param_3);
      if (-1 < cVar2) {
        plVar4 = (longlong *)*plVar7;
        plVar5 = plVar7;
      }
      else {
        plVar4 = (longlong *)plVar7[2];
      }
      uVar6 = (uint)(-1 < cVar2);
    } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
  }
  else {
    uVar6 = 0;
  }
  if ((*(char *)((longlong)plVar5 + 0x19) == '\0') &&
     (cVar2 = FUN_180023470(param_3,plVar5 + 4), -1 < cVar2)) {
    uVar3 = 0;
  }
  else {
    if (param_1[1] == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_18006dab0();
    }
    local_40 = (longlong *)0x0;
    local_48 = param_1;
    plVar4 = (longlong *)FUN_1804ecaa0(0x40);
    local_40 = plVar4;
    FUN_180024b50(plVar4 + 4,param_3);
    *plVar4 = (longlong)plVar1;
    plVar4[1] = (longlong)plVar1;
    plVar4[2] = (longlong)plVar1;
    *(undefined2 *)(plVar4 + 3) = 0;
    local_40 = (longlong *)(ulonglong)uVar6;
    local_48 = plVar7;
    plVar5 = (longlong *)FUN_1800774d0(param_1,&local_48,plVar4);
    uVar3 = 1;
  }
  *param_2 = plVar5;
  *(undefined1 *)(param_2 + 1) = uVar3;
  return param_2;
}



/* ===== 1800813c0 FUN_1800813c0 ===== */

longlong * FUN_1800813c0(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = DAT_180ccfb08;
  lVar2 = param_3;
  lVar3 = DAT_180ccfb08;
  if (param_3 == param_4) {
    *param_2 = param_3;
  }
  else {
    for (; lVar1 = lVar2, DAT_180ccfb08 = lVar3, param_4 != lVar4; param_4 = param_4 + 0x40) {
      FUN_18002ba60(lVar2,param_4);
      FUN_180081c90(lVar2 + 0x20,param_4 + 0x20);
      *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_4 + 0x38);
      lVar2 = lVar2 + 0x40;
      lVar3 = DAT_180ccfb08;
    }
    for (; lVar1 != lVar3; lVar1 = lVar1 + 0x40) {
      FUN_180081c30(lVar1 + 0x20);
      FUN_18000f890(lVar1);
    }
    DAT_180ccfb08 = lVar2;
    *param_2 = param_3;
  }
  return param_2;
}



/* ===== 180081480 FUN_180081480 ===== */

longlong FUN_180081480(longlong *param_1)

{
  return param_1[1] - *param_1;
}



/* ===== 1800814a0 FUN_1800814a0 ===== */

undefined8 FUN_1800814a0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  param_1 = (longlong *)*param_1;
  plVar2 = (longlong *)param_1[1];
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  while (cVar1 == '\0') {
    cVar1 = FUN_180023470(plVar2 + 4,param_2);
    if (cVar1 < '\0') {
      plVar2 = plVar2 + 2;
    }
    else {
      param_1 = plVar2;
    }
    plVar2 = (longlong *)*plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  if ((*(char *)((longlong)param_1 + 0x19) == '\0') &&
     (cVar1 = FUN_180023470(param_2,param_1 + 4), -1 < cVar1)) {
    return 1;
  }
  return 0;
}



/* ===== 180081530 FUN_180081530 ===== */

void FUN_180081530(longlong *param_1)

{
  FUN_1800819d0(param_1,param_1,*(undefined8 *)(*param_1 + 8));
  thunk_FUN_1803d64e0(*param_1,0x40);
  return;
}



/* ===== 180081560 FUN_180081560 ===== */

longlong * FUN_180081560(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_1804ecaa0(0x40);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* ===== 1800815a0 FUN_1800815a0 ===== */

undefined8 *
FUN_1800815a0(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = DAT_180ccfaf0;
  if (param_3 == param_4) {
    *param_2 = param_3;
  }
  else {
    plVar4 = param_3;
    if (param_4 != DAT_180ccfaf0) {
      do {
        lVar1 = *param_4;
        *param_4 = 0;
        lVar2 = *plVar4;
        *plVar4 = lVar1;
        if (lVar2 != 0) {
          FUN_180081d30(lVar2 + 0x50);
          FUN_18000f890(lVar2 + 0x10);
          thunk_FUN_1803d64e0(lVar2,0x68);
        }
        plVar4 = plVar4 + 1;
        param_4 = param_4 + 1;
      } while (param_4 != plVar3);
    }
    FUN_180081a30(plVar4,DAT_180ccfaf0);
    DAT_180ccfaf0 = plVar4;
    *param_2 = param_3;
  }
  return param_2;
}



/* ===== 180081660 FUN_180081660 ===== */

void FUN_180081660(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  FUN_180081d30(lVar1 + 0x50);
  FUN_18000f890(lVar1 + 0x10);
  thunk_FUN_1803d64e0(lVar1,0x68);
  return;
}



/* ===== 1800816a0 FUN_1800816a0 ===== */

undefined8 *
FUN_1800816a0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *local_68;
  uint local_60;
  
  puVar4 = DAT_180ca0d30;
  puVar9 = (undefined8 *)DAT_180ca0d30[1];
  puVar6 = puVar9;
  puVar10 = DAT_180ca0d30;
  if (*(char *)((longlong)puVar9 + 0x19) == '\0') {
    do {
      puVar9 = puVar6;
      cVar5 = FUN_180023470(puVar9 + 4,param_3);
      if (-1 < cVar5) {
        puVar6 = (undefined8 *)*puVar9;
        puVar10 = puVar9;
      }
      else {
        puVar6 = (undefined8 *)puVar9[2];
      }
      uVar8 = (uint)(-1 < cVar5);
    } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
  }
  else {
    uVar8 = 0;
  }
  if ((*(char *)((longlong)puVar10 + 0x19) == '\0') &&
     (cVar5 = FUN_180023470(param_3,puVar10 + 4), -1 < cVar5)) {
    *param_2 = puVar10;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (DAT_180ca0d38 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_18006dab0();
    }
    puVar10 = &DAT_180ca0d30;
    puVar6 = (undefined8 *)FUN_1804ecaa0(0x40);
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(puVar6 + 4) = *param_3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar1;
    *(undefined4 *)(puVar6 + 5) = uVar2;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar3;
    uVar1 = param_3[5];
    uVar2 = param_3[6];
    uVar3 = param_3[7];
    *(undefined4 *)(puVar6 + 6) = param_3[4];
    *(undefined4 *)((longlong)puVar6 + 0x34) = uVar1;
    *(undefined4 *)(puVar6 + 7) = uVar2;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar3;
    *(undefined8 *)(param_3 + 4) = 0;
    *(undefined8 *)(param_3 + 6) = 0xf;
    *(undefined1 *)param_3 = 0;
    *puVar6 = puVar4;
    puVar6[1] = puVar4;
    puVar6[2] = puVar4;
    *(undefined2 *)(puVar6 + 3) = 0;
    local_68 = puVar9;
    local_60 = uVar8;
    uVar7 = FUN_1800774d0(&DAT_180ca0d30,&local_68,puVar6,param_4,puVar10,0);
    *param_2 = uVar7;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



/* ===== 1800817f0 FUN_1800817f0 ===== */

void FUN_1800817f0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  
  plVar11 = (longlong *)*param_2;
  do {
    while( true ) {
      if ((char)param_2[1] == '\0') {
        FUN_18006c630(param_2);
        plVar11 = (longlong *)*param_2;
      }
      if ((char)param_3[1] == '\0') {
        FUN_18006c630(param_3);
      }
      if (plVar11 == (longlong *)0x0) {
        if (*param_3 == 0) {
          return;
        }
      }
      else if (*param_3 != 0) {
        return;
      }
      if ((char)param_2[1] == '\0') {
        FUN_18006c630(param_2);
      }
      uVar2 = *(undefined1 *)((longlong)param_2 + 9);
      puVar10 = (undefined1 *)param_1[1];
      if (puVar10 == (undefined1 *)param_1[2]) {
        lVar12 = (longlong)puVar10 - *param_1;
        if (lVar12 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_1800118d0();
        }
        uVar1 = lVar12 + 1;
        uVar8 = param_1[2] - *param_1;
        if (0x7fffffffffffffff - (uVar8 >> 1) < uVar8) {
          uVar8 = 0x7fffffffffffffff;
        }
        else {
          uVar8 = (uVar8 >> 1) + uVar8;
          if (uVar8 < uVar1) {
            uVar8 = uVar1;
          }
        }
        puVar7 = (undefined1 *)FUN_18000fb70(uVar8);
        puVar14 = puVar7 + lVar12;
        puVar9 = puVar14 + 1;
        *puVar14 = uVar2;
        puVar4 = (undefined1 *)*param_1;
        plVar11 = param_1;
        uVar13 = uVar8;
        puVar15 = puVar9;
        if (puVar10 == (undefined1 *)param_1[1]) {
          lVar12 = param_1[1] - (longlong)puVar4;
          puVar9 = puVar7;
          puVar10 = puVar4;
        }
        else {
          FUN_180540530(puVar7,puVar4,(longlong)puVar10 - (longlong)puVar4);
          lVar12 = param_1[1] - (longlong)puVar10;
          puVar14 = puVar7;
        }
        FUN_180540530(puVar9,puVar10,lVar12);
        FUN_180082ac0(param_1,puVar7,uVar1,uVar8,plVar11,0,uVar13,puVar14,puVar15);
      }
      else {
        *puVar10 = uVar2;
        param_1[1] = param_1[1] + 1;
      }
      plVar11 = (longlong *)*param_2;
      if (plVar11 != (longlong *)0x0) break;
LAB_1800819a9:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      plVar11 = (longlong *)0x0;
    }
    if (*(longlong *)plVar11[7] == 0) {
LAB_180081992:
      uVar6 = (**(code **)(*plVar11 + 0x38))(plVar11);
    }
    else {
      iVar3 = *(int *)plVar11[10];
      if (iVar3 < 1) goto LAB_180081992;
      *(int *)plVar11[10] = iVar3 + -1;
      pbVar5 = *(byte **)plVar11[7];
      *(byte **)plVar11[7] = pbVar5 + 1;
      uVar6 = (uint)*pbVar5;
    }
    if (uVar6 == 0xffffffff) goto LAB_1800819a9;
    *(undefined1 *)(param_2 + 1) = 0;
  } while( true );
}



/* ===== 1800819d0 FUN_1800819d0 ===== */

void FUN_1800819d0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800819d0(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_18000f890(param_3 + 4);
    thunk_FUN_1803d64e0(param_3,0x40);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* ===== 180081a30 FUN_180081a30 ===== */

void FUN_180081a30(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    do {
      lVar1 = *param_1;
      if (lVar1 != 0) {
        FUN_180081d30(lVar1 + 0x50);
        FUN_18000f890(lVar1 + 0x10);
        thunk_FUN_1803d64e0(lVar1,0x68);
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 180081aa0 FUN_180081aa0 ===== */

undefined8 * FUN_180081aa0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 == (undefined8 *)param_1[2]) {
    lVar4 = (longlong)puVar6 - *param_1;
    lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
    lVar4 = (lVar4 >> 1) - (lVar4 >> 0x3f);
    uVar8 = 0x1555555555555555;
    if (lVar4 == 0x1555555555555555) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    uVar1 = lVar4 + 1;
    uVar7 = (param_1[2] - *param_1 >> 2) * -0x5555555555555555;
    if (uVar7 <= 0x1555555555555555 - (uVar7 >> 1)) {
      uVar7 = (uVar7 >> 1) + uVar7;
      uVar8 = uVar1;
      if (uVar1 <= uVar7) {
        uVar8 = uVar7;
      }
      if (0x1555555555555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_18000d840();
      }
    }
    puVar2 = (undefined8 *)FUN_18000fb70(uVar8 * 0xc);
    puVar3 = (undefined8 *)((longlong)puVar2 + lVar4 * 0xc);
    puVar5 = (undefined8 *)((longlong)puVar3 + 0xc);
    *puVar3 = *param_2;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
    puVar10 = (undefined8 *)*param_1;
    plVar9 = param_1;
    uVar7 = uVar8;
    puVar11 = puVar5;
    if (puVar6 == (undefined8 *)param_1[1]) {
      lVar4 = param_1[1] - (longlong)puVar10;
      puVar5 = puVar2;
      puVar6 = puVar10;
      puVar10 = puVar3;
    }
    else {
      FUN_180540530(puVar2,puVar10,(longlong)puVar6 - (longlong)puVar10);
      lVar4 = param_1[1] - (longlong)puVar6;
      puVar10 = puVar2;
    }
    FUN_180540530(puVar5,puVar6,lVar4);
    FUN_1800118f0(param_1,puVar2,uVar1,uVar8,plVar9,0,uVar7,puVar10,puVar11);
  }
  else {
    *puVar6 = *param_2;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_2 + 1);
    puVar3 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)puVar3 + 0xc;
  }
  return puVar3;
}



/* ===== 180081c30 FUN_180081c30 ===== */

void FUN_180081c30(longlong *param_1)

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
  if (0xfff < (ulonglong)(param_1[2] - lVar2)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_180081c72;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar3 = lVar2;
  puVar5 = puVar4;
LAB_180081c72:
  *(undefined8 *)(puVar5 + -8) = 0x180081c77;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180081c90 FUN_180081c90 ===== */

longlong * FUN_180081c90(longlong *param_1,longlong *param_2)

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
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_180081cf5;
  if ((ulonglong)(param_1[2] - lVar2) < 0x1000) {
LAB_180081ce2:
    lVar3 = lVar2;
    puVar5 = puVar4;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar3) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)(5);
      puVar4 = auStack_20;
      goto LAB_180081ce2;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x180081cea;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_180081cf5:
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}



/* ===== 180081d30 FUN_180081d30 ===== */

void FUN_180081d30(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x60) {
    FUN_180011610(lVar3 + 0x48);
    FUN_18000f890(lVar3 + 0x28);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 5) << 5)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_180081dd0;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_180081dd0:
  *(undefined8 *)(puVar5 + -8) = 0x180081dd8;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180081e00 FUN_180081e00 ===== */

undefined8 * FUN_180081e00(undefined8 param_1,ulonglong param_2,undefined4 *param_3)

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
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 *local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  uVar11 = (ulonglong)DAT_180ccfb00;
  if ((longlong)DAT_180ccfb08 - (longlong)DAT_180ccfb00 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar15 = ((longlong)DAT_180ccfb08 - (longlong)DAT_180ccfb00 >> 6) + 1;
  uVar10 = (longlong)DAT_180ccfb10 - (longlong)DAT_180ccfb00 >> 6;
  uVar12 = 0x3ffffffffffffff;
  if (uVar10 <= 0x3ffffffffffffff - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar12 = uVar15;
    if (uVar15 <= uVar10) {
      uVar12 = uVar10;
    }
    if (0x3ffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar12 * 0x40);
  puVar1 = (undefined8 *)((param_2 - uVar11 & 0xffffffffffffffc0) + (longlong)puVar9);
  puVar16 = puVar1 + 8;
  local_78 = &DAT_180ccfb00;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  *(undefined4 *)puVar1 = *param_3;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar6;
  *(undefined4 *)(puVar1 + 1) = uVar7;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar8;
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  *(undefined4 *)(puVar1 + 2) = param_3[4];
  *(undefined4 *)((longlong)puVar1 + 0x14) = uVar6;
  *(undefined4 *)(puVar1 + 3) = uVar7;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar8;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  uVar2 = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(param_3 + 0xc) = 0;
  uVar3 = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(param_3 + 10) = 0;
  uVar4 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_3 + 8) = 0;
  puVar1[4] = uVar4;
  puVar1[5] = uVar3;
  puVar1[6] = uVar2;
  puVar1[7] = *(undefined8 *)(param_3 + 0xe);
  local_68 = uVar12;
  local_60 = puVar1;
  local_58 = puVar16;
  if ((undefined8 *)param_2 == DAT_180ccfb08) {
    param_2 = (ulonglong)DAT_180ccfb00;
    puVar16 = puVar9;
    local_70 = puVar9;
  }
  else {
    local_70 = puVar9;
    FUN_180082600(DAT_180ccfb00,param_2,puVar9,&DAT_180ccfb00);
    local_60 = puVar9;
  }
  FUN_180082600(param_2,DAT_180ccfb08,puVar16,&DAT_180ccfb00);
  uVar10 = (ulonglong)DAT_180ccfb08;
  puVar13 = auStack_98;
  puVar14 = auStack_98;
  local_70 = (undefined8 *)0x0;
  uVar11 = (ulonglong)DAT_180ccfb00;
  if (DAT_180ccfb00 == (undefined8 *)0x0) goto LAB_180082008;
  for (; uVar11 != uVar10; uVar11 = uVar11 + 0x40) {
    FUN_180081c30(uVar11 + 0x20);
    FUN_18000f890(uVar11);
  }
  uVar11 = (ulonglong)DAT_180ccfb00;
  if (((longlong)DAT_180ccfb10 - (longlong)DAT_180ccfb00 & 0xffffffffffffffc0U) < 0x1000) {
LAB_180082000:
    puVar14 = puVar13;
  }
  else {
    uVar11 = *(ulonglong *)((longlong)DAT_180ccfb00 - 8);
    uVar10 = ((longlong)DAT_180ccfb00 - uVar11) - 8;
    if (0x1f < uVar10) {
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar13 = auStack_90;
      uVar11 = uVar10;
      goto LAB_180082000;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x180082008;
  thunk_FUN_1803d64e0(uVar11);
LAB_180082008:
  DAT_180ccfb00 = puVar9;
  DAT_180ccfb08 = puVar9 + uVar15 * 8;
  DAT_180ccfb10 = puVar9 + uVar12 * 8;
  return puVar1;
}



/* ===== 180082050 FUN_180082050 ===== */

undefined8 * FUN_180082050(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  ulonglong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  
  puVar6 = DAT_180ccfae8;
  if ((longlong)DAT_180ccfaf0 - (longlong)DAT_180ccfae8 == -8) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = ((longlong)DAT_180ccfaf0 - (longlong)DAT_180ccfae8 >> 3) + 1;
  uVar5 = (longlong)DAT_180ccfaf8 - (longlong)DAT_180ccfae8 >> 3;
  uVar11 = 0x1fffffffffffffff;
  if (uVar5 <= 0x1fffffffffffffff - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar11 = uVar1;
    if (uVar1 <= uVar5) {
      uVar11 = uVar5;
    }
    if (0x1fffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar4 = (undefined8 *)FUN_18000fb70(uVar11 * 8);
  puVar12 = (undefined8 *)
            (((longlong)param_2 - (longlong)puVar6 & 0xfffffffffffffff8U) + (longlong)puVar4);
  puVar6 = puVar12 + 1;
  local_70 = &DAT_180ccfae8;
  uVar2 = *param_3;
  *param_3 = 0;
  *puVar12 = uVar2;
  puVar8 = DAT_180ccfaf0;
  local_60 = uVar11;
  local_58 = puVar12;
  local_50 = puVar6;
  if (param_2 == DAT_180ccfaf0) {
    local_a8 = &DAT_180ccfae8;
    puVar6 = puVar4;
    for (puVar7 = DAT_180ccfae8; puVar7 != puVar8; puVar7 = puVar7 + 1) {
      uVar2 = *puVar7;
      *puVar7 = 0;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    }
    local_b8 = puVar6;
    local_b0 = puVar6;
    local_68 = puVar4;
  }
  else {
    local_90 = &DAT_180ccfae8;
    local_a0 = puVar4;
    for (puVar8 = DAT_180ccfae8; puVar8 != param_2; puVar8 = puVar8 + 1) {
      uVar2 = *puVar8;
      *puVar8 = 0;
      *local_a0 = uVar2;
      local_a0 = local_a0 + 1;
    }
    local_98 = local_a0;
    local_68 = puVar4;
    FUN_180081a30(local_a0,local_a0);
    puVar8 = DAT_180ccfaf0;
    local_78 = &DAT_180ccfae8;
    for (; param_2 != puVar8; param_2 = param_2 + 1) {
      uVar2 = *param_2;
      *param_2 = 0;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    }
    local_88 = puVar6;
    local_80 = puVar6;
    local_58 = puVar4;
  }
  puVar9 = auStack_d8;
  puVar10 = auStack_d8;
  FUN_180081a30(puVar6,puVar6);
  local_68 = (undefined8 *)0x0;
  if (DAT_180ccfae8 == (undefined8 *)0x0) goto LAB_180082289;
  FUN_180081a30(DAT_180ccfae8,DAT_180ccfaf0);
  puVar6 = DAT_180ccfae8;
  if ((ulonglong)(((longlong)DAT_180ccfaf8 - (longlong)DAT_180ccfae8 >> 3) * 8) < 0x1000) {
LAB_18008227e:
    puVar10 = puVar9;
  }
  else {
    puVar6 = (undefined8 *)DAT_180ccfae8[-1];
    if (0x1f < (ulonglong)((longlong)DAT_180ccfae8 + (-8 - (longlong)puVar6))) {
      puVar6 = (undefined8 *)&DAT_00000005;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar9 = auStack_d0;
      goto LAB_18008227e;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x180082289;
  thunk_FUN_1803d64e0(puVar6);
LAB_180082289:
  DAT_180ccfae8 = puVar4;
  DAT_180ccfaf0 = puVar4 + uVar1;
  DAT_180ccfaf8 = puVar4 + uVar11;
  return puVar12;
}



/* ===== 1800822d0 FUN_1800822d0 ===== */

undefined4 * FUN_1800822d0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  longlong *local_68;
  undefined4 *local_60;
  ulonglong local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  
  lVar13 = *param_1;
  lVar9 = (param_1[1] - lVar13 >> 5) * -0x5555555555555555;
  uVar12 = 0x2aaaaaaaaaaaaaa;
  if (lVar9 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar9 + 1;
  uVar11 = (param_1[2] - lVar13 >> 5) * -0x5555555555555555;
  if (uVar11 <= 0x2aaaaaaaaaaaaaa - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar12 = uVar1;
    if (uVar1 <= uVar11) {
      uVar12 = uVar11;
    }
    if (0x2aaaaaaaaaaaaaa < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar10 = (undefined4 *)FUN_18000fb70(uVar12 * 0x60);
  puVar18 = puVar10 + ((param_2 - lVar13) / 0x60) * 0x18;
  puVar17 = puVar18 + 0x18;
  *puVar18 = *param_3;
  puVar18[1] = param_3[1];
  *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(param_3 + 2);
  puVar18[4] = param_3[4];
  *(undefined8 *)(puVar18 + 6) = *(undefined8 *)(param_3 + 6);
  puVar18[8] = param_3[8];
  *(undefined8 *)(puVar18 + 10) = 0;
  *(undefined8 *)(puVar18 + 0xc) = 0;
  *(undefined8 *)(puVar18 + 0xe) = 0;
  *(undefined8 *)(puVar18 + 0x10) = 0;
  uVar6 = param_3[0xb];
  uVar7 = param_3[0xc];
  uVar8 = param_3[0xd];
  puVar18[10] = param_3[10];
  puVar18[0xb] = uVar6;
  puVar18[0xc] = uVar7;
  puVar18[0xd] = uVar8;
  uVar6 = param_3[0xf];
  uVar7 = param_3[0x10];
  uVar8 = param_3[0x11];
  puVar18[0xe] = param_3[0xe];
  puVar18[0xf] = uVar6;
  puVar18[0x10] = uVar7;
  puVar18[0x11] = uVar8;
  *(undefined8 *)(param_3 + 0xe) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0xf;
  *(undefined1 *)(param_3 + 10) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x16);
  *(undefined8 *)(param_3 + 0x16) = 0;
  uVar3 = *(undefined8 *)(param_3 + 0x14);
  *(undefined8 *)(param_3 + 0x14) = 0;
  uVar4 = *(undefined8 *)(param_3 + 0x12);
  *(undefined8 *)(param_3 + 0x12) = 0;
  *(undefined8 *)(puVar18 + 0x12) = uVar4;
  *(undefined8 *)(puVar18 + 0x14) = uVar3;
  *(undefined8 *)(puVar18 + 0x16) = uVar2;
  lVar13 = param_1[1];
  local_68 = param_1;
  local_58 = uVar12;
  local_50 = puVar18;
  local_48 = puVar17;
  if (param_2 == lVar13) {
    param_2 = *param_1;
    puVar17 = puVar10;
    local_60 = puVar10;
  }
  else {
    local_60 = puVar10;
    FUN_1800826c0(*param_1,param_2,puVar10,param_1);
    lVar13 = param_1[1];
    local_50 = puVar10;
  }
  FUN_1800826c0(param_2,lVar13,puVar17,param_1);
  puVar14 = auStack_88;
  puVar15 = auStack_88;
  local_60 = (undefined4 *)0x0;
  lVar13 = *param_1;
  puVar16 = auStack_88;
  if (lVar13 == 0) goto LAB_18008253c;
  lVar9 = param_1[1];
  for (; lVar13 != lVar9; lVar13 = lVar13 + 0x60) {
    FUN_180011610(lVar13 + 0x48);
    FUN_18000f890(lVar13 + 0x28);
  }
  lVar13 = *param_1;
  lVar9 = lVar13;
  if ((ulonglong)((param_1[2] - lVar13 >> 5) << 5) < 0x1000) {
LAB_180082531:
    puVar15 = puVar14;
  }
  else {
    lVar9 = *(longlong *)(lVar13 + -8);
    if (0x1f < (lVar13 - lVar9) - 8U) {
      lVar9 = 5;
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar14 = auStack_80;
      goto LAB_180082531;
    }
  }
  *(undefined8 *)(puVar15 + -8) = 0x18008253c;
  thunk_FUN_1803d64e0(lVar9);
  puVar16 = puVar15;
LAB_18008253c:
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + uVar1 * 0x18);
  param_1[2] = *(longlong *)(puVar16 + 0x98) + (longlong)puVar10;
  return puVar18;
}



/* ===== 180082590 FUN_180082590 ===== */

void FUN_180082590(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18000f890(*(longlong *)(param_1 + 8) + 0x20);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x40);
  return;
}



/* ===== 1800825d0 FUN_1800825d0 ===== */

void FUN_1800825d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x40);
  return;
}



/* ===== 180082600 FUN_180082600 ===== */

undefined8 * FUN_180082600(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    uVar1 = param_1[6];
    param_1[6] = 0;
    uVar2 = param_1[5];
    param_1[5] = 0;
    uVar3 = param_1[4];
    param_1[4] = 0;
    param_3[4] = uVar3;
    param_3[5] = uVar2;
    param_3[6] = uVar1;
    param_3[7] = param_1[7];
    param_3 = param_3 + 8;
  }
  return param_3;
}



/* ===== 1800826c0 FUN_1800826c0 ===== */

undefined4 * FUN_1800826c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_1 + 2);
    param_3[4] = param_1[4];
    *(undefined8 *)(param_3 + 6) = *(undefined8 *)(param_1 + 6);
    param_3[8] = param_1[8];
    *(undefined8 *)(param_3 + 10) = 0;
    *(undefined8 *)(param_3 + 0xc) = 0;
    *(undefined8 *)(param_3 + 0xe) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)(param_3 + 0xc) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_3 + 0xe) = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)(param_3 + 0x10) = uVar1;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0xf;
    uVar1 = *(undefined8 *)(param_1 + 0x16);
    *(undefined8 *)(param_1 + 0x16) = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x12);
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_3 + 0x12) = uVar3;
    *(undefined8 *)(param_3 + 0x14) = uVar2;
    *(undefined8 *)(param_3 + 0x16) = uVar1;
    param_3 = param_3 + 0x18;
  }
  return param_3;
}



/* ===== 1800827d0 FUN_1800827d0 ===== */

void FUN_1800827d0(longlong param_1)

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
    FUN_180081c30(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 6)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_180082857;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar3 = lVar2;
  puVar5 = puVar4;
LAB_180082857:
  *(undefined8 *)(puVar5 + -8) = 0x18008285c;
  thunk_FUN_1803d64e0(lVar3);
  return;
}



/* ===== 180082870 FUN_180082870 ===== */

void FUN_180082870(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_180081a30(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  uVar4 = *(ulonglong *)(param_1 + 8);
  uVar3 = *(longlong *)(param_1 + 0x10) * 8;
  if (0xfff < uVar3) {
    plVar1 = (longlong *)(uVar4 - 8);
    uVar4 = (uVar4 - *plVar1) - 8;
    if (uVar4 < 0x20) {
      thunk_FUN_1803d64e0(*plVar1,uVar3 + 0x27);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
  }
  thunk_FUN_1803d64e0(uVar4,uVar3);
  return;
}



/* ===== 1800828f0 FUN_1800828f0 ===== */

void FUN_1800828f0(longlong param_1)

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
    FUN_180011610(lVar3 + 0x48);
    FUN_18000f890(lVar3 + 0x28);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  lVar3 = lVar1;
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x60)) {
    lVar3 = *(longlong *)(lVar1 + -8);
    if ((lVar1 - lVar3) - 8U < 0x20) goto LAB_18008297c;
    lVar3 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18008297c:
  *(undefined8 *)(puVar5 + -8) = 0x180082984;
  thunk_FUN_1803d64e0(lVar3);
  return;
}



/* ===== 1800829a0 FUN_1800829a0 ===== */

longlong FUN_1800829a0(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_180540530(param_3,param_1,param_2 - param_1);
  return (param_2 - param_1) + param_3;
}



/* ===== 1800829d0 FUN_1800829d0 ===== */

void FUN_1800829d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_180011610(lVar2 + 0x48);
    FUN_18000f890(lVar2 + 0x28);
  }
  return;
}



/* ===== 180082a30 FUN_180082a30 ===== */

void FUN_180082a30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_180081c30(lVar2 + 0x20);
    FUN_18000f890(lVar2);
  }
  return;
}



/* ===== 180082ac0 FUN_180082ac0 ===== */

void FUN_180082ac0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar4 = auStack_48;
  puVar5 = auStack_48;
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_180082b13;
  if ((ulonglong)(param_1[2] - lVar2) < 0x1000) {
LAB_180082b0b:
    lVar3 = lVar2;
    puVar5 = puVar4;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar3) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)(5);
      puVar4 = auStack_40;
      goto LAB_180082b0b;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x180082b13;
  thunk_FUN_1803d64e0(lVar3);
LAB_180082b13:
  *param_1 = param_2;
  param_1[1] = param_2 + param_3;
  param_1[2] = param_2 + param_4;
  return;
}



/* ===== 180082b30 FUN_180082b30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180082b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint3 uVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  undefined1 *local_158;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [8];
  longlong local_f0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_4c;
  undefined4 local_44;
  undefined2 local_40;
  char local_3d;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_188;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  FUN_180540170(local_f8,0,0xc0);
  fVar2 = DAT_1808ac34c;
  local_c8 = _DAT_1808adae0;
  uStack_c0 = _UNK_1808adae8;
  local_b8 = _DAT_1808adae0;
  uStack_b0 = _UNK_1808adae8;
  local_44 = 0xffffffff;
  local_40 = 0xffff;
  local_4c = 1.0;
  if ((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) {
    lVar3 = FUN_18000f3a0();
    if (lVar3 != 0) {
      local_158 = local_f8;
      local_168 = param_2;
      local_160 = param_3;
      FUN_18042fee0(DAT_180961f48,lVar3,&local_138,param_1);
    }
  }
  uVar1 = (uint3)((uint)local_4c >> 8);
  if ((local_3d != '\0') || (local_4c < fVar2)) {
    uVar4 = (ulonglong)CONCAT31(uVar1,local_f0 == param_4);
  }
  else {
    uVar4 = CONCAT71((uint7)uVar1,1);
  }
  return uVar4;
}



/* ===== 180082c80 FUN_180082c80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_180082c80(float *param_1,undefined8 param_2,longlong param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined1 uVar7;
  short sVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_938 [32];
  float local_918;
  float local_914;
  float local_910;
  float local_908;
  float local_904;
  float local_900;
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
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined8 local_884;
  undefined4 local_87c;
  undefined8 local_878;
  undefined4 local_870;
  undefined8 local_86c;
  undefined4 local_864;
  undefined8 local_860;
  undefined8 local_858;
  undefined8 local_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined4 local_820;
  undefined1 local_81c;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined4 local_7c8;
  undefined4 local_7c4;
  undefined2 local_7c0;
  undefined8 local_7bc;
  undefined4 local_7b4;
  longlong local_7b0;
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  undefined4 local_790;
  undefined1 local_78c;
  undefined4 local_788;
  undefined1 local_784;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined4 local_748;
  undefined8 local_744;
  undefined8 uStack_73c;
  undefined8 local_734;
  undefined4 local_72c;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined2 local_718;
  undefined8 local_714;
  undefined4 local_70c;
  undefined4 local_708;
  undefined8 local_700;
  undefined4 local_6f8;
  undefined8 local_6f4;
  undefined4 local_6ec;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined1 local_6d0;
  undefined8 local_6cc;
  undefined8 local_6c4;
  undefined8 local_6bc;
  undefined4 local_6b4;
  undefined1 local_6b0;
  undefined8 local_6ac;
  undefined4 local_6a4;
  undefined1 local_6a0;
  undefined8 local_69c;
  undefined8 local_694;
  undefined8 local_68c;
  undefined8 local_684;
  undefined8 local_67c;
  undefined4 local_674;
  undefined8 local_670;
  undefined1 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined4 local_630;
  undefined2 local_62c;
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
  undefined2 local_5b0;
  undefined4 local_5ac;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined4 local_578;
  undefined1 local_574;
  undefined8 local_570;
  undefined8 local_568;
  undefined1 local_560 [640];
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2cc;
  undefined8 local_2c4;
  undefined8 local_2bc;
  undefined8 local_2b4;
  undefined8 local_2ac;
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined8 local_294;
  undefined8 local_28c;
  undefined8 local_284;
  undefined8 local_27c;
  undefined8 local_274;
  undefined8 local_26c;
  undefined8 local_264;
  undefined8 local_25c;
  undefined8 local_254;
  undefined8 local_24c;
  undefined8 local_244;
  undefined8 local_23c;
  undefined8 local_234;
  undefined8 local_22c;
  undefined8 local_224;
  undefined8 local_21c;
  undefined8 local_214;
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
  undefined1 local_1b4;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined1 local_18e;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined2 local_140;
  undefined **local_138;
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
  ulonglong local_d8;
  
  fVar23 = DAT_1808ac34c;
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_938;
  local_8f8 = 0;
  uStack_8f0 = 0;
  local_8e8 = 0;
  uStack_8e0 = 0;
  local_8d8 = 0;
  uStack_8d0 = 0;
  local_8c8 = _DAT_1808adae0;
  uStack_8c0 = _UNK_1808adae8;
  local_8b8 = _DAT_1808adae0;
  uStack_8b0 = _UNK_1808adae8;
  local_8a8 = 0;
  uStack_8a0 = 0;
  local_898 = 0;
  local_890 = 0;
  uVar16 = 0xffffffff;
  local_88c = 0xffffffff;
  local_888 = 2;
  local_884 = 0;
  local_87c = 0x3f800000;
  local_878 = 0;
  local_870 = 0x3f800000;
  local_86c = 0x3f800000;
  local_864 = 0;
  local_858 = 0;
  local_850 = 0;
  local_848 = 0;
  uStack_840 = 0;
  local_838 = 0;
  local_830 = 0;
  local_828 = 0;
  local_820 = 0;
  local_81c = 0;
  local_818 = 0;
  uStack_810 = 0;
  local_808 = 0;
  uStack_800 = 0;
  local_7f8 = 0;
  uStack_7f0 = 0;
  local_7e8 = 0;
  local_7e0 = 0;
  local_7d8 = 0;
  local_7d0 = 0;
  local_7c8 = 0;
  local_7c4 = 0x43820000;
  local_7c0 = 0;
  local_7bc = 0;
  local_7b4 = 0;
  local_7a8 = 0;
  local_7a0 = 0x11;
  local_798 = 0x3c800000;
  local_790 = 0;
  local_78c = 0;
  local_788 = 0;
  local_784 = 0;
  local_780 = 0;
  uStack_778 = 0;
  local_770 = 0;
  local_768 = 0;
  local_760 = 0;
  local_758 = 0;
  uStack_750 = 0;
  local_748 = 0;
  local_744 = 0;
  uStack_73c = 0;
  local_734 = 0;
  local_72c = 0;
  local_728 = 0;
  uStack_720 = 0;
  local_718 = 0;
  local_714 = 0;
  local_70c = 0;
  local_708 = 0x3f800000;
  local_700 = 0;
  local_6f8 = 0;
  local_6f4 = 0;
  local_6ec = 0;
  local_6e8 = 0;
  local_6e0 = 0;
  local_6d8 = 0;
  local_6d0 = 0;
  local_6cc = 0;
  local_6c4 = 0;
  local_6bc = 0;
  local_6b4 = 0;
  local_6b0 = 0;
  local_6ac = 0;
  local_6a4 = 0;
  local_6a0 = 0;
  local_69c = 0;
  local_694 = 0;
  local_68c = 0;
  local_684 = 0;
  local_67c = 0;
  local_674 = 0xffffffff;
  local_670 = 0;
  local_668 = 0;
  local_660 = 0;
  local_658 = 0;
  uStack_650 = 0;
  local_648 = 0;
  local_640 = 0;
  local_638 = 0;
  local_630 = 0;
  local_62c = 0;
  local_628 = _DAT_1808ade10;
  uStack_620 = _UNK_1808ade18;
  local_618 = _DAT_1808ad580;
  uStack_610 = _UNK_1808ad588;
  local_608 = _DAT_1808ada50;
  uStack_600 = _UNK_1808ada58;
  local_5f8 = _DAT_1808ad590;
  uStack_5f0 = _UNK_1808ad598;
  local_5e8 = _DAT_1808adbb0;
  uStack_5e0 = _UNK_1808adbb8;
  local_5d8 = _DAT_1808ad570;
  uStack_5d0 = _UNK_1808ad578;
  local_5c8 = _DAT_1808ade50;
  uStack_5c0 = _UNK_1808ade58;
  local_5b8 = 0;
  local_5b0 = 1;
  local_5ac = 0xffffffff;
  local_5a8 = 0;
  local_5a0 = 0;
  local_598 = 0;
  local_590 = 0;
  local_588 = 0;
  local_580 = 0;
  local_578 = 0;
  local_574 = 0;
  local_570 = 0;
  local_568 = 0;
  FUN_180540170(local_560,0,0x280);
  FUN_18008b430(local_560);
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  FUN_180540170(&local_2cc,0,0x100);
  local_2cc = 0;
  local_2c4 = 0;
  local_2bc = 0;
  local_2b4 = 0;
  local_2ac = 0;
  local_2a4 = 0;
  local_29c = 0;
  local_294 = 0;
  local_28c = 0;
  local_284 = 0;
  local_27c = 0;
  local_274 = 0;
  local_26c = 0;
  local_264 = 0;
  local_25c = 0;
  local_254 = 0;
  local_24c = 0;
  local_244 = 0;
  local_23c = 0;
  local_234 = 0;
  local_22c = 0;
  local_224 = 0;
  local_21c = 0;
  local_214 = 0;
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
  local_1b0 = 0;
  local_1ac = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 2;
  local_18e = 0;
  local_18c = 0;
  local_184 = 0;
  local_180 = 0x4396ff27;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_164 = 0;
  local_160 = 0x3f800000;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  uVar17 = 1;
  local_860 = 1;
  local_7b0 = param_3;
  if (DAT_180ccfbcc != 0) {
    lVar13 = FUN_18000f3a0(param_3 + (ulonglong)DAT_180ccfbcc);
    if (lVar13 != 0) {
      if (DAT_180ccfb78 != 0) {
        uVar17 = FUN_18000f3a0(lVar13 + (ulonglong)DAT_180ccfb78 + 0x10);
        local_860 = uVar17;
      }
    }
  }
  local_138 = (undefined **)0x0;
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
  FUN_18042fd10();
  local_128 = 0;
  uStack_120 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_138 = &PTR_FUN_180c3c7a0;
  local_118 = _DAT_1808adf90;
  uStack_110 = _UNK_1808adf98;
  local_108 = 0xf00ffff00000000;
  local_f8 = 0;
  uStack_100 = 0xb;
  uStack_130 = uVar17;
  if (param_3 == 0) {
    local_108 = 0xf00ffff00000000;
  }
  else {
    lVar13 = FUN_18000f3a0(param_3 + 0x10);
    uVar10 = FUN_180011200(lVar13 + 0x10);
    sVar8 = FUN_180011200(lVar13 + 0x30);
    uVar12 = DAT_18111192c;
    uVar15 = uVar10 - (ushort)(sVar8 << 0xf);
    local_118 = CONCAT44(local_118._4_4_,(uVar15 ^ uVar10) & 0x7fff ^ uVar15);
    uVar14 = (ulonglong)DAT_18111192c;
    if (DAT_18111192c == 0) {
      uVar9 = 0;
    }
    else {
      lVar13 = FUN_18000f3a0(param_3 + uVar14);
      uVar9 = 0;
      if (lVar13 != 0) {
        uVar9 = FUN_180011440((ulonglong)DAT_181111930 + 0x28 + lVar13);
      }
    }
    local_108 = CONCAT62(local_108._2_6_,uVar9);
    if (uVar12 != 0) {
      lVar13 = FUN_18000f3a0(param_3 + uVar14);
      if (lVar13 != 0) {
        uVar14 = FUN_180011220((ulonglong)DAT_181111934 + lVar13);
        if ((uVar14 & 4) == 0) {
          iVar11 = FUN_180011200((ulonglong)DAT_181111938 + param_3);
          if (iVar11 != -1) {
            lVar13 = FUN_18042fda0(iVar11);
            if (lVar13 != 0) {
              lVar13 = FUN_18000f3a0(lVar13 + 0x10);
              uVar12 = FUN_180011200(lVar13 + 0x10);
              sVar8 = FUN_180011200(lVar13 + 0x30);
              uVar16 = uVar12 - (ushort)(sVar8 << 0xf);
              uVar16 = (uVar16 ^ uVar12) & 0x7fff ^ uVar16;
            }
          }
        }
      }
    }
  }
  uStack_110 = CONCAT44(uStack_110._4_4_,uVar16);
  uStack_120 = 0x40000;
  uStack_100._0_2_ = CONCAT11(0x4b,(undefined1)uStack_100);
  local_128 = 0;
  cVar6 = FUN_180082b30(param_4,param_1,&local_138,param_2);
  if (cVar6 == '\0') {
    fVar1 = *param_1;
    fVar20 = *param_4 - fVar1;
    fVar2 = param_1[1];
    fVar22 = param_4[1] - fVar2;
    fVar3 = param_1[2];
    fVar19 = param_4[2] - fVar3;
    fVar19 = fVar19 * fVar19 + fVar22 * fVar22 + fVar20 * fVar20;
    if (fVar19 < 0.0) {
      fVar19 = (float)FUN_18051af10();
    }
    else {
      fVar19 = SQRT(fVar19);
    }
    if (DAT_1808abf94 < fVar19) {
      fVar20 = (fVar23 / fVar19) * fVar20;
      fVar22 = (fVar23 / fVar19) * fVar22;
    }
    if ((DAT_1808abfbc <= (float)((uint)fVar20 & (uint)_DAT_1808ade90)) ||
       (DAT_1808abfbc <= (float)((uint)fVar22 & (uint)_DAT_1808ade90))) {
      fVar22 = (float)((uint)fVar22 ^ DAT_1808adec0);
      fVar19 = fVar20 * fVar20 + 0.0 + fVar22 * fVar22;
      if (fVar19 < 0.0) {
        fVar21 = (float)FUN_18051af10();
      }
      else {
        fVar21 = SQRT(fVar19);
      }
      if ((fVar21 < DAT_1808abf54) || (DAT_1808accfc < fVar21)) {
        if (fVar19 == 0.0) {
          fVar21 = 0.0;
          fVar23 = 0.0;
          fVar22 = 0.0;
        }
        else {
          dVar4 = (double)fVar22;
          dVar5 = (double)fVar20;
          dVar18 = dVar5 * dVar5 + dVar4 * dVar4 + 0.0;
          if (dVar18 < 0.0) {
            dVar18 = (double)FUN_18051ff20();
          }
          else {
            dVar18 = SQRT(dVar18);
          }
          dVar18 = DAT_1808ac500 / dVar18;
          fVar22 = (float)(dVar4 * dVar18);
          fVar23 = (float)(dVar5 * dVar18);
          fVar21 = (float)(dVar18 * 0.0);
        }
      }
      else {
        fVar21 = fVar23 / fVar21;
        fVar22 = fVar21 * fVar22;
        fVar23 = fVar21 * fVar20;
        fVar21 = fVar21 * 0.0;
      }
    }
    else {
      fVar21 = 0.0;
      fVar22 = 0.0;
    }
    fVar19 = DAT_1808ac970;
    local_918 = fVar1 - fVar22 * DAT_1808ac970;
    local_914 = fVar2 - fVar23 * DAT_1808ac970;
    local_910 = (fVar3 - fVar21 * DAT_1808ac970) - DAT_1808ac970;
    cVar6 = FUN_180082b30(param_4,&local_918,&local_138,param_2);
    if (cVar6 == '\0') {
      local_908 = *param_1 - fVar22 * DAT_1808ace3c;
      local_904 = param_1[1] - fVar23 * DAT_1808ace3c;
      local_900 = (param_1[2] - fVar21 * DAT_1808ace3c) - fVar19;
      uVar7 = FUN_180082b30(param_4,&local_908,&local_138,param_2);
      goto LAB_180083663;
    }
  }
  uVar7 = 1;
LAB_180083663:
  FUN_1800244c0(&local_660);
  return uVar7;
}



/* ===== 1800836e0 FUN_1800836e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800836e0(undefined8 *param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined *puVar4;
  longlong *plVar5;
  char cVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  undefined8 *puVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong *plVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_res10 [2];
  float local_res18;
  float local_res20;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  float local_160;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_140 [6];
  undefined8 local_128;
  float local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [16];
  undefined1 local_100 [192];
  
  plVar5 = DAT_181111dd8;
  puVar4 = PTR_DAT_180c873b8;
  DAT_180ca1bdf = 0;
  if (DAT_180ccfbe8 != DAT_180ccfbf0) {
    DAT_180ccfbf0 = DAT_180ccfbe8;
  }
  local_178 = *(undefined8 *)(PTR_DAT_180c873b8 + 0x34);
  local_170 = *(float *)(PTR_DAT_180c873b8 + 0x3c);
  if (((DAT_180ccfc14 != 0) && (DAT_180ccfb58 != 0)) &&
     (plVar19 = DAT_181111dd0, DAT_180ca0a34 != 0)) {
    for (; plVar19 != plVar5; plVar19 = plVar19 + 1) {
      lVar15 = *plVar19;
      if (((lVar15 != 0) && (lVar13 = *(longlong *)(lVar15 + 8), lVar13 != 0)) &&
         ((DAT_180ca0a0c != 0 &&
          ((uVar18 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 != 0 &&
           (lVar11 = FUN_18000f3a0(lVar13 + (ulonglong)DAT_180ca0a0c), lVar11 != 0)))))) {
        uVar8 = FUN_180011200(lVar11 + uVar18);
        plVar12 = (longlong *)FUN_1803a0940(local_res10,uVar8);
        if (((*plVar12 != 0) &&
            ((((DAT_180ccfb54 != 0 && (uVar18 = (ulonglong)DAT_180ccfc04, DAT_180ccfc04 != 0)) &&
              (lVar11 = FUN_18000f3a0(*plVar12 + (ulonglong)DAT_180ccfb54 + 8),
              lVar11 - 0x10000U < 0x7ffffffeffff)) &&
             ((iVar9 = FUN_180011200(lVar11 + uVar18), iVar9 == 0 && (DAT_180ca09f8 != 0)))))) &&
           (lVar13 = FUN_18000f3a0(lVar13 + (ulonglong)DAT_180ca09f8), lVar13 != 0)) {
          pfVar14 = (float *)FUN_1800111b0(&local_150,(ulonglong)DAT_180ccfc14 + lVar13);
          local_128 = *(undefined8 *)(lVar15 + 8);
          fVar21 = (pfVar14[2] - local_170) * (pfVar14[2] - local_170);
          local_120 = (pfVar14[1] - local_178._4_4_) * (pfVar14[1] - local_178._4_4_) +
                      (*pfVar14 - (float)local_178) * (*pfVar14 - (float)local_178) + fVar21;
          FUN_18008c160(fVar21,&local_128);
        }
      }
    }
    if (DAT_180ccfbe8 != DAT_180ccfbf0) {
      FUN_18008b9f0(DAT_180ccfbe8,DAT_180ccfbf0,
                    (longlong)DAT_180ccfbf0 - (longlong)DAT_180ccfbe8 >> 4,local_res10[0]._0_1_);
      local_140[1] = *(float *)(puVar4 + 0x18) + DAT_1808ac118;
      local_140[2] = 1.0;
      local_140[0] = 0.0;
      bVar20 = true;
      pfVar14 = local_140;
      if (0.0 <= local_140[1]) {
        pfVar14 = local_140 + 1;
      }
      pfVar17 = local_140 + 2;
      if (local_140[1] <= DAT_1808ac34c) {
        pfVar17 = pfVar14;
      }
      fVar21 = *pfVar17;
      lVar15 = FUN_1803a08e0(param_1);
      if (((lVar15 != 0) && (DAT_180ccfb54 != 0)) &&
         ((uVar18 = (ulonglong)DAT_180ccfc04, DAT_180ccfc04 != 0 &&
          ((lVar13 = FUN_18000f3a0((ulonglong)DAT_180ccfb54 + 8 + lVar15),
           lVar13 - 0x10000U < 0x7ffffffeffff &&
           (iVar9 = FUN_180011200(lVar13 + uVar18), iVar9 == 0)))))) {
        if ((DAT_1809619a4 == 0) || ((DAT_1809619a8 == 0 || (DAT_180961998 == 0)))) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar7 = FUN_180011440((ulonglong)DAT_1809619a4 +
                                (ulonglong)DAT_1809619a8 + lVar15 + (ulonglong)DAT_180961998);
          uVar10 = (uint)uVar7;
        }
        bVar20 = uVar10 == 0x1f;
      }
      plVar5 = DAT_180ccfbf0;
      if (DAT_180ccfbe8 != DAT_180ccfbf0) {
        plVar19 = DAT_180ccfbe8;
        uVar10 = DAT_180ccfbd0;
        do {
          if (uVar10 == 0) {
            return;
          }
          iVar9 = FUN_180011200((ulonglong)uVar10 + *plVar19);
          if (iVar9 != -1) {
            plVar12 = (longlong *)FUN_1803a0940(local_118,iVar9);
            if ((((*plVar12 != 0) && (*plVar19 != 0)) && (DAT_180ca09f8 != 0)) &&
               (lVar15 = FUN_18000f3a0(*plVar19 + (ulonglong)DAT_180ca09f8), lVar15 != 0)) {
              puVar16 = (undefined8 *)FUN_1800111b0(local_110,(ulonglong)DAT_180ccfc14 + lVar15);
              uVar1 = *puVar16;
              fVar29 = *(float *)(puVar16 + 1);
              puVar16 = (undefined8 *)FUN_1800111b0(local_100,(ulonglong)DAT_180ca0a34 + *plVar19);
              local_160 = *(float *)(puVar16 + 1) + fVar29;
              local_168 = CONCAT44((float)((ulonglong)*puVar16 >> 0x20) +
                                   (float)((ulonglong)uVar1 >> 0x20),(float)*puVar16 + (float)uVar1)
              ;
              pfVar14 = (float *)FUN_1800111b0(&local_128,(ulonglong)DAT_180ccfb58 + *plVar19);
              local_res20 = pfVar14[1];
              local_res18 = *pfVar14;
              local_140[3] = pfVar14[2];
              fVar29 = local_res20 * local_res20 + local_res18 * local_res18;
              if (fVar29 < 0.0) {
                local_res10[0] = (float)FUN_18051af10(fVar29);
              }
              else {
                local_res10[0] = SQRT(fVar29);
              }
              local_158 = local_170;
              fVar28 = local_res10[0] * fVar21 * DAT_1808ac40c + _DAT_1808acb5c;
              fVar28 = fVar28 * fVar28;
              fVar24 = (local_178._4_4_ - local_168._4_4_) * (local_178._4_4_ - local_168._4_4_) +
                       ((float)local_178 - (float)local_168) * ((float)local_178 - (float)local_168)
                       + (local_170 - local_160) * (local_170 - local_160);
              if (fVar24 <= fVar28) {
                if ((bVar20) &&
                   (fVar21 = (float)local_168, fVar31 = local_168._4_4_,
                   fVar24 <= fVar28 * DAT_1808ac21c)) goto LAB_180083e6a;
                cVar6 = FUN_180082c80(&local_178,*param_1,*plVar19,&local_168);
                fVar25 = (float)local_178;
                fVar27 = local_178._4_4_;
                fVar21 = (float)local_168;
                fVar30 = (float)local_168;
                fVar31 = local_168._4_4_;
                if (cVar6 != '\0') goto LAB_180083e6a;
              }
              else {
                fVar25 = (float)local_178;
                fVar27 = local_178._4_4_;
                fVar30 = (float)local_168;
                fVar31 = local_168._4_4_;
                if (_DAT_1808accd8 <= fVar24) goto LAB_180083e3a;
              }
              fVar24 = fVar31 - fVar27;
              fVar26 = fVar30 - fVar25;
              fVar21 = fVar24 * fVar24 + 0.0 + fVar26 * fVar26;
              local_158 = local_170;
              if (fVar21 < 0.0) {
                fVar22 = (float)FUN_18051af10(fVar21);
              }
              else {
                fVar22 = SQRT(fVar21);
              }
              if ((fVar22 < DAT_1808abf54) || (DAT_1808accfc < fVar22)) {
                if (fVar21 == 0.0) {
                  fVar24 = 0.0;
                  fVar26 = 0.0;
                }
                else {
                  dVar2 = (double)fVar26;
                  dVar3 = (double)fVar24;
                  dVar23 = dVar3 * dVar3 + dVar2 * dVar2;
                  if (dVar23 < 0.0) {
                    dVar23 = (double)FUN_18051ff20(dVar23);
                  }
                  else {
                    dVar23 = SQRT(dVar23);
                  }
                  fVar26 = (float)(dVar2 * (DAT_1808ac500 / dVar23));
                  fVar24 = (float)(dVar3 * (DAT_1808ac500 / dVar23));
                }
              }
              else {
                fVar24 = (DAT_1808ac34c / fVar22) * fVar24;
                fVar26 = (DAT_1808ac34c / fVar22) * fVar26;
              }
              if (fVar29 == 0.0) {
                fVar29 = 0.0;
                fVar22 = 0.0;
              }
              else {
                fVar29 = (DAT_1808ac34c / local_res10[0]) * local_res18;
                fVar22 = (DAT_1808ac34c / local_res10[0]) * local_res20;
              }
              fVar21 = *pfVar17;
              if (0.0 <= fVar22 * fVar24 + fVar29 * fVar26) {
                local_150 = local_res18 * fVar21 + fVar30;
                local_14c = local_res20 * fVar21 + fVar31;
                local_148 = local_140[3] * fVar21 + local_160;
                if (((fVar25 - local_150) * (fVar25 - local_150) +
                     (fVar27 - local_14c) * (fVar27 - local_14c) +
                     (local_158 - local_148) * (local_158 - local_148) <= fVar28) &&
                   (cVar6 = FUN_180082c80(&local_178,*param_1,*plVar19,&local_150), cVar6 != '\0'))
                {
                  fVar21 = local_150;
                  fVar31 = local_14c;
LAB_180083e6a:
                  fVar21 = (float)FUN_180516b00(fVar31 - local_178._4_4_,fVar21 - (float)local_178);
                  DAT_180ca1bdf = 1;
                  DAT_180ccfbbc = fVar21 * DAT_1808aca94;
                  return;
                }
              }
            }
LAB_180083e3a:
            uVar10 = DAT_180ccfbd0;
          }
          plVar19 = plVar19 + 2;
        } while (plVar19 != plVar5);
      }
    }
  }
  return;
}



/* ===== 180083f30 FUN_180083f30 ===== */

float * FUN_180083f30(float *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_78 [112];
  
  if ((((*param_2 == 0) || (DAT_180ca09f8 == 0)) ||
      (lVar4 = FUN_18000f3a0(*param_2 + (ulonglong)DAT_180ca09f8), lVar4 == 0)) ||
     (DAT_180ca0950 == 0)) {
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar10 = 0.0;
  }
  else {
    pfVar5 = (float *)FUN_1800111b0(local_78,lVar4 + (ulonglong)DAT_180ca0950);
    fVar7 = *pfVar5;
    fVar8 = pfVar5[1];
    fVar10 = pfVar5[2];
  }
  if (((DAT_180ccfbcc == 0) ||
      (lVar4 = FUN_18000f3a0((ulonglong)DAT_180ccfbcc + *param_2), 0x7ffffffefffe < lVar4 - 0x10000U
      )) || ((DAT_180ccfbc4 == 0 || (uVar6 = (ulonglong)DAT_180ccfb38, DAT_180ccfb38 == 0)))) {
    *param_1 = fVar7;
    param_1[1] = fVar8;
    param_1[2] = fVar10;
    return param_1;
  }
  pfVar5 = (float *)FUN_1800111b0(local_78,lVar4 + (ulonglong)DAT_180ccfbc4);
  fVar1 = *pfVar5;
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[2];
  pfVar5 = (float *)FUN_1800111b0(local_78,lVar4 + uVar6);
  fVar9 = ((fVar8 + pfVar5[1]) - (fVar8 + fVar2)) * DAT_1808ac1f4;
  fVar11 = ((fVar10 + pfVar5[2]) - (fVar10 + fVar3)) * DAT_1808ac1f4;
  *param_1 = fVar7 + fVar1 + ((fVar7 + *pfVar5) - (fVar7 + fVar1)) * DAT_1808ac1f4;
  param_1[1] = fVar9 + fVar8 + fVar2;
  param_1[2] = fVar11 + fVar10 + fVar3;
  return param_1;
}



/* ===== 180084100 FUN_180084100 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180084100(float *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *puVar8;
  uint uVar9;
  longlong *plVar10;
  float *pfVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong local_res10;
  undefined1 local_d8 [16];
  undefined1 local_c8 [176];
  
  plVar10 = DAT_181111dd8;
  uVar9 = DAT_180ca0a1c;
  puVar8 = PTR_DAT_180c873b8;
  fVar7 = DAT_1808accfc;
  fVar6 = DAT_1808aca94;
  fVar5 = DAT_1808ac34c;
  fVar4 = DAT_1808abf54;
  uVar13 = 0;
  fVar21 = *(float *)(PTR_DAT_180c873b8 + 0x18) + DAT_1808ac05c;
  if (DAT_181111dd0 != DAT_181111dd8) {
    uVar14 = (ulonglong)DAT_180ca0a1c;
    plVar12 = DAT_181111dd0;
    fVar15 = DAT_1808acda0;
    do {
      if ((*plVar12 != 0) && (local_res10 = *(longlong *)(*plVar12 + 8), local_res10 != 0)) {
        if (uVar9 == 0) {
          fVar16 = 0.0;
          fVar18 = 0.0;
          fVar20 = 0.0;
        }
        else {
          pfVar11 = (float *)FUN_1800111b0(local_d8,local_res10 + uVar14);
          fVar16 = *pfVar11;
          fVar18 = pfVar11[1];
          fVar20 = pfVar11[2];
        }
        pfVar11 = (float *)FUN_180083f30(local_c8,&local_res10);
        fVar19 = (fVar18 * fVar21 + pfVar11[1]) - *(float *)(puVar8 + 0x38);
        fVar20 = (fVar20 * fVar21 + pfVar11[2]) - *(float *)(puVar8 + 0x3c);
        fVar18 = (fVar16 * fVar21 + *pfVar11) - *(float *)(puVar8 + 0x34);
        fVar16 = fVar19 * fVar19 + fVar20 * fVar20 + fVar18 * fVar18;
        if (fVar16 < 0.0) {
          fVar16 = (float)FUN_18051af10(fVar16);
        }
        else {
          fVar16 = SQRT(fVar16);
        }
        if ((fVar16 < fVar4) || (fVar7 < fVar16)) {
          dVar1 = (double)fVar18;
          dVar2 = (double)fVar19;
          dVar3 = (double)fVar20;
          fVar18 = 0.0;
          fVar19 = 0.0;
          fVar16 = 0.0;
          dVar17 = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
          if (dVar17 != _DAT_1808abf48) {
            if (dVar17 < 0.0) {
              dVar17 = (double)FUN_18051ff20(dVar17);
            }
            else {
              dVar17 = SQRT(dVar17);
            }
            dVar17 = DAT_1808ac500 / dVar17;
            fVar18 = (float)(dVar1 * dVar17);
            fVar19 = (float)(dVar2 * dVar17);
            fVar16 = (float)(dVar3 * dVar17);
          }
        }
        else {
          fVar16 = fVar5 / fVar16;
          fVar18 = fVar16 * fVar18;
          fVar19 = fVar16 * fVar19;
          fVar16 = fVar16 * fVar20;
        }
        fVar16 = fVar16 * *(float *)(puVar8 + 0x30) + fVar19 * *(float *)(puVar8 + 0x2c) +
                 fVar18 * *(float *)(puVar8 + 0x28);
        if (fVar15 < fVar16) {
          fVar15 = (float)FUN_180516b00(fVar19,fVar18);
          uVar13 = 1;
          *param_1 = fVar15 * fVar6;
          fVar15 = fVar16;
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar10);
  }
  return uVar13;
}



/* ===== 180084400 FUN_180084400 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180084400(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  int local_res20 [2];
  float local_68;
  float local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  fVar3 = DAT_1808ace7c;
  fVar2 = DAT_1808acb58;
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,param_4);
  if ((DAT_1809634e9 == '\0') || (DAT_180ca1bdf == '\0')) {
    bVar1 = false;
    if (DAT_180963549 == '\0') {
      if (DAT_1809634cc == 0) {
        _DAT_180ca0050 = (float)param_2;
        return;
      }
      if (DAT_1809634cc == 1) {
        local_res20[0] = 0;
        FUN_180084100(local_res20);
      }
      local_res20[0] = -0x3ccc0000;
    }
    else if (DAT_180963518 == 0) {
      local_res20[0] = DAT_180963518;
      FUN_180084100(local_res20);
    }
  }
  else {
    bVar1 = true;
  }
  if (((DAT_1809634d4 != '\0') && (!bVar1)) && (DAT_180963549 == '\0')) {
    local_res20[0] = -0x3ccc0000;
  }
  if (DAT_180ca15bf == '\0') {
    fVar6 = 0.0;
  }
  else {
    fVar6 = DAT_180ccfc00;
  }
  pfVar4 = &local_68;
  local_64 = 180.0;
  local_68 = -180.0;
  if (fVar3 <= DAT_1809634f4._4_4_) {
    pfVar4 = (float *)((longlong)&DAT_1809634f4 + 4);
  }
  pfVar5 = &local_64;
  if (DAT_1809634f4._4_4_ <= fVar2) {
    pfVar5 = pfVar4;
  }
  if (((((DAT_1809634f1 != '\0') && (fVar6 + *pfVar5 != 0.0)) &&
       ((DAT_1809634fe == '\0' || (DAT_180962432 != '\0')))) &&
      ((DAT_1809634ff == '\0' || (DAT_180963549 == '\0')))) && ((int)DAT_1809634f4 != 0)) {
    if ((int)DAT_1809634f4 == 2) {
      FUN_180273960();
    }
    else if ((int)DAT_1809634f4 == 3) {
      local_60 = _DAT_1808ad550;
      uStack_58 = _UNK_1808ad558;
    }
  }
  fVar6 = DAT_1808acbd0;
  _DAT_180ca0050 = (float)FUN_180519fe0();
  if (fVar2 < _DAT_180ca0050) {
    _DAT_180ca0050 = _DAT_180ca0050 - fVar6;
  }
  if (_DAT_180ca0050 < fVar3) {
    _DAT_180ca0050 = _DAT_180ca0050 + fVar6;
  }
  return;
}



/* ===== 180084740 FUN_180084740 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_180084740(undefined8 param_1,float param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res8;
  undefined4 uStackX_c;
  float local_res18 [4];
  float local_78 [30];
  
  uVar3 = DAT_180ccfbb0;
  uVar2 = DAT_180ccfb44;
  if ((DAT_1809634c0 == '\0') || (DAT_180963514 == '\0')) {
    DAT_180ca1bdc = '\0';
  }
  else {
    DAT_180ca1bdc = '\x01';
  }
  LOCK();
  UNLOCK();
  local_78[2] = 100.0;
  local_78[0] = 0.0;
  DAT_180963560 = DAT_1808ac34c;
  if (DAT_1808ac34c <= DAT_180962dfc * DAT_1808ac0d8) {
    DAT_180963560 = DAT_180962dfc * DAT_1808ac0d8;
  }
  local_78[1] = (float)DAT_180963524;
  pfVar4 = local_78;
  if (0.0 <= local_78[1]) {
    pfVar4 = local_78 + 1;
  }
  pfVar5 = local_78 + 2;
  if (local_78[1] <= DAT_1808acb08) {
    pfVar5 = pfVar4;
  }
  fVar10 = (DAT_180963560 * *pfVar5) / DAT_1808acb08;
  _local_res8 = CONCAT44((int)((ulonglong)param_1 >> 0x20),fVar10);
  if (DAT_180ca1bdc == '\0') {
    if (DAT_180963548 != '\0') {
      bVar1 = true;
      goto LAB_180084842;
    }
  }
  else if (DAT_180963548 == '\0') {
    _DAT_18096354c = 0;
    DAT_18096354a = '\x01';
    DAT_18096355c = '\0';
    LOCK();
    DAT_180ccfb44 = 0;
    pfVar5 = (float *)(ulonglong)uVar2;
    UNLOCK();
    LOCK();
    DAT_180ccfbb0 = 0;
    pfVar4 = (float *)(ulonglong)uVar3;
    UNLOCK();
  }
  bVar1 = false;
LAB_180084842:
  uVar3 = DAT_180ccfbb0;
  uVar2 = DAT_180ccfb44;
  DAT_180963548 = DAT_180ca1bdc;
  if (DAT_18096354a == '\0') {
    DAT_180963549 = '\0';
  }
  else if (DAT_180ca1bdc == '\0') {
    LOCK();
    DAT_180ccfb44 = 0;
    pfVar5 = (float *)(ulonglong)uVar2;
    UNLOCK();
    LOCK();
    DAT_180ccfbb0 = 0;
    UNLOCK();
    if (DAT_180963549 == '\0') {
      DAT_18096354a = '\0';
      DAT_18096355c = '\0';
    }
    else if ((DAT_180963518 == 2) && (DAT_18096355c != '\0')) {
      if (bVar1) {
        local_res18[0] = (float)FUN_18053e9f0(uVar3,DAT_180963550);
        pfVar4 = &local_res8;
        if (fVar10 <= local_res18[0]) {
          pfVar4 = local_res18;
        }
        if (DAT_180963560 < local_res18[0]) {
          pfVar4 = &DAT_180963560;
        }
        DAT_180963564 = *pfVar4;
      }
      fVar10 = DAT_180963564;
      FUN_180519fe0(DAT_180963558 - _DAT_180963554,DAT_1808acbd0);
      fVar6 = (float)FUN_180517200();
      _DAT_18096354c = CONCAT44(DAT_180963550,fVar6 * fVar10);
      pfVar5 = (float *)FUN_180517790();
      _DAT_18096354c = CONCAT44(extraout_XMM0_Da * fVar10,DAT_18096354c);
    }
  }
  else {
    LOCK();
    DAT_180ccfb44 = 0;
    UNLOCK();
    fVar6 = DAT_1808abfbc;
    if (DAT_1808abfbc <= (float)DAT_180963520 * DAT_1808abfd8) {
      fVar6 = (float)DAT_180963520 * DAT_1808abfd8;
    }
    fVar9 = DAT_18096354c + (float)(int)uVar2 * fVar6;
    LOCK();
    DAT_180ccfbb0 = 0;
    UNLOCK();
    fVar11 = DAT_180963550 + (float)(int)uVar3 * fVar6;
    _DAT_18096354c = CONCAT44(fVar11,fVar9);
    fVar6 = (float)FUN_18053e9f0(pfVar4,fVar11);
    if ((DAT_180963560 < fVar6) && (0.0 < fVar6)) {
      _DAT_18096354c = CONCAT44((DAT_180963560 / fVar6) * fVar11,fVar9 * (DAT_180963560 / fVar6));
    }
    FUN_18053e9f0();
    bVar1 = fVar10 < extraout_XMM0_Da_00;
    if ((extraout_XMM0_Da_00 <= fVar10) || (DAT_180963549 != '\0')) {
      if (!bVar1) {
        DAT_180963549 = bVar1;
        DAT_18096355c = 0;
        return (float *)(ulonglong)bVar1;
      }
    }
    else {
      DAT_18096355c = '\x01';
      DAT_180963558 = param_2;
    }
    DAT_180963549 = bVar1;
    auVar7._0_8_ = FUN_180516b00();
    fVar10 = DAT_1808acbd0;
    auVar7._8_8_ = extraout_XMM0_Qb;
    auVar8._4_12_ = auVar7._4_12_;
    auVar8._0_4_ = (float)auVar7._0_8_ * DAT_1808aca94 + DAT_1808acaf4;
    pfVar5 = (float *)FUN_180519fe0(auVar8._0_8_,DAT_1808acbd0);
    _DAT_180963554 = extraout_XMM0_Da_01;
    if (DAT_1808acb58 < extraout_XMM0_Da_01) {
      _DAT_180963554 = extraout_XMM0_Da_01 - fVar10;
    }
    if (_DAT_180963554 < DAT_1808ace7c) {
      _DAT_180963554 = _DAT_180963554 + fVar10;
    }
  }
  return pfVar5;
}



/* ===== 180084b50 FUN_180084b50 ===== */

float FUN_180084b50(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_180519fe0(param_1 - param_2,DAT_1808acbd0);
  if (param_1 <= param_2) {
    if (fVar1 <= DAT_1808ace7c) {
      fVar1 = fVar1 + DAT_1808acbd0;
    }
  }
  else if (DAT_1808acb58 <= fVar1) {
    return fVar1 - DAT_1808acbd0;
  }
  return fVar1;
}



/* ===== 180084bd0 FUN_180084bd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180084bd0(char *param_1,undefined4 param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined *puVar12;
  char *pcVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_3b8 [32];
  double local_398;
  undefined4 local_390;
  double local_388;
  undefined4 local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  longlong local_308 [2];
  char local_2f8 [512];
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_3b8;
  if (DAT_1808aca68 <= param_3) {
    if (*param_1 == '\0') {
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(local_308);
      }
      else {
        local_308[0] = DAT_181108a00;
      }
      if (local_308[0] == 0) {
        if (6000 < DAT_180ca00c8) {
          return;
        }
        pcVar13 = "skip no controller";
        goto LAB_180084c4a;
      }
      lVar8 = FUN_18000f3a0(local_308[0] + 0x10);
      if (lVar8 == 0) {
        uVar14 = 0xffffffff;
LAB_1800851ec:
        snprintf(local_2f8,0x200,"skip no lag entry %d",uVar14);
        if (DAT_180ca00c8 < 0x1771) {
          DAT_180ca00c8 = DAT_180ca00c8 + 1;
          FUN_1802b2870("wl_antiaim.log","aa  | cmd %d | %s\n",param_2,local_2f8);
          return;
        }
        return;
      }
      uVar6 = FUN_180011200(lVar8 + 0x10);
      uVar14 = (ulonglong)(uVar6 & 0x7fff);
      if (((int)(DAT_181112370 - DAT_181112368 >> 4) * -0x194be3ab <= (int)(uVar6 & 0x7fff)) ||
         (lVar8 = uVar14 * 0xfd0 + DAT_181112368, lVar8 == 0)) goto LAB_1800851ec;
      iVar4 = *(int *)(lVar8 + 0xf10);
      fVar23 = 0.0;
      if (iVar4 < 1) {
        snprintf(local_2f8,0x200,"n 0 | delta 0 | yaw %.2f",(double)*param_4);
        goto LAB_18008517b;
      }
      uVar6 = *(uint *)(lVar8 + 0xf14);
      uVar7 = uVar6 & 0x8000000f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
      }
      uVar7 = uVar7 + 0x10 & 0x8000000f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
      }
      lVar11 = (longlong)(int)uVar7 * 0xe8;
      lVar5 = *(longlong *)(lVar11 + 0x110 + lVar8);
      if (lVar5 == *(longlong *)(lVar11 + 0x118 + lVar8)) {
        local_390 = *(undefined4 *)(lVar11 + 0x98 + lVar8);
        local_388 = (double)*param_4;
        local_398 = (double)CONCAT44(local_398._4_4_,*(undefined4 *)(lVar11 + 0x90 + lVar8));
        snprintf(local_2f8,0x200,"n %d r tick %d cmd %d | no hitboxes | delta 0 | yaw %.2f",iVar4);
        goto LAB_18008517b;
      }
      fVar1 = *(float *)(lVar11 + 0xa4 + lVar8);
      fVar2 = *(float *)(lVar5 + 0x18);
      fVar23 = fVar2 - fVar1;
      fVar3 = *(float *)(lVar11 + 0xa8 + lVar8);
      fVar21 = *(float *)(lVar5 + 0x1c) - fVar3;
      fVar20 = fVar21 * fVar21 + fVar23 * fVar23;
      if (fVar20 < 0.0) {
        fVar22 = (float)FUN_18051af10(fVar20);
      }
      else {
        fVar22 = SQRT(fVar20);
      }
      if (fVar20 == 0.0) {
        fVar23 = 0.0;
        fVar21 = 0.0;
      }
      else {
        fVar23 = (DAT_1808ac34c / fVar22) * fVar23;
        fVar21 = (DAT_1808ac34c / fVar22) * fVar21;
      }
      fVar20 = (float)FUN_180516b00(fVar21,fVar23);
      fVar21 = *(float *)(lVar11 + 0xe0 + lVar8);
      fVar20 = fVar20 * DAT_1808aca94;
      if (iVar4 < 2) {
        fVar23 = (float)FUN_180084b50(fVar20,fVar21);
        fVar17 = *param_4;
        fVar23 = fVar23 + 0.0;
        fVar16 = fVar21;
LAB_180084ff3:
        local_380 = 0;
        uVar10 = 0;
        fVar18 = 0.0;
        fVar19 = 0.0;
      }
      else {
        uVar6 = uVar6 + 1 & 0x8000000f;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
        }
        uVar6 = uVar6 + 0x10 & 0x8000000f;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
        }
        lVar15 = (longlong)(int)uVar6 * 0xe8;
        fVar16 = (float)FUN_180084b50(*(undefined4 *)(lVar15 + 0xe0 + lVar8),
                                      *(undefined4 *)(lVar15 + 0xd8 + lVar8));
        fVar16 = fVar16 + *(float *)(lVar11 + lVar8 + 0xd8);
        fVar23 = (float)FUN_180084b50(fVar20,fVar16);
        fVar17 = *param_4;
        fVar23 = fVar23 + 0.0;
        puVar9 = (undefined4 *)(lVar8 + 0x90 + lVar15);
        if (puVar9 == (undefined4 *)0x0) goto LAB_180084ff3;
        local_380 = *(undefined4 *)(lVar15 + 0x98 + lVar8);
        uVar10 = *puVar9;
        fVar19 = *(float *)(lVar15 + 0xd8 + lVar8);
        fVar18 = *(float *)(lVar15 + 0xe0 + lVar8);
      }
      local_390 = *(undefined4 *)(lVar11 + 0x98 + lVar8);
      local_358 = (double)fVar22;
      local_310 = (double)(fVar17 - fVar23);
      local_368 = (double)fVar1;
      local_328 = (double)fVar16;
      local_340 = (double)fVar21;
      local_318 = (double)fVar17;
      local_320 = (double)fVar23;
      local_330 = (double)fVar18;
      local_338 = (double)fVar19;
      local_348 = (double)*(float *)(lVar11 + lVar8 + 0xd8);
      local_350 = (double)fVar20;
      local_360 = (double)fVar3;
      local_370 = (double)*(float *)(lVar5 + 0x1c);
      local_378 = (double)fVar2;
      local_388 = (double)CONCAT44(local_388._4_4_,uVar10);
      local_398 = (double)CONCAT44(local_398._4_4_,*(undefined4 *)(lVar11 + 0x90 + lVar8));
      snprintf(local_2f8,0x200,
               "n %d r tick %d cmd %d p tick %d cmd %d | b %.2f %.2f org %.2f %.2f (%.2f u) head yaw %.2f | abs %.2f eye %.2f | prev abs %.2f eye %.2f | expected %.2f | delta %.2f | yaw %.2f -> %.2f"
               ,iVar4);
LAB_18008517b:
      if (DAT_180ca00c8 < 0x1771) {
        DAT_180ca00c8 = DAT_180ca00c8 + 1;
        FUN_1802b2870("wl_antiaim.log","aa  | cmd %d | %s\n",param_2,local_2f8);
      }
      *param_4 = *param_4 - fVar23;
      return;
    }
    puVar12 = &DAT_1806e5208;
    local_398 = (double)*param_4;
    if (param_1[3] != '\0') {
      puVar12 = &DAT_1806e5210;
    }
    snprintf(local_2f8,0x200,"skip m_bDuckOverride (%s) | yaw %.2f",puVar12);
  }
  else {
    local_398 = (double)*param_4;
    snprintf(local_2f8,0x200,"skip pitch %.2f < 45 | yaw %.2f",(double)param_3);
  }
  if (6000 < DAT_180ca00c8) {
    return;
  }
  pcVar13 = local_2f8;
LAB_180084c4a:
  DAT_180ca00c8 = DAT_180ca00c8 + 1;
  FUN_1802b2870("wl_antiaim.log","aa  | cmd %d | %s\n",param_2,pcVar13);
  return;
}



/* ===== 180085260 FUN_180085260 ===== */

void FUN_180085260(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 *puVar13;
  char *pcVar14;
  uint *puVar15;
  ulonglong uVar16;
  int iVar17;
  longlong local_res10;
  
  if (((DAT_180920ffa != '\0') && (param_1 != 0)) && (DAT_180ccfae7 != '\0')) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res10);
      DAT_181108a00 = local_res10;
      DAT_1811089f8 = FUN_1803a0c50(&local_res10);
      DAT_180cd1304 = '\x01';
    }
    lVar10 = DAT_1811089f8;
    if ((DAT_1811089f8 != 0) && (DAT_180ca09f0 != 0)) {
      iVar4 = FUN_180011200(DAT_1811089f8 + (ulonglong)DAT_180ca09f0);
      lVar3 = DAT_181108a00;
      if ((((iVar4 - 1U < 1000) && ((DAT_181108a00 != 0 && (DAT_180ca0a0c != 0)))) &&
          (uVar16 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 != 0)) &&
         (lVar10 = FUN_18000f3a0(lVar10 + (ulonglong)DAT_180ca0a0c), lVar10 != 0)) {
        uVar5 = FUN_180011200(lVar10 + uVar16);
        plVar11 = (longlong *)FUN_1803a0940(&local_res10,uVar5);
        lVar10 = *plVar11;
        if (lVar10 != 0) {
          uVar6 = FUN_18038eaf0("C_BasePlayerWeapon","m_iClip1");
          uVar7 = FUN_18038eaf0("CBasePlayerWeaponVData","m_iMaxClip1");
          uVar8 = FUN_18038eaf0("C_BaseEntity","m_nSubclassID");
          if ((((uVar6 != 0) && (uVar7 != 0)) && (uVar8 != 0)) &&
             (lVar12 = FUN_18000f3a0((ulonglong)uVar8 + 8 + lVar10),
             lVar12 - 0x10000U < 0x7ffffffeffff)) {
            iVar4 = FUN_180011200(lVar12 + (ulonglong)uVar7);
            iVar9 = FUN_180011200(lVar10 + (ulonglong)uVar6);
            if (((iVar9 == iVar4) && (DAT_180961a48 != (code *)0x0)) &&
               (lVar3 - 0x10000U < 0x7ffffffeffff)) {
              iVar1 = *(int *)(param_1 + 8);
              if (((0 < (int)(iVar1 - 1U)) &&
                  (lVar10 = (*DAT_180961a48)(lVar3), lVar10 - 0x10000U < 0x7ffffffeffff)) &&
                 ((DAT_180961fd0 != 0 &&
                  ((lVar10 = ((ulonglong)(iVar1 - 1U) % (ulonglong)DAT_180961fd0) *
                             (ulonglong)DAT_180961fd4 + lVar10, lVar10 - 0x10000U < 0x7ffffffeffff
                   && (*(longlong *)(lVar10 + 8) == (longlong)iVar1 + -1)))))) {
                lVar12 = *(longlong *)(lVar10 + 0x40);
                if ((lVar12 == 0) ||
                   ((0x7ffffffefffe < lVar12 - 0xff94U || ((*(uint *)(lVar12 + 0x10) & 0x400) == 0))
                   )) {
                  if (DAT_180961a48 == (code *)0x0) {
                    return;
                  }
                  if ((int)(iVar1 - 2U) < 1) {
                    return;
                  }
                  lVar10 = (*DAT_180961a48)(lVar3);
                  if (0x7ffffffefffe < lVar10 - 0x10000U) {
                    return;
                  }
                  if (DAT_180961fd0 == 0) {
                    return;
                  }
                  lVar10 = ((ulonglong)(iVar1 - 2U) % (ulonglong)DAT_180961fd0) *
                           (ulonglong)DAT_180961fd4 + lVar10;
                  if (0x7ffffffefffe < lVar10 - 0x10000U) {
                    return;
                  }
                  if (*(longlong *)(lVar10 + 8) != (longlong)iVar1 + -2) {
                    return;
                  }
                  lVar3 = *(longlong *)(lVar10 + 0x40);
                  if (lVar3 == 0) {
                    return;
                  }
                  if (0x7ffffffefffe < lVar3 - 0xff94U) {
                    return;
                  }
                  if ((*(uint *)(lVar3 + 0x10) & 0x400) == 0) {
                    return;
                  }
                  uVar6 = FUN_180011200(lVar3 + 0x68);
                  uVar16 = 0x2000;
                }
                else {
                  uVar16 = 0x800000000;
                  uVar6 = FUN_180011200(lVar12 + 0x68);
                }
                iVar2 = *(int *)(lVar10 + 8);
                if (0 < iVar2) {
                  iVar17 = iVar2 + -1;
                  lVar10 = (longlong)(iVar17 % 0x96);
                  puVar13 = (undefined4 *)0x0;
                  if ((&DAT_180c3df70)[lVar10 * 500] == iVar17) {
                    puVar13 = &DAT_180c3df70 + lVar10 * 500;
                  }
                  if (puVar13 != (undefined4 *)0x0) {
                    puVar15 = (uint *)&DAT_0000035c;
                    if ((&DAT_180c3df70)[lVar10 * 500] == iVar17) {
                      puVar15 = (uint *)(&DAT_180c3e2cc + lVar10 * 2000);
                    }
                    if ((*puVar15 & 0x7fff) != uVar6) {
                      DAT_180cf9fc8 = DAT_180cf9fc8 | uVar16;
                      pcVar14 = "IN_LOOK_AT_WEAPON 1<<35";
                      if (uVar16 == 0x2000) {
                        pcVar14 = "IN_RELOAD 0x2000";
                      }
                      FUN_1802b2560("[antiaim] fast weapon switch | cmd %d | weaponselect %d in cmd %d (held %d) | clip %d/%d | pressed %s"
                                    ,iVar1,uVar6,iVar2,*puVar15 & 0x7fff,iVar9,iVar4,pcVar14);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== 180085670 FUN_180085670 ===== */

bool FUN_180085670(ulonglong param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  float extraout_XMM0_Da;
  ulonglong local_res8;
  
  local_res8 = param_1;
  uVar2 = FUN_18038eaf0("C_CSGameRulesProxy","m_pGameRules");
  uVar3 = FUN_18038eaf0("C_CSGameRules","m_bFreezePeriod");
  uVar4 = FUN_18038eaf0("C_CSGameRules","m_fRoundStartTime");
  if (uVar2 == 0) {
    return false;
  }
  if (uVar3 == 0) {
    return false;
  }
  if (uVar4 == 0) {
    return false;
  }
  if (DAT_180ca0058 != 0) {
    local_res8 = DAT_180ca0058;
    pcVar6 = (char *)FUN_1803a0710(&local_res8);
    if ((pcVar6 != (char *)0x0) && (iVar5 = strcmp(pcVar6,"C_CSGameRulesProxy"), iVar5 == 0))
    goto LAB_1800857c1;
  }
  DAT_180ca0058 = 0;
  uVar9 = 0;
  do {
    lVar7 = FUN_18000f3a0(DAT_1809619d0);
    if ((((lVar7 != 0) &&
         (lVar7 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                                lVar7 + (ulonglong)(uint)(((int)uVar9 >> 9) * DAT_180961944)),
         lVar7 - 0x10000U < 0xfffffffffffeffff)) &&
        (uVar8 = FUN_18000f3a0((ulonglong)((uVar9 & 0x1ff) * DAT_180961948) + lVar7),
        uVar8 - 0x10000 < 0xfffffffffffeffff)) &&
       ((local_res8 = uVar8, pcVar6 = (char *)FUN_1803a0710(&local_res8), pcVar6 != (char *)0x0 &&
        (iVar5 = strcmp(pcVar6,"C_CSGameRulesProxy"), iVar5 == 0)))) {
      DAT_180ca0058 = uVar8;
      goto LAB_1800857c8;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x400);
LAB_1800857c1:
LAB_1800857c8:
  if (((DAT_180ca0058 == 0) ||
      (lVar7 = FUN_18000f3a0(DAT_180ca0058 + uVar2), 0x7ffffffefffe < lVar7 - 0x10000U)) ||
     (cVar1 = FUN_180011220(lVar7 + (ulonglong)uVar3), cVar1 == '\0')) {
    return false;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    uVar8 = local_res8;
  }
  else {
    uVar8 = DAT_181108a00;
  }
  if ((uVar8 == 0) || (DAT_180ca09b8 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_180011200(DAT_180ca09b8 + uVar8);
  }
  FUN_18000f3d0(lVar7 + (ulonglong)uVar4);
  return (float)iVar5 * DAT_1808ac00c + DAT_1808ac1f4 <= extraout_XMM0_Da;
}



/* ===== 180085890 FUN_180085890 ===== */

void FUN_180085890(int param_1,longlong param_2,undefined4 param_3,int *param_4,float param_5,
                  float param_6,float param_7,float param_8,undefined8 param_9,float param_10,
                  float param_11)

{
  int iVar1;
  char *pcVar2;
  
  if (DAT_18091a180 == param_1) {
    DAT_180ca0038 = DAT_180ca0038 + 1;
  }
  else {
    DAT_180ca0038 = 0;
  }
  DAT_18091a180 = param_1;
  if (DAT_180ca0064 < 4000) {
    iVar1 = *param_4;
    DAT_180ca0064 = DAT_180ca0064 + 1;
    if (iVar1 == 1) {
      pcVar2 = "stash tick (m_fStashGrenadeParameterWhen)";
    }
    else if (iVar1 == 2) {
      pcVar2 = "throw tick, stash ahead of throw (d <= 0)";
    }
    else if (iVar1 == 3) {
      pcVar2 = "throw tick, stash too old (d > 0.2)";
    }
    else if (iVar1 == 4) {
      pcVar2 = "throw tick, m_bJumpThrow";
    }
    else {
      pcVar2 = "no";
    }
    FUN_1802b2560("[antiaim] grenade | cmd %d.%d | snap t %d frac %.3f (rec %d, live %d) held %d pin %d throw %.4f now %.4f | stash when %.4f (tick %d) time %.4f d %.3f jump %d | release: %s | aa %.2f %.2f view %.2f %.2f valve %d | %s | sent %.2f %.2f"
                  ,param_1,DAT_180ca0038,param_4[1],(double)(float)param_4[2],
                  *(undefined4 *)(param_2 + 0x120),param_3,*(char *)(param_2 + 899) != '\0',
                  *(char *)(param_2 + 0x380) != '\0',(double)*(float *)(param_2 + 0x38c),
                  (double)(float)param_4[4],(double)*(float *)(param_2 + 0x1ec),param_4[3],
                  (double)*(float *)(param_2 + 0xe0),(double)(float)param_4[5],
                  *(char *)(param_2 + 900) != '\0',pcVar2,(double)param_5,(double)param_6,
                  (double)param_7,(double)param_8,DAT_180ca15bf != '\0',param_9,(double)param_10,
                  (double)param_11);
  }
  return;
}



/* ===== 180085b30 FUN_180085b30 ===== */

undefined8 FUN_180085b30(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (((param_1 == 0) || (DAT_180962050 == (code *)0x0)) || (DAT_180962058 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar2 = (*DAT_180962050)();
    uVar1 = (*DAT_180962058)(param_1,uVar2);
  }
  return uVar1;
}



