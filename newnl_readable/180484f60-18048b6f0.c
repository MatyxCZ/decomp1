/* ===== 180484f60 FUN_180484f60 ===== */

char * FUN_180484f60(undefined8 param_1,undefined8 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  undefined4 uVar4;
  
  FUN_18047f610();
  while( true ) {
    pcVar2 = (char *)FUN_1804ef420(param_3,0x2e);
    if (pcVar2 == (char *)0x0) {
      sVar3 = strlen(param_3);
      pcVar2 = param_3 + sVar3;
    }
    FUN_18047f450(param_1,param_3,(longlong)pcVar2 - (longlong)param_3);
    FUN_18047f6b0(param_1,0xfffffffe);
    iVar1 = FUN_18047fe10(param_1,0xffffffff);
    if (iVar1 == 0) {
      FUN_18047fb50(param_1,0xfffffffe);
      uVar4 = param_4;
      if (*pcVar2 == '.') {
        uVar4 = 1;
      }
      FUN_18047e8f0(param_1,0,uVar4);
      FUN_18047f450(param_1,param_3,(longlong)pcVar2 - (longlong)param_3);
      FUN_18047f610(param_1,0xfffffffe);
      FUN_18047fae0(param_1,0xfffffffc);
    }
    else {
      iVar1 = FUN_18047fe10(param_1,0xffffffff);
      if (iVar1 != 5) {
        FUN_18047fb50(param_1,0xfffffffd);
        return param_3;
      }
    }
    FUN_18047f880(param_1,0xfffffffe);
    if (*pcVar2 != '.') break;
    param_3 = pcVar2 + 1;
  }
  return (char *)0x0;
}



/* ===== 180485080 FUN_180485080 ===== */

longlong FUN_180485080(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18048ecb0(0x4d50,0);
  if (lVar1 != 0) {
    *(code **)(*(longlong *)(lVar1 + 0x10) + 0x168) = FUN_180485300;
    FUN_180484f60(lVar1,0xffffd8f0,"_VMEVENTS",4);
    FUN_18047f2b0(lVar1,FUN_180484d80,0);
    FUN_18047f7e0(lVar1,0xfffffffe,0x96c9c440);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x10) + 0x93) = 0x10;
    *(longlong *)(lVar1 + 0x28) = *(longlong *)(lVar1 + 0x28) + -8;
  }
  return lVar1;
}



/* ===== 180485110 FUN_180485110 ===== */

longlong FUN_180485110(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 3;
  if (*param_1 - (longlong)param_1 != 0x18) {
    FUN_18047f450(param_1[2],plVar1);
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    *param_1 = (longlong)plVar1;
    FUN_180484ce0(param_1);
  }
  return (longlong)plVar1;
}



/* ===== 180485160 FUN_180485160 ===== */

void FUN_180485160(longlong *param_1)

{
  if (*param_1 - (longlong)param_1 != 0x18) {
    FUN_18047f450(param_1[2],param_1 + 3);
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    *param_1 = (longlong)(param_1 + 3);
  }
  FUN_18047e7f0(param_1[2],(int)param_1[1]);
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}



/* ===== 1804851b0 FUN_1804851b0 ===== */

int FUN_1804851b0(undefined8 param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 1) && (-10000 < param_2)) {
    iVar1 = FUN_18047ed40();
    param_2 = param_2 + 1 + iVar1;
  }
  iVar1 = FUN_18047fe10(param_1,0xffffffff);
  if (iVar1 == 0) {
    FUN_18047fb50(param_1,0xfffffffe);
    return -1;
  }
  FUN_18047f6f0(param_1,param_2,0);
  iVar1 = FUN_18047fc10(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  if (iVar1 == 0) {
    iVar1 = FUN_18047f0e0(param_1,param_2);
    iVar1 = iVar1 + 1;
  }
  else {
    FUN_18047f6f0(param_1,param_2,iVar1);
    FUN_18047f7e0(param_1,param_2,0);
  }
  FUN_18047f7e0(param_1,param_2,iVar1);
  return iVar1;
}



/* ===== 180485280 FUN_180485280 ===== */

void FUN_180485280(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    if ((param_2 < 1) && (-10000 < param_2)) {
      iVar1 = FUN_18047ed40();
      param_2 = param_2 + 1 + iVar1;
    }
    FUN_18047f6f0(param_1,param_2,0);
    FUN_18047f7e0(param_1,param_2,param_3);
    FUN_18047f3d0(param_1,(longlong)param_3);
    FUN_18047f7e0(param_1,param_2,0);
  }
  return;
}



/* ===== 180485300 FUN_180485300 ===== */

undefined8 FUN_180485300(undefined8 param_1)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  FILE *_File;
  undefined2 *puVar3;
  
  puVar1 = (undefined2 *)FUN_18047fc70(param_1,0xffffffff,0);
  uVar2 = __acrt_iob_func(2);
  FUN_18051c4a4("PANIC: unprotected error in call to Lua API (",uVar2);
  uVar2 = __acrt_iob_func(2);
  puVar3 = &DAT_1806dfbb4;
  if (puVar1 != (undefined2 *)0x0) {
    puVar3 = puVar1;
  }
  FUN_18051c4a4(puVar3,uVar2);
  uVar2 = __acrt_iob_func(2);
  FUN_18050ff88(0x29,uVar2);
  uVar2 = __acrt_iob_func(2);
  FUN_18050ff88(10,uVar2);
  _File = (FILE *)__acrt_iob_func(2);
  fflush(_File);
  return 0;
}



/* ===== 1804853c0 FUN_1804853c0 ===== */

undefined8 FUN_1804853c0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((*(undefined8 **)(param_1 + 0x20) < *(undefined8 **)(param_1 + 0x28)) &&
     ((uint)((longlong)**(undefined8 **)(param_1 + 0x20) >> 0x2f) < 0xfffffff3)) {
    uVar1 = FUN_1804a8a70(param_1,1);
    FUN_1804a85f0(param_1,uVar1,0x205);
    return 0;
  }
  uVar2 = FUN_180486d50(param_1,0x200);
  return uVar2;
}



/* ===== 180485410 FUN_180485410 ===== */

longlong FUN_180485410(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  char *pcVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  pcVar6 = "\x04SSE3\x06SSE4.1\x04BMI2";
  *(ulonglong **)(param_1 + 0x28) = *(ulonglong **)(param_1 + 0x20);
  uVar5 = 0x10;
  **(ulonglong **)(param_1 + 0x20) = ~((ulonglong)((*(uint *)(lVar2 + 0x390) & 1) + 1) << 0x2f);
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  uVar1 = *(uint *)(lVar2 + 0x390);
  do {
    if ((uVar5 & uVar1) != 0) {
      puVar3 = *(ulonglong **)(param_1 + 0x28);
      *(ulonglong **)(param_1 + 0x28) = puVar3 + 1;
      uVar4 = FUN_180491d30(param_1,pcVar6 + 1,*pcVar6);
      *puVar3 = uVar4 | 0xfffd800000000000;
    }
    uVar5 = uVar5 * 2;
    pcVar6 = pcVar6 + (longlong)*pcVar6 + 1;
  } while (*pcVar6 != '\0');
  uVar1 = *(uint *)(lVar2 + 0x390);
  pcVar6 = "\x04fold\x03cse\x03dce\x03fwd\x03dse\x06narrow\x04loop\x03abc\x04sink\x04fuse\x03fma";
  uVar5 = 0x10000;
  do {
    if ((uVar5 & uVar1) != 0) {
      puVar3 = *(ulonglong **)(param_1 + 0x28);
      *(ulonglong **)(param_1 + 0x28) = puVar3 + 1;
      uVar4 = FUN_180491d30(param_1,pcVar6 + 1,*pcVar6);
      *puVar3 = uVar4 | 0xfffd800000000000;
    }
    uVar5 = uVar5 * 2;
    pcVar6 = pcVar6 + (longlong)*pcVar6 + 1;
  } while (*pcVar6 != '\0');
  return *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3;
}



/* ===== 180485510 FUN_180485510 ===== */

undefined8 FUN_180485510(longlong param_1)

{
  double *pdVar1;
  char cVar2;
  
  cVar2 = FUN_1804a8c30(param_1,1,0xffffffff,&DAT_18056da20);
  pdVar1 = *(double **)(param_1 + 0x28);
  *(double **)(param_1 + 0x28) = pdVar1 + 1;
  *pdVar1 = (double)(0x55U >> (cVar2 * '\x02' & 0x1fU) & 3);
  return 1;
}



/* ===== 180485570 FUN_180485570 ===== */

undefined8 FUN_180485570(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  uVar5 = FUN_1804a8a20(param_1,1);
  lVar6 = FUN_1804a8f10(param_1,2);
  FUN_180484f60(param_1,0xffffd8f0,"_VMEVENTS",4);
  if (lVar6 != 0) {
    pbVar1 = (byte *)(lVar6 + 0x18);
    uVar8 = *(uint *)(lVar6 + 0x14);
    bVar2 = *(byte *)(lVar6 + 0x18);
    while (bVar2 != 0) {
      bVar2 = *pbVar1;
      pbVar1 = pbVar1 + 1;
      uVar8 = uVar8 ^ (uVar8 >> 0x1a | uVar8 << 6) + (uint)bVar2;
      bVar2 = *pbVar1;
    }
    FUN_18047f610(param_1,1);
    FUN_18047f7e0(param_1,0xfffffffe,uVar8 * 8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x93) = 0xff;
    return 0;
  }
  **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  iVar4 = FUN_18047f060(param_1,0xfffffffe);
  while (iVar4 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x28);
    *(ulonglong **)(param_1 + 0x28) = (ulonglong *)(lVar6 + -8);
    uVar3 = *(ulonglong *)(lVar6 + -8);
    if (((int)((longlong)uVar3 >> 0x2f) == -9) && ((uVar3 & 0x7fffffffffff) == uVar5)) {
      puVar7 = (undefined8 *)
               FUN_1804931f0(param_1,*(ulonglong *)(lVar6 + -0x18) & 0x7fffffffffff,lVar6 + -0x10);
      *puVar7 = 0xffffffffffffffff;
    }
    iVar4 = FUN_18047f060(param_1,0xfffffffe);
  }
  return 0;
}



/* ===== 1804856c0 FUN_1804856c0 ===== */

undefined8 FUN_1804856c0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  double *pdVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  
  uVar6 = FUN_1804a8970(param_1,1,1);
  if (uVar6 == 0) {
    uVar6 = **(ulonglong **)(param_1 + 0x20) & 0x7fffffffffff;
    FUN_18047e8f0(param_1,0,4);
    bVar1 = *(byte *)(uVar6 + 10);
    uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
    if (bVar1 != 1) {
      uVar7 = FUN_180491d30(param_1,&DAT_18056daf0,4);
      pdVar8 = (double *)FUN_180493400(param_1,uVar10,uVar7);
      *pdVar8 = (double)bVar1;
    }
    lVar3 = *(longlong *)(uVar6 + 0x28);
    uVar7 = FUN_180491d30(param_1,&DAT_18056daf8,4);
    pdVar8 = (double *)FUN_180493400(param_1,uVar10,uVar7);
    *pdVar8 = (double)lVar3;
    bVar1 = *(byte *)(uVar6 + 0xb);
    uVar7 = FUN_180491d30(param_1,"upvalues",8);
    pdVar8 = (double *)FUN_180493400(param_1,uVar10,uVar7);
    *pdVar8 = (double)bVar1;
  }
  else {
    uVar4 = FUN_1804a8e80(param_1,2,0);
    FUN_18047e8f0(param_1,0,0x10);
    iVar5 = *(int *)(uVar6 + 0x48);
    uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
    uVar7 = FUN_180491d30(param_1,"linedefined",0xb);
    pdVar8 = (double *)FUN_180493400(param_1,uVar10,uVar7);
    *pdVar8 = (double)iVar5;
    iVar5 = *(int *)(uVar6 + 0x4c);
    iVar2 = *(int *)(uVar6 + 0x48);
    uVar7 = FUN_180491d30(param_1,"lastlinedefined",0xf);
    pdVar8 = (double *)FUN_180493400(param_1,uVar10,uVar7);
    *pdVar8 = (double)(iVar5 + iVar2);
    bVar1 = *(byte *)(uVar6 + 0xb);
    uVar7 = FUN_180491d30(param_1,"stackslots",10);
    pdVar8 = (double *)FUN_180493400(param_1,uVar10,uVar7);
    *pdVar8 = (double)bVar1;
    bVar1 = *(byte *)(uVar6 + 10);
    uVar7 = FUN_180491d30(param_1,"params",6);
    pdVar8 = (double *)FUN_180493400(param_1,uVar10,uVar7);
    *pdVar8 = (double)bVar1;
    iVar5 = *(int *)(uVar6 + 0xc);
    uVar7 = FUN_180491d30(param_1,"bytecodes",9);
    pdVar8 = (double *)FUN_180493400(param_1,uVar10,uVar7);
    *pdVar8 = (double)iVar5;
    iVar5 = *(int *)(uVar6 + 0x30);
    uVar7 = FUN_180491d30(param_1,"gcconsts",8);
    pdVar8 = (double *)FUN_180493400(param_1,uVar10,uVar7);
    *pdVar8 = (double)iVar5;
    iVar5 = *(int *)(uVar6 + 0x34);
    uVar7 = FUN_180491d30(param_1,"nconsts",7);
    pdVar8 = (double *)FUN_180493400(param_1,uVar10,uVar7);
    *pdVar8 = (double)iVar5;
    bVar1 = *(byte *)(uVar6 + 0x3c);
    uVar7 = FUN_180491d30(param_1,"upvalues",8);
    pdVar8 = (double *)FUN_180493400(param_1,uVar10,uVar7);
    *pdVar8 = (double)bVar1;
    if (uVar4 < *(uint *)(uVar6 + 0xc)) {
      iVar5 = FUN_18048aa20(uVar6,uVar4);
      uVar7 = FUN_180491d30(param_1,"currentline",0xb);
      pdVar8 = (double *)FUN_180493400(param_1,uVar10,uVar7);
      *pdVar8 = (double)iVar5;
    }
    FUN_18047f270(param_1,*(byte *)(uVar6 + 0x3d) & 2);
    FUN_18047f8e0(param_1,0xfffffffe,"isvararg");
    FUN_18047f270(param_1,*(byte *)(uVar6 + 0x3d) & 1);
    FUN_18047f8e0(param_1,0xfffffffe,"children");
    puVar9 = *(ulonglong **)(param_1 + 0x28);
    *(ulonglong **)(param_1 + 0x28) = puVar9 + 1;
    *puVar9 = *(ulonglong *)(uVar6 + 0x40) | 0xfffd800000000000;
    FUN_18047f8e0(param_1,0xfffffffe,"source");
    FUN_18048aa80(param_1,uVar6,uVar4);
    FUN_18047f8e0(param_1,0xfffffffe,&DAT_18056dae4);
    uVar7 = FUN_180491d30(param_1,"proto",5);
    puVar9 = (ulonglong *)FUN_180493400(param_1,uVar10,uVar7);
    *puVar9 = uVar6 | 0xfffc000000000000;
  }
  return 1;
}



/* ===== 180485ab0 FUN_180485ab0 ===== */

undefined8 FUN_180485ab0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1804a8970(param_1,1,0);
  uVar1 = FUN_1804a8a70(param_1,2);
  if (uVar1 < *(uint *)(lVar2 + 0xc)) {
    uVar1 = *(uint *)(lVar2 + 0x68 + (ulonglong)uVar1 * 4);
    **(double **)(param_1 + 0x28) = (double)(int)uVar1;
    *(double *)(*(longlong *)(param_1 + 0x28) + 8) =
         (double)*(ushort *)(&DAT_18056f5e0 + (ulonglong)(uVar1 & 0xff) * 2);
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 0x10;
    return 2;
  }
  return 0;
}



/* ===== 180485b40 FUN_180485b40 ===== */

undefined8 FUN_180485b40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1804a8970(param_1,1,0);
  iVar1 = FUN_1804a8a70(param_1,2);
  uVar3 = (ulonglong)iVar1;
  if (iVar1 < 0) {
    if ((longlong)~uVar3 < (longlong)(ulonglong)*(uint *)(lVar2 + 0x30)) {
      uVar3 = *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + uVar3 * 8);
      *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) =
           (ulonglong)~(uint)*(byte *)(uVar3 + 9) << 0x2f | uVar3;
      return 1;
    }
  }
  else if ((longlong)uVar3 < (longlong)(ulonglong)*(uint *)(lVar2 + 0x34)) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8) =
         *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + uVar3 * 8);
    return 1;
  }
  return 0;
}



/* ===== 180485bf0 FUN_180485bf0 ===== */

undefined8 FUN_180485bf0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char *_Str;
  size_t sVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  lVar2 = FUN_1804a8970(param_1,1,0);
  uVar1 = FUN_1804a8a70(param_1,2);
  if (uVar1 < *(byte *)(lVar2 + 0x3c)) {
    _Str = (char *)FUN_18048aee0(lVar2,uVar1);
    sVar3 = strlen(_Str);
    uVar4 = FUN_18048aee0(lVar2,uVar1);
    uVar5 = FUN_180491d30(param_1,uVar4,sVar3);
    *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar5 | 0xfffd800000000000;
    return 1;
  }
  return 0;
}



/* ===== 180485ca0 FUN_180485ca0 ===== */

