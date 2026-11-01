/* ===== 1800a3f20 FUN_1800a3f20 ===== */

undefined8 FUN_1800a3f20(undefined8 param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar1 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  lVar1 = *(longlong *)(lVar1 + 0x148);
  FUN_18047e8f0(param_1,0,0);
  iVar5 = 0;
  uVar6 = 0;
  lVar3 = DAT_180cd02b8;
  lVar4 = DAT_180cd02c0;
  if ((DAT_180cd02c0 - DAT_180cd02b8 >> 3) * -0x3333333333333333 != 0) {
    do {
      if ((*(char *)(lVar3 + 0x20 + uVar6 * 0x28) != '\0') &&
         (*(longlong *)(lVar3 + uVar6 * 0x28) == lVar1)) {
        puVar2 = (ulonglong *)FUN_18047efb0(param_1,8);
        *puVar2 = uVar6;
        FUN_18047eb70(param_1,0xffffd8f0,"wl.hook");
        FUN_18047f990(param_1,0xfffffffe);
        iVar5 = iVar5 + 1;
        FUN_18047f7e0(param_1,0xfffffffe,iVar5);
        lVar3 = DAT_180cd02b8;
        lVar4 = DAT_180cd02c0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)((lVar4 - lVar3 >> 3) * -0x3333333333333333));
  }
  return 1;
}



/* ===== 1800a4030 FUN_1800a4030 ===== */

longlong FUN_1800a4030(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar3 = DAT_180cd02b8;
  uVar16 = 0x666666666666666;
  lVar10 = (DAT_180cd02c0 - DAT_180cd02b8 >> 3) * -0x3333333333333333;
  if (lVar10 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar10 + 1;
  uVar11 = (DAT_180cd02c8 - DAT_180cd02b8 >> 3) * -0x3333333333333333;
  if (uVar11 <= 0x666666666666666 - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar16 = uVar1;
    if (uVar1 <= uVar11) {
      uVar16 = uVar11;
    }
    if (0x666666666666666 < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar10 = FUN_18000fb70(uVar16 * 0x28);
  uVar4 = param_3[1];
  uVar6 = *(undefined4 *)(param_3 + 2);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar8 = *(undefined4 *)(param_3 + 3);
  uVar9 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar3 = (param_2 - lVar3) / 0x28;
  puVar2 = (undefined8 *)(lVar10 + lVar3 * 0x28);
  *puVar2 = *param_3;
  puVar2[1] = uVar4;
  lVar3 = lVar10 + lVar3 * 0x28;
  uVar4 = param_3[4];
  *(undefined4 *)(lVar3 + 0x10) = uVar6;
  *(undefined4 *)(lVar3 + 0x14) = uVar7;
  *(undefined4 *)(lVar3 + 0x18) = uVar8;
  *(undefined4 *)(lVar3 + 0x1c) = uVar9;
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  if (param_2 == DAT_180cd02c0) {
    lVar15 = DAT_180cd02c0 - DAT_180cd02b8;
    lVar12 = lVar10;
    param_2 = DAT_180cd02b8;
  }
  else {
    FUN_180540530(lVar10,DAT_180cd02b8,param_2 - DAT_180cd02b8);
    lVar12 = lVar3 + 0x28;
    lVar15 = DAT_180cd02c0 - param_2;
  }
  puVar13 = auStack_38;
  puVar14 = auStack_38;
  FUN_180540530(lVar12,param_2,lVar15);
  if (DAT_180cd02b8 == 0) goto LAB_1800a41be;
  lVar12 = DAT_180cd02b8;
  if ((ulonglong)((DAT_180cd02c8 - DAT_180cd02b8 >> 3) * 8) < 0x1000) {
LAB_1800a41b3:
    puVar14 = puVar13;
  }
  else {
    lVar12 = *(longlong *)(DAT_180cd02b8 + -8);
    if (0x1f < (DAT_180cd02b8 - lVar12) - 8U) {
      lVar12 = 5;
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar13 = auStack_30;
      goto LAB_1800a41b3;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x1800a41be;
  thunk_FUN_1803d64e0(lVar12);
LAB_1800a41be:
  DAT_180cd02b8 = lVar10;
  DAT_180cd02c0 = lVar10 + uVar1 * 0x28;
  DAT_180cd02c8 = uVar16 * 0x28 + lVar10;
  return lVar3;
}



/* ===== 1800a4210 FUN_1800a4210 ===== */

void FUN_1800a4210(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar2 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  uVar1 = *(undefined8 *)(lVar2 + 0x40);
  FUN_18047f6f0(uVar1,0xffffd8f0,*(undefined4 *)(lVar2 + 0x140));
  FUN_18047f4f0(uVar1,(double)*param_3);
  FUN_18047f4f0(uVar1,(double)param_3[1]);
  FUN_18047f4f0(uVar1,(double)param_3[2]);
  FUN_18047e730(uVar1,3,1);
  FUN_18047f8e0(param_1,0xfffffffe,param_2);
  return;
}



/* ===== 1800a42d0 FUN_1800a42d0 ===== */

undefined8 FUN_1800a42d0(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  plVar4 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar2 = *plVar4;
  if (((lVar2 == 0) || (lVar2 != DAT_180ccfa10)) &&
     (FUN_180484c10(param_1,"a command is only valid inside its createmove callback"), lVar2 == 0))
  {
    FUN_18047e8f0(param_1,0,0);
    return 1;
  }
  lVar2 = *(longlong *)(lVar2 + 0x40);
  if ((lVar2 - 0x10000U < 0x7ffffffeffff) &&
     (*(longlong *)(lVar2 + 0x40) - 0x10000U < 0x7ffffffeffff)) {
    FUN_18047e8f0(param_1,0,0);
    if ((lVar2 != 0) && (*(int **)(lVar2 + 0x28) + -0x4000 < (int *)0x7ffffffeffff)) {
      iVar5 = **(int **)(lVar2 + 0x28);
      iVar7 = 1;
      iVar6 = *(int *)(lVar2 + 0x20);
      if (iVar5 < *(int *)(lVar2 + 0x20)) {
        iVar6 = iVar5;
      }
      iVar5 = 0;
      if (0 < iVar6) {
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x28) + 8 + (longlong)iVar5 * 8);
          if (lVar3 - 0x10000U < 0x7ffffffeffff) {
            uVar1 = *(uint *)(lVar3 + 0x10);
            FUN_18047e8f0(param_1,0,8);
            FUN_18047f4f0(param_1,(double)(iVar5 + 1));
            FUN_18047f8e0(param_1,0xfffffffe,"index");
            if ((uVar1 & 4) == 0) {
              fVar8 = 0.0;
            }
            else {
              fVar8 = *(float *)(lVar3 + 0x24);
            }
            FUN_18047f4f0(param_1,(double)fVar8);
            FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e7348);
            if ((uVar1 & 1) != 0) {
              FUN_18047f4f0(param_1,(double)*(ulonglong *)(lVar3 + 0x18));
              FUN_18047f8e0(param_1,0xfffffffe,"button");
            }
            if ((uVar1 & 2) != 0) {
              FUN_18047f270(param_1,*(undefined1 *)(lVar3 + 0x20));
              FUN_18047f8e0(param_1,0xfffffffe,"pressed");
            }
            if ((uVar1 & 8) != 0) {
              FUN_18047f4f0(param_1,(double)*(float *)(lVar3 + 0x28));
              FUN_18047f8e0(param_1,0xfffffffe,"forward");
            }
            if ((uVar1 & 0x10) != 0) {
              FUN_18047f4f0(param_1,(double)*(float *)(lVar3 + 0x2c));
              FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806dfd6c);
            }
            if ((uVar1 & 0x20) != 0) {
              FUN_18047f4f0(param_1,(double)*(float *)(lVar3 + 0x30));
              FUN_18047f8e0(param_1,0xfffffffe,"pitch");
            }
            if ((uVar1 & 0x40) != 0) {
              FUN_18047f4f0(param_1,(double)*(float *)(lVar3 + 0x34));
              FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e7350);
            }
            FUN_18047f270(param_1,uVar1 & 1);
            FUN_18047f8e0(param_1,0xfffffffe,"is_button");
            FUN_18047f7e0(param_1,0xfffffffe,iVar7);
            iVar7 = iVar7 + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
      return 1;
    }
  }
  else {
    FUN_18047e8f0(param_1,0,0);
  }
  return 1;
}



/* ===== 1800a4600 FUN_1800a4600 ===== */

undefined8 FUN_1800a4600(undefined8 param_1)

{
  float fVar1;
  double dVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res10 [6];
  
  plVar5 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar8 = *plVar5;
  if ((lVar8 == 0) || (lVar8 != DAT_180ccfa10)) {
    FUN_180484c10(param_1,"a command is only valid inside its createmove callback");
  }
  FUN_18047e240(param_1,2,5);
  if (((lVar8 == 0) || (lVar8 = *(longlong *)(lVar8 + 0x40), 0x7ffffffefffe < lVar8 - 0x10000U)) ||
     (0x7ffffffefffe < *(longlong *)(lVar8 + 0x40) - 0x10000U)) {
    FUN_18047f270(param_1,0);
    return 1;
  }
  local_res10[4] = 1.0;
  fVar11 = 0.0;
  local_res10[0] = 0.0;
  FUN_18047eb70(param_1,2,&DAT_1806e7348);
  iVar4 = FUN_18047edb0(param_1,0xffffffff);
  if (iVar4 == 0) {
    local_res10[2] = 0.0;
  }
  else {
    dVar2 = (double)FUN_18047fd30(param_1,0xffffffff);
    local_res10[2] = (float)dVar2;
  }
  FUN_18047fb50(param_1,0xfffffffe);
  pfVar9 = local_res10;
  if (0.0 <= local_res10[2]) {
    pfVar9 = local_res10 + 2;
  }
  pfVar6 = local_res10 + 4;
  if (local_res10[2] <= DAT_1808ac34c) {
    pfVar6 = pfVar9;
  }
  fVar1 = *pfVar6;
  FUN_18047eb70(param_1,2,"button");
  iVar4 = FUN_18047fe10(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  if (iVar4 == 0) {
    FUN_18047eb70(param_1,2,&DAT_1806e7350);
    iVar4 = FUN_18047edb0(param_1,0xffffffff);
    if (iVar4 == 0) {
      fVar13 = 0.0;
    }
    else {
      dVar2 = (double)FUN_18047fd30(param_1,0xffffffff);
      fVar13 = (float)dVar2;
    }
    FUN_18047fb50(param_1,0xfffffffe);
    FUN_18047eb70(param_1,2,&DAT_1806dfd6c);
    iVar4 = FUN_18047edb0(param_1,0xffffffff);
    if (iVar4 == 0) {
      fVar12 = 0.0;
    }
    else {
      dVar2 = (double)FUN_18047fd30(param_1,0xffffffff);
      fVar12 = (float)dVar2;
    }
    FUN_18047fb50(param_1,0xfffffffe);
    FUN_18047eb70(param_1,2,"forward");
    iVar4 = FUN_18047edb0(param_1,0xffffffff);
    if (iVar4 != 0) {
      dVar2 = (double)FUN_18047fd30(param_1,0xffffffff);
      fVar11 = (float)dVar2;
    }
    FUN_18047fb50(param_1,0xfffffffe);
    lVar8 = FUN_180265420(lVar8);
    uVar3 = lVar8 != 0;
    if ((bool)uVar3) {
      *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 0x7f;
      *(float *)(lVar8 + 0x24) = fVar1;
      *(float *)(lVar8 + 0x28) = fVar11;
      *(float *)(lVar8 + 0x2c) = fVar12;
      *(float *)(lVar8 + 0x34) = fVar13;
    }
  }
  else {
    FUN_18047eb70(param_1,2,"button");
    iVar4 = FUN_18047edb0(param_1,0xffffffff);
    if (iVar4 != 0) {
      dVar2 = (double)FUN_18047fd30(param_1,0xffffffff);
      fVar11 = (float)dVar2;
    }
    FUN_18047fb50(param_1,0xfffffffe);
    lVar7 = 0;
    if ((DAT_1808acd00 <= fVar11) && (fVar11 = fVar11 - DAT_1808acd00, fVar11 < DAT_1808acd00)) {
      lVar7 = -0x8000000000000000;
    }
    FUN_18047eb70(param_1,2,"pressed");
    iVar4 = FUN_18047fe10(param_1,0xffffffff);
    if (iVar4 == 0) {
      bVar10 = true;
    }
    else {
      iVar4 = FUN_18047fbf0(param_1,0xffffffff);
      bVar10 = iVar4 != 0;
    }
    FUN_18047fb50(param_1,0xfffffffe);
    uVar3 = FUN_1801ec510(lVar8,(longlong)fVar11 + lVar7,bVar10,fVar1);
  }
  FUN_18047f270(param_1,uVar3);
  return 1;
}



/* ===== 1800a49b0 FUN_1800a49b0 ===== */

undefined8 FUN_1800a49b0(undefined8 param_1)

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
    *(undefined4 *)(lVar1 + 0x20) = 0;
  }
  return 0;
}



/* ===== 1800a4a30 FUN_1800a4a30 ===== */

undefined8 FUN_1800a4a30(undefined8 param_1)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 uVar8;
  float *pfVar9;
  ulonglong uVar10;
  double dVar11;
  float local_res10 [6];
  
  plVar5 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar2 = *plVar5;
  if ((lVar2 == 0) || (lVar2 != DAT_180ccfa10)) {
    FUN_180484c10(param_1,"a command is only valid inside its createmove callback");
  }
  dVar11 = (double)FUN_18047e140(param_1,2);
  lVar6 = 0;
  if ((DAT_1808acbe8 <= dVar11) && (dVar11 = dVar11 - DAT_1808acbe8, dVar11 < DAT_1808acbe8)) {
    lVar6 = -0x8000000000000000;
  }
  local_res10[4] = 1.0;
  local_res10[0] = 0.0;
  uVar10 = (longlong)dVar11 + lVar6;
  dVar11 = (double)FUN_18047e5f0(param_1,3,0);
  local_res10[2] = (float)dVar11;
  pfVar7 = local_res10;
  if (0.0 <= local_res10[2]) {
    pfVar7 = local_res10 + 2;
  }
  pfVar9 = local_res10 + 4;
  if (local_res10[2] <= DAT_1808ac34c) {
    pfVar9 = pfVar7;
  }
  iVar3 = FUN_18047fbf0(param_1,4);
  if (iVar3 == 0) {
    if (lVar2 != 0) {
      *(ulonglong *)(lVar2 + 0x70) = *(ulonglong *)(lVar2 + 0x70) | uVar10;
      *(ulonglong *)(lVar2 + 0x60) = *(ulonglong *)(lVar2 + 0x60) | uVar10;
      *(ulonglong *)(lVar2 + 0x68) = *(ulonglong *)(lVar2 + 0x68) | uVar10;
LAB_1800a4b41:
      lVar2 = *(longlong *)(lVar2 + 0x40);
      if ((lVar2 - 0x10000U < 0x7ffffffeffff) &&
         (*(longlong *)(lVar2 + 0x40) - 0x10000U < 0x7ffffffeffff)) {
        fVar1 = *pfVar9;
        lVar6 = FUN_180265420(lVar2);
        if (lVar6 != 0) {
          *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 7;
          uVar8 = 1;
          *(float *)(lVar6 + 0x24) = fVar1;
          *(ulonglong *)(lVar6 + 0x18) = uVar10;
          *(undefined1 *)(lVar6 + 0x20) = 1;
          goto LAB_1800a4bc8;
        }
        DAT_181115098 = DAT_181115098 + 1;
        if (0x40 < (int)DAT_181115098) {
          uVar4 = DAT_181115098 & 0x8000003f;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
          }
          if (uVar4 != 0) goto LAB_1800a4bc6;
        }
        FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",uVar10,"press",
                      (double)fVar1,*(undefined4 *)(lVar2 + 0x20));
      }
    }
  }
  else if (lVar2 != 0) goto LAB_1800a4b41;
LAB_1800a4bc6:
  uVar8 = 0;
LAB_1800a4bc8:
  FUN_18047f270(param_1,uVar8);
  return 1;
}



/* ===== 1800a4c00 FUN_1800a4c00 ===== */

undefined8 FUN_1800a4c00(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  uint uVar6;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar1 = *plVar2;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa10)) {
    FUN_180484c10(param_1,"a command is only valid inside its createmove callback");
  }
  dVar5 = (double)FUN_18047e140(param_1,2);
  if (lVar1 != 0) {
    lVar3 = 0;
    if ((DAT_1808acbe8 <= dVar5) && (dVar5 = dVar5 - DAT_1808acbe8, dVar5 < DAT_1808acbe8)) {
      lVar3 = -0x8000000000000000;
    }
    uVar4 = ~((longlong)dVar5 + lVar3);
    *(ulonglong *)(lVar1 + 0x70) = *(ulonglong *)(lVar1 + 0x70) & uVar4;
    uVar6 = (uint)(uVar4 >> 0x20);
    *(uint *)(lVar1 + 0x60) = *(uint *)(lVar1 + 0x60) & (uint)uVar4;
    *(uint *)(lVar1 + 100) = *(uint *)(lVar1 + 100) & uVar6;
    *(uint *)(lVar1 + 0x68) = *(uint *)(lVar1 + 0x68) & (uint)uVar4;
    *(uint *)(lVar1 + 0x6c) = *(uint *)(lVar1 + 0x6c) & uVar6;
    if ((*(longlong *)(lVar1 + 0x40) - 0x10000U < 0x7ffffffeffff) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x40) + 0x40) - 0x10000U < 0x7ffffffeffff)) {
      FUN_1801ec5d0();
    }
  }
  return 0;
}



/* ===== 1800a4ce0 FUN_1800a4ce0 ===== */

undefined8 FUN_1800a4ce0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar1 = *plVar2;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa10)) {
    FUN_180484c10(param_1,"a command is only valid inside its createmove callback");
    if (lVar1 != 0) goto LAB_1800a4d23;
  }
  else {
LAB_1800a4d23:
    lVar1 = *(longlong *)(lVar1 + 0x40);
    if ((lVar1 - 0x10000U < 0x7ffffffeffff) &&
       (*(longlong *)(lVar1 + 0x40) - 0x10000U < 0x7ffffffeffff)) {
      fVar3 = *(float *)(lVar1 + 0x60);
      goto LAB_1800a4d56;
    }
  }
  fVar3 = 0.0;
LAB_1800a4d56:
  FUN_18047f4f0(param_1,(double)fVar3);
  return 1;
}



/* ===== 1800a4d80 FUN_1800a4d80 ===== */

undefined8 FUN_1800a4d80(undefined8 param_1)

{
  longlong lVar1;
  float fVar2;
  longlong *plVar3;
  float *pfVar4;
  float *pfVar5;
  double dVar6;
  float local_res10 [6];
  
  plVar3 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar1 = *plVar3;
  if (((lVar1 == 0) || (lVar1 != DAT_180ccfa10)) &&
     (FUN_180484c10(param_1,"a command is only valid inside its createmove callback"), lVar1 == 0))
  {
    return 0;
  }
  fVar2 = DAT_1808acda0;
  lVar1 = *(longlong *)(lVar1 + 0x40);
  if ((lVar1 - 0x10000U < 0x7ffffffeffff) &&
     (*(longlong *)(lVar1 + 0x40) - 0x10000U < 0x7ffffffeffff)) {
    local_res10[4] = 1.0;
    local_res10[0] = -1.0;
    dVar6 = (double)FUN_18047e140(param_1,2);
    local_res10[2] = (float)dVar6;
    pfVar5 = local_res10;
    if (fVar2 <= local_res10[2]) {
      pfVar5 = local_res10 + 2;
    }
    pfVar4 = local_res10 + 4;
    if (local_res10[2] <= DAT_1808ac34c) {
      pfVar4 = pfVar5;
    }
    *(float *)(lVar1 + 0x60) = *pfVar4;
  }
  return 0;
}



/* ===== 1800a4e60 FUN_1800a4e60 ===== */

undefined8 FUN_1800a4e60(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar1 = *plVar2;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa10)) {
    FUN_180484c10(param_1,"a command is only valid inside its createmove callback");
  }
  FUN_18047f270(param_1,*(undefined1 *)(lVar1 + 0x88));
  return 1;
}



/* ===== 1800a4ec0 FUN_1800a4ec0 ===== */

undefined8 FUN_1800a4ec0(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar1 = *plVar3;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa10)) {
    FUN_180484c10(param_1,"a command is only valid inside its createmove callback");
    if (lVar1 != 0) goto LAB_1800a4f03;
  }
  else {
LAB_1800a4f03:
    lVar1 = *(longlong *)(lVar1 + 0x40);
    if ((lVar1 - 0x10000U < 0x7ffffffeffff) &&
       (*(longlong *)(lVar1 + 0x40) - 0x10000U < 0x7ffffffeffff)) {
      iVar2 = *(int *)(lVar1 + 0x54);
      goto LAB_1800a4f33;
    }
  }
  iVar2 = 0;
LAB_1800a4f33:
  FUN_18047f3d0(param_1,(longlong)iVar2);
  return 1;
}



/* ===== 1800a4f50 FUN_1800a4f50 ===== */

undefined8 FUN_1800a4f50(undefined8 param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  plVar3 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar1 = *plVar3;
  if ((((lVar1 == 0) || (lVar1 != DAT_180ccfa10)) && (FUN_180484c10(param_1), lVar1 == 0)) ||
     (lVar1 = *(longlong *)(lVar1 + 0x40), 0x7ffffffefffe < lVar1 - 0x10000U)) {
    fVar7 = 0.0;
    fVar8 = 0.0;
  }
  else {
    fVar8 = 0.0;
    fVar7 = 0.0;
    if ((*(longlong *)(lVar1 + 0x40) - 0x10000U < 0x7ffffffeffff) &&
       (piVar2 = *(int **)(lVar1 + 0x28), piVar2 + -0x4000 < (int *)0x7ffffffeffff)) {
      iVar6 = *(int *)(lVar1 + 0x20);
      if (*piVar2 < *(int *)(lVar1 + 0x20)) {
        iVar6 = *piVar2;
      }
      iVar4 = 0;
      if (iVar6 < 4) {
        if (iVar6 < 1) goto LAB_1800a50fb;
      }
      else {
        do {
          lVar5 = (longlong)iVar4;
          lVar1 = *(longlong *)(piVar2 + lVar5 * 2 + 2);
          if (lVar1 - 0x10000U < 0x7ffffffeffff) {
            if ((*(uint *)(lVar1 + 0x10) & 0x20) != 0) {
              fVar8 = fVar8 + *(float *)(lVar1 + 0x30);
            }
            if ((*(uint *)(lVar1 + 0x10) & 0x40) != 0) {
              fVar7 = fVar7 + *(float *)(lVar1 + 0x34);
            }
          }
          lVar1 = *(longlong *)(piVar2 + lVar5 * 2 + 4);
          if (lVar1 - 0x10000U < 0x7ffffffeffff) {
            if ((*(uint *)(lVar1 + 0x10) & 0x20) != 0) {
              fVar8 = fVar8 + *(float *)(lVar1 + 0x30);
            }
            if ((*(uint *)(lVar1 + 0x10) & 0x40) != 0) {
              fVar7 = fVar7 + *(float *)(lVar1 + 0x34);
            }
          }
          lVar1 = *(longlong *)(piVar2 + lVar5 * 2 + 6);
          if (lVar1 - 0x10000U < 0x7ffffffeffff) {
            if ((*(uint *)(lVar1 + 0x10) & 0x20) != 0) {
              fVar8 = fVar8 + *(float *)(lVar1 + 0x30);
            }
            if ((*(uint *)(lVar1 + 0x10) & 0x40) != 0) {
              fVar7 = fVar7 + *(float *)(lVar1 + 0x34);
            }
          }
          lVar1 = *(longlong *)(piVar2 + lVar5 * 2 + 8);
          if (lVar1 - 0x10000U < 0x7ffffffeffff) {
            if ((*(uint *)(lVar1 + 0x10) & 0x20) != 0) {
              fVar8 = fVar8 + *(float *)(lVar1 + 0x30);
            }
            if ((*(uint *)(lVar1 + 0x10) & 0x40) != 0) {
              fVar7 = fVar7 + *(float *)(lVar1 + 0x34);
            }
          }
          iVar4 = iVar4 + 4;
        } while (iVar4 < iVar6 + -3);
        if (iVar6 <= iVar4) goto LAB_1800a50fb;
      }
      do {
        lVar1 = *(longlong *)(piVar2 + (longlong)iVar4 * 2 + 2);
        if (lVar1 - 0x10000U < 0x7ffffffeffff) {
          if ((*(uint *)(lVar1 + 0x10) & 0x20) != 0) {
            fVar8 = fVar8 + *(float *)(lVar1 + 0x30);
          }
          if ((*(uint *)(lVar1 + 0x10) & 0x40) != 0) {
            fVar7 = fVar7 + *(float *)(lVar1 + 0x34);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
  }
LAB_1800a50fb:
  FUN_18047f4f0(param_1,(double)fVar7);
  FUN_18047f4f0(param_1,(double)fVar8);
  return 2;
}



/* ===== 1800a5130 FUN_1800a5130 ===== */

undefined8 FUN_1800a5130(undefined8 param_1)

{
  undefined1 *puVar1;
  
  FUN_18047e8f0(param_1,0,10);
  FUN_18047f270(param_1,DAT_1809ee590);
  FUN_18047f8e0(param_1,0xfffffffe,"valid");
  puVar1 = &DAT_18058b643;
  if (PTR_DAT_1809ee5c8 != (undefined *)0x0) {
    puVar1 = PTR_DAT_1809ee5c8;
  }
  FUN_18047f530(param_1,puVar1);
  FUN_18047f8e0(param_1,0xfffffffe,"status");
  FUN_18047f4f0(param_1,(double)DAT_1809ee594);
  FUN_18047f8e0(param_1,0xfffffffe,"flags");
  FUN_18047f270(param_1,DAT_1809ee594 & 1);
  FUN_18047f8e0(param_1,0xfffffffe,"on_ground");
  FUN_18047f4f0(param_1,(double)DAT_1809ee598);
  FUN_18047f8e0(param_1,0xfffffffe,"move_type");
  FUN_18047f4f0(param_1,(double)DAT_1809ee59c);
  FUN_18047f8e0(param_1,0xfffffffe,"landed_frac");
  FUN_18047f270(param_1,DAT_1809ee5a0);
  FUN_18047f8e0(param_1,0xfffffffe,"landed");
  FUN_18047f4f0(param_1,(double)DAT_1809ee5a8);
  FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e739c);
  FUN_1800a4210(param_1,"origin",&DAT_1809ee5ac);
  FUN_1800a4210(param_1,"velocity",&DAT_1809ee5b8);
  return 1;
}



/* ===== 1800a52c0 FUN_1800a52c0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800a52c0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_18a8 [32];
  char local_1888;
  undefined1 local_1887 [7];
  undefined8 local_1880;
  uint local_1878;
  uint local_1874 [3];
  undefined **local_1868;
  undefined1 *local_1860;
  char *local_1858;
  undefined8 *local_1850;
  undefined8 local_1848;
  undefined ***local_1830;
  undefined1 local_1828 [4];
  uint uStack_1824;
  byte abStack_1820 [4];
  undefined1 local_181c [12];
  undefined1 local_1810 [12];
  undefined1 auStack_1804 [4];
  float afStack_1800 [1526];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x1800a52e0;
  local_28 = DAT_180919500 ^ (ulonglong)auStack_18a8;
  local_1880 = param_1;
  if (DAT_180ccfa1c < 1) {
    FUN_180484c10(param_1,"%s works only in createmove, frame_stage and game event callbacks",
                  "engine.simulate");
  }
  lVar5 = DAT_180ccfa10;
  if (DAT_180ccfa10 == 0) {
    uVar2 = FUN_180484c10(local_1880,"engine.simulate works only inside createmove");
  }
  else {
    local_1878 = 1;
    local_1874[0] = FUN_18047e010(local_1880,1);
    puVar4 = &local_1878;
    if (0 < (int)local_1874[0]) {
      puVar4 = local_1874;
    }
    if (0x40 < (int)local_1874[0]) {
      puVar4 = &DAT_1805981c8;
    }
    uVar6 = *puVar4;
    iVar1 = FUN_18047fe10(local_1880,2);
    local_1887[0] = 0 < iVar1;
    if (0 < iVar1) {
      FUN_18047e240(local_1880,2,6);
    }
    uVar2 = local_1880;
    FUN_18047eb70(local_1880,0xffffd8f0,"wl_state");
    uVar3 = FUN_18047fd90(uVar2,0xffffffff);
    FUN_18047fb50(uVar2,0xfffffffe);
    FUN_180540170(local_1828,0,0x1800);
    FUN_1800a7ea0(local_1828);
    local_1888 = '\0';
    local_1868 = std::
                 _Func_impl_no_alloc<`int___cdecl_lua_runtime::detail::_anon_B27E2512::engine_simulate(lua_State*___ptr64)'::`2'::<lambda_1>,bool,int,prediction::sim_input&___ptr64>
                 ::vftable;
    local_1860 = local_1887;
    local_1858 = &local_1888;
    local_1850 = &local_1880;
    local_1830 = &local_1868;
    local_1848 = uVar3;
    iVar1 = FUN_1801d95d0(lVar5,uVar6,&local_1868,local_1828);
    if (local_1830 != (undefined ***)0x0) {
      (*(code *)(*local_1830)[4])(local_1830,local_1830 != &local_1868);
    }
    if (local_1888 == '\0') {
      FUN_18047e8f0(local_1880,iVar1,0);
      uVar7 = 0;
      if (0 < iVar1) {
        do {
          uVar2 = local_1880;
          lVar5 = uVar7 * 0x60;
          FUN_18047e8f0(local_1880,0,10);
          FUN_18047f270(uVar2,local_1828[lVar5]);
          FUN_18047f8e0(uVar2,0xfffffffe,"valid");
          FUN_18047f4f0(uVar2,(double)*(uint *)(local_1828 + lVar5 + 4));
          FUN_18047f8e0(uVar2,0xfffffffe,"flags");
          FUN_18047f270(uVar2,*(uint *)(local_1828 + lVar5 + 4) & 1);
          FUN_18047f8e0(uVar2,0xfffffffe,"on_ground");
          FUN_18047f4f0(uVar2,(double)abStack_1820[lVar5]);
          FUN_18047f8e0(uVar2,0xfffffffe,"move_type");
          FUN_1800a4210(uVar2,"origin",local_181c + lVar5);
          FUN_1800a4210(uVar2,"velocity",local_1810 + lVar5);
          FUN_18047f270(uVar2,auStack_1804[lVar5]);
          FUN_18047f8e0(uVar2,0xfffffffe,"jumped");
          FUN_18047f270(uVar2,auStack_1804[lVar5 + 1]);
          FUN_18047f8e0(uVar2,0xfffffffe,"landed");
          FUN_18047f4f0(uVar2,(double)afStack_1800[uVar7 * 0x18]);
          FUN_18047f8e0(uVar2,0xfffffffe,"landed_frac");
          FUN_18047f4f0(uVar2,(double)afStack_1800[uVar7 * 0x18 + 1]);
          FUN_18047f8e0(uVar2,0xfffffffe,&DAT_1806e14ec);
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          FUN_18047f7e0(local_1880,0xfffffffe,uVar7);
        } while ((int)uVar6 < iVar1);
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== 1800a5650 FUN_1800a5650 ===== */

ulonglong FUN_1800a5650(undefined8 *param_1,int param_2,ulonglong *param_3)

{
  undefined8 uVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  float *pfVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  float *pfVar13;
  bool bVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  byte local_res8;
  float local_res20 [2];
  float local_98 [2];
  int local_90;
  undefined2 local_7f;
  undefined1 local_7d;
  
  pcVar9 = (char *)*param_1;
  if ((*pcVar9 == '\0') || (pcVar9 = (char *)param_1[1], *pcVar9 != '\0')) {
    return CONCAT71((int7)((ulonglong)pcVar9 >> 8),1);
  }
  FUN_18047e8f0(*(undefined8 *)param_1[2],0,6);
  iVar4 = FUN_18047ed40(*(undefined8 *)param_1[2]);
  uVar1 = *(undefined8 *)param_1[2];
  local_90 = iVar4;
  FUN_18047f4f0(uVar1,(double)*param_3);
  FUN_18047f8e0(uVar1,0xfffffffe,"buttons");
  uVar1 = *(undefined8 *)param_1[2];
  FUN_18047f4f0(uVar1,(double)*(float *)(param_3 + 1));
  FUN_18047f8e0(uVar1,0xfffffffe,"forward");
  uVar1 = *(undefined8 *)param_1[2];
  FUN_18047f4f0(uVar1,(double)*(float *)((longlong)param_3 + 0xc));
  FUN_18047f8e0(uVar1,0xfffffffe,&DAT_1806dfd6c);
  uVar1 = *(undefined8 *)param_1[2];
  FUN_18047f4f0(uVar1,(double)*(float *)(param_3 + 2));
  FUN_18047f8e0(uVar1,0xfffffffe,"pitch");
  uVar1 = *(undefined8 *)param_1[2];
  FUN_18047f4f0(uVar1,(double)*(float *)((longlong)param_3 + 0x14));
  FUN_18047f8e0(uVar1,0xfffffffe,&DAT_1806e7350);
  FUN_18047f610(*(undefined8 *)param_1[2],2);
  FUN_18047f3d0(*(undefined8 *)param_1[2],(longlong)param_2);
  FUN_18047f610(*(undefined8 *)param_1[2],iVar4);
  iVar12 = 1;
  cVar3 = FUN_180070500(param_1[3],2,1);
  if (cVar3 == '\0') {
    *(undefined1 *)param_1[1] = 1;
    uVar7 = FUN_18047fb50(*(undefined8 *)param_1[2],iVar4 + -1);
    return uVar7 & 0xffffffffffffff00;
  }
  iVar5 = FUN_18047fe10(*(undefined8 *)param_1[2],0xffffffff);
  if (iVar5 != 0) {
    iVar5 = FUN_18047fbf0(*(undefined8 *)param_1[2],0xffffffff);
    local_res8 = 0;
    if (iVar5 == 0) goto LAB_1800a586d;
  }
  local_res8 = 1;
LAB_1800a586d:
  FUN_18047fb50(*(undefined8 *)param_1[2],0xfffffffe);
  uVar7 = *param_3;
  uVar1 = *(undefined8 *)param_1[2];
  FUN_18047eb70(uVar1,iVar4,"buttons");
  iVar5 = FUN_18047edb0(uVar1,0xffffffff);
  if (iVar5 == 0) {
    if ((longlong)uVar7 < 0) {
      fVar16 = (float)uVar7;
    }
    else {
      fVar16 = (float)(longlong)uVar7;
    }
  }
  else {
    dVar15 = (double)FUN_18047fd30(uVar1,0xffffffff);
    fVar16 = (float)dVar15;
  }
  FUN_18047fb50(uVar1,0xfffffffe);
  fVar2 = DAT_1808acd00;
  lVar10 = 0;
  if ((DAT_1808acd00 <= fVar16) && (fVar16 = fVar16 - DAT_1808acd00, fVar16 < DAT_1808acd00)) {
    lVar10 = -0x8000000000000000;
  }
  fVar17 = *(float *)(param_3 + 1);
  *param_3 = (longlong)fVar16 + lVar10;
  uVar1 = *(undefined8 *)param_1[2];
  FUN_18047eb70(uVar1,iVar4,"forward");
  iVar5 = FUN_18047edb0(uVar1,0xffffffff);
  if (iVar5 != 0) {
    dVar15 = (double)FUN_18047fd30(uVar1,0xffffffff);
    fVar17 = (float)dVar15;
  }
  FUN_18047fb50(uVar1,0xfffffffe);
  *(float *)(param_3 + 1) = fVar17;
  fVar16 = *(float *)((longlong)param_3 + 0xc);
  uVar1 = *(undefined8 *)param_1[2];
  FUN_18047eb70(uVar1,iVar4,&DAT_1806dfd6c);
  iVar5 = FUN_18047edb0(uVar1,0xffffffff);
  if (iVar5 != 0) {
    dVar15 = (double)FUN_18047fd30(uVar1,0xffffffff);
    fVar16 = (float)dVar15;
  }
  FUN_18047fb50(uVar1,0xfffffffe);
  *(float *)((longlong)param_3 + 0xc) = fVar16;
  fVar16 = *(float *)(param_3 + 2);
  uVar1 = *(undefined8 *)param_1[2];
  FUN_18047eb70(uVar1,iVar4,"pitch");
  iVar5 = FUN_18047edb0(uVar1,0xffffffff);
  if (iVar5 != 0) {
    dVar15 = (double)FUN_18047fd30(uVar1,0xffffffff);
    fVar16 = (float)dVar15;
  }
  FUN_18047fb50(uVar1,0xfffffffe);
  *(float *)(param_3 + 2) = fVar16;
  fVar16 = *(float *)((longlong)param_3 + 0x14);
  uVar1 = *(undefined8 *)param_1[2];
  FUN_18047eb70(uVar1,iVar4,&DAT_1806e7350);
  iVar5 = FUN_18047edb0(uVar1,0xffffffff);
  if (iVar5 != 0) {
    dVar15 = (double)FUN_18047fd30(uVar1,0xffffffff);
    fVar16 = (float)dVar15;
  }
  FUN_18047fb50(uVar1,0xfffffffe);
  *(float *)((longlong)param_3 + 0x14) = fVar16;
  FUN_18047eb70(*(undefined8 *)param_1[2],iVar4,"events");
  iVar5 = FUN_18047fe10(*(undefined8 *)param_1[2],0xffffffff);
  if (iVar5 == 5) {
    iVar5 = FUN_18047f0e0(*(undefined8 *)param_1[2],0xffffffff);
    fVar16 = DAT_1808ac34c;
    if (0 < iVar5) {
      do {
        if (7 < (int)param_3[0x14]) break;
        FUN_18047f6f0(*(undefined8 *)param_1[2],0xffffffff,iVar12);
        iVar4 = FUN_18047fe10(*(undefined8 *)param_1[2],0xffffffff);
        if (iVar4 == 5) {
          local_98[1] = 1.0;
          local_res20[0] = 0.0;
          uVar6 = FUN_18047ed40(*(undefined8 *)param_1[2]);
          uVar1 = *(undefined8 *)param_1[2];
          FUN_18047eb70(uVar1,uVar6,&DAT_1806e7348);
          iVar4 = FUN_18047edb0(uVar1,0xffffffff);
          if (iVar4 == 0) {
            fVar17 = 0.0;
          }
          else {
            dVar15 = (double)FUN_18047fd30(uVar1,0xffffffff);
            fVar17 = (float)dVar15;
          }
          FUN_18047fb50(uVar1,0xfffffffe);
          pfVar8 = local_res20;
          if (0.0 <= fVar17) {
            pfVar8 = local_98;
          }
          pfVar13 = local_98 + 1;
          if (fVar17 <= fVar16) {
            pfVar13 = pfVar8;
          }
          local_98[0] = fVar17;
          uVar6 = FUN_18047ed40(*(undefined8 *)param_1[2]);
          uVar1 = *(undefined8 *)param_1[2];
          FUN_18047eb70(uVar1,uVar6,"pressed");
          iVar4 = FUN_18047fe10(uVar1,0xffffffff);
          if (iVar4 == 0) {
            bVar14 = true;
          }
          else {
            iVar4 = FUN_18047fbf0(uVar1,0xffffffff);
            bVar14 = iVar4 != 0;
          }
          FUN_18047fb50(uVar1,0xfffffffe);
          uVar6 = FUN_18047ed40(*(undefined8 *)param_1[2]);
          uVar1 = *(undefined8 *)param_1[2];
          FUN_18047eb70(uVar1,uVar6,"button");
          iVar4 = FUN_18047edb0(uVar1,0xffffffff);
          if (iVar4 == 0) {
            fVar17 = 0.0;
          }
          else {
            dVar15 = (double)FUN_18047fd30(uVar1,0xffffffff);
            fVar17 = (float)dVar15;
          }
          FUN_18047fb50(uVar1);
          lVar10 = (longlong)(int)param_3[0x14];
          if ((int)param_3[0x14] < 8) {
            lVar11 = 0;
            if ((fVar2 <= fVar17) && (fVar17 = fVar17 - fVar2, fVar17 < fVar2)) {
              lVar11 = -0x8000000000000000;
            }
            param_3[lVar10 * 2 + 4] = (longlong)fVar17 + lVar11;
            *(bool *)(param_3 + lVar10 * 2 + 5) = bVar14;
            *(undefined2 *)((longlong)param_3 + lVar10 * 0x10 + 0x29) = local_7f;
            fVar17 = *pfVar13;
            *(undefined1 *)((longlong)param_3 + lVar10 * 0x10 + 0x2b) = local_7d;
            *(float *)((longlong)param_3 + lVar10 * 0x10 + 0x2c) = fVar17;
            *(int *)(param_3 + 0x14) = (int)param_3[0x14] + 1;
          }
        }
        FUN_18047fb50(*(undefined8 *)param_1[2],0xfffffffe);
        iVar12 = iVar12 + 1;
      } while (iVar12 <= iVar5);
      iVar4 = local_90;
    }
  }
  FUN_18047fb50(*(undefined8 *)param_1[2],0xfffffffe);
  FUN_18047fb50(*(undefined8 *)param_1[2],iVar4 + -1);
  return (ulonglong)local_res8;
}



/* ===== 1800a5d60 FUN_1800a5d60 ===== */

void FUN_1800a5d60(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}



/* ===== 1800a5d90 FUN_1800a5d90 ===== */

undefined8 FUN_1800a5d90(undefined8 param_1)

{
  float fVar1;
  longlong local_res10 [3];
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res10);
    DAT_181108a00 = local_res10[0];
    DAT_1811089f8 = FUN_1803a0c50(local_res10);
    DAT_180cd1304 = '\x01';
  }
  local_res10[0] = DAT_1811089f8;
  if (DAT_1811089f8 == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)FUN_1801ec340(local_res10);
  }
  FUN_18047f4f0(param_1,(double)fVar1);
  return 1;
}



