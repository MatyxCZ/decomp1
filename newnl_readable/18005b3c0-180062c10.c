/* ===== 18005b3c0 FUN_18005b3c0 ===== */

undefined8 FUN_18005b3c0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  char *_Str;
  size_t sVar3;
  
  lVar2 = FUN_180053900(param_1,1);
  iVar1 = FUN_18047fe10(param_1,2);
  if (iVar1 < 1) {
    FUN_18047f270(param_1,*(undefined1 *)(lVar2 + 0x208));
    return 1;
  }
  iVar1 = FUN_18047fbf0(param_1,2);
  *(bool *)(lVar2 + 0x208) = iVar1 != 0;
  _Str = (char *)FUN_18047e510(param_1,3,&DAT_18058b643,0);
  sVar3 = strlen(_Str);
  FUN_180029840(lVar2 + 0x210,_Str,sVar3);
  FUN_18047f610(param_1,1);
  return 1;
}



/* ===== 18005b480 FUN_18005b480 ===== */

undefined8 FUN_18005b480(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_28 [32];
  
  lVar3 = FUN_180053900(param_1,1);
  puVar4 = (undefined8 *)FUN_18005fe40(local_28,param_1,2);
  iVar1 = *(int *)((longlong)puVar4 + 0xc);
  iVar2 = *(int *)(puVar4 + 1);
  *(undefined8 *)(lVar3 + 0x240) = *puVar4;
  if ((0 < iVar1) && (0.0 < *(float *)(lVar3 + 0x230))) {
    *(float *)(lVar3 + 0x234) = *(float *)(lVar3 + 0x230) * ((float)iVar2 / (float)iVar1);
  }
  FUN_18047f610(param_1,1);
  return 1;
}



/* ===== 18005b510 FUN_18005b510 ===== */

undefined8 FUN_18005b510(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180053900(param_1,1);
  FUN_18047f4f0(param_1,(double)*(float *)(lVar1 + 0x248));
  FUN_18047f4f0(param_1,(double)*(float *)(lVar1 + 0x24c));
  return 2;
}



/* ===== 18005b560 FUN_18005b560 ===== */

undefined8 FUN_18005b560(undefined8 param_1)

{
  longlong lVar1;
  double dVar2;
  float fVar3;
  
  lVar1 = FUN_180053900(param_1,1);
  dVar2 = (double)FUN_18047e140(param_1,2);
  fVar3 = 0.0;
  if (0.0 <= (float)dVar2) {
    fVar3 = (float)dVar2;
  }
  *(float *)(lVar1 + 0x248) = fVar3;
  dVar2 = (double)FUN_18047e140(param_1,3);
  *(undefined1 *)(lVar1 + 0x1dc) = 1;
  fVar3 = 0.0;
  if (0.0 <= (float)dVar2) {
    fVar3 = (float)dVar2;
  }
  *(float *)(lVar1 + 0x24c) = fVar3;
  FUN_18047f610(param_1,1);
  return 1;
}



/* ===== 18005b5f0 FUN_18005b5f0 ===== */

undefined8 FUN_18005b5f0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  lVar2 = FUN_180053900(param_1,1);
  switch(*(undefined4 *)(lVar2 + 4)) {
  case 0:
    FUN_18047f270(param_1,*(undefined1 *)(lVar2 + 0x68));
    return 1;
  case 1:
  case 9:
    FUN_18047f3d0(param_1,(longlong)*(int *)(lVar2 + 0x6c));
    return 1;
  case 2:
    FUN_18047f4f0(param_1,(double)*(float *)(lVar2 + 0x70));
    return 1;
  case 3:
  case 10:
    FUN_18047f3d0(param_1,(longlong)*(int *)(lVar2 + 0x6c));
    puVar4 = (undefined8 *)((longlong)*(int *)(lVar2 + 0x6c) * 0x20 + *(longlong *)(lVar2 + 0xa0));
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    FUN_18047f530(param_1,puVar4);
    return 2;
  case 4:
    break;
  case 5:
    FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
    uVar3 = FUN_18047fd90(param_1,0xffffffff);
    FUN_18047fb50(param_1,0xfffffffe);
    FUN_180064120(uVar3,lVar2 + 0xc0);
    return 1;
  default:
    return 0;
  case 7:
    FUN_18047f530(param_1,lVar2 + 0xd1);
    return 1;
  }
  iVar1 = FUN_18047edb0(param_1,2);
  if (iVar1 == 0) {
    FUN_18047e8f0(param_1,0,0);
    uVar5 = 0;
    if (*(longlong *)(lVar2 + 0xa8) - *(longlong *)(lVar2 + 0xa0) >> 5 != 0) {
      do {
        FUN_18047f270(param_1,*(undefined1 *)(uVar5 + *(longlong *)(lVar2 + 0xb8)));
        puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0xa0) + uVar5 * 0x20);
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        FUN_18047f8e0(param_1,0xfffffffe,puVar4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < (ulonglong)(*(longlong *)(lVar2 + 0xa8) - *(longlong *)(lVar2 + 0xa0) >> 5));
    }
    return 1;
  }
  iVar1 = FUN_18047fc10(param_1,2);
  if (((iVar1 < 0) ||
      ((int)(*(longlong *)(lVar2 + 0xa8) - *(longlong *)(lVar2 + 0xa0) >> 5) <= iVar1)) ||
     (*(char *)((longlong)iVar1 + *(longlong *)(lVar2 + 0xb8)) == '\0')) {
    FUN_18047f270(param_1,0);
    return 1;
  }
  FUN_18047f270(param_1,1);
  return 1;
}



/* ===== 18005b8c0 FUN_18005b8c0 ===== */

undefined8 FUN_18005b8c0(undefined8 param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  LARGE_INTEGER *pLVar5;
  undefined8 uVar6;
  char *_Str;
  size_t sVar7;
  LARGE_INTEGER *pLVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  lVar4 = FUN_180053900(param_1,1);
  switch(*(int *)(lVar4 + 4)) {
  case 0:
    iVar2 = FUN_18047fbf0(param_1,2);
    *(bool *)(lVar4 + 0x68) = iVar2 != 0;
    break;
  case 1:
    fVar12 = *(float *)(lVar4 + 0x74);
    fVar1 = *(float *)(lVar4 + 0x78);
    local_res10.s.LowPart = (int)fVar12;
    local_res20.s.LowPart = (int)fVar1;
    local_res18.s.LowPart = FUN_18047e010(param_1,2);
    pLVar8 = &local_res10;
    if ((int)fVar12 <= (int)local_res18.s.LowPart) {
      pLVar8 = &local_res18;
    }
    pLVar5 = &local_res20;
    if ((int)local_res18.s.LowPart <= (int)fVar1) {
      pLVar5 = pLVar8;
    }
    *(DWORD *)(lVar4 + 0x6c) = (pLVar5->s).LowPart;
    break;
  case 2:
    dVar10 = (double)FUN_18047e140(param_1,2);
    fVar12 = (float)dVar10;
    pLVar8 = (LARGE_INTEGER *)(lVar4 + 0x78);
    local_res10._0_4_ = fVar12;
    pLVar5 = &local_res10;
    if (fVar12 < (float)(((LARGE_INTEGER *)(lVar4 + 0x74))->s).LowPart) {
      pLVar5 = (LARGE_INTEGER *)(lVar4 + 0x74);
    }
    if ((float)(pLVar8->s).LowPart <= fVar12 && fVar12 != (float)(pLVar8->s).LowPart) {
      pLVar5 = pLVar8;
    }
    *(DWORD *)(lVar4 + 0x70) = (pLVar5->s).LowPart;
    break;
  case 3:
  case 10:
    uVar9 = (int)(*(longlong *)(lVar4 + 0xa8) - *(longlong *)(lVar4 + 0xa0) >> 5) - 1;
    local_res10.QuadPart = (ulonglong)(uint)local_res10.s.HighPart << 0x20;
    local_res20.s.LowPart = uVar9;
    local_res18.s.LowPart = FUN_18047e010(param_1,2);
    pLVar8 = &local_res10;
    if (-1 < (int)local_res18.s.LowPart) {
      pLVar8 = &local_res18;
    }
    pLVar5 = &local_res20;
    if ((int)local_res18.s.LowPart <= (int)uVar9) {
      pLVar5 = pLVar8;
    }
    *(DWORD *)(lVar4 + 0x6c) = (pLVar5->s).LowPart;
    break;
  case 4:
    iVar2 = FUN_18047e010(param_1,2);
    if ((-1 < iVar2) &&
       (iVar2 < (int)(*(longlong *)(lVar4 + 0xa8) - *(longlong *)(lVar4 + 0xa0) >> 5))) {
      iVar3 = FUN_18047fbf0(param_1,3);
      *(bool *)((longlong)iVar2 + *(longlong *)(lVar4 + 0xb8)) = iVar3 != 0;
    }
    break;
  case 5:
    FUN_180054890(param_1,(longlong)*(int *)(lVar4 + 4),lVar4 + 0xc0);
    break;
  case 7:
    uVar6 = FUN_18047e090(param_1,2,0);
    snprintf(lVar4 + 0xd1,0x100,&DAT_1806d3198,uVar6);
    break;
  case 8:
    _Str = (char *)FUN_18047e090(param_1,2,0);
    sVar7 = strlen(_Str);
    FUN_180029840(lVar4 + 0x48,_Str,sVar7);
    break;
  case 9:
    uVar9 = FUN_18047e010(param_1,2);
    *(undefined4 *)(lVar4 + 0x6c) = uVar9;
  }
  if (DAT_180ca0018 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_180ca0018);
  }
  local_res10.QuadPart = 0;
  QueryPerformanceCounter(&local_res10);
  dVar10 = (double)local_res10.QuadPart;
  dVar11 = (double)DAT_180ca0018;
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar4 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  *(double *)(lVar4 + 0x138) = dVar10 / dVar11;
  return 0;
}



/* ===== 18005bba0 FUN_18005bba0 ===== */

undefined8 FUN_18005bba0(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_180053900(param_1,1);
  iVar2 = FUN_18047fe10(param_1,2);
  if (iVar2 < 1) {
    FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
    lVar4 = FUN_18047fd90(param_1,0xffffffff);
    FUN_18047fb50(param_1,0xfffffffe);
    uVar1 = FUN_180097d90(*(undefined8 *)(lVar4 + 0xa0),lVar3);
    FUN_18047f270(param_1,uVar1);
    return 1;
  }
  iVar2 = FUN_18047fbf0(param_1,2);
  *(bool *)(lVar3 + 0x1d1) = iVar2 != 0;
  return 0;
}



/* ===== 18005bc60 FUN_18005bc60 ===== */

undefined8 FUN_18005bc60(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  lVar3 = FUN_180053900(param_1,1);
  iVar1 = FUN_18047fe10(param_1,2);
  if (iVar1 < 1) {
    *(undefined4 *)(lVar3 + 0x1d4) = 0xffffffff;
    return 0;
  }
  puVar4 = (undefined4 *)FUN_180053900(param_1,2);
  *(undefined4 *)(lVar3 + 0x1d4) = *puVar4;
  uVar2 = FUN_18047e470(param_1,3,0xffffffffffffffff);
  *(undefined4 *)(lVar3 + 0x1d8) = uVar2;
  FUN_18047f610(param_1,1);
  return 1;
}



/* ===== 18005bcf0 FUN_18005bcf0 ===== */

undefined8 FUN_18005bcf0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_180053900(param_1,1);
  if (1 < *(int *)(lVar3 + 0x1e4) + 2U) {
    FUN_180485280(param_1,0xffffd8f0);
  }
  *(undefined4 *)(lVar3 + 0x1e4) = 0xfffffffe;
  iVar1 = FUN_18047fe10(param_1,2);
  if (iVar1 == 6) {
    FUN_18047f610(param_1,2);
    uVar2 = FUN_1804851b0(param_1,0xffffd8f0);
    *(undefined4 *)(lVar3 + 0x1e4) = uVar2;
  }
  FUN_18047f610(param_1,1);
  return 1;
}



/* ===== 18005bd80 FUN_18005bd80 ===== */

ulonglong FUN_18005bd80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  int local_res10 [2];
  int local_res18 [2];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  lVar5 = FUN_180053900(param_1,1,param_3,param_4,0);
  if ((*(int *)(lVar5 + 4) - 3U < 2) || (*(int *)(lVar5 + 4) == 10)) {
    FUN_180054150(&local_38);
    if (local_38 == local_30) {
      uVar4 = FUN_180484c10(param_1,":items: no items");
      uVar6 = (ulonglong)uVar4;
    }
    else {
      if (*(int *)(lVar5 + 4) == 4) {
        lVar10 = local_30 - local_38 >> 5;
        lVar7 = thunk_FUN_1804ecaa0(lVar10);
        FUN_180540170(lVar7,0,lVar10);
        uVar6 = 0;
        if (local_30 - local_38 >> 5 != 0) {
          do {
            if ((ulonglong)(*(longlong *)(lVar5 + 0xa8) - *(longlong *)(lVar5 + 0xa0) >> 5) <= uVar6
               ) break;
            *(undefined1 *)(uVar6 + lVar7) = *(undefined1 *)(uVar6 + *(longlong *)(lVar5 + 0xb8));
            uVar6 = uVar6 + 1;
          } while (uVar6 < (ulonglong)(local_30 - local_38 >> 5));
        }
        plVar2 = (longlong *)(lVar5 + 0xb8);
        lVar10 = lVar7;
        local_40 = lVar7;
        if (plVar2 != &local_40) {
          lVar10 = 0;
          local_40 = 0;
          lVar3 = *plVar2;
          *plVar2 = lVar7;
          if (lVar3 != 0) {
            thunk_FUN_1803d64e0();
          }
        }
        if (lVar10 != 0) {
          thunk_FUN_1803d64e0(lVar10);
        }
      }
      FUN_180067380(lVar5 + 0xa0,&local_38);
      local_res18[0] = (int)(*(longlong *)(lVar5 + 0xa8) - *(longlong *)(lVar5 + 0xa0) >> 5) + -1;
      local_res10[0] = 0;
      piVar1 = (int *)(lVar5 + 0x6c);
      piVar9 = local_res10;
      if (-1 < *piVar1) {
        piVar9 = piVar1;
      }
      piVar8 = local_res18;
      if (*piVar1 <= local_res18[0]) {
        piVar8 = piVar9;
      }
      *piVar1 = *piVar8;
      uVar6 = 0;
    }
    FUN_1800288b0(&local_38);
  }
  else {
    uVar6 = FUN_180484c10(param_1,":items is for combos and listboxes");
  }
  return uVar6;
}



/* ===== 18005bf50 FUN_18005bf50 ===== */

undefined8 FUN_18005bf50(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_180053900(param_1,1);
  if (*(int *)(lVar1 + 4) != 9) {
    uVar2 = FUN_180484c10(param_1,":active is for keybinds");
    return uVar2;
  }
  if ((*(int *)(lVar1 + 0x6c) - 1U < 0xff) && ((&DAT_180cd1768)[*(int *)(lVar1 + 0x6c)] != '\0')) {
    FUN_18047f270(param_1,1);
    return 1;
  }
  FUN_18047f270(param_1,0);
  return 1;
}



/* ===== 18005bfd0 FUN_18005bfd0 ===== */

undefined8 FUN_18005bfd0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_180053900(param_1,1);
  plVar2 = (longlong *)(lVar1 + 0x48);
  if (0xf < *(ulonglong *)(lVar1 + 0x60)) {
    plVar2 = (longlong *)*plVar2;
  }
  FUN_18047f530(param_1,plVar2);
  return 1;
}



/* ===== 18005c010 FUN_18005c010 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18005c010(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar1 = FUN_18047e090(param_1,1,0);
  FUN_180013350(local_38,uVar1);
  if ((ulonglong)(DAT_180ccfa30 - DAT_180ccfa28) < 0x800) {
    if (DAT_180ccfa30 == DAT_180ccfa38) {
      FUN_180028f00(&DAT_180ccfa28,DAT_180ccfa30,local_38);
    }
    else {
      FUN_180024b50(DAT_180ccfa30,local_38);
      DAT_180ccfa30 = DAT_180ccfa30 + 0x20;
    }
  }
  FUN_18000f890(local_38);
  return 0;
}



/* ===== 18005c0b0 FUN_18005c0b0 ===== */

undefined8 FUN_18005c0b0(undefined8 param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1803a10a0();
  FUN_18047f270(param_1,uVar1);
  return 1;
}



/* ===== 18005c0e0 FUN_18005c0e0 ===== */

undefined8 FUN_18005c0e0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_180962170 != 0) && (DAT_180961a38 != 0)) {
    lVar2 = FUN_180264580();
    if ((lVar2 != 0) && (lVar2 - 0x10000U < 0x7ffffffeffff)) {
      fVar3 = (float)FUN_18000f3d0(lVar2);
      fVar4 = (float)FUN_18000f3d0(lVar2 + 4);
      fVar5 = (float)FUN_18000f3d0(lVar2 + 8);
      FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
      lVar2 = FUN_18047fd90(param_1,0xffffffff);
      FUN_18047fb50(param_1,0xfffffffe);
      uVar1 = *(undefined8 *)(lVar2 + 0x40);
      FUN_18047f6f0(uVar1,0xffffd8f0,*(undefined4 *)(lVar2 + 0x140));
      FUN_18047f4f0(uVar1,(double)fVar3);
      FUN_18047f4f0(uVar1,(double)fVar4);
      FUN_18047f4f0(uVar1,(double)fVar5);
      FUN_18047e730(uVar1,3,1);
      return 1;
    }
  }
  return 0;
}



/* ===== 18005c220 FUN_18005c220 ===== */

undefined8 FUN_18005c220(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_28;
  uint local_20 [2];
  undefined1 local_18 [16];
  
  puVar1 = (undefined8 *)FUN_180063d70(local_18,param_1,1);
  local_28 = *puVar1;
  local_20[0] = *(uint *)(puVar1 + 1);
  if (((((uint)local_28 & 0x7f800000) == 0x7f800000) ||
      (local_28._4_4_ = (uint)((ulonglong)local_28 >> 0x20),
      (local_28._4_4_ & 0x7f800000) == 0x7f800000)) || ((local_20[0] & 0x7f800000) == 0x7f800000)) {
    uVar3 = FUN_180484c10(param_1,"engine.set_view_angles: not a finite angle");
    return uVar3;
  }
  if ((DAT_180962170 != 0) && (DAT_180961a38 != 0)) {
    lVar2 = FUN_180264580();
    if ((lVar2 != 0) && (lVar2 - 0x10000U < 0x7ffffffeffff)) {
      FUN_180013280(lVar2,&local_28);
      FUN_180013280(lVar2 + 4,(longlong)&local_28 + 4);
      FUN_180013280(lVar2 + 8,local_20);
      uVar3 = 1;
      goto LAB_18005c303;
    }
  }
  uVar3 = 0;
LAB_18005c303:
  FUN_18047f270(param_1,uVar3);
  return 1;
}



/* ===== 18005c330 FUN_18005c330 ===== */

undefined8 FUN_18005c330(undefined8 param_1)

{
  longlong lVar1;
  float fVar2;
  
  if (DAT_180961a50 != 0) {
    lVar1 = FUN_18000f3a0();
    if (lVar1 != 0) {
      fVar2 = (float)FUN_18000f3d0(lVar1 + 0x30);
      goto LAB_18005c35d;
    }
  }
  fVar2 = 0.0;
LAB_18005c35d:
  FUN_18047f4f0(param_1,(double)fVar2);
  return 1;
}



/* ===== 18005c380 FUN_18005c380 ===== */

undefined8 FUN_18005c380(undefined8 param_1)

{
  LARGE_INTEGER local_res10 [3];
  
  if (DAT_180ca0018 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_180ca0018);
  }
  local_res10[0].QuadPart = 0;
  QueryPerformanceCounter(local_res10);
  FUN_18047f4f0(param_1,(double)local_res10[0].QuadPart / (double)DAT_180ca0018);
  return 1;
}



