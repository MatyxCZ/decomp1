/* ===== 18048b7f0 FUN_18048b7f0 ===== */

int FUN_18048b7f0(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(*(longlong *)(param_1 + 0x28) - (longlong)*(ulonglong **)(param_1 + 0x20) >> 3);
  if (((0 < iVar4) &&
      (uVar1 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar1 >> 0x2f) == -5)) &&
     (*(char *)((uVar1 & 0x7fffffffffff) + 0x18) == '#')) {
    *(double *)(*(longlong *)(param_1 + 0x28) + -8) = (double)(iVar4 + -1);
    return 1;
  }
  iVar2 = FUN_1804a8a70(param_1,1);
  if (iVar2 < 0) {
    iVar3 = iVar2 + iVar4;
  }
  else {
    iVar3 = iVar4;
    if (iVar2 <= iVar4) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,1,0x496);
  }
  return iVar4 - iVar3;
}



/* ===== 18048b8a0 FUN_18048b8a0 ===== */

undefined8 FUN_18048b8a0(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  double dVar13;
  byte *local_res10;
  
  iVar5 = FUN_1804a8e80(param_1,2,10);
  if (iVar5 == 10) {
    puVar7 = (ulonglong *)FUN_1804a89f0(param_1,1);
    uVar6 = (uint)((longlong)*puVar7 >> 0x2f);
    if ((uVar6 < 0xfffffff3) ||
       ((uVar6 == 0xfffffffb && (iVar5 = FUN_1804972a0(*puVar7 & 0x7fffffffffff,puVar7), iVar5 != 0)
        ))) {
      *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) = *puVar7;
      return 2;
    }
    if ((int)((longlong)*puVar7 >> 0x2f) == -0xb) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
      plVar2[2] = param_1;
      puVar8 = (uint *)FUN_1804aba40(plVar2,*(undefined2 *)((*puVar7 & 0x7fffffffffff) + 10));
      uVar6 = *puVar8;
      if ((byte)(uVar6 >> 0x1c) == 5) {
        uVar6 = *(uint *)(*plVar2 + (ulonglong)(uVar6 & 0xffff) * 0x18);
      }
      if ((uVar6 < 0x10000000) || ((uVar6 & 0xf4000000) == 0x34000000)) {
        FUN_1804b23e0(plVar2,*plVar2 + 0x180,*(longlong *)(param_1 + 0x20) + -0x10,puVar7,0);
        return 2;
      }
    }
  }
  else {
    bVar3 = true;
    lVar9 = FUN_1804a8d10(param_1,1);
    if (0x22 < iVar5 - 2U) {
                    /* WARNING: Subroutine does not return */
      FUN_1804840c0(param_1,2,0x4a9);
    }
    pbVar10 = (byte *)(lVar9 + 0x18);
    bVar4 = *(byte *)(lVar9 + 0x18);
    if (((&DAT_18056fcb1)[bVar4] & 2) == 0) {
      pbVar12 = (byte *)(lVar9 + 0x19);
      pbVar11 = (byte *)(lVar9 + 0x19);
    }
    else {
      do {
        pbVar11 = pbVar10;
        bVar4 = pbVar11[1];
        pbVar10 = pbVar11 + 1;
      } while (((&DAT_18056fcb1)[bVar4] & 2) != 0);
      pbVar12 = pbVar11 + 2;
      pbVar11 = pbVar11 + 2;
    }
    if ((bVar4 != 0x2d) && (bVar3 = false, pbVar12 = pbVar10, bVar4 == 0x2b)) {
      pbVar12 = pbVar11;
    }
    if (((&DAT_18056fcb1)[*pbVar12] & 0x68) != 0) {
      uVar6 = FUN_18051566c(pbVar12,&local_res10,iVar5);
      if (pbVar12 != local_res10) {
        bVar4 = *local_res10;
        bVar1 = (&DAT_18056fcb1)[bVar4];
        while ((bVar1 & 2) != 0) {
          local_res10 = local_res10 + 1;
          bVar4 = *local_res10;
          bVar1 = (&DAT_18056fcb1)[bVar4];
        }
        if (bVar4 == 0) {
          dVar13 = (double)uVar6;
          if (bVar3) {
            dVar13 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ DAT_1808adeb0._4_4_,
                                      SUB84(dVar13,0) ^ (uint)DAT_1808adeb0);
          }
          *(double *)(*(longlong *)(param_1 + 0x20) + -0x10) = dVar13;
          return 2;
        }
      }
    }
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + -0x10) = 0xffffffffffffffff;
  return 2;
}



/* ===== 18048bad0 FUN_18048bad0 ===== */

undefined8 FUN_18048bad0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_1804a89f0(param_1,1);
  *(longlong *)(param_1 + 0x28) = lVar1 + 8;
  plVar2 = (longlong *)FUN_180494e10(param_1,lVar1,0x12);
  if (*plVar2 != -1) {
    *(longlong *)(*(longlong *)(param_1 + 0x20) + -0x10) = *plVar2;
    return 0xffffffff;
  }
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  uVar3 = FUN_180498280(param_1,*(undefined8 *)(param_1 + 0x20));
  *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) = uVar3 | 0xfffd800000000000;
  return 2;
}



/* ===== 18048bb60 FUN_18048bb60 ===== */

void FUN_18048bb60(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1804a8e80(param_1,2,1);
  FUN_18047fb50(param_1,1);
  iVar2 = FUN_18047ee00(param_1,1);
  if ((iVar2 != 0) && (0 < iVar1)) {
    FUN_180484c40(param_1,iVar1);
    FUN_18047f610(param_1,1);
    FUN_18047e7f0(param_1,2);
  }
  FUN_180484c80(param_1);
  return;
}



/* ===== 18048bbe0 FUN_18048bbe0 ===== */

undefined8 FUN_18048bbe0(undefined8 param_1)

{
  FUN_1804a89f0(param_1,1);
  FUN_1804a8a20(param_1,2);
  return 0;
}



/* ===== 18048bc10 FUN_18048bc10 ===== */

void FUN_18048bc10(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = FUN_1804a8f10(param_1,1);
  lVar3 = FUN_1804a8f10(param_1,2);
  FUN_18047fb50(param_1,3);
  lVar5 = lVar3 + 0x18;
  lVar4 = lVar2 + 0x18;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  uVar1 = FUN_180482c90(param_1,lVar4,lVar5);
  FUN_18048c710(param_1,uVar1,3);
  return;
}



/* ===== 18048bc90 FUN_18048bc90 ===== */

void FUN_18048bc90(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  
  lVar2 = FUN_1804a8f10(param_1,2);
  lVar3 = FUN_1804a8f10(param_1,3);
  if (*(ulonglong **)(param_1 + 0x20) < *(ulonglong **)(param_1 + 0x28)) {
    uVar6 = **(ulonglong **)(param_1 + 0x20);
    uVar7 = (uint)((longlong)uVar6 >> 0x2f);
    if ((uVar7 == 0xfffffffb) || (uVar7 < 0xfffffff3)) {
LAB_18048bd1d:
      lVar4 = FUN_1804a8d10(param_1,1);
      iVar8 = *(int *)(lVar4 + 0x14);
      lVar4 = lVar4 + 0x18;
    }
    else {
      if ((uVar7 != 0xfffffff3) || (*(char *)((uVar6 & 0x7fffffffffff) + 10) != '\x03'))
      goto LAB_18048bd6b;
      uVar6 = uVar6 & 0x7fffffffffff;
      if (*(char *)(uVar6 + 10) != '\x03') goto LAB_18048bd1d;
      lVar4 = *(longlong *)(uVar6 + 0x58);
      iVar8 = *(int *)(uVar6 + 0x30) - (int)lVar4;
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x10) + 0x78;
      }
    }
    FUN_18047fb50(param_1,4);
    lVar5 = lVar3 + 0x18;
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    lVar3 = lVar2 + 0x18;
    if (lVar2 == 0) {
      lVar3 = lVar4;
    }
    uVar1 = FUN_1804829e0(param_1,lVar4,iVar8,lVar3,lVar5);
  }
  else {
LAB_18048bd6b:
    FUN_1804a8a20(param_1,1);
    FUN_18047fb50(param_1,5);
    lVar4 = lVar3 + 0x18;
    pcVar9 = (char *)(lVar2 + 0x18);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    if (lVar2 == 0) {
      pcVar9 = "=(load)";
    }
    uVar1 = FUN_180482f60(param_1,FUN_18048c8b0,0,pcVar9,lVar4);
  }
  FUN_18048c710(param_1,uVar1,4);
  return;
}



/* ===== 18048bde0 FUN_18048bde0 ===== */

int FUN_18048bde0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1804a8f10(param_1,1);
  **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + 8;
  lVar3 = lVar2 + 0x18;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  iVar1 = FUN_180482ac0(param_1,lVar3);
  if (iVar1 != 0) {
    FUN_180484c80(param_1);
  }
  FUN_18047e730(param_1,0,0xffffffff);
  return (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) + -1;
}



/* ===== 18048be80 FUN_18048be80 ===== */

undefined8 FUN_18048be80(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_1804a8c30(param_1,1,2,&DAT_18056e590);
  uVar2 = FUN_1804a8e80(param_1,2,0);
  if (iVar1 == 3) {
    **(double **)(param_1 + 0x28) =
         (double)*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10) * DAT_1808ac298;
  }
  else {
    iVar3 = FUN_18047e970(param_1,iVar1,uVar2);
    if ((iVar1 - 5U & 0xfffffffb) == 0) {
      **(ulonglong **)(param_1 + 0x28) = ~((longlong)(iVar3 + 1) << 0x2f);
    }
    else {
      **(double **)(param_1 + 0x28) = (double)iVar3;
    }
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  return 1;
}



/* ===== 18048bf50 FUN_18048bf50 ===== */

undefined8 FUN_18048bf50(undefined8 param_1)

{
  int iVar1;
  
  FUN_18047fb50(param_1,1);
  FUN_18047efb0(param_1,0);
  iVar1 = FUN_18047fbf0(param_1,1);
  if (iVar1 != 0) {
    iVar1 = FUN_18047fe10(param_1,1);
    if (iVar1 == 1) {
      FUN_18047e8f0(param_1,0,0);
      FUN_18047f610(param_1,0xffffffff);
      FUN_18047f270(param_1,1);
      FUN_18047f770(param_1,0xffffd8ed);
    }
    else {
      iVar1 = FUN_18047ec30(param_1,1);
      if (iVar1 == 0) {
LAB_18048c034:
                    /* WARNING: Subroutine does not return */
        FUN_1804840c0(param_1,1,0x2af);
      }
      FUN_18047f6b0(param_1,0xffffd8ed);
      iVar1 = FUN_18047fbf0(param_1,0xffffffff);
      FUN_18047fb50(param_1,0xfffffffe);
      if (iVar1 == 0) goto LAB_18048c034;
      FUN_18047ec30(param_1,1);
    }
    FUN_18047f990(param_1,2);
  }
  return 1;
}



/* ===== 18048c050 FUN_18048c050 ===== */

undefined8 FUN_18048c050(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  bool bVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint local_res8 [2];
  ulonglong local_res10;
  
  lVar8 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3;
  puVar4 = (ulonglong *)
           FUN_180492860(*(undefined8 *)(param_1 + 0x48),
                         *(ulonglong *)
                          ((*(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff)
                          + 0x30) & 0x7fffffffffff);
  if ((puVar4 == (ulonglong *)0x0) || (*puVar4 == 0xffffffffffffffff)) {
    puVar4 = *(ulonglong **)(param_1 + 0x28);
    *(ulonglong **)(param_1 + 0x28) = puVar4 + 1;
    *puVar4 = *(ulonglong *)
               ((*(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) + 0x30) &
              0x7fffffffffff | 0xfffd800000000000;
    FUN_18047ecd0(param_1,0xffffd8ee);
    puVar4 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + -8);
  }
  else {
    puVar2 = *(ulonglong **)(param_1 + 0x28);
    *(ulonglong **)(param_1 + 0x28) = puVar2 + 1;
    *puVar2 = *puVar4;
  }
  if ((((int)((longlong)*puVar4 >> 0x2f) == -9) &&
      (*(char *)((*puVar4 & 0x7fffffffffff) + 10) == '\x13')) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x2c8) == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  lVar7 = 0;
  if (0 < lVar8) {
    do {
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar7 * 8);
      if ((bVar3) && (lVar5 = FUN_180499570(param_1,puVar1,local_res8), lVar5 != 0)) {
        local_res10 = (ulonglong)local_res8[0];
      }
      else {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8) = *puVar1;
        **(undefined8 **)(param_1 + 0x28) = (*(undefined8 **)(param_1 + 0x28))[-1];
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 0x10;
        FUN_18047e730(param_1,1,1);
        lVar5 = FUN_18047fc70(param_1,0xffffffff,&local_res10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180484220(param_1,0x457);
        }
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
      }
      if (lVar7 != 0) {
        _fputchar(9);
      }
      uVar6 = __acrt_iob_func(1);
      FUN_18051142c(lVar5,1,local_res10,uVar6);
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar8);
  }
  _fputchar(10);
  return 0;
}



/* ===== 18048c230 FUN_18048c230 ===== */

undefined8 FUN_18048c230(ulonglong param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  
  if ((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
     (uVar2 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar2 >> 0x2f) != -7)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,1,0x236);
  }
  uVar2 = uVar2 & 0x7fffffffffff;
  if (uVar2 == param_1) {
    pcVar1 = "running";
  }
  else if (*(char *)(uVar2 + 0xb) == '\x01') {
    pcVar1 = "suspended";
  }
  else if (*(char *)(uVar2 + 0xb) == '\0') {
    if (*(longlong *)(uVar2 + 0x38) + 0x10U < *(ulonglong *)(uVar2 + 0x20)) {
      pcVar1 = "normal";
    }
    else {
      pcVar1 = "dead";
      if (*(ulonglong *)(uVar2 + 0x28) != *(ulonglong *)(uVar2 + 0x20)) {
        pcVar1 = "suspended";
      }
    }
  }
  else {
    pcVar1 = "dead";
  }
  FUN_18047f530(param_1,pcVar1);
  return 1;
}



/* ===== 18048c2f0 FUN_18048c2f0 ===== */

undefined8 FUN_18048c2f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_18047f5c0();
  **(ulonglong **)(param_1 + 0x28) = ~((longlong)(iVar1 + 1) << 0x2f);
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  return 2;
}



/* ===== 18048c360 FUN_18048c360 ===== */

undefined8 FUN_18048c360(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  if ((*(undefined8 **)(param_1 + 0x28) <= *(undefined8 **)(param_1 + 0x20)) ||
     ((int)((longlong)**(undefined8 **)(param_1 + 0x20) >> 0x2f) != -9)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,1,6);
  }
  lVar2 = FUN_18047ef40();
  puVar1 = *(ulonglong **)(lVar2 + 0x28);
  *(ulonglong **)(lVar2 + 0x28) = puVar1 + 1;
  *puVar1 = **(ulonglong **)(param_1 + 0x20) & 0x7fffffffffff | 0xfffb800000000000;
  return 1;
}



/* ===== 18048c3d0 FUN_18048c3d0 ===== */

void FUN_18048c3d0(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_180484220(param_1,0x33e);
}



/* ===== 18048c3e0 FUN_18048c3e0 ===== */

void FUN_18048c3e0(longlong param_1)

{
  ulonglong uVar1;
  
  if ((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
     (uVar1 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar1 >> 0x2f) != -7)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,1,0x236);
  }
  FUN_18048c5b0(param_1,uVar1 & 0x7fffffffffff,0);
  return;
}



/* ===== 18048c430 FUN_18048c430 ===== */

undefined8 FUN_18048c430(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  if ((*(undefined8 **)(param_1 + 0x28) <= *(undefined8 **)(param_1 + 0x20)) ||
     ((int)((longlong)**(undefined8 **)(param_1 + 0x20) >> 0x2f) != -9)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,1,6);
  }
  lVar2 = FUN_18047ef40();
  puVar1 = *(ulonglong **)(lVar2 + 0x28);
  *(ulonglong **)(lVar2 + 0x28) = puVar1 + 1;
  *puVar1 = **(ulonglong **)(param_1 + 0x20) & 0x7fffffffffff | 0xfffb800000000000;
  lVar2 = FUN_1804a9080(param_1,&LAB_18048c690,0x25,1);
  *(longlong *)(lVar2 + 0x20) = *(longlong *)(param_1 + 0x10) + 0x17e4;
  return 1;
}



/* ===== 18048c4d0 FUN_18048c4d0 ===== */

undefined8 FUN_18048c4d0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)FUN_1804a89f0(param_1,1);
  plVar2 = (longlong *)FUN_180494e10(param_1,puVar1,param_2);
  if (*plVar2 != -1) {
    *(undefined8 **)(param_1 + 0x28) = puVar1 + 1;
    *(longlong *)(*(longlong *)(param_1 + 0x20) + -0x10) = *plVar2;
    return 0xffffffff;
  }
  if ((int)((longlong)*puVar1 >> 0x2f) != -0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,1,5);
  }
  puVar1[-1] = *puVar1;
  puVar1[-2] = *(ulonglong *)
                ((*(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) + 0x30) &
               0x7fffffffffff | 0xfffb800000000000;
  if (param_2 == 0x14) {
    *puVar1 = 0xffffffffffffffff;
  }
  else {
    *puVar1 = 0;
  }
  return 4;
}



/* ===== 18048c5b0 FUN_18048c5b0 ===== */

undefined8 FUN_18048c5b0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (((*(longlong *)(param_2 + 0x50) == 0) && (*(byte *)(param_2 + 0xb) < 2)) &&
     ((*(byte *)(param_2 + 0xb) != 0 ||
      (*(longlong *)(param_2 + 0x28) != *(longlong *)(param_2 + 0x20))))) {
    uVar1 = FUN_18048e860(param_2,*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3
                         );
    if ((int)uVar1 != 0) {
      *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + -8;
                    /* WARNING: Subroutine does not return */
      FUN_180484240(param_1,(**(ulonglong **)(param_2 + 0x28) & 0x7fffffffffff) + 0x18);
    }
    return uVar1;
  }
  uVar1 = 0x562;
  if (*(longlong *)(param_2 + 0x50) != 0) {
    uVar1 = 0x542;
  }
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1,uVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + -0x10) = 0xffff7fffffffffff;
  uVar2 = FUN_1804848e0(param_1);
  *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -8) = uVar2 | 0xfffd800000000000;
  return 3;
}



/* ===== 18048c6c0 FUN_18048c6c0 ===== */