/* ===== 1800a5e10 FUN_1800a5e10 ===== */

undefined8 FUN_1800a5e10(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  float *pfVar6;
  undefined1 local_48 [64];
  
  if ((DAT_180962170 != 0) && (DAT_180961a38 != 0)) {
    lVar5 = FUN_180264580();
    if ((lVar5 != 0) && (lVar5 - 0x10000U < 0x7ffffffeffff)) {
      pfVar6 = (float *)FUN_1800111b0(local_48,lVar5);
      fVar1 = *pfVar6;
      fVar2 = pfVar6[1];
      fVar3 = pfVar6[2];
      FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
      lVar5 = FUN_18047fd90(param_1,0xffffffff);
      FUN_18047fb50(param_1,0xfffffffe);
      uVar4 = *(undefined8 *)(lVar5 + 0x40);
      FUN_18047f6f0(uVar4,0xffffd8f0,*(undefined4 *)(lVar5 + 0x140));
      FUN_18047f4f0(uVar4,(double)fVar1);
      FUN_18047f4f0(uVar4,(double)fVar2);
      FUN_18047f4f0(uVar4,(double)fVar3);
      FUN_18047e730(uVar4,3,1);
      return 1;
    }
  }
  return 0;
}



/* ===== 1800a5f40 FUN_1800a5f40 ===== */

undefined8 * FUN_1800a5f40(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  double dVar5;
  float fVar6;
  undefined1 local_28 [32];
  
  param_1[1] = 0x1c3003;
  *param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 2) = 0x704;
  iVar1 = FUN_18047fe10(param_2,param_3);
  if (0 < iVar1) {
    iVar1 = FUN_18047ee30(param_2,param_3);
    if (iVar1 != 0) {
      puVar3 = (undefined8 *)FUN_18047e2c0(param_2,param_3,"wl.entity");
      *param_1 = *puVar3;
      return param_1;
    }
    FUN_18047e240(param_2,param_3,5);
    FUN_18047eb70(param_2,param_3,&DAT_1806e73f0);
    iVar1 = FUN_18047fe10(param_2,0xffffffff);
    if (iVar1 != 0) {
      uVar2 = FUN_18047ed40(param_2);
      puVar3 = (undefined8 *)FUN_18047e2c0(param_2,uVar2,"wl.entity");
      *param_1 = *puVar3;
    }
    FUN_18047fb50(param_2,0xfffffffe);
    FUN_18047eb70(param_2,param_3,&DAT_1806e73e8);
    iVar1 = FUN_18047fe10(param_2,0xffffffff);
    FUN_18047fb50(param_2,0xfffffffe);
    if (iVar1 != 0) {
      FUN_18047eb70(param_2,param_3,&DAT_1806e73e8);
      iVar1 = FUN_18047edb0(param_2,0xffffffff);
      if (iVar1 == 0) {
        fVar6 = DAT_1808acce0;
      }
      else {
        dVar5 = (double)FUN_18047fd30(param_2,0xffffffff);
        fVar6 = (float)dVar5;
      }
      FUN_18047fb50(param_2,0xfffffffe);
      lVar4 = 0;
      if ((DAT_1808acd00 <= fVar6) && (fVar6 = fVar6 - DAT_1808acd00, fVar6 < DAT_1808acd00)) {
        lVar4 = -0x8000000000000000;
      }
      *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
      param_1[1] = (longlong)fVar6 + lVar4;
    }
    FUN_18047eb70(param_2,param_3,"layer");
    iVar1 = FUN_18047fe10(param_2,0xffffffff);
    FUN_18047fb50(param_2,0xfffffffe);
    if (iVar1 != 0) {
      FUN_18047eb70(param_2,param_3,"layer");
      iVar1 = FUN_18047edb0(param_2,0xffffffff);
      if (iVar1 == 0) {
        fVar6 = DAT_1808ac710;
      }
      else {
        dVar5 = (double)FUN_18047fd30(param_2,0xffffffff);
        fVar6 = (float)dVar5;
      }
      FUN_18047fb50(param_2,0xfffffffe);
      *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
      *(char *)(param_1 + 2) = (char)(int)fVar6;
    }
    FUN_18047eb70(param_2,param_3,&DAT_1806e4980);
    iVar1 = FUN_18047fe10(param_2,0xffffffff);
    FUN_18047fb50(param_2,0xfffffffe);
    if (iVar1 != 0) {
      FUN_18047eb70(param_2,param_3,&DAT_1806e4980);
      iVar1 = FUN_18047edb0(param_2,0xffffffff);
      if (iVar1 == 0) {
        fVar6 = DAT_1808ac7ec;
      }
      else {
        dVar5 = (double)FUN_18047fd30(param_2,0xffffffff);
        fVar6 = (float)dVar5;
      }
      FUN_18047fb50(param_2,0xfffffffe);
      *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
      *(char *)((longlong)param_1 + 0x11) = (char)(int)fVar6;
    }
    FUN_18047eb70(param_2,param_3,&DAT_1806e4a3c);
    iVar1 = FUN_18047fe10(param_2,0xffffffff);
    if (iVar1 != 0) {
      uVar2 = FUN_18047ed40(param_2);
      puVar3 = (undefined8 *)FUN_180063d70(local_28,param_2,uVar2);
      *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
      uVar2 = *(undefined4 *)(puVar3 + 1);
      *(undefined8 *)((longlong)param_1 + 0x14) = *puVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    FUN_18047fb50(param_2,0xfffffffe);
    FUN_18047eb70(param_2,param_3,&DAT_1806e4a44);
    iVar1 = FUN_18047fe10(param_2,0xffffffff);
    if (iVar1 != 0) {
      uVar2 = FUN_18047ed40(param_2);
      puVar3 = (undefined8 *)FUN_180063d70(local_28,param_2,uVar2);
      *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
      uVar2 = *(undefined4 *)(puVar3 + 1);
      param_1[4] = *puVar3;
      *(undefined4 *)(param_1 + 5) = uVar2;
    }
    FUN_18047fb50(param_2,0xfffffffe);
  }
  return param_1;
}



/* ===== 1800a62d0 FUN_1800a62d0 ===== */

undefined8 FUN_1800a62d0(undefined8 param_1,float *param_2,char param_3,float *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  FUN_18047e8f0(param_1,0,7);
  if ((param_3 == '\0') || (DAT_1808ac34c < *param_2 || DAT_1808ac34c == *param_2)) {
    FUN_18047f270(param_1,0);
    FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e0924);
    if (param_3 == '\0') {
      FUN_18047f4f0(param_1,DAT_1808ac500);
      FUN_18047f8e0(param_1,0xfffffffe,"fraction");
      goto LAB_1800a63c6;
    }
  }
  else {
    FUN_18047f270(param_1,1);
    FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e0924);
  }
  FUN_18047f4f0(param_1,(double)*param_2);
  FUN_18047f8e0(param_1,0xfffffffe,"fraction");
  param_4 = param_2 + 1;
LAB_1800a63c6:
  FUN_1800a4210(param_1,"position",param_4);
  FUN_1800a4210(param_1,"normal",param_2 + 4);
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 == 0) {
    FUN_18047f4d0();
  }
  else {
    plVar2 = (longlong *)FUN_18047efb0(param_1,8);
    *plVar2 = lVar1;
    FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
    FUN_18047f990(param_1,0xfffffffe);
  }
  FUN_18047f8e0(param_1,0xfffffffe,"entity");
  FUN_18047f270(param_1,*(undefined1 *)((longlong)param_2 + 0x2d));
  FUN_18047f8e0(param_1,0xfffffffe,"start_solid");
  FUN_18047f4f0(param_1,(double)param_2[0xc]);
  FUN_18047f8e0(param_1,0xfffffffe,"friction");
  return 1;
}



/* ===== 1800a64a0 FUN_1800a64a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800a64a0(undefined8 param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  float *pfVar10;
  float fVar11;
  float local_res10 [6];
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  
  if (DAT_180ccfa1c < 1) {
    FUN_180484c10(param_1,"%s works only in createmove, frame_stage and game event callbacks",
                  "trace.line");
  }
  puVar4 = (undefined8 *)FUN_180063d70(&local_b8,param_1,1);
  local_e8 = *puVar4;
  local_e0 = *(float *)(puVar4 + 1);
  puVar4 = (undefined8 *)FUN_180063d70(&local_b8,param_1,2);
  local_d8 = *puVar4;
  local_d0 = *(float *)(puVar4 + 1);
  puVar4 = (undefined8 *)FUN_1800a5f40(&local_78,param_1,3);
  local_88 = *(undefined4 *)(puVar4 + 4);
  uStack_84 = *(undefined4 *)((longlong)puVar4 + 0x24);
  uStack_80 = *(undefined4 *)(puVar4 + 5);
  uStack_7c = *(undefined4 *)((longlong)puVar4 + 0x2c);
  uVar9 = *puVar4;
  uStack_a0 = puVar4[1];
  uVar6 = puVar4[2];
  uStack_90 = puVar4[3];
  local_a8 = uVar9;
  local_98 = uVar6;
  if ((char)uStack_7c != '\0') {
    local_48 = 0x3f800000;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    local_98._1_1_ = (undefined1)((ulonglong)uVar6 >> 8);
    uVar3 = local_98._1_1_;
    local_98._0_1_ = (undefined1)uVar6;
    local_78 = _DAT_1808ad2c0;
    uStack_70 = _UNK_1808ad2c8;
    local_68 = 0;
    uStack_60 = 0;
    uVar1 = (undefined1)local_98;
    uVar3 = FUN_1802aed00(&local_e8,&local_d8,(longlong)&local_98 + 4,&local_88,uVar9,uStack_a0,
                          uVar1,uVar3,&local_78,0);
    uVar9 = FUN_1800a62d0(param_1,&local_78,uVar3,&local_d8);
    return uVar9;
  }
  local_c8 = 0;
  local_c0 = 0.0;
  local_b8 = 0;
  local_b0 = 0;
  cVar2 = FUN_1802aead0(&local_e8,&local_d8,uVar9,&local_c8,&local_b8);
  FUN_18047e8f0(param_1,0,5);
  FUN_18047f270(param_1,cVar2);
  FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e0924);
  fVar11 = (local_d8._4_4_ - local_e8._4_4_) * (local_d8._4_4_ - local_e8._4_4_) +
           ((float)local_d8 - (float)local_e8) * ((float)local_d8 - (float)local_e8) +
           (local_d0 - local_e0) * (local_d0 - local_e0);
  if (fVar11 < 0.0) {
    fVar11 = (float)FUN_18051af10();
  }
  else {
    fVar11 = SQRT(fVar11);
  }
  if ((cVar2 == '\0') || (fVar11 <= 0.0)) {
    fVar11 = DAT_1808ac34c;
  }
  else {
    local_res10[4] = 1.0;
    local_res10[0] = 0.0;
    local_res10[2] =
         (local_c8._4_4_ - local_e8._4_4_) * (local_c8._4_4_ - local_e8._4_4_) +
         ((float)local_c8 - (float)local_e8) * ((float)local_c8 - (float)local_e8) +
         (local_c0 - local_e0) * (local_c0 - local_e0);
    if (local_res10[2] < 0.0) {
      local_res10[2] = (float)FUN_18051af10();
    }
    else {
      local_res10[2] = SQRT(local_res10[2]);
    }
    local_res10[2] = local_res10[2] / fVar11;
    pfVar10 = local_res10;
    if (0.0 <= local_res10[2]) {
      pfVar10 = local_res10 + 2;
    }
    pfVar5 = local_res10 + 4;
    if (local_res10[2] <= DAT_1808ac34c) {
      pfVar5 = pfVar10;
    }
    fVar11 = *pfVar5;
  }
  FUN_18047f4f0(param_1,(double)fVar11);
  FUN_18047f8e0(param_1,0xfffffffe,"fraction");
  puVar4 = &local_c8;
  if (cVar2 == '\0') {
    puVar4 = &local_d8;
  }
  FUN_1800a4210(param_1,"position",puVar4);
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  uVar6 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  FUN_180063cf0(uVar6,&local_b8);
  FUN_18047f8e0(param_1,0xfffffffe,"normal");
  lVar7 = FUN_1802af2c0(&local_e8,&local_d8,uVar9);
  if (lVar7 == 0) {
    FUN_18047f4d0();
  }
  else {
    plVar8 = (longlong *)FUN_18047efb0(param_1,8);
    *plVar8 = lVar7;
    FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
    FUN_18047f990(param_1,0xfffffffe);
  }
  FUN_18047f8e0(param_1,0xfffffffe,"entity");
  return 1;
}



/* ===== 1800a6890 FUN_1800a6890 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800a6890(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [56];
  
  if (DAT_180ccfa1c < 1) {
    FUN_180484c10(param_1,"%s works only in createmove, frame_stage and game event callbacks",
                  "trace.hull");
  }
  puVar2 = (undefined8 *)FUN_180063d70(&local_c8,param_1,1);
  local_98 = *puVar2;
  local_90 = *(undefined4 *)(puVar2 + 1);
  puVar2 = (undefined8 *)FUN_180063d70(&local_c8,param_1,2);
  local_b8 = *puVar2;
  local_b0 = *(undefined4 *)(puVar2 + 1);
  puVar2 = (undefined8 *)FUN_180063d70(&local_a8,param_1,3);
  local_c8 = *puVar2;
  local_c0 = *(undefined4 *)(puVar2 + 1);
  puVar2 = (undefined8 *)FUN_180063d70(local_50,param_1,4);
  local_a8 = *puVar2;
  local_a0 = *(undefined4 *)(puVar2 + 1);
  puVar2 = (undefined8 *)FUN_1800a5f40(local_40,param_1,5);
  local_88 = _DAT_1808ad2c0;
  uStack_80 = _UNK_1808ad2c8;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0x3f800000;
  if (*(char *)((longlong)puVar2 + 0x2c) == '\0') {
    uVar3 = 0x1c1003;
    uVar1 = 4;
    uVar4 = 7;
  }
  else {
    uVar3 = puVar2[1];
    uVar1 = *(undefined1 *)(puVar2 + 2);
    uVar4 = *(undefined1 *)((longlong)puVar2 + 0x11);
  }
  uVar1 = FUN_1802aed00(&local_98,&local_b8,&local_c8,&local_a8,*puVar2,uVar3,uVar1,uVar4,&local_88,
                        0);
  FUN_1800a62d0(param_1,&local_88,uVar1,&local_b8);
  return;
}



/* ===== 1800a6a10 FUN_1800a6a10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800a6a10(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char *_Str1;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_298 [32];
  longlong *local_278;
  undefined4 local_270;
  longlong local_268;
  undefined8 local_260;
  float local_258;
  longlong local_250;
  undefined4 local_248;
  uint local_244;
  undefined8 local_240;
  float local_238;
  undefined8 local_230;
  float local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  uint local_1fc;
  longlong local_1f8;
  float afStack_1f0 [3];
  char acStack_1e4 [364];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_298;
  if (DAT_180ccfa1c < 1) {
    FUN_180484c10(param_1,"%s works only in createmove, frame_stage and game event callbacks",
                  "trace.bullet");
  }
  puVar6 = (undefined8 *)FUN_180063d70(&local_250,param_1,1);
  local_230 = *puVar6;
  local_228 = *(float *)(puVar6 + 1);
  puVar6 = (undefined8 *)FUN_180063d70(&local_250,param_1,2);
  local_240 = *puVar6;
  local_238 = *(float *)(puVar6 + 1);
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_268);
    DAT_181108a00 = local_268;
    DAT_1811089f8 = FUN_1803a0c50(&local_268);
    DAT_180cd1304 = '\x01';
  }
  fVar18 = 0.0;
  local_210 = 0;
  local_220 = 0;
  uStack_218 = 0;
  if (((((DAT_1811089f8 == 0) || (DAT_180961f40 == 0)) || (DAT_180961f48 == 0)) ||
      ((DAT_180961f50 == 0 || (DAT_180961f60 == 0)))) ||
     (((DAT_180961f68 == 0 || ((DAT_180cfee68 == 0 || (DAT_180cfee80 == 0)))) ||
      (DAT_1809619a0 == 0)))) {
LAB_1800a701a:
    return 0;
  }
  local_268 = DAT_1811089f8;
  cVar2 = FUN_1802ae4f0(&local_268,&local_220);
  if (cVar2 == '\0') goto LAB_1800a701a;
  fVar15 = (float)local_240 - (float)local_230;
  fVar16 = local_240._4_4_ - local_230._4_4_;
  fVar17 = local_238 - local_228;
  fVar14 = fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17;
  if (fVar14 < 0.0) {
    fVar14 = (float)FUN_18051af10(fVar14);
  }
  else {
    fVar14 = SQRT(fVar14);
  }
  if (fVar14 <= 0.0) {
    return 0;
  }
  fVar14 = DAT_1808ac34c / fVar14;
  local_208 = 0;
  local_1fc = local_1fc & 0xffffff00;
  local_258 = fVar17 * fVar14;
  local_260 = CONCAT44(fVar16 * fVar14,fVar15 * fVar14);
  local_250 = 0;
  local_244 = local_1fc;
  FUN_180540170(&local_1f8,0,0x180);
  FUN_1802afd60(&local_1f8);
  local_278 = &local_1f8;
  iVar4 = FUN_1802ae180(&local_268,&local_220,&local_230,&local_260);
  cVar2 = '\0';
  uVar11 = 0;
  if (0 < iVar4) {
    uVar12 = (ulonglong)DAT_180961968;
    do {
      if (acStack_1e4[uVar11 * 0x18] == '\0') {
        lVar13 = *(longlong *)(afStack_1f0 + uVar11 * 6 + -2);
        if ((((lVar13 != 0) && (lVar7 = FUN_18000f3a0(lVar13 + uVar12), lVar7 != 0)) &&
            (lVar7 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar7), lVar7 != 0)) &&
           (((lVar7 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar7), lVar7 != 0 &&
             (_Str1 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar7),
             _Str1 + -0x10000 < (char *)0x7ffffffeffff)) &&
            (iVar5 = strcmp(_Str1,"C_CSPlayerPawn"), iVar5 == 0)))) {
          fVar18 = afStack_1f0[uVar11 * 6];
          bVar1 = true;
          goto LAB_1800a6d8b;
        }
      }
      else {
        if (acStack_1e4[uVar11 * 0x18 + 1] != '\0') break;
        cVar2 = '\x01';
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < iVar4);
  }
  bVar1 = false;
  lVar13 = local_250;
  cVar2 = (char)local_244;
LAB_1800a6d8b:
  local_278 = &local_250;
  local_260 = 0;
  local_258 = 0.0;
  local_250 = 0;
  local_248 = 0;
  cVar3 = FUN_1802aead0(&local_230,&local_240,local_268,&local_260);
  FUN_18047e8f0(param_1,0,8);
  if ((!bVar1) || (lVar13 == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  FUN_18047f270(param_1,uVar9);
  FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e0924);
  lVar7 = 0;
  if (bVar1) {
    lVar7 = lVar13;
  }
  if (lVar7 == 0) {
    FUN_18047f4d0();
  }
  else {
    plVar8 = (longlong *)FUN_18047efb0(param_1,8);
    *plVar8 = lVar7;
    FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
    FUN_18047f990(param_1,0xfffffffe);
  }
  FUN_18047f8e0(param_1,0xfffffffe,"entity");
  if (bVar1) {
    FUN_18047f4f0(param_1,(double)fVar18);
    FUN_18047f8e0(param_1,0xfffffffe,"damage");
    if (cVar2 != '\0') {
      uVar9 = 1;
      goto LAB_1800a6ed5;
    }
  }
  else {
    FUN_18047f4f0(param_1,0);
    FUN_18047f8e0(param_1,0xfffffffe,"damage");
  }
  uVar9 = 0;
LAB_1800a6ed5:
  FUN_18047f270(param_1,uVar9);
  FUN_18047f8e0(param_1,0xfffffffe,"penetrated");
  puVar6 = &local_260;
  if (cVar3 == '\0') {
    puVar6 = &local_240;
  }
  FUN_1800a4210(param_1,"position",puVar6);
  FUN_18047f4f0(param_1,(double)uStack_218._4_4_);
  FUN_18047f8e0(param_1,0xfffffffe,"range");
  iVar4 = FUN_18047fe10(param_1,3);
  if (0 < iVar4) {
    plVar8 = (longlong *)FUN_18047e2c0(param_1,3,"wl.entity");
    local_260 = *plVar8;
    local_270 = FUN_18047e470(param_1,4,2);
    local_278 = &local_260;
    fVar18 = (float)FUN_1802af5a0(&local_268,&local_220,&local_230,&local_240);
    FUN_18047f4f0(param_1,(double)fVar18);
    FUN_18047f8e0(param_1,0xfffffffe,"target_damage");
    if ((!bVar1) || (lVar13 != local_260)) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    FUN_18047f270(param_1,uVar9);
    FUN_18047f8e0(param_1,0xfffffffe,"target_hit");
  }
  return 1;
}



/* ===== 1800a7060 FUN_1800a7060 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800a7060(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  longlong local_218;
  undefined8 local_210;
  float local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [20];
  char acStack_1c4 [364];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_248;
  if (DAT_180ccfa1c < 1) {
    FUN_180484c10(param_1,"%s works only in createmove, frame_stage and game event callbacks",
                  "trace.can_penetrate");
  }
  puVar3 = (undefined8 *)FUN_180063d70(&local_200,param_1,1);
  local_210 = *puVar3;
  local_208 = *(float *)(puVar3 + 1);
  pfVar4 = (float *)FUN_180063d70(&local_200,param_1,2);
  fVar8 = *pfVar4;
  fVar9 = pfVar4[1];
  fVar10 = pfVar4[2];
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_218);
    DAT_181108a00 = local_218;
    DAT_1811089f8 = FUN_1803a0c50(&local_218);
    DAT_180cd1304 = '\x01';
  }
  local_1e0 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  if ((((((DAT_1811089f8 != 0) && (DAT_180961f40 != 0)) && (DAT_180961f48 != 0)) &&
       ((DAT_180961f50 != 0 && (DAT_180961f60 != 0)))) &&
      ((DAT_180961f68 != 0 && ((DAT_180cfee68 != 0 && (DAT_180cfee80 != 0)))))) &&
     (DAT_1809619a0 != 0)) {
    local_218 = DAT_1811089f8;
    cVar1 = FUN_1802ae4f0(&local_218,&local_1f0);
    if (cVar1 != '\0') {
      fVar8 = fVar8 - (float)local_210;
      fVar9 = fVar9 - local_210._4_4_;
      fVar10 = fVar10 - local_208;
      fVar7 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
      if (fVar7 < 0.0) {
        fVar7 = (float)FUN_18051af10(fVar7);
      }
      else {
        fVar7 = SQRT(fVar7);
      }
      if (0.0 < fVar7) {
        fVar7 = DAT_1808ac34c / fVar7;
        local_200 = fVar8 * fVar7;
        local_1fc = fVar9 * fVar7;
        local_1f8 = fVar10 * fVar7;
        if (0.0 < local_1f0._4_4_) {
          FUN_180540170(local_1d8,0,0x180);
          FUN_1802afd60(local_1d8);
          local_228 = local_1d8;
          iVar2 = FUN_1802ae180(&local_218,&local_1f0,&local_210,&local_200);
          bVar6 = false;
          uVar5 = 0;
          if (0 < iVar2) {
            do {
              if (acStack_1c4[(ulonglong)uVar5 * 0x18] != '\0') {
                bVar6 = acStack_1c4[(ulonglong)uVar5 * 0x18 + 1] == '\0';
                break;
              }
              uVar5 = uVar5 + 1;
            } while ((int)uVar5 < iVar2);
          }
        }
        else {
          bVar6 = false;
        }
        FUN_18047f270(param_1,bVar6);
        return 1;
      }
    }
  }
  return 0;
}



/* ===== 1800a7330 FUN_1800a7330 ===== */

undefined8 FUN_1800a7330(undefined8 param_1)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  float fVar5;
  longlong local_res10;
  undefined8 local_res18 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  dVar1 = (double)FUN_18047e140(param_1,1);
  fVar5 = (float)dVar1;
  uVar3 = FUN_18047e010(param_1,2);
  puVar4 = (undefined8 *)FUN_18047e2c0(param_1,3,"wl.entity");
  local_res18[0] = *puVar4;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    DAT_181108a00 = local_res10;
    DAT_1811089f8 = FUN_1803a0c50(&local_res10);
    DAT_180cd1304 = '\x01';
  }
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_res10 = DAT_1811089f8;
  if ((DAT_1811089f8 != 0) && (cVar2 = FUN_1802ae4f0(&local_res10,&local_38), cVar2 != '\0')) {
    fVar5 = (float)FUN_1802af480(local_res18,&local_38,fVar5,uVar3);
  }
  FUN_18047f4f0(param_1,(double)fVar5);
  return 1;
}



/* ===== 1800a7430 FUN_1800a7430 ===== */

undefined8 FUN_1800a7430(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  float local_res10 [6];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)FUN_180063d70(&local_38,param_1,1);
  local_28 = *puVar2;
  local_20 = *(undefined4 *)(puVar2 + 1);
  puVar2 = (undefined8 *)FUN_180063d70(local_18,param_1,2);
  local_res10[0] = 0.0;
  local_30 = *(undefined4 *)(puVar2 + 1);
  local_38 = *puVar2;
  uVar1 = FUN_1803c6100(&local_28,&local_38,local_res10);
  FUN_18047f270(param_1,uVar1);
  FUN_18047f4f0(param_1,(double)local_res10[0]);
  return 2;
}



/* ===== 1800a74d0 FUN_1800a74d0 ===== */

undefined8 FUN_1800a74d0(undefined8 param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  double dVar7;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  
  dVar7 = (double)FUN_18047e140(param_1,1);
  lVar3 = 0;
  if ((DAT_1808acbe8 <= dVar7) && (dVar7 = dVar7 - DAT_1808acbe8, dVar7 < DAT_1808acbe8)) {
    lVar3 = -0x8000000000000000;
  }
  lVar3 = (longlong)dVar7 + lVar3;
  if (0x7ffffffefffe < lVar3 - 0x10000U) {
    return 0;
  }
  FUN_1803a09f0(&local_28);
  puVar5 = auStack_48;
  puVar6 = auStack_48;
  for (plVar4 = local_28; plVar4 != local_20; plVar4 = plVar4 + 1) {
    if (*plVar4 == lVar3) {
      if (lVar3 == 0) {
        FUN_18047f4d0();
      }
      else {
        plVar4 = (longlong *)FUN_18047efb0(param_1,8);
        *plVar4 = lVar3;
        FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
        FUN_18047f990(param_1,0xfffffffe);
      }
      if (local_28 != (longlong *)0x0) {
        uVar1 = (local_18 - (longlong)local_28 >> 3) * 8;
        if (0xfff < uVar1) {
          if ((undefined1 *)((longlong)local_28 + (-8 - local_28[-1])) < (undefined1 *)0x20) {
            thunk_FUN_1803d64e0(local_28[-1],uVar1 + 0x27);
            return 1;
          }
          goto LAB_1800a7650;
        }
        thunk_FUN_1803d64e0();
      }
      return 1;
    }
  }
  if (local_28 == (longlong *)0x0) {
    return 0;
  }
  plVar4 = local_28;
  if (0xfff < (ulonglong)((local_18 - (longlong)local_28 >> 3) * 8)) {
    plVar4 = (longlong *)local_28[-1];
    if ((undefined1 *)((longlong)local_28 + (-8 - (longlong)plVar4)) < (undefined1 *)0x20)
    goto LAB_1800a765a;
LAB_1800a7650:
    plVar4 = (longlong *)&DAT_00000005;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar5 = auStack_40;
  }
  puVar6 = puVar5;
LAB_1800a765a:
  *(undefined8 *)(puVar6 + -8) = 0x1800a7662;
  thunk_FUN_1803d64e0(plVar4);
  return 0;
}



/* ===== 1800a7670 FUN_1800a7670 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800a7670(undefined8 param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined4 uStack_5f;
  undefined2 uStack_5b;
  undefined1 uStack_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  lVar7 = *plVar6;
  iVar4 = FUN_18047e470(param_1,2,0x40);
  if (iVar4 - 1U < 0x200) {
    uVar5 = FUN_18038eaf0("CBasePlayerController","m_steamID");
    if ((uVar5 == 0) || (lVar7 = FUN_18000f3a0((ulonglong)uVar5 + lVar7), lVar7 == 0)) {
      uVar9 = 0;
    }
    else {
      FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
      lVar8 = FUN_18047fd90(param_1,0xffffffff);
      FUN_18047fb50(param_1,0xfffffffe);
      uVar3 = _UNK_1808ad418;
      uVar9 = _DAT_1808ad410;
      uVar11 = 0;
      puVar1 = *(undefined1 **)(lVar8 + 0x158);
      lVar2 = *(longlong *)(lVar8 + 0x150);
      uVar12 = ((longlong)puVar1 - lVar2 >> 3) * 0x6db6db6db6db6db7;
      if (uVar12 != 0) {
        do {
          if ((*(longlong *)(lVar2 + 0x28 + uVar11 * 0x38) == lVar7) &&
             (*(int *)(lVar2 + 0x30 + uVar11 * 0x38) == iVar4)) {
            if (-1 < (int)uVar11) goto LAB_1800a7868;
            break;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      if (uVar12 < 0x100) {
        uStack_67 = 0;
        uStack_60 = 0;
        uStack_5f = 0;
        uStack_5b = 0;
        uStack_59 = 0;
        local_58 = _DAT_1808ad410;
        uStack_50 = _UNK_1808ad418;
        local_68 = 0;
        local_48 = 0;
        local_40 = lVar7;
        local_38 = iVar4;
        local_34 = iVar4;
        if (puVar1 == *(undefined1 **)(lVar8 + 0x160)) {
          FUN_18006a9e0(lVar8 + 0x150,puVar1,&local_68);
        }
        else {
          *puVar1 = 0;
          *(undefined8 *)(puVar1 + 1) = 0;
          *(undefined4 *)(puVar1 + 9) = 0;
          *(undefined2 *)(puVar1 + 0xd) = 0;
          puVar1[0xf] = 0;
          *(undefined8 *)(puVar1 + 0x10) = 0;
          *(undefined8 *)(puVar1 + 0x18) = 0xf;
          local_58 = uVar9;
          uStack_50 = uVar3;
          local_68 = 0;
          *(undefined4 *)(puVar1 + 0x20) = 0;
          *(longlong *)(puVar1 + 0x28) = lVar7;
          *(int *)(puVar1 + 0x30) = iVar4;
          *(int *)(puVar1 + 0x34) = iVar4;
          *(longlong *)(lVar8 + 0x158) = *(longlong *)(lVar8 + 0x158) + 0x38;
        }
        uVar11 = (ulonglong)
                 ((int)(*(longlong *)(lVar8 + 0x158) - *(longlong *)(lVar8 + 0x150) >> 3) *
                  -0x49249249 - 1);
        FUN_18000f890(&local_68);
LAB_1800a7868:
        puVar10 = (undefined4 *)FUN_18047efb0(param_1,4);
        *puVar10 = (int)uVar11;
        FUN_18047eb70(param_1,0xffffd8f0,"wl.texture");
        FUN_18047f990(param_1,0xfffffffe);
        uVar9 = 1;
      }
      else {
        uVar9 = FUN_180484c10(param_1,"entity:avatar: 256 textures per script at most");
      }
    }
  }
  else {
    uVar9 = FUN_180484c10(param_1,"entity:avatar: size out of 1..%d",0x200);
  }
  return uVar9;
}



/* ===== 1800a78e0 FUN_1800a78e0 ===== */

/* WARNING: Type propagation algorithm not settling */

void FUN_1800a78e0(longlong param_1)