undefined8 FUN_180485ca0(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  char *_Str;
  uint uVar5;
  undefined8 uVar6;
  double *pdVar7;
  size_t sVar8;
  ulonglong uVar9;
  
  uVar5 = FUN_1804a8a70(param_1,1);
  if (((uVar5 == 0) || (*(uint *)(*(longlong *)(param_1 + 0x10) + 0x474) <= uVar5)) ||
     (lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x468) + (ulonglong)uVar5 * 8),
     lVar3 == 0)) {
    return 0;
  }
  FUN_18047e8f0(param_1,0,8);
  iVar2 = *(int *)(lVar3 + 0xc);
  uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  uVar6 = FUN_180491d30(param_1,&DAT_18056db00,4);
  pdVar7 = (double *)FUN_180493400(param_1,uVar9,uVar6);
  *pdVar7 = (double)(iVar2 + -0x8001);
  iVar2 = *(int *)(lVar3 + 0x28);
  uVar6 = FUN_180491d30(param_1,&DAT_18056db08,2);
  pdVar7 = (double *)FUN_180493400(param_1,uVar9,uVar6);
  *pdVar7 = (double)(0x8000 - iVar2);
  uVar1 = *(ushort *)(lVar3 + 0x6a);
  uVar6 = FUN_180491d30(param_1,&DAT_18056db0c,4);
  pdVar7 = (double *)FUN_180493400(param_1,uVar9,uVar6);
  *pdVar7 = (double)uVar1;
  uVar1 = *(ushort *)(lVar3 + 10);
  uVar6 = FUN_180491d30(param_1,"nexit",5);
  pdVar7 = (double *)FUN_180493400(param_1,uVar9,uVar6);
  *pdVar7 = (double)uVar1;
  puVar4 = *(ulonglong **)(param_1 + 0x28);
  *(ulonglong **)(param_1 + 0x28) = puVar4 + 1;
  _Str = (&PTR_DAT_18056d7c0)[*(byte *)(lVar3 + 0x74)];
  sVar8 = strlen(_Str);
  uVar9 = FUN_180491d30(param_1,_Str,sVar8);
  *puVar4 = uVar9 | 0xfffd800000000000;
  FUN_18047f8e0(param_1,0xfffffffe,"linktype");
  return 1;
}



/* ===== 180485e70 FUN_180485e70 ===== */

undefined8 FUN_180485e70(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  double *pdVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar4 = FUN_1804a8a70(param_1,1);
  if ((uVar4 == 0) || (*(uint *)(*(longlong *)(param_1 + 0x10) + 0x474) <= uVar4)) {
    FUN_1804a8a70(param_1,2);
  }
  else {
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x468) + (ulonglong)uVar4 * 8);
    iVar5 = FUN_1804a8a70(param_1,2);
    if (lVar2 != 0) {
      uVar4 = iVar5 + 0x8000;
      if ((0x7fff < uVar4) && (uVar4 < *(uint *)(lVar2 + 0xc))) {
        lVar2 = *(longlong *)(lVar2 + 0x20);
        uVar7 = (ulonglong)uVar4;
        bVar1 = (&DAT_18056ee40)[*(byte *)(lVar2 + 5 + (ulonglong)uVar4 * 8)];
        iVar5 = 0;
        if ((bVar1 & 3) == 0) {
          iVar5 = 0x8000;
        }
        *(double *)(*(longlong *)(param_1 + 0x28) + -0x10) = (double)bVar1;
        *(double *)(*(longlong *)(param_1 + 0x28) + -8) = (double)*(ushort *)(lVar2 + 4 + uVar7 * 8)
        ;
        pdVar3 = *(double **)(param_1 + 0x28);
        *(double **)(param_1 + 0x28) = pdVar3 + 1;
        iVar6 = 0;
        if ((bVar1 & 0xc) == 0) {
          iVar6 = 0x8000;
        }
        *pdVar3 = (double)(int)((uint)*(ushort *)(lVar2 + uVar7 * 8) - iVar5);
        pdVar3 = *(double **)(param_1 + 0x28);
        *(double **)(param_1 + 0x28) = pdVar3 + 1;
        *pdVar3 = (double)(int)((uint)*(ushort *)(lVar2 + 2 + uVar7 * 8) - iVar6);
        pdVar3 = *(double **)(param_1 + 0x28);
        *(double **)(param_1 + 0x28) = pdVar3 + 1;
        *pdVar3 = (double)*(ushort *)(lVar2 + 6 + uVar7 * 8);
        return 5;
      }
    }
  }
  return 0;
}



/* ===== 180485fd0 FUN_180485fd0 ===== */

undefined8 FUN_180485fd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar5 = FUN_1804a8a70(param_1,1);
  if ((uVar5 == 0) || (*(uint *)(*(longlong *)(param_1 + 0x10) + 0x474) <= uVar5)) {
    FUN_1804a8a70(param_1,2);
  }
  else {
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x468) + (ulonglong)uVar5 * 8);
    iVar6 = FUN_1804a8a70(param_1,2);
    if (lVar7 != 0) {
      uVar5 = iVar6 + 0x8000;
      if ((*(uint *)(lVar7 + 0x28) <= uVar5) && (uVar5 < 0x8000)) {
        lVar1 = *(longlong *)(lVar7 + 0x20);
        lVar7 = (ulonglong)uVar5 * 8;
        if (*(char *)(lVar7 + 5 + lVar1) == '\x1e') {
          uVar5 = (uint)*(ushort *)(lVar7 + 2 + lVar1);
          lVar7 = (ulonglong)*(ushort *)(lVar7 + lVar1) * 8;
        }
        else {
          uVar5 = 0xffffffff;
        }
        if ((*(char *)(lVar7 + 5 + lVar1) == '\x1d') &&
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x188) == 0)) {
          lVar2 = *(longlong *)(param_1 + 0x28);
          lVar3 = *(longlong *)(param_1 + 0x38);
          FUN_180489a10(param_1);
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x38) + (lVar2 - lVar3);
        }
        FUN_1804a6890(param_1,*(longlong *)(param_1 + 0x28) + -0x10,lVar7 + lVar1);
        *(double *)(*(longlong *)(param_1 + 0x28) + -8) =
             (double)(*(byte *)(lVar7 + lVar1 + 4) & 0x1f);
        if (uVar5 == 0xffffffff) {
          return 2;
        }
        pdVar4 = *(double **)(param_1 + 0x28);
        *(double **)(param_1 + 0x28) = pdVar4 + 1;
        *pdVar4 = (double)(int)uVar5;
        return 3;
      }
    }
  }
  return 0;
}



/* ===== 180486140 FUN_180486140 ===== */

undefined8 FUN_180486140(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double *pdVar8;
  byte *pbVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  ulonglong uVar15;
  
  uVar4 = FUN_1804a8a70(param_1,1);
  if ((uVar4 == 0) || (*(uint *)(*(longlong *)(param_1 + 0x10) + 0x474) <= uVar4)) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x468) + (ulonglong)uVar4 * 8);
  }
  uVar4 = FUN_1804a8a70(param_1,2);
  uVar7 = (ulonglong)uVar4;
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
  if ((puVar5 < *(undefined8 **)(param_1 + 0x28)) &&
     ((uint)((longlong)*puVar5 >> 0x2f) < 0xfffffffe)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((lVar10 == 0) || (*(ushort *)(lVar10 + 10) <= uVar4)) {
    return 0;
  }
  lVar2 = *(longlong *)(lVar10 + 0x30);
  lVar10 = *(longlong *)(lVar10 + 0x38);
  uVar6 = (ulonglong)*(uint *)(lVar2 + uVar7 * 0xc);
  bVar1 = *(byte *)(lVar2 + 10 + uVar7 * 0xc);
  uVar15 = (ulonglong)(bVar1 + 2);
  FUN_18047e8f0(param_1,uVar15,0);
  uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  if (*(int *)(uVar11 + 0x30) == 0) {
    pdVar8 = (double *)FUN_180493360(param_1,uVar11,0);
  }
  else {
    pdVar8 = *(double **)(uVar11 + 0x10);
  }
  *pdVar8 = (double)(int)(*(ushort *)(lVar2 + 4 + uVar7 * 0xc) - 0x8000);
  if (*(uint *)(uVar11 + 0x30) < 2) {
    pdVar8 = (double *)FUN_180493360(param_1,uVar11,1);
  }
  else {
    pdVar8 = (double *)(*(longlong *)(uVar11 + 0x10) + 8);
  }
  uVar13 = 0;
  *pdVar8 = (double)*(byte *)(lVar2 + 8 + uVar7 * 0xc);
  if (bVar1 != 0) {
    uVar4 = 2;
    do {
      if (uVar4 < *(uint *)(uVar11 + 0x30)) {
        pdVar8 = (double *)(*(longlong *)(uVar11 + 0x10) + (longlong)(int)uVar4 * 8);
      }
      else {
        pdVar8 = (double *)FUN_180493360(param_1,uVar11,uVar4);
      }
      lVar2 = uVar13 * 4;
      uVar4 = uVar4 + 1;
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      *pdVar8 = (double)*(int *)(lVar10 + uVar6 * 4 + lVar2);
    } while (uVar12 < bVar1);
  }
  if (bVar1 + 2 < *(uint *)(uVar11 + 0x30)) {
    puVar5 = (undefined8 *)(*(longlong *)(uVar11 + 0x10) + uVar15 * 8);
  }
  else {
    puVar5 = (undefined8 *)FUN_180493360(param_1,uVar11,uVar15);
  }
  *puVar5 = 0xc170000000000000;
  if (!bVar3) {
    return 1;
  }
  pbVar14 = (byte *)(*(ulonglong *)(lVar10 + (bVar1 + uVar6) * 4) >> 8);
  bVar1 = *pbVar14;
  pbVar9 = pbVar14;
  while (bVar1 < 0x60) {
    pbVar9 = pbVar9 + -4;
    bVar1 = *pbVar9;
  }
  pdVar8 = *(double **)(param_1 + 0x28);
  *(double **)(param_1 + 0x28) = pdVar8 + 1;
  *pdVar8 = (double)(int)((longlong)pbVar14 - (longlong)pbVar9 >> 2);
  return 2;
}



/* ===== 1804863b0 FUN_1804863b0 ===== */

undefined8 FUN_1804863b0(longlong param_1)

{
  longlong lVar1;
  double *pdVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = FUN_1804a8a70(param_1,1);
  if ((((uVar3 == 0) || (*(uint *)(*(longlong *)(param_1 + 0x10) + 0x474) <= uVar3)) ||
      (lVar1 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x468) + (ulonglong)uVar3 * 8),
      lVar1 == 0)) || (*(longlong *)(lVar1 + 0x58) == 0)) {
    return 0;
  }
  uVar4 = FUN_180491d30(param_1,*(longlong *)(lVar1 + 0x58),*(undefined4 *)(lVar1 + 0x54));
  *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar4 | 0xfffd800000000000;
  pdVar2 = *(double **)(param_1 + 0x28);
  *(double **)(param_1 + 0x28) = pdVar2 + 1;
  *pdVar2 = (double)*(longlong *)(lVar1 + 0x58);
  pdVar2 = *(double **)(param_1 + 0x28);
  *(double **)(param_1 + 0x28) = pdVar2 + 1;
  *pdVar2 = (double)*(int *)(lVar1 + 0x60);
  return 3;
}



/* ===== 180486470 FUN_180486470 ===== */

undefined8 FUN_180486470(longlong param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1804a8a70(param_1,1);
  if (uVar1 < 0x200) {
    *(double *)(*(longlong *)(param_1 + 0x28) + -8) =
         (double)(longlong)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x988 + (ulonglong)(uVar1 >> 5) * 8)
                 + (ulonglong)((uVar1 & 0x1f) << 2));
    return 1;
  }
  return 0;
}



/* ===== 1804864d0 FUN_1804864d0 ===== */

undefined8 FUN_1804864d0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1804a8a70(param_1,1);
  if (uVar1 < 0x6c) {
    *(double *)(*(longlong *)(param_1 + 0x28) + -8) =
         (double)(longlong)(&PTR_FUN_18056eed0)[(ulonglong)uVar1 * 2];
    return 1;
  }
  return 0;
}



/* ===== 180486520 FUN_180486520 ===== */

undefined8 FUN_180486520(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  size_t _MaxCount;
  ulonglong uVar10;
  byte *pbVar11;
  int local_res10;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  iVar7 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3);
  if (iVar7 == 0) {
    *(uint *)(lVar1 + 0x390) = *(uint *)(lVar1 + 0x390) & 0xf3ffffff;
    *(uint *)(lVar1 + 0x390) = *(uint *)(lVar1 + 0x390) | 0x3ff0000;
  }
  else {
    local_res10 = 1;
    if (0 < iVar7) {
      do {
        lVar6 = FUN_1804a8d10(param_1,local_res10);
        cVar3 = *(char *)(lVar6 + 0x18);
        if (((byte)(cVar3 - 0x30U) < 10) && (*(char *)(lVar6 + 0x19) == '\0')) {
          if (cVar3 == '0') {
            uVar8 = 0;
          }
          else if (cVar3 == '1') {
            uVar8 = 0x70000;
          }
          else {
            uVar8 = 0x3ff0000;
            if (cVar3 == '2') {
              uVar8 = 0x670000;
            }
          }
          *(uint *)(lVar1 + 0x390) = *(uint *)(lVar1 + 0x390) & 0xf000ffff;
          *(uint *)(lVar1 + 0x390) = *(uint *)(lVar1 + 0x390) | uVar8;
        }
        else {
          pbVar11 = &DAT_18056d9e8;
          bVar2 = true;
          if (cVar3 == '+') {
            pcVar9 = (char *)(lVar6 + 0x19);
          }
          else {
            if (cVar3 == '-') {
              pcVar9 = (char *)(lVar6 + 0x19);
            }
            else {
              pcVar9 = (char *)(lVar6 + 0x18);
              if ((cVar3 != 'n') || (*(char *)(lVar6 + 0x19) != 'o')) goto LAB_180486630;
              pcVar9 = (char *)((ulonglong)(*(char *)(lVar6 + 0x1a) == '-') + 0x1a + lVar6);
            }
            bVar2 = false;
          }
LAB_180486630:
          uVar8 = 0x10000;
          _MaxCount = 4;
          do {
            iVar4 = strncmp(pcVar9,(char *)(pbVar11 + 1),_MaxCount);
            if ((iVar4 == 0) && (pcVar9[_MaxCount] == '\0')) {
              if (bVar2) {
                *(uint *)(lVar1 + 0x390) = *(uint *)(lVar1 + 0x390) | uVar8;
              }
              else {
                *(uint *)(lVar1 + 0x390) = *(uint *)(lVar1 + 0x390) & ~uVar8;
              }
              goto LAB_18048673e;
            }
            uVar8 = uVar8 * 2;
            pbVar11 = pbVar11 + _MaxCount + 1;
            _MaxCount = (size_t)*pbVar11;
          } while (*pbVar11 != 0);
          pbVar11 = &DAT_18056db30;
          iVar4 = 0;
          while( true ) {
            uVar10 = (ulonglong)*pbVar11;
            iVar5 = strncmp((char *)(lVar6 + 0x18),(char *)(pbVar11 + 1),(ulonglong)*pbVar11);
            if ((iVar5 == 0) && (*(char *)(lVar6 + 0x18 + uVar10) == '=')) break;
            iVar4 = iVar4 + 1;
            if (0xe < iVar4) goto LAB_18048675c;
            pbVar11 = pbVar11 + uVar10 + 1;
          }
          pcVar9 = (char *)(lVar6 + 0x19 + uVar10);
          iVar5 = 0;
          cVar3 = *(char *)(lVar6 + 0x19 + uVar10);
          while ('/' < cVar3) {
            cVar3 = *pcVar9;
            if ('9' < cVar3) break;
            pcVar9 = pcVar9 + 1;
            iVar5 = (int)cVar3 + (iVar5 * 5 + -0x18) * 2;
            cVar3 = *pcVar9;
          }
          if ((cVar3 != '\0') || (iVar5 < 0)) {
LAB_18048675c:
                    /* WARNING: Subroutine does not return */
            FUN_1804842f0(param_1,0x86c,lVar6 + 0x18);
          }
          if (iVar4 == 0xd) {
            uVar8 = iVar5 + 3U & 0xfffffffc;
            if (0x1fffc0 < uVar8) {
              uVar8 = 0x1fffc0;
            }
            *(uint *)(lVar1 + 0x980) = uVar8;
          }
          else {
            *(int *)(lVar1 + 0x94c + (longlong)iVar4 * 4) = iVar5;
            if (iVar4 == 6) {
              FUN_1804a78e0(lVar1);
            }
          }
        }
LAB_18048673e:
        local_res10 = local_res10 + 1;
      } while (local_res10 <= iVar7);
    }
  }
  return 0;
}



/* ===== 180486770 FUN_180486770 ===== */

undefined8 FUN_180486770(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined8 local_res8;
  
  uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x110) & 0x7fffffffffff;
  lVar2 = FUN_1804a8f10(param_1,1);
  uVar3 = FUN_1804a8a20(param_1,2);
  uVar4 = FUN_18047ef40(param_1);
  local_res8 = 0x8100000000000074;
  puVar5 = (ulonglong *)FUN_1804931f0(param_1,uVar7,&local_res8);
  *puVar5 = uVar4 | 0xfffc800000000000;
  local_res8 = 0x8100000000000066;
  puVar5 = (ulonglong *)FUN_1804931f0(param_1,uVar7,&local_res8);
  *puVar5 = uVar3 | 0xfffb800000000000;
  if ((*(byte *)(uVar7 + 8) & 4) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    *(byte *)(uVar7 + 8) = *(byte *)(uVar7 + 8) & 0xfb;
    *(undefined8 *)(uVar7 + 0x18) = *(undefined8 *)(lVar1 + 0x40);
    *(ulonglong *)(lVar1 + 0x40) = uVar7;
  }
  puVar6 = (undefined1 *)(lVar2 + 0x18);
  if (lVar2 == 0) {
    puVar6 = &DAT_18058b643;
  }
  FUN_1804a9830(param_1,puVar6,FUN_1804869b0,uVar4);
  return 0;
}



/* ===== 180486880 FUN_180486880 ===== */

undefined8 FUN_180486880(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 local_res8;
  
  FUN_1804a9a80();
  uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x110) & 0x7fffffffffff;
  local_res8 = 0x8100000000000074;
  puVar2 = (undefined8 *)FUN_1804931f0(param_1,uVar3,&local_res8);
  *puVar2 = 0xffffffffffffffff;
  local_res8 = 0x8100000000000066;
  puVar2 = (undefined8 *)FUN_1804931f0(param_1,uVar3,&local_res8);
  *puVar2 = 0xffffffffffffffff;
  if ((*(byte *)(uVar3 + 8) & 4) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    *(byte *)(uVar3 + 8) = *(byte *)(uVar3 + 8) & 0xfb;
    *(undefined8 *)(uVar3 + 0x18) = *(undefined8 *)(lVar1 + 0x40);
    *(ulonglong *)(lVar1 + 0x40) = uVar3;
  }
  return 0;
}



/* ===== 180486920 FUN_180486920 ===== */