void FUN_18048c6c0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + -8;
  **(undefined8 **)(param_1 + 0x28) = **(undefined8 **)(param_2 + 0x28);
  puVar1 = *(ulonglong **)(param_1 + 0x28);
  *(ulonglong **)(param_1 + 0x28) = puVar1 + 1;
  uVar2 = *puVar1;
  if ((int)((longlong)uVar2 >> 0x2f) == -5) {
                    /* WARNING: Subroutine does not return */
    FUN_180484240(param_1,(uVar2 & 0x7fffffffffff) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804846a0();
}



/* ===== 18048c710 FUN_18048c710 ===== */

undefined8 FUN_18048c710(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -0x10) = 0xffffffffffffffff;
    return 2;
  }
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -8 + (longlong)param_3 * 8);
  if (((int)((longlong)uVar2 >> 0x2f) == -0xc) &&
     (uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8),
     (int)((longlong)uVar1 >> 0x2f) == -9)) {
    uVar1 = uVar1 & 0x7fffffffffff;
    uVar2 = uVar2 & 0x7fffffffffff;
    *(ulonglong *)(uVar1 + 0x10) = uVar2;
    if (((*(byte *)(uVar2 + 8) & 3) != 0) && ((*(byte *)(uVar1 + 8) & 4) != 0)) {
      FUN_1804908e0(*(undefined8 *)(param_1 + 0x10));
    }
  }
  return 1;
}



/* ===== 18048c790 FUN_18048c790 ===== */

undefined8 FUN_18048c790(longlong param_1)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x48);
  uVar1 = FUN_180491d30(param_1,&DAT_18056e5f8,2);
  puVar2 = (ulonglong *)FUN_180493400(param_1,uVar3,uVar1);
  *puVar2 = uVar3 | 0xfffa000000000000;
  FUN_18047f450(param_1,"Lua 5.1",7);
  uVar3 = FUN_180492ab0(param_1,0,1);
  puVar2 = *(ulonglong **)(param_1 + 0x28);
  *(ulonglong **)(param_1 + 0x28) = puVar2 + 1;
  *puVar2 = uVar3 | 0xfffa000000000000;
  *(ulonglong *)(uVar3 + 0x20) = uVar3;
  uVar4 = FUN_180491d30(param_1,&DAT_18056e5ec,2);
  uVar1 = FUN_180491d30(param_1,"__mode",6);
  puVar2 = (ulonglong *)FUN_180493400(param_1,uVar3,uVar1);
  *puVar2 = uVar4 | 0xfffd800000000000;
  *(undefined1 *)(uVar3 + 10) = 0xf7;
  FUN_1804a90d0(param_1,&DAT_18056e5f8,&DAT_18056e3a0,&PTR_FUN_18056e2d0);
  FUN_1804a90d0(param_1,"coroutine",&DAT_18056e530,&PTR_FUN_18056e4f8);
  return 2;
}



/* ===== 18048c8b0 FUN_18048c8b0 ===== */

undefined8 FUN_18048c8b0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  FUN_18047e1c0(param_1,2,"too many nested functions");
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x28) = puVar1 + 1;
  *puVar1 = **(undefined8 **)(param_1 + 0x20);
  FUN_18047e730(param_1,0,1);
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
  lVar2 = **(longlong **)(param_1 + 0x28);
  if (lVar2 == -1) {
    *param_3 = 0;
    return 0;
  }
  uVar3 = (uint)(lVar2 >> 0x2f);
  if ((uVar3 != 0xfffffffb) && (0xfffffff2 < uVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1,0x432);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) = lVar2;
  uVar4 = FUN_18047fc70(param_1,5,param_3);
  return uVar4;
}



/* ===== 18048c960 FUN_18048c960 ===== */

int FUN_18048c960(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  lVar3 = FUN_1804a8d10(param_1,1);
  iVar5 = *(int *)(lVar3 + 0x14);
  uVar1 = FUN_1804a8e80(param_1,2,1);
  iVar2 = FUN_1804a8e80(param_1,3,uVar1);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1 + iVar5;
  }
  bVar7 = false;
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 1 + iVar5;
    bVar7 = (int)uVar1 < 0;
  }
  if (uVar1 == 0 || bVar7) {
    uVar1 = 1;
  }
  if (iVar2 <= iVar5) {
    iVar5 = iVar2;
  }
  if (iVar5 < (int)uVar1) {
    return 1;
  }
  uVar6 = iVar5 - (uVar1 - 1);
  if (8000 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1,0x6d0);
  }
  if (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) <=
      (longlong)((ulonglong)uVar6 * 8)) {
    FUN_18048e920(param_1);
  }
  iVar5 = 0;
  lVar3 = (ulonglong)uVar1 + lVar3;
  if (3 < (int)uVar6) {
    do {
      lVar4 = (longlong)iVar5;
      iVar5 = iVar5 + 4;
      *(double *)(*(longlong *)(param_1 + 0x20) + -0x10 + lVar4 * 8) =
           (double)*(byte *)(lVar3 + 0x17 + lVar4);
      *(double *)(*(longlong *)(param_1 + 0x20) + -8 + lVar4 * 8) =
           (double)*(byte *)(lVar3 + 0x18 + lVar4);
      *(double *)(*(longlong *)(param_1 + 0x20) + lVar4 * 8) =
           (double)*(byte *)(lVar3 + 0x19 + lVar4);
      *(double *)(*(longlong *)(param_1 + 0x20) + 8 + lVar4 * 8) =
           (double)*(byte *)(lVar3 + 0x1a + lVar4);
    } while (iVar5 < (int)(uVar6 - 3));
  }
  for (; iVar5 < (int)uVar6; iVar5 = iVar5 + 1) {
    *(double *)(*(longlong *)(param_1 + 0x20) + -0x10 + (longlong)iVar5 * 8) =
         (double)*(byte *)(lVar3 + 0x17 + (longlong)iVar5);
  }
  return uVar6 + 1;
}



/* ===== 18048cac0 FUN_18048cac0 ===== */

undefined8 FUN_18048cac0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3;
  iVar5 = (int)uVar6;
  lVar2 = FUN_1804aa3f0(param_1,uVar6 & 0xffffffff);
  iVar4 = 1;
  if (0 < iVar5) {
    do {
      uVar1 = FUN_1804a8a70(param_1,iVar4);
      if (uVar1 != (uVar1 & 0xff)) {
                    /* WARNING: Subroutine does not return */
        FUN_1804840c0(param_1,iVar4,0x219);
      }
      lVar3 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      *(char *)(lVar3 + -1 + lVar2) = (char)uVar1;
    } while (iVar4 <= iVar5);
  }
  uVar6 = FUN_180491d30(param_1,lVar2,(longlong)iVar5);
  *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) = uVar6 | 0xfffd800000000000;
  return 2;
}



/* ===== 18048cb50 FUN_18048cb50 ===== */

undefined8 FUN_18048cb50(longlong param_1)

{
  int iVar1;
  
  FUN_1804a8d10(param_1,1);
  FUN_1804a8a70(param_1,2);
  iVar1 = FUN_1804a8e80(param_1,3,0xffffffff);
  *(double *)(*(longlong *)(param_1 + 0x20) + 0x10) = (double)iVar1;
  return 0;
}



/* ===== 18048cba0 FUN_18048cba0 ===== */

undefined8 FUN_18048cba0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  ulonglong uVar7;
  
  uVar3 = FUN_1804a8d10(param_1,1);
  iVar2 = FUN_1804a8a70(param_1,2);
  lVar4 = FUN_1804a8f10(param_1,3);
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(lVar1 + 0xd8);
  *(longlong *)(lVar1 + 0xe0) = param_1;
  uVar5 = uVar3;
  if ((lVar4 != 0) && (1 < iVar2)) {
    uVar5 = FUN_1804a9d10(param_1,lVar4,uVar3);
    *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(lVar1 + 0xd8);
    FUN_1804a9f60(lVar1 + 200,uVar3);
    iVar2 = iVar2 + -1;
  }
  piVar6 = (int *)FUN_1804aa040(lVar1 + 200,uVar5,iVar2);
  uVar7 = FUN_180491d30(param_1,*(undefined8 *)(piVar6 + 4),*piVar6 - piVar6[4]);
  *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar7 | 0xfffd800000000000;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 18048ccc0 FUN_18048ccc0 ===== */

undefined8 FUN_18048ccc0(undefined8 param_1)

{
  FUN_1804a8d10(param_1,1);
  return 0;
}



/* ===== 18048cce0 FUN_18048cce0 ===== */

undefined8 FUN_18048cce0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  
  lVar5 = FUN_1804a8970(param_1,1,1);
  uVar9 = 0;
  puVar7 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + 8);
  if (puVar7 < *(ulonglong **)(param_1 + 0x28)) {
    uVar6 = *puVar7;
    uVar3 = (uint)((longlong)uVar6 >> 0x2f);
    if (uVar3 == 0xfffffffb) {
      pcVar8 = (char *)((uVar6 & 0x7fffffffffff) + 0x18);
      cVar1 = *pcVar8;
      while (cVar1 != '\0') {
        pcVar8 = pcVar8 + 1;
        uVar3 = uVar9 | 2;
        if (cVar1 != 's') {
          uVar3 = uVar9;
        }
        bVar10 = cVar1 != 'd';
        cVar1 = *pcVar8;
        uVar9 = uVar3 | 0x80000000;
        if (bVar10) {
          uVar9 = uVar3;
        }
      }
    }
    else {
      uVar9 = 0;
      if (uVar3 < 0xfffffffe) {
        uVar9 = 2;
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(lVar2 + 200) = *(undefined8 *)(lVar2 + 0xd8);
  *(longlong *)(lVar2 + 0xe0) = param_1;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + 8;
  if ((lVar5 == 0) ||
     (iVar4 = FUN_18049be10(param_1,lVar5,FUN_18048e230,lVar2 + 200,uVar9), iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1,0x6b2);
  }
  uVar6 = FUN_180491d30(param_1,*(undefined8 *)(lVar2 + 0xd8),
                        *(int *)(lVar2 + 200) - *(int *)(lVar2 + 0xd8));
  *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar6 | 0xfffd800000000000;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 18048ce50 FUN_18048ce50 ===== */

undefined8 FUN_18048ce50(longlong param_1)

{
  FUN_1804a8d10(param_1,1);
  FUN_1804a8d10(param_1,2);
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + 0x18;
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10) = 0;
  FUN_1804a9080(param_1,FUN_18048d430,0x57,3);
  return 1;
}



/* ===== 18048ceb0 FUN_18048ceb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18048ceb0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 auStack_4a8 [32];
  int local_488;
  undefined4 uStack_484;
  undefined1 *local_478 [67];
  undefined1 local_260 [8];
  undefined1 *local_258;
  undefined1 *local_250;
  undefined8 local_248;
  undefined8 local_240;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_4a8;
  puVar4 = (undefined1 *)FUN_18047e090(param_1,1,&local_488);
  pcVar5 = (char *)FUN_18047e090(param_1,2,0);
  iVar2 = FUN_18047fe10(param_1,3);
  iVar3 = FUN_18047e470(param_1,4,(longlong)(local_488 + 1));
  cVar1 = *pcVar5;
  pcVar7 = pcVar5 + 1;
  if (cVar1 != '^') {
    pcVar7 = pcVar5;
  }
  if (3 < iVar2 - 3U) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,3,0x290);
  }
  iVar2 = 0;
  FUN_180484f40(param_1,local_478);
  local_250 = puVar4 + CONCAT44(uStack_484,local_488);
  local_258 = puVar4;
  local_248 = param_1;
  if (iVar3 < 1) {
LAB_18048d028:
    FUN_180484e00(local_478,puVar4,(longlong)local_250 - (longlong)puVar4);
    FUN_180485160(local_478);
    FUN_18047f3d0(param_1,(longlong)iVar2);
    return 2;
  }
  do {
    local_240 = 0;
    puVar6 = (undefined1 *)FUN_18048d670(&local_258,puVar4,pcVar7);
    if (puVar6 == (undefined1 *)0x0) {
LAB_18048cfd7:
      if (local_250 <= puVar4) goto LAB_18048d028;
      if (local_260 <= local_478[0]) {
        FUN_180485110(local_478);
      }
      *local_478[0] = *puVar4;
      local_478[0] = local_478[0] + 1;
      puVar6 = puVar4 + 1;
    }
    else {
      iVar2 = iVar2 + 1;
      FUN_18048d160(&local_258,local_478,puVar4,puVar6);
      if (puVar6 <= puVar4) goto LAB_18048cfd7;
    }
    puVar4 = puVar6;
    if ((cVar1 == '^') || (iVar3 <= iVar2)) goto LAB_18048d028;
  } while( true );
}



/* ===== 18048d0a0 FUN_18048d0a0 ===== */

undefined8 FUN_18048d0a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 0x10);
    *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(lVar1 + 0xd8);
    *(longlong *)(lVar1 + 0xe0) = param_1;
    iVar2 = FUN_180498920(param_1,lVar1 + 200,1,-iVar2);
  } while (0 < iVar2);
  uVar3 = FUN_180491d30(param_1,*(undefined8 *)(lVar1 + 0xd8),
                        *(int *)(lVar1 + 200) - *(int *)(lVar1 + 0xd8));
  *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar3 | 0xfffd800000000000;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 18048d160 FUN_18048d160 ===== */

void FUN_18048d160(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong local_res8;
  
  lVar5 = param_1[2];
  iVar3 = FUN_18047fe10(lVar5,3);
  if ((iVar3 == 3) || (iVar3 == 4)) {
    lVar5 = FUN_18047fc70(param_1[2],3,&local_res8);
    if (local_res8 != 0) {
      uVar8 = 0;
      do {
        puVar1 = (undefined1 *)(uVar8 + lVar5);
        if (*(char *)(uVar8 + lVar5) == '%') {
          bVar2 = puVar1[1];
          uVar8 = uVar8 + 1;
          if (((&DAT_18056fcb1)[bVar2] & 8) == 0) {
            if (param_2 + 0x43 <= (longlong *)*param_2) {
              FUN_180485110(param_2);
            }
            *(undefined1 *)*param_2 = puVar1[1];
            *param_2 = *param_2 + 1;
          }
          else if (bVar2 == 0x30) {
            FUN_180484e00(param_2,param_3,param_4 - param_3);
          }
          else {
            FUN_18048de60(param_1,(char)bVar2 + -0x31,param_3,param_4);
            FUN_180484e80(param_2);
          }
        }
        else {
          if (param_2 + 0x43 <= (longlong *)*param_2) {
            FUN_180485110(param_2);
          }
          *(undefined1 *)*param_2 = *puVar1;
          *param_2 = *param_2 + 1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_res8);
    }
    return;
  }
  if (iVar3 != 5) {
    if (iVar3 == 6) {
      FUN_18047f610(lVar5,3);
      uVar4 = FUN_18048dd80(param_1,param_3,param_4);
      FUN_18047e730(lVar5,uVar4,1);
    }
    goto LAB_18048d1f7;
  }
  if ((int)param_1[3] < 1) {
    lVar9 = param_4 - param_3;
    lVar7 = param_3;
LAB_18048d1e1:
    FUN_18047f450(param_1[2],lVar7,lVar9);
  }
  else {
    lVar9 = param_1[5];
    if (lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_180484220(param_1[2],0x7b1);
    }
    lVar7 = param_1[4];
    if (lVar9 != -2) goto LAB_18048d1e1;
    FUN_18047f3d0(param_1[2],(lVar7 - *param_1) + 1);
  }
  FUN_18047ecd0(lVar5,3);
LAB_18048d1f7:
  iVar3 = FUN_18047fbf0(lVar5,0xffffffff);
  if (iVar3 == 0) {
    FUN_18047fb50(lVar5,0xfffffffe);
    FUN_18047f450(lVar5,param_3,param_4 - param_3);
  }
  else {
    iVar3 = FUN_18047ee00(lVar5,0xffffffff);
    if (iVar3 == 0) {
      uVar4 = FUN_18047fe10(lVar5,0xffffffff);
      uVar6 = FUN_18047fe70(lVar5,uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_1804842f0(lVar5,0x7e4,uVar6);
    }
  }
  FUN_180484e80(param_2);
  return;
}



/* ===== 18048d3b0 FUN_18048d3b0 ===== */

char * FUN_18048d3b0(longlong param_1,char *param_2)

{
  char cVar1;
  
  if (*param_2 == '%') {
    if (param_2[1] == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_180484220(*(undefined8 *)(param_1 + 0x10),0x720);
    }
    return param_2 + 2;
  }
  if (*param_2 == '[') {
    param_2 = param_2 + (ulonglong)(param_2[1] == '^') + 1;
    cVar1 = *param_2;
    do {
      if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_180484220(*(undefined8 *)(param_1 + 0x10),0x742);
      }
      if ((cVar1 == '%') && (param_2[1] != '\0')) {
        param_2 = param_2 + 2;
      }
      else {
        param_2 = param_2 + 1;
      }
      cVar1 = *param_2;
    } while (cVar1 != ']');
  }
  return param_2 + 1;
}



/* ===== 18048d430 FUN_18048d430 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18048d430(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_288 [32];
  longlong local_268;
  ulonglong local_260;
  longlong local_258;
  ulonglong local_250;
  ulonglong auStack_248 [64];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_288;
  uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  uVar4 = *(ulonglong *)(uVar5 + 0x30) & 0x7fffffffffff;
  uVar7 = *(ulonglong *)(uVar5 + 0x38);
  uVar6 = (ulonglong)*(uint *)(uVar5 + 0x40) + 0x18 + uVar4;
  local_260 = uVar4 + 0x18 + (ulonglong)*(uint *)(uVar4 + 0x14);
  local_268 = uVar4 + 0x18;
  local_258 = param_1;
  if (uVar6 <= local_260) {
    do {
      local_250 = 0;
      uVar2 = FUN_18048d670(&local_268,uVar6,(uVar7 & 0x7fffffffffff) + 0x18);
      if (uVar2 != 0) {
        iVar3 = (int)uVar2 - (int)(uVar4 + 0x18);
        iVar1 = iVar3 + 1;
        if (uVar2 != uVar6) {
          iVar1 = iVar3;
        }
        *(int *)(uVar5 + 0x40) = iVar1;
        iVar1 = (int)local_250;
        if (((int)local_250 == 0) && (uVar6 != 0)) {
          iVar1 = 1;
          FUN_18047e1c0(local_258,1,"too many captures");
        }
        else {
          FUN_18047e1c0(local_258,local_250 & 0xffffffff,"too many captures");
          if (iVar1 < 1) {
            return iVar1;
          }
        }
        iVar3 = 0;
        goto LAB_18048d550;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 <= local_260);
  }
  return 0;
LAB_18048d550:
  if (iVar3 < (int)local_250) {
    uVar7 = auStack_248[(longlong)iVar3 * 2 + 1];
    if (uVar7 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180484220(local_258,0x7b1);
    }
    uVar4 = auStack_248[(longlong)iVar3 * 2];
    if (uVar7 != 0xfffffffffffffffe) goto LAB_18048d565;
    FUN_18047f3d0(local_258,(uVar4 - local_268) + 1);
  }
  else {
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180484220(local_258,0x789);
    }
    uVar4 = uVar6;
    uVar7 = uVar2 - uVar6;
LAB_18048d565:
    FUN_18047f450(local_258,uVar4,uVar7);
  }
  iVar3 = iVar3 + 1;
  if (iVar1 <= iVar3) {
    return iVar1;
  }
  goto LAB_18048d550;
}



/* ===== 18048d5c0 FUN_18048d5c0 ===== */

undefined8 FUN_18048d5c0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  
  FUN_1804a90d0(param_1,"string",&DAT_18056e6a0,&PTR_FUN_18056e640);
  lVar3 = FUN_180492ab0(param_1,0,1);
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(longlong *)(lVar1 + 0x280) = lVar3;
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8);
  puVar4 = (ulonglong *)FUN_180493400(param_1,lVar3,*(undefined8 *)(lVar1 + 0x1b0));
  *puVar4 = uVar2 & 0x7fffffffffff | 0xfffa000000000000;
  *(undefined1 *)(lVar3 + 10) = 0xfe;
  FUN_1804a9000(param_1,"string.buffer",FUN_1804b6680,
                *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) & 0x7fffffffffff);
  return 1;
}