{
  char **ppcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char **ppcVar6;
  char *local_e8;
  code *local_e0;
  char *local_d8 [3];
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
  undefined *local_48;
  code *local_40;
  char *local_38;
  code *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  local_d8[2] = "subticks";
  local_c0 = FUN_1800a42d0;
  local_28 = 0;
  local_b8 = "add_subtick";
  local_20 = 0;
  local_b0 = FUN_1800a4600;
  local_a8 = "clear_subticks";
  local_a0 = FUN_1800a49b0;
  local_98 = "add_button";
  local_90 = FUN_1800a4a30;
  local_88 = "remove_button";
  local_80 = FUN_1800a4c00;
  local_78 = "upmove";
  local_70 = FUN_1800a4ce0;
  local_68 = "set_upmove";
  local_60 = FUN_1800a4d80;
  local_58 = "predicted";
  local_50 = FUN_1800a4e60;
  local_48 = &DAT_1806e739c;
  local_40 = FUN_1800a4ec0;
  local_38 = "mouse_delta";
  local_30 = FUN_1800a4f50;
  FUN_18047eb70(uVar2,0xffffd8f0,"wl.cmd");
  iVar3 = FUN_18047fe10(uVar2,0xffffffff);
  uVar5 = 0xfffffffd;
  if (iVar3 == 5) {
    ppcVar6 = local_d8;
    FUN_18047eb70(uVar2,0xffffffff,"__index");
    do {
      ppcVar6 = ppcVar6 + 2;
      FUN_18047f2b0(uVar2,ppcVar6[1],0);
      FUN_18047f8e0(uVar2,0xfffffffe);
    } while (ppcVar6[2] != (char *)0x0);
    uVar4 = 0xfffffffd;
  }
  else {
    uVar4 = 0xfffffffe;
  }
  FUN_18047fb50(uVar2,uVar4);
  local_88 = (char *)0x0;
  local_d8[2] = "post_state";
  local_80 = (code *)0x0;
  local_c0 = FUN_1800a5130;
  local_b8 = "simulate";
  local_b0 = FUN_1800a52c0;
  local_a8 = "max_speed";
  local_a0 = FUN_1800a5d90;
  local_98 = "camera_angles";
  local_90 = FUN_1800a5e10;
  FUN_180078310(uVar2,"engine",local_d8 + 2);
  local_68 = (char *)0x0;
  local_d8[2] = "line";
  local_60 = (code *)0x0;
  local_c0 = FUN_1800a64a0;
  local_b8 = "hull";
  local_b0 = FUN_1800a6890;
  local_a8 = "bullet";
  local_a0 = FUN_1800a6a10;
  local_98 = "can_penetrate";
  local_90 = FUN_1800a7060;
  local_88 = "scale_damage";
  local_80 = FUN_1800a7330;
  local_78 = "smoke";
  local_70 = FUN_1800a7430;
  FUN_180078310(uVar2,"trace",local_d8 + 2);
  FUN_18047eb70(uVar2,0xffffd8ee,"trace");
  FUN_18047e8f0(uVar2,0,0);
  FUN_18047f4f0(uVar2,DAT_1808ac898);
  FUN_18047f8e0(uVar2,0xfffffffe,"visible");
  FUN_18047f4f0(uVar2,DAT_1808ac8a0);
  FUN_18047f8e0(uVar2,0xfffffffe,&DAT_1806e75b8);
  FUN_18047f4f0(uVar2,DAT_1808ac890);
  FUN_18047f8e0(uVar2,0xfffffffe,"player");
  FUN_18047f8e0(uVar2,0xfffffffe,&DAT_1806e73e8);
  FUN_18047fb50(uVar2,0xfffffffe);
  local_d8[0] = (char *)0x0;
  local_e8 = "from_address";
  local_d8[1] = (char *)0x0;
  local_e0 = FUN_1800a74d0;
  FUN_180078310(uVar2,"entity",&local_e8);
  local_d8[0] = (char *)0x0;
  local_e8 = "avatar";
  local_d8[1] = (char *)0x0;
  local_e0 = FUN_1800a7670;
  FUN_18047eb70(uVar2,0xffffd8f0,"wl.entity");
  iVar3 = FUN_18047fe10(uVar2,0xffffffff);
  if (iVar3 == 5) {
    ppcVar6 = &local_e8;
    FUN_18047eb70(uVar2,0xffffffff,"__index");
    do {
      FUN_18047f2b0(uVar2,ppcVar6[1],0);
      FUN_18047f8e0(uVar2,0xfffffffe);
      ppcVar1 = ppcVar6 + 2;
      ppcVar6 = ppcVar6 + 2;
    } while (*ppcVar1 != (char *)0x0);
  }
  else {
    uVar5 = 0xfffffffe;
  }
  FUN_18047fb50(uVar2,uVar5);
  FUN_18047e8f0(uVar2,0,0);
  FUN_18047f4f0(uVar2,DAT_1808ac500);
  FUN_18047f8e0(uVar2,0xfffffffe,"attack");
  FUN_18047f4f0(uVar2,DAT_1808ac548);
  FUN_18047f8e0(uVar2,0xfffffffe,&DAT_1806e14e4);
  FUN_18047f4f0(uVar2,DAT_1808ac598);
  FUN_18047f8e0(uVar2,0xfffffffe,&DAT_1806e14ec);
  FUN_18047f4f0(uVar2,DAT_1808ac5e8);
  FUN_18047f8e0(uVar2,0xfffffffe,"forward");
  FUN_18047f4f0(uVar2,DAT_1808ac628);
  FUN_18047f8e0(uVar2,0xfffffffe,&DAT_1806e1500);
  FUN_18047f4f0(uVar2,DAT_1808ac718);
  FUN_18047f8e0(uVar2,0xfffffffe,&DAT_1806dfd6c);
  FUN_18047f4f0(uVar2,DAT_1808ac740);
  FUN_18047f8e0(uVar2,0xfffffffe,"right");
  FUN_18047f4f0(uVar2,DAT_1808ac758);
  FUN_18047f8e0(uVar2,0xfffffffe,"attack2");
  FUN_18047f4f0(uVar2,DAT_1808ac818);
  FUN_18047f8e0(uVar2,0xfffffffe,"sprint");
  FUN_18047f4f0(uVar2,DAT_1808aca00);
  FUN_18047f8e0(uVar2,0xfffffffe,"score");
  FUN_18047f8e0(uVar2,0xffffd8ee,"button");
  return;
}



/* ===== 1800a7ea0 FUN_1800a7ea0 ===== */

void FUN_1800a7ea0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  lVar2 = 0;
  do {
    *(undefined1 *)(lVar2 + 0xc0 + param_1) = 0;
    lVar1 = uVar3 * 0x60;
    *(undefined1 *)(lVar2 + 0x120 + param_1) = 0;
    *(undefined1 *)(lVar2 + 0x180 + param_1) = 0;
    *(undefined1 *)(lVar2 + 0x1e0 + param_1) = 0;
    *(undefined1 *)(param_1 + lVar1) = 0;
    *(undefined4 *)(param_1 + 4 + lVar1) = 0;
    *(undefined1 *)(param_1 + 8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xc + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x14 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x1c + lVar1) = 0;
    *(undefined2 *)(param_1 + 0x24 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x28 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x30 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x38 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x40 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x48 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x50 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x58 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x60 + lVar1) = 0;
    *(undefined4 *)(param_1 + 100 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x68 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x6c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x74 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x7c + lVar1) = 0;
    *(undefined2 *)(param_1 + 0x84 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x88 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x90 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x98 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xa0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xa8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xb0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xb8 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0xc4 + lVar1) = 0;
    *(undefined1 *)(param_1 + 200 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xcc + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xd4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xdc + lVar1) = 0;
    *(undefined2 *)(param_1 + 0xe4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xe8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xf0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xf8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x100 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x108 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x110 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x118 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x124 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x128 + lVar1) = 0;
    *(undefined8 *)(param_1 + 300 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x134 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x13c + lVar1) = 0;
    *(undefined2 *)(param_1 + 0x144 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x148 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x150 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x158 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x160 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x168 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x170 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x178 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x184 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x188 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x18c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x194 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x19c + lVar1) = 0;
    *(undefined2 *)(param_1 + 0x1a4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x1a8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x1b0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x1b8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x1c0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x1c8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x1d0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x1d8 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x1e4 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x1e8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x1ec + lVar1) = 0;
    *(undefined8 *)(param_1 + 500 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x1fc + lVar1) = 0;
    *(undefined2 *)(param_1 + 0x204 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x208 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x210 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x218 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x220 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x228 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x230 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x238 + lVar1) = 0;
    *(undefined1 *)(lVar2 + 0x240 + param_1) = 0;
    *(undefined4 *)(param_1 + 0x244 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x248 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x24c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x254 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x25c + lVar1) = 0;
    *(undefined2 *)(param_1 + 0x264 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x268 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x270 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x278 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x280 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x288 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x290 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x298 + lVar1) = 0;
    *(undefined1 *)(lVar2 + 0x2a0 + param_1) = 0;
    *(undefined4 *)(param_1 + 0x2a4 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x2a8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x2ac + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x2b4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 700 + lVar1) = 0;
    *(undefined2 *)(param_1 + 0x2c4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x2c8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x2d0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x2d8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x2e0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x2e8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x2f0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x2f8 + lVar1) = 0;
    *(undefined1 *)(lVar2 + 0x300 + param_1) = 0;
    *(undefined4 *)(param_1 + 0x304 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x308 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x30c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x314 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x31c + lVar1) = 0;
    *(undefined2 *)(param_1 + 0x324 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x328 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x330 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x338 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x340 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x348 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x350 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x358 + lVar1) = 0;
    *(undefined1 *)(lVar2 + 0x360 + param_1) = 0;
    *(undefined4 *)(param_1 + 0x364 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x368 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x36c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x374 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x37c + lVar1) = 0;
    *(undefined2 *)(param_1 + 900 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x388 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x390 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x398 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x3a0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x3a8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x3b0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x3b8 + lVar1) = 0;
    *(undefined1 *)(lVar2 + 0x3c0 + param_1) = 0;
    *(undefined4 *)(param_1 + 0x3c4 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x3c8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x3cc + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x3d4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x3dc + lVar1) = 0;
    *(undefined2 *)(param_1 + 0x3e4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 1000 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x3f0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x3f8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x400 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x408 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x410 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x418 + lVar1) = 0;
    *(undefined1 *)(lVar2 + 0x420 + param_1) = 0;
    *(undefined4 *)(param_1 + 0x424 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x428 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x42c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x434 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x43c + lVar1) = 0;
    uVar3 = uVar3 + 0x10;
    *(undefined1 *)(lVar2 + 0x480 + param_1) = 0;
    *(undefined1 *)(lVar2 + 0x4e0 + param_1) = 0;
    *(undefined1 *)(lVar2 + 0x540 + param_1) = 0;
    *(undefined1 *)(lVar2 + 0x5a0 + param_1) = 0;
    lVar2 = lVar2 + 0x600;
    *(undefined2 *)(param_1 + 0x444 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x448 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x450 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x458 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x460 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x468 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x470 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x478 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x484 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x488 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x48c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x494 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x49c + lVar1) = 0;
    *(undefined2 *)(param_1 + 0x4a4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4a8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4b0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4b8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4c0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4c8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4d0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4d8 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x4e4 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x4e8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4ec + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4f4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4fc + lVar1) = 0;
    *(undefined2 *)(param_1 + 0x504 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x508 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x510 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x518 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x520 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x528 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x530 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x538 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x544 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x548 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x54c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x554 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x55c + lVar1) = 0;
    *(undefined2 *)(param_1 + 0x564 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x568 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x570 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x578 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x580 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x588 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x590 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x598 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x5a4 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x5a8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x5ac + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x5b4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x5bc + lVar1) = 0;
    *(undefined2 *)(param_1 + 0x5c4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x5c8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x5d0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x5d8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x5e0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x5e8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x5f0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x5f8 + lVar1) = 0;
  } while (uVar3 < 0x40);
  return;
}



/* ===== 1800a85b0 FUN_1800a85b0 ===== */

void FUN_1800a85b0(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  thunk_FUN_1803d64e0(param_1,0x28);
  return;
}



/* ===== 1800a85c0 FUN_1800a85c0 ===== */

longlong FUN_1800a85c0(longlong param_1)

{
  return param_1 + 8;
}



/* ===== 1800a85d0 FUN_1800a85d0 ===== */

TypeDescriptor * FUN_1800a85d0(void)

{
  return &`int___cdecl_lua_runtime::detail::_anon_B27E2512::engine_simulate(lua_State*___ptr64)'::
          __l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 1800a85e0 FUN_1800a85e0 ===== */

void FUN_1800a85e0(longlong param_1,undefined4 *param_2)

{
  FUN_1800a5650(param_1 + 8,*param_2);
  return;
}



/* ===== 1800a85f0 FUN_1800a85f0 ===== */

undefined8 * FUN_1800a85f0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = std::
             _Func_impl_no_alloc<`int___cdecl_lua_runtime::detail::_anon_B27E2512::engine_simulate(lua_State*___ptr64)'::`2'::<lambda_1>,bool,int,prediction::sim_input&___ptr64>
             ::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  return param_2;
}



/* ===== 1800a8610 FUN_1800a8610 ===== */

undefined8 FUN_1800a8610(void)

{
  int *piVar1;
  int *piVar2;
  int local_res10 [2];
  int local_res18 [4];
  
  local_res18[0] = 0xfa;
  piVar2 = local_res10;
  local_res10[0] = 0x4b;
  if (0x4a < DAT_18091a1ac) {
    piVar2 = &DAT_18091a1ac;
  }
  piVar1 = local_res18;
  if (DAT_18091a1ac < 0xfb) {
    piVar1 = piVar2;
  }
  FUN_18047f4f0((float)*piVar1 / DAT_1808acb08,(double)((float)*piVar1 / DAT_1808acb08));
  return 1;
}



/* ===== 1800a8670 FUN_1800a8670 ===== */

undefined8 FUN_1800a8670(undefined8 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_18033c790();
  FUN_18047f4f0(param_1,(double)fVar1);
  return 1;
}



/* ===== 1800a86a0 FUN_1800a86a0 ===== */

undefined8 FUN_1800a86a0(undefined8 param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  char *pcVar6;
  longlong *plVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  longlong local_res10;
  
  local_res10 = 0;
  pcVar6 = (char *)FUN_18047e090(param_1,1,&local_res10);
  dVar3 = (double)FUN_18047e140(param_1,2);
  iVar5 = FUN_18047fe10(param_1,4);
  if ((((iVar5 == 7) &&
       (plVar7 = (longlong *)FUN_18047e680(param_1,4,"wl.font"), plVar7 != (longlong *)0x0)) &&
      (lVar1 = *plVar7, lVar1 != 0)) && (lVar11 = *(longlong *)(lVar1 + 0x28), lVar11 != 0)) {
    fVar13 = *(float *)(lVar1 + 0x20);
  }
  else {
    lVar11 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    if (lVar11 == 0) {
      return 0;
    }
    fVar13 = 0.0;
  }
  iVar5 = FUN_18047fe10(param_1,3);
  if (iVar5 < 1) {
    if (fVar13 <= 0.0) {
      fVar13 = *(float *)(lVar11 + 0x1c);
    }
  }
  else {
    dVar2 = (double)FUN_18047e140(param_1,3);
    fVar13 = (float)dVar2;
  }
  FUN_18047e8f0(param_1,0,0);
  fVar4 = DAT_1808ac34c;
  iVar5 = 0;
  pcVar10 = pcVar6 + local_res10;
  if (pcVar6 < pcVar10) {
    while (iVar5 < 0x200) {
      fVar12 = fVar4;
      if (fVar4 <= (float)dVar3) {
        fVar12 = (float)dVar3;
      }
      pcVar8 = (char *)FUN_18040a0d0(lVar11,fVar13,pcVar6,pcVar10,fVar12,0);
      pcVar9 = pcVar6 + 1;
      if (pcVar6 < pcVar8) {
        pcVar9 = pcVar8;
      }
      FUN_18047f450(param_1,pcVar6,(longlong)pcVar9 - (longlong)pcVar6);
      iVar5 = iVar5 + 1;
      FUN_18047f7e0(param_1,0xfffffffe,iVar5);
      pcVar6 = pcVar9;
      while( true ) {
        if (pcVar10 <= pcVar6) {
          return 1;
        }
        if ((*pcVar6 != ' ') && (*pcVar6 != '\n')) break;
        pcVar6 = pcVar6 + 1;
      }
    }
  }
  return 1;
}



/* ===== 1800a8870 FUN_1800a8870 ===== */

void FUN_1800a8870(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float local_28 [8];
  
  local_28[0] = (float)(param_2 & 0xff) * DAT_1808abfe4;
  local_28[1] = (float)(param_2 >> 8 & 0xff) * DAT_1808abfe4;
  local_28[2] = (float)(param_2 >> 0x10 & 0xff) * DAT_1808abfe4;
  local_28[3] = (float)(param_2 >> 0x18 & 0xff) * DAT_1808abfe4;
  FUN_18047eb70(local_28[3],0xffffd8f0,"wl_state");
  lVar3 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  FUN_18047f6f0(uVar1,0xffffd8f0,*(undefined4 *)(lVar3 + 0x144));
  fVar2 = DAT_1808acb94;
  lVar3 = 0;
  do {
    fVar4 = (float)FUN_180519080(local_28[lVar3] * fVar2);
    FUN_18047f4f0(uVar1,(double)fVar4);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  FUN_18047e730(uVar1,4,1);
  return;
}



/* ===== 1800a8990 FUN_1800a8990 ===== */

undefined8 FUN_1800a8990(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 *local_68;
  undefined8 *puStack_60;
  longlong local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  iVar3 = FUN_18047fe10(param_1,1);
  if (0 < iVar3) {
    pcVar4 = (char *)FUN_18047e090(param_1,1,0);
    if (pcVar4 != (char *)0x0) {
      FUN_18033c4d0(&local_68);
      for (; local_68 != puStack_60; local_68 = local_68 + 2) {
        iVar3 = strcmp((char *)*local_68,pcVar4);
        if (iVar3 == 0) {
          uVar6 = *(undefined4 *)(local_68 + 1);
          FUN_1800df6b0(&local_68);
          FUN_1800a8870(param_1,uVar6);
          return 1;
        }
      }
      FUN_1800df6b0(&local_68);
    }
    FUN_1800a8870(param_1,0);
    return 1;
  }
  FUN_18047e8f0(param_1,0,0);
  local_68 = (undefined8 *)0x0;
  puStack_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_18033c4d0(&local_50);
  puVar10 = local_48;
  puVar8 = auStack_88;
  puVar9 = auStack_88;
  for (puVar5 = local_50; puVar5 != puVar10; puVar5 = puVar5 + 2) {
    FUN_1800242d0(&local_68,puVar5);
  }
  FUN_1800df6b0(&local_50);
  puVar10 = puStack_60;
  for (puVar5 = local_68; puVar5 != puVar10; puVar5 = puVar5 + 1) {
    pcVar4 = (char *)*puVar5;
    if (pcVar4 != (char *)0x0) {
      FUN_18033c4d0(&local_50);
      puVar2 = local_48;
      for (puVar7 = local_50; puVar7 != puVar2; puVar7 = puVar7 + 2) {
        iVar3 = strcmp((char *)*puVar7,pcVar4);
        if (iVar3 == 0) {
          uVar6 = *(undefined4 *)(puVar7 + 1);
          FUN_1800df6b0(&local_50);
          goto LAB_1800a8af5;
        }
      }
      FUN_1800df6b0(&local_50);
    }
    uVar6 = 0;
LAB_1800a8af5:
    FUN_1800a8870(param_1,uVar6);
    FUN_18047f8e0(param_1,0xfffffffe,pcVar4);
  }
  if (local_68 == (undefined8 *)0x0) {
    return 1;
  }
  puVar5 = local_68;
  if (0xfff < (ulonglong)((local_58 - (longlong)local_68 >> 3) * 8)) {
    puVar5 = (undefined8 *)local_68[-1];
    puVar10 = (undefined8 *)((longlong)local_68 + (-8 - (longlong)puVar5));
    if (puVar10 <= &DAT_0000001f) goto LAB_1800a8b6f;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar8 = auStack_80;
    puVar5 = puVar10;
  }
  puVar9 = puVar8;
LAB_1800a8b6f:
  *(undefined8 *)(puVar9 + -8) = 0x1800a8b74;
  thunk_FUN_1803d64e0(puVar5);
  return 1;
}



/* ===== 1800a8b90 FUN_1800a8b90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800a8b90(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 auStack_d8 [32];
  int local_b8;
  longlong local_a8;
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
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_a8 = 0;
  uVar8 = FUN_18047e090(param_1,1,&local_a8);
  iVar6 = FUN_18047e010(param_1,2);
  iVar7 = FUN_18047e010(param_1,3);
  if ((((iVar6 < 1) || (iVar7 < 1)) || (0x800 < iVar6)) || (0x800 < iVar7)) {
    uVar8 = FUN_180484c10(param_1,"render.texture: size out of 1..%d",0x800);
  }
  else if (local_a8 == (longlong)iVar7 * (longlong)iVar6 * 4) {
    FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
    lVar9 = FUN_18047fd90(param_1,0xffffffff);
    FUN_18047fb50(param_1,0xfffffffe);
    uVar3 = _UNK_1808ad418;
    uVar2 = _DAT_1808ad410;
    if ((ulonglong)
        ((*(longlong *)(lVar9 + 0x158) - *(longlong *)(lVar9 + 0x150) >> 3) * 0x6db6db6db6db6db7) <
        0x100) {
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
      FUN_180029840(&local_a0,uVar8,local_a8);
      uVar4 = local_80;
      local_80 = CONCAT13(1,(undefined3)local_80);
      uVar5 = local_80;
      local_70 = CONCAT44(iVar7,iVar6);
      puVar1 = *(undefined1 **)(lVar9 + 0x158);
      if (puVar1 == *(undefined1 **)(lVar9 + 0x160)) {
        FUN_18006a9e0(lVar9 + 0x150,puVar1,&local_a0);
      }
      else {
        *puVar1 = local_a0;
        *(ulonglong *)(puVar1 + 1) = CONCAT17(uStack_98,uStack_9f);
        *(undefined4 *)(puVar1 + 9) = uStack_97;
        *(undefined2 *)(puVar1 + 0xd) = uStack_93;
        puVar1[0xf] = uStack_91;
        *(undefined8 *)(puVar1 + 0x10) = local_90;
        *(undefined8 *)(puVar1 + 0x18) = uStack_88;
        local_90 = uVar2;
        uStack_88 = uVar3;
        local_a0 = 0;
        local_80._0_1_ = (undefined1)uVar4;
        puVar1[0x20] = (undefined1)local_80;
        local_80._1_1_ = SUB41(uVar4,1);
        puVar1[0x21] = local_80._1_1_;
        local_80._2_1_ = SUB41(uVar4,2);
        puVar1[0x22] = local_80._2_1_;
        puVar1[0x23] = 1;
        *(undefined8 *)(puVar1 + 0x28) = local_78;
        *(int *)(puVar1 + 0x30) = iVar6;
        *(int *)(puVar1 + 0x34) = iVar7;
        *(longlong *)(lVar9 + 0x158) = *(longlong *)(lVar9 + 0x158) + 0x38;
        local_80 = uVar5;
      }
      piVar10 = (int *)FUN_18047efb0(param_1,4);
      *piVar10 = (int)(*(longlong *)(lVar9 + 0x158) - *(longlong *)(lVar9 + 0x150) >> 3) *
                 -0x49249249 + -1;
      FUN_18047eb70(param_1,0xffffd8f0,"wl.texture");
      FUN_18047f990(param_1,0xfffffffe);
      FUN_18000f890(&local_a0);
      uVar8 = 1;
    }
    else {
      uVar8 = FUN_180484c10(param_1,"render.texture: 256 textures per script at most");
    }
  }
  else {
    local_b8 = iVar7 * iVar6 * 4;
    uVar8 = FUN_180484c10(param_1,"render.texture: %d x %d needs %d bytes of rgba",iVar6,iVar7);
  }
  return uVar8;
}



/* ===== 1800a8e40 FUN_1800a8e40 ===== */

undefined8 FUN_1800a8e40(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  
  lVar1 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  dVar6 = (double)FUN_18047e140(param_1,1);
  dVar7 = (double)FUN_18047e140(param_1,2);
  dVar8 = (double)FUN_18047e140(param_1,3);
  dVar9 = (double)FUN_18047e140(param_1,4);
  uVar2 = FUN_180063eb0(param_1,8);
  uVar3 = FUN_180063eb0(param_1,7);
  uVar4 = FUN_180063eb0(param_1,6);
  local_res10 = (float)dVar8 + (float)dVar6;
  local_res14 = (float)dVar9 + (float)dVar7;
  local_res18 = (float)dVar6;
  local_res1c = (float)dVar7;
  uVar5 = FUN_180063eb0(param_1,5);
  FUN_1803fe730(lVar1,&local_res18,&local_res10,uVar5,uVar4,uVar3,uVar2);
  return 0;
}



/* ===== 1800a8fa0 FUN_1800a8fa0 ===== */

undefined8 FUN_1800a8fa0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  lVar5 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  dVar9 = (double)FUN_18047e140(param_1,2);
  dVar10 = (double)FUN_18047e140(param_1,1);
  uVar6 = FUN_180063eb0(param_1,3);
  dVar11 = (double)FUN_18047e140(param_1,5);
  dVar12 = (double)FUN_18047e140(param_1,4);
  uVar7 = FUN_180063eb0(param_1,6);
  dVar13 = (double)FUN_18047e140(param_1,8);
  dVar14 = (double)FUN_18047e140(param_1,7);
  uVar8 = FUN_180063eb0(param_1,9);
  uVar1 = **(undefined4 **)(lVar5 + 0x38);
  uVar2 = (*(undefined4 **)(lVar5 + 0x38))[1];
  FUN_1803fc3a0(lVar5,3,3);
  **(undefined2 **)(lVar5 + 0x48) = *(undefined2 *)(lVar5 + 0x34);
  *(longlong *)(lVar5 + 0x48) = *(longlong *)(lVar5 + 0x48) + 2;
  **(short **)(lVar5 + 0x48) = *(short *)(lVar5 + 0x34) + 1;
  *(longlong *)(lVar5 + 0x48) = *(longlong *)(lVar5 + 0x48) + 2;
  **(short **)(lVar5 + 0x48) = *(short *)(lVar5 + 0x34) + 2;
  pfVar3 = *(float **)(lVar5 + 0x40);
  *(longlong *)(lVar5 + 0x48) = *(longlong *)(lVar5 + 0x48) + 2;
  *pfVar3 = (float)dVar10;
  pfVar3[1] = (float)dVar9;
  lVar4 = *(longlong *)(lVar5 + 0x40);
  *(undefined4 *)(lVar4 + 8) = uVar1;
  *(undefined4 *)(lVar4 + 0xc) = uVar2;
  *(undefined4 *)(*(longlong *)(lVar5 + 0x40) + 0x10) = uVar6;
  lVar4 = *(longlong *)(lVar5 + 0x40);
  *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
  pfVar3 = (float *)(lVar4 + 0x14);
  *(float **)(lVar5 + 0x40) = pfVar3;
  *pfVar3 = (float)dVar12;
  *(float *)(lVar4 + 0x18) = (float)dVar11;
  lVar4 = *(longlong *)(lVar5 + 0x40);
  *(undefined4 *)(lVar4 + 8) = uVar1;
  *(undefined4 *)(lVar4 + 0xc) = uVar2;
  *(undefined4 *)(*(longlong *)(lVar5 + 0x40) + 0x10) = uVar7;
  lVar4 = *(longlong *)(lVar5 + 0x40);
  *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
  pfVar3 = (float *)(lVar4 + 0x14);
  *(float **)(lVar5 + 0x40) = pfVar3;
  *pfVar3 = (float)dVar14;
  *(float *)(lVar4 + 0x18) = (float)dVar13;
  lVar4 = *(longlong *)(lVar5 + 0x40);
  *(undefined4 *)(lVar4 + 8) = uVar1;
  *(undefined4 *)(lVar4 + 0xc) = uVar2;
  *(undefined4 *)(*(longlong *)(lVar5 + 0x40) + 0x10) = uVar8;
  *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 0x14;
  *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
  return 0;
}



/* ===== 1800a91c0 FUN_1800a91c0 ===== */

undefined8 FUN_1800a91c0(undefined8 param_1)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  int *piVar7;
  float *pfVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float local_res10;
  float local_res14;
  float local_98 [3];
  int local_8c [23];
  
  lVar2 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  dVar9 = (double)FUN_18047e140(param_1,2);
  dVar10 = (double)FUN_18047e140(param_1,1);
  local_res10 = (float)dVar10;
  local_res14 = (float)dVar9;
  dVar9 = (double)FUN_18047e140(param_1,3);
  local_98[2] = 1.0;
  local_98[0] = 0.0;
  fVar12 = (float)dVar9;
  dVar9 = (double)FUN_18047e140(param_1,4);
  local_98[1] = (float)dVar9;
  pfVar5 = local_98;
  if (0.0 <= local_98[1]) {
    pfVar5 = local_98 + 1;
  }
  pfVar8 = local_98 + 2;
  if (local_98[1] <= DAT_1808ac34c) {
    pfVar8 = pfVar5;
  }
  uVar3 = FUN_180063eb0(param_1,5);
  local_8c[2] = 0x100;
  local_8c[0] = 4;
  local_8c[1] = FUN_18047e470(param_1,6,0x30);
  piVar6 = local_8c;
  if (3 < local_8c[1]) {
    piVar6 = local_8c + 1;
  }
  piVar7 = local_8c + 2;
  if (local_8c[1] < 0x101) {
    piVar7 = piVar6;
  }
  dVar9 = (double)FUN_18047e5f0(param_1,7,DAT_1808acdd0);
  if ((0.0 < fVar12) && (fVar1 = *pfVar8, 0.0 < fVar1)) {
    iVar4 = *piVar7;
    if (fVar1 < DAT_1808ac34c) {
      fVar11 = ((float)dVar9 * DAT_1808ac680) / DAT_1808acb58;
      FUN_18000b9c0(lVar2 + 0x50,&local_res10);
      iVar4 = (int)((float)iVar4 * fVar1);
      if (iVar4 < 2) {
        iVar4 = 2;
      }
      FUN_1803fddf0(lVar2,&local_res10,fVar12,fVar11,fVar1 * DAT_1808ac7d0 + fVar11,iVar4);
      FUN_1803fd460(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),uVar3);
      *(undefined4 *)(lVar2 + 0x50) = 0;
    }
    else {
      FUN_1803fe9d0(lVar2,&local_res10,fVar12,uVar3,iVar4);
    }
  }
  return 0;
}



/* ===== 1800a9400 FUN_1800a9400 ===== */

undefined8 FUN_1800a9400(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int local_res10 [6];
  float local_68;
  float local_64;
  
  lVar5 = DAT_180ccfa78;
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  dVar1 = (double)FUN_18047e140(param_1,2);
  dVar2 = (double)FUN_18047e140(param_1,1);
  local_68 = (float)dVar2;
  local_64 = (float)dVar1;
  dVar1 = (double)FUN_18047e140(param_1,3);
  dVar2 = (double)FUN_18047e140(param_1,4);
  dVar3 = (double)FUN_18047e140(param_1,5);
  uVar6 = FUN_180063eb0(param_1,6);
  dVar4 = (double)FUN_18047e5f0(param_1,7,DAT_1808ac500);
  local_res10[4] = 0x100;
  local_res10[0] = 2;
  local_res10[2] = FUN_18047e470(param_1,8,0x20);
  piVar8 = local_res10;
  if (1 < local_res10[2]) {
    piVar8 = local_res10 + 2;
  }
  if (0.0 < (float)dVar1) {
    piVar7 = local_res10 + 4;
    if (local_res10[2] < 0x101) {
      piVar7 = piVar8;
    }
    FUN_1803fddf0(lVar5,&local_68,(float)dVar1,((float)dVar2 * DAT_1808ac680) / DAT_1808acb58,
                  ((float)dVar3 * DAT_1808ac680) / DAT_1808acb58,*piVar7);
    FUN_1803fc600(lVar5,*(undefined8 *)(lVar5 + 0x58),*(undefined4 *)(lVar5 + 0x50),uVar6,
                  (float)dVar4,0);
    *(undefined4 *)(lVar5 + 0x50) = 0;
  }
  return 0;
}



/* ===== 1800a95d0 FUN_1800a95d0 ===== */

undefined8 FUN_1800a95d0(undefined8 param_1)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  int iVar14;
  float fVar15;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar16;
  float local_b8;
  float local_b4;
  undefined8 local_a8;
  longlong local_a0;
  
  lVar9 = DAT_180ccfa78;
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  if (DAT_180ccfa78 == 0) {
    FUN_180484c10(param_1,"render.* draws only inside a paint callback");
  }
  dVar6 = (double)FUN_18047e140(param_1,1);
  dVar7 = (double)FUN_18047e140(param_1,2);
  dVar3 = (double)FUN_18047e140(param_1,3);
  dVar5 = (double)FUN_18047e140(param_1,4);
  dVar4 = (double)FUN_18047e5f0(param_1,5);
  iVar11 = FUN_18047fe10(param_1,6);
  if (iVar11 < 1) {
    uVar12 = 0xffffffff;
  }
  else {
    uVar12 = FUN_180063eb0(param_1,6);
  }
  DAT_180ccfa70 = GetTickCount64();
  lVar10 = DAT_181107cd8;
  if (((((DAT_180cd0fdd == '\0') || (DAT_181107cd8 == 0)) ||
       (fVar15 = *(float *)(DAT_180ca0a50 + 0x30), fVar15 <= 0.0)) ||
      ((fVar1 = *(float *)(DAT_180ca0a50 + 0x34), fVar1 <= 0.0 || ((float)dVar3 <= 0.0)))) ||
     ((float)dVar5 <= 0.0)) {
    uVar13 = 0;
    goto LAB_1800a99cf;
  }
  local_res18 = (float)dVar6;
  local_res1c = (float)dVar7;
  local_res10 = (float)dVar3 + local_res18;
  local_res14 = (float)dVar5 + local_res1c;
  local_b8 = local_res18 / fVar15;
  local_res20 = local_res10 / fVar15;
  local_res24 = local_res14 / fVar1;
  local_b4 = local_res1c / fVar1;
  if ((uVar12 & 0xff000000) != 0) {
    fVar15 = (float)dVar4;
    if (fVar15 <= 0.0) {
      if ((DAT_181107cd8 == *(longlong *)(lVar9 + 0x78)) && (*(longlong *)(lVar9 + 0x70) == 0)) {
        bVar8 = false;
      }
      else {
        iVar11 = *(int *)(lVar9 + 0xb4);
        bVar8 = true;
        if (*(int *)(lVar9 + 0xb0) == iVar11) {
          iVar14 = *(int *)(lVar9 + 0xb0) + 1;
          if (iVar11 == 0) {
            iVar11 = 8;
          }
          else {
            iVar11 = iVar11 / 2 + iVar11;
          }
          if (iVar14 < iVar11) {
            iVar14 = iVar11;
          }
          FUN_1803f7030(lVar9 + 0xb0,iVar14);
        }
        iVar11 = *(int *)(lVar9 + 0xb0);
        lVar2 = *(longlong *)(lVar9 + 0xb8);
        *(undefined8 *)(lVar2 + (longlong)iVar11 * 0x10) = 0;
        *(longlong *)(lVar2 + 8 + (longlong)iVar11 * 0x10) = lVar10;
        *(int *)(lVar9 + 0xb0) = *(int *)(lVar9 + 0xb0) + 1;
        *(undefined8 *)(lVar9 + 0x70) = 0;
        *(longlong *)(lVar9 + 0x78) = lVar10;
        FUN_1803fc0a0(lVar9);
      }
      FUN_1803fc3a0(lVar9,6,4);
      FUN_1803fc4a0(lVar9,&local_res18,&local_res10,&local_b8,&local_res20,CONCAT44(uVar16,uVar12));
      if (bVar8) {
LAB_1800a99a6:
        FUN_1803fc340(lVar9);
      }
    }
    else if (fVar15 < DAT_1808ac1f4) {
      local_a8 = 0;
      local_a0 = DAT_181107cd8;
      FUN_1803fea90(lVar9,&local_a8,&local_res18,&local_res10,&local_b8,&local_res20,uVar12);
    }
    else {
      if ((DAT_181107cd8 == *(longlong *)(lVar9 + 0x78)) && (*(longlong *)(lVar9 + 0x70) == 0)) {
        bVar8 = false;
      }
      else {
        iVar11 = *(int *)(lVar9 + 0xb4);
        bVar8 = true;
        if (*(int *)(lVar9 + 0xb0) == iVar11) {
          iVar14 = *(int *)(lVar9 + 0xb0) + 1;
          if (iVar11 == 0) {
            iVar11 = 8;
          }
          else {
            iVar11 = iVar11 / 2 + iVar11;
          }
          if (iVar14 < iVar11) {
            iVar14 = iVar11;
          }
          FUN_1803f7030(lVar9 + 0xb0,iVar14);
        }
        iVar11 = *(int *)(lVar9 + 0xb0);
        lVar2 = *(longlong *)(lVar9 + 0xb8);
        *(undefined8 *)(lVar2 + (longlong)iVar11 * 0x10) = 0;
        *(longlong *)(lVar2 + 8 + (longlong)iVar11 * 0x10) = lVar10;
        *(int *)(lVar9 + 0xb0) = *(int *)(lVar9 + 0xb0) + 1;
        *(undefined8 *)(lVar9 + 0x70) = 0;
        *(longlong *)(lVar9 + 0x78) = lVar10;
        FUN_1803fc0a0(lVar9);
      }
      uVar16 = *(undefined4 *)(lVar9 + 0x20);
      FUN_1803fe160(lVar9,&local_res18,&local_res10,fVar15,0xf0);
      FUN_1803fd460(lVar9,*(undefined8 *)(lVar9 + 0x58),*(undefined4 *)(lVar9 + 0x50),uVar12);
      *(undefined4 *)(lVar9 + 0x50) = 0;
      FUN_180401c50(lVar9,uVar16,*(undefined4 *)(lVar9 + 0x20),&local_res18,&local_res10,&local_b8,
                    &local_res20);
      if (bVar8) goto LAB_1800a99a6;
    }
  }
  uVar13 = 1;
LAB_1800a99cf:
  FUN_18047f270(param_1,uVar13);
  return 1;
}