/* ===== 18005c3f0 FUN_18005c3f0 ===== */

undefined8 FUN_18005c3f0(undefined8 param_1)

{
  FUN_18047f4f0(param_1,(double)*(float *)(DAT_180ca0a50 + 0x40));
  return 1;
}



/* ===== 18005c420 FUN_18005c420 ===== */

undefined8 FUN_18005c420(undefined8 param_1)

{
  FUN_18047f4f0(param_1,DAT_1808ac3a0);
  return 1;
}



/* ===== 18005c440 FUN_18005c440 ===== */

undefined8 FUN_18005c440(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_18047e010(param_1,1);
  if ((iVar1 - 1U < 0xff) && ((&DAT_180cd1768)[iVar1] != '\0')) {
    FUN_18047f270(param_1,1);
    return 1;
  }
  FUN_18047f270(param_1,0);
  return 1;
}



/* ===== 18005c4a0 FUN_18005c4a0 ===== */

undefined8 FUN_18005c4a0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180ca0a50;
  FUN_18047f4f0(param_1,(double)*(float *)(DAT_180ca0a50 + 0x110));
  FUN_18047f4f0(param_1,(double)*(float *)(lVar1 + 0x114));
  return 2;
}



/* ===== 18005c4f0 FUN_18005c4f0 ===== */

undefined8 FUN_18005c4f0(undefined8 param_1)

{
  FUN_18047f270(param_1,DAT_18091a190);
  return 1;
}



/* ===== 18005c510 FUN_18005c510 ===== */

undefined8 FUN_18005c510(undefined8 param_1)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  LARGE_INTEGER local_res10 [3];
  double local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  dVar3 = (double)FUN_18047e140(param_1,1);
  FUN_18047e240(param_1,2,6);
  FUN_18047f610(param_1,2);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar2 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  if (DAT_180ca0018 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_180ca0018);
  }
  local_res10[0].QuadPart = 0;
  QueryPerformanceCounter(local_res10);
  local_28 = 0.0;
  if (0.0 <= dVar3) {
    local_28 = dVar3;
  }
  local_28 = (double)local_res10[0].QuadPart / (double)DAT_180ca0018 + local_28;
  uStack_20 = FUN_1804851b0(param_1,0xffffd8f0);
  pdVar1 = *(double **)(lVar2 + 0x78);
  if (pdVar1 == *(double **)(lVar2 + 0x80)) {
    FUN_18006ac60(lVar2 + 0x70,pdVar1,&local_28);
    return 0;
  }
  *pdVar1 = local_28;
  pdVar1[1] = (double)CONCAT44(uStack_1c,uStack_20);
  *(longlong *)(lVar2 + 0x78) = *(longlong *)(lVar2 + 0x78) + 0x10;
  return 0;
}



/* ===== 18005c640 FUN_18005c640 ===== */

undefined8 FUN_18005c640(undefined8 param_1)

{
  longlong lVar1;
  
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar1 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  *(undefined1 *)(lVar1 + 0x49) = 1;
  return 0;
}



/* ===== 18005c690 FUN_18005c690 ===== */

undefined8 FUN_18005c690(undefined8 param_1)

{
  longlong lVar1;
  
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar1 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  *(undefined1 *)(lVar1 + 0x4a) = 1;
  return 0;
}



/* ===== 18005c6e0 FUN_18005c6e0 ===== */

undefined8 FUN_18005c6e0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  puVar1 = (undefined8 *)FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  if (0xf < (ulonglong)puVar1[3]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  FUN_18047f530(param_1,puVar1);
  return 1;
}



/* ===== 18005c740 FUN_18005c740 ===== */

undefined8 FUN_18005c740(undefined8 param_1)

{
  longlong lVar1;
  
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar1 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  FUN_18047f270(param_1,*(undefined1 *)(lVar1 + 0x4b));
  return 1;
}



/* ===== 18005c7a0 FUN_18005c7a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18005c7a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  undefined4 local_98;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  FUN_18004ec40(local_30,param_1);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  puVar1 = (undefined8 *)FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  local_a8 = puVar1[2];
  if (local_a8 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (0xf < (ulonglong)puVar1[3]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  local_b8 = 1;
  local_b0 = puVar1;
  FUN_180069380(local_70);
  local_98 = 1;
  FUN_180042850(local_50,local_70,&DAT_1806e05f4);
  FUN_1800691f0(local_90);
  local_98 = 3;
  FUN_180070a00(local_90,1,0);
  local_98 = 1;
  FUN_18000f890(local_90);
  FUN_18000f890(local_50);
  local_98 = 0;
  FUN_18000f890(local_70);
  FUN_18000f890(local_30);
  return 0;
}



/* ===== 18005c920 FUN_18005c920 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18005c920(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  undefined4 local_98;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  FUN_18004ec40(local_30,param_1);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  puVar1 = (undefined8 *)FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  local_a8 = puVar1[2];
  if (local_a8 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (0xf < (ulonglong)puVar1[3]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  local_b8 = 1;
  local_b0 = puVar1;
  FUN_180069380(local_70);
  local_98 = 1;
  FUN_180042850(local_50,local_70,&DAT_1806e05f4);
  FUN_1800691f0(local_90);
  local_98 = 3;
  FUN_180070a00(local_90,0,1);
  local_98 = 1;
  FUN_18000f890(local_90);
  FUN_18000f890(local_50);
  local_98 = 0;
  FUN_18000f890(local_70);
  FUN_18000f890(local_30);
  return 0;
}



/* ===== 18005caa0 FUN_18005caa0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18005caa0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_78;
  uVar5 = 1;
  uVar1 = FUN_18047e090(param_1,1,0);
  lVar2 = FUN_18047e510(param_1,2,&DAT_18058b643,0);
  lVar3 = 0;
  do {
    lVar4 = lVar3 + 1;
    if (*(char *)(lVar2 + lVar3) != (&DAT_1806e05fc)[lVar3]) {
      lVar3 = 0;
      goto LAB_18005cb11;
    }
    lVar3 = lVar4;
  } while (lVar4 != 4);
  goto LAB_18005cb31;
  while (lVar3 = lVar4 + 1, lVar4 + 1 != 5) {
LAB_18005cb11:
    lVar4 = lVar3;
    bVar6 = *(char *)(lVar2 + lVar4) == (&DAT_1806e03e8)[lVar4];
    if (!bVar6) goto LAB_18005cb29;
  }
  bVar6 = *(char *)(lVar2 + lVar4) == (&DAT_1806e03e8)[lVar4];
LAB_18005cb29:
  uVar5 = 0;
  if (bVar6) {
    uVar5 = 2;
  }
LAB_18005cb31:
  FUN_180013350(local_58,uVar1);
  FUN_1800708e0(local_58,uVar5);
  FUN_18000f890(local_58);
  return 0;
}



/* ===== 18005cb70 FUN_18005cb70 ===== */

ulonglong FUN_18005cb70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_18047e090(param_1,2,0);
  uVar2 = FUN_18047e090(param_1,1,0);
  uVar3 = FUN_18038eaf0(uVar2,uVar1);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  FUN_18047f3d0(param_1,uVar3 & 0xffffffff);
  return 1;
}



/* ===== 18005cbe0 FUN_18005cbe0 ===== */

undefined8 FUN_18005cbe0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = FUN_18047e090(param_1,1,0);
  lVar2 = FUN_180264b70(uVar1);
  if (lVar2 == 0) {
    return 0;
  }
  plVar3 = (longlong *)FUN_18047efb0(param_1,8);
  *plVar3 = lVar2;
  FUN_18047eb70(param_1,0xffffd8f0,"wl.cvar");
  FUN_18047f990(param_1,0xfffffffe);
  return 1;
}



/* ===== 18005cc60 FUN_18005cc60 ===== */

undefined8 FUN_18005cc60(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_18047e2c0(param_1,1,"wl.cvar");
  iVar1 = FUN_180264d70(*puVar2);
  FUN_18047f3d0(param_1,(longlong)iVar1);
  return 1;
}



/* ===== 18005cca0 FUN_18005cca0 ===== */

undefined8 FUN_18005cca0(undefined8 param_1)

{
  float fVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_18047e2c0(param_1,1,"wl.cvar");
  fVar1 = (float)FUN_180264d70(*puVar2);
  FUN_18047f4f0(param_1,(double)fVar1);
  return 1;
}



/* ===== 18005ccf0 FUN_18005ccf0 ===== */

undefined8 FUN_18005ccf0(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_18047e2c0(param_1,1,"wl.cvar");
  cVar1 = FUN_180264d70(*puVar2);
  FUN_18047f270(param_1,cVar1 != '\0');
  return 1;
}



/* ===== 18005cd30 FUN_18005cd30 ===== */

void FUN_18005cd30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_18;
  longlong local_10;
  
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar1 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  for (plVar2 = *(longlong **)(lVar1 + 0x88); plVar2 != *(longlong **)(lVar1 + 0x90);
      plVar2 = plVar2 + 2) {
    if (*plVar2 == param_2) {
      return;
    }
  }
  local_18 = param_2;
  local_10 = FUN_180264d70(param_2);
  plVar2 = *(longlong **)(lVar1 + 0x90);
  if (plVar2 == *(longlong **)(lVar1 + 0x98)) {
    FUN_18006ac60(lVar1 + 0x88,plVar2,&local_18);
    return;
  }
  *plVar2 = param_2;
  plVar2[1] = local_10;
  *(longlong *)(lVar1 + 0x90) = *(longlong *)(lVar1 + 0x90) + 0x10;
  return;
}



/* ===== 18005ce00 FUN_18005ce00 ===== */

undefined8 FUN_18005ce00(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  puVar3 = (undefined8 *)FUN_18047e2c0(param_1,1,"wl.cvar");
  uVar1 = *puVar3;
  FUN_18005cd30(param_1,uVar1);
  uVar4 = FUN_180264d70(uVar1);
  uVar2 = FUN_18047e010(param_1,2);
  FUN_180264d90(uVar1,(ulonglong)uVar2 | uVar4 & 0xffffffff00000000);
  return 0;
}



/* ===== 18005ce80 FUN_18005ce80 ===== */

undefined8 FUN_18005ce80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  double dVar4;
  
  puVar2 = (undefined8 *)FUN_18047e2c0(param_1,1,"wl.cvar");
  uVar1 = *puVar2;
  FUN_18005cd30(param_1,uVar1);
  dVar4 = (double)FUN_18047e140(param_1,2);
  uVar3 = FUN_180264d70(uVar1);
  FUN_180264d90(uVar1,uVar3 & 0xffffffff00000000 | (ulonglong)(uint)(float)dVar4);
  return 0;
}



/* ===== 18005cf00 FUN_18005cf00 ===== */

undefined8 FUN_18005cf00(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  puVar3 = (undefined8 *)FUN_18047e2c0(param_1,1,"wl.cvar");
  uVar1 = *puVar3;
  FUN_18005cd30(param_1,uVar1);
  uVar4 = FUN_180264d70(uVar1);
  iVar2 = FUN_18047fbf0(param_1,2);
  FUN_180264d90(uVar1,(ulonglong)(iVar2 != 0) | uVar4 & 0xffffffffffffff00);
  return 0;
}



/* ===== 18005cf80 FUN_18005cf80 ===== */

undefined8 FUN_18005cf80(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cvar");
  lVar1 = *plVar3;
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar4 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  plVar3 = *(longlong **)(lVar4 + 0x88);
  do {
    plVar2 = plVar3;
    if (plVar2 == *(longlong **)(lVar4 + 0x90)) {
      return 0;
    }
    plVar3 = plVar2 + 2;
  } while (*plVar2 != lVar1);
  FUN_180264d90(lVar1,plVar2[1]);
  FUN_180540530(plVar2,plVar3,*(longlong *)(lVar4 + 0x90) - (longlong)plVar3);
  *(longlong *)(lVar4 + 0x90) = *(longlong *)(lVar4 + 0x90) + -0x10;
  return 0;
}



/* ===== 18005d050 FUN_18005d050 ===== */

undefined8 FUN_18005d050(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar1 = *plVar2;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa10)) {
    FUN_180484c10(param_1,"a command is only valid inside its createmove callback");
  }
  FUN_18047f4f0(param_1,(double)*(longlong *)(lVar1 + 8));
  return 1;
}



/* ===== 18005d0b0 FUN_18005d0b0 ===== */

undefined8 FUN_18005d0b0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar1 = *plVar2;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa10)) {
    FUN_180484c10(param_1,"a command is only valid inside its createmove callback");
  }
  FUN_18047f4f0(param_1,(double)*(ulonglong *)(lVar1 + 0x60));
  return 1;
}



/* ===== 18005d130 FUN_18005d130 ===== */

undefined8 FUN_18005d130(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  
  dVar4 = (double)FUN_18047e140(param_1,2);
  lVar2 = 0;
  if ((DAT_1808acbe8 <= dVar4) && (dVar4 = dVar4 - DAT_1808acbe8, dVar4 < DAT_1808acbe8)) {
    lVar2 = -0x8000000000000000;
  }
  plVar3 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar1 = *plVar3;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa10)) {
    FUN_180484c10(param_1,"a command is only valid inside its createmove callback");
  }
  *(longlong *)(lVar1 + 0x60) = (longlong)dVar4 + lVar2;
  return 0;
}



/* ===== 18005d1d0 FUN_18005d1d0 ===== */

undefined8 FUN_18005d1d0(undefined8 param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar3 = *plVar2;
  if ((lVar3 == 0) || (lVar3 != DAT_180ccfa10)) {
    FUN_180484c10(param_1,"a command is only valid inside its createmove callback");
  }
  uVar1 = *(ulonglong *)(lVar3 + 0x60);
  dVar4 = (double)FUN_18047e140(param_1,2);
  lVar3 = 0;
  if ((DAT_1808acbe8 <= dVar4) && (dVar4 = dVar4 - DAT_1808acbe8, dVar4 < DAT_1808acbe8)) {
    lVar3 = -0x8000000000000000;
  }
  FUN_18047f270(param_1,(uVar1 & (longlong)dVar4 + lVar3) != 0);
  return 1;
}



/* ===== 18005d280 FUN_18005d280 ===== */

undefined8 FUN_18005d280(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  
  dVar4 = (double)FUN_18047e140(param_1,2);
  lVar2 = 0;
  if ((DAT_1808acbe8 <= dVar4) && (dVar4 = dVar4 - DAT_1808acbe8, dVar4 < DAT_1808acbe8)) {
    lVar2 = -0x8000000000000000;
  }
  plVar3 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar1 = *plVar3;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa10)) {
    FUN_180484c10(param_1,"a command is only valid inside its createmove callback");
  }
  *(ulonglong *)(lVar1 + 0x60) = *(ulonglong *)(lVar1 + 0x60) | (longlong)dVar4 + lVar2;
  return 0;
}



/* ===== 18005d320 FUN_18005d320 ===== */

undefined8 FUN_18005d320(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  
  dVar4 = (double)FUN_18047e140(param_1,2);
  lVar2 = 0;
  if ((DAT_1808acbe8 <= dVar4) && (dVar4 = dVar4 - DAT_1808acbe8, dVar4 < DAT_1808acbe8)) {
    lVar2 = -0x8000000000000000;
  }
  plVar3 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar1 = *plVar3;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa10)) {
    FUN_180484c10(param_1,"a command is only valid inside its createmove callback");
  }
  *(ulonglong *)(lVar1 + 0x60) = *(ulonglong *)(lVar1 + 0x60) & ~((longlong)dVar4 + lVar2);
  return 0;
}



/* ===== 18005d3c0 FUN_18005d3c0 ===== */

undefined8 FUN_18005d3c0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar1 = *plVar2;
  if (((lVar1 == 0) || (lVar1 != DAT_180ccfa10)) &&
     (FUN_180484c10(param_1,"a command is only valid inside its createmove callback"), lVar1 == 0))
  {
    return 0;
  }
  lVar1 = *(longlong *)(lVar1 + 0x40);
  if ((lVar1 - 0x10000U < 0x7ffffffeffff) &&
     (*(longlong *)(lVar1 + 0x40) - 0x10000U < 0x7ffffffeffff)) {
    FUN_18047f4f0(param_1,(double)*(float *)(lVar1 + 0x58));
    FUN_18047f4f0(param_1,(double)*(float *)(lVar1 + 0x5c));
    return 2;
  }
  return 0;
}



/* ===== 18005d470 FUN_18005d470 ===== */

undefined8 FUN_18005d470(undefined8 param_1)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  double dVar8;
  float local_res10 [6];
  float local_48 [4];
  longlong local_38 [4];
  
  plVar4 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar1 = *plVar4;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa10)) {
    FUN_180484c10(param_1,"a command is only valid inside its createmove callback");
  }
  fVar2 = DAT_1808acda0;
  local_res10[4] = 1.0;
  local_res10[0] = -1.0;
  dVar8 = (double)FUN_18047e140(param_1,2);
  local_48[2] = 1.0;
  local_res10[2] = (float)dVar8;
  local_48[0] = -1.0;
  pfVar5 = local_res10;
  if (fVar2 <= local_res10[2]) {
    pfVar5 = local_res10 + 2;
  }
  pfVar7 = local_res10 + 4;
  if (local_res10[2] <= DAT_1808ac34c) {
    pfVar7 = pfVar5;
  }
  dVar8 = (double)FUN_18047e140(param_1,3);
  local_48[1] = (float)dVar8;
  pfVar5 = local_48;
  if (fVar2 <= local_48[1]) {
    pfVar5 = local_48 + 1;
  }
  pfVar6 = local_48 + 2;
  if (local_48[1] <= DAT_1808ac34c) {
    pfVar6 = pfVar5;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_38);
    DAT_181108a00 = local_38[0];
    DAT_1811089f8 = FUN_1803a0c50(local_38);
    DAT_180cd1304 = '\x01';
  }
  if (DAT_1811089f8 != 0) {
    local_38[0] = DAT_1811089f8;
    iVar3 = FUN_18047fbf0(param_1,4);
    FUN_1802afee0(lVar1,local_38,*pfVar7,*pfVar6,iVar3 != 0);
  }
  return 0;
}



/* ===== 18005d600 FUN_18005d600 ===== */

undefined8 FUN_18005d600(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar6 = *plVar5;
  if (((lVar6 == 0) || (lVar6 != DAT_180ccfa10)) &&
     (FUN_180484c10(param_1,"a command is only valid inside its createmove callback"), lVar6 == 0))
  {
    return 0;
  }
  if ((*(longlong *)(lVar6 + 0x40) - 0x10000U < 0x7ffffffeffff) &&
     (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x40) + 0x40), lVar6 - 0x10000U < 0x7ffffffeffff))
  {
    fVar1 = *(float *)(lVar6 + 0x18);
    fVar2 = *(float *)(lVar6 + 0x1c);
    fVar3 = *(float *)(lVar6 + 0x20);
    FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
    lVar6 = FUN_18047fd90(param_1,0xffffffff);
    FUN_18047fb50(param_1,0xfffffffe);
    uVar4 = *(undefined8 *)(lVar6 + 0x40);
    FUN_18047f6f0(uVar4,0xffffd8f0,*(undefined4 *)(lVar6 + 0x140));
    FUN_18047f4f0(uVar4,(double)fVar1);
    FUN_18047f4f0(uVar4,(double)fVar2);
    FUN_18047f4f0(uVar4,(double)fVar3);
    FUN_18047e730(uVar4,3,1);
    return 1;
  }
  return 0;
}



/* ===== 18005d750 FUN_18005d750 ===== */