/* ===== 18048d670 FUN_18048d670 ===== */

char * FUN_18048d670(undefined8 *param_1,char *param_2,char *param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  ulonglong uVar10;
  char *pcVar11;
  
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
  if (200 < *(int *)((longlong)param_1 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1[2],0x775);
  }
LAB_18048d6b2:
  while( true ) {
    cVar5 = *param_3;
    pcVar9 = param_2;
    if (cVar5 == '\0') goto LAB_18048daa8;
    if (cVar5 != '$') break;
    if (param_3[1] == '\0') {
      if (param_2 != (char *)param_1[1]) {
        pcVar9 = (char *)0x0;
      }
      goto LAB_18048daa8;
    }
LAB_18048d864:
    if (cVar5 == '%') {
      if (param_3[1] == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_180484220(param_1[2],0x720);
      }
      pcVar9 = param_3 + 2;
      pcVar8 = param_3 + 1;
      pcVar11 = param_3 + 3;
    }
    else if (cVar5 == '[') {
      pcVar8 = param_3 + 1;
      if (param_3[1] == '^') {
        pcVar8 = param_3 + 2;
      }
      do {
        if (*pcVar8 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_180484220(param_1[2],0x742);
        }
        pcVar9 = pcVar8 + 1;
        if ((*pcVar8 == '%') && (*pcVar9 != '\0')) {
          pcVar9 = pcVar8 + 2;
        }
        pcVar8 = pcVar9;
      } while (*pcVar8 != ']');
      pcVar9 = pcVar8 + 1;
      pcVar11 = pcVar8 + 2;
    }
    else {
      pcVar9 = param_3 + 1;
      pcVar11 = param_3 + 2;
      pcVar8 = param_3;
    }
    if (param_2 < (char *)param_1[1]) {
      if (cVar5 == '%') {
        uVar6 = FUN_18048db40();
LAB_18048d90c:
        if (uVar6 == 0) goto LAB_18048d917;
      }
      else if (cVar5 != '.') {
        if (cVar5 == '[') {
          uVar6 = FUN_18048dbb0(*param_2,param_3,pcVar8);
        }
        else {
          uVar6 = (uint)(cVar5 == *param_2);
        }
        goto LAB_18048d90c;
      }
      bVar3 = true;
    }
    else {
LAB_18048d917:
      bVar3 = false;
    }
    cVar5 = *pcVar9;
    if (cVar5 == '*') {
      pcVar9 = (char *)FUN_18048dcb0(param_1,param_2,param_3,pcVar9);
      goto LAB_18048daa8;
    }
    if (cVar5 == '+') {
      if (bVar3) {
        pcVar9 = (char *)FUN_18048dcb0(param_1,param_2 + 1,param_3,pcVar9);
        goto LAB_18048daa8;
      }
      goto LAB_18048d7e2;
    }
    if (cVar5 == '-') {
      pcVar9 = (char *)FUN_18048d670(param_1,param_2,pcVar11);
      if (pcVar9 == (char *)0x0) goto LAB_18048da00;
      goto LAB_18048daa8;
    }
    if (cVar5 == '?') {
      if ((bVar3) &&
         (pcVar9 = (char *)FUN_18048d670(param_1,param_2 + 1,pcVar11), pcVar9 != (char *)0x0)) {
LAB_18048d9d7:
        goto LAB_18048daa8;
      }
      param_3 = pcVar11;
    }
    else {
      if (!bVar3) goto LAB_18048d7e2;
      param_2 = param_2 + 1;
      param_3 = pcVar9;
    }
  }
  if (cVar5 == '%') {
    bVar1 = param_3[1];
    if (bVar1 == 0x62) {
      cVar5 = param_3[2];
      if ((cVar5 == '\0') || (param_3[3] == '\0')) {
                    /* WARNING: Subroutine does not return */
        FUN_180484220(param_1[2],0x762);
      }
      if (*param_2 == cVar5) {
        param_2 = param_2 + 1;
        iVar7 = 1;
        if (param_2 < (char *)param_1[1]) {
          do {
            if (*param_2 == param_3[3]) {
              iVar7 = iVar7 + -1;
              if (iVar7 == 0) goto code_r0x00018048d82d;
            }
            else {
              iVar4 = iVar7 + 1;
              if (*param_2 != cVar5) {
                iVar4 = iVar7;
              }
              iVar7 = iVar4;
            }
            param_2 = param_2 + 1;
            if ((char *)param_1[1] <= param_2) {
              pcVar9 = (char *)0x0;
              goto LAB_18048daa8;
            }
          } while( true );
        }
      }
      goto LAB_18048d7e2;
    }
    if (bVar1 == 0x66) {
      pcVar9 = param_3 + 2;
      if (param_3[2] != '[') {
                    /* WARNING: Subroutine does not return */
        FUN_180484220(param_1[2],0x6e6);
      }
      param_3 = (char *)FUN_18048d3b0(param_1,pcVar9);
      if (param_2 == (char *)*param_1) {
        cVar5 = '\0';
      }
      else {
        cVar5 = param_2[-1];
      }
      iVar7 = FUN_18048dbb0(cVar5,pcVar9,param_3 + -1);
      if ((iVar7 != 0) || (iVar7 = FUN_18048dbb0(*param_2,pcVar9,param_3 + -1), iVar7 == 0))
      goto LAB_18048d7e2;
    }
    else {
      uVar6 = (uint)bVar1;
      if (((&DAT_18056fcb1)[bVar1] & 8) == 0) goto LAB_18048d864;
      if (((bVar1 < 0x31) || (*(int *)(param_1 + 3) <= (int)(uVar6 - 0x31))) ||
         (uVar10 = param_1[(ulonglong)uVar6 * 2 + -0x5d], uVar10 == 0xffffffffffffffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_180484220(param_1[2],0x789);
      }
      if (((ulonglong)(param_1[1] - (longlong)param_2) < uVar10) ||
         (iVar7 = memcmp((void *)param_1[((ulonglong)uVar6 - 0x2f) * 2],param_2,uVar10), iVar7 != 0)
         ) goto LAB_18048d7e2;
      param_2 = param_2 + uVar10;
      pcVar9 = param_2;
      if (param_2 == (char *)0x0) goto LAB_18048daa8;
      param_3 = param_3 + 2;
    }
    goto LAB_18048d6b2;
  }
  if (cVar5 == '(') {
    pcVar9 = (char *)FUN_18048def0(param_1,param_2,param_3 + (ulonglong)(param_3[1] == ')') + 1,
                                   (param_3[1] != ')') - 2);
    goto LAB_18048d9d7;
  }
  if (cVar5 != ')') goto LAB_18048d864;
  uVar6 = *(int *)(param_1 + 3) - 1;
  if ((int)uVar6 < 0) goto LAB_18048dae0;
  while( true ) {
    uVar10 = (ulonglong)uVar6;
    if (param_1[uVar10 * 2 + 5] == -1) break;
    uVar6 = uVar6 - 1;
    if ((int)uVar6 < 0) {
LAB_18048dae0:
                    /* WARNING: Subroutine does not return */
      FUN_180484220(param_1[2],0x708);
    }
  }
  param_1[uVar10 * 2 + 5] = (longlong)param_2 - param_1[((ulonglong)uVar6 + 2) * 2];
  pcVar9 = (char *)FUN_18048d670(param_1,param_2,param_3 + 1);
  if (pcVar9 == (char *)0x0) {
    param_1[uVar10 * 2 + 5] = 0xffffffffffffffff;
  }
  goto LAB_18048daa8;
code_r0x00018048d82d:
  param_2 = param_2 + 1;
  pcVar9 = param_2;
  if (param_2 == (char *)0x0) goto LAB_18048daa8;
  param_3 = param_3 + 4;
  goto LAB_18048d6b2;
LAB_18048d7e2:
  pcVar9 = (char *)0x0;
  goto LAB_18048daa8;
LAB_18048da00:
  do {
    if ((char *)param_1[1] <= param_2) goto LAB_18048d7e2;
    cVar5 = *param_3;
    cVar2 = *param_2;
    if (cVar5 == '%') {
      uVar6 = FUN_18048db40(cVar2,param_3[1]);
LAB_18048da46:
      if (uVar6 == 0) goto LAB_18048d7e2;
    }
    else if (cVar5 != '.') {
      if (cVar5 == '[') {
        uVar6 = FUN_18048dbb0(cVar2,param_3,pcVar8);
      }
      else {
        uVar6 = (uint)(cVar5 == cVar2);
      }
      goto LAB_18048da46;
    }
    param_2 = param_2 + 1;
    pcVar9 = (char *)FUN_18048d670(param_1,param_2,pcVar11);
  } while (pcVar9 == (char *)0x0);
LAB_18048daa8:
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + -1;
  return pcVar9;
}



/* ===== 18048db40 FUN_18048db40 ===== */

byte FUN_18048db40(uint param_1,uint param_2)

{
  byte bVar1;
  
  if (((byte)param_2 & 0xc0) == 0x40) {
    if ((&DAT_18056e620)[param_2 & 0x1f] != 0) {
      bVar1 = (&DAT_18056e620)[param_2 & 0x1f] & (&DAT_18056fcb1)[(int)param_1];
      if ((param_2 & 0x20) == 0) {
        return bVar1 == 0;
      }
      return bVar1;
    }
    if (param_2 == 0x7a) {
      return param_1 == 0;
    }
    if (param_2 == 0x5a) {
      return param_1 != 0;
    }
  }
  return param_2 == param_1;
}



/* ===== 18048dbb0 FUN_18048dbb0 ===== */

bool FUN_18048dbb0(uint param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  byte bVar5;
  bool bVar6;
  
  bVar6 = *(char *)(param_2 + 1) != '^';
  lVar3 = param_2 + 1;
  if (bVar6) {
    lVar3 = param_2;
  }
  pbVar4 = (byte *)(lVar3 + 1);
  if (pbVar4 < param_3) {
    do {
      bVar2 = *pbVar4;
      pbVar1 = pbVar4 + 1;
      if (bVar2 == 0x25) {
        bVar2 = *pbVar1;
        if ((bVar2 & 0xc0) == 0x40) {
          if ((&DAT_18056e620)[bVar2 & 0x1f] == 0) {
            if (bVar2 == 0x7a) {
              bVar5 = param_1 == 0;
            }
            else {
              if (bVar2 != 0x5a) goto LAB_18048dc55;
              bVar5 = param_1 != 0;
            }
          }
          else {
            bVar5 = (&DAT_18056e620)[bVar2 & 0x1f] & (&DAT_18056fcb1)[(int)param_1];
            if ((bVar2 & 0x20) == 0) {
              bVar5 = bVar5 == 0;
              goto LAB_18048dc5a;
            }
          }
        }
        else {
LAB_18048dc55:
          bVar5 = bVar2 == param_1;
LAB_18048dc5a:
        }
        if (bVar5 != 0) {
          return bVar6;
        }
        pbVar4 = pbVar1;
      }
      else if ((*pbVar1 == 0x2d) && (pbVar1 = pbVar4 + 2, pbVar1 < param_3)) {
        pbVar4 = pbVar1;
        if (((int)(uint)bVar2 <= (int)param_1) && ((int)param_1 <= (int)(uint)*pbVar1)) {
          return bVar6;
        }
      }
      else if (bVar2 == param_1) {
        return bVar6;
      }
      pbVar4 = pbVar4 + 1;
    } while (pbVar4 < param_3);
  }
  return *(char *)(param_2 + 1) == '^';
}



/* ===== 18048dcb0 FUN_18048dcb0 ===== */

longlong FUN_18048dcb0(longlong param_1,ulonglong param_2,char *param_3,longlong param_4)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = *(ulonglong *)(param_1 + 8);
  lVar6 = 0;
  if (param_2 < uVar3) {
    cVar1 = *param_3;
    do {
      cVar2 = *(char *)(lVar6 + param_2);
      if (cVar1 == '%') {
        uVar4 = FUN_18048db40(cVar2,param_3[1]);
LAB_18048dd1e:
        if (uVar4 == 0) break;
      }
      else if (cVar1 != '.') {
        if (cVar1 == '[') {
          uVar4 = FUN_18048dbb0(cVar2,param_3,param_4 + -1);
        }
        else {
          uVar4 = (uint)(cVar1 == cVar2);
        }
        goto LAB_18048dd1e;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 + param_2 < uVar3);
    if (lVar6 < 0) {
      return 0;
    }
  }
  do {
    lVar5 = FUN_18048d670(param_1,lVar6 + param_2,param_4 + 1);
    if (lVar5 != 0) {
      return lVar5;
    }
    lVar6 = lVar6 + -1;
  } while (-1 < lVar6);
  return 0;
}



/* ===== 18048dd80 FUN_18048dd80 ===== */

int FUN_18048dd80(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar4 = (int)param_1[3];
  if ((iVar4 == 0) && (param_2 != 0)) {
    iVar4 = 1;
    FUN_18047e1c0(param_1[2],1,"too many captures");
  }
  else {
    FUN_18047e1c0(param_1[2],iVar4,"too many captures");
    if (iVar4 < 1) {
      return iVar4;
    }
  }
  plVar5 = param_1 + 2;
  iVar3 = 0;
  do {
    if (iVar3 < (int)param_1[3]) {
      lVar6 = param_1[(longlong)iVar3 * 2 + 5];
      if (lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_180484220(*plVar5,0x7b1);
      }
      lVar2 = param_1[(longlong)iVar3 * 2 + 4];
      lVar1 = *plVar5;
      if (lVar6 != -2) goto LAB_18048ddf3;
      FUN_18047f3d0(lVar1,(lVar2 - *param_1) + 1);
    }
    else {
      lVar1 = *plVar5;
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180484220(lVar1,0x789);
      }
      lVar2 = param_2;
      lVar6 = param_3 - param_2;
LAB_18048ddf3:
      FUN_18047f450(lVar1,lVar2,lVar6);
    }
    iVar3 = iVar3 + 1;
    if (iVar4 <= iVar3) {
      return iVar4;
    }
  } while( true );
}



/* ===== 18048de60 FUN_18048de60 ===== */

void FUN_18048de60(longlong *param_1,int param_2,longlong param_3,longlong param_4)

{
  if ((int)param_1[3] <= param_2) {
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180484220(param_1[2],0x789);
    }
    FUN_18047f450(param_1[2],param_3,param_4 - param_3);
    return;
  }
  if (param_1[(longlong)param_2 * 2 + 5] == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1[2],0x7b1);
  }
  if (param_1[(longlong)param_2 * 2 + 5] == -2) {
    FUN_18047f3d0(param_1[2],(param_1[((longlong)param_2 + 2) * 2] - *param_1) + 1);
    return;
  }
  FUN_18047f450(param_1[2]);
  return;
}



/* ===== 18048def0 FUN_18048def0 ===== */

void FUN_18048def0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0x1f < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(*(undefined8 *)(param_1 + 0x10),0x79f);
  }
  *(undefined8 *)(param_1 + ((longlong)iVar1 + 2) * 0x10) = param_2;
  *(longlong *)(param_1 + 0x28 + (longlong)iVar1 * 0x10) = (longlong)param_4;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  lVar2 = FUN_18048d670(param_1);
  if (lVar2 == 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  }
  return;
}