/* ===== 1800a9a20 FUN_1800a9a20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1800a9a20(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar5;
  uint uVar4;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int local_res10 [6];
  int local_28 [2];
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_28[1] = 3;
  local_28[0] = 0;
  piVar8 = local_28;
  if (-1 < param_2) {
    piVar8 = local_res10;
  }
  local_20 = _DAT_1808ad630;
  uStack_18 = _UNK_1808ad638;
  piVar6 = local_28 + 1;
  if (param_2 < 4) {
    piVar6 = piVar8;
  }
  iVar1 = local_28[(longlong)*piVar6 + 2];
  uVar4 = 0xffffffff;
  if (*(int *)(param_1 + 8) == iVar1) {
    uVar4 = 0xffffffff;
    if (*(uint *)(param_1 + 0xc) < 0x80000000) {
      uVar4 = *(uint *)(param_1 + 0xc);
    }
  }
  if (*(int *)(param_1 + 0xa0) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0xa4)) {
      uVar4 = *(uint *)(param_1 + 0xa4);
    }
  }
  if (*(int *)(param_1 + 0x138) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0x13c)) {
      uVar4 = *(uint *)(param_1 + 0x13c);
    }
  }
  if (*(int *)(param_1 + 0x1d0) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0x1d4)) {
      uVar4 = *(uint *)(param_1 + 0x1d4);
    }
  }
  if (*(int *)(param_1 + 0x268) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0x26c)) {
      uVar4 = *(uint *)(param_1 + 0x26c);
    }
  }
  if (*(int *)(param_1 + 0x300) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0x304)) {
      uVar4 = *(uint *)(param_1 + 0x304);
    }
  }
  if (*(int *)(param_1 + 0x398) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0x39c)) {
      uVar4 = *(uint *)(param_1 + 0x39c);
    }
  }
  if (*(int *)(param_1 + 0x430) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0x434)) {
      uVar4 = *(uint *)(param_1 + 0x434);
    }
  }
  if (*(int *)(param_1 + 0x4c8) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0x4cc)) {
      uVar4 = *(uint *)(param_1 + 0x4cc);
    }
  }
  if (*(int *)(param_1 + 0x560) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0x564)) {
      uVar4 = *(uint *)(param_1 + 0x564);
    }
  }
  if (*(int *)(param_1 + 0x5f8) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0x5fc)) {
      uVar4 = *(uint *)(param_1 + 0x5fc);
    }
  }
  if (*(int *)(param_1 + 0x690) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0x694)) {
      uVar4 = *(uint *)(param_1 + 0x694);
    }
  }
  if (*(int *)(param_1 + 0x728) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0x72c)) {
      uVar4 = *(uint *)(param_1 + 0x72c);
    }
  }
  if (*(int *)(param_1 + 0x7c0) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0x7c4)) {
      uVar4 = *(uint *)(param_1 + 0x7c4);
    }
  }
  if (*(int *)(param_1 + 0x858) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0x85c)) {
      uVar4 = *(uint *)(param_1 + 0x85c);
    }
  }
  if (*(int *)(param_1 + 0x8f0) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0x8f4)) {
      uVar4 = *(uint *)(param_1 + 0x8f4);
    }
  }
  if (*(int *)(param_1 + 0x988) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0x98c)) {
      uVar4 = *(uint *)(param_1 + 0x98c);
    }
  }
  if (*(int *)(param_1 + 0xa20) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0xa24)) {
      uVar4 = *(uint *)(param_1 + 0xa24);
    }
  }
  if (*(int *)(param_1 + 0xab8) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0xabc)) {
      uVar4 = *(uint *)(param_1 + 0xabc);
    }
  }
  if (*(int *)(param_1 + 0xb50) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0xb54)) {
      uVar4 = *(uint *)(param_1 + 0xb54);
    }
  }
  if (*(int *)(param_1 + 0xbe8) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0xbec)) {
      uVar4 = *(uint *)(param_1 + 0xbec);
    }
  }
  if (*(int *)(param_1 + 0xc80) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0xc84)) {
      uVar4 = *(uint *)(param_1 + 0xc84);
    }
  }
  if (*(int *)(param_1 + 0xd18) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0xd1c)) {
      uVar4 = *(uint *)(param_1 + 0xd1c);
    }
  }
  if (*(int *)(param_1 + 0xdb0) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0xdb4)) {
      uVar4 = *(uint *)(param_1 + 0xdb4);
    }
  }
  if (*(int *)(param_1 + 0xe48) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0xe4c)) {
      uVar4 = *(uint *)(param_1 + 0xe4c);
    }
  }
  if (*(int *)(param_1 + 0xee0) == iVar1) {
    if ((int)uVar4 < (int)*(uint *)(param_1 + 0xee4)) {
      uVar4 = *(uint *)(param_1 + 0xee4);
    }
  }
  pcVar7 = (char *)(param_1 + 0x11d8);
  uVar5 = uVar4;
  if (param_1 != param_1 + 0x740) {
    do {
      if ((*pcVar7 != '\0') && (*(int *)(pcVar7 + 0x44) == param_2)) {
        uVar2 = *(uint *)(pcVar7 + 0x48);
        bVar3 = (int)uVar4 < (int)uVar2;
        uVar4 = uVar5;
        if (bVar3) {
          uVar4 = uVar2;
          uVar5 = uVar2;
        }
      }
      pcVar7 = pcVar7 + 0x74;
    } while (pcVar7 != (char *)(param_1 + 0x1918));
  }
  return uVar4 + 1;
}



/* ===== 1800a9cd0 FUN_1800a9cd0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800a9cd0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  char *_Str2;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  undefined4 local_78;
  undefined4 local_48;
  
  iVar9 = FUN_1800aa840();
  pcVar7 = DAT_180cd02e0;
  pcVar6 = DAT_180cd02d8;
  if (iVar9 < 0) {
    uVar14 = 0;
    uVar13 = 0xffffffff;
    do {
      if (-1 < (int)uVar13) break;
      uVar8 = (uint)uVar14;
      if (*(char *)(param_1 + 0x11d8 + uVar14 * 0x74) != '\0') {
        uVar8 = uVar13;
      }
      uVar13 = uVar8;
      uVar14 = uVar14 + 1;
    } while (uVar14 < 0x10);
    uVar14 = 0;
    do {
      if (-1 < (int)uVar13) goto LAB_1800a9ddc;
      pcVar4 = pcVar6;
      if (*(char *)(uVar14 * 0x74 + 0x11d8 + param_1) != '\0') {
        for (; pcVar4 != pcVar7; pcVar4 = pcVar4 + 0xa0) {
          if (*(ulonglong *)(pcVar4 + 0x10) < 0x40) {
            if (*(ulonglong *)(pcVar4 + 0x18) < 0x10) {
              _Str2 = pcVar4;
            }
            else {
              _Str2 = *(char **)pcVar4;
            }
            iVar9 = strncmp((char *)(param_1 + 0x11d8 + uVar14 * 0x74),_Str2,0x40);
            if (iVar9 == 0) {
              bVar3 = true;
              goto LAB_1800a9dc1;
            }
          }
        }
      }
      bVar3 = false;
LAB_1800a9dc1:
      uVar8 = (uint)uVar14;
      if (bVar3) {
        uVar8 = uVar13;
      }
      uVar13 = uVar8;
      uVar14 = uVar14 + 1;
    } while (uVar14 < 0x10);
    if (-1 < (int)uVar13) {
LAB_1800a9ddc:
      uVar5 = _UNK_1808ad948;
      uVar2 = _DAT_1808ad940;
      local_res18[0] = 3;
      local_res10[0] = 0;
      local_78 = CONCAT31(local_78._1_3_,1);
      puVar15 = (undefined8 *)local_res10;
      if (-1 < *(int *)(param_2 + 0xe)) {
        puVar15 = param_2 + 0xe;
      }
      puVar11 = (undefined8 *)local_res18;
      if (*(int *)(param_2 + 0xe) < 4) {
        puVar11 = puVar15;
      }
      uVar1 = *(undefined4 *)puVar11;
      lVar12 = (ulonglong)uVar13 * 0x74;
      local_48 = CONCAT22(local_48._2_2_,0x100);
      puVar15 = (undefined8 *)(param_1 + 0x11d8 + lVar12);
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[6] = 0;
      puVar15[7] = 0;
      puVar15[8] = CONCAT44(3,local_78);
      puVar15[9] = 0x3f80000000000000;
      puVar15[10] = uVar2;
      puVar15[0xb] = uVar5;
      *(undefined4 *)(puVar15 + 0xc) = 0x3df5c28f;
      *(undefined4 *)((longlong)puVar15 + 100) = 0x3df5c28f;
      *(undefined4 *)(puVar15 + 0xd) = 0x3f800000;
      *(undefined4 *)((longlong)puVar15 + 0x6c) = 0xc;
      *(undefined4 *)(puVar15 + 0xe) = local_48;
      uVar10 = FUN_1800a9a20(param_1,uVar1);
      *(undefined4 *)(lVar12 + 0x1220 + param_1) = uVar10;
      if ((ulonglong)param_2[3] < 0x10) {
        puVar11 = param_2;
      }
      else {
        puVar11 = (undefined8 *)*param_2;
      }
      snprintf(puVar15,0x40,&DAT_1806d3198,puVar11);
      *(undefined1 *)(lVar12 + 0x1218 + param_1) = 1;
      *(undefined4 *)(lVar12 + 0x121c + param_1) = uVar1;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x7c);
      puVar15 = (undefined8 *)(lVar12 + 0x1224 + param_1);
      *puVar15 = *(undefined8 *)((longlong)param_2 + 0x74);
      puVar15[1] = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x8c);
      puVar15 = (undefined8 *)(lVar12 + 0x1234 + param_1);
      *puVar15 = *(undefined8 *)((longlong)param_2 + 0x84);
      puVar15[1] = uVar2;
      *(undefined4 *)(lVar12 + 0x1244 + param_1) = *(undefined4 *)((longlong)param_2 + 0x94);
      *(undefined1 *)(lVar12 + 0x1248 + param_1) = *(undefined1 *)(param_2 + 0x13);
      *(undefined1 *)(lVar12 + 0x1249 + param_1) = *(undefined1 *)((longlong)param_2 + 0x99);
    }
  }
  return;
}



/* ===== 1800a9fa0 FUN_1800a9fa0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800a9fa0(undefined8 *param_1,longlong param_2)

{
  size_t sVar1;
  size_t _Size;
  code *pcVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  undefined8 *_Buf1;
  ulonglong uVar7;
  undefined8 *_Buf2;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined *local_98;
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_b8;
  local_98 = &DAT_1809e8f40;
  iVar4 = FUN_1804e4d70(&DAT_1809e8f40);
  puVar3 = DAT_180cd02f8;
  puVar10 = auStack_b8;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8f8c == 0x7fffffff) {
    DAT_1809e8f8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  sVar1 = param_1[2];
  if (sVar1 - 1 < 0x3f) {
    if (DAT_180cd02f0 != DAT_180cd02f8) {
      uVar7 = param_1[3];
      puVar9 = DAT_180cd02f0;
      do {
        if (uVar7 < 0x10) {
          _Buf2 = param_1;
        }
        else {
          _Buf2 = (undefined8 *)*param_1;
        }
        _Size = puVar9[2];
        if ((ulonglong)puVar9[3] < 0x10) {
          _Buf1 = puVar9;
        }
        else {
          _Buf1 = (undefined8 *)*puVar9;
        }
        if (_Size == sVar1) {
          if (_Size != 0) {
            iVar4 = memcmp(_Buf1,_Buf2,_Size);
            if (iVar4 != 0) goto LAB_1800aa06c;
          }
          if (puVar9[0xd] != param_1[0xd]) {
            if (param_2 != 0) {
              uVar5 = FUN_180066a20(local_70,&DAT_1806e17c8,param_1 + 4);
              puVar6 = (ulonglong *)FUN_1800134a0(uVar5,"\' is already used by ",0x15);
              local_90 = *puVar6;
              uStack_88 = puVar6[1];
              local_80 = puVar6[2];
              uStack_78 = puVar6[3];
              puVar6[2] = 0;
              puVar6[3] = 0xf;
              *(undefined1 *)puVar6 = 0;
              uVar5 = FUN_1800667a0(local_50,&local_90,puVar9 + 8);
              FUN_18002ba60(param_2,uVar5);
              FUN_18000f890(local_50);
              if (0xf < uStack_78) {
                uVar8 = uStack_78 + 1;
                uVar7 = local_90;
                if (0xfff < uVar8) {
                  uVar7 = *(ulonglong *)(local_90 - 8);
                  if (0x1f < (local_90 - uVar7) - 8) {
                    pcVar2 = (code *)swi(0x29);
                    (*pcVar2)(5);
                    puVar10 = auStack_b0;
                    goto LAB_1800aa242;
                  }
                  uVar8 = uStack_78 + 0x28;
                }
                thunk_FUN_1803d64e0(uVar7,uVar8);
              }
              local_80 = 0;
              uStack_78 = 0xf;
              local_90 = local_90 & 0xffffffffffffff00;
              FUN_18000f890(local_70);
            }
            goto LAB_1800aa2b9;
          }
LAB_1800aa242:
          *(undefined8 *)(puVar10 + -8) = 0x1800aa24d;
          FUN_1800aa320(puVar9,param_1);
          _DAT_1809e8f90 = _DAT_1809e8f90 + 1;
          uVar5 = 1;
          goto LAB_1800aa2bb;
        }
LAB_1800aa06c:
        puVar9 = puVar9 + 0x14;
      } while (puVar9 != puVar3);
    }
    puVar10 = auStack_b8;
    if ((ulonglong)(((longlong)puVar3 - (longlong)DAT_180cd02f0 >> 5) * -0x3333333333333333) < 0x10)
    {
LAB_1800aa25f:
      if (puVar3 == DAT_180cd0300) {
        *(undefined8 *)(puVar10 + -8) = 0x1800aa294;
        FUN_1800aae00();
        _DAT_1809e8f90 = _DAT_1809e8f90 + 1;
        uVar5 = 1;
      }
      else {
        *(undefined8 *)(puVar10 + -8) = 0x1800aa273;
        FUN_1800ab250(puVar3,param_1);
        DAT_180cd02f8 = DAT_180cd02f8 + 0x14;
        _DAT_1809e8f90 = _DAT_1809e8f90 + 1;
        uVar5 = 1;
      }
      goto LAB_1800aa2bb;
    }
    if (param_2 != 0) {
      uVar5 = FUN_18004e4f0(local_70,0x10);
      puVar6 = (ulonglong *)FUN_1800134a0(uVar5," lua esp elements at most",0x19);
      local_90 = *puVar6;
      uStack_88 = puVar6[1];
      local_80 = puVar6[2];
      uStack_78 = puVar6[3];
      puVar6[2] = 0;
      puVar6[3] = 0xf;
      *(undefined1 *)puVar6 = 0;
      FUN_18002ba60(param_2,&local_90);
      if (0xf < uStack_78) {
        uVar8 = uStack_78 + 1;
        uVar7 = local_90;
        if (0xfff < uVar8) {
          uVar7 = *(ulonglong *)(local_90 - 8);
          if (0x1f < (local_90 - uVar7) - 8) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar10 = auStack_b0;
            goto LAB_1800aa25f;
          }
          uVar8 = uStack_78 + 0x28;
        }
        thunk_FUN_1803d64e0(uVar7,uVar8);
      }
      FUN_18000f890(local_70);
    }
  }
  else if (param_2 != 0) {
    FUN_180029840(param_2,"the name must be 1..48 characters",0x21);
  }
LAB_1800aa2b9:
  puVar10 = auStack_b8;
  uVar5 = 0;
LAB_1800aa2bb:
  *(undefined8 *)(puVar10 + -8) = 0x1800aa2c7;
  FUN_1804e4e90(&DAT_1809e8f40);
  *(undefined8 *)(puVar10 + -8) = 0x1800aa2da;
  return uVar5;
}



/* ===== 1800aa320 FUN_1800aa320 ===== */

undefined8 * FUN_1800aa320(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar2 = (undefined8 *)*param_2;
    }
    FUN_180029840(param_1,puVar2,param_2[2]);
    plVar3 = param_2 + 4;
    if (0xf < (ulonglong)param_2[7]) {
      plVar3 = (longlong *)*plVar3;
    }
    FUN_180029840(param_1 + 4,plVar3,param_2[6]);
    plVar3 = param_2 + 8;
    if (0xf < (ulonglong)param_2[0xb]) {
      plVar3 = (longlong *)*plVar3;
    }
    FUN_180029840(param_1 + 8,plVar3,param_2[10]);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x7c);
  *(undefined8 *)((longlong)param_1 + 0x74) = *(undefined8 *)((longlong)param_2 + 0x74);
  *(undefined8 *)((longlong)param_1 + 0x7c) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x8c);
  *(undefined8 *)((longlong)param_1 + 0x84) = *(undefined8 *)((longlong)param_2 + 0x84);
  *(undefined8 *)((longlong)param_1 + 0x8c) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x99) = *(undefined1 *)((longlong)param_2 + 0x99);
  return param_1;
}



/* ===== 1800aa3e0 FUN_1800aa3e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800aa3e0(undefined8 *param_1)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t _Size;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *_Buf1;
  undefined8 *puVar6;
  undefined8 *_Buf2;
  undefined8 *puVar7;
  longlong lVar8;
  
  iVar4 = FUN_1804e4d70(&DAT_1809e8f40);
  puVar3 = DAT_180cd02f8;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8f8c == 0x7fffffff) {
    DAT_1809e8f8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar8 = (longlong)DAT_180cd02f8 - (longlong)DAT_180cd02f0;
  if (DAT_180cd02f0 != DAT_180cd02f8) {
    uVar1 = param_1[3];
    sVar2 = param_1[2];
    puVar7 = DAT_180cd02f0;
    do {
      puVar6 = param_1;
      if (0xf < uVar1) {
        puVar6 = (undefined8 *)*param_1;
      }
      _Size = puVar7[2];
      if ((ulonglong)puVar7[3] < 0x10) {
        puVar5 = puVar7;
      }
      else {
        puVar5 = (undefined8 *)*puVar7;
      }
    } while (((_Size != sVar2) ||
             ((_Size != 0 && (iVar4 = memcmp(puVar5,puVar6,_Size), iVar4 != 0)))) &&
            (puVar7 = puVar7 + 0x14, puVar7 != puVar3));
    puVar6 = puVar7;
    if (puVar7 != puVar3) {
      while (puVar5 = puVar6 + 0x14, puVar5 != puVar3) {
        if ((ulonglong)param_1[3] < 0x10) {
          _Buf2 = param_1;
        }
        else {
          _Buf2 = (undefined8 *)*param_1;
        }
        sVar2 = puVar6[0x16];
        if ((ulonglong)puVar6[0x17] < 0x10) {
          _Buf1 = puVar5;
        }
        else {
          _Buf1 = (undefined8 *)*puVar5;
        }
        puVar6 = puVar5;
        if ((sVar2 != param_1[2]) ||
           ((sVar2 != 0 && (iVar4 = memcmp(_Buf1,_Buf2,sVar2), iVar4 != 0)))) {
          FUN_1800aa8d0(puVar7,puVar5);
          puVar7 = puVar7 + 0x14;
        }
      }
    }
  }
  FUN_1800aa960();
  if ((longlong)DAT_180cd02f8 - (longlong)DAT_180cd02f0 != lVar8) {
    _DAT_1809e8f90 = _DAT_1809e8f90 + 1;
  }
  FUN_1804e4e90(&DAT_1809e8f40);
  return;
}



/* ===== 1800aa570 FUN_1800aa570 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800aa570(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar5 = FUN_1804e4d70(&DAT_1809e8f40);
  lVar4 = DAT_180cd02f8;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8f8c == 0x7fffffff) {
    DAT_1809e8f8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar7 = DAT_180cd02f8 - DAT_180cd02f0;
  lVar6 = DAT_180cd02f0;
  if (DAT_180cd02f0 != DAT_180cd02f8) {
    do {
      if (*(longlong *)(lVar6 + 0x68) == param_1) break;
      lVar6 = lVar6 + 0xa0;
    } while (lVar6 != DAT_180cd02f8);
    lVar3 = lVar6;
    if (lVar6 != DAT_180cd02f8) {
      while (lVar2 = lVar3 + 0xa0, lVar2 != lVar4) {
        plVar1 = (longlong *)(lVar3 + 0x108);
        lVar3 = lVar2;
        if (*plVar1 != param_1) {
          FUN_1800aa8d0(lVar6,lVar2);
          lVar6 = lVar6 + 0xa0;
        }
      }
    }
  }
  FUN_1800aa960();
  if (DAT_180cd02f8 - DAT_180cd02f0 != lVar7) {
    _DAT_1809e8f90 = _DAT_1809e8f90 + 1;
  }
  FUN_1804e4e90(&DAT_1809e8f40);
  return;
}



/* ===== 1800aa690 FUN_1800aa690 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800aa690(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar4 = FUN_1804e4d70(&DAT_1809e8f40);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8f8c == 0x7fffffff) {
    DAT_1809e8f8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180cd02d0 != _DAT_1809e8f90) {
    FUN_1800aab10(&DAT_180cd02f0,DAT_180cd02f0,
                  (DAT_180cd02f8 - DAT_180cd02f0 >> 5) * -0x3333333333333333);
    DAT_180cd02d0 = _DAT_1809e8f90;
  }
  FUN_1804e4e90(&DAT_1809e8f40);
  puVar5 = &DAT_18091a1e0;
  lVar1 = DAT_180cd02d8;
  lVar2 = DAT_180cd02e0;
  do {
    for (; lVar3 = DAT_180cd02e0, lVar1 != DAT_180cd02e0; lVar1 = lVar1 + 0xa0) {
      DAT_180cd02e0 = lVar2;
      FUN_1800a9cd0(puVar5,lVar1);
      lVar2 = DAT_180cd02e0;
      DAT_180cd02e0 = lVar3;
    }
    DAT_180cd02e0 = lVar2;
    puVar5 = puVar5 + 0x192c;
    lVar1 = DAT_180cd02d8;
  } while (puVar5 != &DAT_180920690);
  return;
}



/* ===== 1800aa7a0 FUN_1800aa7a0 ===== */

char * FUN_1800aa7a0(longlong param_1,ulonglong param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *_Str2;
  
  pcVar2 = DAT_180cd02e0;
  if ((param_2 < 0x10) &&
     (param_1 = param_2 * 0x74 + param_1, pcVar1 = DAT_180cd02d8,
     *(char *)(param_1 + 0x11d8) != '\0')) {
    for (; pcVar1 != pcVar2; pcVar1 = pcVar1 + 0xa0) {
      if (*(ulonglong *)(pcVar1 + 0x10) < 0x40) {
        if (*(ulonglong *)(pcVar1 + 0x18) < 0x10) {
          _Str2 = pcVar1;
        }
        else {
          _Str2 = *(char **)pcVar1;
        }
        iVar3 = strncmp((char *)(param_1 + 0x11d8),_Str2,0x40);
        if (iVar3 == 0) {
          return pcVar1;
        }
      }
    }
  }
  return (char *)0x0;
}



/* ===== 1800aa840 FUN_1800aa840 ===== */

ulonglong FUN_1800aa840(longlong param_1,char *param_2)

{
  int iVar1;
  char *_Str2;
  ulonglong uVar2;
  
  uVar2 = 0;
  do {
    if ((*(char *)(param_1 + 0x11d8 + uVar2 * 0x74) != '\0') &&
       (*(ulonglong *)(param_2 + 0x10) < 0x40)) {
      if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
        _Str2 = param_2;
      }
      else {
        _Str2 = *(char **)param_2;
      }
      iVar1 = strncmp((char *)(param_1 + 0x11d8 + uVar2 * 0x74),_Str2,0x40);
      if (iVar1 == 0) {
        return uVar2 & 0xffffffff;
      }
    }
    uVar2 = uVar2 + 1;
    if (0xf < uVar2) {
      return 0xffffffff;
    }
  } while( true );
}



/* ===== 1800aa8d0 FUN_1800aa8d0 ===== */

longlong FUN_1800aa8d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_18002ba60();
  FUN_18002ba60(param_1 + 0x20,param_2 + 0x20);
  FUN_18002ba60(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  uVar1 = *(undefined8 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x7c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x99);
  return param_1;
}



/* ===== 1800aa960 FUN_1800aa960 ===== */

longlong * FUN_1800aa960(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = DAT_180cd02f8;
  lVar2 = param_3;
  lVar3 = DAT_180cd02f8;
  if (param_3 == param_4) {
    *param_2 = param_3;
    return param_2;
  }
  for (; lVar1 = lVar2, DAT_180cd02f8 = lVar3, param_4 != lVar4; param_4 = param_4 + 0xa0) {
    FUN_1800aa8d0(lVar2,param_4);
    lVar2 = lVar2 + 0xa0;
    lVar3 = DAT_180cd02f8;
  }
  for (; lVar1 != lVar3; lVar1 = lVar1 + 0xa0) {
    FUN_18000f890(lVar1 + 0x40);
    FUN_18000f890(lVar1 + 0x20);
    FUN_18000f890(lVar1);
  }
  DAT_180cd02f8 = lVar2;
  *param_2 = param_3;
  return param_2;
}



/* ===== 1800aaa40 FUN_1800aaa40 ===== */

void FUN_1800aaa40(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0xa0) {
    FUN_18000f890(lVar3 + 0x40);
    FUN_18000f890(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 5) << 5)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800aaae0;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1800aaae0:
  *(undefined8 *)(puVar5 + -8) = 0x1800aaae8;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800aab00 FUN_1800aab00 ===== */

longlong FUN_1800aab00(longlong param_1,longlong param_2)

{
  return param_2 + param_1;
}



/* ===== 1800aab10 FUN_1800aab10 ===== */

void FUN_1800aab10(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  uVar4 = DAT_180cd02e0;
  puVar6 = auStack_58;
  puVar7 = auStack_58;
  uVar3 = ((longlong)(DAT_180cd02e8 - DAT_180cd02d8) >> 5) * -0x3333333333333333;
  if (param_3 <= uVar3) {
    lVar9 = (longlong)(DAT_180cd02e0 - DAT_180cd02d8) >> 5;
    if ((ulonglong)(lVar9 * -0x3333333333333333) < param_3) {
      uVar3 = DAT_180cd02d8;
      if (DAT_180cd02d8 != DAT_180cd02e0) {
        do {
          FUN_1800aa320(uVar3,param_2);
          uVar3 = uVar3 + 0xa0;
          param_2 = param_2 + 0xa0;
        } while (uVar3 != DAT_180cd02e0);
      }
      DAT_180cd02e0 =
           FUN_1800aad90(param_2,param_3 + lVar9 * 0x3333333333333333,DAT_180cd02e0,&DAT_180cd02d8);
      return;
    }
    uVar5 = param_3 * 0xa0 + DAT_180cd02d8;
    uVar3 = DAT_180cd02d8;
    for (; uVar2 = uVar5, DAT_180cd02e0 = uVar4, param_3 != 0; param_3 = param_3 - 1) {
      FUN_1800aa320(uVar3,param_2);
      uVar3 = uVar3 + 0xa0;
      param_2 = param_2 + 0xa0;
      uVar4 = DAT_180cd02e0;
    }
    for (; uVar2 != uVar4; uVar2 = uVar2 + 0xa0) {
      FUN_18000f890(uVar2 + 0x40);
      FUN_18000f890(uVar2 + 0x20);
      FUN_18000f890(uVar2);
    }
    DAT_180cd02e0 = uVar5;
    return;
  }
  if (0x199999999999999 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  if (0x199999999999999 - (uVar3 >> 1) < uVar3) {
    uVar3 = 0x199999999999999;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar3 < param_3) {
      uVar3 = param_3;
    }
  }
  puVar8 = auStack_58;
  uVar5 = DAT_180cd02d8;
  if (DAT_180cd02d8 == 0) goto LAB_1800aac2c;
  for (; uVar5 != uVar4; uVar5 = uVar5 + 0xa0) {
    FUN_18000f890(uVar5 + 0x40);
    FUN_18000f890(uVar5 + 0x20);
    FUN_18000f890(uVar5);
  }
  uVar4 = DAT_180cd02d8;
  if ((ulonglong)(((longlong)(DAT_180cd02e8 - DAT_180cd02d8) >> 5) << 5) < 0x1000) {
LAB_1800aac0e:
    puVar7 = puVar6;
  }
  else {
    uVar4 = *(ulonglong *)(DAT_180cd02d8 - 8);
    uVar5 = (DAT_180cd02d8 - uVar4) - 8;
    if (0x1f < uVar5) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar6 = auStack_50;
      uVar4 = uVar5;
      goto LAB_1800aac0e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800aac16;
  thunk_FUN_1803d64e0(uVar4);
  DAT_180cd02e8 = 0;
  DAT_180cd02d8 = 0;
  DAT_180cd02e0 = 0;
  puVar8 = puVar7;
LAB_1800aac2c:
  if (0x199999999999999 < uVar3) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_1800aad7f;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar8 + -8) = 0x1800aac45;
  DAT_180cd02d8 = FUN_18000fb70(uVar3 * 0xa0);
  DAT_180cd02e8 = uVar3 * 0xa0 + DAT_180cd02d8;
  *(undefined8 *)(puVar8 + -8) = 0x1800aac73;
  DAT_180cd02e0 = DAT_180cd02d8;
  DAT_180cd02e0 = FUN_1800aad90(param_2,param_3,DAT_180cd02d8,&DAT_180cd02d8);
  return;
}



/* ===== 1800aad90 FUN_1800aad90 ===== */

longlong FUN_1800aad90(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1800ab250(param_3,param_1);
    param_3 = param_3 + 0xa0;
    param_1 = param_1 + 0xa0;
  }
  return param_3;
}



/* ===== 1800aae00 FUN_1800aae00 ===== */

longlong FUN_1800aae00(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  
  uVar6 = DAT_180cd02f0;
  lVar3 = ((longlong)(DAT_180cd02f8 - DAT_180cd02f0) >> 5) * -0x3333333333333333;
  uVar7 = 0x199999999999999;
  if (lVar3 == 0x199999999999999) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar3 + 1;
  uVar5 = ((longlong)(DAT_180cd0300 - DAT_180cd02f0) >> 5) * -0x3333333333333333;
  if (uVar5 <= 0x199999999999999 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar7 = uVar1;
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x199999999999999 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar7 * 0xa0);
  lVar11 = ((longlong)(param_2 - uVar6) / 0xa0) * 0xa0 + lVar4;
  lVar3 = lVar11 + 0xa0;
  local_78 = &DAT_180cd02f0;
  local_70 = lVar4;
  local_68 = uVar7;
  local_60 = lVar3;
  local_58 = lVar3;
  FUN_1800ab250(lVar11,param_3);
  uVar6 = DAT_180cd02f0;
  lVar10 = lVar4;
  if (param_2 != DAT_180cd02f8) {
    FUN_1800ab020(DAT_180cd02f0,param_2,lVar4);
    uVar6 = param_2;
    lVar10 = lVar3;
  }
  puVar8 = auStack_98;
  puVar9 = auStack_98;
  FUN_1800ab020(uVar6,DAT_180cd02f8,lVar10);
  uVar5 = DAT_180cd02f8;
  uVar6 = DAT_180cd02f0;
  if (DAT_180cd02f0 == 0) goto LAB_1800aafd0;
  for (; uVar6 != uVar5; uVar6 = uVar6 + 0xa0) {
    FUN_18000f890(uVar6 + 0x40);
    FUN_18000f890(uVar6 + 0x20);
    FUN_18000f890(uVar6);
  }
  uVar6 = DAT_180cd02f0;
  if ((ulonglong)(((longlong)(DAT_180cd0300 - DAT_180cd02f0) >> 5) << 5) < 0x1000) {
LAB_1800aafc8:
    puVar9 = puVar8;
  }
  else {
    uVar6 = *(ulonglong *)(DAT_180cd02f0 - 8);
    uVar5 = (DAT_180cd02f0 - uVar6) - 8;
    if (0x1f < uVar5) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar8 = auStack_90;
      uVar6 = uVar5;
      goto LAB_1800aafc8;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x1800aafd0;
  thunk_FUN_1803d64e0(uVar6);
LAB_1800aafd0:
  DAT_180cd02f0 = lVar4;
  DAT_180cd02f8 = uVar1 * 0xa0 + lVar4;
  DAT_180cd0300 = uVar7 * 0xa0 + lVar4;
  return lVar11;
}



/* ===== 1800ab020 FUN_1800ab020 ===== */

undefined8 * FUN_1800ab020(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
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
    param_1[10] = 0;
    param_1[0xb] = 0xf;
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    param_3[0xd] = param_1[0xd];
    *(undefined4 *)(param_3 + 0xe) = *(undefined4 *)(param_1 + 0xe);
    uVar1 = *(undefined8 *)((longlong)param_1 + 0x7c);
    *(undefined8 *)((longlong)param_3 + 0x74) = *(undefined8 *)((longlong)param_1 + 0x74);
    *(undefined8 *)((longlong)param_3 + 0x7c) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_1 + 0x8c);
    *(undefined8 *)((longlong)param_3 + 0x84) = *(undefined8 *)((longlong)param_1 + 0x84);
    *(undefined8 *)((longlong)param_3 + 0x8c) = uVar1;
    *(undefined4 *)((longlong)param_3 + 0x94) = *(undefined4 *)((longlong)param_1 + 0x94);
    *(undefined1 *)(param_3 + 0x13) = *(undefined1 *)(param_1 + 0x13);
    *(undefined1 *)((longlong)param_3 + 0x99) = *(undefined1 *)((longlong)param_1 + 0x99);
    param_3 = param_3 + 0x14;
  }
  return param_3;
}



/* ===== 1800ab140 FUN_1800ab140 ===== */

void FUN_1800ab140(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0xa0) {
    FUN_18000f890(lVar2 + 0x40);
    FUN_18000f890(lVar2 + 0x20);
    FUN_18000f890(lVar2);
  }
  return;
}



/* ===== 1800ab190 FUN_1800ab190 ===== */