undefined8 FUN_180486920(ulonglong param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 local_res8 [4];
  
  uVar5 = 0;
  uVar6 = param_1;
  if ((*(ulonglong **)(param_1 + 0x20) < *(ulonglong **)(param_1 + 0x28)) &&
     (uVar1 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar1 >> 0x2f) == -7)) {
    uVar6 = uVar1 & 0x7fffffffffff;
    uVar5 = 1;
  }
  lVar3 = FUN_1804a8d10(param_1,uVar5 + 1);
  uVar2 = FUN_1804a8a70(param_1,uVar5 | 2);
  uVar4 = FUN_1804a97e0(uVar6,lVar3 + 0x18,uVar2,local_res8);
  FUN_18047f450(param_1,uVar4,local_res8[0]);
  return 1;
}



/* ===== 1804869b0 FUN_1804869b0 ===== */

void FUN_1804869b0(longlong param_1,ulonglong param_2,int param_3,undefined1 param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  double *pdVar3;
  code *pcVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined1 local_res10 [8];
  undefined8 local_28 [2];
  
  local_28[0] = 0x8100000000000066;
  puVar6 = (ulonglong *)
           FUN_1804926a0(param_2,*(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x110) &
                                 0x7fffffffffff,local_28);
  if ((int)((longlong)*puVar6 >> 0x2f) == -9) {
    puVar2 = *(ulonglong **)(param_1 + 0x28);
    *(ulonglong **)(param_1 + 0x28) = puVar2 + 1;
    *puVar2 = *puVar6 & 0x7fffffffffff | 0xfffb800000000000;
    puVar6 = *(ulonglong **)(param_1 + 0x28);
    *(ulonglong **)(param_1 + 0x28) = puVar6 + 1;
    *puVar6 = param_2 | 0xfffc800000000000;
    pdVar3 = *(double **)(param_1 + 0x28);
    *pdVar3 = (double)param_3;
    *(double **)(param_1 + 0x28) = pdVar3 + 2;
    local_res10[0] = param_4;
    uVar7 = FUN_180491d30(param_1,local_res10,1);
    pdVar3[1] = (double)(uVar7 | 0xfffd800000000000);
    iVar5 = FUN_18047f190(param_1,3,0,0);
    if (iVar5 != 0) {
      pcVar4 = *(code **)(*(longlong *)(param_1 + 0x10) + 0x168);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(param_1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_18051c3d4(1);
    }
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0x3d4);
    *puVar1 = *puVar1 & 0xffffffef;
  }
  return;
}



/* ===== 180486af0 FUN_180486af0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180486af0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  uint local_40;
  uint local_38 [4];
  undefined1 local_28 [4];
  uint local_24;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar14 = 0;
  iVar13 = FUN_18000534f(0,local_38);
  if (((iVar13 != 0) && (iVar13 = FUN_18000534f(1,local_48), iVar13 != 0)) &&
     (uVar14 = (local_40 >> 0x13 & 1) << 5 | (local_40 & 1) << 4, 6 < local_38[0])) {
    FUN_18000534f(7,local_28);
    uVar14 = (local_24 >> 8 & 1) << 6 | uVar14;
  }
  uVar4 = _UNK_18056d948;
  uVar3 = _DAT_18056d940;
  uVar2 = _UNK_18056d938;
  *(undefined8 *)(lVar1 + 0x94c) = _DAT_18056d930;
  *(undefined8 *)(lVar1 + 0x954) = uVar2;
  *(uint *)(lVar1 + 0x390) = uVar14 | 0x3ff0001;
  uVar8 = _DAT_18056d95c;
  uVar7 = _UNK_18056d958;
  uVar6 = _UNK_18056d954;
  uVar5 = _DAT_18056d950;
  *(undefined8 *)(lVar1 + 0x95c) = uVar3;
  *(undefined8 *)(lVar1 + 0x964) = uVar4;
  uVar12 = _UNK_18056d968;
  uVar11 = _UNK_18056d964;
  uVar10 = _UNK_18056d960;
  uVar9 = _DAT_18056d95c;
  *(undefined4 *)(lVar1 + 0x96c) = uVar5;
  *(undefined4 *)(lVar1 + 0x970) = uVar6;
  *(undefined4 *)(lVar1 + 0x974) = uVar7;
  *(undefined4 *)(lVar1 + 0x978) = uVar8;
  *(undefined4 *)(lVar1 + 0x978) = uVar9;
  *(undefined4 *)(lVar1 + 0x97c) = uVar10;
  *(undefined4 *)(lVar1 + 0x980) = uVar11;
  *(undefined4 *)(lVar1 + 0x984) = uVar12;
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xe8) = 0x504d4d500000;
  FUN_1804a7c70(*(undefined8 *)(param_1 + 0x10),0);
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0xea) != 0x504d4d50) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_18047f450(param_1,"Windows",7);
  FUN_18047f450(param_1,&DAT_18056dbc0,3);
  FUN_18047f3d0(param_1,0x4ee7);
  FUN_18047f450(param_1,"LuaJIT 2.1.1788856981",0x15);
  FUN_1804a90d0(param_1,&DAT_1806e1910,&DAT_18056d770,&PTR_LAB_18056d740);
  FUN_1804a9000(param_1,"jit.profile",FUN_180486cf0,*(undefined8 *)(param_1 + 0x48));
  FUN_1804a9000(param_1,"jit.util",FUN_180486d20,*(undefined8 *)(param_1 + 0x48));
  FUN_1804a90d0(param_1,"jit.opt",&DAT_18056d8e0,&PTR_FUN_18056d808);
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -0x10;
  return 1;
}



/* ===== 180486cf0 FUN_180486cf0 ===== */

undefined8 FUN_180486cf0(undefined8 param_1)

{
  FUN_1804a90d0(param_1,0,&DAT_18056d908,&PTR_FUN_18056d8f0);
  return 1;
}



/* ===== 180486d20 FUN_180486d20 ===== */

undefined8 FUN_180486d20(undefined8 param_1)

{
  FUN_1804a90d0(param_1,0,&DAT_18056d870,&PTR_FUN_18056d810);
  return 1;
}



/* ===== 180486d50 FUN_180486d50 ===== */

undefined8 FUN_180486d50(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  uVar3 = 0;
  if ((plVar1 != *(longlong **)(param_1 + 0x28)) && (*plVar1 != -1)) {
    iVar2 = (int)(*plVar1 >> 0x2f);
    if (iVar2 + 9U < 2) {
      uVar3 = 1;
    }
    else if (iVar2 != -3) goto LAB_180486df3;
    if ((plVar1 + 1 < *(longlong **)(param_1 + 0x28)) &&
       (iVar2 = (int)(plVar1[1] >> 0x2f), iVar2 + 3U < 2)) {
      param_2 = param_2 | (iVar2 == -2) + 3;
    }
    else {
      param_2 = param_2 | 2;
    }
  }
  iVar2 = FUN_1804a85f0(param_1,uVar3,param_2);
  if (iVar2 == 1) {
    return 0;
  }
  if ((char)param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1,0x856);
  }
LAB_180486df3:
                    /* WARNING: Subroutine does not return */
  FUN_1804840e0(param_1,1,6);
}



/* ===== 180486e20 FUN_180486e20 ===== */

undefined8 FUN_180486e20(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = FUN_1804a8dd0(param_1,1);
  dVar5 = 0.0;
  lVar3 = (ulonglong)*(uint *)(lVar1 + 0x30) - 1;
  if (*(uint *)(lVar1 + 0x30) != 0) {
    do {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar3 * 8) != -1) {
        dVar5 = (double)(int)lVar3;
        break;
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  lVar3 = *(longlong *)(lVar1 + 0x28);
  uVar2 = (ulonglong)*(uint *)(lVar1 + 0x34);
  do {
    if ((*(longlong *)(lVar3 + uVar2 * 0x18) != -1) &&
       ((uint)((longlong)*(undefined8 *)(lVar3 + 8 + uVar2 * 0x18) >> 0x2f) < 0xfffffff3)) {
      dVar4 = *(double *)(lVar3 + 8 + uVar2 * 0x18);
      if (dVar4 <= dVar5) {
        dVar4 = dVar5;
      }
      dVar5 = dVar4;
    }
    uVar2 = uVar2 - 1;
  } while (-1 < (longlong)uVar2);
  *(double *)(*(longlong *)(param_1 + 0x28) + -8) = dVar5;
  return 1;
}



/* ===== 180486ec0 FUN_180486ec0 ===== */

undefined8 FUN_180486ec0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  uint uVar10;
  
  lVar6 = FUN_1804a8dd0(param_1,1);
  iVar4 = FUN_1804929b0(lVar6);
  uVar10 = iVar4 + 1;
  iVar4 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20);
  uVar5 = uVar10;
  if (iVar4 != 0x10) {
    if (iVar4 != 0x18) {
                    /* WARNING: Subroutine does not return */
      FUN_180484220(param_1,0x5b9);
    }
    uVar5 = FUN_1804a8a70(param_1,2);
    while ((int)uVar5 < (int)uVar10) {
      if (uVar10 < *(uint *)(lVar6 + 0x30)) {
        puVar7 = (undefined8 *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar10 * 8);
      }
      else {
        puVar7 = (undefined8 *)FUN_180493360(param_1,lVar6,uVar10);
      }
      uVar1 = uVar10 - 1;
      uVar10 = uVar10 - 1;
      if (uVar1 < *(uint *)(lVar6 + 0x30)) {
        puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar10 * 8);
      }
      else {
        puVar8 = (undefined8 *)FUN_1804927e0(lVar6,uVar10);
      }
      if (puVar8 == (undefined8 *)0x0) {
        *puVar7 = 0xffffffffffffffff;
      }
      else {
        *puVar7 = *puVar8;
      }
    }
  }
  if (uVar5 < *(uint *)(lVar6 + 0x30)) {
    puVar9 = (ulonglong *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar5 * 8);
  }
  else {
    puVar9 = (ulonglong *)FUN_180493360(param_1,lVar6,uVar5);
  }
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8);
  *puVar9 = uVar2;
  if (((0xfffffff6 < (int)((longlong)uVar2 >> 0x2f) + 4U) &&
      ((*(byte *)((uVar2 & 0x7fffffffffff) + 8) & 3) != 0)) && ((*(byte *)(lVar6 + 8) & 4) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) & 0xfb;
    *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(lVar3 + 0x40);
    *(longlong *)(lVar3 + 0x40) = lVar6;
  }
  return 0;
}



/* ===== 180487020 FUN_180487020 ===== */

undefined8 FUN_180487020(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  
  lVar7 = FUN_1804a8dd0(param_1,1);
  uVar8 = FUN_1804a8f10(param_1,2);
  uVar4 = FUN_1804a8e80(param_1,3,1);
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x18);
  if ((plVar9 < *(longlong **)(param_1 + 0x28)) && (*plVar9 != -1)) {
    uVar5 = FUN_1804a8a70(param_1,4);
  }
  else {
    uVar5 = FUN_1804929b0(lVar7);
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  puVar1 = (uint *)(lVar3 + 200);
  *(longlong *)(lVar3 + 0xe0) = param_1;
  *(undefined8 *)puVar1 = *(undefined8 *)(lVar3 + 0xd8);
  piVar10 = (int *)FUN_1804aa1f0(puVar1,lVar7,uVar8,uVar4,uVar5);
  if (piVar10 != (int *)0x0) {
    uVar11 = FUN_180491d30(param_1,*(undefined8 *)(piVar10 + 4),*piVar10 - piVar10[4]);
    *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar11 | 0xfffd800000000000;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
      FUN_180491200(param_1);
    }
    return 1;
  }
  uVar2 = *puVar1;
  if (uVar2 < *(uint *)(lVar7 + 0x30)) {
    puVar12 = (undefined8 *)(*(longlong *)(lVar7 + 0x10) + (longlong)(int)uVar2 * 8);
  }
  else {
    puVar12 = (undefined8 *)FUN_1804927e0(lVar7,uVar2);
  }
  uVar11 = 0;
  if (puVar12 != (undefined8 *)0x0) {
    uVar6 = (uint)((longlong)*puVar12 >> 0x2f);
    if (uVar6 < 0xfffffff3) {
      uVar11 = 0xd;
    }
    else {
      uVar11 = (ulonglong)~uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804842f0(param_1,0x5df,(&PTR_DAT_18056e940)[uVar11],uVar2);
}



/* ===== 180487170 FUN_180487170 ===== */

undefined8 FUN_180487170(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1804a8dd0(param_1,1);
  uVar1 = FUN_1804929b0(uVar2);
  FUN_18047fb50(param_1,2);
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) != -1) {
    FUN_1804a8a20(param_1,2);
  }
  FUN_1804872e0(param_1,1,uVar1);
  return 0;
}



/* ===== 1804871e0 FUN_1804871e0 ===== */

undefined8 FUN_1804871e0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  double *pdVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  puVar2 = *(ulonglong **)(param_1 + 0x20);
  uVar10 = *(longlong *)(param_1 + 0x28) - (longlong)puVar2 >> 3;
  uVar9 = (uint)uVar10;
  iVar6 = uVar9 + 1;
  if (uVar9 == 0) {
    iVar6 = 0;
  }
  uVar4 = FUN_180492ab0(param_1,iVar6,1);
  pdVar5 = (double *)
           FUN_180493400(param_1,uVar4,
                         *(ulonglong *)
                          ((*(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff)
                          + 0x30) & 0x7fffffffffff);
  *pdVar5 = (double)(int)uVar9;
  if (uVar9 != 0) {
    lVar3 = *(longlong *)(uVar4 + 0x10);
    uVar8 = 0;
    if (1 < uVar9) {
      puVar1 = (ulonglong *)(lVar3 + 8);
      if ((puVar2 + (uVar9 - 1) < puVar1) || (puVar1 + (uVar9 - 1) < puVar2)) {
        FUN_180540530(puVar1,puVar2,(uVar10 & 0xffffffff) << 3);
        goto LAB_18048729f;
      }
    }
    do {
      *(ulonglong *)(lVar3 + 8 + uVar8 * 8) = puVar2[uVar8];
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < uVar9);
  }
LAB_18048729f:
  *puVar2 = uVar4 | 0xfffa000000000000;
  *(ulonglong **)(param_1 + 0x28) = puVar2 + 1;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 1804872e0 FUN_1804872e0 ===== */

void FUN_1804872e0(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 <= param_2) {
    return;
  }
LAB_180487320:
  FUN_18047f6f0(param_1,1,param_2);
  FUN_18047f6f0(param_1,1,param_3);
  iVar1 = FUN_180487860(param_1,0xffffffff,0xfffffffe);
  if (iVar1 == 0) {
    FUN_18047fb50(param_1,0xfffffffd);
  }
  else {
    FUN_18047f7e0(param_1,1,param_2);
    FUN_18047f7e0(param_1,1,param_3);
  }
  if (param_3 - param_2 == 1) {
    return;
  }
  iVar1 = (param_2 + param_3) / 2;
  FUN_18047f6f0(param_1,1,iVar1);
  FUN_18047f6f0(param_1,1,param_2);
  iVar2 = FUN_180487860(param_1,0xfffffffe,0xffffffff);
  if (iVar2 == 0) {
    FUN_18047fb50(param_1,0xfffffffe);
    FUN_18047f6f0(param_1,1,param_3);
    iVar2 = FUN_180487860(param_1,0xffffffff,0xfffffffe);
    if (iVar2 == 0) {
      FUN_18047fb50(param_1,0xfffffffd);
    }
    else {
      FUN_18047f7e0(param_1,1,iVar1);
      FUN_18047f7e0(param_1,1,param_3);
    }
  }
  else {
    FUN_18047f7e0(param_1,1,iVar1);
    FUN_18047f7e0(param_1,1,param_2);
  }
  if (param_3 - param_2 == 2) {
    return;
  }
  FUN_18047f6f0(param_1,1,iVar1);
  FUN_18047f610(param_1,0xffffffff);
  FUN_18047f6f0(param_1,1,param_3 + -1);
  FUN_18047f7e0(param_1,1,iVar1);
  FUN_18047f7e0(param_1,1,param_3 + -1);
  iVar2 = param_3 + -1;
  iVar1 = param_2;
  do {
    while( true ) {
      iVar4 = iVar1 + 1;
      FUN_18047f6f0(param_1,1,iVar4);
      iVar3 = FUN_18047fe10(param_1,2);
      if (iVar3 == 0) {
        iVar3 = FUN_18047ee60(param_1,0xffffffff,0xfffffffe);
      }
      else {
        FUN_18047f610(param_1,2);
        FUN_18047f610(param_1,0xfffffffe);
        FUN_18047f610(param_1,0xfffffffc);
        FUN_18047e730(param_1,2,1);
        iVar3 = FUN_18047fbf0(param_1,0xffffffff);
        FUN_18047fb50(param_1,0xfffffffe);
      }
      if (iVar3 == 0) break;
      if (param_3 <= iVar4) {
LAB_1804876e9:
                    /* WARNING: Subroutine does not return */
        FUN_180484220(param_1,0x614);
      }
      FUN_18047fb50(param_1,0xfffffffe);
      iVar1 = iVar4;
    }
    while( true ) {
      iVar2 = iVar2 + -1;
      FUN_18047f6f0(param_1,1,iVar2);
      iVar3 = FUN_18047fe10(param_1,2);
      if (iVar3 == 0) {
        iVar3 = FUN_18047ee60(param_1,0xfffffffd,0xffffffff);
      }
      else {
        FUN_18047f610(param_1,2);
        FUN_18047f610(param_1,0xfffffffc);
        FUN_18047f610(param_1,0xfffffffd);
        FUN_18047e730(param_1,2,1);
        iVar3 = FUN_18047fbf0(param_1,0xffffffff);
        FUN_18047fb50(param_1,0xfffffffe);
      }
      if (iVar3 == 0) break;
      if (iVar2 <= param_2) goto LAB_1804876e9;
      FUN_18047fb50(param_1,0xfffffffe);
    }
    if (iVar2 < iVar4) break;
    FUN_18047f7e0(param_1,1,iVar4);
    FUN_18047f7e0(param_1,1,iVar2);
    iVar1 = iVar4;
  } while( true );
  FUN_18047fb50(param_1,0xfffffffc);
  FUN_18047f6f0(param_1,1,param_3 + -1);
  FUN_18047f6f0(param_1,1,iVar4);
  FUN_18047f7e0(param_1,1,param_3 + -1);
  FUN_18047f7e0(param_1,1,iVar4);
  if (iVar4 - param_2 < param_3 - iVar4) {
    iVar2 = iVar1;
    iVar3 = param_2;
    param_2 = iVar1 + 2;
  }
  else {
    iVar3 = iVar1 + 2;
    iVar2 = param_3;
    param_3 = iVar1;
  }
  FUN_1804872e0(param_1,iVar3,iVar2);
  if (param_3 <= param_2) {
    return;
  }
  goto LAB_180487320;
}