/* ===== 18048df50 FUN_18048df50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18048df50(longlong param_1,int param_2)

{
  char cVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_278 [32];
  longlong local_258;
  ulonglong local_250;
  longlong local_248;
  ulonglong local_240;
  longlong alStack_238 [64];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_278;
  lVar5 = FUN_1804a8d10(param_1,1);
  lVar6 = FUN_1804a8d10(param_1,2);
  iVar3 = FUN_1804a8e80(param_1,3,1);
  uVar8 = *(uint *)(lVar5 + 0x14);
  if (-1 < iVar3) {
    uVar8 = 0xffffffff;
  }
  uVar9 = 0;
  if (-1 < (int)(uVar8 + iVar3)) {
    uVar9 = (ulonglong)(uVar8 + iVar3);
  }
  if (*(uint *)(lVar5 + 0x14) < (uint)uVar9) {
    uVar9 = 1;
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8) = 0xffffffffffffffff;
  }
  else {
    iVar3 = (int)lVar5;
    if ((param_2 == 0) ||
       (((puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18),
         *(undefined8 **)(param_1 + 0x28) <= puVar7 ||
         (0xfffffffd < (uint)((longlong)*puVar7 >> 0x2f))) &&
        (iVar4 = FUN_180491c70(lVar6), iVar4 != 0)))) {
      cVar1 = *(char *)(lVar6 + 0x18);
      uVar9 = uVar9 + 0x18 + lVar5;
      local_240 = 0;
      local_250 = (ulonglong)*(uint *)(lVar5 + 0x14) + 0x18 + lVar5;
      lVar6 = lVar6 + (ulonglong)(cVar1 == '^') + 0x18;
      local_258 = lVar5 + 0x18;
      local_248 = param_1;
      lVar5 = FUN_18048d670(&local_258,uVar9,lVar6);
      while (lVar5 == 0) {
        if ((local_250 <= uVar9) || (cVar1 == '^')) goto LAB_18048e198;
        uVar9 = uVar9 + 1;
        local_240 = 0;
        lVar5 = FUN_18048d670(&local_258,uVar9,lVar6);
      }
      if (param_2 == 0) {
        uVar9 = FUN_18048dd80(&local_258,uVar9);
      }
      else {
        pdVar2 = *(double **)(param_1 + 0x28);
        *(double **)(param_1 + 0x28) = pdVar2 + 1;
        *pdVar2 = (double)(((int)uVar9 - iVar3) + -0x17);
        pdVar2 = *(double **)(param_1 + 0x28);
        *(double **)(param_1 + 0x28) = pdVar2 + 1;
        *pdVar2 = (double)(((int)lVar5 - iVar3) + -0x18);
        iVar3 = (int)local_240;
        FUN_18047e1c0(local_248,local_240 & 0xffffffff,"too many captures");
        uVar8 = 0;
        if (0 < iVar3) {
          do {
            if ((int)uVar8 < (int)local_240) {
              lVar5 = alStack_238[(ulonglong)uVar8 * 2 + 1];
              if (lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
                FUN_180484220(local_248,0x7b1);
              }
              lVar6 = alStack_238[(ulonglong)uVar8 * 2];
              if (lVar5 != -2) goto LAB_18048e188;
              FUN_18047f3d0(local_248,(lVar6 - local_258) + 1);
            }
            else {
              if (uVar8 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_180484220(local_248,0x789);
              }
              lVar5 = 0;
              lVar6 = 0;
LAB_18048e188:
              FUN_18047f450(local_248,lVar6,lVar5);
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < iVar3);
        }
        uVar9 = (ulonglong)(iVar3 + 2);
      }
    }
    else {
      lVar5 = FUN_180491b90(uVar9 + 0x18 + lVar5,lVar6 + 0x18,*(int *)(lVar5 + 0x14) - (uint)uVar9,
                            *(undefined4 *)(lVar6 + 0x14));
      if (lVar5 == 0) {
LAB_18048e198:
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8) = 0xffffffffffffffff;
        uVar9 = 1;
      }
      else {
        iVar3 = (int)lVar5 - iVar3;
        uVar9 = 2;
        *(double *)(*(longlong *)(param_1 + 0x28) + -0x10) = (double)(iVar3 + -0x17);
        *(double *)(*(longlong *)(param_1 + 0x28) + -8) =
             (double)(iVar3 + -0x18 + *(int *)(lVar6 + 0x14));
      }
    }
  }
  return uVar9;
}



/* ===== 18048e230 FUN_18048e230 ===== */

undefined8 FUN_18048e230(void)

{
  undefined8 in_R9;
  
  FUN_1804a9f00(in_R9);
  return 0;
}



/* ===== 18048e250 FUN_18048e250 ===== */

undefined8 FUN_18048e250(undefined8 param_1)

{
  FUN_1804a8bb0(param_1,1);
  return 0;
}



/* ===== 18048e270 FUN_18048e270 ===== */

undefined8 FUN_18048e270(longlong param_1)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_1804a8bb0(param_1,1);
  if (*(longlong *)(param_1 + 0x20) + 8U < *(ulonglong *)(param_1 + 0x28)) {
    FUN_1804a8bb0(param_1,2);
    dVar1 = (double)FUN_18051c650();
    dVar1 = DAT_1808ac500 / dVar1;
    dVar2 = (double)FUN_18051c650(uVar3);
    *(double *)(*(longlong *)(param_1 + 0x20) + -0x10) = dVar1 * dVar2;
    return 2;
  }
  return 0;
}



/* ===== 18048e300 FUN_18048e300 ===== */

undefined8 FUN_18048e300(undefined8 param_1)

{
  FUN_1804a8bb0(param_1,1);
  FUN_1804a8bb0(param_1,2);
  return 0;
}



/* ===== 18048e330 FUN_18048e330 ===== */

undefined8 FUN_18048e330(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_1804a8bb0(param_1,iVar1);
  } while ((ulonglong)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) <
           *(ulonglong *)(param_1 + 0x28));
  return 0;
}



/* ===== 18048e370 FUN_18048e370 ===== */

undefined8 FUN_18048e370(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  dVar3 = (double)FUN_1804b68a0((*(ulonglong *)
                                  ((*(ulonglong *)(lVar1 + -0x10) & 0x7fffffffffff) + 0x30) &
                                0x7fffffffffff) + 0x30);
  dVar3 = dVar3 - DAT_1808ac500;
  iVar4 = (int)(lVar2 - lVar1 >> 3);
  if (0 < iVar4) {
    dVar5 = (double)FUN_1804a8bb0(param_1,1);
    if (iVar4 == 1) {
      dVar3 = (double)FUN_18000515f(dVar5 * dVar3);
      dVar3 = dVar3 + DAT_1808ac500;
    }
    else {
      dVar6 = (double)FUN_1804a8bb0(param_1,2);
      dVar3 = (double)FUN_18000515f(((dVar6 - dVar5) + DAT_1808ac500) * dVar3);
      dVar3 = dVar3 + dVar5;
    }
  }
  **(double **)(param_1 + 0x28) = dVar3;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  return 1;
}



/* ===== 18048e450 FUN_18048e450 ===== */

undefined8 FUN_18048e450(longlong param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar4 = *(ulonglong *)
           ((*(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) + 0x30) &
          0x7fffffffffff;
  pdVar1 = (double *)(uVar4 + 0x30);
  if (*(longlong *)(param_1 + 0x20) == *(longlong *)(param_1 + 0x28)) {
    iVar3 = FUN_1804b66f0(pdVar1);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180484220(param_1,0x5a5);
    }
  }
  else {
    dVar5 = (double)FUN_1804a8bb0(param_1,1);
    dVar2 = DAT_1808ac588;
    dVar7 = DAT_18056e858;
    dVar6 = dVar5 * DAT_1808ac588 + DAT_18056e858;
    dVar5 = dVar6;
    if ((ulonglong)dVar6 < 2) {
      dVar5 = (double)((longlong)dVar6 + 2);
    }
    dVar6 = dVar6 * DAT_1808ac588;
    *pdVar1 = dVar5;
    dVar6 = dVar6 + dVar7;
    dVar5 = dVar6;
    if ((ulonglong)dVar6 < 0x40) {
      dVar5 = (double)((longlong)dVar6 + 0x40);
    }
    *(double *)(uVar4 + 0x38) = dVar5;
    dVar6 = dVar6 * dVar2 + dVar7;
    dVar5 = dVar6;
    if ((ulonglong)dVar6 < 0x200) {
      dVar5 = (double)((longlong)dVar6 + 0x200);
    }
    *(double *)(uVar4 + 0x40) = dVar5;
    dVar7 = dVar6 * dVar2 + dVar7;
    if ((ulonglong)dVar7 < 0x20000) {
      dVar7 = (double)((longlong)dVar7 + 0x20000);
    }
    *(double *)(uVar4 + 0x48) = dVar7;
    iVar3 = 10;
    do {
      FUN_1804b67c0(pdVar1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}



/* ===== 18048e580 FUN_18048e580 ===== */

undefined8 FUN_18048e580(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18047efb0(param_1,0x20);
  *puVar1 = 0xa0d277570a345b8c;
  puVar1[1] = 0x764a296c5d4aa64f;
  puVar1[2] = 0x51220704070adeaa;
  puVar1[3] = 0x2a2717b5a7b7b927;
  FUN_1804a90d0(param_1,&DAT_1806e1904,&DAT_18056e770,&PTR_FUN_18056e730);
  return 1;
}



/* ===== 18048e600 FUN_18048e600 ===== */

void FUN_18048e600(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  FUN_1804939e0(param_1,*(undefined8 *)(param_1 + 0x38));
  FUN_180490d30(puVar3);
  FUN_180495b50(puVar3);
  FUN_1804ab1f0(puVar3);
  puVar3[2] = puVar3[2] + (ulonglong)(*(int *)(puVar3 + 0x14) + 1) * -8;
  (*(code *)*puVar3)(puVar3[1],puVar3[0x13],(ulonglong)(*(int *)(puVar3 + 0x14) + 1) * 8,0);
  puVar3[2] = puVar3[2] - (ulonglong)(uint)(*(int *)(puVar3 + 0x1a) - *(int *)(puVar3 + 0x1b));
  (*(code *)*puVar3)(puVar3[1],puVar3[0x1b],
                     (ulonglong)(uint)(*(int *)(puVar3 + 0x1a) - *(int *)(puVar3 + 0x1b)),0);
  uVar2 = *(uint *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar3[2] = puVar3[2] + (ulonglong)uVar2 * -8;
  (*(code *)*puVar3)(puVar3[1],uVar4,(ulonglong)uVar2 * 8,0);
  if (puVar3[0xe] != 0) {
    bVar1 = *(byte *)((longlong)puVar3 + 0x23);
    if (bVar1 == 0) {
      uVar6 = 2;
    }
    else {
      iVar5 = 0x1f;
      if (bVar1 != 0) {
        for (; bVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar6 = (ulonglong)(uint)(2 << ((byte)iVar5 & 0x1f));
    }
    puVar3[2] = puVar3[2] + uVar6 * -4;
    (*(code *)*puVar3)(puVar3[1],puVar3[0xe],uVar6 * 4,0);
  }
  if ((code *)*puVar3 == FUN_1804b73a0) {
    FUN_1804b72e0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018048e704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(puVar3[1],puVar3 + -0xc,0x18f0,0);
  return;
}



/* ===== 18048e710 FUN_18048e710 ===== */

undefined8 FUN_18048e710(undefined8 param_1)

{
  FUN_180490a20();
  FUN_180490c00(param_1);
  return 0;
}



/* ===== 18048e730 FUN_18048e730 ===== */

undefined8 FUN_18048e730(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_18048e920(param_1,*param_3);
  return 0;
}



/* ===== 18048e750 FUN_18048e750 ===== */

undefined8 FUN_18048e750(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_18048ef70(param_1,param_1);
  uVar2 = FUN_180492ab0(param_1,0,6);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar3 = FUN_180492ab0(param_1,0,2);
  *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x110) = uVar3 | 0xfffa000000000000;
  FUN_180491cf0(param_1);
  FUN_180494c60(param_1);
  FUN_18049b100(param_1);
  lVar4 = FUN_1804848e0(param_1,0);
  *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) | 0x20;
  lVar4 = FUN_1804848e0(param_1,0x12);
  *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) | 0x20;
  *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x10) << 2;
  FUN_1804ab720(param_1);
  FUN_180495ca0(lVar1);
  lVar4 = FUN_1804916f0(param_1,0x60);
  *(undefined2 *)(lVar4 + 9) = 0x106;
  *(undefined1 *)(lVar4 + 0xb) = 0;
  *(undefined4 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(param_1 + 0x48);
  FUN_18048ef70(lVar4,param_1);
  *(longlong *)(lVar1 + 0x118) = lVar4;
  return 0;
}



/* ===== 18048e860 FUN_18048e860 ===== */

void FUN_18048e860(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_180003349(param_1,0,local_res10,FUN_18048e730);
  return;
}



/* ===== 18048e880 FUN_18048e880 ===== */

void FUN_18048e880(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == param_1[0x2f]) {
    param_1[0x2f] = 0;
  }
  lVar2 = param_1[0x31];
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x10) == param_2)) {
    *(undefined8 *)(lVar2 + 0x10) = param_1[0x18];
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1804939e0(param_2,*(undefined8 *)(param_2 + 0x38));
    *(uint *)((longlong)param_1 + 0x3d4) = *(uint *)((longlong)param_1 + 0x3d4) & 0xffffffef;
  }
  uVar1 = *(uint *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  param_1[2] = param_1[2] + (ulonglong)uVar1 * -8;
  (*(code *)*param_1)(param_1[1],uVar3,(ulonglong)uVar1 * 8,0);
  param_1[2] = param_1[2] + -0x60;
                    /* WARNING: Could not recover jumptable at 0x00018048e919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_1[1],param_2,0x60,0);
  return;
}



/* ===== 18048e920 FUN_18048e920 ===== */

void FUN_18048e920(ulonglong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar1 = *(int *)(param_1 + 0x58) + param_2;
  if (uVar1 < 0xffdc) {
    uVar6 = *(int *)(param_1 + 0x58) * 2;
    if (uVar6 <= uVar1) {
      FUN_18048ee90(param_1,uVar1);
      return;
    }
    if (0xffdc < uVar6) {
      uVar6 = 0xffdc;
    }
    FUN_18048ee90(param_1,uVar6);
    return;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x180);
  if (lVar2 != 0) {
    *(longlong *)(param_1 + 0x20) = lVar2;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  uVar5 = *(ulonglong *)(lVar2 + -0x10) & 0x7fffffffffff;
  if ((*(char *)(uVar5 + 10) == '\0') &&
     (uVar5 = lVar2 + (ulonglong)*(byte *)(*(longlong *)(uVar5 + 0x20) + -0x5d) * 8,
     *(ulonglong *)(param_1 + 0x28) = uVar5, *(ulonglong *)(param_1 + 0x30) < uVar5)) {
    *(longlong *)(param_1 + 0x28) = lVar2;
    *(ulonglong *)(lVar2 + -0x10) = param_1 | 0xfffc800000000000;
  }
  if (0xffe5 < *(uint *)(param_1 + 0x58)) {
    uVar5 = FUN_1804848e0(param_1,0x68);
    puVar3 = *(ulonglong **)(param_1 + 0x28);
    *(ulonglong **)(param_1 + 0x28) = puVar3 + 1;
    *puVar3 = uVar5 | 0xfffd800000000000;
                    /* WARNING: Subroutine does not return */
    FUN_180484920(param_1,5);
  }
  FUN_18048ee90(param_1,0x10005);
  FUN_1804848a0(param_1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



/* ===== 18048ea20 FUN_18048ea20 ===== */

void FUN_18048ea20(undefined8 param_1)

{
  FUN_18048e920(param_1,1);
  return;
}



/* ===== 18048ea30 FUN_18048ea30 ===== */

longlong FUN_18048ea30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1804916f0(param_1,0x60);
  *(undefined2 *)(lVar1 + 9) = 0x106;
  *(undefined1 *)(lVar1 + 0xb) = 0;
  *(undefined4 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(param_1 + 0x48);
  FUN_18048ef70(lVar1,param_1);
  return lVar1;
}



/* ===== 18048ea90 FUN_18048ea90 ===== */

void FUN_18048ea90(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x58) < 0xffe6) ||
     (0x7fd8f < *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x38))) {
    return;
  }
  FUN_18048ee90(param_1,0xffdc);
  return;
}



/* ===== 18048eac0 FUN_18048eac0 ===== */

void FUN_18048eac0(longlong param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((((uVar1 < 0xffe6) && ((uint)(param_2 * 4) < uVar1)) && (0x60 < uVar1)) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x180) == 0 ||
      (param_1 != *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x178))))) {
    FUN_18048ee90(param_1,uVar1 >> 1);
    return;
  }
  return;
}



/* ===== 18048eb00 FUN_18048eb00 ===== */