void FUN_1800ab190(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar4 = *(longlong *)(param_1 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 0xa0) {
    FUN_18000f890(lVar4 + 0x40);
    FUN_18000f890(lVar4 + 0x20);
    FUN_18000f890(lVar4);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 0xa0;
  if (0xfff < uVar3) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
    if ((*(longlong *)(param_1 + 8) - lVar4) - 8U < 0x20) {
      thunk_FUN_1803d64e0(lVar4,uVar3 + 0x27);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
  }
  thunk_FUN_1803d64e0();
  return;
}



/* ===== 1800ab250 FUN_1800ab250 ===== */

longlong FUN_1800ab250(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_180024b50();
  FUN_180024b50(param_1 + 0x20,param_2 + 0x20);
  FUN_180024b50(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  uVar1 = *(undefined8 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x7c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x99);
  return param_1;
}



/* ===== 1800ab2f0 FUN_1800ab2f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800ab2f0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_118 [32];
  float local_f8;
  undefined8 local_e8 [2];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  ulonglong local_98;
  
  local_98 = DAT_180919500 ^ (ulonglong)auStack_118;
  if (DAT_180962080 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_18000f3a0();
  }
  if (lVar8 != DAT_180cd0320) {
    DAT_180cd0308 = 0;
    DAT_180ca1c3f = '\0';
    DAT_180cd0320 = lVar8;
  }
  uVar12 = DAT_180cd0308;
  fVar16 = DAT_180cd0310;
  fVar1 = DAT_180cd0314;
  fVar6 = DAT_180cd0318;
  if (lVar8 != 0) {
    fVar15 = 0.0;
    if ((DAT_180961a50 == 0) || (lVar8 = FUN_18000f3a0(), lVar8 == 0)) {
      fVar13 = 0.0;
    }
    else {
      fVar13 = (float)FUN_18000f3d0(lVar8 + 0x30);
    }
    fVar2 = DAT_1808ac064;
    uVar10 = 0;
    if (DAT_180921050 == '\0') {
      if (uVar12 != 0) {
        do {
          iVar7 = *(int *)(&DAT_1809e8fa0 + uVar10);
          if ((iVar7 != -1) && (DAT_180962080 != 0)) {
            lVar8 = FUN_18000f3a0();
            if (lVar8 != 0) {
              FUN_18007eb70(lVar8,iVar7);
              uVar12 = DAT_180cd0308;
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar12);
      }
      DAT_180cd0308 = 0;
      DAT_180ca1c3f = '\0';
      fVar16 = DAT_180cd0310;
      fVar1 = DAT_180cd0314;
      fVar6 = DAT_180cd0318;
    }
    else {
      uVar11 = 0;
      fVar16 = DAT_1808ac064;
      if (DAT_1808ac064 <= DAT_180921068) {
        fVar16 = DAT_180921068;
      }
      if (uVar12 != 0) {
        do {
          fVar1 = *(float *)((longlong)&DAT_1809e8fa0 + uVar10 * 8 + 4);
          if ((fVar13 < fVar1) || (fVar16 < fVar13 - fVar1)) {
            iVar7 = *(int *)(&DAT_1809e8fa0 + uVar10);
            if ((iVar7 != -1) && (DAT_180962080 != 0)) {
              lVar8 = FUN_18000f3a0();
              if (lVar8 != 0) {
                FUN_18007eb70(lVar8,iVar7);
                uVar12 = DAT_180cd0308;
              }
            }
          }
          else {
            (&DAT_1809e8fa0)[uVar11] = (&DAT_1809e8fa0)[uVar10];
            uVar11 = uVar11 + 1;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar12);
      }
      DAT_180cd0308 = uVar11;
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(local_e8);
        DAT_181108a00 = local_e8[0];
        DAT_1811089f8 = FUN_1803a0c50(local_e8);
        DAT_180cd1304 = '\x01';
      }
      lVar8 = DAT_1811089f8;
      uVar12 = DAT_180cd0308;
      if (((DAT_1811089f8 == 0) || (DAT_180ca09f0 == 0)) ||
         (iVar7 = FUN_180011200(DAT_1811089f8 + (ulonglong)DAT_180ca09f0), 999 < iVar7 - 1U)) {
        DAT_180ca1c3f = '\0';
        fVar16 = DAT_180cd0310;
        fVar1 = DAT_180cd0314;
        fVar6 = DAT_180cd0318;
      }
      else {
        if (((DAT_180ca09f8 == 0) ||
            (lVar8 = FUN_18000f3a0(lVar8 + (ulonglong)DAT_180ca09f8), lVar8 == 0)) ||
           (DAT_180ca0950 == 0)) {
          fVar18 = 0.0;
          fVar17 = 0.0;
        }
        else {
          pfVar9 = (float *)FUN_1800111b0(local_e8,lVar8 + (ulonglong)DAT_180ca0950);
          fVar15 = *pfVar9;
          fVar18 = pfVar9[1];
          fVar17 = pfVar9[2];
        }
        fVar5 = DAT_180cd0318;
        fVar4 = DAT_180cd0314;
        fVar3 = DAT_180cd0310;
        fVar16 = DAT_180cd0310;
        fVar1 = DAT_180cd0314;
        fVar6 = DAT_180cd0318;
        if (((((uint)fVar15 & 0x7f800000) != 0x7f800000) &&
            (((uint)fVar18 & 0x7f800000) != 0x7f800000)) &&
           (fVar17 = fVar17 + DAT_1808ac540, ((uint)fVar17 & 0x7f800000) != 0x7f800000)) {
          fVar16 = fVar15;
          fVar1 = fVar18;
          fVar6 = fVar17;
          if (DAT_180ca1c3f == '\0') {
            DAT_180ca1c3f = '\x01';
          }
          else {
            fVar14 = (fVar18 - DAT_180cd0314) * (fVar18 - DAT_180cd0314) +
                     (fVar15 - DAT_180cd0310) * (fVar15 - DAT_180cd0310) +
                     (fVar17 - DAT_180cd0318) * (fVar17 - DAT_180cd0318);
            if (fVar14 < 0.0) {
              fVar14 = (float)FUN_18051af10(fVar14);
            }
            else {
              fVar14 = SQRT(fVar14);
            }
            iVar7 = (int)DAT_1809e8fa0;
            if (fVar14 <= DAT_1808acafc) {
              fVar16 = DAT_180cd0310;
              fVar1 = DAT_180cd0314;
              fVar6 = DAT_180cd0318;
              if (DAT_1808ac838 <= fVar14) {
                local_d8 = fVar3;
                local_d4 = fVar4;
                local_d0 = fVar5;
                if (0x17f < uVar12) {
                  if (((int)DAT_1809e8fa0 != -1) && (DAT_180962080 != 0)) {
                    lVar8 = FUN_18000f3a0();
                    if (lVar8 != 0) {
                      FUN_18007eb70(lVar8,iVar7);
                      uVar12 = DAT_180cd0308;
                    }
                  }
                  FUN_180540530(&DAT_1809e8fa0,&DAT_1809e8fa8,uVar12 * 8 + -8);
                  DAT_180cd0308 = uVar12 - 1;
                  local_d8 = DAT_180cd0310;
                  local_d4 = DAT_180cd0314;
                  local_d0 = DAT_180cd0318;
                }
                local_bc = (fVar18 - local_d4) * DAT_1808ac1f4 + local_d4;
                local_c0 = (fVar15 - local_d8) * DAT_1808ac1f4 + local_d8;
                local_b8 = (fVar17 - local_d0) * DAT_1808ac1f4 + local_d0;
                local_c8 = (local_bc - local_d4) * fVar2 + local_d4;
                local_cc = (local_c0 - local_d8) * fVar2 + local_d8;
                local_f8 = fVar2;
                if (fVar2 <= DAT_180921068) {
                  local_f8 = DAT_180921068;
                }
                local_ac = (fVar17 - local_b8) * DAT_1808ac2f0 + local_b8;
                local_c4 = (local_b8 - local_d0) * fVar2 + local_d0;
                local_b4 = (fVar15 - local_c0) * DAT_1808ac2f0 + local_c0;
                local_b0 = (fVar18 - local_bc) * DAT_1808ac2f0 + local_bc;
                local_a8 = fVar15;
                local_a4 = fVar18;
                local_a0 = fVar17;
                iVar7 = FUN_1802062d0(&local_d8,local_ac,&DAT_180921054,DAT_180921064);
                fVar16 = fVar15;
                fVar1 = fVar18;
                fVar6 = fVar17;
                if (iVar7 != -1) {
                  *(int *)(&DAT_1809e8fa0 + DAT_180cd0308) = iVar7;
                  lVar8 = DAT_180cd0308 * 8;
                  DAT_180cd0308 = DAT_180cd0308 + 1;
                  *(float *)((longlong)&DAT_1809e8fa0 + lVar8 + 4) = fVar13;
                }
              }
            }
          }
        }
      }
    }
  }
  DAT_180cd0318 = fVar6;
  DAT_180cd0314 = fVar1;
  DAT_180cd0310 = fVar16;
  return;
}



/* ===== 1800ab920 FUN_1800ab920 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ab920(undefined8 *param_1)

{
  BOOL BVar1;
  HICON pHVar2;
  HANDLE hHeap;
  DWORD dwMessage;
  undefined1 auStack_408 [32];
  _NOTIFYICONDATAW local_3e8;
  undefined1 local_2b8 [516];
  undefined1 local_b4 [128];
  undefined4 local_34;
  HICON local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_408;
  local_3e8._4_4_ = 0;
  FUN_180540170(&local_3e8.uFlags,0,0x3bc);
  local_3e8.hWnd = (HWND)*param_1;
  local_3e8.cbSize = 0x3d0;
  local_3e8.uID = 0x574c;
  if (*(char *)(param_1 + 0x21) == '\0') {
    pHVar2 = (HICON)GetClassLongPtrW(local_3e8.hWnd,-0xe);
    if (pHVar2 == (HICON)0x0) {
      pHVar2 = LoadIconW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    }
    local_3e8.uFlags = 0x16;
    local_3e8.hIcon = pHVar2;
    FUN_180515c10(local_3e8.szTip,0x80,L"newerwin",0xffffffffffffffff);
    FUN_180515c10(local_b4,0x40,L"newerwin",0xffffffffffffffff);
    FUN_180515c10(local_2b8,0x100,param_1 + 1,0xffffffffffffffff);
    local_34 = 0x24;
    local_20 = pHVar2;
    BVar1 = Shell_NotifyIconW(1,&local_3e8);
    if (BVar1 != 0) goto LAB_1800aba4f;
    dwMessage = 0;
  }
  else {
    dwMessage = 2;
  }
  Shell_NotifyIconW(dwMessage,&local_3e8);
LAB_1800aba4f:
  hHeap = GetProcessHeap();
  HeapFree(hHeap,0,param_1);
  return 0;
}



/* ===== 1800aba80 FUN_1800aba80 ===== */

void FUN_1800aba80(undefined8 param_1,LPCSTR param_2,undefined1 param_3)

{
  HANDLE pvVar1;
  undefined8 *lpParameter;
  
  pvVar1 = GetProcessHeap();
  lpParameter = HeapAlloc(pvVar1,8,0x110);
  if (lpParameter != (undefined8 *)0x0) {
    *lpParameter = param_1;
    *(undefined1 *)(lpParameter + 0x21) = param_3;
    if (param_2 != (LPCSTR)0x0) {
      MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)(lpParameter + 1),0x7f);
    }
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1800ab920,lpParameter,0,(LPDWORD)0x0);
    if (pvVar1 != (HANDLE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800abb1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      CloseHandle(pvVar1);
      return;
    }
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,0,lpParameter);
  }
  return;
}



/* ===== 1800abb50 FUN_1800abb50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800abb50(int param_1)

{
  HWND pHVar1;
  HWND pHVar2;
  FLASHWINFO local_28;
  
  pHVar1 = DAT_1811079d8;
  if ((((DAT_180920f20 != '\0') && ((&DAT_180920f21)[param_1] != '\0')) &&
      (DAT_1811079d8 != (HWND)0x0)) && (pHVar2 = GetForegroundWindow(), pHVar2 != pHVar1)) {
    if (DAT_180920f26 != '\0') {
      FUN_1800aba80(pHVar1,(&PTR_s_match_found_1805be2a8)[param_1],0);
      LOCK();
      DAT_180ca1c6a = 1;
      UNLOCK();
      _DAT_180cd0340 = GetTickCount64();
    }
    if (DAT_180920f27 != '\0') {
      local_28.cbSize = 0x20;
      local_28._4_4_ = 0;
      local_28.dwTimeout = 0;
      local_28._28_4_ = 0;
      local_28.hwnd = pHVar1;
      local_28.dwFlags = 0xe;
      local_28.uCount = 0;
      FlashWindowEx(&local_28);
    }
  }
  return;
}



/* ===== 1800abc30 FUN_1800abc30 ===== */

void FUN_1800abc30(longlong *param_1)

{
  (**(code **)(*param_1 + 0x188))(param_1,"wlMatchFound");
  return;
}



/* ===== 1800abc50 FUN_1800abc50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800abc50(int param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  longlong lVar8;
  char *_Str1;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  if (param_1 == 0xc) {
    cVar2 = FUN_1803a10a0();
    if (DAT_180920f20 == '\0') {
      DAT_180ca1c68 = cVar2;
      DAT_1809e85c8 = 0xffffffff;
      return;
    }
    if ((((DAT_180920f24 != '\0') && (DAT_180ca1c6b == '\0')) && (DAT_1809620c0 != 0)) &&
       (lVar5 = FUN_18000f3a0(), lVar5 != 0)) {
      DAT_180ca1c6b = FUN_180273b60("round_start",&LAB_1800abc20);
    }
    if ((cVar2 == '\0') || (DAT_180ca1c68 != '\0')) {
      DAT_180ca1c68 = cVar2;
      if (cVar2 == '\0') {
        DAT_180cd0328 = 0;
        DAT_1809e85c8 = 0xffffffff;
        return;
      }
    }
    else {
      FUN_1800abb50(1);
    }
    DAT_180ca1c68 = cVar2;
    if ((DAT_180ca1c69 == '\0') && (DAT_1811089f0 != 0)) {
      DAT_180ca1c69 = '\x01';
      DAT_180cd0338 = FUN_18038eaf0("C_CSGameRulesProxy","m_pGameRules");
      DAT_180cd0348 = FUN_18038eaf0("C_CSGameRules","m_bWarmupPeriod");
    }
    if (DAT_180cd0338 != 0) {
      UVar6 = GetTickCount64();
      iVar1 = DAT_180961948;
      if ((DAT_180cd0328 == 0) || (lVar5 = DAT_180cd0328, 999 < UVar6 - _DAT_180cd0358)) {
        lVar5 = 0;
        uVar10 = (ulonglong)DAT_180961968;
        uVar9 = 0;
        uVar11 = (ulonglong)DAT_180961974;
        uVar12 = (ulonglong)DAT_180961970;
        uVar13 = (ulonglong)DAT_18096196c;
        DAT_180cd0328 = 0;
        _DAT_180cd0358 = UVar6;
        do {
          lVar7 = FUN_18000f3a0(DAT_1809619d0);
          if ((((lVar7 != 0) &&
               (lVar7 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                                      lVar7 + (ulonglong)((uVar9 >> 9) * DAT_180961944)),
               lVar7 - 0x10000U < 0xfffffffffffeffff)) &&
              (lVar7 = FUN_18000f3a0((ulonglong)((uVar9 & 0x1ff) * iVar1) + lVar7),
              lVar7 - 0x10000U < 0xfffffffffffeffff)) &&
             (((lVar8 = FUN_18000f3a0(lVar7 + uVar10), lVar8 != 0 &&
               (lVar8 = FUN_18000f3a0(lVar8 + uVar13), lVar8 != 0)) &&
              ((lVar8 = FUN_18000f3a0(lVar8 + uVar12), lVar8 != 0 &&
               ((_Str1 = (char *)FUN_18000f3a0(lVar8 + uVar11),
                _Str1 + -0x10000 < (char *)0x7ffffffeffff &&
                (iVar4 = strcmp(_Str1,"C_CSGameRulesProxy"), iVar4 == 0)))))))) {
            lVar5 = FUN_18000f3a0((ulonglong)DAT_180cd0338 + lVar7);
            DAT_180cd0328 = lVar5;
            break;
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < 0x80);
      }
      if ((lVar5 != 0) && (DAT_180cd0348 != 0)) {
        bVar3 = FUN_180011220(lVar5 + (ulonglong)DAT_180cd0348);
        if ((DAT_1809e85c8 == 1) && (bVar3 == 0)) {
          FUN_1800abb50(2);
        }
        DAT_1809e85c8 = (uint)bVar3;
      }
    }
  }
  return;
}



/* ===== 1800abf60 FUN_1800abf60 ===== */

void FUN_1800abf60(void)

{
  if (DAT_180961aa8 == (code *)0x0) {
    return;
  }
  (*DAT_180961aa8)("CCSGO_HudDeathNotice");
  return;
}



/* ===== 1800abf90 FUN_1800abf90 ===== */

undefined8 FUN_1800abf90(void)

{
  longlong *plVar1;
  char cVar2;
  HMODULE pHVar3;
  FARPROC pFVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  
  if (DAT_1809e9ba0 == -1) {
    cVar2 = FUN_180200ed0();
    if ((cVar2 != '\0') &&
       ((DAT_1811150a0 != (longlong *)0x0 ||
        (((pHVar3 = GetModuleHandleA("panorama.dll"), pHVar3 != (HMODULE)0x0 &&
          (pFVar4 = GetProcAddress(pHVar3,"CreateInterface"), pFVar4 != (FARPROC)0x0)) &&
         (DAT_1811150a0 = (longlong *)(*pFVar4)("PanoramaUIEngine001",0),
         DAT_1811150a0 != (longlong *)0x0)))))) {
      plVar1 = DAT_1811150a0;
      lVar5 = FUN_18000f3a0(DAT_1811150a0);
      if (((lVar5 != 0) && (lVar5 = (**(code **)(*plVar1 + 0x68))(plVar1), lVar5 != 0)) &&
         (lVar6 = FUN_18000f3a0(lVar5), lVar6 != 0)) {
        pcVar7 = (code *)FUN_18000f3a0(lVar6 + 0x390);
        if ((pcVar7 < DAT_180ceb448) || (DAT_180ceb440 <= pcVar7)) {
          DAT_1809e9ba0 = -1;
        }
        else {
          DAT_1809e9ba0 = (*pcVar7)(lVar5,0,"DeathNotice_Killer");
        }
        goto LAB_1800ac072;
      }
    }
    DAT_1809e9ba0 = -1;
  }
LAB_1800ac072:
  if (DAT_1809e9ba2 == -1) {
    cVar2 = FUN_180200ed0();
    if ((cVar2 != '\0') &&
       ((DAT_1811150a0 != (longlong *)0x0 ||
        (((pHVar3 = GetModuleHandleA("panorama.dll"), pHVar3 != (HMODULE)0x0 &&
          (pFVar4 = GetProcAddress(pHVar3,"CreateInterface"), pFVar4 != (FARPROC)0x0)) &&
         (DAT_1811150a0 = (longlong *)(*pFVar4)("PanoramaUIEngine001",0),
         DAT_1811150a0 != (longlong *)0x0)))))) {
      plVar1 = DAT_1811150a0;
      lVar5 = FUN_18000f3a0(DAT_1811150a0);
      if (((lVar5 != 0) && (lVar5 = (**(code **)(*plVar1 + 0x68))(plVar1), lVar5 != 0)) &&
         (lVar6 = FUN_18000f3a0(lVar5), lVar6 != 0)) {
        pcVar7 = (code *)FUN_18000f3a0(lVar6 + 0x390);
        if ((pcVar7 < DAT_180ceb448) || (DAT_180ceb440 <= pcVar7)) {
          DAT_1809e9ba2 = -1;
        }
        else {
          DAT_1809e9ba2 = (*pcVar7)(lVar5,0,"DeathNoticeSuicide");
        }
        goto LAB_1800ac144;
      }
    }
    DAT_1809e9ba2 = -1;
  }
LAB_1800ac144:
  if (DAT_1809e9ba4 != -1) goto LAB_1800ac21c;
  cVar2 = FUN_180200ed0();
  if ((cVar2 == '\0') ||
     ((DAT_1811150a0 == (longlong *)0x0 &&
      (((pHVar3 = GetModuleHandleA("panorama.dll"), pHVar3 == (HMODULE)0x0 ||
        (pFVar4 = GetProcAddress(pHVar3,"CreateInterface"), pFVar4 == (FARPROC)0x0)) ||
       (DAT_1811150a0 = (longlong *)(*pFVar4)("PanoramaUIEngine001",0),
       DAT_1811150a0 == (longlong *)0x0)))))) {
LAB_1800ac212:
    DAT_1809e9ba4 = -1;
  }
  else {
    plVar1 = DAT_1811150a0;
    lVar5 = FUN_18000f3a0(DAT_1811150a0);
    if ((lVar5 == 0) || (lVar5 = (**(code **)(*plVar1 + 0x68))(plVar1), lVar5 == 0))
    goto LAB_1800ac212;
    lVar6 = FUN_18000f3a0(lVar5);
    if (lVar6 == 0) {
      DAT_1809e9ba4 = -1;
    }
    else {
      pcVar7 = (code *)FUN_18000f3a0(lVar6 + 0x390);
      if ((pcVar7 < DAT_180ceb448) || (DAT_180ceb440 <= pcVar7)) goto LAB_1800ac212;
      DAT_1809e9ba4 = (*pcVar7)(lVar5,0,"DeathNoticeAssist");
    }
  }
LAB_1800ac21c:
  if (DAT_1809e9ba6 != -1) goto LAB_1800ac2f8;
  cVar2 = FUN_180200ed0();
  if ((cVar2 != '\0') &&
     ((DAT_1811150a0 != (longlong *)0x0 ||
      (((pHVar3 = GetModuleHandleA("panorama.dll"), pHVar3 != (HMODULE)0x0 &&
        (pFVar4 = GetProcAddress(pHVar3,"CreateInterface"), pFVar4 != (FARPROC)0x0)) &&
       (DAT_1811150a0 = (longlong *)(*pFVar4)("PanoramaUIEngine001",0),
       DAT_1811150a0 != (longlong *)0x0)))))) {
    plVar1 = DAT_1811150a0;
    lVar5 = FUN_18000f3a0(DAT_1811150a0);
    if ((lVar5 != 0) && (lVar5 = (**(code **)(*plVar1 + 0x68))(plVar1), lVar5 != 0)) {
      lVar6 = FUN_18000f3a0(lVar5);
      if (lVar6 == 0) {
        DAT_1809e9ba6 = -1;
        goto LAB_1800ac2f8;
      }
      pcVar7 = (code *)FUN_18000f3a0(lVar6 + 0x390);
      if ((DAT_180ceb448 <= pcVar7) && (pcVar7 < DAT_180ceb440)) {
        DAT_1809e9ba6 = (*pcVar7)(lVar5,0,"SpawnTime");
        goto LAB_1800ac2f8;
      }
    }
  }
  DAT_1809e9ba6 = -1;
LAB_1800ac2f8:
  if ((((DAT_1809e9ba0 == -1) || (DAT_1809e9ba2 == -1)) || (DAT_1809e9ba4 == -1)) ||
     (DAT_1809e9ba6 == -1)) {
    return 0;
  }
  return 1;
}



/* ===== 1800ac330 FUN_1800ac330 ===== */

void FUN_1800ac330(undefined8 param_1,int param_2,char param_3,char param_4,undefined4 param_5)

{
  bool bVar1;
  bool bVar2;
  size_t _Size;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  byte *_Str;
  size_t _Size_00;
  undefined8 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  
  lVar6 = FUN_18000f3a0();
  if (lVar6 == 0) {
    pcVar7 = (code *)0x0;
  }
  else {
    pcVar7 = (code *)FUN_18000f3a0(lVar6 + 0x1b8);
  }
  lVar6 = FUN_18000f3a0(param_1);
  if (lVar6 == 0) {
    pcVar8 = (code *)0x0;
  }
  else {
    pcVar8 = (code *)FUN_18000f3a0(lVar6 + 0x1c0);
  }
  if ((pcVar7 != (code *)0x0) && (pcVar8 != (code *)0x0)) {
    iVar4 = (*pcVar7)(param_1);
    if ((param_2 == 1) || (bVar2 = false, param_3 != '\0')) {
      bVar2 = true;
    }
    uVar14 = 0;
    if (0 < iVar4) {
      do {
        if (0x3f < uVar14) {
          return;
        }
        lVar6 = (*pcVar8)(param_1,uVar14);
        if ((((lVar6 != 0) && (lVar9 = FUN_18000f3a0(lVar6), lVar9 != 0)) &&
            (pcVar7 = (code *)FUN_18000f3a0(lVar9 + 0x4e8), pcVar7 != (code *)0x0)) &&
           ((cVar3 = (*pcVar7)(lVar6,DAT_1809e9ba0), cVar3 != '\0' &&
            (cVar3 = (*pcVar7)(lVar6,DAT_1809e9ba2), cVar3 == '\0')))) {
          cVar3 = (*pcVar7)(lVar6,DAT_1809e9ba4);
          lVar9 = 0;
          _Str = (byte *)0x0;
          if ((((cVar3 == '\0') || ((!bVar2 || (lVar10 = FUN_18000f3a0(lVar6), lVar10 == 0)))) ||
              (pcVar7 = (code *)FUN_18000f3a0(lVar10 + 0x178), pcVar7 == (code *)0x0)) ||
             (lVar9 = (*pcVar7)(lVar6,"Assister"), lVar9 == 0)) {
LAB_1800ac521:
            _Size_00 = 0;
          }
          else {
            lVar11 = FUN_18000f3a0(lVar9 + 8);
            lVar10 = DAT_180cc4590;
            if ((((lVar11 == 0) || (DAT_180cc4590 == 0)) ||
                (lVar12 = FUN_18000f3a0(lVar11), lVar12 != lVar10)) ||
               ((lVar10 = FUN_18000f3a0(lVar11), lVar10 == 0 ||
                (pcVar7 = (code *)FUN_18000f3a0(lVar10 + 0x2b0), pcVar7 == (code *)0x0)))) {
              _Str = (byte *)0x0;
              goto LAB_1800ac521;
            }
            _Str = (byte *)(*pcVar7)(lVar11);
            if (_Str == (byte *)0x0) goto LAB_1800ac521;
            _Size_00 = strlen((char *)_Str);
          }
          _Size = DAT_1809e9bb8;
          if (_Size_00 == DAT_1809e9bb8) {
            if (_Size_00 != 0) {
              puVar13 = &DAT_1809e9ba8;
              if (0xf < DAT_1809e9bc0) {
                puVar13 = DAT_1809e9ba8;
              }
              iVar5 = memcmp(_Str,puVar13,_Size_00);
              if (iVar5 != 0) goto LAB_1800ac55e;
            }
            bVar1 = false;
          }
          else {
LAB_1800ac55e:
            if (((1 < _Size_00) && (iVar5 = isdigit((uint)*_Str), iVar5 != 0)) &&
               ((_Str[1] == 0x20 && ((_Size_00 - 2 == _Size && (_Size != 0)))))) {
              puVar13 = &DAT_1809e9ba8;
              if (0xf < DAT_1809e9bc0) {
                puVar13 = DAT_1809e9ba8;
              }
              iVar5 = memcmp(_Str + 2,puVar13,_Size);
              if (iVar5 == 0) {
                bVar1 = false;
                goto LAB_1800ac5b1;
              }
            }
            bVar1 = true;
          }
LAB_1800ac5b1:
          if ((((lVar9 != 0) && (cVar3 != '\0')) && (bVar1)) &&
             (((param_3 != '\0' && (lVar9 = FUN_18000f3a0(lVar6), lVar9 != 0)) &&
              (pcVar7 = (code *)FUN_18000f3a0(lVar9 + 0x498), pcVar7 != (code *)0x0)))) {
            (*pcVar7)(lVar6,DAT_1809e9ba4);
          }
          if (((param_2 == 2) || ((param_2 == 1 && (bVar1)))) &&
             ((lVar9 = FUN_18000f3a0(lVar6), lVar9 != 0 &&
              (pcVar7 = (code *)FUN_18000f3a0(lVar9 + 0x900), pcVar7 != (code *)0x0)))) {
            if (param_4 == '\0') {
              uVar15 = 0;
            }
            else {
              uVar15 = param_5;
            }
            (*pcVar7)(lVar6,DAT_1809e9ba6,uVar15);
          }
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < iVar4);
    }
  }
  return;
}



/* ===== 1800ac690 FUN_1800ac690 ===== */

undefined1 FUN_1800ac690(void)

{
  FUN_1800ac330();
  return 1;
}



/* ===== 1800ac6b0 FUN_1800ac6b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ac6b0(int param_1)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  HMODULE hModule;
  FARPROC pFVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  size_t sVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  ulonglong uStack_c8;
  char local_b8 [128];
  ulonglong local_38;
  
  if (param_1 != 0xc) {
    return;
  }
  local_38 = DAT_180919500 ^ (ulonglong)auStack_118;
  if ((DAT_180ca1c6d == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180ca1c6d = '\x01';
    DAT_180cd0364 = FUN_18038eaf0("C_CSGameRules","m_fRoundStartTime");
  }
  lVar7 = FUN_180266660();
  uVar15 = 0;
  if ((lVar7 == 0) || (DAT_180cd0364 == 0)) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = (float)FUN_18000f3d0(lVar7 + (ulonglong)DAT_180cd0364);
  }
  cVar6 = DAT_18095d354;
  iVar4 = DAT_18095d350;
  bVar1 = fVar14 == _DAT_180cd0360;
  if (lVar7 != 0) {
    _DAT_180cd0360 = fVar14;
  }
  if ((DAT_18095d350 == 0) && (DAT_18095d354 == '\0')) {
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_e8);
    lVar12 = local_e8;
  }
  else {
    lVar12 = DAT_181108a00;
  }
  if (lVar12 == 0) {
    return;
  }
  if (lVar7 == 0) {
    return;
  }
  if (DAT_180961ab0 == 0) {
    return;
  }
  if (DAT_1811150a0 == 0) {
    hModule = GetModuleHandleA("panorama.dll");
    if (hModule == (HMODULE)0x0) {
      return;
    }
    pFVar8 = GetProcAddress(hModule,"CreateInterface");
    if (pFVar8 == (FARPROC)0x0) {
      return;
    }
    DAT_1811150a0 = (*pFVar8)("PanoramaUIEngine001",0);
    if (DAT_1811150a0 == 0) {
      return;
    }
  }
  cVar5 = FUN_180200ed0();
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = FUN_1800abf90();
  if (cVar5 == '\0') {
    return;
  }
  uVar9 = FUN_1800abf60();
  if (uVar9 < 0x21) {
    return;
  }
  lVar7 = FUN_18000f3a0();
  if (lVar7 == 0) {
    lVar7 = 0;
LAB_1800ac883:
    bVar3 = false;
  }
  else {
    lVar7 = FUN_18000f3a0(lVar7 + 8);
    if (0x7ffffffefffe < lVar7 - 0x10000U) goto LAB_1800ac883;
    bVar3 = true;
  }
  lVar13 = 0;
  if (bVar3) {
    lVar13 = lVar7;
  }
  if (lVar13 == 0) {
    return;
  }
  if (((iVar4 == 1) && (bVar1)) && (DAT_1809e9bb8 != 0)) goto LAB_1800ac9b7;
  if (DAT_180ca0a08 == 0) {
LAB_1800ac943:
    local_d0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0xf;
  }
  else {
    local_b8[0] = '\0';
    local_b8[1] = '\0';
    local_b8[2] = '\0';
    local_b8[3] = '\0';
    local_b8[4] = '\0';
    local_b8[5] = '\0';
    local_b8[6] = '\0';
    local_b8[7] = '\0';
    local_b8[8] = '\0';
    local_b8[9] = '\0';
    local_b8[10] = '\0';
    local_b8[0xb] = '\0';
    local_b8[0xc] = '\0';
    local_b8[0xd] = '\0';
    local_b8[0xe] = '\0';
    local_b8[0xf] = '\0';
    local_b8[0x10] = '\0';
    local_b8[0x11] = '\0';
    local_b8[0x12] = '\0';
    local_b8[0x13] = '\0';
    local_b8[0x14] = '\0';
    local_b8[0x15] = '\0';
    local_b8[0x16] = '\0';
    local_b8[0x17] = '\0';
    local_b8[0x18] = '\0';
    local_b8[0x19] = '\0';
    local_b8[0x1a] = '\0';
    local_b8[0x1b] = '\0';
    local_b8[0x1c] = '\0';
    local_b8[0x1d] = '\0';
    local_b8[0x1e] = '\0';
    local_b8[0x1f] = '\0';
    local_b8[0x20] = '\0';
    local_b8[0x21] = '\0';
    local_b8[0x22] = '\0';
    local_b8[0x23] = '\0';
    local_b8[0x24] = '\0';
    local_b8[0x25] = '\0';
    local_b8[0x26] = '\0';
    local_b8[0x27] = '\0';
    local_b8[0x28] = '\0';
    local_b8[0x29] = '\0';
    local_b8[0x2a] = '\0';
    local_b8[0x2b] = '\0';
    local_b8[0x2c] = '\0';
    local_b8[0x2d] = '\0';
    local_b8[0x2e] = '\0';
    local_b8[0x2f] = '\0';
    local_b8[0x30] = '\0';
    local_b8[0x31] = '\0';
    local_b8[0x32] = '\0';
    local_b8[0x33] = '\0';
    local_b8[0x34] = '\0';
    local_b8[0x35] = '\0';
    local_b8[0x36] = '\0';
    local_b8[0x37] = '\0';
    local_b8[0x38] = '\0';
    local_b8[0x39] = '\0';
    local_b8[0x3a] = '\0';
    local_b8[0x3b] = '\0';
    local_b8[0x3c] = '\0';
    local_b8[0x3d] = '\0';
    local_b8[0x3e] = '\0';
    local_b8[0x3f] = '\0';
    local_b8[0x40] = '\0';
    local_b8[0x41] = '\0';
    local_b8[0x42] = '\0';
    local_b8[0x43] = '\0';
    local_b8[0x44] = '\0';
    local_b8[0x45] = '\0';
    local_b8[0x46] = '\0';
    local_b8[0x47] = '\0';
    local_b8[0x48] = '\0';
    local_b8[0x49] = '\0';
    local_b8[0x4a] = '\0';
    local_b8[0x4b] = '\0';
    local_b8[0x4c] = '\0';
    local_b8[0x4d] = '\0';
    local_b8[0x4e] = '\0';
    local_b8[0x4f] = '\0';
    local_b8[0x50] = '\0';
    local_b8[0x51] = '\0';
    local_b8[0x52] = '\0';
    local_b8[0x53] = '\0';
    local_b8[0x54] = '\0';
    local_b8[0x55] = '\0';
    local_b8[0x56] = '\0';
    local_b8[0x57] = '\0';
    local_b8[0x58] = '\0';
    local_b8[0x59] = '\0';
    local_b8[0x5a] = '\0';
    local_b8[0x5b] = '\0';
    local_b8[0x5c] = '\0';
    local_b8[0x5d] = '\0';
    local_b8[0x5e] = '\0';
    local_b8[0x5f] = '\0';
    local_b8[0x60] = '\0';
    local_b8[0x61] = '\0';
    local_b8[0x62] = '\0';
    local_b8[99] = '\0';
    local_b8[100] = '\0';
    local_b8[0x65] = '\0';
    local_b8[0x66] = '\0';
    local_b8[0x67] = '\0';
    local_b8[0x68] = '\0';
    local_b8[0x69] = '\0';
    local_b8[0x6a] = '\0';
    local_b8[0x6b] = '\0';
    local_b8[0x6c] = '\0';
    local_b8[0x6d] = '\0';
    local_b8[0x6e] = '\0';
    local_b8[0x6f] = '\0';
    local_b8[0x70] = '\0';
    local_b8[0x71] = '\0';
    local_b8[0x72] = '\0';
    local_b8[0x73] = '\0';
    local_b8[0x74] = '\0';
    local_b8[0x75] = '\0';
    local_b8[0x76] = '\0';
    local_b8[0x77] = '\0';
    local_b8[0x78] = '\0';
    local_b8[0x79] = '\0';
    local_b8[0x7a] = '\0';
    local_b8[0x7b] = '\0';
    local_b8[0x7c] = '\0';
    local_b8[0x7d] = '\0';
    local_b8[0x7e] = '\0';
    local_b8[0x7f] = '\0';
    uVar10 = FUN_18000f3a0(lVar12 + (ulonglong)DAT_180ca0a08);
    cVar5 = FUN_1803a05b0(uVar10,local_b8);
    if (cVar5 == '\0') goto LAB_1800ac943;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    sVar11 = strlen(local_b8);
    FUN_1800133a0(&local_e0,local_b8,sVar11);
  }
  if (0xf < DAT_1809e9bc0) {
    lVar12 = CONCAT44(DAT_1809e9ba8._4_4_,(undefined4)DAT_1809e9ba8);
    uVar9 = DAT_1809e9bc0 + 1;
    lVar7 = lVar12;
    if (0xfff < uVar9) {
      lVar7 = *(longlong *)(lVar12 + -8);
      if (0x1f < (lVar12 - lVar7) - 8U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = DAT_1809e9bc0 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar7,uVar9);
  }
  DAT_1809e9ba8._0_4_ = (undefined4)local_e0;
  DAT_1809e9ba8._4_4_ = local_e0._4_4_;
  uRam00000001809e9bb0 = (undefined4)uStack_d8;
  uRam00000001809e9bb4 = uStack_d8._4_4_;
  DAT_1809e9bb8 = local_d0;
  DAT_1809e9bc0 = uStack_c8;
LAB_1800ac9b7:
  if ((DAT_180961a50 != 0) && (lVar7 = FUN_18000f3a0(), lVar7 != 0)) {
    uVar15 = FUN_18000f3d0(lVar7 + 0x30);
  }
  local_f8 = uVar15;
  cVar6 = FUN_1800ac690(lVar13,iVar4,cVar6,bVar1);
  if ((cVar6 == '\0') && (DAT_180ca1c6c == '\0')) {
    DAT_180ca1c6c = '\x01';
    FUN_1802b2560("[error] hud | death notices: exception while walking the notices");
  }
  return;
}



/* ===== 1800aca70 FUN_1800aca70 ===== */

char * FUN_1800aca70(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return "head";
  case 2:
    return "chest";
  case 3:
    return "stomach";
  case 4:
    return "left arm";
  case 5:
    return "right arm";
  case 6:
    return "left leg";
  case 7:
    return "right leg";
  case 8:
    return "neck";
  default:
    return "generic";
  case 10:
    return "gear";
  }
}



