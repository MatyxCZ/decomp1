/* ===== 18017c2f0 FUN_18017c2f0 ===== */

void FUN_18017c2f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_180191950(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18017c370 FUN_18017c370 ===== */

void FUN_18017c370(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_1801919e0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18017c3f0 FUN_18017c3f0 ===== */

void FUN_18017c3f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_180191a70(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18017c470 FUN_18017c470 ===== */

void FUN_18017c470(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  longlong *plVar2;
  size_t _Size;
  undefined8 uVar3;
  int iVar4;
  undefined8 *_Buf1;
  ulonglong uVar5;
  longlong *plVar6;
  
  plVar2 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar6 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar6 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar2[2]) {
    if ((_Size != 0) && (iVar4 = memcmp(_Buf1,(void *)*plVar6,_Size), iVar4 != 0)) {
      return;
    }
    uVar3 = *param_1;
    FUN_1800f2cb0(uVar3,param_2);
    FUN_1800134a0(uVar3,&DAT_1806dfffc,1);
    uVar5 = 0;
    do {
      bVar1 = *(byte *)(uVar5 + param_3);
      if (bVar1 == 0) break;
      if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
        FUN_1800690a0(uVar3,0x5c);
      }
      if (0x1f < bVar1) {
        FUN_1800690a0(uVar3,bVar1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x20);
    FUN_1800134a0(uVar3,&DAT_1806dfffc,1);
  }
  return;
}



/* ===== 18017c560 FUN_18017c560 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017c560(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_180073a70(local_b8,param_2,".esp.enabled");
  FUN_18017c1d0(param_1,uVar5,param_3);
  FUN_18000f890(local_b8);
  uVar5 = FUN_180073a70(local_b8,param_2,".esp.box");
  FUN_18017c1d0(param_1,uVar5,param_3 + 1);
  FUN_18000f890(local_b8);
  uVar5 = FUN_180073a70(local_b8,param_2,".esp.name");
  FUN_18017c1d0(param_1,uVar5,param_3 + 2);
  FUN_18000f890(local_b8);
  uVar5 = FUN_180073a70(local_b8,param_2,".esp.icon");
  FUN_18017c1d0(param_1,uVar5,param_3 + 3);
  FUN_18000f890(local_b8);
  uVar5 = FUN_180073a70(local_b8,param_2,".esp.distance");
  FUN_18017c1d0(param_1,uVar5,param_3 + 4);
  FUN_18000f890(local_b8);
  uVar5 = FUN_180073a70(local_b8,param_2,".esp.timer");
  FUN_18017c1d0(param_1,uVar5,param_3 + 5);
  FUN_18000f890(local_b8);
  uVar5 = FUN_180073a70(local_b8,param_2,".esp.damage");
  FUN_18017c1d0(param_1,uVar5,param_3 + 6);
  FUN_18000f890(local_b8);
  puVar6 = (undefined8 *)FUN_180073a70(local_b8,param_2,".esp.color");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar8 = puVar6;
  }
  else {
    puVar8 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3);
      if (iVar4 != 0) goto LAB_18017c729;
    }
    FUN_1801944c0(*param_1,puVar6,param_3 + 8);
  }
LAB_18017c729:
  FUN_18000f890(local_b8);
  puVar6 = (undefined8 *)FUN_180073a70(local_58,param_2,".esp.max_distance");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar8 = puVar6;
  }
  else {
    puVar8 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3);
      if (iVar4 != 0) goto LAB_18017c791;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x18);
  }
LAB_18017c791:
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_78,param_2,".chams");
  uVar7 = FUN_180073a70(local_98,uVar5,".enabled");
  FUN_18017c1d0(param_1,uVar7,param_3 + 0x1c);
  FUN_18000f890(local_98);
  uVar7 = FUN_180073a70(local_98,uVar5,".visible");
  FUN_1801c30c0(param_1,uVar7,param_3 + 0x20);
  FUN_18000f890(local_98);
  uVar7 = FUN_180073a70(local_98,uVar5,".occluded");
  FUN_1801c30c0(param_1,uVar7,param_3 + 0x38);
  FUN_18000f890(local_98);
  uVar7 = FUN_180073a70(local_98,uVar5,".overlay");
  FUN_1801c30c0(param_1,uVar7,param_3 + 0x50);
  FUN_18000f890(local_98);
  uVar5 = FUN_180073a70(local_98,uVar5,".overlay_occluded");
  FUN_1801c30c0(param_1,uVar5,param_3 + 0x68);
  FUN_18000f890(local_98);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,param_2,".glow.enabled");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x80);
  FUN_18000f890(local_78);
  puVar6 = (undefined8 *)FUN_180073a70(local_78,param_2,".glow.color");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar8 = puVar6;
  }
  else {
    puVar8 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3);
      if (iVar4 != 0) goto LAB_18017c92d;
    }
    FUN_1801944c0(*param_1,puVar6,param_3 + 0x84);
  }
LAB_18017c92d:
  FUN_18000f890(local_78);
  return;
}



/* ===== 18017c960 FUN_18017c960 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017c960(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char *_Str;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  size_t sVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStack_538 [32];
  longlong local_518;
  ulonglong local_510;
  undefined8 local_508;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined1 local_4e0 [32];
  undefined1 local_4c0 [32];
  undefined1 local_4a0 [32];
  undefined1 local_480 [32];
  undefined1 local_460 [32];
  undefined1 local_440 [32];
  undefined1 local_420 [32];
  undefined1 local_400 [32];
  undefined1 local_3e0 [32];
  undefined1 local_3c0 [32];
  undefined1 local_3a0 [32];
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [32];
  undefined1 local_320 [32];
  undefined1 local_300 [32];
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  undefined1 local_2a0 [32];
  undefined1 local_280 [32];
  undefined1 local_260 [32];
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_538;
  local_508 = param_2;
  uVar4 = FUN_180073a70(local_4c0,param_2,".esp.enabled");
  FUN_18017c1d0(param_1,uVar4,param_3);
  FUN_18000f890();
  local_510 = 0;
  plVar1 = param_1 + 1;
  do {
    local_518 = local_510 * 0x118;
    lVar5 = local_510 * 0x98;
    lVar16 = lVar5 + param_3;
    _Str = (&PTR_s_health_bar_1805e7de0)[local_510];
    uVar4 = FUN_180073a70(local_120,param_2,".esp.item.");
    sVar6 = strlen(_Str);
    puVar7 = (undefined4 *)FUN_1800134a0(uVar4,_Str,sVar6);
    local_500 = *puVar7;
    uStack_4fc = puVar7[1];
    uStack_4f8 = puVar7[2];
    uStack_4f4 = puVar7[3];
    local_4f0 = puVar7[4];
    uStack_4ec = puVar7[5];
    uStack_4e8 = puVar7[6];
    uStack_4e4 = puVar7[7];
    *(undefined1 *)puVar7 = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 6) = 0xf;
    FUN_18000f890(local_120);
    uVar4 = FUN_180073a70(local_460,&local_500,".enabled");
    FUN_18017c1d0(param_1,uVar4,lVar5 + 4 + param_3);
    FUN_18000f890(local_460);
    puVar8 = (undefined8 *)FUN_180073a70(local_460,&local_500,".side");
    plVar2 = (longlong *)*plVar1;
    plVar13 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar13 = plVar2;
    }
    sVar6 = puVar8[2];
    if ((ulonglong)puVar8[3] < 0x10) {
      puVar11 = puVar8;
    }
    else {
      puVar11 = (undefined8 *)*puVar8;
    }
    if ((sVar6 == plVar2[2]) &&
       ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
      FUN_1800f2db0(*param_1,puVar8,lVar16 + 8);
    }
    FUN_18000f890(local_460);
    puVar8 = (undefined8 *)FUN_180073a70(local_80,&local_500,".position");
    plVar2 = (longlong *)*plVar1;
    plVar13 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar13 = plVar2;
    }
    sVar6 = puVar8[2];
    if ((ulonglong)puVar8[3] < 0x10) {
      puVar11 = puVar8;
    }
    else {
      puVar11 = (undefined8 *)*puVar8;
    }
    if ((sVar6 == plVar2[2]) &&
       ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
      FUN_1800f2db0(*param_1,puVar8,lVar16 + 0xc);
    }
    FUN_18000f890(local_80);
    puVar8 = (undefined8 *)FUN_180073a70(local_420,&local_500,".size");
    plVar2 = (longlong *)*plVar1;
    plVar13 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar13 = plVar2;
    }
    sVar6 = puVar8[2];
    if ((ulonglong)puVar8[3] < 0x10) {
      puVar11 = puVar8;
    }
    else {
      puVar11 = (undefined8 *)*puVar8;
    }
    if ((sVar6 == plVar2[2]) &&
       ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
      FUN_1800f2db0(*param_1,puVar8);
    }
    FUN_18000f890(local_420);
    iVar14 = 0;
    iVar3 = *(int *)((longlong)&DAT_1805e7f10 + local_518);
    if (0 < iVar3) {
      uVar15 = 0;
      iVar14 = 0;
      do {
        iVar12 = *(int *)((longlong)&DAT_1805e7f24 + uVar15 * 0x28 + local_518) +
                 *(int *)((longlong)&DAT_1805e7f20 + uVar15 * 0x28 + local_518);
        if (iVar14 < iVar12) {
          iVar14 = iVar12;
        }
        uVar17 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar17;
      } while ((int)uVar17 < iVar3);
    }
    if (1 < iVar3) {
      puVar8 = (undefined8 *)FUN_180073a70(local_400,&local_500,".color_mode");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1800f2db0(*param_1,puVar8,lVar16 + 0x14);
      }
      FUN_18000f890(local_400);
    }
    uVar15 = 0;
    if (iVar14 < 1) {
      iVar14 = 1;
    }
    if (0 < iVar14) {
      do {
        uVar4 = FUN_18003a390(local_3a0,uVar15);
        uVar9 = FUN_180073a70(local_3c0,&local_500,".color");
        puVar8 = (undefined8 *)FUN_180066820(local_3e0,uVar9,uVar4);
        plVar2 = (longlong *)*plVar1;
        plVar13 = plVar1;
        if (0xf < (ulonglong)plVar2[3]) {
          plVar13 = plVar2;
        }
        sVar6 = puVar8[2];
        if ((ulonglong)puVar8[3] < 0x10) {
          puVar11 = puVar8;
        }
        else {
          puVar11 = (undefined8 *)*puVar8;
        }
        if ((sVar6 == plVar2[2]) &&
           ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
          FUN_1801944c0(*param_1,puVar8,uVar15 * 0x10 + 0x18 + lVar16);
        }
        FUN_18000f890(local_3e0);
        FUN_18000f890(local_3c0);
        FUN_18000f890(local_3a0);
        uVar17 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar17;
      } while ((int)uVar17 < iVar14);
    }
    lVar5 = local_518;
    if (*(int *)((longlong)&DAT_1805e7eec + local_518) == 0) {
      uVar4 = FUN_180073a70(local_4a0,&local_500,".background");
      FUN_18017c1d0(param_1,uVar4,lVar16 + 0x78);
      FUN_18000f890(local_4a0);
      uVar4 = FUN_180073a70(local_4a0,&local_500,".shadow");
      FUN_18017c1d0(param_1,uVar4,lVar16 + 0x79);
      FUN_18000f890(local_4a0);
      puVar8 = (undefined8 *)FUN_180073a70(local_4a0,&local_500,".shadow_color");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1801944c0(*param_1,puVar8,lVar16 + 0x7c);
      }
      FUN_18000f890(local_4a0);
      puVar8 = (undefined8 *)FUN_180073a70(local_380,&local_500,".format");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1800f2db0(*param_1,puVar8,lVar16 + 0x8c);
      }
      FUN_18000f890(local_380);
    }
    if (*(int *)((longlong)&DAT_1805e7eec + lVar5) - 1U < 2) {
      puVar8 = (undefined8 *)FUN_180073a70(local_360,&local_500,".font");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1800f2db0(*param_1,puVar8,lVar16 + 0x90);
      }
      FUN_18000f890(local_360);
      puVar8 = (undefined8 *)FUN_180073a70(local_340,&local_500,".case");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1800f2db0(*param_1,puVar8,lVar16 + 0x94);
      }
      FUN_18000f890(local_340);
    }
    if (*(int *)((longlong)&DAT_1805e7eec + lVar5) - 3U < 2) {
      uVar4 = FUN_180073a70(local_4e0,&local_500,".inverted");
      FUN_18017c1d0(param_1,uVar4,lVar16 + 0x98);
      FUN_18000f890(local_4e0);
    }
    FUN_18000f890(&local_500);
    uVar4 = local_508;
    local_510 = local_510 + 1;
    param_2 = local_508;
  } while (local_510 < 0x1d);
  puVar8 = (undefined8 *)FUN_180073a70(local_320,local_508,".esp.expected_damage");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1800f2db0(*param_1,puVar8,param_3 + 0x113c);
  }
  FUN_18000f890(local_320);
  puVar8 = (undefined8 *)FUN_180073a70(local_300,uVar4,".esp.pulse_mode");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1800f2db0(*param_1,puVar8,param_3 + 0x1140);
  }
  FUN_18000f890(local_300);
  uVar15 = 0;
  do {
    uVar9 = FUN_18004e4f0(local_2a0,uVar15);
    uVar10 = FUN_180073a70(local_2c0,uVar4,".esp.pulse_color");
    puVar8 = (undefined8 *)FUN_180066820(local_2e0,uVar10,uVar9);
    plVar2 = (longlong *)*plVar1;
    plVar13 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar13 = plVar2;
    }
    sVar6 = puVar8[2];
    if ((ulonglong)puVar8[3] < 0x10) {
      puVar11 = puVar8;
    }
    else {
      puVar11 = (undefined8 *)*puVar8;
    }
    if ((sVar6 == plVar2[2]) &&
       ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
      FUN_1801944c0(*param_1,puVar8,uVar15 * 0x10 + 0x1144 + param_3);
    }
    FUN_18000f890(local_2e0);
    FUN_18000f890(local_2c0);
    FUN_18000f890(local_2a0);
    uVar15 = uVar15 + 1;
  } while (uVar15 < 3);
  uVar9 = FUN_180073a70(local_4e0,uVar4,".esp.name_avatar");
  FUN_18017c1d0(param_1,uVar9,param_3 + 0x1174);
  FUN_18000f890(local_4e0);
  puVar8 = (undefined8 *)FUN_180073a70(local_280,uVar4,".esp.icon_order0");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1800f2db0(*param_1,puVar8,param_3 + 0x1178);
  }
  FUN_18000f890(local_280);
  puVar8 = (undefined8 *)FUN_180073a70(local_260,uVar4,".esp.icon_order1");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1800f2db0(*param_1,puVar8,param_3 + 0x117c);
  }
  FUN_18000f890(local_260);
  puVar8 = (undefined8 *)FUN_180073a70(local_240,uVar4,".esp.icon_selection");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1801940a0(*param_1,puVar8,param_3 + 0x1180);
  }
  FUN_18000f890(local_240);
  puVar8 = (undefined8 *)FUN_180073a70(local_220,uVar4,".esp.icon_dimming");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_180151da0(*param_1,puVar8,param_3 + 0x1182);
  }
  FUN_18000f890(local_220);
  uVar9 = FUN_180073a70(local_4e0,uVar4,".esp.icon_clip_rect");
  FUN_18017c1d0(param_1,uVar9,param_3 + 0x1185);
  FUN_18000f890(local_4e0);
  uVar9 = FUN_180073a70(local_4e0,uVar4,".esp.icon_low_ammo");
  FUN_18017c1d0(param_1,uVar9,param_3 + 0x1186);
  FUN_18000f890(local_4e0);
  uVar9 = FUN_180073a70(local_4e0,uVar4,".esp.icon_all_grenades");
  FUN_18017c1d0(param_1,uVar9,param_3 + 0x1187);
  FUN_18000f890(local_4e0);
  puVar8 = (undefined8 *)FUN_180073a70(local_200,uVar4,".esp.icon_pin_pulled");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1801944c0(*param_1,puVar8,param_3 + 0x1188);
  }
  FUN_18000f890(local_200);
  puVar8 = (undefined8 *)FUN_180073a70(local_1e0,uVar4,".esp.taser_in_hand");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1801944c0(*param_1,puVar8,param_3 + 0x1198);
  }
  FUN_18000f890(local_1e0);
  uVar9 = FUN_180073a70(local_4e0,uVar4,".esp.offscreen_arrows");
  FUN_18017c1d0(param_1,uVar9,param_3 + 0x11a8);
  FUN_18000f890(local_4e0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1c0,uVar4,".esp.arrow_color");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1801944c0(*param_1,puVar8,param_3 + 0x11ac);
  }
  FUN_18000f890(local_1c0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,uVar4,".esp.offscreen_arrow_size");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1800f2db0(*param_1,puVar8,param_3 + 0x11bc);
  }
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_180,uVar4,".esp.offscreen_arrow_radius");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1800f2db0(*param_1,puVar8,param_3 + 0x11c0);
  }
  FUN_18000f890(local_180);
  uVar9 = FUN_180073a70(local_4e0,uVar4,".esp.sounds");
  FUN_18017c1d0(param_1,uVar9,param_3 + 0x11c4);
  FUN_18000f890(local_4e0);
  puVar8 = (undefined8 *)FUN_180073a70(local_160,uVar4,".esp.sound_color");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1801944c0(*param_1,puVar8,param_3 + 0x11c8);
  }
  FUN_18000f890(local_160);
  uVar15 = 0;
  do {
    lVar16 = uVar15 * 0x74;
    uVar9 = FUN_18004e4f0(&local_500,uVar15);
    uVar10 = FUN_180073a70(local_4e0,uVar4,".esp.custom");
    FUN_180066820(local_4c0,uVar10,uVar9);
    FUN_18000f890(local_4e0);
    FUN_18000f890(&local_500);
    puVar8 = (undefined8 *)FUN_180073a70(local_140,local_4c0,&DAT_1806f6a6c);
    plVar2 = (longlong *)*plVar1;
    plVar13 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar13 = plVar2;
    }
    sVar6 = puVar8[2];
    if ((ulonglong)puVar8[3] < 0x10) {
      puVar11 = puVar8;
    }
    else {
      puVar11 = (undefined8 *)*puVar8;
    }
    if ((sVar6 == plVar2[2]) &&
       ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
      FUN_180194430(*param_1,puVar8,param_3 + 0x11d8 + lVar16);
    }
    FUN_18000f890(local_140);
    if (*(char *)(lVar16 + 0x11d8 + param_3) != '\0') {
      uVar9 = FUN_180073a70(local_440,local_4c0,".enabled");
      FUN_18017c1d0(param_1,uVar9,param_3 + 0x1218 + lVar16);
      FUN_18000f890(local_440);
      puVar8 = (undefined8 *)FUN_180073a70(local_440,local_4c0,".side");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1800f2db0(*param_1,puVar8,param_3 + 0x121c + lVar16);
      }
      FUN_18000f890(local_440);
      puVar8 = (undefined8 *)FUN_180073a70(local_100,local_4c0,".order");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1800f2db0(*param_1,puVar8,param_3 + 0x1220 + lVar16);
      }
      FUN_18000f890(local_100);
      puVar8 = (undefined8 *)FUN_180073a70(local_e0,local_4c0,".color");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1801944c0(*param_1,puVar8,param_3 + 0x1224 + lVar16);
      }
      FUN_18000f890(local_e0);
      puVar8 = (undefined8 *)FUN_180073a70(local_c0,local_4c0,".second");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1801944c0(*param_1,puVar8,param_3 + 0x1234 + lVar16);
      }
      FUN_18000f890(local_c0);
      puVar8 = (undefined8 *)FUN_180073a70(local_a0,local_4c0,".size");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1800f2db0(*param_1,puVar8,param_3 + 0x1244 + lVar16);
      }
      FUN_18000f890(local_a0);
      uVar9 = FUN_180073a70(local_480,local_4c0,".small");
      FUN_18017c1d0(param_1,uVar9,param_3 + 0x1248 + lVar16);
      FUN_18000f890(local_480);
      uVar9 = FUN_180073a70(local_480,local_4c0,".text");
      FUN_18017c1d0(param_1,uVar9,param_3 + 0x1249 + lVar16);
      FUN_18000f890(local_480);
    }
    FUN_18000f890(local_4c0);
    uVar15 = uVar15 + 1;
  } while (uVar15 < 0x10);
  uVar9 = FUN_180073a70(local_480,uVar4,".glow.enabled");
  FUN_18017c1d0(param_1,uVar9,param_3 + 0x1918);
  FUN_18000f890(local_480);
  puVar8 = (undefined8 *)FUN_180073a70(local_60,uVar4,".glow.color");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1801944c0(*param_1,puVar8,param_3 + 0x191c);
  }
  FUN_18000f890(local_60);
  return;
}



/* ===== 18017dc60 FUN_18017dc60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017dc60(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  size_t sVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  char *pcVar14;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_enemy_player_1806f6a70._12_4_;
  uVar6 = s_model_enemy_player_1806f6a70._8_4_;
  uVar5 = s_model_enemy_player_1806f6a70._4_4_;
  local_48 = 0x12;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_player_1806f6a70._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  *(undefined2 *)(local_58 + 0x10) = s_model_enemy_player_1806f6a70._16_2_;
  local_58[0x12] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_enemy_behind_walls_1806f6a88._12_4_;
  uVar6 = s_model_enemy_behind_walls_1806f6a88._8_4_;
  uVar5 = s_model_enemy_behind_walls_1806f6a88._4_4_;
  local_48 = 0x18;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_behind_walls_1806f6a88._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  *(undefined8 *)(local_58 + 0x10) = s_model_enemy_behind_walls_1806f6a88._16_8_;
  local_58[0x18] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0x58);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_enemy_on_shot_1806f6ae8._12_4_;
  uVar6 = s_model_enemy_on_shot_1806f6ae8._8_4_;
  uVar5 = s_model_enemy_on_shot_1806f6ae8._4_4_;
  local_48 = 0x13;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_on_shot_1806f6ae8._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  *(uint *)(local_58 + 0xf) =
       CONCAT31(s_model_enemy_on_shot_1806f6ae8._16_3_,s_model_enemy_on_shot_1806f6ae8[0xf]);
  local_58[0x13] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0xb0);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_enemy_on_shot_glow_1806f6b00._12_4_;
  uVar6 = s_model_enemy_on_shot_glow_1806f6b00._8_4_;
  uVar5 = s_model_enemy_on_shot_glow_1806f6b00._4_4_;
  local_48 = 0x18;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_on_shot_glow_1806f6b00._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  *(undefined8 *)(local_58 + 0x10) = s_model_enemy_on_shot_glow_1806f6b00._16_8_;
  local_58[0x18] = '\0';
  FUN_180180350(param_1,&local_58,param_2 + 0x108);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  pcVar9 = (char *)FUN_18000fb70(0x20);
  local_48 = 0x1c;
  local_40 = 0x1f;
  uVar4 = CONCAT44(s_model_enemy_on_shot_duration_1806f6ab0._12_4_,
                   s_model_enemy_on_shot_duration_1806f6ab0._8_4_);
  *(undefined8 *)pcVar9 = s_model_enemy_on_shot_duration_1806f6ab0._0_8_;
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  uVar4 = s_model_enemy_on_shot_duration_1806f6ab0._20_8_;
  *(ulonglong *)(pcVar9 + 0xc) =
       CONCAT44(s_model_enemy_on_shot_duration_1806f6ab0._16_4_,
                s_model_enemy_on_shot_duration_1806f6ab0._12_4_);
  *(undefined8 *)(pcVar9 + 0x14) = uVar4;
  pcVar9[0x1c] = '\0';
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar13 = puVar1;
  }
  else {
    puVar13 = (undefined8 *)*puVar1;
  }
  uVar11 = 0x1f;
  local_58 = pcVar9;
  if (puVar1[2] == 0x1c) {
    iVar8 = memcmp(pcVar9,puVar13,0x1c);
    if (iVar8 == 0) {
      FUN_1800f2e20(*param_1,&local_58,param_2 + 0x11c);
      pcVar9 = local_58;
      uVar11 = local_40;
    }
  }
  if (0xf < uVar11) {
    uVar12 = uVar11 + 1;
    pcVar14 = pcVar9;
    if (0xfff < uVar12) {
      pcVar14 = *(char **)(pcVar9 + -8);
      if ((char *)0x1f < pcVar9 + (-8 - (longlong)pcVar14)) goto LAB_18017ebbc;
      uVar12 = uVar11 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar14,uVar12);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_enemy_history_1806f6ad0._12_4_;
  uVar6 = s_model_enemy_history_1806f6ad0._8_4_;
  uVar5 = s_model_enemy_history_1806f6ad0._4_4_;
  local_48 = 0x13;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_history_1806f6ad0._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  *(uint *)(local_58 + 0xf) =
       CONCAT31(s_model_enemy_history_1806f6ad0._16_3_,s_model_enemy_history_1806f6ad0[0xf]);
  local_58[0x13] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0x120);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_enemy_history_glow_1806f6b60._12_4_;
  uVar6 = s_model_enemy_history_glow_1806f6b60._8_4_;
  uVar5 = s_model_enemy_history_glow_1806f6b60._4_4_;
  local_48 = 0x18;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_history_glow_1806f6b60._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  *(undefined8 *)(local_58 + 0x10) = s_model_enemy_history_glow_1806f6b60._16_8_;
  local_58[0x18] = '\0';
  FUN_180180350(param_1,&local_58,param_2 + 0x178);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_enemy_ragdolls_1806f6b80._12_4_;
  uVar6 = s_model_enemy_ragdolls_1806f6b80._8_4_;
  uVar5 = s_model_enemy_ragdolls_1806f6b80._4_4_;
  local_48 = 0x14;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_ragdolls_1806f6b80._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  *(undefined4 *)(local_58 + 0x10) = s_model_enemy_ragdolls_1806f6b80._16_4_;
  local_58[0x14] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0x18c);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_enemy_ragdolls_glow_1806f6b20._12_4_;
  uVar6 = s_model_enemy_ragdolls_glow_1806f6b20._8_4_;
  uVar5 = s_model_enemy_ragdolls_glow_1806f6b20._4_4_;
  local_48 = 0x19;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_enemy_ragdolls_glow_1806f6b20._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  uVar7 = s_model_enemy_ragdolls_glow_1806f6b20._21_4_;
  uVar6 = s_model_enemy_ragdolls_glow_1806f6b20._17_4_;
  uVar5 = CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0x10],
                   s_model_enemy_ragdolls_glow_1806f6b20._13_3_);
  *(uint *)(local_58 + 9) =
       CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0xc],
                s_model_enemy_ragdolls_glow_1806f6b20._9_3_);
  *(undefined4 *)(local_58 + 0xd) = uVar5;
  *(undefined4 *)(local_58 + 0x11) = uVar6;
  *(undefined4 *)(local_58 + 0x15) = uVar7;
  local_58[0x19] = '\0';
  FUN_180180350(param_1,&local_58,param_2 + 0x1e4);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  pcVar9 = (char *)FUN_18000fb70(0x20);
  local_48 = 0x1f;
  local_40 = 0x1f;
  uVar4 = CONCAT17(s_model_enemy_ragdolls_visibility_1806f6b40[0xf],
                   s_model_enemy_ragdolls_visibility_1806f6b40._8_7_);
  *(undefined8 *)pcVar9 = s_model_enemy_ragdolls_visibility_1806f6b40._0_8_;
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  uVar4 = s_model_enemy_ragdolls_visibility_1806f6b40._23_8_;
  *(ulonglong *)(pcVar9 + 0xf) =
       CONCAT71(s_model_enemy_ragdolls_visibility_1806f6b40._16_7_,
                s_model_enemy_ragdolls_visibility_1806f6b40[0xf]);
  *(undefined8 *)(pcVar9 + 0x17) = uVar4;
  pcVar9[0x1f] = '\0';
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar13 = puVar1;
  }
  else {
    puVar13 = (undefined8 *)*puVar1;
  }
  uVar11 = 0x1f;
  local_58 = pcVar9;
  if (puVar1[2] == 0x1f) {
    iVar8 = memcmp(pcVar9,puVar13,0x1f);
    if (iVar8 == 0) {
      FUN_1801940a0(*param_1,&local_58,param_2 + 0x1f8);
      pcVar9 = local_58;
      uVar11 = local_40;
    }
  }
  if (0xf < uVar11) {
    uVar12 = uVar11 + 1;
    pcVar14 = pcVar9;
    if (0xfff < uVar12) {
      pcVar14 = *(char **)(pcVar9 + -8);
      if ((char *)0x1f < pcVar9 + (-8 - (longlong)pcVar14)) goto LAB_18017ebbc;
      uVar12 = uVar11 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar14,uVar12);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_team_player_1806f6bd8._12_4_;
  uVar6 = s_model_team_player_1806f6bd8._8_4_;
  uVar5 = s_model_team_player_1806f6bd8._4_4_;
  local_48 = 0x11;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_team_player_1806f6bd8._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  local_58[0x10] = s_model_team_player_1806f6bd8[0x10];
  local_58[0x11] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0x1fc);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_team_behind_walls_1806f6bf0._12_4_;
  uVar6 = s_model_team_behind_walls_1806f6bf0._8_4_;
  uVar5 = s_model_team_behind_walls_1806f6bf0._4_4_;
  local_48 = 0x17;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_team_behind_walls_1806f6bf0._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  *(ulonglong *)(local_58 + 0xf) =
       CONCAT71(s_model_team_behind_walls_1806f6bf0._16_7_,s_model_team_behind_walls_1806f6bf0[0xf])
  ;
  local_58[0x17] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0x254);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  pcVar9 = (char *)FUN_18000fb70(0x30);
  uVar4 = s_model_team_disable_model_renderi_1806f6b98._8_8_;
  local_48 = 0x22;
  local_40 = 0x2f;
  *(undefined8 *)pcVar9 = s_model_team_disable_model_renderi_1806f6b98._0_8_;
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  uVar4 = s_model_team_disable_model_renderi_1806f6b98._24_8_;
  *(undefined8 *)(pcVar9 + 0x10) = s_model_team_disable_model_renderi_1806f6b98._16_8_;
  *(undefined8 *)(pcVar9 + 0x18) = uVar4;
  *(undefined2 *)(pcVar9 + 0x20) = s_model_team_disable_model_renderi_1806f6b98._32_2_;
  pcVar9[0x22] = '\0';
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar13 = puVar1;
  }
  else {
    puVar13 = (undefined8 *)*puVar1;
  }
  uVar11 = 0x2f;
  local_58 = pcVar9;
  if (puVar1[2] == 0x22) {
    iVar8 = memcmp(pcVar9,puVar13,0x22);
    if (iVar8 == 0) {
      lVar2 = *param_1;
      pcVar14 = ",\n";
      if (*(char *)(lVar2 + 0x20) != '\0') {
        pcVar14 = "{\n";
      }
      sVar10 = strlen(pcVar14);
      FUN_1800134a0(lVar2,pcVar14,sVar10);
      *(undefined1 *)(lVar2 + 0x20) = 0;
      FUN_1800134a0(lVar2,&DAT_1806f2ad0,3);
      FUN_1800134a0(lVar2,pcVar9,0x22);
      FUN_1800134a0(lVar2,&DAT_1806f2b04,3);
      pcVar9 = "false";
      if (*(char *)(param_2 + 0x2ac) != '\0') {
        pcVar9 = "true";
      }
      sVar10 = strlen(pcVar9);
      FUN_1800134a0(lVar2,pcVar9,sVar10);
      uVar11 = local_40;
      pcVar9 = local_58;
    }
  }
  if (0xf < uVar11) {
    uVar12 = uVar11 + 1;
    pcVar14 = pcVar9;
    if (0xfff < uVar12) {
      pcVar14 = *(char **)(pcVar9 + -8);
      if ((char *)0x1f < pcVar9 + (-8 - (longlong)pcVar14)) goto LAB_18017ebbc;
      uVar12 = uVar11 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar14,uVar12);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_local_player_1806f6bc0._12_4_;
  uVar6 = s_model_local_player_1806f6bc0._8_4_;
  uVar5 = s_model_local_player_1806f6bc0._4_4_;
  local_48 = 0x12;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_player_1806f6bc0._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  *(undefined2 *)(local_58 + 0x10) = s_model_local_player_1806f6bc0._16_2_;
  local_58[0x12] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0x2b0);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_local_player_overlay_1806f6c40._4_4_;
  local_48 = 0x1a;
  local_40 = 0x1f;
  uVar5 = CONCAT22(s_model_local_player_overlay_1806f6c40._10_2_,
                   s_model_local_player_overlay_1806f6c40._8_2_);
  uVar6 = CONCAT22(s_model_local_player_overlay_1806f6c40._14_2_,
                   s_model_local_player_overlay_1806f6c40._12_2_);
  *(undefined4 *)local_58 = s_model_local_player_overlay_1806f6c40._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar7;
  *(undefined4 *)(local_58 + 8) = uVar5;
  *(undefined4 *)(local_58 + 0xc) = uVar6;
  uVar7 = s_model_local_player_overlay_1806f6c40._22_4_;
  uVar6 = s_model_local_player_overlay_1806f6c40._18_4_;
  uVar5 = CONCAT22(s_model_local_player_overlay_1806f6c40._16_2_,
                   s_model_local_player_overlay_1806f6c40._14_2_);
  *(uint *)(local_58 + 10) =
       CONCAT22(s_model_local_player_overlay_1806f6c40._12_2_,
                s_model_local_player_overlay_1806f6c40._10_2_);
  *(undefined4 *)(local_58 + 0xe) = uVar5;
  *(undefined4 *)(local_58 + 0x12) = uVar6;
  *(undefined4 *)(local_58 + 0x16) = uVar7;
  local_58[0x1a] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0x308);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_local_skeleton_1806f6c60._12_4_;
  uVar6 = s_model_local_skeleton_1806f6c60._8_4_;
  uVar5 = s_model_local_skeleton_1806f6c60._4_4_;
  local_48 = 0x14;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_skeleton_1806f6c60._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  *(undefined4 *)(local_58 + 0x10) = s_model_local_skeleton_1806f6c60._16_4_;
  local_58[0x14] = '\0';
  FUN_180180350(param_1,&local_58,param_2 + 0x360);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_local_arms_1806f6c08._12_4_;
  uVar6 = s_model_local_arms_1806f6c08._8_4_;
  uVar5 = s_model_local_arms_1806f6c08._4_4_;
  local_48 = 0x10;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_arms_1806f6c08._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  local_58[0x10] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0x374);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_local_arms_overlay_1806f6c20._12_4_;
  uVar6 = s_model_local_arms_overlay_1806f6c20._8_4_;
  uVar5 = s_model_local_arms_overlay_1806f6c20._4_4_;
  local_48 = 0x18;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_arms_overlay_1806f6c20._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  *(undefined8 *)(local_58 + 0x10) = s_model_local_arms_overlay_1806f6c20._16_8_;
  local_58[0x18] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0x3cc);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_local_gloves_1806f6cb0._12_4_;
  uVar6 = s_model_local_gloves_1806f6cb0._8_4_;
  uVar5 = s_model_local_gloves_1806f6cb0._4_4_;
  local_48 = 0x12;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_gloves_1806f6cb0._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  *(undefined2 *)(local_58 + 0x10) = s_model_local_gloves_1806f6cb0._16_2_;
  local_58[0x12] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0x424);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_local_gloves_overlay_1806f6cc8._4_4_;
  local_48 = 0x1a;
  local_40 = 0x1f;
  uVar5 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._10_2_,
                   s_model_local_gloves_overlay_1806f6cc8._8_2_);
  uVar6 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._14_2_,
                   s_model_local_gloves_overlay_1806f6cc8._12_2_);
  *(undefined4 *)local_58 = s_model_local_gloves_overlay_1806f6cc8._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar7;
  *(undefined4 *)(local_58 + 8) = uVar5;
  *(undefined4 *)(local_58 + 0xc) = uVar6;
  uVar7 = s_model_local_gloves_overlay_1806f6cc8._22_4_;
  uVar6 = s_model_local_gloves_overlay_1806f6cc8._18_4_;
  uVar5 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._16_2_,
                   s_model_local_gloves_overlay_1806f6cc8._14_2_);
  *(uint *)(local_58 + 10) =
       CONCAT22(s_model_local_gloves_overlay_1806f6cc8._12_2_,
                s_model_local_gloves_overlay_1806f6cc8._10_2_);
  *(undefined4 *)(local_58 + 0xe) = uVar5;
  *(undefined4 *)(local_58 + 0x12) = uVar6;
  *(undefined4 *)(local_58 + 0x16) = uVar7;
  local_58[0x1a] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0x47c);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_local_weapon_1806f6c78._12_4_;
  uVar6 = s_model_local_weapon_1806f6c78._8_4_;
  uVar5 = s_model_local_weapon_1806f6c78._4_4_;
  local_48 = 0x12;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_weapon_1806f6c78._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  *(undefined2 *)(local_58 + 0x10) = s_model_local_weapon_1806f6c78._16_2_;
  local_58[0x12] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0x4d4);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_local_weapon_overlay_1806f6c90._4_4_;
  local_48 = 0x1a;
  local_40 = 0x1f;
  uVar5 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._10_2_,
                   s_model_local_weapon_overlay_1806f6c90._8_2_);
  uVar6 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._14_2_,
                   s_model_local_weapon_overlay_1806f6c90._12_2_);
  *(undefined4 *)local_58 = s_model_local_weapon_overlay_1806f6c90._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar7;
  *(undefined4 *)(local_58 + 8) = uVar5;
  *(undefined4 *)(local_58 + 0xc) = uVar6;
  uVar7 = s_model_local_weapon_overlay_1806f6c90._22_4_;
  uVar6 = s_model_local_weapon_overlay_1806f6c90._18_4_;
  uVar5 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._16_2_,
                   s_model_local_weapon_overlay_1806f6c90._14_2_);
  *(uint *)(local_58 + 10) =
       CONCAT22(s_model_local_weapon_overlay_1806f6c90._12_2_,
                s_model_local_weapon_overlay_1806f6c90._10_2_);
  *(undefined4 *)(local_58 + 0xe) = uVar5;
  *(undefined4 *)(local_58 + 0x12) = uVar6;
  *(undefined4 *)(local_58 + 0x16) = uVar7;
  local_58[0x1a] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0x52c);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_local_keychain_1806f6d28._12_4_;
  uVar6 = s_model_local_keychain_1806f6d28._8_4_;
  uVar5 = s_model_local_keychain_1806f6d28._4_4_;
  local_48 = 0x14;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_keychain_1806f6d28._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  *(undefined4 *)(local_58 + 0x10) = s_model_local_keychain_1806f6d28._16_4_;
  local_58[0x14] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0x584);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) goto LAB_18017ebbc;
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_local_keychain_overlay_1806f6d40._12_4_;
  uVar6 = s_model_local_keychain_overlay_1806f6d40._8_4_;
  uVar5 = s_model_local_keychain_overlay_1806f6d40._4_4_;
  local_48 = 0x1c;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_keychain_overlay_1806f6d40._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  uVar7 = s_model_local_keychain_overlay_1806f6d40._24_4_;
  uVar6 = s_model_local_keychain_overlay_1806f6d40._20_4_;
  uVar5 = s_model_local_keychain_overlay_1806f6d40._16_4_;
  *(undefined4 *)(local_58 + 0xc) = s_model_local_keychain_overlay_1806f6d40._12_4_;
  *(undefined4 *)(local_58 + 0x10) = uVar5;
  *(undefined4 *)(local_58 + 0x14) = uVar6;
  *(undefined4 *)(local_58 + 0x18) = uVar7;
  local_58[0x1c] = '\0';
  FUN_18017fc90(param_1,&local_58,param_2 + 0x5dc);
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) {
LAB_18017ebbc:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar7 = s_model_local_colorize_stattrak_1806f6ce8._12_4_;
  uVar6 = s_model_local_colorize_stattrak_1806f6ce8._8_4_;
  uVar5 = s_model_local_colorize_stattrak_1806f6ce8._4_4_;
  local_48 = 0x1d;
  local_40 = 0x1f;
  *(undefined4 *)local_58 = s_model_local_colorize_stattrak_1806f6ce8._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar5;
  *(undefined4 *)(local_58 + 8) = uVar6;
  *(undefined4 *)(local_58 + 0xc) = uVar7;
  uVar7 = s_model_local_colorize_stattrak_1806f6ce8._25_4_;
  uVar6 = s_model_local_colorize_stattrak_1806f6ce8._21_4_;
  uVar5 = s_model_local_colorize_stattrak_1806f6ce8._17_4_;
  *(uint *)(local_58 + 0xd) =
       CONCAT13(s_model_local_colorize_stattrak_1806f6ce8[0x10],
                s_model_local_colorize_stattrak_1806f6ce8._13_3_);
  *(undefined4 *)(local_58 + 0x11) = uVar5;
  *(undefined4 *)(local_58 + 0x15) = uVar6;
  *(undefined4 *)(local_58 + 0x19) = uVar7;
  local_58[0x1d] = '\0';
  FUN_18017c1d0(param_1,&local_58,param_2 + 0x634);
  FUN_18000f890(&local_58);
  FUN_180013350(&local_58,"model.local.stattrak_weapon");
  FUN_18017ee50(param_1,&local_58,param_2 + 0x638);
  FUN_18000f890(&local_58);
  FUN_180013350(&local_58,"model.local.stattrak_knife");
  FUN_18017ee50(param_1,&local_58,param_2 + 0x648);
  FUN_18000f890(&local_58);
  return;
}



/* ===== 18017ebd0 FUN_18017ebd0 ===== */

void FUN_18017ebd0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_1801940a0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18017ec50 FUN_18017ec50 ===== */

void FUN_18017ec50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_180194150(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18017ecd0 FUN_18017ecd0 ===== */

void FUN_18017ecd0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_180151da0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18017ed50 FUN_18017ed50 ===== */

void FUN_18017ed50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_180194310(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18017edd0 FUN_18017edd0 ===== */

void FUN_18017edd0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_180194430(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18017ee50 FUN_18017ee50 ===== */

void FUN_18017ee50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_1801944c0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18017eed0 FUN_18017eed0 ===== */

void FUN_18017eed0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_180151e90(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18017ef50 FUN_18017ef50 ===== */

void FUN_18017ef50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_180194590(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18017efd0 FUN_18017efd0 ===== */

void FUN_18017efd0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_180194630(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18017f050 FUN_18017f050 ===== */

void FUN_18017f050(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_180151c10(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18017f0d0 FUN_18017f0d0 ===== */

void FUN_18017f0d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  longlong *plVar2;
  size_t _Size;
  undefined8 uVar3;
  int iVar4;
  undefined8 *_Buf1;
  ulonglong uVar5;
  longlong *plVar6;
  
  plVar2 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar6 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar6 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar2[2]) {
    if ((_Size != 0) && (iVar4 = memcmp(_Buf1,(void *)*plVar6,_Size), iVar4 != 0)) {
      return;
    }
    uVar3 = *param_1;
    FUN_1800f2cb0(uVar3,param_2);
    FUN_1800134a0(uVar3,&DAT_1806dfffc,1);
    uVar5 = 0;
    do {
      bVar1 = *(byte *)(uVar5 + param_3);
      if (bVar1 == 0) break;
      if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
        FUN_1800690a0(uVar3,0x5c);
      }
      if (0x1f < bVar1) {
        FUN_1800690a0(uVar3,bVar1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x104);
    FUN_1800134a0(uVar3,&DAT_1806dfffc,1);
  }
  return;
}



/* ===== 18017f1c0 FUN_18017f1c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017f1c0(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_368 [32];
  undefined1 local_348 [32];
  undefined1 local_328 [32];
  undefined1 local_308 [32];
  undefined1 local_2e8 [32];
  undefined1 local_2c8 [32];
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_368;
  puVar5 = (undefined8 *)FUN_180073a70(local_2e8,param_2,&DAT_1806f5f30);
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f2db0(*param_1,puVar5,param_3);
  }
  FUN_18000f890(local_2e8);
  if (*param_3 == 0) {
    return;
  }
  puVar5 = (undefined8 *)FUN_180073a70(local_2c8,param_2,".side");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f2db0(*param_1,puVar5,param_3 + 1);
  }
  FUN_18000f890(local_2c8);
  puVar5 = (undefined8 *)FUN_180073a70(local_2a8,param_2,".paint_kit");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f2db0(*param_1,puVar5,param_3 + 2);
  }
  FUN_18000f890(local_2a8);
  puVar5 = (undefined8 *)FUN_180073a70(local_288,param_2,".wear");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f2e20(*param_1,puVar5,param_3 + 3);
  }
  FUN_18000f890(local_288);
  puVar5 = (undefined8 *)FUN_180073a70(local_268,param_2,".seed");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f2db0(*param_1,puVar5,param_3 + 4);
  }
  FUN_18000f890(local_268);
  uVar6 = FUN_180073a70(local_348,param_2,".stattrak");
  FUN_18017c1d0(param_1,uVar6,param_3 + 5);
  FUN_18000f890(local_348);
  puVar5 = (undefined8 *)FUN_180073a70(local_248,param_2,".stattrak_value");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f2db0(*param_1,puVar5,param_3 + 6);
  }
  FUN_18000f890(local_248);
  puVar5 = (undefined8 *)FUN_180073a70(local_228,param_2,".nametag");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_180194430(*param_1,puVar5,param_3 + 7);
  }
  FUN_18000f890(local_228);
  uVar6 = FUN_180073a70(local_348,param_2,".custom_colors");
  FUN_18017c1d0(param_1,uVar6,param_3 + 0x17);
  FUN_18000f890(local_348);
  uVar10 = 0;
  do {
    uVar6 = FUN_18004e4f0(local_1c8,uVar10);
    uVar7 = FUN_180073a70(local_1e8,param_2,".color");
    puVar5 = (undefined8 *)FUN_180066820(local_208,uVar7,uVar6);
    plVar2 = (longlong *)*plVar1;
    plVar9 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar9 = plVar2;
    }
    sVar3 = puVar5[2];
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar8 = puVar5;
    }
    else {
      puVar8 = (undefined8 *)*puVar5;
    }
    if ((sVar3 == plVar2[2]) &&
       ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
      FUN_1801944c0(*param_1,puVar5,param_3 + uVar10 * 4 + 0x18);
    }
    FUN_18000f890(local_208);
    FUN_18000f890(local_1e8);
    FUN_18000f890(local_1c8);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 8);
  uVar10 = 0;
  do {
    uVar6 = FUN_18004e4f0(local_308,uVar10);
    uVar7 = FUN_180073a70(local_328,param_2,".sticker");
    FUN_180066820(local_348,uVar7,uVar6);
    FUN_18000f890(local_328);
    FUN_18000f890(local_308);
    puVar5 = (undefined8 *)FUN_180073a70(local_1a8,local_348,&DAT_1806f6a6c);
    plVar2 = (longlong *)*plVar1;
    plVar9 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar9 = plVar2;
    }
    sVar3 = puVar5[2];
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar8 = puVar5;
    }
    else {
      puVar8 = (undefined8 *)*puVar5;
    }
    if ((sVar3 == plVar2[2]) &&
       ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
      FUN_1800f2db0(*param_1,puVar5,param_3 + uVar10 * 7 + 0x38);
    }
    FUN_18000f890(local_1a8);
    puVar5 = (undefined8 *)FUN_180073a70(local_188,local_348,".wear");
    plVar2 = (longlong *)*plVar1;
    plVar9 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar9 = plVar2;
    }
    sVar3 = puVar5[2];
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar8 = puVar5;
    }
    else {
      puVar8 = (undefined8 *)*puVar5;
    }
    if ((sVar3 == plVar2[2]) &&
       ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
      FUN_1800f2e20(*param_1,puVar5,param_3 + uVar10 * 7 + 0x39);
    }
    FUN_18000f890(local_188);
    puVar5 = (undefined8 *)FUN_180073a70(local_168,local_348,".scale");
    plVar2 = (longlong *)*plVar1;
    plVar9 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar9 = plVar2;
    }
    sVar3 = puVar5[2];
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar8 = puVar5;
    }
    else {
      puVar8 = (undefined8 *)*puVar5;
    }
    if ((sVar3 == plVar2[2]) &&
       ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
      FUN_1800f2e20(*param_1,puVar5,param_3 + uVar10 * 7 + 0x3a);
    }
    FUN_18000f890(local_168);
    puVar5 = (undefined8 *)FUN_180073a70(local_148,local_348,".rotation");
    plVar2 = (longlong *)*plVar1;
    plVar9 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar9 = plVar2;
    }
    sVar3 = puVar5[2];
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar8 = puVar5;
    }
    else {
      puVar8 = (undefined8 *)*puVar5;
    }
    if ((sVar3 == plVar2[2]) &&
       ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
      FUN_1800f2e20(*param_1,puVar5,param_3 + uVar10 * 7 + 0x3b);
    }
    FUN_18000f890(local_148);
    puVar5 = (undefined8 *)FUN_180073a70(local_128,local_348,".offset_x");
    plVar2 = (longlong *)*plVar1;
    plVar9 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar9 = plVar2;
    }
    sVar3 = puVar5[2];
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar8 = puVar5;
    }
    else {
      puVar8 = (undefined8 *)*puVar5;
    }
    if ((sVar3 == plVar2[2]) &&
       ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
      FUN_1800f2e20(*param_1,puVar5,param_3 + uVar10 * 7 + 0x3c);
    }
    FUN_18000f890(local_128);
    puVar5 = (undefined8 *)FUN_180073a70(local_108,local_348,".offset_y");
    plVar2 = (longlong *)*plVar1;
    plVar9 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar9 = plVar2;
    }
    sVar3 = puVar5[2];
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar8 = puVar5;
    }
    else {
      puVar8 = (undefined8 *)*puVar5;
    }
    if ((sVar3 == plVar2[2]) &&
       ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
      FUN_1800f2e20(*param_1,puVar5,param_3 + uVar10 * 7 + 0x3d);
    }
    FUN_18000f890(local_108);
    puVar5 = (undefined8 *)FUN_180073a70(local_e8,local_348,".schema");
    plVar2 = (longlong *)*plVar1;
    plVar9 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar9 = plVar2;
    }
    sVar3 = puVar5[2];
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar8 = puVar5;
    }
    else {
      puVar8 = (undefined8 *)*puVar5;
    }
    if ((sVar3 == plVar2[2]) &&
       ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
      FUN_1800f2db0(*param_1,puVar5,param_3 + uVar10 * 7 + 0x3e);
    }
    FUN_18000f890(local_e8);
    FUN_18000f890(local_348);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 6);
  puVar5 = (undefined8 *)FUN_180073a70(local_308,param_2,".keychain.id");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x62);
  }
  FUN_18000f890(local_308);
  puVar5 = (undefined8 *)FUN_180073a70(local_328,param_2,".keychain.seed");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f2db0(*param_1,puVar5,param_3 + 99);
  }
  FUN_18000f890(local_328);
  puVar5 = (undefined8 *)FUN_180073a70(local_c8,param_2,".keychain.offset_x");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f2e20(*param_1,puVar5,param_3 + 100);
  }
  FUN_18000f890(local_c8);
  puVar5 = (undefined8 *)FUN_180073a70(local_a8,param_2,".keychain.offset_y");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f2e20(*param_1,puVar5,param_3 + 0x65);
  }
  FUN_18000f890(local_a8);
  puVar5 = (undefined8 *)FUN_180073a70(local_88,param_2,".keychain.offset_z");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f2e20(*param_1,puVar5,param_3 + 0x66);
  }
  FUN_18000f890(local_88);
  puVar5 = (undefined8 *)FUN_180073a70(local_68,param_2,".keychain.sticker");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x67);
  }
  FUN_18000f890(local_68);
  return;
}



/* ===== 18017fc90 FUN_18017fc90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017fc90(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_238 [32];
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_238;
  puVar5 = (undefined8 *)FUN_180073a70(local_1f8,param_2,".material");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18017fd25;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3);
  }
LAB_18017fd25:
  FUN_18000f890(local_1f8);
  puVar5 = (undefined8 *)FUN_180073a70(local_1d8,param_2,".color");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18017fd8f;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 4);
  }
LAB_18017fd8f:
  FUN_18000f890(local_1d8);
  puVar5 = (undefined8 *)FUN_180073a70(local_1b8,param_2,".metalness");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18017fdf8;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x14);
  }
LAB_18017fdf8:
  FUN_18000f890(local_1b8);
  puVar5 = (undefined8 *)FUN_180073a70(local_198,param_2,".roughness");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18017fe60;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x18);
  }
LAB_18017fe60:
  FUN_18000f890(local_198);
  puVar5 = (undefined8 *)FUN_180073a70(local_178,param_2,".glow_exponent");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18017fec8;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x1c);
  }
LAB_18017fec8:
  FUN_18000f890(local_178);
  puVar5 = (undefined8 *)FUN_180073a70(local_158,param_2,".outline_exponent");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18017ff30;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x20);
  }
LAB_18017ff30:
  FUN_18000f890(local_158);
  puVar5 = (undefined8 *)FUN_180073a70(local_138,param_2,".outline_falloff");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18017ff98;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x24);
  }
LAB_18017ff98:
  FUN_18000f890(local_138);
  uVar6 = FUN_180073a70(local_218,param_2,".outline_filling");
  FUN_18017c1d0(param_1,uVar6,param_3 + 0x28);
  FUN_18000f890(local_218);
  puVar5 = (undefined8 *)FUN_180073a70(local_218,param_2,".iridescent_strength");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180030;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x2c);
  }
LAB_180180030:
  FUN_18000f890(local_218);
  puVar5 = (undefined8 *)FUN_180073a70(local_118,param_2,".iridescent_roughness");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180099;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x30);
  }
LAB_180180099:
  FUN_18000f890(local_118);
  puVar5 = (undefined8 *)FUN_180073a70(local_f8,param_2,".iridescent_tint");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180101;
    }
    FUN_1801944c0(*param_1,puVar5,param_3 + 0x34);
  }
LAB_180180101:
  FUN_18000f890(local_f8);
  puVar5 = (undefined8 *)FUN_180073a70(local_d8,param_2,".water_speed");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180169;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x44);
  }
LAB_180180169:
  FUN_18000f890(local_d8);
  puVar5 = (undefined8 *)FUN_180073a70(local_b8,param_2,".glossy_exponent");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801801d4;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x48);
  }
LAB_1801801d4:
  FUN_18000f890(local_b8);
  puVar5 = (undefined8 *)FUN_180073a70(local_98,param_2,".glossy_filling");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180242;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x4c);
  }
LAB_180180242:
  FUN_18000f890(local_98);
  puVar5 = (undefined8 *)FUN_180073a70(local_78,param_2,".glossy_falloff");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801802b0;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x50);
  }
LAB_1801802b0:
  FUN_18000f890(local_78);
  puVar5 = (undefined8 *)FUN_180073a70(local_58,param_2,".glossy_tint");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018031e;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x54);
  }
LAB_18018031e:
  FUN_18000f890(local_58);
  return;
}



/* ===== 180180350 FUN_180180350 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180180350(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *_Buf1;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar3 = FUN_180073a70(local_48,param_2,".enabled");
  FUN_18017c1d0(param_1,uVar3,param_3);
  FUN_18000f890(local_48);
  puVar4 = (undefined8 *)FUN_180073a70(local_48,param_2,".color");
  plVar1 = (longlong *)param_1[1];
  plVar5 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar5 = param_1 + 1;
  }
  _Size = puVar4[2];
  if ((ulonglong)puVar4[3] < 0x10) {
    _Buf1 = puVar4;
  }
  else {
    _Buf1 = (undefined8 *)*puVar4;
  }
  if (_Size == plVar1[2]) {
    if (_Size != 0) {
      iVar2 = memcmp(_Buf1,(void *)*plVar5,_Size);
      if (iVar2 != 0) goto LAB_1801803ff;
    }
    FUN_1801944c0(*param_1,puVar4,param_3 + 4);
  }
LAB_1801803ff:
  FUN_18000f890(local_48);
  return;
}



/* ===== 180180420 FUN_180180420 ===== */

void FUN_180180420(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_180195380(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 1801804a0 FUN_1801804a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801804a0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_618 [32];
  undefined1 local_5f8 [32];
  undefined1 local_5d8 [32];
  undefined1 local_5b8 [32];
  undefined1 local_598 [32];
  undefined1 local_578 [32];
  undefined1 local_558 [32];
  undefined1 local_538 [32];
  undefined1 local_518 [32];
  undefined1 local_4f8 [32];
  undefined1 local_4d8 [32];
  undefined1 local_4b8 [32];
  undefined1 local_498 [32];
  undefined1 local_478 [32];
  undefined1 local_458 [32];
  undefined1 local_438 [32];
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
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_618;
  FUN_1801b54b0(param_1,param_2,param_3 + 0x264);
  uVar5 = FUN_180073a70(local_598,param_2,"world.modulation");
  FUN_18017c1d0(param_1,uVar5,param_3 + 4);
  FUN_18000f890(local_598);
  puVar6 = (undefined8 *)FUN_180073a70(local_598,param_2,"world.modulation_color");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180571;
    }
    FUN_1801944c0(*param_1,puVar6,param_3 + 8);
  }
LAB_180180571:
  FUN_18000f890(local_598);
  uVar5 = FUN_180073a70(local_578,param_2,"world.gamma");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x18);
  FUN_18000f890(local_578);
  puVar6 = (undefined8 *)FUN_180073a70(local_578,param_2,"world.gamma_value");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180606;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x1c);
  }
LAB_180180606:
  FUN_18000f890(local_578);
  uVar5 = FUN_180073a70(local_558,param_2,"world.bloom");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x20);
  FUN_18000f890(local_558);
  puVar6 = (undefined8 *)FUN_180073a70(local_558,param_2,"world.bloom_amount");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018069b;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x24);
  }
LAB_18018069b:
  FUN_18000f890(local_558);
  uVar5 = FUN_180073a70(local_538,param_2,"world.wetness");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x28);
  FUN_18000f890(local_538);
  puVar6 = (undefined8 *)FUN_180073a70(local_538,param_2,"world.wetness_density");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180730;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x2c);
  }
LAB_180180730:
  FUN_18000f890(local_538);
  puVar6 = (undefined8 *)FUN_180073a70(local_3d8,param_2,"world.wetness_speed");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018079b;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x30);
  }
LAB_18018079b:
  FUN_18000f890(local_3d8);
  uVar5 = FUN_180073a70(local_4f8,param_2,"world.wind");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x34);
  FUN_18000f890(local_4f8);
  puVar6 = (undefined8 *)FUN_180073a70(local_4f8,param_2,"world.wind_strength");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180833;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x38);
  }
LAB_180180833:
  FUN_18000f890(local_4f8);
  puVar6 = (undefined8 *)FUN_180073a70(local_3b8,param_2,"world.wind_direction");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018089e;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x3c);
  }
LAB_18018089e:
  FUN_18000f890(local_3b8);
  uVar5 = FUN_180073a70(local_5d8,param_2,"world.dof");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x40);
  FUN_18000f890(local_5d8);
  uVar5 = FUN_180073a70(local_5d8,param_2,"world.fog");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x54);
  FUN_18000f890(local_5d8);
  puVar6 = (undefined8 *)FUN_180073a70(local_5d8,param_2,"world.fog_color");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180968;
    }
    FUN_1801944c0(*param_1,puVar6,param_3 + 0x58);
  }
LAB_180180968:
  FUN_18000f890(local_5d8);
  puVar6 = (undefined8 *)FUN_180073a70(local_398,param_2,"world.fog_density");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801809d4;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x68);
  }
LAB_1801809d4:
  FUN_18000f890(local_398);
  puVar6 = (undefined8 *)FUN_180073a70(local_378,param_2,"world.fog_distance");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180a42;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x6c);
  }
LAB_180180a42:
  FUN_18000f890(local_378);
  puVar6 = (undefined8 *)FUN_180073a70(local_358,param_2,"world.fog_falloff");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180ab0;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x70);
  }
LAB_180180ab0:
  FUN_18000f890(local_358);
  puVar6 = (undefined8 *)FUN_180073a70(local_338,param_2,"world.fog_glow");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180b1e;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x74);
  }
LAB_180180b1e:
  FUN_18000f890(local_338);
  puVar6 = (undefined8 *)FUN_180073a70(local_318,param_2,"world.dof_near_blurry");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180b8c;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x44);
  }
LAB_180180b8c:
  FUN_18000f890(local_318);
  puVar6 = (undefined8 *)FUN_180073a70(local_2f8,param_2,"world.dof_near_crisp");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180bfa;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x48);
  }
LAB_180180bfa:
  FUN_18000f890(local_2f8);
  puVar6 = (undefined8 *)FUN_180073a70(local_2d8,param_2,"world.dof_far_crisp");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180c68;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x4c);
  }
LAB_180180c68:
  FUN_18000f890(local_2d8);
  puVar6 = (undefined8 *)FUN_180073a70(local_2b8,param_2,"world.dof_far_blurry");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180cd6;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x50);
  }
LAB_180180cd6:
  FUN_18000f890(local_2b8);
  uVar5 = FUN_180073a70(local_4d8,param_2,"screen.rain");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x20c);
  FUN_18000f890(local_4d8);
  puVar6 = (undefined8 *)FUN_180073a70(local_4d8,param_2,"screen.rain_amount");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180d74;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x210);
  }
LAB_180180d74:
  FUN_18000f890(local_4d8);
  puVar6 = (undefined8 *)FUN_180073a70(local_298,param_2,"screen.rain_size");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180de2;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x214);
  }
LAB_180180de2:
  FUN_18000f890(local_298);
  puVar6 = (undefined8 *)FUN_180073a70(local_278,param_2,"screen.rain_speed");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180e53;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x218);
  }
LAB_180180e53:
  FUN_18000f890(local_278);
  puVar6 = (undefined8 *)FUN_180073a70(local_198,param_2,"screen.rain_fog");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180ec4;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x21c);
  }
LAB_180180ec4:
  FUN_18000f890(local_198);
  puVar6 = (undefined8 *)FUN_180073a70(local_1f8,param_2,"screen.rain_blur");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180f35;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x220);
  }
LAB_180180f35:
  FUN_18000f890(local_1f8);
  uVar5 = FUN_180073a70(local_478,param_2,"screen.chromatic");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x224);
  FUN_18000f890(local_478);
  puVar6 = (undefined8 *)FUN_180073a70(local_478,param_2,"screen.chromatic_amount");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180180fdc;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x228);
  }
LAB_180180fdc:
  FUN_18000f890(local_478);
  uVar5 = FUN_180073a70(local_458,param_2,"screen.vignette");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x22c);
  FUN_18000f890(local_458);
  puVar6 = (undefined8 *)FUN_180073a70(local_458,param_2,"screen.vignette_amount");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180181083;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x230);
  }
LAB_180181083:
  FUN_18000f890(local_458);
  puVar6 = (undefined8 *)FUN_180073a70(local_f8,param_2,"sky.mode");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801810f1;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 0x78);
  }
LAB_1801810f1:
  FUN_18000f890(local_f8);
  puVar6 = (undefined8 *)FUN_180073a70(local_1d8,param_2,"sky.texture");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018115f;
    }
    FUN_1801bef40(*param_1,puVar6,param_3 + 0x7c);
  }
LAB_18018115f:
  FUN_18000f890(local_1d8);
  puVar6 = (undefined8 *)FUN_180073a70(local_178,param_2,"sky.shader");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801811d0;
    }
    FUN_180194430(*param_1,puVar6,param_3 + 0x11c);
  }
LAB_1801811d0:
  FUN_18000f890(local_178);
  puVar6 = (undefined8 *)FUN_180073a70(local_158,param_2,"sky.params");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180181241;
    }
    FUN_1801befd0(*param_1,puVar6,param_3 + 0x15c);
  }
LAB_180181241:
  FUN_18000f890(local_158);
  puVar6 = (undefined8 *)FUN_180073a70(local_d8,param_2,"sky.primary");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801812b2;
    }
    FUN_1801944c0(*param_1,puVar6,param_3 + 0x17c);
  }
LAB_1801812b2:
  FUN_18000f890(local_d8);
  puVar6 = (undefined8 *)FUN_180073a70(local_58,param_2,"sky.secondary");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180181323;
    }
    FUN_1801944c0(*param_1,puVar6,param_3 + 0x18c);
  }
LAB_180181323:
  FUN_18000f890(local_58);
  puVar6 = (undefined8 *)FUN_180073a70(local_258,param_2,"sky.exposure");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180181394;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x19c);
  }
LAB_180181394:
  FUN_18000f890(local_258);
  puVar6 = (undefined8 *)FUN_180073a70(local_238,param_2,"sky.update_rate");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180181405;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x1a0);
  }
LAB_180181405:
  FUN_18000f890(local_238);
  puVar6 = (undefined8 *)FUN_180073a70(local_218,param_2,"sky.resolution");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180181476;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 0x1a4);
  }
LAB_180181476:
  FUN_18000f890(local_218);
  uVar5 = FUN_180073a70(local_5b8,param_2,"sky.supersample");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x1a8);
  FUN_18000f890(local_5b8);
  uVar5 = FUN_180073a70(local_5b8,param_2,"sky.recolor");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x1a9);
  FUN_18000f890(local_5b8);
  puVar6 = (undefined8 *)FUN_180073a70(local_5b8,param_2,"sky.recolor_strength");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180181549;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x1ac);
  }
LAB_180181549:
  FUN_18000f890(local_5b8);
  uVar5 = FUN_180073a70(local_418,param_2,"sky.sky_tint");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x1b0);
  FUN_18000f890(local_418);
  puVar6 = (undefined8 *)FUN_180073a70(local_418,param_2,"sky.sky_color");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801815ee;
    }
    FUN_1801944c0(*param_1,puVar6,param_3 + 0x1b4);
  }
LAB_1801815ee:
  FUN_18000f890(local_418);
  puVar6 = (undefined8 *)FUN_180073a70(local_1b8,param_2,"sky.brightness");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018165f;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x208);
  }
LAB_18018165f:
  FUN_18000f890(local_1b8);
  uVar5 = FUN_180073a70(local_438,param_2,"sky.cloud_tint");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x1c4);
  FUN_18000f890(local_438);
  puVar6 = (undefined8 *)FUN_180073a70(local_438,param_2,"sky.cloud_color");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180181706;
    }
    FUN_1801944c0(*param_1,puVar6,param_3 + 0x1c8);
  }
LAB_180181706:
  FUN_18000f890(local_438);
  uVar5 = FUN_180073a70(local_3f8,param_2,"sky.sun_tint");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x1d8);
  FUN_18000f890(local_3f8);
  puVar6 = (undefined8 *)FUN_180073a70(local_3f8,param_2,"sky.sun_color");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801817ad;
    }
    FUN_1801944c0(*param_1,puVar6,param_3 + 0x1dc);
  }
LAB_1801817ad:
  FUN_18000f890(local_3f8);
  uVar5 = FUN_180073a70(local_518,param_2,"sky.lighting");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x1ec);
  FUN_18000f890(local_518);
  puVar6 = (undefined8 *)FUN_180073a70(local_518,param_2,"sky.lighting_color");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018184b;
    }
    FUN_1801944c0(*param_1,puVar6,param_3 + 0x1f0);
  }
LAB_18018184b:
  FUN_18000f890(local_518);
  puVar6 = (undefined8 *)FUN_180073a70(local_138,param_2,"sky.lighting_intensity");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801818b9;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x200);
  }
LAB_1801818b9:
  FUN_18000f890(local_138);
  puVar6 = (undefined8 *)FUN_180073a70(local_118,param_2,"sky.lighting_mode");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018192a;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 0x204);
  }
LAB_18018192a:
  FUN_18000f890(local_118);
  uVar5 = FUN_180073a70(local_498,param_2,"motion_blur.enabled");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x234);
  FUN_18000f890(local_498);
  puVar6 = (undefined8 *)FUN_180073a70(local_498,param_2,"motion_blur.strength");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801819d1;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x238);
  }
LAB_1801819d1:
  FUN_18000f890(local_498);
  uVar5 = FUN_180073a70(local_4b8,param_2,"weather.enabled");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x23c);
  FUN_18000f890(local_4b8);
  puVar6 = (undefined8 *)FUN_180073a70(local_4b8,param_2,"weather.type");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180181a6f;
    }
    FUN_1800f2db0(*param_1,puVar6,param_3 + 0x240);
  }
LAB_180181a6f:
  FUN_18000f890(local_4b8);
  puVar6 = (undefined8 *)FUN_180073a70(local_b8,param_2,"weather.color");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180181add;
    }
    FUN_1801944c0(*param_1,puVar6,param_3 + 0x244);
  }
LAB_180181add:
  FUN_18000f890(local_b8);
  puVar6 = (undefined8 *)FUN_180073a70(local_98,param_2,"weather.density");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180181b4e;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x254);
  }
LAB_180181b4e:
  FUN_18000f890(local_98);
  puVar6 = (undefined8 *)FUN_180073a70(local_78,param_2,"weather.gravity");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180181bbf;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 600);
  }
LAB_180181bbf:
  FUN_18000f890(local_78);
  puVar6 = (undefined8 *)FUN_180073a70(local_5f8,param_2,"weather.glow");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar7 = puVar6;
  }
  else {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180181c2e;
    }
    FUN_1800f2e20(*param_1,puVar6,param_3 + 0x25c);
  }
LAB_180181c2e:
  FUN_18000f890(local_5f8);
  uVar5 = FUN_180073a70(local_5f8,param_2,"weather.rain_mist");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x260);
  FUN_18000f890(local_5f8);
  uVar5 = FUN_180073a70(local_5f8,param_2,"weather.rain_ripples");
  FUN_18017c1d0(param_1,uVar5,param_3 + 0x261);
  FUN_18000f890(local_5f8);
  return;
}



/* ===== 180181cd0 FUN_180181cd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180181cd0(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  size_t *psVar1;
  size_t sVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  undefined4 *puVar9;
  undefined8 *_Buf1;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_e8;
  puVar6 = (undefined8 *)FUN_180073a70(&local_a0,param_2,"count");
  puVar14 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar14[3] < 0x10) {
    puVar11 = puVar14;
  }
  else {
    puVar11 = (undefined8 *)*puVar14;
  }
  sVar2 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    _Buf1 = puVar6;
  }
  else {
    _Buf1 = (undefined8 *)*puVar6;
  }
  if ((sVar2 == puVar14[2]) && ((sVar2 == 0 || (iVar5 = memcmp(_Buf1,puVar11,sVar2), iVar5 == 0))))
  {
    FUN_1800f2db0(*param_1,puVar6,param_3);
  }
  FUN_18000f890(&local_a0);
  uVar15 = 1;
  do {
    if (*param_3 <= (int)uVar15) {
      return;
    }
    uVar7 = FUN_18004e4f0(local_60,uVar15);
    if ((ulonglong)param_2[3] < 0x10) {
      puVar14 = param_2;
    }
    else {
      puVar14 = (undefined8 *)*param_2;
    }
    puVar8 = (ulonglong *)FUN_18006b5b0(uVar7,0,puVar14,param_2[2]);
    local_c0 = *puVar8;
    uStack_b8 = puVar8[1];
    local_b0 = puVar8[2];
    uStack_a8 = puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    *(undefined1 *)puVar8 = 0;
    puVar9 = (undefined4 *)FUN_1800134a0(&local_c0,&DAT_1806e6f24,1);
    local_a0 = *puVar9;
    uStack_9c = puVar9[1];
    uStack_98 = puVar9[2];
    uStack_94 = puVar9[3];
    local_90 = puVar9[4];
    uStack_8c = puVar9[5];
    uStack_88 = puVar9[6];
    uStack_84 = puVar9[7];
    *(undefined8 *)(puVar9 + 4) = 0;
    *(undefined8 *)(puVar9 + 6) = 0xf;
    *(undefined1 *)puVar9 = 0;
    if (0xf < uStack_a8) {
      uVar13 = uStack_a8 + 1;
      uVar10 = local_c0;
      if (0xfff < uVar13) {
        uVar10 = *(ulonglong *)(local_c0 - 8);
        if (0x1f < (local_c0 - uVar10) - 8) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          goto LAB_180181fab;
        }
        uVar13 = uStack_a8 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar10,uVar13);
    }
    local_b0 = 0;
    uStack_a8 = 0xf;
    local_c0 = local_c0 & 0xffffffffffffff00;
    FUN_18000f890(local_60);
    puVar6 = (undefined8 *)FUN_180073a70(local_80,&local_a0,&DAT_18058b644);
    puVar14 = (undefined8 *)param_1[1];
    psVar1 = puVar14 + 2;
    if (0xf < (ulonglong)puVar14[3]) {
      puVar14 = (undefined8 *)*puVar14;
    }
    sVar2 = puVar6[2];
    if ((ulonglong)puVar6[3] < 0x10) {
      puVar11 = puVar6;
    }
    else {
      puVar11 = (undefined8 *)*puVar6;
    }
    if ((sVar2 == *psVar1) && ((sVar2 == 0 || (iVar5 = memcmp(puVar11,puVar14,sVar2), iVar5 == 0))))
    {
      FUN_180194430(*param_1,puVar6,param_3 + uVar15 * 0x52 + 1);
    }
    FUN_18000f890(local_80);
    puVar6 = (undefined8 *)FUN_180073a70(local_80,&local_a0,"weapons");
    puVar14 = (undefined8 *)param_1[1];
    psVar1 = puVar14 + 2;
    if (0xf < (ulonglong)puVar14[3]) {
      puVar14 = (undefined8 *)*puVar14;
    }
    sVar2 = puVar6[2];
    if ((ulonglong)puVar6[3] < 0x10) {
      puVar11 = puVar6;
    }
    else {
      puVar11 = (undefined8 *)*puVar6;
    }
    if ((sVar2 == *psVar1) && ((sVar2 == 0 || (iVar5 = memcmp(puVar11,puVar14,sVar2), iVar5 == 0))))
    {
      FUN_1800f2ea0(*param_1,puVar6,param_3 + uVar15 * 0x52 + 0x11);
    }
    FUN_18000f890(local_80);
    uVar10 = CONCAT44(uStack_84,uStack_88);
    if (0xf < uVar10) {
      uVar13 = uVar10 + 1;
      lVar4 = CONCAT44(uStack_9c,local_a0);
      lVar12 = lVar4;
      if (0xfff < uVar13) {
        lVar12 = *(longlong *)(lVar4 + -8);
        if (0x1f < (lVar4 - lVar12) - 8U) {
LAB_180181fab:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar13 = uVar10 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar12,uVar13);
    }
    uVar15 = uVar15 + 1;
    if (0x3f < uVar15) {
      return;
    }
  } while( true );
}



/* ===== 180181fc0 FUN_180181fc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180181fc0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_118;
  puVar5 = (undefined8 *)FUN_180073a70(local_b8,param_2,"hitboxes");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180182049;
    }
    FUN_180151c10(*param_1,puVar5,param_3);
  }
LAB_180182049:
  FUN_18000f890(local_b8);
  puVar5 = (undefined8 *)FUN_180073a70(local_98,param_2,"extrapolation");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801820b6;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 8);
  }
LAB_1801820b6:
  FUN_18000f890(local_98);
  puVar5 = (undefined8 *)FUN_180073a70(local_78,param_2,"hitchance");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_180182126;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0xc);
  }
LAB_180182126:
  FUN_18000f890(local_78);
  uVar6 = FUN_180073a70(local_d8,param_2,"force_shot");
  FUN_18017c1d0(param_1,uVar6,param_3 + 0x10);
  FUN_18000f890(local_d8);
  puVar5 = (undefined8 *)FUN_180073a70(local_d8,param_2,"min_hitchance");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801821c2;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x14);
  }
LAB_1801821c2:
  FUN_18000f890(local_d8);
  puVar5 = (undefined8 *)FUN_180073a70(local_58,param_2,"min_damage");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018222f;
    }
    FUN_1800f2db0(*param_1,puVar5,param_3 + 0x18);
  }
LAB_18018222f:
  FUN_18000f890(local_58);
  uVar6 = FUN_180073a70(local_f8,param_2,"quick_stop");
  FUN_18017c1d0(param_1,uVar6,param_3 + 0x1c);
  FUN_18000f890(local_f8);
  puVar5 = (undefined8 *)FUN_180073a70(local_f8,param_2,"quick_stop_options");
  plVar2 = (longlong *)*plVar1;
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_1801822cb;
    }
    FUN_180151da0(*param_1,puVar5,param_3 + 0x1d);
  }
LAB_1801822cb:
  FUN_18000f890(local_f8);
  uVar6 = FUN_180073a70(local_f8,param_2,"quick_scope");
  FUN_18017c1d0(param_1,uVar6,param_3 + 0x20);
  FUN_18000f890(local_f8);
  return;
}



/* ===== 180182330 FUN_180182330 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180182330(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  size_t sVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  char *pcVar15;
  ulonglong uVar16;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  FUN_180013350(&local_a8,"legitbot.enabled");
  FUN_18017c1d0(param_1,&local_a8,param_2);
  FUN_18000f890(&local_a8);
  FUN_180013350(&local_a8,"legitbot.groups.");
  FUN_180181cd0(param_1,&local_a8,param_2 + 4);
  FUN_18000f890(&local_a8);
  uVar16 = 0;
  do {
    iVar6 = *(int *)(param_2 + 4);
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    if (iVar6 <= (int)uVar16) break;
    uVar7 = FUN_1800ef450(local_68,uVar16 & 0xffffffff);
    uVar7 = FUN_180066ab0(local_88,"legitbot.",uVar7);
    uVar7 = FUN_180042850(&local_a8,uVar7,&DAT_1806e6f24);
    FUN_1801b80e0(param_1,uVar7,param_2 + 21000 + uVar16 * 100,param_2 + 0x6b08 + uVar16 * 0x3c);
    FUN_18000f890(&local_a8);
    FUN_18000f890(local_88);
    FUN_18000f890(local_68);
    uVar16 = uVar16 + 1;
  } while (uVar16 < 0x40);
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  plVar8 = (longlong *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_visualize_1806f74f0._12_4_;
  uVar4 = s_legitbot_visualize_1806f74f0._8_4_;
  uVar3 = s_legitbot_visualize_1806f74f0._4_4_;
  local_98 = 0x12;
  local_90 = 0x1f;
  *(undefined4 *)plVar8 = s_legitbot_visualize_1806f74f0._0_4_;
  *(undefined4 *)((longlong)plVar8 + 4) = uVar3;
  *(undefined4 *)(plVar8 + 1) = uVar4;
  *(undefined4 *)((longlong)plVar8 + 0xc) = uVar5;
  *(undefined2 *)(plVar8 + 2) = s_legitbot_visualize_1806f74f0._16_2_;
  *(undefined1 *)((longlong)plVar8 + 0x12) = 0;
  plVar10 = (longlong *)param_1[1];
  if ((ulonglong)plVar10[3] < 0x10) {
    plVar12 = plVar10;
  }
  else {
    plVar12 = (longlong *)*plVar10;
  }
  local_a8 = plVar8;
  if (plVar10[2] == 0x12) {
    lVar11 = *plVar8 - *plVar12;
    if ((lVar11 == 0) && (lVar11 = plVar8[1] - plVar12[1], lVar11 == 0)) {
      lVar11 = (ulonglong)*(ushort *)(plVar8 + 2) - (ulonglong)*(ushort *)(plVar12 + 2);
    }
    if (lVar11 == 0) {
      lVar11 = *param_1;
      pcVar15 = ",\n";
      if (*(char *)(lVar11 + 0x20) != '\0') {
        pcVar15 = "{\n";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      *(undefined1 *)(lVar11 + 0x20) = 0;
      FUN_1800134a0(lVar11,&DAT_1806f2ad0,3);
      FUN_1800134a0(lVar11,plVar8,0x12);
      FUN_1800134a0(lVar11,&DAT_1806f2b04,3);
      pcVar15 = "false";
      if (*(char *)(param_2 + 0x7a08) != '\0') {
        pcVar15 = "true";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
    }
  }
  if (0xf < local_90) {
    uVar16 = local_90 + 1;
    plVar10 = local_a8;
    if (0xfff < uVar16) {
      plVar10 = (longlong *)local_a8[-1];
      if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar10))) goto LAB_180183827;
      uVar16 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar10,uVar16);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  plVar10 = (longlong *)FUN_18000fb70(0x20);
  local_98 = 0x19;
  local_90 = 0x1f;
  lVar11 = CONCAT71(s_legitbot_visualize_target_1806f7540._9_7_,
                    s_legitbot_visualize_target_1806f7540[8]);
  *plVar10 = s_legitbot_visualize_target_1806f7540._0_8_;
  plVar10[1] = lVar11;
  uVar7 = s_legitbot_visualize_target_1806f7540._17_8_;
  *(ulonglong *)((longlong)plVar10 + 9) =
       CONCAT17(s_legitbot_visualize_target_1806f7540[0x10],
                s_legitbot_visualize_target_1806f7540._9_7_);
  *(undefined8 *)((longlong)plVar10 + 0x11) = uVar7;
  *(char *)((longlong)plVar10 + 0x19) = '\0';
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar14 = puVar1;
  }
  else {
    puVar14 = (undefined8 *)*puVar1;
  }
  local_a8 = plVar10;
  if (puVar1[2] == 0x19) {
    iVar6 = memcmp(plVar10,puVar14,0x19);
    if (iVar6 == 0) {
      lVar11 = *param_1;
      pcVar15 = ",\n";
      if (*(char *)(lVar11 + 0x20) != '\0') {
        pcVar15 = "{\n";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      *(undefined1 *)(lVar11 + 0x20) = 0;
      FUN_1800134a0(lVar11,&DAT_1806f2ad0,3);
      FUN_1800134a0(lVar11,plVar10,0x19);
      FUN_1800134a0(lVar11,&DAT_1806f2b04,3);
      pcVar15 = "false";
      if (*(char *)(param_2 + 0x7a09) != '\0') {
        pcVar15 = "true";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
    }
  }
  FUN_18000f890(&local_a8);
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  plVar10 = (longlong *)FUN_18000fb70(0x20);
  local_98 = 0x15;
  local_90 = 0x1f;
  lVar11 = CONCAT35(s_legitbot_target_color_1806f7560._13_3_,s_legitbot_target_color_1806f7560._8_5_
                   );
  *plVar10 = s_legitbot_target_color_1806f7560._0_8_;
  plVar10[1] = lVar11;
  *(ulonglong *)((longlong)plVar10 + 0xd) =
       CONCAT53(s_legitbot_target_color_1806f7560._16_5_,s_legitbot_target_color_1806f7560._13_3_);
  *(undefined1 *)((longlong)plVar10 + 0x15) = 0;
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar14 = puVar1;
  }
  else {
    puVar14 = (undefined8 *)*puVar1;
  }
  uVar16 = 0x1f;
  local_a8 = plVar10;
  if (puVar1[2] == 0x15) {
    iVar6 = memcmp(plVar10,puVar14,0x15);
    if (iVar6 == 0) {
      FUN_1801944c0(*param_1,&local_a8,param_2 + 0x7a0c);
      plVar10 = local_a8;
      uVar16 = local_90;
    }
  }
  if (0xf < uVar16) {
    uVar13 = uVar16 + 1;
    plVar8 = plVar10;
    if (0xfff < uVar13) {
      plVar8 = (longlong *)plVar10[-1];
      if (0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar8))) goto LAB_180183827;
      uVar13 = uVar16 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar8,uVar13);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  plVar10 = (longlong *)FUN_18000fb70(0x20);
  local_98 = 0x16;
  local_90 = 0x1f;
  lVar11 = CONCAT26(s_legitbot_visualize_fov_1806f7510._14_2_,
                    s_legitbot_visualize_fov_1806f7510._8_6_);
  *plVar10 = s_legitbot_visualize_fov_1806f7510._0_8_;
  plVar10[1] = lVar11;
  *(ulonglong *)((longlong)plVar10 + 0xe) =
       CONCAT62(s_legitbot_visualize_fov_1806f7510._16_6_,s_legitbot_visualize_fov_1806f7510._14_2_)
  ;
  *(undefined1 *)((longlong)plVar10 + 0x16) = 0;
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar14 = puVar1;
  }
  else {
    puVar14 = (undefined8 *)*puVar1;
  }
  uVar16 = 0x1f;
  local_a8 = plVar10;
  if (puVar1[2] == 0x16) {
    iVar6 = memcmp(plVar10,puVar14,0x16);
    if (iVar6 == 0) {
      lVar11 = *param_1;
      pcVar15 = ",\n";
      if (*(char *)(lVar11 + 0x20) != '\0') {
        pcVar15 = "{\n";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      *(undefined1 *)(lVar11 + 0x20) = 0;
      FUN_1800134a0(lVar11,&DAT_1806f2ad0,3);
      FUN_1800134a0(lVar11,plVar10,0x16);
      FUN_1800134a0(lVar11,&DAT_1806f2b04,3);
      pcVar15 = "false";
      if (*(char *)(param_2 + 0x7a1c) != '\0') {
        pcVar15 = "true";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      uVar16 = local_90;
      plVar10 = local_a8;
    }
  }
  if (0xf < uVar16) {
    uVar13 = uVar16 + 1;
    plVar8 = plVar10;
    if (0xfff < uVar13) {
      plVar8 = (longlong *)plVar10[-1];
      if (0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar8))) goto LAB_180183827;
      uVar13 = uVar16 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar8,uVar13);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  local_a8 = (longlong *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_fov_color_1806f7528._12_4_;
  uVar4 = s_legitbot_fov_color_1806f7528._8_4_;
  uVar3 = s_legitbot_fov_color_1806f7528._4_4_;
  local_98 = 0x12;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_fov_color_1806f7528._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  *(undefined2 *)(local_a8 + 2) = s_legitbot_fov_color_1806f7528._16_2_;
  *(undefined1 *)((longlong)local_a8 + 0x12) = 0;
  plVar10 = (longlong *)param_1[1];
  if ((ulonglong)plVar10[3] < 0x10) {
    plVar8 = plVar10;
  }
  else {
    plVar8 = (longlong *)*plVar10;
  }
  if (plVar10[2] == 0x12) {
    lVar11 = *local_a8 - *plVar8;
    if ((lVar11 == 0) && (lVar11 = local_a8[1] - plVar8[1], lVar11 == 0)) {
      lVar11 = (ulonglong)*(ushort *)(local_a8 + 2) - (ulonglong)*(ushort *)(plVar8 + 2);
    }
    if (lVar11 == 0) {
      FUN_1801944c0(*param_1,&local_a8,param_2 + 0x7a20);
    }
  }
  if (0xf < local_90) {
    uVar16 = local_90 + 1;
    plVar10 = local_a8;
    if (0xfff < uVar16) {
      plVar10 = (longlong *)local_a8[-1];
      if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar10))) goto LAB_180183827;
      uVar16 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar10,uVar16);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  plVar10 = (longlong *)FUN_18000fb70(0x20);
  local_98 = 0x1b;
  local_90 = 0x1f;
  lVar11 = CONCAT53(s_legitbot_visualize_hitboxes_1806f75b8._11_5_,
                    s_legitbot_visualize_hitboxes_1806f75b8._8_3_);
  *plVar10 = s_legitbot_visualize_hitboxes_1806f75b8._0_8_;
  plVar10[1] = lVar11;
  uVar7 = s_legitbot_visualize_hitboxes_1806f75b8._19_8_;
  *(ulonglong *)((longlong)plVar10 + 0xb) =
       CONCAT35(s_legitbot_visualize_hitboxes_1806f75b8._16_3_,
                s_legitbot_visualize_hitboxes_1806f75b8._11_5_);
  *(undefined8 *)((longlong)plVar10 + 0x13) = uVar7;
  *(undefined1 *)((longlong)plVar10 + 0x1b) = 0;
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar14 = puVar1;
  }
  else {
    puVar14 = (undefined8 *)*puVar1;
  }
  uVar16 = 0x1f;
  local_a8 = plVar10;
  if (puVar1[2] == 0x1b) {
    iVar6 = memcmp(plVar10,puVar14,0x1b);
    if (iVar6 == 0) {
      lVar11 = *param_1;
      pcVar15 = ",\n";
      if (*(char *)(lVar11 + 0x20) != '\0') {
        pcVar15 = "{\n";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      *(undefined1 *)(lVar11 + 0x20) = 0;
      FUN_1800134a0(lVar11,&DAT_1806f2ad0,3);
      FUN_1800134a0(lVar11,plVar10,0x1b);
      FUN_1800134a0(lVar11,&DAT_1806f2b04,3);
      pcVar15 = "false";
      if (*(char *)(param_2 + 0x7a30) != '\0') {
        pcVar15 = "true";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      uVar16 = local_90;
      plVar10 = local_a8;
    }
  }
  if (0xf < uVar16) {
    uVar13 = uVar16 + 1;
    plVar8 = plVar10;
    if (0xfff < uVar13) {
      plVar8 = (longlong *)plVar10[-1];
      if (0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar8))) goto LAB_180183827;
      uVar13 = uVar16 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar8,uVar13);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  plVar10 = (longlong *)FUN_18000fb70(0x20);
  local_98 = 0x1c;
  local_90 = 0x1f;
  lVar11 = CONCAT44(s_legitbot_high_priority_color_1806f75d8._12_4_,
                    s_legitbot_high_priority_color_1806f75d8._8_4_);
  *plVar10 = s_legitbot_high_priority_color_1806f75d8._0_8_;
  plVar10[1] = lVar11;
  uVar7 = s_legitbot_high_priority_color_1806f75d8._20_8_;
  *(ulonglong *)((longlong)plVar10 + 0xc) =
       CONCAT44(s_legitbot_high_priority_color_1806f75d8._16_4_,
                s_legitbot_high_priority_color_1806f75d8._12_4_);
  *(undefined8 *)((longlong)plVar10 + 0x14) = uVar7;
  *(undefined1 *)((longlong)plVar10 + 0x1c) = 0;
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar14 = puVar1;
  }
  else {
    puVar14 = (undefined8 *)*puVar1;
  }
  uVar16 = 0x1f;
  local_a8 = plVar10;
  if (puVar1[2] == 0x1c) {
    iVar6 = memcmp(plVar10,puVar14,0x1c);
    if (iVar6 == 0) {
      FUN_1801944c0(*param_1,&local_a8,param_2 + 0x7a34);
      plVar10 = local_a8;
      uVar16 = local_90;
    }
  }
  if (0xf < uVar16) {
    uVar13 = uVar16 + 1;
    plVar8 = plVar10;
    if (0xfff < uVar13) {
      plVar8 = (longlong *)plVar10[-1];
      if (0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar8))) goto LAB_180183827;
      uVar13 = uVar16 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar8,uVar13);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  plVar10 = (longlong *)FUN_18000fb70(0x20);
  local_98 = 0x1b;
  local_90 = 0x1f;
  lVar11 = CONCAT53(s_legitbot_low_priority_color_1806f7578._11_5_,
                    s_legitbot_low_priority_color_1806f7578._8_3_);
  *plVar10 = s_legitbot_low_priority_color_1806f7578._0_8_;
  plVar10[1] = lVar11;
  uVar7 = s_legitbot_low_priority_color_1806f7578._19_8_;
  *(ulonglong *)((longlong)plVar10 + 0xb) =
       CONCAT35(s_legitbot_low_priority_color_1806f7578._16_3_,
                s_legitbot_low_priority_color_1806f7578._11_5_);
  *(undefined8 *)((longlong)plVar10 + 0x13) = uVar7;
  *(undefined1 *)((longlong)plVar10 + 0x1b) = 0;
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar14 = puVar1;
  }
  else {
    puVar14 = (undefined8 *)*puVar1;
  }
  uVar16 = 0x1f;
  local_a8 = plVar10;
  if (puVar1[2] == 0x1b) {
    iVar6 = memcmp(plVar10,puVar14,0x1b);
    if (iVar6 == 0) {
      FUN_1801944c0(*param_1,&local_a8,param_2 + 0x7a44);
      plVar10 = local_a8;
      uVar16 = local_90;
    }
  }
  if (0xf < uVar16) {
    uVar13 = uVar16 + 1;
    plVar8 = plVar10;
    if (0xfff < uVar13) {
      plVar8 = (longlong *)plVar10[-1];
      if (0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar8))) goto LAB_180183827;
      uVar13 = uVar16 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar8,uVar13);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  plVar10 = (longlong *)FUN_18000fb70(0x20);
  local_98 = 0x19;
  local_90 = 0x1f;
  lVar11 = CONCAT71(s_legitbot_visualize_recoil_1806f7598._9_7_,
                    s_legitbot_visualize_recoil_1806f7598[8]);
  *plVar10 = s_legitbot_visualize_recoil_1806f7598._0_8_;
  plVar10[1] = lVar11;
  uVar7 = s_legitbot_visualize_recoil_1806f7598._17_8_;
  *(ulonglong *)((longlong)plVar10 + 9) =
       CONCAT17(s_legitbot_visualize_recoil_1806f7598[0x10],
                s_legitbot_visualize_recoil_1806f7598._9_7_);
  *(undefined8 *)((longlong)plVar10 + 0x11) = uVar7;
  *(undefined1 *)((longlong)plVar10 + 0x19) = 0;
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar14 = puVar1;
  }
  else {
    puVar14 = (undefined8 *)*puVar1;
  }
  uVar16 = 0x1f;
  local_a8 = plVar10;
  if (puVar1[2] == 0x19) {
    iVar6 = memcmp(plVar10,puVar14,0x19);
    if (iVar6 == 0) {
      lVar11 = *param_1;
      pcVar15 = ",\n";
      if (*(char *)(lVar11 + 0x20) != '\0') {
        pcVar15 = "{\n";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      *(undefined1 *)(lVar11 + 0x20) = 0;
      FUN_1800134a0(lVar11,&DAT_1806f2ad0,3);
      FUN_1800134a0(lVar11,plVar10,0x19);
      FUN_1800134a0(lVar11,&DAT_1806f2b04,3);
      pcVar15 = "false";
      if (*(char *)(param_2 + 0x7a54) != '\0') {
        pcVar15 = "true";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      uVar16 = local_90;
      plVar10 = local_a8;
    }
  }
  if (0xf < uVar16) {
    uVar13 = uVar16 + 1;
    plVar8 = plVar10;
    if (0xfff < uVar13) {
      plVar8 = (longlong *)plVar10[-1];
      if (0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar8))) goto LAB_180183827;
      uVar13 = uVar16 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar8,uVar13);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  plVar10 = (longlong *)FUN_18000fb70(0x20);
  local_98 = 0x1e;
  local_90 = 0x1f;
  lVar11 = CONCAT26(s_legitbot_recoil_original_color_1806f7630._14_2_,
                    s_legitbot_recoil_original_color_1806f7630._8_6_);
  *plVar10 = s_legitbot_recoil_original_color_1806f7630._0_8_;
  plVar10[1] = lVar11;
  uVar7 = s_legitbot_recoil_original_color_1806f7630._22_8_;
  *(ulonglong *)((longlong)plVar10 + 0xe) =
       CONCAT62(s_legitbot_recoil_original_color_1806f7630._16_6_,
                s_legitbot_recoil_original_color_1806f7630._14_2_);
  *(undefined8 *)((longlong)plVar10 + 0x16) = uVar7;
  *(undefined1 *)((longlong)plVar10 + 0x1e) = 0;
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar14 = puVar1;
  }
  else {
    puVar14 = (undefined8 *)*puVar1;
  }
  uVar16 = 0x1f;
  local_a8 = plVar10;
  if (puVar1[2] == 0x1e) {
    iVar6 = memcmp(plVar10,puVar14,0x1e);
    if (iVar6 == 0) {
      FUN_1801944c0(*param_1,&local_a8,param_2 + 0x7a58);
      plVar10 = local_a8;
      uVar16 = local_90;
    }
  }
  if (0xf < uVar16) {
    uVar13 = uVar16 + 1;
    plVar8 = plVar10;
    if (0xfff < uVar13) {
      plVar8 = (longlong *)plVar10[-1];
      if (0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar8))) goto LAB_180183827;
      uVar13 = uVar16 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar8,uVar13);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  plVar10 = (longlong *)FUN_18000fb70(0x30);
  uVar7 = s_legitbot_recoil_compensated_colo_1806f7650._8_8_;
  local_98 = 0x21;
  local_90 = 0x2f;
  *plVar10 = s_legitbot_recoil_compensated_colo_1806f7650._0_8_;
  plVar10[1] = uVar7;
  uVar7 = s_legitbot_recoil_compensated_colo_1806f7650._24_8_;
  plVar10[2] = s_legitbot_recoil_compensated_colo_1806f7650._16_8_;
  plVar10[3] = uVar7;
  *(char *)(plVar10 + 4) = s_legitbot_recoil_compensated_colo_1806f7650[0x20];
  *(undefined1 *)((longlong)plVar10 + 0x21) = 0;
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar14 = puVar1;
  }
  else {
    puVar14 = (undefined8 *)*puVar1;
  }
  uVar16 = 0x2f;
  local_a8 = plVar10;
  if (puVar1[2] == 0x21) {
    iVar6 = memcmp(plVar10,puVar14,0x21);
    if (iVar6 == 0) {
      FUN_1801944c0(*param_1,&local_a8,param_2 + 0x7a68);
      plVar10 = local_a8;
      uVar16 = local_90;
    }
  }
  if (0xf < uVar16) {
    uVar13 = uVar16 + 1;
    plVar8 = plVar10;
    if (0xfff < uVar13) {
      plVar8 = (longlong *)plVar10[-1];
      if (0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar8))) goto LAB_180183827;
      uVar13 = uVar16 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar8,uVar13);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  plVar10 = (longlong *)FUN_18000fb70(0x20);
  local_98 = 0x1b;
  local_90 = 0x1f;
  lVar11 = CONCAT53(s_legitbot_visualize_velocity_1806f75f8._11_5_,
                    s_legitbot_visualize_velocity_1806f75f8._8_3_);
  *plVar10 = s_legitbot_visualize_velocity_1806f75f8._0_8_;
  plVar10[1] = lVar11;
  uVar7 = s_legitbot_visualize_velocity_1806f75f8._19_8_;
  *(ulonglong *)((longlong)plVar10 + 0xb) =
       CONCAT35(s_legitbot_visualize_velocity_1806f75f8._16_3_,
                s_legitbot_visualize_velocity_1806f75f8._11_5_);
  *(undefined8 *)((longlong)plVar10 + 0x13) = uVar7;
  *(undefined1 *)((longlong)plVar10 + 0x1b) = 0;
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar14 = puVar1;
  }
  else {
    puVar14 = (undefined8 *)*puVar1;
  }
  uVar16 = 0x1f;
  local_a8 = plVar10;
  if (puVar1[2] == 0x1b) {
    iVar6 = memcmp(plVar10,puVar14,0x1b);
    if (iVar6 == 0) {
      lVar11 = *param_1;
      pcVar15 = ",\n";
      if (*(char *)(lVar11 + 0x20) != '\0') {
        pcVar15 = "{\n";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      *(undefined1 *)(lVar11 + 0x20) = 0;
      FUN_1800134a0(lVar11,&DAT_1806f2ad0,3);
      FUN_1800134a0(lVar11,plVar10,0x1b);
      FUN_1800134a0(lVar11,&DAT_1806f2b04,3);
      pcVar15 = "false";
      if (*(char *)(param_2 + 0x7a78) != '\0') {
        pcVar15 = "true";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      uVar16 = local_90;
      plVar10 = local_a8;
    }
  }
  if (0xf < uVar16) {
    uVar13 = uVar16 + 1;
    plVar8 = plVar10;
    if (0xfff < uVar13) {
      plVar8 = (longlong *)plVar10[-1];
      if (0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar8))) goto LAB_180183827;
      uVar13 = uVar16 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar8,uVar13);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  plVar10 = (longlong *)FUN_18000fb70(0x20);
  local_98 = 0x17;
  local_90 = 0x1f;
  lVar11 = CONCAT17(s_legitbot_velocity_speed_1806f7618[0xf],
                    s_legitbot_velocity_speed_1806f7618._8_7_);
  *plVar10 = s_legitbot_velocity_speed_1806f7618._0_8_;
  plVar10[1] = lVar11;
  *(ulonglong *)((longlong)plVar10 + 0xf) =
       CONCAT71(s_legitbot_velocity_speed_1806f7618._16_7_,s_legitbot_velocity_speed_1806f7618[0xf])
  ;
  *(undefined1 *)((longlong)plVar10 + 0x17) = 0;
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar14 = puVar1;
  }
  else {
    puVar14 = (undefined8 *)*puVar1;
  }
  uVar16 = 0x1f;
  local_a8 = plVar10;
  if (puVar1[2] == 0x17) {
    iVar6 = memcmp(plVar10,puVar14,0x17);
    if (iVar6 == 0) {
      lVar11 = *param_1;
      pcVar15 = ",\n";
      if (*(char *)(lVar11 + 0x20) != '\0') {
        pcVar15 = "{\n";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      *(undefined1 *)(lVar11 + 0x20) = 0;
      FUN_1800134a0(lVar11,&DAT_1806f2ad0,3);
      FUN_1800134a0(lVar11,plVar10,0x17);
      FUN_1800134a0(lVar11,&DAT_1806f2b04,3);
      pcVar15 = "false";
      if (*(char *)(param_2 + 0x7a79) != '\0') {
        pcVar15 = "true";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      uVar16 = local_90;
      plVar10 = local_a8;
    }
  }
  if (0xf < uVar16) {
    uVar13 = uVar16 + 1;
    plVar8 = plVar10;
    if (0xfff < uVar13) {
      plVar8 = (longlong *)plVar10[-1];
      if (0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar8))) goto LAB_180183827;
      uVar13 = uVar16 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar8,uVar13);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  local_a8 = (longlong *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_speed_color_1806f76b0._12_4_;
  uVar4 = s_legitbot_speed_color_1806f76b0._8_4_;
  uVar3 = s_legitbot_speed_color_1806f76b0._4_4_;
  local_98 = 0x14;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_speed_color_1806f76b0._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  *(undefined4 *)(local_a8 + 2) = s_legitbot_speed_color_1806f76b0._16_4_;
  *(undefined1 *)((longlong)local_a8 + 0x14) = 0;
  plVar10 = (longlong *)param_1[1];
  if ((ulonglong)plVar10[3] < 0x10) {
    plVar8 = plVar10;
  }
  else {
    plVar8 = (longlong *)*plVar10;
  }
  if (plVar10[2] == 0x14) {
    lVar11 = *local_a8 - *plVar8;
    if ((lVar11 == 0) && (lVar11 = local_a8[1] - plVar8[1], lVar11 == 0)) {
      lVar11 = (ulonglong)*(uint *)(local_a8 + 2) - (ulonglong)*(uint *)(plVar8 + 2);
    }
    if (lVar11 == 0) {
      FUN_1801944c0(*param_1,&local_a8,param_2 + 0x7a7c);
    }
  }
  if (0xf < local_90) {
    FUN_18000fad0(&local_a8,local_a8);
  }
  FUN_180013350(&local_a8,"legitbot.velocity_jump");
  FUN_18017c1d0(param_1,&local_a8,param_2 + 0x7a8c);
  FUN_18000f890(&local_a8);
  FUN_180013350(&local_a8,"legitbot.jump_color");
  FUN_18017ee50(param_1,&local_a8,param_2 + 0x7a90);
  FUN_18000f890(&local_a8);
  FUN_180013350(&local_a8,"legitbot.velocity_ground");
  FUN_18017c1d0(param_1,&local_a8,param_2 + 0x7aa0);
  FUN_18000f890(&local_a8);
  FUN_180013350(&local_a8,"legitbot.ground_color");
  FUN_18017ee50(param_1,&local_a8,param_2 + 0x7aa4);
  FUN_18000f890(&local_a8);
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  plVar10 = (longlong *)FUN_18000fb70(0x20);
  local_98 = 0x1a;
  local_90 = 0x1f;
  lVar11 = CONCAT62(s_legitbot_automatic_weapons_1806f7740._10_6_,
                    s_legitbot_automatic_weapons_1806f7740._8_2_);
  *plVar10 = s_legitbot_automatic_weapons_1806f7740._0_8_;
  plVar10[1] = lVar11;
  uVar7 = s_legitbot_automatic_weapons_1806f7740._18_8_;
  *(ulonglong *)((longlong)plVar10 + 10) =
       CONCAT26(s_legitbot_automatic_weapons_1806f7740._16_2_,
                s_legitbot_automatic_weapons_1806f7740._10_6_);
  *(undefined8 *)((longlong)plVar10 + 0x12) = uVar7;
  *(undefined1 *)((longlong)plVar10 + 0x1a) = 0;
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar14 = puVar1;
  }
  else {
    puVar14 = (undefined8 *)*puVar1;
  }
  uVar16 = 0x1f;
  local_a8 = plVar10;
  if (puVar1[2] == 0x1a) {
    iVar6 = memcmp(plVar10,puVar14,0x1a);
    if (iVar6 == 0) {
      lVar11 = *param_1;
      pcVar15 = ",\n";
      if (*(char *)(lVar11 + 0x20) != '\0') {
        pcVar15 = "{\n";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      *(undefined1 *)(lVar11 + 0x20) = 0;
      FUN_1800134a0(lVar11,&DAT_1806f2ad0,3);
      FUN_1800134a0(lVar11,plVar10,0x1a);
      FUN_1800134a0(lVar11,&DAT_1806f2b04,3);
      pcVar15 = "false";
      if (*(char *)(param_2 + 0x7ab4) != '\0') {
        pcVar15 = "true";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      uVar16 = local_90;
      plVar10 = local_a8;
    }
  }
  if (0xf < uVar16) {
    uVar13 = uVar16 + 1;
    plVar8 = plVar10;
    if (0xfff < uVar13) {
      plVar8 = (longlong *)plVar10[-1];
      if (0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar8))) goto LAB_180183827;
      uVar13 = uVar16 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar8,uVar13);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  plVar10 = (longlong *)FUN_18000fb70(0x30);
  uVar7 = s_legitbot_automatic_weapons_inter_1806f76e0._8_8_;
  local_98 = 0x23;
  local_90 = 0x2f;
  *plVar10 = s_legitbot_automatic_weapons_inter_1806f76e0._0_8_;
  plVar10[1] = uVar7;
  lVar11 = CONCAT17(s_legitbot_automatic_weapons_inter_1806f76e0[0x1f],
                    s_legitbot_automatic_weapons_inter_1806f76e0._24_7_);
  plVar10[2] = s_legitbot_automatic_weapons_inter_1806f76e0._16_8_;
  plVar10[3] = lVar11;
  *(undefined4 *)((longlong)plVar10 + 0x1f) = s_legitbot_automatic_weapons_inter_1806f76e0._31_4_;
  *(undefined1 *)((longlong)plVar10 + 0x23) = 0;
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar14 = puVar1;
  }
  else {
    puVar14 = (undefined8 *)*puVar1;
  }
  uVar16 = 0x2f;
  local_a8 = plVar10;
  if (puVar1[2] == 0x23) {
    iVar6 = memcmp(plVar10,puVar14,0x23);
    if (iVar6 == 0) {
      FUN_1800f2db0(*param_1,&local_a8,param_2 + 0x7ab8);
      plVar10 = local_a8;
      uVar16 = local_90;
    }
  }
  if (0xf < uVar16) {
    uVar13 = uVar16 + 1;
    plVar8 = plVar10;
    if (0xfff < uVar13) {
      plVar8 = (longlong *)plVar10[-1];
      if (0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar8))) goto LAB_180183827;
      uVar13 = uVar16 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar8,uVar13);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  plVar10 = (longlong *)FUN_18000fb70(0x20);
  local_98 = 0x1a;
  local_90 = 0x1f;
  lVar11 = CONCAT62(s_legitbot_standalone_recoil_1806f7708._10_6_,
                    s_legitbot_standalone_recoil_1806f7708._8_2_);
  *plVar10 = s_legitbot_standalone_recoil_1806f7708._0_8_;
  plVar10[1] = lVar11;
  uVar7 = s_legitbot_standalone_recoil_1806f7708._18_8_;
  *(ulonglong *)((longlong)plVar10 + 10) =
       CONCAT26(s_legitbot_standalone_recoil_1806f7708._16_2_,
                s_legitbot_standalone_recoil_1806f7708._10_6_);
  *(undefined8 *)((longlong)plVar10 + 0x12) = uVar7;
  *(undefined1 *)((longlong)plVar10 + 0x1a) = 0;
  puVar1 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar14 = puVar1;
  }
  else {
    puVar14 = (undefined8 *)*puVar1;
  }
  uVar16 = 0x1f;
  local_a8 = plVar10;
  if (puVar1[2] == 0x1a) {
    iVar6 = memcmp(plVar10,puVar14,0x1a);
    if (iVar6 == 0) {
      lVar11 = *param_1;
      pcVar15 = ",\n";
      if (*(char *)(lVar11 + 0x20) != '\0') {
        pcVar15 = "{\n";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      *(undefined1 *)(lVar11 + 0x20) = 0;
      FUN_1800134a0(lVar11,&DAT_1806f2ad0,3);
      FUN_1800134a0(lVar11,plVar10,0x1a);
      FUN_1800134a0(lVar11,&DAT_1806f2b04,3);
      pcVar15 = "false";
      if (*(char *)(param_2 + 0x7abc) != '\0') {
        pcVar15 = "true";
      }
      sVar9 = strlen(pcVar15);
      FUN_1800134a0(lVar11,pcVar15,sVar9);
      uVar16 = local_90;
      plVar10 = local_a8;
    }
  }
  if (0xf < uVar16) {
    uVar13 = uVar16 + 1;
    plVar8 = plVar10;
    if (0xfff < uVar13) {
      plVar8 = (longlong *)plVar10[-1];
      if (0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar8))) goto LAB_180183827;
      uVar13 = uVar16 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar8,uVar13);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  local_a8 = (longlong *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_standalone__1806f7788._12_4_;
  uVar4 = s_legitbot_standalone__1806f7788._8_4_;
  uVar3 = s_legitbot_standalone__1806f7788._4_4_;
  local_98 = 0x14;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_standalone__1806f7788._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  *(undefined4 *)(local_a8 + 2) = s_legitbot_standalone__1806f7788._16_4_;
  *(undefined1 *)((longlong)local_a8 + 0x14) = 0;
  FUN_1801b8ee0(param_1,&local_a8,param_2 + 0x7ac0);
  if (0xf < local_90) {
    uVar16 = local_90 + 1;
    plVar10 = local_a8;
    if (0xfff < uVar16) {
      plVar10 = (longlong *)local_a8[-1];
      if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar10))) goto LAB_180183827;
      uVar16 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar10,uVar16);
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  local_a8 = (longlong *)FUN_18000fb70(0x20);
  uVar5 = s_legitbot_randomize_1806f77a0._12_4_;
  uVar4 = s_legitbot_randomize_1806f77a0._8_4_;
  uVar3 = s_legitbot_randomize_1806f77a0._4_4_;
  local_98 = 0x12;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_randomize_1806f77a0._0_4_;
  *(undefined4 *)((longlong)local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 1) = uVar4;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uVar5;
  *(undefined2 *)(local_a8 + 2) = s_legitbot_randomize_1806f77a0._16_2_;
  *(undefined1 *)((longlong)local_a8 + 0x12) = 0;
  plVar10 = (longlong *)param_1[1];
  if ((ulonglong)plVar10[3] < 0x10) {
    plVar8 = plVar10;
  }
  else {
    plVar8 = (longlong *)*plVar10;
  }
  if (plVar10[2] == 0x12) {
    lVar11 = *local_a8 - *plVar8;
    if ((lVar11 == 0) && (lVar11 = local_a8[1] - plVar8[1], lVar11 == 0)) {
      lVar11 = (ulonglong)*(ushort *)(local_a8 + 2) - (ulonglong)*(ushort *)(plVar8 + 2);
    }
    if (lVar11 == 0) {
      FUN_1800f2db0(*param_1,&local_a8,param_2 + 0x7ad4);
    }
  }
  if (0xf < local_90) {
    uVar16 = local_90 + 1;
    plVar10 = local_a8;
    if (0xfff < uVar16) {
      plVar10 = (longlong *)local_a8[-1];
      if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar10))) {
LAB_180183827:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar16 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(plVar10,uVar16);
  }
  return;
}



/* ===== 180183830 FUN_180183830 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180183830(undefined8 *param_1,longlong param_2)

{
  size_t *psVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  char *pcVar15;
  undefined1 auStack_1c8 [40];
  char *local_1a0 [4];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  char *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [32];
  char *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong uStack_e8;
  char *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  FUN_180013350(local_120,"visuals_world.view.");
  uVar7 = FUN_180073a70(local_1a0,local_120,"override_fov");
  FUN_18017c1d0(param_1,uVar7,param_2);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,&DAT_1806e0e18);
  FUN_18017bfd0(param_1,uVar7,param_2 + 4);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"override_aspect");
  FUN_18017c1d0(param_1,uVar7,param_2 + 8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"aspect_scaling");
  FUN_18017bfd0(param_1,uVar7,param_2 + 0xc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"aspect_value");
  FUN_18017bfd0(param_1,uVar7,param_2 + 0x10);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"disable_landing_bob");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x14);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"scope_override_fov");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x15);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"scope_x1");
  FUN_18017bfd0(param_1,uVar7,param_2 + 0x18);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"scope_x2");
  FUN_18017bfd0(param_1,uVar7,param_2 + 0x1c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"instant_scope");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x20);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"show_viewmodel");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x21);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"force_viewmodel_fov");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x22);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"vm_override_fov");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x23);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"vm_fov");
  FUN_18017bfd0(param_1,uVar7,param_2 + 0x24);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"vm_override_position");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x28);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,&DAT_1806f78b0);
  FUN_18017c270(param_1,uVar7,param_2 + 0x2c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,&DAT_1806f7884);
  FUN_18017c270(param_1,uVar7,param_2 + 0x30);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,&DAT_1806f788c);
  FUN_18017c270(param_1,uVar7,param_2 + 0x34);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"vm_override_angles");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x38);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"vm_pitch");
  FUN_18017c270(param_1,uVar7,param_2 + 0x3c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"vm_yaw");
  FUN_18017c270(param_1,uVar7,param_2 + 0x40);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"vm_roll");
  FUN_18017c270(param_1,uVar7,param_2 + 0x44);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"vm_override_modifiers");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x48);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"vm_bobbing");
  FUN_18017bfd0(param_1,uVar7,param_2 + 0x4c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"vm_rotation_sway");
  FUN_18017bfd0(param_1,uVar7,param_2 + 0x50);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"vm_velocity_sway");
  FUN_18017bfd0(param_1,uVar7,param_2 + 0x54);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"vm_in_air_offset");
  FUN_18017bfd0(param_1,uVar7,param_2 + 0x58);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"vm_lower_weapon");
  FUN_18017bfd0(param_1,uVar7,param_2 + 0x5c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"vm_ladder_bob");
  FUN_18017bfd0(param_1,uVar7,param_2 + 0x60);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"force_third_person");
  FUN_18017c1d0(param_1,uVar7,param_2 + 100);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"third_person_disablers");
  FUN_18017ebd0(param_1,uVar7,param_2 + 0x65);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"third_person_distance");
  FUN_18017bfd0(param_1,uVar7,param_2 + 0x68);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"disable_overhead");
  FUN_18017ebd0(param_1,uVar7,param_2 + 0x6c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"unlock_spectating");
  FUN_18017ebd0(param_1,uVar7,param_2 + 0x6e);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_120,"visual_recoil");
  FUN_18017ed50(param_1,uVar7,param_2 + 0x70);
  FUN_18000f890(local_1a0);
  FUN_180013350(local_180,"visuals_world.esp.");
  uVar7 = FUN_180073a70(local_1a0,local_180,&DAT_18058b61c);
  FUN_1801b9110(param_1,uVar7,param_2 + 0x74);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"bomb_defused");
  FUN_18017ee50(param_1,uVar7,param_2 + 0xa8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"defuser");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0xb8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"defuser_in_time");
  FUN_18017ee50(param_1,uVar7,param_2 + 0xbc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"defuser_too_late");
  FUN_18017ee50(param_1,uVar7,param_2 + 0xcc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"damage_low");
  FUN_18017ee50(param_1,uVar7,param_2 + 0xdc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"damage_high");
  FUN_18017ee50(param_1,uVar7,param_2 + 0xec);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"bomb_colorize_effects");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0xfc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"bomb_explosion");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x100);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"bomb_light");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x110);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"weapons");
  FUN_1801b9110(param_1,uVar7,param_2 + 0x120);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"weapons_colorize_effects");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x154);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"weapon_effect");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x158);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"impact_effect");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x168);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"hostages");
  FUN_1801b9110(param_1,uVar7,param_2 + 0x178);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"grenades");
  FUN_1801b9110(param_1,uVar7,param_2 + 0x1ac);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"grenade_lethal");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x1e0);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"grenade_utility");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x1f0);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"item_exponent");
  FUN_18017bfd0(param_1,uVar7,param_2 + 0x200);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"item_thickness");
  FUN_18017c270(param_1,uVar7,param_2 + 0x204);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"item_points_thickness");
  FUN_18017c270(param_1,uVar7,param_2 + 0x208);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"item_shimmer");
  FUN_18017bfd0(param_1,uVar7,param_2 + 0x20c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"smoke_radius");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x210);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"smoke_radius_color");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x214);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"smoke_options");
  FUN_1801b93d0(param_1,uVar7,param_2 + 0x224);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"inferno_radius");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x238);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"inferno_lethal");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x23c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"inferno_safe");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x24c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"inferno_options");
  FUN_1801b93d0(param_1,uVar7,param_2 + 0x25c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"projectile_inferno");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x270);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"projectile_lethal");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x274);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"projectile_safe");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x284);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"colorize_smoke");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x294);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"smoke_ct");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x298);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"smoke_t");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x2a8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"colorize_molotov");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x2b8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"molotov_lethal");
  FUN_18017ee50(param_1,uVar7,param_2 + 700);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"molotov_safe");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x2cc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"disable_inferno_decals");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x2dc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"colorize_explosion");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x2dd);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"explosion_color");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x2e0);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"effects");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x2f0);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"effects_color");
  FUN_18017ee50(param_1,uVar7,param_2 + 0x2f4);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"effects_items");
  FUN_18017eed0(param_1,uVar7,param_2 + 0x304);
  FUN_18000f890(local_1a0);
  uVar14 = 0;
  do {
    uVar7 = FUN_18004e4f0(&local_a0,uVar14);
    uVar8 = FUN_180073a70(&local_80,local_180,"effects_item_color");
    puVar9 = (undefined8 *)FUN_180066820(local_1a0,uVar8,uVar7);
    puVar11 = (undefined8 *)param_1[1];
    psVar1 = puVar11 + 2;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    sVar10 = puVar9[2];
    if ((ulonglong)puVar9[3] < 0x10) {
      puVar12 = puVar9;
    }
    else {
      puVar12 = (undefined8 *)*puVar9;
    }
    if (sVar10 == *psVar1) {
      if (sVar10 != 0) {
        iVar6 = memcmp(puVar12,puVar11,sVar10);
        if (iVar6 != 0) goto LAB_180184898;
      }
      FUN_1801944c0(*param_1,puVar9,uVar14 * 0x10 + param_2 + 0x30c);
    }
LAB_180184898:
    FUN_18000f890(local_1a0);
    FUN_18000f890(&local_80);
    FUN_18000f890(&local_a0);
    uVar14 = uVar14 + 1;
  } while (uVar14 < 5);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"effects_item_inherit");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180184929;
    }
    FUN_180151e90(*param_1,puVar9,param_2 + 0x35c);
  }
LAB_180184929:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"trajectory");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x361);
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"trajectory_base");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801849cd;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x364);
  }
LAB_1801849cd:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"trajectory_hit");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180184a3d;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x374);
  }
LAB_180184a3d:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"trajectory_team_damage");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180184aad;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 900);
  }
LAB_180184aad:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"trajectory_exponent");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180184b1d;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x394);
  }
LAB_180184b1d:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"trajectory_thickness");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180184b8d;
    }
    FUN_1800f2e20(*param_1,puVar9,param_2 + 0x398);
  }
LAB_180184b8d:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"trajectory_points_thickness");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180184bfd;
    }
    FUN_1800f2e20(*param_1,puVar9,param_2 + 0x39c);
  }
LAB_180184bfd:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"trajectory_shimmer");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180184c6d;
    }
    FUN_1801940a0(*param_1,puVar9,param_2 + 0x3a0);
  }
LAB_180184c6d:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"trajectory_shimmer_strength");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180184cdd;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x3a4);
  }
LAB_180184cdd:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"trajectory_thrown");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x3a8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"trajectory_pin_pulled_only");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x3a9);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"trajectory_precise");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x3aa);
  FUN_18000f890(local_1a0);
  local_140 = (char *)0x0;
  uStack_138 = 0;
  local_140 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_hud__1806f7df8._12_4_;
  uVar4 = s_visuals_world_hud__1806f7df8._8_4_;
  uVar3 = s_visuals_world_hud__1806f7df8._4_4_;
  local_130 = 0x12;
  local_128 = 0x1f;
  *(undefined4 *)local_140 = s_visuals_world_hud__1806f7df8._0_4_;
  *(undefined4 *)(local_140 + 4) = uVar3;
  *(undefined4 *)(local_140 + 8) = uVar4;
  *(undefined4 *)(local_140 + 0xc) = uVar5;
  *(undefined2 *)(local_140 + 0x10) = s_visuals_world_hud__1806f7df8._16_2_;
  local_140[0x12] = '\0';
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"radar");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180184e26;
    }
    FUN_180194310(*param_1,puVar9,param_2 + 0x3ac);
  }
LAB_180184e26:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_overlay");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180184e95;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x3b0);
  }
LAB_180184e95:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_color_mode");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180184f04;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x3b4);
  }
LAB_180184f04:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_color");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180184f73;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x3b8);
  }
LAB_180184f73:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_outer");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180184fe2;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x3c8);
  }
LAB_180184fe2:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_inner");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180185051;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x3d8);
  }
LAB_180185051:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_selection");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801850c0;
    }
    FUN_180194310(*param_1,puVar9,param_2 + 1000);
  }
LAB_1801850c0:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_rotation");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018512f;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x3ec);
  }
LAB_18018512f:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_offset");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018519e;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x3f0);
  }
LAB_18018519e:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_size");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018520d;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x3f4);
  }
LAB_18018520d:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_aspect");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018527c;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x3f8);
  }
LAB_18018527c:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_spread_scale");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801852eb;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x3fc);
  }
LAB_1801852eb:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scope_glow");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x400);
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_glow_color");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018538d;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x404);
  }
LAB_18018538d:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"inaccuracy");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x414);
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"inaccuracy_color");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018542f;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x418);
  }
LAB_18018542f:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_follow_recoil");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x428);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_only_in_scope");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x429);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_invert_fade");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x42a);
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"inaccuracy_fade_offset");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180185537;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x42c);
  }
LAB_180185537:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"preserve_notices");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801855a6;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x430);
  }
LAB_1801855a6:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"hide_teammate_assists");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x434);
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scoreboard_opacity");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180185648;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x438);
  }
LAB_180185648:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scoreboard_width");
  FUN_18017bfd0(param_1,uVar7,param_2 + 0x43c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"reveal_money");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x440);
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"reveal_ranks");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180185749;
    }
    uVar7 = *param_1;
    FUN_1800f2cb0(uVar7,puVar9);
    pcVar15 = "false";
    if (*(char *)(param_2 + 0x441) != '\0') {
      pcVar15 = "true";
    }
    sVar10 = strlen(pcVar15);
    FUN_1800134a0(uVar7,pcVar15,sVar10);
  }
LAB_180185749:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"equipment");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801857b8;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x444);
  }
LAB_1801857b8:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"equipment_items");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180185827;
    }
    FUN_1801bf400(*param_1,puVar9,param_2 + 0x448);
  }
LAB_180185827:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"force_sniper_crosshair");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x451);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"force_while_scoped");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x452);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"force_while_c4");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x453);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"hide_while_knife");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x454);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"hide_while_grenade");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x455);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"penetration");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x456);
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"penetration_base");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801859c8;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x458);
  }
LAB_1801859c8:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"penetration_penetrable");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180185a37;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x468);
  }
LAB_180185a37:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"penetration_target");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180185aa6;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x478);
  }
LAB_180185aa6:
  FUN_18000f890(local_1a0);
  local_e0 = (char *)0x0;
  uStack_d8 = 0;
  local_e0 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_removals__1806f8148._12_4_;
  uVar4 = s_visuals_world_removals__1806f8148._8_4_;
  uVar3 = s_visuals_world_removals__1806f8148._4_4_;
  local_d0 = 0x17;
  local_c8 = 0x1f;
  *(undefined4 *)local_e0 = s_visuals_world_removals__1806f8148._0_4_;
  *(undefined4 *)(local_e0 + 4) = uVar3;
  *(undefined4 *)(local_e0 + 8) = uVar4;
  *(undefined4 *)(local_e0 + 0xc) = uVar5;
  *(ulonglong *)(local_e0 + 0xf) =
       CONCAT71(s_visuals_world_removals__1806f8148._16_7_,s_visuals_world_removals__1806f8148[0xf])
  ;
  local_e0[0x17] = '\0';
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"team_intro");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x488);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"panorama_dots");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x489);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"bottom_gradient");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x48a);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"damage_indicator");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x48b);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"server_ads");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x48c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"flashbang");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x48d);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,&DAT_1806e7598);
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x48e);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,&DAT_1806f816c);
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x48f);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"carried_hostage");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x490);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"post_processing");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x491);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"water");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x492);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"blood");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x493);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"decals");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x494);
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_e0,"ragdolls");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180185dec;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x498);
  }
LAB_180185dec:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_e0,"gravity");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180185e5b;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x49c);
  }
LAB_180185e5b:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_e0,"friction");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180185eca;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x4a0);
  }
LAB_180185eca:
  FUN_18000f890(local_1a0);
  local_a0 = (char *)0x0;
  uStack_98 = 0;
  local_a0 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_hitmarker__1806f81f8._12_4_;
  uVar4 = s_visuals_world_hitmarker__1806f81f8._8_4_;
  uVar3 = s_visuals_world_hitmarker__1806f81f8._4_4_;
  local_90 = 0x18;
  local_88 = 0x1f;
  *(undefined4 *)local_a0 = s_visuals_world_hitmarker__1806f81f8._0_4_;
  *(undefined4 *)(local_a0 + 4) = uVar3;
  *(undefined4 *)(local_a0 + 8) = uVar4;
  *(undefined4 *)(local_a0 + 0xc) = uVar5;
  *(undefined8 *)(local_a0 + 0x10) = s_visuals_world_hitmarker__1806f81f8._16_8_;
  local_a0[0x18] = '\0';
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"marker_2d");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x4a4);
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_a0,"color_2d");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180185fac;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x4a8);
  }
LAB_180185fac:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_a0,"duration_2d");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018601b;
    }
    FUN_1800f2e20(*param_1,puVar9,param_2 + 0x4b8);
  }
LAB_18018601b:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"marker_3d");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x4bc);
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_a0,"color_3d");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801860bd;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x4c0);
  }
LAB_1801860bd:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_a0,"duration_3d");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018612c;
    }
    FUN_1800f2e20(*param_1,puVar9,param_2 + 0x4d0);
  }
LAB_18018612c:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"damage");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x4d4);
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_a0,"color_damage");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801861ce;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x4d8);
  }
LAB_1801861ce:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_a0,"duration_damage");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018623d;
    }
    FUN_1800f2e20(*param_1,puVar9,param_2 + 0x4e8);
  }
LAB_18018623d:
  FUN_18000f890(local_1a0);
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_c0 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_tracers__1806f8290._8_4_;
  uVar4 = s_visuals_world_tracers__1806f8290._4_4_;
  local_b0 = 0x16;
  local_a8 = 0x1f;
  uVar3 = CONCAT22(s_visuals_world_tracers__1806f8290._14_2_,
                   s_visuals_world_tracers__1806f8290._12_2_);
  *(undefined4 *)local_c0 = s_visuals_world_tracers__1806f8290._0_4_;
  *(undefined4 *)(local_c0 + 4) = uVar4;
  *(undefined4 *)(local_c0 + 8) = uVar5;
  *(undefined4 *)(local_c0 + 0xc) = uVar3;
  *(ulonglong *)(local_c0 + 0xe) =
       CONCAT62(s_visuals_world_tracers__1806f8290._16_6_,s_visuals_world_tracers__1806f8290._14_2_)
  ;
  local_c0[0x16] = '\0';
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"enemies");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x4ec);
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_c0,"enemies_color");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186322;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x4f0);
  }
LAB_180186322:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_c0,"enemies_duration");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186391;
    }
    FUN_1800f2e20(*param_1,puVar9,param_2 + 0x500);
  }
LAB_180186391:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"teammates");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x504);
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_c0,"teammates_color");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186436;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x508);
  }
LAB_180186436:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_c0,"teammates_duration");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801864a5;
    }
    FUN_1800f2e20(*param_1,puVar9,param_2 + 0x518);
  }
LAB_1801864a5:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"local");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x51c);
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_c0,"local_color");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018654a;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x520);
  }
LAB_18018654a:
  FUN_18000f890(local_1a0);
  puVar9 = (undefined8 *)FUN_180073a70(local_1a0,&local_c0,"local_duration");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801865b9;
    }
    FUN_1800f2e20(*param_1,puVar9,param_2 + 0x530);
  }
LAB_1801865b9:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"shared");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x534);
  FUN_18000f890(local_1a0);
  local_1a0[0] = "enemies";
  local_1a0[1] = "teammates";
  local_1a0[2] = "local";
  local_1a0[3] = "shared";
  uVar14 = 0;
  do {
    pcVar15 = local_1a0[uVar14];
    uVar7 = FUN_180073a70(local_60,&local_c0,"style_");
    sVar10 = strlen(pcVar15);
    puVar11 = (undefined8 *)FUN_1800134a0(uVar7,pcVar15,sVar10);
    local_80 = *puVar11;
    uStack_78 = puVar11[1];
    local_70 = puVar11[2];
    uStack_68 = puVar11[3];
    puVar11[2] = 0;
    puVar11[3] = 0xf;
    *(undefined1 *)puVar11 = 0;
    puVar11 = (undefined8 *)FUN_1800134a0(&local_80,&DAT_1806e6f24,1);
    local_100 = (char *)*puVar11;
    uStack_f8 = puVar11[1];
    local_f0 = puVar11[2];
    uStack_e8 = puVar11[3];
    puVar11[2] = 0;
    puVar11[3] = 0xf;
    *(undefined1 *)puVar11 = 0;
    FUN_18000f890(&local_80);
    FUN_18000f890(local_60);
    puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"use_3d_scale");
    puVar11 = (undefined8 *)param_1[1];
    psVar1 = puVar11 + 2;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    sVar10 = puVar9[2];
    if ((ulonglong)puVar9[3] < 0x10) {
      puVar12 = puVar9;
    }
    else {
      puVar12 = (undefined8 *)*puVar9;
    }
    if (sVar10 == *psVar1) {
      if (sVar10 != 0) {
        iVar6 = memcmp(puVar12,puVar11,sVar10);
        if (iVar6 != 0) goto LAB_18018674a;
      }
      uVar7 = *param_1;
      FUN_1800f2cb0(uVar7,puVar9);
      pcVar15 = "false";
      if (*(char *)(param_2 + 0x538 + uVar14 * 0x18) != '\0') {
        pcVar15 = "true";
      }
      sVar10 = strlen(pcVar15);
      FUN_1800134a0(uVar7,pcVar15,sVar10);
    }
LAB_18018674a:
    FUN_18000f890(local_160);
    puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"glow_opacity");
    puVar11 = (undefined8 *)param_1[1];
    psVar1 = puVar11 + 2;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    sVar10 = puVar9[2];
    if ((ulonglong)puVar9[3] < 0x10) {
      puVar12 = puVar9;
    }
    else {
      puVar12 = (undefined8 *)*puVar9;
    }
    if (sVar10 == *psVar1) {
      if (sVar10 != 0) {
        iVar6 = memcmp(puVar12,puVar11,sVar10);
        if (iVar6 != 0) goto LAB_1801867bb;
      }
      FUN_1800f2db0(*param_1,puVar9,param_2 + 0x53c + uVar14 * 0x18);
    }
LAB_1801867bb:
    FUN_18000f890(local_160);
    puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"thickness");
    puVar11 = (undefined8 *)param_1[1];
    psVar1 = puVar11 + 2;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    sVar10 = puVar9[2];
    if ((ulonglong)puVar9[3] < 0x10) {
      puVar12 = puVar9;
    }
    else {
      puVar12 = (undefined8 *)*puVar9;
    }
    if (sVar10 == *psVar1) {
      if (sVar10 != 0) {
        iVar6 = memcmp(puVar12,puVar11,sVar10);
        if (iVar6 != 0) goto LAB_18018682c;
      }
      FUN_1800f2e20(*param_1,puVar9,param_2 + 0x540 + uVar14 * 0x18);
    }
LAB_18018682c:
    FUN_18000f890(local_160);
    puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"scale");
    puVar11 = (undefined8 *)param_1[1];
    psVar1 = puVar11 + 2;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    sVar10 = puVar9[2];
    if ((ulonglong)puVar9[3] < 0x10) {
      puVar12 = puVar9;
    }
    else {
      puVar12 = (undefined8 *)*puVar9;
    }
    if (sVar10 == *psVar1) {
      if (sVar10 != 0) {
        iVar6 = memcmp(puVar12,puVar11,sVar10);
        if (iVar6 != 0) goto LAB_18018689d;
      }
      FUN_1800f2db0(*param_1,puVar9,param_2 + 0x544 + uVar14 * 0x18);
    }
LAB_18018689d:
    FUN_18000f890(local_160);
    puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"glow_width");
    puVar11 = (undefined8 *)param_1[1];
    psVar1 = puVar11 + 2;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    sVar10 = puVar9[2];
    if ((ulonglong)puVar9[3] < 0x10) {
      puVar12 = puVar9;
    }
    else {
      puVar12 = (undefined8 *)*puVar9;
    }
    if (sVar10 == *psVar1) {
      if (sVar10 != 0) {
        iVar6 = memcmp(puVar12,puVar11,sVar10);
        if (iVar6 != 0) goto LAB_18018690e;
      }
      FUN_1800f2e20(*param_1,puVar9,param_2 + 0x548 + uVar14 * 0x18);
    }
LAB_18018690e:
    FUN_18000f890(local_160);
    puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"glow_radius");
    puVar11 = (undefined8 *)param_1[1];
    psVar1 = puVar11 + 2;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    sVar10 = puVar9[2];
    if ((ulonglong)puVar9[3] < 0x10) {
      puVar12 = puVar9;
    }
    else {
      puVar12 = (undefined8 *)*puVar9;
    }
    if (sVar10 == *psVar1) {
      if (sVar10 != 0) {
        iVar6 = memcmp(puVar12,puVar11,sVar10);
        if (iVar6 != 0) goto LAB_18018697f;
      }
      FUN_1800f2e20(*param_1,puVar9,param_2 + 0x54c + uVar14 * 0x18);
    }
LAB_18018697f:
    FUN_18000f890(local_160);
    FUN_18000f890(&local_100);
    uVar14 = uVar14 + 1;
  } while (uVar14 < 4);
  local_100 = (char *)0x0;
  uStack_f8 = 0;
  local_100 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_impacts__1806f8398._8_4_;
  uVar4 = s_visuals_world_impacts__1806f8398._4_4_;
  local_f0 = 0x16;
  uStack_e8 = 0x1f;
  uVar3 = CONCAT22(s_visuals_world_impacts__1806f8398._14_2_,
                   s_visuals_world_impacts__1806f8398._12_2_);
  *(undefined4 *)local_100 = s_visuals_world_impacts__1806f8398._0_4_;
  *(undefined4 *)(local_100 + 4) = uVar4;
  *(undefined4 *)(local_100 + 8) = uVar5;
  *(undefined4 *)(local_100 + 0xc) = uVar3;
  *(ulonglong *)(local_100 + 0xe) =
       CONCAT62(s_visuals_world_impacts__1806f8398._16_6_,s_visuals_world_impacts__1806f8398._14_2_)
  ;
  local_100[0x16] = '\0';
  uVar7 = FUN_180073a70(local_160,&local_100,"enabled");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x598);
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"client");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186a78;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x59c);
  }
LAB_180186a78:
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"server");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186ae7;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x5ac);
  }
LAB_180186ae7:
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"scale");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186b56;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x5bc);
  }
LAB_180186b56:
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"rounding");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186bc5;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x5c0);
  }
LAB_180186bc5:
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"fill_opacity");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186c34;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x5c4);
  }
LAB_180186c34:
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"outline_opacity");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186ca3;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x5c8);
  }
LAB_180186ca3:
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"glow_opacity");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186d12;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x5cc);
  }
LAB_180186d12:
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,&DAT_1806f83d8);
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186d81;
    }
    FUN_1800f2e20(*param_1,puVar9,param_2 + 0x5d0);
  }
LAB_180186d81:
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"duration");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186df0;
    }
    FUN_1800f2e20(*param_1,puVar9,param_2 + 0x5d4);
  }
LAB_180186df0:
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"sparks");
  FUN_18017c1d0(param_1,uVar7,param_2 + 0x5d8);
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"sparks_color");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186e92;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x5dc);
  }
LAB_180186e92:
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"sparks_glow");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186f01;
    }
    FUN_1801944c0(*param_1,puVar9,param_2 + 0x5ec);
  }
LAB_180186f01:
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"sparks_radius");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186f70;
    }
    FUN_1800f2e20(*param_1,puVar9,param_2 + 0x5fc);
  }
LAB_180186f70:
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"sparks_count");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180186fdf;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x600);
  }
LAB_180186fdf:
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"sparks_spread");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018704e;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x604);
  }
LAB_18018704e:
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"sparks_height");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801870bd;
    }
    FUN_1800f2db0(*param_1,puVar9,param_2 + 0x608);
  }
LAB_1801870bd:
  FUN_18000f890(local_160);
  puVar9 = (undefined8 *)FUN_180073a70(local_160,&local_100,"sparks_lifetime");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar9[2];
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar13 = puVar9;
  }
  else {
    puVar13 = (undefined8 *)*puVar9;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018712c;
    }
    FUN_1800f2e20(*param_1,puVar9,param_2 + 0x60c);
  }
LAB_18018712c:
  FUN_18000f890(local_160);
  if (0xf < uStack_e8) {
    uVar14 = uStack_e8 + 1;
    pcVar15 = local_100;
    if (0xfff < uVar14) {
      pcVar15 = *(char **)(local_100 + -8);
      if ((char *)0x1f < local_100 + (-8 - (longlong)pcVar15)) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar14 = uStack_e8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar14);
  }
  FUN_18000f890(&local_c0);
  FUN_18000f890(&local_a0);
  FUN_18000f890(&local_e0);
  FUN_18000f890(&local_140);
  FUN_18000f890(local_180);
  FUN_18000f890(local_120);
  return;
}



/* ===== 1801871e0 FUN_1801871e0 ===== */

void FUN_1801871e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_1800f3090(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 180187260 FUN_180187260 ===== */

void FUN_180187260(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t _Size;
  int iVar1;
  int *piVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar4;
  if ((ulonglong)plVar4[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar4[2]) {
    if ((_Size != 0) && (iVar1 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar1 != 0)) {
      return;
    }
    piVar2 = (int *)FUN_1800f2fa0(*param_1,param_2);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
      plVar4 = (longlong *)(piVar2 + 4);
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      if (0xf < *(ulonglong *)(piVar2 + 10)) {
        plVar4 = (longlong *)*plVar4;
      }
      snprintf(param_3,0x60,&DAT_1806d3198,plVar4);
    }
  }
  return;
}



/* ===== 180187320 FUN_180187320 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180187320(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)param_1[1];
  puVar5 = param_1 + 1;
  sVar2 = param_2[2];
  puVar6 = puVar1;
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar6 = puVar5;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    puVar4 = param_2;
  }
  else {
    puVar4 = (undefined8 *)*param_2;
  }
  if (sVar2 == puVar1[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar4,(void *)*puVar6,sVar2);
      if (iVar3 != 0) goto LAB_180187391;
    }
    FUN_1800f3090(*param_1,param_2,param_3);
  }
LAB_180187391:
  puVar4 = (undefined8 *)FUN_180073a70(local_48,param_2,"_mode");
  puVar1 = (undefined8 *)*puVar5;
  sVar2 = puVar4[2];
  puVar6 = puVar1;
  if ((ulonglong)puVar1[3] < 0x10) {
    puVar6 = puVar5;
  }
  if ((ulonglong)puVar4[3] < 0x10) {
    puVar5 = puVar4;
  }
  else {
    puVar5 = (undefined8 *)*puVar4;
  }
  if (sVar2 == puVar1[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar5,(void *)*puVar6,sVar2);
      if (iVar3 != 0) goto LAB_1801873f0;
    }
    FUN_1800f3090(*param_1,puVar4,param_3 + 4);
  }
LAB_1801873f0:
  FUN_18000f890(local_48);
  return;
}



/* ===== 180187420 FUN_180187420 ===== */

void FUN_180187420(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  int *piVar3;
  undefined8 *_Buf1;
  longlong *plVar4;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar4 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar4 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if ((_Size == plVar1[2]) &&
     (((_Size == 0 || (iVar2 = memcmp(_Buf1,(void *)*plVar4,_Size), iVar2 == 0)) &&
      (piVar3 = (int *)FUN_1800f2fa0(*param_1,param_2), piVar3 != (int *)0x0)))) {
    if (*piVar3 == 1) {
      *param_3 = (char)piVar3[1];
      return;
    }
    if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
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



/* ===== 180187500 FUN_180187500 ===== */

void FUN_180187500(undefined8 *param_1,undefined8 *param_2,float *param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  longlong lVar3;
  undefined8 *_Buf1;
  longlong *plVar4;
  double dVar5;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar4 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar4 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar4,_Size), iVar2 != 0)) {
      return;
    }
    lVar3 = FUN_1800f2fa0(*param_1,param_2);
    if (lVar3 != 0) {
      dVar5 = (double)FUN_180370b10(lVar3,SUB84((double)*param_3,0));
      if (((uint)(float)dVar5 & 0x7f800000) != 0x7f800000) {
        *param_3 = (float)dVar5;
      }
    }
  }
  return;
}



/* ===== 1801875b0 FUN_1801875b0 ===== */

void FUN_1801875b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t _Size;
  int iVar1;
  int *piVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar4;
  if ((ulonglong)plVar4[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar4[2]) {
    if ((_Size != 0) && (iVar1 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar1 != 0)) {
      return;
    }
    piVar2 = (int *)FUN_1800f2fa0(*param_1,param_2);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
      plVar4 = (longlong *)(piVar2 + 4);
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      if (0xf < *(ulonglong *)(piVar2 + 10)) {
        plVar4 = (longlong *)*plVar4;
      }
      snprintf(param_3,0x30,&DAT_1806d3198,plVar4);
    }
  }
  return;
}



/* ===== 180187660 FUN_180187660 ===== */

void FUN_180187660(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t _Size;
  int iVar1;
  int *piVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar4;
  if ((ulonglong)plVar4[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar4[2]) {
    if ((_Size != 0) && (iVar1 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar1 != 0)) {
      return;
    }
    piVar2 = (int *)FUN_1800f2fa0(*param_1,param_2);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
      plVar4 = (longlong *)(piVar2 + 4);
      *param_3 = 0;
      param_3[1] = 0;
      if (0xf < *(ulonglong *)(piVar2 + 10)) {
        plVar4 = (longlong *)*plVar4;
      }
      snprintf(param_3,0x10,&DAT_1806d3198,plVar4);
    }
  }
  return;
}



/* ===== 180187710 FUN_180187710 ===== */

void FUN_180187710(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_18019b3a0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 180187790 FUN_180187790 ===== */

void FUN_180187790(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t _Size;
  int iVar1;
  int *piVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar4;
  if ((ulonglong)plVar4[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar4[2]) {
    if ((_Size != 0) && (iVar1 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar1 != 0)) {
      return;
    }
    piVar2 = (int *)FUN_1800f2fa0(*param_1,param_2);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
      plVar4 = (longlong *)(piVar2 + 4);
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      if (0xf < *(ulonglong *)(piVar2 + 10)) {
        plVar4 = (longlong *)*plVar4;
      }
      snprintf(param_3,0x20,&DAT_1806d3198,plVar4);
    }
  }
  return;
}



/* ===== 180187840 FUN_180187840 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180187840(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_b8;
  uVar5 = FUN_180073a70(local_98,param_2,".esp.enabled");
  FUN_180187420(param_1,uVar5,param_3);
  FUN_18000f890(local_98);
  uVar5 = FUN_180073a70(local_98,param_2,".esp.box");
  FUN_180187420(param_1,uVar5,param_3 + 1);
  FUN_18000f890(local_98);
  uVar5 = FUN_180073a70(local_98,param_2,".esp.name");
  FUN_180187420(param_1,uVar5,param_3 + 2);
  FUN_18000f890(local_98);
  uVar5 = FUN_180073a70(local_98,param_2,".esp.icon");
  FUN_180187420(param_1,uVar5,param_3 + 3);
  FUN_18000f890(local_98);
  uVar5 = FUN_180073a70(local_98,param_2,".esp.distance");
  FUN_180187420(param_1,uVar5,param_3 + 4);
  FUN_18000f890(local_98);
  uVar5 = FUN_180073a70(local_98,param_2,".esp.timer");
  FUN_180187420(param_1,uVar5,param_3 + 5);
  FUN_18000f890(local_98);
  uVar5 = FUN_180073a70(local_98,param_2,".esp.damage");
  FUN_180187420(param_1,uVar5,param_3 + 6);
  FUN_18000f890(local_98);
  puVar6 = (undefined8 *)FUN_180073a70(local_98,param_2,".esp.color");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar8 = puVar6;
  }
  else {
    puVar8 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3);
      if (iVar4 != 0) goto LAB_1801879fa;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 8);
  }
LAB_1801879fa:
  FUN_18000f890(local_98);
  uVar5 = FUN_180073a70(local_78,param_2,".esp.max_distance");
  FUN_180187500(param_1,uVar5,param_3 + 0x18);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_58,param_2,".chams");
  uVar7 = FUN_180073a70(local_78,uVar5,".enabled");
  FUN_180187420(param_1,uVar7,param_3 + 0x1c);
  FUN_18000f890(local_78);
  uVar7 = FUN_180073a70(local_78,uVar5,".visible");
  FUN_1801c3200(param_1,uVar7,param_3 + 0x20);
  FUN_18000f890(local_78);
  uVar7 = FUN_180073a70(local_78,uVar5,".occluded");
  FUN_1801c3200(param_1,uVar7,param_3 + 0x38);
  FUN_18000f890(local_78);
  uVar7 = FUN_180073a70(local_78,uVar5,".overlay");
  FUN_1801c3200(param_1,uVar7,param_3 + 0x50);
  FUN_18000f890(local_78);
  uVar5 = FUN_180073a70(local_78,uVar5,".overlay_occluded");
  FUN_1801c3200(param_1,uVar5,param_3 + 0x68);
  FUN_18000f890(local_78);
  FUN_18000f890(local_58);
  uVar5 = FUN_180073a70(local_58,param_2,".glow.enabled");
  FUN_180187420(param_1,uVar5,param_3 + 0x80);
  FUN_18000f890(local_58);
  puVar6 = (undefined8 *)FUN_180073a70(local_58,param_2,".glow.color");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    puVar8 = puVar6;
  }
  else {
    puVar8 = (undefined8 *)*puVar6;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3);
      if (iVar4 != 0) goto LAB_180187bbc;
    }
    FUN_18019e140(*param_1,puVar6,param_3 + 0x84);
  }
LAB_180187bbc:
  FUN_18000f890(local_58);
  return;
}



/* ===== 180187bf0 FUN_180187bf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180187bf0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char *_Str;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  size_t sVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_518 [32];
  undefined8 local_4f8;
  longlong local_4f0;
  ulonglong local_4e8;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined1 local_4c0 [32];
  undefined1 local_4a0 [32];
  undefined1 local_480 [32];
  undefined1 local_460 [32];
  undefined1 local_440 [32];
  undefined1 local_420 [32];
  undefined1 local_400 [32];
  undefined1 local_3e0 [32];
  undefined1 local_3c0 [32];
  undefined1 local_3a0 [32];
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [32];
  undefined1 local_320 [32];
  undefined1 local_300 [32];
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  undefined1 local_2a0 [32];
  undefined1 local_280 [32];
  undefined1 local_260 [32];
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_518;
  local_4f8 = param_2;
  uVar4 = FUN_180073a70(local_4a0,param_2,".esp.enabled");
  FUN_180187420(param_1,uVar4,param_3);
  FUN_18000f890();
  local_4e8 = 0;
  plVar1 = param_1 + 1;
  do {
    local_4f0 = local_4e8 * 0x118;
    lVar5 = local_4e8 * 0x98;
    lVar15 = lVar5 + param_3;
    _Str = (&PTR_s_health_bar_1805e7de0)[local_4e8];
    uVar4 = FUN_180073a70(local_120,param_2,".esp.item.");
    sVar6 = strlen(_Str);
    puVar7 = (undefined4 *)FUN_1800134a0(uVar4,_Str,sVar6);
    local_4e0 = *puVar7;
    uStack_4dc = puVar7[1];
    uStack_4d8 = puVar7[2];
    uStack_4d4 = puVar7[3];
    local_4d0 = puVar7[4];
    uStack_4cc = puVar7[5];
    uStack_4c8 = puVar7[6];
    uStack_4c4 = puVar7[7];
    *(undefined1 *)puVar7 = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 6) = 0xf;
    FUN_18000f890(local_120);
    uVar4 = FUN_180073a70(local_440,&local_4e0,".enabled");
    FUN_180187420(param_1,uVar4,lVar5 + 4 + param_3);
    FUN_18000f890(local_440);
    puVar8 = (undefined8 *)FUN_180073a70(local_440,&local_4e0,".side");
    plVar2 = (longlong *)*plVar1;
    plVar13 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar13 = plVar2;
    }
    sVar6 = puVar8[2];
    if ((ulonglong)puVar8[3] < 0x10) {
      puVar11 = puVar8;
    }
    else {
      puVar11 = (undefined8 *)*puVar8;
    }
    if ((sVar6 == plVar2[2]) &&
       ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
      FUN_1800f3090(*param_1,puVar8,lVar15 + 8);
    }
    FUN_18000f890(local_440);
    puVar8 = (undefined8 *)FUN_180073a70(local_420,&local_4e0,".position");
    plVar2 = (longlong *)*plVar1;
    plVar13 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar13 = plVar2;
    }
    sVar6 = puVar8[2];
    if ((ulonglong)puVar8[3] < 0x10) {
      puVar11 = puVar8;
    }
    else {
      puVar11 = (undefined8 *)*puVar8;
    }
    if ((sVar6 == plVar2[2]) &&
       ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
      FUN_1800f3090(*param_1,puVar8,lVar15 + 0xc);
    }
    FUN_18000f890(local_420);
    puVar8 = (undefined8 *)FUN_180073a70(local_400,&local_4e0,".size");
    plVar2 = (longlong *)*plVar1;
    plVar13 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar13 = plVar2;
    }
    sVar6 = puVar8[2];
    if ((ulonglong)puVar8[3] < 0x10) {
      puVar11 = puVar8;
    }
    else {
      puVar11 = (undefined8 *)*puVar8;
    }
    if ((sVar6 == plVar2[2]) &&
       ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
      FUN_1800f3090(*param_1,puVar8);
    }
    FUN_18000f890(local_400);
    iVar14 = 0;
    iVar3 = *(int *)((longlong)&DAT_1805e7f10 + local_4f0);
    if (0 < iVar3) {
      uVar16 = 0;
      iVar14 = 0;
      do {
        iVar12 = *(int *)((longlong)&DAT_1805e7f24 + uVar16 * 0x28 + local_4f0) +
                 *(int *)((longlong)&DAT_1805e7f20 + uVar16 * 0x28 + local_4f0);
        if (iVar14 < iVar12) {
          iVar14 = iVar12;
        }
        uVar17 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar17;
      } while ((int)uVar17 < iVar3);
    }
    if (1 < iVar3) {
      puVar8 = (undefined8 *)FUN_180073a70(local_3e0,&local_4e0,".color_mode");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1800f3090(*param_1,puVar8,lVar15 + 0x14);
      }
      FUN_18000f890(local_3e0);
    }
    uVar16 = 0;
    if (iVar14 < 1) {
      iVar14 = 1;
    }
    if (0 < iVar14) {
      do {
        uVar4 = FUN_18003a390(local_380,uVar16);
        uVar9 = FUN_180073a70(local_3a0,&local_4e0,".color");
        puVar8 = (undefined8 *)FUN_180066820(local_3c0,uVar9,uVar4);
        plVar2 = (longlong *)*plVar1;
        plVar13 = plVar1;
        if (0xf < (ulonglong)plVar2[3]) {
          plVar13 = plVar2;
        }
        sVar6 = puVar8[2];
        if ((ulonglong)puVar8[3] < 0x10) {
          puVar11 = puVar8;
        }
        else {
          puVar11 = (undefined8 *)*puVar8;
        }
        if ((sVar6 == plVar2[2]) &&
           ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
          FUN_18019e140(*param_1,puVar8,uVar16 * 0x10 + 0x18 + lVar15);
        }
        FUN_18000f890(local_3c0);
        FUN_18000f890(local_3a0);
        FUN_18000f890(local_380);
        uVar17 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar17;
      } while ((int)uVar17 < iVar14);
    }
    lVar5 = local_4f0;
    if (*(int *)((longlong)&DAT_1805e7eec + local_4f0) == 0) {
      uVar4 = FUN_180073a70(local_460,&local_4e0,".background");
      FUN_180187420(param_1,uVar4,lVar15 + 0x78);
      FUN_18000f890(local_460);
      uVar4 = FUN_180073a70(local_460,&local_4e0,".shadow");
      FUN_180187420(param_1,uVar4,lVar15 + 0x79);
      FUN_18000f890(local_460);
      puVar8 = (undefined8 *)FUN_180073a70(local_460,&local_4e0,".shadow_color");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_18019e140(*param_1,puVar8,lVar15 + 0x7c);
      }
      FUN_18000f890(local_460);
      puVar8 = (undefined8 *)FUN_180073a70(local_360,&local_4e0,".format");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1800f3090(*param_1,puVar8,lVar15 + 0x8c);
      }
      FUN_18000f890(local_360);
    }
    if (*(int *)((longlong)&DAT_1805e7eec + lVar5) - 1U < 2) {
      puVar8 = (undefined8 *)FUN_180073a70(local_340,&local_4e0,".font");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1800f3090(*param_1,puVar8,lVar15 + 0x90);
      }
      FUN_18000f890(local_340);
      puVar8 = (undefined8 *)FUN_180073a70(local_320,&local_4e0,".case");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1800f3090(*param_1,puVar8,lVar15 + 0x94);
      }
      FUN_18000f890(local_320);
    }
    if (*(int *)((longlong)&DAT_1805e7eec + lVar5) - 3U < 2) {
      uVar4 = FUN_180073a70(local_4c0,&local_4e0,".inverted");
      FUN_180187420(param_1,uVar4,lVar15 + 0x98);
      FUN_18000f890(local_4c0);
    }
    FUN_18000f890(&local_4e0);
    uVar4 = local_4f8;
    local_4e8 = local_4e8 + 1;
    param_2 = local_4f8;
  } while (local_4e8 < 0x1d);
  puVar8 = (undefined8 *)FUN_180073a70(local_300,local_4f8,".esp.expected_damage");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1800f3090(*param_1,puVar8,param_3 + 0x113c);
  }
  FUN_18000f890(local_300);
  puVar8 = (undefined8 *)FUN_180073a70(local_2e0,uVar4,".esp.pulse_mode");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1800f3090(*param_1,puVar8,param_3 + 0x1140);
  }
  FUN_18000f890(local_2e0);
  uVar16 = 0;
  do {
    uVar9 = FUN_18004e4f0(local_280,uVar16);
    uVar10 = FUN_180073a70(local_2a0,uVar4,".esp.pulse_color");
    puVar8 = (undefined8 *)FUN_180066820(local_2c0,uVar10,uVar9);
    plVar2 = (longlong *)*plVar1;
    plVar13 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar13 = plVar2;
    }
    sVar6 = puVar8[2];
    if ((ulonglong)puVar8[3] < 0x10) {
      puVar11 = puVar8;
    }
    else {
      puVar11 = (undefined8 *)*puVar8;
    }
    if ((sVar6 == plVar2[2]) &&
       ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
      FUN_18019e140(*param_1,puVar8,uVar16 * 0x10 + 0x1144 + param_3);
    }
    FUN_18000f890(local_2c0);
    FUN_18000f890(local_2a0);
    FUN_18000f890(local_280);
    uVar16 = uVar16 + 1;
  } while (uVar16 < 3);
  uVar9 = FUN_180073a70(local_4c0,uVar4,".esp.name_avatar");
  FUN_180187420(param_1,uVar9,param_3 + 0x1174);
  FUN_18000f890(local_4c0);
  puVar8 = (undefined8 *)FUN_180073a70(local_260,uVar4,".esp.icon_order0");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1800f3090(*param_1,puVar8,param_3 + 0x1178);
  }
  FUN_18000f890(local_260);
  puVar8 = (undefined8 *)FUN_180073a70(local_240,uVar4,".esp.icon_order1");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1800f3090(*param_1,puVar8,param_3 + 0x117c);
  }
  FUN_18000f890(local_240);
  puVar8 = (undefined8 *)FUN_180073a70(local_220,uVar4,".esp.icon_selection");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_18019dbe0(*param_1,puVar8,param_3 + 0x1180);
  }
  FUN_18000f890(local_220);
  puVar8 = (undefined8 *)FUN_180073a70(local_200,uVar4,".esp.icon_dimming");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_180152360(*param_1,puVar8,param_3 + 0x1182);
  }
  FUN_18000f890(local_200);
  uVar9 = FUN_180073a70(local_4c0,uVar4,".esp.icon_clip_rect");
  FUN_180187420(param_1,uVar9,param_3 + 0x1185);
  FUN_18000f890(local_4c0);
  uVar9 = FUN_180073a70(local_4c0,uVar4,".esp.icon_low_ammo");
  FUN_180187420(param_1,uVar9,param_3 + 0x1186);
  FUN_18000f890(local_4c0);
  uVar9 = FUN_180073a70(local_4c0,uVar4,".esp.icon_all_grenades");
  FUN_180187420(param_1,uVar9,param_3 + 0x1187);
  FUN_18000f890(local_4c0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1e0,uVar4,".esp.icon_pin_pulled");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_18019e140(*param_1,puVar8,param_3 + 0x1188);
  }
  FUN_18000f890(local_1e0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1c0,uVar4,".esp.taser_in_hand");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_18019e140(*param_1,puVar8,param_3 + 0x1198);
  }
  FUN_18000f890(local_1c0);
  uVar9 = FUN_180073a70(local_4c0,uVar4,".esp.offscreen_arrows");
  FUN_180187420(param_1,uVar9,param_3 + 0x11a8);
  FUN_18000f890(local_4c0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,uVar4,".esp.arrow_color");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_18019e140(*param_1,puVar8,param_3 + 0x11ac);
  }
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_180,uVar4,".esp.offscreen_arrow_size");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1800f3090(*param_1,puVar8,param_3 + 0x11bc);
  }
  FUN_18000f890(local_180);
  puVar8 = (undefined8 *)FUN_180073a70(local_160,uVar4,".esp.offscreen_arrow_radius");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_1800f3090(*param_1,puVar8,param_3 + 0x11c0);
  }
  FUN_18000f890(local_160);
  uVar9 = FUN_180073a70(local_4c0,uVar4,".esp.sounds");
  FUN_180187420(param_1,uVar9,param_3 + 0x11c4);
  FUN_18000f890(local_4c0);
  puVar8 = (undefined8 *)FUN_180073a70(local_140,uVar4,".esp.sound_color");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_18019e140(*param_1,puVar8,param_3 + 0x11c8);
  }
  FUN_18000f890(local_140);
  uVar16 = 0;
  do {
    lVar15 = uVar16 * 0x74;
    uVar4 = FUN_18004e4f0(&local_4e0,uVar16);
    uVar9 = FUN_180073a70(local_4c0,local_4f8,".esp.custom");
    FUN_180066820(local_4a0,uVar9,uVar4);
    FUN_18000f890(local_4c0);
    FUN_18000f890(&local_4e0);
    uVar4 = FUN_180073a70(local_480,local_4a0,&DAT_1806f6a6c);
    FUN_18018a090(param_1,uVar4,param_3 + 0x11d8 + lVar15);
    FUN_18000f890(local_480);
    if (*(char *)(lVar15 + 0x11d8 + param_3) != '\0') {
      uVar4 = FUN_180073a70(local_480,local_4a0,".enabled");
      FUN_180187420(param_1,uVar4,param_3 + 0x1218 + lVar15);
      FUN_18000f890(local_480);
      puVar8 = (undefined8 *)FUN_180073a70(local_100,local_4a0,".side");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1800f3090(*param_1,puVar8,param_3 + 0x121c + lVar15);
      }
      FUN_18000f890(local_100);
      puVar8 = (undefined8 *)FUN_180073a70(local_e0,local_4a0,".order");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1800f3090(*param_1,puVar8,param_3 + 0x1220 + lVar15);
      }
      FUN_18000f890(local_e0);
      puVar8 = (undefined8 *)FUN_180073a70(local_c0,local_4a0,".color");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_18019e140(*param_1,puVar8,param_3 + 0x1224 + lVar15);
      }
      FUN_18000f890(local_c0);
      puVar8 = (undefined8 *)FUN_180073a70(local_a0,local_4a0,".second");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_18019e140(*param_1,puVar8,param_3 + 0x1234 + lVar15);
      }
      FUN_18000f890(local_a0);
      puVar8 = (undefined8 *)FUN_180073a70(local_80,local_4a0,".size");
      plVar2 = (longlong *)*plVar1;
      plVar13 = plVar1;
      if (0xf < (ulonglong)plVar2[3]) {
        plVar13 = plVar2;
      }
      sVar6 = puVar8[2];
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar11 = puVar8;
      }
      else {
        puVar11 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == plVar2[2]) &&
         ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
        FUN_1800f3090(*param_1,puVar8,param_3 + 0x1244 + lVar15);
      }
      FUN_18000f890(local_80);
      uVar4 = FUN_180073a70(local_480,local_4a0,".small");
      FUN_180187420(param_1,uVar4,param_3 + 0x1248 + lVar15);
      FUN_18000f890(local_480);
      uVar4 = FUN_180073a70(local_480,local_4a0,".text");
      FUN_180187420(param_1,uVar4,param_3 + 0x1249 + lVar15);
      FUN_18000f890(local_480);
    }
    FUN_18000f890(local_4a0);
    uVar4 = local_4f8;
    uVar16 = uVar16 + 1;
  } while (uVar16 < 0x10);
  uVar9 = FUN_180073a70(local_480,local_4f8,".glow.enabled");
  FUN_180187420(param_1,uVar9,param_3 + 0x1918);
  FUN_18000f890(local_480);
  puVar8 = (undefined8 *)FUN_180073a70(local_60,uVar4,".glow.color");
  plVar2 = (longlong *)*plVar1;
  plVar13 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar13 = plVar1;
  }
  sVar6 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar11 = puVar8;
  }
  else {
    puVar11 = (undefined8 *)*puVar8;
  }
  if ((sVar6 == plVar2[2]) &&
     ((sVar6 == 0 || (iVar3 = memcmp(puVar11,(void *)*plVar13,sVar6), iVar3 == 0)))) {
    FUN_18019e140(*param_1,puVar8,param_3 + 0x191c);
  }
  FUN_18000f890(local_60);
  return;
}



/* ===== 180188e80 FUN_180188e80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180188e80(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  char *local_78;
  char *local_70;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_98;
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_enemy_player_1806f6a70._12_4_;
  uVar7 = s_model_enemy_player_1806f6a70._8_4_;
  uVar5 = s_model_enemy_player_1806f6a70._4_4_;
  local_58 = 0x12;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_player_1806f6a70._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  *(undefined2 *)(local_68 + 0x10) = s_model_enemy_player_1806f6a70._16_2_;
  local_68[0x12] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_enemy_behind_walls_1806f6a88._12_4_;
  uVar7 = s_model_enemy_behind_walls_1806f6a88._8_4_;
  uVar5 = s_model_enemy_behind_walls_1806f6a88._4_4_;
  local_58 = 0x18;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_behind_walls_1806f6a88._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  *(undefined8 *)(local_68 + 0x10) = s_model_enemy_behind_walls_1806f6a88._16_8_;
  local_68[0x18] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0x58);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_enemy_on_shot_1806f6ae8._12_4_;
  uVar7 = s_model_enemy_on_shot_1806f6ae8._8_4_;
  uVar5 = s_model_enemy_on_shot_1806f6ae8._4_4_;
  local_58 = 0x13;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_on_shot_1806f6ae8._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  *(uint *)(local_68 + 0xf) =
       CONCAT31(s_model_enemy_on_shot_1806f6ae8._16_3_,s_model_enemy_on_shot_1806f6ae8[0xf]);
  local_68[0x13] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0xb0);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_enemy_on_shot_glow_1806f6b00._12_4_;
  uVar7 = s_model_enemy_on_shot_glow_1806f6b00._8_4_;
  uVar5 = s_model_enemy_on_shot_glow_1806f6b00._4_4_;
  local_58 = 0x18;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_on_shot_glow_1806f6b00._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  *(undefined8 *)(local_68 + 0x10) = s_model_enemy_on_shot_glow_1806f6b00._16_8_;
  local_68[0x18] = '\0';
  FUN_18018b350(param_1,&local_68,param_2 + 0x108);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_enemy_on_shot_duration_1806f6ab0._12_4_;
  uVar7 = s_model_enemy_on_shot_duration_1806f6ab0._8_4_;
  uVar5 = s_model_enemy_on_shot_duration_1806f6ab0._4_4_;
  local_58 = 0x1c;
  local_50 = 0x1f;
  *(undefined4 *)pcVar11 = s_model_enemy_on_shot_duration_1806f6ab0._0_4_;
  *(undefined4 *)(pcVar11 + 4) = uVar5;
  *(undefined4 *)(pcVar11 + 8) = uVar7;
  *(undefined4 *)(pcVar11 + 0xc) = uVar8;
  uVar6 = s_model_enemy_on_shot_duration_1806f6ab0._20_8_;
  *(ulonglong *)(pcVar11 + 0xc) =
       CONCAT44(s_model_enemy_on_shot_duration_1806f6ab0._16_4_,
                s_model_enemy_on_shot_duration_1806f6ab0._12_4_);
  *(undefined8 *)(pcVar11 + 0x14) = uVar6;
  pcVar11[0x1c] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  uVar13 = 0x1f;
  local_68 = pcVar11;
  if ((*plVar1 == 0x1c) && (iVar10 = memcmp(pcVar11,puVar15,0x1c), iVar10 == 0)) {
    puVar2 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    pcVar12 = pcVar11;
    local_78 = pcVar11;
    for (puVar15 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar15 != puVar2;
        puVar15 = puVar15 + 0x10) {
      if ((ulonglong)puVar15[3] < 0x10) {
        puVar16 = puVar15;
      }
      else {
        puVar16 = (undefined8 *)*puVar15;
      }
      if (puVar15[2] == 0x1c) {
        iVar10 = memcmp(pcVar12,puVar16,0x1c);
        if (iVar10 == 0) {
          if (puVar15 + 4 != (undefined8 *)0x0) {
            *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
            dVar4 = (double)FUN_180370b10(puVar15 + 4,SUB84((double)*(float *)(param_2 + 0x11c),0));
            pcVar11 = local_68;
            uVar13 = local_50;
            if (((uint)(float)dVar4 & 0x7f800000) != 0x7f800000) {
              *(float *)(param_2 + 0x11c) = (float)dVar4;
            }
          }
          break;
        }
        pcVar12 = local_78;
      }
    }
  }
  if (0xf < uVar13) {
    uVar14 = uVar13 + 1;
    pcVar12 = pcVar11;
    if (0xfff < uVar14) {
      pcVar12 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar12)) goto LAB_180189e82;
      uVar14 = uVar13 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar12,uVar14);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_enemy_history_1806f6ad0._12_4_;
  uVar7 = s_model_enemy_history_1806f6ad0._8_4_;
  uVar5 = s_model_enemy_history_1806f6ad0._4_4_;
  local_58 = 0x13;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_history_1806f6ad0._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  *(uint *)(local_68 + 0xf) =
       CONCAT31(s_model_enemy_history_1806f6ad0._16_3_,s_model_enemy_history_1806f6ad0[0xf]);
  local_68[0x13] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0x120);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_enemy_history_glow_1806f6b60._12_4_;
  uVar7 = s_model_enemy_history_glow_1806f6b60._8_4_;
  uVar5 = s_model_enemy_history_glow_1806f6b60._4_4_;
  local_58 = 0x18;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_history_glow_1806f6b60._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  *(undefined8 *)(local_68 + 0x10) = s_model_enemy_history_glow_1806f6b60._16_8_;
  local_68[0x18] = '\0';
  FUN_18018b350(param_1,&local_68,param_2 + 0x178);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_enemy_ragdolls_1806f6b80._12_4_;
  uVar7 = s_model_enemy_ragdolls_1806f6b80._8_4_;
  uVar5 = s_model_enemy_ragdolls_1806f6b80._4_4_;
  local_58 = 0x14;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_ragdolls_1806f6b80._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  *(undefined4 *)(local_68 + 0x10) = s_model_enemy_ragdolls_1806f6b80._16_4_;
  local_68[0x14] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0x18c);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_enemy_ragdolls_glow_1806f6b20._12_4_;
  uVar7 = s_model_enemy_ragdolls_glow_1806f6b20._8_4_;
  uVar5 = s_model_enemy_ragdolls_glow_1806f6b20._4_4_;
  local_58 = 0x19;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_ragdolls_glow_1806f6b20._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  uVar8 = s_model_enemy_ragdolls_glow_1806f6b20._21_4_;
  uVar7 = s_model_enemy_ragdolls_glow_1806f6b20._17_4_;
  uVar5 = CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0x10],
                   s_model_enemy_ragdolls_glow_1806f6b20._13_3_);
  *(uint *)(local_68 + 9) =
       CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0xc],
                s_model_enemy_ragdolls_glow_1806f6b20._9_3_);
  *(undefined4 *)(local_68 + 0xd) = uVar5;
  *(undefined4 *)(local_68 + 0x11) = uVar7;
  *(undefined4 *)(local_68 + 0x15) = uVar8;
  local_68[0x19] = '\0';
  FUN_18018b350(param_1,&local_68,param_2 + 0x1e4);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  local_58 = 0x1f;
  local_50 = 0x1f;
  uVar6 = CONCAT17(s_model_enemy_ragdolls_visibility_1806f6b40[0xf],
                   s_model_enemy_ragdolls_visibility_1806f6b40._8_7_);
  *(undefined8 *)pcVar11 = s_model_enemy_ragdolls_visibility_1806f6b40._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar6;
  uVar6 = s_model_enemy_ragdolls_visibility_1806f6b40._23_8_;
  *(ulonglong *)(pcVar11 + 0xf) =
       CONCAT71(s_model_enemy_ragdolls_visibility_1806f6b40._16_7_,
                s_model_enemy_ragdolls_visibility_1806f6b40[0xf]);
  *(undefined8 *)(pcVar11 + 0x17) = uVar6;
  pcVar11[0x1f] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  uVar13 = 0x1f;
  local_68 = pcVar11;
  if ((*plVar1 == 0x1f) && (iVar10 = memcmp(pcVar11,puVar15,0x1f), iVar10 == 0)) {
    FUN_18019dbe0(*param_1,&local_68,param_2 + 0x1f8);
    pcVar11 = local_68;
    uVar13 = local_50;
  }
  if (0xf < uVar13) {
    uVar14 = uVar13 + 1;
    pcVar12 = pcVar11;
    if (0xfff < uVar14) {
      pcVar12 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar12)) goto LAB_180189e82;
      uVar14 = uVar13 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar12,uVar14);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_team_player_1806f6bd8._12_4_;
  uVar7 = s_model_team_player_1806f6bd8._8_4_;
  uVar5 = s_model_team_player_1806f6bd8._4_4_;
  local_58 = 0x11;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_team_player_1806f6bd8._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  local_68[0x10] = s_model_team_player_1806f6bd8[0x10];
  local_68[0x11] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0x1fc);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_team_behind_walls_1806f6bf0._12_4_;
  uVar7 = s_model_team_behind_walls_1806f6bf0._8_4_;
  uVar5 = s_model_team_behind_walls_1806f6bf0._4_4_;
  local_58 = 0x17;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_team_behind_walls_1806f6bf0._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  *(ulonglong *)(local_68 + 0xf) =
       CONCAT71(s_model_team_behind_walls_1806f6bf0._16_7_,s_model_team_behind_walls_1806f6bf0[0xf])
  ;
  local_68[0x17] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0x254);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x30);
  uVar8 = s_model_team_disable_model_renderi_1806f6b98._12_4_;
  uVar7 = s_model_team_disable_model_renderi_1806f6b98._8_4_;
  uVar5 = s_model_team_disable_model_renderi_1806f6b98._4_4_;
  local_58 = 0x22;
  local_50 = 0x2f;
  *(undefined4 *)pcVar11 = s_model_team_disable_model_renderi_1806f6b98._0_4_;
  *(undefined4 *)(pcVar11 + 4) = uVar5;
  *(undefined4 *)(pcVar11 + 8) = uVar7;
  *(undefined4 *)(pcVar11 + 0xc) = uVar8;
  uVar6 = s_model_team_disable_model_renderi_1806f6b98._24_8_;
  *(undefined8 *)(pcVar11 + 0x10) = s_model_team_disable_model_renderi_1806f6b98._16_8_;
  *(undefined8 *)(pcVar11 + 0x18) = uVar6;
  *(undefined2 *)(pcVar11 + 0x20) = s_model_team_disable_model_renderi_1806f6b98._32_2_;
  pcVar11[0x22] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  uVar13 = 0x2f;
  local_68 = pcVar11;
  if ((*plVar1 == 0x22) && (iVar10 = memcmp(pcVar11,puVar15,0x22), iVar10 == 0)) {
    puVar2 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    pcVar12 = pcVar11;
    local_70 = pcVar11;
    for (puVar15 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar15 != puVar2;
        puVar15 = puVar15 + 0x10) {
      if ((ulonglong)puVar15[3] < 0x10) {
        puVar16 = puVar15;
      }
      else {
        puVar16 = (undefined8 *)*puVar15;
      }
      if (puVar15[2] == 0x22) {
        iVar10 = memcmp(pcVar12,puVar16,0x22);
        if (iVar10 == 0) {
          if ((int *)(puVar15 + 4) != (int *)0x0) {
            *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
            iVar10 = *(int *)(puVar15 + 4);
            if (iVar10 == 1) {
              uVar9 = *(undefined1 *)((longlong)puVar15 + 0x24);
            }
            else if (iVar10 == 2) {
              if ((double)puVar15[5] == 0.0) {
                uVar9 = 0;
              }
              else {
                uVar9 = 1;
              }
            }
            else {
              uVar9 = *(undefined1 *)(param_2 + 0x2ac);
            }
            *(undefined1 *)(param_2 + 0x2ac) = uVar9;
            pcVar11 = local_68;
            uVar13 = local_50;
          }
          break;
        }
        pcVar12 = local_70;
      }
    }
  }
  if (0xf < uVar13) {
    uVar14 = uVar13 + 1;
    pcVar12 = pcVar11;
    if (0xfff < uVar14) {
      pcVar12 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar12)) goto LAB_180189e82;
      uVar14 = uVar13 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar12,uVar14);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_local_player_1806f6bc0._12_4_;
  uVar7 = s_model_local_player_1806f6bc0._8_4_;
  uVar5 = s_model_local_player_1806f6bc0._4_4_;
  local_58 = 0x12;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_player_1806f6bc0._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  *(undefined2 *)(local_68 + 0x10) = s_model_local_player_1806f6bc0._16_2_;
  local_68[0x12] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0x2b0);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_local_player_overlay_1806f6c40._4_4_;
  local_58 = 0x1a;
  local_50 = 0x1f;
  uVar5 = CONCAT22(s_model_local_player_overlay_1806f6c40._10_2_,
                   s_model_local_player_overlay_1806f6c40._8_2_);
  uVar7 = CONCAT22(s_model_local_player_overlay_1806f6c40._14_2_,
                   s_model_local_player_overlay_1806f6c40._12_2_);
  *(undefined4 *)local_68 = s_model_local_player_overlay_1806f6c40._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar8;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar7;
  uVar8 = s_model_local_player_overlay_1806f6c40._22_4_;
  uVar7 = s_model_local_player_overlay_1806f6c40._18_4_;
  uVar5 = CONCAT22(s_model_local_player_overlay_1806f6c40._16_2_,
                   s_model_local_player_overlay_1806f6c40._14_2_);
  *(uint *)(local_68 + 10) =
       CONCAT22(s_model_local_player_overlay_1806f6c40._12_2_,
                s_model_local_player_overlay_1806f6c40._10_2_);
  *(undefined4 *)(local_68 + 0xe) = uVar5;
  *(undefined4 *)(local_68 + 0x12) = uVar7;
  *(undefined4 *)(local_68 + 0x16) = uVar8;
  local_68[0x1a] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0x308);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_local_skeleton_1806f6c60._12_4_;
  uVar7 = s_model_local_skeleton_1806f6c60._8_4_;
  uVar5 = s_model_local_skeleton_1806f6c60._4_4_;
  local_58 = 0x14;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_skeleton_1806f6c60._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  *(undefined4 *)(local_68 + 0x10) = s_model_local_skeleton_1806f6c60._16_4_;
  local_68[0x14] = '\0';
  FUN_18018b350(param_1,&local_68,param_2 + 0x360);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_local_arms_1806f6c08._12_4_;
  uVar7 = s_model_local_arms_1806f6c08._8_4_;
  uVar5 = s_model_local_arms_1806f6c08._4_4_;
  local_58 = 0x10;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_arms_1806f6c08._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  local_68[0x10] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0x374);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_local_arms_overlay_1806f6c20._12_4_;
  uVar7 = s_model_local_arms_overlay_1806f6c20._8_4_;
  uVar5 = s_model_local_arms_overlay_1806f6c20._4_4_;
  local_58 = 0x18;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_arms_overlay_1806f6c20._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  *(undefined8 *)(local_68 + 0x10) = s_model_local_arms_overlay_1806f6c20._16_8_;
  local_68[0x18] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0x3cc);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_local_gloves_1806f6cb0._12_4_;
  uVar7 = s_model_local_gloves_1806f6cb0._8_4_;
  uVar5 = s_model_local_gloves_1806f6cb0._4_4_;
  local_58 = 0x12;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_gloves_1806f6cb0._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  *(undefined2 *)(local_68 + 0x10) = s_model_local_gloves_1806f6cb0._16_2_;
  local_68[0x12] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0x424);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_local_gloves_overlay_1806f6cc8._4_4_;
  local_58 = 0x1a;
  local_50 = 0x1f;
  uVar5 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._10_2_,
                   s_model_local_gloves_overlay_1806f6cc8._8_2_);
  uVar7 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._14_2_,
                   s_model_local_gloves_overlay_1806f6cc8._12_2_);
  *(undefined4 *)local_68 = s_model_local_gloves_overlay_1806f6cc8._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar8;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar7;
  uVar8 = s_model_local_gloves_overlay_1806f6cc8._22_4_;
  uVar7 = s_model_local_gloves_overlay_1806f6cc8._18_4_;
  uVar5 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._16_2_,
                   s_model_local_gloves_overlay_1806f6cc8._14_2_);
  *(uint *)(local_68 + 10) =
       CONCAT22(s_model_local_gloves_overlay_1806f6cc8._12_2_,
                s_model_local_gloves_overlay_1806f6cc8._10_2_);
  *(undefined4 *)(local_68 + 0xe) = uVar5;
  *(undefined4 *)(local_68 + 0x12) = uVar7;
  *(undefined4 *)(local_68 + 0x16) = uVar8;
  local_68[0x1a] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0x47c);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_local_weapon_1806f6c78._12_4_;
  uVar7 = s_model_local_weapon_1806f6c78._8_4_;
  uVar5 = s_model_local_weapon_1806f6c78._4_4_;
  local_58 = 0x12;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_weapon_1806f6c78._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  *(undefined2 *)(local_68 + 0x10) = s_model_local_weapon_1806f6c78._16_2_;
  local_68[0x12] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0x4d4);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_local_weapon_overlay_1806f6c90._4_4_;
  local_58 = 0x1a;
  local_50 = 0x1f;
  uVar5 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._10_2_,
                   s_model_local_weapon_overlay_1806f6c90._8_2_);
  uVar7 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._14_2_,
                   s_model_local_weapon_overlay_1806f6c90._12_2_);
  *(undefined4 *)local_68 = s_model_local_weapon_overlay_1806f6c90._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar8;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar7;
  uVar8 = s_model_local_weapon_overlay_1806f6c90._22_4_;
  uVar7 = s_model_local_weapon_overlay_1806f6c90._18_4_;
  uVar5 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._16_2_,
                   s_model_local_weapon_overlay_1806f6c90._14_2_);
  *(uint *)(local_68 + 10) =
       CONCAT22(s_model_local_weapon_overlay_1806f6c90._12_2_,
                s_model_local_weapon_overlay_1806f6c90._10_2_);
  *(undefined4 *)(local_68 + 0xe) = uVar5;
  *(undefined4 *)(local_68 + 0x12) = uVar7;
  *(undefined4 *)(local_68 + 0x16) = uVar8;
  local_68[0x1a] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0x52c);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) goto LAB_180189e82;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_local_keychain_1806f6d28._12_4_;
  uVar7 = s_model_local_keychain_1806f6d28._8_4_;
  uVar5 = s_model_local_keychain_1806f6d28._4_4_;
  local_58 = 0x14;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_keychain_1806f6d28._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  *(undefined4 *)(local_68 + 0x10) = s_model_local_keychain_1806f6d28._16_4_;
  local_68[0x14] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0x584);
  if (0xf < local_50) {
    uVar13 = local_50 + 1;
    pcVar11 = local_68;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar11)) {
LAB_180189e82:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar13);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar8 = s_model_local_keychain_overlay_1806f6d40._12_4_;
  uVar7 = s_model_local_keychain_overlay_1806f6d40._8_4_;
  uVar5 = s_model_local_keychain_overlay_1806f6d40._4_4_;
  local_58 = 0x1c;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_keychain_overlay_1806f6d40._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar5;
  *(undefined4 *)(local_68 + 8) = uVar7;
  *(undefined4 *)(local_68 + 0xc) = uVar8;
  uVar8 = s_model_local_keychain_overlay_1806f6d40._24_4_;
  uVar7 = s_model_local_keychain_overlay_1806f6d40._20_4_;
  uVar5 = s_model_local_keychain_overlay_1806f6d40._16_4_;
  *(undefined4 *)(local_68 + 0xc) = s_model_local_keychain_overlay_1806f6d40._12_4_;
  *(undefined4 *)(local_68 + 0x10) = uVar5;
  *(undefined4 *)(local_68 + 0x14) = uVar7;
  *(undefined4 *)(local_68 + 0x18) = uVar8;
  local_68[0x1c] = '\0';
  FUN_18018aca0(param_1,&local_68,param_2 + 0x5dc);
  FUN_18000f890(&local_68);
  FUN_180013350(&local_68,"model.local.colorize_stattrak");
  FUN_180187420(param_1,&local_68,param_2 + 0x634);
  FUN_18000f890(&local_68);
  FUN_180013350(&local_68,"model.local.stattrak_weapon");
  FUN_18018a140(param_1,&local_68,param_2 + 0x638);
  FUN_18000f890(&local_68);
  FUN_180013350(&local_68,"model.local.stattrak_knife");
  FUN_18018a140(param_1,&local_68,param_2 + 0x648);
  FUN_18000f890(&local_68);
  return;
}



/* ===== 180189e90 FUN_180189e90 ===== */

void FUN_180189e90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_18019dbe0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 180189f10 FUN_180189f10 ===== */

void FUN_180189f10(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_18019dcc0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 180189f90 FUN_180189f90 ===== */

void FUN_180189f90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_180152360(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18018a010 FUN_18018a010 ===== */

void FUN_18018a010(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_18019df50(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18018a090 FUN_18018a090 ===== */

void FUN_18018a090(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t _Size;
  int iVar1;
  int *piVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar4;
  if ((ulonglong)plVar4[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar4[2]) {
    if ((_Size != 0) && (iVar1 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar1 != 0)) {
      return;
    }
    piVar2 = (int *)FUN_1800f2fa0(*param_1,param_2);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
      plVar4 = (longlong *)(piVar2 + 4);
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      if (0xf < *(ulonglong *)(piVar2 + 10)) {
        plVar4 = (longlong *)*plVar4;
      }
      snprintf(param_3,0x40,&DAT_1806d3198,plVar4);
    }
  }
  return;
}



/* ===== 18018a140 FUN_18018a140 ===== */

void FUN_18018a140(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_18019e140(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18018a1c0 FUN_18018a1c0 ===== */

void FUN_18018a1c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_180152490(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18018a240 FUN_18018a240 ===== */

void FUN_18018a240(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_18019e1f0(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18018a2c0 FUN_18018a2c0 ===== */

void FUN_18018a2c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_18019e580(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18018a340 FUN_18018a340 ===== */

void FUN_18018a340(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar1[2]) {
    if ((_Size != 0) && (iVar2 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar2 != 0)) {
      return;
    }
    FUN_180152130(*param_1,param_2,param_3);
  }
  return;
}



/* ===== 18018a3c0 FUN_18018a3c0 ===== */

void FUN_18018a3c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  size_t _Size;
  int iVar1;
  int *piVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar4;
  if ((ulonglong)plVar4[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar4[2]) {
    if ((_Size != 0) && (iVar1 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar1 != 0)) {
      return;
    }
    piVar2 = (int *)FUN_1800f2fa0(*param_1,param_2);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
      FUN_180540170(param_3,0,0x104);
      plVar4 = (longlong *)(piVar2 + 4);
      if (0xf < *(ulonglong *)(piVar2 + 10)) {
        plVar4 = (longlong *)*plVar4;
      }
      snprintf(param_3,0x104,&DAT_1806d3198,plVar4);
    }
  }
  return;
}



/* ===== 18018a470 FUN_18018a470 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018a470(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_228;
  puVar5 = (undefined8 *)FUN_180073a70(local_168,param_2,&DAT_1806f5f30);
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f3090(*param_1,puVar5,param_3);
  }
  FUN_18000f890(local_168);
  if (*param_3 == 0) {
    return;
  }
  puVar5 = (undefined8 *)FUN_180073a70(local_148,param_2,".side");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f3090(*param_1,puVar5,param_3 + 1);
  }
  FUN_18000f890(local_148);
  puVar5 = (undefined8 *)FUN_180073a70(local_128,param_2,".paint_kit");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f3090(*param_1,puVar5,param_3 + 2);
  }
  FUN_18000f890(local_128);
  uVar6 = FUN_180073a70(local_208,param_2,".wear");
  FUN_180187500(param_1,uVar6,param_3 + 3);
  FUN_18000f890(local_208);
  puVar5 = (undefined8 *)FUN_180073a70(local_108,param_2,".seed");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f3090(*param_1,puVar5,param_3 + 4);
  }
  FUN_18000f890(local_108);
  uVar6 = FUN_180073a70(local_208,param_2,".stattrak");
  FUN_180187420(param_1,uVar6,param_3 + 5);
  FUN_18000f890(local_208);
  puVar5 = (undefined8 *)FUN_180073a70(local_e8,param_2,".stattrak_value");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f3090(*param_1,puVar5,param_3 + 6);
  }
  FUN_18000f890(local_e8);
  uVar6 = FUN_180073a70(local_208,param_2,".nametag");
  FUN_18018a090(param_1,uVar6,param_3 + 7);
  FUN_18000f890(local_208);
  uVar6 = FUN_180073a70(local_208,param_2,".custom_colors");
  FUN_180187420(param_1,uVar6,param_3 + 0x17);
  FUN_18000f890(local_208);
  uVar10 = 0;
  do {
    uVar6 = FUN_18004e4f0(local_88,uVar10);
    uVar7 = FUN_180073a70(local_a8,param_2,".color");
    puVar5 = (undefined8 *)FUN_180066820(local_c8,uVar7,uVar6);
    plVar2 = (longlong *)*plVar1;
    plVar9 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar9 = plVar2;
    }
    sVar3 = puVar5[2];
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar8 = puVar5;
    }
    else {
      puVar8 = (undefined8 *)*puVar5;
    }
    if ((sVar3 == plVar2[2]) &&
       ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
      FUN_18019e140(*param_1,puVar5,param_3 + uVar10 * 4 + 0x18);
    }
    FUN_18000f890(local_c8);
    FUN_18000f890(local_a8);
    FUN_18000f890(local_88);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 8);
  uVar10 = 0;
  do {
    uVar6 = FUN_18004e4f0(local_188,uVar10);
    uVar7 = FUN_180073a70(local_1a8,param_2,".sticker");
    FUN_180066820(local_208,uVar7,uVar6);
    FUN_18000f890(local_1a8);
    FUN_18000f890(local_188);
    puVar5 = (undefined8 *)FUN_180073a70(local_68,local_208,&DAT_1806f6a6c);
    plVar2 = (longlong *)*plVar1;
    plVar9 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar9 = plVar2;
    }
    sVar3 = puVar5[2];
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar8 = puVar5;
    }
    else {
      puVar8 = (undefined8 *)*puVar5;
    }
    if ((sVar3 == plVar2[2]) &&
       ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
      FUN_1800f3090(*param_1,puVar5,param_3 + uVar10 * 7 + 0x38);
    }
    FUN_18000f890(local_68);
    uVar6 = FUN_180073a70(local_1e8,local_208,".wear");
    FUN_180187500(param_1,uVar6,param_3 + uVar10 * 7 + 0x39);
    FUN_18000f890(local_1e8);
    uVar6 = FUN_180073a70(local_1e8,local_208,".scale");
    FUN_180187500(param_1,uVar6,param_3 + uVar10 * 7 + 0x3a);
    FUN_18000f890(local_1e8);
    uVar6 = FUN_180073a70(local_1e8,local_208,".rotation");
    FUN_180187500(param_1,uVar6,param_3 + uVar10 * 7 + 0x3b);
    FUN_18000f890(local_1e8);
    uVar6 = FUN_180073a70(local_1e8,local_208,".offset_x");
    FUN_180187500(param_1,uVar6,param_3 + uVar10 * 7 + 0x3c);
    FUN_18000f890(local_1e8);
    uVar6 = FUN_180073a70(local_1e8,local_208,".offset_y");
    FUN_180187500(param_1,uVar6,param_3 + uVar10 * 7 + 0x3d);
    FUN_18000f890(local_1e8);
    puVar5 = (undefined8 *)FUN_180073a70(local_1e8,local_208,".schema");
    plVar2 = (longlong *)*plVar1;
    plVar9 = plVar1;
    if (0xf < (ulonglong)plVar2[3]) {
      plVar9 = plVar2;
    }
    sVar3 = puVar5[2];
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar8 = puVar5;
    }
    else {
      puVar8 = (undefined8 *)*puVar5;
    }
    if ((sVar3 == plVar2[2]) &&
       ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
      FUN_1800f3090(*param_1,puVar5,param_3 + uVar10 * 7 + 0x3e);
    }
    FUN_18000f890(local_1e8);
    FUN_18000f890(local_208);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 6);
  puVar5 = (undefined8 *)FUN_180073a70(local_188,param_2,".keychain.id");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x62);
  }
  FUN_18000f890(local_188);
  puVar5 = (undefined8 *)FUN_180073a70(local_1a8,param_2,".keychain.seed");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f3090(*param_1,puVar5,param_3 + 99);
  }
  FUN_18000f890(local_1a8);
  uVar6 = FUN_180073a70(local_1c8,param_2,".keychain.offset_x");
  FUN_180187500(param_1,uVar6,param_3 + 100);
  FUN_18000f890(local_1c8);
  uVar6 = FUN_180073a70(local_1c8,param_2,".keychain.offset_y");
  FUN_180187500(param_1,uVar6,param_3 + 0x65);
  FUN_18000f890(local_1c8);
  uVar6 = FUN_180073a70(local_1c8,param_2,".keychain.offset_z");
  FUN_180187500(param_1,uVar6,param_3 + 0x66);
  FUN_18000f890(local_1c8);
  puVar5 = (undefined8 *)FUN_180073a70(local_1c8,param_2,".keychain.sticker");
  plVar2 = (longlong *)*plVar1;
  plVar9 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar9 = plVar1;
  }
  sVar3 = puVar5[2];
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar8 = puVar5;
  }
  else {
    puVar8 = (undefined8 *)*puVar5;
  }
  if ((sVar3 == plVar2[2]) &&
     ((sVar3 == 0 || (iVar4 = memcmp(puVar8,(void *)*plVar9,sVar3), iVar4 == 0)))) {
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x67);
  }
  FUN_18000f890(local_1c8);
  return;
}



/* ===== 18018aca0 FUN_18018aca0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018aca0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_238 [32];
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_238;
  puVar5 = (undefined8 *)FUN_180073a70(local_1f8,param_2,".material");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018ad34;
    }
    FUN_1800f3090(*param_1,puVar5,param_3);
  }
LAB_18018ad34:
  FUN_18000f890(local_1f8);
  puVar5 = (undefined8 *)FUN_180073a70(local_1d8,param_2,".color");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018ad9d;
    }
    FUN_18019e140(*param_1,puVar5,param_3 + 4);
  }
LAB_18018ad9d:
  FUN_18000f890(local_1d8);
  puVar5 = (undefined8 *)FUN_180073a70(local_1b8,param_2,".metalness");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018ae05;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x14);
  }
LAB_18018ae05:
  FUN_18000f890(local_1b8);
  puVar5 = (undefined8 *)FUN_180073a70(local_198,param_2,".roughness");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018ae6c;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x18);
  }
LAB_18018ae6c:
  FUN_18000f890(local_198);
  puVar5 = (undefined8 *)FUN_180073a70(local_178,param_2,".glow_exponent");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018aed3;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x1c);
  }
LAB_18018aed3:
  FUN_18000f890(local_178);
  puVar5 = (undefined8 *)FUN_180073a70(local_158,param_2,".outline_exponent");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018af3a;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x20);
  }
LAB_18018af3a:
  FUN_18000f890(local_158);
  puVar5 = (undefined8 *)FUN_180073a70(local_138,param_2,".outline_falloff");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018afa1;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x24);
  }
LAB_18018afa1:
  FUN_18000f890(local_138);
  uVar6 = FUN_180073a70(local_218,param_2,".outline_filling");
  FUN_180187420(param_1,uVar6,param_3 + 0x28);
  FUN_18000f890(local_218);
  puVar5 = (undefined8 *)FUN_180073a70(local_218,param_2,".iridescent_strength");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018b036;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x2c);
  }
LAB_18018b036:
  FUN_18000f890(local_218);
  puVar5 = (undefined8 *)FUN_180073a70(local_118,param_2,".iridescent_roughness");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018b09e;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x30);
  }
LAB_18018b09e:
  FUN_18000f890(local_118);
  puVar5 = (undefined8 *)FUN_180073a70(local_f8,param_2,".iridescent_tint");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018b105;
    }
    FUN_18019e140(*param_1,puVar5,param_3 + 0x34);
  }
LAB_18018b105:
  FUN_18000f890(local_f8);
  puVar5 = (undefined8 *)FUN_180073a70(local_d8,param_2,".water_speed");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018b16c;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x44);
  }
LAB_18018b16c:
  FUN_18000f890(local_d8);
  puVar5 = (undefined8 *)FUN_180073a70(local_b8,param_2,".glossy_exponent");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018b1d6;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x48);
  }
LAB_18018b1d6:
  FUN_18000f890(local_b8);
  puVar5 = (undefined8 *)FUN_180073a70(local_98,param_2,".glossy_filling");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018b243;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x4c);
  }
LAB_18018b243:
  FUN_18000f890(local_98);
  puVar5 = (undefined8 *)FUN_180073a70(local_78,param_2,".glossy_falloff");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018b2b0;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x50);
  }
LAB_18018b2b0:
  FUN_18000f890(local_78);
  puVar5 = (undefined8 *)FUN_180073a70(local_58,param_2,".glossy_tint");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018b31d;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x54);
  }
LAB_18018b31d:
  FUN_18000f890(local_58);
  return;
}



/* ===== 18018b350 FUN_18018b350 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018b350(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *_Buf1;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar3 = FUN_180073a70(local_48,param_2,".enabled");
  FUN_180187420(param_1,uVar3,param_3);
  FUN_18000f890(local_48);
  puVar4 = (undefined8 *)FUN_180073a70(local_48,param_2,".color");
  plVar1 = (longlong *)param_1[1];
  _Size = puVar4[2];
  plVar5 = plVar1;
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar5 = param_1 + 1;
  }
  if ((ulonglong)puVar4[3] < 0x10) {
    _Buf1 = puVar4;
  }
  else {
    _Buf1 = (undefined8 *)*puVar4;
  }
  if (_Size == plVar1[2]) {
    if (_Size != 0) {
      iVar2 = memcmp(_Buf1,(void *)*plVar5,_Size);
      if (iVar2 != 0) goto LAB_18018b3fc;
    }
    FUN_18019e140(*param_1,puVar4,param_3 + 4);
  }
LAB_18018b3fc:
  FUN_18000f890(local_48);
  return;
}



/* ===== 18018b420 FUN_18018b420 ===== */

void FUN_18018b420(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t _Size;
  int iVar1;
  int *piVar2;
  undefined8 *_Buf1;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_1[1];
  _Size = param_2[2];
  plVar3 = plVar4;
  if ((ulonglong)plVar4[3] < 0x10) {
    plVar3 = param_1 + 1;
  }
  if ((ulonglong)param_2[3] < 0x10) {
    _Buf1 = param_2;
  }
  else {
    _Buf1 = (undefined8 *)*param_2;
  }
  if (_Size == plVar4[2]) {
    if ((_Size != 0) && (iVar1 = memcmp(_Buf1,(void *)*plVar3,_Size), iVar1 != 0)) {
      return;
    }
    piVar2 = (int *)FUN_1800f2fa0(*param_1,param_2);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
      plVar4 = (longlong *)(piVar2 + 4);
      *param_3 = 0;
      param_3[1] = 0;
      *(undefined4 *)(param_3 + 2) = 0;
      if (0xf < *(ulonglong *)(piVar2 + 10)) {
        plVar4 = (longlong *)*plVar4;
      }
      snprintf(param_3,0x14,&DAT_1806d3198,plVar4);
    }
  }
  return;
}



/* ===== 18018b4d0 FUN_18018b4d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018b4d0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_248;
  FUN_1801b9640(param_1,param_2,param_3 + 0x264);
  uVar4 = FUN_180073a70(local_148,param_2,"world.modulation");
  FUN_180187420(param_1,uVar4,param_3 + 4);
  FUN_18000f890(local_148);
  puVar5 = (undefined8 *)FUN_180073a70(local_148,param_2,"world.modulation_color");
  plVar1 = param_1 + 1;
  plVar9 = (longlong *)*plVar1;
  sVar2 = puVar5[2];
  plVar8 = plVar9;
  if ((ulonglong)plVar9[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar2 == plVar9[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar7,(void *)*plVar8,sVar2);
      if (iVar3 != 0) goto LAB_18018b5a1;
    }
    FUN_18019e140(*param_1,puVar5,param_3 + 8);
  }
LAB_18018b5a1:
  FUN_18000f890(local_148);
  uVar4 = FUN_180073a70(local_208,param_2,"world.gamma");
  FUN_180187420(param_1,uVar4,param_3 + 0x18);
  FUN_18000f890(local_208);
  uVar4 = FUN_180073a70(local_208,param_2,"world.gamma_value");
  FUN_180187500(param_1,uVar4,param_3 + 0x1c);
  FUN_18000f890(local_208);
  uVar4 = FUN_180073a70(local_208,param_2,"world.bloom");
  FUN_180187420(param_1,uVar4,param_3 + 0x20);
  FUN_18000f890(local_208);
  uVar4 = FUN_180073a70(local_208,param_2,"world.bloom_amount");
  FUN_180187500(param_1,uVar4,param_3 + 0x24);
  FUN_18000f890(local_208);
  uVar4 = FUN_180073a70(local_208,param_2,"world.wetness");
  FUN_180187420(param_1,uVar4,param_3 + 0x28);
  FUN_18000f890(local_208);
  uVar4 = FUN_180073a70(local_208,param_2,"world.wetness_density");
  FUN_180187500(param_1,uVar4,param_3 + 0x2c);
  FUN_18000f890(local_208);
  uVar4 = FUN_180073a70(local_208,param_2,"world.wetness_speed");
  FUN_180187500(param_1,uVar4,param_3 + 0x30);
  FUN_18000f890(local_208);
  uVar4 = FUN_180073a70(local_208,param_2,"world.wind");
  FUN_180187420(param_1,uVar4,param_3 + 0x34);
  FUN_18000f890(local_208);
  uVar4 = FUN_180073a70(local_208,param_2,"world.wind_strength");
  FUN_180187500(param_1,uVar4,param_3 + 0x38);
  FUN_18000f890(local_208);
  uVar4 = FUN_180073a70(local_208,param_2,"world.wind_direction");
  FUN_180187500(param_1,uVar4,param_3 + 0x3c);
  FUN_18000f890(local_208);
  uVar4 = FUN_180073a70(local_208,param_2,"world.dof");
  FUN_180187420(param_1,uVar4,param_3 + 0x40);
  FUN_18000f890(local_208);
  uVar4 = FUN_180073a70(local_208,param_2,"world.fog");
  FUN_180187420(param_1,uVar4,param_3 + 0x54);
  FUN_18000f890(local_208);
  puVar5 = (undefined8 *)FUN_180073a70(local_208,param_2,"world.fog_color");
  plVar9 = (longlong *)*plVar1;
  sVar2 = puVar5[2];
  plVar8 = plVar9;
  if ((ulonglong)plVar9[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar2 == plVar9[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar7,(void *)*plVar8,sVar2);
      if (iVar3 != 0) goto LAB_18018b825;
    }
    FUN_18019e140(*param_1,puVar5,param_3 + 0x58);
  }
LAB_18018b825:
  FUN_18000f890(local_208);
  uVar4 = FUN_180073a70(local_228,param_2,"world.fog_density");
  FUN_180187500(param_1,uVar4,param_3 + 0x68);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"world.fog_distance");
  FUN_180187500(param_1,uVar4,param_3 + 0x6c);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"world.fog_falloff");
  FUN_180187500(param_1,uVar4,param_3 + 0x70);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"world.fog_glow");
  FUN_180187500(param_1,uVar4,param_3 + 0x74);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"world.dof_near_blurry");
  FUN_180187500(param_1,uVar4,param_3 + 0x44);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"world.dof_near_crisp");
  FUN_180187500(param_1,uVar4,param_3 + 0x48);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"world.dof_far_crisp");
  FUN_180187500(param_1,uVar4,param_3 + 0x4c);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"world.dof_far_blurry");
  FUN_180187500(param_1,uVar4,param_3 + 0x50);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"screen.rain");
  FUN_180187420(param_1,uVar4,param_3 + 0x20c);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"screen.rain_amount");
  FUN_180187500(param_1,uVar4,param_3 + 0x210);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"screen.rain_size");
  FUN_180187500(param_1,uVar4,param_3 + 0x214);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"screen.rain_speed");
  FUN_180187500(param_1,uVar4,param_3 + 0x218);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"screen.rain_fog");
  FUN_180187500(param_1,uVar4,param_3 + 0x21c);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"screen.rain_blur");
  FUN_180187500(param_1,uVar4,param_3 + 0x220);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"screen.chromatic");
  FUN_180187420(param_1,uVar4,param_3 + 0x224);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"screen.chromatic_amount");
  FUN_180187500(param_1,uVar4,param_3 + 0x228);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"screen.vignette");
  FUN_180187420(param_1,uVar4,param_3 + 0x22c);
  FUN_18000f890(local_228);
  uVar4 = FUN_180073a70(local_228,param_2,"screen.vignette_amount");
  FUN_180187500(param_1,uVar4,param_3 + 0x230);
  FUN_18000f890(local_228);
  puVar5 = (undefined8 *)FUN_180073a70(local_228,param_2,"sky.mode");
  plVar9 = (longlong *)*plVar1;
  sVar2 = puVar5[2];
  plVar8 = plVar9;
  if ((ulonglong)plVar9[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar2 == plVar9[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar7,(void *)*plVar8,sVar2);
      if (iVar3 != 0) goto LAB_18018bbd6;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x78);
  }
LAB_18018bbd6:
  FUN_18000f890(local_228);
  puVar5 = (undefined8 *)FUN_180073a70(local_a8,param_2,"sky.texture");
  plVar9 = (longlong *)*plVar1;
  sVar2 = puVar5[2];
  plVar8 = plVar9;
  if ((ulonglong)plVar9[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar2 == plVar9[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar7,(void *)*plVar8,sVar2);
      if (iVar3 != 0) goto LAB_18018bc8e;
    }
    piVar6 = (int *)FUN_1800f2fa0(*param_1,puVar5);
    if ((piVar6 != (int *)0x0) && (*piVar6 == 3)) {
      FUN_180540170(param_3 + 0x7c,0,0xa0);
      plVar9 = (longlong *)(piVar6 + 4);
      if (0xf < *(ulonglong *)(piVar6 + 10)) {
        plVar9 = (longlong *)*plVar9;
      }
      snprintf(param_3 + 0x7c,0xa0,&DAT_1806d3198,plVar9);
    }
  }
LAB_18018bc8e:
  FUN_18000f890(local_a8);
  uVar4 = FUN_180073a70(local_128,param_2,"sky.shader");
  FUN_18018a090(param_1,uVar4,param_3 + 0x11c);
  FUN_18000f890(local_128);
  puVar5 = (undefined8 *)FUN_180073a70(local_128,param_2,"sky.params");
  plVar9 = (longlong *)*plVar1;
  sVar2 = puVar5[2];
  plVar8 = plVar9;
  if ((ulonglong)plVar9[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar2 == plVar9[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar7,(void *)*plVar8,sVar2);
      if (iVar3 != 0) goto LAB_18018bd29;
    }
    FUN_1801c1520(*param_1,puVar5,param_3 + 0x15c);
  }
LAB_18018bd29:
  FUN_18000f890(local_128);
  puVar5 = (undefined8 *)FUN_180073a70(local_88,param_2,"sky.primary");
  plVar9 = (longlong *)*plVar1;
  sVar2 = puVar5[2];
  plVar8 = plVar9;
  if ((ulonglong)plVar9[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar2 == plVar9[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar7,(void *)*plVar8,sVar2);
      if (iVar3 != 0) goto LAB_18018bd96;
    }
    FUN_18019e140(*param_1,puVar5,param_3 + 0x17c);
  }
LAB_18018bd96:
  FUN_18000f890(local_88);
  puVar5 = (undefined8 *)FUN_180073a70(local_68,param_2,"sky.secondary");
  plVar9 = (longlong *)*plVar1;
  sVar2 = puVar5[2];
  plVar8 = plVar9;
  if ((ulonglong)plVar9[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar2 == plVar9[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar7,(void *)*plVar8,sVar2);
      if (iVar3 != 0) goto LAB_18018be06;
    }
    FUN_18019e140(*param_1,puVar5,param_3 + 0x18c);
  }
LAB_18018be06:
  FUN_18000f890(local_68);
  uVar4 = FUN_180073a70(local_188,param_2,"sky.exposure");
  FUN_180187500(param_1,uVar4,param_3 + 0x19c);
  FUN_18000f890(local_188);
  uVar4 = FUN_180073a70(local_188,param_2,"sky.update_rate");
  FUN_180187500(param_1,uVar4,param_3 + 0x1a0);
  FUN_18000f890(local_188);
  puVar5 = (undefined8 *)FUN_180073a70(local_188,param_2,"sky.resolution");
  plVar9 = (longlong *)*plVar1;
  sVar2 = puVar5[2];
  plVar8 = plVar9;
  if ((ulonglong)plVar9[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar2 == plVar9[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar7,(void *)*plVar8,sVar2);
      if (iVar3 != 0) goto LAB_18018becf;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x1a4);
  }
LAB_18018becf:
  FUN_18000f890(local_188);
  uVar4 = FUN_180073a70(local_1c8,param_2,"sky.supersample");
  FUN_180187420(param_1,uVar4,param_3 + 0x1a8);
  FUN_18000f890(local_1c8);
  uVar4 = FUN_180073a70(local_1c8,param_2,"sky.recolor");
  FUN_180187420(param_1,uVar4,param_3 + 0x1a9);
  FUN_18000f890(local_1c8);
  uVar4 = FUN_180073a70(local_1c8,param_2,"sky.recolor_strength");
  FUN_180187500(param_1,uVar4,param_3 + 0x1ac);
  FUN_18000f890(local_1c8);
  uVar4 = FUN_180073a70(local_1c8,param_2,"sky.sky_tint");
  FUN_180187420(param_1,uVar4,param_3 + 0x1b0);
  FUN_18000f890(local_1c8);
  puVar5 = (undefined8 *)FUN_180073a70(local_1c8,param_2,"sky.sky_color");
  plVar9 = (longlong *)*plVar1;
  sVar2 = puVar5[2];
  plVar8 = plVar9;
  if ((ulonglong)plVar9[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar2 == plVar9[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar7,(void *)*plVar8,sVar2);
      if (iVar3 != 0) goto LAB_18018bff1;
    }
    FUN_18019e140(*param_1,puVar5,param_3 + 0x1b4);
  }
LAB_18018bff1:
  FUN_18000f890(local_1c8);
  uVar4 = FUN_180073a70(local_168,param_2,"sky.brightness");
  FUN_180187500(param_1,uVar4,param_3 + 0x208);
  FUN_18000f890(local_168);
  uVar4 = FUN_180073a70(local_168,param_2,"sky.cloud_tint");
  FUN_180187420(param_1,uVar4,param_3 + 0x1c4);
  FUN_18000f890(local_168);
  puVar5 = (undefined8 *)FUN_180073a70(local_168,param_2,"sky.cloud_color");
  plVar9 = (longlong *)*plVar1;
  sVar2 = puVar5[2];
  plVar8 = plVar9;
  if ((ulonglong)plVar9[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar2 == plVar9[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar7,(void *)*plVar8,sVar2);
      if (iVar3 != 0) goto LAB_18018c0b7;
    }
    FUN_18019e140(*param_1,puVar5,param_3 + 0x1c8);
  }
LAB_18018c0b7:
  FUN_18000f890(local_168);
  uVar4 = FUN_180073a70(local_108,param_2,"sky.sun_tint");
  FUN_180187420(param_1,uVar4,param_3 + 0x1d8);
  FUN_18000f890(local_108);
  puVar5 = (undefined8 *)FUN_180073a70(local_108,param_2,"sky.sun_color");
  plVar9 = (longlong *)*plVar1;
  sVar2 = puVar5[2];
  plVar8 = plVar9;
  if ((ulonglong)plVar9[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar2 == plVar9[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar7,(void *)*plVar8,sVar2);
      if (iVar3 != 0) goto LAB_18018c14f;
    }
    FUN_18019e140(*param_1,puVar5,param_3 + 0x1dc);
  }
LAB_18018c14f:
  FUN_18000f890(local_108);
  uVar4 = FUN_180073a70(local_e8,param_2,"sky.lighting");
  FUN_180187420(param_1,uVar4,param_3 + 0x1ec);
  FUN_18000f890(local_e8);
  puVar5 = (undefined8 *)FUN_180073a70(local_e8,param_2,"sky.lighting_color");
  plVar9 = (longlong *)*plVar1;
  sVar2 = puVar5[2];
  plVar8 = plVar9;
  if ((ulonglong)plVar9[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar2 == plVar9[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar7,(void *)*plVar8,sVar2);
      if (iVar3 != 0) goto LAB_18018c1e7;
    }
    FUN_18019e140(*param_1,puVar5,param_3 + 0x1f0);
  }
LAB_18018c1e7:
  FUN_18000f890(local_e8);
  uVar4 = FUN_180073a70(local_c8,param_2,"sky.lighting_intensity");
  FUN_180187500(param_1,uVar4,param_3 + 0x200);
  FUN_18000f890(local_c8);
  puVar5 = (undefined8 *)FUN_180073a70(local_c8,param_2,"sky.lighting_mode");
  plVar9 = (longlong *)*plVar1;
  sVar2 = puVar5[2];
  plVar8 = plVar9;
  if ((ulonglong)plVar9[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar2 == plVar9[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar7,(void *)*plVar8,sVar2);
      if (iVar3 != 0) goto LAB_18018c288;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x204);
  }
LAB_18018c288:
  FUN_18000f890(local_c8);
  uVar4 = FUN_180073a70(local_1a8,param_2,"motion_blur.enabled");
  FUN_180187420(param_1,uVar4,param_3 + 0x234);
  FUN_18000f890(local_1a8);
  uVar4 = FUN_180073a70(local_1a8,param_2,"motion_blur.strength");
  FUN_180187500(param_1,uVar4,param_3 + 0x238);
  FUN_18000f890(local_1a8);
  uVar4 = FUN_180073a70(local_1a8,param_2,"weather.enabled");
  FUN_180187420(param_1,uVar4,param_3 + 0x23c);
  FUN_18000f890(local_1a8);
  puVar5 = (undefined8 *)FUN_180073a70(local_1a8,param_2,"weather.type");
  plVar9 = (longlong *)*plVar1;
  sVar2 = puVar5[2];
  plVar8 = plVar9;
  if ((ulonglong)plVar9[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar2 == plVar9[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar7,(void *)*plVar8,sVar2);
      if (iVar3 != 0) goto LAB_18018c37f;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x240);
  }
LAB_18018c37f:
  FUN_18000f890(local_1a8);
  puVar5 = (undefined8 *)FUN_180073a70(local_1e8,param_2,"weather.color");
  plVar9 = (longlong *)*plVar1;
  sVar2 = puVar5[2];
  plVar8 = plVar9;
  if ((ulonglong)plVar9[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar2 == plVar9[2]) {
    if (sVar2 != 0) {
      iVar3 = memcmp(puVar7,(void *)*plVar8,sVar2);
      if (iVar3 != 0) goto LAB_18018c3f2;
    }
    FUN_18019e140(*param_1,puVar5,param_3 + 0x244);
  }
LAB_18018c3f2:
  FUN_18000f890(local_1e8);
  uVar4 = FUN_180073a70(local_1e8,param_2,"weather.density");
  FUN_180187500(param_1,uVar4,param_3 + 0x254);
  FUN_18000f890(local_1e8);
  uVar4 = FUN_180073a70(local_1e8,param_2,"weather.gravity");
  FUN_180187500(param_1,uVar4,param_3 + 600);
  FUN_18000f890(local_1e8);
  uVar4 = FUN_180073a70(local_1e8,param_2,"weather.glow");
  FUN_180187500(param_1,uVar4,param_3 + 0x25c);
  FUN_18000f890(local_1e8);
  uVar4 = FUN_180073a70(local_1e8,param_2,"weather.rain_mist");
  FUN_180187420(param_1,uVar4,param_3 + 0x260);
  FUN_18000f890(local_1e8);
  uVar4 = FUN_180073a70(local_1e8,param_2,"weather.rain_ripples");
  FUN_180187420(param_1,uVar4,param_3 + 0x261);
  FUN_18000f890(local_1e8);
  return;
}



/* ===== 18018c510 FUN_18018c510 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018c510(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  size_t *psVar1;
  size_t sVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  undefined4 *puVar9;
  undefined8 *_Buf1;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_e8;
  puVar6 = (undefined8 *)FUN_180073a70(&local_a0,param_2,"count");
  puVar14 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar14[3] < 0x10) {
    puVar11 = puVar14;
  }
  else {
    puVar11 = (undefined8 *)*puVar14;
  }
  sVar2 = puVar6[2];
  if ((ulonglong)puVar6[3] < 0x10) {
    _Buf1 = puVar6;
  }
  else {
    _Buf1 = (undefined8 *)*puVar6;
  }
  if ((sVar2 == puVar14[2]) && ((sVar2 == 0 || (iVar5 = memcmp(_Buf1,puVar11,sVar2), iVar5 == 0))))
  {
    FUN_1800f3090(*param_1,puVar6,param_3);
  }
  FUN_18000f890(&local_a0);
  uVar15 = 1;
  do {
    if (*param_3 <= (int)uVar15) {
      return;
    }
    uVar7 = FUN_18004e4f0(local_60,uVar15);
    if ((ulonglong)param_2[3] < 0x10) {
      puVar14 = param_2;
    }
    else {
      puVar14 = (undefined8 *)*param_2;
    }
    puVar8 = (ulonglong *)FUN_18006b5b0(uVar7,0,puVar14,param_2[2]);
    local_c0 = *puVar8;
    uStack_b8 = puVar8[1];
    local_b0 = puVar8[2];
    uStack_a8 = puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    *(undefined1 *)puVar8 = 0;
    puVar9 = (undefined4 *)FUN_1800134a0(&local_c0,&DAT_1806e6f24,1);
    local_a0 = *puVar9;
    uStack_9c = puVar9[1];
    uStack_98 = puVar9[2];
    uStack_94 = puVar9[3];
    local_90 = puVar9[4];
    uStack_8c = puVar9[5];
    uStack_88 = puVar9[6];
    uStack_84 = puVar9[7];
    *(undefined8 *)(puVar9 + 4) = 0;
    *(undefined8 *)(puVar9 + 6) = 0xf;
    *(undefined1 *)puVar9 = 0;
    if (0xf < uStack_a8) {
      uVar13 = uStack_a8 + 1;
      uVar10 = local_c0;
      if (0xfff < uVar13) {
        uVar10 = *(ulonglong *)(local_c0 - 8);
        if (0x1f < (local_c0 - uVar10) - 8) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          goto LAB_18018c7af;
        }
        uVar13 = uStack_a8 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar10,uVar13);
    }
    local_b0 = 0;
    uStack_a8 = 0xf;
    local_c0 = local_c0 & 0xffffffffffffff00;
    FUN_18000f890(local_60);
    uVar7 = FUN_180073a70(local_80,&local_a0,&DAT_18058b644);
    FUN_18018a090(param_1,uVar7,param_3 + uVar15 * 0x52 + 1);
    FUN_18000f890(local_80);
    puVar6 = (undefined8 *)FUN_180073a70(local_80,&local_a0,"weapons");
    puVar14 = (undefined8 *)param_1[1];
    psVar1 = puVar14 + 2;
    if (0xf < (ulonglong)puVar14[3]) {
      puVar14 = (undefined8 *)*puVar14;
    }
    sVar2 = puVar6[2];
    if ((ulonglong)puVar6[3] < 0x10) {
      puVar11 = puVar6;
    }
    else {
      puVar11 = (undefined8 *)*puVar6;
    }
    if ((sVar2 == *psVar1) && ((sVar2 == 0 || (iVar5 = memcmp(puVar11,puVar14,sVar2), iVar5 == 0))))
    {
      FUN_1800f3150(*param_1,puVar6,param_3 + uVar15 * 0x52 + 0x11);
    }
    FUN_18000f890(local_80);
    uVar10 = CONCAT44(uStack_84,uStack_88);
    if (0xf < uVar10) {
      uVar13 = uVar10 + 1;
      lVar4 = CONCAT44(uStack_9c,local_a0);
      lVar12 = lVar4;
      if (0xfff < uVar13) {
        lVar12 = *(longlong *)(lVar4 + -8);
        if (0x1f < (lVar4 - lVar12) - 8U) {
LAB_18018c7af:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar13 = uVar10 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar12,uVar13);
    }
    uVar15 = uVar15 + 1;
    if (0x3f < uVar15) {
      return;
    }
  } while( true );
}



/* ===== 18018c7c0 FUN_18018c7c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018c7c0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_118;
  puVar5 = (undefined8 *)FUN_180073a70(local_b8,param_2,"hitboxes");
  plVar1 = param_1 + 1;
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018c848;
    }
    FUN_180152130(*param_1,puVar5,param_3);
  }
LAB_18018c848:
  FUN_18000f890(local_b8);
  puVar5 = (undefined8 *)FUN_180073a70(local_98,param_2,"extrapolation");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018c8b4;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 8);
  }
LAB_18018c8b4:
  FUN_18000f890(local_98);
  puVar5 = (undefined8 *)FUN_180073a70(local_78,param_2,"hitchance");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018c923;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0xc);
  }
LAB_18018c923:
  FUN_18000f890(local_78);
  uVar6 = FUN_180073a70(local_d8,param_2,"force_shot");
  FUN_180187420(param_1,uVar6,param_3 + 0x10);
  FUN_18000f890(local_d8);
  puVar5 = (undefined8 *)FUN_180073a70(local_d8,param_2,"min_hitchance");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018c9bc;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x14);
  }
LAB_18018c9bc:
  FUN_18000f890(local_d8);
  puVar5 = (undefined8 *)FUN_180073a70(local_58,param_2,"min_damage");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018ca28;
    }
    FUN_1800f3090(*param_1,puVar5,param_3 + 0x18);
  }
LAB_18018ca28:
  FUN_18000f890(local_58);
  uVar6 = FUN_180073a70(local_f8,param_2,"quick_stop");
  FUN_180187420(param_1,uVar6,param_3 + 0x1c);
  FUN_18000f890(local_f8);
  puVar5 = (undefined8 *)FUN_180073a70(local_f8,param_2,"quick_stop_options");
  plVar2 = (longlong *)*plVar1;
  sVar3 = puVar5[2];
  plVar8 = plVar2;
  if ((ulonglong)plVar2[3] < 0x10) {
    plVar8 = plVar1;
  }
  if ((ulonglong)puVar5[3] < 0x10) {
    puVar7 = puVar5;
  }
  else {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (sVar3 == plVar2[2]) {
    if (sVar3 != 0) {
      iVar4 = memcmp(puVar7,(void *)*plVar8,sVar3);
      if (iVar4 != 0) goto LAB_18018cac1;
    }
    FUN_180152360(*param_1,puVar5,param_3 + 0x1d);
  }
LAB_18018cac1:
  FUN_18000f890(local_f8);
  uVar6 = FUN_180073a70(local_f8,param_2,"quick_scope");
  FUN_180187420(param_1,uVar6,param_3 + 0x20);
  FUN_18000f890(local_f8);
  return;
}



/* ===== 18018cb20 FUN_18018cb20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018cb20(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  char *pcVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  char *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_e8;
  FUN_180013350(&local_b8,"legitbot.enabled");
  FUN_180187420(param_1,&local_b8,param_2);
  FUN_18000f890(&local_b8);
  FUN_180013350(&local_b8,"legitbot.groups.");
  FUN_18018c510(param_1,&local_b8,param_2 + 4);
  FUN_18000f890(&local_b8);
  uVar17 = 0;
  do {
    iVar9 = *(int *)(param_2 + 4);
    if (iVar9 < 1) {
      iVar9 = 1;
    }
    if (iVar9 <= (int)uVar17) break;
    uVar10 = FUN_1800ef450(local_78,uVar17 & 0xffffffff);
    uVar10 = FUN_180066ab0(local_98,"legitbot.",uVar10);
    uVar10 = FUN_180042850(&local_b8,uVar10,&DAT_1806e6f24);
    FUN_1801bbed0(param_1,uVar10,param_2 + 21000 + uVar17 * 100,param_2 + 0x6b08 + uVar17 * 0x3c);
    FUN_18000f890(&local_b8);
    FUN_18000f890(local_98);
    FUN_18000f890(local_78);
    uVar17 = uVar17 + 1;
  } while (uVar17 < 0x40);
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_visualize_1806f74f0._12_4_;
  uVar5 = s_legitbot_visualize_1806f74f0._8_4_;
  uVar4 = s_legitbot_visualize_1806f74f0._4_4_;
  local_a8 = 0x12;
  local_a0 = 0x1f;
  *(undefined4 *)pcVar11 = s_legitbot_visualize_1806f74f0._0_4_;
  *(undefined4 *)(pcVar11 + 4) = uVar4;
  *(undefined4 *)(pcVar11 + 8) = uVar5;
  *(undefined4 *)(pcVar11 + 0xc) = uVar6;
  *(undefined2 *)(pcVar11 + 0x10) = s_legitbot_visualize_1806f74f0._16_2_;
  pcVar11[0x12] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  local_b8 = pcVar11;
  if ((*plVar1 == 0x12) && (iVar9 = memcmp(pcVar11,puVar15,0x12), iVar9 == 0)) {
    puVar12 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar15 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar15 != puVar12;
        puVar15 = puVar15 + 0x10) {
      if ((ulonglong)puVar15[3] < 0x10) {
        puVar14 = puVar15;
      }
      else {
        puVar14 = (undefined8 *)*puVar15;
      }
      if ((puVar15[2] == 0x12) && (iVar9 = memcmp(pcVar11,puVar14,0x12), iVar9 == 0)) {
        if ((int *)(puVar15 + 4) != (int *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          iVar9 = *(int *)(puVar15 + 4);
          if (iVar9 == 1) {
            uVar7 = *(undefined1 *)((longlong)puVar15 + 0x24);
          }
          else if (iVar9 == 2) {
            if ((double)puVar15[5] == 0.0) {
              uVar7 = 0;
            }
            else {
              uVar7 = 1;
            }
          }
          else {
            uVar7 = *(undefined1 *)(param_2 + 0x7a08);
          }
          *(undefined1 *)(param_2 + 0x7a08) = uVar7;
          pcVar11 = local_b8;
        }
        break;
      }
    }
  }
  if (0xf < local_a0) {
    uVar17 = local_a0 + 1;
    pcVar16 = pcVar11;
    if (0xfff < uVar17) {
      pcVar16 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar16)) goto LAB_18018e0bc;
      uVar17 = local_a0 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar16,uVar17);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  local_a8 = 0x19;
  local_a0 = 0x1f;
  uVar10 = CONCAT71(s_legitbot_visualize_target_1806f7540._9_7_,
                    s_legitbot_visualize_target_1806f7540[8]);
  *(undefined8 *)pcVar11 = s_legitbot_visualize_target_1806f7540._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar10;
  uVar10 = s_legitbot_visualize_target_1806f7540._17_8_;
  *(ulonglong *)(pcVar11 + 9) =
       CONCAT17(s_legitbot_visualize_target_1806f7540[0x10],
                s_legitbot_visualize_target_1806f7540._9_7_);
  *(undefined8 *)(pcVar11 + 0x11) = uVar10;
  pcVar11[0x19] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  local_b8 = pcVar11;
  if ((*plVar1 == 0x19) && (iVar9 = memcmp(pcVar11,puVar15,0x19), iVar9 == 0)) {
    plVar1 = (longlong *)*param_1;
    lVar2 = *plVar1;
    puVar12 = *(undefined8 **)(lVar2 + 0x50);
    for (puVar15 = *(undefined8 **)(lVar2 + 0x48); puVar15 != puVar12; puVar15 = puVar15 + 0x10) {
      if ((ulonglong)puVar15[3] < 0x10) {
        puVar14 = puVar15;
      }
      else {
        puVar14 = (undefined8 *)*puVar15;
      }
      if ((puVar15[2] == 0x19) && (iVar9 = memcmp(pcVar11,puVar14,0x19), iVar9 == 0)) {
        if ((int *)(puVar15 + 4) != (int *)0x0) {
          plVar1 = plVar1 + 1;
          *(int *)plVar1 = (int)*plVar1 + 1;
          iVar9 = *(int *)(puVar15 + 4);
          if (iVar9 == 1) {
            uVar7 = *(undefined1 *)((longlong)puVar15 + 0x24);
          }
          else if (iVar9 == 2) {
            if ((double)puVar15[5] == 0.0) {
              uVar7 = 0;
            }
            else {
              uVar7 = 1;
            }
          }
          else {
            uVar7 = *(undefined1 *)(param_2 + 0x7a09);
          }
          *(undefined1 *)(param_2 + 0x7a09) = uVar7;
        }
        break;
      }
    }
  }
  FUN_18000f890(&local_b8);
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  local_a8 = 0x15;
  local_a0 = 0x1f;
  uVar10 = CONCAT35(s_legitbot_target_color_1806f7560._13_3_,s_legitbot_target_color_1806f7560._8_5_
                   );
  *(undefined8 *)pcVar11 = s_legitbot_target_color_1806f7560._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar10;
  *(ulonglong *)(pcVar11 + 0xd) =
       CONCAT53(s_legitbot_target_color_1806f7560._16_5_,s_legitbot_target_color_1806f7560._13_3_);
  pcVar11[0x15] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  uVar17 = 0x1f;
  local_b8 = pcVar11;
  if ((*plVar1 == 0x15) && (iVar9 = memcmp(pcVar11,puVar15,0x15), iVar9 == 0)) {
    FUN_18019e140(*param_1,&local_b8,param_2 + 0x7a0c);
    pcVar11 = local_b8;
    uVar17 = local_a0;
  }
  if (0xf < uVar17) {
    uVar13 = uVar17 + 1;
    pcVar16 = pcVar11;
    if (0xfff < uVar13) {
      pcVar16 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar16)) goto LAB_18018e0bc;
      uVar13 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar16,uVar13);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_visualize_fov_1806f7510._8_4_;
  uVar5 = s_legitbot_visualize_fov_1806f7510._4_4_;
  local_a8 = 0x16;
  local_a0 = 0x1f;
  uVar4 = CONCAT22(s_legitbot_visualize_fov_1806f7510._14_2_,
                   s_legitbot_visualize_fov_1806f7510._12_2_);
  *(undefined4 *)pcVar11 = s_legitbot_visualize_fov_1806f7510._0_4_;
  *(undefined4 *)(pcVar11 + 4) = uVar5;
  *(undefined4 *)(pcVar11 + 8) = uVar6;
  *(undefined4 *)(pcVar11 + 0xc) = uVar4;
  *(ulonglong *)(pcVar11 + 0xe) =
       CONCAT62(s_legitbot_visualize_fov_1806f7510._16_6_,s_legitbot_visualize_fov_1806f7510._14_2_)
  ;
  pcVar11[0x16] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  local_b8 = pcVar11;
  if ((*plVar1 == 0x16) && (iVar9 = memcmp(pcVar11,puVar15,0x16), iVar9 == 0)) {
    puVar12 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar15 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar15 != puVar12;
        puVar15 = puVar15 + 0x10) {
      if ((ulonglong)puVar15[3] < 0x10) {
        puVar14 = puVar15;
      }
      else {
        puVar14 = (undefined8 *)*puVar15;
      }
      if ((puVar15[2] == 0x16) && (iVar9 = memcmp(pcVar11,puVar14,0x16), iVar9 == 0)) {
        if ((int *)(puVar15 + 4) != (int *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          iVar9 = *(int *)(puVar15 + 4);
          if (iVar9 == 1) {
            uVar7 = *(undefined1 *)((longlong)puVar15 + 0x24);
          }
          else if (iVar9 == 2) {
            if ((double)puVar15[5] == 0.0) {
              uVar7 = 0;
            }
            else {
              uVar7 = 1;
            }
          }
          else {
            uVar7 = *(undefined1 *)(param_2 + 0x7a1c);
          }
          *(undefined1 *)(param_2 + 0x7a1c) = uVar7;
          pcVar11 = local_b8;
        }
        break;
      }
    }
  }
  if (0xf < local_a0) {
    uVar17 = local_a0 + 1;
    pcVar16 = pcVar11;
    if (0xfff < uVar17) {
      pcVar16 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar16)) goto LAB_18018e0bc;
      uVar17 = local_a0 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar16,uVar17);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  uVar10 = s_legitbot_fov_color_1806f7528._8_8_;
  local_a8 = 0x12;
  local_a0 = 0x1f;
  *(undefined8 *)pcVar11 = s_legitbot_fov_color_1806f7528._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar10;
  *(undefined2 *)(pcVar11 + 0x10) = s_legitbot_fov_color_1806f7528._16_2_;
  pcVar11[0x12] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  uVar17 = 0x1f;
  local_b8 = pcVar11;
  if ((*plVar1 == 0x12) && (iVar9 = memcmp(pcVar11,puVar15,0x12), iVar9 == 0)) {
    FUN_18019e140(*param_1,&local_b8,param_2 + 0x7a20);
    pcVar11 = local_b8;
    uVar17 = local_a0;
  }
  if (0xf < uVar17) {
    uVar13 = uVar17 + 1;
    pcVar16 = pcVar11;
    if (0xfff < uVar13) {
      pcVar16 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar16)) goto LAB_18018e0bc;
      uVar13 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar16,uVar13);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_visualize_hitboxes_1806f75b8._12_4_;
  uVar5 = s_legitbot_visualize_hitboxes_1806f75b8._8_4_;
  uVar4 = s_legitbot_visualize_hitboxes_1806f75b8._4_4_;
  local_a8 = 0x1b;
  local_a0 = 0x1f;
  *(undefined4 *)pcVar11 = s_legitbot_visualize_hitboxes_1806f75b8._0_4_;
  *(undefined4 *)(pcVar11 + 4) = uVar4;
  *(undefined4 *)(pcVar11 + 8) = uVar5;
  *(undefined4 *)(pcVar11 + 0xc) = uVar6;
  uVar10 = s_legitbot_visualize_hitboxes_1806f75b8._19_8_;
  *(ulonglong *)(pcVar11 + 0xb) =
       CONCAT35(s_legitbot_visualize_hitboxes_1806f75b8._16_3_,
                CONCAT41(s_legitbot_visualize_hitboxes_1806f75b8._12_4_,
                         s_legitbot_visualize_hitboxes_1806f75b8[0xb]));
  *(undefined8 *)(pcVar11 + 0x13) = uVar10;
  pcVar11[0x1b] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  local_b8 = pcVar11;
  if ((*plVar1 == 0x1b) && (iVar9 = memcmp(pcVar11,puVar15,0x1b), iVar9 == 0)) {
    puVar12 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar15 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar15 != puVar12;
        puVar15 = puVar15 + 0x10) {
      if ((ulonglong)puVar15[3] < 0x10) {
        puVar14 = puVar15;
      }
      else {
        puVar14 = (undefined8 *)*puVar15;
      }
      if ((puVar15[2] == 0x1b) && (iVar9 = memcmp(pcVar11,puVar14,0x1b), iVar9 == 0)) {
        if ((int *)(puVar15 + 4) != (int *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          iVar9 = *(int *)(puVar15 + 4);
          if (iVar9 == 1) {
            uVar7 = *(undefined1 *)((longlong)puVar15 + 0x24);
          }
          else if (iVar9 == 2) {
            if ((double)puVar15[5] == 0.0) {
              uVar7 = 0;
            }
            else {
              uVar7 = 1;
            }
          }
          else {
            uVar7 = *(undefined1 *)(param_2 + 0x7a30);
          }
          *(undefined1 *)(param_2 + 0x7a30) = uVar7;
          pcVar11 = local_b8;
        }
        break;
      }
    }
  }
  if (0xf < local_a0) {
    uVar17 = local_a0 + 1;
    pcVar16 = pcVar11;
    if (0xfff < uVar17) {
      pcVar16 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar16)) goto LAB_18018e0bc;
      uVar17 = local_a0 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar16,uVar17);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  local_a8 = 0x1c;
  local_a0 = 0x1f;
  uVar10 = CONCAT44(s_legitbot_high_priority_color_1806f75d8._12_4_,
                    s_legitbot_high_priority_color_1806f75d8._8_4_);
  *(undefined8 *)pcVar11 = s_legitbot_high_priority_color_1806f75d8._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar10;
  uVar10 = s_legitbot_high_priority_color_1806f75d8._20_8_;
  *(ulonglong *)(pcVar11 + 0xc) =
       CONCAT44(s_legitbot_high_priority_color_1806f75d8._16_4_,
                s_legitbot_high_priority_color_1806f75d8._12_4_);
  *(undefined8 *)(pcVar11 + 0x14) = uVar10;
  pcVar11[0x1c] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  uVar17 = 0x1f;
  local_b8 = pcVar11;
  if ((*plVar1 == 0x1c) && (iVar9 = memcmp(pcVar11,puVar15,0x1c), iVar9 == 0)) {
    FUN_18019e140(*param_1,&local_b8,param_2 + 0x7a34);
    pcVar11 = local_b8;
    uVar17 = local_a0;
  }
  if (0xf < uVar17) {
    uVar13 = uVar17 + 1;
    pcVar16 = pcVar11;
    if (0xfff < uVar13) {
      pcVar16 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar16)) goto LAB_18018e0bc;
      uVar13 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar16,uVar13);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  local_a8 = 0x1b;
  local_a0 = 0x1f;
  uVar10 = CONCAT53(s_legitbot_low_priority_color_1806f7578._11_5_,
                    s_legitbot_low_priority_color_1806f7578._8_3_);
  *(undefined8 *)pcVar11 = s_legitbot_low_priority_color_1806f7578._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar10;
  uVar10 = s_legitbot_low_priority_color_1806f7578._19_8_;
  *(ulonglong *)(pcVar11 + 0xb) =
       CONCAT35(s_legitbot_low_priority_color_1806f7578._16_3_,
                s_legitbot_low_priority_color_1806f7578._11_5_);
  *(undefined8 *)(pcVar11 + 0x13) = uVar10;
  pcVar11[0x1b] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  uVar17 = 0x1f;
  local_b8 = pcVar11;
  if ((*plVar1 == 0x1b) && (iVar9 = memcmp(pcVar11,puVar15,0x1b), iVar9 == 0)) {
    FUN_18019e140(*param_1,&local_b8,param_2 + 0x7a44);
    pcVar11 = local_b8;
    uVar17 = local_a0;
  }
  if (0xf < uVar17) {
    uVar13 = uVar17 + 1;
    pcVar16 = pcVar11;
    if (0xfff < uVar13) {
      pcVar16 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar16)) goto LAB_18018e0bc;
      uVar13 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar16,uVar13);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_visualize_recoil_1806f7598._12_4_;
  uVar5 = s_legitbot_visualize_recoil_1806f7598._8_4_;
  uVar4 = s_legitbot_visualize_recoil_1806f7598._4_4_;
  local_a8 = 0x19;
  local_a0 = 0x1f;
  *(undefined4 *)pcVar11 = s_legitbot_visualize_recoil_1806f7598._0_4_;
  *(undefined4 *)(pcVar11 + 4) = uVar4;
  *(undefined4 *)(pcVar11 + 8) = uVar5;
  *(undefined4 *)(pcVar11 + 0xc) = uVar6;
  uVar10 = s_legitbot_visualize_recoil_1806f7598._17_8_;
  *(ulonglong *)(pcVar11 + 9) =
       CONCAT17(s_legitbot_visualize_recoil_1806f7598[0x10],
                CONCAT43(s_legitbot_visualize_recoil_1806f7598._12_4_,
                         s_legitbot_visualize_recoil_1806f7598._9_3_));
  *(undefined8 *)(pcVar11 + 0x11) = uVar10;
  pcVar11[0x19] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  local_b8 = pcVar11;
  if ((*plVar1 == 0x19) && (iVar9 = memcmp(pcVar11,puVar15,0x19), iVar9 == 0)) {
    puVar12 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar15 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar15 != puVar12;
        puVar15 = puVar15 + 0x10) {
      if ((ulonglong)puVar15[3] < 0x10) {
        puVar14 = puVar15;
      }
      else {
        puVar14 = (undefined8 *)*puVar15;
      }
      if ((puVar15[2] == 0x19) && (iVar9 = memcmp(pcVar11,puVar14,0x19), iVar9 == 0)) {
        if ((int *)(puVar15 + 4) != (int *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          iVar9 = *(int *)(puVar15 + 4);
          if (iVar9 == 1) {
            uVar7 = *(undefined1 *)((longlong)puVar15 + 0x24);
          }
          else if (iVar9 == 2) {
            if ((double)puVar15[5] == 0.0) {
              uVar7 = 0;
            }
            else {
              uVar7 = 1;
            }
          }
          else {
            uVar7 = *(undefined1 *)(param_2 + 0x7a54);
          }
          *(undefined1 *)(param_2 + 0x7a54) = uVar7;
          pcVar11 = local_b8;
        }
        break;
      }
    }
  }
  if (0xf < local_a0) {
    uVar17 = local_a0 + 1;
    pcVar16 = pcVar11;
    if (0xfff < uVar17) {
      pcVar16 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar16)) goto LAB_18018e0bc;
      uVar17 = local_a0 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar16,uVar17);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  local_a8 = 0x1e;
  local_a0 = 0x1f;
  uVar10 = CONCAT26(s_legitbot_recoil_original_color_1806f7630._14_2_,
                    s_legitbot_recoil_original_color_1806f7630._8_6_);
  *(undefined8 *)pcVar11 = s_legitbot_recoil_original_color_1806f7630._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar10;
  uVar10 = s_legitbot_recoil_original_color_1806f7630._22_8_;
  *(ulonglong *)(pcVar11 + 0xe) =
       CONCAT62(s_legitbot_recoil_original_color_1806f7630._16_6_,
                s_legitbot_recoil_original_color_1806f7630._14_2_);
  *(undefined8 *)(pcVar11 + 0x16) = uVar10;
  pcVar11[0x1e] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  uVar17 = 0x1f;
  local_b8 = pcVar11;
  if ((*plVar1 == 0x1e) && (iVar9 = memcmp(pcVar11,puVar15,0x1e), iVar9 == 0)) {
    FUN_18019e140(*param_1,&local_b8,param_2 + 0x7a58);
    pcVar11 = local_b8;
    uVar17 = local_a0;
  }
  if (0xf < uVar17) {
    uVar13 = uVar17 + 1;
    pcVar16 = pcVar11;
    if (0xfff < uVar13) {
      pcVar16 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar16)) goto LAB_18018e0bc;
      uVar13 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar16,uVar13);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x30);
  uVar10 = s_legitbot_recoil_compensated_colo_1806f7650._8_8_;
  local_a8 = 0x21;
  local_a0 = 0x2f;
  *(undefined8 *)pcVar11 = s_legitbot_recoil_compensated_colo_1806f7650._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar10;
  uVar10 = s_legitbot_recoil_compensated_colo_1806f7650._24_8_;
  *(undefined8 *)(pcVar11 + 0x10) = s_legitbot_recoil_compensated_colo_1806f7650._16_8_;
  *(undefined8 *)(pcVar11 + 0x18) = uVar10;
  pcVar11[0x20] = s_legitbot_recoil_compensated_colo_1806f7650[0x20];
  pcVar11[0x21] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  uVar17 = 0x2f;
  local_b8 = pcVar11;
  if ((*plVar1 == 0x21) && (iVar9 = memcmp(pcVar11,puVar15,0x21), iVar9 == 0)) {
    FUN_18019e140(*param_1,&local_b8,param_2 + 0x7a68);
    pcVar11 = local_b8;
    uVar17 = local_a0;
  }
  if (0xf < uVar17) {
    uVar13 = uVar17 + 1;
    pcVar16 = pcVar11;
    if (0xfff < uVar13) {
      pcVar16 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar16)) goto LAB_18018e0bc;
      uVar13 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar16,uVar13);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_visualize_velocity_1806f75f8._12_4_;
  uVar5 = s_legitbot_visualize_velocity_1806f75f8._8_4_;
  uVar4 = s_legitbot_visualize_velocity_1806f75f8._4_4_;
  local_a8 = 0x1b;
  local_a0 = 0x1f;
  *(undefined4 *)pcVar11 = s_legitbot_visualize_velocity_1806f75f8._0_4_;
  *(undefined4 *)(pcVar11 + 4) = uVar4;
  *(undefined4 *)(pcVar11 + 8) = uVar5;
  *(undefined4 *)(pcVar11 + 0xc) = uVar6;
  uVar10 = s_legitbot_visualize_velocity_1806f75f8._19_8_;
  *(ulonglong *)(pcVar11 + 0xb) =
       CONCAT35(s_legitbot_visualize_velocity_1806f75f8._16_3_,
                CONCAT41(s_legitbot_visualize_velocity_1806f75f8._12_4_,
                         s_legitbot_visualize_velocity_1806f75f8[0xb]));
  *(undefined8 *)(pcVar11 + 0x13) = uVar10;
  pcVar11[0x1b] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  local_b8 = pcVar11;
  if ((*plVar1 == 0x1b) && (iVar9 = memcmp(pcVar11,puVar15,0x1b), iVar9 == 0)) {
    puVar12 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar15 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar15 != puVar12;
        puVar15 = puVar15 + 0x10) {
      if ((ulonglong)puVar15[3] < 0x10) {
        puVar14 = puVar15;
      }
      else {
        puVar14 = (undefined8 *)*puVar15;
      }
      if ((puVar15[2] == 0x1b) && (iVar9 = memcmp(pcVar11,puVar14,0x1b), iVar9 == 0)) {
        if ((int *)(puVar15 + 4) != (int *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          iVar9 = *(int *)(puVar15 + 4);
          if (iVar9 == 1) {
            uVar7 = *(undefined1 *)((longlong)puVar15 + 0x24);
          }
          else if (iVar9 == 2) {
            if ((double)puVar15[5] == 0.0) {
              uVar7 = 0;
            }
            else {
              uVar7 = 1;
            }
          }
          else {
            uVar7 = *(undefined1 *)(param_2 + 0x7a78);
          }
          *(undefined1 *)(param_2 + 0x7a78) = uVar7;
          pcVar11 = local_b8;
        }
        break;
      }
    }
  }
  if (0xf < local_a0) {
    uVar17 = local_a0 + 1;
    pcVar16 = pcVar11;
    if (0xfff < uVar17) {
      pcVar16 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar16)) goto LAB_18018e0bc;
      uVar17 = local_a0 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar16,uVar17);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_velocity_speed_1806f7618._12_4_;
  uVar5 = s_legitbot_velocity_speed_1806f7618._8_4_;
  uVar4 = s_legitbot_velocity_speed_1806f7618._4_4_;
  local_a8 = 0x17;
  local_a0 = 0x1f;
  *(undefined4 *)local_b8 = s_legitbot_velocity_speed_1806f7618._0_4_;
  *(undefined4 *)(local_b8 + 4) = uVar4;
  *(undefined4 *)(local_b8 + 8) = uVar5;
  *(undefined4 *)(local_b8 + 0xc) = uVar6;
  *(ulonglong *)(local_b8 + 0xf) =
       CONCAT71(s_legitbot_velocity_speed_1806f7618._16_7_,s_legitbot_velocity_speed_1806f7618[0xf])
  ;
  local_b8[0x17] = '\0';
  plVar1 = (longlong *)param_1[1];
  if ((ulonglong)plVar1[3] < 0x10) {
    plVar18 = plVar1;
  }
  else {
    plVar18 = (longlong *)*plVar1;
  }
  uVar10 = FUN_18000f490(&local_b8);
  cVar8 = FUN_180029800(uVar10,local_a8,plVar18,plVar1[2]);
  if (cVar8 != '\0') {
    FUN_1800f3030(*param_1,&local_b8,param_2 + 0x7a79);
  }
  FUN_18000f890(&local_b8);
  FUN_180013350(&local_b8,"legitbot.speed_color");
  FUN_18018a140(param_1,&local_b8,param_2 + 0x7a7c);
  FUN_18000f890(&local_b8);
  FUN_180013350(&local_b8,"legitbot.velocity_jump");
  FUN_180187420(param_1,&local_b8,param_2 + 0x7a8c);
  FUN_18000f890(&local_b8);
  FUN_180013350(&local_b8,"legitbot.jump_color");
  FUN_18018a140(param_1,&local_b8,param_2 + 0x7a90);
  FUN_18000f890(&local_b8);
  FUN_180013350(&local_b8,"legitbot.velocity_ground");
  FUN_180187420(param_1,&local_b8,param_2 + 0x7aa0);
  FUN_18000f890(&local_b8);
  FUN_180013350(&local_b8,"legitbot.ground_color");
  FUN_18018a140(param_1,&local_b8,param_2 + 0x7aa4);
  FUN_18000f890(&local_b8);
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_automatic_weapons_1806f7740._12_4_;
  uVar5 = s_legitbot_automatic_weapons_1806f7740._4_4_;
  local_a8 = 0x1a;
  local_a0 = 0x1f;
  uVar4 = CONCAT22(s_legitbot_automatic_weapons_1806f7740._10_2_,
                   s_legitbot_automatic_weapons_1806f7740._8_2_);
  *(undefined4 *)pcVar11 = s_legitbot_automatic_weapons_1806f7740._0_4_;
  *(undefined4 *)(pcVar11 + 4) = uVar5;
  *(undefined4 *)(pcVar11 + 8) = uVar4;
  *(undefined4 *)(pcVar11 + 0xc) = uVar6;
  uVar10 = s_legitbot_automatic_weapons_1806f7740._18_8_;
  *(ulonglong *)(pcVar11 + 10) =
       CONCAT26(s_legitbot_automatic_weapons_1806f7740._16_2_,
                CONCAT42(s_legitbot_automatic_weapons_1806f7740._12_4_,
                         s_legitbot_automatic_weapons_1806f7740._10_2_));
  *(undefined8 *)(pcVar11 + 0x12) = uVar10;
  pcVar11[0x1a] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  local_b8 = pcVar11;
  if ((*plVar1 == 0x1a) && (iVar9 = memcmp(pcVar11,puVar15,0x1a), iVar9 == 0)) {
    puVar12 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    for (puVar15 = *(undefined8 **)(*(longlong *)*param_1 + 0x48); puVar15 != puVar12;
        puVar15 = puVar15 + 0x10) {
      if ((ulonglong)puVar15[3] < 0x10) {
        puVar14 = puVar15;
      }
      else {
        puVar14 = (undefined8 *)*puVar15;
      }
      if ((puVar15[2] == 0x1a) && (iVar9 = memcmp(pcVar11,puVar14,0x1a), iVar9 == 0)) {
        if ((int *)(puVar15 + 4) != (int *)0x0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          iVar9 = *(int *)(puVar15 + 4);
          if (iVar9 == 1) {
            uVar7 = *(undefined1 *)((longlong)puVar15 + 0x24);
          }
          else if (iVar9 == 2) {
            if ((double)puVar15[5] == 0.0) {
              uVar7 = 0;
            }
            else {
              uVar7 = 1;
            }
          }
          else {
            uVar7 = *(undefined1 *)(param_2 + 0x7ab4);
          }
          *(undefined1 *)(param_2 + 0x7ab4) = uVar7;
          pcVar11 = local_b8;
        }
        break;
      }
    }
  }
  if (0xf < local_a0) {
    uVar17 = local_a0 + 1;
    pcVar16 = pcVar11;
    if (0xfff < uVar17) {
      pcVar16 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar16)) goto LAB_18018e0bc;
      uVar17 = local_a0 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar16,uVar17);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x30);
  uVar10 = s_legitbot_automatic_weapons_inter_1806f76e0._8_8_;
  local_a8 = 0x23;
  local_a0 = 0x2f;
  *(undefined8 *)pcVar11 = s_legitbot_automatic_weapons_inter_1806f76e0._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar10;
  uVar10 = CONCAT17(s_legitbot_automatic_weapons_inter_1806f76e0[0x1f],
                    s_legitbot_automatic_weapons_inter_1806f76e0._24_7_);
  *(undefined8 *)(pcVar11 + 0x10) = s_legitbot_automatic_weapons_inter_1806f76e0._16_8_;
  *(undefined8 *)(pcVar11 + 0x18) = uVar10;
  *(undefined4 *)(pcVar11 + 0x1f) = s_legitbot_automatic_weapons_inter_1806f76e0._31_4_;
  pcVar11[0x23] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  uVar17 = 0x2f;
  local_b8 = pcVar11;
  if ((*plVar1 == 0x23) && (iVar9 = memcmp(pcVar11,puVar15,0x23), iVar9 == 0)) {
    FUN_1800f3090(*param_1,&local_b8,param_2 + 0x7ab8);
    pcVar11 = local_b8;
    uVar17 = local_a0;
  }
  if (0xf < uVar17) {
    uVar13 = uVar17 + 1;
    pcVar16 = pcVar11;
    if (0xfff < uVar13) {
      pcVar16 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar16)) goto LAB_18018e0bc;
      uVar13 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar16,uVar13);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_standalone_recoil_1806f7708._12_4_;
  uVar5 = s_legitbot_standalone_recoil_1806f7708._4_4_;
  local_a8 = 0x1a;
  local_a0 = 0x1f;
  uVar4 = CONCAT22(s_legitbot_standalone_recoil_1806f7708._10_2_,
                   s_legitbot_standalone_recoil_1806f7708._8_2_);
  *(undefined4 *)pcVar11 = s_legitbot_standalone_recoil_1806f7708._0_4_;
  *(undefined4 *)(pcVar11 + 4) = uVar5;
  *(undefined4 *)(pcVar11 + 8) = uVar4;
  *(undefined4 *)(pcVar11 + 0xc) = uVar6;
  uVar10 = s_legitbot_standalone_recoil_1806f7708._18_8_;
  *(ulonglong *)(pcVar11 + 10) =
       CONCAT26(s_legitbot_standalone_recoil_1806f7708._16_2_,
                CONCAT42(s_legitbot_standalone_recoil_1806f7708._12_4_,
                         s_legitbot_standalone_recoil_1806f7708._10_2_));
  *(undefined8 *)(pcVar11 + 0x12) = uVar10;
  pcVar11[0x1a] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  uVar17 = 0x1f;
  local_b8 = pcVar11;
  if ((*plVar1 == 0x1a) && (iVar9 = memcmp(pcVar11,puVar15,0x1a), iVar9 == 0)) {
    puVar15 = *(undefined8 **)(*(longlong *)*param_1 + 0x48);
    puVar12 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    local_c8 = puVar12;
    if (puVar15 != puVar12) {
      do {
        if ((ulonglong)puVar15[3] < 0x10) {
          puVar14 = puVar15;
        }
        else {
          puVar14 = (undefined8 *)*puVar15;
        }
        if (puVar15[2] == 0x1a) {
          iVar9 = memcmp(pcVar11,puVar14,0x1a);
          if (iVar9 == 0) {
            if ((int *)(puVar15 + 4) != (int *)0x0) {
              *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
              iVar9 = *(int *)(puVar15 + 4);
              if (iVar9 == 1) {
                uVar7 = *(undefined1 *)((longlong)puVar15 + 0x24);
              }
              else if (iVar9 == 2) {
                if ((double)puVar15[5] == 0.0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = 1;
                }
              }
              else {
                uVar7 = *(undefined1 *)(param_2 + 0x7abc);
              }
              *(undefined1 *)(param_2 + 0x7abc) = uVar7;
              pcVar11 = local_b8;
              uVar17 = local_a0;
            }
            break;
          }
          puVar12 = local_c8;
        }
        puVar15 = puVar15 + 0x10;
      } while (puVar15 != puVar12);
    }
  }
  if (0xf < uVar17) {
    uVar13 = uVar17 + 1;
    pcVar16 = pcVar11;
    if (0xfff < uVar13) {
      pcVar16 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar16)) goto LAB_18018e0bc;
      uVar13 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar16,uVar13);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_b8 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_standalone__1806f7788._12_4_;
  uVar5 = s_legitbot_standalone__1806f7788._8_4_;
  uVar4 = s_legitbot_standalone__1806f7788._4_4_;
  local_a8 = 0x14;
  local_a0 = 0x1f;
  *(undefined4 *)local_b8 = s_legitbot_standalone__1806f7788._0_4_;
  *(undefined4 *)(local_b8 + 4) = uVar4;
  *(undefined4 *)(local_b8 + 8) = uVar5;
  *(undefined4 *)(local_b8 + 0xc) = uVar6;
  *(undefined4 *)(local_b8 + 0x10) = s_legitbot_standalone__1806f7788._16_4_;
  local_b8[0x14] = '\0';
  FUN_1801bcc60(param_1,&local_b8,param_2 + 0x7ac0);
  if (0xf < local_a0) {
    uVar17 = local_a0 + 1;
    pcVar11 = local_b8;
    if (0xfff < uVar17) {
      pcVar11 = *(char **)(local_b8 + -8);
      if ((char *)0x1f < local_b8 + (-8 - (longlong)pcVar11)) goto LAB_18018e0bc;
      uVar17 = local_a0 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar11,uVar17);
  }
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar11 = (char *)FUN_18000fb70(0x20);
  uVar10 = s_legitbot_randomize_1806f77a0._8_8_;
  local_a8 = 0x12;
  local_a0 = 0x1f;
  *(undefined8 *)pcVar11 = s_legitbot_randomize_1806f77a0._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar10;
  *(undefined2 *)(pcVar11 + 0x10) = s_legitbot_randomize_1806f77a0._16_2_;
  pcVar11[0x12] = '\0';
  puVar15 = (undefined8 *)param_1[1];
  plVar1 = puVar15 + 2;
  if (0xf < (ulonglong)puVar15[3]) {
    puVar15 = (undefined8 *)*puVar15;
  }
  uVar17 = 0x1f;
  local_b8 = pcVar11;
  if ((*plVar1 == 0x12) && (iVar9 = memcmp(pcVar11,puVar15,0x12), iVar9 == 0)) {
    FUN_1800f3090(*param_1,&local_b8,param_2 + 0x7ad4);
    pcVar11 = local_b8;
    uVar17 = local_a0;
  }
  if (0xf < uVar17) {
    uVar13 = uVar17 + 1;
    pcVar16 = pcVar11;
    if (0xfff < uVar13) {
      pcVar16 = *(char **)(pcVar11 + -8);
      if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar16)) {
LAB_18018e0bc:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar13 = uVar17 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar16,uVar13);
  }
  return;
}



/* ===== 18018e0d0 FUN_18018e0d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018e0d0(undefined8 *param_1,longlong param_2)

{
  size_t *psVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  size_t sVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char *pcVar14;
  ulonglong uVar15;
  undefined1 auStack_1c8 [40];
  char *local_1a0 [4];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  char *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  char *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  char *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong uStack_e8;
  char *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  local_120 = (char *)0x0;
  uStack_118 = 0;
  local_120 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_view__1806f7760._12_4_;
  uVar4 = s_visuals_world_view__1806f7760._8_4_;
  uVar3 = s_visuals_world_view__1806f7760._4_4_;
  local_110 = 0x13;
  local_108 = 0x1f;
  *(undefined4 *)local_120 = s_visuals_world_view__1806f7760._0_4_;
  *(undefined4 *)(local_120 + 4) = uVar3;
  *(undefined4 *)(local_120 + 8) = uVar4;
  *(undefined4 *)(local_120 + 0xc) = uVar5;
  *(uint *)(local_120 + 0xf) =
       CONCAT31(s_visuals_world_view__1806f7760._16_3_,s_visuals_world_view__1806f7760[0xf]);
  local_120[0x13] = '\0';
  uVar7 = FUN_180073a70(local_1a0,&local_120,"override_fov");
  FUN_180187420(param_1,uVar7,param_2);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_120,&DAT_1806e0e18);
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018e1d3;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 4);
  }
LAB_18018e1d3:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"override_aspect");
  FUN_180187420(param_1,uVar7,param_2 + 8);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_120,"aspect_scaling");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018e26c;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0xc);
  }
LAB_18018e26c:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_120,"aspect_value");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018e2d7;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x10);
  }
LAB_18018e2d7:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"disable_landing_bob");
  FUN_180187420(param_1,uVar7,param_2 + 0x14);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"scope_override_fov");
  FUN_180187420(param_1,uVar7,param_2 + 0x15);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_120,"scope_x1");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018e39e;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x18);
  }
LAB_18018e39e:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_120,"scope_x2");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018e409;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x1c);
  }
LAB_18018e409:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"instant_scope");
  FUN_180187420(param_1,uVar7,param_2 + 0x20);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"show_viewmodel");
  FUN_180187420(param_1,uVar7,param_2 + 0x21);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"force_viewmodel_fov");
  FUN_180187420(param_1,uVar7,param_2 + 0x22);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_override_fov");
  FUN_180187420(param_1,uVar7,param_2 + 0x23);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_120,"vm_fov");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018e52c;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x24);
  }
LAB_18018e52c:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_override_position");
  FUN_180187420(param_1,uVar7,param_2 + 0x28);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,&DAT_1806f78b0);
  FUN_180187500(param_1,uVar7,param_2 + 0x2c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,&DAT_1806f7884);
  FUN_180187500(param_1,uVar7,param_2 + 0x30);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,&DAT_1806f788c);
  FUN_180187500(param_1,uVar7,param_2 + 0x34);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_override_angles");
  FUN_180187420(param_1,uVar7,param_2 + 0x38);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_pitch");
  FUN_180187500(param_1,uVar7,param_2 + 0x3c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_yaw");
  FUN_180187500(param_1,uVar7,param_2 + 0x40);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_roll");
  FUN_180187500(param_1,uVar7,param_2 + 0x44);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"vm_override_modifiers");
  FUN_180187420(param_1,uVar7,param_2 + 0x48);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_120,"vm_bobbing");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018e735;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x4c);
  }
LAB_18018e735:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_120,"vm_rotation_sway");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018e7a0;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x50);
  }
LAB_18018e7a0:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_120,"vm_velocity_sway");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018e80b;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x54);
  }
LAB_18018e80b:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_120,"vm_in_air_offset");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018e876;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x58);
  }
LAB_18018e876:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_120,"vm_lower_weapon");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018e8e1;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x5c);
  }
LAB_18018e8e1:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_120,"vm_ladder_bob");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018e94c;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x60);
  }
LAB_18018e94c:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"force_third_person");
  FUN_180187420(param_1,uVar7,param_2 + 100);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"third_person_disablers");
  FUN_180189e90(param_1,uVar7,param_2 + 0x65);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"third_person_distance");
  FUN_1801871e0(param_1,uVar7,param_2 + 0x68);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"disable_overhead");
  FUN_180189e90(param_1,uVar7,param_2 + 0x6c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"unlock_spectating");
  FUN_180189e90(param_1,uVar7,param_2 + 0x6e);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_120,"visual_recoil");
  FUN_18018a010(param_1,uVar7,param_2 + 0x70);
  FUN_18000f890(local_1a0);
  FUN_180013350(local_180,"visuals_world.esp.");
  uVar7 = FUN_180073a70(local_1a0,local_180,&DAT_18058b61c);
  FUN_1801bce80(param_1,uVar7,param_2 + 0x74);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"bomb_defused");
  FUN_18018a140(param_1,uVar7,param_2 + 0xa8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"defuser");
  FUN_180187420(param_1,uVar7,param_2 + 0xb8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"defuser_in_time");
  FUN_18018a140(param_1,uVar7,param_2 + 0xbc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"defuser_too_late");
  FUN_18018a140(param_1,uVar7,param_2 + 0xcc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"damage_low");
  FUN_18018a140(param_1,uVar7,param_2 + 0xdc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"damage_high");
  FUN_18018a140(param_1,uVar7,param_2 + 0xec);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"bomb_colorize_effects");
  FUN_180187420(param_1,uVar7,param_2 + 0xfc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"bomb_explosion");
  FUN_18018a140(param_1,uVar7,param_2 + 0x100);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"bomb_light");
  FUN_18018a140(param_1,uVar7,param_2 + 0x110);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"weapons");
  FUN_1801bce80(param_1,uVar7,param_2 + 0x120);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"weapons_colorize_effects");
  FUN_180187420(param_1,uVar7,param_2 + 0x154);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"weapon_effect");
  FUN_18018a140(param_1,uVar7,param_2 + 0x158);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"impact_effect");
  FUN_18018a140(param_1,uVar7,param_2 + 0x168);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"hostages");
  FUN_1801bce80(param_1,uVar7,param_2 + 0x178);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"grenades");
  FUN_1801bce80(param_1,uVar7,param_2 + 0x1ac);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"grenade_lethal");
  FUN_18018a140(param_1,uVar7,param_2 + 0x1e0);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"grenade_utility");
  FUN_18018a140(param_1,uVar7,param_2 + 0x1f0);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"item_exponent");
  FUN_1801871e0(param_1,uVar7,param_2 + 0x200);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"item_thickness");
  FUN_180187500(param_1,uVar7,param_2 + 0x204);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"item_points_thickness");
  FUN_180187500(param_1,uVar7,param_2 + 0x208);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"item_shimmer");
  FUN_1801871e0(param_1,uVar7,param_2 + 0x20c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"smoke_radius");
  FUN_180187420(param_1,uVar7,param_2 + 0x210);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"smoke_radius_color");
  FUN_18018a140(param_1,uVar7,param_2 + 0x214);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"smoke_options");
  FUN_1801bd130(param_1,uVar7,param_2 + 0x224);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"inferno_radius");
  FUN_180187420(param_1,uVar7,param_2 + 0x238);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"inferno_lethal");
  FUN_18018a140(param_1,uVar7,param_2 + 0x23c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"inferno_safe");
  FUN_18018a140(param_1,uVar7,param_2 + 0x24c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"inferno_options");
  FUN_1801bd130(param_1,uVar7,param_2 + 0x25c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"projectile_inferno");
  FUN_180187420(param_1,uVar7,param_2 + 0x270);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"projectile_lethal");
  FUN_18018a140(param_1,uVar7,param_2 + 0x274);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"projectile_safe");
  FUN_18018a140(param_1,uVar7,param_2 + 0x284);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"colorize_smoke");
  FUN_180187420(param_1,uVar7,param_2 + 0x294);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"smoke_ct");
  FUN_18018a140(param_1,uVar7,param_2 + 0x298);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"smoke_t");
  FUN_18018a140(param_1,uVar7,param_2 + 0x2a8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"colorize_molotov");
  FUN_180187420(param_1,uVar7,param_2 + 0x2b8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"molotov_lethal");
  FUN_18018a140(param_1,uVar7,param_2 + 700);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"molotov_safe");
  FUN_18018a140(param_1,uVar7,param_2 + 0x2cc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"disable_inferno_decals");
  FUN_180187420(param_1,uVar7,param_2 + 0x2dc);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"colorize_explosion");
  FUN_180187420(param_1,uVar7,param_2 + 0x2dd);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"explosion_color");
  FUN_18018a140(param_1,uVar7,param_2 + 0x2e0);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"effects");
  FUN_180187420(param_1,uVar7,param_2 + 0x2f0);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"effects_color");
  FUN_18018a140(param_1,uVar7,param_2 + 0x2f4);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"effects_items");
  FUN_18018a1c0(param_1,uVar7,param_2 + 0x304);
  FUN_18000f890(local_1a0);
  uVar15 = 0;
  do {
    uVar7 = FUN_18004e4f0(&local_a0,uVar15);
    uVar9 = FUN_180073a70(&local_80,local_180,"effects_item_color");
    puVar8 = (undefined8 *)FUN_180066820(local_1a0,uVar9,uVar7);
    puVar11 = (undefined8 *)param_1[1];
    psVar1 = puVar11 + 2;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    sVar10 = puVar8[2];
    if ((ulonglong)puVar8[3] < 0x10) {
      puVar12 = puVar8;
    }
    else {
      puVar12 = (undefined8 *)*puVar8;
    }
    if (sVar10 == *psVar1) {
      if (sVar10 != 0) {
        iVar6 = memcmp(puVar12,puVar11,sVar10);
        if (iVar6 != 0) goto LAB_18018f3b5;
      }
      FUN_18019e140(*param_1,puVar8,uVar15 * 0x10 + param_2 + 0x30c);
    }
LAB_18018f3b5:
    FUN_18000f890(local_1a0);
    FUN_18000f890(&local_80);
    FUN_18000f890(&local_a0);
    uVar15 = uVar15 + 1;
  } while (uVar15 < 5);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"effects_item_inherit");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018f445;
    }
    FUN_180152490(*param_1,puVar8,param_2 + 0x35c);
  }
LAB_18018f445:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"trajectory");
  FUN_180187420(param_1,uVar7,param_2 + 0x361);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"trajectory_base");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018f4e6;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x364);
  }
LAB_18018f4e6:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"trajectory_hit");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018f555;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x374);
  }
LAB_18018f555:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"trajectory_team_damage");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018f5c4;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 900);
  }
LAB_18018f5c4:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"trajectory_exponent");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018f633;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x394);
  }
LAB_18018f633:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"trajectory_thickness");
  FUN_180187500(param_1,uVar7,param_2 + 0x398);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"trajectory_points_thickness");
  FUN_180187500(param_1,uVar7,param_2 + 0x39c);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"trajectory_shimmer");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018f706;
    }
    FUN_18019dbe0(*param_1,puVar8,param_2 + 0x3a0);
  }
LAB_18018f706:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,local_180,"trajectory_shimmer_strength");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018f775;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x3a4);
  }
LAB_18018f775:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"trajectory_thrown");
  FUN_180187420(param_1,uVar7,param_2 + 0x3a8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"trajectory_pin_pulled_only");
  FUN_180187420(param_1,uVar7,param_2 + 0x3a9);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,local_180,"trajectory_precise");
  FUN_180187420(param_1,uVar7,param_2 + 0x3aa);
  FUN_18000f890(local_1a0);
  local_140 = (char *)0x0;
  uStack_138 = 0;
  local_140 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_hud__1806f7df8._12_4_;
  uVar4 = s_visuals_world_hud__1806f7df8._8_4_;
  uVar3 = s_visuals_world_hud__1806f7df8._4_4_;
  local_130 = 0x12;
  local_128 = 0x1f;
  *(undefined4 *)local_140 = s_visuals_world_hud__1806f7df8._0_4_;
  *(undefined4 *)(local_140 + 4) = uVar3;
  *(undefined4 *)(local_140 + 8) = uVar4;
  *(undefined4 *)(local_140 + 0xc) = uVar5;
  *(undefined2 *)(local_140 + 0x10) = s_visuals_world_hud__1806f7df8._16_2_;
  local_140[0x12] = '\0';
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"radar");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018f8b7;
    }
    FUN_18019df50(*param_1,puVar8,param_2 + 0x3ac);
  }
LAB_18018f8b7:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_overlay");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018f925;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x3b0);
  }
LAB_18018f925:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_color_mode");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018f993;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x3b4);
  }
LAB_18018f993:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_color");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018fa01;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x3b8);
  }
LAB_18018fa01:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_outer");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018fa6f;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x3c8);
  }
LAB_18018fa6f:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_inner");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018fadd;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x3d8);
  }
LAB_18018fadd:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_selection");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018fb4b;
    }
    FUN_18019df50(*param_1,puVar8,param_2 + 1000);
  }
LAB_18018fb4b:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_rotation");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018fbb9;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x3ec);
  }
LAB_18018fbb9:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_offset");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018fc27;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x3f0);
  }
LAB_18018fc27:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_size");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018fc95;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x3f4);
  }
LAB_18018fc95:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_aspect");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018fd03;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x3f8);
  }
LAB_18018fd03:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_spread_scale");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018fd71;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x3fc);
  }
LAB_18018fd71:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"scope_glow");
  FUN_180187420(param_1,uVar7,param_2 + 0x400);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scope_glow_color");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018fe10;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x404);
  }
LAB_18018fe10:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"inaccuracy");
  FUN_180187420(param_1,uVar7,param_2 + 0x414);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"inaccuracy_color");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018feaf;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x418);
  }
LAB_18018feaf:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_follow_recoil");
  FUN_180187420(param_1,uVar7,param_2 + 0x428);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_only_in_scope");
  FUN_180187420(param_1,uVar7,param_2 + 0x429);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"inaccuracy_invert_fade");
  FUN_180187420(param_1,uVar7,param_2 + 0x42a);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"inaccuracy_fade_offset");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18018ffb0;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x42c);
  }
LAB_18018ffb0:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"preserve_notices");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18019001e;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x430);
  }
LAB_18019001e:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"hide_teammate_assists");
  FUN_180187420(param_1,uVar7,param_2 + 0x434);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scoreboard_opacity");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801900bd;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x438);
  }
LAB_1801900bd:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"scoreboard_width");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18019012b;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x43c);
  }
LAB_18019012b:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"reveal_money");
  FUN_180187420(param_1,uVar7,param_2 + 0x440);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"reveal_ranks");
  FUN_180187420(param_1,uVar7,param_2 + 0x441);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"equipment");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801901fb;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x444);
  }
LAB_1801901fb:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"equipment_items");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180190269;
    }
    FUN_1801c1990(*param_1,puVar8,param_2 + 0x448);
  }
LAB_180190269:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"force_sniper_crosshair");
  FUN_180187420(param_1,uVar7,param_2 + 0x451);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"force_while_scoped");
  FUN_180187420(param_1,uVar7,param_2 + 0x452);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"force_while_c4");
  FUN_180187420(param_1,uVar7,param_2 + 0x453);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"hide_while_knife");
  FUN_180187420(param_1,uVar7,param_2 + 0x454);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"hide_while_grenade");
  FUN_180187420(param_1,uVar7,param_2 + 0x455);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_140,"penetration");
  FUN_180187420(param_1,uVar7,param_2 + 0x456);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"penetration_base");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801903fd;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x458);
  }
LAB_1801903fd:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"penetration_penetrable");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18019046b;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x468);
  }
LAB_18019046b:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_140,"penetration_target");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801904d9;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x478);
  }
LAB_1801904d9:
  FUN_18000f890(local_1a0);
  local_e0 = (char *)0x0;
  uStack_d8 = 0;
  local_e0 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_removals__1806f8148._12_4_;
  uVar4 = s_visuals_world_removals__1806f8148._8_4_;
  uVar3 = s_visuals_world_removals__1806f8148._4_4_;
  local_d0 = 0x17;
  local_c8 = 0x1f;
  *(undefined4 *)local_e0 = s_visuals_world_removals__1806f8148._0_4_;
  *(undefined4 *)(local_e0 + 4) = uVar3;
  *(undefined4 *)(local_e0 + 8) = uVar4;
  *(undefined4 *)(local_e0 + 0xc) = uVar5;
  *(ulonglong *)(local_e0 + 0xf) =
       CONCAT71(s_visuals_world_removals__1806f8148._16_7_,s_visuals_world_removals__1806f8148[0xf])
  ;
  local_e0[0x17] = '\0';
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"team_intro");
  FUN_180187420(param_1,uVar7,param_2 + 0x488);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"panorama_dots");
  FUN_180187420(param_1,uVar7,param_2 + 0x489);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"bottom_gradient");
  FUN_180187420(param_1,uVar7,param_2 + 0x48a);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"damage_indicator");
  FUN_180187420(param_1,uVar7,param_2 + 0x48b);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"server_ads");
  FUN_180187420(param_1,uVar7,param_2 + 0x48c);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"flashbang");
  FUN_180187420(param_1,uVar7,param_2 + 0x48d);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,&DAT_1806e7598);
  FUN_180187420(param_1,uVar7,param_2 + 0x48e);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,&DAT_1806f816c);
  FUN_180187420(param_1,uVar7,param_2 + 0x48f);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"carried_hostage");
  FUN_180187420(param_1,uVar7,param_2 + 0x490);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"post_processing");
  FUN_180187420(param_1,uVar7,param_2 + 0x491);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"water");
  FUN_180187420(param_1,uVar7,param_2 + 0x492);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"blood");
  FUN_180187420(param_1,uVar7,param_2 + 0x493);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_e0,"decals");
  FUN_180187420(param_1,uVar7,param_2 + 0x494);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_e0,"ragdolls");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180190804;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x498);
  }
LAB_180190804:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_e0,"gravity");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180190872;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x49c);
  }
LAB_180190872:
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_e0,"friction");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801908e0;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x4a0);
  }
LAB_1801908e0:
  FUN_18000f890(local_1a0);
  local_a0 = (char *)0x0;
  uStack_98 = 0;
  local_a0 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_hitmarker__1806f81f8._12_4_;
  uVar4 = s_visuals_world_hitmarker__1806f81f8._8_4_;
  uVar3 = s_visuals_world_hitmarker__1806f81f8._4_4_;
  local_90 = 0x18;
  local_88 = 0x1f;
  *(undefined4 *)local_a0 = s_visuals_world_hitmarker__1806f81f8._0_4_;
  *(undefined4 *)(local_a0 + 4) = uVar3;
  *(undefined4 *)(local_a0 + 8) = uVar4;
  *(undefined4 *)(local_a0 + 0xc) = uVar5;
  *(undefined8 *)(local_a0 + 0x10) = s_visuals_world_hitmarker__1806f81f8._16_8_;
  local_a0[0x18] = '\0';
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"marker_2d");
  FUN_180187420(param_1,uVar7,param_2 + 0x4a4);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_a0,"color_2d");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801909bf;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x4a8);
  }
LAB_1801909bf:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"duration_2d");
  FUN_180187500(param_1,uVar7,param_2 + 0x4b8);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"marker_3d");
  FUN_180187420(param_1,uVar7,param_2 + 0x4bc);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_a0,"color_3d");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180190a8f;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x4c0);
  }
LAB_180190a8f:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"duration_3d");
  FUN_180187500(param_1,uVar7,param_2 + 0x4d0);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"damage");
  FUN_180187420(param_1,uVar7,param_2 + 0x4d4);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_a0,"color_damage");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180190b5f;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x4d8);
  }
LAB_180190b5f:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_a0,"duration_damage");
  FUN_180187500(param_1,uVar7,param_2 + 0x4e8);
  FUN_18000f890(local_1a0);
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_c0 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_tracers__1806f8290._8_4_;
  uVar4 = s_visuals_world_tracers__1806f8290._4_4_;
  local_b0 = 0x16;
  local_a8 = 0x1f;
  uVar3 = CONCAT22(s_visuals_world_tracers__1806f8290._14_2_,
                   s_visuals_world_tracers__1806f8290._12_2_);
  *(undefined4 *)local_c0 = s_visuals_world_tracers__1806f8290._0_4_;
  *(undefined4 *)(local_c0 + 4) = uVar4;
  *(undefined4 *)(local_c0 + 8) = uVar5;
  *(undefined4 *)(local_c0 + 0xc) = uVar3;
  *(ulonglong *)(local_c0 + 0xe) =
       CONCAT62(s_visuals_world_tracers__1806f8290._16_6_,s_visuals_world_tracers__1806f8290._14_2_)
  ;
  local_c0[0x16] = '\0';
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"enemies");
  FUN_180187420(param_1,uVar7,param_2 + 0x4ec);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_c0,"enemies_color");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180190c72;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x4f0);
  }
LAB_180190c72:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"enemies_duration");
  FUN_180187500(param_1,uVar7,param_2 + 0x500);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"teammates");
  FUN_180187420(param_1,uVar7,param_2 + 0x504);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_c0,"teammates_color");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180190d45;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x508);
  }
LAB_180190d45:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"teammates_duration");
  FUN_180187500(param_1,uVar7,param_2 + 0x518);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"local");
  FUN_180187420(param_1,uVar7,param_2 + 0x51c);
  FUN_18000f890(local_1a0);
  puVar8 = (undefined8 *)FUN_180073a70(local_1a0,&local_c0,"local_color");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180190e18;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x520);
  }
LAB_180190e18:
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"local_duration");
  FUN_180187500(param_1,uVar7,param_2 + 0x530);
  FUN_18000f890(local_1a0);
  uVar7 = FUN_180073a70(local_1a0,&local_c0,"shared");
  FUN_180187420(param_1,uVar7,param_2 + 0x534);
  FUN_18000f890(local_1a0);
  local_1a0[0] = "enemies";
  local_1a0[1] = "teammates";
  local_1a0[2] = "local";
  local_1a0[3] = "shared";
  uVar15 = 0;
  do {
    pcVar14 = local_1a0[uVar15];
    uVar7 = FUN_180073a70(local_60,&local_c0,"style_");
    sVar10 = strlen(pcVar14);
    puVar11 = (undefined8 *)FUN_1800134a0(uVar7,pcVar14,sVar10);
    local_80 = *puVar11;
    uStack_78 = puVar11[1];
    local_70 = puVar11[2];
    uStack_68 = puVar11[3];
    puVar11[2] = 0;
    puVar11[3] = 0xf;
    *(undefined1 *)puVar11 = 0;
    puVar11 = (undefined8 *)FUN_1800134a0(&local_80,&DAT_1806e6f24,1);
    local_100 = (char *)*puVar11;
    uStack_f8 = puVar11[1];
    local_f0 = puVar11[2];
    uStack_e8 = puVar11[3];
    puVar11[2] = 0;
    puVar11[3] = 0xf;
    *(undefined1 *)puVar11 = 0;
    FUN_18000f890(&local_80);
    FUN_18000f890(local_60);
    uVar7 = FUN_180073a70(local_160,&local_100,"use_3d_scale");
    FUN_180187420(param_1,uVar7,param_2 + 0x538 + uVar15 * 0x18);
    FUN_18000f890(local_160);
    puVar8 = (undefined8 *)FUN_180073a70(local_160,&local_100,"glow_opacity");
    puVar11 = (undefined8 *)param_1[1];
    psVar1 = puVar11 + 2;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    sVar10 = puVar8[2];
    if ((ulonglong)puVar8[3] < 0x10) {
      puVar12 = puVar8;
    }
    else {
      puVar12 = (undefined8 *)*puVar8;
    }
    if (sVar10 == *psVar1) {
      if (sVar10 != 0) {
        iVar6 = memcmp(puVar12,puVar11,sVar10);
        if (iVar6 != 0) goto LAB_180190fe8;
      }
      FUN_1800f3090(*param_1,puVar8,param_2 + 0x53c + uVar15 * 0x18);
    }
LAB_180190fe8:
    FUN_18000f890(local_160);
    uVar7 = FUN_180073a70(local_160,&local_100,"thickness");
    FUN_180187500(param_1,uVar7,param_2 + 0x540 + uVar15 * 0x18);
    FUN_18000f890(local_160);
    puVar8 = (undefined8 *)FUN_180073a70(local_160,&local_100,"scale");
    puVar11 = (undefined8 *)param_1[1];
    psVar1 = puVar11 + 2;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    sVar10 = puVar8[2];
    if ((ulonglong)puVar8[3] < 0x10) {
      puVar12 = puVar8;
    }
    else {
      puVar12 = (undefined8 *)*puVar8;
    }
    if (sVar10 == *psVar1) {
      if (sVar10 != 0) {
        iVar6 = memcmp(puVar12,puVar11,sVar10);
        if (iVar6 != 0) goto LAB_18019108d;
      }
      FUN_1800f3090(*param_1,puVar8,param_2 + 0x544 + uVar15 * 0x18);
    }
LAB_18019108d:
    FUN_18000f890(local_160);
    uVar7 = FUN_180073a70(local_160,&local_100,"glow_width");
    FUN_180187500(param_1,uVar7,param_2 + 0x548 + uVar15 * 0x18);
    FUN_18000f890(local_160);
    uVar7 = FUN_180073a70(local_160,&local_100,"glow_radius");
    FUN_180187500(param_1,uVar7,param_2 + 0x54c + uVar15 * 0x18);
    FUN_18000f890(local_160);
    FUN_18000f890(&local_100);
    uVar15 = uVar15 + 1;
  } while (uVar15 < 4);
  local_100 = (char *)0x0;
  uStack_f8 = 0;
  local_100 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_visuals_world_impacts__1806f8398._8_4_;
  uVar4 = s_visuals_world_impacts__1806f8398._4_4_;
  local_f0 = 0x16;
  uStack_e8 = 0x1f;
  uVar3 = CONCAT22(s_visuals_world_impacts__1806f8398._14_2_,
                   s_visuals_world_impacts__1806f8398._12_2_);
  *(undefined4 *)local_100 = s_visuals_world_impacts__1806f8398._0_4_;
  *(undefined4 *)(local_100 + 4) = uVar4;
  *(undefined4 *)(local_100 + 8) = uVar5;
  *(undefined4 *)(local_100 + 0xc) = uVar3;
  *(ulonglong *)(local_100 + 0xe) =
       CONCAT62(s_visuals_world_impacts__1806f8398._16_6_,s_visuals_world_impacts__1806f8398._14_2_)
  ;
  local_100[0x16] = '\0';
  uVar7 = FUN_180073a70(local_160,&local_100,"enabled");
  FUN_180187420(param_1,uVar7,param_2 + 0x598);
  FUN_18000f890(local_160);
  puVar8 = (undefined8 *)FUN_180073a70(local_160,&local_100,"client");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801911ed;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x59c);
  }
LAB_1801911ed:
  FUN_18000f890(local_160);
  puVar8 = (undefined8 *)FUN_180073a70(local_160,&local_100,"server");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18019125b;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x5ac);
  }
LAB_18019125b:
  FUN_18000f890(local_160);
  puVar8 = (undefined8 *)FUN_180073a70(local_160,&local_100,"scale");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801912c9;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x5bc);
  }
LAB_1801912c9:
  FUN_18000f890(local_160);
  puVar8 = (undefined8 *)FUN_180073a70(local_160,&local_100,"rounding");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180191337;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x5c0);
  }
LAB_180191337:
  FUN_18000f890(local_160);
  puVar8 = (undefined8 *)FUN_180073a70(local_160,&local_100,"fill_opacity");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801913a5;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x5c4);
  }
LAB_1801913a5:
  FUN_18000f890(local_160);
  puVar8 = (undefined8 *)FUN_180073a70(local_160,&local_100,"outline_opacity");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180191413;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x5c8);
  }
LAB_180191413:
  FUN_18000f890(local_160);
  puVar8 = (undefined8 *)FUN_180073a70(local_160,&local_100,"glow_opacity");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180191481;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x5cc);
  }
LAB_180191481:
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,&DAT_1806f83d8);
  FUN_180187500(param_1,uVar7,param_2 + 0x5d0);
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"duration");
  FUN_180187500(param_1,uVar7,param_2 + 0x5d4);
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"sparks");
  FUN_180187420(param_1,uVar7,param_2 + 0x5d8);
  FUN_18000f890(local_160);
  puVar8 = (undefined8 *)FUN_180073a70(local_160,&local_100,"sparks_color");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_180191582;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x5dc);
  }
LAB_180191582:
  FUN_18000f890(local_160);
  puVar8 = (undefined8 *)FUN_180073a70(local_160,&local_100,"sparks_glow");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801915f0;
    }
    FUN_18019e140(*param_1,puVar8,param_2 + 0x5ec);
  }
LAB_1801915f0:
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"sparks_radius");
  FUN_180187500(param_1,uVar7,param_2 + 0x5fc);
  FUN_18000f890(local_160);
  puVar8 = (undefined8 *)FUN_180073a70(local_160,&local_100,"sparks_count");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18019168f;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x600);
  }
LAB_18019168f:
  FUN_18000f890(local_160);
  puVar8 = (undefined8 *)FUN_180073a70(local_160,&local_100,"sparks_spread");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_1801916fd;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x604);
  }
LAB_1801916fd:
  FUN_18000f890(local_160);
  puVar8 = (undefined8 *)FUN_180073a70(local_160,&local_100,"sparks_height");
  puVar11 = (undefined8 *)param_1[1];
  if ((ulonglong)puVar11[3] < 0x10) {
    puVar12 = puVar11;
  }
  else {
    puVar12 = (undefined8 *)*puVar11;
  }
  sVar10 = puVar8[2];
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar13 = puVar8;
  }
  else {
    puVar13 = (undefined8 *)*puVar8;
  }
  if (sVar10 == puVar11[2]) {
    if (sVar10 != 0) {
      iVar6 = memcmp(puVar13,puVar12,sVar10);
      if (iVar6 != 0) goto LAB_18019176b;
    }
    FUN_1800f3090(*param_1,puVar8,param_2 + 0x608);
  }
LAB_18019176b:
  FUN_18000f890(local_160);
  uVar7 = FUN_180073a70(local_160,&local_100,"sparks_lifetime");
  FUN_180187500(param_1,uVar7,param_2 + 0x60c);
  FUN_18000f890(local_160);
  if (0xf < uStack_e8) {
    uVar15 = uStack_e8 + 1;
    pcVar14 = local_100;
    if (0xfff < uVar15) {
      pcVar14 = *(char **)(local_100 + -8);
      if ((char *)0x1f < local_100 + (-8 - (longlong)pcVar14)) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar15 = uStack_e8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar14,uVar15);
  }
  FUN_18000f890(&local_c0);
  FUN_18000f890(&local_a0);
  FUN_18000f890(&local_e0);
  FUN_18000f890(&local_140);
  FUN_18000f890(local_180);
  FUN_18000f890(&local_120);
  return;
}



/* ===== 180191850 FUN_180191850 ===== */

void FUN_180191850(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  uVar2 = 0;
  do {
    bVar1 = *(byte *)(uVar2 + param_3);
    if (bVar1 == 0) break;
    if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
      FUN_1800690a0(param_1,0x5c);
    }
    if (0x1f < bVar1) {
      FUN_1800690a0(param_1,bVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x60);
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  return;
}



/* ===== 1801918e0 FUN_1801918e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801918e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  FUN_1800f2db0();
  uVar1 = FUN_180073a70(local_48,param_2,"_mode");
  FUN_1800f2db0(param_1,uVar1,param_3 + 4);
  FUN_18000f890(local_48);
  return;
}



/* ===== 180191950 FUN_180191950 ===== */

void FUN_180191950(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  uVar2 = 0;
  do {
    bVar1 = *(byte *)(uVar2 + param_3);
    if (bVar1 == 0) break;
    if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
      FUN_1800690a0(param_1,0x5c);
    }
    if (0x1f < bVar1) {
      FUN_1800690a0(param_1,bVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x30);
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  return;
}



/* ===== 1801919e0 FUN_1801919e0 ===== */

void FUN_1801919e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  uVar2 = 0;
  do {
    bVar1 = *(byte *)(uVar2 + param_3);
    if (bVar1 == 0) break;
    if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
      FUN_1800690a0(param_1,0x5c);
    }
    if (0x1f < bVar1) {
      FUN_1800690a0(param_1,bVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  return;
}



/* ===== 180191a70 FUN_180191a70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180191a70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806e05f8,1);
  uVar3 = 0;
  do {
    if (uVar3 != 0) {
      FUN_1800134a0(param_1,&DAT_1806f0594,2);
    }
    puVar2 = (undefined8 *)FUN_1800f2be0(local_48,*(undefined4 *)(param_3 + uVar3 * 4));
    puVar1 = puVar2 + 2;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    FUN_1800134a0(param_1,puVar2,*puVar1);
    FUN_18000f890(local_48);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  FUN_1800134a0(param_1,&DAT_1806e9114,1);
  return;
}



/* ===== 180191b40 FUN_180191b40 ===== */

void FUN_180191b40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  uVar2 = 0;
  do {
    bVar1 = *(byte *)(uVar2 + param_3);
    if (bVar1 == 0) break;
    if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
      FUN_1800690a0(param_1,0x5c);
    }
    if (0x1f < bVar1) {
      FUN_1800690a0(param_1,bVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  return;
}



/* ===== 180191bd0 FUN_180191bd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180191bd0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *_Str;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_180073a70(local_88,param_2,".esp.enabled");
  FUN_1800f2cb0(param_1,uVar1);
  _Str = "false";
  pcVar4 = "false";
  if (*param_3 != '\0') {
    pcVar4 = "true";
  }
  sVar2 = strlen(pcVar4);
  FUN_1800134a0(param_1,pcVar4,sVar2);
  FUN_18000f890(local_88);
  uVar1 = FUN_180073a70(local_88,param_2,".esp.box");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar4 = "false";
  if (param_3[1] != '\0') {
    pcVar4 = "true";
  }
  sVar2 = strlen(pcVar4);
  FUN_1800134a0(param_1,pcVar4,sVar2);
  FUN_18000f890(local_88);
  uVar1 = FUN_180073a70(local_88,param_2,".esp.name");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar4 = "false";
  if (param_3[2] != '\0') {
    pcVar4 = "true";
  }
  sVar2 = strlen(pcVar4);
  FUN_1800134a0(param_1,pcVar4,sVar2);
  FUN_18000f890(local_88);
  uVar1 = FUN_180073a70(local_88,param_2,".esp.icon");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar4 = "false";
  if (param_3[3] != '\0') {
    pcVar4 = "true";
  }
  sVar2 = strlen(pcVar4);
  FUN_1800134a0(param_1,pcVar4,sVar2);
  FUN_18000f890(local_88);
  uVar1 = FUN_180073a70(local_88,param_2,".esp.distance");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar4 = "false";
  if (param_3[4] != '\0') {
    pcVar4 = "true";
  }
  sVar2 = strlen(pcVar4);
  FUN_1800134a0(param_1,pcVar4,sVar2);
  FUN_18000f890(local_88);
  uVar1 = FUN_180073a70(local_88,param_2,".esp.timer");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar4 = "false";
  if (param_3[5] != '\0') {
    pcVar4 = "true";
  }
  sVar2 = strlen(pcVar4);
  FUN_1800134a0(param_1,pcVar4,sVar2);
  FUN_18000f890(local_88);
  uVar1 = FUN_180073a70(local_88,param_2,".esp.damage");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar4 = "false";
  if (param_3[6] != '\0') {
    pcVar4 = "true";
  }
  sVar2 = strlen(pcVar4);
  FUN_1800134a0(param_1,pcVar4,sVar2);
  FUN_18000f890(local_88);
  uVar1 = FUN_180073a70(local_88,param_2,".esp.color");
  FUN_1801944c0(param_1,uVar1,param_3 + 8);
  FUN_18000f890(local_88);
  uVar1 = FUN_180073a70(local_88,param_2,".esp.max_distance");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x18);
  FUN_18000f890(local_88);
  uVar1 = FUN_180073a70(local_68,param_2,".chams");
  uVar3 = FUN_180073a70(local_88,uVar1,".enabled");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar4 = "false";
  if (param_3[0x1c] != '\0') {
    pcVar4 = "true";
  }
  sVar2 = strlen(pcVar4);
  FUN_1800134a0(param_1,pcVar4,sVar2);
  FUN_18000f890(local_88);
  uVar3 = FUN_180073a70(local_88,uVar1,".visible");
  FUN_1801c3340(param_1,uVar3,param_3 + 0x20);
  FUN_18000f890(local_88);
  uVar3 = FUN_180073a70(local_88,uVar1,".occluded");
  FUN_1801c3340(param_1,uVar3,param_3 + 0x38);
  FUN_18000f890(local_88);
  uVar3 = FUN_180073a70(local_88,uVar1,".overlay");
  FUN_1801c3340(param_1,uVar3,param_3 + 0x50);
  FUN_18000f890(local_88);
  uVar1 = FUN_180073a70(local_88,uVar1,".overlay_occluded");
  FUN_1801c3340(param_1,uVar1,param_3 + 0x68);
  FUN_18000f890(local_88);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,".glow.enabled");
  FUN_1800f2cb0(param_1,uVar1);
  if (param_3[0x80] != '\0') {
    _Str = "true";
  }
  sVar2 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,".glow.color");
  FUN_1801944c0(param_1,uVar1,param_3 + 0x84);
  FUN_18000f890(local_68);
  return;
}



/* ===== 180192030 FUN_180192030 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180192030(undefined8 param_1,undefined8 param_2,char *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  char *local_f0;
  ulonglong local_e8;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_118;
  local_f8 = param_2;
  local_f0 = param_3;
  uVar3 = FUN_180073a70(&local_80,param_2,".esp.enabled");
  FUN_1800f2cb0(param_1,uVar3);
  pcVar14 = "false";
  if (*param_3 != '\0') {
    pcVar14 = "true";
  }
  sVar4 = strlen(pcVar14);
  FUN_1800134a0(param_1,pcVar14,sVar4);
  FUN_18000f890();
  local_e8 = 0;
  do {
    uVar12 = local_e8;
    pcVar14 = (&PTR_s_health_bar_1805e7de0)[local_e8];
    uVar3 = FUN_180073a70(local_60,param_2,".esp.item.");
    sVar4 = strlen(pcVar14);
    puVar5 = (undefined4 *)FUN_1800134a0(uVar3,pcVar14,sVar4);
    local_80 = *puVar5;
    uStack_7c = puVar5[1];
    uStack_78 = puVar5[2];
    uStack_74 = puVar5[3];
    local_70 = puVar5[4];
    uStack_6c = puVar5[5];
    uStack_68 = puVar5[6];
    uStack_64 = puVar5[7];
    *(undefined1 *)puVar5 = 0;
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 6) = 0xf;
    FUN_18000f890(local_60);
    uVar3 = FUN_180073a70(local_c0,&local_80,".enabled");
    FUN_1800f2cb0(param_1,uVar3);
    pcVar14 = "false";
    if (param_3[uVar12 * 0x98 + 4] != '\0') {
      pcVar14 = "true";
    }
    sVar4 = strlen(pcVar14);
    FUN_1800134a0(param_1,pcVar14,sVar4);
    FUN_18000f890(local_c0);
    uVar3 = FUN_180073a70(local_a0,&local_80,".side");
    FUN_1800f2cb0(param_1,uVar3);
    puVar6 = (undefined8 *)FUN_18003a390(local_c0,*(undefined4 *)(param_3 + uVar12 * 0x98 + 8));
    puVar7 = puVar6 + 2;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    FUN_1800134a0(param_1,puVar6,*puVar7);
    FUN_18000f890(local_c0);
    FUN_18000f890(local_a0);
    uVar3 = FUN_180073a70(local_c0,&local_80,".position");
    FUN_1800f2cb0(param_1,uVar3);
    puVar6 = (undefined8 *)FUN_18003a390(local_a0,*(undefined4 *)(param_3 + uVar12 * 0x98 + 0xc));
    puVar7 = puVar6 + 2;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    FUN_1800134a0(param_1,puVar6,*puVar7);
    FUN_18000f890(local_a0);
    FUN_18000f890(local_c0);
    uVar3 = FUN_180073a70(local_c0,&local_80,".size");
    FUN_1800f2cb0(param_1,uVar3);
    puVar7 = (undefined8 *)FUN_18003a390(local_a0,*(undefined4 *)(param_3 + uVar12 * 0x98 + 0x10));
    if (0xf < (ulonglong)puVar7[3]) {
      puVar7 = (undefined8 *)*puVar7;
    }
    FUN_1800134a0(param_1,puVar7);
    FUN_18000f890(local_a0);
    FUN_18000f890(local_c0);
    iVar11 = 0;
    iVar2 = (&DAT_1805e7f10)[uVar12 * 0x46];
    if (0 < iVar2) {
      uVar13 = 0;
      iVar11 = 0;
      do {
        if (iVar11 < (int)((&DAT_1805e7f24)[uVar12 * 0x46 + uVar13 * 10] +
                          (&DAT_1805e7f20)[uVar12 * 0x46 + uVar13 * 10])) {
          iVar11 = (&DAT_1805e7f24)[uVar12 * 0x46 + uVar13 * 10] +
                   (&DAT_1805e7f20)[uVar12 * 0x46 + uVar13 * 10];
        }
        uVar17 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar17;
      } while ((int)uVar17 < iVar2);
    }
    if (1 < iVar2) {
      uVar3 = FUN_180073a70(local_c0,&local_80,".color_mode");
      FUN_1800f2cb0(param_1,uVar3);
      puVar6 = (undefined8 *)FUN_18003a390(local_a0,*(undefined4 *)(param_3 + uVar12 * 0x98 + 0x14))
      ;
      puVar7 = puVar6 + 2;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      FUN_1800134a0(param_1,puVar6,*puVar7);
      FUN_18000f890(local_a0);
      FUN_18000f890(local_c0);
    }
    uVar13 = 0;
    if (iVar11 < 1) {
      iVar11 = 1;
    }
    if (0 < iVar11) {
      do {
        uVar3 = FUN_18003a390(local_e0,uVar13);
        uVar8 = FUN_180073a70(local_c0,&local_80,".color");
        uVar3 = FUN_180066820(local_a0,uVar8,uVar3);
        FUN_1801944c0(param_1,uVar3,param_3 + uVar13 * 0x10 + uVar12 * 0x98 + 0x18);
        FUN_18000f890(local_a0);
        FUN_18000f890(local_c0);
        FUN_18000f890(local_e0);
        uVar17 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar17;
      } while ((int)uVar17 < iVar11);
    }
    pcVar14 = "false";
    if ((&DAT_1805e7eec)[uVar12 * 0x46] == 0) {
      uVar3 = FUN_180073a70(local_e0,&local_80,".background");
      FUN_1800f2cb0(param_1,uVar3);
      pcVar15 = "false";
      if (param_3[uVar12 * 0x98 + 0x78] != '\0') {
        pcVar15 = "true";
      }
      sVar4 = strlen(pcVar15);
      FUN_1800134a0(param_1,pcVar15,sVar4);
      FUN_18000f890(local_e0);
      uVar3 = FUN_180073a70(local_e0,&local_80,".shadow");
      FUN_1800f2cb0(param_1,uVar3);
      pcVar15 = "false";
      if (param_3[uVar12 * 0x98 + 0x79] != '\0') {
        pcVar15 = "true";
      }
      sVar4 = strlen(pcVar15);
      FUN_1800134a0(param_1,pcVar15,sVar4);
      FUN_18000f890(local_e0);
      uVar3 = FUN_180073a70(local_e0,&local_80,".shadow_color");
      FUN_1801944c0(param_1,uVar3,param_3 + uVar12 * 0x98 + 0x7c);
      FUN_18000f890(local_e0);
      uVar3 = FUN_180073a70(local_a0,&local_80,".format");
      FUN_1800f2cb0(param_1,uVar3);
      puVar6 = (undefined8 *)FUN_18003a390(local_e0,*(undefined4 *)(param_3 + uVar12 * 0x98 + 0x8c))
      ;
      puVar7 = puVar6 + 2;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      FUN_1800134a0(param_1,puVar6,*puVar7);
      FUN_18000f890(local_e0);
      FUN_18000f890(local_a0);
    }
    if ((&DAT_1805e7eec)[uVar12 * 0x46] - 1 < 2) {
      uVar3 = FUN_180073a70(local_a0,&local_80,".font");
      FUN_1800f2cb0(param_1,uVar3);
      puVar6 = (undefined8 *)FUN_18003a390(local_e0,*(undefined4 *)(param_3 + uVar12 * 0x98 + 0x90))
      ;
      puVar7 = puVar6 + 2;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      FUN_1800134a0(param_1,puVar6,*puVar7);
      FUN_18000f890(local_e0);
      FUN_18000f890(local_a0);
      uVar3 = FUN_180073a70(local_a0,&local_80,".case");
      FUN_1800f2cb0(param_1,uVar3);
      puVar6 = (undefined8 *)FUN_18003a390(local_e0,*(undefined4 *)(param_3 + uVar12 * 0x98 + 0x94))
      ;
      puVar7 = puVar6 + 2;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      FUN_1800134a0(param_1,puVar6,*puVar7);
      FUN_18000f890(local_e0);
      FUN_18000f890(local_a0);
    }
    if ((&DAT_1805e7eec)[uVar12 * 0x46] - 3 < 2) {
      uVar3 = FUN_180073a70(local_e0,&local_80,".inverted");
      FUN_1800f2cb0(param_1,uVar3);
      pcVar15 = "false";
      if (param_3[uVar12 * 0x98 + 0x98] != '\0') {
        pcVar15 = "true";
      }
      sVar4 = strlen(pcVar15);
      FUN_1800134a0(param_1,pcVar15,sVar4);
      FUN_18000f890(local_e0);
    }
    FUN_18000f890(&local_80);
    pcVar15 = local_f0;
    uVar3 = local_f8;
    local_e8 = local_e8 + 1;
    param_3 = local_f0;
    param_2 = local_f8;
  } while (local_e8 < 0x1d);
  uVar8 = FUN_180073a70(local_a0,local_f8,".esp.expected_damage");
  FUN_1800f2cb0(param_1,uVar8);
  puVar7 = (undefined8 *)FUN_18003a390(local_e0,*(undefined4 *)(pcVar15 + 0x113c));
  if ((ulonglong)puVar7[3] < 0x10) {
    puVar6 = puVar7;
  }
  else {
    puVar6 = (undefined8 *)*puVar7;
  }
  FUN_1800134a0(param_1,puVar6,puVar7[2]);
  FUN_18000f890(local_e0);
  FUN_18000f890(local_a0);
  uVar8 = FUN_180073a70(local_a0,uVar3,".esp.pulse_mode");
  FUN_1800f2cb0(param_1,uVar8);
  puVar7 = (undefined8 *)FUN_18003a390(local_e0,*(undefined4 *)(pcVar15 + 0x1140));
  if ((ulonglong)puVar7[3] < 0x10) {
    puVar6 = puVar7;
  }
  else {
    puVar6 = (undefined8 *)*puVar7;
  }
  FUN_1800134a0(param_1,puVar6,puVar7[2]);
  FUN_18000f890(local_e0);
  FUN_18000f890(local_a0);
  uVar12 = 0;
  do {
    uVar8 = FUN_18004e4f0(local_c0,uVar12);
    uVar9 = FUN_180073a70(local_a0,uVar3,".esp.pulse_color");
    uVar8 = FUN_180066820(local_e0,uVar9,uVar8);
    FUN_1801944c0(param_1,uVar8,pcVar15 + uVar12 * 0x10 + 0x1144);
    FUN_18000f890(local_e0);
    FUN_18000f890(local_a0);
    FUN_18000f890(local_c0);
    uVar12 = uVar12 + 1;
  } while (uVar12 < 3);
  uVar8 = FUN_180073a70(local_e0,uVar3,".esp.name_avatar");
  FUN_1800f2cb0(param_1,uVar8);
  pcVar16 = "false";
  if (pcVar15[0x1174] != '\0') {
    pcVar16 = "true";
  }
  sVar4 = strlen(pcVar16);
  FUN_1800134a0(param_1,pcVar16,sVar4);
  FUN_18000f890(local_e0);
  uVar8 = FUN_180073a70(local_a0,uVar3,".esp.icon_order0");
  FUN_1800f2cb0(param_1,uVar8);
  puVar7 = (undefined8 *)FUN_18003a390(local_e0,*(undefined4 *)(pcVar15 + 0x1178));
  if ((ulonglong)puVar7[3] < 0x10) {
    puVar6 = puVar7;
  }
  else {
    puVar6 = (undefined8 *)*puVar7;
  }
  FUN_1800134a0(param_1,puVar6,puVar7[2]);
  FUN_18000f890(local_e0);
  FUN_18000f890(local_a0);
  uVar8 = FUN_180073a70(local_a0,uVar3,".esp.icon_order1");
  FUN_1800f2cb0(param_1,uVar8);
  puVar7 = (undefined8 *)FUN_18003a390(local_e0,*(undefined4 *)(pcVar15 + 0x117c));
  if ((ulonglong)puVar7[3] < 0x10) {
    puVar6 = puVar7;
  }
  else {
    puVar6 = (undefined8 *)*puVar7;
  }
  FUN_1800134a0(param_1,puVar6,puVar7[2]);
  FUN_18000f890(local_e0);
  FUN_18000f890(local_a0);
  uVar8 = FUN_180073a70(local_e0,uVar3,".esp.icon_selection");
  FUN_1801940a0(param_1,uVar8,pcVar15 + 0x1180);
  FUN_18000f890(local_e0);
  uVar8 = FUN_180073a70(local_e0,uVar3,".esp.icon_dimming");
  FUN_180151da0(param_1,uVar8,pcVar15 + 0x1182);
  FUN_18000f890(local_e0);
  uVar8 = FUN_180073a70(local_e0,uVar3,".esp.icon_clip_rect");
  FUN_1800f2cb0(param_1,uVar8);
  pcVar16 = "false";
  if (pcVar15[0x1185] != '\0') {
    pcVar16 = "true";
  }
  sVar4 = strlen(pcVar16);
  FUN_1800134a0(param_1,pcVar16,sVar4);
  FUN_18000f890(local_e0);
  uVar8 = FUN_180073a70(local_e0,uVar3,".esp.icon_low_ammo");
  FUN_1800f2cb0(param_1,uVar8);
  pcVar16 = "false";
  if (pcVar15[0x1186] != '\0') {
    pcVar16 = "true";
  }
  sVar4 = strlen(pcVar16);
  FUN_1800134a0(param_1,pcVar16,sVar4);
  FUN_18000f890(local_e0);
  uVar8 = FUN_180073a70(local_e0,uVar3,".esp.icon_all_grenades");
  FUN_1800f2cb0(param_1,uVar8);
  pcVar16 = "false";
  if (pcVar15[0x1187] != '\0') {
    pcVar16 = "true";
  }
  sVar4 = strlen(pcVar16);
  FUN_1800134a0(param_1,pcVar16,sVar4);
  FUN_18000f890(local_e0);
  uVar8 = FUN_180073a70(local_e0,uVar3,".esp.icon_pin_pulled");
  FUN_1801944c0(param_1,uVar8,pcVar15 + 0x1188);
  FUN_18000f890(local_e0);
  uVar8 = FUN_180073a70(local_e0,uVar3,".esp.taser_in_hand");
  FUN_1801944c0(param_1,uVar8,pcVar15 + 0x1198);
  FUN_18000f890(local_e0);
  uVar8 = FUN_180073a70(local_e0,uVar3,".esp.offscreen_arrows");
  FUN_1800f2cb0(param_1,uVar8);
  pcVar16 = "false";
  if (pcVar15[0x11a8] != '\0') {
    pcVar16 = "true";
  }
  sVar4 = strlen(pcVar16);
  FUN_1800134a0(param_1,pcVar16,sVar4);
  FUN_18000f890(local_e0);
  uVar8 = FUN_180073a70(local_e0,uVar3,".esp.arrow_color");
  FUN_1801944c0(param_1,uVar8,pcVar15 + 0x11ac);
  FUN_18000f890(local_e0);
  uVar8 = FUN_180073a70(local_a0,uVar3,".esp.offscreen_arrow_size");
  FUN_1800f2cb0(param_1,uVar8);
  puVar7 = (undefined8 *)FUN_18003a390(local_e0,*(undefined4 *)(pcVar15 + 0x11bc));
  if ((ulonglong)puVar7[3] < 0x10) {
    puVar6 = puVar7;
  }
  else {
    puVar6 = (undefined8 *)*puVar7;
  }
  FUN_1800134a0(param_1,puVar6,puVar7[2]);
  FUN_18000f890(local_e0);
  FUN_18000f890(local_a0);
  uVar8 = FUN_180073a70(local_a0,uVar3,".esp.offscreen_arrow_radius");
  FUN_1800f2cb0(param_1,uVar8);
  puVar7 = (undefined8 *)FUN_18003a390(local_e0,*(undefined4 *)(pcVar15 + 0x11c0));
  if ((ulonglong)puVar7[3] < 0x10) {
    puVar6 = puVar7;
  }
  else {
    puVar6 = (undefined8 *)*puVar7;
  }
  FUN_1800134a0(param_1,puVar6,puVar7[2]);
  FUN_18000f890(local_e0);
  FUN_18000f890(local_a0);
  uVar8 = FUN_180073a70(local_e0,uVar3,".esp.sounds");
  FUN_1800f2cb0(param_1,uVar8);
  pcVar16 = "false";
  if (pcVar15[0x11c4] != '\0') {
    pcVar16 = "true";
  }
  sVar4 = strlen(pcVar16);
  FUN_1800134a0(param_1,pcVar16,sVar4);
  FUN_18000f890(local_e0);
  uVar3 = FUN_180073a70(local_e0,uVar3,".esp.sound_color");
  FUN_1801944c0(param_1,uVar3,pcVar15 + 0x11c8);
  FUN_18000f890(local_e0);
  uVar12 = 0;
  do {
    lVar10 = uVar12 * 0x74;
    uVar3 = FUN_18004e4f0(local_a0,uVar12);
    uVar8 = FUN_180073a70(local_e0,local_f8,".esp.custom");
    FUN_180066820(&local_80,uVar8,uVar3);
    FUN_18000f890(local_e0);
    FUN_18000f890(local_a0);
    uVar3 = FUN_180073a70(local_c0,&local_80,&DAT_1806f6a6c);
    FUN_1800f2cb0(param_1,uVar3);
    FUN_1800134a0(param_1,&DAT_1806dfffc,1);
    uVar13 = 0;
    do {
      bVar1 = pcVar15[uVar13 + 0x11d8 + lVar10];
      if (bVar1 == 0) break;
      if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
        FUN_1800690a0(param_1,0x5c);
      }
      if (0x1f < bVar1) {
        FUN_1800690a0(param_1,bVar1);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < 0x40);
    FUN_1800134a0(param_1,&DAT_1806dfffc,1);
    FUN_18000f890(local_c0);
    if (pcVar15[lVar10 + 0x11d8] != '\0') {
      uVar3 = FUN_180073a70(local_c0,&local_80,".enabled");
      FUN_1800f2cb0(param_1,uVar3);
      pcVar16 = "false";
      if (pcVar15[lVar10 + 0x1218] != '\0') {
        pcVar16 = "true";
      }
      sVar4 = strlen(pcVar16);
      FUN_1800134a0(param_1,pcVar16,sVar4);
      FUN_18000f890(local_c0);
      uVar3 = FUN_180073a70(local_60,&local_80,".side");
      FUN_1800f2cb0(param_1,uVar3);
      puVar6 = (undefined8 *)FUN_18003a390(local_c0,*(undefined4 *)(pcVar15 + lVar10 + 0x121c));
      puVar7 = puVar6 + 2;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      FUN_1800134a0(param_1,puVar6,*puVar7);
      FUN_18000f890(local_c0);
      FUN_18000f890(local_60);
      uVar3 = FUN_180073a70(local_60,&local_80,".order");
      FUN_1800f2cb0(param_1,uVar3);
      puVar6 = (undefined8 *)FUN_18003a390(local_c0,*(undefined4 *)(pcVar15 + lVar10 + 0x1220));
      puVar7 = puVar6 + 2;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      FUN_1800134a0(param_1,puVar6,*puVar7);
      FUN_18000f890(local_c0);
      FUN_18000f890(local_60);
      uVar3 = FUN_180073a70(local_c0,&local_80,".color");
      FUN_1801944c0(param_1,uVar3,pcVar15 + lVar10 + 0x1224);
      FUN_18000f890(local_c0);
      uVar3 = FUN_180073a70(local_c0,&local_80,".second");
      FUN_1801944c0(param_1,uVar3,pcVar15 + lVar10 + 0x1234);
      FUN_18000f890(local_c0);
      uVar3 = FUN_180073a70(local_60,&local_80,".size");
      FUN_1800f2cb0(param_1,uVar3);
      puVar6 = (undefined8 *)FUN_18003a390(local_c0,*(undefined4 *)(pcVar15 + lVar10 + 0x1244));
      puVar7 = puVar6 + 2;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      FUN_1800134a0(param_1,puVar6,*puVar7);
      FUN_18000f890(local_c0);
      FUN_18000f890(local_60);
      uVar3 = FUN_180073a70(local_c0,&local_80,".small");
      FUN_1800f2cb0(param_1,uVar3);
      pcVar16 = "false";
      if (pcVar15[lVar10 + 0x1248] != '\0') {
        pcVar16 = "true";
      }
      sVar4 = strlen(pcVar16);
      FUN_1800134a0(param_1,pcVar16,sVar4);
      FUN_18000f890(local_c0);
      uVar3 = FUN_180073a70(local_c0,&local_80,".text");
      FUN_1800f2cb0(param_1,uVar3);
      pcVar16 = "false";
      if (pcVar15[lVar10 + 0x1249] != '\0') {
        pcVar16 = "true";
      }
      sVar4 = strlen(pcVar16);
      FUN_1800134a0(param_1,pcVar16,sVar4);
      FUN_18000f890(local_c0);
    }
    FUN_18000f890(&local_80);
    pcVar15 = local_f0;
    uVar3 = local_f8;
    uVar12 = uVar12 + 1;
    if (0xf < uVar12) {
      uVar8 = FUN_180073a70(local_e0,local_f8,".glow.enabled");
      FUN_1800f2cb0(param_1,uVar8);
      if (pcVar15[0x1918] != '\0') {
        pcVar14 = "true";
      }
      sVar4 = strlen(pcVar14);
      FUN_1800134a0(param_1,pcVar14,sVar4);
      FUN_18000f890(local_e0);
      uVar3 = FUN_180073a70(local_e0,uVar3,".glow.color");
      FUN_1801944c0(param_1,uVar3,pcVar15 + 0x191c);
      FUN_18000f890(local_e0);
      return;
    }
  } while( true );
}



/* ===== 1801930d0 FUN_1801930d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801930d0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  size_t sVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *_Str;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_a8;
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_player_1806f6a70._12_4_;
  uVar3 = s_model_enemy_player_1806f6a70._8_4_;
  uVar2 = s_model_enemy_player_1806f6a70._4_4_;
  local_78 = 0x12;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_enemy_player_1806f6a70._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  *(undefined2 *)(local_88 + 0x10) = s_model_enemy_player_1806f6a70._16_2_;
  local_88[0x12] = '\0';
  FUN_180194f70(param_1,&local_88,param_2);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_behind_walls_1806f6a88._12_4_;
  uVar3 = s_model_enemy_behind_walls_1806f6a88._8_4_;
  uVar2 = s_model_enemy_behind_walls_1806f6a88._4_4_;
  local_78 = 0x18;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_enemy_behind_walls_1806f6a88._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  *(undefined8 *)(local_88 + 0x10) = s_model_enemy_behind_walls_1806f6a88._16_8_;
  local_88[0x18] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0x58);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_on_shot_1806f6ae8._12_4_;
  uVar3 = s_model_enemy_on_shot_1806f6ae8._8_4_;
  uVar2 = s_model_enemy_on_shot_1806f6ae8._4_4_;
  local_78 = 0x13;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_enemy_on_shot_1806f6ae8._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  *(uint *)(local_88 + 0xf) =
       CONCAT31(s_model_enemy_on_shot_1806f6ae8._16_3_,s_model_enemy_on_shot_1806f6ae8[0xf]);
  local_88[0x13] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0xb0);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_on_shot_glow_1806f6b00._12_4_;
  uVar3 = s_model_enemy_on_shot_glow_1806f6b00._8_4_;
  uVar2 = s_model_enemy_on_shot_glow_1806f6b00._4_4_;
  local_78 = 0x18;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_enemy_on_shot_glow_1806f6b00._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  *(undefined8 *)(local_88 + 0x10) = s_model_enemy_on_shot_glow_1806f6b00._16_8_;
  local_88[0x18] = '\0';
  FUN_1801952b0(param_1,&local_88,param_2 + 0x108);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  pcVar5 = (char *)FUN_18000fb70(0x20);
  local_78 = 0x1c;
  local_70 = 0x1f;
  uVar8 = CONCAT44(s_model_enemy_on_shot_duration_1806f6ab0._12_4_,
                   s_model_enemy_on_shot_duration_1806f6ab0._8_4_);
  *(undefined8 *)pcVar5 = s_model_enemy_on_shot_duration_1806f6ab0._0_8_;
  *(undefined8 *)(pcVar5 + 8) = uVar8;
  uVar8 = s_model_enemy_on_shot_duration_1806f6ab0._20_8_;
  *(ulonglong *)(pcVar5 + 0xc) =
       CONCAT44(s_model_enemy_on_shot_duration_1806f6ab0._16_4_,
                s_model_enemy_on_shot_duration_1806f6ab0._12_4_);
  *(undefined8 *)(pcVar5 + 0x14) = uVar8;
  pcVar5[0x1c] = '\0';
  _Str = ",\n";
  pcVar11 = ",\n";
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar11 = "{\n";
  }
  local_88 = pcVar5;
  sVar6 = strlen(pcVar11);
  FUN_1800134a0(param_1,pcVar11,sVar6);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  FUN_1800134a0(param_1,pcVar5,0x1c);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  puVar7 = (undefined8 *)FUN_1800f2be0(local_68,*(undefined4 *)(param_2 + 0x11c));
  if ((ulonglong)puVar7[3] < 0x10) {
    puVar10 = puVar7;
  }
  else {
    puVar10 = (undefined8 *)*puVar7;
  }
  FUN_1800134a0(param_1,puVar10,puVar7[2]);
  FUN_18000f890(local_68);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_history_1806f6ad0._12_4_;
  uVar3 = s_model_enemy_history_1806f6ad0._8_4_;
  uVar2 = s_model_enemy_history_1806f6ad0._4_4_;
  local_78 = 0x13;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_enemy_history_1806f6ad0._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  *(uint *)(local_88 + 0xf) =
       CONCAT31(s_model_enemy_history_1806f6ad0._16_3_,s_model_enemy_history_1806f6ad0[0xf]);
  local_88[0x13] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0x120);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_history_glow_1806f6b60._12_4_;
  uVar3 = s_model_enemy_history_glow_1806f6b60._8_4_;
  uVar2 = s_model_enemy_history_glow_1806f6b60._4_4_;
  local_78 = 0x18;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_enemy_history_glow_1806f6b60._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  *(undefined8 *)(local_88 + 0x10) = s_model_enemy_history_glow_1806f6b60._16_8_;
  local_88[0x18] = '\0';
  FUN_1801952b0(param_1,&local_88,param_2 + 0x178);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_ragdolls_1806f6b80._12_4_;
  uVar3 = s_model_enemy_ragdolls_1806f6b80._8_4_;
  uVar2 = s_model_enemy_ragdolls_1806f6b80._4_4_;
  local_78 = 0x14;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_enemy_ragdolls_1806f6b80._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  *(undefined4 *)(local_88 + 0x10) = s_model_enemy_ragdolls_1806f6b80._16_4_;
  local_88[0x14] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0x18c);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_ragdolls_glow_1806f6b20._12_4_;
  uVar3 = s_model_enemy_ragdolls_glow_1806f6b20._8_4_;
  uVar2 = s_model_enemy_ragdolls_glow_1806f6b20._4_4_;
  local_78 = 0x19;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_enemy_ragdolls_glow_1806f6b20._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  uVar4 = s_model_enemy_ragdolls_glow_1806f6b20._21_4_;
  uVar3 = s_model_enemy_ragdolls_glow_1806f6b20._17_4_;
  uVar2 = CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0x10],
                   s_model_enemy_ragdolls_glow_1806f6b20._13_3_);
  *(uint *)(local_88 + 9) =
       CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0xc],
                s_model_enemy_ragdolls_glow_1806f6b20._9_3_);
  *(undefined4 *)(local_88 + 0xd) = uVar2;
  *(undefined4 *)(local_88 + 0x11) = uVar3;
  *(undefined4 *)(local_88 + 0x15) = uVar4;
  local_88[0x19] = '\0';
  FUN_1801952b0(param_1,&local_88,param_2 + 0x1e4);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_enemy_ragdolls_visibility_1806f6b40._12_4_;
  uVar3 = s_model_enemy_ragdolls_visibility_1806f6b40._8_4_;
  uVar2 = s_model_enemy_ragdolls_visibility_1806f6b40._4_4_;
  local_78 = 0x1f;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_enemy_ragdolls_visibility_1806f6b40._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  uVar4 = s_model_enemy_ragdolls_visibility_1806f6b40._27_4_;
  uVar3 = s_model_enemy_ragdolls_visibility_1806f6b40._23_4_;
  uVar2 = s_model_enemy_ragdolls_visibility_1806f6b40._19_4_;
  *(uint *)(local_88 + 0xf) =
       CONCAT31(s_model_enemy_ragdolls_visibility_1806f6b40._16_3_,
                s_model_enemy_ragdolls_visibility_1806f6b40[0xf]);
  *(undefined4 *)(local_88 + 0x13) = uVar2;
  *(undefined4 *)(local_88 + 0x17) = uVar3;
  *(undefined4 *)(local_88 + 0x1b) = uVar4;
  local_88[0x1f] = '\0';
  FUN_1801940a0(param_1,&local_88,param_2 + 0x1f8);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_team_player_1806f6bd8._12_4_;
  uVar3 = s_model_team_player_1806f6bd8._8_4_;
  uVar2 = s_model_team_player_1806f6bd8._4_4_;
  local_78 = 0x11;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_team_player_1806f6bd8._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  local_88[0x10] = s_model_team_player_1806f6bd8[0x10];
  local_88[0x11] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0x1fc);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_team_behind_walls_1806f6bf0._12_4_;
  uVar3 = s_model_team_behind_walls_1806f6bf0._8_4_;
  uVar2 = s_model_team_behind_walls_1806f6bf0._4_4_;
  local_78 = 0x17;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_team_behind_walls_1806f6bf0._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  *(ulonglong *)(local_88 + 0xf) =
       CONCAT71(s_model_team_behind_walls_1806f6bf0._16_7_,s_model_team_behind_walls_1806f6bf0[0xf])
  ;
  local_88[0x17] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0x254);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  pcVar5 = (char *)FUN_18000fb70(0x30);
  uVar8 = s_model_team_disable_model_renderi_1806f6b98._8_8_;
  local_78 = 0x22;
  local_70 = 0x2f;
  *(undefined8 *)pcVar5 = s_model_team_disable_model_renderi_1806f6b98._0_8_;
  *(undefined8 *)(pcVar5 + 8) = uVar8;
  uVar8 = s_model_team_disable_model_renderi_1806f6b98._24_8_;
  *(undefined8 *)(pcVar5 + 0x10) = s_model_team_disable_model_renderi_1806f6b98._16_8_;
  *(undefined8 *)(pcVar5 + 0x18) = uVar8;
  *(undefined2 *)(pcVar5 + 0x20) = s_model_team_disable_model_renderi_1806f6b98._32_2_;
  pcVar5[0x22] = '\0';
  pcVar11 = ",\n";
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar11 = "{\n";
  }
  local_88 = pcVar5;
  sVar6 = strlen(pcVar11);
  FUN_1800134a0(param_1,pcVar11,sVar6);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  FUN_1800134a0(param_1,pcVar5,0x22);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  pcVar11 = "false";
  pcVar5 = "false";
  if (*(char *)(param_2 + 0x2ac) != '\0') {
    pcVar5 = "true";
  }
  sVar6 = strlen(pcVar5);
  FUN_1800134a0(param_1,pcVar5,sVar6);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_player_1806f6bc0._12_4_;
  uVar3 = s_model_local_player_1806f6bc0._8_4_;
  uVar2 = s_model_local_player_1806f6bc0._4_4_;
  local_78 = 0x12;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_local_player_1806f6bc0._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  *(undefined2 *)(local_88 + 0x10) = s_model_local_player_1806f6bc0._16_2_;
  local_88[0x12] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0x2b0);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_player_overlay_1806f6c40._4_4_;
  local_78 = 0x1a;
  local_70 = 0x1f;
  uVar2 = CONCAT22(s_model_local_player_overlay_1806f6c40._10_2_,
                   s_model_local_player_overlay_1806f6c40._8_2_);
  uVar3 = CONCAT22(s_model_local_player_overlay_1806f6c40._14_2_,
                   s_model_local_player_overlay_1806f6c40._12_2_);
  *(undefined4 *)local_88 = s_model_local_player_overlay_1806f6c40._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar4;
  *(undefined4 *)(local_88 + 8) = uVar2;
  *(undefined4 *)(local_88 + 0xc) = uVar3;
  uVar4 = s_model_local_player_overlay_1806f6c40._22_4_;
  uVar3 = s_model_local_player_overlay_1806f6c40._18_4_;
  uVar2 = CONCAT22(s_model_local_player_overlay_1806f6c40._16_2_,
                   s_model_local_player_overlay_1806f6c40._14_2_);
  *(uint *)(local_88 + 10) =
       CONCAT22(s_model_local_player_overlay_1806f6c40._12_2_,
                s_model_local_player_overlay_1806f6c40._10_2_);
  *(undefined4 *)(local_88 + 0xe) = uVar2;
  *(undefined4 *)(local_88 + 0x12) = uVar3;
  *(undefined4 *)(local_88 + 0x16) = uVar4;
  local_88[0x1a] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0x308);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_skeleton_1806f6c60._12_4_;
  uVar3 = s_model_local_skeleton_1806f6c60._8_4_;
  uVar2 = s_model_local_skeleton_1806f6c60._4_4_;
  local_78 = 0x14;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_local_skeleton_1806f6c60._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  *(undefined4 *)(local_88 + 0x10) = s_model_local_skeleton_1806f6c60._16_4_;
  local_88[0x14] = '\0';
  FUN_1801952b0(param_1,&local_88,param_2 + 0x360);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_arms_1806f6c08._12_4_;
  uVar3 = s_model_local_arms_1806f6c08._8_4_;
  uVar2 = s_model_local_arms_1806f6c08._4_4_;
  local_78 = 0x10;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_local_arms_1806f6c08._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  local_88[0x10] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0x374);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_arms_overlay_1806f6c20._12_4_;
  uVar3 = s_model_local_arms_overlay_1806f6c20._8_4_;
  uVar2 = s_model_local_arms_overlay_1806f6c20._4_4_;
  local_78 = 0x18;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_local_arms_overlay_1806f6c20._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  *(undefined8 *)(local_88 + 0x10) = s_model_local_arms_overlay_1806f6c20._16_8_;
  local_88[0x18] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0x3cc);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_gloves_1806f6cb0._12_4_;
  uVar3 = s_model_local_gloves_1806f6cb0._8_4_;
  uVar2 = s_model_local_gloves_1806f6cb0._4_4_;
  local_78 = 0x12;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_local_gloves_1806f6cb0._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  *(undefined2 *)(local_88 + 0x10) = s_model_local_gloves_1806f6cb0._16_2_;
  local_88[0x12] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0x424);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_gloves_overlay_1806f6cc8._4_4_;
  local_78 = 0x1a;
  local_70 = 0x1f;
  uVar2 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._10_2_,
                   s_model_local_gloves_overlay_1806f6cc8._8_2_);
  uVar3 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._14_2_,
                   s_model_local_gloves_overlay_1806f6cc8._12_2_);
  *(undefined4 *)local_88 = s_model_local_gloves_overlay_1806f6cc8._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar4;
  *(undefined4 *)(local_88 + 8) = uVar2;
  *(undefined4 *)(local_88 + 0xc) = uVar3;
  uVar4 = s_model_local_gloves_overlay_1806f6cc8._22_4_;
  uVar3 = s_model_local_gloves_overlay_1806f6cc8._18_4_;
  uVar2 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._16_2_,
                   s_model_local_gloves_overlay_1806f6cc8._14_2_);
  *(uint *)(local_88 + 10) =
       CONCAT22(s_model_local_gloves_overlay_1806f6cc8._12_2_,
                s_model_local_gloves_overlay_1806f6cc8._10_2_);
  *(undefined4 *)(local_88 + 0xe) = uVar2;
  *(undefined4 *)(local_88 + 0x12) = uVar3;
  *(undefined4 *)(local_88 + 0x16) = uVar4;
  local_88[0x1a] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0x47c);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_weapon_1806f6c78._12_4_;
  uVar3 = s_model_local_weapon_1806f6c78._8_4_;
  uVar2 = s_model_local_weapon_1806f6c78._4_4_;
  local_78 = 0x12;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_local_weapon_1806f6c78._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  *(undefined2 *)(local_88 + 0x10) = s_model_local_weapon_1806f6c78._16_2_;
  local_88[0x12] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0x4d4);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_weapon_overlay_1806f6c90._4_4_;
  local_78 = 0x1a;
  local_70 = 0x1f;
  uVar2 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._10_2_,
                   s_model_local_weapon_overlay_1806f6c90._8_2_);
  uVar3 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._14_2_,
                   s_model_local_weapon_overlay_1806f6c90._12_2_);
  *(undefined4 *)local_88 = s_model_local_weapon_overlay_1806f6c90._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar4;
  *(undefined4 *)(local_88 + 8) = uVar2;
  *(undefined4 *)(local_88 + 0xc) = uVar3;
  uVar4 = s_model_local_weapon_overlay_1806f6c90._22_4_;
  uVar3 = s_model_local_weapon_overlay_1806f6c90._18_4_;
  uVar2 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._16_2_,
                   s_model_local_weapon_overlay_1806f6c90._14_2_);
  *(uint *)(local_88 + 10) =
       CONCAT22(s_model_local_weapon_overlay_1806f6c90._12_2_,
                s_model_local_weapon_overlay_1806f6c90._10_2_);
  *(undefined4 *)(local_88 + 0xe) = uVar2;
  *(undefined4 *)(local_88 + 0x12) = uVar3;
  *(undefined4 *)(local_88 + 0x16) = uVar4;
  local_88[0x1a] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0x52c);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_keychain_1806f6d28._12_4_;
  uVar3 = s_model_local_keychain_1806f6d28._8_4_;
  uVar2 = s_model_local_keychain_1806f6d28._4_4_;
  local_78 = 0x14;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_local_keychain_1806f6d28._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  *(undefined4 *)(local_88 + 0x10) = s_model_local_keychain_1806f6d28._16_4_;
  local_88[0x14] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0x584);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) goto LAB_18019408b;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_model_local_keychain_overlay_1806f6d40._12_4_;
  uVar3 = s_model_local_keychain_overlay_1806f6d40._8_4_;
  uVar2 = s_model_local_keychain_overlay_1806f6d40._4_4_;
  local_78 = 0x1c;
  local_70 = 0x1f;
  *(undefined4 *)local_88 = s_model_local_keychain_overlay_1806f6d40._0_4_;
  *(undefined4 *)(local_88 + 4) = uVar2;
  *(undefined4 *)(local_88 + 8) = uVar3;
  *(undefined4 *)(local_88 + 0xc) = uVar4;
  uVar4 = s_model_local_keychain_overlay_1806f6d40._24_4_;
  uVar3 = s_model_local_keychain_overlay_1806f6d40._20_4_;
  uVar2 = s_model_local_keychain_overlay_1806f6d40._16_4_;
  *(undefined4 *)(local_88 + 0xc) = s_model_local_keychain_overlay_1806f6d40._12_4_;
  *(undefined4 *)(local_88 + 0x10) = uVar2;
  *(undefined4 *)(local_88 + 0x14) = uVar3;
  *(undefined4 *)(local_88 + 0x18) = uVar4;
  local_88[0x1c] = '\0';
  FUN_180194f70(param_1,&local_88,param_2 + 0x5dc);
  if (0xf < local_70) {
    uVar9 = local_70 + 1;
    pcVar5 = local_88;
    if (0xfff < uVar9) {
      pcVar5 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) {
LAB_18019408b:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar5,uVar9);
  }
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = (char *)FUN_18000fb70(0x20);
  local_78 = 0x1d;
  local_70 = 0x1f;
  uVar8 = CONCAT35(s_model_local_colorize_stattrak_1806f6ce8._13_3_,
                   s_model_local_colorize_stattrak_1806f6ce8._8_5_);
  *(undefined8 *)local_88 = s_model_local_colorize_stattrak_1806f6ce8._0_8_;
  *(undefined8 *)(local_88 + 8) = uVar8;
  uVar8 = s_model_local_colorize_stattrak_1806f6ce8._21_8_;
  *(ulonglong *)(local_88 + 0xd) =
       CONCAT53(s_model_local_colorize_stattrak_1806f6ce8._16_5_,
                s_model_local_colorize_stattrak_1806f6ce8._13_3_);
  *(undefined8 *)(local_88 + 0x15) = uVar8;
  local_88[0x1d] = '\0';
  if (*(char *)(param_1 + 0x20) != '\0') {
    _Str = "{\n";
  }
  sVar6 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar6);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  uVar8 = FUN_18000f490(&local_88);
  FUN_1800134a0(param_1,uVar8,local_78);
  FUN_180013320(param_1,&DAT_1806f2b04);
  if (*(char *)(param_2 + 0x634) != '\0') {
    pcVar11 = "true";
  }
  FUN_180013320(param_1,pcVar11);
  FUN_18000f890(&local_88);
  FUN_180013350(&local_88,"model.local.stattrak_weapon");
  FUN_1801944c0(param_1,&local_88,param_2 + 0x638);
  FUN_18000f890(&local_88);
  FUN_180013350(&local_88,"model.local.stattrak_knife");
  FUN_1801944c0(param_1,&local_88,param_2 + 0x648);
  FUN_18000f890(&local_88);
  return;
}



/* ===== 1801940a0 FUN_1801940a0 ===== */

void FUN_1801940a0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  char *_Str;
  char *_Str_00;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806e05f8,1);
  _Str_00 = "false";
  _Str = "false";
  if (*param_3 != '\0') {
    _Str = "true";
  }
  sVar1 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  if (param_3[1] != '\0') {
    _Str_00 = "true";
  }
  sVar1 = strlen(_Str_00);
  FUN_1800134a0(param_1,_Str_00,sVar1);
  FUN_1800134a0(param_1,&DAT_1806e9114,1);
  return;
}



/* ===== 180194150 FUN_180194150 ===== */

void FUN_180194150(undefined8 param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  char *pcVar2;
  char *_Str;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806e05f8,1);
  _Str = "false";
  pcVar2 = "false";
  if (*param_3 != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  pcVar2 = "false";
  if (param_3[1] != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  pcVar2 = "false";
  if (param_3[2] != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  pcVar2 = "false";
  if (param_3[3] != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  pcVar2 = "false";
  if (param_3[4] != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  pcVar2 = "false";
  if (param_3[5] != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  if (param_3[6] != '\0') {
    _Str = "true";
  }
  sVar1 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar1);
  FUN_1800134a0(param_1,&DAT_1806e9114,1);
  return;
}



/* ===== 180194310 FUN_180194310 ===== */

void FUN_180194310(undefined8 param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  char *pcVar2;
  char *_Str;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806e05f8,1);
  _Str = "false";
  pcVar2 = "false";
  if (*param_3 != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  pcVar2 = "false";
  if (param_3[1] != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  pcVar2 = "false";
  if (param_3[2] != '\0') {
    pcVar2 = "true";
  }
  sVar1 = strlen(pcVar2);
  FUN_1800134a0(param_1,pcVar2,sVar1);
  FUN_1800134a0(param_1,&DAT_1806f0594,2);
  if (param_3[3] != '\0') {
    _Str = "true";
  }
  sVar1 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar1);
  FUN_1800134a0(param_1,&DAT_1806e9114,1);
  return;
}



/* ===== 180194430 FUN_180194430 ===== */

void FUN_180194430(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  uVar2 = 0;
  do {
    bVar1 = *(byte *)(uVar2 + param_3);
    if (bVar1 == 0) break;
    if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
      FUN_1800690a0(param_1,0x5c);
    }
    if (0x1f < bVar1) {
      FUN_1800690a0(param_1,bVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x40);
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  return;
}



/* ===== 1801944c0 FUN_1801944c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801944c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806e05f8,1);
  uVar3 = 0;
  do {
    if (uVar3 != 0) {
      FUN_1800134a0(param_1,&DAT_1806f0594,2);
    }
    puVar2 = (undefined8 *)FUN_1800f2be0(local_48,*(undefined4 *)(param_3 + uVar3 * 4));
    puVar1 = puVar2 + 2;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    FUN_1800134a0(param_1,puVar2,*puVar1);
    FUN_18000f890(local_48);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  FUN_1800134a0(param_1,&DAT_1806e9114,1);
  return;
}



/* ===== 180194590 FUN_180194590 ===== */

void FUN_180194590(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  size_t sVar1;
  ulonglong uVar2;
  char *_Str;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806e05f8,1);
  uVar2 = 0;
  do {
    if (uVar2 != 0) {
      FUN_1800134a0(param_1,&DAT_1806f0594,2);
    }
    _Str = "false";
    if (*(char *)(uVar2 + param_3) != '\0') {
      _Str = "true";
    }
    sVar1 = strlen(_Str);
    FUN_1800134a0(param_1,_Str,sVar1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  FUN_1800134a0(param_1,&DAT_1806e9114,1);
  return;
}



/* ===== 180194630 FUN_180194630 ===== */

void FUN_180194630(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  size_t sVar1;
  ulonglong uVar2;
  char *_Str;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806e05f8,1);
  uVar2 = 0;
  do {
    if (uVar2 != 0) {
      FUN_1800134a0(param_1,&DAT_1806f0594,2);
    }
    _Str = "false";
    if (*(char *)(uVar2 + param_3) != '\0') {
      _Str = "true";
    }
    sVar1 = strlen(_Str);
    FUN_1800134a0(param_1,_Str,sVar1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x17);
  FUN_1800134a0(param_1,&DAT_1806e9114,1);
  return;
}



/* ===== 1801946d0 FUN_1801946d0 ===== */

void FUN_1801946d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  uVar2 = 0;
  do {
    bVar1 = *(byte *)(uVar2 + param_3);
    if (bVar1 == 0) break;
    if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
      FUN_1800690a0(param_1,0x5c);
    }
    if (0x1f < bVar1) {
      FUN_1800690a0(param_1,bVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x104);
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  return;
}



/* ===== 180194760 FUN_180194760 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180194760(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *_Str;
  char *_Str_00;
  ulonglong uVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_108;
  uVar1 = FUN_180073a70(local_e8,param_2,&DAT_1806f5f30);
  FUN_1800f2db0(param_1,uVar1,param_3);
  FUN_18000f890(local_e8);
  if (*param_3 != 0) {
    uVar1 = FUN_180073a70(local_e8,param_2,".side");
    FUN_1800f2db0(param_1,uVar1,param_3 + 1);
    FUN_18000f890(local_e8);
    uVar1 = FUN_180073a70(local_e8,param_2,".paint_kit");
    FUN_1800f2db0(param_1,uVar1,param_3 + 2);
    FUN_18000f890(local_e8);
    uVar1 = FUN_180073a70(local_e8,param_2,".wear");
    FUN_1800f2e20(param_1,uVar1,param_3 + 3);
    FUN_18000f890(local_e8);
    uVar1 = FUN_180073a70(local_e8,param_2,".seed");
    FUN_1800f2db0(param_1,uVar1,param_3 + 4);
    FUN_18000f890(local_e8);
    uVar1 = FUN_180073a70(local_e8,param_2,".stattrak");
    FUN_1800f2cb0(param_1,uVar1);
    _Str_00 = "false";
    _Str = "false";
    if ((char)param_3[5] != '\0') {
      _Str = "true";
    }
    sVar2 = strlen(_Str);
    FUN_1800134a0(param_1,_Str,sVar2);
    FUN_18000f890(local_e8);
    uVar1 = FUN_180073a70(local_e8,param_2,".stattrak_value");
    FUN_1800f2db0(param_1,uVar1,param_3 + 6);
    FUN_18000f890(local_e8);
    uVar1 = FUN_180073a70(local_e8,param_2,".nametag");
    FUN_180194430(param_1,uVar1,param_3 + 7);
    FUN_18000f890(local_e8);
    uVar1 = FUN_180073a70(local_e8,param_2,".custom_colors");
    FUN_1800f2cb0(param_1,uVar1);
    if ((char)param_3[0x17] != '\0') {
      _Str_00 = "true";
    }
    sVar2 = strlen(_Str_00);
    FUN_1800134a0(param_1,_Str_00,sVar2);
    FUN_18000f890(local_e8);
    uVar6 = 0;
    do {
      uVar1 = FUN_18004e4f0(local_68,uVar6);
      uVar3 = FUN_180073a70(local_88,param_2,".color");
      uVar1 = FUN_180066820(local_e8,uVar3,uVar1);
      FUN_1801944c0(param_1,uVar1,param_3 + uVar6 * 4 + 0x18);
      FUN_18000f890(local_e8);
      FUN_18000f890(local_88);
      FUN_18000f890(local_68);
      uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
    uVar6 = 0;
    do {
      uVar1 = FUN_18004e4f0(local_88,uVar6);
      uVar3 = FUN_180073a70(local_68,param_2,".sticker");
      FUN_180066820(local_e8,uVar3,uVar1);
      FUN_18000f890(local_68);
      FUN_18000f890(local_88);
      uVar1 = FUN_180073a70(local_a8,local_e8,&DAT_1806f6a6c);
      FUN_1800f2cb0(param_1,uVar1);
      puVar4 = (undefined8 *)FUN_18003a390(local_c8,param_3[uVar6 * 7 + 0x38]);
      puVar5 = puVar4 + 2;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_1800134a0(param_1,puVar4,*puVar5);
      FUN_18000f890(local_c8);
      FUN_18000f890(local_a8);
      uVar1 = FUN_180073a70(local_c8,local_e8,".wear");
      FUN_1800f2cb0(param_1,uVar1);
      puVar4 = (undefined8 *)FUN_1800f2be0(local_a8,param_3[uVar6 * 7 + 0x39]);
      puVar5 = puVar4 + 2;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_1800134a0(param_1,puVar4,*puVar5);
      FUN_18000f890(local_a8);
      FUN_18000f890(local_c8);
      uVar1 = FUN_180073a70(local_c8,local_e8,".scale");
      FUN_1800f2cb0(param_1,uVar1);
      puVar4 = (undefined8 *)FUN_1800f2be0(local_a8,param_3[uVar6 * 7 + 0x3a]);
      puVar5 = puVar4 + 2;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_1800134a0(param_1,puVar4,*puVar5);
      FUN_18000f890(local_a8);
      FUN_18000f890(local_c8);
      uVar1 = FUN_180073a70(local_c8,local_e8,".rotation");
      FUN_1800f2cb0(param_1,uVar1);
      puVar4 = (undefined8 *)FUN_1800f2be0(local_a8,param_3[uVar6 * 7 + 0x3b]);
      puVar5 = puVar4 + 2;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_1800134a0(param_1,puVar4,*puVar5);
      FUN_18000f890(local_a8);
      FUN_18000f890(local_c8);
      uVar1 = FUN_180073a70(local_c8,local_e8,".offset_x");
      FUN_1800f2cb0(param_1,uVar1);
      puVar4 = (undefined8 *)FUN_1800f2be0(local_a8,param_3[uVar6 * 7 + 0x3c]);
      puVar5 = puVar4 + 2;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_1800134a0(param_1,puVar4,*puVar5);
      FUN_18000f890(local_a8);
      FUN_18000f890(local_c8);
      uVar1 = FUN_180073a70(local_c8,local_e8,".offset_y");
      FUN_1800f2cb0(param_1,uVar1);
      puVar4 = (undefined8 *)FUN_1800f2be0(local_a8,param_3[uVar6 * 7 + 0x3d]);
      puVar5 = puVar4 + 2;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_1800134a0(param_1,puVar4,*puVar5);
      FUN_18000f890(local_a8);
      FUN_18000f890(local_c8);
      uVar1 = FUN_180073a70(local_c8,local_e8,".schema");
      FUN_1800f2cb0(param_1,uVar1);
      puVar4 = (undefined8 *)FUN_18003a390(local_a8,param_3[uVar6 * 7 + 0x3e]);
      puVar5 = puVar4 + 2;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_1800134a0(param_1,puVar4,*puVar5);
      FUN_18000f890(local_a8);
      FUN_18000f890(local_c8);
      FUN_18000f890(local_e8);
      uVar6 = uVar6 + 1;
    } while (uVar6 < 6);
    uVar1 = FUN_180073a70(local_c8,param_2,".keychain.id");
    FUN_1800f2cb0(param_1,uVar1);
    puVar5 = (undefined8 *)FUN_18003a390(local_a8,param_3[0x62]);
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar4 = puVar5;
    }
    else {
      puVar4 = (undefined8 *)*puVar5;
    }
    FUN_1800134a0(param_1,puVar4,puVar5[2]);
    FUN_18000f890(local_a8);
    FUN_18000f890(local_c8);
    uVar1 = FUN_180073a70(local_c8,param_2,".keychain.seed");
    FUN_1800f2cb0(param_1,uVar1);
    puVar5 = (undefined8 *)FUN_18003a390(local_a8,param_3[99]);
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar4 = puVar5;
    }
    else {
      puVar4 = (undefined8 *)*puVar5;
    }
    FUN_1800134a0(param_1,puVar4,puVar5[2]);
    FUN_18000f890(local_a8);
    FUN_18000f890(local_c8);
    uVar1 = FUN_180073a70(local_c8,param_2,".keychain.offset_x");
    FUN_1800f2cb0(param_1,uVar1);
    puVar5 = (undefined8 *)FUN_1800f2be0(local_a8,param_3[100]);
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar4 = puVar5;
    }
    else {
      puVar4 = (undefined8 *)*puVar5;
    }
    FUN_1800134a0(param_1,puVar4,puVar5[2]);
    FUN_18000f890(local_a8);
    FUN_18000f890(local_c8);
    uVar1 = FUN_180073a70(local_c8,param_2,".keychain.offset_y");
    FUN_1800f2cb0(param_1,uVar1);
    puVar5 = (undefined8 *)FUN_1800f2be0(local_a8,param_3[0x65]);
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar4 = puVar5;
    }
    else {
      puVar4 = (undefined8 *)*puVar5;
    }
    FUN_1800134a0(param_1,puVar4,puVar5[2]);
    FUN_18000f890(local_a8);
    FUN_18000f890(local_c8);
    uVar1 = FUN_180073a70(local_c8,param_2,".keychain.offset_z");
    FUN_1800f2cb0(param_1,uVar1);
    puVar5 = (undefined8 *)FUN_1800f2be0(local_a8,param_3[0x66]);
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar4 = puVar5;
    }
    else {
      puVar4 = (undefined8 *)*puVar5;
    }
    FUN_1800134a0(param_1,puVar4,puVar5[2]);
    FUN_18000f890(local_a8);
    FUN_18000f890(local_c8);
    uVar1 = FUN_180073a70(local_c8,param_2,".keychain.sticker");
    FUN_1800f2cb0(param_1,uVar1);
    puVar5 = (undefined8 *)FUN_18003a390(local_a8,param_3[0x67]);
    if ((ulonglong)puVar5[3] < 0x10) {
      puVar4 = puVar5;
    }
    else {
      puVar4 = (undefined8 *)*puVar5;
    }
    FUN_1800134a0(param_1,puVar4,puVar5[2]);
    FUN_18000f890(local_a8);
    FUN_18000f890(local_c8);
  }
  return;
}



/* ===== 180194f70 FUN_180194f70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180194f70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  char *_Str;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_78;
  uVar1 = FUN_180073a70(local_58,param_2,".material");
  FUN_1800f2db0(param_1,uVar1,param_3);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".color");
  FUN_1801944c0(param_1,uVar1,param_3 + 4);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".metalness");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x14);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".roughness");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x18);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".glow_exponent");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x1c);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".outline_exponent");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x20);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".outline_falloff");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x24);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".outline_filling");
  FUN_1800f2cb0(param_1,uVar1);
  _Str = "false";
  if (*(char *)(param_3 + 0x28) != '\0') {
    _Str = "true";
  }
  sVar2 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar2);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".iridescent_strength");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x2c);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".iridescent_roughness");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x30);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".iridescent_tint");
  FUN_1801944c0(param_1,uVar1,param_3 + 0x34);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".water_speed");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x44);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".glossy_exponent");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x48);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".glossy_filling");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x4c);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".glossy_falloff");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x50);
  FUN_18000f890(local_58);
  uVar1 = FUN_180073a70(local_58,param_2,".glossy_tint");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x54);
  FUN_18000f890(local_58);
  return;
}



/* ===== 1801952b0 FUN_1801952b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801952b0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  char *_Str;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar1 = FUN_180073a70(local_48,param_2,".enabled");
  FUN_1800f2cb0(param_1,uVar1);
  _Str = "false";
  if (*param_3 != '\0') {
    _Str = "true";
  }
  sVar2 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar2);
  FUN_18000f890(local_48);
  uVar1 = FUN_180073a70(local_48,param_2,".color");
  FUN_1801944c0(param_1,uVar1,param_3 + 4);
  FUN_18000f890(local_48);
  return;
}



/* ===== 180195380 FUN_180195380 ===== */

void FUN_180195380(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_1800f2cb0();
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  uVar2 = 0;
  do {
    bVar1 = *(byte *)(uVar2 + param_3);
    if (bVar1 == 0) break;
    if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
      FUN_1800690a0(param_1,0x5c);
    }
    if (0x1f < bVar1) {
      FUN_1800690a0(param_1,bVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x14);
  FUN_1800134a0(param_1,&DAT_1806dfffc,1);
  return;
}



/* ===== 180195410 FUN_180195410 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180195410(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  char *pcVar3;
  char *_Str;
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_88;
  FUN_1801bd350(param_1,param_2,param_3 + 0x264);
  uVar1 = FUN_180073a70(local_68,param_2,"world.modulation");
  FUN_1800f2cb0(param_1,uVar1);
  _Str = "false";
  pcVar3 = "false";
  if (*(char *)(param_3 + 4) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.modulation_color");
  FUN_1801944c0(param_1,uVar1,param_3 + 8);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.gamma");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x18) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.gamma_value");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x1c);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.bloom");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x20) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.bloom_amount");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x24);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.wetness");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x28) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.wetness_density");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x2c);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.wetness_speed");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x30);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.wind");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x34) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.wind_strength");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x38);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.wind_direction");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x3c);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.dof");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x40) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.fog");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x54) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.fog_color");
  FUN_1801944c0(param_1,uVar1,param_3 + 0x58);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.fog_density");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x68);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.fog_distance");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x6c);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.fog_falloff");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x70);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.fog_glow");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x74);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.dof_near_blurry");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x44);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.dof_near_crisp");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x48);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.dof_far_crisp");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x4c);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"world.dof_far_blurry");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x50);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"screen.rain");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x20c) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"screen.rain_amount");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x210);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"screen.rain_size");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x214);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"screen.rain_speed");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x218);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"screen.rain_fog");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x21c);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"screen.rain_blur");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x220);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"screen.chromatic");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x224) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"screen.chromatic_amount");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x228);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"screen.vignette");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x22c) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"screen.vignette_amount");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x230);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.mode");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x78);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.texture");
  FUN_1801bef40(param_1,uVar1,param_3 + 0x7c);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.shader");
  FUN_180194430(param_1,uVar1,param_3 + 0x11c);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.params");
  FUN_1801befd0(param_1,uVar1,param_3 + 0x15c);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.primary");
  FUN_1801944c0(param_1,uVar1,param_3 + 0x17c);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.secondary");
  FUN_1801944c0(param_1,uVar1,param_3 + 0x18c);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.exposure");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x19c);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.update_rate");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x1a0);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.resolution");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x1a4);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.supersample");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x1a8) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.recolor");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x1a9) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.recolor_strength");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x1ac);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.sky_tint");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x1b0) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.sky_color");
  FUN_1801944c0(param_1,uVar1,param_3 + 0x1b4);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.brightness");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x208);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.cloud_tint");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x1c4) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.cloud_color");
  FUN_1801944c0(param_1,uVar1,param_3 + 0x1c8);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.sun_tint");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x1d8) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.sun_color");
  FUN_1801944c0(param_1,uVar1,param_3 + 0x1dc);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.lighting");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x1ec) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.lighting_color");
  FUN_1801944c0(param_1,uVar1,param_3 + 0x1f0);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.lighting_intensity");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x200);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"sky.lighting_mode");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x204);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"motion_blur.enabled");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x234) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"motion_blur.strength");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x238);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"weather.enabled");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x23c) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"weather.type");
  FUN_1800f2db0(param_1,uVar1,param_3 + 0x240);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"weather.color");
  FUN_1801944c0(param_1,uVar1,param_3 + 0x244);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"weather.density");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x254);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"weather.gravity");
  FUN_1800f2e20(param_1,uVar1,param_3 + 600);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"weather.glow");
  FUN_1800f2e20(param_1,uVar1,param_3 + 0x25c);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"weather.rain_mist");
  FUN_1800f2cb0(param_1,uVar1);
  pcVar3 = "false";
  if (*(char *)(param_3 + 0x260) != '\0') {
    pcVar3 = "true";
  }
  sVar2 = strlen(pcVar3);
  FUN_1800134a0(param_1,pcVar3,sVar2);
  FUN_18000f890(local_68);
  uVar1 = FUN_180073a70(local_68,param_2,"weather.rain_ripples");
  FUN_1800f2cb0(param_1,uVar1);
  if (*(char *)(param_3 + 0x261) != '\0') {
    _Str = "true";
  }
  sVar2 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar2);
  FUN_18000f890(local_68);
  return;
}



/* ===== 1801962e0 FUN_1801962e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801962e0(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_e8;
  uVar3 = FUN_180073a70(&local_a0,param_2,"count");
  FUN_1800f2db0(param_1,uVar3,param_3);
  FUN_18000f890(&local_a0);
  uVar9 = 1;
  do {
    if (*param_3 <= (int)uVar9) {
      return;
    }
    uVar3 = FUN_18004e4f0(local_60,uVar9);
    if ((ulonglong)param_2[3] < 0x10) {
      puVar10 = param_2;
    }
    else {
      puVar10 = (undefined8 *)*param_2;
    }
    puVar4 = (ulonglong *)FUN_18006b5b0(uVar3,0,puVar10,param_2[2]);
    local_c0 = *puVar4;
    uStack_b8 = puVar4[1];
    local_b0 = puVar4[2];
    uStack_a8 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    puVar5 = (undefined4 *)FUN_1800134a0(&local_c0,&DAT_1806e6f24,1);
    local_a0 = *puVar5;
    uStack_9c = puVar5[1];
    uStack_98 = puVar5[2];
    uStack_94 = puVar5[3];
    local_90 = puVar5[4];
    uStack_8c = puVar5[5];
    uStack_88 = puVar5[6];
    uStack_84 = puVar5[7];
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 6) = 0xf;
    *(undefined1 *)puVar5 = 0;
    if (0xf < uStack_a8) {
      uVar8 = uStack_a8 + 1;
      uVar6 = local_c0;
      if (0xfff < uVar8) {
        uVar6 = *(ulonglong *)(local_c0 - 8);
        if (0x1f < (local_c0 - uVar6) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          goto LAB_18019650a;
        }
        uVar8 = uStack_a8 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar6,uVar8);
    }
    local_b0 = 0;
    uStack_a8 = 0xf;
    local_c0 = local_c0 & 0xffffffffffffff00;
    FUN_18000f890(local_60);
    uVar3 = FUN_180073a70(local_80,&local_a0,&DAT_18058b644);
    FUN_180194430(param_1,uVar3,param_3 + uVar9 * 0x52 + 1);
    FUN_18000f890(local_80);
    uVar3 = FUN_180073a70(local_80,&local_a0,"weapons");
    FUN_1800f2ea0(param_1,uVar3,param_3 + uVar9 * 0x52 + 0x11);
    FUN_18000f890(local_80);
    uVar6 = CONCAT44(uStack_84,uStack_88);
    if (0xf < uVar6) {
      uVar8 = uVar6 + 1;
      lVar2 = CONCAT44(uStack_9c,local_a0);
      lVar7 = lVar2;
      if (0xfff < uVar8) {
        lVar7 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar7) - 8U) {
LAB_18019650a:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar8 = uVar6 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar7,uVar8);
    }
    uVar9 = uVar9 + 1;
    if (0x3f < uVar9) {
      return;
    }
  } while( true );
}



/* ===== 180196520 FUN_180196520 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180196520(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  size_t sVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *pcVar12;
  ulonglong uVar13;
  char *_Str;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  FUN_180013350(&local_a8,"legitbot.enabled");
  FUN_1800f2d50(param_1,&local_a8,param_2);
  FUN_18000f890(&local_a8);
  FUN_180013350(&local_a8,"legitbot.groups.");
  FUN_1801962e0(param_1,&local_a8,param_2 + 4);
  FUN_18000f890(&local_a8);
  uVar13 = 0;
  do {
    iVar5 = *(int *)(param_2 + 4);
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    if (iVar5 <= (int)uVar13) break;
    uVar6 = FUN_1800ef450(local_88,uVar13 & 0xffffffff);
    uVar6 = FUN_180066ab0(local_68,"legitbot.",uVar6);
    uVar6 = FUN_180042850(&local_a8,uVar6,&DAT_1806e6f24);
    FUN_180105af0(param_1,uVar6,param_2 + 21000 + uVar13 * 100,param_2 + 0x6b08 + uVar13 * 0x3c);
    FUN_18000f890(&local_a8);
    FUN_18000f890(local_68);
    FUN_18000f890(local_88);
    uVar13 = uVar13 + 1;
  } while (uVar13 < 0x40);
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  pcVar7 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_visualize_1806f74f0._8_8_;
  local_98 = 0x12;
  local_90 = 0x1f;
  *(undefined8 *)pcVar7 = s_legitbot_visualize_1806f74f0._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar6;
  *(undefined2 *)(pcVar7 + 0x10) = s_legitbot_visualize_1806f74f0._16_2_;
  pcVar7[0x12] = '\0';
  _Str = ",\n";
  pcVar11 = ",\n";
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar11 = "{\n";
  }
  local_a8 = pcVar7;
  sVar8 = strlen(pcVar11);
  FUN_1800134a0(param_1,pcVar11,sVar8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  FUN_1800134a0(param_1,pcVar7,0x12);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  pcVar11 = "false";
  pcVar7 = "false";
  if (*(char *)(param_2 + 0x7a08) != '\0') {
    pcVar7 = "true";
  }
  sVar8 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar8);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  pcVar7 = (char *)FUN_18000fb70(0x20);
  local_98 = 0x19;
  local_90 = 0x1f;
  uVar6 = CONCAT71(s_legitbot_visualize_target_1806f7540._9_7_,
                   s_legitbot_visualize_target_1806f7540[8]);
  *(undefined8 *)pcVar7 = s_legitbot_visualize_target_1806f7540._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar6;
  uVar6 = s_legitbot_visualize_target_1806f7540._17_8_;
  *(ulonglong *)(pcVar7 + 9) =
       CONCAT17(s_legitbot_visualize_target_1806f7540[0x10],
                s_legitbot_visualize_target_1806f7540._9_7_);
  *(undefined8 *)(pcVar7 + 0x11) = uVar6;
  pcVar7[0x19] = '\0';
  pcVar12 = ",\n";
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar12 = "{\n";
  }
  local_a8 = pcVar7;
  sVar8 = strlen(pcVar12);
  FUN_1800134a0(param_1,pcVar12,sVar8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  FUN_1800134a0(param_1,pcVar7,0x19);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  pcVar7 = "false";
  if (*(char *)(param_2 + 0x7a09) != '\0') {
    pcVar7 = "true";
  }
  sVar8 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar8);
  FUN_18000f890(&local_a8);
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  local_a8 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_target_color_1806f7560._12_4_;
  uVar3 = s_legitbot_target_color_1806f7560._8_4_;
  uVar2 = s_legitbot_target_color_1806f7560._4_4_;
  local_98 = 0x15;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_target_color_1806f7560._0_4_;
  *(undefined4 *)(local_a8 + 4) = uVar2;
  *(undefined4 *)(local_a8 + 8) = uVar3;
  *(undefined4 *)(local_a8 + 0xc) = uVar4;
  *(ulonglong *)(local_a8 + 0xd) =
       CONCAT53(s_legitbot_target_color_1806f7560._16_5_,s_legitbot_target_color_1806f7560._13_3_);
  local_a8[0x15] = '\0';
  FUN_1801944c0(param_1,&local_a8,param_2 + 0x7a0c);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  pcVar7 = (char *)FUN_18000fb70(0x20);
  local_98 = 0x16;
  local_90 = 0x1f;
  uVar6 = CONCAT26(s_legitbot_visualize_fov_1806f7510._14_2_,
                   s_legitbot_visualize_fov_1806f7510._8_6_);
  *(undefined8 *)pcVar7 = s_legitbot_visualize_fov_1806f7510._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar6;
  *(ulonglong *)(pcVar7 + 0xe) =
       CONCAT62(s_legitbot_visualize_fov_1806f7510._16_6_,s_legitbot_visualize_fov_1806f7510._14_2_)
  ;
  pcVar7[0x16] = '\0';
  pcVar12 = ",\n";
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar12 = "{\n";
  }
  local_a8 = pcVar7;
  sVar8 = strlen(pcVar12);
  FUN_1800134a0(param_1,pcVar12,sVar8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  FUN_1800134a0(param_1,pcVar7,0x16);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  pcVar7 = "false";
  if (*(char *)(param_2 + 0x7a1c) != '\0') {
    pcVar7 = "true";
  }
  sVar8 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar8);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  local_a8 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_fov_color_1806f7528._12_4_;
  uVar3 = s_legitbot_fov_color_1806f7528._8_4_;
  uVar2 = s_legitbot_fov_color_1806f7528._4_4_;
  local_98 = 0x12;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_fov_color_1806f7528._0_4_;
  *(undefined4 *)(local_a8 + 4) = uVar2;
  *(undefined4 *)(local_a8 + 8) = uVar3;
  *(undefined4 *)(local_a8 + 0xc) = uVar4;
  *(undefined2 *)(local_a8 + 0x10) = s_legitbot_fov_color_1806f7528._16_2_;
  local_a8[0x12] = '\0';
  FUN_1801944c0(param_1,&local_a8,param_2 + 0x7a20);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  pcVar7 = (char *)FUN_18000fb70(0x20);
  local_98 = 0x1b;
  local_90 = 0x1f;
  uVar6 = CONCAT53(s_legitbot_visualize_hitboxes_1806f75b8._11_5_,
                   s_legitbot_visualize_hitboxes_1806f75b8._8_3_);
  *(undefined8 *)pcVar7 = s_legitbot_visualize_hitboxes_1806f75b8._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar6;
  uVar6 = s_legitbot_visualize_hitboxes_1806f75b8._19_8_;
  *(ulonglong *)(pcVar7 + 0xb) =
       CONCAT35(s_legitbot_visualize_hitboxes_1806f75b8._16_3_,
                s_legitbot_visualize_hitboxes_1806f75b8._11_5_);
  *(undefined8 *)(pcVar7 + 0x13) = uVar6;
  pcVar7[0x1b] = '\0';
  pcVar12 = ",\n";
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar12 = "{\n";
  }
  local_a8 = pcVar7;
  sVar8 = strlen(pcVar12);
  FUN_1800134a0(param_1,pcVar12,sVar8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  FUN_1800134a0(param_1,pcVar7,0x1b);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  pcVar7 = "false";
  if (*(char *)(param_2 + 0x7a30) != '\0') {
    pcVar7 = "true";
  }
  sVar8 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar8);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  local_a8 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_high_priority_color_1806f75d8._12_4_;
  uVar3 = s_legitbot_high_priority_color_1806f75d8._8_4_;
  uVar2 = s_legitbot_high_priority_color_1806f75d8._4_4_;
  local_98 = 0x1c;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_high_priority_color_1806f75d8._0_4_;
  *(undefined4 *)(local_a8 + 4) = uVar2;
  *(undefined4 *)(local_a8 + 8) = uVar3;
  *(undefined4 *)(local_a8 + 0xc) = uVar4;
  uVar4 = s_legitbot_high_priority_color_1806f75d8._24_4_;
  uVar3 = s_legitbot_high_priority_color_1806f75d8._20_4_;
  uVar2 = s_legitbot_high_priority_color_1806f75d8._16_4_;
  *(undefined4 *)(local_a8 + 0xc) = s_legitbot_high_priority_color_1806f75d8._12_4_;
  *(undefined4 *)(local_a8 + 0x10) = uVar2;
  *(undefined4 *)(local_a8 + 0x14) = uVar3;
  *(undefined4 *)(local_a8 + 0x18) = uVar4;
  local_a8[0x1c] = '\0';
  FUN_1801944c0(param_1,&local_a8,param_2 + 0x7a34);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  local_a8 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_low_priority_color_1806f7578._12_4_;
  uVar3 = s_legitbot_low_priority_color_1806f7578._8_4_;
  uVar2 = s_legitbot_low_priority_color_1806f7578._4_4_;
  local_98 = 0x1b;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_low_priority_color_1806f7578._0_4_;
  *(undefined4 *)(local_a8 + 4) = uVar2;
  *(undefined4 *)(local_a8 + 8) = uVar3;
  *(undefined4 *)(local_a8 + 0xc) = uVar4;
  uVar4 = s_legitbot_low_priority_color_1806f7578._23_4_;
  uVar3 = s_legitbot_low_priority_color_1806f7578._19_4_;
  uVar2 = CONCAT31(s_legitbot_low_priority_color_1806f7578._16_3_,
                   s_legitbot_low_priority_color_1806f7578[0xf]);
  *(uint *)(local_a8 + 0xb) =
       CONCAT31(s_legitbot_low_priority_color_1806f7578._12_3_,
                s_legitbot_low_priority_color_1806f7578[0xb]);
  *(undefined4 *)(local_a8 + 0xf) = uVar2;
  *(undefined4 *)(local_a8 + 0x13) = uVar3;
  *(undefined4 *)(local_a8 + 0x17) = uVar4;
  local_a8[0x1b] = '\0';
  FUN_1801944c0(param_1,&local_a8,param_2 + 0x7a44);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  pcVar7 = (char *)FUN_18000fb70(0x20);
  local_98 = 0x19;
  local_90 = 0x1f;
  uVar6 = CONCAT71(s_legitbot_visualize_recoil_1806f7598._9_7_,
                   s_legitbot_visualize_recoil_1806f7598[8]);
  *(undefined8 *)pcVar7 = s_legitbot_visualize_recoil_1806f7598._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar6;
  uVar6 = s_legitbot_visualize_recoil_1806f7598._17_8_;
  *(ulonglong *)(pcVar7 + 9) =
       CONCAT17(s_legitbot_visualize_recoil_1806f7598[0x10],
                s_legitbot_visualize_recoil_1806f7598._9_7_);
  *(undefined8 *)(pcVar7 + 0x11) = uVar6;
  pcVar7[0x19] = '\0';
  pcVar12 = ",\n";
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar12 = "{\n";
  }
  local_a8 = pcVar7;
  sVar8 = strlen(pcVar12);
  FUN_1800134a0(param_1,pcVar12,sVar8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  FUN_1800134a0(param_1,pcVar7,0x19);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  pcVar7 = "false";
  if (*(char *)(param_2 + 0x7a54) != '\0') {
    pcVar7 = "true";
  }
  sVar8 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar8);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  local_a8 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_recoil_original_color_1806f7630._8_4_;
  uVar3 = s_legitbot_recoil_original_color_1806f7630._4_4_;
  local_98 = 0x1e;
  local_90 = 0x1f;
  uVar2 = CONCAT22(s_legitbot_recoil_original_color_1806f7630._14_2_,
                   s_legitbot_recoil_original_color_1806f7630._12_2_);
  *(undefined4 *)local_a8 = s_legitbot_recoil_original_color_1806f7630._0_4_;
  *(undefined4 *)(local_a8 + 4) = uVar3;
  *(undefined4 *)(local_a8 + 8) = uVar4;
  *(undefined4 *)(local_a8 + 0xc) = uVar2;
  uVar4 = s_legitbot_recoil_original_color_1806f7630._26_4_;
  uVar3 = s_legitbot_recoil_original_color_1806f7630._22_4_;
  uVar2 = s_legitbot_recoil_original_color_1806f7630._18_4_;
  *(uint *)(local_a8 + 0xe) =
       CONCAT22(s_legitbot_recoil_original_color_1806f7630._16_2_,
                s_legitbot_recoil_original_color_1806f7630._14_2_);
  *(undefined4 *)(local_a8 + 0x12) = uVar2;
  *(undefined4 *)(local_a8 + 0x16) = uVar3;
  *(undefined4 *)(local_a8 + 0x1a) = uVar4;
  local_a8[0x1e] = '\0';
  FUN_1801944c0(param_1,&local_a8,param_2 + 0x7a58);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  local_a8 = (char *)FUN_18000fb70(0x30);
  uVar4 = s_legitbot_recoil_compensated_colo_1806f7650._12_4_;
  uVar3 = s_legitbot_recoil_compensated_colo_1806f7650._8_4_;
  uVar2 = s_legitbot_recoil_compensated_colo_1806f7650._4_4_;
  local_98 = 0x21;
  local_90 = 0x2f;
  *(undefined4 *)local_a8 = s_legitbot_recoil_compensated_colo_1806f7650._0_4_;
  *(undefined4 *)(local_a8 + 4) = uVar2;
  *(undefined4 *)(local_a8 + 8) = uVar3;
  *(undefined4 *)(local_a8 + 0xc) = uVar4;
  uVar4 = s_legitbot_recoil_compensated_colo_1806f7650._28_4_;
  uVar3 = s_legitbot_recoil_compensated_colo_1806f7650._24_4_;
  uVar2 = s_legitbot_recoil_compensated_colo_1806f7650._20_4_;
  *(undefined4 *)(local_a8 + 0x10) = s_legitbot_recoil_compensated_colo_1806f7650._16_4_;
  *(undefined4 *)(local_a8 + 0x14) = uVar2;
  *(undefined4 *)(local_a8 + 0x18) = uVar3;
  *(undefined4 *)(local_a8 + 0x1c) = uVar4;
  local_a8[0x20] = s_legitbot_recoil_compensated_colo_1806f7650[0x20];
  local_a8[0x21] = '\0';
  FUN_1801944c0(param_1,&local_a8,param_2 + 0x7a68);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  pcVar7 = (char *)FUN_18000fb70(0x20);
  local_98 = 0x1b;
  local_90 = 0x1f;
  uVar6 = CONCAT53(s_legitbot_visualize_velocity_1806f75f8._11_5_,
                   s_legitbot_visualize_velocity_1806f75f8._8_3_);
  *(undefined8 *)pcVar7 = s_legitbot_visualize_velocity_1806f75f8._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar6;
  uVar6 = s_legitbot_visualize_velocity_1806f75f8._19_8_;
  *(ulonglong *)(pcVar7 + 0xb) =
       CONCAT35(s_legitbot_visualize_velocity_1806f75f8._16_3_,
                s_legitbot_visualize_velocity_1806f75f8._11_5_);
  *(undefined8 *)(pcVar7 + 0x13) = uVar6;
  pcVar7[0x1b] = '\0';
  pcVar12 = ",\n";
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar12 = "{\n";
  }
  local_a8 = pcVar7;
  sVar8 = strlen(pcVar12);
  FUN_1800134a0(param_1,pcVar12,sVar8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  FUN_1800134a0(param_1,pcVar7,0x1b);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  pcVar7 = "false";
  if (*(char *)(param_2 + 0x7a78) != '\0') {
    pcVar7 = "true";
  }
  sVar8 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar8);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  pcVar7 = (char *)FUN_18000fb70(0x20);
  local_98 = 0x17;
  local_90 = 0x1f;
  uVar6 = CONCAT17(s_legitbot_velocity_speed_1806f7618[0xf],
                   s_legitbot_velocity_speed_1806f7618._8_7_);
  *(undefined8 *)pcVar7 = s_legitbot_velocity_speed_1806f7618._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar6;
  *(ulonglong *)(pcVar7 + 0xf) =
       CONCAT71(s_legitbot_velocity_speed_1806f7618._16_7_,s_legitbot_velocity_speed_1806f7618[0xf])
  ;
  pcVar7[0x17] = '\0';
  pcVar12 = ",\n";
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar12 = "{\n";
  }
  local_a8 = pcVar7;
  sVar8 = strlen(pcVar12);
  FUN_1800134a0(param_1,pcVar12,sVar8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  FUN_1800134a0(param_1,pcVar7,0x17);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  pcVar7 = "false";
  if (*(char *)(param_2 + 0x7a79) != '\0') {
    pcVar7 = "true";
  }
  sVar8 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar8);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  local_a8 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_speed_color_1806f76b0._12_4_;
  uVar3 = s_legitbot_speed_color_1806f76b0._8_4_;
  uVar2 = s_legitbot_speed_color_1806f76b0._4_4_;
  local_98 = 0x14;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_speed_color_1806f76b0._0_4_;
  *(undefined4 *)(local_a8 + 4) = uVar2;
  *(undefined4 *)(local_a8 + 8) = uVar3;
  *(undefined4 *)(local_a8 + 0xc) = uVar4;
  *(undefined4 *)(local_a8 + 0x10) = s_legitbot_speed_color_1806f76b0._16_4_;
  local_a8[0x14] = '\0';
  FUN_1801944c0(param_1,&local_a8,param_2 + 0x7a7c);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  pcVar7 = (char *)FUN_18000fb70(0x20);
  local_98 = 0x16;
  local_90 = 0x1f;
  uVar6 = CONCAT26(s_legitbot_velocity_jump_1806f76c8._14_2_,
                   s_legitbot_velocity_jump_1806f76c8._8_6_);
  *(undefined8 *)pcVar7 = s_legitbot_velocity_jump_1806f76c8._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar6;
  *(ulonglong *)(pcVar7 + 0xe) =
       CONCAT62(s_legitbot_velocity_jump_1806f76c8._16_6_,s_legitbot_velocity_jump_1806f76c8._14_2_)
  ;
  pcVar7[0x16] = '\0';
  pcVar12 = ",\n";
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar12 = "{\n";
  }
  local_a8 = pcVar7;
  sVar8 = strlen(pcVar12);
  FUN_1800134a0(param_1,pcVar12,sVar8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  FUN_1800134a0(param_1,pcVar7,0x16);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  pcVar7 = "false";
  if (*(char *)(param_2 + 0x7a8c) != '\0') {
    pcVar7 = "true";
  }
  sVar8 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar8);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  local_a8 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_jump_color_1806f7678._12_4_;
  uVar3 = s_legitbot_jump_color_1806f7678._8_4_;
  uVar2 = s_legitbot_jump_color_1806f7678._4_4_;
  local_98 = 0x13;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_jump_color_1806f7678._0_4_;
  *(undefined4 *)(local_a8 + 4) = uVar2;
  *(undefined4 *)(local_a8 + 8) = uVar3;
  *(undefined4 *)(local_a8 + 0xc) = uVar4;
  *(uint *)(local_a8 + 0xf) =
       CONCAT31(s_legitbot_jump_color_1806f7678._16_3_,s_legitbot_jump_color_1806f7678[0xf]);
  local_a8[0x13] = '\0';
  FUN_1801944c0(param_1,&local_a8,param_2 + 0x7a90);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  pcVar7 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_velocity_ground_1806f7690._8_8_;
  local_98 = 0x18;
  local_90 = 0x1f;
  *(undefined8 *)pcVar7 = s_legitbot_velocity_ground_1806f7690._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar6;
  *(undefined8 *)(pcVar7 + 0x10) = s_legitbot_velocity_ground_1806f7690._16_8_;
  pcVar7[0x18] = '\0';
  pcVar12 = ",\n";
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar12 = "{\n";
  }
  local_a8 = pcVar7;
  sVar8 = strlen(pcVar12);
  FUN_1800134a0(param_1,pcVar12,sVar8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  FUN_1800134a0(param_1,pcVar7,0x18);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  pcVar7 = "false";
  if (*(char *)(param_2 + 0x7aa0) != '\0') {
    pcVar7 = "true";
  }
  sVar8 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar8);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  pcVar7 = (char *)FUN_18000fb70(0x20);
  local_98 = 0x15;
  local_90 = 0x1f;
  local_a8 = pcVar7;
  FUN_180013450(pcVar7,"legitbot.ground_color",0x15);
  pcVar7[0x15] = '\0';
  FUN_1801944c0(param_1,&local_a8,param_2 + 0x7aa4);
  FUN_18000f890(&local_a8);
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  pcVar7 = (char *)FUN_18000fb70(0x20);
  local_98 = 0x1a;
  local_90 = 0x1f;
  uVar6 = CONCAT62(s_legitbot_automatic_weapons_1806f7740._10_6_,
                   s_legitbot_automatic_weapons_1806f7740._8_2_);
  *(undefined8 *)pcVar7 = s_legitbot_automatic_weapons_1806f7740._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar6;
  uVar6 = s_legitbot_automatic_weapons_1806f7740._18_8_;
  *(ulonglong *)(pcVar7 + 10) =
       CONCAT26(s_legitbot_automatic_weapons_1806f7740._16_2_,
                s_legitbot_automatic_weapons_1806f7740._10_6_);
  *(undefined8 *)(pcVar7 + 0x12) = uVar6;
  pcVar7[0x1a] = '\0';
  pcVar12 = ",\n";
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar12 = "{\n";
  }
  local_a8 = pcVar7;
  sVar8 = strlen(pcVar12);
  FUN_1800134a0(param_1,pcVar12,sVar8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  FUN_1800134a0(param_1,pcVar7,0x1a);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  pcVar7 = "false";
  if (*(char *)(param_2 + 0x7ab4) != '\0') {
    pcVar7 = "true";
  }
  sVar8 = strlen(pcVar7);
  FUN_1800134a0(param_1,pcVar7,sVar8);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  pcVar7 = (char *)FUN_18000fb70(0x30);
  uVar6 = s_legitbot_automatic_weapons_inter_1806f76e0._8_8_;
  local_98 = 0x23;
  local_90 = 0x2f;
  *(undefined8 *)pcVar7 = s_legitbot_automatic_weapons_inter_1806f76e0._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar6;
  uVar6 = CONCAT17(s_legitbot_automatic_weapons_inter_1806f76e0[0x1f],
                   s_legitbot_automatic_weapons_inter_1806f76e0._24_7_);
  *(undefined8 *)(pcVar7 + 0x10) = s_legitbot_automatic_weapons_inter_1806f76e0._16_8_;
  *(undefined8 *)(pcVar7 + 0x18) = uVar6;
  *(undefined4 *)(pcVar7 + 0x1f) = s_legitbot_automatic_weapons_inter_1806f76e0._31_4_;
  pcVar7[0x23] = '\0';
  pcVar12 = ",\n";
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar12 = "{\n";
  }
  local_a8 = pcVar7;
  sVar8 = strlen(pcVar12);
  FUN_1800134a0(param_1,pcVar12,sVar8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  FUN_1800134a0(param_1,pcVar7,0x23);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  puVar9 = (undefined8 *)FUN_18003a390(local_88,*(undefined4 *)(param_2 + 0x7ab8));
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar10 = puVar9;
  }
  else {
    puVar10 = (undefined8 *)*puVar9;
  }
  FUN_1800134a0(param_1,puVar10,puVar9[2]);
  FUN_18000f890(local_88);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  pcVar7 = (char *)FUN_18000fb70(0x20);
  local_98 = 0x1a;
  local_90 = 0x1f;
  uVar6 = CONCAT62(s_legitbot_standalone_recoil_1806f7708._10_6_,
                   s_legitbot_standalone_recoil_1806f7708._8_2_);
  *(undefined8 *)pcVar7 = s_legitbot_standalone_recoil_1806f7708._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar6;
  uVar6 = s_legitbot_standalone_recoil_1806f7708._18_8_;
  *(ulonglong *)(pcVar7 + 10) =
       CONCAT26(s_legitbot_standalone_recoil_1806f7708._16_2_,
                s_legitbot_standalone_recoil_1806f7708._10_6_);
  *(undefined8 *)(pcVar7 + 0x12) = uVar6;
  pcVar7[0x1a] = '\0';
  pcVar12 = ",\n";
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar12 = "{\n";
  }
  local_a8 = pcVar7;
  sVar8 = strlen(pcVar12);
  FUN_1800134a0(param_1,pcVar12,sVar8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  FUN_1800134a0(param_1,pcVar7,0x1a);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  if (*(char *)(param_2 + 0x7abc) != '\0') {
    pcVar11 = "true";
  }
  sVar8 = strlen(pcVar11);
  FUN_1800134a0(param_1,pcVar11,sVar8);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  local_a8 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_legitbot_standalone__1806f7788._12_4_;
  uVar3 = s_legitbot_standalone__1806f7788._8_4_;
  uVar2 = s_legitbot_standalone__1806f7788._4_4_;
  local_98 = 0x14;
  local_90 = 0x1f;
  *(undefined4 *)local_a8 = s_legitbot_standalone__1806f7788._0_4_;
  *(undefined4 *)(local_a8 + 4) = uVar2;
  *(undefined4 *)(local_a8 + 8) = uVar3;
  *(undefined4 *)(local_a8 + 0xc) = uVar4;
  *(undefined4 *)(local_a8 + 0x10) = s_legitbot_standalone__1806f7788._16_4_;
  local_a8[0x14] = '\0';
  FUN_180151fe0(param_1,&local_a8,param_2 + 0x7ac0);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) goto LAB_18019793e;
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  pcVar7 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_legitbot_randomize_1806f77a0._8_8_;
  local_98 = 0x12;
  local_90 = 0x1f;
  *(undefined8 *)pcVar7 = s_legitbot_randomize_1806f77a0._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar6;
  *(undefined2 *)(pcVar7 + 0x10) = s_legitbot_randomize_1806f77a0._16_2_;
  pcVar7[0x12] = '\0';
  if (*(char *)(param_1 + 0x20) != '\0') {
    _Str = "{\n";
  }
  local_a8 = pcVar7;
  sVar8 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1800134a0(param_1,&DAT_1806f2ad0,3);
  FUN_1800134a0(param_1,pcVar7,0x12);
  FUN_1800134a0(param_1,&DAT_1806f2b04,3);
  puVar9 = (undefined8 *)FUN_18003a390(local_88,*(undefined4 *)(param_2 + 0x7ad4));
  if ((ulonglong)puVar9[3] < 0x10) {
    puVar10 = puVar9;
  }
  else {
    puVar10 = (undefined8 *)*puVar9;
  }
  FUN_1800134a0(param_1,puVar10,puVar9[2]);
  FUN_18000f890(local_88);
  if (0xf < local_90) {
    uVar13 = local_90 + 1;
    pcVar7 = local_a8;
    if (0xfff < uVar13) {
      pcVar7 = *(char **)(local_a8 + -8);
      if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar7)) {
LAB_18019793e:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar13 = local_90 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar7,uVar13);
  }
  return;
}



/* ===== 180197950 FUN_180197950 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180197950(undefined8 param_1,char *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  ulonglong uVar11;
  char *_Str;
  undefined1 auStack_1e8 [40];
  char *local_1c0 [4];
  char *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  char *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160 [32];
  char *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  char *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100 [32];
  char *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong uStack_c8;
  char *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  local_120 = (char *)0x0;
  uStack_118 = 0;
  local_120 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_view__1806f7760._12_4_;
  uVar3 = s_visuals_world_view__1806f7760._8_4_;
  uVar2 = s_visuals_world_view__1806f7760._4_4_;
  local_110 = 0x13;
  local_108 = 0x1f;
  *(undefined4 *)local_120 = s_visuals_world_view__1806f7760._0_4_;
  *(undefined4 *)(local_120 + 4) = uVar2;
  *(undefined4 *)(local_120 + 8) = uVar3;
  *(undefined4 *)(local_120 + 0xc) = uVar4;
  *(uint *)(local_120 + 0xf) =
       CONCAT31(s_visuals_world_view__1806f7760._16_3_,s_visuals_world_view__1806f7760[0xf]);
  local_120[0x13] = '\0';
  uVar5 = FUN_180073a70(local_1c0,&local_120,"override_fov");
  FUN_1800f2cb0(param_1,uVar5);
  _Str = "false";
  pcVar10 = "false";
  if (*param_2 != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,&DAT_1806e0e18);
  FUN_1800f2db0(param_1,uVar5,param_2 + 4);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"override_aspect");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[8] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"aspect_scaling");
  FUN_1800f2db0(param_1,uVar5,param_2 + 0xc);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"aspect_value");
  FUN_1800f2db0(param_1,uVar5,param_2 + 0x10);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"disable_landing_bob");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x14] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"scope_override_fov");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x15] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"scope_x1");
  FUN_1800f2db0(param_1,uVar5,param_2 + 0x18);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"scope_x2");
  FUN_1800f2db0(param_1,uVar5,param_2 + 0x1c);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"instant_scope");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x20] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"show_viewmodel");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x21] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"force_viewmodel_fov");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x22] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"vm_override_fov");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x23] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"vm_fov");
  FUN_1800f2db0(param_1,uVar5,param_2 + 0x24);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"vm_override_position");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x28] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,&DAT_1806f78b0);
  FUN_1800f2e20(param_1,uVar5,param_2 + 0x2c);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,&DAT_1806f7884);
  FUN_1800f2e20(param_1,uVar5,param_2 + 0x30);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,&DAT_1806f788c);
  FUN_1800f2e20(param_1,uVar5,param_2 + 0x34);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"vm_override_angles");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x38] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"vm_pitch");
  FUN_1800f2e20(param_1,uVar5,param_2 + 0x3c);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"vm_yaw");
  FUN_1800f2e20(param_1,uVar5,param_2 + 0x40);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"vm_roll");
  FUN_1800f2e20(param_1,uVar5,param_2 + 0x44);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"vm_override_modifiers");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x48] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"vm_bobbing");
  FUN_1800f2db0(param_1,uVar5,param_2 + 0x4c);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"vm_rotation_sway");
  FUN_1800f2db0(param_1,uVar5,param_2 + 0x50);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"vm_velocity_sway");
  FUN_1800f2db0(param_1,uVar5,param_2 + 0x54);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"vm_in_air_offset");
  FUN_1800f2db0(param_1,uVar5,param_2 + 0x58);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"vm_lower_weapon");
  FUN_1800f2db0(param_1,uVar5,param_2 + 0x5c);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"vm_ladder_bob");
  FUN_1800f2db0(param_1,uVar5,param_2 + 0x60);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"force_third_person");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[100] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"third_person_disablers");
  FUN_1801940a0(param_1,uVar5,param_2 + 0x65);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"third_person_distance");
  FUN_1800f2db0(param_1,uVar5,param_2 + 0x68);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"disable_overhead");
  FUN_1801940a0(param_1,uVar5,param_2 + 0x6c);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"unlock_spectating");
  FUN_1801940a0(param_1,uVar5,param_2 + 0x6e);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_120,"visual_recoil");
  FUN_180194310(param_1,uVar5,param_2 + 0x70);
  FUN_18000f890(local_1c0);
  local_1a0 = (char *)0x0;
  uStack_198 = 0;
  local_1a0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_esp__1806f7a28._12_4_;
  uVar3 = s_visuals_world_esp__1806f7a28._8_4_;
  uVar2 = s_visuals_world_esp__1806f7a28._4_4_;
  local_190 = 0x12;
  local_188 = 0x1f;
  *(undefined4 *)local_1a0 = s_visuals_world_esp__1806f7a28._0_4_;
  *(undefined4 *)(local_1a0 + 4) = uVar2;
  *(undefined4 *)(local_1a0 + 8) = uVar3;
  *(undefined4 *)(local_1a0 + 0xc) = uVar4;
  *(undefined2 *)(local_1a0 + 0x10) = s_visuals_world_esp__1806f7a28._16_2_;
  local_1a0[0x12] = '\0';
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,&DAT_18058b61c);
  FUN_1801bf0a0(param_1,uVar5,param_2 + 0x74);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"bomb_defused");
  FUN_1801944c0(param_1,uVar5,param_2 + 0xa8);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"defuser");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0xb8] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"defuser_in_time");
  FUN_1801944c0(param_1,uVar5,param_2 + 0xbc);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"defuser_too_late");
  FUN_1801944c0(param_1,uVar5,param_2 + 0xcc);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"damage_low");
  FUN_1801944c0(param_1,uVar5,param_2 + 0xdc);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"damage_high");
  FUN_1801944c0(param_1,uVar5,param_2 + 0xec);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"bomb_colorize_effects");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0xfc] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"bomb_explosion");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x100);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"bomb_light");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x110);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"weapons");
  FUN_1801bf0a0(param_1,uVar5,param_2 + 0x120);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"weapons_colorize_effects");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x154] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"weapon_effect");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x158);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"impact_effect");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x168);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"hostages");
  FUN_1801bf0a0(param_1,uVar5,param_2 + 0x178);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"grenades");
  FUN_1801bf0a0(param_1,uVar5,param_2 + 0x1ac);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"grenade_lethal");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x1e0);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"grenade_utility");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x1f0);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"item_exponent");
  FUN_1800f2db0(param_1,uVar5,param_2 + 0x200);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"item_thickness");
  FUN_1800f2e20(param_1,uVar5,param_2 + 0x204);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"item_points_thickness");
  FUN_1800f2e20(param_1,uVar5,param_2 + 0x208);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"item_shimmer");
  FUN_1800f2db0(param_1,uVar5,param_2 + 0x20c);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"smoke_radius");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x210] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"smoke_radius_color");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x214);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"smoke_options");
  FUN_1801bf2e0(param_1,uVar5,param_2 + 0x224);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"inferno_radius");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x238] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"inferno_lethal");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x23c);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"inferno_safe");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x24c);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"inferno_options");
  FUN_1801bf2e0(param_1,uVar5,param_2 + 0x25c);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"projectile_inferno");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x270] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"projectile_lethal");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x274);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"projectile_safe");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x284);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"colorize_smoke");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x294] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"smoke_ct");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x298);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"smoke_t");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x2a8);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"colorize_molotov");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x2b8] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"molotov_lethal");
  FUN_1801944c0(param_1,uVar5,param_2 + 700);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"molotov_safe");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x2cc);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"disable_inferno_decals");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x2dc] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"colorize_explosion");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x2dd] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"explosion_color");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x2e0);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"effects");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x2f0] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"effects_color");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x2f4);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"effects_items");
  FUN_180151e90(param_1,uVar5,param_2 + 0x304);
  FUN_18000f890(local_1c0);
  uVar11 = 0;
  do {
    uVar5 = FUN_18004e4f0(&local_80,uVar11);
    uVar7 = FUN_180073a70(local_1c0 + 8,local_1c0 + 4,"effects_item_color");
    uVar5 = FUN_180066820(local_1c0,uVar7,uVar5);
    FUN_1801944c0(param_1,uVar5,param_2 + uVar11 * 0x10 + 0x30c);
    FUN_18000f890(local_1c0);
    FUN_18000f890(local_1c0 + 8);
    FUN_18000f890(&local_80);
    uVar11 = uVar11 + 1;
  } while (uVar11 < 5);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"effects_item_inherit");
  FUN_180151e90(param_1,uVar5,param_2 + 0x35c);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"trajectory");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x361] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"trajectory_base");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x364);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"trajectory_hit");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x374);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"trajectory_team_damage");
  FUN_1801944c0(param_1,uVar5,param_2 + 900);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0 + 8,local_1c0 + 4,"trajectory_exponent");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x394));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0 + 8,local_1c0 + 4,"trajectory_thickness");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_1800f2be0(local_1c0,*(undefined4 *)(param_2 + 0x398));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0 + 8,local_1c0 + 4,"trajectory_points_thickness");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_1800f2be0(local_1c0,*(undefined4 *)(param_2 + 0x39c));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"trajectory_shimmer");
  FUN_1801940a0(param_1,uVar5,param_2 + 0x3a0);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0 + 8,local_1c0 + 4,"trajectory_shimmer_strength");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x3a4));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"trajectory_thrown");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x3a8] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"trajectory_pin_pulled_only");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x3a9] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,local_1c0 + 4,"trajectory_precise");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x3aa] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  local_140 = (char *)0x0;
  uStack_138 = 0;
  local_140 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_hud__1806f7df8._12_4_;
  uVar3 = s_visuals_world_hud__1806f7df8._8_4_;
  uVar2 = s_visuals_world_hud__1806f7df8._4_4_;
  local_130 = 0x12;
  local_128 = 0x1f;
  *(undefined4 *)local_140 = s_visuals_world_hud__1806f7df8._0_4_;
  *(undefined4 *)(local_140 + 4) = uVar2;
  *(undefined4 *)(local_140 + 8) = uVar3;
  *(undefined4 *)(local_140 + 0xc) = uVar4;
  *(undefined2 *)(local_140 + 0x10) = s_visuals_world_hud__1806f7df8._16_2_;
  local_140[0x12] = '\0';
  uVar5 = FUN_180073a70(local_1c0,&local_140,"radar");
  FUN_180194310(param_1,uVar5,param_2 + 0x3ac);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_140,"scope_overlay");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x3b0));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_140,"scope_color_mode");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x3b4));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"scope_color");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x3b8);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"scope_outer");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x3c8);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"scope_inner");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x3d8);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"scope_selection");
  FUN_180194310(param_1,uVar5,param_2 + 1000);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_140,"scope_rotation");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x3ec));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_140,"scope_offset");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x3f0));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_140,"scope_size");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x3f4));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_140,"scope_aspect");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x3f8));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_140,"scope_spread_scale");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x3fc));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"scope_glow");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x400] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"scope_glow_color");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x404);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"inaccuracy");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x414] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"inaccuracy_color");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x418);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"inaccuracy_follow_recoil");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x428] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"inaccuracy_only_in_scope");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x429] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"inaccuracy_invert_fade");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x42a] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_140,"inaccuracy_fade_offset");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x42c));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_140,"preserve_notices");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x430));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"hide_teammate_assists");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x434] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_140,"scoreboard_opacity");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x438));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_140,"scoreboard_width");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x43c));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"reveal_money");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x440] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"reveal_ranks");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x441] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_140,"equipment");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x444));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"equipment_items");
  FUN_1801bf400(param_1,uVar5,param_2 + 0x448);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"force_sniper_crosshair");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x451] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"force_while_scoped");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x452] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"force_while_c4");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x453] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"hide_while_knife");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x454] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"hide_while_grenade");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x455] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"penetration");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x456] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"penetration_base");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x458);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"penetration_penetrable");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x468);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_140,"penetration_target");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x478);
  FUN_18000f890(local_1c0);
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_c0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_removals__1806f8148._12_4_;
  uVar3 = s_visuals_world_removals__1806f8148._8_4_;
  uVar2 = s_visuals_world_removals__1806f8148._4_4_;
  local_b0 = 0x17;
  local_a8 = 0x1f;
  *(undefined4 *)local_c0 = s_visuals_world_removals__1806f8148._0_4_;
  *(undefined4 *)(local_c0 + 4) = uVar2;
  *(undefined4 *)(local_c0 + 8) = uVar3;
  *(undefined4 *)(local_c0 + 0xc) = uVar4;
  *(ulonglong *)(local_c0 + 0xf) =
       CONCAT71(s_visuals_world_removals__1806f8148._16_7_,s_visuals_world_removals__1806f8148[0xf])
  ;
  local_c0[0x17] = '\0';
  uVar5 = FUN_180073a70(local_1c0,&local_c0,"team_intro");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x488] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_c0,"panorama_dots");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x489] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_c0,"bottom_gradient");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x48a] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_c0,"damage_indicator");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x48b] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_c0,"server_ads");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x48c] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_c0,"flashbang");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x48d] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_c0,&DAT_1806e7598);
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x48e] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_c0,&DAT_1806f816c);
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x48f] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_c0,"carried_hostage");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x490] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_c0,"post_processing");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x491] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_c0,"water");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x492] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_c0,"blood");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x493] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_c0,"decals");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x494] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_c0,"ragdolls");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x498));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_c0,"gravity");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x49c));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_c0,"friction");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_1c0,*(undefined4 *)(param_2 + 0x4a0));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  local_80 = (char *)0x0;
  uStack_78 = 0;
  local_80 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_hitmarker__1806f81f8._12_4_;
  uVar3 = s_visuals_world_hitmarker__1806f81f8._8_4_;
  uVar2 = s_visuals_world_hitmarker__1806f81f8._4_4_;
  local_70 = 0x18;
  local_68 = 0x1f;
  *(undefined4 *)local_80 = s_visuals_world_hitmarker__1806f81f8._0_4_;
  *(undefined4 *)(local_80 + 4) = uVar2;
  *(undefined4 *)(local_80 + 8) = uVar3;
  *(undefined4 *)(local_80 + 0xc) = uVar4;
  *(undefined8 *)(local_80 + 0x10) = s_visuals_world_hitmarker__1806f81f8._16_8_;
  local_80[0x18] = '\0';
  uVar5 = FUN_180073a70(local_1c0,&local_80,"marker_2d");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x4a4] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_80,"color_2d");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x4a8);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_80,"duration_2d");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_1800f2be0(local_1c0,*(undefined4 *)(param_2 + 0x4b8));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0,&local_80,"marker_3d");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x4bc] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_80,"color_3d");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x4c0);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_80,"duration_3d");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_1800f2be0(local_1c0,*(undefined4 *)(param_2 + 0x4d0));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0,&local_80,"damage");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x4d4] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_80,"color_damage");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x4d8);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_80,"duration_damage");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_1800f2be0(local_1c0,*(undefined4 *)(param_2 + 0x4e8));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  local_a0 = (char *)0x0;
  uStack_98 = 0;
  local_a0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_tracers__1806f8290._8_4_;
  uVar3 = s_visuals_world_tracers__1806f8290._4_4_;
  local_90 = 0x16;
  local_88 = 0x1f;
  uVar2 = CONCAT22(s_visuals_world_tracers__1806f8290._14_2_,
                   s_visuals_world_tracers__1806f8290._12_2_);
  *(undefined4 *)local_a0 = s_visuals_world_tracers__1806f8290._0_4_;
  *(undefined4 *)(local_a0 + 4) = uVar3;
  *(undefined4 *)(local_a0 + 8) = uVar4;
  *(undefined4 *)(local_a0 + 0xc) = uVar2;
  *(ulonglong *)(local_a0 + 0xe) =
       CONCAT62(s_visuals_world_tracers__1806f8290._16_6_,s_visuals_world_tracers__1806f8290._14_2_)
  ;
  local_a0[0x16] = '\0';
  uVar5 = FUN_180073a70(local_1c0,&local_a0,"enemies");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x4ec] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_a0,"enemies_color");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x4f0);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_a0,"enemies_duration");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_1800f2be0(local_1c0,*(undefined4 *)(param_2 + 0x500));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0,&local_a0,"teammates");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x504] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_a0,"teammates_color");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x508);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_a0,"teammates_duration");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_1800f2be0(local_1c0,*(undefined4 *)(param_2 + 0x518));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0,&local_a0,"local");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x51c] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0,&local_a0,"local_color");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x520);
  FUN_18000f890(local_1c0);
  uVar5 = FUN_180073a70(local_1c0 + 8,&local_a0,"local_duration");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_1800f2be0(local_1c0,*(undefined4 *)(param_2 + 0x530));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_1c0);
  FUN_18000f890(local_1c0 + 8);
  uVar5 = FUN_180073a70(local_1c0,&local_a0,"shared");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x534] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_1c0);
  local_1c0[0] = "enemies";
  local_1c0[1] = "teammates";
  local_1c0[2] = "local";
  local_1c0[3] = "shared";
  uVar11 = 0;
  do {
    pcVar10 = local_1c0[uVar11];
    uVar5 = FUN_180073a70(local_60,&local_a0,"style_");
    sVar6 = strlen(pcVar10);
    puVar8 = (undefined8 *)FUN_1800134a0(uVar5,pcVar10,sVar6);
    local_180 = (char *)*puVar8;
    uStack_178 = puVar8[1];
    local_170 = puVar8[2];
    uStack_168 = puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined8 *)FUN_1800134a0(local_1c0 + 8,&DAT_1806e6f24,1);
    local_e0 = (char *)*puVar8;
    uStack_d8 = puVar8[1];
    local_d0 = puVar8[2];
    uStack_c8 = puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    *(undefined1 *)puVar8 = 0;
    FUN_18000f890(local_1c0 + 8);
    FUN_18000f890(local_60);
    uVar5 = FUN_180073a70(local_100,&local_e0,"use_3d_scale");
    FUN_1800f2cb0(param_1,uVar5);
    pcVar10 = "false";
    if (param_2[uVar11 * 0x18 + 0x538] != '\0') {
      pcVar10 = "true";
    }
    sVar6 = strlen(pcVar10);
    FUN_1800134a0(param_1,pcVar10,sVar6);
    FUN_18000f890(local_100);
    uVar5 = FUN_180073a70(local_160,&local_e0,"glow_opacity");
    FUN_1800f2cb0(param_1,uVar5);
    puVar9 = (undefined8 *)FUN_18003a390(local_100,*(undefined4 *)(param_2 + uVar11 * 0x18 + 0x53c))
    ;
    puVar8 = puVar9 + 2;
    if (0xf < (ulonglong)puVar9[3]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    FUN_1800134a0(param_1,puVar9,*puVar8);
    FUN_18000f890(local_100);
    FUN_18000f890(local_160);
    uVar5 = FUN_180073a70(local_100,&local_e0,"thickness");
    FUN_1800f2cb0(param_1,uVar5);
    puVar9 = (undefined8 *)FUN_1800f2be0(local_160,*(undefined4 *)(param_2 + uVar11 * 0x18 + 0x540))
    ;
    puVar8 = puVar9 + 2;
    if (0xf < (ulonglong)puVar9[3]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    FUN_1800134a0(param_1,puVar9,*puVar8);
    FUN_18000f890(local_160);
    FUN_18000f890(local_100);
    uVar5 = FUN_180073a70(local_100,&local_e0,"scale");
    FUN_1800f2cb0(param_1,uVar5);
    puVar9 = (undefined8 *)FUN_18003a390(local_160,*(undefined4 *)(param_2 + uVar11 * 0x18 + 0x544))
    ;
    puVar8 = puVar9 + 2;
    if (0xf < (ulonglong)puVar9[3]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    FUN_1800134a0(param_1,puVar9,*puVar8);
    FUN_18000f890(local_160);
    FUN_18000f890(local_100);
    uVar5 = FUN_180073a70(local_100,&local_e0,"glow_width");
    FUN_1800f2cb0(param_1,uVar5);
    puVar9 = (undefined8 *)FUN_1800f2be0(local_160,*(undefined4 *)(param_2 + uVar11 * 0x18 + 0x548))
    ;
    puVar8 = puVar9 + 2;
    if (0xf < (ulonglong)puVar9[3]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    FUN_1800134a0(param_1,puVar9,*puVar8);
    FUN_18000f890(local_160);
    FUN_18000f890(local_100);
    uVar5 = FUN_180073a70(local_100,&local_e0,"glow_radius");
    FUN_1800f2cb0(param_1,uVar5);
    puVar9 = (undefined8 *)FUN_1800f2be0(local_160,*(undefined4 *)(param_2 + uVar11 * 0x18 + 0x54c))
    ;
    puVar8 = puVar9 + 2;
    if (0xf < (ulonglong)puVar9[3]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    FUN_1800134a0(param_1,puVar9,*puVar8);
    FUN_18000f890(local_160);
    FUN_18000f890(local_100);
    FUN_18000f890(&local_e0);
    uVar11 = uVar11 + 1;
  } while (uVar11 < 4);
  local_e0 = (char *)0x0;
  uStack_d8 = 0;
  local_e0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_visuals_world_impacts__1806f8398._8_4_;
  uVar3 = s_visuals_world_impacts__1806f8398._4_4_;
  local_d0 = 0x16;
  uStack_c8 = 0x1f;
  uVar2 = CONCAT22(s_visuals_world_impacts__1806f8398._14_2_,
                   s_visuals_world_impacts__1806f8398._12_2_);
  *(undefined4 *)local_e0 = s_visuals_world_impacts__1806f8398._0_4_;
  *(undefined4 *)(local_e0 + 4) = uVar3;
  *(undefined4 *)(local_e0 + 8) = uVar4;
  *(undefined4 *)(local_e0 + 0xc) = uVar2;
  *(ulonglong *)(local_e0 + 0xe) =
       CONCAT62(s_visuals_world_impacts__1806f8398._16_6_,s_visuals_world_impacts__1806f8398._14_2_)
  ;
  local_e0[0x16] = '\0';
  uVar5 = FUN_180073a70(local_160,&local_e0,"enabled");
  FUN_1800f2cb0(param_1,uVar5);
  pcVar10 = "false";
  if (param_2[0x598] != '\0') {
    pcVar10 = "true";
  }
  sVar6 = strlen(pcVar10);
  FUN_1800134a0(param_1,pcVar10,sVar6);
  FUN_18000f890(local_160);
  uVar5 = FUN_180073a70(local_160,&local_e0,"client");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x59c);
  FUN_18000f890(local_160);
  uVar5 = FUN_180073a70(local_160,&local_e0,"server");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x5ac);
  FUN_18000f890(local_160);
  uVar5 = FUN_180073a70(local_100,&local_e0,"scale");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_160,*(undefined4 *)(param_2 + 0x5bc));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_160);
  FUN_18000f890(local_100);
  uVar5 = FUN_180073a70(local_100,&local_e0,"rounding");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_160,*(undefined4 *)(param_2 + 0x5c0));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_160);
  FUN_18000f890(local_100);
  uVar5 = FUN_180073a70(local_100,&local_e0,"fill_opacity");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_160,*(undefined4 *)(param_2 + 0x5c4));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_160);
  FUN_18000f890(local_100);
  uVar5 = FUN_180073a70(local_100,&local_e0,"outline_opacity");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_160,*(undefined4 *)(param_2 + 0x5c8));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_160);
  FUN_18000f890(local_100);
  uVar5 = FUN_180073a70(local_100,&local_e0,"glow_opacity");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_160,*(undefined4 *)(param_2 + 0x5cc));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_160);
  FUN_18000f890(local_100);
  uVar5 = FUN_180073a70(local_100,&local_e0,&DAT_1806f83d8);
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_1800f2be0(local_160,*(undefined4 *)(param_2 + 0x5d0));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_160);
  FUN_18000f890(local_100);
  uVar5 = FUN_180073a70(local_100,&local_e0,"duration");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_1800f2be0(local_160,*(undefined4 *)(param_2 + 0x5d4));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_160);
  FUN_18000f890(local_100);
  uVar5 = FUN_180073a70(local_160,&local_e0,"sparks");
  FUN_1800f2cb0(param_1,uVar5);
  if (param_2[0x5d8] != '\0') {
    _Str = "true";
  }
  sVar6 = strlen(_Str);
  FUN_1800134a0(param_1,_Str,sVar6);
  FUN_18000f890(local_160);
  uVar5 = FUN_180073a70(local_160,&local_e0,"sparks_color");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x5dc);
  FUN_18000f890(local_160);
  uVar5 = FUN_180073a70(local_160,&local_e0,"sparks_glow");
  FUN_1801944c0(param_1,uVar5,param_2 + 0x5ec);
  FUN_18000f890(local_160);
  uVar5 = FUN_180073a70(local_100,&local_e0,"sparks_radius");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_1800f2be0(local_160,*(undefined4 *)(param_2 + 0x5fc));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_160);
  FUN_18000f890(local_100);
  uVar5 = FUN_180073a70(local_100,&local_e0,"sparks_count");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_160,*(undefined4 *)(param_2 + 0x600));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_160);
  FUN_18000f890(local_100);
  uVar5 = FUN_180073a70(local_100,&local_e0,"sparks_spread");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_160,*(undefined4 *)(param_2 + 0x604));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_160);
  FUN_18000f890(local_100);
  uVar5 = FUN_180073a70(local_100,&local_e0,"sparks_height");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_18003a390(local_160,*(undefined4 *)(param_2 + 0x608));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_160);
  FUN_18000f890(local_100);
  uVar5 = FUN_180073a70(local_100,&local_e0,"sparks_lifetime");
  FUN_1800f2cb0(param_1,uVar5);
  puVar8 = (undefined8 *)FUN_1800f2be0(local_160,*(undefined4 *)(param_2 + 0x60c));
  if ((ulonglong)puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (undefined8 *)*puVar8;
  }
  FUN_1800134a0(param_1,puVar9,puVar8[2]);
  FUN_18000f890(local_160);
  FUN_18000f890(local_100);
  if (0xf < uStack_c8) {
    uVar11 = uStack_c8 + 1;
    pcVar10 = local_e0;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_e0 + -8);
      if ((char *)0x1f < local_e0 + (-8 - (longlong)pcVar10)) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar11 = uStack_c8 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  FUN_18000f890(&local_a0);
  FUN_18000f890(&local_80);
  FUN_18000f890(&local_c0);
  FUN_18000f890(&local_140);
  FUN_18000f890(local_1c0 + 4);
  FUN_18000f890(&local_120);
  return;
}



/* ===== 18019b220 FUN_18019b220 ===== */

void FUN_18019b220(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  
  piVar1 = (int *)FUN_1800f2fa0();
  if ((piVar1 == (int *)0x0) || (*piVar1 != 3)) {
    return;
  }
  plVar2 = (longlong *)(piVar1 + 4);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  if (0xf < *(ulonglong *)(piVar1 + 10)) {
    plVar2 = (longlong *)*plVar2;
  }
  snprintf(param_3,0x60,&DAT_1806d3198,plVar2);
  return;
}



/* ===== 18019b280 FUN_18019b280 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18019b280(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  FUN_1800f3090();
  uVar1 = FUN_180073a70(local_48,param_2,"_mode");
  FUN_1800f3090(param_1,uVar1,param_3 + 4);
  FUN_18000f890(local_48);
  return;
}



/* ===== 18019b2f0 FUN_18019b2f0 ===== */

void FUN_18019b2f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  
  piVar1 = (int *)FUN_1800f2fa0();
  if ((piVar1 == (int *)0x0) || (*piVar1 != 3)) {
    return;
  }
  plVar2 = (longlong *)(piVar1 + 4);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  if (0xf < *(ulonglong *)(piVar1 + 10)) {
    plVar2 = (longlong *)*plVar2;
  }
  snprintf(param_3,0x30,&DAT_1806d3198,plVar2);
  return;
}



/* ===== 18019b350 FUN_18019b350 ===== */

void FUN_18019b350(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  
  piVar1 = (int *)FUN_1800f2fa0();
  if ((piVar1 == (int *)0x0) || (*piVar1 != 3)) {
    return;
  }
  plVar2 = (longlong *)(piVar1 + 4);
  *param_3 = 0;
  param_3[1] = 0;
  if (0xf < *(ulonglong *)(piVar1 + 10)) {
    plVar2 = (longlong *)*plVar2;
  }
  snprintf(param_3,0x10,&DAT_1806d3198,plVar2);
  return;
}



/* ===== 18019b3a0 FUN_18019b3a0 ===== */

void FUN_18019b3a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  double dVar3;
  
  piVar1 = (int *)FUN_1800f2fa0();
  if ((piVar1 != (int *)0x0) && (*piVar1 == 4)) {
    uVar2 = 0;
    do {
      if ((ulonglong)
          ((*(longlong *)(piVar1 + 0xe) - *(longlong *)(piVar1 + 0xc) >> 5) * -0x5555555555555555)
          <= uVar2) {
        return;
      }
      dVar3 = (double)FUN_180370b10(uVar2 * 0x60 + *(longlong *)(piVar1 + 0xc),
                                    SUB84((double)*(float *)(param_3 + uVar2 * 4),0));
      if (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_3 + uVar2 * 4) = (float)dVar3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 3);
  }
  return;
}



/* ===== 18019b450 FUN_18019b450 ===== */

void FUN_18019b450(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  
  piVar1 = (int *)FUN_1800f2fa0();
  if ((piVar1 == (int *)0x0) || (*piVar1 != 3)) {
    return;
  }
  plVar2 = (longlong *)(piVar1 + 4);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (0xf < *(ulonglong *)(piVar1 + 10)) {
    plVar2 = (longlong *)*plVar2;
  }
  snprintf(param_3,0x20,&DAT_1806d3198,plVar2);
  return;
}



/* ===== 18019b4a0 FUN_18019b4a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18019b4a0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_a8;
  uVar2 = FUN_180073a70(local_88,param_2,".esp.enabled");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = *param_3;
    }
    *param_3 = uVar1;
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,param_2,".esp.box");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = param_3[1];
    }
    param_3[1] = uVar1;
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,param_2,".esp.name");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = param_3[2];
    }
    param_3[2] = uVar1;
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,param_2,".esp.icon");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = param_3[3];
    }
    param_3[3] = uVar1;
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,param_2,".esp.distance");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = param_3[4];
    }
    param_3[4] = uVar1;
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,param_2,".esp.timer");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = param_3[5];
    }
    param_3[5] = uVar1;
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,param_2,".esp.damage");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = param_3[6];
    }
    param_3[6] = uVar1;
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,param_2,".esp.color");
  FUN_18019e140(param_1,uVar2,param_3 + 8);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,param_2,".esp.max_distance");
  lVar4 = FUN_1800f2fa0(param_1,uVar2);
  if (lVar4 != 0) {
    dVar6 = (double)FUN_180370b10(lVar4,SUB84((double)*(float *)(param_3 + 0x18),0));
    if (((uint)(float)dVar6 & 0x7f800000) != 0x7f800000) {
      *(float *)(param_3 + 0x18) = (float)dVar6;
    }
  }
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_68,param_2,".chams");
  uVar5 = FUN_180073a70(local_88,uVar2,".enabled");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar5);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = param_3[0x1c];
    }
    param_3[0x1c] = uVar1;
  }
  FUN_18000f890(local_88);
  uVar5 = FUN_180073a70(local_88,uVar2,".visible");
  FUN_1801c36c0(param_1,uVar5,param_3 + 0x20);
  FUN_18000f890(local_88);
  uVar5 = FUN_180073a70(local_88,uVar2,".occluded");
  FUN_1801c36c0(param_1,uVar5,param_3 + 0x38);
  FUN_18000f890(local_88);
  uVar5 = FUN_180073a70(local_88,uVar2,".overlay");
  FUN_1801c36c0(param_1,uVar5,param_3 + 0x50);
  FUN_18000f890(local_88);
  uVar2 = FUN_180073a70(local_88,uVar2,".overlay_occluded");
  FUN_1801c36c0(param_1,uVar2,param_3 + 0x68);
  FUN_18000f890(local_88);
  FUN_18000f890(local_68);
  uVar2 = FUN_180073a70(local_68,param_2,".glow.enabled");
  piVar3 = (int *)FUN_1800f2fa0(param_1,uVar2);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar1 = (undefined1)piVar3[1];
    }
    else if (*piVar3 == 2) {
      if (*(double *)(piVar3 + 2) == 0.0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = param_3[0x80];
    }
    param_3[0x80] = uVar1;
  }
  FUN_18000f890(local_68);
  uVar2 = FUN_180073a70(local_68,param_2,".glow.color");
  FUN_18019e140(param_1,uVar2,param_3 + 0x84);
  FUN_18000f890(local_68);
  return;
}



/* ===== 18019b9b0 FUN_18019b9b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18019b9b0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  char *_Str;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  int *piVar6;
  size_t sVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  ulonglong local_70;
  
  local_70 = DAT_180919500 ^ (ulonglong)auStack_148;
  local_120 = param_2;
  uVar5 = FUN_180073a70(&local_d0,param_2,".esp.enabled");
  piVar6 = (int *)FUN_1800f2fa0(param_1,uVar5);
  if (piVar6 != (int *)0x0) {
    if (*piVar6 == 1) {
      uVar4 = (undefined1)piVar6[1];
    }
    else if (*piVar6 == 2) {
      if (*(double *)(piVar6 + 2) == 0.0) {
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
  }
  FUN_18000f890(&local_d0);
  dVar3 = DAT_1808ace48;
  dVar2 = DAT_1808ac9c8;
  local_128 = 0;
  do {
    uVar14 = local_128;
    lVar18 = local_128 * 0x118;
    lVar19 = local_128 * 0x98;
    _Str = (&PTR_s_health_bar_1805e7de0)[local_128];
    local_118 = lVar18;
    uVar5 = FUN_180073a70(local_90,param_2,".esp.item.");
    sVar7 = strlen(_Str);
    puVar8 = (undefined4 *)FUN_1800134a0(uVar5,_Str,sVar7);
    local_d0 = *puVar8;
    uStack_cc = puVar8[1];
    uStack_c8 = puVar8[2];
    uStack_c4 = puVar8[3];
    local_c0 = *(undefined8 *)(puVar8 + 4);
    uStack_b8 = *(undefined8 *)(puVar8 + 6);
    *(undefined1 *)puVar8 = 0;
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 6) = 0xf;
    FUN_18000f890(local_90);
    uVar5 = FUN_180073a70(local_f0,&local_d0,".enabled");
    piVar6 = (int *)FUN_1800f2fa0(param_1,uVar5);
    if (piVar6 != (int *)0x0) {
      if (*piVar6 == 1) {
        uVar4 = (undefined1)piVar6[1];
      }
      else if (*piVar6 == 2) {
        if (*(double *)(piVar6 + 2) == 0.0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = param_3[lVar19 + 4];
      }
      param_3[lVar19 + 4] = uVar4;
    }
    FUN_18000f890(local_f0);
    uVar5 = FUN_180073a70(local_f0,&local_d0,".side");
    lVar9 = FUN_1800f2fa0(param_1,uVar5);
    if ((((lVar9 != 0) &&
         (dVar20 = (double)FUN_180370b10(lVar9,(double)*(int *)(param_3 + lVar19 + 8)),
         ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar3 < dVar20)) &&
       (dVar20 < dVar2)) {
      *(int *)(param_3 + lVar19 + 8) = (int)dVar20;
    }
    FUN_18000f890(local_f0);
    uVar5 = FUN_180073a70(local_f0,&local_d0,".position");
    lVar9 = FUN_1800f2fa0(param_1,uVar5);
    if (((lVar9 != 0) &&
        (dVar20 = (double)FUN_180370b10(lVar9,(double)*(int *)(param_3 + lVar19 + 0xc)),
        ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) &&
       ((dVar3 < dVar20 && (dVar20 < dVar2)))) {
      *(int *)(param_3 + lVar19 + 0xc) = (int)dVar20;
    }
    FUN_18000f890(local_f0);
    uVar5 = FUN_180073a70(local_f0,&local_d0);
    lVar9 = FUN_1800f2fa0(param_1,uVar5);
    if (((lVar9 != 0) &&
        (dVar20 = (double)FUN_180370b10(lVar9,(double)*(int *)(param_3 + lVar19 + 0x10)),
        ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) &&
       ((dVar3 < dVar20 && (dVar20 < dVar2)))) {
      *(int *)(param_3 + lVar19 + 0x10) = (int)dVar20;
    }
    FUN_18000f890(local_f0);
    iVar13 = 0;
    iVar1 = (&DAT_1805e7f10)[uVar14 * 0x46];
    if (0 < iVar1) {
      uVar16 = 0;
      iVar13 = 0;
      do {
        if (iVar13 < (int)((&DAT_1805e7f24)[uVar14 * 0x46 + uVar16 * 10] +
                          (&DAT_1805e7f20)[uVar14 * 0x46 + uVar16 * 10])) {
          iVar13 = (&DAT_1805e7f24)[uVar14 * 0x46 + uVar16 * 10] +
                   (&DAT_1805e7f20)[uVar14 * 0x46 + uVar16 * 10];
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
      } while ((int)uVar15 < iVar1);
    }
    if (1 < iVar1) {
      uVar5 = FUN_180073a70(local_f0,&local_d0,".color_mode");
      lVar9 = FUN_1800f2fa0(param_1,uVar5);
      if ((((lVar9 != 0) &&
           (dVar20 = (double)FUN_180370b10(lVar9,(double)*(int *)(param_3 + lVar19 + 0x14)),
           ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar3 < dVar20)) &&
         (dVar20 < dVar2)) {
        *(int *)(param_3 + lVar19 + 0x14) = (int)dVar20;
      }
      FUN_18000f890(local_f0);
    }
    uVar14 = 0;
    if (iVar13 < 1) {
      iVar13 = 1;
    }
    if (0 < iVar13) {
      do {
        uVar5 = FUN_18003a390(local_110,uVar14);
        uVar10 = FUN_180073a70(local_b0,&local_d0,".color");
        uVar5 = FUN_180066820(local_f0,uVar10,uVar5);
        FUN_18019e140(param_1,uVar5,param_3 + uVar14 * 0x10 + lVar19 + 0x18);
        FUN_18000f890(local_f0);
        FUN_18000f890(local_b0);
        FUN_18000f890(local_110);
        uVar15 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar15;
      } while ((int)uVar15 < iVar13);
      lVar18 = local_118;
    }
    if (*(int *)((longlong)&DAT_1805e7eec + lVar18) == 0) {
      uVar5 = FUN_180073a70(local_110,&local_d0,".background");
      piVar6 = (int *)FUN_1800f2fa0(param_1,uVar5);
      if (piVar6 != (int *)0x0) {
        if (*piVar6 == 1) {
          uVar4 = (undefined1)piVar6[1];
        }
        else if (*piVar6 == 2) {
          if (*(double *)(piVar6 + 2) == 0.0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          uVar4 = param_3[lVar19 + 0x78];
        }
        param_3[lVar19 + 0x78] = uVar4;
      }
      FUN_18000f890(local_110);
      uVar5 = FUN_180073a70(local_110,&local_d0,".shadow");
      piVar6 = (int *)FUN_1800f2fa0(param_1,uVar5);
      if (piVar6 != (int *)0x0) {
        if (*piVar6 == 1) {
          uVar4 = (undefined1)piVar6[1];
        }
        else if (*piVar6 == 2) {
          if (*(double *)(piVar6 + 2) == 0.0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          uVar4 = param_3[lVar19 + 0x79];
        }
        param_3[lVar19 + 0x79] = uVar4;
      }
      FUN_18000f890(local_110);
      uVar5 = FUN_180073a70(local_110,&local_d0,".shadow_color");
      FUN_18019e140(param_1,uVar5,param_3 + lVar19 + 0x7c);
      FUN_18000f890(local_110);
      uVar5 = FUN_180073a70(local_110,&local_d0,".format");
      lVar9 = FUN_1800f2fa0(param_1,uVar5);
      if (((lVar9 != 0) &&
          (dVar20 = (double)FUN_180370b10(lVar9,(double)*(int *)(param_3 + lVar19 + 0x8c)),
          ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) &&
         ((dVar3 < dVar20 && (dVar20 < dVar2)))) {
        *(int *)(param_3 + lVar19 + 0x8c) = (int)dVar20;
      }
      FUN_18000f890(local_110);
    }
    if (*(int *)((longlong)&DAT_1805e7eec + lVar18) - 1U < 2) {
      uVar5 = FUN_180073a70(local_110,&local_d0,".font");
      lVar9 = FUN_1800f2fa0(param_1,uVar5);
      if (((lVar9 != 0) &&
          (dVar20 = (double)FUN_180370b10(lVar9,(double)*(int *)(param_3 + lVar19 + 0x90)),
          ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) &&
         ((dVar3 < dVar20 && (dVar20 < dVar2)))) {
        *(int *)(param_3 + lVar19 + 0x90) = (int)dVar20;
      }
      FUN_18000f890(local_110);
      uVar5 = FUN_180073a70(local_110,&local_d0,".case");
      lVar9 = FUN_1800f2fa0(param_1,uVar5);
      if ((((lVar9 != 0) &&
           (dVar20 = (double)FUN_180370b10(lVar9,(double)*(int *)(param_3 + lVar19 + 0x94)),
           ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar3 < dVar20)) &&
         (dVar20 < dVar2)) {
        *(int *)(param_3 + lVar19 + 0x94) = (int)dVar20;
      }
      FUN_18000f890(local_110);
    }
    if (*(int *)((longlong)&DAT_1805e7eec + lVar18) - 3U < 2) {
      uVar5 = FUN_180073a70(local_110,&local_d0,".inverted");
      piVar6 = (int *)FUN_1800f2fa0(param_1,uVar5);
      if (piVar6 != (int *)0x0) {
        if (*piVar6 == 1) {
          uVar4 = (undefined1)piVar6[1];
        }
        else if (*piVar6 == 2) {
          if (*(double *)(piVar6 + 2) == 0.0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          uVar4 = param_3[lVar19 + 0x98];
        }
        param_3[lVar19 + 0x98] = uVar4;
      }
      FUN_18000f890(local_110);
    }
    FUN_18000f890(&local_d0);
    uVar5 = local_120;
    local_128 = local_128 + 1;
    param_2 = local_120;
  } while (local_128 < 0x1d);
  uVar10 = FUN_180073a70(local_110,local_120,".esp.expected_damage");
  lVar18 = FUN_1800f2fa0(param_1,uVar10);
  if (((lVar18 != 0) &&
      (dVar20 = (double)FUN_180370b10(lVar18,(double)*(int *)(param_3 + 0x113c)),
      ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar3 < dVar20 && (dVar20 < dVar2)))) {
    *(int *)(param_3 + 0x113c) = (int)dVar20;
  }
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.pulse_mode");
  lVar18 = FUN_1800f2fa0(param_1,uVar10);
  if (((lVar18 != 0) &&
      (dVar20 = (double)FUN_180370b10(lVar18,(double)*(int *)(param_3 + 0x1140)),
      ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar3 < dVar20 && (dVar20 < dVar2)))) {
    *(int *)(param_3 + 0x1140) = (int)dVar20;
  }
  FUN_18000f890(local_110);
  uVar14 = 0;
  do {
    uVar10 = FUN_18004e4f0(local_f0,uVar14);
    uVar11 = FUN_180073a70(local_b0,uVar5,".esp.pulse_color");
    uVar10 = FUN_180066820(local_110,uVar11,uVar10);
    FUN_18019e140(param_1,uVar10,param_3 + uVar14 * 0x10 + 0x1144);
    FUN_18000f890(local_110);
    FUN_18000f890(local_b0);
    FUN_18000f890(local_f0);
    uVar14 = uVar14 + 1;
  } while (uVar14 < 3);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.name_avatar");
  piVar6 = (int *)FUN_1800f2fa0(param_1,uVar10);
  if (piVar6 != (int *)0x0) {
    if (*piVar6 == 1) {
      uVar4 = (undefined1)piVar6[1];
    }
    else if (*piVar6 == 2) {
      if (*(double *)(piVar6 + 2) == 0.0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = param_3[0x1174];
    }
    param_3[0x1174] = uVar4;
  }
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.icon_order0");
  lVar18 = FUN_1800f2fa0(param_1,uVar10);
  if ((((lVar18 != 0) &&
       (dVar20 = (double)FUN_180370b10(lVar18,(double)*(int *)(param_3 + 0x1178)),
       ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar3 < dVar20)) &&
     (dVar20 < dVar2)) {
    *(int *)(param_3 + 0x1178) = (int)dVar20;
  }
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.icon_order1");
  lVar18 = FUN_1800f2fa0(param_1,uVar10);
  if (((lVar18 != 0) &&
      (dVar20 = (double)FUN_180370b10(lVar18,(double)*(int *)(param_3 + 0x117c)),
      ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar3 < dVar20 && (dVar20 < dVar2)))) {
    *(int *)(param_3 + 0x117c) = (int)dVar20;
  }
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.icon_selection");
  FUN_18019dbe0(param_1,uVar10,param_3 + 0x1180);
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.icon_dimming");
  FUN_180152360(param_1,uVar10,param_3 + 0x1182);
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.icon_clip_rect");
  piVar6 = (int *)FUN_1800f2fa0(param_1,uVar10);
  if (piVar6 != (int *)0x0) {
    if (*piVar6 == 1) {
      uVar4 = (undefined1)piVar6[1];
    }
    else if (*piVar6 == 2) {
      if (*(double *)(piVar6 + 2) == 0.0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = param_3[0x1185];
    }
    param_3[0x1185] = uVar4;
  }
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.icon_low_ammo");
  piVar6 = (int *)FUN_1800f2fa0(param_1,uVar10);
  if (piVar6 != (int *)0x0) {
    if (*piVar6 == 1) {
      uVar4 = (undefined1)piVar6[1];
    }
    else if (*piVar6 == 2) {
      if (*(double *)(piVar6 + 2) == 0.0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = param_3[0x1186];
    }
    param_3[0x1186] = uVar4;
  }
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.icon_all_grenades");
  piVar6 = (int *)FUN_1800f2fa0(param_1,uVar10);
  if (piVar6 != (int *)0x0) {
    if (*piVar6 == 1) {
      uVar4 = (undefined1)piVar6[1];
    }
    else if (*piVar6 == 2) {
      if (*(double *)(piVar6 + 2) == 0.0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = param_3[0x1187];
    }
    param_3[0x1187] = uVar4;
  }
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.icon_pin_pulled");
  FUN_18019e140(param_1,uVar10,param_3 + 0x1188);
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.taser_in_hand");
  FUN_18019e140(param_1,uVar10,param_3 + 0x1198);
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.offscreen_arrows");
  piVar6 = (int *)FUN_1800f2fa0(param_1,uVar10);
  if (piVar6 != (int *)0x0) {
    if (*piVar6 == 1) {
      uVar4 = (undefined1)piVar6[1];
    }
    else if (*piVar6 == 2) {
      if (*(double *)(piVar6 + 2) == 0.0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = param_3[0x11a8];
    }
    param_3[0x11a8] = uVar4;
  }
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.arrow_color");
  FUN_18019e140(param_1,uVar10,param_3 + 0x11ac);
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.offscreen_arrow_size");
  lVar18 = FUN_1800f2fa0(param_1,uVar10);
  if (((lVar18 != 0) &&
      (dVar20 = (double)FUN_180370b10(lVar18,(double)*(int *)(param_3 + 0x11bc)),
      ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) &&
     ((dVar3 < dVar20 && (dVar20 < dVar2)))) {
    *(int *)(param_3 + 0x11bc) = (int)dVar20;
  }
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.offscreen_arrow_radius");
  lVar18 = FUN_1800f2fa0(param_1,uVar10);
  if ((((lVar18 != 0) &&
       (dVar20 = (double)FUN_180370b10(lVar18,(double)*(int *)(param_3 + 0x11c0)),
       ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar3 < dVar20)) &&
     (dVar20 < dVar2)) {
    *(int *)(param_3 + 0x11c0) = (int)dVar20;
  }
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.sounds");
  piVar6 = (int *)FUN_1800f2fa0(param_1,uVar10);
  if (piVar6 != (int *)0x0) {
    if (*piVar6 == 1) {
      uVar4 = (undefined1)piVar6[1];
    }
    else if (*piVar6 == 2) {
      if (*(double *)(piVar6 + 2) == 0.0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = param_3[0x11c4];
    }
    param_3[0x11c4] = uVar4;
  }
  FUN_18000f890(local_110);
  uVar10 = FUN_180073a70(local_110,uVar5,".esp.sound_color");
  FUN_18019e140(param_1,uVar10,param_3 + 0x11c8);
  FUN_18000f890(local_110);
  uVar14 = 0;
  do {
    lVar18 = uVar14 * 0x74;
    uVar10 = FUN_18004e4f0(local_b0,uVar14);
    uVar11 = FUN_180073a70(local_110,uVar5,".esp.custom");
    FUN_180066820(&local_d0,uVar11,uVar10);
    FUN_18000f890(local_110);
    FUN_18000f890(local_b0);
    uVar10 = FUN_180073a70(local_f0,&local_d0,&DAT_1806f6a6c);
    piVar6 = (int *)FUN_1800f2fa0(param_1,uVar10);
    if ((piVar6 != (int *)0x0) && (*piVar6 == 3)) {
      puVar12 = (undefined8 *)(param_3 + lVar18 + 0x11d8);
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      plVar17 = (longlong *)(piVar6 + 4);
      if (0xf < *(ulonglong *)(piVar6 + 10)) {
        plVar17 = (longlong *)*plVar17;
      }
      snprintf(puVar12,0x40,&DAT_1806d3198,plVar17);
    }
    FUN_18000f890(local_f0);
    if (param_3[lVar18 + 0x11d8] != '\0') {
      uVar10 = FUN_180073a70(local_f0,&local_d0,".enabled");
      piVar6 = (int *)FUN_1800f2fa0(param_1,uVar10);
      if (piVar6 != (int *)0x0) {
        if (*piVar6 == 1) {
          uVar4 = (undefined1)piVar6[1];
        }
        else if (*piVar6 == 2) {
          if (*(double *)(piVar6 + 2) == 0.0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          uVar4 = param_3[lVar18 + 0x1218];
        }
        param_3[lVar18 + 0x1218] = uVar4;
      }
      FUN_18000f890(local_f0);
      uVar10 = FUN_180073a70(local_f0,&local_d0,".side");
      lVar19 = FUN_1800f2fa0(param_1,uVar10);
      if (((lVar19 != 0) &&
          (dVar20 = (double)FUN_180370b10(lVar19,(double)*(int *)(param_3 + lVar18 + 0x121c)),
          ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) &&
         ((dVar3 < dVar20 && (dVar20 < dVar2)))) {
        *(int *)(param_3 + lVar18 + 0x121c) = (int)dVar20;
      }
      FUN_18000f890(local_f0);
      uVar10 = FUN_180073a70(local_f0,&local_d0,".order");
      lVar19 = FUN_1800f2fa0(param_1,uVar10);
      if ((((lVar19 != 0) &&
           (dVar20 = (double)FUN_180370b10(lVar19,(double)*(int *)(param_3 + lVar18 + 0x1220)),
           ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) && (dVar3 < dVar20)) &&
         (dVar20 < dVar2)) {
        *(int *)(param_3 + lVar18 + 0x1220) = (int)dVar20;
      }
      FUN_18000f890(local_f0);
      uVar10 = FUN_180073a70(local_f0,&local_d0,".color");
      FUN_18019e140(param_1,uVar10,param_3 + lVar18 + 0x1224);
      FUN_18000f890(local_f0);
      uVar10 = FUN_180073a70(local_f0,&local_d0,".second");
      FUN_18019e140(param_1,uVar10,param_3 + lVar18 + 0x1234);
      FUN_18000f890(local_f0);
      uVar10 = FUN_180073a70(local_f0,&local_d0,".size");
      lVar19 = FUN_1800f2fa0(param_1,uVar10);
      if (((lVar19 != 0) &&
          (dVar20 = (double)FUN_180370b10(lVar19,(double)*(int *)(param_3 + lVar18 + 0x1244)),
          ((uint)((ulonglong)dVar20 >> 0x34) & 0x7ff) != 0x7ff)) &&
         ((dVar3 < dVar20 && (dVar20 < dVar2)))) {
        *(int *)(param_3 + lVar18 + 0x1244) = (int)dVar20;
      }
      FUN_18000f890(local_f0);
      uVar10 = FUN_180073a70(local_f0,&local_d0,".small");
      piVar6 = (int *)FUN_1800f2fa0(param_1,uVar10);
      if (piVar6 != (int *)0x0) {
        if (*piVar6 == 1) {
          uVar4 = (undefined1)piVar6[1];
        }
        else if (*piVar6 == 2) {
          if (*(double *)(piVar6 + 2) == 0.0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          uVar4 = param_3[lVar18 + 0x1248];
        }
        param_3[lVar18 + 0x1248] = uVar4;
      }
      FUN_18000f890(local_f0);
      uVar10 = FUN_180073a70(local_f0,&local_d0,".text");
      piVar6 = (int *)FUN_1800f2fa0(param_1,uVar10);
      if (piVar6 != (int *)0x0) {
        if (*piVar6 == 1) {
          uVar4 = (undefined1)piVar6[1];
        }
        else if (*piVar6 == 2) {
          if (*(double *)(piVar6 + 2) == 0.0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          uVar4 = param_3[lVar18 + 0x1249];
        }
        param_3[lVar18 + 0x1249] = uVar4;
      }
      FUN_18000f890(local_f0);
    }
    FUN_18000f890(&local_d0);
    uVar14 = uVar14 + 1;
  } while (uVar14 < 0x10);
  uVar10 = FUN_180073a70(local_110,uVar5,".glow.enabled");
  piVar6 = (int *)FUN_1800f2fa0(param_1,uVar10);
  if (piVar6 != (int *)0x0) {
    if (*piVar6 == 1) {
      uVar4 = (undefined1)piVar6[1];
    }
    else if (*piVar6 == 2) {
      if (*(double *)(piVar6 + 2) == 0.0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = param_3[0x1918];
    }
    param_3[0x1918] = uVar4;
  }
  FUN_18000f890(local_110);
  uVar5 = FUN_180073a70(local_110,uVar5,".glow.color");
  FUN_18019e140(param_1,uVar5,param_3 + 0x191c);
  FUN_18000f890(local_110);
  return;
}



/* ===== 18019cc70 FUN_18019cc70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18019cc70(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  int iVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  char *pcVar15;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_player_1806f6a70._12_4_;
  uVar5 = s_model_enemy_player_1806f6a70._8_4_;
  uVar4 = s_model_enemy_player_1806f6a70._4_4_;
  local_58 = 0x12;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_player_1806f6a70._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  *(undefined2 *)(local_68 + 0x10) = s_model_enemy_player_1806f6a70._16_2_;
  local_68[0x12] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_behind_walls_1806f6a88._12_4_;
  uVar5 = s_model_enemy_behind_walls_1806f6a88._8_4_;
  uVar4 = s_model_enemy_behind_walls_1806f6a88._4_4_;
  local_58 = 0x18;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_behind_walls_1806f6a88._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  *(undefined8 *)(local_68 + 0x10) = s_model_enemy_behind_walls_1806f6a88._16_8_;
  local_68[0x18] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0x58);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_on_shot_1806f6ae8._12_4_;
  uVar5 = s_model_enemy_on_shot_1806f6ae8._8_4_;
  uVar4 = s_model_enemy_on_shot_1806f6ae8._4_4_;
  local_58 = 0x13;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_on_shot_1806f6ae8._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  *(uint *)(local_68 + 0xf) =
       CONCAT31(s_model_enemy_on_shot_1806f6ae8._16_3_,s_model_enemy_on_shot_1806f6ae8[0xf]);
  local_68[0x13] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0xb0);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_on_shot_glow_1806f6b00._12_4_;
  uVar5 = s_model_enemy_on_shot_glow_1806f6b00._8_4_;
  uVar4 = s_model_enemy_on_shot_glow_1806f6b00._4_4_;
  local_58 = 0x18;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_on_shot_glow_1806f6b00._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  *(undefined8 *)(local_68 + 0x10) = s_model_enemy_on_shot_glow_1806f6b00._16_8_;
  local_68[0x18] = '\0';
  FUN_18019f5e0(param_1,&local_68,param_2 + 0x108);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  pcVar10 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_on_shot_duration_1806f6ab0._12_4_;
  uVar5 = s_model_enemy_on_shot_duration_1806f6ab0._8_4_;
  uVar4 = s_model_enemy_on_shot_duration_1806f6ab0._4_4_;
  local_58 = 0x1c;
  local_50 = 0x1f;
  *(undefined4 *)pcVar10 = s_model_enemy_on_shot_duration_1806f6ab0._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  uVar7 = s_model_enemy_on_shot_duration_1806f6ab0._20_8_;
  *(ulonglong *)(pcVar10 + 0xc) =
       CONCAT44(s_model_enemy_on_shot_duration_1806f6ab0._16_4_,
                s_model_enemy_on_shot_duration_1806f6ab0._12_4_);
  *(undefined8 *)(pcVar10 + 0x14) = uVar7;
  pcVar10[0x1c] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_68 = pcVar10;
  for (puVar14 = *(undefined8 **)(*param_1 + 0x48); uVar11 = 0x1f, puVar14 != puVar1;
      puVar14 = puVar14 + 0x10) {
    if ((ulonglong)puVar14[3] < 0x10) {
      puVar13 = puVar14;
    }
    else {
      puVar13 = (undefined8 *)*puVar14;
    }
    if ((puVar14[2] == 0x1c) && (iVar9 = memcmp(pcVar10,puVar13,0x1c), iVar9 == 0)) {
      if (puVar14 + 4 != (undefined8 *)0x0) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        dVar3 = (double)FUN_180370b10(puVar14 + 4,SUB84((double)*(float *)(param_2 + 0x11c),0));
        uVar11 = local_50;
        if (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000) {
          *(float *)(param_2 + 0x11c) = (float)dVar3;
        }
      }
      break;
    }
  }
  if (0xf < uVar11) {
    uVar12 = uVar11 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar12) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar12 = uVar11 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar12);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_history_1806f6ad0._12_4_;
  uVar5 = s_model_enemy_history_1806f6ad0._8_4_;
  uVar4 = s_model_enemy_history_1806f6ad0._4_4_;
  local_58 = 0x13;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_history_1806f6ad0._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  *(uint *)(local_68 + 0xf) =
       CONCAT31(s_model_enemy_history_1806f6ad0._16_3_,s_model_enemy_history_1806f6ad0[0xf]);
  local_68[0x13] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0x120);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_history_glow_1806f6b60._12_4_;
  uVar5 = s_model_enemy_history_glow_1806f6b60._8_4_;
  uVar4 = s_model_enemy_history_glow_1806f6b60._4_4_;
  local_58 = 0x18;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_history_glow_1806f6b60._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  *(undefined8 *)(local_68 + 0x10) = s_model_enemy_history_glow_1806f6b60._16_8_;
  local_68[0x18] = '\0';
  FUN_18019f5e0(param_1,&local_68,param_2 + 0x178);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_ragdolls_1806f6b80._12_4_;
  uVar5 = s_model_enemy_ragdolls_1806f6b80._8_4_;
  uVar4 = s_model_enemy_ragdolls_1806f6b80._4_4_;
  local_58 = 0x14;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_ragdolls_1806f6b80._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  *(undefined4 *)(local_68 + 0x10) = s_model_enemy_ragdolls_1806f6b80._16_4_;
  local_68[0x14] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0x18c);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_ragdolls_glow_1806f6b20._12_4_;
  uVar5 = s_model_enemy_ragdolls_glow_1806f6b20._8_4_;
  uVar4 = s_model_enemy_ragdolls_glow_1806f6b20._4_4_;
  local_58 = 0x19;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_ragdolls_glow_1806f6b20._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  uVar6 = s_model_enemy_ragdolls_glow_1806f6b20._21_4_;
  uVar5 = s_model_enemy_ragdolls_glow_1806f6b20._17_4_;
  uVar4 = CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0x10],
                   s_model_enemy_ragdolls_glow_1806f6b20._13_3_);
  *(uint *)(local_68 + 9) =
       CONCAT13(s_model_enemy_ragdolls_glow_1806f6b20[0xc],
                s_model_enemy_ragdolls_glow_1806f6b20._9_3_);
  *(undefined4 *)(local_68 + 0xd) = uVar4;
  *(undefined4 *)(local_68 + 0x11) = uVar5;
  *(undefined4 *)(local_68 + 0x15) = uVar6;
  local_68[0x19] = '\0';
  FUN_18019f5e0(param_1,&local_68,param_2 + 0x1e4);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_enemy_ragdolls_visibility_1806f6b40._12_4_;
  uVar5 = s_model_enemy_ragdolls_visibility_1806f6b40._8_4_;
  uVar4 = s_model_enemy_ragdolls_visibility_1806f6b40._4_4_;
  local_58 = 0x1f;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_enemy_ragdolls_visibility_1806f6b40._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  uVar6 = s_model_enemy_ragdolls_visibility_1806f6b40._27_4_;
  uVar5 = s_model_enemy_ragdolls_visibility_1806f6b40._23_4_;
  uVar4 = s_model_enemy_ragdolls_visibility_1806f6b40._19_4_;
  *(uint *)(local_68 + 0xf) =
       CONCAT31(s_model_enemy_ragdolls_visibility_1806f6b40._16_3_,
                s_model_enemy_ragdolls_visibility_1806f6b40[0xf]);
  *(undefined4 *)(local_68 + 0x13) = uVar4;
  *(undefined4 *)(local_68 + 0x17) = uVar5;
  *(undefined4 *)(local_68 + 0x1b) = uVar6;
  local_68[0x1f] = '\0';
  FUN_18019dbe0(param_1,&local_68,param_2 + 0x1f8);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_team_player_1806f6bd8._12_4_;
  uVar5 = s_model_team_player_1806f6bd8._8_4_;
  uVar4 = s_model_team_player_1806f6bd8._4_4_;
  local_58 = 0x11;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_team_player_1806f6bd8._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  local_68[0x10] = s_model_team_player_1806f6bd8[0x10];
  local_68[0x11] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0x1fc);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_team_behind_walls_1806f6bf0._12_4_;
  uVar5 = s_model_team_behind_walls_1806f6bf0._8_4_;
  uVar4 = s_model_team_behind_walls_1806f6bf0._4_4_;
  local_58 = 0x17;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_team_behind_walls_1806f6bf0._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  *(ulonglong *)(local_68 + 0xf) =
       CONCAT71(s_model_team_behind_walls_1806f6bf0._16_7_,s_model_team_behind_walls_1806f6bf0[0xf])
  ;
  local_68[0x17] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0x254);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  pcVar10 = (char *)FUN_18000fb70(0x30);
  uVar6 = s_model_team_disable_model_renderi_1806f6b98._12_4_;
  uVar5 = s_model_team_disable_model_renderi_1806f6b98._8_4_;
  uVar4 = s_model_team_disable_model_renderi_1806f6b98._4_4_;
  local_58 = 0x22;
  local_50 = 0x2f;
  *(undefined4 *)pcVar10 = s_model_team_disable_model_renderi_1806f6b98._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  uVar7 = s_model_team_disable_model_renderi_1806f6b98._24_8_;
  *(undefined8 *)(pcVar10 + 0x10) = s_model_team_disable_model_renderi_1806f6b98._16_8_;
  *(undefined8 *)(pcVar10 + 0x18) = uVar7;
  *(undefined2 *)(pcVar10 + 0x20) = s_model_team_disable_model_renderi_1806f6b98._32_2_;
  pcVar10[0x22] = '\0';
  puVar1 = *(undefined8 **)(*param_1 + 0x50);
  local_68 = pcVar10;
  for (puVar14 = *(undefined8 **)(*param_1 + 0x48); puVar14 != puVar1; puVar14 = puVar14 + 0x10) {
    if ((ulonglong)puVar14[3] < 0x10) {
      puVar13 = puVar14;
    }
    else {
      puVar13 = (undefined8 *)*puVar14;
    }
    if ((puVar14[2] == 0x22) && (iVar9 = memcmp(pcVar10,puVar13,0x22), iVar9 == 0)) {
      if ((int *)(puVar14 + 4) != (int *)0x0) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        iVar9 = *(int *)(puVar14 + 4);
        if (iVar9 == 1) {
          uVar8 = *(undefined1 *)((longlong)puVar14 + 0x24);
        }
        else if (iVar9 == 2) {
          if ((double)puVar14[5] == 0.0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 1;
          }
        }
        else {
          uVar8 = *(undefined1 *)(param_2 + 0x2ac);
        }
        *(undefined1 *)(param_2 + 0x2ac) = uVar8;
      }
      break;
    }
  }
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar15 = pcVar10;
    if (0xfff < uVar11) {
      pcVar15 = *(char **)(pcVar10 + -8);
      if ((char *)0x1f < pcVar10 + (-8 - (longlong)pcVar15)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar15,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_local_player_1806f6bc0._12_4_;
  uVar5 = s_model_local_player_1806f6bc0._8_4_;
  uVar4 = s_model_local_player_1806f6bc0._4_4_;
  local_58 = 0x12;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_player_1806f6bc0._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  *(undefined2 *)(local_68 + 0x10) = s_model_local_player_1806f6bc0._16_2_;
  local_68[0x12] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0x2b0);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_local_player_overlay_1806f6c40._4_4_;
  local_58 = 0x1a;
  local_50 = 0x1f;
  uVar4 = CONCAT22(s_model_local_player_overlay_1806f6c40._10_2_,
                   s_model_local_player_overlay_1806f6c40._8_2_);
  uVar5 = CONCAT22(s_model_local_player_overlay_1806f6c40._14_2_,
                   s_model_local_player_overlay_1806f6c40._12_2_);
  *(undefined4 *)local_68 = s_model_local_player_overlay_1806f6c40._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar6;
  *(undefined4 *)(local_68 + 8) = uVar4;
  *(undefined4 *)(local_68 + 0xc) = uVar5;
  uVar6 = s_model_local_player_overlay_1806f6c40._22_4_;
  uVar5 = s_model_local_player_overlay_1806f6c40._18_4_;
  uVar4 = CONCAT22(s_model_local_player_overlay_1806f6c40._16_2_,
                   s_model_local_player_overlay_1806f6c40._14_2_);
  *(uint *)(local_68 + 10) =
       CONCAT22(s_model_local_player_overlay_1806f6c40._12_2_,
                s_model_local_player_overlay_1806f6c40._10_2_);
  *(undefined4 *)(local_68 + 0xe) = uVar4;
  *(undefined4 *)(local_68 + 0x12) = uVar5;
  *(undefined4 *)(local_68 + 0x16) = uVar6;
  local_68[0x1a] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0x308);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_local_skeleton_1806f6c60._12_4_;
  uVar5 = s_model_local_skeleton_1806f6c60._8_4_;
  uVar4 = s_model_local_skeleton_1806f6c60._4_4_;
  local_58 = 0x14;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_skeleton_1806f6c60._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  *(undefined4 *)(local_68 + 0x10) = s_model_local_skeleton_1806f6c60._16_4_;
  local_68[0x14] = '\0';
  FUN_18019f5e0(param_1,&local_68,param_2 + 0x360);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_local_arms_1806f6c08._12_4_;
  uVar5 = s_model_local_arms_1806f6c08._8_4_;
  uVar4 = s_model_local_arms_1806f6c08._4_4_;
  local_58 = 0x10;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_arms_1806f6c08._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  local_68[0x10] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0x374);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_local_arms_overlay_1806f6c20._12_4_;
  uVar5 = s_model_local_arms_overlay_1806f6c20._8_4_;
  uVar4 = s_model_local_arms_overlay_1806f6c20._4_4_;
  local_58 = 0x18;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_arms_overlay_1806f6c20._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  *(undefined8 *)(local_68 + 0x10) = s_model_local_arms_overlay_1806f6c20._16_8_;
  local_68[0x18] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0x3cc);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_local_gloves_1806f6cb0._12_4_;
  uVar5 = s_model_local_gloves_1806f6cb0._8_4_;
  uVar4 = s_model_local_gloves_1806f6cb0._4_4_;
  local_58 = 0x12;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_gloves_1806f6cb0._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  *(undefined2 *)(local_68 + 0x10) = s_model_local_gloves_1806f6cb0._16_2_;
  local_68[0x12] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0x424);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_local_gloves_overlay_1806f6cc8._4_4_;
  local_58 = 0x1a;
  local_50 = 0x1f;
  uVar4 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._10_2_,
                   s_model_local_gloves_overlay_1806f6cc8._8_2_);
  uVar5 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._14_2_,
                   s_model_local_gloves_overlay_1806f6cc8._12_2_);
  *(undefined4 *)local_68 = s_model_local_gloves_overlay_1806f6cc8._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar6;
  *(undefined4 *)(local_68 + 8) = uVar4;
  *(undefined4 *)(local_68 + 0xc) = uVar5;
  uVar6 = s_model_local_gloves_overlay_1806f6cc8._22_4_;
  uVar5 = s_model_local_gloves_overlay_1806f6cc8._18_4_;
  uVar4 = CONCAT22(s_model_local_gloves_overlay_1806f6cc8._16_2_,
                   s_model_local_gloves_overlay_1806f6cc8._14_2_);
  *(uint *)(local_68 + 10) =
       CONCAT22(s_model_local_gloves_overlay_1806f6cc8._12_2_,
                s_model_local_gloves_overlay_1806f6cc8._10_2_);
  *(undefined4 *)(local_68 + 0xe) = uVar4;
  *(undefined4 *)(local_68 + 0x12) = uVar5;
  *(undefined4 *)(local_68 + 0x16) = uVar6;
  local_68[0x1a] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0x47c);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_local_weapon_1806f6c78._12_4_;
  uVar5 = s_model_local_weapon_1806f6c78._8_4_;
  uVar4 = s_model_local_weapon_1806f6c78._4_4_;
  local_58 = 0x12;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_weapon_1806f6c78._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  *(undefined2 *)(local_68 + 0x10) = s_model_local_weapon_1806f6c78._16_2_;
  local_68[0x12] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0x4d4);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_local_weapon_overlay_1806f6c90._4_4_;
  local_58 = 0x1a;
  local_50 = 0x1f;
  uVar4 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._10_2_,
                   s_model_local_weapon_overlay_1806f6c90._8_2_);
  uVar5 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._14_2_,
                   s_model_local_weapon_overlay_1806f6c90._12_2_);
  *(undefined4 *)local_68 = s_model_local_weapon_overlay_1806f6c90._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar6;
  *(undefined4 *)(local_68 + 8) = uVar4;
  *(undefined4 *)(local_68 + 0xc) = uVar5;
  uVar6 = s_model_local_weapon_overlay_1806f6c90._22_4_;
  uVar5 = s_model_local_weapon_overlay_1806f6c90._18_4_;
  uVar4 = CONCAT22(s_model_local_weapon_overlay_1806f6c90._16_2_,
                   s_model_local_weapon_overlay_1806f6c90._14_2_);
  *(uint *)(local_68 + 10) =
       CONCAT22(s_model_local_weapon_overlay_1806f6c90._12_2_,
                s_model_local_weapon_overlay_1806f6c90._10_2_);
  *(undefined4 *)(local_68 + 0xe) = uVar4;
  *(undefined4 *)(local_68 + 0x12) = uVar5;
  *(undefined4 *)(local_68 + 0x16) = uVar6;
  local_68[0x1a] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0x52c);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_local_keychain_1806f6d28._12_4_;
  uVar5 = s_model_local_keychain_1806f6d28._8_4_;
  uVar4 = s_model_local_keychain_1806f6d28._4_4_;
  local_58 = 0x14;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_keychain_1806f6d28._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  *(undefined4 *)(local_68 + 0x10) = s_model_local_keychain_1806f6d28._16_4_;
  local_68[0x14] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0x584);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_18019dbd7;
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_local_keychain_overlay_1806f6d40._12_4_;
  uVar5 = s_model_local_keychain_overlay_1806f6d40._8_4_;
  uVar4 = s_model_local_keychain_overlay_1806f6d40._4_4_;
  local_58 = 0x1c;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_keychain_overlay_1806f6d40._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  uVar6 = s_model_local_keychain_overlay_1806f6d40._24_4_;
  uVar5 = s_model_local_keychain_overlay_1806f6d40._20_4_;
  uVar4 = s_model_local_keychain_overlay_1806f6d40._16_4_;
  *(undefined4 *)(local_68 + 0xc) = s_model_local_keychain_overlay_1806f6d40._12_4_;
  *(undefined4 *)(local_68 + 0x10) = uVar4;
  *(undefined4 *)(local_68 + 0x14) = uVar5;
  *(undefined4 *)(local_68 + 0x18) = uVar6;
  local_68[0x1c] = '\0';
  FUN_18019f2c0(param_1,&local_68,param_2 + 0x5dc);
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pcVar10 = local_68;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_68 + -8);
      if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) {
LAB_18019dbd7:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar11);
  }
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = (char *)FUN_18000fb70(0x20);
  uVar6 = s_model_local_colorize_stattrak_1806f6ce8._12_4_;
  uVar5 = s_model_local_colorize_stattrak_1806f6ce8._8_4_;
  uVar4 = s_model_local_colorize_stattrak_1806f6ce8._4_4_;
  local_58 = 0x1d;
  local_50 = 0x1f;
  *(undefined4 *)local_68 = s_model_local_colorize_stattrak_1806f6ce8._0_4_;
  *(undefined4 *)(local_68 + 4) = uVar4;
  *(undefined4 *)(local_68 + 8) = uVar5;
  *(undefined4 *)(local_68 + 0xc) = uVar6;
  uVar6 = s_model_local_colorize_stattrak_1806f6ce8._25_4_;
  uVar5 = s_model_local_colorize_stattrak_1806f6ce8._21_4_;
  uVar4 = s_model_local_colorize_stattrak_1806f6ce8._17_4_;
  *(uint *)(local_68 + 0xd) =
       CONCAT13(s_model_local_colorize_stattrak_1806f6ce8[0x10],
                s_model_local_colorize_stattrak_1806f6ce8._13_3_);
  *(undefined4 *)(local_68 + 0x11) = uVar4;
  *(undefined4 *)(local_68 + 0x15) = uVar5;
  *(undefined4 *)(local_68 + 0x19) = uVar6;
  local_68[0x1d] = '\0';
  FUN_1800f3030(param_1,&local_68,param_2 + 0x634);
  FUN_18000f890(&local_68);
  FUN_180013350(&local_68,"model.local.stattrak_weapon");
  FUN_18019e140(param_1,&local_68,param_2 + 0x638);
  FUN_18000f890(&local_68);
  FUN_180013350(&local_68,"model.local.stattrak_knife");
  FUN_18019e140(param_1,&local_68,param_2 + 0x648);
  FUN_18000f890(&local_68);
  return;
}



/* ===== 18019dbe0 FUN_18019dbe0 ===== */

void FUN_18019dbe0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  int *piVar4;
  
  piVar4 = (int *)FUN_1800f2fa0();
  if (((piVar4 != (int *)0x0) && (*piVar4 == 4)) &&
     (piVar1 = *(int **)(piVar4 + 0xc),
     (*(longlong *)(piVar4 + 0xe) - (longlong)piVar1 >> 5) * -0x5555555555555555 != 0)) {
    if (*piVar1 == 1) {
      uVar3 = (undefined1)piVar1[1];
    }
    else if (*piVar1 == 2) {
      if (*(double *)(piVar1 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = *param_3;
    }
    *param_3 = uVar3;
    lVar2 = *(longlong *)(piVar4 + 0xc);
    if (1 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
      if (*(int *)(lVar2 + 0x60) == 1) {
        param_3[1] = *(undefined1 *)(lVar2 + 100);
        return;
      }
      if (*(int *)(lVar2 + 0x60) == 2) {
        if (*(double *)(lVar2 + 0x68) == 0.0) {
          param_3[1] = 0;
          return;
        }
        param_3[1] = 1;
        return;
      }
      param_3[1] = param_3[1];
    }
  }
  return;
}



/* ===== 18019dcc0 FUN_18019dcc0 ===== */

void FUN_18019dcc0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  int *piVar4;
  
  piVar4 = (int *)FUN_1800f2fa0();
  if (((piVar4 != (int *)0x0) && (*piVar4 == 4)) &&
     (piVar1 = *(int **)(piVar4 + 0xc),
     (*(longlong *)(piVar4 + 0xe) - (longlong)piVar1 >> 5) * -0x5555555555555555 != 0)) {
    if (*piVar1 == 1) {
      uVar3 = (undefined1)piVar1[1];
    }
    else if (*piVar1 == 2) {
      if (*(double *)(piVar1 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = *param_3;
    }
    *param_3 = uVar3;
    lVar2 = *(longlong *)(piVar4 + 0xc);
    if (1 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
      if (*(int *)(lVar2 + 0x60) == 1) {
        uVar3 = *(undefined1 *)(lVar2 + 100);
      }
      else if (*(int *)(lVar2 + 0x60) == 2) {
        if (*(double *)(lVar2 + 0x68) == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = param_3[1];
      }
      param_3[1] = uVar3;
      lVar2 = *(longlong *)(piVar4 + 0xc);
      if (2 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
        if (*(int *)(lVar2 + 0xc0) == 1) {
          uVar3 = *(undefined1 *)(lVar2 + 0xc4);
        }
        else if (*(int *)(lVar2 + 0xc0) == 2) {
          if (*(double *)(lVar2 + 200) == 0.0) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
        }
        else {
          uVar3 = param_3[2];
        }
        param_3[2] = uVar3;
        lVar2 = *(longlong *)(piVar4 + 0xc);
        if (3 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
          if (*(int *)(lVar2 + 0x120) == 1) {
            uVar3 = *(undefined1 *)(lVar2 + 0x124);
          }
          else if (*(int *)(lVar2 + 0x120) == 2) {
            if (*(double *)(lVar2 + 0x128) == 0.0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 1;
            }
          }
          else {
            uVar3 = param_3[3];
          }
          param_3[3] = uVar3;
          lVar2 = *(longlong *)(piVar4 + 0xc);
          if (4 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
            if (*(int *)(lVar2 + 0x180) == 1) {
              uVar3 = *(undefined1 *)(lVar2 + 0x184);
            }
            else if (*(int *)(lVar2 + 0x180) == 2) {
              if (*(double *)(lVar2 + 0x188) == 0.0) {
                uVar3 = 0;
              }
              else {
                uVar3 = 1;
              }
            }
            else {
              uVar3 = param_3[4];
            }
            param_3[4] = uVar3;
            lVar2 = *(longlong *)(piVar4 + 0xc);
            if (5 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
              if (*(int *)(lVar2 + 0x1e0) == 1) {
                uVar3 = *(undefined1 *)(lVar2 + 0x1e4);
              }
              else if (*(int *)(lVar2 + 0x1e0) == 2) {
                if (*(double *)(lVar2 + 0x1e8) == 0.0) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = 1;
                }
              }
              else {
                uVar3 = param_3[5];
              }
              param_3[5] = uVar3;
              lVar2 = *(longlong *)(piVar4 + 0xc);
              if (6 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555))
              {
                if (*(int *)(lVar2 + 0x240) == 1) {
                  param_3[6] = *(undefined1 *)(lVar2 + 0x244);
                  return;
                }
                if (*(int *)(lVar2 + 0x240) == 2) {
                  if (*(double *)(lVar2 + 0x248) == 0.0) {
                    param_3[6] = 0;
                    return;
                  }
                  param_3[6] = 1;
                  return;
                }
                param_3[6] = param_3[6];
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== 18019df50 FUN_18019df50 ===== */

void FUN_18019df50(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  int *piVar4;
  
  piVar4 = (int *)FUN_1800f2fa0();
  if (((piVar4 != (int *)0x0) && (*piVar4 == 4)) &&
     (piVar1 = *(int **)(piVar4 + 0xc),
     (*(longlong *)(piVar4 + 0xe) - (longlong)piVar1 >> 5) * -0x5555555555555555 != 0)) {
    if (*piVar1 == 1) {
      uVar3 = (undefined1)piVar1[1];
    }
    else if (*piVar1 == 2) {
      if (*(double *)(piVar1 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = *param_3;
    }
    *param_3 = uVar3;
    lVar2 = *(longlong *)(piVar4 + 0xc);
    if (1 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
      if (*(int *)(lVar2 + 0x60) == 1) {
        uVar3 = *(undefined1 *)(lVar2 + 100);
      }
      else if (*(int *)(lVar2 + 0x60) == 2) {
        if (*(double *)(lVar2 + 0x68) == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = param_3[1];
      }
      param_3[1] = uVar3;
      lVar2 = *(longlong *)(piVar4 + 0xc);
      if (2 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
        if (*(int *)(lVar2 + 0xc0) == 1) {
          uVar3 = *(undefined1 *)(lVar2 + 0xc4);
        }
        else if (*(int *)(lVar2 + 0xc0) == 2) {
          if (*(double *)(lVar2 + 200) == 0.0) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
        }
        else {
          uVar3 = param_3[2];
        }
        param_3[2] = uVar3;
        lVar2 = *(longlong *)(piVar4 + 0xc);
        if (3 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
          if (*(int *)(lVar2 + 0x120) == 1) {
            param_3[3] = *(undefined1 *)(lVar2 + 0x124);
            return;
          }
          if (*(int *)(lVar2 + 0x120) == 2) {
            if (*(double *)(lVar2 + 0x128) == 0.0) {
              param_3[3] = 0;
              return;
            }
            param_3[3] = 1;
            return;
          }
          param_3[3] = param_3[3];
        }
      }
    }
  }
  return;
}



/* ===== 18019e0e0 FUN_18019e0e0 ===== */

void FUN_18019e0e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  
  piVar1 = (int *)FUN_1800f2fa0();
  if ((piVar1 == (int *)0x0) || (*piVar1 != 3)) {
    return;
  }
  plVar2 = (longlong *)(piVar1 + 4);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  if (0xf < *(ulonglong *)(piVar1 + 10)) {
    plVar2 = (longlong *)*plVar2;
  }
  snprintf(param_3,0x40,&DAT_1806d3198,plVar2);
  return;
}



/* ===== 18019e140 FUN_18019e140 ===== */

void FUN_18019e140(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  double dVar3;
  
  piVar1 = (int *)FUN_1800f2fa0();
  if ((piVar1 != (int *)0x0) && (*piVar1 == 4)) {
    uVar2 = 0;
    do {
      if ((ulonglong)
          ((*(longlong *)(piVar1 + 0xe) - *(longlong *)(piVar1 + 0xc) >> 5) * -0x5555555555555555)
          <= uVar2) {
        return;
      }
      dVar3 = (double)FUN_180370b10(uVar2 * 0x60 + *(longlong *)(piVar1 + 0xc),
                                    SUB84((double)*(float *)(param_3 + uVar2 * 4),0));
      if (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000) {
        *(float *)(param_3 + uVar2 * 4) = (float)dVar3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
  }
  return;
}



/* ===== 18019e1f0 FUN_18019e1f0 ===== */

void FUN_18019e1f0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  int *piVar4;
  
  piVar4 = (int *)FUN_1800f2fa0();
  if (((piVar4 != (int *)0x0) && (*piVar4 == 4)) &&
     (piVar1 = *(int **)(piVar4 + 0xc),
     (*(longlong *)(piVar4 + 0xe) - (longlong)piVar1 >> 5) * -0x5555555555555555 != 0)) {
    if (*piVar1 == 1) {
      uVar3 = (undefined1)piVar1[1];
    }
    else if (*piVar1 == 2) {
      if (*(double *)(piVar1 + 2) == 0.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = *param_3;
    }
    *param_3 = uVar3;
    lVar2 = *(longlong *)(piVar4 + 0xc);
    if (1 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
      if (*(int *)(lVar2 + 0x60) == 1) {
        uVar3 = *(undefined1 *)(lVar2 + 100);
      }
      else if (*(int *)(lVar2 + 0x60) == 2) {
        if (*(double *)(lVar2 + 0x68) == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = param_3[1];
      }
      param_3[1] = uVar3;
      lVar2 = *(longlong *)(piVar4 + 0xc);
      if (2 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
        if (*(int *)(lVar2 + 0xc0) == 1) {
          uVar3 = *(undefined1 *)(lVar2 + 0xc4);
        }
        else if (*(int *)(lVar2 + 0xc0) == 2) {
          if (*(double *)(lVar2 + 200) == 0.0) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
        }
        else {
          uVar3 = param_3[2];
        }
        param_3[2] = uVar3;
        lVar2 = *(longlong *)(piVar4 + 0xc);
        if (3 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
          if (*(int *)(lVar2 + 0x120) == 1) {
            uVar3 = *(undefined1 *)(lVar2 + 0x124);
          }
          else if (*(int *)(lVar2 + 0x120) == 2) {
            if (*(double *)(lVar2 + 0x128) == 0.0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 1;
            }
          }
          else {
            uVar3 = param_3[3];
          }
          param_3[3] = uVar3;
          lVar2 = *(longlong *)(piVar4 + 0xc);
          if (4 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
            if (*(int *)(lVar2 + 0x180) == 1) {
              uVar3 = *(undefined1 *)(lVar2 + 0x184);
            }
            else if (*(int *)(lVar2 + 0x180) == 2) {
              if (*(double *)(lVar2 + 0x188) == 0.0) {
                uVar3 = 0;
              }
              else {
                uVar3 = 1;
              }
            }
            else {
              uVar3 = param_3[4];
            }
            param_3[4] = uVar3;
            lVar2 = *(longlong *)(piVar4 + 0xc);
            if (5 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
              if (*(int *)(lVar2 + 0x1e0) == 1) {
                uVar3 = *(undefined1 *)(lVar2 + 0x1e4);
              }
              else if (*(int *)(lVar2 + 0x1e0) == 2) {
                if (*(double *)(lVar2 + 0x1e8) == 0.0) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = 1;
                }
              }
              else {
                uVar3 = param_3[5];
              }
              param_3[5] = uVar3;
              lVar2 = *(longlong *)(piVar4 + 0xc);
              if (6 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555))
              {
                if (*(int *)(lVar2 + 0x240) == 1) {
                  uVar3 = *(undefined1 *)(lVar2 + 0x244);
                }
                else if (*(int *)(lVar2 + 0x240) == 2) {
                  if (*(double *)(lVar2 + 0x248) == 0.0) {
                    uVar3 = 0;
                  }
                  else {
                    uVar3 = 1;
                  }
                }
                else {
                  uVar3 = param_3[6];
                }
                param_3[6] = uVar3;
                lVar2 = *(longlong *)(piVar4 + 0xc);
                if (7 < (ulonglong)
                        ((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
                  if (*(int *)(lVar2 + 0x2a0) == 1) {
                    uVar3 = *(undefined1 *)(lVar2 + 0x2a4);
                  }
                  else if (*(int *)(lVar2 + 0x2a0) == 2) {
                    if (*(double *)(lVar2 + 0x2a8) == 0.0) {
                      uVar3 = 0;
                    }
                    else {
                      uVar3 = 1;
                    }
                  }
                  else {
                    uVar3 = param_3[7];
                  }
                  param_3[7] = uVar3;
                  lVar2 = *(longlong *)(piVar4 + 0xc);
                  if (8 < (ulonglong)
                          ((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
                    if (*(int *)(lVar2 + 0x300) == 1) {
                      uVar3 = *(undefined1 *)(lVar2 + 0x304);
                    }
                    else if (*(int *)(lVar2 + 0x300) == 2) {
                      if (*(double *)(lVar2 + 0x308) == 0.0) {
                        uVar3 = 0;
                      }
                      else {
                        uVar3 = 1;
                      }
                    }
                    else {
                      uVar3 = param_3[8];
                    }
                    param_3[8] = uVar3;
                    lVar2 = *(longlong *)(piVar4 + 0xc);
                    if (9 < (ulonglong)
                            ((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)) {
                      if (*(int *)(lVar2 + 0x360) == 1) {
                        param_3[9] = *(undefined1 *)(lVar2 + 0x364);
                        return;
                      }
                      if (*(int *)(lVar2 + 0x360) == 2) {
                        if (*(double *)(lVar2 + 0x368) == 0.0) {
                          param_3[9] = 0;
                          return;
                        }
                        param_3[9] = 1;
                        return;
                      }
                      param_3[9] = param_3[9];
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



/* ===== 18019e580 FUN_18019e580 ===== */

void FUN_18019e580(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  piVar4 = (int *)FUN_1800f2fa0();
  if ((piVar4 != (int *)0x0) && (*piVar4 == 4)) {
    uVar5 = 0;
    do {
      lVar2 = *(longlong *)(piVar4 + 0xc);
      if ((ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555) <= uVar5) {
        return;
      }
      lVar6 = uVar5 * 0x60;
      if (*(int *)(lVar2 + lVar6) == 1) {
        uVar3 = *(undefined1 *)(lVar2 + 4 + lVar6);
      }
      else if (*(int *)(lVar2 + lVar6) == 2) {
        if (*(double *)(lVar2 + 8 + lVar6) == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = *(undefined1 *)(uVar5 + param_3);
      }
      *(undefined1 *)(uVar5 + param_3) = uVar3;
      lVar2 = *(longlong *)(piVar4 + 0xc);
      if ((ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555) <= uVar5 + 1
         ) {
        return;
      }
      iVar1 = *(int *)(lVar2 + 0x60 + lVar6);
      if (iVar1 == 1) {
        uVar3 = *(undefined1 *)(lVar2 + 100 + lVar6);
      }
      else if (iVar1 == 2) {
        if (*(double *)(lVar2 + 0x68 + lVar6) == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = *(undefined1 *)(uVar5 + 1 + param_3);
      }
      *(undefined1 *)(uVar5 + 1 + param_3) = uVar3;
      lVar2 = *(longlong *)(piVar4 + 0xc);
      if ((ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555) <= uVar5 + 2
         ) {
        return;
      }
      iVar1 = *(int *)(lVar6 + 0xc0 + lVar2);
      if (iVar1 == 1) {
        uVar3 = *(undefined1 *)(lVar6 + 0xc4 + lVar2);
      }
      else if (iVar1 == 2) {
        if (*(double *)(lVar6 + 200 + lVar2) == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = *(undefined1 *)(uVar5 + 2 + param_3);
      }
      *(undefined1 *)(uVar5 + 2 + param_3) = uVar3;
      lVar2 = *(longlong *)(piVar4 + 0xc);
      if ((ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555) <= uVar5 + 3
         ) {
        return;
      }
      iVar1 = *(int *)(lVar6 + 0x120 + lVar2);
      if (iVar1 == 1) {
        uVar3 = *(undefined1 *)(lVar6 + 0x124 + lVar2);
      }
      else if (iVar1 == 2) {
        if (*(double *)(lVar6 + 0x128 + lVar2) == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = *(undefined1 *)(uVar5 + 3 + param_3);
      }
      *(undefined1 *)(uVar5 + 3 + param_3) = uVar3;
      lVar2 = *(longlong *)(piVar4 + 0xc);
      if ((ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555) <= uVar5 + 4
         ) {
        return;
      }
      iVar1 = *(int *)(lVar6 + 0x180 + lVar2);
      if (iVar1 == 1) {
        uVar3 = *(undefined1 *)(lVar6 + 0x184 + lVar2);
      }
      else if (iVar1 == 2) {
        if (*(double *)(lVar6 + 0x188 + lVar2) == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = *(undefined1 *)(uVar5 + 4 + param_3);
      }
      *(undefined1 *)(uVar5 + 4 + param_3) = uVar3;
      lVar2 = *(longlong *)(piVar4 + 0xc);
      if ((ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555) <= uVar5 + 5
         ) {
        return;
      }
      iVar1 = *(int *)(lVar6 + 0x1e0 + lVar2);
      if (iVar1 == 1) {
        uVar3 = *(undefined1 *)(lVar6 + 0x1e4 + lVar2);
      }
      else if (iVar1 == 2) {
        if (*(double *)(lVar6 + 0x1e8 + lVar2) == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = *(undefined1 *)(uVar5 + 5 + param_3);
      }
      *(undefined1 *)(uVar5 + 5 + param_3) = uVar3;
      lVar2 = *(longlong *)(piVar4 + 0xc);
      if ((ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555) <= uVar5 + 6
         ) {
        return;
      }
      iVar1 = *(int *)(lVar6 + 0x240 + lVar2);
      if (iVar1 == 1) {
        uVar3 = *(undefined1 *)(lVar6 + 0x244 + lVar2);
      }
      else if (iVar1 == 2) {
        if (*(double *)(lVar6 + 0x248 + lVar2) == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = *(undefined1 *)(uVar5 + 6 + param_3);
      }
      *(undefined1 *)(uVar5 + 6 + param_3) = uVar3;
      lVar2 = *(longlong *)(piVar4 + 0xc);
      if ((ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555) <= uVar5 + 7
         ) {
        return;
      }
      iVar1 = *(int *)(lVar6 + 0x2a0 + lVar2);
      if (iVar1 == 1) {
        uVar3 = *(undefined1 *)(lVar6 + 0x2a4 + lVar2);
      }
      else if (iVar1 == 2) {
        if (*(double *)(lVar6 + 0x2a8 + lVar2) == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = *(undefined1 *)(uVar5 + 7 + param_3);
      }
      *(undefined1 *)(uVar5 + 7 + param_3) = uVar3;
      uVar5 = uVar5 + 8;
    } while (uVar5 < 0x10);
    for (; (uVar5 < 0x17 &&
           (lVar2 = *(longlong *)(piVar4 + 0xc),
           uVar5 < (ulonglong)((*(longlong *)(piVar4 + 0xe) - lVar2 >> 5) * -0x5555555555555555)));
        uVar5 = uVar5 + 1) {
      lVar6 = uVar5 * 0x60;
      if (*(int *)(lVar2 + lVar6) == 1) {
        uVar3 = *(undefined1 *)(lVar2 + 4 + lVar6);
      }
      else if (*(int *)(lVar2 + lVar6) == 2) {
        if (*(double *)(lVar2 + 8 + lVar6) == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = *(undefined1 *)(uVar5 + param_3);
      }
      *(undefined1 *)(uVar5 + param_3) = uVar3;
    }
  }
  return;
}