void FUN_18048eb00(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(lVar3 + 0xc0);
  FUN_1804a9a80(lVar4);
  *(undefined8 *)(lVar3 + 0x178) = 0;
  FUN_1804939e0(lVar4,*(undefined8 *)(lVar4 + 0x38));
  FUN_180491130(lVar3,1);
  *(uint *)(lVar3 + 0x390) = *(uint *)(lVar3 + 0x390) & 0xfffffffe;
  *(undefined4 *)(lVar3 + 0x3d4) = 0;
  FUN_1804a7c70(lVar3,0);
  iVar10 = 0;
  do {
    do {
      *(byte *)(lVar3 + 0x91) = *(byte *)(lVar3 + 0x91) | 0x10;
      lVar8 = *(longlong *)(lVar4 + 0x38) + 0x10;
      *(undefined1 *)(lVar4 + 0xb) = 0;
      *(longlong *)(lVar4 + 0x28) = lVar8;
      *(longlong *)(lVar4 + 0x20) = lVar8;
      *(undefined8 *)(lVar4 + 0x50) = 0;
      iVar7 = FUN_180003349(lVar4,0,0,FUN_18048e710);
    } while (iVar7 != 0);
    iVar10 = iVar10 + 1;
    if (9 < iVar10) break;
    FUN_180491130(lVar3);
  } while (*(longlong *)(lVar3 + 0x50) != 0);
  puVar5 = *(undefined8 **)(lVar4 + 0x10);
  FUN_1804939e0(lVar4,*(undefined8 *)(lVar4 + 0x38));
  FUN_180490d30(puVar5);
  FUN_180495b50(puVar5);
  FUN_1804ab1f0(puVar5);
  puVar5[2] = puVar5[2] + (ulonglong)(*(int *)(puVar5 + 0x14) + 1) * -8;
  (*(code *)*puVar5)(puVar5[1],puVar5[0x13],(ulonglong)(*(int *)(puVar5 + 0x14) + 1) * 8,0);
  puVar5[2] = puVar5[2] - (ulonglong)(uint)(*(int *)(puVar5 + 0x1a) - *(int *)(puVar5 + 0x1b));
  (*(code *)*puVar5)(puVar5[1],puVar5[0x1b],
                     (ulonglong)(uint)(*(int *)(puVar5 + 0x1a) - *(int *)(puVar5 + 0x1b)),0);
  uVar2 = *(uint *)(lVar4 + 0x58);
  uVar6 = *(undefined8 *)(lVar4 + 0x38);
  puVar5[2] = puVar5[2] + (ulonglong)uVar2 * -8;
  (*(code *)*puVar5)(puVar5[1],uVar6,(ulonglong)uVar2 * 8,0);
  if (puVar5[0xe] != 0) {
    bVar1 = *(byte *)((longlong)puVar5 + 0x23);
    if (bVar1 == 0) {
      uVar9 = 2;
    }
    else {
      iVar10 = 0x1f;
      if (bVar1 != 0) {
        for (; bVar1 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      uVar9 = (ulonglong)(uint)(2 << ((byte)iVar10 & 0x1f));
    }
    puVar5[2] = puVar5[2] + uVar9 * -4;
    (*(code *)*puVar5)(puVar5[1],puVar5[0xe],uVar9 * 4,0);
  }
  if ((code *)*puVar5 == FUN_1804b73a0) {
    FUN_1804b72e0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018048eca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(puVar5[1],puVar5 + -0xc,0x18f0,0);
  return;
}



/* ===== 18048ecb0 FUN_18048ecb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18048ecb0(code *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  iVar1 = FUN_1804b66f0(&local_48);
  if (iVar1 != 0) {
    if (param_1 == (code *)0x4d50) {
      param_2 = FUN_1804b6f50(&local_48);
      if (param_2 == 0) {
        return 0;
      }
      param_1 = FUN_1804b73a0;
    }
    uVar2 = (*param_1)(param_2,0,0,0x18f0);
    if (uVar2 != 0) {
      if (uVar2 < 0x800000000000) {
        FUN_180540170(uVar2,0,0x18f0);
        *(undefined2 *)(uVar2 + 8) = 0x661;
        *(undefined8 **)(uVar2 + 0x10) = (undefined8 *)(uVar2 + 0x60);
        *(undefined1 *)(uVar2 + 10) = 1;
        *(undefined1 *)(uVar2 + 0x80) = 0x21;
        *(undefined2 *)(uVar2 + 0xe0) = 0x401;
        *(undefined8 *)(uVar2 + 0x60) = param_1;
        *(longlong *)(uVar2 + 0x68) = param_2;
        *(undefined4 *)(uVar2 + 0x1f0) = local_48;
        *(undefined4 *)(uVar2 + 500) = uStack_44;
        *(undefined4 *)(uVar2 + 0x1f8) = uStack_40;
        *(undefined4 *)(uVar2 + 0x1fc) = uStack_3c;
        *(undefined4 *)(uVar2 + 0x200) = local_38;
        *(undefined4 *)(uVar2 + 0x204) = uStack_34;
        *(undefined4 *)(uVar2 + 0x208) = uStack_30;
        *(undefined4 *)(uVar2 + 0x20c) = uStack_2c;
        if (param_1 == FUN_1804b73a0) {
          FUN_1804b7e50(param_2);
        }
        *(ulonglong *)(uVar2 + 0x120) = uVar2;
        *(ulonglong *)(uVar2 + 400) = uVar2 + 0x180;
        *(ulonglong *)(uVar2 + 0x198) = uVar2 + 0x180;
        *(undefined4 *)(uVar2 + 0x100) = 0xffffffff;
        *(undefined8 *)(*(longlong *)(uVar2 + 0x10) + 0x110) = 0xffffffffffffffff;
        *(undefined8 *)(uVar2 + 0x140) = 0;
        *(undefined8 *)(uVar2 + 0x138) = 0;
        *(undefined8 *)(uVar2 + 0x130) = 0;
        *(undefined8 *)(uVar2 + 0x128) = 0;
        *(undefined1 *)(uVar2 + 0x81) = 0;
        *(ulonglong *)(uVar2 + 0x88) = uVar2;
        *(ulonglong **)(uVar2 + 0x90) = (ulonglong *)(uVar2 + 0x88);
        *(undefined8 *)(uVar2 + 0x158) = 0xffffffffffffffff;
        *(undefined8 *)(uVar2 + 0x160) = 0xffffffffffffffff;
        *(undefined8 *)(uVar2 + 0x70) = 0x18f0;
        *(undefined4 *)(uVar2 + 0xcc) = 200;
        *(undefined4 *)(uVar2 + 200) = 200;
        FUN_1804a6f80(uVar2);
        *(undefined1 *)(uVar2 + 0xb) = 6;
        iVar1 = FUN_180003349(uVar2,0,0,FUN_18048e750);
        if (iVar1 == 0) {
          *(undefined1 *)(uVar2 + 0xb) = 0;
          return uVar2;
        }
        FUN_18048e600(uVar2);
      }
      else {
        (*param_1)(param_2,uVar2,0x18f0,0);
      }
    }
  }
  return 0;
}



/* ===== 18048ee90 FUN_18048ee90 ===== */

void FUN_18048ee90(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar5 = (ulonglong)uVar1;
  lVar2 = *(longlong *)(param_1 + 0x38);
  uVar7 = param_2 + 9;
  lVar4 = FUN_180491760(param_1,lVar2,uVar1 * 8,param_2 * 8 + 0x48);
  *(longlong *)(param_1 + 0x38) = lVar4;
  lVar6 = lVar4 - lVar2;
  *(ulonglong *)(param_1 + 0x30) = lVar4 + (ulonglong)param_2 * 8;
  if (uVar1 < uVar7) {
    FUN_180540170(lVar4 + uVar5 * 8,0xffffffffffffffff,(ulonglong)(uVar7 - uVar1) << 3);
    uVar5 = (ulonglong)uVar7;
  }
  *(uint *)(param_1 + 0x58) = uVar7;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x180);
  if ((ulonglong)(lVar4 - lVar2) < uVar5 << 3) {
    *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x180) = lVar4 + lVar6;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + lVar6;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + lVar6;
  for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
    puVar3[4] = puVar3[4] + lVar6;
  }
  return;
}



/* ===== 18048ef70 FUN_18048ef70 ===== */

void FUN_18048ef70(ulonglong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  puVar2 = (ulonglong *)FUN_180491760(param_2,0,0,0x180);
  *(ulonglong **)(param_1 + 0x38) = puVar2;
  *(undefined4 *)(param_1 + 0x58) = 0x30;
  puVar1 = puVar2 + 2;
  *(ulonglong **)(param_1 + 0x30) = puVar2 + 0x27;
  puVar2[1] = 0xffffffffffffffff;
  *puVar2 = param_1 | 0xfffc800000000000;
  *(ulonglong **)(param_1 + 0x28) = puVar1;
  *(ulonglong **)(param_1 + 0x20) = puVar1;
  lVar4 = 0x2e;
  if (puVar2 + 0x30 < puVar1) {
    lVar4 = 0;
  }
  if (lVar4 == 0) {
    return;
  }
  uVar3 = 0x170;
  if (puVar2 + 0x30 < puVar1) {
    uVar3 = 0;
  }
  FUN_180540170(puVar1,0xffffffffffffffff,uVar3 / 8 << 3);
  return;
}



/* ===== 18048f020 FUN_18048f020 ===== */

undefined8 FUN_18048f020(longlong param_1)

{
  int iVar1;
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  iVar1 = FUN_1804b3660(param_1,1,local_res8);
  *(double *)(*(longlong *)(param_1 + 0x20) + -0x10) = (double)iVar1;
  return 2;
}



/* ===== 18048f060 FUN_18048f060 ===== */

undefined8 FUN_18048f060(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_res10 [2];
  
  local_res10[0] = 0;
  uVar2 = FUN_1804b3660(param_1,1,local_res10);
  iVar1 = local_res10[0];
  if (local_res10[0] == 0) {
    return 0;
  }
  uVar3 = FUN_1804916f0(param_1,0x18);
  *(undefined1 *)(uVar3 + 9) = 10;
  *(short *)(uVar3 + 10) = (short)iVar1;
  *(ulonglong *)(uVar3 + 0x10) = ~uVar2;
  *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) = uVar3 | 0xfffa800000000000;
  return 2;
}



/* ===== 18048f0f0 FUN_18048f0f0 ===== */

undefined8 FUN_18048f0f0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_res10 [2];
  
  local_res10[0] = 0;
  uVar2 = FUN_1804b3660(param_1,1,local_res10);
  iVar1 = local_res10[0];
  if (local_res10[0] == 0) {
    return 0;
  }
  uVar3 = FUN_1804916f0(param_1,0x18);
  *(undefined1 *)(uVar3 + 9) = 10;
  *(short *)(uVar3 + 10) = (short)iVar1;
  *(ulonglong *)(uVar3 + 0x10) =
       uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
       (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
       (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) = uVar3 | 0xfffa800000000000;
  return 2;
}



/* ===== 18048f180 FUN_18048f180 ===== */

undefined8 FUN_18048f180(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_res10 [2];
  undefined4 local_res18 [2];
  
  local_res10[0] = 0;
  local_res18[0] = 0;
  uVar2 = FUN_1804b3660(param_1,1,local_res10);
  iVar1 = FUN_1804b3660(param_1,2,local_res18);
  if (local_res10[0] == 0) {
    *(double *)(*(longlong *)(param_1 + 0x20) + 8) = (double)iVar1;
    return 0;
  }
  uVar2 = FUN_1804b3eb0(uVar2,iVar1,
                        *(byte *)((*(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) &
                                  0x7fffffffffff) + 10) - 0x44);
  iVar1 = local_res10[0];
  uVar3 = FUN_1804916f0(param_1,0x18);
  *(undefined8 *)(uVar3 + 0x10) = uVar2;
  *(undefined1 *)(uVar3 + 9) = 10;
  *(short *)(uVar3 + 10) = (short)iVar1;
  *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) = uVar3 | 0xfffa800000000000;
  return 2;
}



/* ===== 18048f260 FUN_18048f260 ===== */

undefined8 FUN_18048f260(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint local_res8 [2];
  ulonglong local_res10;
  
  uVar6 = *(ulonglong *)(param_1 + 0x20);
  uVar3 = *(ulonglong *)(param_1 + 0x28);
  iVar7 = 0;
  local_res8[0] = 0;
  do {
    iVar7 = iVar7 + 1;
    FUN_1804b3660(param_1,iVar7,local_res8);
    uVar6 = uVar6 + 8;
  } while (uVar6 < uVar3);
  if (local_res8[0] == 0) {
    return 0;
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar4[2] = param_1;
  uVar6 = *(ulonglong *)(param_1 + 0x20);
  lVar1 = *plVar4 + (ulonglong)local_res8[0] * 0x18;
  bVar2 = *(byte *)((*(ulonglong *)(uVar6 - 0x10) & 0x7fffffffffff) + 10);
  uVar9 = -(ulonglong)(bVar2 < 0x4a);
  uVar8 = 0;
  if (bVar2 == 0x4a) {
    do {
      FUN_1804b23e0(plVar4,lVar1,&local_res10,uVar6,0);
      uVar9 = uVar8 | local_res10;
      uVar6 = uVar6 + 8;
      uVar8 = uVar9;
    } while (uVar6 < uVar3);
  }
  else {
    do {
      FUN_1804b23e0(plVar4,lVar1,&local_res10,uVar6,0);
      if (bVar2 < 0x4a) {
        uVar9 = uVar9 & local_res10;
      }
      else {
        uVar9 = uVar9 ^ local_res10;
      }
      uVar6 = uVar6 + 8;
    } while (uVar6 < uVar3);
  }
  uVar5 = local_res8[0];
  uVar6 = FUN_1804916f0(param_1,0x18);
  *(undefined1 *)(uVar6 + 9) = 10;
  *(short *)(uVar6 + 10) = (short)uVar5;
  *(ulonglong *)(uVar6 + 0x10) = uVar9;
  *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) = uVar6 | 0xfffa800000000000;
  return 2;
}



/* ===== 18048f3d0 FUN_18048f3d0 ===== */

undefined8 FUN_18048f3d0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  local_res10[0] = 0;
  uVar3 = FUN_1804b3660(param_1,1,local_res8);
  if (*(longlong *)(param_1 + 0x20) + 8U < *(ulonglong *)(param_1 + 0x28)) {
    uVar2 = FUN_1804b3660(param_1,2,local_res10);
  }
  else {
    uVar2 = 8;
    if (local_res8[0] != 0) {
      uVar2 = 0x10;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar6 = (int)uVar2 >> 0x1f & 0x2000;
  *(longlong *)(lVar1 + 0xe0) = param_1;
  uVar5 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar5 = uVar2;
  }
  *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(lVar1 + 0xd8);
  if (uVar5 < 0xff) {
    uVar6 = uVar6 | uVar5 * 0x1000000 + 0x1000000 | 0x14;
    if ((int)uVar5 < 0x10) {
      uVar3 = uVar3 & (1L << ((char)uVar5 * '\x04' & 0x3fU)) - 1U;
    }
  }
  else {
    uVar6 = uVar6 | 0xff000014;
  }
  piVar4 = (int *)FUN_180498fa0((undefined8 *)(lVar1 + 200),uVar6,uVar3);
  uVar3 = FUN_180491d30(param_1,*(undefined8 *)(piVar4 + 4),*piVar4 - piVar4[4]);
  *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar3 | 0xfffd800000000000;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 18048f500 FUN_18048f500 ===== */

undefined8 FUN_18048f500(undefined8 param_1)

{
  FUN_1804a90d0(param_1,&DAT_1806e190c,&DAT_18056e890,&PTR_FUN_18056e860);
  return 1;
}



/* ===== 18048f530 FUN_18048f530 ===== */

bool FUN_18048f530(double *param_1,double *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)((longlong)*param_2 >> 0x2f);
  uVar1 = (uint)((longlong)*param_1 >> 0x2f);
  if (uVar1 == uVar2) {
    if (0xfffffffc < uVar1) {
      return true;
    }
    if (0xfffffff1 < uVar1) {
      return *param_1 == *param_2;
    }
  }
  else {
    if (0xfffffff2 < uVar1) {
      return false;
    }
    if (0xfffffff2 < uVar2) {
      return false;
    }
  }
  if (*param_1 == *param_2) {
    return true;
  }
  return false;
}



/* ===== 18048f580 FUN_18048f580 ===== */

ulonglong FUN_18048f580(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *param_2;
  iVar2 = (int)((longlong)uVar1 >> 0x2f);
  if (iVar2 == -0xd) {
    return (uVar1 & 0x7fffffffffff) + 0x30;
  }
  if (iVar2 == -4) {
    uVar3 = uVar1 >> 0x27 & 0xff;
    if (uVar3 == 0xff) {
      return 0;
    }
    return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x70) + uVar3 * 4) << 0x20 |
           uVar1 & 0x7fffffffff;
  }
  if (iVar2 == -0xb) {
    return (uVar1 & 0x7fffffffffff) + 0x10;
  }
  uVar3 = 0;
  if (0xfffffff6 < iVar2 + 4U) {
    uVar3 = uVar1 & 0x7fffffffffff;
  }
  return uVar3;
}



/* ===== 18048f620 FUN_18048f620 ===== */

void FUN_18048f620(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  
  lVar8 = *(longlong *)(param_1 + 0x138);
  lVar11 = param_1 + 0x120;
  if (lVar8 != lVar11) {
    do {
      if ((((*(byte *)(lVar8 + 8) & 7) == 0) &&
          (0xfffffff6 < (int)((longlong)**(ulonglong **)(lVar8 + 0x20) >> 0x2f) + 4U)) &&
         ((*(byte *)((**(ulonglong **)(lVar8 + 0x20) & 0x7fffffffffff) + 8) & 3) != 0)) {
        FUN_18048fb70(param_1);
      }
      lVar8 = *(longlong *)(lVar8 + 0x18);
    } while (lVar8 != lVar11);
  }
  FUN_180490090(param_1);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((*(byte *)(param_2 + 8) & 3) != 0) {
    FUN_18048fb70(param_1,param_2);
  }
  if (((*(longlong *)(param_1 + 0x188) != 0) &&
      (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x10), lVar11 != 0)) &&
     ((*(byte *)(lVar11 + 8) & 3) != 0)) {
    FUN_18048fb70(param_1);
  }
  FUN_1804907b0(param_1,param_1 + 0x2e8);
  FUN_18048fc90(param_1);
  FUN_180490090(param_1);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_180490090(param_1);
  lVar11 = 0;
  puVar7 = *(undefined8 **)(param_1 + 0xc0);
  for (puVar12 = (undefined8 *)**(undefined8 **)(param_1 + 0xc0); puVar12 != (undefined8 *)0x0;
      puVar12 = (undefined8 *)*puVar12) {
    if (((*(byte *)(puVar12 + 1) & 3) != 0) && ((*(byte *)(puVar12 + 1) & 8) == 0)) {
      lVar8 = puVar12[4];
      if ((lVar8 == 0) || ((*(byte *)(lVar8 + 10) & 4) != 0)) {
        *(byte *)(puVar12 + 1) = *(byte *)(puVar12 + 1) | 8;
      }
      else {
        lVar8 = FUN_1804942b0(lVar8,2,*(undefined8 *)(param_1 + 0x1c0));
        *(byte *)(puVar12 + 1) = *(byte *)(puVar12 + 1) | 8;
        if (lVar8 != 0) {
          lVar11 = lVar11 + (ulonglong)*(uint *)(puVar12 + 3) + 0x30;
          *puVar7 = *puVar12;
          puVar4 = *(undefined8 **)(param_1 + 0x50);
          if (puVar4 == (undefined8 *)0x0) {
            *puVar12 = puVar12;
            *(undefined8 **)(param_1 + 0x50) = puVar12;
            puVar12 = puVar7;
          }
          else {
            *puVar12 = *puVar4;
            *puVar4 = puVar12;
            *(undefined8 **)(param_1 + 0x50) = puVar12;
            puVar12 = puVar7;
          }
        }
      }
    }
    puVar7 = puVar12;
  }
  plVar14 = *(longlong **)(param_1 + 0x50);
  plVar16 = plVar14;
  if (plVar14 != (longlong *)0x0) {
    do {
      plVar14 = (longlong *)*plVar14;
      *(byte *)(plVar14 + 1) = *(byte *)(param_1 + 0x20) & 3 | *(byte *)(plVar14 + 1) & 0xf8;
      FUN_18048fb70(param_1,plVar14);
    } while (plVar14 != plVar16);
  }
  lVar9 = FUN_180490090(param_1);
  lVar8 = *(longlong *)(param_1 + 0x48);
  do {
    if (lVar8 == 0) {
      FUN_1804aa3a0(param_2,param_1 + 200);
      *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) ^ 3;
      *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_1 + 0x20);
      *(longlong *)(param_1 + 0x30) = param_1 + 0x28;
      *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x10) - (lVar11 + lVar9);
      return;
    }
    if ((*(byte *)(lVar8 + 8) & 0x10) != 0) {
      uVar3 = *(uint *)(lVar8 + 0x30);
      uVar15 = 0;
      if (uVar3 != 0) {
        do {
          uVar10 = *(ulonglong *)(*(longlong *)(lVar8 + 0x10) + uVar15 * 8);
          iVar6 = (int)((longlong)uVar10 >> 0x2f);
          if (0xfffffff6 < iVar6 + 4U) {
            uVar10 = uVar10 & 0x7fffffffffff;
            if (iVar6 == -5) {
              pbVar1 = (byte *)(uVar10 + 8);
              *pbVar1 = *pbVar1 & 0xfc;
            }
            else {
              bVar2 = *(byte *)(uVar10 + 8);
              if (((bVar2 & 3) != 0) || ((iVar6 == -0xd && ((bVar2 & 8) != 0)))) {
                *(undefined8 *)(*(longlong *)(lVar8 + 0x10) + uVar15 * 8) = 0xffffffffffffffff;
              }
            }
          }
          uVar13 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar13;
        } while (uVar13 < uVar3);
      }
    }
    uVar3 = *(uint *)(lVar8 + 0x34);
    if (uVar3 != 0) {
      lVar5 = *(longlong *)(lVar8 + 0x28);
      uVar15 = 0;
      do {
        if (*(longlong *)(lVar5 + uVar15 * 0x18) != -1) {
          uVar10 = *(ulonglong *)(lVar5 + 8 + uVar15 * 0x18);
          iVar6 = (int)((longlong)uVar10 >> 0x2f);
          if (iVar6 + 4U < 0xfffffff7) {
LAB_18048f893:
            uVar10 = *(ulonglong *)(lVar5 + uVar15 * 0x18);
            iVar6 = (int)((longlong)uVar10 >> 0x2f);
            if (0xfffffff6 < iVar6 + 4U) {
              uVar10 = uVar10 & 0x7fffffffffff;
              if (iVar6 == -5) {
                pbVar1 = (byte *)(uVar10 + 8);
                *pbVar1 = *pbVar1 & 0xfc;
              }
              else {
                bVar2 = *(byte *)(uVar10 + 8);
                if (((bVar2 & 3) != 0) || ((iVar6 == -0xd && ((bVar2 & 8) != 0))))
                goto LAB_18048f8c5;
              }
            }
          }
          else {
            uVar10 = uVar10 & 0x7fffffffffff;
            if (iVar6 == -5) {
              pbVar1 = (byte *)(uVar10 + 8);
              *pbVar1 = *pbVar1 & 0xfc;
              goto LAB_18048f893;
            }
            if ((*(byte *)(uVar10 + 8) & 3) == 0) goto LAB_18048f893;
LAB_18048f8c5:
            *(undefined8 *)(lVar5 + uVar15 * 0x18) = 0xffffffffffffffff;
          }
        }
        uVar13 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar13;
      } while (uVar13 <= uVar3);
    }
    lVar8 = *(longlong *)(lVar8 + 0x18);
  } while( true );
}