/* ===== 1800acb10 FUN_1800acb10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800acb10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 ***local_48 [2];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_50 = param_1;
  FUN_180273d10(local_48,param_2,"weapon");
  pppuVar2 = local_48;
  if (0xf < local_30) {
    pppuVar2 = local_48[0];
  }
  if (6 < local_38) {
    pppuVar1 = (undefined8 ***)
               thunk_FUN_1804e6890(pppuVar2,(undefined8 ***)((longlong)pppuVar2 + 7),"weapon_",7);
    if ((pppuVar1 != (undefined8 ***)((longlong)pppuVar2 + 7)) && (pppuVar1 == pppuVar2)) {
      uVar3 = 7;
      if (local_38 < 7) {
        uVar3 = local_38;
      }
      pppuVar2 = local_48;
      if (0xf < local_30) {
        pppuVar2 = local_48[0];
      }
      FUN_180540530(pppuVar2,uVar3 + (longlong)pppuVar2,(local_38 - uVar3) + 1);
      local_38 = local_38 - uVar3;
    }
  }
  if (local_38 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_180066a20(param_1," with ",local_48);
  }
  FUN_18000f890(local_48);
  return param_1;
}



/* ===== 1800acc20 FUN_1800acc20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1800acc20(char *param_1,char *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  char *local_68 [2];
  undefined8 ****local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_88;
  if (param_2 == (char *)0x0) {
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xf;
    local_58 = (undefined8 ****)0x0;
    local_68[0] = param_1;
  }
  else {
    local_68[0] = param_2;
    FUN_1803a0620(local_68,&local_58);
  }
  uVar8 = local_48;
  puVar9 = auStack_88;
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
  if (local_48 == 0) {
    param_1[0x10] = '\a';
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
    *(undefined4 *)param_1 = s_someone_1806e7908._0_4_;
    *(undefined2 *)(param_1 + 4) = s_someone_1806e7908._4_2_;
    param_1[6] = s_someone_1806e7908[6];
    param_1[7] = '\0';
  }
  else {
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
    ppppuVar7 = &local_58;
    if (0xf < local_40) {
      ppppuVar7 = local_58;
    }
    if (0x7fffffffffffffff < local_48) goto LAB_1800acda5;
    if (local_48 < 0x10) {
      *(ulonglong *)(param_1 + 0x10) = local_48;
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      uVar2 = *(undefined4 *)((longlong)ppppuVar7 + 4);
      uVar3 = *(undefined4 *)(ppppuVar7 + 1);
      uVar4 = *(undefined4 *)((longlong)ppppuVar7 + 0xc);
      *(undefined4 *)param_1 = *(undefined4 *)ppppuVar7;
      *(undefined4 *)(param_1 + 4) = uVar2;
      *(undefined4 *)(param_1 + 8) = uVar3;
      *(undefined4 *)(param_1 + 0xc) = uVar4;
    }
    else {
      uVar5 = local_48 | 0xf;
      uVar10 = 0x7fffffffffffffff;
      if ((uVar5 < 0x8000000000000000) && (uVar10 = uVar5, uVar5 < 0x16)) {
        uVar10 = 0x16;
      }
      uVar6 = FUN_18000fb70(uVar10 + 1);
      *(undefined8 *)param_1 = uVar6;
      *(ulonglong *)(param_1 + 0x10) = uVar8;
      *(ulonglong *)(param_1 + 0x18) = uVar10;
      FUN_180540530(uVar6,ppppuVar7,uVar8 + 1);
    }
  }
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    ppppuVar7 = local_58;
    if (0xfff < uVar8) {
      ppppuVar7 = (undefined8 ****)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar7))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar9 = auStack_80;
LAB_1800acda5:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar9 + -8) = &UNK_1800acdaa;
        FUN_180011990();
      }
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar7,uVar8);
  }
  return param_1;
}



/* ===== 1800acdb0 FUN_1800acdb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800acdb0(undefined8 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 ****ppppuVar13;
  char *pcVar14;
  undefined8 uVar15;
  ulonglong *puVar16;
  size_t sVar17;
  undefined4 *puVar18;
  undefined8 ****ppppuVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 uVar26;
  uint uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined8 uStack_220;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [24];
  undefined4 local_1f8 [2];
  longlong local_1f0;
  undefined1 local_1e8 [24];
  int local_1d0 [2];
  char local_1c8 [4];
  uint local_1c4;
  int local_1c0 [2];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  ulonglong local_190;
  ulonglong uStack_188;
  ulonglong local_180;
  ulonglong uStack_178;
  undefined8 ****local_170 [2];
  ulonglong local_160;
  ulonglong local_158;
  char local_150 [8];
  ulonglong uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  ulonglong local_50;
  
  cVar6 = DAT_180cd1304;
  puVar25 = auStack_218;
  local_50 = DAT_180919500 ^ (ulonglong)auStack_218;
  uVar27 = 0;
  local_1c4 = 0;
  local_1c8[0] = DAT_180920e70;
  local_1c8[1] = DAT_180920e84;
  if (((DAT_180920e4e == '\0') && (DAT_180920e70 == '\0' && DAT_180920e52 == '\0')) &&
     (DAT_180920e84 == '\0')) goto LAB_1800ad858;
  local_1b8 = param_1;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_1d0);
    lVar23 = CONCAT44(local_1d0[1],local_1d0[0]);
  }
  else {
    lVar23 = DAT_181108a00;
  }
  puVar25 = auStack_218;
  if (lVar23 == 0) goto LAB_1800ad858;
  local_1e8[0x10] = 0;
  if (cVar6 == '\0') {
    FUN_1803a0b60(local_1d0);
    DAT_181108a00 = CONCAT44(local_1d0[1],local_1d0[0]);
    DAT_1811089f8 = FUN_1803a0c50(local_1d0);
    DAT_180cd1304 = '\x01';
  }
  if (((DAT_1811089f8 == 0) || (DAT_180ca09f0 == 0)) ||
     (iVar7 = FUN_180011200((ulonglong)DAT_180ca09f0 + DAT_1811089f8), 999 < iVar7 - 1U)) {
    if ((DAT_180cd0368 == '\0') && (DAT_1811089f0 != 0)) {
      DAT_180cd036c = FUN_18038eaf0("CCSPlayerController","m_hObserverPawn");
      DAT_180cd0370 = FUN_18038eaf0("C_BasePlayerPawn","m_pObserverServices");
      DAT_180cd0374 = FUN_18038eaf0("CPlayer_ObserverServices","m_hObserverTarget");
      DAT_180cd0378 = FUN_18038eaf0("C_BasePlayerPawn","m_hController");
      DAT_180cd0368 = '\x01';
    }
    if ((((DAT_180cd036c == 0) || (DAT_180cd0370 == 0)) || (DAT_180cd0374 == 0)) ||
       (DAT_180cd0378 == 0)) goto LAB_1800acff9;
    uVar8 = FUN_180011200((ulonglong)DAT_180cd036c + lVar23);
    FUN_1803a0940(local_1d0,uVar8);
    if ((CONCAT44(local_1d0[1],local_1d0[0]) == 0) ||
       (lVar9 = FUN_18000f3a0((ulonglong)DAT_180cd0370 + CONCAT44(local_1d0[1],local_1d0[0])),
       0x7ffffffefffe < lVar9 - 0x10000U)) goto LAB_1800acff9;
    uVar8 = FUN_180011200((ulonglong)DAT_180cd0374 + lVar9);
    FUN_1803a0940(local_1d0,uVar8);
    if (CONCAT44(local_1d0[1],local_1d0[0]) == 0) goto LAB_1800acff9;
    uVar8 = FUN_180011200((ulonglong)DAT_180cd0378 + CONCAT44(local_1d0[1],local_1d0[0]));
    FUN_1803a0940(local_1d0,uVar8);
    lVar9 = CONCAT44(local_1d0[1],local_1d0[0]);
    if ((lVar9 == 0) || (lVar9 == lVar23)) goto LAB_1800acff9;
    local_1e8[0x10] = 1;
  }
  else {
LAB_1800acff9:
    lVar9 = lVar23;
  }
  lVar10 = FUN_180273f90(param_1,"userid");
  lVar11 = FUN_180273f90(param_1,"attacker");
  fVar29 = (float)FUN_180273cc0(param_1,"dmg_health");
  local_1c0[0] = (int)fVar29;
  fVar29 = (float)FUN_180273cc0(param_1,"health");
  iVar7 = (int)fVar29;
  local_1c0[1] = iVar7;
  fVar29 = (float)FUN_180273cc0(param_1,"hitgroup");
  local_1d0[0] = (int)fVar29;
  uVar12 = FUN_18003a390(&local_130,local_1c0[0]);
  FUN_180066ab0(local_f0," for ",uVar12);
  FUN_18000f890(&local_130);
  if (iVar7 < 1) {
    local_140 = 9;
    uStack_138 = 0xf;
    local_150[0] = s__killed__1806e7930[0];
    local_150[1] = s__killed__1806e7930[1];
    local_150[2] = s__killed__1806e7930[2];
    local_150[3] = s__killed__1806e7930[3];
    local_150[4] = s__killed__1806e7930[4];
    local_150[5] = s__killed__1806e7930[5];
    local_150[6] = s__killed__1806e7930[6];
    local_150[7] = s__killed__1806e7930[7];
    uStack_148 = (ulonglong)(byte)s__killed__1806e7930[8];
  }
  else {
    uVar12 = FUN_18003a390(&local_1b0,iVar7);
    local_1c4 = 1;
    uVar12 = FUN_180066ab0(&local_190,&DAT_1806e7944,uVar12);
    local_1c4 = 3;
    pcVar14 = (char *)FUN_1800134a0(uVar12," hp remaining)");
    local_150 = *(char (*) [8])pcVar14;
    uStack_148 = *(ulonglong *)(pcVar14 + 8);
    local_140 = *(undefined8 *)(pcVar14 + 0x10);
    uStack_138 = *(undefined8 *)(pcVar14 + 0x18);
    pcVar14[0x10] = '\0';
    pcVar14[0x11] = '\0';
    pcVar14[0x12] = '\0';
    pcVar14[0x13] = '\0';
    pcVar14[0x14] = '\0';
    pcVar14[0x15] = '\0';
    pcVar14[0x16] = '\0';
    pcVar14[0x17] = '\0';
    pcVar14[0x18] = '\x0f';
    pcVar14[0x19] = '\0';
    pcVar14[0x1a] = '\0';
    pcVar14[0x1b] = '\0';
    pcVar14[0x1c] = '\0';
    pcVar14[0x1d] = '\0';
    pcVar14[0x1e] = '\0';
    pcVar14[0x1f] = '\0';
    *pcVar14 = '\0';
    uVar27 = 0x13;
    local_1c4 = 0x13;
  }
  if ((uVar27 & 2) != 0) {
    uVar27 = uVar27 & 0xfffffffd;
    local_1c4 = uVar27;
    FUN_18000f890(&local_190);
  }
  if ((uVar27 & 1) != 0) {
    uVar27 = uVar27 & 0xfffffffe;
    local_1c4 = uVar27;
    FUN_18000f890(&local_1b0);
  }
  FUN_180273d10(local_170,param_1);
  ppppuVar19 = local_170;
  if (0xf < local_158) {
    ppppuVar19 = local_170[0];
  }
  if (((6 < local_160) &&
      (ppppuVar13 = (undefined8 ****)
                    thunk_FUN_1804e6890(ppppuVar19,(undefined8 ****)((longlong)ppppuVar19 + 7),
                                        "weapon_",7),
      ppppuVar13 != (undefined8 ****)((longlong)ppppuVar19 + 7))) && (ppppuVar13 == ppppuVar19)) {
    uVar22 = 7;
    if (local_160 < 7) {
      uVar22 = local_160;
    }
    ppppuVar19 = local_170;
    if (0xf < local_158) {
      ppppuVar19 = local_170[0];
    }
    FUN_180540530(ppppuVar19,(longlong)ppppuVar19 + uVar22);
    local_160 = local_160 - uVar22;
  }
  puVar25 = auStack_218;
  if (((DAT_180920e4e != '\0') && (puVar25 = auStack_218, lVar11 == lVar23)) &&
     ((puVar25 = auStack_218, lVar10 != 0 && (puVar25 = auStack_218, lVar10 != lVar23)))) {
    uVar12 = FUN_1800acb10(local_110,local_1b8);
    pcVar14 = (char *)FUN_1800aca70(local_1d0[0]);
    uVar15 = FUN_1800acc20(local_70,lVar10);
    uVar15 = FUN_180066ab0(local_90,&DAT_1806e7958,uVar15);
    puVar16 = (ulonglong *)FUN_1800134a0(uVar15," in the ",8);
    local_190 = *puVar16;
    uStack_188 = puVar16[1];
    local_180 = puVar16[2];
    uStack_178 = puVar16[3];
    puVar16[2] = 0;
    puVar16[3] = 0xf;
    *(undefined1 *)puVar16 = 0;
    sVar17 = strlen(pcVar14);
    puVar16 = (ulonglong *)FUN_1800134a0(&local_190,pcVar14,sVar17);
    local_1b0 = *puVar16;
    uStack_1a8 = puVar16[1];
    local_1a0 = puVar16[2];
    uStack_198 = puVar16[3];
    puVar16[2] = 0;
    puVar16[3] = 0xf;
    *(undefined1 *)puVar16 = 0;
    local_1c4 = uVar27 | 0xc0;
    uVar15 = FUN_1800667a0(local_b0,&local_1b0,local_f0);
    uVar12 = FUN_180066820(local_d0,uVar15,uVar12);
    uVar12 = FUN_1800667a0(&local_130,uVar12);
    FUN_1800d84f0(uVar12,&DAT_180920e4f);
    FUN_18000f890(&local_130);
    FUN_18000f890(local_d0);
    FUN_18000f890(local_b0);
    if (uStack_198 < 0x10) {
LAB_1800ad393:
      puVar24 = auStack_218;
      local_1a0 = 0;
      uStack_198 = 0xf;
      local_1b0 = local_1b0 & 0xffffffffffffff00;
      if (0xf < uStack_178) {
        uVar21 = uStack_178 + 1;
        uVar22 = local_190;
        if (0xfff < uVar21) {
          uVar22 = *(ulonglong *)(local_190 - 8);
          if (0x1f < (local_190 - uVar22) - 8) goto LAB_1800ad418;
          uVar21 = uStack_178 + 0x28;
        }
        thunk_FUN_1803d64e0(uVar22,uVar21);
      }
      local_180 = 0;
      uStack_178 = 0xf;
      local_190 = local_190 & 0xffffffffffffff00;
      FUN_18000f890(local_90);
      FUN_18000f890(local_70);
      FUN_18000f890(local_110);
      puVar25 = auStack_218;
    }
    else {
      uVar21 = uStack_198 + 1;
      uVar22 = local_1b0;
      if (uVar21 < 0x1000) {
LAB_1800ad38e:
        thunk_FUN_1803d64e0(uVar22,uVar21);
        goto LAB_1800ad393;
      }
      uVar22 = *(ulonglong *)(local_1b0 - 8);
      if ((local_1b0 - uVar22) - 8 < 0x20) {
        uVar21 = uStack_198 + 0x28;
        goto LAB_1800ad38e;
      }
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar24 = auStack_210;
LAB_1800ad418:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar25 = puVar24 + 8;
    }
  }
  if ((DAT_180920e52 == '\0') || (lVar10 != lVar23)) {
LAB_1800ad658:
    uVar8 = *(undefined4 *)(puVar25 + 0x48);
  }
  else {
    if (lVar11 == 0) {
      *(undefined8 *)(puVar25 + 0x68) = 0;
      *(undefined8 *)(puVar25 + 0x70) = 0;
      *(undefined8 *)(puVar25 + 0x78) = 5;
      uStack_198 = 0xf;
      *(undefined4 *)(puVar25 + 0x68) = s_world_1806e0080._0_4_;
      puVar25[0x6c] = s_world_1806e0080[4];
      puVar25[0x6d] = 0;
      puVar16 = (ulonglong *)(puVar25 + 0x68);
      bVar5 = true;
      bVar4 = false;
    }
    else {
      if (lVar11 == lVar23) {
        uStack_188 = 0;
        local_180 = 3;
        uStack_178 = 0xf;
        local_190 = (ulonglong)(uint3)DAT_1806e7984;
        puVar16 = &local_190;
      }
      else {
        *(undefined8 *)(puVar25 + -8) = 0x1800ad4c0;
        puVar16 = (ulonglong *)FUN_1800acc20(&local_190,lVar11);
      }
      bVar5 = false;
      bVar4 = true;
    }
    local_130 = (int)*puVar16;
    uStack_12c = *(undefined4 *)((longlong)puVar16 + 4);
    uStack_128 = (int)puVar16[1];
    uStack_124 = *(undefined4 *)((longlong)puVar16 + 0xc);
    local_120 = (int)puVar16[2];
    uStack_11c = *(undefined4 *)((longlong)puVar16 + 0x14);
    uStack_118 = (int)puVar16[3];
    uStack_114 = *(undefined4 *)((longlong)puVar16 + 0x1c);
    puVar16[2] = 0;
    puVar16[3] = 0xf;
    *(undefined1 *)puVar16 = 0;
    if (bVar4) {
      *(undefined8 *)(puVar25 + -8) = 0x1800ad4f5;
      FUN_18000f890(&local_190);
    }
    if ((bVar5) && (0xf < uStack_198)) {
      uVar22 = uStack_198 + 1;
      lVar23 = *(longlong *)(puVar25 + 0x68);
      lVar20 = lVar23;
      if (0xfff < uVar22) {
        lVar20 = *(longlong *)(lVar23 + -8);
        if (0x1f < (lVar23 - lVar20) - 8U) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar25 = puVar25 + 8;
          goto LAB_1800ad658;
        }
        uVar22 = uStack_198 + 0x28;
      }
      *(undefined8 *)(puVar25 + -8) = 0x1800ad538;
      thunk_FUN_1803d64e0(lVar20,uVar22);
    }
    *(undefined8 *)(puVar25 + -8) = 0x1800ad546;
    uVar12 = FUN_1800acb10(local_d0,*(undefined8 *)(puVar25 + 0x60));
    uVar8 = *(undefined4 *)(puVar25 + 0x48);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad556;
    pcVar14 = (char *)FUN_1800aca70(uVar8);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad56d;
    uVar15 = FUN_180073a70(local_b0,&local_130," hit you in the ");
    *(undefined8 *)(puVar25 + -8) = 0x1800ad578;
    sVar17 = strlen(pcVar14);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad586;
    puVar18 = (undefined4 *)FUN_1800134a0(uVar15,pcVar14,sVar17);
    *(undefined8 *)(puVar25 + 0x68) = 0;
    *(undefined8 *)(puVar25 + 0x70) = 0;
    *(undefined8 *)(puVar25 + 0x78) = 0;
    uStack_198 = 0;
    uVar28 = puVar18[1];
    uVar2 = puVar18[2];
    uVar3 = puVar18[3];
    *(undefined4 *)(puVar25 + 0x68) = *puVar18;
    *(undefined4 *)(puVar25 + 0x6c) = uVar28;
    *(undefined4 *)(puVar25 + 0x70) = uVar2;
    *(undefined4 *)(puVar25 + 0x74) = uVar3;
    uVar28 = puVar18[5];
    uVar2 = puVar18[6];
    uVar3 = puVar18[7];
    *(undefined4 *)(puVar25 + 0x78) = puVar18[4];
    *(undefined4 *)(puVar25 + 0x7c) = uVar28;
    *(undefined4 *)(puVar25 + 0x80) = uVar2;
    *(undefined4 *)(puVar25 + 0x84) = uVar3;
    *(undefined8 *)(puVar18 + 4) = 0;
    *(undefined8 *)(puVar18 + 6) = 0xf;
    *(undefined1 *)puVar18 = 0;
    *(undefined8 *)(puVar25 + -8) = 0x1800ad5ce;
    uVar15 = FUN_1800667a0(local_90,puVar25 + 0x68,local_f0);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad5e1;
    uVar12 = FUN_180066820(local_70,uVar15,uVar12);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad5f2;
    uVar12 = FUN_1800667a0(local_110,uVar12);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad602;
    FUN_1800d84f0(uVar12,&DAT_180920e53);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad60c;
    FUN_18000f890(local_110);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad619;
    FUN_18000f890(local_70);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad626;
    FUN_18000f890(local_90);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad631;
    FUN_18000f890(puVar25 + 0x68);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad63b;
    FUN_18000f890(local_b0);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad645;
    FUN_18000f890(local_d0);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad64f;
    FUN_18000f890(&local_130);
  }
  if ((((puVar25[0x50] == '\0') || (lVar11 != lVar9)) || (lVar10 == 0)) || (lVar10 == lVar9)) {
LAB_1800ad741:
    uVar28 = *(undefined4 *)(puVar25 + 0x58);
    uVar26 = puVar25[0x40];
    uVar8 = *(undefined4 *)(puVar25 + 0x5c);
  }
  else {
    *(undefined8 *)(puVar25 + -8) = 0x1800ad68b;
    pcVar14 = (char *)FUN_1800aca70(uVar8);
    local_190 = 0;
    uStack_188 = 0;
    local_180 = 0;
    uStack_178 = 0;
    *(undefined8 *)(puVar25 + -8) = 0x1800ad6a5;
    sVar17 = strlen(pcVar14);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad6b4;
    FUN_1800133a0(&local_190,pcVar14,sVar17);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad6c1;
    uVar12 = FUN_1800acc20(local_110,lVar10);
    uVar26 = puVar25[0x40];
    puVar25[0x30] = uVar26;
    *(undefined8 ******)(puVar25 + 0x28) = local_170;
    uVar8 = *(undefined4 *)(puVar25 + 0x5c);
    *(undefined4 *)(puVar25 + 0x20) = uVar8;
    uVar28 = *(undefined4 *)(puVar25 + 0x58);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad6f6;
    FUN_1800b0c50(1,uVar12,&local_190,uVar28);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad700;
    FUN_18000f890(local_110);
    if (0xf < uStack_178) {
      uVar21 = uStack_178 + 1;
      uVar22 = local_190;
      if (0xfff < uVar21) {
        uVar22 = *(ulonglong *)(local_190 - 8);
        if (0x1f < (local_190 - uVar22) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar25 = puVar25 + 8;
          goto LAB_1800ad741;
        }
        uVar21 = uStack_178 + 0x28;
      }
      *(undefined8 *)(puVar25 + -8) = 0x1800ad738;
      thunk_FUN_1803d64e0(uVar22,uVar21);
    }
  }
  if ((puVar25[0x51] != '\0') && (lVar10 == lVar9)) {
    if ((lVar11 == 0) || (lVar11 == lVar9)) {
      *(undefined8 *)(puVar25 + 0x68) = 0;
      *(undefined8 *)(puVar25 + 0x70) = 0;
      *(undefined8 *)(puVar25 + 0x78) = 0;
      uStack_198 = 0xf;
      puVar25[0x68] = 0;
    }
    else {
      *(undefined8 *)(puVar25 + -8) = 0x1800ad77a;
      FUN_1800acc20(puVar25 + 0x68,lVar11);
    }
    uVar22 = 0;
    *(undefined8 *)(puVar25 + -8) = 0x1800ad7a5;
    pcVar14 = (char *)FUN_1800aca70(*(undefined4 *)(puVar25 + 0x48));
    local_190 = 0;
    uStack_188 = 0;
    *(undefined8 *)(puVar25 + -8) = 0x1800ad7bf;
    local_180 = uVar22;
    uStack_178 = uVar22;
    sVar17 = strlen(pcVar14);
    *(undefined8 *)(puVar25 + -8) = 0x1800ad7ce;
    FUN_1800133a0(&local_190,pcVar14,sVar17);
    puVar25[0x30] = uVar26;
    *(undefined8 ******)(puVar25 + 0x28) = local_170;
    *(undefined4 *)(puVar25 + 0x20) = uVar8;
    *(undefined8 *)(puVar25 + -8) = 0x1800ad7f7;
    FUN_1800b0c50(2,puVar25 + 0x68,&local_190,uVar28);
    if (0xf < uStack_178) {
      uVar21 = uStack_178 + 1;
      uVar22 = local_190;
      if (0xfff < uVar21) {
        uVar22 = *(ulonglong *)(local_190 - 8);
        if (0x1f < (local_190 - uVar22) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar21 = uStack_178 + 0x28;
      }
      *(undefined8 *)(puVar25 + -8) = 0x1800ad82f;
      thunk_FUN_1803d64e0(uVar22,uVar21);
    }
    *(undefined8 *)(puVar25 + -8) = 0x1800ad83a;
    FUN_18000f890(puVar25 + 0x68);
  }
  *(undefined8 *)(puVar25 + -8) = 0x1800ad844;
  FUN_18000f890(local_170);
  *(undefined8 *)(puVar25 + -8) = 0x1800ad84e;
  FUN_18000f890(local_150);
  *(undefined8 *)(puVar25 + -8) = 0x1800ad858;
  FUN_18000f890(local_f0);
LAB_1800ad858:
  *(undefined8 *)(puVar25 + -8) = 0x1800ad867;
  return;
}



/* ===== 1800ad890 FUN_1800ad890 ===== */

longlong * FUN_1800ad890(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1804eb010();
  lVar2 = FUN_1804eaff0();
  if (lVar1 == 10000000) {
    *param_1 = lVar2 * 100;
    return param_1;
  }
  if (lVar1 == 24000000) {
    *param_1 = (lVar2 * 2) / 3 + lVar2 * 0x29;
    return param_1;
  }
  *param_1 = ((lVar2 % lVar1) * 1000000000) / lVar1 + (lVar2 / lVar1) * 1000000000;
  return param_1;
}



/* ===== 1800ad940 FUN_1800ad940 ===== */

char * FUN_1800ad940(ushort *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ushort *puVar3;
  char *pcVar4;
  ushort *puVar5;
  int iVar6;
  longlong lVar7;
  
  uVar1 = *(ulonglong *)(param_1 + 0xc);
  lVar2 = *(longlong *)(param_1 + 8);
  puVar3 = param_1;
  if (0xf < uVar1) {
    puVar3 = *(ushort **)param_1;
  }
  if ((lVar2 == 4) && (*(int *)puVar3 == 0x65726966)) {
    return 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M159 6C167 -1 179 -1 187 6C214 32 240 60 264 90C275 76 288 60 301 47C309 40 321 40 329 47C364 80 393 124 414 165C434 206 448 248 448 277C448 405 348 512 224 512C98 512 0 405 0 277C0 239 17 192 45 145C73 98 112 49 159 6ZM225 416C251 416 273 409 294 395C336 366 347 307 322 261C318 252 306 251 300 259L274 288C268 296 256 296 250 288C233 267 204 229 187 208C181 200 169 200 162 208C128 250 111 277 111 307C112 376 162 416 225 416Z\"/></svg>"
    ;
  }
  puVar3 = param_1;
  if (0xf < uVar1) {
    puVar3 = *(ushort **)param_1;
  }
  if ((lVar2 == 4) && (*(int *)puVar3 == 0x626d6f62)) {
    return 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M459 53L442 7C440 3 436 0 432 0C427 0 423 3 421 7L405 53L359 70C354 71 351 76 352 80C352 85 355 89 359 90L404 107L421 153C423 157 427 160 432 160C436 160 441 157 442 153L459 107L504 90C508 89 511 85 511 80C511 75 508 71 504 70L459 53ZM326 106C314 93 293 93 281 106L278 109C256 101 232 96 208 96C93 96 0 190 0 304C0 419 93 512 208 512C322 512 416 419 416 304C416 280 411 256 403 234L406 231C419 219 419 198 406 186L326 106L326 106ZM326 106ZM200 192C142 192 96 239 96 296L96 304C96 313 88 320 80 320C71 320 64 313 64 304L64 296C64 221 124 160 200 160L208 160C216 160 224 168 224 176C224 185 216 192 208 192L200 192L200 192Z\"/></svg>"
    ;
  }
  puVar3 = param_1;
  if (0xf < uVar1) {
    puVar3 = *(ushort **)param_1;
  }
  if ((lVar2 == 4) && (*(int *)puVar3 == 0x746c6f62)) {
    return 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M349 45C355 31 350 15 338 7C326 -2 310 -1 298 8L42 232C32 241 29 255 33 268C38 280 50 288 64 288L175 288L98 467C92 481 97 497 109 505C121 514 137 513 149 504L405 281C415 272 418 258 414 245C409 233 397 225 384 225L272 225L349 45L349 45Z\"/></svg>"
    ;
  }
  puVar3 = param_1;
  if (0xf < uVar1) {
    puVar3 = *(ushort **)param_1;
  }
  if (lVar2 == 3) {
    iVar6 = *puVar3 - 0x7965;
    if (iVar6 == 0) {
      iVar6 = (byte)puVar3[1] - 0x65;
    }
    if (iVar6 == 0) {
      return 
      "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M288 32C207 32 142 69 95 113C48 156 17 208 2 244C0 252 0 261 2 269C17 304 48 356 95 400C142 444 207 480 288 480C368 480 433 444 480 400C527 356 558 304 573 269C576 261 576 252 573 244C558 208 527 156 480 113C433 69 368 32 288 32ZM144 256C144 205 171 158 216 132C260 106 315 106 360 132C404 158 432 205 432 256C432 308 404 355 360 381C315 407 260 407 216 381C171 355 144 308 144 256ZM288 192C288 228 259 256 224 256C216 256 210 255 203 253C198 251 191 255 192 261C192 267 193 274 195 281C208 333 261 363 312 349C363 335 394 283 380 232C369 190 332 162 292 160C286 160 282 167 284 172C286 179 287 185 287 192L288 192ZM288 192Z\"/></svg>"
      ;
    }
  }
  puVar3 = param_1;
  if (0xf < uVar1) {
    puVar3 = *(ushort **)param_1;
  }
  if (lVar2 == 10) {
    lVar7 = *(longlong *)puVar3 + -0x69616873736f7263;
    if (lVar7 == 0) {
      lVar7 = (ulonglong)puVar3[4] - 0x7372;
    }
    if (lVar7 == 0) {
      return 
      "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M445 224L384 224C366 224 352 239 352 256C352 274 366 288 384 288L445 288C431 369 368 432 288 446L288 384C288 367 273 352 256 352C238 352 224 367 224 384L224 446C143 432 80 369 66 288L127 288C145 288 159 274 159 256C159 239 145 224 127 224L66 224C80 144 143 81 224 67L224 128C224 146 238 160 256 160C273 160 288 146 288 128L288 67C368 81 431 144 445 224ZM0 256C0 348 48 432 128 477C207 523 304 523 384 477C463 432 512 348 512 256C512 165 463 81 384 35C304 -11 207 -11 128 35C48 81 0 165 0 256Z\"/></svg>"
      ;
    }
  }
  puVar3 = param_1;
  if (0xf < uVar1) {
    puVar3 = *(ushort **)param_1;
  }
  if ((lVar2 == 4) && (*(int *)puVar3 == 0x7373696d)) {
    return 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 512C347 512 431 463 477 384C523 305 523 208 477 128C431 49 347 0 256 0C164 0 80 49 34 128C-11 208 -11 305 34 384C80 463 164 512 256 512ZM175 175C184 166 199 166 208 175L255 222L302 175C312 166 327 166 336 175C346 185 346 200 336 209L289 256L336 303C346 313 346 328 336 337C327 347 312 347 302 337L255 290L208 337C199 347 184 347 175 337C165 328 165 313 175 303L222 256L175 209C165 200 165 185 175 175Z\"/></svg>"
    ;
  }
  puVar3 = param_1;
  if (0xf < uVar1) {
    puVar3 = *(ushort **)param_1;
  }
  if ((lVar2 == 8) && (*(longlong *)puVar3 == 0x686374616d73696d)) {
    return 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 512C347 512 431 463 477 384C523 305 523 208 477 128C431 49 347 0 256 0C164 0 80 49 34 128C-11 208 -11 305 34 384C80 463 164 512 256 512ZM256 128C269 128 280 139 280 152L280 264C280 278 269 288 256 288C242 288 232 278 232 264L232 152C232 139 242 128 256 128ZM224 352C224 335 238 320 256 320C273 320 288 335 288 352C288 370 273 384 256 384C238 384 224 370 224 352Z\"/></svg>"
    ;
  }
  puVar3 = param_1 + 8;
  puVar5 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0xc)) {
    puVar5 = *(ushort **)param_1;
  }
  if ((*(longlong *)puVar3 == 4) && (*(int *)puVar5 == 0x74726163)) {
    return 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M0 24C0 11 10 0 24 0L69 0C91 0 111 13 120 32L531 32C557 32 576 57 569 83L538 198C525 194 510 192 496 192C427 192 368 231 339 288L170 288L176 317C178 328 188 336 199 336L322 336C321 347 320 358 320 368C320 374 320 379 320 384L199 384C165 384 135 360 129 326L77 55C76 51 73 48 69 48L23 48C10 48 0 38 0 24L0 24ZM127 464C127 447 137 432 151 423C166 414 185 414 199 423C214 432 223 447 223 464C223 481 214 496 199 505C185 514 166 514 151 505C137 496 127 481 127 464ZM352 368C352 317 379 270 424 244C468 218 523 218 568 244C612 270 640 317 640 368C640 420 612 466 568 492C523 518 468 518 424 492C379 466 352 420 352 368ZM540 325L480 386L451 357C445 351 434 351 428 357C422 363 422 374 428 380L468 420C474 426 485 426 491 420L563 348C569 342 569 331 563 325C557 319 546 319 540 325L540 325ZM540 325Z\"/></svg>"
    ;
  }
  if (0xf < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(ushort **)param_1;
  }
  if (*(longlong *)puVar3 != 5) {
    return (char *)0x0;
  }
  iVar6 = *(int *)param_1 + -0x63656863;
  if (iVar6 == 0) {
    iVar6 = (byte)param_1[2] - 0x6b;
  }
  pcVar4 = (char *)0x0;
  if (iVar6 == 0) {
    pcVar4 = 
    "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M342 87C355 75 355 54 342 42C330 29 309 29 297 42L160 179L102 122C90 109 69 109 57 122C44 134 44 155 57 167L137 247C149 260 170 260 182 247L342 87L342 87ZM342 87ZM438 215C451 203 451 182 438 170C426 157 405 157 393 170L159 403L54 298C42 285 21 285 9 298C-3 310 -3 331 9 343L137 470C149 483 170 483 182 470L438 215L438 215ZM438 215Z\"/></svg>"
    ;
  }
  return pcVar4;
}



/* ===== 1800adae0 FUN_1800adae0 ===== */

ulonglong FUN_1800adae0(longlong param_1,double param_2,double param_3,char param_4)

{
  bool bVar1;
  double dVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_res8 [2];
  float local_res10 [4];
  float local_res20 [2];
  float local_48 [8];
  float local_28 [10];
  
  fVar5 = DAT_1808ac34c;
  bVar1 = param_2 < *(double *)(param_1 + 0x70) + *(double *)(param_1 + 0x68);
  if (param_4 != '\0') {
    if (bVar1) {
    }
    else {
      fVar5 = 0.0;
    }
    *(float *)(param_1 + 0x80) = fVar5;
    *(float *)(param_1 + 0x88) = fVar5;
    *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
    return (ulonglong)bVar1;
  }
  local_48[4] = 1.0;
  local_48[0] = 0.0;
  local_48[2] = (float)((param_2 - *(double *)(param_1 + 0x78)) * DAT_1808ac598);
  pfVar4 = local_48;
  if (0.0 <= local_48[2]) {
    pfVar4 = local_48 + 2;
  }
  pfVar3 = local_48 + 4;
  if (local_48[2] <= DAT_1808ac34c) {
    pfVar3 = pfVar4;
  }
  fVar6 = *pfVar3;
  if (DAT_1808ac1f4 <= fVar6) {
    fVar6 = DAT_1808ac540 - (fVar6 + fVar6);
    fVar6 = DAT_1808ac34c - fVar6 * fVar6 * DAT_1808ac1f4;
  }
  else {
    fVar6 = (fVar6 + fVar6) * fVar6;
  }
  *(float *)(param_1 + 0x98) = fVar6;
  fVar6 = fVar5;
  if (!bVar1) {
    fVar6 = 0.0;
  }
  if (*(float *)(param_1 + 0x88) == fVar6) {
    param_3 = param_3 + *(double *)(param_1 + 0x90);
    *(double *)(param_1 + 0x90) = param_3;
  }
  else {
    param_3 = 0.0;
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x80);
    *(float *)(param_1 + 0x88) = fVar6;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  dVar2 = DAT_1808ac488;
  fVar7 = DAT_1808abfbc;
  fVar6 = *(float *)(param_1 + 0x84);
  if (bVar1) {
    local_res10[0] = 1.0;
    local_res20[0] = 0.0;
    local_res8[0] = (float)(param_3 / DAT_1808ac460);
    pfVar4 = local_res20;
    if (0.0 <= local_res8[0]) {
      pfVar4 = local_res8;
    }
    pfVar3 = local_res10;
    if (local_res8[0] <= fVar5) {
      pfVar3 = pfVar4;
    }
    fVar7 = fVar5 - *pfVar3;
    *(float *)(param_1 + 0x80) = (fVar5 - fVar7 * fVar7 * fVar7) * (fVar5 - fVar6) + fVar6;
  }
  else {
    local_28[0] = 1.0;
    local_48[5] = 0.0;
    local_48[6] = (float)(param_3 / DAT_1808ac488);
    pfVar4 = local_48 + 5;
    if (0.0 <= local_48[6]) {
      pfVar4 = local_48 + 6;
    }
    pfVar3 = local_28;
    if (local_48[6] <= fVar5) {
      pfVar3 = pfVar4;
    }
    fVar6 = (fVar5 - (fVar5 - (fVar5 - *pfVar3) * (fVar5 - *pfVar3))) * fVar6;
    *(float *)(param_1 + 0x80) = fVar6;
    if ((fVar6 <= fVar7) || (dVar2 <= param_3)) {
      return (ulonglong)pfVar3 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)pfVar3 >> 8),1);
}