undefined8 FUN_18005d750(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar2 = *plVar3;
  if ((lVar2 == 0) || (lVar2 != DAT_180ccfa10)) {
    FUN_180484c10(param_1,"a command is only valid inside its createmove callback");
  }
  puVar4 = (uint *)FUN_180063d70(local_18,param_1,2);
  if (((*puVar4 & 0x7f800000) == 0x7f800000) ||
     (uVar1 = puVar4[1], (uVar1 & 0x7f800000) == 0x7f800000)) {
    uVar5 = FUN_180484c10(param_1,"cmd:set_view_angles: not a finite angle");
    return uVar5;
  }
  if (((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x40), lVar2 - 0x10000U < 0x7ffffffeffff)) &&
     (*(longlong *)(lVar2 + 0x40) - 0x10000U < 0x7ffffffeffff)) {
    *(uint *)(*(longlong *)(lVar2 + 0x40) + 0x18) = *puVar4;
    DAT_180ceb098 = 2;
    *(uint *)(*(longlong *)(lVar2 + 0x40) + 0x1c) = uVar1;
    puVar4 = (uint *)(*(longlong *)(lVar2 + 0x40) + 0x10);
    *puVar4 = *puVar4 | 3;
    *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 4;
  }
  return 0;
}



/* ===== 18005d850 FUN_18005d850 ===== */

undefined8 FUN_18005d850(undefined8 param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint local_18;
  uint local_14;
  undefined4 local_10 [2];
  
  plVar4 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar5 = *plVar4;
  if ((((lVar5 != 0) && (lVar5 == DAT_180ccfa10)) ||
      (FUN_180484c10(param_1,"a command is only valid inside its createmove callback"), lVar5 != 0))
     && (((lVar6 = *(longlong *)(lVar5 + 0x40), lVar6 - 0x10000U < 0x7ffffffeffff &&
          (lVar2 = *(longlong *)(lVar6 + 0x40), lVar2 - 0x10000U < 0x7ffffffeffff)) && (lVar2 != 0))
        )) {
    local_18 = *(uint *)(lVar2 + 0x18);
    local_14 = *(uint *)(lVar2 + 0x1c);
    local_10[0] = *(undefined4 *)(lVar2 + 0x20);
    if (((local_18 & 0x7f800000) != 0x7f800000) && ((local_14 & 0x7f800000) != 0x7f800000)) {
      *(uint *)(lVar2 + 0x1c) = local_14;
      puVar1 = (uint *)(*(longlong *)(lVar6 + 0x40) + 0x10);
      *puVar1 = *puVar1 | 3;
      *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 4;
      if ((*(int *)(lVar5 + 0x30) - 1U < 0x100) &&
         ((lVar6 = *(longlong *)(lVar5 + 0x38), lVar6 - 0x10000U < 0x7ffffffeffff &&
          (iVar7 = 0, 0 < *(int *)(lVar5 + 0x30))))) {
        do {
          lVar2 = *(longlong *)(lVar6 + 8 + (longlong)iVar7 * 8);
          if ((lVar2 - 0x10000U < 0x7ffffffeffff) &&
             (lVar3 = *(longlong *)(lVar2 + 0x18), lVar3 - 0x10000U < 0x7ffffffeffff)) {
            *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 3;
            *(uint *)(lVar3 + 0x18) = local_18;
            *(uint *)(lVar3 + 0x1c) = local_14;
            *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 1;
            lVar6 = *(longlong *)(lVar5 + 0x38);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(lVar5 + 0x30));
      }
    }
    if (((DAT_180962170 != 0) && (DAT_180961a38 != 0)) &&
       (lVar5 = FUN_180264580(), lVar5 - 0x10000U < 0x7ffffffeffff)) {
      FUN_180013280(lVar5,&local_18);
      FUN_180013280(lVar5 + 4,&local_14);
      FUN_180013280(lVar5 + 8,local_10);
    }
  }
  return 0;
}



/* ===== 18005da10 FUN_18005da10 ===== */

undefined8 FUN_18005da10(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  
  uVar1 = FUN_18047e090(param_1,1,0);
  dVar3 = (double)FUN_18047e140(param_1,2);
  lVar2 = 0;
  if ((DAT_1808acbe8 <= dVar3) && (dVar3 = dVar3 - DAT_1808acbe8, dVar3 < DAT_1808acbe8)) {
    lVar2 = -0x8000000000000000;
  }
  FUN_180050420(param_1,uVar1,(longlong)dVar3 + lVar2);
  return 1;
}



/* ===== 18005da90 FUN_18005da90 ===== */

undefined8 FUN_18005da90(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  
  uVar1 = FUN_18047e090(param_1,1,0);
  dVar3 = (double)FUN_18047e140(param_1,2);
  lVar2 = 0;
  if ((DAT_1808acbe8 <= dVar3) && (dVar3 = dVar3 - DAT_1808acbe8, dVar3 < DAT_1808acbe8)) {
    lVar2 = -0x8000000000000000;
  }
  FUN_1800508c0(param_1,uVar1,(longlong)dVar3 + lVar2,3);
  return 0;
}



/* ===== 18005db10 FUN_18005db10 ===== */

undefined8 FUN_18005db10(undefined8 param_1)

{
  int iVar1;
  char *_Str;
  size_t sVar2;
  LPCSTR lpModuleName;
  HMODULE pHVar3;
  HANDLE pvVar4;
  ulonglong uVar5;
  char *local_58;
  size_t local_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  
  _Str = (char *)FUN_18047e090(param_1,2,0);
  sVar2 = strlen(_Str);
  lpModuleName = (LPCSTR)FUN_18047e090(param_1,1,0);
  pHVar3 = GetModuleHandleA(lpModuleName);
  if (pHVar3 == (HMODULE)0x0) {
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    pvVar4 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar4,pHVar3,&local_48,0x18);
    if (iVar1 == 0) {
      local_48 = 0;
      uStack_40 = 0;
    }
    else {
      uStack_40 = uStack_40 & 0xffffffff;
    }
  }
  local_58 = _Str;
  local_50 = sVar2;
  uVar5 = FUN_1801d1e00(&local_48,&local_58);
  if (uVar5 == 0) {
    return 0;
  }
  FUN_18047f4f0(param_1,(double)uVar5);
  return 1;
}



/* ===== 18005dc10 FUN_18005dc10 ===== */

/* WARNING: Removing unreachable block (ram,0x00018005dcdb) */

undefined8 FUN_18005dc10(undefined8 param_1)

{
  ulonglong uVar1;
  int iVar2;
  LPCSTR lpModuleName;
  HMODULE pHVar3;
  HANDLE pvVar4;
  ulonglong local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  
  lpModuleName = (LPCSTR)FUN_18047e090(param_1,1,0);
  pHVar3 = GetModuleHandleA(lpModuleName);
  if (pHVar3 != (HMODULE)0x0) {
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar4 = GetCurrentProcess();
    iVar2 = K32GetModuleInformation(pvVar4,pHVar3,&local_28,0x18);
    uVar1 = uStack_20;
    if (((iVar2 != 0) && (local_28 != 0)) && ((int)uStack_20 != 0)) {
      FUN_18047f4f0(param_1,(double)local_28);
      FUN_18047f4f0(param_1,(double)(uVar1 & 0xffffffff));
      return 2;
    }
  }
  return 0;
}



/* ===== 18005dd20 FUN_18005dd20 ===== */

undefined8 FUN_18005dd20(undefined8 param_1)

{
  LPCSTR pCVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  
  pCVar1 = (LPCSTR)FUN_18047e090(param_1,1,0);
  hModule = GetModuleHandleA(pCVar1);
  if (hModule != (HMODULE)0x0) {
    pCVar1 = (LPCSTR)FUN_18047e090(param_1,2,0);
    pFVar2 = GetProcAddress(hModule,pCVar1);
    if (pFVar2 != (FARPROC)0x0) {
      if ((longlong)pFVar2 < 0) {
        FUN_18047f4f0(param_1,(double)pFVar2);
        return 1;
      }
      FUN_18047f4f0(param_1,(double)(longlong)pFVar2);
      return 1;
    }
  }
  return 0;
}



/* ===== 18005ddd0 FUN_18005ddd0 ===== */

undefined8 FUN_18005ddd0(undefined8 param_1)

{
  LPCSTR lpModuleName;
  HMODULE hModule;
  FARPROC pFVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lpModuleName = (LPCSTR)FUN_18047e090(param_1,1,0);
  hModule = GetModuleHandleA(lpModuleName);
  if (hModule == (HMODULE)0x0) {
    FUN_18047e090(param_1,2,0);
  }
  else {
    pFVar1 = GetProcAddress(hModule,"CreateInterface");
    uVar2 = FUN_18047e090(param_1,2,0);
    if (pFVar1 != (FARPROC)0x0) {
      uVar3 = (*pFVar1)(uVar2,0);
      if (uVar3 != 0) {
        if ((longlong)uVar3 < 0) {
          FUN_18047f4f0(param_1,(double)uVar3);
          return 1;
        }
        FUN_18047f4f0(param_1,(double)(longlong)uVar3);
        return 1;
      }
    }
  }
  return 0;
}



/* ===== 18005dea0 FUN_18005dea0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18005dea0(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *****pppppcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *****pppppcVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  char *****local_98 [2];
  ulonglong local_88;
  ulonglong local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  local_a0 = param_1;
  uVar5 = FUN_18047e090(param_2,1,0);
  FUN_180013350(local_98,uVar5);
  if (local_80 < 0x10) {
    pppppcVar6 = (char *****)local_98;
  }
  else {
    pppppcVar6 = local_98[0];
  }
  pppppcVar9 = (char *****)((longlong)pppppcVar6 + local_88);
  for (; pppppcVar6 != pppppcVar9; pppppcVar6 = (char *****)((longlong)pppppcVar6 + 1)) {
    if (*(char *)pppppcVar6 == '/') {
      *(char *)pppppcVar6 = '\\';
    }
  }
  if (local_88 != 0) {
    pppppcVar6 = (char *****)local_98;
    if (0xf < local_80) {
      pppppcVar6 = local_98[0];
    }
    if (((local_88 < 2) ||
        (pcVar1 = (char *)((longlong)pppppcVar6 + local_88),
        pcVar7 = (char *)thunk_FUN_1804e92d0(pppppcVar6,pcVar1,&DAT_1806e0660,2), pcVar7 == pcVar1))
       || ((longlong)pcVar7 - (longlong)pppppcVar6 == -1)) {
      pppppcVar6 = (char *****)local_98;
      if (0xf < local_80) {
        pppppcVar6 = local_98[0];
      }
      if (((local_88 == 0) ||
          (pcVar1 = (char *)((longlong)pppppcVar6 + local_88),
          pcVar7 = (char *)thunk_FUN_1804e6c50(pppppcVar6,pcVar1,0x3a), pcVar7 == pcVar1)) ||
         ((longlong)pcVar7 - (longlong)pppppcVar6 == -1)) {
        pppppcVar6 = (char *****)local_98;
        if (0xf < local_80) {
          pppppcVar6 = local_98[0];
        }
        if (*(char *)pppppcVar6 != '\\') goto LAB_18005dffc;
      }
    }
  }
  pppppcVar6 = (char *****)local_98;
  if (0xf < local_80) {
    pppppcVar6 = local_98[0];
  }
  FUN_180484c10(param_2,"file: bad name \'%s\'",pppppcVar6);
LAB_18005dffc:
  uVar5 = FUN_180013350(local_58,"C:\\neverlose\\scripts\\data");
  uVar5 = FUN_180042850(local_78,uVar5,&DAT_1806e067c);
  pppppcVar6 = (char *****)local_98;
  if (0xf < local_80) {
    pppppcVar6 = local_98[0];
  }
  puVar8 = (undefined4 *)FUN_1800134a0(uVar5,pppppcVar6,local_88);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *(undefined4 *)param_1 = *puVar8;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar2 = puVar8[5];
  uVar3 = puVar8[6];
  uVar4 = puVar8[7];
  *(undefined4 *)(param_1 + 2) = puVar8[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined1 *)puVar8 = 0;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0xf;
  local_a8 = 1;
  FUN_18000f890(local_78);
  FUN_18000f890(local_58);
  FUN_18000f890(local_98);
  return param_1;
}



/* ===== 18005e0d0 FUN_18005e0d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18005e0d0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_1b8 [48];
  undefined8 local_188;
  undefined2 uStack_180;
  undefined2 uStack_17a;
  longlong local_178;
  undefined1 uStack_170;
  undefined1 uStack_16f;
  undefined4 uStack_16c;
  longlong local_168 [2];
  byte abStack_158 [56];
  longlong alStack_120 [25];
  undefined8 ****local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 ****local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  FUN_18005dea0(local_38,param_1);
  ppppuVar2 = local_38;
  if (0xf < local_20) {
    ppppuVar2 = local_38[0];
  }
  FUN_1800695d0(local_168,ppppuVar2,0x20);
  *(undefined ***)((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4) + -4) =
       *(int *)(local_168[0] + 4) + -0xb0;
  if ((abStack_158[*(int *)(local_168[0] + 4)] & 6) != 0) {
    FUN_18047f4d0(param_1);
    FUN_18047f530(param_1,"cannot open");
    uVar4 = 2;
    goto LAB_18005e2a7;
  }
  local_178 = *(longlong *)((longlong)alStack_120 + (longlong)*(int *)(local_168[0] + 4));
  uStack_170 = local_178 == 0;
  local_58 = (undefined8 ****)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_16f = 0;
  uStack_16c._2_2_ = uStack_17a;
  local_188 = 0;
  uStack_180 = 1;
  if (local_178 == 0) {
LAB_18005e204:
    local_48 = 0;
    local_40 = 0xf;
    local_58 = (undefined8 ****)((ulonglong)local_58 & 0xffffffffffffff00);
  }
  else {
    FUN_18006c630(&local_178);
    if (local_178 == 0) goto LAB_18005e204;
    FUN_180068a20(&local_58,&local_178,&local_188);
  }
  ppppuVar2 = &local_58;
  if (0xf < local_40) {
    ppppuVar2 = local_58;
  }
  FUN_18047f450(param_1,ppppuVar2,local_48);
  if (0xf < local_40) {
    uVar3 = local_40 + 1;
    ppppuVar2 = local_58;
    if (0xfff < uVar3) {
      ppppuVar2 = (undefined8 ****)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar2))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar3 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar2,uVar3);
  }
  uVar4 = 1;
  local_48 = 0;
  local_40 = 0xf;
  local_58 = (undefined8 ****)((ulonglong)local_58 & 0xffffffffffffff00);
LAB_18005e2a7:
  FUN_18005e2f0(local_168);
  FUN_18000f890(local_38);
  return uVar4;
}



/* ===== 18005e2f0 FUN_18005e2f0 ===== */

void FUN_18005e2f0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 0x16;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  FUN_1800681f0(param_1 + 2);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  *plVar1 = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
  *plVar1 = (longlong)std::ios_base::vftable;
  FUN_1804eaa10(plVar1);
  return;
}



/* ===== 18005e390 FUN_18005e390 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18005e390(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_208 [48];
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined ***local_1c8;
  undefined8 ****local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8 [2];
  undefined8 local_1a0;
  longlong local_198;
  undefined1 local_190 [8];
  byte abStack_188 [152];
  undefined8 **local_f0 [13];
  undefined8 ****local_88 [2];
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_208;
  local_1d8 = 0;
  FUN_18005dea0(local_88,param_1);
  local_1d0 = 0;
  uVar1 = FUN_18047e090(param_1,2,&local_1d0);
  local_1a8[0] = 0;
  local_1a0 = &PTR_vftable_18091a158;
  local_1c8 = (undefined ***)local_68;
  local_1b8 = local_88;
  if (0xf < local_70) {
    local_1b8 = local_88[0];
  }
  local_1b0 = local_78;
  FUN_180028c20(local_68,&local_1b8);
  local_1d8 = 0;
  uVar2 = FUN_180014350(local_68,local_48);
  FUN_180016bc0(uVar2,local_1a8);
  FUN_1800289e0(local_48);
  FUN_1800289e0(local_68);
  ppppuVar3 = local_88;
  if (0xf < local_70) {
    ppppuVar3 = local_88[0];
  }
  FUN_180069440(&local_198,ppppuVar3,(param_2 ^ 1) * 8 + 8 | 0x20);
  *(undefined ***)(local_190 + (longlong)*(int *)(local_198 + 4) + -8) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_1a8 + (longlong)*(int *)(local_198 + 4) + 0xc) =
       *(int *)(local_198 + 4) + -0xa8;
  if ((abStack_188[*(int *)(local_198 + 4)] & 6) == 0) {
    FUN_1800682a0(&local_198,uVar1,local_1d0);
  }
  FUN_18047f270(param_1,(abStack_188[*(int *)(local_198 + 4)] & 6) == 0);
  local_1c8 = (undefined ***)local_f0;
  *(undefined ***)(local_190 + (longlong)*(int *)(local_198 + 4) + -8) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_1a8 + (longlong)*(int *)(local_198 + 4) + 0xc) =
       *(int *)(local_198 + 4) + -0xa8;
  FUN_1800681f0(local_190);
  *(undefined ***)(local_190 + (longlong)*(int *)(local_198 + 4) + -8) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_1a8 + (longlong)*(int *)(local_198 + 4) + 0xc) =
       *(int *)(local_198 + 4) + -0x10;
  local_1b8 = (undefined8 ****)local_f0;
  local_f0[0] = (undefined8 **)std::ios_base::vftable;
  FUN_1804eaa10(local_f0);
  FUN_18000f890(local_88);
  return 1;
}



/* ===== 18005e5f0 FUN_18005e5f0 ===== */

void FUN_18005e5f0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 0x15;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xa8;
  FUN_1800681f0(param_1 + 1);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x10;
  *plVar1 = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
  *plVar1 = (longlong)std::ios_base::vftable;
  FUN_1804eaa10(plVar1);
  return;
}



