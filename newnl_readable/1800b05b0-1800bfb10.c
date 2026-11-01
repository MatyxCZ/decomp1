/* ===== 1800b05b0 FUN_1800b05b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800b05b0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  undefined *local_198 [2];
  undefined4 local_188 [2];
  longlong local_180;
  longlong local_178;
  longlong local_170;
  ulonglong local_168;
  undefined1 local_160 [64];
  double local_120;
  undefined8 local_118;
  double local_110;
  undefined4 local_e0;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [24];
  undefined1 local_60 [40];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  puVar7 = auStack_1b8;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  if (DAT_180920eac == '\0') goto LAB_1800b0810;
  FUN_1800b0860(local_188,param_1);
  local_188[0] = 3;
  local_e0 = 3;
  plVar3 = (longlong *)FUN_180073a70(local_38);
  if (&local_180 == plVar3) {
LAB_1800b06b6:
    FUN_18000f890(local_38);
    FUN_180029840(local_160,&DAT_1806e79d4,4);
    FUN_180067240(local_78,param_2);
    plVar3 = (longlong *)FUN_1800ad890(local_198);
    local_120 = (double)*plVar3 / DAT_1808ac9a0;
    local_118 = DAT_1808ac5b0;
    plVar3 = (longlong *)&DAT_1809e9bd0;
    local_198[0] = &DAT_1809e9bd0;
    local_110 = local_120;
    iVar2 = FUN_1804e4d70(&DAT_1809e9bd0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809e9c1c == 0x7fffffff) {
      DAT_1809e9c1c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    FUN_1800b3570(extraout_XMM0_Qa,local_188);
    puVar6 = auStack_1b8;
    puVar7 = auStack_1b8;
    if (0x20 < DAT_180ca0d98) {
      do {
        FUN_1800b0980(*(undefined8 *)(DAT_180ca0d80 + (DAT_180ca0d88 - 1U & DAT_180ca0d90) * 8));
        DAT_180ca0d98 = DAT_180ca0d98 - 1;
        if (DAT_180ca0d98 == 0) goto LAB_1800b07b1;
        DAT_180ca0d90 = DAT_180ca0d90 + 1;
        puVar7 = auStack_1b8;
      } while (0x20 < DAT_180ca0d98);
    }
  }
  else {
    if (local_168 < 0x10) {
LAB_1800b0669:
      local_180 = *plVar3;
      local_178 = plVar3[1];
      local_170 = plVar3[2];
      local_168 = plVar3[3];
      plVar3[2] = 0;
      plVar3[3] = 0xf;
      *(undefined1 *)plVar3 = 0;
      goto LAB_1800b06b6;
    }
    uVar5 = local_168 + 1;
    lVar4 = local_180;
    if (uVar5 < 0x1000) {
LAB_1800b0664:
      thunk_FUN_1803d64e0(lVar4,uVar5);
      goto LAB_1800b0669;
    }
    lVar4 = *(longlong *)(local_180 + -8);
    if ((local_180 - lVar4) - 8U < 0x20) {
      uVar5 = local_168 + 0x28;
      goto LAB_1800b0664;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_1b0;
LAB_1800b07b1:
    DAT_180ca0d90 = 0;
    puVar7 = puVar6;
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800b07c4;
  FUN_1804e4e90(plVar3);
  *(undefined8 *)(puVar7 + -8) = 0x1800b07ce;
  FUN_18000f890(local_60);
  *(undefined8 *)(puVar7 + -8) = 0x1800b07d7;
  FUN_1800288b0(local_78);
  *(undefined8 *)(puVar7 + -8) = 0x1800b07e0;
  FUN_18000f890(local_98);
  *(undefined8 *)(puVar7 + -8) = 0x1800b07e9;
  FUN_18000f890(local_b8);
  *(undefined8 *)(puVar7 + -8) = 0x1800b07f2;
  FUN_18000f890(local_d8);
  *(undefined8 *)(puVar7 + -8) = 0x1800b07fc;
  FUN_18000f890(puVar7 + 0x78);
  *(undefined8 *)(puVar7 + -8) = 0x1800b0806;
  FUN_18000f890(puVar7 + 0x58);
  *(undefined8 *)(puVar7 + -8) = 0x1800b0810;
  FUN_18000f890(puVar7 + 0x38);
LAB_1800b0810:
  *(undefined8 *)(puVar7 + -8) = 0x1800b081f;
  return;
}



/* ===== 1800b0860 FUN_1800b0860 ===== */

undefined4 * FUN_1800b0860(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xf;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x22] = 0xbf800000;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0xf;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0xf;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0xf;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0xf;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  return param_1;
}



/* ===== 1800b0980 FUN_1800b0980 ===== */

void FUN_1800b0980(longlong param_1)

{
  FUN_18000f890(param_1 + 0x128);
  FUN_1800288b0(param_1 + 0x110);
  FUN_18000f890(param_1 + 0xf0);
  FUN_18000f890(param_1 + 0xd0);
  FUN_18000f890(param_1 + 0xb0);
  FUN_18000f890(param_1 + 0x48);
  FUN_18000f890(param_1 + 0x28);
  FUN_18000f890(param_1 + 8);
  return;
}



/* ===== 1800b09f0 FUN_1800b09f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800b09f0(uint param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  size_t sVar4;
  longlong *plVar5;
  longlong lVar6;
  char *_Str;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar7;
  undefined1 auStack_1c8 [32];
  undefined *local_1a8;
  undefined1 local_1a0 [40];
  uint local_178 [2];
  undefined8 local_170 [4];
  undefined1 local_150 [32];
  undefined1 local_130 [32];
  double local_110;
  undefined8 local_108;
  double local_100;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [24];
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  if (param_2[2] == 0) goto LAB_1800b0c0d;
  lVar6 = 0;
  if (param_1 < 6) {
    lVar6 = (longlong)(int)param_1;
  }
  if ((&DAT_180920e70)[lVar6 * 0x14] == '\0') goto LAB_1800b0c0d;
  FUN_1800b0860(local_178);
  local_178[0] = param_1;
  if (local_170 != param_2) {
    if ((ulonglong)param_2[3] < 0x10) {
      puVar3 = param_2;
    }
    else {
      puVar3 = (undefined8 *)*param_2;
    }
    FUN_180029840(local_170,puVar3,param_2[2]);
  }
  _Str = "check";
  if (param_3 != (char *)0x0) {
    _Str = param_3;
  }
  sVar4 = strlen(_Str);
  FUN_180029840(local_150,_Str,sVar4);
  plVar5 = (longlong *)FUN_1800ad890(&local_1a8);
  local_110 = (double)*plVar5 / DAT_1808ac9a0;
  local_108 = DAT_1808ac5e8;
  local_100 = local_110;
  FUN_1800af7e0(local_1a0,local_178);
  local_1a8 = &DAT_1809e9bd0;
  iVar2 = FUN_1804e4d70(&DAT_1809e9bd0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e9c1c == 0x7fffffff) {
    DAT_1809e9c1c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  uVar7 = extraout_XMM0_Qa;
  if (param_1 == 2) {
    cVar1 = FUN_1800afa10(local_178,local_110);
    uVar7 = extraout_XMM0_Qa_00;
    if (cVar1 == '\0') goto LAB_1800b0b2b;
  }
  else {
LAB_1800b0b2b:
    FUN_1800b3570(uVar7,local_178);
    if (0x20 < DAT_180ca0d98) {
      do {
        FUN_1800b0980(*(undefined8 *)(DAT_180ca0d80 + (DAT_180ca0d88 - 1U & DAT_180ca0d90) * 8));
        DAT_180ca0d98 = DAT_180ca0d98 - 1;
        if (DAT_180ca0d98 == 0) {
          DAT_180ca0d90 = 0;
          break;
        }
        DAT_180ca0d90 = DAT_180ca0d90 + 1;
      } while (0x20 < DAT_180ca0d98);
    }
  }
  FUN_1804e4e90(&DAT_1809e9bd0);
  FUN_1800af4c0(local_1a0);
  FUN_18000f890(local_1a0);
  FUN_18000f890(local_50);
  FUN_1800288b0(local_68);
  FUN_18000f890(local_88);
  FUN_18000f890(local_a8);
  FUN_18000f890(local_c8);
  FUN_18000f890(local_130);
  FUN_18000f890(local_150);
  FUN_18000f890(local_170);
LAB_1800b0c0d:
  return;
}



/* ===== 1800b0c50 FUN_1800b0c50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800b0c50(int param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                  undefined4 param_5,undefined8 param_6,char param_7)

{
  int *piVar1;
  size_t _Size;
  code *pcVar2;
  double dVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *******pppppppuVar11;
  longlong lVar12;
  size_t sVar13;
  undefined8 *******pppppppuVar14;
  ulonglong uVar15;
  char *pcVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [24];
  char local_2c8;
  int local_2c4;
  uint local_2c0;
  int local_2bc;
  longlong local_2b8;
  undefined8 *local_2b0;
  undefined8 *local_2a8;
  undefined *local_2a0;
  undefined8 *******local_298 [2];
  longlong local_288;
  ulonglong local_280;
  undefined8 *******local_278 [2];
  size_t local_268;
  ulonglong local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  longlong local_228;
  undefined8 uStack_220;
  undefined1 local_218 [32];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  uint local_1d8 [2];
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  undefined1 local_1b0 [32];
  undefined1 local_190 [32];
  double local_170;
  undefined8 local_168;
  double local_160;
  int local_138;
  undefined4 local_134;
  int local_130;
  char local_12c;
  undefined8 local_128 [4];
  undefined8 local_108 [4];
  undefined1 local_e8 [32];
  undefined1 local_c8 [24];
  undefined1 local_b0 [40];
  undefined1 local_88 [32];
  ulonglong local_68;
  
  puVar18 = auStack_2e8;
  local_68 = DAT_180919500 ^ (ulonglong)auStack_2e8;
  local_2c8 = param_7;
  local_2c0 = (uint)(param_1 == 2);
  if ((&DAT_180920e70)[(ulonglong)(param_1 == 2) * 0x14] == '\0') goto LAB_1800b15d4;
  local_2c4 = param_4;
  local_2bc = param_1;
  local_2b0 = param_2;
  local_2a8 = param_3;
  FUN_1800aff60(local_298,param_6);
  uVar7 = FUN_18003a390(local_218,param_1);
  puVar8 = (undefined8 *)FUN_1800134a0(uVar7,&DAT_1806e9100,1);
  local_258 = *puVar8;
  uStack_250 = puVar8[1];
  local_248 = puVar8[2];
  uStack_240 = puVar8[3];
  puVar8[2] = 0;
  puVar8[3] = 0xf;
  *(undefined1 *)puVar8 = 0;
  uVar7 = FUN_1800667a0(local_88,&local_258,param_2);
  puVar8 = (undefined8 *)FUN_1800134a0(uVar7,&DAT_1806e9100,1);
  local_1f8 = *puVar8;
  uStack_1f0 = puVar8[1];
  local_1e8 = puVar8[2];
  uStack_1e0 = puVar8[3];
  puVar8[2] = 0;
  puVar8[3] = 0xf;
  *(undefined1 *)puVar8 = 0;
  FUN_1800667a0(local_278,&local_1f8,param_3);
  FUN_18000f890(&local_1f8);
  FUN_18000f890(local_88);
  FUN_18000f890(&local_258);
  FUN_18000f890(local_218);
  plVar9 = (longlong *)FUN_1800ad890(&local_2b8);
  lVar12 = *plVar9;
  uStack_230 = 0;
  local_2b8 = 0;
  local_228 = 0;
  uStack_220 = 0xf;
  local_238 = 0;
  local_2a0 = &DAT_1809e9bd0;
  iVar6 = FUN_1804e4d70(&DAT_1809e9bd0);
  uVar4 = local_260;
  sVar13 = local_268;
  pppppppuVar14 = local_278[0];
  uVar15 = DAT_180ca0d90;
  plVar9 = DAT_180ca0d78;
  puVar18 = auStack_2e8;
  puVar17 = auStack_2e8;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e9c1c == 0x7fffffff) {
    DAT_1809e9c1c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  dVar3 = (double)lVar12 / DAT_1808ac9a0;
  uVar19 = DAT_180ca0d98 + DAT_180ca0d90;
  lVar12 = local_2b8;
  lVar21 = local_288;
  uVar20 = local_280;
joined_r0x0001800b0e49:
  do {
    do {
      local_2b8 = lVar12;
      local_288 = lVar21;
      local_280 = uVar20;
      if (uVar19 == uVar15) goto LAB_1800b0efc;
      uVar19 = uVar19 - 1;
      if (plVar9 == (longlong *)0x0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar9;
      }
      lVar10 = *(longlong *)
                (*(longlong *)(lVar10 + 8) + (*(longlong *)(lVar10 + 0x10) - 1U & uVar19) * 8);
      puVar8 = (undefined8 *)(lVar10 + 0x48);
      pppppppuVar11 = local_278;
      if (0xf < uVar4) {
        pppppppuVar11 = pppppppuVar14;
      }
      _Size = *(size_t *)(lVar10 + 0x58);
      if (0xf < *(ulonglong *)(lVar10 + 0x60)) {
        puVar8 = (undefined8 *)*puVar8;
      }
    } while (_Size != sVar13);
    if (_Size != 0) {
      iVar6 = memcmp(puVar8,pppppppuVar11,_Size);
      lVar12 = local_2b8;
      lVar21 = local_288;
      uVar20 = local_280;
      if (iVar6 != 0) goto joined_r0x0001800b0e49;
    }
    if (plVar9 == (longlong *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *plVar9;
    }
    lVar10 = *(longlong *)
              (*(longlong *)(lVar12 + 8) + (*(longlong *)(lVar12 + 0x10) - 1U & uVar19) * 8);
    lVar12 = local_2b8;
    lVar21 = local_288;
    uVar20 = local_280;
  } while (*(double *)(lVar10 + 0x70) + *(double *)(lVar10 + 0x68) <= dVar3);
  if (plVar9 == (longlong *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *plVar9;
  }
  piVar1 = (int *)(*(longlong *)
                    (*(longlong *)(lVar12 + 8) + (*(longlong *)(lVar12 + 0x10) - 1U & uVar19) * 8) +
                  0xa0);
  *piVar1 = *piVar1 + local_2c4;
  if (plVar9 == (longlong *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *plVar9;
  }
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(lVar12 + 8) + (*(longlong *)(lVar12 + 0x10) - 1U & uVar19) * 8) +
   0xa4) = param_5;
  if (plVar9 == (longlong *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *plVar9;
  }
  piVar1 = (int *)(*(longlong *)
                    (*(longlong *)(lVar12 + 8) + (*(longlong *)(lVar12 + 0x10) - 1U & uVar19) * 8) +
                  0x9c);
  *piVar1 = *piVar1 + 1;
  if (plVar9 == (longlong *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *plVar9;
  }
  pppppppuVar14 =
       (undefined8 *******)
       (*(longlong *)(*(longlong *)(lVar12 + 8) + (*(longlong *)(lVar12 + 0x10) - 1U & uVar19) * 8)
       + 0xf0);
  if ((undefined8 ********)pppppppuVar14 != local_298) {
    pppppppuVar11 = local_298;
    if (0xf < local_280) {
      pppppppuVar11 = local_298[0];
    }
    FUN_180029840(pppppppuVar14,pppppppuVar11,local_288);
  }
  uVar20 = local_280;
  lVar21 = local_288;
  pppppppuVar14 = local_298[0];
  if (plVar9 == (longlong *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *plVar9;
  }
  *(char *)(*(longlong *)
             (*(longlong *)(lVar12 + 8) + (*(longlong *)(lVar12 + 0x10) - 1U & uVar19) * 8) + 0xac)
       = local_2c8;
  if (local_2c8 == '\0') {
    pppppppuVar11 = local_298;
    if (0xf < local_280) {
      pppppppuVar11 = local_298[0];
    }
    if ((local_288 == 5) && (iVar6 = memcmp(pppppppuVar11,"Molly",5), iVar6 == 0)) {
      pcVar16 = "fire";
    }
    else {
      pppppppuVar11 = local_298;
      if (0xf < uVar20) {
        pppppppuVar11 = pppppppuVar14;
      }
      if ((lVar21 == 5) && (iVar6 = memcmp(pppppppuVar11,"Taser",5), iVar6 == 0)) {
        pcVar16 = "bolt";
      }
      else {
        pppppppuVar11 = local_298;
        if (0xf < uVar20) {
          pppppppuVar11 = pppppppuVar14;
        }
        if (lVar21 == 4) {
          iVar6 = memcmp(pppppppuVar11,&DAT_1806de65c,4);
          pcVar16 = "bomb";
          if (iVar6 == 0) goto LAB_1800b10bc;
        }
        pcVar16 = "crosshairs";
      }
    }
  }
  else {
    pcVar16 = "eye";
  }
LAB_1800b10bc:
  if (plVar9 == (longlong *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *plVar9;
  }
  lVar10 = *(longlong *)(lVar12 + 0x10);
  sVar13 = strlen(pcVar16);
  FUN_180029840(*(longlong *)(*(longlong *)(lVar12 + 8) + (lVar10 - 1U & uVar19) * 8) + 0x28,pcVar16
                ,sVar13);
  if (plVar9 == (longlong *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *plVar9;
  }
  *(double *)
   (*(longlong *)(*(longlong *)(lVar12 + 8) + (*(longlong *)(lVar12 + 0x10) - 1U & uVar19) * 8) +
   0x68) = dVar3 - DAT_1808ac448;
  if (plVar9 == (longlong *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *plVar9;
  }
  *(undefined8 *)
   (*(longlong *)(*(longlong *)(lVar12 + 8) + (*(longlong *)(lVar12 + 0x10) - 1U & uVar19) * 8) +
   0x70) = 0x4020000000000000;
  if (plVar9 == (longlong *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *plVar9;
  }
  FUN_1800ade80(local_218,
                *(undefined8 *)
                 (*(longlong *)(lVar12 + 8) + (*(longlong *)(lVar12 + 0x10) - 1U & uVar19) * 8));
  if (plVar9 == (longlong *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *plVar9;
  }
  FUN_18002ba60(*(longlong *)
                 (*(longlong *)(lVar12 + 8) + (*(longlong *)(lVar12 + 0x10) - 1U & uVar19) * 8) + 8)
  ;
  FUN_18000f890(local_218);
  if (plVar9 == (longlong *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *plVar9;
  }
  puVar8 = (undefined8 *)
           FUN_1800af7e0(local_218,
                         *(undefined8 *)
                          (*(longlong *)(lVar12 + 8) +
                          (*(longlong *)(lVar12 + 0x10) - 1U & uVar19) * 8));
  lVar12 = local_2b8;
  if (&local_238 == puVar8) {
    FUN_18000f890(local_218);
    param_2 = local_2b0;
  }
  else {
    local_238 = *puVar8;
    uStack_230 = puVar8[1];
    lVar12 = puVar8[2];
    uStack_220 = puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    *(undefined1 *)puVar8 = 0;
    local_228 = lVar12;
    FUN_18000f890(local_218);
    param_2 = local_2b0;
  }
LAB_1800b0efc:
  FUN_1804e4e90(&DAT_1809e9bd0);
  if (lVar12 == 0) {
    FUN_1800b0860(local_1d8);
    local_1d8[0] = local_2c0;
    local_130 = local_2bc;
    if (local_128 != param_2) {
      if ((ulonglong)param_2[3] < 0x10) {
        puVar8 = param_2;
      }
      else {
        puVar8 = (undefined8 *)*param_2;
      }
      FUN_180029840(local_128,puVar8,param_2[2]);
    }
    if (local_108 != local_2a8) {
      if ((ulonglong)local_2a8[3] < 0x10) {
        puVar8 = local_2a8;
      }
      else {
        puVar8 = (undefined8 *)*local_2a8;
      }
      FUN_180029840(local_108,puVar8,local_2a8[2]);
    }
    pppppppuVar14 = local_298;
    if (0xf < uVar20) {
      pppppppuVar14 = local_298[0];
    }
    FUN_180029840(local_e8,pppppppuVar14,lVar21);
    local_138 = local_2c4;
    local_134 = param_5;
    pppppppuVar14 = local_278;
    if (0xf < local_260) {
      pppppppuVar14 = local_278[0];
    }
    FUN_180029840(local_190,pppppppuVar14,local_268);
    local_12c = local_2c8;
    if (local_2c8 == '\0') {
      pppppppuVar14 = local_298;
      if (0xf < local_280) {
        pppppppuVar14 = local_298[0];
      }
      if ((local_288 == 5) && (iVar6 = memcmp(pppppppuVar14,"Molly",5), iVar6 == 0)) {
        pcVar16 = "fire";
      }
      else {
        pppppppuVar14 = local_298;
        if (0xf < local_280) {
          pppppppuVar14 = local_298[0];
        }
        if ((local_288 == 5) && (iVar6 = memcmp(pppppppuVar14,"Taser",5), iVar6 == 0)) {
          pcVar16 = "bolt";
        }
        else {
          pppppppuVar14 = local_298;
          if (0xf < local_280) {
            pppppppuVar14 = local_298[0];
          }
          if (local_288 == 4) {
            iVar6 = memcmp(pppppppuVar14,&DAT_1806de65c,4);
            pcVar16 = "bomb";
            if (iVar6 == 0) goto LAB_1800b13ac;
          }
          pcVar16 = "crosshairs";
        }
      }
    }
    else {
      pcVar16 = "eye";
    }
LAB_1800b13ac:
    sVar13 = strlen(pcVar16);
    FUN_180029840(local_1b0,pcVar16,sVar13);
    local_168 = DAT_1808ac5e8;
    local_170 = dVar3;
    local_160 = dVar3;
    plVar9 = (longlong *)FUN_1800ade80(local_218,local_1d8);
    if (&local_1d0 == plVar9) {
LAB_1800b147d:
      puVar18 = puVar17;
    }
    else {
      if (0xf < local_1b8) {
        uVar15 = local_1b8 + 1;
        lVar12 = local_1d0;
        if (0xfff < uVar15) {
          lVar12 = *(longlong *)(local_1d0 + -8);
          if (0x1f < (local_1d0 - lVar12) - 8U) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar17 = auStack_2e0;
            goto LAB_1800b147d;
          }
          uVar15 = local_1b8 + 0x28;
        }
        thunk_FUN_1803d64e0(lVar12,uVar15);
      }
      local_1d0 = *plVar9;
      local_1c8 = plVar9[1];
      local_1c0 = plVar9[2];
      local_1b8 = plVar9[3];
      plVar9[2] = 0;
      plVar9[3] = 0xf;
      *(undefined1 *)plVar9 = 0;
      puVar18 = auStack_2e8;
    }
    *(undefined8 *)(puVar18 + -8) = 0x1800b1488;
    FUN_18000f890(local_218);
    *(undefined8 *)(puVar18 + -8) = 0x1800b1495;
    FUN_1800af7e0(&local_258,local_1d8);
    *(undefined **)(puVar18 + 0x48) = &DAT_1809e9bd0;
    *(undefined8 *)(puVar18 + -8) = 0x1800b14a3;
    iVar6 = FUN_1804e4d70(&DAT_1809e9bd0);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar18 + -8) = &UNK_1800b163a;
      FUN_1804e4a90(5);
    }
    if (DAT_1809e9c1c == 0x7fffffff) {
      DAT_1809e9c1c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar18 + -8) = 0x1800b1611;
      FUN_1804e4a90(6);
    }
    *(undefined8 *)(puVar18 + -8) = 0x1800b14c8;
    cVar5 = FUN_1800afa10(local_1d8,SUB84(dVar3,0));
    if (cVar5 == '\0') {
      *(undefined8 *)(puVar18 + -8) = 0x1800b14d5;
      FUN_1800b3570(extraout_XMM0_Da,local_1d8);
      if (0x20 < DAT_180ca0d98) {
        do {
          uVar7 = *(undefined8 *)(DAT_180ca0d80 + (DAT_180ca0d88 - 1U & DAT_180ca0d90) * 8);
          *(undefined8 *)(puVar18 + -8) = 0x1800b150d;
          FUN_1800b0980(uVar7);
          DAT_180ca0d98 = DAT_180ca0d98 - 1;
          if (DAT_180ca0d98 == 0) {
            DAT_180ca0d90 = 0;
            break;
          }
          DAT_180ca0d90 = DAT_180ca0d90 + 1;
        } while (0x20 < DAT_180ca0d98);
      }
    }
    *(undefined8 *)(puVar18 + -8) = 0x1800b1549;
    FUN_1804e4e90(&DAT_1809e9bd0);
    *(undefined8 *)(puVar18 + -8) = 0x1800b1552;
    FUN_1800af4c0(&local_258);
    *(undefined8 *)(puVar18 + -8) = 0x1800b155c;
    FUN_18000f890(&local_258);
    *(undefined8 *)(puVar18 + -8) = 0x1800b1569;
    FUN_18000f890(local_b0);
    *(undefined8 *)(puVar18 + -8) = 0x1800b1575;
    FUN_1800288b0(local_c8);
    *(undefined8 *)(puVar18 + -8) = 0x1800b1581;
    FUN_18000f890(local_e8);
    *(undefined8 *)(puVar18 + -8) = 0x1800b158d;
    FUN_18000f890(local_108);
    *(undefined8 *)(puVar18 + -8) = 0x1800b1599;
    FUN_18000f890(local_128);
    *(undefined8 *)(puVar18 + -8) = 0x1800b15a2;
    FUN_18000f890(local_190);
    *(undefined8 *)(puVar18 + -8) = 0x1800b15ab;
    FUN_18000f890(local_1b0);
    *(undefined8 *)(puVar18 + -8) = 0x1800b15b4;
    FUN_18000f890(&local_1d0);
  }
  else {
    FUN_1800af4c0(&local_238);
  }
  *(undefined8 *)(puVar18 + -8) = 0x1800b15be;
  FUN_18000f890(&local_238);
  *(undefined8 *)(puVar18 + -8) = 0x1800b15c9;
  FUN_18000f890(puVar18 + 0x70);
  *(undefined8 *)(puVar18 + -8) = 0x1800b15d4;
  FUN_18000f890(puVar18 + 0x50);
LAB_1800b15d4:
  *(undefined8 *)(puVar18 + -8) = 0x1800b15e3;
  return;
}



/* ===== 1800b1640 FUN_1800b1640 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800b1640(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  double dVar5;
  char *pcVar6;
  bool bVar7;
  double dVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong *plVar13;
  float *pfVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong lVar19;
  float *pfVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *******ppppppplVar23;
  longlong *******ppppppplVar24;
  uint *puVar25;
  float *pfVar26;
  longlong *******ppppppplVar27;
  char *pcVar28;
  char *pcVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  ulonglong uVar34;
  undefined8 *puVar35;
  ulonglong uVar36;
  uint *puVar37;
  int iVar38;
  longlong *plVar39;
  float fVar40;
  undefined8 extraout_XMM0_Qa;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uStack_420;
  undefined1 auStack_418 [8];
  undefined1 auStack_410 [24];
  longlong *******local_3f8;
  longlong *******local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined4 local_3c8;
  char local_3b8;
  char local_3b7;
  char local_3b6;
  float local_3b4;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  longlong *local_3a0;
  longlong *plStack_398;
  longlong *local_390;
  float local_388;
  float local_384;
  longlong *local_380;
  longlong *plStack_378;
  longlong *local_370;
  float local_368;
  float local_364;
  uint *local_360;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  uint local_348;
  longlong local_340;
  float local_338;
  float local_334;
  longlong local_330;
  uint *local_328;
  longlong ******local_320;
  undefined8 local_318;
  undefined8 local_310;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  int local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec [5];
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  uint *local_2b8;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a0;
  float local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  longlong ******local_288;
  uint *local_280;
  uint *puStack_278;
  longlong local_270;
  longlong local_268;
  longlong *local_260;
  float local_258 [2];
  float local_250 [2];
  longlong *local_248;
  longlong local_240;
  longlong *local_238;
  float local_228 [2];
  float *local_220;
  longlong *local_218;
  longlong *local_210;
  float *local_208;
  int *local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 *******local_1c8;
  undefined8 uStack_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  undefined2 local_1a8;
  undefined4 local_1a4;
  longlong *******local_1a0;
  longlong *plStack_198;
  char *local_190;
  char *pcStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong *******local_160;
  longlong *plStack_158;
  char *local_150;
  char *pcStack_148;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong ******local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  float local_100;
  ulonglong local_f8;
  
  if (param_1 != 0) {
    puVar32 = auStack_418;
    local_f8 = DAT_180919500 ^ (ulonglong)auStack_418;
    local_348 = 0;
    if (DAT_180920e56 != '\0') {
      local_340 = param_1;
      plVar13 = (longlong *)FUN_1800ad890(&local_2b8);
      dVar5 = (double)*plVar13 / DAT_1808ac9a0;
      if (0.0 < DAT_180cd0380) {
        local_320 = DAT_1808ac420;
        local_310 = 0;
        local_318 = dVar5 - DAT_180cd0380;
      }
      local_280 = (uint *)0x0;
      puStack_278 = (uint *)0x0;
      local_270 = 0;
      local_2b8 = (uint *)&DAT_1809e9bd0;
      DAT_180cd0380 = dVar5;
      iVar10 = FUN_1804e4d70(&DAT_1809e9bd0);
      dVar8 = DAT_1808ac470;
      if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809e9c1c == 0x7fffffff) {
        DAT_1809e9c1c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      plVar13 = DAT_180ca0d90;
      if (8 < DAT_180ca0d98) {
        uVar22 = DAT_180ca0d98 - 8;
        uVar36 = 0;
        if (3 < uVar22) {
          uVar1 = DAT_180ca0d98 - 0xb;
          do {
            lVar21 = *(longlong *)
                      (DAT_180ca0d80 + ((longlong)plVar13 + uVar36 & DAT_180ca0d88 - 1U) * 8);
            if (dVar8 <= (*(double *)(lVar21 + 0x70) + *(double *)(lVar21 + 0x68)) - dVar5) {
              *(double *)(lVar21 + 0x68) = dVar5 - *(double *)(lVar21 + 0x70);
              plVar13 = DAT_180ca0d90;
            }
            lVar21 = *(longlong *)
                      (DAT_180ca0d80 + ((longlong)plVar13 + uVar36 + 1 & DAT_180ca0d88 - 1U) * 8);
            if (dVar8 <= (*(double *)(lVar21 + 0x70) + *(double *)(lVar21 + 0x68)) - dVar5) {
              *(double *)(lVar21 + 0x68) = dVar5 - *(double *)(lVar21 + 0x70);
              plVar13 = DAT_180ca0d90;
            }
            lVar21 = *(longlong *)
                      (DAT_180ca0d80 + ((longlong)plVar13 + uVar36 + 2 & DAT_180ca0d88 - 1U) * 8);
            if (dVar8 <= (*(double *)(lVar21 + 0x70) + *(double *)(lVar21 + 0x68)) - dVar5) {
              *(double *)(lVar21 + 0x68) = dVar5 - *(double *)(lVar21 + 0x70);
              plVar13 = DAT_180ca0d90;
            }
            lVar21 = *(longlong *)
                      (DAT_180ca0d80 + (DAT_180ca0d88 - 1U & (longlong)plVar13 + uVar36 + 3) * 8);
            if (dVar8 <= (*(double *)(lVar21 + 0x70) + *(double *)(lVar21 + 0x68)) - dVar5) {
              *(double *)(lVar21 + 0x68) = dVar5 - *(double *)(lVar21 + 0x70);
              plVar13 = DAT_180ca0d90;
            }
            uVar36 = uVar36 + 4;
          } while (uVar36 < uVar1);
        }
        if (uVar36 < uVar22) {
          do {
            lVar21 = *(longlong *)
                      (DAT_180ca0d80 + (DAT_180ca0d88 - 1U & (longlong)plVar13 + uVar36) * 8);
            if (dVar8 <= (*(double *)(lVar21 + 0x70) + *(double *)(lVar21 + 0x68)) - dVar5) {
              *(double *)(lVar21 + 0x68) = dVar5 - *(double *)(lVar21 + 0x70);
              plVar13 = DAT_180ca0d90;
            }
            uVar36 = uVar36 + 1;
          } while (uVar36 < uVar22);
        }
      }
      local_260 = plVar13;
      plVar18 = DAT_180ca0d78;
      if (plVar13 != (longlong *)((longlong)plVar13 + DAT_180ca0d98)) {
        do {
          if (plVar18 == (longlong *)0x0) {
            lVar21 = 0;
          }
          else {
            lVar21 = *plVar18;
          }
          plVar39 = (longlong *)((longlong)plVar13 + 1);
          cVar9 = FUN_1800adae0(*(undefined8 *)
                                 (*(longlong *)(lVar21 + 8) +
                                 (*(longlong *)(lVar21 + 0x10) - 1U & (ulonglong)plVar13) * 8));
          if (cVar9 == '\0') {
            plStack_378 = (longlong *)0x0;
            plStack_398 = (longlong *)0x0;
            local_3a0 = plVar18;
            local_390 = plVar13;
            local_380 = plVar18;
            local_370 = plVar39;
            FUN_1800b39a0(extraout_XMM0_Qa,&local_248,&local_3a0,&local_380);
            plVar13 = local_238;
            plVar18 = local_248;
          }
          else {
            plVar13 = plVar39;
          }
          local_260 = DAT_180ca0d90;
        } while (plVar13 != (longlong *)((longlong)DAT_180ca0d90 + DAT_180ca0d98));
      }
      if (DAT_180ca0d78 == (longlong *)0x0) {
        local_268 = 0;
      }
      else {
        local_268 = *DAT_180ca0d78;
      }
      FUN_1800b3640(&local_280,&local_268,DAT_180ca0d98);
      FUN_1804e4e90(&DAT_1809e9bd0);
      puVar33 = auStack_418;
      puVar30 = auStack_418;
      puVar31 = auStack_418;
      local_360 = local_280;
      local_2b8 = puStack_278;
      puVar32 = auStack_418;
      if (local_280 != puStack_278) {
        local_3a8 = 3.0;
        local_3b0 = 0.5;
        pfVar20 = &local_3b0;
        if (DAT_1808ac1f4 <= DAT_180920e60) {
          pfVar20 = &DAT_180920e60;
        }
        pfVar14 = &local_3a8;
        if (DAT_180920e60 <= DAT_1808ac658) {
          pfVar14 = pfVar20;
        }
        local_358 = *pfVar14;
        local_3a4 = local_358 * DAT_1808ac908;
        local_2ec[2] = 100.0;
        local_2ec[0] = 0.0;
        local_2ec[1] = (float)DAT_180920e6c;
        pfVar20 = local_2ec;
        if (0.0 <= local_2ec[1]) {
          pfVar20 = local_2ec + 1;
        }
        pfVar14 = local_2ec + 2;
        if (local_2ec[1] <= DAT_1808acb08) {
          pfVar14 = pfVar20;
        }
        local_34c = *pfVar14 / DAT_1808acb08;
        local_2cc = 100.0;
        local_2ec[3] = 0.0;
        local_2d0 = (float)DAT_180920e68;
        pfVar20 = local_2ec + 3;
        if (0.0 <= local_2d0) {
          pfVar20 = &local_2d0;
        }
        pfVar14 = &local_2cc;
        if (local_2d0 <= DAT_1808acb08) {
          pfVar14 = pfVar20;
        }
        local_2c0 = *pfVar14 / DAT_1808acb08;
        local_350 = local_358;
        if (0.0 < local_34c) {
          local_350 = local_358 * DAT_1808ac7ac;
        }
        if ((0.0 < local_34c) || (local_354 = local_358, 0.0 < *pfVar14 / DAT_1808acb08)) {
          local_354 = local_358 * DAT_1808ac7ec;
        }
        local_3b6 = DAT_180920e64 == '\0';
        local_3a8 = 1.0;
        local_3b0 = 0.0;
        pfVar20 = &local_3b0;
        if (0.0 <= DAT_180920e58) {
          pfVar20 = &DAT_180920e58;
        }
        pfVar14 = &local_3a8;
        if (DAT_180920e58 <= DAT_1808ac34c) {
          pfVar14 = pfVar20;
        }
        local_3ac = 1.0;
        local_384 = 0.0;
        pfVar20 = &local_384;
        if (0.0 <= DAT_180920e5c) {
          pfVar20 = &DAT_180920e5c;
        }
        pfVar26 = &local_3ac;
        if (DAT_180920e5c <= DAT_1808ac34c) {
          pfVar26 = pfVar20;
        }
        local_330 = DAT_181107a10;
        if (DAT_181107a10 == 0) {
          local_330 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
        }
        puVar32 = auStack_418;
        if (local_280 != puStack_278) {
          local_3b4 = local_358 * DAT_1808ac8d4;
          local_364 = local_358 * DAT_1808ac750;
          local_2f0 = local_358 * DAT_1808ac658;
          local_368 = local_358 * DAT_1808ac838;
          local_2b0 = DAT_1811079b0 * *pfVar14;
          local_388 = DAT_1811079b4 * *pfVar26 + local_358 * DAT_1808ac838;
          local_2c8 = local_358 * DAT_1808ac844;
          local_304 = local_354 + local_354 + local_358 * DAT_1808ac658;
          local_2c4 = local_350 + local_350;
          local_308 = local_358 * DAT_1808ac5e0;
          local_300 = local_358 * DAT_1808ac8b0;
          local_2fc = local_358 * DAT_1808ac428;
          local_2f4 = (local_3b4 - local_3b4) * DAT_1808ac1f4;
          puVar25 = local_280;
          uVar11 = DAT_1808acd08;
          do {
            fVar45 = local_364;
            fVar47 = local_3b4;
            fVar40 = DAT_1808ac1f4;
            fVar44 = 0.0;
            fVar46 = (float)puVar25[0x26];
            fVar48 = (float)puVar25[0x20];
            local_268 = 0;
            if (*puVar25 < 6) {
              local_268 = (longlong)(int)*puVar25;
            }
            local_3a0 = (longlong *)0x0;
            plStack_398 = (longlong *)0x0;
            local_390 = (longlong *)0x0;
            local_360 = puVar25;
            local_3a0 = (longlong *)FUN_18000fb70(0x20);
            local_390 = local_3a0 + 4;
            lVar21 = 1;
            plStack_398 = local_3a0;
            do {
              plStack_398[3] = 0;
              *plStack_398 = 0;
              plStack_398[1] = 0;
              plStack_398[2] = 0;
              plStack_398 = plStack_398 + 4;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            local_3b7 = '\0';
            local_3b8 = '\0';
            local_1e8 = 0;
            lStack_1e0 = 0;
            local_1d8 = 0;
            local_1d0 = 0;
            uStack_1c0 = 0;
            local_1b8 = 0;
            local_1b0 = 0xf;
            local_1c8 = (undefined8 *******)0x0;
            local_1a8 = 0;
            local_1a4 = 0;
            local_160 = (longlong *******)&local_1c8;
            plStack_158 = &local_1e8;
            local_150 = &local_3b7;
            pcStack_148 = &local_3b8;
            puVar37 = puVar25 + 2;
            if (0xf < *(ulonglong *)(puVar25 + 8)) {
              puVar37 = *(uint **)puVar37;
            }
            local_328 = (uint *)(*(longlong *)(local_360 + 6) + (longlong)puVar37);
            if (puVar37 != local_328) {
              do {
                uVar36 = local_1b0;
                uVar22 = local_1b8;
                cVar9 = (char)*puVar37;
                if (cVar9 == '\a') {
                  FUN_1800b3130(&local_160);
                  plVar13 = plStack_398;
                  if (local_1e8 != lStack_1e0) {
                    if (plStack_398[-3] == plStack_398[-2]) {
                      FUN_1800b4450(plStack_398 + -4,plStack_398[-3],&local_1e8);
                    }
                    else {
                      FUN_1800b4a60();
                      plVar13[-3] = plVar13[-3] + 0x20;
                    }
                  }
                  local_168 = 0;
                  FUN_1800b38f0(&local_1e8);
                  local_1e8 = 0;
                  lStack_1e0 = 0;
                  local_1d8 = 0;
                  local_180 = 0;
                  uStack_178 = 0;
                  local_170 = 0;
                  local_1d0 = 0;
                  FUN_1800b38f0(&local_180);
                  local_3b7 = local_3b7 == '\0';
                  local_3b8 = '\0';
                  local_1a8 = CONCAT11(local_1a8._1_1_,local_3b7);
                }
                else if (cVar9 == '\x02') {
                  FUN_1800b3130(&local_160);
                  local_3b8 = local_3b8 == '\0';
                  local_1a8 = CONCAT11(local_3b8,local_3b7 != local_3b8);
                }
                else if (cVar9 == '\n') {
                  FUN_1800b3130(&local_160);
                  plVar13 = plStack_398;
                  if (local_1e8 != lStack_1e0) {
                    if (plStack_398[-3] == plStack_398[-2]) {
                      FUN_1800b4450(plStack_398 + -4,plStack_398[-3],&local_1e8);
                    }
                    else {
                      FUN_1800b4a60();
                      plVar13[-3] = plVar13[-3] + 0x20;
                    }
                  }
                  local_168 = 0;
                  FUN_1800b38f0(&local_1e8);
                  local_1e8 = 0;
                  lStack_1e0 = 0;
                  local_1d8 = 0;
                  local_180 = 0;
                  uStack_178 = 0;
                  local_170 = 0;
                  local_1d0 = 0;
                  FUN_1800b38f0(&local_180);
                  if (plStack_398 == local_390) {
                    FUN_1800b3f50(&local_3a0);
                    local_1a8 = CONCAT11(local_1a8._1_1_,local_3b7 != local_3b8);
                  }
                  else {
                    plStack_398[3] = 0;
                    *plStack_398 = 0;
                    plStack_398[1] = 0;
                    plStack_398[2] = 0;
                    plStack_398 = plStack_398 + 4;
                    local_1a8 = CONCAT11(local_1a8._1_1_,local_3b7 != local_3b8);
                  }
                }
                else if (local_1b8 < local_1b0) {
                  pppppppuVar15 = &local_1c8;
                  if (0xf < local_1b0) {
                    pppppppuVar15 = local_1c8;
                  }
                  pcVar29 = (char *)((longlong)pppppppuVar15 + local_1b8);
                  local_1b8 = local_1b8 + 1;
                  *pcVar29 = cVar9;
                  *(undefined1 *)((longlong)pppppppuVar15 + uVar22 + 1) = 0;
                }
                else {
                  if (local_1b8 == 0x7fffffffffffffff) goto LAB_1800b3100;
                  uVar1 = local_1b8 + 1;
                  uVar34 = uVar1 | 0xf;
                  if (uVar34 < 0x8000000000000000) {
                    if (0x7fffffffffffffff - (local_1b0 >> 1) < local_1b0) {
                      uVar34 = 0x7fffffffffffffff;
                    }
                    else {
                      uVar2 = (local_1b0 >> 1) + local_1b0;
                      if (uVar34 < uVar2) {
                        uVar34 = uVar2;
                      }
                    }
                  }
                  else {
                    uVar34 = 0x7fffffffffffffff;
                  }
                  pppppppuVar16 = (undefined8 *******)FUN_18000fb70(uVar34 + 1);
                  pppppppuVar15 = local_1c8;
                  local_1b8 = uVar1;
                  local_1b0 = uVar34;
                  if (uVar36 < 0x10) {
                    FUN_180540530(pppppppuVar16,&local_1c8,uVar22);
                    *(char *)((longlong)pppppppuVar16 + uVar22) = cVar9;
                    *(undefined1 *)((longlong)pppppppuVar16 + uVar22 + 1) = 0;
                  }
                  else {
                    FUN_180540530(pppppppuVar16,local_1c8,uVar22);
                    *(char *)((longlong)pppppppuVar16 + uVar22) = cVar9;
                    *(undefined1 *)((longlong)pppppppuVar16 + uVar22 + 1) = 0;
                    if (uVar36 + 1 < 0x1000) {
                      thunk_FUN_1803d64e0(pppppppuVar15);
                    }
                    else {
                      if (0x1f < (ulonglong)
                                 ((longlong)pppppppuVar15 + (-8 - (longlong)pppppppuVar15[-1]))) {
                        pcVar4 = (code *)swi(0x29);
                        (*pcVar4)(5);
                        puVar30 = auStack_410;
                        goto LAB_1800b3000;
                      }
                      thunk_FUN_1803d64e0(pppppppuVar15[-1],uVar36 + 0x28);
                    }
                  }
                  local_1c8 = pppppppuVar16;
                }
                puVar37 = (uint *)((longlong)puVar37 + 1);
              } while (puVar37 != local_328);
            }
            FUN_1800b3130(&local_160);
            plVar13 = plStack_398;
            if (local_1e8 != lStack_1e0) {
              if (plStack_398[-3] == plStack_398[-2]) {
                FUN_1800b4450(plStack_398 + -4,plStack_398[-3],&local_1e8);
              }
              else {
                FUN_1800b4a60();
                plVar13[-3] = plVar13[-3] + 0x20;
              }
            }
            local_168 = 0;
            FUN_1800b38f0(&local_1e8);
            local_1e8 = 0;
            lStack_1e0 = 0;
            local_1d8 = 0;
            local_180 = 0;
            uStack_178 = 0;
            local_170 = 0;
            local_1d0 = 0;
            FUN_1800b38f0(&local_180);
            FUN_18000f890(&local_1c8);
            FUN_1800b38f0(&local_1e8);
            plVar18 = plStack_398;
            fVar41 = local_3a4;
            for (plVar13 = local_3a0; plVar13 != plVar18; plVar13 = plVar13 + 4) {
              puVar3 = (undefined8 *)plVar13[1];
              for (puVar35 = (undefined8 *)*plVar13; puVar35 != puVar3; puVar35 = puVar35 + 4) {
                ppppppplVar24 = (longlong *******)puVar35[1];
                local_3a4 = fVar41;
                for (ppppppplVar23 = (longlong *******)*puVar35; ppppppplVar23 != ppppppplVar24;
                    ppppppplVar23 = ppppppplVar23 + 5) {
                  if (ppppppplVar23[3] < (longlong ******)0x10) {
                    local_3f0 = ppppppplVar23;
                  }
                  else {
                    local_3f0 = (longlong *******)*ppppppplVar23;
                  }
                  local_3c8 = 0;
                  local_3d8 = 0;
                  local_3e0 = 0;
                  local_3e8 = 0;
                  local_3f8 = (longlong *******)((ulonglong)local_3f8 & 0xffffffff00000000);
                  FUN_18040a2f0(local_228,local_330,local_3a4,uVar11);
                  *(float *)((longlong)ppppppplVar23 + 0x24) = local_228[0];
                  *(float *)(puVar35 + 3) = local_228[0] + *(float *)(puVar35 + 3);
                }
                *(float *)(plVar13 + 3) = *(float *)(puVar35 + 3) + *(float *)(plVar13 + 3);
                fVar41 = local_3a4;
              }
              uVar22 = plVar13[1] - *plVar13 >> 5;
              if (1 < uVar22) {
                *(float *)(plVar13 + 3) = (float)(uVar22 - 1) * fVar45 + *(float *)(plVar13 + 3);
              }
            }
            local_380 = (longlong *)0x0;
            plStack_378 = (longlong *)0x0;
            local_370 = (longlong *)0x0;
            ppppppplVar24 = *(longlong ********)(local_360 + 0x44);
            ppppppplVar23 = *(longlong ********)(local_360 + 0x46);
            local_3a4 = fVar41;
            local_384 = fVar41;
            if (ppppppplVar24 != ppppppplVar23) {
              do {
                local_138 = 0;
                local_130 = 0;
                local_128 = 0;
                uStack_118 = 0;
                local_110 = 0;
                local_108 = 0xf;
                local_120 = (longlong ******)0x0;
                local_100 = 0.0;
                plVar13 = (longlong *)
                          FUN_18039f3d0(&local_1e8,ppppppplVar24,(int)(fVar41 + fVar41 + fVar40));
                lVar21 = *plVar13;
                iVar10 = (int)plVar13[1];
                iVar38 = *(int *)((longlong)plVar13 + 0xc);
                local_130 = plVar13[1];
                uVar12 = (undefined4)plVar13[2];
                uVar42 = *(undefined4 *)((longlong)plVar13 + 0x14);
                local_128 = plVar13[2];
                local_138 = lVar21;
                if (((lVar21 == 0) || (iVar10 < 1)) || (iVar38 < 1)) {
                  if (&local_120 != ppppppplVar24) {
                    ppppppplVar27 = ppppppplVar24;
                    if ((longlong ******)0xf < ppppppplVar24[3]) {
                      ppppppplVar27 = (longlong *******)*ppppppplVar24;
                    }
                    FUN_180029840(&local_120,ppppppplVar27,ppppppplVar24[2]);
                    uVar12 = (undefined4)local_128;
                    uVar42 = local_128._4_4_;
                    iVar38 = local_130._4_4_;
                    iVar10 = (int)local_130;
                  }
                  lVar21 = local_138;
                  if (ppppppplVar24[3] < (longlong ******)0x10) {
                    local_3f0 = ppppppplVar24;
                  }
                  else {
                    local_3f0 = (longlong *******)*ppppppplVar24;
                  }
                  local_3c8 = 0;
                  local_3d8 = 0;
                  local_3e0 = 0;
                  local_3e8 = 0;
                  local_3f8 = (longlong *******)((ulonglong)local_3f8 & 0xffffffff00000000);
                  FUN_18040a2f0(local_258,local_330,local_3a4,uVar11);
                  local_100 = local_258[0];
                }
                else {
                  local_100 = ((float)iVar10 / (float)iVar38) * fVar41;
                }
                plVar13 = plStack_378;
                *(float *)(plStack_398 + -1) = local_100 + fVar45 + *(float *)(plStack_398 + -1);
                if (plStack_378 == local_370) {
                  FUN_1800b4190(&local_380,plStack_378,&local_138);
                }
                else {
                  *plStack_378 = lVar21;
                  *(int *)(plStack_378 + 1) = iVar10;
                  *(int *)((longlong)plStack_378 + 0xc) = iVar38;
                  *(undefined4 *)(plStack_378 + 2) = uVar12;
                  *(undefined4 *)((longlong)plStack_378 + 0x14) = uVar42;
                  FUN_180024b50(plStack_378 + 3,&local_120);
                  *(float *)(plVar13 + 7) = local_100;
                  plStack_378 = plStack_378 + 8;
                }
                FUN_18000f890(&local_120);
                ppppppplVar24 = ppppppplVar24 + 4;
              } while (ppppppplVar24 != ppppppplVar23);
            }
            puVar25 = local_360;
            local_3a8 = 0.0;
            plVar13 = local_3a0;
            fVar41 = fVar44;
            if (local_3a0 != plStack_398) {
              do {
                fVar43 = *(float *)(plVar13 + 3);
                if (*(float *)(plVar13 + 3) <= fVar41) {
                  fVar43 = fVar41;
                }
                fVar41 = fVar43;
                plVar13 = plVar13 + 4;
              } while (plVar13 != plStack_398);
              local_3a8 = fVar41;
            }
            fVar41 = local_3a8;
            plStack_198 = (longlong *)0x0;
            local_190 = (char *)0x0;
            pcStack_188 = (char *)0xf;
            local_1a0 = (longlong *******)0x0;
            if (0 < (int)local_360[0x27]) {
              uVar17 = FUN_18003a390(&local_1e8,local_360[0x27] + 1);
              uVar17 = FUN_180066ab0(&local_180,&DAT_1806e9110,uVar17);
              plVar18 = (longlong *)FUN_1800134a0(uVar17,&DAT_1806e9114,1);
              ppppppplVar24 = (longlong *******)*plVar18;
              plVar13 = (longlong *)plVar18[1];
              pcVar29 = (char *)plVar18[2];
              pcVar6 = (char *)plVar18[3];
              plVar18[2] = 0;
              plVar18[3] = 0xf;
              *(undefined1 *)plVar18 = 0;
              local_160 = ppppppplVar24;
              plStack_158 = plVar13;
              if (pcStack_188 < &DAT_00000010) {
LAB_1800b2673:
                local_348 = local_348 | 1;
                local_150 = (char *)0x0;
                pcStack_148 = (char *)0xf;
                local_160 = (longlong *******)((ulonglong)local_160 & 0xffffffffffffff00);
                local_1a0 = ppppppplVar24;
                plStack_198 = plVar13;
                local_190 = pcVar29;
                pcStack_188 = pcVar6;
                FUN_18000f890(&local_160);
                FUN_18000f890(&local_180);
                FUN_18000f890(&local_1e8);
                local_3f0 = (longlong *******)&local_1a0;
                if ((char *)0xf < pcStack_188) {
                  local_3f0 = local_1a0;
                }
                local_3c8 = 0;
                local_3d8 = 0;
                local_3e0 = 0;
                local_3e8 = 0;
                local_3f8 = (longlong *******)((ulonglong)local_3f8 & 0xffffffff00000000);
                FUN_18040a2f0(local_250,local_330,local_3a4,uVar11);
                fVar45 = fVar45 + local_250[0] + fVar41;
                goto LAB_1800b2729;
              }
              pcVar28 = pcStack_188 + 1;
              ppppppplVar23 = local_1a0;
              local_150 = pcVar29;
              pcStack_148 = pcVar6;
              if (pcVar28 < (char *)0x1000) {
LAB_1800b266e:
                thunk_FUN_1803d64e0(ppppppplVar23,pcVar28);
                goto LAB_1800b2673;
              }
              ppppppplVar23 = (longlong *******)local_1a0[-1];
              if ((ulonglong)((longlong)local_1a0 + (-8 - (longlong)ppppppplVar23)) < 0x20) {
                pcVar28 = pcStack_188 + 0x28;
                goto LAB_1800b266e;
              }
LAB_1800b3000:
              pcVar4 = (code *)swi(0x29);
              (*pcVar4)(5);
              puVar31 = puVar30 + 8;
LAB_1800b3007:
              pcVar4 = (code *)swi(0x29);
              (*pcVar4)(5);
              puVar32 = puVar31 + 8;
LAB_1800b300e:
              pcVar4 = (code *)swi(0x29);
              (*pcVar4)(5);
              puVar32 = puVar32 + 8;
              break;
            }
            fVar45 = local_3a8;
LAB_1800b2729:
            fVar46 = fVar46 * fVar48;
            lVar21 = (longlong)plStack_398 - (longlong)local_3a0;
            local_3ac = fVar46;
            if ((local_3b6 == '\0') || (*(longlong *)(puVar25 + 0xe) == 0)) {
              fVar48 = 0.0;
              lVar19 = 0;
              iVar10 = 0;
              iVar38 = 0;
              bVar7 = false;
            }
            else {
              lVar19 = FUN_1800ad940(puVar25 + 10);
              if (lVar19 == 0) {
                lVar19 = 0;
                iVar10 = 0;
                iVar38 = 0;
              }
              else {
                uVar17 = FUN_180066a20(&local_180,"event_log_",puVar25 + 10);
                plVar13 = (longlong *)
                          FUN_18039ed80(&local_1e8,uVar17,lVar19,(int)(fVar47 + fVar47 + fVar40));
                lVar19 = *plVar13;
                iVar10 = (int)plVar13[1];
                iVar38 = *(int *)((longlong)plVar13 + 0xc);
                FUN_18000f890(&local_180);
                if (((lVar19 != 0) && (0 < iVar10)) && (0 < iVar38)) {
                  fVar48 = ((float)iVar10 / (float)iVar38) * fVar47;
                  fVar44 = local_2c8 + fVar48;
                  bVar7 = true;
                  goto LAB_1800b2850;
                }
              }
              fVar48 = 0.0;
              fVar44 = local_2c8 + 0.0;
              bVar7 = true;
            }
LAB_1800b2850:
            fVar41 = local_388;
            fVar43 = local_2c4 + (float)(ulonglong)(lVar21 >> 5) * fVar47;
            local_3b0 = fVar43 + local_368;
            fVar40 = (float)puVar25[0x20];
            fVar47 = local_388;
            if ((fVar40 <= DAT_1808ac1f4) && (DAT_1808ac34c <= (float)puVar25[0x26])) {
              fVar47 = local_388 - (DAT_1808ac34c - (fVar40 + fVar40)) * local_3b0;
              local_3b0 = (fVar40 + fVar40) * local_3b0;
            }
            if (DAT_1808abfc8 < fVar46) {
              lVar21 = local_268 * 0x14;
              fVar46 = local_368 * (float)puVar25[0x26] + local_2b0 + local_308;
              fVar40 = (float)FUN_18053fc00((float)(((uint)DAT_1808ac1f4 ^ (uint)fVar46) &
                                                    _DAT_1808ade90 ^ (uint)fVar46) + fVar46);
              fVar46 = local_3ac;
              local_2d8 = fVar40 + fVar44 + local_304 + fVar45;
              local_2d4 = fVar47 + fVar43;
              local_338 = fVar40;
              local_334 = fVar47;
              if (local_34c <= _DAT_1808abf44) {
                fVar45 = DAT_1808ac1f4;
              }
              else {
                uVar11 = FUN_180089560(&DAT_180920ef8);
                uVar12 = FUN_180089560(&DAT_180920f08);
                fVar45 = DAT_1808ac1f4;
                fVar44 = fVar43 * DAT_1808ac1f4;
                if (local_300 <= fVar43 * DAT_1808ac1f4) {
                  fVar44 = local_300;
                }
                local_3d8 = CONCAT44(local_3d8._4_4_,DAT_1808ac864);
                local_3e0 = CONCAT44(local_3e0._4_4_,uVar11);
                local_3e8 = CONCAT44(local_3e8._4_4_,uVar12);
                local_3f0 = (longlong *******)CONCAT44(local_3f0._4_4_,fVar46);
                local_3f8 = (longlong *******)CONCAT44(local_3f8._4_4_,local_358);
                FUN_1800be550(local_340,&local_338,&local_2d8,fVar44);
              }
              uVar11 = FUN_180089560(&DAT_180920e74 + lVar21);
              fVar44 = local_358;
              local_3f0 = (longlong *******)CONCAT44(local_3f0._4_4_,local_358);
              local_3f8 = (longlong *******)CONCAT44(local_3f8._4_4_,uVar11);
              FUN_1800be8a0(local_340);
              if (bVar7) {
                fVar41 = DAT_1808ac428;
              }
              else {
                fVar41 = fVar45;
              }
              fVar44 = fVar41 * fVar44 + local_2fc + fVar40 + local_354;
              fVar47 = fVar47 + local_350;
              uVar11 = FUN_180089560(&DAT_180920ee8);
              uVar12 = FUN_180089560(&DAT_180920e74 + lVar21);
              FUN_180089560(&DAT_180920e9c);
              fVar40 = local_3b4;
              local_2f8 = (int)(fVar46 * DAT_1808acb60 + fVar45) << 0x18;
              local_220 = &local_34c;
              local_218 = &local_340;
              local_210 = &local_330;
              local_208 = &local_3a4;
              local_200 = &local_2f8;
              if (bVar7) {
                if (((lVar19 != 0) && (0 < iVar10)) && (0 < iVar38)) {
                  local_29c = local_2f4 + fVar47;
                  local_298 = 0x3f800000;
                  local_294 = 0x3f800000;
                  local_288 = (longlong ******)0x0;
                  local_2ac = fVar44 + fVar48;
                  local_2a8 = local_29c + local_3b4;
                  local_1f8 = 0;
                  local_3e8 = CONCAT44(local_3e8._4_4_,uVar12);
                  local_3f0 = (longlong *******)&local_298;
                  local_3f8 = &local_288;
                  local_2a0 = fVar44;
                  local_1f0 = lVar19;
                  FUN_1803fea90(local_340,&local_1f8,&local_2a0,&local_2ac);
                }
                fVar44 = fVar48 + local_364 + local_2f0 + fVar44;
              }
              fVar46 = local_364;
              plVar13 = local_3a0;
              if ((longlong)plStack_398 - (longlong)local_3a0 >> 5 != 0) {
                puVar25 = (uint *)0x0;
                local_328 = (uint *)0x0;
                fVar45 = (fVar40 - local_384) * fVar45;
                plVar18 = plStack_398;
                local_3ac = fVar45;
                do {
                  plVar39 = plVar13 + (longlong)puVar25 * 4;
                  uVar22 = 0;
                  lVar21 = *plVar39;
                  fVar48 = fVar44;
                  if (plVar39[1] - lVar21 >> 5 != 0) {
                    while( true ) {
                      ppppppplVar24 = *(longlong ********)(lVar21 + 8 + uVar22 * 0x20);
                      ppppppplVar23 = *(longlong ********)(lVar21 + uVar22 * 0x20);
                      plVar13 = local_3a0;
                      plVar18 = plStack_398;
                      while( true ) {
                        plStack_398 = plVar18;
                        local_3a0 = plVar13;
                        if (ppppppplVar23 == ppppppplVar24) break;
                        local_3f8 = ppppppplVar23;
                        FUN_1800b3240(&local_220);
                        fVar48 = fVar48 + *(float *)((longlong)ppppppplVar23 + 0x24);
                        ppppppplVar23 = ppppppplVar23 + 5;
                        plVar13 = local_3a0;
                        plVar18 = plStack_398;
                      }
                      lVar21 = *plVar39;
                      uVar22 = uVar22 + 1;
                      if ((ulonglong)(plVar39[1] - lVar21 >> 5) <= uVar22) break;
                      fVar48 = fVar48 + fVar46;
                    }
                  }
                  plVar39 = plStack_378;
                  fVar41 = local_384;
                  puVar25 = (uint *)((longlong)local_328 + 1);
                  local_328 = puVar25;
                  if (puVar25 < (uint *)((longlong)plVar18 - (longlong)plVar13 >> 5)) {
                    fVar47 = fVar47 + fVar40;
                  }
                  else if (local_380 != plStack_378) {
                    plVar13 = local_380;
                    do {
                      fVar48 = fVar48 + fVar46;
                      if (((*plVar13 == 0) || ((int)plVar13[1] < 1)) ||
                         (*(int *)((longlong)plVar13 + 0xc) < 1)) {
                        local_3f8 = (longlong *******)(plVar13 + 3);
                        FUN_1800b3240(&local_220);
                      }
                      else {
                        local_310 = CONCAT44(fVar45 + fVar47,fVar48);
                        local_290 = 0x3f800000;
                        local_28c = 0x3f800000;
                        local_320 = (longlong ******)0x0;
                        local_318 = (double)CONCAT44(fVar45 + fVar47 + fVar41,
                                                     fVar48 + *(float *)(plVar13 + 7));
                        local_248 = (longlong *)0x0;
                        local_3e8 = CONCAT44(local_3e8._4_4_,uVar12);
                        local_3f0 = (longlong *******)&local_290;
                        local_3f8 = &local_320;
                        local_240 = *plVar13;
                        FUN_1803fea90(local_340,&local_248,&local_310,&local_318);
                      }
                      fVar48 = fVar48 + *(float *)(plVar13 + 7);
                      plVar13 = plVar13 + 8;
                    } while (plVar13 != plVar39);
                    plVar13 = local_3a0;
                    plVar18 = plStack_398;
                    fVar45 = local_3ac;
                  }
                } while (puVar25 < (uint *)((longlong)plVar18 - (longlong)plVar13 >> 5));
              }
              if (local_190 != (char *)0x0) {
                local_3f8 = (longlong *******)&local_1a0;
                FUN_1800b3240(&local_220,plVar13,fVar47,uVar11);
              }
              FUN_18000f890(&local_1a0);
              plVar18 = plStack_378;
              plVar13 = local_380;
              if (local_380 != (longlong *)0x0) {
                for (; plVar13 != plVar18; plVar13 = plVar13 + 8) {
                  FUN_18000f890(plVar13 + 3);
                }
                uVar22 = (longlong)local_370 - (longlong)local_380 & 0xffffffffffffffc0;
                plVar13 = local_380;
                if (0xfff < uVar22) {
                  plVar13 = (longlong *)local_380[-1];
                  puVar32 = auStack_418;
                  if (0x1f < (ulonglong)((longlong)local_380 + (-8 - (longlong)plVar13)))
                  goto LAB_1800b300e;
                  uVar22 = uVar22 | 0x27;
                }
                thunk_FUN_1803d64e0(plVar13,uVar22);
                local_380 = (longlong *)0x0;
                plStack_378 = (longlong *)0x0;
                local_370 = (longlong *)0x0;
              }
              puVar25 = local_360;
              fVar41 = local_388;
              uVar11 = DAT_1808acd08;
            }
            else {
              if ((char *)0xf < pcStack_188) {
                pcVar29 = pcStack_188 + 1;
                ppppppplVar24 = local_1a0;
                if ((char *)0xfff < pcVar29) {
                  ppppppplVar24 = (longlong *******)local_1a0[-1];
                  if (0x1f < (ulonglong)((longlong)local_1a0 + (-8 - (longlong)ppppppplVar24)))
                  goto LAB_1800b3007;
                  pcVar29 = pcStack_188 + 0x28;
                }
                thunk_FUN_1803d64e0(ppppppplVar24,pcVar29);
              }
              plVar18 = plStack_378;
              local_190 = (char *)0x0;
              pcStack_188 = (char *)0xf;
              local_1a0 = (longlong *******)((ulonglong)local_1a0 & 0xffffffffffffff00);
              plVar13 = local_380;
              if (local_380 != (longlong *)0x0) {
                for (; plVar13 != plVar18; plVar13 = plVar13 + 8) {
                  FUN_18000f890(plVar13 + 3);
                }
                uVar22 = (longlong)local_370 - (longlong)local_380 & 0xffffffffffffffc0;
                plVar13 = local_380;
                if (0xfff < uVar22) {
                  plVar13 = (longlong *)local_380[-1];
                  puVar32 = auStack_418;
                  if (0x1f < (ulonglong)((longlong)local_380 + (-8 - (longlong)plVar13)))
                  goto LAB_1800b300e;
                  uVar22 = uVar22 | 0x27;
                }
                thunk_FUN_1803d64e0(plVar13,uVar22);
                local_380 = (longlong *)0x0;
                plStack_378 = (longlong *)0x0;
                local_370 = (longlong *)0x0;
              }
            }
            FUN_1800b3860(&local_3a0);
            puVar25 = puVar25 + 0x52;
            local_388 = fVar41 + local_3b0;
            puVar32 = auStack_418;
            local_360 = puVar25;
          } while (puVar25 != local_2b8);
        }
      }
      puVar37 = puStack_278;
      puVar25 = local_280;
      if (local_280 != (uint *)0x0) {
        for (; puVar25 != puVar37; puVar25 = puVar25 + 0x52) {
          *(undefined8 *)(puVar32 + -8) = 0x1800b3038;
          FUN_1800b0980(puVar25);
        }
        uVar22 = (local_270 - (longlong)local_280 >> 3) * 8;
        puVar25 = local_280;
        if (0xfff < uVar22) {
          puVar25 = *(uint **)(local_280 + -2);
          if (0x1f < (ulonglong)((longlong)local_280 + (-8 - (longlong)puVar25))) {
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar33 = puVar32 + 8;
LAB_1800b3100:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar33 + -8) = 0x1800b3105;
            FUN_180011990();
          }
          uVar22 = uVar22 + 0x27;
        }
        *(undefined8 *)(puVar32 + -8) = 0x1800b3097;
        thunk_FUN_1803d64e0(puVar25,uVar22);
      }
    }
    *(undefined8 *)(puVar32 + -8) = 0x1800b30a6;
  }
  return;
}



/* ===== 1800b3130 FUN_1800b3130 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800b3130(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined2 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    lVar2 = param_1[1];
    lVar3 = *(longlong *)(lVar2 + 8);
    if (lVar3 == *(longlong *)(lVar2 + 0x10)) {
      FUN_1800b4690(lVar2,lVar3,lVar1);
    }
    else {
      FUN_180024b50(lVar3,lVar1);
      *(undefined1 *)(lVar3 + 0x20) = *(undefined1 *)(lVar1 + 0x20);
      *(undefined1 *)(lVar3 + 0x21) = *(undefined1 *)(lVar1 + 0x21);
      *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar1 + 0x24);
      *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 0x28;
    }
  }
  lVar1 = *param_1;
  uStack_30 = 0;
  local_38 = 0;
  local_28 = _DAT_1808ad410;
  uStack_20 = _UNK_1808ad418;
  local_18 = 0;
  local_14 = 0;
  FUN_18002ba60(lVar1,&local_38);
  *(undefined1 *)(lVar1 + 0x20) = (undefined1)local_18;
  *(undefined1 *)(lVar1 + 0x21) = local_18._1_1_;
  *(undefined4 *)(lVar1 + 0x24) = local_14;
  FUN_18000f890(&local_38);
  *(bool *)(*param_1 + 0x20) = *(char *)param_1[2] != *(char *)param_1[3];
  return;
}



/* ===== 1800b3240 FUN_1800b3240 ===== */

void FUN_1800b3240(undefined8 *param_1,float param_2,float param_3,uint param_4,char *param_5)

{
  longlong lVar1;
  char *pcVar2;
  longlong *plVar3;
  char *pcVar4;
  float fVar5;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  pcVar4 = param_5;
  if (*(float *)*param_1 <= 0.0) {
    if (0xf < *(ulonglong *)(param_5 + 0x18)) {
      param_5 = *(char **)param_5;
    }
    if ((((*(uint *)param_1[4] & 0xff000000) != 0) && (param_5 != (char *)0x0)) &&
       (*param_5 != '\0')) {
      lVar1 = *(longlong *)param_1[1];
      fVar5 = *(float *)param_1[3];
      plVar3 = (longlong *)param_1[2];
      if (*plVar3 == 0) {
        plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18);
      }
      if (fVar5 == 0.0) {
        fVar5 = *(float *)(*(longlong *)(lVar1 + 0x38) + 0x20);
      }
      local_68 = *(undefined4 *)(lVar1 + 0x60);
      uStack_64 = *(undefined4 *)(lVar1 + 100);
      uStack_60 = *(undefined4 *)(lVar1 + 0x68);
      uStack_5c = *(undefined4 *)(lVar1 + 0x6c);
      pcVar2 = param_5;
      param_5._0_4_ = param_2 + DAT_1808ac34c;
      param_5._4_4_ = param_3 + DAT_1808ac34c;
      FUN_18040a900(*plVar3,lVar1,fVar5,&param_5,*(uint *)param_1[4],&local_68,pcVar2,0,0,0);
    }
  }
  if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
    pcVar4 = *(char **)pcVar4;
  }
  if ((((param_4 & 0xff000000) != 0) && (pcVar4 != (char *)0x0)) && (*pcVar4 != '\0')) {
    lVar1 = *(longlong *)param_1[1];
    fVar5 = *(float *)param_1[3];
    plVar3 = (longlong *)param_1[2];
    if (*plVar3 == 0) {
      plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18);
    }
    if (fVar5 == 0.0) {
      fVar5 = *(float *)(*(longlong *)(lVar1 + 0x38) + 0x20);
    }
    local_68 = *(undefined4 *)(lVar1 + 0x60);
    uStack_64 = *(undefined4 *)(lVar1 + 100);
    uStack_60 = *(undefined4 *)(lVar1 + 0x68);
    uStack_5c = *(undefined4 *)(lVar1 + 0x6c);
    param_5._0_4_ = param_2;
    param_5._4_4_ = param_3;
    FUN_18040a900(*plVar3,lVar1,fVar5,&param_5,param_4,&local_68,pcVar4,0,0,0);
  }
  return;
}



/* ===== 1800b3400 thunk_FUN_1800b38f0 ===== */

void thunk_FUN_1800b38f0(longlong *param_1)

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
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800b397f;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1800b397f:
  *(undefined8 *)(puVar5 + -8) = 0x1800b3987;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800b3420 FUN_1800b3420 ===== */

void FUN_1800b3420(longlong *param_1)

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
    FUN_18000f890(lVar3 + 0x18);
  }
  lVar3 = *param_1;
  if (0xfff < (param_1[2] - lVar3 & 0xffffffffffffffc0U)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800b3492;
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar2 = lVar3;
  puVar5 = puVar4;
LAB_1800b3492:
  *(undefined8 *)(puVar5 + -8) = 0x1800b3497;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800b34c0 FUN_1800b34c0 ===== */

void FUN_1800b34c0(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x148) {
    FUN_1800b0980(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800b354d;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1800b354d:
  *(undefined8 *)(puVar5 + -8) = 0x1800b3555;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800b3570 FUN_1800b3570 ===== */

void FUN_1800b3570(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (DAT_180ca0d88 <= DAT_180ca0d98 + 1U) {
    FUN_1800b4890();
  }
  DAT_180ca0d90 = DAT_180ca0d90 & DAT_180ca0d88 - 1;
  uVar1 = DAT_180ca0d98 + DAT_180ca0d90;
  uVar3 = DAT_180ca0d88 - 1 & uVar1;
  if (*(longlong *)(DAT_180ca0d80 + uVar3 * 8) == 0) {
    uVar2 = FUN_1804ecaa0(0x148);
    *(undefined8 *)(DAT_180ca0d80 + uVar3 * 8) = uVar2;
  }
  FUN_1800b4fc0(*(undefined8 *)(DAT_180ca0d80 + (DAT_180ca0d88 - 1 & uVar1) * 8),param_2);
  DAT_180ca0d98 = DAT_180ca0d98 + 1;
  return;
}



/* ===== 1800b3630 FUN_1800b3630 ===== */

undefined8 FUN_1800b3630(void)

{
  return 6;
}



/* ===== 1800b3640 FUN_1800b3640 ===== */

void FUN_1800b3640(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [48];
  
  puVar7 = auStack_78;
  puVar8 = auStack_78;
  puVar9 = auStack_78;
  lVar11 = *param_1;
  uVar6 = (param_1[2] - lVar11 >> 3) * -0x7063e7063e7063e7;
  if (param_3 <= uVar6) {
    lVar5 = param_1[1];
    lVar10 = lVar5 - lVar11 >> 3;
    if (param_3 <= (ulonglong)(lVar10 * -0x7063e7063e7063e7)) {
      lVar5 = *param_2;
      uVar6 = param_2[1];
      lVar10 = param_3 * 0x148 + lVar11;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        FUN_1800b3bb0(lVar11,*(undefined8 *)
                              (*(longlong *)(lVar5 + 8) +
                              (*(longlong *)(lVar5 + 0x10) - 1U & uVar6) * 8));
        lVar11 = lVar11 + 0x148;
        uVar6 = uVar6 + 1;
      }
      lVar11 = param_1[1];
      for (lVar5 = lVar10; lVar5 != lVar11; lVar5 = lVar5 + 0x148) {
        FUN_1800b0980(lVar5);
      }
      param_1[1] = lVar10;
      return;
    }
    if (lVar11 != lVar5) {
      lVar1 = *param_2;
      do {
        uVar6 = param_2[1];
        FUN_1800b3bb0(lVar11,*(undefined8 *)
                              (*(longlong *)(lVar1 + 8) +
                              (*(longlong *)(lVar1 + 0x10) - 1U & uVar6) * 8));
        lVar5 = param_1[1];
        lVar11 = lVar11 + 0x148;
        param_2[1] = uVar6 + 1;
      } while (lVar11 != lVar5);
    }
    param_3 = param_3 + lVar10 * 0x7063e7063e7063e7;
    goto LAB_1800b37bb;
  }
  if (0xc7ce0c7ce0c7ce < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  if (0xc7ce0c7ce0c7ce - (uVar6 >> 1) < uVar6) {
    uVar6 = 0xc7ce0c7ce0c7ce;
  }
  else {
    uVar6 = (uVar6 >> 1) + uVar6;
    if (uVar6 < param_3) {
      uVar6 = param_3;
    }
  }
  puVar9 = auStack_78;
  if (lVar11 != 0) {
    lVar5 = param_1[1];
    for (; lVar11 != lVar5; lVar11 = lVar11 + 0x148) {
      FUN_1800b0980(lVar11);
    }
    lVar11 = *param_1;
    lVar5 = lVar11;
    if ((ulonglong)((param_1[2] - lVar11 >> 3) * 8) < 0x1000) {
LAB_1800b3715:
      puVar8 = puVar7;
    }
    else {
      lVar5 = *(longlong *)(lVar11 + -8);
      if (0x1f < (lVar11 - lVar5) - 8U) {
        lVar5 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar7 = auStack_70;
        goto LAB_1800b3715;
      }
    }
    *(undefined8 *)(puVar8 + -8) = 0x1800b3720;
    thunk_FUN_1803d64e0(lVar5);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar9 = puVar8;
  }
  if (0xc7ce0c7ce0c7ce < uVar6) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar9 + -8) = &UNK_1800b3855;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar9 + -8) = 0x1800b3745;
  lVar5 = FUN_18000fb70(uVar6 * 0x148);
  *param_1 = lVar5;
  param_1[1] = lVar5;
  param_1[2] = uVar6 * 0x148 + lVar5;
LAB_1800b37bb:
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  lVar11 = param_2[1];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(int *)(puVar9 + 0x20) = (int)*param_2;
  *(undefined4 *)(puVar9 + 0x24) = uVar3;
  *(int *)(puVar9 + 0x28) = (int)lVar11;
  *(undefined4 *)(puVar9 + 0x2c) = uVar4;
  *(undefined8 *)(puVar9 + -8) = 0x1800b37d5;
  lVar11 = FUN_1800b3da0(puVar9 + 0x20,param_3,lVar5,param_1);
  param_1[1] = lVar11;
  return;
}



/* ===== 1800b3860 FUN_1800b3860 ===== */

void FUN_1800b3860(longlong *param_1)

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
    FUN_1800b4e80(lVar3);
  }
  lVar3 = *param_1;
  if (0xfff < (param_1[2] - lVar3 & 0xffffffffffffffe0U)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800b38d1;
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar2 = lVar3;
  puVar5 = puVar4;
LAB_1800b38d1:
  *(undefined8 *)(puVar5 + -8) = 0x1800b38d6;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800b38f0 FUN_1800b38f0 ===== */

void FUN_1800b38f0(longlong *param_1)

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
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800b397f;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1800b397f:
  *(undefined8 *)(puVar5 + -8) = 0x1800b3987;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800b39a0 FUN_1800b39a0 ===== */

undefined8 * FUN_1800b39a0(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar3 = DAT_180ca0d90;
  plVar2 = DAT_180ca0d78;
  uVar5 = *(ulonglong *)(param_4 + 0x10);
  uVar6 = *(ulonglong *)(param_3 + 0x10);
  lVar7 = uVar5 - uVar6;
  if (lVar7 == 0) {
    param_2[1] = 0;
    *param_2 = plVar2;
    param_2[2] = uVar6;
    return param_2;
  }
  uVar4 = uVar6 - DAT_180ca0d90;
  if (DAT_180ca0d78 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *DAT_180ca0d78;
  }
  uVar1 = DAT_180ca0d90 + DAT_180ca0d98;
  if (uVar4 < uVar1 - uVar5) {
    if (DAT_180ca0d90 != uVar6) {
      do {
        uVar6 = uVar6 - 1;
        uVar5 = uVar5 - 1;
        FUN_1800b4bd0(*(undefined8 *)
                       (*(longlong *)(lVar8 + 8) + (*(longlong *)(lVar8 + 0x10) - 1U & uVar5) * 8),
                      *(undefined8 *)
                       (*(longlong *)(lVar8 + 8) + (*(longlong *)(lVar8 + 0x10) - 1U & uVar6) * 8));
      } while (uVar3 != uVar6);
    }
    do {
      FUN_1800b0980(*(undefined8 *)(DAT_180ca0d80 + (DAT_180ca0d88 - 1U & DAT_180ca0d90) * 8));
      DAT_180ca0d98 = DAT_180ca0d98 + -1;
      if (DAT_180ca0d98 == 0) {
        DAT_180ca0d90 = 0;
      }
      else {
        DAT_180ca0d90 = DAT_180ca0d90 + 1;
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  else {
    if (uVar5 != uVar1) {
      do {
        FUN_1800b4bd0(*(undefined8 *)
                       (*(longlong *)(lVar8 + 8) + (*(longlong *)(lVar8 + 0x10) - 1U & uVar6) * 8),
                      *(undefined8 *)
                       (*(longlong *)(lVar8 + 8) + (*(longlong *)(lVar8 + 0x10) - 1U & uVar5) * 8));
        uVar5 = uVar5 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar1);
    }
    do {
      FUN_1800b0980(*(undefined8 *)
                     (DAT_180ca0d80 + (DAT_180ca0d98 + -1 + DAT_180ca0d90 & DAT_180ca0d88 - 1U) * 8)
                   );
      DAT_180ca0d98 = DAT_180ca0d98 + -1;
      if (DAT_180ca0d98 == 0) {
        DAT_180ca0d90 = 0;
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  uVar6 = DAT_180ca0d90;
  *param_2 = DAT_180ca0d78;
  param_2[1] = 0;
  param_2[2] = uVar4 + uVar6;
  return param_2;
}



/* ===== 1800b3bb0 FUN_1800b3bb0 ===== */

undefined4 * FUN_1800b3bb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    puVar1 = (undefined8 *)(param_2 + 2);
    if (0xf < *(ulonglong *)(param_2 + 8)) {
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_180029840(param_1 + 2,puVar1,*(undefined8 *)(param_2 + 6));
    plVar2 = (longlong *)(param_2 + 10);
    if (0xf < *(ulonglong *)(param_2 + 0x10)) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_180029840(param_1 + 10,plVar2,*(undefined8 *)(param_2 + 0xe));
    plVar2 = (longlong *)(param_2 + 0x12);
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_180029840(param_1 + 0x12,plVar2,*(undefined8 *)(param_2 + 0x16));
  }
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
  if (param_1 == param_2) {
    FUN_180067240(param_1 + 0x44,param_2 + 0x44);
    return param_1;
  }
  plVar2 = (longlong *)(param_2 + 0x2c);
  if (0xf < *(ulonglong *)(param_2 + 0x32)) {
    plVar2 = (longlong *)*plVar2;
  }
  FUN_180029840(param_1 + 0x2c,plVar2,*(undefined8 *)(param_2 + 0x30));
  plVar2 = (longlong *)(param_2 + 0x34);
  if (0xf < *(ulonglong *)(param_2 + 0x3a)) {
    plVar2 = (longlong *)*plVar2;
  }
  FUN_180029840(param_1 + 0x34,plVar2,*(undefined8 *)(param_2 + 0x38));
  plVar2 = (longlong *)(param_2 + 0x3c);
  if (0xf < *(ulonglong *)(param_2 + 0x42)) {
    plVar2 = (longlong *)*plVar2;
  }
  FUN_180029840(param_1 + 0x3c,plVar2,*(undefined8 *)(param_2 + 0x40));
  FUN_180067240(param_1 + 0x44,param_2 + 0x44);
  plVar2 = (longlong *)(param_2 + 0x4a);
  if (0xf < *(ulonglong *)(param_2 + 0x50)) {
    plVar2 = (longlong *)*plVar2;
  }
  FUN_180029840(param_1 + 0x4a,plVar2,*(undefined8 *)(param_2 + 0x4e));
  return param_1;
}



/* ===== 1800b3da0 FUN_1800b3da0 ===== */

undefined4 * FUN_1800b3da0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  uVar3 = param_1[1];
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar2 = *(undefined4 **)
              (*(longlong *)(lVar1 + 8) + (*(longlong *)(lVar1 + 0x10) - 1U & uVar3) * 8);
    *param_3 = *puVar2;
    FUN_180024b50(param_3 + 2,puVar2 + 2);
    FUN_180024b50(param_3 + 10,puVar2 + 10);
    FUN_180024b50(param_3 + 0x12,puVar2 + 0x12);
    *(undefined8 *)(param_3 + 0x1a) = *(undefined8 *)(puVar2 + 0x1a);
    *(undefined8 *)(param_3 + 0x1c) = *(undefined8 *)(puVar2 + 0x1c);
    *(undefined8 *)(param_3 + 0x1e) = *(undefined8 *)(puVar2 + 0x1e);
    param_3[0x20] = puVar2[0x20];
    param_3[0x21] = puVar2[0x21];
    param_3[0x22] = puVar2[0x22];
    *(undefined8 *)(param_3 + 0x24) = *(undefined8 *)(puVar2 + 0x24);
    param_3[0x26] = puVar2[0x26];
    param_3[0x27] = puVar2[0x27];
    param_3[0x28] = puVar2[0x28];
    param_3[0x29] = puVar2[0x29];
    param_3[0x2a] = puVar2[0x2a];
    *(undefined1 *)(param_3 + 0x2b) = *(undefined1 *)(puVar2 + 0x2b);
    FUN_180024b50(param_3 + 0x2c,puVar2 + 0x2c);
    FUN_180024b50(param_3 + 0x34,puVar2 + 0x34);
    FUN_180024b50(param_3 + 0x3c,puVar2 + 0x3c);
    FUN_18006d7e0(param_3 + 0x44,puVar2 + 0x44);
    FUN_180024b50(param_3 + 0x4a,puVar2 + 0x4a);
    param_3 = param_3 + 0x52;
    uVar3 = uVar3 + 1;
  }
  return param_3;
}



/* ===== 1800b3f50 FUN_1800b3f50 ===== */

undefined8 * FUN_1800b3f50(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar12 = *param_1;
  if (param_1[1] - lVar12 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar10 = param_1[2] - lVar12 >> 5;
  uVar1 = (param_1[1] - lVar12 >> 5) + 1;
  uVar17 = 0x7ffffffffffffff;
  if (uVar10 <= 0x7ffffffffffffff - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar17 = uVar1;
    if (uVar1 <= uVar10) {
      uVar17 = uVar10;
    }
    if (0x7ffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar17 * 0x20);
  puVar13 = auStack_38;
  puVar14 = auStack_38;
  puVar16 = (undefined8 *)(((longlong)param_2 - lVar12 & 0xffffffffffffffe0U) + (longlong)puVar9);
  puVar16[3] = 0;
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  puVar3 = (undefined8 *)param_1[1];
  puVar15 = (undefined8 *)*param_1;
  puVar8 = puVar9;
  if (param_2 == puVar3) {
    for (; puVar15 != puVar3; puVar15 = puVar15 + 4) {
      uVar4 = *puVar15;
      uVar5 = puVar15[2];
      uVar6 = puVar15[1];
      puVar15[2] = 0;
      puVar15[1] = 0;
      *puVar15 = 0;
      *puVar8 = uVar4;
      uVar2 = *(undefined4 *)(puVar15 + 3);
      puVar8[1] = uVar6;
      puVar8[2] = uVar5;
      *(undefined4 *)(puVar8 + 3) = uVar2;
      puVar8 = puVar8 + 4;
    }
  }
  else {
    for (; puVar15 != param_2; puVar15 = puVar15 + 4) {
      uVar4 = *puVar15;
      uVar5 = puVar15[2];
      uVar6 = puVar15[1];
      puVar15[2] = 0;
      puVar15[1] = 0;
      *puVar15 = 0;
      *puVar8 = uVar4;
      uVar2 = *(undefined4 *)(puVar15 + 3);
      puVar8[1] = uVar6;
      puVar8[2] = uVar5;
      *(undefined4 *)(puVar8 + 3) = uVar2;
      puVar8 = puVar8 + 4;
    }
    puVar3 = (undefined8 *)param_1[1];
    puVar15 = puVar16;
    for (; param_2 != puVar3; param_2 = param_2 + 4) {
      uVar4 = *param_2;
      uVar5 = param_2[2];
      uVar6 = param_2[1];
      param_2[2] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      puVar15[4] = uVar4;
      uVar2 = *(undefined4 *)(param_2 + 3);
      puVar15[5] = uVar6;
      puVar15[6] = uVar5;
      *(undefined4 *)(puVar15 + 7) = uVar2;
      puVar15 = puVar15 + 4;
    }
  }
  lVar12 = *param_1;
  if (lVar12 == 0) goto LAB_1800b4145;
  lVar11 = param_1[1];
  for (; lVar12 != lVar11; lVar12 = lVar12 + 0x20) {
    FUN_1800b4e80(lVar12);
  }
  lVar12 = *param_1;
  if ((param_1[2] - lVar12 & 0xffffffffffffffe0U) < 0x1000) {
LAB_1800b413d:
    lVar11 = lVar12;
    puVar14 = puVar13;
  }
  else {
    lVar11 = *(longlong *)(lVar12 + -8);
    if (0x1f < (lVar12 - lVar11) - 8U) {
      pcVar7 = (code *)swi(0x29);
      lVar12 = (*pcVar7)(5);
      puVar13 = auStack_30;
      goto LAB_1800b413d;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x1800b4145;
  thunk_FUN_1803d64e0(lVar11);
LAB_1800b4145:
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + uVar1 * 4);
  param_1[2] = (longlong)(puVar9 + uVar17 * 4);
  return puVar16;
}



/* ===== 1800b4190 FUN_1800b4190 ===== */

undefined4 * FUN_1800b4190(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  longlong *local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  lVar15 = *param_1;
  if (param_1[1] - lVar15 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = (param_1[1] - lVar15 >> 6) + 1;
  uVar12 = param_1[2] - lVar15 >> 6;
  uVar19 = 0x3ffffffffffffff;
  if (uVar12 <= 0x3ffffffffffffff - (uVar12 >> 1)) {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar19 = uVar1;
    if (uVar1 <= uVar12) {
      uVar19 = uVar12;
    }
    if (0x3ffffffffffffff < uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar11 = (undefined8 *)FUN_18000fb70(uVar19 << 6);
  uVar12 = (longlong)param_2 - lVar15 & 0xffffffffffffffc0;
  puVar2 = (undefined4 *)(uVar12 + (longlong)puVar11);
  puVar3 = (undefined8 *)(puVar2 + 0x10);
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  *puVar2 = *param_3;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_3 + 4);
  local_78 = param_1;
  local_70 = puVar11;
  local_68 = uVar19;
  local_60 = puVar3;
  local_58 = puVar3;
  FUN_180024b50((uVar12 | 0x18) + (longlong)puVar11,param_3 + 6);
  puVar16 = auStack_98;
  puVar17 = auStack_98;
  puVar2[0xe] = param_3[0xe];
  puVar4 = (undefined8 *)param_1[1];
  puVar13 = (undefined8 *)*param_1;
  puVar10 = puVar11;
  if (param_2 == puVar4) {
    for (; puVar13 != puVar4; puVar13 = puVar13 + 8) {
      uVar9 = puVar13[1];
      *puVar10 = *puVar13;
      puVar10[1] = uVar9;
      puVar10[2] = puVar13[2];
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      uVar6 = *(undefined4 *)((longlong)puVar13 + 0x1c);
      uVar7 = *(undefined4 *)(puVar13 + 4);
      uVar8 = *(undefined4 *)((longlong)puVar13 + 0x24);
      *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(puVar13 + 3);
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
      *(undefined4 *)(puVar10 + 4) = uVar7;
      *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
      uVar9 = puVar13[6];
      puVar10[5] = puVar13[5];
      puVar10[6] = uVar9;
      puVar13[5] = 0;
      puVar13[6] = 0xf;
      *(undefined1 *)(puVar13 + 3) = 0;
      *(undefined4 *)(puVar10 + 7) = *(undefined4 *)(puVar13 + 7);
      puVar10 = puVar10 + 8;
    }
  }
  else {
    for (; puVar13 != param_2; puVar13 = puVar13 + 8) {
      uVar9 = puVar13[1];
      *puVar10 = *puVar13;
      puVar10[1] = uVar9;
      puVar10[2] = puVar13[2];
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      uVar6 = *(undefined4 *)((longlong)puVar13 + 0x1c);
      uVar7 = *(undefined4 *)(puVar13 + 4);
      uVar8 = *(undefined4 *)((longlong)puVar13 + 0x24);
      *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(puVar13 + 3);
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
      *(undefined4 *)(puVar10 + 4) = uVar7;
      *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
      uVar9 = puVar13[6];
      puVar10[5] = puVar13[5];
      puVar10[6] = uVar9;
      puVar13[5] = 0;
      puVar13[6] = 0xf;
      *(undefined1 *)(puVar13 + 3) = 0;
      *(undefined4 *)(puVar10 + 7) = *(undefined4 *)(puVar13 + 7);
      puVar10 = puVar10 + 8;
    }
    puVar4 = (undefined8 *)param_1[1];
    for (; param_2 != puVar4; param_2 = param_2 + 8) {
      uVar9 = param_2[1];
      *puVar3 = *param_2;
      puVar3[1] = uVar9;
      puVar3[2] = param_2[2];
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uVar7 = *(undefined4 *)(param_2 + 4);
      uVar8 = *(undefined4 *)((longlong)param_2 + 0x24);
      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_2 + 3);
      *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar6;
      *(undefined4 *)(puVar3 + 4) = uVar7;
      *(undefined4 *)((longlong)puVar3 + 0x24) = uVar8;
      uVar9 = param_2[6];
      puVar3[5] = param_2[5];
      puVar3[6] = uVar9;
      param_2[5] = 0;
      param_2[6] = 0xf;
      *(undefined1 *)(param_2 + 3) = 0;
      *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(param_2 + 7);
      puVar3 = puVar3 + 8;
    }
  }
  lVar15 = *param_1;
  puVar18 = auStack_98;
  if (lVar15 == 0) goto LAB_1800b4412;
  lVar14 = param_1[1];
  for (; lVar15 != lVar14; lVar15 = lVar15 + 0x40) {
    FUN_18000f890(lVar15 + 0x18);
  }
  lVar15 = *param_1;
  if ((param_1[2] - lVar15 & 0xffffffffffffffc0U) < 0x1000) {
LAB_1800b440a:
    lVar14 = lVar15;
    puVar17 = puVar16;
  }
  else {
    lVar14 = *(longlong *)(lVar15 + -8);
    if (0x1f < (lVar15 - lVar14) - 8U) {
      pcVar5 = (code *)swi(0x29);
      lVar15 = (*pcVar5)(5);
      puVar16 = auStack_90;
      goto LAB_1800b440a;
    }
  }
  *(undefined8 *)(puVar17 + -8) = 0x1800b4412;
  thunk_FUN_1803d64e0(lVar14);
  puVar18 = puVar17;
LAB_1800b4412:
  *param_1 = (longlong)puVar11;
  param_1[1] = (longlong)(puVar11 + uVar1 * 8);
  param_1[2] = *(longlong *)(puVar18 + 0xa0) + (longlong)puVar11;
  return puVar2;
}



/* ===== 1800b4450 FUN_1800b4450 ===== */

undefined8 FUN_1800b4450(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  longlong *local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  lVar12 = *param_1;
  if (param_1[1] - lVar12 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = (param_1[1] - lVar12 >> 5) + 1;
  uVar10 = param_1[2] - lVar12 >> 5;
  uVar17 = 0x7ffffffffffffff;
  if (uVar10 <= 0x7ffffffffffffff - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar17 = uVar1;
    if (uVar1 <= uVar10) {
      uVar17 = uVar10;
    }
    if (0x7ffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar17 * 0x20);
  puVar2 = (undefined8 *)
           ((longlong)puVar9 + ((longlong)param_2 - lVar12 & 0xffffffffffffffe0U) + 0x20);
  local_78 = param_1;
  local_70 = puVar9;
  local_68 = uVar17;
  local_60 = puVar2;
  local_58 = puVar2;
  FUN_1800b4a60();
  puVar13 = auStack_98;
  puVar14 = auStack_98;
  puVar3 = (undefined8 *)param_1[1];
  puVar16 = (undefined8 *)*param_1;
  puVar8 = puVar9;
  if (param_2 == puVar3) {
    for (; puVar16 != puVar3; puVar16 = puVar16 + 4) {
      uVar4 = puVar16[2];
      puVar16[2] = 0;
      uVar5 = puVar16[1];
      puVar16[1] = 0;
      uVar6 = *puVar16;
      *puVar16 = 0;
      *puVar8 = uVar6;
      puVar8[1] = uVar5;
      puVar8[2] = uVar4;
      *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar16 + 3);
      puVar8 = puVar8 + 4;
    }
  }
  else {
    for (; puVar16 != param_2; puVar16 = puVar16 + 4) {
      uVar4 = puVar16[2];
      puVar16[2] = 0;
      uVar5 = puVar16[1];
      puVar16[1] = 0;
      uVar6 = *puVar16;
      *puVar16 = 0;
      *puVar8 = uVar6;
      puVar8[1] = uVar5;
      puVar8[2] = uVar4;
      *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar16 + 3);
      puVar8 = puVar8 + 4;
    }
    puVar3 = (undefined8 *)param_1[1];
    for (; param_2 != puVar3; param_2 = param_2 + 4) {
      uVar4 = param_2[2];
      param_2[2] = 0;
      uVar5 = param_2[1];
      param_2[1] = 0;
      uVar6 = *param_2;
      *param_2 = 0;
      *puVar2 = uVar6;
      puVar2[1] = uVar5;
      puVar2[2] = uVar4;
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_2 + 3);
      puVar2 = puVar2 + 4;
    }
  }
  lVar12 = *param_1;
  puVar15 = auStack_98;
  if (lVar12 == 0) goto LAB_1800b4653;
  lVar11 = param_1[1];
  for (; lVar12 != lVar11; lVar12 = lVar12 + 0x20) {
    FUN_1800b38f0(lVar12);
  }
  lVar12 = *param_1;
  if ((param_1[2] - lVar12 & 0xffffffffffffffe0U) < 0x1000) {
LAB_1800b464b:
    lVar11 = lVar12;
    puVar14 = puVar13;
  }
  else {
    lVar11 = *(longlong *)(lVar12 + -8);
    if (0x1f < (lVar12 - lVar11) - 8U) {
      pcVar7 = (code *)swi(0x29);
      lVar12 = (*pcVar7)(5);
      puVar13 = auStack_90;
      goto LAB_1800b464b;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x1800b4653;
  thunk_FUN_1803d64e0(lVar11);
  puVar15 = puVar14;
LAB_1800b4653:
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + uVar1 * 4);
  param_1[2] = (longlong)(puVar9 + uVar17 * 4);
  return *(undefined8 *)(puVar15 + 0xa0);
}



/* ===== 1800b4690 FUN_1800b4690 ===== */

longlong FUN_1800b4690(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  longlong *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  
  lVar9 = *param_1;
  lVar3 = (param_1[1] - lVar9 >> 3) * -0x3333333333333333;
  uVar8 = 0x666666666666666;
  if (lVar3 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (param_1[2] - lVar9 >> 3) * -0x3333333333333333;
  if (uVar5 <= 0x666666666666666 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar8 = uVar1;
    if (uVar1 <= uVar5) {
      uVar8 = uVar5;
    }
    if (0x666666666666666 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar8 * 0x28);
  lVar3 = lVar4 + ((param_2 - lVar9) / 0x28) * 0x28;
  lVar9 = lVar3 + 0x28;
  local_78 = param_1;
  local_70 = lVar4;
  local_68 = uVar8;
  local_60 = lVar9;
  local_58 = lVar9;
  FUN_180024b50(lVar3,param_3);
  *(undefined1 *)(lVar3 + 0x20) = *(undefined1 *)(param_3 + 0x20);
  *(undefined1 *)(lVar3 + 0x21) = *(undefined1 *)(param_3 + 0x21);
  *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  lVar13 = lVar4;
  if (param_2 != lVar7) {
    FUN_1800b4b60(*param_1,param_2,lVar4);
    lVar7 = param_1[1];
    lVar6 = param_2;
    lVar13 = lVar9;
  }
  puVar10 = auStack_98;
  puVar11 = auStack_98;
  FUN_1800b4b60(lVar6,lVar7,lVar13);
  lVar9 = *param_1;
  puVar12 = auStack_98;
  if (lVar9 == 0) goto LAB_1800b484b;
  lVar7 = param_1[1];
  for (; lVar9 != lVar7; lVar9 = lVar9 + 0x28) {
    FUN_18000f890(lVar9);
  }
  lVar9 = *param_1;
  lVar7 = lVar9;
  if ((ulonglong)((param_1[2] - lVar9 >> 3) * 8) < 0x1000) {
LAB_1800b4840:
    puVar11 = puVar10;
  }
  else {
    lVar7 = *(longlong *)(lVar9 + -8);
    if (0x1f < (lVar9 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar10 = auStack_90;
      goto LAB_1800b4840;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x1800b484b;
  thunk_FUN_1803d64e0(lVar7);
  puVar12 = puVar11;
LAB_1800b484b:
  *param_1 = lVar4;
  param_1[1] = lVar4 + uVar1 * 0x28;
  param_1[2] = *(longlong *)(puVar12 + 0xa0) + lVar4;
  return lVar3;
}



/* ===== 1800b4890 FUN_1800b4890 ===== */

void FUN_1800b4890(void)

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
  
  uVar2 = DAT_180ca0d90;
  uVar6 = 1;
  if (DAT_180ca0d88 != 0) {
    uVar6 = DAT_180ca0d88;
  }
  for (; (uVar6 == DAT_180ca0d88 || (uVar6 < 8)); uVar6 = uVar6 * 2) {
    if (0xc7ce0c7ce0c7ce - uVar6 < uVar6) {
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
  uVar6 = uVar6 - DAT_180ca0d88;
  lVar9 = (DAT_180ca0d88 - uVar2) * 8;
  FUN_180540530(lVar5 + lVar3,DAT_180ca0d80 + lVar5,lVar9);
  lVar9 = lVar9 + lVar5 + lVar3;
  if (uVar6 < uVar2) {
    lVar5 = uVar6 * 8;
    FUN_180540530(lVar9,DAT_180ca0d80,lVar5);
    lVar9 = (uVar2 - uVar6) * 8;
    FUN_180540530(lVar3,DAT_180ca0d80 + lVar5,lVar9);
    lVar9 = lVar3 + lVar9;
  }
  else {
    FUN_180540530(lVar9,DAT_180ca0d80,lVar5);
    FUN_180540170(lVar9 + lVar5,0,(uVar6 - uVar2) * 8);
    lVar9 = lVar3;
  }
  FUN_180540170(lVar9,0,lVar5);
  puVar7 = auStack_38;
  puVar8 = auStack_38;
  if (DAT_180ca0d80 == 0) goto LAB_1800b4a38;
  lVar5 = DAT_180ca0d80;
  if (DAT_180ca0d88 * 8 < 0x1000) {
LAB_1800b4a2d:
    puVar8 = puVar7;
  }
  else {
    lVar5 = *(longlong *)(DAT_180ca0d80 + -8);
    if (0x1f < (DAT_180ca0d80 - lVar5) - 8U) {
      lVar5 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar7 = auStack_30;
      goto LAB_1800b4a2d;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x1800b4a38;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800b4a38:
  DAT_180ca0d88 = DAT_180ca0d88 + uVar6;
  DAT_180ca0d80 = lVar3;
  return;
}



/* ===== 1800b4a60 FUN_1800b4a60 ===== */

void FUN_1800b4a60(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_3[1] - *param_3 != 0) {
    lVar2 = param_3[1] - *param_3 >> 3;
    if (0x666666666666666 < (ulonglong)(lVar2 * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_18000fb10();
    }
    lVar2 = lVar2 * 8;
    lVar3 = FUN_18000fb70(lVar2);
    *param_2 = lVar3;
    param_2[1] = lVar3;
    param_2[2] = lVar2 + lVar3;
    lVar1 = param_3[1];
    for (lVar2 = *param_3; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
      FUN_180024b50(lVar3,lVar2);
      *(undefined1 *)(lVar3 + 0x20) = *(undefined1 *)(lVar2 + 0x20);
      *(undefined1 *)(lVar3 + 0x21) = *(undefined1 *)(lVar2 + 0x21);
      *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar2 + 0x24);
      lVar3 = lVar3 + 0x28;
    }
    param_2[1] = lVar3;
  }
  *(int *)(param_2 + 3) = (int)param_3[3];
  return;
}



/* ===== 1800b4b60 FUN_1800b4b60 ===== */

undefined8 * FUN_1800b4b60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)((longlong)param_3 + 0x21) = *(undefined1 *)((longlong)param_1 + 0x21);
    *(undefined4 *)((longlong)param_3 + 0x24) = *(undefined4 *)((longlong)param_1 + 0x24);
    param_3 = param_3 + 5;
  }
  return param_3;
}



/* ===== 1800b4bd0 FUN_1800b4bd0 ===== */

undefined4 * FUN_1800b4bd0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_18002ba60(param_1 + 2,param_2 + 2);
  FUN_18002ba60(param_1 + 10,param_2 + 10);
  FUN_18002ba60(param_1 + 0x12,param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
  FUN_18002ba60(param_1 + 0x2c,param_2 + 0x2c);
  FUN_18002ba60(param_1 + 0x34,param_2 + 0x34);
  FUN_18002ba60(param_1 + 0x3c,param_2 + 0x3c);
  FUN_180067380(param_1 + 0x44,param_2 + 0x44);
  FUN_18002ba60(param_1 + 0x4a,param_2 + 0x4a);
  return param_1;
}



/* ===== 1800b4d10 FUN_1800b4d10 ===== */

void FUN_1800b4d10(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x148) {
    FUN_1800b0980(lVar2);
  }
  return;
}



/* ===== 1800b4d50 FUN_1800b4d50 ===== */

void FUN_1800b4d50(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar4 = *(longlong *)(param_1 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 0x40) {
    FUN_18000f890(lVar4 + 0x18);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  uVar3 = *(longlong *)(param_1 + 0x10) << 6;
  if (0xfff < uVar3) {
    if ((lVar4 - *(longlong *)(lVar4 + -8)) - 8U < 0x20) {
      thunk_FUN_1803d64e0(*(longlong *)(lVar4 + -8),uVar3 | 0x27);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    lVar4 = (*pcVar2)(5);
  }
  thunk_FUN_1803d64e0(lVar4);
  return;
}



/* ===== 1800b4df0 FUN_1800b4df0 ===== */

void FUN_1800b4df0(longlong param_1)

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
    FUN_1800b38f0(lVar4);
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



/* ===== 1800b4e80 FUN_1800b4e80 ===== */

void FUN_1800b4e80(longlong *param_1)

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
    FUN_1800b38f0(lVar3);
  }
  lVar3 = *param_1;
  if (0xfff < (param_1[2] - lVar3 & 0xffffffffffffffe0U)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800b4ef1;
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar2 = lVar3;
  puVar5 = puVar4;
LAB_1800b4ef1:
  *(undefined8 *)(puVar5 + -8) = 0x1800b4ef6;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800b4f10 FUN_1800b4f10 ===== */

void FUN_1800b4f10(longlong param_1)

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
    FUN_18000f890(lVar6);
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



/* ===== 1800b4fc0 FUN_1800b4fc0 ===== */

undefined4 * FUN_1800b4fc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
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
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = uVar1;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x32) = 0xf;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x36) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3a) = uVar1;
  *(undefined1 *)(param_2 + 0x34) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x3a) = 0xf;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x3e);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x3e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x42);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x42) = uVar1;
  *(undefined1 *)(param_2 + 0x3c) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x42) = 0xf;
  uVar1 = *(undefined8 *)(param_2 + 0x44);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x46);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x46) = 0;
  *(undefined8 *)(param_2 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  *(undefined8 *)(param_1 + 0x46) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x4a) = *(undefined8 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x4c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x4e) = *(undefined8 *)(param_2 + 0x4e);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined1 *)(param_2 + 0x4a) = 0;
  *(undefined8 *)(param_2 + 0x4e) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0xf;
  return param_1;
}



/* ===== 1800b5270 FUN_1800b5270 ===== */

void FUN_1800b5270(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    FUN_18000f890(lVar2);
  }
  return;
}



/* ===== 1800b52c0 FUN_1800b52c0 ===== */

uint FUN_1800b52c0(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  
  if (0.0 <= param_1) {
    fVar5 = DAT_1808ac34c;
    if (param_1 <= DAT_1808ac34c) {
      fVar5 = param_1;
    }
    uVar3 = (uint)(fVar5 * DAT_1808acb94 + DAT_1808ac1f4);
  }
  else {
    uVar3 = 0;
  }
  if (0.0 <= param_2) {
    fVar5 = DAT_1808ac34c;
    if (param_2 <= DAT_1808ac34c) {
      fVar5 = param_2;
    }
    iVar1 = (int)(fVar5 * DAT_1808acb94 + DAT_1808ac1f4);
  }
  else {
    iVar1 = 0;
  }
  if (0.0 <= param_3) {
    fVar5 = DAT_1808ac34c;
    if (param_3 <= DAT_1808ac34c) {
      fVar5 = param_3;
    }
    iVar4 = (int)(fVar5 * DAT_1808acb94 + DAT_1808ac1f4);
  }
  else {
    iVar4 = 0;
  }
  if (0.0 <= param_4) {
    fVar5 = DAT_1808ac34c;
    if (param_4 <= DAT_1808ac34c) {
      fVar5 = param_4;
    }
    iVar2 = (int)(fVar5 * DAT_1808acb94 + DAT_1808ac1f4);
  }
  else {
    iVar2 = 0;
  }
  return iVar2 << 0x18 | iVar4 << 0x10 | iVar1 << 8 | uVar3;
}



/* ===== 1800b5390 FUN_1800b5390 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800b5390(char *param_1,ulonglong param_2,float param_3,int param_4)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_48 [16];
  
  lVar2 = DAT_180ca0a50;
  fVar1 = DAT_1808abf80;
  fVar7 = (float)param_2;
  if ((*param_1 == '\0') || (fVar5 = *(float *)(param_1 + 8), fVar5 != fVar7)) {
    *(float *)(param_1 + 8) = fVar7;
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    fVar1 = *(float *)(param_1 + 4);
    fVar5 = fVar7;
    if (fVar1 <= fVar7) {
      fVar5 = fVar1;
    }
    fVar6 = fVar7;
    if (fVar7 <= fVar1) {
      fVar6 = fVar1;
    }
    *(float *)(param_1 + 0x10) = fVar5;
    *(float *)(param_1 + 0x14) = fVar6;
    if (*param_1 == '\0') {
      *(float *)(param_1 + 4) = fVar7;
      *param_1 = '\x01';
      return param_2;
    }
    return (ulonglong)(uint)fVar1;
  }
  if (*(int *)(param_1 + 0x18) == *(int *)(DAT_180ca0a50 + 4)) {
    return (ulonglong)(uint)*(float *)(param_1 + 4);
  }
  *(int *)(param_1 + 0x18) = *(int *)(DAT_180ca0a50 + 4);
  if ((float)((uint)(*(float *)(param_1 + 4) - fVar5) & _DAT_1808ade90) <= fVar1) {
    *(float *)(param_1 + 4) = fVar5;
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    return (ulonglong)(uint)fVar5;
  }
  local_48[1] = *(float *)(lVar2 + 0x40) + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0xc) = local_48[1];
  fVar7 = DAT_1808ac34c;
  fVar1 = DAT_1808ac1f4;
  if (param_3 <= local_48[1]) {
    *(float *)(param_1 + 4) = fVar5;
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    return (ulonglong)(uint)fVar5;
  }
  local_48[1] = local_48[1] / param_3;
  local_48[2] = 1.0;
  local_48[0] = 0.0;
  pfVar4 = local_48;
  if (0.0 <= local_48[1]) {
    pfVar4 = local_48 + 1;
  }
  pfVar3 = local_48 + 2;
  if (local_48[1] <= DAT_1808ac34c) {
    pfVar3 = pfVar4;
  }
  fVar6 = *pfVar3;
  if (param_4 == 1) {
    fVar7 = fVar6;
  }
  else {
    if (param_4 == 2) {
      fVar7 = DAT_1808ac34c - (DAT_1808ac34c - fVar6) * (DAT_1808ac34c - fVar6);
      goto LAB_1800b5571;
    }
    if (param_4 == 3) {
      if (DAT_1808ac1f4 <= fVar6) {
        fVar6 = (float)FUN_18051afb0(DAT_1808ac540 - (fVar6 + fVar6));
        fVar7 = fVar7 - fVar6 * fVar1;
        goto LAB_1800b5571;
      }
      fVar7 = fVar6 + fVar6;
    }
    else if (param_4 == 4) {
      fVar7 = fVar6 * fVar6;
    }
    else {
      if (param_4 != 6) {
        fVar6 = DAT_1808ac34c - fVar6;
        fVar7 = DAT_1808ac34c - fVar6 * fVar6 * fVar6;
        goto LAB_1800b5571;
      }
      if (DAT_1808ac1f4 <= fVar6) {
        fVar6 = (float)FUN_18051afb0(DAT_1808ac540 - (fVar6 + fVar6),DAT_1808ac658);
        fVar7 = fVar7 - fVar6 * fVar1;
        goto LAB_1800b5571;
      }
      fVar7 = fVar6 * DAT_1808ac710 * fVar6;
    }
  }
  fVar7 = fVar7 * fVar6;
LAB_1800b5571:
  fVar6 = *(float *)(param_1 + 0x10);
  fVar8 = *(float *)(param_1 + 0x14);
  if (fVar5 <= (fVar6 + fVar8) * fVar1) {
    fVar8 = fVar8 - (fVar8 - fVar5) * fVar7;
    *(float *)(param_1 + 4) = fVar8;
    return (ulonglong)(uint)fVar8;
  }
  fVar6 = (fVar5 - fVar6) * fVar7 + fVar6;
  *(float *)(param_1 + 4) = fVar6;
  return (ulonglong)(uint)fVar6;
}



/* ===== 1800b5630 FUN_1800b5630 ===== */

longlong FUN_1800b5630(void)

{
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  local_res8.QuadPart = 0;
  local_res10[0].QuadPart = 0;
  QueryPerformanceFrequency(&local_res8);
  QueryPerformanceCounter(local_res10);
  if (local_res8.QuadPart < 1) {
    return 0;
  }
  return (local_res10[0].QuadPart / local_res8.QuadPart) * 1000000000 +
         ((local_res10[0].QuadPart % local_res8.QuadPart) * 1000000000) / local_res8.QuadPart;
}



/* ===== 1800b56a0 FUN_1800b56a0 ===== */

longlong * FUN_1800b56a0(longlong *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1804ecaa0();
  *(undefined2 *)((longlong)piVar1 + 0x51) = 0;
  *(undefined1 *)((longlong)piVar1 + 0x53) = 0;
  *(undefined2 *)((longlong)piVar1 + 0x6d) = 0;
  *(undefined1 *)((longlong)piVar1 + 0x6f) = 0;
  piVar1[0x23] = 0;
  *(undefined2 *)((longlong)piVar1 + 0x99) = 0;
  *(undefined4 *)((longlong)piVar1 + 0x9b) = 0;
  *(undefined1 *)((longlong)piVar1 + 0x9f) = 0;
  *(undefined2 *)((longlong)piVar1 + 0xb9) = 0;
  *(undefined1 *)((longlong)piVar1 + 0xbb) = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  piVar1[8] = 0xf;
  piVar1[9] = 0;
  *(undefined1 *)(piVar1 + 2) = 0;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  piVar1[0xc] = 0;
  piVar1[0xd] = 0;
  piVar1[0xe] = 0;
  piVar1[0xf] = 0;
  piVar1[0x10] = 0xf;
  piVar1[0x11] = 0;
  *(undefined1 *)(piVar1 + 10) = 0;
  piVar1[0x12] = 0;
  piVar1[0x13] = 0;
  *(undefined1 *)(piVar1 + 0x14) = 0;
  piVar1[0x15] = 0;
  piVar1[0x16] = 0;
  piVar1[0x17] = 0;
  piVar1[0x18] = 0;
  piVar1[0x19] = 0;
  piVar1[0x1a] = -1;
  *(undefined1 *)(piVar1 + 0x1b) = 0;
  piVar1[0x1c] = 0;
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  piVar1[0x1f] = 0;
  piVar1[0x20] = 0;
  piVar1[0x21] = -1;
  piVar1[0x22] = -0x40800000;
  piVar1[0x24] = 0;
  piVar1[0x25] = 0;
  *(undefined1 *)(piVar1 + 0x26) = 0;
  piVar1[0x28] = 0;
  piVar1[0x29] = 0;
  piVar1[0x2a] = 0;
  piVar1[0x2b] = 0;
  piVar1[0x2c] = 0;
  piVar1[0x2d] = -1;
  *(undefined1 *)(piVar1 + 0x2e) = 0;
  piVar1[0x2f] = 0;
  piVar1[0x30] = 0;
  piVar1[0x31] = 0;
  piVar1[0x32] = 0;
  piVar1[0x33] = 0;
  piVar1[0x34] = -1;
  piVar1[0x35] = 0;
  piVar1[0x36] = 0;
  piVar1[0x37] = 0;
  *param_1 = (longlong)piVar1;
  *piVar1 = param_2;
  *(undefined1 *)(*param_1 + 0x50) = 1;
  *(undefined4 *)(*param_1 + 0x54) = 0;
  *(undefined1 *)(*param_1 + 0x6c) = 0;
  if (param_2 == 0) {
    *(undefined1 *)(*param_1 + 0x9c) = 1;
    *(undefined4 *)(*param_1 + 0xa0) = 0x3f800000;
    *(undefined4 *)(*param_1 + 0xa4) = 0x3f800000;
    *(undefined4 *)(*param_1 + 0xac) = 0;
    *(undefined4 *)(*param_1 + 0xb0) = 0x3f800000;
    *(undefined1 *)(*param_1 + 0xb8) = 0;
    *(undefined4 *)(*param_1 + 0xbc) = 0;
    *(undefined4 *)(*param_1 + 0xc0) = 0;
    *(undefined4 *)(*param_1 + 200) = 0;
    *(undefined4 *)(*param_1 + 0xcc) = 0x3f800000;
    *(undefined4 *)(*param_1 + 0xd4) = 0;
  }
  return param_1;
}



/* ===== 1800b5860 FUN_1800b5860 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800b5860(undefined8 *param_1,int *param_2)

{
  int iVar1;
  bool *pbVar2;
  size_t sVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_60;
  bool local_58 [10];
  bool local_4e [6];
  char local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_98;
  if (*param_2 == 0) {
    local_60 = param_1;
    iVar1 = FUN_1804e4d70(&DAT_1809ee3c0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809ee40c == 0x7fffffff) {
      DAT_1809ee40c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    local_58[1] = DAT_1809ee188 - 2U < 3;
    local_58[0] = DAT_1809ee160 - 2U < 3;
    local_58[2] = DAT_1809ee1b0 - 2U < 3;
    local_58[3] = DAT_1809ee1d8 - 2U < 3;
    local_58[4] = DAT_1809ee228 - 2U < 3 && DAT_1809ee200 - 2U < 3;
    local_58[5] = DAT_1809ee278 - 2U < 3 && DAT_1809ee250 - 2U < 3;
    local_58[6] = DAT_1809ee2a0 - 2U < 3;
    local_58[7] = DAT_1809ee2c8 - 2U < 3;
    pbVar2 = local_58;
    iVar1 = 0;
    local_58[9] = DAT_1809ee390 - 2U < 3 && (DAT_1809ee368 - 2U < 3 && DAT_1809ee340 - 2U < 3);
    local_58[8] = DAT_1809ee318 - 2U < 3 && DAT_1809ee2f0 - 2U < 3;
    do {
      iVar1 = (iVar1 + 1) - (uint)(*pbVar2 == false);
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 != local_4e);
    FUN_1804e4e90(&DAT_1809ee3c0);
    local_78 = 10;
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
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_48[0x18] = '\0';
    local_48[0x19] = '\0';
    local_48[0x1a] = '\0';
    local_48[0x1b] = '\0';
    local_48[0x1c] = '\0';
    local_48[0x1d] = '\0';
    local_48[0x1e] = '\0';
    local_48[0x1f] = '\0';
    local_48[0x20] = '\0';
    local_48[0x21] = '\0';
    local_48[0x22] = '\0';
    local_48[0x23] = '\0';
    local_48[0x24] = '\0';
    local_48[0x25] = '\0';
    local_48[0x26] = '\0';
    local_48[0x27] = '\0';
    local_48[0x28] = '\0';
    local_48[0x29] = '\0';
    local_48[0x2a] = '\0';
    local_48[0x2b] = '\0';
    local_48[0x2c] = '\0';
    local_48[0x2d] = '\0';
    local_48[0x2e] = '\0';
    local_48[0x2f] = '\0';
    snprintf(local_48,0x30,"%d of %d",iVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar3 = strlen(local_48);
    FUN_1800133a0(param_1,local_48,sVar3);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  return param_1;
}



/* ===== 1800b5af0 FUN_1800b5af0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800b5af0(undefined8 param_1,longlong param_2,float *param_3,float *param_4,float param_5,
                  undefined4 param_6,char param_7)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  LARGE_INTEGER *pLVar6;
  int iVar7;
  float *pfVar8;
  LARGE_INTEGER *pLVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  LARGE_INTEGER local_148;
  undefined8 local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  LARGE_INTEGER local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110 [6];
  undefined4 local_f8;
  float local_f4;
  
  fVar18 = DAT_1808ac34c;
  fVar12 = DAT_1808ac1f4;
  fVar17 = (float)(_DAT_180960f74 >> 8 & 0xff) * DAT_1808abfe4 * _DAT_1808ac218 +
           (float)(_DAT_180960f74 & 0xff) * DAT_1808abfe4 * _DAT_1808ac148 +
           (float)(_DAT_180960f74 >> 0x10 & 0xff) * DAT_1808abfe4 * _DAT_1808ac0c8;
  if (0.0 <= DAT_18091a198) {
    fVar16 = DAT_1808ac34c;
    if (DAT_18091a198 <= DAT_1808ac34c) {
      fVar16 = DAT_18091a198;
    }
    iVar10 = (int)(fVar16 * DAT_1808acb94 + DAT_1808ac1f4);
  }
  else {
    iVar10 = 0;
  }
  if (0.0 <= DAT_18091a19c) {
    fVar16 = DAT_1808ac34c;
    if (DAT_18091a19c <= DAT_1808ac34c) {
      fVar16 = DAT_18091a19c;
    }
    iVar7 = (int)(fVar16 * DAT_1808acb94 + DAT_1808ac1f4);
  }
  else {
    iVar7 = 0;
  }
  if (0.0 <= DAT_18091a1a0) {
    fVar16 = DAT_1808ac34c;
    if (DAT_18091a1a0 <= DAT_1808ac34c) {
      fVar16 = DAT_18091a1a0;
    }
    iVar4 = (int)(fVar16 * DAT_1808acb94 + DAT_1808ac1f4);
  }
  else {
    iVar4 = 0;
  }
  local_120 = (float)iVar7 * DAT_1808abfe4;
  local_f4 = (float)iVar4 * DAT_1808abfe4;
  local_118 = (float)iVar10 * DAT_1808abfe4;
  if (local_f4 <= local_120) {
    iVar10 = iVar7;
  }
  else {
    iVar10 = iVar4;
    iVar4 = iVar7;
  }
  fVar16 = (float)iVar10 * DAT_1808abfe4;
  if (fVar16 <= local_118) {
    fVar19 = local_118;
  }
  else {
    fVar19 = fVar16;
    fVar16 = local_118;
  }
  if ((float)iVar4 * DAT_1808abfe4 <= fVar16) {
    fVar16 = (float)iVar4 * DAT_1808abfe4;
  }
  fVar16 = (fVar19 - fVar16) / (fVar19 + DAT_1808abf50);
  if (DAT_1808ac1f4 <= fVar17) {
    fVar17 = (fVar17 - DAT_1808ac1f4) * _DAT_1808ac084;
    fVar14 = DAT_1808ac064;
    fVar13 = DAT_1808ac0c4;
    fVar15 = DAT_1808ac2d0;
  }
  else {
    fVar17 = fVar17 * _DAT_1808ac0e4;
    fVar14 = DAT_1808ac198;
    fVar13 = DAT_1808ac114;
    fVar15 = DAT_1808ac0b4;
  }
  local_148.s.HighPart = (LONG)*(float *)(param_2 + 0xa0);
  local_148.s.LowPart = (DWORD)(fVar17 + fVar17 + fVar15);
  fVar14 = fVar13 * fVar16 + fVar14;
  local_134 = (float)local_148.s.LowPart;
  local_138 = (float)local_148.s.LowPart;
  if (fVar14 != 0.0) {
    FUN_1803d80a0(iVar7,fVar14,param_3,&local_148,&local_134,&local_138);
  }
  local_110[1] = fVar16 * DAT_1808ac2cc;
  local_110[2] = 1.0;
  local_110[0] = 0.0;
  local_148._0_4_ = fVar19;
  local_12c = fVar19;
  pfVar8 = local_110;
  if (0.0 <= local_110[1]) {
    pfVar8 = local_110 + 1;
  }
  local_130 = fVar19;
  pfVar5 = local_110 + 2;
  if (local_110[1] <= fVar18) {
    pfVar5 = pfVar8;
  }
  if (*pfVar5 != 0.0) {
    FUN_1803d80a0();
  }
  local_140 = 0;
  local_128.QuadPart = 0;
  QueryPerformanceFrequency((LARGE_INTEGER *)&local_140);
  QueryPerformanceCounter(&local_128);
  if (local_140 < 1) {
    lVar11 = 0;
  }
  else {
    lVar11 = ((local_128.QuadPart % local_140) * 1000000000) / local_140 +
             (local_128.QuadPart / local_140) * 1000000000;
  }
  lVar1 = *(longlong *)(param_2 + 0x90);
  if ((lVar1 != 0) && (1000000000 < lVar11 - lVar1)) {
    FUN_1800b5390(param_2 + 0x9c,lVar1,local_140,6);
  }
  lVar1 = DAT_180ca0a50;
  fVar16 = DAT_1808ac428;
  fVar17 = DAT_1808abf80;
  if (lVar11 - *(longlong *)(param_2 + 0xd8) < 101000000) {
    if ((*(char *)(param_2 + 0xb8) == '\0') || (*(float *)(param_2 + 0xc0) != fVar18)) {
      *(undefined8 *)(param_2 + 0xc0) = 0x3f800000;
      fVar12 = *(float *)(param_2 + 0xbc);
      fVar17 = fVar18;
      if (fVar12 <= fVar18) {
        fVar17 = fVar12;
      }
      fVar16 = fVar18;
      if (fVar18 <= fVar12) {
        fVar16 = fVar12;
      }
      *(float *)(param_2 + 200) = fVar17;
      *(float *)(param_2 + 0xcc) = fVar16;
      if (*(char *)(param_2 + 0xb8) != '\0') goto LAB_1800b60f1;
      *(undefined1 *)(param_2 + 0xb8) = 1;
    }
    else {
      if (*(int *)(param_2 + 0xd0) == *(int *)(DAT_180ca0a50 + 4)) goto LAB_1800b60f1;
      *(int *)(param_2 + 0xd0) = *(int *)(DAT_180ca0a50 + 4);
      if (fVar17 < (float)((uint)(*(float *)(param_2 + 0xbc) - fVar18) & _DAT_1808ade90)) {
        fVar17 = *(float *)(param_2 + 0xc4) + *(float *)(lVar1 + 0x40);
        *(float *)(param_2 + 0xc4) = fVar17;
        if (fVar17 < *(float *)(param_2 + 0xd4)) {
          fVar16 = *(float *)(param_2 + 200);
          fVar17 = fVar17 / *(float *)(param_2 + 0xd4);
          local_140._0_4_ = 0x3f800000;
          local_148.s.LowPart = 0;
          fVar19 = *(float *)(param_2 + 0xcc);
          local_128._0_4_ = fVar17;
          pLVar9 = &local_148;
          if (0.0 <= fVar17) {
            pLVar9 = &local_128;
          }
          pLVar6 = (LARGE_INTEGER *)&local_140;
          if (fVar17 <= fVar18) {
            pLVar6 = pLVar9;
          }
          if (fVar18 <= (fVar19 + fVar16) * fVar12) {
            *(float *)(param_2 + 0xbc) = fVar19 - (fVar19 - fVar18) * *(float *)&pLVar6->QuadPart;
          }
          else {
            *(float *)(param_2 + 0xbc) = (fVar18 - fVar16) * *(float *)&pLVar6->QuadPart + fVar16;
          }
          goto LAB_1800b60f1;
        }
      }
      *(undefined4 *)(param_2 + 0xc4) = 0;
    }
    *(undefined4 *)(param_2 + 0xbc) = 0x3f800000;
  }
  else {
    fVar12 = *(float *)(param_2 + 0xbc);
    *(float *)(param_2 + 0xc0) = fVar12;
    *(float *)(param_2 + 200) = fVar12;
    *(float *)(param_2 + 0xcc) = fVar12;
    *(undefined4 *)(param_2 + 0xc4) = 0;
    *(undefined1 *)(param_2 + 0xb8) = 1;
    *(float *)(param_2 + 0xd4) = fVar16 - fVar12 * fVar16;
  }
LAB_1800b60f1:
  if (*(float *)(param_2 + 0xbc) == fVar18) {
    *(undefined8 *)(param_2 + 0xc0) = 0;
    *(undefined4 *)(param_2 + 200) = 0;
    *(undefined4 *)(param_2 + 0xcc) = 0x3f800000;
    *(undefined1 *)(param_2 + 0xb8) = 1;
    *(undefined4 *)(param_2 + 0xbc) = 0;
    *(undefined4 *)(param_2 + 0xd4) = 0x3fc00000;
  }
  *(longlong *)(param_2 + 0xd8) = lVar11;
  param_5 = param_5 * DAT_1808ac710;
  fVar12 = (float)FUN_180517200();
  fVar18 = fVar12 * param_5 * (float)local_148.s.HighPart;
  local_140._0_4_ = fVar18;
  fVar12 = (float)FUN_180517790();
  fVar12 = fVar12 * param_5 * (float)local_148.s.HighPart;
  local_140._4_4_ = fVar12;
  if ((DAT_1811079e0 == 0) || (cVar3 = FUN_180369310(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (param_7 != '\0') {
    if (((bVar2) && (DAT_180cd0fdd != '\0')) && (DAT_181107cd8 != 0)) {
      local_f8 = 0x3f800000;
      local_110[3] = 0.0;
      local_110[4] = (float)param_6;
      FUN_180369c70(param_1,param_3,param_4);
    }
    FUN_1800b52c0();
    if (bVar2) {
      FUN_180369e90(param_1,param_3,param_4);
    }
    else {
      local_118 = fVar18 + *param_4;
      local_120 = fVar18 + *param_3;
      local_114 = fVar12 + param_4[1];
      local_11c = fVar12 + param_3[1];
      FUN_1800be3c0(param_1,&local_120,&local_118);
    }
    FUN_1800b52c0();
    FUN_1800b52c0();
    if (bVar2) {
      FUN_18036a0b0();
    }
    else {
      FUN_1803fe590(param_1,param_3,param_4);
    }
  }
  return;
}



/* ===== 1800b6430 FUN_1800b6430 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800b6430(undefined8 param_1,int param_2,longlong param_3,undefined8 param_4,float param_5,
                  float param_6)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  size_t sVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  char *_Str;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  float fVar15;
  float fVar16;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined4 *local_100;
  undefined4 local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_a8 [17];
  
  local_a8[4] = DAT_180919500 ^ (ulonglong)auStack_128;
  if (param_2 == 1) {
    _Str = "toast_gear";
    pcVar9 = 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M495 167C499 176 496 185 489 192L446 231C447 239 447 248 447 256C447 265 447 274 446 282L489 321C496 327 499 337 495 346C491 358 486 369 480 380L475 388C468 399 461 410 453 419C447 427 437 429 428 426L373 409C359 419 344 427 329 434L316 490C314 499 307 506 298 508C284 510 270 511 255 511C241 511 227 510 213 508C204 506 197 499 195 490L182 434C166 427 152 419 138 409L83 426C74 429 64 427 58 420C50 410 43 399 36 388L31 380C25 369 20 358 15 346C12 337 15 328 22 321L65 282C64 274 63 265 63 256C63 248 64 239 65 231L22 192C15 185 12 176 15 167C20 155 25 144 31 133L36 125C43 114 50 103 58 93C64 86 74 84 83 87L138 104C152 94 167 85 182 79L195 22C197 13 204 6 213 4C227 2 241 0 256 0C270 0 284 2 298 4C307 5 314 13 316 22L329 79C345 85 359 94 373 104L428 87C437 84 447 86 453 93C461 103 468 114 475 125L480 133C486 144 491 155 496 167L495 167ZM495 167ZM256 336C284 336 310 321 325 296C339 272 339 241 325 216C310 192 284 176 256 176C227 176 201 192 186 216C172 241 172 272 186 296C201 321 227 336 256 336Z\"/></svg>"
    ;
  }
  else {
    fVar12 = DAT_1808acc20;
    if (param_2 == 2) {
      _Str = "toast_code";
      pcVar9 = 
      "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M392 2C375 -3 358 7 353 24L225 471C220 488 230 505 247 510C264 515 281 505 286 488L414 41C419 24 409 7 392 2ZM392 2ZM473 122C460 134 460 155 473 167L562 256L473 346C460 358 460 379 473 391C485 404 506 404 518 391L630 279C643 267 643 246 630 234L518 122C506 109 485 109 473 122L473 122ZM473 122ZM166 122C154 109 133 109 121 122L9 234C-3 246 -3 267 9 279L121 391C133 404 154 404 166 391C179 379 179 358 166 346L77 256L166 167C179 155 179 134 166 122L166 122ZM166 122Z\"/></svg>"
      ;
      goto LAB_1800b64f4;
    }
    if (param_2 != 3) {
      if (param_2 == 4) {
        _Str = "toast_language";
        pcVar9 = 
        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M0 128C0 93 28 64 64 64L256 64L304 64L320 64L576 64C611 64 640 93 640 128L640 384C640 420 611 448 576 448L320 448L304 448L256 448L64 448C28 448 0 420 0 384L0 128ZM320 128L320 384L576 384L576 128L320 128ZM178 176C175 169 167 164 160 164C152 164 144 169 141 176L77 320C73 330 77 342 87 347C98 351 109 347 114 337L123 316L196 316L205 337C210 347 222 351 232 347C242 342 246 330 242 320L178 176ZM178 176ZM160 234L179 276L141 276L160 234ZM448 164C459 164 468 173 468 184L468 188L512 188L528 188C539 188 548 197 548 208C548 219 539 228 528 228L526 228L524 233C515 257 502 280 484 298C485 299 486 299 487 300L506 311C515 317 518 329 513 339C507 348 495 351 485 346L467 334C462 332 458 329 453 326C443 333 432 340 419 345L416 347C406 351 394 347 389 337C385 326 390 315 400 310L403 309C410 306 416 302 422 299L410 287C402 279 402 266 410 258C417 250 430 250 438 258L452 273L453 273C465 260 475 245 483 228L448 228L376 228C365 228 356 219 356 208C356 197 365 188 376 188L428 188L428 184C428 173 437 164 448 164L448 164ZM448 164Z\"/></svg>"
        ;
      }
      else {
        pcVar9 = (char *)0x0;
        _Str = (char *)0x0;
        fVar12 = 0.0;
      }
      goto LAB_1800b64f4;
    }
    _Str = "toast_palette";
    pcVar9 = 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M512 256C512 257 512 258 512 259C511 296 478 320 441 320L344 320C317 320 296 342 296 368C296 372 296 375 297 378C299 389 303 398 307 408C313 422 319 436 319 449C319 481 298 510 266 511C263 511 259 512 255 512C114 512 0 398 0 256C0 115 114 0 256 0C397 0 512 115 512 256ZM128 288C128 271 113 256 96 256C78 256 64 271 64 288C64 306 78 320 96 320C113 320 128 306 128 288ZM128 192C145 192 160 178 160 160C160 143 145 128 128 128C110 128 96 143 96 160C96 178 110 192 128 192ZM288 96C288 79 273 64 256 64C238 64 224 79 224 96C224 114 238 128 256 128C273 128 288 114 288 96ZM384 192C401 192 416 178 416 160C416 143 401 128 384 128C366 128 352 143 352 160C352 178 366 192 384 192Z\"/></svg>"
    ;
  }
  fVar12 = DAT_1808acc00;
LAB_1800b64f4:
  if (pcVar9 != (char *)0x0) {
    param_5 = param_5 * DAT_1808ac950;
    fVar16 = fVar12 * DAT_1808abfc4 * param_5;
    auVar13._8_4_ = in_XMM3_Dc;
    auVar13._0_8_ = param_4;
    auVar13._12_4_ = in_XMM3_Dd;
    auVar14._4_12_ = auVar13._4_12_;
    auVar14._0_4_ = ((float)param_4 - param_5) * DAT_1808ac1f4 + *(float *)(param_3 + 4);
    fVar10 = (float)FUN_18053fc00(auVar14._0_8_);
    FUN_18053fc00(fVar16 + DAT_1808ac2f0);
    fVar11 = (float)FUN_18053fc00();
    fVar12 = DAT_1808ac34c;
    if (DAT_180cd0fd8 != '\0') {
      fVar12 = DAT_1809f7440;
    }
    fVar15 = fVar12 * DAT_1808ac3d4;
    if (fVar12 * DAT_1808ac3d4 <= DAT_1808ac540) {
      fVar15 = DAT_1808ac540;
    }
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    sVar5 = strlen(_Str);
    FUN_1800133a0(local_a8,_Str,sVar5);
    plVar6 = (longlong *)
             FUN_18039ed80(&local_c8,local_a8,pcVar9,(int)(fVar15 * param_5 + DAT_1808ac1f4));
    lVar2 = *plVar6;
    lVar4 = plVar6[1];
    iVar1 = *(int *)((longlong)plVar6 + 0xc);
    if (0xf < (ulonglong)local_a8[3]) {
      uVar8 = local_a8[3] + 1;
      lVar7 = local_a8[0];
      if (0xfff < uVar8) {
        lVar7 = *(longlong *)(local_a8[0] + -8);
        if (0x1f < (local_a8[0] - lVar7) - 8U) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = local_a8[3] + 0x28;
      }
      thunk_FUN_1803d64e0(lVar7,uVar8);
    }
    if (((lVar2 != 0) && (0 < (int)lVar4)) && (0 < iVar1)) {
      fVar15 = param_5 * _DAT_1808ac2c0;
      local_d0 = fVar11;
      fVar12 = (float)FUN_18053ef70();
      local_cc = (fVar12 + fVar10) - fVar15;
      local_e8 = 0x3f800000;
      local_e4 = 0x3f800000;
      local_e0 = 0;
      local_d8 = fVar11 + fVar16;
      local_d4 = local_cc + param_5;
      local_c8 = 0;
      local_c0 = lVar2;
      local_f8 = FUN_1800b52c0((float)(DAT_180960ed4 & 0xff) * DAT_1808abfe4,
                               (float)(DAT_180960ed4 >> 8 & 0xff) * DAT_1808abfe4,
                               (float)(DAT_180960ed4 >> 0x10 & 0xff) * DAT_1808abfe4,
                               (float)(DAT_180960ed4 >> 0x18) * DAT_1808abfe4 * param_6);
      local_100 = &local_e8;
      local_108 = &local_e0;
      FUN_1803fea90(param_1,&local_c8,&local_d0,&local_d8);
    }
  }
  return;
}



/* ===== 1800b67a0 FUN_1800b67a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1800b67a0(longlong param_1,int *param_2,float *param_3,float param_4,float param_5)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  size_t sVar11;
  undefined4 *puVar12;
  longlong lVar13;
  char ****ppppcVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  char *_Str;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_228 [32];
  float *local_208;
  char ****local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  ulonglong local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1c8;
  float local_1c0;
  float fStack_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  undefined8 local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  char ***local_188;
  longlong lStack_180;
  float local_168;
  float local_164;
  char ****local_160;
  undefined8 uStack_158;
  longlong local_150;
  ulonglong local_148;
  char ****local_140;
  undefined8 local_138;
  undefined8 local_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulonglong local_108;
  char ****local_100 [2];
  longlong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  
  fVar21 = DAT_1808abfe4;
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_228;
  local_1ac = param_4 * _DAT_1808acbbc;
  fVar18 = (float)param_2[0x22];
  fVar19 = param_4 * DAT_1808ac8b0;
  fVar24 = fVar19 + fVar19;
  if (0.0 <= fVar18) {
    fVar24 = fVar24 + fVar18;
  }
  local_1b4 = param_3[1];
  local_1b8 = *param_3;
  local_1a0 = local_1b8 + local_1ac;
  local_19c = local_1b4 + fVar24;
  if (*param_2 == 0) {
    local_1f8 = (char ****)CONCAT71(local_1f8._1_7_,0.0 <= fVar18);
    local_200 = (char ****)CONCAT44(local_200._4_4_,param_5);
    local_208 = (float *)CONCAT44(local_208._4_4_,param_4);
    FUN_1800b5af0(local_1a0,local_19c,&local_1b8,&local_1a0);
  }
  else if (0.0 <= fVar18) {
    uVar16 = (ulonglong)DAT_180960f58;
    uVar7 = FUN_1800b52c0((float)(_DAT_180960f74 & 0xff) * DAT_1808abfe4,
                          (float)(_DAT_180960f74 >> 8 & 0xff) * DAT_1808abfe4,
                          (float)(_DAT_180960f74 >> 0x10 & 0xff) * DAT_1808abfe4,
                          (float)(_DAT_180960f74 >> 0x18) * DAT_1808abfe4 * param_5);
    uVar6 = FUN_1800b52c0((float)(uVar16 & 0xff) * fVar21,(float)(uVar16 >> 8 & 0xff) * fVar21,
                          (float)(uVar16 >> 0x10 & 0xff) * fVar21,
                          (float)(uVar16 >> 0x18 & 0xff) * fVar21 * param_5);
    local_1e8 = CONCAT44(local_1e8._4_4_,DAT_1808ac864);
    local_1f0 = CONCAT44(local_1f0._4_4_,uVar7);
    local_1f8 = (char ****)CONCAT44(local_1f8._4_4_,uVar6);
    local_200 = (char ****)CONCAT44(local_200._4_4_,param_5);
    local_208 = (float *)CONCAT44(local_208._4_4_,param_4);
    FUN_1800be550(param_1,&local_1b8,&local_1a0,param_4 * DAT_1808ac980);
  }
  fVar20 = DAT_1808ac1f4;
  if (DAT_181107a08 == 0) {
    local_1c8 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  else {
    local_1c8 = DAT_181107a08;
  }
  if ((DAT_1811079c0 == 0) && (DAT_181107a08 == 0)) {
    lVar17 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  else {
    lVar17 = DAT_181107a08;
    if (DAT_1811079c0 != 0) {
      lVar17 = DAT_1811079c0;
    }
  }
  local_1b0 = fVar19 + local_1b4;
  fVar22 = param_4 * DAT_1808ac964;
  fVar23 = fVar22 + local_1b8;
  fVar25 = param_4 * DAT_1808aca5c;
  fStack_1bc = local_1b0;
  if (0.0 <= fVar18) {
    local_1c0 = fVar23;
    uVar7 = FUN_1800b52c0((float)(DAT_180960f68 & 0xff) * fVar21,
                          (float)(DAT_180960f68 >> 8 & 0xff) * fVar21,
                          (float)(DAT_180960f68 >> 0x10 & 0xff) * fVar21,
                          (float)(DAT_180960f68 >> 0x18) * fVar21 * param_5 * DAT_1808ac27c);
    fVar21 = local_1b0;
    local_1a8._0_4_ = fVar23 + fVar25;
    local_1a8._4_4_ = local_1b0 + fVar25;
    if ((DAT_1811079e0 == 0) || (cVar5 = FUN_180369310(), cVar5 == '\0')) {
      local_200 = (char ****)((ulonglong)local_200 & 0xffffffff00000000);
      local_208 = (float *)CONCAT44(local_208._4_4_,fVar19);
      FUN_1803fe590(param_1,&local_1c0,&local_1a8,uVar7);
    }
    else {
      local_1f0 = CONCAT44(local_1f0._4_4_,DAT_1808ac34c);
      local_1f8 = (char ****)CONCAT44(local_1f8._4_4_,2);
      local_200 = (char ****)CONCAT44(local_200._4_4_,uVar7);
      local_208 = (float *)((ulonglong)local_208 & 0xffffffff00000000);
      FUN_180369c70(param_1,&local_1c0,&local_1a8,fVar19);
    }
    if (param_2[1] == 0) {
      uStack_118 = 0;
      local_110 = 7;
      local_108 = 0xf;
      local_120 = (ulonglong)
                  CONCAT16(DAT_1806ea3c8._6_1_,
                           CONCAT24(DAT_1806ea3c8._4_2_,(undefined4)DAT_1806ea3c8));
      plVar10 = (longlong *)
                FUN_18039ed80(&local_188,&local_120,
                              "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"160\" height=\"160\" viewBox=\"0 0 100 100\"><g transform=\"translate(-24 -23) scale(1.45)\"><path d=\"M0 0 C0.72 0.02 1.44 0.05 2.18 0.07 C2.9 0.09 3.63 0.11 4.38 0.12 C4.65 0.14 4.65 0.14 6.05 0.2 C6.38 1.19 6.71 2.18 7.05 3.2 C7.71 3.2 8.37 3.2 9.05 3.2 C9.89 4.65 10.73 6.11 11.55 7.57 C12.02 8.38 12.48 9.19 12.96 10.03 C14.05 12.2 14.05 12.2 14.05 14.2 C14.71 14.2 15.37 14.2 16.05 14.2 C16.05 9.91 16.05 5.62 16.05 1.2 C18.05 0.2 18.05 0.2 25.05 0.2 C25.05 10.76 25.05 21.32 25.05 32.2 C21.75 32.2 18.45 32.2 15.05 32.2 C12.91 30.01 12.1 28.96 10.93 26.32 C10.64 25.76 10.35 25.21 10.05 24.64 C8.05 20.68 8.05 20.68 8.05 18.2 C7.06 18.2 6.07 18.2 5.05 18.2 C5.05 22.82 5.05 27.44 5.05 32.2 C2.41 32.2 -0.23 32.2 -2.95 32.2 C-5 28.09 -4.13 22.75 -4.13 18.19 C-4.13 16.2 -4.15 14.21 -4.17 12.23 C-4.17 10.97 -4.17 9.71 -4.18 8.45 C-4.18 7.3 -4.18 6.15 -4.19 4.96 C-3.91 1.75 -3.39 0.34 0 0 Z \" fill=\"#F3F3FB\" transform=\"translate(25.9453125,32.8046875)\" />\n<path d=\"M0 0 C2.97 0 5.94 0 9 0 C9 7.92 9 15.84 9 24 C11.97 24 14.94 24 18 24 C19.32 24.33 20.64 24.66 22 25 C22 27.64 22 30.28 22 33 C14.41 33 6.82 33 -1 33 C-1.02 28.46 -1.04 23.92 -1.05 19.38 C-1.06 17.84 -1.07 16.29 -1.08 14.75 C-1.09 12.53 -1.09 10.31 -1.1 8.1 C-1.1 7.4 -1.11 6.71 -1.11 5.99 C-1.11 4.33 -1.06 2.66 -1 1 C-0.67 0.67 -0.34 0.34 0 0 Z \" fill=\"#C4C5ED\" transform=\"translate(58,33)\" />\n<path d=\"M0 0 C1.65 0 3.3 0 5 0 C6 1 6 1 6.11 3.22 C6.11 4.18 6.1 5.14 6.1 6.13 C6.1 6.65 6.1 6.65 6.09 9.26 C6.08 10.35 6.07 11.44 6.06 12.56 C6.06 13.65 6.05 14.75 6.05 15.87 C6.04 18.58 6.02 21.29 6 24 C10.29 24.33 14.58 24.66 19 25 C19 25.99 19 26.98 19 28 C12.73 28 6.46 28 0 28 C0 18.76 0 9.52 0 0 Z \" fill=\"#F5F5FC\" transform=\"translate(58,35)\" />\n<path d=\"M0 0 C0 10.56 0 21.12 0 32 C-3.3 32 -6.6 32 -10 32 C-14 27.62 -14 27.62 -14 24 C-13.34 24 -12.68 24 -12 24 C-12 24.66 -12 25.32 -12 26 C-10.52 26.33 -10.52 26.33 -3 28 C-3 19.75 -3 11.5 -3 3 C-4.32 3 -5.64 3 -7 3 C-7 7.62 -7 12.24 -7 17 C-12 16 -12 16 -14 15 C-14.41 13.15 -14.4..." /* TRUNCATED STRING LITERAL */
                              ,(int)(fVar22 + fVar22 + fVar20));
      lVar2 = *plVar10;
      lVar13 = plVar10[1];
      iVar8 = *(int *)((longlong)plVar10 + 0xc);
      if (0xf < local_108) {
        uVar15 = local_108 + 1;
        uVar16 = local_120;
        if (0xfff < uVar15) {
          uVar16 = *(ulonglong *)(local_120 - 8);
          if (0x1f < (local_120 - uVar16) - 8) goto LAB_1800b73d0;
          uVar15 = local_108 + 0x28;
        }
        thunk_FUN_1803d64e0(uVar16,uVar15);
      }
      if (((lVar2 != 0) && (0 < (int)lVar13)) && (0 < iVar8)) {
        fVar19 = ((float)(int)lVar13 / (float)iVar8) * fVar22;
        fVar21 = (float)FUN_18053fc00((fVar25 - fVar22) * fVar20 + fVar21);
        local_198 = (float)FUN_18053fc00((fVar25 - fVar19) * fVar20 + fVar23);
        iVar8 = 0;
        if (0.0 <= param_5) {
          fVar26 = DAT_1808ac34c;
          if (param_5 <= DAT_1808ac34c) {
            fVar26 = param_5;
          }
          iVar8 = (int)(fVar26 * DAT_1808acb94 + fVar20);
        }
        local_1a8._0_4_ = 1.0;
        local_1a8._4_4_ = 1.0;
        local_1c0 = 0.0;
        fStack_1bc = 0.0;
        local_168 = local_198 + fVar19;
        local_164 = fVar21 + fVar22;
        local_188 = (char ***)0x0;
        local_1f8 = (char ****)(CONCAT44(local_1f8._4_4_,iVar8 << 0x18) | 0xffffff);
        local_200 = (char ****)&local_1a8;
        local_208 = &local_1c0;
        local_194 = fVar21;
        lStack_180 = lVar2;
        FUN_1803fea90(param_1,&local_188,&local_198,&local_168);
      }
    }
    else {
      local_200 = (char ****)CONCAT44(local_200._4_4_,param_5);
      local_208 = (float *)CONCAT44(local_208._4_4_,param_4);
      FUN_1800b6430(param_1,param_2[1],&local_1c0,fVar25);
    }
  }
  fVar21 = param_4 * DAT_1808ac930;
  fVar19 = param_4 * DAT_1808ac940;
  param_4 = param_4 + param_4;
  fVar23 = fVar23 + fVar25 + fVar22;
  fVar20 = (fVar25 - (fVar19 + fVar21 + param_4)) * fVar20 + local_1b0;
  fVar26 = (local_1b8 + local_1ac) - fVar22;
  local_1c0 = fVar26;
  if (*param_2 == 0) {
    local_130 = 9;
    local_128 = 0xf;
    local_140 = (char ****)s_neverlose_18058b650._0_8_;
    local_138 = 0x65;
  }
  else {
    FUN_180024b50(&local_140,param_2 + 2);
  }
  if (*param_2 == 0) {
    _Str = "Initialization in progress";
    if (DAT_180cc3e1a != '\0') {
      _Str = "Initialization complete";
    }
    local_160 = (char ****)0x0;
    uStack_158 = 0;
    local_150 = 0;
    local_148 = 0;
    sVar11 = strlen(_Str);
    FUN_1800133a0(&local_160,_Str,sVar11);
  }
  else {
    FUN_180024b50(&local_160,param_2 + 10);
  }
  FUN_1800b5860(local_100,param_2);
  lVar2 = local_1c8;
  local_200 = (char ****)&local_160;
  if (0xf < local_148) {
    local_200 = local_160;
  }
  local_1ac = DAT_1808ac34c;
  if (DAT_1808ac34c <= fVar26 - fVar23) {
    local_1ac = fVar26 - fVar23;
  }
  local_1d8 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = (char ****)0x0;
  local_208 = (float *)CONCAT44(local_208._4_4_,local_1ac);
  FUN_18040a2f0(&local_1c8,local_1c8);
  if (local_150 == 0) {
  }
  else {
    fVar21 = local_1c8._4_4_;
  }
  if (0.0 <= fVar18) {
    local_198 = (float)FUN_18053f0d0(fVar22 * DAT_1808ac1f4);
    local_1c8 = CONCAT44(local_19c,local_1a0 - local_198);
    local_198 = local_198 + local_1b8;
    local_194 = local_1b4;
    FUN_1803fc200(param_1,&local_198,&local_1c8,1);
    fVar22 = DAT_1808abfe4;
    ppppcVar14 = (char ****)&local_140;
    if (0xf < local_128) {
      ppppcVar14 = local_140;
    }
    param_5 = param_5 * DAT_1808ac294;
    uVar9 = FUN_1800b52c0((float)(DAT_180960ec8 & 0xff) * DAT_1808abfe4,
                          (float)(DAT_180960ec8 >> 8 & 0xff) * DAT_1808abfe4,
                          (float)(DAT_180960ec8 >> 0x10 & 0xff) * DAT_1808abfe4,
                          param_5 * (float)(DAT_180960ec8 >> 0x18) * DAT_1808abfe4);
    local_1c8 = CONCAT44(fVar20,fVar23);
    if ((((uVar9 & 0xff000000) != 0) && (ppppcVar14 != (char ****)0x0)) &&
       ((bool)*(char *)ppppcVar14 != fVar18 < 0.0)) {
      lVar13 = lVar17;
      if (lVar17 == 0) {
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
      }
      local_188 = *(char ****)(param_1 + 0x60);
      lStack_180 = *(longlong *)(param_1 + 0x68);
      local_1e0 = 0;
      local_1e8 = local_1e8 & 0xffffffff00000000;
      local_1f0 = 0;
      local_200 = &local_188;
      local_208 = (float *)CONCAT44(local_208._4_4_,uVar9);
      local_1f8 = ppppcVar14;
      FUN_18040a900(lVar13,param_1,uVar9,&local_1c8);
    }
    ppppcVar14 = (char ****)&local_160;
    if (0xf < local_148) {
      ppppcVar14 = local_160;
    }
    uVar9 = FUN_1800b52c0((float)(DAT_180960ed0 & 0xff) * fVar22,
                          (float)(DAT_180960ed0 >> 8 & 0xff) * fVar22,
                          (float)(DAT_180960ed0 >> 0x10 & 0xff) * fVar22,
                          param_5 * (float)(DAT_180960ed0 >> 0x18) * fVar22);
    local_1c8 = CONCAT44(fVar20 + fVar19 + param_4,fVar23);
    if ((((uVar9 & 0xff000000) != 0) && (ppppcVar14 != (char ****)0x0)) &&
       (*(char *)ppppcVar14 != '\0')) {
      lVar13 = lVar2;
      if (lVar2 == 0) {
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
      }
      local_188 = *(char ****)(param_1 + 0x60);
      lStack_180 = *(longlong *)(param_1 + 0x68);
      local_1e0 = 0;
      local_1e8 = CONCAT44(local_1e8._4_4_,local_1ac);
      local_1f0 = 0;
      local_200 = &local_188;
      local_208 = (float *)CONCAT44(local_208._4_4_,uVar9);
      local_1f8 = ppppcVar14;
      FUN_18040a900(lVar13,param_1,uVar9,&local_1c8);
    }
    if (local_f0 != 0) {
      local_200 = (char ****)local_100;
      if (0xf < local_e8) {
        local_200 = local_100[0];
      }
      local_1d8 = 0;
      local_1e8 = 0;
      local_1f0 = 0;
      local_1f8 = (char ****)0x0;
      local_208 = (float *)((ulonglong)local_208 & 0xffffffff00000000);
      FUN_18040a2f0(&local_1c8,lVar2);
      fVar18 = (float)FUN_18053fc00((float)local_1c8 + DAT_1808ac2f0);
      ppppcVar14 = (char ****)local_100;
      if (0xf < local_e8) {
        ppppcVar14 = local_100[0];
      }
      uVar9 = FUN_1800b52c0((float)(DAT_180960ed0 & 0xff) * fVar22,
                            (float)(DAT_180960ed0 >> 8 & 0xff) * fVar22,
                            (float)(DAT_180960ed0 >> 0x10 & 0xff) * fVar22,
                            param_5 * (float)(DAT_180960ed0 >> 0x18) * fVar22);
      local_1c8 = CONCAT44(fVar20,(local_1c0 - fVar18) - param_4);
      if ((((uVar9 & 0xff000000) != 0) && (ppppcVar14 != (char ****)0x0)) &&
         (*(char *)ppppcVar14 != '\0')) {
        if (lVar17 == 0) {
          lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
        }
        local_188 = *(char ****)(param_1 + 0x60);
        lStack_180 = *(longlong *)(param_1 + 0x68);
        local_1e0 = 0;
        local_1e8 = local_1e8 & 0xffffffff00000000;
        local_1f0 = 0;
        local_200 = &local_188;
        local_208 = (float *)CONCAT44(local_208._4_4_,uVar9);
        local_1f8 = ppppcVar14;
        FUN_18040a900(lVar17,param_1,uVar9,&local_1c8);
      }
    }
    iVar1 = *(int *)(param_1 + 0xa0);
    iVar8 = iVar1 + -1;
    *(int *)(param_1 + 0xa0) = iVar8;
    if (iVar8 == 0) {
      puVar12 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x34);
    }
    else {
      puVar12 = (undefined4 *)((longlong)(iVar1 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
    }
    uVar7 = puVar12[1];
    uVar6 = puVar12[2];
    uVar4 = puVar12[3];
    *(undefined4 *)(param_1 + 0x60) = *puVar12;
    *(undefined4 *)(param_1 + 100) = uVar7;
    *(undefined4 *)(param_1 + 0x68) = uVar6;
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    FUN_1803fbff0(param_1);
  }
  fVar18 = (fVar20 - local_1b0) + param_4 + fVar19 + fVar21;
  if (fVar18 <= fVar25) {
    fVar18 = fVar25;
  }
  param_2[0x22] = (int)fVar18;
  FUN_18000f890(local_100);
  if (0xf < local_148) {
    uVar16 = local_148 + 1;
    ppppcVar14 = local_160;
    if (0xfff < uVar16) {
      ppppcVar14 = (char ****)local_160[-1];
      if ((char *)0x1f < (char *)((longlong)local_160 + (-8 - (longlong)ppppcVar14))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        goto LAB_1800b73d0;
      }
      uVar16 = local_148 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar14,uVar16);
  }
  local_150 = 0;
  local_148 = 0xf;
  local_160 = (char ****)((ulonglong)local_160 & 0xffffffffffffff00);
  if (0xf < local_128) {
    uVar16 = local_128 + 1;
    ppppcVar14 = local_140;
    if (0xfff < uVar16) {
      ppppcVar14 = (char ****)local_140[-1];
      if ((char *)0x1f < (char *)((longlong)local_140 + (-8 - (longlong)ppppcVar14))) {
LAB_1800b73d0:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        fVar18 = (float)(*pcVar3)();
        return fVar18;
      }
      uVar16 = local_128 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar14,uVar16);
  }
  return fVar24;
}



/* ===== 1800b73e0 FUN_1800b73e0 ===== */

void FUN_1800b73e0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  ULONGLONG UVar3;
  undefined8 *puVar4;
  longlong local_res20;
  undefined *puVar5;
  
  puVar5 = &DAT_1809e9c20;
  iVar2 = FUN_1804e4d70(&DAT_1809e9c20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e9c6c == 0x7fffffff) {
    DAT_1809e9c6c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  FUN_1800b56a0(&local_res20,1);
  lVar1 = local_res20;
  *(undefined4 *)(local_res20 + 4) = param_3;
  if ((undefined8 *)(local_res20 + 8) != param_1) {
    if ((ulonglong)param_1[3] < 0x10) {
      puVar4 = param_1;
    }
    else {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_180029840((undefined8 *)(local_res20 + 8),puVar4,param_1[2],param_4,puVar5);
  }
  if ((undefined8 *)(lVar1 + 0x28) != param_2) {
    if ((ulonglong)param_2[3] < 0x10) {
      puVar4 = param_2;
    }
    else {
      puVar4 = (undefined8 *)*param_2;
    }
    FUN_180029840((undefined8 *)(lVar1 + 0x28),puVar4,param_2[2],param_4,puVar5);
  }
  UVar3 = GetTickCount64();
  *(ULONGLONG *)(lVar1 + 0x48) = UVar3;
  if (DAT_180cd0390 == DAT_180cd0398) {
    FUN_1800b7a10();
  }
  else {
    local_res20 = 0;
    *DAT_180cd0390 = lVar1;
    DAT_180cd0390 = DAT_180cd0390 + 1;
  }
  lVar1 = local_res20;
  LOCK();
  DAT_180ca1c6f = 1;
  UNLOCK();
  if (local_res20 != 0) {
    FUN_18000f890(local_res20 + 0x28);
    FUN_18000f890(lVar1 + 8);
    thunk_FUN_1803d64e0(lVar1,0xe0);
  }
  FUN_1804e4e90(&DAT_1809e9c20);
  return;
}



/* ===== 1800b7530 FUN_1800b7530 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800b7530(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined4 extraout_XMM0_Da;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined *local_res10;
  
  if (param_1 != 0) {
    local_res10 = &DAT_1809e9c20;
    iVar8 = FUN_1804e4d70(&DAT_1809e9c20);
    if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809e9c6c == 0x7fffffff) {
      DAT_1809e9c6c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    if (DAT_180ca39d4 == '\0') {
      DAT_180ca39d4 = '\x01';
      plVar9 = (longlong *)FUN_1800b56a0(&local_res8,0);
      plVar5 = DAT_180cd0390;
      plVar12 = DAT_180cd0388;
      if (DAT_180cd0390 == DAT_180cd0398) {
        FUN_1800b7a10(extraout_XMM0_Da,DAT_180cd0388,plVar9);
      }
      else {
        lVar11 = *plVar9;
        *plVar9 = 0;
        if (plVar12 == plVar5) {
          *plVar5 = lVar11;
          DAT_180cd0390 = DAT_180cd0390 + 1;
        }
        else {
          plVar9 = plVar5 + -1;
          lVar4 = *plVar9;
          *plVar9 = 0;
          *plVar5 = lVar4;
          DAT_180cd0390 = DAT_180cd0390 + 1;
          while (plVar9 != plVar12) {
            plVar9 = plVar9 + -1;
            plVar5 = plVar5 + -1;
            lVar4 = *plVar9;
            *plVar9 = 0;
            lVar2 = *plVar5;
            *plVar5 = lVar4;
            if (lVar2 != 0) {
              FUN_18000f890(lVar2 + 0x28);
              FUN_18000f890(lVar2 + 8);
              thunk_FUN_1803d64e0(lVar2,0xe0);
            }
          }
          lVar4 = *plVar12;
          *plVar12 = lVar11;
          if (lVar4 != 0) {
            FUN_18000f890(lVar4 + 0x28);
            FUN_18000f890(lVar4 + 8);
            thunk_FUN_1803d64e0(lVar4,0xe0);
          }
        }
      }
      lVar11 = CONCAT44(uStackX_c,local_res8);
      if (lVar11 != 0) {
        FUN_18000f890(lVar11 + 0x28);
        FUN_18000f890(lVar11 + 8);
        thunk_FUN_1803d64e0(lVar11,0xe0);
      }
    }
    fVar16 = (float)FUN_18033c790();
    uVar7 = DAT_1808ac34c;
    uVar6 = DAT_1808ac118;
    uVar13 = 0;
    if ((longlong)DAT_180cd0390 - (longlong)DAT_180cd0388 >> 3 != 0) {
      fVar1 = *(float *)(DAT_180ca0a50 + 0x30);
      fVar21 = 0.0;
      fVar20 = fVar16 * DAT_1808ac864;
      uVar14 = 0;
      fVar22 = fVar16 * _DAT_1808acbbc;
      uVar13 = 0;
      do {
        piVar3 = (int *)DAT_180cd0388[uVar14];
        if (*piVar3 == 1) {
          UVar10 = GetTickCount64();
          bVar15 = UVar10 - *(longlong *)(piVar3 + 0x12) < 5000;
LAB_1800b78c3:
          if (!bVar15) goto LAB_1800b7789;
          uVar19 = uVar7;
        }
        else {
          if ((char)piVar3[0x26] == '\0') {
            lVar11 = FUN_1800b5630();
            if (*(longlong *)(piVar3 + 0x24) == 0) {
              if (DAT_180cc3e1a != '\0') {
                *(longlong *)(piVar3 + 0x24) = lVar11;
              }
            }
            else if (2000000000 < lVar11 - *(longlong *)(piVar3 + 0x24)) {
              *(undefined1 *)(piVar3 + 0x26) = 1;
            }
            bVar15 = (char)piVar3[0x26] == '\0';
            goto LAB_1800b78c3;
          }
          bVar15 = false;
LAB_1800b7789:
          uVar19 = 0;
        }
        fVar17 = (float)FUN_1800b5390(piVar3 + 0x14,uVar19,uVar6,5);
        fVar18 = (float)FUN_1800b5390(piVar3 + 0x1b,fVar21,uVar6,5);
        plVar5 = DAT_180cd0390;
        if ((bVar15) || (0.0 < fVar17)) {
          uVar13 = 1;
          local_res8 = FUN_18053f0d0(fVar1 - (fVar22 + fVar20) * fVar17);
          uStackX_c = FUN_18053f0d0(fVar18 + fVar20);
          fVar17 = (float)FUN_1800b67a0(param_1,piVar3,&local_res8,fVar16,fVar17);
          fVar21 = fVar21 + fVar17 + fVar20;
LAB_1800b7933:
          uVar14 = uVar14 + 1;
        }
        else {
          if (*piVar3 != 1) goto LAB_1800b7933;
          plVar12 = DAT_180cd0388 + uVar14;
          plVar9 = plVar12;
          while (plVar9 = plVar9 + 1, plVar9 != plVar5) {
            lVar11 = *plVar9;
            *plVar9 = 0;
            lVar4 = *plVar12;
            *plVar12 = lVar11;
            if (lVar4 != 0) {
              FUN_18000f890(lVar4 + 0x28);
              FUN_18000f890(lVar4 + 8);
              thunk_FUN_1803d64e0(lVar4,0xe0);
            }
            plVar12 = plVar12 + 1;
          }
          lVar11 = DAT_180cd0390[-1];
          if (lVar11 != 0) {
            FUN_18000f890(lVar11 + 0x28);
            FUN_18000f890(lVar11 + 8);
            thunk_FUN_1803d64e0(lVar11,0xe0);
          }
          DAT_180cd0390 = DAT_180cd0390 + -1;
        }
      } while (uVar14 < (ulonglong)((longlong)DAT_180cd0390 - (longlong)DAT_180cd0388 >> 3));
    }
    LOCK();
    UNLOCK();
    DAT_180ca1c6f = uVar13;
    FUN_1804e4e90(&DAT_1809e9c20);
  }
  return;
}



/* ===== 1800b79d0 FUN_1800b79d0 ===== */

void FUN_1800b79d0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  FUN_18000f890(lVar1 + 0x28);
  FUN_18000f890(lVar1 + 8);
  thunk_FUN_1803d64e0(lVar1,0xe0);
  return;
}



/* ===== 1800b7a10 FUN_1800b7a10 ===== */

undefined8 * FUN_1800b7a10(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar2 = DAT_180cd0388;
  if ((longlong)DAT_180cd0390 - (longlong)DAT_180cd0388 == -8) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar10 = 0x1fffffffffffffff;
  uVar8 = (longlong)DAT_180cd0398 - (longlong)DAT_180cd0388 >> 3;
  uVar1 = ((longlong)DAT_180cd0390 - (longlong)DAT_180cd0388 >> 3) + 1;
  if (uVar8 <= 0x1fffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar10 = uVar1;
    if (uVar1 <= uVar8) {
      uVar10 = uVar8;
    }
    if (0x1fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar10 * 8);
  puVar2 = (undefined8 *)
           (((longlong)param_2 - (longlong)puVar2 & 0xfffffffffffffff8U) + (longlong)puVar7);
  uVar3 = *param_3;
  *param_3 = 0;
  *puVar2 = uVar3;
  puVar6 = DAT_180cd0390;
  puVar9 = puVar7;
  puVar5 = DAT_180cd0388;
  if (param_2 == DAT_180cd0390) {
    for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
      uVar3 = *puVar5;
      *puVar5 = 0;
      *puVar9 = uVar3;
      puVar9 = puVar9 + 1;
    }
  }
  else {
    for (; puVar5 != param_2; puVar5 = puVar5 + 1) {
      uVar3 = *puVar5;
      *puVar5 = 0;
      *puVar9 = uVar3;
      puVar9 = puVar9 + 1;
    }
    FUN_1800b7c00(puVar9,puVar9);
    puVar5 = DAT_180cd0390;
    puVar9 = puVar2;
    for (; puVar9 = puVar9 + 1, param_2 != puVar5; param_2 = param_2 + 1) {
      uVar3 = *param_2;
      *param_2 = 0;
      *puVar9 = uVar3;
    }
  }
  FUN_1800b7c00(puVar9,puVar9);
  if (DAT_180cd0388 == (undefined8 *)0x0) goto LAB_1800b7bba;
  FUN_1800b7c00(DAT_180cd0388,DAT_180cd0390);
  puVar11 = auStack_38;
  puVar12 = auStack_38;
  puVar9 = DAT_180cd0388;
  if ((ulonglong)(((longlong)DAT_180cd0398 - (longlong)DAT_180cd0388 >> 3) * 8) < 0x1000) {
LAB_1800b7baf:
    puVar12 = puVar11;
  }
  else {
    puVar9 = (undefined8 *)DAT_180cd0388[-1];
    if (0x1f < (ulonglong)((longlong)DAT_180cd0388 + (-8 - (longlong)puVar9))) {
      puVar9 = (undefined8 *)&DAT_00000005;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar11 = auStack_30;
      goto LAB_1800b7baf;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1800b7bba;
  thunk_FUN_1803d64e0(puVar9);
LAB_1800b7bba:
  DAT_180cd0388 = puVar7;
  DAT_180cd0390 = puVar7 + uVar1;
  DAT_180cd0398 = puVar7 + uVar10;
  return puVar2;
}



/* ===== 1800b7c00 FUN_1800b7c00 ===== */

void FUN_1800b7c00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    do {
      lVar1 = *param_1;
      if (lVar1 != 0) {
        FUN_18000f890(lVar1 + 0x28);
        FUN_18000f890(lVar1 + 8);
        thunk_FUN_1803d64e0(lVar1,0xe0);
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 1800b7c60 _vscprintf_l ===== */

int __cdecl _vscprintf_l(char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  ulonglong *puVar2;
  
                    /* 0xb7c60  81  _vscprintf_l */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2 | 2,0,0,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1800b7cc0 _scprintf ===== */

int __cdecl _scprintf(char *_Format,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0xb7cc0  21  _scprintf */
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2 | 2,0,0,_Format,0,&local_res10);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1800b7d20 FUN_1800b7d20 ===== */

uint FUN_1800b7d20(float *param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float local_78 [8];
  float local_58;
  float local_54;
  float local_50 [2];
  float local_48;
  float local_44;
  float local_40 [2];
  float local_38 [12];
  
  local_78[2] = *param_1;
  local_50[0] = param_1[2];
  local_78[4] = 1.0;
  local_78[0] = 0.0;
  local_58 = 1.0;
  local_78[5] = 0.0;
  local_48 = 1.0;
  local_54 = 0.0;
  local_38[0] = 1.0;
  local_40[0] = param_2 * param_1[3];
  local_44 = 0.0;
  local_78[6] = param_1[1];
  pfVar5 = local_78;
  if (0.0 <= local_78[2]) {
    pfVar5 = local_78 + 2;
  }
  pfVar1 = local_78 + 4;
  if (local_78[2] <= DAT_1808ac34c) {
    pfVar1 = pfVar5;
  }
  pfVar5 = local_78 + 5;
  if (0.0 <= local_78[6]) {
    pfVar5 = local_78 + 6;
  }
  pfVar2 = &local_58;
  if (local_78[6] <= DAT_1808ac34c) {
    pfVar2 = pfVar5;
  }
  pfVar5 = &local_54;
  if (0.0 <= local_50[0]) {
    pfVar5 = local_50;
  }
  pfVar3 = &local_48;
  if (local_50[0] <= DAT_1808ac34c) {
    pfVar3 = pfVar5;
  }
  pfVar5 = &local_44;
  if (0.0 <= local_40[0]) {
    pfVar5 = local_40;
  }
  pfVar4 = local_38;
  if (local_40[0] <= DAT_1808ac34c) {
    pfVar4 = pfVar5;
  }
  return (((int)(*pfVar4 * DAT_1808acb94 + DAT_1808ac1f4) << 8 |
          (int)(*pfVar3 * DAT_1808acb94 + DAT_1808ac1f4)) << 8 |
         (int)(*pfVar2 * DAT_1808acb94 + DAT_1808ac1f4)) << 8 |
         (int)(*pfVar1 * DAT_1808acb94 + DAT_1808ac1f4);
}



/* ===== 1800b7e80 FUN_1800b7e80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1800b7e80(char *param_1,longlong *param_2,char *param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char *pcVar5;
  ulonglong uVar6;
  char *pcVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  uint local_78;
  char *local_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48 [6];
  
  local_48[4] = DAT_180919500 ^ (ulonglong)auStack_98;
  local_78 = 0;
  plVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    plVar4 = (longlong *)*param_2;
  }
  local_70 = param_1;
  lVar2 = FUN_1800ba730(plVar4,param_2[2],param_3,0x2e);
  uVar6 = param_2[2];
  if (lVar2 == -1) {
    local_68 = 0;
    lStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (longlong *)*param_2;
    }
    if (0x7fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    if (uVar6 < 0x10) {
      local_50 = 0xf;
      local_68 = *param_2;
      lStack_60 = param_2[1];
      local_58 = uVar6;
    }
    else {
      uVar3 = uVar6 | 0xf;
      uVar11 = 0x7fffffffffffffff;
      if ((uVar3 < 0x8000000000000000) && (uVar11 = uVar3, uVar3 < 0x16)) {
        uVar11 = 0x16;
      }
      local_68 = FUN_18000fb70(uVar11 + 1);
      param_3 = (char *)(uVar6 + 1);
      local_58 = uVar6;
      local_50 = uVar11;
      FUN_180540530(local_68,param_2);
    }
    plVar4 = &local_68;
    uVar8 = 1;
  }
  else {
    uVar11 = lVar2 + 1;
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    if (uVar6 < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_18002a1a0();
    }
    param_3 = (char *)0xffffffffffffffff;
    if ((char *)(uVar6 - uVar11) != (char *)0xffffffffffffffff) {
      param_3 = (char *)(uVar6 - uVar11);
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (longlong *)*param_2;
    }
    FUN_1800133a0(local_48,(longlong)param_2 + uVar11);
    plVar4 = local_48;
    uVar8 = 10;
  }
  local_78 = uVar8;
  FUN_180024b50(param_1,plVar4);
  if (((uVar8 & 2) == 0) || (uVar8 = uVar8 & 0xfffffffd, (ulonglong)local_48[3] < 0x10)) {
LAB_1800b8010:
    puVar9 = auStack_98;
    if (((uVar8 & 1) != 0) && (0xf < local_50)) {
      uVar6 = local_50 + 1;
      lVar2 = local_68;
      if (0xfff < uVar6) {
        lVar2 = *(longlong *)(local_68 + -8);
        if (0x1f < (local_68 - lVar2) - 8U) goto LAB_1800b806a;
        uVar6 = local_50 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar2,uVar6);
    }
    puVar10 = auStack_98;
    param_3 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_3 = *(char **)param_1;
      pcVar5 = param_3;
      puVar10 = auStack_98;
      goto LAB_1800b8077;
    }
  }
  else {
    uVar6 = local_48[3] + 1;
    lVar2 = local_48[0];
    if (uVar6 < 0x1000) {
LAB_1800b800a:
      thunk_FUN_1803d64e0(lVar2,uVar6);
      goto LAB_1800b8010;
    }
    lVar2 = *(longlong *)(local_48[0] + -8);
    if ((local_48[0] - lVar2) - 8U < 0x20) {
      uVar6 = local_48[3] + 0x28;
      goto LAB_1800b800a;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar9 = auStack_90;
LAB_1800b806a:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar10 = puVar9 + 8;
  }
  pcVar5 = param_1;
LAB_1800b8077:
  pcVar7 = pcVar5 + *(longlong *)(param_1 + 0x10);
  while (param_3 != pcVar7) {
    if (*pcVar5 == '_') {
      *pcVar5 = ' ';
    }
    pcVar5 = pcVar5 + 1;
    param_3 = pcVar5;
  }
  *(undefined8 *)(puVar10 + -8) = 0x1800b80a0;
  return param_1;
}



/* ===== 1800b80c0 FUN_1800b80c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800b80c0(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_48;
  uVar1 = param_2[2];
  local_20 = param_2;
  if (uVar1 < 0x15) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar4 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(int *)param_1 = (int)*param_2;
    *(undefined4 *)((longlong)param_1 + 4) = uVar2;
    *(int *)(param_1 + 1) = (int)lVar4;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    lVar4 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar4;
    *(undefined1 *)param_2 = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
  }
  else {
    uVar6 = 0x14;
    do {
      if ((ulonglong)param_2[3] < 0x10) {
        plVar5 = param_2;
      }
      else {
        plVar5 = (longlong *)*param_2;
      }
    } while (((*(byte *)((longlong)plVar5 + uVar6) & 0xc0) == 0x80) &&
            (uVar6 = uVar6 - 1, uVar6 != 0));
    if (uVar1 < uVar6) {
      FUN_180028a50(param_2,uVar6 - uVar1,0);
    }
    else {
      param_2[2] = uVar6;
      if ((ulonglong)param_2[3] < 0x10) {
        *(undefined1 *)((longlong)param_2 + uVar6) = 0;
      }
      else {
        *(undefined1 *)(*param_2 + uVar6) = 0;
      }
    }
    FUN_180073a70(param_1,param_2,&DAT_1806eaba4);
  }
  FUN_18000f890(param_2);
  return param_1;
}



/* ===== 1800b81c0 FUN_1800b81c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800b81c0(undefined8 *param_1,float param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  char local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_78;
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
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_50 = param_1;
  if (param_4 == '\0') {
    snprintf(local_48,0x30,param_3,(double)param_2);
  }
  else {
    uVar1 = FUN_1804f3280();
    snprintf(local_48,0x30,param_3,uVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar2 = strlen(local_48);
  FUN_1800133a0(param_1,local_48,sVar2);
  return param_1;
}



/* ===== 1800b8290 FUN_1800b8290 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800b8290(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_54 [4];
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_78;
  iVar3 = 0;
  local_58 = 0;
  cVar1 = FUN_1802a0e40(&local_58,local_54);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_1800ef270(&DAT_180957240,local_58);
  }
  local_58 = 0;
  cVar1 = FUN_1802a0e40(&local_58,local_54);
  if (cVar1 != '\0') {
    iVar3 = FUN_1800ef270(&DAT_18094f764,local_58);
  }
  if ((iVar2 != DAT_1809e8f98) || (iVar3 != DAT_1809e85cc)) {
    if (-1 < DAT_1809e8f98) {
      puVar4 = (undefined8 *)FUN_1800ef330(local_30,&DAT_18094f764,iVar3);
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      puVar5 = (undefined8 *)FUN_1800ef330(local_50,&DAT_180957240,iVar2);
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      FUN_1802b2560("[binds] weapon group: ragebot %s, legitbot %s (hotkeys of the other groups hidden)"
                    ,puVar5,puVar4);
      FUN_18000f890(local_50);
      FUN_18000f890(local_30);
    }
    DAT_1809e85cc = iVar3;
    DAT_1809e8f98 = iVar2;
  }
  return;
}



/* ===== 1800b83b0 FUN_1800b83b0 ===== */

bool FUN_1800b83b0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  size_t sVar3;
  
  sVar3 = 0x12;
  if ((ulonglong)param_1[2] < 0x12) {
    sVar3 = param_1[2];
  }
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  iVar1 = memcmp(puVar2,"ragebot.selection.",sVar3);
  if ((iVar1 == 0) && (0x11 < sVar3)) {
    iVar1 = FUN_1800ef510(param_1,0x12);
    if (-1 < iVar1) {
      return iVar1 != DAT_1809e8f98;
    }
  }
  sVar3 = 9;
  if ((ulonglong)param_1[2] < 9) {
    sVar3 = param_1[2];
  }
  if ((ulonglong)param_1[3] < 0x10) {
    puVar2 = param_1;
  }
  else {
    puVar2 = (undefined8 *)*param_1;
  }
  iVar1 = memcmp(puVar2,"legitbot.",sVar3);
  if ((iVar1 == 0) && (8 < sVar3)) {
    iVar1 = FUN_1800ef510(param_1,9);
    if ((-1 < iVar1) && (iVar1 != DAT_1809e85cc)) {
      return true;
    }
  }
  return false;
}



/* ===== 1800b8480 FUN_1800b8480 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800b8480(double param_1)

{
  float fVar1;
  char *_Size;
  ulonglong *puVar2;
  ulonglong uVar3;
  size_t _Size_00;
  code *pcVar4;
  double dVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  size_t sVar9;
  char *pcVar10;
  undefined8 ****ppppuVar11;
  ulonglong *puVar12;
  float *pfVar13;
  char ****param0;
  char *_Buf1;
  char *pcVar14;
  float *pfVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  char *unaff_RSI;
  char *pcVar20;
  char *pcVar21;
  longlong lVar22;
  undefined8 ****ppppuVar23;
  char *pcVar24;
  char *pcVar25;
  longlong lVar26;
  int iVar27;
  char cVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [24];
  ulonglong *local_2c8;
  undefined8 local_2c0;
  ulonglong *puStack_2b8;
  ulonglong *local_2b0;
  undefined1 local_298 [16];
  undefined1 local_288 [32];
  undefined8 ****local_268;
  undefined8 uStack_260;
  char *local_258;
  char *local_250;
  ulonglong local_248;
  ulonglong uStack_240;
  ulonglong local_238;
  ulonglong local_230;
  ulonglong local_228;
  ulonglong uStack_220;
  ulonglong local_218;
  ulonglong local_210;
  ulonglong local_208;
  ulonglong uStack_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d8;
  char ****local_1c8 [3];
  ulonglong local_1b0;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  ulonglong local_188;
  ulonglong uStack_180;
  ulonglong local_178;
  ulonglong local_170;
  undefined1 local_168;
  undefined7 uStack_167;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  ulonglong local_88;
  
  lVar26 = DAT_180cd03c0;
  puVar18 = auStack_2e8;
  local_88 = DAT_180919500 ^ (ulonglong)auStack_2e8;
  pcVar25 = (char *)0x0;
  local_2c0 = 0;
  puStack_2b8 = (ulonglong *)0x0;
  local_2b0 = (ulonglong *)0x0;
  if (DAT_180ca0068 == '\0') {
    pcVar21 = &DAT_18095d530;
LAB_1800b8770:
    if ((*pcVar21 != '\0') && (pcVar21[0xe1] != '\0')) {
      local_268 = (undefined8 ****)0x0;
      uStack_260 = 0;
      local_258 = (char *)0x0;
      local_250 = (char *)0x0;
      sVar9 = strlen(pcVar21);
      FUN_1800133a0(&local_268,pcVar21,sVar9);
      fVar1 = *(float *)(pcVar21 + 0x6c);
      pcVar20 = (char *)0x0;
      ppppuVar23 = local_268;
      pcVar14 = local_250;
      do {
        if ((&DAT_18095d530)[(longlong)pcVar20 * 0xe4] != '\0') {
          if ((float)(&DAT_18095d59c)[(longlong)pcVar20 * 0x39] == fVar1) {
            pcVar24 = &DAT_18095d530 + (longlong)pcVar20 * 0xe4;
            pcVar10 = (char *)strlen(pcVar24);
            ppppuVar11 = &local_268;
            if ((char *)0xf < pcVar14) {
              ppppuVar11 = ppppuVar23;
            }
            unaff_RSI = pcVar24;
            if (local_258 == pcVar10) {
              if (local_258 != (char *)0x0) {
                iVar6 = memcmp(ppppuVar11,pcVar24,(size_t)local_258);
                if (iVar6 != 0) goto LAB_1800b8830;
              }
              pcVar10 = local_250;
              unaff_RSI = local_258;
              ppppuVar23 = local_268;
              if (pcVar20[0x180cd1320] != '\0') {
                pcVar20 = (char *)0x12;
                if (local_258 < (char *)0x12) {
                  pcVar20 = local_258;
                }
                ppppuVar11 = &local_268;
                if ((char *)0xf < local_250) {
                  ppppuVar11 = local_268;
                }
                iVar6 = memcmp(ppppuVar11,"ragebot.selection.",(size_t)pcVar20);
                if ((iVar6 != 0) || (pcVar20 < (char *)0x12)) goto LAB_1800b89e5;
                if (unaff_RSI < (char *)0x12) goto LAB_1800b954c;
                pcVar14 = &DAT_00000007;
                if (unaff_RSI + -0x12 < &DAT_00000007) {
                  pcVar14 = unaff_RSI + -0x12;
                }
                ppppuVar11 = &local_268;
                if ((char *)0xf < pcVar10) {
                  ppppuVar11 = ppppuVar23;
                }
                iVar6 = memcmp((void *)((longlong)ppppuVar11 + 0x12),"global.",(size_t)pcVar14);
                if ((iVar6 == 0) && ((char *)0x6 < pcVar14)) {
                  iVar6 = 0;
                  goto LAB_1800b89d6;
                }
                if (unaff_RSI < &DAT_00000013) goto LAB_1800b89d1;
                ppppuVar11 = &local_268;
                if ((char *)0xf < pcVar10) {
                  ppppuVar11 = ppppuVar23;
                }
                if ((*(char *)((longlong)ppppuVar11 + 0x12) != 'g') || (unaff_RSI < &DAT_00000014))
                goto LAB_1800b89d1;
                pcVar20 = &DAT_00000013;
                iVar27 = 0;
                goto LAB_1800b8950;
              }
              unaff_RSI = pcVar24;
              pcVar14 = local_250;
            }
          }
        }
LAB_1800b8830:
        pcVar20 = pcVar20 + 1;
      } while (pcVar20 < (char *)0x40);
      if (pcVar14 < &DAT_00000010) goto LAB_1800b8877;
      pcVar24 = pcVar14 + 1;
      ppppuVar11 = ppppuVar23;
      if ((char *)0xfff < pcVar24) {
        ppppuVar11 = (undefined8 ****)ppppuVar23[-1];
        pcVar10 = (char *)((longlong)ppppuVar23 + (-8 - (longlong)ppppuVar11));
        if (&DAT_0000001f < pcVar10) goto LAB_1800b8ef1;
        pcVar24 = pcVar14 + 0x28;
      }
      goto LAB_1800b886b;
    }
    goto LAB_1800b8877;
  }
  iVar6 = 0;
  for (lVar22 = DAT_180cd03b8; lVar22 != lVar26; lVar22 = lVar22 + 0x40) {
    uVar7 = FUN_180024b50(local_128,lVar22 + 0x20);
    puVar8 = (undefined8 *)FUN_1800b80c0(local_148,uVar7);
    FUN_180024b50(local_108,lVar22);
    local_e8 = *puVar8;
    uStack_e0 = puVar8[1];
    local_d8 = puVar8[2];
    local_d0 = puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    *(undefined1 *)puVar8 = 0;
    uVar7 = FUN_18003a390(local_1c8,iVar6);
    FUN_180024b50(&local_1a8,uVar7);
    local_2c8 = &local_188;
    FUN_180024b50(&local_188,local_108);
    FUN_180024b50(&local_168,&local_e8);
    if (puStack_2b8 == local_2b0) {
      FUN_1800ba870(&local_2c0,puStack_2b8,&local_1a8);
    }
    else {
      *puStack_2b8 = 0;
      puStack_2b8[1] = 0;
      puStack_2b8[2] = 0;
      puStack_2b8[3] = 0;
      *puStack_2b8 = CONCAT71(uStack_1a7,local_1a8);
      puStack_2b8[1] = local_1a0;
      puStack_2b8[2] = local_198;
      puStack_2b8[3] = local_190;
      local_198 = 0;
      local_190 = 0xf;
      local_1a8 = 0;
      puStack_2b8[4] = 0;
      puStack_2b8[5] = 0;
      puStack_2b8[6] = 0;
      puStack_2b8[7] = 0;
      puStack_2b8[4] = local_188;
      puStack_2b8[5] = uStack_180;
      puStack_2b8[6] = local_178;
      puStack_2b8[7] = local_170;
      local_178 = 0;
      local_170 = 0xf;
      local_188 = local_188 & 0xffffffffffffff00;
      puStack_2b8[8] = 0;
      puStack_2b8[9] = 0;
      puStack_2b8[10] = 0;
      puStack_2b8[0xb] = 0;
      puStack_2b8[8] = CONCAT71(uStack_167,local_168);
      puStack_2b8[9] = local_160;
      puStack_2b8[10] = local_158;
      puStack_2b8[0xb] = local_150;
      local_158 = 0;
      local_150 = 0xf;
      local_168 = 0;
      puStack_2b8 = puStack_2b8 + 0xc;
    }
    FUN_18000f890(&local_168);
    FUN_18000f890(&local_188);
    FUN_18000f890(&local_1a8);
    FUN_18000f890(local_1c8);
    FUN_18000f890(&local_e8);
    FUN_18000f890(local_108);
    FUN_18000f890(local_148);
    iVar6 = iVar6 + 1;
  }
LAB_1800b870a:
  puVar19 = auStack_2e8;
  pcVar24 = DAT_180cd03a0;
  pcVar25 = DAT_180cd03a8;
  if (DAT_180cd03a0 != DAT_180cd03a8) {
    do {
      pcVar20 = *(char **)(puVar18 + 0x30);
      unaff_RSI = *(char **)(puVar18 + 0x28);
      bVar29 = unaff_RSI == pcVar20;
      if (!bVar29) {
        pcVar14 = *(char **)(pcVar24 + 0x18);
        pcVar21 = *(char **)(pcVar24 + 0x10);
        do {
          pcVar10 = pcVar24;
          if (pcVar14 < &DAT_00000010) {
LAB_1800b8ef8:
            pcVar24 = pcVar10;
          }
          else {
            pcVar10 = *(char **)pcVar24;
          }
          _Size = *(char **)(unaff_RSI + 0x10);
          if (*(ulonglong *)(unaff_RSI + 0x18) < 0x10) {
            _Buf1 = unaff_RSI;
          }
          else {
            _Buf1 = *(char **)unaff_RSI;
          }
          if (_Size == pcVar21) {
            if (_Size == (char *)0x0) break;
            *(undefined8 *)(puVar18 + -8) = 0x1800b8f1d;
            iVar6 = memcmp(_Buf1,pcVar10,(size_t)_Size);
            if (iVar6 == 0) break;
          }
          unaff_RSI = unaff_RSI + 0x60;
        } while (unaff_RSI != pcVar20);
        bVar29 = unaff_RSI == pcVar20;
      }
      pcVar24[0x60] = !bVar29;
      if ((!bVar29) && (pcVar24 != unaff_RSI)) {
        pcVar21 = unaff_RSI + 0x20;
        if (0xf < *(ulonglong *)(unaff_RSI + 0x38)) {
          pcVar21 = *(char **)pcVar21;
        }
        uVar7 = *(undefined8 *)(unaff_RSI + 0x30);
        *(undefined8 *)(puVar18 + -8) = 0x1800b8f5b;
        FUN_180029840(pcVar24 + 0x20,pcVar21,uVar7);
        pcVar21 = unaff_RSI + 0x40;
        if (0xf < *(ulonglong *)(unaff_RSI + 0x58)) {
          pcVar21 = *(char **)pcVar21;
        }
        uVar7 = *(undefined8 *)(unaff_RSI + 0x50);
        *(undefined8 *)(puVar18 + -8) = 0x1800b8f76;
        FUN_180029840(pcVar24 + 0x40,pcVar21,uVar7);
      }
      pcVar24 = pcVar24 + 0x78;
      puVar19 = puVar18;
    } while (pcVar24 != pcVar25);
  }
  puVar2 = *(ulonglong **)(puVar19 + 0x30);
  puVar12 = *(ulonglong **)(puVar19 + 0x28);
  fVar1 = DAT_1808ac34c;
  dVar5 = DAT_1808ac448;
  pcVar25 = DAT_180cd03a0;
  pcVar21 = DAT_180cd03a8;
  while( true ) {
    DAT_1808ac34c = fVar1;
    DAT_1808ac448 = dVar5;
    DAT_180cd03a8 = pcVar21;
    if (puVar12 == puVar2) break;
    if (pcVar25 != pcVar21) {
      uVar3 = puVar12[3];
      sVar9 = puVar12[2];
      pcVar20 = pcVar25;
      do {
        if (uVar3 < 0x10) {
          puVar16 = puVar12;
        }
        else {
          puVar16 = (ulonglong *)*puVar12;
        }
        _Size_00 = *(size_t *)(pcVar20 + 0x10);
        if (*(ulonglong *)(pcVar20 + 0x18) < 0x10) {
          pcVar14 = pcVar20;
        }
        else {
          pcVar14 = *(char **)pcVar20;
        }
        if (_Size_00 == sVar9) {
          if (_Size_00 == 0) goto LAB_1800b9237;
          *(undefined8 *)(puVar19 + -8) = 0x1800b900b;
          iVar6 = memcmp(pcVar14,puVar16,_Size_00);
          if (iVar6 == 0) goto LAB_1800b9237;
        }
        pcVar20 = pcVar20 + 0x78;
      } while (pcVar20 != pcVar21);
    }
    local_248 = 0;
    uStack_240 = 0;
    local_238 = 0;
    local_230 = 0;
    uVar3 = puVar12[2];
    if (puVar12[3] < 0x10) {
      puVar16 = puVar12;
    }
    else {
      puVar16 = (ulonglong *)*puVar12;
    }
    if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar19 + -8) = 0x1800b954b;
      FUN_180011990();
    }
    if (uVar3 < 0x10) {
      local_230 = 0xf;
      local_248 = *puVar16;
      uStack_240 = puVar16[1];
      local_238 = uVar3;
    }
    else {
      uVar17 = uVar3 | 0xf;
      if (uVar17 < 0x8000000000000000) {
        if (uVar17 < 0x16) {
          uVar17 = 0x16;
        }
      }
      else {
        uVar17 = 0x7fffffffffffffff;
      }
      *(undefined8 *)(puVar19 + -8) = 0x1800b909a;
      local_248 = FUN_18000fb70(uVar17 + 1);
      *(undefined8 *)(puVar19 + -8) = 0x1800b90b5;
      local_238 = uVar3;
      local_230 = uVar17;
      FUN_180540530(local_248,puVar16,uVar3 + 1);
    }
    puVar16 = puVar12 + 4;
    local_228 = 0;
    uStack_220 = 0;
    local_218 = 0;
    local_210 = 0;
    uVar3 = puVar12[6];
    if (0xf < puVar12[7]) {
      puVar16 = (ulonglong *)*puVar16;
    }
    if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar19 + -8) = &UNK_1800b955d;
      FUN_180011990();
    }
    if (uVar3 < 0x10) {
      local_210 = 0xf;
      local_228 = *puVar16;
      uStack_220 = puVar16[1];
      local_218 = uVar3;
    }
    else {
      uVar17 = uVar3 | 0xf;
      if (uVar17 < 0x8000000000000000) {
        if (uVar17 < 0x16) {
          uVar17 = 0x16;
        }
      }
      else {
        uVar17 = 0x7fffffffffffffff;
      }
      *(undefined8 *)(puVar19 + -8) = 0x1800b9126;
      local_228 = FUN_18000fb70(uVar17 + 1);
      *(undefined8 *)(puVar19 + -8) = 0x1800b9141;
      local_218 = uVar3;
      local_210 = uVar17;
      FUN_180540530(local_228,puVar16,uVar3 + 1);
    }
    puVar16 = puVar12 + 8;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    uVar3 = puVar12[10];
    if (0xf < puVar12[0xb]) {
      puVar16 = (ulonglong *)*puVar16;
    }
    if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar19 + -8) = 0x1800b9557;
      FUN_180011990();
    }
    if (uVar3 < 0x10) {
      local_1f0 = 0xf;
      local_208 = *puVar16;
      uStack_200 = puVar16[1];
      local_1f8 = uVar3;
    }
    else {
      uVar17 = uVar3 | 0xf;
      if (uVar17 < 0x8000000000000000) {
        if (uVar17 < 0x16) {
          uVar17 = 0x16;
        }
      }
      else {
        uVar17 = 0x7fffffffffffffff;
      }
      *(undefined8 *)(puVar19 + -8) = 0x1800b91b2;
      local_208 = FUN_18000fb70(uVar17 + 1);
      *(undefined8 *)(puVar19 + -8) = 0x1800b91cd;
      local_1f8 = uVar3;
      local_1f0 = uVar17;
      FUN_180540530(local_208,puVar16,uVar3 + 1);
    }
    local_1e8 = 1;
    local_1e4 = 0;
    local_1dc = 0xbf800000;
    local_1d8 = 0;
    if (DAT_180cd03a8 == DAT_180cd03b0) {
      *(undefined8 *)(puVar19 + -8) = 0x1800b9214;
      FUN_1800baae0(DAT_180cd03a8,DAT_180cd03a8,&local_248);
    }
    else {
      *(undefined8 *)(puVar19 + -8) = 0x1800b91fe;
      FUN_1800badd0(DAT_180cd03a8,&local_248);
      DAT_180cd03a8 = DAT_180cd03a8 + 0x78;
    }
    *(undefined8 *)(puVar19 + -8) = 0x1800b921e;
    FUN_18000f890(&local_208);
    *(undefined8 *)(puVar19 + -8) = 0x1800b9227;
    FUN_18000f890(&local_228);
    *(undefined8 *)(puVar19 + -8) = 0x1800b9230;
    FUN_18000f890(&local_248);
    pcVar25 = DAT_180cd03a0;
LAB_1800b9237:
    puVar12 = puVar12 + 0xc;
    fVar1 = DAT_1808ac34c;
    dVar5 = DAT_1808ac448;
    pcVar21 = DAT_180cd03a8;
  }
  if (pcVar25 != pcVar21) {
    do {
      if (pcVar25[0x60] == '\0') {
        fVar31 = 0.0;
      }
      else {
        fVar31 = fVar1;
      }
      if (*(float *)(pcVar25 + 0x6c) != fVar31) {
        *(float *)(pcVar25 + 0x6c) = fVar31;
        *(undefined4 *)(pcVar25 + 0x68) = *(undefined4 *)(pcVar25 + 100);
        *(double *)(pcVar25 + 0x70) = param_1;
      }
      fVar30 = (float)((param_1 - *(double *)(pcVar25 + 0x70)) / dVar5);
      *(float *)(puVar19 + 0x48) = fVar30;
      *(undefined4 *)(puVar19 + 0x20) = 0x3f800000;
      *(undefined4 *)(puVar19 + 0x40) = 0;
      pfVar15 = (float *)(puVar19 + 0x40);
      if (0.0 <= fVar30) {
        pfVar15 = (float *)(puVar19 + 0x48);
      }
      pfVar13 = (float *)(puVar19 + 0x20);
      if (fVar30 <= fVar1) {
        pfVar13 = pfVar15;
      }
      fVar30 = fVar1 - *pfVar13;
      *(float *)(pcVar25 + 100) =
           (fVar1 - fVar30 * fVar30 * fVar30) * (fVar31 - *(float *)(pcVar25 + 0x68)) +
           *(float *)(pcVar25 + 0x68);
      pcVar25 = pcVar25 + 0x78;
    } while (pcVar25 != pcVar21);
    pcVar25 = DAT_180cd03a0;
  }
  pcVar21 = DAT_180cd03a8;
  fVar1 = DAT_1808abfbc;
  if (pcVar25 != DAT_180cd03a8) {
    do {
      if ((pcVar25[0x60] == '\0') && (*(float *)(pcVar25 + 100) <= DAT_1808abfbc)) break;
      pcVar25 = pcVar25 + 0x78;
    } while (pcVar25 != DAT_180cd03a8);
    if (pcVar25 != DAT_180cd03a8) {
      pcVar20 = pcVar25 + 0x78;
      pcVar14 = DAT_180cd03a8;
      if (pcVar20 != DAT_180cd03a8) {
        do {
          if ((pcVar20[0x60] != '\0') || (fVar1 < *(float *)(pcVar20 + 100))) {
            *(undefined8 *)(puVar19 + -8) = 0x1800b9391;
            FUN_18002ba60(pcVar25,pcVar20);
            *(undefined8 *)(puVar19 + -8) = 0x1800b939e;
            FUN_18002ba60(pcVar25 + 0x20,pcVar20 + 0x20);
            *(undefined8 *)(puVar19 + -8) = 0x1800b93ab;
            FUN_18002ba60(pcVar25 + 0x40,pcVar20 + 0x40);
            pcVar25[0x60] = pcVar20[0x60];
            *(undefined4 *)(pcVar25 + 100) = *(undefined4 *)(pcVar20 + 100);
            *(undefined4 *)(pcVar25 + 0x68) = *(undefined4 *)(pcVar20 + 0x68);
            *(undefined4 *)(pcVar25 + 0x6c) = *(undefined4 *)(pcVar20 + 0x6c);
            *(undefined8 *)(pcVar25 + 0x70) = *(undefined8 *)(pcVar20 + 0x70);
            pcVar25 = pcVar25 + 0x78;
          }
          pcVar20 = pcVar20 + 0x78;
        } while (pcVar20 != pcVar21);
        pcVar14 = DAT_180cd03a8;
        if (pcVar25 == pcVar21) goto LAB_1800b947c;
      }
      for (; pcVar20 = DAT_180cd03a8, pcVar21 != DAT_180cd03a8; pcVar21 = pcVar21 + 0x78) {
        *(undefined8 *)(puVar19 + -8) = 0x1800b93fb;
        DAT_180cd03a8 = pcVar14;
        FUN_18002ba60(pcVar25,pcVar21);
        *(undefined8 *)(puVar19 + -8) = 0x1800b9408;
        FUN_18002ba60(pcVar25 + 0x20,pcVar21 + 0x20);
        *(undefined8 *)(puVar19 + -8) = 0x1800b9415;
        FUN_18002ba60(pcVar25 + 0x40,pcVar21 + 0x40);
        pcVar25[0x60] = pcVar21[0x60];
        *(undefined4 *)(pcVar25 + 100) = *(undefined4 *)(pcVar21 + 100);
        *(undefined4 *)(pcVar25 + 0x68) = *(undefined4 *)(pcVar21 + 0x68);
        *(undefined4 *)(pcVar25 + 0x6c) = *(undefined4 *)(pcVar21 + 0x6c);
        *(undefined8 *)(pcVar25 + 0x70) = *(undefined8 *)(pcVar21 + 0x70);
        pcVar25 = pcVar25 + 0x78;
        pcVar14 = DAT_180cd03a8;
        DAT_180cd03a8 = pcVar20;
      }
      DAT_180cd03a8 = pcVar14;
      for (pcVar21 = pcVar25; pcVar21 != pcVar14; pcVar21 = pcVar21 + 0x78) {
        *(undefined8 *)(puVar19 + -8) = 0x1800b945b;
        FUN_18000f890(pcVar21 + 0x40);
        *(undefined8 *)(puVar19 + -8) = 0x1800b9464;
        FUN_18000f890(pcVar21 + 0x20);
        *(undefined8 *)(puVar19 + -8) = 0x1800b946c;
        FUN_18000f890(pcVar21);
      }
      DAT_180cd03a8 = pcVar25;
    }
  }
LAB_1800b947c:
  lVar26 = *(longlong *)(puVar19 + 0x28);
  if (lVar26 != 0) {
    lVar22 = *(longlong *)(puVar19 + 0x30);
    for (; lVar26 != lVar22; lVar26 = lVar26 + 0x60) {
      *(undefined8 *)(puVar19 + -8) = 0x1800b949d;
      FUN_18000f890(lVar26 + 0x40);
      *(undefined8 *)(puVar19 + -8) = 0x1800b94a6;
      FUN_18000f890(lVar26 + 0x20);
      *(undefined8 *)(puVar19 + -8) = 0x1800b94ae;
      FUN_18000f890(lVar26);
    }
    lVar26 = *(longlong *)(puVar19 + 0x28);
    lVar22 = lVar26;
    if ((0xfff < (ulonglong)((*(longlong *)(puVar19 + 0x38) - lVar26 >> 5) << 5)) &&
       (lVar22 = *(longlong *)(lVar26 + -8), 0x1f < (lVar26 - lVar22) - 8U)) {
      lVar22 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar19 = puVar19 + 8;
    }
    *(undefined8 *)(puVar19 + -8) = 0x1800b9510;
    thunk_FUN_1803d64e0(lVar22);
  }
  *(undefined8 *)(puVar19 + -8) = 0x1800b951f;
  return;
LAB_1800b8950:
  ppppuVar11 = &local_268;
  if ((char *)0xf < pcVar10) {
    ppppuVar11 = ppppuVar23;
  }
  if (*(char *)((longlong)ppppuVar11 + (longlong)pcVar20) < '0') goto LAB_1800b89a2;
  ppppuVar11 = &local_268;
  if ((char *)0xf < pcVar10) {
    ppppuVar11 = ppppuVar23;
  }
  if (('9' < *(char *)((longlong)ppppuVar11 + (longlong)pcVar20)) ||
     (&DAT_00000004 < pcVar20 + -0x12)) goto LAB_1800b89a2;
  ppppuVar11 = &local_268;
  if ((char *)0xf < pcVar10) {
    ppppuVar11 = ppppuVar23;
  }
  iVar27 = (int)*(char *)((longlong)ppppuVar11 + (longlong)pcVar20) + (iVar27 * 5 + -0x18) * 2;
  pcVar20 = pcVar20 + 1;
  if (unaff_RSI <= pcVar20) goto LAB_1800b89a2;
  goto LAB_1800b8950;
LAB_1800b89a2:
  if ((pcVar20 == &DAT_00000013) || (unaff_RSI <= pcVar20)) {
LAB_1800b89d1:
    iVar6 = -1;
  }
  else {
    ppppuVar11 = &local_268;
    if ((char *)0xf < pcVar10) {
      ppppuVar11 = ppppuVar23;
    }
    if (*(char *)((longlong)ppppuVar11 + (longlong)pcVar20) != '.') goto LAB_1800b89d1;
    iVar6 = -1;
    if (iVar27 - 1U < 0x3f) {
      iVar6 = iVar27;
    }
  }
LAB_1800b89d6:
  if (iVar6 < 0) {
LAB_1800b89e5:
    pcVar14 = &DAT_00000009;
    if (unaff_RSI < &DAT_00000009) {
      pcVar14 = unaff_RSI;
    }
    ppppuVar11 = &local_268;
    if ((char *)0xf < pcVar10) {
      ppppuVar11 = ppppuVar23;
    }
    iVar6 = memcmp(ppppuVar11,"legitbot.",(size_t)pcVar14);
    if ((iVar6 == 0) && (&DAT_00000008 < pcVar14)) {
      if (unaff_RSI < &DAT_00000009) {
LAB_1800b954c:
                    /* WARNING: Subroutine does not return */
        FUN_18002a1a0();
      }
      pcVar14 = &DAT_00000007;
      if (unaff_RSI + -9 < &DAT_00000007) {
        pcVar14 = unaff_RSI + -9;
      }
      ppppuVar11 = &local_268;
      if ((char *)0xf < pcVar10) {
        ppppuVar11 = ppppuVar23;
      }
      iVar6 = memcmp((void *)((longlong)ppppuVar11 + 9),"global.",(size_t)pcVar14);
      if ((iVar6 == 0) && (&DAT_00000007 <= pcVar14)) {
        iVar27 = 0;
      }
      else {
        if (&DAT_00000009 < unaff_RSI) {
          ppppuVar11 = &local_268;
          if ((char *)0xf < pcVar10) {
            ppppuVar11 = ppppuVar23;
          }
          if ((*(char *)((longlong)ppppuVar11 + 9) == 'g') && ((char *)0xa < unaff_RSI)) {
            pcVar20 = (char *)0xa;
            iVar6 = 0;
            while( true ) {
              ppppuVar11 = &local_268;
              if ((char *)0xf < pcVar10) {
                ppppuVar11 = ppppuVar23;
              }
              if (pcVar20[(longlong)ppppuVar11] < '0') break;
              ppppuVar11 = &local_268;
              if ((char *)0xf < pcVar10) {
                ppppuVar11 = ppppuVar23;
              }
              if (('9' < pcVar20[(longlong)ppppuVar11]) || (&DAT_00000004 < pcVar20 + -9)) break;
              ppppuVar11 = &local_268;
              if ((char *)0xf < pcVar10) {
                ppppuVar11 = ppppuVar23;
              }
              iVar6 = (int)pcVar20[(longlong)ppppuVar11] + (iVar6 * 5 + -0x18) * 2;
              pcVar20 = pcVar20 + 1;
              if (unaff_RSI <= pcVar20) break;
            }
            if ((pcVar20 != (char *)0xa) && (pcVar20 < unaff_RSI)) {
              ppppuVar11 = &local_268;
              if ((char *)0xf < pcVar10) {
                ppppuVar11 = ppppuVar23;
              }
              if (pcVar20[(longlong)ppppuVar11] == '.') {
                iVar27 = -1;
                if (iVar6 - 1U < 0x3f) {
                  iVar27 = iVar6;
                }
                goto LAB_1800b8b26;
              }
            }
          }
        }
        iVar27 = -1;
      }
LAB_1800b8b26:
      if (-1 < iVar27) {
        bVar29 = iVar27 == DAT_1809e85cc;
        goto LAB_1800b8b30;
      }
    }
LAB_1800b8b6d:
    if (pcVar21[0x70] == '\0') {
      FUN_1800b7e80(local_128,&local_268);
    }
    else {
      FUN_180013350();
    }
    FUN_18000f4c0(local_148);
    lVar26 = FUN_1800fbdb0(local_298,&local_268);
    pcVar20 = pcVar21 + 0xd0;
    if (*pcVar20 != '\0') {
      cVar28 = pcVar21[0xe0];
      goto LAB_1800b8bf4;
    }
    pcVar20 = pcVar21 + 0xa0;
    if (*pcVar20 == '\0') {
      iVar6 = *(int *)(lVar26 + 8);
      if (iVar6 == 1) {
LAB_1800b8c1d:
        pcVar20 = &DAT_1806eab48;
        if (pcVar21[0x68] != '\0') {
          pcVar20 = &DAT_1806eab4c;
        }
        goto LAB_1800b8c34;
      }
      if (iVar6 == 2) {
        cVar28 = '\x01';
        pcVar20 = "%d";
      }
      else {
        if (iVar6 != 3) goto LAB_1800b8c1d;
        cVar28 = '\0';
        pcVar20 = "%.1f";
      }
LAB_1800b8bf4:
      uVar7 = FUN_1800b81c0(local_1c8,*(undefined4 *)(pcVar21 + 0x6c),pcVar20,cVar28);
      FUN_18002ba60(local_148,uVar7);
      FUN_18000f890(local_1c8);
    }
    else {
LAB_1800b8c34:
      FUN_180024ac0(local_148,pcVar20);
    }
    uVar7 = FUN_180024b50(local_288,local_148);
    puVar12 = (ulonglong *)FUN_1800b80c0(local_108,uVar7);
    FUN_180024b50(&local_1a8,local_128);
    local_188 = *puVar12;
    uStack_180 = puVar12[1];
    local_178 = puVar12[2];
    local_170 = puVar12[3];
    puVar12[2] = 0;
    puVar12[3] = 0xf;
    *(undefined1 *)puVar12 = 0;
    fVar1 = *(float *)(pcVar21 + 0x6c);
    iVar6 = _scprintf("%f",(double)fVar1);
    pcVar20 = (char *)(longlong)iVar6;
    FUN_1800969e0(local_1c8,pcVar20,0);
    param0 = (char ****)local_1c8;
    if (0xf < local_1b0) {
      param0 = local_1c8[0];
    }
    sprintf_s((char *)param0,(size_t)(pcVar20 + 1),"%f",(double)fVar1);
    uVar7 = FUN_180073a70(local_a8,&local_268,&DAT_1806eabcc);
    uVar7 = FUN_180066820(local_c8,uVar7,local_1c8);
    FUN_180024b50(&local_248,uVar7);
    local_2c8 = &local_228;
    FUN_180024b50(&local_228,&local_1a8);
    FUN_180024b50(&local_208,&local_188);
    if (puStack_2b8 == local_2b0) {
      FUN_1800ba870(&local_2c0,puStack_2b8,&local_248);
    }
    else {
      *puStack_2b8 = 0;
      puStack_2b8[1] = 0;
      puStack_2b8[2] = 0;
      puStack_2b8[3] = 0;
      *puStack_2b8 = local_248;
      puStack_2b8[1] = uStack_240;
      puStack_2b8[2] = local_238;
      puStack_2b8[3] = local_230;
      local_238 = 0;
      local_230 = 0xf;
      local_248 = local_248 & 0xffffffffffffff00;
      puStack_2b8[4] = 0;
      puStack_2b8[5] = 0;
      puStack_2b8[6] = 0;
      puStack_2b8[7] = 0;
      puStack_2b8[4] = local_228;
      puStack_2b8[5] = uStack_220;
      puStack_2b8[6] = local_218;
      puStack_2b8[7] = local_210;
      local_218 = 0;
      local_210 = 0xf;
      local_228 = local_228 & 0xffffffffffffff00;
      puStack_2b8[8] = 0;
      puStack_2b8[9] = 0;
      puStack_2b8[10] = 0;
      puStack_2b8[0xb] = 0;
      puStack_2b8[8] = local_208;
      puStack_2b8[9] = uStack_200;
      puStack_2b8[10] = local_1f8;
      puStack_2b8[0xb] = local_1f0;
      local_1f8 = 0;
      local_1f0 = 0xf;
      local_208 = local_208 & 0xffffffffffffff00;
      puStack_2b8 = puStack_2b8 + 0xc;
    }
    FUN_18000f890(&local_208);
    FUN_18000f890(&local_228);
    FUN_18000f890(&local_248);
    FUN_18000f890(local_c8);
    FUN_18000f890(local_a8);
    FUN_18000f890(local_1c8);
    FUN_18000f890(&local_188);
    FUN_18000f890(&local_1a8);
    FUN_18000f890(local_108);
    FUN_18000f890(local_148);
    FUN_18000f890(local_128);
    if (local_250 < &DAT_00000010) goto LAB_1800b8877;
    pcVar24 = local_250 + 1;
    ppppuVar11 = local_268;
    if ((char *)0xfff < pcVar24) {
      ppppuVar11 = (undefined8 ****)local_268[-1];
      if (0x1f < (ulonglong)((longlong)local_268 + (-8 - (longlong)ppppuVar11))) {
LAB_1800b8ef1:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar18 = auStack_2e0;
        goto LAB_1800b8ef8;
      }
      pcVar24 = local_250 + 0x28;
    }
  }
  else {
    bVar29 = iVar6 == DAT_1809e8f98;
LAB_1800b8b30:
    if (bVar29) goto LAB_1800b8b6d;
    if (pcVar10 < &DAT_00000010) goto LAB_1800b8877;
    pcVar24 = pcVar10 + 1;
    ppppuVar11 = ppppuVar23;
    if ((char *)0xfff < pcVar24) {
      ppppuVar11 = (undefined8 ****)ppppuVar23[-1];
      pcVar20 = (char *)((longlong)ppppuVar23 + (-8 - (longlong)ppppuVar11));
      if (&DAT_0000001f < pcVar20) goto LAB_1800b8ef1;
      pcVar24 = pcVar10 + 0x28;
    }
  }
LAB_1800b886b:
  thunk_FUN_1803d64e0(ppppuVar11,pcVar24);
LAB_1800b8877:
  pcVar21 = pcVar21 + 0xe4;
  if (pcVar21 == &DAT_180960e30) goto LAB_1800b870a;
  goto LAB_1800b8770;
}



/* ===== 1800b9560 FUN_1800b9560 ===== */

void FUN_1800b9560(longlong param_1)

{
  FUN_18000f890(param_1 + 0x40);
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 1800b95a0 FUN_1800b95a0 ===== */

void FUN_1800b95a0(longlong param_1)

{
  FUN_18000f890(param_1 + 0x40);
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 1800b95d0 FUN_1800b95d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800b95d0(longlong param_1,float *param_2,float param_3)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  longlong lVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_308 [8];
  undefined1 auStack_300 [24];
  float local_2e8;
  char *local_2e0;
  char *local_2d8;
  undefined8 *local_2d0;
  undefined8 local_2c8;
  float local_2c0;
  undefined4 local_2b8;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288 [2];
  float local_280 [2];
  float local_278;
  float local_274;
  float local_270 [2];
  longlong *local_268;
  longlong *plStack_260;
  longlong *local_258;
  float local_250 [6];
  longlong local_238;
  longlong local_230;
  longlong local_228;
  float fStack_220;
  float fStack_21c;
  float local_218;
  undefined4 uStack_214;
  undefined4 *local_210;
  undefined4 *local_208;
  float *local_1f8;
  float *local_1f0;
  longlong *local_1e8;
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1c0;
  float *local_1b8;
  undefined4 **local_1b0;
  float *local_1a8;
  float *local_1a0;
  longlong *local_198;
  float *local_190;
  undefined1 local_188 [8];
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 **local_128;
  float *pfStack_120;
  longlong *local_118;
  float *local_110;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_308;
  local_280[0] = param_3;
  local_238 = param_1;
  FUN_1800b8290();
  puVar23 = auStack_308;
  if (local_238 == 0) goto LAB_1800ba124;
  plVar11 = (longlong *)FUN_1800ad890(local_188);
  dVar2 = (double)*plVar11 / DAT_1808ac9a0;
  if (DAT_18095ce84 != '\0') {
    FUN_1800b8480(SUB84(dVar2,0));
  }
  lVar19 = DAT_180cd03a8;
  fVar10 = DAT_1808ac34c;
  fVar27 = DAT_1808ac1f4;
  for (lVar12 = DAT_180cd03a0; lVar12 != DAT_180cd03a8; lVar12 = lVar12 + 0x78) {
    if (*(char *)(lVar12 + 0x60) != '\0') {
      bVar3 = true;
      goto LAB_1800b96c1;
    }
  }
  bVar3 = false;
LAB_1800b96c1:
  if ((DAT_18095ce84 == '\0') || ((!bVar3 && (DAT_18091a190 == '\0')))) {
    fVar31 = 0.0;
  }
  else {
    fVar31 = DAT_1808ac34c;
  }
  if (DAT_1809e9c88 == '\0') {
    DAT_1809e9c88 = '\x01';
    DAT_1809e9c74 = fVar31;
    DAT_1809e9c78 = fVar31;
    DAT_1809e9c80 = dVar2;
  }
  else {
    if (DAT_1809e9c78 == fVar31) {
    }
    else {
      DAT_1809e9c74 = DAT_1809e9c70;
      DAT_1809e9c78 = fVar31;
      DAT_1809e9c80 = dVar2;
    }
    local_250[2] = (float)((dVar2 - DAT_1809e9c80) / DAT_1808ac448);
    local_250[4] = 1.0;
    local_250[0] = 0.0;
    pfVar17 = local_250;
    if (0.0 <= local_250[2]) {
      pfVar17 = local_250 + 2;
    }
    pfVar16 = local_250 + 4;
    if (local_250[2] <= DAT_1808ac34c) {
      pfVar16 = pfVar17;
    }
    fVar29 = DAT_1808ac34c - *pfVar16;
    fVar31 = (DAT_1808ac34c - fVar29 * fVar29 * fVar29) * (fVar31 - DAT_1809e9c74) + DAT_1809e9c74;
  }
  DAT_1809e9c70 = fVar31;
  if (fVar31 <= 0.0) {
    puVar23 = auStack_308;
    if (DAT_18095ce84 == '\0') {
      puVar23 = auStack_308;
      lVar12 = DAT_180cd03a0;
      if (DAT_180cd03a0 != DAT_180cd03a8) {
        do {
          FUN_18000f890(lVar12 + 0x40);
          FUN_18000f890(lVar12 + 0x20);
          FUN_18000f890(lVar12);
          lVar12 = lVar12 + 0x78;
        } while (lVar12 != lVar19);
        DAT_180cd03a8 = DAT_180cd03a0;
        puVar23 = auStack_308;
      }
    }
    goto LAB_1800ba124;
  }
  local_2a0 = 3.0;
  local_2a8 = 0.5;
  pfVar17 = &local_2a8;
  if (DAT_1808ac1f4 <= param_3) {
    pfVar17 = local_280;
  }
  pfVar16 = &local_2a0;
  if (param_3 <= DAT_1808ac658) {
    pfVar16 = pfVar17;
  }
  local_2a8 = *pfVar16;
  lVar12 = DAT_181107a38;
  if (DAT_181107a38 == 0) {
    lVar12 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_230 = DAT_181107a20;
  if (DAT_181107a20 == 0) {
    local_230 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  fVar32 = local_2a8 * DAT_1808ac930;
  fVar30 = local_2a8 * DAT_1808ac91c;
  local_100 = (float)(_DAT_180960f74 & 0xff) * DAT_1808abfe4;
  local_fc = (float)(_DAT_180960f74 >> 8 & 0xff) * DAT_1808abfe4;
  local_f8 = (float)(_DAT_180960f74 >> 0x10 & 0xff) * DAT_1808abfe4;
  local_f4 = (float)(_DAT_180960f74 >> 0x18) * DAT_1808abfe4;
  local_f0 = (float)(DAT_180960ec0 & 0xff) * DAT_1808abfe4;
  local_ec = (float)(DAT_180960ec0 >> 8 & 0xff) * DAT_1808abfe4;
  local_e8 = (float)(DAT_180960ec0 >> 0x10 & 0xff) * DAT_1808abfe4;
  local_e4 = (float)(DAT_180960ec0 >> 0x18) * DAT_1808abfe4;
  local_2b8 = 0;
  local_2c8 = 0;
  local_2d0 = (undefined8 *)0x0;
  local_2d8 = (char *)0x0;
  local_2e0 = "Hotkeys";
  local_2e8 = 0.0;
  local_278 = fVar32;
  local_274 = fVar30;
  FUN_18040a2f0(local_270,lVar12,fVar32,DAT_1808acd08);
  local_2e8 = (float)CONCAT31(local_2e8._1_3_,1);
  puVar13 = (undefined8 *)
            FUN_1800baf50(&local_128,"widget_hotkeys",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M24 48C10 48 0 59 0 72L0 120C0 134 10 144 24 144L24 256L24 384C24 415 49 440 80 440L128 440C128 453 138 464 152 464L200 464C213 464 224 453 224 440L224 392C224 379 213 368 200 368L152 368C138 368 128 379 128 392L80 392C75 392 72 389 72 384L72 280L128 280C128 294 138 304 152 304L200 304C213 304 224 294 224 280L224 232C224 219 213 208 200 208L152 208C138 208 128 219 128 232L72 232L72 144C85 144 96 134 96 120L96 72C96 59 85 48 72 48L24 48ZM160 96C160 114 174 128 192 128L480 128C497 128 512 114 512 96C512 79 497 64 480 64L192 64C174 64 160 79 160 96ZM288 256C288 274 302 288 320 288L480 288C497 288 512 274 512 256C512 239 497 224 480 224L320 224C302 224 288 239 288 256ZM288 416C288 434 302 448 320 448L480 448C497 448 512 434 512 416C512 399 497 384 480 384L320 384C302 384 288 399 288 416Z\"/></svg>"
                          ,local_2a8);
  local_150 = *puVar13;
  uStack_148 = puVar13[1];
  local_140 = puVar13[2];
  uStack_138 = puVar13[3];
  local_130 = puVar13[4];
  fVar33 = local_2a8 * DAT_1808ac750;
  fVar29 = local_2a8 * DAT_1808ac844 + local_2a8 * DAT_1808ac844 + fVar33 + fVar33 + local_2a8 +
           (float)local_130 + local_270[0];
  local_270[0] = local_2a8 * DAT_1808ac838 + fVar32;
  local_268 = (longlong *)0x0;
  plStack_260 = (longlong *)0x0;
  local_258 = (longlong *)0x0;
  local_290 = local_2a8 * DAT_1808ac7ac;
  local_288[0] = local_290 + fVar30;
  local_28c = local_2a8 * DAT_1808ac8b0;
  fVar30 = local_28c + local_28c;
  local_128 = (undefined4 **)0x0;
  pfStack_120 = (float *)0x0;
  local_29c = fVar29;
  local_128 = (undefined4 **)FUN_18000fb70(0x20);
  uVar8 = s_widget_toggle_on_1806eabe0._12_4_;
  uVar7 = s_widget_toggle_on_1806eabe0._8_4_;
  uVar6 = s_widget_toggle_on_1806eabe0._4_4_;
  local_118 = (longlong *)0x10;
  local_110 = (float *)0x1f;
  *(undefined4 *)local_128 = s_widget_toggle_on_1806eabe0._0_4_;
  *(undefined4 *)((longlong)local_128 + 4) = uVar6;
  *(undefined4 *)(local_128 + 1) = uVar7;
  *(undefined4 *)((longlong)local_128 + 0xc) = uVar8;
  *(char *)(local_128 + 2) = '\0';
  puVar14 = (undefined4 *)
            FUN_18039ed80(&local_228,&local_128,
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M192 64C86 64 0 150 0 256C0 362 86 448 192 448L384 448C490 448 576 362 576 256C576 150 490 64 384 64L192 64ZM384 160C418 160 449 179 467 208C484 238 484 275 467 304C449 334 418 352 384 352C349 352 318 334 300 304C283 275 283 238 300 208C318 179 349 160 384 160Z\"/></svg>"
                          ,(int)(fVar30 + fVar27));
  local_180 = *puVar14;
  uStack_17c = puVar14[1];
  uStack_178 = puVar14[2];
  uStack_174 = puVar14[3];
  local_170 = *(undefined8 *)(puVar14 + 4);
  FUN_18000f890(&local_128);
  fVar32 = DAT_1808ac540;
  fVar30 = local_28c * DAT_1808ac540;
  local_128 = (undefined4 **)0x0;
  pfStack_120 = (float *)0x0;
  local_128 = (undefined4 **)FUN_18000fb70(0x20);
  uVar8 = s_widget_toggle_off_1806eac08._12_4_;
  uVar7 = s_widget_toggle_off_1806eac08._8_4_;
  uVar6 = s_widget_toggle_off_1806eac08._4_4_;
  local_118 = (longlong *)0x11;
  local_110 = (float *)0x1f;
  *(undefined4 *)local_128 = s_widget_toggle_off_1806eac08._0_4_;
  *(undefined4 *)((longlong)local_128 + 4) = uVar6;
  *(undefined4 *)(local_128 + 1) = uVar7;
  *(undefined4 *)((longlong)local_128 + 0xc) = uVar8;
  *(char *)(local_128 + 2) = s_widget_toggle_off_1806eac08[0x10];
  *(char *)((longlong)local_128 + 0x11) = '\0';
  puVar14 = (undefined4 *)
            FUN_18039ed80(&local_228,&local_128,
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M384 128C454 128 512 186 512 256C512 327 454 384 384 384L192 384C121 384 64 327 64 256C64 186 121 128 192 128L384 128ZM576 256C576 150 490 64 384 64L192 64C86 64 0 150 0 256C0 362 86 448 192 448L384 448C490 448 576 362 576 256ZM192 352C226 352 257 334 275 304C292 275 292 238 275 208C257 179 226 160 192 160C157 160 126 179 108 208C91 238 91 275 108 304C126 334 157 352 192 352Z\"/></svg>"
                          ,(int)(fVar30 + fVar27));
  local_168 = *puVar14;
  uStack_164 = puVar14[1];
  uStack_160 = puVar14[2];
  uStack_15c = puVar14[3];
  local_158 = *(undefined8 *)(puVar14 + 4);
  FUN_18000f890(&local_128);
  lVar18 = DAT_180cd03a8;
  local_210 = &local_180;
  local_208 = &local_168;
  local_128 = &local_210;
  pfStack_120 = &local_28c;
  local_118 = &local_230;
  local_110 = &local_274;
  fVar27 = fVar29;
  fVar30 = 0.0;
  cVar4 = DAT_18095ce94;
  lVar19 = DAT_180cd03a0;
  while( true ) {
    plVar11 = local_268;
    DAT_18095ce94 = cVar4;
    if (lVar19 == lVar18) break;
    local_2a4 = 1.0;
    local_2a0 = 0.0;
    local_280[0] = ((*(float *)(lVar19 + 100) - DAT_1808ac140) * DAT_1808ac3c4) / DAT_1808ac27c;
    pfVar17 = &local_2a0;
    if (0.0 <= local_280[0]) {
      pfVar17 = local_280;
    }
    pfVar16 = &local_2a4;
    if (local_280[0] <= fVar10) {
      pfVar16 = pfVar17;
    }
    fVar27 = *pfVar16;
    if (DAT_18095ce90 == 1) {
      lVar15 = 0x20;
      lVar24 = 0x40;
    }
    else {
      lVar15 = 0x40;
      lVar24 = 0x20;
    }
    fVar28 = local_290 * fVar32;
    fVar26 = (float)FUN_1800ba280(&local_128,lVar15 + lVar19);
    fVar26 = fVar26 + fVar28;
    fVar28 = local_290 * fVar32;
    local_228 = lVar19;
    fStack_220 = fVar26;
    fStack_21c = (float)FUN_1800ba280(&local_128,lVar24 + lVar19);
    fStack_21c = fStack_21c + fVar28;
    local_218 = fVar27;
    if (plStack_260 == local_258) {
      FUN_1800435c0(&local_268,plStack_260,&local_228);
    }
    else {
      *plStack_260 = local_228;
      plStack_260[1] = CONCAT44(fStack_21c,fStack_220);
      plStack_260[2] = CONCAT44(uStack_214,fVar27);
      plStack_260 = plStack_260 + 3;
    }
    fVar28 = fVar30;
    if ((*(char *)(lVar19 + 0x60) != '\0') && (fVar28 = fVar26 + fVar33, fVar28 <= fVar30)) {
      fVar28 = fVar30;
    }
    lVar19 = lVar19 + 0x78;
    fVar27 = local_29c;
    fVar30 = fVar28;
    cVar4 = DAT_18095ce94;
  }
  for (; plVar11 != plStack_260; plVar11 = plVar11 + 3) {
    fVar32 = fVar30 + *(float *)((longlong)plVar11 + 0xc);
    if (fVar32 <= fVar29) {
      fVar32 = fVar29;
    }
    fVar29 = fVar32;
  }
  local_2a4 = 1.0;
  local_29c = 0.0;
  pfVar17 = &local_29c;
  if (0.0 <= DAT_18095ce88) {
    pfVar17 = &DAT_18095ce88;
  }
  pfVar16 = &local_2a4;
  if (DAT_18095ce88 <= fVar10) {
    pfVar16 = pfVar17;
  }
  fVar32 = *pfVar16 * *param_2;
  local_2a4 = 1.0;
  local_29c = 0.0;
  pfVar17 = &local_29c;
  if (0.0 <= DAT_18095ce8c) {
    pfVar17 = &DAT_18095ce8c;
  }
  pfVar16 = &local_2a4;
  if (DAT_18095ce8c <= fVar10) {
    pfVar16 = pfVar17;
  }
  fVar26 = *pfVar16;
  fVar28 = param_2[1];
  if ((DAT_18095ce95 != '\0') && (fVar27 <= fVar29)) {
    fVar27 = fVar29;
  }
  local_29c = fVar32;
  if (cVar4 != '\0') {
    local_29c = (fVar32 + fVar29) - fVar27;
  }
  local_2a0 = fVar32 + fVar29;
  uVar5 = (ulonglong)local_2c8 >> 0x20;
  local_2c8 = CONCAT44((int)uVar5,local_2a8);
  local_2d0 = &local_150;
  local_2d8 = "Hotkeys";
  local_2e8 = local_278;
  local_2e0 = (char *)lVar12;
  local_2c0 = fVar31;
  local_298 = fVar26 * fVar28;
  FUN_1800bb0c0(local_238,&local_29c,fVar27);
  plVar11 = plStack_260;
  puVar21 = auStack_308;
  puVar22 = auStack_308;
  fVar27 = local_2a8 * DAT_1808ac7ac + fVar26 * fVar28 + local_270[0];
  local_294 = fVar27;
  if (local_268 != plStack_260) {
    plVar20 = local_268;
    fVar29 = DAT_1808abfc8;
    fVar26 = local_288[0];
    fVar28 = local_2a8;
    do {
      fVar9 = DAT_1808ac1f4;
      lVar12 = *plVar20;
      if (fVar29 < *(float *)(plVar20 + 2)) {
        fVar27 = *(float *)(plVar20 + 2) * fVar31;
        if (DAT_18095ce90 == 1) {
          lVar19 = 0x20;
          lVar18 = 0x40;
        }
        else {
          lVar19 = 0x40;
          lVar18 = 0x20;
        }
        lVar19 = lVar19 + lVar12;
        fVar28 = fVar28 * DAT_1808ac838;
        fVar29 = fVar32 - (fVar10 - *(float *)(lVar12 + 100)) * fVar28;
        iVar25 = DAT_18095ce90;
        local_278 = fVar27;
        local_29c = (float)FUN_1800b7d20(&local_100,fVar27 * DAT_1808ac1f4);
        local_2a4 = (float)FUN_1800b7d20(&local_f0,fVar27);
        local_270[0] = fVar26 * fVar9;
        if (fVar28 <= fVar26 * fVar9) {
          local_270[0] = fVar28;
        }
        local_1f8 = &local_294;
        local_1f0 = local_288;
        local_1e8 = &local_238;
        local_1e0 = local_270;
        local_1d0 = &local_278;
        local_1c8 = &local_29c;
        local_1c0 = &local_290;
        local_1b8 = &local_2a8;
        local_1b0 = &local_210;
        local_1a8 = &local_28c;
        local_1a0 = &local_2a4;
        local_198 = &local_230;
        local_190 = &local_274;
        fVar27 = *(float *)(plVar20 + 1);
        local_1d8 = param_2;
        if ((cVar4 == '\0') || (iVar25 == 1)) {
          FUN_1800ba370(&local_1f8,fVar29,fVar27,lVar19);
          fVar27 = *(float *)((longlong)plVar20 + 0xc);
          fVar26 = fVar29 + fVar30;
          if (cVar4 != '\0') goto LAB_1800ba06c;
        }
        else {
          FUN_1800ba370(&local_1f8,((fVar29 + fVar30) - fVar27) - fVar33,fVar27,lVar19);
          fVar27 = *(float *)((longlong)plVar20 + 0xc);
LAB_1800ba06c:
          fVar26 = fVar29 + fVar30;
          if (DAT_18095ce90 == 1) {
            fVar26 = local_2a0 - fVar27;
          }
        }
        FUN_1800ba370(&local_1f8,fVar26,fVar27,lVar18 + lVar12);
        fVar27 = local_294;
        fVar26 = local_288[0];
        fVar28 = local_2a8;
LAB_1800ba0a0:
        fVar27 = fVar27 + fVar33 + fVar26;
        fVar29 = DAT_1808abfc8;
        local_294 = fVar27;
      }
      else if (*(char *)(lVar12 + 0x60) != '\0') goto LAB_1800ba0a0;
      plVar20 = plVar20 + 3;
    } while (plVar20 != plVar11);
  }
  puVar23 = auStack_308;
  if (local_268 == (longlong *)0x0) goto LAB_1800ba124;
  plVar11 = local_268;
  if ((ulonglong)(((longlong)local_258 - (longlong)local_268 >> 3) * 8) < 0x1000) {
LAB_1800ba11c:
    puVar22 = puVar21;
  }
  else {
    plVar11 = (longlong *)local_268[-1];
    plVar20 = (longlong *)((longlong)local_268 + (-8 - (longlong)plVar11));
    if (&DAT_0000001f < plVar20) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar21 = auStack_300;
      plVar11 = plVar20;
      goto LAB_1800ba11c;
    }
  }
  *(undefined8 *)(puVar22 + -8) = 0x1800ba124;
  thunk_FUN_1803d64e0(plVar11);
  puVar23 = puVar22;
LAB_1800ba124:
  *(undefined8 *)(puVar23 + -8) = 0x1800ba133;
  return;
}



/* ===== 1800ba190 FUN_1800ba190 ===== */

undefined8 * FUN_1800ba190(longlong *param_1,undefined8 *param_2,ushort *param_3)

{
  ushort *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  puVar1 = param_3 + 8;
  puVar6 = param_3;
  if (0xf < *(ulonglong *)(param_3 + 0xc)) {
    puVar6 = *(ushort **)param_3;
  }
  if (*(longlong *)puVar1 == 3) {
    iVar3 = *puVar6 - 0x88ef;
    if (iVar3 == 0) {
      iVar3 = (byte)puVar6[1] - 0x85;
    }
    if (iVar3 == 0) {
      puVar2 = (undefined8 *)*param_1;
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      local_18 = puVar2[2];
      goto LAB_1800ba253;
    }
  }
  if (0xf < *(ulonglong *)(param_3 + 0xc)) {
    param_3 = *(ushort **)param_3;
  }
  if (*(longlong *)puVar1 == 3) {
    iVar3 = *param_3 - 0x88ef;
    if (iVar3 == 0) {
      iVar3 = (byte)param_3[1] - 0x84;
    }
    if (iVar3 != 0) goto LAB_1800ba22d;
    puVar2 = (undefined8 *)param_1[1];
    local_28 = *puVar2;
    uVar4 = *(undefined4 *)(puVar2 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar2 + 0xc);
    uVar7 = *(undefined4 *)(puVar2 + 2);
    uVar8 = *(undefined4 *)((longlong)puVar2 + 0x14);
  }
  else {
LAB_1800ba22d:
    local_28 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  local_18 = CONCAT44(uVar8,uVar7);
  uStack_20 = CONCAT44(uVar5,uVar4);
LAB_1800ba253:
  *param_2 = local_28;
  param_2[1] = uStack_20;
  param_2[2] = local_18;
  return param_2;
}



/* ===== 1800ba280 FUN_1800ba280 ===== */

void FUN_1800ba280(undefined8 *param_1,undefined8 *param_2)

{
  float local_res10 [6];
  longlong local_28;
  int local_20;
  int local_1c;
  
  if (param_2[2] == 0) {
    return;
  }
  FUN_1800ba190(*param_1,&local_28,param_2);
  if (((local_28 == 0) || (local_20 < 1)) || (local_1c < 1)) {
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_18040a2f0(local_res10,*(undefined8 *)param_1[2],*(undefined4 *)param_1[3],DAT_1808acd08,0,
                  param_2,0,0,0);
  }
  else {
    local_res10[0] = ((float)local_20 / (float)local_1c) * *(float *)param_1[1];
  }
  FUN_18053fc00(local_res10[0] + DAT_1808ac2f0);
  return;
}



/* ===== 1800ba370 FUN_1800ba370 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ba370(longlong param_1,undefined8 param_2,float param_3,char *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  longlong *plVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res8;
  float local_resc;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float *in_stack_ffffffffffffff20;
  undefined8 in_stack_ffffffffffffff28;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar19;
  float local_b8 [6];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined8 local_90;
  longlong local_88;
  undefined8 uStack_80;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  fVar10 = (float)FUN_180519080();
  local_a0 = fVar10;
  fVar11 = (float)FUN_180519080();
  local_res8 = fVar10 + param_3;
  local_resc = fVar11 + **(float **)(param_1 + 8);
  local_9c = fVar11;
  if ((fVar10 < local_res8) && (fVar11 < local_resc)) {
    uVar2 = **(uint **)(param_1 + 0x30);
    uVar1 = **(undefined4 **)(param_1 + 0x18);
    uVar3 = **(undefined8 **)(param_1 + 0x10);
    if ((DAT_180cd0fdd != '\0') && (DAT_181107cd8 != 0)) {
      fVar13 = **(float **)(param_1 + 0x20);
      if ((0.0 < fVar13) && (fVar12 = (*(float **)(param_1 + 0x20))[1], 0.0 < fVar12)) {
        local_98 = local_res8 / fVar13;
        uStack_80 = DAT_181107cd8;
        local_b8[4] = 1.0;
        local_b8[0] = 0.0;
        local_88 = 0;
        local_b8[2] = **(float **)(param_1 + 0x28);
        local_94 = local_resc / fVar12;
        pfVar9 = local_b8;
        if (0.0 <= local_b8[2]) {
          pfVar9 = local_b8 + 2;
        }
        pfVar7 = local_b8 + 4;
        if (local_b8[2] <= DAT_1808ac34c) {
          pfVar7 = pfVar9;
        }
        local_90 = CONCAT44(fVar11 / fVar12,fVar10 / fVar13);
        uVar17 = CONCAT44(uVar18,(int)(longlong)(*pfVar7 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18) |
                 0xffffff;
        in_stack_ffffffffffffff20 = &local_98;
        puVar14 = &local_90;
        FUN_1803febc0(uVar3,&local_88,&local_a0,&local_res8,puVar14,in_stack_ffffffffffffff20,uVar17
                      ,CONCAT44(uVar19,uVar1));
        uVar18 = (undefined4)(uVar17 >> 0x20);
        uVar16 = (undefined4)((ulonglong)puVar14 >> 0x20);
      }
    }
    if (0xffffff < uVar2) {
      uVar15 = CONCAT44(uVar16,uVar1);
      FUN_1803fe590(uVar3,&local_a0,&local_res8,uVar2,uVar15,
                    (ulonglong)in_stack_ffffffffffffff20 & 0xffffffff00000000);
      uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
    }
  }
  fVar10 = (float)FUN_18053fc00();
  fVar11 = (float)FUN_18053fc00(**(float **)(param_1 + 0x40) * DAT_1808ac658 + fVar11);
  FUN_1800ba190(*(undefined8 *)(param_1 + 0x48),&local_88,param_4);
  lVar4 = local_88;
  if (local_88 != 0) {
    iVar5 = (int)uStack_80;
    if (0 < (int)uStack_80) {
      iVar6 = uStack_80._4_4_;
      if (0 < uStack_80._4_4_) {
        fVar13 = **(float **)(param_1 + 0x50);
        local_a0 = fVar10;
        fVar12 = (float)FUN_180519080(fVar13 * _DAT_1808ac388);
        local_res8 = 1.0;
        local_resc = 1.0;
        local_90 = 0;
        local_88 = 0;
        uStack_80 = lVar4;
        local_9c = (fVar12 + fVar11) - fVar13 * DAT_1808acbe4 * DAT_1808abfc4;
        local_94 = fVar13 + local_9c;
        local_98 = fVar13 * ((float)iVar5 / (float)iVar6) + fVar10;
        FUN_1803fea90(**(undefined8 **)(param_1 + 0x10),&local_88,&local_a0,&local_98,&local_90,
                      &local_res8,CONCAT44(uVar18,**(undefined4 **)(param_1 + 0x58)));
        goto LAB_1800ba702;
      }
    }
  }
  if (0xf < *(ulonglong *)(param_4 + 0x18)) {
    param_4 = *(char **)param_4;
  }
  if ((((**(uint **)(param_1 + 0x58) & 0xff000000) != 0) && (param_4 != (char *)0x0)) &&
     (*param_4 != '\0')) {
    lVar4 = **(longlong **)(param_1 + 0x10);
    fVar13 = **(float **)(param_1 + 0x68);
    plVar8 = *(longlong **)(param_1 + 0x60);
    if (*plVar8 == 0) {
      plVar8 = (longlong *)(*(longlong *)(lVar4 + 0x38) + 0x18);
    }
    if (fVar13 == 0.0) {
      fVar13 = *(float *)(*(longlong *)(lVar4 + 0x38) + 0x20);
    }
    local_88 = *(longlong *)(lVar4 + 0x60);
    uStack_80 = *(undefined8 *)(lVar4 + 0x68);
    local_res8 = fVar10;
    local_resc = fVar11;
    FUN_18040a900(*plVar8,lVar4,fVar13,&local_res8,CONCAT44(uVar16,**(uint **)(param_1 + 0x58)),
                  &local_88,param_4,0,0,0);
  }
LAB_1800ba702:
  return;
}



/* ===== 1800ba730 FUN_1800ba730 ===== */

longlong FUN_1800ba730(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return -1;
  }
  lVar2 = -1;
  if (param_2 + -1 != -1) {
    lVar2 = param_2 + -1;
  }
  lVar3 = lVar2 + 1 + param_1;
  lVar1 = thunk_FUN_1804e7010(param_1,lVar3,param_4);
  lVar2 = -1;
  if (lVar1 != lVar3) {
    lVar2 = lVar1 - param_1;
  }
  return lVar2;
}



/* ===== 1800ba7a0 FUN_1800ba7a0 ===== */

void FUN_1800ba7a0(longlong *param_1)

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
    FUN_18000f890(lVar3 + 0x40);
    FUN_18000f890(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 5) << 5)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800ba84b;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1800ba84b:
  *(undefined8 *)(puVar5 + -8) = 0x1800ba853;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800ba870 FUN_1800ba870 ===== */

undefined8 * FUN_1800ba870(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar10 = *param_1;
  uVar14 = 0x2aaaaaaaaaaaaaa;
  lVar7 = (param_1[1] - lVar10 >> 5) * -0x5555555555555555;
  if (lVar7 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar7 + 1;
  uVar9 = (param_1[2] - lVar10 >> 5) * -0x5555555555555555;
  if (uVar9 <= 0x2aaaaaaaaaaaaaa - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar14 = uVar1;
    if (uVar1 <= uVar9) {
      uVar14 = uVar9;
    }
    if (0x2aaaaaaaaaaaaaa < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined8 *)FUN_18000fb70(uVar14 * 0x60);
  puVar15 = puVar8 + ((param_2 - lVar10) / 0x60) * 0xc;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  uVar6 = param_3[1];
  *puVar15 = *param_3;
  puVar15[1] = uVar6;
  uVar6 = param_3[3];
  puVar15[2] = param_3[2];
  puVar15[3] = uVar6;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar15[4] = 0;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  uVar6 = param_3[5];
  puVar15[4] = param_3[4];
  puVar15[5] = uVar6;
  uVar6 = param_3[7];
  puVar15[6] = param_3[6];
  puVar15[7] = uVar6;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 4) = 0;
  puVar15[8] = 0;
  puVar15[9] = 0;
  puVar15[10] = 0;
  puVar15[0xb] = 0;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar4 = *(undefined4 *)(param_3 + 9);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x4c);
  *(undefined4 *)(puVar15 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)((longlong)puVar15 + 0x44) = uVar3;
  *(undefined4 *)(puVar15 + 9) = uVar4;
  *(undefined4 *)((longlong)puVar15 + 0x4c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x54);
  uVar4 = *(undefined4 *)(param_3 + 0xb);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x5c);
  *(undefined4 *)(puVar15 + 10) = *(undefined4 *)(param_3 + 10);
  *(undefined4 *)((longlong)puVar15 + 0x54) = uVar3;
  *(undefined4 *)(puVar15 + 0xb) = uVar4;
  *(undefined4 *)((longlong)puVar15 + 0x5c) = uVar5;
  param_3[10] = 0;
  param_3[0xb] = 0xf;
  *(undefined1 *)(param_3 + 8) = 0;
  lVar10 = param_1[1];
  lVar7 = *param_1;
  puVar13 = puVar8;
  if (param_2 != lVar10) {
    FUN_1800bad10(*param_1,param_2,puVar8);
    lVar10 = param_1[1];
    puVar13 = puVar15 + 0xc;
    lVar7 = param_2;
  }
  puVar11 = auStack_48;
  puVar12 = auStack_48;
  FUN_1800bad10(lVar7,lVar10,puVar13);
  lVar10 = *param_1;
  if (lVar10 == 0) goto LAB_1800baa8c;
  lVar7 = param_1[1];
  for (; lVar10 != lVar7; lVar10 = lVar10 + 0x60) {
    FUN_18000f890(lVar10 + 0x40);
    FUN_18000f890(lVar10 + 0x20);
    FUN_18000f890(lVar10);
  }
  lVar10 = *param_1;
  lVar7 = lVar10;
  if ((ulonglong)((param_1[2] - lVar10 >> 5) << 5) < 0x1000) {
LAB_1800baa81:
    puVar12 = puVar11;
  }
  else {
    lVar7 = *(longlong *)(lVar10 + -8);
    if (0x1f < (lVar10 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar11 = auStack_40;
      goto LAB_1800baa81;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1800baa8c;
  thunk_FUN_1803d64e0(lVar7);
LAB_1800baa8c:
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1 * 0xc);
  param_1[2] = (longlong)(puVar8 + uVar14 * 0xc);
  return puVar15;
}



/* ===== 1800baae0 FUN_1800baae0 ===== */

longlong FUN_1800baae0(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar7 = DAT_180cd03a0;
  uVar6 = 0x222222222222222;
  lVar3 = (DAT_180cd03a8 - DAT_180cd03a0 >> 3) * -0x1111111111111111;
  if (lVar3 == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (DAT_180cd03b0 - DAT_180cd03a0 >> 3) * -0x1111111111111111;
  if (uVar5 <= 0x222222222222222 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar6 = uVar1;
    if (uVar1 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x222222222222222 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar6 * 0x78);
  lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_2 - lVar7),8) + (param_2 - lVar7);
  lVar11 = ((lVar7 >> 6) - (lVar7 >> 0x3f)) * 0x78 + lVar4;
  FUN_1800badd0(lVar11,param_3);
  puVar8 = auStack_48;
  puVar9 = auStack_48;
  lVar7 = lVar4;
  lVar3 = DAT_180cd03a0;
  lVar10 = DAT_180cd03a8;
  if (param_2 == DAT_180cd03a8) {
    if (DAT_180cd03a0 != DAT_180cd03a8) {
      do {
        FUN_1800badd0(lVar7);
        lVar7 = lVar7 + 0x78;
        lVar3 = lVar3 + 0x78;
      } while (lVar3 != lVar10);
    }
  }
  else {
    for (; DAT_180cd03a8 = lVar10, lVar3 != param_2; lVar3 = lVar3 + 0x78) {
      FUN_1800badd0(lVar7);
      lVar7 = lVar7 + 0x78;
      lVar10 = DAT_180cd03a8;
    }
    lVar7 = lVar11;
    if (param_2 != lVar10) {
      do {
        lVar7 = lVar7 + 0x78;
        FUN_1800badd0(lVar7,param_2);
        param_2 = param_2 + 0x78;
      } while (param_2 != lVar10);
    }
  }
  lVar3 = DAT_180cd03a8;
  lVar7 = DAT_180cd03a0;
  if (DAT_180cd03a0 == 0) goto LAB_1800bacc2;
  for (; lVar7 != lVar3; lVar7 = lVar7 + 0x78) {
    FUN_18000f890(lVar7 + 0x40);
    FUN_18000f890(lVar7 + 0x20);
    FUN_18000f890(lVar7);
  }
  lVar7 = DAT_180cd03a0;
  if ((ulonglong)((DAT_180cd03b0 - DAT_180cd03a0 >> 3) * 8) < 0x1000) {
LAB_1800bacb7:
    puVar9 = puVar8;
  }
  else {
    lVar7 = *(longlong *)(DAT_180cd03a0 + -8);
    if (0x1f < (DAT_180cd03a0 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar8 = auStack_40;
      goto LAB_1800bacb7;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x1800bacc2;
  thunk_FUN_1803d64e0(lVar7);
LAB_1800bacc2:
  DAT_180cd03a8 = uVar1 * 0x78 + lVar4;
  DAT_180cd03a0 = lVar4;
  DAT_180cd03b0 = uVar6 * 0x78 + lVar4;
  return lVar11;
}



/* ===== 1800bad10 FUN_1800bad10 ===== */

undefined8 * FUN_1800bad10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
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
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    uVar1 = param_1[9];
    param_3[8] = param_1[8];
    param_3[9] = uVar1;
    uVar1 = param_1[0xb];
    param_3[10] = param_1[10];
    param_3[0xb] = uVar1;
    *(undefined1 *)(param_1 + 8) = 0;
    param_3 = param_3 + 0xc;
    param_1[10] = 0;
    param_1[0xb] = 0xf;
  }
  return param_3;
}



/* ===== 1800badd0 FUN_1800badd0 ===== */

undefined8 * FUN_1800badd0(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_1[0xe] = param_2[0xe];
  return param_1;
}



/* ===== 1800bae80 FUN_1800bae80 ===== */

ulonglong FUN_1800bae80(float *param_1,ulonglong param_2,double param_3,double param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float local_res8 [8];
  float local_18 [2];
  float local_10 [4];
  
  fVar4 = (float)param_2;
  if (*(char *)(param_1 + 6) == '\0') {
    *param_1 = fVar4;
    param_1[1] = fVar4;
    param_1[2] = fVar4;
    *(double *)(param_1 + 4) = param_3;
    *(undefined1 *)(param_1 + 6) = 1;
    return param_2;
  }
  if (param_1[2] != fVar4) {
    param_1[1] = *param_1;
    param_1[2] = fVar4;
    *(double *)(param_1 + 4) = param_3;
  }
  local_10[0] = 1.0;
  local_18[0] = (float)((param_3 - *(double *)(param_1 + 4)) / param_4);
  pfVar2 = local_res8;
  if (0.0 <= local_18[0]) {
    pfVar2 = local_18;
  }
  pfVar1 = local_10;
  if (local_18[0] <= DAT_1808ac34c) {
    pfVar1 = pfVar2;
  }
  fVar3 = DAT_1808ac34c - *pfVar1;
  fVar4 = (DAT_1808ac34c - fVar3 * fVar3 * fVar3) * (fVar4 - param_1[1]) + param_1[1];
  *param_1 = fVar4;
  return (ulonglong)(uint)fVar4;
}



/* ===== 1800baf50 FUN_1800baf50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1800baf50(longlong *param_1,char *param_2,undefined8 param_3,float param_4,char param_5)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  size_t sVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30 [5];
  
  local_30[4] = DAT_180919500 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(float *)(param_1 + 3) = param_4 * DAT_1808ac8d4;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  sVar4 = strlen(param_2);
  FUN_1800133a0(local_30,param_2,sVar4);
  plVar5 = (longlong *)
           FUN_18039ed80(local_48,local_30,param_3,
                         (int)(*(float *)(param_1 + 3) + *(float *)(param_1 + 3) + DAT_1808ac1f4));
  lVar6 = plVar5[2];
  lVar3 = plVar5[1];
  *param_1 = *plVar5;
  param_1[1] = lVar3;
  param_1[2] = lVar6;
  if (0xf < (ulonglong)local_30[3]) {
    uVar7 = local_30[3] + 1;
    lVar6 = local_30[0];
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(local_30[0] + -8);
      if (0x1f < (local_30[0] - lVar6) - 8U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        plVar5 = (longlong *)(*pcVar2)();
        return plVar5;
      }
      uVar7 = local_30[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar6,uVar7);
  }
  if ((*param_1 != 0) && (0 < (int)param_1[1])) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (0 < iVar1) {
      fVar8 = ((float)(int)param_1[1] / (float)iVar1) * *(float *)(param_1 + 3);
      *(float *)((longlong)param_1 + 0x1c) = fVar8;
      if (param_5 != '\0') {
        fVar8 = (float)FUN_18053fc00(iVar1,fVar8 + DAT_1808ac2f0);
      }
      *(float *)(param_1 + 4) = fVar8;
    }
  }
  return param_1;
}



/* ===== 1800bb0c0 FUN_1800bb0c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800bb0c0(longlong param_1,undefined4 *param_2,float param_3,float param_4,float param_5,
                  longlong param_6,char *param_7,longlong *param_8,float param_9,float param_10)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_198 [32];
  float *local_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_150;
  float local_148;
  float local_144;
  float local_140 [5];
  float local_12c;
  float local_128;
  float local_124;
  undefined8 local_118;
  longlong lStack_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  ulonglong local_c8;
  
  uVar5 = DAT_1808ac34c;
  if ((param_1 != 0) && (local_c8 = DAT_180919500 ^ (ulonglong)auStack_198, 0.0 < param_10)) {
    local_dc = 0x3f800000;
    local_f8 = (float)(_DAT_180960f74 & 0xff) * DAT_1808abfe4;
    local_e4 = DAT_18091a19c;
    local_f4 = (float)(_DAT_180960f74 >> 8 & 0xff) * DAT_1808abfe4;
    local_f0 = (float)(_DAT_180960f74 >> 0x10 & 0xff) * DAT_1808abfe4;
    local_ec = (float)(_DAT_180960f74 >> 0x18) * DAT_1808abfe4;
    local_108 = (float)(DAT_180960f58 & 0xff) * DAT_1808abfe4;
    local_104 = (float)(DAT_180960f58 >> 8 & 0xff) * DAT_1808abfe4;
    local_100 = (float)(DAT_180960f58 >> 0x10 & 0xff) * DAT_1808abfe4;
    local_fc = (float)(DAT_180960f58 >> 0x18) * DAT_1808abfe4;
    local_e8 = DAT_18091a198;
    local_e0 = DAT_18091a1a0;
    local_d8 = (float)(DAT_180960ed0 & 0xff) * DAT_1808abfe4;
    local_d4 = (float)(DAT_180960ed0 >> 8 & 0xff) * DAT_1808abfe4;
    fVar11 = param_9 * DAT_1808ac750;
    local_d0 = (float)(DAT_180960ed0 >> 0x10 & 0xff) * DAT_1808abfe4;
    local_cc = (float)(DAT_180960ed0 >> 0x18) * DAT_1808abfe4;
    fVar8 = (float)FUN_18053fc00(*param_2);
    local_148 = fVar8;
    local_144 = (float)FUN_18053fc00(param_2[1]);
    fVar9 = DAT_1808ac1f4;
    local_140[4] = fVar8 + param_3;
    local_12c = param_9 * DAT_1808ac838 + param_4 + local_144 + param_9;
    fVar8 = (local_12c - local_144) * DAT_1808ac1f4;
    if (param_9 * DAT_1808ac918 <= fVar8) {
      fVar8 = param_9 * DAT_1808ac918;
    }
    local_170._0_4_ = FUN_180089560(&local_108,param_10);
    local_178._0_4_ = param_9 * DAT_1808ac934;
    FUN_1800be3c0(param_1,&local_148,local_140 + 4,fVar8);
    uVar3 = FUN_180089560(&local_f8,param_10);
    local_170 = (float *)((ulonglong)local_170._4_4_ << 0x20);
    local_178 = (float *)CONCAT44(local_178._4_4_,fVar8);
    FUN_1803fe590(param_1,&local_148,local_140 + 4,uVar3);
    fVar12 = param_10 * DAT_1808ac118;
    uVar4 = FUN_180089560(&local_f8,fVar12);
    if ((uVar4 & 0xff000000) != 0) {
      local_178 = (float *)((ulonglong)local_178 & 0xffffffff00000000);
      if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
        pfVar7 = local_140 + 2;
        local_140[2] = local_140[4] - DAT_1808ac1e0;
        pfVar6 = local_140;
        local_140[3] = local_12c - DAT_1808ac1e0;
        local_140[1] = local_144 + fVar9;
        local_140[0] = local_148 + fVar9;
      }
      else {
        pfVar7 = local_140;
        pfVar6 = local_140 + 2;
        local_140[1] = local_12c - fVar9;
        local_140[0] = local_140[4] - fVar9;
        local_140[2] = local_148 + fVar9;
        local_140[3] = local_144 + fVar9;
      }
      FUN_1803fe160(param_1,pfVar6,pfVar7,fVar8);
      local_170 = (float *)CONCAT44(local_170._4_4_,0x200);
      local_178 = (float *)CONCAT44(local_178._4_4_,uVar5);
      FUN_1803fc600(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),uVar4);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    fVar9 = (float)FUN_18053fc00(param_9 * DAT_1808ac844 + local_148);
    fVar8 = (float)FUN_18053fc00(param_9 * DAT_1808ac710 + local_144);
    lVar2 = *param_8;
    if (((lVar2 != 0) && (0 < (int)param_8[1])) && (0 < *(int *)((longlong)param_8 + 0xc))) {
      fVar1 = *(float *)(param_8 + 3);
      local_108 = fVar9;
      fVar10 = (float)FUN_180519080(fVar1 * _DAT_1808ac388);
      local_140[2] = 1.0;
      local_140[3] = 1.0;
      local_140[0] = 0.0;
      local_140[1] = 0.0;
      local_118 = 0;
      local_128 = fVar9 + *(float *)((longlong)param_8 + 0x1c);
      local_104 = (fVar10 + fVar8) - fVar1 * DAT_1808acbe4 * DAT_1808abfc4;
      local_124 = fVar1 + local_104;
      lStack_110 = lVar2;
      uVar5 = FUN_180089560(&local_e8,param_10);
      local_168 = (char *)CONCAT44(local_168._4_4_,uVar5);
      local_170 = local_140 + 2;
      local_178 = local_140;
      FUN_1803fea90(param_1,&local_118,&local_108,&local_128);
      fVar9 = fVar11 + *(float *)(param_8 + 4) + fVar9;
    }
    local_104 = fVar8 + param_4;
    local_108 = fVar9 + param_9;
    local_128 = fVar9;
    local_124 = fVar8;
    uVar5 = FUN_180089560(&local_f8,fVar12);
    local_170 = (float *)((ulonglong)local_170 & 0xffffffff00000000);
    local_178 = (float *)((ulonglong)local_178 & 0xffffffff00000000);
    FUN_1803fe590(param_1,&local_128,&local_108,uVar5);
    if ((param_6 != 0) && (param_7 != (char *)0x0)) {
      uVar4 = FUN_180089560(&local_d8,param_10);
      local_108 = fVar11 + param_9 + fVar9;
      if (((uVar4 & 0xff000000) != 0) && (*param_7 != '\0')) {
        if (param_5 == 0.0) {
          param_5 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
        }
        local_118 = *(undefined8 *)(param_1 + 0x60);
        lStack_110 = *(undefined8 *)(param_1 + 0x68);
        local_150 = 0;
        local_170 = (float *)&local_118;
        local_158 = 0;
        local_160 = 0;
        local_168 = param_7;
        local_178 = (float *)CONCAT44(local_178._4_4_,uVar4);
        local_104 = fVar8;
        FUN_18040a900(param_6,param_1,param_5,&local_108);
      }
    }
  }
  return;
}



/* ===== 1800bb730 FUN_1800bb730 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800bb730(undefined8 *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_78;
  lVar10 = param_2[2];
  puVar1 = (ulonglong *)(param_2 + 2);
  if ((ulonglong)param_2[3] < 0x10) {
    plVar6 = param_2;
  }
  else {
    plVar6 = (longlong *)*param_2;
  }
  puVar7 = (undefined1 *)(lVar10 + (longlong)plVar6);
  local_50 = param_2;
  puVar5 = (undefined1 *)thunk_FUN_1804e6c50(plVar6,puVar7,10);
  if (puVar5 != puVar7) {
    puVar5 = (undefined1 *)FUN_1804e9d10(puVar5,puVar7,10);
  }
  lVar10 = lVar10 - (longlong)puVar5;
  lVar2 = param_2[2];
  if ((ulonglong)param_2[3] < 0x10) {
    lVar9 = (longlong)puVar5 - (longlong)param_2;
    puVar5 = (undefined1 *)(lVar10 + (longlong)plVar6);
    if ((undefined1 *)(lVar2 - lVar9) < puVar5) {
      puVar5 = (undefined1 *)(lVar2 - lVar9);
    }
    plVar6 = param_2;
  }
  else {
    lVar9 = (longlong)puVar5 - *param_2;
    puVar5 = (undefined1 *)(lVar10 + (longlong)plVar6);
    if ((undefined1 *)(lVar2 - lVar9) < puVar5) {
      puVar5 = (undefined1 *)(lVar2 - lVar9);
    }
    plVar6 = (longlong *)*param_2;
  }
  uVar8 = lVar2 - (longlong)puVar5;
  FUN_180540530((longlong)plVar6 + lVar9,puVar5 + (longlong)plVar6 + lVar9,(uVar8 - lVar9) + 1);
  *puVar1 = uVar8;
  if (0x20 < uVar8) {
    *puVar1 = 0x20;
    if ((ulonglong)param_2[3] < 0x10) {
      plVar6 = param_2;
    }
    else {
      plVar6 = (longlong *)*param_2;
    }
    *(undefined1 *)(plVar6 + 4) = 0;
    FUN_1800134a0(param_2,&DAT_1806e0660,2);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  lVar10 = param_2[1];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(int *)param_1 = (int)*param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar3;
  *(int *)(param_1 + 1) = (int)lVar10;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar10 = param_2[3];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(int *)(param_1 + 3) = (int)lVar10;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined1 *)param_2 = 0;
  *puVar1 = 0;
  param_2[3] = 0xf;
  FUN_18000f890(param_2);
  return param_1;
}



/* ===== 1800bb8a0 FUN_1800bb8a0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800bb8a0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_1168 [32];
  ulonglong local_1148;
  longlong local_1130;
  longlong local_1128;
  undefined1 local_1118 [32];
  undefined1 *local_10f8;
  ulonglong local_10f0;
  undefined1 local_10e8 [4048];
  longlong local_118;
  ulonglong local_110;
  ulonglong uStack_108;
  ulonglong local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined4 local_c7;
  undefined2 local_c3;
  undefined1 local_c1;
  undefined1 local_b8 [32];
  ulonglong local_98;
  undefined8 local_48;
  
  plVar6 = DAT_180cd03e0;
  local_48 = 0x1800bb8bf;
  local_98 = DAT_180919500 ^ (ulonglong)auStack_1168;
  DAT_180cd03d4 = DAT_180cd03d4 + 1;
  uVar13 = (ulonglong)DAT_180cd03d4;
  if (DAT_180ca0069 == '\0') {
    if (DAT_1809f58c0 == '\0') {
      plVar10 = DAT_180cd03d8;
      if (DAT_180cd03d8 != DAT_180cd03e0) {
        do {
          FUN_18000f890(plVar10 + 1);
          plVar10 = plVar10 + 0xb;
        } while (plVar10 != plVar6);
        DAT_180cd03e0 = DAT_180cd03d8;
      }
      return 0;
    }
    plVar6 = &DAT_1809f58b0;
    lVar12 = DAT_1809f58a8;
  }
  else {
    plVar6 = &DAT_180cd03f8;
    lVar12 = DAT_180cd03f0;
  }
  uVar14 = 0;
  lVar11 = *plVar6;
  local_1130 = lVar12;
  local_1128 = lVar11;
  if (lVar12 != lVar11) {
    do {
      if (DAT_180cd03d8 == DAT_180cd03e0) {
LAB_1800bb9ec:
        uVar13 = 0;
        uStack_108 = 0;
        local_100 = 0;
        uVar14 = 0xf;
        local_f8 = 0xf;
        local_110 = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_d8 = 0xbf800000;
        local_d0 = 0;
        local_c8 = 1;
        lVar11 = *(longlong *)(lVar12 + 0x30);
        local_118 = lVar11;
        uVar7 = FUN_180024b50(local_1118,lVar12);
        puVar8 = (ulonglong *)FUN_1800bb730(local_b8,uVar7);
        if (&local_110 != puVar8) {
          local_110 = *puVar8;
          uStack_108 = puVar8[1];
          uVar13 = puVar8[2];
          uVar14 = puVar8[3];
          puVar8[2] = 0;
          puVar8[3] = 0xf;
          *(undefined1 *)puVar8 = 0;
          local_100 = uVar13;
          local_f8 = uVar14;
        }
        uVar5 = uStack_108;
        uVar4 = local_110;
        FUN_18000f890(local_b8);
        plVar6 = DAT_180cd03e0;
        uVar3 = DAT_180cd03d4;
        local_f0 = 0;
        if (*(char *)(lVar12 + 0x28) == '\0') {
          local_f0 = *(longlong *)(lVar12 + 0x20);
        }
        uVar1 = *(undefined4 *)(lVar12 + 0x2c);
        local_e8 = CONCAT44(DAT_180cd03d4,uVar1);
        if (DAT_180cd03e0 == DAT_180cd03e8) {
          FUN_1800bd3b0(uVar1,DAT_180cd03e0,&local_118);
        }
        else {
          *DAT_180cd03e0 = lVar11;
          plVar6[1] = uVar4;
          plVar6[2] = uVar5;
          plVar6[3] = uVar13;
          plVar6[4] = uVar14;
          local_100 = 0;
          local_f8 = 0xf;
          local_110 = local_110 & 0xffffffffffffff00;
          plVar6[5] = local_f0;
          *(undefined4 *)(plVar6 + 6) = uVar1;
          *(uint *)((longlong)plVar6 + 0x34) = uVar3;
          plVar6[7] = 0;
          *(undefined4 *)(plVar6 + 8) = 0xbf800000;
          *(undefined4 *)((longlong)plVar6 + 0x44) = local_d4;
          plVar6[9] = 0;
          *(undefined1 *)(plVar6 + 10) = 1;
          *(undefined4 *)((longlong)plVar6 + 0x51) = local_c7;
          *(undefined2 *)((longlong)plVar6 + 0x55) = local_c3;
          *(undefined1 *)((longlong)plVar6 + 0x57) = local_c1;
          DAT_180cd03e0 = DAT_180cd03e0 + 0xb;
        }
        FUN_18000f890(&local_110);
        lVar11 = local_1128;
      }
      else {
        plVar6 = DAT_180cd03d8;
        do {
          if (*plVar6 == *(longlong *)(lVar12 + 0x30)) break;
          plVar6 = plVar6 + 0xb;
        } while (plVar6 != DAT_180cd03e0);
        if (plVar6 == DAT_180cd03e0) goto LAB_1800bb9ec;
        *(int *)((longlong)plVar6 + 0x34) = (int)uVar13;
      }
      plVar10 = DAT_180cd03e0;
      plVar6 = DAT_180cd03d8;
      lVar15 = ((longlong)DAT_180cd03e0 - (longlong)DAT_180cd03d8 >> 3) * 0x2e8ba2e8ba2e8ba3;
      if (lVar15 < 0x21) {
        FUN_1800bc960(DAT_180cd03d8);
      }
      else {
        uVar14 = lVar15 - ((longlong)DAT_180cd03e0 - (longlong)DAT_180cd03d8) / 0xb0;
        uVar13 = 0x7fffffffffffffff;
        if ((longlong)uVar14 < 0x7fffffffffffffff) {
          uVar13 = uVar14;
        }
        if (0x2e < uVar14) {
          if ((uVar13 < 0x2e8ba2e8ba2e8bb) && (0 < (longlong)uVar13)) {
            do {
              puVar9 = (undefined1 *)FUN_1804ed030(uVar13 * 0x58,&DAT_1805757b2);
              if (puVar9 != (undefined1 *)0x0) {
                if (0x2e < uVar13) goto LAB_1800bbc7e;
                goto LAB_1800bbc6c;
              }
              uVar13 = uVar13 >> 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined1 *)0x0;
LAB_1800bbc6c:
          FUN_1803d64e0(puVar9);
          uVar14 = 0x2e;
        }
        uVar13 = uVar14;
        puVar9 = local_10e8;
LAB_1800bbc7e:
        local_1148 = uVar13;
        local_10f8 = puVar9;
        local_10f0 = uVar13;
        FUN_1800bcb90(plVar6,plVar10,lVar15,puVar9);
        if (0x2e < local_10f0) {
          FUN_1803d64e0(local_10f8);
        }
      }
      lVar12 = lVar12 + 0x38;
      uVar13 = (ulonglong)DAT_180cd03d4;
    } while (lVar12 != lVar11);
    uVar14 = (lVar11 - local_1130) + 0x37;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar14;
    lVar12 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
    uVar14 = lVar12 + (uVar14 - lVar12 >> 1) >> 5;
  }
  uVar1 = DAT_1808ac34c;
  if (DAT_180cd03d8 != DAT_180cd03e0) {
    uVar17 = (undefined4)DAT_1808ac448;
    plVar6 = DAT_180cd03d8;
    do {
      if (*(int *)((longlong)plVar6 + 0x34) == (int)uVar13) {
LAB_1800bbd71:
        uVar16 = uVar1;
LAB_1800bbd79:
        FUN_1800bae80(plVar6 + 7,uVar16,param_2,uVar17);
        plVar6 = plVar6 + 0xb;
      }
      else {
        if (0.0 < *(float *)(plVar6 + 7)) {
          if (*(int *)((longlong)plVar6 + 0x34) == (int)uVar13) goto LAB_1800bbd71;
          uVar16 = 0;
          goto LAB_1800bbd79;
        }
        FUN_1800bcc90(plVar6 + 0xb,DAT_180cd03e0,plVar6);
        FUN_18000f890(DAT_180cd03e0 + -10);
        DAT_180cd03e0 = DAT_180cd03e0 + -0xb;
        uVar13 = (ulonglong)DAT_180cd03d4;
      }
    } while (plVar6 != DAT_180cd03e0);
  }
  return uVar14 & 0xffffffff;
}



/* ===== 1800bbdf0 FUN_1800bbdf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800bbdf0(longlong param_1,undefined8 param_2,float *param_3,float param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong *plVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 *puVar13;
  longlong lVar14;
  float *pfVar15;
  undefined *puVar16;
  longlong lVar17;
  char *pcVar18;
  undefined4 extraout_XMM0_Da;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  char *local_280;
  undefined8 local_278;
  undefined8 *local_270;
  ulonglong local_268;
  float local_260;
  undefined4 local_258;
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
  float local_21c;
  float local_218;
  float local_214;
  float local_210 [2];
  float local_208;
  float local_204;
  float local_200 [2];
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8 [2];
  float local_1e0;
  float local_1dc;
  float local_1d8 [2];
  float local_1d0 [2];
  float local_1c8;
  float local_1c4;
  char local_1c0 [8];
  undefined8 local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198 [4];
  undefined8 local_188;
  longlong local_180;
  undefined1 local_178 [8];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138 [40];
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  if (param_1 != 0) {
    local_e0 = DAT_180919500 ^ (ulonglong)auStack_2a8;
    local_210[0] = param_4;
    plVar10 = (longlong *)FUN_1800ad890(local_178);
    dVar2 = (double)*plVar10 / DAT_1808ac9a0;
    if (DAT_18095cf18 == '\0') {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_1800bb8a0(extraout_XMM0_Da,SUB84(dVar2,0));
    }
    lVar5 = DAT_180cd03e0;
    cVar4 = DAT_18091a190;
    fVar27 = DAT_1808ac658;
    dVar3 = DAT_1808ac448;
    fVar25 = DAT_1808ac34c;
    if ((DAT_18095cf18 == '\0') || ((iVar6 < 1 && (DAT_18091a190 == '\0')))) {
      fVar26 = 0.0;
    }
    else {
      fVar26 = DAT_1808ac34c;
    }
    if (DAT_1809e9ca8 == '\0') {
      DAT_1809e9ca8 = '\x01';
      DAT_1809e9c94 = fVar26;
      DAT_1809e9c98 = fVar26;
      DAT_1809e9ca0 = dVar2;
    }
    else {
      if (DAT_1809e9c98 == fVar26) {
      }
      else {
        DAT_1809e9c94 = DAT_1809e9c90;
        DAT_1809e9c98 = fVar26;
        DAT_1809e9ca0 = dVar2;
      }
      local_218 = 1.0;
      local_1d8[0] = 0.0;
      local_1d0[0] = (float)((dVar2 - DAT_1809e9ca0) / DAT_1808ac448);
      pfVar12 = local_1d8;
      if (0.0 <= local_1d0[0]) {
        pfVar12 = local_1d0;
      }
      pfVar11 = &local_218;
      if (local_1d0[0] <= DAT_1808ac34c) {
        pfVar11 = pfVar12;
      }
      fVar23 = DAT_1808ac34c - *pfVar11;
      fVar26 = (DAT_1808ac34c - fVar23 * fVar23 * fVar23) * (fVar26 - DAT_1809e9c94) + DAT_1809e9c94
      ;
    }
    DAT_1809e9c90 = fVar26;
    if (0.0 < fVar26) {
      local_208 = 3.0;
      local_214 = 0.5;
      pfVar12 = &local_214;
      if (DAT_1808ac1f4 <= param_4) {
        pfVar12 = local_210;
      }
      pfVar11 = &local_208;
      if (param_4 <= DAT_1808ac658) {
        pfVar11 = pfVar12;
      }
      pcVar18 = DAT_181107a38;
      if ((DAT_181107a38 != (char *)0x0) ||
         (pcVar18 = *(char **)(DAT_180ca0a50 + 0x11f0), pcVar18 != (char *)0x0)) {
        local_258 = 0;
        local_268 = 0;
        local_270 = (undefined8 *)0x0;
        fVar23 = *pfVar11;
        local_278 = (char *)0x0;
        fVar28 = fVar23 * DAT_1808ac930;
        local_280 = "Spectators";
        local_288 = (undefined8 *)((ulonglong)local_288._4_4_ << 0x20);
        local_238 = fVar28;
        FUN_18040a2f0(&local_220,pcVar18,fVar28,DAT_1808acd08);
        local_288 = (undefined8 *)((ulonglong)local_288 & 0xffffffffffffff00);
        puVar13 = (undefined8 *)
                  FUN_1800baf50(local_138,"widget_spectators",
                                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M288 32C207 32 142 69 95 113C48 156 17 208 2 244C0 252 0 261 2 269C17 304 48 356 95 400C142 444 207 480 288 480C368 480 433 444 480 400C527 356 558 304 573 269C576 261 576 252 573 244C558 208 527 156 480 113C433 69 368 32 288 32ZM144 256C144 205 171 158 216 132C260 106 315 106 360 132C404 158 432 205 432 256C432 308 404 355 360 381C315 407 260 407 216 381C171 355 144 308 144 256ZM288 192C288 228 259 256 224 256C216 256 210 255 203 253C198 251 191 255 192 261C192 267 193 274 195 281C208 333 261 363 312 349C363 335 394 283 380 232C369 190 332 162 292 160C286 160 282 167 284 172C286 179 287 185 287 192L288 192ZM288 192Z\"/></svg>"
                                ,fVar23);
        iVar6 = DAT_18095cf1c;
        local_140 = puVar13[4];
        local_160 = *puVar13;
        uStack_158 = puVar13[1];
        local_150 = puVar13[2];
        uStack_148 = puVar13[3];
        local_22c = fVar23 * DAT_1808ac864;
        fVar22 = fVar23 * DAT_1808ac750 + fVar23 * DAT_1808ac750 +
                 fVar23 * DAT_1808ac844 + fVar23 * DAT_1808ac844 + fVar23 + (float)local_140 +
                 local_220;
        if (DAT_18095cf1c == 1) {
          fVar19 = local_22c;
        }
        else {
          fVar19 = (*param_3 - local_22c) - fVar22;
        }
        fVar19 = (float)FUN_18053fc00(fVar19);
        local_230 = (float)FUN_18053fc00((param_3[1] - _DAT_180cd03d0) * DAT_1808ac1f4);
        if (cVar4 == '\0') {
          fVar21 = 0.0;
        }
        else {
          fVar21 = fVar25;
        }
        if (DAT_1809e9cc8 == '\0') {
          DAT_1809e9cc8 = '\x01';
          DAT_1809e9cb4 = fVar21;
          DAT_1809e9cb8 = fVar21;
          DAT_1809e9cc0 = dVar2;
        }
        else {
          if (DAT_1809e9cb8 == fVar21) {
          }
          else {
            DAT_1809e9cb4 = DAT_1809e9cb0;
            DAT_1809e9cb8 = fVar21;
            DAT_1809e9cc0 = dVar2;
          }
          local_1f8 = 1.0;
          local_204 = 0.0;
          local_200[0] = (float)((dVar2 - DAT_1809e9cc0) / dVar3);
          pfVar12 = &local_204;
          if (0.0 <= local_200[0]) {
            pfVar12 = local_200;
          }
          pfVar15 = &local_1f8;
          if (local_200[0] <= fVar25) {
            pfVar15 = pfVar12;
          }
          fVar20 = fVar25 - *pfVar15;
          fVar21 = (fVar25 - fVar20 * fVar20 * fVar20) * (fVar21 - DAT_1809e9cb4) + DAT_1809e9cb4;
        }
        DAT_1809e9cb0 = fVar21;
        if (0.0 < fVar21) {
          local_260 = fVar21 * fVar26;
          local_270 = &local_160;
          local_268 = CONCAT44(local_268._4_4_,fVar23);
          local_278 = "Spectators";
          local_288 = (undefined8 *)CONCAT44(local_288._4_4_,fVar28);
          local_280 = pcVar18;
          local_228 = fVar19;
          local_224 = local_230;
          FUN_1800bb0c0(param_1,&local_228,fVar22,fVar28);
        }
        lVar5 = DAT_180cd03e0;
        local_110 = (float)(_DAT_180960f74 & 0xff) * DAT_1808abfe4;
        local_10c = (float)(_DAT_180960f74 >> 8 & 0xff) * DAT_1808abfe4;
        local_108 = (float)(_DAT_180960f74 >> 0x10 & 0xff) * DAT_1808abfe4;
        local_104 = (float)(_DAT_180960f74 >> 0x18) * DAT_1808abfe4;
        local_100 = (float)(DAT_180960f58 & 0xff) * DAT_1808abfe4;
        local_fc = (float)(DAT_180960f58 >> 8 & 0xff) * DAT_1808abfe4;
        local_f8 = (float)(DAT_180960f58 >> 0x10 & 0xff) * DAT_1808abfe4;
        local_f4 = (float)(DAT_180960f58 >> 0x18) * DAT_1808abfe4;
        local_f0 = (float)(DAT_180960ed0 & 0xff) * DAT_1808abfe4;
        local_ec = (float)(DAT_180960ed0 >> 8 & 0xff) * DAT_1808abfe4;
        local_e8 = (float)(DAT_180960ed0 >> 0x10 & 0xff) * DAT_1808abfe4;
        local_e4 = (float)(DAT_180960ed0 >> 0x18) * DAT_1808abfe4;
        local_1dc = fVar23 * DAT_1808ac7ac;
        local_1f4 = fVar23 * DAT_1808ac838;
        fVar25 = local_1f4 + fVar28 + local_230 + local_1dc;
        if (DAT_180cd03d8 != DAT_180cd03e0) {
          fVar21 = local_1dc + fVar28;
          local_228 = fVar23 * fVar27;
          fVar22 = fVar19 + fVar22;
          fVar20 = fVar23 * DAT_1808ac428;
          fVar23 = fVar23 * DAT_1808ac8b0;
          fVar27 = local_1f4 + fVar21;
          fVar19 = local_228 + fVar19;
          local_1f0 = fVar21;
          lVar17 = DAT_180cd03d8;
          local_248 = fVar27;
          local_244 = fVar19;
          local_240 = fVar22;
          local_23c = fVar20;
          local_234 = fVar23;
          do {
            fVar1 = *(float *)(lVar17 + 0x38);
            fVar24 = fVar1 * fVar26;
            if (DAT_1808abfc8 < fVar24) {
              if (*(longlong *)(lVar17 + 0x18) == 0) {
                fVar27 = 0.0;
              }
              else {
                local_280 = (char *)(lVar17 + 8);
                if (0xf < *(ulonglong *)(lVar17 + 0x20)) {
                  local_280 = *(char **)local_280;
                }
                local_258 = 0;
                local_268 = 0;
                local_270 = (undefined8 *)0x0;
                local_278 = (char *)0x0;
                local_288 = (undefined8 *)((ulonglong)local_288 & 0xffffffff00000000);
                FUN_18040a2f0(local_198,pcVar18,fVar28,DAT_1808acd08);
                fVar27 = (float)FUN_18053fc00(local_198[0] + DAT_1808ac2f0);
                fVar19 = local_244;
                fVar22 = local_240;
                fVar20 = local_23c;
              }
              fVar23 = fVar27 + fVar21 + fVar23;
              if (iVar6 != 1) {
                fVar19 = fVar22 - fVar23;
              }
              fVar19 = fVar19 - (DAT_1808ac34c - fVar1) * local_1f4;
              fVar22 = fVar25 + fVar21;
              fVar28 = DAT_1808ac864 / *pfVar11;
              fVar23 = fVar19 + fVar23;
              fVar19 = fVar19 - fVar20;
              local_1c8 = fVar19;
              local_1c4 = fVar25;
              local_1a0 = fVar23;
              local_19c = fVar22;
              uVar7 = FUN_180089560(&local_110,fVar24);
              uVar8 = FUN_180089560(&local_100,fVar24 * DAT_1808ac27c);
              local_268 = CONCAT44(local_268._4_4_,fVar28);
              fVar28 = *pfVar11;
              local_270 = (undefined8 *)CONCAT44(local_270._4_4_,uVar7);
              local_278 = (char *)CONCAT44(local_278._4_4_,uVar8);
              local_280._0_4_ = fVar24;
              local_288._0_4_ = fVar28;
              FUN_1800be550(param_1,&local_1c8,&local_1a0,local_22c);
              if (*(int *)(lVar17 + 0x30) == 2) {
                puVar16 = &DAT_1805ca208;
              }
              else {
                puVar16 = &DAT_1805ca218;
                if (*(int *)(lVar17 + 0x30) != 3) {
                  puVar16 = &DAT_1805ca1f8;
                }
              }
              uVar7 = FUN_180089560(puVar16,fVar24 * _DAT_1808ac2b8);
              local_280 = (char *)CONCAT44(local_280._4_4_,fVar28);
              local_288 = (undefined8 *)CONCAT44(local_288._4_4_,uVar7);
              FUN_1800be8a0(param_1,fVar19,fVar25,fVar22);
              fVar21 = local_1f0;
              fVar23 = fVar23 - local_1f0;
              local_1a8 = fVar23;
              local_1a4 = fVar25;
              if ((*(longlong *)(lVar17 + 0x28) != 0) && (lVar14 = FUN_1800dd940(), lVar14 != 0)) {
                local_1e0 = 1.0;
                local_1ec = 0.0;
                local_1c0[0] = '\0';
                local_1c0[1] = '\0';
                local_1c0[2] = -0x80;
                local_1c0[3] = '?';
                local_1c0[4] = '\0';
                local_1c0[5] = '\0';
                local_1c0[6] = -0x80;
                local_1c0[7] = '?';
                local_1b8 = 0;
                local_188 = 0;
                local_1e8[0] = fVar24;
                local_1b0 = fVar21 + fVar23;
                pfVar12 = &local_1ec;
                if (0.0 <= fVar24) {
                  pfVar12 = local_1e8;
                }
                pfVar15 = &local_1e0;
                if (fVar24 <= DAT_1808ac34c) {
                  pfVar15 = pfVar12;
                }
                local_270 = (undefined8 *)CONCAT44(local_270._4_4_,local_22c);
                local_278 = (char *)(CONCAT44(local_278._4_4_,
                                              (int)(longlong)
                                                   (*pfVar15 * DAT_1808acb94 + DAT_1808ac1f4) <<
                                              0x18) | 0xffffff);
                local_280 = local_1c0;
                local_288 = &local_1b8;
                local_1ac = fVar22;
                local_180 = lVar14;
                FUN_1803febc0(param_1,&local_188,&local_1a8,&local_1b0);
              }
              if (*(longlong *)(lVar17 + 0x18) == 0) {
                fVar28 = local_238;
              }
              else {
                plVar10 = (longlong *)(lVar17 + 8);
                if (0xf < *(ulonglong *)(lVar17 + 0x20)) {
                  plVar10 = (longlong *)*plVar10;
                }
                uVar9 = FUN_180089560(&local_f0,fVar24);
                fVar28 = local_238;
                local_21c = local_228 + fVar25;
                local_220 = (fVar23 - local_1dc) - fVar27;
                if ((((uVar9 & 0xff000000) != 0) && (plVar10 != (longlong *)0x0)) &&
                   (*(char *)plVar10 != '\0')) {
                  fVar27 = local_238;
                  if (local_238 == 0.0) {
                    fVar27 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
                  }
                  local_170 = *(undefined4 *)(param_1 + 0x60);
                  uStack_16c = *(undefined4 *)(param_1 + 100);
                  uStack_168 = *(undefined4 *)(param_1 + 0x68);
                  uStack_164 = *(undefined4 *)(param_1 + 0x6c);
                  local_260 = 0.0;
                  local_280 = (char *)&local_170;
                  local_268 = local_268 & 0xffffffff00000000;
                  local_270 = (undefined8 *)0x0;
                  local_288 = (undefined8 *)CONCAT44(local_288._4_4_,uVar9);
                  local_278 = (char *)plVar10;
                  FUN_18040a900(pcVar18,param_1,fVar27,&local_220);
                }
              }
              fVar27 = local_248;
              fVar19 = local_244;
              fVar22 = local_240;
              fVar20 = local_23c;
              fVar23 = local_234;
            }
            lVar17 = lVar17 + 0x58;
            fVar25 = fVar25 + fVar1 * fVar27;
          } while (lVar17 != lVar5);
        }
        _DAT_180cd03d0 = fVar25 - local_230;
      }
    }
    else if ((DAT_18095cf18 == '\0') && (lVar17 = DAT_180cd03d8, DAT_180cd03d8 != DAT_180cd03e0)) {
      do {
        FUN_18000f890(lVar17 + 8);
        lVar17 = lVar17 + 0x58;
      } while (lVar17 != lVar5);
      DAT_180cd03e0 = DAT_180cd03d8;
    }
  }
  return;
}



/* ===== 1800bc960 FUN_1800bc960 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800bc960(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_b8;
  puVar5 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = puVar5 + 0xb, puVar4 != param_2) {
      local_90 = puVar4[1];
      local_78 = puVar4[4];
      uVar3 = *puVar4;
      uStack_88 = puVar4[2];
      uStack_80 = puVar4[3];
      *(undefined1 *)(puVar4 + 1) = 0;
      puVar4[3] = 0;
      puVar4[4] = 0xf;
      local_70 = puVar4[5];
      iVar2 = *(int *)(puVar4 + 6);
      local_60 = *(undefined4 *)(puVar4 + 7);
      uStack_5c = *(undefined4 *)((longlong)puVar5 + 0x94);
      uStack_58 = *(undefined4 *)(puVar4 + 8);
      uStack_54 = *(undefined4 *)((longlong)puVar5 + 0x9c);
      local_50 = *(undefined4 *)(puVar4 + 9);
      uStack_4c = *(undefined4 *)((longlong)puVar5 + 0xa4);
      uStack_48 = *(undefined4 *)(puVar4 + 10);
      uStack_44 = *(undefined4 *)((longlong)puVar5 + 0xac);
      local_64 = *(undefined4 *)((longlong)puVar5 + 0x8c);
      local_98 = uVar3;
      local_68 = iVar2;
      if (iVar2 < *(int *)(param_1 + 6)) {
        FUN_1800bcdd0(param_1,puVar4,puVar4 + 0xb);
        *param_1 = uVar3;
        FUN_18002ba60(param_1 + 1,&local_90);
        param_1[5] = local_70;
        *(int *)(param_1 + 6) = local_68;
        *(undefined4 *)(param_1 + 7) = local_60;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_5c;
        *(undefined4 *)(param_1 + 8) = uStack_58;
        *(undefined4 *)((longlong)param_1 + 0x44) = uStack_54;
        *(undefined4 *)((longlong)param_1 + 0x34) = local_64;
        *(undefined4 *)(param_1 + 9) = local_50;
        *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_4c;
        *(undefined4 *)(param_1 + 10) = uStack_48;
        *(undefined4 *)((longlong)param_1 + 0x54) = uStack_44;
      }
      else {
        iVar1 = *(int *)(puVar4 + -5);
        puVar5 = puVar4;
        while (iVar2 < iVar1) {
          *puVar5 = puVar5[-0xb];
          FUN_18002ba60(puVar5 + 1,puVar5 + -10);
          puVar5[5] = puVar5[-6];
          *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(puVar5 + -5);
          *(undefined4 *)((longlong)puVar5 + 0x34) = *(undefined4 *)((longlong)puVar5 + -0x24);
          *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(puVar5 + -4);
          *(undefined4 *)((longlong)puVar5 + 0x3c) = *(undefined4 *)((longlong)puVar5 + -0x1c);
          *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(puVar5 + -3);
          *(undefined4 *)((longlong)puVar5 + 0x44) = *(undefined4 *)((longlong)puVar5 + -0x14);
          *(undefined4 *)(puVar5 + 9) = *(undefined4 *)(puVar5 + -2);
          *(undefined4 *)((longlong)puVar5 + 0x4c) = *(undefined4 *)((longlong)puVar5 + -0xc);
          *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(puVar5 + -1);
          *(undefined4 *)((longlong)puVar5 + 0x54) = *(undefined4 *)((longlong)puVar5 + -4);
          iVar1 = *(int *)(puVar5 + -0x10);
          puVar5 = puVar5 + -0xb;
        }
        *puVar5 = uVar3;
        FUN_18002ba60(puVar5 + 1,&local_90);
        puVar5[5] = local_70;
        *(int *)(puVar5 + 6) = local_68;
        *(undefined4 *)(puVar5 + 7) = local_60;
        *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_5c;
        *(undefined4 *)(puVar5 + 8) = uStack_58;
        *(undefined4 *)((longlong)puVar5 + 0x44) = uStack_54;
        *(undefined4 *)((longlong)puVar5 + 0x34) = local_64;
        *(undefined4 *)(puVar5 + 9) = local_50;
        *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_4c;
        *(undefined4 *)(puVar5 + 10) = uStack_48;
        *(undefined4 *)((longlong)puVar5 + 0x54) = uStack_44;
      }
      FUN_18000f890(&local_90);
      puVar5 = puVar4;
    }
  }
  return param_2;
}



/* ===== 1800bcb90 FUN_1800bcb90 ===== */

void FUN_1800bcb90(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_1800bc960();
    return;
  }
  uVar1 = param_3 >> 1;
  lVar2 = param_3 - uVar1;
  lVar3 = lVar2 * 0x58 + param_1;
  if (param_5 < lVar2) {
    FUN_1800bcb90(param_1,lVar3,lVar2,param_4,param_5,param_6);
    FUN_1800bcb90(lVar3,param_2,uVar1,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_1800bce70();
    FUN_1800bce70(lVar3,param_2,uVar1,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_1800bd150(param_1,lVar3,param_2,lVar2,uVar1,param_4,param_5,param_6);
  return;
}



/* ===== 1800bcc90 FUN_1800bcc90 ===== */

undefined8 * FUN_1800bcc90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xb) {
    *param_3 = *param_1;
    FUN_18002ba60(param_3 + 1,param_1 + 1);
    param_3[5] = param_1[5];
    *(undefined4 *)(param_3 + 6) = *(undefined4 *)(param_1 + 6);
    *(undefined4 *)((longlong)param_3 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x34);
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x3c);
    uVar2 = *(undefined4 *)(param_1 + 8);
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x44);
    *(undefined4 *)(param_3 + 7) = *(undefined4 *)(param_1 + 7);
    *(undefined4 *)((longlong)param_3 + 0x3c) = uVar1;
    *(undefined4 *)(param_3 + 8) = uVar2;
    *(undefined4 *)((longlong)param_3 + 0x44) = uVar3;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x4c);
    uVar2 = *(undefined4 *)(param_1 + 10);
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x54);
    *(undefined4 *)(param_3 + 9) = *(undefined4 *)(param_1 + 9);
    *(undefined4 *)((longlong)param_3 + 0x4c) = uVar1;
    *(undefined4 *)(param_3 + 10) = uVar2;
    *(undefined4 *)((longlong)param_3 + 0x54) = uVar3;
    param_3 = param_3 + 0xb;
  }
  return param_3;
}



/* ===== 1800bcd20 FUN_1800bcd20 ===== */

void FUN_1800bcd20(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x38) {
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800bcda7;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1800bcda7:
  *(undefined8 *)(puVar5 + -8) = 0x1800bcdaf;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800bcdd0 FUN_1800bcdd0 ===== */

longlong FUN_1800bcdd0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_2 != param_1; param_2 = param_2 + -0x58) {
    *(undefined8 *)(param_3 + -0x58) = *(undefined8 *)(param_2 + -0x58);
    FUN_18002ba60(param_3 + -0x50,param_2 + -0x50);
    *(undefined8 *)(param_3 + -0x30) = *(undefined8 *)(param_2 + -0x30);
    *(undefined4 *)(param_3 + -0x28) = *(undefined4 *)(param_2 + -0x28);
    *(undefined4 *)(param_3 + -0x24) = *(undefined4 *)(param_2 + -0x24);
    uVar1 = *(undefined4 *)(param_2 + -0x1c);
    uVar2 = *(undefined4 *)(param_2 + -0x18);
    uVar3 = *(undefined4 *)(param_2 + -0x14);
    *(undefined4 *)(param_3 + -0x20) = *(undefined4 *)(param_2 + -0x20);
    *(undefined4 *)(param_3 + -0x1c) = uVar1;
    *(undefined4 *)(param_3 + -0x18) = uVar2;
    *(undefined4 *)(param_3 + -0x14) = uVar3;
    uVar1 = *(undefined4 *)(param_2 + -0xc);
    uVar2 = *(undefined4 *)(param_2 + -8);
    uVar3 = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(param_3 + -0x10) = *(undefined4 *)(param_2 + -0x10);
    *(undefined4 *)(param_3 + -0xc) = uVar1;
    *(undefined4 *)(param_3 + -8) = uVar2;
    *(undefined4 *)(param_3 + -4) = uVar3;
    param_3 = param_3 + -0x58;
  }
  return param_3;
}



/* ===== 1800bce70 FUN_1800bce70 ===== */

void FUN_1800bce70(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  
  puVar6 = param_1;
  for (lVar9 = param_3; 0x20 < lVar9; lVar9 = lVar9 + -0x20) {
    puVar6 = (undefined8 *)FUN_1800bc960(puVar6,puVar6 + 0x160);
  }
  FUN_1800bc960(puVar6,param_2);
  if (0x20 < param_3) {
    lVar8 = 0;
    puVar10 = param_1;
    lVar9 = param_3;
    puVar6 = param_4;
    do {
      lVar11 = lVar9 + -0x40;
      if (lVar9 + -0x20 < 0x20) {
        lVar11 = lVar8;
      }
      lVar8 = 0x15a8;
      lVar12 = 0x1600;
      if (lVar9 + -0x20 < 0x20) {
        lVar8 = lVar9 * 0x58 + -0x58;
        lVar12 = lVar9 * 0x58;
      }
      puVar1 = (undefined8 *)(lVar12 + (longlong)puVar10);
      puVar7 = puVar10 + 0x160;
      puVar13 = puVar10;
      while( true ) {
        for (; *(int *)(puVar13 + 6) <= *(int *)(puVar7 + 6); puVar13 = puVar13 + 0xb) {
          *puVar6 = *puVar13;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          uVar5 = puVar13[2];
          puVar6[1] = puVar13[1];
          puVar6[2] = uVar5;
          uVar5 = puVar13[4];
          puVar6[3] = puVar13[3];
          puVar6[4] = uVar5;
          *(undefined1 *)(puVar13 + 1) = 0;
          puVar13[3] = 0;
          puVar13[4] = 0xf;
          puVar6[5] = puVar13[5];
          *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(puVar13 + 6);
          *(undefined4 *)((longlong)puVar6 + 0x34) = *(undefined4 *)((longlong)puVar13 + 0x34);
          uVar2 = *(undefined4 *)((longlong)puVar13 + 0x3c);
          uVar3 = *(undefined4 *)(puVar13 + 8);
          uVar4 = *(undefined4 *)((longlong)puVar13 + 0x44);
          *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(puVar13 + 7);
          *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar2;
          *(undefined4 *)(puVar6 + 8) = uVar3;
          *(undefined4 *)((longlong)puVar6 + 0x44) = uVar4;
          uVar2 = *(undefined4 *)((longlong)puVar13 + 0x4c);
          uVar3 = *(undefined4 *)(puVar13 + 10);
          uVar4 = *(undefined4 *)((longlong)puVar13 + 0x54);
          *(undefined4 *)(puVar6 + 9) = *(undefined4 *)(puVar13 + 9);
          *(undefined4 *)((longlong)puVar6 + 0x4c) = uVar2;
          *(undefined4 *)(puVar6 + 10) = uVar3;
          *(undefined4 *)((longlong)puVar6 + 0x54) = uVar4;
          if (puVar13 == puVar10 + 0x155) goto LAB_1800bd04e;
          puVar6 = puVar6 + 0xb;
        }
        *puVar6 = *puVar7;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        uVar5 = puVar7[2];
        puVar6[1] = puVar7[1];
        puVar6[2] = uVar5;
        uVar5 = puVar7[4];
        puVar6[3] = puVar7[3];
        puVar6[4] = uVar5;
        *(undefined1 *)(puVar7 + 1) = 0;
        puVar7[3] = 0;
        puVar7[4] = 0xf;
        puVar6[5] = puVar7[5];
        *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(puVar7 + 6);
        *(undefined4 *)((longlong)puVar6 + 0x34) = *(undefined4 *)((longlong)puVar7 + 0x34);
        uVar2 = *(undefined4 *)((longlong)puVar7 + 0x3c);
        uVar3 = *(undefined4 *)(puVar7 + 8);
        uVar4 = *(undefined4 *)((longlong)puVar7 + 0x44);
        *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(puVar7 + 7);
        *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar2;
        *(undefined4 *)(puVar6 + 8) = uVar3;
        *(undefined4 *)((longlong)puVar6 + 0x44) = uVar4;
        uVar2 = *(undefined4 *)((longlong)puVar7 + 0x4c);
        uVar3 = *(undefined4 *)(puVar7 + 10);
        uVar4 = *(undefined4 *)((longlong)puVar7 + 0x54);
        *(undefined4 *)(puVar6 + 9) = *(undefined4 *)(puVar7 + 9);
        *(undefined4 *)((longlong)puVar6 + 0x4c) = uVar2;
        *(undefined4 *)(puVar6 + 10) = uVar3;
        *(undefined4 *)((longlong)puVar6 + 0x54) = uVar4;
        if (puVar7 == (undefined8 *)(lVar8 + (longlong)puVar10)) break;
        puVar7 = puVar7 + 0xb;
        puVar6 = puVar6 + 0xb;
      }
      lVar12 = 0xb00;
      puVar7 = puVar13;
LAB_1800bd04e:
      lVar8 = 0;
      puVar6 = (undefined8 *)FUN_1800bd9c0(puVar7,lVar12 + (longlong)puVar10,puVar6 + 0xb);
      puVar10 = puVar1;
      lVar9 = lVar11;
    } while (0x20 < lVar11);
    FUN_1800bd9c0(puVar1,param_2,puVar6);
    lVar9 = 0x40;
    puVar6 = param_4 + param_3 * 0xb;
    FUN_1800bd5e0(param_4,puVar6,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_1800bd5e0(param_1,param_2,param_4,lVar9 * 2,param_3,param_5);
        lVar9 = lVar9 * 4;
        FUN_1800bd5e0(param_4,puVar6,param_1,lVar9,param_3,param_5);
      } while (lVar9 <= (param_3 + -1) / 2);
    }
    if (param_3 * 0x58 != 0) {
      do {
        FUN_18000f890(param_4 + 1);
        param_4 = param_4 + 0xb;
      } while (param_4 != puVar6);
    }
  }
  return;
}



/* ===== 1800bd150 FUN_1800bd150 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800bd150(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_38;
  
  if (param_2 == param_3) {
    return;
  }
  local_38 = DAT_180919500 ^ (ulonglong)auStack_d8;
  if (param_1 == param_2) {
    return;
  }
  local_68 = *(int *)(param_2 + 6);
  while (*(int *)(param_1 + 6) <= local_68) {
    param_1 = param_1 + 0xb;
    param_4 = param_4 + -1;
    if (param_1 == param_2) {
      return;
    }
  }
  if (param_2 != param_3 + -0xb) {
    puVar4 = param_3 + -0xb;
    puVar6 = param_3;
    do {
      param_3 = puVar4;
      if (*(int *)(puVar6 + -5) < *(int *)(param_2 + -5)) {
        if (param_4 != 1) {
          local_a0 = param_8;
          local_a8 = param_7;
          local_b0 = param_6;
          local_b8 = param_5;
          FUN_1800bd7d0(param_1,param_2,puVar6);
          return;
        }
        local_90 = param_1[1];
        local_78 = param_1[4];
        uVar5 = *param_1;
        uStack_88 = param_1[2];
        uStack_80 = param_1[3];
        *(undefined1 *)(param_1 + 1) = 0;
        param_1[3] = 0;
        param_1[4] = 0xf;
        local_70 = param_1[5];
        local_64 = *(undefined4 *)((longlong)param_1 + 0x34);
        local_60 = *(undefined4 *)(param_1 + 7);
        uStack_5c = *(undefined4 *)((longlong)param_1 + 0x3c);
        uStack_58 = *(undefined4 *)(param_1 + 8);
        uStack_54 = *(undefined4 *)((longlong)param_1 + 0x44);
        local_50 = *(undefined4 *)(param_1 + 9);
        uStack_4c = *(undefined4 *)((longlong)param_1 + 0x4c);
        uStack_48 = *(undefined4 *)(param_1 + 10);
        uStack_44 = *(undefined4 *)((longlong)param_1 + 0x54);
        local_68 = *(int *)(param_1 + 6);
        local_98 = uVar5;
        for (; param_2 != puVar6; param_2 = param_2 + 0xb) {
          *param_1 = *param_2;
          FUN_18002ba60(param_1 + 1,param_2 + 1);
          param_1[5] = param_2[5];
          *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
          *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
          uVar1 = *(undefined4 *)((longlong)param_2 + 0x3c);
          uVar2 = *(undefined4 *)(param_2 + 8);
          uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
          *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
          *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
          *(undefined4 *)(param_1 + 8) = uVar2;
          *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
          uVar1 = *(undefined4 *)((longlong)param_2 + 0x4c);
          uVar2 = *(undefined4 *)(param_2 + 10);
          uVar3 = *(undefined4 *)((longlong)param_2 + 0x54);
          *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar1;
          *(undefined4 *)(param_1 + 10) = uVar2;
          *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
          param_1 = param_1 + 0xb;
        }
        goto LAB_1800bd258;
      }
      param_5 = param_5 + -1;
      puVar4 = param_3 + -0xb;
      puVar6 = param_3;
    } while (param_2 != param_3 + -0xb);
  }
  local_90 = param_2[1];
  local_78 = param_2[4];
  uVar5 = *param_2;
  uStack_88 = param_2[2];
  uStack_80 = param_2[3];
  *(undefined1 *)(param_2 + 1) = 0;
  param_2[3] = 0;
  param_2[4] = 0xf;
  local_70 = param_2[5];
  local_60 = *(undefined4 *)(param_2 + 7);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x44);
  local_50 = *(undefined4 *)(param_2 + 9);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x4c);
  uStack_48 = *(undefined4 *)(param_2 + 10);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x54);
  local_64 = *(undefined4 *)((longlong)param_2 + 0x34);
  local_98 = uVar5;
  FUN_1800bcdd0(param_1,param_2,param_3);
LAB_1800bd258:
  *param_1 = uVar5;
  FUN_18002ba60(param_1 + 1,&local_90);
  param_1[5] = local_70;
  *(int *)(param_1 + 6) = local_68;
  *(undefined4 *)(param_1 + 7) = local_60;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_5c;
  *(undefined4 *)(param_1 + 8) = uStack_58;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_54;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_64;
  *(undefined4 *)(param_1 + 9) = local_50;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_4c;
  *(undefined4 *)(param_1 + 10) = uStack_48;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_44;
  FUN_18000f890(&local_90);
  return;
}



/* ===== 1800bd3b0 FUN_1800bd3b0 ===== */

undefined8 * FUN_1800bd3b0(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar10 = (ulonglong)DAT_180cd03d8;
  uVar14 = 0x2e8ba2e8ba2e8ba;
  lVar7 = ((longlong)DAT_180cd03e0 - (longlong)DAT_180cd03d8 >> 3) * 0x2e8ba2e8ba2e8ba3;
  if (lVar7 == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar7 + 1;
  uVar9 = ((longlong)DAT_180cd03e8 - (longlong)DAT_180cd03d8 >> 3) * 0x2e8ba2e8ba2e8ba3;
  if (uVar9 <= 0x2e8ba2e8ba2e8ba - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar14 = uVar1;
    if (uVar1 <= uVar9) {
      uVar14 = uVar9;
    }
    if (0x2e8ba2e8ba2e8ba < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined8 *)FUN_18000fb70(uVar14 * 0x58);
  puVar15 = puVar8 + ((longlong)(param_2 - uVar10) / 0x58) * 0xb;
  *puVar15 = *param_3;
  puVar15[1] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  puVar15[4] = 0;
  uVar6 = param_3[2];
  puVar15[1] = param_3[1];
  puVar15[2] = uVar6;
  uVar6 = param_3[4];
  puVar15[3] = param_3[3];
  puVar15[4] = uVar6;
  param_3[3] = 0;
  param_3[4] = 0xf;
  *(undefined1 *)(param_3 + 1) = 0;
  puVar15[5] = param_3[5];
  *(undefined4 *)(puVar15 + 6) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)puVar15 + 0x34) = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x3c);
  uVar4 = *(undefined4 *)(param_3 + 8);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x44);
  *(undefined4 *)(puVar15 + 7) = *(undefined4 *)(param_3 + 7);
  *(undefined4 *)((longlong)puVar15 + 0x3c) = uVar3;
  *(undefined4 *)(puVar15 + 8) = uVar4;
  *(undefined4 *)((longlong)puVar15 + 0x44) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x4c);
  uVar4 = *(undefined4 *)(param_3 + 10);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x54);
  *(undefined4 *)(puVar15 + 9) = *(undefined4 *)(param_3 + 9);
  *(undefined4 *)((longlong)puVar15 + 0x4c) = uVar3;
  *(undefined4 *)(puVar15 + 10) = uVar4;
  *(undefined4 *)((longlong)puVar15 + 0x54) = uVar5;
  uVar10 = (ulonglong)DAT_180cd03d8;
  puVar13 = puVar8;
  if ((undefined8 *)param_2 != DAT_180cd03e0) {
    FUN_1800bd9c0(DAT_180cd03d8,param_2,puVar8);
    puVar13 = puVar15 + 0xb;
    uVar10 = param_2;
  }
  puVar11 = auStack_48;
  puVar12 = auStack_48;
  FUN_1800bd9c0(uVar10,DAT_180cd03e0,puVar13);
  uVar9 = (ulonglong)DAT_180cd03e0;
  uVar10 = (ulonglong)DAT_180cd03d8;
  if (DAT_180cd03d8 == (undefined8 *)0x0) goto LAB_1800bd58e;
  for (; uVar10 != uVar9; uVar10 = uVar10 + 0x58) {
    FUN_18000f890(uVar10 + 8);
  }
  uVar10 = (ulonglong)DAT_180cd03d8;
  if ((ulonglong)(((longlong)DAT_180cd03e8 - (longlong)DAT_180cd03d8 >> 3) * 8) < 0x1000) {
LAB_1800bd586:
    puVar12 = puVar11;
  }
  else {
    uVar10 = *(ulonglong *)((longlong)DAT_180cd03d8 - 8);
    uVar9 = ((longlong)DAT_180cd03d8 - uVar10) - 8;
    if (0x1f < uVar9) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar11 = auStack_40;
      uVar10 = uVar9;
      goto LAB_1800bd586;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1800bd58e;
  thunk_FUN_1803d64e0(uVar10);
LAB_1800bd58e:
  DAT_180cd03e0 = puVar8 + uVar1 * 0xb;
  DAT_180cd03d8 = puVar8;
  DAT_180cd03e8 = puVar8 + uVar14 * 0xb;
  return puVar15;
}



/* ===== 1800bd5e0 FUN_1800bd5e0 ===== */

void FUN_1800bd5e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  if (param_5 <= param_4) {
joined_r0x0001800bd767:
    for (; param_1 != param_2; param_1 = param_1 + 0xb) {
      *param_3 = *param_1;
      FUN_18002ba60(param_3 + 1,param_1 + 1);
      param_3[5] = param_1[5];
      *(undefined4 *)(param_3 + 6) = *(undefined4 *)(param_1 + 6);
      *(undefined4 *)((longlong)param_3 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x34);
      uVar2 = *(undefined4 *)((longlong)param_1 + 0x3c);
      uVar3 = *(undefined4 *)(param_1 + 8);
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x44);
      *(undefined4 *)(param_3 + 7) = *(undefined4 *)(param_1 + 7);
      *(undefined4 *)((longlong)param_3 + 0x3c) = uVar2;
      *(undefined4 *)(param_3 + 8) = uVar3;
      *(undefined4 *)((longlong)param_3 + 0x44) = uVar4;
      uVar5 = param_1[10];
      param_3[9] = param_1[9];
      param_3[10] = uVar5;
      param_3 = param_3 + 0xb;
    }
    return;
  }
  puVar11 = param_1;
LAB_1800bd640:
  puVar8 = puVar11 + param_4 * 0xb;
  lVar10 = param_5 - param_4;
  lVar6 = param_4;
  if (lVar10 < param_4) {
    lVar6 = lVar10;
  }
  lVar7 = param_4 * 2;
  if (lVar10 < param_4) {
    lVar7 = param_5;
  }
  param_1 = puVar11 + lVar7 * 0xb;
  puVar9 = puVar11;
  do {
    if (*(int *)(puVar8 + 6) < *(int *)(puVar9 + 6)) {
      *param_3 = *puVar8;
      FUN_18002ba60(param_3 + 1,puVar8 + 1);
      param_3[5] = puVar8[5];
      *(undefined4 *)(param_3 + 6) = *(undefined4 *)(puVar8 + 6);
      *(undefined4 *)((longlong)param_3 + 0x34) = *(undefined4 *)((longlong)puVar8 + 0x34);
      uVar2 = *(undefined4 *)((longlong)puVar8 + 0x3c);
      uVar3 = *(undefined4 *)(puVar8 + 8);
      uVar4 = *(undefined4 *)((longlong)puVar8 + 0x44);
      *(undefined4 *)(param_3 + 7) = *(undefined4 *)(puVar8 + 7);
      *(undefined4 *)((longlong)param_3 + 0x3c) = uVar2;
      *(undefined4 *)(param_3 + 8) = uVar3;
      *(undefined4 *)((longlong)param_3 + 0x44) = uVar4;
      puVar1 = puVar8 + 9;
      uVar2 = *(undefined4 *)((longlong)puVar8 + 0x4c);
      uVar3 = *(undefined4 *)(puVar8 + 10);
      uVar4 = *(undefined4 *)((longlong)puVar8 + 0x54);
      puVar8 = puVar8 + 0xb;
      *(undefined4 *)(param_3 + 9) = *(undefined4 *)puVar1;
      *(undefined4 *)((longlong)param_3 + 0x4c) = uVar2;
      *(undefined4 *)(param_3 + 10) = uVar3;
      *(undefined4 *)((longlong)param_3 + 0x54) = uVar4;
      if (puVar8 == param_1) break;
    }
    else {
      *param_3 = *puVar9;
      FUN_18002ba60(param_3 + 1,puVar9 + 1);
      param_3[5] = puVar9[5];
      *(undefined4 *)(param_3 + 6) = *(undefined4 *)(puVar9 + 6);
      *(undefined4 *)((longlong)param_3 + 0x34) = *(undefined4 *)((longlong)puVar9 + 0x34);
      uVar2 = *(undefined4 *)((longlong)puVar9 + 0x3c);
      uVar3 = *(undefined4 *)(puVar9 + 8);
      uVar4 = *(undefined4 *)((longlong)puVar9 + 0x44);
      *(undefined4 *)(param_3 + 7) = *(undefined4 *)(puVar9 + 7);
      *(undefined4 *)((longlong)param_3 + 0x3c) = uVar2;
      *(undefined4 *)(param_3 + 8) = uVar3;
      *(undefined4 *)((longlong)param_3 + 0x44) = uVar4;
      puVar1 = puVar9 + 9;
      uVar2 = *(undefined4 *)((longlong)puVar9 + 0x4c);
      uVar3 = *(undefined4 *)(puVar9 + 10);
      uVar4 = *(undefined4 *)((longlong)puVar9 + 0x54);
      puVar9 = puVar9 + 0xb;
      *(undefined4 *)(param_3 + 9) = *(undefined4 *)puVar1;
      *(undefined4 *)((longlong)param_3 + 0x4c) = uVar2;
      *(undefined4 *)(param_3 + 10) = uVar3;
      *(undefined4 *)((longlong)param_3 + 0x54) = uVar4;
      if (puVar9 == puVar11 + param_4 * 0xb) goto LAB_1800bd718;
    }
    param_3 = param_3 + 0xb;
  } while( true );
  lVar7 = param_4;
  puVar8 = puVar9;
LAB_1800bd718:
  param_3 = (undefined8 *)FUN_1800bcc90(puVar8,puVar11 + lVar7 * 0xb,param_3 + 0xb);
  param_5 = lVar10 - lVar6;
  puVar11 = param_1;
  if (lVar10 - lVar6 <= param_4) goto joined_r0x0001800bd767;
  goto LAB_1800bd640;
}



/* ===== 1800bd7d0 FUN_1800bd7d0 ===== */

void FUN_1800bd7d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,longlong param_7,undefined1 param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    FUN_1800bda90();
    return;
  }
  if (param_5 <= param_7) {
    FUN_1800bdcc0();
    return;
  }
  if (param_5 < param_4) {
    lVar1 = param_5 >> 1;
    uVar2 = (param_2 - param_1 >> 3) * 0x2e8ba2e8ba2e8ba3;
    lVar5 = lVar1 * 0x58 + param_2;
    lVar6 = param_1;
    if (0 < (longlong)uVar2) {
      do {
        uVar3 = uVar2 >> 1;
        if (*(int *)(uVar3 * 0x58 + 0x30 + lVar6) <= *(int *)(lVar5 + 0x30)) {
          lVar6 = lVar6 + uVar3 * 0x58 + 0x58;
          uVar3 = uVar2 + (-1 - uVar3);
        }
        uVar2 = uVar3;
      } while (0 < (longlong)uVar3);
    }
    lVar4 = (lVar6 - param_1 >> 3) * 0x2e8ba2e8ba2e8ba3;
  }
  else {
    lVar4 = param_4 >> 1;
    uVar2 = (param_3 - param_2 >> 3) * 0x2e8ba2e8ba2e8ba3;
    lVar6 = lVar4 * 0x58 + param_1;
    lVar5 = param_2;
    if (0 < (longlong)uVar2) {
      do {
        uVar3 = uVar2 >> 1;
        if (*(int *)(uVar3 * 0x58 + 0x30 + lVar5) < *(int *)(lVar6 + 0x30)) {
          lVar5 = lVar5 + uVar3 * 0x58 + 0x58;
          uVar3 = uVar2 + (-1 - uVar3);
        }
        uVar2 = uVar3;
      } while (0 < (longlong)uVar3);
    }
    lVar1 = (lVar5 - param_2 >> 3) * 0x2e8ba2e8ba2e8ba3;
  }
  FUN_1800bdf00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar6,lVar5,lVar4,
                lVar1);
  return;
}



/* ===== 1800bd9c0 FUN_1800bd9c0 ===== */

undefined8 * FUN_1800bd9c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xb) {
    *param_3 = *param_1;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    uVar1 = param_1[2];
    param_3[1] = param_1[1];
    param_3[2] = uVar1;
    uVar1 = param_1[4];
    param_3[3] = param_1[3];
    param_3[4] = uVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[3] = 0;
    param_1[4] = 0xf;
    param_3[5] = param_1[5];
    *(undefined4 *)(param_3 + 6) = *(undefined4 *)(param_1 + 6);
    *(undefined4 *)((longlong)param_3 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x34);
    uVar1 = param_1[8];
    param_3[7] = param_1[7];
    param_3[8] = uVar1;
    uVar1 = param_1[10];
    param_3[9] = param_1[9];
    param_3[10] = uVar1;
    param_3 = param_3 + 0xb;
  }
  return param_3;
}



/* ===== 1800bda50 FUN_1800bda50 ===== */

void FUN_1800bda50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    FUN_18000f890(lVar2);
  }
  return;
}



/* ===== 1800bda90 FUN_1800bda90 ===== */

void FUN_1800bda90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar7 = param_2;
  puVar6 = (undefined8 *)FUN_1800bd9c0(param_1,param_2,param_4);
  *param_1 = *puVar7;
  FUN_18002ba60(param_1 + 1,puVar7 + 1);
  param_1[5] = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar3 = *(undefined4 *)(param_2 + 10);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 10) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar4;
  param_2 = param_2 + 0xb;
  puVar7 = param_4;
  puVar9 = param_1 + 0xb;
  do {
    puVar8 = puVar9 + 0xb;
    if (*(int *)(param_2 + 6) < *(int *)(puVar7 + 6)) {
      *puVar9 = *param_2;
      FUN_18002ba60(puVar9 + 1,param_2 + 1);
      puVar9[5] = param_2[5];
      *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)((longlong)puVar9 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x3c);
      uVar3 = *(undefined4 *)(param_2 + 8);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x44);
      *(undefined4 *)(puVar9 + 7) = *(undefined4 *)(param_2 + 7);
      *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar2;
      *(undefined4 *)(puVar9 + 8) = uVar3;
      *(undefined4 *)((longlong)puVar9 + 0x44) = uVar4;
      puVar1 = param_2 + 9;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x4c);
      uVar3 = *(undefined4 *)(param_2 + 10);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x54);
      param_2 = param_2 + 0xb;
      *(undefined4 *)(puVar9 + 9) = *(undefined4 *)puVar1;
      *(undefined4 *)((longlong)puVar9 + 0x4c) = uVar2;
      *(undefined4 *)(puVar9 + 10) = uVar3;
      *(undefined4 *)((longlong)puVar9 + 0x54) = uVar4;
      if (param_2 == param_3) break;
    }
    else {
      *puVar9 = *puVar7;
      FUN_18002ba60(puVar9 + 1,puVar7 + 1);
      puVar9[5] = puVar7[5];
      *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(puVar7 + 6);
      *(undefined4 *)((longlong)puVar9 + 0x34) = *(undefined4 *)((longlong)puVar7 + 0x34);
      uVar2 = *(undefined4 *)((longlong)puVar7 + 0x3c);
      uVar3 = *(undefined4 *)(puVar7 + 8);
      uVar4 = *(undefined4 *)((longlong)puVar7 + 0x44);
      *(undefined4 *)(puVar9 + 7) = *(undefined4 *)(puVar7 + 7);
      *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar2;
      *(undefined4 *)(puVar9 + 8) = uVar3;
      *(undefined4 *)((longlong)puVar9 + 0x44) = uVar4;
      uVar2 = *(undefined4 *)((longlong)puVar7 + 0x4c);
      uVar3 = *(undefined4 *)(puVar7 + 10);
      uVar4 = *(undefined4 *)((longlong)puVar7 + 0x54);
      *(undefined4 *)(puVar9 + 9) = *(undefined4 *)(puVar7 + 9);
      *(undefined4 *)((longlong)puVar9 + 0x4c) = uVar2;
      *(undefined4 *)(puVar9 + 10) = uVar3;
      *(undefined4 *)((longlong)puVar9 + 0x54) = uVar4;
      if (puVar7 == puVar6 + -0x16) goto joined_r0x0001800bdc05;
      puVar7 = puVar7 + 0xb;
    }
    puVar9 = puVar8;
  } while( true );
  for (; puVar7 != puVar6; puVar7 = puVar7 + 0xb) {
    *puVar8 = *puVar7;
    FUN_18002ba60(puVar8 + 1,puVar7 + 1);
    puVar8[5] = puVar7[5];
    *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(puVar7 + 6);
    *(undefined4 *)((longlong)puVar8 + 0x34) = *(undefined4 *)((longlong)puVar7 + 0x34);
    uVar2 = *(undefined4 *)((longlong)puVar7 + 0x3c);
    uVar3 = *(undefined4 *)(puVar7 + 8);
    uVar4 = *(undefined4 *)((longlong)puVar7 + 0x44);
    *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(puVar7 + 7);
    *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar2;
    *(undefined4 *)(puVar8 + 8) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0x44) = uVar4;
    uVar2 = *(undefined4 *)((longlong)puVar7 + 0x4c);
    uVar3 = *(undefined4 *)(puVar7 + 10);
    uVar4 = *(undefined4 *)((longlong)puVar7 + 0x54);
    *(undefined4 *)(puVar8 + 9) = *(undefined4 *)(puVar7 + 9);
    *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar2;
    *(undefined4 *)(puVar8 + 10) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0x54) = uVar4;
    puVar8 = puVar8 + 0xb;
  }
  goto joined_r0x0001800bdc93;
joined_r0x0001800bdc05:
  for (; param_2 != param_3; param_2 = param_2 + 0xb) {
    *puVar8 = *param_2;
    FUN_18002ba60(puVar8 + 1,param_2 + 1);
    puVar8[5] = param_2[5];
    *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)puVar8 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x3c);
    uVar3 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x44);
    *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(param_2 + 7);
    *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar2;
    *(undefined4 *)(puVar8 + 8) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0x44) = uVar4;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x4c);
    uVar3 = *(undefined4 *)(param_2 + 10);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x54);
    *(undefined4 *)(puVar8 + 9) = *(undefined4 *)(param_2 + 9);
    *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar2;
    *(undefined4 *)(puVar8 + 10) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0x54) = uVar4;
    puVar8 = puVar8 + 0xb;
  }
  *puVar8 = puVar6[-0xb];
  FUN_18002ba60(puVar8 + 1,puVar6 + -10);
  puVar8[5] = puVar6[-6];
  *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(puVar6 + -5);
  *(undefined4 *)((longlong)puVar8 + 0x34) = *(undefined4 *)((longlong)puVar6 + -0x24);
  uVar2 = *(undefined4 *)((longlong)puVar6 + -0x1c);
  uVar3 = *(undefined4 *)(puVar6 + -3);
  uVar4 = *(undefined4 *)((longlong)puVar6 + -0x14);
  *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(puVar6 + -4);
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar2;
  *(undefined4 *)(puVar8 + 8) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x44) = uVar4;
  uVar5 = puVar6[-1];
  puVar8[9] = puVar6[-2];
  puVar8[10] = uVar5;
joined_r0x0001800bdc93:
  for (; param_4 != puVar6; param_4 = param_4 + 0xb) {
    FUN_18000f890(param_4 + 1);
  }
  return;
}



/* ===== 1800bdcc0 FUN_1800bdcc0 ===== */

void FUN_1800bdcc0(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar6 = (undefined8 *)FUN_1800bd9c0(param_2,param_3,param_4);
  puVar7 = (undefined8 *)(param_3 + -0x58);
  *puVar7 = *(undefined8 *)(param_2 + -0x58);
  FUN_18002ba60(param_3 + -0x50,param_2 + -0x50);
  puVar9 = puVar6 + -0xb;
  *(undefined8 *)(param_3 + -0x30) = *(undefined8 *)(param_2 + -0x30);
  *(undefined4 *)(param_3 + -0x28) = *(undefined4 *)(param_2 + -0x28);
  *(undefined4 *)(param_3 + -0x24) = *(undefined4 *)(param_2 + -0x24);
  uVar2 = *(undefined4 *)(param_2 + -0x1c);
  uVar3 = *(undefined4 *)(param_2 + -0x18);
  uVar4 = *(undefined4 *)(param_2 + -0x14);
  *(undefined4 *)(param_3 + -0x20) = *(undefined4 *)(param_2 + -0x20);
  *(undefined4 *)(param_3 + -0x1c) = uVar2;
  *(undefined4 *)(param_3 + -0x18) = uVar3;
  *(undefined4 *)(param_3 + -0x14) = uVar4;
  uVar2 = *(undefined4 *)(param_2 + -0xc);
  uVar3 = *(undefined4 *)(param_2 + -8);
  uVar4 = *(undefined4 *)(param_2 + -4);
  puVar8 = (undefined8 *)(param_2 + -0xb0);
  *(undefined4 *)(param_3 + -0x10) = *(undefined4 *)(param_2 + -0x10);
  *(undefined4 *)(param_3 + -0xc) = uVar2;
  *(undefined4 *)(param_3 + -8) = uVar3;
  *(undefined4 *)(param_3 + -4) = uVar4;
  do {
    while (*(int *)(puVar8 + 6) <= *(int *)(puVar9 + 6)) {
      puVar7[-0xb] = *puVar9;
      FUN_18002ba60(puVar7 + -10,puVar9 + 1);
      puVar7[-6] = puVar9[5];
      *(undefined4 *)(puVar7 + -5) = *(undefined4 *)(puVar9 + 6);
      *(undefined4 *)((longlong)puVar7 + -0x24) = *(undefined4 *)((longlong)puVar9 + 0x34);
      uVar2 = *(undefined4 *)((longlong)puVar9 + 0x3c);
      uVar3 = *(undefined4 *)(puVar9 + 8);
      uVar4 = *(undefined4 *)((longlong)puVar9 + 0x44);
      *(undefined4 *)(puVar7 + -4) = *(undefined4 *)(puVar9 + 7);
      *(undefined4 *)((longlong)puVar7 + -0x1c) = uVar2;
      *(undefined4 *)(puVar7 + -3) = uVar3;
      *(undefined4 *)((longlong)puVar7 + -0x14) = uVar4;
      puVar1 = puVar9 + 9;
      uVar2 = *(undefined4 *)((longlong)puVar9 + 0x4c);
      uVar3 = *(undefined4 *)(puVar9 + 10);
      uVar4 = *(undefined4 *)((longlong)puVar9 + 0x54);
      puVar9 = puVar9 + -0xb;
      *(undefined4 *)(puVar7 + -2) = *(undefined4 *)puVar1;
      *(undefined4 *)((longlong)puVar7 + -0xc) = uVar2;
      *(undefined4 *)(puVar7 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar7 + -4) = uVar4;
      if (param_4 == puVar9) {
        puVar7[-0x16] = *puVar8;
        FUN_18002ba60(puVar7 + -0x15,puVar8 + 1);
        puVar7[-0x11] = puVar8[5];
        *(undefined4 *)(puVar7 + -0x10) = *(undefined4 *)(puVar8 + 6);
        *(undefined4 *)((longlong)puVar7 + -0x7c) = *(undefined4 *)((longlong)puVar8 + 0x34);
        uVar2 = *(undefined4 *)((longlong)puVar8 + 0x3c);
        uVar3 = *(undefined4 *)(puVar8 + 8);
        uVar4 = *(undefined4 *)((longlong)puVar8 + 0x44);
        *(undefined4 *)(puVar7 + -0xf) = *(undefined4 *)(puVar8 + 7);
        *(undefined4 *)((longlong)puVar7 + -0x74) = uVar2;
        *(undefined4 *)(puVar7 + -0xe) = uVar3;
        *(undefined4 *)((longlong)puVar7 + -0x6c) = uVar4;
        uVar2 = *(undefined4 *)((longlong)puVar8 + 0x4c);
        uVar3 = *(undefined4 *)(puVar8 + 10);
        uVar4 = *(undefined4 *)((longlong)puVar8 + 0x54);
        *(undefined4 *)(puVar7 + -0xd) = *(undefined4 *)(puVar8 + 9);
        *(undefined4 *)((longlong)puVar7 + -100) = uVar2;
        *(undefined4 *)(puVar7 + -0xc) = uVar3;
        *(undefined4 *)((longlong)puVar7 + -0x5c) = uVar4;
        FUN_1800bcdd0(param_1,puVar8,puVar7 + -0x16);
        *param_1 = *param_4;
        FUN_18002ba60(param_1 + 1,param_4 + 1);
        param_1[5] = param_4[5];
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_4 + 6);
        *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_4 + 0x34);
        uVar2 = *(undefined4 *)((longlong)param_4 + 0x3c);
        uVar3 = *(undefined4 *)(param_4 + 8);
        uVar4 = *(undefined4 *)((longlong)param_4 + 0x44);
        *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_4 + 7);
        *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
        *(undefined4 *)(param_1 + 8) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
        uVar5 = param_4[10];
        param_1[9] = param_4[9];
        param_1[10] = uVar5;
joined_r0x0001800bded2:
        for (; param_4 != puVar6; param_4 = param_4 + 0xb) {
          FUN_18000f890(param_4 + 1);
        }
        return;
      }
      puVar7 = puVar7 + -0xb;
    }
    puVar7[-0xb] = *puVar8;
    FUN_18002ba60(puVar7 + -10,puVar8 + 1);
    puVar7[-6] = puVar8[5];
    *(undefined4 *)(puVar7 + -5) = *(undefined4 *)(puVar8 + 6);
    *(undefined4 *)((longlong)puVar7 + -0x24) = *(undefined4 *)((longlong)puVar8 + 0x34);
    uVar2 = *(undefined4 *)((longlong)puVar8 + 0x3c);
    uVar3 = *(undefined4 *)(puVar8 + 8);
    uVar4 = *(undefined4 *)((longlong)puVar8 + 0x44);
    *(undefined4 *)(puVar7 + -4) = *(undefined4 *)(puVar8 + 7);
    *(undefined4 *)((longlong)puVar7 + -0x1c) = uVar2;
    *(undefined4 *)(puVar7 + -3) = uVar3;
    *(undefined4 *)((longlong)puVar7 + -0x14) = uVar4;
    uVar2 = *(undefined4 *)((longlong)puVar8 + 0x4c);
    uVar3 = *(undefined4 *)(puVar8 + 10);
    uVar4 = *(undefined4 *)((longlong)puVar8 + 0x54);
    *(undefined4 *)(puVar7 + -2) = *(undefined4 *)(puVar8 + 9);
    *(undefined4 *)((longlong)puVar7 + -0xc) = uVar2;
    *(undefined4 *)(puVar7 + -1) = uVar3;
    *(undefined4 *)((longlong)puVar7 + -4) = uVar4;
    if (param_1 == puVar8) {
      puVar7[-0x16] = *puVar9;
      FUN_18002ba60(puVar7 + -0x15,puVar9 + 1);
      puVar7[-0x11] = puVar9[5];
      *(undefined4 *)(puVar7 + -0x10) = *(undefined4 *)(puVar9 + 6);
      *(undefined4 *)((longlong)puVar7 + -0x7c) = *(undefined4 *)((longlong)puVar9 + 0x34);
      uVar2 = *(undefined4 *)((longlong)puVar9 + 0x3c);
      uVar3 = *(undefined4 *)(puVar9 + 8);
      uVar4 = *(undefined4 *)((longlong)puVar9 + 0x44);
      *(undefined4 *)(puVar7 + -0xf) = *(undefined4 *)(puVar9 + 7);
      *(undefined4 *)((longlong)puVar7 + -0x74) = uVar2;
      *(undefined4 *)(puVar7 + -0xe) = uVar3;
      *(undefined4 *)((longlong)puVar7 + -0x6c) = uVar4;
      uVar2 = *(undefined4 *)((longlong)puVar9 + 0x4c);
      uVar3 = *(undefined4 *)(puVar9 + 10);
      uVar4 = *(undefined4 *)((longlong)puVar9 + 0x54);
      *(undefined4 *)(puVar7 + -0xd) = *(undefined4 *)(puVar9 + 9);
      *(undefined4 *)((longlong)puVar7 + -100) = uVar2;
      *(undefined4 *)(puVar7 + -0xc) = uVar3;
      *(undefined4 *)((longlong)puVar7 + -0x5c) = uVar4;
      FUN_1800bcdd0(param_4,puVar9,puVar7 + -0x16);
      goto joined_r0x0001800bded2;
    }
    puVar8 = puVar8 + -0xb;
    puVar7 = puVar7 + -0xb;
  } while( true );
}



/* ===== 1800bdf00 FUN_1800bdf00 ===== */

void FUN_1800bdf00(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800bdff0(param_9,param_2,param_10,param_4 - param_11,param_12,param_6,param_7);
  FUN_1800bd150(param_1,param_9,uVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_1800bd150(uVar1,param_10,param_3,param_4 - param_11);
  return;
}



/* ===== 1800bdff0 FUN_1800bdff0 ===== */

undefined8 *
FUN_1800bdff0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             longlong param_5,undefined8 *param_6,longlong param_7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
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
          FUN_1800be230(param_1);
          FUN_1800be230(param_2,param_3);
          FUN_1800be230(param_1,param_3);
          param_3 = param_1 + (((longlong)param_3 - (longlong)param_2) / 0x58) * 0xb;
        }
      }
      param_1 = param_3;
    }
    else {
      puVar6 = (undefined8 *)FUN_1800bd9c0(param_2,param_3,param_6);
      FUN_1800bcdd0(param_1,param_2,param_3);
      if (param_6 != puVar6) {
        puVar7 = param_6;
        do {
          *param_1 = *puVar7;
          FUN_18002ba60(param_1 + 1,puVar7 + 1);
          param_1[5] = puVar7[5];
          *(undefined4 *)(param_1 + 6) = *(undefined4 *)(puVar7 + 6);
          *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)puVar7 + 0x34);
          uVar2 = *(undefined4 *)((longlong)puVar7 + 0x3c);
          uVar3 = *(undefined4 *)(puVar7 + 8);
          uVar4 = *(undefined4 *)((longlong)puVar7 + 0x44);
          *(undefined4 *)(param_1 + 7) = *(undefined4 *)(puVar7 + 7);
          *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
          *(undefined4 *)(param_1 + 8) = uVar3;
          *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
          puVar8 = puVar7 + 9;
          uVar5 = puVar7[10];
          puVar7 = puVar7 + 0xb;
          param_1[9] = *puVar8;
          param_1[10] = uVar5;
          param_1 = param_1 + 0xb;
        } while (puVar7 != puVar6);
        do {
          FUN_18000f890(param_6 + 1);
          param_6 = param_6 + 0xb;
        } while (param_6 != puVar6);
      }
    }
  }
  else {
    puVar6 = (undefined8 *)FUN_1800bd9c0(param_1,param_2,param_6);
    for (; param_2 != param_3; param_2 = param_2 + 0xb) {
      *param_1 = *param_2;
      FUN_18002ba60(param_1 + 1,param_2 + 1);
      param_1[5] = param_2[5];
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x3c);
      uVar3 = *(undefined4 *)(param_2 + 8);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x44);
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
      *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
      *(undefined4 *)(param_1 + 8) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
      uVar5 = param_2[10];
      param_1[9] = param_2[9];
      param_1[10] = uVar5;
      param_1 = param_1 + 0xb;
    }
    puVar7 = param_6;
    puVar8 = param_1;
    if (param_6 != puVar6) {
      do {
        *puVar8 = *puVar7;
        FUN_18002ba60(puVar8 + 1,puVar7 + 1);
        puVar8[5] = puVar7[5];
        *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(puVar7 + 6);
        *(undefined4 *)((longlong)puVar8 + 0x34) = *(undefined4 *)((longlong)puVar7 + 0x34);
        uVar2 = *(undefined4 *)((longlong)puVar7 + 0x3c);
        uVar3 = *(undefined4 *)(puVar7 + 8);
        uVar4 = *(undefined4 *)((longlong)puVar7 + 0x44);
        *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(puVar7 + 7);
        *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar2;
        *(undefined4 *)(puVar8 + 8) = uVar3;
        *(undefined4 *)((longlong)puVar8 + 0x44) = uVar4;
        puVar1 = puVar7 + 9;
        uVar5 = puVar7[10];
        puVar7 = puVar7 + 0xb;
        puVar8[9] = *puVar1;
        puVar8[10] = uVar5;
        puVar8 = puVar8 + 0xb;
      } while (puVar7 != puVar6);
      do {
        FUN_18000f890(param_6 + 1);
        param_6 = param_6 + 0xb;
      } while (param_6 != puVar6);
    }
  }
  return param_1;
}



/* ===== 1800be230 FUN_1800be230 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800be230(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_38;
  
  if (param_1 != param_2) {
    local_38 = DAT_180919500 ^ (ulonglong)auStack_b8;
    do {
      puVar5 = param_2 + -0xb;
      if (param_1 == puVar5) {
        return;
      }
      local_90 = param_1[1];
      local_78 = param_1[4];
      uVar1 = *param_1;
      uStack_88 = param_1[2];
      uStack_80 = param_1[3];
      *(undefined1 *)(param_1 + 1) = 0;
      param_1[3] = 0;
      param_1[4] = 0xf;
      local_70 = param_1[5];
      local_60 = *(undefined4 *)(param_1 + 7);
      uStack_5c = *(undefined4 *)((longlong)param_1 + 0x3c);
      uStack_58 = *(undefined4 *)(param_1 + 8);
      uStack_54 = *(undefined4 *)((longlong)param_1 + 0x44);
      local_68 = *(undefined4 *)(param_1 + 6);
      local_50 = *(undefined4 *)(param_1 + 9);
      uStack_4c = *(undefined4 *)((longlong)param_1 + 0x4c);
      uStack_48 = *(undefined4 *)(param_1 + 10);
      uStack_44 = *(undefined4 *)((longlong)param_1 + 0x54);
      local_64 = *(undefined4 *)((longlong)param_1 + 0x34);
      *param_1 = *puVar5;
      local_98 = uVar1;
      FUN_18002ba60(param_1 + 1,param_2 + -10);
      param_1[5] = param_2[-6];
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + -5);
      *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + -0x24);
      uVar2 = *(undefined4 *)((longlong)param_2 + -0x1c);
      uVar3 = *(undefined4 *)(param_2 + -3);
      uVar4 = *(undefined4 *)((longlong)param_2 + -0x14);
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + -4);
      *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
      *(undefined4 *)(param_1 + 8) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
      uVar2 = *(undefined4 *)((longlong)param_2 + -0xc);
      uVar3 = *(undefined4 *)(param_2 + -1);
      uVar4 = *(undefined4 *)((longlong)param_2 + -4);
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + -2);
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar2;
      *(undefined4 *)(param_1 + 10) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x54) = uVar4;
      *puVar5 = uVar1;
      FUN_18002ba60(param_2 + -10,&local_90);
      param_2[-6] = local_70;
      *(undefined4 *)(param_2 + -5) = local_68;
      *(undefined4 *)(param_2 + -4) = local_60;
      *(undefined4 *)((longlong)param_2 + -0x1c) = uStack_5c;
      *(undefined4 *)(param_2 + -3) = uStack_58;
      *(undefined4 *)((longlong)param_2 + -0x14) = uStack_54;
      *(undefined4 *)((longlong)param_2 + -0x24) = local_64;
      *(undefined4 *)(param_2 + -2) = local_50;
      *(undefined4 *)((longlong)param_2 + -0xc) = uStack_4c;
      *(undefined4 *)(param_2 + -1) = uStack_48;
      *(undefined4 *)((longlong)param_2 + -4) = uStack_44;
      FUN_18000f890(&local_90);
      param_1 = param_1 + 0xb;
      param_2 = puVar5;
    } while (param_1 != puVar5);
  }
  return;
}



/* ===== 1800be3c0 FUN_1800be3c0 ===== */

void FUN_1800be3c0(longlong param_1,float *param_2,float *param_3,undefined4 param_4,float param_5,
                  uint param_6)

{
  float *pfVar1;
  char cVar2;
  float fVar3;
  longlong local_res8;
  undefined4 local_res20 [2];
  longlong *local_58;
  float *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((((param_1 != 0) && (*param_2 < *param_3)) && (param_2[1] < param_3[1])) &&
     (fVar3 = (float)(param_6 >> 0x18) / DAT_1808acb94, 0.0 < fVar3)) {
    local_res8 = param_1;
    local_res20[0] = param_4;
    if ((DAT_1811079e0 == 0) || (cVar2 = FUN_180369310(), pfVar1 = DAT_181107de8, cVar2 == '\0')) {
      local_58 = &local_res8;
      uStack_40 = local_res20;
      uStack_38 = &param_6;
      local_50 = param_2;
      local_48 = param_3;
      FUN_1800beea0(param_5,fVar3,&local_58);
    }
    else if (((*param_2 < *param_3) && ((param_2[1] < param_3[1] && (0xffffff < param_6)))) &&
            (0.0 < param_5)) {
      fVar3 = param_2[1];
      local_58 = *(longlong **)param_2;
      local_50 = *(float **)param_3;
      uStack_40._0_4_ = param_6;
      local_48 = (float *)CONCAT44(param_5,local_res20[0]);
      uStack_40._4_4_ = 0;
      uStack_38._0_4_ = 0;
      uStack_38._4_4_ = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      if (DAT_181107de8 == DAT_181107df0) {
        FUN_180352090(&DAT_181107de0,DAT_181107de8,&local_58);
      }
      else {
        *DAT_181107de8 = *param_2;
        pfVar1[1] = fVar3;
        pfVar1[2] = SUB84(local_50,0);
        pfVar1[3] = (float)((ulonglong)local_50 >> 0x20);
        *(float **)(pfVar1 + 4) = local_48;
        *(ulonglong *)(pfVar1 + 6) = (ulonglong)param_6;
        pfVar1[8] = 0.0;
        pfVar1[9] = 0.0;
        pfVar1[10] = 0.0;
        pfVar1[0xb] = 0.0;
        DAT_181107de8 = DAT_181107de8 + 0xc;
      }
    }
  }
  return;
}



/* ===== 1800be550 FUN_1800be550 ===== */

void FUN_1800be550(longlong param_1,float *param_2,float *param_3,float param_4,float param_5,
                  float param_6,undefined4 param_7,uint param_8,float param_9)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float local_res8;
  float local_resc;
  ulonglong in_stack_ffffffffffffff38;
  undefined4 uVar6;
  ulonglong uVar5;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar7;
  float local_98 [8];
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_68;
  longlong local_60;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  if ((((param_1 != 0) && (*param_2 < *param_3)) && (param_2[1] < param_3[1])) && (0.0 < param_6)) {
    if (DAT_1811079e0 != 0) {
      cVar1 = FUN_180369310();
      uVar6 = (undefined4)(in_stack_ffffffffffffff38 >> 0x20);
      if (cVar1 != '\0') {
        if ((DAT_180cd0fdd != '\0') && (DAT_181107cd8 != 0)) {
          local_98[4] = 1.0;
          local_98[0] = 0.0;
          local_98[2] = param_6;
          pfVar3 = local_98;
          if (0.0 <= param_6) {
            pfVar3 = local_98 + 2;
          }
          pfVar2 = local_98 + 4;
          if (param_6 <= DAT_1808ac34c) {
            pfVar2 = pfVar3;
          }
          uVar5 = CONCAT44(uVar7,(int)(longlong)(*pfVar2 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18) |
                  0xffffff;
          in_stack_ffffffffffffff38 = in_stack_ffffffffffffff38 & 0xffffffff00000000;
          FUN_180369c70(param_1,param_2,param_3,param_4,in_stack_ffffffffffffff38,uVar5,3,0);
          uVar6 = (undefined4)(in_stack_ffffffffffffff38 >> 0x20);
          uVar7 = (undefined4)(uVar5 >> 0x20);
        }
        local_res8 = (float)FUN_18053fc00(*param_3);
        local_resc = (float)FUN_18053fc00(param_3[1]);
        local_74 = (float)FUN_18053ef70(*param_2);
        local_70 = (float)FUN_18053ef70(param_2[1]);
        uVar5 = CONCAT44(uVar6,param_5 * param_9);
        FUN_180369c70(param_1,&local_74,&local_res8,param_4,uVar5,CONCAT44(uVar7,param_7),0,0);
        FUN_180369c70(param_1,param_2,param_3,param_4,uVar5 & 0xffffffff00000000,param_8,2,0);
        return;
      }
    }
    if (((DAT_180cd0fdd != '\0') && (DAT_181107cd8 != 0)) &&
       ((0.0 < DAT_1811079b0 && (0.0 < DAT_1811079b4)))) {
      local_60 = DAT_181107cd8;
      local_res8 = *param_3 / DAT_1811079b0;
      local_78 = 1.0;
      local_98[5] = 0.0;
      local_68 = 0;
      local_resc = param_3[1] / DAT_1811079b4;
      local_74 = *param_2 / DAT_1811079b0;
      pfVar3 = local_98 + 5;
      if (0.0 <= param_6) {
        pfVar3 = local_98 + 6;
      }
      local_70 = param_2[1] / DAT_1811079b4;
      pfVar2 = &local_78;
      if (param_6 <= DAT_1808ac34c) {
        pfVar2 = pfVar3;
      }
      local_98[6] = param_6;
      pfVar3 = &local_res8;
      FUN_1803febc0(param_1,&local_68,param_2,param_3,&local_74,pfVar3,
                    (int)(longlong)(*pfVar2 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18 | 0xffffff,
                    param_4);
      uVar7 = (undefined4)((ulonglong)pfVar3 >> 0x20);
    }
    uVar5 = CONCAT44(uVar7,param_7);
    FUN_1800be3c0(param_1,param_2,param_3,param_4,param_5 * param_9,uVar5);
    if (((*param_2 < *param_3) && (param_2[1] < param_3[1])) && (0xffffff < param_8)) {
      fVar4 = 0.0;
      if (0.0 <= param_4) {
        fVar4 = param_4;
      }
      FUN_1803fe590(param_1,param_2,param_3,param_8,fVar4,uVar5 & 0xffffffff00000000);
    }
  }
  return;
}



/* ===== 1800be8a0 FUN_1800be8a0 ===== */

void FUN_1800be8a0(longlong param_1,float param_2,float param_3,float param_4,uint param_5,
                  float param_6)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong local_res8;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100 [18];
  longlong *local_b8 [22];
  
  if (((param_1 != 0) && (param_3 < param_4)) && (0xffffff < param_5)) {
    local_b8[0] = &local_res8;
    local_118 = param_2 - param_6 * DAT_1808ac428;
    local_110 = param_6 * DAT_1808ac428 + param_2;
    local_res8 = param_1;
    local_114 = param_3;
    local_10c = param_4;
    if ((DAT_1811079e0 != 0) && (cVar3 = FUN_180369310(), cVar3 != '\0')) {
      local_108 = (local_10c - local_114) * DAT_1808ac1f4;
      local_104 = (local_110 - local_118) * DAT_1808ac1f4;
      pfVar4 = &local_108;
      if (local_104 <= local_108) {
        pfVar4 = &local_104;
      }
      fVar15 = param_6 * DAT_1808ac838;
      if (*pfVar4 <= param_6 * DAT_1808ac838) {
        fVar15 = *pfVar4;
      }
      FUN_180369c70(local_res8,&local_118,&local_110,fVar15,param_6 * DAT_1808ac864,param_5,4,0);
      return;
    }
    fVar2 = DAT_1808acb94;
    fVar1 = DAT_1808ac34c;
    fVar15 = DAT_1808ac1f4;
    param_6 = param_6 * DAT_1808ac864;
    fVar17 = param_6 * DAT_1808ac1f4;
    fVar16 = ((float)(param_5 >> 0x18) / DAT_1808acb94) * DAT_1808ac27c;
    fVar10 = local_110;
    fVar11 = local_118;
    fVar12 = local_114;
    fVar13 = local_10c;
    iVar7 = 0x18;
    do {
      iVar8 = iVar7 + -1;
      local_100[2] = 1.0;
      local_100[0] = 0.0;
      local_100[5] = 1.0;
      local_100[3] = 0.0;
      local_100[8] = 0.999;
      local_100[6] = 0.0;
      local_100[0xb] = 1.0;
      local_100[9] = 0.0;
      fVar14 = ((float)iVar7 * fVar17) / DAT_1808ac980;
      local_100[1] = (((float)iVar8 * fVar17) / DAT_1808ac980 + fVar17) / param_6;
      pfVar4 = local_100;
      if (0.0 <= local_100[1]) {
        pfVar4 = local_100 + 1;
      }
      pfVar6 = local_100 + 2;
      if (local_100[1] <= fVar1) {
        pfVar6 = pfVar4;
      }
      fVar9 = *pfVar6;
      local_100[4] = (fVar17 + fVar14) / param_6;
      local_100[10] = (fVar1 - (DAT_1808ac658 - (fVar9 + fVar9)) * fVar9 * fVar9) * fVar16;
      pfVar4 = local_100 + 3;
      if (0.0 <= local_100[4]) {
        pfVar4 = local_100 + 4;
      }
      pfVar6 = local_100 + 5;
      if (local_100[4] <= fVar1) {
        pfVar6 = pfVar4;
      }
      fVar9 = *pfVar6;
      local_100[7] = (fVar1 - (DAT_1808ac658 - (fVar9 + fVar9)) * fVar9 * fVar9) * fVar16;
      pfVar4 = local_100 + 6;
      if (0.0 <= local_100[7]) {
        pfVar4 = local_100 + 7;
      }
      pfVar6 = local_100 + 8;
      if (local_100[7] <= DAT_1808ac33c) {
        pfVar6 = pfVar4;
      }
      pfVar4 = local_100 + 9;
      if (0.0 <= local_100[10]) {
        pfVar4 = local_100 + 10;
      }
      pfVar5 = local_100 + 0xb;
      if (local_100[10] <= fVar1) {
        pfVar5 = pfVar4;
      }
      fVar9 = fVar1 - (fVar1 - *pfVar5) / (fVar1 - *pfVar6);
      if (DAT_1808abfc8 < fVar9) {
        local_100[0x10] = 1.0;
        local_100[0xc] = 0.0;
        local_100[0xe] = fVar9;
        pfVar4 = local_100 + 0xc;
        if (0.0 <= fVar9) {
          pfVar4 = local_100 + 0xe;
        }
        pfVar6 = local_100 + 0x10;
        if (fVar9 <= fVar1) {
          pfVar6 = pfVar4;
        }
        FUN_1800bed70(local_b8,fVar11 - fVar14,fVar10 + fVar14,fVar12 - fVar14,fVar13 + fVar14,
                      (int)(longlong)(*pfVar6 * fVar2 + fVar15) << 0x18 | param_5 & 0xffffff);
        fVar10 = local_110;
        fVar11 = local_118;
        fVar12 = local_114;
        fVar13 = local_10c;
      }
      iVar7 = iVar8;
    } while (0 < iVar8);
    FUN_1800bed70(local_b8,fVar11,fVar10,fVar12,fVar13,param_5);
  }
  return;
}



/* ===== 1800bed70 FUN_1800bed70 ===== */

void FUN_1800bed70(undefined8 *param_1,undefined4 param_2,undefined4 param_3,float param_4,
                  float param_5,uint param_6)

{
  uint uVar1;
  float fVar2;
  undefined4 local_res8;
  float local_resc;
  undefined4 local_68;
  float local_64;
  
  uVar1 = param_6 & 0xffffff;
  param_5 = param_5 - param_4;
  fVar2 = param_5 * DAT_1808ac1f4 + param_4;
  local_64 = param_5 * DAT_1808ac0c0 + param_4;
  local_res8 = param_3;
  local_resc = fVar2;
  local_68 = param_2;
  FUN_1803fe730(*(undefined8 *)*param_1,&local_68,&local_res8,uVar1,uVar1,param_6,param_6);
  local_resc = param_5 * DAT_1808ac2cc + param_4;
  local_res8 = param_3;
  local_68 = param_2;
  local_64 = fVar2;
  FUN_1803fe730(*(undefined8 *)*param_1,&local_68,&local_res8,param_6,param_6,uVar1,uVar1);
  return;
}



/* ===== 1800beea0 FUN_1800beea0 ===== */

void FUN_1800beea0(float param_1,float param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_res20;
  float local_118 [17];
  undefined8 local_d4 [22];
  
  fVar6 = DAT_1808acb94;
  fVar5 = DAT_1808ac980;
  fVar4 = DAT_1808ac658;
  fVar3 = DAT_1808ac34c;
  fVar2 = DAT_1808ac33c;
  fVar1 = DAT_1808ac1f4;
  fVar18 = param_1 * DAT_1808ac1f4;
  iVar10 = 0x18;
  do {
    iVar11 = iVar10 + -1;
    local_118[2] = 1.0;
    local_118[0] = 0.0;
    local_118[5] = 1.0;
    local_118[3] = 0.0;
    local_118[8] = 0.999;
    local_118[6] = 0.0;
    local_118[0xb] = 1.0;
    local_118[9] = 0.0;
    fVar17 = ((float)iVar10 * fVar18) / fVar5;
    local_118[1] = (((float)iVar11 * fVar18) / fVar5 + fVar18) / param_1;
    pfVar9 = local_118;
    if (0.0 <= local_118[1]) {
      pfVar9 = local_118 + 1;
    }
    pfVar7 = local_118 + 2;
    if (local_118[1] <= fVar3) {
      pfVar7 = pfVar9;
    }
    fVar13 = *pfVar7;
    local_118[4] = (fVar18 + fVar17) / param_1;
    local_118[10] = (fVar3 - (fVar4 - (fVar13 + fVar13)) * fVar13 * fVar13) * param_2;
    pfVar9 = local_118 + 3;
    if (0.0 <= local_118[4]) {
      pfVar9 = local_118 + 4;
    }
    pfVar7 = local_118 + 5;
    if (local_118[4] <= fVar3) {
      pfVar7 = pfVar9;
    }
    fVar13 = *pfVar7;
    local_118[7] = (fVar3 - (fVar4 - (fVar13 + fVar13)) * fVar13 * fVar13) * param_2;
    pfVar9 = local_118 + 6;
    if (0.0 <= local_118[7]) {
      pfVar9 = local_118 + 7;
    }
    pfVar7 = local_118 + 8;
    if (local_118[7] <= fVar2) {
      pfVar7 = pfVar9;
    }
    pfVar9 = local_118 + 9;
    if (0.0 <= local_118[10]) {
      pfVar9 = local_118 + 10;
    }
    pfVar8 = local_118 + 0xb;
    if (local_118[10] <= fVar3) {
      pfVar8 = pfVar9;
    }
    local_118[0xe] = fVar3 - (fVar3 - *pfVar8) / (fVar3 - *pfVar7);
    if (DAT_1808abfc8 < local_118[0xe]) {
      local_118[0x10] = 1.0;
      local_118[0xc] = 0.0;
      pfVar9 = local_118 + 0xc;
      if (0.0 <= local_118[0xe]) {
        pfVar9 = local_118 + 0xe;
      }
      pfVar7 = local_118 + 0x10;
      if (local_118[0xe] <= fVar3) {
        pfVar7 = pfVar9;
      }
      fVar13 = (float)*(undefined8 *)param_3[2] + fVar17;
      fVar14 = (float)((ulonglong)*(undefined8 *)param_3[2] >> 0x20) + fVar17;
      local_res20 = CONCAT44(fVar14,fVar13);
      fVar15 = (float)*(undefined8 *)param_3[1] - fVar17;
      fVar16 = (float)((ulonglong)*(undefined8 *)param_3[1] >> 0x20) - fVar17;
      local_d4[0] = CONCAT44(fVar16,fVar15);
      if ((((*(longlong *)*param_3 != 0) && (fVar15 < fVar13)) && (fVar16 < fVar14)) &&
         (uVar12 = (int)(longlong)(*pfVar7 * fVar6 + fVar1) << 0x18 | *(uint *)param_3[4] & 0xffffff
         , 0xffffff < uVar12)) {
        fVar13 = 0.0;
        if (0.0 <= fVar17 + *(float *)param_3[3]) {
          fVar13 = fVar17 + *(float *)param_3[3];
        }
        FUN_1803fe590(*(longlong *)*param_3,local_d4,&local_res20,uVar12,fVar13,0);
      }
    }
    iVar10 = iVar11;
  } while (0 < iVar11);
  return;
}



/* ===== 1800bf1f0 FUN_1800bf1f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1800bf1f0(float param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res8 [8];
  float local_c8 [48];
  
  local_c8[4] = 1.0;
  local_c8[3] = 0.0;
  pfVar3 = local_c8 + 3;
  if (0.0 <= param_1) {
    pfVar3 = local_res8;
  }
  pfVar2 = local_c8 + 4;
  if (param_1 <= DAT_1808ac34c) {
    pfVar2 = pfVar3;
  }
  fVar1 = *pfVar2;
  fVar4 = DAT_1808ac34c - fVar1;
  fVar6 = fVar4 * fVar4 * DAT_1808ac658;
  fVar5 = fVar4 * DAT_1808ac7ac * fVar1 * DAT_1808ac0f0 + fVar6 * DAT_1808ac1b8 +
          fVar1 * DAT_1808ac658 * fVar1 * DAT_1808ac1bc;
  if ((float)((uint)fVar5 & _DAT_1808ade90) < DAT_1808abf94) {
    local_c8[0] = fVar1;
  }
  else {
    local_c8[2] = 1.0;
    local_c8[1] = 0.0;
    local_c8[0] = fVar1 - ((fVar4 * DAT_1808ac658 * fVar1 * fVar1 * DAT_1808ac214 +
                            fVar6 * fVar1 * DAT_1808ac1b8 + fVar1 * fVar1 * fVar1) - fVar1) / fVar5;
    pfVar3 = local_c8 + 1;
    if (0.0 <= local_c8[0]) {
      pfVar3 = local_c8;
    }
    pfVar2 = local_c8 + 2;
    if (local_c8[0] <= DAT_1808ac34c) {
      pfVar2 = pfVar3;
    }
    local_c8[0] = *pfVar2;
    fVar5 = DAT_1808ac34c - local_c8[0];
    fVar4 = fVar5 * fVar5 * DAT_1808ac658;
    fVar6 = fVar5 * DAT_1808ac7ac * local_c8[0] * DAT_1808ac0f0 + fVar4 * DAT_1808ac1b8 +
            local_c8[0] * DAT_1808ac658 * local_c8[0] * DAT_1808ac1bc;
    if (DAT_1808abf94 <= (float)((uint)fVar6 & _DAT_1808ade90)) {
      local_c8[0] = local_c8[0] -
                    ((fVar5 * DAT_1808ac658 * local_c8[0] * local_c8[0] * DAT_1808ac214 +
                      fVar4 * local_c8[0] * DAT_1808ac1b8 + local_c8[0] * local_c8[0] * local_c8[0])
                    - fVar1) / fVar6;
      pfVar3 = local_c8 + 1;
      if (0.0 <= local_c8[0]) {
        pfVar3 = local_c8;
      }
      pfVar2 = local_c8 + 2;
      if (local_c8[0] <= DAT_1808ac34c) {
        pfVar2 = pfVar3;
      }
      local_c8[0] = *pfVar2;
      fVar5 = DAT_1808ac34c - local_c8[0];
      fVar4 = fVar5 * fVar5 * DAT_1808ac658;
      fVar6 = fVar5 * DAT_1808ac7ac * local_c8[0] * DAT_1808ac0f0 + fVar4 * DAT_1808ac1b8 +
              local_c8[0] * DAT_1808ac658 * local_c8[0] * DAT_1808ac1bc;
      if (DAT_1808abf94 <= (float)((uint)fVar6 & _DAT_1808ade90)) {
        local_c8[0] = local_c8[0] -
                      ((fVar5 * DAT_1808ac658 * local_c8[0] * local_c8[0] * DAT_1808ac214 +
                        fVar4 * local_c8[0] * DAT_1808ac1b8 +
                       local_c8[0] * local_c8[0] * local_c8[0]) - fVar1) / fVar6;
        pfVar3 = local_c8 + 1;
        if (0.0 <= local_c8[0]) {
          pfVar3 = local_c8;
        }
        pfVar2 = local_c8 + 2;
        if (local_c8[0] <= DAT_1808ac34c) {
          pfVar2 = pfVar3;
        }
        local_c8[0] = *pfVar2;
        fVar5 = DAT_1808ac34c - local_c8[0];
        fVar4 = fVar5 * fVar5 * DAT_1808ac658;
        fVar6 = fVar5 * DAT_1808ac7ac * local_c8[0] * DAT_1808ac0f0 + fVar4 * DAT_1808ac1b8 +
                local_c8[0] * DAT_1808ac658 * local_c8[0] * DAT_1808ac1bc;
        if (DAT_1808abf94 <= (float)((uint)fVar6 & _DAT_1808ade90)) {
          local_c8[0] = local_c8[0] -
                        ((fVar5 * DAT_1808ac658 * local_c8[0] * local_c8[0] * DAT_1808ac214 +
                          fVar4 * local_c8[0] * DAT_1808ac1b8 +
                         local_c8[0] * local_c8[0] * local_c8[0]) - fVar1) / fVar6;
          pfVar3 = local_c8 + 1;
          if (0.0 <= local_c8[0]) {
            pfVar3 = local_c8;
          }
          pfVar2 = local_c8 + 2;
          if (local_c8[0] <= DAT_1808ac34c) {
            pfVar2 = pfVar3;
          }
          local_c8[0] = *pfVar2;
          fVar5 = DAT_1808ac34c - local_c8[0];
          fVar4 = fVar5 * fVar5 * DAT_1808ac658;
          fVar6 = fVar5 * DAT_1808ac7ac * local_c8[0] * DAT_1808ac0f0 + fVar4 * DAT_1808ac1b8 +
                  local_c8[0] * DAT_1808ac658 * local_c8[0] * DAT_1808ac1bc;
          if (DAT_1808abf94 <= (float)((uint)fVar6 & _DAT_1808ade90)) {
            local_c8[0] = local_c8[0] -
                          ((fVar5 * DAT_1808ac658 * local_c8[0] * local_c8[0] * DAT_1808ac214 +
                            fVar4 * local_c8[0] * DAT_1808ac1b8 +
                           local_c8[0] * local_c8[0] * local_c8[0]) - fVar1) / fVar6;
            pfVar3 = local_c8 + 1;
            if (0.0 <= local_c8[0]) {
              pfVar3 = local_c8;
            }
            pfVar2 = local_c8 + 2;
            if (local_c8[0] <= DAT_1808ac34c) {
              pfVar2 = pfVar3;
            }
            local_c8[0] = *pfVar2;
            fVar5 = DAT_1808ac34c - local_c8[0];
            fVar4 = fVar5 * fVar5 * DAT_1808ac658;
            fVar6 = fVar5 * DAT_1808ac7ac * local_c8[0] * DAT_1808ac0f0 + fVar4 * DAT_1808ac1b8 +
                    local_c8[0] * DAT_1808ac658 * local_c8[0] * DAT_1808ac1bc;
            if (DAT_1808abf94 <= (float)((uint)fVar6 & _DAT_1808ade90)) {
              local_c8[0] = local_c8[0] -
                            ((fVar5 * DAT_1808ac658 * local_c8[0] * local_c8[0] * DAT_1808ac214 +
                              fVar4 * local_c8[0] * DAT_1808ac1b8 +
                             local_c8[0] * local_c8[0] * local_c8[0]) - fVar1) / fVar6;
              pfVar3 = local_c8 + 1;
              if (0.0 <= local_c8[0]) {
                pfVar3 = local_c8;
              }
              pfVar2 = local_c8 + 2;
              if (local_c8[0] <= DAT_1808ac34c) {
                pfVar2 = pfVar3;
              }
              local_c8[0] = *pfVar2;
              fVar5 = DAT_1808ac34c - local_c8[0];
              fVar4 = fVar5 * fVar5 * DAT_1808ac658;
              fVar6 = fVar5 * DAT_1808ac7ac * local_c8[0] * DAT_1808ac0f0 + fVar4 * DAT_1808ac1b8 +
                      local_c8[0] * DAT_1808ac658 * local_c8[0] * DAT_1808ac1bc;
              if (DAT_1808abf94 <= (float)((uint)fVar6 & _DAT_1808ade90)) {
                local_c8[0] = local_c8[0] -
                              ((fVar5 * DAT_1808ac658 * local_c8[0] * local_c8[0] * DAT_1808ac214 +
                                fVar4 * local_c8[0] * DAT_1808ac1b8 +
                               local_c8[0] * local_c8[0] * local_c8[0]) - fVar1) / fVar6;
                pfVar3 = local_c8 + 1;
                if (0.0 <= local_c8[0]) {
                  pfVar3 = local_c8;
                }
                pfVar2 = local_c8 + 2;
                if (local_c8[0] <= DAT_1808ac34c) {
                  pfVar2 = pfVar3;
                }
                local_c8[0] = *pfVar2;
                fVar5 = DAT_1808ac34c - local_c8[0];
                fVar4 = fVar5 * fVar5 * DAT_1808ac658;
                fVar6 = fVar5 * DAT_1808ac7ac * local_c8[0] * DAT_1808ac0f0 + fVar4 * DAT_1808ac1b8
                        + local_c8[0] * DAT_1808ac658 * local_c8[0] * DAT_1808ac1bc;
                if (DAT_1808abf94 <= (float)((uint)fVar6 & _DAT_1808ade90)) {
                  local_c8[0] = local_c8[0] -
                                ((fVar5 * DAT_1808ac658 * local_c8[0] * local_c8[0] * DAT_1808ac214
                                  + fVar4 * local_c8[0] * DAT_1808ac1b8 +
                                 local_c8[0] * local_c8[0] * local_c8[0]) - fVar1) / fVar6;
                  pfVar3 = local_c8 + 1;
                  if (0.0 <= local_c8[0]) {
                    pfVar3 = local_c8;
                  }
                  pfVar2 = local_c8 + 2;
                  if (local_c8[0] <= DAT_1808ac34c) {
                    pfVar2 = pfVar3;
                  }
                  local_c8[0] = *pfVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  return (DAT_1808ac34c - local_c8[0]) * DAT_1808ac658 * local_c8[0] * local_c8[0] +
         local_c8[0] * local_c8[0] * local_c8[0];
}



/* ===== 1800bf8d0 FUN_1800bf8d0 ===== */

ulonglong FUN_1800bf8d0(float *param_1,ulonglong param_2,double param_3,double param_4)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res8 [8];
  float local_18 [2];
  float local_10 [4];
  
  fVar6 = (float)param_2;
  if (*(char *)(param_1 + 6) == '\0') {
    param_1[2] = fVar6;
    param_1[1] = fVar6;
    *param_1 = fVar6;
    *(double *)(param_1 + 4) = param_3;
    *(undefined1 *)(param_1 + 6) = 1;
    return param_2;
  }
  if (fVar6 == param_1[2]) {
    dVar3 = *(double *)(param_1 + 4);
    fVar6 = param_1[2];
  }
  else {
    param_1[1] = *param_1;
    param_1[2] = fVar6;
    *(double *)(param_1 + 4) = param_3;
    dVar3 = param_3;
  }
  fVar5 = param_1[1];
  if (fVar5 <= fVar6) {
    param_4 = DAT_1808ac448;
  }
  local_10[0] = 1.0;
  local_18[0] = (float)((param_3 - dVar3) / param_4);
  pfVar2 = local_res8;
  if (0.0 <= local_18[0]) {
    pfVar2 = local_18;
  }
  pfVar1 = local_10;
  if (local_18[0] <= DAT_1808ac34c) {
    pfVar1 = pfVar2;
  }
  fVar4 = DAT_1808ac34c - *pfVar1;
  fVar5 = (DAT_1808ac34c - fVar4 * fVar4 * fVar4) * (fVar6 - fVar5) + fVar5;
  *param_1 = fVar5;
  return (ulonglong)(uint)fVar5;
}



/* ===== 1800bf9b0 FUN_1800bf9b0 ===== */

float * FUN_1800bf9b0(float *param_1,float *param_2,double param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float local_res8 [6];
  float local_res20 [2];
  float local_18 [6];
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(double *)(param_1 + 0xc) = param_3;
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 10) = uVar2;
    *(undefined8 *)(param_1 + 4) = uVar1;
    *(undefined8 *)(param_1 + 6) = uVar2;
    *(undefined8 *)param_1 = uVar1;
    *(undefined8 *)(param_1 + 2) = uVar2;
    return param_1;
  }
  pfVar4 = param_1 + 8;
  pfVar3 = param_2;
  if (param_2 != param_2 + 4) {
    for (; *pfVar3 == *pfVar4; pfVar3 = pfVar3 + 1) {
      if (pfVar3 == param_2 + 3) goto LAB_1800bfa26;
      pfVar4 = pfVar4 + 1;
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)param_1;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 2);
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(double *)(param_1 + 0xc) = param_3;
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 10) = uVar2;
  }
LAB_1800bfa26:
  local_18[0] = 1.0;
  fVar5 = (float)((param_3 - *(double *)(param_1 + 0xc)) / DAT_1808ac448);
  pfVar4 = local_res8;
  if (0.0 <= fVar5) {
    pfVar4 = local_res20;
  }
  pfVar3 = local_18;
  if (fVar5 <= DAT_1808ac34c) {
    pfVar3 = pfVar4;
  }
  fVar5 = DAT_1808ac34c - *pfVar3;
  fVar5 = DAT_1808ac34c - fVar5 * fVar5 * fVar5;
  *param_1 = (param_1[8] - param_1[4]) * fVar5 + param_1[4];
  param_1[1] = (param_1[9] - param_1[5]) * fVar5 + param_1[5];
  param_1[2] = (param_1[10] - param_1[6]) * fVar5 + param_1[6];
  param_1[3] = (param_1[0xb] - param_1[7]) * fVar5 + param_1[7];
  return param_1;
}



/* ===== 1800bfb10 FUN_1800bfb10 ===== */

void FUN_1800bfb10(longlong param_1)

{
  FUN_18000f890(param_1 + 0x228);
  FUN_18000f890(param_1 + 0x208);
  return;
}