/* ===== 1800add30 FUN_1800add30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800add30(undefined8 *param_1)

{
  size_t _Size;
  ulonglong uVar1;
  char *_Str;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char **ppcVar6;
  undefined1 auStack_c8 [48];
  char *local_98 [10];
  char *local_48 [3];
  
  local_48[0] = (char *)(DAT_180919500 ^ (ulonglong)auStack_c8);
  _Size = param_1[2];
  uVar1 = param_1[3];
  local_98[0] = "Frag";
  ppcVar6 = local_98;
  local_98[1] = "Molly";
  local_98[2] = "Smoke";
  local_98[3] = "Flash";
  local_98[4] = "Decoy";
  local_98[6] = "Bayonet";
  local_98[7] = "World";
  local_98[8] = "Planted_c4";
  local_98[9] = "C4";
  local_98[5] = "Knife";
  do {
    _Str = *ppcVar6;
    sVar3 = strlen(_Str);
    puVar4 = param_1;
    if (0xf < uVar1) {
      puVar4 = (undefined8 *)*param_1;
    }
    if (_Size == sVar3) {
      if (_Size == 0) goto LAB_1800ade50;
      iVar2 = memcmp(puVar4,_Str,_Size);
      if (iVar2 == 0) goto LAB_1800ade50;
    }
    ppcVar6 = ppcVar6 + 1;
  } while (ppcVar6 != local_98 + 10);
  if (_Size == 0) {
LAB_1800ade50:
    uVar5 = 1;
  }
  else {
    if (0xf < uVar1) {
      param_1 = (undefined8 *)*param_1;
    }
    if (4 < _Size) {
      puVar4 = (undefined8 *)
               thunk_FUN_1804e6890(param_1,(undefined8 *)((longlong)param_1 + 5),"Knife",5);
      if ((puVar4 != (undefined8 *)((longlong)param_1 + 5)) && (puVar4 == param_1))
      goto LAB_1800ade50;
    }
    uVar5 = 0;
  }
  return uVar5;
}



/* ===== 1800ade80 FUN_1800ade80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1800ade80(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int *piVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  longlong *unaff_RDI;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da;
  undefined8 uStack_250;
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [24];
  int local_228 [2];
  longlong *local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8 [8];
  undefined1 local_198 [32];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
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
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_248;
  local_220 = param_1;
  local_228[0] = 0;
  local_1d8[1] = 0;
  local_1d8[2] = 1;
  local_1d8[3] = 0xf;
  local_1d8[0] = 7;
  local_228[1] = 0;
  piVar13 = local_228 + 1;
  if (-1 < *(int *)(param_2 + 0xa4)) {
    piVar13 = (int *)(param_2 + 0xa4);
  }
  uVar5 = FUN_18003a390(&local_1f8,*piVar13);
  uVar5 = FUN_180066ab0(&local_218,"damage (",uVar5);
  puVar6 = (undefined4 *)FUN_1800134a0(uVar5," health left)",0xd);
  local_178 = *puVar6;
  uStack_174 = puVar6[1];
  uStack_170 = puVar6[2];
  uStack_16c = puVar6[3];
  local_168 = puVar6[4];
  uStack_164 = puVar6[5];
  uStack_160 = puVar6[6];
  uStack_15c = puVar6[7];
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 6) = 0xf;
  *(undefined1 *)puVar6 = 0;
  local_228[0] = 2;
  FUN_18000f890(&local_218);
  FUN_18000f890(&local_1f8);
  uVar5 = FUN_18003a390(local_58,*(undefined4 *)(param_2 + 0xa0));
  puVar7 = (ulonglong *)FUN_18006b5b0(uVar5,0,local_1d8,1);
  local_1d8[4] = *puVar7;
  local_1d8[5] = puVar7[1];
  local_1d8[6] = puVar7[2];
  local_1d8[7] = puVar7[3];
  puVar7[2] = 0;
  puVar7[3] = 0xf;
  *(undefined1 *)puVar7 = 0;
  local_228[0] = 6;
  FUN_1800667a0(local_78,local_1d8 + 4,local_1d8);
  if ((ulonglong)local_1d8[7] < 0x10) {
LAB_1800ae015:
    local_1d8[6] = 0;
    local_1d8[7] = 0xf;
    local_1d8[4] = local_1d8[4] & 0xffffffffffffff00;
    FUN_18000f890(local_58);
    cVar4 = FUN_1800add30(param_2 + 0xf0);
    puVar21 = auStack_248;
    puVar20 = auStack_248;
    uVar22 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    local_228[0] = 7;
    if (*(int *)(param_2 + 0xa8) == 2) {
      if (*(longlong *)(param_2 + 0xc0) == 0) {
        uVar5 = FUN_180066a20(&local_1f8,&DAT_1806e900c,local_78);
        unaff_RDI = (longlong *)FUN_1800667a0(&local_218,uVar5,&local_178);
        puVar20 = auStack_248;
        puVar18 = auStack_248;
        puVar17 = auStack_248;
        if (param_1 != unaff_RDI) {
          puVar20 = auStack_248;
          if (0xf < (ulonglong)param_1[3]) {
            lVar10 = *param_1;
            if (param_1[3] + 1U < 0x1000) goto LAB_1800ae0de;
            lVar11 = *(longlong *)(lVar10 + -8);
            puVar20 = auStack_248;
            if (0x1f < (lVar10 - lVar11) - 8U) goto LAB_1800ae0d7;
            goto LAB_1800ae0e1;
          }
          goto LAB_1800ae0e9;
        }
        goto LAB_1800ae10d;
      }
      if (cVar4 != '\0') {
        uVar5 = FUN_180066a20(local_198,"Got hurt by",local_1d8);
        uVar5 = FUN_1800667a0(local_98,uVar5,param_2 + 0xb0);
        uVar5 = FUN_1800667a0(local_b8,uVar5,local_1d8);
        puVar8 = (undefined8 *)FUN_1800134a0(uVar5,&DAT_1806e9024,4);
        local_218 = *puVar8;
        uStack_210 = puVar8[1];
        local_208 = puVar8[2];
        uStack_200 = puVar8[3];
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        *(undefined1 *)puVar8 = 0;
        local_228[0] = 0x87;
        uVar5 = FUN_1800667a0(local_d8,&local_218,local_1d8);
        uVar5 = FUN_1800667a0(local_f8,uVar5,param_2 + 0xf0);
        uVar5 = FUN_1800667a0(local_118,uVar5,local_1d8);
        puVar8 = (undefined8 *)FUN_1800134a0(uVar5,&DAT_1806e902c,3);
        local_1f8 = *puVar8;
        uStack_1f0 = puVar8[1];
        local_1e8 = puVar8[2];
        uStack_1e0 = puVar8[3];
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        *(undefined1 *)puVar8 = 0;
        local_228[0] = 0x187;
        uVar5 = FUN_1800667a0(local_138,&local_1f8,local_78);
        plVar9 = (longlong *)FUN_1800667a0(local_158,uVar5,&local_178);
        puVar20 = auStack_248;
        puVar19 = auStack_248;
        puVar12 = auStack_248;
        if (param_1 != plVar9) {
          puVar20 = auStack_248;
          if (0xf < (ulonglong)param_1[3]) {
            lVar10 = *param_1;
            if (param_1[3] + 1U < 0x1000) {
LAB_1800ae2a2:
              puVar12 = puVar19;
              lVar11 = lVar10;
            }
            else {
              lVar11 = *(longlong *)(lVar10 + -8);
              if (0x1f < (lVar10 - lVar11) - 8U) {
                lVar10 = 5;
                pcVar1 = (code *)swi(0x29);
                (*pcVar1)(5);
                puVar19 = auStack_240;
                goto LAB_1800ae2a2;
              }
            }
            *(undefined8 *)(puVar12 + -8) = 0x1800ae2ad;
            thunk_FUN_1803d64e0(lVar11);
            puVar20 = puVar12;
          }
          param_1[2] = 0;
          param_1[3] = 0xf;
          *(undefined1 *)param_1 = 0;
          uVar22 = *(undefined4 *)((longlong)plVar9 + 4);
          lVar10 = plVar9[1];
          uVar2 = *(undefined4 *)((longlong)plVar9 + 0xc);
          *(int *)param_1 = (int)*plVar9;
          *(undefined4 *)((longlong)param_1 + 4) = uVar22;
          *(int *)(param_1 + 1) = (int)lVar10;
          *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
          lVar10 = plVar9[3];
          param_1[2] = plVar9[2];
          param_1[3] = lVar10;
          plVar9[2] = 0;
          plVar9[3] = 0xf;
          *(undefined1 *)plVar9 = 0;
        }
        *(undefined8 *)(puVar20 + -8) = 0x1800ae2da;
        FUN_18000f890(local_158);
        *(undefined8 *)(puVar20 + -8) = 0x1800ae2e4;
        FUN_18000f890(local_138);
        uVar16 = *(ulonglong *)(puVar20 + 0x68);
        if (uVar16 < 0x10) {
LAB_1800ae322:
          *(undefined8 *)(puVar20 + 0x60) = 0;
          *(undefined8 *)(puVar20 + 0x68) = 0xf;
          puVar20[0x50] = 0;
          *(undefined8 *)(puVar20 + -8) = 0x1800ae33a;
          FUN_18000f890(local_118);
          *(undefined8 *)(puVar20 + -8) = 0x1800ae344;
          FUN_18000f890(local_f8);
          *(undefined8 *)(puVar20 + -8) = 0x1800ae34e;
          FUN_18000f890(local_d8);
          uVar16 = *(ulonglong *)(puVar20 + 0x48);
          if (0xf < uVar16) {
            uVar14 = uVar16 + 1;
            lVar10 = *(longlong *)(puVar20 + 0x30);
            lVar11 = lVar10;
            if (0xfff < uVar14) {
              lVar11 = *(longlong *)(lVar10 + -8);
              if (0x1f < (lVar10 - lVar11) - 8U) goto LAB_1800ae3c1;
              uVar14 = uVar16 + 0x28;
            }
            *(undefined8 *)(puVar20 + -8) = 0x1800ae388;
            thunk_FUN_1803d64e0(lVar11,uVar14);
          }
          *(undefined8 *)(puVar20 + 0x40) = 0;
          *(undefined8 *)(puVar20 + 0x48) = 0xf;
          puVar20[0x30] = 0;
          *(undefined8 *)(puVar20 + -8) = 0x1800ae3a3;
          FUN_18000f890(local_b8);
          *(undefined8 *)(puVar20 + -8) = 0x1800ae3b0;
          FUN_18000f890(local_98);
          puVar12 = local_198;
          goto LAB_1800aeb44;
        }
        uVar14 = uVar16 + 1;
        lVar10 = *(longlong *)(puVar20 + 0x50);
        lVar11 = lVar10;
        if (uVar14 < 0x1000) {
LAB_1800ae31d:
          *(undefined8 *)(puVar20 + -8) = 0x1800ae322;
          thunk_FUN_1803d64e0(lVar11,uVar14);
          goto LAB_1800ae322;
        }
        lVar11 = *(longlong *)(lVar10 + -8);
        if ((lVar10 - lVar11) - 8U < 0x20) {
          uVar14 = uVar16 + 0x28;
          goto LAB_1800ae31d;
        }
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar20 = puVar20 + 8;
LAB_1800ae3c1:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar20 = puVar20 + 8;
      }
      *(undefined8 *)(puVar20 + -8) = 0x1800ae3d8;
      uVar5 = FUN_180066a20(local_158,"Got hit by");
      *(undefined8 *)(puVar20 + -8) = 0x1800ae3ec;
      uVar5 = FUN_1800667a0(local_138,uVar5,param_2 + 0xb0);
      *(undefined8 *)(puVar20 + -8) = 0x1800ae3fe;
      uVar5 = FUN_1800667a0(local_118,uVar5,puVar20 + 0x70);
      *(undefined8 *)(puVar20 + -8) = 0x1800ae414;
      puVar6 = (undefined4 *)FUN_1800134a0(uVar5,"in the",6);
      *(undefined8 *)(puVar20 + 0x50) = 0;
      *(undefined8 *)(puVar20 + 0x58) = 0;
      *(undefined8 *)(puVar20 + 0x60) = 0;
      *(undefined8 *)(puVar20 + 0x68) = 0;
      uVar22 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *(undefined4 *)(puVar20 + 0x50) = *puVar6;
      *(undefined4 *)(puVar20 + 0x54) = uVar22;
      *(undefined4 *)(puVar20 + 0x58) = uVar2;
      *(undefined4 *)(puVar20 + 0x5c) = uVar3;
      uVar22 = puVar6[5];
      uVar2 = puVar6[6];
      uVar3 = puVar6[7];
      *(undefined4 *)(puVar20 + 0x60) = puVar6[4];
      *(undefined4 *)(puVar20 + 100) = uVar22;
      *(undefined4 *)(puVar20 + 0x68) = uVar2;
      *(undefined4 *)(puVar20 + 0x6c) = uVar3;
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 6) = 0xf;
      *(undefined1 *)puVar6 = 0;
      *(undefined4 *)(puVar20 + 0x20) = 0x207;
      *(undefined8 *)(puVar20 + -8) = 0x1800ae45d;
      uVar5 = FUN_1800667a0(local_f8,puVar20 + 0x50,puVar20 + 0x70);
      *(undefined8 *)(puVar20 + -8) = 0x1800ae471;
      uVar5 = FUN_1800667a0(local_d8,uVar5,param_2 + 0xd0);
      *(undefined8 *)(puVar20 + -8) = 0x1800ae486;
      uVar5 = FUN_1800667a0(local_b8,uVar5,puVar20 + 0x70);
      *(undefined8 *)(puVar20 + -8) = 0x1800ae49c;
      puVar6 = (undefined4 *)FUN_1800134a0(uVar5,&DAT_1806e902c,3);
      *(undefined8 *)(puVar20 + 0x30) = 0;
      *(undefined8 *)(puVar20 + 0x38) = 0;
      *(undefined8 *)(puVar20 + 0x40) = 0;
      *(undefined8 *)(puVar20 + 0x48) = 0;
      uVar22 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *(undefined4 *)(puVar20 + 0x30) = *puVar6;
      *(undefined4 *)(puVar20 + 0x34) = uVar22;
      *(undefined4 *)(puVar20 + 0x38) = uVar2;
      *(undefined4 *)(puVar20 + 0x3c) = uVar3;
      uVar22 = puVar6[5];
      uVar2 = puVar6[6];
      uVar3 = puVar6[7];
      *(undefined4 *)(puVar20 + 0x40) = puVar6[4];
      *(undefined4 *)(puVar20 + 0x44) = uVar22;
      *(undefined4 *)(puVar20 + 0x48) = uVar2;
      *(undefined4 *)(puVar20 + 0x4c) = uVar3;
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 6) = 0xf;
      *(undefined1 *)puVar6 = 0;
      *(undefined4 *)(puVar20 + 0x20) = 0x607;
      *(undefined8 *)(puVar20 + -8) = 0x1800ae4ea;
      uVar5 = FUN_1800667a0(local_98,puVar20 + 0x30,local_78);
      *(undefined8 *)(puVar20 + -8) = 0x1800ae4fb;
      plVar9 = (longlong *)FUN_1800667a0(local_198,uVar5,&local_178);
      if (param_1 != plVar9) {
        if (0xf < (ulonglong)param_1[3]) {
          lVar10 = *param_1;
          if (param_1[3] + 1U < 0x1000) {
LAB_1800ae53b:
            lVar11 = lVar10;
          }
          else {
            lVar11 = *(longlong *)(lVar10 + -8);
            if (0x1f < (lVar10 - lVar11) - 8U) {
              lVar10 = 5;
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              puVar20 = puVar20 + 8;
              goto LAB_1800ae53b;
            }
          }
          *(undefined8 *)(puVar20 + -8) = 0x1800ae546;
          thunk_FUN_1803d64e0(lVar11);
        }
        param_1[2] = 0;
        param_1[3] = 0xf;
        *(undefined1 *)param_1 = 0;
        uVar22 = *(undefined4 *)((longlong)plVar9 + 4);
        lVar10 = plVar9[1];
        uVar2 = *(undefined4 *)((longlong)plVar9 + 0xc);
        *(int *)param_1 = (int)*plVar9;
        *(undefined4 *)((longlong)param_1 + 4) = uVar22;
        *(int *)(param_1 + 1) = (int)lVar10;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
        lVar10 = plVar9[3];
        param_1[2] = plVar9[2];
        param_1[3] = lVar10;
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
      }
      *(undefined8 *)(puVar20 + -8) = 0x1800ae573;
      FUN_18000f890(local_198);
      *(undefined8 *)(puVar20 + -8) = 0x1800ae580;
      FUN_18000f890(local_98);
      uVar16 = *(ulonglong *)(puVar20 + 0x48);
      if (0xf < uVar16) {
        uVar14 = uVar16 + 1;
        lVar10 = *(longlong *)(puVar20 + 0x30);
        lVar11 = lVar10;
        if (uVar14 < 0x1000) {
LAB_1800ae5b9:
          *(undefined8 *)(puVar20 + -8) = 0x1800ae5be;
          thunk_FUN_1803d64e0(lVar11,uVar14);
          goto LAB_1800ae5be;
        }
        lVar11 = *(longlong *)(lVar10 + -8);
        if ((lVar10 - lVar11) - 8U < 0x20) {
          uVar14 = uVar16 + 0x28;
          goto LAB_1800ae5b9;
        }
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar20 = puVar20 + 8;
LAB_1800ae656:
        pcVar1 = (code *)swi(0x29);
        cVar4 = (*pcVar1)(5);
        puVar21 = puVar20 + 8;
        uVar22 = extraout_XMM0_Da;
        goto LAB_1800ae65d;
      }
LAB_1800ae5be:
      *(undefined8 *)(puVar20 + 0x40) = 0;
      *(undefined8 *)(puVar20 + 0x48) = 0xf;
      puVar20[0x30] = 0;
      *(undefined8 *)(puVar20 + -8) = 0x1800ae5d9;
      FUN_18000f890(local_b8);
      *(undefined8 *)(puVar20 + -8) = 0x1800ae5e3;
      FUN_18000f890(local_d8);
      *(undefined8 *)(puVar20 + -8) = 0x1800ae5ed;
      FUN_18000f890(local_f8);
      uVar16 = *(ulonglong *)(puVar20 + 0x68);
      if (0xf < uVar16) {
        uVar14 = uVar16 + 1;
        lVar10 = *(longlong *)(puVar20 + 0x50);
        lVar11 = lVar10;
        if (0xfff < uVar14) {
          lVar11 = *(longlong *)(lVar10 + -8);
          if (0x1f < (lVar10 - lVar11) - 8U) goto LAB_1800ae656;
          uVar14 = uVar16 + 0x28;
        }
        *(undefined8 *)(puVar20 + -8) = 0x1800ae627;
        thunk_FUN_1803d64e0(lVar11,uVar14);
      }
      *(undefined8 *)(puVar20 + 0x60) = 0;
      *(undefined8 *)(puVar20 + 0x68) = 0xf;
      puVar20[0x50] = 0;
      *(undefined8 *)(puVar20 + -8) = 0x1800ae63f;
      FUN_18000f890(local_118);
      *(undefined8 *)(puVar20 + -8) = 0x1800ae649;
      FUN_18000f890(local_138);
LAB_1800aeb40:
      puVar12 = local_158;
      goto LAB_1800aeb44;
    }
LAB_1800ae65d:
    puVar20 = puVar21;
    if (cVar4 != '\0') {
      *(undefined8 *)(puVar21 + -8) = 0x1800ae67a;
      uVar5 = FUN_180066a20(local_158,&DAT_1806e9044,puVar21 + 0x70);
      *(undefined8 *)(puVar21 + -8) = 0x1800ae68e;
      uVar5 = FUN_1800667a0(local_138,uVar5,param_2 + 0xb0);
      *(undefined8 *)(puVar21 + -8) = 0x1800ae6a0;
      uVar5 = FUN_1800667a0(local_118,uVar5,puVar21 + 0x70);
      *(undefined8 *)(puVar21 + -8) = 0x1800ae6b6;
      puVar6 = (undefined4 *)FUN_1800134a0(uVar5,&DAT_1806e9024,4);
      *(undefined8 *)(puVar21 + 0x50) = 0;
      *(undefined8 *)(puVar21 + 0x58) = 0;
      *(undefined8 *)(puVar21 + 0x60) = 0;
      *(undefined8 *)(puVar21 + 0x68) = 0;
      uVar22 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *(undefined4 *)(puVar21 + 0x50) = *puVar6;
      *(undefined4 *)(puVar21 + 0x54) = uVar22;
      *(undefined4 *)(puVar21 + 0x58) = uVar2;
      *(undefined4 *)(puVar21 + 0x5c) = uVar3;
      uVar22 = puVar6[5];
      uVar2 = puVar6[6];
      uVar3 = puVar6[7];
      *(undefined4 *)(puVar21 + 0x60) = puVar6[4];
      *(undefined4 *)(puVar21 + 100) = uVar22;
      *(undefined4 *)(puVar21 + 0x68) = uVar2;
      *(undefined4 *)(puVar21 + 0x6c) = uVar3;
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 6) = 0xf;
      *(undefined1 *)puVar6 = 0;
      *(undefined4 *)(puVar21 + 0x20) = 0x27;
      *(undefined8 *)(puVar21 + -8) = 0x1800ae6ff;
      uVar5 = FUN_1800667a0(local_f8,puVar21 + 0x50,puVar21 + 0x70);
      *(undefined8 *)(puVar21 + -8) = 0x1800ae713;
      uVar5 = FUN_1800667a0(local_d8,uVar5,param_2 + 0xf0);
      *(undefined8 *)(puVar21 + -8) = 0x1800ae728;
      uVar5 = FUN_1800667a0(local_b8,uVar5,puVar21 + 0x70);
      *(undefined8 *)(puVar21 + -8) = 0x1800ae73e;
      puVar6 = (undefined4 *)FUN_1800134a0(uVar5,&DAT_1806e902c,3);
      *(undefined8 *)(puVar21 + 0x30) = 0;
      *(undefined8 *)(puVar21 + 0x38) = 0;
      *(undefined8 *)(puVar21 + 0x40) = 0;
      *(undefined8 *)(puVar21 + 0x48) = 0;
      uVar22 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *(undefined4 *)(puVar21 + 0x30) = *puVar6;
      *(undefined4 *)(puVar21 + 0x34) = uVar22;
      *(undefined4 *)(puVar21 + 0x38) = uVar2;
      *(undefined4 *)(puVar21 + 0x3c) = uVar3;
      uVar22 = puVar6[5];
      uVar2 = puVar6[6];
      uVar3 = puVar6[7];
      *(undefined4 *)(puVar21 + 0x40) = puVar6[4];
      *(undefined4 *)(puVar21 + 0x44) = uVar22;
      *(undefined4 *)(puVar21 + 0x48) = uVar2;
      *(undefined4 *)(puVar21 + 0x4c) = uVar3;
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 6) = 0xf;
      *(undefined1 *)puVar6 = 0;
      *(undefined4 *)(puVar21 + 0x20) = 0x67;
      *(undefined8 *)(puVar21 + -8) = 0x1800ae78c;
      uVar5 = FUN_1800667a0(local_98,puVar21 + 0x30,local_78);
      *(undefined8 *)(puVar21 + -8) = 0x1800ae79d;
      plVar9 = (longlong *)FUN_1800667a0(local_198,uVar5,&local_178);
      if (param_1 != plVar9) {
        if (0xf < (ulonglong)param_1[3]) {
          lVar10 = *param_1;
          if (param_1[3] + 1U < 0x1000) {
LAB_1800ae7dd:
            lVar11 = lVar10;
          }
          else {
            lVar11 = *(longlong *)(lVar10 + -8);
            if (0x1f < (lVar10 - lVar11) - 8U) {
              lVar10 = 5;
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              puVar21 = puVar21 + 8;
              goto LAB_1800ae7dd;
            }
          }
          *(undefined8 *)(puVar21 + -8) = 0x1800ae7e8;
          thunk_FUN_1803d64e0(lVar11);
        }
        param_1[2] = 0;
        param_1[3] = 0xf;
        *(undefined1 *)param_1 = 0;
        uVar22 = *(undefined4 *)((longlong)plVar9 + 4);
        lVar10 = plVar9[1];
        uVar2 = *(undefined4 *)((longlong)plVar9 + 0xc);
        *(int *)param_1 = (int)*plVar9;
        *(undefined4 *)((longlong)param_1 + 4) = uVar22;
        *(int *)(param_1 + 1) = (int)lVar10;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
        lVar10 = plVar9[3];
        param_1[2] = plVar9[2];
        param_1[3] = lVar10;
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
        puVar20 = puVar21;
      }
      *(undefined8 *)(puVar20 + -8) = 0x1800ae815;
      FUN_18000f890(local_198);
      *(undefined8 *)(puVar20 + -8) = 0x1800ae822;
      FUN_18000f890(local_98);
      uVar16 = *(ulonglong *)(puVar20 + 0x48);
      if (uVar16 < 0x10) {
LAB_1800ae860:
        *(undefined8 *)(puVar20 + 0x40) = 0;
        *(undefined8 *)(puVar20 + 0x48) = 0xf;
        puVar20[0x30] = 0;
        *(undefined8 *)(puVar20 + -8) = 0x1800ae87b;
        FUN_18000f890(local_b8);
        *(undefined8 *)(puVar20 + -8) = 0x1800ae885;
        FUN_18000f890(local_d8);
        *(undefined8 *)(puVar20 + -8) = 0x1800ae88f;
        FUN_18000f890(local_f8);
        uVar16 = *(ulonglong *)(puVar20 + 0x68);
        if (0xf < uVar16) {
          uVar14 = uVar16 + 1;
          lVar10 = *(longlong *)(puVar20 + 0x50);
          lVar11 = lVar10;
          if (0xfff < uVar14) {
            lVar11 = *(longlong *)(lVar10 + -8);
            if (0x1f < (lVar10 - lVar11) - 8U) goto LAB_1800ae8f8;
            uVar14 = uVar16 + 0x28;
          }
          *(undefined8 *)(puVar20 + -8) = 0x1800ae8c9;
          thunk_FUN_1803d64e0(lVar11,uVar14);
        }
        *(undefined8 *)(puVar20 + 0x60) = 0;
        *(undefined8 *)(puVar20 + 0x68) = 0xf;
        puVar20[0x50] = 0;
        *(undefined8 *)(puVar20 + -8) = 0x1800ae8e1;
        FUN_18000f890(local_118);
        *(undefined8 *)(puVar20 + -8) = 0x1800ae8eb;
        FUN_18000f890(local_138);
        goto LAB_1800aeb40;
      }
      uVar14 = uVar16 + 1;
      lVar10 = *(longlong *)(puVar20 + 0x30);
      lVar11 = lVar10;
      if (uVar14 < 0x1000) {
LAB_1800ae85b:
        *(undefined8 *)(puVar20 + -8) = 0x1800ae860;
        thunk_FUN_1803d64e0(lVar11,uVar14);
        goto LAB_1800ae860;
      }
      lVar11 = *(longlong *)(lVar10 + -8);
      if ((lVar10 - lVar11) - 8U < 0x20) {
        uVar14 = uVar16 + 0x28;
        goto LAB_1800ae85b;
      }
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar20 = puVar20 + 8;
LAB_1800ae8f8:
      pcVar1 = (code *)swi(0x29);
      uVar22 = (*pcVar1)(5);
      puVar20 = puVar20 + 8;
    }
    *(undefined8 *)(puVar20 + -8) = 0x1800ae90b;
    uVar5 = FUN_180066a20(uVar22,&DAT_1806e9064);
    *(undefined8 *)(puVar20 + -8) = 0x1800ae91f;
    uVar5 = FUN_1800667a0(local_138,uVar5,param_2 + 0xb0);
    *(undefined8 *)(puVar20 + -8) = 0x1800ae931;
    uVar5 = FUN_1800667a0(local_118,uVar5,puVar20 + 0x70);
    *(undefined8 *)(puVar20 + -8) = 0x1800ae947;
    puVar6 = (undefined4 *)FUN_1800134a0(uVar5,"in the",6);
    *(undefined8 *)(puVar20 + 0x50) = 0;
    *(undefined8 *)(puVar20 + 0x58) = 0;
    *(undefined8 *)(puVar20 + 0x60) = 0;
    *(undefined8 *)(puVar20 + 0x68) = 0;
    uVar22 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *(undefined4 *)(puVar20 + 0x50) = *puVar6;
    *(undefined4 *)(puVar20 + 0x54) = uVar22;
    *(undefined4 *)(puVar20 + 0x58) = uVar2;
    *(undefined4 *)(puVar20 + 0x5c) = uVar3;
    uVar22 = puVar6[5];
    uVar2 = puVar6[6];
    uVar3 = puVar6[7];
    *(undefined4 *)(puVar20 + 0x60) = puVar6[4];
    *(undefined4 *)(puVar20 + 100) = uVar22;
    *(undefined4 *)(puVar20 + 0x68) = uVar2;
    *(undefined4 *)(puVar20 + 0x6c) = uVar3;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    *(undefined4 *)(puVar20 + 0x20) = 0x17;
    *(undefined8 *)(puVar20 + -8) = 0x1800ae990;
    uVar5 = FUN_1800667a0(local_f8,puVar20 + 0x50,puVar20 + 0x70);
    *(undefined8 *)(puVar20 + -8) = 0x1800ae9a4;
    uVar5 = FUN_1800667a0(local_d8,uVar5,param_2 + 0xd0);
    *(undefined8 *)(puVar20 + -8) = 0x1800ae9b9;
    uVar5 = FUN_1800667a0(local_b8,uVar5,puVar20 + 0x70);
    *(undefined8 *)(puVar20 + -8) = 0x1800ae9cf;
    puVar6 = (undefined4 *)FUN_1800134a0(uVar5,&DAT_1806e902c,3);
    *(undefined8 *)(puVar20 + 0x30) = 0;
    *(undefined8 *)(puVar20 + 0x38) = 0;
    *(undefined8 *)(puVar20 + 0x40) = 0;
    *(undefined8 *)(puVar20 + 0x48) = 0;
    uVar22 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *(undefined4 *)(puVar20 + 0x30) = *puVar6;
    *(undefined4 *)(puVar20 + 0x34) = uVar22;
    *(undefined4 *)(puVar20 + 0x38) = uVar2;
    *(undefined4 *)(puVar20 + 0x3c) = uVar3;
    uVar22 = puVar6[5];
    uVar2 = puVar6[6];
    uVar3 = puVar6[7];
    *(undefined4 *)(puVar20 + 0x40) = puVar6[4];
    *(undefined4 *)(puVar20 + 0x44) = uVar22;
    *(undefined4 *)(puVar20 + 0x48) = uVar2;
    *(undefined4 *)(puVar20 + 0x4c) = uVar3;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    *(undefined4 *)(puVar20 + 0x20) = 0x1f;
    *(undefined8 *)(puVar20 + -8) = 0x1800aea1d;
    uVar5 = FUN_1800667a0(local_98,puVar20 + 0x30,local_78);
    *(undefined8 *)(puVar20 + -8) = 0x1800aea2e;
    plVar9 = (longlong *)FUN_1800667a0(local_198,uVar5,&local_178);
    if (param_1 != plVar9) {
      if (0xf < (ulonglong)param_1[3]) {
        lVar10 = *param_1;
        if (param_1[3] + 1U < 0x1000) {
LAB_1800aea6e:
          lVar11 = lVar10;
        }
        else {
          lVar11 = *(longlong *)(lVar10 + -8);
          if (0x1f < (lVar10 - lVar11) - 8U) {
            lVar10 = 5;
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar20 = puVar20 + 8;
            goto LAB_1800aea6e;
          }
        }
        *(undefined8 *)(puVar20 + -8) = 0x1800aea79;
        thunk_FUN_1803d64e0(lVar11);
      }
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      uVar22 = *(undefined4 *)((longlong)plVar9 + 4);
      lVar10 = plVar9[1];
      uVar2 = *(undefined4 *)((longlong)plVar9 + 0xc);
      *(int *)param_1 = (int)*plVar9;
      *(undefined4 *)((longlong)param_1 + 4) = uVar22;
      *(int *)(param_1 + 1) = (int)lVar10;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
      lVar10 = plVar9[3];
      param_1[2] = plVar9[2];
      param_1[3] = lVar10;
      plVar9[2] = 0;
      plVar9[3] = 0xf;
      *(undefined1 *)plVar9 = 0;
    }
    *(undefined8 *)(puVar20 + -8) = 0x1800aeaa6;
    FUN_18000f890(local_198);
    *(undefined8 *)(puVar20 + -8) = 0x1800aeab3;
    FUN_18000f890(local_98);
    uVar16 = *(ulonglong *)(puVar20 + 0x48);
    if (uVar16 < 0x10) {
LAB_1800aeaf1:
      *(undefined8 *)(puVar20 + 0x40) = 0;
      *(undefined8 *)(puVar20 + 0x48) = 0xf;
      puVar20[0x30] = 0;
      *(undefined8 *)(puVar20 + -8) = 0x1800aeb0c;
      FUN_18000f890(local_b8);
      *(undefined8 *)(puVar20 + -8) = 0x1800aeb16;
      FUN_18000f890(local_d8);
      *(undefined8 *)(puVar20 + -8) = 0x1800aeb20;
      FUN_18000f890(local_f8);
      *(undefined8 *)(puVar20 + -8) = 0x1800aeb2b;
      FUN_18000f890(puVar20 + 0x50);
      *(undefined8 *)(puVar20 + -8) = 0x1800aeb35;
      FUN_18000f890(local_118);
      *(undefined8 *)(puVar20 + -8) = 0x1800aeb3f;
      FUN_18000f890(local_138);
      goto LAB_1800aeb40;
    }
    uVar14 = uVar16 + 1;
    lVar10 = *(longlong *)(puVar20 + 0x30);
    lVar11 = lVar10;
    if (uVar14 < 0x1000) {
LAB_1800aeaec:
      *(undefined8 *)(puVar20 + -8) = 0x1800aeaf1;
      thunk_FUN_1803d64e0(lVar11,uVar14);
      goto LAB_1800aeaf1;
    }
    lVar11 = *(longlong *)(lVar10 + -8);
    if ((lVar10 - lVar11) - 8U < 0x20) {
      uVar14 = uVar16 + 0x28;
      goto LAB_1800aeaec;
    }
    pcVar1 = (code *)swi(0x29);
    puVar8 = (undefined8 *)(*pcVar1)(5);
    puVar20 = puVar20 + 8;
LAB_1800aeb7e:
    puVar15 = puVar8;
LAB_1800aeb81:
    uVar5 = puVar8[2];
    *(undefined8 *)(puVar20 + -8) = 0x1800aeb8d;
    FUN_1800134a0(param_1,puVar15,uVar5);
    *(undefined8 *)(puVar20 + -8) = 0x1800aeb97;
    FUN_18000f890(local_198);
  }
  else {
    uVar14 = local_1d8[7] + 1;
    uVar16 = local_1d8[4];
    if (uVar14 < 0x1000) {
LAB_1800ae010:
      thunk_FUN_1803d64e0(uVar16,uVar14);
      goto LAB_1800ae015;
    }
    uVar16 = *(ulonglong *)(local_1d8[4] - 8);
    if ((local_1d8[4] - uVar16) - 8 < 0x20) {
      uVar14 = local_1d8[7] + 0x28;
      goto LAB_1800ae010;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar17 = auStack_240;
LAB_1800ae0d7:
    lVar10 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar18 = puVar17 + 8;
LAB_1800ae0de:
    puVar20 = puVar18;
    lVar11 = lVar10;
LAB_1800ae0e1:
    *(undefined8 *)(puVar20 + -8) = 0x1800ae0e9;
    thunk_FUN_1803d64e0(lVar11);
LAB_1800ae0e9:
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    uVar22 = *(undefined4 *)((longlong)unaff_RDI + 4);
    lVar10 = unaff_RDI[1];
    uVar2 = *(undefined4 *)((longlong)unaff_RDI + 0xc);
    *(int *)param_1 = (int)*unaff_RDI;
    *(undefined4 *)((longlong)param_1 + 4) = uVar22;
    *(int *)(param_1 + 1) = (int)lVar10;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
    lVar10 = unaff_RDI[3];
    param_1[2] = unaff_RDI[2];
    param_1[3] = lVar10;
    unaff_RDI[2] = 0;
    unaff_RDI[3] = 0xf;
    *(undefined1 *)unaff_RDI = 0;
LAB_1800ae10d:
    *(undefined8 *)(puVar20 + -8) = 0x1800ae117;
    FUN_18000f890(puVar20 + 0x30);
    puVar12 = puVar20 + 0x50;
LAB_1800aeb44:
    *(undefined8 *)(puVar20 + -8) = 0x1800aeb49;
    FUN_18000f890(puVar12);
    if (*(longlong *)(param_2 + 0x138) != 0) {
      *(undefined8 *)(puVar20 + -8) = 0x1800aeb6a;
      puVar8 = (undefined8 *)FUN_180066a20(local_198,&DAT_1806e905c,param_2 + 0x128);
      if ((ulonglong)puVar8[3] < 0x10) goto LAB_1800aeb7e;
      puVar15 = (undefined8 *)*puVar8;
      goto LAB_1800aeb81;
    }
  }
  *(undefined8 *)(puVar20 + -8) = 0x1800aeba4;
  FUN_18000f890(local_78);
  uVar16 = CONCAT44(uStack_15c,uStack_160);
  if (0xf < uVar16) {
    uVar14 = uVar16 + 1;
    lVar11 = CONCAT44(uStack_174,local_178);
    lVar10 = lVar11;
    if (0xfff < uVar14) {
      lVar10 = *(longlong *)(lVar11 + -8);
      if (0x1f < (lVar11 - lVar10) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        goto LAB_1800aec4a;
      }
      uVar14 = uVar16 + 0x28;
    }
    *(undefined8 *)(puVar20 + -8) = 0x1800aebdc;
    thunk_FUN_1803d64e0(lVar10,uVar14);
  }
  if (0xf < (ulonglong)local_1d8[3]) {
    uVar16 = local_1d8[3] + 1;
    lVar10 = *(longlong *)(puVar20 + 0x70);
    lVar11 = lVar10;
    if (0xfff < uVar16) {
      lVar11 = *(longlong *)(lVar10 + -8);
      if (0x1f < (lVar10 - lVar11) - 8U) {
LAB_1800aec4a:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        plVar9 = (longlong *)(*pcVar1)();
        return plVar9;
      }
      uVar16 = local_1d8[3] + 0x28;
    }
    *(undefined8 *)(puVar20 + -8) = 0x1800aec15;
    thunk_FUN_1803d64e0(lVar11,uVar16);
  }
  *(undefined8 *)(puVar20 + -8) = 0x1800aec27;
  return param_1;
}



/* ===== 1800aec60 FUN_1800aec60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800aec60(undefined8 *param_1,float *param_2)

{
  size_t sVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  int local_48;
  int local_40;
  int local_38;
  char local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_68;
  if (*param_2 * DAT_1808acb94 <= 0.0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)(*param_2 * DAT_1808acb94);
    if (0xff < iVar2) {
      iVar2 = 0xff;
    }
  }
  if (param_2[1] * DAT_1808acb94 <= 0.0) {
    local_48 = 0;
  }
  else {
    local_48 = (int)(param_2[1] * DAT_1808acb94);
    if (0xff < local_48) {
      local_48 = 0xff;
    }
  }
  if (param_2[2] * DAT_1808acb94 <= 0.0) {
    local_40 = 0;
  }
  else {
    local_40 = (int)(param_2[2] * DAT_1808acb94);
    if (0xff < local_40) {
      local_40 = 0xff;
    }
  }
  if (param_2[3] * DAT_1808acb94 <= 0.0) {
    local_38 = 0;
  }
  else {
    local_38 = (int)(param_2[3] * DAT_1808acb94);
    if (0xff < local_38) {
      local_38 = 0xff;
    }
  }
  local_20[0] = '\0';
  local_20[1] = '\0';
  local_20[2] = '\0';
  local_20[3] = '\0';
  local_20[4] = '\0';
  local_20[5] = '\0';
  local_20[6] = '\0';
  local_20[7] = '\0';
  local_20[8] = '\0';
  local_20[9] = '\0';
  local_20[10] = '\0';
  local_20[0xb] = '\0';
  local_20[0xc] = '\0';
  local_20[0xd] = '\0';
  local_20[0xe] = '\0';
  local_20[0xf] = '\0';
  snprintf(local_20,0x10,"%02X%02X%02X%02X",iVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(local_20);
  FUN_1800133a0(param_1,local_20,sVar1);
  return param_1;
}



/* ===== 1800aed80 FUN_1800aed80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800aed80(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar7 = 1;
  local_88 = 1;
  bVar3 = false;
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    pcVar8 = param_2;
  }
  else {
    pcVar8 = *(char **)param_2;
  }
  pcVar9 = pcVar8 + *(longlong *)(param_2 + 0x10);
  local_80 = param_1;
  do {
    if (pcVar8 == pcVar9) {
      s_DEFAULT_1806e90b0[0] = s_DEFAULT_1806e90b0[0];
      s_DEFAULT_1806e90b0[1] = s_DEFAULT_1806e90b0[1];
      s_DEFAULT_1806e90b0[2] = s_DEFAULT_1806e90b0[2];
      s_DEFAULT_1806e90b0[3] = s_DEFAULT_1806e90b0[3];
      s_DEFAULT_1806e90b0[4] = s_DEFAULT_1806e90b0[4];
      s_DEFAULT_1806e90b0[5] = s_DEFAULT_1806e90b0[5];
      return param_1;
    }
    if (*pcVar8 == '\x02') {
      FUN_1800690a0(param_1,7);
      if (bVar3) {
        uStack_70 = 0;
        local_68 = 7;
        local_60 = 0xf;
        local_78 = (ulonglong)
                   CONCAT16(s_DEFAULT_1806e90b0[6],
                            CONCAT24(s_DEFAULT_1806e90b0._4_2_,s_DEFAULT_1806e90b0._0_4_));
        puVar4 = &local_78;
        uVar7 = uVar7 | 2;
      }
      else {
        puVar4 = (undefined8 *)FUN_180024b50(local_58,param_3);
        uVar7 = uVar7 | 4;
      }
      puVar1 = puVar4 + 2;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      local_88 = uVar7;
      FUN_1800134a0(param_1,puVar4,*puVar1);
      if ((uVar7 & 4) != 0) {
        uVar7 = uVar7 & 0xfffffffb;
        local_88 = uVar7;
        FUN_18000f890(local_58);
      }
      if (((uVar7 & 2) != 0) && (uVar7 = uVar7 & 0xfffffffd, local_88 = uVar7, 0xf < local_60)) {
        uVar6 = local_60 + 1;
        uVar5 = local_78;
        if (0xfff < uVar6) {
          uVar5 = *(ulonglong *)(local_78 - 8);
          if (0x1f < (local_78 - uVar5) - 8) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            pcVar2 = (code *)swi(3);
            puVar4 = (undefined8 *)(*pcVar2)();
            return puVar4;
          }
          uVar6 = local_60 + 0x28;
        }
        thunk_FUN_1803d64e0(uVar5,uVar6);
      }
      bVar3 = !bVar3;
    }
    else {
      FUN_1800690a0(param_1);
    }
    pcVar8 = pcVar8 + 1;
  } while( true );
}



/* ===== 1800aef40 FUN_1800aef40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800aef40(undefined8 *param_1,uint *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined1 auStack_128 [32];
  char local_108 [8];
  undefined8 *local_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined8 **local_e8;
  char *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_128;
  local_f8 = 0;
  lVar4 = 0;
  if (*param_2 < 6) {
    lVar4 = (longlong)(int)*param_2;
  }
  local_c8 = param_1;
  FUN_1800aec60(local_40,&DAT_180920e74 + lVar4 * 0x14);
  FUN_1800aec60(local_60,&DAT_180920e9c);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_f8 = 3;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0xf;
  local_80 = 0;
  local_108[0] = '\0';
  local_f0 = &local_80;
  local_e8 = &local_100;
  local_e0 = local_108;
  local_d8 = local_40;
  local_d0 = local_60;
  puVar6 = param_2 + 2;
  if (0xf < *(ulonglong *)(param_2 + 8)) {
    puVar6 = *(uint **)puVar6;
  }
  puVar7 = (uint *)(*(longlong *)(param_2 + 6) + (longlong)puVar6);
  local_100 = param_1;
  do {
    if (puVar6 == puVar7) {
      FUN_1800af280(&local_f0);
      FUN_18000f890(&local_80);
      FUN_18000f890(local_60);
      FUN_18000f890(local_40);
      return param_1;
    }
    if ((char)*puVar6 == '\a') {
      FUN_1800af280(&local_f0);
      local_108[0] = local_108[0] == '\0';
    }
    else if ((char)*puVar6 == '\n') {
      FUN_1800af280(&local_f0);
      uStack_98 = 0;
      local_90 = 1;
      local_88 = 0xf;
      local_a0 = (ulonglong)(DAT_1806e6a94 & 0xff);
      uStack_b8 = 0;
      local_b0 = 7;
      local_a8 = 0xf;
      local_c0 = (ulonglong)
                 CONCAT16(s_DEFAULT_1806e90b0[6],
                          CONCAT24(s_DEFAULT_1806e90b0._4_2_,s_DEFAULT_1806e90b0._0_4_));
      FUN_1800690a0(local_100,7);
      FUN_1800134a0(local_100,&local_c0,7);
      FUN_1800134a0(local_100,&local_a0,1);
      FUN_1800690a0(local_100,0x20);
      if (0xf < local_a8) {
        uVar5 = local_a8 + 1;
        uVar3 = local_c0;
        if (0xfff < uVar5) {
          uVar3 = *(ulonglong *)(local_c0 - 8);
          if (0x1f < (local_c0 - uVar3) - 8) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            goto LAB_1800af1f1;
          }
          uVar5 = local_a8 + 0x28;
        }
        thunk_FUN_1803d64e0(uVar3,uVar5);
      }
      if (0xf < local_88) {
        uVar5 = local_88 + 1;
        uVar3 = local_a0;
        if (0xfff < uVar5) {
          uVar3 = *(ulonglong *)(local_a0 - 8);
          if (0x1f < (local_a0 - uVar3) - 8) {
LAB_1800af1f1:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            puVar2 = (undefined8 *)(*pcVar1)();
            return puVar2;
          }
          uVar5 = local_88 + 0x28;
        }
        thunk_FUN_1803d64e0(uVar3,uVar5);
      }
    }
    else {
      FUN_1800690a0(&local_80);
    }
    puVar6 = (uint *)((longlong)puVar6 + 1);
  } while( true );
}



/* ===== 1800af200 FUN_1800af200 ===== */