/* ===== 180487700 FUN_180487700 ===== */

undefined8 FUN_180487700(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1804a8dd0(param_1,1);
  FUN_180492440(uVar1);
  return 0;
}



/* ===== 180487720 FUN_180487720 ===== */

undefined8 FUN_180487720(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1804a8a70(param_1,1);
  uVar2 = FUN_1804a8a70(param_1,2);
  FUN_18047e8f0(param_1,uVar1,uVar2);
  return 1;
}



/* ===== 180487770 FUN_180487770 ===== */

undefined8 FUN_180487770(longlong param_1)

{
  FUN_1804a90d0(param_1,"table",&DAT_18056dc40,&PTR_FUN_18056dc10);
  FUN_18047eb70(param_1,0xffffd8ee,"unpack");
  FUN_18047f8e0(param_1,0xfffffffe,"unpack");
  FUN_1804a9000(param_1,"table.new",&LAB_180487840,
                *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) & 0x7fffffffffff);
  FUN_1804a9000(param_1,"table.clear",&LAB_180487820,
                *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) & 0x7fffffffffff);
  return 1;
}



/* ===== 180487860 FUN_180487860 ===== */

ulonglong FUN_180487860(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = FUN_18047fe10(param_1,2);
  if (iVar1 == 0) {
    uVar3 = FUN_18047ee60(param_1,param_2,param_3);
    return uVar3;
  }
  FUN_18047f610(param_1,2);
  FUN_18047f610(param_1,param_2 + -1);
  FUN_18047f610(param_1,param_3 + -2);
  FUN_18047e730(param_1,2,1);
  uVar2 = FUN_18047fbf0(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  return (ulonglong)uVar2;
}



/* ===== 180487910 FUN_180487910 ===== */

undefined8 FUN_180487910(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_res8 [2];
  undefined8 local_res10;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x188);
  *(longlong *)(lVar2 + 0x10) = param_1;
  local_res8[0] = 0;
  puVar1 = *(ulonglong **)(param_1 + 0x20) + 1;
  if ((*(ulonglong **)(param_1 + 0x28) <= puVar1) ||
     (uVar3 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar3 >> 0x2f) != -0xb)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,1,10);
  }
  uVar5 = FUN_1804b0bd0(lVar2,uVar3 & 0x7fffffffffff,puVar1,&local_res10,local_res8);
  if ((local_res8[0] & 1) != 0) {
    uVar5 = FUN_180489790(param_1,lVar2,uVar5,0);
    return uVar5;
  }
  iVar4 = FUN_1804b0ab0(lVar2,uVar5,*(longlong *)(param_1 + 0x28) + -8,local_res10);
  if ((iVar4 != 0) &&
     (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10))) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 180487a00 FUN_180487a00 ===== */

undefined8 FUN_180487a00(longlong param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  undefined8 local_res10;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x188);
  *(longlong *)(lVar1 + 0x10) = param_1;
  puVar2 = *(ulonglong **)(param_1 + 0x20);
  local_res8[0] = 0;
  if ((*(ulonglong **)(param_1 + 0x28) <= puVar2 + 2) || ((int)((longlong)*puVar2 >> 0x2f) != -0xb))
  {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,1,10);
  }
  uVar3 = FUN_1804b0bd0(lVar1,*puVar2 & 0x7fffffffffff,puVar2 + 1,&local_res10,local_res8);
  if ((local_res8[0] & 1) == 0) {
    FUN_1804b11e0(lVar1,uVar3,local_res10,puVar2 + 2,local_res8[0]);
    return 0;
  }
  if ((local_res8[0] >> 0x19 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1,0xeaa);
  }
  uVar3 = FUN_180489790(param_1,lVar1,uVar3,1);
  return uVar3;
}



/* ===== 180487b20 FUN_180487b20 ===== */

undefined8 FUN_180487b20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar16;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar1[2] = param_1;
  uVar6 = FUN_1804895a0(param_1,plVar1,0);
  lVar2 = *plVar1;
  uVar12 = (ulonglong)uVar6;
  bVar4 = (byte)((uint)*(undefined4 *)(lVar2 + uVar12 * 0x18) >> 0x18);
  uVar13 = uVar12;
  while (puVar5 = (ushort *)(lVar2 + uVar13 * 0x18), bVar4 >> 4 == 8) {
    uVar13 = (ulonglong)*puVar5;
    bVar4 = (byte)((uint)*(undefined4 *)(lVar2 + uVar13 * 0x18) >> 0x18);
  }
  uVar7 = FUN_1804ab410(plVar1,uVar12,local_res8);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if ((uVar7 >> 0x14 & 1) == 0) {
    lVar11 = 8;
    lVar14 = 0;
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
    plVar3[2] = param_1;
    uVar13 = *(longlong *)(param_1 + 0x20) + 8;
    if (*(ulonglong *)(param_1 + 0x28) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_1804840c0(param_1,2,0x227);
    }
    FUN_1804b23e0(plVar3,*plVar3 + 0xd8,local_res10,uVar13,CONCAT44(uVar16,0x200));
    local_res8[0] = FUN_1804abda0(plVar1,puVar5,local_res10[0]);
    lVar11 = 0x10;
    lVar14 = 8;
  }
  if (local_res8[0] == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,1,0xc77);
  }
  lVar11 = lVar11 + lVar2;
  uVar13 = FUN_1804b10c0(plVar1,uVar6,local_res8[0],uVar7);
  puVar15 = (ulonglong *)(lVar14 + lVar2);
  *puVar15 = uVar13 | 0xfffa800000000000;
  FUN_1804b2190(plVar1,puVar5,local_res8[0],uVar13 + 0x10,lVar11,
                (int)(*(longlong *)(param_1 + 0x28) - lVar11 >> 3));
  if (((((byte)((uint)*(undefined4 *)puVar5 >> 0x1c) == 1) &&
       (puVar8 = (ulonglong *)FUN_1804927e0(plVar1[4],-uVar6), puVar8 != (ulonglong *)0x0)) &&
      ((int)((longlong)*puVar8 >> 0x2f) == -0xc)) &&
     (((uVar12 = *puVar8 & 0x7fffffffffff, uVar12 != 0 && ((*(byte *)(uVar12 + 10) & 4) == 0)) &&
      ((puVar9 = (undefined8 *)
                 FUN_1804942b0(uVar12,2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1c0)),
       puVar9 != (undefined8 *)0x0 &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x2e0),
       *(longlong *)(lVar2 + 0x20) != 0)))))) {
    puVar10 = (undefined8 *)FUN_1804931f0(param_1,lVar2,puVar15);
    *puVar10 = *puVar9;
    if ((*(byte *)(lVar2 + 8) & 4) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x10);
      *(byte *)(lVar2 + 8) = *(byte *)(lVar2 + 8) & 0xfb;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar14 + 0x40);
      *(longlong *)(lVar14 + 0x40) = lVar2;
    }
    *(byte *)(uVar13 + 8) = *(byte *)(uVar13 + 8) | 0x10;
  }
  *(longlong *)(param_1 + 0x28) = lVar11;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 180487d90 FUN_180487d90 ===== */

void FUN_180487d90(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar2[2] = param_1;
  if ((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
     (uVar6 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar6 >> 0x2f) != -0xb)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,1,10);
  }
  uVar6 = uVar6 & 0x7fffffffffff;
  uVar7 = (uint)*(ushort *)(uVar6 + 10);
  if (uVar7 == 0x18) {
    uVar7 = *(uint *)(uVar6 + 0x10);
    iVar4 = 0x13;
  }
  else {
    iVar4 = FUN_1804b4530();
    if (-1 < iVar4) {
      return;
    }
    iVar4 = 9;
  }
  uVar6 = (ulonglong)uVar7;
  lVar5 = *plVar2;
  uVar1 = *(uint *)(lVar5 + uVar6 * 0x18);
  bVar3 = (byte)(uVar1 >> 0x18);
  while (bVar3 >> 4 == 8) {
    uVar6 = (ulonglong)*(ushort *)(lVar5 + uVar6 * 0x18);
    uVar1 = *(uint *)(lVar5 + uVar6 * 0x18);
    bVar3 = (byte)(uVar1 >> 0x18);
  }
  uVar8 = uVar1 & 0xffff;
  if ((byte)(uVar1 >> 0x1c) != 2) {
    uVar8 = uVar7;
  }
  lVar5 = FUN_1804ab8d0(plVar2,uVar8,iVar4);
  if (lVar5 == 0) {
    if (iVar4 == 9) {
      lVar5 = FUN_1804aba80(param_1,uVar8,0);
                    /* WARNING: Subroutine does not return */
      FUN_1804842f0(param_1,0xdf7,lVar5 + 0x18);
    }
    FUN_180487b20();
  }
  else {
    FUN_180494e90(param_1,lVar5);
  }
  return;
}



/* ===== 180487ed0 FUN_180487ed0 ===== */

undefined8 FUN_180487ed0(longlong param_1)

{
  uint *puVar1;
  ushort uVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  char *pcVar11;
  uint *puVar12;
  uint uVar13;
  
  if ((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
     (uVar7 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar7 >> 0x2f) != -0xb)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,1,10);
  }
  uVar7 = uVar7 & 0x7fffffffffff;
  uVar2 = *(ushort *)(uVar7 + 10);
  uVar8 = (ulonglong)uVar2;
  puVar1 = (uint *)(uVar7 + 0x10);
  uVar13 = (uint)uVar2;
  puVar12 = puVar1;
  if (uVar13 == 0x18) {
    uVar13 = *puVar1;
    pcVar11 = "ctype<%s>";
LAB_180487f40:
    lVar5 = FUN_1804aba80(param_1,uVar13,0);
    FUN_180498630(param_1,pcVar11,lVar5 + 0x18,puVar12);
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
    plVar3[2] = param_1;
    lVar5 = *plVar3;
    uVar10 = *(uint *)(lVar5 + uVar8 * 0x18);
    bVar4 = (byte)(uVar10 >> 0x18);
    while (bVar4 >> 4 == 8) {
      uVar8 = (ulonglong)*(ushort *)(lVar5 + uVar8 * 0x18);
      uVar10 = *(uint *)(lVar5 + uVar8 * 0x18);
      bVar4 = (byte)(uVar10 >> 0x18);
    }
    puVar9 = (uint *)(lVar5 + uVar8 * 0x18);
    if ((uVar10 & 0xf0800000) == 0x20800000) {
      puVar12 = *(uint **)puVar1;
      do {
        uVar10 = *(uint *)(lVar5 + (ulonglong)(ushort)*puVar9 * 0x18);
        puVar9 = (uint *)(lVar5 + (ulonglong)(ushort)*puVar9 * 0x18);
      } while ((byte)(uVar10 >> 0x1c) == 8);
    }
    if ((uVar10 & 0xf4000000) == 0x34000000) {
      uVar7 = FUN_1804abb90(param_1,puVar1);
    }
    else {
      if ((puVar9[1] != 8) || ((uVar10 & 0xfc000000) != 0)) {
        uVar10 = uVar10 >> 0x1c;
        pcVar11 = "cdata<%s>: %p";
        if (uVar10 == 6) {
          puVar12 = *(uint **)puVar12;
        }
        else if (uVar10 == 5) {
          puVar12 = (uint *)(ulonglong)*puVar12;
          pcVar11 = "cdata<%s>: %d";
        }
        else {
          if (uVar10 == 2) {
            if (puVar9[1] == 4) {
              puVar12 = (uint *)(ulonglong)*puVar12;
            }
            else {
              puVar12 = *(uint **)puVar12;
            }
            do {
              uVar10 = *puVar9;
              puVar9 = (uint *)(lVar5 + (ulonglong)(ushort)uVar10 * 0x18);
            } while ((byte)((uint)*(undefined4 *)(lVar5 + (ulonglong)(ushort)uVar10 * 0x18) >> 0x1c)
                     == 8);
          }
          if ((((byte)(*puVar9 >> 0x1c) == 1) || ((*puVar9 & 0xf8000000) == 0x38000000)) &&
             (lVar5 = FUN_1804ab8d0(plVar3,((longlong)puVar9 - lVar5) / 0x18,0x12), lVar5 != 0)) {
            uVar6 = FUN_180494e90(param_1,lVar5);
            return uVar6;
          }
        }
        goto LAB_180487f40;
      }
      uVar7 = FUN_1804abc70(param_1,*(undefined8 *)puVar1,uVar10 & 0x800000);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar7 | 0xfffd800000000000;
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (*(ulonglong *)(lVar5 + 0x18) <= *(ulonglong *)(lVar5 + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 180488180 FUN_180488180 ===== */

undefined8 FUN_180488180(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  ushort *puVar5;
  int iVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  puVar7 = (ulonglong *)FUN_180489710();
  if ((int)((longlong)*puVar7 >> 0x2f) == -0xb) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
    plVar2[2] = param_1;
    lVar3 = *plVar2;
    uVar1 = *(uint *)(lVar3 + (ulonglong)*(ushort *)((*puVar7 & 0x7fffffffffff) + 10) * 0x18);
    if ((byte)(uVar1 >> 0x1c) == 0xc) {
      uVar9 = (ulonglong)(uVar1 & 0xffff);
      bVar4 = (byte)((uint)*(undefined4 *)(lVar3 + uVar9 * 0x18) >> 0x18);
      uVar8 = uVar9;
      while (puVar5 = (ushort *)(lVar3 + uVar8 * 0x18), bVar4 >> 4 == 8) {
        uVar8 = (ulonglong)*puVar5;
        bVar4 = (byte)((uint)*(undefined4 *)(lVar3 + uVar8 * 0x18) >> 0x18);
      }
      iVar6 = FUN_1804b2aa0(plVar2,puVar5,uVar9,*(longlong *)(param_1 + 0x28) + -8,
                            *(undefined8 *)((*puVar7 & 0x7fffffffffff) + 0x10));
      if (iVar6 == 0) {
        return 1;
      }
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10) <
          *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18)) {
        return 1;
      }
      FUN_180491200(param_1);
      return 1;
    }
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = *puVar7;
  return 1;
}



/* ===== 180488270 FUN_180488270 ===== */

undefined8 FUN_180488270(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong *puVar5;
  ushort *puVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  puVar5 = (ulonglong *)FUN_180489710();
  uVar8 = *(longlong *)(param_1 + 0x20) + 0x10;
  if ((uVar8 < *(ulonglong *)(param_1 + 0x28)) && ((int)((longlong)*puVar5 >> 0x2f) == -0xb)) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
    plVar2[2] = param_1;
    lVar3 = *plVar2;
    uVar1 = *(uint *)(lVar3 + (ulonglong)*(ushort *)((*puVar5 & 0x7fffffffffff) + 10) * 0x18);
    if ((byte)(uVar1 >> 0x1c) == 0xc) {
      uVar9 = (ulonglong)(uVar1 & 0xffff);
      uVar7 = 0;
      uVar1 = *(uint *)(lVar3 + uVar9 * 0x18);
      bVar4 = (byte)(uVar1 >> 0x18);
      while (bVar4 >> 4 == 8) {
        puVar6 = (ushort *)(lVar3 + uVar9 * 0x18);
        if ((char)puVar6[1] == '\x01') {
          uVar7 = uVar7 | *(uint *)(puVar6 + 2);
        }
        uVar9 = (ulonglong)*puVar6;
        uVar1 = *(uint *)(lVar3 + uVar9 * 0x18);
        bVar4 = (byte)(uVar1 >> 0x18);
      }
      if (((uVar1 | uVar7) >> 0x19 & 1) == 0) {
        FUN_1804b23e0(plVar2,lVar3 + uVar9 * 0x18,*(undefined8 *)((*puVar5 & 0x7fffffffffff) + 0x10)
                      ,uVar8,0);
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180484220(param_1,0xeaa);
}



/* ===== 180488370 FUN_180488370 ===== */

undefined8 FUN_180488370(longlong param_1)

{
  ulonglong uVar1;
  
  if (((*(ulonglong **)(param_1 + 0x20) < *(ulonglong **)(param_1 + 0x28)) &&
      (uVar1 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar1 >> 0x2f) == -0xd)) &&
     (uVar1 = uVar1 & 0x7fffffffffff, *(char *)(uVar1 + 10) == '\x02')) {
    FUN_1804b54f0(uVar1 + 0x30);
  }
  return 0;
}



/* ===== 1804883c0 FUN_1804883c0 ===== */

void FUN_1804883c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1804a8a20(param_1,2);
  FUN_180489400(param_1,uVar1);
  return;
}



/* ===== 1804883f0 FUN_1804883f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804883f0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [32];
  longlong local_78;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_b8;
  local_78 = FUN_1804a8d10(param_1,1);
  local_78 = local_78 + 0x18;
  local_48 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x188);
  *(longlong *)(local_48 + 0x10) = param_1;
  local_40 = *(longlong *)(param_1 + 0x20) + 8;
  local_24 = 5;
  local_50 = param_1;
  local_38 = local_78;
  iVar1 = FUN_1804b07e0(local_98);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180484920(param_1,iVar1);
  }
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 0;
}



/* ===== 1804884b0 FUN_1804884b0 ===== */

undefined8 FUN_1804884b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  uint uVar8;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar1[2] = param_1;
  uVar5 = FUN_1804895a0(param_1,plVar1,0);
  lVar2 = *plVar1;
  uVar7 = (ulonglong)uVar5;
  bVar3 = (byte)((uint)*(undefined4 *)(lVar2 + uVar7 * 0x18) >> 0x18);
  while (puVar4 = (uint *)(lVar2 + uVar7 * 0x18), bVar3 >> 4 == 8) {
    uVar7 = (ulonglong)(ushort)*puVar4;
    bVar3 = (byte)((uint)*(undefined4 *)(lVar2 + uVar7 * 0x18) >> 0x18);
  }
  puVar6 = (ulonglong *)FUN_1804a89f0(param_1,2);
  *(ulonglong **)(param_1 + 0x28) = puVar6 + 1;
  if (((0xfffffff < *puVar4) && (uVar8 = *puVar4 >> 0x1c, uVar8 != 2)) && (uVar8 != 5)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,1,0xc68);
  }
  if (((int)((longlong)*puVar6 >> 0x2f) != -0xb) ||
     (*(ushort *)((*puVar6 & 0x7fffffffffff) + 10) != uVar5)) {
    uVar7 = FUN_1804916f0(plVar1[2],(ulonglong)puVar4[1] + 0x10);
    *(undefined1 *)(uVar7 + 9) = 10;
    *(short *)(uVar7 + 10) = (short)uVar5;
    FUN_1804b23e0(plVar1,puVar4,uVar7 + 0x10,puVar6,1);
    *puVar6 = uVar7 | 0xfffa800000000000;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
      FUN_180491200(param_1);
    }
  }
  return 1;
}