/* ===== 18005e6b0 FUN_18005e6b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18005e6b0(undefined8 param_1)

{
  uint *puVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined **local_60;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_68[0] = 0;
  local_60 = &PTR_vftable_18091a158;
  local_78 = (undefined8 *)FUN_18005dea0(local_38,param_1);
  local_80 = local_58;
  local_70 = local_78[2];
  if (0xf < (ulonglong)local_78[3]) {
    local_78 = (undefined8 *)*local_78;
  }
  FUN_180028c20(local_58,&local_78);
  local_88 = 0;
  puVar1 = (uint *)FUN_180016ab0(&local_80,local_58,local_68);
  FUN_18047f270(param_1,1 < *puVar1);
  FUN_1800289e0(local_58);
  FUN_18000f890(local_38);
  return 1;
}



/* ===== 18005e7a0 FUN_18005e7a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18005e7a0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 ***local_58;
  undefined8 ***local_50 [3];
  ulonglong local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_68 = (undefined8 *)FUN_18005dea0(local_30,param_1);
  local_58 = local_50;
  local_60 = local_68[2];
  if (0xf < (ulonglong)local_68[3]) {
    local_68 = (undefined8 *)*local_68;
  }
  FUN_180028c20(local_50,&local_68);
  local_78 = 0;
  pppuVar2 = local_50;
  if (7 < local_38) {
    pppuVar2 = local_50[0];
  }
  uVar1 = FUN_1804e5bf0(pppuVar2);
  FUN_18047f270(param_1,uVar1);
  FUN_1800289e0(local_50);
  FUN_18000f890(local_30);
  return 1;
}



/* ===== 18005e870 FUN_18005e870 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18005e870(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_128 [8];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 *local_118 [2];
  longlong local_108;
  longlong *local_100;
  undefined1 **local_f8;
  undefined1 local_e8 [16];
  longlong local_d8;
  longlong *local_d0;
  undefined4 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [32];
  undefined4 local_78 [2];
  undefined **local_70;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_158;
  local_138 = 0;
  FUN_180013350(&local_b8,"C:\\neverlose\\scripts\\data");
  iVar6 = FUN_18047fe10(param_1,1);
  if (0 < iVar6) {
    puVar7 = (undefined4 *)FUN_18005dea0(local_58,param_1);
    if (&local_b8 != puVar7) {
      if (0xf < uStack_a0) {
        uVar11 = uStack_a0 + 1;
        lVar5 = CONCAT44(uStack_b4,local_b8);
        lVar10 = lVar5;
        if (0xfff < uVar11) {
          lVar10 = *(longlong *)(lVar5 + -8);
          if (0x1f < (lVar5 - lVar10) - 8U) {
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return uVar8;
          }
          uVar11 = uStack_a0 + 0x28;
        }
        thunk_FUN_1803d64e0(lVar10,uVar11);
      }
      local_b8 = *puVar7;
      uStack_b4 = puVar7[1];
      uStack_b0 = puVar7[2];
      uStack_ac = puVar7[3];
      local_a8 = *(undefined8 *)(puVar7 + 4);
      uStack_a0 = *(ulonglong *)(puVar7 + 6);
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0xf;
      *(undefined1 *)puVar7 = 0;
    }
    FUN_18000f890(local_58);
  }
  FUN_18047e8f0(param_1,0,0);
  local_78[0] = 0;
  local_70 = &PTR_vftable_18091a158;
  iVar6 = 1;
  local_118[0] = local_98;
  local_c8 = &local_b8;
  if (0xf < uStack_a0) {
    local_c8 = (undefined4 *)CONCAT44(uStack_b4,local_b8);
  }
  local_c0 = local_a8;
  FUN_180028c20(local_98,&local_c8);
  local_138 = 0;
  FUN_18004e860(local_128,local_98,local_78);
  FUN_1800289e0(local_98);
  local_f8 = local_118;
  if (CONCAT44(uStack_11c,uStack_120) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_11c,uStack_120) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_18004eae0(&local_108,local_118);
  local_f8 = (undefined1 **)local_e8;
  if (CONCAT44(uStack_11c,uStack_120) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_11c,uStack_120) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_18004ebc0(&local_d8,local_e8);
  if (local_108 != local_d8) {
    do {
      uVar8 = FUN_180014430(local_108 + 0x20,local_78);
      puVar9 = (undefined8 *)FUN_180014100(uVar8,local_98);
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      FUN_18047f530(param_1,puVar9);
      FUN_18000f890(local_98);
      FUN_1800289e0(local_78);
      FUN_18047f7e0(param_1,0xfffffffe,iVar6);
      FUN_18004e9d0(&local_108);
      iVar6 = iVar6 + 1;
    } while (local_108 != local_d8);
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d0 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0);
      }
    }
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_100 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_100 + 8))(local_100);
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_11c,uStack_120);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  FUN_18000f890(&local_b8);
  return 1;
}



/* ===== 18005eb90 FUN_18005eb90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18005eb90(undefined8 param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  lVar1 = *plVar3;
  uVar2 = FUN_18038eaf0("CBasePlayerController","m_steamID");
  if (((uVar2 == 0) || (lVar1 == 0)) || ((ulonglong)uVar2 + lVar1 == 0)) {
    uVar4 = 0;
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    uVar4 = FUN_18000f3a0();
    snprintf(&local_38,0x20,&DAT_1806e069c,uVar4);
    FUN_18047f530(param_1,&local_38);
    uVar4 = 1;
  }
  return uVar4;
}



/* ===== 18005ec40 FUN_18005ec40 ===== */

undefined8 FUN_18005ec40(undefined8 param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  lVar1 = *plVar4;
  uVar2 = FUN_18038eaf0("CCSPlayerController","m_iPing");
  if (((uVar2 == 0) || (lVar1 == 0)) || ((ulonglong)uVar2 + lVar1 == 0)) {
    return 0;
  }
  uVar3 = FUN_180011200();
  FUN_18047f3d0(param_1,uVar3);
  return 1;
}



/* ===== 18005ecb0 FUN_18005ecb0 ===== */

undefined8 FUN_18005ecb0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  lVar4 = *plVar3;
  uVar1 = FUN_18038eaf0("CCSPlayerController","m_pInGameMoneyServices");
  if (((uVar1 != 0) && (lVar4 != 0)) && ((ulonglong)uVar1 + lVar4 != 0)) {
    lVar4 = FUN_18000f3a0();
    uVar1 = FUN_18038eaf0("CCSPlayerController_InGameMoneyServices","m_iAccount");
    if ((uVar1 == 0) || (lVar4 == 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulonglong)uVar1 + lVar4;
    }
    if (lVar4 != 0) {
      iVar2 = FUN_180011200();
      FUN_18047f3d0(param_1,(longlong)iVar2);
      return 1;
    }
  }
  return 0;
}



/* ===== 18005ed60 FUN_18005ed60 ===== */

undefined8 FUN_18005ed60(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res10 [24];
  
  plVar3 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  lVar4 = *plVar3;
  uVar1 = FUN_18038eaf0("C_BasePlayerPawn","m_pObserverServices");
  if (((uVar1 != 0) && (lVar4 != 0)) && ((ulonglong)uVar1 + lVar4 != 0)) {
    lVar4 = FUN_18000f3a0();
    uVar1 = FUN_18038eaf0("CPlayer_ObserverServices","m_hObserverTarget");
    if ((uVar1 == 0) || (lVar4 == 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulonglong)uVar1 + lVar4;
    }
    if (lVar4 != 0) {
      uVar2 = FUN_180011200();
      plVar3 = (longlong *)FUN_1803a0940(local_res10,uVar2);
      lVar4 = *plVar3;
      if (lVar4 == 0) {
        FUN_18047f4d0();
        return 1;
      }
      plVar3 = (longlong *)FUN_18047efb0(param_1,8);
      *plVar3 = lVar4;
      FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
      FUN_18047f990(param_1,0xfffffffe);
      return 1;
    }
  }
  return 0;
}



/* ===== 18005ee60 FUN_18005ee60 ===== */

undefined8 FUN_18005ee60(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_88;
  undefined4 local_80;
  
  uVar5 = 1;
  puVar3 = (undefined8 *)FUN_18047e2c0(param_1,1,"wl.entity");
  lVar1 = DAT_180ca0a50;
  lVar6 = (longlong)DAT_181107a00;
  local_res18 = *puVar3;
  iVar7 = 0;
  fVar13 = DAT_1808aceb0;
  fVar9 = DAT_1808aceb0;
  fVar10 = DAT_1808acd08;
  fVar11 = DAT_1808acd08;
  do {
    local_88 = 0;
    local_80 = 0;
    cVar2 = FUN_1803a07f0(&local_res18,uVar5,&local_88);
    if (cVar2 == '\0') {
      if (0x10 < uVar5) break;
    }
    else {
      local_res10 = 0;
      cVar2 = FUN_1803a1bf0(&DAT_181107930 + lVar6 * 0x40,&local_88,&local_res10,
                            *(undefined4 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x34));
      if (cVar2 != '\0') {
        iVar7 = iVar7 + 1;
        fVar12 = (float)local_res10;
        if (fVar10 <= (float)local_res10) {
          fVar12 = fVar10;
        }
        fVar10 = (float)local_res10;
        if ((float)local_res10 <= fVar9) {
          fVar10 = fVar9;
        }
        fVar9 = fVar10;
        fVar8 = local_res10._4_4_;
        if (fVar11 <= local_res10._4_4_) {
          fVar8 = fVar11;
        }
        fVar10 = local_res10._4_4_;
        if (local_res10._4_4_ <= fVar13) {
          fVar10 = fVar13;
        }
        fVar13 = fVar10;
        fVar10 = fVar12;
        fVar11 = fVar8;
      }
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x80);
  if (((iVar7 < 8) || (fVar9 - fVar10 < DAT_1808ac34c)) ||
     (fVar12 = fVar13 - fVar11, fVar12 < DAT_1808ac34c)) {
    uVar4 = 0;
  }
  else {
    fVar11 = fVar11 - fVar12 * DAT_1808ac080;
    fVar13 = fVar12 * DAT_1808ac03c + fVar13;
    fVar12 = (fVar9 + fVar10) * DAT_1808ac1f4 + 0.0;
    fVar10 = (fVar13 - fVar11) * DAT_1808ac140;
    fVar9 = (float)FUN_18053f0d0(fVar12 - fVar10);
    FUN_18047f4f0(param_1,(double)fVar9);
    fVar9 = (float)FUN_18053f0d0(fVar11 + 0.0);
    FUN_18047f4f0(param_1,(double)fVar9);
    fVar9 = (float)FUN_18053f0d0(fVar12 + fVar10);
    FUN_18047f4f0(param_1,(double)fVar9);
    fVar13 = (float)FUN_18053f0d0(fVar13 + 0.0);
    FUN_18047f4f0(param_1,(double)fVar13);
    uVar4 = 4;
  }
  return uVar4;
}



/* ===== 18005f0e0 FUN_18005f0e0 ===== */

undefined8 FUN_18005f0e0(undefined8 param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  lVar6 = *plVar2;
  uVar3 = FUN_18047e090(param_1,2,0);
  uVar4 = FUN_18047e090(param_1,3,0);
  uVar5 = FUN_18047e510(param_1,4,"CCSWeaponBaseVData",0);
  if (lVar6 == 0) {
    FUN_18038eaf0(uVar5,uVar3);
  }
  else {
    lVar6 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + lVar6);
    uVar1 = FUN_18038eaf0(uVar5,uVar3);
    if ((lVar6 != 0) && (uVar1 != 0)) {
      FUN_180050420(param_1,uVar4,(ulonglong)uVar1 + lVar6);
      return 1;
    }
  }
  return 0;
}



/* ===== 18005f1c0 FUN_18005f1c0 ===== */

ulonglong FUN_18005f1c0(char *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  char *pcVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar4 = 0;
  if (uVar1 != 0) {
    pcVar5 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pcVar5 = *(char **)param_1;
    }
    if (1 < uVar1) {
      pcVar3 = (char *)thunk_FUN_1804e92d0(pcVar5,pcVar5 + uVar1,&DAT_1806e0660,2);
      if ((pcVar3 != pcVar5 + uVar1) &&
         (uVar4 = (longlong)pcVar3 - (longlong)pcVar5, uVar4 != 0xffffffffffffffff))
      goto LAB_18005f287;
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    pcVar5 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pcVar5 = *(char **)param_1;
    }
    if (lVar2 != 0) {
      pcVar3 = (char *)thunk_FUN_1804e6c50(pcVar5,pcVar5 + lVar2,0x3a);
      if ((pcVar3 != pcVar5 + lVar2) &&
         (uVar4 = (longlong)pcVar3 - (longlong)pcVar5, uVar4 != 0xffffffffffffffff))
      goto LAB_18005f287;
    }
    uVar4 = *(ulonglong *)(param_1 + 0x18);
    pcVar5 = param_1;
    if (0xf < uVar4) {
      pcVar5 = *(char **)param_1;
    }
    if (*pcVar5 != '\\') {
      if (0xf < uVar4) {
        param_1 = *(char **)param_1;
      }
      if (*param_1 != '/') {
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
    }
  }
LAB_18005f287:
  return uVar4 & 0xffffffffffffff00;
}