/* ===== 18048f920 FUN_18048f920 ===== */

void FUN_18048f920(longlong param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  bVar1 = *(byte *)(param_1 + 0x91);
  *(uint *)(param_1 + 0x3d4) = *(uint *)(param_1 + 0x3d4) & 0xffffffef;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x118);
  *(byte *)(param_1 + 0x91) = bVar1 & 0x2f | 0x50;
  if ((char)bVar1 < '\0') {
    FUN_1804a7c70(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x18) = 0x800000000000;
  puVar5 = *(undefined8 **)(lVar3 + 0x28);
  *puVar5 = *param_3;
  puVar5[1] = 0xffffffffffffffff;
  puVar5[2] = (ulonglong)~(uint)*(byte *)(param_4 + 9) << 0x2f | param_4;
  *(undefined8 **)(lVar3 + 0x28) = puVar5 + 3;
  iVar4 = FUN_18000329c(lVar3,puVar5 + 2,1,0xffffffffffffffff);
  *(undefined8 *)(param_1 + 0x178) = param_2;
  *(byte *)(param_1 + 0x91) = (bVar1 ^ *(byte *)(param_1 + 0x91)) & 0xf ^ bVar1;
  if ((char)bVar1 < '\0') {
    FUN_1804a7c70(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  if (iVar4 != 0) {
    puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x28) + -8);
    uVar2 = *puVar5;
    *(undefined8 **)(lVar3 + 0x28) = puVar5;
    if ((*(byte *)(param_1 + 0x93) & 0x10) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x118);
      lVar6 = FUN_1804b8c00(lVar3,0x96c9c444);
      if (lVar6 != 0) {
        puVar5 = *(undefined8 **)(lVar3 + 0x28);
        *(undefined8 **)(lVar3 + 0x28) = puVar5 + 1;
        *puVar5 = uVar2;
        FUN_1804b8af0(lVar3,lVar6);
      }
    }
  }
  return;
}



/* ===== 18048fa60 FUN_18048fa60 ===== */

void FUN_18048fa60(longlong param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar5 = *(ulonglong **)(lVar1 + 0x50);
  puVar2 = (ulonglong *)*puVar5;
  if (puVar2 == puVar5) {
    *(undefined8 *)(lVar1 + 0x50) = 0;
  }
  else {
    *puVar5 = *puVar2;
  }
  if (*(char *)((longlong)puVar2 + 9) == '\n') {
    *puVar2 = *(undefined8 *)(lVar1 + 0x28);
    *(ulonglong **)(lVar1 + 0x28) = puVar2;
    *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) & 0xe8 | *(byte *)(lVar1 + 0x20) & 3;
    local_res8 = (ulonglong)puVar2 | 0xfffa800000000000;
    puVar4 = (ulonglong *)FUN_1804931f0(param_1,*(undefined8 *)(lVar1 + 0x2e0),&local_res8);
    local_res8 = *puVar4;
    if (local_res8 == 0xffffffffffffffff) {
      return;
    }
    puVar5 = &local_res8;
    *puVar4 = 0xffffffffffffffff;
  }
  else {
    *puVar2 = **(undefined8 **)(lVar1 + 0xc0);
    **(ulonglong **)(lVar1 + 0xc0) = (ulonglong)puVar2;
    *(byte *)(puVar2 + 1) = *(byte *)(lVar1 + 0x20) & 3 | *(byte *)(puVar2 + 1) & 0xf8;
    lVar3 = puVar2[4];
    if (lVar3 == 0) {
      return;
    }
    if ((*(byte *)(lVar3 + 10) & 4) != 0) {
      return;
    }
    puVar5 = (ulonglong *)FUN_1804942b0(lVar3,2,*(undefined8 *)(lVar1 + 0x1c0));
    if (puVar5 == (ulonglong *)0x0) {
      return;
    }
  }
  FUN_18048f920(lVar1,param_1,puVar5,puVar2);
  return;
}



/* ===== 18048fb70 FUN_18048fb70 ===== */

void FUN_18048fb70(longlong param_1,longlong param_2)

{
  char cVar1;
  
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfc;
  cVar1 = *(char *)(param_2 + 9);
  while( true ) {
    if (cVar1 != '\f') {
      if (cVar1 == '\x05') {
        if ((0xfffffff6 < (int)((longlong)**(ulonglong **)(param_2 + 0x20) >> 0x2f) + 4U) &&
           ((*(byte *)((**(ulonglong **)(param_2 + 0x20) & 0x7fffffffffff) + 8) & 3) != 0)) {
          FUN_18048fb70(param_1);
        }
        if (*(char *)(param_2 + 10) != '\0') {
          *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
          return;
        }
      }
      else if ((cVar1 != '\x04') && (cVar1 != '\n')) {
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x38);
        *(longlong *)(param_1 + 0x38) = param_2;
      }
      return;
    }
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
    if ((*(longlong *)(param_2 + 0x20) != 0) &&
       ((*(byte *)(*(longlong *)(param_2 + 0x20) + 8) & 3) != 0)) {
      FUN_18048fb70(param_1);
    }
    if ((*(byte *)(*(longlong *)(param_2 + 0x10) + 8) & 3) != 0) {
      FUN_18048fb70(param_1);
    }
    if (*(char *)(param_2 + 10) != '\x03') {
      return;
    }
    if ((((*(byte *)(param_2 + 0x48) & 2) != 0) && (*(longlong *)(param_2 + 0x50) != 0)) &&
       ((*(byte *)(*(longlong *)(param_2 + 0x50) + 8) & 3) != 0)) {
      FUN_18048fb70(param_1);
    }
    if ((*(longlong *)(param_2 + 0x60) != 0) &&
       ((*(byte *)(*(longlong *)(param_2 + 0x60) + 8) & 3) != 0)) {
      FUN_18048fb70(param_1);
    }
    param_2 = *(longlong *)(param_2 + 0x68);
    if (param_2 == 0) break;
    if ((*(byte *)(param_2 + 8) & 3) == 0) {
      return;
    }
    cVar1 = *(char *)(param_2 + 9);
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfc;
  }
  return;
}



/* ===== 18048fc90 FUN_18048fc90 ===== */

void FUN_18048fc90(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = 0;
  uVar5 = 0x7fffffffffff;
  do {
    lVar3 = *(longlong *)(param_1 + 0x1b0 + lVar4 * 8);
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 8) & 3) != 0)) {
      cVar1 = *(char *)(lVar3 + 9);
      bVar2 = *(byte *)(lVar3 + 8) & 0xfc;
      *(byte *)(lVar3 + 8) = bVar2;
      if (cVar1 == '\f') {
        *(byte *)(lVar3 + 8) = bVar2 | 4;
        if ((*(longlong *)(lVar3 + 0x20) != 0) &&
           ((*(byte *)(*(longlong *)(lVar3 + 0x20) + 8) & 3) != 0)) {
          FUN_18048fb70(param_1);
        }
        if ((*(byte *)(*(longlong *)(lVar3 + 0x10) + 8) & 3) != 0) {
          FUN_18048fb70(param_1);
        }
        if (*(char *)(lVar3 + 10) == '\x03') {
          if ((((*(byte *)(lVar3 + 0x48) & 2) != 0) && (*(longlong *)(lVar3 + 0x50) != 0)) &&
             ((*(byte *)(*(longlong *)(lVar3 + 0x50) + 8) & 3) != 0)) {
            FUN_18048fb70(param_1);
          }
          if ((*(longlong *)(lVar3 + 0x60) != 0) &&
             ((*(byte *)(*(longlong *)(lVar3 + 0x60) + 8) & 3) != 0)) {
            FUN_18048fb70(param_1);
          }
          if ((*(longlong *)(lVar3 + 0x68) != 0) &&
             ((*(byte *)(*(longlong *)(lVar3 + 0x68) + 8) & 3) != 0)) {
            FUN_18048fb70(param_1);
          }
        }
      }
      else if (cVar1 == '\x05') {
        if ((0xfffffff6 < (int)((longlong)**(ulonglong **)(lVar3 + 0x20) >> 0x2f) + 4U) &&
           ((*(byte *)((**(ulonglong **)(lVar3 + 0x20) & uVar5) + 8) & 3) != 0)) {
          FUN_18048fb70(param_1);
        }
        if (*(char *)(lVar3 + 10) != '\0') {
          *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) | 4;
        }
      }
      else if ((cVar1 != '\x04') && (cVar1 != '\n')) {
        *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_1 + 0x38);
        *(longlong *)(param_1 + 0x38) = lVar3;
      }
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 < 0x27);
  return;
}



/* ===== 18048fdc0 FUN_18048fdc0 ===== */

undefined8 FUN_18048fdc0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  switch(*(undefined1 *)(lVar2 + 0x21)) {
  case 0:
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    if ((*(byte *)(*(longlong *)(lVar2 + 0xc0) + 8) & 3) != 0) {
      FUN_18048fb70(lVar2);
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(lVar2 + 0xc0) + 0x48) + 8) & 3) != 0) {
      FUN_18048fb70(lVar2);
    }
    if ((*(byte *)(*(longlong *)(lVar2 + 0x118) + 8) & 3) != 0) {
      FUN_18048fb70(lVar2);
    }
    if ((0xfffffff6 < (int)((longlong)*(ulonglong *)(lVar2 + 0x110) >> 0x2f) + 4U) &&
       ((*(byte *)((*(ulonglong *)(lVar2 + 0x110) & 0x7fffffffffff) + 8) & 3) != 0)) {
      FUN_18048fb70(lVar2);
    }
    FUN_18048fc90(lVar2);
    *(undefined1 *)(lVar2 + 0x21) = 1;
    return 0;
  case 1:
    if (*(longlong *)(lVar2 + 0x38) == 0) {
      *(undefined1 *)(lVar2 + 0x21) = 2;
      return 0;
    }
    uVar6 = FUN_1804917a0(lVar2);
    return uVar6;
  case 2:
    if (*(longlong *)(lVar2 + 0x180) == 0) {
      FUN_18048f620(lVar2,param_1);
      *(undefined1 *)(lVar2 + 0x21) = 3;
      *(undefined4 *)(lVar2 + 0x24) = 0;
      return 0;
    }
    break;
  case 3:
    uVar1 = *(uint *)(lVar2 + 0x24);
    lVar3 = *(longlong *)(lVar2 + 0x10);
    *(uint *)(lVar2 + 0x24) = uVar1 + 1;
    FUN_1804903a0(lVar2,*(longlong *)(lVar2 + 0x98) + (ulonglong)uVar1 * 8);
    if (*(uint *)(lVar2 + 0xa0) < *(uint *)(lVar2 + 0x24)) {
      *(undefined1 *)(lVar2 + 0x21) = 4;
    }
    *(longlong *)(lVar2 + 0x60) =
         *(longlong *)(lVar2 + 0x60) + (*(longlong *)(lVar2 + 0x10) - lVar3);
    return 10;
  case 4:
    lVar3 = *(longlong *)(lVar2 + 0x10);
    plVar7 = (longlong *)FUN_1804902d0(lVar2,*(undefined8 *)(lVar2 + 0x30),0x28);
    *(longlong **)(lVar2 + 0x30) = plVar7;
    *(longlong *)(lVar2 + 0x60) =
         *(longlong *)(lVar2 + 0x60) + (*(longlong *)(lVar2 + 0x10) - lVar3);
    if (*plVar7 == 0) {
      uVar1 = *(uint *)(lVar2 + 0xa0);
      if ((*(uint *)(lVar2 + 0xa4) <= uVar1 >> 2) && (0x1ff < uVar1)) {
        FUN_1804920c0(param_1,uVar1 >> 1);
      }
      if (*(longlong *)(lVar2 + 0x50) != 0) {
        *(undefined1 *)(lVar2 + 0x21) = 5;
        return 400;
      }
      *(undefined1 *)(lVar2 + 0x21) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
    }
    return 400;
  case 5:
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      *(undefined8 *)(lVar2 + 0x58) = 0;
      *(undefined1 *)(lVar2 + 0x21) = 0;
      return 0;
    }
    if (*(longlong *)(lVar2 + 0x180) == 0) {
      uVar4 = *(ulonglong *)(lVar2 + 0x10);
      FUN_18048fa60(param_1);
      uVar5 = *(ulonglong *)(lVar2 + 0x10);
      if ((uVar5 <= uVar4) && (uVar4 - uVar5 < *(ulonglong *)(lVar2 + 0x60))) {
        *(ulonglong *)(lVar2 + 0x60) = (*(ulonglong *)(lVar2 + 0x60) - uVar4) + uVar5;
      }
      if (100 < *(ulonglong *)(lVar2 + 0x60)) {
        *(ulonglong *)(lVar2 + 0x60) = *(ulonglong *)(lVar2 + 0x60) - 100;
      }
      return 100;
    }
    break;
  default:
    return 0;
  }
  return 0x800000000000;
}



/* ===== 180490090 FUN_180490090 ===== */

longlong FUN_180490090(longlong param_1)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar8 = 0;
  lVar3 = *(longlong *)(param_1 + 0x38);
  while (lVar3 != 0) {
    cVar2 = *(char *)(lVar3 + 9);
    *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) | 4;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar3 + 0x18);
    if (cVar2 == '\v') {
      iVar6 = FUN_180490450(param_1,lVar3);
      if (0 < iVar6) {
        *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) & 0xfb;
      }
      if (*(int *)(lVar3 + 0x34) == 0) {
        uVar7 = ((ulonglong)*(uint *)(lVar3 + 0x30) + 8) * 8;
      }
      else {
        uVar7 = (ulonglong)(*(int *)(lVar3 + 0x34) + 1) * 0x18 +
                ((ulonglong)*(uint *)(lVar3 + 0x30) + 8) * 8;
      }
    }
    else if (cVar2 == '\b') {
      if ((*(byte *)(*(longlong *)(lVar3 + 0x10) + 8) & 3) != 0) {
        FUN_18048fb70(param_1);
      }
      if (*(char *)(lVar3 + 10) == '\0') {
        if ((*(byte *)(*(longlong *)(lVar3 + 0x20) + -0x60) & 3) != 0) {
          FUN_18048fb70(param_1,*(longlong *)(lVar3 + 0x20) + -0x68);
        }
        uVar7 = 0;
        bVar5 = 0;
        if (*(char *)(lVar3 + 0xb) != '\0') {
          do {
            if ((*(byte *)(*(longlong *)(lVar3 + 0x28 + uVar7 * 8) + 8) & 3) != 0) {
              FUN_18048fb70(param_1);
            }
            bVar5 = *(byte *)(lVar3 + 0xb);
            uVar9 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar9;
          } while (uVar9 < bVar5);
        }
      }
      else {
        uVar7 = 0;
        bVar5 = 0;
        if (*(char *)(lVar3 + 0xb) != '\0') {
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0x30 + uVar7 * 8);
            if ((0xfffffff6 < (int)((longlong)uVar4 >> 0x2f) + 4U) &&
               ((*(byte *)((uVar4 & 0x7fffffffffff) + 8) & 3) != 0)) {
              FUN_18048fb70(param_1);
            }
            bVar5 = *(byte *)(lVar3 + 0xb);
            uVar9 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar9;
          } while (uVar9 < bVar5);
        }
      }
      if (*(char *)(lVar3 + 10) == '\0') {
        uVar7 = (ulonglong)bVar5 * 8 + 0x28;
      }
      else {
        uVar7 = (ulonglong)bVar5 * 8 + 0x30;
      }
    }
    else if (cVar2 == '\a') {
      pbVar1 = (byte *)(*(longlong *)(lVar3 + 0x40) + 8);
      *pbVar1 = *pbVar1 & 0xfc;
      for (lVar10 = -(ulonglong)*(uint *)(lVar3 + 0x30); lVar10 < 0; lVar10 = lVar10 + 1) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + lVar10 * 8) + 8) & 3) != 0) {
          FUN_18048fb70(param_1);
        }
      }
      if (*(ushort *)(lVar3 + 0x3e) != 0) {
        lVar10 = *(longlong *)
                  (*(longlong *)(param_1 + 0x468) + (ulonglong)*(ushort *)(lVar3 + 0x3e) * 8);
        if ((*(byte *)(lVar10 + 8) & 3) != 0) {
          *(byte *)(lVar10 + 8) = *(byte *)(lVar10 + 8) & 0xfc;
          *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(param_1 + 0x38);
          *(longlong *)(param_1 + 0x38) = lVar10;
        }
      }
      uVar7 = (ulonglong)*(uint *)(lVar3 + 0x38);
    }
    else if (cVar2 == '\x06') {
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_1 + 0x40);
      *(longlong *)(param_1 + 0x40) = lVar3;
      *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) & 0xfb;
      FUN_180490640();
      uVar7 = (ulonglong)*(uint *)(lVar3 + 0x58) * 8 + 0x60;
    }
    else {
      FUN_1804907b0(param_1,lVar3);
      uVar7 = ((ulonglong)*(uint *)(lVar3 + 0x2c) +
              (ulonglong)*(ushort *)(lVar3 + 10) * 3 +
              (ulonglong)(uint)(*(int *)(lVar3 + 0xc) - *(int *)(lVar3 + 0x28)) * 2) * 4 + 0x78;
    }
    lVar8 = lVar8 + uVar7;
    lVar3 = *(longlong *)(param_1 + 0x38);
  }
  return lVar8;
}