/* ===== 180488600 FUN_180488600 ===== */

undefined8 FUN_180488600(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x188);
  *(longlong *)(lVar1 + 0x10) = param_1;
  uVar2 = FUN_1804895a0(param_1,lVar1,*(longlong *)(param_1 + 0x20) + 8);
  uVar3 = FUN_1804916f0(*(undefined8 *)(lVar1 + 0x10),0x14);
  *(undefined1 *)(uVar3 + 9) = 10;
  *(undefined2 *)(uVar3 + 10) = 0x18;
  *(undefined4 *)(uVar3 + 0x10) = uVar2;
  *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar3 | 0xfffa800000000000;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 180488690 FUN_180488690 ===== */

undefined8 FUN_180488690(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  double *pdVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  uint local_res8 [2];
  
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar3[2] = param_1;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar4[2] = param_1;
  if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,1,0x227);
  }
  FUN_1804b23e0(plVar4,*plVar4 + 0xd8,local_res8,*(ulonglong *)(param_1 + 0x20),0x100);
  uVar6 = (ulonglong)local_res8[0];
  if ((local_res8[0] == 0) || (*(uint *)(plVar3 + 1) <= local_res8[0])) {
    return 0;
  }
  lVar5 = *plVar3;
  FUN_18047e8f0(param_1,0,4);
  iVar2 = *(int *)(lVar5 + uVar6 * 0x18);
  uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  uVar7 = FUN_180491d30(param_1,&DAT_1806e4e8c,4);
  pdVar8 = (double *)FUN_180493400(param_1,uVar10,uVar7);
  *pdVar8 = (double)iVar2;
  iVar2 = *(int *)(lVar5 + 4 + uVar6 * 0x18);
  if (iVar2 != -1) {
    uVar7 = FUN_180491d30(param_1,&DAT_1806e0df8,4);
    pdVar8 = (double *)FUN_180493400(param_1,uVar10,uVar7);
    *pdVar8 = (double)iVar2;
  }
  uVar1 = *(ushort *)(lVar5 + 8 + uVar6 * 0x18);
  if (uVar1 != 0) {
    uVar7 = FUN_180491d30(param_1,&DAT_18056e150,3);
    pdVar8 = (double *)FUN_180493400(param_1,uVar10,uVar7);
    *pdVar8 = (double)uVar1;
  }
  uVar6 = *(ulonglong *)(lVar5 + 0x10 + uVar6 * 0x18);
  if (uVar6 != 0) {
    if ((~*(byte *)(*(longlong *)(param_1 + 0x10) + 0x20) & *(byte *)(uVar6 + 8) & 3) != 0) {
      *(byte *)(uVar6 + 8) = *(byte *)(uVar6 + 8) ^ 3;
    }
    uVar7 = FUN_180491d30(param_1,&DAT_18058b644,4);
    puVar9 = (ulonglong *)FUN_180493400(param_1,uVar10,uVar7);
    *puVar9 = uVar6 | 0xfffd800000000000;
  }
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 180488890 FUN_180488890 ===== */

undefined8 FUN_180488890(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar1[2] = param_1;
  uVar2 = FUN_1804895a0(param_1,plVar1,0);
  uVar4 = 0;
  puVar5 = (ulonglong *)FUN_1804a89f0(param_1,2);
  if ((int)((longlong)*puVar5 >> 0x2f) == -0xb) {
    uVar9 = *puVar5 & 0x7fffffffffff;
    uVar3 = (uint)*(ushort *)(uVar9 + 10);
    if (uVar3 == 0x18) {
      uVar3 = *(uint *)(uVar9 + 0x10);
    }
    puVar6 = (uint *)FUN_1804aba40(plVar1,uVar2);
    puVar7 = (uint *)FUN_1804aba40(plVar1,uVar3);
    if (puVar6 == puVar7) {
      uVar4 = 1;
    }
    else {
      uVar3 = *puVar6;
      uVar10 = *puVar7 >> 0x1c;
      uVar8 = uVar3 >> 0x1c;
      if ((uVar8 == uVar10) && (puVar6[1] == puVar7[1])) {
        if ((byte)(uVar3 >> 0x1d) == 1) {
          uVar4 = FUN_1804b19c0(plVar1,puVar6,puVar7,8);
        }
        else if ((uVar3 < 0x10000000) || (uVar8 == 4)) {
          uVar4 = (uint)(((*puVar7 ^ uVar3) & 0xfcbfffff) == 0);
        }
      }
      else if ((uVar8 == 1) && (uVar10 == 2)) {
        do {
          uVar4 = *puVar7;
          puVar7 = (uint *)(*plVar1 + (ulonglong)(ushort)uVar4 * 0x18);
        } while ((byte)((uint)*(undefined4 *)(*plVar1 + (ulonglong)(ushort)uVar4 * 0x18) >> 0x1c) ==
                 8);
        uVar4 = 0;
        if (puVar6 == puVar7) {
          uVar4 = 1;
        }
      }
    }
  }
  uVar9 = ~((longlong)(int)(uVar4 + 1) << 0x2f);
  *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar9;
  *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0xf0) = uVar9;
  return 1;
}



/* ===== 180488a10 FUN_180488a10 ===== */

undefined8 FUN_180488a10(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x188);
  *(longlong *)(lVar1 + 0x10) = param_1;
  uVar2 = FUN_1804895a0(param_1,lVar1,0);
  if (((int)((longlong)**(ulonglong **)(param_1 + 0x20) >> 0x2f) == -0xb) &&
     (uVar4 = **(ulonglong **)(param_1 + 0x20) & 0x7fffffffffff, *(char *)(uVar4 + 8) < '\0')) {
    uVar3 = *(uint *)(uVar4 - 4);
LAB_180488ab9:
    *(double *)(*(longlong *)(param_1 + 0x28) + -8) = (double)(int)uVar3;
  }
  else {
    puVar5 = (uint *)FUN_1804aba40(lVar1,uVar2);
    if ((*puVar5 & 0xd0100000) == 0x10100000) {
      uVar2 = FUN_1804896a0(param_1,2);
      uVar3 = FUN_1804abda0(lVar1,puVar5,uVar2);
LAB_180488ab4:
      if (uVar3 != 0xffffffff) goto LAB_180488ab9;
    }
    else if ((byte)(*puVar5 >> 0x1c) < 6) {
      uVar3 = puVar5[1];
      goto LAB_180488ab4;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8) = 0xffffffffffffffff;
  }
  return 1;
}



/* ===== 180488af0 FUN_180488af0 ===== */

undefined8 FUN_180488af0(longlong param_1)

{
  longlong lVar1;
  byte extraout_var;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x188);
  *(longlong *)(lVar1 + 0x10) = param_1;
  uVar2 = FUN_1804895a0(param_1,lVar1,0);
  local_res8[0] = 0;
  FUN_1804ab4a0(lVar1,uVar2,local_res8);
  *(double *)(*(longlong *)(param_1 + 0x28) + -8) = (double)(1 << (extraout_var & 0xf));
  return 1;
}



/* ===== 180488b60 FUN_180488b60 ===== */

undefined8 FUN_180488b60(longlong param_1)

{
  longlong lVar1;
  double *pdVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int local_res8 [8];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x188);
  *(longlong *)(lVar1 + 0x10) = param_1;
  uVar3 = FUN_1804895a0(param_1,lVar1,0);
  uVar4 = FUN_1804a8d10(param_1,2);
  puVar5 = (undefined4 *)FUN_1804aba40(lVar1,uVar3);
  if (((byte)((uint)*puVar5 >> 0x1c) == 1) && (puVar5[1] != -1)) {
    puVar6 = (uint *)FUN_1804ab270(lVar1,puVar5,uVar4,local_res8,0);
    if (puVar6 != (uint *)0x0) {
      *(double *)(*(longlong *)(param_1 + 0x28) + -8) = (double)local_res8[0];
      if (*puVar6 >> 0x1c == 9) {
        return 1;
      }
      if (*puVar6 >> 0x1c == 10) {
        pdVar2 = *(double **)(param_1 + 0x28);
        *(double **)(param_1 + 0x28) = pdVar2 + 1;
        *pdVar2 = (double)(*puVar6 & 0x7f);
        pdVar2 = *(double **)(param_1 + 0x28);
        *(double **)(param_1 + 0x28) = pdVar2 + 1;
        *pdVar2 = (double)(*puVar6 >> 8 & 0x7f);
        return 3;
      }
    }
  }
  return 0;
}



/* ===== 180488c70 FUN_180488c70 ===== */

undefined8 FUN_180488c70(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  double *pdVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_res8 [2];
  
  piVar4 = (int *)FUN_18051bfb0();
  iVar1 = *piVar4;
  if (*(ulonglong *)(param_1 + 0x20) < *(ulonglong *)(param_1 + 0x28)) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
    plVar2[2] = param_1;
    if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
      FUN_1804840c0(param_1,1,0x227);
    }
    FUN_1804b23e0(plVar2,*plVar2 + 0xd8,local_res8,*(ulonglong *)(param_1 + 0x20),0x100);
    puVar5 = (undefined4 *)FUN_18051bfb0();
    *puVar5 = local_res8[0];
  }
  pdVar3 = *(double **)(param_1 + 0x28);
  *(double **)(param_1 + 0x28) = pdVar3 + 1;
  *pdVar3 = (double)iVar1;
  return 1;
}



/* ===== 180488d10 FUN_180488d10 ===== */

undefined8 FUN_180488d10(longlong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  size_t sVar6;
  char *local_res8;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar2[2] = param_1;
  puVar4 = (ulonglong *)FUN_1804a89f0(param_1,1);
  puVar1 = puVar4 + 1;
  if ((puVar1 < *(ulonglong **)(param_1 + 0x28)) && (*puVar1 != 0xffffffffffffffff)) {
    iVar3 = FUN_1804896a0(param_1,2);
    sVar6 = (size_t)iVar3;
    FUN_1804b23e0(plVar2,*plVar2 + 0x1e0,&local_res8,puVar4,0x100);
  }
  else {
    FUN_1804b23e0(plVar2,*plVar2 + 0x1f8,&local_res8,puVar4,0x100);
    sVar6 = strlen(local_res8);
  }
  *(ulonglong **)(param_1 + 0x28) = puVar1;
  uVar5 = FUN_180491d30(param_1,local_res8,sVar6);
  *puVar4 = uVar5 | 0xfffd800000000000;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 180488e10 FUN_180488e10 ===== */

undefined8 FUN_180488e10(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar1[2] = param_1;
  if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,1,0x227);
  }
  FUN_1804b23e0(plVar1,*plVar1 + 0x1c8,local_res18,*(ulonglong *)(param_1 + 0x20),0x100);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar1[2] = param_1;
  uVar2 = *(longlong *)(param_1 + 0x20) + 8;
  if (*(ulonglong *)(param_1 + 0x28) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,2,0x227);
  }
  FUN_1804b23e0(plVar1,*plVar1 + 0x1e0,&local_res10,uVar2,0x200);
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 8);
  if (((int)((longlong)uVar2 >> 0x2f) == -5) &&
     (*(ulonglong *)(param_1 + 0x28) <= *(longlong *)(param_1 + 0x20) + 0x10U)) {
    local_res8[0] = *(int *)((uVar2 & 0x7fffffffffff) + 0x14) + 1;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
    plVar1[2] = param_1;
    uVar2 = *(longlong *)(param_1 + 0x20) + 0x10;
    if (*(ulonglong *)(param_1 + 0x28) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1804840c0(param_1,3,0x227);
    }
    FUN_1804b23e0(plVar1,*plVar1 + 0xd8,local_res8,uVar2,0x300);
  }
  FUN_180540530(local_res18[0],local_res10,local_res8[0]);
  return 0;
}



/* ===== 180488f60 FUN_180488f60 ===== */

undefined8 FUN_180488f60(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_res18 [2];
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar1[2] = param_1;
  if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,1,0x227);
  }
  FUN_1804b23e0(plVar1,*plVar1 + 0x1c8,local_res18,*(ulonglong *)(param_1 + 0x20),0x100);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar1[2] = param_1;
  uVar3 = *(longlong *)(param_1 + 0x20) + 8;
  if (*(ulonglong *)(param_1 + 0x28) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,2,0x227);
  }
  FUN_1804b23e0(plVar1,*plVar1 + 0xd8,local_res10,uVar3,0x200);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  uVar2 = 0;
  if ((plVar1 < *(longlong **)(param_1 + 0x28)) && (*plVar1 != -1)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
    plVar1[2] = param_1;
    uVar3 = *(longlong *)(param_1 + 0x20) + 0x10;
    if (*(ulonglong *)(param_1 + 0x28) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1804840c0(param_1,3,0x227);
    }
    FUN_1804b23e0(plVar1,*plVar1 + 0xd8,local_res8,uVar3,0x300);
    uVar2 = local_res8[0];
  }
  FUN_180540170(local_res18[0],uVar2,local_res10[0]);
  return 0;
}



/* ===== 180489090 FUN_180489090 ===== */

undefined8 FUN_180489090(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_1804a8d10(param_1,1);
  uVar1 = FUN_1804b0950(uVar2,&DAT_18056e158);
  uVar3 = ~((ulonglong)(1 - ((int)~uVar1 >> 0x1f)) << 0x2f);
  *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar3;
  *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0xf0) = uVar3;
  return 1;
}



/* ===== 1804890e0 FUN_1804890e0 ===== */

undefined8 FUN_1804890e0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar2[2] = param_1;
  uVar5 = FUN_1804895a0(param_1,plVar2,0);
  uVar8 = (ulonglong)uVar5;
  uVar6 = FUN_1804a8dd0(param_1,2);
  lVar3 = *plVar2;
  uVar1 = *(uint *)(lVar3 + uVar8 * 0x18);
  bVar4 = (byte)(uVar1 >> 0x18);
  while (bVar4 >> 4 == 8) {
    uVar8 = (ulonglong)*(ushort *)(lVar3 + uVar8 * 0x18);
    uVar1 = *(uint *)(lVar3 + uVar8 * 0x18);
    bVar4 = (byte)(uVar1 >> 0x18);
  }
  if ((((byte)(uVar1 >> 0x1c) != 1) && ((uVar1 & 0xf4000000) != 0x34000000)) &&
     ((uVar1 & 0xf8000000) != 0x38000000)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,1,0xc68);
  }
  lVar3 = plVar2[4];
  lVar9 = SUB168(SEXT816(-0x2aaaaaaaaaaaaaab) * SEXT816((longlong)(uVar8 * 0x18)),8);
  puVar7 = (ulonglong *)FUN_180493360(param_1,lVar3,(lVar9 >> 2) - (lVar9 >> 0x3f));
  if (*puVar7 != 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1,0x3f3);
  }
  *puVar7 = uVar6 | 0xfffa000000000000;
  if ((*(byte *)(lVar3 + 8) & 4) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x10);
    *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) & 0xfb;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar9 + 0x40);
    *(longlong *)(lVar9 + 0x40) = lVar3;
  }
  uVar8 = FUN_1804916f0(plVar2[2],0x14);
  *(undefined1 *)(uVar8 + 9) = 10;
  *(undefined2 *)(uVar8 + 10) = 0x18;
  *(uint *)(uVar8 + 0x10) = uVar5;
  *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar8 | 0xfffa800000000000;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 180489270 FUN_180489270 ===== */

undefined8 FUN_180489270(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
     (uVar7 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar7 >> 0x2f) != -0xb)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,1,10);
  }
  uVar7 = uVar7 & 0x7fffffffffff;
  puVar5 = (ulonglong *)FUN_1804a89f0(param_1,2);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar2[2] = param_1;
  lVar3 = *plVar2;
  uVar6 = (ulonglong)*(ushort *)(uVar7 + 10);
  uVar1 = *(uint *)(lVar3 + uVar6 * 0x18);
  bVar4 = (byte)(uVar1 >> 0x18);
  while (bVar4 >> 4 == 8) {
    uVar6 = (ulonglong)*(ushort *)(lVar3 + uVar6 * 0x18);
    uVar1 = *(uint *)(lVar3 + uVar6 * 0x18);
    bVar4 = (byte)(uVar1 >> 0x18);
  }
  if ((1 < (uVar1 >> 0x1c) - 1) && ((uVar1 & 0xfc000000) != 0x30000000)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,1,0xc68);
  }
  FUN_1804b12d0(param_1,uVar7,*puVar5 & 0x7fffffffffff,(longlong)*puVar5 >> 0x2f);
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + 8;
  return 1;
}



/* ===== 180489390 FUN_180489390 ===== */

undefined8 FUN_180489390(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_1804a8d10(param_1,1);
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
  if ((puVar1 < *(undefined8 **)(param_1 + 0x28)) &&
     ((uint)((longlong)*puVar1 >> 0x2f) < 0xfffffffe)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  FUN_1804b5440(param_1,*(undefined8 *)
                         ((*(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) +
                         0x10),uVar2,uVar3);
  return 1;
}



/* ===== 180489400 FUN_180489400 ===== */

undefined8 FUN_180489400(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
     (uVar9 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar9 >> 0x2f) != -0xb)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,1,10);
  }
  uVar9 = uVar9 & 0x7fffffffffff;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar1[2] = param_1;
  uVar8 = (ulonglong)*(ushort *)(uVar9 + 10);
  lVar2 = *plVar1;
  bVar4 = (byte)((uint)*(undefined4 *)(lVar2 + uVar8 * 0x18) >> 0x18);
  while (bVar4 >> 4 == 8) {
    uVar8 = (ulonglong)*(ushort *)(lVar2 + uVar8 * 0x18);
    bVar4 = (byte)((uint)*(undefined4 *)(lVar2 + uVar8 * 0x18) >> 0x18);
  }
  if ((bVar4 >> 4 == 2) && (*(int *)(lVar2 + 4 + uVar8 * 0x18) == 8)) {
    uVar6 = FUN_1804b5020(plVar1,*(undefined8 *)(uVar9 + 0x10));
    if ((uVar6 < *(uint *)(plVar1 + 0x18)) && (*(short *)(plVar1[0x17] + (ulonglong)uVar6 * 2) != 0)
       ) {
      lVar2 = plVar1[4];
      if (uVar6 < *(uint *)(lVar2 + 0x30)) {
        puVar7 = (ulonglong *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)uVar6 * 8);
      }
      else {
        puVar7 = (ulonglong *)FUN_180493360(param_1,lVar2,uVar6);
      }
      if (param_2 == 0) {
        *puVar7 = 0xffffffffffffffff;
        *(undefined2 *)(plVar1[0x17] + (ulonglong)uVar6 * 2) = 0;
        uVar5 = *(uint *)((longlong)plVar1 + 0xc4);
        if (uVar6 < *(uint *)((longlong)plVar1 + 0xc4)) {
          uVar5 = uVar6;
        }
        *(uint *)((longlong)plVar1 + 0xc4) = uVar5;
      }
      else {
        *puVar7 = param_2 | 0xfffb800000000000;
        if ((*(byte *)(lVar2 + 8) & 4) != 0) {
          lVar3 = *(longlong *)(param_1 + 0x10);
          *(byte *)(lVar2 + 8) = *(byte *)(lVar2 + 8) & 0xfb;
          *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar3 + 0x40);
          *(longlong *)(lVar3 + 0x40) = lVar2;
        }
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180484220(param_1,0xef4);
}