/* ===== 18005f2a0 FUN_18005f2a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_18005f2a0(undefined8 param_1)

{
  ulonglong *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 ****ppppuVar12;
  char *pcVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [40];
  undefined4 local_228;
  int iStack_1fc;
  longlong local_1f8 [2];
  byte abStack_1e8 [56];
  longlong alStack_1b0 [25];
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined4 local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 ****local_b0;
  longlong lStack_a8;
  longlong local_a0;
  ulonglong uStack_98;
  undefined8 ****local_90 [2];
  undefined8 local_80;
  ulonglong local_78;
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_258;
  local_228 = 0;
  uVar7 = FUN_18047e090(param_1,1,0);
  FUN_180013350(local_90,uVar7);
  uVar6 = 2;
  iVar4 = FUN_18047e010(param_1,2);
  iVar5 = FUN_18047e010(param_1,3);
  cVar3 = FUN_18005f1c0(local_90);
  if (cVar3 == '\0') {
    pcVar13 = "render.load_image: bad file name";
  }
  else {
    FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
    lVar8 = FUN_18047fd90(param_1,0xffffffff);
    FUN_18047fb50(param_1,0xfffffffe);
    if ((ulonglong)
        ((*(longlong *)(lVar8 + 0x158) - *(longlong *)(lVar8 + 0x150) >> 3) * 0x6db6db6db6db6db7) <
        0x100) {
      if ((((0 < iVar4) && (0 < iVar5)) && (iVar4 < 0x1001)) && (iVar5 < 0x1001)) {
        uVar7 = FUN_180013350(local_70,"C:\\neverlose\\scripts\\images\\");
        ppppuVar12 = local_90;
        if (0xf < local_78) {
          ppppuVar12 = local_90[0];
        }
        plVar9 = (longlong *)FUN_1800134a0(uVar7,ppppuVar12,local_80);
        local_b0 = (undefined8 ****)*plVar9;
        lStack_a8 = plVar9[1];
        local_a0 = plVar9[2];
        uStack_98 = plVar9[3];
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
        local_228 = 1;
        ppppuVar12 = &local_b0;
        if (0xf < uStack_98) {
          ppppuVar12 = local_b0;
        }
        FUN_1800695d0(local_1f8,ppppuVar12,0x20);
        *(undefined ***)((longlong)local_1f8 + (longlong)*(int *)(local_1f8[0] + 4)) =
             std::basic_ifstream<char,std::char_traits<char>_>::vftable;
        *(int *)((longlong)local_1f8 + (longlong)*(int *)(local_1f8[0] + 4) + -4) =
             *(int *)(local_1f8[0] + 4) + -0xb0;
        local_228 = 0;
        if (uStack_98 < 0x10) {
LAB_18005f4dc:
          local_a0 = 0;
          uStack_98 = 0xf;
          local_b0 = (undefined8 ****)((ulonglong)local_b0 & 0xffffffffffffff00);
          uVar16 = FUN_18000f890(local_70);
          puVar15 = auStack_258;
          if ((abStack_1e8[*(int *)(local_1f8[0] + 4)] & 6) == 0) goto LAB_18005f535;
          FUN_18047f4d0(param_1);
          FUN_18047f530(param_1,"cannot read the file");
          puVar15 = auStack_258;
        }
        else {
          uVar14 = uStack_98 + 1;
          ppppuVar12 = local_b0;
          if (uVar14 < 0x1000) {
LAB_18005f4d7:
            thunk_FUN_1803d64e0(ppppuVar12,uVar14);
            goto LAB_18005f4dc;
          }
          ppppuVar12 = (undefined8 ****)local_b0[-1];
          if ((ulonglong)((longlong)local_b0 + (-8 - (longlong)ppppuVar12)) < 0x20) {
            uVar14 = uStack_98 + 0x28;
            goto LAB_18005f4d7;
          }
          pcVar2 = (code *)swi(0x29);
          uVar16 = (*pcVar2)(5);
          puVar15 = auStack_250;
LAB_18005f535:
          *(undefined8 *)(puVar15 + -8) = 0x18005f546;
          FUN_18047eb70(uVar16,0xffffd8f0,"wl_state");
          *(undefined8 *)(puVar15 + -8) = 0x18005f553;
          lVar10 = FUN_18047fd90(param_1,0xffffffff);
          *(undefined8 *)(puVar15 + -8) = 0x18005f563;
          FUN_18047fb50(param_1,0xfffffffe);
          uStack_e0 = 0;
          local_d8 = 0;
          local_d0 = 0xf;
          local_e8 = 0;
          local_c8 = 0;
          local_c0 = 0;
          local_b8 = 0;
          lVar8 = *(longlong *)
                   ((longlong)alStack_1b0 + (longlong)*(int *)(*(longlong *)(puVar15 + 0x60) + 4));
          *(undefined8 *)(puVar15 + 0x50) = 0;
          *(undefined2 *)(puVar15 + 0x58) = 1;
          *(undefined4 *)(puVar15 + 0x5a) = *(undefined4 *)(puVar15 + 0x4a);
          *(undefined2 *)(puVar15 + 0x5e) = *(undefined2 *)(puVar15 + 0x4e);
          *(longlong *)(puVar15 + 0x40) = lVar8;
          puVar15[0x48] = lVar8 == 0;
          puVar15[0x49] = 0;
          *(undefined4 *)(puVar15 + 0x4a) = *(undefined4 *)(puVar15 + 0x4a);
          *(undefined2 *)(puVar15 + 0x4e) = *(undefined2 *)(puVar15 + 0x4e);
          *(undefined8 *)(puVar15 + -8) = 0x18005f60a;
          FUN_180066c70(&local_e8,puVar15 + 0x40,puVar15 + 0x50);
          local_b8 = CONCAT44(iVar5,iVar4);
          puVar1 = *(ulonglong **)(lVar10 + 0x158);
          if (puVar1 == *(ulonglong **)(lVar10 + 0x160)) {
            *(undefined8 *)(puVar15 + -8) = 0x18005f6d9;
            FUN_18006a9e0(lVar10 + 0x150,puVar1,&local_e8);
          }
          else {
            *(ulonglong **)(puVar15 + 0x50) = puVar1;
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            *puVar1 = local_e8;
            puVar1[1] = uStack_e0;
            puVar1[2] = local_d8;
            puVar1[3] = local_d0;
            local_d8 = 0;
            local_d0 = 0xf;
            local_e8 = local_e8 & 0xffffffffffffff00;
            *(undefined1 *)(puVar1 + 4) = (undefined1)local_c8;
            *(undefined1 *)((longlong)puVar1 + 0x21) = local_c8._1_1_;
            *(undefined1 *)((longlong)puVar1 + 0x22) = local_c8._2_1_;
            *(undefined1 *)((longlong)puVar1 + 0x23) = local_c8._3_1_;
            puVar1[5] = local_c0;
            *(int *)(puVar1 + 6) = iVar4;
            *(int *)((longlong)puVar1 + 0x34) = iVar5;
            *(longlong *)(lVar10 + 0x158) = *(longlong *)(lVar10 + 0x158) + 0x38;
          }
          *(undefined8 *)(puVar15 + -8) = 0x18005f6e6;
          piVar11 = (int *)FUN_18047efb0(param_1,4);
          *piVar11 = (int)(*(longlong *)(lVar10 + 0x158) - *(longlong *)(lVar10 + 0x150) >> 3) *
                     -0x49249249 + -1;
          *(undefined8 *)(puVar15 + -8) = 0x18005f714;
          FUN_18047eb70(param_1,0xffffd8f0,"wl.texture");
          *(undefined8 *)(puVar15 + -8) = 0x18005f721;
          FUN_18047f990(param_1,0xfffffffe);
          uVar6 = 1;
          *(undefined8 *)(puVar15 + -8) = 0x18005f72f;
          FUN_18000f890(&local_e8);
        }
        *(undefined8 *)(puVar15 + -8) = 0x18005f73a;
        FUN_18005e2f0(puVar15 + 0x60);
        goto LAB_18005f74d;
      }
      pcVar13 = "render.load_image: size out of 1..4096";
    }
    else {
      pcVar13 = 
      "render.load_image: 256 textures per script at most (load them once, not every frame)";
    }
  }
  uVar6 = FUN_180484c10(param_1,pcVar13);
  puVar15 = auStack_258;
LAB_18005f74d:
  *(undefined8 *)(puVar15 + -8) = 0x18005f759;
  FUN_18000f890(local_90);
  *(undefined8 *)(puVar15 + -8) = 0x18005f76b;
  return uVar6;
}



/* ===== 18005f780 FUN_18005f780 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18005f780(undefined8 param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong *plVar8;
  int *piVar9;
  undefined8 ****ppppuVar10;
  char *pcVar11;
  ulonglong uVar12;
  char *pcVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  size_t _Size;
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [40];
  undefined4 local_238;
  undefined8 local_208;
  int iStack_1fc;
  longlong local_1f8 [2];
  byte abStack_1e8 [56];
  longlong alStack_1b0 [25];
  char local_e8;
  uint7 uStack_e7;
  longlong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong lStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 ****local_90;
  longlong lStack_88;
  longlong local_80;
  ulonglong uStack_78;
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_268;
  local_238 = 0;
  local_208 = 0;
  uVar5 = FUN_18047e090(param_1,1,&local_208);
  uVar15 = 2;
  uVar3 = FUN_18047e010(param_1,2);
  if (uVar3 - 1 < 0x1000) {
    FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
    lVar6 = FUN_18047fd90(param_1,0xffffffff);
    FUN_18047fb50(param_1,0xfffffffe);
    if ((ulonglong)
        ((*(longlong *)(lVar6 + 0x158) - *(longlong *)(lVar6 + 0x150) >> 3) * 0x6db6db6db6db6db7) <
        0x100) {
      FUN_180024b20(&local_e8,uVar5,local_208);
      pcVar11 = (char *)CONCAT71(uStack_e7,local_e8);
      pcVar7 = &local_e8;
      if (0xf < local_d0) {
        pcVar7 = pcVar11;
      }
      if (local_d8 == 0) {
LAB_18005f8ce:
        uVar16 = local_d0;
        uVar12 = local_d8;
        if (local_d8 < 4) goto LAB_18005fc17;
        uVar1 = local_d8 - 4;
        if (local_d8 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_18002a1a0();
        }
        _Size = 4;
        if (local_d8 - uVar1 < 4) {
          _Size = local_d8 - uVar1;
        }
        pcVar7 = &local_e8;
        if (0xf < local_d0) {
          pcVar7 = pcVar11;
        }
        iVar4 = memcmp(pcVar7 + uVar1,&DAT_1806e0874,_Size);
        if ((iVar4 != 0) || (_Size < 4)) goto LAB_18005fc17;
        if (uVar12 != 0) {
          pcVar7 = &local_e8;
          if (0xf < uVar16) {
            pcVar7 = pcVar11;
          }
          if (1 < uVar12) {
            pcVar11 = (char *)thunk_FUN_1804e92d0(pcVar7,pcVar7 + uVar12,&DAT_1806e0660,2);
            if ((pcVar11 != pcVar7 + uVar12) && ((longlong)pcVar11 - (longlong)pcVar7 != -1))
            goto LAB_18005fc00;
            pcVar11 = (char *)CONCAT71(uStack_e7,local_e8);
            uVar12 = local_d8;
            uVar16 = local_d0;
          }
          pcVar7 = &local_e8;
          if (0xf < uVar16) {
            pcVar7 = pcVar11;
          }
          if (uVar12 != 0) {
            pcVar11 = (char *)thunk_FUN_1804e6c50(pcVar7,pcVar7 + uVar12,0x3a);
            if ((pcVar11 != pcVar7 + uVar12) && ((longlong)pcVar11 - (longlong)pcVar7 != -1))
            goto LAB_18005fc00;
            pcVar11 = (char *)CONCAT71(uStack_e7,local_e8);
            uVar16 = local_d0;
          }
          pcVar7 = &local_e8;
          if (0xf < uVar16) {
            pcVar7 = pcVar11;
          }
          if (*pcVar7 == '\\') goto LAB_18005fc00;
          pcVar7 = &local_e8;
          if (0xf < uVar16) {
            pcVar7 = pcVar11;
          }
          if (*pcVar7 == '/') goto LAB_18005fc00;
          uVar5 = FUN_180013350(local_70,"C:\\neverlose\\scripts\\images\\");
          pcVar11 = &local_e8;
          if (0xf < local_d0) {
            pcVar11 = (char *)CONCAT71(uStack_e7,local_e8);
          }
          plVar8 = (longlong *)FUN_1800134a0(uVar5,pcVar11,local_d8);
          local_90 = (undefined8 ****)*plVar8;
          lStack_88 = plVar8[1];
          local_80 = plVar8[2];
          uStack_78 = plVar8[3];
          plVar8[2] = 0;
          plVar8[3] = 0xf;
          *(undefined1 *)plVar8 = 0;
          local_238 = 1;
          ppppuVar10 = &local_90;
          if (0xf < uStack_78) {
            ppppuVar10 = local_90;
          }
          FUN_1800695d0(local_1f8,ppppuVar10,0x20);
          *(undefined ***)((longlong)local_1f8 + (longlong)*(int *)(local_1f8[0] + 4)) =
               std::basic_ifstream<char,std::char_traits<char>_>::vftable;
          *(int *)((longlong)local_1f8 + (longlong)*(int *)(local_1f8[0] + 4) + -4) =
               *(int *)(local_1f8[0] + 4) + -0xb0;
          local_238 = 0;
          if (uStack_78 < 0x10) {
LAB_18005fb18:
            local_80 = 0;
            uStack_78 = 0xf;
            local_90 = (undefined8 ****)((ulonglong)local_90 & 0xffffffffffffff00);
            FUN_18000f890(local_70);
            puVar14 = auStack_268;
            lVar6 = (longlong)*(int *)(local_1f8[0] + 4);
            if ((abStack_1e8[lVar6] & 6) == 0) goto LAB_18005fb66;
            FUN_18047f4d0(param_1);
            puVar14 = auStack_268;
            pcVar11 = "cannot read the file";
LAB_18005fbdc:
            *(undefined8 *)(puVar14 + -8) = 0x18005fbe4;
            FUN_18047f530(param_1,pcVar11);
            *(undefined8 *)(puVar14 + -8) = 0x18005fbef;
            FUN_18005e2f0(puVar14 + 0x70);
            goto LAB_18005fdee;
          }
          uVar12 = uStack_78 + 1;
          ppppuVar10 = local_90;
          if (uVar12 < 0x1000) {
LAB_18005fb13:
            thunk_FUN_1803d64e0(ppppuVar10,uVar12);
            goto LAB_18005fb18;
          }
          ppppuVar10 = (undefined8 ****)local_90[-1];
          if ((ulonglong)((longlong)local_90 + (-8 - (longlong)ppppuVar10)) < 0x20) {
            uVar12 = uStack_78 + 0x28;
            goto LAB_18005fb13;
          }
          lVar6 = 5;
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)();
          puVar14 = auStack_260;
LAB_18005fb66:
          lVar6 = *(longlong *)((longlong)alStack_1b0 + lVar6);
          *(undefined8 *)(puVar14 + 0x50) = 0;
          *(undefined2 *)(puVar14 + 0x58) = 1;
          *(undefined4 *)(puVar14 + 0x5a) = *(undefined4 *)(puVar14 + 0x4a);
          *(undefined2 *)(puVar14 + 0x5e) = *(undefined2 *)(puVar14 + 0x4e);
          *(longlong *)(puVar14 + 0x40) = lVar6;
          puVar14[0x48] = lVar6 == 0;
          puVar14[0x49] = 0;
          *(undefined4 *)(puVar14 + 0x4a) = *(undefined4 *)(puVar14 + 0x4a);
          *(undefined2 *)(puVar14 + 0x4e) = *(undefined2 *)(puVar14 + 0x4e);
          *(undefined8 *)(puVar14 + -8) = 0x18005fbc3;
          FUN_180066c70(&local_e8,puVar14 + 0x40,puVar14 + 0x50);
          if (local_d8 == 0) {
            *(undefined8 *)(puVar14 + -8) = 0x18005fbd5;
            FUN_18047f4d0(param_1);
            pcVar11 = "empty file";
            goto LAB_18005fbdc;
          }
          *(undefined8 *)(puVar14 + -8) = 0x18005fbfe;
          FUN_18005e2f0(puVar14 + 0x70);
          goto LAB_18005fc1a;
        }
LAB_18005fc00:
        uVar3 = FUN_180484c10(param_1,"render.load_svg: bad file name");
        puVar14 = auStack_268;
        uVar15 = (ulonglong)uVar3;
      }
      else {
        pcVar13 = pcVar7 + local_d8;
        pcVar11 = (char *)thunk_FUN_1804e6c50(pcVar7,pcVar13,0x3c);
        if ((pcVar11 == pcVar13) || ((longlong)pcVar11 - (longlong)pcVar7 == -1)) {
          pcVar11 = (char *)CONCAT71(uStack_e7,local_e8);
          goto LAB_18005f8ce;
        }
LAB_18005fc17:
        puVar14 = auStack_268;
LAB_18005fc1a:
        *(undefined8 *)(puVar14 + -8) = 0x18005fc2e;
        FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
        *(undefined8 *)(puVar14 + -8) = 0x18005fc3b;
        lVar6 = FUN_18047fd90(param_1,0xffffffff);
        *(undefined8 *)(puVar14 + -8) = 0x18005fc4b;
        FUN_18047fb50(param_1,0xfffffffe);
        uVar12 = local_d0;
        uVar15 = local_d8;
        local_a0 = 0;
        local_c8 = CONCAT71(uStack_e7,local_e8);
        lStack_c0 = local_e0;
        local_b8 = local_d8;
        local_b0 = local_d0;
        local_d8 = 0;
        local_d0 = 0xf;
        local_e8 = '\0';
        local_a8 = 1;
        local_98 = (ulonglong)uVar3 << 0x20;
        plVar8 = *(longlong **)(lVar6 + 0x158);
        if (plVar8 == *(longlong **)(lVar6 + 0x160)) {
          *(undefined8 *)(puVar14 + -8) = 0x18005fd89;
          FUN_18006a9e0(lVar6 + 0x150,plVar8,&local_c8);
        }
        else {
          *(longlong **)(puVar14 + 0x50) = plVar8;
          *plVar8 = 0;
          plVar8[1] = 0;
          plVar8[2] = 0;
          plVar8[3] = 0;
          *plVar8 = local_c8;
          plVar8[1] = local_e0;
          plVar8[2] = uVar15;
          plVar8[3] = uVar12;
          local_b8 = 0;
          local_b0 = 0xf;
          local_c8 = (ulonglong)uStack_e7 << 8;
          *(undefined4 *)(plVar8 + 4) = 1;
          plVar8[5] = 0;
          *(undefined4 *)(plVar8 + 6) = 0;
          *(uint *)((longlong)plVar8 + 0x34) = uVar3;
          *(longlong *)(lVar6 + 0x158) = *(longlong *)(lVar6 + 0x158) + 0x38;
        }
        *(undefined8 *)(puVar14 + -8) = 0x18005fd96;
        piVar9 = (int *)FUN_18047efb0(param_1,4);
        *piVar9 = (int)(*(longlong *)(lVar6 + 0x158) - *(longlong *)(lVar6 + 0x150) >> 3) *
                  -0x49249249 + -1;
        *(undefined8 *)(puVar14 + -8) = 0x18005fdce;
        FUN_18047eb70(param_1,0xffffd8f0,"wl.texture");
        *(undefined8 *)(puVar14 + -8) = 0x18005fddb;
        FUN_18047f990(param_1,0xfffffffe);
        uVar15 = 1;
        *(undefined8 *)(puVar14 + -8) = 0x18005fded;
        FUN_18000f890(&local_c8);
      }
LAB_18005fdee:
      *(undefined8 *)(puVar14 + -8) = 0x18005fdfa;
      FUN_18000f890(&local_e8);
      goto LAB_18005fe0c;
    }
    pcVar11 = "render.load_svg: 256 textures per script at most (load them once, not every frame)";
  }
  else {
    pcVar11 = "render.load_svg: height out of 1..4096";
  }
  puVar14 = auStack_268;
  uVar15 = FUN_180484c10(param_1,pcVar11);
LAB_18005fe0c:
  *(undefined8 *)(puVar14 + -8) = 0x18005fe1b;
  return uVar15;
}



/* ===== 18005fe40 FUN_18005fe40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18005fe40(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [40];
  undefined4 local_108;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_138;
  local_108 = 0;
  piVar7 = (int *)FUN_18047e2c0(param_2,param_3,"wl.texture");
  iVar1 = *piVar7;
  FUN_18047eb70(param_2,0xffffd8f0,"wl_state");
  lVar8 = FUN_18047fd90(param_2,0xffffffff);
  FUN_18047fb50(param_2,0xfffffffe);
  if ((iVar1 < 0) ||
     ((int)(*(longlong *)(lVar8 + 0x158) - *(longlong *)(lVar8 + 0x150) >> 3) * -0x49249249 <= iVar1
     )) {
    FUN_180484c10(param_2,"bad texture");
  }
  lVar4 = *(longlong *)(lVar8 + 0x150);
  uVar9 = FUN_18003a390(local_68,iVar1);
  uVar10 = FUN_18004e4f0(local_88,*(undefined8 *)(lVar8 + 0x148));
  puVar11 = (ulonglong *)FUN_18006b5b0(uVar10,0,&DAT_1806e08c0,4);
  local_e8 = *puVar11;
  uStack_e0 = puVar11[1];
  local_d8 = puVar11[2];
  uStack_d0 = puVar11[3];
  puVar11[2] = 0;
  puVar11[3] = 0xf;
  *(undefined1 *)puVar11 = 0;
  local_108 = 1;
  uVar10 = FUN_180042850(local_a8,&local_e8,&DAT_1806e08bc);
  FUN_180066820(local_c8,uVar10,uVar9);
  FUN_18000f890(local_a8);
  puVar15 = (undefined8 *)0x0;
  local_108 = 0;
  if (uStack_d0 < 0x10) {
LAB_18005ffdf:
    puVar15 = (undefined8 *)((longlong)iVar1 * 0x38 + lVar4);
    local_d8 = 0;
    uStack_d0 = 0xf;
    local_e8 = local_e8 & 0xffffffffffffff00;
    FUN_18000f890(local_88);
    FUN_18000f890(local_68);
    puVar16 = auStack_138;
    if (puVar15[5] != 0) {
      uVar9 = FUN_1800dd940();
      *param_1 = uVar9;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar15 + 6);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)puVar15 + 0x34);
      param_1[2] = 0;
      FUN_18000f890(local_c8);
      puVar16 = auStack_138;
      goto LAB_18006014d;
    }
  }
  else {
    uVar14 = uStack_d0 + 1;
    uVar13 = local_e8;
    if (uVar14 < 0x1000) {
LAB_18005ffda:
      thunk_FUN_1803d64e0(uVar13,uVar14);
      goto LAB_18005ffdf;
    }
    uVar13 = *(ulonglong *)(local_e8 - 8);
    if ((local_e8 - uVar13) - 8 < 0x20) {
      uVar14 = uStack_d0 + 0x28;
      goto LAB_18005ffda;
    }
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar16 = auStack_130;
  }
  if (*(char *)((longlong)puVar15 + 0x23) == '\0') {
    if (*(char *)(puVar15 + 4) == '\0') {
      uVar2 = *(undefined4 *)((longlong)puVar15 + 0x34);
      if (*(char *)((longlong)puVar15 + 0x22) == '\0') {
        uVar3 = *(undefined4 *)(puVar15 + 6);
        if ((ulonglong)puVar15[3] < 0x10) {
          puVar17 = puVar15;
        }
        else {
          puVar17 = (undefined8 *)*puVar15;
        }
        *(undefined4 *)(puVar16 + 0x28) = uVar2;
        *(undefined4 *)(puVar16 + 0x20) = uVar3;
        uVar9 = puVar15[2];
        *(undefined8 *)(puVar16 + -8) = 0x180060133;
        puVar12 = (undefined4 *)FUN_18039ef70(puVar16 + 0x38,local_c8,puVar17,uVar9);
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar6 = puVar12[3];
        *(undefined4 *)param_1 = *puVar12;
        *(undefined4 *)((longlong)param_1 + 4) = uVar2;
        *(undefined4 *)(param_1 + 1) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
        param_1[2] = *(undefined8 *)(puVar12 + 4);
        *(undefined8 *)(puVar16 + -8) = 0x18006014c;
        FUN_18000f890(local_c8);
      }
      else {
        *(undefined8 *)(puVar16 + -8) = 0x1800600eb;
        puVar12 = (undefined4 *)FUN_18007cd20(puVar16 + 0x38,puVar15,uVar2);
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar6 = puVar12[3];
        *(undefined4 *)param_1 = *puVar12;
        *(undefined4 *)((longlong)param_1 + 4) = uVar2;
        *(undefined4 *)(param_1 + 1) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
        param_1[2] = *(undefined8 *)(puVar12 + 4);
        *(undefined8 *)(puVar16 + -8) = 0x180060104;
        FUN_18000f890(local_c8);
      }
    }
    else {
      if ((ulonglong)puVar15[3] < 0x10) {
        puVar17 = puVar15;
      }
      else {
        puVar17 = (undefined8 *)*puVar15;
      }
      uVar2 = *(undefined4 *)((longlong)puVar15 + 0x34);
      *(undefined8 *)(puVar16 + -8) = 0x1800600b6;
      puVar12 = (undefined4 *)FUN_18039ed80(puVar16 + 0x38,local_c8,puVar17,uVar2);
      uVar2 = puVar12[1];
      uVar3 = puVar12[2];
      uVar6 = puVar12[3];
      *(undefined4 *)param_1 = *puVar12;
      *(undefined4 *)((longlong)param_1 + 4) = uVar2;
      *(undefined4 *)(param_1 + 1) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
      param_1[2] = *(undefined8 *)(puVar12 + 4);
      *(undefined8 *)(puVar16 + -8) = 0x1800600cf;
      FUN_18000f890(local_c8);
    }
  }
  else {
    if ((ulonglong)puVar15[3] < 0x10) {
      puVar17 = puVar15;
    }
    else {
      puVar17 = (undefined8 *)*puVar15;
    }
    *(undefined4 *)(puVar16 + 0x20) = *(undefined4 *)((longlong)puVar15 + 0x34);
    uVar2 = *(undefined4 *)(puVar15 + 6);
    *(undefined8 *)(puVar16 + -8) = 0x180060070;
    puVar12 = (undefined4 *)FUN_18039f180(puVar16 + 0x38,local_c8,puVar17,uVar2);
    uVar2 = puVar12[1];
    uVar3 = puVar12[2];
    uVar6 = puVar12[3];
    *(undefined4 *)param_1 = *puVar12;
    *(undefined4 *)((longlong)param_1 + 4) = uVar2;
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
    param_1[2] = *(undefined8 *)(puVar12 + 4);
    *(undefined8 *)(puVar16 + -8) = 0x180060089;
    FUN_18000f890(local_c8);
  }
LAB_18006014d:
  *(undefined8 *)(puVar16 + -8) = 0x18006015c;
  return param_1;
}



/* ===== 180060180 FUN_180060180 ===== */

undefined8 FUN_180060180(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 local_28 [32];
  
  plVar2 = (longlong *)FUN_18005fe40(local_28,param_1,1);
  if (((*plVar2 == 0) || ((int)plVar2[1] < 1)) ||
     (iVar1 = *(int *)((longlong)plVar2 + 0xc), iVar1 < 1)) {
    return 0;
  }
  FUN_18047f3d0(param_1);
  FUN_18047f3d0(param_1,(longlong)iVar1);
  return 2;
}



/* ===== 1800601f0 FUN_1800601f0 ===== */

undefined8 FUN_1800601f0(undefined8 param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_res18;
  float local_res20;
  float local_res24;
  float local_98;
  float local_94;
  undefined8 local_88;
  longlong local_80;
  
  lVar6 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  plVar9 = (longlong *)FUN_18005fe40(&local_88,param_1,1);
  lVar1 = *plVar9;
  if (((lVar1 != 0) && (lVar5 = plVar9[1], 0 < (int)lVar5)) &&
     (iVar7 = *(int *)((longlong)plVar9 + 0xc), 0 < iVar7)) {
    dVar2 = (double)FUN_18047e140(param_1,2);
    fVar10 = (float)dVar2;
    dVar2 = (double)FUN_18047e140(param_1,3);
    fVar11 = (float)dVar2;
    dVar2 = (double)FUN_18047e5f0(param_1,4,(double)(int)lVar5);
    dVar3 = (double)FUN_18047e5f0(param_1,5,(double)iVar7);
    iVar7 = FUN_18047fe10(param_1,6);
    if (iVar7 < 1) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = FUN_180063eb0(param_1,6);
    }
    dVar4 = (double)FUN_18047e5f0(param_1,7,0);
    local_res10 = 0x3f800000;
    local_res14 = 0x3f800000;
    local_res18 = 0;
    local_88 = 0;
    local_res20 = (float)dVar2 + fVar10;
    local_res24 = (float)dVar3 + fVar11;
    local_98 = fVar10;
    local_94 = fVar11;
    local_80 = lVar1;
    if ((float)dVar4 <= 0.0) {
      FUN_1803fea90(lVar6,&local_88,&local_98,&local_res20,&local_res18,&local_res10,uVar8);
    }
    else {
      FUN_1803febc0(lVar6,&local_88,&local_98,&local_res20,&local_res18,&local_res10,uVar8,
                    (float)dVar4);
    }
  }
  return 0;
}