/* ===== 1804902d0 FUN_1804902d0 ===== */

longlong * FUN_1804902d0(longlong param_1,longlong *param_2,int param_3)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  plVar2 = (longlong *)*param_2;
  if (plVar2 != (longlong *)0x0) {
    do {
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      if (*(char *)((longlong)plVar2 + 9) == '\x06') {
        FUN_1804902d0(param_1,plVar2 + 8,0xffffffff);
      }
      if ((byte)((bVar1 ^ 3) & (*(byte *)(plVar2 + 1) ^ 3)) == 0) {
        *param_2 = *plVar2;
        if (plVar2 == *(longlong **)(param_1 + 0x28)) {
          *(longlong *)(param_1 + 0x28) = *plVar2;
        }
        (*(code *)(&PTR_FUN_18056ea00)[*(byte *)((longlong)plVar2 + 9) - 4])(param_1,plVar2);
      }
      else {
        *(byte *)(plVar2 + 1) = *(byte *)(param_1 + 0x20) & 3 | *(byte *)(plVar2 + 1) & 0xf8;
        param_2 = plVar2;
      }
      plVar2 = (longlong *)*param_2;
    } while (plVar2 != (longlong *)0x0);
  }
  return param_2;
}



/* ===== 1804903a0 FUN_1804903a0 ===== */

void FUN_1804903a0(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***local_18 [2];
  
  uVar2 = *param_2;
  local_18[0] = (undefined8 ***)(uVar2 & 0xfffffffffffffffe);
  if (local_18[0] != (undefined8 ***)0x0) {
    pppuVar4 = local_18;
    bVar1 = *(byte *)(param_1 + 0x20);
    pppuVar3 = local_18[0];
    do {
      if ((byte)((bVar1 ^ 3) & (*(byte *)(pppuVar3 + 1) ^ 3)) == 0) {
        *pppuVar4 = *pppuVar3;
        FUN_180491c40(param_1,pppuVar3);
      }
      else {
        *(byte *)(pppuVar3 + 1) = *(byte *)(param_1 + 0x20) & 3 | *(byte *)(pppuVar3 + 1) & 0xf8;
        pppuVar4 = pppuVar3;
      }
      pppuVar3 = (undefined8 ***)*pppuVar4;
    } while (pppuVar3 != (undefined8 ***)0x0);
  }
  *param_2 = (ulonglong)((uint)uVar2 & 1) | (ulonglong)local_18[0];
  return;
}



/* ===== 180490450 FUN_180490450 ===== */

uint FUN_180490450(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  char *pcVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  lVar9 = *(longlong *)(param_2 + 0x20);
  uVar4 = 0;
  if (lVar9 == 0) {
LAB_180490523:
    uVar12 = 0;
  }
  else {
    if ((*(byte *)(lVar9 + 8) & 3) != 0) {
      FUN_18048fb70(param_1,lVar9);
    }
    if ((*(byte *)(lVar9 + 10) & 8) != 0) goto LAB_180490523;
    puVar2 = (ulonglong *)FUN_1804942b0(lVar9,3);
    if ((puVar2 != (ulonglong *)0x0) && ((int)((longlong)*puVar2 >> 0x2f) == -5)) {
      pcVar3 = (char *)((*puVar2 & 0x7fffffffffff) + 0x18);
      cVar5 = *pcVar3;
      if (cVar5 != '\0') {
        do {
          pcVar3 = pcVar3 + 1;
          if (cVar5 == 'k') {
            uVar6 = uVar4 | 8;
          }
          else {
            uVar6 = uVar4 | 0x10;
            if (cVar5 != 'v') {
              uVar6 = uVar4;
            }
          }
          uVar4 = uVar6;
          cVar5 = *pcVar3;
        } while (cVar5 != '\0');
        if (uVar4 != 0) {
          if (*(longlong *)(param_1 + 0x2e0) == param_2) {
            uVar4 = 0xffffffef;
            goto LAB_180490523;
          }
          *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xe7;
          *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | (byte)uVar4;
          *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x48);
          *(longlong *)(param_1 + 0x48) = param_2;
          if (uVar4 == 0x18) {
            return 1;
          }
        }
      }
    }
    uVar12 = (ulonglong)(uVar4 & 0x10);
    if ((uVar4 & 0x10) != 0) goto LAB_180490570;
  }
  uVar10 = (ulonglong)*(uint *)(param_2 + 0x30);
  uVar8 = 0;
  if (*(uint *)(param_2 + 0x30) != 0) {
    do {
      uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + uVar8 * 8);
      if ((0xfffffff6 < (int)((longlong)uVar1 >> 0x2f) + 4U) &&
         ((*(byte *)((uVar1 & 0x7fffffffffff) + 8) & 3) != 0)) {
        FUN_18048fb70(param_1);
      }
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
    } while (uVar6 < (uint)uVar10);
  }
LAB_180490570:
  uVar6 = *(uint *)(param_2 + 0x34);
  if (uVar6 != 0) {
    lVar9 = *(longlong *)(param_2 + 0x28);
    uVar8 = 0;
    do {
      lVar11 = uVar8 * 3;
      if (*(longlong *)(lVar9 + uVar8 * 0x18) != -1) {
        if ((((uVar4 & 8) == 0) &&
            (uVar10 = *(ulonglong *)(lVar9 + 8 + uVar8 * 0x18),
            0xfffffff6 < (int)((longlong)uVar10 >> 0x2f) + 4U)) &&
           ((*(byte *)((uVar10 & 0x7fffffffffff) + 8) & 3) != 0)) {
          FUN_18048fb70(param_1);
        }
        if ((((int)uVar12 == 0) &&
            (uVar10 = *(ulonglong *)(lVar9 + lVar11 * 8),
            0xfffffff6 < (int)((longlong)uVar10 >> 0x2f) + 4U)) &&
           ((*(byte *)((uVar10 & 0x7fffffffffff) + 8) & 3) != 0)) {
          FUN_18048fb70(param_1);
        }
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 <= uVar6);
  }
  return uVar4;
}



/* ===== 180490640 FUN_180490640 ===== */

void FUN_180490640(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  
  puVar2 = *(ulonglong **)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x38);
  puVar6 = (ulonglong *)(lVar4 + 0x10);
  if (puVar6 < puVar2) {
    do {
      if ((0xfffffff6 < (int)((longlong)*puVar6 >> 0x2f) + 4U) &&
         ((*(byte *)((*puVar6 & 0x7fffffffffff) + 8) & 3) != 0)) {
        FUN_18048fb70(param_1);
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 < puVar2);
    lVar4 = *(longlong *)(param_2 + 0x38);
  }
  if (*(char *)(param_1 + 0x21) == '\x02') {
    puVar2 = (ulonglong *)(lVar4 + (ulonglong)*(uint *)(param_2 + 0x58) * 8);
    uVar1 = (longlong)puVar2 + (7 - (longlong)puVar6);
    uVar5 = uVar1 >> 3;
    if (puVar2 < puVar6) {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      uVar1 = uVar1 & 0xfffffffffffffff8;
      if (puVar2 < puVar6) {
        uVar1 = 0;
      }
      FUN_180540170(puVar6,0xffffffffffffffff,uVar1 / 8 << 3);
    }
  }
  if ((*(byte *)(*(longlong *)(param_2 + 0x48) + 8) & 3) != 0) {
    FUN_18048fb70(param_1);
  }
  puVar6 = (ulonglong *)(*(longlong *)(param_2 + 0x28) + -8);
  for (puVar2 = (ulonglong *)(*(longlong *)(param_2 + 0x20) + -8);
      (ulonglong *)(*(longlong *)(param_2 + 0x38) + 8U) < puVar2;
      puVar2 = (ulonglong *)((longlong)puVar2 + lVar4)) {
    if (*(char *)((puVar2[-1] & 0x7fffffffffff) + 10) == '\0') {
      puVar3 = puVar2 + *(byte *)(*(longlong *)((puVar2[-1] & 0x7fffffffffff) + 0x20) + -0x5d);
    }
    else {
      puVar3 = puVar2;
    }
    if (puVar3 <= puVar6) {
      puVar3 = puVar6;
    }
    uVar1 = *puVar2;
    if ((uVar1 & 3) == 0) {
      lVar4 = (ulonglong)*(byte *)(uVar1 - 3) * -8 + -0x10;
    }
    else {
      lVar4 = -(uVar1 & 0xfffffffffffffff8);
    }
    puVar6 = puVar3;
  }
  puVar2 = puVar6 + 1;
  if (*(ulonglong **)(param_2 + 0x30) < puVar6 + 1) {
    puVar2 = *(ulonglong **)(param_2 + 0x30);
  }
  FUN_18048eac0(param_2,(longlong)puVar2 - *(longlong *)(param_2 + 0x38) >> 3);
  return;
}



/* ===== 1804907b0 FUN_1804907b0 ===== */

void FUN_1804907b0(longlong param_1,longlong param_2)

{
  uint uVar2;
  uint uVar1;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*(short *)(param_2 + 0x68) != 0) {
    uVar1 = *(uint *)(param_2 + 0x28);
    while (uVar1 < 0x7ffd) {
      uVar3 = (ulonglong)uVar1;
      lVar5 = *(longlong *)(param_2 + 0x20);
      uVar4 = uVar3;
      if ((*(char *)(lVar5 + 5 + uVar3 * 8) == '\x18') &&
         ((*(byte *)(*(longlong *)(lVar5 + 8 + uVar3 * 8) + 8) & 3) != 0)) {
        FUN_18048fb70(param_1);
        uVar1 = (uint)uVar3;
      }
      uVar2 = uVar1;
      if (((0x605fd9U >> (*(byte *)(lVar5 + 4 + uVar4 * 8) & 0x1f) & 1) != 0) &&
         (uVar2 = uVar1 + 1, *(char *)(lVar5 + 5 + uVar4 * 8) == '\x1b')) {
        uVar2 = uVar1;
      }
      uVar1 = uVar2 + 1;
    }
    if (*(ushort *)(param_2 + 0x6a) != 0) {
      lVar5 = *(longlong *)
               (*(longlong *)(param_1 + 0x468) + (ulonglong)*(ushort *)(param_2 + 0x6a) * 8);
      if ((*(byte *)(lVar5 + 8) & 3) != 0) {
        *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) & 0xfc;
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_1 + 0x38);
        *(longlong *)(param_1 + 0x38) = lVar5;
      }
    }
    if (*(ushort *)(param_2 + 0x6e) != 0) {
      lVar5 = *(longlong *)
               (*(longlong *)(param_1 + 0x468) + (ulonglong)*(ushort *)(param_2 + 0x6e) * 8);
      if ((*(byte *)(lVar5 + 8) & 3) != 0) {
        *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) & 0xfc;
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_1 + 0x38);
        *(longlong *)(param_1 + 0x38) = lVar5;
      }
    }
    if (*(ushort *)(param_2 + 0x70) != 0) {
      lVar5 = *(longlong *)
               (*(longlong *)(param_1 + 0x468) + (ulonglong)*(ushort *)(param_2 + 0x70) * 8);
      if ((*(byte *)(lVar5 + 8) & 3) != 0) {
        *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) & 0xfc;
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_1 + 0x38);
        *(longlong *)(param_1 + 0x38) = lVar5;
      }
    }
    if ((*(byte *)(*(longlong *)(param_2 + 0x40) + 8) & 3) != 0) {
      FUN_18048fb70(param_1);
      return;
    }
  }
  return;
}



/* ===== 1804908e0 FUN_1804908e0 ===== */

void FUN_1804908e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  if ((byte)(*(char *)(param_1 + 0x21) - 1U) < 2) {
    FUN_18048fb70(param_1,param_3);
    return;
  }
  *(byte *)(param_2 + 8) = *(byte *)(param_1 + 0x20) & 3 | *(byte *)(param_2 + 8) & 0xf8;
  return;
}



/* ===== 180490910 FUN_180490910 ===== */

void FUN_180490910(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if ((byte)(*(char *)(param_1 + 0x21) - 1U) < 2) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x468) + (ulonglong)param_2 * 8);
    if ((*(byte *)(lVar1 + 8) & 3) != 0) {
      *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) & 0xfc;
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
      *(longlong *)(param_1 + 0x38) = lVar1;
    }
  }
  return;
}



/* ===== 180490990 FUN_180490990 ===== */

void FUN_180490990(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  ulonglong uVar3;
  
  puVar1 = param_2 + 2;
  *puVar1 = *(ulonglong *)param_2[4];
  param_2[4] = puVar1;
  *(undefined1 *)((longlong)param_2 + 10) = 1;
  *param_2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x28) = param_2;
  bVar2 = *(byte *)(param_2 + 1);
  if ((bVar2 & 7) != 0) {
    return;
  }
  if ((byte)(*(char *)(param_1 + 0x21) - 1U) < 2) {
    *(byte *)(param_2 + 1) = bVar2 | 4;
    if ((int)((longlong)*puVar1 >> 0x2f) + 4U < 0xfffffff7) {
      return;
    }
    uVar3 = *puVar1 & 0x7fffffffffff;
    if ((*(byte *)(uVar3 + 8) & 3) == 0) {
      return;
    }
    if ((byte)(*(char *)(param_1 + 0x21) - 1U) < 2) {
      FUN_18048fb70(param_1,uVar3);
      return;
    }
  }
  *(byte *)(param_2 + 1) = *(byte *)(param_1 + 0x20) & 3 | bVar2 & 0xf8;
  return;
}



/* ===== 180490a20 FUN_180490a20 ===== */

void FUN_180490a20(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(lVar2 + 0x2e0);
  lVar4 = *(longlong *)(lVar3 + 0x28);
  uVar10 = (ulonglong)*(uint *)(lVar3 + 0x34);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  do {
    if ((*(longlong *)(lVar4 + uVar10 * 0x18) != -1) &&
       (uVar11 = *(ulonglong *)(lVar4 + 8 + uVar10 * 0x18), (int)((longlong)uVar11 >> 0x2f) == -0xb)
       ) {
      uVar11 = uVar11 & 0x7fffffffffff;
      *(byte *)(uVar11 + 8) = *(byte *)(uVar11 + 8) & 0xe8 | *(byte *)(lVar2 + 0x20) & 3;
      uVar5 = *(undefined8 *)(lVar4 + uVar10 * 0x18);
      *(undefined8 *)(lVar4 + uVar10 * 0x18) = 0xffffffffffffffff;
      bVar1 = *(byte *)(lVar2 + 0x91);
      *(uint *)(lVar2 + 0x3d4) = *(uint *)(lVar2 + 0x3d4) & 0xffffffef;
      uVar6 = *(undefined8 *)(lVar2 + 0x18);
      lVar3 = *(longlong *)(lVar2 + 0x118);
      *(byte *)(lVar2 + 0x91) = bVar1 & 0x2f | 0x50;
      if ((char)bVar1 < '\0') {
        FUN_1804a7c70(lVar2,0);
      }
      *(undefined8 *)(lVar2 + 0x18) = 0x800000000000;
      puVar8 = *(undefined8 **)(lVar3 + 0x28);
      *puVar8 = uVar5;
      puVar8[1] = 0xffffffffffffffff;
      puVar8[2] = (ulonglong)~(uint)*(byte *)(uVar11 + 9) << 0x2f | uVar11;
      *(undefined8 **)(lVar3 + 0x28) = puVar8 + 3;
      iVar7 = FUN_18000329c(lVar3,puVar8 + 2,1,0xffffffffffffffff);
      *(longlong *)(lVar2 + 0x178) = param_1;
      *(byte *)(lVar2 + 0x91) = (bVar1 ^ *(byte *)(lVar2 + 0x91)) & 0xf ^ bVar1;
      if ((char)bVar1 < '\0') {
        FUN_1804a7c70(lVar2,0);
      }
      *(undefined8 *)(lVar2 + 0x18) = uVar6;
      if (iVar7 != 0) {
        puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x28) + -8);
        uVar5 = *puVar8;
        *(undefined8 **)(lVar3 + 0x28) = puVar8;
        if ((*(byte *)(lVar2 + 0x93) & 0x10) != 0) {
          lVar3 = *(longlong *)(lVar2 + 0x118);
          lVar9 = FUN_1804b8c00(lVar3,0x96c9c444);
          if (lVar9 != 0) {
            puVar8 = *(undefined8 **)(lVar3 + 0x28);
            *(undefined8 **)(lVar3 + 0x28) = puVar8 + 1;
            *puVar8 = uVar5;
            FUN_1804b8af0(lVar3,lVar9);
          }
        }
      }
    }
    uVar10 = uVar10 - 1;
  } while (-1 < (longlong)uVar10);
  return;
}



/* ===== 180490c00 FUN_180490c00 ===== */