/* ===== 1804895a0 FUN_1804895a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1804895a0(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [12];
  uint local_8c;
  longlong local_78;
  longlong local_50;
  undefined8 local_48;
  ulonglong *local_40;
  longlong local_38;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_b8;
  if (*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) {
LAB_180489666:
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"C type");
  }
  uVar1 = **(ulonglong **)(param_1 + 0x20);
  iVar2 = (int)((longlong)uVar1 >> 0x2f);
  if (iVar2 == -5) {
    local_78 = (uVar1 & 0x7fffffffffff) + 0x18;
    local_24 = 0x12;
    local_50 = param_1;
    local_48 = param_2;
    local_40 = param_3;
    local_38 = local_78;
    iVar2 = FUN_1804b07e0(local_98);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180484920(param_1,iVar2);
    }
  }
  else {
    if (iVar2 != -0xb) goto LAB_180489666;
    if ((param_3 != (ulonglong *)0x0) && (param_3 < *(ulonglong **)(param_1 + 0x28))) {
                    /* WARNING: Subroutine does not return */
      FUN_1804840c0(param_1,1,0xd08);
    }
    local_8c = (uint)*(ushort *)((uVar1 & 0x7fffffffffff) + 10);
    if (local_8c == 0x18) {
      local_8c = *(uint *)((uVar1 & 0x7fffffffffff) + 0x10);
    }
  }
  return local_8c;
}



/* ===== 1804896a0 FUN_1804896a0 ===== */

undefined4 FUN_1804896a0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined4 local_res10 [6];
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar2[2] = param_1;
  uVar1 = *(longlong *)(param_1 + 0x20) + -8 + (longlong)param_2 * 8;
  if (*(ulonglong *)(param_1 + 0x28) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,param_2,0x227);
  }
  FUN_1804b23e0(plVar2,*plVar2 + 0xd8,local_res10,uVar1,param_2 << 8);
  return local_res10[0];
}



/* ===== 180489710 FUN_180489710 ===== */

void FUN_180489710(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = *(ulonglong **)(param_1 + 0x20);
  if (((*(ulonglong **)(param_1 + 0x28) <= puVar1) || ((int)((longlong)*puVar1 >> 0x2f) != -0xd)) ||
     (uVar3 = *puVar1 & 0x7fffffffffff, *(char *)(uVar3 + 10) != '\x02')) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,1,7);
  }
  if ((*(ulonglong **)(param_1 + 0x28) <= puVar1 + 1) ||
     (uVar2 = puVar1[1], (int)((longlong)uVar2 >> 0x2f) != -5)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,2,4);
  }
  FUN_1804b51a0(param_1,uVar3 + 0x30,uVar2 & 0x7fffffffffff);
  return;
}



/* ===== 180489790 FUN_180489790 ===== */

undefined8 FUN_180489790(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar8 = (param_3 - *param_2) / 6 + (param_3 - *param_2 >> 0x3f);
  uVar9 = (lVar8 >> 2) - (lVar8 >> 0x3f);
  puVar3 = (undefined8 *)FUN_1804ab8d0(param_2,uVar9 & 0xffffffff,param_4);
  if (puVar3 == (undefined8 *)0x0) {
LAB_18048985e:
    lVar8 = FUN_1804aba80(param_1,uVar9 & 0xffffffff,0);
    uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 8);
    uVar2 = (uint)((longlong)uVar9 >> 0x2f);
    if (uVar2 == 0xfffffffb) {
                    /* WARNING: Subroutine does not return */
      FUN_1804842f0(param_1,0xe38,lVar8 + 0x18,(uVar9 & 0x7fffffffffff) + 0x18);
    }
    if (uVar2 == 0xfffffff5) {
      lVar6 = FUN_1804aba80(param_1,*(undefined2 *)((uVar9 & 0x7fffffffffff) + 10),0);
      puVar7 = (undefined *)(lVar6 + 0x18);
    }
    else {
      if (uVar2 < 0xfffffff3) {
        uVar9 = 0xd;
      }
      else {
        uVar9 = (ulonglong)~uVar2;
      }
      puVar7 = (&PTR_DAT_18056e940)[uVar9];
    }
                    /* WARNING: Subroutine does not return */
    FUN_1804842f0(param_1,0xe6d,lVar8 + 0x18,puVar7);
  }
  if ((int)((longlong)*puVar3 >> 0x2f) != -9) {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    if (param_4 == 0) {
      plVar4 = (longlong *)FUN_180494ee0();
      if (plVar4 != (longlong *)0x0) {
        if (*plVar4 != -1) {
          *(longlong *)(*(longlong *)(param_1 + 0x28) + -8) = *plVar4;
          return 1;
        }
        goto LAB_18048985e;
      }
    }
    else {
      puVar3 = (undefined8 *)FUN_1804950a0(param_1,puVar3,puVar1 + 1);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = puVar1[2];
        return 0;
      }
    }
    *puVar1 = **(undefined8 **)(param_1 + 0x28);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + -0x10);
  }
  uVar5 = FUN_180494e90(param_1,puVar3);
  return uVar5;
}



/* ===== 180489900 FUN_180489900 ===== */

void FUN_180489900(longlong param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong *plVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar3[2] = param_1;
  if ((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
     (uVar5 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar5 >> 0x2f) != -0xb)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,1,10);
  }
  lVar6 = *plVar3;
  uVar1 = *(ushort *)((uVar5 & 0x7fffffffffff) + 10);
  uVar5 = (ulonglong)uVar1;
  uVar2 = *(uint *)(lVar6 + uVar5 * 0x18);
  bVar4 = (byte)(uVar2 >> 0x18);
  while (bVar4 >> 4 == 8) {
    uVar5 = (ulonglong)*(ushort *)(lVar6 + uVar5 * 0x18);
    uVar2 = *(uint *)(lVar6 + uVar5 * 0x18);
    bVar4 = (byte)(uVar2 >> 0x18);
  }
  uVar8 = uVar2 & 0xffff;
  if ((byte)(uVar2 >> 0x1c) != 2) {
    uVar8 = (uint)uVar1;
  }
  lVar6 = FUN_1804ab8d0(plVar3,uVar8,param_2);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0 + (longlong)param_2 * 8);
    lVar7 = FUN_1804aba80(param_1,uVar8,0);
                    /* WARNING: Subroutine does not return */
    FUN_1804842f0(param_1,0xe8e,lVar7 + 0x18,lVar6 + 0x18);
  }
  FUN_180494e90(param_1,lVar6);
  return;
}



/* ===== 180489a10 FUN_180489a10 ===== */

undefined8 FUN_180489a10(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  lVar1 = FUN_1804ab560();
  uVar2 = FUN_180492ab0(param_1,0,1);
  *(ulonglong *)(lVar1 + 0x20) = uVar2;
  puVar3 = *(ulonglong **)(param_1 + 0x28);
  *(ulonglong **)(param_1 + 0x28) = puVar3 + 1;
  *puVar3 = uVar2 | 0xfffa000000000000;
  FUN_1804a90d0(param_1,0,&DAT_18056df00,&PTR_FUN_18056de70);
  *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x2b0) =
       *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  FUN_1804a90d0(param_1,0,&DAT_18056dfb0,&PTR_FUN_18056df98);
  FUN_1804a90d0(param_1,0,&DAT_18056dfe0,&PTR_LAB_18056dfd0);
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8);
  puVar3 = (ulonglong *)
           FUN_180493400(param_1,*(undefined8 *)(lVar1 + 0x20),*(longlong *)(lVar1 + 0x18) + 0x78);
  *puVar3 = uVar2 & 0x7fffffffffff | 0xfffa000000000000;
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x28) = lVar1 + -8;
  FUN_1804b5180(param_1,*(ulonglong *)(lVar1 + -0x10) & 0x7fffffffffff);
  FUN_18047f450(param_1,"Windows",7);
  FUN_18047f450(param_1,&DAT_18056dbc0,3);
  FUN_1804a90d0(param_1,0,&DAT_18056e090,&PTR_FUN_18056e000);
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x110);
  uVar4 = FUN_180491d30(param_1,"_LOADED",7);
  puVar3 = (ulonglong *)FUN_180492860(uVar2 & 0x7fffffffffff,uVar4);
  if ((puVar3 != (ulonglong *)0x0) && ((int)((longlong)*puVar3 >> 0x2f) == -0xc)) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    uVar2 = *puVar3 & 0x7fffffffffff;
    uVar4 = FUN_180491d30(param_1,&DAT_1806e1914,3);
    puVar5 = (undefined8 *)FUN_180493400(param_1,uVar2,uVar4);
    *puVar5 = *(undefined8 *)(lVar1 + -8);
    if ((*(byte *)(uVar2 + 8) & 4) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x10);
      *(byte *)(uVar2 + 8) = *(byte *)(uVar2 + 8) & 0xfb;
      *(undefined8 *)(uVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x40);
      *(ulonglong *)(lVar1 + 0x40) = uVar2;
      return 1;
    }
  }
  return 1;
}



/* ===== 180489c00 FUN_180489c00 ===== */

int FUN_180489c00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar3 = FUN_180489ca0();
  if (uVar3 == 0xffffffff) {
    return -1;
  }
  lVar1 = *(longlong *)(param_2 + 0x20);
  if ((*(uint *)(lVar1 + -0x5c) < uVar3) || (lVar2 = *(longlong *)(lVar1 + -0x18), lVar2 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(lVar1 + -0x20);
    if (uVar3 == *(uint *)(lVar1 + -0x5c)) {
      return iVar5 + *(int *)(lVar1 + -0x1c);
    }
    if (uVar3 != 0) {
      uVar4 = (ulonglong)(uVar3 - 1);
      if (*(int *)(lVar1 + -0x1c) < 0x100) {
        return iVar5 + (uint)*(byte *)(uVar4 + lVar2);
      }
      if (*(int *)(lVar1 + -0x1c) < 0x10000) {
        return iVar5 + (uint)*(ushort *)(lVar2 + uVar4 * 2);
      }
      return iVar5 + *(int *)(lVar2 + uVar4 * 4);
    }
  }
  return iVar5;
}



/* ===== 180489ca0 FUN_180489ca0 ===== */

