/* ===== 1800ec550 FUN_1800ec550 ===== */

longlong FUN_1800ec550(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_18002ba60();
  FUN_18002ba60(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x5c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x6c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x7c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x8c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x9c);
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0x9c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xac);
  *(undefined8 *)(param_1 + 0xa4) = *(undefined8 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xac) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xbc);
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
  *(undefined8 *)(param_1 + 0xbc) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xcc);
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_2 + 0xc4);
  *(undefined8 *)(param_1 + 0xcc) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
  uVar1 = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xec) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)(param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)(param_1 + 0xfc) = uVar1;
  return param_1;
}



/* ===== 1800ec640 FUN_1800ec640 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800ec640(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  char *pcVar12;
  undefined8 *puVar13;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_178 [32];
  double local_158;
  int local_150;
  uint local_148;
  uint local_140;
  ulonglong local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 *local_120;
  undefined4 local_f4;
  undefined4 local_e7;
  undefined2 local_e3;
  undefined1 local_e1;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_178;
  if (DAT_180cd11dc == 0) {
    if (DAT_1811089f0 == 0) {
      return 0;
    }
    iVar8 = FUN_18038eaf0("C_EconItemView","m_AttributeList");
    iVar9 = FUN_18038eaf0("CAttributeList","m_Attributes");
    if ((iVar8 == 0) || (iVar9 == 0)) {
      _DAT_180cd11d8 = (ulonglong)DAT_180cd11dc << 0x20;
    }
    else {
      _DAT_180cd11d8 = CONCAT44(DAT_180cd11dc,iVar9 + iVar8);
    }
    uVar10 = FUN_18038eaf0("C_EconItemView","m_iItemDefinitionIndex");
    _DAT_180cd11d8 = CONCAT44(uVar10,DAT_180cd11d8);
    uVar10 = FUN_18038eaf0("C_EconItemView","m_iItemID");
    _DAT_180cd11e0 = CONCAT44(DAT_180cd11e4,uVar10);
    uVar10 = FUN_18038eaf0("C_EconItemView","m_iItemIDHigh");
    _DAT_180cd11e0 = CONCAT44(uVar10,DAT_180cd11e0);
    uVar10 = FUN_18038eaf0("C_EconItemView","m_iItemIDLow");
    _DAT_180cd11e8 = CONCAT44(DAT_180cd11ec,uVar10);
    iVar8 = FUN_18038eaf0("C_EconEntity","m_AttributeManager");
    iVar9 = FUN_18038eaf0("C_AttributeContainer","m_Item");
    if ((iVar8 == 0) || (iVar9 == 0)) {
      iVar9 = 0;
    }
    else {
      iVar9 = iVar9 + iVar8;
    }
    _DAT_180cd11e8 = CONCAT44(iVar9,DAT_180cd11e8);
    if (((((DAT_180cd11d8 == 0) || (DAT_180cd11dc == 0)) || (DAT_180cd11e0 == 0)) ||
        ((DAT_180cd11e4 == 0 || (DAT_180cd11e8 == 0)))) || (iVar9 == 0)) {
      local_150 = DAT_180cd11e8;
      local_158 = (double)CONCAT44(local_158._4_4_,DAT_180cd11e4);
      local_148 = iVar9;
      FUN_1800eb230("[error] schema | attributes %x def %x id %x high %x low %x entity item %x");
      _DAT_180cd11d8 = 0;
      _DAT_180cd11e0 = 0;
      _DAT_180cd11e8 = 0;
      return 0;
    }
  }
  uVar10 = DAT_1809ebea0;
  if (DAT_180cd1250 == 0) {
    if (DAT_180cd1248 == 0) {
      return 0;
    }
    if (DAT_180961b50 == 0) {
      return 0;
    }
    lVar11 = FUN_1800eba80();
    if (lVar11 == 0) {
      FUN_1800eb230("[error] view | allocation of 0x%zx failed",DAT_180cd1248);
      return 0;
    }
    cVar7 = FUN_1800ebaa0(lVar11,uVar10);
    if (cVar7 == '\0') {
      local_158 = (double)CONCAT44(local_158._4_4_,1);
      FUN_1800eb230("[error] view | constructor / Init(%d, %d, %d, %d) faulted",uVar10,4,9999);
      return 0;
    }
    local_148 = 1;
    local_150 = 9999;
    local_158 = (double)CONCAT44(local_158._4_4_,4);
    DAT_180cd1250 = lVar11;
    FUN_1800eb230("view | 0x%zx bytes at %p | Init(%d, %d, %d, %d)",DAT_180cd1248,lVar11,uVar10);
  }
  DAT_180cd1270 = DAT_180cd1270 + 1;
  DAT_1809ebf68 = DAT_180cd1270 & 0xffffffff | 0xe000000000000000;
  lVar11 = FUN_180280c60(DAT_1809ebea0);
  if ((lVar11 == 0) || (DAT_1809ebf70 = '\x01', *(int *)(lVar11 + 0x48) != 3)) {
    DAT_1809ebf70 = '\0';
  }
  FUN_1800ebc80(extraout_XMM0_Da,&DAT_1809ebe60,DAT_1809ebf68);
  cVar7 = FUN_1800eba20(param_1);
  if (cVar7 == '\0') {
    FUN_1800eb230("[error] start | abort of the generator job faulted");
    return 0;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
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
  cVar7 = FUN_1800ebb00(0,&local_d8);
  if (cVar7 == '\0') {
    FUN_1800eb230("[error] start | def %d kit %d | the item view has no definition name",
                  DAT_1809ebea0,DAT_1809ebea4);
    return 0;
  }
  cVar7 = FUN_1800ebb70(param_1);
  if (cVar7 == '\0') {
    FUN_1800eb230("[error] start | job write / render targets faulted");
    return 0;
  }
  puVar13 = &DAT_1809ebe80;
  if (0xf < DAT_1809ebe98) {
    puVar13 = DAT_1809ebe80;
  }
  uVar10 = FUN_180011200(param_1 + 0x184);
  local_130 = FUN_180011200(param_1 + 0x180);
  local_138 = DAT_1809ebf68;
  local_140 = (uint)(DAT_1809ebf40 != '\0');
  local_148 = (uint)(DAT_1809ebeb0 != '\0');
  local_158 = (double)DAT_1809ebea8;
  local_150 = DAT_1809ebeac;
  local_128 = uVar10;
  local_120 = puVar13;
  FUN_1800eb230("start | def %d (%s) | kit %d | wear %.6f | seed %d | stickers %d | colors %d | id %016llx | size %dx%d | %s"
                ,DAT_1809ebea0,&local_d8,DAT_1809ebea4);
  if (DAT_1809ebf40 != '\0') {
    iVar8 = FUN_1804e4d70(&DAT_1809f3770);
    uVar10 = DAT_180cfca18;
    uVar6 = DAT_180cfca10;
    uVar5 = uRam0000000180cfca08;
    uVar4 = _DAT_180cfca00;
    uVar3 = _DAT_180cfc9f8;
    uVar2 = _DAT_180cfc9f0;
    uVar1 = DAT_180ccfedc;
    if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f37bc == 0x7fffffff) {
      DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    FUN_1804e4e90(&DAT_1809f3770);
    _DAT_1809ebfa4 = local_f4;
    _DAT_1809ebfb1 = local_e7;
    _DAT_1809ebfb5 = local_e3;
    _DAT_1809ebf84 = uVar2;
    uRam00000001809ebf8c = uVar3;
    DAT_1809ebfb7 = local_e1;
    _DAT_1809ebf94 = uVar4;
    uRam00000001809ebf9c = uVar5;
    DAT_1809ebf80 = uVar10;
    DAT_1809ebfa8 = uVar6;
    DAT_1809ebfb0 = uVar1;
    if (DAT_1809ebf70 == '\0') {
      FUN_18028eb20(&DAT_1809ebf44);
    }
    else {
      FUN_18028ebb0();
    }
    _DAT_1809ebf71 = 1;
    _DAT_1809ebf78 = GetTickCount64();
    pcVar12 = "weapon";
    if (DAT_1809ebf70 != '\0') {
      pcVar12 = "glove";
    }
    local_120 = (undefined8 *)CONCAT44(local_120._4_4_,DAT_1809ebf60);
    local_128 = DAT_1809ebf5c;
    local_130 = DAT_1809ebf58;
    local_138 = CONCAT44(local_138._4_4_,DAT_1809ebf54);
    local_140 = DAT_1809ebf50;
    local_148 = DAT_1809ebf4c;
    local_150 = DAT_1809ebf48;
    local_158 = (double)CONCAT44(local_158._4_4_,DAT_1809ebf44);
    FUN_1800eb230("colors | armed %s | def %d | kit %d | %08x %08x %08x %08x %08x %08x %08x %08x",
                  pcVar12,DAT_1809ebea0,DAT_1809ebea4);
  }
  return 1;
}



/* ===== 1800ecc20 FUN_1800ecc20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ecc20(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ULONGLONG UVar8;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_358 [32];
  undefined4 local_338;
  undefined2 local_318;
  undefined1 local_316;
  undefined4 local_314;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined8 local_2b4;
  undefined8 uStack_2ac;
  undefined8 local_2a4;
  undefined8 uStack_29c;
  undefined4 local_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 local_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 local_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined1 local_228;
  undefined8 local_224;
  undefined8 uStack_21c;
  undefined8 local_214;
  undefined8 uStack_20c;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  longlong local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1d4;
  undefined8 uStack_1cc;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined4 local_1b7;
  undefined2 local_1b3;
  undefined1 local_1b1;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
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
  
  lVar7 = DAT_180cd11d0;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_358;
  if (DAT_1809ebe50 == '\0') {
    if (DAT_18091a190 != '\0') {
      uStack_1a0 = 0;
      local_198 = _DAT_1808ad410;
      uStack_190 = _UNK_1808ad418;
      local_1a8 = 0;
      uStack_180 = 0;
      local_178 = _DAT_1808ad410;
      uStack_170 = _UNK_1808ad418;
      local_188 = 0;
      local_168 = 0;
      local_160 = 0;
      local_158 = 0;
      local_154 = 0;
      uStack_14c = 0x3f800000;
      local_144 = 0;
      uStack_13c = 0;
      local_134 = 0;
      uStack_130 = 0x3f800000;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      uStack_118 = (undefined4)_DAT_1808ad310;
      local_114 = (undefined4)((ulonglong)_DAT_1808ad310 >> 0x20);
      uStack_110 = (undefined4)_UNK_1808ad318;
      uStack_10c = (undefined4)((ulonglong)_UNK_1808ad318 >> 0x20);
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_f8 = (undefined4)_DAT_1808ad2c0;
      local_f4 = (undefined4)((ulonglong)_DAT_1808ad2c0 >> 0x20);
      uStack_f0 = (undefined4)_UNK_1808ad2c8;
      uStack_ec = (undefined4)((ulonglong)_UNK_1808ad2c8 >> 0x20);
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0x3f800000;
      uStack_d8 = 0;
      local_d4 = 0;
      uStack_d0 = 0;
      local_cc = 0;
      local_c8 = 0;
      local_c4 = 0;
      uStack_bc = 0;
      local_b4 = 0;
      uStack_ac = 0;
      iVar4 = FUN_1804e4d70(&DAT_1809ebe00);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809ebe4c == 0x7fffffff) {
        DAT_1809ebe4c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      if (DAT_180ca0f58 == 0) {
        FUN_1804e4e90(&DAT_1809ebe00);
      }
      else {
        FUN_1800ec550(&local_1a8);
        lVar7 = *(longlong *)(DAT_180ca0f40 + (DAT_180ca0f48 - 1U & DAT_180ca0f50) * 8);
        FUN_18000f890(lVar7 + 0x20);
        FUN_18000f890(lVar7);
        DAT_180ca0f58 = DAT_180ca0f58 + -1;
        if (DAT_180ca0f58 == 0) {
          DAT_180ca0f50 = 0;
        }
        else {
          DAT_180ca0f50 = DAT_180ca0f50 + 1;
        }
        FUN_1804e4e90(&DAT_1809ebe00);
        local_318 = 0;
        local_316 = 0;
        local_314 = 0;
        local_310 = 0;
        uStack_300 = 0;
        local_2f8 = _DAT_1808ad410;
        uStack_2f0 = _UNK_1808ad418;
        local_308 = 0;
        uStack_2e0 = 0;
        local_2d8 = _DAT_1808ad410;
        uStack_2d0 = _UNK_1808ad418;
        local_2e8 = 0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = 0;
        local_2b4 = 0;
        uStack_2ac = 0x3f800000;
        local_2a4 = 0;
        uStack_29c = 0;
        local_294 = 0;
        uStack_290 = 0x3f800000;
        uStack_28c = 0;
        uStack_288 = 0;
        uStack_284 = 0;
        uStack_280 = 0;
        uStack_27c = 0;
        uStack_278 = (undefined4)_DAT_1808ad310;
        local_274 = (undefined4)((ulonglong)_DAT_1808ad310 >> 0x20);
        uStack_270 = (undefined4)_UNK_1808ad318;
        uStack_26c = (undefined4)((ulonglong)_UNK_1808ad318 >> 0x20);
        uStack_268 = 0;
        uStack_264 = 0;
        uStack_260 = 0;
        uStack_25c = 0;
        uStack_258 = (undefined4)_DAT_1808ad2c0;
        local_254 = (undefined4)((ulonglong)_DAT_1808ad2c0 >> 0x20);
        uStack_250 = (undefined4)_UNK_1808ad2c8;
        uStack_24c = (undefined4)((ulonglong)_UNK_1808ad2c8 >> 0x20);
        uStack_248 = 0;
        uStack_244 = 0;
        uStack_240 = 0;
        uStack_23c = 0x3f800000;
        uStack_238 = 0;
        local_234 = 0;
        uStack_230 = 0;
        local_22c = 0;
        local_228 = 0;
        local_224 = 0;
        uStack_21c = 0;
        local_214 = 0;
        uStack_20c = 0;
        local_204 = 0;
        local_200 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_1e8 = 0;
        local_1e4 = 0;
        uStack_1dc = 0;
        local_1d4 = 0;
        uStack_1cc = 0;
        local_1c4 = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        _DAT_1809ebe50 = 0;
        DAT_1809ebe52 = '\0';
        DAT_1809ebe54 = 0;
        _DAT_1809ebe58 = 0;
        FUN_1800ec550(&DAT_1809ebe60,&local_308);
        DAT_1809ebf68 = local_200;
        DAT_1809ebf70 = (char)local_1f8;
        DAT_1809ebf71 = local_1f8._1_1_;
        DAT_1809ebf72 = local_1f8._2_1_;
        DAT_1809ebf73 = local_1f8._3_1_;
        _DAT_1809ebf78 = local_1f0;
        DAT_1809ebf80 = local_1e8;
        _DAT_1809ebf84 = local_1e4;
        uRam00000001809ebf8c = uStack_1dc;
        _DAT_1809ebf94 = local_1d4;
        uRam00000001809ebf9c = uStack_1cc;
        _DAT_1809ebfa4 = local_1c4;
        DAT_1809ebfa8 = local_1c0;
        DAT_1809ebfb0 = local_1b8;
        _DAT_1809ebfb1 = local_1b7;
        _DAT_1809ebfb5 = local_1b3;
        DAT_1809ebfb7 = local_1b1;
        FUN_18000f890(&local_2e8);
        FUN_18000f890(&local_308);
        _DAT_1809ebe50 = CONCAT11(DAT_1809ebe51,1);
        _DAT_1809ebe58 = GetTickCount64();
        FUN_1800ec550(&DAT_1809ebe60,&local_1a8);
        cVar2 = FUN_1800ec640(param_1);
        _DAT_1809ebe50 = CONCAT11(1,DAT_1809ebe50);
        if (cVar2 == '\0') {
          FUN_1800ec1d0(param_1,0,"start failed");
        }
        else {
          DAT_1809ebe54 = 1;
        }
      }
      FUN_18000f890(&local_188);
      FUN_18000f890(&local_1a8);
    }
  }
  else {
    if ((((DAT_180cd11d0 != 0) && (lVar6 = FUN_18000f3a0(param_1 + 0xd0), lVar6 != 0)) &&
        (lVar7 = FUN_18000f3a0(lVar7), lVar7 != 0)) &&
       (lVar7 = FUN_18000f3a0(lVar7 + 0xd0), lVar7 != 0)) {
      FUN_1800eb9e0(extraout_XMM0_Qa,lVar7);
    }
    UVar8 = GetTickCount64();
    lVar7 = DAT_180cd1250;
    if (UVar8 - _DAT_1809ebe58 < 0x3a99) {
      if ((DAT_180cd1250 == 0) || (lVar6 = FUN_18000f3a0(param_1 + 0x30), lVar6 != lVar7)) {
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
        uVar3 = FUN_180011200(param_1 + 0xa0);
        uVar5 = FUN_180011200(param_1 + 0x9c);
        local_338 = uVar3;
        snprintf(&local_98,0x60,"the generator dropped the job (state %d, error %d)",uVar5);
        FUN_1800ec1d0(param_1,0,&local_98);
      }
      else {
        if (DAT_1809ebf71 != '\0') {
          if ((DAT_1809ebf72 == '\0') && (cVar2 = FUN_1800ebf50(), cVar2 == '\0')) {
            UVar8 = GetTickCount64();
            FUN_1800eb230("colors | displaced by another arm | def %d | kit %d | after %llu ms",
                          DAT_1809ebea0,DAT_1809ebea4,UVar8 - _DAT_1809ebf78);
            DAT_1809ebf71 = '\0';
          }
          else if (DAT_1809ebf71 != '\0') {
            if ((DAT_1809ebf72 == '\0') && (cVar2 = FUN_18028ed00(), cVar2 != '\0')) {
              DAT_1809ebf72 = '\x01';
              FUN_1800ec090("composite build");
            }
            else if ((DAT_1809ebf71 != '\0') && (DAT_1809ebf72 == '\0')) {
              iVar4 = FUN_1804e4d70(&DAT_1809f3770);
              uVar1 = DAT_180cfca10;
              if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1804e4a90(5);
              }
              if (DAT_1809f37bc == 0x7fffffff) {
                DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                FUN_1804e4a90(6);
              }
              FUN_1804e4e90(&DAT_1809f3770);
              UVar8 = GetTickCount64();
              if (uVar1 < UVar8 + 1000) {
                if (DAT_1809ebf70 == '\0') {
                  FUN_18028eb20(&DAT_1809ebf44);
                }
                else {
                  FUN_18028ebb0();
                }
              }
            }
          }
        }
        if (DAT_1809ebe52 == '\0') {
          if (DAT_1809ebe54 < 1) {
            iVar4 = FUN_180011200(param_1 + 0x9c);
            if (7 < iVar4) {
              DAT_1809ebe52 = '\x01';
            }
          }
          else {
            DAT_1809ebe54 = DAT_1809ebe54 + -1;
          }
        }
      }
    }
    else {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      uVar3 = FUN_180011200(param_1 + 0x9c);
      snprintf(&local_98,0x40,"timeout in state %d",uVar3);
      FUN_1800ec1d0(param_1,0,&local_98);
    }
  }
  return;
}



/* ===== 1800ed3c0 FUN_1800ed3c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001800ed6fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ed3c0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  char *pcVar15;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  char *local_1a0;
  double local_198;
  undefined4 local_190;
  char local_188;
  longlong local_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  char local_138 [128];
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
  ulonglong local_58;
  
  lVar10 = DAT_180cd1250;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  if (DAT_1809ebe52 == '\0') {
    return;
  }
  if ((DAT_180cd1250 == 0) || (lVar7 = FUN_18000f3a0(param_1 + 0x30), lVar7 != lVar10)) {
    pcVar15 = "the generator dropped the job before the read";
    goto LAB_1800ed801;
  }
  iVar4 = FUN_180011200(param_1 + 0x9c);
  if (iVar4 < 9) {
    return;
  }
  if (10 < iVar4) {
    local_138[0] = '\0';
    local_138[1] = '\0';
    local_138[2] = '\0';
    local_138[3] = '\0';
    local_138[4] = '\0';
    local_138[5] = '\0';
    local_138[6] = '\0';
    local_138[7] = '\0';
    local_138[8] = '\0';
    local_138[9] = '\0';
    local_138[10] = '\0';
    local_138[0xb] = '\0';
    local_138[0xc] = '\0';
    local_138[0xd] = '\0';
    local_138[0xe] = '\0';
    local_138[0xf] = '\0';
    local_138[0x10] = '\0';
    local_138[0x11] = '\0';
    local_138[0x12] = '\0';
    local_138[0x13] = '\0';
    local_138[0x14] = '\0';
    local_138[0x15] = '\0';
    local_138[0x16] = '\0';
    local_138[0x17] = '\0';
    local_138[0x18] = '\0';
    local_138[0x19] = '\0';
    local_138[0x1a] = '\0';
    local_138[0x1b] = '\0';
    local_138[0x1c] = '\0';
    local_138[0x1d] = '\0';
    local_138[0x1e] = '\0';
    local_138[0x1f] = '\0';
    local_138[0x20] = '\0';
    local_138[0x21] = '\0';
    local_138[0x22] = '\0';
    local_138[0x23] = '\0';
    local_138[0x24] = '\0';
    local_138[0x25] = '\0';
    local_138[0x26] = '\0';
    local_138[0x27] = '\0';
    local_138[0x28] = '\0';
    local_138[0x29] = '\0';
    local_138[0x2a] = '\0';
    local_138[0x2b] = '\0';
    local_138[0x2c] = '\0';
    local_138[0x2d] = '\0';
    local_138[0x2e] = '\0';
    local_138[0x2f] = '\0';
    local_138[0x30] = '\0';
    local_138[0x31] = '\0';
    local_138[0x32] = '\0';
    local_138[0x33] = '\0';
    local_138[0x34] = '\0';
    local_138[0x35] = '\0';
    local_138[0x36] = '\0';
    local_138[0x37] = '\0';
    local_138[0x38] = '\0';
    local_138[0x39] = '\0';
    local_138[0x3a] = '\0';
    local_138[0x3b] = '\0';
    local_138[0x3c] = '\0';
    local_138[0x3d] = '\0';
    local_138[0x3e] = '\0';
    local_138[0x3f] = '\0';
    uVar5 = FUN_180011200(param_1 + 0xa0);
    snprintf(local_138,0x40,"generator error %d",uVar5);
    pcVar15 = local_138;
    goto LAB_1800ed801;
  }
  uVar8 = FUN_180011200(param_1 + 0x98);
  if (((uVar8 & 0x2d) == 0) || (cVar3 = FUN_180011220(param_1 + 0x155), cVar3 == '\0')) {
    bVar1 = false;
    local_188 = '\0';
    lVar10 = FUN_18000f3a0(param_1 + 0x168);
    uVar5 = 0;
LAB_1800ed4d5:
    uVar13 = uVar5;
    lVar7 = FUN_18000f3a0(param_1 + 0x158);
  }
  else {
    lVar7 = FUN_18000f3a0(param_1 + 0x168);
    bVar1 = true;
    uVar13 = 1;
    local_188 = '\x01';
    lVar10 = lVar7;
    uVar5 = 1;
    if (lVar7 == 0) goto LAB_1800ed4d5;
  }
  iVar4 = FUN_180011200(param_1 + 0x180);
  if (bVar1) {
    iVar4 = iVar4 * 4;
  }
  iVar6 = FUN_180011200(param_1 + 0x184);
  if (bVar1) {
    iVar6 = iVar6 * 4;
  }
  if (DAT_1809621d8 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_18000f3a0();
  }
  if (((((lVar7 == 0) || (lVar9 == 0)) || (iVar4 < 1)) || ((iVar6 < 1 || (0x2000 < iVar4)))) ||
     ((0x2000 < iVar6 || ((local_188 != '\0' && (lVar10 == 0)))))) {
    local_138[0] = '\0';
    local_138[1] = '\0';
    local_138[2] = '\0';
    local_138[3] = '\0';
    local_138[4] = '\0';
    local_138[5] = '\0';
    local_138[6] = '\0';
    local_138[7] = '\0';
    local_138[8] = '\0';
    local_138[9] = '\0';
    local_138[10] = '\0';
    local_138[0xb] = '\0';
    local_138[0xc] = '\0';
    local_138[0xd] = '\0';
    local_138[0xe] = '\0';
    local_138[0xf] = '\0';
    local_138[0x10] = '\0';
    local_138[0x11] = '\0';
    local_138[0x12] = '\0';
    local_138[0x13] = '\0';
    local_138[0x14] = '\0';
    local_138[0x15] = '\0';
    local_138[0x16] = '\0';
    local_138[0x17] = '\0';
    local_138[0x18] = '\0';
    local_138[0x19] = '\0';
    local_138[0x1a] = '\0';
    local_138[0x1b] = '\0';
    local_138[0x1c] = '\0';
    local_138[0x1d] = '\0';
    local_138[0x1e] = '\0';
    local_138[0x1f] = '\0';
    local_138[0x20] = '\0';
    local_138[0x21] = '\0';
    local_138[0x22] = '\0';
    local_138[0x23] = '\0';
    local_138[0x24] = '\0';
    local_138[0x25] = '\0';
    local_138[0x26] = '\0';
    local_138[0x27] = '\0';
    local_138[0x28] = '\0';
    local_138[0x29] = '\0';
    local_138[0x2a] = '\0';
    local_138[0x2b] = '\0';
    local_138[0x2c] = '\0';
    local_138[0x2d] = '\0';
    local_138[0x2e] = '\0';
    local_138[0x2f] = '\0';
    local_138[0x30] = '\0';
    local_138[0x31] = '\0';
    local_138[0x32] = '\0';
    local_138[0x33] = '\0';
    local_138[0x34] = '\0';
    local_138[0x35] = '\0';
    local_138[0x36] = '\0';
    local_138[0x37] = '\0';
    local_138[0x38] = '\0';
    local_138[0x39] = '\0';
    local_138[0x3a] = '\0';
    local_138[0x3b] = '\0';
    local_138[0x3c] = '\0';
    local_138[0x3d] = '\0';
    local_138[0x3e] = '\0';
    local_138[0x3f] = '\0';
    local_138[0x40] = '\0';
    local_138[0x41] = '\0';
    local_138[0x42] = '\0';
    local_138[0x43] = '\0';
    local_138[0x44] = '\0';
    local_138[0x45] = '\0';
    local_138[0x46] = '\0';
    local_138[0x47] = '\0';
    local_138[0x48] = '\0';
    local_138[0x49] = '\0';
    local_138[0x4a] = '\0';
    local_138[0x4b] = '\0';
    local_138[0x4c] = '\0';
    local_138[0x4d] = '\0';
    local_138[0x4e] = '\0';
    local_138[0x4f] = '\0';
    local_138[0x50] = '\0';
    local_138[0x51] = '\0';
    local_138[0x52] = '\0';
    local_138[0x53] = '\0';
    local_138[0x54] = '\0';
    local_138[0x55] = '\0';
    local_138[0x56] = '\0';
    local_138[0x57] = '\0';
    local_138[0x58] = '\0';
    local_138[0x59] = '\0';
    local_138[0x5a] = '\0';
    local_138[0x5b] = '\0';
    local_138[0x5c] = '\0';
    local_138[0x5d] = '\0';
    local_138[0x5e] = '\0';
    local_138[0x5f] = '\0';
    local_138[0x60] = '\0';
    local_138[0x61] = '\0';
    local_138[0x62] = '\0';
    local_138[99] = '\0';
    local_138[100] = '\0';
    local_138[0x65] = '\0';
    local_138[0x66] = '\0';
    local_138[0x67] = '\0';
    local_138[0x68] = '\0';
    local_138[0x69] = '\0';
    local_138[0x6a] = '\0';
    local_138[0x6b] = '\0';
    local_138[0x6c] = '\0';
    local_138[0x6d] = '\0';
    local_138[0x6e] = '\0';
    local_138[0x6f] = '\0';
    local_138[0x70] = '\0';
    local_138[0x71] = '\0';
    local_138[0x72] = '\0';
    local_138[0x73] = '\0';
    local_138[0x74] = '\0';
    local_138[0x75] = '\0';
    local_138[0x76] = '\0';
    local_138[0x77] = '\0';
    local_138[0x78] = '\0';
    local_138[0x79] = '\0';
    local_138[0x7a] = '\0';
    local_138[0x7b] = '\0';
    local_138[0x7c] = '\0';
    local_138[0x7d] = '\0';
    local_138[0x7e] = '\0';
    local_138[0x7f] = '\0';
    local_198 = (double)CONCAT44(local_198._4_4_,iVar6);
    local_1a0 = (char *)CONCAT44(local_1a0._4_4_,iVar4);
    local_1a8 = lVar9;
    local_190 = uVar13;
    snprintf(local_138,0x80,"no target (texture %p device %p %dx%d large %d)",lVar7);
    pcVar15 = local_138;
LAB_1800ed801:
    FUN_1800ec1d0(param_1,0,pcVar15);
    return;
  }
  uVar8 = (longlong)iVar6 * (longlong)iVar4 * 4;
  local_178 = 0;
  lStack_170 = 0;
  local_180 = 0;
  local_168 = 0;
  if (uVar8 == 0) {
    lVar10 = 0;
  }
  else {
    if (0x7fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar10 = FUN_18000fb70(uVar8);
    local_180 = lVar10 + uVar8;
    local_178 = lVar10;
    local_168 = local_180;
    FUN_180540170(lVar10,0,uVar8);
    lStack_170 = local_180;
  }
  lVar2 = lStack_170;
  local_1a8 = lVar10;
  local_180 = lStack_170;
  cVar3 = FUN_1800ebbd0(lVar9,lVar7,iVar4,iVar6);
  if (cVar3 == '\0') {
    pcVar15 = "ReadTexturePixels failed";
  }
  else {
    uVar8 = lVar2 - lVar10;
    if (3 < uVar8) {
      uVar14 = 0;
      uVar11 = 3;
      lVar7 = 0;
      lVar9 = 0;
      if (uVar8 < 8) {
LAB_1800ed67f:
        uVar14 = (ulonglong)*(byte *)(lVar10 + uVar11);
      }
      else {
        do {
          lVar7 = lVar7 + (ulonglong)*(byte *)(lVar10 + uVar11);
          lVar9 = lVar9 + (ulonglong)*(byte *)(lVar10 + 4 + uVar11);
          uVar11 = uVar11 + 8;
        } while (uVar11 < uVar8 - 4);
        if (uVar11 < uVar8) goto LAB_1800ed67f;
      }
      uVar14 = lVar7 + lVar9 + uVar14;
      if (uVar14 != 0) {
        local_168 = 0;
        lStack_170 = 0;
        local_178 = 0;
        local_150 = local_180;
        local_160 = lVar10;
        local_158 = lVar2;
        FUN_1800e7b30(&DAT_1809ebe60,iVar4,iVar6,&local_160);
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
        local_198 = (double)uVar14 / ((double)((ulonglong)(lVar2 - lVar10) >> 2) * _DAT_1808ac6e8);
        local_1a0 = "";
        if (local_188 != '\0') {
          local_1a0 = " supersampled";
        }
        local_1a8 = CONCAT44(local_1a8._4_4_,iVar6);
        snprintf(&local_b8,0x60,"%dx%d%s | coverage %.3f",iVar4);
        pcVar15 = (char *)&local_b8;
        uVar12 = 1;
        goto LAB_1800ed791;
      }
    }
    pcVar15 = "rendered image is empty";
  }
  uVar12 = 0;
LAB_1800ed791:
  FUN_1800ec1d0(param_1,uVar12,pcVar15);
  FUN_180081c30(&local_178);
  return;
}



/* ===== 1800ed840 FUN_1800ed840 ===== */

void FUN_1800ed840(longlong param_1,undefined8 param_2)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if ((param_1 == DAT_180cd1240) && (DAT_180cd1240 != 0)) {
    FUN_1800ecc20();
  }
  (*DAT_180cd1260)(param_1,param_2);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1800ed890 FUN_1800ed890 ===== */

void FUN_1800ed890(longlong param_1)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (((param_1 == DAT_180cd1240) && (DAT_180cd1240 != 0)) && (DAT_1809ebe50 != '\0')) {
    FUN_1800ed3c0();
  }
  else {
    (*DAT_180cd1268)();
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1800ed8d0 FUN_1800ed8d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ed8d0(undefined8 *param_1,float param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  ULONGLONG UVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint local_1c0;
  undefined8 ******local_1b8;
  undefined *local_1a8;
  undefined1 local_1a0 [20];
  undefined4 local_18c;
  ulonglong local_178;
  ulonglong uStack_170;
  ulonglong local_168;
  ulonglong local_160;
  undefined8 ******local_158;
  ulonglong uStack_150;
  ulonglong local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 local_130;
  char local_128;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 local_114;
  undefined8 uStack_10c;
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
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  if (DAT_180cc3d77 == '\0') {
    return;
  }
  local_1a8 = &DAT_1809ebe00;
  iVar5 = FUN_1804e4d70(&DAT_1809ebe00);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebe4c == 0x7fffffff) {
    DAT_1809ebe4c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  uVar9 = extraout_XMM0_Qa;
  if ((0x1000 < DAT_180cd1210) &&
     (plVar7 = (longlong *)*DAT_180cd1208, plVar6 = DAT_180cd1208, plVar7 != DAT_180cd1208)) {
    do {
      lVar1 = DAT_180cd1218;
      if ((*(uint *)(plVar7 + 8) & 0xfffffffd) == 0) {
        if ((ulonglong)plVar7[5] < 0x10) {
          plVar11 = plVar7 + 2;
        }
        else {
          plVar11 = (longlong *)plVar7[2];
        }
        uVar10 = 0xcbf29ce484222325;
        uVar12 = 0;
        if (plVar7[4] != 0) {
          do {
            uVar10 = (uVar10 ^ *(byte *)((longlong)plVar11 + uVar12)) * 0x100000001b3;
            uVar12 = uVar12 + 1;
          } while (uVar12 < (ulonglong)plVar7[4]);
        }
        uVar10 = uVar10 & DAT_180cd1230;
        plVar11 = *(longlong **)(DAT_180cd1218 + uVar10 * 0x10);
        if (*(longlong **)(DAT_180cd1218 + 8 + uVar10 * 0x10) == plVar7) {
          if (plVar11 == plVar7) {
            *(longlong **)(DAT_180cd1218 + uVar10 * 0x10) = plVar6;
            *(longlong **)(lVar1 + 8 + uVar10 * 0x10) = plVar6;
          }
          else {
            *(longlong *)(DAT_180cd1218 + 8 + uVar10 * 0x10) = plVar7[1];
          }
        }
        else if (plVar11 == plVar7) {
          *(longlong *)(DAT_180cd1218 + uVar10 * 0x10) = *plVar7;
        }
        plVar11 = (longlong *)*plVar7;
        DAT_180cd1210 = DAT_180cd1210 - 1;
        *(longlong **)plVar7[1] = plVar11;
        plVar11[1] = plVar7[1];
        FUN_18000f890(plVar7 + 2);
        uVar9 = thunk_FUN_1803d64e0(plVar7,0x50);
        plVar6 = DAT_180cd1208;
      }
      else {
        plVar11 = (longlong *)*plVar7;
      }
      plVar7 = plVar11;
    } while (plVar11 != plVar6);
  }
  plVar7 = (longlong *)FUN_1800ee500(uVar9,local_1a0,param_1);
  lVar1 = *plVar7;
  if ((*(int *)(lVar1 + 0x40) - 1U & 0xfffffffd) != 0) {
    if (*(int *)(lVar1 + 0x40) == 2) {
      UVar8 = GetTickCount64();
      if (UVar8 - *(longlong *)(lVar1 + 0x48) < 3000) goto LAB_1800ede28;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(undefined4 *)(lVar1 + 0x40) = 0;
      *(undefined4 *)(lVar1 + 0x44) = local_18c;
      *(undefined8 *)(lVar1 + 0x48) = 0;
    }
    UVar8 = GetTickCount64();
    dVar3 = (double)UVar8 / DAT_1808ac730;
    if ((*(double *)(lVar1 + 0x30) != 0.0) && (DAT_1808ac548 < dVar3 - *(double *)(lVar1 + 0x30))) {
      *(undefined8 *)(lVar1 + 0x38) = 0;
    }
    *(double *)(lVar1 + 0x30) = dVar3;
    dVar3 = (double)param_2 + *(double *)(lVar1 + 0x38);
    *(double *)(lVar1 + 0x38) = dVar3;
    if (DAT_1808ac4a8 <= dVar3) {
      uStack_170 = 0;
      local_168 = 0;
      local_160 = 0xf;
      local_178 = 0;
      uStack_150 = 0;
      local_148 = 0;
      local_140 = 0xf;
      local_158 = (undefined8 ******)0x0;
      local_138 = 0;
      local_130 = 0;
      local_128 = '\0';
      local_124 = 0;
      uStack_11c = 0x3f800000;
      local_114 = 0;
      uStack_10c = 0;
      local_104 = 0;
      uStack_100 = 0x3f800000;
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_e8 = (undefined4)_DAT_1808ad310;
      local_e4 = (undefined4)((ulonglong)_DAT_1808ad310 >> 0x20);
      uStack_e0 = (undefined4)_UNK_1808ad318;
      uStack_dc = (undefined4)((ulonglong)_UNK_1808ad318 >> 0x20);
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = (undefined4)_DAT_1808ad2c0;
      local_c4 = (undefined4)((ulonglong)_DAT_1808ad2c0 >> 0x20);
      uStack_c0 = (undefined4)_UNK_1808ad2c8;
      uStack_bc = (undefined4)((ulonglong)_UNK_1808ad2c8 >> 0x20);
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0x3f800000;
      uStack_a8 = 0;
      local_a4 = 0;
      uStack_a0 = 0;
      local_9c = 0;
      local_98 = 0;
      local_94 = 0;
      uStack_8c = 0;
      local_84 = 0;
      uStack_7c = 0;
      cVar4 = FUN_1800eb500(param_1,&local_178);
      if (cVar4 == '\0') {
        *(undefined4 *)(lVar1 + 0x40) = 3;
        if (0xf < (ulonglong)param_1[3]) {
          param_1 = (undefined8 *)*param_1;
        }
        FUN_1800eb230("[error] queue | unreadable key %s",param_1);
      }
      else {
        *(undefined4 *)(lVar1 + 0x40) = 1;
        local_1b8 = &local_158;
        if (0xf < local_140) {
          local_1b8 = local_158;
        }
        local_1c0 = (uint)(local_128 != '\0');
        local_1c8 = local_130._4_4_;
        FUN_1800eb230("queued | def %d | kit %d | wear %.6f | seed %d | stickers %d | %s",
                      local_138 & 0xffffffff,local_138._4_4_,(double)(float)local_130);
        if (DAT_180ca0f48 <= DAT_180ca0f58 + 1U) {
          FUN_1800ee950();
        }
        DAT_180ca0f50 = DAT_180ca0f50 & DAT_180ca0f48 - 1;
        uVar10 = DAT_180ca0f50 + DAT_180ca0f58;
        uVar12 = DAT_180ca0f48 - 1 & uVar10;
        if (*(longlong *)(DAT_180ca0f40 + uVar12 * 8) == 0) {
          uVar9 = FUN_1804ecaa0(0x108);
          *(undefined8 *)(DAT_180ca0f40 + uVar12 * 8) = uVar9;
        }
        puVar2 = *(ulonglong **)(DAT_180ca0f40 + (DAT_180ca0f48 - 1 & uVar10) * 8);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = local_178;
        puVar2[1] = uStack_170;
        puVar2[2] = local_168;
        puVar2[3] = local_160;
        local_168 = 0;
        local_160 = 0xf;
        local_178 = local_178 & 0xffffffffffffff00;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[4] = (ulonglong)local_158;
        puVar2[5] = uStack_150;
        puVar2[6] = local_148;
        puVar2[7] = local_140;
        local_148 = 0;
        local_140 = 0xf;
        local_158 = (undefined8 ******)((ulonglong)local_158 & 0xffffffffffffff00);
        *(undefined4 *)(puVar2 + 8) = (undefined4)local_138;
        *(undefined4 *)((longlong)puVar2 + 0x44) = local_138._4_4_;
        *(float *)(puVar2 + 9) = (float)local_130;
        *(undefined4 *)((longlong)puVar2 + 0x4c) = local_130._4_4_;
        *(char *)(puVar2 + 10) = local_128;
        *(undefined8 *)((longlong)puVar2 + 0x54) = local_124;
        *(undefined8 *)((longlong)puVar2 + 0x5c) = uStack_11c;
        *(undefined8 *)((longlong)puVar2 + 100) = local_114;
        *(undefined8 *)((longlong)puVar2 + 0x6c) = uStack_10c;
        *(ulonglong *)((longlong)puVar2 + 0x74) = CONCAT44(uStack_100,local_104);
        *(ulonglong *)((longlong)puVar2 + 0x7c) = CONCAT44(uStack_f8,uStack_fc);
        *(ulonglong *)((longlong)puVar2 + 0x84) = CONCAT44(uStack_f0,uStack_f4);
        *(ulonglong *)((longlong)puVar2 + 0x8c) = CONCAT44(uStack_e8,uStack_ec);
        *(ulonglong *)((longlong)puVar2 + 0x94) = CONCAT44(uStack_e0,local_e4);
        *(ulonglong *)((longlong)puVar2 + 0x9c) = CONCAT44(uStack_d8,uStack_dc);
        *(ulonglong *)((longlong)puVar2 + 0xa4) = CONCAT44(uStack_d0,uStack_d4);
        *(ulonglong *)((longlong)puVar2 + 0xac) = CONCAT44(uStack_c8,uStack_cc);
        *(ulonglong *)((longlong)puVar2 + 0xb4) = CONCAT44(uStack_c0,local_c4);
        *(ulonglong *)((longlong)puVar2 + 0xbc) = CONCAT44(uStack_b8,uStack_bc);
        *(ulonglong *)((longlong)puVar2 + 0xc4) = CONCAT44(uStack_b0,uStack_b4);
        *(ulonglong *)((longlong)puVar2 + 0xcc) = CONCAT44(uStack_a8,uStack_ac);
        puVar2[0x1a] = CONCAT44(local_a4,uStack_a8);
        puVar2[0x1b] = CONCAT44(local_9c,uStack_a0);
        *(undefined1 *)(puVar2 + 0x1c) = local_98;
        *(undefined8 *)((longlong)puVar2 + 0xe4) = local_94;
        *(undefined8 *)((longlong)puVar2 + 0xec) = uStack_8c;
        *(undefined8 *)((longlong)puVar2 + 0xf4) = local_84;
        *(undefined8 *)((longlong)puVar2 + 0xfc) = uStack_7c;
        DAT_180ca0f58 = DAT_180ca0f58 + 1;
      }
      FUN_18000f890(&local_158);
      FUN_18000f890(&local_178);
    }
  }
LAB_1800ede28:
  FUN_1804e4e90(&DAT_1809ebe00);
  return;
}



/* ===== 1800ede80 FUN_1800ede80 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_1800ede80(undefined2 *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  bool bVar11;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_47;
  undefined2 uStack_43;
  undefined1 uStack_41;
  
  *param_1 = 0;
  bVar11 = DAT_180cc3d77 != '\0';
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (((((bVar11) && (param_2 != 0)) && (DAT_1809ebe50 != '\0')) &&
      ((DAT_1809ebe51 != '\0' && (DAT_1809ebf68 != 0)))) && (DAT_180cd11ec != 0)) {
    lVar9 = FUN_18000f3a0((ulonglong)DAT_180cd11ec + (ulonglong)DAT_180cd11e0 + param_2);
    bVar11 = lVar9 == DAT_1809ebf68;
    if ((bVar11) || ((DAT_1809ebf71 != '\0' && (DAT_1809ebf70 == '\0')))) {
      *(undefined1 *)param_1 = 1;
      *(bool *)((longlong)param_1 + 1) = bVar11;
      iVar8 = FUN_1804e4d70(&DAT_1809f3770);
      uVar7 = DAT_180cfca18;
      uVar6 = DAT_180cfca10;
      uVar5 = uRam0000000180cfca08;
      uVar4 = _DAT_180cfca00;
      uVar3 = _DAT_180cfc9f8;
      uVar2 = _DAT_180cfc9f0;
      uVar1 = DAT_180ccfedc;
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f37bc == 0x7fffffff) {
        DAT_1809f37bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      FUN_1804e4e90(&DAT_1809f3770);
      uStack_74 = (undefined4)uVar2;
      uStack_70 = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_6c = (undefined4)uVar3;
      uStack_68 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_64 = (undefined4)uVar4;
      uStack_60 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_5c = (undefined4)uVar5;
      uStack_58 = (undefined4)((ulonglong)uVar5 >> 0x20);
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_74,uVar7);
      *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_6c,uStack_70);
      local_50 = (undefined4)uVar6;
      uStack_4c = (undefined4)((ulonglong)uVar6 >> 0x20);
      *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_64,uStack_68);
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_5c,uStack_60);
      *(undefined4 *)(param_1 + 0x14) = uStack_58;
      *(undefined4 *)(param_1 + 0x16) = local_54;
      *(undefined4 *)(param_1 + 0x18) = local_50;
      *(undefined4 *)(param_1 + 0x1a) = uStack_4c;
      *(ulonglong *)(param_1 + 0x1c) =
           CONCAT17(uStack_41,CONCAT25(uStack_43,CONCAT41(uStack_47,uVar1)));
      if (!bVar11) {
        FUN_18028ec90();
        return param_1;
      }
      if (DAT_1809ebf40 == '\0') {
        FUN_18028ec90();
      }
      else if (DAT_1809ebf70 == '\0') {
        FUN_18028eb20(&DAT_1809ebf44);
      }
      else {
        FUN_18028ebb0();
      }
      if (DAT_1809ebf73 == '\0') {
        DAT_1809ebf73 = '\x01';
        if (DAT_1809ebf40 == '\0') {
          pcVar10 = "own kit colors";
        }
        else {
          pcVar10 = "weapon colors";
          if (DAT_1809ebf70 != '\0') {
            pcVar10 = "glove colors";
          }
        }
        FUN_1800eb230("colors | preview regenerate | def %d | kit %d | entity %p | %s",DAT_1809ebea0
                      ,DAT_1809ebea4,param_2,pcVar10);
      }
    }
  }
  return param_1;
}



/* ===== 1800ee120 FUN_1800ee120 ===== */

void FUN_1800ee120(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  INT_PTR IVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  char *pcVar10;
  
  if (DAT_180cc3d77 != '\0') {
    return;
  }
  if (DAT_1809621b0 == 0) {
    DAT_180cd1240 = 0;
  }
  else {
    DAT_180cd1240 = FUN_18000f3a0();
  }
  lVar1 = DAT_180961ae0;
  DAT_180cd11c8 = DAT_1809621b8;
  DAT_180cd11f0 = DAT_1809621c0;
  if ((DAT_180961ae0 != 0) && (cVar2 = FUN_180011220(DAT_180961ae0 + 0x3a), cVar2 == -0x47)) {
    uVar3 = FUN_180011200(lVar1 + 0x3b);
    DAT_180cd1248 = (ulonglong)uVar3;
  }
  hModule = GetModuleHandleA("scenesystem.dll");
  if ((hModule == (HMODULE)0x0) ||
     (pFVar5 = GetProcAddress(hModule,"CreateInterface"), pFVar5 == (FARPROC)0x0)) {
    IVar6 = 0;
  }
  else {
    IVar6 = (*pFVar5)("SceneSystem_002",0);
  }
  lVar1 = DAT_180cd1240;
  DAT_180cd11d0 = IVar6;
  if (DAT_180cd1240 == 0) {
    lVar7 = 0;
LAB_1800ee241:
    lVar8 = 0;
  }
  else {
    lVar7 = FUN_18000f3a0(DAT_180cd1240);
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_18000f3a0(lVar7 + 0xe0);
    }
    lVar8 = FUN_18000f3a0(lVar1);
    if (lVar8 == 0) goto LAB_1800ee241;
    lVar8 = FUN_18000f3a0(lVar8 + 0x180);
  }
  FUN_1800eb230("install | generator %p | slot %d %p (pattern %p) | slot %d %p (pattern %p) | finish %p | targets %p | view ctor %p init %p name %p size 0x%zx | device %p | scene %p"
                ,lVar1,0x1c,lVar7,DAT_180cd11c8,0x30,lVar8,DAT_180cd11f0,DAT_1809621c8,DAT_1809621d0
                ,DAT_1809621e0,DAT_1809621e8,DAT_1809621f0,DAT_180cd1248,DAT_1809621d8,IVar6);
  lVar1 = DAT_180cd11c8;
  if (((((DAT_180cd1240 == 0) || (DAT_180cd11c8 == 0)) || (DAT_180cd11f0 == 0)) ||
      (((lVar7 != DAT_180cd11c8 || (lVar8 != DAT_180cd11f0)) ||
       ((DAT_1809621c8 == 0 || ((DAT_1809621d0 == 0 || (DAT_1809621e0 == 0)))))))) ||
     ((DAT_1809621e8 == 0 ||
      (((((DAT_1809621f0 == 0 || (DAT_1809621d8 == 0)) || (DAT_180961b50 == 0)) ||
        ((DAT_180961e90 == 0 || (DAT_180cd1248 == 0)))) || (DAT_180cd11d0 == 0)))))) {
    FUN_1800eb230(
                 "[error] install | disabled: an address is missing or the generator vtable does not match the patterns"
                 );
    pcVar10 = "[error] icon gen | not installed (see wl_inventory.log)";
  }
  else {
    iVar4 = FUN_180428df0(DAT_180cd11c8,FUN_1800ed840,&DAT_180cd1260);
    if (iVar4 == 0) {
      iVar4 = FUN_1804293b0(lVar1,1);
      lVar1 = DAT_180cd11f0;
      if (iVar4 == 0) {
        iVar4 = FUN_180428df0(DAT_180cd11f0,FUN_1800ed890,&DAT_180cd1268);
        if (iVar4 != 0) {
          uVar9 = FUN_180429510(iVar4);
          FUN_1800eb230("[error] install | %s: hook failed | %s",&DAT_1806e15a4,uVar9);
          pcVar10 = "[error] icon gen | hooks not installed (see wl_inventory.log)";
          DAT_180cd1268 = 0;
          goto LAB_1800ee4c2;
        }
        iVar4 = FUN_1804293b0(lVar1,1);
        if (iVar4 == 0) {
          DAT_180cc3d77 = '\x01';
          FUN_1802b2560("[icon gen] generator %p hooked",DAT_180cd1240);
          return;
        }
        uVar9 = FUN_180429510(iVar4);
        pcVar10 = "post";
      }
      else {
        uVar9 = FUN_180429510(iVar4);
        pcVar10 = "update";
      }
      FUN_1800eb230("[error] install | %s: enable failed | %s",pcVar10,uVar9);
      pcVar10 = "[error] icon gen | hooks not installed (see wl_inventory.log)";
    }
    else {
      uVar9 = FUN_180429510(iVar4);
      FUN_1800eb230("[error] install | %s: hook failed | %s","update",uVar9);
      pcVar10 = "[error] icon gen | hooks not installed (see wl_inventory.log)";
      DAT_180cd1260 = 0;
    }
  }
LAB_1800ee4c2:
  FUN_1802b2560(pcVar10);
  DAT_180cd1240 = 0;
  return;
}



/* ===== 1800ee500 FUN_1800ee500 ===== */

longlong * FUN_1800ee500(undefined8 param_1,longlong *param_2,undefined8 *param_3)

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
  longlong local_58;
  longlong lStack_50;
  undefined8 *local_48;
  longlong *local_40;
  
  if ((ulonglong)param_3[3] < 0x10) {
    puVar7 = param_3;
  }
  else {
    puVar7 = (undefined8 *)*param_3;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar4 = 0;
  if (param_3[2] != 0) {
    do {
      uVar8 = (uVar8 ^ *(byte *)(uVar4 + (longlong)puVar7)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)param_3[2]);
  }
  FUN_1800ee870(uVar4,&local_58,param_3,uVar8);
  if (lStack_50 != 0) {
    *param_2 = lStack_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180cd1210 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  local_48 = &DAT_180cd1208;
  local_40 = (longlong *)0x0;
  plVar2 = (longlong *)FUN_1804ecaa0(0x50);
  local_40 = plVar2;
  FUN_180024b50(plVar2 + 2,param_3);
  plVar2[8] = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[9] = 0;
  uVar4 = DAT_180cd1238;
  if (DAT_180cd1200 < (float)(DAT_180cd1210 + 1) / (float)DAT_180cd1238) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180cd1210 + 1) / DAT_180cd1200);
    lVar5 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar5)) {
      uVar6 = (longlong)fVar10 + lVar5;
    }
    uVar9 = uVar4;
    if ((uVar4 < uVar6) && ((0x1ff < uVar4 || (uVar9 = uVar4 * 8, uVar4 * 8 < uVar6)))) {
      uVar9 = uVar6;
    }
    uVar11 = FUN_1800eeb20(uVar6,uVar9);
    plVar3 = (longlong *)FUN_1800ee870(uVar11,&local_48,plVar2 + 2,uVar8);
    local_58 = *plVar3;
  }
  plVar3 = *(longlong **)(local_58 + 8);
  DAT_180cd1210 = DAT_180cd1210 + 1;
  *plVar2 = local_58;
  plVar2[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar2;
  *(longlong **)(local_58 + 8) = plVar2;
  lVar1 = DAT_180cd1218;
  uVar8 = DAT_180cd1230 & uVar8;
  lVar5 = *(longlong *)(DAT_180cd1218 + uVar8 * 0x10);
  if (lVar5 == DAT_180cd1208) {
    *(longlong **)(DAT_180cd1218 + uVar8 * 0x10) = plVar2;
  }
  else {
    if (lVar5 == local_58) {
      *(longlong **)(DAT_180cd1218 + uVar8 * 0x10) = plVar2;
      goto LAB_1800ee746;
    }
    if (*(longlong **)(DAT_180cd1218 + 8 + uVar8 * 0x10) != plVar3) goto LAB_1800ee746;
  }
  *(longlong **)(lVar1 + 8 + uVar8 * 0x10) = plVar2;
LAB_1800ee746:
  *param_2 = (longlong)plVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1800ee770 FUN_1800ee770 ===== */

void FUN_1800ee770(longlong param_1)

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
      FUN_18000f890(lVar2 + 0x20);
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
      thunk_FUN_1803d64e0(lVar3,0x108);
    }
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = lVar2;
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_1800ee84d;
    lVar3 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1800ee84d:
  *(undefined8 *)(puVar5 + -8) = 0x1800ee855;
  thunk_FUN_1803d64e0(lVar3);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* ===== 1800ee870 FUN_1800ee870 ===== */

undefined8 *
FUN_1800ee870(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(DAT_180cd1218 + 8 + (DAT_180cd1230 & param_4) * 0x10);
  if (puVar4 == DAT_180cd1208) {
    *param_2 = DAT_180cd1208;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = *(undefined8 **)(DAT_180cd1218 + (DAT_180cd1230 & param_4) * 0x10);
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



/* ===== 1800ee950 FUN_1800ee950 ===== */

void FUN_1800ee950(void)

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
  
  uVar2 = DAT_180ca0f50;
  uVar6 = 1;
  if (DAT_180ca0f48 != 0) {
    uVar6 = DAT_180ca0f48;
  }
  for (; (uVar6 == DAT_180ca0f48 || (uVar6 < 8)); uVar6 = uVar6 * 2) {
    if (0xf83e0f83e0f83e - uVar6 < uVar6) {
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
  uVar6 = uVar6 - DAT_180ca0f48;
  lVar9 = (DAT_180ca0f48 - uVar2) * 8;
  FUN_180540530(lVar5 + lVar3,DAT_180ca0f40 + lVar5,lVar9);
  lVar9 = lVar9 + lVar5 + lVar3;
  if (uVar6 < uVar2) {
    lVar5 = uVar6 * 8;
    FUN_180540530(lVar9,DAT_180ca0f40,lVar5);
    lVar9 = (uVar2 - uVar6) * 8;
    FUN_180540530(lVar3,DAT_180ca0f40 + lVar5,lVar9);
    lVar9 = lVar3 + lVar9;
  }
  else {
    FUN_180540530(lVar9,DAT_180ca0f40,lVar5);
    FUN_180540170(lVar9 + lVar5,0,(uVar6 - uVar2) * 8);
    lVar9 = lVar3;
  }
  FUN_180540170(lVar9,0,lVar5);
  puVar7 = auStack_38;
  puVar8 = auStack_38;
  if (DAT_180ca0f40 == 0) goto LAB_1800eeaf8;
  lVar5 = DAT_180ca0f40;
  if (DAT_180ca0f48 * 8 < 0x1000) {
LAB_1800eeaed:
    puVar8 = puVar7;
  }
  else {
    lVar5 = *(longlong *)(DAT_180ca0f40 + -8);
    if (0x1f < (DAT_180ca0f40 - lVar5) - 8U) {
      lVar5 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar7 = auStack_30;
      goto LAB_1800eeaed;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x1800eeaf8;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800eeaf8:
  DAT_180ca0f48 = DAT_180ca0f48 + uVar6;
  DAT_180ca0f40 = lVar3;
  return;
}



/* ===== 1800eeb20 FUN_1800eeb20 ===== */

void FUN_1800eeb20(undefined8 param_1,ulonglong param_2)

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
  
  plVar7 = DAT_180cd1208;
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
  FUN_180029d30(&DAT_180cd1218,2L << (bVar12 & 0x3f),DAT_180cd1208);
  DAT_180cd1230 = lVar14 - 1;
  DAT_180cd1238 = lVar14;
  plVar6 = (longlong *)*DAT_180cd1208;
  lVar14 = DAT_180cd1218;
joined_r0x0001800eeba1:
  do {
    while( true ) {
      if (plVar6 == plVar7) {
        DAT_180cd1218 = lVar14;
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
      uVar17 = uVar17 & DAT_180cd1230;
      plVar11 = *(longlong **)(lVar14 + uVar17 * 0x10);
      DAT_180cd1218 = lVar14;
      if (plVar11 != plVar7) break;
      *(longlong **)(lVar14 + uVar17 * 0x10) = plVar6;
      *(longlong **)(lVar14 + 8 + uVar17 * 0x10) = plVar6;
      plVar6 = plVar2;
      lVar14 = DAT_180cd1218;
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
LAB_1800eecaa:
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
              lVar14 = DAT_180cd1218;
              goto joined_r0x0001800eeba1;
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
      lVar14 = DAT_180cd1218;
      goto joined_r0x0001800eeba1;
    }
    if ((uVar9 != 0) && (iVar8 = memcmp(_Buf1,plVar13,uVar9), iVar8 != 0)) {
      plVar11 = *(longlong **)(lVar14 + uVar17 * 0x10);
      uVar16 = plVar6[5];
      goto LAB_1800eecaa;
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
    lVar14 = DAT_180cd1218;
  } while( true );
}



/* ===== 1800eed90 FUN_1800eed90 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800eed90(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auStack_11a8 [32];
  undefined1 local_1188 [4];
  int aiStack_1184 [2];
  undefined8 uStack_117c;
  undefined8 auStack_1174 [8];
  undefined8 uStack_1134;
  undefined8 uStack_112c;
  undefined8 uStack_1124;
  undefined8 uStack_111c;
  undefined1 auStack_1114 [12];
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined4 uStack_10f8;
  undefined1 auStack_10f4 [3332];
  undefined4 local_3f0;
  int local_48 [6];
  ulonglong local_30;
  undefined8 uStack_28;
  
  uStack_28 = 0x1800eeda7;
  local_30 = DAT_180919500 ^ (ulonglong)auStack_11a8;
  FUN_180540170(local_1188,0,0x1138);
  uVar17 = 0;
  do {
    lVar16 = uVar17 * 0x98;
    uVar18 = uVar17 + 1;
    local_1188[lVar16] = 0;
    (aiStack_1184 + uVar17 * 0x26)[0] = 0;
    (aiStack_1184 + uVar17 * 0x26)[1] = 0;
    (aiStack_1184 + uVar17 * 0x26 + 2)[0] = 0;
    (aiStack_1184 + uVar17 * 0x26 + 2)[1] = 0;
    auStack_1174[uVar17 * 0x13] = 0;
    auStack_1174[uVar17 * 0x13 + 1] = 0;
    auStack_1174[uVar17 * 0x13 + 2] = 0;
    auStack_1174[uVar17 * 0x13 + 3] = 0;
    auStack_1174[uVar17 * 0x13 + 4] = 0;
    auStack_1174[uVar17 * 0x13 + 5] = 0;
    auStack_1174[uVar17 * 0x13 + 6] = 0;
    auStack_1174[uVar17 * 0x13 + 7] = 0;
    auStack_1174[uVar17 * 0x13 + 8] = 0;
    *(undefined8 *)(auStack_1114 + (uVar17 * 0x4c + -0xc) * 2) = 0;
    *(undefined8 *)(auStack_1114 + (uVar17 * 0x4c + -8) * 2) = 0;
    *(undefined8 *)(auStack_1114 + (uVar17 * 0x4c + -4) * 2) = 0;
    *(undefined2 *)(auStack_1114 + uVar17 * 0x98) = 1;
    *(undefined8 *)(auStack_1114 + (uVar17 * 0x4c + 2) * 2) = 0;
    *(undefined4 *)(&uStack_1108 + uVar17 * 0x13) = 0;
    *(undefined4 *)((longlong)&uStack_1108 + (uVar17 * 0x26 + 1) * 4) = 0x3f48c8c9;
    (&uStack_1108)[uVar17 * 0x13 + 1] = 1;
    *(undefined4 *)(auStack_10f4 + lVar16 + -4) = 0;
    auStack_10f4[lVar16] = 0;
    uVar17 = uVar18;
  } while (uVar18 < 0x1d);
  local_48[4] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  uVar17 = 0;
  do {
    lVar19 = uVar17 * 0x98;
    lVar16 = uVar17 * 0x118;
    iVar15 = (&DAT_1805e7ef0)[uVar17 * 0x46];
    uVar11 = *(undefined8 *)(&UNK_1805e7f9c + lVar16);
    iVar1 = (&DAT_1805e7eec)[uVar17 * 0x46];
    uVar12 = *(undefined8 *)(&DAT_1805e7fa4 + lVar16);
    uVar13 = *(undefined8 *)(&UNK_1805e7fac + lVar16);
    iVar2 = local_48[iVar15];
    auStack_1174[uVar17 * 0x13] = *(undefined8 *)(&DAT_1805e7f94 + lVar16);
    auStack_1174[uVar17 * 0x13 + 1] = uVar11;
    aiStack_1184[uVar17 * 0x26] = iVar15;
    uVar11 = *(undefined8 *)(&DAT_1805e7fb4 + lVar16);
    uVar14 = *(undefined8 *)(&UNK_1805e7fbc + lVar16);
    aiStack_1184[uVar17 * 0x26 + 1] = iVar2;
    auStack_1174[uVar17 * 0x13 + 2] = uVar12;
    auStack_1174[uVar17 * 0x13 + 3] = uVar13;
    local_48[iVar15] = iVar2 + 1;
    uVar12 = *(undefined8 *)(&DAT_1805e7fc4 + lVar16);
    uVar13 = *(undefined8 *)(&UNK_1805e7fcc + lVar16);
    iVar15 = 0;
    if (iVar1 == 0) {
      iVar15 = 2;
    }
    uVar18 = uVar17 + 1;
    aiStack_1184[uVar17 * 0x26 + 2] = iVar15;
    *(undefined4 *)((longlong)auStack_1174 + lVar19 + -4) = (&DAT_1805e7f90)[uVar17 * 0x46];
    *(undefined4 *)((longlong)&uStack_1108 + (uVar17 * 0x26 + 3) * 4) =
         (&DAT_1805e7f08)[uVar17 * 0x46];
    *(undefined4 *)(auStack_10f4 + lVar19 + -4) = (&DAT_1805e7f0c)[uVar17 * 0x46];
    auStack_1174[uVar17 * 0x13 + 4] = uVar11;
    auStack_1174[uVar17 * 0x13 + 5] = uVar14;
    uVar3 = *(undefined4 *)(&DAT_1805e7fd4 + lVar16);
    uVar4 = *(undefined4 *)(&UNK_1805e7fd8 + lVar16);
    uVar5 = *(undefined4 *)(&UNK_1805e7fdc + lVar16);
    uVar6 = *(undefined4 *)(&UNK_1805e7fe0 + lVar16);
    auStack_1174[uVar17 * 0x13 + 6] = uVar12;
    auStack_1174[uVar17 * 0x13 + 7] = uVar13;
    uVar7 = *(undefined4 *)(&DAT_1805e7fe4 + lVar16);
    uVar8 = *(undefined4 *)(&UNK_1805e7fe8 + lVar16);
    uVar9 = *(undefined4 *)(&UNK_1805e7fec + lVar16);
    uVar10 = *(undefined4 *)(&UNK_1805e7ff0 + lVar16);
    *(undefined4 *)(auStack_1174 + uVar17 * 0x13 + 8) = uVar3;
    *(undefined4 *)((longlong)auStack_1174 + lVar19 + 0x44) = uVar4;
    *(undefined4 *)(auStack_1114 + (uVar17 * 0x4c + -0xc) * 2) = uVar5;
    *(undefined4 *)(auStack_1114 + (uVar17 * 0x4c + -10) * 2) = uVar6;
    *(undefined4 *)(auStack_1114 + (uVar17 * 0x4c + -8) * 2) = uVar7;
    *(undefined4 *)(auStack_1114 + (uVar17 * 0x4c + -6) * 2) = uVar8;
    *(undefined4 *)(auStack_1114 + (uVar17 * 0x4c + -4) * 2) = uVar9;
    *(undefined4 *)(auStack_1114 + (uVar17 * 0x4c + -2) * 2) = uVar10;
    uVar17 = uVar18;
  } while (uVar18 < 0x1d);
  local_3f0 = 0;
  FUN_180540530(param_1,local_1188,0x1138);
  return param_1;
}



/* ===== 1800eef70 FUN_1800eef70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1800eef70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char *_Str;
  undefined1 auStack_98 [32];
  char *local_78;
  size_t sStack_70;
  undefined8 *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_98;
  local_78 = (char *)*param_4;
  sStack_70 = param_4[1];
  local_58 = param_1;
  FUN_18004d9c0(*(undefined4 *)param_4,&local_78,param_2);
  *param_1 = std::filesystem::filesystem_error::vftable;
  FUN_180024980(param_1 + 5,param_3);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 7;
  *(undefined2 *)(param_1 + 9) = 0;
  uStack_40 = 0;
  local_38 = _DAT_1808ad3e0;
  uStack_30 = _UNK_1808ad3e8;
  local_48 = 0;
  _Str = "Unknown exception";
  if ((char *)param_1[1] != (char *)0x0) {
    _Str = (char *)param_1[1];
  }
  sStack_70 = strlen(_Str);
  local_78 = _Str;
  FUN_1800ef060(param_1 + 0xd,&local_78,param_3,&local_48);
  FUN_1800289e0(&local_48);
  return param_1;
}



/* ===== 1800ef060 FUN_1800ef060 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1800ef060(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 ****ppppuVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 ****local_70 [2];
  longlong local_60;
  ulonglong local_58;
  undefined8 ****local_50 [2];
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_98 = 1;
  local_78 = param_1;
  uVar2 = FUN_1804e5000();
  if ((ulonglong)param_3[3] < 8) {
    local_88 = param_3;
  }
  else {
    local_88 = (undefined8 *)*param_3;
  }
  local_80 = param_3[2];
  FUN_1800fee10(local_50,uVar2,&local_88);
  if ((ulonglong)param_4[3] < 8) {
    local_88 = param_4;
  }
  else {
    local_88 = (undefined8 *)*param_4;
  }
  local_80 = param_4[2];
  FUN_1800fee10(local_70,uVar2,&local_88);
  lVar1 = param_2[1];
  lVar3 = 8;
  if (local_60 == 0) {
    lVar3 = 4;
  }
  FUN_180067510(param_1,lVar3 + lVar1 + local_40 + local_60);
  FUN_1800134a0(param_1,*param_2,lVar1);
  FUN_1800134a0(param_1,&DAT_1806f296c,3);
  ppppuVar4 = local_50;
  if (0xf < local_38) {
    ppppuVar4 = local_50[0];
  }
  FUN_1800134a0(param_1,ppppuVar4,local_40);
  if (local_60 != 0) {
    FUN_1800134a0(param_1,&DAT_1806f2970,4);
    ppppuVar4 = local_70;
    if (0xf < local_58) {
      ppppuVar4 = local_70[0];
    }
    FUN_1800134a0(param_1,ppppuVar4,local_60);
  }
  FUN_1800690a0(param_1,0x22);
  FUN_18000f890(local_70);
  FUN_18000f890(local_50);
  return param_1;
}



/* ===== 1800ef200 FUN_1800ef200 ===== */

void FUN_1800ef200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [32];
  undefined1 local_a8 [160];
  
  puVar3 = (undefined8 *)FUN_180013c90(local_d8);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  FUN_180013350(local_c8,"directory_entry::status");
  local_e8 = uVar1;
  uStack_e0 = uVar2;
  FUN_1800eef70(local_a8,local_c8,param_3,&local_e8);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_a8,&DAT_180915e80);
}



/* ===== 1800ef270 FUN_1800ef270 ===== */

uint FUN_1800ef270(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint local_18 [4];
  
  if (0 < (int)param_2) {
    local_18[1] = 0x40;
    local_18[0] = 1;
    puVar5 = local_18;
    if (0 < (int)*param_1) {
      puVar5 = param_1;
    }
    puVar3 = local_18 + 1;
    if ((int)*param_1 < 0x41) {
      puVar3 = puVar5;
    }
    uVar1 = *puVar3;
    while (uVar1 = uVar1 - 1, 0 < (int)uVar1) {
      local_18[3] = 0x40;
      local_18[2] = 0;
      uVar2 = param_1[(ulonglong)uVar1 * 0x52 + 0x51];
      puVar5 = local_18 + 2;
      if (-1 < (int)uVar2) {
        puVar5 = param_1 + (ulonglong)uVar1 * 0x52 + 0x51;
      }
      puVar3 = local_18 + 3;
      if ((int)uVar2 < 0x41) {
        puVar3 = puVar5;
      }
      uVar4 = 0;
      if (0 < (int)*puVar3) {
        do {
          if (param_1[(ulonglong)uVar1 * 0x52 + uVar4 + 0x11] == param_2) {
            return uVar1;
          }
          uVar2 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar2;
        } while ((int)uVar2 < (int)*puVar3);
      }
    }
  }
  return 0;
}



/* ===== 1800ef330 FUN_1800ef330 ===== */

char * FUN_1800ef330(char *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  int local_18 [4];
  
  uVar1 = s_Global_1806f2a74._0_4_;
  if (0 < param_3) {
    local_18[1] = 0x40;
    local_18[0] = 1;
    piVar4 = local_18;
    if (0 < *param_2) {
      piVar4 = param_2;
    }
    piVar2 = local_18 + 1;
    if (*param_2 < 0x41) {
      piVar2 = piVar4;
    }
    if (param_3 < *piVar2) {
      if ((char)param_2[(longlong)param_3 * 0x52 + 1] == '\0') {
        param_1[0] = '\0';
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        param_1[4] = '\0';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        param_1[0x10] = '\x06';
        param_1[0x11] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
        param_1[0x14] = '\0';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        param_1[0x18] = '\x0f';
        param_1[0x19] = '\0';
        param_1[0x1a] = '\0';
        param_1[0x1b] = '\0';
        param_1[0x1c] = '\0';
        param_1[0x1d] = '\0';
        param_1[0x1e] = '\0';
        param_1[0x1f] = '\0';
        *(undefined4 *)param_1 = uVar1;
        *(undefined2 *)(param_1 + 4) = s_Global_1806f2a74._4_2_;
        param_1[6] = '\0';
        return param_1;
      }
      uVar3 = FUN_180512ae0(param_2 + (longlong)param_3 * 0x52 + 1,0x40);
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
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
      FUN_1800133a0(param_1,param_2 + (longlong)param_3 * 0x52 + 1,uVar3);
      return param_1;
    }
  }
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\x06';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\x0f';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  *(undefined4 *)param_1 = uVar1;
  *(undefined2 *)(param_1 + 4) = s_Global_1806f2a74._4_2_;
  param_1[6] = '\0';
  return param_1;
}



/* ===== 1800ef450 FUN_1800ef450 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1800ef450(char *param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  char *local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (param_2 < 1) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\x06';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\x0f';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    *(undefined4 *)param_1 = s_global_1806f2a8c._0_4_;
    *(undefined2 *)(param_1 + 4) = s_global_1806f2a8c._4_2_;
    param_1[6] = '\0';
  }
  else {
    local_40 = param_1;
    uVar1 = FUN_18003a390(local_38);
    local_48 = 1;
    FUN_180066ab0(param_1,&DAT_1806e0b7c,uVar1);
    FUN_18000f890(local_38);
  }
  return param_1;
}



/* ===== 1800ef510 FUN_1800ef510 ===== */

int FUN_1800ef510(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  size_t _Size;
  
  uVar3 = param_1[2];
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18002a1a0();
  }
  uVar4 = param_1[3];
  _Size = 7;
  if (uVar3 - param_2 < 7) {
    _Size = uVar3 - param_2;
  }
  puVar6 = param_1;
  if (0xf < uVar4) {
    puVar6 = (undefined8 *)*param_1;
  }
  iVar5 = memcmp((void *)((longlong)puVar6 + param_2),"global.",_Size);
  if ((iVar5 != 0) || (iVar5 = 0, _Size < 7)) {
    if (param_2 < uVar3) {
      puVar6 = param_1;
      if (0xf < uVar4) {
        puVar6 = (undefined8 *)*param_1;
      }
      if ((*(char *)((longlong)puVar6 + param_2) == 'g') && (uVar1 = param_2 + 1, uVar1 < uVar3)) {
        iVar5 = 0;
        uVar7 = uVar1;
        while( true ) {
          puVar6 = param_1;
          if (0xf < uVar4) {
            puVar6 = (undefined8 *)*param_1;
          }
          if (*(char *)((longlong)puVar6 + uVar7) < '0') break;
          puVar6 = param_1;
          if (0xf < uVar4) {
            puVar6 = (undefined8 *)*param_1;
          }
          if (('9' < *(char *)((longlong)puVar6 + uVar7)) || (4 < uVar7 - param_2)) break;
          puVar6 = param_1;
          if (0xf < uVar4) {
            puVar6 = (undefined8 *)*param_1;
          }
          pcVar2 = (char *)((longlong)puVar6 + uVar7);
          uVar7 = uVar7 + 1;
          iVar5 = (int)*pcVar2 + (iVar5 * 5 + -0x18) * 2;
          if (uVar3 <= uVar7) break;
        }
        if ((uVar7 != uVar1) && (uVar7 < uVar3)) {
          if (0xf < uVar4) {
            param_1 = (undefined8 *)*param_1;
          }
          if (*(char *)((longlong)param_1 + uVar7) == '.') {
            if (iVar5 - 1U < 0x3f) {
              return iVar5;
            }
            return -1;
          }
        }
      }
    }
    iVar5 = -1;
  }
  return iVar5;
}



/* ===== 1800ef660 FUN_1800ef660 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ef660(undefined8 param_1,int param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  local_c0 = param_1;
  if (param_2 < 1) {
    uStack_90 = 0;
    local_88 = 6;
    local_80 = 0xf;
    local_98 = (ulonglong)CONCAT24(s_global_1806f2a8c._4_2_,s_global_1806f2a8c._0_4_);
  }
  else {
    uVar5 = FUN_18003a390(&local_78);
    local_c8 = 2;
    FUN_180066ab0(&local_98,&DAT_1806e0b7c,uVar5);
    FUN_18000f890(&local_78);
  }
  local_78 = (char *)0x0;
  uStack_70 = 0;
  local_78 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_ragebot_selection__1806eabb8._12_4_;
  uVar3 = s_ragebot_selection__1806eabb8._8_4_;
  uVar2 = s_ragebot_selection__1806eabb8._4_4_;
  local_68 = 0x12;
  local_60 = 0x1f;
  *(undefined4 *)local_78 = s_ragebot_selection__1806eabb8._0_4_;
  *(undefined4 *)(local_78 + 4) = uVar2;
  *(undefined4 *)(local_78 + 8) = uVar3;
  *(undefined4 *)(local_78 + 0xc) = uVar4;
  *(undefined2 *)(local_78 + 0x10) = s_ragebot_selection__1806eabb8._16_2_;
  local_78[0x12] = '\0';
  uVar5 = FUN_180066820(local_58,&local_78,&local_98);
  puVar6 = (ulonglong *)FUN_1800134a0(uVar5,&DAT_1806e6f24,1);
  local_b8 = *puVar6;
  uStack_b0 = puVar6[1];
  local_a8 = puVar6[2];
  uStack_a0 = puVar6[3];
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  *(undefined1 *)puVar6 = 0;
  FUN_180042850(param_1,&local_b8,param_3);
  if (0xf < uStack_a0) {
    uVar8 = uStack_a0 + 1;
    uVar9 = local_b8;
    if (uVar8 < 0x1000) {
LAB_1800ef7da:
      thunk_FUN_1803d64e0(uVar9,uVar8);
      goto LAB_1800ef7df;
    }
    uVar9 = *(ulonglong *)(local_b8 - 8);
    if ((local_b8 - uVar9) - 8 < 0x20) {
      uVar8 = uStack_a0 + 0x28;
      goto LAB_1800ef7da;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1800ef88c:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1800ef893:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
LAB_1800ef7df:
  local_a8 = 0;
  uStack_a0 = 0xf;
  local_b8 = local_b8 & 0xffffffffffffff00;
  FUN_18000f890(local_58);
  if (0xf < local_60) {
    uVar9 = local_60 + 1;
    pcVar7 = local_78;
    if (0xfff < uVar9) {
      pcVar7 = *(char **)(local_78 + -8);
      if ((char *)0x1f < local_78 + (-8 - (longlong)pcVar7)) goto LAB_1800ef88c;
      uVar9 = local_60 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar9);
  }
  if (0xf < local_80) {
    uVar8 = local_80 + 1;
    uVar9 = local_98;
    if (0xfff < uVar8) {
      uVar9 = *(ulonglong *)(local_98 - 8);
      if (0x1f < (local_98 - uVar9) - 8) goto LAB_1800ef893;
      uVar8 = local_80 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar9,uVar8);
  }
  return param_1;
}



/* ===== 1800ef8a0 FUN_1800ef8a0 ===== */

longlong FUN_1800ef8a0(longlong param_1,longlong param_2)

{
  return param_1 + param_2 * 4;
}



/* ===== 1800ef8b0 FUN_1800ef8b0 ===== */

void FUN_1800ef8b0(int param_1,longlong param_2,int param_3,longlong param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar18 = (longlong)param_5;
  lVar17 = (longlong)param_3;
  if (param_1 == 0) {
    puVar1 = (undefined8 *)(param_4 + 0x422b4 + lVar18 * 0x24);
    uVar4 = puVar1[1];
    uVar3 = *(undefined4 *)(param_4 + 0x422d4 + lVar18 * 0x24);
    puVar2 = (undefined8 *)(param_4 + 0x422c4 + lVar18 * 0x24);
    uVar5 = *puVar2;
    uVar6 = puVar2[1];
    puVar2 = (undefined8 *)(param_2 + 0x422b4 + lVar17 * 0x24);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)(param_2 + 0x422c4 + lVar17 * 0x24);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    *(undefined4 *)(param_2 + 0x422d4 + lVar17 * 0x24) = uVar3;
    return;
  }
  lVar15 = lVar18 * 100;
  lVar16 = lVar17 * 100;
  puVar1 = (undefined8 *)(lVar15 + 0x3a7d8 + param_4);
  uVar4 = puVar1[1];
  puVar2 = (undefined8 *)(lVar15 + 0x3a7e8 + param_4);
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  puVar2 = (undefined8 *)(lVar15 + 0x3a7f8 + param_4);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar3 = *(undefined4 *)(lVar15 + 0x3a838 + param_4);
  puVar2 = (undefined8 *)(lVar15 + 0x3a808 + param_4);
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  puVar2 = (undefined8 *)(lVar15 + 0x3a818 + param_4);
  uVar11 = *puVar2;
  uVar12 = puVar2[1];
  puVar2 = (undefined8 *)(lVar15 + 0x3a828 + param_4);
  uVar13 = *puVar2;
  uVar14 = puVar2[1];
  puVar2 = (undefined8 *)(lVar16 + 0x3a7d8 + param_2);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar1 = (undefined8 *)(lVar16 + 0x3a7e8 + param_2);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar16 + 0x3a7f8 + param_2);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(lVar16 + 0x3a808 + param_2);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)(lVar16 + 0x3a818 + param_2);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1 = (undefined8 *)(lVar16 + 0x3a828 + param_2);
  *puVar1 = uVar13;
  puVar1[1] = uVar14;
  *(undefined4 *)(lVar16 + 0x3a838 + param_2) = uVar3;
  lVar18 = lVar18 * 0x3c;
  lVar17 = lVar17 * 0x3c;
  puVar1 = (undefined8 *)(lVar18 + 0x3c0f8 + param_4);
  uVar4 = *puVar1;
  puVar2 = (undefined8 *)(lVar18 + 0x3c104 + param_4);
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  puVar2 = (undefined8 *)(lVar18 + 0x3c0e8 + param_4);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uStack_20 = (undefined4)puVar1[1];
  puVar1 = (undefined8 *)(lVar18 + 0x3c0d8 + param_4);
  uVar9 = puVar1[1];
  uStack_1c = (undefined4)uVar5;
  puVar2 = (undefined8 *)(lVar17 + 0x3c0d8 + param_2);
  *puVar2 = *puVar1;
  puVar2[1] = uVar9;
  puVar1 = (undefined8 *)(lVar17 + 0x3c0e8 + param_2);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(lVar17 + 0x3c0f8 + param_2);
  *puVar1 = uVar4;
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  puVar1 = (undefined8 *)(lVar17 + 0x3c104 + param_2);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  return;
}



/* ===== 1800ef9f0 FUN_1800ef9f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ef9f0(int param_1,longlong param_2,int param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint local_78;
  undefined2 uStack_67;
  undefined1 uStack_65;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  uint uStack_4c;
  undefined2 local_3e;
  uint uStack_34;
  uint uStack_20;
  
  uVar4 = _UNK_1808ad828;
  uVar3 = _DAT_1808ad820;
  if (param_1 == 0) {
    lVar5 = (longlong)param_3;
    *(undefined4 *)(param_2 + 0x422b4 + lVar5 * 0x24) = 0x1010101;
    *(undefined4 *)(param_2 + 0x422b8 + lVar5 * 0x24) = 0x101;
    *(undefined4 *)(param_2 + 0x422bc + lVar5 * 0x24) = 0x32;
    *(undefined4 *)(param_2 + 0x422c0 + lVar5 * 0x24) = 0x41;
    *(undefined1 *)(param_2 + 0x422c4 + lVar5 * 0x24) = 0;
    *(undefined2 *)(param_2 + 0x422c5 + lVar5 * 0x24) = uStack_67;
    *(undefined1 *)(param_2 + 0x422c7 + lVar5 * 0x24) = uStack_65;
    *(undefined4 *)(param_2 + 0x422c8 + lVar5 * 0x24) = 5;
    *(undefined4 *)(param_2 + 0x422cc + lVar5 * 0x24) = 10;
    *(undefined1 *)(param_2 + 0x422d0 + lVar5 * 0x24) = 0;
    *(undefined4 *)(param_2 + 0x422d1 + lVar5 * 0x24) = 0;
    *(ushort *)(param_2 + 0x422d5 + lVar5 * 0x24) = CONCAT11(uStack_56,uStack_57);
    *(undefined1 *)(param_2 + 0x422d7 + lVar5 * 0x24) = uStack_55;
    return;
  }
  lVar5 = (longlong)param_3 * 100;
  lVar6 = (longlong)param_3 * 0x3c;
  local_78 = local_78 & 0xffffff00;
  puVar1 = (ulonglong *)(lVar5 + 0x3a7d8 + param_2);
  *puVar1 = (ulonglong)local_78;
  puVar1[1] = 0x1010100;
  puVar2 = (undefined8 *)(lVar5 + 0x3a7e8 + param_2);
  *puVar2 = 0x3200000004;
  puVar2[1] = 0x100000032;
  uStack_4c = uStack_4c & 0xffffff00;
  puVar2 = (undefined8 *)(lVar5 + 0x3a7f8 + param_2);
  *puVar2 = CONCAT44(0x41a00000,CONCAT13(uStack_55,CONCAT12(uStack_56,0x100)));
  puVar2[1] = CONCAT44(uStack_4c,0xf);
  puVar2 = (undefined8 *)(lVar5 + 0x3a808 + param_2);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  uStack_34 = uStack_34 & 0xffffff00;
  puVar2 = (undefined8 *)(lVar5 + 0x3a818 + param_2);
  *puVar2 = CONCAT44(uStack_34,1);
  puVar2[1] = 0x3200000001;
  uStack_20 = uStack_20 & 0xffffff00;
  puVar2 = (undefined8 *)(lVar5 + 0x3a828 + param_2);
  *puVar2 = 0xffffffff00000032;
  puVar2[1] = (ulonglong)uStack_20;
  *(undefined4 *)(lVar5 + 0x3a838 + param_2) = 0;
  *(undefined4 *)(lVar6 + 0x3c0d8 + param_2) = 0x1010000;
  *(undefined4 *)(lVar6 + 0x3c0dc + param_2) = 1;
  *(undefined4 *)(lVar6 + 0x3c0e0 + param_2) = 4;
  *(undefined4 *)(lVar6 + 0x3c0e4 + param_2) = 0x32;
  *(undefined4 *)(lVar6 + 0x3c0e8 + param_2) = 0x32;
  *(undefined4 *)(lVar6 + 0x3c0ec + param_2) = 0x10101;
  *(undefined2 *)(lVar6 + 0x3c0f0 + param_2) = 0;
  *(undefined2 *)(lVar6 + 0x3c0f2 + param_2) = 0;
  *(undefined4 *)(lVar6 + 0x3c0f4 + param_2) = 0x32;
  *(undefined1 *)(lVar6 + 0x3c0f8 + param_2) = 0;
  *(ushort *)(lVar6 + 0x3c0f9 + param_2) = CONCAT11(uStack_56,1);
  *(undefined1 *)(lVar6 + 0x3c0fb + param_2) = uStack_55;
  *(undefined8 *)(lVar6 + 0x3c0fc + param_2) = 0x14;
  *(undefined8 *)(lVar6 + 0x3c104 + param_2) = 200;
  *(undefined4 *)(lVar6 + 0x3c10c + param_2) = 0x32;
  *(undefined2 *)(lVar6 + 0x3c110 + param_2) = 0;
  *(undefined2 *)(lVar6 + 0x3c112 + param_2) = local_3e;
  return;
}



/* ===== 1800efc50 FUN_1800efc50 ===== */

int FUN_1800efc50(longlong param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  int *piVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined **ppuVar20;
  longlong lVar21;
  int *piVar22;
  longlong lVar23;
  undefined8 *puVar24;
  int iVar25;
  int *piVar26;
  int local_168 [4];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [256];
  undefined8 local_18;
  
  local_168[1] = 0x40;
  local_168[0] = 1;
  lVar21 = 0x3d0b0;
  if (param_2 != 0) {
    lVar21 = 0x355d4;
  }
  piVar22 = (int *)(lVar21 + param_1);
  piVar26 = local_168;
  if (0 < *piVar22) {
    piVar26 = piVar22;
  }
  piVar17 = local_168 + 1;
  if (*piVar22 < 0x41) {
    piVar17 = piVar26;
  }
  iVar16 = *piVar17;
  lVar21 = (longlong)iVar16;
  if (iVar16 < 0x40) {
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    lVar23 = 0x3d0b4;
    if (param_2 != 0) {
      lVar23 = 0x355d8;
    }
    puVar24 = (undefined8 *)(lVar23 + param_1 + lVar21 * 0x148);
    local_128 = 0;
    uStack_120 = 0;
    FUN_180540170(local_118,0,0x100);
    local_18 = 0;
    lVar23 = 2;
    puVar14 = &local_158;
    puVar15 = puVar24;
    do {
      puVar19 = puVar15;
      puVar18 = puVar14;
      uVar3 = puVar18[1];
      uVar11 = puVar18[2];
      uVar12 = puVar18[3];
      *puVar19 = *puVar18;
      puVar19[1] = uVar3;
      uVar3 = puVar18[4];
      uVar13 = puVar18[5];
      puVar19[2] = uVar11;
      puVar19[3] = uVar12;
      uVar11 = puVar18[6];
      uVar12 = puVar18[7];
      puVar19[4] = uVar3;
      puVar19[5] = uVar13;
      uVar3 = puVar18[8];
      uVar13 = puVar18[9];
      puVar19[6] = uVar11;
      puVar19[7] = uVar12;
      uVar11 = puVar18[10];
      uVar12 = puVar18[0xb];
      puVar19[8] = uVar3;
      puVar19[9] = uVar13;
      uVar3 = puVar18[0xc];
      uVar13 = puVar18[0xd];
      puVar19[10] = uVar11;
      puVar19[0xb] = uVar12;
      uVar11 = puVar18[0xe];
      uVar12 = puVar18[0xf];
      puVar19[0xc] = uVar3;
      puVar19[0xd] = uVar13;
      puVar19[0xe] = uVar11;
      puVar19[0xf] = uVar12;
      lVar23 = lVar23 + -1;
      puVar14 = puVar18 + 0x10;
      puVar15 = puVar19 + 0x10;
    } while (lVar23 != 0);
    uVar3 = puVar18[0x11];
    uVar11 = puVar18[0x12];
    uVar12 = puVar18[0x13];
    puVar19[0x10] = puVar18[0x10];
    puVar19[0x11] = uVar3;
    uVar2 = *(undefined4 *)(puVar18 + 0x14);
    uVar4 = *(undefined4 *)((longlong)puVar18 + 0xa4);
    uVar5 = *(undefined4 *)(puVar18 + 0x15);
    uVar6 = *(undefined4 *)((longlong)puVar18 + 0xac);
    puVar19[0x12] = uVar11;
    puVar19[0x13] = uVar12;
    uVar7 = *(undefined4 *)(puVar18 + 0x16);
    uVar8 = *(undefined4 *)((longlong)puVar18 + 0xb4);
    uVar9 = *(undefined4 *)(puVar18 + 0x17);
    uVar10 = *(undefined4 *)((longlong)puVar18 + 0xbc);
    uVar3 = puVar18[0x18];
    *(undefined4 *)(puVar19 + 0x14) = uVar2;
    *(undefined4 *)((longlong)puVar19 + 0xa4) = uVar4;
    *(undefined4 *)(puVar19 + 0x15) = uVar5;
    *(undefined4 *)((longlong)puVar19 + 0xac) = uVar6;
    *(undefined4 *)(puVar19 + 0x16) = uVar7;
    *(undefined4 *)((longlong)puVar19 + 0xb4) = uVar8;
    *(undefined4 *)(puVar19 + 0x17) = uVar9;
    *(undefined4 *)((longlong)puVar19 + 0xbc) = uVar10;
    puVar19[0x18] = uVar3;
    if (param_3 == (undefined8 *)0x0) {
      snprintf(puVar24,0x40,&DAT_1806d3198,"Unnamed");
    }
    else {
      snprintf(puVar24,0x40,&DAT_1806d3198,*param_3);
      iVar25 = *(int *)(param_3 + 1);
      if (iVar25 == 0) {
        iVar25 = 0;
        if (0 < *(int *)((longlong)param_3 + 0x14)) {
          do {
            if (1 < iVar25) break;
            iVar1 = piVar22[lVar21 * 0x52 + 0x51];
            lVar23 = (longlong)iVar25;
            iVar25 = iVar25 + 1;
            uVar2 = *(undefined4 *)((longlong)param_3 + lVar23 * 4 + 0xc);
            piVar22[lVar21 * 0x52 + 0x51] = iVar1 + 1;
            *(undefined4 *)((longlong)puVar24 + (longlong)iVar1 * 4 + 0x40) = uVar2;
          } while (iVar25 < *(int *)((longlong)param_3 + 0x14));
        }
      }
      else {
        ppuVar20 = (undefined **)&DAT_1805e7ab0;
        do {
          if (*(int *)((longlong)ppuVar20 + 4) == iVar25) {
            iVar1 = piVar22[lVar21 * 0x52 + 0x51];
            if (iVar1 < 0x40) {
              uVar2 = *(undefined4 *)ppuVar20;
              piVar22[lVar21 * 0x52 + 0x51] = iVar1 + 1;
              *(undefined4 *)((longlong)puVar24 + (longlong)iVar1 * 4 + 0x40) = uVar2;
              iVar25 = *(int *)(param_3 + 1);
            }
          }
          ppuVar20 = ppuVar20 + 2;
        } while (ppuVar20 != &PTR_DAT_1805e7ce0);
      }
    }
  }
  else {
    iVar16 = -1;
  }
  return iVar16;
}



/* ===== 1800efe90 FUN_1800efe90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1800efe90(int param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  uint uVar30;
  int iVar31;
  undefined4 uVar32;
  undefined8 uVar33;
  size_t sVar34;
  undefined8 *puVar35;
  undefined4 *puVar36;
  longlong *plVar37;
  longlong lVar38;
  ulonglong uVar39;
  int *piVar40;
  undefined8 ****ppppuVar41;
  undefined8 ****ppppuVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  char *_Str;
  undefined1 *puVar45;
  char *pcVar46;
  ulonglong uVar47;
  undefined1 *puVar48;
  longlong lVar49;
  undefined8 uStack_300;
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [24];
  undefined4 local_2d8;
  undefined4 local_2c8;
  uint local_2c4;
  ulonglong local_2c0 [5];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  ulonglong uStack_280;
  undefined8 ****local_278;
  undefined8 uStack_270;
  ulonglong local_268;
  ulonglong uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  ulonglong local_240;
  undefined8 ****local_238;
  longlong lStack_230;
  longlong local_228;
  ulonglong uStack_220;
  undefined8 ****local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  ulonglong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
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
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined1 local_e8 [32];
  ulonglong local_c8;
  
  local_c8 = DAT_180919500 ^ (ulonglong)auStack_2f8;
  uVar47 = 0;
  local_2c8 = 0;
  uVar30 = FUN_1800efc50(&DAT_18091a190,param_1,param_2);
  puVar45 = auStack_2f8;
  pcVar46 = (char *)(ulonglong)uVar30;
  if ((int)uVar30 < 0) {
    uVar32 = 0xffffffff;
    goto LAB_1800f0800;
  }
  local_2c4 = uVar30;
  uVar33 = FUN_1804ecaa0(0x46ca4);
  local_2c0[3] = uVar33;
  FUN_180540530(uVar33,&DAT_18091a190,0x46ca4);
  local_2c0[4] = uVar33;
  FUN_1801c65c0(uVar33);
  local_2d8 = 0;
  FUN_1800ef8b0(param_1,&DAT_18091a190,uVar30,uVar33);
  piVar40 = &DAT_180957240;
  if (param_1 != 0) {
    piVar40 = &DAT_18094f764;
  }
  *piVar40 = uVar30 + 1;
  _Str = "legitbot.";
  if (param_1 == 0) {
    _Str = "ragebot.selection.";
  }
  local_218 = (undefined8 ****)0x0;
  uStack_210 = 0;
  local_208 = 0;
  local_200 = 0;
  sVar34 = strlen(_Str);
  FUN_1800133a0(&local_218,_Str,sVar34);
  uStack_250 = 0;
  local_248 = 6;
  local_240 = 0xf;
  local_258 = (ulonglong)CONCAT24(s_global_1806f2a8c._4_2_,s_global_1806f2a8c._0_4_);
  ppppuVar42 = &local_218;
  if (0xf < local_200) {
    ppppuVar42 = local_218;
  }
  puVar35 = (undefined8 *)FUN_18006b5b0(&local_258,0,ppppuVar42,local_208);
  local_238 = (undefined8 ****)*puVar35;
  lStack_230 = puVar35[1];
  local_228 = puVar35[2];
  uStack_220 = puVar35[3];
  puVar35[2] = 0;
  puVar35[3] = 0xf;
  *(undefined1 *)puVar35 = 0;
  puVar36 = (undefined4 *)FUN_1800134a0(&local_238,&DAT_1806e6f24,1);
  local_1f8 = *puVar36;
  uStack_1f4 = puVar36[1];
  uStack_1f0 = puVar36[2];
  uStack_1ec = puVar36[3];
  local_1e8 = puVar36[4];
  uStack_1e4 = puVar36[5];
  uStack_1e0 = puVar36[6];
  uStack_1dc = puVar36[7];
  *(undefined8 *)(puVar36 + 4) = 0;
  *(undefined8 *)(puVar36 + 6) = 0xf;
  *(undefined1 *)puVar36 = 0;
  FUN_18000f890(&local_238);
  FUN_18000f890(&local_258);
  if ((int)uVar30 < 1) {
    uStack_290 = 0;
    local_288 = 6;
    uStack_280 = 0xf;
    local_298 = (ulonglong)CONCAT24(s_global_1806f2a8c._4_2_,s_global_1806f2a8c._0_4_);
  }
  else {
    uVar33 = FUN_18003a390(local_e8,uVar30);
    local_2c8 = 0x1d1;
    FUN_180066ab0(&local_298,&DAT_1806e0b7c,uVar33);
    FUN_18000f890(local_e8);
  }
  ppppuVar42 = &local_218;
  if (0xf < local_200) {
    ppppuVar42 = local_218;
  }
  puVar35 = (undefined8 *)FUN_18006b5b0(&local_298,0,ppppuVar42,local_208);
  local_278 = (undefined8 ****)*puVar35;
  uStack_270 = puVar35[1];
  local_268 = puVar35[2];
  uStack_260 = puVar35[3];
  puVar35[2] = 0;
  puVar35[3] = 0xf;
  *(undefined1 *)puVar35 = 0;
  plVar37 = (longlong *)FUN_1800134a0(&local_278,&DAT_1806e6f24,1);
  local_238 = (undefined8 ****)*plVar37;
  lStack_230 = plVar37[1];
  local_228 = plVar37[2];
  uStack_220 = plVar37[3];
  plVar37[2] = 0;
  plVar37[3] = 0xf;
  *(undefined1 *)plVar37 = 0;
  if (0xf < uStack_260) {
    uVar44 = uStack_260 + 1;
    ppppuVar42 = local_278;
    if (0xfff < uVar44) {
      ppppuVar42 = (undefined8 ****)local_278[-1];
      if (0x1f < (ulonglong)((longlong)local_278 + (-8 - (longlong)ppppuVar42))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar45 = auStack_2f0;
        goto LAB_1800f045f;
      }
      uVar44 = uStack_260 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar42,uVar44);
  }
  puVar45 = auStack_2f8;
  local_268 = 0;
  uStack_260 = 0xf;
  local_278 = (undefined8 ****)((ulonglong)local_278 & 0xffffffffffffff00);
  if (uStack_280 < 0x10) {
LAB_1800f021a:
    puVar45 = auStack_2f8;
    local_2c0[0] = 0;
    local_2c0[1] = 0;
    local_2c0[2] = 0;
    _Str = &DAT_18095d530;
    pcVar46 = &DAT_18095d530;
    do {
      if ((*pcVar46 != '\0') && (0 < *(int *)(pcVar46 + 0x60))) {
        local_278 = (undefined8 ****)0x0;
        uStack_270 = 0;
        local_268 = 0;
        uStack_260 = 0;
        *(undefined8 *)(puVar45 + -8) = 0x1800f026f;
        uVar33 = FUN_180512ae0(pcVar46,0x60);
        *(undefined8 *)(puVar45 + -8) = 0x1800f027e;
        FUN_1800133a0(&local_278,pcVar46,uVar33);
        uVar39 = uStack_260;
        uVar44 = local_268;
        ppppuVar42 = local_278;
        puVar36 = &local_1f8;
        if (0xf < CONCAT44(uStack_1dc,uStack_1e0)) {
          puVar36 = (undefined4 *)CONCAT44(uStack_1f4,local_1f8);
        }
        uVar47 = CONCAT44(uStack_1e4,local_1e8);
        if (local_268 < CONCAT44(uStack_1e4,local_1e8)) {
          uVar47 = local_268;
        }
        ppppuVar41 = &local_278;
        if (0xf < uStack_260) {
          ppppuVar41 = local_278;
        }
        *(undefined8 *)(puVar45 + -8) = 0x1800f02bb;
        iVar31 = memcmp(ppppuVar41,puVar36,uVar47);
        if ((iVar31 == 0) && (uVar43 = CONCAT44(uStack_1e4,local_1e8), uVar43 <= uVar47)) {
          local_258 = 0;
          uStack_250 = 0;
          local_248 = 0;
          local_240 = 0;
          if (uVar44 < uVar43) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar45 + -8) = &UNK_1800f0857;
            FUN_18002a1a0();
          }
          lVar49 = uVar44 - uVar43;
          lVar38 = -1;
          if (lVar49 != -1) {
            lVar38 = lVar49;
          }
          ppppuVar41 = &local_278;
          if (0xf < uVar39) {
            ppppuVar41 = ppppuVar42;
          }
          *(undefined8 *)(puVar45 + -8) = 0x1800f0314;
          FUN_1800133a0(&local_258,(longlong)ppppuVar41 + uVar43,lVar38);
          ppppuVar42 = &local_238;
          if (0xf < uStack_220) {
            ppppuVar42 = local_238;
          }
          *(undefined8 *)(puVar45 + -8) = 0x1800f0336;
          puVar36 = (undefined4 *)FUN_18006b5b0(&local_258,0,ppppuVar42,local_228);
          *(undefined8 *)(puVar45 + 0x60) = 0;
          *(undefined8 *)(puVar45 + 0x68) = 0;
          *(undefined8 *)(puVar45 + 0x70) = 0;
          *(undefined8 *)(puVar45 + 0x78) = 0;
          uVar32 = puVar36[1];
          uVar2 = puVar36[2];
          uVar3 = puVar36[3];
          *(undefined4 *)(puVar45 + 0x60) = *puVar36;
          *(undefined4 *)(puVar45 + 100) = uVar32;
          *(undefined4 *)(puVar45 + 0x68) = uVar2;
          *(undefined4 *)(puVar45 + 0x6c) = uVar3;
          uVar32 = puVar36[5];
          uVar2 = puVar36[6];
          uVar3 = puVar36[7];
          *(undefined4 *)(puVar45 + 0x70) = puVar36[4];
          *(undefined4 *)(puVar45 + 0x74) = uVar32;
          *(undefined4 *)(puVar45 + 0x78) = uVar2;
          *(undefined4 *)(puVar45 + 0x7c) = uVar3;
          *(undefined8 *)(puVar36 + 4) = 0;
          *(undefined8 *)(puVar36 + 6) = 0xf;
          *(undefined1 *)puVar36 = 0;
          if (local_240 < 0x10) {
LAB_1800f03a8:
            local_248 = 0;
            local_240 = 0xf;
            local_258 = local_258 & 0xffffffffffffff00;
            if (*(ulonglong *)(puVar45 + 0x70) < 0x60) {
LAB_1800f045f:
              local_178 = *(undefined8 *)(pcVar46 + 0x60);
              uStack_170 = *(undefined8 *)(pcVar46 + 0x68);
              local_168 = *(undefined8 *)(pcVar46 + 0x70);
              uStack_160 = *(undefined8 *)(pcVar46 + 0x78);
              local_158 = *(undefined8 *)(pcVar46 + 0x80);
              uStack_150 = *(undefined8 *)(pcVar46 + 0x88);
              local_148 = *(undefined8 *)(pcVar46 + 0x90);
              uStack_140 = *(undefined8 *)(pcVar46 + 0x98);
              local_138 = *(undefined8 *)(pcVar46 + 0xa0);
              uStack_130 = *(undefined8 *)(pcVar46 + 0xa8);
              local_128 = *(undefined8 *)(pcVar46 + 0xb0);
              uStack_120 = *(undefined8 *)(pcVar46 + 0xb8);
              local_118 = *(undefined8 *)(pcVar46 + 0xc0);
              uStack_110 = *(undefined8 *)(pcVar46 + 200);
              local_108 = *(undefined4 *)(pcVar46 + 0xd0);
              uStack_104 = *(undefined4 *)(pcVar46 + 0xd4);
              uStack_100 = *(undefined4 *)(pcVar46 + 0xd8);
              uStack_fc = *(undefined4 *)(pcVar46 + 0xdc);
              local_f8 = *(undefined4 *)(pcVar46 + 0xe0);
              local_1d8 = 0;
              uStack_1d0 = 0;
              local_1c8 = 0;
              uStack_1c0 = 0;
              local_1b8 = 0;
              uStack_1b0 = 0;
              local_1a8 = 0;
              uStack_1a0 = 0;
              local_198 = 0;
              uStack_190 = 0;
              local_188 = 0;
              uStack_180 = 0;
              puVar48 = puVar45 + 0x60;
              if (0xf < *(ulonglong *)(puVar45 + 0x78)) {
                puVar48 = *(undefined1 **)(puVar45 + 0x60);
              }
              *(undefined8 *)(puVar45 + -8) = 0x1800f0516;
              snprintf(&local_1d8,0x60,&DAT_1806d3198,puVar48);
              puVar35 = *(undefined8 **)(puVar45 + 0x40);
              if (puVar35 == *(undefined8 **)(puVar45 + 0x48)) {
                *(undefined8 *)(puVar45 + -8) = 0x1800f05e7;
                FUN_1801c1f10(puVar45 + 0x38,puVar35,&local_1d8);
              }
              else {
                *puVar35 = local_1d8;
                puVar35[1] = uStack_1d0;
                puVar35[2] = local_1c8;
                puVar35[3] = uStack_1c0;
                puVar35[4] = local_1b8;
                puVar35[5] = uStack_1b0;
                puVar35[6] = local_1a8;
                puVar35[7] = uStack_1a0;
                puVar35[8] = local_198;
                puVar35[9] = uStack_190;
                puVar35[10] = local_188;
                puVar35[0xb] = uStack_180;
                puVar35[0xc] = local_178;
                puVar35[0xd] = uStack_170;
                puVar35[0xe] = local_168;
                puVar35[0xf] = uStack_160;
                puVar35[0x10] = local_158;
                puVar35[0x11] = uStack_150;
                puVar35[0x12] = local_148;
                puVar35[0x13] = uStack_140;
                puVar35[0x14] = local_138;
                puVar35[0x15] = uStack_130;
                puVar35[0x16] = local_128;
                puVar35[0x17] = uStack_120;
                *(undefined4 *)(puVar35 + 0x18) = (undefined4)local_118;
                *(undefined4 *)((longlong)puVar35 + 0xc4) = local_118._4_4_;
                *(undefined4 *)(puVar35 + 0x19) = (undefined4)uStack_110;
                *(undefined4 *)((longlong)puVar35 + 0xcc) = uStack_110._4_4_;
                puVar35[0x1a] = CONCAT44(uStack_104,local_108);
                puVar35[0x1b] = CONCAT44(uStack_fc,uStack_100);
                *(undefined4 *)(puVar35 + 0x1c) = local_f8;
                *(longlong *)(puVar45 + 0x40) = *(longlong *)(puVar45 + 0x40) + 0xe4;
              }
            }
            uVar47 = 0;
            uVar39 = *(ulonglong *)(puVar45 + 0x78);
            if (0xf < uVar39) {
              uVar44 = uVar39 + 1;
              lVar38 = *(longlong *)(puVar45 + 0x60);
              lVar49 = lVar38;
              if (0xfff < uVar44) {
                lVar49 = *(longlong *)(lVar38 + -8);
                if (0x1f < (lVar38 - lVar49) - 8U) goto LAB_1800f079e;
                uVar44 = uVar39 + 0x28;
              }
              *(undefined8 *)(puVar45 + -8) = 0x1800f0401;
              thunk_FUN_1803d64e0(lVar49,uVar44);
            }
            puVar45[0x60] = 0;
            *(undefined8 *)(puVar45 + 0x78) = 0xf;
            *(undefined8 *)(puVar45 + 0x70) = 0;
            if (0xf < uStack_260) {
              uVar44 = uStack_260 + 1;
              ppppuVar42 = local_278;
              if (0xfff < uVar44) {
                ppppuVar42 = (undefined8 ****)local_278[-1];
                if (0x1f < (ulonglong)((longlong)local_278 + (-8 - (longlong)ppppuVar42)))
                goto LAB_1800f07a5;
                uVar44 = uStack_260 + 0x28;
              }
              *(undefined8 *)(puVar45 + -8) = 0x1800f0453;
              thunk_FUN_1803d64e0(ppppuVar42,uVar44);
            }
            goto LAB_1800f062d;
          }
          uVar44 = local_240 + 1;
          uVar47 = local_258;
          if (uVar44 < 0x1000) {
LAB_1800f03a3:
            *(undefined8 *)(puVar45 + -8) = 0x1800f03a8;
            thunk_FUN_1803d64e0(uVar47,uVar44);
            goto LAB_1800f03a8;
          }
          uVar47 = *(ulonglong *)(local_258 - 8);
          if ((local_258 - uVar47) - 8 < 0x20) {
            uVar44 = local_240 + 0x28;
            goto LAB_1800f03a3;
          }
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar45 = puVar45 + 8;
LAB_1800f079e:
          uVar47 = 0;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar45 = puVar45 + 8;
        }
        else {
          if (uVar39 < 0x10) goto LAB_1800f062d;
          uVar44 = uVar39 + 1;
          ppppuVar41 = ppppuVar42;
          if (uVar44 < 0x1000) {
LAB_1800f061b:
            *(undefined8 *)(puVar45 + -8) = 0x1800f0623;
            thunk_FUN_1803d64e0(ppppuVar41,uVar44);
            goto LAB_1800f062d;
          }
          ppppuVar41 = (undefined8 ****)ppppuVar42[-1];
          if ((ulonglong)((longlong)ppppuVar42 + (-8 - (longlong)ppppuVar41)) < 0x20) {
            uVar44 = uVar39 + 0x28;
            goto LAB_1800f061b;
          }
        }
LAB_1800f07a5:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar45 = puVar45 + 8;
        goto LAB_1800f07ac;
      }
LAB_1800f062d:
      pcVar46 = pcVar46 + 0xe4;
    } while (pcVar46 != &DAT_180960e30);
    uVar47 = 0;
    uVar44 = *(ulonglong *)(puVar45 + 0x38);
    do {
      if ((ulonglong)
          (((longlong)(*(longlong *)(puVar45 + 0x40) - uVar44) >> 2) * -0x7dc11f7047dc11f7) <=
          uVar47) break;
      if (*_Str == '\0') {
        lVar38 = uVar47 * 0xe4;
        puVar35 = (undefined8 *)(lVar38 + 0x10 + uVar44);
        uVar33 = *puVar35;
        uVar5 = puVar35[1];
        puVar35 = (undefined8 *)(lVar38 + 0x20 + uVar44);
        uVar6 = *puVar35;
        uVar7 = puVar35[1];
        puVar35 = (undefined8 *)(lVar38 + 0x30 + uVar44);
        uVar8 = *puVar35;
        uVar9 = puVar35[1];
        puVar35 = (undefined8 *)(lVar38 + 0x40 + uVar44);
        uVar10 = *puVar35;
        uVar11 = puVar35[1];
        puVar35 = (undefined8 *)(lVar38 + 0x50 + uVar44);
        uVar12 = *puVar35;
        uVar13 = puVar35[1];
        puVar35 = (undefined8 *)(lVar38 + 0x60 + uVar44);
        uVar14 = *puVar35;
        uVar15 = puVar35[1];
        puVar35 = (undefined8 *)(lVar38 + 0x70 + uVar44);
        uVar16 = *puVar35;
        uVar17 = puVar35[1];
        puVar35 = (undefined8 *)(lVar38 + 0x80 + uVar44);
        uVar18 = *puVar35;
        uVar19 = puVar35[1];
        puVar35 = (undefined8 *)(lVar38 + 0x90 + uVar44);
        uVar20 = *puVar35;
        uVar21 = puVar35[1];
        puVar35 = (undefined8 *)(lVar38 + 0xa0 + uVar44);
        uVar22 = *puVar35;
        uVar23 = puVar35[1];
        puVar35 = (undefined8 *)(lVar38 + 0xb0 + uVar44);
        uVar24 = *puVar35;
        uVar25 = puVar35[1];
        puVar35 = (undefined8 *)(lVar38 + 0xc0 + uVar44);
        uVar26 = *puVar35;
        uVar27 = puVar35[1];
        puVar35 = (undefined8 *)(lVar38 + 0xd0 + uVar44);
        uVar28 = *puVar35;
        uVar29 = puVar35[1];
        uVar32 = *(undefined4 *)(lVar38 + 0xe0 + uVar44);
        uVar47 = uVar47 + 1;
        puVar36 = (undefined4 *)(lVar38 + uVar44);
        uVar2 = puVar36[1];
        uVar3 = puVar36[2];
        uVar4 = puVar36[3];
        *(undefined4 *)_Str = *puVar36;
        *(undefined4 *)(_Str + 4) = uVar2;
        *(undefined4 *)(_Str + 8) = uVar3;
        *(undefined4 *)(_Str + 0xc) = uVar4;
        *(undefined8 *)(_Str + 0x10) = uVar33;
        *(undefined8 *)(_Str + 0x18) = uVar5;
        *(undefined8 *)(_Str + 0x20) = uVar6;
        *(undefined8 *)(_Str + 0x28) = uVar7;
        *(undefined8 *)(_Str + 0x30) = uVar8;
        *(undefined8 *)(_Str + 0x38) = uVar9;
        *(undefined8 *)(_Str + 0x40) = uVar10;
        *(undefined8 *)(_Str + 0x48) = uVar11;
        *(undefined8 *)(_Str + 0x50) = uVar12;
        *(undefined8 *)(_Str + 0x58) = uVar13;
        *(undefined8 *)(_Str + 0x60) = uVar14;
        *(undefined8 *)(_Str + 0x68) = uVar15;
        *(undefined8 *)(_Str + 0x70) = uVar16;
        *(undefined8 *)(_Str + 0x78) = uVar17;
        *(undefined8 *)(_Str + 0x80) = uVar18;
        *(undefined8 *)(_Str + 0x88) = uVar19;
        *(undefined8 *)(_Str + 0x90) = uVar20;
        *(undefined8 *)(_Str + 0x98) = uVar21;
        *(undefined8 *)(_Str + 0xa0) = uVar22;
        *(undefined8 *)(_Str + 0xa8) = uVar23;
        *(undefined8 *)(_Str + 0xb0) = uVar24;
        *(undefined8 *)(_Str + 0xb8) = uVar25;
        *(undefined8 *)(_Str + 0xc0) = uVar26;
        *(undefined8 *)(_Str + 200) = uVar27;
        *(undefined8 *)(_Str + 0xd0) = uVar28;
        *(undefined8 *)(_Str + 0xd8) = uVar29;
        *(undefined4 *)(_Str + 0xe0) = uVar32;
      }
      _Str = _Str + 0xe4;
    } while (_Str != &DAT_180960e30);
    uVar47 = 0;
    if (uVar44 != 0) {
      uVar43 = ((longlong)(*(longlong *)(puVar45 + 0x48) - uVar44) >> 2) * 4;
      uVar39 = uVar44;
      if (0xfff < uVar43) {
        uVar39 = *(ulonglong *)(uVar44 - 8);
        uVar44 = (uVar44 - uVar39) - 8;
        if (0x1f < uVar44) goto LAB_1800f07ac;
        uVar43 = uVar43 + 0x27;
      }
      goto LAB_1800f07b6;
    }
  }
  else {
    uVar44 = uStack_280 + 1;
    uVar39 = local_298;
    if (uVar44 < 0x1000) {
LAB_1800f0215:
      thunk_FUN_1803d64e0(uVar39,uVar44);
      goto LAB_1800f021a;
    }
    uVar39 = *(ulonglong *)(local_298 - 8);
    if ((local_298 - uVar39) - 8 < 0x20) {
      uVar44 = uStack_280 + 0x28;
      goto LAB_1800f0215;
    }
LAB_1800f07ac:
    uVar43 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar45 = puVar45 + 8;
    uVar39 = uVar44;
LAB_1800f07b6:
    *(undefined8 *)(puVar45 + -8) = 0x1800f07c1;
    thunk_FUN_1803d64e0(uVar39,uVar43);
    *(undefined8 *)(puVar45 + 0x38) = 0;
    *(undefined8 *)(puVar45 + 0x40) = 0;
    *(ulonglong *)(puVar45 + 0x48) = uVar47;
  }
  *(undefined8 *)(puVar45 + -8) = 0x1800f07d8;
  FUN_18000f890(&local_238);
  *(undefined8 *)(puVar45 + -8) = 0x1800f07e2;
  FUN_18000f890(&local_1f8);
  *(undefined8 *)(puVar45 + -8) = 0x1800f07ec;
  FUN_18000f890(&local_218);
  *(undefined8 *)(puVar45 + -8) = 0x1800f07fc;
  thunk_FUN_1803d64e0(*(undefined8 *)(puVar45 + 0x50),0x46ca4);
  uVar32 = *(undefined4 *)(puVar45 + 0x34);
LAB_1800f0800:
  *(undefined8 *)(puVar45 + -8) = 0x1800f080f;
  return uVar32;
}



/* ===== 1800f0860 FUN_1800f0860 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800f0860(int param_1,uint param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  size_t sVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined8 ****_Buf1;
  undefined8 ****ppppuVar14;
  undefined8 *puVar15;
  undefined8 ****ppppuVar16;
  int *piVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  char *pcVar22;
  longlong lVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined *puVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  int iVar32;
  undefined *puVar33;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [24];
  uint local_2a8;
  int local_298;
  int local_294;
  int local_290 [4];
  int *local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_238 [32];
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_198;
  undefined8 local_138;
  undefined8 ****local_128;
  undefined8 uStack_120;
  ulonglong local_118;
  ulonglong local_110;
  undefined8 ****local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  longlong local_c8 [4];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 ****local_88 [3];
  ulonglong local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_2c8;
  uVar31 = (ulonglong)param_2;
  uVar29 = 0;
  local_290[2] = 0;
  iVar7 = DAT_18094f764;
  if (param_1 == 0) {
    iVar7 = DAT_180957240;
  }
  local_280 = &DAT_180957240;
  if (param_1 != 0) {
    local_280 = &DAT_18094f764;
  }
  local_290[1] = 0x40;
  local_290[0] = 1;
  piVar9 = local_290;
  if (0 < iVar7) {
    piVar9 = local_280;
  }
  piVar17 = local_290 + 1;
  if (iVar7 < 0x41) {
    piVar17 = piVar9;
  }
  if ((0 < (int)param_2) && (local_294 = *piVar17, (int)param_2 < local_294)) {
    local_298 = param_1;
    FUN_1801c65c0(&DAT_18091a190);
    FUN_1801c64f0();
    pcVar22 = "legitbot.";
    if (param_1 == 0) {
      pcVar22 = "ragebot.selection.";
    }
    local_108 = (undefined8 ****)0x0;
    uStack_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    sVar10 = strlen(pcVar22);
    FUN_1800133a0(&local_108,pcVar22,sVar10);
    puVar27 = auStack_2c8;
    puVar24 = auStack_2c8;
    puVar25 = auStack_2c8;
    pcVar22 = &DAT_18095d530;
    uVar21 = local_f8;
    do {
      if (*pcVar22 != '\0') {
        uVar11 = FUN_180512ae0(pcVar22,0x60);
        local_128 = (undefined8 ****)0x0;
        uStack_120 = 0;
        local_118 = 0;
        local_110 = 0;
        FUN_1800133a0(&local_128,pcVar22,uVar11);
        uVar20 = local_110;
        ppppuVar16 = local_128;
        ppppuVar14 = &local_108;
        if (0xf < local_f0) {
          ppppuVar14 = local_108;
        }
        uVar18 = uVar21;
        if (local_118 < uVar21) {
          uVar18 = local_118;
        }
        _Buf1 = &local_128;
        if (0xf < local_110) {
          _Buf1 = local_128;
        }
        iVar7 = memcmp(_Buf1,ppppuVar14,uVar18);
        if ((iVar7 == 0) && (uVar21 <= uVar18)) {
          uVar8 = FUN_1800ef510(&local_128,uVar21);
          if ((int)uVar8 < 1) {
LAB_1800f0a31:
            if (0xf < local_110) {
              uVar18 = local_110 + 1;
              ppppuVar14 = local_128;
              if (0xfff < uVar18) {
                ppppuVar14 = (undefined8 ****)local_128[-1];
                puVar26 = auStack_2c8;
                if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)ppppuVar14)))
                goto LAB_1800f1177;
                uVar18 = local_110 + 0x28;
              }
              goto LAB_1800f0a6d;
            }
            goto LAB_1800f0a7b;
          }
          if (uVar8 == param_2) {
            local_218 = 0;
            uStack_210 = CONCAT31(uStack_210._1_3_,1);
            uStack_20c = 0;
            local_198 = CONCAT22(local_198._2_2_,0x100);
            pcVar22[0] = '\0';
            pcVar22[1] = '\0';
            pcVar22[2] = '\0';
            pcVar22[3] = '\0';
            pcVar22[4] = '\0';
            pcVar22[5] = '\0';
            pcVar22[6] = '\0';
            pcVar22[7] = '\0';
            pcVar22[8] = '\0';
            pcVar22[9] = '\0';
            pcVar22[10] = '\0';
            pcVar22[0xb] = '\0';
            pcVar22[0xc] = '\0';
            pcVar22[0xd] = '\0';
            pcVar22[0xe] = '\0';
            pcVar22[0xf] = '\0';
            pcVar22[0x10] = '\0';
            pcVar22[0x11] = '\0';
            pcVar22[0x12] = '\0';
            pcVar22[0x13] = '\0';
            pcVar22[0x14] = '\0';
            pcVar22[0x15] = '\0';
            pcVar22[0x16] = '\0';
            pcVar22[0x17] = '\0';
            pcVar22[0x18] = '\0';
            pcVar22[0x19] = '\0';
            pcVar22[0x1a] = '\0';
            pcVar22[0x1b] = '\0';
            pcVar22[0x1c] = '\0';
            pcVar22[0x1d] = '\0';
            pcVar22[0x1e] = '\0';
            pcVar22[0x1f] = '\0';
            pcVar22[0x20] = '\0';
            pcVar22[0x21] = '\0';
            pcVar22[0x22] = '\0';
            pcVar22[0x23] = '\0';
            pcVar22[0x24] = '\0';
            pcVar22[0x25] = '\0';
            pcVar22[0x26] = '\0';
            pcVar22[0x27] = '\0';
            pcVar22[0x28] = '\0';
            pcVar22[0x29] = '\0';
            pcVar22[0x2a] = '\0';
            pcVar22[0x2b] = '\0';
            pcVar22[0x2c] = '\0';
            pcVar22[0x2d] = '\0';
            pcVar22[0x2e] = '\0';
            pcVar22[0x2f] = '\0';
            pcVar22[0x30] = '\0';
            pcVar22[0x31] = '\0';
            pcVar22[0x32] = '\0';
            pcVar22[0x33] = '\0';
            pcVar22[0x34] = '\0';
            pcVar22[0x35] = '\0';
            pcVar22[0x36] = '\0';
            pcVar22[0x37] = '\0';
            pcVar22[0x38] = '\0';
            pcVar22[0x39] = '\0';
            pcVar22[0x3a] = '\0';
            pcVar22[0x3b] = '\0';
            pcVar22[0x3c] = '\0';
            pcVar22[0x3d] = '\0';
            pcVar22[0x3e] = '\0';
            pcVar22[0x3f] = '\0';
            pcVar22[0x40] = '\0';
            pcVar22[0x41] = '\0';
            pcVar22[0x42] = '\0';
            pcVar22[0x43] = '\0';
            pcVar22[0x44] = '\0';
            pcVar22[0x45] = '\0';
            pcVar22[0x46] = '\0';
            pcVar22[0x47] = '\0';
            pcVar22[0x48] = '\0';
            pcVar22[0x49] = '\0';
            pcVar22[0x4a] = '\0';
            pcVar22[0x4b] = '\0';
            pcVar22[0x4c] = '\0';
            pcVar22[0x4d] = '\0';
            pcVar22[0x4e] = '\0';
            pcVar22[0x4f] = '\0';
            pcVar22[0x50] = '\0';
            pcVar22[0x51] = '\0';
            pcVar22[0x52] = '\0';
            pcVar22[0x53] = '\0';
            pcVar22[0x54] = '\0';
            pcVar22[0x55] = '\0';
            pcVar22[0x56] = '\0';
            pcVar22[0x57] = '\0';
            pcVar22[0x58] = '\0';
            pcVar22[0x59] = '\0';
            pcVar22[0x5a] = '\0';
            pcVar22[0x5b] = '\0';
            pcVar22[0x5c] = '\0';
            pcVar22[0x5d] = '\0';
            pcVar22[0x5e] = '\0';
            pcVar22[0x5f] = '\0';
            pcVar22[0x60] = '\0';
            pcVar22[0x61] = '\0';
            pcVar22[0x62] = '\0';
            pcVar22[99] = '\0';
            pcVar22[100] = '\0';
            pcVar22[0x65] = '\0';
            pcVar22[0x66] = '\0';
            pcVar22[0x67] = '\0';
            *(undefined4 *)(pcVar22 + 0x68) = uStack_210;
            pcVar22[0x6c] = '\0';
            pcVar22[0x6d] = '\0';
            pcVar22[0x6e] = '\0';
            pcVar22[0x6f] = '\0';
            pcVar22[0x70] = '\0';
            pcVar22[0x71] = '\0';
            pcVar22[0x72] = '\0';
            pcVar22[0x73] = '\0';
            pcVar22[0x74] = '\0';
            pcVar22[0x75] = '\0';
            pcVar22[0x76] = '\0';
            pcVar22[0x77] = '\0';
            pcVar22[0x78] = '\0';
            pcVar22[0x79] = '\0';
            pcVar22[0x7a] = '\0';
            pcVar22[0x7b] = '\0';
            pcVar22[0x7c] = '\0';
            pcVar22[0x7d] = '\0';
            pcVar22[0x7e] = '\0';
            pcVar22[0x7f] = '\0';
            pcVar22[0x80] = '\0';
            pcVar22[0x81] = '\0';
            pcVar22[0x82] = '\0';
            pcVar22[0x83] = '\0';
            pcVar22[0x84] = '\0';
            pcVar22[0x85] = '\0';
            pcVar22[0x86] = '\0';
            pcVar22[0x87] = '\0';
            pcVar22[0x88] = '\0';
            pcVar22[0x89] = '\0';
            pcVar22[0x8a] = '\0';
            pcVar22[0x8b] = '\0';
            pcVar22[0x8c] = '\0';
            pcVar22[0x8d] = '\0';
            pcVar22[0x8e] = '\0';
            pcVar22[0x8f] = '\0';
            pcVar22[0x90] = '\0';
            pcVar22[0x91] = '\0';
            pcVar22[0x92] = '\0';
            pcVar22[0x93] = '\0';
            pcVar22[0x94] = '\0';
            pcVar22[0x95] = '\0';
            pcVar22[0x96] = '\0';
            pcVar22[0x97] = '\0';
            pcVar22[0x98] = '\0';
            pcVar22[0x99] = '\0';
            pcVar22[0x9a] = '\0';
            pcVar22[0x9b] = '\0';
            pcVar22[0x9c] = '\0';
            pcVar22[0x9d] = '\0';
            pcVar22[0x9e] = '\0';
            pcVar22[0x9f] = '\0';
            pcVar22[0xa0] = '\0';
            pcVar22[0xa1] = '\0';
            pcVar22[0xa2] = '\0';
            pcVar22[0xa3] = '\0';
            pcVar22[0xa4] = '\0';
            pcVar22[0xa5] = '\0';
            pcVar22[0xa6] = '\0';
            pcVar22[0xa7] = '\0';
            pcVar22[0xa8] = '\0';
            pcVar22[0xa9] = '\0';
            pcVar22[0xaa] = '\0';
            pcVar22[0xab] = '\0';
            pcVar22[0xac] = '\0';
            pcVar22[0xad] = '\0';
            pcVar22[0xae] = '\0';
            pcVar22[0xaf] = '\0';
            pcVar22[0xb0] = '\0';
            pcVar22[0xb1] = '\0';
            pcVar22[0xb2] = '\0';
            pcVar22[0xb3] = '\0';
            pcVar22[0xb4] = '\0';
            pcVar22[0xb5] = '\0';
            pcVar22[0xb6] = '\0';
            pcVar22[0xb7] = '\0';
            pcVar22[0xb8] = '\0';
            pcVar22[0xb9] = '\0';
            pcVar22[0xba] = '\0';
            pcVar22[0xbb] = '\0';
            pcVar22[0xbc] = '\0';
            pcVar22[0xbd] = '\0';
            pcVar22[0xbe] = '\0';
            pcVar22[0xbf] = '\0';
            pcVar22[0xc0] = '\0';
            pcVar22[0xc1] = '\0';
            pcVar22[0xc2] = '\0';
            pcVar22[0xc3] = '\0';
            pcVar22[0xc4] = '\0';
            pcVar22[0xc5] = '\0';
            pcVar22[0xc6] = '\0';
            pcVar22[199] = '\0';
            pcVar22[200] = '\0';
            pcVar22[0xc9] = '\0';
            pcVar22[0xca] = '\0';
            pcVar22[0xcb] = '\0';
            pcVar22[0xcc] = '\0';
            pcVar22[0xcd] = '\0';
            pcVar22[0xce] = '\0';
            pcVar22[0xcf] = '\0';
            pcVar22[0xd0] = '\0';
            pcVar22[0xd1] = '\0';
            pcVar22[0xd2] = '\0';
            pcVar22[0xd3] = '\0';
            pcVar22[0xd4] = '\0';
            pcVar22[0xd5] = '\0';
            pcVar22[0xd6] = '\0';
            pcVar22[0xd7] = '\0';
            pcVar22[0xd8] = '\0';
            pcVar22[0xd9] = '\0';
            pcVar22[0xda] = '\0';
            pcVar22[0xdb] = '\0';
            pcVar22[0xdc] = '\0';
            pcVar22[0xdd] = '\0';
            pcVar22[0xde] = '\0';
            pcVar22[0xdf] = '\0';
            *(undefined4 *)(pcVar22 + 0xe0) = local_198;
            if (0xf < local_110) {
              uVar20 = local_110 + 1;
              ppppuVar16 = local_128;
              if (0xfff < uVar20) {
                ppppuVar16 = (undefined8 ****)local_128[-1];
                puVar26 = auStack_2c8;
                if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)ppppuVar16)))
                goto LAB_1800f1177;
                uVar20 = local_110 + 0x28;
              }
              thunk_FUN_1803d64e0(ppppuVar16,uVar20);
            }
            goto LAB_1800f0a7b;
          }
          if ((int)uVar8 < (int)param_2) goto LAB_1800f0a31;
          ppppuVar16 = &local_128;
          if (0xf < local_110) {
            ppppuVar16 = local_128;
          }
          if ((uVar21 < local_118) &&
             (lVar23 = local_118 + (longlong)ppppuVar16,
             lVar19 = thunk_FUN_1804e6c50((longlong)ppppuVar16 + uVar21,lVar23,0x2e),
             lVar19 != lVar23)) {
            uVar20 = lVar19 - (longlong)ppppuVar16;
          }
          else {
            uVar20 = 0xffffffffffffffff;
          }
          local_c8[0] = 0;
          local_c8[1] = 0;
          local_c8[2] = 0;
          local_c8[3] = 0;
          if (local_118 < uVar20) goto LAB_1800f117e;
          lVar23 = -1;
          if (local_118 - uVar20 != -1) {
            lVar23 = local_118 - uVar20;
          }
          ppppuVar16 = &local_128;
          if (0xf < local_110) {
            ppppuVar16 = local_128;
          }
          FUN_1800133a0(local_c8,(longlong)ppppuVar16 + uVar20,lVar23);
          uVar30 = uVar29 | 1;
          if ((int)(uVar8 - 1) < 1) {
            uStack_e0 = 0;
            local_d8 = 6;
            local_d0 = 0xf;
            local_e8 = (ulonglong)CONCAT24(s_global_1806f2a8c._4_2_,s_global_1806f2a8c._0_4_);
          }
          else {
            uVar11 = FUN_18003a390(local_68);
            uVar30 = uVar29 | 3;
            local_290[2] = uVar30;
            FUN_180066ab0(&local_e8,&DAT_1806e0b7c,uVar11);
          }
          if ((uVar30 & 2) != 0) {
            uVar30 = uVar30 & 0xfffffffd;
            FUN_18000f890(local_68);
          }
          ppppuVar16 = &local_108;
          if (0xf < local_f0) {
            ppppuVar16 = local_108;
          }
          puVar13 = (undefined4 *)FUN_18006b5b0(&local_e8,0,ppppuVar16,uVar21);
          local_a8 = *puVar13;
          uStack_a4 = puVar13[1];
          uStack_a0 = puVar13[2];
          uStack_9c = puVar13[3];
          local_98 = puVar13[4];
          uStack_94 = puVar13[5];
          uStack_90 = puVar13[6];
          uStack_8c = puVar13[7];
          *(undefined8 *)(puVar13 + 4) = 0;
          *(undefined8 *)(puVar13 + 6) = 0xf;
          *(undefined1 *)puVar13 = 0;
          uVar29 = uVar30 | 0xc;
          FUN_180066820(local_88,&local_a8,local_c8);
          uVar21 = CONCAT44(uStack_8c,uStack_90);
          if (0xf < uVar21) {
            uVar20 = uVar21 + 1;
            lVar19 = CONCAT44(uStack_a4,local_a8);
            lVar23 = lVar19;
            if (uVar20 < 0x1000) {
LAB_1800f1009:
              thunk_FUN_1803d64e0(lVar23,uVar20);
              goto LAB_1800f100f;
            }
            lVar23 = *(longlong *)(lVar19 + -8);
            if ((lVar19 - lVar23) - 8U < 0x20) {
              uVar20 = uVar21 + 0x28;
              goto LAB_1800f1009;
            }
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar24 = auStack_2c0;
LAB_1800f1169:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar25 = puVar24 + 8;
LAB_1800f1170:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar26 = puVar25 + 8;
LAB_1800f1177:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar27 = puVar26 + 8;
LAB_1800f117e:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar27 + -8) = &UNK_1800f1183;
            FUN_18002a1a0();
          }
LAB_1800f100f:
          if (0xf < local_d0) {
            uVar20 = local_d0 + 1;
            uVar21 = local_e8;
            if (0xfff < uVar20) {
              uVar21 = *(ulonglong *)(local_e8 - 8);
              if (0x1f < (local_e8 - uVar21) - 8) goto LAB_1800f1169;
              uVar20 = local_d0 + 0x28;
            }
            thunk_FUN_1803d64e0(uVar21,uVar20);
          }
          local_d8 = 0;
          local_d0 = 0xf;
          local_e8 = local_e8 & 0xffffffffffffff00;
          if (0xf < (ulonglong)local_c8[3]) {
            uVar21 = local_c8[3] + 1;
            lVar23 = local_c8[0];
            if (0xfff < uVar21) {
              lVar23 = *(longlong *)(local_c8[0] + -8);
              if (0x1f < (local_c8[0] - lVar23) - 8U) goto LAB_1800f1170;
              uVar21 = local_c8[3] + 0x28;
            }
            thunk_FUN_1803d64e0(lVar23,uVar21);
          }
          ppppuVar16 = local_88;
          if (0xf < local_70) {
            ppppuVar16 = local_88[0];
          }
          snprintf(pcVar22,0x60,&DAT_1806d3198,ppppuVar16);
          FUN_18000f890(local_88);
          uVar21 = local_f8;
          if (local_110 < 0x10) goto LAB_1800f0a7b;
          uVar21 = local_110 + 1;
          ppppuVar16 = local_128;
          if (0xfff < uVar21) {
            ppppuVar16 = (undefined8 ****)local_128[-1];
            puVar26 = auStack_2c8;
            if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)ppppuVar16)))
            goto LAB_1800f1177;
            uVar21 = local_110 + 0x28;
          }
          thunk_FUN_1803d64e0(ppppuVar16,uVar21);
          uVar21 = local_f8;
        }
        else {
          if (uVar20 < 0x10) goto LAB_1800f0a7b;
          uVar18 = uVar20 + 1;
          ppppuVar14 = ppppuVar16;
          if (0xfff < uVar18) {
            ppppuVar14 = (undefined8 ****)ppppuVar16[-1];
            puVar26 = auStack_2c8;
            if (0x1f < (ulonglong)((longlong)ppppuVar16 + (-8 - (longlong)ppppuVar14)))
            goto LAB_1800f1177;
            uVar18 = uVar20 + 0x28;
          }
LAB_1800f0a6d:
          thunk_FUN_1803d64e0(ppppuVar14,uVar18);
        }
      }
LAB_1800f0a7b:
      iVar7 = local_298;
      pcVar22 = pcVar22 + 0xe4;
    } while (pcVar22 != &DAT_180960e30);
    iVar32 = local_294 + -1;
    puVar33 = &DAT_180957244;
    lVar23 = 2;
    if ((int)param_2 < iVar32) {
      puVar28 = &DAT_180957244;
      if (local_298 != 0) {
        puVar28 = &DAT_18094f768;
      }
      do {
        uVar29 = (int)uVar31 + 1;
        lVar19 = 2;
        puVar5 = (undefined8 *)(puVar28 + (longlong)(int)uVar29 * 0x148);
        puVar6 = &local_278;
        do {
          puVar15 = puVar6;
          puVar12 = puVar5;
          uVar11 = puVar12[1];
          *puVar15 = *puVar12;
          puVar15[1] = uVar11;
          uVar11 = puVar12[3];
          puVar15[2] = puVar12[2];
          puVar15[3] = uVar11;
          uVar11 = puVar12[5];
          puVar15[4] = puVar12[4];
          puVar15[5] = uVar11;
          uVar11 = puVar12[7];
          puVar15[6] = puVar12[6];
          puVar15[7] = uVar11;
          uVar11 = puVar12[9];
          puVar15[8] = puVar12[8];
          puVar15[9] = uVar11;
          uVar11 = puVar12[0xb];
          puVar15[10] = puVar12[10];
          puVar15[0xb] = uVar11;
          uVar11 = puVar12[0xd];
          puVar15[0xc] = puVar12[0xc];
          puVar15[0xd] = uVar11;
          uVar11 = puVar12[0xf];
          puVar15[0xe] = puVar12[0xe];
          puVar15[0xf] = uVar11;
          lVar19 = lVar19 + -1;
          puVar5 = puVar12 + 0x10;
          puVar6 = puVar15 + 0x10;
        } while (lVar19 != 0);
        uVar11 = puVar12[0x11];
        puVar15[0x10] = puVar12[0x10];
        puVar15[0x11] = uVar11;
        uVar11 = puVar12[0x13];
        puVar15[0x12] = puVar12[0x12];
        puVar15[0x13] = uVar11;
        uVar11 = puVar12[0x15];
        puVar15[0x14] = puVar12[0x14];
        puVar15[0x15] = uVar11;
        uVar11 = puVar12[0x17];
        puVar15[0x16] = puVar12[0x16];
        puVar15[0x17] = uVar11;
        puVar15[0x18] = puVar12[0x18];
        lVar19 = 2;
        puVar5 = &local_278;
        puVar6 = (undefined8 *)(puVar28 + uVar31 * 0x148);
        do {
          puVar15 = puVar6;
          puVar12 = puVar5;
          uVar11 = puVar12[1];
          *puVar15 = *puVar12;
          puVar15[1] = uVar11;
          uVar11 = puVar12[3];
          puVar15[2] = puVar12[2];
          puVar15[3] = uVar11;
          uVar11 = puVar12[5];
          puVar15[4] = puVar12[4];
          puVar15[5] = uVar11;
          uVar11 = puVar12[7];
          puVar15[6] = puVar12[6];
          puVar15[7] = uVar11;
          uVar11 = puVar12[9];
          puVar15[8] = puVar12[8];
          puVar15[9] = uVar11;
          uVar11 = puVar12[0xb];
          puVar15[10] = puVar12[10];
          puVar15[0xb] = uVar11;
          uVar11 = puVar12[0xd];
          puVar15[0xc] = puVar12[0xc];
          puVar15[0xd] = uVar11;
          uVar11 = puVar12[0xf];
          puVar15[0xe] = puVar12[0xe];
          puVar15[0xf] = uVar11;
          lVar19 = lVar19 + -1;
          puVar5 = puVar12 + 0x10;
          puVar6 = puVar15 + 0x10;
        } while (lVar19 != 0);
        uVar11 = puVar12[0x11];
        puVar15[0x10] = puVar12[0x10];
        puVar15[0x11] = uVar11;
        uVar11 = puVar12[0x13];
        puVar15[0x12] = puVar12[0x12];
        puVar15[0x13] = uVar11;
        uVar2 = *(undefined4 *)((longlong)puVar12 + 0xa4);
        uVar3 = *(undefined4 *)(puVar12 + 0x15);
        uVar4 = *(undefined4 *)((longlong)puVar12 + 0xac);
        *(undefined4 *)(puVar15 + 0x14) = *(undefined4 *)(puVar12 + 0x14);
        *(undefined4 *)((longlong)puVar15 + 0xa4) = uVar2;
        *(undefined4 *)(puVar15 + 0x15) = uVar3;
        *(undefined4 *)((longlong)puVar15 + 0xac) = uVar4;
        uVar2 = *(undefined4 *)((longlong)puVar12 + 0xb4);
        uVar3 = *(undefined4 *)(puVar12 + 0x17);
        uVar4 = *(undefined4 *)((longlong)puVar12 + 0xbc);
        *(undefined4 *)(puVar15 + 0x16) = *(undefined4 *)(puVar12 + 0x16);
        *(undefined4 *)((longlong)puVar15 + 0xb4) = uVar2;
        *(undefined4 *)(puVar15 + 0x17) = uVar3;
        *(undefined4 *)((longlong)puVar15 + 0xbc) = uVar4;
        puVar15[0x18] = puVar12[0x18];
        local_2a8 = uVar29;
        FUN_1800ef8b0(iVar7,&DAT_18091a190,uVar31,&DAT_18091a190);
        uVar31 = (ulonglong)uVar29;
      } while ((int)uVar29 < iVar32);
    }
    local_278 = 0;
    uStack_270 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    FUN_180540170(local_238,0,0x100);
    local_138 = 0;
    if (iVar7 != 0) {
      puVar33 = &DAT_18094f768;
    }
    lVar19 = (longlong)local_294;
    puVar5 = &local_278;
    puVar6 = (undefined8 *)(puVar33 + (lVar19 + -1) * 0x148);
    do {
      puVar15 = puVar6;
      puVar12 = puVar5;
      uVar11 = puVar12[1];
      *puVar15 = *puVar12;
      puVar15[1] = uVar11;
      uVar11 = puVar12[3];
      puVar15[2] = puVar12[2];
      puVar15[3] = uVar11;
      uVar11 = puVar12[5];
      puVar15[4] = puVar12[4];
      puVar15[5] = uVar11;
      uVar11 = puVar12[7];
      puVar15[6] = puVar12[6];
      puVar15[7] = uVar11;
      uVar11 = puVar12[9];
      puVar15[8] = puVar12[8];
      puVar15[9] = uVar11;
      uVar11 = puVar12[0xb];
      puVar15[10] = puVar12[10];
      puVar15[0xb] = uVar11;
      uVar11 = puVar12[0xd];
      puVar15[0xc] = puVar12[0xc];
      puVar15[0xd] = uVar11;
      uVar11 = puVar12[0xf];
      puVar15[0xe] = puVar12[0xe];
      puVar15[0xf] = uVar11;
      lVar23 = lVar23 + -1;
      puVar5 = puVar12 + 0x10;
      puVar6 = puVar15 + 0x10;
    } while (lVar23 != 0);
    uVar11 = puVar12[0x11];
    puVar15[0x10] = puVar12[0x10];
    puVar15[0x11] = uVar11;
    uVar11 = puVar12[0x13];
    puVar15[0x12] = puVar12[0x12];
    puVar15[0x13] = uVar11;
    uVar2 = *(undefined4 *)((longlong)puVar12 + 0xa4);
    uVar3 = *(undefined4 *)(puVar12 + 0x15);
    uVar4 = *(undefined4 *)((longlong)puVar12 + 0xac);
    *(undefined4 *)(puVar15 + 0x14) = *(undefined4 *)(puVar12 + 0x14);
    *(undefined4 *)((longlong)puVar15 + 0xa4) = uVar2;
    *(undefined4 *)(puVar15 + 0x15) = uVar3;
    *(undefined4 *)((longlong)puVar15 + 0xac) = uVar4;
    uVar2 = *(undefined4 *)((longlong)puVar12 + 0xb4);
    uVar3 = *(undefined4 *)(puVar12 + 0x17);
    uVar4 = *(undefined4 *)((longlong)puVar12 + 0xbc);
    *(undefined4 *)(puVar15 + 0x16) = *(undefined4 *)(puVar12 + 0x16);
    *(undefined4 *)((longlong)puVar15 + 0xb4) = uVar2;
    *(undefined4 *)(puVar15 + 0x17) = uVar3;
    *(undefined4 *)((longlong)puVar15 + 0xbc) = uVar4;
    puVar15[0x18] = puVar12[0x18];
    FUN_1800ef9f0(iVar7,&DAT_18091a190,local_294 + -1);
    *local_280 = (int)lVar19 + -1;
    FUN_18000f890(&local_108);
  }
  return;
}



/* ===== 1800f1190 FUN_1800f1190 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1800f1190(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  undefined1 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined8 uStack_194;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined1 local_15c;
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
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (0 < param_1) {
    piVar10 = &DAT_18092174c;
    piVar6 = &DAT_18092174c;
    do {
      if ((*piVar6 == param_1) && (piVar6[1] == param_2)) {
        return piVar6;
      }
      piVar6 = piVar6 + 0x68;
    } while (piVar6 != &DAT_180931b4c);
    uStack_1b4 = 0xffffffff;
    local_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    local_15c = 0;
    uStack_1ac = 0x3a83126f;
    uStack_19c = 0;
    uStack_194 = 0;
    local_18c = 0;
    uStack_184 = 0;
    local_17c = 0;
    uStack_174 = 0;
    local_16c = 0;
    uStack_164 = 0;
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
    local_108 = _DAT_1808adc30;
    uStack_100 = _UNK_1808adc38;
    local_f8 = _DAT_1808adc30;
    uStack_f0 = _UNK_1808adc38;
    local_e8 = _DAT_1808adc30;
    uStack_e0 = _UNK_1808adc38;
    FUN_180540170(&local_d8,0,0xa8);
    piVar6 = &DAT_18092174c;
    lVar12 = 3;
    local_d8 = 0;
    local_c8 = 0;
    local_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_84 = 0;
    local_74 = 0;
    local_68 = 0;
    local_58 = 0;
    local_4c = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_b8 = _DAT_1808ad310;
    uStack_b0 = _UNK_1808ad318;
    local_98 = _DAT_1808ad2c0;
    uStack_90 = _UNK_1808ad2c8;
    local_48 = _DAT_1808ad310;
    uStack_40 = _UNK_1808ad318;
    local_d0 = 0x3f800000;
    local_c0 = 0xffffffff;
    local_a4 = 0xffffffff;
    local_88 = 0xffffffff;
    local_7c = 0x3f800000;
    local_6c = 0xffffffff;
    local_60 = 0x3f800000;
    local_50 = 0xffffffff;
    local_34 = 0xffffffff;
    do {
      if ((*piVar6 == param_1) && (piVar6[1] < 0)) {
        lVar11 = 3;
        piVar9 = piVar6;
        puVar5 = (undefined8 *)&local_1b8;
        do {
          puVar8 = puVar5;
          piVar7 = piVar9;
          uVar1 = *(undefined8 *)(piVar7 + 2);
          uVar2 = *(undefined8 *)(piVar7 + 4);
          uVar3 = *(undefined8 *)(piVar7 + 6);
          *puVar8 = *(undefined8 *)piVar7;
          puVar8[1] = uVar1;
          uVar1 = *(undefined8 *)(piVar7 + 8);
          uVar4 = *(undefined8 *)(piVar7 + 10);
          puVar8[2] = uVar2;
          puVar8[3] = uVar3;
          uVar2 = *(undefined8 *)(piVar7 + 0xc);
          uVar3 = *(undefined8 *)(piVar7 + 0xe);
          puVar8[4] = uVar1;
          puVar8[5] = uVar4;
          uVar1 = *(undefined8 *)(piVar7 + 0x10);
          uVar4 = *(undefined8 *)(piVar7 + 0x12);
          puVar8[6] = uVar2;
          puVar8[7] = uVar3;
          uVar2 = *(undefined8 *)(piVar7 + 0x14);
          uVar3 = *(undefined8 *)(piVar7 + 0x16);
          puVar8[8] = uVar1;
          puVar8[9] = uVar4;
          uVar1 = *(undefined8 *)(piVar7 + 0x18);
          uVar4 = *(undefined8 *)(piVar7 + 0x1a);
          puVar8[10] = uVar2;
          puVar8[0xb] = uVar3;
          uVar2 = *(undefined8 *)(piVar7 + 0x1c);
          uVar3 = *(undefined8 *)(piVar7 + 0x1e);
          puVar8[0xc] = uVar1;
          puVar8[0xd] = uVar4;
          puVar8[0xe] = uVar2;
          puVar8[0xf] = uVar3;
          lVar11 = lVar11 + -1;
          piVar9 = piVar7 + 0x20;
          puVar5 = puVar8 + 0x10;
        } while (lVar11 != 0);
        uVar1 = *(undefined8 *)(piVar7 + 0x22);
        uVar2 = *(undefined8 *)(piVar7 + 0x24);
        uVar3 = *(undefined8 *)(piVar7 + 0x26);
        puVar8[0x10] = *(undefined8 *)(piVar7 + 0x20);
        puVar8[0x11] = uVar1;
        puVar8[0x12] = uVar2;
        puVar8[0x13] = uVar3;
      }
      piVar6 = piVar6 + 0x68;
    } while (piVar6 != &DAT_180931b4c);
    do {
      if (*piVar10 == 0) {
        piVar6 = piVar10;
        puVar5 = (undefined8 *)&local_1b8;
        do {
          puVar8 = puVar5;
          piVar9 = piVar6;
          uVar1 = puVar8[1];
          uVar2 = puVar8[2];
          uVar3 = puVar8[3];
          *(undefined8 *)piVar9 = *puVar8;
          *(undefined8 *)(piVar9 + 2) = uVar1;
          uVar1 = puVar8[4];
          uVar4 = puVar8[5];
          *(undefined8 *)(piVar9 + 4) = uVar2;
          *(undefined8 *)(piVar9 + 6) = uVar3;
          uVar2 = puVar8[6];
          uVar3 = puVar8[7];
          *(undefined8 *)(piVar9 + 8) = uVar1;
          *(undefined8 *)(piVar9 + 10) = uVar4;
          uVar1 = puVar8[8];
          uVar4 = puVar8[9];
          *(undefined8 *)(piVar9 + 0xc) = uVar2;
          *(undefined8 *)(piVar9 + 0xe) = uVar3;
          uVar2 = puVar8[10];
          uVar3 = puVar8[0xb];
          *(undefined8 *)(piVar9 + 0x10) = uVar1;
          *(undefined8 *)(piVar9 + 0x12) = uVar4;
          uVar1 = puVar8[0xc];
          uVar4 = puVar8[0xd];
          *(undefined8 *)(piVar9 + 0x14) = uVar2;
          *(undefined8 *)(piVar9 + 0x16) = uVar3;
          uVar2 = puVar8[0xe];
          uVar3 = puVar8[0xf];
          *(undefined8 *)(piVar9 + 0x18) = uVar1;
          *(undefined8 *)(piVar9 + 0x1a) = uVar4;
          *(undefined8 *)(piVar9 + 0x1c) = uVar2;
          *(undefined8 *)(piVar9 + 0x1e) = uVar3;
          lVar12 = lVar12 + -1;
          piVar6 = piVar9 + 0x20;
          puVar5 = puVar8 + 0x10;
        } while (lVar12 != 0);
        uVar1 = puVar8[0x11];
        uVar2 = puVar8[0x12];
        uVar3 = puVar8[0x13];
        *(undefined8 *)(piVar9 + 0x20) = puVar8[0x10];
        *(undefined8 *)(piVar9 + 0x22) = uVar1;
        *(undefined8 *)(piVar9 + 0x24) = uVar2;
        *(undefined8 *)(piVar9 + 0x26) = uVar3;
        *piVar10 = param_1;
        piVar10[1] = param_2;
        return piVar10;
      }
      piVar10 = piVar10 + 0x68;
    } while (piVar10 != &DAT_180931b4c);
  }
  return (int *)0x0;
}



/* ===== 1800f1470 FUN_1800f1470 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1800f1470(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined1 uStack_2b0;
  undefined8 uStack_2ac;
  undefined8 uStack_2a4;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined8 uStack_274;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined1 uStack_220;
  undefined8 uStack_21c;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined2 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
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
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined8 local_14;
  
  if (0 < param_1) {
    piVar10 = &DAT_180931b4c;
    piVar6 = &DAT_180931b4c;
    do {
      if ((*piVar6 == param_1) && (piVar6[1] == param_2)) {
        return piVar6;
      }
      piVar6 = piVar6 + 0xab;
    } while (piVar6 != &DAT_18093c64c);
    do {
      if (*piVar10 == 0) {
        uStack_2ac = 0;
        uStack_2a4 = 0;
        lVar7 = 5;
        uStack_25c = 5;
        local_204 = 5;
        local_1fc = 5;
        local_1ac = 5;
        local_154 = 5;
        local_14c = 5;
        local_2b8 = 0;
        uStack_2b4 = 0xffffffff;
        uStack_2b0 = 0;
        uStack_29c = 0x3e343958;
        local_298 = 0x3e48b439;
        uStack_294 = 0x3ea0c49c;
        uStack_290 = 0x3f800000;
        local_288 = _DAT_1808ad790;
        uStack_280 = _UNK_1808ad798;
        local_278 = 1;
        uStack_274 = 100;
        uStack_26c = 0x3f800000;
        local_268 = 0x3f800000;
        uStack_264 = 0x3f800000;
        uStack_260 = 0x3f800000;
        local_258 = _DAT_1808ad510;
        uStack_250 = _UNK_1808ad518;
        local_248 = 0;
        uStack_244 = 0x3e343958;
        uStack_240 = 0x3e48b439;
        uStack_23c = 0x3ea0c49c;
        local_238 = 0x3f800000;
        uStack_230 = 0;
        uStack_22c = 100;
        local_228 = 100;
        uStack_224 = 0x14;
        uStack_220 = 1;
        uStack_21c = 100;
        uStack_214 = 0x3f800000;
        uStack_210 = 0x3f800000;
        local_20c = 0x3f800000;
        local_208 = 0x3f800000;
        local_200 = 100;
        local_1f8 = 0x5a;
        local_1f0 = 0;
        local_1ec = 0x3e343958;
        local_1e8 = 0x3e48b439;
        local_1e4 = 0x3ea0c49c;
        local_1e0 = 0x3f800000;
        local_1d8 = _DAT_1808ad790;
        uStack_1d0 = _UNK_1808ad798;
        local_1c8 = 1;
        local_1c4 = 100;
        local_1bc = 0x3f800000;
        local_1b8 = 0x3f800000;
        local_1b4 = 0x3f800000;
        local_1b0 = 0x3f800000;
        local_1a8 = _DAT_1808ad510;
        uStack_1a0 = _UNK_1808ad518;
        local_198 = 0;
        local_194 = 0x3e343958;
        local_190 = 0x3e48b439;
        local_18c = 0x3ea0c49c;
        local_188 = 0x3f800000;
        local_180 = 0;
        local_17c = 100;
        local_178 = 100;
        local_174 = 0x14;
        local_170 = 1;
        local_16c = 100;
        local_164 = 0x3f800000;
        local_160 = 0x3f800000;
        local_15c = 0x3f800000;
        local_158 = 0x3f800000;
        local_150 = 100;
        local_148 = 0x5a;
        local_140 = 0;
        local_13c = 0x3f800000;
        local_138 = 0x3f800000;
        local_134 = 0x3f800000;
        local_130 = 0x3f800000;
        local_12c = 0;
        local_128 = _DAT_1808ad990;
        uStack_120 = _UNK_1808ad998;
        local_110 = 0;
        uStack_108 = 0;
        local_114 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_c0 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_68 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_4c = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_118 = 1;
        local_b8 = _DAT_1808adb50;
        uStack_b0 = _UNK_1808adb58;
        local_a8 = _DAT_1808ad7f0;
        uStack_a0 = _UNK_1808ad7f8;
        local_88 = _DAT_1808adc30;
        uStack_80 = _UNK_1808adc38;
        local_98 = 0x14;
        local_94 = 1;
        local_90 = 100;
        local_78 = _DAT_1808ad7e0;
        uStack_70 = _UNK_1808ad7e8;
        local_60 = 0x3e343958;
        local_5c = 0x3e48b439;
        local_58 = 0x3ea0c49c;
        local_54 = 0x3f800000;
        local_48 = 100;
        local_44 = 100;
        local_40 = 0x14;
        local_3c = 1;
        local_38 = 100;
        local_30 = 0x3f800000;
        local_2c = 0x3f800000;
        local_28 = 0x3f800000;
        local_24 = 0x3f800000;
        local_20 = 5;
        local_1c = 100;
        local_18 = 5;
        local_14 = 0x5a;
        piVar6 = piVar10;
        puVar5 = (undefined8 *)&local_2b8;
        do {
          puVar9 = puVar5;
          piVar8 = piVar6;
          uVar1 = puVar9[1];
          uVar2 = puVar9[2];
          uVar3 = puVar9[3];
          *(undefined8 *)piVar8 = *puVar9;
          *(undefined8 *)(piVar8 + 2) = uVar1;
          uVar1 = puVar9[4];
          uVar4 = puVar9[5];
          *(undefined8 *)(piVar8 + 4) = uVar2;
          *(undefined8 *)(piVar8 + 6) = uVar3;
          uVar2 = puVar9[6];
          uVar3 = puVar9[7];
          *(undefined8 *)(piVar8 + 8) = uVar1;
          *(undefined8 *)(piVar8 + 10) = uVar4;
          uVar1 = puVar9[8];
          uVar4 = puVar9[9];
          *(undefined8 *)(piVar8 + 0xc) = uVar2;
          *(undefined8 *)(piVar8 + 0xe) = uVar3;
          uVar2 = puVar9[10];
          uVar3 = puVar9[0xb];
          *(undefined8 *)(piVar8 + 0x10) = uVar1;
          *(undefined8 *)(piVar8 + 0x12) = uVar4;
          uVar1 = puVar9[0xc];
          uVar4 = puVar9[0xd];
          *(undefined8 *)(piVar8 + 0x14) = uVar2;
          *(undefined8 *)(piVar8 + 0x16) = uVar3;
          uVar2 = puVar9[0xe];
          uVar3 = puVar9[0xf];
          *(undefined8 *)(piVar8 + 0x18) = uVar1;
          *(undefined8 *)(piVar8 + 0x1a) = uVar4;
          *(undefined8 *)(piVar8 + 0x1c) = uVar2;
          *(undefined8 *)(piVar8 + 0x1e) = uVar3;
          lVar7 = lVar7 + -1;
          piVar6 = piVar8 + 0x20;
          puVar5 = puVar9 + 0x10;
        } while (lVar7 != 0);
        uVar1 = puVar9[0x11];
        uVar2 = puVar9[0x12];
        uVar3 = puVar9[0x13];
        *(undefined8 *)(piVar8 + 0x20) = puVar9[0x10];
        *(undefined8 *)(piVar8 + 0x22) = uVar1;
        uVar1 = *(undefined8 *)((longlong)puVar9 + 0x9c);
        uVar4 = *(undefined8 *)((longlong)puVar9 + 0xa4);
        *(undefined8 *)(piVar8 + 0x24) = uVar2;
        *(undefined8 *)(piVar8 + 0x26) = uVar3;
        *(undefined8 *)(piVar8 + 0x27) = uVar1;
        *(undefined8 *)(piVar8 + 0x29) = uVar4;
        *piVar10 = param_1;
        piVar10[1] = param_2;
        return piVar10;
      }
      piVar10 = piVar10 + 0xab;
    } while (piVar10 != &DAT_18093c64c);
  }
  return (int *)0x0;
}



/* ===== 1800f18b0 FUN_1800f18b0 ===== */

longlong FUN_1800f18b0(undefined8 *param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  char local_108 [256];
  
  if ((ulonglong)param_1[3] < 0x10) {
    puVar8 = param_1;
  }
  else {
    puVar8 = (undefined8 *)*param_1;
  }
  lVar5 = param_1[2];
  if (lVar5 == 0) {
    return -1;
  }
  lVar1 = lVar5 + -1;
  lVar7 = -1;
  uVar4 = 2;
  if (lVar1 != -1) {
    lVar7 = lVar1;
    uVar4 = lVar5 + 2;
  }
  if (0xf < uVar4) {
    lVar7 = 0;
    if (lVar1 != -1) {
      lVar7 = lVar5;
    }
    lVar5 = FUN_1804e9a40(puVar8,lVar7,&DAT_1806f2a88,2);
    return lVar5;
  }
  FUN_180540170(local_108,0,0x100);
  pbVar9 = &DAT_1806f2a88;
  do {
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    local_108[bVar2] = '\x01';
  } while (pbVar9 != &DAT_1806f2a8a);
  puVar6 = (undefined8 *)((longlong)puVar8 + lVar7);
  cVar3 = local_108[*(byte *)((longlong)puVar8 + lVar7)];
  while( true ) {
    if (cVar3 != '\0') {
      return (longlong)puVar6 - (longlong)puVar8;
    }
    if (puVar6 == puVar8) break;
    pbVar9 = (byte *)((longlong)puVar6 + -1);
    puVar6 = (undefined8 *)((longlong)puVar6 + -1);
    cVar3 = local_108[*pbVar9];
  }
  return -1;
}



/* ===== 1800f19c0 FUN_1800f19c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800f19c0(char *param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  char *_Str;
  ulonglong uVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined4 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_68 = 0;
  local_60 = &DAT_1809ec010;
  iVar3 = FUN_1804e4d70(&DAT_1809ec010);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ec05c == 0x7fffffff) {
    DAT_1809ec05c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  _Str = "";
  if (param_1 != (char *)0x0) {
    _Str = param_1;
  }
  local_58 = (byte *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  sVar4 = strlen(_Str);
  FUN_1800133a0(&local_58,_Str,sVar4);
  local_68 = 1;
  lVar5 = FUN_1800f18b0(&local_58);
  if (lVar5 != -1) {
    uVar7 = lVar5 + 1U;
    if (local_48 < lVar5 + 1U) {
      uVar7 = local_48;
    }
    pbVar9 = (byte *)&local_58;
    if (0xf < uStack_40) {
      pbVar9 = local_58;
    }
    uVar8 = local_48 - uVar7;
    FUN_180540530(pbVar9,pbVar9 + uVar7,uVar8 + 1);
    local_48 = uVar8;
  }
  pbVar9 = (byte *)&local_58;
  if (0xf < uStack_40) {
    pbVar9 = local_58;
  }
  if (local_48 != 0) {
    pbVar11 = pbVar9 + local_48;
    pbVar6 = (byte *)thunk_FUN_1804e6c50(pbVar9,pbVar11,0x2e);
    puVar10 = auStack_88;
    if ((pbVar6 != pbVar11) &&
       (uVar7 = (longlong)pbVar6 - (longlong)pbVar9, uVar7 != 0xffffffffffffffff)) {
      if (local_48 < uVar7) goto LAB_1800f1ba9;
      local_48 = uVar7;
      pbVar9 = (byte *)&local_58;
      if (0xf < uStack_40) {
        pbVar9 = local_58;
      }
      pbVar9[uVar7] = 0;
    }
  }
  pbVar9 = (byte *)&local_58;
  if (0xf < uStack_40) {
    pbVar9 = local_58;
  }
  pbVar11 = pbVar9 + local_48;
  for (; pbVar9 != pbVar11; pbVar9 = pbVar9 + 1) {
    iVar3 = tolower((uint)*pbVar9);
    *pbVar9 = (byte)iVar3;
  }
  uVar7 = CONCAT44(DAT_1809ec078._4_4_,(undefined4)DAT_1809ec078);
  if (0xf < uVar7) {
    uVar8 = uVar7 + 1;
    lVar2 = CONCAT44(DAT_1809ec060._4_4_,(undefined4)DAT_1809ec060);
    lVar5 = lVar2;
    if (0xfff < uVar8) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar5) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar10 = auStack_80;
LAB_1800f1ba9:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar10 + -8) = 0x1800f1bae;
        FUN_18002a1a0();
      }
      uVar8 = uVar7 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar5,uVar8);
  }
  DAT_1809ec060._0_4_ = (undefined4)local_58;
  DAT_1809ec060._4_4_ = local_58._4_4_;
  uRam00000001809ec068 = (undefined4)uStack_50;
  uRam00000001809ec06c = uStack_50._4_4_;
  _DAT_1809ec070 = (undefined4)local_48;
  uRam00000001809ec074 = local_48._4_4_;
  DAT_1809ec078._0_4_ = (undefined4)uStack_40;
  DAT_1809ec078._4_4_ = uStack_40._4_4_;
  FUN_1804e4e90(&DAT_1809ec010);
  return;
}



/* ===== 1800f1bd0 FUN_1800f1bd0 ===== */

undefined8 FUN_1800f1bd0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_1804e4d70(&DAT_1809ec010);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ec05c == 0x7fffffff) {
    DAT_1809ec05c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar2 = &DAT_1809ec060;
  if (DAT_180cc3e18 != '\0') {
    puVar2 = (undefined8 *)&DAT_1809ec080;
  }
  FUN_180024b50(param_1,puVar2);
  FUN_1804e4e90(&DAT_1809ec010);
  return param_1;
}



/* ===== 1800f1c60 FUN_1800f1c60 ===== */

undefined * FUN_1800f1c60(void)

{
  undefined *puVar1;
  
  if (DAT_1809ebfb8 == 0xfffffffe) {
    puVar1 = &DAT_1805e9ea0;
    if (DAT_18093cdcc != '\0') {
      puVar1 = &DAT_18093d030;
    }
    return puVar1;
  }
  if (DAT_1809ebfb8 < 0x30) {
    puVar1 = &DAT_1805e9ea0;
    if ((&DAT_18093d3e0)[(longlong)(int)DAT_1809ebfb8 * 0x614] != '\0') {
      puVar1 = (undefined *)((longlong)(int)DAT_1809ebfb8 * 0x614 + 0x18093d644);
    }
    return puVar1;
  }
  puVar1 = &DAT_1805e9ea0;
  if (DAT_18093c7f8 != '\0') {
    puVar1 = &DAT_18093ca5c;
  }
  return puVar1;
}



/* ===== 1800f1ce0 FUN_1800f1ce0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1800f1ce0(char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  char *_Str1;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined1 local_618;
  undefined1 local_614;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  undefined4 local_604;
  undefined1 local_600;
  undefined4 local_5fc;
  undefined1 local_5f8;
  undefined4 local_5f4;
  undefined1 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined1 local_5e4;
  undefined8 local_5e0;
  undefined1 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined1 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined4 local_5a8;
  undefined8 local_5a4;
  undefined1 local_59c [160];
  undefined8 local_4fc;
  undefined8 uStack_4f4;
  undefined8 local_4ec;
  undefined8 uStack_4e4;
  undefined8 local_4dc;
  undefined8 uStack_4d4;
  undefined8 local_4cc;
  undefined8 uStack_4c4;
  undefined8 local_4bc;
  undefined8 uStack_4b4;
  undefined8 local_4ac;
  undefined8 uStack_4a4;
  undefined4 local_49c;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined2 local_470;
  undefined4 local_46c;
  undefined1 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined1 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined1 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined1 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined1 local_40c;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined1 local_3f4;
  undefined4 local_3f0;
  undefined1 local_3ec;
  undefined4 local_3e8;
  undefined1 local_3e4;
  undefined4 local_3e0;
  undefined1 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined2 local_3b8;
  undefined1 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined1 local_39c;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined1 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined1 local_374;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined1 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined1 local_330;
  undefined8 local_32c;
  undefined4 local_324;
  undefined1 local_320;
  undefined4 local_31c;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined8 local_2f0;
  undefined1 local_2e8 [192];
  undefined1 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined2 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined1 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined2 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined2 local_48;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar4 = &DAT_18093d3a0;
    _Str1 = &DAT_18093d3a0;
    do {
      iVar3 = strcmp(_Str1,param_1);
      if (iVar3 == 0) {
        if (_Str1 + 0x40 != (char *)0x0) {
          return _Str1 + 0x40;
        }
        break;
      }
      _Str1 = _Str1 + 0x614;
    } while (_Str1 != &DAT_18094f760);
    do {
      if (*pcVar4 == '\0') {
        local_5b8 = _DAT_1808ade70;
        uStack_5b0 = _UNK_1808ade78;
        local_618 = 0;
        local_614 = 0;
        local_658 = 0;
        uStack_650 = 0;
        local_610 = 0x3f19999a;
        local_648 = 0;
        uStack_640 = 0;
        local_60c = 0x3f19999a;
        local_638 = 0;
        uStack_630 = 0;
        local_608 = 0x3f333333;
        local_628 = 0;
        uStack_620 = 0;
        local_604 = 0x3f800000;
        local_600 = 0;
        local_5fc = 0;
        local_5f8 = 0;
        local_5f4 = 0x40000000;
        local_5f0 = 0;
        local_5ec = 0x3fe66666;
        local_5e8 = 0x3f4ccccd;
        local_5e4 = 0;
        local_5e0 = 0x40400000;
        local_5d8 = 0;
        local_5d4 = 0;
        local_5d0 = 0x40a00000;
        local_5cc = 0x44160000;
        local_5c8 = 0x44af0000;
        local_5c4 = 0;
        local_5c0 = 0x3f2147ae;
        local_5bc = 0x3f30a3d7;
        local_5a8 = 0x3f000000;
        local_5a4 = 0x3f800000;
        FUN_180540170(local_59c,0,0xa0);
        uVar2 = _UNK_1808adc38;
        uVar1 = _DAT_1808adc30;
        local_4fc = 0;
        uStack_4f4 = 0;
        local_49c = 0x3e800000;
        local_4ec = 0;
        uStack_4e4 = 0;
        local_478 = 0;
        local_4dc = 0;
        uStack_4d4 = 0;
        local_470 = 0;
        local_4cc = 0;
        uStack_4c4 = 0;
        local_46c = 0x3f800000;
        local_4bc = 0;
        uStack_4b4 = 0;
        local_468 = 0;
        local_4ac = 0;
        uStack_4a4 = 0;
        local_464 = 0x3f800000;
        local_488 = _DAT_1808adc00;
        uStack_480 = _UNK_1808adc08;
        local_408 = _DAT_1808ada20;
        uStack_400 = _UNK_1808ada28;
        local_498 = _DAT_1808adc20;
        uStack_490 = _UNK_1808adc28;
        local_460 = 0x3f800000;
        local_45c = 0x3f800000;
        local_458 = 0x3f800000;
        local_454 = 0;
        local_450 = 0x3f800000;
        local_44c = 0x3f800000;
        local_448 = 0x3f800000;
        local_444 = 0x3f800000;
        local_440 = 0;
        local_43c = 0x3f800000;
        local_438 = 0x3f800000;
        local_434 = 0x3f800000;
        local_430 = 0x3f800000;
        local_42c = 0;
        local_428 = _DAT_1808adc30;
        uStack_420 = _UNK_1808adc38;
        local_418 = 0x3f800000;
        local_410 = 0x3f800000;
        local_40c = 0;
        local_3f8 = 0x3f800000;
        local_3f4 = 0;
        local_3f0 = 0x3b83126f;
        local_3ec = 0;
        local_3e8 = 0x3ee66666;
        local_398 = _DAT_1808adb90;
        uStack_390 = _UNK_1808adb98;
        local_3e4 = 0;
        local_3e0 = 0x3f0ccccd;
        local_3dc = 0;
        local_3d8 = 0;
        local_3d4 = 0x3f800000;
        local_3d0 = 0x3f800000;
        local_3cc = 0x3f800000;
        local_3c8 = _DAT_1808adc30;
        uStack_3c0 = _UNK_1808adc38;
        local_3b8 = 0x101;
        local_3b4 = 0;
        local_3b0 = 0x3f0c8b44;
        local_3ac = 0x3f0c8b44;
        local_3a8 = 0x3f20a3d7;
        local_3a4 = 0x3f800000;
        local_3a0 = 100;
        local_39c = 0;
        local_388 = 0;
        local_384 = 0x3f800000;
        local_380 = 0x3f800000;
        local_37c = 0x3f800000;
        local_378 = 0x3f800000;
        local_374 = 0;
        local_370 = 0;
        local_368 = 0xbf000000;
        local_364 = 0x3f800000;
        local_360 = 100;
        local_35c = 100;
        local_358 = 0;
        local_354 = 0x3eb4af4f;
        local_350 = 0x3eb4af4f;
        local_34c = 0x3ee6e979;
        local_348 = _DAT_1808adc30;
        uStack_340 = _UNK_1808adc38;
        local_338 = 0x3f800000;
        local_330 = 0;
        local_32c = 0;
        local_324 = 100;
        local_320 = 0;
        local_31c = 0x3f800000;
        local_318 = _DAT_1808adc30;
        uStack_310 = _UNK_1808adc38;
        local_308 = _DAT_1808adc30;
        uStack_300 = _UNK_1808adc38;
        local_2f8 = 0x3f800000;
        local_2f4 = 0x3f800000;
        local_2f0 = 0x3f800000;
        FUN_180540170(local_2e8,0,0xc0);
        local_1f8 = _DAT_1808ad800;
        uStack_1f0 = _UNK_1808ad808;
        local_1e8 = _DAT_1808ad780;
        uStack_1e0 = _UNK_1808ad788;
        local_228 = 0;
        local_224 = 0x3f800000;
        local_220 = 0x3f800000;
        local_21c = 0x3f800000;
        local_218 = 0x3f008312;
        local_214 = 0x19;
        local_210 = 0x40200000;
        local_20c = 1;
        local_208 = 0xfffffda8;
        local_204 = 600;
        local_200 = 0x3f800000;
        local_1fc = 0;
        local_1d8 = 0x14;
        local_1d4 = 0x14;
        local_1d0 = 0x3f800000;
        local_1cc = 0x3f800000;
        local_1c8 = uVar1;
        uStack_1c0 = uVar2;
        local_1b8 = uVar1;
        uStack_1b0 = uVar2;
        local_1a8 = uVar1;
        uStack_1a0 = uVar2;
        local_198 = uVar1;
        uStack_190 = uVar2;
        local_188 = 0x3f800000;
        local_184 = 0x3f800000;
        local_180 = 0;
        local_17c = 0x3f800000;
        local_178 = 0x3f800000;
        local_174 = 0x3f800000;
        local_170 = 0x3f800000;
        local_16c = 0xffffffe7;
        local_158 = _DAT_1808ad7d0;
        uStack_150 = _UNK_1808ad7d8;
        local_168 = 0x46;
        local_138 = 0;
        uStack_130 = 0;
        local_118 = _DAT_1808ad760;
        uStack_110 = _UNK_1808ad768;
        local_d8 = _DAT_1808ad9c0;
        uStack_d0 = _UNK_1808ad9c8;
        local_a8 = _DAT_1808adac0;
        uStack_a0 = _UNK_1808adac8;
        local_164 = 0x32;
        local_160 = 0x50;
        local_15c = 0;
        local_148 = 0;
        local_144 = 0;
        local_140 = 0;
        local_128 = 0;
        local_120 = 0;
        local_11c = 0;
        local_108 = 0;
        local_104 = 0xffffffff;
        local_100 = 0x40400000;
        local_fc = 0x3f000000;
        local_f8 = 0x3e4ccccd;
        local_f4 = 0x425c0000;
        local_f0 = 0;
        local_ec = 100;
        local_e8 = 100;
        local_e0 = 0;
        local_dc = 0x3f800000;
        local_c8 = _DAT_1808adca0;
        uStack_c0 = _UNK_1808adca8;
        local_b8 = 0x3f19999a;
        local_b4 = 1;
        local_b2 = 0;
        local_b0 = 0x3f800000;
        local_ac = 0x3f800000;
        local_98 = 0x3f800000;
        local_94 = 0x3e8c8b44;
        local_90 = 100;
        local_8c = 0x50;
        local_88 = 100;
        local_80 = 1;
        local_7c = 0x3f800000;
        local_78 = uVar1;
        uStack_70 = uVar2;
        local_68 = 0x3f800000;
        local_64 = 0x3f800000;
        local_5c = 0x32;
        local_58 = 100;
        local_54 = 100;
        local_4c = 0;
        local_48 = 0;
        FUN_180540530(pcVar4,&local_658,0x614);
        snprintf(pcVar4,0x40,&DAT_1806d3198,param_1);
        FUN_180540530(pcVar4 + 0x40,&DAT_18093c7f8,0x5d4);
        pcVar4[0x40] = '\x01';
        return pcVar4 + 0x40;
      }
      pcVar4 = pcVar4 + 0x614;
    } while (pcVar4 != &DAT_18094f760);
  }
  return (char *)0x0;
}



/* ===== 1800f2490 FUN_1800f2490 ===== */

char * FUN_1800f2490(int param_1)

{
  if (param_1 == 0) {
    return "enemy";
  }
  if (param_1 == 1) {
    return "team";
  }
  if (param_1 == 2) {
    return "local";
  }
  if (param_1 == 3) {
    return "ragdolls";
  }
  return "?";
}



/* ===== 1800f24d0 FUN_1800f24d0 ===== */

bool FUN_1800f24d0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  byte *pbVar4;
  char local_108 [256];
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (0x3f < lVar3 - 1U) {
    return false;
  }
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(byte **)param_1;
  }
  if (lVar3 != 0) {
    if (0xf < lVar3 + 9U) {
      lVar3 = thunk_FUN_1804e6380(param_1,lVar3,&DAT_1806f2ad8,9);
      return lVar3 == -1;
    }
    FUN_180540170(local_108,0,0x100);
    pbVar4 = &DAT_1806f2ad8;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      local_108[bVar1] = '\x01';
      pbVar2 = param_1;
    } while (pbVar4 != &DAT_1806f2ae1);
    for (; pbVar2 < param_1 + lVar3; pbVar2 = pbVar2 + 1) {
      if (local_108[*pbVar2] != '\0') {
        lVar3 = (longlong)pbVar2 - (longlong)param_1;
        goto LAB_1800f25a9;
      }
    }
  }
  lVar3 = -1;
LAB_1800f25a9:
  return lVar3 == -1;
}



/* ===== 1800f25e0 FUN_1800f25e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800f25e0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_a8;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_80 = param_1;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_C__neverlose_configs_1811bd063._12_4_;
  uVar3 = s_C__neverlose_configs_1811bd063._8_4_;
  uVar2 = s_C__neverlose_configs_1811bd063._4_4_;
  local_48 = 0x14;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_C__neverlose_configs_1811bd063._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar2;
  *(undefined4 *)(local_58 + 8) = uVar3;
  *(undefined4 *)(local_58 + 0xc) = uVar4;
  *(undefined4 *)(local_58 + 0x10) = s_C__neverlose_configs_1811bd063._16_4_;
  local_58[0x14] = '\0';
  puVar5 = (ulonglong *)FUN_1800134a0(&local_58,&DAT_1806e067c,1);
  local_78 = *puVar5;
  uStack_70 = puVar5[1];
  local_68 = puVar5[2];
  uStack_60 = puVar5[3];
  puVar5[2] = 0;
  puVar5[3] = 0xf;
  *(undefined1 *)puVar5 = 0;
  uVar6 = FUN_1800667a0(local_38,&local_78,param_2);
  puVar7 = (undefined4 *)FUN_1800134a0(uVar6,&DAT_1806f2aa0,4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *(undefined4 *)param_1 = *puVar7;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar2 = puVar7[5];
  uVar3 = puVar7[6];
  uVar4 = puVar7[7];
  *(undefined4 *)(param_1 + 2) = puVar7[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0xf;
  *(undefined1 *)puVar7 = 0;
  FUN_18000f890(local_38);
  if (0xf < uStack_60) {
    uVar10 = uStack_60 + 1;
    uVar11 = local_78;
    if (0xfff < uVar10) {
      uVar11 = *(ulonglong *)(local_78 - 8);
      if (0x1f < (local_78 - uVar11) - 8) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        goto LAB_1800f27bd;
      }
      uVar10 = uStack_60 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar11,uVar10);
  }
  local_68 = 0;
  uStack_60 = 0xf;
  local_78 = local_78 & 0xffffffffffffff00;
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) {
LAB_1800f27bd:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar8 = (undefined8 *)(*pcVar1)();
        return puVar8;
      }
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  return param_1;
}



/* ===== 1800f27d0 FUN_1800f27d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800f27d0(undefined8 *param_1)

{
  char *pcVar1;
  longlong *plVar2;
  uint *puVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_158 [32];
  uint local_138;
  undefined1 local_130 [8];
  ulonglong local_128;
  undefined8 uStack_120;
  char *local_118;
  undefined8 uStack_110;
  char *local_108;
  longlong *local_100;
  uint local_f8 [2];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  char *local_e8;
  longlong *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  uint *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined8 local_90;
  ulonglong uStack_88;
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_158;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_138 = 1;
  local_128 = local_128 & 0xffffffff00000000;
  uStack_120 = &PTR_vftable_18091a158;
  local_108 = "C:\\neverlose\\configs";
  local_100 = (longlong *)&DAT_00000014;
  local_a8 = param_1;
  uVar9 = FUN_1804e5000();
  FUN_180013d60(&local_a0,uVar9,&local_108);
  local_138 = 0x19;
  piVar11 = (int *)FUN_180016ab0(local_130,&local_a0,&local_128);
  iVar10 = *piVar11;
  FUN_1800289e0(&local_a0);
  if (iVar10 == 3) {
    local_118 = "C:\\neverlose\\configs";
    uStack_110 = 0x14;
    uVar9 = FUN_1804e5000();
    FUN_180013d60(&local_a0,uVar9,&local_118);
    uVar15 = 0x199;
    local_138 = 0x199;
    FUN_18004e860(local_f8,&local_a0,&local_128);
    FUN_1800289e0(&local_a0);
    if (CONCAT44(uStack_ec,uStack_f0) != 0) {
      LOCK();
      piVar11 = (int *)(CONCAT44(uStack_ec,uStack_f0) + 8);
      *piVar11 = *piVar11 + 1;
      UNLOCK();
    }
    local_128 = (ulonglong)local_f8[0];
    uStack_120 = (undefined **)CONCAT44(uStack_ec,uStack_f0);
    FUN_18004eae0(&local_e8,&local_128);
    if (CONCAT44(uStack_ec,uStack_f0) != 0) {
      LOCK();
      piVar11 = (int *)(CONCAT44(uStack_ec,uStack_f0) + 8);
      *piVar11 = *piVar11 + 1;
      UNLOCK();
    }
    FUN_18004ebc0(&local_108,&local_118);
    uVar8 = _UNK_1808ad418;
    uVar7 = _DAT_1808ad410;
    if (local_e8 != local_108) {
      do {
        pcVar1 = local_e8;
        FUN_180015fc0(local_e8,&local_128,3);
        if (((int)uStack_120 != 0) && (uVar14 = (int)local_128 - 1, (uVar14 & 0xfffffff7) != 0)) {
          FUN_1800ef200(uVar14,(ulonglong)uStack_120 & 0xffffffff,pcVar1 + 0x20);
          pcVar4 = (code *)swi(3);
          puVar13 = (undefined8 *)(*pcVar4)();
          return puVar13;
        }
        uVar14 = uVar15;
        if ((int)local_128 == 2) {
          local_d8 = &DAT_1806f2aa0;
          local_d0 = 4;
          uVar9 = FUN_1804e5000();
          FUN_180013d60(&local_a0,uVar9,&local_d8);
          pcVar1 = pcVar1 + 0x20;
          local_138 = uVar15 | 6;
          uVar12 = FUN_180099dd0(pcVar1,local_80);
          local_c8 = &local_a0;
          if (7 < uStack_88) {
            local_c8 = (uint *)CONCAT44(uStack_9c,local_a0);
          }
          local_c0 = local_90;
          iVar10 = FUN_180014140(uVar12,&local_c8);
          FUN_1800289e0(local_80);
          FUN_1800289e0(&local_a0);
          uVar14 = uVar15 | 6;
          if (iVar10 == 0) {
            puVar13 = (undefined8 *)FUN_180099cd0(pcVar1,local_80);
            if ((ulonglong)puVar13[3] < 8) {
              local_b8 = puVar13;
            }
            else {
              local_b8 = (undefined8 *)*puVar13;
            }
            local_b0 = puVar13[2];
            FUN_180024c20(&local_a0,&local_b8);
            uVar14 = uVar15 | 0x66;
            puVar3 = (uint *)param_1[1];
            local_138 = uVar14;
            if (puVar3 == (uint *)param_1[2]) {
              FUN_18009bb20(param_1,puVar3,&local_a0);
            }
            else {
              puVar3[0] = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
              puVar3[3] = 0;
              puVar3[4] = 0;
              puVar3[5] = 0;
              puVar3[6] = 0;
              puVar3[7] = 0;
              *puVar3 = local_a0;
              puVar3[1] = uStack_9c;
              puVar3[2] = uStack_98;
              puVar3[3] = uStack_94;
              *(undefined8 *)(puVar3 + 4) = local_90;
              *(ulonglong *)(puVar3 + 6) = uStack_88;
              local_90 = uVar7;
              uStack_88 = uVar8;
              local_a0 = local_a0 & 0xffffff00;
              param_1[1] = param_1[1] + 0x20;
            }
            FUN_18000f890(&local_a0);
            FUN_1800289e0(local_80);
          }
        }
        uVar15 = uVar14;
        FUN_18004e9d0(&local_e8);
      } while (local_e8 != local_108);
    }
    plVar5 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_100 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar11 = (int *)((longlong)plVar5 + 0xc);
        iVar10 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_e0 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar11 = (int *)((longlong)local_e0 + 0xc);
        iVar10 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0);
        }
      }
    }
    plVar5 = (longlong *)CONCAT44(uStack_ec,uStack_f0);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar11 = (int *)((longlong)plVar5 + 0xc);
        iVar10 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
  }
  return param_1;
}



/* ===== 1800f2be0 FUN_1800f2be0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800f2be0(undefined8 *param_1,float param_2)

{
  undefined2 uVar1;
  size_t sVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  char local_38 [32];
  ulonglong local_18;
  
  uVar1 = DAT_1806d3254;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_68;
  if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0xf;
    *(char *)param_1 = (char)uVar1;
    *(undefined1 *)((longlong)param_1 + 1) = 0;
  }
  else {
    local_38[0] = '\0';
    local_38[1] = '\0';
    local_38[2] = '\0';
    local_38[3] = '\0';
    local_38[4] = '\0';
    local_38[5] = '\0';
    local_38[6] = '\0';
    local_38[7] = '\0';
    local_38[8] = '\0';
    local_38[9] = '\0';
    local_38[10] = '\0';
    local_38[0xb] = '\0';
    local_38[0xc] = '\0';
    local_38[0xd] = '\0';
    local_38[0xe] = '\0';
    local_38[0xf] = '\0';
    local_38[0x10] = '\0';
    local_38[0x11] = '\0';
    local_38[0x12] = '\0';
    local_38[0x13] = '\0';
    local_38[0x14] = '\0';
    local_38[0x15] = '\0';
    local_38[0x16] = '\0';
    local_38[0x17] = '\0';
    local_38[0x18] = '\0';
    local_38[0x19] = '\0';
    local_38[0x1a] = '\0';
    local_38[0x1b] = '\0';
    local_38[0x1c] = '\0';
    local_38[0x1d] = '\0';
    local_38[0x1e] = '\0';
    local_38[0x1f] = '\0';
    local_40 = param_1;
    snprintf(local_38,0x20,&DAT_1806e0008,(double)param_2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar2 = strlen(local_38);
    FUN_1800133a0(param_1,local_38,sVar2);
  }
  return param_1;
}



/* ===== 1800f2cb0 FUN_1800f2cb0 ===== */

void FUN_1800f2cb0(longlong param_1,undefined8 *param_2)

{
  size_t sVar1;
  undefined8 *puVar2;
  char *_Str;
  
  _Str = ",\n";
  if (*(char *)(param_1 + 0x20) != '\0') {
    _Str = "{\n";
  }
  sVar1 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar1);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  if ((ulonglong)param_2[3] < 0x10) {
    puVar2 = param_2;
  }
  else {
    puVar2 = (undefined8 *)*param_2;
  }
  FUN_1800134a0(param_1,puVar2,param_2[2]);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  return;
}



/* ===== 1800f2d50 FUN_1800f2d50 ===== */

void FUN_1800f2d50(undefined8 param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  char *_Str;
  
  FUN_1800f2cb0();
  _Str = "false";
  if (*param_3 != '\0') {
    _Str = "true";
  }
  sVar1 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar1);
  return;
}



/* ===== 1800f2db0 FUN_1800f2db0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800f2db0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  FUN_1800f2cb0();
  puVar1 = (undefined8 *)FUN_18003a390(local_38,*param_3);
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar2 = puVar1;
  }
  else {
    puVar2 = (undefined8 *)*puVar1;
  }
  FUN_1800134a0(param_1,puVar2,puVar1[2]);
  FUN_18000f890(local_38);
  return;
}



/* ===== 1800f2e20 FUN_1800f2e20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800f2e20(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  FUN_1800f2cb0();
  puVar1 = (undefined8 *)FUN_1800f2be0(local_38,*param_3);
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar2 = puVar1;
  }
  else {
    puVar2 = (undefined8 *)*puVar1;
  }
  FUN_1800134a0(param_1,puVar2,puVar1[2]);
  FUN_18000f890(local_38);
  return;
}



/* ===== 1800f2ea0 FUN_1800f2ea0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800f2ea0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  int local_48 [2];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_68;
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806e05f8,1);
  local_48[1] = 0x40;
  local_48[0] = 0;
  iVar2 = *(int *)(param_3 + 0x100);
  piVar5 = local_48;
  if (-1 < iVar2) {
    piVar5 = (int *)(param_3 + 0x100);
  }
  piVar3 = local_48 + 1;
  if (iVar2 < 0x41) {
    piVar3 = piVar5;
  }
  iVar2 = *piVar3;
  uVar7 = 0;
  if (0 < iVar2) {
    do {
      if ((int)uVar7 != 0) {
        FUN_1800134a0(param_1,&DAT_1806f0594,2);
      }
      puVar4 = (undefined8 *)FUN_18003a390(local_40,*(undefined4 *)(param_3 + uVar7 * 4));
      puVar1 = puVar4 + 2;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_1800134a0(param_1,puVar4,*puVar1);
      FUN_18000f890(local_40);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < iVar2);
  }
  FUN_1800134a0(param_1,&DAT_1806e9114,1);
  return;
}



/* ===== 1800f2fa0 FUN_1800f2fa0 ===== */

undefined8 * FUN_1800f2fa0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf2;
  undefined8 *puVar3;
  undefined8 *_Buf1;
  
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  puVar3 = *(undefined8 **)(*param_1 + 0x48);
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  _Size = param_2[2];
  while( true ) {
    if (puVar3 == puVar1) {
      return (undefined8 *)0x0;
    }
    if ((ulonglong)puVar3[3] < 0x10) {
      _Buf2 = puVar3;
    }
    else {
      _Buf2 = (undefined8 *)*puVar3;
    }
    if ((_Size == puVar3[2]) && ((_Size == 0 || (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 == 0))))
    break;
    puVar3 = puVar3 + 0x10;
  }
  if (puVar3 + 4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return puVar3 + 4;
}



/* ===== 1800f3030 FUN_1800f3030 ===== */

void FUN_1800f3030(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1800f2fa0();
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      *param_3 = (char)piVar1[1];
      return;
    }
    if (*piVar1 == 2) {
      if (*(double *)(piVar1 + 2) == 0.0) {
        *param_3 = 0;
        return;
      }
      *param_3 = 1;
      return;
    }
    *param_3 = *param_3;
  }
  return;
}



/* ===== 1800f3090 FUN_1800f3090 ===== */

void FUN_1800f3090(undefined8 param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  double dVar2;
  
  lVar1 = FUN_1800f2fa0();
  if (lVar1 != 0) {
    dVar2 = (double)FUN_180370b10(lVar1,(double)*param_3);
    if (((((uint)((ulonglong)dVar2 >> 0x34) & 0x7ff) != 0x7ff) && (DAT_1808ace48 < dVar2)) &&
       (dVar2 < DAT_1808ac9c8)) {
      *param_3 = (int)dVar2;
    }
  }
  return;
}



/* ===== 1800f3100 FUN_1800f3100 ===== */

void FUN_1800f3100(undefined8 param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  double dVar2;
  
  lVar1 = FUN_1800f2fa0();
  if (lVar1 != 0) {
    dVar2 = (double)FUN_180370b10(lVar1,SUB84((double)*param_3,0));
    if (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000) {
      *param_3 = (float)dVar2;
    }
  }
  return;
}



/* ===== 1800f3150 FUN_1800f3150 ===== */

void FUN_1800f3150(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  int *piVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  bool bVar23;
  double dVar24;
  undefined8 local_138 [32];
  undefined4 local_38;
  
  piVar16 = (int *)FUN_1800f2fa0();
  if ((piVar16 != (int *)0x0) && (*piVar16 == 4)) {
    FUN_180540170(local_138,0,0x100);
    local_38 = 0;
    lVar21 = 2;
    puVar17 = local_138;
    puVar19 = param_3;
    do {
      puVar1 = puVar19 + 0x10;
      uVar10 = puVar17[1];
      uVar11 = puVar17[2];
      uVar12 = puVar17[3];
      puVar2 = puVar17 + 0x10;
      *puVar19 = *puVar17;
      puVar19[1] = uVar10;
      uVar10 = puVar17[4];
      uVar13 = puVar17[5];
      puVar19[2] = uVar11;
      puVar19[3] = uVar12;
      uVar11 = puVar17[6];
      uVar12 = puVar17[7];
      puVar19[4] = uVar10;
      puVar19[5] = uVar13;
      uVar10 = puVar17[8];
      uVar13 = puVar17[9];
      puVar19[6] = uVar11;
      puVar19[7] = uVar12;
      uVar11 = puVar17[10];
      uVar12 = puVar17[0xb];
      puVar19[8] = uVar10;
      puVar19[9] = uVar13;
      uVar6 = *(undefined4 *)(puVar17 + 0xc);
      uVar7 = *(undefined4 *)((longlong)puVar17 + 100);
      uVar8 = *(undefined4 *)(puVar17 + 0xd);
      uVar9 = *(undefined4 *)((longlong)puVar17 + 0x6c);
      puVar19[10] = uVar11;
      puVar19[0xb] = uVar12;
      uVar10 = puVar17[0xe];
      uVar11 = puVar17[0xf];
      *(undefined4 *)(puVar19 + 0xc) = uVar6;
      *(undefined4 *)((longlong)puVar19 + 100) = uVar7;
      *(undefined4 *)(puVar19 + 0xd) = uVar8;
      *(undefined4 *)((longlong)puVar19 + 0x6c) = uVar9;
      puVar19[0xe] = uVar10;
      puVar19[0xf] = uVar11;
      lVar21 = lVar21 + -1;
      puVar17 = puVar2;
      puVar19 = puVar1;
    } while (lVar21 != 0);
    *(undefined4 *)puVar1 = *(undefined4 *)puVar2;
    dVar15 = DAT_1808ac808;
    dVar14 = DAT_1808ac500;
    lVar21 = *(longlong *)(piVar16 + 0xc);
    lVar5 = *(longlong *)(piVar16 + 0xe);
    while ((lVar21 != lVar5 && (*(int *)(param_3 + 0x20) < 0x40))) {
      dVar24 = (double)FUN_180370b10(lVar21,0);
      if ((((uint)((ulonglong)dVar24 >> 0x34) & 0x7ff) != 0x7ff) &&
         ((dVar14 <= dVar24 && (dVar24 <= dVar15)))) {
        iVar3 = *(int *)(param_3 + 0x20);
        bVar23 = false;
        uVar20 = 0;
        iVar22 = (int)dVar24;
        if (0 < iVar3) {
          do {
            if (bVar23) goto LAB_1800f32b7;
            iVar4 = *(int *)((longlong)param_3 + uVar20 * 4);
            bVar23 = iVar4 == iVar22;
            uVar18 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar18;
          } while ((int)uVar18 < iVar3);
          if (iVar4 == iVar22) goto LAB_1800f32b7;
        }
        *(int *)(param_3 + 0x20) = iVar3 + 1;
        *(int *)((longlong)param_3 + (longlong)iVar3 * 4) = iVar22;
      }
LAB_1800f32b7:
      lVar21 = lVar21 + 0x60;
    }
  }
  return;
}



/* ===== 1800f32f0 FUN_1800f32f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800f32f0(longlong param_1)

{
  char *pcVar1;
  undefined3 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  char *_Str1;
  uint5 local_658 [3];
  ulonglong uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined1 local_618;
  uint local_614;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  uint local_604;
  uint local_600;
  undefined4 local_5fc;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined4 local_5e8;
  uint local_5e4;
  undefined4 uStack_5e0;
  undefined4 local_5dc;
  undefined1 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined1 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined4 local_5a8;
  undefined8 local_5a4;
  undefined1 local_59c [96];
  undefined8 local_53c;
  undefined8 uStack_534;
  undefined8 local_52c;
  undefined8 uStack_524;
  undefined8 local_51c;
  undefined8 uStack_514;
  undefined8 local_50c;
  undefined8 uStack_504;
  undefined8 local_4fc;
  undefined8 uStack_4f4;
  undefined8 local_4ec;
  undefined8 uStack_4e4;
  undefined4 local_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined2 local_4b0;
  undefined2 uStack_4ae;
  undefined8 local_4ac;
  undefined1 *puStack_4a4;
  undefined4 local_49c;
  undefined8 local_498;
  undefined1 *puStack_490;
  undefined1 *local_488;
  undefined8 uStack_480;
  undefined1 *local_478;
  uint local_470;
  uint local_46c;
  undefined8 local_468;
  undefined1 *puStack_460;
  undefined8 local_458;
  undefined4 local_450;
  uint local_44c;
  undefined1 *local_448;
  undefined8 uStack_440;
  undefined4 local_438;
  uint local_434;
  undefined4 local_430;
  undefined1 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined4 local_410;
  uint local_40c;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined1 local_3f4;
  undefined4 local_3f0;
  uint local_3ec;
  undefined4 local_3e8;
  uint local_3e4;
  undefined4 local_3e0;
  undefined1 local_3dc;
  undefined8 local_3d8;
  undefined1 *puStack_3d0;
  undefined8 local_3c8;
  undefined1 *puStack_3c0;
  undefined4 local_3b8;
  undefined1 local_3b4;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  uint local_39c;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined1 *puStack_380;
  undefined8 local_378;
  uint local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 local_364;
  uint local_360;
  undefined4 local_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 *local_338;
  uint local_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined1 local_320;
  undefined4 local_31c;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined8 local_2f0;
  undefined1 local_2e8 [128];
  undefined1 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined2 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined1 local_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 *puStack_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined1 *puStack_1d0;
  undefined1 *local_1c8;
  undefined8 uStack_1c0;
  undefined1 *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  uint local_184;
  undefined8 local_180;
  undefined1 *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  uint local_160;
  uint local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  uint local_148;
  uint local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  ulonglong local_88;
  undefined2 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined2 local_48;
  
  uVar8 = _UNK_1808ade78;
  uVar7 = _DAT_1808ade70;
  uVar6 = _UNK_1808adc38;
  uVar5 = _DAT_1808adc30;
  pcVar1 = (char *)(param_1 + 0x22c3c);
  if (*pcVar1 != '\0') {
    pcVar10 = (char *)(param_1 + 0x23210);
    _Str1 = pcVar10;
    if (param_1 != param_1 + 0x123c0) {
      do {
        iVar9 = strcmp(_Str1,"main_menu");
        if (iVar9 == 0) goto LAB_1800f3a93;
        _Str1 = _Str1 + 0x614;
      } while (_Str1 != (char *)(param_1 + 0x355d0));
      do {
        if (*pcVar10 == '\0') {
          local_618 = 0;
          local_614 = local_614 & 0xffffff00;
          local_610 = 0x3f19999a;
          local_60c = 0x3f19999a;
          local_658[0]._0_8_ = 0;
          local_658[1]._0_8_ = 0;
          local_608 = 0x3f333333;
          local_658[2]._0_8_ = 0;
          uStack_640 = 0;
          local_604 = 0x3f800000;
          local_638 = 0;
          uStack_630 = 0;
          local_600 = local_600 & 0xffffff00;
          local_628 = 0;
          uStack_620 = 0;
          local_5fc = 0;
          uVar3 = (uint)local_5f8;
          local_5f8 = CONCAT44(0x40000000,uVar3 & 0xffffff00);
          uVar3 = (uint)uStack_5f0;
          uStack_5f0 = CONCAT44(0x3fe66666,uVar3 & 0xffffff00);
          local_5e8 = 0x3f4ccccd;
          local_5e4 = local_5e4 & 0xffffff00;
          uStack_5e0 = 0x40400000;
          local_5dc = 0;
          local_5d8 = 0;
          local_5d4 = 0;
          local_5d0 = 0x40a00000;
          local_5cc = 0x44160000;
          local_5c8 = 0x44af0000;
          local_5c4 = 0;
          local_5c0 = 0x3f2147ae;
          local_5bc = 0x3f30a3d7;
          local_5b8 = uVar7;
          uStack_5b0 = uVar8;
          local_5a8 = 0x3f000000;
          local_5a4 = 0x3f800000;
          FUN_180540170(local_59c,0,0xa0);
          local_4fc = 0;
          uStack_4f4 = 0;
          local_49c = 0x3e800000;
          local_4ec = 0;
          uStack_4e4 = 0;
          local_478 = (undefined1 *)0x0;
          local_4dc = 0;
          uStack_4d8 = 0;
          uStack_4d4 = 0;
          uStack_4d0 = 0;
          local_470 = local_470 & 0xffff0000;
          uStack_4cc = 0;
          uStack_4c8 = 0;
          uStack_4c4 = 0;
          uStack_4c0 = 0;
          local_46c = 0x3f800000;
          uStack_4bc = 0;
          local_4b8 = 0;
          uStack_4b4 = 0;
          local_4b0 = 0;
          uStack_4ae = 0;
          uVar3 = (uint)local_468;
          local_4ac = 0;
          puStack_4a4 = (undefined1 *)0x0;
          local_468 = CONCAT44(0x3f800000,uVar3 & 0xffffff00);
          local_488 = (undefined1 *)_DAT_1808adc00;
          uStack_480 = _UNK_1808adc08;
          local_408 = _DAT_1808ada20;
          uStack_400 = _UNK_1808ada28;
          local_498 = _DAT_1808adc20;
          puStack_490 = (undefined1 *)_UNK_1808adc28;
          puStack_460 = &DAT_3f8000003f800000;
          local_458 = CONCAT35(local_458._5_3_,0x3f800000);
          local_450 = 0x3f800000;
          local_44c = 0x3f800000;
          local_448 = &DAT_3f8000003f800000;
          uVar3 = (uint)uStack_440;
          uStack_440 = CONCAT44(0x3f800000,uVar3 & 0xffffff00);
          local_438 = 0x3f800000;
          local_434 = 0x3f800000;
          local_430 = 0x3f800000;
          local_42c = 0;
          local_428 = uVar5;
          uStack_420 = uVar6;
          local_418 = 0x3f800000;
          local_410 = 0x3f800000;
          local_40c = local_40c & 0xffffff00;
          local_3f8 = 0x3f800000;
          local_3f4 = 0;
          local_3f0 = 0x3b83126f;
          local_3ec = local_3ec & 0xffffff00;
          local_3e8 = 0x3ee66666;
          local_3e4 = local_3e4 & 0xffffff00;
          local_3e0 = 0x3f0ccccd;
          local_3dc = 0;
          local_398 = _DAT_1808adb90;
          uStack_390 = _UNK_1808adb98;
          local_3d8 = 0x3f80000000000000;
          puStack_3d0 = &DAT_3f8000003f800000;
          local_3c8 = uVar5;
          puStack_3c0 = (undefined1 *)uVar6;
          local_3b8 = CONCAT22(local_3b8._2_2_,0x101);
          local_3b4 = 0;
          local_3b0 = 0x3f0c8b443f0c8b44;
          local_3a8 = 0x3f20a3d7;
          local_3a4 = 0x3f800000;
          local_3a0 = 100;
          local_39c = local_39c & 0xffffff00;
          uVar3 = (uint)local_388;
          local_388 = CONCAT44(0x3f800000,uVar3 & 0xffffff00);
          puStack_380 = &DAT_3f8000003f800000;
          local_378 = CONCAT35(local_378._5_3_,0x3f800000);
          local_370 = 0;
          uStack_36c = 0;
          uStack_368 = 0xbf000000;
          local_364 = 0x3f800000;
          local_360 = 100;
          local_35c = 100;
          uVar3 = (uint)local_358;
          local_358 = CONCAT44(0x3eb4af4f,uVar3 & 0xffffff00);
          uStack_350 = 0x3ee6e9793eb4af4f;
          local_348 = uVar5;
          uStack_340 = uVar6;
          local_338 = (undefined1 *)0x3f800000;
          local_330 = local_330 & 0xffffff00;
          uStack_32c = 0;
          local_328 = 0;
          local_324 = 100;
          local_320 = 0;
          local_31c = 0x3f800000;
          local_318 = uVar5;
          uStack_310 = uVar6;
          local_308 = uVar5;
          uStack_300 = uVar6;
          local_2f8 = 0x3f800000;
          local_2f4 = 0x3f800000;
          local_2f0 = 0x3f800000;
          FUN_180540170(local_2e8,0,0xc0);
          local_1f8 = _DAT_1808ad800;
          uStack_1f0 = _UNK_1808ad808;
          local_1e8 = _DAT_1808ad780;
          uStack_1e0 = _UNK_1808ad788;
          local_228._0_4_ = (uint)local_228 & 0xffffff00;
          local_228 = CONCAT44(0x3f800000,(uint)local_228);
          puStack_220 = &DAT_3f8000003f800000;
          local_218 = 0x3f008312;
          local_214 = 0x19;
          local_210 = 0x40200000;
          local_20c = CONCAT22(local_20c._2_2_,1);
          local_208 = 0x258fffffda8;
          uStack_200 = CONCAT35(uStack_200._5_3_,0x3f800000);
          local_1d8 = 0x1400000014;
          puStack_1d0 = &DAT_3f8000003f800000;
          local_1c8 = (undefined1 *)uVar5;
          uStack_1c0 = uVar6;
          local_1b8 = (undefined1 *)uVar5;
          uStack_1b0 = uVar6;
          local_1a8 = uVar5;
          uStack_1a0 = uVar6;
          local_198 = uVar5;
          uStack_190 = uVar6;
          local_188 = 0x3f800000;
          local_184 = 0x3f800000;
          local_180._0_4_ = (uint)local_180 & 0xffffff00;
          local_180 = CONCAT44(0x3f800000,(uint)local_180);
          local_178 = &DAT_3f8000003f800000;
          uStack_170 = 0xffffffe73f800000;
          local_168 = 0x3200000046;
          local_160 = 0x50;
          local_15c = local_15c & 0xffffff00;
          local_158 = _DAT_1808ad7d0;
          uStack_150 = _UNK_1808ad7d8;
          local_148 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_118 = _DAT_1808ad760;
          uStack_110 = _UNK_1808ad768;
          local_d8 = _DAT_1808ad9c0;
          uStack_d0 = _UNK_1808ad9c8;
          local_a8 = (undefined4)_DAT_1808adac0;
          uStack_a4 = (undefined4)((ulonglong)_DAT_1808adac0 >> 0x20);
          uStack_a0 = (undefined4)_UNK_1808adac8;
          uStack_9c = (undefined4)((ulonglong)_UNK_1808adac8 >> 0x20);
          local_144 = local_144 & 0xffffff00;
          local_140 = 0;
          local_128 = 0;
          local_120 = 0;
          local_11c = 0;
          local_108._0_4_ = (uint)local_108 & 0xffffff00;
          local_108 = CONCAT44(0xffffffff,(uint)local_108);
          uStack_100 = 0x3f00000040400000;
          local_f8 = 0x3e4ccccd;
          local_f4 = 0x425c0000;
          local_f0 = local_f0 & 0xffffff00;
          local_ec = 100;
          local_e8 = 100;
          uStack_e0._0_4_ = (uint)uStack_e0 & 0xffff0000;
          uStack_e0 = CONCAT44(0x3f800000,(uint)uStack_e0);
          local_c8 = _DAT_1808adca0;
          uStack_c0 = _UNK_1808adca8;
          local_b8 = CONCAT17(local_b8._7_1_,0x13f19999a);
          puStack_b0 = &DAT_3f8000003f800000;
          local_98 = 0x3f800000;
          local_94 = 0x643e8c8b44;
          local_8c = 0x50;
          local_88 = 100;
          local_80 = 1;
          local_7c = 0x3f800000;
          local_78 = uVar5;
          uStack_70 = uVar6;
          local_68 = 0x3f800000;
          local_64 = 0x3f800000;
          local_5c = 0x32;
          local_58 = 100;
          local_54 = 100;
          local_4c = 0;
          local_48 = 0;
          FUN_180540530(pcVar10,local_658,0x614);
          snprintf(pcVar10,0x40,&DAT_1806d3198,"main_menu");
          FUN_180540530(pcVar10 + 0x40,pcVar1,0x5d4);
          pcVar10[0x40] = '\x01';
          break;
        }
        pcVar10 = pcVar10 + 0x614;
      } while (pcVar10 != (char *)(param_1 + 0x355d0));
    }
LAB_1800f3a93:
    uVar2 = local_658[0]._5_3_;
    uVar3 = (uint)local_658[0];
    local_658[0] = (uint5)(uVar3 & 0xffffff00);
    local_658[0]._0_8_ = CONCAT35(uVar2,local_658[0]);
    local_658[1]._0_8_ = 0x3f19999a3f19999a;
    local_658[2]._0_8_ = 0x3f8000003f333333;
    uStack_640 = (uStack_640 >> 8 & 0xffffff) << 8;
    uVar3 = (uint)local_638;
    local_638 = CONCAT44(0x40000000,uVar3 & 0xffffff00);
    uVar3 = (uint)uStack_630;
    uStack_630 = CONCAT44(0x3fe66666,uVar3 & 0xffffff00);
    local_628 = CONCAT35(local_628._5_3_,0x3f4ccccd);
    uStack_620 = 0x40400000;
    local_618 = 0;
    local_614 = 0;
    local_610 = 0x40a00000;
    local_60c = 0x44160000;
    local_608 = 0x44af0000;
    local_604 = local_604 & 0xffffff00;
    local_600 = 0x3f2147ae;
    local_5fc = 0x3f30a3d7;
    local_5f8 = uVar7;
    uStack_5f0 = uVar8;
    local_5e8 = 0x3f000000;
    local_5e4 = 0x3f800000;
    uStack_5e0 = 0;
    FUN_180540170(&local_5dc,0,0xa0);
    local_53c = 0;
    uStack_534 = 0;
    local_470 = 0x3f800000;
    local_52c = 0;
    uStack_524 = 0;
    local_51c = 0;
    uStack_514 = 0;
    local_478 = &DAT_3f8000003f800000;
    local_50c = 0;
    uStack_504 = 0;
    uStack_480 = CONCAT44(0x3f800000,(undefined4)uStack_480);
    local_4fc = 0;
    uStack_4f4 = 0;
    uStack_480 = uStack_480 & 0xffffffffffffff00;
    local_4ec = 0;
    uStack_4e4 = 0;
    uStack_4c8 = (undefined4)_DAT_1808adc00;
    uStack_4c4 = (undefined4)((ulonglong)_DAT_1808adc00 >> 0x20);
    uStack_4c0 = (undefined4)_UNK_1808adc08;
    uStack_4bc = (undefined4)((ulonglong)_UNK_1808adc08 >> 0x20);
    local_448 = (undefined1 *)_DAT_1808ada20;
    uStack_440 = _UNK_1808ada28;
    local_3d8 = _DAT_1808adb90;
    puStack_3d0 = (undefined1 *)_UNK_1808adb98;
    local_488 = &DAT_3f8000003f800000;
    puStack_490 = &DAT_3f8000003f800000;
    uVar4 = (ulonglong)local_498 >> 0x20;
    local_498 = CONCAT44((uint)uVar4 & 0xffffff00,0x3f800000);
    local_49c = 0x3f800000;
    puStack_4a4 = &DAT_3f8000003f800000;
    uVar4 = (ulonglong)local_4ac >> 0x20;
    local_4ac = CONCAT44((uint)uVar4 & 0xffffff00,0x3f800000);
    local_4b0 = 0;
    local_4b8 = 0;
    uStack_4b4 = 0;
    uStack_4d8 = (undefined4)_DAT_1808adc20;
    uStack_4d4 = (undefined4)((ulonglong)_DAT_1808adc20 >> 0x20);
    uStack_4d0 = (undefined4)_UNK_1808adc28;
    uStack_4cc = (undefined4)((ulonglong)_UNK_1808adc28 >> 0x20);
    local_4dc = 0x3e800000;
    local_3dc = 0;
    local_3e0 = 100;
    local_3e4 = 0x3f800000;
    local_3e8 = 0x3f20a3d7;
    local_3ec = 0x3f0c8b44;
    local_3f0 = 0x3f0c8b44;
    local_3f4 = 0;
    local_3f8 = CONCAT22(local_3f8._2_2_,0x101);
    local_408 = uVar5;
    uStack_400 = uVar6;
    local_40c = 0x3f800000;
    local_410 = 0x3f800000;
    local_418 = 0x3f80000000000000;
    uVar4 = (ulonglong)uStack_420 >> 0x20;
    uStack_420 = CONCAT44((uint)uVar4 & 0xffffff00,0x3f0ccccd);
    uVar4 = (ulonglong)local_428 >> 0x20;
    local_428 = CONCAT44((uint)uVar4 & 0xffffff00,0x3ee66666);
    local_42c = 0;
    local_430 = 0x3b83126f;
    local_434 = local_434 & 0xffffff00;
    local_438 = 0x3f800000;
    local_44c = local_44c & 0xffffff00;
    local_450 = 0x3f800000;
    local_458 = 0x3f800000;
    local_468 = uVar5;
    puStack_460 = (undefined1 *)uVar6;
    local_46c = local_46c & 0xffffff00;
    local_330 = 0x3f800000;
    uStack_32c = 0;
    local_338 = &DAT_3f8000003f800000;
    local_348 = uVar5;
    uStack_340 = uVar6;
    local_358 = uVar5;
    uStack_350 = uVar6;
    local_35c = 0x3f800000;
    local_360 = local_360 & 0xffffff00;
    local_364 = 100;
    uStack_36c = 0;
    uStack_368 = 0;
    local_370 = local_370 & 0xffffff00;
    local_378 = 0x3f800000;
    local_388 = uVar5;
    puStack_380 = (undefined1 *)uVar6;
    uStack_390 = 0x3ee6e9793eb4af4f;
    local_398 = CONCAT44(0x3eb4af4f,(undefined4)local_398);
    local_398 = local_398 & 0xffffffffffffff00;
    local_39c = 100;
    local_3a0 = 100;
    local_3a4 = 0x3f800000;
    local_3a8 = 0xbf000000;
    local_3b0 = 0;
    local_3b4 = 0;
    local_3b8 = 0x3f800000;
    puStack_3c0 = &DAT_3f8000003f800000;
    local_3c8 = CONCAT44(0x3f800000,(undefined4)local_3c8);
    local_3c8 = local_3c8 & 0xffffffffffffff00;
    FUN_180540170(&local_328,0,0xc0);
    local_238 = _DAT_1808ad800;
    uStack_230 = _UNK_1808ad808;
    local_198 = _DAT_1808ad7d0;
    uStack_190 = _UNK_1808ad7d8;
    local_178 = (undefined1 *)0x0;
    uStack_170 = 0;
    uStack_1c0 = CONCAT44(0x3f800000,(undefined4)uStack_1c0);
    uStack_1c0 = uStack_1c0 & 0xffffffffffffff00;
    local_1c8 = &DAT_3f8000003f800000;
    local_1d8 = uVar5;
    puStack_1d0 = (undefined1 *)uVar6;
    local_1e8 = uVar5;
    uStack_1e0 = uVar6;
    local_1f8 = uVar5;
    uStack_1f0 = uVar6;
    local_208 = uVar5;
    uStack_200 = uVar6;
    local_20c = 0x3f800000;
    local_210 = 0x3f800000;
    local_214 = 0x14;
    local_218 = 0x14;
    local_228 = _DAT_1808ad780;
    puStack_220 = (undefined1 *)_UNK_1808ad788;
    local_23c = 0;
    local_240 = 0x3f800000;
    local_244 = 600;
    local_248 = 0xfffffda8;
    local_24c = 1;
    local_250 = 0x40200000;
    local_254 = 0x19;
    local_258 = 0x3f008312;
    local_25c = 0x3f800000;
    local_260 = 0x3f800000;
    local_264 = 0x3f800000;
    local_268 = 0;
    local_11c = 0x3f800000;
    local_120 = 0;
    local_128 = 100;
    uStack_130 = CONCAT44(100,(undefined4)uStack_130);
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    local_138 = 0x425c00003e4ccccd;
    local_158 = _DAT_1808ad760;
    uStack_150 = _UNK_1808ad768;
    local_118 = _DAT_1808ad9c0;
    uStack_110 = _UNK_1808ad9c8;
    local_e8 = _DAT_1808adac0;
    uStack_e0 = _UNK_1808adac8;
    local_140 = 0x3f00000040400000;
    local_144 = 0xffffffff;
    local_148 = local_148 & 0xffffff00;
    local_15c = 0;
    local_160 = local_160 & 0xffff0000;
    local_168 = 0;
    local_180 = 0;
    local_184 = local_184 & 0xffffff00;
    local_188 = 0;
    uVar4 = (ulonglong)uStack_1a0 >> 0x20;
    uStack_1a0 = CONCAT44((uint)uVar4 & 0xffffff00,0x50);
    local_1a8 = 0x3200000046;
    uStack_1b0 = 0xffffffe73f800000;
    local_1b8 = &DAT_3f8000003f800000;
    local_108 = _DAT_1808adca0;
    uStack_100 = _UNK_1808adca8;
    local_f8 = 0x3f19999a;
    local_f4 = CONCAT13(local_f4._3_1_,1);
    local_f0 = 0x3f800000;
    local_ec = 0x3f800000;
    local_d8 = 0x3e8c8b443f800000;
    uStack_d0 = 0x5000000064;
    local_c8 = 100;
    uStack_c0 = CONCAT62(uStack_c0._2_6_,1);
    uStack_c0 = CONCAT44(0x3f800000,(undefined4)uStack_c0);
    local_b8 = uVar5;
    puStack_b0 = (undefined1 *)uVar6;
    local_a8 = 0x3f800000;
    uStack_a4 = 0x3f800000;
    uStack_a0 = 0;
    uStack_9c = 0x32;
    local_98 = 100;
    local_94 = 100;
    local_8c = 0;
    local_88 = local_88 & 0xffffffffffff0000;
    FUN_180540530(pcVar1,local_658,0x5d4);
  }
  return;
}



/* ===== 1800f4190 FUN_1800f4190 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800f4190(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (*(float *)(param_1 + 0x72f8) == DAT_1808acabc) {
    *(undefined4 *)(param_1 + 0x72f8) = 0;
  }
  if (*(float *)(param_1 + 0x7000) == DAT_1808acaf4) {
    *(undefined4 *)(param_1 + 0x7000) = 0;
  }
  if (*(float *)(param_1 + 0x7004) == DAT_1808aca54) {
    *(undefined4 *)(param_1 + 0x7004) = 0;
  }
  if (*(float *)(param_1 + 0x7008) == DAT_1808ac900) {
    *(undefined4 *)(param_1 + 0x7008) = 0;
  }
  if (*(float *)(param_1 + 0x6f38) == DAT_1808acda0) {
    *(undefined4 *)(param_1 + 0x6f38) = 0xc47a0000;
  }
  fVar1 = *(float *)(param_1 + 0x6d9c);
  if (fVar1 == _DAT_1808ac3f8) {
    *(undefined4 *)(param_1 + 0x6d9c) = 0;
  }
  uVar4 = FUN_1800f4430(fVar1,param_1 + 0x22668);
  uVar4 = FUN_1800f4430(uVar4,param_1 + 0x22c3c);
  lVar2 = param_1 + 0x23210;
  lVar3 = lVar2;
  if (param_1 != param_1 + 0x123c0) {
    do {
      uVar4 = FUN_1800f4430(uVar4,lVar2 + 0x40);
      lVar2 = lVar2 + 0x614;
    } while (lVar2 != param_1 + 0x355d0);
  }
  *(undefined1 *)(param_1 + 0x2266c) = 0;
  *(undefined1 *)(param_1 + 0x22680) = 0;
  *(undefined1 *)(param_1 + 0x22688) = 0;
  *(undefined1 *)(param_1 + 0x22690) = 0;
  *(undefined1 *)(param_1 + 0x2269c) = 0;
  *(undefined1 *)(param_1 + 0x226bc) = 0;
  *(undefined1 *)(param_1 + 0x226a8) = 0;
  *(undefined1 *)(param_1 + 0x22818) = 0;
  *(undefined1 *)(param_1 + 0x2282c) = 0;
  *(undefined1 *)(param_1 + 0x22840) = 0;
  *(undefined1 *)(param_1 + 0x22854) = 0;
  *(undefined1 *)(param_1 + 0x22894) = 0;
  if (*(int *)(param_1 + 0x228a8) < 2) {
    *(undefined1 *)(param_1 + 0x228a4) = 0;
    *(undefined4 *)(param_1 + 0x228a8) = 2;
  }
  *(undefined1 *)(param_1 + 0x22c40) = 0;
  *(undefined1 *)(param_1 + 0x22c54) = 0;
  *(undefined1 *)(param_1 + 0x22c5c) = 0;
  *(undefined1 *)(param_1 + 0x22c64) = 0;
  *(undefined1 *)(param_1 + 0x22c70) = 0;
  *(undefined1 *)(param_1 + 0x22c90) = 0;
  *(undefined1 *)(param_1 + 0x22c7c) = 0;
  *(undefined1 *)(param_1 + 0x22dec) = 0;
  *(undefined1 *)(param_1 + 0x22e00) = 0;
  *(undefined1 *)(param_1 + 0x22e14) = 0;
  *(undefined1 *)(param_1 + 0x22e28) = 0;
  *(undefined1 *)(param_1 + 0x22e68) = 0;
  if (*(int *)(param_1 + 0x22e7c) < 2) {
    *(undefined1 *)(param_1 + 0x22e78) = 0;
    *(undefined4 *)(param_1 + 0x22e7c) = 2;
  }
  if (param_1 != param_1 + 0x123c0) {
    do {
      *(undefined1 *)(lVar3 + 0x44) = 0;
      *(undefined1 *)(lVar3 + 0x58) = 0;
      *(undefined1 *)(lVar3 + 0x60) = 0;
      *(undefined1 *)(lVar3 + 0x68) = 0;
      *(undefined1 *)(lVar3 + 0x74) = 0;
      *(undefined1 *)(lVar3 + 0x94) = 0;
      *(undefined1 *)(lVar3 + 0x80) = 0;
      *(undefined1 *)(lVar3 + 0x1f0) = 0;
      *(undefined1 *)(lVar3 + 0x204) = 0;
      *(undefined1 *)(lVar3 + 0x218) = 0;
      *(undefined1 *)(lVar3 + 0x22c) = 0;
      *(undefined1 *)(lVar3 + 0x26c) = 0;
      if (*(int *)(lVar3 + 0x280) < 2) {
        *(undefined1 *)(lVar3 + 0x27c) = 0;
        *(undefined4 *)(lVar3 + 0x280) = 2;
      }
      lVar3 = lVar3 + 0x614;
    } while (lVar3 != param_1 + 0x355d0);
  }
  *(undefined1 *)(param_1 + 0x2255c) = 0;
  *(undefined1 *)(param_1 + 0x225f0) = 0;
  *(undefined1 *)(param_1 + 0x6cb4) = 0;
  *(undefined1 *)(param_1 + 0x6cb8) = 0;
  *(undefined1 *)(param_1 + 0x6cbe) = 0;
  *(undefined1 *)(param_1 + 0x6cc2) = 0;
  FUN_1800f32f0(param_1);
  return;
}



/* ===== 1800f4430 FUN_1800f4430 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800f4430(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pfVar3 = (float *)&local_48;
  if (*(float *)(param_2 + 0x1c) == _DAT_1808ac590) {
    *(undefined4 *)(param_2 + 0x1c) = 0;
  }
  uStack_40 = _UNK_1808adbc8;
  local_48 = _DAT_1808adbc0;
  lVar1 = param_2 + 0x10;
  local_18 = _DAT_1808adbf0;
  uStack_10 = _UNK_1808adbf8;
  pfVar2 = (float *)(param_2 + 0x1b4);
  pfVar4 = (float *)&local_18;
  if (param_2 == lVar1) {
LAB_1800f44b1:
    *(undefined4 *)(param_2 + 0x1b4) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x1b8) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x1bc) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x1c0) = 0x3f800000;
    if (param_2 != lVar1) goto LAB_1800f44fb;
LAB_1800f453a:
    uStack_30 = _UNK_1808adb28;
    local_38 = _DAT_1808adb20;
    *(undefined4 *)(param_2 + 0x1c8) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x1cc) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x1d0) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x1d4) = 0x3f800000;
    if (param_2 != lVar1) goto LAB_1800f4582;
LAB_1800f45c1:
    uStack_20 = _UNK_1808adb88;
    local_28 = _DAT_1808adb80;
    *(undefined4 *)(param_2 + 0x1dc) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x1e0) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x1e4) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x1e8) = 0x3f800000;
    if (param_2 == lVar1) goto LAB_1800f462a;
  }
  else {
    for (; *pfVar2 == *pfVar4; pfVar2 = pfVar2 + 1) {
      if (pfVar2 == (float *)(param_2 + 0x1c0)) goto LAB_1800f44b1;
      pfVar4 = pfVar4 + 1;
    }
LAB_1800f44fb:
    pfVar2 = (float *)(param_2 + 0x1c8);
    for (; *pfVar2 == *pfVar3; pfVar3 = pfVar3 + 1) {
      pfVar2 = pfVar2 + 1;
      if (pfVar2 == (float *)(param_2 + 0x1d8)) goto LAB_1800f453a;
    }
    local_38 = _DAT_1808adb20;
    uStack_30 = _UNK_1808adb28;
LAB_1800f4582:
    pfVar2 = (float *)(param_2 + 0x1dc);
    for (pfVar3 = (float *)&local_38; *pfVar2 == *pfVar3; pfVar3 = pfVar3 + 1) {
      pfVar2 = pfVar2 + 1;
      if (pfVar2 == (float *)(param_2 + 0x1ec)) goto LAB_1800f45c1;
    }
    local_28 = _DAT_1808adb80;
    uStack_20 = _UNK_1808adb88;
  }
  pfVar2 = (float *)(param_2 + 0x1f0);
  pfVar3 = (float *)&local_28;
  while( true ) {
    if (*pfVar2 != *pfVar3) {
      return;
    }
    pfVar2 = pfVar2 + 1;
    if (pfVar2 == (float *)(param_2 + 0x200)) break;
    pfVar3 = pfVar3 + 1;
  }
LAB_1800f462a:
  *(undefined4 *)(param_2 + 0x1f0) = 0x3f800000;
  *(undefined4 *)(param_2 + 500) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x1f8) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x1fc) = 0x3f800000;
  return;
}



/* ===== 1800f4660 FUN_1800f4660 ===== */

void FUN_1800f4660(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  size_t _Size;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  
  if ((char)param_1[3] == '\0') {
    plVar1 = (longlong *)*param_1;
    _Size = param_2[2];
    plVar5 = param_1;
    if (0xf < (ulonglong)plVar1[3]) {
      plVar5 = plVar1;
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    if ((_Size == plVar1[2]) &&
       ((_Size == 0 || (iVar4 = memcmp(param_2,(void *)*plVar5,_Size), iVar4 == 0)))) {
      puVar2 = (undefined4 *)param_1[1];
      *(undefined1 *)(param_1 + 3) = 1;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 1;
        *(undefined1 *)(puVar2 + 1) = *param_3;
        *(undefined1 *)((longlong)param_1 + 0x19) = 1;
        return;
      }
      piVar3 = (int *)param_1[2];
      iVar4 = *piVar3;
      if (iVar4 == 1) {
        *param_3 = (char)piVar3[1];
        *(undefined1 *)((longlong)param_1 + 0x19) = 1;
      }
      else {
        if (iVar4 == 2) {
          iVar4 = piVar3[2];
          *(undefined1 *)((longlong)param_1 + 0x19) = 1;
          *param_3 = iVar4 != 0;
          return;
        }
        if (iVar4 == 3) {
          if ((float)piVar3[3] == 0.0) {
            *(undefined1 *)((longlong)param_1 + 0x19) = 1;
            *param_3 = 0;
            return;
          }
          *param_3 = 1;
          *(undefined1 *)((longlong)param_1 + 0x19) = 1;
          return;
        }
      }
    }
  }
  return;
}



/* ===== 1800f4760 FUN_1800f4760 ===== */

void FUN_1800f4760(longlong *param_1,undefined8 *param_2,uint *param_3)

{
  longlong *plVar1;
  size_t _Size;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  
  if ((char)param_1[3] == '\0') {
    plVar1 = (longlong *)*param_1;
    _Size = param_2[2];
    plVar6 = param_1;
    if (0xf < (ulonglong)plVar1[3]) {
      plVar6 = plVar1;
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    if (_Size == plVar1[2]) {
      if ((_Size != 0) && (iVar4 = memcmp(param_2,(void *)*plVar6,_Size), iVar4 != 0)) {
        return;
      }
      puVar2 = (undefined4 *)param_1[1];
      *(undefined1 *)(param_1 + 3) = 1;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 2;
        puVar2[2] = *param_3;
        *(undefined1 *)((longlong)param_1 + 0x19) = 1;
        return;
      }
      piVar3 = (int *)param_1[2];
      iVar4 = *piVar3;
      if (iVar4 == 2) {
        *param_3 = piVar3[2];
        *(undefined1 *)((longlong)param_1 + 0x19) = 1;
      }
      else {
        if (iVar4 == 3) {
          uVar5 = FUN_1804f3280(piVar3[3]);
          *param_3 = uVar5;
          *(undefined1 *)((longlong)param_1 + 0x19) = 1;
          return;
        }
        if (iVar4 == 1) {
          *(undefined1 *)((longlong)param_1 + 0x19) = 1;
          *param_3 = (uint)((char)piVar3[1] != '\0');
          return;
        }
      }
    }
  }
  return;
}



/* ===== 1800f4840 FUN_1800f4840 ===== */

void FUN_1800f4840(longlong *param_1,undefined8 *param_2,float *param_3)

{
  longlong *plVar1;
  size_t _Size;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  float fVar6;
  
  if ((char)param_1[3] == '\0') {
    plVar1 = (longlong *)*param_1;
    _Size = param_2[2];
    plVar5 = param_1;
    if (0xf < (ulonglong)plVar1[3]) {
      plVar5 = plVar1;
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    if (_Size == plVar1[2]) {
      if ((_Size != 0) && (iVar4 = memcmp(param_2,(void *)*plVar5,_Size), iVar4 != 0)) {
        return;
      }
      puVar2 = (undefined4 *)param_1[1];
      *(undefined1 *)(param_1 + 3) = 1;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 3;
        puVar2[3] = *param_3;
        *(undefined1 *)((longlong)param_1 + 0x19) = 1;
        return;
      }
      piVar3 = (int *)param_1[2];
      if (*piVar3 == 3) {
        fVar6 = (float)piVar3[3];
      }
      else {
        if (*piVar3 != 2) {
          return;
        }
        fVar6 = (float)piVar3[2];
      }
      if (((uint)fVar6 & 0x7f800000) != 0x7f800000) {
        *param_3 = fVar6;
        *(undefined1 *)((longlong)param_1 + 0x19) = 1;
      }
    }
  }
  return;
}



/* ===== 1800f4910 FUN_1800f4910 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800f4910(longlong *param_1,undefined8 *param_2,int *param_3)

{
  int *piVar1;
  float fVar2;
  longlong *plVar3;
  size_t _Size;
  float *pfVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *plVar17;
  float *pfVar18;
  bool bVar19;
  undefined1 auStack_168 [32];
  int local_148 [2];
  float local_140 [2];
  int local_138 [64];
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_168;
  if ((char)param_1[3] == '\0') {
    plVar3 = (longlong *)*param_1;
    _Size = param_2[2];
    plVar17 = param_1;
    if (0xf < (ulonglong)plVar3[3]) {
      plVar17 = plVar3;
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    if ((_Size == plVar3[2]) &&
       ((_Size == 0 || (iVar9 = memcmp(param_2,(void *)*plVar17,_Size), iVar9 == 0)))) {
      *(undefined1 *)(param_1 + 3) = 1;
      if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
        piVar12 = (int *)param_1[2];
        if (*piVar12 != 4) {
          return;
        }
        FUN_180540170(local_138,0,0x100);
        pfVar18 = *(float **)(piVar12 + 4);
        pfVar4 = *(float **)(piVar12 + 6);
        iVar9 = 0;
        local_38 = 0;
        while ((pfVar18 != pfVar4 && (iVar9 < 0x40))) {
          fVar2 = *pfVar18;
          if ((((uint)fVar2 & 0x7f800000) != 0x7f800000) &&
             ((DAT_1808ac34c <= fVar2 && (fVar2 <= DAT_1808accac)))) {
            bVar19 = false;
            iVar13 = 0;
            iVar16 = (int)fVar2;
            if (0 < iVar9) {
              do {
                if (bVar19) goto LAB_1800f4ad5;
                lVar11 = (longlong)iVar13;
                bVar19 = local_138[lVar11] == iVar16;
                iVar13 = iVar13 + 1;
              } while (iVar13 < iVar9);
              if (local_138[lVar11] == iVar16) goto LAB_1800f4ad5;
            }
            local_138[iVar9] = iVar16;
            iVar9 = local_38 + 1;
            local_38 = iVar9;
          }
LAB_1800f4ad5:
          pfVar18 = pfVar18 + 1;
        }
        lVar11 = 2;
        piVar12 = local_138;
        do {
          piVar10 = param_3 + 0x20;
          uVar5 = *(undefined8 *)(piVar12 + 2);
          uVar6 = *(undefined8 *)(piVar12 + 4);
          uVar7 = *(undefined8 *)(piVar12 + 6);
          piVar1 = piVar12 + 0x20;
          *(undefined8 *)param_3 = *(undefined8 *)piVar12;
          *(undefined8 *)(param_3 + 2) = uVar5;
          uVar5 = *(undefined8 *)(piVar12 + 8);
          uVar8 = *(undefined8 *)(piVar12 + 10);
          *(undefined8 *)(param_3 + 4) = uVar6;
          *(undefined8 *)(param_3 + 6) = uVar7;
          uVar6 = *(undefined8 *)(piVar12 + 0xc);
          uVar7 = *(undefined8 *)(piVar12 + 0xe);
          *(undefined8 *)(param_3 + 8) = uVar5;
          *(undefined8 *)(param_3 + 10) = uVar8;
          uVar5 = *(undefined8 *)(piVar12 + 0x10);
          uVar8 = *(undefined8 *)(piVar12 + 0x12);
          *(undefined8 *)(param_3 + 0xc) = uVar6;
          *(undefined8 *)(param_3 + 0xe) = uVar7;
          uVar6 = *(undefined8 *)(piVar12 + 0x14);
          uVar7 = *(undefined8 *)(piVar12 + 0x16);
          *(undefined8 *)(param_3 + 0x10) = uVar5;
          *(undefined8 *)(param_3 + 0x12) = uVar8;
          uVar5 = *(undefined8 *)(piVar12 + 0x18);
          uVar8 = *(undefined8 *)(piVar12 + 0x1a);
          *(undefined8 *)(param_3 + 0x14) = uVar6;
          *(undefined8 *)(param_3 + 0x16) = uVar7;
          uVar6 = *(undefined8 *)(piVar12 + 0x1c);
          uVar7 = *(undefined8 *)(piVar12 + 0x1e);
          *(undefined8 *)(param_3 + 0x18) = uVar5;
          *(undefined8 *)(param_3 + 0x1a) = uVar8;
          *(undefined8 *)(param_3 + 0x1c) = uVar6;
          *(undefined8 *)(param_3 + 0x1e) = uVar7;
          lVar11 = lVar11 + -1;
          piVar12 = piVar1;
          param_3 = piVar10;
        } while (lVar11 != 0);
        *piVar10 = *piVar1;
      }
      else {
        *(undefined4 *)param_1[1] = 4;
        uVar15 = 0;
        local_148[1] = 0x40;
        local_148[0] = 0;
        iVar9 = param_3[0x40];
        piVar12 = local_148;
        if (-1 < iVar9) {
          piVar12 = param_3 + 0x40;
        }
        piVar10 = local_148 + 1;
        if (iVar9 < 0x41) {
          piVar10 = piVar12;
        }
        iVar9 = *piVar10;
        lVar11 = param_1[1];
        if (*(longlong *)(lVar11 + 0x10) != *(longlong *)(lVar11 + 0x18)) {
          *(longlong *)(lVar11 + 0x18) = *(longlong *)(lVar11 + 0x10);
        }
        if (0 < iVar9) {
          do {
            local_140[0] = (float)param_3[uVar15];
            FUN_180066e60(param_1[1] + 0x10,local_140);
            uVar14 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar14;
          } while ((int)uVar14 < iVar9);
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x19) = 1;
    }
  }
  return;
}



/* ===== 1800f4b80 FUN_1800f4b80 ===== */

void FUN_1800f4b80(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    plVar3 = (longlong *)*param_2;
  }
  if (((5 < (ulonglong)param_2[2]) &&
      (plVar1 = (longlong *)
                thunk_FUN_1804e6890(plVar3,(longlong *)((longlong)plVar3 + 6),"binds.",6),
      plVar1 != (longlong *)((longlong)plVar3 + 6))) && (plVar1 == plVar3)) {
    return;
  }
  plVar3 = param_2 + 2;
  plVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    plVar1 = (longlong *)*param_2;
  }
  if (*plVar3 == 0xc) {
    lVar2 = *plVar1 + -0x63735f73646e6962;
    if (lVar2 == 0) {
      lVar2 = (ulonglong)*(uint *)(plVar1 + 1) - 0x656d6568;
    }
    if (lVar2 == 0) {
      return;
    }
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (longlong *)*param_2;
  }
  if ((*plVar3 != 8) || (*param_2 != 0x79656b5f756e656d)) {
    FUN_1800fef30();
    FUN_1800ff1a0();
  }
  return;
}



/* ===== 1800f4c90 FUN_1800f4c90 ===== */

void FUN_1800f4c90(void)

{
  FUN_1800f4b80();
  return;
}



/* ===== 1800f4ca0 FUN_1800f4ca0 ===== */

void FUN_1800f4ca0(void)

{
  FUN_1800f4b80();
  return;
}



/* ===== 1800f4cb0 FUN_1800f4cb0 ===== */

void FUN_1800f4cb0(void)

{
  FUN_1800f4b80();
  return;
}



/* ===== 1800f4cc0 FUN_1800f4cc0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800f4cc0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *_Str1;
  bool bVar10;
  float fVar11;
  float fVar12;
  float local_res8 [4];
  float local_res18 [2];
  float local_res20 [2];
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  for (puVar9 = *(undefined8 **)(param_1 + 0x48); puVar9 != puVar1; puVar9 = puVar9 + 0x10) {
    if ((ulonglong)puVar9[3] < 0x10) {
      puVar8 = puVar9;
    }
    else {
      puVar8 = (undefined8 *)*puVar9;
    }
    if ((puVar9[2] == 0x1f) &&
       (iVar4 = memcmp("visuals_world.view.override_fov",puVar8,0x1f), iVar4 == 0)) {
      if (puVar9 != (undefined8 *)0xffffffffffffffe0) {
        return;
      }
      break;
    }
  }
  if ((*(char *)(param_2 + 0x6ffc) != '\0') && (0.0 < *(float *)(param_2 + 0x7000))) {
    *(undefined1 *)(param_2 + 0x42d90) = 1;
    local_res20[0] = 1.89175e-43;
    local_res8[0] = 4.2039e-44;
    local_res18[0] = (float)FUN_1804f3280();
    pfVar7 = local_res8;
    if (0x1d < (int)local_res18[0]) {
      pfVar7 = local_res18;
    }
    pfVar6 = local_res20;
    if ((int)local_res18[0] < 0x88) {
      pfVar6 = pfVar7;
    }
    *(float *)(param_2 + 0x42d94) = *pfVar6;
  }
  if (*(char *)(param_2 + 0x72e8) != '\0') {
    if (0.0 < *(float *)(param_2 + 0x72f8)) {
      *(undefined1 *)(param_2 + 0x42db3) = 1;
      local_res20[0] = 1.47136e-43;
      local_res8[0] = 5.60519e-44;
      local_res18[0] = (float)FUN_1804f3280();
      pfVar7 = local_res8;
      if (0x27 < (int)local_res18[0]) {
        pfVar7 = local_res18;
      }
      pfVar6 = local_res20;
      if ((int)local_res18[0] < 0x6a) {
        pfVar6 = pfVar7;
      }
      *(float *)(param_2 + 0x42db4) = *pfVar6;
    }
    fVar2 = DAT_1808ace40;
    fVar11 = DAT_1808aca68;
    fVar12 = *(float *)(param_2 + 0x72fc);
    if (((fVar12 != 0.0) || (*(float *)(param_2 + 0x7300) != 0.0)) ||
       (*(float *)(param_2 + 0x7304) != 0.0)) {
      *(undefined1 *)(param_2 + 0x42dc8) = 1;
      fVar3 = DAT_1808ace58;
      local_res18[0] = 25.0;
      local_res8[0] = -25.0;
      pfVar7 = local_res8;
      if (fVar2 <= fVar12) {
        pfVar7 = (float *)(param_2 + 0x72fc);
      }
      pfVar6 = local_res18;
      if (fVar12 <= DAT_1808ac988) {
        pfVar6 = pfVar7;
      }
      *(float *)(param_2 + 0x42dcc) = *pfVar6;
      fVar12 = *(float *)(param_2 + 0x7300);
      local_res18[0] = 45.0;
      local_res8[0] = -45.0;
      pfVar7 = local_res8;
      if (fVar3 <= fVar12) {
        pfVar7 = (float *)(param_2 + 0x7300);
      }
      pfVar6 = local_res18;
      if (fVar12 <= fVar11) {
        pfVar6 = pfVar7;
      }
      *(float *)(param_2 + 0x42dd0) = *pfVar6;
      fVar12 = *(float *)(param_2 + 0x7304);
      local_res18[0] = 45.0;
      local_res8[0] = -45.0;
      pfVar7 = local_res8;
      if (fVar3 <= fVar12) {
        pfVar7 = (float *)(param_2 + 0x7304);
      }
      pfVar6 = local_res18;
      if (fVar12 <= fVar11) {
        pfVar6 = pfVar7;
      }
      *(float *)(param_2 + 0x42dd4) = *pfVar6;
    }
  }
  if (*(char *)(param_2 + 0x6e14) != '\0') {
    *(undefined1 *)(param_2 + 0x42df4) = 1;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x48);
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  do {
    if (puVar9 == puVar1) {
LAB_1800f4f79:
      _Str1 = (char *)(param_2 + 0x433a0);
      if (param_2 != param_2 + 0x3900) {
        do {
          if ((*_Str1 != '\0') && (iVar4 = strcmp(_Str1,"third_person.enabled"), iVar4 == 0)) {
            snprintf(_Str1,0x60,&DAT_1806d3198,"visuals_world.view.force_third_person");
          }
          _Str1 = _Str1 + 0xe4;
        } while (_Str1 != (char *)(param_2 + 0x46ca0));
      }
      if ((*(char *)(param_2 + 0x6d98) != '\0') && (0.0 < *(float *)(param_2 + 0x6d9c))) {
        fVar11 = *(float *)(param_2 + 0x6d9c) / _DAT_1808ac4c8;
        *(undefined1 *)(param_2 + 0x42d98) = 1;
        fVar12 = *(float *)(param_2 + 0x6da0);
        local_res8[0] = 0.0;
        local_res18[0] = 1.4013e-45;
        pfVar7 = local_res8;
        if (-1 < (int)fVar12) {
          pfVar7 = (float *)(param_2 + 0x6da0);
        }
        local_res20[0] = 3.50325e-43;
        pfVar6 = local_res18;
        if ((int)fVar12 < 2) {
          pfVar6 = pfVar7;
        }
        *(float *)(param_2 + 0x42d9c) = *pfVar6;
        local_res8[0] = 2.8026e-44;
        local_res18[0] = (float)FUN_1804f3280(fVar11 * DAT_1808acb08);
        pfVar7 = local_res8;
        if (0x13 < (int)local_res18[0]) {
          pfVar7 = local_res18;
        }
        pfVar6 = local_res20;
        if ((int)local_res18[0] < 0xfb) {
          pfVar6 = pfVar7;
        }
        *(float *)(param_2 + 0x42da0) = *pfVar6;
      }
      if (*(char *)(param_2 + 0x6f2c) != '\0') {
        *(undefined2 *)(param_2 + 0x42e00) = 0x101;
      }
      if (*(char *)(param_2 + 0x6f2e) != '\0') {
        *(undefined1 *)(param_2 + 0x42db1) = 0;
      }
      *(undefined1 *)(param_2 + 0x42e04) = *(undefined1 *)(param_2 + 0x225d4);
      *(undefined1 *)(param_2 + 0x42e18) = *(undefined1 *)(param_2 + 0x225d7);
      *(undefined1 *)(param_2 + 0x42e19) = *(undefined1 *)(param_2 + 0x225d6);
      *(undefined1 *)(param_2 + 0x42e1d) = *(undefined1 *)(param_2 + 0x225d8);
      *(undefined1 *)(param_2 + 0x42e1b) = *(undefined1 *)(param_2 + 0x225d9);
      *(undefined1 *)(param_2 + 0x42e1c) = *(undefined1 *)(param_2 + 0x225da);
      *(undefined1 *)(param_2 + 0x42eb0) = *(undefined1 *)(param_2 + 0x22540);
      *(undefined1 *)(param_2 + 0x42ec4) = *(undefined1 *)(param_2 + 0x22543);
      *(undefined1 *)(param_2 + 0x42ec5) = *(undefined1 *)(param_2 + 0x22542);
      *(undefined1 *)(param_2 + 0x42ec7) = *(undefined1 *)(param_2 + 0x22544);
      *(undefined1 *)(param_2 + 0x42e1e) = *(undefined1 *)(param_2 + 0x22654);
      *(undefined1 *)(param_2 + 0x42ec8) = *(undefined1 *)(param_2 + 0x225c0);
      if ((*(char *)(param_2 + 0x71ac) != '\0') || (*(char *)(param_2 + 0x71e4) != '\0')) {
        *(undefined1 *)(param_2 + 0x42f3c) = 1;
        bVar10 = *(char *)(param_2 + 0x71ac) == '\0';
        lVar5 = 0x71c1;
        if (bVar10) {
          lVar5 = 0x71f9;
        }
        *(undefined1 *)(param_2 + 0x42f50) = *(undefined1 *)(param_2 + lVar5);
        lVar5 = 0x71c2;
        if (bVar10) {
          lVar5 = 0x71fa;
        }
        *(undefined1 *)(param_2 + 0x42f51) = *(undefined1 *)(param_2 + lVar5);
        lVar5 = 0x71c4;
        if (bVar10) {
          lVar5 = 0x71fc;
        }
        *(undefined1 *)(param_2 + 0x42f53) = *(undefined1 *)(param_2 + lVar5);
        lVar5 = 0x71c5;
        if (bVar10) {
          lVar5 = 0x71fd;
        }
        *(undefined1 *)(param_2 + 0x42f52) = *(undefined1 *)(param_2 + lVar5);
      }
      *(undefined1 *)(param_2 + 0x42fa0) = *(undefined1 *)(param_2 + 0x7250);
      *(undefined1 *)(param_2 + 0x42fc8) = *(undefined1 *)(param_2 + 0x729c);
      if (*(char *)(param_2 + 0x7188) != '\0') {
        *(undefined1 *)(param_2 + 0x430f1) = 1;
        *(undefined1 *)(param_2 + 0x43138) = *(undefined1 *)(param_2 + 0x718a);
        *(undefined1 *)(param_2 + 0x43139) = *(undefined1 *)(param_2 + 0x7189);
      }
      *(undefined1 *)(param_2 + 0x4313c) = *(undefined1 *)(param_2 + 0x6c90);
      *(undefined1 *)(param_2 + 0x431d0) = *(undefined1 *)(param_2 + 0x6c91);
      if (*(char *)(param_2 + 0x6d88) != '\0') {
        *(undefined4 *)(param_2 + 0x431c0) = 1;
      }
      if (*(char *)(param_2 + 0x6fbc) == '\0') {
        if (*(char *)(param_2 + 0x6f2a) != '\0') {
          *(undefined4 *)(param_2 + 0x43140) = 2;
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x43140) = 1;
        *(undefined4 *)(param_2 + 0x43144) = 1;
      }
      *(undefined1 *)(param_2 + 0x431a4) = *(undefined1 *)(param_2 + 0x6de8);
      *(undefined1 *)(param_2 + 0x431e6) = *(undefined1 *)(param_2 + 0x6db4);
      if ((*(int *)(param_2 + 0x6c8c) - 1U < 2) &&
         (*(undefined1 *)(param_2 + 0x431e1) = 1, *(int *)(param_2 + 0x6c8c) == 2)) {
        *(undefined1 *)(param_2 + 0x431e2) = 1;
      }
      *(undefined1 *)(param_2 + 0x4321d) = *(undefined1 *)(param_2 + 0x6f29);
      *(undefined1 *)(param_2 + 0x4321e) = *(undefined1 *)(param_2 + 0x6f28);
      *(undefined1 *)(param_2 + 0x4321f) = *(undefined1 *)(param_2 + 0x6f2d);
      *(undefined1 *)(param_2 + 0x43224) = *(undefined1 *)(param_2 + 0x6f31);
      *(undefined1 *)(param_2 + 0x4321a) = *(undefined1 *)(param_2 + 0x6f2f);
      *(undefined1 *)(param_2 + 0x4321b) = *(undefined1 *)(param_2 + 0x6f30);
      if ((*(char *)(param_2 + 0x6f34) != '\0') && (DAT_1808ace88 < *(float *)(param_2 + 0x6f38))) {
        fVar12 = *(float *)(param_2 + 0x6f38) * DAT_1808acb08;
        *(undefined4 *)(param_2 + 0x43228) = 2;
        local_res20[0] = 4.90454e-43;
        local_res8[0] = -NAN;
        local_res18[0] = (float)FUN_1804f3280(fVar12);
        pfVar7 = local_res8;
        if (-0x15f < (int)local_res18[0]) {
          pfVar7 = local_res18;
        }
        pfVar6 = local_res20;
        if ((int)local_res18[0] < 0x15f) {
          pfVar6 = pfVar7;
        }
        *(float *)(param_2 + 0x4322c) = *pfVar6;
      }
      *(undefined1 *)(param_2 + 0x43234) = *(undefined1 *)(param_2 + 0x701c);
      *(undefined1 *)(param_2 + 0x432ac) = *(undefined1 *)(param_2 + 0x6ea4);
      *(undefined1 *)(param_2 + 0x43328) = *(undefined1 *)(param_2 + 0x7120);
      *(undefined1 *)(param_2 + 0x22c38) = *(undefined1 *)(param_2 + 0x6f24);
      *(undefined1 *)(param_2 + 0x22c37) = *(undefined1 *)(param_2 + 0x6f25);
      *(undefined1 *)(param_2 + 0x22c30) = *(undefined1 *)(param_2 + 0x6f26);
      *(undefined1 *)(param_2 + 0x22c35) = *(undefined1 *)(param_2 + 0x6f2b);
      *(undefined2 *)(param_2 + 0x6f2a) = 0;
      *(undefined2 *)(param_2 + 0x6f25) = 0;
      *(undefined1 *)(param_2 + 0x6f24) = 0;
      *(undefined1 *)(param_2 + 0x6ffc) = 0;
      *(undefined1 *)(param_2 + 0x72e8) = 0;
      *(undefined1 *)(param_2 + 0x6e14) = 0;
      *(undefined1 *)(param_2 + 0x6d98) = 0;
      *(undefined1 *)(param_2 + 0x6c90) = 0;
      *(undefined1 *)(param_2 + 0x6d88) = 0;
      *(undefined4 *)(param_2 + 0x6c8c) = 0;
      *(undefined2 *)(param_2 + 0x6f2d) = 0;
      *(undefined1 *)(param_2 + 0x6f2c) = 0;
      *(undefined2 *)(param_2 + 0x6f30) = 0;
      *(undefined2 *)(param_2 + 0x6f28) = 0;
      *(undefined1 *)(param_2 + 0x6f2f) = 0;
      *(undefined1 *)(param_2 + 0x6f34) = 0;
      *(undefined1 *)(param_2 + 0x6fbc) = 0;
      *(undefined1 *)(param_2 + 0x6de8) = 0;
      *(undefined1 *)(param_2 + 0x6db4) = 0;
      *(undefined1 *)(param_2 + 0x701c) = 0;
      *(undefined1 *)(param_2 + 0x6ea4) = 0;
      *(undefined1 *)(param_2 + 0x7120) = 0;
      *(undefined1 *)(param_2 + 0x22540) = 0;
      *(undefined1 *)(param_2 + 0x225d4) = 0;
      *(undefined1 *)(param_2 + 0x225c0) = 0;
      *(undefined1 *)(param_2 + 0x22654) = 0;
      *(undefined1 *)(param_2 + 0x71e4) = 0;
      *(undefined1 *)(param_2 + 0x71ac) = 0;
      *(undefined1 *)(param_2 + 0x729c) = 0;
      *(undefined1 *)(param_2 + 0x7250) = 0;
      *(undefined1 *)(param_2 + 0x7188) = 0;
      return;
    }
    if ((ulonglong)puVar9[3] < 0x10) {
      puVar8 = puVar9;
    }
    else {
      puVar8 = (undefined8 *)*puVar9;
    }
    if ((puVar9[2] == 0x15) && (iVar4 = memcmp("third_person.distance",puVar8,0x15), iVar4 == 0)) {
      if (puVar9 != (undefined8 *)0xffffffffffffffe0) {
        local_res20[0] = 3.50325e-43;
        local_res8[0] = 2.10195e-44;
        local_res18[0] = (float)FUN_1804f3280(*(undefined4 *)(param_2 + 0x6e18));
        pfVar7 = local_res8;
        if (0xe < (int)local_res18[0]) {
          pfVar7 = local_res18;
        }
        pfVar6 = local_res20;
        if ((int)local_res18[0] < 0xfb) {
          pfVar6 = pfVar7;
        }
        *(float *)(param_2 + 0x42df8) = *pfVar6;
      }
      goto LAB_1800f4f79;
    }
    puVar9 = puVar9 + 0x10;
  } while( true );
}



/* ===== 1800f5490 FUN_1800f5490 ===== */

void FUN_1800f5490(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  int local_res8 [2];
  int local_res10 [2];
  int local_178 [16];
  undefined1 local_138 [192];
  undefined4 local_78;
  undefined8 local_38;
  
  local_res10[0] = 0x40;
  local_res8[0] = 1;
  piVar14 = local_res8;
  if (0 < *param_1) {
    piVar14 = param_1;
  }
  piVar16 = local_res10;
  if (*param_1 < 0x41) {
    piVar16 = piVar14;
  }
  *param_1 = *piVar16;
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
  FUN_180540170(local_178,0,0x100);
  local_78 = 0;
  lVar19 = 2;
  piVar14 = local_178;
  piVar16 = param_1 + 0x11;
  do {
    piVar15 = piVar16 + 0x20;
    uVar2 = *(undefined8 *)(piVar14 + 2);
    uVar10 = *(undefined8 *)(piVar14 + 4);
    uVar11 = *(undefined8 *)(piVar14 + 6);
    piVar17 = piVar14 + 0x20;
    *(undefined8 *)piVar16 = *(undefined8 *)piVar14;
    *(undefined8 *)(piVar16 + 2) = uVar2;
    uVar2 = *(undefined8 *)(piVar14 + 8);
    uVar12 = *(undefined8 *)(piVar14 + 10);
    *(undefined8 *)(piVar16 + 4) = uVar10;
    *(undefined8 *)(piVar16 + 6) = uVar11;
    uVar10 = *(undefined8 *)(piVar14 + 0xc);
    uVar11 = *(undefined8 *)(piVar14 + 0xe);
    *(undefined8 *)(piVar16 + 8) = uVar2;
    *(undefined8 *)(piVar16 + 10) = uVar12;
    uVar2 = *(undefined8 *)(piVar14 + 0x10);
    uVar12 = *(undefined8 *)(piVar14 + 0x12);
    *(undefined8 *)(piVar16 + 0xc) = uVar10;
    *(undefined8 *)(piVar16 + 0xe) = uVar11;
    uVar10 = *(undefined8 *)(piVar14 + 0x14);
    uVar11 = *(undefined8 *)(piVar14 + 0x16);
    *(undefined8 *)(piVar16 + 0x10) = uVar2;
    *(undefined8 *)(piVar16 + 0x12) = uVar12;
    iVar21 = piVar14[0x18];
    iVar1 = piVar14[0x19];
    iVar3 = piVar14[0x1a];
    iVar4 = piVar14[0x1b];
    *(undefined8 *)(piVar16 + 0x14) = uVar10;
    *(undefined8 *)(piVar16 + 0x16) = uVar11;
    iVar5 = piVar14[0x1c];
    iVar6 = piVar14[0x1d];
    iVar7 = piVar14[0x1e];
    iVar8 = piVar14[0x1f];
    piVar16[0x18] = iVar21;
    piVar16[0x19] = iVar1;
    piVar16[0x1a] = iVar3;
    piVar16[0x1b] = iVar4;
    piVar16[0x1c] = iVar5;
    piVar16[0x1d] = iVar6;
    piVar16[0x1e] = iVar7;
    piVar16[0x1f] = iVar8;
    lVar19 = lVar19 + -1;
    piVar14 = piVar17;
    piVar16 = piVar15;
  } while (lVar19 != 0);
  uVar22 = 0;
  *piVar15 = *piVar17;
  lVar19 = 0;
  do {
    local_res10[0] = 0x40;
    piVar16 = param_1 + uVar22 * 0x52 + 0x51;
    local_res8[0] = 0;
    *(undefined1 *)(uVar22 * 0x148 + 0x43 + (longlong)param_1) = 0;
    piVar14 = local_res8;
    if (-1 < *piVar16) {
      piVar14 = piVar16;
    }
    piVar15 = local_res10;
    if (*piVar16 < 0x41) {
      piVar15 = piVar14;
    }
    *piVar16 = *piVar15;
    iVar21 = (int)uVar22;
    if (*param_1 <= iVar21) {
      local_178[0] = 0;
      local_178[1] = 0;
      local_178[2] = 0;
      local_178[3] = 0;
      local_178[4] = 0;
      local_178[5] = 0;
      local_178[6] = 0;
      local_178[7] = 0;
      local_178[8] = 0;
      local_178[9] = 0;
      local_178[10] = 0;
      local_178[0xb] = 0;
      local_178[0xc] = 0;
      local_178[0xd] = 0;
      local_178[0xe] = 0;
      local_178[0xf] = 0;
      FUN_180540170(local_138,0,0x100);
      local_38 = 0;
      lVar20 = 2;
      piVar14 = local_178;
      piVar16 = param_1 + uVar22 * 0x52 + 1;
      do {
        piVar17 = piVar16;
        piVar15 = piVar14;
        uVar2 = *(undefined8 *)(piVar15 + 2);
        uVar10 = *(undefined8 *)(piVar15 + 4);
        uVar11 = *(undefined8 *)(piVar15 + 6);
        *(undefined8 *)piVar17 = *(undefined8 *)piVar15;
        *(undefined8 *)(piVar17 + 2) = uVar2;
        uVar2 = *(undefined8 *)(piVar15 + 8);
        uVar12 = *(undefined8 *)(piVar15 + 10);
        *(undefined8 *)(piVar17 + 4) = uVar10;
        *(undefined8 *)(piVar17 + 6) = uVar11;
        uVar10 = *(undefined8 *)(piVar15 + 0xc);
        uVar11 = *(undefined8 *)(piVar15 + 0xe);
        *(undefined8 *)(piVar17 + 8) = uVar2;
        *(undefined8 *)(piVar17 + 10) = uVar12;
        uVar2 = *(undefined8 *)(piVar15 + 0x10);
        uVar12 = *(undefined8 *)(piVar15 + 0x12);
        *(undefined8 *)(piVar17 + 0xc) = uVar10;
        *(undefined8 *)(piVar17 + 0xe) = uVar11;
        uVar10 = *(undefined8 *)(piVar15 + 0x14);
        uVar11 = *(undefined8 *)(piVar15 + 0x16);
        *(undefined8 *)(piVar17 + 0x10) = uVar2;
        *(undefined8 *)(piVar17 + 0x12) = uVar12;
        uVar2 = *(undefined8 *)(piVar15 + 0x18);
        uVar12 = *(undefined8 *)(piVar15 + 0x1a);
        *(undefined8 *)(piVar17 + 0x14) = uVar10;
        *(undefined8 *)(piVar17 + 0x16) = uVar11;
        uVar10 = *(undefined8 *)(piVar15 + 0x1c);
        uVar11 = *(undefined8 *)(piVar15 + 0x1e);
        *(undefined8 *)(piVar17 + 0x18) = uVar2;
        *(undefined8 *)(piVar17 + 0x1a) = uVar12;
        *(undefined8 *)(piVar17 + 0x1c) = uVar10;
        *(undefined8 *)(piVar17 + 0x1e) = uVar11;
        lVar20 = lVar20 + -1;
        piVar14 = piVar15 + 0x20;
        piVar16 = piVar17 + 0x20;
      } while (lVar20 != 0);
      uVar2 = *(undefined8 *)(piVar15 + 0x22);
      uVar10 = *(undefined8 *)(piVar15 + 0x24);
      uVar11 = *(undefined8 *)(piVar15 + 0x26);
      *(undefined8 *)(piVar17 + 0x20) = *(undefined8 *)(piVar15 + 0x20);
      *(undefined8 *)(piVar17 + 0x22) = uVar2;
      iVar1 = piVar15[0x28];
      iVar3 = piVar15[0x29];
      iVar4 = piVar15[0x2a];
      iVar5 = piVar15[0x2b];
      *(undefined8 *)(piVar17 + 0x24) = uVar10;
      *(undefined8 *)(piVar17 + 0x26) = uVar11;
      iVar6 = piVar15[0x2c];
      iVar7 = piVar15[0x2d];
      iVar8 = piVar15[0x2e];
      iVar9 = piVar15[0x2f];
      uVar2 = *(undefined8 *)(piVar15 + 0x30);
      piVar17[0x28] = iVar1;
      piVar17[0x29] = iVar3;
      piVar17[0x2a] = iVar4;
      piVar17[0x2b] = iVar5;
      piVar17[0x2c] = iVar6;
      piVar17[0x2d] = iVar7;
      piVar17[0x2e] = iVar8;
      piVar17[0x2f] = iVar9;
      *(undefined8 *)(piVar17 + 0x30) = uVar2;
    }
    *(undefined1 *)(uVar22 * 0x148 + 0x18b + (longlong)param_1) = 0;
    piVar16 = param_1 + uVar22 * 0x52 + 0xa3;
    piVar14 = local_res8;
    if (-1 < *piVar16) {
      piVar14 = piVar16;
    }
    piVar15 = local_res10;
    if (*piVar16 < 0x41) {
      piVar15 = piVar14;
    }
    *piVar16 = *piVar15;
    if (*param_1 <= iVar21 + 1) {
      local_178[0] = 0;
      local_178[1] = 0;
      local_178[2] = 0;
      local_178[3] = 0;
      local_178[4] = 0;
      local_178[5] = 0;
      local_178[6] = 0;
      local_178[7] = 0;
      local_178[8] = 0;
      local_178[9] = 0;
      local_178[10] = 0;
      local_178[0xb] = 0;
      local_178[0xc] = 0;
      local_178[0xd] = 0;
      local_178[0xe] = 0;
      local_178[0xf] = 0;
      FUN_180540170(local_138,0,0x100);
      local_38 = 0;
      lVar20 = 2;
      piVar14 = local_178;
      piVar16 = param_1 + uVar22 * 0x52 + 0x53;
      do {
        piVar17 = piVar16;
        piVar15 = piVar14;
        uVar2 = *(undefined8 *)(piVar15 + 2);
        uVar10 = *(undefined8 *)(piVar15 + 4);
        uVar11 = *(undefined8 *)(piVar15 + 6);
        *(undefined8 *)piVar17 = *(undefined8 *)piVar15;
        *(undefined8 *)(piVar17 + 2) = uVar2;
        uVar2 = *(undefined8 *)(piVar15 + 8);
        uVar12 = *(undefined8 *)(piVar15 + 10);
        *(undefined8 *)(piVar17 + 4) = uVar10;
        *(undefined8 *)(piVar17 + 6) = uVar11;
        uVar10 = *(undefined8 *)(piVar15 + 0xc);
        uVar11 = *(undefined8 *)(piVar15 + 0xe);
        *(undefined8 *)(piVar17 + 8) = uVar2;
        *(undefined8 *)(piVar17 + 10) = uVar12;
        uVar2 = *(undefined8 *)(piVar15 + 0x10);
        uVar12 = *(undefined8 *)(piVar15 + 0x12);
        *(undefined8 *)(piVar17 + 0xc) = uVar10;
        *(undefined8 *)(piVar17 + 0xe) = uVar11;
        uVar10 = *(undefined8 *)(piVar15 + 0x14);
        uVar11 = *(undefined8 *)(piVar15 + 0x16);
        *(undefined8 *)(piVar17 + 0x10) = uVar2;
        *(undefined8 *)(piVar17 + 0x12) = uVar12;
        uVar2 = *(undefined8 *)(piVar15 + 0x18);
        uVar12 = *(undefined8 *)(piVar15 + 0x1a);
        *(undefined8 *)(piVar17 + 0x14) = uVar10;
        *(undefined8 *)(piVar17 + 0x16) = uVar11;
        uVar10 = *(undefined8 *)(piVar15 + 0x1c);
        uVar11 = *(undefined8 *)(piVar15 + 0x1e);
        *(undefined8 *)(piVar17 + 0x18) = uVar2;
        *(undefined8 *)(piVar17 + 0x1a) = uVar12;
        *(undefined8 *)(piVar17 + 0x1c) = uVar10;
        *(undefined8 *)(piVar17 + 0x1e) = uVar11;
        lVar20 = lVar20 + -1;
        piVar14 = piVar15 + 0x20;
        piVar16 = piVar17 + 0x20;
      } while (lVar20 != 0);
      uVar2 = *(undefined8 *)(piVar15 + 0x22);
      uVar10 = *(undefined8 *)(piVar15 + 0x24);
      uVar11 = *(undefined8 *)(piVar15 + 0x26);
      *(undefined8 *)(piVar17 + 0x20) = *(undefined8 *)(piVar15 + 0x20);
      *(undefined8 *)(piVar17 + 0x22) = uVar2;
      iVar1 = piVar15[0x28];
      iVar3 = piVar15[0x29];
      iVar4 = piVar15[0x2a];
      iVar5 = piVar15[0x2b];
      *(undefined8 *)(piVar17 + 0x24) = uVar10;
      *(undefined8 *)(piVar17 + 0x26) = uVar11;
      iVar6 = piVar15[0x2c];
      iVar7 = piVar15[0x2d];
      iVar8 = piVar15[0x2e];
      iVar9 = piVar15[0x2f];
      uVar2 = *(undefined8 *)(piVar15 + 0x30);
      piVar17[0x28] = iVar1;
      piVar17[0x29] = iVar3;
      piVar17[0x2a] = iVar4;
      piVar17[0x2b] = iVar5;
      piVar17[0x2c] = iVar6;
      piVar17[0x2d] = iVar7;
      piVar17[0x2e] = iVar8;
      piVar17[0x2f] = iVar9;
      *(undefined8 *)(piVar17 + 0x30) = uVar2;
    }
    *(undefined1 *)((longlong)param_1 + lVar19 + 0x2d3) = 0;
    iVar1 = *(int *)((longlong)param_1 + lVar19 + 0x3d4);
    piVar14 = local_res8;
    if (-1 < iVar1) {
      piVar14 = (int *)((longlong)param_1 + lVar19 + 0x3d4);
    }
    piVar16 = local_res10;
    if (iVar1 < 0x41) {
      piVar16 = piVar14;
    }
    *(int *)((longlong)param_1 + lVar19 + 0x3d4) = *piVar16;
    if (*param_1 <= iVar21 + 2) {
      local_178[0] = 0;
      local_178[1] = 0;
      local_178[2] = 0;
      local_178[3] = 0;
      local_178[4] = 0;
      local_178[5] = 0;
      local_178[6] = 0;
      local_178[7] = 0;
      local_178[8] = 0;
      local_178[9] = 0;
      local_178[10] = 0;
      local_178[0xb] = 0;
      local_178[0xc] = 0;
      local_178[0xd] = 0;
      local_178[0xe] = 0;
      local_178[0xf] = 0;
      FUN_180540170(local_138,0,0x100);
      local_38 = 0;
      lVar20 = 2;
      piVar14 = local_178;
      puVar13 = (undefined8 *)((longlong)param_1 + lVar19 + 0x294);
      do {
        puVar18 = puVar13;
        piVar16 = piVar14;
        uVar2 = *(undefined8 *)(piVar16 + 2);
        uVar10 = *(undefined8 *)(piVar16 + 4);
        uVar11 = *(undefined8 *)(piVar16 + 6);
        *puVar18 = *(undefined8 *)piVar16;
        puVar18[1] = uVar2;
        uVar2 = *(undefined8 *)(piVar16 + 8);
        uVar12 = *(undefined8 *)(piVar16 + 10);
        puVar18[2] = uVar10;
        puVar18[3] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0xc);
        uVar11 = *(undefined8 *)(piVar16 + 0xe);
        puVar18[4] = uVar2;
        puVar18[5] = uVar12;
        uVar2 = *(undefined8 *)(piVar16 + 0x10);
        uVar12 = *(undefined8 *)(piVar16 + 0x12);
        puVar18[6] = uVar10;
        puVar18[7] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0x14);
        uVar11 = *(undefined8 *)(piVar16 + 0x16);
        puVar18[8] = uVar2;
        puVar18[9] = uVar12;
        uVar2 = *(undefined8 *)(piVar16 + 0x18);
        uVar12 = *(undefined8 *)(piVar16 + 0x1a);
        puVar18[10] = uVar10;
        puVar18[0xb] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0x1c);
        uVar11 = *(undefined8 *)(piVar16 + 0x1e);
        puVar18[0xc] = uVar2;
        puVar18[0xd] = uVar12;
        puVar18[0xe] = uVar10;
        puVar18[0xf] = uVar11;
        lVar20 = lVar20 + -1;
        piVar14 = piVar16 + 0x20;
        puVar13 = puVar18 + 0x10;
      } while (lVar20 != 0);
      uVar2 = *(undefined8 *)(piVar16 + 0x22);
      uVar10 = *(undefined8 *)(piVar16 + 0x24);
      uVar11 = *(undefined8 *)(piVar16 + 0x26);
      puVar18[0x10] = *(undefined8 *)(piVar16 + 0x20);
      puVar18[0x11] = uVar2;
      iVar1 = piVar16[0x28];
      iVar3 = piVar16[0x29];
      iVar4 = piVar16[0x2a];
      iVar5 = piVar16[0x2b];
      puVar18[0x12] = uVar10;
      puVar18[0x13] = uVar11;
      iVar6 = piVar16[0x2c];
      iVar7 = piVar16[0x2d];
      iVar8 = piVar16[0x2e];
      iVar9 = piVar16[0x2f];
      uVar2 = *(undefined8 *)(piVar16 + 0x30);
      *(int *)(puVar18 + 0x14) = iVar1;
      *(int *)((longlong)puVar18 + 0xa4) = iVar3;
      *(int *)(puVar18 + 0x15) = iVar4;
      *(int *)((longlong)puVar18 + 0xac) = iVar5;
      *(int *)(puVar18 + 0x16) = iVar6;
      *(int *)((longlong)puVar18 + 0xb4) = iVar7;
      *(int *)(puVar18 + 0x17) = iVar8;
      *(int *)((longlong)puVar18 + 0xbc) = iVar9;
      puVar18[0x18] = uVar2;
    }
    *(undefined1 *)((longlong)param_1 + lVar19 + 0x41b) = 0;
    iVar1 = *(int *)((longlong)param_1 + lVar19 + 0x51c);
    piVar14 = local_res8;
    if (-1 < iVar1) {
      piVar14 = (int *)((longlong)param_1 + lVar19 + 0x51c);
    }
    piVar16 = local_res10;
    if (iVar1 < 0x41) {
      piVar16 = piVar14;
    }
    *(int *)((longlong)param_1 + lVar19 + 0x51c) = *piVar16;
    if (*param_1 <= iVar21 + 3) {
      local_178[0] = 0;
      local_178[1] = 0;
      local_178[2] = 0;
      local_178[3] = 0;
      local_178[4] = 0;
      local_178[5] = 0;
      local_178[6] = 0;
      local_178[7] = 0;
      local_178[8] = 0;
      local_178[9] = 0;
      local_178[10] = 0;
      local_178[0xb] = 0;
      local_178[0xc] = 0;
      local_178[0xd] = 0;
      local_178[0xe] = 0;
      local_178[0xf] = 0;
      FUN_180540170(local_138,0,0x100);
      local_38 = 0;
      lVar20 = 2;
      piVar14 = local_178;
      puVar13 = (undefined8 *)((longlong)param_1 + lVar19 + 0x3dc);
      do {
        puVar18 = puVar13;
        piVar16 = piVar14;
        uVar2 = *(undefined8 *)(piVar16 + 2);
        uVar10 = *(undefined8 *)(piVar16 + 4);
        uVar11 = *(undefined8 *)(piVar16 + 6);
        *puVar18 = *(undefined8 *)piVar16;
        puVar18[1] = uVar2;
        uVar2 = *(undefined8 *)(piVar16 + 8);
        uVar12 = *(undefined8 *)(piVar16 + 10);
        puVar18[2] = uVar10;
        puVar18[3] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0xc);
        uVar11 = *(undefined8 *)(piVar16 + 0xe);
        puVar18[4] = uVar2;
        puVar18[5] = uVar12;
        uVar2 = *(undefined8 *)(piVar16 + 0x10);
        uVar12 = *(undefined8 *)(piVar16 + 0x12);
        puVar18[6] = uVar10;
        puVar18[7] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0x14);
        uVar11 = *(undefined8 *)(piVar16 + 0x16);
        puVar18[8] = uVar2;
        puVar18[9] = uVar12;
        uVar2 = *(undefined8 *)(piVar16 + 0x18);
        uVar12 = *(undefined8 *)(piVar16 + 0x1a);
        puVar18[10] = uVar10;
        puVar18[0xb] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0x1c);
        uVar11 = *(undefined8 *)(piVar16 + 0x1e);
        puVar18[0xc] = uVar2;
        puVar18[0xd] = uVar12;
        puVar18[0xe] = uVar10;
        puVar18[0xf] = uVar11;
        lVar20 = lVar20 + -1;
        piVar14 = piVar16 + 0x20;
        puVar13 = puVar18 + 0x10;
      } while (lVar20 != 0);
      uVar2 = *(undefined8 *)(piVar16 + 0x22);
      uVar10 = *(undefined8 *)(piVar16 + 0x24);
      uVar11 = *(undefined8 *)(piVar16 + 0x26);
      puVar18[0x10] = *(undefined8 *)(piVar16 + 0x20);
      puVar18[0x11] = uVar2;
      iVar1 = piVar16[0x28];
      iVar3 = piVar16[0x29];
      iVar4 = piVar16[0x2a];
      iVar5 = piVar16[0x2b];
      puVar18[0x12] = uVar10;
      puVar18[0x13] = uVar11;
      iVar6 = piVar16[0x2c];
      iVar7 = piVar16[0x2d];
      iVar8 = piVar16[0x2e];
      iVar9 = piVar16[0x2f];
      uVar2 = *(undefined8 *)(piVar16 + 0x30);
      *(int *)(puVar18 + 0x14) = iVar1;
      *(int *)((longlong)puVar18 + 0xa4) = iVar3;
      *(int *)(puVar18 + 0x15) = iVar4;
      *(int *)((longlong)puVar18 + 0xac) = iVar5;
      *(int *)(puVar18 + 0x16) = iVar6;
      *(int *)((longlong)puVar18 + 0xb4) = iVar7;
      *(int *)(puVar18 + 0x17) = iVar8;
      *(int *)((longlong)puVar18 + 0xbc) = iVar9;
      puVar18[0x18] = uVar2;
    }
    *(undefined1 *)((longlong)param_1 + lVar19 + 0x563) = 0;
    iVar1 = *(int *)((longlong)param_1 + lVar19 + 0x664);
    piVar14 = local_res8;
    if (-1 < iVar1) {
      piVar14 = (int *)((longlong)param_1 + lVar19 + 0x664);
    }
    piVar16 = local_res10;
    if (iVar1 < 0x41) {
      piVar16 = piVar14;
    }
    *(int *)((longlong)param_1 + lVar19 + 0x664) = *piVar16;
    if (*param_1 <= iVar21 + 4) {
      local_178[0] = 0;
      local_178[1] = 0;
      local_178[2] = 0;
      local_178[3] = 0;
      local_178[4] = 0;
      local_178[5] = 0;
      local_178[6] = 0;
      local_178[7] = 0;
      local_178[8] = 0;
      local_178[9] = 0;
      local_178[10] = 0;
      local_178[0xb] = 0;
      local_178[0xc] = 0;
      local_178[0xd] = 0;
      local_178[0xe] = 0;
      local_178[0xf] = 0;
      FUN_180540170(local_138,0,0x100);
      local_38 = 0;
      lVar20 = 2;
      piVar14 = local_178;
      puVar13 = (undefined8 *)((longlong)param_1 + lVar19 + 0x524);
      do {
        puVar18 = puVar13;
        piVar16 = piVar14;
        uVar2 = *(undefined8 *)(piVar16 + 2);
        uVar10 = *(undefined8 *)(piVar16 + 4);
        uVar11 = *(undefined8 *)(piVar16 + 6);
        *puVar18 = *(undefined8 *)piVar16;
        puVar18[1] = uVar2;
        uVar2 = *(undefined8 *)(piVar16 + 8);
        uVar12 = *(undefined8 *)(piVar16 + 10);
        puVar18[2] = uVar10;
        puVar18[3] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0xc);
        uVar11 = *(undefined8 *)(piVar16 + 0xe);
        puVar18[4] = uVar2;
        puVar18[5] = uVar12;
        uVar2 = *(undefined8 *)(piVar16 + 0x10);
        uVar12 = *(undefined8 *)(piVar16 + 0x12);
        puVar18[6] = uVar10;
        puVar18[7] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0x14);
        uVar11 = *(undefined8 *)(piVar16 + 0x16);
        puVar18[8] = uVar2;
        puVar18[9] = uVar12;
        uVar2 = *(undefined8 *)(piVar16 + 0x18);
        uVar12 = *(undefined8 *)(piVar16 + 0x1a);
        puVar18[10] = uVar10;
        puVar18[0xb] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0x1c);
        uVar11 = *(undefined8 *)(piVar16 + 0x1e);
        puVar18[0xc] = uVar2;
        puVar18[0xd] = uVar12;
        puVar18[0xe] = uVar10;
        puVar18[0xf] = uVar11;
        lVar20 = lVar20 + -1;
        piVar14 = piVar16 + 0x20;
        puVar13 = puVar18 + 0x10;
      } while (lVar20 != 0);
      uVar2 = *(undefined8 *)(piVar16 + 0x22);
      uVar10 = *(undefined8 *)(piVar16 + 0x24);
      uVar11 = *(undefined8 *)(piVar16 + 0x26);
      puVar18[0x10] = *(undefined8 *)(piVar16 + 0x20);
      puVar18[0x11] = uVar2;
      iVar1 = piVar16[0x28];
      iVar3 = piVar16[0x29];
      iVar4 = piVar16[0x2a];
      iVar5 = piVar16[0x2b];
      puVar18[0x12] = uVar10;
      puVar18[0x13] = uVar11;
      iVar6 = piVar16[0x2c];
      iVar7 = piVar16[0x2d];
      iVar8 = piVar16[0x2e];
      iVar9 = piVar16[0x2f];
      uVar2 = *(undefined8 *)(piVar16 + 0x30);
      *(int *)(puVar18 + 0x14) = iVar1;
      *(int *)((longlong)puVar18 + 0xa4) = iVar3;
      *(int *)(puVar18 + 0x15) = iVar4;
      *(int *)((longlong)puVar18 + 0xac) = iVar5;
      *(int *)(puVar18 + 0x16) = iVar6;
      *(int *)((longlong)puVar18 + 0xb4) = iVar7;
      *(int *)(puVar18 + 0x17) = iVar8;
      *(int *)((longlong)puVar18 + 0xbc) = iVar9;
      puVar18[0x18] = uVar2;
    }
    *(undefined1 *)((longlong)param_1 + lVar19 + 0x6ab) = 0;
    iVar1 = *(int *)((longlong)param_1 + lVar19 + 0x7ac);
    piVar14 = local_res8;
    if (-1 < iVar1) {
      piVar14 = (int *)((longlong)param_1 + lVar19 + 0x7ac);
    }
    piVar16 = local_res10;
    if (iVar1 < 0x41) {
      piVar16 = piVar14;
    }
    *(int *)((longlong)param_1 + lVar19 + 0x7ac) = *piVar16;
    if (*param_1 <= iVar21 + 5) {
      local_178[0] = 0;
      local_178[1] = 0;
      local_178[2] = 0;
      local_178[3] = 0;
      local_178[4] = 0;
      local_178[5] = 0;
      local_178[6] = 0;
      local_178[7] = 0;
      local_178[8] = 0;
      local_178[9] = 0;
      local_178[10] = 0;
      local_178[0xb] = 0;
      local_178[0xc] = 0;
      local_178[0xd] = 0;
      local_178[0xe] = 0;
      local_178[0xf] = 0;
      FUN_180540170(local_138,0,0x100);
      local_38 = 0;
      lVar20 = 2;
      piVar14 = local_178;
      puVar13 = (undefined8 *)((longlong)param_1 + lVar19 + 0x66c);
      do {
        puVar18 = puVar13;
        piVar16 = piVar14;
        uVar2 = *(undefined8 *)(piVar16 + 2);
        uVar10 = *(undefined8 *)(piVar16 + 4);
        uVar11 = *(undefined8 *)(piVar16 + 6);
        *puVar18 = *(undefined8 *)piVar16;
        puVar18[1] = uVar2;
        uVar2 = *(undefined8 *)(piVar16 + 8);
        uVar12 = *(undefined8 *)(piVar16 + 10);
        puVar18[2] = uVar10;
        puVar18[3] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0xc);
        uVar11 = *(undefined8 *)(piVar16 + 0xe);
        puVar18[4] = uVar2;
        puVar18[5] = uVar12;
        uVar2 = *(undefined8 *)(piVar16 + 0x10);
        uVar12 = *(undefined8 *)(piVar16 + 0x12);
        puVar18[6] = uVar10;
        puVar18[7] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0x14);
        uVar11 = *(undefined8 *)(piVar16 + 0x16);
        puVar18[8] = uVar2;
        puVar18[9] = uVar12;
        uVar2 = *(undefined8 *)(piVar16 + 0x18);
        uVar12 = *(undefined8 *)(piVar16 + 0x1a);
        puVar18[10] = uVar10;
        puVar18[0xb] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0x1c);
        uVar11 = *(undefined8 *)(piVar16 + 0x1e);
        puVar18[0xc] = uVar2;
        puVar18[0xd] = uVar12;
        puVar18[0xe] = uVar10;
        puVar18[0xf] = uVar11;
        lVar20 = lVar20 + -1;
        piVar14 = piVar16 + 0x20;
        puVar13 = puVar18 + 0x10;
      } while (lVar20 != 0);
      uVar2 = *(undefined8 *)(piVar16 + 0x22);
      uVar10 = *(undefined8 *)(piVar16 + 0x24);
      uVar11 = *(undefined8 *)(piVar16 + 0x26);
      puVar18[0x10] = *(undefined8 *)(piVar16 + 0x20);
      puVar18[0x11] = uVar2;
      iVar1 = piVar16[0x28];
      iVar3 = piVar16[0x29];
      iVar4 = piVar16[0x2a];
      iVar5 = piVar16[0x2b];
      puVar18[0x12] = uVar10;
      puVar18[0x13] = uVar11;
      iVar6 = piVar16[0x2c];
      iVar7 = piVar16[0x2d];
      iVar8 = piVar16[0x2e];
      iVar9 = piVar16[0x2f];
      uVar2 = *(undefined8 *)(piVar16 + 0x30);
      *(int *)(puVar18 + 0x14) = iVar1;
      *(int *)((longlong)puVar18 + 0xa4) = iVar3;
      *(int *)(puVar18 + 0x15) = iVar4;
      *(int *)((longlong)puVar18 + 0xac) = iVar5;
      *(int *)(puVar18 + 0x16) = iVar6;
      *(int *)((longlong)puVar18 + 0xb4) = iVar7;
      *(int *)(puVar18 + 0x17) = iVar8;
      *(int *)((longlong)puVar18 + 0xbc) = iVar9;
      puVar18[0x18] = uVar2;
    }
    *(undefined1 *)((longlong)param_1 + lVar19 + 0x7f3) = 0;
    iVar1 = *(int *)((longlong)param_1 + lVar19 + 0x8f4);
    piVar14 = local_res8;
    if (-1 < iVar1) {
      piVar14 = (int *)((longlong)param_1 + lVar19 + 0x8f4);
    }
    piVar16 = local_res10;
    if (iVar1 < 0x41) {
      piVar16 = piVar14;
    }
    *(int *)((longlong)param_1 + lVar19 + 0x8f4) = *piVar16;
    if (*param_1 <= iVar21 + 6) {
      local_178[0] = 0;
      local_178[1] = 0;
      local_178[2] = 0;
      local_178[3] = 0;
      local_178[4] = 0;
      local_178[5] = 0;
      local_178[6] = 0;
      local_178[7] = 0;
      local_178[8] = 0;
      local_178[9] = 0;
      local_178[10] = 0;
      local_178[0xb] = 0;
      local_178[0xc] = 0;
      local_178[0xd] = 0;
      local_178[0xe] = 0;
      local_178[0xf] = 0;
      FUN_180540170(local_138,0,0x100);
      local_38 = 0;
      lVar20 = 2;
      piVar14 = local_178;
      puVar13 = (undefined8 *)((longlong)param_1 + lVar19 + 0x7b4);
      do {
        puVar18 = puVar13;
        piVar16 = piVar14;
        uVar2 = *(undefined8 *)(piVar16 + 2);
        uVar10 = *(undefined8 *)(piVar16 + 4);
        uVar11 = *(undefined8 *)(piVar16 + 6);
        *puVar18 = *(undefined8 *)piVar16;
        puVar18[1] = uVar2;
        uVar2 = *(undefined8 *)(piVar16 + 8);
        uVar12 = *(undefined8 *)(piVar16 + 10);
        puVar18[2] = uVar10;
        puVar18[3] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0xc);
        uVar11 = *(undefined8 *)(piVar16 + 0xe);
        puVar18[4] = uVar2;
        puVar18[5] = uVar12;
        uVar2 = *(undefined8 *)(piVar16 + 0x10);
        uVar12 = *(undefined8 *)(piVar16 + 0x12);
        puVar18[6] = uVar10;
        puVar18[7] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0x14);
        uVar11 = *(undefined8 *)(piVar16 + 0x16);
        puVar18[8] = uVar2;
        puVar18[9] = uVar12;
        uVar2 = *(undefined8 *)(piVar16 + 0x18);
        uVar12 = *(undefined8 *)(piVar16 + 0x1a);
        puVar18[10] = uVar10;
        puVar18[0xb] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0x1c);
        uVar11 = *(undefined8 *)(piVar16 + 0x1e);
        puVar18[0xc] = uVar2;
        puVar18[0xd] = uVar12;
        puVar18[0xe] = uVar10;
        puVar18[0xf] = uVar11;
        lVar20 = lVar20 + -1;
        piVar14 = piVar16 + 0x20;
        puVar13 = puVar18 + 0x10;
      } while (lVar20 != 0);
      uVar2 = *(undefined8 *)(piVar16 + 0x22);
      uVar10 = *(undefined8 *)(piVar16 + 0x24);
      uVar11 = *(undefined8 *)(piVar16 + 0x26);
      puVar18[0x10] = *(undefined8 *)(piVar16 + 0x20);
      puVar18[0x11] = uVar2;
      iVar1 = piVar16[0x28];
      iVar3 = piVar16[0x29];
      iVar4 = piVar16[0x2a];
      iVar5 = piVar16[0x2b];
      puVar18[0x12] = uVar10;
      puVar18[0x13] = uVar11;
      iVar6 = piVar16[0x2c];
      iVar7 = piVar16[0x2d];
      iVar8 = piVar16[0x2e];
      iVar9 = piVar16[0x2f];
      uVar2 = *(undefined8 *)(piVar16 + 0x30);
      *(int *)(puVar18 + 0x14) = iVar1;
      *(int *)((longlong)puVar18 + 0xa4) = iVar3;
      *(int *)(puVar18 + 0x15) = iVar4;
      *(int *)((longlong)puVar18 + 0xac) = iVar5;
      *(int *)(puVar18 + 0x16) = iVar6;
      *(int *)((longlong)puVar18 + 0xb4) = iVar7;
      *(int *)(puVar18 + 0x17) = iVar8;
      *(int *)((longlong)puVar18 + 0xbc) = iVar9;
      puVar18[0x18] = uVar2;
    }
    *(undefined1 *)((longlong)param_1 + lVar19 + 0x93b) = 0;
    iVar1 = *(int *)((longlong)param_1 + lVar19 + 0xa3c);
    piVar14 = local_res8;
    if (-1 < iVar1) {
      piVar14 = (int *)((longlong)param_1 + lVar19 + 0xa3c);
    }
    piVar16 = local_res10;
    if (iVar1 < 0x41) {
      piVar16 = piVar14;
    }
    *(int *)((longlong)param_1 + lVar19 + 0xa3c) = *piVar16;
    if (*param_1 <= iVar21 + 7) {
      local_178[0] = 0;
      local_178[1] = 0;
      local_178[2] = 0;
      local_178[3] = 0;
      local_178[4] = 0;
      local_178[5] = 0;
      local_178[6] = 0;
      local_178[7] = 0;
      local_178[8] = 0;
      local_178[9] = 0;
      local_178[10] = 0;
      local_178[0xb] = 0;
      local_178[0xc] = 0;
      local_178[0xd] = 0;
      local_178[0xe] = 0;
      local_178[0xf] = 0;
      FUN_180540170(local_138,0,0x100);
      local_38 = 0;
      lVar20 = 2;
      piVar14 = local_178;
      puVar13 = (undefined8 *)((longlong)param_1 + lVar19 + 0x8fc);
      do {
        puVar18 = puVar13;
        piVar16 = piVar14;
        uVar2 = *(undefined8 *)(piVar16 + 2);
        uVar10 = *(undefined8 *)(piVar16 + 4);
        uVar11 = *(undefined8 *)(piVar16 + 6);
        *puVar18 = *(undefined8 *)piVar16;
        puVar18[1] = uVar2;
        uVar2 = *(undefined8 *)(piVar16 + 8);
        uVar12 = *(undefined8 *)(piVar16 + 10);
        puVar18[2] = uVar10;
        puVar18[3] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0xc);
        uVar11 = *(undefined8 *)(piVar16 + 0xe);
        puVar18[4] = uVar2;
        puVar18[5] = uVar12;
        uVar2 = *(undefined8 *)(piVar16 + 0x10);
        uVar12 = *(undefined8 *)(piVar16 + 0x12);
        puVar18[6] = uVar10;
        puVar18[7] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0x14);
        uVar11 = *(undefined8 *)(piVar16 + 0x16);
        puVar18[8] = uVar2;
        puVar18[9] = uVar12;
        uVar2 = *(undefined8 *)(piVar16 + 0x18);
        uVar12 = *(undefined8 *)(piVar16 + 0x1a);
        puVar18[10] = uVar10;
        puVar18[0xb] = uVar11;
        uVar10 = *(undefined8 *)(piVar16 + 0x1c);
        uVar11 = *(undefined8 *)(piVar16 + 0x1e);
        puVar18[0xc] = uVar2;
        puVar18[0xd] = uVar12;
        puVar18[0xe] = uVar10;
        puVar18[0xf] = uVar11;
        lVar20 = lVar20 + -1;
        piVar14 = piVar16 + 0x20;
        puVar13 = puVar18 + 0x10;
      } while (lVar20 != 0);
      uVar2 = *(undefined8 *)(piVar16 + 0x22);
      uVar10 = *(undefined8 *)(piVar16 + 0x24);
      uVar11 = *(undefined8 *)(piVar16 + 0x26);
      puVar18[0x10] = *(undefined8 *)(piVar16 + 0x20);
      puVar18[0x11] = uVar2;
      iVar21 = piVar16[0x28];
      iVar1 = piVar16[0x29];
      iVar3 = piVar16[0x2a];
      iVar4 = piVar16[0x2b];
      puVar18[0x12] = uVar10;
      puVar18[0x13] = uVar11;
      iVar5 = piVar16[0x2c];
      iVar6 = piVar16[0x2d];
      iVar7 = piVar16[0x2e];
      iVar8 = piVar16[0x2f];
      uVar2 = *(undefined8 *)(piVar16 + 0x30);
      *(int *)(puVar18 + 0x14) = iVar21;
      *(int *)((longlong)puVar18 + 0xa4) = iVar1;
      *(int *)(puVar18 + 0x15) = iVar3;
      *(int *)((longlong)puVar18 + 0xac) = iVar4;
      *(int *)(puVar18 + 0x16) = iVar5;
      *(int *)((longlong)puVar18 + 0xb4) = iVar6;
      *(int *)(puVar18 + 0x17) = iVar7;
      *(int *)((longlong)puVar18 + 0xbc) = iVar8;
      puVar18[0x18] = uVar2;
    }
    uVar22 = uVar22 + 8;
    lVar19 = lVar19 + 0xa40;
  } while (uVar22 < 0x40);
  return;
}



/* ===== 1800f5e20 FUN_1800f5e20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800f5e20(undefined8 *param_1,int param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [32];
  undefined8 *local_60;
  longlong local_58 [8];
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0xf;
  local_58[4] = 0;
  local_18 = '\x01';
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0xf;
  local_58[0] = 0;
  local_60 = param_1;
  if (param_2 == 0) {
    FUN_1801058a0(local_58 + 4,local_58,param_3 + 0x422b4);
  }
  else {
    FUN_180105af0(local_58 + 4,local_58,param_3 + 0x3a7d8,param_3 + 0x3c0d8);
  }
  if ((ulonglong)local_58[3] < 0x10) {
LAB_1800f5ee2:
    puVar4 = auStack_88;
    if (local_18 != '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 3;
      param_1[3] = 0xf;
      *(short *)param_1 = (short)DAT_1806f2b08;
      *(char *)((longlong)param_1 + 2) = (char)((uint)DAT_1806f2b08 >> 0x10);
      *(undefined1 *)((longlong)param_1 + 3) = 0;
      puVar4 = auStack_88;
      goto LAB_1800f5f32;
    }
  }
  else {
    uVar3 = local_58[3] + 1;
    lVar2 = local_58[0];
    if (uVar3 < 0x1000) {
LAB_1800f5edd:
      thunk_FUN_1803d64e0(lVar2,uVar3);
      goto LAB_1800f5ee2;
    }
    lVar2 = *(longlong *)(local_58[0] + -8);
    if ((local_58[0] - lVar2) - 8U < 0x20) {
      uVar3 = local_58[3] + 0x28;
      goto LAB_1800f5edd;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_80;
  }
  *(undefined8 *)(puVar4 + -8) = 0x1800f5f31;
  FUN_180073a70(param_1,local_58 + 4,&DAT_1806e6c08);
LAB_1800f5f32:
  *(undefined8 *)(puVar4 + -8) = 0x1800f5f3b;
  FUN_18000f890(local_58 + 4);
  *(undefined8 *)(puVar4 + -8) = 0x1800f5f4a;
  return param_1;
}



/* ===== 1800f5f60 FUN_1800f5f60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001800f603d) */

void FUN_1800f5f60(ulonglong param_1,longlong param_2,int param_3)

{
  size_t *psVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  size_t sVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  char *****pppppcVar15;
  undefined8 *****pppppuVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *_Buf2;
  char *****_Str2;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uint uVar27;
  uint uVar28;
  char *pcVar29;
  longlong lVar30;
  char *pcVar31;
  undefined8 uStack_260;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [24];
  undefined4 local_238;
  undefined8 local_228;
  int local_220;
  int local_21c;
  uint local_218;
  longlong local_210;
  int local_208;
  ulonglong local_200;
  undefined **local_1f8;
  char *local_1f0;
  undefined **local_1e8;
  ulonglong local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  ulonglong local_1c8;
  char *****local_1c0;
  undefined8 uStack_1b8;
  ulonglong local_1b0;
  ulonglong uStack_1a8;
  undefined8 *****local_1a0;
  longlong lStack_198;
  longlong local_190;
  ulonglong uStack_188;
  ulonglong local_180;
  ulonglong uStack_178;
  undefined8 local_170;
  ulonglong local_168;
  char *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  ulonglong local_148;
  longlong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong uStack_118;
  ulonglong local_110;
  ulonglong uStack_108;
  ulonglong local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  puVar20 = auStack_258;
  puVar21 = auStack_258;
  puVar22 = auStack_258;
  puVar25 = auStack_258;
  puVar23 = auStack_258;
  puVar24 = auStack_258;
  local_40 = DAT_180919500 ^ (ulonglong)auStack_258;
  uVar27 = 0;
  local_228 = local_228 & 0xffffffff00000000;
  local_1f8 = &PTR_s_Autosnipers_1805ea210;
  if (param_3 != 0) {
    local_1f8 = &PTR_s_Pistols_1805e79d0;
  }
  local_208 = 0xb;
  if (param_3 != 0) {
    local_208 = 7;
  }
  local_1e8 = &PTR_s_pistols_1805e7d48;
  if (param_3 == 0) {
    local_1e8 = &PTR_s_autosnipers_1805e7cf0;
  }
  uVar19 = 0;
  local_218 = 0;
  local_1f0 = "legitbot.";
  if (param_3 == 0) {
    local_1f0 = "ragebot.selection.";
  }
  local_220 = param_3;
  local_210 = param_2;
  local_200 = param_1;
LAB_1800f6018:
  uVar11 = local_200;
  local_21c = (int)uVar19;
  if (param_3 == 0) {
    local_21c = (local_208 - local_21c) + -1;
    pcVar29 = local_1e8[10 - uVar19];
    local_160 = (char *)0x0;
    uStack_158 = 0;
    local_150 = 0;
    local_148 = 0;
    local_160 = (char *)FUN_18000fb70(0x20);
    uVar10 = s_ragebot_selection__1806eabb8._8_8_;
    local_150 = 0x12;
    local_148 = 0x1f;
    *(undefined8 *)local_160 = s_ragebot_selection__1806eabb8._0_8_;
    *(undefined8 *)(local_160 + 8) = uVar10;
    *(undefined2 *)(local_160 + 0x10) = s_ragebot_selection__1806eabb8._16_2_;
    local_160[0x12] = '\0';
    local_228 = CONCAT44(local_228._4_4_,uVar27) | 1;
    sVar7 = strlen(pcVar29);
    puVar8 = (ulonglong *)FUN_1800134a0(&local_160,pcVar29,sVar7);
    local_100 = *puVar8;
    uStack_f8 = puVar8[1];
    local_f0 = puVar8[2];
    uStack_e8 = puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    *(undefined1 *)puVar8 = 0;
    local_228 = CONCAT44(local_228._4_4_,uVar27) | 0x403;
    FUN_180042850(&local_1c0,&local_100,&DAT_1806e6f24);
    uVar27 = uVar27 | 0x403;
  }
  else {
    pcVar29 = local_1e8[uVar19];
    local_170 = 9;
    local_168 = 0xf;
    local_180._0_1_ = s_legitbot__1806eaba8[0];
    local_180._1_1_ = s_legitbot__1806eaba8[1];
    local_180._2_1_ = s_legitbot__1806eaba8[2];
    local_180._3_1_ = s_legitbot__1806eaba8[3];
    local_180._4_1_ = s_legitbot__1806eaba8[4];
    local_180._5_1_ = s_legitbot__1806eaba8[5];
    local_180._6_1_ = s_legitbot__1806eaba8[6];
    local_180._7_1_ = s_legitbot__1806eaba8[7];
    uStack_178 = (ulonglong)(byte)s_legitbot__1806eaba8[8];
    local_228 = CONCAT44(local_228._4_4_,uVar27) | 4;
    sVar7 = strlen(pcVar29);
    puVar8 = (ulonglong *)FUN_1800134a0(&local_180,pcVar29,sVar7);
    local_120 = *puVar8;
    uStack_118 = puVar8[1];
    local_110 = puVar8[2];
    uStack_108 = puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    *(undefined1 *)puVar8 = 0;
    local_228 = CONCAT44(local_228._4_4_,uVar27) | 0x100c;
    puVar9 = (undefined8 *)FUN_1800134a0(&local_120,&DAT_1806e6f24,1);
    local_1c0 = (char *****)*puVar9;
    uStack_1b8 = puVar9[1];
    local_1b0 = puVar9[2];
    uStack_1a8 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 0xf;
    *(undefined1 *)puVar9 = 0;
    uVar27 = uVar27 | 0x300c;
  }
  if ((uVar27 & 8) != 0) {
    uVar27 = uVar27 & 0xfffffff7;
    if (uStack_108 < 0x10) {
LAB_1800f621b:
      local_110 = 0;
      uStack_108 = 0xf;
      local_120 = local_120 & 0xffffffffffffff00;
      goto LAB_1800f622b;
    }
    uVar18 = uStack_108 + 1;
    uVar19 = local_120;
    if (uVar18 < 0x1000) {
LAB_1800f6216:
      thunk_FUN_1803d64e0(uVar19,uVar18);
      goto LAB_1800f621b;
    }
    uVar19 = *(ulonglong *)(local_120 - 8);
    if ((local_120 - uVar19) - 8 < 0x20) {
      uVar18 = uStack_108 + 0x28;
      goto LAB_1800f6216;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar20 = auStack_250;
LAB_1800f68c3:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar21 = puVar20 + 8;
LAB_1800f68ca:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar22 = puVar21 + 8;
LAB_1800f68d1:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar23 = puVar22 + 8;
    goto LAB_1800f68d8;
  }
LAB_1800f622b:
  if ((uVar27 & 4) != 0) {
    uVar27 = uVar27 & 0xfffffffb;
    if (0xf < local_168) {
      uVar18 = local_168 + 1;
      uVar19 = local_180;
      if (0xfff < uVar18) {
        uVar19 = *(ulonglong *)(local_180 - 8);
        if (0x1f < (local_180 - uVar19) - 8) goto LAB_1800f68c3;
        uVar18 = local_168 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar19,uVar18);
    }
    local_170 = 0;
    local_168 = 0xf;
    local_180 = local_180 & 0xffffffffffffff00;
  }
  if ((uVar27 & 2) != 0) {
    uVar27 = uVar27 & 0xfffffffd;
    if (0xf < uStack_e8) {
      uVar18 = uStack_e8 + 1;
      uVar19 = local_100;
      if (0xfff < uVar18) {
        uVar19 = *(ulonglong *)(local_100 - 8);
        if (0x1f < (local_100 - uVar19) - 8) goto LAB_1800f68ca;
        uVar18 = uStack_e8 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar19,uVar18);
    }
    local_f0 = 0;
    uStack_e8 = 0xf;
    local_100 = local_100 & 0xffffffffffffff00;
  }
  if ((uVar27 & 1) != 0) {
    uVar27 = uVar27 & 0xfffffffe;
    if (0xf < local_148) {
      uVar19 = local_148 + 1;
      pcVar29 = local_160;
      if (0xfff < uVar19) {
        pcVar29 = *(char **)(local_160 + -8);
        if ((char *)0x1f < local_160 + (-8 - (longlong)pcVar29)) goto LAB_1800f68d1;
        uVar19 = local_148 + 0x28;
      }
      thunk_FUN_1803d64e0(pcVar29,uVar19);
    }
    local_150 = 0;
    local_148 = 0xf;
    local_160 = (char *)((ulonglong)local_160 & 0xffffffffffffff00);
  }
  pcVar29 = "aimbot.enabled";
  if (param_3 == 0) {
    pcVar29 = "hitchance";
  }
  puVar9 = (undefined8 *)FUN_180073a70(&local_140,&local_1c0,pcVar29);
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar12 = puVar9;
  }
  else {
    puVar12 = (undefined8 *)*puVar9;
  }
  sVar7 = puVar9[2];
  puVar2 = *(undefined8 **)(uVar11 + 0x50);
  for (puVar9 = *(undefined8 **)(uVar11 + 0x48); puVar9 != puVar2; puVar9 = puVar9 + 0x10) {
    if ((ulonglong)puVar9[3] < 0x10) {
      _Buf2 = puVar9;
    }
    else {
      _Buf2 = (undefined8 *)*puVar9;
    }
    if ((sVar7 == puVar9[2]) && ((sVar7 == 0 || (iVar6 = memcmp(puVar12,_Buf2,sVar7), iVar6 == 0))))
    {
      FUN_18000f890(&local_140);
      if (puVar9 == (undefined8 *)0xffffffffffffffe0) goto LAB_1800f63a2;
      uVar10 = FUN_1804ecaa0(0x46ca4);
      local_1d0 = uVar10;
      FUN_180540170(uVar10,0,0x46ca4);
      uVar11 = FUN_180142610(uVar10);
      local_1e0 = local_200;
      local_1d8 = 0;
      local_228 = uVar11;
      local_1c8 = uVar11;
      if (param_3 == 0) {
        FUN_180106400(&local_1e0,&local_1c0,uVar11 + 0x422b4);
      }
      else {
        FUN_180106660(&local_1e0,&local_1c0,uVar11 + 0x3a7d8,uVar11 + 0x3c0d8);
      }
      uVar18 = uStack_1a8;
      uVar19 = local_1b0;
      pppppcVar15 = local_1c0;
      bVar4 = false;
      pcVar29 = (char *)(param_2 + 0x433a0);
      pcVar31 = (char *)(param_2 + 0x46ca0);
      if (pcVar29 == pcVar31) goto LAB_1800f6504;
      goto LAB_1800f64c0;
    }
  }
  FUN_18000f890(&local_140);
LAB_1800f63a2:
  if (0xf < uStack_1a8) {
    uVar19 = uStack_1a8 + 1;
    pppppcVar15 = local_1c0;
    if (0xfff < uVar19) {
      pppppcVar15 = (char *****)local_1c0[-1];
      if ((char *)0x1f < (char *)((longlong)local_1c0 + (-8 - (longlong)pppppcVar15))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar19 = uStack_1a8 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppcVar15,uVar19);
  }
  goto LAB_1800f63dd;
LAB_1800f64c0:
  do {
    if (*pcVar29 == '\0') {
LAB_1800f64e4:
      bVar5 = 0;
    }
    else {
      _Str2 = (char *****)&local_1c0;
      if (0xf < uVar18) {
        _Str2 = pppppcVar15;
      }
      iVar6 = strncmp(pcVar29,(char *)_Str2,uVar19 & 0xffffffff);
      if (iVar6 != 0) goto LAB_1800f64e4;
      bVar5 = 1;
    }
    bVar4 = (bool)(bVar4 | bVar5);
    pcVar29 = pcVar29 + 0xe4;
  } while (pcVar29 != pcVar31);
  uVar11 = local_228;
  param_3 = local_220;
  if (bVar4) {
    lVar17 = local_210;
    uVar27 = uVar27 | 0x4000;
LAB_1800f6578:
    bVar4 = false;
  }
  else {
LAB_1800f6504:
    lVar17 = local_210;
    puVar9 = (undefined8 *)FUN_1800f5e20(local_80,param_3,local_210);
    local_228 = CONCAT44(local_228._4_4_,uVar27) | 0x4010;
    puVar12 = (undefined8 *)FUN_1800f5e20(local_a0,param_3,uVar11);
    uVar27 = uVar27 | 0x4030;
    psVar1 = puVar9 + 2;
    if (0xf < (ulonglong)puVar9[3]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    sVar7 = puVar12[2];
    if (0xf < (ulonglong)puVar12[3]) {
      puVar12 = (undefined8 *)*puVar12;
    }
    if (sVar7 != *psVar1) goto LAB_1800f6578;
    if (sVar7 != 0) {
      iVar6 = memcmp(puVar12,puVar9,sVar7);
      if (iVar6 != 0) goto LAB_1800f6578;
    }
    bVar4 = true;
  }
  if ((uVar27 & 0x20) != 0) {
    uVar27 = uVar27 & 0xffffffdf;
    FUN_18000f890(local_a0);
  }
  if ((uVar27 & 0x10) != 0) {
    uVar27 = uVar27 & 0xffffffef;
    FUN_18000f890(local_80);
  }
  if (!bVar4) {
    iVar6 = FUN_1800efc50(lVar17,param_3,local_1f8 + (longlong)local_21c * 4);
    if (iVar6 < 0) {
LAB_1800f68e6:
      if (uVar11 != 0) {
        *(undefined8 *)(puVar25 + -8) = 0x1800f68f8;
        thunk_FUN_1803d64e0(uVar11,0x46ca4);
      }
      *(undefined8 *)(puVar25 + -8) = 0x1800f6902;
      FUN_18000f890(&local_1c0);
      puVar26 = puVar25;
      goto LAB_1800f6902;
    }
    local_238 = 0;
    FUN_1800ef8b0(param_3,lVar17,iVar6,uVar11);
    lVar30 = 0x3d0b0;
    if (param_3 != 0) {
      lVar30 = 0x355d4;
    }
    *(int *)(lVar30 + lVar17) = iVar6 + 1;
    if (iVar6 < 1) {
      uStack_d8 = 0;
      local_d0 = 6;
      local_c8 = 0xf;
      local_e0 = (ulonglong)CONCAT24(s_global_1806f2a8c._4_2_,s_global_1806f2a8c._0_4_);
      uVar28 = uVar27;
    }
    else {
      uVar10 = FUN_18003a390(&local_140,iVar6);
      uVar28 = uVar27 | 0x100;
      local_228 = CONCAT44(local_228._4_4_,uVar27) | 0x100;
      FUN_180066ab0(&local_e0,&DAT_1806e0b7c,uVar10);
    }
    if ((uVar28 & 0x100) != 0) {
      uVar28 = uVar28 & 0xfffffeff;
      FUN_18000f890(&local_140);
    }
    pcVar29 = local_1f0;
    local_1a0 = (undefined8 *****)0x0;
    lStack_198 = 0;
    local_190 = 0;
    uStack_188 = 0;
    sVar7 = strlen(local_1f0);
    FUN_1800133a0(&local_1a0,pcVar29,sVar7);
    uVar10 = FUN_180066820(local_60,&local_1a0,&local_e0);
    puVar13 = (undefined4 *)FUN_1800134a0(uVar10,&DAT_1806e6f24,1);
    local_c0 = *puVar13;
    uStack_bc = puVar13[1];
    uStack_b8 = puVar13[2];
    uStack_b4 = puVar13[3];
    local_b0 = puVar13[4];
    uStack_ac = puVar13[5];
    uStack_a8 = puVar13[6];
    uStack_a4 = puVar13[7];
    *(undefined8 *)(puVar13 + 4) = 0;
    *(undefined8 *)(puVar13 + 6) = 0xf;
    *(undefined1 *)puVar13 = 0;
    uVar27 = uVar28 | 0x280;
    FUN_18000f890(local_60);
    if (0xf < uStack_188) {
      uVar19 = uStack_188 + 1;
      pppppuVar16 = local_1a0;
      if (0xfff < uVar19) {
        pppppuVar16 = (undefined8 *****)local_1a0[-1];
        if (0x1f < (ulonglong)((longlong)local_1a0 + (-8 - (longlong)pppppuVar16))) {
LAB_1800f68d8:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar24 = puVar23 + 8;
LAB_1800f68df:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar25 = puVar24 + 8;
          goto LAB_1800f68e6;
        }
        uVar19 = uStack_188 + 0x28;
      }
      thunk_FUN_1803d64e0(pppppuVar16,uVar19);
    }
    FUN_18000f890(&local_e0);
    pcVar29 = (char *)(lVar17 + 0x433a0);
    if (pcVar29 != pcVar31) {
      uVar19 = local_1b0;
      do {
        if (*pcVar29 != '\0') {
          pppppcVar15 = (char *****)&local_1c0;
          if (0xf < uStack_1a8) {
            pppppcVar15 = local_1c0;
          }
          iVar6 = strncmp(pcVar29,(char *)pppppcVar15,uVar19 & 0xffffffff);
          if (iVar6 == 0) {
            local_140 = 0;
            uStack_138 = 0;
            local_130 = 0;
            local_128 = 0;
            sVar7 = strlen(pcVar29 + uVar19);
            FUN_1800133a0(&local_140,pcVar29 + uVar19,sVar7);
            puVar13 = &local_c0;
            if (0xf < CONCAT44(uStack_a4,uStack_a8)) {
              puVar13 = (undefined4 *)CONCAT44(uStack_bc,local_c0);
            }
            plVar14 = (longlong *)FUN_18006b5b0(&local_140,0,puVar13,CONCAT44(uStack_ac,local_b0));
            local_1a0 = (undefined8 *****)*plVar14;
            lStack_198 = plVar14[1];
            local_190 = plVar14[2];
            uStack_188 = plVar14[3];
            plVar14[2] = 0;
            plVar14[3] = 0xf;
            *(undefined1 *)plVar14 = 0;
            uVar27 = uVar27 | 0x40;
            if (0xf < local_128) {
              uVar19 = local_128 + 1;
              lVar17 = local_140;
              if (0xfff < uVar19) {
                lVar17 = *(longlong *)(local_140 + -8);
                if (0x1f < (local_140 - lVar17) - 8U) goto LAB_1800f68df;
                uVar19 = local_128 + 0x28;
              }
              thunk_FUN_1803d64e0(lVar17,uVar19);
            }
            pppppuVar16 = &local_1a0;
            if (0xf < uStack_188) {
              pppppuVar16 = local_1a0;
            }
            snprintf(pcVar29,0x60,&DAT_1806d3198,pppppuVar16);
            FUN_18000f890(&local_1a0);
            uVar19 = local_1b0;
          }
        }
        pcVar29 = pcVar29 + 0xe4;
      } while (pcVar29 != pcVar31);
    }
    FUN_18000f890(&local_c0);
  }
  if (uVar11 != 0) {
    thunk_FUN_1803d64e0(uVar11,0x46ca4);
  }
  FUN_18000f890(&local_1c0);
  param_2 = local_210;
LAB_1800f63dd:
  local_218 = local_218 + 1;
  uVar19 = (ulonglong)local_218;
  puVar26 = auStack_258;
  if (local_208 <= (int)local_218) {
LAB_1800f6902:
    *(undefined8 *)(puVar26 + -8) = 0x1800f6911;
    return;
  }
  goto LAB_1800f6018;
}



/* ===== 1800f6940 FUN_1800f6940 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001800f90a2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800f6940(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int *piVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  longlong *plVar26;
  longlong *plVar27;
  int *piVar28;
  size_t sVar29;
  longlong lVar30;
  undefined8 *****pppppuVar31;
  byte bVar32;
  longlong *plVar33;
  undefined8 *_Buf2;
  char *pcVar34;
  char **ppcVar35;
  char *pcVar36;
  undefined8 *puVar37;
  longlong lVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  char *pcVar41;
  ulonglong uVar42;
  longlong *plVar43;
  ulonglong in_R11;
  uint uVar44;
  uint uVar45;
  ulonglong uVar46;
  undefined8 *puVar47;
  bool bVar48;
  double dVar49;
  double dVar50;
  undefined8 extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uStack_12b0;
  undefined1 auStack_12a8 [8];
  undefined1 auStack_12a0 [24];
  undefined8 local_1288;
  char *local_1280;
  undefined2 *local_1278;
  undefined4 *local_1270;
  char local_1268;
  undefined1 local_1267;
  uint local_1264;
  char local_1260;
  undefined4 local_125c;
  undefined1 local_1258;
  char local_1257 [3];
  undefined4 local_1254;
  undefined1 local_1250;
  char local_124f [7];
  longlong local_1248;
  longlong local_1240;
  longlong *local_1238;
  longlong local_1230;
  longlong local_1228;
  undefined1 *local_1220;
  int **local_1218;
  int local_1210;
  undefined4 local_120c;
  undefined4 local_1208;
  undefined4 local_1204;
  undefined4 local_1200;
  undefined4 local_11fc;
  undefined4 local_11f8;
  undefined4 local_11f4;
  undefined4 local_11f0;
  undefined4 local_11ec;
  undefined4 local_11e8;
  undefined4 local_11e4;
  undefined4 local_11e0;
  undefined4 local_11dc;
  undefined4 local_11d8;
  undefined4 local_11d4;
  undefined4 local_11d0;
  undefined4 local_11cc;
  undefined4 local_11c8;
  undefined4 local_11c4;
  undefined4 local_11c0;
  undefined4 local_11bc;
  undefined4 local_11b8;
  undefined4 local_11b4;
  undefined4 local_11b0;
  undefined4 local_11ac;
  undefined4 local_11a8;
  undefined4 local_11a4;
  int local_11a0;
  int local_119c;
  int local_1198 [17];
  float local_1154;
  undefined4 local_1150;
  undefined4 local_114c;
  undefined4 local_1148;
  int local_1144;
  longlong *local_1140;
  undefined1 *local_1138;
  longlong *local_1130;
  undefined1 *local_1128;
  longlong local_1120;
  longlong *local_1118;
  longlong local_1110;
  longlong local_1108;
  undefined1 *local_1100;
  undefined4 local_10f8;
  undefined4 local_10f4;
  undefined4 local_10f0;
  undefined4 local_10ec;
  undefined8 local_10e8;
  undefined4 local_10e0;
  undefined4 local_10dc;
  undefined4 local_10d8;
  undefined4 local_10d4;
  undefined1 local_10d0;
  undefined8 local_10cc;
  undefined4 local_10c4;
  undefined4 local_10c0;
  undefined4 local_10bc;
  undefined4 local_10b8;
  undefined4 local_10b4;
  undefined4 local_10b0;
  undefined4 local_10ac;
  undefined8 local_10a8;
  int *local_1098;
  longlong *local_1090;
  longlong local_1088;
  longlong local_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined4 local_1068;
  undefined4 local_1064;
  undefined4 local_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined4 local_1048;
  char *local_1038 [27];
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined8 local_e08;
  undefined8 uStack_e00;
  undefined8 local_df8;
  undefined8 uStack_df0;
  undefined8 local_de8;
  undefined8 uStack_de0;
  undefined8 local_dd8;
  undefined8 uStack_dd0;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 local_db8;
  undefined8 uStack_db0;
  undefined8 local_da8;
  undefined8 uStack_da0;
  undefined8 local_d98;
  undefined8 uStack_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  undefined8 uStack_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined8 uStack_d20;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  uint uStack_bd0;
  undefined4 uStack_bcc;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined4 local_b58;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  uint uStack_ae0;
  undefined4 uStack_adc;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined4 local_a68;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined1 local_a28 [16];
  undefined1 local_a18 [16];
  undefined1 local_a08 [16];
  undefined1 local_9f8 [16];
  undefined1 local_9e8 [16];
  undefined1 local_9d8 [16];
  undefined1 local_9c8 [16];
  undefined1 local_9b8 [16];
  undefined1 local_9a8 [16];
  undefined1 local_998 [16];
  undefined1 local_988 [16];
  undefined1 local_978 [16];
  undefined1 local_968 [16];
  undefined1 local_958 [16];
  undefined1 local_948 [16];
  undefined1 local_938 [16];
  undefined1 local_928 [16];
  undefined1 local_918 [16];
  undefined1 local_908 [16];
  undefined1 local_8f8 [16];
  undefined1 local_8e8 [16];
  undefined1 local_8d8 [16];
  undefined1 local_8c8 [16];
  undefined1 local_8b8 [16];
  undefined1 local_8a8 [16];
  undefined1 local_898 [16];
  undefined1 local_888 [16];
  undefined1 local_878 [16];
  undefined1 local_868 [16];
  undefined1 local_858 [16];
  undefined1 local_848 [16];
  undefined1 local_838 [16];
  undefined1 local_828 [16];
  undefined1 local_818 [16];
  undefined1 local_808 [16];
  undefined1 local_7f8 [16];
  undefined1 local_7e8 [16];
  undefined1 local_7d8 [16];
  undefined1 local_7c8 [16];
  undefined1 local_7b8 [16];
  undefined1 local_7a8 [16];
  undefined1 local_798 [16];
  undefined1 local_788 [16];
  undefined1 local_778 [16];
  undefined1 local_768 [16];
  undefined1 local_758 [16];
  undefined1 local_748 [16];
  undefined1 local_738 [16];
  undefined1 local_728 [16];
  undefined1 local_718 [16];
  undefined1 local_708 [16];
  undefined1 local_6f8 [16];
  undefined4 local_6e8;
  undefined2 local_6e4;
  undefined8 local_6e0;
  char *local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  ulonglong local_6c0;
  char *local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  ulonglong local_6a0;
  char *local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  ulonglong local_680;
  undefined8 *****local_678;
  longlong lStack_670;
  longlong local_668;
  ulonglong uStack_660;
  char *local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 local_640;
  ulonglong local_638;
  ulonglong uStack_630;
  undefined8 local_628;
  ulonglong local_620;
  char *local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 local_600;
  char *local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  char *local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  char *local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  char *local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 local_580;
  char *local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 *****local_558;
  undefined8 uStack_550;
  undefined8 *local_548;
  undefined8 *local_540;
  undefined1 local_538 [32];
  char local_518 [8];
  char local_510 [4];
  char local_50c [2];
  undefined2 local_50a;
  undefined8 local_508;
  undefined8 local_500;
  char *local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  char *local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  char local_4b8 [8];
  ulonglong uStack_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  char local_498 [8];
  ulonglong uStack_490;
  undefined8 local_488;
  undefined8 local_480;
  char local_478 [8];
  char local_470 [4];
  undefined4 local_46c;
  undefined8 local_468;
  undefined8 local_460;
  char *local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 *****local_438 [2];
  longlong *local_428;
  ulonglong local_420;
  undefined1 local_418 [32];
  undefined1 local_3f8 [32];
  undefined1 local_3d8 [32];
  undefined1 local_3b8 [32];
  undefined1 local_398 [32];
  undefined1 local_378 [32];
  undefined1 local_358 [32];
  undefined1 local_338 [32];
  undefined1 local_318 [32];
  undefined1 local_2f8 [32];
  undefined1 local_2d8 [32];
  undefined1 local_2b8 [32];
  undefined1 local_298 [32];
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  undefined1 local_238 [32];
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  char *local_118 [13];
  char *local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_180919500 ^ (ulonglong)auStack_12a8;
  uVar44 = 0;
  local_1264 = 0;
  FUN_1800f4cc0();
  local_1118 = &local_1248;
  local_1248 = param_1;
  local_1110 = param_2;
  puVar16 = (undefined8 *)FUN_180010160(local_748,"model.enemy.player.material");
  local_c78 = *puVar16;
  uStack_c70 = puVar16[1];
  lVar17 = FUN_180370aa0(param_1,&local_c78);
  uVar13 = DAT_1808ac34c;
  if (lVar17 == 0) {
    local_1238 = &local_1248;
    local_1240 = param_1;
    FUN_180013350(local_298,"targets.enemy.chams.visible");
    FUN_1800faaf0(&local_1240,local_298,param_2 + 0x6500);
    FUN_18000f890(local_298);
    FUN_180013350(local_278,"targets.enemy.chams.occluded");
    FUN_1800faaf0(&local_1240,local_278,param_2 + 0x6558);
    FUN_18000f890(local_278);
    FUN_180013350(local_2b8,"targets.enemy.backtrack.visible");
    cVar9 = FUN_1800faaf0(&local_1240,local_2b8,param_2 + 0x6620);
    FUN_18000f890(local_2b8);
    if (cVar9 == '\0') {
      FUN_180013350(local_258,"targets.enemy.backtrack.occluded");
      FUN_1800faaf0(&local_1240,local_258,param_2 + 0x6620);
      FUN_18000f890(local_258);
    }
    FUN_180013350(local_238,"targets.enemy.on_shot.visible");
    cVar9 = FUN_1800faaf0(&local_1240,local_238,param_2 + 0x65b0);
    FUN_18000f890(local_238);
    if (cVar9 == '\0') {
      FUN_180013350(local_218,"targets.enemy.on_shot.occluded");
      FUN_1800faaf0(&local_1240,local_218,param_2 + 0x65b0);
      FUN_18000f890(local_218);
    }
    local_1198[0xf] = 0x40a00000;
    local_1198[0x10] = 0x3f000000;
    FUN_180013350(local_418,"targets.enemy.on_shot_time");
    dVar49 = (double)FUN_1800fa800(&local_1248,local_418,(int)DAT_1808ac518);
    local_1154 = (float)dVar49;
    puVar18 = (undefined4 *)FUN_18000b9a0(&local_1154,local_1198 + 0x10,local_1198 + 0xf);
    *(undefined4 *)(param_2 + 0x661c) = *puVar18;
    FUN_18000f890(local_418);
    FUN_180013350(local_3f8,"targets.ragdolls.chams.visible");
    cVar9 = FUN_1800faaf0(&local_1240,local_3f8,(undefined4 *)(param_2 + 0x668c));
    FUN_18000f890(local_3f8);
    local_10f8 = 0;
    local_10f4 = 0x3f800000;
    local_10f0 = 0x3f800000;
    local_10ec = 0x3f800000;
    local_10e8 = 0x3f800000;
    local_10e0 = 0;
    local_10dc = 100;
    local_10d8 = 100;
    local_10d4 = 0x14;
    local_10d0 = 1;
    local_10cc = 100;
    local_10c4 = 0x3f800000;
    local_10c0 = 0x3f800000;
    local_10bc = 0x3f800000;
    local_10b8 = 0x3f800000;
    local_10b4 = 5;
    local_10b0 = 100;
    local_10ac = 5;
    local_10a8 = 0x5a;
    puVar18 = &local_10f8;
    if (cVar9 == '\0') {
      puVar18 = (undefined4 *)(param_2 + 0x668c);
    }
    FUN_180013350(local_3d8,"targets.ragdolls.chams.occluded");
    cVar10 = FUN_1800faaf0(&local_1240,local_3d8,puVar18);
    FUN_18000f890(local_3d8);
    if ((cVar9 != '\0') || (cVar10 != '\0')) {
      *(char *)(param_2 + 0x66f8) = cVar9;
      *(char *)(param_2 + 0x66f9) = cVar10;
    }
    FUN_180013350(local_3b8,"targets.team.chams.visible");
    FUN_1800faaf0(&local_1240,local_3b8,param_2 + 0x66fc);
    FUN_18000f890(local_3b8);
    FUN_180013350(local_398,"targets.team.chams.occluded");
    FUN_1800faaf0(&local_1240,local_398,param_2 + 0x6754);
    FUN_18000f890(local_398);
    FUN_180013350(local_378,"targets.local.chams.visible");
    FUN_1800faaf0(&local_1240,local_378,param_2 + 0x67b0);
    FUN_18000f890(local_378);
    FUN_180013350(local_358,"targets.local.chams.overlay");
    FUN_1800faaf0(&local_1240,local_358,param_2 + 0x6808);
    FUN_18000f890(local_358);
    FUN_180013350(local_338,"targets.local.viewmodel_arms.visible");
    FUN_1800faaf0(&local_1240,local_338,param_2 + 0x6874);
    FUN_18000f890(local_338);
    FUN_180013350(local_318,"targets.local.viewmodel_arms.overlay");
    FUN_1800faaf0(&local_1240,local_318,param_2 + 0x68cc);
    FUN_18000f890(local_318);
    FUN_180013350(local_2f8,"targets.local.viewmodel_weapon.visible");
    FUN_1800faaf0(&local_1240,local_2f8,param_2 + 0x69d4);
    FUN_18000f890(local_2f8);
    FUN_180013350(local_2d8,"targets.local.viewmodel_weapon.overlay");
    FUN_1800faaf0(&local_1240,local_2d8,param_2 + 0x6a2c);
    FUN_18000f890(local_2d8);
  }
  puVar16 = (undefined8 *)FUN_180010160(local_718,"watermark.anchor");
  local_c68 = *puVar16;
  uStack_c60 = puVar16[1];
  lVar17 = FUN_180370aa0(param_1,&local_c68);
  dVar49 = DAT_1808ac548;
  if (lVar17 == 0) {
    puVar16 = (undefined8 *)FUN_180010160(local_708,"watermark.position");
    local_c58 = *puVar16;
    uStack_c50 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_c58);
    if (lVar17 != 0) {
      dVar50 = (double)FUN_180370b10(lVar17);
      local_1144 = (int)dVar50;
      if (local_1144 == 3) {
        uVar15 = 5;
      }
      else if (local_1144 == 5) {
        uVar15 = 3;
      }
      else {
        local_1150 = 5;
        local_114c = 0;
        puVar18 = (undefined4 *)FUN_180042830(&local_1144,&local_114c,&local_1150);
        uVar15 = *puVar18;
      }
      *(undefined4 *)(param_2 + 0x42c74) = uVar15;
    }
  }
  puVar16 = (undefined8 *)FUN_180010160(local_6f8,"watermark.elements");
  local_c48 = *puVar16;
  uStack_c40 = puVar16[1];
  lVar17 = FUN_180370aa0(param_1,&local_c48);
  if (lVar17 == 0) {
    puVar16 = (undefined8 *)FUN_180010160(local_7b8,"watermark.items");
    local_1038[0x1a] = (char *)*puVar16;
    uStack_f60 = puVar16[1];
    local_1098 = (int *)FUN_180370aa0(param_1,local_1038 + 0x1a);
    if ((local_1098 != (int *)0x0) && (*local_1098 == 4)) {
      local_1218 = &local_1098;
      uVar11 = FUN_1800fafb0(&local_1218,0);
      *(undefined1 *)(param_2 + 0x42cdd) = uVar11;
      uVar11 = FUN_1800fafb0(&local_1218,2);
      *(undefined1 *)(param_2 + 0x42ce8) = uVar11;
      uVar11 = FUN_1800fafb0(&local_1218,3);
      *(undefined1 *)(param_2 + 0x42cdf) = uVar11;
      uVar11 = FUN_1800fafb0(&local_1218,4);
      *(undefined1 *)(param_2 + 0x42ce7) = uVar11;
      uVar11 = FUN_1800fafb0(&local_1218,5);
      *(undefined1 *)(param_2 + 0x42ce0) = uVar11;
    }
    puVar16 = (undefined8 *)FUN_180010160(local_768,"watermark.brand");
    local_f58 = *puVar16;
    uStack_f50 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_f58);
    if (lVar17 != 0) {
      uVar11 = FUN_180370bb0(lVar17,1);
      *(undefined1 *)(param_2 + 0x42cdc) = uVar11;
    }
    puVar16 = (undefined8 *)FUN_180010160(local_728,"watermark.avatar");
    local_f48 = *puVar16;
    uStack_f40 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_f48);
    if (lVar17 != 0) {
      uVar11 = FUN_180370bb0(lVar17,0);
      *(undefined1 *)(param_2 + 0x42ccc) = uVar11;
    }
  }
  local_1090 = &local_1248;
  local_1278 = (undefined2 *)&DAT_1806f0260;
  local_1280 = "hit chance";
  local_1288 = "ragebot.hitchance";
  local_1270 = (undefined4 *)(param_2 + 0x42bfc);
  local_1088 = param_2;
  local_1080 = param_1;
  FUN_1800fb010(&local_1090,"ragebot.hitchance_override","ragebot.hitchance_override_value",
                (int)DAT_1808ac638);
  local_1278 = &DAT_1806dfdd8;
  local_1280 = "min damage";
  local_1288 = "ragebot.min_damage";
  local_1270 = (undefined4 *)(param_2 + 0x42c00);
  FUN_1800fb010(&local_1090,"ragebot.min_damage_override","ragebot.min_damage_override_value",
                (int)DAT_1808ac600);
  puVar16 = (undefined8 *)FUN_180010160(local_a28,"misc.event_log_icons");
  local_f38 = *puVar16;
  uStack_f30 = puVar16[1];
  lVar17 = FUN_180370aa0(param_1,&local_f38);
  if (lVar17 != 0) {
    bVar32 = 1;
    bVar12 = FUN_180370bb0(lVar17);
    *(byte *)(param_2 + 0x6cd4) = bVar12 ^ bVar32;
  }
  puVar18 = (undefined4 *)(param_2 + 0x6d58);
  local_1280._0_4_ = uVar13;
  local_1288._0_4_ = DAT_1808ac2e8;
  cVar9 = FUN_1800fb340();
  if (cVar9 != '\0') {
    *puVar18 = 0x3f570a3d;
    *(undefined4 *)(param_2 + 0x6d5c) = 0x3f570a3d;
    *(undefined4 *)(param_2 + 28000) = 0x3f5c28f6;
    *(undefined4 *)(param_2 + 0x6d64) = 0x3f800000;
  }
  puVar18 = (undefined4 *)(param_2 + 0x6d68);
  local_1280 = (char *)CONCAT44(local_1280._4_4_,uVar13);
  local_1288 = (char *)CONCAT44(local_1288._4_4_,DAT_1808ac0ac);
  cVar9 = FUN_1800fb340();
  if (cVar9 != '\0') {
    *puVar18 = 0;
    *(undefined8 *)(param_2 + 0x6d6c) = 0;
    *(undefined4 *)(param_2 + 0x6d74) = 0x3f000000;
  }
  puVar16 = (undefined8 *)FUN_180010160(local_a18,"antiaim.yaw_scheme");
  local_f28 = *puVar16;
  uStack_f20 = puVar16[1];
  pcVar34 = (char *)(param_2 + 0x433a0);
  lVar17 = FUN_180370aa0(param_1,&local_f28);
  if (lVar17 == 0) {
    uVar13 = FUN_1800fb3a0(extraout_XMM0_Qa,*(undefined4 *)(param_2 + 0x6e28),param_2 + 0x6e5c);
    *(undefined4 *)(param_2 + 0x6e28) = uVar13;
    if (param_2 != param_2 + 0x3900) {
      do {
        if ((*pcVar34 != '\0') && (iVar14 = strcmp(pcVar34,"antiaim.yaw"), iVar14 == 0)) {
          local_1210 = iVar14;
          iVar14 = FUN_1800fb3a0();
          *(float *)(pcVar34 + 0x6c) = (float)iVar14;
        }
        pcVar34 = pcVar34 + 0xe4;
      } while (pcVar34 != (char *)(param_2 + 0x46ca0));
    }
    *(undefined4 *)(param_2 + 0x6e60) = 1;
  }
  puVar40 = auStack_12a8;
  pcVar34 = (char *)(param_2 + 0x433a0);
  puVar16 = (undefined8 *)FUN_180010160(local_a08,"antiaim.yaw_scheme");
  local_f18 = *puVar16;
  uStack_f10 = puVar16[1];
  lVar17 = FUN_180370aa0(param_1,&local_f18);
  dVar50 = extraout_XMM0_Qa_00;
  if ((lVar17 == 0) || (dVar50 = (double)FUN_180370b10(lVar17), dVar50 < dVar49)) {
    uVar13 = FUN_1800fb3d0(dVar50,*(undefined4 *)(param_2 + 0x6e28));
    *(undefined4 *)(param_2 + 0x6e28) = uVar13;
    if (param_2 != param_2 + 0x3900) {
      do {
        if ((*pcVar34 != '\0') && (iVar14 = strcmp(pcVar34,"antiaim.yaw"), iVar14 == 0)) {
          iVar14 = FUN_1800fb3d0();
          *(float *)(pcVar34 + 0x6c) = (float)iVar14;
        }
        pcVar34 = pcVar34 + 0xe4;
      } while (pcVar34 != (char *)(param_2 + 0x46ca0));
    }
    *(undefined4 *)(param_2 + 0x6e60) = 2;
  }
  puVar16 = (undefined8 *)FUN_180010160(local_9f8,"ragebot.selection.global.hitchance");
  local_f08 = *puVar16;
  uStack_f00 = puVar16[1];
  lVar17 = FUN_180370aa0(param_1,&local_f08);
  if (lVar17 == 0) {
    puVar18 = (undefined4 *)(param_2 + 0x422b4);
    if (param_2 != param_2 + 0x900) {
      do {
        puVar16 = (undefined8 *)FUN_180010160(local_9e8,"ragebot.hitboxes");
        local_ef8 = *puVar16;
        uStack_ef0 = puVar16[1];
        lVar17 = FUN_180370aa0(param_1,&local_ef8);
        if (lVar17 != 0) {
          *puVar18 = *(undefined4 *)(param_2 + 0x42c0c);
          *(undefined2 *)(puVar18 + 1) = *(undefined2 *)(param_2 + 0x42c10);
        }
        puVar16 = (undefined8 *)FUN_180010160(local_9d8,"ragebot.hitchance");
        local_ee8 = *puVar16;
        uStack_ee0 = puVar16[1];
        lVar17 = FUN_180370aa0(param_1,&local_ee8);
        if (lVar17 != 0) {
          puVar18[3] = *(undefined4 *)(param_2 + 0x42bfc);
        }
        puVar16 = (undefined8 *)FUN_180010160(local_9c8,"ragebot.min_damage");
        local_ed8 = *puVar16;
        uStack_ed0 = puVar16[1];
        lVar17 = FUN_180370aa0(param_1,&local_ed8);
        if (lVar17 != 0) {
          local_120c = 0x65;
          local_1208 = 1;
          puVar19 = (undefined4 *)FUN_180042830(param_2 + 0x42c00,&local_1208,&local_120c);
          puVar18[6] = *puVar19;
        }
        puVar16 = (undefined8 *)FUN_180010160(local_9b8,"ragebot.force_shot");
        local_ec8 = *puVar16;
        uStack_ec0 = puVar16[1];
        lVar17 = FUN_180370aa0(param_1,&local_ec8);
        if (lVar17 != 0) {
          *(undefined1 *)(puVar18 + 4) = *(undefined1 *)(param_2 + 0x42bf1);
        }
        puVar16 = (undefined8 *)FUN_180010160(local_9a8,"ragebot.force_shot_hitchance");
        local_eb8 = *puVar16;
        uStack_eb0 = puVar16[1];
        lVar17 = FUN_180370aa0(param_1,&local_eb8);
        if (lVar17 != 0) {
          puVar18[5] = *(undefined4 *)(param_2 + 0x42bf4);
        }
        puVar16 = (undefined8 *)FUN_180010160(local_998,"ragebot.auto_stop");
        local_ea8 = *puVar16;
        uStack_ea0 = puVar16[1];
        lVar17 = FUN_180370aa0(param_1,&local_ea8);
        if (lVar17 != 0) {
          *(undefined1 *)(puVar18 + 7) = *(undefined1 *)(param_2 + 0x42c14);
        }
        puVar16 = (undefined8 *)FUN_180010160(local_988,"ragebot.stop_in_air");
        local_e98 = *puVar16;
        uStack_e90 = puVar16[1];
        lVar17 = FUN_180370aa0(param_1,&local_e98);
        if (lVar17 != 0) {
          *(undefined1 *)((longlong)puVar18 + 0x1d) = *(undefined1 *)(param_2 + 0x42c1d);
        }
        puVar16 = (undefined8 *)FUN_180010160(local_978,"ragebot.stop_on_land");
        local_e88 = *puVar16;
        uStack_e80 = puVar16[1];
        lVar17 = FUN_180370aa0(param_1,&local_e88);
        if (lVar17 != 0) {
          *(undefined1 *)((longlong)puVar18 + 0x1e) = *(undefined1 *)(param_2 + 0x42c1e);
        }
        puVar16 = (undefined8 *)FUN_180010160(local_968,"ragebot.stop_between_shots");
        local_e78 = *puVar16;
        uStack_e70 = puVar16[1];
        lVar17 = FUN_180370aa0(param_1,&local_e78);
        if (lVar17 != 0) {
          *(undefined1 *)((longlong)puVar18 + 0x1f) = *(undefined1 *)(param_2 + 0x42c1c);
        }
        puVar16 = (undefined8 *)FUN_180010160(local_958,"ragebot.auto_scope");
        local_e68 = *puVar16;
        uStack_e60 = puVar16[1];
        lVar17 = FUN_180370aa0(param_1,&local_e68);
        if (lVar17 != 0) {
          *(undefined1 *)(puVar18 + 8) = *(undefined1 *)(param_2 + 0x42c12);
        }
        puVar16 = (undefined8 *)FUN_180010160(local_948,"ragebot.extrapolation");
        local_e58 = *puVar16;
        uStack_e50 = puVar16[1];
        lVar17 = FUN_180370aa0(param_1,&local_e58);
        if (lVar17 != 0) {
          puVar18[2] = -(uint)(*(char *)(param_2 + 0x42c1f) != '\0') & 0x32;
        }
        puVar18 = puVar18 + 9;
      } while (puVar18 != (undefined4 *)(param_2 + 0x42bb4));
    }
    local_1038[0] = "ragebot.hitchance";
    local_1038[1] = "hitchance";
    local_1038[2] = "ragebot.min_damage";
    local_1038[3] = "min_damage";
    local_1038[4] = "ragebot.force_shot";
    local_1038[5] = "force_shot";
    local_1038[6] = "ragebot.force_shot_hitchance";
    local_1038[7] = "min_hitchance";
    local_1038[8] = "ragebot.auto_stop";
    local_1038[9] = "quick_stop";
    local_1038[10] = "ragebot.auto_scope";
    local_1038[0xb] = "quick_scope";
    pcVar34 = (char *)(param_2 + 0x433a0);
    if (param_2 != param_2 + 0x3900) {
      do {
        if (*pcVar34 != '\0') {
          ppcVar35 = local_1038;
          do {
            iVar14 = strcmp(pcVar34,*ppcVar35);
            if (iVar14 == 0) {
              uVar20 = FUN_1800ef660(local_138,0,ppcVar35[1]);
              uVar20 = FUN_18000f490(uVar20);
              snprintf(pcVar34,0x60,&DAT_1806d3198,uVar20);
              FUN_18000f890(local_138);
              break;
            }
            ppcVar35 = ppcVar35 + 2;
          } while (ppcVar35 != local_1038 + 0xc);
        }
        pcVar34 = pcVar34 + 0xe4;
      } while (pcVar34 != (char *)(param_2 + 0x46ca0));
    }
  }
  pcVar34 = (char *)(param_2 + 0x433a0);
  puVar16 = (undefined8 *)FUN_180010160(local_938,"nl_movement.air_strafe");
  local_e48 = *puVar16;
  uStack_e40 = puVar16[1];
  lVar17 = FUN_180370aa0(param_1,&local_e48);
  if (lVar17 == 0) {
    puVar16 = (undefined8 *)FUN_180010160(local_928,"movement.airstrafe");
    local_e38 = *puVar16;
    uStack_e30 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_e38);
    if (lVar17 != 0) {
      *(undefined1 *)(param_2 + 0x6c18) = *(undefined1 *)(param_2 + 0x6b6f);
    }
    puVar16 = (undefined8 *)FUN_180010160(local_918,"movement.jumpbug");
    local_e28 = *puVar16;
    uStack_e20 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_e28);
    if (lVar17 != 0) {
      *(undefined1 *)(param_2 + 0x6c30) = *(undefined1 *)(param_2 + 0x6b59);
    }
    puVar16 = (undefined8 *)FUN_180010160(local_908,"movement.edge_jump");
    local_e18 = *puVar16;
    uStack_e10 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_e18);
    if (lVar17 != 0) {
      *(undefined1 *)(param_2 + 0x6c38) = *(undefined1 *)(param_2 + 0x6b75);
    }
    puVar16 = (undefined8 *)FUN_180010160(local_8f8,"movement.fast_ladder");
    local_e08 = *puVar16;
    uStack_e00 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_e08);
    if (lVar17 != 0) {
      *(undefined1 *)(param_2 + 0x6c40) = *(undefined1 *)(param_2 + 0x6bf5);
    }
    puVar16 = (undefined8 *)FUN_180010160(local_8e8,"movement.null_strafe");
    local_df8 = *puVar16;
    uStack_df0 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_df8);
    if (lVar17 == 0) {
      puVar16 = (undefined8 *)FUN_180010160(local_8d8,"movement.strafe_assist");
      local_de8 = *puVar16;
      uStack_de0 = puVar16[1];
      lVar17 = FUN_180370aa0(param_1,&local_de8);
      if (lVar17 != 0) goto LAB_1800f7a7e;
    }
    else {
LAB_1800f7a7e:
      if ((*(char *)(param_2 + 0x6b79) == '\0') && (*(char *)(param_2 + 0x6c0d) == '\0')) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
      *(undefined1 *)(param_2 + 0x6c37) = uVar11;
    }
    puVar16 = (undefined8 *)FUN_180010160(local_8c8,"movement.quick_stop");
    local_dd8 = *puVar16;
    uStack_dd0 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_dd8);
    if (lVar17 != 0) {
      *(undefined1 *)(param_2 + 0x6c36) = *(undefined1 *)(param_2 + 0x6b6e);
    }
  }
  *(undefined2 *)(param_2 + 0x6b6e) = 0;
  *(undefined1 *)(param_2 + 0x6bf5) = 0;
  *(undefined1 *)(param_2 + 0x6c0d) = 0;
  *(undefined1 *)(param_2 + 0x6b79) = 0;
  *(undefined1 *)(param_2 + 0x6b75) = 0;
  *(undefined1 *)(param_2 + 0x6b59) = 0;
  local_1038[0xc] = "movement.airstrafe";
  local_1038[0xd] = "nl_movement.air_strafe";
  local_1038[0xe] = "movement.jumpbug";
  local_1038[0xf] = "nl_movement.jump_bug";
  local_1038[0x10] = "movement.edge_jump";
  local_1038[0x11] = "nl_movement.edge_jump";
  local_1038[0x12] = "movement.fast_ladder";
  local_1038[0x13] = "nl_movement.fast_ladder";
  local_1038[0x14] = "movement.null_strafe";
  local_1038[0x15] = "nl_movement.strafe_assist";
  local_1038[0x16] = "movement.strafe_assist";
  local_1038[0x17] = "nl_movement.strafe_assist";
  local_1038[0x18] = "movement.quick_stop";
  local_1038[0x19] = "nl_movement.standalone_quick_stop";
  if (param_2 != param_2 + 0x3900) {
    do {
      if (*pcVar34 != '\0') {
        ppcVar35 = local_1038 + 0xc;
        do {
          iVar14 = strcmp(pcVar34,*ppcVar35);
          if (iVar14 == 0) {
            snprintf(pcVar34,0x60,&DAT_1806d3198,ppcVar35[1]);
            break;
          }
          ppcVar35 = ppcVar35 + 2;
        } while (ppcVar35 != local_1038 + 0x1a);
      }
      pcVar34 = pcVar34 + 0xe4;
    } while (pcVar34 != (char *)(param_2 + 0x46ca0));
  }
  puVar16 = (undefined8 *)FUN_180010160(local_8b8,"features.automatic_purchase");
  local_dc8 = *puVar16;
  uStack_dc0 = puVar16[1];
  lVar17 = FUN_180370aa0(param_1,&local_dc8);
  if (lVar17 == 0) {
    puVar16 = (undefined8 *)FUN_180010160(local_8a8,"auto_buy.enabled");
    local_db8 = *puVar16;
    uStack_db0 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_db8);
    if (lVar17 != 0) {
      *(undefined1 *)(param_2 + 0x6c74) = *(undefined1 *)(param_2 + 0x7234);
      local_1078 = 0;
      uStack_1070 = 0;
      local_1068 = 2;
      local_1064 = 3;
      local_1060 = 1;
      if (*(uint *)(param_2 + 0x7238) < 7) {
        uVar13 = *(undefined4 *)
                  ((longlong)local_1038 + (longlong)(int)*(uint *)(param_2 + 0x7238) * 4 + -0x40);
      }
      else {
        uVar13 = 0;
      }
      *(undefined4 *)(param_2 + 0x6c78) = uVar13;
      local_1058 = _DAT_1808ad6c0;
      uStack_1050 = _UNK_1808ad6c8;
      local_1048 = 3;
      if (*(uint *)(param_2 + 0x723c) < 5) {
        uVar13 = *(undefined4 *)
                  ((longlong)local_1038 + (longlong)(int)*(uint *)(param_2 + 0x723c) * 4 + -0x20);
      }
      else {
        uVar13 = 0;
      }
      *(undefined4 *)(param_2 + 0x6c7c) = uVar13;
      in_R11 = (ulonglong)*(byte *)(param_2 + 0x7247);
      *(bool *)(param_2 + 0x6c80) = *(int *)(param_2 + 0x7240) == 1;
      *(bool *)(param_2 + 0x6c81) = *(int *)(param_2 + 0x7240) == 2;
      *(undefined1 *)(param_2 + 0x6c82) = *(undefined1 *)(param_2 + 0x724a);
      *(undefined1 *)(param_2 + 0x6c83) = *(undefined1 *)(param_2 + 0x724b);
      *(undefined1 *)(param_2 + 0x6c84) = *(undefined1 *)(param_2 + 0x7244);
      *(undefined1 *)(param_2 + 0x6c85) = *(undefined1 *)(param_2 + 0x7248);
      *(byte *)(param_2 + 0x6c86) = *(byte *)(param_2 + 0x7247);
    }
  }
  *(undefined1 *)(param_2 + 0x7234) = 0;
  uVar8 = _UNK_1808ad748;
  uVar7 = _DAT_1808ad740;
  uVar6 = _UNK_1808ad738;
  uVar5 = _DAT_1808ad730;
  uVar4 = _UNK_1808ad718;
  uVar20 = _DAT_1808ad710;
  uVar46 = 0;
  do {
    uVar21 = FUN_1800f2490(uVar46 & 0xffffffff);
    uVar22 = FUN_180013350(local_1d8,"targets.");
    uVar21 = FUN_180042850(local_198,uVar22,uVar21);
    FUN_180042850(local_538,uVar21,".esp.");
    FUN_18000f890(local_198);
    FUN_18000f890(local_1d8);
    uVar21 = FUN_180073a70(local_178,local_538,"item.health_bar.enabled");
    uVar44 = uVar44 | 1;
    local_1264 = uVar44;
    puVar16 = (undefined8 *)FUN_1801425e0(uVar21,local_898);
    local_da8 = *puVar16;
    uStack_da0 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_da8);
    if (lVar17 == 0) {
      uVar21 = FUN_180073a70(local_1b8,local_538,"enabled");
      uVar44 = 3;
      local_1264 = 3;
      puVar16 = (undefined8 *)FUN_1801425e0(uVar21,local_888);
      local_d98 = *puVar16;
      uStack_d90 = puVar16[1];
      lVar17 = FUN_180370aa0(param_1,&local_d98);
      if (lVar17 == 0) goto LAB_1800f7eb7;
      bVar48 = false;
    }
    else {
LAB_1800f7eb7:
      bVar48 = true;
    }
    if ((uVar44 & 2) != 0) {
      uVar44 = uVar44 & 0xfffffffd;
      local_1264 = uVar44;
      FUN_18000f890(local_1b8);
    }
    uVar44 = uVar44 & 0xfffffffe;
    local_1264 = uVar44;
    FUN_18000f890(local_178);
    if (!bVar48) {
      lVar17 = uVar46 * 0x192c;
      local_1220 = local_538;
      local_1100 = local_538;
      local_1130 = &local_1248;
      local_1128 = local_538;
      local_1140 = &local_1248;
      local_1138 = local_538;
      local_1230 = param_2 + 0x50 + lVar17;
      local_1228 = param_1;
      local_1108 = param_1;
      local_6e0 = lVar17;
      uVar11 = FUN_1800fb3f0(&local_1228,"box.enabled",1);
      local_1288 = (char *)((ulonglong)local_1288 & 0xffffffff00000000);
      FUN_1800fb910(&local_1230,0x1a,uVar11,0xffffffff);
      FUN_1800fb500(&local_1108,"box.color",param_2 + 0xfd8 + lVar17);
      uVar13 = FUN_1800fb7e0(&local_1140,&DAT_18058b644);
      uVar15 = FUN_1800fb670(&local_1130,&DAT_18058b644,0);
      uVar11 = FUN_1800fb3f0(&local_1228,&DAT_18058b644,1);
      local_1288._0_4_ = uVar13;
      FUN_1800fb910(&local_1230,5,uVar11,uVar15);
      FUN_1800fb500(&local_1108,"name_color",param_2 + 0x360 + lVar17);
      uVar11 = FUN_1800fb3f0(&local_1228,"avatar",0);
      *(undefined1 *)(param_2 + 0x11c4 + lVar17) = uVar11;
      uVar13 = FUN_1800fb7e0(&local_1140,"health_bar");
      uVar15 = FUN_1800fb670(&local_1130,"health_bar",2);
      uVar11 = FUN_1800fb3f0(&local_1228,"health_bar",1);
      local_1288._0_4_ = uVar13;
      FUN_1800fb910(&local_1230,0,uVar11,uVar15);
      uVar13 = FUN_1800fb7e0(&local_1140,"ammo_bar");
      uVar15 = FUN_1800fb670(&local_1130,"ammo_bar",1);
      uVar11 = FUN_1800fb3f0(&local_1228,"ammo_bar",0);
      local_1288._0_4_ = uVar13;
      FUN_1800fb910(&local_1230,0x15,uVar11,uVar15);
      cVar9 = FUN_1800fb3f0(&local_1228,"grenades",0);
      uVar13 = FUN_1800fb7e0(&local_1140,"weapon");
      uVar15 = FUN_1800fb670(&local_1130,"weapon",1);
      cVar10 = FUN_1800fb3f0(&local_1228,"weapon",1);
      local_1288._0_4_ = uVar13;
      FUN_1800fb910(&local_1230,0x17,cVar10 != '\0' || cVar9 != '\0',uVar15);
      uVar11 = FUN_1800fb3f0(&local_1228,"weapon",1);
      *(undefined1 *)(param_2 + 0x11d0 + local_6e0) = uVar11;
      *(char *)(param_2 + 0x11d1 + local_6e0) = cVar9;
      iVar14 = FUN_1800fb7e0(&local_1140,"weapon");
      uVar13 = FUN_1800fb670(&local_1130,"weapon",1);
      uVar11 = FUN_1800fb3f0(&local_1228,"weapon_text",0);
      local_1288._0_4_ = iVar14 + 1;
      FUN_1800fb910(&local_1230,0x18,uVar11,uVar13);
      uVar11 = FUN_1800fb3f0(&local_1228,"skeleton",0);
      local_1288 = (char *)((ulonglong)local_1288._4_4_ << 0x20);
      FUN_1800fb910(&local_1230,0x1b,uVar11,0xffffffff);
      lVar17 = local_6e0;
      FUN_1800fb500(&local_1108,"skeleton_color",local_6e0 + 0x1070 + param_2);
      cVar9 = FUN_1800fb3f0(&local_1228,"flags",0);
      if (cVar9 != '\0') {
        local_a58 = uVar5;
        uStack_a50 = uVar6;
        local_a48 = uVar20;
        uStack_a40 = uVar4;
        local_a38 = uVar7;
        uStack_a30 = uVar8;
        uVar21 = FUN_180073a70(local_158,local_538);
        puVar16 = (undefined8 *)FUN_1801425e0(uVar21,local_878);
        local_d88 = *puVar16;
        uStack_d80 = puVar16[1];
        piVar23 = (int *)FUN_180370aa0(param_1,&local_d88);
        FUN_18000f890(local_158);
        uVar42 = 0;
        lVar17 = lVar17 + param_2;
        do {
          if (((piVar23 == (int *)0x0) || (*piVar23 != 4)) ||
             (uVar24 = FUN_1801424d0(piVar23 + 0xc), uVar24 <= uVar42)) {
            cVar9 = uVar42 != 9;
          }
          else {
            uVar21 = FUN_1801424c0(piVar23 + 0xc,uVar42);
            cVar9 = FUN_180370bb0(uVar21,0);
          }
          if (cVar9 != '\0') {
            *(undefined1 *)
             (lVar17 + 0x54 + (longlong)*(int *)(local_a28 + uVar42 * 4 + -0x30) * 0x98) = 1;
          }
          uVar42 = uVar42 + 1;
        } while (uVar42 < 0xc);
      }
    }
    FUN_18000f890(local_538);
    uVar46 = uVar46 + 1;
  } while (uVar46 < 4);
  puVar16 = (undefined8 *)FUN_180010160(local_868,"features.hit_sound");
  local_d78 = *puVar16;
  uStack_d70 = puVar16[1];
  lVar17 = FUN_180370aa0(param_1,&local_d78);
  fVar3 = DAT_1808acb08;
  if (lVar17 == 0) {
    puVar16 = (undefined8 *)FUN_180010160(local_858,"hitsounds.hit.enabled");
    local_d68 = *puVar16;
    uStack_d60 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_d68);
    if (lVar17 == 0) {
      puVar16 = (undefined8 *)FUN_180010160(local_848,"hitsounds.kill.enabled");
      local_d58 = *puVar16;
      uStack_d50 = puVar16[1];
      lVar17 = FUN_180370aa0(param_1,&local_d58);
      if (lVar17 == 0) goto LAB_1800f848f;
    }
    if ((*(char *)(param_2 + 0x7090) == '\0') && (*(char *)(param_2 + 0x70d8) == '\0')) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    *(undefined1 *)(param_2 + 0x6c48) = uVar11;
    local_1204 = 300;
    local_1200 = 0;
    local_11fc = FUN_1804f3280(*(float *)(param_2 + 0x70d4) * fVar3);
    puVar18 = (undefined4 *)FUN_180042830(&local_11fc,&local_1200,&local_1204);
    uVar13 = *puVar18;
    local_11f8 = 300;
    local_11f4 = 0;
    local_11f0 = FUN_1804f3280(*(float *)(param_2 + 0x711c) * fVar3);
    puVar18 = (undefined4 *)FUN_180042830(&local_11f0,&local_11f4,&local_11f8);
    uVar15 = *puVar18;
    *(undefined4 *)(param_2 + 0x6c60) = uVar13;
    *(undefined4 *)(param_2 + 0x6c64) = uVar13;
    *(undefined4 *)(param_2 + 0x6c68) = uVar15;
    *(undefined4 *)(param_2 + 0x6c6c) = 100;
    *(undefined4 *)(param_2 + 0x6c70) = 100;
  }
LAB_1800f848f:
  *(undefined1 *)(param_2 + 0x7090) = 0;
  *(undefined1 *)(param_2 + 0x70d8) = 0;
  local_11ec = 3;
  local_11e8 = 0;
  puVar18 = (undefined4 *)FUN_180042830(param_2 + 0x6c78,&local_11e8,&local_11ec);
  *(undefined4 *)(param_2 + 0x6c78) = *puVar18;
  local_11e4 = 6;
  local_11e0 = 0;
  puVar18 = (undefined4 *)FUN_180042830(param_2 + 0x6c7c,&local_11e0,&local_11e4);
  *(undefined4 *)(param_2 + 0x6c7c) = *puVar18;
  puVar18 = (undefined4 *)(param_2 + 0x6c60);
  puVar19 = (undefined4 *)(param_2 + 0x6c74);
  if (param_2 != param_2 + 0x14) {
    do {
      local_11dc = 300;
      local_11d8 = 0;
      puVar25 = (undefined4 *)FUN_180042830(puVar18,&local_11d8,&local_11dc);
      *puVar18 = *puVar25;
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar19);
  }
  puVar16 = (undefined8 *)FUN_180010160(local_838,"grenade_release.minimum_damage");
  local_d48 = *puVar16;
  uStack_d40 = puVar16[1];
  lVar17 = FUN_180370aa0(param_1,&local_d48);
  if (lVar17 == 0) {
    puVar16 = (undefined8 *)FUN_180010160(local_828,"grenade_release.min_damage");
    local_d38 = *puVar16;
    uStack_d30 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_d38);
    if (lVar17 != 0) {
      local_11d4 = 0x32;
      local_11d0 = 0;
      local_11cc = FUN_1804f3280();
      puVar25 = (undefined4 *)FUN_180042830(&local_11cc,&local_11d0,&local_11d4);
      *(undefined4 *)(param_2 + 0x7228) = *puVar25;
    }
  }
  local_1148 = 0x32;
  local_11c8 = 0;
  puVar25 = (undefined4 *)FUN_180042830(param_2 + 0x7228,&local_11c8,&local_1148);
  *(undefined4 *)(param_2 + 0x7228) = *puVar25;
  local_11c4 = 100;
  local_11c0 = 0;
  puVar25 = (undefined4 *)FUN_180042830(param_2 + 0x722c,&local_11c0,&local_11c4);
  *(undefined4 *)(param_2 + 0x722c) = *puVar25;
  puVar16 = (undefined8 *)FUN_180010160(local_818,"ragebot.field_of_view");
  local_d28 = *puVar16;
  uStack_d20 = puVar16[1];
  lVar17 = FUN_180370aa0(param_1,&local_d28);
  if (lVar17 == 0) {
    puVar16 = (undefined8 *)FUN_180010160(local_808,"ragebot.max_fov");
    local_d18 = *puVar16;
    uStack_d10 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_d18);
    if (lVar17 != 0) {
      local_11bc = 0x43340000;
      local_11b8 = 0;
      puVar25 = (undefined4 *)FUN_18000b9a0(param_2 + 0x42bf8,&local_11b8,&local_11bc);
      *(undefined4 *)(param_2 + 0x42bd8) = *puVar25;
    }
    puVar16 = (undefined8 *)FUN_180010160(local_7f8,"ragebot.remove_spread");
    local_d08 = *puVar16;
    uStack_d00 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_d08);
    if (lVar17 != 0) {
      *(uint *)(param_2 + 0x42be8) = -(uint)(*(char *)(param_2 + 0x42bf0) != '\0') & 2;
    }
    puVar16 = (undefined8 *)FUN_180010160(local_7e8,"misc.jitter");
    local_cf8 = *puVar16;
    uStack_cf0 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_cf8);
    if (lVar17 != 0) {
      *(undefined1 *)(param_2 + 0x42bed) = *(undefined1 *)(param_2 + 0x6dac);
    }
    *(undefined1 *)(param_2 + 0x6dac) = 0;
    puVar16 = (undefined8 *)FUN_180010160(local_7d8,"autopeek.color");
    local_ce8 = *puVar16;
    uStack_ce0 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_ce8);
    if (lVar17 != 0) {
      *(undefined8 *)(param_2 + 0x42c28) = *(undefined8 *)(param_2 + 0x42c50);
      *(undefined8 *)(param_2 + 0x42c30) = *(undefined8 *)(param_2 + 0x42c58);
    }
  }
  puVar16 = (undefined8 *)FUN_180010160(local_7c8,"indicators.bomb_indicator");
  local_cd8 = *puVar16;
  uStack_cd0 = puVar16[1];
  lVar17 = FUN_180370aa0(param_1,&local_cd8);
  if (lVar17 == 0) {
    puVar16 = (undefined8 *)FUN_180010160(local_758,"indicators.items");
    local_cc8 = *puVar16;
    uStack_cc0 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_cc8);
    if (lVar17 != 0) {
      cVar9 = *(char *)(param_2 + 0x42d08);
      if ((cVar9 == '\0') || (*(char *)(param_2 + 0x42d0a) == '\0')) {
        *(undefined1 *)(param_2 + 0x42d13) = 0;
        if (cVar9 != '\0') goto LAB_1800f8818;
LAB_1800f882c:
        *(undefined1 *)(param_2 + 0x42d14) = 0;
        if (cVar9 != '\0') goto LAB_1800f8838;
      }
      else {
        *(undefined1 *)(param_2 + 0x42d13) = 1;
LAB_1800f8818:
        if (*(char *)(param_2 + 0x42d0b) == '\0') goto LAB_1800f882c;
        *(undefined1 *)(param_2 + 0x42d14) = 1;
LAB_1800f8838:
        if (*(char *)(param_2 + 0x42d0c) != '\0') {
          *(undefined1 *)(param_2 + 0x42d38) = 1;
          goto LAB_1800f886d;
        }
      }
      *(undefined1 *)(param_2 + 0x42d38) = 0;
      if (cVar9 == '\0') {
        *(undefined4 *)(param_2 + 0x42d0d) = 0;
        *(undefined2 *)(param_2 + 0x42d11) = 0;
      }
    }
  }
LAB_1800f886d:
  *(undefined1 *)(param_2 + 0x42d09) = 1;
  puVar16 = (undefined8 *)FUN_180010160(local_7a8,"misc.transparency_scoped");
  local_cb8 = *puVar16;
  uStack_cb0 = puVar16[1];
  lVar17 = FUN_180370aa0(param_1,&local_cb8);
  if (lVar17 == 0) {
    puVar16 = (undefined8 *)FUN_180010160(local_798,"misc.scope_blend");
    local_ca8 = *puVar16;
    uStack_ca0 = puVar16[1];
    lVar17 = FUN_180370aa0(param_1,&local_ca8);
    if (lVar17 != 0) {
      *(uint *)(param_2 + 0x6ca8) = (uint)(*(char *)(param_2 + 0x6c9d) != '\0');
      local_11b4 = 0x3efae148;
      local_11b0 = 0x3c23d70a;
      local_11ac = 100;
      local_11a8 = 0;
      FUN_18000b9a0(param_2 + 0x6ca0,&local_11b0,&local_11b4);
      local_11a4 = FUN_1804f3280();
      puVar25 = (undefined4 *)FUN_180042830(&local_11a4,&local_11a8,&local_11ac);
      *(undefined4 *)(param_2 + 0x6cb0) = *puVar25;
    }
  }
  puVar16 = (undefined8 *)FUN_180010160(local_788,"antiaim.pitch_order");
  local_c98 = *puVar16;
  uStack_c90 = puVar16[1];
  lVar17 = FUN_180370aa0(param_1,&local_c98);
  if (lVar17 == 0) {
    uVar13 = FUN_1800fb940(extraout_XMM0_Qa_01,*(undefined4 *)(param_2 + 0x6e20));
    *(undefined4 *)(param_2 + 0x6e20) = uVar13;
    pcVar34 = (char *)(param_2 + 0x433a0);
    if (param_2 != param_2 + 0x3900) {
      do {
        if ((*pcVar34 != '\0') && (iVar14 = strcmp(pcVar34,"antiaim.pitch"), iVar14 == 0)) {
          iVar14 = FUN_1800fb940();
          *(float *)(pcVar34 + 0x6c) = (float)iVar14;
        }
        pcVar34 = pcVar34 + 0xe4;
      } while (pcVar34 != (char *)(param_2 + 0x46ca0));
    }
    *(undefined4 *)(param_2 + 0x6e64) = 1;
  }
  pcVar34 = (char *)(param_2 + 0x433a0);
  *(undefined4 *)(param_2 + 0x6e40) = 0;
  *(undefined1 *)(param_2 + 0x6e4c) = 1;
  if (param_2 != param_2 + 0x3900) {
    do {
      if ((*pcVar34 != '\0') &&
         ((iVar14 = strcmp(pcVar34,"antiaim.manual"), iVar14 == 0 ||
          (iVar14 = strcmp(pcVar34,"antiaim.hide_shots"), iVar14 == 0)))) {
        local_c38 = 0;
        uStack_c30 = 0;
        local_c28 = 0;
        uStack_c20 = 0;
        local_c18 = 0;
        uStack_c10 = 0;
        local_c08 = 0;
        uStack_c00 = 0;
        local_bf8 = 0;
        uStack_bf0 = 0;
        local_be8 = 0;
        uStack_be0 = 0;
        local_bd8 = 0;
        uStack_bd0 = CONCAT31(uStack_bd0._1_3_,1);
        uStack_bcc = 0;
        local_bc8 = 0;
        uStack_bc0 = 0;
        local_bb8 = 0;
        uStack_bb0 = 0;
        local_ba8 = 0;
        uStack_ba0 = 0;
        local_b98 = 0;
        uStack_b90 = 0;
        local_b88 = 0;
        uStack_b80 = 0;
        local_b78 = 0;
        uStack_b70 = 0;
        local_b68 = 0;
        uStack_b60 = 0;
        local_b58 = CONCAT22(local_b58._2_2_,0x100);
        pcVar34[0] = '\0';
        pcVar34[1] = '\0';
        pcVar34[2] = '\0';
        pcVar34[3] = '\0';
        pcVar34[4] = '\0';
        pcVar34[5] = '\0';
        pcVar34[6] = '\0';
        pcVar34[7] = '\0';
        pcVar34[8] = '\0';
        pcVar34[9] = '\0';
        pcVar34[10] = '\0';
        pcVar34[0xb] = '\0';
        pcVar34[0xc] = '\0';
        pcVar34[0xd] = '\0';
        pcVar34[0xe] = '\0';
        pcVar34[0xf] = '\0';
        pcVar34[0x10] = '\0';
        pcVar34[0x11] = '\0';
        pcVar34[0x12] = '\0';
        pcVar34[0x13] = '\0';
        pcVar34[0x14] = '\0';
        pcVar34[0x15] = '\0';
        pcVar34[0x16] = '\0';
        pcVar34[0x17] = '\0';
        pcVar34[0x18] = '\0';
        pcVar34[0x19] = '\0';
        pcVar34[0x1a] = '\0';
        pcVar34[0x1b] = '\0';
        pcVar34[0x1c] = '\0';
        pcVar34[0x1d] = '\0';
        pcVar34[0x1e] = '\0';
        pcVar34[0x1f] = '\0';
        pcVar34[0x20] = '\0';
        pcVar34[0x21] = '\0';
        pcVar34[0x22] = '\0';
        pcVar34[0x23] = '\0';
        pcVar34[0x24] = '\0';
        pcVar34[0x25] = '\0';
        pcVar34[0x26] = '\0';
        pcVar34[0x27] = '\0';
        pcVar34[0x28] = '\0';
        pcVar34[0x29] = '\0';
        pcVar34[0x2a] = '\0';
        pcVar34[0x2b] = '\0';
        pcVar34[0x2c] = '\0';
        pcVar34[0x2d] = '\0';
        pcVar34[0x2e] = '\0';
        pcVar34[0x2f] = '\0';
        pcVar34[0x30] = '\0';
        pcVar34[0x31] = '\0';
        pcVar34[0x32] = '\0';
        pcVar34[0x33] = '\0';
        pcVar34[0x34] = '\0';
        pcVar34[0x35] = '\0';
        pcVar34[0x36] = '\0';
        pcVar34[0x37] = '\0';
        pcVar34[0x38] = '\0';
        pcVar34[0x39] = '\0';
        pcVar34[0x3a] = '\0';
        pcVar34[0x3b] = '\0';
        pcVar34[0x3c] = '\0';
        pcVar34[0x3d] = '\0';
        pcVar34[0x3e] = '\0';
        pcVar34[0x3f] = '\0';
        pcVar34[0x40] = '\0';
        pcVar34[0x41] = '\0';
        pcVar34[0x42] = '\0';
        pcVar34[0x43] = '\0';
        pcVar34[0x44] = '\0';
        pcVar34[0x45] = '\0';
        pcVar34[0x46] = '\0';
        pcVar34[0x47] = '\0';
        pcVar34[0x48] = '\0';
        pcVar34[0x49] = '\0';
        pcVar34[0x4a] = '\0';
        pcVar34[0x4b] = '\0';
        pcVar34[0x4c] = '\0';
        pcVar34[0x4d] = '\0';
        pcVar34[0x4e] = '\0';
        pcVar34[0x4f] = '\0';
        pcVar34[0x50] = '\0';
        pcVar34[0x51] = '\0';
        pcVar34[0x52] = '\0';
        pcVar34[0x53] = '\0';
        pcVar34[0x54] = '\0';
        pcVar34[0x55] = '\0';
        pcVar34[0x56] = '\0';
        pcVar34[0x57] = '\0';
        pcVar34[0x58] = '\0';
        pcVar34[0x59] = '\0';
        pcVar34[0x5a] = '\0';
        pcVar34[0x5b] = '\0';
        pcVar34[0x5c] = '\0';
        pcVar34[0x5d] = '\0';
        pcVar34[0x5e] = '\0';
        pcVar34[0x5f] = '\0';
        *(undefined1 (*) [16])(pcVar34 + 0x60) = ZEXT416(uStack_bd0) << 0x40;
        pcVar34[0x70] = '\0';
        pcVar34[0x71] = '\0';
        pcVar34[0x72] = '\0';
        pcVar34[0x73] = '\0';
        pcVar34[0x74] = '\0';
        pcVar34[0x75] = '\0';
        pcVar34[0x76] = '\0';
        pcVar34[0x77] = '\0';
        pcVar34[0x78] = '\0';
        pcVar34[0x79] = '\0';
        pcVar34[0x7a] = '\0';
        pcVar34[0x7b] = '\0';
        pcVar34[0x7c] = '\0';
        pcVar34[0x7d] = '\0';
        pcVar34[0x7e] = '\0';
        pcVar34[0x7f] = '\0';
        pcVar34[0x80] = '\0';
        pcVar34[0x81] = '\0';
        pcVar34[0x82] = '\0';
        pcVar34[0x83] = '\0';
        pcVar34[0x84] = '\0';
        pcVar34[0x85] = '\0';
        pcVar34[0x86] = '\0';
        pcVar34[0x87] = '\0';
        pcVar34[0x88] = '\0';
        pcVar34[0x89] = '\0';
        pcVar34[0x8a] = '\0';
        pcVar34[0x8b] = '\0';
        pcVar34[0x8c] = '\0';
        pcVar34[0x8d] = '\0';
        pcVar34[0x8e] = '\0';
        pcVar34[0x8f] = '\0';
        pcVar34[0x90] = '\0';
        pcVar34[0x91] = '\0';
        pcVar34[0x92] = '\0';
        pcVar34[0x93] = '\0';
        pcVar34[0x94] = '\0';
        pcVar34[0x95] = '\0';
        pcVar34[0x96] = '\0';
        pcVar34[0x97] = '\0';
        pcVar34[0x98] = '\0';
        pcVar34[0x99] = '\0';
        pcVar34[0x9a] = '\0';
        pcVar34[0x9b] = '\0';
        pcVar34[0x9c] = '\0';
        pcVar34[0x9d] = '\0';
        pcVar34[0x9e] = '\0';
        pcVar34[0x9f] = '\0';
        pcVar34[0xa0] = '\0';
        pcVar34[0xa1] = '\0';
        pcVar34[0xa2] = '\0';
        pcVar34[0xa3] = '\0';
        pcVar34[0xa4] = '\0';
        pcVar34[0xa5] = '\0';
        pcVar34[0xa6] = '\0';
        pcVar34[0xa7] = '\0';
        pcVar34[0xa8] = '\0';
        pcVar34[0xa9] = '\0';
        pcVar34[0xaa] = '\0';
        pcVar34[0xab] = '\0';
        pcVar34[0xac] = '\0';
        pcVar34[0xad] = '\0';
        pcVar34[0xae] = '\0';
        pcVar34[0xaf] = '\0';
        pcVar34[0xb0] = '\0';
        pcVar34[0xb1] = '\0';
        pcVar34[0xb2] = '\0';
        pcVar34[0xb3] = '\0';
        pcVar34[0xb4] = '\0';
        pcVar34[0xb5] = '\0';
        pcVar34[0xb6] = '\0';
        pcVar34[0xb7] = '\0';
        pcVar34[0xb8] = '\0';
        pcVar34[0xb9] = '\0';
        pcVar34[0xba] = '\0';
        pcVar34[0xbb] = '\0';
        pcVar34[0xbc] = '\0';
        pcVar34[0xbd] = '\0';
        pcVar34[0xbe] = '\0';
        pcVar34[0xbf] = '\0';
        pcVar34[0xc0] = '\0';
        pcVar34[0xc1] = '\0';
        pcVar34[0xc2] = '\0';
        pcVar34[0xc3] = '\0';
        pcVar34[0xc4] = '\0';
        pcVar34[0xc5] = '\0';
        pcVar34[0xc6] = '\0';
        pcVar34[199] = '\0';
        pcVar34[200] = '\0';
        pcVar34[0xc9] = '\0';
        pcVar34[0xca] = '\0';
        pcVar34[0xcb] = '\0';
        pcVar34[0xcc] = '\0';
        pcVar34[0xcd] = '\0';
        pcVar34[0xce] = '\0';
        pcVar34[0xcf] = '\0';
        pcVar34[0xd0] = '\0';
        pcVar34[0xd1] = '\0';
        pcVar34[0xd2] = '\0';
        pcVar34[0xd3] = '\0';
        pcVar34[0xd4] = '\0';
        pcVar34[0xd5] = '\0';
        pcVar34[0xd6] = '\0';
        pcVar34[0xd7] = '\0';
        pcVar34[0xd8] = '\0';
        pcVar34[0xd9] = '\0';
        pcVar34[0xda] = '\0';
        pcVar34[0xdb] = '\0';
        pcVar34[0xdc] = '\0';
        pcVar34[0xdd] = '\0';
        pcVar34[0xde] = '\0';
        pcVar34[0xdf] = '\0';
        *(undefined4 *)(pcVar34 + 0xe0) = local_b58;
      }
      pcVar34 = pcVar34 + 0xe4;
    } while (pcVar34 != (char *)(param_2 + 0x46ca0));
  }
  plVar43 = *(longlong **)(param_1 + 0x48);
  plVar33 = *(longlong **)(param_1 + 0x50);
  plVar27 = plVar43;
  if (plVar43 != plVar33) {
    do {
      if ((ulonglong)plVar27[3] < 0x10) {
        plVar26 = plVar27;
      }
      else {
        plVar26 = (longlong *)*plVar27;
      }
      if ((plVar27[2] == 0x1e) &&
         (iVar14 = memcmp("legitbot.global.aimbot.enabled",plVar26,0x1e), iVar14 == 0)) {
        if (plVar27 != (longlong *)0xffffffffffffffe0) goto LAB_1800fa001;
        break;
      }
      plVar27 = plVar27 + 0x10;
    } while (plVar27 != plVar33);
    puVar18 = (undefined4 *)0x746f62746967656c;
    puVar19 = (undefined4 *)0x6d69612e;
    plVar27 = plVar43;
    do {
      if ((ulonglong)plVar27[3] < 0x10) {
        plVar26 = plVar27;
      }
      else {
        plVar26 = (longlong *)*plVar27;
      }
      if (plVar27[2] == 0xc) {
        lVar17 = 0x746f62746967656c - *plVar26;
        if (lVar17 == 0) {
          lVar17 = 0x6d69612e - (ulonglong)*(uint *)(plVar26 + 1);
        }
        if (lVar17 == 0) {
          if (plVar27 != (longlong *)0xffffffffffffffe0) goto LAB_1800f8ca4;
          break;
        }
      }
      plVar27 = plVar27 + 0x10;
    } while (plVar27 != plVar33);
    do {
      if ((ulonglong)plVar43[3] < 0x10) {
        plVar27 = plVar43;
      }
      else {
        plVar27 = (longlong *)*plVar43;
      }
      if (plVar43[2] == 0xc) {
        lVar17 = 0x746f62746967656c - *plVar27;
        if (lVar17 == 0) {
          lVar17 = 0x766f662e - (ulonglong)*(uint *)(plVar27 + 1);
        }
        if (lVar17 == 0) {
          if (plVar43 != (longlong *)0xffffffffffffffe0) goto LAB_1800f8ca4;
          break;
        }
      }
      plVar43 = plVar43 + 0x10;
    } while (plVar43 != plVar33);
  }
  puVar16 = (undefined8 *)FUN_180010160(local_778,"triggerbot.enabled");
  local_c88 = *puVar16;
  uStack_c80 = puVar16[1];
  lVar17 = FUN_180370aa0(param_1,&local_c88);
  if (lVar17 == 0) goto LAB_1800fa001;
LAB_1800f8ca4:
  local_6e8 = 1;
  local_6e4 = 0;
  local_4f8 = (char *)0x0;
  uStack_4f0 = 0;
  local_4e8 = 0;
  local_4e0 = 0;
  local_1120 = param_1;
  local_4f8 = (char *)FUN_18000fb70(0x20);
  uVar20 = s_legitbot_hitboxes_1806f35a8._8_8_;
  local_4e8 = 0x11;
  local_4e0 = 0x1f;
  *(undefined8 *)local_4f8 = s_legitbot_hitboxes_1806f35a8._0_8_;
  *(undefined8 *)(local_4f8 + 8) = uVar20;
  local_4f8[0x10] = s_legitbot_hitboxes_1806f35a8[0x10];
  local_4f8[0x11] = '\0';
  local_1260 = FUN_1800fb970(&local_1120,&local_4f8,&local_6e8);
  FUN_18000f890(&local_4f8);
  local_6e0 = CONCAT26(local_6e0._6_2_,0x10000010101);
  local_4d8 = (char *)0x0;
  uStack_4d0 = 0;
  local_4c8 = 0;
  local_4c0 = 0;
  local_4d8 = (char *)FUN_18000fb70(0x20);
  local_4c8 = 0x19;
  local_4c0 = 0x1f;
  uVar20 = CONCAT35(s_legitbot_trigger_hitboxes_1806f3610._13_3_,
                    CONCAT41(s_legitbot_trigger_hitboxes_1806f3610._9_4_,
                             s_legitbot_trigger_hitboxes_1806f3610[8]));
  *(undefined8 *)local_4d8 = s_legitbot_trigger_hitboxes_1806f3610._0_8_;
  *(undefined8 *)(local_4d8 + 8) = uVar20;
  uVar2 = s_legitbot_trigger_hitboxes_1806f3610._21_4_;
  uVar15 = s_legitbot_trigger_hitboxes_1806f3610._17_4_;
  uVar13 = s_legitbot_trigger_hitboxes_1806f3610._13_4_;
  *(undefined4 *)(local_4d8 + 9) = s_legitbot_trigger_hitboxes_1806f3610._9_4_;
  *(undefined4 *)(local_4d8 + 0xd) = uVar13;
  *(undefined4 *)(local_4d8 + 0x11) = uVar15;
  *(undefined4 *)(local_4d8 + 0x15) = uVar2;
  local_4d8[0x19] = '\0';
  plVar43 = &local_6e0;
  local_1268 = FUN_1800fb970(&local_1120,&local_4d8);
  FUN_18000f890(&local_4d8);
  local_6d8 = (char *)0x0;
  uStack_6d0 = 0;
  local_6c8 = 0;
  local_6c0 = 0;
  pcVar34 = (char *)FUN_18000fb70(0x20);
  uVar20 = s_triggerbot_enabled_1806f3590._8_8_;
  local_6c8 = 0x12;
  local_6c0 = 0x1f;
  *(undefined8 *)pcVar34 = s_triggerbot_enabled_1806f3590._0_8_;
  *(undefined8 *)(pcVar34 + 8) = uVar20;
  *(undefined2 *)(pcVar34 + 0x10) = s_triggerbot_enabled_1806f3590._16_2_;
  pcVar34[0x12] = '\0';
  uVar45 = uVar44 | 4;
  puVar47 = *(undefined8 **)(param_1 + 0x50);
  local_1264 = uVar45;
  local_6d8 = pcVar34;
  for (puVar16 = *(undefined8 **)(param_1 + 0x48); puVar16 != puVar47; puVar16 = puVar16 + 0x10) {
    if ((ulonglong)puVar16[3] < 0x10) {
      puVar37 = puVar16;
    }
    else {
      puVar37 = (undefined8 *)*puVar16;
    }
    if ((puVar16[2] == 0x12) &&
       (plVar43 = (longlong *)0x12, iVar14 = memcmp(pcVar34,puVar37,0x12), iVar14 == 0)) {
      if ((int *)(puVar16 + 4) != (int *)0x0) {
        iVar14 = *(int *)(puVar16 + 4);
        if (iVar14 == 1) {
          cVar9 = *(char *)((longlong)puVar16 + 0x24);
        }
        else if ((iVar14 == 2) && ((double)puVar16[5] != 0.0)) {
          cVar9 = '\x01';
        }
        else {
          cVar9 = '\0';
        }
        if (cVar9 != '\0') {
          FUN_18000f870(local_438,local_1268);
          plVar43 = (longlong *)&DAT_00000018;
          FUN_1800133a0(local_438,"legitbot.trigger.enabled");
          uVar45 = uVar44 | 0xc;
          pppppuVar31 = local_438;
          if (0xf < local_420) {
            pppppuVar31 = local_438[0];
          }
          puVar16 = *(undefined8 **)(param_1 + 0x48);
          puVar47 = *(undefined8 **)(param_1 + 0x50);
          local_1264 = uVar45;
          if (puVar16 == puVar47) goto LAB_1800f9043;
          goto LAB_1800f8fd0;
        }
      }
      break;
    }
  }
LAB_1800f8e9a:
  local_1267 = 0;
  goto LAB_1800f8e9f;
LAB_1800f8fd0:
  if ((ulonglong)puVar16[3] < 0x10) {
    puVar37 = puVar16;
  }
  else {
    puVar37 = (undefined8 *)*puVar16;
  }
  if ((local_428 != (longlong *)puVar16[2]) ||
     ((local_428 != (longlong *)0x0 &&
      (plVar43 = local_428, iVar14 = memcmp(pppppuVar31,puVar37,(size_t)local_428), iVar14 != 0))))
  {
    puVar16 = puVar16 + 0x10;
    if (puVar16 == puVar47) goto code_r0x0001800f9002;
    goto LAB_1800f8fd0;
  }
  if ((int *)(puVar16 + 4) == (int *)0x0) goto LAB_1800f9043;
  iVar14 = *(int *)(puVar16 + 4);
  if (iVar14 == 1) {
    cVar9 = *(char *)((longlong)puVar16 + 0x24);
  }
  else if ((iVar14 == 2) && ((double)puVar16[5] == 0.0)) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
  }
  if (cVar9 == '\0') goto LAB_1800f8e9a;
LAB_1800f9043:
  local_1267 = 1;
LAB_1800f8e9f:
  if ((uVar45 & 8) != 0) {
    uVar45 = uVar45 & 0xfffffff7;
    local_1264 = uVar45;
    FUN_18000f890(local_438);
  }
  if ((uVar45 & 4) != 0) {
    local_1264 = uVar45 & 0xfffffffb;
    pcVar34 = (char *)(ulonglong)local_1264;
    if (0xf < local_6c0) {
      plVar33 = (longlong *)(local_6c0 + 1);
      pcVar36 = local_6d8;
      if ((longlong *)0xfff < plVar33) {
        pcVar36 = *(char **)(local_6d8 + -8);
        puVar39 = auStack_12a8;
        if ((char *)0x1f < local_6d8 + (-8 - (longlong)pcVar36)) goto LAB_1800fa4d9;
        plVar33 = (longlong *)(local_6c0 + 0x28);
      }
      thunk_FUN_1803d64e0(pcVar36,plVar33);
    }
    local_6c8 = 0;
    local_6c0 = 0xf;
    local_6d8 = (char *)((ulonglong)local_6d8 & 0xffffffffffffff00);
  }
  local_4a8 = 0xc;
  local_4a0 = 0xf;
  uStack_4b0 = (ulonglong)(uint)s_legitbot_aim_1806f35c0._8_4_;
  puVar47 = *(undefined8 **)(param_1 + 0x50);
  local_4b8 = (char  [8])s_legitbot_aim_1806f35c0._0_8_;
  for (puVar16 = *(undefined8 **)(param_1 + 0x48); puVar16 != puVar47; puVar16 = puVar16 + 0x10) {
    if ((ulonglong)puVar16[3] < 0x10) {
      puVar37 = puVar16;
    }
    else {
      puVar37 = (undefined8 *)*puVar16;
    }
    if (puVar16[2] == 0xc) {
      plVar43 = (longlong *)&DAT_0000000c;
      iVar14 = memcmp(local_4b8,puVar37,0xc);
      if (iVar14 == 0) {
        if ((int *)(puVar16 + 4) != (int *)0x0) {
          iVar14 = *(int *)(puVar16 + 4);
          if (iVar14 == 1) {
            uVar11 = *(undefined1 *)((longlong)puVar16 + 0x24);
            goto LAB_1800f90f4;
          }
          if ((iVar14 == 2) && ((double)puVar16[5] == 0.0)) {
            uVar11 = 0;
            goto LAB_1800f90f4;
          }
        }
        break;
      }
    }
  }
  uVar11 = 1;
LAB_1800f90f4:
  *(undefined1 *)(param_2 + 0x3a7d8) = uVar11;
  FUN_18000f890(local_4b8);
  if (local_1260 != '\0') {
    if ((char)local_6e8 == '\0') {
      local_125c._0_1_ = '\0';
      if (local_6e4._1_1_ != '\0') goto LAB_1800f9129;
    }
    else {
LAB_1800f9129:
      local_125c._0_1_ = '\x01';
    }
    local_125c = CONCAT13(local_6e8._3_1_,
                          CONCAT12(local_6e8._2_1_,CONCAT11(local_6e8._1_1_,(char)local_125c)));
    local_1258 = (undefined1)local_6e4;
    pcVar34 = (char *)&local_125c;
    do {
      if (*pcVar34 != '\0') {
        *(undefined4 *)(param_2 + 0x3a7f4) = local_125c;
        *(undefined1 *)(param_2 + 0x3a7f8) = (undefined1)local_6e4;
        break;
      }
      pcVar34 = pcVar34 + 1;
    } while (pcVar34 != local_1257);
  }
  local_698 = (char *)0x0;
  uStack_690 = 0;
  local_688 = 0;
  local_680 = 0;
  pcVar34 = (char *)FUN_18000fb70(0x20);
  local_688 = 0x19;
  local_680 = 0x1f;
  uVar20 = CONCAT71(s_legitbot_first_shot_delay_1806f35d0._9_7_,
                    s_legitbot_first_shot_delay_1806f35d0[8]);
  *(undefined8 *)pcVar34 = s_legitbot_first_shot_delay_1806f35d0._0_8_;
  *(undefined8 *)(pcVar34 + 8) = uVar20;
  uVar20 = s_legitbot_first_shot_delay_1806f35d0._17_8_;
  *(ulonglong *)(pcVar34 + 9) =
       CONCAT17(s_legitbot_first_shot_delay_1806f35d0[0x10],
                s_legitbot_first_shot_delay_1806f35d0._9_7_);
  *(undefined8 *)(pcVar34 + 0x11) = uVar20;
  pcVar34[0x19] = '\0';
  puVar47 = *(undefined8 **)(param_1 + 0x50);
  local_698 = pcVar34;
  for (puVar16 = *(undefined8 **)(param_1 + 0x48); puVar16 != puVar47; puVar16 = puVar16 + 0x10) {
    if ((ulonglong)puVar16[3] < 0x10) {
      puVar37 = puVar16;
    }
    else {
      puVar37 = (undefined8 *)*puVar16;
    }
    if ((puVar16[2] == 0x19) &&
       (plVar43 = (longlong *)&DAT_00000019, iVar14 = memcmp(pcVar34,puVar37,0x19), iVar14 == 0)) {
      if ((int *)(puVar16 + 4) != (int *)0x0) {
        iVar14 = *(int *)(puVar16 + 4);
        if (iVar14 == 1) {
          uVar11 = *(undefined1 *)((longlong)puVar16 + 0x24);
          goto LAB_1800f9293;
        }
        if ((iVar14 == 2) && ((double)puVar16[5] != 0.0)) {
          uVar11 = 1;
          goto LAB_1800f9293;
        }
      }
      break;
    }
  }
  uVar11 = 0;
LAB_1800f9293:
  *(undefined1 *)(param_2 + 0x3a804) = uVar11;
  if (0xf < local_680) {
    plVar33 = (longlong *)(local_680 + 1);
    pcVar36 = pcVar34;
    if ((longlong *)0xfff < plVar33) {
      pcVar36 = *(char **)(pcVar34 + -8);
      puVar39 = auStack_12a8;
      if ((char *)0x1f < pcVar34 + (-8 - (longlong)pcVar36)) {
LAB_1800fa4d9:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar40 = puVar39 + 8;
        goto LAB_1800fa4e0;
      }
      plVar33 = (longlong *)(local_680 + 0x28);
    }
    thunk_FUN_1803d64e0(pcVar36,plVar33);
  }
  local_688 = 0;
  local_680 = 0xf;
  local_698 = (char *)((ulonglong)local_698 & 0xffffffffffffff00);
  *(undefined1 *)(param_2 + 0x3c0d8) = local_1267;
  if (local_1268 != '\0') {
    if ((char)local_6e0 == '\0') {
      local_1254._0_1_ = '\0';
      if (local_6e0._5_1_ != '\0') goto LAB_1800f9322;
    }
    else {
LAB_1800f9322:
      local_1254._0_1_ = '\x01';
    }
    local_1254 = CONCAT13(local_6e0._3_1_,
                          CONCAT12(local_6e0._2_1_,CONCAT11(local_6e0._1_1_,(char)local_1254)));
    local_1250 = local_6e0._4_1_;
    pcVar34 = (char *)&local_1254;
    do {
      if (*pcVar34 != '\0') {
        *(undefined4 *)(param_2 + 0x3c0ec) = local_1254;
        *(undefined1 *)(param_2 + 0x3c0f0) = local_6e0._4_1_;
        break;
      }
      pcVar34 = pcVar34 + 1;
    } while (pcVar34 != local_124f);
  }
  puVar47 = *(undefined8 **)(param_1 + 0x50);
  for (puVar16 = *(undefined8 **)(param_1 + 0x48); puVar16 != puVar47; puVar16 = puVar16 + 0x10) {
    if ((ulonglong)puVar16[3] < 0x10) {
      puVar37 = puVar16;
    }
    else {
      puVar37 = (undefined8 *)*puVar16;
    }
    if ((puVar16[2] == 0x1a) &&
       (iVar14 = memcmp("legitbot.trigger.hitchance",puVar37,0x1a), iVar14 == 0)) {
      if (puVar16 != (undefined8 *)0xffffffffffffffe0) {
        local_11a0 = 1;
        local_598 = (char *)0x0;
        uStack_590 = 0;
        local_588 = 0;
        local_580 = 0;
        pcVar34 = (char *)FUN_18000fb70(0x20);
        local_598 = pcVar34;
        local_588 = 0x1a;
        local_580 = 0x1f;
        uVar20 = CONCAT62(s_legitbot_trigger_hitchance_1806f35f0._10_6_,
                          s_legitbot_trigger_hitchance_1806f35f0._8_2_);
        *(undefined8 *)pcVar34 = s_legitbot_trigger_hitchance_1806f35f0._0_8_;
        *(undefined8 *)(pcVar34 + 8) = uVar20;
        uVar20 = s_legitbot_trigger_hitchance_1806f35f0._18_8_;
        *(ulonglong *)(pcVar34 + 10) =
             CONCAT26(s_legitbot_trigger_hitchance_1806f35f0._16_2_,
                      s_legitbot_trigger_hitchance_1806f35f0._10_6_);
        *(undefined8 *)(pcVar34 + 0x12) = uVar20;
        pcVar34[0x1a] = '\0';
        puVar16 = *(undefined8 **)(local_1248 + 0x48);
        puVar47 = *(undefined8 **)(local_1248 + 0x50);
        goto joined_r0x0001800f94a4;
      }
      break;
    }
  }
LAB_1800f9519:
  puVar47 = *(undefined8 **)(param_1 + 0x50);
  for (puVar16 = *(undefined8 **)(param_1 + 0x48); puVar16 != puVar47; puVar16 = puVar16 + 0x10) {
    if ((ulonglong)puVar16[3] < 0x10) {
      puVar37 = puVar16;
    }
    else {
      puVar37 = (undefined8 *)*puVar16;
    }
    if ((puVar16[2] == 0x16) &&
       (iVar14 = memcmp("legitbot.trigger.delay",puVar37,0x16), iVar14 == 0)) {
      if (puVar16 != (undefined8 *)0xffffffffffffffe0) {
        local_1198[2] = 200;
        local_1198[0] = 0;
        local_578 = (char *)0x0;
        uStack_570 = 0;
        local_568 = 0;
        local_560 = 0;
        pcVar34 = (char *)FUN_18000fb70(0x20);
        local_578 = pcVar34;
        local_568 = 0x16;
        local_560 = 0x1f;
        uVar20 = CONCAT26(s_legitbot_trigger_delay_1806f3680._14_2_,
                          s_legitbot_trigger_delay_1806f3680._8_6_);
        *(undefined8 *)pcVar34 = s_legitbot_trigger_delay_1806f3680._0_8_;
        *(undefined8 *)(pcVar34 + 8) = uVar20;
        *(ulonglong *)(pcVar34 + 0xe) =
             CONCAT62(s_legitbot_trigger_delay_1806f3680._16_6_,
                      s_legitbot_trigger_delay_1806f3680._14_2_);
        pcVar34[0x16] = '\0';
        puVar16 = *(undefined8 **)(local_1248 + 0x48);
        puVar47 = *(undefined8 **)(local_1248 + 0x50);
        goto joined_r0x0001800f9622;
      }
      break;
    }
  }
LAB_1800f9692:
  puVar47 = *(undefined8 **)(param_1 + 0x50);
  for (puVar16 = *(undefined8 **)(param_1 + 0x48); puVar16 != puVar47; puVar16 = puVar16 + 0x10) {
    if ((ulonglong)puVar16[3] < 0x10) {
      puVar37 = puVar16;
    }
    else {
      puVar37 = (undefined8 *)*puVar16;
    }
    if (puVar16[2] == 0x1b) {
      plVar43 = (longlong *)&DAT_0000001b;
      iVar14 = memcmp("legitbot.trigger.min_damage",puVar37,0x1b);
      if (iVar14 == 0) {
        if (puVar16 != (undefined8 *)0xffffffffffffffe0) {
          local_1198[5] = 100;
          local_1198[3] = 0;
          local_6b8 = (char *)0x0;
          uStack_6b0 = 0;
          local_6a8 = 0;
          local_6a0 = 0;
          pcVar34 = (char *)FUN_18000fb70(0x20);
          local_6b8 = pcVar34;
          local_6a8 = 0x1b;
          local_6a0 = 0x1f;
          uVar20 = CONCAT53(s_legitbot_trigger_min_damage_1806f3698._11_5_,
                            s_legitbot_trigger_min_damage_1806f3698._8_3_);
          *(undefined8 *)pcVar34 = s_legitbot_trigger_min_damage_1806f3698._0_8_;
          *(undefined8 *)(pcVar34 + 8) = uVar20;
          uVar20 = s_legitbot_trigger_min_damage_1806f3698._19_8_;
          *(ulonglong *)(pcVar34 + 0xb) =
               CONCAT35(s_legitbot_trigger_min_damage_1806f3698._16_3_,
                        s_legitbot_trigger_min_damage_1806f3698._11_5_);
          *(undefined8 *)(pcVar34 + 0x13) = uVar20;
          pcVar34[0x1b] = '\0';
          puVar16 = *(undefined8 **)(local_1248 + 0x48);
          puVar47 = *(undefined8 **)(local_1248 + 0x50);
          goto joined_r0x0001800f9792;
        }
        break;
      }
    }
  }
LAB_1800f9855:
  local_618 = (char *)0x0;
  uStack_610 = 0;
  local_608 = 0;
  local_600 = 0;
  pcVar34 = (char *)FUN_18000fb70(0x20);
  local_608 = 0x1a;
  local_600 = 0x1f;
  uVar20 = CONCAT26(s_legitbot_trigger_autoscope_1806f3650._14_2_,
                    CONCAT42(s_legitbot_trigger_autoscope_1806f3650._10_4_,
                             s_legitbot_trigger_autoscope_1806f3650._8_2_));
  *(undefined8 *)pcVar34 = s_legitbot_trigger_autoscope_1806f3650._0_8_;
  *(undefined8 *)(pcVar34 + 8) = uVar20;
  uVar2 = s_legitbot_trigger_autoscope_1806f3650._22_4_;
  uVar15 = s_legitbot_trigger_autoscope_1806f3650._18_4_;
  uVar13 = CONCAT22(s_legitbot_trigger_autoscope_1806f3650._16_2_,
                    s_legitbot_trigger_autoscope_1806f3650._14_2_);
  *(undefined4 *)(pcVar34 + 10) = s_legitbot_trigger_autoscope_1806f3650._10_4_;
  *(undefined4 *)(pcVar34 + 0xe) = uVar13;
  *(undefined4 *)(pcVar34 + 0x12) = uVar15;
  *(undefined4 *)(pcVar34 + 0x16) = uVar2;
  pcVar34[0x1a] = '\0';
  puVar47 = *(undefined8 **)(param_1 + 0x50);
  local_618 = pcVar34;
  for (puVar16 = *(undefined8 **)(param_1 + 0x48); puVar16 != puVar47; puVar16 = puVar16 + 0x10) {
    if ((ulonglong)puVar16[3] < 0x10) {
      puVar37 = puVar16;
    }
    else {
      puVar37 = (undefined8 *)*puVar16;
    }
    if ((puVar16[2] == 0x1a) && (iVar14 = memcmp(pcVar34,puVar37,0x1a), iVar14 == 0)) {
      if ((int *)(puVar16 + 4) != (int *)0x0) {
        iVar14 = *(int *)(puVar16 + 4);
        if (iVar14 == 1) {
          uVar11 = *(undefined1 *)((longlong)puVar16 + 0x24);
          goto LAB_1800f9936;
        }
        if ((iVar14 == 2) && ((double)puVar16[5] != 0.0)) {
          uVar11 = 1;
          goto LAB_1800f9936;
        }
      }
      break;
    }
  }
  uVar11 = 0;
LAB_1800f9936:
  *(undefined1 *)(param_2 + 0x3c110) = uVar11;
  FUN_18000f890(&local_618);
  local_488 = 0xc;
  local_480 = 0xf;
  uStack_490 = (ulonglong)(uint)s_legitbot_rcs_1806f3670._8_4_;
  puVar47 = *(undefined8 **)(param_1 + 0x50);
  local_498 = (char  [8])s_legitbot_rcs_1806f3670._0_8_;
  for (puVar16 = *(undefined8 **)(param_1 + 0x48); puVar16 != puVar47; puVar16 = puVar16 + 0x10) {
    if ((ulonglong)puVar16[3] < 0x10) {
      puVar37 = puVar16;
    }
    else {
      puVar37 = (undefined8 *)*puVar16;
    }
    if ((puVar16[2] == 0xc) && (iVar14 = memcmp(local_498,puVar37,0xc), iVar14 == 0)) {
      if ((int *)(puVar16 + 4) != (int *)0x0) {
        iVar14 = *(int *)(puVar16 + 4);
        if (iVar14 == 1) {
          uVar11 = *(undefined1 *)((longlong)puVar16 + 0x24);
          goto LAB_1800f9a22;
        }
        if ((iVar14 == 2) && ((double)puVar16[5] != 0.0)) {
          uVar11 = 1;
          goto LAB_1800f9a22;
        }
      }
      break;
    }
  }
  uVar11 = 0;
LAB_1800f9a22:
  *(undefined1 *)(param_2 + 0x3d08c) = uVar11;
  FUN_18000f890(local_498);
  local_1198[8] = 100;
  local_1198[6] = 0;
  local_5f8 = (char *)0x0;
  uStack_5f0 = 0;
  local_5e8 = 0;
  local_5e0 = 0;
  pcVar34 = (char *)FUN_18000fb70(0x20);
  uVar20 = s_legitbot_rcs_pitch_1806f36e8._8_8_;
  local_5e8 = 0x12;
  local_5e0 = 0x1f;
  *(undefined8 *)pcVar34 = s_legitbot_rcs_pitch_1806f36e8._0_8_;
  *(undefined8 *)(pcVar34 + 8) = uVar20;
  *(undefined2 *)(pcVar34 + 0x10) = s_legitbot_rcs_pitch_1806f36e8._16_2_;
  pcVar34[0x12] = '\0';
  puVar47 = *(undefined8 **)(local_1248 + 0x50);
  local_5f8 = pcVar34;
  for (puVar16 = *(undefined8 **)(local_1248 + 0x48); puVar16 != puVar47; puVar16 = puVar16 + 0x10)
  {
    if ((ulonglong)puVar16[3] < 0x10) {
      puVar37 = puVar16;
    }
    else {
      puVar37 = (undefined8 *)*puVar16;
    }
    if ((puVar16[2] == 0x12) && (iVar14 = memcmp(pcVar34,puVar37,0x12), iVar14 == 0)) {
      if (puVar16 != (undefined8 *)0xffffffffffffffe0) {
        dVar49 = (double)FUN_180370b10();
        goto LAB_1800f9b4c;
      }
      break;
    }
  }
  dVar49 = DAT_1808ac4a8;
LAB_1800f9b4c:
  local_1198[7] = FUN_1805166e0(dVar49 * DAT_1808ac6a8);
  piVar23 = local_1198 + 6;
  if (-1 < local_1198[7]) {
    piVar23 = local_1198 + 7;
  }
  piVar28 = local_1198 + 8;
  if (local_1198[7] < 0x65) {
    piVar28 = piVar23;
  }
  *(int *)(param_2 + 0x3d094) = *piVar28;
  FUN_18000f890(&local_5f8);
  local_1198[0xb] = 100;
  local_1198[9] = 0;
  local_5d8 = (char *)0x0;
  uStack_5d0 = 0;
  local_5c8 = 0;
  local_5c0 = 0;
  pcVar34 = (char *)FUN_18000fb70(0x20);
  uVar20 = s_legitbot_rcs_yaw_1806f3700._8_8_;
  local_5c8 = 0x10;
  local_5c0 = 0x1f;
  *(undefined8 *)pcVar34 = s_legitbot_rcs_yaw_1806f3700._0_8_;
  *(undefined8 *)(pcVar34 + 8) = uVar20;
  pcVar34[0x10] = '\0';
  puVar47 = *(undefined8 **)(local_1248 + 0x50);
  local_5d8 = pcVar34;
  for (puVar16 = *(undefined8 **)(local_1248 + 0x48); puVar16 != puVar47; puVar16 = puVar16 + 0x10)
  {
    if ((ulonglong)puVar16[3] < 0x10) {
      puVar37 = puVar16;
    }
    else {
      puVar37 = (undefined8 *)*puVar16;
    }
    if ((puVar16[2] == 0x10) && (iVar14 = memcmp(pcVar34,puVar37,0x10), iVar14 == 0)) {
      if (puVar16 != (undefined8 *)0xffffffffffffffe0) {
        FUN_180370b10();
      }
      break;
    }
  }
  local_1198[10] = FUN_1805166e0();
  piVar23 = local_1198 + 9;
  if (-1 < local_1198[10]) {
    piVar23 = local_1198 + 10;
  }
  piVar28 = local_1198 + 0xb;
  if (local_1198[10] < 0x65) {
    piVar28 = piVar23;
  }
  *(int *)(param_2 + 0x3d098) = *piVar28;
  FUN_18000f890(&local_5d8);
  local_1198[0xe] = 5;
  local_1198[0xc] = 1;
  local_5b8 = (char *)0x0;
  uStack_5b0 = 0;
  local_5a8 = 0;
  local_5a0 = 0;
  pcVar34 = (char *)FUN_18000fb70(0x20);
  uVar20 = s_legitbot_rcs_start_1806f36b8._8_8_;
  local_5b8 = pcVar34;
  local_5a8 = 0x12;
  local_5a0 = 0x1f;
  *(undefined8 *)pcVar34 = s_legitbot_rcs_start_1806f36b8._0_8_;
  *(undefined8 *)(pcVar34 + 8) = uVar20;
  *(undefined2 *)(pcVar34 + 0x10) = s_legitbot_rcs_start_1806f36b8._16_2_;
  pcVar34[0x12] = '\0';
  puVar47 = *(undefined8 **)(local_1248 + 0x50);
  for (puVar16 = *(undefined8 **)(local_1248 + 0x48); puVar16 != puVar47; puVar16 = puVar16 + 0x10)
  {
    if ((ulonglong)puVar16[3] < 0x10) {
      puVar37 = puVar16;
    }
    else {
      puVar37 = (undefined8 *)*puVar16;
    }
    if ((puVar16[2] == 0x12) && (iVar14 = memcmp(pcVar34,puVar37,0x12), iVar14 == 0)) {
      if (puVar16 != (undefined8 *)0xffffffffffffffe0) {
        dVar49 = (double)FUN_180370b10();
        goto LAB_1800f9d99;
      }
      break;
    }
  }
  dVar49 = DAT_1808ac500;
LAB_1800f9d99:
  local_1198[0xd] = (int)dVar49;
  piVar23 = local_1198 + 0xc;
  if (0 < local_1198[0xd]) {
    piVar23 = local_1198 + 0xd;
  }
  piVar28 = local_1198 + 0xe;
  if (local_1198[0xd] < 6) {
    piVar28 = piVar23;
  }
  *(int *)(param_2 + 250000) = *piVar28;
  FUN_18000f890(&local_5b8);
  local_658 = (char *)0x0;
  uStack_650 = 0;
  local_648 = 0;
  local_640 = 0;
  pcVar34 = (char *)FUN_18000fb70(0x20);
  uVar20 = s_legitbot_draw_fov_1806f36d0._8_8_;
  local_648 = 0x11;
  local_640 = 0x1f;
  *(undefined8 *)pcVar34 = s_legitbot_draw_fov_1806f36d0._0_8_;
  *(undefined8 *)(pcVar34 + 8) = uVar20;
  pcVar34[0x10] = s_legitbot_draw_fov_1806f36d0[0x10];
  pcVar34[0x11] = '\0';
  puVar47 = *(undefined8 **)(param_1 + 0x50);
  local_658 = pcVar34;
  for (puVar16 = *(undefined8 **)(param_1 + 0x48); puVar16 != puVar47; puVar16 = puVar16 + 0x10) {
    if ((ulonglong)puVar16[3] < 0x10) {
      puVar37 = puVar16;
    }
    else {
      puVar37 = (undefined8 *)*puVar16;
    }
    if ((puVar16[2] == 0x11) && (iVar14 = memcmp(pcVar34,puVar37,0x11), iVar14 == 0)) {
      if ((int *)(puVar16 + 4) != (int *)0x0) {
        iVar14 = *(int *)(puVar16 + 4);
        if (iVar14 == 1) {
          cVar9 = *(char *)((longlong)puVar16 + 0x24);
        }
        else if ((iVar14 == 2) && ((double)puVar16[5] != 0.0)) {
          cVar9 = '\x01';
        }
        else {
          cVar9 = '\0';
        }
        FUN_18000f890(&local_658);
        if (cVar9 != '\0') {
          *(undefined1 *)(param_2 + 0x3cfec) = 1;
          *(undefined1 *)(param_2 + 0x3cfd8) = 1;
        }
        goto LAB_1800f9eae;
      }
      break;
    }
  }
  FUN_18000f890(&local_658);
LAB_1800f9eae:
  puVar47 = *(undefined8 **)(param_1 + 0x50);
  for (puVar16 = *(undefined8 **)(param_1 + 0x48); puVar16 != puVar47; puVar16 = puVar16 + 0x10) {
    if ((ulonglong)puVar16[3] < 0x10) {
      puVar37 = puVar16;
    }
    else {
      puVar37 = (undefined8 *)*puVar16;
    }
    if ((puVar16[2] == 0x16) &&
       (iVar14 = memcmp("triggerbot.require_key",puVar37,0x16), iVar14 == 0)) {
      if ((int *)(puVar16 + 4) == (int *)0x0) break;
      iVar14 = *(int *)(puVar16 + 4);
      if (iVar14 == 1) {
        bVar48 = *(char *)((longlong)puVar16 + 0x24) == '\0';
      }
      else if ((iVar14 != 2) || (bVar48 = (double)puVar16[5] == 0.0, NAN((double)puVar16[5])))
      break;
      if (bVar48) goto LAB_1800fa001;
      break;
    }
  }
  local_508 = 0xe;
  local_500 = 0xf;
  local_518[0] = s_triggerbot_key_1806f3768[0];
  local_518[1] = s_triggerbot_key_1806f3768[1];
  local_518[2] = s_triggerbot_key_1806f3768[2];
  local_518[3] = s_triggerbot_key_1806f3768[3];
  local_518[4] = s_triggerbot_key_1806f3768[4];
  local_518[5] = s_triggerbot_key_1806f3768[5];
  local_518[6] = s_triggerbot_key_1806f3768[6];
  local_518[7] = s_triggerbot_key_1806f3768[7];
  local_510[0] = s_triggerbot_key_1806f3768[8];
  local_510[1] = s_triggerbot_key_1806f3768[9];
  local_510[2] = s_triggerbot_key_1806f3768[10];
  local_510[3] = s_triggerbot_key_1806f3768[0xb];
  local_50c[0] = s_triggerbot_key_1806f3768[0xc];
  local_50c[1] = s_triggerbot_key_1806f3768[0xd];
  local_50a = 0;
  local_1288 = (char *)((ulonglong)local_1288 & 0xffffffff00000000);
  FUN_1800fa8a0(&local_1118,"legitbot.global.triggerbot.enabled",local_518,0);
  FUN_18000f890(local_518);
LAB_1800fa001:
  puVar47 = (undefined8 *)0x0;
  local_468 = 0xc;
  local_460 = 0xf;
  local_478[0] = s_legitbot_key_1806f3740[0];
  local_478[1] = s_legitbot_key_1806f3740[1];
  local_478[2] = s_legitbot_key_1806f3740[2];
  local_478[3] = s_legitbot_key_1806f3740[3];
  local_478[4] = s_legitbot_key_1806f3740[4];
  local_478[5] = s_legitbot_key_1806f3740[5];
  local_478[6] = s_legitbot_key_1806f3740[6];
  local_478[7] = s_legitbot_key_1806f3740[7];
  local_470[0] = s_legitbot_key_1806f3740[8];
  local_470[1] = s_legitbot_key_1806f3740[9];
  local_470[2] = s_legitbot_key_1806f3740[10];
  local_470[3] = s_legitbot_key_1806f3740[0xb];
  local_46c = 0;
  local_1288 = (char *)((ulonglong)local_1288 & 0xffffffff00000000);
  FUN_1800fa8a0(&local_1118,"legitbot.enabled",local_478,0);
  FUN_18000f890(local_478);
  *(undefined1 *)(param_2 + 0x3d0a8) = 0;
  pcVar34 = (char *)(param_2 + 0x433a0);
  pcVar36 = pcVar34;
  if (param_2 != param_2 + 0x3900) {
    do {
      if ((*pcVar36 != '\0') && (iVar14 = strcmp(pcVar36,"triggerbot.enabled"), iVar14 == 0)) {
        local_b48 = 0;
        uStack_b40 = 0;
        local_b38 = 0;
        uStack_b30 = 0;
        local_b28 = 0;
        uStack_b20 = 0;
        local_b18 = 0;
        uStack_b10 = 0;
        local_b08 = 0;
        uStack_b00 = 0;
        local_af8 = 0;
        uStack_af0 = 0;
        local_ae8 = 0;
        uStack_ae0 = CONCAT31(uStack_ae0._1_3_,1);
        local_ad8 = 0;
        uStack_ad0 = 0;
        local_ac8 = 0;
        uStack_ac0 = 0;
        local_ab8 = 0;
        uStack_ab0 = 0;
        local_aa8 = 0;
        uStack_aa0 = 0;
        local_a98 = 0;
        uStack_a90 = 0;
        local_a88 = 0;
        uStack_a80 = 0;
        local_a78 = 0;
        uStack_a70 = 0;
        local_a68 = CONCAT22(local_a68._2_2_,0x100);
        pcVar36[0] = '\0';
        pcVar36[1] = '\0';
        pcVar36[2] = '\0';
        pcVar36[3] = '\0';
        pcVar36[4] = '\0';
        pcVar36[5] = '\0';
        pcVar36[6] = '\0';
        pcVar36[7] = '\0';
        pcVar36[8] = '\0';
        pcVar36[9] = '\0';
        pcVar36[10] = '\0';
        pcVar36[0xb] = '\0';
        pcVar36[0xc] = '\0';
        pcVar36[0xd] = '\0';
        pcVar36[0xe] = '\0';
        pcVar36[0xf] = '\0';
        pcVar36[0x10] = '\0';
        pcVar36[0x11] = '\0';
        pcVar36[0x12] = '\0';
        pcVar36[0x13] = '\0';
        pcVar36[0x14] = '\0';
        pcVar36[0x15] = '\0';
        pcVar36[0x16] = '\0';
        pcVar36[0x17] = '\0';
        pcVar36[0x18] = '\0';
        pcVar36[0x19] = '\0';
        pcVar36[0x1a] = '\0';
        pcVar36[0x1b] = '\0';
        pcVar36[0x1c] = '\0';
        pcVar36[0x1d] = '\0';
        pcVar36[0x1e] = '\0';
        pcVar36[0x1f] = '\0';
        pcVar36[0x20] = '\0';
        pcVar36[0x21] = '\0';
        pcVar36[0x22] = '\0';
        pcVar36[0x23] = '\0';
        pcVar36[0x24] = '\0';
        pcVar36[0x25] = '\0';
        pcVar36[0x26] = '\0';
        pcVar36[0x27] = '\0';
        pcVar36[0x28] = '\0';
        pcVar36[0x29] = '\0';
        pcVar36[0x2a] = '\0';
        pcVar36[0x2b] = '\0';
        pcVar36[0x2c] = '\0';
        pcVar36[0x2d] = '\0';
        pcVar36[0x2e] = '\0';
        pcVar36[0x2f] = '\0';
        pcVar36[0x30] = '\0';
        pcVar36[0x31] = '\0';
        pcVar36[0x32] = '\0';
        pcVar36[0x33] = '\0';
        pcVar36[0x34] = '\0';
        pcVar36[0x35] = '\0';
        pcVar36[0x36] = '\0';
        pcVar36[0x37] = '\0';
        pcVar36[0x38] = '\0';
        pcVar36[0x39] = '\0';
        pcVar36[0x3a] = '\0';
        pcVar36[0x3b] = '\0';
        pcVar36[0x3c] = '\0';
        pcVar36[0x3d] = '\0';
        pcVar36[0x3e] = '\0';
        pcVar36[0x3f] = '\0';
        pcVar36[0x40] = '\0';
        pcVar36[0x41] = '\0';
        pcVar36[0x42] = '\0';
        pcVar36[0x43] = '\0';
        pcVar36[0x44] = '\0';
        pcVar36[0x45] = '\0';
        pcVar36[0x46] = '\0';
        pcVar36[0x47] = '\0';
        pcVar36[0x48] = '\0';
        pcVar36[0x49] = '\0';
        pcVar36[0x4a] = '\0';
        pcVar36[0x4b] = '\0';
        pcVar36[0x4c] = '\0';
        pcVar36[0x4d] = '\0';
        pcVar36[0x4e] = '\0';
        pcVar36[0x4f] = '\0';
        pcVar36[0x50] = '\0';
        pcVar36[0x51] = '\0';
        pcVar36[0x52] = '\0';
        pcVar36[0x53] = '\0';
        pcVar36[0x54] = '\0';
        pcVar36[0x55] = '\0';
        pcVar36[0x56] = '\0';
        pcVar36[0x57] = '\0';
        pcVar36[0x58] = '\0';
        pcVar36[0x59] = '\0';
        pcVar36[0x5a] = '\0';
        pcVar36[0x5b] = '\0';
        pcVar36[0x5c] = '\0';
        pcVar36[0x5d] = '\0';
        pcVar36[0x5e] = '\0';
        pcVar36[0x5f] = '\0';
        pcVar36[0x60] = '\0';
        pcVar36[0x61] = '\0';
        pcVar36[0x62] = '\0';
        pcVar36[99] = '\0';
        pcVar36[100] = '\0';
        pcVar36[0x65] = '\0';
        pcVar36[0x66] = '\0';
        pcVar36[0x67] = '\0';
        *(ulonglong *)(pcVar36 + 0x68) = (ulonglong)uStack_ae0;
        pcVar36[0x70] = '\0';
        pcVar36[0x71] = '\0';
        pcVar36[0x72] = '\0';
        pcVar36[0x73] = '\0';
        pcVar36[0x74] = '\0';
        pcVar36[0x75] = '\0';
        pcVar36[0x76] = '\0';
        pcVar36[0x77] = '\0';
        pcVar36[0x78] = '\0';
        pcVar36[0x79] = '\0';
        pcVar36[0x7a] = '\0';
        pcVar36[0x7b] = '\0';
        pcVar36[0x7c] = '\0';
        pcVar36[0x7d] = '\0';
        pcVar36[0x7e] = '\0';
        pcVar36[0x7f] = '\0';
        pcVar36[0x80] = '\0';
        pcVar36[0x81] = '\0';
        pcVar36[0x82] = '\0';
        pcVar36[0x83] = '\0';
        pcVar36[0x84] = '\0';
        pcVar36[0x85] = '\0';
        pcVar36[0x86] = '\0';
        pcVar36[0x87] = '\0';
        pcVar36[0x88] = '\0';
        pcVar36[0x89] = '\0';
        pcVar36[0x8a] = '\0';
        pcVar36[0x8b] = '\0';
        pcVar36[0x8c] = '\0';
        pcVar36[0x8d] = '\0';
        pcVar36[0x8e] = '\0';
        pcVar36[0x8f] = '\0';
        pcVar36[0x90] = '\0';
        pcVar36[0x91] = '\0';
        pcVar36[0x92] = '\0';
        pcVar36[0x93] = '\0';
        pcVar36[0x94] = '\0';
        pcVar36[0x95] = '\0';
        pcVar36[0x96] = '\0';
        pcVar36[0x97] = '\0';
        pcVar36[0x98] = '\0';
        pcVar36[0x99] = '\0';
        pcVar36[0x9a] = '\0';
        pcVar36[0x9b] = '\0';
        pcVar36[0x9c] = '\0';
        pcVar36[0x9d] = '\0';
        pcVar36[0x9e] = '\0';
        pcVar36[0x9f] = '\0';
        pcVar36[0xa0] = '\0';
        pcVar36[0xa1] = '\0';
        pcVar36[0xa2] = '\0';
        pcVar36[0xa3] = '\0';
        pcVar36[0xa4] = '\0';
        pcVar36[0xa5] = '\0';
        pcVar36[0xa6] = '\0';
        pcVar36[0xa7] = '\0';
        pcVar36[0xa8] = '\0';
        pcVar36[0xa9] = '\0';
        pcVar36[0xaa] = '\0';
        pcVar36[0xab] = '\0';
        pcVar36[0xac] = '\0';
        pcVar36[0xad] = '\0';
        pcVar36[0xae] = '\0';
        pcVar36[0xaf] = '\0';
        pcVar36[0xb0] = '\0';
        pcVar36[0xb1] = '\0';
        pcVar36[0xb2] = '\0';
        pcVar36[0xb3] = '\0';
        pcVar36[0xb4] = '\0';
        pcVar36[0xb5] = '\0';
        pcVar36[0xb6] = '\0';
        pcVar36[0xb7] = '\0';
        pcVar36[0xb8] = '\0';
        pcVar36[0xb9] = '\0';
        pcVar36[0xba] = '\0';
        pcVar36[0xbb] = '\0';
        pcVar36[0xbc] = '\0';
        pcVar36[0xbd] = '\0';
        pcVar36[0xbe] = '\0';
        pcVar36[0xbf] = '\0';
        pcVar36[0xc0] = '\0';
        pcVar36[0xc1] = '\0';
        pcVar36[0xc2] = '\0';
        pcVar36[0xc3] = '\0';
        pcVar36[0xc4] = '\0';
        pcVar36[0xc5] = '\0';
        pcVar36[0xc6] = '\0';
        pcVar36[199] = '\0';
        pcVar36[200] = '\0';
        pcVar36[0xc9] = '\0';
        pcVar36[0xca] = '\0';
        pcVar36[0xcb] = '\0';
        pcVar36[0xcc] = '\0';
        pcVar36[0xcd] = '\0';
        pcVar36[0xce] = '\0';
        pcVar36[0xcf] = '\0';
        pcVar36[0xd0] = '\0';
        pcVar36[0xd1] = '\0';
        pcVar36[0xd2] = '\0';
        pcVar36[0xd3] = '\0';
        pcVar36[0xd4] = '\0';
        pcVar36[0xd5] = '\0';
        pcVar36[0xd6] = '\0';
        pcVar36[0xd7] = '\0';
        pcVar36[0xd8] = '\0';
        pcVar36[0xd9] = '\0';
        pcVar36[0xda] = '\0';
        pcVar36[0xdb] = '\0';
        pcVar36[0xdc] = '\0';
        pcVar36[0xdd] = '\0';
        pcVar36[0xde] = '\0';
        pcVar36[0xdf] = '\0';
        *(undefined4 *)(pcVar36 + 0xe0) = local_a68;
        uStack_adc = 0;
      }
      pcVar36 = pcVar36 + 0xe4;
    } while (pcVar36 != (char *)(param_2 + 0x46ca0));
  }
  local_458 = (char *)0x0;
  uStack_450 = 0;
  local_448 = 0;
  local_440 = 0;
  local_458 = (char *)FUN_18000fb70(0x20);
  uVar20 = s_third_person_key_1806f37a0._8_8_;
  local_448 = 0x10;
  local_440 = 0x1f;
  *(undefined8 *)local_458 = s_third_person_key_1806f37a0._0_8_;
  *(undefined8 *)(local_458 + 8) = uVar20;
  local_458[0x10] = '\0';
  local_1288 = (char *)((ulonglong)local_1288 & 0xffffffff00000000);
  puVar18 = (undefined4 *)0x1;
  FUN_1800fa8a0(&local_1118,"third_person.enabled",&local_458);
  FUN_18000f890(&local_458);
  local_118[0] = "jumpbug";
  local_118[1] = "edgebug";
  local_118[2] = "edge_jump";
  local_118[3] = "long_jump";
  local_118[4] = "mini_jump";
  local_118[5] = "ladder_jump";
  local_118[6] = "null_strafe";
  local_118[7] = "fireman";
  local_118[8] = "slide_walk";
  local_118[9] = "pixel_surf";
  local_118[10] = "texture_bug";
  local_118[0xb] = "fast_ladder";
  local_118[0xc] = "mouse_limiter";
  ppcVar35 = local_118;
  do {
    pcVar36 = *ppcVar35;
    local_628 = 9;
    local_620 = 0xf;
    local_638._0_1_ = s_movement__1806f3840[0];
    local_638._1_1_ = s_movement__1806f3840[1];
    local_638._2_1_ = s_movement__1806f3840[2];
    local_638._3_1_ = s_movement__1806f3840[3];
    local_638._4_1_ = s_movement__1806f3840[4];
    local_638._5_1_ = s_movement__1806f3840[5];
    local_638._6_1_ = s_movement__1806f3840[6];
    local_638._7_1_ = s_movement__1806f3840[7];
    uStack_630 = (ulonglong)(byte)s_movement__1806f3840[8];
    plVar43 = (longlong *)strlen(pcVar36);
    plVar33 = (longlong *)FUN_1800134a0(&local_638,pcVar36);
    local_678 = (undefined8 *****)*plVar33;
    lStack_670 = plVar33[1];
    local_668 = plVar33[2];
    uStack_660 = plVar33[3];
    plVar33[2] = 0;
    plVar33[3] = 0xf;
    *(undefined1 *)plVar33 = 0;
    local_1264 = local_1264 | 0x10;
    if (0xf < local_620) {
      plVar33 = (longlong *)(local_620 + 1);
      uVar46 = local_638;
      if ((longlong *)0xfff < plVar33) {
        uVar46 = *(ulonglong *)(local_638 - 8);
        if (0x1f < (local_638 - uVar46) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar39 = auStack_12a0;
          goto LAB_1800fa4d9;
        }
        plVar33 = (longlong *)(local_620 + 0x28);
      }
      thunk_FUN_1803d64e0(uVar46,plVar33);
    }
    local_628 = 0;
    local_620 = 0xf;
    local_638 = local_638 & 0xffffffffffffff00;
    plVar43 = (longlong *)FUN_180073a70(local_1f8,&local_678,&DAT_1806f3898);
    pppppuVar31 = &local_678;
    if (0xf < uStack_660) {
      pppppuVar31 = local_678;
    }
    local_1288 = (char *)((ulonglong)local_1288 & 0xffffffff00000000);
    puVar18 = (undefined4 *)0x0;
    FUN_1800fa8a0(&local_1118,pppppuVar31);
    FUN_18000f890(local_1f8);
    if (0xf < uStack_660) {
      plVar33 = (longlong *)(uStack_660 + 1);
      pppppuVar31 = local_678;
      if ((longlong *)0xfff < plVar33) {
        pppppuVar31 = (undefined8 *****)local_678[-1];
        puVar39 = auStack_12a8;
        if (0x1f < (ulonglong)((longlong)local_678 + (-8 - (longlong)pppppuVar31)))
        goto LAB_1800fa4d9;
        plVar33 = (longlong *)(uStack_660 + 0x28);
      }
      thunk_FUN_1803d64e0(pppppuVar31,plVar33);
    }
    local_668 = 0;
    uStack_660 = 0xf;
    local_678 = (undefined8 *****)((ulonglong)local_678 & 0xffffffffffffff00);
    ppcVar35 = ppcVar35 + 1;
  } while (ppcVar35 != local_118 + 0xd);
  plVar27 = *(longlong **)(param_1 + 0x48);
  plVar43 = *(longlong **)(param_1 + 0x50);
  if (plVar27 != plVar43) {
    puVar19 = (undefined4 *)0x2e746f6265676172;
    puVar18 = (undefined4 *)0x632e7370756f7267;
    in_R11 = 0x746e756f;
    puVar40 = auStack_12a8;
    do {
      plVar33 = plVar27;
      if ((ulonglong)plVar27[3] < 0x10) {
LAB_1800fa4e0:
        plVar27 = plVar33;
      }
      else {
        plVar33 = (longlong *)*plVar27;
      }
      if (plVar27[2] == 0x14) {
        lVar17 = (longlong)puVar19 - *plVar33;
        if ((lVar17 == 0) && (lVar17 = (longlong)puVar18 - plVar33[1], lVar17 == 0)) {
          lVar17 = (in_R11 & 0xffffffff) - (ulonglong)*(uint *)(plVar33 + 2);
        }
        if (lVar17 == 0) {
          if (plVar27 != (longlong *)0xffffffffffffffe0) goto LAB_1800fa52b;
          break;
        }
      }
      plVar27 = plVar27 + 0x10;
    } while (plVar27 != plVar43);
  }
  *(undefined8 *)(puVar40 + -8) = 0x1800fa52b;
  FUN_1800f5f60(param_1,param_2,0);
LAB_1800fa52b:
  puVar37 = *(undefined8 **)(param_1 + 0x50);
  for (puVar16 = *(undefined8 **)(param_1 + 0x48); puVar16 != puVar37; puVar16 = puVar16 + 0x10) {
    if ((ulonglong)puVar16[3] < 0x10) {
      _Buf2 = puVar16;
    }
    else {
      _Buf2 = (undefined8 *)*puVar16;
    }
    if (puVar16[2] == 0x15) {
      *(undefined8 *)(puVar40 + -8) = 0x1800fa560;
      iVar14 = memcmp("legitbot.groups.count",_Buf2,0x15);
      if (iVar14 == 0) {
        if (puVar16 != (undefined8 *)0xffffffffffffffe0) goto LAB_1800fa589;
        break;
      }
    }
  }
  *(undefined8 *)(puVar40 + -8) = 0x1800fa589;
  FUN_1800f5f60(param_1,param_2,1);
LAB_1800fa589:
  *(undefined8 *)(puVar40 + -8) = 0x1800fa595;
  FUN_1800f5490(param_2 + 0x3d0b0);
  *(undefined8 *)(puVar40 + -8) = 0x1800fa5a1;
  FUN_1800f5490(param_2 + 0x355d4);
  for (plVar43 = *(longlong **)(param_1 + 0x48); plVar43 != *(longlong **)(param_1 + 0x50);
      plVar43 = plVar43 + 0x10) {
    if ((ulonglong)plVar43[3] < 0x10) {
      plVar33 = plVar43;
    }
    else {
      plVar33 = (longlong *)*plVar43;
    }
    if (plVar43[2] == 0xc) {
      lVar17 = 0x63735f73646e6962 - *plVar33;
      if (lVar17 == 0) {
        lVar17 = 0x656d6568 - (ulonglong)*(uint *)(plVar33 + 1);
      }
      if (lVar17 == 0) {
        if (plVar43 != (longlong *)0xffffffffffffffe0) goto LAB_1800fa7a7;
        break;
      }
    }
  }
  if (DAT_180cc3e19 == '\0') {
    DAT_180cc3e19 = '\x01';
    *(undefined8 *)(puVar40 + -8) = 0x1800fa625;
    FUN_1800ff4a0(puVar40 + 0x40,&DAT_18091a190);
  }
  puVar16 = puVar47;
  do {
    lVar17 = (longlong)puVar16 * 0xe4;
    if ((*(char *)(param_2 + 0x433a0 + lVar17) != '\0') &&
       ((*(int *)(param_2 + 0x43404 + lVar17) == 2 ||
        (*(int *)(param_2 + 0x43400 + lVar17) - 1U < 0xff)))) {
      pcVar36 = pcVar34 + lVar17;
      bVar48 = true;
      puVar37 = puVar47;
      if (puVar16 != (undefined8 *)0x0) {
        do {
          if (!bVar48) goto LAB_1800fa79a;
          *(undefined8 *)(puVar40 + -8) = 0x1800fa68e;
          iVar14 = strcmp(pcVar34 + (longlong)puVar37 * 0xe4,pcVar36);
          bVar48 = iVar14 != 0;
          puVar37 = (undefined8 *)((longlong)puVar37 + 1);
        } while (puVar37 < puVar16);
        if (iVar14 == 0) goto LAB_1800fa79a;
      }
      local_558 = (undefined8 *****)0x0;
      uStack_550 = 0;
      *(undefined8 *)(puVar40 + -8) = 0x1800fa6c5;
      local_548 = puVar47;
      local_540 = puVar47;
      sVar29 = strlen(pcVar36);
      *(undefined8 *)(puVar40 + -8) = 0x1800fa6d7;
      FUN_1800133a0(&local_558,pcVar36,sVar29);
      pppppuVar31 = &local_558;
      if ((undefined8 *)0xf < local_540) {
        pppppuVar31 = local_558;
      }
      uVar46 = 0xcbf29ce484222325;
      puVar37 = puVar47;
      if (local_548 != (undefined8 *)0x0) {
        do {
          uVar46 = (uVar46 ^ *(byte *)((longlong)pppppuVar31 + (longlong)puVar37)) * 0x100000001b3;
          puVar37 = (undefined8 *)((longlong)puVar37 + 1);
        } while (puVar37 < local_548);
        pcVar34 = (char *)(param_2 + 0x433a0);
      }
      *(undefined8 *)(puVar40 + -8) = 0x1800fa73e;
      lVar30 = FUN_18014a630(puVar37,local_738,&local_558,uVar46);
      lVar38 = DAT_180cd12c8;
      if (*(longlong *)(lVar30 + 8) != 0) {
        lVar38 = *(longlong *)(lVar30 + 8);
      }
      *(undefined8 *)(puVar40 + -8) = 0x1800fa75c;
      FUN_18000f890(&local_558);
      if ((((lVar38 != DAT_180cd12c8) && (*(int *)(lVar38 + 0x38) == 1)) &&
          (puVar18 = *(undefined4 **)(lVar38 + 0x30),
          (undefined4 *)((longlong)&DAT_18091a18c + 3) < puVar18)) && (puVar18 < &DAT_180960e34)) {
        *(bool *)((longlong)puVar18 + param_2 + -0x18091a190) =
             *(char *)(param_2 + 0x43408 + lVar17) == '\0';
      }
    }
LAB_1800fa79a:
    puVar16 = (undefined8 *)((longlong)puVar16 + 1);
    if ((undefined8 *)0x3f < puVar16) {
LAB_1800fa7a7:
      *(undefined4 *)(param_2 + 0x46ca0) = 1;
      *(undefined8 *)(puVar40 + -8) = 0x1800fa7c1;
      return;
    }
  } while( true );
code_r0x0001800f9002:
  local_1267 = 1;
  goto LAB_1800f8e9f;
joined_r0x0001800f94a4:
  if (puVar16 == puVar47) goto LAB_1800f94d8;
  if ((ulonglong)puVar16[3] < 0x10) {
    puVar37 = puVar16;
  }
  else {
    puVar37 = (undefined8 *)*puVar16;
  }
  if ((puVar16[2] == 0x1a) && (iVar14 = memcmp(pcVar34,puVar37,0x1a), iVar14 == 0)) {
    if (puVar16 + 4 != (undefined8 *)0x0) {
      dVar49 = (double)FUN_180370b10(puVar16 + 4,SUB84(DAT_1808ac678,0));
      goto LAB_1800f94e0;
    }
    goto LAB_1800f94d8;
  }
  puVar16 = puVar16 + 0x10;
  goto joined_r0x0001800f94a4;
LAB_1800f94d8:
  dVar49 = DAT_1808ac678;
LAB_1800f94e0:
  local_119c = (int)dVar49;
  piVar23 = &local_11a0;
  if (0 < local_119c) {
    piVar23 = &local_119c;
  }
  if (0x65 < local_119c) {
    piVar23 = &DAT_1805a05b8;
  }
  *(int *)(param_2 + 0x3c0f4) = *piVar23;
  FUN_18000f890(&local_598);
  goto LAB_1800f9519;
joined_r0x0001800f9622:
  if (puVar16 == puVar47) goto LAB_1800f9656;
  if ((ulonglong)puVar16[3] < 0x10) {
    puVar37 = puVar16;
  }
  else {
    puVar37 = (undefined8 *)*puVar16;
  }
  if ((puVar16[2] == 0x16) && (iVar14 = memcmp(pcVar34,puVar37,0x16), iVar14 == 0)) {
    if (puVar16 + 4 != (undefined8 *)0x0) {
      dVar49 = (double)FUN_180370b10(puVar16 + 4,0);
      goto LAB_1800f965a;
    }
    goto LAB_1800f9656;
  }
  puVar16 = puVar16 + 0x10;
  goto joined_r0x0001800f9622;
LAB_1800f9656:
  dVar49 = 0.0;
LAB_1800f965a:
  local_1198[1] = (int)dVar49;
  piVar23 = local_1198;
  if (-1 < local_1198[1]) {
    piVar23 = local_1198 + 1;
  }
  piVar28 = local_1198 + 2;
  if (local_1198[1] < 0xc9) {
    piVar28 = piVar23;
  }
  *(int *)(param_2 + 0x3c108) = *piVar28;
  FUN_18000f890(&local_578);
  goto LAB_1800f9692;
joined_r0x0001800f9792:
  if (puVar16 == puVar47) goto LAB_1800f97ce;
  if ((ulonglong)puVar16[3] < 0x10) {
    puVar37 = puVar16;
  }
  else {
    puVar37 = (undefined8 *)*puVar16;
  }
  if ((puVar16[2] == 0x1b) &&
     (plVar43 = (longlong *)&DAT_0000001b, iVar14 = memcmp(pcVar34,puVar37,0x1b), iVar14 == 0)) {
    if (puVar16 + 4 != (undefined8 *)0x0) {
      dVar49 = (double)FUN_180370b10(puVar16 + 4,0);
      pcVar36 = local_6b8;
      goto LAB_1800f97d2;
    }
    goto LAB_1800f97ce;
  }
  puVar16 = puVar16 + 0x10;
  goto joined_r0x0001800f9792;
LAB_1800f97ce:
  dVar49 = 0.0;
  pcVar36 = pcVar34;
LAB_1800f97d2:
  local_1198[4] = (int)dVar49;
  piVar23 = local_1198 + 3;
  if (-1 < local_1198[4]) {
    piVar23 = local_1198 + 4;
  }
  piVar28 = local_1198 + 5;
  if (local_1198[4] < 0x65) {
    piVar28 = piVar23;
  }
  *(int *)(param_2 + 0x3c100) = *piVar28;
  if (0xf < local_6a0) {
    plVar33 = (longlong *)(local_6a0 + 1);
    pcVar41 = pcVar36;
    if ((longlong *)0xfff < plVar33) {
      pcVar41 = *(char **)(pcVar36 + -8);
      puVar39 = auStack_12a8;
      if ((char *)0x1f < pcVar36 + (-8 - (longlong)pcVar41)) goto LAB_1800fa4d9;
      plVar33 = (longlong *)(local_6a0 + 0x28);
    }
    thunk_FUN_1803d64e0(pcVar41,plVar33);
  }
  local_6a8 = 0;
  local_6a0 = 0xf;
  local_6b8 = (char *)((ulonglong)local_6b8 & 0xffffffffffffff00);
  goto LAB_1800f9855;
}



/* ===== 1800fa800 FUN_1800fa800 ===== */

undefined4 FUN_1800fa800(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf2;
  undefined8 *puVar3;
  undefined8 *_Buf1;
  undefined4 uVar4;
  
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  puVar3 = *(undefined8 **)(*param_1 + 0x48);
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  _Size = param_2[2];
  while( true ) {
    if (puVar3 == puVar1) {
      return param_3;
    }
    if ((ulonglong)puVar3[3] < 0x10) {
      _Buf2 = puVar3;
    }
    else {
      _Buf2 = (undefined8 *)*puVar3;
    }
    if ((_Size == puVar3[2]) && ((_Size == 0 || (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 == 0))))
    break;
    puVar3 = puVar3 + 0x10;
  }
  if (puVar3 + 4 == (undefined8 *)0x0) {
    return param_3;
  }
  uVar4 = FUN_180370b10(puVar3 + 4,param_3);
  return uVar4;
}



/* ===== 1800fa8a0 FUN_1800fa8a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800fa8a0(undefined8 *param_1,char *param_2,undefined8 param_3,int param_4,float param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  int iVar4;
  undefined8 uVar5;
  char *_Str1;
  char *pcVar6;
  undefined1 auStack_198 [32];
  int local_178;
  int local_174;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_88;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_198;
  local_174 = param_4;
  dVar3 = (double)FUN_1800fa800(*param_1,param_3);
  local_178 = (int)dVar3;
  if (local_178 - 1U < 0xff) {
    lVar1 = param_1[1];
    pcVar6 = (char *)(lVar1 + 0x433a0);
    _Str1 = pcVar6;
    if (lVar1 != lVar1 + 0x3900) {
      do {
        if (((*_Str1 != '\0') && (iVar4 = strcmp(_Str1,param_2), iVar4 == 0)) &&
           (*(float *)(_Str1 + 0x6c) == param_5)) {
          return;
        }
        _Str1 = _Str1 + 0xe4;
      } while (_Str1 != (char *)(lVar1 + 0x46ca0));
      if (lVar1 != lVar1 + 0x3900) {
        do {
          if (*pcVar6 == '\0') {
            uStack_100 = CONCAT31(uStack_100._1_3_,1);
            pcVar6[0] = '\0';
            pcVar6[1] = '\0';
            pcVar6[2] = '\0';
            pcVar6[3] = '\0';
            pcVar6[4] = '\0';
            pcVar6[5] = '\0';
            pcVar6[6] = '\0';
            pcVar6[7] = '\0';
            pcVar6[8] = '\0';
            pcVar6[9] = '\0';
            pcVar6[10] = '\0';
            pcVar6[0xb] = '\0';
            pcVar6[0xc] = '\0';
            pcVar6[0xd] = '\0';
            pcVar6[0xe] = '\0';
            pcVar6[0xf] = '\0';
            local_88 = CONCAT22(local_88._2_2_,0x100);
            pcVar6[0x10] = '\0';
            pcVar6[0x11] = '\0';
            pcVar6[0x12] = '\0';
            pcVar6[0x13] = '\0';
            pcVar6[0x14] = '\0';
            pcVar6[0x15] = '\0';
            pcVar6[0x16] = '\0';
            pcVar6[0x17] = '\0';
            pcVar6[0x18] = '\0';
            pcVar6[0x19] = '\0';
            pcVar6[0x1a] = '\0';
            pcVar6[0x1b] = '\0';
            pcVar6[0x1c] = '\0';
            pcVar6[0x1d] = '\0';
            pcVar6[0x1e] = '\0';
            pcVar6[0x1f] = '\0';
            local_108 = 0;
            pcVar6[0x20] = '\0';
            pcVar6[0x21] = '\0';
            pcVar6[0x22] = '\0';
            pcVar6[0x23] = '\0';
            pcVar6[0x24] = '\0';
            pcVar6[0x25] = '\0';
            pcVar6[0x26] = '\0';
            pcVar6[0x27] = '\0';
            pcVar6[0x28] = '\0';
            pcVar6[0x29] = '\0';
            pcVar6[0x2a] = '\0';
            pcVar6[0x2b] = '\0';
            pcVar6[0x2c] = '\0';
            pcVar6[0x2d] = '\0';
            pcVar6[0x2e] = '\0';
            pcVar6[0x2f] = '\0';
            uStack_fc = 0;
            pcVar6[0x30] = '\0';
            pcVar6[0x31] = '\0';
            pcVar6[0x32] = '\0';
            pcVar6[0x33] = '\0';
            pcVar6[0x34] = '\0';
            pcVar6[0x35] = '\0';
            pcVar6[0x36] = '\0';
            pcVar6[0x37] = '\0';
            pcVar6[0x38] = '\0';
            pcVar6[0x39] = '\0';
            pcVar6[0x3a] = '\0';
            pcVar6[0x3b] = '\0';
            pcVar6[0x3c] = '\0';
            pcVar6[0x3d] = '\0';
            pcVar6[0x3e] = '\0';
            pcVar6[0x3f] = '\0';
            pcVar6[0x40] = '\0';
            pcVar6[0x41] = '\0';
            pcVar6[0x42] = '\0';
            pcVar6[0x43] = '\0';
            pcVar6[0x44] = '\0';
            pcVar6[0x45] = '\0';
            pcVar6[0x46] = '\0';
            pcVar6[0x47] = '\0';
            pcVar6[0x48] = '\0';
            pcVar6[0x49] = '\0';
            pcVar6[0x4a] = '\0';
            pcVar6[0x4b] = '\0';
            pcVar6[0x4c] = '\0';
            pcVar6[0x4d] = '\0';
            pcVar6[0x4e] = '\0';
            pcVar6[0x4f] = '\0';
            pcVar6[0x50] = '\0';
            pcVar6[0x51] = '\0';
            pcVar6[0x52] = '\0';
            pcVar6[0x53] = '\0';
            pcVar6[0x54] = '\0';
            pcVar6[0x55] = '\0';
            pcVar6[0x56] = '\0';
            pcVar6[0x57] = '\0';
            pcVar6[0x58] = '\0';
            pcVar6[0x59] = '\0';
            pcVar6[0x5a] = '\0';
            pcVar6[0x5b] = '\0';
            pcVar6[0x5c] = '\0';
            pcVar6[0x5d] = '\0';
            pcVar6[0x5e] = '\0';
            pcVar6[0x5f] = '\0';
            pcVar6[0x60] = '\0';
            pcVar6[0x61] = '\0';
            pcVar6[0x62] = '\0';
            pcVar6[99] = '\0';
            pcVar6[100] = '\0';
            pcVar6[0x65] = '\0';
            pcVar6[0x66] = '\0';
            pcVar6[0x67] = '\0';
            *(undefined4 *)(pcVar6 + 0x68) = uStack_100;
            pcVar6[0x6c] = '\0';
            pcVar6[0x6d] = '\0';
            pcVar6[0x6e] = '\0';
            pcVar6[0x6f] = '\0';
            pcVar6[0x70] = '\0';
            pcVar6[0x71] = '\0';
            pcVar6[0x72] = '\0';
            pcVar6[0x73] = '\0';
            pcVar6[0x74] = '\0';
            pcVar6[0x75] = '\0';
            pcVar6[0x76] = '\0';
            pcVar6[0x77] = '\0';
            pcVar6[0x78] = '\0';
            pcVar6[0x79] = '\0';
            pcVar6[0x7a] = '\0';
            pcVar6[0x7b] = '\0';
            pcVar6[0x7c] = '\0';
            pcVar6[0x7d] = '\0';
            pcVar6[0x7e] = '\0';
            pcVar6[0x7f] = '\0';
            pcVar6[0x80] = '\0';
            pcVar6[0x81] = '\0';
            pcVar6[0x82] = '\0';
            pcVar6[0x83] = '\0';
            pcVar6[0x84] = '\0';
            pcVar6[0x85] = '\0';
            pcVar6[0x86] = '\0';
            pcVar6[0x87] = '\0';
            pcVar6[0x88] = '\0';
            pcVar6[0x89] = '\0';
            pcVar6[0x8a] = '\0';
            pcVar6[0x8b] = '\0';
            pcVar6[0x8c] = '\0';
            pcVar6[0x8d] = '\0';
            pcVar6[0x8e] = '\0';
            pcVar6[0x8f] = '\0';
            pcVar6[0x90] = '\0';
            pcVar6[0x91] = '\0';
            pcVar6[0x92] = '\0';
            pcVar6[0x93] = '\0';
            pcVar6[0x94] = '\0';
            pcVar6[0x95] = '\0';
            pcVar6[0x96] = '\0';
            pcVar6[0x97] = '\0';
            pcVar6[0x98] = '\0';
            pcVar6[0x99] = '\0';
            pcVar6[0x9a] = '\0';
            pcVar6[0x9b] = '\0';
            pcVar6[0x9c] = '\0';
            pcVar6[0x9d] = '\0';
            pcVar6[0x9e] = '\0';
            pcVar6[0x9f] = '\0';
            pcVar6[0xa0] = '\0';
            pcVar6[0xa1] = '\0';
            pcVar6[0xa2] = '\0';
            pcVar6[0xa3] = '\0';
            pcVar6[0xa4] = '\0';
            pcVar6[0xa5] = '\0';
            pcVar6[0xa6] = '\0';
            pcVar6[0xa7] = '\0';
            pcVar6[0xa8] = '\0';
            pcVar6[0xa9] = '\0';
            pcVar6[0xaa] = '\0';
            pcVar6[0xab] = '\0';
            pcVar6[0xac] = '\0';
            pcVar6[0xad] = '\0';
            pcVar6[0xae] = '\0';
            pcVar6[0xaf] = '\0';
            pcVar6[0xb0] = '\0';
            pcVar6[0xb1] = '\0';
            pcVar6[0xb2] = '\0';
            pcVar6[0xb3] = '\0';
            pcVar6[0xb4] = '\0';
            pcVar6[0xb5] = '\0';
            pcVar6[0xb6] = '\0';
            pcVar6[0xb7] = '\0';
            pcVar6[0xb8] = '\0';
            pcVar6[0xb9] = '\0';
            pcVar6[0xba] = '\0';
            pcVar6[0xbb] = '\0';
            pcVar6[0xbc] = '\0';
            pcVar6[0xbd] = '\0';
            pcVar6[0xbe] = '\0';
            pcVar6[0xbf] = '\0';
            pcVar6[0xc0] = '\0';
            pcVar6[0xc1] = '\0';
            pcVar6[0xc2] = '\0';
            pcVar6[0xc3] = '\0';
            pcVar6[0xc4] = '\0';
            pcVar6[0xc5] = '\0';
            pcVar6[0xc6] = '\0';
            pcVar6[199] = '\0';
            pcVar6[200] = '\0';
            pcVar6[0xc9] = '\0';
            pcVar6[0xca] = '\0';
            pcVar6[0xcb] = '\0';
            pcVar6[0xcc] = '\0';
            pcVar6[0xcd] = '\0';
            pcVar6[0xce] = '\0';
            pcVar6[0xcf] = '\0';
            pcVar6[0xd0] = '\0';
            pcVar6[0xd1] = '\0';
            pcVar6[0xd2] = '\0';
            pcVar6[0xd3] = '\0';
            pcVar6[0xd4] = '\0';
            pcVar6[0xd5] = '\0';
            pcVar6[0xd6] = '\0';
            pcVar6[0xd7] = '\0';
            pcVar6[0xd8] = '\0';
            pcVar6[0xd9] = '\0';
            pcVar6[0xda] = '\0';
            pcVar6[0xdb] = '\0';
            pcVar6[0xdc] = '\0';
            pcVar6[0xdd] = '\0';
            pcVar6[0xde] = '\0';
            pcVar6[0xdf] = '\0';
            *(undefined4 *)(pcVar6 + 0xe0) = local_88;
            snprintf(pcVar6,0x60,&DAT_1806d3198,param_2);
            *(int *)(pcVar6 + 0x60) = local_178;
            uVar2 = *param_1;
            uVar5 = FUN_180073a70(local_78,param_3,"_mode");
            dVar3 = (double)FUN_1800fa800(uVar2,uVar5,(double)local_174);
            *(int *)(pcVar6 + 100) = (int)dVar3;
            FUN_18000f890(local_78);
            *(float *)(pcVar6 + 0x6c) = param_5;
            return;
          }
          pcVar6 = pcVar6 + 0xe4;
        } while (pcVar6 != (char *)(lVar1 + 0x46ca0));
      }
    }
  }
  return;
}



/* ===== 1800faaf0 FUN_1800faaf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800faaf0(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  float fVar1;
  size_t sVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  double *pdVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 ****ppppuVar17;
  int *piVar18;
  char *pcVar19;
  undefined8 *puVar20;
  bool bVar21;
  double dVar22;
  double extraout_XMM0_Qa;
  double dVar23;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  int *local_e8;
  char *local_e0;
  double *local_d8;
  longlong *local_d0;
  undefined8 ****local_c8;
  longlong lStack_c0;
  double local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_108;
  lVar11 = *param_1;
  local_d0 = param_1;
  puVar6 = (undefined8 *)FUN_180073a70(local_68,param_2,".enabled");
  puVar15 = auStack_108;
  puVar16 = auStack_108;
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar20 = puVar6;
  }
  else {
    puVar20 = (undefined8 *)*puVar6;
  }
  sVar2 = puVar6[2];
  puVar12 = *(undefined8 **)(lVar11 + 0x50);
  for (puVar6 = *(undefined8 **)(lVar11 + 0x48); puVar6 != puVar12; puVar6 = puVar6 + 0x10) {
    if ((ulonglong)puVar6[3] < 0x10) {
      puVar13 = puVar6;
    }
    else {
      puVar13 = (undefined8 *)*puVar6;
    }
    if ((sVar2 == puVar6[2]) &&
       ((sVar2 == 0 || (iVar5 = memcmp(puVar20,puVar13,sVar2), iVar5 == 0)))) {
      local_e8 = (int *)(puVar6 + 4);
      local_e0 = (char *)((longlong)puVar6 + 0x24);
      local_d8 = (double *)(puVar6 + 5);
      goto LAB_1800faba9;
    }
  }
  local_e8 = (int *)0x0;
  local_e0 = &DAT_00000004;
  local_d8 = (double *)&DAT_00000008;
LAB_1800faba9:
  FUN_18000f890(local_68);
  lVar11 = *local_d0;
  puVar6 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  uVar7 = FUN_1800ba730(puVar6,param_2[2]);
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  if ((ulonglong)param_2[2] < uVar7) {
    uVar7 = param_2[2];
  }
  if ((ulonglong)param_2[3] < 0x10) {
    puVar6 = param_2;
  }
  else {
    puVar6 = (undefined8 *)*param_2;
  }
  FUN_1800133a0(&local_a8,puVar6,uVar7);
  plVar8 = (longlong *)FUN_1800134a0(&local_a8,".enabled",8);
  ppppuVar4 = (undefined8 ****)*plVar8;
  lStack_c0 = plVar8[1];
  dVar22 = (double)plVar8[2];
  uStack_b0 = plVar8[3];
  plVar8[2] = 0;
  plVar8[3] = 0xf;
  *(undefined1 *)plVar8 = 0;
  ppppuVar17 = &local_c8;
  if (0xf < uStack_b0) {
    ppppuVar17 = ppppuVar4;
  }
  puVar20 = *(undefined8 **)(lVar11 + 0x50);
  dVar23 = dVar22;
  local_b8 = dVar22;
  local_c8 = ppppuVar4;
  for (puVar6 = *(undefined8 **)(lVar11 + 0x48); puVar6 != puVar20; puVar6 = puVar6 + 0x10) {
    if ((ulonglong)puVar6[3] < 0x10) {
      puVar12 = puVar6;
    }
    else {
      puVar12 = (undefined8 *)*puVar6;
    }
    if ((dVar22 == (double)puVar6[2]) &&
       ((dVar22 == 0.0 || (iVar5 = memcmp(ppppuVar17,puVar12,(size_t)dVar22), iVar5 == 0)))) {
      piVar18 = (int *)(puVar6 + 4);
      pcVar19 = (char *)((longlong)puVar6 + 0x24);
      pdVar14 = (double *)(puVar6 + 5);
      goto LAB_1800facdb;
    }
  }
  piVar18 = (int *)0x0;
  pdVar14 = (double *)&DAT_00000008;
  pcVar19 = &DAT_00000004;
LAB_1800facdb:
  if (uStack_b0 < 0x10) {
LAB_1800fad12:
    local_b8 = 0.0;
    uStack_b0 = 0xf;
    local_c8 = (undefined8 ****)((ulonglong)local_c8 & 0xffffffffffffff00);
    if (0xf < uStack_90) {
      uVar7 = uStack_90 + 1;
      lVar11 = local_a8;
      if (0xfff < uVar7) {
        lVar11 = *(longlong *)(local_a8 + -8);
        if (0x1f < (local_a8 - lVar11) - 8U) goto LAB_1800fadaf;
        uVar7 = uStack_90 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar11,uVar7);
    }
    if (local_e8 != (int *)0x0) {
      iVar5 = *local_e8;
      dVar22 = 0.0;
      puVar16 = auStack_108;
      dVar23 = 0.0;
      if (iVar5 != 1) goto LAB_1800fadb6;
      bVar21 = *local_e0 == '\0';
      puVar16 = auStack_108;
LAB_1800fadcd:
      if (!bVar21) goto LAB_1800fadd3;
    }
  }
  else {
    uVar7 = uStack_b0 + 1;
    ppppuVar17 = ppppuVar4;
    if (uVar7 < 0x1000) {
LAB_1800fad0a:
      thunk_FUN_1803d64e0(ppppuVar17,uVar7);
      goto LAB_1800fad12;
    }
    ppppuVar17 = (undefined8 ****)ppppuVar4[-1];
    if ((ulonglong)((longlong)ppppuVar4 + (-8 - (longlong)ppppuVar17)) < 0x20) {
      uVar7 = uStack_b0 + 0x28;
      goto LAB_1800fad0a;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar15 = auStack_100;
LAB_1800fadaf:
    pcVar3 = (code *)swi(0x29);
    iVar5 = (*pcVar3)(5);
    puVar16 = puVar15 + 8;
LAB_1800fadb6:
    dVar22 = dVar23;
    if (iVar5 == 2) {
      bVar21 = *local_d8 == dVar22;
      if (!NAN(*local_d8) && !NAN(dVar22)) goto LAB_1800fadcd;
LAB_1800fadd3:
      plVar8 = local_d0;
      if (piVar18 != (int *)0x0) {
        if (*piVar18 == 1) {
          bVar21 = *pcVar19 == '\0';
        }
        else {
          if (*piVar18 != 2) goto LAB_1800faf7d;
          bVar21 = *pdVar14 == dVar22;
          if (NAN(*pdVar14) || NAN(dVar22)) goto LAB_1800fadfe;
        }
        if (bVar21) goto LAB_1800faf7d;
      }
LAB_1800fadfe:
      local_a8 = _DAT_1808ad610;
      uStack_a0 = _UNK_1808ad618;
      local_98 = _DAT_1808ad690;
      uStack_90 = _UNK_1808ad698;
      local_88 = _DAT_1808ad6e0;
      uStack_80 = _UNK_1808ad6e8;
      local_78 = _DAT_1808ad6d0;
      uStack_70 = _UNK_1808ad6d8;
      lVar11 = local_d0[1];
      *(undefined8 *)(puVar16 + -8) = 0x1800fae4d;
      uVar9 = FUN_180073a70(local_68,param_2,".material");
      *(undefined8 *)(puVar16 + -8) = 0x1800fae60;
      dVar22 = (double)FUN_1800fa800(lVar11,uVar9,DAT_1808ac500);
      *(undefined8 *)(puVar16 + -8) = 0x1800fae6d;
      FUN_18000f890(local_68);
      if ((uint)(int)dVar22 < 0x10) {
        uVar10 = *(undefined4 *)(local_68 + (longlong)(int)dVar22 * 4 + -0x40);
      }
      else {
        uVar10 = 2;
      }
      *param_3 = uVar10;
      lVar11 = *plVar8;
      *(undefined8 *)(puVar16 + -8) = 0x1800fae9a;
      puVar6 = (undefined8 *)FUN_180073a70(&local_a8,param_2,".color");
      if ((ulonglong)puVar6[3] < 0x10) {
        puVar20 = puVar6;
      }
      else {
        puVar20 = (undefined8 *)*puVar6;
      }
      sVar2 = puVar6[2];
      puVar12 = *(undefined8 **)(lVar11 + 0x50);
      for (puVar6 = *(undefined8 **)(lVar11 + 0x48); puVar6 != puVar12; puVar6 = puVar6 + 0x10) {
        if ((ulonglong)puVar6[3] < 0x10) {
          puVar13 = puVar6;
        }
        else {
          puVar13 = (undefined8 *)*puVar6;
        }
        if (sVar2 == puVar6[2]) {
          if (sVar2 != 0) {
            *(undefined8 *)(puVar16 + -8) = 0x1800faee5;
            iVar5 = memcmp(puVar20,puVar13,sVar2);
            if (iVar5 != 0) goto LAB_1800faee9;
          }
          *(undefined8 *)(puVar16 + -8) = 0x1800faf0f;
          FUN_18000f890(&local_a8);
          if (((int *)(puVar6 + 4) == (int *)0x0) || (*(int *)(puVar6 + 4) != 4))
          goto LAB_1800faefb;
          uVar7 = 0;
          goto LAB_1800faf30;
        }
LAB_1800faee9:
      }
      *(undefined8 *)(puVar16 + -8) = 0x1800faefb;
      FUN_18000f890(&local_a8);
LAB_1800faefb:
      uVar9 = 1;
      goto LAB_1800faf7f;
    }
  }
LAB_1800faf7d:
  uVar9 = 0;
LAB_1800faf7f:
  *(undefined8 *)(puVar16 + -8) = 0x1800faf8b;
  return uVar9;
  while( true ) {
    fVar1 = (float)param_3[uVar7 + 1];
    *(undefined8 *)(puVar16 + -8) = 0x1800faf62;
    FUN_180370b10(uVar7 * 0x60 + lVar11,(double)fVar1);
    param_3[uVar7 + 1] = (float)extraout_XMM0_Qa;
    uVar7 = uVar7 + 1;
    if (3 < uVar7) break;
LAB_1800faf30:
    lVar11 = puVar6[10];
    if ((ulonglong)((puVar6[0xb] - lVar11 >> 5) * -0x5555555555555555) <= uVar7) goto LAB_1800faefb;
  }
  uVar9 = 1;
  goto LAB_1800faf7f;
}



/* ===== 1800fafb0 FUN_1800fafb0 ===== */

ulonglong FUN_1800fafb0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)*param_1 + 0x30);
  uVar2 = (*(longlong *)(*(longlong *)*param_1 + 0x38) - lVar1 >> 5) * -0x5555555555555555;
  if (param_2 < uVar2) {
    uVar2 = param_2 * 0x60;
    if (*(int *)(uVar2 + lVar1) == 1) {
      return (ulonglong)*(byte *)(uVar2 + 4 + lVar1);
    }
    if ((*(int *)(uVar2 + lVar1) == 2) && (*(double *)(uVar2 + 8 + lVar1) == 0.0)) {
      return uVar2 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



/* ===== 1800fb010 FUN_1800fb010 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800fb010(undefined8 *param_1,char *param_2,char *param_3,double param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int iVar8;
  size_t sVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined8 *_Buf2;
  char *pcVar12;
  undefined8 *puVar13;
  double *pdVar14;
  undefined1 *puVar15;
  char cVar16;
  undefined8 *puVar17;
  undefined8 ****ppppuVar18;
  undefined8 *puVar19;
  undefined8 ****ppppuVar20;
  ulonglong uVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 ****local_78;
  undefined8 uStack_70;
  size_t local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)*param_1;
  local_98 = param_5;
  local_90 = param_6;
  local_88 = param_7;
  local_80 = param_8;
  local_68 = 0;
  local_60 = 0;
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  sVar9 = strlen(param_3);
  FUN_1800133a0(&local_78,param_3,sVar9);
  uVar21 = local_60;
  sVar9 = local_68;
  ppppuVar18 = local_78;
  puVar15 = auStack_b8;
  _Buf2 = *(undefined8 **)(*plVar1 + 0x48);
  ppppuVar20 = &local_78;
  if (0xf < local_60) {
    ppppuVar20 = local_78;
  }
  puVar17 = *(undefined8 **)(*plVar1 + 0x50);
  for (; _Buf2 != puVar17; _Buf2 = _Buf2 + 0x10) {
    if ((ulonglong)_Buf2[3] < 0x10) {
      puVar19 = _Buf2;
    }
    else {
      puVar19 = (undefined8 *)*_Buf2;
    }
    if ((sVar9 == _Buf2[2]) &&
       ((sVar9 == 0 || (iVar8 = memcmp(ppppuVar20,puVar19,sVar9), iVar8 == 0)))) {
      if (_Buf2 + 4 != (undefined8 *)0x0) {
        param_4 = (double)FUN_180370b10(_Buf2 + 4,param_4);
        ppppuVar18 = local_78;
        uVar21 = local_60;
      }
      break;
    }
  }
  fVar23 = SUB84(param_4,0);
  if (0xf < uVar21) {
    uVar11 = uVar21 + 1;
    ppppuVar20 = ppppuVar18;
    if (0xfff < uVar11) {
      ppppuVar20 = (undefined8 ****)ppppuVar18[-1];
      puVar19 = (undefined8 *)((longlong)ppppuVar18 + (-8 - (longlong)ppppuVar20));
      if (&DAT_0000001f < puVar19) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar15 = auStack_b0;
        goto LAB_1800fb293;
      }
      uVar11 = uVar21 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar20,uVar11);
  }
  uVar6 = local_88;
  uVar5 = local_90;
  uVar4 = local_98;
  lVar2 = param_1[1];
  puVar17 = (undefined8 *)0x0;
  fVar23 = (float)param_4;
  pcVar12 = (char *)(lVar2 + 0x433a0);
  if (lVar2 != lVar2 + 0x3900) {
    do {
      if ((*pcVar12 != '\0') && (iVar8 = strcmp(pcVar12,param_2), iVar8 == 0)) {
        puVar17 = (undefined8 *)0x1;
        pcVar12[0] = '\0';
        pcVar12[1] = '\0';
        pcVar12[2] = '\0';
        pcVar12[3] = '\0';
        pcVar12[4] = '\0';
        pcVar12[5] = '\0';
        pcVar12[6] = '\0';
        pcVar12[7] = '\0';
        pcVar12[8] = '\0';
        pcVar12[9] = '\0';
        pcVar12[10] = '\0';
        pcVar12[0xb] = '\0';
        pcVar12[0xc] = '\0';
        pcVar12[0xd] = '\0';
        pcVar12[0xe] = '\0';
        pcVar12[0xf] = '\0';
        pcVar12[0x10] = '\0';
        pcVar12[0x11] = '\0';
        pcVar12[0x12] = '\0';
        pcVar12[0x13] = '\0';
        pcVar12[0x14] = '\0';
        pcVar12[0x15] = '\0';
        pcVar12[0x16] = '\0';
        pcVar12[0x17] = '\0';
        pcVar12[0x18] = '\0';
        pcVar12[0x19] = '\0';
        pcVar12[0x1a] = '\0';
        pcVar12[0x1b] = '\0';
        pcVar12[0x1c] = '\0';
        pcVar12[0x1d] = '\0';
        pcVar12[0x1e] = '\0';
        pcVar12[0x1f] = '\0';
        pcVar12[0x20] = '\0';
        pcVar12[0x21] = '\0';
        pcVar12[0x22] = '\0';
        pcVar12[0x23] = '\0';
        pcVar12[0x24] = '\0';
        pcVar12[0x25] = '\0';
        pcVar12[0x26] = '\0';
        pcVar12[0x27] = '\0';
        pcVar12[0x28] = '\0';
        pcVar12[0x29] = '\0';
        pcVar12[0x2a] = '\0';
        pcVar12[0x2b] = '\0';
        pcVar12[0x2c] = '\0';
        pcVar12[0x2d] = '\0';
        pcVar12[0x2e] = '\0';
        pcVar12[0x2f] = '\0';
        pcVar12[0x30] = '\0';
        pcVar12[0x31] = '\0';
        pcVar12[0x32] = '\0';
        pcVar12[0x33] = '\0';
        pcVar12[0x34] = '\0';
        pcVar12[0x35] = '\0';
        pcVar12[0x36] = '\0';
        pcVar12[0x37] = '\0';
        pcVar12[0x38] = '\0';
        pcVar12[0x39] = '\0';
        pcVar12[0x3a] = '\0';
        pcVar12[0x3b] = '\0';
        pcVar12[0x3c] = '\0';
        pcVar12[0x3d] = '\0';
        pcVar12[0x3e] = '\0';
        pcVar12[0x3f] = '\0';
        pcVar12[0x40] = '\0';
        pcVar12[0x41] = '\0';
        pcVar12[0x42] = '\0';
        pcVar12[0x43] = '\0';
        pcVar12[0x44] = '\0';
        pcVar12[0x45] = '\0';
        pcVar12[0x46] = '\0';
        pcVar12[0x47] = '\0';
        pcVar12[0x48] = '\0';
        pcVar12[0x49] = '\0';
        pcVar12[0x4a] = '\0';
        pcVar12[0x4b] = '\0';
        pcVar12[0x4c] = '\0';
        pcVar12[0x4d] = '\0';
        pcVar12[0x4e] = '\0';
        pcVar12[0x4f] = '\0';
        pcVar12[0x50] = '\0';
        pcVar12[0x51] = '\0';
        pcVar12[0x52] = '\0';
        pcVar12[0x53] = '\0';
        pcVar12[0x54] = '\0';
        pcVar12[0x55] = '\0';
        pcVar12[0x56] = '\0';
        pcVar12[0x57] = '\0';
        pcVar12[0x58] = '\0';
        pcVar12[0x59] = '\0';
        pcVar12[0x5a] = '\0';
        pcVar12[0x5b] = '\0';
        pcVar12[0x5c] = '\0';
        pcVar12[0x5d] = '\0';
        pcVar12[0x5e] = '\0';
        pcVar12[0x5f] = '\0';
        if (pcVar12[0x68] != '\0') {
          snprintf(pcVar12,0x60,&DAT_1806d3198,uVar4);
          *(float *)(pcVar12 + 0x6c) = fVar23;
          pcVar12[0x68] = '\x01';
          snprintf(pcVar12 + 0x70,0x30,&DAT_1806d3198,uVar5);
          snprintf(pcVar12 + 0xd0,0x10,&DAT_1806d3198,uVar6);
          pcVar12[0xe0] = '\x01';
          pcVar12[0xa0] = '\0';
          pcVar12[0xa1] = '\0';
          pcVar12[0xa2] = '\0';
          pcVar12[0xa3] = '\0';
          pcVar12[0xa4] = '\0';
          pcVar12[0xa5] = '\0';
          pcVar12[0xa6] = '\0';
          pcVar12[0xa7] = '\0';
          pcVar12[0xa8] = '\0';
          pcVar12[0xa9] = '\0';
          pcVar12[0xaa] = '\0';
          pcVar12[0xab] = '\0';
          pcVar12[0xac] = '\0';
          pcVar12[0xad] = '\0';
          pcVar12[0xae] = '\0';
          pcVar12[0xaf] = '\0';
          pcVar12[0xb0] = '\0';
          pcVar12[0xb1] = '\0';
          pcVar12[0xb2] = '\0';
          pcVar12[0xb3] = '\0';
          pcVar12[0xb4] = '\0';
          pcVar12[0xb5] = '\0';
          pcVar12[0xb6] = '\0';
          pcVar12[0xb7] = '\0';
          pcVar12[0xb8] = '\0';
          pcVar12[0xb9] = '\0';
          pcVar12[0xba] = '\0';
          pcVar12[0xbb] = '\0';
          pcVar12[0xbc] = '\0';
          pcVar12[0xbd] = '\0';
          pcVar12[0xbe] = '\0';
          pcVar12[0xbf] = '\0';
          pcVar12[0xc0] = '\0';
          pcVar12[0xc1] = '\0';
          pcVar12[0xc2] = '\0';
          pcVar12[0xc3] = '\0';
          pcVar12[0xc4] = '\0';
          pcVar12[0xc5] = '\0';
          pcVar12[0xc6] = '\0';
          pcVar12[199] = '\0';
          pcVar12[200] = '\0';
          pcVar12[0xc9] = '\0';
          pcVar12[0xca] = '\0';
          pcVar12[0xcb] = '\0';
          pcVar12[0xcc] = '\0';
          pcVar12[0xcd] = '\0';
          pcVar12[0xce] = '\0';
          pcVar12[0xcf] = '\0';
        }
      }
      pcVar12 = pcVar12 + 0xe4;
    } while (pcVar12 != (char *)(lVar2 + 0x46ca0));
  }
  cVar16 = (char)puVar17;
  sVar9 = strlen(param_2);
  puVar13 = *(undefined8 **)(param_1[2] + 0x48);
  puVar19 = *(undefined8 **)(param_1[2] + 0x50);
  puVar7 = auStack_b8;
  if (puVar13 != puVar19) {
    do {
      _Buf2 = puVar13;
      if ((ulonglong)puVar13[3] < 0x10) {
LAB_1800fb293:
        puVar13 = _Buf2;
      }
      else {
        _Buf2 = (undefined8 *)*puVar13;
      }
      cVar16 = (char)puVar17;
      if (sVar9 == puVar13[2]) {
        if (sVar9 != 0) {
          *(undefined8 *)(puVar15 + -8) = 0x1800fb2ac;
          iVar8 = memcmp(param_2,_Buf2,sVar9);
          if (iVar8 != 0) goto LAB_1800fb2b0;
        }
        piVar10 = (int *)(puVar13 + 4);
        pcVar12 = (char *)((longlong)puVar13 + 0x24);
        pdVar14 = (double *)(puVar13 + 5);
        goto LAB_1800fb2c5;
      }
LAB_1800fb2b0:
      puVar13 = puVar13 + 0x10;
      puVar7 = puVar15;
    } while (puVar13 != puVar19);
  }
  puVar15 = puVar7;
  piVar10 = (int *)0x0;
  pcVar12 = &DAT_00000004;
  pdVar14 = (double *)&DAT_00000008;
LAB_1800fb2c5:
  if ((cVar16 != '\0') || (piVar10 == (int *)0x0)) goto LAB_1800fb308;
  if (*piVar10 == 1) {
    bVar22 = *pcVar12 == '\0';
LAB_1800fb2fb:
    if (bVar22) goto LAB_1800fb308;
  }
  else {
    if (*piVar10 != 2) goto LAB_1800fb308;
    bVar22 = *pdVar14 == 0.0;
    if (!NAN(*pdVar14)) goto LAB_1800fb2fb;
  }
  **(int **)(puVar15 + 0x38) = (int)fVar23;
LAB_1800fb308:
  *(undefined8 *)(puVar15 + -8) = 0x1800fb315;
  return;
}



/* ===== 1800fb340 FUN_1800fb340 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1800fb340(undefined8 param_1,float *param_2,float param_3,float param_4,float param_5,
             float param_6)

{
  if (((((float)((uint)(*param_2 - param_3) & _DAT_1808ade90) < DAT_1808ac000) &&
       ((float)((uint)(param_2[1] - param_4) & _DAT_1808ade90) < DAT_1808ac000)) &&
      ((float)((uint)(param_2[2] - param_5) & _DAT_1808ade90) < DAT_1808ac000)) &&
     ((float)((uint)(param_2[3] - param_6) & _DAT_1808ade90) < DAT_1808ac000)) {
    return 1;
  }
  return 0;
}



/* ===== 1800fb3a0 FUN_1800fb3a0 ===== */

undefined8 FUN_1800fb3a0(undefined8 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  if (param_2 == 1) {
    return 0;
  }
  if (param_2 == 2) {
    *param_3 = param_4;
  }
  else if (param_2 == 3) {
    return 2;
  }
  return 1;
}



/* ===== 1800fb3d0 FUN_1800fb3d0 ===== */

int FUN_1800fb3d0(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    return 2;
  }
  if (param_2 == 2) {
    param_2 = 1;
  }
  return param_2;
}



/* ===== 1800fb3f0 FUN_1800fb3f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1800fb3f0(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  size_t _Size;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *_Buf1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  puVar4 = (undefined8 *)FUN_180073a70(local_48,param_1[1],param_2);
  if ((ulonglong)puVar4[3] < 0x10) {
    _Buf1 = puVar4;
  }
  else {
    _Buf1 = (undefined8 *)*puVar4;
  }
  puVar5 = *(undefined8 **)(lVar1 + 0x48);
  puVar2 = *(undefined8 **)(lVar1 + 0x50);
  _Size = puVar4[2];
  while( true ) {
    if (puVar5 == puVar2) {
      FUN_18000f890(local_48);
      return param_3;
    }
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar4 = puVar5;
    }
    else {
      puVar4 = (undefined8 *)*puVar5;
    }
    if ((_Size == puVar5[2]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar4,_Size), iVar3 == 0))))
    break;
    puVar5 = puVar5 + 0x10;
  }
  FUN_18000f890(local_48);
  if ((int *)(puVar5 + 4) == (int *)0x0) {
    return param_3;
  }
  iVar3 = *(int *)(puVar5 + 4);
  if (iVar3 == 1) {
    return *(undefined1 *)((longlong)puVar5 + 0x24);
  }
  if (iVar3 != 2) {
    return param_3;
  }
  if ((double)puVar5[5] == 0.0) {
    return 0;
  }
  return 1;
}



/* ===== 1800fb500 FUN_1800fb500 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800fb500(longlong *param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  size_t _Size;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *_Buf1;
  double dVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  puVar4 = (undefined8 *)FUN_180073a70(local_58,param_1[1],param_2);
  if ((ulonglong)puVar4[3] < 0x10) {
    _Buf1 = puVar4;
  }
  else {
    _Buf1 = (undefined8 *)*puVar4;
  }
  puVar5 = *(undefined8 **)(lVar1 + 0x48);
  puVar2 = *(undefined8 **)(lVar1 + 0x50);
  _Size = puVar4[2];
  while( true ) {
    if (puVar5 == puVar2) {
      FUN_18000f890(local_58);
      return;
    }
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar4 = puVar5;
    }
    else {
      puVar4 = (undefined8 *)*puVar5;
    }
    if ((_Size == puVar5[2]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar4,_Size), iVar3 == 0))))
    break;
    puVar5 = puVar5 + 0x10;
  }
  FUN_18000f890(local_58);
  if ((int *)(puVar5 + 4) == (int *)0x0) {
    return;
  }
  if (*(int *)(puVar5 + 4) != 4) {
    return;
  }
  if ((ulonglong)(((longlong)(puVar5[0xb] - puVar5[10]) >> 5) * -0x5555555555555555) < 4) {
    return;
  }
  dVar6 = (double)FUN_180370b10(puVar5[10],(double)*param_3);
  lVar1 = puVar5[10];
  *param_3 = (float)dVar6;
  dVar6 = (double)FUN_180370b10(lVar1 + 0x60,(double)param_3[1]);
  lVar1 = puVar5[10];
  param_3[1] = (float)dVar6;
  dVar6 = (double)FUN_180370b10(lVar1 + 0xc0,(double)param_3[2]);
  lVar1 = puVar5[10];
  param_3[2] = (float)dVar6;
  dVar6 = (double)FUN_180370b10(lVar1 + 0x120,(double)param_3[3]);
  param_3[3] = (float)dVar6;
  return;
}



/* ===== 1800fb670 FUN_1800fb670 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1800fb670(undefined8 *param_1,char *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  size_t sVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  double dVar10;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [32];
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  ulonglong uStack_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_98;
  uVar2 = *param_1;
  uVar4 = FUN_180073a70(local_50,param_1[1],"side.");
  sVar5 = strlen(param_2);
  puVar6 = (ulonglong *)FUN_1800134a0(uVar4,param_2,sVar5);
  local_70 = *puVar6;
  uStack_68 = puVar6[1];
  local_60 = puVar6[2];
  uStack_58 = puVar6[3];
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  *(undefined1 *)puVar6 = 0;
  dVar10 = (double)FUN_1800fa800(uVar2,&local_70,(double)(int)param_3);
  if (0xf < uStack_58) {
    uVar8 = uStack_58 + 1;
    uVar7 = local_70;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_70 - 8);
      if (0x1f < (local_70 - uVar7) - 8) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar9 = auStack_90;
        goto LAB_1800fb7a6;
      }
      uVar8 = uStack_58 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar7,uVar8);
  }
  local_60 = 0;
  uStack_58 = 0xf;
  local_70 = local_70 & 0xffffffffffffff00;
  FUN_18000f890(local_50);
  puVar9 = auStack_98;
  local_70 = _DAT_1808ad630;
  uStack_68 = _UNK_1808ad638;
  if ((uint)(int)dVar10 < 4) {
    puVar9 = auStack_98;
    param_3 = (int)dVar10;
  }
LAB_1800fb7a6:
  uVar1 = *(undefined4 *)(puVar9 + (longlong)(int)param_3 * 4 + 0x28);
  *(undefined8 *)(puVar9 + -8) = 0x1800fb7b7;
  return uVar1;
}



/* ===== 1800fb7e0 FUN_1800fb7e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800fb7e0(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  size_t sVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  ulonglong uStack_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_98;
  uVar1 = *param_1;
  uVar4 = FUN_180073a70(local_50,param_1[1],"order.");
  sVar5 = strlen(param_2);
  puVar6 = (ulonglong *)FUN_1800134a0(uVar4,param_2,sVar5);
  local_70 = *puVar6;
  uStack_68 = puVar6[1];
  local_60 = puVar6[2];
  uStack_58 = puVar6[3];
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  *(undefined1 *)puVar6 = 0;
  dVar3 = (double)FUN_1800fa800(uVar1,&local_70,0);
  if (0xf < uStack_58) {
    uVar8 = uStack_58 + 1;
    uVar7 = local_70;
    if (0xfff < uVar8) {
      uVar7 = *(ulonglong *)(local_70 - 8);
      if (0x1f < (local_70 - uVar7) - 8) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      uVar8 = uStack_58 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar7,uVar8);
  }
  local_60 = 0;
  uStack_58 = 0xf;
  local_70 = local_70 & 0xffffffffffffff00;
  FUN_18000f890(local_50);
  return (ulonglong)((int)dVar3 + 100);
}



/* ===== 1800fb910 FUN_1800fb910 ===== */

void FUN_1800fb910(longlong *param_1,int param_2,char param_3,int param_4,undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x98;
  *(char *)(lVar2 + 4 + lVar1) = param_3;
  if ((-1 < param_4) && (param_3 != '\0')) {
    *(undefined4 *)(lVar2 + 0xc + lVar1) = param_5;
    *(int *)(lVar2 + 8 + lVar1) = param_4;
  }
  return;
}



/* ===== 1800fb940 FUN_1800fb940 ===== */

int FUN_1800fb940(undefined8 param_1,int param_2)

{
  if (param_2 == 3) {
    return 5;
  }
  if (param_2 == 4) {
    return 3;
  }
  if (param_2 == 5) {
    param_2 = 4;
  }
  return param_2;
}



/* ===== 1800fb970 FUN_1800fb970 ===== */

ulonglong FUN_1800fb970(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  int *piVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  int *in_RAX;
  undefined4 extraout_var;
  ulonglong uVar6;
  undefined8 *_Buf2;
  undefined8 *puVar7;
  undefined8 *_Buf1;
  
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  puVar7 = *(undefined8 **)(*param_1 + 0x48);
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  _Size = param_2[2];
  do {
    if (puVar7 == puVar1) {
LAB_1800fb9d3:
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
    if ((ulonglong)puVar7[3] < 0x10) {
      _Buf2 = puVar7;
    }
    else {
      _Buf2 = (undefined8 *)*puVar7;
    }
    if (_Size == puVar7[2]) {
      if (_Size != 0) {
        iVar5 = memcmp(_Buf1,_Buf2,_Size);
        in_RAX = (int *)CONCAT44(extraout_var,iVar5);
        if (iVar5 != 0) goto LAB_1800fb9ca;
      }
      in_RAX = (int *)(puVar7 + 4);
      if ((in_RAX != (int *)0x0) && (*in_RAX == 4)) {
        piVar2 = (int *)puVar7[10];
        uVar6 = 0;
        if ((puVar7[0xb] - (longlong)piVar2 >> 5) * -0x5555555555555555 != 0) {
          if (*piVar2 == 1) {
            uVar4 = (undefined1)piVar2[1];
          }
          else if (*piVar2 == 2) {
            if (*(double *)(piVar2 + 2) == 0.0) {
              uVar4 = 0;
            }
            else {
              uVar4 = 1;
            }
          }
          else {
            uVar4 = *param_3;
          }
          *param_3 = uVar4;
          lVar3 = puVar7[10];
          uVar6 = (puVar7[0xb] - lVar3 >> 5) * -0x5555555555555555;
          if (1 < uVar6) {
            if (*(int *)(lVar3 + 0x60) == 1) {
              uVar4 = *(undefined1 *)(lVar3 + 100);
            }
            else if (*(int *)(lVar3 + 0x60) == 2) {
              if (*(double *)(lVar3 + 0x68) == 0.0) {
                uVar4 = 0;
              }
              else {
                uVar4 = 1;
              }
            }
            else {
              uVar4 = param_3[1];
            }
            param_3[1] = uVar4;
            lVar3 = puVar7[10];
            uVar6 = (puVar7[0xb] - lVar3 >> 5) * -0x5555555555555555;
            if (2 < uVar6) {
              if (*(int *)(lVar3 + 0xc0) == 1) {
                uVar4 = *(undefined1 *)(lVar3 + 0xc4);
              }
              else if (*(int *)(lVar3 + 0xc0) == 2) {
                if (*(double *)(lVar3 + 200) == 0.0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = 1;
                }
              }
              else {
                uVar4 = param_3[2];
              }
              param_3[2] = uVar4;
              lVar3 = puVar7[10];
              uVar6 = (puVar7[0xb] - lVar3 >> 5) * -0x5555555555555555;
              if (3 < uVar6) {
                if (*(int *)(lVar3 + 0x120) == 1) {
                  uVar4 = *(undefined1 *)(lVar3 + 0x124);
                }
                else if (*(int *)(lVar3 + 0x120) == 2) {
                  if (*(double *)(lVar3 + 0x128) == 0.0) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = 1;
                  }
                }
                else {
                  uVar4 = param_3[3];
                }
                param_3[3] = uVar4;
                lVar3 = puVar7[10];
                uVar6 = (puVar7[0xb] - lVar3 >> 5) * -0x5555555555555555;
                if (4 < uVar6) {
                  if (*(int *)(lVar3 + 0x180) == 1) {
                    uVar4 = *(undefined1 *)(lVar3 + 0x184);
                  }
                  else if (*(int *)(lVar3 + 0x180) == 2) {
                    if (*(double *)(lVar3 + 0x188) == 0.0) {
                      uVar4 = 0;
                    }
                    else {
                      uVar4 = 1;
                    }
                  }
                  else {
                    uVar4 = param_3[4];
                  }
                  param_3[4] = uVar4;
                  lVar3 = puVar7[10];
                  uVar6 = (puVar7[0xb] - lVar3 >> 5) * -0x5555555555555555;
                  if (5 < uVar6) {
                    if (*(int *)(lVar3 + 0x1e0) == 1) {
                      param_3[5] = *(undefined1 *)(lVar3 + 0x1e4);
                      return 1;
                    }
                    if (*(int *)(lVar3 + 0x1e0) == 2) {
                      if (*(double *)(lVar3 + 0x1e8) == 0.0) {
                        param_3[5] = 0;
                        return 1;
                      }
                      param_3[5] = 1;
                      return 1;
                    }
                    uVar6 = 0;
                    param_3[5] = param_3[5];
                  }
                }
              }
            }
          }
        }
        return CONCAT71((int7)(uVar6 >> 8),1);
      }
      goto LAB_1800fb9d3;
    }
LAB_1800fb9ca:
    puVar7 = puVar7 + 0x10;
  } while( true );
}



/* ===== 1800fbc20 FUN_1800fbc20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1800fbc20(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_38 = 0xf;
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  local_8c = 0;
  local_98 = 0;
  local_94 = 0;
  uStack_48 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_50 = 0;
  FUN_1800ccf00(param_2 + 4,&local_88);
  puVar7 = auStack_e8;
  puVar5 = auStack_e8;
  puVar6 = auStack_e8;
  plVar1 = (longlong *)(param_2 + 10);
  if (plVar1 == &lStack_70) goto LAB_1800fbd37;
  lVar2 = *plVar1;
  puVar7 = auStack_e8;
  if (lVar2 != 0) {
    lVar4 = lVar2;
    if ((ulonglong)((*(longlong *)(param_2 + 0xe) - lVar2 >> 2) * 4) < 0x1000) {
LAB_1800fbcfd:
      puVar6 = puVar5;
    }
    else {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar4) - 8U) {
        lVar4 = 5;
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar5 = auStack_e0;
        goto LAB_1800fbcfd;
      }
    }
    *(undefined8 *)(puVar6 + -8) = 0x1800fbd08;
    thunk_FUN_1803d64e0(lVar4);
    puVar7 = puVar6;
  }
  *plVar1 = lStack_70;
  *(undefined8 *)(param_2 + 0xc) = local_68;
  *(undefined8 *)(param_2 + 0xe) = uStack_60;
  *(undefined8 *)(param_2 + 0x10) = local_58;
  lStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
LAB_1800fbd37:
  *(undefined8 *)(puVar7 + -8) = 0x1800fbd44;
  FUN_18002ba60(param_2 + 0x12,&local_50);
  *(undefined8 *)(puVar7 + -8) = 0x1800fbd4d;
  FUN_18000f890(&local_50);
  *(undefined8 *)(puVar7 + -8) = 0x1800fbd56;
  FUN_180068f30(&lStack_70);
  *(undefined8 *)(puVar7 + -8) = 0x1800fbd5f;
  FUN_180068f30(&local_88);
  local_b8 = 0;
  local_b0 = 0;
  *(undefined8 *)(puVar7 + -8) = 0x1800fbd80;
  local_c8 = param_1;
  local_c0 = param_2;
  FUN_180107040(&local_c8,&DAT_18091a190);
  *(undefined8 *)(puVar7 + -8) = 0x1800fbd90;
  return local_b0._1_1_;
}



/* ===== 1800fbdb0 FUN_1800fbdb0 ===== */

undefined8 * FUN_1800fbdb0(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (DAT_180cc3e19 == '\0') {
    DAT_180cc3e19 = '\x01';
    FUN_1800ff4a0(local_res8,&DAT_18091a190);
  }
  if ((ulonglong)param_2[3] < 0x10) {
    puVar4 = param_2;
  }
  else {
    puVar4 = (undefined8 *)*param_2;
  }
  uVar3 = 0;
  uVar6 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar4 + uVar3);
      uVar3 = uVar3 + 1;
      uVar6 = (uVar6 ^ *pbVar1) * 0x100000001b3;
    } while (uVar3 < (ulonglong)param_2[2]);
  }
  lVar2 = FUN_18014a630(uVar3,&local_18,param_2,uVar6);
  lVar5 = DAT_180cd12c8;
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar5 = *(longlong *)(lVar2 + 8);
  }
  if (lVar5 == DAT_180cd12c8) {
    local_18 = 0;
    uStack_10 = 0x100000000;
  }
  else {
    local_18 = *(undefined8 *)(lVar5 + 0x30);
    uStack_10 = *(undefined8 *)(lVar5 + 0x38);
  }
  *param_1 = local_18;
  param_1[1] = uStack_10;
  return param_1;
}



/* ===== 1800fbe90 FUN_1800fbe90 ===== */

longlong FUN_1800fbe90(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_res10 [24];
  
  if (DAT_180cc3e19 == '\0') {
    DAT_180cc3e19 = '\x01';
    FUN_1800ff4a0(local_res10,&DAT_18091a190);
  }
  uVar3 = DAT_180cd12b0 &
          ((((((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_1 >> 8 & 0xff) *
                0x100000001b3 ^ param_1 >> 0x10 & 0xff) * 0x100000001b3 ^ param_1 >> 0x18 & 0xff) *
              0x100000001b3 ^ param_1 >> 0x20 & 0xff) * 0x100000001b3 ^ param_1 >> 0x28 & 0xff) *
            0x100000001b3 ^ param_1 >> 0x30 & 0xff) * 0x100000001b3 ^ param_1 >> 0x38) *
          0x100000001b3;
  lVar2 = *(longlong *)(DAT_180cd1298 + 8 + uVar3 * 0x10);
  if (lVar2 != DAT_180cd1288) {
    uVar1 = *(ulonglong *)(lVar2 + 0x10);
    while (param_1 != uVar1) {
      if (lVar2 == *(longlong *)(DAT_180cd1298 + uVar3 * 0x10)) goto LAB_1800fbf74;
      lVar2 = *(longlong *)(lVar2 + 8);
      uVar1 = *(ulonglong *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) goto LAB_1800fbf77;
  }
LAB_1800fbf74:
  lVar2 = DAT_180cd1288;
LAB_1800fbf77:
  if (lVar2 == DAT_180cd1288) {
    return 0;
  }
  return lVar2 + 0x18;
}



/* ===== 1800fbf90 FUN_1800fbf90 ===== */

undefined8 * FUN_1800fbf90(undefined8 *param_1)

{
  longlong local_20;
  longlong alStack_18 [2];
  
  local_20 = 0;
  alStack_18[0] = 0;
  alStack_18[1] = 0;
  FUN_18010d970(&local_20,&DAT_18091a190);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180068970(param_1,alStack_18[0] - local_20 >> 5,&local_20,alStack_18);
  FUN_1800288b0(&local_20);
  return param_1;
}



/* ===== 1800fc010 FUN_1800fc010 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800fc010(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined7 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar16;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  undefined4 local_e8;
  longlong local_e0;
  longlong lStack_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  char acStack_a4 [4];
  undefined8 local_a0;
  ulonglong uStack_98;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_108;
  local_e8 = 0;
  local_c0 = param_1;
  uVar10 = FUN_1804ecaa0(0x46ca4);
  FUN_180540530(uVar10,&DAT_18091a190,0x46ca4);
  local_e8 = 2;
  local_e0 = 0;
  lStack_d8 = 0;
  local_d0 = 0;
  local_c8 = &local_e0;
  local_b8 = uVar10;
  FUN_180114280(&local_c8,uVar10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180068970(param_1,lStack_d8 - local_e0 >> 5,&local_e0,&lStack_d8);
  uVar4 = s_worlds_general_1806f3888._8_4_;
  uVar12 = s_worlds_general_1806f3888._0_8_;
  local_e8 = 3;
  acStack_a4[3] = 0;
  local_a0 = 0xe;
  uStack_98 = 0xf;
  local_b0 = s_worlds_general_1806f3888._0_4_;
  uStack_ac = s_worlds_general_1806f3888._4_4_;
  uStack_a8._0_1_ = s_worlds_general_1806f3888[8];
  uStack_a8._1_1_ = s_worlds_general_1806f3888[9];
  uStack_a8._2_1_ = s_worlds_general_1806f3888[10];
  uStack_a8._3_1_ = s_worlds_general_1806f3888[0xb];
  acStack_a4[0] = s_worlds_general_1806f3888[0xc];
  acStack_a4[1] = s_worlds_general_1806f3888[0xd];
  acStack_a4[2] = 0;
  piVar1 = (int *)param_1[1];
  if (piVar1 == (int *)param_1[2]) {
    FUN_18009bb20(param_1,piVar1,&local_b0);
  }
  else {
    uVar8 = (uint)(ushort)s_worlds_general_1806f3888._12_2_;
    *piVar1 = local_b0;
    piVar1[1] = uStack_ac;
    piVar1[2] = uVar4;
    piVar1[3] = uVar8;
    piVar1[4] = 0xe;
    piVar1[5] = 0;
    piVar1[6] = 0xf;
    piVar1[7] = 0;
    local_b0._1_3_ = SUB83(uVar12,1);
    local_b0 = (uint)local_b0._1_3_ << 8;
    param_1[1] = param_1[1] + 0x20;
  }
  if (0xf < uStack_98) {
    uVar13 = uStack_98 + 1;
    lVar7 = CONCAT44(uStack_ac,local_b0);
    lVar16 = lVar7;
    if (0xfff < uVar13) {
      lVar16 = *(longlong *)(lVar7 + -8);
      if (0x1f < (lVar7 - lVar16) - 8U) goto LAB_1800fc271;
      uVar13 = uStack_98 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar16,uVar13);
  }
  uVar9 = s_worlds_menu_1806f38b0._0_7_;
  acStack_a4[0] = '\0';
  acStack_a4[1] = '\0';
  acStack_a4[2] = 0;
  acStack_a4[3] = 0;
  local_a0 = 0xb;
  uStack_98 = 0xf;
  local_b0 = s_worlds_menu_1806f38b0._0_4_;
  uStack_ac = CONCAT13(s_worlds_menu_1806f38b0[7],s_worlds_menu_1806f38b0._4_3_);
  uStack_a8 = (uint)s_worlds_menu_1806f38b0._7_4_ >> 8;
  piVar1 = (int *)param_1[1];
  if (piVar1 == (int *)param_1[2]) {
    FUN_18009bb20(param_1,piVar1,&local_b0);
  }
  else {
    *piVar1 = local_b0;
    piVar1[1] = uStack_ac;
    piVar1[2] = uStack_a8;
    piVar1[3] = 0;
    piVar1[4] = 0xb;
    piVar1[5] = 0;
    piVar1[6] = 0xf;
    piVar1[7] = 0;
    local_b0._1_3_ = SUB73(uVar9,1);
    local_b0 = (uint)local_b0._1_3_ << 8;
    param_1[1] = param_1[1] + 0x20;
  }
  if (0xf < uStack_98) {
    uVar13 = uStack_98 + 1;
    lVar7 = CONCAT44(uStack_ac,local_b0);
    lVar16 = lVar7;
    if (0xfff < uVar13) {
      lVar16 = *(longlong *)(lVar7 + -8);
      if (0x1f < (lVar7 - lVar16) - 8U) {
LAB_1800fc271:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar14 = auStack_100;
        goto LAB_1800fc278;
      }
      uVar13 = uStack_98 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar16,uVar13);
  }
  puVar14 = auStack_108;
  puVar15 = auStack_108;
  unaff_RSI = lStack_d8;
  unaff_RDI = local_e0;
  if (local_e0 != lStack_d8) {
    do {
      *(undefined8 *)(puVar14 + -8) = 0x1800fc234;
      puVar11 = (undefined4 *)FUN_180066a20(&local_b0,"worlds.menu.",unaff_RDI);
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 == (undefined8 *)param_1[2]) {
LAB_1800fc278:
        *(undefined8 *)(puVar14 + -8) = 0x1800fc283;
        FUN_18009bb20(param_1);
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        uVar4 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        *(undefined4 *)puVar2 = *puVar11;
        *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
        *(undefined4 *)(puVar2 + 1) = uVar5;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uVar6;
        uVar12 = *(undefined8 *)(puVar11 + 6);
        puVar2[2] = *(undefined8 *)(puVar11 + 4);
        puVar2[3] = uVar12;
        *(undefined8 *)(puVar11 + 4) = 0;
        *(undefined8 *)(puVar11 + 6) = 0xf;
        *(undefined1 *)puVar11 = 0;
        param_1[1] = param_1[1] + 0x20;
      }
      *(undefined8 *)(puVar14 + -8) = 0x1800fc28d;
      FUN_18000f890(&local_b0);
      unaff_RDI = unaff_RDI + 0x20;
      puVar15 = puVar14;
    } while (unaff_RDI != unaff_RSI);
  }
  uVar13 = 0;
  do {
    *(undefined8 *)(puVar15 + -8) = 0x1800fc2ac;
    uVar12 = FUN_18004e4f0(local_90,uVar13);
    *(undefined8 *)(puVar15 + -8) = 0x1800fc2c0;
    FUN_180066ab0(&local_b0,"worlds.map",uVar12);
    *(undefined8 *)(puVar15 + -8) = 0x1800fc2ca;
    FUN_18000f890(local_90);
    lVar16 = param_1[1];
    if (lVar16 == param_1[2]) {
      *(undefined8 *)(puVar15 + -8) = 0x1800fc2f6;
      FUN_180028f00(param_1,lVar16,&local_b0);
    }
    else {
      *(undefined8 *)(puVar15 + -8) = 0x1800fc2e0;
      FUN_180024b50(lVar16,&local_b0);
      param_1[1] = param_1[1] + 0x20;
    }
    lVar7 = lStack_d8;
    for (lVar16 = *(longlong *)(puVar15 + 0x28); lVar16 != lVar7; lVar16 = lVar16 + 0x20) {
      *(undefined8 *)(puVar15 + -8) = 0x1800fc324;
      uVar12 = FUN_180073a70(local_50,&local_b0,&DAT_1806e6f24);
      *(undefined8 *)(puVar15 + -8) = 0x1800fc334;
      puVar11 = (undefined4 *)FUN_1800667a0(local_70,uVar12,lVar16);
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 == (undefined8 *)param_1[2]) {
        *(undefined8 *)(puVar15 + -8) = 0x1800fc37c;
        FUN_18009bb20(param_1,puVar2,puVar11);
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        uVar4 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        *(undefined4 *)puVar2 = *puVar11;
        *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
        *(undefined4 *)(puVar2 + 1) = uVar5;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uVar6;
        uVar12 = *(undefined8 *)(puVar11 + 6);
        puVar2[2] = *(undefined8 *)(puVar11 + 4);
        puVar2[3] = uVar12;
        *(undefined8 *)(puVar11 + 4) = 0;
        *(undefined8 *)(puVar11 + 6) = 0xf;
        *(undefined1 *)puVar11 = 0;
        param_1[1] = param_1[1] + 0x20;
      }
      *(undefined8 *)(puVar15 + -8) = 0x1800fc386;
      FUN_18000f890(local_70);
      *(undefined8 *)(puVar15 + -8) = 0x1800fc390;
      FUN_18000f890(local_50);
    }
    *(undefined8 *)(puVar15 + -8) = 0x1800fc3a6;
    FUN_18000f890(&local_b0);
    uVar13 = uVar13 + 1;
  } while (uVar13 < 0x30);
  *(undefined8 *)(puVar15 + -8) = 0x1800fc3bd;
  FUN_1800288b0(puVar15 + 0x28);
  *(undefined8 *)(puVar15 + -8) = 0x1800fc3cb;
  thunk_FUN_1803d64e0(uVar10,0x46ca4);
  *(undefined8 *)(puVar15 + -8) = 0x1800fc3da;
  return param_1;
}



/* ===== 1800fc400 FUN_1800fc400 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800fc400(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_50 = param_1;
  uVar1 = FUN_1804ecaa0(0x46ca4);
  FUN_180540530(uVar1,&DAT_18091a190,0x46ca4);
  local_50 = (undefined8 *)uVar1;
  FUN_1801c65c0(uVar1);
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0xf;
  local_38 = 0;
  local_18 = '\x01';
  local_48 = &local_38;
  local_40 = param_2;
  FUN_18011ab60(&local_48,uVar1);
  if (local_18 == '\0') {
    FUN_180073a70(param_1,&local_38,&DAT_1806e6c08);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 3;
    param_1[3] = 0xf;
    *(short *)param_1 = (short)DAT_1806f2b08;
    *(char *)((longlong)param_1 + 2) = (char)((uint)DAT_1806f2b08 >> 0x10);
    *(undefined1 *)((longlong)param_1 + 3) = 0;
  }
  FUN_18000f890(&local_38);
  thunk_FUN_1803d64e0(uVar1,0x46ca4);
  return param_1;
}



/* ===== 1800fc520 FUN_1800fc520 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800fc520(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_e8 [32];
  int *local_c8;
  int local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  int **local_a8;
  undefined8 local_a0;
  longlong local_98 [4];
  int local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0xf;
  local_68 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0xf;
  local_98[0] = 0;
  if ((ulonglong)param_1[3] < 0x10) {
    local_b8 = param_1;
  }
  else {
    local_b8 = (undefined8 *)*param_1;
  }
  local_b0 = param_1[2];
  cVar2 = FUN_180370c30(&local_b8,&local_78,local_98);
  if ((cVar2 == '\0') || (local_78 != 5)) {
    bVar5 = false;
  }
  else {
    local_c8 = &local_78;
    local_c0 = 0;
    local_a8 = &local_c8;
    local_a0 = param_2;
    FUN_1801214c0(&local_a8,&DAT_18091a190);
    bVar5 = 0 < local_c0;
  }
  if (0xf < (ulonglong)local_98[3]) {
    uVar4 = local_98[3] + 1;
    lVar3 = local_98[0];
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(local_98[0] + -8);
      if (0x1f < (local_98[0] - lVar3) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar4 = local_98[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar3,uVar4);
  }
  FUN_1801a6920(&uStack_30);
  FUN_1801a69c0(&local_48);
  FUN_18000f890(&local_68);
  return (ulonglong)bVar5;
}



/* ===== 1800fc680 FUN_1800fc680 ===== */

void FUN_1800fc680(longlong param_1)

{
  FUN_1801a6920(param_1 + 0x48);
  FUN_1801a69c0(param_1 + 0x30);
  FUN_18000f890(param_1 + 0x10);
  return;
}



/* ===== 1800fc6b0 FUN_1800fc6b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800fc6b0(undefined8 *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_188 [32];
  ulonglong local_168;
  longlong *local_160;
  longlong *local_158;
  undefined8 ****local_148;
  undefined8 local_140;
  int *local_138;
  undefined4 local_130;
  int **local_128;
  longlong *local_120;
  longlong local_118;
  undefined8 ****local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0 [8];
  char local_b0;
  longlong local_a8 [4];
  int local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_188;
  local_168 = local_168 & 0xffffffff00000000;
  puVar8 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar8 = (undefined8 *)*param_1;
  }
  if (param_1[2] == 0) {
LAB_1800fc718:
    uVar9 = 0xffffffffffffffff;
  }
  else {
    lVar6 = param_1[2] + (longlong)puVar8;
    lVar4 = thunk_FUN_1804e6c50(puVar8,lVar6,0x23);
    if (lVar4 == lVar6) goto LAB_1800fc718;
    uVar9 = lVar4 - (longlong)puVar8;
  }
  local_f0[0] = 0;
  local_f0[1] = 0;
  local_f0[2] = 0;
  local_f0[3] = 0;
  if ((ulonglong)param_1[2] < uVar9) {
    uVar9 = param_1[2];
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  FUN_1800133a0(local_f0,param_1,uVar9);
  uVar5 = FUN_1804ecaa0(0x46ca4);
  local_168 = uVar5;
  FUN_180540170(uVar5,0,0x46ca4);
  lVar6 = FUN_180142610(uVar5);
  local_f0[5] = 0;
  local_f0[6] = 0;
  local_f0[7] = 0xf;
  local_f0[4] = 0;
  local_b0 = '\x01';
  local_160 = local_f0 + 4;
  local_158 = local_f0;
  local_118 = lVar6;
  FUN_180127e20(&local_160,lVar6);
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_78 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0xf;
  local_a8[0] = 0;
  if (local_b0 == '\0') {
    FUN_180073a70(&local_110,local_f0 + 4,&DAT_1806e6c08);
  }
  else {
    uStack_108 = 0;
    local_100 = 3;
    local_f8 = 0xf;
    local_110 = (undefined8 ****)(ulonglong)(uint3)DAT_1806f2b08;
  }
  local_168 = CONCAT44(local_168._4_4_,0xf);
  local_148 = &local_110;
  if (0xf < local_f8) {
    local_148 = local_110;
  }
  local_140 = local_100;
  cVar3 = FUN_180370c30(&local_148,&local_88,local_a8);
  if ((cVar3 == '\0') || (local_88 != 5)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (0xf < local_f8) {
    uVar9 = local_f8 + 1;
    ppppuVar7 = local_110;
    if (uVar9 < 0x1000) {
LAB_1800fc8d7:
      thunk_FUN_1803d64e0(ppppuVar7,uVar9);
      goto LAB_1800fc8dc;
    }
    ppppuVar7 = (undefined8 ****)local_110[-1];
    if ((ulonglong)((longlong)local_110 + (-8 - (longlong)ppppuVar7)) < 0x20) {
      uVar9 = local_f8 + 0x28;
      goto LAB_1800fc8d7;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1800fc9ea:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1800fc9f1:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1800fc8dc:
  if (!bVar2) {
    local_130 = 0;
    local_128 = &local_138;
    local_120 = local_f0;
    local_138 = &local_88;
    FUN_18012e710(&local_128,&DAT_18091a190);
  }
  if (0xf < (ulonglong)local_a8[3]) {
    uVar9 = local_a8[3] + 1;
    lVar4 = local_a8[0];
    if (0xfff < uVar9) {
      lVar4 = *(longlong *)(local_a8[0] + -8);
      if (0x1f < (local_a8[0] - lVar4) - 8U) goto LAB_1800fc9ea;
      uVar9 = local_a8[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar4,uVar9);
  }
  FUN_1801a6920(&uStack_40);
  FUN_1801a69c0(&local_58);
  FUN_18000f890(&local_78);
  FUN_18000f890(local_f0 + 4);
  if (lVar6 != 0) {
    thunk_FUN_1803d64e0(lVar6,0x46ca4);
  }
  if (0xf < (ulonglong)local_f0[3]) {
    uVar9 = local_f0[3] + 1;
    lVar6 = local_f0[0];
    if (0xfff < uVar9) {
      lVar6 = *(longlong *)(local_f0[0] + -8);
      if (0x1f < (local_f0[0] - lVar6) - 8U) goto LAB_1800fc9f1;
      uVar9 = local_f0[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar6,uVar9);
  }
  return;
}



/* ===== 1800fca00 FUN_1800fca00 ===== */

undefined1 FUN_1800fca00(undefined8 param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  float *pfVar10;
  float fVar11;
  undefined1 local_48 [24];
  
  puVar5 = (undefined8 *)FUN_1800fbdb0(local_48);
  puVar3 = (undefined1 *)*puVar5;
  if ((((puVar3 == (undefined1 *)0x0) || (iVar1 = *(int *)(puVar5 + 1), iVar1 == 0)) ||
      (puVar3 < &DAT_18091a190)) || ((undefined1 *)0x180960e33 < puVar3)) {
    return 0;
  }
  iVar2 = *(int *)((longlong)puVar5 + 0xc);
  uVar4 = FUN_1804ecaa0(0x46ca4);
  FUN_180540170(uVar4,0,0x46ca4);
  lVar6 = FUN_180142610();
  pfVar10 = (float *)(puVar3 + lVar6 + -0x18091a190);
  if (pfVar10 != (float *)0x0) {
    if (iVar1 == 1) {
      if (*(char *)pfVar10 != '\0') {
        fVar11 = DAT_1808ac34c;
        goto LAB_1800fcaf2;
      }
    }
    else {
      if (iVar1 == 2) {
        fVar11 = (float)(int)*pfVar10;
        goto LAB_1800fcaf2;
      }
      if (iVar1 == 3) {
        fVar11 = *pfVar10;
        goto LAB_1800fcaf2;
      }
      if (iVar1 == 4) {
        uVar9 = 0;
        uVar8 = 0;
        if (0 < iVar2) {
          do {
            uVar7 = (uint)uVar8;
            if (0x17 < uVar7) break;
            if (*(char *)((longlong)pfVar10 + uVar8) != '\0') {
              uVar9 = uVar9 | 1 << (uVar7 & 0x1f);
            }
            uVar8 = (ulonglong)(uVar7 + 1);
          } while ((int)(uVar7 + 1) < iVar2);
        }
        fVar11 = (float)(int)uVar9;
        goto LAB_1800fcaf2;
      }
    }
  }
  fVar11 = 0.0;
LAB_1800fcaf2:
  *param_2 = fVar11;
  if (lVar6 != 0) {
    thunk_FUN_1803d64e0(lVar6,0x46ca4);
  }
  return 1;
}



/* ===== 1800fcb30 FUN_1800fcb30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800fcb30(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong *local_70;
  undefined8 local_68;
  ulonglong local_60 [8];
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_98;
  uVar2 = FUN_1804ecaa0(0x46ca4);
  local_78 = uVar2;
  FUN_180540170(uVar2,0,0x46ca4);
  lVar3 = FUN_180142610(uVar2);
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0xf;
  local_60[4] = 0;
  local_20 = '\x01';
  local_70 = local_60 + 4;
  local_78 = lVar3;
  local_68 = param_1;
  FUN_18011ab60(&local_70,lVar3);
  if (local_20 == '\0') {
    FUN_180073a70(local_60,local_60 + 4,&DAT_1806e6c08);
  }
  else {
    local_60[1] = 0;
    local_60[2] = 3;
    local_60[3] = 0xf;
    local_60[0] = (ulonglong)(uint3)DAT_1806f2b08;
  }
  FUN_1800fc520(local_60,param_1);
  if (0xf < local_60[3]) {
    uVar5 = local_60[3] + 1;
    uVar4 = local_60[0];
    if (0xfff < uVar5) {
      uVar4 = *(ulonglong *)(local_60[0] - 8);
      if (0x1f < (local_60[0] - uVar4) - 8) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = local_60[3] + 0x28;
    }
    thunk_FUN_1803d64e0(uVar4,uVar5);
  }
  FUN_18000f890(local_60 + 4);
  if (lVar3 != 0) {
    thunk_FUN_1803d64e0(lVar3,0x46ca4);
  }
  return;
}



/* ===== 1800fcca0 FUN_1800fcca0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800fcca0(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [40];
  char *local_1b8;
  undefined8 local_1b0;
  int local_1a8 [2];
  undefined8 local_1a0;
  longlong local_198;
  undefined1 local_190 [8];
  byte abStack_188 [120];
  longlong local_110;
  undefined **local_f0 [13];
  undefined8 ****local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  uVar4 = FUN_1800f24d0();
  puVar10 = auStack_1e8;
  if ((char)uVar4 == '\0') {
LAB_1800fcfc4:
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    local_1a8[0] = 0;
    local_1a0 = &PTR_vftable_18091a158;
    local_1b8 = "C:\\neverlose\\configs";
    local_1b0 = 0x14;
    uVar3 = FUN_1804e5000();
    FUN_180013d60(local_68,uVar3,&local_1b8);
    piVar5 = (int *)FUN_180016ab0(&local_1b8,local_68,local_1a8);
    iVar1 = *piVar5;
    FUN_1800289e0(local_68);
    if (iVar1 != 3) {
      local_1b8 = "C:\\neverlose\\configs";
      local_1b0 = 0x14;
      uVar3 = FUN_1804e5000();
      FUN_180013d60(local_68,uVar3,&local_1b8);
      FUN_180016bc0(local_68,local_1a8);
      uVar4 = FUN_1800289e0(local_68);
      puVar10 = auStack_1e8;
      if (local_1a8[0] != 0) goto LAB_1800fcfc4;
    }
    pcVar6 = (char *)FUN_1804ecaa0(0x46ca4);
    FUN_180540530(pcVar6,&DAT_18091a190,0x46ca4);
    local_1b8 = pcVar6;
    FUN_1801c65c0(pcVar6);
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0xf;
    local_48 = 0;
    local_28 = '\x01';
    FUN_180135070(&local_48,pcVar6);
    if (local_28 == '\0') {
      FUN_180073a70(&local_88,&local_48,&DAT_1806e6c08);
    }
    else {
      uStack_80 = 0;
      local_78 = 3;
      local_70 = 0xf;
      local_88 = (undefined8 ****)(ulonglong)(uint3)DAT_1806f2b08;
    }
    uVar7 = FUN_1800f25e0(local_68,param_1);
    FUN_180067620(&local_198,uVar7,0x30);
    FUN_18000f890(local_68);
    if (local_110 == 0) {
LAB_1800fcee7:
      uVar4 = 0;
    }
    else {
      ppppuVar8 = &local_88;
      if (0xf < local_70) {
        ppppuVar8 = local_88;
      }
      FUN_1800682a0(&local_198,ppppuVar8,local_78);
      if ((abStack_188[*(int *)(local_198 + 4)] & 6) != 0) goto LAB_1800fcee7;
      if (param_1 == &DAT_1809ec0a0) {
LAB_1800fcee2:
        uVar4 = 1;
      }
      else {
        if ((ulonglong)param_1[3] < 0x10) {
          FUN_180029840(&DAT_1809ec0a0,param_1,param_1[2]);
          goto LAB_1800fcee2;
        }
        FUN_180029840(&DAT_1809ec0a0,*param_1,param_1[2]);
        uVar4 = 1;
      }
    }
    *(undefined ***)(local_190 + (longlong)*(int *)(local_198 + 4) + -8) =
         std::basic_ofstream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)local_1a8 + (longlong)*(int *)(local_198 + 4) + 0xc) =
         *(int *)(local_198 + 4) + -0xa8;
    FUN_1800681f0(local_190);
    *(undefined ***)(local_190 + (longlong)*(int *)(local_198 + 4) + -8) =
         std::basic_ostream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)local_1a8 + (longlong)*(int *)(local_198 + 4) + 0xc) =
         *(int *)(local_198 + 4) + -0x10;
    local_f0[0] = std::ios_base::vftable;
    FUN_1804eaa10(local_f0);
    if (0xf < local_70) {
      uVar9 = local_70 + 1;
      ppppuVar8 = local_88;
      if (0xfff < uVar9) {
        ppppuVar8 = (undefined8 ****)local_88[-1];
        if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar8))) {
          pcVar2 = (code *)swi(0x29);
          uVar4 = (*pcVar2)(5);
          puVar10 = auStack_1e0;
          goto LAB_1800fcfc4;
        }
        uVar9 = local_70 + 0x28;
      }
      thunk_FUN_1803d64e0(ppppuVar8,uVar9);
    }
    local_78 = 0;
    local_70 = 0xf;
    local_88 = (undefined8 ****)((ulonglong)local_88 & 0xffffffffffffff00);
    FUN_18000f890(&local_48);
    thunk_FUN_1803d64e0(pcVar6,0x46ca4);
    puVar10 = auStack_1e8;
  }
  *(undefined8 *)(puVar10 + -8) = 0x1800fcfd5;
  return uVar4;
}



/* ===== 1800fcff0 FUN_1800fcff0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800fcff0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  ULONGLONG UVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  char *pcVar24;
  undefined8 **ppuVar25;
  undefined8 ****ppppuVar26;
  ulonglong uVar27;
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [40];
  undefined *local_288;
  undefined2 local_280;
  undefined4 uStack_27e;
  undefined2 uStack_27a;
  longlong local_278;
  undefined1 local_270 [6];
  undefined2 uStack_26a;
  longlong local_268 [9];
  undefined8 auStack_220 [9];
  longlong local_1d8;
  undefined8 *local_158;
  undefined8 uStack_150;
  undefined8 *local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ulonglong local_120;
  undefined8 ****local_118 [2];
  undefined8 **local_108;
  ulonglong local_100;
  char *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  int local_d8;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_2b8;
  puVar11 = (undefined8 *)0x0;
  uVar9 = FUN_1800f24d0();
  puVar12 = auStack_2b8;
  if ((char)uVar9 == '\0') goto LAB_1800fd649;
  uVar9 = FUN_1800f25e0(local_78,param_1);
  FUN_180067670(local_268,uVar9,0x20);
  FUN_18000f890(local_78);
  puVar12 = auStack_2b8;
  if (local_1d8 == 0) {
    uVar9 = 0;
  }
  else {
    local_158 = *(undefined8 **)((longlong)auStack_220 + (longlong)*(int *)(local_268[0] + 4));
    local_288 = (undefined *)0x0;
    local_280 = 1;
    uStack_27e = local_270._2_4_;
    uStack_27a = uStack_26a;
    uStack_150 = CONCAT26(uStack_26a,
                          CONCAT42(local_270._2_4_,(ushort)(local_158 == (undefined8 *)0x0)));
    FUN_180066b30(local_118,&local_158,&local_288);
    puVar12 = auStack_2b8;
    ppuVar25 = local_108;
    uVar21 = local_100;
    ppppuVar26 = local_118[0];
    if (local_108 < &DAT_00000004) {
LAB_1800fd449:
      local_d4 = 0;
      local_d0 = 0;
      uStack_c0 = 0;
      local_b0 = 0xf;
      local_c8 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      uStack_150 = 0;
      local_140 = 0xf;
      local_158 = (undefined8 *)0x0;
      ppppuVar10 = local_118;
      if (0xf < uVar21) {
        ppppuVar10 = ppppuVar26;
      }
      *(undefined8 *****)(puVar12 + 0x30) = ppppuVar10;
      *(undefined8 ***)(puVar12 + 0x38) = ppuVar25;
      *(undefined8 *)(puVar12 + -8) = 0x1800fd4dc;
      local_148 = puVar11;
      local_d8 = (int)puVar11;
      local_b8 = puVar11;
      cVar6 = FUN_180370c30(puVar12 + 0x30,&local_d8,&local_158);
      if ((cVar6 == '\0') || (local_d8 != 5)) {
        uVar9 = 0;
      }
      else {
        *(undefined8 *)(puVar12 + -8) = 0x1800fd4fb;
        uVar9 = FUN_1804ecaa0(0x46ca4);
        *(undefined8 *)(puVar12 + 0x30) = uVar9;
        *(undefined8 *)(puVar12 + -8) = 0x1800fd513;
        FUN_180540170(uVar9,0,0x46ca4);
        *(undefined8 *)(puVar12 + -8) = 0x1800fd51b;
        puVar15 = (undefined1 *)FUN_180142610(uVar9);
        *(undefined1 **)(puVar12 + 0x30) = puVar15;
        *(int **)(puVar12 + 0x40) = &local_d8;
        *(int *)(puVar12 + 0x48) = (int)puVar11;
        *(undefined8 *)(puVar12 + -8) = 0x1800fd541;
        FUN_18013b9d0(puVar12 + 0x40,puVar15);
        *(undefined8 *)(puVar12 + -8) = 0x1800fd550;
        FUN_1800f6940(&local_d8,puVar15);
        if (*(int *)(puVar12 + 0x48) == 0) {
          uVar9 = 0;
        }
        else {
          *puVar15 = DAT_18091a190;
          *(undefined8 *)(puVar12 + -8) = 0x1800fd56c;
          FUN_1800f4190(puVar15);
          *(undefined2 *)(puVar15 + 0x7308) = 0x101;
          puVar15[0x730a] = 1;
          *(undefined8 *)(puVar12 + -8) = 0x1800fd591;
          FUN_180540530(&DAT_18091a190,puVar15,0x46ca4);
          *(undefined8 *)(puVar12 + -8) = 0x1800fd596;
          FUN_1801c64f0();
          if (param_1 != &DAT_1809ec0a0) {
            if ((ulonglong)param_1[3] < 0x10) {
              puVar11 = param_1;
            }
            else {
              puVar11 = (undefined8 *)*param_1;
            }
            uVar9 = param_1[2];
            *(undefined8 *)(puVar12 + -8) = 0x1800fd5ba;
            FUN_180029840(&DAT_1809ec0a0,puVar11,uVar9);
          }
          uVar9 = 1;
        }
        if (puVar15 != (undefined1 *)0x0) {
          *(undefined8 *)(puVar12 + -8) = 0x1800fd5ce;
          thunk_FUN_1803d64e0(puVar15,0x46ca4);
        }
      }
      if (0xf < local_140) {
        uVar21 = local_140 + 1;
        puVar11 = local_158;
        if (0xfff < uVar21) {
          puVar11 = (undefined8 *)local_158[-1];
          if (0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)puVar11))) {
            pcVar1 = (code *)swi(0x29);
            DAT_1809e9c6c = (*pcVar1)(5);
            puVar23 = puVar12 + 8;
LAB_1800fd673:
            DAT_1809e9c6c = DAT_1809e9c6c + -1;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar23 + -8) = &UNK_1800fd685;
            FUN_1804e4a90(6);
          }
          uVar21 = local_140 + 0x28;
        }
        *(undefined8 *)(puVar12 + -8) = 0x1800fd609;
        thunk_FUN_1803d64e0(puVar11,uVar21);
      }
      *(undefined8 *)(puVar12 + -8) = 0x1800fd616;
      FUN_1801a6920(&uStack_90);
      *(undefined8 *)(puVar12 + -8) = 0x1800fd622;
      FUN_1801a69c0(&local_a8);
      *(undefined8 *)(puVar12 + -8) = 0x1800fd62e;
      FUN_18000f890(&local_c8);
    }
    else {
      ppppuVar10 = local_118;
      if (0xf < local_100) {
        ppppuVar10 = local_118[0];
      }
      lVar16 = 0;
      do {
        lVar17 = lVar16 + 1;
        if (*(byte *)((longlong)ppppuVar10 + lVar16) != (&DAT_18059c3f8)[lVar16]) {
          uVar7 = -(uint)(*(byte *)((longlong)ppppuVar10 + lVar16) < (byte)(&DAT_18059c3f8)[lVar16])
                  | 1;
          goto LAB_1800fd12e;
        }
        lVar16 = lVar17;
      } while (lVar17 != 4);
      uVar7 = 0;
LAB_1800fd12e:
      puVar12 = auStack_2b8;
      if (uVar7 != 0) goto LAB_1800fd449;
      if (local_108 < &DAT_0000000c) {
LAB_1800fd204:
        uVar9 = 0;
      }
      else {
        ppppuVar10 = local_118;
        if (0xf < local_100) {
          ppppuVar10 = local_118[0];
        }
        if (((*(int *)((longlong)ppppuVar10 + 4) != 1) || (*(int *)(ppppuVar10 + 1) != 0x46ca4)) ||
           (local_108 < (undefined8 **)0x46cb0)) goto LAB_1800fd204;
        puVar11 = (undefined8 *)FUN_1804ecaa0(0x46ca4);
        local_158 = puVar11;
        FUN_180540170(puVar11,0,0x46ca4);
        puVar12 = (undefined1 *)FUN_180142610(puVar11);
        ppppuVar10 = local_118;
        if (0xf < local_100) {
          ppppuVar10 = local_118[0];
        }
        FUN_180540530(puVar12,(longlong)ppppuVar10 + 0xc,0x46ca4);
        *puVar12 = DAT_18091a190;
        FUN_1800f4190(puVar12);
        ppuVar25 = (undefined8 **)0x46ca4;
        FUN_180540530(&DAT_18091a190,puVar12);
        FUN_1801c64f0();
        thunk_FUN_1803d64e0(puVar12,0x46ca4);
        uVar9 = 1;
      }
      puVar12 = auStack_2b8;
      if ((char)uVar9 == '\0') {
        local_f8 = (char *)0x0;
        uStack_f0 = 0;
        pcVar13 = (char *)FUN_18000fb70(0x40);
        uVar2 = s_This_config_is_not_compatible_wi_1806f38d0._8_8_;
        local_e8 = 0x3f;
        local_e0 = 0x3f;
        *(undefined8 *)pcVar13 = s_This_config_is_not_compatible_wi_1806f38d0._0_8_;
        *(undefined8 *)(pcVar13 + 8) = uVar2;
        uVar2 = s_This_config_is_not_compatible_wi_1806f38d0._24_8_;
        *(undefined8 *)(pcVar13 + 0x10) = s_This_config_is_not_compatible_wi_1806f38d0._16_8_;
        *(undefined8 *)(pcVar13 + 0x18) = uVar2;
        uVar2 = CONCAT17(s_This_config_is_not_compatible_wi_1806f38d0[0x2f],
                         s_This_config_is_not_compatible_wi_1806f38d0._40_7_);
        *(undefined8 *)(pcVar13 + 0x20) = s_This_config_is_not_compatible_wi_1806f38d0._32_8_;
        *(undefined8 *)(pcVar13 + 0x28) = uVar2;
        uVar5 = ram0x0001806f390b;
        uVar4 = s_This_config_is_not_compatible_wi_1806f38d0._55_4_;
        uVar3 = s_This_config_is_not_compatible_wi_1806f38d0._51_4_;
        *(undefined4 *)(pcVar13 + 0x2f) = s_This_config_is_not_compatible_wi_1806f38d0._47_4_;
        *(undefined4 *)(pcVar13 + 0x33) = uVar3;
        *(undefined4 *)(pcVar13 + 0x37) = uVar4;
        *(undefined4 *)(pcVar13 + 0x3b) = uVar5;
        pcVar13[0x3f] = '\0';
        uStack_130 = 0;
        local_128 = 7;
        local_120 = 0xf;
        local_138 = (ulonglong)
                    CONCAT16(s_PRESETS_1806ea3f0[6],
                             CONCAT24(s_PRESETS_1806ea3f0._4_2_,s_PRESETS_1806ea3f0._0_4_));
        local_288 = &DAT_1809e9c20;
        local_f8 = pcVar13;
        iVar8 = FUN_1804e4d70(&DAT_1809e9c20);
        puVar23 = auStack_2b8;
        if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(5);
        }
        if (DAT_1809e9c6c == 0x7fffffff) goto LAB_1800fd673;
        FUN_1800b56a0(&local_158,1);
        puVar11 = local_158;
        *(undefined4 *)((longlong)local_158 + 4) = 1;
        uVar20 = 0xf;
        if (local_158 + 1 != &local_138) {
          ppuVar25 = (undefined8 **)&DAT_00000007;
          FUN_180029840(local_158 + 1,&local_138);
          uVar20 = local_120;
        }
        uVar27 = 0x3f;
        if ((char **)(puVar11 + 5) != &local_f8) {
          ppuVar25 = (undefined8 **)0x3f;
          FUN_180029840(puVar11 + 5,pcVar13);
          pcVar13 = local_f8;
          uVar27 = local_e0;
        }
        UVar14 = GetTickCount64();
        puVar11[9] = UVar14;
        if (DAT_180cd0390 == DAT_180cd0398) {
          ppuVar25 = &local_158;
          FUN_1800b7a10();
          param_1 = local_158;
        }
        else {
          *DAT_180cd0390 = puVar11;
          DAT_180cd0390 = DAT_180cd0390 + 1;
          param_1 = (undefined8 *)0x0;
        }
        LOCK();
        DAT_180ca1c6f = 1;
        UNLOCK();
        if (param_1 != (undefined8 *)0x0) {
          FUN_18000f890(param_1 + 5);
          FUN_18000f890(param_1 + 1);
          thunk_FUN_1803d64e0(param_1,0xe0);
        }
        FUN_1804e4e90(&DAT_1809e9c20);
        if (0xf < uVar20) {
          uVar19 = uVar20 + 1;
          uVar18 = local_138;
          if (uVar19 < 0x1000) {
LAB_1800fd3f9:
            thunk_FUN_1803d64e0(uVar18,uVar19);
            goto LAB_1800fd3ff;
          }
          uVar18 = *(ulonglong *)(local_138 - 8);
          if ((local_138 - uVar18) - 8 < 0x20) {
            uVar19 = uVar20 + 0x28;
            goto LAB_1800fd3f9;
          }
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar22 = auStack_2b0;
LAB_1800fd442:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar12 = puVar22 + 8;
          goto LAB_1800fd449;
        }
LAB_1800fd3ff:
        puVar12 = auStack_2b8;
        puVar22 = auStack_2b8;
        if (0xf < uVar27) {
          uVar20 = uVar27 + 1;
          pcVar24 = pcVar13;
          if (0xfff < uVar20) {
            pcVar24 = *(char **)(pcVar13 + -8);
            if ((char *)0x1f < pcVar13 + (-8 - (longlong)pcVar24)) goto LAB_1800fd442;
            uVar20 = uVar27 + 0x28;
          }
          thunk_FUN_1803d64e0(pcVar24,uVar20);
          puVar12 = auStack_2b8;
        }
      }
    }
    *(undefined8 *)(puVar12 + -8) = 0x1800fd63b;
    FUN_18000f890(local_118);
  }
  *(undefined8 *)(puVar12 + -8) = 0x1800fd646;
  FUN_18005e2f0(puVar12 + 0x50);
LAB_1800fd649:
  *(undefined8 *)(puVar12 + -8) = 0x1800fd658;
  return uVar9;
}



/* ===== 1800fd6a0 FUN_1800fd6a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800fd6a0(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  char *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_68;
  local_38 = (char *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_40 = param_1;
  local_38 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_C__neverlose_configs_1811bd063._12_4_;
  uVar3 = s_C__neverlose_configs_1811bd063._8_4_;
  uVar2 = s_C__neverlose_configs_1811bd063._4_4_;
  local_28 = 0x14;
  local_20 = 0x1f;
  *(undefined4 *)local_38 = s_C__neverlose_configs_1811bd063._0_4_;
  *(undefined4 *)(local_38 + 4) = uVar2;
  *(undefined4 *)(local_38 + 8) = uVar3;
  *(undefined4 *)(local_38 + 0xc) = uVar4;
  *(undefined4 *)(local_38 + 0x10) = s_C__neverlose_configs_1811bd063._16_4_;
  local_38[0x14] = '\0';
  puVar5 = (undefined4 *)FUN_1800134a0(&local_38,"\\deleted",8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *(undefined4 *)param_1 = *puVar5;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar2 = puVar5[5];
  uVar3 = puVar5[6];
  uVar4 = puVar5[7];
  *(undefined4 *)(param_1 + 2) = puVar5[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0xf;
  *(undefined1 *)puVar5 = 0;
  if (0xf < local_20) {
    uVar8 = local_20 + 1;
    pcVar7 = local_38;
    if (0xfff < uVar8) {
      pcVar7 = *(char **)(local_38 + -8);
      if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar7)) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar6 = (undefined8 *)(*pcVar1)();
        return puVar6;
      }
      uVar8 = local_20 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar8);
  }
  return param_1;
}



/* ===== 1800fd7b0 FUN_1800fd7b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800fd7b0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_a8;
  local_80 = param_1;
  uVar5 = FUN_1800fd6a0(local_38);
  puVar6 = (ulonglong *)FUN_1800134a0(uVar5,&DAT_1806e067c,1);
  local_78 = *puVar6;
  uStack_70 = puVar6[1];
  local_68 = puVar6[2];
  uStack_60 = puVar6[3];
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  *(undefined1 *)puVar6 = 0;
  uVar5 = FUN_1800667a0(local_58,&local_78,param_2);
  puVar7 = (undefined4 *)FUN_1800134a0(uVar5,&DAT_1806f2aa0,4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *(undefined4 *)param_1 = *puVar7;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar2 = puVar7[5];
  uVar3 = puVar7[6];
  uVar4 = puVar7[7];
  *(undefined4 *)(param_1 + 2) = puVar7[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0xf;
  *(undefined1 *)puVar7 = 0;
  FUN_18000f890(local_58);
  if (0xf < uStack_60) {
    uVar10 = uStack_60 + 1;
    uVar9 = local_78;
    if (0xfff < uVar10) {
      uVar9 = *(ulonglong *)(local_78 - 8);
      if (0x1f < (local_78 - uVar9) - 8) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar8 = (undefined8 *)(*pcVar1)();
        return puVar8;
      }
      uVar10 = uStack_60 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar9,uVar10);
  }
  local_68 = 0;
  uStack_60 = 0xf;
  local_78 = local_78 & 0xffffffffffffff00;
  FUN_18000f890(local_38);
  return param_1;
}



/* ===== 1800fd920 FUN_1800fd920 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800fd920(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int extraout_var;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_88 [32];
  undefined8 ****local_68 [3];
  ulonglong local_50;
  undefined8 ****local_48 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_88;
  FUN_180066c10(local_68);
  FUN_180066c10(local_48,param_1);
  ppppuVar3 = local_68;
  if (7 < local_50) {
    ppppuVar3 = local_68[0];
  }
  ppppuVar2 = local_48;
  if (7 < local_30) {
    ppppuVar2 = local_48[0];
  }
  iVar1 = FUN_1804e5f20(ppppuVar2,ppppuVar3);
  FUN_1800289e0(local_48);
  FUN_1800289e0(local_68);
  if (iVar1 != 0) {
    FUN_180066c10(local_48,param_2);
    FUN_180066c10(local_68,param_1);
    ppppuVar3 = local_48;
    if (7 < local_30) {
      ppppuVar3 = local_48[0];
    }
    ppppuVar2 = local_68;
    if (7 < local_50) {
      ppppuVar2 = local_68[0];
    }
    FUN_1804e5250(ppppuVar2,ppppuVar3,2);
    FUN_1800289e0(local_68);
    FUN_1800289e0(local_48);
    if (extraout_var != 0) {
      return 0;
    }
    FUN_180066c10(local_68,param_1);
    ppppuVar3 = local_68;
    if (7 < local_50) {
      ppppuVar3 = local_68[0];
    }
    FUN_1804e5bf0(ppppuVar3);
    FUN_1800289e0(local_68);
  }
  return 1;
}



/* ===== 1800fda40 FUN_1800fda40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1800fda40(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  size_t ******ppppppsVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *_Buf1;
  size_t ******ppppppsVar14;
  size_t ******ppppppsVar15;
  char cVar16;
  size_t ******ppppppsVar17;
  size_t ******ppppppsVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  uint uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStack_288 [8];
  undefined1 auStack_280 [24];
  uint local_268;
  size_t ******local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  size_t ******local_248;
  undefined8 uStack_240;
  size_t ******local_238;
  longlong *local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong *local_218;
  size_t ******local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  ulonglong local_1f8;
  int local_1f0;
  size_t ******local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  longlong *local_1b8;
  size_t ******local_1b0;
  size_t ******local_1a8;
  size_t *****local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  size_t ******local_188;
  size_t *****local_180;
  longlong *local_178;
  undefined1 local_170;
  undefined7 uStack_16f;
  size_t ******local_168;
  size_t ******local_160;
  ulonglong local_158;
  size_t ******local_150;
  size_t ******ppppppsStack_148;
  size_t ******local_140;
  ulonglong local_138;
  size_t ******local_128;
  size_t ******ppppppsStack_120;
  size_t ******local_118;
  ulonglong local_110;
  undefined8 local_108;
  longlong lStack_100;
  char local_f8;
  longlong local_f0;
  undefined1 local_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong lStack_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_288;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_268 = 1;
  local_258 = local_258 & 0xffffffff00000000;
  uStack_250 = &PTR_vftable_18091a158;
  local_218 = param_1;
  local_178 = param_1;
  lVar8 = FUN_180512a60(0);
  local_238 = (size_t ******)0x1811bd063;
  local_230 = (longlong *)&DAT_00000014;
  local_1c8 = lVar8;
  uVar6 = FUN_1804e5000();
  FUN_180013d60(&local_170,uVar6,&local_238);
  uVar22 = 0x600001;
  local_268 = 0x600001;
  piVar9 = (int *)FUN_180016ab0(&local_260,&local_170,&local_258);
  iVar7 = *piVar9;
  FUN_1800289e0(&local_170);
  if (iVar7 == 3) {
    local_238 = (size_t ******)0x1811bd063;
    local_230 = (longlong *)&DAT_00000014;
    uVar6 = FUN_1804e5000();
    FUN_180013d60(&local_170,uVar6,&local_238);
    uVar22 = 0x6600001;
    local_268 = 0x6600001;
    FUN_18004e860(&local_208,&local_170,&local_258);
    FUN_1800289e0(&local_170);
    if (CONCAT44(uStack_1fc,uStack_200) != 0) {
      LOCK();
      piVar9 = (int *)(CONCAT44(uStack_1fc,uStack_200) + 8);
      *piVar9 = *piVar9 + 1;
      UNLOCK();
    }
    FUN_18004eae0(&local_228,&local_248);
    if (CONCAT44(uStack_1fc,uStack_200) != 0) {
      LOCK();
      piVar9 = (int *)(CONCAT44(uStack_1fc,uStack_200) + 8);
      *piVar9 = *piVar9 + 1;
      UNLOCK();
    }
    local_248 = local_208;
    uStack_240 = (longlong *)CONCAT44(uStack_1fc,uStack_200);
    FUN_18004ebc0(&local_1e8,&local_248);
    ppppppsVar15 = (size_t ******)CONCAT44(uStack_224,local_228);
    if (ppppppsVar15 != local_1e8) {
      do {
        FUN_180015fc0(ppppppsVar15,&local_1f8,3);
        if ((local_1f0 != 0) && (((int)local_1f8 - 1U & 0xfffffff7) != 0)) goto LAB_1800fe655;
        if ((int)local_1f8 == 2) {
          local_238 = (size_t ******)&DAT_1806f2aa0;
          local_230 = (longlong *)&DAT_00000004;
          uVar6 = FUN_1804e5000();
          FUN_180013d60(&local_170,uVar6,&local_238);
          local_268 = uVar22 | 0x30002;
          uVar10 = FUN_180099dd0(ppppppsVar15 + 4,local_e8);
          uVar22 = uVar22 | 0x30006;
          local_1d8 = (longlong *)&local_170;
          if (7 < local_158) {
            local_1d8 = (longlong *)CONCAT71(uStack_16f,local_170);
          }
          uStack_1d0 = local_160;
          local_268 = uVar22;
          iVar7 = FUN_180014140(uVar10,&local_1d8);
          if (iVar7 != 0) goto LAB_1800fdcaf;
          bVar25 = false;
        }
        else {
LAB_1800fdcaf:
          bVar25 = true;
        }
        ppppppsVar18 = ppppppsVar15 + 4;
        if ((uVar22 & 4) != 0) {
          uVar22 = uVar22 & 0xfffffffb;
          local_268 = uVar22;
          FUN_1800289e0(local_e8);
        }
        if ((uVar22 & 2) != 0) {
          uVar22 = uVar22 & 0xfffffffd;
          local_268 = uVar22;
          FUN_1800289e0(&local_170);
        }
        if (!bVar25) {
          ppppppsStack_120 = (size_t ******)0x0;
          local_118 = (size_t ******)0x0;
          local_110 = 0xf;
          local_128 = (size_t ******)0x0;
          local_108 = 0;
          lStack_100 = 0;
          local_f8 = 0;
          local_f0 = 0;
          plVar11 = (longlong *)FUN_180099cd0(ppppppsVar18,local_e8);
          if ((ulonglong)plVar11[3] < 8) {
            local_1b8 = plVar11;
          }
          else {
            local_1b8 = (longlong *)*plVar11;
          }
          local_1b0 = (size_t ******)plVar11[2];
          FUN_180024c20(&local_150,&local_1b8);
          uVar3 = local_138;
          ppppppsVar4 = local_140;
          ppppppsVar14 = ppppppsStack_148;
          ppppppsVar17 = local_150;
          local_268 = uVar22 | 0xc000;
          local_128 = local_150;
          ppppppsStack_120 = ppppppsStack_148;
          local_118 = local_140;
          local_110 = local_138;
          local_140 = (size_t ******)0x0;
          local_138 = 0xf;
          local_150 = (size_t ******)((ulonglong)local_150 & 0xffffffffffffff00);
          FUN_18000f890(&local_150);
          FUN_1800289e0(local_e8);
          if ((size_t *****)0x7 < ppppppsVar15[7]) {
            ppppppsVar18 = (size_t ******)*ppppppsVar18;
          }
          local_1a0 = ppppppsVar15[6];
          local_1a8 = ppppppsVar18;
          FUN_180024c20(&local_150,&local_1a8);
          local_268 = uVar22 | 0x18c000;
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          lStack_a0 = 0;
          local_98 = 0;
          uVar10 = FUN_180066c10(local_e8,&local_150);
          FUN_180024980(&local_170,uVar10);
          uVar22 = uVar22 | 0x1cc000;
          local_268 = uVar22;
          FUN_1800289e0(local_e8);
          plVar11 = (longlong *)&local_170;
          if (7 < local_158) {
            plVar11 = (longlong *)CONCAT71(uStack_16f,local_170);
          }
          iVar7 = thunk_FUN_180515f90(plVar11,&local_c8);
          uVar10 = local_98;
          lVar8 = lStack_a0;
          if (iVar7 == 0) {
            local_108 = local_98;
            lStack_100 = lStack_a0;
            FUN_1800289e0(&local_170);
          }
          else {
            FUN_1800289e0(&local_170);
            lVar8 = lStack_100;
            uVar10 = local_108;
          }
          FUN_18000f890(&local_150);
          param_1 = local_218;
          puVar12 = (undefined8 *)local_218[1];
          if (puVar12 == (undefined8 *)local_218[2]) {
            FUN_1801c2160(local_218,puVar12,&local_128);
          }
          else {
            *puVar12 = ppppppsVar17;
            puVar12[1] = ppppppsVar14;
            puVar12[2] = ppppppsVar4;
            puVar12[3] = uVar3;
            local_118 = (size_t ******)0x0;
            local_110 = 0xf;
            local_128 = (size_t ******)((ulonglong)local_128 & 0xffffffffffffff00);
            puVar12[4] = uVar10;
            puVar12[5] = lVar8;
            *(undefined1 *)(puVar12 + 6) = 0;
            puVar12[7] = 0;
            local_218[1] = local_218[1] + 0x40;
          }
          FUN_18000f890(&local_128);
        }
        FUN_18004e9d0(&local_228);
        ppppppsVar15 = (size_t ******)CONCAT44(uStack_224,local_228);
      } while (ppppppsVar15 != local_1e8);
      lVar8 = local_1c8;
    }
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_1e0 + 1;
      lVar24 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar24 == 1) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar9 = (int *)((longlong)local_1e0 + 0xc);
        iVar7 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_1e0 + 8))(local_1e0);
        }
      }
    }
    plVar11 = (longlong *)CONCAT44(uStack_21c,uStack_220);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar11 + 1;
      lVar24 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar24 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar9 = (int *)((longlong)plVar11 + 0xc);
        iVar7 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
    }
    plVar11 = (longlong *)CONCAT44(uStack_1fc,uStack_200);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar11 + 1;
      lVar24 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar24 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar9 = (int *)((longlong)plVar11 + 0xc);
        iVar7 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
    }
  }
  puVar19 = auStack_288;
  puVar20 = auStack_288;
  local_258 = local_258 & 0xffffffff00000000;
  uStack_250 = &PTR_vftable_18091a158;
  uVar10 = FUN_1800fd6a0(local_e8);
  FUN_180066c10(&local_170,uVar10);
  piVar9 = (int *)FUN_180016ab0(&local_260,&local_170,&local_258);
  iVar7 = *piVar9;
  FUN_1800289e0(&local_170);
  FUN_18000f890(local_e8);
  puVar21 = auStack_288;
  if (iVar7 != 3) goto LAB_1800fe625;
  local_150 = (size_t ******)0x0;
  ppppppsStack_148 = (size_t ******)0x0;
  local_140 = (size_t ******)0x0;
  uVar10 = FUN_1800fd6a0(local_e8);
  FUN_180066c10(&local_170,uVar10);
  FUN_18004e860(&local_228,&local_170,&local_258);
  FUN_1800289e0(&local_170);
  FUN_18000f890(local_e8);
  if (CONCAT44(uStack_21c,uStack_220) != 0) {
    LOCK();
    piVar9 = (int *)(CONCAT44(uStack_21c,uStack_220) + 8);
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  local_258 = CONCAT44(uStack_224,local_228);
  uStack_250 = (undefined **)CONCAT44(uStack_21c,uStack_220);
  FUN_18004eae0(&local_248,&local_258);
  if (CONCAT44(uStack_21c,uStack_220) != 0) {
    LOCK();
    piVar9 = (int *)(CONCAT44(uStack_21c,uStack_220) + 8);
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  local_1d8 = (longlong *)CONCAT44(uStack_224,local_228);
  uStack_1d0 = (size_t ******)CONCAT44(uStack_21c,uStack_220);
  FUN_18004ebc0(&local_238,&local_1d8);
  if (local_248 != local_238) {
    do {
      ppppppsVar15 = local_248;
      FUN_180015fc0(local_248,&local_258,3);
      if (((int)uStack_250 != 0) && (uVar13 = (int)local_258 - 1, (uVar13 & 0xfffffff7) != 0)) {
        FUN_1800ef200(uVar13,(ulonglong)uStack_250 & 0xffffffff,ppppppsVar15 + 4);
LAB_1800fe655:
        FUN_1800ef200();
        pcVar2 = (code *)swi(3);
        plVar11 = (longlong *)(*pcVar2)();
        return plVar11;
      }
      if ((int)local_258 == 2) {
        local_1a8 = (size_t ******)&DAT_1806f2aa0;
        local_1a0 = (size_t *****)0x4;
        uVar6 = FUN_1804e5000();
        FUN_180013d60(&local_170,uVar6,&local_1a8);
        local_268 = uVar22 | 0xc08;
        uVar10 = FUN_180099dd0(ppppppsVar15 + 4,local_e8);
        uVar22 = uVar22 | 0xc18;
        local_1b8 = (longlong *)&local_170;
        if (7 < local_158) {
          local_1b8 = (longlong *)CONCAT71(uStack_16f,local_170);
        }
        local_1b0 = local_160;
        local_268 = uVar22;
        iVar7 = FUN_180014140(uVar10,&local_1b8);
        if (iVar7 != 0) goto LAB_1800fe1a8;
        cVar16 = '\0';
      }
      else {
LAB_1800fe1a8:
        cVar16 = '\x01';
      }
      if ((uVar22 & 0x10) != 0) {
        uVar22 = uVar22 & 0xffffffef;
        local_268 = uVar22;
        FUN_1800289e0(local_e8);
      }
      if ((uVar22 & 8) != 0) {
        uVar22 = uVar22 & 0xfffffff7;
        local_268 = uVar22;
        FUN_1800289e0(&local_170);
      }
      if (cVar16 == '\0') {
        ppppppsStack_120 = (size_t ******)0x0;
        local_118 = (size_t ******)0x0;
        local_110 = 0xf;
        local_128 = (size_t ******)0x0;
        local_108 = 0;
        lStack_100 = 0;
        local_f0 = 0;
        ppppppsVar18 = ppppppsVar15 + 4;
        local_f8 = cVar16;
        puVar12 = (undefined8 *)FUN_180099cd0(ppppppsVar18,local_e8);
        if ((ulonglong)puVar12[3] < 8) {
          local_198 = puVar12;
        }
        else {
          local_198 = (undefined8 *)*puVar12;
        }
        local_190 = puVar12[2];
        FUN_180024c20(&local_170,&local_198);
        ppppppsVar17 = local_168;
        local_268 = uVar22 | 0x300;
        local_1e8 = (size_t ******)CONCAT71(uStack_16f,local_170);
        local_260 = local_168;
        ppppppsStack_120 = local_168;
        local_208 = local_160;
        local_118 = local_160;
        local_1f8 = local_158;
        local_110 = local_158;
        local_160 = (size_t ******)0x0;
        local_158 = 0xf;
        local_170 = 0;
        local_128 = local_1e8;
        FUN_18000f890(&local_170);
        FUN_1800289e0(local_e8);
        local_f8 = 1;
        if ((size_t *****)0x7 < ppppppsVar15[7]) {
          ppppppsVar18 = (size_t ******)*ppppppsVar18;
        }
        local_180 = ppppppsVar15[6];
        local_188 = ppppppsVar18;
        FUN_180024c20(local_e8,&local_188);
        local_268 = uVar22 | 0x3c0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        lStack_68 = 0;
        local_60 = 0;
        uVar10 = FUN_180066c10(&local_c8,local_e8);
        FUN_180024980(&local_170,uVar10);
        uVar22 = uVar22 | 0x3e0;
        local_268 = uVar22;
        FUN_1800289e0(&local_c8);
        plVar11 = (longlong *)&local_170;
        if (7 < local_158) {
          plVar11 = (longlong *)CONCAT71(uStack_16f,local_170);
        }
        iVar7 = thunk_FUN_180515f90(plVar11,&local_90);
        lVar24 = 0;
        if (iVar7 == 0) {
          local_108 = local_60;
          local_f0 = lStack_68;
          lVar24 = lStack_68;
        }
        FUN_1800289e0(&local_170);
        FUN_18000f890(local_e8);
        ppppppsVar14 = local_1e8;
        uVar3 = local_1f8;
        ppppppsVar18 = local_208;
        lStack_100 = lVar24;
        if (lVar8 - lVar24 < 0x93a81) {
          bVar25 = false;
          puVar12 = (undefined8 *)param_1[1];
          puVar23 = (undefined8 *)*param_1;
          if (puVar23 != puVar12) {
            do {
              if (*(char *)(puVar23 + 6) == '\0') {
                ppppppsVar15 = (size_t ******)&local_128;
                if (0xf < uVar3) {
                  ppppppsVar15 = ppppppsVar14;
                }
                ppppppsVar17 = (size_t ******)puVar23[2];
                if ((ulonglong)puVar23[3] < 0x10) {
                  _Buf1 = puVar23;
                }
                else {
                  _Buf1 = (undefined8 *)*puVar23;
                }
                if ((ppppppsVar17 != ppppppsVar18) ||
                   ((ppppppsVar17 != (size_t ******)0x0 &&
                    (iVar7 = memcmp(_Buf1,ppppppsVar15,(size_t)ppppppsVar17), iVar7 != 0))))
                goto LAB_1800fe44c;
                bVar5 = 1;
              }
              else {
LAB_1800fe44c:
                bVar5 = 0;
              }
              bVar25 = (bool)(bVar25 | bVar5);
              puVar23 = puVar23 + 8;
            } while (puVar23 != puVar12);
            ppppppsVar17 = local_260;
            lVar24 = local_f0;
            param_1 = local_218;
            if (bVar25) goto LAB_1800fe4d4;
          }
          puVar12 = (undefined8 *)param_1[1];
          if (puVar12 == (undefined8 *)param_1[2]) {
            FUN_1801c2160(param_1,puVar12,&local_128);
          }
          else {
            *puVar12 = local_1e8;
            puVar12[1] = ppppppsVar17;
            puVar12[2] = local_208;
            puVar12[3] = local_1f8;
            local_118 = (size_t ******)0x0;
            local_110 = 0xf;
            local_128 = (size_t ******)((ulonglong)local_128 & 0xffffffffffffff00);
            puVar12[4] = local_108;
            puVar12[5] = lVar24;
            *(undefined1 *)(puVar12 + 6) = 1;
            puVar12[7] = lVar24;
            param_1[1] = param_1[1] + 0x40;
          }
        }
        else if (ppppppsStack_148 == local_140) {
          FUN_1801c1cc0(&local_150,ppppppsStack_148);
        }
        else {
          FUN_180024980(ppppppsStack_148,ppppppsVar15 + 4);
          ppppppsStack_148 = ppppppsStack_148 + 4;
        }
LAB_1800fe4d4:
        FUN_18000f890(&local_128);
      }
      FUN_18004e9d0(&local_248);
      if (local_248 == local_238) break;
      lVar8 = local_1c8;
    } while( true );
  }
  plVar11 = local_230;
  if (local_230 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_230 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_230)(local_230);
      LOCK();
      piVar9 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
  if (uStack_240 != (longlong *)0x0) {
    LOCK();
    plVar11 = uStack_240 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_240)(uStack_240);
      LOCK();
      piVar9 = (int *)((longlong)uStack_240 + 0xc);
      iVar7 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*uStack_240 + 8))(uStack_240);
      }
    }
  }
  plVar11 = (longlong *)CONCAT44(uStack_21c,uStack_220);
  ppppppsVar15 = local_150;
  ppppppsVar18 = ppppppsStack_148;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar9 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      ppppppsVar15 = local_150;
      ppppppsVar18 = ppppppsStack_148;
      if (iVar7 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11);
        ppppppsVar15 = local_150;
        ppppppsVar18 = ppppppsStack_148;
      }
    }
  }
  for (; ppppppsVar17 = ppppppsStack_148, ppppppsVar15 != ppppppsStack_148;
      ppppppsVar15 = ppppppsVar15 + 4) {
    if (ppppppsVar15[3] < (size_t *****)0x8) {
      ppppppsVar14 = ppppppsVar15;
    }
    else {
      ppppppsVar14 = (size_t ******)*ppppppsVar15;
    }
    ppppppsStack_148 = ppppppsVar18;
    FUN_1804e5bf0(ppppppsVar14);
    ppppppsVar18 = ppppppsStack_148;
    ppppppsStack_148 = ppppppsVar17;
  }
  puVar21 = auStack_288;
  ppppppsVar15 = local_150;
  ppppppsStack_148 = ppppppsVar18;
  if (local_150 == (size_t ******)0x0) goto LAB_1800fe625;
  for (; ppppppsVar15 != ppppppsVar18; ppppppsVar15 = ppppppsVar15 + 4) {
    FUN_1800289e0(ppppppsVar15);
  }
  ppppppsVar15 = local_150;
  if (((longlong)local_140 - (longlong)local_150 & 0xffffffffffffffe0U) < 0x1000) {
LAB_1800fe61d:
    puVar20 = puVar19;
  }
  else {
    ppppppsVar15 = (size_t ******)local_150[-1];
    ppppppsVar18 = (size_t ******)((longlong)local_150 + (-8 - (longlong)ppppppsVar15));
    if (&DAT_0000001f < ppppppsVar18) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar19 = auStack_280;
      ppppppsVar15 = ppppppsVar18;
      goto LAB_1800fe61d;
    }
  }
  *(undefined8 *)(puVar20 + -8) = 0x1800fe625;
  thunk_FUN_1803d64e0(ppppppsVar15);
  puVar21 = puVar20;
LAB_1800fe625:
  *(undefined8 *)(puVar21 + -8) = 0x1800fe637;
  return param_1;
}



/* ===== 1800fe660 FUN_1800fe660 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800fe660(undefined8 *param_1,undefined8 *param_2)

{
  size_t _Size;
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined **local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_88;
  cVar1 = FUN_1800f24d0();
  if ((cVar1 != '\0') && (cVar1 = FUN_1800f24d0(param_2), cVar1 != '\0')) {
    if ((ulonglong)param_2[3] < 0x10) {
      puVar7 = param_2;
    }
    else {
      puVar7 = (undefined8 *)*param_2;
    }
    _Size = param_1[2];
    puVar6 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar6 = (undefined8 *)*param_1;
    }
    if (_Size == param_2[2]) {
      if (_Size == 0) {
        return 1;
      }
      iVar2 = memcmp(puVar6,puVar7,_Size);
      if (iVar2 == 0) {
        return 1;
      }
    }
    local_68[0] = 0;
    local_60 = &PTR_vftable_18091a158;
    uVar3 = FUN_1800f25e0(local_30,param_2);
    FUN_180066c10(local_50,uVar3);
    piVar4 = (int *)FUN_180016ab0(local_58,local_50,local_68);
    iVar2 = *piVar4;
    FUN_1800289e0(local_50);
    FUN_18000f890(local_30);
    if ((iVar2 == 0) || (iVar2 == 1)) {
      uVar3 = FUN_1800f25e0(local_50,param_2);
      uVar5 = FUN_1800f25e0(local_30,param_1);
      cVar1 = FUN_1800fd920(uVar5,uVar3);
      FUN_18000f890(local_30);
      FUN_18000f890(local_50);
      if (cVar1 != '\0') {
        if ((ulonglong)param_1[3] < 0x10) {
          puVar7 = param_1;
        }
        else {
          puVar7 = (undefined8 *)*param_1;
        }
        puVar6 = &DAT_1809ec0a0;
        if (0xf < DAT_1809ec0b8) {
          puVar6 = DAT_1809ec0a0;
        }
        if (DAT_1809ec0b0 == param_1[2]) {
          if ((DAT_1809ec0b0 != 0) && (iVar2 = memcmp(puVar6,puVar7,DAT_1809ec0b0), iVar2 != 0)) {
            return 1;
          }
          if ((undefined8 **)param_2 != &DAT_1809ec0a0) {
            if (0xf < (ulonglong)param_2[3]) {
              FUN_180029840(&DAT_1809ec0a0,*param_2,param_2[2]);
              return 1;
            }
            FUN_180029840(&DAT_1809ec0a0,param_2,param_2[2]);
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