void FUN_180490c00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(lVar1 + 0x50);
  do {
    if (lVar2 == 0) {
      return;
    }
    puVar6 = *(ulonglong **)(lVar1 + 0x50);
    puVar3 = (ulonglong *)*puVar6;
    if (puVar3 == puVar6) {
      *(undefined8 *)(lVar1 + 0x50) = 0;
    }
    else {
      *puVar6 = *puVar3;
    }
    if (*(char *)((longlong)puVar3 + 9) == '\n') {
      *puVar3 = *(undefined8 *)(lVar1 + 0x28);
      *(ulonglong **)(lVar1 + 0x28) = puVar3;
      local_res8 = (ulonglong)puVar3 | 0xfffa800000000000;
      *(byte *)(puVar3 + 1) = *(byte *)(lVar1 + 0x20) & 3 | *(byte *)(puVar3 + 1) & 0xe8;
      puVar5 = (ulonglong *)FUN_1804931f0(param_1,*(undefined8 *)(lVar1 + 0x2e0),&local_res8);
      uVar4 = *puVar5;
      if (uVar4 != 0xffffffffffffffff) {
        puVar6 = &local_res8;
        *puVar5 = 0xffffffffffffffff;
        local_res8 = uVar4;
        goto LAB_180490cfe;
      }
    }
    else {
      *puVar3 = **(undefined8 **)(lVar1 + 0xc0);
      **(ulonglong **)(lVar1 + 0xc0) = (ulonglong)puVar3;
      *(byte *)(puVar3 + 1) = *(byte *)(lVar1 + 0x20) & 3 | *(byte *)(puVar3 + 1) & 0xf8;
      lVar2 = puVar3[4];
      if (((lVar2 != 0) && ((*(byte *)(lVar2 + 10) & 4) == 0)) &&
         (puVar6 = (ulonglong *)FUN_1804942b0(lVar2,2,*(undefined8 *)(lVar1 + 0x1c0)),
         puVar6 != (ulonglong *)0x0)) {
LAB_180490cfe:
        FUN_18048f920(lVar1,param_1,puVar6,puVar3);
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = *(longlong *)(lVar1 + 0x50);
  } while( true );
}



/* ===== 180490d30 FUN_180490d30 ===== */

void FUN_180490d30(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  iVar3 = -1;
  *(undefined1 *)(param_1 + 0x20) = 0x43;
  puVar4 = (undefined8 *)(param_1 + 0x28);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  while ((puVar1 != (undefined8 *)0x0 && (iVar3 != 0))) {
    iVar3 = iVar3 + -1;
    if (*(char *)((longlong)puVar1 + 9) == '\x06') {
      FUN_1804902d0(param_1,puVar1 + 8,0xffffffff);
    }
    if ((*(byte *)(puVar1 + 1) & 0x40) == 0) {
      *puVar4 = *puVar1;
      if (puVar1 == *(undefined8 **)(param_1 + 0x28)) {
        *(undefined8 *)(param_1 + 0x28) = *puVar1;
      }
      (*(code *)(&PTR_FUN_18056ea00)[*(byte *)((longlong)puVar1 + 9) - 4])(param_1,puVar1);
    }
    else {
      *(byte *)(puVar1 + 1) = *(byte *)(param_1 + 0x20) & 3 | *(byte *)(puVar1 + 1) & 0xf8;
      puVar4 = puVar1;
    }
    puVar1 = (undefined8 *)*puVar4;
  }
  for (uVar2 = *(uint *)(param_1 + 0xa0); uVar2 != 0xffffffff; uVar2 = uVar2 - 1) {
    FUN_1804903a0(param_1,*(longlong *)(param_1 + 0x98) + (ulonglong)uVar2 * 8);
  }
  return;
}



/* ===== 180490e30 FUN_180490e30 ===== */

void FUN_180490e30(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  longlong *plVar8;
  longlong lVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(lVar3 + 0xb8);
  *(undefined4 *)(lVar3 + 0xb8) = 0xfffffffd;
  if (*(byte *)(lVar3 + 0x21) < 3) {
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(longlong *)(lVar3 + 0x30) = lVar3 + 0x28;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined1 *)(lVar3 + 0x21) = 3;
    *(undefined4 *)(lVar3 + 0x24) = 0;
  }
switchD_180490ed5_default:
  if (1 < (byte)(*(char *)(lVar3 + 0x21) - 3U)) {
    *(undefined1 *)(lVar3 + 0x21) = 0;
    do {
      FUN_18048fdc0(param_1);
    } while (*(char *)(lVar3 + 0x21) != '\0');
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *(ulonglong *)(lVar3 + 0x60);
    lVar9 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar7,8);
    *(ulonglong *)(lVar3 + 0x18) =
         ((*(ulonglong *)(lVar3 + 0x60) - lVar9 >> 1) + lVar9 >> 6) *
         (ulonglong)*(uint *)(lVar3 + 0x6c);
    *(undefined4 *)(lVar3 + 0xb8) = uVar1;
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0x10);
  switch(*(undefined1 *)(lVar9 + 0x21)) {
  case 0:
    *(undefined8 *)(lVar9 + 0x38) = 0;
    *(undefined8 *)(lVar9 + 0x40) = 0;
    *(undefined8 *)(lVar9 + 0x48) = 0;
    if ((*(byte *)(*(longlong *)(lVar9 + 0xc0) + 8) & 3) != 0) {
      FUN_18048fb70(lVar9);
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(lVar9 + 0xc0) + 0x48) + 8) & 3) != 0) {
      FUN_18048fb70(lVar9);
    }
    if ((*(byte *)(*(longlong *)(lVar9 + 0x118) + 8) & 3) != 0) {
      FUN_18048fb70(lVar9);
    }
    if ((0xfffffff6 < (int)((longlong)*(ulonglong *)(lVar9 + 0x110) >> 0x2f) + 4U) &&
       ((*(byte *)((*(ulonglong *)(lVar9 + 0x110) & 0x7fffffffffff) + 8) & 3) != 0)) {
      FUN_18048fb70(lVar9);
    }
    FUN_18048fc90(lVar9);
    *(undefined1 *)(lVar9 + 0x21) = 1;
    goto switchD_180490ed5_default;
  case 1:
    if (*(longlong *)(lVar9 + 0x38) == 0) {
      *(undefined1 *)(lVar9 + 0x21) = 2;
    }
    else {
      FUN_1804917a0(lVar9);
    }
    goto switchD_180490ed5_default;
  case 2:
    if (*(longlong *)(lVar9 + 0x180) == 0) {
      FUN_18048f620(lVar9,param_1);
      *(undefined1 *)(lVar9 + 0x21) = 3;
      *(undefined4 *)(lVar9 + 0x24) = 0;
    }
    goto switchD_180490ed5_default;
  case 3:
    uVar2 = *(uint *)(lVar9 + 0x24);
    lVar4 = *(longlong *)(lVar9 + 0x10);
    *(uint *)(lVar9 + 0x24) = uVar2 + 1;
    FUN_1804903a0(lVar9,*(longlong *)(lVar9 + 0x98) + (ulonglong)uVar2 * 8);
    if (*(uint *)(lVar9 + 0xa0) < *(uint *)(lVar9 + 0x24)) {
      *(undefined1 *)(lVar9 + 0x21) = 4;
    }
    *(longlong *)(lVar9 + 0x60) =
         *(longlong *)(lVar9 + 0x60) + (*(longlong *)(lVar9 + 0x10) - lVar4);
    goto switchD_180490ed5_default;
  case 4:
    lVar4 = *(longlong *)(lVar9 + 0x10);
    plVar8 = (longlong *)FUN_1804902d0(lVar9,*(undefined8 *)(lVar9 + 0x30),0x28);
    *(longlong **)(lVar9 + 0x30) = plVar8;
    *(longlong *)(lVar9 + 0x60) =
         *(longlong *)(lVar9 + 0x60) + (*(longlong *)(lVar9 + 0x10) - lVar4);
    if (*plVar8 != 0) goto switchD_180490ed5_default;
    uVar2 = *(uint *)(lVar9 + 0xa0);
    if ((*(uint *)(lVar9 + 0xa4) <= uVar2 >> 2) && (0x1ff < uVar2)) {
      FUN_1804920c0(param_1,uVar2 >> 1);
    }
    if (*(longlong *)(lVar9 + 0x50) != 0) {
      *(undefined1 *)(lVar9 + 0x21) = 5;
      goto switchD_180490ed5_default;
    }
    break;
  case 5:
    if (*(longlong *)(lVar9 + 0x50) != 0) {
      if (*(longlong *)(lVar9 + 0x180) == 0) {
        uVar5 = *(ulonglong *)(lVar9 + 0x10);
        FUN_18048fa60(param_1);
        uVar6 = *(ulonglong *)(lVar9 + 0x10);
        if ((uVar6 <= uVar5) && (uVar5 - uVar6 < *(ulonglong *)(lVar9 + 0x60))) {
          *(ulonglong *)(lVar9 + 0x60) = (*(ulonglong *)(lVar9 + 0x60) - uVar5) + uVar6;
        }
        if (100 < *(ulonglong *)(lVar9 + 0x60)) {
          *(ulonglong *)(lVar9 + 0x60) = *(ulonglong *)(lVar9 + 0x60) - 100;
        }
      }
      goto switchD_180490ed5_default;
    }
    break;
  default:
    goto switchD_180490ed5_default;
  }
  *(undefined1 *)(lVar9 + 0x21) = 0;
  *(undefined8 *)(lVar9 + 0x58) = 0;
  goto switchD_180490ed5_default;
}



/* ===== 180491130 FUN_180491130 ===== */

longlong FUN_180491130(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(param_1 + 0xc0);
  lVar5 = 0;
  puVar1 = (undefined8 *)*puVar6;
  do {
    if (puVar1 == (undefined8 *)0x0) {
      return lVar5;
    }
    bVar3 = *(byte *)(puVar1 + 1);
    if (((bVar3 & 3) == 0) && (param_2 == 0)) {
LAB_1804911ab:
      puVar6 = puVar1;
    }
    else if ((bVar3 & 8) == 0) {
      lVar4 = puVar1[4];
      if (lVar4 == 0) {
        *(byte *)(puVar1 + 1) = bVar3 | 8;
        puVar6 = puVar1;
      }
      else {
        if ((*(byte *)(lVar4 + 10) & 4) == 0) {
          lVar4 = FUN_1804942b0(lVar4,2,*(undefined8 *)(param_1 + 0x1c0));
          bVar3 = *(byte *)(puVar1 + 1);
        }
        else {
          lVar4 = 0;
        }
        *(byte *)(puVar1 + 1) = bVar3 | 8;
        if (lVar4 == 0) goto LAB_1804911ab;
        lVar5 = lVar5 + (ulonglong)*(uint *)(puVar1 + 3) + 0x30;
        *puVar6 = *puVar1;
        puVar2 = *(undefined8 **)(param_1 + 0x50);
        if (puVar2 == (undefined8 *)0x0) {
          *puVar1 = puVar1;
        }
        else {
          *puVar1 = *puVar2;
          *puVar2 = puVar1;
        }
        *(undefined8 **)(param_1 + 0x50) = puVar1;
      }
    }
    else {
      puVar6 = puVar1;
    }
    puVar1 = (undefined8 *)*puVar6;
  } while( true );
}



/* ===== 180491200 FUN_180491200 ===== */

undefined8 FUN_180491200(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  uVar10 = 0x800000000000;
  uVar1 = *(undefined4 *)(lVar3 + 0xb8);
  *(undefined4 *)(lVar3 + 0xb8) = 0xfffffffd;
  uVar2 = *(int *)(lVar3 + 0x68) * 10;
  if (uVar2 != 0) {
    uVar10 = (ulonglong)uVar2;
  }
  if (*(ulonglong *)(lVar3 + 0x18) < *(ulonglong *)(lVar3 + 0x10)) {
    *(longlong *)(lVar3 + 0x58) =
         *(longlong *)(lVar3 + 0x58) + (*(ulonglong *)(lVar3 + 0x10) - *(ulonglong *)(lVar3 + 0x18))
    ;
  }
  do {
    uVar11 = 0x7fffffffffff;
    lVar8 = *(longlong *)(param_1 + 0x10);
    switch(*(undefined1 *)(lVar8 + 0x21)) {
    case 0:
      *(undefined8 *)(lVar8 + 0x38) = 0;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(undefined8 *)(lVar8 + 0x48) = 0;
      if ((*(byte *)(*(longlong *)(lVar8 + 0xc0) + 8) & 3) != 0) {
        FUN_18048fb70(lVar8);
      }
      if ((*(byte *)(*(longlong *)(*(longlong *)(lVar8 + 0xc0) + 0x48) + 8) & 3) != 0) {
        FUN_18048fb70(lVar8);
      }
      if ((*(byte *)(*(longlong *)(lVar8 + 0x118) + 8) & 3) != 0) {
        FUN_18048fb70(lVar8);
      }
      if ((0xfffffff6 < (int)((longlong)*(ulonglong *)(lVar8 + 0x110) >> 0x2f) + 4U) &&
         ((*(byte *)((*(ulonglong *)(lVar8 + 0x110) & uVar11) + 8) & 3) != 0)) {
        FUN_18048fb70(lVar8);
      }
      FUN_18048fc90(lVar8);
      *(undefined1 *)(lVar8 + 0x21) = 1;
    default:
switchD_18049129b_default:
      lVar8 = 0;
      break;
    case 1:
      if (*(longlong *)(lVar8 + 0x38) == 0) {
        *(undefined1 *)(lVar8 + 0x21) = 2;
        goto switchD_18049129b_default;
      }
      lVar8 = FUN_1804917a0(lVar8);
      break;
    case 2:
      if (*(longlong *)(lVar8 + 0x180) == 0) {
        FUN_18048f620(lVar8,param_1);
        *(undefined1 *)(lVar8 + 0x21) = 3;
        *(undefined4 *)(lVar8 + 0x24) = 0;
        goto switchD_18049129b_default;
      }
      lVar8 = 0x800000000000;
      break;
    case 3:
      uVar2 = *(uint *)(lVar8 + 0x24);
      lVar4 = *(longlong *)(lVar8 + 0x10);
      *(uint *)(lVar8 + 0x24) = uVar2 + 1;
      FUN_1804903a0(lVar8,*(longlong *)(lVar8 + 0x98) + (ulonglong)uVar2 * 8);
      if (*(uint *)(lVar8 + 0xa0) < *(uint *)(lVar8 + 0x24)) {
        *(undefined1 *)(lVar8 + 0x21) = 4;
      }
      *(longlong *)(lVar8 + 0x60) =
           *(longlong *)(lVar8 + 0x60) + (*(longlong *)(lVar8 + 0x10) - lVar4);
      lVar8 = 10;
      break;
    case 4:
      lVar4 = *(longlong *)(lVar8 + 0x10);
      plVar7 = (longlong *)FUN_1804902d0(lVar8,*(undefined8 *)(lVar8 + 0x30),0x28);
      *(longlong **)(lVar8 + 0x30) = plVar7;
      *(longlong *)(lVar8 + 0x60) =
           *(longlong *)(lVar8 + 0x60) + (*(longlong *)(lVar8 + 0x10) - lVar4);
      if (*plVar7 == 0) {
        uVar2 = *(uint *)(lVar8 + 0xa0);
        if ((*(uint *)(lVar8 + 0xa4) <= uVar2 >> 2) && (0x1ff < uVar2)) {
          FUN_1804920c0(param_1,uVar2 >> 1);
        }
        if (*(longlong *)(lVar8 + 0x50) == 0) {
          *(undefined1 *)(lVar8 + 0x21) = 0;
          *(undefined8 *)(lVar8 + 0x58) = 0;
        }
        else {
          *(undefined1 *)(lVar8 + 0x21) = 5;
        }
      }
      lVar8 = 400;
      break;
    case 5:
      if (*(longlong *)(lVar8 + 0x50) == 0) {
        *(undefined1 *)(lVar8 + 0x21) = 0;
        *(undefined8 *)(lVar8 + 0x58) = 0;
        goto switchD_18049129b_default;
      }
      if (*(longlong *)(lVar8 + 0x180) == 0) {
        uVar11 = *(ulonglong *)(lVar8 + 0x10);
        FUN_18048fa60(param_1);
        uVar5 = *(ulonglong *)(lVar8 + 0x10);
        if ((uVar5 <= uVar11) && (uVar11 - uVar5 < *(ulonglong *)(lVar8 + 0x60))) {
          *(ulonglong *)(lVar8 + 0x60) = (*(ulonglong *)(lVar8 + 0x60) - uVar11) + uVar5;
        }
        if (100 < *(ulonglong *)(lVar8 + 0x60)) {
          *(ulonglong *)(lVar8 + 0x60) = *(ulonglong *)(lVar8 + 0x60) - 100;
        }
        lVar8 = 100;
      }
      else {
        lVar8 = 0x800000000000;
      }
    }
    if (*(char *)(lVar3 + 0x21) == '\0') {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *(ulonglong *)(lVar3 + 0x60);
      lVar8 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar6,8);
      lVar8 = ((*(ulonglong *)(lVar3 + 0x60) - lVar8 >> 1) + lVar8 >> 6) *
              (ulonglong)*(uint *)(lVar3 + 0x6c);
      uVar9 = 1;
      goto LAB_180491561;
    }
    uVar10 = uVar10 - lVar8;
    if ((longlong)uVar10 < 1) {
      lVar8 = *(longlong *)(lVar3 + 0x10);
      if (*(ulonglong *)(lVar3 + 0x58) < 0x400) {
        *(longlong *)(lVar3 + 0x18) = lVar8 + 0x400;
        uVar9 = 0xffffffff;
      }
      else {
        *(ulonglong *)(lVar3 + 0x58) = *(ulonglong *)(lVar3 + 0x58) - 0x400;
        uVar9 = 0;
LAB_180491561:
        *(longlong *)(lVar3 + 0x18) = lVar8;
      }
      *(undefined4 *)(lVar3 + 0xb8) = uVar1;
      return uVar9;
    }
  } while( true );
}



/* ===== 1804915b0 FUN_1804915b0 ===== */

void FUN_1804915b0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar1 + 10) == '\0') {
    *(ulonglong *)(param_1 + 0x28) =
         *(longlong *)(param_1 + 0x20) +
         (ulonglong)*(byte *)(*(longlong *)(uVar1 + 0x20) + -0x5d) * 8;
  }
  FUN_180491200();
  return;
}



/* ===== 1804915e0 FUN_1804915e0 ===== */

undefined8 FUN_1804915e0(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x178);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x180);
  *(longlong *)(lVar2 + 0x20) = lVar3;
  *(ulonglong *)(lVar2 + 0x28) =
       lVar3 + (ulonglong)
               *(byte *)(*(longlong *)((*(ulonglong *)(lVar3 + -0x10) & 0x7fffffffffff) + 0x20) +
                        -0x5d) * 8;
  do {
    if (param_2 == 0) break;
    param_2 = param_2 + -1;
    iVar4 = FUN_180491200(lVar2);
  } while (iVar4 == 0);
  cVar1 = *(char *)(*(longlong *)(lVar2 + 0x10) + 0x21);
  if ((cVar1 == '\x02') || (cVar1 == '\x05')) {
    return 1;
  }
  return 0;
}



/* ===== 180491670 FUN_180491670 ===== */

void FUN_180491670(longlong param_1,undefined8 param_2,uint *param_3,uint param_4,int param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_3 * 2;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (uVar4 < 8) {
    uVar4 = 8;
  }
  if (param_4 < uVar4) {
    uVar4 = param_4;
  }
  uVar5 = *param_3 * param_5;
  uVar2 = uVar4 * param_5;
  lVar3 = (*(code *)*puVar1)(puVar1[1],param_2,uVar5,uVar2);
  if ((lVar3 == 0) && (uVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_180484480(param_1);
  }
  puVar1[2] = puVar1[2] + ((ulonglong)uVar2 - (ulonglong)uVar5);
  *param_3 = uVar4;
  return;
}