ulonglong FUN_180489ca0(longlong param_1,longlong param_2,ulonglong *param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  if (*(char *)(param_2 + 10) != '\0') {
    return 0xffffffff;
  }
  if (param_3 == (ulonglong *)0x0) {
    uVar3 = *(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc;
    if (uVar3 == 0) {
      return 0xffffffff;
    }
    uVar4 = *(ulonglong *)(uVar3 + 0x60);
    if (uVar4 == *(ulonglong *)(uVar3 + 0x58)) {
      return 0xffffffff;
    }
LAB_180489da6:
    if (uVar4 == 0) {
      return 0xffffffff;
    }
  }
  else {
    uVar4 = *param_3;
    if ((uVar4 & 3) != 0) {
      if (((byte)uVar4 & 7) != 2) {
        uVar4 = *(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc;
        if (uVar4 == 0) {
          return 0xffffffff;
        }
        puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + -8);
        do {
          if (*(int *)(uVar4 + 0x50) < 0) {
            do {
              if ((ulonglong *)((longlong)-*(int *)(uVar4 + 0x50) + *(longlong *)(param_1 + 0x38))
                  <= puVar6) break;
              uVar4 = *(ulonglong *)(uVar4 + 0x68) & 0xfffffffffffffffc;
              if (uVar4 == 0) {
                return 0xffffffff;
              }
            } while (*(int *)(uVar4 + 0x50) < 0);
          }
          if (puVar6 < param_3) {
            uVar4 = *(ulonglong *)(uVar4 + 0x60);
            goto LAB_180489da6;
          }
          uVar3 = *puVar6;
          if ((uVar3 & 3) == 0) {
            lVar5 = (ulonglong)*(byte *)(uVar3 - 3) * -8 + -0x10;
          }
          else {
            if ((((uint)uVar3 & 3) == 1) || ((((byte)uVar3 & 7) == 2 && (puVar6[-3] == 1)))) {
              uVar4 = *(ulonglong *)(uVar4 + 0x68) & 0xfffffffffffffffc;
            }
            lVar5 = -(uVar3 & 0xfffffffffffffff8);
          }
          puVar6 = (ulonglong *)((longlong)puVar6 + lVar5);
          if (uVar4 == 0) {
            return 0xffffffff;
          }
        } while( true );
      }
      uVar4 = param_3[-2];
    }
  }
  lVar5 = *(longlong *)(param_2 + 0x20) + -0x68;
  iVar1 = (int)((longlong)((uVar4 - lVar5) + -0x68) >> 2);
  if (iVar1 == 0) {
    return 1;
  }
  uVar2 = iVar1 - 1;
  if (uVar2 <= *(uint *)(*(longlong *)(param_2 + 0x20) + -0x5c)) {
    return (ulonglong)uVar2;
  }
  if (*(byte *)(uVar4 - 4) - 0x49 < 4) {
    return (*(longlong *)(uVar4 - 0xc) - lVar5) + -0x68 >> 2;
  }
  return 0xffffffff;
}



/* ===== 180489e10 FUN_180489e10 ===== */

undefined8 FUN_180489e10(int *param_1,longlong param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  lVar2 = *(longlong *)(param_2 + 0x40);
  if (*(int *)(param_2 + 0x48) == -1) {
    FUN_1804a9f00(param_1,"[builtin:",9);
    FUN_1804a9f60(param_1,lVar2);
    if (param_1[2] == *param_1) {
      puVar3 = (undefined1 *)FUN_1804a9db0(param_1,1);
      *puVar3 = 0x5d;
      *(undefined1 **)param_1 = puVar3 + 1;
      return 0;
    }
    puVar3 = *(undefined1 **)param_1;
    *puVar3 = 0x5d;
    *(undefined1 **)param_1 = puVar3 + 1;
    return 0;
  }
  if ((*(char *)(lVar2 + 0x18) == '=') || (*(char *)(lVar2 + 0x18) == '@')) {
    pcVar6 = (char *)(lVar2 + 0x19);
    iVar5 = *(int *)(lVar2 + 0x14) + -1;
    if (param_3 != 0) {
      for (uVar4 = *(int *)(lVar2 + 0x14) - 2; -1 < (int)uVar4; uVar4 = uVar4 - 1) {
        cVar1 = *(char *)(lVar2 + 0x19 + (ulonglong)uVar4);
        if ((cVar1 == '/') || (cVar1 == '\\')) {
          iVar5 = iVar5 + (-1 - uVar4);
          pcVar6 = (char *)(lVar2 + 0x1a + (ulonglong)uVar4);
          break;
        }
      }
    }
  }
  else {
    pcVar6 = "[string]";
    iVar5 = 8;
  }
  FUN_1804a9f00(param_1,pcVar6,iVar5);
  return 1;
}



/* ===== 180489f10 FUN_180489f10 ===== */

byte * FUN_180489f10(longlong param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  byte *local_res8;
  
  if (*(byte **)(param_1 + 0x60) == (byte *)0x0) {
    return (byte *)0x0;
  }
  uVar4 = 0;
  pcVar3 = (char *)*(byte **)(param_1 + 0x60);
  while( true ) {
    bVar1 = *pcVar3;
    local_res8 = (byte *)pcVar3;
    if (bVar1 < 7) {
      if (bVar1 == 0) {
        return (byte *)0x0;
      }
    }
    else {
      do {
        local_res8 = local_res8 + 1;
      } while (*local_res8 != 0);
    }
    local_res8 = local_res8 + 1;
    iVar2 = FUN_1804aa350(&local_res8);
    uVar4 = uVar4 + iVar2;
    if (param_2 < uVar4) break;
    iVar2 = FUN_1804aa350(&local_res8);
    if (param_2 < iVar2 + uVar4) {
      uVar5 = (uint)bVar1;
      if (param_3 == 0) {
        if (bVar1 < 7) {
          pcVar3 = "(for index)";
          while (uVar5 = uVar5 - 1, uVar5 != 0) {
            do {
              bVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (bVar1 != 0);
          }
        }
        return (byte *)pcVar3;
      }
      param_3 = param_3 + -1;
    }
    pcVar3 = (char *)local_res8;
  }
  return (byte *)0x0;
}



/* ===== 180489ff0 FUN_180489ff0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180489ff0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_a8;
  if (((param_3 == 0) ||
      (uVar2 = *(ulonglong *)(param_3 + -8) & 0x7fffffffffff, *(char *)(uVar2 + 10) != '\0')) ||
     (iVar1 = FUN_180489c00(param_1,uVar2,param_4), iVar1 < 0)) {
    FUN_180498630(param_1,&DAT_1806d3198,param_2);
    return;
  }
  FUN_18048abd0(local_78,*(undefined8 *)(*(longlong *)(uVar2 + 0x20) + -0x28),
                *(undefined4 *)(*(longlong *)(uVar2 + 0x20) + -0x20));
  local_88 = param_2;
  FUN_180498630(param_1,"%s:%d: %s",local_78,iVar1);
  return;
}



/* ===== 18048a0a0 FUN_18048a0a0 ===== */

void FUN_18048a0a0(ulonglong param_1,longlong *param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  ulonglong *puVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  size_t sVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  uint local_res20;
  undefined4 local_58;
  int local_54;
  uint local_50;
  char *local_48 [2];
  
  if ((int)param_4 < 0) {
    local_50 = ~param_4;
    local_res20 = 0xffffffff;
    local_54 = -1;
  }
  else {
    local_50 = 0;
    local_54 = 1;
    local_res20 = param_4;
  }
  if (local_50 == local_res20) {
    return;
  }
  uVar12 = 1;
  uVar13 = 0;
  local_58 = 1;
  do {
    puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + -8);
    puVar14 = puVar15;
    uVar9 = local_50;
    while (puVar3 = puVar15, (ulonglong *)(*(longlong *)(param_1 + 0x38) + 8) < puVar3) {
      uVar11 = uVar9 + 1;
      if ((puVar3[-1] & 0x7fffffffffff) != param_1) {
        uVar11 = uVar9;
      }
      if (uVar11 == 0) {
        uVar9 = (uint)((longlong)puVar14 - (longlong)puVar3 >> 3);
        if (puVar3 != (ulonglong *)0x0) {
          if (uVar9 == 0) {
            puVar14 = (ulonglong *)0x0;
          }
          else {
            puVar14 = puVar3 + (int)uVar9;
          }
          uVar10 = puVar3[-1] & 0x7fffffffffff;
          cVar2 = *param_3;
          pcVar1 = param_3;
          goto joined_r0x00018048a1ef;
        }
        break;
      }
      uVar10 = *puVar3;
      uVar9 = uVar11 - 1;
      if ((uVar10 & 3) == 0) {
        lVar5 = (ulonglong)*(byte *)(uVar10 - 3) * -8 + -0x10;
      }
      else {
        if (((byte)uVar10 & 7) == 3) {
          uVar9 = uVar11;
        }
        lVar5 = -(uVar10 & 0xfffffffffffffff8);
      }
      puVar14 = puVar3;
      puVar15 = (ulonglong *)((longlong)puVar3 + lVar5);
    }
    if (local_54 == 1) break;
    local_50 = local_50 - uVar9;
LAB_18048a41f:
    local_50 = local_50 + local_54;
  } while (local_50 != local_res20);
  if (uVar13 == 0) {
    return;
  }
  *param_2 = (ulonglong)uVar13 + param_2[2];
  return;
joined_r0x00018048a1ef:
  if (cVar2 == '\0') goto LAB_18048a41f;
  pcVar1 = pcVar1 + 1;
  if (cVar2 == 'F') {
LAB_18048a26a:
    lVar5 = FUN_18048a510(param_1,puVar3,local_48);
    if (lVar5 == 0) {
      uVar12 = local_58;
LAB_18048a2ec:
      if (*(byte *)(uVar10 + 10) == 0) {
        lVar5 = *(longlong *)(uVar10 + 0x20);
        iVar4 = FUN_180489e10(param_2,lVar5 + -0x68,uVar12);
        if (iVar4 != 0) {
          if (cVar2 == 'l') {
            iVar4 = FUN_180489c00(param_1,uVar10,puVar14);
          }
          else {
            iVar4 = *(int *)(lVar5 + -0x20);
          }
          if ((int)param_2[1] == (int)*param_2) {
            puVar8 = (undefined1 *)FUN_1804a9db0(param_2,1);
          }
          else {
            puVar8 = (undefined1 *)*param_2;
          }
          *puVar8 = 0x3a;
          *param_2 = (longlong)(puVar8 + 1);
          if (iVar4 < 0) {
            iVar4 = *(int *)(lVar5 + -0x20);
          }
          FUN_1804992e0(param_2,iVar4);
        }
      }
      else if (*(byte *)(uVar10 + 10) < 2) {
        if ((int)param_2[1] == (int)*param_2) {
          puVar8 = (undefined1 *)FUN_1804a9db0(param_2,1);
        }
        else {
          puVar8 = (undefined1 *)*param_2;
        }
        *puVar8 = 0x40;
        *param_2 = (longlong)(puVar8 + 1);
        FUN_180499340(param_2,*(undefined8 *)(uVar10 + 0x28));
      }
      else {
        FUN_1804a9f00(param_2,"[builtin#",9);
        FUN_1804992e0(param_2,*(undefined1 *)(uVar10 + 10));
        if ((int)param_2[1] == (int)*param_2) {
          puVar8 = (undefined1 *)FUN_1804a9db0(param_2,1);
          *puVar8 = 0x5d;
          *param_2 = (longlong)(puVar8 + 1);
        }
        else {
          puVar8 = (undefined1 *)*param_2;
          *puVar8 = 0x5d;
          *param_2 = (longlong)(puVar8 + 1);
        }
      }
    }
    else {
      if (((cVar2 == 'F') && (*(char *)(uVar10 + 10) == '\0')) &&
         (*(int *)(*(longlong *)(uVar10 + 0x20) + -0x20) != -1)) {
        FUN_180489e10(param_2,*(longlong *)(uVar10 + 0x20) + -0x68,local_58);
        if ((int)param_2[1] == (int)*param_2) {
          puVar8 = (undefined1 *)FUN_1804a9db0(param_2,1);
        }
        else {
          puVar8 = (undefined1 *)*param_2;
        }
        *puVar8 = 0x3a;
        *param_2 = (longlong)(puVar8 + 1);
      }
      pcVar6 = local_48[0];
      sVar7 = strlen(local_48[0]);
      FUN_1804a9f00(param_2,pcVar6,sVar7 & 0xffffffff);
    }
    uVar12 = local_58;
  }
  else {
    if (cVar2 != 'Z') {
      if (cVar2 == 'f') goto LAB_18048a26a;
      if (cVar2 != 'l') {
        if (cVar2 == 'p') {
          local_58 = 0;
          uVar12 = 0;
        }
        else if ((int)param_2[1] == (int)*param_2) {
          pcVar6 = (char *)FUN_1804a9db0(param_2,1);
          *pcVar6 = cVar2;
          *param_2 = (longlong)(pcVar6 + 1);
          uVar12 = local_58;
        }
        else {
          pcVar6 = (char *)*param_2;
          *pcVar6 = cVar2;
          *param_2 = (longlong)(pcVar6 + 1);
        }
        goto LAB_18048a3f4;
      }
      goto LAB_18048a2ec;
    }
    uVar13 = (int)*param_2 - (int)param_2[2];
  }
LAB_18048a3f4:
  cVar2 = *pcVar1;
  goto joined_r0x00018048a1ef;
}



/* ===== 18048a470 FUN_18048a470 ===== */

ulonglong * FUN_18048a470(ulonglong param_1,int param_2,int *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  
  puVar4 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + -8);
  puVar3 = puVar4;
  while( true ) {
    puVar2 = puVar4;
    if (puVar2 <= (ulonglong *)(*(longlong *)(param_1 + 0x38) + 8)) {
      *param_3 = param_2;
      return (ulonglong *)0x0;
    }
    iVar6 = param_2 + 1;
    if ((puVar2[-1] & 0x7fffffffffff) != param_1) {
      iVar6 = param_2;
    }
    if (iVar6 == 0) break;
    uVar1 = *puVar2;
    param_2 = iVar6 + -1;
    if ((uVar1 & 3) == 0) {
      lVar5 = (ulonglong)*(byte *)(uVar1 - 3) * -8 + -0x10;
    }
    else {
      if (((byte)uVar1 & 7) == 3) {
        param_2 = iVar6;
      }
      lVar5 = -(uVar1 & 0xfffffffffffffff8);
    }
    puVar4 = (ulonglong *)((longlong)puVar2 + lVar5);
    puVar3 = puVar2;
  }
  *param_3 = (int)((longlong)puVar3 - (longlong)puVar2 >> 3);
  return puVar2;
}



/* ===== 18048a510 FUN_18048a510 ===== */

char * FUN_18048a510(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((ulonglong *)(*(longlong *)(param_1 + 0x38) + 8) < param_2) {
    if (((byte)*param_2 & 7) == 3) {
      param_2 = (ulonglong *)((longlong)param_2 - (*param_2 & 0xfffffffffffffff8));
    }
    uVar6 = *param_2;
    if ((uVar6 & 3) == 0) {
      uVar6 = (ulonglong)*(byte *)(uVar6 - 3) * 8 + 0x10;
    }
    else {
      uVar6 = uVar6 & 0xfffffffffffffff8;
    }
    uVar6 = *(ulonglong *)((longlong)param_2 + (-8 - uVar6)) & 0x7fffffffffff;
    uVar3 = FUN_180489ca0(param_1,uVar6,param_2);
    if (uVar3 != 0xffffffff) {
      lVar2 = *(longlong *)(uVar6 + 0x20);
      uVar6 = (ulonglong)uVar3;
      uVar3 = *(uint *)(lVar2 + uVar6 * 4);
      uVar5 = (uint)(*(ushort *)(&DAT_18056f5e0 + (ulonglong)(uVar3 & 0xff) * 2) >> 0xb);
      if (uVar5 == 9) {
        bVar1 = *(byte *)(lVar2 + 1 + uVar6 * 4);
        uVar5 = bVar1 - 3;
        if ((char)uVar3 != 'E') {
          uVar5 = (uint)bVar1;
        }
        pcVar4 = (char *)FUN_18048acf0(lVar2 + -0x68,lVar2 + uVar6 * 4,uVar5,param_3);
        return pcVar4;
      }
      if (uVar5 != 0x16) {
        *param_3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0 + (ulonglong)uVar5 * 8) +
                   0x18;
        return "metamethod";
      }
    }
  }
  return (char *)0x0;
}



/* ===== 18048a630 FUN_18048a630 ===== */

undefined8 FUN_18048a630(longlong param_1,char *param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong local_48;
  
  local_48 = 0;
  cVar13 = *param_2;
  if (cVar13 == '>') {
    puVar11 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + -8);
    uVar15 = *puVar11;
    if ((int)((longlong)uVar15 >> 0x2f) != -9) {
      return 0;
    }
    param_2 = param_2 + 1;
    *(ulonglong **)(param_1 + 0x28) = puVar11;
    lVar17 = 0;
    cVar13 = *param_2;
  }
  else {
    uVar15 = (ulonglong)(*(uint *)(param_3 + 0x74) & 0xffff);
    uVar12 = *(uint *)(param_3 + 0x74) >> 0x10;
    lVar17 = *(longlong *)(param_1 + 0x38) + uVar15 * 8;
    if (uVar12 != 0) {
      local_48 = *(longlong *)(param_1 + 0x38) + (uVar12 + uVar15) * 8;
    }
    uVar15 = *(ulonglong *)(lVar17 + -8);
  }
  if (cVar13 != '\0') {
    bVar4 = false;
    bVar5 = false;
    uVar15 = uVar15 & 0x7fffffffffff;
    bVar3 = false;
    do {
      puVar10 = (undefined8 *)(param_3 + 8);
      cVar13 = *param_2;
      if (cVar13 == 'S') {
        if (*(char *)(uVar15 + 10) == '\0') {
          lVar9 = *(longlong *)(uVar15 + 0x20);
          lVar2 = *(longlong *)(lVar9 + -0x28);
          iVar16 = *(int *)(lVar9 + -0x20);
          *(longlong *)(param_3 + 0x20) = lVar2 + 0x18;
          FUN_18048abd0((undefined1 *)(param_3 + 0x38),lVar2,*(undefined4 *)(lVar9 + -0x20));
          *(int *)(param_3 + 0x30) = iVar16;
          *(int *)(param_3 + 0x34) = *(int *)(lVar9 + -0x1c) + iVar16;
          if ((iVar16 != 0) || (puVar7 = &DAT_18075c0e4, *(int *)(lVar9 + -0x1c) == 0)) {
            puVar7 = &DAT_18075bf60;
          }
          *(undefined **)(param_3 + 0x18) = puVar7;
          bVar4 = bVar5;
        }
        else {
          *(undefined **)(param_3 + 0x20) = &DAT_18056e230;
          *(undefined1 *)(param_3 + 0x38) = 0x5b;
          *(undefined2 *)(param_3 + 0x39) = 0x5d43;
          *(undefined1 *)(param_3 + 0x3b) = 0;
          *(undefined8 *)(param_3 + 0x30) = 0xffffffffffffffff;
          *(undefined **)(param_3 + 0x18) = &DAT_1808a7d28;
        }
      }
      else if (cVar13 == 'l') {
        if (lVar17 == 0) {
          *(undefined4 *)(param_3 + 0x28) = 0xffffffff;
        }
        else {
          uVar6 = FUN_180489c00(param_1,uVar15,local_48);
          *(undefined4 *)(param_3 + 0x28) = uVar6;
          bVar4 = bVar5;
        }
      }
      else if (cVar13 == 'u') {
        *(uint *)(param_3 + 0x2c) = (uint)*(byte *)(uVar15 + 0xb);
        if (param_4 != 0) {
          if (*(char *)(uVar15 + 10) == '\0') {
            lVar9 = *(longlong *)(uVar15 + 0x20);
            *(uint *)(param_3 + 0x78) = (uint)*(byte *)(lVar9 + -0x5e);
            *(uint *)(param_3 + 0x7c) = *(byte *)(lVar9 + -0x2b) >> 1 & 1;
            bVar4 = bVar5;
          }
          else {
            *(undefined4 *)(param_3 + 0x78) = 0;
            *(undefined4 *)(param_3 + 0x7c) = 1;
          }
        }
      }
      else if (cVar13 == 'n') {
        if (lVar17 == 0) {
          *(undefined8 *)(param_3 + 0x10) = 0;
          *(undefined1 **)(param_3 + 0x10) = &DAT_18058b643;
          *puVar10 = 0;
        }
        else {
          lVar9 = FUN_18048a510(param_1,lVar17,puVar10);
          *(longlong *)(param_3 + 0x10) = lVar9;
          bVar4 = bVar5;
          if (lVar9 == 0) {
            *(undefined1 **)(param_3 + 0x10) = &DAT_18058b643;
            *puVar10 = 0;
          }
        }
      }
      else if (cVar13 == 'f') {
        bVar5 = true;
        bVar4 = true;
      }
      else {
        if (cVar13 != 'L') {
          return 0;
        }
        bVar3 = true;
      }
      param_2 = param_2 + 1;
    } while (*param_2 != '\0');
    if (bVar4) {
      **(ulonglong **)(param_1 + 0x28) = uVar15 | 0xfffb800000000000;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
      if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x28)) {
        FUN_18048ea20(param_1);
      }
    }
    if (bVar3) {
      if (*(char *)(uVar15 + 10) == '\0') {
        uVar8 = FUN_180492ab0(param_1,0,0);
        lVar17 = *(longlong *)(uVar15 + 0x20);
        lVar9 = *(longlong *)(lVar17 + -0x18);
        if (lVar9 != 0) {
          if (*(int *)(lVar17 + -0x1c) < 0x100) {
            iVar16 = 1;
          }
          else {
            iVar16 = 4;
            if (*(int *)(lVar17 + -0x1c) < 0x10000) {
              iVar16 = 2;
            }
          }
          uVar12 = *(int *)(lVar17 + -0x5c) - 1;
          if (*(int *)(lVar17 + -0x5c) != 1) {
            iVar1 = *(int *)(lVar17 + -0x20);
            uVar15 = 0;
            if (iVar16 == 2) {
              do {
                uVar14 = (uint)*(ushort *)(lVar9 + uVar15 * 2) + iVar1;
                if (uVar14 < *(uint *)(uVar8 + 0x30)) {
                  puVar10 = (undefined8 *)(*(longlong *)(uVar8 + 0x10) + (longlong)(int)uVar14 * 8);
                }
                else {
                  puVar10 = (undefined8 *)FUN_180493360(param_1,uVar8);
                }
                uVar14 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar14;
                *puVar10 = 0xfffeffffffffffff;
              } while (uVar14 < uVar12);
            }
            else {
              do {
                if (iVar16 == 1) {
                  uVar14 = (uint)*(byte *)(lVar9 + uVar15);
                }
                else {
                  uVar14 = *(uint *)(lVar9 + uVar15 * 4);
                }
                uVar14 = uVar14 + iVar1;
                if (uVar14 < *(uint *)(uVar8 + 0x30)) {
                  puVar10 = (undefined8 *)(*(longlong *)(uVar8 + 0x10) + (longlong)(int)uVar14 * 8);
                }
                else {
                  puVar10 = (undefined8 *)FUN_180493360(param_1,uVar8);
                }
                uVar14 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar14;
                *puVar10 = 0xfffeffffffffffff;
              } while (uVar14 < uVar12);
            }
          }
        }
        **(ulonglong **)(param_1 + 0x28) = uVar8 | 0xfffa000000000000;
      }
      else {
        **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
      }
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
      if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x28)) {
        FUN_18048ea20(param_1);
      }
    }
  }
  return 1;
}



/* ===== 18048aa20 FUN_18048aa20 ===== */

int FUN_18048aa20(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((*(uint *)(param_1 + 0xc) < param_2) || (lVar2 = *(longlong *)(param_1 + 0x50), lVar2 == 0)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (param_2 == *(uint *)(param_1 + 0xc)) {
    return *(int *)(param_1 + 0x4c) + iVar1;
  }
  if (param_2 == 0) {
    return iVar1;
  }
  uVar3 = (ulonglong)(param_2 - 1);
  if (*(int *)(param_1 + 0x4c) < 0x100) {
    return (uint)*(byte *)(uVar3 + lVar2) + iVar1;
  }
  if (*(int *)(param_1 + 0x4c) < 0x10000) {
    return (uint)*(ushort *)(lVar2 + uVar3 * 2) + iVar1;
  }
  return *(int *)(lVar2 + uVar3 * 4) + iVar1;
}



/* ===== 18048aa80 FUN_18048aa80 ===== */

void FUN_18048aa80(undefined8 param_1,longlong param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_2 + 0x40);
  if ((*(uint *)(param_2 + 0xc) < param_3) || (lVar6 = *(longlong *)(param_2 + 0x50), lVar6 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_2 + 0x48);
    if (param_3 == *(uint *)(param_2 + 0xc)) {
      iVar5 = iVar5 + *(int *)(param_2 + 0x4c);
    }
    else if (param_3 != 0) {
      uVar3 = (ulonglong)(param_3 - 1);
      if (*(int *)(param_2 + 0x4c) < 0x100) {
        iVar5 = iVar5 + (uint)*(byte *)(uVar3 + lVar6);
      }
      else if (*(int *)(param_2 + 0x4c) < 0x10000) {
        iVar5 = iVar5 + (uint)*(ushort *)(lVar6 + uVar3 * 2);
      }
      else {
        iVar5 = iVar5 + *(int *)(lVar6 + uVar3 * 4);
      }
    }
  }
  if (*(int *)(param_2 + 0x48) == -1) {
    FUN_180498630(param_1,"builtin:%s",lVar2 + 0x18,iVar5);
    return;
  }
  if (*(char *)(lVar2 + 0x18) == '@') {
    lVar6 = lVar2 + 0x19;
    uVar4 = *(uint *)(lVar2 + 0x14) - 1;
    if (uVar4 != 0) {
      while ((cVar1 = *(char *)(lVar2 + 0x19 + (ulonglong)uVar4), cVar1 != '/' && (cVar1 != '\\')))
      {
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) {
          FUN_180498630(param_1,"%s:%d",lVar6,iVar5);
          return;
        }
      }
      lVar6 = (ulonglong)(uVar4 + 1) + 0x19 + lVar2;
    }
    FUN_180498630(param_1,"%s:%d",lVar6,iVar5);
    return;
  }
  if (0x28 < *(uint *)(lVar2 + 0x14)) {
    FUN_180498630(param_1,"%p:%d",param_2,iVar5);
    return;
  }
  if (*(char *)(lVar2 + 0x18) == '=') {
    FUN_180498630(param_1,"%s:%d",lVar2 + 0x19,iVar5);
    return;
  }
  FUN_180498630(param_1,"\"%s\":%d",lVar2 + 0x18,iVar5);
  return;
}



