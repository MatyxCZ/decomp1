/* ===== 180311a40 FUN_180311a40 ===== */

float FUN_180311a40(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  int local_res10 [2];
  undefined8 local_res20;
  float local_68 [4];
  longlong local_58 [2];
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  lVar2 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar1 = *param_2;
  lVar2 = *(longlong *)(lVar2 + 0x14f8);
  *(undefined8 *)(lVar2 + 0x118) = uVar1;
  *(undefined1 *)(lVar2 + 0x159) = 1;
  uVar3 = FUN_180415e30(uVar1,param_3,0);
  *param_4 = uVar3;
  cVar4 = FUN_1803dd930(0);
  local_res10[0] = *(int *)(DAT_180ca0a50 + 0x1ee8);
  if ((*(int *)(DAT_180ca0a50 + 0x1578) == 0) ||
     (*(int *)(DAT_180ca0a50 + 0x1578) != local_res10[0])) {
    if (cVar4 == '\0') {
      fVar7 = 0.0;
    }
    else {
      fVar7 = DAT_1808ac1f4;
    }
  }
  else {
    fVar7 = DAT_1808ac34c;
  }
  local_3c = 0;
  local_38 = 0xffffffff;
  local_48 = fVar7;
  local_44 = fVar7;
  local_40 = fVar7;
  FUN_18034a380(local_res10[0],local_58,local_res10,&local_48);
  fVar7 = (float)FUN_1802b3660(local_58[0] + 0x14,fVar7,DAT_1808ac118,0);
  lVar2 = DAT_180ca0a50;
  if (0.0 < fVar7) {
    local_68[2] = 1.0;
    local_68[0] = 0.0;
    local_68[1] = fVar7 * DAT_1808ac1b0 * DAT_1808ac2cc;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    local_res20 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) +
                           (float)((ulonglong)*param_3 >> 0x20),(float)*param_2 + (float)*param_3);
    pfVar6 = local_68;
    if (0.0 <= local_68[1]) {
      pfVar6 = local_68 + 1;
    }
    pfVar5 = local_68 + 2;
    if (local_68[1] <= DAT_1808ac34c) {
      pfVar5 = pfVar6;
    }
    FUN_1803fe590(*(undefined8 *)(*(longlong *)(lVar2 + 0x14f8) + 0x2c8),param_2,&local_res20,
                  (int)(longlong)(*pfVar5 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18 |
                  DAT_180960f44 & 0xffffff,DAT_1808ac7ac,0);
  }
  return fVar7 * DAT_1808ac154 + DAT_1808ac254;
}



/* ===== 180311c60 FUN_180311c60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180311c60(ulonglong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  float fVar13;
  uint local_res8 [2];
  uint local_res10 [2];
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  iVar6 = (int)param_1;
  pcVar7 = "##palette_theme_blend";
  uVar9 = 0xffffffff;
  bVar1 = 0x23;
  do {
    pcVar7 = pcVar7 + 1;
    if (((bVar1 == 0x23) && (*pcVar7 == 0x23)) && (pcVar7[1] == 0x23)) {
      uVar9 = 0xffffffff;
      pcVar7 = pcVar7 + 2;
    }
    else {
      param_1 = uVar9 & 0xff ^ (ulonglong)bVar1;
      uVar9 = (ulonglong)((uint)(uVar9 >> 8) ^ *(uint *)(&DAT_1806c25c0 + param_1 * 4));
    }
    bVar1 = *pcVar7;
  } while (bVar1 != 0);
  uVar8 = ~(uint)uVar9;
  puVar11 = &DAT_1806593a0;
  uVar10 = (uint)(iVar6 == 1);
  if (DAT_180cd0ebf == '\0') {
    DAT_181107038 = (float)uVar10;
    DAT_180cd0ebf = '\x01';
    puVar3 = (undefined8 *)&DAT_1806593a0;
    if (iVar6 == 1) {
      puVar3 = (undefined8 *)&DAT_1806583c0;
    }
    _DAT_180960ec0 = *puVar3;
    _DAT_180960ec8 = puVar3[1];
    _DAT_180960ed0 = puVar3[2];
    _DAT_180960ed8 = puVar3[3];
    _DAT_180960ee0 = puVar3[4];
    uRam0000000180960ee8 = puVar3[5];
    _DAT_180960ef0 = puVar3[6];
    _DAT_180960ef8 = puVar3[7];
    _DAT_180960f00 = puVar3[8];
    _DAT_180960f08 = puVar3[9];
    _DAT_180960f10 = puVar3[10];
    _DAT_180960f18 = puVar3[0xb];
    _DAT_180960f20 = puVar3[0xc];
    _DAT_180960f28 = puVar3[0xd];
    _DAT_180960f30 = puVar3[0xe];
    _DAT_180960f38 = puVar3[0xf];
    _DAT_180960f40 = puVar3[0x10];
    _DAT_180960f48 = puVar3[0x11];
    DAT_180960f50 = *(undefined4 *)(puVar3 + 0x12);
    DAT_180960f54 = *(undefined4 *)((longlong)puVar3 + 0x94);
    DAT_180960f58 = *(undefined4 *)(puVar3 + 0x13);
    _DAT_180960f5c = *(undefined4 *)((longlong)puVar3 + 0x9c);
    _DAT_180960f60 = puVar3[0x14];
    _DAT_180960f68 = puVar3[0x15];
    _DAT_180960f70 = puVar3[0x16];
    DAT_181106ea0 = uVar10;
    local_res8[0] = uVar8;
    puVar4 = (ulonglong *)FUN_18034f560(param_1,local_78,local_res8);
    param_1 = *puVar4;
    *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x1c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  }
  if (uVar10 != DAT_181106ea0) {
    _DAT_1811072a0 = _DAT_180960ec0;
    uRam00000001811072a8 = _DAT_180960ec8;
    _DAT_1811072c0 = _DAT_180960ee0;
    uRam00000001811072c8 = uRam0000000180960ee8;
    _DAT_181107350 = _DAT_180960f70;
    _DAT_1811072e0 = _DAT_180960f00;
    uRam00000001811072e8 = _DAT_180960f08;
    _DAT_1811072b0 = _DAT_180960ed0;
    uRam00000001811072b8 = _DAT_180960ed8;
    _DAT_181107300 = _DAT_180960f20;
    uRam0000000181107308 = _DAT_180960f28;
    _DAT_1811072d0 = _DAT_180960ef0;
    uRam00000001811072d8 = _DAT_180960ef8;
    _DAT_181107320 = _DAT_180960f40;
    uRam0000000181107328 = _DAT_180960f48;
    _DAT_1811072f0 = _DAT_180960f10;
    uRam00000001811072f8 = _DAT_180960f18;
    _DAT_181107340 = _DAT_180960f60;
    uRam0000000181107348 = _DAT_180960f68;
    _DAT_181107310 = _DAT_180960f30;
    uRam0000000181107318 = _DAT_180960f38;
    DAT_181107608 = DAT_181107038;
    _DAT_181107330 = DAT_180960f50;
    uRam0000000181107334 = DAT_180960f54;
    uRam0000000181107338 = DAT_180960f58;
    uRam000000018110733c = _DAT_180960f5c;
    DAT_181106ea0 = uVar10;
    local_res10[0] = uVar8;
    plVar5 = (longlong *)FUN_18034f560(param_1,&local_68,local_res10);
    lVar12 = *plVar5;
    *(undefined8 *)(lVar12 + 0x14) = 0;
    *(undefined8 *)(lVar12 + 0x1c) = 0;
    *(undefined4 *)(lVar12 + 0x24) = 0xffffffff;
  }
  local_58 = 0xffffffff;
  local_68 = _DAT_1808ad560;
  uStack_60 = _UNK_1808ad568;
  local_res8[0] = uVar8;
  FUN_18034a380(_DAT_1808ad560,local_78,local_res8,&local_68);
  fVar13 = (float)FUN_1802b3660(local_78[0] + 0x14,DAT_1808ac34c,DAT_1808ac118,0);
  lVar12 = 0;
  if (iVar6 == 1) {
    puVar11 = &DAT_1806583c0;
  }
  do {
    uVar2 = FUN_1802b38e0((&DAT_1811072a0)[lVar12],puVar11[lVar12],fVar13);
    (&DAT_180960ec0)[lVar12] = uVar2;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x2e);
  _DAT_180960f5c = DAT_1809f54bc | 0xff000000;
  _DAT_180960f18 = CONCAT44(DAT_1809f54bc,DAT_180960f18) | 0xff00000000000000;
  _DAT_180960f20 = CONCAT44(DAT_1809f54bc,DAT_180960f20) | 0xff00000000000000;
  _DAT_180960f38 = CONCAT44(DAT_1809f54bc,DAT_180960f38) | 0xff00000000000000;
  _DAT_180960f10 = CONCAT44(0xffffffff,DAT_180960f10);
  _DAT_180960f28 = CONCAT44(DAT_180960f2c & 0xffcccccc | 0xcccccc,0xffffffff);
  fVar13 = ((float)uVar10 - DAT_181107608) * fVar13 + DAT_181107608;
  DAT_181107038 = fVar13;
  DAT_180960e34 = FUN_1802b38e0(0x2e574d4d,0x33adadad,fVar13);
  DAT_180960eb8 = FUN_1802b38e0(0x70140f0f,0xaaf2f2f2,fVar13);
  return;
}



/* ===== 180312030 FUN_180312030 ===== */

undefined8 FUN_180312030(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t _Size;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  iVar4 = FUN_1804e4d70(&DAT_1809f5a50);
  puVar3 = DAT_181107468;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f5a9c == 0x7fffffff) {
    DAT_1809f5a9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_181107460 != DAT_181107468) {
    uVar1 = param_1[3];
    sVar2 = param_1[2];
    puVar5 = DAT_181107460;
    do {
      if (uVar1 < 0x10) {
        _Buf2 = param_1;
      }
      else {
        _Buf2 = (undefined8 *)*param_1;
      }
      _Size = puVar5[2];
      if ((ulonglong)puVar5[3] < 0x10) {
        _Buf1 = puVar5;
      }
      else {
        _Buf1 = (undefined8 *)*puVar5;
      }
      if (_Size == sVar2) {
        if (_Size != 0) {
          iVar4 = memcmp(_Buf1,_Buf2,_Size);
          if (iVar4 != 0) goto LAB_1803120ca;
        }
        *param_2 = *(undefined4 *)(puVar5 + 4);
        uVar6 = 1;
        *param_3 = *(undefined4 *)((longlong)puVar5 + 0x24);
        goto LAB_1803120d5;
      }
LAB_1803120ca:
      puVar5 = puVar5 + 5;
    } while (puVar5 != puVar3);
  }
  uVar6 = 0;
LAB_1803120d5:
  FUN_1804e4e90(&DAT_1809f5a50);
  return uVar6;
}



/* ===== 180312140 FUN_180312140 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180312140(char *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30 [6];
  
  local_30[4] = DAT_180919500 ^ (ulonglong)auStack_58;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0xf;
  local_30[0] = 0;
  if (param_1 != (char *)0x0) {
    pcVar5 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar5 != '\0') {
        if (((*pcVar5 == '#') && (pcVar5[1] == '#')) ||
           (pcVar5 = pcVar5 + 1, pcVar5 == (char *)0xffffffffffffffff)) break;
      }
    }
    FUN_180029840(local_30,param_1,(longlong)pcVar5 - (longlong)param_1);
  }
  if (DAT_1811071d8 == DAT_1811071e0) {
    FUN_180028f00(&DAT_1811071d0,DAT_1811071d8,local_30);
  }
  else {
    FUN_180024b50(DAT_1811071d8,local_30);
    DAT_1811071d8 = DAT_1811071d8 + 0x20;
  }
  puVar2 = DAT_181107068;
  if (DAT_181107068 == DAT_181107070) {
    FUN_180351520();
  }
  else {
    *DAT_181107068 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0xf;
    *(undefined1 *)puVar2 = 0;
    DAT_181107068 = DAT_181107068 + 4;
  }
  local_38[0] = 0;
  FUN_180349b00(&DAT_181107010,local_38);
  if (0xf < (ulonglong)local_30[3]) {
    uVar4 = local_30[3] + 1;
    lVar3 = local_30[0];
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(local_30[0] + -8);
      if (0x1f < (local_30[0] - lVar3) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = local_30[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar3,uVar4);
  }
  return;
}



/* ===== 180312290 FUN_180312290 ===== */

ulonglong FUN_180312290(void)

{
  char cVar1;
  ulonglong in_RAX;
  
  if (DAT_1811071d0 == DAT_1811071d8) {
    return in_RAX & 0xffffffffffffff00;
  }
  cVar1 = *(char *)(DAT_181107018 + -1);
  FUN_18000f890(DAT_1811071d8 + -0x20);
  DAT_1811071d8 = DAT_1811071d8 + -0x20;
  FUN_18000f890(DAT_181107068 + -0x20);
  DAT_181107068 = DAT_181107068 + -0x20;
  DAT_181107018 = DAT_181107018 + -1;
  if (cVar1 != '\0') {
    FUN_1803e0390();
    FUN_1803e75b0();
  }
  return (ulonglong)(cVar1 != '\0');
}



/* ===== 180312320 FUN_180312320 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180312320(char *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined1 auStack_78 [40];
  longlong local_50 [10];
  
  local_50[8] = DAT_180919500 ^ (ulonglong)auStack_78;
  if (DAT_181107060 != DAT_181107068) {
    if (param_1 == (char *)0x0) {
      local_50[6] = 0;
      local_50[7] = 0xf;
      local_50[5] = 0;
      local_50[4] = 0;
      FUN_18002ba60(DAT_181107068 + -0x20,local_50 + 4);
      if ((ulonglong)local_50[7] < 0x10) {
        return;
      }
      lVar3 = local_50[4];
      uVar2 = local_50[7];
    }
    else {
      pcVar6 = param_1;
      if (param_1 != (char *)0xffffffffffffffff) {
        while (*pcVar6 != '\0') {
          if (((*pcVar6 == '#') && (pcVar6[1] == '#')) ||
             (pcVar6 = pcVar6 + 1, pcVar6 == (char *)0xffffffffffffffff)) break;
        }
      }
      local_50[2] = 0;
      local_50[3] = 0;
      local_50[0] = 0;
      local_50[1] = 0;
      if (param_1 == pcVar6) {
        local_50[3] = 0xf;
        local_50[0] = 0;
      }
      else {
        FUN_1800133a0(local_50,param_1,(longlong)pcVar6 - (longlong)param_1);
      }
      FUN_18002ba60(DAT_181107068 + -0x20,local_50);
      if ((ulonglong)local_50[3] < 0x10) {
        return;
      }
      lVar3 = local_50[0];
      uVar2 = local_50[3];
    }
    uVar5 = uVar2 + 1;
    lVar4 = lVar3;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar4) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = uVar2 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar4,uVar5);
  }
  return;
}



/* ===== 180312460 FUN_180312460 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_180312460(char *param_1,char param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined4 local_68;
  ulonglong local_60 [4];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_68 = 0;
  puVar10 = auStack_88;
  if (((DAT_180cd0f09 == '\0') || (puVar10 = auStack_88, DAT_180cd0fa4 == '\0')) ||
     (puVar10 = auStack_88, DAT_1809f72e0 == '\0')) {
LAB_180312713:
    uVar5 = 0;
  }
  else {
    if ((DAT_181107150 == DAT_181107158) || (*(char *)(DAT_181107158 + -4) == '\0')) {
      bVar2 = false;
      puVar10 = auStack_88;
      if (DAT_1809f72e2 == '\0') goto LAB_180312713;
    }
    else {
      bVar2 = true;
    }
    if (((param_2 == '\0') && (param_1 != (char *)0x0)) &&
       (pcVar6 = param_1, param_1 != (char *)0xffffffffffffffff)) {
      while (*pcVar6 != '\0') {
        if (((*pcVar6 == '#') && (pcVar6[1] == '#')) ||
           (pcVar6 = pcVar6 + 1, pcVar6 == (char *)0xffffffffffffffff)) break;
      }
      if (pcVar6 == param_1) goto LAB_180312518;
      bVar3 = false;
    }
    else {
LAB_180312518:
      bVar3 = true;
    }
    if (DAT_181107520 != DAT_181107528) {
      if ((bVar2) && (DAT_1811071d8 - DAT_1811071d0 == DAT_181107528 - DAT_181107520)) {
        uVar9 = 0;
        if (DAT_181107068 - DAT_181107060 >> 5 != 0) {
          do {
            if ((ulonglong)(DAT_181107508 - DAT_181107500 >> 5) <= uVar9) break;
            cVar4 = FUN_1802b9090(DAT_181107060 + uVar9 * 0x20,DAT_181107500 + uVar9 * 0x20);
            if (cVar4 == '\0') goto LAB_1803125e5;
            uVar9 = uVar9 + 1;
          } while (uVar9 < (ulonglong)(DAT_181107068 - DAT_181107060 >> 5));
        }
        puVar10 = auStack_88;
        if (DAT_180cd040f != '\0') goto LAB_180312713;
        if (!bVar3) goto LAB_1803125e0;
      }
LAB_1803125e5:
      puVar10 = auStack_88;
      uVar5 = 1;
      goto LAB_180312715;
    }
    puVar10 = auStack_88;
    if (DAT_180cd040f != '\0') goto LAB_180312713;
LAB_1803125e0:
    if (param_2 != '\0') goto LAB_1803125e5;
    pcVar6 = param_1;
    if (!bVar3) {
      for (; ((pcVar6 != (char *)0xffffffffffffffff && (*pcVar6 != '\0')) &&
             ((*pcVar6 != '#' || (pcVar6[1] != '#')))); pcVar6 = pcVar6 + 1) {
      }
      uVar7 = FUN_1802b3fe0(local_40,param_1);
      bVar2 = false;
      local_68 = 1;
      cVar4 = FUN_1802b3ef0(uVar7);
      if (cVar4 == '\0') {
        local_60[0] = 0;
        local_60[1] = 0;
        local_60[2] = 0;
        local_60[3] = 0;
        if (param_1 == pcVar6) {
          local_60[2] = 0;
          local_60[3] = 0xf;
          local_60[0] = 0;
        }
        else {
          FUN_1800133a0(local_60,param_1,(longlong)pcVar6 - (longlong)param_1);
        }
        bVar2 = true;
        local_68 = 3;
        cVar4 = FUN_1802b3ef0(local_60);
        if (cVar4 != '\0') goto LAB_180312696;
        DAT_180cd0d56 = 1;
      }
      else {
LAB_180312696:
        DAT_180cd0d56 = 0;
      }
      if (bVar2) {
        if (0xf < local_60[3]) {
          uVar8 = local_60[3] + 1;
          uVar9 = local_60[0];
          if (0xfff < uVar8) {
            uVar9 = *(ulonglong *)(local_60[0] - 8);
            if (0x1f < (local_60[0] - uVar9) - 8) {
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              puVar10 = auStack_80;
              goto LAB_180312713;
            }
            uVar8 = local_60[3] + 0x28;
          }
          thunk_FUN_1803d64e0(uVar9,uVar8);
        }
        local_60[2] = 0;
        local_60[3] = 0xf;
        local_60[0] = local_60[0] & 0xffffffffffffff00;
      }
      FUN_18000f890(local_40);
    }
    puVar10 = auStack_88;
    uVar5 = DAT_180cd0d56;
  }
LAB_180312715:
  *(undefined8 *)(puVar10 + -8) = 0x180312722;
  return uVar5;
}



/* ===== 180312740 FUN_180312740 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180312740(char *param_1)

{
  code *pcVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  longlong local_40 [5];
  
  local_40[4] = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar3 = local_40[4];
  puVar5 = auStack_68;
  if (((DAT_180cd0f09 != '\0') && (puVar5 = auStack_68, DAT_180cd0fa4 != '\0')) &&
     (uVar3 = DAT_181107528, puVar5 = auStack_68, DAT_181107520 != DAT_181107528)) {
    uVar6 = DAT_1811071d8 - DAT_1811071d0;
    uVar8 = (longlong)uVar6 >> 5;
    uVar3 = (longlong)(DAT_181107528 - DAT_181107520) >> 5;
    puVar5 = auStack_68;
    if ((uVar8 < uVar3) &&
       (uVar3 = (DAT_181107158 - DAT_181107150 >> 3) * -0xf0f0f0f0f0f0f0f, puVar5 = auStack_68,
       lVar7 = DAT_181107150, uVar3 == uVar8)) {
      for (; lVar7 != DAT_181107158; lVar7 = lVar7 + 0x88) {
        puVar5 = auStack_68;
        if (*(char *)(lVar7 + 0x84) == '\0') goto LAB_180312938;
      }
      uVar4 = 0;
      if (uVar8 != 0) {
        do {
          if (((ulonglong)(DAT_181107068 - DAT_181107060 >> 5) <= uVar4) ||
             ((ulonglong)(DAT_181107508 - DAT_181107500 >> 5) <= uVar4)) break;
          uVar3 = FUN_1802b9090(DAT_181107060 + uVar4 * 0x20,DAT_181107500 + uVar4 * 0x20);
          puVar5 = auStack_68;
          if ((char)uVar3 == '\0') goto LAB_180312938;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar8);
      }
      lVar7 = (uVar6 & 0xffffffffffffffe0) + DAT_181107520;
      if (param_1 == (char *)0x0) {
LAB_1803128d0:
        local_40[1] = 0;
        local_40[0] = 0;
        local_40[3] = 0xf;
        local_40[2] = 0;
      }
      else {
        pcVar9 = param_1;
        if (param_1 != (char *)0xffffffffffffffff) {
          while (*pcVar9 != '\0') {
            if (((*pcVar9 == '#') && (pcVar9[1] == '#')) ||
               (pcVar9 = pcVar9 + 1, pcVar9 == (char *)0xffffffffffffffff)) break;
          }
        }
        local_40[0] = 0;
        local_40[1] = 0;
        local_40[2] = 0;
        local_40[3] = 0;
        if (param_1 == pcVar9) goto LAB_1803128d0;
        FUN_1800133a0(local_40,param_1,(longlong)pcVar9 - (longlong)param_1);
      }
      bVar2 = FUN_1802b9090(local_40,lVar7);
      if (0xf < (ulonglong)local_40[3]) {
        uVar3 = local_40[3] + 1;
        lVar7 = local_40[0];
        if (0xfff < uVar3) {
          lVar7 = *(longlong *)(local_40[0] + -8);
          if (0x1f < (local_40[0] - lVar7) - 8U) {
            pcVar1 = (code *)swi(0x29);
            uVar3 = (*pcVar1)(5);
            puVar5 = auStack_60;
            goto LAB_180312938;
          }
          uVar3 = local_40[3] + 0x28;
        }
        thunk_FUN_1803d64e0(lVar7,uVar3);
      }
      uVar3 = (ulonglong)bVar2;
      puVar5 = auStack_68;
      goto LAB_18031293a;
    }
  }
LAB_180312938:
  uVar3 = uVar3 & 0xffffffffffffff00;
LAB_18031293a:
  *(undefined8 *)(puVar5 + -8) = 0x180312947;
  return uVar3;
}



/* ===== 180312960 FUN_180312960 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180312960(char *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 ***pppuVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [32];
  longlong local_110 [5];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  int local_88;
  undefined8 ***local_78 [2];
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_138;
  uVar5 = local_58;
  if (((DAT_1809f7058 != DAT_1809f7060) && (DAT_180cd0f09 == '\0')) && (DAT_180cd0f0c == '\0')) {
    if (DAT_1809f7090 < *(int *)(DAT_180ca0a50 + 4)) {
      local_e8 = 0xffffffff;
      local_e4 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      local_c8 = 0xf;
      local_e0 = 0;
      local_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      DAT_1809f7030 = 0xffffffff;
      DAT_1809f7034 = 0;
      FUN_18002ba60(&DAT_1809f7038,&local_e0);
      FUN_180067380(&DAT_1809f7058,&local_c0);
      FUN_180067380(&DAT_1809f7070,&local_a8);
      DAT_1809f7088 = local_90;
      DAT_1809f7090 = local_88;
      FUN_1800288b0(&local_a8);
      FUN_1800288b0(&local_c0);
      uVar5 = FUN_18000f890(&local_e0);
    }
    else {
      uVar5 = (ulonglong)DAT_1811076c0;
      if (((DAT_1811076c0 == DAT_1809f7030) && (DAT_181106f10 == DAT_1811076c0)) &&
         ((DAT_1811076c0 != 2 || (uVar5 = (ulonglong)DAT_1809f7034, DAT_181107484 == DAT_1809f7034))
         )) {
        uVar11 = DAT_1811071d8 - DAT_1811071d0;
        uVar12 = (longlong)uVar11 >> 5;
        if ((uVar12 == DAT_1809f7088) && (uVar12 < (ulonglong)(DAT_1809f7060 - DAT_1809f7058 >> 5)))
        {
          puVar6 = &DAT_1809f7308;
          if (DAT_181107150 != DAT_181107158) {
            puVar6 = (undefined8 *)(DAT_181107150 + 0x28);
          }
          FUN_180024b50(local_78,puVar6);
          puVar7 = auStack_138;
          if (local_68 == DAT_1809f7048) {
            uVar5 = 0;
            if (local_68 != 0) {
              do {
                pppuVar8 = local_78;
                if (0xf < local_60) {
                  pppuVar8 = local_78[0];
                }
                puVar6 = &DAT_1809f7038;
                if (0xf < DAT_1809f7050) {
                  puVar6 = DAT_1809f7038;
                }
                iVar3 = tolower((uint)*(byte *)((longlong)puVar6 + uVar5));
                iVar4 = tolower((uint)*(byte *)((longlong)pppuVar8 + uVar5));
                puVar7 = auStack_138;
                if (iVar4 != iVar3) goto LAB_180312dbf;
                uVar5 = uVar5 + 1;
              } while (uVar5 < local_68);
            }
            uVar5 = 0;
            if (uVar12 != 0) {
              do {
                lVar9 = uVar5 * 0x20;
                cVar2 = FUN_1802b9090(DAT_1811071d0 + lVar9,DAT_1809f7058 + lVar9);
                puVar7 = auStack_138;
                if ((cVar2 == '\0') ||
                   ((uVar5 < (ulonglong)(DAT_181107068 - DAT_181107060 >> 5) &&
                    (cVar2 = FUN_1802b9090(DAT_181107060 + lVar9,DAT_1809f7070 + lVar9),
                    puVar7 = auStack_138, cVar2 == '\0')))) goto LAB_180312dbf;
                uVar5 = uVar5 + 1;
              } while (uVar5 < uVar12);
            }
            lVar9 = (uVar11 & 0xffffffffffffffe0) + DAT_1809f7058;
            if (param_1 == (char *)0x0) {
LAB_180312c6c:
              local_110[1] = 0;
              local_110[0] = 0;
              local_110[3] = 0xf;
              local_110[2] = 0;
            }
            else {
              pcVar10 = param_1;
              if (param_1 != (char *)0xffffffffffffffff) {
                while (*pcVar10 != '\0') {
                  if (((*pcVar10 == '#') && (pcVar10[1] == '#')) ||
                     (pcVar10 = pcVar10 + 1, pcVar10 == (char *)0xffffffffffffffff)) break;
                }
              }
              local_110[0] = 0;
              local_110[1] = 0;
              local_110[2] = 0;
              local_110[3] = 0;
              if (param_1 == pcVar10) goto LAB_180312c6c;
              FUN_1800133a0(local_110,param_1,(longlong)pcVar10 - (longlong)param_1);
            }
            cVar2 = FUN_1802b9090(local_110,lVar9);
            if (0xf < (ulonglong)local_110[3]) {
              uVar5 = local_110[3] + 1;
              lVar9 = local_110[0];
              if (0xfff < uVar5) {
                lVar9 = *(longlong *)(local_110[0] + -8);
                if (0x1f < (local_110[0] - lVar9) - 8U) {
                  pcVar1 = (code *)swi(0x29);
                  (*pcVar1)(5);
                  puVar7 = auStack_130;
                  goto LAB_180312dbf;
                }
                uVar5 = local_110[3] + 0x28;
              }
              thunk_FUN_1803d64e0(lVar9,uVar5);
            }
            puVar7 = auStack_138;
            if (cVar2 == '\0') goto LAB_180312dbf;
            DAT_1809f7088 = DAT_1809f7088 + 1;
            if ((ulonglong)(DAT_1809f7060 - DAT_1809f7058 >> 5) <= DAT_1809f7088) {
              local_e8 = 0xffffffff;
              local_e4 = 0;
              uStack_d8 = 0;
              local_d0 = 0;
              local_c8 = 0xf;
              local_e0 = 0;
              local_c0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_98 = 0;
              local_90 = 0;
              local_88 = 0;
              DAT_1809f7030 = 0xffffffff;
              DAT_1809f7034 = 0;
              FUN_18002ba60(&DAT_1809f7038,&local_e0);
              FUN_180067380(&DAT_1809f7058,&local_c0);
              FUN_180067380(&DAT_1809f7070,&local_a8);
              DAT_1809f7088 = local_90;
              DAT_1809f7090 = local_88;
              FUN_1800288b0(&local_a8);
              FUN_1800288b0(&local_c0);
              FUN_18000f890(&local_e0);
            }
            uVar5 = 1;
            puVar7 = auStack_138;
          }
          else {
LAB_180312dbf:
            uVar5 = 0;
          }
          *(undefined8 *)(puVar7 + -8) = 0x180312dca;
          FUN_18000f890(local_78);
          goto LAB_180312a88;
        }
      }
    }
  }
  puVar7 = auStack_138;
  uVar5 = uVar5 & 0xffffffffffffff00;
LAB_180312a88:
  *(undefined8 *)(puVar7 + -8) = 0x180312a94;
  return uVar5;
}



/* ===== 180312de0 FUN_180312de0 ===== */

void FUN_180312de0(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  lVar1 = DAT_180ca0a50;
  uVar3 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##options");
  if ((*(byte *)(lVar1 + 0x28f4) & 8) != 0) {
    FUN_1803f5060("[popup] OpenPopup(\"%s\" -> 0x%08X)\n","##options",uVar3);
  }
  FUN_1803ed9b0(uVar3,0);
  FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##options");
  plVar2 = (longlong *)FUN_18034f310();
  lVar1 = *plVar2;
  *(undefined4 *)(lVar1 + 0x14) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x18) = 0x7f7fffff;
  return;
}



/* ===== 180312e80 FUN_180312e80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180312e80(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 ***pppuVar8;
  longlong *plVar9;
  ulonglong uVar10;
  char *_Str;
  undefined4 uVar11;
  undefined1 auStack_98 [32];
  undefined8 ***local_78 [2];
  longlong local_68;
  ulonglong local_60;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  uVar10 = local_38;
  if ((((DAT_180cd0e6e != '\0') || (DAT_180cd0f09 != '\0')) || (DAT_180cd0d57 != '\0')) ||
     ((DAT_1809f73f0 != 0 ||
      ((uVar10 = (ulonglong)DAT_1811076c0, 3 < DAT_1811076c0 && (DAT_1811076c0 != 5)))))) {
    return uVar10 & 0xffffffffffffff00;
  }
  puVar7 = &DAT_1809f7308;
  if (DAT_181107150 != DAT_181107158) {
    puVar7 = (undefined8 *)(DAT_181107150 + 0x28);
  }
  FUN_180024b50(local_78,puVar7);
  if (local_68 == 0) {
    uVar10 = 0;
  }
  else {
    uVar11 = 0;
    if (DAT_1811076c0 == 2) {
      uVar11 = DAT_181107484;
    }
    uVar3 = FUN_1803282a0(local_58,DAT_1811076c0,uVar11,local_78);
    FUN_180067380(param_1,uVar3);
    FUN_1800288b0(local_58);
    DAT_181107188 = (param_1[1] - *param_1 >> 5) + -1;
    pppuVar8 = local_78;
    if (0xf < local_60) {
      pppuVar8 = local_78[0];
    }
    FUN_180029840(&DAT_1809f7138,pppuVar8,local_68);
    if (DAT_1811076c0 == 0) {
      _Str = "rage";
    }
    else if (DAT_1811076c0 == 1) {
      _Str = "legit";
    }
    else if (DAT_1811076c0 == 2) {
      _Str = "players";
    }
    else {
      _Str = "misc";
      if (DAT_1811076c0 == 3) {
        _Str = "world";
      }
    }
    sVar4 = strlen(_Str);
    FUN_180029840(&DAT_1809f5b20,_Str,sVar4);
    uVar10 = 0;
    lVar6 = DAT_1811071d0;
    if (DAT_1811071d8 - DAT_1811071d0 >> 5 != 0) {
      do {
        plVar9 = (longlong *)(uVar10 * 0x20 + lVar6);
        if (plVar9[2] != 0) {
          if (0xf < (ulonglong)plVar9[3]) {
            plVar9 = (longlong *)*plVar9;
          }
          puVar5 = (undefined4 *)FUN_1802b3fe0(local_58,plVar9);
          puVar7 = (undefined8 *)param_1[1];
          if (puVar7 == (undefined8 *)param_1[2]) {
            FUN_18009bb20(param_1,puVar7,puVar5);
          }
          else {
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            uVar11 = puVar5[1];
            uVar1 = puVar5[2];
            uVar2 = puVar5[3];
            *(undefined4 *)puVar7 = *puVar5;
            *(undefined4 *)((longlong)puVar7 + 4) = uVar11;
            *(undefined4 *)(puVar7 + 1) = uVar1;
            *(undefined4 *)((longlong)puVar7 + 0xc) = uVar2;
            uVar3 = *(undefined8 *)(puVar5 + 6);
            puVar7[2] = *(undefined8 *)(puVar5 + 4);
            puVar7[3] = uVar3;
            *(undefined8 *)(puVar5 + 4) = 0;
            *(undefined8 *)(puVar5 + 6) = 0xf;
            *(undefined1 *)puVar5 = 0;
            param_1[1] = param_1[1] + 0x20;
          }
          FUN_18000f890(local_58);
          lVar6 = DAT_1811071d0;
        }
        puVar7 = (undefined8 *)(DAT_181107060 + uVar10 * 0x20);
        if (puVar7[2] != 0) {
          if (0xf < (ulonglong)puVar7[3]) {
            puVar7 = (undefined8 *)*puVar7;
          }
          puVar5 = (undefined4 *)FUN_1802b3fe0(local_58,puVar7);
          puVar7 = (undefined8 *)param_1[1];
          if (puVar7 == (undefined8 *)param_1[2]) {
            FUN_18009bb20(param_1,puVar7,puVar5);
          }
          else {
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            uVar11 = puVar5[1];
            uVar1 = puVar5[2];
            uVar2 = puVar5[3];
            *(undefined4 *)puVar7 = *puVar5;
            *(undefined4 *)((longlong)puVar7 + 4) = uVar11;
            *(undefined4 *)(puVar7 + 1) = uVar1;
            *(undefined4 *)((longlong)puVar7 + 0xc) = uVar2;
            uVar3 = *(undefined8 *)(puVar5 + 6);
            puVar7[2] = *(undefined8 *)(puVar5 + 4);
            puVar7[3] = uVar3;
            *(undefined8 *)(puVar5 + 4) = 0;
            *(undefined8 *)(puVar5 + 6) = 0xf;
            *(undefined1 *)puVar5 = 0;
            param_1[1] = param_1[1] + 0x20;
          }
          FUN_18000f890(local_58);
          lVar6 = DAT_1811071d0;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulonglong)(DAT_1811071d8 - lVar6 >> 5));
    }
    uVar10 = 1;
  }
  FUN_18000f890(local_78);
  return uVar10;
}



/* ===== 180313160 FUN_180313160 ===== */

undefined8 * FUN_180313160(undefined8 *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  ulonglong local_68;
  ulonglong uStack_60;
  longlong local_58;
  undefined4 local_50;
  undefined8 *local_48;
  
  uVar2 = DAT_180cd040c;
  uVar6 = 0;
  local_50 = 0;
  if (DAT_1811071d0 == DAT_1811071d8) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  DAT_180cd040c = 1;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_48 = param_1;
  cVar3 = FUN_180312e80(&local_68);
  uVar10 = uStack_60;
  puVar8 = auStack_88;
  DAT_180cd040c = uVar2;
  if (cVar3 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    uVar6 = local_68;
    uVar9 = local_68;
    if (local_68 == 0) {
      return param_1;
    }
    for (; local_68 = uVar9, uVar6 != uVar10; uVar6 = uVar6 + 0x20) {
      FUN_18000f890(uVar6);
      uVar9 = local_68;
    }
    if ((local_58 - uVar9 & 0xffffffffffffffe0) < 0x1000) goto LAB_1803133c0;
    uVar6 = (uVar9 - *(ulonglong *)(uVar9 - 8)) - 8;
    uVar9 = *(ulonglong *)(uVar9 - 8);
joined_r0x0001803133ae:
    puVar8 = auStack_88;
    if (uVar6 < 0x20) goto LAB_1803133c0;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar8 = auStack_80;
    uVar9 = uVar10;
  }
  else {
    if (((DAT_181107060 != DAT_181107068) && (*(longlong *)(DAT_181107068 + -0x10) != 0)) &&
       (local_68 != uStack_60)) {
      FUN_18000f890(uStack_60 - 0x20);
      uStack_60 = uStack_60 - 0x20;
    }
    puVar8 = auStack_88;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    local_50 = 2;
    uVar10 = uStack_60;
    uVar9 = local_68;
    if ((longlong)(uStack_60 - local_68) >> 5 != 0) {
      do {
        if (uVar6 != 0) {
          FUN_1800690a0(param_1,0x1f);
          uVar10 = uStack_60;
          uVar9 = local_68;
        }
        pbVar5 = (byte *)(uVar6 * 0x20 + uVar9);
        if (*(ulonglong *)(pbVar5 + 0x18) < 0x10) {
          pbVar7 = pbVar5;
        }
        else {
          pbVar7 = *(byte **)pbVar5;
        }
        pbVar5 = pbVar7 + *(longlong *)(pbVar5 + 0x10);
        if (pbVar7 != pbVar5) {
          do {
            iVar4 = tolower((uint)*pbVar7);
            FUN_1800690a0(param_1,iVar4);
            pbVar7 = pbVar7 + 1;
          } while (pbVar7 != pbVar5);
          uVar10 = uStack_60;
          uVar9 = local_68;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < (ulonglong)((longlong)(uVar10 - uVar9) >> 5));
    }
    if (uVar9 == 0) {
      return param_1;
    }
    if (uVar9 != uVar10) {
      do {
        FUN_18000f890(uVar9);
        uVar9 = uVar9 + 0x20;
      } while (uVar9 != uVar10);
      uVar9 = local_68;
    }
    if (0xfff < (local_58 - uVar9 & 0xffffffffffffffe0)) {
      uVar10 = (uVar9 - *(ulonglong *)(uVar9 - 8)) - 8;
      uVar9 = *(ulonglong *)(uVar9 - 8);
      uVar6 = uVar10;
      goto joined_r0x0001803133ae;
    }
  }
LAB_1803133c0:
  *(undefined8 *)(puVar8 + -8) = 0x1803133c5;
  thunk_FUN_1803d64e0(uVar9);
  return param_1;
}



/* ===== 1803133e0 FUN_1803133e0 ===== */

void FUN_1803133e0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong local_res10;
  undefined *local_res18;
  undefined1 local_18 [16];
  
  if ((undefined8 **)(param_2 + 0x80) != &DAT_1809f5b20) {
    puVar5 = &DAT_1809f5b20;
    if (0xf < DAT_1809f5b38) {
      puVar5 = DAT_1809f5b20;
    }
    FUN_180029840((undefined8 *)(param_2 + 0x80),puVar5,DAT_1809f5b30);
  }
  if ((undefined8 **)(param_2 + 0xa0) != &DAT_1809f7138) {
    puVar5 = &DAT_1809f7138;
    if (0xf < DAT_1809f7150) {
      puVar5 = DAT_1809f7138;
    }
    FUN_180029840((undefined8 *)(param_2 + 0xa0),puVar5,DAT_1809f7148);
  }
  *(undefined8 *)(param_2 + 0xc0) = DAT_181107188;
  *(bool *)(param_2 + 0x101) = DAT_1811071d0 != DAT_1811071d8;
  if ((*(longlong *)(param_2 + 0xf0) == 0) && (DAT_181107030 != (char *)0x0)) {
    sVar2 = strlen(DAT_181107030);
    FUN_180029840(param_2 + 0xe0,DAT_181107030,sVar2);
  }
  local_res18 = &DAT_1809f5a50;
  iVar1 = FUN_1804e4d70();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f5a9c == 0x7fffffff) {
    DAT_1809f5a9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((ulonglong)param_1[3] < 0x10) {
    puVar5 = param_1;
  }
  else {
    puVar5 = (undefined8 *)*param_1;
  }
  uVar4 = 0;
  uVar7 = 0xcbf29ce484222325;
  if (param_1[2] != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)(uVar4 + (longlong)puVar5)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)param_1[2]);
  }
  lVar3 = FUN_1800268a0(&DAT_180ca1900,local_18,param_1,uVar7);
  lVar6 = DAT_180ca1908;
  if (*(longlong *)(lVar3 + 8) != 0) {
    lVar6 = *(longlong *)(lVar3 + 8);
  }
  if (lVar6 == DAT_180ca1908) {
    local_res10 = (DAT_181107368 - DAT_181107360 >> 3) * 0xf83e0f83e0f83e1;
    FUN_180346cb0(&DAT_180ca1900,local_18,param_1,&local_res10);
    if (DAT_181107368 == DAT_181107370) {
      FUN_180353520();
    }
    else {
      FUN_1803594f0(DAT_181107368,param_2);
      DAT_181107368 = DAT_181107368 + 0x108;
    }
  }
  else {
    FUN_180313620(*(longlong *)(lVar6 + 0x30) * 0x108 + DAT_181107360,param_2);
  }
  FUN_1804e4e90(&DAT_1809f5a50);
  return;
}



/* ===== 180313620 FUN_180313620 ===== */

longlong FUN_180313620(longlong param_1,longlong param_2)

{
  FUN_180067380();
  FUN_180067380(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  FUN_18002ba60(param_1 + 0x40,param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  FUN_180067380(param_1 + 0x68,param_2 + 0x68);
  FUN_18002ba60(param_1 + 0x80,param_2 + 0x80);
  FUN_18002ba60(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  FUN_1800ccf00(param_1 + 200,param_2 + 200);
  FUN_18002ba60(param_1 + 0xe0,param_2 + 0xe0);
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
  *(undefined1 *)(param_1 + 0x101) = *(undefined1 *)(param_2 + 0x101);
  return param_1;
}



/* ===== 180313700 FUN_180313700 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180313700(char *param_1,undefined8 *param_2,undefined4 param_3,char *param_4,
                  undefined1 param_5,longlong param_6,int param_7)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  char cVar9;
  char cVar10;
  char *pcVar11;
  longlong lVar12;
  undefined4 *puVar13;
  size_t sVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 *puStack_1a0;
  undefined8 *local_198;
  undefined8 uStack_190;
  longlong local_188;
  longlong lStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 *local_138;
  undefined8 *puStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  undefined1 local_98 [32];
  ulonglong local_78;
  
  cVar9 = DAT_180cd040e;
  local_78 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  DAT_180cd040e = 0;
  uVar19 = param_2[2];
  if (((uVar19 != 0) && (param_1 != (char *)0x0)) &&
     (pcVar11 = param_1, param_1 != (char *)0xffffffffffffffff)) {
    do {
      if ((*pcVar11 == '\0') || ((*pcVar11 == '#' && (pcVar11[1] == '#')))) break;
      pcVar11 = pcVar11 + 1;
    } while (pcVar11 != (char *)0xffffffffffffffff);
    if (pcVar11 != param_1) {
      if (DAT_180cd0f0c == '\0') {
        puVar16 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar16 = (undefined8 *)*param_2;
        }
        uVar20 = 0xcbf29ce484222325;
        uVar15 = 0;
        if (uVar19 != 0) {
          do {
            uVar20 = (uVar20 ^ *(byte *)((longlong)puVar16 + uVar15)) * 0x100000001b3;
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar19);
        }
        lVar12 = FUN_1800268a0(&DAT_180ca1900,local_98,param_2,uVar20);
        if (*(longlong *)(lVar12 + 8) != 0) {
          return;
        }
      }
      uVar6 = DAT_181107570;
      uVar5 = DAT_1811071e8;
      uVar8 = DAT_180cd040c;
      DAT_180cd040c = 1;
      local_1a8 = 0;
      puStack_1a0 = (undefined8 *)0x0;
      local_198 = (undefined8 *)0x0;
      uStack_190 = 0;
      local_188 = 0;
      lStack_180 = 0;
      local_178 = 0;
      local_170 = 0;
      uStack_160 = 0;
      local_158 = _DAT_1808ad410;
      uStack_150 = _UNK_1808ad418;
      local_168 = 0;
      local_148 = 0;
      local_140 = 0;
      local_138 = (undefined8 *)0x0;
      puStack_130 = (undefined8 *)0x0;
      uStack_120 = 0;
      local_118 = _DAT_1808ad410;
      uStack_110 = _UNK_1808ad418;
      local_128 = 0;
      uStack_100 = 0;
      local_f8 = _DAT_1808ad410;
      uStack_f0 = _UNK_1808ad418;
      local_108 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      uStack_c0 = 0;
      local_b8 = _DAT_1808ad410;
      uStack_b0 = _UNK_1808ad418;
      local_c8 = 0;
      local_a8 = 0;
      cVar10 = FUN_180312e80(&local_1a8);
      if (cVar10 == '\0') {
        DAT_180cd040c = uVar8;
      }
      else {
        puVar13 = (undefined4 *)FUN_1802b3fe0(local_98,param_1);
        if (puStack_1a0 == local_198) {
          FUN_18009bb20(&local_1a8,puStack_1a0,puVar13);
        }
        else {
          *puStack_1a0 = 0;
          puStack_1a0[1] = 0;
          puStack_1a0[2] = 0;
          puStack_1a0[3] = 0;
          uVar2 = puVar13[1];
          uVar3 = puVar13[2];
          uVar4 = puVar13[3];
          *(undefined4 *)puStack_1a0 = *puVar13;
          *(undefined4 *)((longlong)puStack_1a0 + 4) = uVar2;
          *(undefined4 *)(puStack_1a0 + 1) = uVar3;
          *(undefined4 *)((longlong)puStack_1a0 + 0xc) = uVar4;
          uVar7 = *(undefined8 *)(puVar13 + 6);
          puStack_1a0[2] = *(undefined8 *)(puVar13 + 4);
          puStack_1a0[3] = uVar7;
          *(undefined8 *)(puVar13 + 4) = 0;
          *(undefined8 *)(puVar13 + 6) = 0xf;
          *(undefined1 *)puVar13 = 0;
          puStack_1a0 = puStack_1a0 + 4;
        }
        FUN_18000f890(local_98);
        if (local_188 == lStack_180) {
          DAT_180cd040c = uVar8;
          FUN_180028f00(&uStack_190,local_188,param_2);
        }
        else {
          DAT_180cd040c = uVar8;
          FUN_180024b50(local_188,param_2);
          local_188 = local_188 + 0x20;
        }
        if (cVar9 != '\0') {
          local_170 = uVar6;
          local_178._4_4_ = uVar5;
        }
        local_178 = CONCAT44(local_178._4_4_,param_3);
        pcVar11 = "";
        if (param_4 != (char *)0x0) {
          pcVar11 = param_4;
        }
        sVar14 = strlen(pcVar11);
        FUN_180029840(&local_168,pcVar11,sVar14);
        local_148 = param_5;
        DAT_180cd040c = 1;
        uVar19 = 0;
        if (0 < param_7) {
          do {
            puVar1 = *(undefined1 **)(param_6 + uVar19 * 8);
            puVar17 = &DAT_18058b643;
            if (puVar1 != (undefined1 *)0x0) {
              puVar17 = puVar1;
            }
            puVar13 = (undefined4 *)FUN_1802b3fe0(local_98,puVar17);
            if (local_138 == puStack_130) {
              FUN_18009bb20(&local_140,local_138,puVar13);
            }
            else {
              *local_138 = 0;
              local_138[1] = 0;
              local_138[2] = 0;
              local_138[3] = 0;
              uVar5 = puVar13[1];
              uVar6 = puVar13[2];
              uVar2 = puVar13[3];
              *(undefined4 *)local_138 = *puVar13;
              *(undefined4 *)((longlong)local_138 + 4) = uVar5;
              *(undefined4 *)(local_138 + 1) = uVar6;
              *(undefined4 *)((longlong)local_138 + 0xc) = uVar2;
              uVar7 = *(undefined8 *)(puVar13 + 6);
              local_138[2] = *(undefined8 *)(puVar13 + 4);
              local_138[3] = uVar7;
              *(undefined8 *)(puVar13 + 4) = 0;
              *(undefined8 *)(puVar13 + 6) = 0xf;
              *(undefined1 *)puVar13 = 0;
              local_138 = local_138 + 4;
            }
            FUN_18000f890(local_98);
            uVar18 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar18;
          } while ((int)uVar18 < param_7);
        }
        DAT_180cd040c = uVar8;
        FUN_1803133e0(param_2,&local_1a8);
      }
      FUN_18000f890(&local_c8);
      FUN_180068f30(&local_e0);
      FUN_18000f890(&local_108);
      FUN_18000f890(&local_128);
      FUN_1800288b0(&local_140);
      FUN_18000f890(&local_168);
      FUN_1800288b0(&uStack_190);
      FUN_1800288b0(&local_1a8);
    }
  }
  return;
}



/* ===== 180313ad0 FUN_180313ad0 ===== */

void FUN_180313ad0(longlong param_1)

{
  FUN_18000f890(param_1 + 0xe0);
  FUN_180068f30(param_1 + 200);
  FUN_18000f890(param_1 + 0xa0);
  FUN_18000f890(param_1 + 0x80);
  FUN_1800288b0(param_1 + 0x68);
  FUN_18000f890(param_1 + 0x40);
  FUN_1800288b0(param_1 + 0x18);
  FUN_1800288b0(param_1);
  return;
}



/* ===== 180313b40 FUN_180313b40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180313b40(char *param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  char *pcVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 ****ppppuVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uStack_320;
  undefined1 auStack_318 [8];
  undefined1 auStack_310 [24];
  undefined1 local_2f8;
  uint local_2f4;
  int local_2f0;
  longlong local_2e8;
  undefined8 *local_2e0;
  undefined1 local_2d8 [16];
  longlong local_2c8 [8];
  undefined8 ****local_288 [2];
  ulonglong local_278;
  ulonglong local_270;
  undefined8 local_268;
  undefined8 *puStack_260;
  undefined8 *local_258;
  undefined8 uStack_250;
  longlong local_248;
  longlong lStack_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined8 *local_1f8;
  undefined8 *puStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined8 local_158;
  undefined8 *puStack_150;
  undefined8 *local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_318;
  uVar21 = 0;
  uVar22 = 0;
  local_2f4 = 0;
  puVar17 = auStack_318;
  if ((param_1 == (char *)0x0) ||
     (pcVar7 = param_1, puVar17 = auStack_318, param_1 == (char *)0xffffffffffffffff))
  goto LAB_180314304;
  while (*pcVar7 != '\0') {
    if (((*pcVar7 == '#') && (pcVar7[1] == '#')) ||
       (pcVar7 = pcVar7 + 1, pcVar7 == (char *)0xffffffffffffffff)) break;
  }
  puVar17 = auStack_318;
  if ((pcVar7 == param_1) || (puVar17 = auStack_318, param_4 < 1)) goto LAB_180314304;
  local_2f0 = param_4;
  local_2e8 = param_2;
  local_2e0 = param_3;
  lVar8 = FUN_1800fbe90(*param_3);
  puVar17 = auStack_318;
  if (lVar8 == 0) goto LAB_180314304;
  FUN_180066a20(local_288,"multi|",lVar8);
  uVar19 = 0xcbf29ce484222325;
  if (DAT_180cd0f0c == '\0') {
    ppppuVar13 = local_288;
    if (0xf < local_270) {
      ppppuVar13 = local_288[0];
    }
    uVar12 = 0;
    if (local_278 != 0) {
      do {
        uVar19 = (uVar19 ^ *(byte *)((longlong)ppppuVar13 + uVar12)) * 0x100000001b3;
        uVar12 = uVar12 + 1;
      } while (uVar12 < local_278);
    }
    lVar8 = FUN_1800268a0(&DAT_180ca1900,local_2d8,local_288,uVar19);
    puVar17 = auStack_318;
    if (*(longlong *)(lVar8 + 8) == 0) goto LAB_180313c73;
  }
  else {
LAB_180313c73:
    uVar18 = DAT_180cd040c;
    local_2f8 = DAT_180cd040c;
    DAT_180cd040c = 1;
    local_268 = 0;
    puStack_260 = (undefined8 *)0x0;
    local_258 = (undefined8 *)0x0;
    uStack_250 = 0;
    local_248 = 0;
    lStack_240 = 0;
    local_238 = 0;
    local_230 = 0;
    uStack_220 = 0;
    local_218 = 0;
    local_210 = 0xf;
    local_228 = 0;
    local_208 = 0;
    local_200 = 0;
    local_1f8 = (undefined8 *)0x0;
    puStack_1f0 = (undefined8 *)0x0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0xf;
    local_1e8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0xf;
    local_1c8 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    uStack_180 = 0;
    local_178 = 0;
    local_170 = 0xf;
    local_188 = 0;
    local_168 = 0;
    cVar6 = FUN_180312e80(&local_268);
    puVar17 = auStack_318;
    if (cVar6 == '\0') {
      DAT_180cd040c = uVar18;
    }
    else {
      puVar9 = (undefined4 *)FUN_1802b3fe0(local_2c8,param_1);
      if (puStack_260 == local_258) {
        FUN_18009bb20(&local_268,puStack_260,puVar9);
      }
      else {
        *puStack_260 = 0;
        puStack_260[1] = 0;
        puStack_260[2] = 0;
        puStack_260[3] = 0;
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        *(undefined4 *)puStack_260 = *puVar9;
        *(undefined4 *)((longlong)puStack_260 + 4) = uVar3;
        *(undefined4 *)(puStack_260 + 1) = uVar4;
        *(undefined4 *)((longlong)puStack_260 + 0xc) = uVar5;
        uVar3 = puVar9[5];
        uVar4 = puVar9[6];
        uVar5 = puVar9[7];
        *(undefined4 *)(puStack_260 + 2) = puVar9[4];
        *(undefined4 *)((longlong)puStack_260 + 0x14) = uVar3;
        *(undefined4 *)(puStack_260 + 3) = uVar4;
        *(undefined4 *)((longlong)puStack_260 + 0x1c) = uVar5;
        *(undefined8 *)(puVar9 + 4) = 0;
        *(undefined8 *)(puVar9 + 6) = 0xf;
        *(undefined1 *)puVar9 = 0;
        puStack_260 = puStack_260 + 4;
      }
      FUN_18000f890(local_2c8);
      puVar16 = auStack_318;
      puVar17 = auStack_318;
      local_238 = CONCAT44(local_238._4_4_,4);
      DAT_180cd040c = uVar18;
      while( true ) {
        uVar19 = (ulonglong)uVar21;
        plVar10 = (longlong *)FUN_1800fbe90(param_3[uVar19]);
        if (plVar10 == (longlong *)0x0) {
          local_2c8[1] = 0;
          local_2c8[2] = 0;
          local_2c8[3] = 0xf;
          local_2c8[0] = 0;
          plVar15 = local_2c8;
          uVar22 = uVar22 | 2;
        }
        else {
          local_2c8[4] = 0;
          local_2c8[5] = 0;
          local_2c8[6] = 0;
          local_2c8[7] = 0;
          uVar12 = plVar10[2];
          if ((ulonglong)plVar10[3] < 0x10) {
            plVar15 = plVar10;
          }
          else {
            plVar15 = (longlong *)*plVar10;
          }
          if (0x7fffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_180011990();
          }
          if (uVar12 < 0x10) {
            local_2c8[7] = 0xf;
            local_2c8[4] = *plVar15;
            local_2c8[5] = plVar15[1];
            local_2c8[6] = uVar12;
          }
          else {
            uVar20 = uVar12 | 0xf;
            if (uVar20 < 0x8000000000000000) {
              if (uVar20 < 0x16) {
                uVar20 = 0x16;
              }
            }
            else {
              uVar20 = 0x7fffffffffffffff;
            }
            local_2c8[4] = FUN_18000fb70(uVar20 + 1);
            local_2c8[6] = uVar12;
            local_2c8[7] = uVar20;
            FUN_180540530(local_2c8[4],plVar15,uVar12 + 1);
          }
          plVar15 = local_2c8 + 4;
          uVar22 = uVar22 | 1;
          param_4 = local_2f0;
          uVar18 = local_2f8;
        }
        local_2f4 = uVar22;
        if (local_248 == lStack_240) {
          FUN_180028f00(&uStack_250,local_248);
        }
        else {
          FUN_180024b50(local_248,plVar15);
          local_248 = local_248 + 0x20;
        }
        if (((uVar22 & 2) != 0) && (uVar22 = uVar22 & 0xfffffffd, 0xf < (ulonglong)local_2c8[3]))
        break;
LAB_180313f10:
        if (((uVar22 & 1) != 0) && (uVar22 = uVar22 & 0xfffffffe, 0xf < (ulonglong)local_2c8[7])) {
          uVar12 = local_2c8[7] + 1;
          lVar8 = local_2c8[4];
          if (0xfff < uVar12) {
            lVar8 = *(longlong *)(local_2c8[4] + -8);
            if (0x1f < (local_2c8[4] - lVar8) - 8U) goto LAB_180314292;
            uVar12 = local_2c8[7] + 0x28;
          }
          thunk_FUN_1803d64e0(lVar8,uVar12);
        }
        lVar8 = local_2e8;
        DAT_180cd040c = 1;
        puVar1 = *(undefined1 **)(local_2e8 + uVar19 * 8);
        puVar14 = &DAT_18058b643;
        if (puVar1 != (undefined1 *)0x0) {
          puVar14 = puVar1;
        }
        puVar9 = (undefined4 *)FUN_1802b3fe0(local_2c8,puVar14);
        if (local_1f8 == puStack_1f0) {
          FUN_18009bb20(&local_200,local_1f8,puVar9);
        }
        else {
          *local_1f8 = 0;
          local_1f8[1] = 0;
          local_1f8[2] = 0;
          local_1f8[3] = 0;
          uVar3 = puVar9[1];
          uVar4 = puVar9[2];
          uVar5 = puVar9[3];
          *(undefined4 *)local_1f8 = *puVar9;
          *(undefined4 *)((longlong)local_1f8 + 4) = uVar3;
          *(undefined4 *)(local_1f8 + 1) = uVar4;
          *(undefined4 *)((longlong)local_1f8 + 0xc) = uVar5;
          uVar3 = puVar9[5];
          uVar4 = puVar9[6];
          uVar5 = puVar9[7];
          *(undefined4 *)(local_1f8 + 2) = puVar9[4];
          *(undefined4 *)((longlong)local_1f8 + 0x14) = uVar3;
          *(undefined4 *)(local_1f8 + 3) = uVar4;
          *(undefined4 *)((longlong)local_1f8 + 0x1c) = uVar5;
          *(undefined8 *)(puVar9 + 4) = 0;
          *(undefined8 *)(puVar9 + 6) = 0xf;
          *(undefined1 *)puVar9 = 0;
          local_1f8 = local_1f8 + 4;
        }
        FUN_18000f890();
        DAT_180cd040c = uVar18;
        if (plVar10 != (longlong *)0x0) {
          if (DAT_180cd0f0c == '\0') {
            plVar15 = plVar10;
            if (0xf < (ulonglong)plVar10[3]) {
              plVar15 = (longlong *)*plVar10;
            }
            uVar12 = 0;
            uVar20 = 0xcbf29ce484222325;
            if (plVar10[2] != 0) {
              do {
                uVar20 = (uVar20 ^ *(byte *)(uVar12 + (longlong)plVar15)) * 0x100000001b3;
                uVar12 = uVar12 + 1;
              } while (uVar12 < (ulonglong)plVar10[2]);
              param_4 = local_2f0;
            }
            lVar11 = FUN_1800268a0(&DAT_180ca1900,local_2d8,plVar10,uVar20);
            if (*(longlong *)(lVar11 + 8) != 0) goto LAB_180314279;
          }
          local_158 = 0;
          puStack_150 = (undefined8 *)0x0;
          local_148 = (undefined8 *)0x0;
          uStack_140 = 0;
          local_138 = 0;
          lStack_130 = 0;
          local_128 = 0;
          local_120 = 0;
          uStack_110 = 0;
          local_108 = 0;
          local_100 = 0xf;
          local_118 = 0;
          local_f8 = 0;
          local_f0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          uStack_d0 = 0;
          local_c8 = 0;
          local_c0 = 0xf;
          local_d8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          local_a0 = 0xf;
          local_b8 = 0;
          local_98 = 0;
          local_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          uStack_70 = 0;
          local_68 = 0;
          local_60 = 0xf;
          local_78 = 0;
          local_58 = 0;
          FUN_180067240(&local_158,&local_268);
          DAT_180cd040c = 1;
          puVar9 = (undefined4 *)FUN_1802b3fe0(local_2c8,*(undefined8 *)(lVar8 + uVar19 * 8));
          if (puStack_150 == local_148) {
            FUN_18009bb20(&local_158,puStack_150,puVar9);
          }
          else {
            *puStack_150 = 0;
            puStack_150[1] = 0;
            puStack_150[2] = 0;
            puStack_150[3] = 0;
            uVar3 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[3];
            *(undefined4 *)puStack_150 = *puVar9;
            *(undefined4 *)((longlong)puStack_150 + 4) = uVar3;
            *(undefined4 *)(puStack_150 + 1) = uVar4;
            *(undefined4 *)((longlong)puStack_150 + 0xc) = uVar5;
            uVar3 = puVar9[5];
            uVar4 = puVar9[6];
            uVar5 = puVar9[7];
            *(undefined4 *)(puStack_150 + 2) = puVar9[4];
            *(undefined4 *)((longlong)puStack_150 + 0x14) = uVar3;
            *(undefined4 *)(puStack_150 + 3) = uVar4;
            *(undefined4 *)((longlong)puStack_150 + 0x1c) = uVar5;
            *(undefined8 *)(puVar9 + 4) = 0;
            *(undefined8 *)(puVar9 + 6) = 0xf;
            *(undefined1 *)puVar9 = 0;
            puStack_150 = puStack_150 + 4;
          }
          FUN_18000f890(local_2c8);
          if (local_138 == lStack_130) {
            DAT_180cd040c = uVar18;
            FUN_180028f00(&uStack_140,local_138,plVar10);
          }
          else {
            DAT_180cd040c = uVar18;
            FUN_180024b50(local_138,plVar10);
            local_138 = local_138 + 0x20;
          }
          local_128 = CONCAT44(local_128._4_4_,1);
          FUN_1803133e0(plVar10,&local_158);
          FUN_18000f890(&local_78);
          FUN_180068f30(&local_90);
          FUN_18000f890(&local_b8);
          FUN_18000f890(&local_d8);
          FUN_1800288b0(&local_f0);
          FUN_18000f890(&local_118);
          FUN_1800288b0(&uStack_140);
          FUN_1800288b0(&local_158);
        }
LAB_180314279:
        uVar21 = uVar21 + 1;
        if (param_4 <= (int)uVar21) goto LAB_180314299;
        param_3 = local_2e0;
      }
      uVar12 = local_2c8[3] + 1;
      lVar8 = local_2c8[0];
      if (uVar12 < 0x1000) {
LAB_180313f0a:
        thunk_FUN_1803d64e0(lVar8,uVar12);
        goto LAB_180313f10;
      }
      lVar8 = *(longlong *)(local_2c8[0] + -8);
      if ((local_2c8[0] - lVar8) - 8U < 0x20) {
        uVar12 = local_2c8[3] + 0x28;
        goto LAB_180313f0a;
      }
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar16 = auStack_310;
LAB_180314292:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar17 = puVar16 + 8;
LAB_180314299:
      *(undefined8 *)(puVar17 + -8) = 0x1803142a6;
      FUN_1803133e0(local_288,&local_268);
    }
    *(undefined8 *)(puVar17 + -8) = 0x1803142bb;
    FUN_18000f890(&local_188);
    *(undefined8 *)(puVar17 + -8) = 0x1803142c4;
    FUN_180068f30(&local_1a0);
    *(undefined8 *)(puVar17 + -8) = 0x1803142cd;
    FUN_18000f890(&local_1c8);
    *(undefined8 *)(puVar17 + -8) = 0x1803142d6;
    FUN_18000f890(&local_1e8);
    *(undefined8 *)(puVar17 + -8) = 0x1803142df;
    FUN_1800288b0(&local_200);
    *(undefined8 *)(puVar17 + -8) = 0x1803142e8;
    FUN_18000f890(&local_228);
    *(undefined8 *)(puVar17 + -8) = 0x1803142f1;
    FUN_1800288b0(&uStack_250);
    *(undefined8 *)(puVar17 + -8) = 0x1803142fa;
    FUN_1800288b0(&local_268);
  }
  *(undefined8 *)(puVar17 + -8) = 0x180314304;
  FUN_18000f890(local_288);
LAB_180314304:
  *(undefined8 *)(puVar17 + -8) = 0x180314313;
  return;
}



/* ===== 180314340 FUN_180314340 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180314340(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  undefined2 local_128;
  undefined1 local_126;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_98 [16];
  longlong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  uVar1 = DAT_1809f36b8;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_158;
  DAT_1809f36b8 = 0x438e8000;
  DAT_1809f36bc = 0x7f7fffff;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  snprintf(&local_78,0x30,"##control_registry_%d",DAT_1811071d8 - DAT_1811071d0 >> 5);
  lVar3 = DAT_180ca0a50;
  *(undefined4 *)(DAT_180ca0a50 + 0x1f48) = 0xc6ea6000;
  *(undefined4 *)(lVar3 + 0x1f4c) = 0xc6ea6000;
  *(undefined8 *)(lVar3 + 0x1f50) = 0;
  *(undefined4 *)(lVar3 + 0x1f3c) = 1;
  *(uint *)(lVar3 + 0x1f38) = *(uint *)(lVar3 + 0x1f38) | 3;
  *(undefined4 *)(lVar3 + 0x1f58) = uVar1;
  *(undefined4 *)(lVar3 + 0x1f5c) = 0x43c80000;
  *(undefined4 *)(lVar3 + 8000) = 1;
  FUN_1803e4f20(&local_78,0,0x333ab);
  local_138 = 0;
  local_130 = 0;
  FUN_1803e0300(&local_130,&local_138,0);
  local_128 = _DAT_1809f72e0;
  local_126 = DAT_1809f72e2;
  local_124 = DAT_1809f72e4;
  local_120 = DAT_1809f72e8;
  local_11c = DAT_1809f72ec;
  local_118 = CONCAT44(DAT_1809f72f4,DAT_1809f72f0);
  uStack_110 = CONCAT44(DAT_1809f72fc,DAT_1809f72f8);
  local_108 = DAT_1809f7300;
  local_104 = DAT_1809f7304;
  FUN_180024b50(local_100,&DAT_1809f7308);
  local_e0 = _DAT_1809f5b40;
  uStack_d8 = _DAT_1809f5b48;
  local_d0 = DAT_1809f5b50;
  local_c8 = _DAT_1808ad2d0;
  uStack_c0 = _UNK_1808ad2d8;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 0;
  if (DAT_181107158 == DAT_181107160) {
    FUN_180354940(DAT_181107158,DAT_181107158,&local_128);
  }
  else {
    FUN_1803598d0(DAT_181107158,&local_128);
    DAT_181107158 = DAT_181107158 + 0x88;
  }
  FUN_18000f890(local_100);
  FUN_180312140(param_1);
  *(undefined1 *)(DAT_181107018 + -1) = 1;
  FUN_180313160(local_98);
  if (local_88 != 0) {
    if (DAT_181107658 == DAT_181107660) {
      FUN_180028f00(&DAT_181107650,DAT_181107658,local_98);
    }
    else {
      FUN_180024b50(DAT_181107658,local_98);
      DAT_181107658 = DAT_181107658 + 0x20;
    }
  }
  FUN_18000f890(local_98);
  uVar1 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  uVar2 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
  local_128 = 0x100;
  local_126 = 1;
  local_124 = DAT_1808ac8e4;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_104 = DAT_1808aca44;
  local_f0 = 0;
  local_e8 = 0xf;
  local_100._11_5_ = 0;
  local_100._0_11_ = SUB1211(ZEXT812(0),1);
  local_100 = local_100 << 8;
  _DAT_1809f72e0 = 0x100;
  DAT_1809f72e2 = 1;
  DAT_1809f72e4 = DAT_1808ac8e4;
  DAT_1809f72e8 = 0;
  DAT_1809f72ec = 0;
  DAT_1809f72f0 = 0;
  DAT_1809f72f4 = 0.0;
  DAT_1809f72f8 = 0;
  DAT_1809f72fc = 0;
  DAT_1809f7300 = 0;
  DAT_1809f7304 = DAT_1808aca44;
  FUN_18002ba60(&DAT_1809f7308,local_100);
  FUN_18000f890(local_100);
  lVar4 = DAT_180ca0a50;
  _DAT_1809f72e0 = 1;
  DAT_1809f72e2 = 0;
  DAT_1809f72e4 = 0x41400000;
  DAT_1809f7304 = 0x41fda5e3;
  lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if ((*(longlong *)(lVar3 + 0x1c8) != 0) ||
     (lVar5 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar5 = 0x250;
  }
  DAT_1809f72f4 = *(float *)(lVar5 + lVar3) - *(float *)(lVar3 + 0x118);
  DAT_1809f72f0 = uVar1;
  DAT_1809f72f8 = uVar2;
  DAT_1809f72fc = uVar2;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  DAT_1809f7300 = *(undefined4 *)(*(longlong *)(lVar4 + 0x14f8) + 0x15c);
  *(undefined1 *)(*(longlong *)(lVar4 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x14f8) + 0x2c8);
  FUN_180401570(lVar4 + 0x88,lVar3,2);
  FUN_180401a80(lVar4 + 0x88,lVar4,1);
  return 1;
}



/* ===== 1803147b0 FUN_1803147b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803147b0(char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5,longlong param_6,int param_7)

{
  int iVar1;
  size_t sVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 ****ppppuVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined1 auStack_268 [32];
  undefined1 local_248;
  undefined *local_240;
  longlong local_238 [2];
  undefined8 ****local_228 [2];
  ulonglong local_218;
  ulonglong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined8 *puStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  uVar9 = DAT_180cd040c;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_268;
  local_238[0] = CONCAT44(local_238[0]._4_4_,param_4);
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  lStack_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  uStack_1a0 = 0;
  local_198 = _DAT_1808ad410;
  uStack_190 = _UNK_1808ad418;
  local_1a8 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = (undefined8 *)0x0;
  puStack_170 = (undefined8 *)0x0;
  uStack_160 = 0;
  local_158 = _DAT_1808ad410;
  uStack_150 = _UNK_1808ad418;
  local_168 = 0;
  uStack_140 = 0;
  local_138 = _DAT_1808ad410;
  uStack_130 = _UNK_1808ad418;
  local_148 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  uStack_100 = 0;
  local_f8 = _DAT_1808ad410;
  uStack_f0 = _UNK_1808ad418;
  local_108 = 0;
  local_e8 = 0;
  local_248 = DAT_180cd040c;
  DAT_180cd040c = 1;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  sVar2 = strlen(param_1);
  FUN_1800133a0(&local_b8,param_1,sVar2);
  FUN_1802b3fe0(local_98,param_2);
  FUN_18034d0e0(&local_1e8,&local_b8,2);
  FUN_1804eced0(&local_b8,0x20,2,thunk_FUN_18000f890);
  uVar8 = 0;
  if (0 < param_7) {
    do {
      if (param_5 == 0) break;
      puVar3 = (undefined8 *)FUN_1802b3fe0(local_78,*(undefined8 *)(param_5 + (ulonglong)uVar8 * 8))
      ;
      if (local_178 == puStack_170) {
        FUN_18009bb20(&local_180,local_178,puVar3);
      }
      else {
        *local_178 = 0;
        local_178[1] = 0;
        local_178[2] = 0;
        local_178[3] = 0;
        uVar11 = puVar3[1];
        *local_178 = *puVar3;
        local_178[1] = uVar11;
        uVar11 = puVar3[3];
        local_178[2] = puVar3[2];
        local_178[3] = uVar11;
        puVar3[2] = 0;
        puVar3[3] = 0xf;
        *(undefined1 *)puVar3 = 0;
        local_178 = local_178 + 4;
      }
      FUN_18000f890(local_78);
      local_240 = (undefined *)
                  CONCAT44(local_240._4_4_,(float)*(int *)(param_6 + (ulonglong)uVar8 * 4));
      FUN_180066e60(&local_120,&local_240);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < param_7);
    uVar9 = local_248;
  }
  DAT_180cd040c = uVar9;
  if (local_1c8 == lStack_1c0) {
    FUN_180028f00(&uStack_1d0,local_1c8,param_3);
  }
  else {
    FUN_180024b50(local_1c8,param_3);
    local_1c8 = local_1c8 + 0x20;
  }
  local_1b8 = CONCAT44(local_1b8._4_4_,(undefined4)local_238[0]);
  sVar2 = strlen(param_1);
  FUN_180029840(&local_168,param_1,sVar2);
  local_128 = 0xfffffffffffffffe;
  local_240 = &DAT_1809f5a50;
  iVar1 = FUN_1804e4d70(&DAT_1809f5a50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f5a9c == 0x7fffffff) {
    DAT_1809f5a9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  uStack_200 = 0;
  local_1f8 = _DAT_1808ad440;
  uStack_1f0 = _UNK_1808ad448;
  local_208 = (ulonglong)CONCAT14(DAT_180767258,DAT_180767254);
  sVar2 = strlen(param_1);
  puVar3 = (undefined8 *)FUN_1800134a0(&local_208,param_1,sVar2);
  local_b8 = *puVar3;
  uStack_b0 = puVar3[1];
  local_a8 = puVar3[2];
  uStack_a0 = puVar3[3];
  *(undefined1 *)puVar3 = 0;
  uVar5 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  puVar3 = (undefined8 *)FUN_1800134a0(&local_b8,&DAT_1806e9100,1);
  local_d8 = *puVar3;
  uStack_d0 = puVar3[1];
  local_c8 = puVar3[2];
  uStack_c0 = puVar3[3];
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  FUN_1800667a0(local_228,&local_d8,param_3);
  FUN_18000f890(&local_d8);
  FUN_18000f890(&local_b8);
  FUN_18000f890(&local_208);
  ppppuVar6 = local_228;
  if (0xf < local_210) {
    ppppuVar6 = local_228[0];
  }
  uVar10 = 0xcbf29ce484222325;
  if (local_218 != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)((longlong)ppppuVar6 + uVar5)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_218);
  }
  lVar4 = FUN_1800268a0(&DAT_180ca1900,local_238,local_228,uVar10);
  lVar7 = DAT_180ca1908;
  if (*(longlong *)(lVar4 + 8) != 0) {
    lVar7 = *(longlong *)(lVar4 + 8);
  }
  if (lVar7 == DAT_180ca1908) {
    local_238[0] = (DAT_181107368 - DAT_181107360 >> 3) * 0xf83e0f83e0f83e1;
    uVar11 = FUN_180346cb0(&DAT_180ca1900,local_78,local_228,local_238);
    if (DAT_181107368 == DAT_181107370) {
      FUN_180353520(uVar11,DAT_181107368,&local_1e8);
    }
    else {
      FUN_1803594f0(DAT_181107368,&local_1e8);
      DAT_181107368 = DAT_181107368 + 0x108;
    }
  }
  else {
    FUN_180313620(*(longlong *)(lVar7 + 0x30) * 0x108 + DAT_181107360,&local_1e8);
  }
  FUN_18000f890(local_228);
  FUN_1804e4e90(&DAT_1809f5a50);
  FUN_18000f890(&local_108);
  FUN_180068f30(&local_120);
  FUN_18000f890(&local_148);
  FUN_18000f890(&local_168);
  FUN_1800288b0(&local_180);
  FUN_18000f890(&local_1a8);
  FUN_1800288b0(&uStack_1d0);
  FUN_1800288b0(&local_1e8);
  return;
}



/* ===== 180314cf0 FUN_180314cf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180314cf0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_28 = 10;
  local_20 = 0xf;
  local_38 = (char *)s_menu_scale_1806e7670._0_8_;
  uStack_30 = (ulonglong)(ushort)s_menu_scale_1806e7670._8_2_;
  local_48 = 7;
  local_50 = &DAT_1806a0b88;
  local_58 = &PTR_DAT_180658570;
  FUN_1803147b0("settings","menu scale",&local_38,3);
  if (0xf < local_20) {
    uVar6 = local_20 + 1;
    pcVar5 = local_38;
    if (0xfff < uVar6) {
      pcVar5 = *(char **)(local_38 + -8);
      if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar5)) goto LAB_18031527c;
      uVar6 = local_20 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar6);
  }
  local_28 = 9;
  local_20 = 0xf;
  local_38 = (char *)s_esp_scale_1806f39f0._0_8_;
  uStack_30 = (ulonglong)(byte)s_esp_scale_1806f39f0[8];
  local_48 = 6;
  local_50 = &DAT_180659b98;
  local_58 = &PTR_DAT_1806a0b10;
  FUN_1803147b0("settings","esp scale",&local_38,3);
  if (0xf < local_20) {
    uVar6 = local_20 + 1;
    pcVar5 = local_38;
    if (0xfff < uVar6) {
      pcVar5 = *(char **)(local_38 + -8);
      if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar5)) goto LAB_18031527c;
      uVar6 = local_20 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar6);
  }
  local_28 = 0xd;
  local_20 = 0xf;
  local_38 = (char *)s_widgets_scale_1806f3980._0_8_;
  uStack_30 = (ulonglong)CONCAT14(s_widgets_scale_1806f3980[0xc],s_widgets_scale_1806f3980._8_4_);
  local_48 = 6;
  local_50 = &DAT_1806585c8;
  local_58 = &PTR_DAT_180659580;
  FUN_1803147b0("settings","windows scale",&local_38,3);
  if (0xf < local_20) {
    uVar6 = local_20 + 1;
    pcVar5 = local_38;
    if (0xfff < uVar6) {
      pcVar5 = *(char **)(local_38 + -8);
      if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar5)) goto LAB_18031527c;
      uVar6 = local_20 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar6);
  }
  uStack_30 = 0;
  local_28 = 5;
  local_20 = 0xf;
  local_38 = (char *)(ulonglong)CONCAT14(s_units_1806e1064[4],s_units_1806e1064._0_4_);
  local_48 = 3;
  local_50 = &DAT_180658488;
  local_58 = &PTR_DAT_180658558;
  FUN_1803147b0("settings","units",&local_38,3);
  if (0xf < local_20) {
    uVar6 = local_20 + 1;
    pcVar5 = local_38;
    if (0xfff < uVar6) {
      pcVar5 = *(char **)(local_38 + -8);
      if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar5)) goto LAB_18031527c;
      uVar6 = local_20 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar6);
  }
  local_28 = 10;
  local_20 = 0xf;
  local_38 = (char *)s__safe_mode_180767210._0_8_;
  uStack_30 = (ulonglong)(ushort)s__safe_mode_180767210._8_2_;
  local_48 = 3;
  local_50 = &DAT_1806594f0;
  local_58 = &PTR_s_disabled_1806a0bb0;
  FUN_1803147b0("settings","safe mode",&local_38,3);
  if (0xf < local_20) {
    uVar6 = local_20 + 1;
    pcVar5 = local_38;
    if (0xfff < uVar6) {
      pcVar5 = *(char **)(local_38 + -8);
      if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar5)) goto LAB_18031527c;
      uVar6 = local_20 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar6);
  }
  local_38 = (char *)0x0;
  uStack_30 = 0;
  local_38 = (char *)FUN_18000fb70(0x20);
  uVar4 = s__synchronization_180767240._12_4_;
  uVar3 = s__synchronization_180767240._8_4_;
  uVar2 = s__synchronization_180767240._4_4_;
  local_28 = 0x10;
  local_20 = 0x1f;
  *(undefined4 *)local_38 = s__synchronization_180767240._0_4_;
  *(undefined4 *)(local_38 + 4) = uVar2;
  *(undefined4 *)(local_38 + 8) = uVar3;
  *(undefined4 *)(local_38 + 0xc) = uVar4;
  local_38[0x10] = '\0';
  local_48 = 0;
  local_50 = &DAT_180658c50;
  local_58 = (undefined **)0x0;
  FUN_1803147b0("settings","synchronization",&local_38,1);
  if (0xf < local_20) {
    uVar6 = local_20 + 1;
    pcVar5 = local_38;
    if (0xfff < uVar6) {
      pcVar5 = *(char **)(local_38 + -8);
      if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar5)) goto LAB_18031527c;
      uVar6 = local_20 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar6);
  }
  local_28 = 0xf;
  local_20 = 0xf;
  local_38 = (char *)s__developer_mode_180767230._0_8_;
  uStack_30 = (ulonglong)
              CONCAT16(s__developer_mode_180767230[0xe],
                       CONCAT24(s__developer_mode_180767230._12_2_,s__developer_mode_180767230._8_4_
                               ));
  local_48 = 0;
  local_50 = &DAT_180658c50;
  local_58 = (undefined **)0x0;
  FUN_1803147b0("settings","developer mode",&local_38,1);
  if (0xf < local_20) {
    uVar6 = local_20 + 1;
    pcVar5 = local_38;
    if (0xfff < uVar6) {
      pcVar5 = *(char **)(local_38 + -8);
      if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar5)) goto LAB_18031527c;
      uVar6 = local_20 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar6);
  }
  local_38 = (char *)0x0;
  uStack_30 = 0;
  local_38 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_esp_universal_scaling_1806f39d8._12_4_;
  uVar3 = s_esp_universal_scaling_1806f39d8._8_4_;
  uVar2 = s_esp_universal_scaling_1806f39d8._4_4_;
  local_28 = 0x15;
  local_20 = 0x1f;
  *(undefined4 *)local_38 = s_esp_universal_scaling_1806f39d8._0_4_;
  *(undefined4 *)(local_38 + 4) = uVar2;
  *(undefined4 *)(local_38 + 8) = uVar3;
  *(undefined4 *)(local_38 + 0xc) = uVar4;
  *(ulonglong *)(local_38 + 0xd) =
       CONCAT53(s_esp_universal_scaling_1806f39d8._16_5_,s_esp_universal_scaling_1806f39d8._13_3_);
  local_38[0x15] = '\0';
  local_48 = 0;
  local_50 = &DAT_180658c50;
  local_58 = (undefined **)0x0;
  FUN_1803147b0("esp options","universal dpi scaling",&local_38,1);
  if (0xf < local_20) {
    uVar6 = local_20 + 1;
    pcVar5 = local_38;
    if (0xfff < uVar6) {
      pcVar5 = *(char **)(local_38 + -8);
      if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar5)) {
LAB_18031527c:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = local_20 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar6);
  }
  return;
}



/* ===== 180315290 FUN_180315290 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180315290(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 *******pppppppuVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 *******pppppppuVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128 [2];
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 *******local_f0 [2];
  undefined8 local_e0;
  ulonglong local_d8;
  undefined8 *******local_c8;
  longlong lStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  ulonglong local_88;
  
  uVar8 = DAT_1811076c0;
  uVar4 = DAT_1809f73f0;
  local_88 = DAT_180919500 ^ (ulonglong)auStack_168;
  local_c8 = (undefined8 *******)0x0;
  lStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  plVar13 = (longlong *)&DAT_1809f73e0;
  if (0xf < DAT_1809f73f8) {
    plVar13 = _DAT_1809f73e0;
  }
  if (0x7fffffffffffffff < DAT_1809f73f0) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (DAT_1809f73f0 < 0x10) {
    local_b8 = DAT_1809f73f0;
    uVar19 = 0xf;
    local_b0 = 0xf;
    pppppppuVar12 = (undefined8 *******)*plVar13;
    lStack_c0 = plVar13[1];
    local_c8 = pppppppuVar12;
  }
  else {
    uVar11 = DAT_1809f73f0 | 0xf;
    uVar19 = 0x7fffffffffffffff;
    if ((uVar11 < 0x8000000000000000) && (uVar19 = uVar11, uVar11 < 0x16)) {
      uVar19 = 0x16;
    }
    pppppppuVar12 = (undefined8 *******)FUN_18000fb70(uVar19 + 1);
    local_b8 = uVar4;
    local_c8 = pppppppuVar12;
    local_b0 = uVar19;
    FUN_180540530(pppppppuVar12,plVar13,uVar4 + 1);
  }
  uVar7 = DAT_181107484;
  local_144 = DAT_1811074f8;
  local_140 = DAT_181107674;
  local_118 = DAT_1809f72e0;
  local_117 = DAT_1809f72e1;
  local_116 = DAT_1809f72e2;
  local_114 = DAT_1809f72e4;
  local_110 = DAT_1809f72e8;
  local_10c = DAT_1809f72ec;
  local_108 = _DAT_1809f72f0;
  uStack_100 = _DAT_1809f72f8;
  local_f8 = DAT_1809f7300;
  local_f4 = DAT_1809f7304;
  FUN_180024b50(local_f0,&DAT_1809f7308);
  uVar6 = _DAT_18110717c;
  uVar5 = _DAT_181107174;
  uVar3 = DAT_1809f5b50;
  uVar2 = _DAT_1809f5b48;
  uVar15 = _DAT_1809f5b40;
  local_a8 = DAT_181107168;
  uStack_a4 = _DAT_18110716c;
  uStack_a0 = DAT_181107170;
  uStack_9c = _DAT_181107174;
  uStack_94 = _DAT_18110717c;
  local_148 = DAT_180cd0f08;
  iVar10 = FUN_1804e4d70(&DAT_1809f5a50);
  lVar14 = DAT_181107368;
  if (iVar10 != 0) {
LAB_180315b61:
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f5a9c != 0x7fffffff) {
    lVar18 = DAT_181107360;
    if (DAT_181107360 != DAT_181107368) {
      do {
        FUN_180313ad0(lVar18);
        lVar18 = lVar18 + 0x108;
      } while (lVar18 != lVar14);
      DAT_181107368 = DAT_181107360;
    }
    FUN_18002bc20(&DAT_180ca1900);
    FUN_1804e4e90(&DAT_1809f5a50);
    lVar14 = DAT_181107658;
    lVar18 = DAT_181107650;
    if (DAT_181107650 != DAT_181107658) {
      do {
        FUN_18000f890(lVar18);
        lVar18 = lVar18 + 0x20;
      } while (lVar18 != lVar14);
      DAT_181107658 = DAT_181107650;
    }
    DAT_1809f73f0 = 0;
    plVar13 = (longlong *)&DAT_1809f73e0;
    if (0xf < DAT_1809f73f8) {
      plVar13 = _DAT_1809f73e0;
    }
    *(undefined1 *)plVar13 = 0;
    lVar14 = DAT_180ca0a50;
    DAT_180cd0f08 = 0;
    *(undefined4 *)(DAT_180ca0a50 + 0x1f48) = 0xc6ea6000;
    *(undefined4 *)(lVar14 + 0x1f4c) = 0xc6ea6000;
    *(undefined8 *)(lVar14 + 0x1f50) = 0;
    *(undefined4 *)(lVar14 + 0x1f3c) = 1;
    *(uint *)(lVar14 + 0x1f38) = *(uint *)(lVar14 + 0x1f38) | 3;
    *(undefined4 *)(lVar14 + 0x1f58) = 0x44480000;
    *(undefined4 *)(lVar14 + 0x1f5c) = 0x43c80000;
    *(undefined4 *)(lVar14 + 8000) = 1;
    cVar9 = FUN_1803e4f20("##control_registry",0,0x333ab);
    if (cVar9 != '\0') {
      lVar14 = DAT_181107a08;
      if (DAT_181107a08 == 0) {
        lVar14 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      local_138 = *(undefined **)(DAT_180ca0a50 + 0x11f0);
      local_130 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
      local_12c = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
      FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_138);
      FUN_1803e8680(lVar14,DAT_1808ac930,0);
      local_128[0] = 0;
      local_138 = (undefined *)0x0;
      FUN_1803e0300(&local_138,local_128,0);
      DAT_180cd0f0c = 1;
      DAT_1811076c0 = 0;
      DAT_181107674 = 0;
      DAT_1811074f8 = 0;
      DAT_181107484 = 0;
      FUN_1803e8a70(0);
      FUN_180337e50(0);
      FUN_1802b9bd0();
      FUN_1802b8b90();
      iVar10 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar10 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar10 + -1;
      }
      DAT_1811076c0 = 1;
      DAT_181107674 = 0;
      DAT_1811074f8 = 0;
      DAT_181107484 = 0;
      FUN_1803e8a70(1);
      FUN_180337e50(1);
      FUN_1802b9bd0();
      FUN_1802b8b90();
      iVar10 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar10 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar10 + -1;
      }
      DAT_1811076c0 = 2;
      DAT_181107674 = 0;
      DAT_1811074f8 = 0;
      DAT_181107484 = 0;
      FUN_1803e8a70(2);
      FUN_180337e50(2);
      FUN_1802b9bd0();
      FUN_1802b8b90();
      iVar10 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar10 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar10 + -1;
      }
      DAT_1811076c0 = 2;
      DAT_181107674 = 1;
      DAT_1811074f8 = 1;
      DAT_181107484 = 1;
      FUN_1803e8a70(3);
      FUN_180337e50(2);
      FUN_1802b9bd0();
      FUN_1802b8b90();
      iVar10 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar10 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar10 + -1;
      }
      DAT_1811076c0 = 3;
      DAT_181107674 = 0;
      DAT_1811074f8 = 0;
      DAT_181107484 = 0;
      FUN_1803e8a70(4);
      FUN_180337e50(3);
      FUN_1802b9bd0();
      FUN_1802b8b90();
      iVar10 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar10 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar10 + -1;
      }
      DAT_1811076c0 = 5;
      DAT_181107674 = 0;
      DAT_1811074f8 = 0;
      DAT_181107484 = 0;
      FUN_1803e8a70(5);
      FUN_180337e50(5);
      FUN_1802b9bd0();
      FUN_1802b8b90();
      iVar10 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar10 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar10 + -1;
      }
      if (DAT_180cd04aa != '\0') {
        DAT_181107674 = 0;
        DAT_1811074f8 = 0;
        DAT_181107484 = 0;
        DAT_1811076c0 = 3;
        DAT_180cd0d57 = 1;
        FUN_1803e89e0("ambience");
        FUN_1802b8a20(0);
        lVar14 = FUN_180303520();
        FUN_1802fb830(lVar14 + 0x264);
        FUN_1802b9760();
        FUN_1802b9bd0();
        FUN_1802b8b90();
        iVar10 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar10 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar10 + -1;
        }
        DAT_180cd0d57 = 0;
      }
      DAT_180cd0f0c = 0;
      FUN_1803e0390();
      lVar14 = DAT_180ca0a50;
      lVar18 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        lVar1 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
        FUN_1803e8680(*(undefined8 *)(lVar1 + -0x10 + lVar18 * 0x10),
                      *(undefined4 *)(lVar1 + -8 + lVar18 * 0x10),
                      *(undefined4 *)(lVar1 + -4 + lVar18 * 0x10));
        *(int *)(lVar14 + 0x1fe0) = *(int *)(lVar14 + 0x1fe0) + -1;
      }
    }
    FUN_1803e75b0();
    DAT_180cd0f08 = local_148;
    pppppppuVar17 = &local_c8;
    if (0xf < uVar19) {
      pppppppuVar17 = pppppppuVar12;
    }
    DAT_1811076c0 = uVar8;
    FUN_180029840(&DAT_1809f73e0,pppppppuVar17,uVar4);
    DAT_1811074f8 = local_144;
    DAT_181107674 = local_140;
    DAT_1809f72e0 = local_118;
    DAT_1809f72e1 = local_117;
    DAT_1809f72e2 = local_116;
    DAT_1809f72e4 = local_114;
    DAT_1809f72e8 = local_110;
    DAT_1809f72ec = local_10c;
    _DAT_1809f72f0 = local_108;
    _DAT_1809f72f8 = uStack_100;
    DAT_1809f7300 = local_f8;
    DAT_1809f7304 = local_f4;
    pppppppuVar12 = local_f0;
    if (0xf < local_d8) {
      pppppppuVar12 = local_f0[0];
    }
    DAT_181107484 = uVar7;
    FUN_180029840(&DAT_1809f7308,pppppppuVar12,local_e0);
    DAT_181107168 = local_a8;
    _DAT_18110716c = uStack_a4;
    DAT_181107170 = uStack_a0;
    _DAT_1809f5b40 = uVar15;
    _DAT_1809f5b48 = uVar2;
    DAT_1809f5b50 = uVar3;
    _DAT_181107174 = uVar5;
    _DAT_18110717c = uVar6;
    FUN_180314cf0();
    local_138 = &DAT_1809f5a50;
    iVar10 = FUN_1804e4d70(&DAT_1809f5a50);
    lVar14 = DAT_181107368;
    if (iVar10 != 0) goto LAB_180315b61;
    lVar18 = DAT_181107360;
    if (DAT_1809f5a9c != 0x7fffffff) {
      for (; lVar18 != lVar14; lVar18 = lVar18 + 0x108) {
        uVar15 = FUN_18031a140(&local_a8,lVar18);
        lVar1 = DAT_181107658;
        lVar16 = FUN_180026970(DAT_181107650,DAT_181107658,uVar15);
        *(bool *)(lVar18 + 0x100) = lVar16 != lVar1;
        FUN_18000f890(&local_a8);
      }
      FUN_1804e4e90(&DAT_1809f5a50);
      DAT_180cd0e6c = 1;
      FUN_18000f890(local_f0);
      FUN_18000f890(&local_c8);
      return;
    }
  }
  DAT_1809f5a9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_1804e4a90(6);
}



/* ===== 180315b80 FUN_180315b80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_180315b80(char *param_1,undefined8 *param_2)

{
  char *pcVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char **ppcVar12;
  undefined1 auStack_e8 [32];
  char *local_c8;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  ulonglong local_a0 [8];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_b8 = "ragebot.selection.g";
  local_b0 = "legitbot.g";
  ppcVar12 = &local_b8;
  uVar10 = param_2[2];
  uVar11 = param_2[3];
  local_c8 = param_1;
  local_a8 = param_1;
  do {
    pcVar1 = *ppcVar12;
    sVar5 = strlen(pcVar1);
    sVar6 = sVar5;
    if (uVar10 < sVar5) {
      sVar6 = uVar10;
    }
    puVar8 = param_2;
    if (0xf < uVar11) {
      puVar8 = (undefined8 *)*param_2;
    }
    iVar4 = memcmp(puVar8,pcVar1,sVar6);
    if (((iVar4 == 0) && (sVar5 <= sVar6)) && (sVar6 = sVar5, sVar5 < uVar10)) {
      while( true ) {
        puVar8 = param_2;
        if (0xf < uVar11) {
          puVar8 = (undefined8 *)*param_2;
        }
        if (*(char *)((longlong)puVar8 + sVar6) < '0') break;
        puVar8 = param_2;
        if (0xf < uVar11) {
          puVar8 = (undefined8 *)*param_2;
        }
        if (('9' < *(char *)((longlong)puVar8 + sVar6)) || (sVar6 = sVar6 + 1, uVar10 <= sVar6))
        break;
      }
      if ((sVar6 != sVar5) && (sVar6 < uVar10)) {
        puVar8 = param_2;
        if (0xf < uVar11) {
          puVar8 = (undefined8 *)*param_2;
        }
        if (*(char *)((longlong)puVar8 + sVar6) == '.') {
          local_a0[4] = 0;
          local_a0[5] = 0;
          local_a0[6] = 0;
          local_a0[7] = 0;
          lVar9 = -1;
          if (uVar10 - sVar6 != -1) {
            lVar9 = uVar10 - sVar6;
          }
          puVar8 = param_2;
          if (0xf < uVar11) {
            puVar8 = (undefined8 *)*param_2;
          }
          FUN_1800133a0(local_a0 + 4,(longlong)puVar8 + sVar6,lVar9);
          local_a0[0] = 0;
          local_a0[1] = 0;
          local_a0[2] = 0;
          local_a0[3] = 0;
          uVar10 = sVar5 - 1;
          if ((ulonglong)param_2[2] < sVar5 - 1) {
            uVar10 = param_2[2];
          }
          if (0xf < (ulonglong)param_2[3]) {
            param_2 = (undefined8 *)*param_2;
          }
          FUN_1800133a0(local_a0,param_2,uVar10);
          puVar7 = (undefined4 *)FUN_1800134a0(local_a0,"global",6);
          pcVar1 = local_c8;
          local_60 = *puVar7;
          uStack_5c = puVar7[1];
          uStack_58 = puVar7[2];
          uStack_54 = puVar7[3];
          local_50 = puVar7[4];
          uStack_4c = puVar7[5];
          uStack_48 = puVar7[6];
          uStack_44 = puVar7[7];
          *(undefined8 *)(puVar7 + 4) = 0;
          *(undefined8 *)(puVar7 + 6) = 0xf;
          *(undefined1 *)puVar7 = 0;
          FUN_180066820(local_c8,&local_60,local_a0 + 4);
          uVar10 = CONCAT44(uStack_44,uStack_48);
          if (0xf < uVar10) {
            uVar11 = uVar10 + 1;
            lVar3 = CONCAT44(uStack_5c,local_60);
            lVar9 = lVar3;
            if (uVar11 < 0x1000) {
LAB_180315dae:
              thunk_FUN_1803d64e0(lVar9,uVar11);
              goto LAB_180315db4;
            }
            lVar9 = *(longlong *)(lVar3 + -8);
            if ((lVar3 - lVar9) - 8U < 0x20) {
              uVar11 = uVar10 + 0x28;
              goto LAB_180315dae;
            }
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
LAB_180315e41:
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
LAB_180315e48:
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            pcVar2 = (code *)swi(3);
            puVar8 = (undefined8 *)(*pcVar2)();
            return (char *)puVar8;
          }
LAB_180315db4:
          if (0xf < local_a0[3]) {
            uVar11 = local_a0[3] + 1;
            uVar10 = local_a0[0];
            if (0xfff < uVar11) {
              uVar10 = *(ulonglong *)(local_a0[0] - 8);
              if (0x1f < (local_a0[0] - uVar10) - 8) goto LAB_180315e41;
              uVar11 = local_a0[3] + 0x28;
            }
            thunk_FUN_1803d64e0(uVar10,uVar11);
          }
          local_a0[2] = 0;
          local_a0[3] = 0xf;
          local_a0[0] = local_a0[0] & 0xffffffffffffff00;
          if (0xf < local_a0[7]) {
            uVar11 = local_a0[7] + 1;
            uVar10 = local_a0[4];
            if (0xfff < uVar11) {
              uVar10 = *(longlong *)(local_a0[4] + -8);
              if (0x1f < (local_a0[4] - uVar10) - 8) goto LAB_180315e48;
              uVar11 = local_a0[7] + 0x28;
            }
            thunk_FUN_1803d64e0(uVar10,uVar11);
          }
          return pcVar1;
        }
      }
    }
    ppcVar12 = ppcVar12 + 1;
    if (ppcVar12 == &local_a8) {
      local_c8[0] = '\0';
      local_c8[1] = '\0';
      local_c8[2] = '\0';
      local_c8[3] = '\0';
      local_c8[4] = '\0';
      local_c8[5] = '\0';
      local_c8[6] = '\0';
      local_c8[7] = '\0';
      local_c8[8] = '\0';
      local_c8[9] = '\0';
      local_c8[10] = '\0';
      local_c8[0xb] = '\0';
      local_c8[0xc] = '\0';
      local_c8[0xd] = '\0';
      local_c8[0xe] = '\0';
      local_c8[0xf] = '\0';
      local_c8[0x10] = '\0';
      local_c8[0x11] = '\0';
      local_c8[0x12] = '\0';
      local_c8[0x13] = '\0';
      local_c8[0x14] = '\0';
      local_c8[0x15] = '\0';
      local_c8[0x16] = '\0';
      local_c8[0x17] = '\0';
      local_c8[0x18] = '\x0f';
      local_c8[0x19] = '\0';
      local_c8[0x1a] = '\0';
      local_c8[0x1b] = '\0';
      local_c8[0x1c] = '\0';
      local_c8[0x1d] = '\0';
      local_c8[0x1e] = '\0';
      local_c8[0x1f] = '\0';
      *local_c8 = '\0';
      return local_c8;
    }
  } while( true );
}



/* ===== 180315e50 FUN_180315e50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180315e50(undefined8 *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *****pppppuVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 *****local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  if ((ulonglong)param_1[3] < 0x10) {
    puVar4 = param_1;
  }
  else {
    puVar4 = (undefined8 *)*param_1;
  }
  uVar3 = 0;
  uVar6 = 0xcbf29ce484222325;
  uVar7 = 0xcbf29ce484222325;
  if (param_1[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar4 + uVar3);
      uVar3 = uVar3 + 1;
      uVar7 = (uVar7 ^ *pbVar1) * 0x100000001b3;
    } while (uVar3 < (ulonglong)param_1[2]);
  }
  lVar2 = FUN_1800268a0(&DAT_180ca1900,local_78,param_1,uVar7);
  lVar5 = DAT_180ca1908;
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar5 = *(longlong *)(lVar2 + 8);
  }
  if (lVar5 == DAT_180ca1908) {
    FUN_180315b80(local_58);
    if (local_48 != 0) {
      pppppuVar8 = local_58;
      if (0xf < local_40) {
        pppppuVar8 = local_58[0];
      }
      uVar3 = 0;
      if (local_48 != 0) {
        do {
          pbVar1 = (byte *)((longlong)pppppuVar8 + uVar3);
          uVar3 = uVar3 + 1;
          uVar6 = (uVar6 ^ *pbVar1) * 0x100000001b3;
        } while (uVar3 < local_48);
      }
      lVar2 = FUN_1800268a0(&DAT_180ca1900,local_68,local_58,uVar6);
      lVar5 = DAT_180ca1908;
      if (*(longlong *)(lVar2 + 8) != 0) {
        lVar5 = *(longlong *)(lVar2 + 8);
      }
    }
    FUN_18000f890(local_58);
    if (lVar5 == DAT_180ca1908) {
      return 0;
    }
  }
  return *(longlong *)(lVar5 + 0x30) * 0x108 + DAT_181107360;
}



/* ===== 180315fa0 FUN_180315fa0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180315fa0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [16];
  longlong local_40;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_98;
  local_78 = 0;
  lVar1 = FUN_1800fbdb0(local_70,param_1);
  if (*(int *)(lVar1 + 8) == 4) {
    FUN_180073a70(local_30,param_1,&DAT_18075c260);
    uVar2 = FUN_180066a20(local_70,"multi|",local_30);
    lVar1 = FUN_180315e50(uVar2);
    FUN_18000f890(local_70);
    if (lVar1 == 0) {
      FUN_180315b80(local_50,local_30);
      if (local_40 != 0) {
        uVar2 = FUN_180066a20(local_70,"multi|",local_50);
        local_78 = 1;
        lVar1 = FUN_180315e50(uVar2);
        FUN_18000f890(local_70);
      }
      FUN_18000f890(local_50);
    }
    FUN_18000f890(local_30);
  }
  else {
    lVar1 = FUN_180315e50(param_1);
  }
  return lVar1;
}



/* ===== 1803160c0 FUN_1803160c0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1803160c0(longlong *param_1)

{
  undefined8 *puVar1;
  size_t _Size;
  int *piVar2;
  size_t sVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  int iVar8;
  size_t sVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *_Buf1;
  undefined8 *puVar13;
  undefined8 ****ppppuVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auStack_11f8 [32];
  ulonglong local_11d8;
  undefined1 local_11d0;
  undefined1 local_11c8;
  int local_11c4;
  int local_11c0 [2];
  longlong local_11b8;
  longlong lStack_11b0;
  longlong local_11a8;
  undefined8 ***local_11a0;
  undefined4 local_1198;
  longlong *local_1190;
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined8 local_1178;
  longlong local_1170;
  longlong lStack_1168;
  undefined8 local_1160;
  longlong local_1158;
  longlong local_1150;
  longlong *local_1148;
  longlong *local_1140;
  longlong *local_1138;
  longlong local_1130;
  undefined1 *local_1128;
  ulonglong local_1120;
  undefined1 local_1118 [4080];
  undefined1 local_128;
  undefined8 local_127;
  undefined4 local_11f;
  undefined2 local_11b;
  undefined1 local_119;
  size_t local_118;
  ulonglong uStack_110;
  undefined8 **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 ***local_d8;
  undefined8 ***pppuStack_d0;
  size_t local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 ****local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined8 ****local_80;
  undefined8 uStack_78;
  size_t local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x1803160df;
  local_60 = DAT_180919500 ^ (ulonglong)auStack_11f8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar18 = _UNK_1808ad418;
  sVar3 = _DAT_1808ad410;
  local_1198 = 1;
  local_11c0[0] = 0;
  local_1190 = param_1;
  local_1140 = param_1;
  do {
    uVar15 = 0;
    lVar12 = (longlong)local_11c0[0] * 0xe4;
    if ((&DAT_18095d530)[lVar12] != '\0') {
      local_a0 = (undefined8 ****)0x0;
      uStack_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_11c4 = local_11c0[0];
      sVar9 = strlen(&DAT_18095d530 + lVar12);
      FUN_1800133a0(&local_a0,&DAT_18095d530 + lVar12,sVar9);
      local_11b8 = 0;
      lStack_11b0 = 0;
      local_11a8 = 0;
      plVar10 = (longlong *)FUN_180315fa0(&local_a0);
      if (plVar10 == (longlong *)0x0) {
LAB_1803161f4:
        if (lStack_11b0 == local_11a8) {
          FUN_180028f00(&local_11b8,lStack_11b0,&local_a0);
        }
        else {
          FUN_180024b50(lStack_11b0,&local_a0);
          lStack_11b0 = lStack_11b0 + 0x20;
        }
      }
      else {
        lVar12 = *plVar10;
        if ((ulonglong)(plVar10[1] - lVar12 >> 5) < 2) goto LAB_1803161f4;
        FUN_18034d0e0(&local_11b8,lVar12,(plVar10[1] + -0x20) - lVar12 >> 5);
      }
      uStack_78 = 0;
      local_70 = sVar3;
      uStack_68 = uVar18;
      local_80 = (undefined8 ****)0x0;
      if (lStack_11b0 - local_11b8 >> 5 != 0) {
        do {
          if (uVar15 != 0) {
            FUN_1800134a0(&local_80,&DAT_1807672d0,7);
          }
          puVar13 = (undefined8 *)(uVar15 * 0x20 + local_11b8);
          puVar1 = puVar13 + 2;
          if (0xf < (ulonglong)puVar13[3]) {
            puVar13 = (undefined8 *)*puVar13;
          }
          FUN_1800134a0(&local_80,puVar13,*puVar1);
          uVar15 = uVar15 + 1;
        } while (uVar15 < (ulonglong)(lStack_11b0 - local_11b8 >> 5));
      }
      uVar15 = uStack_68;
      sVar9 = local_70;
      ppppuVar7 = local_80;
      lVar11 = lStack_11b0;
      lVar12 = local_11b8;
      puVar1 = (undefined8 *)param_1[1];
      puVar13 = (undefined8 *)*param_1;
      if (puVar13 == puVar1) {
LAB_18031633f:
        local_1188 = 0;
        uStack_1180 = 0;
        local_1178 = 0;
        FUN_180068970(&local_1188,lVar11 - lVar12 >> 5,&local_11b8,&lStack_11b0);
        local_1170 = 0;
        lStack_1168 = 0;
        local_1160 = 0;
        FUN_180024b50(&local_128,&local_80);
        local_11a0 = &local_108;
        FUN_18006d7e0(&local_108,&local_1188);
        local_f0 = 0;
        local_e8 = 0;
        lStack_e0 = 0;
        if (lStack_1168 - local_1170 != 0) {
          lVar12 = lStack_1168 - local_1170 >> 3;
          if (0x492492492492492 < (ulonglong)(lVar12 * 0x6db6db6db6db6db7)) {
                    /* WARNING: Subroutine does not return */
            FUN_18000fb10();
          }
          lVar12 = lVar12 * 8;
          lVar11 = FUN_18000fb70(lVar12);
          lVar19 = lStack_1168;
          lStack_e0 = lVar11 + lVar12;
          local_1138 = &local_f0;
          local_1148 = &local_f0;
          local_1158 = lVar11;
          local_f0 = lVar11;
          local_e8 = lVar11;
          for (lVar12 = local_1170; local_1150 = lVar11, lVar12 != lVar19; lVar12 = lVar12 + 0x38) {
            local_1130 = lVar11;
            FUN_180024b50(lVar11,lVar12);
            FUN_1801c77e0(lVar11 + 0x20,lVar12 + 0x20);
            lVar11 = lVar11 + 0x38;
          }
          local_e8 = lVar11;
        }
        lVar19 = lStack_e0;
        lVar11 = local_e8;
        lVar12 = local_f0;
        uVar6 = local_f8;
        uVar5 = local_100;
        ppuVar4 = local_108;
        puVar1 = (undefined8 *)param_1[1];
        if (puVar1 == (undefined8 *)param_1[2]) {
          FUN_180352c90(param_1);
        }
        else {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          *(undefined1 *)puVar1 = local_128;
          *(undefined8 *)((longlong)puVar1 + 1) = local_127;
          *(undefined4 *)((longlong)puVar1 + 9) = local_11f;
          *(undefined2 *)((longlong)puVar1 + 0xd) = local_11b;
          *(undefined1 *)((longlong)puVar1 + 0xf) = local_119;
          puVar1[2] = local_118;
          puVar1[3] = uStack_110;
          local_118 = sVar3;
          uStack_110 = uVar18;
          local_128 = 0;
          local_f8 = 0;
          local_100 = 0;
          local_108 = (undefined8 **)0x0;
          puVar1[4] = ppuVar4;
          puVar1[5] = uVar5;
          puVar1[6] = uVar6;
          lStack_e0 = 0;
          local_e8 = 0;
          local_f0 = 0;
          puVar1[7] = lVar12;
          puVar1[8] = lVar11;
          puVar1[9] = lVar19;
          param_1[1] = param_1[1] + 0x50;
        }
        FUN_18034fab0(&local_f0);
        FUN_1800288b0(&local_108);
        FUN_18000f890(&local_128);
        FUN_18034fab0(&local_1170);
        FUN_1800288b0(&local_1188);
        puVar13 = (undefined8 *)(param_1[1] + -0x50);
      }
      else {
        do {
          ppppuVar14 = &local_80;
          if (0xf < uVar15) {
            ppppuVar14 = ppppuVar7;
          }
          _Size = puVar13[2];
          if ((ulonglong)puVar13[3] < 0x10) {
            puVar17 = puVar13;
          }
          else {
            puVar17 = (undefined8 *)*puVar13;
          }
        } while (((_Size != sVar9) ||
                 ((_Size != 0 && (iVar8 = memcmp(puVar17,ppppuVar14,_Size), iVar8 != 0)))) &&
                (puVar13 = puVar13 + 10, puVar13 != puVar1));
        param_1 = local_1190;
        if (puVar13 == puVar1) goto LAB_18031633f;
      }
      uVar16 = local_88;
      uVar15 = local_90;
      ppppuVar7 = local_a0;
      puVar1 = (undefined8 *)puVar13[8];
      puVar17 = (undefined8 *)puVar13[7];
      if (puVar17 == puVar1) {
LAB_180316627:
        local_d8 = (undefined8 ***)0x0;
        pppuStack_d0 = (undefined8 ***)0x0;
        local_c8 = 0;
        uStack_c0 = 0;
        ppppuVar14 = &local_a0;
        if (0xf < uVar16) {
          ppppuVar14 = ppppuVar7;
        }
        if (0x7fffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_180011990();
        }
        if (uVar15 < 0x10) {
          local_c8 = uVar15;
          uVar16 = 0xf;
          uStack_c0 = 0xf;
          local_d8 = *ppppuVar14;
          pppuStack_d0 = ppppuVar14[1];
        }
        else {
          uVar16 = uVar15 | 0xf;
          if (uVar16 < 0x8000000000000000) {
            if (uVar16 < 0x16) {
              uVar16 = 0x16;
            }
          }
          else {
            uVar16 = 0x7fffffffffffffff;
          }
          local_11a0 = (undefined8 ***)FUN_18000fb70(uVar16 + 1);
          local_c8 = uVar15;
          local_d8 = local_11a0;
          uStack_c0 = uVar16;
          FUN_180540530(local_11a0,ppppuVar14);
        }
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        puVar1 = (undefined8 *)puVar13[8];
        if (puVar1 == (undefined8 *)puVar13[9]) {
          FUN_180352ed0(puVar13 + 7,puVar1,&local_d8);
        }
        else {
          *puVar1 = local_d8;
          puVar1[1] = pppuStack_d0;
          puVar1[2] = uVar15;
          puVar1[3] = uVar16;
          local_c8 = sVar3;
          uStack_c0 = uVar18;
          local_d8 = (undefined8 ***)((ulonglong)local_d8 & 0xffffffffffffff00);
          local_a8 = 0;
          uStack_b0 = 0;
          local_b8 = 0;
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[6] = 0;
          puVar13[8] = puVar13[8] + 0x38;
        }
        FUN_180068f30(&local_b8);
        FUN_18000f890(&local_d8);
        puVar17 = (undefined8 *)(puVar13[8] + -0x38);
      }
      else {
        do {
          ppppuVar14 = &local_a0;
          if (0xf < uVar16) {
            ppppuVar14 = ppppuVar7;
          }
          sVar9 = puVar17[2];
          if ((ulonglong)puVar17[3] < 0x10) {
            _Buf1 = puVar17;
          }
          else {
            _Buf1 = (undefined8 *)*puVar17;
          }
        } while (((sVar9 != uVar15) ||
                 ((sVar9 != 0 && (iVar8 = memcmp(_Buf1,ppppuVar14,sVar9), iVar8 != 0)))) &&
                (puVar17 = puVar17 + 7, puVar17 != puVar1));
        if (puVar17 == puVar1) goto LAB_180316627;
      }
      piVar2 = (int *)puVar17[5];
      if (piVar2 == (int *)puVar17[6]) {
        FUN_18006a410(puVar17 + 4,piVar2,local_11c0);
      }
      else {
        *piVar2 = local_11c4;
        puVar17[5] = puVar17[5] + 4;
      }
      FUN_18000f890(&local_80);
      FUN_1800288b0(&local_11b8);
      FUN_18000f890(&local_a0);
      param_1 = local_1190;
      local_11c0[0] = local_11c4;
    }
    local_11c4 = local_11c0[0] + 1;
    local_11c0[0] = local_11c4;
  } while (local_11c4 < 0x40);
  lVar12 = param_1[1];
  lVar11 = *param_1;
  lVar19 = (lVar12 - lVar11 >> 4) * -0x3333333333333333;
  if (lVar19 < 0x21) {
    FUN_18034d260(lVar11,lVar12);
  }
  else {
    uVar18 = lVar19 - (lVar12 - lVar11) / 0xa0;
    uVar15 = 0x7fffffffffffffff;
    if ((longlong)uVar18 < 0x7fffffffffffffff) {
      uVar15 = uVar18;
    }
    if (0x33 < uVar18) {
      if ((uVar15 < 0x333333333333334) && (0 < (longlong)uVar15)) {
        do {
          local_1128 = (undefined1 *)FUN_1804ed030(uVar15 * 0x50,&DAT_1805757b2);
          if (local_1128 != (undefined1 *)0x0) {
            if (0x33 < uVar15) goto LAB_1803168d9;
            goto LAB_1803168c4;
          }
          uVar15 = uVar15 >> 1;
        } while (uVar15 != 0);
      }
      local_1128 = (undefined1 *)0x0;
LAB_1803168c4:
      FUN_1803d64e0(local_1128);
      uVar18 = 0x33;
    }
    uVar15 = uVar18;
    local_1128 = local_1118;
LAB_1803168d9:
    local_11d0 = local_11c8;
    local_11d8 = uVar15;
    local_1120 = uVar15;
    FUN_18034d510(lVar11,lVar12,lVar19);
    if (0x33 < local_1120) {
      FUN_1803d64e0(local_1128);
    }
  }
  return param_1;
}



/* ===== 180316950 FUN_180316950 ===== */

void FUN_180316950(longlong param_1)

{
  FUN_18034fab0(param_1 + 0x18);
  FUN_1800288b0(param_1);
  return;
}



/* ===== 180316970 FUN_180316970 ===== */

void FUN_180316970(longlong param_1)

{
  FUN_18034fab0(param_1 + 0x38);
  FUN_1800288b0(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 1803169a0 FUN_1803169a0 ===== */

void FUN_1803169a0(longlong param_1)

{
  FUN_180068f30(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 1803169e0 FUN_1803169e0 ===== */

undefined1
FUN_1803169e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,uint param_6)

{
  int iVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  char cVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar18;
  undefined8 local_e8;
  longlong local_e0 [2];
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  local_e8 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  fVar17 = (float)local_e8;
  FUN_1803e89e0();
  pfVar3 = (float *)CONCAT44(param_5._4_4_,(float)param_5);
  uVar6 = FUN_180415e30("##glyph",pfVar3,0);
  cVar7 = FUN_1803dd930(0);
  fVar16 = DAT_1808ac34c;
  fVar4 = DAT_1808ac1f4;
  uVar12 = *(uint *)(DAT_180ca0a50 + 0x1ee8);
  uVar9 = (ulonglong)uVar12;
  if (*(uint *)(DAT_180ca0a50 + 0x1578) == 0) {
    bVar14 = false;
  }
  else {
    bVar14 = *(uint *)(DAT_180ca0a50 + 0x1578) == uVar12;
    if (bVar14) {
      fVar15 = DAT_1808ac34c;
      goto LAB_180316ac2;
    }
  }
  if (cVar7 == '\0') {
    fVar15 = 0.0;
  }
  else {
    fVar15 = DAT_1808ac1f4;
  }
LAB_180316ac2:
  uVar12 = ~uVar12;
  pcVar11 = "hover";
  bVar8 = 0x68;
  uVar13 = uVar12;
  do {
    pcVar11 = pcVar11 + 1;
    if (((bVar8 == 0x23) && (*pcVar11 == 0x23)) && (pcVar11[1] == 0x23)) {
      pcVar11 = pcVar11 + 2;
      uVar13 = uVar12;
    }
    else {
      uVar9 = (ulonglong)(uVar13 & 0xff) ^ (ulonglong)bVar8;
      uVar13 = uVar13 >> 8 ^ *(uint *)(&DAT_1806c25c0 + uVar9 * 4);
    }
    bVar8 = *pcVar11;
  } while (bVar8 != 0);
  param_5._0_4_ = (float)~uVar13;
  local_c4 = 0;
  local_c0 = 0xffffffff;
  local_d0 = fVar15;
  local_cc = fVar15;
  local_c8 = fVar15;
  FUN_18034a380(uVar9,local_e0,&param_5,&local_d0);
  fVar15 = (float)FUN_1802b3660(local_e0[0] + 0x14,fVar15,DAT_1808ac118,0);
  if (!bVar14) {
    if (cVar7 == '\0') {
      fVar16 = 0.0;
    }
    else {
      fVar16 = fVar4;
    }
  }
  pcVar11 = "label";
  uVar13 = uVar12;
  bVar8 = s_label_1806e0514[0];
  while (pcVar11 = pcVar11 + 1, bVar8 != 0) {
    if (((bVar8 == 0x23) && (*pcVar11 == 0x23)) && (pcVar11[1] == 0x23)) {
      pcVar11 = pcVar11 + 2;
      uVar13 = uVar12;
    }
    else {
      uVar13 = uVar13 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + (ulonglong)(uVar13 & 0xff ^ (uint)bVar8) * 4);
    }
    bVar8 = *pcVar11;
  }
  param_5._0_4_ = (float)~uVar13;
  local_c4 = 0;
  local_c0 = 0xffffffff;
  local_d0 = fVar16;
  local_cc = fVar16;
  local_c8 = fVar16;
  FUN_18034a380(fVar15,local_e0,&param_5,&local_d0);
  fVar16 = (float)FUN_1802b3660(local_e0[0] + 0x14,fVar16,DAT_1808ac118,0);
  lVar10 = DAT_180ca0a50;
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar10 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  *(undefined1 *)(*(longlong *)(lVar10 + 0x14f8) + 0xce) = 1;
  fVar5 = local_e8._4_4_;
  param_5._0_4_ = fVar17 + *pfVar3;
  uVar2 = *(undefined8 *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8);
  param_5._4_4_ = local_e8._4_4_ + pfVar3[1];
  if (0.0 < fVar15) {
    FUN_1803fe590(uVar2,&local_e8,&param_5,
                  (int)(longlong)((float)(DAT_180960f44 >> 0x18) * fVar15 * DAT_1808ac1b0 + fVar4)
                  << 0x18 | DAT_180960f44 & 0xffffff,CONCAT44(uVar18,DAT_1808ac7ac),0);
  }
  param_5._0_4_ = *pfVar3 * fVar4 + fVar17;
  param_5._4_4_ = pfVar3[1] * fVar4 + fVar5;
  FUN_1802b6e90(uVar2,param_2,param_3,param_4,&param_5,DAT_1808ac8d4,
                (int)(longlong)
                     ((fVar16 * DAT_1808ac154 + DAT_1808ac254) * (float)(param_6 >> 0x18) + fVar4)
                << 0x18 | param_6 & 0xffffff);
  return uVar6;
}



/* ===== 180316dc0 FUN_180316dc0 ===== */

void FUN_180316dc0(longlong param_1,longlong param_2,float param_3,float *param_4,float *param_5,
                  uint param_6,char *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined8 in_R8;
  float fVar10;
  ulonglong uVar11;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  pcVar9 = param_7;
  pcVar7 = param_7;
  if (0xf < *(ulonglong *)(param_7 + 0x18)) {
    pcVar7 = *(char **)param_7;
  }
  uVar11 = 0;
  FUN_18040a2f0(&param_7,param_2,in_R8,DAT_1808acd08,0,pcVar7,0,0,0);
  fVar10 = (float)FUN_18053fc00(param_7._0_4_ + DAT_1808ac2f0);
  FUN_1803fc200(param_1,param_4,param_5,1);
  fVar6 = DAT_1808ac1f4;
  if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
    pcVar9 = *(char **)pcVar9;
  }
  param_7._0_4_ = (float)FUN_18053f0d0(((*param_5 - *param_4) - fVar10) * DAT_1808ac1f4 + *param_4);
  param_7._4_4_ = FUN_18053f0d0(((param_5[1] - param_4[1]) - param_3) * fVar6 + param_4[1]);
  if ((((param_6 & 0xff000000) != 0) && (pcVar9 != (char *)0x0)) && (*pcVar9 != '\0')) {
    if (param_2 == 0) {
      param_2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
    if (param_3 == 0.0) {
      param_3 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
    }
    local_78 = *(undefined4 *)(param_1 + 0x60);
    uStack_74 = *(undefined4 *)(param_1 + 100);
    uStack_70 = *(undefined4 *)(param_1 + 0x68);
    uStack_6c = *(undefined4 *)(param_1 + 0x6c);
    FUN_18040a900(param_2,param_1,param_3,&param_7,param_6,&local_78,pcVar9,0,
                  uVar11 & 0xffffffff00000000,0);
  }
  iVar2 = *(int *)(param_1 + 0xa0);
  iVar1 = iVar2 + -1;
  *(int *)(param_1 + 0xa0) = iVar1;
  if (iVar1 == 0) {
    puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x34);
  }
  else {
    puVar8 = (undefined4 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
  }
  uVar3 = puVar8[1];
  uVar4 = puVar8[2];
  uVar5 = puVar8[3];
  *(undefined4 *)(param_1 + 0x60) = *puVar8;
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  FUN_1803fbff0(param_1);
  return;
}



/* ===== 180316fb0 FUN_180316fb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180316fb0(longlong param_1,float *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong *puVar13;
  size_t sVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  float *pfVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  float *pfVar24;
  float *pfVar25;
  ulonglong uVar26;
  char *_Str;
  longlong *plVar27;
  char cVar28;
  ulonglong unaff_RSI;
  longlong *plVar29;
  uint uVar30;
  char *pcVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  uint uVar34;
  longlong *plVar35;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined8 auStack_3a0 [6];
  float afStack_370 [4];
  undefined8 uStack_360;
  undefined4 auStack_350 [2];
  longlong alStack_348 [62];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  float *local_138;
  undefined4 local_130;
  ulonglong *local_128;
  undefined8 local_118;
  float local_110;
  float local_10c;
  ulonglong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [32];
  ulonglong local_88;
  undefined1 local_58 [32];
  
  uVar34 = DAT_180cd1300;
  local_88 = DAT_180919500 ^ (ulonglong)auStack_158;
  uVar9 = 0;
  local_110 = 0.0;
  if (param_1 == 0) {
LAB_18031704a:
    uVar15 = unaff_RSI & 0xffffffffffffff00;
  }
  else {
    if (DAT_180cd1868 == param_1) {
      LOCK();
      DAT_180cd1868 = 0;
      UNLOCK();
      unaff_RSI = (ulonglong)DAT_180cd1300;
      if ((DAT_180cd1300 != 0xffffffff) &&
         ((DAT_180cd1300 != 1 || (cVar7 = FUN_1803e7af0(1), cVar7 == '\0')))) {
        *(uint *)(param_1 + 0x60) = uVar34;
      }
    }
    if (DAT_180cd1360 != param_1) goto LAB_18031704a;
    uVar15 = CONCAT71((int7)(unaff_RSI >> 8),1);
  }
  lVar16 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar16 = *(longlong *)(lVar16 + 0x14f8);
  *(undefined8 *)(lVar16 + 0x118) = *(undefined8 *)param_2;
  *(undefined1 *)(lVar16 + 0x159) = 1;
  cVar7 = FUN_180415e30("##key",param_3,0);
  if (cVar7 != '\0') {
    if ((param_1 == 0) || (DAT_180cd1360 != param_1)) {
      LOCK();
      DAT_180cd1868 = 0;
      UNLOCK();
      LOCK();
      UNLOCK();
      DAT_180cd1360 = param_1;
    }
    else {
      LOCK();
      DAT_180cd1360 = 0;
      UNLOCK();
    }
  }
  cVar7 = FUN_1803e9690(1,0,0);
  cVar28 = (char)uVar15;
  uVar36 = extraout_XMM0_Qa;
  if ((cVar7 != '\0') && (cVar7 = FUN_1803dd930(0), uVar36 = extraout_XMM0_Qa_00, cVar7 != '\0')) {
    if (cVar28 != '\0') {
      LOCK();
      DAT_180cd1360 = 0;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  uVar34 = DAT_1808ac34c;
  if (cVar28 == '\0') {
    cVar7 = FUN_1803dd930(0);
    uVar36 = extraout_XMM0_Qa_01;
    if (cVar7 == '\0') {
      uVar10 = 0;
    }
    else {
      uVar10 = DAT_1808ac1f4;
    }
  }
  else {
    uVar10 = DAT_1808ac34c;
  }
  pcVar31 = "color";
  uVar30 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
  bVar3 = s_color_1806e0504[0];
  while (pcVar31 = pcVar31 + 1, bVar3 != 0) {
    if (((bVar3 == 0x23) && (*pcVar31 == 0x23)) && (pcVar31[1] == 0x23)) {
      pcVar31 = pcVar31 + 2;
      uVar30 = ~*(uint *)(DAT_180ca0a50 + 0x1ee8);
    }
    else {
      uVar30 = uVar30 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + (ulonglong)(uVar30 & 0xff ^ (uint)bVar3) * 4);
    }
    bVar3 = *pcVar31;
  }
  local_118 = CONCAT44(local_118._4_4_,~uVar30);
  local_e8 = CONCAT44(uVar10,uVar10);
  uStack_e0 = (ulonglong)uVar10;
  local_d8 = CONCAT44(local_d8._4_4_,0xffffffff);
  FUN_18034a380(uVar36,&local_108,&local_118,&local_e8);
  uVar37 = FUN_1802b3660(local_108 + 0x14,uVar10,DAT_1808ac118,0);
  lVar16 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar36 = *(undefined8 *)(*(longlong *)(lVar16 + 0x14f8) + 0x2c8);
  local_118 = CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) +
                       (float)((ulonglong)*param_3 >> 0x20),
                       (float)*(undefined8 *)param_2 + (float)*param_3);
  uVar38 = uVar37;
  uVar8 = FUN_1802b38e0(DAT_180960ef0,DAT_180960ef4);
  fVar6 = DAT_1808ac7ac;
  fVar39 = (float)uVar38;
  local_130 = 0;
  auVar40 = ZEXT416((uint)DAT_1808ac7ac);
  local_138 = (float *)CONCAT44(local_138._4_4_,DAT_1808ac7ac);
  FUN_1803fe590(uVar36,param_2,&local_118,uVar8);
  local_108 = _DAT_1808adcf0;
  uStack_100 = _UNK_1808adcf8;
  local_128 = (ulonglong *)CONCAT44(local_128._4_4_,uVar34);
  local_130 = 0;
  local_138 = (float *)&local_108;
  FUN_18036bcb0(uVar36,param_2,&local_118,DAT_180960eec);
  if (cVar28 == '\0') {
    if (*(int *)(param_1 + 0x60) < 1) {
      uStack_e0 = 0;
      local_d8 = 1;
      local_d0 = 0xf;
      local_e8 = (ulonglong)(DAT_1806eb0d8 & 0xff);
      puVar13 = &local_e8;
    }
    else {
      puVar18 = (undefined8 *)FUN_1801c6760(local_a8);
      uVar9 = 2;
      local_110 = 2.8026e-45;
      if (0xf < (ulonglong)puVar18[3]) {
        puVar18 = (undefined8 *)*puVar18;
      }
      puVar13 = (ulonglong *)FUN_1802b3fe0(&local_e8,puVar18);
    }
    uVar26 = (ulonglong)(uVar9 | 4);
  }
  else {
    uStack_100 = 0;
    local_f8 = 2;
    uStack_f0 = 0xf;
    local_108 = (ulonglong)DAT_1806f02a8;
    puVar13 = &local_108;
    uVar26 = 1;
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = *puVar13;
  uStack_c0 = puVar13[1];
  local_b8 = puVar13[2];
  uStack_b0 = puVar13[3];
  puVar13[2] = 0;
  puVar13[3] = 0xf;
  *(undefined1 *)puVar13 = 0;
  if ((uVar26 & 4) != 0) {
    uVar26 = (ulonglong)((uint)uVar26 & 0xfffffffb);
    FUN_18000f890(&local_e8);
  }
  if ((uVar26 & 2) != 0) {
    uVar26 = (ulonglong)((uint)uVar26 & 0xfffffffd);
    FUN_18000f890(local_a8);
  }
  if (((uVar26 & 1) == 0) || (uStack_f0 < 0x10)) {
LAB_1803173b9:
    local_110 = (float)local_118 - fVar6;
    local_10c = local_118._4_4_ - DAT_1808ac658;
    local_118 = CONCAT44(param_2[1] + DAT_1808ac658,*param_2 + fVar6);
    local_130 = FUN_1802b38e0(DAT_180960ec0,DAT_180960ec8,uVar37);
    local_128 = &local_c8;
    local_138 = &local_110;
    fVar39 = DAT_1808ac930;
    FUN_180316dc0(uVar36,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),DAT_1808ac930,&local_118);
    plVar27 = (longlong *)auStack_158;
    if (uStack_b0 < 0x10) {
      return;
    }
    pfVar24 = (float *)(uStack_b0 + 1);
    uVar33 = local_c8;
    if (pfVar24 < (float *)0x1000) {
LAB_180317482:
      thunk_FUN_1803d64e0(uVar33,pfVar24);
      return;
    }
    uVar33 = *(ulonglong *)(local_c8 - 8);
    if ((local_c8 - uVar33) - 8 < 0x20) {
      pfVar24 = (float *)(uStack_b0 + 0x28);
      goto LAB_180317482;
    }
  }
  else {
    pfVar24 = (float *)(uStack_f0 + 1);
    uVar33 = local_108;
    if (pfVar24 < (float *)0x1000) {
LAB_1803173b4:
      thunk_FUN_1803d64e0(uVar33,pfVar24);
      goto LAB_1803173b9;
    }
    uVar33 = *(ulonglong *)(local_108 - 8);
    if ((local_108 - uVar33) - 8 < 0x20) {
      pfVar24 = (float *)(uStack_f0 + 0x28);
      goto LAB_1803173b4;
    }
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    plVar27 = (longlong *)auStack_150;
  }
  pcVar31 = &DAT_00000005;
  pcVar5 = (code *)swi(0x29);
  (*pcVar5)();
  *plVar27 = (longlong)local_58;
  plVar27[-1] = uVar26;
  plVar27[-2] = uVar15;
  plVar27[-3] = param_1;
  plVar27[-4] = (longlong)param_3;
  plVar27[-5] = 0;
  plVar27[-6] = (longlong)param_2;
  plVar27[-7] = uVar36;
  *(undefined1 (*) [16])(plVar27 + -10) = auVar40;
  *(undefined1 (*) [16])(plVar27 + -0xc) = ZEXT416(uVar34);
  plVar27[-0xe] = 0;
  plVar27[-0xd] = 0;
  plVar27[-0x10] = DAT_180919500 ^ (ulonglong)(plVar27 + -0x48);
  plVar27[-0x41] = (longlong)pcVar31;
  plVar27[-0x18] = 0;
  plVar27[-0x17] = 0;
  plVar27[-0x16] = 0;
  plVar27[-0x15] = 0;
  plVar27[-0x49] = 0x180317539;
  sVar14 = strlen(pcVar31);
  plVar27[-0x49] = 0x18031754b;
  FUN_1800133a0(plVar27 + -0x18,pcVar31,sVar14);
  plVar27[-0x49] = 0x180317558;
  uVar15 = FUN_180315fa0(plVar27 + -0x18);
  plVar27[-0x14] = uVar15;
  if (DAT_180cc3e19 == '\0') {
    DAT_180cc3e19 = '\x01';
    plVar27[-0x49] = 0x180317583;
    FUN_1800ff4a0(plVar27 + -0x40,&DAT_18091a190);
  }
  uVar26 = plVar27[-0x16];
  plVar17 = (longlong *)plVar27[-0x18];
  uVar33 = plVar27[-0x15];
  plVar21 = plVar27 + -0x18;
  if (0xf < uVar33) {
    plVar21 = plVar17;
  }
  plVar29 = (longlong *)0xcbf29ce484222325;
  uVar32 = 0xcbf29ce484222325;
  uVar20 = 0;
  if (uVar26 != 0) {
    do {
      uVar32 = (uVar32 ^ *(byte *)((longlong)plVar21 + uVar20)) * 0x100000001b3;
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar26);
  }
  plVar27[-0x49] = 0x1803175f3;
  lVar16 = FUN_18014a630(uVar20,plVar27 + -0x1e,plVar27 + -0x18,uVar32);
  lVar23 = DAT_180ca0a50;
  plVar21 = plVar27 + -0x48;
  lVar16 = *(longlong *)(lVar16 + 8);
  uVar34 = 1;
  if ((lVar16 == 0) || (lVar16 == DAT_180cd12c8)) {
    iVar11 = 0;
    uVar8 = 1;
  }
  else {
    iVar11 = *(int *)(lVar16 + 0x38);
    uVar8 = *(undefined4 *)(lVar16 + 0x3c);
  }
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar16 = *(longlong *)(lVar23 + 0x14f8);
  plVar27[-0x3e] = lVar16;
  plVar27[-0x3d] = lVar16;
  uVar1 = *(undefined4 *)(lVar16 + 0x250);
  *(undefined4 *)(plVar27 + -0x3c) = uVar1;
  uVar2 = *(undefined4 *)(lVar16 + 0x280);
  *(undefined4 *)((longlong)plVar27 + -0x1dc) = uVar2;
  *(float *)(lVar16 + 0x250) = fVar39;
  *(float *)(lVar16 + 0x280) = fVar39;
  *(undefined1 *)(*(longlong *)(lVar23 + 0x14f8) + 0xce) = 1;
  lVar16 = *(longlong *)(lVar23 + 0x14f8);
  *(longlong *)(lVar16 + 0x118) = *(longlong *)pfVar24;
  *(undefined1 *)(lVar16 + 0x159) = 1;
  if (iVar11 != 4) {
LAB_180317975:
    if (uVar15 != 0) goto LAB_18031797e;
    goto LAB_180317fbe;
  }
  plVar21 = plVar27 + -0x48;
  if (uVar15 != 0) {
    plVar21 = plVar27 + -0x48;
    if (*(int *)(uVar15 + 0x30) == 4) {
      plVar21 = plVar27 + -0x48;
      if (*(longlong *)(uVar15 + 0x68) == *(longlong *)(uVar15 + 0x70)) goto LAB_18031797e;
      *(int *)(plVar27 + -0x1e) =
           (int)(*(longlong *)(uVar15 + 0x70) - *(longlong *)(uVar15 + 0x68) >> 5);
      *(undefined4 *)((longlong)plVar27 + -0xec) = uVar8;
      *(undefined4 *)(plVar27 + -0x1d) = 0x18;
      plVar27[-0x49] = 0x1803176e4;
      uVar9 = thunk_FUN_1804e8250(plVar27 + -0x1e);
      uVar26 = (ulonglong)uVar9;
      plVar27[-0x22] = 0;
      plVar27[-0x21] = 0;
      pfVar25 = (float *)0x0;
      plVar27[-0x20] = 0;
      uVar10 = 0;
      *(undefined4 *)(plVar27 + -0x42) = 0;
      if (0 < (int)uVar9) {
        uVar33 = 0x1fffffffffffffff;
        pfVar24 = (float *)plVar27[-0x21];
        plVar17 = (longlong *)plVar27[-0x22];
        do {
          plVar29 = (longlong *)((ulonglong)uVar10 * 0x20 + *(longlong *)(uVar15 + 0x68));
          if (0xf < (ulonglong)plVar29[3]) {
            plVar29 = (longlong *)*plVar29;
          }
          if (pfVar24 == pfVar25) {
            if ((longlong)pfVar24 - (longlong)plVar17 == -8) {
                    /* WARNING: Subroutine does not return */
              plVar27[-0x49] = 0x1803180b0;
              FUN_1800118d0();
            }
            uVar20 = ((longlong)pfVar24 - (longlong)plVar17 >> 3) + 1;
            plVar27[-0x1e] = uVar20;
            uVar15 = (longlong)pfVar25 - (longlong)plVar17 >> 3;
            if (0x1fffffffffffffff - (uVar15 >> 1) < uVar15) {
              uVar20 = 0x1fffffffffffffff;
            }
            else {
              uVar15 = (uVar15 >> 1) + uVar15;
              if (uVar20 <= uVar15) {
                uVar20 = uVar15;
              }
              if (0x1fffffffffffffff < uVar20) {
                    /* WARNING: Subroutine does not return */
                plVar27[-0x49] = (longlong)&UNK_1803180aa;
                FUN_18000d840();
              }
            }
            uVar15 = (longlong)pfVar24 - (longlong)plVar17;
            plVar27[-0x3f] = uVar20 * 8;
            plVar27[-0x49] = 0x1803177bc;
            plVar17 = (longlong *)FUN_18000fb70(uVar20 * 8);
            uVar15 = uVar15 & 0xfffffffffffffff8;
            *(longlong **)((longlong)plVar17 + uVar15) = plVar29;
            pfVar25 = (float *)plVar27[-0x22];
            if (pfVar24 == (float *)plVar27[-0x21]) {
              lVar16 = plVar27[-0x21] - (longlong)pfVar25;
              plVar21 = plVar17;
            }
            else {
              plVar27[-0x49] = 0x1803177e7;
              FUN_180540530(plVar17,pfVar25,(longlong)pfVar24 - (longlong)pfVar25);
              lVar16 = plVar27[-0x21] - (longlong)pfVar24;
              plVar21 = (longlong *)(uVar15 + 8 + (longlong)plVar17);
              pfVar25 = pfVar24;
            }
            plVar27[-0x49] = 0x1803177fd;
            FUN_180540530(plVar21,pfVar25,lVar16);
            lVar16 = plVar27[-0x22];
            if (lVar16 != 0) {
              uVar20 = (plVar27[-0x20] - lVar16 >> 3) * 8;
              lVar23 = lVar16;
              if (0xfff < uVar20) {
                lVar23 = *(longlong *)(lVar16 + -8);
                if (0x1f < (lVar16 - lVar23) - 8U) {
                  pcVar5 = (code *)swi(0x29);
                  (*pcVar5)();
                  iVar11 = (int)uVar20;
                  plVar21 = plVar27 + -0x47;
                  goto LAB_180317975;
                }
                uVar20 = uVar20 + 0x27;
              }
              plVar27[-0x49] = 0x180317843;
              thunk_FUN_1803d64e0(lVar23,uVar20);
            }
            plVar27[-0x22] = (longlong)plVar17;
            pfVar24 = (float *)(plVar17 + plVar27[-0x1e]);
            pfVar25 = (float *)(plVar27[-0x3f] + (longlong)plVar17);
            plVar27[-0x20] = (longlong)pfVar25;
            uVar15 = plVar27[-0x14];
          }
          else {
            *(longlong **)pfVar24 = plVar29;
            pfVar24 = (float *)(plVar27[-0x21] + 8);
            pfVar25 = (float *)plVar27[-0x20];
            plVar17 = (longlong *)plVar27[-0x22];
          }
          plVar27[-0x21] = (longlong)pfVar24;
          uVar10 = (int)plVar27[-0x42] + 1;
          *(uint *)(plVar27 + -0x42) = uVar10;
        } while ((int)uVar10 < (int)uVar9);
      }
      lVar16 = plVar27[-0x41];
      plVar27[-0x49] = 0x180317888;
      uVar10 = FUN_1804f3280();
      pfVar24 = (float *)(ulonglong)uVar10;
      plVar27[-0x1c] = 0;
      plVar27[-0x1b] = 0;
      plVar27[-0x1a] = 0;
      plVar27[-0x49] = 0x1803178a9;
      FUN_180540170(plVar27 + -0x3a,0);
      if (0 < (int)uVar9) {
        uVar26 = 0;
        do {
          *(bool *)((longlong)plVar27 + (uVar26 - 0xe0)) = (uVar10 & uVar34) != 0;
          plVar27[uVar26 - 0x3a] = (longlong)plVar27 + (uVar26 - 0xe0);
          uVar30 = (int)uVar26 + 1;
          uVar26 = (ulonglong)uVar30;
          uVar34 = uVar34 << 1 | (uint)((int)uVar34 < 0);
        } while ((int)uVar30 < (int)uVar9);
      }
      plVar27[-0x49] = 0x1803178fa;
      cVar7 = FUN_1802c2b30("##value",plVar27[-0x22],plVar27 + -0x3a,uVar9);
      if (cVar7 != '\0') {
        uVar34 = 0;
        uVar26 = 0;
        if (0 < (int)uVar9) {
          do {
            if (*(char *)((longlong)plVar27 + (uVar26 - 0xe0)) != '\0') {
              uVar34 = uVar34 | 1 << ((uint)uVar26 & 0x1f);
            }
            uVar10 = (uint)uVar26 + 1;
            uVar26 = (ulonglong)uVar10;
          } while ((int)uVar10 < (int)uVar9);
        }
        *(float *)(lVar16 + 0x6c) = (float)(int)uVar34;
        plVar27[-0x49] = 0x180317937;
        puVar18 = (undefined8 *)FUN_1802c36f0(plVar27 + -0x14,plVar27[-0x22],uVar9);
        if (0xf < (ulonglong)puVar18[3]) {
          puVar18 = (undefined8 *)*puVar18;
        }
        plVar27[-0x49] = 0x18031795c;
        snprintf(lVar16 + 0xa0,0x30,&DAT_1806d3198,puVar18);
        plVar27[-0x49] = 0x180317968;
        FUN_18000f890(plVar27 + -0x14);
      }
      plVar21 = plVar27 + -0x48;
LAB_180317ba6:
      lVar16 = plVar27[-0x22];
      if (lVar16 == 0) goto LAB_180318047;
      uVar33 = (plVar27[-0x20] - lVar16 >> 3) * 8;
LAB_180317bc6:
      lVar23 = lVar16;
      if (0xfff < uVar33) {
        lVar23 = *(longlong *)(lVar16 + -8);
        if (0x1f < (lVar16 - lVar23) - 8U) {
LAB_180317fb7:
          iVar11 = (int)uVar33;
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)(5);
          plVar21 = (longlong *)((longlong)plVar21 + 8);
          goto LAB_180317fbe;
        }
        uVar33 = uVar33 + 0x27;
      }
      *(undefined8 *)((longlong)plVar21 + -8) = 0x180317bf0;
      thunk_FUN_1803d64e0(lVar23,uVar33);
      goto LAB_180318047;
    }
LAB_18031797e:
    iVar12 = *(int *)(uVar15 + 0x30);
    if (iVar12 == 3) {
      plVar29 = *(longlong **)(uVar15 + 0x68);
      plVar22 = *(longlong **)(uVar15 + 0x70);
      plVar27[-0x1e] = (longlong)plVar22;
      if (plVar29 != plVar22) {
        plVar27[-0x22] = 0;
        plVar27[-0x21] = 0;
        pfVar25 = (float *)0x0;
        plVar27[-0x20] = 0;
        uVar33 = 0x1fffffffffffffff;
        pfVar24 = (float *)plVar27[-0x21];
        plVar17 = (longlong *)plVar27[-0x22];
        do {
          if ((ulonglong)plVar29[3] < 0x10) {
            plVar35 = plVar29;
          }
          else {
            plVar35 = (longlong *)*plVar29;
          }
          if (pfVar24 == pfVar25) {
            if ((longlong)pfVar24 - (longlong)plVar17 == -8) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((longlong)plVar21 + -8) = 0x1803180a4;
              FUN_1800118d0();
            }
            uVar26 = ((longlong)pfVar24 - (longlong)plVar17 >> 3) + 1;
            uVar15 = (longlong)pfVar25 - (longlong)plVar17 >> 3;
            if (0x1fffffffffffffff - (uVar15 >> 1) < uVar15) {
              uVar20 = 0x1fffffffffffffff;
            }
            else {
              uVar15 = (uVar15 >> 1) + uVar15;
              uVar20 = uVar26;
              if (uVar26 <= uVar15) {
                uVar20 = uVar15;
              }
              if (0x1fffffffffffffff < uVar20) {
                    /* WARNING: Subroutine does not return */
                *(undefined **)((longlong)plVar21 + -8) = &UNK_1803180b6;
                FUN_18000d840();
              }
            }
            uVar15 = (longlong)pfVar24 - (longlong)plVar17;
            plVar27[-0x14] = uVar20 * 8;
            *(undefined8 *)((longlong)plVar21 + -8) = 0x180317a55;
            plVar17 = (longlong *)FUN_18000fb70(uVar20 * 8);
            uVar15 = uVar15 & 0xfffffffffffffff8;
            *(longlong **)((longlong)plVar17 + uVar15) = plVar35;
            pfVar25 = (float *)plVar27[-0x22];
            if (pfVar24 == (float *)plVar27[-0x21]) {
              lVar16 = plVar27[-0x21] - (longlong)pfVar25;
              plVar22 = plVar17;
            }
            else {
              *(undefined8 *)((longlong)plVar21 + -8) = 0x180317a80;
              FUN_180540530(plVar17,pfVar25,(longlong)pfVar24 - (longlong)pfVar25);
              lVar16 = plVar27[-0x21] - (longlong)pfVar24;
              plVar22 = (longlong *)(uVar15 + 8 + (longlong)plVar17);
              pfVar25 = pfVar24;
            }
            *(undefined8 *)((longlong)plVar21 + -8) = 0x180317a96;
            FUN_180540530(plVar22,pfVar25,lVar16);
            lVar16 = plVar27[-0x22];
            if (lVar16 != 0) {
              uVar20 = (plVar27[-0x20] - lVar16 >> 3) * 8;
              lVar23 = lVar16;
              if (0xfff < uVar20) {
                lVar23 = *(longlong *)(lVar16 + -8);
                if (0x1f < (lVar16 - lVar23) - 8U) {
                  pcVar5 = (code *)swi(0x29);
                  iVar12 = (*pcVar5)();
                  iVar11 = (int)uVar20;
                  plVar21 = (longlong *)((longlong)plVar21 + 8);
                  goto LAB_180317bfc;
                }
                uVar20 = uVar20 + 0x27;
              }
              *(undefined8 *)((longlong)plVar21 + -8) = 0x180317adc;
              thunk_FUN_1803d64e0(lVar23,uVar20);
            }
            plVar27[-0x22] = (longlong)plVar17;
            pfVar24 = (float *)(plVar17 + uVar26);
            pfVar25 = (float *)(plVar27[-0x14] + (longlong)plVar17);
            plVar27[-0x20] = (longlong)pfVar25;
            plVar22 = (longlong *)plVar27[-0x1e];
          }
          else {
            *(longlong **)pfVar24 = plVar35;
            pfVar24 = (float *)(plVar27[-0x21] + 8);
            pfVar25 = (float *)plVar27[-0x20];
            plVar17 = (longlong *)plVar27[-0x22];
          }
          plVar27[-0x21] = (longlong)pfVar24;
          plVar29 = plVar29 + 4;
        } while (plVar29 != plVar22);
        uVar34 = (int)((longlong)pfVar24 - (longlong)plVar17 >> 3) - 1;
        pfVar24 = (float *)(ulonglong)uVar34;
        *(uint *)(plVar27 + -0x1e) = uVar34;
        *(undefined4 *)((longlong)plVar21 + 0x48) = 0;
        lVar16 = *(longlong *)((longlong)plVar21 + 0x38);
        *(undefined8 *)((longlong)plVar21 + -8) = 0x180317b2a;
        iVar11 = FUN_1804f3280();
        *(int *)((longlong)plVar21 + 0x30) = iVar11;
        plVar17 = (longlong *)((longlong)plVar21 + 0x48);
        if (-1 < iVar11) {
          plVar17 = (longlong *)((longlong)plVar21 + 0x30);
        }
        plVar29 = plVar27 + -0x1e;
        if (iVar11 <= (int)uVar34) {
          plVar29 = plVar17;
        }
        *(int *)((longlong)plVar21 + 0x30) = (int)*plVar29;
        lVar23 = plVar27[-0x22];
        lVar4 = plVar27[-0x21];
        *(undefined8 *)((longlong)plVar21 + -8) = 0x180317b70;
        cVar7 = FUN_1802c2640("##value",(undefined1 *)((longlong)plVar21 + 0x30),lVar23,
                              lVar4 - lVar23 >> 3);
        if (cVar7 != '\0') {
          iVar11 = *(int *)((longlong)plVar21 + 0x30);
          *(float *)(lVar16 + 0x6c) = (float)iVar11;
          uVar36 = *(undefined8 *)(plVar27[-0x22] + (longlong)iVar11 * 8);
          *(undefined8 *)((longlong)plVar21 + -8) = 0x180317ba5;
          snprintf(lVar16 + 0xa0,0x30,&DAT_1806d3198,uVar36);
        }
        goto LAB_180317ba6;
      }
    }
    else {
LAB_180317bfc:
      if ((iVar12 == 2) &&
         (*(float *)(uVar15 + 0x34) <= *(float *)(uVar15 + 0x38) &&
          *(float *)(uVar15 + 0x38) != *(float *)(uVar15 + 0x34))) {
        pcVar31 = (char *)(uVar15 + 0x40);
        if (*(ulonglong *)(uVar15 + 0x58) < 0x10) {
          _Str = pcVar31;
        }
        else {
          _Str = *(char **)pcVar31;
        }
        plVar22 = plVar27 + -0x18;
        if (0xf < uVar33) {
          plVar22 = plVar17;
        }
        uVar33 = 0;
        plVar17 = plVar29;
        if (uVar26 != 0) {
          do {
            plVar17 = (longlong *)
                      (((ulonglong)plVar17 ^ (ulonglong)*(byte *)(uVar33 + (longlong)plVar22)) *
                      0x100000001b3);
            uVar33 = uVar33 + 1;
          } while (uVar33 < uVar26);
        }
        *(undefined8 *)((longlong)plVar21 + -8) = 0x180317c76;
        lVar16 = FUN_180354860(uVar33,plVar27 + -0x14,plVar27 + -0x18,plVar17);
        lVar16 = *(longlong *)(lVar16 + 8);
        if ((lVar16 == 0) || (lVar16 == DAT_181107428)) {
LAB_180317ce0:
          cVar7 = *(char *)(uVar15 + 0x60);
          if (_Str == (char *)0x0) {
LAB_180317cfc:
            _Str = "%.1f";
            if (cVar7 != '\0') {
              _Str = "%d";
            }
          }
          else {
            *(undefined8 *)((longlong)plVar21 + -8) = 0x180317cf7;
            lVar16 = FUN_1804ef420(_Str,0x25);
            if (lVar16 == 0) goto LAB_180317cfc;
          }
          plVar27[-0x19] = 0;
          plVar27[-0x1a] = 0;
          plVar27[-0x1c] = 0;
          plVar27[-0x1b] = 0;
          *(undefined8 *)((longlong)plVar21 + -8) = 0x180317d26;
          sVar14 = strlen(_Str);
          *(undefined8 *)((longlong)plVar21 + -8) = 0x180317d35;
          FUN_1800133a0(plVar27 + -0x1c,_Str,sVar14);
        }
        else {
          for (pfVar24 = *(float **)(lVar16 + 0x50); pfVar24 != *(float **)(lVar16 + 0x58);
              pfVar24 = pfVar24 + 10) {
            pfVar25 = pfVar24 + 2;
            if (*pfVar24 == *(float *)(*(longlong *)((longlong)plVar21 + 0x38) + 0x6c))
            goto LAB_180317cd3;
          }
          if (*(longlong *)(lVar16 + 0x40) == 0) goto LAB_180317ce0;
          pfVar25 = (float *)(lVar16 + 0x30);
LAB_180317cd3:
          *(undefined8 *)((longlong)plVar21 + -8) = 0x180317cdc;
          FUN_180024b50(plVar27 + -0x1c,pfVar25);
        }
        pfVar24 = *(float **)((longlong)plVar21 + 0x38);
        if (*(char *)(uVar15 + 0x60) == '\0') {
          *(float *)((longlong)plVar21 + 0x30) = pfVar24[0x1b];
          plVar17 = plVar27 + -0x1c;
          if (0xf < (ulonglong)plVar27[-0x19]) {
            plVar17 = (longlong *)plVar27[-0x1c];
          }
          *(undefined4 *)((longlong)plVar21 + 0x28) = 0;
          *(longlong **)((longlong)plVar21 + 0x20) = plVar17;
          uVar8 = *(undefined4 *)(uVar15 + 0x34);
          *(undefined8 *)((longlong)plVar21 + -8) = 0x180317df1;
          cVar7 = FUN_18033e3a0("##value",(undefined1 *)((longlong)plVar21 + 0x30),uVar8);
          if (cVar7 != '\0') {
            fVar39 = *(float *)((longlong)plVar21 + 0x30);
            pfVar24[0x1b] = fVar39;
            pfVar25 = pfVar24;
            goto LAB_180317e07;
          }
LAB_180317f96:
          if ((ulonglong)plVar27[-0x19] < 0x10) goto LAB_180318047;
          uVar33 = plVar27[-0x19] + 1;
          lVar16 = plVar27[-0x1c];
          goto LAB_180317bc6;
        }
        *(undefined8 *)((longlong)plVar21 + -8) = 0x180317d4c;
        uVar8 = FUN_1804f3280();
        *(undefined4 *)((longlong)plVar21 + 0x30) = uVar8;
        plVar17 = plVar27 + -0x1c;
        if (0xf < (ulonglong)plVar27[-0x19]) {
          plVar17 = (longlong *)plVar27[-0x1c];
        }
        *(undefined8 *)((longlong)plVar21 + -8) = 0x180317d69;
        uVar34 = FUN_1804f3280();
        pfVar24 = (float *)(ulonglong)uVar34;
        *(undefined8 *)((longlong)plVar21 + -8) = 0x180317d76;
        uVar8 = FUN_1804f3280();
        *(undefined4 *)((longlong)plVar21 + 0x28) = 0;
        *(longlong **)((longlong)plVar21 + 0x20) = plVar17;
        *(undefined8 *)((longlong)plVar21 + -8) = 0x180317d9a;
        cVar7 = FUN_18033fa10("##value",(undefined1 *)((longlong)plVar21 + 0x30),uVar8,uVar34);
        if (cVar7 == '\0') goto LAB_180317f96;
        fVar39 = (float)*(int *)((longlong)plVar21 + 0x30);
        pfVar25 = *(float **)((longlong)plVar21 + 0x38);
        pfVar25[0x1b] = fVar39;
LAB_180317e07:
        if (0xf < *(ulonglong *)(uVar15 + 0x58)) {
          pcVar31 = *(char **)pcVar31;
        }
        plVar17 = plVar27 + -0x18;
        if (0xf < (ulonglong)plVar27[-0x15]) {
          plVar17 = (longlong *)plVar27[-0x18];
        }
        uVar33 = 0;
        if (uVar26 != 0) {
          do {
            plVar29 = (longlong *)
                      (((ulonglong)plVar29 ^ (ulonglong)*(byte *)(uVar33 + (longlong)plVar17)) *
                      0x100000001b3);
            uVar33 = uVar33 + 1;
          } while (uVar33 < uVar26);
          pfVar25 = *(float **)((longlong)plVar21 + 0x38);
        }
        *(undefined8 *)((longlong)plVar21 + -8) = 0x180317e6e;
        lVar16 = FUN_180354860(uVar33,plVar27 + -0x14,plVar27 + -0x18,plVar29);
        lVar16 = *(longlong *)(lVar16 + 8);
        if ((lVar16 == 0) || (lVar16 == DAT_181107428)) {
LAB_180317ec9:
          bVar3 = *(byte *)(uVar15 + 0x60);
          pfVar24 = (float *)(ulonglong)bVar3;
          if (pcVar31 == (char *)0x0) {
LAB_180317f03:
            pcVar31 = "%.1f";
            if (bVar3 != 0) {
              pcVar31 = "%d";
            }
            plVar27[-0x22] = 0;
            plVar27[-0x21] = 0;
            plVar27[-0x20] = 0;
            plVar27[-0x1f] = 0;
            *(undefined8 *)((longlong)plVar21 + -8) = 0x180317f29;
            sVar14 = strlen(pcVar31);
          }
          else {
            *(undefined8 *)((longlong)plVar21 + -8) = 0x180317ee0;
            lVar16 = FUN_1804ef420(pcVar31,0x25);
            if (lVar16 == 0) goto LAB_180317f03;
            plVar27[-0x22] = 0;
            plVar27[-0x21] = 0;
            plVar27[-0x20] = 0;
            plVar27[-0x1f] = 0;
            *(undefined8 *)((longlong)plVar21 + -8) = 0x180317efe;
            sVar14 = strlen(pcVar31);
          }
          *(undefined8 *)((longlong)plVar21 + -8) = 0x180317f38;
          FUN_1800133a0(plVar27 + -0x22,pcVar31,sVar14);
        }
        else {
          for (pfVar19 = *(float **)(lVar16 + 0x50); pfVar19 != *(float **)(lVar16 + 0x58);
              pfVar19 = pfVar19 + 10) {
            if (*pfVar19 == fVar39) {
              *(undefined8 *)((longlong)plVar21 + -8) = 0x180317ec7;
              FUN_180024b50(plVar27 + -0x22,pfVar19 + 2);
              goto LAB_180317f38;
            }
          }
          if (*(longlong *)(lVar16 + 0x40) == 0) goto LAB_180317ec9;
          *(undefined8 *)((longlong)plVar21 + -8) = 0x180317eb8;
          FUN_180024b50(plVar27 + -0x22,lVar16 + 0x30);
        }
LAB_180317f38:
        plVar17 = plVar27 + -0x22;
        if (0xf < (ulonglong)plVar27[-0x1f]) {
          plVar17 = (longlong *)plVar27[-0x22];
        }
        *(undefined8 *)((longlong)plVar21 + -8) = 0x180317f5e;
        snprintf(pfVar25 + 0x34,0x10,&DAT_1806d3198,plVar17);
        uVar26 = plVar27[-0x1f];
        if (uVar26 < 0x10) goto LAB_180317f96;
        uVar33 = uVar26 + 1;
        lVar16 = plVar27[-0x22];
        lVar23 = lVar16;
        if (uVar33 < 0x1000) {
LAB_180317f90:
          *(undefined8 *)((longlong)plVar21 + -8) = 0x180317f95;
          thunk_FUN_1803d64e0(lVar23,uVar33);
          goto LAB_180317f96;
        }
        lVar23 = *(longlong *)(lVar16 + -8);
        if ((lVar16 - lVar23) - 8U < 0x20) {
          uVar33 = uVar26 + 0x28;
          goto LAB_180317f90;
        }
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        plVar21 = (longlong *)((longlong)plVar21 + 8);
        goto LAB_180317fb7;
      }
    }
LAB_180317fbe:
    if ((iVar11 == 1) || ((uVar15 != 0 && (*(int *)(uVar15 + 0x30) == 1)))) {
      plVar27[-0x14] = (longlong)&DAT_1807600a8;
      plVar27[-0x13] = (longlong)&DAT_180767384;
      lVar16 = *(longlong *)((longlong)plVar21 + 0x38);
      *(uint *)((longlong)plVar21 + 0x30) = (uint)(*(char *)(lVar16 + 0x68) != '\0');
      *(undefined8 *)((longlong)plVar21 + -8) = 0x180318038;
      cVar7 = FUN_1802c2640("##value",(undefined1 *)((longlong)plVar21 + 0x30),plVar27 + -0x14,2);
      if (cVar7 != '\0') {
        *(bool *)(lVar16 + 0x68) = *(int *)((longlong)plVar21 + 0x30) == 1;
      }
      goto LAB_180318047;
    }
  }
  *(float *)((longlong)plVar21 + 0x38) = fVar39 - *pfVar24;
  *(undefined4 *)((longlong)plVar21 + 0x3c) = 0x41bda5e3;
  *(undefined8 *)((longlong)plVar21 + -8) = 0x180317feb;
  FUN_1804174f0((undefined1 *)((longlong)plVar21 + 0x38));
LAB_180318047:
  lVar16 = *(longlong *)((longlong)plVar21 + 0x50);
  *(undefined4 *)(lVar16 + 0x250) = uVar1;
  *(undefined4 *)(lVar16 + 0x280) = uVar2;
  *(undefined8 *)((longlong)plVar21 + -8) = 0x180318069;
  FUN_18000f890(plVar27 + -0x18);
  *(undefined8 *)((longlong)plVar21 + -8) = 0x180318078;
  return;
}



/* ===== 1803174d0 FUN_1803174d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803174d0(char *param_1,float *****param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  size_t sVar12;
  undefined *puVar13;
  longlong lVar14;
  float *****pppppfVar15;
  undefined8 *puVar16;
  float *pfVar17;
  ulonglong uVar18;
  float ****ppppfVar19;
  float *****pppppfVar20;
  float *****pppppfVar21;
  ulonglong uVar22;
  float *pfVar23;
  char *_Str;
  undefined1 *puVar24;
  float ****ppppfVar25;
  uint uVar26;
  ulonglong uVar27;
  float ****ppppfVar28;
  ulonglong uVar29;
  char *pcVar30;
  uint uVar31;
  undefined8 uStack_250;
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [24];
  undefined8 uStack_228;
  uint auStack_220 [2];
  float local_218 [2];
  undefined8 local_210;
  undefined1 local_208 [8];
  longlong local_200;
  longlong local_1f8 [2];
  undefined4 local_1e8;
  undefined4 local_1e4;
  longlong local_1d8 [24];
  float *****local_118;
  float *****pppppfStack_110;
  float *****local_108;
  ulonglong local_100;
  float ****local_f8;
  undefined4 local_f0;
  float *****local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  float *****local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined *local_a8;
  undefined *local_a0;
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_248;
  local_c8 = (float *****)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_210 = param_1;
  sVar12 = strlen(param_1);
  FUN_1800133a0(&local_c8,param_1,sVar12);
  puVar13 = (undefined *)FUN_180315fa0(&local_c8);
  local_a8 = puVar13;
  if (DAT_180cc3e19 == '\0') {
    DAT_180cc3e19 = '\x01';
    FUN_1800ff4a0(local_208,&DAT_18091a190);
  }
  uVar29 = local_b0;
  uVar22 = local_b8;
  pppppfVar15 = local_c8;
  pppppfVar20 = (float *****)&local_c8;
  if (0xf < local_b0) {
    pppppfVar20 = local_c8;
  }
  ppppfVar25 = (float ****)0xcbf29ce484222325;
  uVar27 = 0xcbf29ce484222325;
  uVar18 = 0;
  if (local_b8 != 0) {
    do {
      uVar27 = (uVar27 ^ *(byte *)((longlong)pppppfVar20 + uVar18)) * 0x100000001b3;
      uVar18 = uVar18 + 1;
    } while (uVar18 < local_b8);
  }
  lVar14 = FUN_18014a630(uVar18,&local_f8,&local_c8,uVar27);
  lVar5 = DAT_180ca0a50;
  puVar24 = auStack_248;
  lVar14 = *(longlong *)(lVar14 + 8);
  uVar31 = 1;
  if ((lVar14 == 0) || (lVar14 == DAT_180cd12c8)) {
    iVar9 = 0;
    uVar11 = 1;
  }
  else {
    iVar9 = *(int *)(lVar14 + 0x38);
    uVar11 = *(undefined4 *)(lVar14 + 0x3c);
  }
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  local_1f8[0] = *(longlong *)(lVar5 + 0x14f8);
  local_1f8[1] = local_1f8[0];
  uVar1 = *(undefined4 *)(local_1f8[0] + 0x250);
  local_1e8 = uVar1;
  uVar2 = *(undefined4 *)(local_1f8[0] + 0x280);
  local_1e4 = uVar2;
  *(float *)(local_1f8[0] + 0x250) = param_3;
  *(float *)(local_1f8[0] + 0x280) = param_3;
  *(undefined1 *)(*(longlong *)(lVar5 + 0x14f8) + 0xce) = 1;
  lVar14 = *(longlong *)(lVar5 + 0x14f8);
  *(float *****)(lVar14 + 0x118) = *param_2;
  *(undefined1 *)(lVar14 + 0x159) = 1;
  if (iVar9 != 4) {
LAB_180317975:
    if (puVar13 != (undefined *)0x0) goto LAB_18031797e;
    goto LAB_180317fbe;
  }
  puVar24 = auStack_248;
  if (puVar13 != (undefined *)0x0) {
    puVar24 = auStack_248;
    if (*(int *)(puVar13 + 0x30) == 4) {
      puVar24 = auStack_248;
      if (*(longlong *)(puVar13 + 0x68) == *(longlong *)(puVar13 + 0x70)) goto LAB_18031797e;
      local_f8 = (float ****)
                 CONCAT44(uVar11,(int)(*(longlong *)(puVar13 + 0x70) - *(longlong *)(puVar13 + 0x68)
                                      >> 5));
      local_f0 = 0x18;
      uVar7 = thunk_FUN_1804e8250(&local_f8);
      uVar22 = (ulonglong)uVar7;
      local_118 = (float *****)0x0;
      pppppfStack_110 = (float *****)0x0;
      local_108 = (float *****)0x0;
      local_218[0] = 0.0;
      if (0 < (int)uVar7) {
        uVar29 = 0x1fffffffffffffff;
        do {
          param_2 = pppppfStack_110;
          ppppfVar25 = (float ****)
                       ((ulonglong)(uint)local_218[0] * 0x20 + *(longlong *)(puVar13 + 0x68));
          if ((float ***)0xf < ppppfVar25[3]) {
            ppppfVar25 = (float ****)*ppppfVar25;
          }
          if (pppppfStack_110 == local_108) {
            if ((longlong)pppppfStack_110 - (longlong)local_118 == -8) {
                    /* WARNING: Subroutine does not return */
              FUN_1800118d0();
            }
            local_f8 = (float ****)(((longlong)pppppfStack_110 - (longlong)local_118 >> 3) + 1);
            uVar18 = (longlong)local_108 - (longlong)local_118 >> 3;
            if (0x1fffffffffffffff - (uVar18 >> 1) < uVar18) {
              ppppfVar19 = (float ****)0x1fffffffffffffff;
            }
            else {
              ppppfVar28 = (float ****)((uVar18 >> 1) + uVar18);
              ppppfVar19 = local_f8;
              if (local_f8 <= ppppfVar28) {
                ppppfVar19 = ppppfVar28;
              }
              if ((float ****)0x1fffffffffffffff < ppppfVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_18000d840();
              }
            }
            uVar18 = (longlong)pppppfStack_110 - (longlong)local_118;
            local_200 = (longlong)ppppfVar19 * 8;
            pppppfVar15 = (float *****)FUN_18000fb70(local_200);
            puVar13 = (undefined *)(uVar18 & 0xfffffffffffffff8);
            *(float *****)((longlong)pppppfVar15 + (longlong)puVar13) = ppppfVar25;
            if (param_2 == pppppfStack_110) {
              lVar14 = (longlong)pppppfStack_110 - (longlong)local_118;
              pppppfVar20 = pppppfVar15;
              pppppfVar21 = local_118;
            }
            else {
              FUN_180540530(pppppfVar15,local_118,(longlong)param_2 - (longlong)local_118);
              lVar14 = (longlong)pppppfStack_110 - (longlong)param_2;
              pppppfVar20 = (float *****)(puVar13 + 8 + (longlong)pppppfVar15);
              pppppfVar21 = param_2;
            }
            FUN_180540530(pppppfVar20,pppppfVar21,lVar14);
            if (local_118 != (float *****)0x0) {
              uVar18 = ((longlong)local_108 - (longlong)local_118 >> 3) * 8;
              pppppfVar20 = local_118;
              if (0xfff < uVar18) {
                pppppfVar20 = (float *****)local_118[-1];
                if ((undefined *)0x1f <
                    (undefined *)((longlong)local_118 + (-8 - (longlong)pppppfVar20))) {
                  pcVar4 = (code *)swi(0x29);
                  (*pcVar4)();
                  iVar9 = (int)uVar18;
                  puVar24 = auStack_240;
                  goto LAB_180317975;
                }
                uVar18 = uVar18 + 0x27;
              }
              thunk_FUN_1803d64e0(pppppfVar20,uVar18);
            }
            pppppfStack_110 = pppppfVar15 + (longlong)local_f8;
            local_108 = (float *****)(local_200 + (longlong)pppppfVar15);
            puVar13 = local_a8;
            local_118 = pppppfVar15;
          }
          else {
            *pppppfStack_110 = ppppfVar25;
            pppppfStack_110 = pppppfStack_110 + 1;
          }
          local_218[0] = (float)((int)local_218[0] + 1);
        } while ((int)local_218[0] < (int)uVar7);
      }
      pcVar30 = local_210;
      uVar8 = FUN_1804f3280();
      param_2 = (float *****)(ulonglong)uVar8;
      local_e8 = (float *****)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      FUN_180540170(local_1d8,0);
      if (0 < (int)uVar7) {
        uVar22 = 0;
        do {
          *(bool *)((longlong)&local_e8 + uVar22) = (uVar8 & uVar31) != 0;
          local_1d8[uVar22] = (longlong)&local_e8 + uVar22;
          uVar26 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar26;
          uVar31 = uVar31 << 1 | (uint)((int)uVar31 < 0);
        } while ((int)uVar26 < (int)uVar7);
      }
      cVar6 = FUN_1802c2b30("##value",local_118,local_1d8,uVar7);
      if (cVar6 != '\0') {
        uVar31 = 0;
        uVar22 = 0;
        if (0 < (int)uVar7) {
          do {
            if (*(char *)((longlong)&local_e8 + uVar22) != '\0') {
              uVar31 = uVar31 | 1 << ((uint)uVar22 & 0x1f);
            }
            uVar8 = (uint)uVar22 + 1;
            uVar22 = (ulonglong)uVar8;
          } while ((int)uVar8 < (int)uVar7);
        }
        *(float *)(pcVar30 + 0x6c) = (float)(int)uVar31;
        puVar16 = (undefined8 *)FUN_1802c36f0(&local_a8,local_118,uVar7);
        if (0xf < (ulonglong)puVar16[3]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        snprintf(pcVar30 + 0xa0,0x30,&DAT_1806d3198,puVar16);
        FUN_18000f890(&local_a8);
      }
      puVar24 = auStack_248;
LAB_180317ba6:
      if (local_118 == (float *****)0x0) goto LAB_180318047;
      uVar22 = ((longlong)local_108 - (longlong)local_118 >> 3) * 8;
      pppppfVar15 = local_118;
LAB_180317bc6:
      pppppfVar20 = pppppfVar15;
      if (0xfff < uVar22) {
        pppppfVar20 = (float *****)pppppfVar15[-1];
        if ((undefined *)0x1f < (undefined *)((longlong)pppppfVar15 + (-8 - (longlong)pppppfVar20)))
        {
LAB_180317fb7:
          iVar9 = (int)uVar22;
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar24 = puVar24 + 8;
          goto LAB_180317fbe;
        }
        uVar22 = uVar22 + 0x27;
      }
      *(undefined8 *)(puVar24 + -8) = 0x180317bf0;
      thunk_FUN_1803d64e0(pppppfVar20,uVar22);
      goto LAB_180318047;
    }
LAB_18031797e:
    iVar10 = *(int *)(puVar13 + 0x30);
    if (iVar10 == 3) {
      ppppfVar25 = *(float *****)(puVar13 + 0x68);
      ppppfVar28 = *(float *****)(puVar13 + 0x70);
      local_f8 = ppppfVar28;
      if (ppppfVar25 != ppppfVar28) {
        local_118 = (float *****)0x0;
        pppppfStack_110 = (float *****)0x0;
        local_108 = (float *****)0x0;
        uVar29 = 0x1fffffffffffffff;
        do {
          param_2 = pppppfStack_110;
          if (ppppfVar25[3] < (float ***)0x10) {
            ppppfVar19 = ppppfVar25;
          }
          else {
            ppppfVar19 = (float ****)*ppppfVar25;
          }
          if (pppppfStack_110 == local_108) {
            if ((longlong)pppppfStack_110 - (longlong)local_118 == -8) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar24 + -8) = 0x1803180a4;
              FUN_1800118d0();
            }
            uVar22 = ((longlong)pppppfStack_110 - (longlong)local_118 >> 3) + 1;
            uVar18 = (longlong)local_108 - (longlong)local_118 >> 3;
            if (0x1fffffffffffffff - (uVar18 >> 1) < uVar18) {
              uVar27 = 0x1fffffffffffffff;
            }
            else {
              uVar18 = (uVar18 >> 1) + uVar18;
              uVar27 = uVar22;
              if (uVar22 <= uVar18) {
                uVar27 = uVar18;
              }
              if (0x1fffffffffffffff < uVar27) {
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar24 + -8) = &UNK_1803180b6;
                FUN_18000d840();
              }
            }
            uVar18 = (longlong)pppppfStack_110 - (longlong)local_118;
            local_a8 = (undefined *)(uVar27 * 8);
            *(undefined8 *)(puVar24 + -8) = 0x180317a55;
            pppppfVar15 = (float *****)FUN_18000fb70(local_a8);
            puVar13 = (undefined *)(uVar18 & 0xfffffffffffffff8);
            *(float *****)((longlong)pppppfVar15 + (longlong)puVar13) = ppppfVar19;
            if (param_2 == pppppfStack_110) {
              lVar14 = (longlong)pppppfStack_110 - (longlong)local_118;
              pppppfVar20 = pppppfVar15;
              pppppfVar21 = local_118;
            }
            else {
              *(undefined8 *)(puVar24 + -8) = 0x180317a80;
              FUN_180540530(pppppfVar15,local_118,(longlong)param_2 - (longlong)local_118);
              lVar14 = (longlong)pppppfStack_110 - (longlong)param_2;
              pppppfVar20 = (float *****)(puVar13 + 8 + (longlong)pppppfVar15);
              pppppfVar21 = param_2;
            }
            *(undefined8 *)(puVar24 + -8) = 0x180317a96;
            FUN_180540530(pppppfVar20,pppppfVar21,lVar14);
            if (local_118 != (float *****)0x0) {
              uVar18 = ((longlong)local_108 - (longlong)local_118 >> 3) * 8;
              pppppfVar20 = local_118;
              if (0xfff < uVar18) {
                pppppfVar20 = (float *****)local_118[-1];
                if ((undefined *)0x1f <
                    (undefined *)((longlong)local_118 + (-8 - (longlong)pppppfVar20))) {
                  pcVar4 = (code *)swi(0x29);
                  iVar10 = (*pcVar4)();
                  iVar9 = (int)uVar18;
                  puVar24 = puVar24 + 8;
                  goto LAB_180317bfc;
                }
                uVar18 = uVar18 + 0x27;
              }
              *(undefined8 *)(puVar24 + -8) = 0x180317adc;
              thunk_FUN_1803d64e0(pppppfVar20,uVar18);
            }
            local_118 = pppppfVar15;
            pppppfStack_110 = pppppfVar15 + uVar22;
            local_108 = (float *****)(local_a8 + (longlong)pppppfVar15);
            ppppfVar28 = local_f8;
          }
          else {
            *pppppfStack_110 = ppppfVar19;
            pppppfStack_110 = pppppfStack_110 + 1;
          }
          ppppfVar25 = ppppfVar25 + 4;
        } while (ppppfVar25 != ppppfVar28);
        uVar31 = (int)((longlong)pppppfStack_110 - (longlong)local_118 >> 3) - 1;
        param_2 = (float *****)(ulonglong)uVar31;
        local_f8 = (float ****)CONCAT44(local_f8._4_4_,uVar31);
        *(undefined4 *)(puVar24 + 0x48) = 0;
        lVar14 = *(longlong *)(puVar24 + 0x38);
        *(undefined8 *)(puVar24 + -8) = 0x180317b2a;
        iVar9 = FUN_1804f3280();
        *(int *)(puVar24 + 0x30) = iVar9;
        ppppfVar25 = (float ****)(puVar24 + 0x48);
        if (-1 < iVar9) {
          ppppfVar25 = (float ****)(puVar24 + 0x30);
        }
        ppppfVar28 = (float ****)&local_f8;
        if (iVar9 <= (int)uVar31) {
          ppppfVar28 = ppppfVar25;
        }
        *(undefined4 *)(puVar24 + 0x30) = *(undefined4 *)ppppfVar28;
        *(undefined8 *)(puVar24 + -8) = 0x180317b70;
        cVar6 = FUN_1802c2640("##value",puVar24 + 0x30,local_118,
                              (longlong)pppppfStack_110 - (longlong)local_118 >> 3);
        if (cVar6 != '\0') {
          iVar9 = *(int *)(puVar24 + 0x30);
          *(float *)(lVar14 + 0x6c) = (float)iVar9;
          ppppfVar25 = local_118[iVar9];
          *(undefined8 *)(puVar24 + -8) = 0x180317ba5;
          snprintf(lVar14 + 0xa0,0x30,&DAT_1806d3198,ppppfVar25);
        }
        goto LAB_180317ba6;
      }
    }
    else {
LAB_180317bfc:
      if ((iVar10 == 2) &&
         (*(float *)(puVar13 + 0x34) <= *(float *)(puVar13 + 0x38) &&
          *(float *)(puVar13 + 0x38) != *(float *)(puVar13 + 0x34))) {
        pcVar30 = puVar13 + 0x40;
        if (*(ulonglong *)(puVar13 + 0x58) < 0x10) {
          _Str = pcVar30;
        }
        else {
          _Str = *(char **)pcVar30;
        }
        pppppfVar20 = (float *****)&local_c8;
        if (0xf < uVar29) {
          pppppfVar20 = pppppfVar15;
        }
        uVar29 = 0;
        ppppfVar28 = ppppfVar25;
        if (uVar22 != 0) {
          do {
            ppppfVar28 = (float ****)
                         (((ulonglong)ppppfVar28 ^
                          (ulonglong)*(byte *)(uVar29 + (longlong)pppppfVar20)) * 0x100000001b3);
            uVar29 = uVar29 + 1;
          } while (uVar29 < uVar22);
        }
        *(undefined8 *)(puVar24 + -8) = 0x180317c76;
        lVar14 = FUN_180354860(uVar29,&local_a8,&local_c8,ppppfVar28);
        lVar14 = *(longlong *)(lVar14 + 8);
        if ((lVar14 == 0) || (lVar14 == DAT_181107428)) {
LAB_180317ce0:
          cVar6 = puVar13[0x60];
          if (_Str == (char *)0x0) {
LAB_180317cfc:
            _Str = "%.1f";
            if (cVar6 != '\0') {
              _Str = "%d";
            }
          }
          else {
            *(undefined8 *)(puVar24 + -8) = 0x180317cf7;
            lVar14 = FUN_1804ef420(_Str,0x25);
            if (lVar14 == 0) goto LAB_180317cfc;
          }
          local_d0 = 0;
          local_d8 = 0;
          local_e8 = (float *****)0x0;
          uStack_e0 = 0;
          *(undefined8 *)(puVar24 + -8) = 0x180317d26;
          sVar12 = strlen(_Str);
          *(undefined8 *)(puVar24 + -8) = 0x180317d35;
          FUN_1800133a0(&local_e8,_Str,sVar12);
        }
        else {
          for (pfVar17 = *(float **)(lVar14 + 0x50); pfVar17 != *(float **)(lVar14 + 0x58);
              pfVar17 = pfVar17 + 10) {
            pfVar23 = pfVar17 + 2;
            if (*pfVar17 == *(float *)(*(longlong *)(puVar24 + 0x38) + 0x6c)) goto LAB_180317cd3;
          }
          if (*(longlong *)(lVar14 + 0x40) == 0) goto LAB_180317ce0;
          pfVar23 = (float *)(lVar14 + 0x30);
LAB_180317cd3:
          *(undefined8 *)(puVar24 + -8) = 0x180317cdc;
          FUN_180024b50(&local_e8,pfVar23);
        }
        param_2 = *(float ******)(puVar24 + 0x38);
        if (puVar13[0x60] == '\0') {
          *(float *)(puVar24 + 0x30) = *(float *)((longlong)param_2 + 0x6c);
          pppppfVar15 = (float *****)&local_e8;
          if (0xf < local_d0) {
            pppppfVar15 = local_e8;
          }
          *(undefined4 *)(puVar24 + 0x28) = 0;
          *(float ******)(puVar24 + 0x20) = pppppfVar15;
          uVar11 = *(undefined4 *)(puVar13 + 0x34);
          *(undefined8 *)(puVar24 + -8) = 0x180317df1;
          cVar6 = FUN_18033e3a0("##value",puVar24 + 0x30,uVar11);
          if (cVar6 != '\0') {
            param_3 = *(float *)(puVar24 + 0x30);
            *(float *)((longlong)param_2 + 0x6c) = param_3;
            pppppfVar15 = param_2;
            goto LAB_180317e07;
          }
LAB_180317f96:
          if (local_d0 < 0x10) goto LAB_180318047;
          uVar22 = local_d0 + 1;
          pppppfVar15 = local_e8;
          goto LAB_180317bc6;
        }
        *(undefined8 *)(puVar24 + -8) = 0x180317d4c;
        uVar11 = FUN_1804f3280();
        *(undefined4 *)(puVar24 + 0x30) = uVar11;
        pppppfVar15 = (float *****)&local_e8;
        if (0xf < local_d0) {
          pppppfVar15 = local_e8;
        }
        *(undefined8 *)(puVar24 + -8) = 0x180317d69;
        uVar31 = FUN_1804f3280();
        param_2 = (float *****)(ulonglong)uVar31;
        *(undefined8 *)(puVar24 + -8) = 0x180317d76;
        uVar11 = FUN_1804f3280();
        *(undefined4 *)(puVar24 + 0x28) = 0;
        *(float ******)(puVar24 + 0x20) = pppppfVar15;
        *(undefined8 *)(puVar24 + -8) = 0x180317d9a;
        cVar6 = FUN_18033fa10("##value",puVar24 + 0x30,uVar11,uVar31);
        if (cVar6 == '\0') goto LAB_180317f96;
        param_3 = (float)*(int *)(puVar24 + 0x30);
        pppppfVar15 = *(float ******)(puVar24 + 0x38);
        *(float *)((longlong)pppppfVar15 + 0x6c) = param_3;
LAB_180317e07:
        if (0xf < *(ulonglong *)(puVar13 + 0x58)) {
          pcVar30 = *(char **)pcVar30;
        }
        pppppfVar20 = (float *****)&local_c8;
        if (0xf < local_b0) {
          pppppfVar20 = local_c8;
        }
        uVar29 = 0;
        if (uVar22 != 0) {
          do {
            ppppfVar25 = (float ****)
                         (((ulonglong)ppppfVar25 ^
                          (ulonglong)*(byte *)(uVar29 + (longlong)pppppfVar20)) * 0x100000001b3);
            uVar29 = uVar29 + 1;
          } while (uVar29 < uVar22);
          pppppfVar15 = *(float ******)(puVar24 + 0x38);
        }
        *(undefined8 *)(puVar24 + -8) = 0x180317e6e;
        lVar14 = FUN_180354860(uVar29,&local_a8,&local_c8,ppppfVar25);
        lVar14 = *(longlong *)(lVar14 + 8);
        if ((lVar14 == 0) || (lVar14 == DAT_181107428)) {
LAB_180317ec9:
          bVar3 = puVar13[0x60];
          param_2 = (float *****)(ulonglong)bVar3;
          if (pcVar30 == (char *)0x0) {
LAB_180317f03:
            pcVar30 = "%.1f";
            if (bVar3 != 0) {
              pcVar30 = "%d";
            }
            local_118 = (float *****)0x0;
            pppppfStack_110 = (float *****)0x0;
            local_108 = (float *****)0x0;
            local_100 = 0;
            *(undefined8 *)(puVar24 + -8) = 0x180317f29;
            sVar12 = strlen(pcVar30);
          }
          else {
            *(undefined8 *)(puVar24 + -8) = 0x180317ee0;
            lVar14 = FUN_1804ef420(pcVar30,0x25);
            if (lVar14 == 0) goto LAB_180317f03;
            local_118 = (float *****)0x0;
            pppppfStack_110 = (float *****)0x0;
            local_108 = (float *****)0x0;
            local_100 = 0;
            *(undefined8 *)(puVar24 + -8) = 0x180317efe;
            sVar12 = strlen(pcVar30);
          }
          *(undefined8 *)(puVar24 + -8) = 0x180317f38;
          FUN_1800133a0(&local_118,pcVar30,sVar12);
        }
        else {
          for (pfVar17 = *(float **)(lVar14 + 0x50); pfVar17 != *(float **)(lVar14 + 0x58);
              pfVar17 = pfVar17 + 10) {
            if (*pfVar17 == param_3) {
              *(undefined8 *)(puVar24 + -8) = 0x180317ec7;
              FUN_180024b50(&local_118,pfVar17 + 2);
              goto LAB_180317f38;
            }
          }
          if (*(longlong *)(lVar14 + 0x40) == 0) goto LAB_180317ec9;
          *(undefined8 *)(puVar24 + -8) = 0x180317eb8;
          FUN_180024b50(&local_118,lVar14 + 0x30);
        }
LAB_180317f38:
        pppppfVar20 = (float *****)&local_118;
        if (0xf < local_100) {
          pppppfVar20 = local_118;
        }
        *(undefined8 *)(puVar24 + -8) = 0x180317f5e;
        snprintf(pppppfVar15 + 0x1a,0x10,&DAT_1806d3198,pppppfVar20);
        if (local_100 < 0x10) goto LAB_180317f96;
        uVar22 = local_100 + 1;
        pppppfVar15 = local_118;
        if (uVar22 < 0x1000) {
LAB_180317f90:
          *(undefined8 *)(puVar24 + -8) = 0x180317f95;
          thunk_FUN_1803d64e0(pppppfVar15,uVar22);
          goto LAB_180317f96;
        }
        pppppfVar15 = (float *****)local_118[-1];
        if ((undefined *)((longlong)local_118 + (-8 - (longlong)pppppfVar15)) < (undefined *)0x20) {
          uVar22 = local_100 + 0x28;
          goto LAB_180317f90;
        }
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar24 = puVar24 + 8;
        goto LAB_180317fb7;
      }
    }
LAB_180317fbe:
    if ((iVar9 == 1) || ((puVar13 != (undefined *)0x0 && (*(int *)(puVar13 + 0x30) == 1)))) {
      local_a8 = &DAT_1807600a8;
      local_a0 = &DAT_180767384;
      lVar14 = *(longlong *)(puVar24 + 0x38);
      *(uint *)(puVar24 + 0x30) = (uint)(*(char *)(lVar14 + 0x68) != '\0');
      *(undefined8 *)(puVar24 + -8) = 0x180318038;
      cVar6 = FUN_1802c2640("##value",puVar24 + 0x30,&local_a8,2);
      if (cVar6 != '\0') {
        *(bool *)(lVar14 + 0x68) = *(int *)(puVar24 + 0x30) == 1;
      }
      goto LAB_180318047;
    }
  }
  *(float *)(puVar24 + 0x38) = param_3 - *(float *)param_2;
  *(undefined4 *)(puVar24 + 0x3c) = 0x41bda5e3;
  *(undefined8 *)(puVar24 + -8) = 0x180317feb;
  FUN_1804174f0(puVar24 + 0x38);
LAB_180318047:
  lVar14 = *(longlong *)(puVar24 + 0x50);
  *(undefined4 *)(lVar14 + 0x250) = uVar1;
  *(undefined4 *)(lVar14 + 0x280) = uVar2;
  *(undefined8 *)(puVar24 + -8) = 0x180318069;
  FUN_18000f890(&local_c8);
  *(undefined8 *)(puVar24 + -8) = 0x180318078;
  return;
}



/* ===== 1803180c0 FUN_1803180c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803180c0(ulonglong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 *puVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  longlong *plVar10;
  size_t sVar11;
  undefined4 *puVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *****pppppuVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  char *****pppppcVar21;
  longlong *plVar22;
  ulonglong uVar23;
  uint uVar24;
  char *pcVar25;
  undefined8 uVar26;
  longlong *plVar27;
  uint uVar28;
  longlong lVar29;
  longlong unaff_R12;
  undefined8 *unaff_R14;
  undefined8 *puVar30;
  undefined4 uVar31;
  longlong *unaff_R15;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  undefined8 extraout_XMM0_Qa;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uStack_570;
  undefined1 auStack_568 [8];
  undefined1 auStack_560 [24];
  undefined8 *local_548;
  char *****local_540;
  char *****local_538;
  undefined8 local_530;
  ulonglong local_528;
  undefined4 local_520;
  undefined4 local_518;
  undefined8 local_508;
  float local_500 [4];
  float local_4f0 [2];
  int local_4e8;
  undefined4 local_4e4;
  float local_4e0;
  undefined8 local_4dc;
  float local_4d4;
  longlong local_4d0;
  undefined8 local_4c8;
  float local_4c0;
  float local_4bc;
  int local_4b8;
  float local_4b4;
  float local_4b0;
  float local_4ac;
  float local_4a8;
  float local_4a4;
  float local_4a0;
  longlong *local_498;
  float local_490;
  float local_48c;
  float local_488;
  float local_484;
  char ****local_480;
  char *pcStack_478;
  float local_470;
  float local_46c;
  float local_468;
  float local_464;
  float local_460;
  float local_45c;
  float local_458 [3];
  float local_44c;
  float local_448;
  float local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 *local_438;
  int *local_430;
  float local_428;
  float local_424;
  float local_420;
  float local_41c;
  float local_418;
  float local_414;
  float local_410;
  float local_40c;
  float local_408;
  undefined4 local_404;
  undefined4 local_400;
  float local_3f8 [2];
  ulonglong local_3f0;
  int *local_3e8;
  undefined8 *local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  float local_3c8 [2];
  undefined8 *local_3c0;
  undefined8 *local_3b8;
  float local_3a8 [2];
  longlong local_3a0;
  undefined4 local_398;
  undefined4 local_394;
  longlong local_390;
  undefined4 local_388;
  undefined4 local_384;
  longlong local_380 [15];
  undefined8 local_308;
  uint uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_288;
  longlong local_278;
  longlong lStack_270;
  ulonglong local_268;
  ulonglong uStack_260;
  char local_258 [8];
  undefined3 uStack_250;
  undefined1 uStack_24d;
  undefined4 uStack_24c;
  longlong *local_248;
  ulonglong local_240;
  undefined8 local_238;
  undefined *puStack_230;
  longlong *local_228;
  longlong *local_220;
  undefined1 local_218;
  undefined1 local_217;
  undefined1 local_216;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  uint local_1f4;
  undefined8 *****local_1f0 [2];
  undefined8 local_1e0;
  ulonglong local_1d8;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  char *pcStack_1b0;
  char *local_1a8;
  undefined1 local_1a0 [16];
  undefined8 local_190;
  undefined8 local_188;
  longlong *local_178;
  undefined8 uStack_170;
  char *****local_158 [3];
  ulonglong local_140;
  undefined1 local_138 [32];
  undefined8 local_118 [4];
  ulonglong local_f8;
  
  fVar37 = DAT_1808ac34c;
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_568;
  uVar17 = 0xffffffff;
  pcVar25 = "##all_hotkeys_open";
  bVar5 = 0x23;
  do {
    pcVar25 = pcVar25 + 1;
    if (((bVar5 == 0x23) && (*pcVar25 == 0x23)) && (pcVar25[1] == 0x23)) {
      uVar17 = 0xffffffff;
      pcVar25 = pcVar25 + 2;
    }
    else {
      param_1 = uVar17 & 0xff ^ (ulonglong)bVar5;
      uVar17 = (ulonglong)((uint)(uVar17 >> 8) ^ *(uint *)(&DAT_1806c25c0 + param_1 * 4));
    }
    bVar5 = *pcVar25;
  } while (bVar5 != 0);
  local_500[0] = (float)~(uint)uVar17;
  if (DAT_180cd0f05 == '\0') {
    fVar38 = 0.0;
  }
  else {
    fVar38 = DAT_1808ac34c;
  }
  local_404 = 0;
  local_400 = 0xffffffff;
  local_410 = fVar38;
  local_40c = fVar38;
  local_408 = fVar38;
  FUN_18034a380(param_1,&local_480,local_500,&local_410);
  fVar32 = (float)FUN_1802b3660((char *)((longlong)local_480 + 0x14),fVar38,DAT_1808ac118,0);
  lVar29 = DAT_180ca0a50;
  fVar38 = DAT_1808ac1f4;
  puVar20 = auStack_568;
  if (fVar32 <= 0.0) goto LAB_18031a0d8;
  fVar40 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14);
  if ((DAT_180cd0f05 != '\0') && (fVar32 < fVar37)) {
    fVar33 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10) * DAT_1808ac1f4;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    *(float *)(lVar29 + 0x1f48) = fVar33;
    *(float *)(lVar29 + 0x1f4c) = fVar40 * fVar38;
    *(undefined4 *)(lVar29 + 0x1f50) = 0x3f000000;
    *(undefined4 *)(lVar29 + 0x1f54) = 0x3f000000;
    *(undefined4 *)(lVar29 + 0x1f3c) = 1;
  }
  local_508 = (undefined8 *)0x4120000041200000;
  FUN_1803d89a0(2,&local_508);
  FUN_1803d8870(4,0);
  uVar26 = 0x101fb;
  if (DAT_18091a190 == '\0') {
    uVar26 = 0x303fb;
  }
  cVar6 = FUN_1803e4f20("##all_hotkeys",0,uVar26);
  FUN_1803d8a40(2);
  if (cVar6 == '\0') {
    FUN_1803e75b0();
    puVar20 = auStack_568;
    goto LAB_18031a0d8;
  }
  fVar33 = DAT_1811074e8 * fVar32;
  lVar29 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar29 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_4c8 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
  local_4c0 = *(float *)(DAT_180ca0a50 + 0x1204);
  local_4bc = *(float *)(DAT_180ca0a50 + 0x1200);
  local_4a4 = fVar33;
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_4c8);
  FUN_1803e8680(lVar29,DAT_1808ac930,0);
  local_508 = (undefined8 *)0x40a0000040a00000;
  FUN_1803d89a0(0xe,&local_508);
  fVar41 = DAT_1808ac658;
  local_508 = (undefined8 *)0x4040000040c00000;
  FUN_1803d89a0(0xb,&local_508);
  lVar16 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar29 = *(longlong *)(lVar16 + 0x14f8);
  *(undefined1 *)(lVar29 + 0xce) = 1;
  lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x14f8) + 0x2c8);
  local_4dc = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar29 + 0x28) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(lVar29 + 0x30) >> 0x20),
                       (float)*(undefined8 *)(lVar29 + 0x28) + (float)*(undefined8 *)(lVar29 + 0x30)
                      );
  local_540 = (char *****)CONCAT44(local_540._4_4_,fVar37);
  local_548 = (undefined8 *)CONCAT44(local_548._4_4_,DAT_180960ed8);
  local_3d0 = lVar16;
  FUN_1802b4c40(lVar16,lVar29 + 0x28,&local_4dc,DAT_1808ac918);
  fVar42 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  uVar7 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
  uStack_24c = 0;
  local_248 = (longlong *)0xb;
  local_240 = 0xf;
  local_258[0] = s_All_Hotkeys_18075c1f8[0];
  local_258[1] = s_All_Hotkeys_18075c1f8[1];
  local_258[2] = s_All_Hotkeys_18075c1f8[2];
  local_258[3] = s_All_Hotkeys_18075c1f8[3];
  local_258[4] = s_All_Hotkeys_18075c1f8[4];
  local_258[5] = s_All_Hotkeys_18075c1f8[5];
  local_258[6] = s_All_Hotkeys_18075c1f8[6];
  local_258[7] = s_All_Hotkeys_18075c1f8[7];
  uStack_250._0_1_ = s_All_Hotkeys_18075c1f8[8];
  uStack_250._1_1_ = s_All_Hotkeys_18075c1f8[9];
  uStack_250._2_1_ = s_All_Hotkeys_18075c1f8[10];
  uStack_24d = 0;
  FUN_18035eb30(local_158,local_258);
  if (0xf < local_240) {
    uVar17 = local_240 + 1;
    lVar1 = CONCAT17(local_258[7],local_258._0_7_);
    lVar15 = lVar1;
    if (0xfff < uVar17) {
      lVar15 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar15) - 8U) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar19 = auStack_560;
        goto LAB_180318a4b;
      }
      uVar17 = local_240 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar15,uVar17);
  }
  uVar31 = DAT_1808ac940;
  lVar15 = DAT_181107a18;
  if ((DAT_181107a18 == 0) && (lVar15 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar15 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_540 = (char *****)local_158;
  if (0xf < local_140) {
    local_540 = local_158[0];
  }
  local_518 = 0;
  local_528 = 0;
  local_530 = 0;
  local_538 = (char *****)0x0;
  local_548 = (undefined8 *)((ulonglong)local_548 & 0xffffffff00000000);
  FUN_18040a2f0(&local_4dc,lVar15,DAT_1808ac940,DAT_1808acd08);
  fVar32 = (float)FUN_18053fc00((float)local_4dc + DAT_1808ac2f0);
  uVar24 = DAT_180960ec8;
  pppppcVar21 = (char *****)local_158;
  if (0xf < local_140) {
    pppppcVar21 = local_158[0];
  }
  uVar34 = FUN_18053f0d0((DAT_1808acc30 - fVar32) * fVar38 + fVar42);
  local_508 = (undefined8 *)CONCAT44(uVar7,uVar34);
  if ((((uVar24 & 0xff000000) != 0) && (pppppcVar21 != (char *****)0x0)) &&
     (*(char *)pppppcVar21 != '\0')) {
    if (lVar15 == 0) {
      lVar15 = *(longlong *)(*(longlong *)(lVar16 + 0x38) + 0x18);
    }
    local_480 = *(char *****)(lVar16 + 0x60);
    pcStack_478 = *(char **)(lVar16 + 0x68);
    local_520 = 0;
    local_528 = local_528 & 0xffffffff00000000;
    local_530 = 0;
    local_540 = &local_480;
    local_548 = (undefined8 *)CONCAT44(local_548._4_4_,uVar24);
    local_538 = pppppcVar21;
    FUN_18040a900(lVar15,lVar16,uVar31,&local_508);
  }
  local_508 = (undefined8 *)0x41988b4444480000;
  FUN_1804174f0(&local_508);
  fVar35 = (float)FUN_18053fc00();
  fVar35 = fVar35 + DAT_1808ac8b0;
  local_508 = (undefined8 *)CONCAT44(0x41bda5e3,fVar35);
  FUN_1803ec6c0();
  lVar15 = DAT_180ca0a50;
  fVar32 = *(float *)(lVar29 + 0x30);
  fVar42 = *(float *)(lVar29 + 0x28);
  fVar39 = *(float *)(lVar29 + 0x58);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar29 = *(longlong *)(lVar15 + 0x14f8);
  *(float *)(lVar29 + 0x118) = ((fVar32 + fVar42) - fVar39) - fVar35;
  *(undefined4 *)(lVar29 + 0x11c) = uVar7;
  *(undefined1 *)(lVar29 + 0x159) = 1;
  local_540 = (char *****)CONCAT44(local_540._4_4_,DAT_180960f38);
  local_548 = &local_508;
  cVar6 = FUN_1803169e0("##close","nl_glyph_xmark",
                        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M342 151C355 139 355 118 342 106C330 93 309 93 297 106L192 211L86 106C74 93 53 93 41 106C28 118 28 139 41 151L146 256L41 362C28 374 28 395 41 407C53 420 74 420 86 407L191 302L297 407C309 420 330 420 342 407C355 395 355 374 342 362L237 256L342 151L342 151Z\"/></svg>"
                       );
  if (cVar6 != '\0') {
    DAT_180cd0f05 = '\0';
  }
  FUN_1803160c0(&local_3c0);
  if (local_3c0 == local_3b8) {
    DAT_180cd0f05 = '\0';
  }
  local_4f0[0] = fVar37;
  if (fVar37 <= fVar40 - DAT_1808acb08) {
    local_4f0[0] = fVar40 - DAT_1808acb08;
  }
  local_500[0] = 1.0;
  pfVar14 = local_500;
  if (fVar37 <= DAT_1811073d8) {
    pfVar14 = &DAT_1811073d8;
  }
  pfVar9 = local_4f0;
  if (DAT_1811073d8 <= local_4f0[0]) {
    pfVar9 = pfVar14;
  }
  fVar32 = *pfVar9;
  FUN_1803d8870(0x12,DAT_1808ac750);
  FUN_1803d8870(0x13,fVar41);
  FUN_1803d8730(0xe,0);
  FUN_1803d8730(0xf,(int)(longlong)((float)(DAT_180960f44 >> 0x18) * fVar38 + fVar38) << 0x18 |
                    DAT_180960f44 & 0xffffff);
  FUN_1803d8730(0x10,DAT_180960f44);
  FUN_1803d8730(0x11,DAT_1809f54bc);
  lVar15 = DAT_180ca0a50;
  lVar29 = 0;
  local_508 = (undefined8 *)CONCAT44(fVar32,0x44480000);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar7 = FUN_1803e8900(*(undefined8 *)(lVar15 + 0x14f8),"##all_hotkeys_list");
  local_548 = (undefined8 *)CONCAT44(local_548._4_4_,0x80);
  cVar6 = FUN_1803e1800("##all_hotkeys_list",uVar7,&local_508,0);
  lVar15 = DAT_180ca0a50;
  puVar20 = auStack_568;
  if (cVar6 != '\0') {
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar29 = *(longlong *)(lVar15 + 0x14f8);
    *(undefined1 *)(lVar29 + 0xce) = 1;
    lVar15 = *(longlong *)(lVar15 + 0x14f8);
    lVar16 = *(longlong *)(lVar15 + 0x2c8);
    local_4a0 = *(float *)(lVar15 + 0x11c);
    local_218 = DAT_1809f72e0;
    local_217 = DAT_1809f72e1;
    local_216 = DAT_1809f72e2;
    local_214 = DAT_1809f72e4;
    local_210 = DAT_1809f72e8;
    local_20c = DAT_1809f72ec;
    local_208 = _DAT_1809f72f0;
    uStack_200 = _DAT_1809f72f8;
    local_1f8 = DAT_1809f7300;
    local_1f4 = DAT_1809f7304;
    local_4d0 = lVar16;
    local_3d8 = lVar29;
    FUN_180024b50(local_1f0,&DAT_1809f7308);
    fVar40 = DAT_1808ac8e4;
    local_1c8 = (char *)CONCAT53(local_1c8._3_5_,0x10100);
    local_1c8 = (char *)CONCAT44(DAT_1808ac8e4,(undefined4)local_1c8);
    local_1c0 = (undefined *)0x0;
    local_1b8 = (undefined *)0x0;
    pcStack_1b0 = (char *)0x0;
    local_1a8 = (char *)((ulonglong)DAT_1808aca44 << 0x20);
    local_190 = 0;
    local_188 = 0xf;
    local_1a0._11_5_ = 0;
    local_1a0._0_11_ = SUB1211(ZEXT812(0),1);
    local_1a0 = local_1a0 << 8;
    _DAT_1809f72e0 = 0x100;
    DAT_1809f72e2 = 1;
    DAT_1809f72e4 = DAT_1808ac8e4;
    DAT_1809f72e8 = 0;
    DAT_1809f72ec = 0;
    _DAT_1809f72f0 = 0;
    _DAT_1809f72f8 = 0;
    DAT_1809f7300 = 0;
    DAT_1809f7304 = DAT_1808aca44;
    FUN_18002ba60(&DAT_1809f7308,local_1a0);
    FUN_18000f890(local_1a0);
    puVar19 = auStack_568;
    DAT_1809f72e4 = 0.0;
    DAT_180cd048d = 1;
    local_508 = local_3c0;
    local_3e0 = local_3b8;
    puVar20 = auStack_568;
    if (local_3c0 != local_3b8) {
      unaff_R12 = lVar16 + 0x88;
      do {
        unaff_R15 = (longlong *)0x0;
        unaff_R14 = local_3c0;
        fVar32 = DAT_1808ac8dc;
        if ((ulonglong)local_3c0[3] < 0x10) {
LAB_180318a4b:
          puVar30 = unaff_R14;
        }
        else {
          unaff_R14 = (undefined8 *)*local_3c0;
          puVar30 = local_3c0;
        }
        *(undefined8 *)(puVar19 + -8) = 0x180318a53;
        FUN_1803e89e0(unaff_R14);
        fVar33 = 0.0;
        *(undefined4 *)(puVar19 + 0x68) = 0;
        lVar29 = puVar30[7];
        if (lVar29 != puVar30[8]) {
          do {
            if (*(longlong *)(lVar29 + 0x28) - (longlong)*(int **)(lVar29 + 0x20) == 4) {
              uVar28 = ~(**(int **)(lVar29 + 0x20) + 1U);
              pcVar25 = "all_hotkeys_row";
              bVar5 = 0x61;
              uVar24 = uVar28;
              do {
                pcVar25 = pcVar25 + 1;
                if (((bVar5 == 0x23) && (*pcVar25 == 0x23)) && (pcVar25[1] == 0x23)) {
                  pcVar25 = pcVar25 + 2;
                  uVar24 = uVar28;
                }
                else {
                  uVar24 = uVar24 >> 8 ^
                           *(uint *)(&DAT_1806c25c0 +
                                    ((ulonglong)(uVar24 & 0xff) ^ (ulonglong)bVar5) * 4);
                }
                bVar5 = *pcVar25;
              } while (bVar5 != 0);
              uVar24 = ~uVar24;
              uVar17 = (((((ulonglong)(uVar24 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)(uVar24 >> 8 & 0xff)) * 0x100000001b3 ^
                        (ulonglong)(uVar24 >> 0x10 & 0xff)) * 0x100000001b3 ^
                       (ulonglong)(uVar24 >> 0x18)) * 0x100000001b3 & DAT_181107640;
              plVar22 = *(longlong **)(DAT_181107628 + 8 + uVar17 * 0x10);
              if (plVar22 == DAT_181107618) {
LAB_180318b76:
                plVar22 = unaff_R15;
              }
              else {
                uVar28 = *(uint *)(plVar22 + 2);
                while (uVar24 != uVar28) {
                  if (plVar22 == *(longlong **)(DAT_181107628 + uVar17 * 0x10)) goto LAB_180318b76;
                  plVar22 = (longlong *)plVar22[1];
                  uVar28 = *(uint *)(plVar22 + 2);
                }
              }
              if ((plVar22 == (longlong *)0x0) || (plVar22 == DAT_181107618)) {
                fVar42 = 0.0;
              }
              else {
                fVar42 = *(float *)((longlong)plVar22 + 0x14);
              }
            }
            else {
              fVar42 = fVar37;
            }
            if (fVar42 <= fVar33) {
              fVar42 = fVar33;
            }
            fVar33 = fVar42;
            lVar29 = lVar29 + 0x38;
          } while (lVar29 != puVar30[8]);
          *(float *)(puVar19 + 0x68) = fVar33;
          puVar30 = *(undefined8 **)(puVar19 + 0x60);
          unaff_R12 = local_4d0 + 0x88;
          lVar16 = local_4d0;
        }
        uVar7 = *(undefined4 *)(lVar16 + 0x20);
        *(undefined4 *)(puVar19 + 0x78) = uVar7;
        lVar29 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
        fVar33 = *(float *)(lVar29 + 0x118);
        fVar42 = *(float *)(lVar29 + 0x11c);
        if ((*(longlong *)(lVar29 + 0x1c8) != 0) ||
           (lVar15 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
          lVar15 = 0x250;
        }
        fVar41 = *(float *)(lVar15 + lVar29) - fVar33;
        local_258[0] = '\0';
        local_258[1] = '\0';
        local_258[2] = '\0';
        local_258[3] = '\0';
        local_258[4] = '\0';
        local_258[5] = '\0';
        local_258[6] = '\0';
        local_258[7] = '\0';
        uStack_250._0_1_ = '\0';
        uStack_250._1_1_ = '\0';
        uStack_250._2_1_ = '\0';
        uStack_24d = 0;
        uStack_24c = 0;
        lVar29 = puVar30[4];
        lVar15 = puVar30[5];
        local_4d4 = fVar33;
        local_4ac = fVar42;
        local_4a8 = fVar41;
        local_248 = unaff_R15;
        if (lVar29 != lVar15) {
          do {
            *(undefined8 *)(puVar19 + -8) = 0x180318c5f;
            plVar10 = (longlong *)FUN_18035eb30(local_138,lVar29);
            plVar22 = (longlong *)CONCAT44(uStack_24c,CONCAT13(uStack_24d,uStack_250));
            if (plVar22 == local_248) {
              *(undefined8 *)(puVar19 + -8) = 0x180318cb4;
              FUN_18009bb20(local_258,plVar22,plVar10);
            }
            else {
              *plVar22 = 0;
              plVar22[1] = 0;
              plVar22[2] = (longlong)unaff_R15;
              plVar22[3] = (longlong)unaff_R15;
              lVar1 = plVar10[1];
              *plVar22 = *plVar10;
              plVar22[1] = lVar1;
              lVar1 = plVar10[3];
              plVar22[2] = plVar10[2];
              plVar22[3] = lVar1;
              plVar10[2] = (longlong)unaff_R15;
              plVar10[3] = 0xf;
              *(undefined1 *)plVar10 = 0;
              lVar1 = CONCAT44(uStack_24c,CONCAT13(uStack_24d,uStack_250)) + 0x20;
              uStack_250 = (undefined3)lVar1;
              uStack_24d = (undefined1)((ulonglong)lVar1 >> 0x18);
              uStack_24c = (undefined4)((ulonglong)lVar1 >> 0x20);
            }
            *(undefined8 *)(puVar19 + -8) = 0x180318cc1;
            FUN_18000f890(local_138);
            lVar29 = lVar29 + 0x20;
          } while (lVar29 != lVar15);
        }
        uVar31 = DAT_1808ac864;
        fVar40 = fVar33 + fVar40;
        lVar29 = CONCAT17(local_258[7],local_258._0_7_);
        uVar34 = SUB84(unaff_R15,0);
        local_4e0 = fVar40;
        if (CONCAT44(uStack_24c,CONCAT13(uStack_24d,uStack_250)) - lVar29 >> 5 != 0) {
          fVar33 = fVar42 + _DAT_1808ac7e8;
          plVar22 = unaff_R15;
          fVar37 = fVar40;
          do {
            if (plVar22 != (longlong *)0x0) {
              *(undefined4 *)(puVar19 + 0x50) = uVar34;
              *(longlong **)(puVar19 + 0x40) = unaff_R15;
              *(longlong **)(puVar19 + 0x38) = unaff_R15;
              *(longlong **)(puVar19 + 0x30) = unaff_R15;
              *(undefined2 **)(puVar19 + 0x28) = &DAT_1806f02a8;
              *(undefined4 *)(puVar19 + 0x20) = 0;
              uVar26 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
              *(undefined8 *)(puVar19 + -8) = 0x180318d69;
              FUN_18040a2f0(local_3c8,uVar26,fVar32,DAT_1808acd08);
              fVar37 = local_3c8[0] + fVar37;
              *(undefined8 *)(puVar19 + -8) = 0x180318d83;
              fVar32 = (float)FUN_18053fc00();
              local_428 = fVar32 * fVar38 + fVar37;
              *(uint *)(puVar19 + 0x30) = DAT_180960ecc;
              *(undefined4 *)(puVar19 + 0x28) = uVar31;
              *(float **)(puVar19 + 0x20) = &local_428;
              *(undefined8 *)(puVar19 + -8) = 0x180318dd5;
              local_424 = fVar33;
              FUN_1802b6e90(lVar16,"nl_glyph_angle_right",
                            "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 320 512\" width=\"320\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M278 234C291 246 291 267 278 279L118 439C106 451 85 451 73 439C60 427 60 406 73 394L210 256L73 119C60 107 60 86 73 74C85 61 106 61 118 74L278 234L278 234ZM278 234Z\"/></svg>"
                            ,DAT_1808acbc0);
              *(undefined4 *)(puVar19 + 0x50) = uVar34;
              *(longlong **)(puVar19 + 0x40) = unaff_R15;
              *(longlong **)(puVar19 + 0x38) = unaff_R15;
              *(longlong **)(puVar19 + 0x30) = unaff_R15;
              *(undefined2 **)(puVar19 + 0x28) = &DAT_1806f02a8;
              *(undefined4 *)(puVar19 + 0x20) = 0;
              uVar26 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
              *(undefined8 *)(puVar19 + -8) = 0x180318e1f;
              FUN_18040a2f0(local_3a8,uVar26,DAT_1808ac8dc,DAT_1808acd08);
              fVar37 = local_3a8[0] + fVar32 + fVar37;
              lVar29 = CONCAT17(local_258[7],local_258._0_7_);
              fVar32 = DAT_1808ac8dc;
            }
            pcVar25 = (char *)((longlong)plVar22 * 0x20 + lVar29);
            if (0xf < *(ulonglong *)(pcVar25 + 0x18)) {
              pcVar25 = *(char **)pcVar25;
            }
            if (DAT_181107a08 == 0) {
              lVar15 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
            }
            else {
              lVar15 = DAT_181107a08;
            }
            local_420 = fVar37;
            local_41c = fVar42;
            if ((((DAT_180960ecc & 0xff000000) != 0) && (pcVar25 != (char *)0x0)) &&
               (*pcVar25 != '\0')) {
              if (lVar15 == 0) {
                lVar15 = *(longlong *)(*(longlong *)(lVar16 + 0x38) + 0x18);
              }
              local_178 = *(longlong **)(lVar16 + 0x60);
              uStack_170 = *(undefined8 *)(lVar16 + 0x68);
              *(undefined4 *)(puVar19 + 0x48) = uVar34;
              *(undefined4 *)(puVar19 + 0x40) = 0;
              *(longlong **)(puVar19 + 0x38) = unaff_R15;
              *(char **)(puVar19 + 0x30) = pcVar25;
              *(longlong ***)(puVar19 + 0x28) = &local_178;
              *(uint *)(puVar19 + 0x20) = DAT_180960ecc;
              *(undefined8 *)(puVar19 + -8) = 0x180318eed;
              FUN_18040a900(lVar15,lVar16,fVar32,&local_420);
              lVar29 = CONCAT17(local_258[7],local_258._0_7_);
            }
            lVar15 = DAT_181107a08;
            if (DAT_181107a08 == 0) {
              lVar15 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
            }
            plVar10 = (longlong *)((longlong)plVar22 * 0x20 + lVar29);
            if (0xf < (ulonglong)plVar10[3]) {
              plVar10 = (longlong *)*plVar10;
            }
            *(undefined4 *)(puVar19 + 0x50) = uVar34;
            *(longlong **)(puVar19 + 0x40) = unaff_R15;
            *(longlong **)(puVar19 + 0x38) = unaff_R15;
            *(longlong **)(puVar19 + 0x30) = unaff_R15;
            *(longlong **)(puVar19 + 0x28) = plVar10;
            *(undefined4 *)(puVar19 + 0x20) = 0;
            *(undefined8 *)(puVar19 + -8) = 0x180318f50;
            FUN_18040a2f0(local_3f8,lVar15,fVar32,DAT_1808acd08);
            fVar37 = fVar37 + local_3f8[0];
            plVar22 = (longlong *)((longlong)plVar22 + 1);
            lVar29 = CONCAT17(local_258[7],local_258._0_7_);
          } while (plVar22 < (longlong *)
                             (CONCAT44(uStack_24c,CONCAT13(uStack_24d,uStack_250)) - lVar29 >> 5));
          uVar7 = *(undefined4 *)(puVar19 + 0x78);
          fVar33 = local_4d4;
        }
        fVar38 = fVar42 + fVar32 + DAT_1808ac750;
        *(undefined8 *)(puVar19 + -8) = 0x180318fc2;
        local_4b0 = fVar38;
        fVar32 = (float)FUN_18053fc00(((fVar41 - DAT_1808ac97c) - _DAT_1808ac9d0) / DAT_1808ac750);
        *(undefined8 *)(puVar19 + -8) = 0x180318fd4;
        FUN_180401570(unaff_R12);
        *(undefined8 *)(puVar19 + -8) = 0x180318fe5;
        FUN_180401a80(unaff_R12,lVar16,1);
        fVar37 = fVar38 + DAT_1808ac7ec;
        local_4b4 = fVar37;
        local_1c8 = "Feature";
        local_1c0 = &DAT_1807673c0;
        local_1b8 = &DAT_1807673b8;
        pcStack_1b0 = "Visibility";
        local_1a8 = "New Value";
        uVar17 = (ulonglong)unaff_R15 & 0xffffffff;
        fVar39 = fVar37 + DAT_1808ac930;
        do {
          fVar35 = (float)(int)uVar17 * fVar32 + fVar40;
          pcVar25 = *(char **)(local_1a0 + uVar17 * 8 + -0x28);
          local_238 = (char *)0x0;
          puStack_230 = (undefined *)0x0;
          *(undefined8 *)(puVar19 + -8) = 0x18031908b;
          local_228 = unaff_R15;
          local_220 = unaff_R15;
          sVar11 = strlen(pcVar25);
          *(undefined8 *)(puVar19 + -8) = 0x18031909d;
          FUN_1800133a0(&local_238,pcVar25,sVar11);
          *(undefined8 *)(puVar19 + -8) = 0x1803190b1;
          uVar26 = FUN_18035eb30(&local_178,&local_238);
          local_418 = fVar35 + fVar32;
          lVar29 = DAT_181107a18;
          if ((DAT_181107a18 == 0) && (lVar29 = DAT_181107a08, DAT_181107a08 == 0)) {
            lVar29 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
          }
          *(undefined8 *)(puVar19 + 0x30) = uVar26;
          *(uint *)(puVar19 + 0x28) = DAT_180960ec8;
          *(float **)(puVar19 + 0x20) = &local_418;
          *(undefined8 *)(puVar19 + -8) = 0x180319125;
          local_470 = fVar35;
          local_46c = fVar37;
          local_414 = fVar39;
          FUN_180316dc0(lVar16,lVar29,DAT_1808ac930,&local_470);
          *(undefined8 *)(puVar19 + -8) = 0x180319132;
          FUN_18000f890(&local_178);
          if ((longlong *)0xf < local_220) {
            plVar22 = (longlong *)((longlong)local_220 + 1);
            pcVar25 = local_238;
            if ((longlong *)0xfff < plVar22) {
              pcVar25 = *(char **)(local_238 + -8);
              if ((char *)0x1f < local_238 + (-8 - (longlong)pcVar25)) goto LAB_180319f2a;
              plVar22 = local_220 + 5;
            }
            *(undefined8 *)(puVar19 + -8) = 0x180319174;
            thunk_FUN_1803d64e0(pcVar25,plVar22);
          }
          uVar24 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar24;
        } while ((int)uVar24 < 5);
        local_498 = (longlong *)puVar30[7];
        local_178 = (longlong *)puVar30[8];
        if (local_498 != (longlong *)puVar30[8]) {
          fVar33 = fVar32 + local_4e0;
          fVar38 = fVar32 * DAT_1808ac658 + local_4e0;
          fVar41 = fVar32 + fVar32 + local_4e0;
          fVar40 = fVar32 * DAT_1808ac710 + local_4e0;
          fVar42 = fVar32 * DAT_1808ac750 + local_4e0;
          lVar29 = DAT_181107628;
          fVar37 = local_4e0;
          do {
            local_430 = (int *)local_498[4];
            local_3e8 = (int *)local_498[5];
            if (local_430 != (int *)local_498[5]) {
              do {
                plVar22 = local_498;
                lVar16 = local_4d0;
                iVar8 = *local_430;
                lVar15 = (longlong)iVar8;
                *(int *)(puVar19 + 0x7c) = iVar8;
                pcVar25 = "all_hotkeys_row";
                bVar5 = 0x61;
                uVar24 = ~(iVar8 + 1U);
                do {
                  pcVar25 = pcVar25 + 1;
                  if (((bVar5 == 0x23) && (*pcVar25 == 0x23)) && (pcVar25[1] == 0x23)) {
                    pcVar25 = pcVar25 + 2;
                    uVar24 = ~(iVar8 + 1U);
                  }
                  else {
                    uVar24 = uVar24 >> 8 ^
                             *(uint *)(&DAT_1806c25c0 +
                                      ((ulonglong)(uVar24 & 0xff) ^ (ulonglong)bVar5) * 4);
                  }
                  bVar5 = *pcVar25;
                } while (bVar5 != 0);
                uVar24 = ~uVar24;
                local_3f0 = ((ulonglong)(uVar24 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3;
                uVar17 = (((local_3f0 ^ uVar24 >> 8 & 0xff) * 0x100000001b3 ^
                          (ulonglong)(uVar24 >> 0x10 & 0xff)) * 0x100000001b3 ^
                         (ulonglong)(uVar24 >> 0x18)) * 0x100000001b3 & DAT_181107640;
                plVar10 = *(longlong **)(lVar29 + 8 + uVar17 * 0x10);
                if (plVar10 == DAT_181107618) {
LAB_1803192da:
                  plVar10 = (longlong *)0x0;
                }
                else {
                  uVar28 = *(uint *)(plVar10 + 2);
                  while (uVar24 != uVar28) {
                    if (plVar10 == *(longlong **)(lVar29 + uVar17 * 0x10)) goto LAB_1803192da;
                    plVar10 = (longlong *)plVar10[1];
                    uVar28 = *(uint *)(plVar10 + 2);
                  }
                }
                local_4e4 = uVar24;
                local_4b8 = iVar8;
                if ((plVar10 == (longlong *)0x0) || (plVar10 == DAT_181107618)) {
                  *(uint *)(puVar19 + 0x70) = uVar24;
                  *(undefined8 *)(puVar19 + -8) = 0x180319321;
                  plVar10 = (longlong *)FUN_18034f560(plVar10,&local_410,puVar19 + 0x70);
                  lVar29 = *plVar10;
                  *(undefined8 *)(lVar29 + 0x14) = 0;
                  *(undefined8 *)(lVar29 + 0x1c) = 0;
                  *(undefined4 *)(lVar29 + 0x24) = 0xffffffff;
                }
                *(undefined8 *)(puVar19 + -8) = 0x180319351;
                local_438 = (undefined4 *)thunk_FUN_1804e6e50(DAT_181107590,DAT_181107598,iVar8);
                puVar4 = DAT_181107598;
                if (local_438 == DAT_181107598) {
                  fVar35 = DAT_1808ac34c;
                }
                else {
                  fVar35 = 0.0;
                }
                *(uint *)(puVar19 + 0x70) = uVar24;
                local_238 = (char *)CONCAT44(fVar35,fVar35);
                puStack_230 = (undefined *)(ulonglong)(uint)fVar35;
                local_228 = (longlong *)CONCAT44(local_228._4_4_,0xffffffff);
                *(undefined8 *)(puVar19 + -8) = 0x1803193b6;
                FUN_18034a380(extraout_XMM0_Qa,local_380,puVar19 + 0x70,&local_238);
                *(undefined8 *)(puVar19 + -8) = 0x1803193d4;
                fVar35 = (float)FUN_1802b3660(local_380[0] + 0x14,fVar35,DAT_1808ac118,0);
                *(undefined8 *)(puVar19 + -8) = 0x1803193df;
                FUN_1803e8a70(iVar8);
                local_278 = 0;
                lStack_270 = 0;
                local_268 = 0;
                uStack_260 = 0;
                uVar17 = plVar22[2];
                if (0xf < (ulonglong)plVar22[3]) {
                  plVar22 = (longlong *)*plVar22;
                }
                if (0x7fffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)(puVar19 + -8) = 0x18031a13f;
                  FUN_180011990();
                }
                lVar29 = lVar15 * 0xe4;
                uVar7 = *(undefined4 *)(lVar16 + 0x20);
                if (uVar17 < 0x10) {
                  uStack_260 = 0xf;
                  local_278 = *plVar22;
                  lStack_270 = plVar22[1];
                  local_268 = uVar17;
                }
                else {
                  uVar23 = uVar17 | 0xf;
                  if (uVar23 < 0x8000000000000000) {
                    if (uVar23 < 0x16) {
                      uVar23 = 0x16;
                    }
                  }
                  else {
                    uVar23 = 0x7fffffffffffffff;
                  }
                  *(undefined8 *)(puVar19 + -8) = 0x18031946f;
                  local_278 = FUN_18000fb70(uVar23 + 1);
                  *(undefined8 *)(puVar19 + -8) = 0x180319493;
                  local_268 = uVar17;
                  uStack_260 = uVar23;
                  FUN_180540530(local_278,plVar22,uVar17 + 1);
                }
                if ((&DAT_18095d5a0)[lVar29] == '\0') {
                  *(undefined8 *)(puVar19 + -8) = 0x180319562;
                  plVar22 = (longlong *)FUN_180315fa0(local_498);
                  if ((plVar22 != (longlong *)0x0) && (lVar16 = plVar22[1], *plVar22 != lVar16)) {
                    *(undefined8 *)(puVar19 + -8) = 0x180319588;
                    plVar22 = (longlong *)FUN_18035eb30(local_118,lVar16 + -0x20);
                    if (&local_278 != plVar22) {
                      if (0xf < uStack_260) {
                        uVar17 = uStack_260 + 1;
                        lVar16 = local_278;
                        if (0xfff < uVar17) {
                          lVar16 = *(longlong *)(local_278 + -8);
                          if (0x1f < (local_278 - lVar16) - 8U) goto LAB_180319f23;
                          uVar17 = uStack_260 + 0x28;
                        }
                        *(undefined8 *)(puVar19 + -8) = 0x1803195d8;
                        thunk_FUN_1803d64e0(lVar16,uVar17);
                      }
                      local_278 = *plVar22;
                      lStack_270 = plVar22[1];
                      local_268 = plVar22[2];
                      uStack_260 = plVar22[3];
                      plVar22[2] = 0;
                      plVar22[3] = 0xf;
                      *(undefined1 *)plVar22 = 0;
                    }
                    puVar30 = local_118;
                    goto LAB_18031961c;
                  }
                }
                else {
                  *(undefined8 *)(puVar19 + -8) = 0x1803194c0;
                  plVar22 = (longlong *)FUN_1802b3fe0(&local_238,&DAT_18095d5a0 + lVar29);
                  if (&local_278 != plVar22) {
                    if (0xf < uStack_260) {
                      uVar17 = uStack_260 + 1;
                      lVar16 = local_278;
                      if (0xfff < uVar17) {
                        lVar16 = *(longlong *)(local_278 + -8);
                        if (0x1f < (local_278 - lVar16) - 8U) {
LAB_180319f23:
                          pcVar3 = (code *)swi(0x29);
                          (*pcVar3)(5);
                          puVar19 = puVar19 + 8;
                          goto LAB_180319f2a;
                        }
                        uVar17 = uStack_260 + 0x28;
                      }
                      *(undefined8 *)(puVar19 + -8) = 0x180319510;
                      thunk_FUN_1803d64e0(lVar16,uVar17);
                    }
                    local_278 = *plVar22;
                    lStack_270 = plVar22[1];
                    local_268 = plVar22[2];
                    uStack_260 = plVar22[3];
                    plVar22[2] = 0;
                    plVar22[3] = 0xf;
                    *(undefined1 *)plVar22 = 0;
                  }
                  puVar30 = &local_238;
LAB_18031961c:
                  *(undefined8 *)(puVar19 + -8) = 0x180319621;
                  FUN_18000f890(puVar30);
                }
                puVar30 = (undefined8 *)(&DAT_18095d530 + lVar29);
                local_464 = fVar39 + DAT_1808ac97c;
                *(longlong **)(puVar19 + 0x30) = &local_278;
                *(undefined4 *)(puVar19 + 0x28) = DAT_180960ec0;
                *(float **)(puVar19 + 0x20) = &local_468;
                uVar26 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
                *(undefined8 *)(puVar19 + -8) = 0x18031968f;
                local_468 = fVar33;
                local_460 = fVar37;
                local_45c = fVar39;
                FUN_180316dc0(local_4d0,uVar26,DAT_1808ac930,&local_460);
                local_458[1] = 23.706;
                *(undefined8 *)(puVar19 + -8) = 0x1803196b8;
                local_458[0] = fVar32;
                local_458[2] = fVar33;
                local_44c = fVar39;
                FUN_180316fb0(puVar30,local_458 + 2,local_458);
                lVar16 = DAT_180ca0a50;
                local_238 = "Toggle";
                puStack_230 = &DAT_18075c2d8;
                local_228 = (longlong *)0x18075c374;
                if ((&DAT_18095d594)[lVar15 * 0x39] == 0) {
                  local_4e8 = 1;
                }
                else {
                  local_4e8 = 0;
                  if ((&DAT_18095d594)[lVar15 * 0x39] == 2) {
                    local_4e8 = 2;
                  }
                }
                *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
                lVar1 = *(longlong *)(lVar16 + 0x14f8);
                uVar31 = *(undefined4 *)(lVar1 + 0x250);
                uVar34 = *(undefined4 *)(lVar1 + 0x280);
                *(float *)(lVar1 + 0x250) = fVar38;
                *(float *)(lVar1 + 0x280) = fVar38;
                *(undefined1 *)(*(longlong *)(lVar16 + 0x14f8) + 0xce) = 1;
                lVar16 = *(longlong *)(lVar16 + 0x14f8);
                *(float *)(lVar16 + 0x118) = fVar41;
                *(float *)(lVar16 + 0x11c) = fVar39;
                *(undefined1 *)(lVar16 + 0x159) = 1;
                *(undefined8 *)(puVar19 + -8) = 0x1803197ae;
                local_390 = lVar1;
                local_388 = uVar31;
                local_384 = uVar34;
                cVar6 = FUN_1802c2640("##mode",&local_4e8,&local_238,(local_4e8 == 2) + '\x02');
                if (cVar6 != '\0') {
                  iVar8 = 0;
                  if (local_4e8 != 1) {
                    iVar8 = (local_4e8 == 2) + 1;
                  }
                  (&DAT_18095d594)[lVar15 * 0x39] = iVar8;
                }
                *(undefined4 *)(lVar1 + 0x250) = uVar31;
                *(undefined4 *)(lVar1 + 0x280) = uVar34;
                lVar1 = DAT_180ca0a50;
                local_480 = (char ****)0x180767390;
                pcStack_478 = "Visible";
                *(uint *)(puVar19 + 0x70) = (uint)((&DAT_18095d611)[lVar29] != '\0');
                *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
                lVar16 = *(longlong *)(lVar1 + 0x14f8);
                uVar31 = *(undefined4 *)(lVar16 + 0x250);
                uVar34 = *(undefined4 *)(lVar16 + 0x280);
                *(float *)(lVar16 + 0x250) = fVar40;
                *(float *)(lVar16 + 0x280) = fVar40;
                *(undefined1 *)(*(longlong *)(lVar1 + 0x14f8) + 0xce) = 1;
                lVar1 = *(longlong *)(lVar1 + 0x14f8);
                *(float *)(lVar1 + 0x118) = fVar38;
                *(float *)(lVar1 + 0x11c) = fVar39;
                *(undefined1 *)(lVar1 + 0x159) = 1;
                *(undefined8 *)(puVar19 + -8) = 0x1803198a1;
                local_3a0 = lVar16;
                local_398 = uVar31;
                local_394 = uVar34;
                cVar6 = FUN_1802c2640("##visibility",puVar19 + 0x70,&local_480,2);
                if (cVar6 != '\0') {
                  (&DAT_18095d611)[lVar29] = *(int *)(puVar19 + 0x70) == 1;
                }
                *(undefined4 *)(lVar16 + 0x250) = uVar31;
                *(undefined4 *)(lVar16 + 0x280) = uVar34;
                *(undefined8 *)(puVar19 + -8) = 0x1803198e1;
                local_448 = fVar40;
                local_444 = fVar39;
                FUN_1803174d0(puVar30,&local_448);
                lVar16 = DAT_180ca0a50;
                *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
                lVar16 = *(longlong *)(lVar16 + 0x14f8);
                *(float *)(lVar16 + 0x118) = fVar42;
                *(float *)(lVar16 + 0x11c) = fVar39;
                *(undefined1 *)(lVar16 + 0x159) = 1;
                local_440 = 0x41bda5e3;
                local_43c = 0x41bda5e3;
                *(uint *)(puVar19 + 0x28) =
                     (int)(longlong)((float)(DAT_180960f38 >> 0x18) * DAT_1808ac254 + DAT_1808ac1f4)
                     << 0x18 | DAT_180960f38 & 0xffffff;
                *(undefined4 **)(puVar19 + 0x20) = &local_440;
                *(undefined8 *)(puVar19 + -8) = 0x180319986;
                cVar6 = FUN_1803169e0("##delete","nl_glyph_trash",
                                      "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M135 18C140 7 151 0 163 0L284 0C296 0 307 7 312 18L320 32L416 32C433 32 448 47 448 64C448 82 433 96 416 96L32 96C14 96 0 82 0 64C0 47 14 32 32 32L128 32L135 18ZM32 128L416 128L416 448C416 483 387 512 352 512L96 512C60 512 32 483 32 448L32 128ZM128 192C119 192 112 200 112 208L112 432C112 441 119 448 128 448C136 448 144 441 144 432L144 208C144 200 136 192 128 192ZM224 192C215 192 208 200 208 208L208 432C208 441 215 448 224 448C232 448 240 441 240 432L240 208C240 200 232 192 224 192ZM320 192C311 192 304 200 304 208L304 432C304 441 311 448 320 448C328 448 336 441 336 432L336 208C336 200 328 192 320 192Z\"/></svg>"
                                      ,DAT_1808acbe4);
                puVar12 = local_438;
                if ((cVar6 == '\0') || (local_438 != puVar4)) {
LAB_1803199c5:
                  uVar31 = *(undefined4 *)(puVar19 + 0x7c);
                }
                else {
                  if (DAT_181107598 == DAT_1811075a0) {
                    *(undefined8 *)(puVar19 + -8) = 0x1803199c5;
                    FUN_18006a410(&DAT_181107590,DAT_181107598,&local_4b8);
                    goto LAB_1803199c5;
                  }
                  uVar31 = *(undefined4 *)(puVar19 + 0x7c);
                  *DAT_181107598 = uVar31;
                  DAT_181107598 = DAT_181107598 + 1;
                }
                lVar16 = local_4d0;
                uVar34 = *(undefined4 *)(local_4d0 + 0x20);
                *(undefined8 *)(puVar19 + -8) = 0x1803199e4;
                FUN_1802b3c30(local_4d0,uVar7,uVar34);
                iVar8 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
                if (iVar8 < 2) {
                  *(undefined8 *)(puVar19 + -8) = 0x180319a09;
                  FUN_1803ebc00("Calling PopID() too many times!");
                }
                else {
                  *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar8 + -1;
                }
                if ((puVar12 != puVar4) && (fVar35 <= 0.0)) {
                  if (DAT_180cd1360 == puVar30) {
                    LOCK();
                    DAT_180cd1360 = (undefined8 *)0x0;
                    UNLOCK();
                  }
                  if (DAT_1811071c0 == puVar30) {
                    DAT_1811071c0 = (undefined8 *)0x0;
                  }
                  local_308 = 0;
                  uStack_300 = CONCAT31(uStack_300._1_3_,1);
                  uStack_2fc = 0;
                  local_288 = CONCAT22(local_288._2_2_,0x100);
                  *puVar30 = 0;
                  *(undefined8 *)(lVar29 + 0x18095d538) = 0;
                  *(undefined8 *)((longlong)&DAT_18095d540 + lVar29) = 0;
                  *(undefined8 *)((longlong)&DAT_18095d548 + lVar29) = 0;
                  *(undefined8 *)(&DAT_18095d550 + lVar29) = 0;
                  *(undefined8 *)(lVar29 + 0x18095d558) = 0;
                  *(undefined8 *)(&DAT_18095d560 + lVar29) = 0;
                  *(undefined8 *)(lVar29 + 0x18095d568) = 0;
                  *(undefined8 *)(&DAT_18095d570 + lVar29) = 0;
                  *(undefined8 *)(lVar29 + 0x18095d578) = 0;
                  *(undefined8 *)(&DAT_18095d580 + lVar29) = 0;
                  *(undefined8 *)(lVar29 + 0x18095d588) = 0;
                  *(undefined8 *)(&DAT_18095d590 + lVar15 * 0x39) = 0;
                  *(ulonglong *)(&DAT_18095d598 + lVar29) = (ulonglong)uStack_300;
                  *(undefined8 *)(&DAT_18095d5a0 + lVar29) = 0;
                  *(undefined8 *)(lVar29 + 0x18095d5a8) = 0;
                  *(undefined8 *)(&DAT_18095d5b0 + lVar29) = 0;
                  *(undefined8 *)(lVar29 + 0x18095d5b8) = 0;
                  *(undefined8 *)(&DAT_18095d5c0 + lVar29) = 0;
                  *(undefined8 *)(lVar29 + 0x18095d5c8) = 0;
                  *(undefined8 *)(&DAT_18095d5d0 + lVar29) = 0;
                  *(undefined8 *)(lVar29 + 0x18095d5d8) = 0;
                  *(undefined8 *)(&DAT_18095d5e0 + lVar29) = 0;
                  *(undefined8 *)(lVar29 + 0x18095d5e8) = 0;
                  *(undefined8 *)(&DAT_18095d5f0 + lVar29) = 0;
                  *(undefined8 *)(lVar29 + 0x18095d5f8) = 0;
                  *(undefined8 *)(&DAT_18095d600 + lVar29) = 0;
                  *(undefined8 *)(lVar29 + 0x18095d608) = 0;
                  *(undefined4 *)(&DAT_18095d610 + lVar29) = local_288;
                  puVar4 = DAT_181107598;
                  *(undefined8 *)(puVar19 + -8) = 0x180319b04;
                  puVar12 = (undefined4 *)thunk_FUN_1804e6e50(DAT_181107590,DAT_181107598,uVar31);
                  if (puVar12 != puVar4) {
                    *(undefined8 *)(puVar19 + -8) = 0x180319b17;
                    puVar12 = (undefined4 *)FUN_1804e9dc0(puVar12,puVar4,uVar31);
                    if (puVar12 != puVar4) {
                      lVar29 = (longlong)DAT_181107598 - (longlong)puVar4;
                      *(undefined8 *)(puVar19 + -8) = 0x180319b37;
                      FUN_180540530(puVar12,puVar4,lVar29);
                      DAT_181107598 = (undefined4 *)((longlong)puVar12 + lVar29);
                    }
                  }
                  lVar29 = DAT_181107628;
                  plVar10 = DAT_181107618;
                  uVar17 = DAT_181107640 &
                           (((local_3f0 ^ local_4e4._1_1_) * 0x100000001b3 ^
                            (ulonglong)local_4e4._2_1_) * 0x100000001b3 ^ (ulonglong)local_4e4._3_1_
                           ) * 0x100000001b3;
                  plVar22 = *(longlong **)(DAT_181107628 + 8 + uVar17 * 0x10);
                  if (plVar22 == DAT_181107618) {
LAB_180319bb1:
                    plVar27 = (longlong *)0x0;
                  }
                  else {
                    uVar28 = *(uint *)(plVar22 + 2);
                    plVar27 = plVar22;
                    while (uVar24 != uVar28) {
                      if (plVar27 == *(longlong **)(DAT_181107628 + uVar17 * 0x10))
                      goto LAB_180319bb1;
                      plVar27 = (longlong *)plVar27[1];
                      uVar28 = *(uint *)(plVar27 + 2);
                    }
                  }
                  if (plVar27 != (longlong *)0x0) {
                    plVar2 = *(longlong **)(DAT_181107628 + uVar17 * 0x10);
                    if (plVar22 == plVar27) {
                      if (plVar2 == plVar27) {
                        *(longlong **)(DAT_181107628 + uVar17 * 0x10) = DAT_181107618;
                        *(longlong **)(lVar29 + 8 + uVar17 * 0x10) = plVar10;
                      }
                      else {
                        *(longlong *)(DAT_181107628 + 8 + uVar17 * 0x10) = plVar27[1];
                      }
                    }
                    else if (plVar2 == plVar27) {
                      *(longlong *)(DAT_181107628 + uVar17 * 0x10) = *plVar27;
                    }
                    lVar29 = *plVar27;
                    DAT_181107620 = DAT_181107620 + -1;
                    *(longlong *)plVar27[1] = lVar29;
                    *(longlong *)(lVar29 + 8) = plVar27[1];
                    *(undefined8 *)(puVar19 + -8) = 0x180319c16;
                    thunk_FUN_1803d64e0(plVar27,0x28);
                  }
                }
                if (0xf < uStack_260) {
                  uVar17 = uStack_260 + 1;
                  lVar29 = local_278;
                  if (0xfff < uVar17) {
                    lVar29 = *(longlong *)(local_278 + -8);
                    if (0x1f < (local_278 - lVar29) - 8U) goto LAB_180319f2a;
                    uVar17 = uStack_260 + 0x28;
                  }
                  *(undefined8 *)(puVar19 + -8) = 0x180319c5e;
                  thunk_FUN_1803d64e0(lVar29,uVar17);
                }
                fVar39 = fVar39 + fVar35 * DAT_1808ac97c;
                local_430 = local_430 + 1;
                lVar29 = DAT_181107628;
                fVar37 = local_4e0;
              } while (local_430 != local_3e8);
            }
            local_498 = local_498 + 7;
          } while (local_498 != local_178);
          uVar7 = *(undefined4 *)(puVar19 + 0x78);
          unaff_R12 = lVar16 + 0x88;
          fVar37 = local_4b4;
          fVar38 = local_4b0;
          fVar40 = local_4e0;
          fVar42 = local_4ac;
          fVar41 = local_4a8;
          fVar33 = local_4d4;
        }
        fVar35 = DAT_1808ac34c;
        iVar8 = 1;
        do {
          *(undefined8 *)(puVar19 + -8) = 0x180319d06;
          fVar36 = (float)FUN_18053fc00((float)iVar8 * fVar32 + fVar40);
          if ((DAT_180960f48 & 0xff000000) != 0) {
            local_4c0 = fVar36 + DAT_1808ac1f4 + DAT_1808ac1f4;
            local_4c8 = CONCAT44(fVar37 + DAT_1808ac1f4,local_4c0);
            local_4bc = fVar39 + DAT_1808ac1f4;
            *(undefined4 *)(puVar19 + 0x28) = 0;
            *(float *)(puVar19 + 0x20) = fVar35;
            *(undefined8 *)(puVar19 + -8) = 0x180319d67;
            FUN_1803fc600(lVar16,&local_4c8,2);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 6);
        lVar29 = *(longlong *)(puVar19 + 0x60);
        fVar39 = fVar39 + DAT_1808ac7ec;
        *(undefined8 *)(puVar19 + -8) = 0x180319d8e;
        FUN_180401a80(unaff_R12,lVar16,0);
        uVar31 = DAT_180960eec;
        fVar37 = DAT_1808ac34c;
        local_490 = fVar33 + fVar41;
        local_178 = _DAT_1808addb0;
        uStack_170 = _UNK_1808addb8;
        local_48c = fVar39;
        local_488 = fVar33;
        local_484 = fVar38;
        if (0xffffff < DAT_180960f60) {
          *(float *)(puVar19 + 0x28) = DAT_1808ac34c;
          *(longlong ***)(puVar19 + 0x20) = &local_178;
          *(undefined8 *)(puVar19 + -8) = 0x180319dff;
          FUN_18036b940(lVar16,&local_488,&local_490);
        }
        *(float *)(puVar19 + 0x30) = fVar37;
        *(float *)(puVar19 + 0x28) = fVar37;
        *(longlong ***)(puVar19 + 0x20) = &local_178;
        *(undefined8 *)(puVar19 + -8) = 0x180319e2c;
        FUN_18036bcb0(lVar16,&local_488,&local_490,uVar31);
        *(undefined8 *)(puVar19 + -8) = 0x180319e37;
        FUN_1804016a0(unaff_R12,lVar16);
        fVar38 = *(float *)(puVar19 + 0x68);
        uVar31 = *(undefined4 *)(lVar16 + 0x20);
        *(undefined8 *)(puVar19 + -8) = 0x180319e4e;
        FUN_1802b3c30(lVar16,uVar7,uVar31,fVar38);
        lVar15 = DAT_180ca0a50;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        lVar15 = *(longlong *)(lVar15 + 0x14f8);
        *(float *)(lVar15 + 0x118) = fVar33;
        *(float *)(lVar15 + 0x11c) = fVar42;
        *(undefined1 *)(lVar15 + 0x159) = 1;
        fVar40 = DAT_1808ac8e4;
        fVar32 = ((fVar39 + DAT_1808ac8e4 + DAT_1808ac658) - fVar42) * fVar38 - DAT_1808ac750;
        fVar38 = 0.0;
        if (0.0 <= fVar32) {
          fVar38 = fVar32;
        }
        local_4dc = CONCAT44(fVar38,fVar41);
        *(undefined8 *)(puVar19 + -8) = 0x180319ec8;
        FUN_1804174f0(&local_4dc);
        iVar8 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar8 < 2) {
          *(undefined8 *)(puVar19 + -8) = 0x180319eed;
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar8 + -1;
        }
        *(undefined8 *)(puVar19 + -8) = 0x180319f03;
        FUN_1800288b0(local_258);
        local_3c0 = (undefined8 *)(lVar29 + 0x50);
        *(undefined8 **)(puVar19 + 0x60) = local_3c0;
        if (local_3c0 == local_3e0) goto LAB_180319f31;
        fVar38 = DAT_1808ac1f4;
      } while( true );
    }
    goto LAB_180319f3e;
  }
  goto LAB_18031a022;
LAB_180319f2a:
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(5);
  puVar19 = puVar19 + 8;
LAB_180319f31:
  puVar20 = puVar19;
  lVar29 = local_3d8;
  fVar33 = local_4a4;
LAB_180319f3e:
  DAT_180cd048d = 0;
  _DAT_1809f72e0 = CONCAT11(local_217,local_218);
  DAT_1809f72e2 = local_216;
  DAT_1809f72e4 = (float)local_214;
  DAT_1809f72e8 = local_210;
  DAT_1809f72ec = local_20c;
  _DAT_1809f72f0 = local_208;
  _DAT_1809f72f8 = uStack_200;
  DAT_1809f7300 = local_1f8;
  DAT_1809f7304 = local_1f4;
  pppppuVar18 = local_1f0;
  if (0xf < local_1d8) {
    pppppuVar18 = local_1f0[0];
  }
  *(undefined8 *)(puVar20 + -8) = 0x180319fec;
  FUN_180029840(&DAT_1809f7308,pppppuVar18,local_1e0);
  DAT_1811073d8 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c) - local_4a0;
  *(undefined8 *)(puVar20 + -8) = 0x18031a01b;
  FUN_18000f890(local_1f0);
  lVar16 = local_3d0;
LAB_18031a022:
  *(undefined8 *)(puVar20 + -8) = 0x18031a027;
  FUN_1803e1bc0();
  *(undefined8 *)(puVar20 + -8) = 0x18031a031;
  FUN_1803d87f0(4);
  *(undefined8 *)(puVar20 + -8) = 0x18031a03d;
  FUN_1803d8a40(2);
  *(undefined8 *)(puVar20 + -8) = 0x18031a044;
  FUN_1803d8a40(2);
  lVar15 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
    *(undefined8 *)(puVar20 + -8) = 0x18031a062;
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    lVar13 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0) + -1;
    lVar1 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
    uVar7 = *(undefined4 *)(lVar1 + 0xc + lVar13 * 0x10);
    uVar31 = *(undefined4 *)(lVar1 + 8 + lVar13 * 0x10);
    uVar26 = *(undefined8 *)(lVar1 + lVar13 * 0x10);
    *(undefined8 *)(puVar20 + -8) = 0x18031a086;
    FUN_1803e8680(uVar26,uVar31,uVar7);
    *(int *)(lVar15 + 0x1fe0) = *(int *)(lVar15 + 0x1fe0) + -1;
  }
  if (lVar29 != 0) {
    lVar29 = *(longlong *)(lVar29 + 0x2c8);
    uVar7 = *(undefined4 *)(lVar29 + 0x20);
    *(undefined8 *)(puVar20 + -8) = 0x18031a0a7;
    FUN_1802b3c30(lVar29,0,uVar7,fVar33);
  }
  uVar7 = *(undefined4 *)(lVar16 + 0x20);
  *(undefined8 *)(puVar20 + -8) = 0x18031a0b9;
  FUN_1802b3c30(lVar16,0,uVar7,fVar33);
  *(undefined8 *)(puVar20 + -8) = 0x18031a0be;
  FUN_1803e75b0();
  *(undefined8 *)(puVar20 + -8) = 0x18031a0cb;
  FUN_180349560(&local_3c0);
  *(undefined8 *)(puVar20 + -8) = 0x18031a0d8;
  FUN_18000f890(local_158);
LAB_18031a0d8:
  *(undefined8 *)(puVar20 + -8) = 0x18031a0e7;
  return;
}



/* ===== 18031a140 FUN_18031a140 ===== */

undefined8 *
FUN_18031a140(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  uVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar5 = 1;
  if (param_2[1] - *param_2 >> 5 != 0) {
    do {
      if (uVar4 != 0) {
        FUN_1800690a0(param_1,0x1f,param_3,param_4,uVar5);
      }
      pbVar2 = (byte *)(*param_2 + uVar4 * 0x20);
      if (*(ulonglong *)(pbVar2 + 0x18) < 0x10) {
        pbVar3 = pbVar2;
      }
      else {
        pbVar3 = *(byte **)pbVar2;
      }
      pbVar2 = pbVar3 + *(longlong *)(pbVar2 + 0x10);
      for (; pbVar3 != pbVar2; pbVar3 = pbVar3 + 1) {
        iVar1 = tolower((uint)*pbVar3);
        FUN_1800690a0(param_1,iVar1,param_3,param_4,uVar5);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)(param_2[1] - *param_2 >> 5));
  }
  return param_1;
}



/* ===== 18031a220 FUN_18031a220 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_18031a220(char *param_1,longlong *param_2,char param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  code *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char *pcVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined4 local_a8;
  ulonglong local_a0;
  longlong *local_98;
  char *local_90;
  char *local_80;
  undefined8 ****local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  puVar10 = auStack_c8;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_c8;
  uVar16 = 0x22;
  if (param_3 != '\0') {
    uVar16 = 0x27;
  }
  local_68 = 8;
  local_60 = 0xf;
  local_78 = (undefined8 ****)s_ui_find__180767438._0_8_;
  local_70 = 0;
  local_a0 = 0;
  puVar11 = auStack_c8;
  local_a8 = uVar16;
  local_98 = param_2;
  local_90 = param_1;
  local_80 = param_1;
  if (param_2[1] - *param_2 >> 5 != 0) {
    do {
      uVar9 = local_a0;
      if (local_a0 != 0) {
        FUN_1800134a0(&local_78,&DAT_1806f0594,2);
      }
      uVar1 = local_60;
      uVar5 = local_68;
      uVar15 = (undefined1)uVar16;
      if (local_60 <= local_68) {
        puVar11 = auStack_c8;
        if (local_68 == 0x7fffffffffffffff) goto LAB_18031a6ff;
        uVar13 = local_68 + 1;
        uVar12 = uVar13 | 0xf;
        if (uVar12 < 0x8000000000000000) {
          if (0x7fffffffffffffff - (local_60 >> 1) < local_60) {
            uVar12 = 0x7fffffffffffffff;
          }
          else {
            uVar2 = (local_60 >> 1) + local_60;
            if (uVar12 < uVar2) {
              uVar12 = uVar2;
            }
          }
        }
        else {
          uVar12 = 0x7fffffffffffffff;
        }
        ppppuVar8 = (undefined8 ****)FUN_18000fb70(uVar12 + 1);
        ppppuVar7 = local_78;
        local_68 = uVar13;
        local_60 = uVar12;
        if (uVar1 < 0x10) {
          FUN_180540530(ppppuVar8,&local_78,uVar5);
          *(undefined1 *)((longlong)ppppuVar8 + uVar5) = uVar15;
          *(undefined1 *)((longlong)ppppuVar8 + uVar5 + 1) = 0;
LAB_18031a3d0:
          local_78 = ppppuVar8;
          goto LAB_18031a3de;
        }
        FUN_180540530(ppppuVar8,local_78,uVar5);
        *(undefined1 *)((longlong)ppppuVar8 + uVar5) = uVar15;
        *(undefined1 *)((longlong)ppppuVar8 + uVar5 + 1) = 0;
        if (uVar1 + 1 < 0x1000) {
          thunk_FUN_1803d64e0(ppppuVar7);
          goto LAB_18031a3d0;
        }
        if ((ulonglong)((longlong)ppppuVar7 + (-8 - (longlong)ppppuVar7[-1])) < 0x20) {
          thunk_FUN_1803d64e0(ppppuVar7[-1],uVar1 + 0x28);
          goto LAB_18031a3d0;
        }
LAB_18031a67f:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar10 = auStack_c0;
        break;
      }
      ppppuVar7 = &local_78;
      if (0xf < local_60) {
        ppppuVar7 = local_78;
      }
      puVar11 = (undefined1 *)((longlong)ppppuVar7 + local_68);
      local_68 = local_68 + 1;
      *puVar11 = uVar15;
      *(undefined1 *)((longlong)ppppuVar7 + uVar5 + 1) = 0;
LAB_18031a3de:
      pcVar6 = (char *)(*local_98 + uVar9 * 0x20);
      if (*(ulonglong *)(pcVar6 + 0x18) < 0x10) {
        pcVar14 = pcVar6;
      }
      else {
        pcVar14 = *(char **)pcVar6;
      }
      local_90 = pcVar14 + *(longlong *)(pcVar6 + 0x10);
      if (pcVar14 != local_90) {
        do {
          uVar5 = local_60;
          uVar9 = local_68;
          cVar3 = *pcVar14;
          if (cVar3 == '\a') {
            FUN_1800134a0(&local_78,&DAT_180767434,2);
          }
          else if (local_68 < local_60) {
            ppppuVar7 = &local_78;
            if (0xf < local_60) {
              ppppuVar7 = local_78;
            }
            pcVar6 = (char *)((longlong)ppppuVar7 + local_68);
            local_68 = local_68 + 1;
            *pcVar6 = cVar3;
            *(undefined1 *)((longlong)ppppuVar7 + uVar9 + 1) = 0;
          }
          else {
            puVar11 = auStack_c8;
            if (local_68 == 0x7fffffffffffffff) goto LAB_18031a6ff;
            uVar1 = local_68 + 1;
            uVar13 = uVar1 | 0xf;
            if (uVar13 < 0x8000000000000000) {
              if (0x7fffffffffffffff - (local_60 >> 1) < local_60) {
                uVar13 = 0x7fffffffffffffff;
              }
              else {
                uVar12 = (local_60 >> 1) + local_60;
                if (uVar13 < uVar12) {
                  uVar13 = uVar12;
                }
              }
            }
            else {
              uVar13 = 0x7fffffffffffffff;
            }
            ppppuVar8 = (undefined8 ****)FUN_18000fb70(uVar13 + 1);
            ppppuVar7 = local_78;
            local_68 = uVar1;
            local_60 = uVar13;
            if (uVar5 < 0x10) {
              FUN_180540530(ppppuVar8,&local_78,uVar9);
              *(char *)((longlong)ppppuVar8 + uVar9) = cVar3;
              *(undefined1 *)((longlong)ppppuVar8 + uVar9 + 1) = 0;
            }
            else {
              FUN_180540530(ppppuVar8,local_78,uVar9);
              *(char *)((longlong)ppppuVar8 + uVar9) = cVar3;
              *(undefined1 *)((longlong)ppppuVar8 + uVar9 + 1) = 0;
              if (uVar5 + 1 < 0x1000) {
                thunk_FUN_1803d64e0(ppppuVar7);
              }
              else {
                if (0x1f < (ulonglong)((longlong)ppppuVar7 + (-8 - (longlong)ppppuVar7[-1])))
                goto LAB_18031a67f;
                thunk_FUN_1803d64e0(ppppuVar7[-1],uVar5 + 0x28);
              }
            }
            local_78 = ppppuVar8;
          }
          pcVar14 = pcVar14 + 1;
        } while (pcVar14 != local_90);
        uVar16 = local_a8;
      }
      uVar5 = local_60;
      uVar9 = local_68;
      uVar15 = (undefined1)uVar16;
      if (local_68 < local_60) {
        ppppuVar7 = &local_78;
        if (0xf < local_60) {
          ppppuVar7 = local_78;
        }
        puVar11 = (undefined1 *)((longlong)ppppuVar7 + local_68);
        local_68 = local_68 + 1;
        *puVar11 = uVar15;
        *(undefined1 *)((longlong)ppppuVar7 + uVar9 + 1) = 0;
      }
      else {
        puVar11 = auStack_c8;
        if (local_68 == 0x7fffffffffffffff) goto LAB_18031a6ff;
        uVar1 = local_68 + 1;
        uVar13 = uVar1 | 0xf;
        if (uVar13 < 0x8000000000000000) {
          if (0x7fffffffffffffff - (local_60 >> 1) < local_60) {
            uVar13 = 0x7fffffffffffffff;
          }
          else {
            uVar12 = (local_60 >> 1) + local_60;
            if (uVar13 < uVar12) {
              uVar13 = uVar12;
            }
          }
        }
        else {
          uVar13 = 0x7fffffffffffffff;
        }
        ppppuVar8 = (undefined8 ****)FUN_18000fb70(uVar13 + 1);
        ppppuVar7 = local_78;
        local_68 = uVar1;
        local_60 = uVar13;
        if (uVar5 < 0x10) {
          FUN_180540530(ppppuVar8,&local_78,uVar9);
          *(undefined1 *)((longlong)ppppuVar8 + uVar9) = uVar15;
          *(undefined1 *)((longlong)ppppuVar8 + uVar9 + 1) = 0;
        }
        else {
          FUN_180540530(ppppuVar8,local_78,uVar9);
          *(undefined1 *)((longlong)ppppuVar8 + uVar9) = uVar15;
          *(undefined1 *)((longlong)ppppuVar8 + uVar9 + 1) = 0;
          if (uVar5 + 1 < 0x1000) {
            thunk_FUN_1803d64e0(ppppuVar7);
          }
          else {
            if (0x1f < (ulonglong)((longlong)ppppuVar7 + (-8 - (longlong)ppppuVar7[-1])))
            goto LAB_18031a67f;
            thunk_FUN_1803d64e0(ppppuVar7[-1],uVar5 + 0x28);
          }
        }
        local_78 = ppppuVar8;
      }
      local_a0 = local_a0 + 1;
    } while (local_a0 < (ulonglong)(local_98[1] - *local_98 >> 5));
    puVar11 = puVar10;
  }
  pcVar6 = local_80;
  *(undefined8 *)(puVar11 + -8) = 0x18031a69d;
  FUN_180073a70(local_80,&local_78,&DAT_1806e1ac0);
  if (0xf < local_60) {
    uVar9 = local_60 + 1;
    ppppuVar7 = local_78;
    if (0xfff < uVar9) {
      ppppuVar7 = (undefined8 ****)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar7))) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar11 = puVar11 + 8;
LAB_18031a6ff:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar11 + -8) = &UNK_18031a704;
        FUN_180011990();
      }
      uVar9 = local_60 + 0x28;
    }
    *(undefined8 *)(puVar11 + -8) = 0x18031a6d5;
    thunk_FUN_1803d64e0(ppppuVar7,uVar9);
  }
  *(undefined8 *)(puVar11 + -8) = 0x18031a6e4;
  return pcVar6;
}



/* ===== 18031a710 FUN_18031a710 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_18031a710(char *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined8 *local_d8;
  undefined8 *puStack_d0;
  undefined8 *local_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  undefined *local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_f8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  lStack_b8 = 0;
  local_b0 = 0;
  local_90 = &DAT_1809f5a50;
  iVar9 = FUN_1804e4d70(&DAT_1809f5a50);
  puVar18 = auStack_f8;
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f5a9c == 0x7fffffff) goto LAB_18031aac7;
  if ((DAT_181107758 == DAT_181107760) && (DAT_181106fb0 == DAT_181106fb8)) {
    FUN_1804e4e90(&DAT_1809f5a50);
LAB_18031a7a9:
    puVar17 = auStack_f8;
    cVar8 = '\0';
LAB_18031a7ac:
    lVar12 = lStack_b8;
    lVar13 = local_c0;
    if (local_c0 != 0) {
      for (; lVar13 != lVar12; lVar13 = lVar13 + 0x20) {
        *(undefined8 *)(puVar17 + -8) = 0x18031a7c8;
        FUN_18000f890(lVar13);
      }
      uVar14 = local_b0 - local_c0 & 0xffffffffffffffe0;
      lVar13 = local_c0;
      if (0xfff < uVar14) {
        lVar13 = *(longlong *)(local_c0 + -8);
        if (0x1f < (local_c0 - lVar13) - 8U) goto LAB_18031aab9;
        uVar14 = uVar14 + 0x27;
      }
      *(undefined8 *)(puVar17 + -8) = 0x18031a80d;
      thunk_FUN_1803d64e0(lVar13,uVar14);
      local_c0 = 0;
      lStack_b8 = 0;
      local_b0 = 0;
    }
    uVar15 = uStack_a0;
    uVar14 = local_a8;
    if (local_a8 == 0) goto LAB_18031a87d;
    for (; uVar14 != uVar15; uVar14 = uVar14 + 0x20) {
      *(undefined8 *)(puVar17 + -8) = 0x18031a838;
      FUN_18000f890(uVar14);
    }
    uVar15 = local_98 - local_a8 & 0xffffffffffffffe0;
    uVar14 = local_a8;
    if (0xfff < uVar15) {
      uVar14 = *(ulonglong *)(local_a8 - 8);
      if (0x1f < (local_a8 - uVar14) - 8) goto LAB_18031aac0;
      uVar15 = uVar15 + 0x27;
    }
    *(undefined8 *)(puVar17 + -8) = 0x18031a87d;
    thunk_FUN_1803d64e0(uVar14,uVar15);
LAB_18031a87d:
    *(undefined8 *)(puVar17 + -8) = 0x18031a88b;
    return cVar8;
  }
  FUN_180067240(&local_a8,&DAT_181107758);
  FUN_180067240(&local_c0,&DAT_181106fb0);
  FUN_1804e4e90(&DAT_1809f5a50);
  bVar6 = DAT_180cd040c;
  if ((param_1 == (char *)0x0) || (pcVar10 = param_1, param_1 == (char *)0xffffffffffffffff))
  goto LAB_18031a7a9;
  while (*pcVar10 != '\0') {
    if (((*pcVar10 == '#') && (pcVar10[1] == '#')) ||
       (pcVar10 = pcVar10 + 1, pcVar10 == (char *)0xffffffffffffffff)) break;
  }
  if (pcVar10 == param_1) goto LAB_18031a7a9;
  uVar14 = (ulonglong)DAT_180cd040c;
  DAT_180cd040c = 1;
  local_d8 = (undefined8 *)0x0;
  puStack_d0 = (undefined8 *)0x0;
  local_c8 = (undefined8 *)0x0;
  cVar8 = FUN_180312e80(&local_d8);
  puVar17 = auStack_f8;
  if (cVar8 == '\0') {
LAB_18031aa38:
    DAT_180cd040c = (byte)uVar14;
    cVar8 = '\0';
  }
  else {
    puVar11 = (undefined4 *)FUN_1802b3fe0(local_68,param_1);
    if (puStack_d0 == local_c8) {
      FUN_18009bb20(&local_d8,puStack_d0,puVar11);
    }
    else {
      *puStack_d0 = 0;
      puStack_d0[1] = 0;
      puStack_d0[2] = 0;
      puStack_d0[3] = 0;
      uVar2 = puVar11[1];
      uVar3 = puVar11[2];
      uVar4 = puVar11[3];
      *(undefined4 *)puStack_d0 = *puVar11;
      *(undefined4 *)((longlong)puStack_d0 + 4) = uVar2;
      *(undefined4 *)(puStack_d0 + 1) = uVar3;
      *(undefined4 *)((longlong)puStack_d0 + 0xc) = uVar4;
      uVar5 = *(undefined8 *)(puVar11 + 6);
      puStack_d0[2] = *(undefined8 *)(puVar11 + 4);
      puStack_d0[3] = uVar5;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0xf;
      *(undefined1 *)puVar11 = 0;
      puStack_d0 = puStack_d0 + 4;
    }
    FUN_18000f890(local_68);
    DAT_180cd040c = bVar6;
    FUN_18031a140(&local_88,&local_d8);
    uVar14 = uStack_a0;
    uVar15 = FUN_180026970(local_a8,uStack_a0,&local_88);
    lVar13 = lStack_b8;
    cVar8 = uVar15 != uVar14;
    lVar12 = FUN_180026970(local_c0,lStack_b8,&local_88);
    if (lVar12 != lVar13) {
      cVar8 = (uVar15 != uVar14) + '\x02';
    }
    if (0xf < local_70) {
      uVar15 = local_70 + 1;
      lVar12 = CONCAT71(uStack_87,local_88);
      lVar13 = lVar12;
      if (0xfff < uVar15) {
        lVar13 = *(longlong *)(lVar12 + -8);
        if (0x1f < (lVar12 - lVar13) - 8U) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar17 = auStack_f0;
          goto LAB_18031aa38;
        }
        uVar15 = local_70 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar13,uVar15);
    }
    puVar17 = auStack_f8;
    local_78 = 0;
    local_70 = 0xf;
    local_88 = 0;
  }
  puVar7 = puStack_d0;
  puVar16 = local_d8;
  if (local_d8 == (undefined8 *)0x0) goto LAB_18031a7ac;
  for (; puVar16 != puVar7; puVar16 = puVar16 + 4) {
    *(undefined8 *)(puVar17 + -8) = 0x18031aa60;
    FUN_18000f890(puVar16);
  }
  uVar14 = (longlong)local_c8 - (longlong)local_d8 & 0xffffffffffffffe0;
  puVar16 = local_d8;
  if (uVar14 < 0x1000) {
LAB_18031aa99:
    *(undefined8 *)(puVar17 + -8) = 0x18031aaa1;
    thunk_FUN_1803d64e0(puVar16,uVar14);
    local_d8 = (undefined8 *)0x0;
    puStack_d0 = (undefined8 *)0x0;
    local_c8 = (undefined8 *)0x0;
    goto LAB_18031a7ac;
  }
  puVar16 = (undefined8 *)local_d8[-1];
  if ((ulonglong)((longlong)local_d8 + (-8 - (longlong)puVar16)) < 0x20) {
    uVar14 = uVar14 + 0x27;
    goto LAB_18031aa99;
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar17 = puVar17 + 8;
LAB_18031aab9:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar17 = puVar17 + 8;
LAB_18031aac0:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar18 = puVar17 + 8;
LAB_18031aac7:
  DAT_1809f5a9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar18 + -8) = &UNK_18031aadb;
  FUN_1804e4a90(6);
}



/* ===== 18031aaf0 FUN_18031aaf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18031aaf0(void)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  float *pfVar7;
  char *pcVar8;
  undefined8 *puVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_138 [32];
  float *local_118;
  undefined4 *local_110;
  char *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  float local_d8 [4];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined1 local_98 [32];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_138;
  if (*PTR_DAT_1809f51a0 == '\0') {
    return;
  }
  lVar6 = FUN_180315fa0();
  lVar11 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  local_e0 = *(undefined8 *)(lVar11 + 0x118);
  if ((*(longlong *)(lVar11 + 0x1c8) != 0) ||
     (lVar12 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar12 = 0x250;
  }
  fVar16 = *(float *)(lVar12 + lVar11) - *(float *)(lVar11 + 0x118);
  local_e4 = 31.706;
  local_e8 = fVar16;
  cVar2 = FUN_180415e30("##copy_path",&local_e8,0);
  cVar3 = FUN_1803e9690(1,0,0);
  if ((cVar3 == '\0') || (cVar3 = FUN_1803dd930(0), cVar3 == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  cVar4 = FUN_1803dd930(0);
  local_e8 = *(float *)(DAT_180ca0a50 + 0x1ee8);
  if ((*(float *)(DAT_180ca0a50 + 0x1578) == 0.0) ||
     (*(float *)(DAT_180ca0a50 + 0x1578) != local_e8)) {
    if (cVar4 == '\0') {
      fVar15 = 0.0;
    }
    else {
      fVar15 = DAT_1808ac1f4;
    }
  }
  else {
    fVar15 = DAT_1808ac34c;
  }
  local_b8 = CONCAT44(fVar15,fVar15);
  uStack_b0 = (ulonglong)(uint)fVar15;
  local_a8 = CONCAT44(local_a8._4_4_,0xffffffff);
  FUN_18034a380(local_e8,&local_c8,&local_e8,&local_b8);
  fVar14 = (float)FUN_1802b3660(CONCAT44(uStack_c4,local_c8) + 0x14,fVar15,DAT_1808ac118,0);
  lVar11 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x14f8) + 0x2c8);
  fVar15 = (float)local_e0;
  if (0.0 < fVar14) {
    local_d8[2] = 1.0;
    local_d8[0] = 0.0;
    local_d8[1] = fVar14 * DAT_1808ac1b0 * DAT_1808ac2cc;
    local_e8 = (float)local_e0 + fVar16;
    local_e4 = local_e0._4_4_ + DAT_1808ac9f8;
    pfVar10 = local_d8;
    if (0.0 <= local_d8[1]) {
      pfVar10 = local_d8 + 1;
    }
    pfVar7 = local_d8 + 2;
    if (local_d8[1] <= DAT_1808ac34c) {
      pfVar7 = pfVar10;
    }
    local_110 = (undefined4 *)((ulonglong)local_110 & 0xffffffff00000000);
    local_118 = (float *)CONCAT44(local_118._4_4_,DAT_1808ac854);
    FUN_1803fe590(lVar11,&local_e0,&local_e8,
                  DAT_180960f44 & 0xffffff |
                  (int)(longlong)(*pfVar7 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18);
  }
  uVar5 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,fVar14);
  local_e8 = fVar15 + DAT_1808ac8b0 + DAT_1808ac864;
  local_e4 = local_e0._4_4_ + DAT_1808ac910;
  local_108 = (char *)CONCAT44(local_108._4_4_,uVar5);
  local_110 = (undefined4 *)CONCAT44(local_110._4_4_,DAT_1808ac8d4);
  local_118 = &local_e8;
  FUN_1802b6e90(lVar11,"nl_glyph_developer",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M416 32L384 32C366 32 352 47 352 64C352 82 366 96 384 96L416 96C433 96 448 111 448 128L448 166C448 191 458 216 476 234L498 256L476 279C458 297 448 321 448 347L448 384C448 402 433 416 416 416L384 416C366 416 352 431 352 448C352 465 366 480 384 480L416 480C469 480 512 437 512 384L512 347C512 338 515 330 521 324L566 279C579 267 579 246 566 234L521 188C515 182 512 174 512 166L512 128C512 75 469 32 416 32ZM160 32C107 32 64 75 64 128L64 166C64 174 60 183 54 189L9 234C-3 246 -3 267 9 279L54 324C60 330 64 339 64 347L64 384C64 437 107 480 160 480L192 480C209 480 224 465 224 448C224 431 209 416 192 416L160 416C142 416 128 402 128 384L128 347C128 321 117 297 99 279L77 256L99 234C117 216 128 191 128 166L128 128C128 111 142 96 160 96L192 96C209 96 224 82 224 64C224 47 209 32 192 32L160 32L160 32Z\"/></svg>"
                ,DAT_1808acc0c);
  local_a8 = 9;
  local_a0 = 0xf;
  local_b8._0_1_ = s_Copy_Path_18075c298[0];
  local_b8._1_1_ = s_Copy_Path_18075c298[1];
  local_b8._2_1_ = s_Copy_Path_18075c298[2];
  local_b8._3_1_ = s_Copy_Path_18075c298[3];
  local_b8._4_1_ = s_Copy_Path_18075c298[4];
  local_b8._5_1_ = s_Copy_Path_18075c298[5];
  local_b8._6_1_ = s_Copy_Path_18075c298[6];
  local_b8._7_1_ = s_Copy_Path_18075c298[7];
  uStack_b0 = (ulonglong)(byte)s_Copy_Path_18075c298[8];
  pcVar8 = (char *)FUN_18035eb30(local_98,&local_b8);
  if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
    pcVar8 = *(char **)pcVar8;
  }
  local_e8 = fVar15 + DAT_1808aca64;
  local_e4 = (float)FUN_18053f0d0(DAT_1808ac7ec);
  local_e4 = local_e4 + local_e0._4_4_;
  if ((((uVar5 & 0xff000000) != 0) && (pcVar8 != (char *)0x0)) && (*pcVar8 != '\0')) {
    local_c8 = *(undefined4 *)(lVar11 + 0x60);
    uStack_c4 = *(undefined4 *)(lVar11 + 100);
    uStack_c0 = *(undefined4 *)(lVar11 + 0x68);
    uStack_bc = *(undefined4 *)(lVar11 + 0x6c);
    local_f0 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_110 = &local_c8;
    local_118 = (float *)CONCAT44(local_118._4_4_,uVar5);
    local_108 = pcVar8;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar11 + 0x38) + 0x18),lVar11,DAT_1808ac930,
                  &local_e8);
  }
  FUN_18000f890(local_98);
  if (0xf < local_a0) {
    uVar13 = local_a0 + 1;
    lVar11 = local_b8;
    if (0xfff < uVar13) {
      lVar11 = *(longlong *)(local_b8 + -8);
      if (0x1f < (local_b8 - lVar11) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar13 = local_a0 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar11,uVar13);
  }
  if ((cVar2 != '\0') || (cVar3 != '\0')) {
    if (lVar6 != 0) {
      puVar9 = (undefined8 *)FUN_18031a220(local_98,lVar6,cVar3);
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      if (*(code **)(DAT_180ca0a50 + 0xc18) != (code *)0x0) {
        (**(code **)(DAT_180ca0a50 + 0xc18))(DAT_180ca0a50,puVar9);
      }
      FUN_18000f890(local_98);
    }
    if ((cVar2 != '\0') || (cVar3 != '\0')) {
      FUN_1803ee1f0();
    }
  }
  return;
}



/* ===== 18031afb0 FUN_18031afb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18031afb0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [4];
  undefined8 local_a4;
  undefined8 local_9c;
  char *local_90;
  char *local_88;
  undefined4 local_80;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_90 = "nl_glyph_eye";
  local_88 = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M288 32C207 32 142 69 95 113C48 156 17 208 2 244C0 252 0 261 2 269C17 304 48 356 95 400C142 444 207 480 288 480C368 480 433 444 480 400C527 356 558 304 573 269C576 261 576 252 573 244C558 208 527 156 480 113C433 69 368 32 288 32ZM144 256C144 205 171 158 216 132C260 106 315 106 360 132C404 158 432 205 432 256C432 308 404 355 360 381C315 407 260 407 216 381C171 355 144 308 144 256ZM288 192C288 228 259 256 224 256C216 256 210 255 203 253C198 251 191 255 192 261C192 267 193 274 195 281C208 333 261 363 312 349C363 335 394 283 380 232C369 190 332 162 292 160C286 160 282 167 284 172C286 179 287 185 287 192L288 192ZM288 192Z\"/></svg>"
  ;
  local_80 = 0x44100000;
  FUN_1802c3290(local_78,&local_90);
  local_a8[0] = *(undefined1 *)(param_1 + 0xe1);
  cVar1 = FUN_1802c0a60("visible",local_a8);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xe1) = local_a8[0];
  }
  local_a4 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
  local_9c = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
  uVar2 = FUN_1803dd930(0);
  local_b0 = 0;
  local_b8 = &local_a4;
  FUN_1802b56a0("Display in Hotkey List",0,uVar2,&local_9c);
  FUN_1802c3560(local_78);
  return;
}



/* ===== 18031b0a0 FUN_18031b0a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18031b0a0(longlong param_1,char param_2)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  char *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_c8;
  local_a8 = "icon_e1c0";
  pcStack_a0 = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M134 154C122 141 101 141 89 154C76 166 76 187 89 199L153 263C165 276 186 276 198 263C211 251 211 230 198 218L134 154L134 154ZM134 154ZM288 192C288 210 302 224 320 224C337 224 352 210 352 192L352 96C352 79 337 64 320 64C302 64 288 79 288 96L288 192ZM441 218C428 230 428 251 441 263C453 276 474 276 486 263L550 199C563 187 563 166 550 154C538 141 517 141 505 154L441 218L441 218ZM441 218ZM0 384C0 402 14 416 32 416L96 416C113 416 128 402 128 384C128 367 113 352 96 352L32 352C14 352 0 367 0 384ZM224 352C206 352 192 367 192 384C192 402 206 416 224 416L416 416C433 416 448 402 448 384C448 367 433 352 416 352L224 352ZM544 352C526 352 512 367 512 384C512 402 526 416 544 416L608 416C625 416 640 402 640 384C640 367 625 352 608 352L544 352Z\"/></svg>"
  ;
  local_98 = CONCAT44(local_98._4_4_,0x44200000);
  FUN_1802c3290(local_78,&local_a8);
  puVar3 = (undefined8 *)FUN_1802b9e90(local_90,&DAT_1806e4b1c);
  local_a8 = (char *)*puVar3;
  pcStack_a0 = (char *)puVar3[1];
  local_98 = puVar3[2];
  FUN_1803e89e0(&DAT_1806e4b1c);
  cVar2 = FUN_1802d36c0("##key",&local_a8,*(undefined4 *)(param_1 + 0x60),param_2);
  if (cVar2 != '\0') {
    if (DAT_180cd1360 == param_1) {
      LOCK();
      DAT_180cd1360 = 0;
      UNLOCK();
    }
    else {
      LOCK();
      DAT_180cd1868 = 0;
      UNLOCK();
      LOCK();
      UNLOCK();
      DAT_180cd1360 = param_1;
    }
  }
  cVar2 = FUN_1803e9690(1,0,0);
  if (cVar2 != '\0') {
    cVar2 = FUN_1803dd930(0);
    if (cVar2 != '\0') {
      if (param_2 != '\0') {
        LOCK();
        DAT_180cd1360 = 0;
        UNLOCK();
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  FUN_1802c3560(local_78);
  return;
}



/* ===== 18031b200 FUN_18031b200 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18031b200(undefined8 param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined4 local_240;
  float local_238 [100];
  ulonglong local_a8;
  
  local_a8 = DAT_180919500 ^ (ulonglong)auStack_268;
  fVar10 = (float)*(double *)(DAT_180ca0a50 + 0x10) * DAT_1808ac3c4;
  fVar6 = (float)FUN_180517790(fVar10);
  fVar7 = (float)FUN_18053fc00((uint)(fVar6 * DAT_1808aca68) & _DAT_1808ade90);
  fVar3 = DAT_1808aca80;
  fVar2 = DAT_1808ac864;
  uVar5 = 0;
  fVar6 = *param_2;
  fVar1 = param_2[1];
  fVar10 = fVar10 * DAT_1808ac838;
  fVar7 = (fVar7 * DAT_1808ac7d0) / DAT_1808aca80;
  local_238[0] = 0.0;
  local_238[1] = 0.0;
  local_238[2] = 0.0;
  local_238[3] = 0.0;
  fVar11 = DAT_1808ac7a4 - fVar7;
  local_238[4] = 0.0;
  local_238[5] = 0.0;
  local_238[6] = 0.0;
  local_238[7] = 0.0;
  local_238[8] = 0.0;
  local_238[9] = 0.0;
  local_238[10] = 0.0;
  local_238[0xb] = 0.0;
  local_238[0xc] = 0.0;
  local_238[0xd] = 0.0;
  local_238[0xe] = 0.0;
  local_238[0xf] = 0.0;
  local_238[0x10] = 0.0;
  local_238[0x11] = 0.0;
  local_238[0x12] = 0.0;
  local_238[0x13] = 0.0;
  local_238[0x14] = 0.0;
  local_238[0x15] = 0.0;
  local_238[0x16] = 0.0;
  local_238[0x17] = 0.0;
  local_238[0x18] = 0.0;
  local_238[0x19] = 0.0;
  local_238[0x1a] = 0.0;
  local_238[0x1b] = 0.0;
  local_238[0x1c] = 0.0;
  local_238[0x1d] = 0.0;
  local_238[0x1e] = 0.0;
  local_238[0x1f] = 0.0;
  local_238[0x20] = 0.0;
  local_238[0x21] = 0.0;
  local_238[0x22] = 0.0;
  local_238[0x23] = 0.0;
  local_238[0x24] = 0.0;
  local_238[0x25] = 0.0;
  local_238[0x26] = 0.0;
  local_238[0x27] = 0.0;
  local_238[0x28] = 0.0;
  local_238[0x29] = 0.0;
  local_238[0x2a] = 0.0;
  local_238[0x2b] = 0.0;
  local_238[0x2c] = 0.0;
  local_238[0x2d] = 0.0;
  local_238[0x2e] = 0.0;
  local_238[0x2f] = 0.0;
  local_238[0x30] = 0.0;
  local_238[0x31] = 0.0;
  local_238[0x32] = 0.0;
  local_238[0x33] = 0.0;
  local_238[0x34] = 0.0;
  local_238[0x35] = 0.0;
  local_238[0x36] = 0.0;
  local_238[0x37] = 0.0;
  local_238[0x38] = 0.0;
  local_238[0x39] = 0.0;
  local_238[0x3a] = 0.0;
  local_238[0x3b] = 0.0;
  local_238[0x3c] = 0.0;
  local_238[0x3d] = 0.0;
  local_238[0x3e] = 0.0;
  local_238[0x3f] = 0.0;
  local_238[0x40] = 0.0;
  local_238[0x41] = 0.0;
  local_238[0x42] = 0.0;
  local_238[0x43] = 0.0;
  local_238[0x44] = 0.0;
  local_238[0x45] = 0.0;
  local_238[0x46] = 0.0;
  local_238[0x47] = 0.0;
  local_238[0x48] = 0.0;
  local_238[0x49] = 0.0;
  local_238[0x4a] = 0.0;
  local_238[0x4b] = 0.0;
  local_238[0x4c] = 0.0;
  local_238[0x4d] = 0.0;
  local_238[0x4e] = 0.0;
  local_238[0x4f] = 0.0;
  local_238[0x50] = 0.0;
  local_238[0x51] = 0.0;
  local_238[0x52] = 0.0;
  local_238[0x53] = 0.0;
  local_238[0x54] = 0.0;
  local_238[0x55] = 0.0;
  local_238[0x56] = 0.0;
  local_238[0x57] = 0.0;
  local_238[0x58] = 0.0;
  local_238[0x59] = 0.0;
  local_238[0x5a] = 0.0;
  local_238[0x5b] = 0.0;
  local_238[0x5c] = 0.0;
  local_238[0x5d] = 0.0;
  local_238[0x5e] = 0.0;
  local_238[0x5f] = 0.0;
  local_238[0x60] = 0.0;
  local_238[0x61] = 0.0;
  local_238[0x62] = 0.0;
  local_238[99] = 0.0;
  do {
    fVar9 = ((float)(int)uVar5 / fVar3) * fVar11 + fVar7 + fVar10;
    fVar8 = (float)FUN_180517200(fVar9);
    local_238[uVar5 * 2] = fVar8 * fVar2 + fVar6;
    fVar8 = (float)FUN_180517790(fVar9);
    local_238[uVar5 * 2 + 1] = fVar8 * fVar2 + fVar1;
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
  } while ((int)uVar4 < 0x32);
  local_240 = 0;
  local_248 = DAT_1808ac658;
  FUN_1803fc600(param_1,local_238,0x32,param_3);
  return;
}



/* ===== 18031b430 FUN_18031b430 ===== */

undefined1 *
FUN_18031b430(undefined1 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  char *pcVar5;
  uint uVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar7;
  undefined4 uVar8;
  uint local_res8 [2];
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  lVar1 = DAT_180ca0a50;
  *param_1 = 0;
  *(undefined1 *)(*(longlong *)(lVar1 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x14f8);
  *(undefined8 *)(lVar1 + 0x118) = *param_3;
  *(undefined1 *)(lVar1 + 0x159) = 1;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar2 = FUN_180415e30(param_2,param_4,0);
  *param_1 = uVar2;
  uVar8 = 0;
  uVar6 = *(uint *)(DAT_180ca0a50 + 0x1ee8);
  if ((*(uint *)(DAT_180ca0a50 + 0x1578) == 0) || (*(uint *)(DAT_180ca0a50 + 0x1578) != uVar6)) {
    cVar3 = FUN_1803dd930(0);
    uVar7 = extraout_XMM0_Qa_00;
    if (cVar3 != '\0') {
      uVar8 = DAT_1808ac1f4;
    }
  }
  else {
    uVar7 = extraout_XMM0_Qa;
    uVar8 = DAT_1808ac34c;
  }
  uVar6 = ~uVar6;
  pcVar5 = "hover";
  bVar4 = 0x68;
  local_res8[0] = uVar6;
  do {
    pcVar5 = pcVar5 + 1;
    if (((bVar4 == 0x23) && (*pcVar5 == 0x23)) && (pcVar5[1] == 0x23)) {
      pcVar5 = pcVar5 + 2;
      local_res8[0] = uVar6;
    }
    else {
      local_res8[0] =
           local_res8[0] >> 8 ^
           *(uint *)(&DAT_1806c25c0 + ((ulonglong)(local_res8[0] & 0xff) ^ (ulonglong)bVar4) * 4);
    }
    bVar4 = *pcVar5;
  } while (bVar4 != 0);
  local_res8[0] = ~local_res8[0];
  local_2c = 0;
  local_28 = 0xffffffff;
  local_38 = uVar8;
  local_34 = uVar8;
  local_30 = uVar8;
  FUN_18034a380(uVar7,local_48,local_res8,&local_38);
  uVar7 = FUN_1802b3660(local_48[0] + 0x14,uVar8,DAT_1808ac118,0);
  bVar4 = s_label_1806e0514[0];
  pcVar5 = "label";
  *(int *)(param_1 + 4) = (int)uVar7;
  local_res8[0] = uVar6;
  while (pcVar5 = pcVar5 + 1, bVar4 != 0) {
    if (((bVar4 == 0x23) && (*pcVar5 == 0x23)) && (pcVar5[1] == 0x23)) {
      pcVar5 = pcVar5 + 2;
      local_res8[0] = uVar6;
    }
    else {
      local_res8[0] =
           local_res8[0] >> 8 ^
           *(uint *)(&DAT_1806c25c0 + (ulonglong)(local_res8[0] & 0xff ^ (uint)bVar4) * 4);
    }
    bVar4 = *pcVar5;
  }
  local_res8[0] = ~local_res8[0];
  local_2c = 0;
  local_28 = 0xffffffff;
  local_38 = uVar8;
  local_34 = uVar8;
  local_30 = uVar8;
  FUN_18034a380(uVar7,local_48,local_res8,&local_38);
  uVar8 = FUN_1802b3660(local_48[0] + 0x14,uVar8,DAT_1808ac118,0);
  *(undefined4 *)(param_1 + 8) = uVar8;
  return param_1;
}



/* ===== 18031b640 FUN_18031b640 ===== */

undefined8 * FUN_18031b640(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong local_res10;
  ulonglong local_res18 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_res10 = 0;
  while( true ) {
    uVar1 = local_res10;
    puVar7 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar7 = (undefined8 *)*param_2;
    }
    if ((ulonglong)param_2[2] <= local_res10) break;
    lVar6 = param_2[2] + (longlong)puVar7;
    lVar2 = thunk_FUN_1804e6c50((longlong)puVar7 + local_res10,lVar6,0x20);
    if ((lVar2 == lVar6) || (lVar2 = lVar2 - (longlong)puVar7, lVar2 == -1)) break;
    local_res18[0] = lVar2 - uVar1;
    puVar7 = (undefined8 *)param_1[1];
    if (puVar7 == (undefined8 *)param_1[2]) {
      FUN_180351c50(param_1,puVar7,param_2,&local_res10,local_res18);
      local_res10 = lVar2 + 1;
    }
    else {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      if ((ulonglong)param_2[2] < uVar1) goto LAB_18031b7da;
      uVar3 = param_2[2] - uVar1;
      uVar5 = local_res18[0];
      if (uVar3 < local_res18[0]) {
        uVar5 = uVar3;
      }
      puVar4 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar4 = (undefined8 *)*param_2;
      }
      FUN_1800133a0(puVar7,(longlong)puVar4 + uVar1,uVar5);
      param_1[1] = param_1[1] + 0x20;
      local_res10 = lVar2 + 1;
    }
  }
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 == (undefined8 *)param_1[2]) {
    FUN_180351e70(param_1,puVar7,param_2,&local_res10);
  }
  else {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    if ((ulonglong)param_2[2] < uVar1) {
LAB_18031b7da:
                    /* WARNING: Subroutine does not return */
      FUN_18002a1a0();
    }
    lVar2 = param_2[2] - uVar1;
    lVar6 = -1;
    if (lVar2 != -1) {
      lVar6 = lVar2;
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_1800133a0(puVar7,uVar1 + (longlong)param_2,lVar6);
    param_1[1] = param_1[1] + 0x20;
  }
  return param_1;
}



/* ===== 18031b7e0 FUN_18031b7e0 ===== */

float FUN_18031b7e0(undefined8 param_1,float param_2)

{
  float fVar1;
  float local_res18 [4];
  
  FUN_18040a2f0(local_res18,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                *(undefined4 *)(DAT_180ca0a50 + 0x1200),DAT_1808acd08,0,param_1,0,0,0);
  fVar1 = (float)FUN_18053fc00(local_res18[0] * param_2 + DAT_1808ac2f0);
  return fVar1 / param_2;
}



/* ===== 18031b860 FUN_18031b860 ===== */

ulonglong FUN_18031b860(char *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar10;
  char local_res18 [8];
  char local_res20 [8];
  undefined8 in_stack_ffffffffffffff18;
  ulonglong uVar11;
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  lVar2 = DAT_180ca0a50;
  uVar9 = (uint)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  uVar6 = *(ulonglong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined1 *)(uVar6 + 0xce) = 1;
  lVar2 = *(longlong *)(lVar2 + 0x14f8);
  if (*(char *)(lVar2 + 0xd1) == '\0') {
    uVar5 = FUN_1803e8900(lVar2,param_1);
    pcVar8 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar8 != '\0') {
        if (((*pcVar8 == '#') && (pcVar8[1] == '#')) ||
           (pcVar8 = pcVar8 + 1, pcVar8 == (char *)0xffffffffffffffff)) break;
      }
    }
    uVar10 = 0;
    fVar1 = *(float *)(DAT_180ca0a50 + 0x1200);
    uVar11 = (ulonglong)uVar9 << 0x20;
    FUN_18040a2f0(&local_a0,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),fVar1,DAT_1808acd08,uVar11,
                  param_1,pcVar8,pcVar8,0);
    local_a0 = (float)FUN_18053fc00(local_a0 * param_2 + DAT_1808ac2f0);
    local_98 = *(float *)(lVar2 + 0x118);
    local_a0 = local_a0 / param_2;
    local_8c = fVar1 + *(float *)(lVar2 + 0x11c);
    local_90 = local_98 + local_a0;
    local_94 = *(undefined4 *)(lVar2 + 0x11c);
    local_9c = fVar1;
    FUN_1803ec550(&local_a0,DAT_1808acda0);
    uVar6 = FUN_1803ec2f0(&local_98,uVar5,0,0);
    if ((char)uVar6 != '\0') {
      local_res20[0] = '\0';
      local_res18[0] = '\0';
      bVar3 = FUN_180415270(&local_98,uVar5,local_res20,local_res18,uVar11 & 0xffffffff00000000);
      if (local_res18[0] == '\0') {
        if (local_res20[0] != '\0') {
          uVar10 = DAT_1808ac294;
        }
      }
      else {
        uVar10 = DAT_1808ac34c;
      }
      pcVar7 = "chat_link";
      bVar4 = 99;
      uVar9 = ~uVar5;
      do {
        pcVar7 = pcVar7 + 1;
        if (((bVar4 == 0x23) && (*pcVar7 == 0x23)) && (pcVar7[1] == 0x23)) {
          pcVar7 = pcVar7 + 2;
          uVar9 = ~uVar5;
        }
        else {
          uVar9 = uVar9 >> 8 ^
                  *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar9 & 0xff) ^ (ulonglong)bVar4) * 4);
        }
        bVar4 = *pcVar7;
      } while (bVar4 != 0);
      local_a8 = CONCAT44(local_a8._4_4_,~uVar9);
      local_6c = 0;
      local_68 = 0xffffffff;
      local_78 = uVar10;
      local_74 = uVar10;
      local_70 = uVar10;
      FUN_18034a380(extraout_XMM0_Da,local_88,&local_a8,&local_78);
      uVar10 = FUN_1802b3660(local_88[0] + 0x14,uVar10,DAT_1808ac118,0);
      if (pcVar8 != param_1) {
        uVar10 = FUN_1802b38e0(DAT_180960f38,DAT_180960f3c,uVar10);
        FUN_1803d8730(0,uVar10);
        local_a8 = 0;
        FUN_1803d9560(&local_98,&local_90,param_1,pcVar8,&local_a0,&local_a8,0);
        FUN_1803d87f0(1);
      }
      return (ulonglong)bVar3;
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



/* ===== 18031bb30 FUN_18031bb30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18031bb30(float param_1)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  char cVar13;
  int iVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  int iVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_res10;
  undefined4 local_res14;
  undefined4 local_res18;
  undefined4 local_res1c;
  float local_res20;
  float local_res24;
  undefined8 *puVar28;
  float local_108;
  float local_104;
  undefined8 *local_100;
  undefined8 *puStack_f8;
  float local_e8 [44];
  
  lVar12 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar4 = DAT_1808acd08;
  lVar3 = *(longlong *)(lVar12 + 0x14f8);
  uVar2 = *(undefined8 *)(lVar12 + 0xcec);
  puVar28 = (undefined8 *)&DAT_1806efc00;
  FUN_18040a2f0(&local_res10,*(undefined8 *)(lVar12 + 0x11f0),*(undefined4 *)(lVar12 + 0x1200),
                DAT_1808acd08,0,&DAT_1806efc00,0,0,0);
  fVar1 = DAT_1808ac2f0;
  fVar24 = (float)FUN_18053fc00(local_res10 * param_1 + DAT_1808ac2f0);
  puVar11 = _UNK_1808adb78;
  puVar10 = _DAT_1808adb70;
  puVar9 = _UNK_1808adb38;
  puVar8 = _DAT_1808adb30;
  puVar7 = _UNK_1808adaf8;
  puVar6 = _DAT_1808adaf0;
  uVar5 = DAT_1808acda0;
  uVar23 = 0;
  if ((DAT_181107858 - DAT_181107850 >> 3) * 0x4ec4ec4ec4ec4ec5 != 0) {
    fVar26 = (float)uVar2 * _DAT_1808ad9f0;
    fVar27 = (float)((ulonglong)uVar2 >> 0x20) * _UNK_1808ad9f4;
    do {
      puVar19 = (undefined8 *)(uVar23 * 0x68 + DAT_181107850);
      FUN_1803e8a70(uVar23 & 0xffffffff);
      local_100 = (undefined8 *)CONCAT44(fVar27,fVar26);
      FUN_1803d89a0(0xe,&local_100);
      if ((ulonglong)puVar19[3] < 0x10) {
        puVar22 = puVar19;
      }
      else {
        puVar22 = (undefined8 *)*puVar19;
      }
      iVar14 = *(int *)(puVar19 + 0xc);
      if (iVar14 == 2) {
        local_100 = puVar10;
        puStack_f8 = puVar11;
      }
      else if (iVar14 == 3) {
        local_100 = puVar6;
        puStack_f8 = puVar7;
      }
      else if (iVar14 == 4) {
        local_100 = puVar8;
        puStack_f8 = puVar9;
      }
      else {
        local_100 = _DAT_1808adba0;
        puStack_f8 = _UNK_1808adba8;
      }
      FUN_180414c20(&local_100,&DAT_1806d3198,puVar22);
      plVar20 = puVar19 + 8;
      plVar17 = plVar20;
      if (0xf < (ulonglong)puVar19[0xb]) {
        plVar17 = (longlong *)*plVar20;
      }
      FUN_18031b7e0(plVar17);
      FUN_1803ec6c0();
      FUN_1803d8730(0,DAT_180960ec4);
      if (0xf < (ulonglong)puVar19[0xb]) {
        plVar20 = (longlong *)*plVar20;
      }
      FUN_180414370(plVar20,0,1);
      FUN_1803d87f0(1);
      FUN_1803d8a40(1);
      FUN_1803d8730(0,DAT_180960f38);
      local_res14 = 0;
      local_res10 = fVar24;
      FUN_1803d89a0(0xe,&local_res10);
      FUN_18031b640(&local_100,puVar19 + 4);
      puVar22 = puStack_f8;
      for (puVar19 = local_100; puVar19 != puVar22; puVar19 = puVar19 + 4) {
        puVar28 = puVar19;
        if (0xf < (ulonglong)puVar19[3]) {
          puVar28 = (undefined8 *)*puVar19;
        }
        FUN_18040a2f0(local_e8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                      *(undefined4 *)(DAT_180ca0a50 + 0x1200),uVar4,0,puVar28,0,0,0);
        fVar25 = (float)FUN_18053fc00(local_e8[0] * param_1 + fVar1);
        if (*(float *)(lVar3 + 0x280) - *(float *)(lVar3 + 0x118) < fVar25 / param_1) {
          FUN_180417650();
        }
        if (puVar19[2] == 10) {
          uVar16 = puVar19[3];
          puVar15 = puVar19;
          if (0xf < uVar16) {
            puVar15 = (undefined8 *)*puVar19;
          }
          if (*(char *)((longlong)puVar15 + 5) != '-') goto LAB_18031beef;
          uVar18 = 0;
          do {
            if (uVar18 != 5) {
              puVar15 = puVar19;
              if (0xf < uVar16) {
                puVar15 = (undefined8 *)*puVar19;
              }
              if ((0x19 < (byte)(*(char *)((longlong)puVar15 + uVar18) + 0xbfU)) &&
                 (9 < (byte)(*(char *)((longlong)puVar15 + uVar18) - 0x30U))) goto LAB_18031bef3;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < 10);
          puVar15 = puVar19;
          if (0xf < uVar16) {
            puVar15 = (undefined8 *)*puVar19;
          }
          cVar13 = FUN_18031b860(puVar15);
          if (cVar13 != '\0') {
            puVar15 = puVar19;
            if (0xf < (ulonglong)puVar19[3]) {
              puVar15 = (undefined8 *)*puVar19;
            }
            if (*(code **)(DAT_180ca0a50 + 0xc18) != (code *)0x0) {
              (**(code **)(DAT_180ca0a50 + 0xc18))(DAT_180ca0a50,puVar15);
            }
          }
        }
        else {
LAB_18031beef:
          uVar16 = puVar19[3];
LAB_18031bef3:
          if (uVar16 < 0x10) {
            puVar15 = puVar19;
          }
          else {
            puVar15 = (undefined8 *)*puVar19;
          }
          FUN_180414370(puVar15,0,1);
        }
        FUN_1803ec6c0();
      }
      FUN_1800288b0(&local_100);
      FUN_1803d8a40(1);
      lVar12 = DAT_180ca0a50;
      iVar14 = *(int *)(DAT_180ca0a50 + 0x1fc0);
      if (0 < iVar14) {
        iVar21 = 1;
        goto LAB_18031bf70;
      }
      FUN_1803ebc00("Calling PopStyleColor() too many times!");
      iVar14 = *(int *)(lVar12 + 0x1fc0);
      for (iVar21 = iVar14; 0 < iVar21; iVar21 = iVar21 + -1) {
LAB_18031bf70:
        puVar19 = (undefined8 *)(*(longlong *)(lVar12 + 0x1fc8) + -0x10 + (longlong)iVar14 * 0x14);
        uVar2 = puVar19[1];
        puVar22 = (undefined8 *)
                  (lVar12 + 0xde0 +
                  (longlong)
                  *(int *)(*(longlong *)(lVar12 + 0x1fc8) + -0x14 + (longlong)iVar14 * 0x14) * 0x10)
        ;
        *puVar22 = *puVar19;
        puVar22[1] = uVar2;
        iVar14 = *(int *)(lVar12 + 0x1fc0) + -1;
        *(int *)(lVar12 + 0x1fc0) = iVar14;
      }
      iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar14 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
      }
      FUN_180417650();
      uVar23 = uVar23 + 1;
      if ((uVar23 != (DAT_181107858 - DAT_181107850 >> 3) * 0x4ec4ec4ec4ec4ec5) &&
         (*(char *)(lVar3 + 0xd1) == '\0')) {
        fVar25 = *(float *)(lVar3 + 0x11c);
        local_res18 = 0;
        local_res1c = 0x3f800000;
        FUN_1803ec550(&local_res18,uVar5);
        local_108 = *(float *)(lVar3 + 0x28);
        local_res20 = local_108 + *(float *)(lVar3 + 0x30);
        local_res24 = fVar25 + DAT_1808ac34c;
        puVar28 = (undefined8 *)((ulonglong)puVar28 & 0xffffffff00000000);
        local_104 = fVar25;
        FUN_1803fe590(*(undefined8 *)(lVar3 + 0x2c8),&local_108,&local_res20,DAT_180960f48,0,puVar28
                     );
      }
    } while (uVar23 < (ulonglong)((DAT_181107858 - DAT_181107850 >> 3) * 0x4ec4ec4ec4ec4ec5));
  }
  fVar1 = *(float *)(lVar3 + 0xa4);
  if (0.0 < fVar1) {
    if (fVar1 < DAT_181107078) {
      DAT_181107078 = fVar1;
    }
    if ((DAT_181107078 == *(float *)(lVar3 + 0x9c)) && (DAT_181107078 != fVar1)) {
      lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
      *(float *)(lVar3 + 0xac) = fVar1;
      *(undefined4 *)(lVar3 + 0xb4) = 0;
      *(undefined4 *)(lVar3 + 0xbc) = 0;
    }
    DAT_181107078 = fVar1;
  }
  return;
}



/* ===== 18031c170 FUN_18031c170 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18031c170(ulonglong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *****pppppcVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  char *pcVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint uVar22;
  char *pcVar23;
  undefined8 uVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 extraout_XMM0_Qa;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uStack_210;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [24];
  undefined8 local_1e8;
  undefined8 local_1e0;
  char *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  float local_1a8;
  float fStack_1a4;
  float local_198;
  float local_194;
  undefined8 local_190;
  float local_188;
  undefined8 local_180;
  ulonglong uStack_178;
  undefined8 local_170;
  ulonglong local_168;
  char *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulonglong local_140;
  char *****local_138 [3];
  ulonglong local_120;
  undefined1 local_118 [40];
  ulonglong local_f0;
  
  fVar28 = DAT_1808ac34c;
  local_f0 = DAT_180919500 ^ (ulonglong)auStack_208;
  if ((DAT_180cd0f0f == '\0') || (DAT_18091a190 == '\0')) {
    fVar30 = 0.0;
  }
  else {
    fVar30 = DAT_1808ac34c;
  }
  uVar16 = 0xffffffff;
  pcVar23 = "chat_window_alpha";
  bVar8 = 99;
  do {
    pcVar23 = pcVar23 + 1;
    if (((bVar8 == 0x23) && (*pcVar23 == 0x23)) && (pcVar23[1] == 0x23)) {
      uVar16 = 0xffffffff;
      pcVar23 = pcVar23 + 2;
    }
    else {
      param_1 = uVar16 & 0xff ^ (ulonglong)bVar8;
      uVar16 = (ulonglong)((uint)(uVar16 >> 8) ^ *(uint *)(&DAT_1806c25c0 + param_1 * 4));
    }
    bVar8 = *pcVar23;
  } while (bVar8 != 0);
  local_198 = (float)~(uint)uVar16;
  local_180 = CONCAT44(fVar30,fVar30);
  uStack_178 = (ulonglong)(uint)fVar30;
  local_170 = CONCAT44(local_170._4_4_,0xffffffff);
  FUN_18034a380(param_1,&local_158,&local_198,&local_180);
  local_188 = (float)FUN_1802b3660(local_158 + 0x14,fVar30,DAT_1808ac118,0);
  puVar21 = auStack_208;
  if (local_188 <= 0.0) goto LAB_18031d537;
  fVar26 = (float)FUN_18033c790();
  FUN_1803647e0();
  uVar16 = DAT_180ca0a50;
  fVar30 = DAT_1808ac000;
  if (DAT_1808ac000 <= fVar26) {
    fVar30 = fVar26;
  }
  fVar26 = DAT_1808ac8b0 / fVar30;
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 2;
  *(undefined4 *)(uVar16 + 0x1f58) = 0x43960000;
  *(undefined4 *)(uVar16 + 0x1f5c) = 0x43fa0000;
  *(undefined4 *)(uVar16 + 8000) = 4;
  local_1a8 = 300.0;
  fStack_1a4 = 300.0;
  FUN_1803d89a0(5,&local_1a8);
  local_1a8 = 10.0;
  fStack_1a4 = 10.0;
  FUN_1803d89a0(2,&local_1a8);
  FUN_1803d8870(4,0);
  FUN_1803d8870(3,fVar26);
  FUN_1803d8730(0x1f,0);
  FUN_1803d8730(0x20,0);
  FUN_1803d8730(0x21,0);
  uVar24 = 0x1b9;
  if (DAT_18091a190 == '\0') {
    uVar24 = 0x303b9;
  }
  cVar7 = FUN_1803e4f20("##nl_chat",0,uVar24);
  FUN_1803d8a40(4);
  FUN_1803d87f0(3);
  if (cVar7 == '\0') {
    FUN_1803e75b0();
    FUN_180364ab0();
    puVar21 = auStack_208;
    goto LAB_18031d537;
  }
  lVar25 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar25 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_158 = *(char **)(DAT_180ca0a50 + 0x11f0);
  uStack_150 = CONCAT44(*(undefined4 *)(DAT_180ca0a50 + 0x1200),
                        *(undefined4 *)(DAT_180ca0a50 + 0x1204));
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_158);
  FUN_1803e8680(lVar25,DAT_1808ac930,0);
  uVar16 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  plVar2 = *(longlong **)(uVar16 + 0x14f8);
  *(undefined1 *)((longlong)plVar2 + 0xce) = 1;
  lVar3 = *(longlong *)(*(longlong *)(uVar16 + 0x14f8) + 0x2c8);
  lVar25 = plVar2[5];
  fVar34 = *(float *)(plVar2 + 6);
  fVar27 = *(float *)((longlong)plVar2 + 0x34);
  local_1a8 = (float)lVar25 + fVar34;
  local_190._4_4_ = (float)((ulonglong)lVar25 >> 0x20);
  fStack_1a4 = local_190._4_4_ + fVar27;
  local_1e0._0_4_ = fVar28 / fVar30;
  local_1e8._0_4_ = (float)_DAT_180960f74;
  local_190 = lVar25;
  FUN_1802b4c40(lVar3,&local_190,&local_1a8,fVar26);
  fVar33 = local_190._4_4_;
  fVar32 = local_190._4_4_ + DAT_1808ac97c;
  fVar30 = (float)local_190;
  fVar34 = (float)local_190 + fVar34;
  local_1a8 = fVar34;
  fStack_1a4 = fVar32 - fVar28;
  local_198 = fVar34;
  local_194 = fVar32;
  bVar8 = FUN_1803eeca0();
  local_1e0._0_4_ = 6.72623e-44;
  local_1e8._0_4_ = fVar26;
  FUN_1803fe590(lVar3,&local_190,&local_1a8,*(undefined4 *)(&DAT_180960efc + (ulonglong)bVar8 * 4));
  local_1a8 = fVar30;
  local_1e0 = (char **)((ulonglong)local_1e0._4_4_ << 0x20);
  local_1e8 = (float *)((ulonglong)local_1e8._4_4_ << 0x20);
  fStack_1a4 = fVar32 - fVar28;
  FUN_1803fe590(lVar3,&local_1a8,&local_198,DAT_180960f48);
  local_1a8 = 29.706;
  fStack_1a4 = 23.706;
  fVar30 = fVar34 - DAT_1808ac9dc;
  local_194 = fVar33;
  local_198 = fVar30;
  pcVar23 = (char *)FUN_18031b430(&local_158,"##close",&local_198,&local_1a8);
  if (*pcVar23 != '\0') {
    DAT_180cd0f0f = '\0';
  }
  local_1a8 = fVar30 + _DAT_1808ac8f8;
  fStack_1a4 = fVar33 + DAT_1808ac8ac;
  local_1d8._0_4_ = DAT_180960ec8;
  local_1e0._0_4_ = (float)DAT_1808ac8d4;
  local_1e8 = &local_1a8;
  FUN_1802b6e90(lVar3,"nl_glyph_xmark",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M342 151C355 139 355 118 342 106C330 93 309 93 297 106L192 211L86 106C74 93 53 93 41 106C28 118 28 139 41 151L146 256L41 362C28 374 28 395 41 407C53 420 74 420 86 407L191 302L297 407C309 420 330 420 342 407C355 395 355 374 342 362L237 256L342 151L342 151Z\"/></svg>"
                ,DAT_1808acbd8);
  fVar26 = (float)FUN_18053fc00();
  fVar30 = (float)FUN_18053fc00(fVar33 + _DAT_1808ac684);
  if (fVar30 <= fVar33) {
    fVar30 = fVar33;
  }
  fVar31 = (float)local_190 + DAT_1808ac7ac;
  local_1a8 = (float)FUN_18053fc00();
  local_1d8 = (char *)CONCAT44(local_1d8._4_4_,
                               (int)(longlong)
                                    ((float)(DAT_1809f54bc >> 0x18) * DAT_1808ac27c + DAT_1808ac1f4)
                               << 0x18 | DAT_1809f54bc & 0xffffff);
  local_1e0 = (char **)CONCAT44(local_1e0._4_4_,DAT_1808ac8b0);
  local_1e8 = &local_1a8;
  fStack_1a4 = fVar30;
  FUN_180322fd0(lVar3,"nl_glyph_chat",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M208 352C322 352 416 274 416 176C416 79 322 0 208 0C93 0 0 79 0 176C0 215 14 251 39 280C36 289 30 298 25 305C20 311 15 316 12 319C10 320 8 322 7 323C7 323 6 323 6 323L6 324L6 324L6 324C1 328 -1 335 0 341C3 348 9 352 16 352C37 352 59 347 78 340C87 336 95 333 103 329C134 344 169 352 208 352L208 352ZM448 176C448 289 348 373 231 383C255 457 336 512 432 512C470 512 505 503 536 488C544 492 552 496 561 499C580 506 602 512 624 512C630 512 637 507 639 500C641 494 639 487 633 483L633 483L633 483L633 482C633 482 632 482 632 482C631 481 629 480 627 478C624 475 619 470 614 464C609 457 603 448 600 440C625 411 639 375 639 336C639 244 555 167 447 161C447 166 447 171 447 176L448 176ZM448 176Z\"/></svg>"
                ,DAT_1808acc20);
  uStack_178 = 0;
  local_170 = 4;
  local_168 = 0xf;
  local_180 = (ulonglong)DAT_180767498;
  pcVar23 = (char *)FUN_18035eb30(local_118,&local_180);
  uVar20 = DAT_180960ec8;
  if (0xf < *(ulonglong *)(pcVar23 + 0x18)) {
    pcVar23 = *(char **)pcVar23;
  }
  fVar31 = fVar31 + fVar26 + DAT_1808ac750;
  local_1a8 = (float)FUN_18053fc00();
  lVar25 = DAT_1811079c0;
  if ((DAT_1811079c0 == 0) && (lVar25 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar25 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  fStack_1a4 = fVar30;
  if ((((uVar20 & 0xff000000) != 0) && (pcVar23 != (char *)0x0)) && (*pcVar23 != '\0')) {
    if (lVar25 == 0) {
      lVar25 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x18);
    }
    local_158 = *(char **)(lVar3 + 0x60);
    uStack_150 = *(ulonglong *)(lVar3 + 0x68);
    local_1c0 = 0;
    local_1c8 = 0;
    local_1d0 = 0;
    local_1e0 = &local_158;
    local_1e8 = (float *)CONCAT44(local_1e8._4_4_,uVar20);
    local_1d8 = pcVar23;
    FUN_18040a900(lVar25,lVar3,DAT_1808ac91c,&local_1a8);
  }
  FUN_18000f890(local_118);
  if (0xf < local_168) {
    pcVar17 = (char *)(local_168 + 1);
    uVar16 = local_180;
    if ((byte *)0xfff < pcVar17) {
      uVar16 = *(ulonglong *)(local_180 - 8);
      if (0x1f < (local_180 - uVar16) - 8) {
        pcVar5 = (code *)swi(0x29);
        bVar8 = (*pcVar5)(5);
        puVar21 = auStack_200;
        goto LAB_18031c8cf;
      }
      pcVar17 = (char *)(local_168 + 0x28);
    }
    thunk_FUN_1803d64e0(uVar16,pcVar17);
  }
  uVar16 = DAT_180ca0a50;
  fVar30 = DAT_1808ac864;
  puVar21 = auStack_208;
  fVar32 = fVar32 + DAT_1808ac864;
  fVar29 = (float)local_190 + DAT_1808ac864;
  fVar26 = (((((fVar33 + fVar27) - DAT_1808ac864) - fVar32) - fVar28) - DAT_1808ac9dc) -
           DAT_1808ac864;
  fVar31 = fVar28;
  if (fVar28 <= fVar26) {
    fVar31 = fVar26;
  }
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar25 = *(longlong *)(uVar16 + 0x14f8);
  *(float *)(lVar25 + 0x118) = fVar29;
  *(float *)(lVar25 + 0x11c) = fVar32;
  *(undefined1 *)(lVar25 + 0x159) = 1;
  pcVar23 = (char *)0xffffffff;
  pcVar17 = "chat_messages_scroll";
  bVar8 = 99;
  fVar26 = (float)local_190;
  do {
    pcVar17 = pcVar17 + 1;
    fVar27 = fVar29;
    if (((bVar8 == 0x23) && (*pcVar17 == 0x23)) && (pcVar17[1] == 0x23)) {
      pcVar23 = (char *)0xffffffff;
      pcVar17 = pcVar17 + 2;
    }
    else {
LAB_18031c8cf:
      pcVar23 = (char *)(ulonglong)
                        ((uint)((ulonglong)pcVar23 >> 8) & 0xffffff ^
                        *(uint *)(&DAT_1806c25c0 +
                                 ((ulonglong)pcVar23 & 0xff ^ (ulonglong)bVar8) * 4));
      fVar29 = fVar27;
    }
    bVar8 = *pcVar17;
  } while (bVar8 != 0);
  uVar20 = ~(uint)pcVar23;
  uVar16 = (ulonglong)uVar20;
  uVar18 = ((((uVar16 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)(uVar20 >> 8 & 0xff)
             ) * 0x100000001b3 ^ (ulonglong)(uVar20 >> 0x10 & 0xff)) * 0x100000001b3 ^
           (ulonglong)(uVar20 >> 0x18)) * 0x100000001b3 & DAT_1811077a0;
  lVar25 = *(longlong *)(DAT_181107788 + 8 + uVar18 * 0x10);
  if (lVar25 == DAT_181107778) {
LAB_18031c978:
    lVar25 = 0;
  }
  else {
    uVar22 = *(uint *)(lVar25 + 0x10);
    while (uVar20 != uVar22) {
      if (lVar25 == *(longlong *)(DAT_181107788 + uVar18 * 0x10)) goto LAB_18031c978;
      lVar25 = *(longlong *)(lVar25 + 8);
      uVar22 = *(uint *)(lVar25 + 0x10);
    }
  }
  if ((lVar25 == 0) || (lVar25 == DAT_181107778)) {
    uVar24 = 0;
  }
  else {
    uVar24 = *(undefined8 *)(lVar25 + 0x18);
  }
  *(undefined8 *)(puVar21 + -8) = 0x18031c995;
  FUN_1802b6190(uVar20,uVar24);
  *(undefined4 *)(puVar21 + 0x60) = 0x40a00000;
  *(undefined4 *)(puVar21 + 100) = 0x40a00000;
  *(undefined8 *)(puVar21 + -8) = 0x18031c9b4;
  FUN_1803d89a0(0xe,puVar21 + 0x60);
  uVar18 = DAT_180ca0a50;
  lVar25 = 0;
  *(undefined4 *)(puVar21 + 0x60) = 0xbf800000;
  *(float *)(puVar21 + 100) = fVar31;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar24 = *(undefined8 *)(uVar18 + 0x14f8);
  *(undefined8 *)(puVar21 + -8) = 0x18031c9ed;
  uVar10 = FUN_1803e8900(uVar24,"##chat_messages");
  *(undefined4 *)(puVar21 + 0x20) = 0x98;
  *(undefined8 *)(puVar21 + -8) = 0x18031ca0b;
  cVar7 = FUN_1803e1800("##chat_messages",uVar10,puVar21 + 0x60,0);
  uVar18 = DAT_180ca0a50;
  if (cVar7 != '\0') {
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar25 = *(longlong *)(uVar18 + 0x14f8);
    *(undefined8 *)(puVar21 + -8) = 0x18031ca3f;
    FUN_1802b6490(uVar20,0,0,fVar30);
    if (DAT_181107850 == DAT_181107858) {
      *(ulonglong *)(puVar21 + 0x68) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar25 + 0x30) >> 0x20) * _UNK_1808ad9f4 +
                    (float)((ulonglong)*(undefined8 *)(lVar25 + 0x28) >> 0x20),
                    (float)*(undefined8 *)(lVar25 + 0x30) * _DAT_1808ad9f0 +
                    (float)*(undefined8 *)(lVar25 + 0x28));
      uVar24 = *(undefined8 *)(lVar25 + 0x2c8);
      *(undefined8 *)(puVar21 + -8) = 0x18031ca8a;
      FUN_18031b200(uVar24,puVar21 + 0x68,DAT_1809f54bc | 0xff000000);
    }
    else {
      *(undefined8 *)(puVar21 + -8) = 0x18031ca95;
      FUN_18031bb30();
    }
    *(undefined8 *)(puVar21 + -8) = 0x18031ca9c;
    FUN_1802b6cd0(uVar20);
  }
  *(undefined8 *)(puVar21 + -8) = 0x18031caa1;
  FUN_1803e1bc0();
  *(undefined8 *)(puVar21 + -8) = 0x18031caab;
  FUN_1803d8a40(1);
  fVar27 = DAT_1808ac750;
  fVar33 = fVar32 + fVar31 + DAT_1808ac750;
  *(float *)(puVar21 + 0x60) = fVar34;
  fVar32 = fVar33 + fVar28;
  *(float *)(puVar21 + 100) = fVar32;
  *(float *)(puVar21 + 0x78) = fVar26;
  *(float *)(puVar21 + 0x7c) = fVar33;
  *(undefined4 *)(puVar21 + 0x28) = 0;
  *(undefined4 *)(puVar21 + 0x20) = 0;
  *(undefined8 *)(puVar21 + -8) = 0x18031cb07;
  FUN_1803fe590(lVar3,puVar21 + 0x78,puVar21 + 0x60,DAT_180960f48);
  uStack_178 = 0;
  local_170 = 4;
  local_168 = 0xf;
  local_180 = (ulonglong)DAT_180767478;
  *(undefined8 *)(puVar21 + -8) = 0x18031cb38;
  FUN_18035eb30(local_138,&local_180);
  if (local_168 < 0x10) {
LAB_18031cb74:
    fVar32 = fVar32 + fVar27;
    pppppcVar12 = (char *****)local_138;
    if (0xf < local_120) {
      pppppcVar12 = local_138[0];
    }
    *(undefined4 *)(puVar21 + 0x50) = 0;
    *(undefined8 *)(puVar21 + 0x40) = 0;
    *(undefined8 *)(puVar21 + 0x38) = 0;
    *(undefined8 *)(puVar21 + 0x30) = 0;
    *(char ******)(puVar21 + 0x28) = pppppcVar12;
    *(undefined4 *)(puVar21 + 0x20) = 0;
    uVar24 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
    *(undefined8 *)(puVar21 + -8) = 0x18031cbd4;
    FUN_18040a2f0(puVar21 + 0x68,uVar24,DAT_1808ac930,DAT_1808acd08);
    *(undefined8 *)(puVar21 + -8) = 0x18031cbe7;
    fVar26 = (float)FUN_18053fc00(*(float *)(puVar21 + 0x68) + DAT_1808ac2f0);
    *(float *)(puVar21 + 0x78) = fVar26;
    *(undefined8 *)(puVar21 + -8) = 0x18031cbfd;
    fVar27 = (float)FUN_18053fc00();
    fVar26 = ((((((fVar34 - fVar30) - fVar29) - fVar30) - fVar26) - fVar27) - fVar27) -
             DAT_1808acaa8;
    fVar30 = DAT_1808ac950;
    if (DAT_1808ac950 <= fVar26) {
      fVar30 = fVar26;
    }
    uVar10 = *(undefined4 *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
    *(undefined8 *)(puVar21 + -8) = 0x18031cc51;
    uVar20 = FUN_1803d7830("##chat_message",0,uVar10);
    uVar24 = extraout_XMM0_Qa;
    if (*(uint *)(*plVar2 + 0x155c) == uVar20) {
      *(undefined8 *)(puVar21 + -8) = 0x18031cc71;
      uVar24 = FUN_1803f5630(uVar20,0xb,"##chat_message");
    }
    if (*(uint *)(DAT_180ca0a50 + 0x1578) == uVar20) {
      fVar26 = fVar28;
    }
    else if (*(uint *)(DAT_180ca0a50 + 0x1564) == uVar20) {
      fVar26 = DAT_1808ac1f4;
    }
    else {
      fVar26 = 0.0;
    }
    pcVar23 = "input";
    bVar8 = 0x69;
    uVar22 = ~uVar20;
    do {
      pcVar23 = pcVar23 + 1;
      if (((bVar8 == 0x23) && (*pcVar23 == 0x23)) && (pcVar23[1] == 0x23)) {
        pcVar23 = pcVar23 + 2;
        uVar22 = ~uVar20;
      }
      else {
        uVar22 = uVar22 >> 8 ^
                 *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar22 & 0xff) ^ (ulonglong)bVar8) * 4);
      }
      bVar8 = *pcVar23;
    } while (bVar8 != 0);
    *(uint *)(puVar21 + 0x70) = ~uVar22;
    local_180 = CONCAT44(fVar26,fVar26);
    uStack_178 = (ulonglong)(uint)fVar26;
    local_170 = CONCAT44(local_170._4_4_,0xffffffff);
    *(undefined8 *)(puVar21 + -8) = 0x18031cd1d;
    FUN_18034a380(uVar24,&local_158,puVar21 + 0x70,&local_180);
    *(undefined8 *)(puVar21 + -8) = 0x18031cd38;
    uVar24 = FUN_1802b3660(local_158 + 0x14,fVar26,DAT_1808ac118,0);
    *(undefined8 *)(puVar21 + -8) = 0x18031cd4c;
    uVar20 = FUN_1802b38e0(DAT_180960ef0,DAT_180960ef4,uVar24);
    uVar18 = DAT_180ca0a50;
    uVar16 = (ulonglong)uVar20;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar14 = *(longlong *)(uVar18 + 0x14f8);
    *(float *)(lVar14 + 0x118) = fVar29;
    *(float *)(lVar14 + 0x11c) = fVar32;
    *(undefined1 *)(lVar14 + 0x159) = 1;
    *(undefined4 *)(puVar21 + 0x60) = 0x41400000;
    *(undefined4 *)(puVar21 + 100) = 0x40c00000;
    *(undefined8 *)(puVar21 + -8) = 0x18031cda2;
    FUN_1803d89a0(0xb,puVar21 + 0x60);
    *(undefined8 *)(puVar21 + -8) = 0x18031cdb4;
    FUN_1803d8870(0xc,DAT_1808ac7ac);
    *(undefined8 *)(puVar21 + -8) = 0x18031cdc2;
    FUN_1803d8870(0xd,fVar28);
    *(undefined8 *)(puVar21 + -8) = 0x18031cdce;
    FUN_1803d8730(7,uVar16);
    *(undefined8 *)(puVar21 + -8) = 0x18031cdda;
    FUN_1803d8730(8,uVar20);
    *(undefined8 *)(puVar21 + -8) = 0x18031cde6;
    FUN_1803d8730(9,uVar16);
    *(undefined8 *)(puVar21 + -8) = 0x18031cdf6;
    FUN_1803d8730(5,DAT_180960eec);
    *(undefined8 *)(puVar21 + -8) = 0x18031ce03;
    FUN_1803d8730(0,DAT_180960ef8);
    *(undefined8 *)(puVar21 + -8) = 0x18031ce13;
    FUN_1803d8730(1,DAT_180960ec4);
    uVar18 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1eb0) = *(uint *)(DAT_180ca0a50 + 0x1eb0) | 1;
    *(float *)(uVar18 + 0x1ec8) = fVar30;
    uStack_178 = 0;
    local_170 = 7;
    local_168 = 0xf;
    local_180 = (ulonglong)
                CONCAT16(s_Message_180767490[6],
                         CONCAT24(s_Message_180767490._4_2_,s_Message_180767490._0_4_));
    *(undefined8 *)(puVar21 + -8) = 0x18031ce70;
    puVar13 = (undefined8 *)FUN_18035eb30(local_118,&local_180);
    if (0xf < (ulonglong)puVar13[3]) {
      puVar13 = (undefined8 *)*puVar13;
    }
    *(undefined8 *)(puVar21 + 0x60) = 0;
    *(undefined8 *)(puVar21 + 0x38) = 0;
    *(undefined8 *)(puVar21 + 0x30) = 0;
    *(undefined4 *)(puVar21 + 0x28) = 0;
    *(undefined1 **)(puVar21 + 0x20) = puVar21 + 0x60;
    *(undefined8 *)(puVar21 + -8) = 0x18031ceb9;
    FUN_18041c570("##chat_message",puVar13,&DAT_181106f30,0x80);
    *(undefined8 *)(puVar21 + -8) = 0x18031cec3;
    FUN_18000f890(local_118);
    if (0xf < local_168) {
      uVar19 = local_168 + 1;
      uVar18 = local_180;
      if (0xfff < uVar19) {
        uVar18 = *(ulonglong *)(local_180 - 8);
        if (0x1f < (local_180 - uVar18) - 8) goto LAB_18031d4c8;
        uVar19 = local_168 + 0x28;
      }
      *(undefined8 *)(puVar21 + -8) = 0x18031ceff;
      thunk_FUN_1803d64e0(uVar18,uVar19);
    }
    *(undefined8 *)(puVar21 + -8) = 0x18031cf09;
    FUN_1803d87f0(6);
    *(undefined8 *)(puVar21 + -8) = 0x18031cf13;
    FUN_1803d8a40(3);
    fVar34 = DAT_1808ac980;
    fVar26 = DAT_1808ac750;
    fVar30 = fVar29 + fVar30 + DAT_1808ac750;
    *(float *)(puVar21 + 0x70) = fVar30;
    *(float *)(puVar21 + 0x60) = fVar30;
    *(float *)(puVar21 + 100) = fVar32;
    fVar33 = fVar27 + DAT_1808ac980;
    *(float *)(puVar21 + 0x68) = fVar33;
    *(undefined4 *)(puVar21 + 0x6c) = 0x41eda5e3;
    *(undefined8 *)(puVar21 + -8) = 0x18031cf76;
    lVar14 = FUN_18031b430(&local_158,"##friend_code",puVar21 + 0x60,puVar21 + 0x68);
    fVar30 = *(float *)(lVar14 + 4);
    uVar10 = *(undefined4 *)(lVar14 + 8);
    *(undefined8 *)(puVar21 + 0x68) = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
    local_158 = *(char **)(DAT_180ca0a50 + 0x1ef4);
    *(undefined8 *)(puVar21 + -8) = 0x18031cfa9;
    uVar9 = FUN_1803dd930(0);
    *(undefined4 *)(puVar21 + 0x28) = 0;
    *(undefined1 **)(puVar21 + 0x20) = puVar21 + 0x68;
    *(undefined8 *)(puVar21 + -8) = 0x18031cfce;
    FUN_1802b56a0("Send Friend Code",0,uVar9,&local_158);
    fVar31 = fVar32 + DAT_1808ac9dc;
    *(float *)(puVar21 + 0x70) = fVar33 + *(float *)(puVar21 + 0x70);
    *(float *)(puVar21 + 0x74) = fVar31;
    *(undefined4 *)(puVar21 + 0x28) = 0;
    *(float *)(puVar21 + 0x20) = DAT_1808ac7ac;
    *(undefined8 *)(puVar21 + -8) = 0x18031d01e;
    FUN_1803fe590(lVar3,puVar21 + 0x60,puVar21 + 0x70,DAT_180960f60);
    local_158 = _DAT_1808adcf0;
    uStack_150 = _UNK_1808adcf8;
    *(undefined8 *)(puVar21 + -8) = 0x18031d04a;
    uVar11 = FUN_1802b38e0(DAT_180960eec,DAT_1809f54bc & 0xffffff | 0x66000000,uVar10);
    *(float *)(puVar21 + 0x30) = fVar28;
    *(undefined4 *)(puVar21 + 0x28) = 0;
    *(char ***)(puVar21 + 0x20) = &local_158;
    *(undefined8 *)(puVar21 + -8) = 0x18031d076;
    FUN_18036bcb0(lVar3,puVar21 + 0x60,puVar21 + 0x70,uVar11);
    if (0.0 < fVar30) {
      *(undefined4 *)(puVar21 + 0x28) = 0;
      *(float *)(puVar21 + 0x20) = DAT_1808ac7ac;
      *(undefined8 *)(puVar21 + -8) = 0x18031d0da;
      FUN_1803fe590(lVar3,puVar21 + 0x60,puVar21 + 0x70,
                    (int)(longlong)
                         ((float)(DAT_180960f44 >> 0x18) * fVar30 * DAT_1808ac118 + DAT_1808ac1f4)
                    << 0x18 | DAT_180960f44 & 0xffffff);
    }
    fVar30 = *(float *)(puVar21 + 0x60);
    *(float *)(puVar21 + 0x68) = fVar33 * DAT_1808ac1f4 + fVar30;
    *(float *)(puVar21 + 0x6c) = *(float *)(puVar21 + 100) + _DAT_1808ac8f8;
    *(undefined8 *)(puVar21 + -8) = 0x18031d11e;
    uVar10 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,uVar10);
    *(undefined4 *)(puVar21 + 0x30) = uVar10;
    *(undefined4 *)(puVar21 + 0x28) = DAT_1808ac8d4;
    *(undefined1 **)(puVar21 + 0x20) = puVar21 + 0x68;
    *(undefined8 *)(puVar21 + -8) = 0x18031d158;
    FUN_1802b6e90(lVar3,"nl_glyph_share",
                  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M307 35C295 40 288 52 288 64L288 128L176 128C78 128 0 207 0 304C0 418 81 467 100 478C102 479 105 480 108 480C119 480 128 471 128 460C128 452 123 446 118 441C108 432 96 415 96 384C96 331 139 288 192 288L288 288L288 352C288 365 295 377 307 382C318 387 332 385 341 376L501 232C508 226 512 218 512 209C512 199 508 191 501 185L341 41C332 32 318 30 307 35L307 35ZM307 35Z\"/></svg>"
                  ,DAT_1808acc00);
    fVar26 = fVar33 + fVar30 + fVar26;
    *(float *)(puVar21 + 0x60) = fVar26;
    *(float *)(puVar21 + 100) = fVar32;
    fVar34 = fVar27 + DAT_1808ac8b0 + *(float *)(puVar21 + 0x78) + fVar34;
    *(float *)(puVar21 + 0x68) = fVar34;
    *(undefined4 *)(puVar21 + 0x6c) = 0x41eda5e3;
    *(undefined8 *)(puVar21 + -8) = 0x18031d1b4;
    pcVar23 = (char *)FUN_18031b430(&local_158,"##send",puVar21 + 0x60,puVar21 + 0x68);
    cVar7 = *pcVar23;
    uVar10 = *(undefined4 *)(pcVar23 + 8);
    *(float *)(puVar21 + 0x68) = fVar34 + fVar26;
    *(float *)(puVar21 + 0x6c) = fVar31;
    *(undefined8 *)(puVar21 + -8) = 0x18031d1e7;
    uVar11 = FUN_1802b38e0(DAT_180960f30,DAT_180960f34,uVar10);
    *(undefined4 *)(puVar21 + 0x28) = 0;
    *(float *)(puVar21 + 0x20) = DAT_1808ac7ac;
    *(undefined8 *)(puVar21 + -8) = 0x18031d211;
    FUN_1803fe590(lVar3,puVar21 + 0x60,puVar21 + 0x68,uVar11);
    *(undefined8 *)(puVar21 + -8) = 0x18031d225;
    uVar20 = FUN_1802b38e0(DAT_180960f6c,DAT_180960f70,uVar10);
    fVar30 = DAT_1808ac1f4;
    *(undefined8 *)(puVar21 + -8) = 0x18031d247;
    fVar34 = (float)FUN_18053fc00();
    *(undefined8 *)(puVar21 + -8) = 0x18031d258;
    fVar27 = (float)FUN_18053fc00();
    fVar26 = DAT_1808ac8e4;
    if (DAT_180cd0fd8 != '\0') {
      fVar28 = DAT_1809f7440;
    }
    fVar33 = fVar28 * DAT_1808ac3d4;
    if (fVar28 * DAT_1808ac3d4 <= DAT_1808ac540) {
      fVar33 = DAT_1808ac540;
    }
    fVar33 = fVar33 * DAT_1808ac8e4;
    local_158 = (char *)0x0;
    uStack_150 = 0;
    *(undefined8 *)(puVar21 + -8) = 0x18031d2a9;
    local_158 = (char *)FUN_18000fb70(0x20);
    local_148 = 0x1c;
    local_140 = 0x1f;
    uVar24 = CONCAT44(s_nl_glyph_paper_plane_awesome_180767530._12_4_,
                      s_nl_glyph_paper_plane_awesome_180767530._8_4_);
    *(undefined8 *)local_158 = s_nl_glyph_paper_plane_awesome_180767530._0_8_;
    *(undefined8 *)(local_158 + 8) = uVar24;
    uVar6 = s_nl_glyph_paper_plane_awesome_180767530._24_4_;
    uVar11 = s_nl_glyph_paper_plane_awesome_180767530._20_4_;
    uVar10 = s_nl_glyph_paper_plane_awesome_180767530._16_4_;
    *(undefined4 *)(local_158 + 0xc) = s_nl_glyph_paper_plane_awesome_180767530._12_4_;
    *(undefined4 *)(local_158 + 0x10) = uVar10;
    *(undefined4 *)(local_158 + 0x14) = uVar11;
    *(undefined4 *)(local_158 + 0x18) = uVar6;
    local_158[0x1c] = '\0';
    *(undefined8 *)(puVar21 + -8) = 0x18031d2ed;
    puVar15 = (ulonglong *)
              FUN_18039ed80(&local_180,&local_158,
                            "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M498 6C508 13 513 25 511 37L447 452C446 462 440 471 431 475C423 480 412 481 403 477L284 428L215 501C206 511 192 514 180 509C168 505 160 493 160 480L160 397C160 393 161 389 164 386L331 203C337 197 337 187 331 181C325 175 315 175 309 181L106 361L17 317C7 312 0 301 0 289C0 278 5 267 16 261L464 5C474 -1 487 -1 498 6L498 6ZM498 6Z\"/></svg>"
                            ,(int)(fVar33 + fVar30));
    uVar16 = *puVar15;
    uVar18 = puVar15[1];
    iVar1 = *(int *)((longlong)puVar15 + 0xc);
    if (0xf < local_140) {
      uVar19 = local_140 + 1;
      pcVar23 = local_158;
      if (0xfff < uVar19) {
        pcVar23 = *(char **)(local_158 + -8);
        if ((char *)0x1f < local_158 + (-8 - (longlong)pcVar23)) goto LAB_18031d4c8;
        uVar19 = local_140 + 0x28;
      }
      *(undefined8 *)(puVar21 + -8) = 0x18031d333;
      thunk_FUN_1803d64e0(pcVar23,uVar19);
    }
    fVar28 = DAT_1808ac8b8;
    if (((uVar16 != 0) && (0 < (int)uVar18)) && (0 < iVar1)) {
      *(undefined8 *)(puVar21 + -8) = 0x18031d35e;
      fVar30 = (float)FUN_18053ef70();
      fVar28 = (fVar30 + fVar27) - fVar28;
      *(float *)(puVar21 + 0x70) = fVar34;
      *(float *)(puVar21 + 0x74) = fVar28;
      *(undefined4 *)(puVar21 + 0x68) = 0x3f800000;
      *(undefined4 *)(puVar21 + 0x6c) = 0x3f800000;
      *(undefined8 *)(puVar21 + 0x60) = 0;
      *(float *)(puVar21 + 0x78) = fVar34 + fVar26;
      *(float *)(puVar21 + 0x7c) = fVar28 + fVar26;
      local_158 = (char *)0x0;
      *(uint *)(puVar21 + 0x30) = uVar20;
      *(undefined1 **)(puVar21 + 0x28) = puVar21 + 0x68;
      *(undefined1 **)(puVar21 + 0x20) = puVar21 + 0x60;
      *(undefined8 *)(puVar21 + -8) = 0x18031d3df;
      uStack_150 = uVar16;
      FUN_1803fea90(lVar3,&local_158,puVar21 + 0x70,puVar21 + 0x78);
    }
    pppppcVar12 = (char *****)local_138;
    if (0xf < local_120) {
      pppppcVar12 = local_138[0];
    }
    *(undefined8 *)(puVar21 + -8) = 0x18031d402;
    uVar10 = FUN_18053fc00();
    *(undefined4 *)(puVar21 + 0x68) = uVar10;
    *(float *)(puVar21 + 0x6c) = fVar27;
    if ((((uVar20 & 0xff000000) != 0) && (pppppcVar12 != (char *****)0x0)) &&
       (*(char *)pppppcVar12 != '\0')) {
      local_158 = *(char **)(lVar3 + 0x60);
      uStack_150 = *(ulonglong *)(lVar3 + 0x68);
      lVar14 = *(longlong *)(lVar3 + 0x38);
      *(undefined4 *)(puVar21 + 0x48) = 0;
      *(undefined4 *)(puVar21 + 0x40) = 0;
      *(undefined8 *)(puVar21 + 0x38) = 0;
      *(char ******)(puVar21 + 0x30) = pppppcVar12;
      *(char ***)(puVar21 + 0x28) = &local_158;
      *(uint *)(puVar21 + 0x20) = uVar20;
      uVar24 = *(undefined8 *)(lVar14 + 0x18);
      *(undefined8 *)(puVar21 + -8) = 0x18031d470;
      FUN_18040a900(uVar24,lVar3,DAT_1808ac930,puVar21 + 0x68);
    }
    if (cVar7 == '\0') {
      *(undefined8 *)(puVar21 + -8) = 0x18031d487;
      cVar7 = FUN_1803e9470(0x20d,1,0);
      if (cVar7 != '\0') goto LAB_18031d4a1;
      *(undefined8 *)(puVar21 + -8) = 0x18031d49d;
      cVar7 = FUN_1803e9470(0x273,1,0);
      if (cVar7 != '\0') goto LAB_18031d4a1;
    }
    else {
LAB_18031d4a1:
      DAT_181106f30 = 0;
    }
    lVar14 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
    uVar16 = DAT_180ca0a50;
    if (0 < *(int *)(DAT_180ca0a50 + 0x1fe0)) goto LAB_18031d4cf;
    *(undefined8 *)(puVar21 + -8) = 0x18031d4c6;
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    uVar19 = local_168 + 1;
    uVar18 = local_180;
    if (uVar19 < 0x1000) {
LAB_18031cb6f:
      *(undefined8 *)(puVar21 + -8) = 0x18031cb74;
      thunk_FUN_1803d64e0(uVar18,uVar19);
      goto LAB_18031cb74;
    }
    uVar18 = *(ulonglong *)(local_180 - 8);
    if ((local_180 - uVar18) - 8 < 0x20) {
      uVar19 = local_168 + 0x28;
      goto LAB_18031cb6f;
    }
LAB_18031d4c8:
    pcVar5 = (code *)swi(0x29);
    lVar14 = (*pcVar5)(5);
    puVar21 = puVar21 + 8;
LAB_18031d4cf:
    lVar14 = lVar14 + -1;
    lVar4 = *(longlong *)(uVar16 + 0x1fe8);
    uVar10 = *(undefined4 *)(lVar4 + 0xc + lVar14 * 0x10);
    uVar11 = *(undefined4 *)(lVar4 + 8 + lVar14 * 0x10);
    uVar24 = *(undefined8 *)(lVar4 + lVar14 * 0x10);
    *(undefined8 *)(puVar21 + -8) = 0x18031d4f1;
    FUN_1803e8680(uVar24,uVar11,uVar10);
    *(int *)(uVar16 + 0x1fe0) = *(int *)(uVar16 + 0x1fe0) + -1;
  }
  *(undefined8 *)(puVar21 + -8) = 0x18031d4fc;
  FUN_1803e75b0();
  uVar10 = *(undefined4 *)(lVar3 + 0x20);
  *(undefined8 *)(puVar21 + -8) = 0x18031d50f;
  FUN_1802b3c30(lVar3,0,uVar10,local_188);
  if (lVar25 != 0) {
    lVar25 = *(longlong *)(lVar25 + 0x2c8);
    uVar10 = *(undefined4 *)(lVar25 + 0x20);
    *(undefined8 *)(puVar21 + -8) = 0x18031d526;
    FUN_1802b3c30(lVar25,0,uVar10);
  }
  *(undefined8 *)(puVar21 + -8) = 0x18031d530;
  FUN_18000f890(local_138);
  *(undefined8 *)(puVar21 + -8) = 0x18031d536;
  FUN_180364ab0();
LAB_18031d537:
  *(undefined8 *)(puVar21 + -8) = 0x18031d543;
  return;
}



/* ===== 18031d5a0 FUN_18031d5a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18031d5a0(float *param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  uint uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  char *******pppppppcVar11;
  undefined8 uVar12;
  float *pfVar13;
  longlong lVar14;
  char ***pppcVar15;
  float *pfVar16;
  char *pcVar17;
  int iVar18;
  undefined *puVar19;
  longlong lVar20;
  int iVar21;
  char *pcVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined1 auStack_278 [32];
  float *local_258;
  char *******local_250;
  char *******local_248;
  undefined8 local_240;
  ulonglong local_238;
  undefined4 local_230;
  undefined4 local_228;
  char local_218 [8];
  undefined8 local_210;
  char *****local_208 [2];
  undefined8 local_1f8;
  char ****ppppcStack_1f0;
  float local_1d8;
  float local_1d4;
  undefined4 local_1d0 [2];
  undefined8 local_1c8;
  undefined4 **local_1c0;
  undefined4 local_1b8;
  undefined4 *local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined8 *local_190;
  undefined4 local_188;
  undefined4 *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168;
  char *******local_160;
  longlong lStack_158;
  longlong local_150;
  ulonglong uStack_148;
  char *******local_140 [3];
  ulonglong local_128;
  char *******local_120 [3];
  ulonglong local_108;
  undefined1 local_100 [32];
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0 [4];
  ulonglong local_c0;
  
  local_c0 = DAT_180919500 ^ (ulonglong)auStack_278;
  uVar8 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##avacontext");
  lVar9 = FUN_1802b4e80(uVar8);
  fVar4 = DAT_1808ac7ac;
  if ((lVar9 == 0) || (*(char *)(lVar9 + 0xcd) == '\0')) {
    lVar9 = DAT_180ca0a50;
  }
  else {
    lVar9 = FUN_1802b4e80(uVar8);
    if (lVar9 == 0) {
      fVar28 = 0.0;
    }
    else {
      FUN_1803e2890(&local_1f8,lVar9);
      fVar28 = local_1f8._4_4_;
    }
    lVar9 = DAT_180ca0a50;
    fVar24 = fVar28 * DAT_1808ac1f4;
    fVar25 = param_1[1];
    fVar32 = *param_1 - DAT_1808ac750;
    fVar31 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
    fVar30 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14);
    if (fVar31 <= fVar4) {
      fVar26 = 0.0;
    }
    else {
      fVar26 = DAT_1808ac658;
    }
    fVar34 = DAT_1808ac658;
    if (fVar30 <= fVar4) {
      fVar34 = 0.0;
    }
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    fVar32 = fVar32 + DAT_1808acb7c;
    fVar31 = fVar31 - fVar26;
    if (fVar32 <= fVar31) {
      fVar31 = fVar32;
    }
    fVar32 = fVar31 - DAT_1808acb7c;
    if (fVar31 - DAT_1808acb7c <= fVar26) {
      fVar32 = fVar26;
    }
    *(float *)(lVar9 + 0x1f48) = fVar32;
    fVar25 = fVar28 + (fVar25 - fVar24);
    fVar30 = fVar30 - fVar34;
    if (fVar25 <= fVar30) {
      fVar30 = fVar25;
    }
    fVar25 = fVar30 - fVar28;
    if (fVar30 - fVar28 <= fVar34) {
      fVar25 = fVar34;
    }
    *(float *)(lVar9 + 0x1f4c) = fVar25;
    *(undefined8 *)(lVar9 + 0x1f50) = 0;
    *(undefined4 *)(lVar9 + 0x1f3c) = 1;
  }
  *(uint *)(lVar9 + 0x1f38) = *(uint *)(lVar9 + 0x1f38) | 2;
  *(undefined8 *)(lVar9 + 0x1f58) = 0x43660000;
  *(undefined4 *)(lVar9 + 8000) = 1;
  DAT_180cd04ad = 1;
  DAT_180cd04ab = 1;
  local_210 = (undefined1 *)0x40e0000040e00000;
  cVar6 = FUN_1802b5260("##avacontext",&local_210);
  lVar9 = DAT_180ca0a50;
  if (cVar6 != '\0') {
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    local_208[0] = *(char ******)(*(longlong *)(lVar9 + 0x14f8) + 0x2c8);
    lVar3 = *(longlong *)(lVar9 + 0x14f8);
    fVar28 = *(float *)(lVar3 + 0x118);
    fVar25 = *(float *)(lVar3 + 0x11c);
    lVar20 = 0x280;
    if ((*(longlong *)(lVar3 + 0x1c8) != 0) || (lVar14 = 0x280, *(longlong *)(lVar9 + 0x2360) != 0))
    {
      lVar14 = 0x250;
    }
    fVar31 = *(float *)(lVar3 + lVar14);
    fVar32 = fVar25 + DAT_1808ac7ec;
    fVar24 = fVar28 + DAT_1808ac8b0;
    local_e0 = CONCAT44(fVar32,fVar24);
    plVar10 = (longlong *)FUN_18030bc10(&local_1f8);
    fVar30 = DAT_1808aca54;
    if ((((char ****)*plVar10 != (char ****)0x0) && (0 < (int)plVar10[1])) &&
       (0 < *(int *)((longlong)plVar10 + 0xc))) {
      local_210 = &DAT_3f8000003f800000;
      local_d0[0] = 0.0;
      local_d0[1] = 0.0;
      local_1d8 = fVar24 + DAT_1808aca54;
      local_1d4 = fVar32 + DAT_1808aca54;
      local_1f8 = (char ******)0x0;
      local_240 = CONCAT44(local_240._4_4_,DAT_1808ac950);
      local_248 = (char *******)CONCAT44(local_248._4_4_,0xffffffff);
      local_250 = (char *******)&local_210;
      local_258 = local_d0;
      ppppcStack_1f0 = (char ****)*plVar10;
      FUN_1803febc0(local_208[0],&local_1f8,&local_e0,&local_1d8);
    }
    fVar24 = fVar24 + fVar30 + DAT_1808ac864;
    pppppppcVar11 = (char *******)FUN_1801c8250();
    fVar30 = DAT_1808ac930;
    local_e0 = CONCAT44(fVar32,fVar24);
    pppcVar15 = DAT_181107a08;
    if (DAT_181107a08 == (char ***)0x0) {
      pppcVar15 = *(char ****)(DAT_180ca0a50 + 0x11f0);
    }
    if ((((DAT_180960ec8 & 0xff000000) != 0) && (pppppppcVar11 != (char *******)0x0)) &&
       (*(char *)pppppppcVar11 != '\0')) {
      if (pppcVar15 == (char ***)0x0) {
        pppcVar15 = local_208[0][7][3];
      }
      local_1f8 = (char ******)local_208[0][0xc];
      ppppcStack_1f0 = local_208[0][0xd];
      local_230 = 0;
      local_238 = local_238 & 0xffffffff00000000;
      local_240 = 0;
      local_250 = (char *******)&local_1f8;
      local_258 = (float *)CONCAT44(local_258._4_4_,DAT_180960ec8);
      local_248 = pppppppcVar11;
      FUN_18040a900(pppcVar15,local_208[0],DAT_1808ac930,&local_e0);
    }
    uVar12 = FUN_1802b3fe0(local_100,&DAT_1807675b0);
    plVar10 = (longlong *)FUN_1800134a0(uVar12,&DAT_18073ec98,1);
    local_160 = (char *******)*plVar10;
    lStack_158 = plVar10[1];
    local_150 = plVar10[2];
    uStack_148 = plVar10[3];
    *(undefined1 *)plVar10 = 0;
    plVar10[2] = 0;
    plVar10[3] = 0xf;
    FUN_18000f890(local_100);
    pppppppcVar11 = (char *******)&local_160;
    if (0xf < uStack_148) {
      pppppppcVar11 = local_160;
    }
    local_e0 = CONCAT44(fVar32 + fVar30,fVar24);
    pppcVar15 = DAT_181107a08;
    if (DAT_181107a08 == (char ***)0x0) {
      pppcVar15 = *(char ****)(DAT_180ca0a50 + 0x11f0);
    }
    if ((((DAT_180960ec0 & 0xff000000) != 0) && (pppppppcVar11 != (char *******)0x0)) &&
       (*(char *)pppppppcVar11 != '\0')) {
      if (pppcVar15 == (char ***)0x0) {
        pppcVar15 = local_208[0][7][3];
      }
      local_1f8 = (char ******)local_208[0][0xc];
      ppppcStack_1f0 = local_208[0][0xd];
      local_230 = 0;
      local_238 = local_238 & 0xffffffff00000000;
      local_240 = 0;
      local_250 = (char *******)&local_1f8;
      local_258 = (float *)CONCAT44(local_258._4_4_,DAT_180960ec0);
      local_248 = pppppppcVar11;
      FUN_18040a900(pppcVar15,local_208[0],fVar30,&local_e0);
    }
    FUN_1802b3fe0(local_120,"lifetime");
    uVar23 = DAT_180960ec0;
    pppppppcVar11 = (char *******)local_120;
    if (0xf < local_108) {
      pppppppcVar11 = local_120[0];
    }
    local_250 = (char *******)&local_160;
    if (0xf < uStack_148) {
      local_250 = local_160;
    }
    local_228 = 0;
    local_238 = 0;
    local_240 = 0;
    local_248 = (char *******)0x0;
    local_258 = (float *)((ulonglong)local_258 & 0xffffffff00000000);
    FUN_18040a2f0(&local_1f8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),fVar30,DAT_1808acd08);
    local_e0 = CONCAT44(fVar32 + fVar30,(float)local_1f8 + fVar24 + DAT_1808ac710);
    pppcVar15 = DAT_181107a08;
    if (DAT_181107a08 == (char ***)0x0) {
      pppcVar15 = *(char ****)(DAT_180ca0a50 + 0x11f0);
    }
    if ((((uVar23 & 0xff000000) != 0) && (pppppppcVar11 != (char *******)0x0)) &&
       (*(char *)pppppppcVar11 != '\0')) {
      if (pppcVar15 == (char ***)0x0) {
        pppcVar15 = local_208[0][7][3];
      }
      local_1f8 = (char ******)local_208[0][0xc];
      ppppcStack_1f0 = local_208[0][0xd];
      local_230 = 0;
      local_238 = local_238 & 0xffffffff00000000;
      local_240 = 0;
      local_250 = (char *******)&local_1f8;
      local_258 = (float *)CONCAT44(local_258._4_4_,uVar23);
      local_248 = pppppppcVar11;
      FUN_18040a900(pppcVar15,local_208[0],fVar30,&local_e0);
    }
    FUN_1802b3fe0(local_140,"renew");
    local_250 = (char *******)local_140;
    if (0xf < local_128) {
      local_250 = local_140[0];
    }
    local_228 = 0;
    local_238 = 0;
    local_240 = 0;
    local_248 = (char *******)0x0;
    local_258 = (float *)((ulonglong)local_258 & 0xffffffff00000000);
    FUN_18040a2f0(&local_1f8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),fVar30,DAT_1808acd08);
    fVar32 = fVar32 + _DAT_1808aca2c;
    local_210 = (undefined1 *)CONCAT44(fVar32,fVar24 - fVar4);
    local_e0 = CONCAT44(0x418da5e3,(float)local_1f8 + DAT_1808ac8b0);
    fVar26 = (float)FUN_180311a40("##renew",&local_210,&local_e0,local_218);
    fVar4 = DAT_1808ac1f4;
    pppppppcVar11 = (char *******)local_140;
    if (0xf < local_128) {
      pppppppcVar11 = local_140[0];
    }
    uVar23 = (int)(longlong)
                  (fVar26 * DAT_1808ac294 * (float)(DAT_1809f54bc >> 0x18) + DAT_1808ac1f4) << 0x18;
    local_e0 = CONCAT44(fVar32,fVar24);
    pppcVar15 = DAT_181107a08;
    if (DAT_181107a08 == (char ***)0x0) {
      pppcVar15 = *(char ****)(DAT_180ca0a50 + 0x11f0);
    }
    if (((uVar23 != 0) && (pppppppcVar11 != (char *******)0x0)) && (*(char *)pppppppcVar11 != '\0'))
    {
      if (pppcVar15 == (char ***)0x0) {
        pppcVar15 = local_208[0][7][3];
      }
      local_1f8 = (char ******)local_208[0][0xc];
      ppppcStack_1f0 = local_208[0][0xd];
      local_230 = 0;
      local_238 = local_238 & 0xffffffff00000000;
      local_240 = 0;
      local_250 = (char *******)&local_1f8;
      local_258 = (float *)CONCAT44(local_258._4_4_,uVar23 | DAT_1809f54bc & 0xffffff);
      local_248 = pppppppcVar11;
      FUN_18040a900(pppcVar15,local_208[0],fVar30,&local_e0);
    }
    lVar9 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar9 = *(longlong *)(lVar9 + 0x14f8);
    *(float *)(lVar9 + 0x118) = fVar28;
    *(float *)(lVar9 + 0x11c) = fVar25;
    *(undefined1 *)(lVar9 + 0x159) = 1;
    local_e0 = CONCAT44(0x42863c6a,fVar31 - fVar28);
    FUN_1804174f0(&local_e0);
    FUN_1802b7f90();
    iVar18 = DAT_18091a1a8;
    local_1f8 = local_208;
    FUN_180310d20(local_208[0]);
    DAT_18110749c = 0x44100000;
    if (iVar18 == 0x4b) {
      puVar19 = PTR_DAT_180658578;
    }
    else if (iVar18 == 100) {
      puVar19 = PTR_DAT_180658580;
    }
    else if (iVar18 == 0x7d) {
      puVar19 = PTR_DAT_180658588;
    }
    else if (iVar18 == 0x96) {
      puVar19 = PTR_DAT_180658590;
    }
    else if (iVar18 == 0xaf) {
      puVar19 = PTR_DAT_180658598;
    }
    else {
      puVar19 = PTR_DAT_1806585a0;
      if (iVar18 != 200) {
        puVar19 = PTR_DAT_180658570;
      }
    }
    FUN_1803e89e0("nl_glyph_menu_scale");
    local_258 = (float *)CONCAT71(local_258._1_7_,1);
    cVar6 = FUN_1803104f0("nl_glyph_menu_scale",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M160 32C169 32 177 36 183 43L271 139C283 152 282 172 269 184C256 196 236 195 224 182L192 147L192 448C192 465 177 480 160 480C142 480 128 465 128 448L128 147L95 182C83 195 63 196 50 184C37 172 36 152 48 139L136 43C142 36 150 32 159 32L160 32ZM320 368C320 342 341 320 368 320L432 320C458 320 480 342 480 368L480 432C480 458 458 480 432 480L368 480C341 480 320 458 320 432L320 368ZM368 32L496 32C522 32 544 54 544 80L544 208C544 235 522 256 496 256L368 256C341 256 320 235 320 208L320 80C320 54 341 32 368 32Z\"/></svg>"
                          ,"menu scale",puVar19);
    if (cVar6 != '\0') {
      FUN_1802b4d80("##value_list");
    }
    lVar9 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
    *(undefined8 *)(lVar9 + 0x1f84) = 0x430c0000;
    *(undefined4 *)(lVar9 + 0x1f8c) = 0x7f7fffff;
    *(undefined4 *)(lVar9 + 0x1f90) = 0x43b18000;
    *(undefined8 *)(lVar9 + 0x1f98) = 0;
    *(undefined8 *)(lVar9 + 0x1fa0) = 0;
    local_e0 = *(undefined8 *)(lVar9 + 0x1efc);
    local_210 = *(undefined1 **)(lVar9 + 0x1ef4);
    FUN_1802b5160("##value_list",&local_210,&local_e0);
    DAT_180cd04ac = 1;
    DAT_180cd04ad = 1;
    local_e0 = 0x40c0000040c00000;
    cVar6 = FUN_1802b5260("##value_list",&local_e0);
    iVar21 = 0x4b;
    if (cVar6 != '\0') {
      cVar6 = FUN_1802b74f0(PTR_DAT_180658570,iVar18 == 0,0,0);
      if (cVar6 != '\0') {
        iVar18 = 0;
        FUN_1803ee1f0();
      }
      cVar6 = FUN_1802b74f0(PTR_DAT_180658578,iVar18 == 0x4b,0,0);
      if (cVar6 != '\0') {
        iVar18 = 0x4b;
        FUN_1803ee1f0();
      }
      cVar6 = FUN_1802b74f0(PTR_DAT_180658580,iVar18 == 100,0,0);
      if (cVar6 != '\0') {
        iVar18 = 100;
        FUN_1803ee1f0();
      }
      cVar6 = FUN_1802b74f0(PTR_DAT_180658588,iVar18 == 0x7d,0,0);
      if (cVar6 != '\0') {
        iVar18 = 0x7d;
        FUN_1803ee1f0();
      }
      cVar6 = FUN_1802b74f0(PTR_DAT_180658590,iVar18 == 0x96,0,0);
      if (cVar6 != '\0') {
        iVar18 = 0x96;
        FUN_1803ee1f0();
      }
      cVar6 = FUN_1802b74f0(PTR_DAT_180658598,iVar18 == 0xaf,0,0);
      if (cVar6 != '\0') {
        iVar18 = 0xaf;
        FUN_1803ee1f0();
      }
      cVar6 = FUN_1802b74f0(PTR_DAT_1806585a0,iVar18 == 200,0,0);
      if (cVar6 != '\0') {
        FUN_1803ee1f0();
        iVar18 = 200;
      }
      FUN_1802b5590();
    }
    iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar2 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
    }
    DAT_18110749c = 0x44200000;
    if (DAT_18091a1b4 == 100) {
      puVar19 = PTR_DAT_1806a0b18;
    }
    else if (DAT_18091a1b4 == 0x7d) {
      puVar19 = PTR_DAT_1806a0b20;
    }
    else if (DAT_18091a1b4 == 0x96) {
      puVar19 = PTR_DAT_1806a0b28;
    }
    else {
      puVar19 = PTR_DAT_1806a0b10;
      if (DAT_18091a1b4 == 0xaf) {
        puVar19 = PTR_DAT_1806a0b30;
      }
    }
    if (DAT_18091a1b4 == 200) {
      puVar19 = PTR_DAT_1806a0b38;
    }
    DAT_18091a1a8 = iVar18;
    FUN_1803e89e0("nl_glyph_esp_scale");
    local_258 = (float *)CONCAT71(local_258._1_7_,1);
    cVar6 = FUN_1803104f0("nl_glyph_esp_scale",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M64 128L64 96L160 96L160 416L128 416C110 416 96 431 96 448C96 465 110 480 128 480L256 480C273 480 288 465 288 448C288 431 273 416 256 416L224 416L224 96L320 96L320 128C320 146 334 160 352 160C369 160 384 146 384 128L384 80C384 54 362 32 336 32L192 32L48 32C21 32 0 54 0 80L0 128C0 146 14 160 32 160C49 160 64 146 64 128ZM384 304L384 288L448 288L448 416L432 416C414 416 400 431 400 448C400 465 414 480 432 480L528 480C545 480 560 465 560 448C560 431 545 416 528 416L512 416L512 288L576 288L576 304C576 322 590 336 608 336C625 336 640 322 640 304L640 272C640 246 618 224 592 224L368 224C341 224 320 246 320 272L320 304C320 322 334 336 352 336C369 336 384 322 384 304Z\"/></svg>"
                          ,"esp scale",puVar19);
    if (cVar6 != '\0') {
      FUN_1802b4d80("##value_list");
    }
    lVar9 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
    *(undefined8 *)(lVar9 + 0x1f84) = 0x430c0000;
    *(undefined4 *)(lVar9 + 0x1f8c) = 0x7f7fffff;
    *(undefined4 *)(lVar9 + 0x1f90) = 0x43b18000;
    *(undefined8 *)(lVar9 + 0x1f98) = 0;
    *(undefined8 *)(lVar9 + 0x1fa0) = 0;
    local_e0 = *(undefined8 *)(lVar9 + 0x1efc);
    local_210 = *(undefined1 **)(lVar9 + 0x1ef4);
    FUN_1802b5160("##value_list",&local_210,&local_e0);
    DAT_180cd04ac = 1;
    DAT_180cd04ad = 1;
    local_e0 = 0x40c0000040c00000;
    cVar6 = FUN_1802b5260("##value_list",&local_e0);
    if (cVar6 != '\0') {
      cVar6 = FUN_1802b74f0(PTR_DAT_1806a0b10,DAT_18091a1b4 == 0,0,0);
      if (cVar6 != '\0') {
        DAT_18091a1b4 = 0;
        FUN_1803ee1f0();
      }
      cVar6 = FUN_1802b74f0(PTR_DAT_1806a0b18,DAT_18091a1b4 == 100,0,0);
      if (cVar6 != '\0') {
        DAT_18091a1b4 = 100;
        FUN_1803ee1f0();
      }
      cVar6 = FUN_1802b74f0(PTR_DAT_1806a0b20,DAT_18091a1b4 == 0x7d,0,0);
      if (cVar6 != '\0') {
        DAT_18091a1b4 = 0x7d;
        FUN_1803ee1f0();
      }
      cVar6 = FUN_1802b74f0(PTR_DAT_1806a0b28,DAT_18091a1b4 == 0x96,0,0);
      if (cVar6 != '\0') {
        DAT_18091a1b4 = 0x96;
        FUN_1803ee1f0();
      }
      cVar6 = FUN_1802b74f0(PTR_DAT_1806a0b30,DAT_18091a1b4 == 0xaf,0,0);
      if (cVar6 != '\0') {
        DAT_18091a1b4 = 0xaf;
        FUN_1803ee1f0();
      }
      cVar6 = FUN_1802b74f0(PTR_DAT_1806a0b38,DAT_18091a1b4 == 200,0,0);
      if (cVar6 != '\0') {
        DAT_18091a1b4 = 200;
        FUN_1803ee1f0();
      }
      FUN_1802b5590();
    }
    iVar18 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar18 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar18 + -1;
    }
    DAT_18110749c = 0x44000000;
    local_d0[0] = 0.0;
    local_d0[1] = 0.0;
    local_d0[2] = 0.0;
    local_d0[3] = 0.0;
    snprintf(local_d0,0x10,&DAT_1806f0260,DAT_18091a1ac);
    FUN_1803e89e0("nl_glyph_window_scale");
    local_258 = (float *)CONCAT71(local_258._1_7_,1);
    cVar6 = FUN_1803104f0("nl_glyph_window_scale",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M432 64L208 64C199 64 192 72 192 80L192 96L128 96L128 80C128 36 163 0 208 0L432 0C476 0 512 36 512 80L512 304C512 349 476 384 432 384L416 384L416 320L432 320C440 320 448 313 448 304L448 80C448 72 440 64 432 64ZM0 192C0 157 28 128 64 128L320 128C355 128 384 157 384 192L384 448C384 483 355 512 320 512L64 512C28 512 0 483 0 448L0 192ZM64 224C64 242 78 256 96 256L288 256C305 256 320 242 320 224C320 207 305 192 288 192L96 192C78 192 64 207 64 224Z\"/></svg>"
                          ,"windows scale",local_d0);
    if (cVar6 != '\0') {
      FUN_1802b4d80("##scale_list");
    }
    lVar9 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
    *(undefined8 *)(lVar9 + 0x1f84) = 0x430c0000;
    *(undefined4 *)(lVar9 + 0x1f8c) = 0x7f7fffff;
    *(undefined4 *)(lVar9 + 0x1f90) = 0x43b18000;
    *(undefined8 *)(lVar9 + 0x1f98) = 0;
    *(undefined8 *)(lVar9 + 0x1fa0) = 0;
    local_e0 = *(undefined8 *)(lVar9 + 0x1efc);
    local_210 = *(undefined1 **)(lVar9 + 0x1ef4);
    FUN_1802b5160("##scale_list",&local_210,&local_e0);
    DAT_180cd04ac = 1;
    DAT_180cd04ad = 1;
    local_e0 = 0x40c0000040c00000;
    cVar6 = FUN_1802b5260("##scale_list",&local_e0);
    if (cVar6 != '\0') {
      do {
        local_e0 = 0;
        uStack_d8 = 0;
        snprintf(&local_e0,0x10,&DAT_1806f0260,iVar21);
        cVar6 = FUN_1802b74f0(&local_e0,DAT_18091a1ac == iVar21,0,0);
        if (cVar6 != '\0') {
          DAT_18091a1ac = iVar21;
          FUN_1803ee1f0();
        }
        iVar21 = iVar21 + 0x19;
      } while (iVar21 < 0xc9);
      FUN_1802b5590();
    }
    iVar18 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar18 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar18 + -1;
    }
    DAT_18110749c = 0x44000000;
    puVar19 = PTR_DAT_180658558;
    if (DAT_18091a1b8 == 1) {
      puVar19 = PTR_s_metric_180658560;
    }
    if (DAT_18091a1b8 == 2) {
      puVar19 = PTR_s_imperial_180658568;
    }
    FUN_1803e89e0("nl_glyph_units");
    local_258 = (float *)CONCAT71(local_258._1_7_,1);
    cVar6 = FUN_1803104f0("nl_glyph_units",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M0 32L0 448C0 483 28 512 64 512L480 512C497 512 512 497 512 480L512 477C512 468 508 460 502 454L451 404L427 428C421 434 410 434 404 428C398 422 398 411 404 405L428 381L371 324L347 348C341 354 330 354 324 348C318 342 318 331 324 325L348 301L291 244L267 268C261 274 250 274 244 268C238 262 238 251 244 245L268 221L211 164L187 188C181 194 170 194 164 188C158 182 158 171 164 165L188 141L131 84L107 108C101 114 90 114 84 108C78 102 78 91 84 85L108 61L57 10C51 4 43 0 34 0L32 0C14 0 0 15 0 32ZM128 256L256 384L128 384L128 256Z\"/></svg>"
                          ,"units",puVar19);
    if (cVar6 != '\0') {
      FUN_1802b4d80("##value_list");
    }
    lVar9 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
    *(undefined8 *)(lVar9 + 0x1f84) = 0x430c0000;
    *(undefined4 *)(lVar9 + 0x1f8c) = 0x7f7fffff;
    *(undefined4 *)(lVar9 + 0x1f90) = 0x43b18000;
    *(undefined8 *)(lVar9 + 0x1f98) = 0;
    *(undefined8 *)(lVar9 + 0x1fa0) = 0;
    local_e0 = *(undefined8 *)(lVar9 + 0x1efc);
    local_210 = *(undefined1 **)(lVar9 + 0x1ef4);
    FUN_1802b5160("##value_list",&local_210,&local_e0);
    DAT_180cd04ac = 1;
    DAT_180cd04ad = 1;
    local_e0 = 0x40c0000040c00000;
    cVar6 = FUN_1802b5260("##value_list",&local_e0);
    if (cVar6 != '\0') {
      cVar6 = FUN_1802b74f0(PTR_DAT_180658558,DAT_18091a1b8 == 0,0,0);
      if (cVar6 != '\0') {
        DAT_18091a1b8 = 0;
        FUN_1803ee1f0();
      }
      cVar6 = FUN_1802b74f0(PTR_s_metric_180658560,DAT_18091a1b8 == 1,0,0);
      if (cVar6 != '\0') {
        DAT_18091a1b8 = 1;
        FUN_1803ee1f0();
      }
      cVar6 = FUN_1802b74f0(PTR_s_imperial_180658568,DAT_18091a1b8 == 2,0,0);
      if (cVar6 != '\0') {
        DAT_18091a1b8 = 2;
        FUN_1803ee1f0();
      }
      FUN_1802b5590();
    }
    lVar9 = DAT_180ca0a50;
    iVar18 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar18 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
      lVar9 = DAT_180ca0a50;
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar18 + -1;
    }
    lVar3 = *(longlong *)(lVar9 + 0x14f8);
    fVar28 = *(float *)(lVar3 + 0x118);
    fVar25 = *(float *)(lVar3 + 0x11c);
    if ((*(longlong *)(lVar3 + 0x1c8) != 0) || (*(longlong *)(lVar9 + 0x2360) != 0)) {
      lVar20 = 0x250;
    }
    fVar31 = *(float *)(lVar20 + lVar3);
    DAT_18110749c = 0x44100000;
    DAT_181107358 = 0x4246d2f2;
    *(uint *)(lVar9 + 0x1eb4) = *(uint *)(lVar9 + 0x1eb4) | 0x4000;
    local_258 = (float *)((ulonglong)local_258 & 0xffffffffffffff00);
    cVar6 = FUN_1803104f0("nl_glyph_style",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M41 10C53 -3 74 -3 86 10L168 91L221 38C249 10 294 10 322 38L474 190C502 218 502 263 474 291L283 481C246 518 185 518 148 481L30 364C-6 327 -6 266 30 229L122 136L41 55C28 43 28 22 41 10L41 10ZM41 10ZM217 231L168 182L75 274C71 278 68 283 67 288L386 288L429 246C432 243 432 238 429 235L277 83C274 80 269 80 266 83L213 136L262 186C275 198 275 219 262 231C250 244 229 244 217 231L217 231ZM217 231ZM512 511C476 511 448 483 448 448C448 423 480 369 499 340C505 330 518 330 524 340C543 369 576 423 576 448C576 483 547 511 512 511Z\"/></svg>"
                          ,"style",0);
    uVar8 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
    uVar1 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
    fVar31 = ((fVar28 + (fVar31 - fVar28)) - DAT_1808ac8b0) - DAT_1808ac97c;
    local_d0[0] = fVar31;
    uVar27 = FUN_18053f0d0(fVar25 + DAT_1808ac710);
    local_d0[1] = (float)uVar27;
    fVar31 = fVar31 - DAT_1808ac950;
    local_210 = (undefined1 *)CONCAT44(local_210._4_4_,fVar31);
    fVar28 = (float)FUN_18053f0d0(fVar25 + _DAT_1808ac798);
    local_210 = (undefined1 *)CONCAT44(fVar28,(float)local_210);
    local_218[0] = '\0';
    local_e0 = 0x41a0000041a00000;
    fVar25 = (float)FUN_180311a40("##theme",&local_210,&local_e0,local_218);
    if (local_218[0] != '\0') {
      DAT_18091a1a4 = (uint)(DAT_18091a1a4 != 1);
    }
    uVar23 = DAT_18091a1a4;
    fVar31 = fVar31 + DAT_1808ac864;
    uVar27 = FUN_18053fc00((fVar28 + DAT_1808ac864) - DAT_1808ac840);
    uVar5 = DAT_180960f38;
    if (uVar23 == 1) {
      fVar28 = (float)FUN_18053fc00(DAT_1808ac870);
      uVar29 = FUN_18053fc00(fVar31 - fVar28 * fVar4);
      pcVar22 = 
      "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M223 32C100 32 0 133 0 256C0 380 100 480 223 480C284 480 339 455 379 417C384 412 385 405 382 398C379 392 372 389 365 390C355 392 345 392 335 392C238 392 159 314 159 216C159 151 195 93 249 63C255 60 258 53 256 46C255 39 249 34 242 33C236 33 229 33 223 33L223 32ZM223 32Z\"/></svg>"
      ;
      pcVar17 = "nl_glyph_moon";
      uVar33 = DAT_1808acbd8;
    }
    else {
      fVar28 = (float)FUN_18053fc00(DAT_1808ac8e0);
      uVar29 = FUN_18053fc00(fVar31 - fVar28 * fVar4);
      pcVar22 = 
      "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M361 2C366 4 370 8 371 14L391 121L498 141C504 142 508 146 510 151C512 156 512 162 509 166L446 256L509 347C512 351 512 357 510 362C508 367 504 371 498 372L391 391L371 498C370 504 366 508 361 510C356 512 350 512 346 509L256 447L165 509C161 512 155 512 150 510C145 508 141 504 140 498L121 391L13 372C7 371 3 367 1 362C0 357 0 351 2 347L65 256L2 166C0 162 0 156 1 151C3 146 7 142 13 141L121 121L140 14C141 8 145 4 150 2C155 0 161 0 165 3L256 66L346 3C350 0 356 0 361 2ZM361 2ZM160 256C160 222 178 191 208 173C237 156 274 156 304 173C333 191 352 222 352 256C352 291 333 322 304 340C274 357 237 357 208 340C178 322 160 291 160 256ZM384 256C384 211 359 169 320 146C280 123 231 123 192 146C152 169 128 211 128 256C128 302 152 344 192 367C231 390 280 390 320 367C359 344 384 302 384 256Z\"/></svg>"
      ;
      pcVar17 = "nl_glyph_sun";
      uVar33 = DAT_1808acc00;
    }
    local_248 = (char *******)
                CONCAT44(local_248._4_4_,
                         (int)(longlong)((float)(uVar5 >> 0x18) * fVar25 + fVar4) << 0x18 |
                         uVar5 & 0xffffff);
    local_250 = (char *******)CONCAT44(local_250._4_4_,DAT_1808ac8d4);
    local_258 = (float *)&local_e0;
    local_e0 = CONCAT44(uVar27,uVar29);
    FUN_180322fd0(local_208[0],pcVar17,pcVar22,uVar33);
    DAT_181107198 = DAT_18091a198;
    DAT_18110719c = DAT_18091a19c;
    DAT_1811071a0 = DAT_18091a1a0;
    _DAT_1811071a4 = 0x3f800000;
    local_1b0 = &DAT_181107198;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_1c8 = 0;
    local_1c0 = &local_1b0;
    local_1b8 = 1;
    local_1d0[0] = 0;
    local_190 = &local_1c8;
    local_188 = 1;
    local_180 = local_1d0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    if (cVar6 != '\0') {
      FUN_1803e89e0("nl_style_swatch");
      FUN_1802b4d80("##picker");
      iVar18 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar18 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar18 + -1;
      }
    }
    FUN_1802ce6f0("nl_style_swatch",&local_190,local_d0);
    lVar9 = DAT_180ca0a50;
    DAT_18091a198 = DAT_181107198;
    DAT_18091a19c = DAT_18110719c;
    DAT_18091a1a0 = DAT_1811071a0;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar9 = *(longlong *)(lVar9 + 0x14f8);
    *(undefined4 *)(lVar9 + 0x118) = uVar8;
    *(undefined4 *)(lVar9 + 0x11c) = uVar1;
    *(undefined1 *)(lVar9 + 0x159) = 1;
    FUN_1802b7f90();
    fVar4 = DAT_1809f351c;
    DAT_18110749c = 0x44000000;
    if (DAT_1809f351c == 1.4013e-45) {
      puVar19 = PTR_s_automatic_1806a0bb8;
    }
    else {
      puVar19 = PTR_s_disabled_1806a0bb0;
      if (DAT_1809f351c == 2.8026e-45) {
        puVar19 = PTR_s_forced_on_1806a0bc0;
      }
    }
    FUN_1803e89e0("nl_glyph_safe_mode");
    local_258 = (float *)CONCAT71(local_258._1_7_,1);
    cVar6 = FUN_1803104f0("nl_glyph_safe_mode",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M269 3C265 1 260 0 256 0C251 0 246 1 242 3L54 83C32 93 15 114 16 140C16 240 57 421 229 503C246 511 265 511 282 503C454 421 495 240 496 140C496 114 479 93 457 83L269 3ZM256 128C269 128 280 139 280 152L280 264C280 278 269 288 256 288C242 288 232 278 232 264L232 152C232 139 242 128 256 128ZM224 352C224 335 238 320 256 320C273 320 288 335 288 352C288 370 273 384 256 384C238 384 224 370 224 352Z\"/></svg>"
                          ,"safe mode",puVar19);
    if (cVar6 != '\0') {
      FUN_1802b4d80("##value_list");
    }
    lVar9 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
    *(undefined8 *)(lVar9 + 0x1f84) = 0x430c0000;
    *(undefined4 *)(lVar9 + 0x1f8c) = 0x7f7fffff;
    *(undefined4 *)(lVar9 + 0x1f90) = 0x43b18000;
    *(undefined8 *)(lVar9 + 0x1f98) = 0;
    *(undefined8 *)(lVar9 + 0x1fa0) = 0;
    local_e0 = *(undefined8 *)(lVar9 + 0x1efc);
    local_210 = *(undefined1 **)(lVar9 + 0x1ef4);
    FUN_1802b5160("##value_list",&local_210,&local_e0);
    DAT_180cd04ac = 1;
    DAT_180cd04ad = 1;
    local_e0 = 0x40c0000040c00000;
    cVar6 = FUN_1802b5260("##value_list",&local_e0);
    fVar28 = fVar4;
    if (cVar6 != '\0') {
      cVar6 = FUN_1802b74f0(PTR_s_disabled_1806a0bb0,fVar4 == 0.0,0,0);
      if (cVar6 != '\0') {
        fVar28 = 0.0;
        FUN_1803ee1f0();
      }
      cVar6 = FUN_1802b74f0(PTR_s_automatic_1806a0bb8,fVar28 == 1.4013e-45,0,0);
      if (cVar6 != '\0') {
        fVar28 = 1.4013e-45;
        FUN_1803ee1f0();
      }
      cVar6 = FUN_1802b74f0(PTR_s_forced_on_1806a0bc0,fVar28 == 2.8026e-45,0,0);
      if (cVar6 != '\0') {
        FUN_1803ee1f0();
        fVar28 = 2.8026e-45;
      }
      FUN_1802b5590();
    }
    lVar9 = DAT_180ca0a50;
    iVar18 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar18 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
      lVar9 = DAT_180ca0a50;
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar18 + -1;
    }
    if (fVar28 != fVar4) {
      local_d0[0] = fVar28;
      local_210 = (undefined1 *)CONCAT44(local_210._4_4_,2);
      local_1d8 = 0.0;
      pfVar16 = &local_1d8;
      if (-1 < (int)fVar28) {
        pfVar16 = local_d0;
      }
      pfVar13 = (float *)&local_210;
      if ((int)fVar28 < 3) {
        pfVar13 = pfVar16;
      }
      DAT_1809f351c = *pfVar13;
    }
    local_e0 = *(undefined8 *)(lVar9 + 0x1efc);
    local_210 = *(undefined1 **)(lVar9 + 0x1ef4);
    uVar7 = FUN_1803dd930(0);
    local_250 = (char *******)((ulonglong)local_250 & 0xffffffff00000000);
    local_258 = (float *)&local_e0;
    FUN_1802b56a0("Safe Mode",
                  "Disables unsafe features on Valve servers. Safe Mode will be re-enabled after restarting the game.\n\nWarning: We strongly recommend keeping this feature enabled to avoid bans."
                  ,uVar7,&local_210);
    local_250 = (char *******)PTR_DAT_1809f5b68;
    local_258 = (float *)0x1806f3a20;
    FUN_18031ee20(&local_1f8,"nl_glyph_sync",
                  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M512 96L64 96L64 195C51 193 37 192 23 192L0 192L0 96C0 61 28 32 63 32L512 32C547 32 576 61 576 96L576 416C576 451 547 480 512 480L288 480L288 456C288 443 287 429 285 416L512 416L512 96ZM24 224C152 224 256 328 256 456C256 469 245 480 232 480C218 480 208 469 208 456C208 355 125 272 23 272C10 272 0 262 0 248C0 235 10 224 23 224L24 224ZM31 416C49 416 63 431 63 448C63 465 49 480 31 480C14 480 0 465 0 448C0 431 14 416 31 416ZM0 344C0 331 10 320 23 320C99 320 160 381 160 456C160 469 149 480 136 480C122 480 112 469 112 456C112 408 72 368 23 368C10 368 0 358 0 344Z\"/></svg>"
                  ,DAT_1808acc0c);
    local_e0 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
    local_210 = *(undefined1 **)(DAT_180ca0a50 + 0x1ef4);
    uVar7 = FUN_1803dd930(0);
    local_250 = (char *******)((ulonglong)local_250 & 0xffffffff00000000);
    local_258 = (float *)&local_e0;
    FUN_1802b56a0("Synchronization",
                  "Allows you to recognize other neverlose users in matches and use a shared skin changer.\n\nIf this checkbox is enabled, other neverlose users can also see your skins and cheat."
                  ,uVar7,&local_210);
    local_250 = (char *******)PTR_DAT_1809f51a0;
    local_258 = (float *)0x1807672f0;
    FUN_18031ee20(&local_1f8,"nl_glyph_developer",
                  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M416 32L384 32C366 32 352 47 352 64C352 82 366 96 384 96L416 96C433 96 448 111 448 128L448 166C448 191 458 216 476 234L498 256L476 279C458 297 448 321 448 347L448 384C448 402 433 416 416 416L384 416C366 416 352 431 352 448C352 465 366 480 384 480L416 480C469 480 512 437 512 384L512 347C512 338 515 330 521 324L566 279C579 267 579 246 566 234L521 188C515 182 512 174 512 166L512 128C512 75 469 32 416 32ZM160 32C107 32 64 75 64 128L64 166C64 174 60 183 54 189L9 234C-3 246 -3 267 9 279L54 324C60 330 64 339 64 347L64 384C64 437 107 480 160 480L192 480C209 480 224 465 224 448C224 431 209 416 192 416L160 416C142 416 128 402 128 384L128 347C128 321 117 297 99 279L77 256L99 234C117 216 128 191 128 166L128 128C128 111 142 96 160 96L192 96C209 96 224 82 224 64C224 47 209 32 192 32L160 32L160 32Z\"/></svg>"
                  ,DAT_1808acc0c);
    FUN_1802b7f90();
    DAT_18110749c = 0x44000000;
    local_258 = (float *)((ulonglong)local_258 & 0xffffffffffffff00);
    cVar6 = FUN_1803104f0("fa_copyright",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 512C347 512 431 463 477 384C523 305 523 208 477 128C431 49 347 0 256 0C164 0 80 49 34 128C-11 208 -11 305 34 384C80 463 164 512 256 512ZM199 313C230 344 281 344 312 313C321 304 337 304 346 313C355 322 355 338 346 347C296 397 215 397 165 347C115 297 115 216 165 166C215 116 296 116 346 166C355 175 355 191 346 200C337 209 321 209 312 200C281 169 230 169 199 200C168 231 168 282 199 313L199 313ZM199 313Z\"/></svg>"
                          ,"about",0);
    if (cVar6 != '\0') {
      FUN_180322e80(1);
      FUN_1803ee1f0();
    }
    DAT_18110749c = 0x44200000;
    local_258 = (float *)((ulonglong)local_258 & 0xffffffffffffff00);
    cVar6 = FUN_1803104f0("nl_glyph_chat",
                          "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M208 352C322 352 416 274 416 176C416 79 322 0 208 0C93 0 0 79 0 176C0 215 14 251 39 280C36 289 30 298 25 305C20 311 15 316 12 319C10 320 8 322 7 323C7 323 6 323 6 323L6 324L6 324L6 324C1 328 -1 335 0 341C3 348 9 352 16 352C37 352 59 347 78 340C87 336 95 333 103 329C134 344 169 352 208 352L208 352ZM448 176C448 289 348 373 231 383C255 457 336 512 432 512C470 512 505 503 536 488C544 492 552 496 561 499C580 506 602 512 624 512C630 512 637 507 639 500C641 494 639 487 633 483L633 483L633 483L633 482C633 482 632 482 632 482C631 481 629 480 627 478C624 475 619 470 614 464C609 457 603 448 600 440C625 411 639 375 639 336C639 244 555 167 447 161C447 166 447 171 447 176L448 176ZM448 176Z\"/></svg>"
                          ,&DAT_1806e1414,0);
    if (cVar6 != '\0') {
      DAT_180cd0f0f = DAT_180cd0f0f == '\0';
    }
    FUN_1802b5590();
    FUN_18000f890(local_140);
    FUN_18000f890(local_120);
    FUN_18000f890(&local_160);
  }
  return;
}



/* ===== 18031ee20 FUN_18031ee20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18031ee20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined8 extraout_XMM0_Qa;
  undefined4 uVar12;
  float fVar13;
  float local_res8;
  float local_resc;
  undefined4 local_res20 [2];
  uint in_stack_ffffffffffffff48;
  longlong local_a8 [2];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  
  FUN_1803e89e0(param_2);
  pcVar4 = (char *)CONCAT44(param_6._4_4_,(float)param_6);
  if (*pcVar4 == '\0') {
    uVar12 = 0;
  }
  else {
    uVar12 = DAT_1808ac34c;
  }
  local_res20[0] = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##switch");
  local_8c = 0;
  local_88 = 0xffffffff;
  local_98 = uVar12;
  local_94 = uVar12;
  local_90 = uVar12;
  FUN_18034a380(extraout_XMM0_Qa,local_a8,local_res20,&local_98);
  fVar10 = (float)FUN_1802b3660(local_a8[0] + 0x14,uVar12,DAT_1808ac118,1);
  lVar8 = DAT_180ca0a50;
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar8 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  lVar3 = *(longlong *)(lVar8 + 0x14f8);
  fVar1 = *(float *)(lVar3 + 0x118);
  if ((*(longlong *)(lVar3 + 0x1c8) != 0) || (lVar9 = 0x280, *(longlong *)(lVar8 + 0x2360) != 0)) {
    lVar9 = 0x250;
  }
  fVar11 = *(float *)(lVar3 + lVar9);
  DAT_181107358 = 0x42180000;
  DAT_18110749c = param_4;
  cVar6 = FUN_1803104f0(param_2,param_3,param_5,0,in_stack_ffffffffffffff48 & 0xffffff00);
  if (cVar6 != '\0') {
    *pcVar4 = *pcVar4 == '\0';
  }
  fVar5 = DAT_1808ac9fc;
  fVar13 = ((fVar1 + (fVar11 - fVar1)) - DAT_1808ac8b0) - DAT_1808ac9fc;
  local_res8 = fVar13;
  fVar11 = (float)FUN_18053f0d0();
  fVar1 = DAT_1808ac85c;
  param_6._4_4_ = fVar11 + DAT_1808ac948;
  lVar8 = *(longlong *)*param_1;
  param_6._0_4_ = fVar13 + fVar5;
  local_resc = fVar11;
  FUN_1803fe590(lVar8,&local_res8,&param_6,DAT_180960f18,DAT_1808ac85c,0);
  if (0.0 < fVar10) {
    FUN_1803fe590(lVar8,&local_res8,&param_6,
                  (int)(longlong)((float)(DAT_1809f54bc >> 0x18) * fVar10 + DAT_1808ac1f4) << 0x18 |
                  DAT_1809f54bc & 0xffffff,fVar1,0);
  }
  uVar7 = FUN_1802b38e0(DAT_180960f10,DAT_180960f14,fVar10);
  param_6._4_4_ = fVar11 + fVar1;
  param_6._0_4_ = fVar13 + DAT_1808ac540 + DAT_1808ac830 + fVar10 * _DAT_1808ac8bc;
  if ((uVar7 & 0xff000000) != 0) {
    FUN_1803fddf0(lVar8,&param_6,DAT_1808ac830,0,DAT_1808ac7b8,0x17);
    FUN_1803fd460(lVar8,*(undefined8 *)(lVar8 + 0x58),*(undefined4 *)(lVar8 + 0x50),uVar7);
    *(undefined4 *)(lVar8 + 0x50) = 0;
  }
  return;
}



/* ===== 18031f170 FUN_18031f170 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18031f170(longlong param_1,float *param_2,float param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  longlong *plVar5;
  char *pcVar6;
  float *pfVar7;
  longlong lVar8;
  undefined4 extraout_XMM0_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  float *local_120;
  char *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_100;
  float local_f8;
  float local_f4;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  longlong local_d8;
  longlong lStack_d0;
  float local_c8 [4];
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_148;
  FUN_18035e470(&DAT_18091a1bc);
  lVar8 = DAT_180ca0a50;
  fVar11 = *param_2;
  local_f0 = 0x425c0000432a0000;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar8 = *(longlong *)(lVar8 + 0x14f8);
  *(float *)(lVar8 + 0x118) = fVar11;
  *(float *)(lVar8 + 0x11c) = param_3;
  *(undefined1 *)(lVar8 + 0x159) = 1;
  cVar1 = FUN_180415e30("##avabtn",&local_f0,0);
  if (cVar1 != '\0') {
    FUN_1802b4d80("##avacontext");
  }
  iVar2 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##avacontext");
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar8 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar8 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar2) ||
       (*(char *)(lVar8 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != '\0'))
    goto LAB_18031f282;
  }
  else {
LAB_18031f282:
    if ((*(int *)(DAT_180ca0a50 + 0x1578) == 0) ||
       (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))) {
      cVar1 = FUN_1803dd930(0);
      if (cVar1 == '\0') {
        fVar10 = 0.0;
      }
      else {
        fVar10 = DAT_1808ac1f4;
      }
      goto LAB_18031f2b6;
    }
  }
  fVar10 = DAT_1808ac34c;
LAB_18031f2b6:
  uVar3 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##avabtn_t");
  local_f0 = CONCAT44(local_f0._4_4_,uVar3);
  local_b8 = CONCAT44(fVar10,fVar10);
  uStack_b0 = (ulonglong)(uint)fVar10;
  local_a8 = CONCAT44(local_a8._4_4_,0xffffffff);
  FUN_18034a380(extraout_XMM0_Da,&local_d8,&local_f0,&local_b8);
  fVar9 = (float)FUN_1802b3660(local_d8 + 0x14);
  fVar10 = DAT_1808ac864;
  if (0.0 < fVar9) {
    local_c8[2] = 1.0;
    local_c8[0] = 0.0;
    local_c8[1] = fVar9 * DAT_1808ac1b0 * DAT_1808ac2cc;
    local_f0 = CONCAT44(param_3 + DAT_1808aca80,fVar11 + _DAT_1808acb40);
    local_e8 = fVar11 + DAT_1808ac864;
    local_e4 = param_3 + DAT_1808ac750;
    pfVar7 = local_c8;
    if (0.0 <= local_c8[1]) {
      pfVar7 = local_c8 + 1;
    }
    pfVar4 = local_c8 + 2;
    if (local_c8[1] <= DAT_1808ac34c) {
      pfVar4 = pfVar7;
    }
    local_120 = (float *)((ulonglong)local_120 & 0xffffffff00000000);
    local_128 = (undefined8 *)CONCAT44(local_128._4_4_,DAT_1808ac7ac);
    FUN_1803fe590(param_1,&local_e8,&local_f0,
                  DAT_180960f44 & 0xffffff |
                  (int)(longlong)(*pfVar4 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18);
  }
  plVar5 = (longlong *)FUN_18030bc10(&local_b8);
  fVar10 = param_3 + fVar10;
  local_f8 = fVar11 + DAT_1808ac900;
  local_f4 = fVar10;
  if (((*plVar5 != 0) && (0 < (int)plVar5[1])) && (0 < *(int *)((longlong)plVar5 + 0xc))) {
    local_e8 = 1.0;
    local_e4 = 1.0;
    local_f0 = 0;
    local_e0 = local_f8 + DAT_1808aca28;
    local_dc = fVar10 + DAT_1808aca28;
    local_d8 = 0;
    local_110 = CONCAT44(local_110._4_4_,DAT_1808ac92c);
    local_118 = (char *)CONCAT44(local_118._4_4_,0xffffffff);
    local_120 = &local_e8;
    local_128 = &local_f0;
    lStack_d0 = *plVar5;
    FUN_1803febc0(param_1,&local_d8,&local_f8,&local_e0);
  }
  fVar9 = (float)FUN_18053f0d0(DAT_1808ac234);
  fVar9 = fVar9 + fVar10;
  local_f8 = (fVar11 + DAT_1808acb4c) - DAT_1808ac9e4;
  local_f4 = param_3 + DAT_1808aca8c;
  fVar11 = fVar11 + DAT_1808acaa8;
  local_e0 = fVar11;
  local_dc = param_3;
  FUN_1803fc200(param_1,&local_e0,&local_f8,1);
  pcVar6 = (char *)FUN_1801c8250();
  lVar8 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar8 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_f8 = fVar11;
  local_f4 = fVar9;
  if ((((DAT_180960ec8 & 0xff000000) != 0) && (pcVar6 != (char *)0x0)) && (*pcVar6 != '\0')) {
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
    local_d8 = *(longlong *)(param_1 + 0x60);
    lStack_d0 = *(longlong *)(param_1 + 0x68);
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_120 = (float *)&local_d8;
    local_128 = (undefined8 *)CONCAT44(local_128._4_4_,DAT_180960ec8);
    local_118 = pcVar6;
    FUN_18040a900(lVar8,param_1,DAT_1808ac930,&local_f8);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = _DAT_1808ad470;
  uStack_a0 = _UNK_1808ad478;
  FUN_1811be280();
  return;
}



/* ===== 18031f5fc FUN_18031f5fc ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18031f5fc(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float fVar9;
  float unaff_XMM6_Da;
  float fVar10;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float unaff_XMM12_Da;
  undefined4 uStack0000000000000050;
  float fStack0000000000000054;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  pcVar6 = (char *)FUN_18035eb30(unaff_RBP + -0x50,unaff_RBP + -0x70);
  if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
    pcVar6 = *(char **)pcVar6;
  }
  fStack0000000000000054 = unaff_XMM6_Da + unaff_XMM7_Da + DAT_1808ac34c;
  lVar7 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar7 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if ((((DAT_180960ecc & 0xff000000) != 0) && (pcVar6 != (char *)0x0)) && (*pcVar6 != '\0')) {
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x18);
    }
    uStack0000000000000070 = *(undefined4 *)(unaff_RDI + 0x60);
    uStack0000000000000074 = *(undefined4 *)(unaff_RDI + 100);
    uStack0000000000000078 = *(undefined4 *)(unaff_RDI + 0x68);
    uStack000000000000007c = *(undefined4 *)(unaff_RDI + 0x6c);
    FUN_18040a900(lVar7);
  }
  FUN_18000f890(unaff_RBP + -0x50);
  FUN_18000f890(unaff_RBP + -0x70);
  iVar2 = *(int *)(unaff_RDI + 0xa0);
  iVar1 = iVar2 + -1;
  *(int *)(unaff_RDI + 0xa0) = iVar1;
  if (iVar1 == 0) {
    puVar8 = (undefined4 *)(*(longlong *)(unaff_RDI + 0x38) + 0x34);
  }
  else {
    puVar8 = (undefined4 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(unaff_RDI + 0xa8));
  }
  uVar3 = puVar8[1];
  uVar4 = puVar8[2];
  uVar5 = puVar8[3];
  *(undefined4 *)(unaff_RDI + 0x60) = *puVar8;
  *(undefined4 *)(unaff_RDI + 100) = uVar3;
  *(undefined4 *)(unaff_RDI + 0x68) = uVar4;
  *(undefined4 *)(unaff_RDI + 0x6c) = uVar5;
  FUN_1803fbff0();
  fVar10 = unaff_XMM12_Da - DAT_1808ac900;
  fVar9 = (float)FUN_18053fc00(DAT_1808ac84c);
  uStack0000000000000050 = fVar10 - fVar9 * DAT_1808ac1f4;
  fVar9 = unaff_XMM9_Da + _DAT_1808ac9b8;
  fStack0000000000000054 = fVar9;
  FUN_1802b6e90(DAT_1808ac8d4,"nl_glyph_angle_right",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 320 512\" width=\"320\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M278 234C291 246 291 267 278 279L118 439C106 451 85 451 73 439C60 427 60 406 73 394L210 256L73 119C60 107 60 86 73 74C85 61 106 61 118 74L278 234L278 234ZM278 234Z\"/></svg>"
                ,DAT_1808acbc0,&uStack0000000000000050);
  fStack0000000000000054 = fVar9;
  FUN_18031d5a0(&uStack0000000000000050);
  return;
}



/* ===== 18031f7e0 FUN_18031f7e0 ===== */

char * FUN_18031f7e0(char *param_1,char param_2,char param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  
  lVar1 = DAT_180ca0a50;
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 0x110);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0x114);
  param_1[1] = param_3;
  param_1[7] = param_4;
  if (((param_2 == '\0') || (*(char *)(lVar1 + 0x118) == '\0')) ||
     (*(char *)(lVar1 + 0x1cc4) != '\0')) {
    param_1[2] = '\0';
    if (param_2 != '\0') goto LAB_18031f846;
LAB_18031f85d:
    param_1[3] = '\0';
    if (param_2 != '\0') goto LAB_18031f867;
LAB_18031f880:
    param_1[4] = '\0';
    if (param_2 != '\0') goto LAB_18031f88a;
LAB_18031f8a3:
    param_1[5] = '\0';
    if (param_2 != '\0') goto LAB_18031f8ad;
  }
  else {
    param_1[2] = '\x01';
LAB_18031f846:
    cVar2 = FUN_1803e9690(0,0,0);
    if (cVar2 == '\0') goto LAB_18031f85d;
    param_1[3] = '\x01';
LAB_18031f867:
    if ((*(char *)(lVar1 + 0xb5e) == '\0') || (*(char *)(lVar1 + 0x1cc4) != '\0'))
    goto LAB_18031f880;
    param_1[4] = '\x01';
LAB_18031f88a:
    if ((*(char *)(lVar1 + 0x119) == '\0') || (*(char *)(lVar1 + 0x1cd0) != '\0'))
    goto LAB_18031f8a3;
    param_1[5] = '\x01';
LAB_18031f8ad:
    cVar2 = FUN_1803e9690(1,0,0);
    if (cVar2 != '\0') {
      uVar3 = *(undefined4 *)(lVar1 + 0x120);
      param_1[6] = '\x01';
      goto LAB_18031f8e6;
    }
  }
  param_1[6] = '\0';
  if (param_2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lVar1 + 0x120);
  }
LAB_18031f8e6:
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  return param_1;
}



/* ===== 18031f900 FUN_18031f900 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_18031f900(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  int *piVar13;
  byte *pbVar14;
  uint uVar15;
  char *pcVar16;
  int iVar17;
  char cVar18;
  longlong lVar19;
  undefined1 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_res8;
  float local_resc;
  float local_res18;
  float local_res1c;
  char local_res20;
  undefined8 in_stack_fffffffffffffde8;
  undefined4 uVar32;
  undefined8 *in_stack_fffffffffffffdf0;
  ulonglong uVar33;
  undefined8 *puVar34;
  undefined8 in_stack_fffffffffffffdf8;
  undefined4 uVar35;
  undefined8 local_1d8;
  int local_1d0;
  byte local_1cc [4];
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  longlong local_1b8;
  longlong local_1b0;
  int local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c [4];
  float local_18c;
  float local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  undefined4 local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  longlong local_128 [2];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  
  lVar19 = DAT_180ca0a50;
  uVar35 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
  uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffde8 >> 0x20);
  local_1a8 = 1;
  local_1b0 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  fVar22 = DAT_1808ac9f8;
  fVar31 = DAT_1808ac8b0;
  fVar29 = DAT_1808ac540;
  local_1b8 = *(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0) >> 5;
  lVar3 = *(longlong *)(*(longlong *)(lVar19 + 0x14f8) + 0x2c8);
  iVar12 = *(int *)(param_1 + 0x238);
  piVar13 = &local_1a8;
  if (0 < iVar12) {
    piVar13 = (int *)(param_1 + 0x238);
  }
  iVar17 = (int)local_1b8;
  if (0xb < iVar12) {
    piVar13 = &DAT_180658d98;
  }
  iVar12 = iVar17;
  if (*piVar13 < iVar17) {
    iVar12 = *piVar13;
  }
  if (iVar12 < iVar17) {
    fVar24 = DAT_1808ac140;
  }
  else {
    fVar24 = 0.0;
  }
  fVar21 = (float)FUN_18053fc00(((float)iVar12 + fVar24) * DAT_1808ac9f8 + DAT_1808ac540 +
                                DAT_1808ac8b0);
  fVar30 = DAT_1808ac930;
  fVar24 = *(float *)(lVar19 + 0xcf8);
  pfVar7 = (float *)FUN_1802ba780(&local_150,fVar24 + DAT_1808ac930 + fVar21);
  uVar20 = 0;
  fVar25 = *pfVar7;
  local_resc = pfVar7[1];
  local_1c8 = pfVar7[2];
  fVar26 = pfVar7[3];
  local_e8 = *(undefined8 *)(pfVar7 + 4);
  local_138 = local_resc;
  fStack_134 = local_resc;
  fStack_130 = local_resc;
  fStack_12c = local_resc;
  local_118 = fVar25;
  fStack_114 = local_resc;
  fStack_110 = local_1c8;
  fStack_10c = fVar26;
  local_108 = local_1c8;
  fStack_104 = local_1c8;
  fStack_100 = local_1c8;
  fStack_fc = local_1c8;
  local_f8 = fVar25;
  fStack_f4 = local_resc;
  fStack_f0 = local_1c8;
  fStack_ec = fVar26;
  if ((((DAT_180960ec0 & 0xff000000) != 0) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
    in_stack_fffffffffffffdf0 = &local_170;
    local_170 = *(undefined8 *)(lVar3 + 0x60);
    uStack_168 = *(undefined8 *)(lVar3 + 0x68);
    local_res8 = fVar25;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x18),lVar3);
    uVar35 = (undefined4)((ulonglong)param_2 >> 0x20);
  }
  lVar10 = DAT_180ca0a50;
  fVar24 = local_138 + fVar30 + fVar24;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar10 = *(longlong *)(lVar10 + 0x14f8);
  local_1c4 = fVar24 + fVar21;
  *(undefined1 *)(lVar10 + 0x159) = 1;
  local_1d8 = CONCAT44(fVar24,fVar25);
  *(undefined8 *)(lVar10 + 0x118) = local_1d8;
  local_res8 = local_1c8 - fVar25;
  local_resc = fVar21;
  FUN_180415e30("##list",&local_res8,0);
  cVar5 = FUN_1803dd930(0);
  lVar10 = DAT_180ca0a50;
  local_res18 = (float)CONCAT31(local_res18._1_3_,cVar5);
  fVar29 = (fVar21 - fVar31) - fVar29;
  fVar24 = (float)iVar17 * fVar22;
  local_18c = fVar24;
  local_19c[3] = fVar29;
  if ((cVar5 != '\0') && (*(float *)(lVar19 + 0x120) != 0.0)) {
    puVar1 = (undefined4 *)(DAT_180ca0a50 + 0x1ee8);
    *(undefined4 *)(DAT_180ca0a50 + 0x1d08) = *puVar1;
    *(undefined4 *)(lVar10 + 0x1d04) = *puVar1;
    *(undefined2 *)(lVar10 + 0x1d0c) = 0;
    *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x250) - *(float *)(lVar19 + 0x120) * fVar22;
  }
  fVar21 = DAT_1808ac7ac;
  pfVar7 = (float *)(param_1 + 0x250);
  local_1a4 = 0.0;
  local_1a0 = fVar24 - fVar29;
  local_res8 = 0.0;
  uVar33 = (ulonglong)in_stack_fffffffffffffdf0 & 0xffffffff00000000;
  uVar23 = CONCAT44(uVar32,DAT_1808ac7ac);
  local_188 = local_1a0;
  fVar30 = *pfVar7;
  pfVar9 = &local_1a4;
  if (0.0 <= local_1a0) {
    pfVar9 = &local_1a0;
  }
  pfVar8 = &local_res8;
  if (0.0 <= fVar30) {
    pfVar8 = pfVar7;
  }
  if (*pfVar9 <= fVar30 && fVar30 != *pfVar9) {
    pfVar8 = pfVar9;
  }
  *pfVar7 = *pfVar8;
  local_res20 = fVar29 < fVar24;
  FUN_1803fe590(lVar3,&local_1d8,&local_1c8,DAT_180960ef0,uVar23,uVar33);
  fVar30 = DAT_1808ac34c;
  puVar11 = &local_170;
  puVar34 = (undefined8 *)(uVar33 & 0xffffffff00000000);
  local_170 = _DAT_1808adcf0;
  uStack_168 = _UNK_1808adcf8;
  FUN_18036bcb0(lVar3,&local_1d8,&local_1c8,DAT_180960eec,puVar11,puVar34,
                CONCAT44(uVar35,DAT_1808ac34c));
  fVar28 = (float)local_1d8 + fVar30;
  local_resc = local_1c4 - fVar30;
  fVar27 = local_1d8._4_4_ + fVar30 + fVar21;
  if (fVar29 < fVar24) {
    fVar24 = DAT_1808ac750;
  }
  else {
    fVar24 = 0.0;
  }
  local_res8 = local_1c8 - fVar30;
  local_180 = CONCAT44(local_1d8._4_4_ + fVar30,fVar28);
  local_1c0 = local_res8 - fVar21;
  local_1bc = local_resc - fVar21;
  FUN_1803fc200(lVar3,&local_180,&local_res8,1);
  local_res8 = (float)((uint)local_res8 & 0xffffff00);
  uVar6 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##list_rows");
  fVar4 = local_1bc;
  uVar32 = DAT_1808ac6f0;
  uVar35 = (undefined4)((ulonglong)puVar11 >> 0x20);
  local_1d0 = 0;
  if (0 < (int)local_1b8) {
    fVar28 = fVar28 + fVar21;
    fVar24 = local_1c0 - fVar24;
    lVar10 = local_1b8;
    fVar29 = local_1d8._4_4_;
    do {
      iVar12 = local_1d0;
      fVar26 = ((float)local_1d0 * fVar22 + fVar27) - *(float *)(param_1 + 0x250);
      fVar25 = fVar26 + fVar22;
      if ((fVar29 <= fVar25) && (fVar26 <= local_1c4)) {
        local_158 = fVar28;
        local_154 = fVar26;
        local_160 = fVar24;
        local_15c = fVar25;
        if (cVar5 == '\0') {
LAB_18031fe92:
          cVar5 = '\0';
LAB_18031fe95:
          cVar18 = '\0';
        }
        else {
          fVar29 = fVar27;
          if (fVar27 <= fVar26) {
            fVar29 = fVar26;
          }
          if (*(float *)(lVar19 + 0x114) < fVar29) goto LAB_18031fe92;
          fVar29 = fVar4;
          if (fVar25 <= fVar4) {
            fVar29 = fVar25;
          }
          if (((fVar29 <= *(float *)(lVar19 + 0x114)) || (*(float *)(lVar19 + 0x110) < fVar28)) ||
             (fVar24 <= *(float *)(lVar19 + 0x110))) goto LAB_18031fe92;
          cVar5 = '\x01';
          if ((*(char *)(DAT_180ca0a50 + 0x118) == '\0') ||
             (*(char *)(DAT_180ca0a50 + 0x1cc4) != '\0')) goto LAB_18031fe95;
          cVar18 = '\x01';
        }
        iVar17 = *(int *)(param_1 + 0x6c);
        pbVar14 = (byte *)&local_1d0;
        uVar15 = ~uVar6;
        do {
          bVar2 = *pbVar14;
          pbVar14 = pbVar14 + 1;
          uVar15 = uVar15 >> 8 ^
                   *(uint *)(&DAT_1806c25c0 + ((ulonglong)uVar15 & 0xff ^ (ulonglong)bVar2) * 4);
        } while (pbVar14 < local_1cc);
        uVar23 = FUN_1802b3850(uVar15 ^ 0x9880957a,cVar18,cVar5);
        if ((iVar12 == iVar17) || (cVar18 != '\0')) {
          fVar29 = fVar30;
        }
        else if (cVar5 == '\0') {
          fVar29 = 0.0;
        }
        else {
          fVar29 = DAT_1808ac1f4;
        }
        local_180 = CONCAT44(local_180._4_4_,uVar15) ^ 0xf0c2cdbb;
        local_144 = 0;
        local_140 = 0xffffffff;
        local_150 = fVar29;
        local_14c = fVar29;
        local_148 = fVar29;
        FUN_18034a380(uVar23,local_128,&local_180,&local_150);
        FUN_1802b3660(local_128[0] + 0x14,fVar29);
        if (0.0 < (float)uVar23) {
          local_19c[2] = 1.0;
          local_19c[0] = 0.0;
          puVar34 = (undefined8 *)((ulonglong)puVar34 & 0xffffffff00000000);
          local_19c[1] = (float)uVar23 * DAT_1808ac1b0 * DAT_1808ac2cc;
          puVar11 = (undefined8 *)CONCAT44((int)((ulonglong)puVar11 >> 0x20),uVar32);
          pfVar7 = local_19c;
          if (0.0 <= local_19c[1]) {
            pfVar7 = local_19c + 1;
          }
          pfVar9 = local_19c + 2;
          if (local_19c[1] <= fVar30) {
            pfVar9 = pfVar7;
          }
          FUN_1803fe590(lVar3,&local_158,&local_160,
                        (int)(longlong)(*pfVar9 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18 |
                        DAT_180960f44 & 0xffffff,puVar11,puVar34);
        }
        if (((cVar5 == '\0') || (cVar5 = FUN_1803e9690(0,0,0), cVar5 == '\0')) || (iVar12 == iVar17)
           ) {
          uVar20 = local_res8._0_1_;
        }
        else {
          *(int *)(param_1 + 0x6c) = iVar12;
          local_res8 = (float)CONCAT31(local_res8._1_3_,1);
          uVar20 = 1;
        }
        pcVar16 = (char *)((longlong)iVar12 * 0x20 + *(longlong *)(param_1 + 0xa0));
        if (0xf < *(ulonglong *)(pcVar16 + 0x18)) {
          pcVar16 = *(char **)pcVar16;
        }
        uVar15 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8);
        local_170 = CONCAT44(local_170._4_4_,fVar28 + fVar31);
        fVar29 = (float)FUN_18053f0d0();
        local_170 = CONCAT44(fVar29 + fVar26,(undefined4)local_170);
        if ((((uVar15 & 0xff000000) != 0) && (pcVar16 != (char *)0x0)) && (*pcVar16 != '\0')) {
          local_180 = *(ulonglong *)(lVar3 + 0x60);
          uStack_178 = *(undefined8 *)(lVar3 + 0x68);
          puVar34 = &local_180;
          puVar11 = (undefined8 *)CONCAT44((int)((ulonglong)puVar11 >> 0x20),uVar15);
          FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x18),lVar3);
        }
        lVar10 = local_1b8;
        lVar19 = local_1b0;
        fVar29 = local_1d8._4_4_;
        cVar5 = local_res18._0_1_;
      }
      uVar35 = (undefined4)((ulonglong)puVar11 >> 0x20);
      local_1d0 = iVar12 + 1;
    } while (iVar12 + 1 < (int)lVar10);
    fVar25 = local_118;
    fVar26 = fStack_10c;
    fVar29 = local_19c[3];
  }
  iVar17 = *(int *)(lVar3 + 0xa0);
  iVar12 = iVar17 + -1;
  *(int *)(lVar3 + 0xa0) = iVar12;
  if (iVar12 == 0) {
    puVar11 = (undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x34);
  }
  else {
    puVar11 = (undefined8 *)((longlong)(iVar17 + -2) * 0x10 + *(longlong *)(lVar3 + 0xa8));
  }
  uVar23 = puVar11[1];
  *(undefined8 *)(lVar3 + 0x60) = *puVar11;
  *(undefined8 *)(lVar3 + 0x68) = uVar23;
  FUN_1803fbff0(lVar3);
  uVar32 = DAT_1808ac5e0;
  if (local_res20 != '\0') {
    if (fVar30 <= local_188) {
      fVar30 = local_188;
    }
    fVar21 = local_1c0 - DAT_1808ac750;
    uVar33 = (ulonglong)puVar34 & 0xffffffff00000000;
    fVar22 = (fVar29 * fVar29) / local_18c;
    fVar24 = fVar21 + DAT_1808ac750;
    if (fVar31 <= fVar22) {
      fVar31 = fVar22;
    }
    local_resc = local_1bc;
    fVar29 = (*(float *)(param_1 + 0x250) / fVar30) * (fVar29 - fVar31) + fVar27;
    local_res8 = fVar24;
    local_res18 = fVar21;
    local_res1c = fVar27;
    FUN_1803fe590(lVar3,&local_res18,&local_res8,DAT_180960f04,CONCAT44(uVar35,DAT_1808ac5e0),uVar33
                 );
    local_resc = fVar31 + fVar29;
    local_res8 = fVar24;
    local_res18 = fVar21;
    local_res1c = fVar29;
    FUN_1803fe590(lVar3,&local_res18,&local_res8,DAT_180960f08,uVar32,uVar33 & 0xffffffff00000000);
  }
  lVar3 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  DAT_1809f5b44 = *(undefined4 *)(lVar3 + 4);
  DAT_1809f5b40 = *(undefined4 *)(*(longlong *)(lVar3 + 0x14f8) + 0x10);
  DAT_1809f5b48 = local_138;
  DAT_1809f5b50._0_4_ = local_108;
  DAT_1809f5b4c = fVar26;
  DAT_1809f5b50._4_4_ = fVar25;
  FUN_1802baa50(&local_f8);
  return uVar20;
}



/* ===== 180320330 FUN_180320330 ===== */

undefined8 FUN_180320330(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  ulonglong uVar3;
  size_t sVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (*(longlong *)(param_2 + 0xf0) != *(longlong *)(param_2 + 0xf8)) {
    if (DAT_180cd0fa6 == '\0') {
      DAT_180cd0fa6 = '\x01';
      FUN_18035be50();
      FUN_18035dd90();
      if (DAT_180cd0fa6 == '\0') {
        DAT_180cd0fa6 = '\x01';
        FUN_18035be50();
        FUN_18035dd90();
      }
    }
    if ((-1 < DAT_1811078b0) &&
       (DAT_1811078b0 < (int)(DAT_1811078d8 - DAT_1811078d0 >> 3) * -0xf0f0f0f)) {
      puVar8 = *(undefined8 **)(param_2 + 0xf0);
      puVar1 = *(undefined8 **)(param_2 + 0xf8);
      if (puVar8 != puVar1) {
        puVar9 = (undefined8 *)((longlong)DAT_1811078b0 * 0x88 + DAT_1811078d0);
        sVar2 = puVar9[2];
        uVar3 = puVar9[3];
        do {
          if (uVar3 < 0x10) {
            puVar7 = puVar9;
          }
          else {
            puVar7 = (undefined8 *)*puVar9;
          }
          sVar4 = puVar8[2];
          if ((ulonglong)puVar8[3] < 0x10) {
            puVar6 = puVar8;
          }
          else {
            puVar6 = (undefined8 *)*puVar8;
          }
          if ((sVar4 == sVar2) &&
             ((sVar4 == 0 || (iVar5 = memcmp(puVar6,puVar7,sVar4), iVar5 == 0)))) {
            puVar7 = puVar8 + 4;
            if ((ulonglong)param_3[3] < 0x10) {
              puVar6 = param_3;
            }
            else {
              puVar6 = (undefined8 *)*param_3;
            }
            sVar4 = puVar8[6];
            if (0xf < (ulonglong)puVar8[7]) {
              puVar7 = (undefined8 *)*puVar7;
            }
            if ((sVar4 == param_3[2]) &&
               ((sVar4 == 0 || (iVar5 = memcmp(puVar7,puVar6,sVar4), iVar5 == 0)))) {
              param_3 = puVar8 + 8;
              break;
            }
          }
          puVar8 = puVar8 + 0xc;
        } while (puVar8 != puVar1);
      }
    }
  }
  FUN_180024b50(param_1,param_3);
  return param_1;
}



/* ===== 180320490 FUN_180320490 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180320490(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte bVar10;
  char cVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  float *pfVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  float *pfVar22;
  undefined8 ****ppppuVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  ulonglong unaff_RBX;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  bool bVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [24];
  undefined8 **local_188;
  undefined8 local_180;
  float local_178;
  undefined8 **local_170;
  undefined8 *local_158 [2];
  undefined8 *local_148 [2];
  undefined8 local_138;
  float local_130 [2];
  undefined8 local_128;
  float local_120;
  float local_11c;
  undefined8 *local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 ****local_f0 [3];
  ulonglong local_d8;
  undefined1 local_d0 [32];
  ulonglong local_b0;
  
  local_b0 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  local_138 = param_1;
  FUN_1803e8a70(*param_2);
  FUN_180320330(local_f0,param_1,param_2 + 0x12);
  if (*(char *)(param_2 + 0x82) != '\0') {
    FUN_1803e7920(1);
  }
  lVar13 = DAT_180ca0a50;
  fVar9 = DAT_1808ac7ac;
  puVar14 = (undefined8 *)(unaff_RBX & 0xffffffffffffff00);
  puVar27 = auStack_1a8;
  switch(param_2[1]) {
  case 0:
    ppppuVar23 = local_f0;
    if (0xf < local_d8) {
      ppppuVar23 = local_f0[0];
    }
    bVar10 = FUN_1802c0a60(ppppuVar23,param_2 + 0x1a);
    puVar27 = auStack_1a8;
    puVar14 = (undefined8 *)(ulonglong)bVar10;
    break;
  case 1:
    local_188 = (undefined8 **)(param_2 + 0x20);
    if (0xf < *(ulonglong *)(param_2 + 0x26)) {
      local_188 = (undefined8 **)*local_188;
    }
    ppppuVar23 = local_f0;
    if (0xf < local_d8) {
      ppppuVar23 = local_f0[0];
    }
    local_180 = (float *)((ulonglong)local_180._4_4_ << 0x20);
    bVar10 = FUN_18033fa10(ppppuVar23,param_2 + 0x1b,(int)(float)param_2[0x1d],
                           (int)(float)param_2[0x1e]);
    puVar27 = auStack_1a8;
    puVar14 = (undefined8 *)(ulonglong)bVar10;
    break;
  case 2:
    local_188 = (undefined8 **)(param_2 + 0x20);
    if (0xf < *(ulonglong *)(param_2 + 0x26)) {
      local_188 = (undefined8 **)*local_188;
    }
    ppppuVar23 = local_f0;
    if (0xf < local_d8) {
      ppppuVar23 = local_f0[0];
    }
    local_180 = (float *)((ulonglong)local_180._4_4_ << 0x20);
    bVar10 = FUN_18033e3a0(ppppuVar23,param_2 + 0x1c,param_2[0x1d],param_2[0x1e]);
    puVar27 = auStack_1a8;
    puVar14 = (undefined8 *)(ulonglong)bVar10;
    break;
  case 3:
  case 4:
    local_158[0] = (undefined8 *)0x0;
    local_158[1] = (undefined8 *)0x0;
    local_148[0] = (undefined8 *)0x0;
    uVar12 = *(longlong *)(param_2 + 0x2a) - *(longlong *)(param_2 + 0x28) >> 5;
    if (uVar12 == 0) {
LAB_1803206d3:
      puVar26 = auStack_1a8;
      puVar29 = *(undefined8 **)(param_2 + 0x28);
      puVar20 = *(undefined8 **)(param_2 + 0x2a);
      puVar14 = local_158[1];
      puVar17 = local_158[1];
      local_158[0] = local_158[1];
      local_110 = puVar20;
      if (puVar29 != puVar20) {
        do {
          puVar14 = local_158[1];
          puVar26 = auStack_1a8;
          if ((ulonglong)puVar29[3] < 0x10) {
            puVar25 = puVar29;
          }
          else {
            puVar25 = (undefined8 *)*puVar29;
          }
          if (local_158[1] == local_148[0]) {
            uVar12 = (longlong)local_158[1] - (longlong)local_158[0];
            lVar13 = (longlong)uVar12 >> 3;
            if (lVar13 == 0x1fffffffffffffff) goto LAB_180321168;
            uVar24 = lVar13 + 1;
            uVar18 = (longlong)local_148[0] - (longlong)local_158[0] >> 3;
            if (0x1fffffffffffffff - (uVar18 >> 1) < uVar18) {
              uVar19 = 0x1fffffffffffffff;
            }
            else {
              uVar18 = (uVar18 >> 1) + uVar18;
              uVar19 = uVar24;
              if (uVar24 <= uVar18) {
                uVar19 = uVar18;
              }
              if (0x1fffffffffffffff < uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_18000d840();
              }
            }
            local_128 = uVar19 * 8;
            puVar17 = (undefined8 *)FUN_18000fb70(local_128);
            uVar12 = uVar12 & 0xfffffffffffffff8;
            *(undefined8 **)((longlong)puVar17 + uVar12) = puVar25;
            if (puVar14 == local_158[1]) {
              lVar13 = (longlong)local_158[1] - (longlong)local_158[0];
              puVar20 = puVar17;
              puVar25 = local_158[0];
            }
            else {
              FUN_180540530(puVar17,local_158[0],(longlong)puVar14 - (longlong)local_158[0]);
              lVar13 = (longlong)local_158[1] - (longlong)puVar14;
              puVar20 = (undefined8 *)(uVar12 + 8 + (longlong)puVar17);
              puVar25 = puVar14;
            }
            FUN_180540530(puVar20,puVar25,lVar13);
            if (local_158[0] != (undefined8 *)0x0) {
              uVar12 = ((longlong)local_148[0] - (longlong)local_158[0] >> 3) * 8;
              if (uVar12 < 0x1000) {
                puVar14 = local_158[0];
              }
              else {
                if (0x1f < (ulonglong)((longlong)local_158[0] + (-8 - (longlong)local_158[0][-1])))
                goto LAB_180320844;
                uVar12 = uVar12 + 0x27;
                puVar14 = (undefined8 *)local_158[0][-1];
              }
              thunk_FUN_1803d64e0(puVar14,uVar12);
            }
            puVar14 = puVar17 + uVar24;
            local_148[0] = (undefined8 *)(local_128 + (longlong)puVar17);
            puVar20 = local_110;
            local_158[0] = puVar17;
          }
          else {
            *local_158[1] = puVar25;
            puVar14 = local_158[1] + 1;
          }
          puVar29 = puVar29 + 4;
          puVar17 = local_158[0];
          local_158[1] = puVar14;
        } while (puVar29 != puVar20);
      }
    }
    else {
      if (0x1fffffffffffffff < uVar12) {
LAB_180321168:
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      puVar17 = (undefined8 *)FUN_18000fb70(uVar12 * 8);
      FUN_180540530(puVar17,local_158[0],(longlong)local_158[1] - (longlong)local_158[0]);
      if (local_158[0] == (undefined8 *)0x0) {
LAB_1803206a7:
        local_148[0] = puVar17 + uVar12;
        local_158[1] = puVar17;
        goto LAB_1803206d3;
      }
      uVar24 = ((longlong)local_148[0] - (longlong)local_158[0] >> 3) * 8;
      if (uVar24 < 0x1000) {
        puVar14 = local_158[0];
LAB_1803206a2:
        thunk_FUN_1803d64e0(puVar14,uVar24);
        goto LAB_1803206a7;
      }
      if ((ulonglong)((longlong)local_158[0] + (-8 - (longlong)local_158[0][-1])) < 0x20) {
        uVar24 = uVar24 + 0x27;
        puVar14 = (undefined8 *)local_158[0][-1];
        goto LAB_1803206a2;
      }
LAB_180320844:
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar26 = auStack_1a0;
    }
    if (param_2[1] == 3) {
      ppppuVar23 = local_f0;
      if (0xf < local_d8) {
        ppppuVar23 = local_f0[0];
      }
      *(undefined8 *)(puVar26 + -8) = 0x180320878;
      bVar10 = FUN_1802c2640(ppppuVar23,param_2 + 0x1b,puVar17);
    }
    else {
      ppppuVar23 = local_f0;
      if (0xf < local_d8) {
        ppppuVar23 = local_f0[0];
      }
      uVar28 = *(undefined8 *)(param_2 + 0x2e);
      *(undefined8 *)(puVar26 + -8) = 0x180320893;
      bVar10 = FUN_1802c3050(ppppuVar23,puVar17,uVar28,
                             (longlong)puVar14 - (longlong)puVar17 >> 3 & 0xffffffff);
    }
    puVar14 = (undefined8 *)(ulonglong)bVar10;
    lVar13 = *(longlong *)(puVar26 + 0x50);
    if (lVar13 != 0) {
      lVar21 = lVar13;
      if ((0xfff < (ulonglong)((*(longlong *)(puVar26 + 0x60) - lVar13 >> 3) * 8)) &&
         (lVar21 = *(longlong *)(lVar13 + -8), 0x1f < (lVar13 - lVar21) - 8U)) {
        lVar21 = 5;
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar26 = puVar26 + 8;
      }
      *(undefined8 *)(puVar26 + -8) = 0x1803208e6;
      thunk_FUN_1803d64e0(lVar21);
      *(undefined8 *)(puVar26 + 0x50) = 0;
      *(undefined8 *)(puVar26 + 0x58) = 0;
      *(undefined8 *)(puVar26 + 0x60) = 0;
    }
    goto LAB_1803208f4;
  case 5:
    ppppuVar23 = local_f0;
    if (0xf < local_d8) {
      ppppuVar23 = local_f0[0];
    }
    bVar10 = FUN_1802cedb0(ppppuVar23,param_2 + 0x30,*(undefined1 *)(param_2 + 0x34));
    puVar27 = auStack_1a8;
    puVar14 = (undefined8 *)(ulonglong)bVar10;
    break;
  case 6:
    ppppuVar23 = local_f0;
    if (0xf < local_d8) {
      ppppuVar23 = local_f0[0];
    }
    cVar11 = FUN_1802cf4d0(ppppuVar23);
    puVar27 = auStack_1a8;
    if (cVar11 != '\0') {
      param_2[0x78] = param_2[0x78] + 1;
      puVar27 = auStack_1a8;
    }
    break;
  case 7:
    ppppuVar23 = local_f0;
    if (0xf < local_d8) {
      ppppuVar23 = local_f0[0];
    }
    bVar10 = FUN_1802cf930(ppppuVar23,(longlong)param_2 + 0xd1,0x100,&DAT_18058b643);
    puVar14 = (undefined8 *)(ulonglong)bVar10;
    puVar27 = auStack_1a8;
    break;
  case 8:
    ppppuVar23 = local_f0;
    if (0xf < local_d8) {
      ppppuVar23 = local_f0[0];
    }
    FUN_1802cf750(ppppuVar23);
    puVar27 = auStack_1a8;
    break;
  case 9:
    piVar1 = param_2 + 0x1b;
    iVar4 = *piVar1;
    ppppuVar23 = local_f0;
    if (0xf < local_d8) {
      ppppuVar23 = local_f0[0];
    }
    plVar16 = (longlong *)FUN_1802b9e90(&local_108,ppppuVar23);
    local_158[0] = (undefined8 *)*plVar16;
    local_158[1] = (undefined8 *)plVar16[1];
    local_148[0] = (undefined8 *)plVar16[2];
    FUN_1803e89e0(ppppuVar23);
    iVar3 = DAT_180cd1300;
    if (DAT_180cd1868 == piVar1) {
      LOCK();
      DAT_180cd1868 = (int *)0x0;
      UNLOCK();
      if ((DAT_180cd1300 != -1) &&
         ((DAT_180cd1300 != 1 || (cVar11 = FUN_1803e7af0(1), cVar11 == '\0')))) {
        *piVar1 = iVar3;
      }
    }
    bVar30 = DAT_180cd1360 == piVar1;
    cVar11 = FUN_1802d36c0("##bind",local_158,*piVar1,bVar30);
    puVar26 = auStack_1a8;
    if (cVar11 != '\0') {
      if (bVar30) {
        LOCK();
        DAT_180cd1360 = (int *)0x0;
        UNLOCK();
      }
      else {
        LOCK();
        DAT_180cd1868 = (int *)0x0;
        UNLOCK();
        LOCK();
        UNLOCK();
        DAT_180cd1360 = piVar1;
      }
    }
    iVar3 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar3 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
      puVar26 = auStack_1a8;
      puVar14 = (undefined8 *)(ulonglong)(*piVar1 != iVar4);
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar3 + -1;
      puVar14 = (undefined8 *)(ulonglong)(*piVar1 != iVar4);
    }
LAB_1803208f4:
    param_1 = *(undefined8 *)(puVar26 + 0x70);
    puVar27 = puVar26;
    break;
  case 10:
    ppppuVar23 = local_f0;
    if (0xf < local_d8) {
      ppppuVar23 = local_f0[0];
    }
    bVar10 = FUN_18031f900(param_2,ppppuVar23);
    puVar14 = (undefined8 *)(ulonglong)bVar10;
    puVar27 = auStack_1a8;
    break;
  case 0xb:
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    uVar28 = *(undefined8 *)(*(longlong *)(lVar13 + 0x14f8) + 0x2c8);
    pfVar15 = (float *)FUN_1802ba780(&local_108,DAT_1808ac8b0);
    puVar27 = auStack_1a8;
    if ((DAT_180960f48 & 0xff000000) != 0) {
      local_11c = pfVar15[1] + fVar9 + DAT_1808ac1f4;
      local_128 = CONCAT44(local_11c,*pfVar15 + DAT_1808ac1f4);
      local_120 = pfVar15[2] + DAT_1808ac1f4;
      local_180 = (float *)((ulonglong)local_180 & 0xffffffff00000000);
      local_188 = (undefined8 **)CONCAT44(local_188._4_4_,DAT_1808ac34c);
      FUN_1803fc600(uVar28,&local_128,2);
      puVar27 = auStack_1a8;
    }
    break;
  case 0xc:
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    fVar34 = DAT_1808ac838;
    uVar28 = *(undefined8 *)(*(longlong *)(lVar13 + 0x14f8) + 0x2c8);
    fVar35 = DAT_1808ac838;
    if (DAT_1808ac838 <= (float)param_2[0x8c]) {
      fVar35 = (float)param_2[0x8c];
    }
    pfVar15 = (float *)FUN_1802ba780(local_158);
    fVar6 = *pfVar15;
    fVar36 = pfVar15[1];
    fVar7 = pfVar15[2];
    fVar8 = pfVar15[3];
    local_108 = fVar6;
    fStack_104 = fVar36;
    fStack_100 = fVar7;
    fStack_fc = fVar8;
    local_f8 = *(undefined8 *)(pfVar15 + 4);
    auVar32._4_4_ = fVar7;
    auVar32._0_4_ = fVar7;
    auVar32._8_4_ = fVar7;
    auVar32._12_4_ = fVar7;
    auVar33._4_12_ = auVar32._4_12_;
    fVar31 = fVar7 - fVar6;
    local_130[0] = 8.0;
    pfVar15 = (float *)(param_2 + 0x8d);
    pfVar22 = local_130;
    if (fVar34 < *pfVar15 || fVar34 == *pfVar15) {
      pfVar22 = pfVar15;
    }
    fVar34 = fVar31;
    if (*pfVar22 <= fVar31) {
      fVar34 = *pfVar22;
    }
    fVar37 = fVar36 + DAT_1808ac710;
    auVar33._0_4_ = (fVar31 - fVar34) * DAT_1808ac1f4 + fVar6;
    fVar31 = (float)FUN_18053f0d0(auVar33._0_8_);
    local_138 = CONCAT44(fVar37,fVar31);
    local_158[1] = *(undefined8 **)(param_2 + 0x90);
    local_128 = CONCAT44(fVar37 + fVar35,fVar31 + fVar34);
    if (local_158[1] == (undefined8 *)0x0) {
      local_158[0] = _DAT_1808adcf0;
      local_158[1] = _UNK_1808adcf8;
      local_178 = DAT_1808ac34c;
      local_180 = (float *)((ulonglong)local_180._4_4_ << 0x20);
      local_188 = local_158;
      FUN_18036bcb0(uVar28,&local_138,&local_128,DAT_180960eec);
    }
    else {
      local_130[0] = 1.0;
      local_130[1] = 1.0;
      local_110 = (undefined8 *)0x0;
      local_158[0] = (undefined8 *)0x0;
      local_170 = (undefined8 **)CONCAT44(local_170._4_4_,fVar9);
      local_178 = -NAN;
      local_180 = local_130;
      local_188 = &local_110;
      FUN_1803febc0(uVar28,local_158,&local_138,&local_128);
    }
    lVar13 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    DAT_1809f5b44 = *(int *)(lVar13 + 4);
    DAT_1809f5b40 = *(int *)(*(longlong *)(lVar13 + 0x14f8) + 0x10);
    DAT_1809f5b48 = fVar36;
    DAT_1809f5b4c = fVar8;
    DAT_1809f5b50._0_4_ = fVar7;
    DAT_1809f5b50._4_4_ = fVar6;
    FUN_1802baa50(&local_108);
    puVar27 = auStack_1a8;
    break;
  case 0xd:
    fVar34 = DAT_1808ac838;
    if (DAT_1808ac838 <= (float)param_2[0x8c]) {
      fVar34 = (float)param_2[0x8c];
    }
    pfVar15 = (float *)FUN_1802ba780(local_158,fVar34);
    lVar13 = DAT_180ca0a50;
    fVar35 = *pfVar15;
    fVar6 = pfVar15[1];
    fVar36 = pfVar15[2];
    fVar7 = pfVar15[3];
    local_f8 = *(undefined8 *)(pfVar15 + 4);
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar13 = *(longlong *)(lVar13 + 0x14f8);
    *(float *)(lVar13 + 0x118) = fVar35;
    *(float *)(lVar13 + 0x11c) = fVar6;
    *(undefined1 *)(lVar13 + 0x159) = 1;
    local_128 = CONCAT44(fVar34,fVar36 - fVar35);
    local_108 = fVar35;
    fStack_104 = fVar6;
    fStack_100 = fVar36;
    fStack_fc = fVar7;
    FUN_180415e30("##custom",&local_128,3);
    cVar11 = FUN_1803dd930(0);
    lVar13 = DAT_180ca0a50;
    if (*(int *)(DAT_180ca0a50 + 0x1578) == 0) {
      bVar30 = false;
    }
    else {
      bVar30 = *(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8);
    }
    if (cVar11 != '\0') {
      puVar2 = (undefined4 *)(DAT_180ca0a50 + 0x1ee8);
      *(undefined4 *)(DAT_180ca0a50 + 0x1d08) = *puVar2;
      *(undefined4 *)(lVar13 + 0x1d04) = *puVar2;
      *(undefined2 *)(lVar13 + 0x1d0c) = 0;
    }
    plVar16 = (longlong *)FUN_18031f7e0(&local_128,cVar11,bVar30,0);
    local_158[0] = (undefined8 *)*plVar16;
    local_158[1] = (undefined8 *)plVar16[1];
    local_148[0] = (undefined8 *)CONCAT44(local_148[0]._4_4_,(int)plVar16[2]);
    *(undefined1 *)(*(longlong *)(lVar13 + 0x14f8) + 0xce) = 1;
    local_170 = local_158;
    local_180 = (float *)CONCAT44(local_180._4_4_,fVar36 - fVar35);
    local_188 = (undefined8 **)CONCAT44(local_188._4_4_,fVar6);
    local_178 = fVar34;
    FUN_180072d40(param_1,*param_2,*(undefined8 *)(*(longlong *)(lVar13 + 0x14f8) + 0x2c8),fVar35);
    lVar13 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    DAT_1809f5b44 = *(int *)(lVar13 + 4);
    DAT_1809f5b40 = *(int *)(*(longlong *)(lVar13 + 0x14f8) + 0x10);
    DAT_1809f5b48 = fVar6;
    DAT_1809f5b4c = fVar7;
    DAT_1809f5b50._0_4_ = fVar36;
    DAT_1809f5b50._4_4_ = fVar35;
    FUN_1802baa50(&local_108);
    puVar27 = auStack_1a8;
  }
  if (*(char *)(param_2 + 0x82) != '\0') {
    *(undefined8 *)(puVar27 + -8) = 0x180320907;
    FUN_1803e79e0();
  }
  lVar13 = DAT_180ca0a50;
  if (DAT_1809f5b44 != *(int *)(DAT_180ca0a50 + 4)) goto LAB_1803210db;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  fVar6 = DAT_1809f5b50._4_4_;
  fVar35 = (float)DAT_1809f5b50;
  fVar34 = DAT_1809f5b48;
  lVar21 = *(longlong *)(lVar13 + 0x14f8);
  if (DAT_1809f5b40 != *(int *)(lVar21 + 0x10)) goto LAB_1803210db;
  *(float *)(puVar27 + 0x70) = DAT_1809f5b50._4_4_;
  *(float *)(puVar27 + 0x74) = DAT_1809f5b48;
  fVar36 = DAT_1809f5b4c + DAT_1809f5b48;
  *(float *)(puVar27 + 0x78) = (float)DAT_1809f5b50;
  *(float *)(puVar27 + 0x7c) = fVar36;
  cVar11 = '\0';
  if (*(char *)(param_2 + 0x82) != '\0') {
    *(undefined1 *)(lVar21 + 0xce) = 1;
    lVar13 = *(longlong *)(lVar13 + 0x14f8);
    *(undefined4 *)(puVar27 + 0x28) = 0;
    *(float *)(puVar27 + 0x20) = fVar9;
    uVar28 = *(undefined8 *)(lVar13 + 0x2c8);
    *(undefined8 *)(puVar27 + -8) = 0x1803209c5;
    FUN_1803fe590(uVar28,puVar27 + 0x70,puVar27 + 0x78,0x960c0c0c);
    cVar11 = *(char *)(param_2 + 0x82);
  }
  if (*(float *)(DAT_180ca0a50 + 0x110) < fVar6 - *(float *)(DAT_180ca0a50 + 0xd04)) {
LAB_180321029:
    uVar28 = 0;
  }
  else {
    if (((*(float *)(DAT_180ca0a50 + 0x114) < fVar34 - *(float *)(DAT_180ca0a50 + 0xd08)) ||
        (*(float *)(DAT_180ca0a50 + 0xd04) + fVar35 <= *(float *)(DAT_180ca0a50 + 0x110))) ||
       (*(float *)(DAT_180ca0a50 + 0xd08) + fVar36 <= *(float *)(DAT_180ca0a50 + 0x114)))
    goto LAB_180321029;
    uVar28 = 1;
  }
  if ((cVar11 == '\0') || (*(longlong *)(param_2 + 0x88) == 0)) {
    if (*(longlong *)(param_2 + 0x7e) != 0) {
      *(undefined8 *)(puVar27 + -8) = 0x180321098;
      puVar17 = (undefined8 *)FUN_180320330(local_d0,param_1,param_2 + 0x7a);
      if (0xf < (ulonglong)puVar17[3]) {
        puVar17 = (undefined8 *)*puVar17;
      }
      ppppuVar23 = local_f0;
      if (0xf < local_d8) {
        ppppuVar23 = local_f0[0];
      }
      *(undefined4 *)(puVar27 + 0x28) = 0;
      *(undefined1 **)(puVar27 + 0x20) = puVar27 + 0x78;
      *(undefined8 *)(puVar27 + -8) = 0x1803210d1;
      FUN_1802b56a0(ppppuVar23,puVar17,uVar28,puVar27 + 0x70);
      *(undefined8 *)(puVar27 + -8) = 0x1803210db;
      FUN_18000f890(local_d0);
    }
  }
  else {
    plVar16 = (longlong *)(param_2 + 0x84);
    if (0xf < *(ulonglong *)(param_2 + 0x8a)) {
      plVar16 = (longlong *)*plVar16;
    }
    ppppuVar23 = local_f0;
    if (0xf < local_d8) {
      ppppuVar23 = local_f0[0];
    }
    *(undefined4 *)(puVar27 + 0x28) = 0;
    *(undefined1 **)(puVar27 + 0x20) = puVar27 + 0x78;
    *(undefined8 *)(puVar27 + -8) = 0x180321079;
    FUN_1802b56a0(ppppuVar23,plVar16,uVar28,puVar27 + 0x70);
  }
LAB_1803210db:
  if ((char)puVar14 != '\0') {
    *(undefined1 *)(param_2 + 0x77) = 1;
  }
  iVar4 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar4 < 2) {
    *(undefined8 *)(puVar27 + -8) = 0x18032110b;
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar4 + -1;
  }
  *(undefined8 *)(puVar27 + -8) = 0x18032111e;
  FUN_18000f890(local_f0);
  *(undefined8 *)(puVar27 + -8) = 0x18032112a;
  return;
}



/* ===== 1803211b0 FUN_1803211b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803211b0(void)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 uVar16;
  float *pfVar17;
  longlong lVar18;
  longlong *plVar19;
  uint7 uVar21;
  longlong lVar20;
  undefined8 uVar22;
  longlong *plVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_258 [32];
  float local_238;
  float local_230;
  float local_228;
  undefined8 *local_220;
  char local_218;
  float local_214;
  undefined8 local_210;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  undefined8 local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined *local_198;
  undefined1 local_190 [24];
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
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_258;
  local_198 = &DAT_1809e8e50;
  iVar10 = FUN_1804e4d70(&DAT_1809e8e50);
  fVar7 = DAT_1808acae0;
  uVar6 = DAT_1808ac838;
  fVar5 = DAT_1808ac1f4;
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  fVar26 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
  fVar27 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14);
  local_218 = DAT_18091a190;
  local_1b8 = DAT_180cd0278;
  local_1f8 = fVar26;
  local_1f4 = fVar27;
  if (DAT_180cd0270 != DAT_180cd0278) {
    uVar22 = 0x311bb;
    lVar18 = DAT_180ca0a50;
    plVar19 = DAT_180cd0278;
    plVar23 = DAT_180cd0270;
    do {
      cVar8 = local_218;
      pfVar2 = *(float **)(*plVar23 + 0x70);
      pfVar17 = *(float **)(*plVar23 + 0x68);
      if (pfVar17 != pfVar2) {
        do {
          if ((pfVar17[1] == 1.96182e-44) &&
             (cVar9 = FUN_180097d90(*plVar23,pfVar17), cVar9 != '\0')) {
            fVar29 = DAT_1808aca54;
            if (DAT_1808aca54 <= pfVar17[0x8d]) {
              fVar29 = pfVar17[0x8d];
            }
            fVar30 = DAT_1808ac950;
            if (DAT_1808ac950 <= pfVar17[0x8c]) {
              fVar30 = pfVar17[0x8c];
            }
            pfVar1 = pfVar17 + 0x92;
            if ((*pfVar1 < 0.0) || (fVar25 = pfVar17[0x93], fVar28 = *pfVar1, fVar25 < 0.0)) {
              *pfVar1 = 80.0;
              uVar11 = (uint)*pfVar17 & 0x80000007;
              if ((int)uVar11 < 0) {
                uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
              }
              fVar25 = (float)(int)uVar11 * DAT_1808ac980 + fVar7;
              pfVar17[0x93] = fVar25;
              fVar28 = fVar7;
            }
            pfVar15 = pfVar17 + 0x93;
            local_208 = 0.0;
            local_204 = fVar26 - fVar29;
            pfVar14 = &local_208;
            if (0.0 <= fVar26 - fVar29) {
              pfVar14 = &local_204;
            }
            pfVar12 = &local_214;
            if (0.0 <= fVar28) {
              pfVar12 = pfVar1;
            }
            if (*pfVar14 <= fVar28 && fVar28 != *pfVar14) {
              pfVar12 = pfVar14;
            }
            fVar26 = *pfVar12;
            *pfVar1 = fVar26;
            local_200 = 0.0;
            local_1fc = fVar27 - fVar30;
            pfVar14 = &local_200;
            if (0.0 <= fVar27 - fVar30) {
              pfVar14 = &local_1fc;
            }
            local_214 = 0.0;
            pfVar12 = &local_214;
            if (0.0 <= fVar25) {
              pfVar12 = pfVar15;
            }
            if (*pfVar14 <= fVar25 && fVar25 != *pfVar14) {
              pfVar12 = pfVar14;
            }
            fVar27 = *pfVar12;
            *pfVar15 = fVar27;
            uVar16 = 0x313bb;
            if (cVar8 != '\0') {
              uVar16 = (int)uVar22;
            }
            *(float *)(lVar18 + 0x1f48) = fVar26;
            *(float *)(lVar18 + 0x1f4c) = fVar27;
            *(undefined8 *)(lVar18 + 0x1f50) = 0;
            *(undefined4 *)(lVar18 + 0x1f3c) = 1;
            *(uint *)(lVar18 + 0x1f38) = *(uint *)(lVar18 + 0x1f38) | 3;
            *(float *)(lVar18 + 0x1f58) = fVar29;
            *(float *)(lVar18 + 0x1f5c) = fVar30;
            *(undefined4 *)(lVar18 + 8000) = 1;
            local_1e8 = 0;
            FUN_1803d89a0(2,&local_1e8);
            FUN_1803d8870(4,0);
            local_178 = 0;
            uStack_170 = 0;
            local_168 = 0;
            uStack_160 = 0;
            local_158 = 0;
            uStack_150 = 0;
            local_148 = 0;
            uStack_140 = 0;
            local_138 = 0;
            uStack_130 = 0;
            local_128 = 0;
            uStack_120 = 0;
            local_118 = 0;
            uStack_110 = 0;
            local_108 = 0;
            uStack_100 = 0;
            local_238 = *pfVar17;
            plVar19 = plVar23;
            if (0xf < (ulonglong)((longlong *)*plVar23)[3]) {
              plVar19 = (longlong *)*plVar23;
            }
            snprintf(&local_178,0x80,"##wl_lua_%s_%d",*plVar19);
            cVar9 = FUN_1803e4f20(&local_178,0,uVar16);
            FUN_1803d8a40(2);
            lVar18 = DAT_180ca0a50;
            if (cVar9 != '\0') {
              *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
              lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x14f8) + 0x2c8);
              fVar26 = *pfVar15;
              fVar27 = *pfVar1;
              local_210 = *(undefined8 *)pfVar1;
              uVar4 = *(undefined8 *)pfVar1;
              uVar22 = *(undefined8 *)pfVar1;
              fVar28 = fVar26 + fVar30;
              fVar25 = fVar27 + fVar29;
              local_228 = (float)DAT_1808ac27c;
              local_230 = (float)DAT_1808ac428;
              local_238 = (float)DAT_1808ac810;
              local_1f0 = fVar25;
              local_1ec = fVar28;
              FUN_1802b48f0(lVar18,&local_210,&local_1f0,uVar6);
              local_230 = 0.0;
              local_238 = (float)uVar6;
              FUN_1803fe590(lVar18,&local_210,&local_1f0,DAT_180960ee0);
              uVar11 = DAT_180960eec;
              if ((DAT_180960eec & 0xff000000) != 0) {
                local_238 = 0.0;
                if ((*(byte *)(lVar18 + 0x30) & 1) == 0) {
                  local_1d0 = fVar25 - DAT_1808ac1e0;
                  local_1cc = fVar28 - DAT_1808ac1e0;
                  pfVar14 = &local_1d0;
                  pfVar15 = &local_1c8;
                  local_1c8 = fVar27 + fVar5;
                  local_1c4 = fVar26 + fVar5;
                }
                else {
                  local_1e0 = fVar25 - fVar5;
                  local_1dc = fVar28 - fVar5;
                  pfVar14 = &local_1e0;
                  pfVar15 = &local_1d8;
                  local_1d8 = fVar27 + fVar5;
                  local_1d4 = fVar26 + fVar5;
                }
                FUN_1803fe160(lVar18,pfVar15,pfVar14,uVar6);
                local_230 = 7.17465e-43;
                local_238 = (float)DAT_1808ac34c;
                FUN_1803fc600(lVar18,*(undefined8 *)(lVar18 + 0x58),*(undefined4 *)(lVar18 + 0x50),
                              uVar11);
                *(undefined4 *)(lVar18 + 0x50) = 0;
              }
              lVar3 = DAT_180ca0a50;
              *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
              lVar3 = *(longlong *)(lVar3 + 0x14f8);
              *(undefined8 *)(lVar3 + 0x118) = uVar4;
              *(undefined1 *)(lVar3 + 0x159) = 1;
              local_210 = uVar22;
              local_1c0 = fVar29;
              local_1bc = fVar30;
              FUN_180415e30("##body",&local_1c0,3);
              cVar9 = FUN_1803dd930(0);
              lVar3 = DAT_180ca0a50;
              iVar10 = *(int *)(DAT_180ca0a50 + 0x1578);
              uVar21 = (uint7)(uint3)((uint)iVar10 >> 8);
              if (iVar10 == 0) {
                bVar24 = false;
LAB_180321751:
                lVar20 = (ulonglong)uVar21 << 8;
              }
              else {
                bVar24 = iVar10 == *(int *)(DAT_180ca0a50 + 0x1ee8);
                if (!bVar24) goto LAB_180321751;
                lVar20 = (ulonglong)uVar21 << 8;
                if ((*(char *)(DAT_180ca0a50 + 0x119) != '\0') &&
                   (0.0 <= *(float *)(DAT_180ca0a50 + 0xbc8))) {
                  *(ulonglong *)pfVar1 =
                       CONCAT44((float)((ulonglong)*(undefined8 *)pfVar1 >> 0x20) +
                                (float)((ulonglong)*(undefined8 *)(DAT_180ca0a50 + 0xfc) >> 0x20),
                                (float)*(undefined8 *)pfVar1 +
                                (float)*(undefined8 *)(DAT_180ca0a50 + 0xfc));
                  *(undefined1 *)(pfVar17 + 0x77) = 1;
                  lVar20 = CONCAT71(uVar21,1);
                }
              }
              if (cVar9 != '\0') {
                *(undefined4 *)(lVar3 + 0x1d08) = *(undefined4 *)(lVar3 + 0x1ee8);
                *(undefined4 *)(lVar3 + 0x1d04) = *(undefined4 *)(lVar3 + 0x1ee8);
                *(undefined2 *)(lVar3 + 0x1d0c) = 0;
              }
              puVar13 = (undefined8 *)FUN_18031f7e0(local_190,cVar9,bVar24,lVar20);
              local_1b0 = *puVar13;
              uStack_1a8 = puVar13[1];
              local_1a0 = *(undefined4 *)(puVar13 + 2);
              local_220 = &local_1b0;
              local_238 = fVar26;
              local_230 = fVar29;
              local_228 = fVar30;
              FUN_180072d40(*plVar23,*pfVar17,lVar18,fVar27);
            }
            FUN_1803e75b0();
            uVar22 = 0x311bb;
            lVar18 = DAT_180ca0a50;
            fVar26 = local_1f8;
            fVar27 = local_1f4;
          }
          pfVar17 = pfVar17 + 0x96;
        } while (pfVar17 != pfVar2);
        plVar19 = local_1b8;
      }
      plVar23 = plVar23 + 1;
    } while (plVar23 != plVar19);
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 180321890 FUN_180321890 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180321890(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  size_t sVar3;
  size_t sVar4;
  code *pcVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auStack_f8 [40];
  ulonglong local_d0;
  ulonglong uStack_c8;
  ulonglong local_c0;
  ulonglong uStack_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  ulonglong local_50;
  
  uVar6 = DAT_180cd048f;
  local_50 = DAT_180919500 ^ (ulonglong)auStack_f8;
  DAT_180cd048f = 1;
  puVar16 = *(undefined8 **)(param_1 + 0x20);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  while( true ) {
    if (puVar16 == puVar1) {
      DAT_180cd048f = uVar6;
      return;
    }
    lVar15 = *(longlong *)(param_1 + 0x68);
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (lVar15 != lVar2) break;
LAB_180321ba2:
    puVar16 = puVar16 + 4;
  }
  uVar12 = puVar16[3];
  sVar3 = puVar16[2];
LAB_180321900:
  puVar11 = (undefined8 *)(lVar15 + 8);
  if (uVar12 < 0x10) {
    puVar14 = puVar16;
  }
  else {
    puVar14 = (undefined8 *)*puVar16;
  }
  sVar4 = *(size_t *)(lVar15 + 0x18);
  if (0xf < *(ulonglong *)(lVar15 + 0x20)) {
    puVar11 = (undefined8 *)*puVar11;
  }
  if ((sVar4 != sVar3) || ((sVar4 != 0 && (iVar8 = memcmp(puVar11,puVar14,sVar4), iVar8 != 0))))
  goto LAB_180321988;
  puVar11 = (undefined8 *)(lVar15 + 0x28);
  puVar14 = &DAT_1809f6f38;
  if (0xf < DAT_1809f6f50) {
    puVar14 = DAT_1809f6f38;
  }
  sVar4 = *(size_t *)(lVar15 + 0x38);
  if (0xf < *(ulonglong *)(lVar15 + 0x40)) {
    puVar11 = (undefined8 *)*puVar11;
  }
  if ((sVar4 != DAT_1809f6f48) ||
     ((((sVar4 != 0 && (iVar8 = memcmp(puVar11,puVar14,sVar4), iVar8 != 0)) ||
       (*(int *)(lVar15 + 4) == 0xe)) || (cVar7 = FUN_180097d90(param_1,lVar15), cVar7 == '\0'))))
  goto LAB_180321988;
  puVar11 = puVar16;
  if (0xf < uVar12) {
    puVar11 = (undefined8 *)*puVar16;
  }
  FUN_1802b9110(puVar11);
  uVar9 = FUN_180073a70(local_70,param_1,&DAT_1806e08bc);
  uVar9 = FUN_1800667a0(local_90,uVar9,&DAT_1809f6f38);
  puVar10 = (ulonglong *)FUN_1800134a0(uVar9,&DAT_1806e08bc,1);
  local_d0 = *puVar10;
  uStack_c8 = puVar10[1];
  local_c0 = puVar10[2];
  uStack_b8 = puVar10[3];
  puVar10[2] = 0;
  puVar10[3] = 0xf;
  *(undefined1 *)puVar10 = 0;
  puVar11 = (undefined8 *)FUN_1800667a0(local_b0,&local_d0,puVar16);
  if (0xf < (ulonglong)puVar11[3]) {
    puVar11 = (undefined8 *)*puVar11;
  }
  FUN_1803e89e0(puVar11);
  FUN_18000f890(local_b0);
  if (0xf < uStack_b8) {
    uVar13 = uStack_b8 + 1;
    uVar12 = local_d0;
    if (0xfff < uVar13) {
      uVar12 = *(ulonglong *)(local_d0 - 8);
      if (0x1f < (local_d0 - uVar12) - 8) {
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar13 = uStack_b8 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar12,uVar13);
  }
  local_c0 = 0;
  uStack_b8 = 0xf;
  local_d0 = local_d0 & 0xffffffffffffff00;
  FUN_18000f890(local_90);
  FUN_18000f890(local_70);
  lVar2 = *(longlong *)(param_1 + 0x70);
  for (lVar15 = *(longlong *)(param_1 + 0x68); lVar15 != lVar2; lVar15 = lVar15 + 600) {
    puVar11 = (undefined8 *)(lVar15 + 8);
    if ((ulonglong)puVar16[3] < 0x10) {
      puVar14 = puVar16;
    }
    else {
      puVar14 = (undefined8 *)*puVar16;
    }
    sVar3 = *(size_t *)(lVar15 + 0x18);
    if (0xf < *(ulonglong *)(lVar15 + 0x20)) {
      puVar11 = (undefined8 *)*puVar11;
    }
    if ((sVar3 == puVar16[2]) &&
       ((sVar3 == 0 || (iVar8 = memcmp(puVar11,puVar14,sVar3), iVar8 == 0)))) {
      puVar11 = (undefined8 *)(lVar15 + 0x28);
      puVar14 = &DAT_1809f6f38;
      if (0xf < DAT_1809f6f50) {
        puVar14 = DAT_1809f6f38;
      }
      sVar3 = *(size_t *)(lVar15 + 0x38);
      if (0xf < *(ulonglong *)(lVar15 + 0x40)) {
        puVar11 = (undefined8 *)*puVar11;
      }
      if ((((sVar3 == DAT_1809f6f48) &&
           ((sVar3 == 0 || (iVar8 = memcmp(puVar11,puVar14,sVar3), iVar8 == 0)))) &&
          (*(int *)(lVar15 + 4) != 0xe)) && (cVar7 = FUN_180097d90(param_1,lVar15), cVar7 != '\0'))
      {
        FUN_180320490(param_1,lVar15);
      }
    }
  }
  iVar8 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar8 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar8 + -1;
  }
  goto LAB_180321ba2;
LAB_180321988:
  lVar15 = lVar15 + 600;
  if (lVar15 == lVar2) goto LAB_180321ba2;
  goto LAB_180321900;
}



/* ===== 180321bf0 FUN_180321bf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180321bf0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint7 uVar13;
  longlong unaff_RBP;
  char *pcVar14;
  undefined1 auStack_68 [32];
  undefined8 ****local_48;
  undefined8 uStack_40;
  size_t local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  iVar5 = DAT_1811076c0;
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  switch(DAT_1811076c0) {
  case 0:
    pcVar14 = "rage";
    break;
  case 1:
    pcVar14 = "legit";
    break;
  case 2:
    pcVar14 = "players";
    break;
  case 3:
    pcVar14 = "world";
    break;
  case 4:
    pcVar14 = "inventory";
    break;
  case 5:
    pcVar14 = "miscellaneous";
    break;
  default:
    pcVar14 = "";
  }
  local_38 = 0;
  local_30 = 0;
  local_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  sVar6 = strlen(pcVar14);
  FUN_1800133a0(&local_48,pcVar14,sVar6);
  uVar7 = local_30;
  ppppuVar2 = local_48;
  if (local_38 == 0) {
    uVar12 = (ulonglong)param_1 & 0xffffffffffffff00;
    goto LAB_180321e1d;
  }
  uVar12 = param_1[3];
  sVar6 = param_1[2];
  ppppuVar10 = &local_48;
  if (0xf < local_30) {
    ppppuVar10 = local_48;
  }
  puVar8 = param_1;
  if (0xf < uVar12) {
    puVar8 = (undefined8 *)*param_1;
  }
  uVar13 = (uint7)((ulonglong)param_1 >> 8);
  if (sVar6 == local_38) {
    if (sVar6 != 0) {
      iVar4 = memcmp(puVar8,ppppuVar10,sVar6);
      if (iVar4 == 0) {
        uVar12 = CONCAT71(uVar13,1);
        goto LAB_180321e1d;
      }
      goto LAB_180321d03;
    }
  }
  else {
LAB_180321d03:
    if (iVar5 != 0) {
      if (iVar5 == 1) {
        if (0xf < uVar12) {
          param_1 = (undefined8 *)*param_1;
        }
        if (sVar6 != 8) {
          uVar12 = (ulonglong)param_1 & 0xffffffffffffff00;
          goto LAB_180321e1d;
        }
        pcVar14 = "legitbot";
      }
      else {
        if (iVar5 == 4) {
          puVar8 = param_1;
          if (0xf < uVar12) {
            puVar8 = (undefined8 *)*param_1;
          }
          if ((sVar6 != 5) || (iVar5 = memcmp(puVar8,"skins",5), iVar5 != 0)) {
            if (0xf < uVar12) {
              param_1 = (undefined8 *)*param_1;
            }
            if (sVar6 == 0xb) {
              pcVar14 = "skinchanger";
              goto LAB_180321db3;
            }
            goto LAB_180321e02;
          }
          goto LAB_180321dc2;
        }
        if (iVar5 == 5) {
          if (0xf < uVar12) {
            param_1 = (undefined8 *)*param_1;
          }
          if (sVar6 != 4) {
            uVar12 = (ulonglong)param_1 & 0xffffffffffffff00;
            goto LAB_180321e1d;
          }
          pcVar14 = "misc";
        }
        else {
          if (1 < iVar5 - 2U) {
            uVar12 = (ulonglong)uVar13 << 8;
            goto LAB_180321e1d;
          }
          if (0xf < uVar12) {
            param_1 = (undefined8 *)*param_1;
          }
          if (sVar6 != 7) goto LAB_180321e02;
          pcVar14 = "visuals";
        }
      }
      iVar5 = memcmp(param_1,pcVar14,sVar6);
      uVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),iVar5 == 0);
      goto LAB_180321e1d;
    }
    puVar8 = param_1;
    if (0xf < uVar12) {
      puVar8 = (undefined8 *)*param_1;
    }
    if ((sVar6 != 7) || (iVar5 = memcmp(puVar8,"ragebot",7), iVar5 != 0)) {
      if (0xf < uVar12) {
        param_1 = (undefined8 *)*param_1;
      }
      if (sVar6 == 6) {
        pcVar14 = "aimbot";
LAB_180321db3:
        iVar5 = memcmp(param_1,pcVar14,sVar6);
        if (iVar5 == 0) goto LAB_180321dc2;
      }
LAB_180321e02:
      uVar12 = (ulonglong)param_1 & 0xffffffffffffff00;
      goto LAB_180321e1d;
    }
  }
LAB_180321dc2:
  uVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_180321e1d:
  if (0xf < uVar7) {
    uVar11 = uVar7 + 1;
    ppppuVar10 = ppppuVar2;
    if (0xfff < uVar11) {
      ppppuVar10 = (undefined8 ****)ppppuVar2[-1];
      if (0x1f < (ulonglong)((longlong)ppppuVar2 + (-8 - (longlong)ppppuVar10))) {
        lVar9 = 5;
        pcVar1 = (code *)swi(0x29);
        uVar3 = (*pcVar1)();
        *(char *)(lVar9 + 0x1c) = *(char *)(lVar9 + 0x1c) + (char)uVar3;
        *(char *)(uVar12 + 0x1c) = *(char *)(uVar12 + 0x1c) + (char)uVar11;
        *(char *)(unaff_RBP + 0x1c) = *(char *)(unaff_RBP + 0x1c) + (char)((ushort)uVar3 >> 8);
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      uVar11 = uVar7 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar10,uVar11);
  }
  return uVar12 & 0xff;
}



/* ===== 180321ea0 FUN_180321ea0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180321ea0(void)

{
  longlong lVar1;
  longlong lVar2;
  size_t sVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 ****_Buf2;
  void *_Buf2_00;
  uint uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined1 local_128;
  uint local_124;
  longlong *local_120;
  undefined *local_118;
  ulonglong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 ****local_d0 [2];
  size_t local_c0;
  ulonglong local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_148;
  uVar11 = 0;
  local_124 = 0;
  if (((DAT_180cd0f08 != '\0') && (DAT_1809f72e2 != '\0')) && (DAT_1809f7318 != 0)) {
    local_118 = &DAT_1809e8e50;
    iVar6 = FUN_1804e4d70(&DAT_1809e8e50);
    puVar13 = auStack_148;
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809e8e9c == 0x7fffffff) {
LAB_180322298:
      DAT_1809e8e9c = DAT_1809e8e9c + -1;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar13 + -8) = &UNK_1803222aa;
      FUN_1804e4a90(6);
    }
    local_128 = DAT_180cd048f;
    DAT_180cd048f = 1;
    local_120 = DAT_180cd0278;
    plVar17 = DAT_180cd0270;
    if (DAT_180cd0270 != DAT_180cd0278) {
      do {
        lVar1 = *(longlong *)(*plVar17 + 0x58);
        for (lVar14 = *(longlong *)(*plVar17 + 0x50); lVar14 != lVar1; lVar14 = lVar14 + 0x40) {
          cVar5 = FUN_180321bf0(lVar14);
          if ((cVar5 != '\0') && (*(longlong *)(lVar14 + 0x30) == DAT_1809f7318)) {
            uVar15 = 0;
            if (*(longlong *)(lVar14 + 0x30) != 0) {
              do {
                if (*(ulonglong *)(lVar14 + 0x38) < 0x10) {
                  lVar12 = lVar14 + 0x20;
                }
                else {
                  lVar12 = *(longlong *)(lVar14 + 0x20);
                }
                puVar9 = &DAT_1809f7308;
                if (0xf < DAT_1809f7320) {
                  puVar9 = DAT_1809f7308;
                }
                iVar6 = tolower((uint)*(byte *)((longlong)puVar9 + uVar15));
                iVar7 = tolower((uint)*(byte *)(lVar12 + uVar15));
                if (iVar7 != iVar6) goto LAB_18032223a;
                uVar15 = uVar15 + 1;
              } while (uVar15 < *(ulonglong *)(lVar14 + 0x30));
              uVar11 = local_124;
            }
            uStack_108 = 0;
            local_100 = 1;
            local_f8 = 0xf;
            local_110 = (ulonglong)(DAT_1806dfae0 & 0xff);
            FUN_1800667a0(local_d0,&local_110,lVar14);
            if (0xf < local_f8) {
              uVar10 = local_f8 + 1;
              uVar15 = local_110;
              if (0xfff < uVar10) {
                uVar15 = *(ulonglong *)(local_110 - 8);
                if (0x1f < (local_110 - uVar15) - 8) {
                  pcVar4 = (code *)swi(0x29);
                  DAT_1809e8e9c = (*pcVar4)(5);
                  puVar13 = auStack_140;
                  goto LAB_180322298;
                }
                uVar10 = local_f8 + 0x28;
              }
              thunk_FUN_1803d64e0(uVar15,uVar10);
            }
            local_100 = 0;
            local_f8 = 0xf;
            local_110 = local_110 & 0xffffffffffffff00;
            uVar8 = FUN_180073a70(local_70,*plVar17,&DAT_1806e08bc);
            uVar8 = FUN_1800667a0(local_90,uVar8,local_d0);
            puVar9 = (undefined8 *)FUN_1800134a0(uVar8,&DAT_1806e08bc,1);
            local_f0 = *puVar9;
            uStack_e8 = puVar9[1];
            local_e0 = puVar9[2];
            uStack_d8 = puVar9[3];
            puVar9[2] = 0;
            puVar9[3] = 0xf;
            *(undefined1 *)puVar9 = 0;
            local_124 = uVar11 | 1;
            puVar9 = (undefined8 *)FUN_1800667a0(local_b0,&local_f0,lVar14 + 0x20);
            if (0xf < (ulonglong)puVar9[3]) {
              puVar9 = (undefined8 *)*puVar9;
            }
            FUN_1803e89e0(puVar9);
            FUN_18000f890(local_b0);
            FUN_18000f890(&local_f0);
            FUN_18000f890(local_90);
            FUN_18000f890(local_70);
            lVar2 = *(longlong *)(*plVar17 + 0x70);
            for (lVar12 = *(longlong *)(*plVar17 + 0x68); lVar12 != lVar2; lVar12 = lVar12 + 600) {
              puVar9 = (undefined8 *)(lVar12 + 0x28);
              _Buf2 = local_d0;
              if (0xf < local_b8) {
                _Buf2 = local_d0[0];
              }
              sVar3 = *(size_t *)(lVar12 + 0x38);
              if (0xf < *(ulonglong *)(lVar12 + 0x40)) {
                puVar9 = (undefined8 *)*puVar9;
              }
              if ((sVar3 == local_c0) &&
                 ((sVar3 == 0 || (iVar6 = memcmp(puVar9,_Buf2,sVar3), iVar6 == 0)))) {
                puVar9 = (undefined8 *)(lVar12 + 8);
                if (*(ulonglong *)(lVar14 + 0x38) < 0x10) {
                  _Buf2_00 = (void *)(lVar14 + 0x20);
                }
                else {
                  _Buf2_00 = *(void **)(lVar14 + 0x20);
                }
                sVar3 = *(size_t *)(lVar12 + 0x18);
                if (0xf < *(ulonglong *)(lVar12 + 0x20)) {
                  puVar9 = (undefined8 *)*puVar9;
                }
                if ((sVar3 == *(size_t *)(lVar14 + 0x30)) &&
                   (((sVar3 == 0 || (iVar6 = memcmp(puVar9,_Buf2_00,sVar3), iVar6 == 0)) &&
                    (*(int *)(lVar12 + 4) != 0xe)))) {
                  lVar16 = *plVar17;
                  cVar5 = FUN_180097d90(lVar16,lVar12);
                  if (cVar5 != '\0') {
                    FUN_180320490(lVar16,lVar12);
                  }
                }
              }
            }
            iVar6 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
            if (iVar6 < 2) {
              FUN_1803ebc00("Calling PopID() too many times!");
            }
            else {
              *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar6 + -1;
            }
            FUN_18000f890(local_d0);
LAB_18032223a:
            uVar11 = local_124;
          }
        }
        plVar17 = plVar17 + 1;
      } while (plVar17 != local_120);
    }
    DAT_180cd048f = local_128;
    FUN_1804e4e90(&DAT_1809e8e50);
  }
  return;
}



/* ===== 1803222c0 FUN_1803222c0 ===== */

bool FUN_1803222c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar2 = DAT_181107048;
  iVar5 = *(int *)(DAT_180ca0a50 + 4);
  if (DAT_1809f6f34 != iVar5) {
    lVar7 = DAT_181107040;
    DAT_1809f6f34 = iVar5;
    if (DAT_181107040 != DAT_181107048) {
      do {
        FUN_18000f890(lVar7);
        lVar7 = lVar7 + 0x20;
      } while (lVar7 != lVar2);
      DAT_181107048 = DAT_181107040;
    }
    iVar5 = FUN_1804e4d70(&DAT_1809e8e50);
    plVar3 = DAT_180cd0278;
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809e8e9c == 0x7fffffff) {
      DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    if (DAT_180cd0270 != DAT_180cd0278) {
      plVar8 = DAT_180cd0270;
      uVar4 = DAT_1806dfae4;
      do {
        lVar2 = *(longlong *)(*plVar8 + 0x58);
        for (lVar7 = *(longlong *)(*plVar8 + 0x50); lVar7 != lVar2; lVar7 = lVar7 + 0x40) {
          if (*(longlong *)(lVar7 + 0x30) != 0) {
            plVar1 = (longlong *)(lVar7 + 0x20);
            if (*(ulonglong *)(lVar7 + 0x38) < 0x10) {
              plVar6 = plVar1;
            }
            else {
              plVar6 = (longlong *)*plVar1;
            }
            if (*(char *)plVar6 == (char)uVar4) {
              if (DAT_181107048 == DAT_181107050) {
                FUN_180028f00(&DAT_181107040,DAT_181107048);
              }
              else {
                FUN_180024b50(DAT_181107048,plVar1);
                DAT_181107048 = DAT_181107048 + 0x20;
              }
              uVar4 = DAT_1806dfae4;
            }
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar3);
    }
    FUN_1804e4e90(&DAT_1809e8e50);
  }
  lVar2 = DAT_181107048;
  if (DAT_181107040 == DAT_181107048) {
    return false;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return true;
  }
  lVar7 = FUN_180026970(DAT_181107040,DAT_181107048,param_1);
  return lVar7 != lVar2;
}



/* ===== 180322470 FUN_180322470 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180322470(char *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  char cVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  byte bVar20;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_a8;
  bVar16 = false;
  local_88 = 0;
  if (((DAT_180cd0f0c == '\0') && (DAT_180cd0f09 == '\0')) && (DAT_1809f72e0 != '\0')) {
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    local_68 = 0;
    bVar16 = true;
    local_88 = 1;
    cVar9 = FUN_1803222c0(&local_68);
    if (cVar9 == '\0') goto LAB_1803224ec;
    bVar6 = false;
  }
  else {
LAB_1803224ec:
    bVar6 = true;
  }
  if (bVar16) {
    FUN_18000f890(&local_68);
  }
  bVar20 = DAT_180cd040c;
  puVar18 = auStack_a8;
  if (((bVar6) || (puVar18 = auStack_a8, param_1 == (char *)0x0)) ||
     (pcVar11 = param_1, puVar18 = auStack_a8, param_1 == (char *)0xffffffffffffffff))
  goto LAB_180322739;
  do {
    if ((*pcVar11 == '\0') || ((*pcVar11 == '#' && (pcVar11[1] == '#')))) break;
    pcVar11 = pcVar11 + 1;
  } while (pcVar11 != (char *)0xffffffffffffffff);
  puVar18 = auStack_a8;
  if (pcVar11 == param_1) goto LAB_180322739;
  uVar14 = (ulonglong)DAT_180cd040c;
  DAT_180cd040c = 1;
  local_80 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  cVar9 = FUN_180312e80(&local_80);
  puVar18 = auStack_a8;
  if (cVar9 == '\0') {
LAB_1803226d7:
    DAT_180cd040c = bVar20;
  }
  else {
    puVar12 = (undefined4 *)FUN_1802b3fe0(&local_68,param_1);
    if (puStack_78 == local_70) {
      FUN_18009bb20(&local_80,puStack_78,puVar12);
    }
    else {
      *puStack_78 = 0;
      puStack_78[1] = 0;
      puStack_78[2] = 0;
      puStack_78[3] = 0;
      uVar2 = puVar12[1];
      uVar3 = puVar12[2];
      uVar4 = puVar12[3];
      *(undefined4 *)puStack_78 = *puVar12;
      *(undefined4 *)((longlong)puStack_78 + 4) = uVar2;
      *(undefined4 *)(puStack_78 + 1) = uVar3;
      *(undefined4 *)((longlong)puStack_78 + 0xc) = uVar4;
      uVar13 = *(undefined8 *)(puVar12 + 6);
      puStack_78[2] = *(undefined8 *)(puVar12 + 4);
      puStack_78[3] = uVar13;
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar12 + 6) = 0xf;
      *(undefined1 *)puVar12 = 0;
      puStack_78 = puStack_78 + 4;
    }
    FUN_18000f890(&local_68);
    DAT_180cd040c = bVar20;
    FUN_18031a140(&local_48,&local_80);
    uVar13 = FUN_180066a20(&local_68,&DAT_1806dfae4,&local_48);
    local_88 = 2;
    cVar9 = FUN_1803222c0(uVar13);
    if (cVar9 == '\0') {
LAB_18032265f:
      bVar16 = true;
    }
    else {
      iVar10 = FUN_1804e4d70(&DAT_1809f5a50);
      uVar7 = DAT_181107658;
      puVar19 = auStack_a8;
      if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f5a9c == 0x7fffffff) goto LAB_180322764;
      uVar14 = FUN_180026970(DAT_181107650,DAT_181107658,&local_48);
      FUN_1804e4e90(&DAT_1809f5a50);
      if (uVar14 != uVar7) goto LAB_18032265f;
      bVar16 = false;
    }
    bVar20 = (byte)uVar14;
    FUN_18000f890(&local_68);
    if ((!bVar16) && (cVar9 = FUN_1802badc0("##script_group",param_1), cVar9 != '\0')) {
      FUN_1802bc580();
    }
    if (0xf < local_30) {
      uVar14 = local_30 + 1;
      lVar5 = CONCAT71(uStack_47,local_48);
      lVar15 = lVar5;
      if (0xfff < uVar14) {
        lVar15 = *(longlong *)(lVar5 + -8);
        if (0x1f < (lVar5 - lVar15) - 8U) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar18 = auStack_a0;
          goto LAB_1803226d7;
        }
        uVar14 = local_30 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar15,uVar14);
    }
    puVar18 = auStack_a8;
    local_38 = 0;
    local_30 = 0xf;
    local_48 = 0;
  }
  puVar8 = puStack_78;
  puVar17 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    for (; puVar17 != puVar8; puVar17 = puVar17 + 4) {
      *(undefined8 *)(puVar18 + -8) = 0x1803226f8;
      FUN_18000f890(puVar17);
    }
    uVar14 = (longlong)local_70 - (longlong)local_80 & 0xffffffffffffffe0;
    puVar17 = local_80;
    if (0xfff < uVar14) {
      puVar17 = (undefined8 *)local_80[-1];
      if (0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)puVar17))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar19 = puVar18 + 8;
LAB_180322764:
        DAT_1809f5a9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar19 + -8) = &UNK_180322778;
        FUN_1804e4a90(6);
      }
      uVar14 = uVar14 + 0x27;
    }
    *(undefined8 *)(puVar18 + -8) = 0x180322739;
    thunk_FUN_1803d64e0(puVar17,uVar14);
  }
LAB_180322739:
  *(undefined8 *)(puVar18 + -8) = 0x180322745;
  return;
}



/* ===== 180322790 FUN_180322790 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180322790(void)

{
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 ****ppppuVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  longlong *plVar19;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [24];
  undefined1 local_168;
  undefined8 local_160;
  undefined *local_158;
  undefined8 ****local_150;
  undefined8 uStack_148;
  size_t local_140;
  ulonglong local_138;
  ulonglong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulonglong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 ****local_f0 [2];
  size_t local_e0;
  ulonglong local_d8;
  undefined1 local_d0 [16];
  longlong local_c0;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_188;
  bVar18 = false;
  uVar11 = (ulonglong)local_160 >> 0x20;
  local_160 = (longlong *)((ulonglong)local_160 & 0xffffffff00000000);
  if ((((DAT_180cd0f0c == '\0') && (DAT_180cd0f09 == '\0')) && (DAT_181107150 != DAT_181107158)) &&
     ((DAT_1809f72e0 != '\0' && (DAT_1809f72e2 == '\0')))) {
    uStack_148 = 0;
    local_140 = 0;
    local_138 = 0xf;
    local_150 = (undefined8 ****)0x0;
    bVar18 = true;
    local_160 = (longlong *)CONCAT44((int)uVar11,1);
    cVar6 = FUN_1803222c0(&local_150);
    if (cVar6 != '\0') {
      bVar5 = false;
      goto LAB_180322830;
    }
  }
  bVar5 = true;
LAB_180322830:
  if (bVar18) {
    FUN_18000f890(&local_150);
  }
  if (!bVar5) {
    FUN_180313160(local_d0);
    if (local_c0 != 0) {
      FUN_180066a20(local_f0,&DAT_1806dfae4,local_d0);
      cVar6 = FUN_1803222c0(local_f0);
      if (cVar6 != '\0') {
        local_158 = &DAT_1809e8e50;
        iVar7 = FUN_1804e4d70(&DAT_1809e8e50);
        puVar15 = auStack_188;
        if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(5);
        }
        if (DAT_1809e8e9c == 0x7fffffff) {
LAB_180322bfc:
          DAT_1809e8e9c = DAT_1809e8e9c + -1;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar15 + -8) = &UNK_180322c0e;
          FUN_1804e4a90(6);
        }
        local_168 = DAT_180cd048f;
        DAT_180cd048f = 1;
        local_160 = DAT_180cd0278;
        plVar19 = DAT_180cd0270;
        if (DAT_180cd0270 != DAT_180cd0278) {
          do {
            lVar1 = *(longlong *)(*plVar19 + 0x58);
            for (lVar16 = *(longlong *)(*plVar19 + 0x50); lVar16 != lVar1; lVar16 = lVar16 + 0x40) {
              ppppuVar13 = local_f0;
              if (0xf < local_d8) {
                ppppuVar13 = local_f0[0];
              }
              sVar2 = *(size_t *)(lVar16 + 0x30);
              if (*(ulonglong *)(lVar16 + 0x38) < 0x10) {
                pvVar10 = (void *)(lVar16 + 0x20);
              }
              else {
                pvVar10 = *(void **)(lVar16 + 0x20);
              }
              if (((sVar2 == local_e0) &&
                  ((sVar2 == 0 || (iVar7 = memcmp(pvVar10,ppppuVar13,sVar2), iVar7 == 0)))) &&
                 (cVar6 = FUN_180321bf0(lVar16), cVar6 != '\0')) {
                uStack_128 = 0;
                local_120 = 1;
                local_118 = 0xf;
                local_130 = (ulonglong)(DAT_1806dfae0 & 0xff);
                FUN_1800667a0(&local_150,&local_130,lVar16);
                if (0xf < local_118) {
                  uVar12 = local_118 + 1;
                  uVar11 = local_130;
                  if (0xfff < uVar12) {
                    uVar11 = *(ulonglong *)(local_130 - 8);
                    if (0x1f < (local_130 - uVar11) - 8) {
                      pcVar4 = (code *)swi(0x29);
                      DAT_1809e8e9c = (*pcVar4)(5);
                      puVar15 = auStack_180;
                      goto LAB_180322bfc;
                    }
                    uVar12 = local_118 + 0x28;
                  }
                  thunk_FUN_1803d64e0(uVar11,uVar12);
                }
                local_120 = 0;
                local_118 = 0xf;
                local_130 = local_130 & 0xffffffffffffff00;
                uVar8 = FUN_180073a70(local_70,*plVar19,&DAT_1806e08bc);
                uVar8 = FUN_1800667a0(local_90,uVar8,&local_150);
                puVar9 = (undefined8 *)FUN_1800134a0(uVar8,&DAT_1806e08bc,1);
                local_110 = *puVar9;
                uStack_108 = puVar9[1];
                local_100 = puVar9[2];
                uStack_f8 = puVar9[3];
                puVar9[2] = 0;
                puVar9[3] = 0xf;
                *(undefined1 *)puVar9 = 0;
                puVar9 = (undefined8 *)FUN_1800667a0(local_b0,&local_110,lVar16 + 0x20);
                if (0xf < (ulonglong)puVar9[3]) {
                  puVar9 = (undefined8 *)*puVar9;
                }
                FUN_1803e89e0(puVar9);
                FUN_18000f890(local_b0);
                FUN_18000f890(&local_110);
                FUN_18000f890(local_90);
                FUN_18000f890(local_70);
                lVar3 = *(longlong *)(*plVar19 + 0x70);
                for (lVar14 = *(longlong *)(*plVar19 + 0x68); lVar14 != lVar3; lVar14 = lVar14 + 600
                    ) {
                  puVar9 = (undefined8 *)(lVar14 + 0x28);
                  ppppuVar13 = &local_150;
                  if (0xf < local_138) {
                    ppppuVar13 = local_150;
                  }
                  sVar2 = *(size_t *)(lVar14 + 0x38);
                  if (0xf < *(ulonglong *)(lVar14 + 0x40)) {
                    puVar9 = (undefined8 *)*puVar9;
                  }
                  if ((sVar2 == local_140) &&
                     ((sVar2 == 0 || (iVar7 = memcmp(puVar9,ppppuVar13,sVar2), iVar7 == 0)))) {
                    puVar9 = (undefined8 *)(lVar14 + 8);
                    if (*(ulonglong *)(lVar16 + 0x38) < 0x10) {
                      pvVar10 = (void *)(lVar16 + 0x20);
                    }
                    else {
                      pvVar10 = *(void **)(lVar16 + 0x20);
                    }
                    sVar2 = *(size_t *)(lVar14 + 0x18);
                    if (0xf < *(ulonglong *)(lVar14 + 0x20)) {
                      puVar9 = (undefined8 *)*puVar9;
                    }
                    if ((sVar2 == *(size_t *)(lVar16 + 0x30)) &&
                       (((sVar2 == 0 || (iVar7 = memcmp(puVar9,pvVar10,sVar2), iVar7 == 0)) &&
                        (*(int *)(lVar14 + 4) != 0xe)))) {
                      lVar17 = *plVar19;
                      cVar6 = FUN_180097d90(lVar17,lVar14);
                      if (cVar6 != '\0') {
                        FUN_180320490(lVar17,lVar14);
                      }
                    }
                  }
                }
                iVar7 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
                if (iVar7 < 2) {
                  FUN_1803ebc00("Calling PopID() too many times!");
                }
                else {
                  *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar7 + -1;
                }
                FUN_18000f890(&local_150);
              }
            }
            plVar19 = plVar19 + 1;
          } while (plVar19 != local_160);
        }
        DAT_180cd048f = local_168;
        FUN_1804e4e90(&DAT_1809e8e50);
      }
      FUN_18000f890(local_f0);
    }
    FUN_18000f890(local_d0);
  }
  return;
}



/* ===== 180322c20 FUN_180322c20 ===== */

void FUN_180322c20(void)

{
  size_t _Size;
  bool bVar1;
  byte bVar2;
  size_t sVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (DAT_181106f10 != 8) {
    return;
  }
  iVar5 = FUN_1804e4d70(&DAT_1809e8e50);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar6 = FUN_180098330(&DAT_1809f5b70);
  uVar4 = DAT_1809f7418;
  sVar3 = DAT_1809f7410;
  if (lVar6 != 0) {
    bVar1 = false;
    puVar8 = *(undefined8 **)(lVar6 + 0x38);
    puVar10 = *(undefined8 **)(lVar6 + 0x40);
    puVar9 = puVar8;
    if (puVar8 != puVar10) {
      do {
        _Buf2 = &DAT_1809f7400;
        if (0xf < uVar4) {
          _Buf2 = DAT_1809f7400;
        }
        _Size = puVar9[2];
        if ((ulonglong)puVar9[3] < 0x10) {
          _Buf1 = puVar9;
        }
        else {
          _Buf1 = (undefined8 *)*puVar9;
        }
        if (_Size == sVar3) {
          if (_Size == 0) {
            for (lVar7 = *(longlong *)(lVar6 + 0x68); lVar7 != *(longlong *)(lVar6 + 0x70);
                lVar7 = lVar7 + 600) {
              if ((*(longlong *)(lVar7 + 0x38) == 0) && (*(int *)(lVar7 + 4) != 0xe))
              goto LAB_180322ddd;
            }
            goto LAB_180322d0c;
          }
          iVar5 = memcmp(_Buf1,_Buf2,_Size);
          if (iVar5 != 0) goto LAB_180322d0c;
LAB_180322ddd:
          bVar2 = 1;
        }
        else {
LAB_180322d0c:
          bVar2 = 0;
        }
        bVar1 = (bool)(bVar1 | bVar2);
        puVar9 = puVar9 + 10;
      } while (puVar9 != puVar10);
      if (bVar1) goto LAB_180322db2;
      for (; puVar8 != puVar10; puVar8 = puVar8 + 10) {
        if (puVar8[2] != 0) {
LAB_180322de4:
          if ((undefined8 **)puVar8 != &DAT_1809f7400) {
            if (0xf < (ulonglong)puVar8[3]) {
              puVar8 = (undefined8 *)*puVar8;
            }
            FUN_180029840(&DAT_1809f7400,puVar8);
          }
          goto LAB_180322db2;
        }
        for (lVar7 = *(longlong *)(lVar6 + 0x68); lVar7 != *(longlong *)(lVar6 + 0x70);
            lVar7 = lVar7 + 600) {
          if ((*(longlong *)(lVar7 + 0x38) == 0) && (*(int *)(lVar7 + 4) != 0xe))
          goto LAB_180322de4;
        }
      }
    }
  }
  DAT_181106f10 = 0;
  DAT_1809f5b80 = 0;
  puVar10 = &DAT_1809f5b70;
  if (0xf < DAT_1809f5b88) {
    puVar10 = DAT_1809f5b70;
  }
  *(undefined1 *)puVar10 = 0;
  DAT_1809f7410 = 0;
  puVar10 = &DAT_1809f7400;
  if (0xf < DAT_1809f7418) {
    puVar10 = DAT_1809f7400;
  }
  *(undefined1 *)puVar10 = 0;
LAB_180322db2:
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 180322e20 FUN_180322e20 ===== */

uint FUN_180322e20(void)

{
  char *pcVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = 0xffffffff;
  pcVar1 = "window_modal";
  bVar2 = 0x77;
  do {
    pcVar1 = pcVar1 + 1;
    if (((bVar2 == 0x23) && (*pcVar1 == 0x23)) && (pcVar1[1] == 0x23)) {
      uVar3 = 0xffffffff;
      pcVar1 = pcVar1 + 2;
    }
    else {
      uVar3 = (ulonglong)
              ((uint)(uVar3 >> 8) ^
              *(uint *)(&DAT_1806c25c0 + (uVar3 & 0xff ^ (ulonglong)bVar2) * 4));
    }
    bVar2 = *pcVar1;
  } while (bVar2 != 0);
  return ~(uint)uVar3;
}



/* ===== 180322e80 FUN_180322e80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180322e80(undefined4 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [2];
  undefined1 local_c0 [24];
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58 [7];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_88 = _DAT_1808ad410;
  uStack_80 = _UNK_1808ad418;
  uStack_90 = 0;
  uStack_70 = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_68 = _DAT_1808ad410;
  uStack_60 = _UNK_1808ad418;
  local_78 = 0;
  local_20 = (longlong *)0x0;
  _DAT_1809f7338 = 0;
  DAT_1809f7330 = 0;
  DAT_1809f7334 = 0;
  FUN_18002ba60(&DAT_1809f7340,&local_98);
  FUN_18002ba60(&DAT_1809f7360,&local_78);
  FUN_180349620(&DAT_1809f7380,local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))
              (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
    local_20 = (longlong *)0x0;
  }
  FUN_18000f890(&local_78);
  FUN_18000f890(&local_98);
  DAT_1809f7334 = 1;
  DAT_1809f7330 = param_1;
  local_c8[0] = FUN_180322e20();
  plVar2 = (longlong *)FUN_18034f560(extraout_XMM0_Da,local_c0,local_c8);
  lVar1 = *plVar2;
  *(undefined8 *)(lVar1 + 0x14) = 0;
  *(undefined8 *)(lVar1 + 0x1c) = 0;
  *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
  return;
}



/* ===== 180322fd0 FUN_180322fd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180322fd0(undefined8 param_1,char *param_2,undefined8 param_3,float param_4,float *param_5,
                  float param_6,undefined4 param_7)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  size_t sVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 *local_f0;
  undefined4 local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_98 [14];
  
  local_98[4] = DAT_180919500 ^ (ulonglong)auStack_118;
  fVar9 = DAT_1808ac34c;
  if (DAT_180cd0fd8 != '\0') {
    fVar9 = DAT_1809f7440;
  }
  fVar10 = fVar9 * DAT_1808ac3d4;
  if (fVar9 * DAT_1808ac3d4 <= DAT_1808ac540) {
    fVar10 = DAT_1808ac540;
  }
  fVar9 = fVar10 * param_6 + DAT_1808ac1f4;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  sVar5 = strlen(param_2);
  FUN_1800133a0(local_98,param_2,sVar5);
  plVar6 = (longlong *)FUN_18039ed80(&local_b8,local_98,param_3,(int)fVar9);
  lVar2 = *plVar6;
  lVar4 = plVar6[1];
  iVar1 = *(int *)((longlong)plVar6 + 0xc);
  if (0xf < (ulonglong)local_98[3]) {
    uVar8 = local_98[3] + 1;
    lVar7 = local_98[0];
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(local_98[0] + -8);
      if (0x1f < (local_98[0] - lVar7) - 8U) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = local_98[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar7,uVar8);
  }
  if (((lVar2 != 0) && (0 < (int)lVar4)) && (0 < iVar1)) {
    fVar9 = *param_5;
    fVar11 = param_6 * _DAT_1808ac2c0;
    local_c0 = fVar9;
    fVar10 = (float)FUN_180519080(param_6 * _DAT_1808ac388);
    local_bc = (fVar10 + param_5[1]) - fVar11;
    local_d8 = 0x3f800000;
    local_d4 = 0x3f800000;
    local_d0 = 0;
    local_c8 = fVar9 + param_4 * DAT_1808abfc4 * param_6;
    local_c4 = local_bc + param_6;
    local_b8 = 0;
    local_e8 = param_7;
    local_f0 = &local_d8;
    local_f8 = &local_d0;
    local_b0 = lVar2;
    FUN_1803fea90(param_1,&local_b8,&local_c0,&local_c8);
  }
  return;
}



/* ===== 1803231e0 FUN_1803231e0 ===== */

void FUN_1803231e0(undefined8 param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float local_res10;
  float local_res14;
  float local_38;
  float local_34;
  
  fVar1 = (float)FUN_18053fc00(DAT_1808ac7ec);
  local_38 = DAT_1808ac34c;
  if (DAT_1808ac34c <= fVar1) {
    local_38 = fVar1;
  }
  local_res10 = (*param_2 + param_3) - local_38;
  local_38 = local_38 + *param_2;
  local_res14 = param_4 + DAT_1808ac34c;
  local_34 = param_4;
  FUN_1803fe590(param_1,&local_38,&local_res10,DAT_180960f48,0,0);
  return;
}



/* ===== 180323290 FUN_180323290 ===== */

undefined1
FUN_180323290(longlong param_1,undefined8 param_2,char *param_3,undefined8 param_4,
             undefined8 param_5,float param_6,float *param_7,float param_8,char param_9,
             char param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  undefined1 uVar6;
  char cVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float *pfVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 in_stack_fffffffffffffeb8;
  undefined4 uVar23;
  undefined8 uVar22;
  undefined8 in_stack_fffffffffffffec0;
  undefined4 uVar26;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined8 in_stack_fffffffffffffec8;
  undefined4 uVar27;
  float local_118 [4];
  float local_108;
  float fStack_104;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  
  fVar17 = param_8;
  lVar11 = DAT_180ca0a50;
  fVar4 = DAT_1808ac8e4;
  fVar16 = DAT_1808ac34c;
  uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffec0 >> 0x20);
  uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
  fVar21 = param_8 - DAT_1808ac7ec;
  fVar20 = param_8 + DAT_1808ac97c + DAT_1808ac7ec;
  fVar18 = *param_7 + DAT_1808acbb4;
  fVar19 = *param_7 + DAT_1808ac8e4;
  fVar14 = fVar21 + DAT_1808ac34c;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar11 = *(longlong *)(lVar11 + 0x14f8);
  fVar18 = fVar18 - fVar4;
  *(undefined1 *)(lVar11 + 0x159) = 1;
  param_7._0_4_ = fVar18 + fVar4;
  local_f4 = fVar20 - fVar16;
  fVar15 = (fVar19 - fVar4) + fVar16;
  local_f8 = param_7._0_4_ - fVar16;
  fStack_104 = local_f4 - fVar14;
  local_d8 = CONCAT44(fVar14,fVar15);
  local_108 = local_f8 - fVar15;
  *(ulonglong *)(lVar11 + 0x118) = CONCAT44(fVar14,fVar15);
  uVar6 = FUN_180415e30(param_2,&local_108,0);
  cVar7 = FUN_1803dd930(0);
  param_8 = *(float *)(DAT_180ca0a50 + 0x1ee8);
  if ((*(int *)(DAT_180ca0a50 + 0x1578) == 0) ||
     ((float)*(int *)(DAT_180ca0a50 + 0x1578) != param_8)) {
    if (cVar7 == '\0') {
      fVar14 = 0.0;
    }
    else {
      fVar14 = DAT_1808ac1f4;
    }
  }
  else {
    fVar14 = fVar16;
  }
  local_e4 = 0;
  local_e0 = 0xffffffff;
  local_f0 = fVar14;
  local_ec = fVar14;
  local_e8 = fVar14;
  FUN_18034a380(param_8,&local_108,&param_8,&local_f0);
  fVar14 = (float)FUN_1802b3660(CONCAT44(fStack_104,local_108) + 0x14,fVar14,DAT_1808ac118,0);
  if (0.0 < fVar14) {
    iVar12 = 0x130;
    if (param_9 == '\0') {
      iVar12 = 0x100;
    }
    if ((param_10 != '\0') && (iVar12 = 0x1f0, param_9 == '\0')) {
      iVar12 = 0x1c0;
    }
    param_7._4_4_ = fVar20;
    local_108 = fVar19 - fVar4;
    fStack_104 = fVar21;
    FUN_1803fc200(param_1,&local_108,&param_7,0);
    if (iVar12 == 0x100) {
      uVar13 = 0;
    }
    else {
      uVar13 = DAT_1808ac900;
    }
    local_118[2] = 1.0;
    local_118[0] = 0.0;
    uVar24 = CONCAT44(uVar26,iVar12);
    local_118[1] = fVar14 * DAT_1808ac0e8 * DAT_1808ac2cc;
    uVar22 = CONCAT44(uVar23,uVar13);
    pfVar10 = local_118;
    if (0.0 <= local_118[1]) {
      pfVar10 = local_118 + 1;
    }
    pfVar8 = local_118 + 2;
    if (local_118[1] <= fVar16) {
      pfVar8 = pfVar10;
    }
    FUN_1803fe590(param_1,&local_d8,&local_f8,
                  (int)(longlong)(*pfVar8 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18 |
                  DAT_180960f44 & 0xffffff,uVar22,uVar24);
    uVar26 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar23 = (undefined4)((ulonglong)uVar22 >> 0x20);
    iVar1 = *(int *)(param_1 + 0xa0);
    iVar12 = iVar1 + -1;
    *(int *)(param_1 + 0xa0) = iVar12;
    if (iVar12 == 0) {
      puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x34);
    }
    else {
      puVar9 = (undefined4 *)((longlong)(iVar1 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
    }
    uVar13 = puVar9[1];
    uVar2 = puVar9[2];
    uVar3 = puVar9[3];
    *(undefined4 *)(param_1 + 0x60) = *puVar9;
    *(undefined4 *)(param_1 + 100) = uVar13;
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    FUN_1803fbff0(param_1);
  }
  fVar4 = DAT_1808ac950;
  fVar17 = fVar17 + DAT_1808ac658;
  lVar11 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar11 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  param_7._0_4_ = fVar19;
  param_7._4_4_ = fVar17;
  if ((((DAT_180960ec0 & 0xff000000) != 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    fVar14 = (fVar18 - fVar19) - DAT_1808ac950;
    if (fVar16 <= fVar14) {
      fVar16 = fVar14;
    }
    if (lVar11 == 0) {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
    local_d8 = *(undefined8 *)(param_1 + 0x60);
    uStack_d0 = *(undefined4 *)(param_1 + 0x68);
    uStack_cc = *(undefined4 *)(param_1 + 0x6c);
    puVar25 = &local_d8;
    FUN_18040a900(lVar11,param_1,DAT_1808ac930,&param_7,CONCAT44(uVar23,DAT_180960ec0),puVar25,
                  param_3,0,fVar16,0);
    uVar26 = (undefined4)((ulonglong)puVar25 >> 0x20);
    uVar27 = (undefined4)((ulonglong)param_3 >> 0x20);
  }
  uVar5 = DAT_180960ec0;
  fVar16 = DAT_1808ac8d4;
  fVar14 = (float)FUN_18053fc00(param_6 * DAT_1808abfc4 * DAT_1808ac8d4 + DAT_1808ac2f0);
  param_7._0_4_ = fVar18 - (fVar14 + fVar4) * DAT_1808ac1f4;
  param_7._4_4_ = fVar17;
  FUN_180322fd0(param_1,param_4,param_5,param_6,&param_7,CONCAT44(uVar26,fVar16),
                CONCAT44(uVar27,uVar5));
  return uVar6;
}



/* ===== 180323780 FUN_180323780 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180323780(longlong param_1,float *param_2,float *param_3,float param_4,float *param_5,
                  undefined4 *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  uint uVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [120];
  undefined8 local_198;
  float local_190;
  float local_18c;
  undefined4 *local_188;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  char *local_158 [4];
  char *local_138 [4];
  float local_118;
  undefined4 uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  ulonglong local_100;
  ulonglong local_f8;
  
  fVar24 = DAT_1808aca34;
  fVar8 = DAT_1808ac34c;
  fVar7 = DAT_1808ac1f4;
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_218;
  local_188 = param_6;
  fVar22 = DAT_1808ac34c;
  if (DAT_180cd0fd8 != '\0') {
    fVar22 = DAT_1809f7440;
  }
  fVar21 = fVar22 * DAT_1808ac3d4;
  if (fVar22 * DAT_1808ac3d4 <= DAT_1808ac540) {
    fVar21 = DAT_1808ac540;
  }
  uStack_10c = 0;
  local_108 = 0xb;
  local_100 = 0xf;
  local_118 = s_wl_wordmark_1807678b0._0_4_;
  uStack_114 = CONCAT13(s_wl_wordmark_1807678b0[7],s_wl_wordmark_1807678b0._4_3_);
  uStack_110 = (uint)s_wl_wordmark_1807678b0._7_4_ >> 8;
  plVar12 = (longlong *)
            FUN_18039ed80(&local_170,&local_118,&DAT_180741e40,
                          (int)(fVar21 * DAT_1808aca34 + DAT_1808ac1f4));
  lVar14 = *plVar12;
  iVar11 = (int)plVar12[1];
  iVar20 = *(int *)((longlong)plVar12 + 0xc);
  if (local_100 < 0x10) {
LAB_1803238e4:
    puVar18 = auStack_218;
    if (((lVar14 != 0) && (puVar18 = auStack_218, 0 < iVar11)) &&
       (puVar18 = auStack_218, 0 < iVar20)) {
      puVar18 = auStack_218;
      fVar22 = (float)iVar11 / (float)iVar20;
      goto LAB_180323916;
    }
  }
  else {
    uVar17 = local_100 + 1;
    lVar5 = CONCAT44(uStack_114,local_118);
    lVar13 = lVar5;
    if (uVar17 < 0x1000) {
LAB_1803238df:
      thunk_FUN_1803d64e0(lVar13,uVar17);
      goto LAB_1803238e4;
    }
    lVar13 = *(longlong *)(lVar5 + -8);
    if ((lVar5 - lVar13) - 8U < 0x20) {
      uVar17 = local_100 + 0x28;
      goto LAB_1803238df;
    }
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar18 = auStack_210;
  }
  fVar22 = DAT_1808ac7e0;
LAB_180323916:
  fVar21 = (*param_3 - fVar22 * fVar24) * fVar7 + *param_2;
  *(float *)(puVar18 + 0x70) = fVar21;
  fVar25 = (param_3[1] - fVar24) * DAT_1808ac118 + param_2[1];
  *(float *)(puVar18 + 0x74) = fVar25;
  if (((lVar14 != 0) && (0 < iVar11)) && (0 < iVar20)) {
    *(undefined4 *)(puVar18 + 0x68) = 0x3f800000;
    *(undefined4 *)(puVar18 + 0x6c) = 0x3f800000;
    local_198 = 0;
    *(float *)(puVar18 + 0x60) = fVar21 + fVar22 * fVar24;
    *(float *)(puVar18 + 100) = fVar25 + fVar24;
    if ((lVar14 == *(longlong *)(param_1 + 0x78)) && (*(longlong *)(param_1 + 0x70) == 0)) {
      bVar6 = false;
    }
    else {
      iVar11 = *(int *)(param_1 + 0xb4);
      if (*(int *)(param_1 + 0xb0) == iVar11) {
        iVar20 = *(int *)(param_1 + 0xb0) + 1;
        if (iVar11 == 0) {
          iVar11 = 8;
        }
        else {
          iVar11 = iVar11 / 2 + iVar11;
        }
        if (iVar20 < iVar11) {
          iVar20 = iVar11;
        }
        *(undefined8 *)(puVar18 + -8) = 0x1803239f6;
        FUN_1803f7030(param_1 + 0xb0,iVar20);
      }
      iVar11 = *(int *)(param_1 + 0xb0);
      lVar13 = *(longlong *)(param_1 + 0xb8);
      *(undefined8 *)(lVar13 + (longlong)iVar11 * 0x10) = 0;
      *(longlong *)(lVar13 + 8 + (longlong)iVar11 * 0x10) = lVar14;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(longlong *)(param_1 + 0x78) = lVar14;
      *(undefined8 *)(puVar18 + -8) = 0x180323a2e;
      FUN_1803fc0a0(param_1);
      bVar6 = true;
    }
    *(undefined8 *)(puVar18 + -8) = 0x180323a44;
    FUN_1803fc3a0(param_1,6,4);
    *(undefined4 *)(puVar18 + 0x28) = 0xffffffff;
    *(undefined1 **)(puVar18 + 0x20) = puVar18 + 0x68;
    *(undefined8 *)(puVar18 + -8) = 0x180323a6c;
    FUN_1803fc4a0(param_1,puVar18 + 0x70,puVar18 + 0x60,&local_198);
    if (bVar6) {
      *(undefined8 *)(puVar18 + -8) = 0x180323a79;
      FUN_1803fc340(param_1);
    }
  }
  fVar9 = DAT_1808ac930;
  fVar22 = DAT_1808ac750;
  fVar26 = fVar25 + fVar24 + DAT_1808ac750;
  *(undefined4 *)(puVar18 + 0x50) = 0;
  *(undefined8 *)(puVar18 + 0x40) = 0;
  *(undefined8 *)(puVar18 + 0x38) = 0;
  *(undefined8 *)(puVar18 + 0x30) = 0;
  *(char **)(puVar18 + 0x28) = "Counter-Strike 2";
  *(undefined4 *)(puVar18 + 0x20) = 0;
  uVar2 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
  *(undefined8 *)(puVar18 + -8) = 0x180323ae1;
  FUN_18040a2f0(puVar18 + 0x78,uVar2,DAT_1808ac930,DAT_1808acd08);
  *(undefined8 *)(puVar18 + -8) = 0x180323af4;
  fVar25 = (float)FUN_18053fc00(*(float *)(puVar18 + 0x78) + DAT_1808ac2f0);
  fVar21 = DAT_1808ac8b0;
  fVar24 = DAT_1808ac7ac;
  fVar23 = ((*param_3 - fVar25) - DAT_1808ac8b0) * fVar7 + *param_2;
  *(float *)(puVar18 + 0x60) = fVar23;
  *(float *)(puVar18 + 100) = fVar26;
  *(float *)(puVar18 + 0x70) = fVar23 + fVar25 + DAT_1808ac8b0;
  *(float *)(puVar18 + 0x74) = fVar26 + fVar9 + DAT_1808ac7ac;
  *(undefined4 *)(puVar18 + 0x28) = 0;
  *(float *)(puVar18 + 0x20) = DAT_1808ac7ac;
  *(undefined8 *)(puVar18 + -8) = 0x180323b72;
  FUN_1803fe590(param_1,puVar18 + 0x60,puVar18 + 0x70,DAT_180960ef0);
  local_118 = (float)_DAT_1808adcf0;
  uStack_114 = (undefined4)((ulonglong)_DAT_1808adcf0 >> 0x20);
  uStack_110 = (uint)_UNK_1808adcf8;
  uStack_10c = (undefined4)((ulonglong)_UNK_1808adcf8 >> 0x20);
  *(float *)(puVar18 + 0x30) = fVar8;
  *(undefined4 *)(puVar18 + 0x28) = 0;
  *(float **)(puVar18 + 0x20) = &local_118;
  *(undefined8 *)(puVar18 + -8) = 0x180323bae;
  FUN_18036bcb0(param_1,puVar18 + 0x60,puVar18 + 0x70,DAT_180960eec);
  uVar15 = (int)(longlong)((float)(DAT_180960ec8 >> 0x18) * param_4 + fVar7) << 0x18;
  *(float *)(puVar18 + 0x68) =
       (((*(float *)(puVar18 + 0x70) - *(float *)(puVar18 + 0x60)) - fVar21) - fVar25) * fVar7 +
       *(float *)(puVar18 + 0x60) + fVar24;
  *(float *)(puVar18 + 0x6c) = *(float *)(puVar18 + 100) + DAT_1808ac658;
  lVar14 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar14 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if (uVar15 != 0) {
    if (lVar14 == 0) {
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
    local_118 = (float)*(undefined8 *)(param_1 + 0x60);
    uStack_114 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
    uStack_110 = (uint)*(undefined8 *)(param_1 + 0x68);
    uStack_10c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
    *(undefined4 *)(puVar18 + 0x48) = 0;
    *(undefined4 *)(puVar18 + 0x40) = 0;
    *(undefined8 *)(puVar18 + 0x38) = 0;
    *(char **)(puVar18 + 0x30) = "Counter-Strike 2";
    *(float **)(puVar18 + 0x28) = &local_118;
    *(uint *)(puVar18 + 0x20) = uVar15 | DAT_180960ec8 & 0xffffff;
    *(undefined8 *)(puVar18 + -8) = 0x180323c85;
    FUN_18040a900(lVar14,param_1,fVar9,puVar18 + 0x68);
  }
  fVar24 = DAT_1808acbb4;
  fVar21 = *(float *)(puVar18 + 0x74) + fVar22 + DAT_1808ac864;
  fVar25 = (*param_3 - DAT_1808acbb4) * fVar7 + *param_2;
  *(float *)(puVar18 + 0x60) = fVar25;
  local_158[0] = "Username";
  local_158[1] = "Branch";
  local_158[2] = "Updated";
  local_158[3] = "Expires On";
  *(undefined8 *)(puVar18 + -8) = 0x180323cee;
  local_138[0] = (char *)FUN_1801c8250();
  local_138[1] = "Release";
  local_138[2] = "Oct 25 2026";
  local_138[3] = "365 days left";
  local_198 = CONCAT44(fVar21,fVar25);
  fVar23 = fVar25 + fVar24;
  *(float *)(puVar18 + 0x68) = fVar23;
  fVar22 = fVar21 + _DAT_1808acb38;
  *(float *)(puVar18 + 0x6c) = fVar22;
  *param_5 = fVar25;
  param_5[1] = fVar21;
  param_5[2] = fVar23;
  param_5[3] = fVar22;
  *(float *)(puVar18 + 0x30) = fVar8;
  *(undefined4 *)(puVar18 + 0x28) = DAT_1808ac900;
  *(undefined4 *)(puVar18 + 0x20) = DAT_180960eec;
  *(undefined8 *)(puVar18 + -8) = 0x180323db4;
  FUN_1802b4b90(param_1,&local_198,puVar18 + 0x68,
                (int)(longlong)((float)(DAT_180960f60 >> 0x18) * param_4 + fVar7) << 0x18 |
                DAT_180960f60 & 0xffffff);
  fVar22 = DAT_1808ac7ec;
  fVar21 = fVar21 + DAT_1808ac7ec;
  uVar15 = 0;
  *(float *)(puVar18 + 0x70) = (float)local_198 + fVar24;
  fVar25 = fVar25 + DAT_1808ac8e4;
  while( true ) {
    uVar16 = (int)(longlong)((float)(DAT_180960ec8 >> 0x18) * param_4 + fVar7) << 0x18;
    fVar24 = fVar21 + DAT_1808ac658;
    lVar14 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar14 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    local_180 = fVar25;
    local_17c = fVar24;
    if (((uVar16 != 0) && (pcVar3 = local_158[uVar15], pcVar3 != (char *)0x0)) && (*pcVar3 != '\0'))
    {
      if (lVar14 == 0) {
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
      }
      local_170 = *(undefined8 *)(param_1 + 0x60);
      uStack_168 = *(undefined8 *)(param_1 + 0x68);
      *(undefined4 *)(puVar18 + 0x48) = 0;
      *(undefined4 *)(puVar18 + 0x40) = 0;
      *(undefined8 *)(puVar18 + 0x38) = 0;
      *(char **)(puVar18 + 0x30) = pcVar3;
      *(undefined8 **)(puVar18 + 0x28) = &local_170;
      *(uint *)(puVar18 + 0x20) = uVar16 | DAT_180960ec8 & 0xffffff;
      *(undefined8 *)(puVar18 + -8) = 0x180323eaf;
      FUN_18040a900(lVar14,param_1,fVar9,&local_180);
    }
    pcVar3 = local_158[(ulonglong)uVar15 + 4];
    *(undefined4 *)(puVar18 + 0x50) = 0;
    *(undefined8 *)(puVar18 + 0x40) = 0;
    *(undefined8 *)(puVar18 + 0x38) = 0;
    *(undefined8 *)(puVar18 + 0x30) = 0;
    *(char **)(puVar18 + 0x28) = pcVar3;
    *(undefined4 *)(puVar18 + 0x20) = 0;
    uVar2 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
    *(undefined8 *)(puVar18 + -8) = 0x180323ef7;
    FUN_18040a2f0(&local_118,uVar2,fVar9,DAT_1808acd08);
    uVar19 = (int)(longlong)((float)(DAT_1809f54bc >> 0x18) * param_4 + fVar7) << 0x18;
    uVar16 = DAT_1809f54bc & 0xffffff;
    *(undefined8 *)(puVar18 + -8) = 0x180323f36;
    fVar26 = (float)FUN_18053fc00(local_118 + DAT_1808ac2f0);
    local_178 = (fVar23 - fVar26) - DAT_1808ac8e4;
    lVar14 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar14 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    local_174 = fVar24;
    if (((uVar19 != 0) && (pcVar3 != (char *)0x0)) && (*pcVar3 != '\0')) {
      if (lVar14 == 0) {
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
      }
      local_170 = *(undefined8 *)(param_1 + 0x60);
      uStack_168 = *(undefined8 *)(param_1 + 0x68);
      *(undefined4 *)(puVar18 + 0x48) = 0;
      *(undefined4 *)(puVar18 + 0x40) = 0;
      *(undefined8 *)(puVar18 + 0x38) = 0;
      *(char **)(puVar18 + 0x30) = pcVar3;
      *(undefined8 **)(puVar18 + 0x28) = &local_170;
      *(uint *)(puVar18 + 0x20) = uVar19 | uVar16;
      *(undefined8 *)(puVar18 + -8) = 0x180323fc4;
      FUN_18040a900(lVar14,param_1,fVar9,&local_178);
    }
    fVar24 = DAT_1808ac924;
    uVar15 = uVar15 + 1;
    if (3 < (int)uVar15) break;
    fVar21 = fVar21 + _DAT_1808ac9f0;
    *(undefined8 *)(puVar18 + -8) = 0x180323fde;
    fVar26 = (float)FUN_18053fc00();
    fVar24 = fVar8;
    if (fVar8 <= fVar26) {
      fVar24 = fVar26;
    }
    local_190 = *(float *)(puVar18 + 0x70) - fVar24;
    local_18c = fVar21 + fVar8;
    *(float *)(puVar18 + 0x78) = (float)local_198 + fVar24;
    *(float *)(puVar18 + 0x7c) = fVar21;
    *(undefined4 *)(puVar18 + 0x28) = 0;
    *(undefined4 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x18032403b;
    FUN_1803fe590(param_1,puVar18 + 0x78,&local_190,DAT_180960f48);
    fVar21 = fVar21 + DAT_1808ac838;
  }
  fVar25 = *(float *)(puVar18 + 0x6c) + DAT_1808ac924;
  uVar1 = *(undefined4 *)(puVar18 + 0x60);
  *(undefined4 *)(puVar18 + 0x60) = uVar1;
  *(float *)(puVar18 + 100) = fVar25;
  *(float *)(puVar18 + 0x68) = fVar23;
  fVar21 = fVar25 + _DAT_1808acadc;
  *(float *)(puVar18 + 0x6c) = fVar21;
  *local_188 = uVar1;
  local_188[1] = fVar25;
  local_188[2] = fVar23;
  local_188[3] = fVar21;
  *(float *)(puVar18 + 0x30) = fVar8;
  *(undefined4 *)(puVar18 + 0x28) = DAT_1808ac900;
  *(undefined4 *)(puVar18 + 0x20) = DAT_180960eec;
  *(undefined8 *)(puVar18 + -8) = 0x1803240fc;
  FUN_1802b4b90(param_1,puVar18 + 0x60,puVar18 + 0x68,
                (int)(longlong)((float)(DAT_180960f60 >> 0x18) * param_4 + fVar7) << 0x18 |
                DAT_180960f60 & 0xffffff);
  puVar18[0x48] = 0;
  puVar18[0x40] = 1;
  *(float *)(puVar18 + 0x38) = fVar25 + fVar22;
  *(undefined1 **)(puVar18 + 0x30) = puVar18 + 0x60;
  *(undefined4 *)(puVar18 + 0x28) = DAT_1808acc0c;
  *(char **)(puVar18 + 0x20) =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M352 224L305 224C260 224 224 261 224 306C224 328 234 340 243 346C250 351 256 358 256 367C256 377 248 385 238 385L235 385C233 385 230 384 228 383C210 375 128 334 128 240C128 161 192 96 272 96L352 96L352 35C352 16 367 0 386 0C395 0 403 4 409 9L548 134C555 141 560 150 560 160C560 171 555 180 548 187L409 312C403 318 395 320 387 320L384 320C366 320 352 306 352 288L352 224ZM80 96C71 96 64 104 64 112L64 432C64 441 71 448 80 448L400 448C408 448 416 441 416 432L416 384C416 367 430 352 448 352C465 352 480 367 480 384L480 432C480 476 444 512 400 512L80 512C35 512 0 476 0 432L0 112C0 68 35 32 80 32L128 32C145 32 160 47 160 64C160 82 145 96 128 96L80 96Z\"/></svg>"
  ;
  *(undefined8 *)(puVar18 + -8) = 0x180324152;
  cVar10 = FUN_180323290(param_1,"##about_report","Report an Issue","fa_square_share");
  if (cVar10 != '\0') {
    *(undefined4 *)(puVar18 + 0x28) = 5;
    *(undefined8 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x180324177;
    ShellExecuteA((HWND)0x0,(LPCSTR)0x0,"https://neverlose.one/tickets/",(LPCSTR)0x0,
                  *(LPCSTR *)(puVar18 + 0x20),*(INT *)(puVar18 + 0x28));
  }
  fVar21 = fVar25 + fVar22 + _DAT_1808ac9f0;
  *(undefined8 *)(puVar18 + -8) = 0x180324188;
  fVar22 = (float)FUN_18053fc00();
  local_190 = fVar8;
  if (fVar8 <= fVar22) {
    local_190 = fVar22;
  }
  *(float *)(puVar18 + 0x78) = (*(float *)(puVar18 + 0x60) + DAT_1808acbb4) - local_190;
  *(float *)(puVar18 + 0x7c) = fVar21 + fVar8;
  local_190 = *(float *)(puVar18 + 0x60) + local_190;
  *(undefined4 *)(puVar18 + 0x28) = 0;
  *(undefined4 *)(puVar18 + 0x20) = 0;
  *(undefined8 *)(puVar18 + -8) = 0x1803241eb;
  local_18c = fVar21;
  FUN_1803fe590(param_1,&local_190,puVar18 + 0x78,DAT_180960f48);
  puVar18[0x48] = 1;
  puVar18[0x40] = 0;
  *(float *)(puVar18 + 0x38) = fVar21 + DAT_1808ac838;
  *(undefined1 **)(puVar18 + 0x30) = puVar18 + 0x60;
  *(undefined4 *)(puVar18 + 0x28) = DAT_1808acbc0;
  *(char **)(puVar18 + 0x20) =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 320 512\" width=\"320\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M278 234C291 246 291 267 278 279L118 439C106 451 85 451 73 439C60 427 60 406 73 394L210 256L73 119C60 107 60 86 73 74C85 61 106 61 118 74L278 234L278 234ZM278 234Z\"/></svg>"
  ;
  *(undefined8 *)(puVar18 + -8) = 0x180324244;
  cVar10 = FUN_180323290(param_1,"##about_legal","Legal","fa_angle_right");
  if (cVar10 != '\0') {
    *(undefined4 *)(puVar18 + 0x28) = 5;
    *(undefined8 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x180324269;
    ShellExecuteA((HWND)0x0,(LPCSTR)0x0,"https://neverlose.one/help/terms/",(LPCSTR)0x0,
                  *(LPCSTR *)(puVar18 + 0x20),*(INT *)(puVar18 + 0x28));
  }
  *(undefined4 *)(puVar18 + 0x50) = 0;
  *(undefined8 *)(puVar18 + 0x40) = 0;
  *(undefined8 *)(puVar18 + 0x38) = 0;
  *(undefined8 *)(puVar18 + 0x30) = 0;
  *(undefined **)(puVar18 + 0x28) = &DAT_1807679e0;
  *(undefined4 *)(puVar18 + 0x20) = 0;
  uVar2 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
  *(undefined8 *)(puVar18 + -8) = 0x1803242b3;
  FUN_18040a2f0(&local_188,uVar2,fVar9,DAT_1808acd08);
  uVar15 = DAT_180960ec0;
  *(undefined8 *)(puVar18 + -8) = 0x1803242cb;
  fVar22 = (float)FUN_18053fc00(local_188._0_4_ + DAT_1808ac2f0);
  *(float *)(puVar18 + 0x78) = (*param_3 - fVar22) * fVar7 + *param_2;
  *(float *)(puVar18 + 0x7c) = *(float *)(puVar18 + 0x6c) + fVar24;
  lVar14 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar14 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if ((uVar15 & 0xff000000) != 0) {
    if (lVar14 == 0) {
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
    local_170 = *(undefined8 *)(param_1 + 0x60);
    uStack_168 = *(undefined8 *)(param_1 + 0x68);
    *(undefined4 *)(puVar18 + 0x48) = 0;
    *(undefined4 *)(puVar18 + 0x40) = 0;
    *(undefined8 *)(puVar18 + 0x38) = 0;
    *(undefined **)(puVar18 + 0x30) = &DAT_1807679e0;
    *(undefined8 **)(puVar18 + 0x28) = &local_170;
    *(uint *)(puVar18 + 0x20) = uVar15;
    *(undefined8 *)(puVar18 + -8) = 0x180324361;
    FUN_18040a900(lVar14,param_1,fVar9,puVar18 + 0x78);
  }
  *(undefined8 *)(puVar18 + -8) = 0x18032436d;
  return;
}



/* ===== 1803243c0 FUN_1803243c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1803243c0(longlong param_1,undefined8 param_2,char *param_3,undefined8 param_4,longlong param_5,
             float param_6,float param_7,undefined8 *param_8,undefined8 *param_9,byte param_10,
             int param_11,uint param_12)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 in_stack_fffffffffffffee8;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 in_stack_fffffffffffffef0;
  uint uVar18;
  undefined8 in_stack_fffffffffffffef8;
  undefined8 uVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  float local_d8 [6];
  longlong local_c0;
  undefined8 uStack_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  
  puVar6 = param_9;
  puVar5 = param_8;
  lVar13 = DAT_180ca0a50;
  uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  uVar18 = (uint)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar13 = *(longlong *)(lVar13 + 0x14f8);
  *(undefined8 *)(lVar13 + 0x118) = *param_8;
  *(undefined1 *)(lVar13 + 0x159) = 1;
  uVar7 = FUN_180415e30(param_2,param_9,0);
  cVar8 = FUN_1803dd930(0);
  fVar3 = DAT_1808ac34c;
  fVar2 = DAT_1808ac1f4;
  iVar1 = *(int *)(DAT_180ca0a50 + 0x1ee8);
  if ((*(int *)(DAT_180ca0a50 + 0x1578) == 0) || (*(int *)(DAT_180ca0a50 + 0x1578) != iVar1)) {
    if (cVar8 == '\0') {
      fVar15 = 0.0;
    }
    else {
      fVar15 = DAT_1808ac1f4;
    }
  }
  else {
    fVar15 = DAT_1808ac34c;
  }
  param_8 = (undefined8 *)CONCAT44(param_8._4_4_,iVar1);
  local_a4 = 0;
  local_a0 = 0xffffffff;
  local_b0 = fVar15;
  local_ac = fVar15;
  local_a8 = fVar15;
  FUN_18034a380(iVar1,&local_c0,&param_8,&local_b0);
  uVar14 = FUN_1802b3660(local_c0 + 0x14,fVar15,DAT_1808ac118,0);
  param_8 = (undefined8 *)
            CONCAT44((float)((ulonglong)*puVar5 >> 0x20) + (float)((ulonglong)*puVar6 >> 0x20),
                     (float)*puVar5 + (float)*puVar6);
  uVar9 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,uVar14);
  uVar4 = DAT_1808ac7ac;
  if ((param_10 & 8) == 0) {
    uVar20 = (ulonglong)uVar18 << 0x20;
    FUN_1803fe590(param_1,puVar5,&param_8,DAT_180960f60,CONCAT44(uVar10,DAT_1808ac7ac),uVar20);
    local_c0 = _DAT_1808adcf0;
    uStack_b8 = _UNK_1808adcf8;
    uVar10 = FUN_1802b38e0(DAT_180960eec,
                           (int)(longlong)((float)(DAT_1809f54bc >> 0x18) * DAT_1808ac1b0 + fVar2)
                           << 0x18 | DAT_1809f54bc & 0xffffff,uVar14);
    uVar19 = CONCAT44(uVar21,fVar3);
    uVar20 = uVar20 & 0xffffffff00000000;
    plVar17 = &local_c0;
    FUN_18036bcb0(param_1,puVar5,&param_8,uVar10,plVar17,uVar20,uVar19);
    uVar21 = (undefined4)((ulonglong)uVar19 >> 0x20);
    local_d8[5] = 1.0;
    local_d8[3] = 0.0;
    uVar20 = uVar20 & 0xffffffff00000000;
    local_d8[4] = (float)uVar14 * DAT_1808ac118 * DAT_1808ac2cc;
    uVar16 = CONCAT44((int)((ulonglong)plVar17 >> 0x20),uVar4);
    pfVar12 = local_d8 + 3;
    if (0.0 <= local_d8[4]) {
      pfVar12 = local_d8 + 4;
    }
    pfVar11 = local_d8 + 5;
    if (local_d8[4] <= fVar3) {
      pfVar11 = pfVar12;
    }
    FUN_1803fe590(param_1,puVar5,&param_8,
                  (int)(longlong)(*pfVar11 * DAT_1808acb94 + fVar2) << 0x18 |
                  DAT_180960f44 & 0xffffff,uVar16,uVar20);
    uVar10 = (undefined4)(uVar20 >> 0x20);
  }
  else {
    local_d8[2] = 1.0;
    local_d8[0] = 0.0;
    local_d8[1] = (float)uVar14 * DAT_1808ac1b0 * DAT_1808ac2cc;
    pfVar12 = local_d8;
    if (0.0 <= local_d8[1]) {
      pfVar12 = local_d8 + 1;
    }
    pfVar11 = local_d8 + 2;
    if (local_d8[1] <= fVar3) {
      pfVar11 = pfVar12;
    }
    lVar13 = (ulonglong)uVar18 << 0x20;
    uVar16 = CONCAT44(uVar10,DAT_1808ac7ac);
    FUN_1803fe590(param_1,puVar5,&param_8,
                  (int)(longlong)(*pfVar11 * DAT_1808acb94 + fVar2) << 0x18 |
                  DAT_180960f44 & 0xffffff,uVar16,lVar13);
    uVar10 = (undefined4)((ulonglong)lVar13 >> 0x20);
    uVar9 = FUN_1802b38e0((int)(longlong)((float)(param_12 >> 0x18) * DAT_1808ac254 + fVar2) << 0x18
                          | param_12 & 0xffffff,param_12,uVar14);
  }
  iVar1 = param_11;
  uVar4 = DAT_1808ac930;
  if (param_5 == 0) {
    if (param_3 != (char *)0x0) {
      if (param_11 < 600) {
        lVar13 = DAT_181107a08;
        if (499 < param_11) {
          lVar13 = DAT_181107a18;
        }
      }
      else {
        lVar13 = DAT_1811079c0;
      }
      if ((lVar13 == 0) && (lVar13 = DAT_181107a08, DAT_181107a08 == 0)) {
        lVar13 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      uVar21 = 0;
      uVar20 = 0;
      uVar16 = uVar16 & 0xffffffff00000000;
      FUN_18040a2f0(&param_9,lVar13,DAT_1808ac930,DAT_1808acd08,uVar16,param_3,0,0,0);
      uVar10 = (undefined4)(uVar16 >> 0x20);
      FUN_18053fc00(param_9._0_4_ + DAT_1808ac2f0);
      param_9._0_4_ = (float)FUN_18053fc00();
      param_9._4_4_ =
           FUN_18053fc00((param_8._4_4_ + *(float *)((longlong)puVar5 + 4)) * fVar2 - DAT_1808ac840)
      ;
      if (iVar1 < 600) {
        lVar13 = DAT_181107a08;
        if (499 < iVar1) {
          lVar13 = DAT_181107a18;
        }
      }
      else {
        lVar13 = DAT_1811079c0;
      }
      if ((lVar13 == 0) && (lVar13 = DAT_181107a08, DAT_181107a08 == 0)) {
        lVar13 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      if (((uVar9 & 0xff000000) != 0) && (*param_3 != '\0')) {
        if (lVar13 == 0) {
          lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
        }
        local_c0 = *(longlong *)(param_1 + 0x60);
        uStack_b8 = *(undefined8 *)(param_1 + 0x68);
        FUN_18040a900(lVar13,param_1,uVar4,&param_9,CONCAT44(uVar10,uVar9),&local_c0,param_3,0,
                      uVar20 & 0xffffffff00000000,0,uVar21);
      }
    }
  }
  else {
    FUN_18053fc00(param_6 * DAT_1808abfc4 * param_7 + DAT_1808ac2f0);
    param_9._0_4_ = (float)FUN_18053fc00();
    param_9._4_4_ =
         FUN_18053fc00((param_8._4_4_ + *(float *)((longlong)puVar5 + 4)) * fVar2 -
                       param_7 * DAT_1808ac404 * fVar2);
    FUN_180322fd0(param_1,param_4,param_5,param_6,&param_9,CONCAT44(uVar10,param_7),
                  CONCAT44(uVar21,uVar9));
  }
  return uVar7;
}



/* ===== 1803249c0 FUN_1803249c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803249c0(ulonglong param_1,float *param_2,float *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  float fVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  float *pfVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined4 *puVar11;
  float *pfVar12;
  longlong lVar13;
  char *pcVar14;
  float *pfVar15;
  char ****ppppcVar16;
  ulonglong uVar17;
  undefined8 ****ppppuVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  float fVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_408 [8];
  undefined1 auStack_400 [24];
  undefined8 ****ppppuStack_3e8;
  undefined8 uStack_3e0;
  char ****ppppcStack_3d8;
  float *pfStack_3d0;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b0;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_398;
  float fStack_394;
  longlong lStack_390;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float afStack_378 [2];
  longlong *plStack_370;
  float *pfStack_368;
  float *pfStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  ulonglong uStack_340;
  undefined8 ****ppppuStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  ulonglong uStack_320;
  longlong **pplStack_318;
  float *pfStack_310;
  float *pfStack_308;
  float *pfStack_300;
  longlong *plStack_2f8;
  float *pfStack_2f0;
  longlong alStack_2e8 [4];
  undefined8 ****appppuStack_2c8 [3];
  ulonglong uStack_2b0;
  undefined8 ****appppuStack_2a8 [3];
  ulonglong uStack_290;
  char ****appppcStack_288 [3];
  ulonglong uStack_270;
  char ****appppcStack_268 [3];
  ulonglong uStack_250;
  ulonglong uStack_248;
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *apuStack_178 [3];
  ulonglong uStack_160;
  char *local_158;
  undefined8 local_150;
  char *local_148;
  float *local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 local_120;
  float local_118;
  float fStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float local_f8;
  float local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined1 local_d0 [32];
  ulonglong local_b0;
  undefined1 local_78 [88];
  
  fVar24 = DAT_1808ac8e4;
  fVar30 = DAT_1808ac7ec;
  fVar27 = DAT_1808ac34c;
  local_b0 = DAT_180919500 ^ (ulonglong)apuStack_178;
  local_f4 = (param_3[1] - _DAT_1809f7338) * DAT_1808ac1f4 + param_2[1];
  local_f8 = (*param_3 - DAT_1808acbc8) * DAT_1808ac1f4 + *param_2;
  fVar33 = local_f8 + DAT_1808ac8e4;
  local_118 = local_f8 + DAT_1808acbc8;
  fVar29 = local_118 - DAT_1808ac8e4;
  fVar32 = local_f4 + DAT_1808ac7ec;
  fStack_114 = local_f4 + _DAT_1808acaf8;
  local_148 = (char *)CONCAT44(local_148._4_4_,DAT_1808ac34c);
  local_150 = (float *)CONCAT44(local_150._4_4_,DAT_1808ac900);
  local_158._0_4_ = DAT_180960eec;
  FUN_1802b4b90(param_1,&local_f8,&local_118,
                (int)(longlong)((float)(DAT_180960f60 >> 0x18) + DAT_1808ac1f4) << 0x18 |
                DAT_180960f60 & 0xffffff);
  pcVar14 = &DAT_1809f7340;
  if (0xf < DAT_1809f7358) {
    pcVar14 = _DAT_1809f7340;
  }
  fStack_114 = fVar32 + _DAT_1808ac780;
  lVar13 = DAT_181107a18;
  if ((DAT_181107a18 == 0) && (lVar13 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar13 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if (((((uint)DAT_180960ec0 & 0xff000000) != 0) && (pcVar14 != (char *)0x0)) && (*pcVar14 != '\0'))
  {
    if (lVar13 == 0) {
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
    local_108 = *(float *)(param_1 + 0x60);
    fStack_104 = *(float *)(param_1 + 100);
    uStack_100 = *(undefined4 *)(param_1 + 0x68);
    uStack_fc = *(undefined4 *)(param_1 + 0x6c);
    local_130 = 0;
    local_138 = (float *)((ulonglong)local_138._4_4_ << 0x20);
    local_140 = (float *)0x0;
    local_150 = &local_108;
    local_158 = (char *)CONCAT44(local_158._4_4_,DAT_180960ec0);
    local_148 = pcVar14;
    local_118 = fVar33;
    FUN_18040a900(lVar13,param_1,DAT_1808ac940,&local_118);
  }
  fVar25 = DAT_1808ac9dc;
  local_118 = 29.706;
  fStack_114 = 29.706;
  local_108 = fVar29 - DAT_1808ac9dc;
  local_120 = DAT_180960f38;
  local_128 = 400;
  local_130 = 8;
  local_138 = &local_118;
  local_140 = &local_108;
  local_148 = (char *)CONCAT44(local_148._4_4_,fVar24);
  local_150._0_4_ = DAT_1808acbd8;
  local_158 = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M342 151C355 139 355 118 342 106C330 93 309 93 297 106L192 211L86 106C74 93 53 93 41 106C28 118 28 139 41 151L146 256L41 362C28 374 28 395 41 407C53 420 74 420 86 407L191 302L297 407C309 420 330 420 342 407C355 395 355 374 342 362L237 256L342 151L342 151Z\"/></svg>"
  ;
  fStack_104 = fVar32;
  cVar5 = FUN_1803243c0(param_1,"##confirm_close",0,"fa_xmark");
  if (cVar5 != '\0') {
    DAT_1809f7334 = 0;
  }
  fVar24 = (float)FUN_18053fc00(fVar30);
  fVar30 = fVar27;
  if (fVar27 <= fVar24) {
    fVar30 = fVar24;
  }
  fVar31 = (local_f8 + DAT_1808acbc8) - fVar30;
  fVar28 = fVar32 + fVar25 + fVar27;
  fVar30 = fVar30 + local_f8;
  local_150 = (float *)((ulonglong)local_150._4_4_ << 0x20);
  local_158 = (char *)((ulonglong)local_158 & 0xffffffff00000000);
  local_118 = fVar30;
  fStack_114 = fVar32 + fVar25;
  local_108 = fVar31;
  fStack_104 = fVar28;
  FUN_1803fe590(param_1,&local_118,&local_108,DAT_180960f48);
  fVar24 = DAT_1808ac930;
  pcVar14 = &DAT_1809f7360;
  if (0xf < DAT_1809f7378) {
    pcVar14 = _DAT_1809f7360;
  }
  lVar13 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar13 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if (((((uint)DAT_180960ec0 & 0xff000000) != 0) && (pcVar14 != (char *)0x0)) && (*pcVar14 != '\0'))
  {
    if (lVar13 == 0) {
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
    local_118 = *(float *)(param_1 + 0x60);
    fStack_114 = *(float *)(param_1 + 100);
    uStack_110 = *(undefined4 *)(param_1 + 0x68);
    uStack_10c = *(undefined4 *)(param_1 + 0x6c);
    local_130 = 0;
    local_138 = (float *)((ulonglong)local_138 & 0xffffffff00000000);
    local_140 = (float *)0x0;
    local_150 = &local_118;
    local_158 = (char *)CONCAT44(local_158._4_4_,DAT_180960ec0);
    local_148 = pcVar14;
    local_108 = fVar33;
    fStack_104 = fVar28;
    FUN_18040a900(lVar13,param_1,DAT_1808ac930,&local_108);
  }
  fVar28 = fVar28 + fVar24;
  fVar32 = fVar28 + fVar27;
  local_150 = (float *)((ulonglong)local_150 & 0xffffffff00000000);
  local_158 = (char *)((ulonglong)local_158 & 0xffffffff00000000);
  local_118 = fVar30;
  fStack_114 = fVar28;
  local_108 = fVar31;
  fStack_104 = fVar32;
  FUN_1803fe590(param_1,&local_118,&local_108,DAT_180960f48);
  uVar26 = DAT_180960f38;
  fVar29 = fVar29 - DAT_1808acb34;
  local_108 = 75.0;
  fStack_104 = 30.0;
  uStack_e8 = 0;
  local_e0 = 6;
  local_d8 = 0xf;
  local_f0._0_6_ = CONCAT24(s_Cancel_180767a24._4_2_,s_Cancel_180767a24._0_4_);
  local_f0 = (float *)(ulonglong)(uint6)local_f0;
  local_118 = fVar29;
  fStack_114 = fVar32;
  pfVar8 = (float *)FUN_18035eb30(local_d0,&local_f0);
  if (0xf < *(ulonglong *)(pfVar8 + 6)) {
    pfVar8 = *(float **)pfVar8;
  }
  local_120 = uVar26;
  local_128 = 400;
  local_130 = 0x10;
  local_138 = &local_108;
  local_140 = &local_118;
  local_148 = (char *)((ulonglong)local_148 & 0xffffffff00000000);
  local_150 = (float *)((ulonglong)local_150 & 0xffffffff00000000);
  local_158 = (char *)0x0;
  cVar5 = FUN_1803243c0(param_1,"##confirm_cancel",pfVar8,0);
  FUN_18000f890(local_d0);
  if (local_d8 < 0x10) {
LAB_180324ed9:
    uVar26 = DAT_180960f38;
    if (cVar5 != '\0') {
      DAT_1809f7334 = 0;
    }
    local_108 = 75.0;
    fStack_104 = 30.0;
    fVar29 = fVar29 + DAT_1808acad8;
    uStack_e8 = 0;
    local_e0 = 6;
    local_d8 = 0xf;
    local_f0._0_6_ = CONCAT24(s_Delete_18075fa0c._4_2_,s_Delete_18075fa0c._0_4_);
    local_f0 = (float *)(ulonglong)(uint6)local_f0;
    local_118 = fVar29;
    fStack_114 = fVar32;
    puVar9 = (undefined8 *)FUN_18035eb30(local_d0,&local_f0);
    if (0xf < (ulonglong)puVar9[3]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    local_120 = uVar26;
    local_128 = 400;
    local_130 = 0x10;
    local_138 = &local_108;
    local_140 = &local_118;
    local_148 = (char *)((ulonglong)local_148 & 0xffffffff00000000);
    local_150 = (float *)((ulonglong)local_150 & 0xffffffff00000000);
    local_158 = (char *)0x0;
    bVar6 = FUN_1803243c0(param_1,"##confirm_delete",puVar9,0);
    param_1 = (ulonglong)bVar6;
    FUN_18000f890(local_d0);
    if (local_d8 < 0x10) goto LAB_180324feb;
    pfVar15 = (float *)(local_d8 + 1);
    pfVar8 = local_f0;
    if ((float *)0xfff < pfVar15) {
      pfVar8 = *(float **)(local_f0 + -2);
      if (0x1f < (ulonglong)((longlong)local_f0 + (-8 - (longlong)pfVar8))) goto LAB_180325059;
      pfVar15 = (float *)(local_d8 + 0x28);
    }
    thunk_FUN_1803d64e0(pfVar8,pfVar15);
LAB_180324feb:
    if (bVar6 != 0) {
      if (DAT_1809f73b8 != (longlong *)0x0) {
        (**(code **)(*DAT_1809f73b8 + 0x10))();
      }
      DAT_1809f7334 = 0;
    }
    _DAT_1809f7338 = 93.412;
    return;
  }
  pfVar15 = (float *)(local_d8 + 1);
  pfVar12 = local_f0;
  if (pfVar15 < (float *)0x1000) {
LAB_180324ed4:
    thunk_FUN_1803d64e0(pfVar12,pfVar15);
    goto LAB_180324ed9;
  }
  pfVar12 = *(float **)(local_f0 + -2);
  if ((ulonglong)((longlong)local_f0 + (-8 - (longlong)pfVar12)) < 0x20) {
    pfVar15 = (float *)(local_d8 + 0x28);
    goto LAB_180324ed4;
  }
LAB_180325059:
  lVar13 = 5;
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)();
  local_158 = (char *)0x0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  auStack_1b8 = ZEXT416((uint)fVar28);
  auStack_1c8 = ZEXT416((uint)fVar29);
  auStack_1d8 = ZEXT416((uint)fVar30);
  auStack_1e8 = ZEXT416((uint)fVar32);
  auStack_1f8 = ZEXT416((uint)fVar24);
  auStack_208 = ZEXT416((uint)fVar27);
  auStack_218 = ZEXT416((uint)fVar33);
  uStack_248 = DAT_180919500 ^ (ulonglong)auStack_408;
  lStack_390 = lVar13;
  apuStack_178[0] = local_78;
  uStack_160 = param_1;
  if (DAT_180cd0fa6 == '\0') {
    DAT_180cd0fa6 = '\x01';
    FUN_18035be50();
    FUN_18035dd90();
  }
  fVar29 = DAT_1808acbc8;
  fVar24 = DAT_1808ac8e4;
  fVar30 = DAT_1808ac7ec;
  fVar27 = DAT_1808ac34c;
  if ((DAT_181107278 < 0) ||
     ((int)(DAT_1811078d8 - DAT_1811078d0 >> 3) * -0xf0f0f0f <= DAT_181107278)) {
    DAT_181107278 = 0;
  }
  fStack_37c = (pfVar8[1] - _DAT_1809f7338) * DAT_1808ac1f4 + pfVar15[1];
  fStack_380 = (*pfVar8 - DAT_1808acbc8) * DAT_1808ac1f4 + *pfVar15;
  fStack_384 = fStack_380 + DAT_1808ac8e4;
  fStack_398 = fStack_380 + DAT_1808acbc8;
  fStack_388 = fStack_398 - DAT_1808ac8e4;
  fStack_3a8 = fStack_37c + DAT_1808ac7ec;
  afStack_378[0] = (fStack_388 - fStack_384) * DAT_1808ac1f4;
  bVar23 = DAT_1809f7128 != 0;
  if (DAT_1809f7128 == 0) {
    fVar32 = 0.0;
  }
  else {
    fVar32 = DAT_1808aca18;
  }
  fVar32 = fVar32 + _DAT_1808acb48 + DAT_1808ac9e4 + DAT_1808ac7ec;
  fStack_394 = fVar32 + fStack_37c;
  ppppcStack_3d8 = (char ****)CONCAT44(ppppcStack_3d8._4_4_,DAT_1808ac34c);
  uStack_3e0 = (undefined8 ****)CONCAT44(uStack_3e0._4_4_,DAT_1808ac900);
  ppppuStack_3e8._0_4_ = (float)DAT_180960eec;
  FUN_1802b4b90(DAT_1808ac900,&fStack_380,&fStack_398,
                (int)(longlong)((float)(DAT_180960f60 >> 0x18) + DAT_1808ac1f4) << 0x18 |
                DAT_180960f60 & 0xffffff);
  FUN_18035ee30(appppcStack_268,"menu_user_language_new_title");
  ppppcVar16 = (char ****)appppcStack_268;
  if (0xf < uStack_250) {
    ppppcVar16 = appppcStack_268[0];
  }
  fStack_398 = fStack_384;
  fStack_394 = fStack_3a8 + _DAT_1808ac780;
  lVar13 = DAT_181107a18;
  if ((DAT_181107a18 == 0) && (lVar13 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar13 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if (((((uint)DAT_180960ec0 & 0xff000000) != 0) && (ppppcVar16 != (char ****)0x0)) &&
     (*(char *)ppppcVar16 != '\0')) {
    if (lVar13 == 0) {
      lVar13 = *(longlong *)(*(longlong *)(lStack_390 + 0x38) + 0x18);
    }
    uStack_358 = *(undefined8 *)(lStack_390 + 0x60);
    uStack_350 = *(undefined8 *)(lStack_390 + 0x68);
    uStack_3c0 = 0;
    uStack_3c8 = (float *)((ulonglong)uStack_3c8._4_4_ << 0x20);
    pfStack_3d0 = (float *)0x0;
    uStack_3e0 = (undefined8 ****)&uStack_358;
    ppppuStack_3e8 = (undefined8 ****)CONCAT44(ppppuStack_3e8._4_4_,DAT_180960ec0);
    ppppcStack_3d8 = ppppcVar16;
    FUN_18040a900(lVar13,lStack_390,DAT_1808ac940,&fStack_398);
  }
  fVar33 = DAT_1808ac9dc;
  fStack_398 = 29.706;
  fStack_394 = 29.706;
  fStack_3a4 = fStack_388 - DAT_1808ac9dc;
  uStack_3b0 = DAT_180960f38;
  uStack_3b8 = 400;
  uStack_3c0 = 8;
  uStack_3c8 = &fStack_398;
  pfStack_3d0 = &fStack_3a4;
  ppppcStack_3d8 = (char ****)CONCAT44(ppppcStack_3d8._4_4_,fVar24);
  uStack_3e0._0_4_ = DAT_1808acbd8;
  ppppuStack_3e8 = (undefined8 ****)0x180746380;
  fStack_3a0 = fStack_3a8;
  cVar5 = FUN_1803243c0(lStack_390,"##language_close",0,"fa_xmark");
  if (cVar5 != '\0') {
    DAT_1809f7334 = 0;
  }
  fVar33 = fStack_3a8 + fVar33;
  fStack_3a8 = fVar33;
  fVar25 = (float)FUN_18053fc00(fVar30);
  fVar24 = fVar27;
  if (fVar27 <= fVar25) {
    fVar24 = fVar25;
  }
  fStack_3a4 = (fStack_380 + fVar29) - fVar24;
  fStack_3a0 = fVar33 + fVar27;
  fStack_398 = fVar24 + fStack_380;
  uStack_3e0 = (undefined8 ****)((ulonglong)uStack_3e0._4_4_ << 0x20);
  ppppuStack_3e8 = (undefined8 ****)((ulonglong)ppppuStack_3e8 & 0xffffffff00000000);
  fStack_394 = fVar33;
  FUN_1803fe590(lStack_390,&fStack_398,&fStack_3a4,DAT_180960f48);
  fStack_3a8 = fStack_3a8 + fVar27;
  plStack_370 = &lStack_390;
  pfStack_368 = &fStack_384;
  pfStack_360 = &fStack_3a8;
  pplStack_318 = &plStack_370;
  pfStack_310 = &fStack_388;
  pfStack_308 = afStack_378;
  pfStack_300 = &fStack_3a8;
  plStack_2f8 = &lStack_390;
  pfStack_2f0 = &fStack_380;
  ppppuStack_3e8 = (undefined8 ****)0x30;
  FUN_180326010(&pplStack_318,"##language_name","menu_user_language_new_name",&DAT_181107378);
  ppppuStack_3e8 = (undefined8 ****)0x8;
  FUN_180326010(&pplStack_318,"##language_short","menu_user_language_new_shortname",&DAT_181107588);
  ppppuStack_3e8 = (undefined8 ****)0x30;
  FUN_180326010(&pplStack_318,"##language_local","menu_user_language_new_localizedname",
                &DAT_1811070d0);
  FUN_180325ee0(&plStack_370,"menu_user_language_new_baselanguage");
  fVar25 = (float)FUN_18053f0d0(DAT_1808ac710);
  fVar33 = afStack_378[0];
  fVar25 = fVar25 + fStack_3a8;
  fVar28 = fStack_388 - afStack_378[0];
  fStack_398 = afStack_378[0];
  fStack_394 = 23.706;
  FUN_1803e89e0("##language_base");
  lVar13 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar13 = *(longlong *)(lVar13 + 0x14f8);
  uStack_358 = CONCAT44(fVar25,fVar28);
  *(ulonglong *)(lVar13 + 0x118) = CONCAT44(fVar25,fVar28);
  *(undefined1 *)(lVar13 + 0x159) = 1;
  cVar5 = FUN_180415e30("##frame",&fStack_398,0);
  uVar7 = FUN_1803dd930(0);
  iVar19 = *(int *)(DAT_180ca0a50 + 0x1578);
  if (iVar19 == 0) {
    uVar26 = 0;
  }
  else {
    uVar26 = CONCAT31((int3)((uint)iVar19 >> 8),iVar19 == *(int *)(DAT_180ca0a50 + 0x1ee8));
  }
  uVar26 = FUN_1802b3850(*(undefined4 *)(DAT_180ca0a50 + 0x1ee8),uVar26,uVar7);
  fStack_3a0 = fVar25 + DAT_1808ac97c;
  fStack_3a4 = fVar28 + fVar33;
  uVar26 = FUN_1802b38e0(DAT_180960ef0,DAT_180960ef4,uVar26);
  fVar31 = DAT_1808ac7ac;
  uStack_3e0 = (undefined8 ****)((ulonglong)uStack_3e0 & 0xffffffff00000000);
  ppppuStack_3e8._0_4_ = DAT_1808ac7ac;
  FUN_1803fe590(lStack_390,&uStack_358,&fStack_3a4,uVar26);
  FUN_180024b50(appppcStack_288,DAT_1811078d0 + 0x20 + (longlong)DAT_181107278 * 0x88);
  fVar22 = DAT_180960ec0;
  ppppcVar16 = (char ****)appppcStack_288;
  if (0xf < uStack_270) {
    ppppcVar16 = appppcStack_288[0];
  }
  fStack_3a4 = fVar28 + fVar31;
  fStack_3a0 = (float)FUN_18053f0d0(DAT_1808ac658);
  fVar4 = DAT_1808ac930;
  fStack_3a0 = fStack_3a0 + fVar25;
  lVar13 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar13 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if (((((uint)fVar22 & 0xff000000) != 0) && (ppppcVar16 != (char ****)0x0)) &&
     (*(char *)ppppcVar16 != '\0')) {
    if (lVar13 == 0) {
      lVar13 = *(longlong *)(*(longlong *)(lStack_390 + 0x38) + 0x18);
    }
    ppppuStack_338 = *(undefined8 *****)(lStack_390 + 0x60);
    uStack_330 = *(undefined8 *)(lStack_390 + 0x68);
    uStack_3c0 = 0;
    uStack_3c8 = (float *)((ulonglong)uStack_3c8 & 0xffffffff00000000);
    pfStack_3d0 = (float *)0x0;
    uStack_3e0 = &ppppuStack_338;
    ppppuStack_3e8._0_4_ = fVar22;
    ppppcStack_3d8 = ppppcVar16;
    FUN_18040a900(lVar13,lStack_390,DAT_1808ac930,&fStack_3a4);
    fVar22 = DAT_180960ec0;
  }
  fStack_3a4 = (float)FUN_18053fc00(DAT_1808ac86c);
  fStack_3a4 = ((fVar28 + fVar33) - fVar31) - fStack_3a4;
  fStack_3a0 = (float)FUN_18053f0d0(fVar25 + DAT_1808ac728);
  fStack_3a0 = fStack_3a0 + fVar27;
  ppppcStack_3d8 = (char ****)CONCAT44(ppppcStack_3d8._4_4_,fVar22);
  uStack_3e0 = (undefined8 ****)CONCAT44(uStack_3e0._4_4_,DAT_1808ac880);
  ppppuStack_3e8 = (undefined8 ****)&fStack_3a4;
  FUN_180322fd0(lStack_390,"nl_glyph_angle_down",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M201 343C213 356 234 356 246 343L406 183C419 171 419 150 406 138C394 125 373 125 361 138L224 275L86 138C74 125 53 125 41 138C28 150 28 171 41 183L201 343L201 343ZM201 343Z\"/></svg>"
                ,DAT_1808acbe4);
  if (cVar5 != '\0') {
    FUN_1802b4d80("##list");
  }
  cVar5 = FUN_1802b8820(&uStack_358,&fStack_398);
  puVar20 = auStack_408;
  if (cVar5 != '\0') {
    iVar19 = 0;
    if (0 < (int)(DAT_1811078d8 - DAT_1811078d0 >> 3) * -0xf0f0f0f) {
      do {
        FUN_1803e8a70(iVar19);
        uVar7 = DAT_180cd048f;
        puVar9 = (undefined8 *)((longlong)iVar19 * 0x88 + DAT_1811078d0);
        DAT_180cd048f = 1;
        if (0xf < (ulonglong)puVar9[3]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        cVar5 = FUN_1802b74f0(puVar9,iVar19 == DAT_181107278,0,0);
        DAT_180cd048f = uVar7;
        if (cVar5 != '\0') {
          DAT_181107278 = iVar19;
          FUN_1803ee1f0();
        }
        iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar1 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < (int)(DAT_1811078d8 - DAT_1811078d0 >> 3) * -0xf0f0f0f);
    }
    FUN_1802b5590();
  }
  iVar19 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar19 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar19 + -1;
  }
  fVar33 = DAT_1808ac9f8;
  fStack_3a8 = fStack_3a8 + DAT_1808ac9f8;
  uStack_358._0_4_ = (fStack_380 + fVar29) - fVar24;
  uStack_358._4_4_ = fStack_3a8 + fVar27;
  fStack_3a4 = fVar24 + fStack_380;
  uStack_3e0 = (undefined8 ****)((ulonglong)uStack_3e0 & 0xffffffff00000000);
  ppppuStack_3e8 = (undefined8 ****)((ulonglong)ppppuStack_3e8 & 0xffffffff00000000);
  fStack_3a0 = fStack_3a8;
  FUN_1803fe590(lStack_390,&fStack_3a4,&uStack_358,DAT_180960f48);
  fVar25 = fStack_3a8 + fVar27;
  fStack_3a8 = fVar25;
  if (bVar23) {
    pcVar14 = &DAT_1809f7118;
    if (0xf < DAT_1809f7130) {
      pcVar14 = (char *)CONCAT44(uRam00000001809f711c,_DAT_1809f7118);
    }
    uStack_358 = CONCAT44(uStack_358._4_4_,fStack_384);
    fVar30 = (float)FUN_18053f0d0(fVar30);
    uStack_358 = CONCAT44(fVar30 + fVar25,(float)uStack_358);
    lVar13 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar13 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    if ((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) {
      if (lVar13 == 0) {
        lVar13 = *(longlong *)(*(longlong *)(lStack_390 + 0x38) + 0x18);
      }
      ppppuStack_338 = *(undefined8 *****)(lStack_390 + 0x60);
      uStack_330 = *(undefined8 *)(lStack_390 + 0x68);
      uStack_3c0 = 0;
      uStack_3c8 = (float *)((ulonglong)uStack_3c8 & 0xffffffff00000000);
      pfStack_3d0 = (float *)0x0;
      uStack_3e0 = &ppppuStack_338;
      ppppuStack_3e8 = (undefined8 ****)CONCAT44(ppppuStack_3e8._4_4_,0xff6163db);
      ppppcStack_3d8 = (char ****)pcVar14;
      FUN_18040a900(lVar13,lStack_390,fVar4,&uStack_358);
      fVar25 = fStack_3a8;
    }
    fStack_3a8 = fVar25 + fVar33;
    uStack_358._0_4_ = (fStack_380 + fVar29) - fVar24;
    uStack_358._4_4_ = fStack_3a8 + fVar27;
    fStack_3a4 = fVar24 + fStack_380;
    uStack_3e0 = (undefined8 ****)((ulonglong)uStack_3e0 & 0xffffffff00000000);
    ppppuStack_3e8 = (undefined8 ****)((ulonglong)ppppuStack_3e8 & 0xffffffff00000000);
    fStack_3a0 = fStack_3a8;
    FUN_1803fe590(lStack_390,&fStack_3a4,&uStack_358,DAT_180960f48);
    fStack_3a8 = fStack_3a8 + fVar27;
  }
  fVar27 = fStack_388 - DAT_1808acb34;
  FUN_18035ee30(appppuStack_2a8,"menu_user_language_new_cancel");
  FUN_18035ee30(appppuStack_2c8,"menu_user_language_new_create");
  uStack_358 = 0x41f0000042960000;
  fStack_3a0 = fStack_3a8;
  ppppuVar18 = appppuStack_2a8;
  if (0xf < uStack_290) {
    ppppuVar18 = appppuStack_2a8[0];
  }
  uStack_3b0 = DAT_180960f38;
  uStack_3b8 = 400;
  uStack_3c0 = 0x10;
  uStack_3c8 = (float *)&uStack_358;
  pfStack_3d0 = &fStack_3a4;
  ppppcStack_3d8 = (char ****)((ulonglong)ppppcStack_3d8 & 0xffffffff00000000);
  uStack_3e0 = (undefined8 ****)((ulonglong)uStack_3e0 & 0xffffffff00000000);
  ppppuStack_3e8 = (undefined8 ****)0x0;
  fStack_3a4 = fVar27;
  cVar5 = FUN_1803243c0(lStack_390,"##language_cancel",ppppuVar18,0);
  if (cVar5 != '\0') {
    DAT_1809f7334 = 0;
  }
  uStack_358 = 0x41f0000042960000;
  fStack_3a4 = fVar27 + DAT_1808acad8;
  fStack_3a0 = fStack_3a8;
  ppppuVar18 = appppuStack_2c8;
  if (0xf < uStack_2b0) {
    ppppuVar18 = appppuStack_2c8[0];
  }
  uStack_3b0 = DAT_180960f38;
  uStack_3b8 = 400;
  uStack_3c0 = 0x10;
  uStack_3c8 = (float *)&uStack_358;
  pfStack_3d0 = &fStack_3a4;
  ppppcStack_3d8 = (char ****)((ulonglong)ppppcStack_3d8 & 0xffffffff00000000);
  uStack_3e0 = (undefined8 ****)((ulonglong)uStack_3e0 & 0xffffffff00000000);
  ppppuStack_3e8 = (undefined8 ****)0x0;
  cVar5 = FUN_1803243c0(lStack_390,"##language_create",ppppuVar18,0);
  iVar19 = DAT_181107278;
  puVar21 = auStack_408;
  if (cVar5 == '\0') goto LAB_180325e3b;
  uStack_330 = 0;
  uStack_328 = 0;
  uStack_320 = 0xf;
  ppppuStack_338 = (undefined8 ****)0x0;
  alStack_2e8[0] = 0;
  alStack_2e8[1] = 0;
  alStack_2e8[2] = 0;
  alStack_2e8[3] = 0;
  sVar10 = strlen(&DAT_1811070d0);
  FUN_1800133a0(alStack_2e8,&DAT_1811070d0,sVar10);
  pplStack_318 = (longlong **)0x0;
  pfStack_310 = (float *)0x0;
  pfStack_308 = (float *)0x0;
  pfStack_300 = (float *)0x0;
  sVar10 = strlen(&DAT_181107588);
  FUN_1800133a0(&pplStack_318,&DAT_181107588,sVar10);
  uStack_358 = 0;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_340 = 0;
  sVar10 = strlen(&DAT_181107378);
  FUN_1800133a0(&uStack_358,&DAT_181107378,sVar10);
  ppppuStack_3e8 = &ppppuStack_338;
  cVar5 = FUN_18035ef50(&uStack_358,&pplStack_318,alStack_2e8,iVar19);
  if (uStack_340 < 0x10) {
LAB_180325d0b:
    FUN_18000f890(&pplStack_318);
    if (0xf < (ulonglong)alStack_2e8[3]) {
      uVar17 = alStack_2e8[3] + 1;
      lVar13 = alStack_2e8[0];
      if (0xfff < uVar17) {
        lVar13 = *(longlong *)(alStack_2e8[0] + -8);
        if (0x1f < (alStack_2e8[0] - lVar13) - 8U) goto LAB_180325ed4;
        uVar17 = alStack_2e8[3] + 0x28;
      }
      thunk_FUN_1803d64e0(lVar13,uVar17);
    }
    puVar21 = auStack_408;
    if (cVar5 == '\0') goto LAB_180325d67;
    DAT_1809f7334 = 0;
  }
  else {
    uVar17 = uStack_340 + 1;
    lVar13 = uStack_358;
    if (uVar17 < 0x1000) {
LAB_180325d05:
      thunk_FUN_1803d64e0(lVar13,uVar17);
      goto LAB_180325d0b;
    }
    lVar13 = *(longlong *)(uStack_358 + -8);
    if ((uStack_358 - lVar13) - 8U < 0x20) {
      uVar17 = uStack_340 + 0x28;
      goto LAB_180325d05;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar21 = auStack_400;
LAB_180325d67:
    puVar20 = puVar21;
    ppppuVar18 = &ppppuStack_338;
    if (0xf < uStack_320) {
      ppppuVar18 = ppppuStack_338;
    }
    *(undefined8 *)(puVar20 + -8) = 0x180325d7e;
    puVar11 = (undefined4 *)FUN_18035ee30(&pplStack_318,ppppuVar18);
    if (puVar11 != (undefined4 *)&DAT_1809f7118) {
      if (0xf < DAT_1809f7130) {
        uVar17 = DAT_1809f7130 + 1;
        lVar3 = CONCAT44(uRam00000001809f711c,_DAT_1809f7118);
        lVar13 = lVar3;
        if (0xfff < uVar17) {
          lVar13 = *(longlong *)(lVar3 + -8);
          if (0x1f < (lVar3 - lVar13) - 8U) {
LAB_180325ed4:
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar17 = DAT_1809f7130 + 0x28;
        }
        *(undefined8 *)(puVar20 + -8) = 0x180325dc7;
        thunk_FUN_1803d64e0(lVar13,uVar17);
      }
      _DAT_1809f7118 = *puVar11;
      uRam00000001809f711c = puVar11[1];
      uRam00000001809f7120 = puVar11[2];
      uRam00000001809f7124 = puVar11[3];
      DAT_1809f7128 = *(longlong *)(puVar11 + 4);
      DAT_1809f7130 = *(ulonglong *)(puVar11 + 6);
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0xf;
      *(undefined1 *)puVar11 = 0;
    }
    *(undefined8 *)(puVar20 + -8) = 0x180325e0d;
    FUN_18000f890(&pplStack_318);
    if (DAT_1809f7128 == 0) {
      ppppuVar18 = &ppppuStack_338;
      if (0xf < uStack_320) {
        ppppuVar18 = ppppuStack_338;
      }
      *(undefined8 *)(puVar20 + -8) = 0x180325e31;
      FUN_180029840(&DAT_1809f7118,ppppuVar18,uStack_328);
    }
  }
  *(undefined8 *)(puVar20 + -8) = 0x180325e3b;
  FUN_18000f890(&ppppuStack_338);
  puVar21 = puVar20;
LAB_180325e3b:
  *(undefined8 *)(puVar21 + -8) = 0x180325e4d;
  _DAT_1809f7338 = fVar32;
  FUN_18000f890(appppuStack_2c8);
  *(undefined8 *)(puVar21 + -8) = 0x180325e57;
  FUN_18000f890(appppuStack_2a8);
  *(undefined8 *)(puVar21 + -8) = 0x180325e64;
  FUN_18000f890(appppcStack_288);
  *(undefined8 *)(puVar21 + -8) = 0x180325e71;
  FUN_18000f890(appppcStack_268);
  *(undefined8 *)(puVar21 + -8) = 0x180325e80;
  return;
}



/* ===== 180325060 FUN_180325060 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180325060(longlong param_1,float *param_2,float *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined1 uVar7;
  size_t sVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  char ****ppppcVar12;
  ulonglong uVar13;
  undefined8 ****ppppuVar14;
  int iVar15;
  char *pcVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  float fVar19;
  bool bVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [24];
  undefined8 ****local_278;
  undefined8 local_270;
  char ****local_268;
  float *local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined4 local_240;
  float local_238;
  float local_234;
  float local_230;
  float local_228;
  float local_224;
  longlong local_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208 [2];
  longlong *local_200;
  float *local_1f8;
  float *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  ulonglong local_1d0;
  undefined8 ****local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  ulonglong local_1b0;
  longlong **local_1a8;
  float *pfStack_1a0;
  float *local_198;
  float *local_190;
  longlong *local_188;
  float *local_180;
  longlong local_178 [4];
  undefined8 ****local_158 [3];
  ulonglong local_140;
  undefined8 ****local_138 [3];
  ulonglong local_120;
  char ****local_118 [3];
  ulonglong local_100;
  char ****local_f8 [3];
  ulonglong local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_298;
  local_220 = param_1;
  if (DAT_180cd0fa6 == '\0') {
    DAT_180cd0fa6 = '\x01';
    FUN_18035be50();
    FUN_18035dd90();
  }
  fVar5 = DAT_1808acbc8;
  fVar27 = DAT_1808ac8e4;
  fVar23 = DAT_1808ac7ec;
  fVar25 = DAT_1808ac34c;
  if ((DAT_181107278 < 0) ||
     ((int)(DAT_1811078d8 - DAT_1811078d0 >> 3) * -0xf0f0f0f <= DAT_181107278)) {
    DAT_181107278 = 0;
  }
  local_20c = (param_3[1] - _DAT_1809f7338) * DAT_1808ac1f4 + param_2[1];
  local_210 = (*param_3 - DAT_1808acbc8) * DAT_1808ac1f4 + *param_2;
  local_214 = local_210 + DAT_1808ac8e4;
  local_228 = local_210 + DAT_1808acbc8;
  local_218 = local_228 - DAT_1808ac8e4;
  local_238 = local_20c + DAT_1808ac7ec;
  local_208[0] = (local_218 - local_214) * DAT_1808ac1f4;
  bVar20 = DAT_1809f7128 != 0;
  if (DAT_1809f7128 == 0) {
    fVar26 = 0.0;
  }
  else {
    fVar26 = DAT_1808aca18;
  }
  fVar26 = fVar26 + _DAT_1808acb48 + DAT_1808ac9e4 + DAT_1808ac7ec;
  local_224 = fVar26 + local_20c;
  local_268 = (char ****)CONCAT44(local_268._4_4_,DAT_1808ac34c);
  local_270 = (undefined8 ****)CONCAT44(local_270._4_4_,DAT_1808ac900);
  local_278._0_4_ = (float)DAT_180960eec;
  FUN_1802b4b90(local_220,&local_210,&local_228,
                (int)(longlong)((float)(DAT_180960f60 >> 0x18) + DAT_1808ac1f4) << 0x18 |
                DAT_180960f60 & 0xffffff);
  FUN_18035ee30(local_f8,"menu_user_language_new_title");
  ppppcVar12 = (char ****)local_f8;
  if (0xf < local_e0) {
    ppppcVar12 = local_f8[0];
  }
  local_228 = local_214;
  local_224 = local_238 + _DAT_1808ac780;
  lVar11 = DAT_181107a18;
  if ((DAT_181107a18 == 0) && (lVar11 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar11 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if (((((uint)DAT_180960ec0 & 0xff000000) != 0) && (ppppcVar12 != (char ****)0x0)) &&
     (*(char *)ppppcVar12 != '\0')) {
    if (lVar11 == 0) {
      lVar11 = *(longlong *)(*(longlong *)(local_220 + 0x38) + 0x18);
    }
    local_1e8 = *(undefined8 *)(local_220 + 0x60);
    uStack_1e0 = *(undefined8 *)(local_220 + 0x68);
    local_250 = 0;
    local_258 = (float *)((ulonglong)local_258._4_4_ << 0x20);
    local_260 = (float *)0x0;
    local_270 = (undefined8 ****)&local_1e8;
    local_278 = (undefined8 ****)CONCAT44(local_278._4_4_,DAT_180960ec0);
    local_268 = ppppcVar12;
    FUN_18040a900(lVar11,local_220,DAT_1808ac940,&local_228);
  }
  fVar24 = DAT_1808ac9dc;
  local_228 = 29.706;
  local_224 = 29.706;
  local_234 = local_218 - DAT_1808ac9dc;
  local_240 = DAT_180960f38;
  local_248 = 400;
  local_250 = 8;
  local_258 = &local_228;
  local_260 = &local_234;
  local_268 = (char ****)CONCAT44(local_268._4_4_,fVar27);
  local_270._0_4_ = DAT_1808acbd8;
  local_278 = (undefined8 ****)0x180746380;
  local_230 = local_238;
  cVar6 = FUN_1803243c0(local_220,"##language_close",0,"fa_xmark");
  if (cVar6 != '\0') {
    DAT_1809f7334 = 0;
  }
  fVar24 = local_238 + fVar24;
  local_238 = fVar24;
  fVar21 = (float)FUN_18053fc00(fVar23);
  fVar27 = fVar25;
  if (fVar25 <= fVar21) {
    fVar27 = fVar21;
  }
  local_234 = (local_210 + fVar5) - fVar27;
  local_230 = fVar24 + fVar25;
  local_228 = fVar27 + local_210;
  local_270 = (undefined8 ****)((ulonglong)local_270._4_4_ << 0x20);
  local_278 = (undefined8 ****)((ulonglong)local_278 & 0xffffffff00000000);
  local_224 = fVar24;
  FUN_1803fe590(local_220,&local_228,&local_234,DAT_180960f48);
  local_238 = local_238 + fVar25;
  local_200 = &local_220;
  local_1f8 = &local_214;
  local_1f0 = &local_238;
  local_1a8 = &local_200;
  pfStack_1a0 = &local_218;
  local_198 = local_208;
  local_190 = &local_238;
  local_188 = &local_220;
  local_180 = &local_210;
  local_278 = (undefined8 ****)0x30;
  FUN_180326010(&local_1a8,"##language_name","menu_user_language_new_name",&DAT_181107378);
  local_278 = (undefined8 ****)0x8;
  FUN_180326010(&local_1a8,"##language_short","menu_user_language_new_shortname",&DAT_181107588);
  local_278 = (undefined8 ****)0x30;
  FUN_180326010(&local_1a8,"##language_local","menu_user_language_new_localizedname",&DAT_1811070d0)
  ;
  FUN_180325ee0(&local_200,"menu_user_language_new_baselanguage");
  fVar21 = (float)FUN_18053f0d0(DAT_1808ac710);
  fVar24 = local_208[0];
  fVar21 = fVar21 + local_238;
  fVar28 = local_218 - local_208[0];
  local_228 = local_208[0];
  local_224 = 23.706;
  FUN_1803e89e0("##language_base");
  lVar11 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar11 = *(longlong *)(lVar11 + 0x14f8);
  local_1e8 = CONCAT44(fVar21,fVar28);
  *(ulonglong *)(lVar11 + 0x118) = CONCAT44(fVar21,fVar28);
  *(undefined1 *)(lVar11 + 0x159) = 1;
  cVar6 = FUN_180415e30("##frame",&local_228,0);
  uVar7 = FUN_1803dd930(0);
  iVar15 = *(int *)(DAT_180ca0a50 + 0x1578);
  if (iVar15 == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = CONCAT31((int3)((uint)iVar15 >> 8),iVar15 == *(int *)(DAT_180ca0a50 + 0x1ee8));
  }
  uVar22 = FUN_1802b3850(*(undefined4 *)(DAT_180ca0a50 + 0x1ee8),uVar22,uVar7);
  local_230 = fVar21 + DAT_1808ac97c;
  local_234 = fVar28 + fVar24;
  uVar22 = FUN_1802b38e0(DAT_180960ef0,DAT_180960ef4,uVar22);
  fVar4 = DAT_1808ac7ac;
  local_270 = (undefined8 ****)((ulonglong)local_270 & 0xffffffff00000000);
  local_278._0_4_ = DAT_1808ac7ac;
  FUN_1803fe590(local_220,&local_1e8,&local_234,uVar22);
  FUN_180024b50(local_118,DAT_1811078d0 + 0x20 + (longlong)DAT_181107278 * 0x88);
  fVar19 = DAT_180960ec0;
  ppppcVar12 = (char ****)local_118;
  if (0xf < local_100) {
    ppppcVar12 = local_118[0];
  }
  local_234 = fVar28 + fVar4;
  local_230 = (float)FUN_18053f0d0(DAT_1808ac658);
  uVar22 = DAT_1808ac930;
  local_230 = local_230 + fVar21;
  lVar11 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar11 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if (((((uint)fVar19 & 0xff000000) != 0) && (ppppcVar12 != (char ****)0x0)) &&
     (*(char *)ppppcVar12 != '\0')) {
    if (lVar11 == 0) {
      lVar11 = *(longlong *)(*(longlong *)(local_220 + 0x38) + 0x18);
    }
    local_1c8 = *(undefined8 *****)(local_220 + 0x60);
    uStack_1c0 = *(undefined8 *)(local_220 + 0x68);
    local_250 = 0;
    local_258 = (float *)((ulonglong)local_258 & 0xffffffff00000000);
    local_260 = (float *)0x0;
    local_270 = &local_1c8;
    local_278._0_4_ = fVar19;
    local_268 = ppppcVar12;
    FUN_18040a900(lVar11,local_220,DAT_1808ac930,&local_234);
    fVar19 = DAT_180960ec0;
  }
  local_234 = (float)FUN_18053fc00(DAT_1808ac86c);
  local_234 = ((fVar28 + fVar24) - fVar4) - local_234;
  local_230 = (float)FUN_18053f0d0(fVar21 + DAT_1808ac728);
  local_230 = local_230 + fVar25;
  local_268 = (char ****)CONCAT44(local_268._4_4_,fVar19);
  local_270 = (undefined8 ****)CONCAT44(local_270._4_4_,DAT_1808ac880);
  local_278 = (undefined8 ****)&local_234;
  FUN_180322fd0(local_220,"nl_glyph_angle_down",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M201 343C213 356 234 356 246 343L406 183C419 171 419 150 406 138C394 125 373 125 361 138L224 275L86 138C74 125 53 125 41 138C28 150 28 171 41 183L201 343L201 343ZM201 343Z\"/></svg>"
                ,DAT_1808acbe4);
  if (cVar6 != '\0') {
    FUN_1802b4d80("##list");
  }
  cVar6 = FUN_1802b8820(&local_1e8,&local_228);
  puVar17 = auStack_298;
  if (cVar6 != '\0') {
    iVar15 = 0;
    if (0 < (int)(DAT_1811078d8 - DAT_1811078d0 >> 3) * -0xf0f0f0f) {
      do {
        FUN_1803e8a70(iVar15);
        uVar7 = DAT_180cd048f;
        puVar10 = (undefined8 *)((longlong)iVar15 * 0x88 + DAT_1811078d0);
        DAT_180cd048f = 1;
        if (0xf < (ulonglong)puVar10[3]) {
          puVar10 = (undefined8 *)*puVar10;
        }
        cVar6 = FUN_1802b74f0(puVar10,iVar15 == DAT_181107278,0,0);
        DAT_180cd048f = uVar7;
        if (cVar6 != '\0') {
          DAT_181107278 = iVar15;
          FUN_1803ee1f0();
        }
        iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar1 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)(DAT_1811078d8 - DAT_1811078d0 >> 3) * -0xf0f0f0f);
    }
    FUN_1802b5590();
  }
  iVar15 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar15 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar15 + -1;
  }
  fVar24 = DAT_1808ac9f8;
  local_238 = local_238 + DAT_1808ac9f8;
  local_1e8._0_4_ = (local_210 + fVar5) - fVar27;
  local_1e8._4_4_ = local_238 + fVar25;
  local_234 = fVar27 + local_210;
  local_270 = (undefined8 ****)((ulonglong)local_270 & 0xffffffff00000000);
  local_278 = (undefined8 ****)((ulonglong)local_278 & 0xffffffff00000000);
  local_230 = local_238;
  FUN_1803fe590(local_220,&local_234,&local_1e8,DAT_180960f48);
  fVar21 = local_238 + fVar25;
  local_238 = fVar21;
  if (bVar20) {
    pcVar16 = &DAT_1809f7118;
    if (0xf < DAT_1809f7130) {
      pcVar16 = (char *)CONCAT44(uRam00000001809f711c,_DAT_1809f7118);
    }
    local_1e8 = CONCAT44(local_1e8._4_4_,local_214);
    fVar23 = (float)FUN_18053f0d0(fVar23);
    local_1e8 = CONCAT44(fVar23 + fVar21,(float)local_1e8);
    lVar11 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar11 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    if ((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) {
      if (lVar11 == 0) {
        lVar11 = *(longlong *)(*(longlong *)(local_220 + 0x38) + 0x18);
      }
      local_1c8 = *(undefined8 *****)(local_220 + 0x60);
      uStack_1c0 = *(undefined8 *)(local_220 + 0x68);
      local_250 = 0;
      local_258 = (float *)((ulonglong)local_258 & 0xffffffff00000000);
      local_260 = (float *)0x0;
      local_270 = &local_1c8;
      local_278 = (undefined8 ****)CONCAT44(local_278._4_4_,0xff6163db);
      local_268 = (char ****)pcVar16;
      FUN_18040a900(lVar11,local_220,uVar22,&local_1e8);
      fVar21 = local_238;
    }
    local_238 = fVar21 + fVar24;
    local_1e8._0_4_ = (local_210 + fVar5) - fVar27;
    local_1e8._4_4_ = local_238 + fVar25;
    local_234 = fVar27 + local_210;
    local_270 = (undefined8 ****)((ulonglong)local_270 & 0xffffffff00000000);
    local_278 = (undefined8 ****)((ulonglong)local_278 & 0xffffffff00000000);
    local_230 = local_238;
    FUN_1803fe590(local_220,&local_234,&local_1e8,DAT_180960f48);
    local_238 = local_238 + fVar25;
  }
  fVar25 = local_218 - DAT_1808acb34;
  FUN_18035ee30(local_138,"menu_user_language_new_cancel");
  FUN_18035ee30(local_158,"menu_user_language_new_create");
  local_1e8 = 0x41f0000042960000;
  local_230 = local_238;
  ppppuVar14 = local_138;
  if (0xf < local_120) {
    ppppuVar14 = local_138[0];
  }
  local_240 = DAT_180960f38;
  local_248 = 400;
  local_250 = 0x10;
  local_258 = (float *)&local_1e8;
  local_260 = &local_234;
  local_268 = (char ****)((ulonglong)local_268 & 0xffffffff00000000);
  local_270 = (undefined8 ****)((ulonglong)local_270 & 0xffffffff00000000);
  local_278 = (undefined8 ****)0x0;
  local_234 = fVar25;
  cVar6 = FUN_1803243c0(local_220,"##language_cancel",ppppuVar14,0);
  if (cVar6 != '\0') {
    DAT_1809f7334 = 0;
  }
  local_1e8 = 0x41f0000042960000;
  local_234 = fVar25 + DAT_1808acad8;
  local_230 = local_238;
  ppppuVar14 = local_158;
  if (0xf < local_140) {
    ppppuVar14 = local_158[0];
  }
  local_240 = DAT_180960f38;
  local_248 = 400;
  local_250 = 0x10;
  local_258 = (float *)&local_1e8;
  local_260 = &local_234;
  local_268 = (char ****)((ulonglong)local_268 & 0xffffffff00000000);
  local_270 = (undefined8 ****)((ulonglong)local_270 & 0xffffffff00000000);
  local_278 = (undefined8 ****)0x0;
  cVar6 = FUN_1803243c0(local_220,"##language_create",ppppuVar14,0);
  iVar15 = DAT_181107278;
  puVar18 = auStack_298;
  if (cVar6 == '\0') goto LAB_180325e3b;
  uStack_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0xf;
  local_1c8 = (undefined8 ****)0x0;
  local_178[0] = 0;
  local_178[1] = 0;
  local_178[2] = 0;
  local_178[3] = 0;
  sVar8 = strlen(&DAT_1811070d0);
  FUN_1800133a0(local_178,&DAT_1811070d0,sVar8);
  local_1a8 = (longlong **)0x0;
  pfStack_1a0 = (float *)0x0;
  local_198 = (float *)0x0;
  local_190 = (float *)0x0;
  sVar8 = strlen(&DAT_181107588);
  FUN_1800133a0(&local_1a8,&DAT_181107588,sVar8);
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  sVar8 = strlen(&DAT_181107378);
  FUN_1800133a0(&local_1e8,&DAT_181107378,sVar8);
  local_278 = &local_1c8;
  cVar6 = FUN_18035ef50(&local_1e8,&local_1a8,local_178,iVar15);
  if (local_1d0 < 0x10) {
LAB_180325d0b:
    FUN_18000f890(&local_1a8);
    if (0xf < (ulonglong)local_178[3]) {
      uVar13 = local_178[3] + 1;
      lVar11 = local_178[0];
      if (0xfff < uVar13) {
        lVar11 = *(longlong *)(local_178[0] + -8);
        if (0x1f < (local_178[0] - lVar11) - 8U) goto LAB_180325ed4;
        uVar13 = local_178[3] + 0x28;
      }
      thunk_FUN_1803d64e0(lVar11,uVar13);
    }
    puVar18 = auStack_298;
    if (cVar6 == '\0') goto LAB_180325d67;
    DAT_1809f7334 = 0;
  }
  else {
    uVar13 = local_1d0 + 1;
    lVar11 = local_1e8;
    if (uVar13 < 0x1000) {
LAB_180325d05:
      thunk_FUN_1803d64e0(lVar11,uVar13);
      goto LAB_180325d0b;
    }
    lVar11 = *(longlong *)(local_1e8 + -8);
    if ((local_1e8 - lVar11) - 8U < 0x20) {
      uVar13 = local_1d0 + 0x28;
      goto LAB_180325d05;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar18 = auStack_290;
LAB_180325d67:
    puVar17 = puVar18;
    ppppuVar14 = &local_1c8;
    if (0xf < local_1b0) {
      ppppuVar14 = local_1c8;
    }
    *(undefined8 *)(puVar17 + -8) = 0x180325d7e;
    puVar9 = (undefined4 *)FUN_18035ee30(&local_1a8,ppppuVar14);
    if (puVar9 != (undefined4 *)&DAT_1809f7118) {
      if (0xf < DAT_1809f7130) {
        uVar13 = DAT_1809f7130 + 1;
        lVar3 = CONCAT44(uRam00000001809f711c,_DAT_1809f7118);
        lVar11 = lVar3;
        if (0xfff < uVar13) {
          lVar11 = *(longlong *)(lVar3 + -8);
          if (0x1f < (lVar3 - lVar11) - 8U) {
LAB_180325ed4:
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar13 = DAT_1809f7130 + 0x28;
        }
        *(undefined8 *)(puVar17 + -8) = 0x180325dc7;
        thunk_FUN_1803d64e0(lVar11,uVar13);
      }
      _DAT_1809f7118 = *puVar9;
      uRam00000001809f711c = puVar9[1];
      uRam00000001809f7120 = puVar9[2];
      uRam00000001809f7124 = puVar9[3];
      DAT_1809f7128 = *(longlong *)(puVar9 + 4);
      DAT_1809f7130 = *(ulonglong *)(puVar9 + 6);
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 6) = 0xf;
      *(undefined1 *)puVar9 = 0;
    }
    *(undefined8 *)(puVar17 + -8) = 0x180325e0d;
    FUN_18000f890(&local_1a8);
    if (DAT_1809f7128 == 0) {
      ppppuVar14 = &local_1c8;
      if (0xf < local_1b0) {
        ppppuVar14 = local_1c8;
      }
      *(undefined8 *)(puVar17 + -8) = 0x180325e31;
      FUN_180029840(&DAT_1809f7118,ppppuVar14,local_1b8);
    }
  }
  *(undefined8 *)(puVar17 + -8) = 0x180325e3b;
  FUN_18000f890(&local_1c8);
  puVar18 = puVar17;
LAB_180325e3b:
  *(undefined8 *)(puVar18 + -8) = 0x180325e4d;
  _DAT_1809f7338 = fVar26;
  FUN_18000f890(local_158);
  *(undefined8 *)(puVar18 + -8) = 0x180325e57;
  FUN_18000f890(local_138);
  *(undefined8 *)(puVar18 + -8) = 0x180325e64;
  FUN_18000f890(local_118);
  *(undefined8 *)(puVar18 + -8) = 0x180325e71;
  FUN_18000f890(local_f8);
  *(undefined8 *)(puVar18 + -8) = 0x180325e80;
  return;
}



/* ===== 180325ee0 FUN_180325ee0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180325ee0(undefined8 *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  char ***pppcVar4;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined8 *local_70;
  char ***local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  float local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  char ***local_30 [3];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_98;
  FUN_18035ee30(local_30);
  uVar2 = DAT_180960ec0;
  pppcVar4 = (char ***)local_30;
  if (0xf < local_18) {
    pppcVar4 = local_30[0];
  }
  local_48 = *(undefined4 *)param_1[1];
  local_44 = (float)FUN_18053f0d0(DAT_1808ac7ec);
  local_44 = local_44 + *(float *)param_1[2];
  lVar3 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar3 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if ((((uVar2 & 0xff000000) != 0) && (pppcVar4 != (char ***)0x0)) && (*(char *)pppcVar4 != '\0')) {
    lVar1 = *(longlong *)*param_1;
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18);
    }
    local_40 = *(undefined8 *)(lVar1 + 0x60);
    uStack_38 = *(undefined8 *)(lVar1 + 0x68);
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_70 = &local_40;
    local_78 = uVar2;
    local_68 = pppcVar4;
    FUN_18040a900(lVar3,lVar1,DAT_1808ac930,&local_48);
  }
  FUN_18000f890(local_30);
  return;
}



/* ===== 180326010 FUN_180326010 ===== */

void FUN_180326010(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20 [3];
  
  FUN_180325ee0(*param_1,param_3);
  fVar6 = *(float *)param_1[1];
  fVar7 = *(float *)param_1[2];
  fVar5 = (float)FUN_18053f0d0(DAT_1808ac710);
  lVar4 = DAT_180ca0a50;
  fVar1 = *(float *)param_1[3];
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar3 = *(longlong *)(lVar4 + 0x14f8);
  local_20[0] = CONCAT44(fVar5 + fVar1,fVar6 - fVar7);
  *(ulonglong *)(lVar3 + 0x118) = CONCAT44(fVar5 + fVar1,fVar6 - fVar7);
  *(undefined1 *)(lVar3 + 0x159) = 1;
  uVar2 = *(undefined4 *)param_1[2];
  *(uint *)(lVar4 + 0x1eb0) = *(uint *)(lVar4 + 0x1eb0) | 1;
  *(undefined4 *)(lVar4 + 0x1ec8) = uVar2;
  fVar7 = (DAT_1808ac97c - *(float *)(lVar4 + 0x1200)) * DAT_1808ac1f4;
  fVar6 = 0.0;
  if (0.0 <= fVar7) {
    fVar6 = fVar7;
  }
  local_res8 = CONCAT44(fVar6,0x40c00000);
  FUN_1803d89a0(0xb,&local_res8);
  FUN_1802b39d0(&local_28,param_2,local_20,*(undefined4 *)param_1[2],1,1);
  local_res8 = 0;
  FUN_18041c570(param_2,0,param_4,param_5,&local_res8,0,0,0);
  *(undefined4 *)(DAT_180ca0a50 + 0xd98) = local_28;
  FUN_1803d87f0(local_24);
  FUN_1803d8a40(1);
  *(float *)param_1[3] = *(float *)param_1[3] + DAT_1808ac9f8;
  FUN_1803231e0(*(undefined8 *)param_1[4],param_1[5],DAT_1808acbc8);
  *(float *)param_1[3] = *(float *)param_1[3] + DAT_1808ac34c;
  return;
}



/* ===== 1803261d0 FUN_1803261d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803261d0(float *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 *local_190;
  undefined4 local_188;
  undefined4 local_180;
  float local_168;
  float local_164;
  undefined4 local_160;
  float local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong local_128;
  longlong local_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8 [7];
  longlong *local_90;
  ulonglong local_88;
  
  uVar15 = DAT_1808ac34c;
  local_88 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  if (DAT_1809f7330 != 0) {
    if (DAT_1809f7334 == '\0') {
      uVar13 = 0;
    }
    else {
      uVar13 = DAT_1808ac34c;
    }
    local_168 = (float)FUN_180322e20();
    local_158 = CONCAT44(uVar13,uVar13);
    uStack_150 = (ulonglong)uVar13;
    local_148 = 0xffffffff;
    FUN_18034a380(extraout_XMM0_Qa,&local_128,&local_168,&local_158);
    fVar10 = (float)FUN_1802b3660(local_128 + 0x14);
    lVar8 = DAT_180ca0a50;
    fVar16 = DAT_1809f3bd8;
    if ((DAT_1809f7334 != '\0') || (0.0 < fVar10)) {
      if (0.0 < fVar10) {
        fVar10 = DAT_1811074e8 * fVar10;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        lVar8 = *(longlong *)(lVar8 + 0x14f8);
        local_15c = fVar16;
        local_160 = 0x44480000;
        *(undefined8 *)(lVar8 + 0x118) = *(undefined8 *)param_1;
        *(undefined1 *)(lVar8 + 0x159) = 1;
        local_168 = 20.0;
        local_164 = 20.0;
        FUN_1803d89a0(2,&local_168);
        lVar8 = DAT_180ca0a50;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        uVar7 = FUN_1803e8900(*(undefined8 *)(lVar8 + 0x14f8),"##window_modal");
        local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x98);
        cVar6 = FUN_1803e1800("##window_modal",uVar7,&local_160,2);
        FUN_1803d8a40(1);
        lVar8 = DAT_180ca0a50;
        if (cVar6 != '\0') {
          bVar9 = DAT_180cd0fd8 != '\0';
          *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
          fVar17 = *param_1 + DAT_1808acc30;
          fVar16 = fVar16 + param_1[1];
          lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x14f8) + 0x2c8);
          uVar1 = *(ulonglong *)(**(longlong **)(lVar8 + 0x2058) + 0x10);
          fVar14 = (float)(uVar1 >> 0x20);
          if (bVar9) {
            uVar15 = DAT_1809f7440;
          }
          local_168 = fVar17;
          local_164 = fVar16;
          lVar8 = FUN_180368270(lVar2,param_1,&local_168,uVar15);
          uVar7 = DAT_1808ac918;
          if (((lVar8 != 0) && (0.0 < (float)uVar1)) && (0.0 < fVar14)) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = *(ulonglong *)param_1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar1;
            auVar12 = divps(auVar11,auVar12);
            local_190 = &local_140;
            local_128 = 0;
            local_180 = DAT_1808ac918;
            local_188 = 0xffffffff;
            local_198 = &local_158;
            local_158 = auVar12._0_8_;
            local_140 = CONCAT44(fVar16 / fVar14,fVar17 / (float)uVar1);
            local_120 = lVar8;
            FUN_1803febc0(lVar2,&local_128,param_1,&local_168);
          }
          local_190 = (undefined8 *)((ulonglong)local_190 & 0xffffffff00000000);
          local_198 = (undefined8 *)CONCAT44(local_198._4_4_,uVar7);
          FUN_1803fe590(lVar2,param_1,&local_168);
          local_158 = 0;
          uStack_150 = 0;
          local_140 = 0;
          uStack_138 = 0;
          if (DAT_1809f7330 == 1) {
            local_190 = &local_140;
            local_198 = &local_158;
            FUN_180323780(lVar2,param_1,&local_160,fVar10);
            lVar5 = DAT_180ca0a50;
            bVar9 = false;
            *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
            lVar8 = *(longlong *)(lVar5 + 0x14f8);
            if (((*(longlong *)(lVar5 + 0x2068) != 0) &&
                (lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x2068) + 0x3c0), lVar3 != 0)) &&
               ((*(char *)(lVar3 + 0xcc) != '\0' &&
                ((lVar3 != *(longlong *)(lVar8 + 0x3c0) &&
                 ((*(uint *)(lVar3 + 0x14) & 0xc000000) != 0)))))) {
              bVar9 = true;
            }
            fVar16 = *(float *)(lVar5 + 0x110);
            fVar14 = *(float *)(lVar5 + 0x114);
            if ((((((float)local_158 <= fVar16) && (local_158._4_4_ <= fVar14)) &&
                 (fVar16 < (float)uStack_150)) && (fVar14 < uStack_150._4_4_)) ||
               ((((float)local_140 <= fVar16 && (local_140._4_4_ <= fVar14)) &&
                ((fVar16 < (float)uStack_138 && (fVar14 < uStack_138._4_4_)))))) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (((((!bVar9) && (*(longlong *)(lVar5 + 0x1500) == lVar8)) &&
                 ((*(int *)(lVar5 + 0x1578) == 0 ||
                  ((*(char *)(lVar5 + 0x1587) != '\0' ||
                   (*(int *)(lVar5 + 0x1578) == *(int *)(lVar8 + 0x8c))))))) &&
                (*(float *)(lVar5 + 0xb9c) == 0.0)) && (!bVar4)) {
              DAT_1809f7334 = '\0';
            }
          }
          else if (DAT_1809f7330 == 2) {
            FUN_1803249c0(lVar2,param_1,&local_160);
          }
          else if (DAT_1809f7330 == 3) {
            FUN_180325060(lVar2,param_1,&local_160);
          }
          FUN_1802b3c30(lVar2,0,*(undefined4 *)(lVar2 + 0x20),fVar10);
        }
        FUN_1803e1bc0();
      }
    }
    else {
      local_110 = 0;
      _DAT_1809f7338 = 0;
      uStack_100 = 0;
      local_108 = 0;
      uStack_e0 = 0;
      local_e8 = 0;
      local_118 = 0;
      local_114 = 0;
      local_f8 = _DAT_1808ad410;
      uStack_f0 = _UNK_1808ad418;
      local_d8 = _DAT_1808ad410;
      uStack_d0 = _UNK_1808ad418;
      local_90 = (longlong *)0x0;
      DAT_1809f7330 = 0;
      DAT_1809f7334 = '\0';
      FUN_18002ba60(&DAT_1809f7340,&local_108);
      FUN_18002ba60(&DAT_1809f7360,&local_e8);
      FUN_180349620(&DAT_1809f7380,local_c8);
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x20))
                  (local_90,CONCAT71((int7)((ulonglong)local_c8 >> 8),local_90 != local_c8));
        local_90 = (longlong *)0x0;
      }
      FUN_18000f890(&local_e8);
      FUN_18000f890(&local_108);
    }
  }
  return;
}



/* ===== 1803267b0 FUN_1803267b0 ===== */

void FUN_1803267b0(void)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = 0x40c00000;
  local_resc = 0x40400000;
  FUN_1803d89a0(0xb,&local_res8);
  FUN_1803d8870(0xc,DAT_1808ac7ac);
  FUN_1803d8870(0xd,DAT_1808ac34c);
  FUN_1803d8870(0x16,DAT_1808ac658);
  FUN_1803d8870(0x15,DAT_1808ac864);
  local_res8 = 0x40a00000;
  local_resc = 0x40a00000;
  FUN_1803d89a0(0xe,&local_res8);
  local_res8 = 0x40800000;
  local_resc = 0x41000000;
  FUN_1803d89a0(0xf,&local_res8);
  FUN_1803d8870(0x12,DAT_1808ac750);
  FUN_1803d8870(0x13,DAT_1808ac658);
  FUN_1803d8870(0x19,DAT_1808ac710);
  FUN_1803d8870(9,DAT_1808ac900);
  FUN_1803d8870(10,DAT_1808ac34c);
  FUN_1803d8870(7,0);
  FUN_1803d8730(0,DAT_180960ec0);
  FUN_1803d8730(1,DAT_180960ecc);
  FUN_1803d8730(4,DAT_180960ee0);
  FUN_1803d8730(5,DAT_180960eec);
  FUN_1803d8730(7,DAT_180960ef0);
  FUN_1803d8730(8,DAT_180960ef4);
  FUN_1803d8730(9,DAT_180960ef4);
  FUN_1803d8730(0x12,DAT_1809f54bc);
  FUN_1803d8730(0x14,DAT_1809f54bc);
  FUN_1803d8730(0x15,DAT_1809f3bdc);
  FUN_1803d8730(0x16,DAT_180960ef0);
  FUN_1803d8730(0x17,DAT_180960ef4);
  FUN_1803d8730(0x18,0xa0464646);
  FUN_1803d8730(0x19,DAT_180960ef0);
  FUN_1803d8730(0x1a,DAT_180960ef4);
  FUN_1803d8730(0x1b,0xa0464646);
  FUN_1803d8730(0x1c,DAT_180960f48);
  FUN_1803d8730(0x1d,DAT_1809f54bc);
  FUN_1803d8730(0x1e,DAT_1809f54bc);
  FUN_1803d8730(0x24,DAT_180960ef0);
  FUN_1803d8730(0x23,DAT_180960ef4);
  FUN_1803d8730(0x25,DAT_1809f54bc & 0xffffff | 0x5a000000);
  FUN_1803d8730(0x26,DAT_1809f54bc);
  FUN_1803d8730(0x27,DAT_180960ef0);
  FUN_1803d8730(0x28,DAT_1809f54bc & 0xffffff | 0x3c000000);
  FUN_1803d8730(0xe,0);
  FUN_1803d8730(0xf,0x1effffff);
  FUN_1803d8730(0x10,0x3cffffff);
  FUN_1803d8730(0x11,DAT_1809f54bc);
  FUN_1803d8730(0x1f,0);
  FUN_1803d8730(0x34,DAT_1809f54bc & 0xffffff | 0x5a000000);
  FUN_1803d8730(0x39,DAT_1809f54bc);
  return;
}



/* ===== 180326ae0 FUN_180326ae0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_180326ae0(char *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [32];
  char *local_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  puVar7 = auStack_88;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_88;
  pcVar5 = param_1;
  if (DAT_1809f73f0 == 0) {
LAB_180326be7:
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5[4] = '\0';
    pcVar5[5] = '\0';
    pcVar5[6] = '\0';
    pcVar5[7] = '\0';
    pcVar5[8] = '\0';
    pcVar5[9] = '\0';
    pcVar5[10] = '\0';
    pcVar5[0xb] = '\0';
    pcVar5[0xc] = '\0';
    pcVar5[0xd] = '\0';
    pcVar5[0xe] = '\0';
    pcVar5[0xf] = '\0';
    pcVar5[0x18] = '\x0f';
    pcVar5[0x19] = '\0';
    pcVar5[0x1a] = '\0';
    pcVar5[0x1b] = '\0';
    pcVar5[0x1c] = '\0';
    pcVar5[0x1d] = '\0';
    pcVar5[0x1e] = '\0';
    pcVar5[0x1f] = '\0';
    if (DAT_180cd0d57 == '\0') {
      pcVar5[0x10] = '\0';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      pcVar5[0x14] = '\0';
      pcVar5[0x15] = '\0';
      pcVar5[0x16] = '\0';
      pcVar5[0x17] = '\0';
      *pcVar5 = '\0';
    }
    else {
      pcVar5[0x10] = '\b';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      pcVar5[0x14] = '\0';
      pcVar5[0x15] = '\0';
      pcVar5[0x16] = '\0';
      pcVar5[0x17] = '\0';
      *(undefined8 *)pcVar5 = s_ambience_18075cd08._0_8_;
      pcVar5[8] = '\0';
    }
  }
  else {
    local_60 = param_1;
    uVar2 = FUN_180066a20(local_38,&DAT_180767b58,&DAT_1809f73e0);
    puVar3 = (ulonglong *)FUN_1800134a0(uVar2,&DAT_180767b60,1);
    local_58 = *puVar3;
    uStack_50 = puVar3[1];
    local_48 = puVar3[2];
    uStack_40 = puVar3[3];
    puVar3[2] = 0;
    puVar3[3] = 0xf;
    *(undefined1 *)puVar3 = 0;
    FUN_1800667a0(param_1,&local_58,&DAT_1809f6f38);
    if (0xf < uStack_40) {
      uVar6 = uStack_40 + 1;
      uVar4 = local_58;
      if (0xfff < uVar6) {
        uVar4 = *(ulonglong *)(local_58 - 8);
        if (0x1f < (local_58 - uVar4) - 8) {
          pcVar5 = &DAT_00000005;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
          puVar7 = auStack_80;
          goto LAB_180326be7;
        }
        uVar6 = uStack_40 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar4,uVar6);
    }
    local_48 = 0;
    uStack_40 = 0xf;
    local_58 = local_58 & 0xffffffffffffff00;
    FUN_18000f890(local_38);
    puVar7 = auStack_88;
  }
  *(undefined8 *)(puVar7 + -8) = 0x180326c2d;
  return param_1;
}



/* ===== 180326c40 FUN_180326c40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180326c40(longlong param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 ****ppppuVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  ulonglong unaff_R13;
  ulonglong uVar23;
  longlong *plVar24;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Da;
  undefined8 uStack_360;
  undefined1 auStack_358 [8];
  undefined1 auStack_350 [24];
  uint local_338 [2];
  longlong local_330;
  longlong local_328 [4];
  longlong local_308 [11];
  ulonglong local_2b0;
  ulonglong *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  ulonglong local_288;
  ulonglong uStack_280;
  ulonglong local_278;
  ulonglong uStack_270;
  ulonglong local_268;
  ulonglong uStack_260;
  ulonglong local_258;
  ulonglong uStack_250;
  undefined8 *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 ****local_228 [2];
  ulonglong local_218;
  ulonglong local_210;
  int local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  undefined1 local_1e0 [32];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  ulonglong local_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  ulonglong local_130;
  undefined1 local_128;
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_358;
  local_338[0] = 0;
  puVar21 = auStack_358;
  if (((*(longlong *)(param_1 + 0x10) == 0) || (puVar21 = auStack_358, DAT_1809f7318 == 0)) ||
     ((DAT_1809f73f0 != 0 && (puVar21 = auStack_358, DAT_1809f72b0 == 0)))) goto LAB_180327680;
  uVar23 = 0;
  if (DAT_1811076c0 == 2) {
    uVar23 = (ulonglong)DAT_181107484;
  }
  uVar4 = FUN_180326ae0(local_78);
  uVar25 = (undefined4)uVar23;
  uVar5 = FUN_18003a390(local_98,uVar23);
  uVar6 = FUN_18003a390(local_b8,DAT_1811076c0);
  plVar7 = (longlong *)FUN_1800134a0(uVar6,&DAT_1806e9100,1);
  local_248 = (undefined8 *)*plVar7;
  uStack_240 = (undefined4)plVar7[1];
  uStack_23c = *(undefined4 *)((longlong)plVar7 + 0xc);
  local_238 = (undefined4)plVar7[2];
  uStack_234 = *(undefined4 *)((longlong)plVar7 + 0x14);
  uStack_230 = (undefined4)plVar7[3];
  uStack_22c = *(undefined4 *)((longlong)plVar7 + 0x1c);
  plVar7[2] = 0;
  plVar7[3] = 0xf;
  *(undefined1 *)plVar7 = 0;
  uVar5 = FUN_180066820(local_d8,&local_248,uVar5);
  puVar8 = (undefined8 *)FUN_1800134a0(uVar5,&DAT_1806e9100,1);
  local_2a8 = (ulonglong *)*puVar8;
  uStack_2a0 = *(undefined4 *)(puVar8 + 1);
  uStack_29c = *(undefined4 *)((longlong)puVar8 + 0xc);
  local_298 = *(undefined4 *)(puVar8 + 2);
  uStack_294 = *(undefined4 *)((longlong)puVar8 + 0x14);
  uStack_290 = *(undefined4 *)(puVar8 + 3);
  uStack_28c = *(undefined4 *)((longlong)puVar8 + 0x1c);
  puVar8[2] = 0;
  puVar8[3] = 0xf;
  *(undefined1 *)puVar8 = 0;
  uVar5 = FUN_180066820(local_f8,&local_2a8,uVar4);
  puVar9 = (ulonglong *)FUN_1800134a0(uVar5,&DAT_1806e9100,1);
  local_268 = *puVar9;
  uStack_260 = puVar9[1];
  local_258 = puVar9[2];
  uStack_250 = puVar9[3];
  puVar9[2] = 0;
  puVar9[3] = 0xf;
  *(undefined1 *)puVar9 = 0;
  puVar8 = &DAT_1809f7308;
  uVar5 = FUN_1800667a0(local_118,&local_268,&DAT_1809f7308);
  puVar9 = (ulonglong *)FUN_1800134a0(uVar5,&DAT_1806e9100,1);
  local_288 = *puVar9;
  uStack_280 = puVar9[1];
  local_278 = puVar9[2];
  uStack_270 = puVar9[3];
  puVar9[2] = 0;
  puVar9[3] = 0xf;
  *(undefined1 *)puVar9 = 0;
  local_338[0] = 0xf0;
  FUN_1800667a0(local_228,&local_288,param_1);
  if (uStack_270 < 0x10) {
LAB_180326e6c:
    local_278 = 0;
    uStack_270 = 0xf;
    local_288 = local_288 & 0xffffffffffffff00;
    FUN_18000f890(local_118);
    puVar18 = auStack_358;
    if (0xf < uStack_250) {
      uVar13 = uStack_250 + 1;
      uVar16 = local_268;
      if (0xfff < uVar13) {
        uVar16 = *(ulonglong *)(local_268 - 8);
        if (0x1f < (local_268 - uVar16) - 8) goto LAB_18032709c;
        uVar13 = uStack_250 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar16,uVar13);
    }
    local_258 = 0;
    uStack_250 = 0xf;
    local_268 = local_268 & 0xffffffffffffff00;
    FUN_18000f890(local_f8);
    puVar19 = auStack_358;
    uVar16 = CONCAT44(uStack_28c,uStack_290);
    if (0xf < uVar16) {
      uVar13 = uVar16 + 1;
      puVar9 = local_2a8;
      if (0xfff < uVar13) {
        puVar9 = (ulonglong *)local_2a8[-1];
        if (0x1f < (ulonglong)((longlong)local_2a8 + (-8 - (longlong)puVar9))) goto LAB_1803270a3;
        uVar13 = uVar16 + 0x28;
      }
      thunk_FUN_1803d64e0(puVar9,uVar13);
    }
    FUN_18000f890(local_d8);
    puVar20 = auStack_358;
    uVar16 = CONCAT44(uStack_22c,uStack_230);
    if (0xf < uVar16) {
      uVar13 = uVar16 + 1;
      puVar11 = local_248;
      if (0xfff < uVar13) {
        puVar11 = (undefined8 *)local_248[-1];
        if (0x1f < (ulonglong)((longlong)local_248 + (-8 - (longlong)puVar11))) goto LAB_1803270aa;
        uVar13 = uVar16 + 0x28;
      }
      thunk_FUN_1803d64e0(puVar11,uVar13);
    }
    FUN_18000f890(local_b8);
    FUN_18000f890(local_98);
    FUN_18000f890(local_78);
    ppppuVar14 = local_228;
    if (0xf < local_210) {
      ppppuVar14 = local_228[0];
    }
    uVar4 = 0xcbf29ce484222325;
    uVar23 = 0;
    if (local_218 != 0) {
      do {
        uVar4 = (uVar4 ^ *(byte *)(uVar23 + (longlong)ppppuVar14)) * 0x100000001b3;
        uVar23 = uVar23 + 1;
      } while (uVar23 < local_218);
    }
    lVar10 = FUN_1800268a0(&DAT_180ca1700,&local_2a8,local_228,uVar4);
    puVar21 = auStack_358;
    if (*(longlong *)(lVar10 + 8) == 0) {
      local_2a8 = (ulonglong *)((DAT_181107748 - DAT_181107740 >> 3) * 0x34f72c234f72c235);
      FUN_180346cb0(&DAT_180ca1700,&local_248,local_228,&local_2a8);
      puVar21 = auStack_358;
      local_208 = DAT_1811076c0;
      local_200 = 0;
      uStack_1f8 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      if (0xf < DAT_1809f7320) {
        puVar8 = DAT_1809f7308;
      }
      uVar23 = 0x7fffffffffffffff;
      local_204 = uVar25;
      if (0x7fffffffffffffff < DAT_1809f7318) {
                    /* WARNING: Subroutine does not return */
        FUN_180011990();
      }
      unaff_R13 = 0x16;
      uVar4 = DAT_1809f7318;
      if (0xf < DAT_1809f7318) goto LAB_1803270b1;
      local_1f0 = DAT_1809f7318;
      local_1e8 = 0xf;
      local_200 = *puVar8;
      uStack_1f8 = puVar8[1];
      puVar21 = auStack_358;
      goto LAB_1803270ee;
    }
  }
  else {
    uVar13 = uStack_270 + 1;
    uVar16 = local_288;
    if (uVar13 < 0x1000) {
LAB_180326e67:
      thunk_FUN_1803d64e0(uVar16,uVar13);
      goto LAB_180326e6c;
    }
    uVar16 = *(ulonglong *)(local_288 - 8);
    if ((local_288 - uVar16) - 8 < 0x20) {
      uVar13 = uStack_270 + 0x28;
      goto LAB_180326e67;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar18 = auStack_350;
LAB_18032709c:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar19 = puVar18 + 8;
LAB_1803270a3:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar20 = puVar19 + 8;
LAB_1803270aa:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar21 = puVar20 + 8;
LAB_1803270b1:
    uVar16 = uVar4 | 0xf;
    if (uVar23 < uVar16) {
      uVar16 = uVar23;
    }
    else if (uVar16 < unaff_R13) {
      uVar16 = unaff_R13;
    }
    *(undefined8 *)(puVar21 + -8) = 0x1803270d2;
    local_200 = FUN_18000fb70(uVar16 + 1);
    *(undefined8 *)(puVar21 + -8) = 0x1803270ed;
    local_1f0 = uVar4;
    local_1e8 = uVar16;
    FUN_180540530(local_200,puVar8,uVar4 + 1);
LAB_1803270ee:
    *(undefined8 *)(puVar21 + -8) = 0x1803270fa;
    FUN_180024b50(local_1e0,param_1);
    local_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    uStack_180 = 0;
    local_178 = 0;
    local_170 = 0xf;
    local_188 = 0;
    uStack_160 = 0;
    local_158 = 0;
    local_150 = 0xf;
    local_168 = 0;
    lStack_140 = 0;
    local_138 = 0;
    local_130 = 0xf;
    local_148 = 0;
    local_128 = 0;
    puVar15 = &DAT_1809f73e0;
    if (0xf < DAT_1809f73f8) {
      puVar15 = _DAT_1809f73e0;
    }
    *(undefined8 *)(puVar21 + -8) = 0x1803271b6;
    FUN_180029840(&local_188,puVar15,DAT_1809f73f0);
    uVar4 = DAT_1809f6f48;
    if (DAT_1809f73f0 == 0) {
      *(undefined8 *)(puVar21 + 0x30) = 0;
      *(undefined8 *)(puVar21 + 0x38) = 0;
      *(undefined8 *)(puVar21 + 0x40) = 0;
      uVar4 = 0xf;
      *(undefined8 *)(puVar21 + 0x48) = 0xf;
      puVar21[0x30] = 0;
      plVar22 = (longlong *)(puVar21 + 0x30);
      uVar17 = 0xf1;
      *(undefined8 *)(puVar21 + 0x28) = *(undefined8 *)(puVar21 + 0x30);
      local_248 = (undefined8 *)(puVar21 + 0x38);
      plVar7 = (longlong *)(puVar21 + 0x40);
      local_2a8 = (ulonglong *)(puVar21 + 0x48);
      lVar10 = *(longlong *)(puVar21 + 0x70);
      uVar16 = local_308[7];
    }
    else {
      *(undefined8 *)(puVar21 + 0x78) = 0;
      plVar7 = (longlong *)&DAT_1809f6f38;
      if (0xf < DAT_1809f6f50) {
        plVar7 = DAT_1809f6f38;
      }
      if (uVar23 < DAT_1809f6f48) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar21 + -8) = &UNK_1803276b4;
        FUN_180011990();
      }
      if (DAT_1809f6f48 < 0x10) {
        local_308[6] = DAT_1809f6f48;
        uVar16 = 0xf;
        local_308[7] = 0xf;
        lVar10 = *plVar7;
        lVar12 = plVar7[1];
        *(longlong *)(puVar21 + 0x70) = lVar10;
        *(longlong *)(puVar21 + 0x78) = lVar12;
      }
      else {
        uVar16 = DAT_1809f6f48 | 0xf;
        if (uVar23 < uVar16) {
          uVar16 = uVar23;
        }
        else if (uVar16 < 0x16) {
          uVar16 = unaff_R13;
        }
        *(undefined8 *)(puVar21 + -8) = 0x180327283;
        lVar10 = FUN_18000fb70(uVar16 + 1);
        *(longlong *)(puVar21 + 0x70) = lVar10;
        local_308[6] = uVar4;
        *(undefined8 *)(puVar21 + -8) = 0x1803272a2;
        local_308[7] = uVar16;
        FUN_180540530(lVar10,plVar7,uVar4 + 1);
      }
      plVar22 = (longlong *)(puVar21 + 0x70);
      uVar17 = 0xf2;
      *(longlong *)(puVar21 + 0x28) = lVar10;
      local_248 = (undefined8 *)(puVar21 + 0x78);
      plVar7 = local_308 + 6;
      local_2a8 = (ulonglong *)(local_308 + 7);
      uVar4 = *(ulonglong *)(puVar21 + 0x48);
    }
    *(uint *)(puVar21 + 0x20) = uVar17;
    if (&local_168 == plVar22) {
LAB_180327375:
      if ((uVar17 & 2) != 0) {
        uVar17 = uVar17 & 0xfffffffd;
        *(uint *)(puVar21 + 0x20) = uVar17;
        if (0xf < uVar16) {
          uVar13 = uVar16 + 1;
          lVar12 = lVar10;
          if (0xfff < uVar13) {
            lVar12 = *(longlong *)(lVar10 + -8);
            if (0x1f < (lVar10 - lVar12) - 8U) goto LAB_180327449;
            uVar13 = uVar16 + 0x28;
          }
          *(undefined8 *)(puVar21 + -8) = 0x1803273b8;
          thunk_FUN_1803d64e0(lVar12,uVar13);
        }
      }
      if (((uVar17 & 1) == 0) || (*(uint *)(puVar21 + 0x20) = uVar17 & 0xfffffffe, uVar4 < 0x10)) {
LAB_1803273fe:
        if (DAT_1809f73f0 != 0) goto LAB_180327450;
        uVar25 = 0;
        *(undefined8 *)(puVar21 + 0x50) = 0;
        *(undefined8 *)(puVar21 + 0x58) = 0;
        *(undefined8 *)(puVar21 + 0x60) = 0;
        uVar23 = 0xf;
        *(undefined8 *)(puVar21 + 0x68) = 0xf;
        puVar21[0x50] = 0;
        plVar7 = (longlong *)(puVar21 + 0x50);
        bVar3 = true;
        bVar2 = false;
        lVar10 = *(longlong *)(puVar21 + 0x50);
        plVar22 = (longlong *)(puVar21 + 0x58);
        plVar24 = (longlong *)(puVar21 + 0x60);
        puVar9 = (ulonglong *)(puVar21 + 0x68);
        goto LAB_1803274fb;
      }
      uVar16 = uVar4 + 1;
      lVar10 = *(longlong *)(puVar21 + 0x30);
      lVar12 = lVar10;
      if (uVar16 < 0x1000) {
LAB_1803273f9:
        *(undefined8 *)(puVar21 + -8) = 0x1803273fe;
        thunk_FUN_1803d64e0(lVar12,uVar16);
        goto LAB_1803273fe;
      }
      lVar12 = *(longlong *)(lVar10 + -8);
      if ((lVar10 - lVar12) - 8U < 0x20) {
        uVar16 = uVar4 + 0x28;
        goto LAB_1803273f9;
      }
LAB_180327614:
      pcVar1 = (code *)swi(0x29);
      lVar10 = (*pcVar1)(5);
      puVar21 = puVar21 + 8;
      uVar25 = extraout_XMM0_Da;
LAB_18032761b:
      *(undefined8 *)(puVar21 + -8) = 0x180327627;
      FUN_180352a40(uVar25,lVar10,&local_208);
    }
    else {
      if (local_150 < 0x10) {
LAB_180327320:
        local_168 = *(longlong *)(puVar21 + 0x28);
        uStack_160 = *local_248;
        local_158 = *plVar7;
        local_150 = *local_2a8;
        *plVar7 = 0;
        *local_2a8 = 0xf;
        *(undefined1 *)plVar22 = 0;
        uVar4 = *(ulonglong *)(puVar21 + 0x48);
        lVar10 = *(longlong *)(puVar21 + 0x70);
        uVar16 = local_308[7];
        goto LAB_180327375;
      }
      uVar4 = local_150 + 1;
      lVar10 = local_168;
      if (uVar4 < 0x1000) {
LAB_18032731b:
        *(undefined8 *)(puVar21 + -8) = 0x180327320;
        thunk_FUN_1803d64e0(lVar10,uVar4);
        goto LAB_180327320;
      }
      lVar10 = *(longlong *)(local_168 + -8);
      if ((local_168 - lVar10) - 8U < 0x20) {
        uVar4 = local_150 + 0x28;
        goto LAB_18032731b;
      }
LAB_180327449:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar21 = puVar21 + 8;
LAB_180327450:
      uVar4 = DAT_1809f72b0;
      local_308[9] = 0;
      plVar7 = (longlong *)&DAT_1809f72a0;
      if (0xf < DAT_1809f72b8) {
        plVar7 = DAT_1809f72a0;
      }
      if (uVar23 < DAT_1809f72b0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar21 + -8) = 0x1803276a8;
        FUN_180011990();
      }
      if (DAT_1809f72b0 < 0x10) {
        local_308[10] = DAT_1809f72b0;
        local_2b0 = 0xf;
        lVar10 = *plVar7;
        uVar25 = (undefined4)lVar10;
        local_308[8] = lVar10;
        local_308[9] = plVar7[1];
      }
      else {
        uVar16 = DAT_1809f72b0 | 0xf;
        if ((uVar16 <= uVar23) && (uVar23 = uVar16, uVar16 < 0x16)) {
          uVar23 = 0x16;
        }
        *(undefined8 *)(puVar21 + -8) = 0x1803274c5;
        lVar10 = FUN_18000fb70(uVar23 + 1);
        local_308[10] = uVar4;
        *(undefined8 *)(puVar21 + -8) = 0x1803274e3;
        local_308[8] = lVar10;
        local_2b0 = uVar23;
        uVar25 = FUN_180540530(lVar10,plVar7,uVar4 + 1);
      }
      plVar7 = local_308 + 8;
      bVar3 = false;
      bVar2 = true;
      plVar22 = local_308 + 9;
      plVar24 = local_308 + 10;
      puVar9 = &local_2b0;
      uVar23 = *(ulonglong *)(puVar21 + 0x68);
LAB_1803274fb:
      if (&local_148 != plVar7) {
        if (0xf < local_130) {
          uVar23 = local_130 + 1;
          lVar12 = local_148;
          if (0xfff < uVar23) {
            lVar12 = *(longlong *)(local_148 + -8);
            if (0x1f < (local_148 - lVar12) - 8U) {
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              puVar21 = puVar21 + 8;
              goto LAB_180327614;
            }
            uVar23 = local_130 + 0x28;
          }
          *(undefined8 *)(puVar21 + -8) = 0x18032754c;
          uVar25 = thunk_FUN_1803d64e0(lVar12,uVar23);
        }
        local_148 = lVar10;
        lStack_140 = *plVar22;
        local_138 = *plVar24;
        local_130 = *puVar9;
        *plVar24 = 0;
        *puVar9 = 0xf;
        *(undefined1 *)plVar7 = 0;
        uVar23 = *(ulonglong *)(puVar21 + 0x68);
      }
      if (bVar2) {
        *(undefined8 *)(puVar21 + -8) = 0x18032759c;
        uVar25 = FUN_18000f890(local_308 + 8);
      }
      if ((bVar3) && (0xf < uVar23)) {
        uVar4 = uVar23 + 1;
        lVar10 = *(longlong *)(puVar21 + 0x50);
        lVar12 = lVar10;
        if (0xfff < uVar4) {
          lVar12 = *(longlong *)(lVar10 + -8);
          if (0x1f < (lVar10 - lVar12) - 8U) goto LAB_180327614;
          uVar4 = uVar23 + 0x28;
        }
        *(undefined8 *)(puVar21 + -8) = 0x1803275d7;
        uVar25 = thunk_FUN_1803d64e0(lVar12,uVar4);
      }
      local_128 = DAT_180cd0d57;
      lVar10 = DAT_181107748;
      if (DAT_181107748 == DAT_181107750) goto LAB_18032761b;
      *(undefined8 *)(puVar21 + -8) = 0x180327600;
      FUN_180359320(DAT_181107748,&local_208);
      DAT_181107748 = DAT_181107748 + 0xe8;
    }
    *(undefined8 *)(puVar21 + -8) = 0x180327634;
    FUN_18000f890(&local_148);
    *(undefined8 *)(puVar21 + -8) = 0x180327640;
    FUN_18000f890(&local_168);
    *(undefined8 *)(puVar21 + -8) = 0x18032764c;
    FUN_18000f890(&local_188);
    *(undefined8 *)(puVar21 + -8) = 0x180327658;
    FUN_1800288b0(&local_1a8);
    *(undefined8 *)(puVar21 + -8) = 0x180327664;
    FUN_1800288b0(&local_1c0);
    *(undefined8 *)(puVar21 + -8) = 0x18032766d;
    FUN_18000f890(local_1e0);
    *(undefined8 *)(puVar21 + -8) = 0x180327676;
    FUN_18000f890(&local_200);
  }
  *(undefined8 *)(puVar21 + -8) = 0x180327680;
  FUN_18000f890(local_228);
LAB_180327680:
  *(undefined8 *)(puVar21 + -8) = 0x18032768f;
  return;
}



/* ===== 1803276c0 FUN_1803276c0 ===== */

void FUN_1803276c0(longlong param_1)

{
  FUN_18000f890(param_1 + 0xc0);
  FUN_18000f890(param_1 + 0xa0);
  FUN_18000f890(param_1 + 0x80);
  FUN_1800288b0(param_1 + 0x60);
  FUN_1800288b0(param_1 + 0x48);
  FUN_18000f890(param_1 + 0x28);
  FUN_18000f890(param_1 + 8);
  return;
}



/* ===== 180327720 FUN_180327720 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180327720(char *param_1)

{
  code *pcVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *******pppppppuVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [24];
  longlong local_2a8 [4];
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  uint local_268 [8];
  ulonglong local_248;
  ulonglong uStack_240;
  ulonglong local_238;
  ulonglong uStack_230;
  undefined8 *******local_228 [2];
  ulonglong local_218;
  ulonglong local_210;
  uint local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_2c8;
  local_268[0] = 0;
  puVar12 = auStack_2c8;
  if ((((DAT_180cd0f0c == '\0') || (puVar12 = auStack_2c8, DAT_181107150 == DAT_181107158)) ||
      (puVar12 = auStack_2c8, DAT_1809f73f0 != 0)) ||
     ((3 < DAT_1811076c0 && (puVar12 = auStack_2c8, DAT_1811076c0 != 5)))) goto LAB_180327f20;
  pcVar3 = param_1;
  if (param_1 == (char *)0x0) {
LAB_18032780e:
    local_2a8[1] = 0;
    local_2a8[0] = 0;
    local_2a8[3] = 0xf;
    local_2a8[2] = 0;
  }
  else {
    for (; ((pcVar3 != (char *)0xffffffffffffffff && (*pcVar3 != '\0')) &&
           ((*pcVar3 != '#' || (pcVar3[1] != '#')))); pcVar3 = pcVar3 + 1) {
    }
    local_2a8[0] = 0;
    local_2a8[1] = 0;
    local_2a8[2] = 0;
    local_2a8[3] = 0;
    if (param_1 == pcVar3) goto LAB_18032780e;
    FUN_1800133a0(local_2a8,param_1,(longlong)pcVar3 - (longlong)param_1);
  }
  lVar4 = DAT_181107150;
  puVar12 = auStack_2c8;
  if ((local_2a8[2] != 0) &&
     (puVar22 = (undefined8 *)(DAT_181107150 + 0x28), puVar12 = auStack_2c8,
     *(longlong *)(DAT_181107150 + 0x38) != 0)) {
    uVar23 = 0;
    if (DAT_1811076c0 == 2) {
      uVar23 = DAT_181107484;
    }
    uVar5 = FUN_180326ae0(local_78);
    uVar6 = FUN_18003a390(local_98,uVar23);
    uVar7 = FUN_18003a390(local_b8,DAT_1811076c0);
    puVar8 = (uint *)FUN_1800134a0(uVar7,&DAT_1806e9100,1);
    local_268[0] = *puVar8;
    local_268[1] = puVar8[1];
    local_268[2] = puVar8[2];
    local_268[3] = puVar8[3];
    local_268[4] = puVar8[4];
    local_268[5] = puVar8[5];
    local_268[6] = puVar8[6];
    local_268[7] = puVar8[7];
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0xf;
    puVar8[7] = 0;
    *(undefined1 *)puVar8 = 0;
    uVar6 = FUN_180066820(local_d8,local_268,uVar6);
    puVar9 = (undefined4 *)FUN_1800134a0(uVar6,&DAT_1806e9100,1);
    local_288._0_4_ = *puVar9;
    local_288._4_4_ = puVar9[1];
    uStack_280 = puVar9[2];
    uStack_27c = puVar9[3];
    local_278 = puVar9[4];
    uStack_274 = puVar9[5];
    uStack_270 = puVar9[6];
    uStack_26c = puVar9[7];
    *(undefined8 *)(puVar9 + 4) = 0;
    *(undefined8 *)(puVar9 + 6) = 0xf;
    *(undefined1 *)puVar9 = 0;
    uVar6 = FUN_180066820(local_f8,&local_288,uVar5);
    puVar10 = (ulonglong *)FUN_1800134a0(uVar6,&DAT_1806e9100,1);
    local_248 = *puVar10;
    uStack_240 = puVar10[1];
    local_238 = puVar10[2];
    uStack_230 = puVar10[3];
    puVar10[2] = 0;
    puVar10[3] = 0xf;
    *(undefined1 *)puVar10 = 0;
    uVar17 = 0x3c;
    FUN_1800667a0(local_228,&local_248,puVar22);
    if (0xf < uStack_230) {
      uVar14 = uStack_230 + 1;
      uVar21 = local_248;
      if (uVar14 < 0x1000) {
LAB_18032799f:
        thunk_FUN_1803d64e0(uVar21,uVar14);
        goto LAB_1803279a4;
      }
      uVar21 = *(ulonglong *)(local_248 - 8);
      if ((local_248 - uVar21) - 8 < 0x20) {
        uVar14 = uStack_230 + 0x28;
        goto LAB_18032799f;
      }
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar18 = auStack_2c0;
LAB_180327b0a:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar19 = puVar18 + 8;
LAB_180327b11:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar20 = puVar19 + 8;
      goto LAB_180327b18;
    }
LAB_1803279a4:
    local_238 = 0;
    uStack_230 = 0xf;
    local_248 = local_248 & 0xffffffffffffff00;
    FUN_18000f890(local_f8);
    puVar18 = auStack_2c8;
    uVar21 = CONCAT44(uStack_26c,uStack_270);
    if (0xf < uVar21) {
      uVar14 = uVar21 + 1;
      lVar2 = CONCAT44(local_288._4_4_,(undefined4)local_288);
      lVar13 = lVar2;
      if (0xfff < uVar14) {
        lVar13 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_180327b0a;
        uVar14 = uVar21 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar13,uVar14);
    }
    FUN_18000f890(local_d8);
    puVar19 = auStack_2c8;
    uVar21 = CONCAT44(local_268[7],local_268[6]);
    if (0xf < uVar21) {
      uVar14 = uVar21 + 1;
      lVar2 = CONCAT44(local_268[1],local_268[0]);
      lVar13 = lVar2;
      if (0xfff < uVar14) {
        lVar13 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar13) - 8U) goto LAB_180327b11;
        uVar14 = uVar21 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar13,uVar14);
    }
    FUN_18000f890(local_b8);
    FUN_18000f890(local_98);
    FUN_18000f890(local_78);
    puVar20 = auStack_2c8;
    uVar5 = 0;
    puVar12 = auStack_2c8;
    if (DAT_1811071d8 - DAT_1811071d0 >> 5 != 0) {
      do {
        *(undefined8 *)(puVar20 + -8) = 0x180327aad;
        puVar11 = (undefined8 *)
                  FUN_180066a20(puVar20 + 0x40,&DAT_180767b60,uVar5 * 0x20 + DAT_1811071d0);
        uVar6 = puVar11[2];
        if (0xf < (ulonglong)puVar11[3]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        *(undefined8 *)(puVar20 + -8) = 0x180327ac8;
        FUN_1800134a0(local_228,puVar11,uVar6);
        *(undefined8 *)(puVar20 + -8) = 0x180327ad3;
        FUN_18000f890(puVar20 + 0x40);
        if (uVar5 < (ulonglong)(DAT_181107068 - DAT_181107060 >> 5)) {
          *(undefined8 *)(puVar20 + -8) = 0x180327afd;
          puVar12 = (undefined1 *)FUN_180024b50(local_118,uVar5 * 0x20 + DAT_181107060);
          uVar17 = uVar17 | 1;
        }
        else {
LAB_180327b18:
          *(undefined8 *)(puVar20 + 0x40) = 0;
          *(undefined8 *)(puVar20 + 0x48) = 0;
          *(undefined8 *)(puVar20 + 0x50) = 0;
          *(undefined8 *)(puVar20 + 0x58) = 0xf;
          puVar20[0x40] = 0;
          puVar12 = puVar20 + 0x40;
          uVar17 = uVar17 | 2;
        }
        *(uint *)(puVar20 + 0x60) = uVar17;
        *(undefined8 *)(puVar20 + -8) = 0x180327b55;
        puVar11 = (undefined8 *)FUN_180066ab0(local_58,&DAT_180768624,puVar12);
        uVar6 = puVar11[2];
        if (0xf < (ulonglong)puVar11[3]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        *(undefined8 *)(puVar20 + -8) = 0x180327b70;
        FUN_1800134a0(local_228,puVar11,uVar6);
        *(undefined8 *)(puVar20 + -8) = 0x180327b7d;
        FUN_18000f890(local_58);
        if ((uVar17 & 2) != 0) {
          uVar17 = uVar17 & 0xfffffffd;
          *(undefined8 *)(puVar20 + -8) = 0x180327b90;
          FUN_18000f890(puVar20 + 0x40);
        }
        if ((uVar17 & 1) != 0) {
          uVar17 = uVar17 & 0xfffffffe;
          *(undefined8 *)(puVar20 + -8) = 0x180327ba5;
          FUN_18000f890(local_118);
        }
        uVar5 = uVar5 + 1;
        puVar12 = puVar20;
      } while (uVar5 < (ulonglong)(DAT_1811071d8 - DAT_1811071d0 >> 5));
    }
    *(undefined8 *)(puVar12 + -8) = 0x180327bde;
    puVar11 = (undefined8 *)FUN_180066a20(local_118,&DAT_1806e9100,puVar12 + 0x20);
    if ((ulonglong)puVar11[3] < 0x10) {
      puVar15 = puVar11;
    }
    else {
      puVar15 = (undefined8 *)*puVar11;
    }
    uVar6 = puVar11[2];
    *(undefined8 *)(puVar12 + -8) = 0x180327bfb;
    FUN_1800134a0(local_228,puVar15,uVar6);
    *(undefined8 *)(puVar12 + -8) = 0x180327c08;
    FUN_18000f890(local_118);
    pppppppuVar16 = local_228;
    if (0xf < local_210) {
      pppppppuVar16 = local_228[0];
    }
    uVar21 = 0xcbf29ce484222325;
    uVar5 = 0;
    if (local_218 != 0) {
      do {
        uVar21 = (uVar21 ^ *(byte *)((longlong)pppppppuVar16 + uVar5)) * 0x100000001b3;
        uVar5 = uVar5 + 1;
      } while (uVar5 < local_218);
    }
    *(undefined8 *)(puVar12 + -8) = 0x180327c68;
    lVar13 = FUN_1800268a0(&DAT_180ca1700,puVar12 + 0x60,local_228,uVar21);
    if (*(longlong *)(lVar13 + 8) == 0) {
      *(longlong *)(puVar12 + 0x60) = (DAT_181107748 - DAT_181107740 >> 3) * 0x34f72c234f72c235;
      *(undefined8 *)(puVar12 + -8) = 0x180327cab;
      FUN_180346ef0(0x34f72c234f72c235,puVar12 + 0x40,local_228,puVar12 + 0x60);
      local_208 = DAT_1811076c0;
      local_204 = uVar23;
      local_200 = 0;
      uStack_1f8 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      uVar5 = *(ulonglong *)(lVar4 + 0x38);
      if (0xf < *(ulonglong *)(lVar4 + 0x40)) {
        puVar22 = (undefined8 *)*puVar22;
      }
      if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar12 + -8) = &UNK_180327f56;
        FUN_180011990();
      }
      if (uVar5 < 0x10) {
        local_1f0 = uVar5;
        local_1e8 = 0xf;
        local_200 = *puVar22;
        uStack_1f8 = puVar22[1];
      }
      else {
        uVar21 = uVar5 | 0xf;
        if (uVar21 < 0x8000000000000000) {
          if (uVar21 < 0x16) {
            uVar21 = 0x16;
          }
        }
        else {
          uVar21 = 0x7fffffffffffffff;
        }
        *(undefined8 *)(puVar12 + -8) = 0x180327d2b;
        local_200 = FUN_18000fb70(uVar21 + 1);
        *(undefined8 *)(puVar12 + -8) = 0x180327d46;
        local_1f0 = uVar5;
        local_1e8 = uVar21;
        FUN_180540530(local_200,puVar22,uVar5 + 1);
      }
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      uVar5 = *(ulonglong *)(puVar12 + 0x30);
      puVar22 = (undefined8 *)(puVar12 + 0x20);
      if (0xf < *(ulonglong *)(puVar12 + 0x38)) {
        puVar22 = *(undefined8 **)(puVar12 + 0x20);
      }
      if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar12 + -8) = 0x180327f50;
        FUN_180011990();
      }
      if (uVar5 < 0x10) {
        local_1d0 = uVar5;
        local_1c8 = 0xf;
        local_1e0 = *puVar22;
        uStack_1d8 = puVar22[1];
      }
      else {
        uVar14 = uVar5 | 0xf;
        uVar21 = 0x7fffffffffffffff;
        if ((uVar14 < 0x8000000000000000) && (uVar21 = uVar14, uVar14 < 0x16)) {
          uVar21 = 0x16;
        }
        *(undefined8 *)(puVar12 + -8) = 0x180327db0;
        local_1e0 = FUN_18000fb70(uVar21 + 1);
        *(undefined8 *)(puVar12 + -8) = 0x180327dcb;
        local_1d0 = uVar5;
        local_1c8 = uVar21;
        FUN_180540530(local_1e0,puVar22,uVar5 + 1);
      }
      local_1c0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      *(undefined8 *)(puVar12 + -8) = 0x180327e01;
      FUN_180068970(&local_1c0,DAT_1811071d8 - DAT_1811071d0 >> 5,&DAT_1811071d0,&DAT_1811071d8);
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      *(undefined8 *)(puVar12 + -8) = 0x180327e37;
      FUN_180068970(&local_1a8,DAT_181107068 - DAT_181107060 >> 5,&DAT_181107060,&DAT_181107068);
      local_190 = 1;
      uStack_180 = 0;
      local_178 = 0;
      local_170 = 0xf;
      local_188 = 0;
      uStack_160 = 0;
      local_158 = 0;
      local_150 = 0xf;
      local_168 = 0;
      uStack_140 = 0;
      local_138 = 0;
      local_130 = 0xf;
      local_148 = 0;
      local_128 = DAT_180cd0d57;
      if (DAT_181107748 == DAT_181107750) {
        *(undefined8 *)(puVar12 + -8) = 0x180327ec8;
        FUN_180352a40(0,DAT_181107748,&local_208);
      }
      else {
        *(undefined8 *)(puVar12 + -8) = 0x180327eaf;
        FUN_180359320(DAT_181107748,&local_208);
        DAT_181107748 = DAT_181107748 + 0xe8;
      }
      *(undefined8 *)(puVar12 + -8) = 0x180327ed5;
      FUN_18000f890(&local_148);
      *(undefined8 *)(puVar12 + -8) = 0x180327ede;
      FUN_18000f890(&local_168);
      *(undefined8 *)(puVar12 + -8) = 0x180327ee7;
      FUN_18000f890(&local_188);
      *(undefined8 *)(puVar12 + -8) = 0x180327ef0;
      FUN_1800288b0(&local_1a8);
      *(undefined8 *)(puVar12 + -8) = 0x180327ef9;
      FUN_1800288b0(&local_1c0);
      *(undefined8 *)(puVar12 + -8) = 0x180327f02;
      FUN_18000f890(&local_1e0);
      *(undefined8 *)(puVar12 + -8) = 0x180327f0b;
      FUN_18000f890(&local_200);
    }
    *(undefined8 *)(puVar12 + -8) = 0x180327f15;
    FUN_18000f890(local_228);
  }
  *(undefined8 *)(puVar12 + -8) = 0x180327f20;
  FUN_18000f890(puVar12 + 0x20);
LAB_180327f20:
  *(undefined8 *)(puVar12 + -8) = 0x180327f2f;
  return;
}



/* ===== 180327f60 FUN_180327f60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_180327f60(char *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                    longlong param_5,longlong param_6,longlong param_7,char param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined1 local_128 [8];
  undefined8 *local_120;
  undefined8 *local_118;
  char *local_110 [2];
  ulonglong *local_100;
  ulonglong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  char local_b8 [8];
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [32];
  ulonglong local_78 [4];
  undefined1 local_58 [32];
  ulonglong local_38 [2];
  
  local_38[0] = DAT_180919500 ^ (ulonglong)auStack_148;
  local_110[0] = param_1;
  if (*(longlong *)(param_5 + 0x10) != 0) {
    local_a8 = 10;
    local_a0 = 0xf;
    local_b8 = (char  [8])s_EXTENSIONS_1806ea3e0._0_8_;
    uStack_b0 = (ulonglong)(ushort)s_EXTENSIONS_1806ea3e0._8_2_;
    if (*(longlong *)(param_7 + 0x10) == 0) {
      param_7 = param_5;
    }
    FUN_180024b50(local_98,param_7);
    if (*(longlong *)(param_6 + 0x10) == 0) {
      local_78[1] = 0;
      local_78[2] = 4;
      local_78[3] = 0xf;
      local_78[0] = (ulonglong)DAT_180767078;
    }
    else {
      FUN_180024b50(local_78,param_6);
    }
    FUN_180024b50(local_58,param_4);
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
    local_100 = local_38;
    local_110[0] = local_b8;
    FUN_180068970(param_1,4,local_110,&local_100);
    FUN_1804eced0(local_b8,0x20,4,thunk_FUN_18000f890);
    puVar10 = auStack_148;
    goto LAB_180328277;
  }
  if (param_8 == '\0') {
    FUN_1803282a0(param_1,param_2);
    puVar10 = auStack_148;
    goto LAB_180328277;
  }
  local_e8 = 0xd;
  local_e0 = 0xf;
  local_f8 = s_miscellaneous_18075c1d8._0_8_;
  uStack_f0 = (ulonglong)CONCAT14(s_miscellaneous_18075c1d8[0xc],s_miscellaneous_18075c1d8._8_4_);
  FUN_1803282a0(local_128,3,0,&local_f8);
  if (local_e0 < 0x10) {
LAB_180328139:
    uVar1 = s_Ambience_180768618._0_8_;
    local_e8 = 0;
    local_e0 = 0xf;
    local_f8 = local_f8 & 0xffffffffffffff00;
    local_c8 = 8;
    uStack_c0 = 0xf;
    local_d8._0_1_ = s_Ambience_180768618[0];
    local_d8._1_1_ = s_Ambience_180768618[1];
    local_d8._2_1_ = s_Ambience_180768618[2];
    local_d8._3_1_ = s_Ambience_180768618[3];
    local_d8._4_1_ = s_Ambience_180768618[4];
    local_d8._5_1_ = s_Ambience_180768618[5];
    local_d8._6_1_ = s_Ambience_180768618[6];
    local_d8._7_1_ = s_Ambience_180768618[7];
    uStack_d0 = 0;
    if (local_120 == local_118) {
      FUN_18009bb20(local_128,local_120,&local_d8);
    }
    else {
      local_d8._0_4_ = s_Ambience_180768618._0_4_;
      local_d8._4_4_ = s_Ambience_180768618._4_4_;
      *(undefined4 *)local_120 = (undefined4)local_d8;
      *(undefined4 *)((longlong)local_120 + 4) = local_d8._4_4_;
      *(undefined4 *)(local_120 + 1) = 0;
      *(undefined4 *)((longlong)local_120 + 0xc) = 0;
      local_120[2] = 8;
      local_120[3] = 0xf;
      local_d8 = uVar1 & 0xffffffffffffff00;
      local_120 = local_120 + 4;
    }
    if (0xf < uStack_c0) {
      uVar9 = uStack_c0 + 1;
      uVar8 = local_d8;
      if (0xfff < uVar9) {
        uVar8 = *(ulonglong *)(local_d8 - 8);
        if (0x1f < (local_d8 - uVar8) - 8) goto LAB_18032823e;
        uVar9 = uStack_c0 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar8,uVar9);
    }
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    puVar7 = (undefined4 *)FUN_1802b3fe0(&local_d8,param_4);
    puVar10 = auStack_148;
    if (local_120 == local_118) goto LAB_180328245;
    *local_120 = 0;
    local_120[1] = 0;
    local_120[2] = 0;
    local_120[3] = 0;
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar6 = puVar7[3];
    *(undefined4 *)local_120 = *puVar7;
    *(undefined4 *)((longlong)local_120 + 4) = uVar4;
    *(undefined4 *)(local_120 + 1) = uVar5;
    *(undefined4 *)((longlong)local_120 + 0xc) = uVar6;
    uVar1 = *(undefined8 *)(puVar7 + 6);
    local_120[2] = *(undefined8 *)(puVar7 + 4);
    local_120[3] = uVar1;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 6) = 0xf;
    *(undefined1 *)puVar7 = 0;
    local_120 = local_120 + 4;
    puVar10 = auStack_148;
  }
  else {
    uVar9 = local_e0 + 1;
    uVar8 = local_f8;
    if (uVar9 < 0x1000) {
LAB_180328134:
      thunk_FUN_1803d64e0(uVar8,uVar9);
      goto LAB_180328139;
    }
    uVar8 = *(ulonglong *)(local_f8 - 8);
    if ((local_f8 - uVar8) - 8 < 0x20) {
      uVar9 = local_e0 + 0x28;
      goto LAB_180328134;
    }
LAB_18032823e:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar10 = auStack_140;
LAB_180328245:
    *(undefined8 *)(puVar10 + -8) = 0x180328252;
    FUN_18009bb20(puVar10 + 0x20);
  }
  *(undefined8 *)(puVar10 + -8) = 0x18032825d;
  FUN_18000f890(puVar10 + 0x70);
  uVar1 = *(undefined8 *)(puVar10 + 0x30);
  uVar2 = *(undefined8 *)(puVar10 + 0x28);
  *(undefined8 *)param_1 = *(undefined8 *)(puVar10 + 0x20);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
LAB_180328277:
  *(undefined8 *)(puVar10 + -8) = 0x180328286;
  return param_1;
}



/* ===== 1803282a0 FUN_1803282a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1803282a0(undefined8 *param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined4 *puVar6;
  char *_Str;
  undefined8 uVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_c0;
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
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_c8 = 1;
  local_c0 = param_1;
  if (param_2 == 0) {
    uStack_b0 = 0;
    local_a8 = _DAT_1808ad450;
    uStack_a0 = _UNK_1808ad458;
    local_b8._0_6_ = CONCAT24(s_AIMBOT_180766f38._4_2_,s_AIMBOT_180766f38._0_4_);
    local_b8 = (ulonglong)(uint6)local_b8;
    uStack_90 = 0;
    local_88 = _DAT_1808ad430;
    uStack_80 = _UNK_1808ad438;
    local_98 = 0x65676152;
    FUN_18034d0e0(0,&local_b8,2);
LAB_1803285cf:
    uVar7 = 2;
  }
  else {
    if (param_2 == 1) {
      uStack_b0 = 0;
      local_a8 = _DAT_1808ad450;
      uStack_a0 = _UNK_1808ad458;
      local_b8._0_6_ = CONCAT24(s_AIMBOT_180766f38._4_2_,s_AIMBOT_180766f38._0_4_);
      local_b8 = (ulonglong)(uint6)local_b8;
      uStack_90 = 0;
      local_88 = _DAT_1808ad440;
      uStack_80 = _UNK_1808ad448;
      local_98 = (ulonglong)CONCAT14(s_Legit_180766f40[4],s_Legit_180766f40._0_4_);
      FUN_18034d0e0(0,&local_b8,2);
      goto LAB_1803285cf;
    }
    if (param_2 == 2) {
      uStack_b0 = 0;
      local_a8 = _DAT_1808ad450;
      uStack_a0 = _UNK_1808ad458;
      local_b8._0_6_ = CONCAT24(s_COMMON_180766fcc._4_2_,s_COMMON_180766fcc._0_4_);
      local_b8 = (ulonglong)(uint6)local_b8;
      uStack_90 = 0;
      local_88 = _DAT_1808ad460;
      uStack_80 = _UNK_1808ad468;
      local_98._0_6_ = CONCAT24(s_Visuals_180767008._4_2_,s_Visuals_180767008._0_4_);
      local_98._0_7_ = CONCAT16(s_Visuals_180767008[6],(undefined6)local_98);
      local_98 = (ulonglong)(uint7)local_98;
      uStack_70 = 0;
      local_68 = _DAT_1808ad460;
      uStack_60 = _UNK_1808ad468;
      local_78 = (ulonglong)
                 CONCAT16(s_Players_180766fa0[6],
                          CONCAT24(s_Players_180766fa0._4_2_,s_Players_180766fa0._0_4_));
      _Str = "Enemies";
      if (param_3 == 1) {
        _Str = "Teammates";
      }
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      sVar5 = strlen(_Str);
      FUN_1800133a0(&local_58,_Str,sVar5);
      FUN_18034d0e0(param_1,&local_b8,4);
      uVar7 = 4;
    }
    else {
      if (param_2 != 3) {
        if (param_2 != 5) goto LAB_1803285ea;
        uStack_b0 = 0;
        local_a8 = _DAT_1808ad450;
        uStack_a0 = _UNK_1808ad458;
        local_b8._0_6_ = CONCAT24(s_COMMON_180766fcc._4_2_,s_COMMON_180766fcc._0_4_);
        local_b8 = (ulonglong)(uint6)local_b8;
        local_88 = _DAT_1808ad4b0;
        uStack_80 = _UNK_1808ad4b8;
        local_98._0_1_ = s_Miscellaneous_180767068[0];
        local_98._1_1_ = s_Miscellaneous_180767068[1];
        local_98._2_1_ = s_Miscellaneous_180767068[2];
        local_98._3_1_ = s_Miscellaneous_180767068[3];
        local_98._4_1_ = s_Miscellaneous_180767068[4];
        local_98._5_1_ = s_Miscellaneous_180767068[5];
        local_98._6_1_ = s_Miscellaneous_180767068[6];
        local_98._7_1_ = s_Miscellaneous_180767068[7];
        uStack_90 = (ulonglong)
                    CONCAT14(s_Miscellaneous_180767068[0xc],s_Miscellaneous_180767068._8_4_);
        FUN_18034d0e0(s_Miscellaneous_180767068._0_4_,&local_b8,2);
        goto LAB_1803285cf;
      }
      uStack_b0 = 0;
      local_a8 = _DAT_1808ad450;
      uStack_a0 = _UNK_1808ad458;
      local_b8._0_6_ = CONCAT24(s_COMMON_180766fcc._4_2_,s_COMMON_180766fcc._0_4_);
      local_b8 = (ulonglong)(uint6)local_b8;
      uStack_90 = 0;
      local_88 = _DAT_1808ad460;
      uStack_80 = _UNK_1808ad468;
      local_98._0_6_ = CONCAT24(s_Visuals_180767008._4_2_,s_Visuals_180767008._0_4_);
      local_98._0_7_ = CONCAT16(s_Visuals_180767008[6],(undefined6)local_98);
      local_98 = (ulonglong)(uint7)local_98;
      uStack_70 = 0;
      local_68 = _DAT_1808ad440;
      uStack_60 = _UNK_1808ad448;
      local_78 = (ulonglong)CONCAT14(s_World_1806e8fdc[4],s_World_1806e8fdc._0_4_);
      FUN_18034d0e0(0,&local_b8,3);
      uVar7 = 3;
    }
  }
  FUN_1804eced0(&local_b8,0x20,uVar7,thunk_FUN_18000f890);
LAB_1803285ea:
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  puVar6 = (undefined4 *)FUN_1802b3fe0(&local_b8,param_4);
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)param_1[2]) {
    FUN_18009bb20(param_1,puVar1,puVar6);
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *(undefined4 *)puVar1 = *puVar6;
    *(undefined4 *)((longlong)puVar1 + 4) = uVar2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uVar4;
    uVar7 = *(undefined8 *)(puVar6 + 6);
    puVar1[2] = *(undefined8 *)(puVar6 + 4);
    puVar1[3] = uVar7;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    param_1[1] = param_1[1] + 0x20;
  }
  FUN_18000f890(&local_b8);
  return param_1;
}



/* ===== 180328670 FUN_180328670 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180328670(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,undefined4 param_6)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  longlong lVar5;
  size_t sVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  float local_a0;
  undefined4 local_98;
  undefined1 local_88 [24];
  longlong local_70 [7];
  
  local_70[4] = DAT_180919500 ^ (ulonglong)auStack_c8;
  if (DAT_180cd0fd8 == '\0') {
    fVar10 = DAT_1808ac34c;
  }
  else {
    fVar10 = DAT_1809f7440;
  }
  fVar4 = fVar10 * DAT_1808ac3d4;
  if (fVar10 * DAT_1808ac3d4 <= DAT_1808ac540) {
    fVar4 = DAT_1808ac540;
  }
  fVar10 = fVar4 * param_5 + DAT_1808ac1f4;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  sVar6 = strlen(param_2);
  FUN_1800133a0(local_70,param_2,sVar6);
  plVar7 = (longlong *)FUN_18039ed80(local_88,local_70,param_3,(int)fVar10);
  lVar2 = *plVar7;
  lVar5 = plVar7[1];
  iVar1 = *(int *)((longlong)plVar7 + 0xc);
  if (0xf < (ulonglong)local_70[3]) {
    uVar9 = local_70[3] + 1;
    lVar8 = local_70[0];
    if (0xfff < uVar9) {
      lVar8 = *(longlong *)(local_70[0] + -8);
      if (0x1f < (local_70[0] - lVar8) - 8U) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar9 = local_70[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar8,uVar9);
  }
  if (((lVar2 != 0) && (0 < (int)lVar5)) && (0 < iVar1)) {
    local_98 = param_6;
    local_a0 = param_5;
    local_a8 = param_4;
    FUN_1802b6e90(param_1,param_2,param_3,((float)(int)lVar5 / (float)iVar1) * DAT_1808acc00);
  }
  return;
}



/* ===== 1803287f0 FUN_1803287f0 ===== */

undefined8
FUN_1803287f0(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4,uint param_5,
             uint param_6)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  char cVar6;
  float fVar7;
  char cVar8;
  byte bVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_res18;
  float local_res1c;
  undefined8 local_c8;
  longlong local_c0 [2];
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  
  local_c8 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  fVar17 = (float)local_c8;
  FUN_1803e89e0();
  local_res18 = 23.706;
  local_res1c = 23.706;
  cVar8 = FUN_180415e30("##glyph",&local_res18,0);
  fVar16 = DAT_1808ac34c;
  fVar5 = DAT_1808ac1f4;
  cVar6 = (char)param_6;
  if ((cVar8 == '\0') || ((char)param_6 != '\0')) {
    uVar13 = 0;
    uVar14 = extraout_XMM0_Da;
    if ((char)param_6 == '\0') goto LAB_1803288ae;
LAB_1803288be:
    bVar3 = false;
    if (cVar6 == '\0') goto LAB_1803288c6;
  }
  else {
    uVar13 = 1;
LAB_1803288ae:
    cVar8 = FUN_1803dd930(0);
    uVar14 = extraout_XMM0_Da_00;
    if (cVar8 == '\0') goto LAB_1803288be;
    bVar3 = true;
LAB_1803288c6:
    if ((*(int *)(DAT_180ca0a50 + 0x1578) != 0) &&
       (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) {
      uVar12 = *(uint *)(DAT_180ca0a50 + 0x1ee8);
      bVar4 = true;
      fVar15 = fVar16;
      goto LAB_18032890f;
    }
  }
  uVar12 = *(uint *)(DAT_180ca0a50 + 0x1ee8);
  if (param_4 != '\0' || bVar3) {
    fVar15 = fVar5;
  }
  else {
    fVar15 = 0.0;
  }
  bVar4 = false;
LAB_18032890f:
  uVar12 = ~uVar12;
  pcVar11 = "hover";
  bVar9 = 0x68;
  param_6 = uVar12;
  do {
    pcVar11 = pcVar11 + 1;
    if (((bVar9 == 0x23) && (*pcVar11 == 0x23)) && (pcVar11[1] == 0x23)) {
      pcVar11 = pcVar11 + 2;
      param_6 = uVar12;
    }
    else {
      param_6 = param_6 >> 8 ^
                *(uint *)(&DAT_1806c25c0 + ((ulonglong)(param_6 & 0xff) ^ (ulonglong)bVar9) * 4);
    }
    bVar9 = *pcVar11;
  } while (bVar9 != 0);
  param_6 = ~param_6;
  local_a4 = 0;
  local_a0 = 0xffffffff;
  local_b0 = fVar15;
  local_ac = fVar15;
  local_a8 = fVar15;
  FUN_18034a380(uVar14,local_c0,&param_6,&local_b0);
  fVar15 = (float)FUN_1802b3660(local_c0[0] + 0x14,fVar15,DAT_1808ac118,0);
  if ((!bVar4) && (param_4 == '\0')) {
    if (bVar3) {
      fVar16 = fVar5;
    }
    else {
      fVar16 = 0.0;
    }
  }
  pcVar11 = "label";
  param_6 = uVar12;
  bVar9 = s_label_1806e0514[0];
  while (pcVar11 = pcVar11 + 1, bVar9 != 0) {
    if (((bVar9 == 0x23) && (*pcVar11 == 0x23)) && (pcVar11[1] == 0x23)) {
      pcVar11 = pcVar11 + 2;
      param_6 = uVar12;
    }
    else {
      param_6 = param_6 >> 8 ^
                *(uint *)(&DAT_1806c25c0 + (ulonglong)(param_6 & 0xff ^ (uint)bVar9) * 4);
    }
    bVar9 = *pcVar11;
  }
  param_6 = ~param_6;
  local_a4 = 0;
  local_a0 = 0xffffffff;
  local_b0 = fVar16;
  local_ac = fVar16;
  local_a8 = fVar16;
  FUN_18034a380(fVar15,local_c0,&param_6,&local_b0);
  fVar16 = (float)FUN_1802b3660(local_c0[0] + 0x14,fVar16,DAT_1808ac118,0);
  lVar10 = DAT_180ca0a50;
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar10 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  fVar7 = local_c8._4_4_;
  local_res18 = fVar17 + DAT_1808ac97c;
  local_res1c = local_c8._4_4_ + DAT_1808ac97c;
  *(undefined1 *)(*(longlong *)(lVar10 + 0x14f8) + 0xce) = 1;
  uVar2 = *(undefined8 *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8);
  if (0.0 < fVar15) {
    FUN_1803fe590(uVar2,&local_c8,&local_res18,
                  (int)(longlong)((float)(DAT_180960f44 >> 0x18) * fVar15 * DAT_1808ac1b0 + fVar5)
                  << 0x18 | DAT_180960f44 & 0xffffff,DAT_1808ac7ac,0);
  }
  if (param_3 != 0) {
    if (cVar6 == '\0') {
      fVar16 = fVar16 * DAT_1808ac154 + DAT_1808ac254;
    }
    else {
      fVar16 = DAT_1808ac154;
    }
    local_res18 = fVar17 + DAT_1808ac8ac;
    local_res1c = fVar7 + DAT_1808ac8ac;
    FUN_180328670(uVar2,param_2,param_3,&local_res18,DAT_1808ac8d4,
                  (int)(longlong)((float)(param_5 >> 0x18) * fVar16 + fVar5) << 0x18 |
                  param_5 & 0xffffff);
  }
  return uVar13;
}



/* ===== 180328c30 FUN_180328c30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_180328c30(char *param_1,undefined1 param_2,char param_3,char param_4,undefined8 param_5,
                  undefined8 param_6,float param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint local_res10 [2];
  char local_res18;
  char local_res20;
  char *in_stack_fffffffffffffee0;
  undefined8 uVar24;
  undefined4 uVar25;
  ulonglong in_stack_fffffffffffffef8;
  undefined8 local_e8;
  float local_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  
  lVar9 = DAT_180ca0a50;
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,param_2);
  local_e8 = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  fVar23 = (float)local_e8;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar9 = *(longlong *)(lVar9 + 0x14f8);
  local_res18 = param_3;
  local_res20 = param_4;
  uVar6 = FUN_1803e8900(lVar9,param_1);
  pbVar10 = &DAT_180768df5;
  bVar13 = 0x6d;
  uVar12 = ~uVar6;
  do {
    if (((bVar13 == 0x23) && (*pbVar10 == 0x23)) && (pbVar10[1] == 0x23)) {
      pbVar10 = pbVar10 + 2;
      uVar12 = ~uVar6;
    }
    else {
      uVar12 = uVar12 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar12 & 0xff) ^ (ulonglong)bVar13) * 4);
    }
    bVar13 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar13 != 0);
  uVar12 = ~uVar12;
  uVar15 = (((((ulonglong)(uVar12 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar12 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar12 >> 0x10 & 0xff))
            * 0x100000001b3 ^ (ulonglong)(uVar12 >> 0x18)) * 0x100000001b3 & DAT_181107640;
  lVar7 = *(longlong *)(DAT_181107628 + 8 + uVar15 * 0x10);
  if (lVar7 == DAT_181107618) {
LAB_180328da4:
    lVar7 = DAT_181107618;
  }
  else {
    uVar6 = *(uint *)(lVar7 + 0x10);
    while (uVar12 != uVar6) {
      if (lVar7 == *(longlong *)(DAT_181107628 + uVar15 * 0x10)) goto LAB_180328da4;
      lVar7 = *(longlong *)(lVar7 + 8);
      uVar6 = *(uint *)(lVar7 + 0x10);
    }
    if (lVar7 == 0) goto LAB_180328da4;
  }
  if (lVar7 == DAT_181107618) {
    fVar22 = 0.0;
  }
  else {
    fVar22 = *(float *)(lVar7 + 0x14);
  }
  fVar18 = param_7;
  if (param_7 <= 0.0) {
    if (CONCAT44(param_6._4_4_,(float)param_6) == 0) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = DAT_1808ac9fc;
    }
    lVar7 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar7 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    in_stack_fffffffffffffef8 = 0;
    in_stack_fffffffffffffee0 = param_1;
    FUN_18040a2f0(&local_e0,lVar7,DAT_1808ac930,DAT_1808acd08,0,param_1,0,0,0);
    fVar17 = (float)FUN_18053f0d0(local_e0 + DAT_1808ac2f0);
    fVar18 = fVar17 + DAT_1808ac980 + fVar18 + fVar22 * _DAT_1808ac978;
  }
  fStack_dc = 31.706;
  fVar22 = (((*(float *)(lVar9 + 0x30) + *(float *)(lVar9 + 0x28)) - *(float *)(lVar9 + 0x58)) -
           *(float *)(lVar9 + 0xc0)) - fVar23;
  if (fVar22 <= fVar18) {
    fVar22 = fVar18;
  }
  local_e0 = fVar22;
  FUN_1803e89e0(param_1);
  if (param_4 == '\0') {
    *(uint *)(DAT_180ca0a50 + 0x1eb4) = *(uint *)(DAT_180ca0a50 + 0x1eb4) | 0x4000;
  }
  cVar4 = FUN_180415e30("##row",&local_e0,0);
  cVar5 = FUN_1803dd930(0);
  fVar17 = DAT_1808ac34c;
  fVar18 = DAT_1808ac1f4;
  uVar6 = *(uint *)(DAT_180ca0a50 + 0x1ee8);
  uVar15 = (ulonglong)uVar6;
  if (*(uint *)(DAT_180ca0a50 + 0x1578) == 0) {
    bVar16 = false;
  }
  else {
    bVar16 = *(uint *)(DAT_180ca0a50 + 0x1578) == uVar6;
    if (bVar16) {
      fVar19 = DAT_1808ac34c;
      goto LAB_180328f1d;
    }
  }
  if (cVar5 == '\0') {
    fVar19 = 0.0;
  }
  else {
    fVar19 = DAT_1808ac1f4;
  }
LAB_180328f1d:
  uVar6 = ~uVar6;
  pcVar11 = "hover";
  bVar13 = 0x68;
  uVar14 = uVar6;
  do {
    pcVar11 = pcVar11 + 1;
    if (((bVar13 == 0x23) && (*pcVar11 == 0x23)) && (pcVar11[1] == 0x23)) {
      pcVar11 = pcVar11 + 2;
      uVar14 = uVar6;
    }
    else {
      uVar15 = (ulonglong)(uVar14 & 0xff) ^ (ulonglong)bVar13;
      uVar14 = uVar14 >> 8 ^ *(uint *)(&DAT_1806c25c0 + uVar15 * 4);
    }
    bVar13 = *pcVar11;
  } while (bVar13 != 0);
  param_7 = (float)~uVar14;
  local_c4 = 0;
  local_c0 = 0xffffffff;
  local_d0 = fVar19;
  local_cc = fVar19;
  local_c8 = fVar19;
  FUN_18034a380(uVar15,&local_e0,&param_7,&local_d0);
  fVar19 = (float)FUN_1802b3660(CONCAT44(fStack_dc,local_e0) + 0x14,fVar19,DAT_1808ac118,0);
  if ((char)local_res10[0] != '\0' || bVar16) {
    fVar21 = fVar17;
  }
  else if (cVar5 == '\0') {
    fVar21 = 0.0;
  }
  else {
    fVar21 = fVar18;
  }
  pcVar11 = "light";
  bVar13 = 0x6c;
  uVar14 = uVar6;
  do {
    pcVar11 = pcVar11 + 1;
    if (((bVar13 == 0x23) && (*pcVar11 == 0x23)) && (pcVar11[1] == 0x23)) {
      pcVar11 = pcVar11 + 2;
      uVar14 = uVar6;
    }
    else {
      uVar14 = uVar14 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar14 & 0xff) ^ (ulonglong)bVar13) * 4);
    }
    bVar13 = *pcVar11;
  } while (bVar13 != 0);
  param_7 = (float)~uVar14;
  local_c4 = 0;
  local_c0 = 0xffffffff;
  local_d0 = fVar21;
  local_cc = fVar21;
  local_c8 = fVar21;
  FUN_18034a380(fVar19,&local_e0,&param_7,&local_d0);
  uVar20 = FUN_1802b3660(CONCAT44(fStack_dc,local_e0) + 0x14,fVar21,DAT_1808ac118,0);
  lVar9 = CONCAT44(param_6._4_4_,(float)param_6);
  if ((local_res18 == '\0') || ((char)local_res10[0] == '\0')) {
    fVar17 = 0.0;
  }
  local_c4 = 0;
  local_c0 = 0xffffffff;
  local_res10[0] = uVar12;
  local_d0 = fVar17;
  local_cc = fVar17;
  local_c8 = fVar17;
  FUN_18034a380(uVar20,&local_e0,local_res10,&local_d0);
  fVar17 = (float)FUN_1802b3660(CONCAT44(fStack_dc,local_e0) + 0x14,fVar17,DAT_1808ac118,0);
  lVar7 = DAT_180ca0a50;
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar7 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffee0 >> 0x20);
  param_6._0_4_ = fVar22 + fVar23;
  *(undefined1 *)(*(longlong *)(lVar7 + 0x14f8) + 0xce) = 1;
  lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x14f8) + 0x2c8);
  fVar22 = local_e8._4_4_;
  param_6._4_4_ = local_e8._4_4_ + DAT_1808ac9f8;
  if (0.0 < fVar19) {
    uVar15 = (ulonglong)in_stack_fffffffffffffee0 & 0xffffffff00000000;
    FUN_1803fe590(lVar7,&local_e8,&param_6,
                  (int)(longlong)((float)(DAT_180960f44 >> 0x18) * fVar19 * DAT_1808ac1b0 + fVar18)
                  << 0x18 | DAT_180960f44 & 0xffffff,DAT_1808ac854,uVar15);
    uVar25 = (undefined4)(uVar15 >> 0x20);
  }
  uVar12 = FUN_1802b38e0(param_8,param_9,uVar20);
  fVar19 = DAT_1808ac910;
  fVar23 = fVar23 + DAT_1808ac8b0;
  if (0.0 < fVar17) {
    local_e0 = fVar23 + DAT_1808ac790;
    fStack_dc = fVar22 + DAT_1808ac910;
    uVar24 = CONCAT44(uVar25,(int)(longlong)((float)(DAT_180960ec0 >> 0x18) * fVar17 + fVar18) <<
                             0x18 | DAT_180960ec0 & 0xffffff);
    FUN_180328670(lVar7,"presets_fa_check",
                  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M438 106C451 118 451 139 438 151L182 407C170 420 149 420 137 407L9 279C-3 267 -3 246 9 234C21 221 42 221 54 234L160 339L393 106C405 93 426 93 438 106L438 106ZM438 106Z\"/></svg>"
                  ,&local_e0,DAT_1808ac880,uVar24);
    uVar25 = (undefined4)((ulonglong)uVar24 >> 0x20);
  }
  fVar23 = fVar17 * _DAT_1808ac978 + fVar23;
  if (lVar9 != 0) {
    local_e0 = fVar23 + DAT_1808ac864;
    fStack_dc = fVar22 + fVar19;
    FUN_180328670(lVar7,param_5,lVar9,&local_e0,DAT_1808ac8d4,CONCAT44(uVar25,uVar12));
    fVar23 = fVar23 + DAT_1808ac9fc;
  }
  FUN_1803fc200(lVar7,&local_e8,&param_6,1);
  param_6._0_4_ = fVar23;
  param_6._4_4_ = (float)FUN_18053f0d0(DAT_1808ac7ec);
  param_6._4_4_ = param_6._4_4_ + fVar22;
  lVar9 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar9 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  if ((((uVar12 & 0xff000000) != 0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + 0x18);
    }
    local_e0 = *(float *)(lVar7 + 0x60);
    fStack_dc = *(float *)(lVar7 + 100);
    uStack_d8 = *(undefined4 *)(lVar7 + 0x68);
    uStack_d4 = *(undefined4 *)(lVar7 + 0x6c);
    FUN_18040a900(lVar9,lVar7,DAT_1808ac930,&param_6,uVar12,&local_e0,param_1,0,
                  in_stack_fffffffffffffef8 & 0xffffffff00000000,0);
  }
  iVar2 = *(int *)(lVar7 + 0xa0);
  iVar1 = iVar2 + -1;
  *(int *)(lVar7 + 0xa0) = iVar1;
  if (iVar1 == 0) {
    puVar8 = (undefined4 *)(*(longlong *)(lVar7 + 0x38) + 0x34);
  }
  else {
    puVar8 = (undefined4 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(lVar7 + 0xa8));
  }
  uVar20 = puVar8[1];
  uVar25 = puVar8[2];
  uVar3 = puVar8[3];
  *(undefined4 *)(lVar7 + 0x60) = *puVar8;
  *(undefined4 *)(lVar7 + 100) = uVar20;
  *(undefined4 *)(lVar7 + 0x68) = uVar25;
  *(undefined4 *)(lVar7 + 0x6c) = uVar3;
  FUN_1803fbff0(lVar7);
  if ((cVar4 != '\0') && (local_res20 != '\0')) {
    FUN_1803ee1f0();
  }
  return cVar4;
}



/* ===== 180329410 FUN_180329410 ===== */

void FUN_180329410(void)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  
  lVar3 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar3 = *(longlong *)(lVar3 + 0x14f8);
  local_res8 = *(float *)(lVar3 + 0x30) + *(float *)(lVar3 + 0x28);
  local_resc = *(float *)(lVar3 + 0x34) + *(float *)(lVar3 + 0x2c);
  fVar1 = *(float *)(lVar3 + 0x11c);
  FUN_1803fc200(*(undefined8 *)(lVar3 + 0x2c8),lVar3 + 0x28,&local_res8,0);
  local_res10 = *(float *)(lVar3 + 0x28);
  local_res8 = local_res10 + *(float *)(lVar3 + 0x30);
  local_resc = fVar1 + DAT_1808ac34c;
  local_res14 = fVar1;
  FUN_1803fe590(*(undefined8 *)(lVar3 + 0x2c8),&local_res10,&local_res8,DAT_180960f48,0,0);
  lVar3 = *(longlong *)(lVar3 + 0x2c8);
  iVar2 = *(int *)(lVar3 + 0xa0);
  iVar7 = iVar2 + -1;
  *(int *)(lVar3 + 0xa0) = iVar7;
  if (iVar7 == 0) {
    puVar8 = (undefined4 *)(*(longlong *)(lVar3 + 0x38) + 0x34);
  }
  else {
    puVar8 = (undefined4 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(lVar3 + 0xa8));
  }
  uVar4 = puVar8[1];
  uVar5 = puVar8[2];
  uVar6 = puVar8[3];
  *(undefined4 *)(lVar3 + 0x60) = *puVar8;
  *(undefined4 *)(lVar3 + 100) = uVar4;
  *(undefined4 *)(lVar3 + 0x68) = uVar5;
  *(undefined4 *)(lVar3 + 0x6c) = uVar6;
  FUN_1803fbff0();
  local_res8 = 0.0;
  local_resc = 1.0;
  FUN_1804174f0(&local_res8);
  return;
}



/* ===== 180329550 FUN_180329550 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_180329550(char *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 auStack_88 [40];
  char *local_60;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_60 = param_1;
  lVar4 = FUN_180512a60(0);
  uVar5 = lVar4 - param_2;
  if ((longlong)uVar5 < 0x79) {
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
    param_1[0x10] = '\b';
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
    param_1[0] = 'J';
    param_1[1] = 'u';
    param_1[2] = 's';
    param_1[3] = 't';
    param_1[4] = ' ';
    param_1[5] = 'N';
    param_1[6] = 'o';
    param_1[7] = 'w';
    param_1[8] = '\0';
  }
  else if ((longlong)uVar5 < 0xe11) {
    uVar6 = FUN_180201310(local_58,(uVar5 & 0xffff) / 0x3c);
    puVar7 = (undefined4 *)FUN_1800134a0(uVar6," minutes ago",0xc);
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
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    *(undefined4 *)param_1 = *puVar7;
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 8) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    uVar1 = puVar7[5];
    uVar2 = puVar7[6];
    uVar3 = puVar7[7];
    *(undefined4 *)(param_1 + 0x10) = puVar7[4];
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    *(undefined1 *)puVar7 = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 6) = 0xf;
    FUN_18000f890(local_58);
  }
  else if ((longlong)uVar5 < 0x5461) {
    uVar6 = FUN_180201310(local_38,(uVar5 & 0xffff) / 0xe10);
    puVar7 = (undefined4 *)FUN_1800134a0(uVar6," hours ago",10);
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
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    *(undefined4 *)param_1 = *puVar7;
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 8) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    uVar1 = puVar7[5];
    uVar2 = puVar7[6];
    uVar3 = puVar7[7];
    *(undefined4 *)(param_1 + 0x10) = puVar7[4];
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    *(undefined1 *)puVar7 = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 6) = 0xf;
    FUN_18000f890(local_38);
  }
  else {
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
    param_1[0x18] = '\x0f';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    if ((longlong)uVar5 < 0x15181) {
      param_1[0x10] = '\x05';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      *(undefined4 *)param_1 = s_Today_180769b58._0_4_;
      param_1[4] = s_Today_180769b58[4];
      param_1[5] = '\0';
    }
    else if ((longlong)uVar5 < 0x2a301) {
      param_1[0x10] = '\t';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      *(undefined8 *)param_1 = s_Yesterday_180769b80._0_8_;
      param_1[8] = s_Yesterday_180769b80[8];
      param_1[9] = '\0';
    }
    else if ((longlong)uVar5 < 0x93a81) {
      param_1[0x10] = '\t';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      *(undefined8 *)param_1 = s_Last_Week_180769b70._0_8_;
      param_1[8] = s_Last_Week_180769b70[8];
      param_1[9] = '\0';
    }
    else if ((longlong)uVar5 < 0x278d01) {
      param_1[0x10] = '\n';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      *(undefined8 *)param_1 = s_Last_Month_180769b38._0_8_;
      *(undefined2 *)(param_1 + 8) = s_Last_Month_180769b38._8_2_;
      param_1[10] = '\0';
    }
    else {
      param_1[0x10] = '\x0f';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      *(undefined8 *)param_1 = s_A_Long_Time_Ago_180769b28._0_8_;
      *(undefined4 *)(param_1 + 8) = s_A_Long_Time_Ago_180769b28._8_4_;
      *(undefined2 *)(param_1 + 0xc) = s_A_Long_Time_Ago_180769b28._12_2_;
      param_1[0xe] = s_A_Long_Time_Ago_180769b28[0xe];
      param_1[0xf] = '\0';
    }
  }
  return param_1;
}



/* ===== 1803297c0 FUN_1803297c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803297c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  FUN_1803d8730(0,DAT_180960ec8);
  lVar7 = DAT_1811079c0;
  if ((DAT_1811079c0 == 0) && (lVar7 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar7 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_38 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
  local_30 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
  local_2c = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_38);
  FUN_1803e8680(lVar7,DAT_1808ac930,0);
  plVar5 = param_1;
  if (0xf < (ulonglong)((longlong *)*param_1)[3]) {
    plVar5 = (longlong *)*param_1;
  }
  FUN_180414370(*plVar5,0,1);
  lVar7 = DAT_180ca0a50;
  lVar2 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
  if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    lVar1 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
    FUN_1803e8680(*(undefined8 *)(lVar1 + -0x10 + lVar2 * 0x10),
                  *(undefined4 *)(lVar1 + -8 + lVar2 * 0x10),
                  *(undefined4 *)(lVar1 + -4 + lVar2 * 0x10));
    *(int *)(lVar7 + 0x1fe0) = *(int *)(lVar7 + 0x1fe0) + -1;
  }
  FUN_1803d87f0(1);
  FUN_180414bb0(&DAT_180760774,"Author");
  FUN_1803ec6c0(0,DAT_1808ac658);
  FUN_1803d8730(0,DAT_1809f54bc);
  uVar3 = FUN_1801c8250();
  FUN_180414370(uVar3,0,1);
  FUN_1803d87f0(1);
  pcVar6 = "Modified";
  if (*(char *)(*param_1 + 0x30) != '\0') {
    pcVar6 = "Deleted";
  }
  FUN_180414bb0(&DAT_180760774,pcVar6);
  FUN_1803ec6c0(0,DAT_1808ac658);
  FUN_1803d8730(0,DAT_1809f54bc);
  lVar7 = 0x38;
  if (*(char *)(*param_1 + 0x30) == '\0') {
    lVar7 = 0x28;
  }
  puVar4 = (undefined8 *)FUN_180329550(&local_38,*(undefined8 *)(*param_1 + lVar7));
  if (0xf < (ulonglong)puVar4[3]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  FUN_180414370(puVar4,0,1);
  FUN_18000f890(&local_38);
  FUN_1803d87f0(1);
  return;
}



/* ===== 1803299e0 FUN_1803299e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1803299e0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte ****ppppbVar7;
  undefined1 *puVar8;
  byte ****ppppbVar9;
  bool bVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  byte ****local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  byte ****local_38 [2];
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  puVar8 = auStack_78;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_78;
  if (DAT_1811075b0 == '\0') {
LAB_180329b9c:
    bVar10 = true;
  }
  else {
    FUN_180024b50(local_38,param_1);
    local_58 = (byte ****)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    sVar3 = strlen(&DAT_1811075b0);
    FUN_1800133a0(&local_58,&DAT_1811075b0,sVar3);
    puVar8 = auStack_78;
    ppppbVar7 = (byte ****)local_38;
    if (0xf < local_20) {
      ppppbVar7 = local_38[0];
    }
    ppppbVar9 = (byte ****)((longlong)ppppbVar7 + local_28);
    for (; ppppbVar7 != ppppbVar9; ppppbVar7 = (byte ****)((longlong)ppppbVar7 + 1)) {
      iVar2 = tolower((uint)*(byte *)ppppbVar7);
      *(byte *)ppppbVar7 = (byte)iVar2;
    }
    ppppbVar7 = (byte ****)&local_58;
    if (0xf < local_40) {
      ppppbVar7 = local_58;
    }
    ppppbVar9 = (byte ****)((longlong)ppppbVar7 + local_48);
    if (ppppbVar7 != ppppbVar9) {
      do {
        iVar2 = tolower((uint)*(byte *)ppppbVar7);
        *(byte *)ppppbVar7 = (byte)iVar2;
        ppppbVar7 = (byte ****)((longlong)ppppbVar7 + 1);
      } while (ppppbVar7 != ppppbVar9);
    }
    ppppbVar7 = (byte ****)&local_58;
    if (0xf < local_40) {
      ppppbVar7 = local_58;
    }
    ppppbVar9 = (byte ****)local_38;
    if (0xf < local_20) {
      ppppbVar9 = local_38[0];
    }
    if (local_28 < local_48) {
LAB_180329b36:
      lVar5 = -1;
    }
    else if (local_48 == 0) {
      lVar5 = 0;
    }
    else {
      pbVar4 = (byte *)thunk_FUN_1804e92d0(ppppbVar9,(byte *)((longlong)ppppbVar9 + local_28),
                                           ppppbVar7);
      if (pbVar4 == (byte *)((longlong)ppppbVar9 + local_28)) goto LAB_180329b36;
      lVar5 = (longlong)pbVar4 - (longlong)ppppbVar9;
    }
    bVar10 = lVar5 != -1;
    if (0xf < local_40) {
      uVar6 = local_40 + 1;
      ppppbVar7 = local_58;
      if (0xfff < uVar6) {
        ppppbVar7 = (byte ****)local_58[-1];
        if ((byte *)0x1f < (byte *)((longlong)local_58 + (-8 - (longlong)ppppbVar7))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar8 = auStack_70;
          goto LAB_180329b9c;
        }
        uVar6 = local_40 + 0x28;
      }
      thunk_FUN_1803d64e0(ppppbVar7,uVar6);
    }
    local_48 = 0;
    local_40 = 0xf;
    local_58 = (byte ****)((ulonglong)local_58 & 0xffffffffffffff00);
    FUN_18000f890(local_38);
  }
  *(undefined8 *)(puVar8 + -8) = 0x180329baa;
  return bVar10;
}



/* ===== 180329bc0 FUN_180329bc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180329bc0(void)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  size_t sVar9;
  longlong lVar10;
  longlong lVar11;
  char *******_Str1;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [24];
  uint local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 *puStack_160;
  longlong local_158 [2];
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  longlong local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  longlong *local_108;
  char *******local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char *******local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  puVar19 = auStack_198;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_198;
  uVar22 = 0;
  local_178 = 0;
  local_170 = (undefined8 *)((ulonglong)local_170 & 0xffffffff00000000);
  if (((DAT_180962437 == '\0') && (0.0 <= DAT_1809f51a8)) &&
     (*(double *)(DAT_180ca0a50 + 0x10) - DAT_1809f51a8 < DAT_1808ac500)) goto LAB_18032a17f;
  DAT_180962437 = '\0';
  local_168 = 0;
  puStack_160 = (undefined8 *)0x0;
  local_158[0] = 0;
  DAT_1809f51a8 = *(double *)(DAT_180ca0a50 + 0x10);
  FUN_1800fda40(&local_140);
  puVar17 = auStack_198;
  puVar19 = auStack_198;
  puVar18 = auStack_198;
  local_148 = local_140;
  local_118 = local_138;
  puVar16 = local_138;
  puVar13 = local_140;
  if (local_140 != local_138) {
    do {
      local_b8 = (char *******)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      uVar14 = puVar13[2];
      if ((ulonglong)puVar13[3] < 0x10) {
        puVar16 = puVar13;
      }
      else {
        puVar16 = (undefined8 *)*puVar13;
      }
      local_148 = puVar13;
      if (0x7fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_180011990();
      }
      if (uVar14 < 0x10) {
        local_a0 = 0xf;
        local_b8 = (char *******)*puVar16;
        uStack_b0 = puVar16[1];
        local_a8 = uVar14;
      }
      else {
        uVar15 = uVar14 | 0xf;
        if (uVar15 < 0x8000000000000000) {
          if (uVar15 < 0x16) {
            uVar15 = 0x16;
          }
        }
        else {
          uVar15 = 0x7fffffffffffffff;
        }
        local_b8 = (char *******)FUN_18000fb70(uVar15 + 1);
        local_a8 = uVar14;
        local_a0 = uVar15;
        FUN_180540530(local_b8,puVar16,uVar14 + 1);
      }
      local_98 = puVar13[4];
      local_90 = puVar13[5];
      local_88 = *(char *)(puVar13 + 6);
      local_80 = puVar13[7];
      cVar6 = FUN_1803299e0(&local_b8);
      if (cVar6 == '\0') {
        pcVar8 = (char *)FUN_1801c8250();
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_60 = 0;
        sVar9 = strlen(pcVar8);
        FUN_1800133a0(&local_78,pcVar8,sVar9);
        uVar21 = uVar22 | 1;
        local_170 = (undefined8 *)(CONCAT44(local_170._4_4_,uVar22) | 1);
        local_178 = uVar21;
        cVar6 = FUN_1803299e0(&local_78);
        uVar22 = uVar21;
        if (cVar6 != '\0') goto LAB_180329d8d;
        bVar23 = true;
      }
      else {
LAB_180329d8d:
        bVar23 = false;
      }
      if ((uVar22 & 1) != 0) {
        uVar22 = uVar22 & 0xfffffffe;
        local_178 = uVar22;
        if (0xf < local_60) {
          uVar14 = local_60 + 1;
          lVar11 = local_78;
          if (0xfff < uVar14) {
            lVar11 = *(longlong *)(local_78 + -8);
            if (0x1f < (local_78 - lVar11) - 8U) {
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              puVar17 = auStack_190;
              goto LAB_18032a0e9;
            }
            uVar14 = local_60 + 0x28;
          }
          thunk_FUN_1803d64e0(lVar11,uVar14);
        }
      }
      lVar4 = local_80;
      cVar6 = local_88;
      lVar3 = local_90;
      lVar11 = local_168;
      iVar2 = DAT_181107194;
      if (!bVar23) {
        local_158[1] = 0;
        local_170 = puStack_160;
        for (lVar20 = (longlong)puStack_160 - local_168 >> 6; lVar10 = local_158[1], lVar20 != 0;
            lVar20 = lVar20 + -1) {
          lVar10 = lVar20 * 0x40;
          if ((cVar6 == '\0') || (*(char *)(lVar10 + -0x10 + lVar11) == '\0')) {
            if (iVar2 != 2) {
              if (iVar2 == 1) {
                lVar10 = *(longlong *)(lVar10 + -0x18 + lVar11);
                bVar24 = SBORROW8(lVar3,lVar10);
                bVar23 = lVar3 - lVar10 < 0;
              }
              else {
                lVar10 = *(longlong *)(lVar10 + -0x20 + lVar11);
                bVar24 = SBORROW8(local_98,lVar10);
                bVar23 = local_98 - lVar10 < 0;
              }
              goto LAB_180329e80;
            }
            pcVar8 = (char *)(lVar11 + -0x40 + lVar10);
            if (0xf < *(ulonglong *)(lVar10 + -0x28 + lVar11)) {
              pcVar8 = *(char **)pcVar8;
            }
            _Str1 = (char *******)&local_b8;
            if (0xf < local_a0) {
              _Str1 = local_b8;
            }
            iVar7 = strcmp((char *)_Str1,pcVar8);
            bVar23 = SUB41((uint)iVar7 >> 0x1f,0);
          }
          else {
            lVar10 = *(longlong *)(lVar10 + -8 + lVar11);
            bVar24 = SBORROW8(lVar4,lVar10);
            bVar23 = lVar4 - lVar10 < 0;
LAB_180329e80:
            bVar23 = bVar24 != bVar23;
          }
          lVar10 = lVar20;
          if (bVar23 != false) break;
        }
        local_120 = (undefined8 *)(lVar11 + lVar10 * 0x40);
        if (local_170 == (undefined8 *)local_158[0]) {
          FUN_1803524e0(&local_168,local_120,&local_b8);
        }
        else if (local_120 == local_170) {
          *local_170 = local_b8;
          local_170[1] = uStack_b0;
          local_170[2] = local_a8;
          local_170[3] = local_a0;
          local_a8 = 0;
          local_a0 = 0xf;
          local_b8 = (char *******)((ulonglong)local_b8._1_7_ << 8);
          local_170[4] = local_98;
          local_170[5] = lVar3;
          *(char *)(local_170 + 6) = cVar6;
          local_170[7] = lVar4;
          puStack_160 = puStack_160 + 8;
        }
        else {
          local_108 = &local_168;
          local_100 = local_b8;
          uStack_f8 = uStack_b0;
          local_f0 = local_a8;
          local_e8 = local_a0;
          local_a8 = 0;
          local_a0 = 0xf;
          local_b8 = (char *******)((ulonglong)local_b8._1_7_ << 8);
          local_e0 = local_98;
          local_d8 = lVar3;
          local_d0 = cVar6;
          local_c8 = lVar4;
          puVar16 = local_170 + -8;
          *(undefined4 *)local_170 = *(undefined4 *)puVar16;
          *(undefined4 *)((longlong)local_170 + 4) = *(undefined4 *)((longlong)local_170 + -0x3c);
          *(undefined4 *)(local_170 + 1) = *(undefined4 *)(local_170 + -7);
          *(undefined4 *)((longlong)local_170 + 0xc) = *(undefined4 *)((longlong)local_170 + -0x34);
          local_170[2] = local_170[-6];
          local_170[3] = local_170[-5];
          local_170[-6] = 0;
          local_170[-5] = 0xf;
          *(undefined1 *)puVar16 = 0;
          local_170[4] = local_170[-4];
          local_170[5] = local_170[-3];
          *(undefined1 *)(local_170 + 6) = *(undefined1 *)(local_170 + -2);
          local_170[7] = local_170[-1];
          puStack_160 = puStack_160 + 8;
          puVar12 = local_170;
          if (puVar16 != local_120) {
            do {
              local_128 = puVar16 + -8;
              local_170 = puVar12 + -8;
              FUN_18002ba60();
              puVar12[-4] = puVar16[-4];
              puVar12[-3] = puVar16[-3];
              *(undefined1 *)(puVar12 + -2) = *(undefined1 *)(puVar16 + -2);
              puVar12[-1] = puVar16[-1];
              puVar12 = local_170;
              puVar16 = local_128;
            } while (local_128 != local_120);
            puVar13 = local_148;
          }
          puVar16 = local_120;
          FUN_18002ba60(local_120,&local_100);
          puVar16[4] = local_e0;
          puVar16[5] = local_d8;
          *(char *)(puVar16 + 6) = local_d0;
          puVar16[7] = local_c8;
          FUN_18000f890(&local_100);
        }
        uVar22 = local_178;
      }
      FUN_18000f890(&local_b8);
      puVar13 = puVar13 + 8;
      local_148 = puVar13;
    } while (puVar13 != local_118);
    puVar16 = local_138;
  }
  puVar5 = auStack_198;
  if (local_140 == (undefined8 *)0x0) {
LAB_18032a0f1:
    puVar19 = puVar5;
    puVar16 = DAT_181107828;
    puVar13 = DAT_181107820;
    if (DAT_181107820 != (undefined8 *)0x0) {
      for (; puVar13 != puVar16; puVar13 = puVar13 + 8) {
        *(undefined8 *)(puVar19 + -8) = 0x18032a118;
        FUN_18000f890(puVar13);
      }
      puVar13 = DAT_181107820;
      if (0xfff < (DAT_181107830 - (longlong)DAT_181107820 & 0xffffffffffffffc0U)) {
        puVar13 = (undefined8 *)DAT_181107820[-1];
        puVar16 = (undefined8 *)((longlong)DAT_181107820 + (-8 - (longlong)puVar13));
        if (&DAT_0000001f < puVar16) goto LAB_18032a156;
      }
      goto LAB_18032a160;
    }
  }
  else {
    puVar13 = local_140;
    if (local_140 != puVar16) {
      do {
        FUN_18000f890(puVar13);
        puVar13 = puVar13 + 8;
      } while (puVar13 != puVar16);
    }
    puVar13 = local_140;
    if ((local_130 - (longlong)local_140 & 0xffffffffffffffc0U) < 0x1000) {
LAB_18032a0e9:
      puVar18 = puVar17;
LAB_18032a0ec:
      *(undefined8 *)(puVar18 + -8) = 0x18032a0f1;
      thunk_FUN_1803d64e0(puVar13);
      puVar5 = puVar18;
      goto LAB_18032a0f1;
    }
    puVar13 = (undefined8 *)local_140[-1];
    if ((undefined1 *)((longlong)local_140 + (-8 - (longlong)puVar13)) < (undefined1 *)0x20)
    goto LAB_18032a0ec;
LAB_18032a156:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar19 = puVar19 + 8;
    puVar13 = puVar16;
LAB_18032a160:
    *(undefined8 *)(puVar19 + -8) = 0x18032a165;
    thunk_FUN_1803d64e0(puVar13);
  }
  DAT_181107820 = *(undefined8 **)(puVar19 + 0x30);
  DAT_181107828 = *(undefined8 **)(puVar19 + 0x38);
  DAT_181107830 = *(longlong *)(puVar19 + 0x40);
LAB_18032a17f:
  *(undefined8 *)(puVar19 + -8) = 0x18032a18b;
  return;
}



/* ===== 18032a1b0 FUN_18032a1b0 ===== */

void FUN_18032a1b0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  uint local_res8 [8];
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar7 = 0;
  if (param_1[0x30] == 0) {
    uVar7 = DAT_1808ac34c;
  }
  uVar6 = 0xffffffff;
  pcVar3 = "presets_vis";
  bVar1 = 0x70;
  pbVar2 = param_1;
  do {
    pcVar3 = pcVar3 + 1;
    if (((bVar1 == 0x23) && (*pcVar3 == 0x23)) && (pcVar3[1] == 0x23)) {
      uVar6 = 0xffffffff;
      pcVar3 = pcVar3 + 2;
    }
    else {
      pbVar2 = (byte *)(uVar6 & 0xff ^ (ulonglong)bVar1);
      uVar6 = (ulonglong)((uint)(uVar6 >> 8) ^ *(uint *)(&DAT_1806c25c0 + (longlong)pbVar2 * 4));
    }
    local_res8[0] = (uint)uVar6;
    bVar1 = *pcVar3;
  } while (bVar1 != 0);
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(byte **)param_1;
  }
  bVar1 = *param_1;
  uVar5 = uVar6;
  while (bVar1 != 0) {
    pbVar4 = param_1 + 1;
    if (((bVar1 == 0x23) && (*pbVar4 == 0x23)) && (param_1[2] == 0x23)) {
      pbVar4 = param_1 + 3;
      uVar5 = uVar6;
    }
    else {
      pbVar2 = (byte *)(uVar5 & 0xff ^ (ulonglong)bVar1);
      uVar5 = (ulonglong)((uint)(uVar5 >> 8) ^ *(uint *)(&DAT_1806c25c0 + (longlong)pbVar2 * 4));
    }
    local_res8[0] = (uint)uVar5;
    param_1 = pbVar4;
    bVar1 = *pbVar4;
  }
  local_res8[0] = ~local_res8[0];
  local_2c = 0;
  local_28 = 0xffffffff;
  local_38 = uVar7;
  local_34 = uVar7;
  local_30 = uVar7;
  FUN_18034a380(pbVar2,local_48,local_res8,&local_38);
  FUN_1802b3660(local_48[0] + 0x14,uVar7,DAT_1808ac118,0);
  return;
}



/* ===== 18032a2d0 FUN_18032a2d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18032a2d0(float *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  byte bVar5;
  float *pfVar6;
  char *pcVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res8;
  float local_resc;
  longlong local_88 [2];
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  fVar2 = DAT_1808ac34c;
  if (DAT_180cd04a8 == '\0') {
    fVar10 = 0.0;
  }
  else {
    fVar10 = DAT_1808ac34c;
  }
  uVar8 = 0xffffffff;
  pcVar7 = "presets_saved_feedback";
  bVar5 = 0x70;
  pfVar6 = param_1;
  do {
    pcVar7 = pcVar7 + 1;
    if (((bVar5 == 0x23) && (*pcVar7 == 0x23)) && (pcVar7[1] == 0x23)) {
      uVar8 = 0xffffffff;
      pcVar7 = pcVar7 + 2;
    }
    else {
      pfVar6 = (float *)(uVar8 & 0xff ^ (ulonglong)bVar5);
      uVar8 = (ulonglong)((uint)(uVar8 >> 8) ^ *(uint *)(&DAT_1806c25c0 + (longlong)pfVar6 * 4));
    }
    bVar5 = *pcVar7;
  } while (bVar5 != 0);
  local_res8 = (float)~(uint)uVar8;
  local_6c = 0;
  local_68 = 0xffffffff;
  local_78 = fVar10;
  local_74 = fVar10;
  local_70 = fVar10;
  FUN_18034a380(pfVar6,local_88,&local_res8,&local_78);
  fVar9 = (float)FUN_1802b3660(local_88[0] + 0x14,fVar10,DAT_1808ac118,0);
  lVar4 = DAT_180ca0a50;
  uVar3 = DAT_1808ac8d4;
  fVar10 = DAT_1808ac1f4;
  if ((fVar2 <= fVar9) && (DAT_180cd04a8 != '\0')) {
    if (DAT_1811074f0 == 0.0) {
      DAT_1811074f0 = *(double *)(DAT_180ca0a50 + 0x10) + _DAT_1808ac558;
    }
    else if (DAT_1811074f0 <= *(double *)(DAT_180ca0a50 + 0x10)) {
      DAT_180cd04a8 = '\0';
    }
  }
  fVar11 = fVar2;
  if (fVar9 <= fVar2) {
    fVar11 = fVar9;
  }
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar1 = *(undefined8 *)(*(longlong *)(lVar4 + 0x14f8) + 0x2c8);
  local_res8 = (*param_2 + *param_1) * fVar10;
  local_resc = (param_1[1] + param_2[1]) * fVar10;
  if (fVar11 < fVar2) {
    FUN_180328670(uVar1,"presets_fa_floppy",
                  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M64 32C28 32 0 61 0 96L0 416C0 451 28 480 64 480L384 480C419 480 448 451 448 416L448 174C448 157 441 140 429 128L352 51C340 39 323 32 306 32L64 32ZM64 128C64 111 78 96 96 96L288 96C305 96 320 111 320 128L320 192C320 210 305 224 288 224L96 224C78 224 64 210 64 192L64 128ZM224 288C246 288 267 301 279 320C290 340 290 365 279 384C267 404 246 416 224 416C201 416 180 404 168 384C157 365 157 340 168 320C180 301 201 288 224 288Z\"/></svg>"
                  ,&local_res8,uVar3,
                  (int)(longlong)((float)(DAT_180960ec0 >> 0x18) * (fVar2 - fVar11) + fVar10) <<
                  0x18 | DAT_180960ec0 & 0xffffff);
  }
  if (0.0 < fVar11) {
    FUN_180328670(uVar1,"presets_fa_check",
                  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M438 106C451 118 451 139 438 151L182 407C170 420 149 420 137 407L9 279C-3 267 -3 246 9 234C21 221 42 221 54 234L160 339L393 106C405 93 426 93 438 106L438 106ZM438 106Z\"/></svg>"
                  ,&local_res8,uVar3,
                  (int)(longlong)((float)(DAT_180960ec0 >> 0x18) * fVar11 + fVar10) << 0x18 |
                  DAT_180960ec0 & 0xffffff);
  }
  return;
}



/* ===== 18032a570 FUN_18032a570 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18032a570(void)

{
  size_t _Size;
  code *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  undefined8 *_Buf1;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *****local_60;
  undefined8 uStack_58;
  size_t local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  cVar2 = DAT_18091a190;
  local_40 = DAT_180919500 ^ (ulonglong)auStack_98;
  if ((((DAT_180cd0e6f != '\0') && (DAT_18091a190 == '\0')) && (DAT_18091a1dc != '\0')) &&
     (s_default_1809f51e0[0] != '\0')) {
    FUN_1800f27d0(&local_78);
    local_60 = (undefined8 *****)0x0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0;
    sVar5 = strlen(s_default_1809f51e0);
    FUN_1800133a0(&local_60,s_default_1809f51e0,sVar5);
    uVar9 = local_48;
    sVar5 = local_50;
    pppppuVar6 = local_60;
    for (puVar10 = local_78; puVar10 != local_70; puVar10 = puVar10 + 4) {
      pppppuVar7 = &local_60;
      if (0xf < uVar9) {
        pppppuVar7 = pppppuVar6;
      }
      _Size = puVar10[2];
      if ((ulonglong)puVar10[3] < 0x10) {
        _Buf1 = puVar10;
      }
      else {
        _Buf1 = (undefined8 *)*puVar10;
      }
      if ((_Size == sVar5) && ((_Size == 0 || (iVar4 = memcmp(_Buf1,pppppuVar7,_Size), iVar4 == 0)))
         ) break;
    }
    if (0xf < uVar9) {
      uVar8 = uVar9 + 1;
      pppppuVar7 = pppppuVar6;
      if (0xfff < uVar8) {
        pppppuVar7 = (undefined8 *****)pppppuVar6[-1];
        if (0x1f < (ulonglong)((longlong)pppppuVar6 + (-8 - (longlong)pppppuVar7)))
        goto LAB_18032a76d;
        uVar8 = uVar9 + 0x28;
      }
      thunk_FUN_1803d64e0(pppppuVar7,uVar8);
    }
    if (puVar10 != local_70) {
      local_60 = (undefined8 *****)0x0;
      uStack_58 = 0;
      local_50 = 0;
      local_48 = 0;
      sVar5 = strlen(s_default_1809f51e0);
      FUN_1800133a0(&local_60,s_default_1809f51e0,sVar5);
      cVar3 = FUN_1800fcca0(&local_60);
      if (cVar3 != '\0') {
        DAT_180cd04a8 = 1;
        DAT_1811074f0 = 0;
        DAT_180962437 = 1;
      }
      if (0xf < local_48) {
        uVar9 = local_48 + 1;
        pppppuVar6 = local_60;
        if (0xfff < uVar9) {
          pppppuVar6 = (undefined8 *****)local_60[-1];
          if (0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)pppppuVar6))) {
LAB_18032a76d:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar9 = local_48 + 0x28;
        }
        thunk_FUN_1803d64e0(pppppuVar6,uVar9);
      }
    }
    FUN_1800288b0(&local_78);
  }
  DAT_180cd0e6f = cVar2;
  return;
}



/* ===== 18032a780 FUN_18032a780 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18032a780(void)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 ******ppppppuVar9;
  char cVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *******pppppppuVar17;
  longlong lVar18;
  char *pcVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined8 ******ppppppuVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined1 auStack_288 [32];
  undefined8 *******local_268;
  undefined8 ******local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_238;
  undefined8 local_228;
  undefined8 ******local_220;
  undefined8 local_218;
  char *local_210;
  char *local_208;
  undefined8 local_200;
  float local_1f8 [2];
  undefined8 *****local_1f0;
  undefined8 uStack_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 *******local_1d0;
  char **local_1c8;
  ulonglong local_1b8;
  undefined8 *****local_1b0;
  undefined8 uStack_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 *local_170;
  char **local_168;
  undefined1 local_150 [32];
  undefined1 local_130 [32];
  undefined1 local_110 [32];
  ulonglong local_f0;
  
  lVar21 = DAT_180ca0a50;
  local_f0 = DAT_180919500 ^ (ulonglong)auStack_288;
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
  *(undefined8 *)(lVar21 + 0x1f84) = 0x43480000;
  *(undefined4 *)(lVar21 + 0x1f8c) = 0x461c3c00;
  *(undefined4 *)(lVar21 + 0x1f90) = 0x43960000;
  *(undefined8 *)(lVar21 + 0x1f98) = 0;
  *(undefined8 *)(lVar21 + 0x1fa0) = 0;
  DAT_180cd04ad = 1;
  local_228 = 0x40e0000040e00000;
  cVar10 = FUN_1802b5260("##presets_deleted",&local_228);
  if (cVar10 == '\0') {
    return;
  }
  lVar21 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar21 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_190 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
  local_188 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
  local_184 = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_190);
  uVar6 = DAT_1808ac930;
  FUN_1803e8680(lVar21,DAT_1808ac930,0);
  ppppppuVar9 = DAT_181107828;
  uVar8 = DAT_1808acd08;
  fVar7 = DAT_1808ac97c;
  fVar5 = DAT_1808ac34c;
  bVar4 = false;
  uStack_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0xf;
  local_1f0 = (undefined8 *****)0x0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0xf;
  local_1b0 = (undefined8 *****)0x0;
  ppppppuVar22 = DAT_181107820;
  if (DAT_181107820 != DAT_181107828) {
    do {
      fVar23 = (float)FUN_18032a1b0(ppppppuVar22);
      lVar21 = DAT_180ca0a50;
      fVar23 = fVar5 - fVar23;
      if (0.0 < fVar23) {
        bVar4 = true;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        lVar21 = *(longlong *)(lVar21 + 0x14f8);
        lVar15 = *(longlong *)(lVar21 + 0x2c8);
        uVar2 = *(undefined4 *)(lVar15 + 0x20);
        uVar25 = *(undefined4 *)(lVar21 + 0x118);
        fVar1 = *(float *)(lVar21 + 0x11c);
        ppppppuVar16 = ppppppuVar22;
        if ((undefined8 *****)0xf < ppppppuVar22[3]) {
          ppppppuVar16 = (undefined8 ******)*ppppppuVar22;
        }
        FUN_1803e89e0(ppppppuVar16);
        local_260 = ppppppuVar22;
        if ((undefined8 *****)0xf < ppppppuVar22[3]) {
          local_260 = (undefined8 ******)*ppppppuVar22;
        }
        lVar18 = DAT_181107a08;
        if (DAT_181107a08 == 0) {
          lVar18 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
        }
        local_238 = 0;
        local_248 = 0;
        local_250 = 0;
        local_258 = 0;
        local_268 = (undefined8 *******)((ulonglong)local_268 & 0xffffffff00000000);
        FUN_18040a2f0(local_1f8,lVar18,uVar6,uVar8);
        fVar24 = (float)FUN_18053f0d0(local_1f8[0] + DAT_1808ac2f0);
        ppppppuVar16 = ppppppuVar22;
        if ((undefined8 *****)0xf < ppppppuVar22[3]) {
          ppppppuVar16 = (undefined8 ******)*ppppppuVar22;
        }
        local_248 = CONCAT44(local_248._4_4_,DAT_180960ec8);
        local_250 = CONCAT44(local_250._4_4_,DAT_180960ef8);
        local_258 = CONCAT44(local_258._4_4_,fVar24 + _DAT_1808aca38 + DAT_1808aca7c);
        local_260 = (undefined8 ******)0x0;
        local_268 = (undefined8 *******)0x0;
        FUN_180328c30(ppppppuVar16,0,0,0);
        uVar11 = FUN_1803dd930(0);
        lVar18 = DAT_180ca0a50;
        local_190 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
        local_200 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
        fVar26 = ((*(float *)(lVar21 + 0x30) + *(float *)(lVar21 + 0x28)) - DAT_1808ac8b0) -
                 DAT_1808aca78;
        fVar24 = fVar1 + DAT_1808ac790;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        lVar21 = *(longlong *)(lVar18 + 0x14f8);
        *(float *)(lVar21 + 0x118) = fVar26;
        *(float *)(lVar21 + 0x11c) = fVar24;
        *(undefined1 *)(lVar21 + 0x159) = 1;
        local_260 = (undefined8 ******)((ulonglong)local_260 & 0xffffffffffffff00);
        local_268 = (undefined8 *******)CONCAT44(local_268._4_4_,0xff6163db);
        pcVar19 = "presets_fa_trash";
        cVar10 = FUN_1803287f0("erase","presets_fa_trash",
                               "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M135 18C140 7 151 0 163 0L284 0C296 0 307 7 312 18L320 32L416 32C433 32 448 47 448 64C448 82 433 96 416 96L32 96C14 96 0 82 0 64C0 47 14 32 32 32L128 32L135 18ZM32 128L416 128L416 448C416 483 387 512 352 512L96 512C60 512 32 483 32 448L32 128ZM128 192C119 192 112 200 112 208L112 432C112 441 119 448 128 448C136 448 144 441 144 432L144 208C144 200 136 192 128 192ZM224 192C215 192 208 200 208 208L208 432C208 441 215 448 224 448C232 448 240 441 240 432L240 208C240 200 232 192 224 192ZM320 192C311 192 304 200 304 208L304 432C304 441 311 448 320 448C328 448 336 441 336 432L336 208C336 200 328 192 320 192Z\"/></svg>"
                               ,0);
        if ((cVar10 != '\0') && (&local_1b0 != ppppppuVar22)) {
          if (ppppppuVar22[3] < (undefined8 *****)0x10) {
            pcVar19 = (char *)ppppppuVar22;
          }
          else {
            pcVar19 = (char *)*ppppppuVar22;
          }
          FUN_180029840(&local_1b0,pcVar19,ppppppuVar22[2]);
        }
        local_218 = 0;
        local_210 = "Remove Permanently";
        cVar10 = FUN_1803dd930(0x400);
        if ((cVar10 == '\0') || ((*(uint *)(DAT_180ca0a50 + 0x1ef0) & 0x100) == 0)) {
          uVar20 = (ulonglong)pcVar19 & 0xffffffffffffff00;
        }
        else {
          uVar20 = 1;
        }
        local_170 = &local_218;
        local_168 = &local_210;
        local_208 = *(char **)(DAT_180ca0a50 + 0x1efc);
        local_220 = *(undefined8 *******)(DAT_180ca0a50 + 0x1ef4);
        local_268 = (undefined8 *******)&local_170;
        FUN_180347170("erase",uVar20,&local_220,&local_208);
        lVar21 = DAT_180ca0a50;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        lVar21 = *(longlong *)(lVar21 + 0x14f8);
        *(float *)(lVar21 + 0x118) = fVar26 + fVar7;
        *(float *)(lVar21 + 0x11c) = fVar24;
        *(undefined1 *)(lVar21 + 0x159) = 1;
        local_260 = (undefined8 ******)((ulonglong)local_260 & 0xffffffffffffff00);
        local_268 = (undefined8 *******)CONCAT44(local_268._4_4_,DAT_180960f38);
        pcVar19 = "presets_fa_rotate_left";
        cVar10 = FUN_1803287f0("restore","presets_fa_rotate_left",
                               "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M48 224L40 224C26 224 16 214 16 200L16 72C16 63 21 54 30 50C39 47 50 49 57 55L98 97C186 11 327 11 414 98C501 186 501 327 414 415C326 501 185 501 97 415C85 402 85 382 97 370C110 357 130 357 142 370C205 432 306 432 369 370C431 307 431 206 369 143C307 81 206 81 143 142L185 183C191 190 193 201 190 210C186 219 177 224 168 224L48 224L48 224Z\"/></svg>"
                               ,0);
        if ((cVar10 != '\0') && (&local_1f0 != ppppppuVar22)) {
          if (ppppppuVar22[3] < (undefined8 *****)0x10) {
            pcVar19 = (char *)ppppppuVar22;
          }
          else {
            pcVar19 = (char *)*ppppppuVar22;
          }
          FUN_180029840(&local_1f0,pcVar19,ppppppuVar22[2]);
        }
        local_220 = (undefined8 ******)0x0;
        local_208 = "Restore";
        cVar10 = FUN_1803dd930(0x400);
        if ((cVar10 == '\0') || ((*(uint *)(DAT_180ca0a50 + 0x1ef0) & 0x100) == 0)) {
          uVar20 = (ulonglong)pcVar19 & 0xffffffffffffff00;
        }
        else {
          uVar20 = 1;
        }
        local_1d0 = &local_220;
        local_1c8 = &local_208;
        local_210 = *(char **)(DAT_180ca0a50 + 0x1efc);
        local_218 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
        local_268 = &local_1d0;
        FUN_180347170("restore",uVar20,&local_218,&local_210);
        lVar21 = DAT_180ca0a50;
        *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
        lVar21 = *(longlong *)(lVar21 + 0x14f8);
        *(undefined4 *)(lVar21 + 0x118) = uVar25;
        fVar24 = fVar24 + fVar7;
        if (fVar24 <= local_200._4_4_) {
          fVar24 = local_200._4_4_;
        }
        *(float *)(lVar21 + 0x11c) = (fVar24 - fVar1) * fVar23 + fVar1;
        *(undefined1 *)(lVar21 + 0x159) = 1;
        local_228 = 0;
        uVar25 = FUN_1804174f0(&local_228);
        local_268 = &local_220;
        local_220 = ppppppuVar22;
        FUN_180347fa0(uVar25,uVar11,&local_190);
        iVar3 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar3 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar3 + -1;
        }
        FUN_1802b3c30(lVar15,uVar2,*(undefined4 *)(lVar15 + 0x20),fVar23);
      }
      ppppppuVar22 = ppppppuVar22 + 8;
    } while (ppppppuVar22 != ppppppuVar9);
    if ((local_1e0 != 0) && (cVar10 = FUN_1800f24d0(&local_1f0), cVar10 != '\0')) {
      local_1d0 = (undefined8 *******)((ulonglong)local_1d0 & 0xffffffff00000000);
      local_1c8 = &PTR_vftable_18091a158;
      uVar12 = FUN_1800f25e0(local_150,&local_1f0);
      FUN_180066c10(&local_170,uVar12);
      piVar13 = (int *)FUN_180016ab0(&local_190,&local_170,&local_1d0);
      iVar3 = *piVar13;
      FUN_1800289e0(&local_170);
      FUN_18000f890(local_150);
      if ((iVar3 == 0) || (iVar3 == 1)) {
        uVar12 = FUN_1800f25e0(local_130,&local_1f0);
        uVar14 = FUN_1800fd7b0(&local_190,&local_1f0);
        cVar10 = FUN_1800fd920(uVar14,uVar12);
        FUN_18000f890(&local_190);
        FUN_18000f890(local_130);
        if (cVar10 != '\0') {
          DAT_180962437 = 1;
        }
      }
    }
    if ((local_1a0 != 0) && (cVar10 = FUN_1800f24d0(&local_1b0), cVar10 != '\0')) {
      uVar12 = FUN_1800fd7b0(local_110,&local_1b0);
      FUN_180066c10(&local_1d0,uVar12);
      pppppppuVar17 = &local_1d0;
      if (7 < local_1b8) {
        pppppppuVar17 = local_1d0;
      }
      cVar10 = FUN_1804e5bf0(pppppppuVar17);
      FUN_1800289e0(&local_1d0);
      FUN_18000f890(local_110);
      if (cVar10 != '\0') {
        DAT_180962437 = 1;
      }
    }
    if (bVar4) goto LAB_18032aeb6;
  }
  FUN_1803ee1f0();
LAB_18032aeb6:
  lVar21 = DAT_180ca0a50;
  lVar15 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
  if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    lVar18 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
    FUN_1803e8680(*(undefined8 *)(lVar18 + -0x10 + lVar15 * 0x10),
                  *(undefined4 *)(lVar18 + -8 + lVar15 * 0x10),
                  *(undefined4 *)(lVar18 + -4 + lVar15 * 0x10));
    *(int *)(lVar21 + 0x1fe0) = *(int *)(lVar21 + 0x1fe0) + -1;
  }
  FUN_1802b5590();
  FUN_18000f890(&local_1b0);
  FUN_18000f890(&local_1f0);
  return;
}



/* ===== 18032af80 FUN_18032af80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18032af80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  FUN_1803d8730(0,DAT_180960ec8);
  lVar6 = DAT_1811079c0;
  if ((DAT_1811079c0 == 0) && (lVar6 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar6 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_38 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
  local_30 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
  local_2c = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_38);
  FUN_1803e8680(lVar6,DAT_1808ac930,0);
  plVar5 = param_1;
  if (0xf < (ulonglong)((longlong *)*param_1)[3]) {
    plVar5 = (longlong *)*param_1;
  }
  FUN_180414370(*plVar5,0,1);
  lVar6 = DAT_180ca0a50;
  lVar2 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
  if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    lVar1 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
    FUN_1803e8680(*(undefined8 *)(lVar1 + -0x10 + lVar2 * 0x10),
                  *(undefined4 *)(lVar1 + -8 + lVar2 * 0x10),
                  *(undefined4 *)(lVar1 + -4 + lVar2 * 0x10));
    *(int *)(lVar6 + 0x1fe0) = *(int *)(lVar6 + 0x1fe0) + -1;
  }
  FUN_1803d87f0(1);
  FUN_180414bb0(&DAT_180760774,"Author");
  FUN_1803ec6c0(0,DAT_1808ac658);
  FUN_1803d8730(0,DAT_1809f54bc);
  uVar3 = FUN_1801c8250();
  FUN_180414370(uVar3,0,1);
  FUN_1803d87f0(1);
  FUN_180414bb0(&DAT_180760774,"Deleted");
  FUN_1803ec6c0(0,DAT_1808ac658);
  FUN_1803d8730(0,DAT_1809f54bc);
  puVar4 = (undefined8 *)FUN_180329550(&local_38,*(undefined8 *)(*param_1 + 0x38));
  if (0xf < (ulonglong)puVar4[3]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  FUN_180414370(puVar4,0,1);
  FUN_18000f890(&local_38);
  FUN_1803d87f0(1);
  return;
}



/* ===== 18032b170 FUN_18032b170 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18032b170(void)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  char **ppcVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined8 *local_d8;
  undefined1 local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  undefined8 local_a8;
  char **ppcStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  lVar13 = DAT_180ca0a50;
  local_68 = DAT_180919500 ^ (ulonglong)auStack_f8;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar11 = *(longlong *)(lVar13 + 0x14f8);
  uVar1 = *(undefined4 *)(lVar11 + 0x11c);
  fVar16 = (((*(float *)(lVar11 + 0x28) - *(float *)(lVar11 + 0x98)) + *(float *)(lVar11 + 0x30)) -
           DAT_1808ac7ac) - _DAT_1808acac8;
  *(undefined1 *)(lVar11 + 0xce) = 1;
  lVar11 = *(longlong *)(lVar13 + 0x14f8);
  *(float *)(lVar11 + 0x118) = fVar16;
  *(undefined4 *)(lVar11 + 0x11c) = uVar1;
  *(undefined1 *)(lVar11 + 0x159) = 1;
  uVar1 = *(undefined4 *)(*(longlong *)(lVar13 + 0x14f8) + 0x11c);
  fVar16 = *(float *)(*(longlong *)(lVar13 + 0x14f8) + 0x118);
  uVar7 = DAT_180960f38;
  if (DAT_18091a1dc != '\0') {
    uVar7 = DAT_1809f54bc;
  }
  local_d0 = 0;
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar7);
  cVar6 = FUN_1803287f0("auto_save","presets_fa_auto_save",
                        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M73 135L196 12C203 5 213 0 224 0C234 0 244 5 251 12L374 135C380 141 384 150 384 159C384 177 368 192 350 192L288 192L288 320C288 338 273 352 256 352L192 352C174 352 160 338 160 320L160 192L97 192C79 192 64 177 64 159C64 150 67 141 73 135L73 135ZM64 352L64 416C64 434 78 448 96 448L352 448C369 448 384 434 384 416L384 352C384 335 398 320 416 320C433 320 448 335 448 352L448 416C448 469 405 512 352 512L96 512C43 512 0 469 0 416L0 352C0 335 14 320 32 320C49 320 64 335 64 352L64 352Z\"/></svg>"
                        ,0);
  if (cVar6 != '\0') {
    DAT_18091a1dc = DAT_18091a1dc == '\0';
  }
  local_c8 = (char *)0x0;
  local_c0 = "Automatic Save";
  cVar6 = FUN_1803dd930(0x400);
  if ((cVar6 == '\0') || ((*(uint *)(DAT_180ca0a50 + 0x1ef0) >> 8 & 1) == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  local_a8 = &local_c8;
  ppcStack_a0 = &local_c0;
  local_b8 = *(char **)(DAT_180ca0a50 + 0x1efc);
  local_b0 = *(char **)(DAT_180ca0a50 + 0x1ef4);
  local_d8 = &local_a8;
  FUN_180347170("auto_save",uVar10,&local_b0,&local_b8);
  lVar5 = DAT_181107828;
  fVar4 = DAT_1808ac34c;
  puVar14 = auStack_f8;
  bVar3 = false;
  lVar11 = DAT_180ca0a50;
  for (lVar13 = DAT_181107820; DAT_180ca0a50 = lVar11, lVar13 != lVar5; lVar13 = lVar13 + 0x40) {
    fVar17 = (float)FUN_18032a1b0(lVar13);
    bVar3 = (bool)(bVar3 | fVar17 < fVar4);
    lVar11 = DAT_180ca0a50;
  }
  *(undefined1 *)(*(longlong *)(lVar11 + 0x14f8) + 0xce) = 1;
  lVar13 = *(longlong *)(lVar11 + 0x14f8);
  *(float *)(lVar13 + 0x118) = fVar16 + DAT_1808ac97c;
  *(undefined4 *)(lVar13 + 0x11c) = uVar1;
  *(undefined1 *)(lVar13 + 0x159) = 1;
  iVar8 = FUN_1803e8900(*(undefined8 *)(lVar11 + 0x14f8),"##presets_deleted");
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar11 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar11 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar8) ||
       (*(char *)(lVar11 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != '\0'))
    goto LAB_18032b3af;
    uVar10 = 1;
  }
  else {
LAB_18032b3af:
    uVar10 = 0;
  }
  local_d0 = !bVar3;
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,DAT_180960f38);
  cVar6 = FUN_1803287f0("deleted","presets_fa_recently_deleted",
                        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M135 18L128 32L32 32C14 32 0 47 0 64C0 82 14 96 32 96L416 96C433 96 448 82 448 64C448 47 433 32 416 32L320 32L312 18C307 7 296 0 284 0L163 0C151 0 140 7 135 18ZM416 128L32 128L53 467C54 492 75 512 101 512L330 512C285 480 256 428 256 368C256 278 324 204 411 194L416 128ZM576 368C576 317 548 270 504 244C459 218 404 218 360 244C315 270 288 317 288 368C288 420 315 466 360 492C404 518 459 518 504 492C548 466 576 420 576 368ZM432 288C440 288 448 296 448 304L448 352L480 352C488 352 496 360 496 368C496 377 488 384 480 384L432 384C423 384 416 377 416 368L416 304C416 296 423 288 432 288Z\"/></svg>"
                        ,uVar10);
  if (cVar6 != '\0') {
    FUN_1802b4d80("##presets_deleted");
  }
  if (bVar3) {
    local_b0 = 
    "Here you can see the items that you recently deleted. After 7 days, these items will be deleted permanently."
    ;
    local_b8 = "Recently Deleted";
    cVar6 = FUN_1803dd930(0x400);
    if ((cVar6 == '\0') || ((*(uint *)(DAT_180ca0a50 + 0x1ef0) >> 8 & 1) == 0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    local_a8 = &local_b0;
    ppcStack_a0 = &local_b8;
    local_c0 = *(char **)(DAT_180ca0a50 + 0x1efc);
    local_c8 = *(char **)(DAT_180ca0a50 + 0x1ef4);
    local_d8 = &local_a8;
    FUN_180347170("deleted",uVar10,&local_c8,&local_c0);
  }
  lVar11 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar11 = *(longlong *)(lVar11 + 0x14f8);
  *(float *)(lVar11 + 0x118) = fVar16 + DAT_1808aca78;
  *(undefined4 *)(lVar11 + 0x11c) = uVar1;
  *(undefined1 *)(lVar11 + 0x159) = 1;
  local_d0 = 0;
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,DAT_180960f38);
  cVar6 = FUN_1803287f0("create","presets_fa_plus",
                        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 80C256 63 241 48 224 48C206 48 192 63 192 80L192 224L48 224C30 224 16 239 16 256C16 274 30 288 48 288L192 288L192 432C192 449 206 464 224 464C241 464 256 449 256 432L256 288L400 288C417 288 432 274 432 256C432 239 417 224 400 224L256 224L256 80Z\"/></svg>"
                        ,0);
  if (cVar6 == '\0') {
LAB_18032b5cd:
    local_b0 = (char *)0x0;
    local_b8 = "Create";
    cVar6 = FUN_1803dd930(0x400);
    lVar11 = DAT_180ca0a50;
    puVar15 = auStack_f8;
    if ((cVar6 != '\0') && (puVar15 = auStack_f8, (*(uint *)(DAT_180ca0a50 + 0x1ef0) >> 8 & 1) != 0)
       ) {
      uVar10 = 1;
      puVar15 = auStack_f8;
      goto LAB_18032b616;
    }
  }
  else {
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0xf;
    local_88 = 0;
    ppcStack_a0 = (char **)0x0;
    local_98 = 7;
    local_90 = 0xf;
    local_a8 = (char **)(ulonglong)
                        CONCAT16(s_Unnamed_1806f2a80[6],
                                 CONCAT24(s_Unnamed_1806f2a80._4_2_,s_Unnamed_1806f2a80._0_4_));
    cVar6 = FUN_1800fec30(&local_a8,&local_88);
    if (local_90 < 0x10) {
LAB_18032b58b:
      if (cVar6 != '\0') {
        DAT_180962437 = 1;
      }
      if (0xf < local_70) {
        uVar12 = local_70 + 1;
        lVar11 = local_88;
        if (0xfff < uVar12) {
          lVar11 = *(longlong *)(local_88 + -8);
          if (0x1f < (local_88 - lVar11) - 8U) goto LAB_18032b60d;
          uVar12 = local_70 + 0x28;
        }
        thunk_FUN_1803d64e0(lVar11,uVar12);
      }
      goto LAB_18032b5cd;
    }
    uVar12 = local_90 + 1;
    ppcVar9 = local_a8;
    if (uVar12 < 0x1000) {
LAB_18032b586:
      thunk_FUN_1803d64e0(ppcVar9,uVar12);
      goto LAB_18032b58b;
    }
    ppcVar9 = (char **)local_a8[-1];
    if ((ulonglong)((longlong)local_a8 + (-8 - (longlong)ppcVar9)) < 0x20) {
      uVar12 = local_90 + 0x28;
      goto LAB_18032b586;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar14 = auStack_f0;
LAB_18032b60d:
    lVar11 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    puVar15 = puVar14 + 8;
  }
  uVar10 = 0;
LAB_18032b616:
  local_a8 = &local_b0;
  ppcStack_a0 = &local_b8;
  local_c0 = *(char **)(lVar11 + 0x1efc);
  local_c8 = *(char **)(lVar11 + 0x1ef4);
  *(undefined8 **)(puVar15 + 0x20) = &local_a8;
  *(undefined8 *)(puVar15 + -8) = 0x18032b65d;
  FUN_180347170("create",uVar10,&local_c8,&local_c0);
  *(undefined8 *)(puVar15 + -8) = 0x18032b662;
  FUN_18032a780();
  *(undefined8 *)(puVar15 + -8) = 0x18032b66e;
  return;
}



/* ===== 18032b690 FUN_18032b690 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18032b690(undefined8 *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [24];
  char *local_208;
  char *local_200;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  longlong local_1d8 [9];
  ulonglong auStack_190 [9];
  longlong local_148;
  undefined8 ****local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined4 local_9e;
  undefined2 local_9a;
  ulonglong local_88;
  undefined8 local_80;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_228;
  DAT_180cd04ad = 1;
  DAT_180cd04ab = 1;
  local_a8 = 0x40e0000040e00000;
  cVar5 = FUN_1802b5260("##presets_context",&local_a8);
  puVar12 = auStack_228;
  if (cVar5 == '\0') goto LAB_18032bc97;
  lVar8 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar8 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_88 = *(ulonglong *)(DAT_180ca0a50 + 0x11f0);
  local_80 = (undefined **)
             CONCAT44(*(undefined4 *)(DAT_180ca0a50 + 0x1200),
                      *(undefined4 *)(DAT_180ca0a50 + 0x1204));
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_88);
  FUN_1803e8680(lVar8,DAT_1808ac930,0);
  if (param_2 != '\0') {
    local_1e8 = DAT_180960ec8;
    local_1f0 = DAT_180960ef8;
    local_1f8 = 0;
    local_200 = 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M463 224L472 224C485 224 496 214 496 200L496 72C496 63 490 54 481 50C472 47 461 49 455 55L413 97C325 11 184 11 97 98C10 186 10 327 97 415C185 501 326 501 414 415C426 402 426 382 414 370C401 357 381 357 369 370C306 432 205 432 142 370C80 307 80 206 142 143C205 81 305 81 368 142L327 183C320 190 318 201 321 210C325 219 334 224 344 224L463 224Z\"/></svg>"
    ;
    local_208 = "presets_fa_rotate_right";
    cVar5 = FUN_180328c30("Reload",0,0,1);
    if (cVar5 != '\0') {
      cVar5 = FUN_1800fcff0(param_1);
      if (cVar5 != '\0') {
        if ((ulonglong)param_1[3] < 0x10) {
          puVar13 = param_1;
        }
        else {
          puVar13 = (undefined8 *)*param_1;
        }
        snprintf(s_default_1809f51e0,0x40,&DAT_1806d3198,puVar13);
      }
    }
    local_a8 = 0x4040000000000000;
    FUN_1804174f0(&local_a8);
    FUN_180329410();
    local_a8 = 0x4040000000000000;
    FUN_1804174f0(&local_a8);
  }
  local_1e8 = DAT_180960ec8;
  local_1f0 = DAT_180960ef8;
  local_1f8 = 0;
  local_200 = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M307 35C295 40 288 52 288 64L288 128L176 128C78 128 0 207 0 304C0 418 81 467 100 478C102 479 105 480 108 480C119 480 128 471 128 460C128 452 123 446 118 441C108 432 96 415 96 384C96 331 139 288 192 288L288 288L288 352C288 365 295 377 307 382C318 387 332 385 341 376L501 232C508 226 512 218 512 209C512 199 508 191 501 185L341 41C332 32 318 30 307 35L307 35ZM307 35Z\"/></svg>"
  ;
  local_208 = "presets_fa_share";
  cVar5 = FUN_180328c30("Share",0,0,1);
  lVar8 = 0;
  if (cVar5 == '\0') {
LAB_18032b9e5:
    local_1e8 = DAT_180960ec8;
    local_1f0 = DAT_180960ef8;
    local_1f8 = 0;
    local_200 = 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M208 0L332 0C344 0 357 6 366 15L433 82C442 91 448 104 448 116L448 336C448 363 426 384 400 384L208 384C181 384 160 363 160 336L160 48C160 22 181 0 208 0ZM48 128L128 128L128 192L64 192L64 448L256 448L256 416L320 416L320 464C320 490 298 512 272 512L48 512C21 512 0 490 0 464L0 176C0 150 21 128 48 128Z\"/></svg>"
    ;
    local_208 = "presets_fa_copy";
    cVar5 = FUN_180328c30("Duplicate",0,0,1);
    if (cVar5 != '\0') {
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0xf;
      local_c8 = (undefined8 ****)0x0;
      cVar5 = FUN_1800fea80(param_1,&local_c8);
      if (cVar5 != '\0') {
        DAT_180962437 = 1;
      }
      if (0xf < local_b0) {
        uVar11 = local_b0 + 1;
        ppppuVar10 = local_c8;
        if (0xfff < uVar11) {
          ppppuVar10 = (undefined8 ****)local_c8[-1];
          if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppuVar10)))
          goto LAB_18032bc63;
          uVar11 = local_b0 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppuVar10,uVar11);
      }
    }
    if (param_2 == '\0') {
      local_a8 = 0x4040000000000000;
      FUN_1804174f0(&local_a8);
      FUN_180329410();
      local_a8 = 0x4040000000000000;
      FUN_1804174f0(&local_a8);
      local_1e8 = 0xff6163db;
      local_1f0 = 0xff6163db;
      local_1f8 = 0;
      local_200 = 
      "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M135 18C140 7 151 0 163 0L284 0C296 0 307 7 312 18L320 32L416 32C433 32 448 47 448 64C448 82 433 96 416 96L32 96C14 96 0 82 0 64C0 47 14 32 32 32L128 32L135 18ZM32 128L416 128L416 448C416 483 387 512 352 512L96 512C60 512 32 483 32 448L32 128ZM128 192C119 192 112 200 112 208L112 432C112 441 119 448 128 448C136 448 144 441 144 432L144 208C144 200 136 192 128 192ZM224 192C215 192 208 200 208 208L208 432C208 441 215 448 224 448C232 448 240 441 240 432L240 208C240 200 232 192 224 192ZM320 192C311 192 304 200 304 208L304 432C304 441 311 448 320 448C328 448 336 441 336 432L336 208C336 200 328 192 320 192Z\"/></svg>"
      ;
      local_208 = "presets_fa_trash";
      cVar5 = FUN_180328c30("Delete",0,0,1);
      if (cVar5 != '\0') {
        cVar5 = FUN_1800f24d0(param_1);
        if (cVar5 != '\0') {
          local_88 = local_88 & 0xffffffff00000000;
          local_80 = &PTR_vftable_18091a158;
          uVar6 = FUN_1800fd6a0(local_68);
          FUN_180066c10(&local_c8,uVar6);
          FUN_180016bc0(&local_c8,&local_88);
          FUN_1800289e0(&local_c8);
          FUN_18000f890(local_68);
          uVar6 = FUN_1800fd7b0(&local_88,param_1);
          uVar7 = FUN_1800f25e0(local_68,param_1);
          cVar5 = FUN_1800fd920(uVar7,uVar6);
          FUN_18000f890(local_68);
          FUN_18000f890(&local_88);
          if (cVar5 != '\0') {
            lVar8 = _Xtime_get_ticks();
            uVar6 = FUN_1800fd7b0(&local_a8,param_1);
            FUN_180066c10(&local_c8,uVar6);
            ppppuVar10 = &local_c8;
            if (7 < local_b0) {
              ppppuVar10 = local_c8;
            }
            FUN_1804e5f50(lVar8 + 0x19db1ded53e8000,ppppuVar10);
            FUN_1800289e0(&local_c8);
            FUN_18000f890(&local_a8);
            DAT_180962437 = 1;
          }
        }
      }
    }
    puVar12 = auStack_228;
    lVar9 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
    lVar8 = DAT_180ca0a50;
    if (0 < *(int *)(DAT_180ca0a50 + 0x1fe0)) goto LAB_18032bc6a;
    FUN_1803ebc00("Calling PopFont() too many times!");
    puVar12 = auStack_228;
  }
  else {
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0xf;
    local_c8 = (undefined8 ****)0x0;
    cVar5 = FUN_1800f24d0(param_1);
    if (cVar5 != '\0') {
      uVar6 = FUN_1800f25e0(local_68,param_1);
      FUN_180067670(local_1d8,uVar6,0x20);
      FUN_18000f890(local_68);
      if (local_148 == 0) {
        FUN_18005e2f0(local_1d8);
      }
      else {
        local_88 = *(ulonglong *)((longlong)auStack_190 + (longlong)*(int *)(local_1d8[0] + 4));
        local_a8 = 0;
        local_a0 = 1;
        local_9e = local_80._2_4_;
        local_9a = local_80._6_2_;
        local_80._0_2_ = (ushort)(local_88 == 0);
        FUN_180066c70(&local_c8,&local_88,&local_a8);
        FUN_18005e2f0(local_1d8);
        ppppuVar10 = &local_c8;
        if (0xf < local_b0) {
          ppppuVar10 = local_c8;
        }
        if (*(code **)(DAT_180ca0a50 + 0xc18) != (code *)0x0) {
          (**(code **)(DAT_180ca0a50 + 0xc18))(DAT_180ca0a50,ppppuVar10);
        }
      }
    }
    if (local_b0 < 0x10) goto LAB_18032b9e5;
    uVar11 = local_b0 + 1;
    ppppuVar10 = local_c8;
    if (uVar11 < 0x1000) {
LAB_18032b9e0:
      thunk_FUN_1803d64e0(ppppuVar10,uVar11);
      goto LAB_18032b9e5;
    }
    ppppuVar10 = (undefined8 ****)local_c8[-1];
    if ((ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppuVar10)) < 0x20) {
      uVar11 = local_b0 + 0x28;
      goto LAB_18032b9e0;
    }
LAB_18032bc63:
    pcVar4 = (code *)swi(0x29);
    lVar9 = (*pcVar4)(5);
    puVar12 = auStack_220;
LAB_18032bc6a:
    lVar9 = lVar9 + -1;
    lVar3 = *(longlong *)(lVar8 + 0x1fe8);
    uVar1 = *(undefined4 *)(lVar3 + 0xc + lVar9 * 0x10);
    uVar2 = *(undefined4 *)(lVar3 + 8 + lVar9 * 0x10);
    uVar6 = *(undefined8 *)(lVar3 + lVar9 * 0x10);
    *(undefined8 *)(puVar12 + -8) = 0x18032bc8c;
    FUN_1803e8680(uVar6,uVar2,uVar1);
    *(int *)(lVar8 + 0x1fe0) = *(int *)(lVar8 + 0x1fe0) + -1;
  }
  *(undefined8 *)(puVar12 + -8) = 0x18032bc97;
  FUN_1802b5590();
LAB_18032bc97:
  *(undefined8 *)(puVar12 + -8) = 0x18032bca6;
  return;
}



/* ===== 18032bcc0 FUN_18032bcc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_18032bcc0(undefined8 ****param_1)

{
  int *piVar1;
  float fVar2;
  undefined8 ***_Size;
  undefined8 ***pppuVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 ***pppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  size_t sVar18;
  longlong lVar19;
  undefined8 *****pppppuVar20;
  undefined *puVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  int iVar26;
  char *pcVar27;
  longlong lVar28;
  undefined8 ****ppppuVar29;
  undefined1 *puVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [24];
  undefined8 *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1e8;
  bool local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6;
  undefined8 local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  float fStack_1bc;
  uint local_1b8 [2];
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined8 *****local_198;
  undefined1 *puStack_190;
  undefined8 ***local_188;
  ulonglong local_180;
  char local_178 [128];
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_238;
  pppuVar14 = (undefined8 ***)strlen(s_default_1809f51e0);
  _Size = param_1[2];
  pppuVar3 = param_1[3];
  ppppuVar15 = param_1;
  if ((undefined8 ***)0xf < pppuVar3) {
    ppppuVar15 = (undefined8 ****)*param_1;
  }
  if (_Size == pppuVar14) {
    if (_Size == (undefined8 ***)0x0) {
      bVar31 = true;
    }
    else {
      iVar12 = memcmp(ppppuVar15,s_default_1809f51e0,(size_t)_Size);
      bVar31 = iVar12 == 0;
    }
  }
  else {
    bVar31 = false;
  }
  fVar40 = DAT_1808ac34c;
  fVar39 = DAT_1808ac1f4;
  uVar23 = 0xffffffff;
  pcVar27 = "presets_row";
  bVar8 = 0x70;
  do {
    pcVar27 = pcVar27 + 1;
    if (((bVar8 == 0x23) && (*pcVar27 == 0x23)) && (pcVar27[1] == 0x23)) {
      uVar23 = 0xffffffff;
      pcVar27 = pcVar27 + 2;
    }
    else {
      uVar23 = (ulonglong)
               ((uint)(uVar23 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar23 & 0xff ^ (ulonglong)bVar8) * 4));
    }
    local_1b8[0] = (uint)uVar23;
    bVar8 = *pcVar27;
  } while (bVar8 != 0);
  if (pppuVar3 < (undefined8 ***)0x10) {
    ppppuVar15 = param_1;
  }
  else {
    ppppuVar15 = (undefined8 ****)*param_1;
  }
  bVar8 = *(byte *)ppppuVar15;
  uVar24 = uVar23;
  while (bVar8 != 0) {
    ppppuVar29 = (undefined8 ****)((longlong)ppppuVar15 + 1);
    if (((bVar8 == 0x23) && (*(byte *)ppppuVar29 == 0x23)) &&
       (*(byte *)((longlong)ppppuVar15 + 2) == 0x23)) {
      ppppuVar29 = (undefined8 ****)((longlong)ppppuVar15 + 3);
      uVar24 = uVar23;
    }
    else {
      uVar24 = (ulonglong)
               ((uint)(uVar24 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar24 & 0xff ^ (ulonglong)bVar8) * 4));
    }
    local_1b8[0] = (uint)uVar24;
    ppppuVar15 = ppppuVar29;
    bVar8 = *(byte *)ppppuVar29;
  }
  local_1b8[0] = ~local_1b8[0];
  if (bVar31 == false) {
    fStack_1bc = 0.0;
    local_1c0 = 0.0;
  }
  else {
    local_1c0 = DAT_1808ac1f4;
    fStack_1bc = DAT_1808ac34c;
  }
  uVar36 = FUN_18034d610(&DAT_180ca1940,&local_198,local_1b8,&local_1c0);
  uVar13 = *(undefined4 *)((longlong)local_198 + 0x14);
  uVar11 = *(undefined4 *)(local_198 + 3);
  pcVar27 = "hover";
  bVar8 = 0x68;
  uVar22 = ~local_1b8[0];
  do {
    pcVar27 = pcVar27 + 1;
    if (((bVar8 == 0x23) && (*pcVar27 == 0x23)) && (pcVar27[1] == 0x23)) {
      pcVar27 = pcVar27 + 2;
      uVar22 = ~local_1b8[0];
    }
    else {
      uVar22 = uVar22 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar22 & 0xff) ^ (ulonglong)bVar8) * 4);
    }
    bVar8 = *pcVar27;
  } while (bVar8 != 0);
  local_1c0 = (float)~uVar22;
  local_1b0 = (undefined8 ****)CONCAT44(uVar13,uVar13);
  local_1a4 = 0;
  local_1a0 = 0xffffffff;
  local_1a8 = uVar13;
  FUN_18034a380(uVar36,&local_198,&local_1c0,&local_1b0);
  fVar35 = DAT_1808ac118;
  uVar36 = FUN_1802b3660((undefined1 *)((longlong)local_198 + 0x14),uVar13,DAT_1808ac118,0);
  pcVar27 = "light";
  bVar8 = 0x6c;
  uVar22 = ~local_1b8[0];
  do {
    pcVar27 = pcVar27 + 1;
    if (((bVar8 == 0x23) && (*pcVar27 == 0x23)) && (pcVar27[1] == 0x23)) {
      pcVar27 = pcVar27 + 2;
      uVar22 = ~local_1b8[0];
    }
    else {
      uVar22 = uVar22 >> 8 ^
               *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar22 & 0xff) ^ (ulonglong)bVar8) * 4);
    }
    bVar8 = *pcVar27;
  } while (bVar8 != 0);
  local_1c0 = (float)~uVar22;
  local_1b0 = (undefined8 ****)CONCAT44(uVar11,uVar11);
  local_1a4 = 0;
  local_1a0 = 0xffffffff;
  local_1a8 = uVar11;
  FUN_18034a380(uVar36,&local_198,&local_1c0,&local_1b0);
  fVar32 = (float)FUN_1802b3660((undefined1 *)((longlong)local_198 + 0x14),uVar11,fVar35,0);
  local_1d0 = 0x411ccccd41400000;
  local_1c0 = fVar32;
  FUN_1803d89a0(2,&local_1d0);
  FUN_1803d8870(8,fVar40);
  uVar13 = DAT_1808ac7ec;
  FUN_1803d8870(7,DAT_1808ac7ec);
  FUN_1803d8730(3,DAT_180960f60);
  uVar11 = FUN_1802b38e0(DAT_180960eec,
                         (int)(longlong)((float)(DAT_1809f54bc >> 0x18) * DAT_1808ac1b0 + fVar39) <<
                         0x18 | DAT_1809f54bc & 0xffffff,fVar32);
  FUN_1803d8730(5,uVar11);
  uVar23 = DAT_180ca0a50;
  local_1d0 = 0x42153958bf800000;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar11 = FUN_1803e8900(*(undefined8 *)(uVar23 + 0x14f8),"##preset");
  local_218 = (undefined8 *)CONCAT44(local_218._4_4_,0x18);
  cVar9 = FUN_1803e1800("##preset",uVar11,&local_1d0,3);
  FUN_1803d87f0(2);
  uVar23 = DAT_180ca0a50;
  puVar25 = auStack_238;
  if (cVar9 == '\0') {
    local_1d6 = 0;
    local_1d7 = 0;
    goto LAB_18032cbb3;
  }
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(uVar23 + 0x14f8);
  fVar32 = *(float *)(lVar4 + 0x28);
  fVar2 = *(float *)(lVar4 + 0x2c);
  local_1c8 = *(undefined8 *)(lVar4 + 0x28);
  fVar33 = fVar2 + *(float *)(lVar4 + 0x34);
  fVar37 = *(float *)(lVar4 + 0x30) + fVar32;
  local_1d0 = CONCAT44(fVar33,fVar37);
  if (0.0 < (float)uVar36) {
    lVar28 = *(longlong *)(lVar4 + 0x2c8);
    fVar38 = fVar32;
    if (fVar32 <= fVar37) {
      fVar38 = fVar37;
    }
    fVar37 = fVar2;
    if (fVar2 <= fVar33) {
      fVar37 = fVar33;
    }
    piVar1 = (int *)(lVar28 + 0xa0);
    iVar12 = *(int *)(lVar28 + 0xa4);
    if (*piVar1 == iVar12) {
      iVar26 = *piVar1 + 1;
      if (iVar12 == 0) {
        iVar12 = 8;
      }
      else {
        iVar12 = iVar12 / 2 + iVar12;
      }
      if (iVar26 < iVar12) {
        iVar26 = iVar12;
      }
      FUN_1803f7030(piVar1,iVar26);
    }
    lVar19 = (longlong)*piVar1;
    lVar5 = *(longlong *)(lVar28 + 0xa8);
    *(float *)(lVar5 + lVar19 * 0x10) = fVar32;
    *(float *)(lVar5 + 4 + lVar19 * 0x10) = fVar2;
    *(float *)(lVar5 + 8 + lVar19 * 0x10) = fVar38;
    *(float *)(lVar5 + 0xc + lVar19 * 0x10) = fVar37;
    *piVar1 = *piVar1 + 1;
    *(float *)(lVar28 + 0x60) = fVar32;
    *(float *)(lVar28 + 100) = fVar2;
    *(float *)(lVar28 + 0x68) = fVar38;
    *(float *)(lVar28 + 0x6c) = fVar37;
    FUN_1803fbff0(lVar28);
    local_210 = (char *)((ulonglong)local_210._4_4_ << 0x20);
    local_218 = (undefined8 *)CONCAT44(local_218._4_4_,uVar13);
    FUN_1803fe590(lVar28,&local_1c8,&local_1d0,
                  (int)(longlong)((float)(DAT_180960f44 >> 0x18) * (float)uVar36 * fVar35 + fVar39)
                  << 0x18 | DAT_180960f44 & 0xffffff);
    iVar26 = *piVar1;
    iVar12 = iVar26 + -1;
    *piVar1 = iVar12;
    if (iVar12 == 0) {
      puVar16 = (undefined8 *)(*(longlong *)(lVar28 + 0x38) + 0x34);
    }
    else {
      puVar16 = (undefined8 *)((longlong)(iVar26 + -2) * 0x10 + *(longlong *)(lVar28 + 0xa8));
    }
    uVar36 = puVar16[1];
    *(undefined8 *)(lVar28 + 0x60) = *puVar16;
    *(undefined8 *)(lVar28 + 0x68) = uVar36;
    FUN_1803fbff0(lVar28);
    uVar23 = DAT_180ca0a50;
  }
  local_1d0 = *(undefined8 *)(*(longlong *)(uVar23 + 0x14f8) + 0x118);
  fVar35 = (float)local_1d0;
  *(undefined1 *)(*(longlong *)(uVar23 + 0x14f8) + 0xce) = 1;
  lVar28 = *(longlong *)(uVar23 + 0x14f8);
  *(float *)(lVar28 + 0x118) = fVar32;
  *(float *)(lVar28 + 0x11c) = fVar2;
  *(undefined1 *)(lVar28 + 0x159) = 1;
  *(uint *)(uVar23 + 0x1eb4) = *(uint *)(uVar23 + 0x1eb4) | 0x4000;
  local_1d6 = FUN_180415e30("##row_click",lVar4 + 0x30,0);
  local_1d7 = FUN_1803dd930(0);
  iVar12 = *(int *)(DAT_180ca0a50 + 0x1578);
  if (iVar12 == 0) {
    local_1d8 = false;
  }
  else {
    local_1d8 = iVar12 == *(int *)(DAT_180ca0a50 + 0x1ee8);
  }
  lVar28 = *(longlong *)(DAT_180ca0a50 + 0x1500);
  lVar5 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if (lVar28 == 0) {
    bVar7 = false;
  }
  else if (lVar28 == lVar5) {
    cVar10 = '\0';
    uVar23 = DAT_180ca0a50;
    cVar9 = FUN_1803dd8c0(lVar28);
    if (cVar9 == '\0') {
      bVar7 = false;
    }
    else if (((iVar12 == 0) || (*(char *)(uVar23 + 0x1587) != cVar10)) ||
            (iVar12 == *(int *)(lVar28 + 0x8c))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
  }
  else {
    bVar7 = false;
  }
  iVar12 = FUN_1803e8900(lVar5,"##presets_context");
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar28 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar28 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar12) ||
       (*(char *)(lVar28 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != '\0'))
    goto LAB_18032c37b;
    cVar9 = '\x01';
  }
  else {
LAB_18032c37b:
    cVar9 = '\0';
  }
  plVar17 = (longlong *)FUN_18034e110(&DAT_180ca1880,&local_198,param_1);
  lVar28 = *plVar17;
  ppppuVar15 = (undefined8 ****)(lVar28 + 0x30);
  iVar12 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##name");
  if ((*(int *)(DAT_180ca0a50 + 0x1578) != iVar12) && (ppppuVar15 != param_1)) {
    if (param_1[3] < (undefined8 ***)0x10) {
      ppppuVar29 = param_1;
    }
    else {
      ppppuVar29 = (undefined8 ****)*param_1;
    }
    FUN_180029840(ppppuVar15,ppppuVar29,param_1[2]);
  }
  local_178[0] = '\0';
  local_178[1] = '\0';
  local_178[2] = '\0';
  local_178[3] = '\0';
  local_178[4] = '\0';
  local_178[5] = '\0';
  local_178[6] = '\0';
  local_178[7] = '\0';
  local_178[8] = '\0';
  local_178[9] = '\0';
  local_178[10] = '\0';
  local_178[0xb] = '\0';
  local_178[0xc] = '\0';
  local_178[0xd] = '\0';
  local_178[0xe] = '\0';
  local_178[0xf] = '\0';
  local_178[0x10] = '\0';
  local_178[0x11] = '\0';
  local_178[0x12] = '\0';
  local_178[0x13] = '\0';
  local_178[0x14] = '\0';
  local_178[0x15] = '\0';
  local_178[0x16] = '\0';
  local_178[0x17] = '\0';
  local_178[0x18] = '\0';
  local_178[0x19] = '\0';
  local_178[0x1a] = '\0';
  local_178[0x1b] = '\0';
  local_178[0x1c] = '\0';
  local_178[0x1d] = '\0';
  local_178[0x1e] = '\0';
  local_178[0x1f] = '\0';
  local_178[0x20] = '\0';
  local_178[0x21] = '\0';
  local_178[0x22] = '\0';
  local_178[0x23] = '\0';
  local_178[0x24] = '\0';
  local_178[0x25] = '\0';
  local_178[0x26] = '\0';
  local_178[0x27] = '\0';
  local_178[0x28] = '\0';
  local_178[0x29] = '\0';
  local_178[0x2a] = '\0';
  local_178[0x2b] = '\0';
  local_178[0x2c] = '\0';
  local_178[0x2d] = '\0';
  local_178[0x2e] = '\0';
  local_178[0x2f] = '\0';
  local_178[0x30] = '\0';
  local_178[0x31] = '\0';
  local_178[0x32] = '\0';
  local_178[0x33] = '\0';
  local_178[0x34] = '\0';
  local_178[0x35] = '\0';
  local_178[0x36] = '\0';
  local_178[0x37] = '\0';
  local_178[0x38] = '\0';
  local_178[0x39] = '\0';
  local_178[0x3a] = '\0';
  local_178[0x3b] = '\0';
  local_178[0x3c] = '\0';
  local_178[0x3d] = '\0';
  local_178[0x3e] = '\0';
  local_178[0x3f] = '\0';
  local_178[0x40] = '\0';
  local_178[0x41] = '\0';
  local_178[0x42] = '\0';
  local_178[0x43] = '\0';
  local_178[0x44] = '\0';
  local_178[0x45] = '\0';
  local_178[0x46] = '\0';
  local_178[0x47] = '\0';
  local_178[0x48] = '\0';
  local_178[0x49] = '\0';
  local_178[0x4a] = '\0';
  local_178[0x4b] = '\0';
  local_178[0x4c] = '\0';
  local_178[0x4d] = '\0';
  local_178[0x4e] = '\0';
  local_178[0x4f] = '\0';
  local_178[0x50] = '\0';
  local_178[0x51] = '\0';
  local_178[0x52] = '\0';
  local_178[0x53] = '\0';
  local_178[0x54] = '\0';
  local_178[0x55] = '\0';
  local_178[0x56] = '\0';
  local_178[0x57] = '\0';
  local_178[0x58] = '\0';
  local_178[0x59] = '\0';
  local_178[0x5a] = '\0';
  local_178[0x5b] = '\0';
  local_178[0x5c] = '\0';
  local_178[0x5d] = '\0';
  local_178[0x5e] = '\0';
  local_178[0x5f] = '\0';
  local_178[0x60] = '\0';
  local_178[0x61] = '\0';
  local_178[0x62] = '\0';
  local_178[99] = '\0';
  local_178[100] = '\0';
  local_178[0x65] = '\0';
  local_178[0x66] = '\0';
  local_178[0x67] = '\0';
  local_178[0x68] = '\0';
  local_178[0x69] = '\0';
  local_178[0x6a] = '\0';
  local_178[0x6b] = '\0';
  local_178[0x6c] = '\0';
  local_178[0x6d] = '\0';
  local_178[0x6e] = '\0';
  local_178[0x6f] = '\0';
  local_178[0x70] = '\0';
  local_178[0x71] = '\0';
  local_178[0x72] = '\0';
  local_178[0x73] = '\0';
  local_178[0x74] = '\0';
  local_178[0x75] = '\0';
  local_178[0x76] = '\0';
  local_178[0x77] = '\0';
  local_178[0x78] = '\0';
  local_178[0x79] = '\0';
  local_178[0x7a] = '\0';
  local_178[0x7b] = '\0';
  local_178[0x7c] = '\0';
  local_178[0x7d] = '\0';
  local_178[0x7e] = '\0';
  local_178[0x7f] = '\0';
  if (*(ulonglong *)(lVar28 + 0x48) < 0x10) {
    ppppuVar29 = ppppuVar15;
  }
  else {
    ppppuVar29 = (undefined8 ****)*ppppuVar15;
  }
  snprintf(local_178,0x80,&DAT_1806d3198,ppppuVar29);
  uVar13 = DAT_1808ac930;
  lVar28 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar28 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_1e8 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = local_178;
  local_218 = (undefined8 *)((ulonglong)local_218 & 0xffffffff00000000);
  FUN_18040a2f0(&local_1c8,lVar28,DAT_1808ac930,DAT_1808acd08);
  fVar34 = (float)FUN_18053f0d0((float)local_1c8 + DAT_1808ac2f0);
  fVar37 = local_1c0;
  uVar23 = DAT_180ca0a50;
  fVar33 = DAT_1808aca78;
  fVar38 = ((*(float *)(lVar4 + 0x280) - fVar35) - DAT_1808aca78) - DAT_1808ac8b0;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar28 = *(longlong *)(uVar23 + 0x14f8);
  *(float *)(lVar28 + 0x118) = fVar35;
  *(undefined4 *)(lVar28 + 0x11c) = local_1d0._4_4_;
  *(undefined1 *)(lVar28 + 0x159) = 1;
  uVar11 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,local_1c0);
  FUN_1803d8730(0,uVar11);
  local_1c8 = 0;
  FUN_1803d89a0(0xb,&local_1c8);
  FUN_1803d8870(0xd,0);
  FUN_1803d8730(7,0);
  FUN_1803d8730(8,0);
  FUN_1803d8730(9,0);
  lVar28 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar28 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_1b0 = *(undefined8 *****)(DAT_180ca0a50 + 0x11f0);
  local_1a8 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
  local_1a4 = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_1b0);
  FUN_1803e8680(lVar28,uVar13,0);
  uVar23 = DAT_180ca0a50;
  fVar34 = fVar34 + DAT_1808ac540;
  *(uint *)(DAT_180ca0a50 + 0x1eb0) = *(uint *)(DAT_180ca0a50 + 0x1eb0) | 1;
  if (fVar34 <= fVar38) {
    fVar38 = fVar34;
  }
  *(float *)(uVar23 + 0x1ec8) = fVar38;
  FUN_1803d8730(1,DAT_180960ec4);
  FUN_1803d8730(0x34,DAT_180960f54);
  FUN_1803d8730(0x22,DAT_180960ef8);
  uVar13 = *(undefined4 *)(DAT_180ca0a50 + 0xd98);
  local_1d0 = CONCAT44(3,uVar13);
  *(undefined4 *)(DAT_180ca0a50 + 0xd98) = 0x3f800000;
  local_1c8 = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = (char *)CONCAT44(local_210._4_4_,0x8040);
  local_218 = &local_1c8;
  FUN_18041c570("##name",0,local_178,0x80);
  *(undefined4 *)(DAT_180ca0a50 + 0xd98) = uVar13;
  FUN_1803d87f0(3);
  if ((*(int *)(DAT_180ca0a50 + 0x1578) != 0) &&
     (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) {
    sVar18 = strlen(local_178);
    FUN_180029840(ppppuVar15,local_178,sVar18);
  }
  if ((*(uint *)(DAT_180ca0a50 + 0x1ef0) & 0x20) == 0) {
    if (((*(int *)(DAT_180ca0a50 + 0x15ac) == *(int *)(DAT_180ca0a50 + 0x1ee8)) &&
        (*(int *)(DAT_180ca0a50 + 0x1ee8) != 0)) &&
       (*(int *)(DAT_180ca0a50 + 4) <= *(int *)(DAT_180ca0a50 + 0x15b0))) goto LAB_18032c717;
LAB_18032c815:
    puVar25 = auStack_238;
    lVar28 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
    uVar23 = DAT_180ca0a50;
    if (0 < *(int *)(DAT_180ca0a50 + 0x1fe0)) goto LAB_18032c835;
    FUN_1803ebc00("Calling PopFont() too many times!");
    puVar25 = auStack_238;
  }
  else {
    if ((*(uint *)(DAT_180ca0a50 + 0x1ef0) >> 6 & 1) == 0) goto LAB_18032c815;
LAB_18032c717:
    local_198 = (undefined8 *****)0x0;
    puStack_190 = (undefined1 *)0x0;
    local_188 = (undefined8 ***)0x0;
    local_180 = 0;
    sVar18 = strlen(local_178);
    FUN_1800133a0(&local_198,local_178,sVar18);
    uVar23 = local_180;
    if (param_1[3] < (undefined8 ***)0x10) {
      ppppuVar15 = param_1;
    }
    else {
      ppppuVar15 = (undefined8 ****)*param_1;
    }
    pppppuVar20 = &local_198;
    if (0xf < local_180) {
      pppppuVar20 = local_198;
    }
    if ((local_188 != param_1[2]) ||
       ((local_188 != (undefined8 ***)0x0 &&
        (iVar12 = memcmp(pppppuVar20,ppppuVar15,(size_t)local_188), iVar12 != 0)))) {
      cVar10 = FUN_1800fe660(param_1,&local_198);
      if (cVar10 != '\0') {
        if (bVar31 != false) {
          pppppuVar20 = &local_198;
          if (0xf < local_180) {
            pppppuVar20 = local_198;
          }
          snprintf(s_default_1809f51e0,0x40,&DAT_1806d3198,pppppuVar20);
        }
        DAT_180962437 = 1;
      }
      uVar23 = local_180;
    }
    if (uVar23 < 0x10) {
LAB_18032c7fa:
      local_188 = (undefined8 ***)0x0;
      local_180 = 0xf;
      local_198 = (undefined8 *****)((ulonglong)local_198 & 0xffffffffffffff00);
      goto LAB_18032c815;
    }
    uVar24 = uVar23 + 1;
    pppppuVar20 = local_198;
    if (uVar24 < 0x1000) {
LAB_18032c7f5:
      thunk_FUN_1803d64e0(pppppuVar20,uVar24);
      goto LAB_18032c7fa;
    }
    pppppuVar20 = (undefined8 *****)local_198[-1];
    if ((undefined1 *)((longlong)local_198 + (-8 - (longlong)pppppuVar20)) < (undefined1 *)0x20) {
      uVar24 = uVar23 + 0x28;
      goto LAB_18032c7f5;
    }
    pcVar6 = (code *)swi(0x29);
    lVar28 = (*pcVar6)(5);
    puVar25 = auStack_230;
LAB_18032c835:
    lVar28 = lVar28 + -1;
    lVar5 = *(longlong *)(uVar23 + 0x1fe8);
    uVar13 = *(undefined4 *)(lVar5 + 0xc + lVar28 * 0x10);
    uVar11 = *(undefined4 *)(lVar5 + 8 + lVar28 * 0x10);
    uVar36 = *(undefined8 *)(lVar5 + lVar28 * 0x10);
    *(undefined8 *)(puVar25 + -8) = 0x18032c857;
    FUN_1803e8680(uVar36,uVar11,uVar13);
    *(int *)(uVar23 + 0x1fe0) = *(int *)(uVar23 + 0x1fe0) + -1;
  }
  *(undefined8 *)(puVar25 + -8) = 0x18032c867;
  FUN_1803d87f0(3);
  *(undefined8 *)(puVar25 + -8) = 0x18032c871;
  FUN_1803d8a40(2);
  *(undefined8 *)(puVar25 + -8) = 0x18032c87b;
  FUN_1803d87f0(1);
  fVar32 = ((fVar32 + *(float *)(lVar4 + 0x30)) - fVar33) - DAT_1808ac7ac;
  fVar35 = *(float *)(lVar4 + 0x34);
  *(undefined8 *)(puVar25 + -8) = 0x18032c8a6;
  fVar35 = (float)FUN_180519080((fVar35 - DAT_1808ac954) * fVar39);
  *(undefined8 *)(puVar25 + -8) = 0x18032c8c3;
  uVar13 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,fVar37);
  *(undefined8 *)(puVar25 + -8) = 0x18032c8d1;
  FUN_18032b690(param_1,bVar31);
  uVar23 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(uVar23 + 0x14f8);
  *(float *)(lVar4 + 0x118) = fVar32;
  *(float *)(lVar4 + 0x11c) = fVar35 + fVar2;
  *(undefined1 *)(lVar4 + 0x159) = 1;
  puVar25[0x28] = 0;
  *(undefined4 *)(puVar25 + 0x20) = uVar13;
  *(undefined8 *)(puVar25 + -8) = 0x18032c92e;
  cVar10 = FUN_1803287f0(&DAT_180769dbc,"presets_fa_ellipsis",
                         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M8 256C8 236 18 218 36 208C53 198 74 198 92 208C109 218 120 236 120 256C120 277 109 295 92 305C74 315 53 315 36 305C18 295 8 277 8 256ZM168 256C168 236 178 218 196 208C213 198 234 198 252 208C269 218 280 236 280 256C280 277 269 295 252 305C234 315 213 315 196 305C178 295 168 277 168 256ZM384 200C404 200 422 211 432 228C442 246 442 267 432 284C422 302 404 312 384 312C363 312 345 302 335 284C325 267 325 246 335 228C345 211 363 200 384 200Z\"/></svg>"
                         ,cVar9);
  if (cVar10 != '\0') {
    *(undefined8 *)(puVar25 + -8) = 0x18032c93e;
    FUN_1802b4d80("##presets_context");
  }
  uVar23 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(uVar23 + 0x14f8);
  *(float *)(lVar4 + 0x118) = fVar32 + DAT_1808ac97c;
  *(float *)(lVar4 + 0x11c) = fVar35 + fVar2;
  *(undefined1 *)(lVar4 + 0x159) = 1;
  puVar25[0x28] = 0;
  *(undefined4 *)(puVar25 + 0x20) = uVar13;
  if (bVar31 == false) {
    *(undefined8 *)(puVar25 + -8) = 0x18032ca91;
    cVar10 = FUN_1803287f0(&DAT_1806e1934,"presets_fa_cloud_down",
                           "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M144 480C64 480 0 416 0 336C0 274 40 220 96 201C96 198 95 195 95 192C95 104 167 32 255 32C315 32 367 65 394 113C409 102 428 96 448 96C501 96 544 139 544 192C544 205 541 216 537 227C596 239 640 291 640 352C640 423 582 480 512 480L144 480ZM223 313L303 393C312 403 327 403 336 393L416 313C426 304 426 289 416 280C407 270 392 270 383 280L344 319L344 184C344 171 333 160 320 160C306 160 296 171 296 184L296 319L257 280C247 270 232 270 223 280C213 289 213 304 223 313L223 313ZM223 313Z\"/></svg>"
                           ,0);
    if (cVar10 != '\0') {
      *(undefined8 *)(puVar25 + -8) = 0x18032ca9d;
      cVar10 = FUN_1800fcff0(param_1);
      if (cVar10 != '\0') {
        if (param_1[3] < (undefined8 ***)0x10) {
          ppppuVar15 = param_1;
        }
        else {
          ppppuVar15 = (undefined8 ****)*param_1;
        }
        *(undefined8 *)(puVar25 + -8) = 0x18032cac8;
        snprintf(s_default_1809f51e0,0x40,&DAT_1806d3198,ppppuVar15);
      }
    }
    local_1b0 = (undefined8 ****)0x0;
    *(undefined **)(puVar25 + 0x70) = &DAT_180769e74;
    *(undefined8 *)(puVar25 + -8) = 0x18032cae6;
    cVar10 = FUN_1803dd930(0x400);
    if ((cVar10 == '\0') || ((*(uint *)(DAT_180ca0a50 + 0x1ef0) >> 8 & 1) == 0)) {
      uVar36 = 0;
    }
    else {
      uVar36 = 1;
    }
    local_198 = (undefined8 *****)&local_1b0;
    puStack_190 = puVar25 + 0x70;
    *(undefined8 *)(puVar25 + 0x68) = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
    *(undefined8 *)(puVar25 + 0x78) = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
    puVar30 = puVar25 + 0x68;
    puVar16 = (undefined8 *)(puVar25 + 0x78);
    puVar21 = &DAT_1806e1934;
  }
  else {
    *(undefined8 *)(puVar25 + -8) = 0x18032c9a1;
    cVar10 = FUN_1803287f0(&DAT_180769e6c,0,0,0);
    if (cVar10 != '\0') {
      *(undefined8 *)(puVar25 + -8) = 0x18032c9ad;
      cVar10 = FUN_1800fcca0(param_1);
      if (cVar10 != '\0') {
        DAT_180cd04a8 = 1;
        DAT_1811074f0 = 0;
        DAT_180962437 = 1;
      }
    }
    *(undefined8 *)(puVar25 + 0x70) = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
    *(undefined8 *)(puVar25 + 0x68) = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
    *(undefined8 *)(puVar25 + -8) = 0x18032c9fc;
    FUN_18032a2d0(puVar25 + 0x68,puVar25 + 0x70);
    *(undefined8 *)(puVar25 + 0x70) = 0;
    *(undefined **)(puVar25 + 0x68) = &DAT_180769e64;
    *(undefined8 *)(puVar25 + -8) = 0x18032ca1b;
    cVar10 = FUN_1803dd930(0x400);
    if ((cVar10 == '\0') || ((*(uint *)(DAT_180ca0a50 + 0x1ef0) >> 8 & 1) == 0)) {
      uVar36 = 0;
    }
    else {
      uVar36 = 1;
    }
    local_198 = (undefined8 *****)(puVar25 + 0x70);
    puStack_190 = puVar25 + 0x68;
    *(undefined8 *)(puVar25 + 0x78) = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
    local_1b0 = *(undefined8 *****)(DAT_180ca0a50 + 0x1ef4);
    puVar30 = puVar25 + 0x78;
    puVar16 = &local_1b0;
    puVar21 = &DAT_180769e6c;
  }
  *(undefined8 *******)(puVar25 + 0x20) = &local_198;
  *(undefined8 *)(puVar25 + -8) = 0x18032cb50;
  FUN_180347170(puVar21,uVar36,puVar16,puVar30);
  if (bVar7) {
    if (puVar25[0x60] == '\0') {
LAB_18032cb62:
      if (bVar31 == false) {
        fVar40 = fVar39;
      }
    }
    else {
LAB_18032cb5c:
      fVar39 = fVar40;
    }
  }
  else {
    if (puVar25[0x60] != '\0') goto LAB_18032cb5c;
    if (cVar9 != '\0') goto LAB_18032cb62;
    if (bVar31 == false) {
      fVar39 = 0.0;
      fVar40 = 0.0;
    }
  }
  *(undefined8 *)(puVar25 + -8) = 0x18032cb99;
  plVar17 = (longlong *)FUN_18034f100(&DAT_180ca1940,&local_198,local_1b8);
  lVar4 = *plVar17;
  *(float *)(lVar4 + 0x14) = fVar39;
  *(float *)(lVar4 + 0x18) = fVar40;
LAB_18032cbb3:
  uVar23 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(*(longlong *)(uVar23 + 0x14f8) + 0x2c8);
  uVar13 = *(undefined4 *)(lVar4 + 0x20);
  *(undefined8 *)(puVar25 + -8) = 0x18032cbe9;
  FUN_1802b3c30(lVar4,0,uVar13,DAT_1809f376c);
  *(undefined8 *)(puVar25 + -8) = 0x18032cbee;
  FUN_1803e1bc0();
  *(undefined8 *)(puVar25 + -8) = 0x18032cbf8;
  FUN_1803d8a40(3);
  *(undefined8 *)(puVar25 + 0x70) = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
  *(undefined8 *)(puVar25 + 0x68) = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
  *(undefined8 **)(puVar25 + 0x20) = &local_1b0;
  *(undefined8 *)(puVar25 + -8) = 0x18032cc3c;
  local_1b0 = param_1;
  FUN_180347950(DAT_180ca0a50,puVar25[0x61],puVar25 + 0x68,puVar25 + 0x70);
  *(undefined8 *)(puVar25 + -8) = 0x18032cc4d;
  return puVar25[0x62];
}



/* ===== 18032cca0 FUN_18032cca0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18032cca0(void)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 **_Size;
  undefined8 **ppuVar5;
  undefined8 ***pppuVar6;
  char cVar7;
  int iVar8;
  undefined8 **ppuVar9;
  undefined8 ***pppuVar10;
  longlong lVar11;
  undefined8 ***pppuVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 ***local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  
  pppuVar6 = DAT_181107828;
  local_a0 = DAT_180919500 ^ (ulonglong)auStack_e8;
  fVar15 = 0.0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xf;
  local_c0 = (undefined8 ***)0x0;
  for (pppuVar12 = DAT_181107820; pppuVar12 != pppuVar6; pppuVar12 = pppuVar12 + 8) {
    fVar13 = (float)FUN_18032a1b0(pppuVar12);
    lVar11 = DAT_180ca0a50;
    if (0.0 < fVar13) {
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      lVar11 = *(longlong *)(lVar11 + 0x14f8);
      lVar4 = *(longlong *)(lVar11 + 0x2c8);
      uVar3 = *(undefined4 *)(lVar4 + 0x20);
      uVar1 = *(undefined4 *)(lVar11 + 0x118);
      fVar2 = *(float *)(lVar11 + 0x11c);
      pppuVar10 = pppuVar12;
      if ((undefined8 **)0xf < pppuVar12[3]) {
        pppuVar10 = (undefined8 ***)*pppuVar12;
      }
      FUN_1803e89e0(pppuVar10);
      fVar14 = DAT_1809f376c;
      DAT_1809f376c = DAT_1809f376c * fVar13;
      cVar7 = FUN_18032bcc0(pppuVar12);
      if (cVar7 != '\0') {
        ppuVar9 = (undefined8 **)strlen(s_default_1809f51e0);
        _Size = pppuVar12[2];
        ppuVar5 = pppuVar12[3];
        pppuVar10 = pppuVar12;
        if ((undefined8 **)0xf < ppuVar5) {
          pppuVar10 = (undefined8 ***)*pppuVar12;
        }
        if (((_Size != ppuVar9) ||
            ((_Size != (undefined8 **)0x0 &&
             (iVar8 = memcmp(pppuVar10,s_default_1809f51e0,(size_t)_Size), iVar8 != 0)))) &&
           (&local_c0 != (undefined8 ****)pppuVar12)) {
          if (ppuVar5 < (undefined8 **)0x10) {
            pppuVar10 = pppuVar12;
          }
          else {
            pppuVar10 = (undefined8 ***)*pppuVar12;
          }
          FUN_180029840(&local_c0,pppuVar10,_Size);
        }
      }
      lVar11 = DAT_180ca0a50;
      iVar8 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      DAT_1809f376c = fVar14;
      if (iVar8 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
        lVar11 = DAT_180ca0a50;
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar8 + -1;
      }
      fVar14 = (*(float *)(*(longlong *)(lVar11 + 0x14f8) + 0x11c) - fVar2) * fVar13;
      *(undefined1 *)(*(longlong *)(lVar11 + 0x14f8) + 0xce) = 1;
      lVar11 = *(longlong *)(lVar11 + 0x14f8);
      *(undefined4 *)(lVar11 + 0x118) = uVar1;
      *(float *)(lVar11 + 0x11c) = fVar2 + fVar14;
      *(undefined1 *)(lVar11 + 0x159) = 1;
      fVar15 = fVar15 + fVar14;
      FUN_1802b3c30(lVar4,uVar3,*(undefined4 *)(lVar4 + 0x20),fVar13);
    }
  }
  local_c8 = 0;
  FUN_1804174f0(&local_c8);
  DAT_1811073c8 = 0.0;
  if (0.0 <= fVar15 - DAT_1808ac750) {
    DAT_1811073c8 = fVar15 - DAT_1808ac750;
  }
  if ((local_b0 != 0) && (cVar7 = FUN_1800fcff0(&local_c0), cVar7 != '\0')) {
    pppuVar12 = &local_c0;
    if (0xf < local_a8) {
      pppuVar12 = local_c0;
    }
    snprintf(s_default_1809f51e0,0x40,&DAT_1806d3198,pppuVar12);
  }
  FUN_18000f890(&local_c0);
  return;
}



/* ===== 18032cf60 FUN_18032cf60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18032cf60(void)

{
  uint uVar1;
  float fVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  char *pcVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 extraout_XMM0_Qa;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_148 [32];
  char **local_128;
  ulonglong local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0 [4];
  ulonglong local_b0;
  
  local_b0 = DAT_180919500 ^ (ulonglong)auStack_148;
  DAT_180cd04ad = 1;
  local_f8 = (char *)0x40e0000040e00000;
  cVar3 = FUN_1802b5260("##presets_sort",&local_f8);
  uVar6 = DAT_1808ac930;
  if (cVar3 != '\0') {
    lVar11 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar11 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    local_e8 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    local_e0 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
    local_dc = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
    FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_e8);
    FUN_1803e8680(lVar11,uVar6,0);
    local_d0[0] = "Newest First";
    local_d0[1] = "Recently Modified";
    local_d0[2] = "Alphabetical";
    uVar15 = 0;
    do {
      local_108 = DAT_180960ec8;
      local_110 = DAT_180960ef8;
      local_118 = 0;
      local_120 = 0;
      local_128 = (char **)0x0;
      cVar3 = FUN_180328c30(local_d0[uVar15],uVar15 == DAT_181107194,0,1);
      lVar11 = DAT_180ca0a50;
      if (cVar3 != '\0') {
        DAT_180962437 = 1;
        DAT_181107194 = uVar15;
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < 3);
    lVar7 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
    if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
      FUN_1803ebc00("Calling PopFont() too many times!");
    }
    else {
      lVar9 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
      FUN_1803e8680(*(undefined8 *)(lVar9 + -0x10 + lVar7 * 0x10),
                    *(undefined4 *)(lVar9 + -8 + lVar7 * 0x10),
                    *(undefined4 *)(lVar9 + -4 + lVar7 * 0x10));
      *(int *)(lVar11 + 0x1fe0) = *(int *)(lVar11 + 0x1fe0) + -1;
    }
    FUN_1802b5590();
  }
  lVar9 = DAT_180ca0a50;
  lVar11 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  fVar20 = *(float *)(lVar11 + 0x118);
  fVar19 = *(float *)(lVar11 + 0x11c);
  *(undefined1 *)(lVar11 + 0xce) = 1;
  fVar2 = DAT_1808ac750;
  lVar11 = *(longlong *)(lVar9 + 0x14f8);
  fVar18 = ((*(float *)(lVar11 + 0x280) - fVar20) - DAT_1808ac97c) - DAT_1808ac750;
  lVar7 = DAT_181107a08;
  if (DAT_181107a08 == 0) {
    lVar7 = *(longlong *)(lVar9 + 0x11f0);
  }
  lVar16 = *(longlong *)(lVar9 + 0x11f0);
  local_e0 = *(undefined4 *)(lVar9 + 0x1204);
  local_dc = *(undefined4 *)(lVar9 + 0x1200);
  local_e8 = lVar16;
  FUN_1803f6200(lVar9 + 0x1fe0,&local_e8);
  if (lVar7 != 0) {
    lVar16 = lVar7;
  }
  FUN_1803e8680(lVar16,uVar6,0);
  local_f8 = (char *)0x4040000040c00000;
  FUN_1803d89a0(0xb,&local_f8);
  puVar8 = (undefined8 *)FUN_1802b3fe0(local_d0,"search");
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  local_120 = local_120 & 0xffffffff00000000;
  local_128 = (char **)CONCAT44(local_128._4_4_,fVar18);
  cVar3 = FUN_1802b70b0(extraout_XMM0_Qa,puVar8);
  FUN_18000f890(local_d0);
  if (cVar3 != '\0') {
    DAT_180962437 = 1;
  }
  FUN_1803d8a40(1);
  lVar7 = DAT_180ca0a50;
  lVar9 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
  if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    lVar16 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
    FUN_1803e8680(*(undefined8 *)(lVar16 + -0x10 + lVar9 * 0x10),
                  *(undefined4 *)(lVar16 + -8 + lVar9 * 0x10),
                  *(undefined4 *)(lVar16 + -4 + lVar9 * 0x10));
    *(int *)(lVar7 + 0x1fe0) = *(int *)(lVar7 + 0x1fe0) + -1;
  }
  lVar9 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar7 = *(longlong *)(lVar9 + 0x14f8);
  *(float *)(lVar7 + 0x118) = fVar20 + fVar18 + fVar2;
  *(float *)(lVar7 + 0x11c) = fVar19;
  *(undefined1 *)(lVar7 + 0x159) = 1;
  iVar5 = FUN_1803e8900(*(undefined8 *)(lVar9 + 0x14f8),"##presets_sort");
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar7 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar7 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar5) ||
       (*(char *)(lVar7 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != '\0'))
    goto LAB_18032d314;
    uVar14 = 1;
  }
  else {
LAB_18032d314:
    uVar14 = 0;
  }
  local_120 = local_120 & 0xffffffffffffff00;
  local_128 = (char **)CONCAT44(local_128._4_4_,DAT_180960f38);
  cVar3 = FUN_1803287f0(&DAT_180769ef4,"presets_fa_sort",
                        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M151 469C145 476 137 480 128 480C119 480 110 476 104 469L16 374C4 361 5 341 18 329C31 317 51 318 63 331L96 366L96 64C96 47 110 32 128 32C145 32 160 47 160 64L160 366L192 331C204 318 224 317 237 329C250 341 251 361 239 374L151 469L151 469ZM151 469ZM320 32L352 32C369 32 384 47 384 64C384 82 369 96 352 96L320 96C302 96 288 82 288 64C288 47 302 32 320 32ZM320 160L416 160C433 160 448 175 448 192C448 210 433 224 416 224L320 224C302 224 288 210 288 192C288 175 302 160 320 160ZM320 288L480 288C497 288 512 303 512 320C512 338 497 352 480 352L320 352C302 352 288 338 288 320C288 303 302 288 320 288ZM320 416L544 416C561 416 576 431 576 448C576 465 561 480 544 480L320 480C302 480 288 465 288 448C288 431 302 416 320 416Z\"/></svg>"
                        ,uVar14);
  if (cVar3 != '\0') {
    FUN_1802b4d80("##presets_sort");
  }
  local_d0[0] = "Newest First";
  local_d0[1] = "Recently Modified";
  local_d0[2] = "Alphabetical";
  local_f0 = (char *)((ulonglong)local_f0._4_4_ << 0x20);
  piVar12 = (int *)&local_f0;
  if (-1 < (int)DAT_181107194) {
    piVar12 = (int *)&DAT_181107194;
  }
  piVar10 = (int *)&local_f8;
  if ((int)DAT_181107194 < 3) {
    piVar10 = piVar12;
  }
  local_f8 = local_d0[*piVar10];
  local_f0 = "Sort By";
  cVar3 = FUN_1803dd930(0x400);
  if ((cVar3 == '\0') || ((*(uint *)(DAT_180ca0a50 + 0x1ef0) & 0x100) == 0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  local_d0[0] = (char *)&local_f8;
  local_d0[1] = (char *)&local_f0;
  local_d8 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
  local_e8 = *(longlong *)(DAT_180ca0a50 + 0x1ef4);
  local_128 = local_d0;
  FUN_180347170(&DAT_180769ef4,uVar14,&local_e8,&local_d8);
  fVar18 = DAT_1808ac34c;
  fVar21 = fVar19 + DAT_1808ac97c + fVar2;
  fVar19 = fVar21 + DAT_1808ac34c;
  local_f8 = (char *)CONCAT44(fVar19,*(undefined4 *)(lVar11 + 0x280));
  local_f0 = (char *)CONCAT44(fVar21,fVar20);
  local_120 = local_120 & 0xffffffff00000000;
  local_128 = (char **)((ulonglong)local_128 & 0xffffffff00000000);
  FUN_1803fe590(*(undefined8 *)(lVar11 + 0x2c8),&local_f0,&local_f8,DAT_180960f48);
  lVar11 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar11 = *(longlong *)(lVar11 + 0x14f8);
  *(float *)(lVar11 + 0x118) = fVar20;
  *(float *)(lVar11 + 0x11c) = fVar19 + fVar2;
  *(undefined1 *)(lVar11 + 0x159) = 1;
  fVar20 = DAT_1808acbb4;
  if (DAT_1811073c8 <= DAT_1808acbb4) {
    fVar20 = DAT_1811073c8;
  }
  uVar17 = 0xffffffff;
  pcVar13 = "presets_list_scroll";
  bVar4 = 0x70;
  do {
    pcVar13 = pcVar13 + 1;
    if (((bVar4 == 0x23) && (*pcVar13 == 0x23)) && (pcVar13[1] == 0x23)) {
      uVar17 = 0xffffffff;
      pcVar13 = pcVar13 + 2;
    }
    else {
      uVar17 = (ulonglong)
               ((uint)(uVar17 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar17 & 0xff ^ (ulonglong)bVar4) * 4));
    }
    bVar4 = *pcVar13;
  } while (bVar4 != 0);
  uVar15 = ~(uint)uVar17;
  uVar17 = (((((ulonglong)(uVar15 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar15 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar15 >> 0x10 & 0xff))
            * 0x100000001b3 ^ (ulonglong)(uVar15 >> 0x18)) * 0x100000001b3 & DAT_1811077a0;
  lVar11 = *(longlong *)(DAT_181107788 + 8 + uVar17 * 0x10);
  if (lVar11 != DAT_181107778) {
    uVar1 = *(uint *)(lVar11 + 0x10);
    while (uVar15 != uVar1) {
      if (lVar11 == *(longlong *)(DAT_181107788 + uVar17 * 0x10)) goto LAB_18032d5a3;
      lVar11 = *(longlong *)(lVar11 + 8);
      uVar1 = *(uint *)(lVar11 + 0x10);
    }
    if (lVar11 != 0) goto LAB_18032d5a6;
  }
LAB_18032d5a3:
  lVar11 = DAT_181107778;
LAB_18032d5a6:
  if (lVar11 == DAT_181107778) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(lVar11 + 0x18);
  }
  FUN_1802b6190(uVar15,uVar14);
  local_f8 = (char *)0x0;
  FUN_1803d89a0(2,&local_f8);
  lVar11 = DAT_180ca0a50;
  if (fVar18 <= fVar20) {
    fVar18 = fVar20;
  }
  local_f8 = (char *)CONCAT44(fVar18,0xbf800000);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar6 = FUN_1803e8900(*(undefined8 *)(lVar11 + 0x14f8),"##presets_list");
  local_128 = (char **)CONCAT44(local_128._4_4_,0x18);
  cVar3 = FUN_1803e1800("##presets_list",uVar6,&local_f8,0);
  if (cVar3 != '\0') {
    FUN_1802b6490(uVar15,0,0,0);
    local_f8 = (char *)0x40a0000041000000;
    FUN_1803d89a0(0xe,&local_f8);
    FUN_18032cca0();
    FUN_1803d8a40(1);
    FUN_1802b6cd0(uVar15);
  }
  lVar11 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x14f8) + 0x2c8);
  FUN_1802b3c30(lVar11,0,*(undefined4 *)(lVar11 + 0x20),DAT_1809f376c);
  FUN_1803e1bc0();
  FUN_1803d8a40(1);
  return;
}



/* ===== 18032d700 FUN_18032d700 ===== */

void FUN_18032d700(void)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  char cVar13;
  undefined1 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined8 **local_res8;
  undefined8 *local_res10;
  undefined8 *local_res18 [2];
  ulonglong in_stack_ffffffffffffff08;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  
  lVar15 = DAT_180ca0a50;
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
  *(undefined8 *)(lVar15 + 0x1f84) = 0x43480000;
  *(undefined4 *)(lVar15 + 0x1f8c) = 0x461c3c00;
  *(undefined4 *)(lVar15 + 0x1f90) = 0x43960000;
  *(undefined8 *)(lVar15 + 0x1f98) = 0;
  *(undefined8 *)(lVar15 + 0x1fa0) = 0;
  DAT_180cd04ad = 1;
  local_res8 = (undefined8 **)0x40e0000040e00000;
  cVar13 = FUN_1802b5260("##extensions_default",&local_res8);
  if (cVar13 != '\0') {
    dVar1 = *(double *)(DAT_180ca0a50 + 0x10);
    if ((DAT_1809f5b58 < 0.0) || (DAT_1808ac548 <= dVar1 - DAT_1809f5b58)) {
      FUN_180099f60();
      DAT_1809f5b58 = dVar1;
    }
    lVar15 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar15 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    local_b8 = *(undefined8 **)(DAT_180ca0a50 + 0x11f0);
    local_b0 = (undefined8 *)
               CONCAT44(*(undefined4 *)(DAT_180ca0a50 + 0x1200),
                        *(undefined4 *)(DAT_180ca0a50 + 0x1204));
    FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_b8);
    uVar9 = DAT_1808ac930;
    FUN_1803e8680(lVar15,DAT_1808ac930,0);
    local_a0 = (undefined8 *)0x0;
    puStack_98 = (undefined8 *)0x0;
    local_90 = (undefined8 *)0x0;
    fVar19 = DAT_1808ac2f0;
    fVar4 = DAT_1808ac8d4;
    fVar5 = DAT_1808acacc;
    uVar20 = DAT_1808acd08;
    lVar15 = DAT_180ca0a50;
    puVar6 = local_a0;
    puVar16 = puStack_98;
    if (DAT_180cd0290 - DAT_180cd0288 != 0) {
      lVar15 = DAT_180cd0290 - DAT_180cd0288 >> 5;
      if (0x124924924924924 < (ulonglong)(lVar15 * 0x6db6db6db6db6db7)) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      puVar16 = (undefined8 *)FUN_18000fb70(lVar15 * 0x20);
      lVar17 = DAT_180cd0290;
      local_90 = puVar16 + lVar15 * 4;
      local_res8 = &local_a0;
      local_a8 = &local_a0;
      local_b8 = puVar16;
      local_a0 = puVar16;
      puStack_98 = puVar16;
      for (lVar15 = DAT_180cd0288; local_b0 = puVar16, lVar15 != lVar17; lVar15 = lVar15 + 0xe0) {
        local_res10 = puVar16;
        FUN_180024b50(puVar16,lVar15);
        puVar16[4] = *(undefined8 *)(lVar15 + 0x20);
        FUN_180024b50(puVar16 + 5,lVar15 + 0x28);
        *(undefined1 *)(puVar16 + 9) = *(undefined1 *)(lVar15 + 0x48);
        FUN_180024b50(puVar16 + 10,lVar15 + 0x50);
        local_res18[0] = puVar16 + 0xe;
        FUN_180024b50(local_res18[0],lVar15 + 0x70);
        *(undefined4 *)(puVar16 + 0x12) = *(undefined4 *)(lVar15 + 0x90);
        *(undefined1 *)((longlong)puVar16 + 0x94) = *(undefined1 *)(lVar15 + 0x94);
        *(undefined1 *)((longlong)puVar16 + 0x95) = *(undefined1 *)(lVar15 + 0x95);
        *(undefined1 *)((longlong)puVar16 + 0x96) = *(undefined1 *)(lVar15 + 0x96);
        FUN_180024b50(puVar16 + 0x13,lVar15 + 0x98);
        FUN_180024b50(puVar16 + 0x17,lVar15 + 0xb8);
        *(undefined4 *)(puVar16 + 0x1b) = *(undefined4 *)(lVar15 + 0xd8);
        puVar16 = puVar16 + 0x1c;
      }
      FUN_18009bf70(puVar16,puVar16);
      fVar19 = DAT_1808ac2f0;
      fVar4 = DAT_1808ac8d4;
      fVar5 = DAT_1808acacc;
      uVar20 = DAT_1808acd08;
      lVar15 = DAT_180ca0a50;
      puVar6 = local_a0;
      puStack_98 = puVar16;
    }
    for (; puVar12 = puStack_98, uVar11 = DAT_1808acd08, fVar10 = DAT_1808acacc,
        fVar8 = DAT_1808ac8d4, fVar7 = DAT_1808ac2f0, DAT_1808ac2f0 = fVar19, DAT_1808ac8d4 = fVar4,
        DAT_1808acacc = fVar5, DAT_1808acd08 = uVar20, DAT_180ca0a50 = lVar15, puVar6 != puStack_98;
        puVar6 = puVar6 + 0x1c) {
      puVar18 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar18 = (undefined8 *)*puVar6;
      }
      puStack_98 = puVar16;
      FUN_1803e89e0(puVar18);
      puVar16 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar16 = (undefined8 *)*puVar6;
      }
      lVar15 = DAT_181107a08;
      if (DAT_181107a08 == 0) {
        lVar15 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      uVar22 = 0;
      uVar21 = 0;
      uVar20 = 0;
      FUN_18040a2f0(&local_res8,lVar15,uVar9,uVar11,in_stack_ffffffffffffff08 & 0xffffffff00000000,
                    puVar16,0,0,0);
      fVar19 = (float)FUN_18053f0d0(local_res8._0_4_ + fVar7);
      puVar16 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar16 = (undefined8 *)*puVar6;
      }
      in_stack_ffffffffffffff08 = 0;
      cVar13 = FUN_180328c30(puVar16,*(undefined1 *)(puVar6 + 9),
                             CONCAT71((uint7)(uint3)((uint)DAT_180960ef8 >> 8),1),0,0,0,
                             CONCAT44(uVar20,fVar19 + fVar10 + fVar8),CONCAT44(uVar21,DAT_180960ef8)
                             ,CONCAT44(uVar22,DAT_180960ec8));
      if (cVar13 != '\0') {
        if (*(char *)(puVar6 + 9) == '\0') {
          FUN_18009ad50(puVar6);
        }
        else {
          FUN_180071af0();
          lVar15 = FUN_180099ed0(puVar6);
          if (lVar15 != 0) {
            *(undefined1 *)(lVar15 + 0x48) = 0;
            puVar16 = (undefined8 *)(lVar15 + 0x50);
            *(undefined8 *)(lVar15 + 0x60) = 0;
            if (0xf < *(ulonglong *)(lVar15 + 0x68)) {
              puVar16 = (undefined8 *)*puVar16;
            }
            *(undefined1 *)puVar16 = 0;
          }
        }
      }
      uVar14 = FUN_1803dd930(0);
      local_res10 = *(undefined8 **)(DAT_180ca0a50 + 0x1efc);
      local_res18[0] = *(undefined8 **)(DAT_180ca0a50 + 0x1ef4);
      FUN_1803485f0(DAT_180ca0a50,uVar14,local_res18);
      iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar2 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
      }
      fVar19 = DAT_1808ac2f0;
      fVar4 = DAT_1808ac8d4;
      fVar5 = DAT_1808acacc;
      uVar20 = DAT_1808acd08;
      lVar15 = DAT_180ca0a50;
      puVar16 = puStack_98;
      puStack_98 = puVar12;
      DAT_1808acd08 = uVar11;
      DAT_1808acacc = fVar10;
      DAT_1808ac8d4 = fVar8;
      DAT_1808ac2f0 = fVar7;
    }
    lVar17 = (longlong)*(int *)(lVar15 + 0x1fe0);
    if (*(int *)(lVar15 + 0x1fe0) < 1) {
      puStack_98 = puVar16;
      FUN_1803ebc00("Calling PopFont() too many times!");
    }
    else {
      lVar3 = *(longlong *)(lVar15 + 0x1fe8);
      puStack_98 = puVar16;
      FUN_1803e8680(*(undefined8 *)(lVar3 + -0x10 + lVar17 * 0x10),
                    *(undefined4 *)(lVar3 + -8 + lVar17 * 0x10),
                    *(undefined4 *)(lVar3 + -4 + lVar17 * 0x10));
      *(int *)(lVar15 + 0x1fe0) = *(int *)(lVar15 + 0x1fe0) + -1;
    }
    FUN_1802b5590();
    FUN_18009b7d0(&local_a0);
  }
  return;
}