/* ===== 180060410 FUN_180060410 ===== */

undefined8 FUN_180060410(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  short *psVar14;
  int iVar15;
  int *piVar16;
  short sVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_a8 [36];
  
  lVar10 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  dVar6 = (double)FUN_18047e140(param_1,2);
  dVar7 = (double)FUN_18047e140(param_1,1);
  dVar8 = (double)FUN_18047e140(param_1,3);
  fVar21 = (float)dVar8;
  uVar11 = FUN_180063eb0(param_1,4);
  uVar12 = FUN_180063eb0(param_1,5);
  local_a8[2] = 0x100;
  local_a8[0] = 8;
  local_a8[1] = FUN_18047e470(param_1,6,0x30);
  piVar13 = local_a8;
  if (7 < local_a8[1]) {
    piVar13 = local_a8 + 1;
  }
  piVar16 = local_a8 + 2;
  if (local_a8[1] < 0x101) {
    piVar16 = piVar13;
  }
  if (0.0 < fVar21) {
    iVar4 = *piVar16;
    uVar1 = **(undefined4 **)(lVar10 + 0x38);
    uVar2 = (*(undefined4 **)(lVar10 + 0x38))[1];
    FUN_1803fc3a0(lVar10,iVar4 * 3);
    pfVar18 = *(float **)(lVar10 + 0x40);
    sVar3 = *(short *)(lVar10 + 0x34);
    *pfVar18 = (float)dVar7;
    pfVar18[1] = (float)dVar6;
    lVar5 = *(longlong *)(lVar10 + 0x40);
    *(undefined4 *)(lVar5 + 8) = uVar1;
    *(undefined4 *)(lVar5 + 0xc) = uVar2;
    *(undefined4 *)(*(longlong *)(lVar10 + 0x40) + 0x10) = uVar11;
    *(longlong *)(lVar10 + 0x40) = *(longlong *)(lVar10 + 0x40) + 0x14;
    *(int *)(lVar10 + 0x34) = *(int *)(lVar10 + 0x34) + 1;
    fVar9 = DAT_1808ac7d0;
    if (0 < iVar4) {
      iVar15 = 0;
      pfVar18 = *(float **)(lVar10 + 0x40);
      do {
        fVar20 = ((float)iVar15 / (float)iVar4) * fVar9;
        fVar19 = (float)FUN_180517200(fVar20);
        *pfVar18 = fVar19 * fVar21 + (float)dVar7;
        fVar19 = (float)FUN_180517790(fVar20);
        iVar15 = iVar15 + 1;
        pfVar18[1] = fVar19 * fVar21 + (float)dVar6;
        lVar5 = *(longlong *)(lVar10 + 0x40);
        *(undefined4 *)(lVar5 + 8) = uVar1;
        *(undefined4 *)(lVar5 + 0xc) = uVar2;
        *(undefined4 *)(*(longlong *)(lVar10 + 0x40) + 0x10) = uVar12;
        *(int *)(lVar10 + 0x34) = *(int *)(lVar10 + 0x34) + 1;
        pfVar18 = (float *)(*(longlong *)(lVar10 + 0x40) + 0x14);
        *(float **)(lVar10 + 0x40) = pfVar18;
      } while (iVar15 < iVar4);
      sVar17 = sVar3 + 1;
      iVar15 = 0;
      do {
        **(short **)(lVar10 + 0x48) = sVar3;
        psVar14 = (short *)(*(longlong *)(lVar10 + 0x48) + 2);
        *(short **)(lVar10 + 0x48) = psVar14;
        *psVar14 = sVar17 + (short)iVar15;
        psVar14 = (short *)(*(longlong *)(lVar10 + 0x48) + 2);
        iVar15 = iVar15 + 1;
        *(short **)(lVar10 + 0x48) = psVar14;
        *psVar14 = (short)(iVar15 % iVar4) + sVar17;
        *(longlong *)(lVar10 + 0x48) = *(longlong *)(lVar10 + 0x48) + 2;
      } while (iVar15 < iVar4);
    }
  }
  return 0;
}



/* ===== 1800606d0 FUN_1800606d0 ===== */

undefined8 FUN_1800606d0(undefined8 param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  float local_c8 [44];
  
  lVar9 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  dVar3 = (double)FUN_18047e140(param_1,1);
  dVar4 = (double)FUN_18047e140(param_1,2);
  dVar5 = (double)FUN_18047e140(param_1,3);
  dVar6 = (double)FUN_18047e140(param_1,4);
  uVar10 = FUN_180063eb0(param_1,5);
  fVar7 = DAT_1808ac34c;
  local_c8[2] = 64.0;
  local_c8[0] = 1.0;
  dVar2 = (double)FUN_18047e5f0(param_1,6,DAT_1808ac608);
  local_c8[1] = (float)dVar2;
  pfVar12 = local_c8;
  if (fVar7 <= local_c8[1]) {
    pfVar12 = local_c8 + 1;
  }
  pfVar11 = local_c8 + 2;
  if (local_c8[1] <= DAT_1808acab0) {
    pfVar11 = pfVar12;
  }
  fVar1 = *pfVar11;
  dVar2 = (double)FUN_18047e5f0(param_1,7);
  fVar8 = DAT_1808ac5e0;
  iVar13 = (int)fVar1;
  if (0 < iVar13) {
    fVar17 = (float)iVar13;
    do {
      fVar16 = (float)iVar13 / fVar17;
      fVar15 = fVar7 - fVar16;
      iVar14 = (int)(((fVar15 * (float)(uVar10 >> 0x18) * fVar15) / fVar17) * fVar8);
      if (0 < iVar14) {
        fVar16 = fVar16 * fVar1;
        if (0xff < iVar14) {
          iVar14 = 0xff;
        }
        local_res10 = (float)dVar5 + (float)dVar3 + fVar16;
        local_res14 = (float)dVar6 + (float)dVar4 + fVar16;
        local_res18 = (float)dVar3 - fVar16;
        local_res1c = (float)dVar4 - fVar16;
        FUN_1803fe590(lVar9,&local_res18,&local_res10,iVar14 << 0x18 | uVar10 & 0xffffff,
                      fVar16 + (float)dVar2,0);
      }
      iVar13 = iVar13 + -1;
    } while (0 < iVar13);
  }
  return 0;
}



/* ===== 180060990 FUN_180060990 ===== */

undefined8 FUN_180060990(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float *pfVar6;
  longlong *plVar7;
  undefined8 uVar8;
  float local_78 [4];
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  
  if (DAT_180ccfa1c < 1) {
    FUN_180484c10(param_1,"%s works only in createmove, frame_stage and game event callbacks",
                  "trace.line");
  }
  puVar4 = (undefined8 *)FUN_180063d70(&local_68,param_1,1);
  local_48 = *puVar4;
  local_40 = *(undefined4 *)(puVar4 + 1);
  puVar4 = (undefined8 *)FUN_180063d70(&local_68,param_1,2);
  local_58 = *puVar4;
  local_50[0] = *(float *)(puVar4 + 1);
  iVar3 = FUN_18047fe10(param_1,3);
  if (iVar3 < 1) {
    uVar8 = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_18047e2c0(param_1,3,"wl.entity");
    uVar8 = *puVar4;
  }
  local_78[0] = 0.0;
  local_78[1] = 0.0;
  local_78[2] = 0.0;
  local_68 = 0;
  local_60 = 0.0;
  cVar2 = FUN_1802aead0(&local_48,&local_58,uVar8,local_78,&local_68);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar5 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  FUN_18047e8f0(param_1,0,4);
  FUN_18047f270(param_1,cVar2);
  FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e0924);
  uVar1 = *(undefined8 *)(lVar5 + 0x40);
  FUN_18047f6f0(uVar1,0xffffd8f0,*(undefined4 *)(lVar5 + 0x140));
  pfVar6 = local_78;
  if (cVar2 == '\0') {
    pfVar6 = (float *)&local_58;
  }
  FUN_18047f4f0(uVar1,(double)*pfVar6);
  pfVar6 = local_78;
  if (cVar2 == '\0') {
    pfVar6 = (float *)&local_58;
  }
  FUN_18047f4f0(uVar1,(double)pfVar6[1]);
  pfVar6 = local_78 + 2;
  if (cVar2 == '\0') {
    pfVar6 = local_50;
  }
  FUN_18047f4f0(uVar1,(double)*pfVar6);
  FUN_18047e730(uVar1,3,1);
  FUN_18047f8e0(param_1,0xfffffffe,"position");
  uVar1 = *(undefined8 *)(lVar5 + 0x40);
  FUN_18047f6f0(uVar1,0xffffd8f0,*(undefined4 *)(lVar5 + 0x140));
  FUN_18047f4f0(uVar1,(double)(float)local_68);
  FUN_18047f4f0(uVar1,(double)local_68._4_4_);
  FUN_18047f4f0(uVar1,(double)local_60);
  FUN_18047e730(uVar1,3,1);
  FUN_18047f8e0(param_1,0xfffffffe,"normal");
  lVar5 = FUN_1802af2c0(&local_48,&local_58,uVar8);
  if (lVar5 == 0) {
    FUN_18047f4d0();
  }
  else {
    plVar7 = (longlong *)FUN_18047efb0(param_1,8);
    *plVar7 = lVar5;
    FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
    FUN_18047f990(param_1,0xfffffffe);
  }
  FUN_18047f8e0(param_1,0xfffffffe,"entity");
  return 1;
}



/* ===== 180060c50 FUN_180060c50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180060c50(undefined8 param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [48];
  
  if (DAT_180ccfa1c < 1) {
    FUN_180484c10(param_1,"%s works only in createmove, frame_stage and game event callbacks",
                  "trace.hull");
  }
  puVar4 = (undefined8 *)FUN_180063d70(&local_c8,param_1,1);
  local_60 = *puVar4;
  local_58 = *(undefined4 *)(puVar4 + 1);
  puVar4 = (undefined8 *)FUN_180063d70(&local_c8,param_1,2);
  local_70 = *puVar4;
  local_68 = *(undefined4 *)(puVar4 + 1);
  puVar4 = (undefined8 *)FUN_180063d70(&local_b8,param_1,3);
  local_c8 = *puVar4;
  local_c0 = *(undefined4 *)(puVar4 + 1);
  puVar4 = (undefined8 *)FUN_180063d70(local_50,param_1,4);
  fVar1 = DAT_1808ac34c;
  local_88 = 0;
  local_80 = 0;
  local_b8 = *puVar4;
  local_b0 = *(undefined4 *)(puVar4 + 1);
  local_a8 = _DAT_1808ad2c0;
  uStack_a0 = _UNK_1808ad2c8;
  local_7c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0x3f800000;
  iVar3 = FUN_18047fe10(param_1,5);
  if (iVar3 < 1) {
    uVar7 = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_18047e2c0(param_1,5,"wl.entity");
    uVar7 = *puVar4;
  }
  cVar2 = FUN_1802aed00(&local_60,&local_70,&local_c8,&local_b8,uVar7,0x1c1003,4,7,&local_a8,0);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar5 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  FUN_18047e8f0(param_1,0,6);
  if ((cVar2 == '\0') || (fVar1 <= (float)local_a8)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  FUN_18047f270(param_1,uVar7);
  FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e0924);
  FUN_18047f4f0(param_1,(double)(float)local_a8);
  FUN_18047f8e0(param_1,0xfffffffe,"fraction");
  uVar7 = *(undefined8 *)(lVar5 + 0x40);
  FUN_18047f6f0(uVar7,0xffffd8f0,*(undefined4 *)(lVar5 + 0x140));
  FUN_18047f4f0(uVar7,(double)local_a8._4_4_);
  FUN_18047f4f0(uVar7,(double)(float)uStack_a0);
  FUN_18047f4f0(uVar7,(double)uStack_a0._4_4_);
  FUN_18047e730(uVar7,3,1);
  FUN_18047f8e0(param_1,0xfffffffe,"position");
  uVar7 = *(undefined8 *)(lVar5 + 0x40);
  FUN_18047f6f0(uVar7,0xffffd8f0,*(undefined4 *)(lVar5 + 0x140));
  FUN_18047f4f0(uVar7,(double)(float)local_98);
  FUN_18047f4f0(uVar7,(double)local_98._4_4_);
  FUN_18047f4f0(uVar7,(double)(float)uStack_90);
  FUN_18047e730(uVar7,3,1);
  FUN_18047f8e0(param_1,0xfffffffe,"normal");
  lVar5 = local_88;
  if (local_88 == 0) {
    FUN_18047f4d0();
  }
  else {
    plVar6 = (longlong *)FUN_18047efb0(param_1,8);
    *plVar6 = lVar5;
    FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
    FUN_18047f990(param_1,0xfffffffe);
  }
  FUN_18047f8e0(param_1,0xfffffffe,"entity");
  FUN_18047f270(param_1,local_7c._1_1_);
  FUN_18047f8e0(param_1,0xfffffffe,"start_solid");
  return 1;
}



/* ===== 180060fc0 FUN_180060fc0 ===== */

undefined8 FUN_180060fc0(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  float fVar5;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (DAT_180ccfa1c < 1) {
    FUN_180484c10(param_1,"%s works only in createmove, frame_stage and game event callbacks",
                  "trace.damage");
  }
  puVar4 = (undefined8 *)FUN_18047e2c0(param_1,1,"wl.entity");
  local_res18 = *puVar4;
  puVar4 = (undefined8 *)FUN_180063d70(local_48,param_1,2);
  local_58 = *puVar4;
  local_50 = *(undefined4 *)(puVar4 + 1);
  uVar2 = FUN_18047e470(param_1,3,1);
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    DAT_181108a00 = local_res10;
    DAT_1811089f8 = FUN_1803a0c50(&local_res10);
    DAT_180cd1304 = '\x01';
  }
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if ((((((DAT_1811089f8 != 0) && (DAT_180961f40 != 0)) && (DAT_180961f48 != 0)) &&
       ((DAT_180961f50 != 0 && (DAT_180961f60 != 0)))) &&
      ((DAT_180961f68 != 0 && ((DAT_180cfee68 != 0 && (DAT_180cfee80 != 0)))))) &&
     (DAT_1809619a0 != 0)) {
    local_res10 = DAT_1811089f8;
    cVar1 = FUN_1802ae4f0(&local_res10,&local_28);
    if (cVar1 != '\0') {
      iVar3 = FUN_18047fe10(param_1,4);
      if (iVar3 < 1) {
        puVar4 = (undefined8 *)FUN_1802ae9b0(local_48,&local_res10);
      }
      else {
        puVar4 = (undefined8 *)FUN_180063d70(local_38,param_1,4);
      }
      local_68 = *puVar4;
      local_60 = *(undefined4 *)(puVar4 + 1);
      fVar5 = (float)FUN_1802af5a0(&local_res10,&local_28,&local_68,&local_58,&local_res18,uVar2);
      FUN_18047f4f0(param_1,(double)fVar5);
      return 1;
    }
  }
  return 0;
}



/* ===== 1800611b0 FUN_1800611b0 ===== */

undefined8 FUN_1800611b0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.view");
  lVar1 = *plVar2;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa80)) {
    FUN_180484c10(param_1,"the view is only valid inside its override_view callback");
  }
  fVar3 = (float)FUN_18000f3d0(lVar1 + 0x498);
  FUN_18047f4f0(param_1,(double)fVar3);
  return 1;
}



/* ===== 180061220 FUN_180061220 ===== */

undefined8 FUN_180061220(undefined8 param_1)

{
  longlong lVar1;
  float fVar2;
  float *pfVar3;
  longlong *plVar4;
  float *pfVar5;
  double dVar6;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  
  fVar2 = DAT_1808ac34c;
  local_res20[0] = 179.0;
  local_res10[0] = 1.0;
  dVar6 = (double)FUN_18047e140(param_1,2);
  local_res18[0] = (float)dVar6;
  pfVar3 = local_res10;
  if (fVar2 <= local_res18[0]) {
    pfVar3 = local_res18;
  }
  pfVar5 = local_res20;
  if (local_res18[0] <= DAT_1808acb50) {
    pfVar5 = pfVar3;
  }
  plVar4 = (longlong *)FUN_18047e2c0(param_1,1,"wl.view");
  lVar1 = *plVar4;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa80)) {
    FUN_180484c10(param_1,"the view is only valid inside its override_view callback");
  }
  FUN_180013280(lVar1 + 0x498,pfVar5);
  return 0;
}



/* ===== 1800612e0 FUN_1800612e0 ===== */

undefined8 FUN_1800612e0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.view");
  lVar1 = *plVar2;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa80)) {
    FUN_180484c10(param_1,"the view is only valid inside its override_view callback");
  }
  fVar3 = (float)FUN_18000f3d0(lVar1 + 0x49c);
  FUN_18047f4f0(param_1,(double)fVar3);
  return 1;
}



/* ===== 180061350 FUN_180061350 ===== */

undefined8 FUN_180061350(undefined8 param_1)

{
  longlong lVar1;
  float fVar2;
  float *pfVar3;
  longlong *plVar4;
  float *pfVar5;
  double dVar6;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  
  fVar2 = DAT_1808ac34c;
  local_res20[0] = 179.0;
  local_res10[0] = 1.0;
  dVar6 = (double)FUN_18047e140(param_1,2);
  local_res18[0] = (float)dVar6;
  pfVar3 = local_res10;
  if (fVar2 <= local_res18[0]) {
    pfVar3 = local_res18;
  }
  pfVar5 = local_res20;
  if (local_res18[0] <= DAT_1808acb50) {
    pfVar5 = pfVar3;
  }
  plVar4 = (longlong *)FUN_18047e2c0(param_1,1,"wl.view");
  lVar1 = *plVar4;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa80)) {
    FUN_180484c10(param_1,"the view is only valid inside its override_view callback");
  }
  FUN_180013280(lVar1 + 0x49c,pfVar5);
  return 0;
}