void FUN_1800af200(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  FUN_1800690a0(*param_1,7);
  if ((ulonglong)param_2[3] < 0x10) {
    puVar1 = param_2;
  }
  else {
    puVar1 = (undefined8 *)*param_2;
  }
  FUN_1800134a0(*param_1,puVar1,param_2[2]);
  if ((ulonglong)param_3[3] < 0x10) {
    puVar1 = param_3;
  }
  else {
    puVar1 = (undefined8 *)*param_3;
  }
  FUN_1800134a0(*param_1,puVar1,param_3[2]);
  FUN_1800690a0(*param_1,0x20);
  return;
}



/* ===== 1800af280 FUN_1800af280 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800af280(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  if (*(longlong *)(*param_1 + 0x10) != 0) {
    lVar2 = param_1[1];
    uVar4 = FUN_1800aed80(local_50,*param_1,param_1[4]);
    if (*(char *)param_1[2] == '\0') {
      uStack_88 = 0;
      local_80 = 7;
      local_78 = 0xf;
      local_90 = (ulonglong)
                 CONCAT16(s_DEFAULT_1806e90b0[6],
                          CONCAT24(s_DEFAULT_1806e90b0._4_2_,s_DEFAULT_1806e90b0._0_4_));
      puVar5 = &local_90;
      uVar9 = 2;
    }
    else {
      puVar5 = (undefined8 *)FUN_180024b50(local_70,param_1[3]);
      uVar9 = 1;
    }
    local_98 = uVar9;
    FUN_1800af200(lVar2,puVar5,uVar4);
    if ((uVar9 & 2) != 0) {
      uVar9 = uVar9 & 0xfffffffd;
      if (0xf < local_78) {
        uVar7 = local_78 + 1;
        uVar6 = local_90;
        if (0xfff < uVar7) {
          uVar6 = *(ulonglong *)(local_90 - 8);
          if (0x1f < (local_90 - uVar6) - 8) {
            puVar5 = (undefined8 *)&DAT_00000005;
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)();
            if ((ulonglong)puVar5[2] <= uVar7 + 1) {
              return (undefined8 *)0xffffffff;
            }
            puVar8 = puVar5;
            if (0xf < (ulonglong)puVar5[3]) {
              puVar8 = (undefined8 *)*puVar5;
            }
            cVar1 = *(char *)((longlong)puVar8 + uVar7);
            iVar10 = (int)cVar1;
            puVar8 = (undefined8 *)0xffffffff;
            if ((byte)(cVar1 - 0x30U) < 10) {
              iVar12 = iVar10 + -0x30;
              iVar10 = iVar10 * 0x10 + -0x300;
            }
            else if ((byte)(cVar1 + 0xbfU) < 6) {
              iVar12 = iVar10 + -0x37;
              iVar10 = iVar10 * 0x10 + -0x370;
            }
            else if ((byte)(cVar1 + 0x9fU) < 6) {
              iVar12 = iVar10 + -0x57;
              iVar10 = iVar10 * 0x10 + -0x570;
            }
            else {
              iVar12 = -1;
              iVar10 = -0x10;
            }
            if (0xf < (ulonglong)puVar5[3]) {
              puVar5 = (undefined8 *)*puVar5;
            }
            cVar1 = *(char *)((longlong)puVar5 + uVar7 + 1);
            iVar11 = (int)cVar1;
            if ((byte)(cVar1 - 0x30U) < 10) {
              iVar11 = iVar11 + -0x30;
            }
            else if ((byte)(cVar1 + 0xbfU) < 6) {
              iVar11 = iVar11 + -0x37;
            }
            else {
              iVar11 = iVar11 + -0x57;
              if (5 < (byte)(cVar1 + 0x9fU)) {
                iVar11 = -1;
              }
            }
            if ((-1 < iVar12) && (-1 < iVar11)) {
              puVar8 = (undefined8 *)(ulonglong)(uint)(iVar10 + iVar11);
            }
            return puVar8;
          }
          uVar7 = local_78 + 0x28;
        }
        thunk_FUN_1803d64e0(uVar6,uVar7);
      }
    }
    if ((uVar9 & 1) != 0) {
      FUN_18000f890(local_70);
    }
    FUN_18000f890(local_50);
  }
  puVar5 = (undefined8 *)*param_1;
  puVar5[2] = 0;
  if (0xf < (ulonglong)puVar5[3]) {
    puVar5 = (undefined8 *)*puVar5;
  }
  *(undefined1 *)puVar5 = 0;
  return puVar5;
}



/* ===== 1800af3e0 FUN_1800af3e0 ===== */

int FUN_1800af3e0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if ((ulonglong)param_1[2] <= param_2 + 1U) {
    return -1;
  }
  puVar5 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  cVar1 = *(char *)((longlong)puVar5 + param_2);
  iVar3 = (int)cVar1;
  iVar2 = -1;
  if ((byte)(cVar1 - 0x30U) < 10) {
    iVar6 = iVar3 + -0x30;
    iVar3 = iVar3 * 0x10 + -0x300;
  }
  else if ((byte)(cVar1 + 0xbfU) < 6) {
    iVar6 = iVar3 + -0x37;
    iVar3 = iVar3 * 0x10 + -0x370;
  }
  else if ((byte)(cVar1 + 0x9fU) < 6) {
    iVar6 = iVar3 + -0x57;
    iVar3 = iVar3 * 0x10 + -0x570;
  }
  else {
    iVar6 = -1;
    iVar3 = -0x10;
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  cVar1 = *(char *)((longlong)param_1 + param_2 + 1);
  iVar4 = (int)cVar1;
  if ((byte)(cVar1 - 0x30U) < 10) {
    iVar4 = iVar4 + -0x30;
  }
  else if ((byte)(cVar1 + 0xbfU) < 6) {
    iVar4 = iVar4 + -0x37;
  }
  else {
    iVar4 = iVar4 + -0x57;
    if (5 < (byte)(cVar1 + 0x9fU)) {
      iVar4 = -1;
    }
  }
  if ((-1 < iVar6) && (-1 < iVar4)) {
    iVar2 = iVar3 + iVar4;
  }
  return iVar2;
}



/* ===== 1800af4c0 FUN_1800af4c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800af4c0(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  size_t sVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  uVar5 = _UNK_1808adbd8;
  uVar4 = _DAT_1808adbd0;
  fVar3 = DAT_1808abfe4;
  local_68 = DAT_180919500 ^ (ulonglong)auStack_c8;
  local_78 = _DAT_1808adbd0;
  uStack_70 = _UNK_1808adbd8;
  uStack_90 = 0;
  local_88 = _DAT_1808ad410;
  local_98 = 0;
  local_a8 = &local_98;
  local_a0 = &local_78;
  uVar11 = 0;
  if (param_1[2] != 0) {
    do {
      puVar10 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar10 = (undefined8 *)*param_1;
      }
      if (*(char *)((longlong)puVar10 + uVar11) == '\a') {
        FUN_1800af700(&local_a8);
        uVar1 = uVar11 + 1;
        if ((ulonglong)param_1[2] < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_18002a1a0();
        }
        uVar13 = param_1[2] - uVar1;
        sVar12 = 7;
        if (uVar13 < 7) {
          sVar12 = uVar13;
        }
        uVar2 = param_1[3];
        puVar10 = param_1;
        if (0xf < uVar2) {
          puVar10 = (undefined8 *)*param_1;
        }
        iVar6 = memcmp((void *)((longlong)puVar10 + uVar1),"DEFAULT",sVar12);
        if ((iVar6 == 0) && (6 < sVar12)) {
          local_78 = uVar4;
          uStack_70 = uVar5;
          uVar11 = uVar11 + 7;
        }
        else {
          sVar12 = 6;
          if (uVar13 < 6) {
            sVar12 = uVar13;
          }
          if (uVar2 < 0x10) {
            puVar10 = param_1;
          }
          else {
            puVar10 = (undefined8 *)*param_1;
          }
          iVar6 = memcmp((void *)((longlong)puVar10 + uVar1),"ACCENT",sVar12);
          if ((iVar6 == 0) && (5 < sVar12)) {
            uVar11 = uVar11 + 6;
            fVar15 = DAT_18091a1a0;
            fVar16 = DAT_18091a19c;
            fVar14 = DAT_18091a198;
          }
          else {
            iVar6 = FUN_1800af3e0(param_1,uVar1);
            iVar7 = FUN_1800af3e0(param_1,uVar11 + 3);
            iVar8 = FUN_1800af3e0(param_1,uVar11 + 5);
            iVar9 = FUN_1800af3e0(param_1,uVar11 + 7);
            if ((iVar6 < 0) || (((iVar7 < 0 || (iVar8 < 0)) || (iVar9 < 0)))) goto LAB_1800af6ac;
            fVar14 = (float)iVar6 * fVar3;
            fVar16 = (float)iVar7 * fVar3;
            fVar15 = (float)iVar8 * fVar3;
            uVar11 = uVar11 + 8;
          }
          uStack_70 = CONCAT44(0x3f800000,fVar15);
          local_78 = CONCAT44(fVar16,fVar14);
        }
      }
      else {
        FUN_1800690a0(&local_98);
      }
LAB_1800af6ac:
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulonglong)param_1[2]);
  }
  FUN_1800af700(&local_a8);
  FUN_18000f890(&local_98);
  return;
}



/* ===== 1800af700 FUN_1800af700 ===== */

void FUN_1800af700(undefined8 *param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1[2] != 0) {
    pfVar2 = (float *)param_1[1];
    puVar7 = param_1;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar7 = puVar1;
    }
    if (*pfVar2 * DAT_1808acb94 <= 0.0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)(*pfVar2 * DAT_1808acb94);
      if (0xff < (int)uVar3) {
        uVar3 = 0xff;
      }
    }
    if (pfVar2[1] * DAT_1808acb94 <= 0.0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(pfVar2[1] * DAT_1808acb94);
      if (0xff < iVar5) {
        iVar5 = 0xff;
      }
    }
    if (pfVar2[2] * DAT_1808acb94 <= 0.0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(pfVar2[2] * DAT_1808acb94);
      if (0xff < iVar4) {
        iVar4 = 0xff;
      }
    }
    if (pfVar2[3] * DAT_1808acb94 <= 0.0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(pfVar2[3] * DAT_1808acb94);
      if (0xff < iVar6) {
        iVar6 = 0xff;
      }
    }
    FUN_1802b2bb0(iVar6 << 0x18 | iVar4 << 0x10 | iVar5 << 8 | uVar3,*puVar7);
    param_1 = (undefined8 *)*param_1;
    param_1[2] = 0;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined1 *)param_1 = 0;
  }
  return;
}



/* ===== 1800af7e0 FUN_1800af7e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800af7e0(undefined8 *param_1,uint *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_118 [40];
  undefined8 *local_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
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
  uVar6 = FUN_1800aef40(local_48);
  lVar11 = 0;
  if (*param_2 < 6) {
    lVar11 = (longlong)(int)*param_2;
  }
  uVar7 = FUN_1800aec60(local_68,&DAT_180920e74 + lVar11 * 0x14);
  uVar7 = FUN_180066ab0(local_88,&DAT_1806e90e4,uVar7);
  puVar8 = (ulonglong *)FUN_1800134a0(uVar7,"neverlose",9);
  local_e8 = *puVar8;
  uStack_e0 = puVar8[1];
  local_d8 = puVar8[2];
  uStack_d0 = puVar8[3];
  puVar8[2] = 0;
  puVar8[3] = 0xf;
  *(undefined1 *)puVar8 = 0;
  puVar9 = (undefined4 *)FUN_1800134a0(&local_e8,&DAT_1806e9090,0x16);
  local_c8 = *puVar9;
  uStack_c4 = puVar9[1];
  uStack_c0 = puVar9[2];
  uStack_bc = puVar9[3];
  local_b8 = puVar9[4];
  uStack_b4 = puVar9[5];
  uStack_b0 = puVar9[6];
  uStack_ac = puVar9[7];
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0xf;
  *(undefined1 *)puVar9 = 0;
  uVar6 = FUN_180066820(local_a8,&local_c8,uVar6);
  puVar9 = (undefined4 *)FUN_1800134a0(uVar6,&DAT_1806e9080,10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  *(undefined4 *)param_1 = *puVar9;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar2 = puVar9[5];
  uVar3 = puVar9[6];
  uVar4 = puVar9[7];
  *(undefined4 *)(param_1 + 2) = puVar9[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined8 *)(puVar9 + 4) = 0;
  *(undefined8 *)(puVar9 + 6) = 0xf;
  *(undefined1 *)puVar9 = 0;
  FUN_18000f890(local_a8);
  uVar12 = CONCAT44(uStack_ac,uStack_b0);
  if (0xf < uVar12) {
    uVar13 = uVar12 + 1;
    lVar5 = CONCAT44(uStack_c4,local_c8);
    lVar11 = lVar5;
    if (0xfff < uVar13) {
      lVar11 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar11) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        goto LAB_1800afa00;
      }
      uVar13 = uVar12 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar11,uVar13);
  }
  if (0xf < uStack_d0) {
    uVar13 = uStack_d0 + 1;
    uVar12 = local_e8;
    if (0xfff < uVar13) {
      uVar12 = *(ulonglong *)(local_e8 - 8);
      if (0x1f < (local_e8 - uVar12) - 8) {
LAB_1800afa00:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar10 = (undefined8 *)(*pcVar1)();
        return puVar10;
      }
      uVar13 = uStack_d0 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar12,uVar13);
  }
  local_d8 = 0;
  uStack_d0 = 0xf;
  local_e8 = local_e8 & 0xffffffffffffff00;
  FUN_18000f890(local_88);
  FUN_18000f890(local_68);
  FUN_18000f890(local_48);
  return param_1;
}



/* ===== 1800afa10 FUN_1800afa10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800afa10(undefined8 param_1,double param_2)

{
  longlong lVar1;
  size_t _Size;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_88;
  if (DAT_180ca0d98 != 0) {
    lVar1 = *(longlong *)
             (DAT_180ca0d80 + (DAT_180ca0d98 + DAT_180ca0d90 + -1 & DAT_180ca0d88 - 1U) * 8);
    puVar3 = (undefined8 *)FUN_1800aef40(local_48,param_1);
    _Buf1 = (undefined8 *)FUN_1800aef40(local_68,lVar1);
    if ((ulonglong)puVar3[3] < 0x10) {
      _Buf2 = puVar3;
    }
    else {
      _Buf2 = (undefined8 *)*puVar3;
    }
    _Size = _Buf1[2];
    if (0xf < (ulonglong)_Buf1[3]) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if (_Size == puVar3[2]) {
      if (_Size == 0) {
        FUN_18000f890(local_68);
        FUN_18000f890(local_48);
      }
      else {
        iVar2 = memcmp(_Buf1,_Buf2,_Size);
        FUN_18000f890(local_68);
        local_28 = FUN_18000f890(local_48);
        if (iVar2 != 0) goto LAB_1800afaba;
      }
      *(double *)(lVar1 + 0x68) = param_2 - DAT_1808ac448;
      *(undefined8 *)(lVar1 + 0x70) = 0x4020000000000000;
      *(int *)(lVar1 + 0x9c) = *(int *)(lVar1 + 0x9c) + 1;
      return 0x4020000000000001;
    }
    FUN_18000f890(local_68);
    local_28 = FUN_18000f890(local_48);
  }
LAB_1800afaba:
  return local_28 & 0xffffffffffffff00;
}



/* ===== 1800afb50 FUN_1800afb50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800afb50(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  int *piVar1;
  size_t sVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int *piVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  undefined *local_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong lStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  longlong lStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_138;
  local_118 = &DAT_1809e9bd0;
  iVar6 = FUN_1804e4d70(&DAT_1809e9bd0);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e9c1c == 0x7fffffff) {
    DAT_1809e9c1c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar17 = auStack_138;
  if (((DAT_180ca0d98 != 0) &&
      (piVar1 = *(int **)(DAT_180ca0d80 +
                         (DAT_180ca0d88 - 1U & DAT_180ca0d98 + DAT_180ca0d90 + -1) * 8),
      puVar17 = auStack_138, *piVar1 == 0)) && (puVar17 = auStack_138, piVar1[0x2a] != 2)) {
    piVar10 = piVar1 + 0x2c;
    if ((ulonglong)param_1[3] < 0x10) {
      puVar12 = param_1;
    }
    else {
      puVar12 = (undefined8 *)*param_1;
    }
    sVar2 = *(size_t *)(piVar1 + 0x30);
    if (0xf < *(ulonglong *)(piVar1 + 0x32)) {
      piVar10 = *(int **)piVar10;
    }
    puVar17 = auStack_138;
    if (sVar2 == param_1[2]) {
      if (sVar2 != 0) {
        iVar6 = memcmp(piVar10,puVar12,sVar2);
        puVar17 = auStack_138;
        if (iVar6 != 0) goto LAB_1800aff02;
      }
      puVar17 = auStack_138;
      if ((ulonglong)param_2[3] < 0x10) {
        puVar12 = param_2;
      }
      else {
        puVar12 = (undefined8 *)*param_2;
      }
      sVar2 = *(size_t *)(piVar1 + 0x40);
      if (*(ulonglong *)(piVar1 + 0x42) < 0x10) {
        piVar10 = piVar1 + 0x3c;
      }
      else {
        piVar10 = *(int **)(piVar1 + 0x3c);
      }
      if (sVar2 == param_2[2]) {
        if (sVar2 != 0) {
          iVar6 = memcmp(piVar10,puVar12,sVar2);
          puVar17 = auStack_138;
          if (iVar6 != 0) goto LAB_1800aff02;
        }
        cVar5 = FUN_1800add30(piVar1 + 0x3c);
        puVar17 = auStack_138;
        if (cVar5 == '\0') {
          if (piVar1 + 0x4a != param_3) {
            if (*(ulonglong *)(param_3 + 6) < 0x10) {
              piVar10 = param_3;
            }
            else {
              piVar10 = *(int **)param_3;
            }
            FUN_180029840(piVar1 + 0x4a,piVar10,*(undefined8 *)(param_3 + 4));
          }
          uVar7 = FUN_1800ade80(local_b0,piVar1);
          FUN_18002ba60(piVar1 + 2,uVar7);
          FUN_18000f890(local_b0);
          FUN_1804e4e90(&DAT_1809e9bd0);
          FUN_1800aec60(local_b0,&DAT_180920e9c);
          uVar8 = FUN_1800aed80(local_50,param_3,local_b0);
          local_110 = (undefined8 *)0x0;
          uStack_108 = 0;
          local_100 = 0;
          local_f8 = 0;
          local_110 = (undefined8 *)FUN_18000fb70(0x20);
          uVar4 = _UNK_1808ad8a8;
          uVar7 = _DAT_1808ad8a0;
          local_100 = 0x1b;
          local_f8 = 0x1f;
          *local_110 = _DAT_1808ad8a0;
          local_110[1] = uVar4;
          *(undefined8 *)((longlong)local_110 + 0xb) = uVar7;
          *(undefined8 *)((longlong)local_110 + 0x13) = uVar4;
          *(undefined1 *)((longlong)local_110 + 0x1b) = 0;
          uVar7 = FUN_180066ab0(local_70,&DAT_1806e90d8,&local_110);
          plVar9 = (longlong *)FUN_1800134a0(uVar7,&DAT_1806e90cc,5);
          local_d0 = *plVar9;
          lStack_c8 = plVar9[1];
          local_c0 = (undefined4)plVar9[2];
          uStack_bc = *(undefined4 *)((longlong)plVar9 + 0x14);
          uStack_b8 = (undefined4)plVar9[3];
          uStack_b4 = *(undefined4 *)((longlong)plVar9 + 0x1c);
          plVar9[2] = 0;
          plVar9[3] = 0xf;
          *(undefined1 *)plVar9 = 0;
          uVar7 = FUN_180066820(local_90,&local_d0,uVar8);
          plVar9 = (longlong *)FUN_1800134a0(uVar7,&DAT_1806e9080,10);
          local_f0 = *plVar9;
          lStack_e8 = plVar9[1];
          local_e0 = (undefined4)plVar9[2];
          uStack_dc = *(undefined4 *)((longlong)plVar9 + 0x14);
          uStack_d8 = (undefined4)plVar9[3];
          uStack_d4 = *(undefined4 *)((longlong)plVar9 + 0x1c);
          plVar9[2] = 0;
          plVar9[3] = 0xf;
          *(undefined1 *)plVar9 = 0;
          FUN_1800af4c0(&local_f0);
          uVar14 = CONCAT44(uStack_d4,uStack_d8);
          if (uVar14 < 0x10) {
LAB_1800afe39:
            FUN_18000f890(local_90);
            puVar15 = auStack_138;
            uVar14 = CONCAT44(uStack_b4,uStack_b8);
            if (0xf < uVar14) {
              uVar13 = uVar14 + 1;
              lVar11 = local_d0;
              if (0xfff < uVar13) {
                lVar11 = *(longlong *)(local_d0 + -8);
                if (0x1f < (local_d0 - lVar11) - 8U) goto LAB_1800afef4;
                uVar13 = uVar14 + 0x28;
              }
              thunk_FUN_1803d64e0(lVar11,uVar13);
            }
            FUN_18000f890(local_70);
            puVar16 = auStack_138;
            if (0xf < local_f8) {
              uVar14 = local_f8 + 1;
              puVar12 = local_110;
              if (0xfff < uVar14) {
                puVar12 = (undefined8 *)local_110[-1];
                if (0x1f < (ulonglong)((longlong)local_110 + (-8 - (longlong)puVar12)))
                goto LAB_1800afefb;
                uVar14 = local_f8 + 0x28;
              }
              thunk_FUN_1803d64e0(puVar12,uVar14);
            }
            local_100 = 0;
            local_f8 = 0xf;
            local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffffffffff00);
            FUN_18000f890(local_50);
            FUN_18000f890(local_b0);
            puVar17 = auStack_138;
            uVar7 = 1;
            goto LAB_1800aff0c;
          }
          uVar13 = uVar14 + 1;
          lVar11 = local_f0;
          if (uVar13 < 0x1000) {
LAB_1800afe33:
            thunk_FUN_1803d64e0(lVar11,uVar13);
            goto LAB_1800afe39;
          }
          lVar11 = *(longlong *)(local_f0 + -8);
          if ((local_f0 - lVar11) - 8U < 0x20) {
            uVar13 = uVar14 + 0x28;
            goto LAB_1800afe33;
          }
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar15 = auStack_130;
LAB_1800afef4:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar16 = puVar15 + 8;
LAB_1800afefb:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar17 = puVar16 + 8;
        }
      }
    }
  }
LAB_1800aff02:
  *(undefined8 *)(puVar17 + -8) = 0x1800aff0a;
  FUN_1804e4e90(&DAT_1809e9bd0);
  uVar7 = 0;
LAB_1800aff0c:
  *(undefined8 *)(puVar17 + -8) = 0x1800aff18;
  return uVar7;
}



/* ===== 1800aff60 FUN_1800aff60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1800aff60(char *param_1)

{
  byte bVar1;
  code *pcVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  byte ****ppppbVar6;
  ulonglong uVar7;
  byte ****ppppbVar8;
  undefined1 *puVar9;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [32];
  char *local_60;
  byte ****local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_60 = param_1;
  FUN_180024b50(&local_58);
  ppppbVar8 = (byte ****)&local_58;
  if (0xf < uStack_40) {
    ppppbVar8 = local_58;
  }
  if (6 < local_48) {
    ppppbVar6 = (byte ****)
                thunk_FUN_1804e6890(ppppbVar8,(byte ****)((longlong)ppppbVar8 + 7),"weapon_",7);
    if ((ppppbVar6 != (byte ****)((longlong)ppppbVar8 + 7)) && (ppppbVar6 == ppppbVar8)) {
      uVar7 = 7;
      if (local_48 < 7) {
        uVar7 = local_48;
      }
      ppppbVar8 = (byte ****)&local_58;
      if (0xf < uStack_40) {
        ppppbVar8 = local_58;
      }
      FUN_180540530(ppppbVar8,(byte *)((longlong)ppppbVar8 + uVar7),(local_48 - uVar7) + 1);
      local_48 = local_48 - uVar7;
    }
  }
  uVar3 = uStack_40;
  uVar7 = local_48;
  ppppbVar8 = local_58;
  puVar9 = auStack_88;
  if (local_48 != 0) {
    ppppbVar6 = (byte ****)&local_58;
    if (0xf < uStack_40) {
      ppppbVar6 = local_58;
    }
    if ((local_48 == 9) && (iVar5 = memcmp(ppppbVar6,"hegrenade",9), iVar5 == 0)) {
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
      param_1[0x10] = '\x04';
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
      *(undefined4 *)param_1 = DAT_1806de65c;
      param_1[4] = '\0';
LAB_1800b017f:
      puVar9 = auStack_88;
      if (uVar3 < 0x10) goto LAB_1800b01ee;
      uVar7 = uVar3 + 1;
      ppppbVar6 = ppppbVar8;
      if (0xfff < uVar7) {
        ppppbVar6 = (byte ****)ppppbVar8[-1];
        ppppbVar8 = (byte ****)((longlong)ppppbVar8 + (-8 - (longlong)ppppbVar6));
        if (&DAT_0000001f < ppppbVar8) {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar9 = auStack_80;
          goto LAB_1800b01bb;
        }
        uVar7 = uVar3 + 0x28;
      }
      thunk_FUN_1803d64e0(ppppbVar6,uVar7);
      puVar9 = auStack_88;
      goto LAB_1800b01ee;
    }
    ppppbVar6 = (byte ****)&local_58;
    if (0xf < uVar3) {
      ppppbVar6 = ppppbVar8;
    }
    if ((uVar7 == 7) && (iVar5 = memcmp(ppppbVar6,"molotov",7), iVar5 == 0)) {
LAB_1800b00b8:
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
      param_1[0x10] = '\x05';
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
      *(undefined4 *)param_1 = s_Molly_1806de66c._0_4_;
      cVar4 = s_Molly_1806de66c[4];
LAB_1800b0178:
      param_1[4] = cVar4;
      param_1[5] = '\0';
      goto LAB_1800b017f;
    }
    ppppbVar6 = (byte ****)&local_58;
    if (0xf < uVar3) {
      ppppbVar6 = ppppbVar8;
    }
    if ((uVar7 == 7) && (iVar5 = memcmp(ppppbVar6,"inferno",7), iVar5 == 0)) goto LAB_1800b00b8;
    ppppbVar6 = (byte ****)&local_58;
    if (0xf < uVar3) {
      ppppbVar6 = ppppbVar8;
    }
    if ((uVar7 == 0xc) && (iVar5 = memcmp(ppppbVar6,"smokegrenade",0xc), iVar5 == 0)) {
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
      param_1[0x10] = '\x05';
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
      *(undefined4 *)param_1 = DAT_1806de664;
      cVar4 = DAT_1806de668;
      goto LAB_1800b0178;
    }
    puVar9 = auStack_88;
    ppppbVar6 = (byte ****)&local_58;
    if (0xf < uVar3) {
      ppppbVar6 = ppppbVar8;
    }
    if (uVar7 == 9) {
      iVar5 = memcmp(ppppbVar6,"flashbang",9);
      puVar9 = auStack_88;
      if (iVar5 == 0) {
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
        param_1[0x10] = '\x05';
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
        *(undefined4 *)param_1 = s_Flash_1806de654._0_4_;
        cVar4 = s_Flash_1806de654[4];
        goto LAB_1800b0178;
      }
    }
LAB_1800b01bb:
    ppppbVar6 = (byte ****)&local_58;
    if (0xf < uVar3) {
      ppppbVar6 = ppppbVar8;
    }
    bVar1 = *(byte *)ppppbVar6;
    *(undefined8 *)(puVar9 + -8) = 0x1800b01cf;
    iVar5 = toupper((uint)bVar1);
    ppppbVar8 = (byte ****)&local_58;
    if (0xf < uStack_40) {
      ppppbVar8 = local_58;
    }
    *(byte *)ppppbVar8 = (byte)iVar5;
  }
  *(byte *****)param_1 = local_58;
  *(undefined8 *)(param_1 + 8) = uStack_50;
  *(ulonglong *)(param_1 + 0x10) = local_48;
  *(ulonglong *)(param_1 + 0x18) = uStack_40;
LAB_1800b01ee:
  *(undefined8 *)(puVar9 + -8) = 0x1800b01fd;
  return param_1;
}



/* ===== 1800b0220 FUN_1800b0220 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800b0220(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [40];
  ulonglong local_120;
  ulonglong uStack_118;
  ulonglong local_110;
  ulonglong uStack_108;
  ulonglong local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  ulonglong local_d0;
  ulonglong uStack_c8;
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
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return;
  }
  if (DAT_180920eac == '\0') {
    return;
  }
  uStack_118 = 0;
  local_110 = 1;
  uStack_108 = 0xf;
  local_120 = (ulonglong)(DAT_1806e90e4 & 0xff);
  puVar3 = (undefined4 *)FUN_1800134a0(&local_120,"ACCENT",6);
  local_c0 = *puVar3;
  uStack_bc = puVar3[1];
  uStack_b8 = puVar3[2];
  uStack_b4 = puVar3[3];
  local_b0 = puVar3[4];
  uStack_ac = puVar3[5];
  uStack_a8 = puVar3[6];
  uStack_a4 = puVar3[7];
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 6) = 0xf;
  *(undefined1 *)puVar3 = 0;
  if (0xf < uStack_108) {
    uVar8 = uStack_108 + 1;
    uVar6 = local_120;
    if (uVar8 < 0x1000) {
LAB_1800b02f8:
      thunk_FUN_1803d64e0(uVar6,uVar8);
      goto LAB_1800b02fd;
    }
    uVar6 = *(ulonglong *)(local_120 - 8);
    if ((local_120 - uVar6) - 8 < 0x20) {
      uVar8 = uStack_108 + 0x28;
      goto LAB_1800b02f8;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1800b0588:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1800b058f:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1800b0596:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1800b059d:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1800b02fd:
  local_110 = 0;
  uStack_108 = 0xf;
  local_120 = local_120 & 0xffffffffffffff00;
  uVar4 = FUN_180073a70(local_40,&local_c0,"neverlose");
  puVar5 = (ulonglong *)FUN_1800134a0(uVar4,&DAT_1806e9090,0x16);
  local_e0 = *puVar5;
  uStack_d8 = puVar5[1];
  local_d0 = puVar5[2];
  uStack_c8 = puVar5[3];
  puVar5[2] = 0;
  puVar5[3] = 0xf;
  *(undefined1 *)puVar5 = 0;
  uVar4 = FUN_1800667a0(local_60,&local_e0,param_1);
  puVar5 = (ulonglong *)FUN_1800134a0(uVar4," bought ",8);
  local_100 = *puVar5;
  uStack_f8 = puVar5[1];
  local_f0 = puVar5[2];
  uStack_e8 = puVar5[3];
  puVar5[2] = 0;
  puVar5[3] = 0xf;
  *(undefined1 *)puVar5 = 0;
  uVar4 = FUN_1800667a0(local_80,&local_100,&local_c0);
  uVar4 = FUN_1800667a0(local_a0,uVar4,param_2);
  puVar5 = (ulonglong *)FUN_1800134a0(uVar4,&DAT_1806e9080,10);
  local_120 = *puVar5;
  uStack_118 = puVar5[1];
  local_110 = puVar5[2];
  uStack_108 = puVar5[3];
  puVar5[2] = 0;
  puVar5[3] = 0xf;
  *(undefined1 *)puVar5 = 0;
  FUN_1800af4c0(&local_120);
  if (0xf < uStack_108) {
    uVar8 = uStack_108 + 1;
    uVar6 = local_120;
    if (0xfff < uVar8) {
      uVar6 = *(ulonglong *)(local_120 - 8);
      if (0x1f < (local_120 - uVar6) - 8) goto LAB_1800b0588;
      uVar8 = uStack_108 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar6,uVar8);
  }
  FUN_18000f890(local_a0);
  FUN_18000f890(local_80);
  if (0xf < uStack_e8) {
    uVar8 = uStack_e8 + 1;
    uVar6 = local_100;
    if (0xfff < uVar8) {
      uVar6 = *(ulonglong *)(local_100 - 8);
      if (0x1f < (local_100 - uVar6) - 8) goto LAB_1800b058f;
      uVar8 = uStack_e8 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar6,uVar8);
  }
  local_f0 = 0;
  uStack_e8 = 0xf;
  local_100 = local_100 & 0xffffffffffffff00;
  FUN_18000f890(local_60);
  if (0xf < uStack_c8) {
    uVar8 = uStack_c8 + 1;
    uVar6 = local_e0;
    if (0xfff < uVar8) {
      uVar6 = *(ulonglong *)(local_e0 - 8);
      if (0x1f < (local_e0 - uVar6) - 8) goto LAB_1800b0596;
      uVar8 = uStack_c8 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar6,uVar8);
  }
  local_d0 = 0;
  uStack_c8 = 0xf;
  local_e0 = local_e0 & 0xffffffffffffff00;
  FUN_18000f890(local_40);
  uVar6 = CONCAT44(uStack_a4,uStack_a8);
  if (0xf < uVar6) {
    uVar8 = uVar6 + 1;
    lVar2 = CONCAT44(uStack_bc,local_c0);
    lVar7 = lVar2;
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar7) - 8U) goto LAB_1800b059d;
      uVar8 = uVar6 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar7,uVar8);
  }
  return;
}