/* ===== 18048abd0 FUN_18048abd0 ===== */

void FUN_18048abd0(char *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  char *pcVar2;
  undefined *puVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_2 + 0x18) == '=') {
    strncpy(param_1,(char *)(param_2 + 0x19),0x3c);
    param_1[0x3b] = '\0';
    return;
  }
  if (*(char *)(param_2 + 0x18) == '@') {
    uVar1 = *(int *)(param_2 + 0x14) - 1;
    if (uVar1 < 0x3c) {
      FUN_180540fb0(param_1,param_2 + 0x19);
      return;
    }
    param_1[0] = '.';
    param_1[1] = '.';
    param_1[2] = '.';
    FUN_180540fb0(param_1 + 3,((ulonglong)uVar1 - 0x1f) + param_2);
    return;
  }
  uVar4 = 0;
  do {
    if (*(byte *)(param_2 + 0x18 + uVar4) < 0x20) break;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x30);
  pcVar2 = "[string \"";
  if (param_3 == -1) {
    pcVar2 = "[builtin:";
  }
  FUN_180540fb0(param_1,pcVar2);
  if (*(char *)(uVar4 + 0x18 + param_2) == '\0') {
    FUN_180540fb0();
    pcVar2 = param_1 + 9;
  }
  else {
    if (0x2d < uVar4) {
      uVar4 = 0x2d;
    }
    strncpy(param_1 + 9,(char *)(param_2 + 0x18),uVar4 & 0xffffffff);
    pcVar2 = param_1 + 0xc;
    builtin_strncpy(param_1 + uVar4 + 9,"...",4);
  }
  puVar3 = &DAT_18056e204;
  if (param_3 == -1) {
    puVar3 = &DAT_1806e9114;
  }
  FUN_180540fb0(pcVar2 + uVar4,puVar3);
  return;
}



/* ===== 18048acf0 FUN_18048acf0 ===== */

char * FUN_18048acf0(longlong param_1,uint *param_2,uint param_3,longlong *param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  lVar3 = FUN_180489f10(param_1,(longlong)param_2 + (-0x68 - param_1) >> 2);
  if (lVar3 == 0) {
    do {
      do {
        while( true ) {
          puVar6 = param_2;
          param_2 = puVar6 + -1;
          if (param_2 <= (uint *)(param_1 + 0x68U)) {
            return (char *)0x0;
          }
          uVar2 = *param_2;
          uVar7 = uVar2 >> 8 & 0xff;
          if ((*(ushort *)(&DAT_18056f5e0 + (ulonglong)(byte)uVar2 * 2) & 7) != 2) break;
          if (uVar7 <= param_3) {
            if ((uVar2 & 0xff) != 0x2c) {
              return (char *)0x0;
            }
            if (param_3 <= uVar2 >> 0x10) {
              return (char *)0x0;
            }
          }
        }
      } while (((*(ushort *)(&DAT_18056f5e0 + (ulonglong)(byte)uVar2 * 2) & 7) != 1) ||
              (uVar7 != param_3));
      uVar5 = uVar2 & 0xff;
      if (uVar5 != 0x12) {
        if (uVar5 == 0x2d) {
          pcVar4 = *(char **)(param_1 + 0x58);
          if (pcVar4 == (char *)0x0) {
            *param_4 = (longlong)&DAT_18058b643;
            return "upvalue";
          }
          for (uVar2 = uVar2 >> 0x10; uVar2 != 0; uVar2 = uVar2 - 1) {
            do {
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
          }
          *param_4 = (longlong)pcVar4;
          return "upvalue";
        }
        if (uVar5 == 0x36) {
          *param_4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + ~(ulonglong)(uVar2 >> 0x10) * 8)
                     + 0x18;
          return "global";
        }
        if (uVar5 != 0x39) {
          return (char *)0x0;
        }
        *param_4 = *(longlong *)
                    (*(longlong *)(param_1 + 0x20) + ~(ulonglong)(byte)(uVar2 >> 0x10) * 8) + 0x18;
        uVar5 = puVar6[-2];
        if (((char)uVar5 != '\x12') || ((uVar5 >> 8 & 0xff) != uVar7 + 2)) {
          return "field";
        }
        pcVar4 = "field";
        if (uVar5 >> 0x10 == uVar2 >> 0x18) {
          pcVar4 = "method";
        }
        return pcVar4;
      }
      param_3 = uVar2 >> 0x10;
      lVar3 = FUN_180489f10(param_1,(longlong)param_2 + (-0x68 - param_1) >> 2,param_3);
    } while (lVar3 == 0);
  }
  *param_4 = lVar3;
  return "local";
}



/* ===== 18048aee0 FUN_18048aee0 ===== */

char * FUN_18048aee0(longlong param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x58);
  if (pcVar2 == (char *)0x0) {
    return "";
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  return pcVar2;
}



/* ===== 18048af10 FUN_18048af10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18048af10(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  char *local_b8;
  char *local_b0;
  int local_a0;
  undefined1 local_90 [60];
  int local_54;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 0x20);
  iVar6 = 0xc;
  if (param_3 != 0) {
    FUN_18047f380(param_1,&DAT_180741350);
  }
  FUN_18047f450(param_1,"stack traceback:",0x10);
  iVar4 = FUN_18048b170(param_2,param_4,local_c8);
  iVar9 = (int)(lVar2 - lVar3 >> 3);
  while (iVar4 != 0) {
    iVar5 = param_4 + 1;
    if (iVar6 < iVar5) {
      iVar6 = FUN_18048b170(param_2,param_4 + 0xb);
      if (iVar6 != 0) {
        FUN_18047f450(param_1,"\n\t...",5);
        FUN_18048b170(param_2,0xfffffff6,local_c8);
        param_4 = local_54 + -10;
      }
      iVar6 = 0x7fffffff;
      iVar5 = param_4;
    }
    else {
      FUN_18048a630(param_2,&DAT_18056e25c,local_c8,0);
      puVar7 = (ulonglong *)(*(longlong *)(param_2 + 0x28) + -8);
      uVar8 = *puVar7 & 0x7fffffffffff;
      *(ulonglong **)(param_2 + 0x28) = puVar7;
      bVar1 = *(byte *)(uVar8 + 10);
      if ((bVar1 < 2) || (*local_b8 != '\0')) {
        FUN_18047f380(param_1,"\n\t%s:",local_90);
      }
      else {
        FUN_18047f380(param_1,"\n\t[builtin#%d]:",bVar1);
      }
      if (0 < local_a0) {
        FUN_18047f380(param_1,&DAT_18056e280);
      }
      if (*local_b8 == '\0') {
        if (*local_b0 == 'm') {
          FUN_18047f450(param_1," in main chunk",0xe);
        }
        else if (*local_b0 == 'C') {
          FUN_18047f380(param_1," at %p",*(undefined8 *)(uVar8 + 0x28));
        }
        else {
          FUN_18047f380(param_1," in function <%s:%d>",local_90);
        }
      }
      else {
        FUN_18047f380(param_1," in function \'%s\'",local_c0);
      }
      if (0xe < (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) - iVar9) {
        FUN_18047e7f0(param_1);
      }
    }
    iVar4 = FUN_18048b170(param_2,iVar5,local_c8);
    param_4 = iVar5;
  }
  FUN_18047e7f0(param_1,(int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) -
                        iVar9);
  return;
}



/* ===== 18048b170 FUN_18048b170 ===== */

undefined8 FUN_18048b170(ulonglong param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  puVar4 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + -8);
  puVar3 = puVar4;
  iVar7 = param_2;
  do {
    puVar2 = puVar4;
    if (puVar2 <= (ulonglong *)(*(longlong *)(param_1 + 0x38) + 8U)) {
LAB_18048b209:
      *(int *)(param_3 + 0x74) = param_2 - iVar7;
      return 0;
    }
    iVar6 = iVar7 + 1;
    if ((puVar2[-1] & 0x7fffffffffff) != param_1) {
      iVar6 = iVar7;
    }
    if (iVar6 == 0) {
      iVar7 = (int)((longlong)puVar3 - (longlong)puVar2 >> 3);
      if (puVar2 != (ulonglong *)0x0) {
        *(int *)(param_3 + 0x74) =
             (int)((longlong)puVar2 - *(longlong *)(param_1 + 0x38) >> 3) + iVar7 * 0x10000;
        return 1;
      }
      goto LAB_18048b209;
    }
    uVar1 = *puVar2;
    iVar7 = iVar6 + -1;
    if ((uVar1 & 3) == 0) {
      lVar5 = (ulonglong)*(byte *)(uVar1 - 3) * -8 + -0x10;
    }
    else {
      if (((byte)uVar1 & 7) == 3) {
        iVar7 = iVar6;
      }
      lVar5 = -(uVar1 & 0xfffffffffffffff8);
    }
    puVar4 = (ulonglong *)((longlong)puVar2 + lVar5);
    puVar3 = puVar2;
  } while( true );
}



/* ===== 18048b250 FUN_18048b250 ===== */

void FUN_18048b250(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  FUN_1804a89f0(param_1,1);
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
  if (*(undefined8 **)(param_1 + 0x28) == puVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1,0x3e1);
  }
  uVar1 = (uint)((longlong)*puVar2 >> 0x2f);
  if ((uVar1 == 0xfffffffb) || (uVar1 < 0xfffffff3)) {
    lVar3 = FUN_1804a8d10(param_1,2);
                    /* WARNING: Subroutine does not return */
    FUN_180484240(param_1,lVar3 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804846a0(param_1);
}



/* ===== 18048b2c0 FUN_18048b2c0 ===== */

void FUN_18048b2c0(undefined8 param_1)

{
  FUN_1804a8dd0(param_1,1);
                    /* WARNING: Subroutine does not return */
  FUN_180484550(param_1,0xc0);
}



/* ===== 18048b300 FUN_18048b300 ===== */

undefined8 FUN_18048b300(undefined8 param_1)

{
  FUN_1804a8dd0(param_1,1);
  FUN_1804a8a70(param_1,2);
  return 0;
}



/* ===== 18048b340 FUN_18048b340 ===== */

undefined8 FUN_18048b340(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = FUN_1804a8dd0(param_1,1);
  lVar2 = FUN_1804a8e20(param_1,2);
  plVar3 = (longlong *)FUN_180494e10(param_1,*(undefined8 *)(param_1 + 0x20),0x11);
  if (*plVar3 != -1) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1,0x3f3);
  }
  *(longlong *)(uVar1 + 0x20) = lVar2;
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 8) & 3) != 0)) && ((*(byte *)(uVar1 + 8) & 4) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    *(byte *)(uVar1 + 8) = *(byte *)(uVar1 + 8) & 0xfb;
    *(undefined8 *)(uVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x40);
    *(ulonglong *)(lVar2 + 0x40) = uVar1;
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) = uVar1 | 0xfffa000000000000;
  return 2;
}



/* ===== 18048b3f0 FUN_18048b3f0 ===== */

undefined8 FUN_18048b3f0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  int local_res8 [8];
  
  puVar3 = *(ulonglong **)(param_1 + 0x20);
  puVar4 = *(ulonglong **)(param_1 + 0x28);
  if ((puVar3 < puVar4) && ((int)((longlong)*puVar3 >> 0x2f) == -9)) {
LAB_18048b446:
    if (*(char *)((*puVar3 & 0x7fffffffffff) + 10) == '\0') {
      uVar2 = *(ulonglong *)((*puVar3 & 0x7fffffffffff) + 0x10);
    }
    else {
      uVar2 = *(ulonglong *)(param_1 + 0x48);
    }
    *(ulonglong **)(param_1 + 0x28) = puVar4 + 1;
    *puVar4 = uVar2 | 0xfffa000000000000;
    return 1;
  }
  local_res8[0] = FUN_1804a8e80(param_1,1,1);
  if (-1 < local_res8[0]) {
    lVar1 = FUN_18048a470(param_1,local_res8[0],local_res8);
    if (lVar1 != 0) {
      puVar4 = *(ulonglong **)(param_1 + 0x28);
      puVar3 = (ulonglong *)(lVar1 - 8);
      goto LAB_18048b446;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804840c0(param_1,1,0x4ce);
}



/* ===== 18048b4a0 FUN_18048b4a0 ===== */

ulonglong FUN_18048b4a0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  int local_res8 [2];
  
  lVar1 = FUN_1804a8dd0(param_1,2);
  puVar4 = *(ulonglong **)(param_1 + 0x20);
  if ((puVar4 < *(ulonglong **)(param_1 + 0x28)) && ((int)((longlong)*puVar4 >> 0x2f) == -9)) {
LAB_18048b518:
    uVar2 = *puVar4 & 0x7fffffffffff;
    if (*(char *)(uVar2 + 10) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_180484220(param_1,0x50e);
    }
    *(longlong *)(uVar2 + 0x10) = lVar1;
    if (((*(byte *)(lVar1 + 8) & 3) != 0) && ((*(byte *)(uVar2 + 8) & 4) != 0)) {
      FUN_1804908e0(*(undefined8 *)(param_1 + 0x10),uVar2,lVar1);
    }
    puVar4 = *(ulonglong **)(param_1 + 0x28);
    *(ulonglong **)(param_1 + 0x28) = puVar4 + 1;
    *puVar4 = uVar2 | 0xfffb800000000000;
    return 1;
  }
  uVar2 = FUN_1804a8a70(param_1,1);
  local_res8[0] = (int)uVar2;
  if (local_res8[0] == 0) {
    *(longlong *)(param_1 + 0x48) = lVar1;
    return uVar2;
  }
  if (-1 < local_res8[0]) {
    lVar3 = FUN_18048a470(param_1,uVar2 & 0xffffffff,local_res8);
    if (lVar3 != 0) {
      puVar4 = (ulonglong *)(lVar3 - 8);
      goto LAB_18048b518;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804840c0(param_1,1,0x4ce);
}



/* ===== 18048b5a0 FUN_18048b5a0 ===== */

undefined8 FUN_18048b5a0(undefined8 param_1)

{
  FUN_1804a8dd0(param_1,1);
  FUN_1804a89f0(param_1,2);
  return 0;
}



/* ===== 18048b5d0 FUN_18048b5d0 ===== */

undefined8 FUN_18048b5d0(longlong param_1)

{
  longlong lVar1;
  
  FUN_1804a8dd0(param_1,1);
  FUN_1804a89f0(param_1,2);
  lVar1 = FUN_1804a89f0(param_1,3);
  *(longlong *)(param_1 + 0x28) = lVar1 + 8;
  FUN_18047f770(param_1,1);
  return 1;
}



/* ===== 18048b620 FUN_18048b620 ===== */

undefined8 FUN_18048b620(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_1804a89f0(param_1,1);
  uVar4 = FUN_1804a89f0(param_1,2);
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar2 = FUN_18048f530(uVar3,uVar4);
  *(longlong *)(lVar1 + -8) = ~((longlong)(iVar2 + 1) << 0x2f);
  return 1;
}



/* ===== 18048b680 FUN_18048b680 ===== */

undefined8 FUN_18048b680(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(ulonglong **)(param_1 + 0x20) < *(ulonglong **)(param_1 + 0x28)) &&
     (uVar1 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar1 >> 0x2f) == -5)) {
    iVar2 = *(int *)((uVar1 & 0x7fffffffffff) + 0x14);
  }
  else {
    uVar3 = FUN_1804a8dd0(param_1,1);
    iVar2 = FUN_1804929b0(uVar3);
  }
  *(double *)(*(longlong *)(param_1 + 0x28) + -8) = (double)iVar2;
  return 1;
}



/* ===== 18048b6f0 FUN_18048b6f0 ===== */

int FUN_18048b6f0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  
  lVar6 = FUN_1804a8dd0(param_1,1);
  uVar3 = FUN_1804a8e80(param_1,2,1);
  plVar8 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  if ((plVar8 < *(longlong **)(param_1 + 0x28)) && (*plVar8 != -1)) {
    iVar4 = FUN_1804a8a70(param_1,3);
  }
  else {
    iVar4 = FUN_1804929b0(lVar6);
  }
  if (iVar4 < (int)uVar3) {
    return 0;
  }
  if (iVar4 - uVar3 < 8000) {
    iVar1 = (iVar4 - uVar3) + 1;
    iVar5 = FUN_18047e780(param_1,iVar1);
    if (iVar5 != 0) {
      while( true ) {
        if (uVar3 < *(uint *)(lVar6 + 0x30)) {
          puVar7 = (undefined8 *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar3 * 8);
        }
        else {
          puVar7 = (undefined8 *)FUN_1804927e0(lVar6,uVar3);
        }
        puVar2 = *(undefined8 **)(param_1 + 0x28);
        if (puVar7 == (undefined8 *)0x0) {
          *puVar2 = 0xffffffffffffffff;
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
        }
        else {
          *(undefined8 **)(param_1 + 0x28) = puVar2 + 1;
          *puVar2 = *puVar7;
        }
        if (iVar4 <= (int)uVar3) break;
        uVar3 = uVar3 + 1;
      }
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180484220(param_1,0x417);
}