/* ===== 180061410 FUN_180061410 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180061410(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  longlong local_90 [4];
  undefined8 ***local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98 = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0xf;
  local_70 = (undefined8 ***)0x0;
  uVar5 = 1;
  uVar2 = FUN_18047e090(0,1,0);
  FUN_180013350(local_48,uVar2);
  cVar1 = FUN_1800fbc20(local_48,&local_b8);
  FUN_18000f890(local_48);
  if (cVar1 == '\0') {
LAB_180061615:
    uVar5 = 0;
  }
  else {
    switch(local_b8) {
    case 1:
      FUN_18047f270(param_1,local_b4);
      break;
    case 2:
      FUN_18047f3d0(param_1,(longlong)(int)local_b0);
      break;
    case 3:
      FUN_18047f4f0(param_1,SUB84((double)local_b0._4_4_,0));
      break;
    case 4:
      FUN_18047e8f0(param_1,lStack_a0 - local_a8 >> 2,0);
      uVar4 = 0;
      if (lStack_a0 - local_a8 >> 2 != 0) {
        do {
          FUN_18047f4f0(param_1,SUB84((double)*(float *)(local_a8 + uVar4 * 4),0));
          FUN_18047f7e0(param_1,0xfffffffe,(int)uVar4 + 1);
          uVar4 = uVar4 + 1;
        } while (uVar4 < (ulonglong)(lStack_a0 - local_a8 >> 2));
      }
      break;
    case 5:
      FUN_18047e8f0(param_1,local_90[3] & 0xffffffff,0);
      uVar4 = 0;
      if (local_90[3] != 0) {
        do {
          FUN_18047f270(param_1,(*(uint *)(local_90[0] + (uVar4 >> 5) * 4) >> ((byte)uVar4 & 0x1f) &
                                1) != 0);
          FUN_18047f7e0(param_1,0xfffffffe,(int)uVar4 + 1);
          uVar4 = uVar4 + 1;
        } while (uVar4 < (ulonglong)local_90[3]);
      }
      break;
    case 6:
      pppuVar3 = &local_70;
      if (0xf < local_58) {
        pppuVar3 = local_70;
      }
      FUN_18047f530(param_1,pppuVar3);
      break;
    default:
      goto LAB_180061615;
    }
  }
  FUN_18000f890(&local_70);
  local_c8 = local_90;
  FUN_180068f30(local_90);
  FUN_180068f30(&local_a8);
  return uVar5;
}



/* ===== 180061680 FUN_180061680 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180061680(undefined8 param_1)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *_Str;
  size_t sVar6;
  int iVar7;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  undefined8 *local_110;
  undefined1 *local_108;
  undefined8 local_100;
  int *local_f8;
  undefined2 local_f0;
  int local_e8;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_138;
  uVar3 = 1;
  uVar5 = FUN_18047e090(param_1,1,0);
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0xf;
  local_a0 = 0;
  iVar2 = FUN_18047fe10(param_1,2);
  if (iVar2 == 1) {
    local_e8 = 1;
    iVar2 = FUN_18047fbf0(param_1,2);
    local_e4 = iVar2 != 0;
  }
  else if (iVar2 == 3) {
    dVar1 = (double)FUN_18047fd30(param_1,2);
    local_e8 = 3;
    local_e0 = CONCAT44((float)dVar1,(undefined4)local_e0);
  }
  else if (iVar2 == 4) {
    local_e8 = 6;
    _Str = (char *)FUN_18047fc70(param_1,2,0);
    sVar6 = strlen(_Str);
    FUN_180029840(&local_a0,_Str,sVar6);
  }
  else {
    if (iVar2 != 5) {
      uVar3 = FUN_180484c10(param_1,"config.set: a boolean, number, string or list is needed");
      goto LAB_180061906;
    }
    iVar2 = FUN_18047f0e0(param_1,2);
    FUN_18047f6f0(param_1,2,1);
    iVar4 = FUN_18047fe10(param_1,0xffffffff);
    FUN_18047fb50(param_1,0xfffffffe);
    local_e8 = (iVar4 == 1) + 4;
    if (0 < iVar2) {
      iVar7 = 1;
      if (iVar4 == 1) {
        do {
          FUN_18047f6f0(param_1,2,iVar7);
          iVar4 = FUN_18047fbf0(param_1,0xffffffff);
          local_118[0] = iVar4 != 0;
          FUN_1800670b0(&local_c0,local_118);
          FUN_18047fb50(param_1,0xfffffffe);
          iVar7 = iVar7 + 1;
        } while (iVar7 <= iVar2);
      }
      else {
        iVar4 = 1;
        do {
          FUN_18047f6f0(param_1,2,iVar4);
          dVar1 = (double)FUN_18047fd30(param_1,0xffffffff);
          local_110 = (undefined8 *)CONCAT44(local_110._4_4_,(float)dVar1);
          FUN_180066e60(&local_d8,&local_110);
          FUN_18047fb50(param_1,0xfffffffe);
          iVar4 = iVar4 + 1;
        } while (iVar4 <= iVar2);
      }
    }
  }
  FUN_180013350(local_78,uVar5);
  local_108 = local_78;
  local_100 = 0;
  local_f0 = 0;
  local_f8 = &local_e8;
  FUN_180107040(&local_108,&DAT_18091a190);
  FUN_18047f270(param_1,local_f0._1_1_);
  FUN_18000f890(local_78);
LAB_180061906:
  FUN_18000f890(&local_a0);
  local_110 = &local_c0;
  FUN_180068f30(&local_c0);
  FUN_180068f30(&local_d8);
  return uVar3;
}



/* ===== 180061950 FUN_180061950 ===== */

undefined8 FUN_180061950(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  char *_Str;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *local_58;
  undefined8 *local_50;
  
  _Str = (char *)FUN_18047e510(param_1,1,&DAT_18058b643,0);
  sVar3 = strlen(_Str);
  FUN_18047e8f0(param_1,0,0);
  FUN_1800fbf90(&local_58);
  iVar1 = 1;
  for (puVar5 = local_58; puVar5 != local_50; puVar5 = puVar5 + 4) {
    if ((sVar3 == 0) || (iVar2 = FUN_180067470(puVar5,0,sVar3,_Str), iVar6 = iVar1, iVar2 == 0)) {
      if ((ulonglong)puVar5[3] < 0x10) {
        puVar4 = puVar5;
      }
      else {
        puVar4 = (undefined8 *)*puVar5;
      }
      FUN_18047f530(param_1,puVar4);
      iVar6 = iVar1 + 1;
      FUN_18047f7e0(param_1,0xfffffffe,iVar1);
    }
    iVar1 = iVar6;
  }
  FUN_1800288b0(&local_58);
  return 1;
}



/* ===== 180061a20 FUN_180061a20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180061a20(undefined8 param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char cVar14;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 ****local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  local_80 = param_1;
  lVar5 = FUN_18047e090(param_1,1,&local_a8);
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_78 = (undefined8 ****)0x0;
  local_88 = lVar5;
  FUN_180067510(&local_78);
  local_a0 = 0;
  puVar10 = auStack_c8;
  if (local_a8 != 0) {
    while( true ) {
      uVar4 = local_60;
      uVar9 = local_68;
      local_98 = local_a0 + 1;
      if (local_98 < local_a8) {
        uVar8 = (ulonglong)*(byte *)(local_a0 + 1 + lVar5) << 8;
      }
      else {
        uVar8 = 0;
      }
      local_90 = local_a0 + 2;
      if (local_90 < local_a8) {
        uVar13 = (ulonglong)*(byte *)(local_a0 + 2 + lVar5);
      }
      else {
        uVar13 = 0;
      }
      uVar8 = (ulonglong)*(byte *)(local_a0 + lVar5) << 0x10 | uVar8;
      uVar13 = uVar8 | uVar13;
      cVar14 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [*(byte *)(local_a0 + lVar5) >> 2];
      if (local_60 <= local_68) break;
      ppppuVar6 = &local_78;
      if (0xf < local_60) {
        ppppuVar6 = local_78;
      }
      pcVar1 = (char *)((longlong)ppppuVar6 + local_68);
      local_68 = local_68 + 1;
      *pcVar1 = cVar14;
      *(undefined1 *)((longlong)ppppuVar6 + uVar9 + 1) = 0;
LAB_180061c34:
      uVar4 = local_60;
      uVar9 = local_68;
      cVar14 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(uint)(uVar8 >> 0xc) & 0x3f];
      if (local_68 < local_60) {
        ppppuVar6 = &local_78;
        if (0xf < local_60) {
          ppppuVar6 = local_78;
        }
        pcVar1 = (char *)((longlong)ppppuVar6 + local_68);
        local_68 = local_68 + 1;
        *pcVar1 = cVar14;
        *(undefined1 *)((longlong)ppppuVar6 + uVar9 + 1) = 0;
      }
      else {
        puVar10 = auStack_c8;
        if (local_68 == 0x7fffffffffffffff) goto LAB_18006203c;
        uVar8 = local_68 + 1;
        uVar12 = uVar8 | 0xf;
        if (uVar12 < 0x8000000000000000) {
          if (0x7fffffffffffffff - (local_60 >> 1) < local_60) {
            uVar12 = 0x7fffffffffffffff;
          }
          else {
            uVar11 = (local_60 >> 1) + local_60;
            if (uVar12 < uVar11) {
              uVar12 = uVar11;
            }
          }
        }
        else {
          uVar12 = 0x7fffffffffffffff;
        }
        ppppuVar7 = (undefined8 ****)FUN_18000fb70(uVar12 + 1);
        ppppuVar6 = local_78;
        local_68 = uVar8;
        local_60 = uVar12;
        if (uVar4 < 0x10) {
          FUN_180540530(ppppuVar7,&local_78,uVar9);
          *(char *)((longlong)ppppuVar7 + uVar9) = cVar14;
          *(undefined1 *)((longlong)ppppuVar7 + uVar9 + 1) = 0;
        }
        else {
          FUN_180540530(ppppuVar7,local_78,uVar9);
          *(char *)((longlong)ppppuVar7 + uVar9) = cVar14;
          *(undefined1 *)((longlong)ppppuVar7 + uVar9 + 1) = 0;
          if (uVar4 + 1 < 0x1000) {
            thunk_FUN_1803d64e0(ppppuVar6);
          }
          else {
            if (0x1f < (ulonglong)((longlong)ppppuVar6 + (-8 - (longlong)ppppuVar6[-1])))
            goto LAB_180061fa2;
            thunk_FUN_1803d64e0(ppppuVar6[-1],uVar4 + 0x28);
          }
        }
        local_78 = ppppuVar7;
      }
      uVar4 = local_60;
      uVar9 = local_68;
      if (local_98 < local_a8) {
        cVar14 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(uint)(uVar13 >> 6) & 0x3f];
      }
      else {
        cVar14 = '=';
      }
      if (local_68 < local_60) {
        ppppuVar6 = &local_78;
        if (0xf < local_60) {
          ppppuVar6 = local_78;
        }
        pcVar1 = (char *)((longlong)ppppuVar6 + local_68);
        local_68 = local_68 + 1;
        *pcVar1 = cVar14;
        *(undefined1 *)((longlong)ppppuVar6 + uVar9 + 1) = 0;
      }
      else {
        puVar10 = auStack_c8;
        if (local_68 == 0x7fffffffffffffff) goto LAB_18006203c;
        uVar8 = local_68 + 1;
        uVar12 = uVar8 | 0xf;
        if (uVar12 < 0x8000000000000000) {
          if (0x7fffffffffffffff - (local_60 >> 1) < local_60) {
            uVar12 = 0x7fffffffffffffff;
          }
          else {
            uVar11 = (local_60 >> 1) + local_60;
            if (uVar12 < uVar11) {
              uVar12 = uVar11;
            }
          }
        }
        else {
          uVar12 = 0x7fffffffffffffff;
        }
        ppppuVar7 = (undefined8 ****)FUN_18000fb70(uVar12 + 1);
        ppppuVar6 = local_78;
        local_68 = uVar8;
        local_60 = uVar12;
        if (uVar4 < 0x10) {
          FUN_180540530(ppppuVar7,&local_78,uVar9);
          *(char *)((longlong)ppppuVar7 + uVar9) = cVar14;
          *(undefined1 *)((longlong)ppppuVar7 + uVar9 + 1) = 0;
        }
        else {
          FUN_180540530(ppppuVar7,local_78,uVar9);
          *(char *)((longlong)ppppuVar7 + uVar9) = cVar14;
          *(undefined1 *)((longlong)ppppuVar7 + uVar9 + 1) = 0;
          if (uVar4 + 1 < 0x1000) {
            thunk_FUN_1803d64e0(ppppuVar6);
          }
          else {
            if (0x1f < (ulonglong)((longlong)ppppuVar6 + (-8 - (longlong)ppppuVar6[-1])))
            goto LAB_180061fa2;
            thunk_FUN_1803d64e0(ppppuVar6[-1],uVar4 + 0x28);
          }
        }
        local_78 = ppppuVar7;
      }
      uVar4 = local_60;
      uVar9 = local_68;
      if (local_90 < local_a8) {
        cVar14 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(uint)uVar13 & 0x3f];
      }
      else {
        cVar14 = '=';
      }
      if (local_68 < local_60) {
        ppppuVar6 = &local_78;
        if (0xf < local_60) {
          ppppuVar6 = local_78;
        }
        pcVar1 = (char *)((longlong)ppppuVar6 + local_68);
        local_68 = local_68 + 1;
        *pcVar1 = cVar14;
        *(undefined1 *)((longlong)ppppuVar6 + uVar9 + 1) = 0;
      }
      else {
        puVar10 = auStack_c8;
        if (local_68 == 0x7fffffffffffffff) goto LAB_18006203c;
        uVar8 = local_68 + 1;
        uVar13 = uVar8 | 0xf;
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
        ppppuVar7 = (undefined8 ****)FUN_18000fb70(uVar13 + 1);
        ppppuVar6 = local_78;
        local_68 = uVar8;
        local_60 = uVar13;
        if (uVar4 < 0x10) {
          FUN_180540530(ppppuVar7,&local_78,uVar9);
          *(char *)((longlong)ppppuVar7 + uVar9) = cVar14;
          *(undefined1 *)((longlong)ppppuVar7 + uVar9 + 1) = 0;
        }
        else {
          FUN_180540530(ppppuVar7,local_78,uVar9);
          *(char *)((longlong)ppppuVar7 + uVar9) = cVar14;
          *(undefined1 *)((longlong)ppppuVar7 + uVar9 + 1) = 0;
          if (uVar4 + 1 < 0x1000) {
            thunk_FUN_1803d64e0(ppppuVar6);
          }
          else {
            if (0x1f < (ulonglong)((longlong)ppppuVar6 + (-8 - (longlong)ppppuVar6[-1])))
            goto LAB_180061fa2;
            thunk_FUN_1803d64e0(ppppuVar6[-1],uVar4 + 0x28);
          }
        }
        local_78 = ppppuVar7;
      }
      local_a0 = local_a0 + 3;
      puVar10 = auStack_c8;
      if (local_a8 <= local_a0) goto LAB_180061fa9;
      lVar5 = local_88;
    }
    puVar10 = auStack_c8;
    if (local_68 == 0x7fffffffffffffff) goto LAB_18006203c;
    uVar12 = local_68 + 1;
    uVar11 = uVar12 | 0xf;
    if (uVar11 < 0x8000000000000000) {
      if (0x7fffffffffffffff - (local_60 >> 1) < local_60) {
        uVar11 = 0x7fffffffffffffff;
      }
      else {
        uVar2 = (local_60 >> 1) + local_60;
        if (uVar11 < uVar2) {
          uVar11 = uVar2;
        }
      }
    }
    else {
      uVar11 = 0x7fffffffffffffff;
    }
    ppppuVar7 = (undefined8 ****)FUN_18000fb70(uVar11 + 1);
    ppppuVar6 = local_78;
    local_68 = uVar12;
    local_60 = uVar11;
    if (uVar4 < 0x10) {
      FUN_180540530(ppppuVar7,&local_78,uVar9);
      *(char *)((longlong)ppppuVar7 + uVar9) = cVar14;
      *(undefined1 *)((longlong)ppppuVar7 + uVar9 + 1) = 0;
LAB_180061c1f:
      local_78 = ppppuVar7;
      goto LAB_180061c34;
    }
    FUN_180540530(ppppuVar7,local_78,uVar9);
    *(char *)((longlong)ppppuVar7 + uVar9) = cVar14;
    *(undefined1 *)((longlong)ppppuVar7 + uVar9 + 1) = 0;
    if (uVar4 + 1 < 0x1000) {
      thunk_FUN_1803d64e0(ppppuVar6);
      goto LAB_180061c1f;
    }
    if ((ulonglong)((longlong)ppppuVar6 + (-8 - (longlong)ppppuVar6[-1])) < 0x20) {
      thunk_FUN_1803d64e0(ppppuVar6[-1],uVar4 + 0x28);
      goto LAB_180061c1f;
    }
LAB_180061fa2:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar10 = auStack_c0;
  }
LAB_180061fa9:
  ppppuVar6 = &local_78;
  if (0xf < local_60) {
    ppppuVar6 = local_78;
  }
  *(undefined8 *)(puVar10 + -8) = 0x180061fc4;
  FUN_18047f450(local_80,ppppuVar6,local_68);
  if (0xf < local_60) {
    uVar9 = local_60 + 1;
    ppppuVar6 = local_78;
    if (0xfff < uVar9) {
      ppppuVar6 = (undefined8 ****)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar6))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar10 = puVar10 + 8;
LAB_18006203c:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar10 + -8) = &UNK_180062041;
        FUN_180011990();
      }
      uVar9 = local_60 + 0x28;
    }
    *(undefined8 *)(puVar10 + -8) = 0x180061ffc;
    thunk_FUN_1803d64e0(ppppuVar6,uVar9);
  }
  *(undefined8 *)(puVar10 + -8) = 0x180062021;
  return 1;
}



/* ===== 180062050 FUN_180062050 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180062050(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  code *pcVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 uVar18;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  int local_98;
  uint local_94;
  ulonglong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 ****local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  local_88 = param_1;
  local_80 = FUN_18047e090(param_1,1,&local_90);
  puVar13 = auStack_b8;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_78 = (undefined8 ****)0x0;
  uVar14 = 0;
  iVar15 = 0;
  uVar17 = 0;
  if (local_90 != 0) {
    do {
      bVar3 = *(byte *)(uVar17 + local_80);
      if (bVar3 < 0x3e) {
        iVar6 = iVar15;
        if ((0x2000000100002400U >> ((longlong)(char)bVar3 & 0x3fU) & 1) == 0) goto LAB_1800620f6;
      }
      else {
LAB_1800620f6:
        lVar8 = FUN_1804ef420("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",
                              (longlong)(char)bVar3 & 0xffffffff);
        uVar5 = local_60;
        uVar11 = local_68;
        puVar12 = auStack_b8;
        if ((lVar8 == 0) || (puVar12 = auStack_b8, bVar3 == 0)) {
LAB_18006226e:
          *(undefined8 *)(puVar12 + -8) = 0x18006227e;
          uVar7 = FUN_180484c10(local_88,"utils.base64_decode: bad character");
          goto LAB_1800622a6;
        }
        local_94 = (int)lVar8 + 0x7fa63c00U | uVar14 << 6;
        uVar14 = local_94;
        iVar6 = iVar15 + 6;
        if (7 < iVar15 + 6) {
          local_98 = iVar15 + -2;
          uVar18 = (undefined1)(local_94 >> ((byte)local_98 & 0x1f));
          if (local_68 < local_60) {
            ppppuVar9 = &local_78;
            if (0xf < local_60) {
              ppppuVar9 = local_78;
            }
            puVar12 = (undefined1 *)((longlong)ppppuVar9 + local_68);
            local_68 = local_68 + 1;
            *puVar12 = uVar18;
            *(undefined1 *)((longlong)ppppuVar9 + uVar11 + 1) = 0;
            iVar6 = local_98;
          }
          else {
            if (local_68 == 0x7fffffffffffffff) goto LAB_180062317;
            uVar1 = local_68 + 1;
            uVar16 = uVar1 | 0xf;
            if (uVar16 < 0x8000000000000000) {
              if (0x7fffffffffffffff - (local_60 >> 1) < local_60) {
                uVar16 = 0x7fffffffffffffff;
              }
              else {
                uVar2 = (local_60 >> 1) + local_60;
                if (uVar16 < uVar2) {
                  uVar16 = uVar2;
                }
              }
            }
            else {
              uVar16 = 0x7fffffffffffffff;
            }
            ppppuVar10 = (undefined8 ****)FUN_18000fb70(uVar16 + 1);
            ppppuVar9 = local_78;
            local_68 = uVar1;
            local_60 = uVar16;
            if (uVar5 < 0x10) {
              FUN_180540530(ppppuVar10,&local_78,uVar11);
              *(undefined1 *)((longlong)ppppuVar10 + uVar11) = uVar18;
              *(undefined1 *)((longlong)ppppuVar10 + uVar11 + 1) = 0;
              uVar14 = local_94;
              iVar6 = local_98;
              local_78 = ppppuVar10;
            }
            else {
              FUN_180540530(ppppuVar10,local_78,uVar11);
              *(undefined1 *)((longlong)ppppuVar10 + uVar11) = uVar18;
              *(undefined1 *)((longlong)ppppuVar10 + uVar11 + 1) = 0;
              uVar11 = uVar5 + 1;
              if (0xfff < uVar11) {
                if (0x1f < (ulonglong)((longlong)ppppuVar9 + (-8 - (longlong)ppppuVar9[-1]))) {
                  pcVar4 = (code *)swi(0x29);
                  (*pcVar4)(5);
                  puVar12 = auStack_b0;
                  goto LAB_18006226e;
                }
                uVar11 = uVar5 + 0x28;
                ppppuVar9 = (undefined8 ****)ppppuVar9[-1];
              }
              thunk_FUN_1803d64e0(ppppuVar9,uVar11);
              uVar14 = local_94;
              iVar6 = local_98;
              local_78 = ppppuVar10;
            }
          }
        }
      }
      iVar15 = iVar6;
      uVar17 = uVar17 + 1;
    } while (uVar17 < local_90);
    param_1 = local_88;
  }
  uVar7 = 1;
  ppppuVar9 = &local_78;
  if (0xf < local_60) {
    ppppuVar9 = local_78;
  }
  FUN_18047f450(param_1,ppppuVar9,local_68);
  puVar12 = auStack_b8;
LAB_1800622a6:
  if (0xf < local_60) {
    uVar17 = local_60 + 1;
    ppppuVar9 = local_78;
    if (0xfff < uVar17) {
      ppppuVar9 = (undefined8 ****)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar9))) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar13 = puVar12 + 8;
LAB_180062317:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar13 + -8) = &UNK_18006231c;
        FUN_180011990();
      }
      uVar17 = local_60 + 0x28;
    }
    *(undefined8 *)(puVar12 + -8) = 0x1800622dd;
    thunk_FUN_1803d64e0(ppppuVar9,uVar17);
  }
  *(undefined8 *)(puVar12 + -8) = 0x1800622ff;
  return uVar7;
}



/* ===== 180062320 FUN_180062320 ===== */

undefined8 FUN_180062320(undefined8 param_1)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong local_res10 [3];
  
  local_res10[0] = 0;
  lVar2 = FUN_18047e090(param_1,1,local_res10);
  uVar3 = 0;
  uVar4 = 0x811c9dc5;
  if (local_res10[0] != 0) {
    do {
      pbVar1 = (byte *)(uVar3 + lVar2);
      uVar3 = uVar3 + 1;
      uVar4 = (*pbVar1 ^ uVar4) * 0x1000193;
    } while (uVar3 < local_res10[0]);
  }
  FUN_18047f4f0(param_1,(double)uVar4);
  return 1;
}



/* ===== 180062390 FUN_180062390 ===== */

/* WARNING: Removing unreachable block (ram,0x0001800623e6) */
/* WARNING: Removing unreachable block (ram,0x0001800623f0) */
/* WARNING: Removing unreachable block (ram,0x000180062458) */
/* WARNING: Removing unreachable block (ram,0x000180062464) */
/* WARNING: Removing unreachable block (ram,0x000180062470) */

undefined8 FUN_180062390(undefined8 param_1)

{
  uint uVar1;
  double dVar2;
  
  FUN_18047e090(param_1,1);
  dVar2 = (double)FUN_18047e5f0(param_1,2,DAT_1808ac990);
  uVar1 = ((uint)(longlong)dVar2 >> 0xd ^ (uint)(longlong)dVar2) * 0x5bd1e995;
  FUN_18047f4f0(param_1,(double)(uVar1 >> 0xf ^ uVar1));
  return 1;
}



/* ===== 1800624c0 FUN_1800624c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1800624c0(undefined8 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  BOOL BVar3;
  int cbMultiByte;
  longlong lVar4;
  HANDLE hMem;
  LPCWSTR lpWideCharStr;
  LPSTR ***ppppCVar5;
  ulonglong uVar6;
  undefined1 auStackY_a8 [32];
  LPSTR ***local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStackY_a8;
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar4 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  if (*(char *)(lVar4 + 0x4b) == '\0') {
    uVar2 = FUN_180484c10(param_1,
                          "%s needs \"allow insecure\" (lua page) and the script loaded again",
                          "utils.clipboard_get");
  }
  else {
    BVar3 = OpenClipboard((HWND)0x0);
    uVar2 = 0;
    if (BVar3 != 0) {
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0xf;
      local_68 = (LPSTR ***)0x0;
      hMem = GetClipboardData(0xd);
      if (hMem != (HANDLE)0x0) {
        lpWideCharStr = GlobalLock(hMem);
        if (lpWideCharStr != (LPCWSTR)0x0) {
          cbMultiByte = WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                            (LPBOOL)0x0);
          if (1 < cbMultiByte) {
            uVar6 = (longlong)cbMultiByte - 1;
            if (local_58 < uVar6) {
              FUN_180028a50(&local_68,uVar6 - local_58,0);
            }
            else {
              ppppCVar5 = (LPSTR ***)&local_68;
              if (0xf < local_50) {
                ppppCVar5 = local_68;
              }
              local_58 = uVar6;
              *(CHAR *)((longlong)ppppCVar5 + uVar6) = '\0';
            }
            ppppCVar5 = (LPSTR ***)&local_68;
            if (0xf < local_50) {
              ppppCVar5 = local_68;
            }
            WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)ppppCVar5,cbMultiByte,(LPCSTR)0x0,
                                (LPBOOL)0x0);
          }
          GlobalUnlock(hMem);
        }
      }
      CloseClipboard();
      ppppCVar5 = (LPSTR ***)&local_68;
      if (0xf < local_50) {
        ppppCVar5 = local_68;
      }
      FUN_18047f450(param_1,ppppCVar5,local_58);
      if (0xf < local_50) {
        uVar6 = local_50 + 1;
        ppppCVar5 = local_68;
        if (0xfff < uVar6) {
          ppppCVar5 = (LPSTR ***)local_68[-1];
          if ((LPSTR)0x1f < (LPSTR)((longlong)local_68 + (-8 - (longlong)ppppCVar5))) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            uVar2 = (*pcVar1)();
            return uVar2;
          }
          uVar6 = local_50 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppCVar5,uVar6);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== 1800626d0 FUN_1800626d0 ===== */

undefined8 FUN_1800626d0(undefined8 param_1)

{
  bool bVar1;
  int cchWideChar;
  BOOL BVar2;
  longlong lVar3;
  undefined8 uVar4;
  LPCSTR lpMultiByteStr;
  HGLOBAL hMem;
  LPWSTR lpWideCharStr;
  HANDLE pvVar5;
  bool bVar6;
  undefined8 local_res10;
  
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar3 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  if (*(char *)(lVar3 + 0x4b) == '\0') {
    uVar4 = FUN_180484c10(param_1,
                          "%s needs \"allow insecure\" (lua page) and the script loaded again",
                          "utils.clipboard_set");
    return uVar4;
  }
  local_res10 = 0;
  lpMultiByteStr = (LPCSTR)FUN_18047e090(param_1,1,&local_res10);
  cchWideChar = MultiByteToWideChar(0xfde9,0,lpMultiByteStr,(int)local_res10,(LPWSTR)0x0,0);
  hMem = GlobalAlloc(2,(longlong)cchWideChar * 2 + 2);
  if (hMem == (HGLOBAL)0x0) {
    return 0;
  }
  lpWideCharStr = GlobalLock(hMem);
  MultiByteToWideChar(0xfde9,0,lpMultiByteStr,(int)local_res10,lpWideCharStr,cchWideChar);
  lpWideCharStr[cchWideChar] = L'\0';
  GlobalUnlock(hMem);
  BVar2 = OpenClipboard((HWND)0x0);
  if (BVar2 == 0) {
    bVar1 = false;
  }
  else {
    EmptyClipboard();
    pvVar5 = SetClipboardData(0xd,hMem);
    CloseClipboard();
    bVar6 = pvVar5 != (HANDLE)0x0;
    bVar1 = pvVar5 != (HANDLE)0x0;
    if (pvVar5 != (HANDLE)0x0) goto LAB_18006282b;
  }
  bVar6 = bVar1;
  GlobalFree(hMem);
LAB_18006282b:
  FUN_18047f270(param_1,bVar6);
  return 1;
}



/* ===== 180062860 FUN_180062860 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180062860(undefined8 param_1)

{
  byte *****pppppbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte *****pppppbVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  byte *****local_c0;
  longlong local_b8;
  undefined4 local_a8;
  byte *****local_a0 [2];
  longlong local_90;
  ulonglong local_88;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_a8 = 0;
  uVar5 = FUN_18047e090(param_1,1,0);
  FUN_180013350(local_a0,uVar5);
  if (local_88 < 0x10) {
    pppppbVar6 = (byte *****)local_a0;
  }
  else {
    pppppbVar6 = local_a0[0];
  }
  pppppbVar1 = (byte *****)((longlong)pppppbVar6 + local_90);
  do {
    if (pppppbVar6 == pppppbVar1) {
      if (0x7fffffffffffffffU - local_90 < 0x12) {
                    /* WARNING: Subroutine does not return */
        FUN_180011990();
      }
      local_c0 = (byte *****)local_a0;
      if (0xf < local_88) {
        local_c0 = local_a0[0];
      }
      local_b8 = local_90;
      local_c8 = 0x12;
      FUN_180069380(local_80);
      local_a8 = 1;
      uVar5 = FUN_180042850(local_60,local_80,&DAT_1806e0a84);
      FUN_1800708e0(uVar5,0);
      FUN_18000f890(local_60);
      local_a8 = 0;
      FUN_18000f890(local_80);
      uVar4 = 0;
LAB_1800629a1:
      FUN_18000f890(local_a0);
      return uVar4;
    }
    bVar2 = *(byte *)pppppbVar6;
    iVar3 = isalnum((uint)bVar2);
    if (((iVar3 == 0) && (2 < (byte)(bVar2 - 0x2d))) && (bVar2 != 0x5f)) {
      uVar4 = FUN_180484c10(param_1,"engine.play_sound: bad sound name");
      goto LAB_1800629a1;
    }
    pppppbVar6 = (byte *****)((longlong)pppppbVar6 + 1);
  } while( true );
}



/* ===== 1800629f0 FUN_1800629f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800629f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_78;
  uVar1 = FUN_18047e090(param_1,1,0);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  puVar2 = (undefined8 *)FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  if (0xf < (ulonglong)puVar2[3]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  uVar3 = FUN_18047e510(param_1,2,puVar2,0);
  FUN_180013350(local_38,uVar1);
  FUN_180013350(local_58,uVar3);
  FUN_1800b73e0(local_58,local_38,0);
  FUN_18000f890(local_58);
  FUN_18000f890(local_38);
  return 0;
}



/* ===== 180062ae0 FUN_180062ae0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180062ae0(undefined8 param_1)

{
  byte *pbVar1;
  byte bVar2;
  UINT UVar3;
  int iVar4;
  char *pcVar5;
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
  UVar3 = FUN_18047e010(param_1,1);
  if (UVar3 == 1) {
    pcVar5 = "mouse 1";
  }
  else if (UVar3 == 2) {
    pcVar5 = "mouse 2";
  }
  else if (UVar3 == 4) {
    pcVar5 = "mouse 3";
  }
  else if (UVar3 == 5) {
    pcVar5 = "mouse 4";
  }
  else {
    if (UVar3 != 6) {
      UVar3 = MapVirtualKeyA(UVar3,0);
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      uStack_20 = 0;
      if ((UVar3 == 0) || (iVar4 = GetKeyNameTextA(UVar3 << 0x10,(LPSTR)&local_58,0x40), iVar4 == 0)
         ) {
        return 0;
      }
      pbVar1 = (byte *)&local_58;
      bVar2 = (byte)local_58;
      while (bVar2 != 0) {
        iVar4 = tolower((uint)*pbVar1);
        *pbVar1 = (byte)iVar4;
        pbVar1 = pbVar1 + 1;
        bVar2 = *pbVar1;
      }
      FUN_18047f530(param_1,&local_58);
      return 1;
    }
    pcVar5 = "mouse 5";
  }
  FUN_18047f530(param_1,pcVar5);
  return 1;
}



/* ===== 180062c10 FUN_180062c10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180062c10(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  byte ****ppppbVar12;
  longlong *plVar13;
  ulonglong unaff_RDI;
  byte ****ppppbVar14;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  undefined4 local_108;
  undefined8 local_100;
  byte ****local_f8 [2];
  longlong local_e8;
  ulonglong local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [25];
  undefined1 local_5f [7];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_128;
  local_108 = 0;
  local_100 = param_1;
  uVar5 = FUN_18047e090(param_2,1,0);
  FUN_180013350(local_f8,uVar5);
  ppppbVar12 = (byte ****)local_f8;
  if (0xf < local_e0) {
    ppppbVar12 = local_f8[0];
  }
  ppppbVar14 = (byte ****)((longlong)ppppbVar12 + local_e8);
  for (; ppppbVar12 != ppppbVar14; ppppbVar12 = (byte ****)((longlong)ppppbVar12 + 1)) {
    bVar1 = *(byte *)ppppbVar12;
    unaff_RDI = (ulonglong)bVar1;
    iVar4 = isalnum((uint)bVar1);
    if (((iVar4 == 0) && (bVar1 != 0x5f)) && (bVar1 != 0x2d)) {
      FUN_180484c10(param_2,"db: names are letters, digits, _ and -");
    }
  }
  FUN_18047eb70(param_2,0xffffd8f0,"wl_state");
  lVar6 = FUN_18047fd90(param_2,0xffffffff);
  FUN_18047fb50(param_2,0xfffffffe);
  uVar5 = FUN_180013350(local_58,"C:\\neverlose\\scripts\\data");
  uVar5 = FUN_180042850(local_78,uVar5,&DAT_1806e0af8);
  uVar5 = FUN_1800667a0(&local_b8,uVar5,lVar6);
  uVar5 = FUN_180042850(local_98,uVar5,&DAT_1806e067c);
  uVar5 = FUN_1800667a0(&local_d8,uVar5,local_f8);
  FUN_180042850(param_1,uVar5,".json");
  local_108 = 1;
  if (local_c0 < 0x10) {
LAB_180062da4:
    local_c8 = 0;
    local_c0 = 0xf;
    local_d8 = 0;
    FUN_18000f890(local_98);
    plVar13 = (longlong *)auStack_128;
    if (local_a0 < 0x10) goto LAB_180062df9;
    uVar9 = local_a0 + 1;
    lVar3 = CONCAT71(uStack_b7,local_b8);
    lVar8 = lVar3;
    if (0xfff < uVar9) {
      lVar8 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar8) - 8U) goto LAB_180062e59;
      uVar9 = local_a0 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar8,uVar9);
LAB_180062df9:
    local_a8 = 0;
    local_a0 = 0xf;
    local_b8 = 0;
    FUN_18000f890(local_78);
    FUN_18000f890(local_58);
    FUN_18000f890(local_f8);
    return param_1;
  }
  uVar9 = local_c0 + 1;
  lVar3 = CONCAT71(uStack_d7,local_d8);
  lVar8 = lVar3;
  if (uVar9 < 0x1000) {
LAB_180062d9f:
    thunk_FUN_1803d64e0(lVar8,uVar9);
    goto LAB_180062da4;
  }
  lVar8 = *(longlong *)(lVar3 + -8);
  if ((lVar3 - lVar8) - 8U < 0x20) {
    uVar9 = local_c0 + 0x28;
    goto LAB_180062d9f;
  }
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  plVar13 = (longlong *)auStack_120;
LAB_180062e59:
  uVar5 = 5;
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  plVar13[3] = lVar6;
  plVar13[4] = unaff_RDI;
  *plVar13 = (longlong)local_5f;
  plVar13[-2] = DAT_180919500 ^ (ulonglong)(plVar13 + -0x34);
  plVar13[-0x35] = 0x180062e9a;
  puVar7 = (undefined8 *)FUN_180062c10(plVar13 + -6,uVar5);
  if (0xf < (ulonglong)puVar7[3]) {
    puVar7 = (undefined8 *)*puVar7;
  }
  plVar13[-0x35] = 0x180062eb8;
  FUN_1800695d0(plVar13 + -0x2c,puVar7,0x20);
  *(undefined ***)((longlong)plVar13 + (longlong)*(int *)(plVar13[-0x2c] + 4) + -0x160) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)plVar13 + (longlong)*(int *)(plVar13[-0x2c] + 4) + -0x164) =
       *(int *)(plVar13[-0x2c] + 4) + -0xb0;
  plVar13[-0x35] = 0x180062eea;
  FUN_18000f890(plVar13 + -6);
  if ((*(byte *)((longlong)plVar13 + (longlong)*(int *)(plVar13[-0x2c] + 4) + -0x150) & 6) != 0) {
    uVar5 = 0;
    goto LAB_18006300e;
  }
  lVar6 = *(longlong *)((longlong)plVar13 + (longlong)*(int *)(plVar13[-0x2c] + 4) + -0x118);
  plVar13[-10] = 0;
  plVar13[-9] = 0;
  plVar13[-8] = 0;
  plVar13[-7] = 0;
  plVar13[-0x2e] = lVar6;
  *(bool *)(plVar13 + -0x2d) = lVar6 == 0;
  *(undefined1 *)((longlong)plVar13 + -0x167) = 0;
  *(undefined4 *)((longlong)plVar13 + -0x166) = *(undefined4 *)((longlong)plVar13 + -0x26);
  *(undefined2 *)((longlong)plVar13 + -0x162) = *(undefined2 *)((longlong)plVar13 + -0x22);
  plVar13[-6] = 0;
  *(undefined2 *)(plVar13 + -5) = 1;
  *(undefined4 *)((longlong)plVar13 + -0x26) = *(undefined4 *)((longlong)plVar13 + -0x26);
  *(undefined2 *)((longlong)plVar13 + -0x22) = *(undefined2 *)((longlong)plVar13 + -0x22);
  if (lVar6 == 0) {
LAB_180062f6e:
    plVar13[-8] = 0;
    plVar13[-7] = 0xf;
    *(undefined1 *)(plVar13 + -10) = 0;
  }
  else {
    plVar13[-0x35] = 0x180062f64;
    FUN_18006c630(plVar13 + -0x2e);
    if (plVar13[-0x2e] == 0) goto LAB_180062f6e;
    *(int *)(plVar13 + -6) = (int)plVar13[-6];
    *(undefined4 *)((longlong)plVar13 + -0x2c) = *(undefined4 *)((longlong)plVar13 + -0x2c);
    *(int *)(plVar13 + -5) = (int)plVar13[-5];
    *(undefined4 *)((longlong)plVar13 + -0x24) = *(undefined4 *)((longlong)plVar13 + -0x24);
    *(int *)(plVar13 + -0x2e) = (int)plVar13[-0x2e];
    *(undefined4 *)((longlong)plVar13 + -0x16c) = *(undefined4 *)((longlong)plVar13 + -0x16c);
    *(int *)(plVar13 + -0x2d) = (int)plVar13[-0x2d];
    *(undefined4 *)((longlong)plVar13 + -0x164) = *(undefined4 *)((longlong)plVar13 + -0x164);
    plVar13[-0x35] = 0x180062fa6;
    FUN_180068a20(plVar13 + -10,plVar13 + -0x2e,plVar13 + -6);
  }
  plVar10 = plVar13 + -10;
  if (0xf < (ulonglong)plVar13[-7]) {
    plVar10 = (longlong *)plVar13[-10];
  }
  plVar13[-0x35] = 0x180062fc1;
  FUN_18047f450(uVar5,plVar10,plVar13[-8]);
  uVar9 = plVar13[-7];
  if (0xf < uVar9) {
    uVar11 = uVar9 + 1;
    lVar6 = plVar13[-10];
    lVar8 = lVar6;
    if (0xfff < uVar11) {
      lVar8 = *(longlong *)(lVar6 + -8);
      if (0x1f < (lVar6 - lVar8) - 8U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      uVar11 = uVar9 + 0x28;
    }
    plVar13[-0x35] = 0x180062ff9;
    thunk_FUN_1803d64e0(lVar8,uVar11);
  }
  uVar5 = 1;
  plVar13[-8] = 0;
  plVar13[-7] = 0xf;
  *(undefined1 *)(plVar13 + -10) = 0;
LAB_18006300e:
  plVar13[-0x35] = 0x180063018;
  FUN_18005e2f0(plVar13 + -0x2c);
  plVar13[-0x35] = 0x180063029;
  return uVar5;
}



