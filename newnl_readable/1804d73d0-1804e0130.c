/* ===== 1804d73d0 FUN_1804d73d0 ===== */

void FUN_1804d73d0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((**(int **)(param_1 + 0xa0) != 0) && ((*(int **)(param_1 + 0xa0))[1] != 0)) {
    iVar1 = FUN_1804c1e60();
    uVar2 = 0x2007ffd;
    if (iVar1 != 0) {
      uVar2 = 0x1007ffe;
    }
    **(undefined4 **)(param_1 + 0xa0) = uVar2;
  }
  return;
}



/* ===== 1804d7430 FUN_1804d7430 ===== */

void FUN_1804d7430(longlong param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar1 = **(uint **)(param_1 + 0xa0);
  uVar3 = uVar1 & 0x1f000000;
  if (uVar3 == 0x4000000) {
    *(undefined4 *)(param_1 + 0xba) = 0x45130000;
  }
  else {
    if (uVar3 != 0xb000000) {
      return;
    }
    *(undefined4 *)(param_1 + 0xba) = 0x49137fff;
  }
  puVar2 = *(undefined4 **)(param_1 + 0xa0);
  *(short *)(param_1 + 0xb8) = (short)uVar1;
  uVar4 = FUN_1804d6ae0();
  *puVar2 = uVar4;
  return;
}



/* ===== 1804d7490 FUN_1804d7490 ===== */

void FUN_1804d7490(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong local_78;
  double local_70;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_34;
  
  uVar1 = **(uint **)(param_1 + 0xa0);
  if ((uVar1 & 0x1f000000) == 0xb000000) {
    uVar8 = (*(uint **)(param_1 + 0xa0))[1];
    uVar10 = *(ulonglong *)*param_2 & 0x7fffffffffff;
    if ((uVar8 & 0x1f000000) == 0) {
      iVar5 = 1;
      uVar2 = FUN_1804a6370(param_1,1);
    }
    else {
      iVar5 = FUN_1804db440(param_1,(ulonglong *)*param_2 + 1);
      uVar2 = FUN_1804e4020(param_1,uVar8);
      if (0x7fff < uVar2) {
        uVar4 = FUN_1804a6370(param_1,iVar5);
        *(undefined2 *)(param_1 + 0xbc) = 0x893;
        *(ushort *)(param_1 + 0xb8) = uVar2;
        *(undefined2 *)(param_1 + 0xba) = uVar4;
        FUN_1804d6ae0(param_1);
      }
    }
    if ((*(uint *)(param_1 + 0xac) < 3) ||
       (uVar8 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 8), (uVar8 & 0x1f000000) == 0)) {
      iVar6 = FUN_1804929b0(uVar10);
      *(undefined4 *)(param_1 + 0xba) = 0x49137fff;
      *(short *)(param_1 + 0xb8) = (short)uVar1;
      uVar3 = FUN_1804d6ae0(param_1);
    }
    else {
      iVar6 = FUN_1804db440(param_1,*param_2 + 0x10);
      uVar3 = FUN_1804e4020(param_1,uVar8);
    }
    if (0x7fff < uVar3) {
      uVar4 = FUN_1804a6370(param_1,iVar6);
      *(undefined2 *)(param_1 + 0xbc) = 0x893;
      *(ushort *)(param_1 + 0xb8) = uVar3;
      *(undefined2 *)(param_1 + 0xba) = uVar4;
      FUN_1804d6ae0(param_1);
    }
    if (iVar6 < iVar5) {
      *(undefined2 *)(param_1 + 0xbc) = 0x93;
      *(ushort *)(param_1 + 0xb8) = uVar3;
      *(ushort *)(param_1 + 0xba) = uVar2;
      FUN_1804d6ae0(param_1);
      param_2[1] = 0;
    }
    else {
      uVar8 = iVar6 - iVar5;
      if ((0xfa < uVar8) || (0xfa < *(int *)(param_1 + 0xb0) + uVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_1804954f0(param_1,3);
      }
      local_40 = 0;
      local_34 = 0;
      param_2[1] = (ulonglong)(uVar8 + 1);
      local_78 = uVar10 | 0xfffa000000000000;
      local_48 = uVar1;
      local_44 = FUN_1804a6370(param_1,iVar5);
      local_70 = (double)iVar5;
      uVar7 = FUN_1804bf540(param_1,&local_78);
      **(undefined4 **)(param_1 + 0xa0) = uVar7;
      iVar9 = iVar5;
      while (iVar9 != iVar6) {
        iVar9 = iVar9 + 1;
        local_44 = FUN_1804a6370(param_1,iVar9);
        local_70 = (double)iVar9;
        uVar7 = FUN_1804bf540(param_1,&local_78);
        *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (longlong)(iVar9 - iVar5) * 4) = uVar7;
      }
    }
  }
  return;
}



/* ===== 1804d7720 FUN_1804d7720 ===== */

void FUN_1804d7720(longlong param_1,undefined8 *param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined2 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  uVar4 = **(uint **)(param_1 + 0xa0);
  if (uVar4 != 0) {
    pdVar1 = (double *)*param_2;
    if (((uVar4 & 0x1f000000) == 0x4000000) &&
       (uVar9 = (ulonglong)*pdVar1 & 0x7fffffffffff, *(char *)(uVar9 + 0x18) == '#')) {
      if (*(int *)(uVar9 + 0x14) == 1) {
        uVar10 = 0x884;
        uVar3 = FUN_1804a62e0(param_1,uVar9,4);
      }
      else {
        uVar3 = FUN_1804a6370(param_1,0);
        *(undefined2 *)(param_1 + 0xbc) = 0x4009;
        *(ushort *)(param_1 + 0xb8) = (ushort)uVar4;
        *(undefined2 *)(param_1 + 0xba) = uVar3;
        uVar3 = FUN_1804d6ae0(param_1);
        *(undefined4 *)(param_1 + 0xba) = 0x46100001;
        *(undefined2 *)(param_1 + 0xb8) = uVar3;
        uVar4 = FUN_1804d6ae0(param_1);
        uVar10 = 0x893;
        uVar3 = FUN_1804a6370(param_1,0x23);
      }
      *(undefined2 *)(param_1 + 0xbc) = uVar10;
      *(short *)(param_1 + 0xb8) = (short)uVar4;
      *(undefined2 *)(param_1 + 0xba) = uVar3;
      FUN_1804d6ae0(param_1);
      puVar2 = *(undefined4 **)(param_1 + 0xa0);
      uVar5 = FUN_1804a6370(param_1,*(int *)(param_1 + 0xac) + -1);
      *puVar2 = uVar5;
    }
    else {
      uVar6 = (uint)((longlong)*pdVar1 >> 0x2f);
      if (((0xfffffff2 < uVar6) &&
          ((uVar6 != 0xfffffffb ||
           (iVar7 = FUN_1804972a0((ulonglong)*pdVar1 & 0x7fffffffffff,pdVar1), iVar7 == 0)))) ||
         (iVar7 = (int)*pdVar1, iVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_1804954a0(param_1,0xb);
      }
      if ((ushort)uVar4 < 0x8000) {
        uVar12 = (ulonglong)*(uint *)(param_1 + 0xac);
        uVar9 = (ulonglong)iVar7;
        if (iVar7 < 0) {
          uVar8 = uVar9 + uVar12;
        }
        else {
          uVar8 = uVar12;
          if ((longlong)uVar9 <= (longlong)uVar12) {
            uVar8 = uVar9;
          }
        }
        if (0 < (longlong)uVar8) {
          lVar13 = uVar12 - uVar8;
          lVar11 = 0;
          param_2[1] = lVar13;
          if (0 < lVar13) {
            do {
              *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + lVar11 * 4) =
                   *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 4 + lVar11 * 4);
              lVar11 = lVar11 + 1;
            } while (lVar11 < lVar13);
          }
        }
      }
      else {
        FUN_1804d6e20(param_1,param_2);
      }
    }
  }
  return;
}



/* ===== 1804d78f0 FUN_1804d78f0 ===== */

void FUN_1804d78f0(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_res8 [8];
  
  uVar3 = **(uint **)(param_1 + 0xa0);
  if (uVar3 == 0) {
LAB_1804d7963:
    if ((uVar3 & 0x1f000000) != 0x4000000) {
      if ((uVar3 & 0x1f000000) == 0xa000000) {
        FUN_1804df840(param_1,param_2);
        return;
      }
      uVar3 = 0x7fff;
      goto LAB_1804d79fb;
    }
  }
  else {
    if (((*(uint **)(param_1 + 0xa0))[1] & 0x1f000000) != 0) {
      uVar1 = FUN_1804e4020();
      if ((0x7fff < uVar1) || (*(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar1 * 8) != 10)
         ) {
        FUN_1804d6e20(param_1,param_2);
        return;
      }
    }
    if (5 < (uVar3 >> 0x18 & 0x1f) - 0xe) goto LAB_1804d7963;
  }
  if ((uVar3 & 0x1f000000) == 0x4000000) {
    iVar2 = FUN_1804972a0(*(ulonglong *)*param_2 & 0x7fffffffffff,local_res8);
    if (iVar2 == 0) {
      FUN_1804d6e20(param_1,param_2);
      return;
    }
    *(undefined4 *)(param_1 + 0xba) = 0x5e8e0000;
    *(short *)(param_1 + 0xb8) = (short)uVar3;
    uVar3 = FUN_1804d6ae0(param_1);
  }
LAB_1804d79fb:
  **(uint **)(param_1 + 0xa0) = uVar3;
  return;
}



/* ===== 1804d7a20 FUN_1804d7a20 ===== */

void FUN_1804d7a20(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar1 = **(uint **)(param_1 + 0xa0);
  uVar6 = uVar1 & 0x1f000000;
  if ((uVar6 != 0x4000000) && (uVar1 != 0)) {
    iVar3 = FUN_1804dbbb0(param_1,param_2,0x12);
    if (iVar3 == 0) {
      if ((uVar1 >> 0x18 & 0x1f) - 0xe < 6) {
        *(undefined2 *)(param_1 + 0xbc) = 0x5d04;
        *(short *)(param_1 + 0xb8) = (short)uVar1;
        puVar2 = *(undefined4 **)(param_1 + 0xa0);
        *(ushort *)(param_1 + 0xba) = (ushort)(uVar6 == 0xe000000);
        uVar4 = FUN_1804d6ae0(param_1);
        *puVar2 = uVar4;
        return;
      }
      if (uVar6 < 0x2000001) {
        puVar2 = *(undefined4 **)(param_1 + 0xa0);
        uVar5 = FUN_180498280(*(undefined8 *)(param_1 + 0x80),*param_2);
        uVar4 = FUN_1804a62e0(param_1,uVar5,4);
        *puVar2 = uVar4;
        return;
      }
      FUN_1804d6e20(param_1,param_2);
    }
  }
  return;
}



/* ===== 1804d7b10 FUN_1804d7b10 ===== */

void FUN_1804d7b10(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  ulonglong local_58;
  double local_50;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_14;
  
  local_28 = **(uint **)(param_1 + 0xa0);
  if ((local_28 & 0x1f000000) == 0xb000000) {
    puVar1 = (ulonglong *)*param_2;
    if (0xfffffff2 < (uint)((longlong)puVar1[1] >> 0x2f)) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xb);
    }
    local_50 = (double)((int)(double)puVar1[1] + 1);
    local_58 = *puVar1 & 0x7fffffffffff | 0xfffa000000000000;
    local_20 = 0;
    local_14 = 0;
    local_24 = FUN_1804e4020(param_1,(*(uint **)(param_1 + 0xa0))[1]);
    uVar3 = FUN_1804a6370(param_1,1);
    *(undefined2 *)(param_1 + 0xb8) = (undefined2)local_24;
    *(undefined2 *)(param_1 + 0xbc) = 0x2913;
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    local_24 = FUN_1804d6ae0(param_1);
    **(undefined4 **)(param_1 + 0xa0) = local_24;
    lVar2 = *(longlong *)(param_1 + 0xa0);
    uVar4 = FUN_1804bf540(param_1,&local_58);
    *(undefined4 *)(lVar2 + 4) = uVar4;
    param_2[1] = (ulonglong)
                 (-(uint)((*(uint *)(*(longlong *)(param_1 + 0xa0) + 4) & 0x1f000000) != 0) & 2);
  }
  return;
}



/* ===== 1804d7c40 FUN_1804d7c40 ===== */

void FUN_1804d7c40(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = **(uint **)(param_1 + 0xa0);
  iVar3 = FUN_1804dbbb0(param_1,param_2,*(int *)(param_2 + 0x10) + 0x14);
  if ((iVar3 == 0) && ((uVar1 & 0x1f000000) == 0xb000000)) {
    puVar2 = *(undefined4 **)(param_1 + 0xa0);
    uVar4 = FUN_1804a62e0(param_1,*(ulonglong *)(*(longlong *)(param_1 + 0x90) + 0x30) &
                                  0x7fffffffffff,8);
    *puVar2 = uVar4;
    *(uint *)(*(longlong *)(param_1 + 0xa0) + 4) = uVar1;
    if (*(int *)(param_2 + 0x10) == 0) {
      uVar4 = 0x7fff;
    }
    else {
      uVar4 = FUN_1804a6370(param_1,0);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 8) = uVar4;
    *(undefined8 *)(param_2 + 8) = 3;
  }
  return;
}



/* ===== 1804d7d00 FUN_1804d7d00 ===== */

void FUN_1804d7d00(longlong param_1,longlong param_2)

{
  if (*(uint *)(param_1 + 0xac) != 0) {
    FUN_180540530(*(longlong *)(param_1 + 0xa0) + 4,*(longlong *)(param_1 + 0xa0),
                  (ulonglong)*(uint *)(param_1 + 0xac) << 2);
    FUN_1804bf460(param_1,0,*(int *)(param_1 + 0xac) + -1);
    *(undefined8 *)(param_2 + 8) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0xb5) = 1;
  }
  return;
}



/* ===== 1804d7d60 FUN_1804d7d60 ===== */

void FUN_1804d7d60(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (1 < *(uint *)(param_1 + 0xac)) {
    puVar2 = *(undefined4 **)(param_1 + 0xa0);
    uVar1 = *puVar2;
    *puVar2 = puVar2[1];
    *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4) = uVar1;
    puVar3 = (undefined8 *)*param_2;
    uVar4 = puVar3[1];
    uVar5 = *puVar3;
    *puVar3 = uVar4;
    *(undefined8 *)(*param_2 + 8) = uVar5;
    FUN_180540530(*(longlong *)(param_1 + 0xa0) + 8,*(longlong *)(param_1 + 0xa0) + 4,
                  (ulonglong)(*(int *)(param_1 + 0xac) - 1) << 2);
    iVar6 = FUN_180003349(*(undefined8 *)(param_1 + 0x80),0,param_1,FUN_1804dc090);
    *(undefined8 *)*param_2 = uVar5;
    *(undefined8 *)(*param_2 + 8) = uVar4;
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180484920(*(undefined8 *)(param_1 + 0x80),iVar6);
    }
    param_2[1] = -1;
    *(undefined1 *)(param_1 + 0xb5) = 1;
  }
  return;
}



/* ===== 1804d7e40 FUN_1804d7e40 ===== */

void FUN_1804d7e40(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar1 = **(uint **)(param_1 + 0xa0);
  if ((((uVar1 & 0x1f000000) == 0x13000000) && ((ushort)uVar1 < 0x8000)) &&
     (*(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar1 & 0xffff) * 8) == 0)) {
    *(undefined2 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xba) = 0x41060000;
    uVar3 = FUN_1804d6ae0(param_1);
    puVar2 = *(undefined4 **)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xba) = 0x450b0004;
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    uVar4 = FUN_1804d6ae0(param_1);
    *puVar2 = uVar4;
    return;
  }
  FUN_1804d6e20(param_1,param_2);
  return;
}



/* ===== 1804d7ee0 FUN_1804d7ee0 ===== */

void FUN_1804d7ee0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong local_58;
  undefined4 local_50;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = **(uint **)(param_1 + 0xa0);
  if ((uVar1 & 0x1f000000) != 0xb000000) {
    return;
  }
  local_24 = (*(uint **)(param_1 + 0xa0))[1];
  local_28 = uVar1;
  if ((local_24 & 0x1f000000) == 0) {
    local_24 = FUN_1804a6370(param_1,0);
  }
  else {
    if ((local_24 >> 0x14 & 1) != 0) {
      local_24 = local_24 & 0xffefffff;
      goto LAB_1804d7f6f;
    }
    uVar3 = FUN_1804dc020(param_1,local_24,1);
    local_24 = FUN_1804a5e80(param_1,0x24,uVar1,uVar3);
  }
LAB_1804d7f6f:
  local_58 = *(ulonglong *)*param_2;
  local_50 = FUN_1804928b0(local_58 & 0x7fffffffffff);
  if (((*(int *)(param_1 + 0xfc) == 0) ||
      (uVar2 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + -8),
      (uVar2 & 3) != 0)) || (local_14 = 1, 1 < (*(uint *)(uVar2 - 4) >> 0x18) - 1)) {
    local_14 = 0;
  }
  local_18 = 0;
  iVar4 = FUN_1804c1c30(param_1,&local_58);
  param_2[1] = (longlong)iVar4;
  **(uint **)(param_1 + 0xa0) = local_24;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4) = local_20;
  return;
}



/* ===== 1804d8010 FUN_1804d8010 ===== */

void FUN_1804d8010(longlong param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_1804a6b20(param_1,**(undefined4 **)(param_1 + 0xa0));
  uVar3 = FUN_1804a6000(param_1,0xe,((param_1 + 0x117U & 0xfffffffffffffff0) - param_1) + 0x348);
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  *(undefined2 *)(param_1 + 0xbc) = 0x300e;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  uVar4 = FUN_1804d6ae0(param_1);
  *puVar1 = uVar4;
  return;
}



/* ===== 1804d8090 FUN_1804d8090 ===== */

void FUN_1804d8090(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  if (4 < (**(uint **)(param_1 + 0xa0) >> 0x18 & 0x1f) - 0xf) {
    uVar1 = *(undefined2 *)(param_2 + 0x10);
    uVar2 = FUN_1804a6b20();
    *(undefined2 *)(param_1 + 0xbc) = 0x340e;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    uVar3 = FUN_1804d6ae0(param_1);
    **(undefined4 **)(param_1 + 0xa0) = uVar3;
  }
  return;
}



/* ===== 1804d8100 FUN_1804d8100 ===== */

void FUN_1804d8100(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined2 *)(param_2 + 0x10);
  uVar3 = FUN_1804a6b20(param_1,**(undefined4 **)(param_1 + 0xa0));
  *(undefined2 *)(param_1 + 0xba) = uVar1;
  puVar2 = *(undefined4 **)(param_1 + 0xa0);
  *(undefined2 *)(param_1 + 0xbc) = 0x340e;
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  uVar4 = FUN_1804d6ae0(param_1);
  *puVar2 = uVar4;
  return;
}



/* ===== 1804d8160 FUN_1804d8160 ===== */

void FUN_1804d8160(longlong param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_1804a6b20(param_1,**(undefined4 **)(param_1 + 0xa0));
  if (*(int *)(*(longlong *)(param_1 + 0xa0) + 4) == 0) {
    uVar2 = 4;
    uVar3 = 0x340e;
  }
  else {
    uVar2 = FUN_1804a6b20(param_1);
    *(undefined4 *)(param_1 + 0xba) = 0x340e0004;
    *(undefined2 *)(param_1 + 0xb8) = uVar1;
    uVar1 = FUN_1804d6ae0(param_1);
    *(undefined4 *)(param_1 + 0xba) = 0x340e0004;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    uVar2 = FUN_1804d6ae0(param_1);
    uVar3 = FUN_1804a6540(param_1,0x3ff0000000000000);
    *(undefined2 *)(param_1 + 0xbc) = 0x2c0e;
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    *(undefined2 *)(param_1 + 0xba) = uVar2;
    uVar2 = FUN_1804d6ae0(param_1);
    uVar3 = 0x2b0e;
  }
  *(undefined2 *)(param_1 + 0xbc) = uVar3;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  uVar4 = FUN_1804d6ae0(param_1);
  **(undefined4 **)(param_1 + 0xa0) = uVar4;
  return;
}



/* ===== 1804d8260 FUN_1804d8260 ===== */

void FUN_1804d8260(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_1804a6b20(param_1,**(undefined4 **)(param_1 + 0xa0));
  uVar3 = FUN_1804a6b20(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4));
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  uVar2 = FUN_1804a5e80(param_1,0x42,uVar2,uVar3);
  *puVar1 = uVar2;
  return;
}



/* ===== 1804d82c0 FUN_1804d82c0 ===== */

void FUN_1804d82c0(longlong param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_1804a6b20(param_1,**(undefined4 **)(param_1 + 0xa0));
  uVar3 = FUN_1804a6b20(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4));
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  *(undefined2 *)(param_1 + 0xbc) = 0x310e;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  uVar4 = FUN_1804d6ae0(param_1);
  *puVar1 = uVar4;
  return;
}



/* ===== 1804d8330 FUN_1804d8330 ===== */

void FUN_1804d8330(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_1804a6b20(param_1,**(undefined4 **)(param_1 + 0xa0));
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0xbc) = 0x5f0e;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar3 = FUN_1804d6ae0(param_1);
  *puVar1 = uVar3;
  return;
}



/* ===== 1804d8390 FUN_1804d8390 ===== */

void FUN_1804d8390(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1804e3aa0(param_1,**(undefined4 **)(param_1 + 0xa0),
                        (*(undefined4 **)(param_1 + 0xa0))[1],*param_2,*param_2 + 8,0x2e);
  **(undefined4 **)(param_1 + 0xa0) = uVar1;
  return;
}



/* ===== 1804d83d0 FUN_1804d83d0 ===== */

void FUN_1804d83d0(longlong param_1,longlong param_2)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint *puVar6;
  undefined2 uVar7;
  ulonglong uVar8;
  
  uVar3 = FUN_1804a6b90(param_1,**(undefined4 **)(param_1 + 0xa0));
  puVar6 = *(uint **)(param_1 + 0xa0);
  if (puVar6[1] != 0) {
    uVar8 = 1;
    sVar1 = *(short *)(param_2 + 0x10);
    do {
      uVar2 = (undefined2)uVar3;
      uVar4 = FUN_1804a6b90(param_1,puVar6[uVar8]);
      uVar7 = (undefined2)uVar4;
      if ((uVar3 >> 0x18 & 0x1f) - 0xf < 5) {
        if (4 < (uVar4 >> 0x18 & 0x1f) - 0xf) {
          *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
          *(undefined2 *)(param_1 + 0xb8) = uVar2;
          uVar2 = FUN_1804d6ae0(param_1);
          goto LAB_1804d8481;
        }
        uVar5 = 0x13;
      }
      else {
LAB_1804d8481:
        if ((uVar4 >> 0x18 & 0x1f) - 0xf < 5) {
          *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
          *(undefined2 *)(param_1 + 0xb8) = uVar7;
          uVar4 = FUN_1804d6ae0(param_1);
        }
        uVar7 = (undefined2)uVar4;
        uVar5 = 0xe;
      }
      *(undefined2 *)(param_1 + 0xb8) = uVar2;
      *(undefined2 *)(param_1 + 0xba) = uVar7;
      *(ushort *)(param_1 + 0xbc) = sVar1 << 8 | uVar5;
      uVar3 = FUN_1804d6ae0(param_1);
      puVar6 = *(uint **)(param_1 + 0xa0);
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (puVar6[uVar8] != 0);
  }
  *puVar6 = uVar3;
  return;
}



/* ===== 1804d8520 FUN_1804d8520 ===== */

void FUN_1804d8520(longlong param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x90) + 0x30) & 0x7fffffffffff;
  FUN_1804a62e0(param_1,uVar6,0xc);
  uVar4 = FUN_1804a66d0(param_1,0x19,uVar6 + 0x30);
  uVar1 = FUN_1804a5e80(param_1,0x2b,uVar4);
  uVar2 = FUN_1804a6540(param_1,0x3ff0000000000000);
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  *(undefined2 *)(param_1 + 0xbc) = 0x2a0e;
  iVar5 = FUN_1804d6ae0(param_1);
  if (**(int **)(param_1 + 0xa0) == 0) {
    **(int **)(param_1 + 0xa0) = iVar5;
    return;
  }
  uVar1 = FUN_1804a6b20(param_1);
  if (*(int *)(*(longlong *)(param_1 + 0xa0) + 4) == 0) {
    *(undefined2 *)(param_1 + 0xbc) = 0x2b0e;
    *(short *)(param_1 + 0xb8) = (short)iVar5;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    uVar1 = FUN_1804d6ae0(param_1);
    *(undefined4 *)(param_1 + 0xba) = 0x340e0000;
    *(undefined2 *)(param_1 + 0xb8) = uVar1;
    uVar3 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x290e;
    *(undefined2 *)(param_1 + 0xba) = uVar2;
  }
  else {
    uVar3 = FUN_1804a6b20();
    *(undefined2 *)(param_1 + 0xbc) = 0x2a0e;
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    uVar3 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    *(undefined2 *)(param_1 + 0xbc) = 0x290e;
    *(undefined2 *)(param_1 + 0xba) = uVar2;
    uVar2 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x2b0e;
    *(short *)(param_1 + 0xb8) = (short)iVar5;
    *(undefined2 *)(param_1 + 0xba) = uVar2;
    uVar2 = FUN_1804d6ae0(param_1);
    *(undefined4 *)(param_1 + 0xba) = 0x340e0000;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    uVar3 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x290e;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
  }
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  uVar4 = FUN_1804d6ae0(param_1);
  **(undefined4 **)(param_1 + 0xa0) = uVar4;
  return;
}



/* ===== 1804d86f0 FUN_1804d86f0 ===== */

void FUN_1804d86f0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((**(uint **)(param_1 + 0xa0) & 0x1f000000) == 0xa000000) {
    FUN_1804dfeb0(param_1,param_2);
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  uVar2 = FUN_1804e3f60();
  *puVar1 = uVar2;
  return;
}



/* ===== 1804d8740 FUN_1804d8740 ===== */

void FUN_1804d8740(longlong param_1,longlong param_2)

{
  short sVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = FUN_1804e0130();
  if (iVar4 == 0) {
    uVar3 = FUN_1804e3f60(param_1,**(undefined4 **)(param_1 + 0xa0));
    sVar1 = *(short *)(param_2 + 0x10);
    puVar2 = *(undefined4 **)(param_1 + 0xa0);
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    *(ushort *)(param_1 + 0xbc) = sVar1 << 8 | 0x13;
    *(undefined2 *)(param_1 + 0xba) = 0;
    uVar5 = FUN_1804d6ae0(param_1);
    *puVar2 = uVar5;
  }
  return;
}



/* ===== 1804d87b0 FUN_1804d87b0 ===== */

void FUN_1804d87b0(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  iVar2 = FUN_1804dfae0();
  if (iVar2 == 0) {
    uVar3 = FUN_1804e3f60(param_1,**(undefined4 **)(param_1 + 0xa0));
    puVar4 = *(undefined4 **)(param_1 + 0xa0);
    if (puVar4[1] != 0) {
      iVar2 = *(int *)(param_2 + 0x10);
      uVar5 = 1;
      do {
        uVar1 = FUN_1804e3f60(param_1,puVar4[uVar5]);
        *(ushort *)(param_1 + 0xbc) = (ushort)(iVar2 << 8) | 0x13;
        *(short *)(param_1 + 0xb8) = (short)uVar3;
        *(undefined2 *)(param_1 + 0xba) = uVar1;
        uVar3 = FUN_1804d6ae0(param_1);
        puVar4 = *(undefined4 **)(param_1 + 0xa0);
        uVar5 = (ulonglong)((int)uVar5 + 1);
      } while (puVar4[uVar5] != 0);
    }
    *puVar4 = uVar3;
  }
  return;
}



/* ===== 1804d8860 FUN_1804d8860 ===== */

void FUN_1804d8860(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = FUN_1804dfd80(param_1,*(longlong *)(param_1 + 0xa0),*(longlong *)(param_1 + 0xa0) + 4,
                        *param_2,*param_2 + 8,(int)param_2[2]);
  if (iVar5 == 0) {
    uVar3 = FUN_1804e3f60(param_1,**(undefined4 **)(param_1 + 0xa0));
    uVar4 = FUN_1804e3f60(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4));
    lVar2 = param_2[2];
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    puVar1 = *(undefined4 **)(param_1 + 0xa0);
    *(ushort *)(param_1 + 0xbc) = (short)lVar2 << 8 | 0x13;
    *(undefined2 *)(param_1 + 0xba) = uVar4;
    uVar6 = FUN_1804d6ae0(param_1);
    *puVar1 = uVar6;
  }
  return;
}



/* ===== 1804d8910 FUN_1804d8910 ===== */

void FUN_1804d8910(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_1804a66d0(param_1,0x19,param_1 + -0x220);
  *(undefined4 *)(param_1 + 0xba) = 0x55090000;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar3 = FUN_1804d6ae0(param_1);
  uVar2 = FUN_1804dff30(param_1,param_2,uVar3);
  *(short *)(param_1 + 0xba) = (short)uVar3;
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  *(undefined2 *)(param_1 + 0xbc) = 0x5784;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar3 = FUN_1804d6ae0(param_1);
  *puVar1 = uVar3;
  return;
}



/* ===== 1804d89a0 FUN_1804d89a0 ===== */

void FUN_1804d89a0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res18;
  
  local_res18 = FUN_1804a6be0(param_1,**(undefined4 **)(param_1 + 0xa0));
  *(undefined4 *)(param_1 + 0xba) = 0x45130000;
  *(short *)(param_1 + 0xb8) = (short)local_res18;
  iVar5 = FUN_1804d6ae0(param_1);
  local_res10 = FUN_1804a6370(param_1,0);
  puVar1 = (ulonglong *)*param_2;
  uVar13 = (uint)((longlong)*puVar1 >> 0x2f);
  if (uVar13 == 0xfffffffb) {
    uVar11 = *puVar1 & 0x7fffffffffff;
  }
  else {
    if (0xfffffff2 < uVar13) goto LAB_1804d8f15;
    uVar11 = thunk_FUN_1804b8f90(*(undefined8 *)(param_1 + 0x80),puVar1);
    *puVar1 = uVar11 | 0xfffd800000000000;
  }
  uVar2 = (undefined2)iVar5;
  if ((int)param_2[2] == 0) {
    if ((*(uint *)(*(longlong *)(param_1 + 0xa0) + 4) & 0x1f000000) == 0) {
      local_res8[0] = 1;
      uVar13 = 1;
      iVar6 = FUN_1804a6370(param_1,1);
    }
    else {
      uVar13 = FUN_1804db440(param_1,*param_2 + 8);
      local_res8[0] = uVar13;
      iVar6 = FUN_1804e4020(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4));
    }
    iVar7 = iVar6;
    if ((*(int *)(*(longlong *)(param_1 + 0xa0) + 4) != 0) &&
       ((*(uint *)(*(longlong *)(param_1 + 0xa0) + 8) & 0x1f000000) != 0)) goto LAB_1804d8b34;
    uVar12 = uVar13;
LAB_1804d8b51:
    if ((int)uVar12 < 0) goto LAB_1804d8b55;
    if (*(uint *)(uVar11 + 0x14) < uVar12) {
      *(undefined2 *)(param_1 + 0xbc) = 0x393;
      *(short *)(param_1 + 0xb8) = (short)iVar6;
      *(undefined2 *)(param_1 + 0xba) = uVar2;
      FUN_1804d6ae0(param_1);
      uVar12 = *(uint *)(uVar11 + 0x14);
      iVar6 = iVar5;
LAB_1804d8d1e:
      uVar2 = (undefined2)iVar6;
      uVar8 = local_res10;
      goto LAB_1804d8d23;
    }
    if ((iVar7 != iVar6) || (uVar13 == 0)) {
      *(undefined2 *)(param_1 + 0xbc) = 0x693;
      *(short *)(param_1 + 0xb8) = (short)iVar6;
      *(undefined2 *)(param_1 + 0xba) = uVar2;
      FUN_1804d6ae0(param_1);
      goto LAB_1804d8d1e;
    }
    uVar3 = FUN_1804a6370(param_1,0xffffffff);
    *(undefined2 *)(param_1 + 0xbc) = 0x2913;
    *(short *)(param_1 + 0xb8) = (short)iVar7;
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    uVar3 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x493;
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    *(undefined2 *)(param_1 + 0xba) = uVar2;
    FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x4009;
    *(short *)(param_1 + 0xb8) = (short)local_res18;
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    uVar2 = FUN_1804d6ae0(param_1);
    if ((int)param_2[2] != 0) {
      uVar3 = FUN_1804a6370(param_1,1);
      *(undefined2 *)(param_1 + 0xba) = uVar3;
      *(undefined2 *)(param_1 + 0xb8) = uVar2;
      goto LAB_1804d8c8a;
    }
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    puVar10 = *(undefined4 **)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xba) = 0x46100001;
  }
  else {
    lVar14 = *param_2;
    uVar13 = (uint)((longlong)*(ulonglong *)(lVar14 + 8) >> 0x2f);
    if ((0xfffffff2 < uVar13) &&
       ((uVar13 != 0xfffffffb ||
        (iVar6 = FUN_1804972a0(*(ulonglong *)(lVar14 + 8) & 0x7fffffffffff,lVar14 + 8), iVar6 == 0))
       )) {
LAB_1804d8f15:
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xb);
    }
    uVar13 = (uint)*(double *)(lVar14 + 8);
    local_res8[0] = uVar13;
    iVar7 = FUN_1804e4020(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4));
    if ((*(uint *)(*(longlong *)(param_1 + 0xa0) + 8) & 0x1f000000) != 0) {
LAB_1804d8b34:
      iVar6 = FUN_1804e4020(param_1);
      uVar12 = FUN_1804db440(param_1,*param_2 + 0x10);
      goto LAB_1804d8b51;
    }
    uVar12 = 0xffffffff;
    iVar6 = FUN_1804a6370(param_1,0xffffffff);
LAB_1804d8b55:
    uVar8 = local_res10;
    *(short *)(param_1 + 0xba) = (short)local_res10;
    *(undefined2 *)(param_1 + 0xbc) = 0x93;
    *(short *)(param_1 + 0xb8) = (short)iVar6;
    FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x2913;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    *(short *)(param_1 + 0xba) = (short)iVar6;
    uVar2 = FUN_1804a6370(param_1,1);
    uVar3 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x2913;
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    *(undefined2 *)(param_1 + 0xba) = uVar2;
    uVar2 = FUN_1804d6ae0(param_1);
    uVar12 = uVar12 + 1 + *(int *)(uVar11 + 0x14);
LAB_1804d8d23:
    uVar3 = FUN_1804dbea0(param_1,uVar11,local_res8,iVar7,iVar5,uVar8);
    lVar14 = param_2[2];
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    if ((int)lVar14 == 0) {
      if ((int)uVar12 <= (int)local_res8[0]) {
        *(undefined2 *)(param_1 + 0xbc) = 0x293;
        FUN_1804d6ae0(param_1);
        param_2[1] = 0;
        return;
      }
      iVar5 = uVar12 - local_res8[0];
      *(undefined2 *)(param_1 + 0xbc) = 0x3693;
      lVar14 = (longlong)iVar5;
      uVar2 = FUN_1804d6ae0(param_1);
      uVar4 = FUN_1804a6370(param_1,iVar5);
      *(undefined2 *)(param_1 + 0xbc) = 0x893;
      *(undefined2 *)(param_1 + 0xb8) = uVar2;
      *(undefined2 *)(param_1 + 0xba) = uVar4;
      FUN_1804d6ae0(param_1);
      uVar8 = local_res18;
      if (0xfa < (longlong)((ulonglong)*(uint *)(param_1 + 0xb0) + lVar14)) {
                    /* WARNING: Subroutine does not return */
        FUN_1804954f0(param_1,3);
      }
      uVar11 = 0;
      param_2[1] = lVar14;
      if (iVar5 < 1) {
        return;
      }
      do {
        uVar2 = FUN_1804a6370(param_1,uVar11 & 0xffffffff);
        *(undefined2 *)(param_1 + 0xbc) = 0x2913;
        *(undefined2 *)(param_1 + 0xb8) = uVar3;
        *(undefined2 *)(param_1 + 0xba) = uVar2;
        uVar2 = FUN_1804d6ae0(param_1);
        *(undefined2 *)(param_1 + 0xbc) = 0x4009;
        *(short *)(param_1 + 0xb8) = (short)uVar8;
        *(undefined2 *)(param_1 + 0xba) = uVar2;
        uVar2 = FUN_1804d6ae0(param_1);
        *(undefined4 *)(param_1 + 0xba) = 0x46100001;
        *(undefined2 *)(param_1 + 0xb8) = uVar2;
        uVar9 = FUN_1804d6ae0(param_1);
        *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + uVar11 * 4) = uVar9;
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < lVar14);
      return;
    }
    if ((int)uVar12 < (int)local_res8[0]) {
      *(undefined2 *)(param_1 + 0xbc) = 0x93;
      FUN_1804d6ae0(param_1);
      puVar10 = *(undefined4 **)(param_1 + 0xa0);
      uVar8 = FUN_1804a62e0(param_1,param_1 + -0x270,4);
      goto LAB_1804d8ca2;
    }
    *(undefined2 *)(param_1 + 0xbc) = 0x3693;
    uVar2 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x193;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    *(short *)(param_1 + 0xba) = (short)uVar8;
    FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x4009;
    *(short *)(param_1 + 0xb8) = (short)local_res18;
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    uVar3 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    *(undefined2 *)(param_1 + 0xba) = uVar2;
LAB_1804d8c8a:
    puVar10 = *(undefined4 **)(param_1 + 0xa0);
    *(undefined2 *)(param_1 + 0xbc) = 0x4f04;
  }
  uVar8 = FUN_1804d6ae0(param_1);
LAB_1804d8ca2:
  *puVar10 = uVar8;
  return;
}



/* ===== 1804d8f40 FUN_1804d8f40 ===== */

void FUN_1804d8f40(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar3 = FUN_1804a6370(param_1,0xff);
  piVar5 = *(int **)(param_1 + 0xa0);
  if (*piVar5 != 0) {
    uVar7 = 0;
    do {
      uVar4 = FUN_1804e4020(param_1,piVar5[uVar7]);
      *(undefined2 *)(param_1 + 0xbc) = 0x693;
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      *(undefined2 *)(param_1 + 0xba) = uVar3;
      FUN_1804d6ae0(param_1);
      *(undefined4 *)(param_1 + 0xba) = 0x5d040002;
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      uVar2 = FUN_1804d6ae0(param_1);
      *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 4) = uVar2;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      piVar5 = *(int **)(param_1 + 0xa0);
    } while (piVar5[uVar7] != 0);
    if (1 < uVar6) {
      uVar3 = FUN_1804a66d0(param_1,0x19,param_1 + -0x220);
      *(undefined4 *)(param_1 + 0xba) = 0x55090000;
      *(undefined2 *)(param_1 + 0xb8) = uVar3;
      uVar4 = FUN_1804d6ae0(param_1);
      piVar5 = *(int **)(param_1 + 0xa0);
      uVar3 = uVar4;
      if (*piVar5 != 0) {
        uVar7 = 0;
        do {
          *(short *)(param_1 + 0xba) = (short)piVar5[uVar7];
          *(undefined2 *)(param_1 + 0xbc) = 0x5689;
          *(undefined2 *)(param_1 + 0xb8) = uVar3;
          uVar3 = FUN_1804d6ae0(param_1);
          piVar5 = *(int **)(param_1 + 0xa0);
          uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (piVar5[uVar7] != 0);
      }
      puVar1 = *(undefined4 **)(param_1 + 0xa0);
      *(undefined2 *)(param_1 + 0xbc) = 0x5784;
      *(undefined2 *)(param_1 + 0xb8) = uVar3;
      *(undefined2 *)(param_1 + 0xba) = uVar4;
      uVar2 = FUN_1804d6ae0(param_1);
      *puVar1 = uVar2;
      return;
    }
    if (uVar6 != 0) {
      return;
    }
  }
  uVar2 = FUN_1804a62e0(param_1,param_1 + -0x270,4);
  **(undefined4 **)(param_1 + 0xa0) = uVar2;
  return;
}



/* ===== 1804d90e0 FUN_1804d90e0 ===== */

void FUN_1804d90e0(longlong param_1,longlong *param_2)

{
  double dVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  uint uVar11;
  
  iVar6 = FUN_1804a6be0(param_1,**(undefined4 **)(param_1 + 0xa0));
  uVar7 = FUN_1804e4020(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4));
  if ((*(uint *)(*(longlong *)(param_1 + 0xa0) + 8) & 0x1f000000) != 0) {
    uVar4 = FUN_1804a6be0(param_1);
    lVar2 = *param_2;
    uVar11 = (uint)((longlong)*(ulonglong *)(lVar2 + 8) >> 0x2f);
    if ((0xfffffff2 < uVar11) &&
       ((uVar11 != 0xfffffffb ||
        (iVar8 = FUN_1804972a0(*(ulonglong *)(lVar2 + 8) & 0x7fffffffffff,lVar2 + 8), iVar8 == 0))))
    {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xb);
    }
    dVar1 = *(double *)(lVar2 + 8);
    uVar5 = FUN_1804a6370(param_1,1);
    uVar10 = 0x293;
    *(short *)(param_1 + 0xb8) = (short)uVar7;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    if (1 < (int)dVar1) {
      uVar10 = 0x393;
    }
    *(undefined2 *)(param_1 + 0xbc) = uVar10;
    FUN_1804d6ae0(param_1);
    if (1 < (int)dVar1) {
      uVar5 = FUN_1804a66d0(param_1,0x19,param_1 + -0x220);
      *(undefined4 *)(param_1 + 0xba) = 0x55090000;
      *(undefined2 *)(param_1 + 0xb8) = uVar5;
      uVar5 = FUN_1804d6ae0(param_1);
      *(undefined2 *)(param_1 + 0xbc) = 0x5689;
      *(undefined2 *)(param_1 + 0xb8) = uVar5;
      *(undefined2 *)(param_1 + 0xba) = uVar4;
      uVar4 = FUN_1804d6ae0(param_1);
      *(undefined2 *)(param_1 + 0xbc) = 0x5689;
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      *(short *)(param_1 + 0xba) = (short)iVar6;
      uVar4 = FUN_1804d6ae0(param_1);
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      *(undefined2 *)(param_1 + 0xbc) = 0x5784;
      *(undefined2 *)(param_1 + 0xba) = uVar5;
      iVar8 = FUN_1804d6ae0(param_1);
      goto LAB_1804d926c;
    }
  }
  iVar8 = 0;
LAB_1804d926c:
  uVar4 = FUN_1804a66d0(param_1,0x19,param_1 + -0x220);
  *(undefined4 *)(param_1 + 0xba) = 0x55090000;
  *(undefined2 *)(param_1 + 0xb8) = uVar4;
  uVar9 = FUN_1804d6ae0(param_1);
  uVar4 = (undefined2)uVar9;
  if (iVar8 != 0) {
    *(undefined2 *)(param_1 + 0xbc) = 0x5689;
    *(undefined2 *)(param_1 + 0xb8) = uVar4;
    *(short *)(param_1 + 0xba) = (short)iVar6;
    uVar9 = FUN_1804d6ae0(param_1);
    uVar5 = FUN_1804a6370(param_1,0xffffffff);
    *(undefined2 *)(param_1 + 0xbc) = 0x2913;
    *(short *)(param_1 + 0xb8) = (short)uVar7;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    uVar7 = FUN_1804d6ae0(param_1);
    iVar6 = iVar8;
  }
  uVar5 = FUN_1804a5e80(param_1,0x16,uVar9,iVar6,uVar7);
  puVar3 = *(undefined4 **)(param_1 + 0xa0);
  *(undefined2 *)(param_1 + 0xbc) = 0x5784;
  *(undefined2 *)(param_1 + 0xb8) = uVar5;
  *(undefined2 *)(param_1 + 0xba) = uVar4;
  uVar7 = FUN_1804d6ae0(param_1);
  *puVar3 = uVar7;
  return;
}



/* ===== 1804d9360 FUN_1804d9360 ===== */

void FUN_1804d9360(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = FUN_1804a6be0(param_1,**(undefined4 **)(param_1 + 0xa0));
  uVar2 = FUN_1804a66d0(param_1,0x19,param_1 + -0x220);
  *(undefined4 *)(param_1 + 0xba) = 0x55090000;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar4 = FUN_1804d6ae0(param_1);
  uVar2 = FUN_1804a5e80(param_1,*(undefined4 *)(param_2 + 0x10),uVar4,uVar3);
  *(short *)(param_1 + 0xba) = (short)uVar4;
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  *(undefined2 *)(param_1 + 0xbc) = 0x5784;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar3 = FUN_1804d6ae0(param_1);
  *puVar1 = uVar3;
  return;
}



/* ===== 1804d93f0 FUN_1804d93f0 ===== */

void FUN_1804d93f0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint local_res10 [2];
  undefined4 local_res18;
  undefined4 local_res20;
  
  uVar7 = FUN_1804a6be0(param_1,**(undefined4 **)(param_1 + 0xa0));
  local_res18 = uVar7;
  uVar4 = FUN_1804a6be0(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4));
  *(undefined4 *)(param_1 + 0xba) = 0x45130000;
  *(short *)(param_1 + 0xb8) = (short)uVar7;
  uVar7 = FUN_1804d6ae0(param_1);
  uVar8 = FUN_1804a6370(param_1,0);
  puVar1 = (ulonglong *)*param_2;
  uVar9 = (uint)((longlong)*puVar1 >> 0x2f);
  local_res20 = uVar8;
  if (uVar9 == 0xfffffffb) {
    uVar15 = *puVar1 & 0x7fffffffffff;
  }
  else {
    if (0xfffffff2 < uVar9) goto LAB_1804d985c;
    uVar15 = thunk_FUN_1804b8f90(*(undefined8 *)(param_1 + 0x80),puVar1);
    *puVar1 = uVar15 | 0xfffd800000000000;
  }
  lVar12 = *param_2;
  uVar9 = (uint)((longlong)*(ulonglong *)(lVar12 + 8) >> 0x2f);
  if (uVar9 == 0xfffffffb) {
    uVar13 = *(ulonglong *)(lVar12 + 8) & 0x7fffffffffff;
  }
  else {
    if (0xfffffff2 < uVar9) goto LAB_1804d985c;
    uVar13 = thunk_FUN_1804b8f90(*(undefined8 *)(param_1 + 0x80),lVar12 + 8);
    *(ulonglong *)(lVar12 + 8) = uVar13 | 0xfffd800000000000;
  }
  *(undefined1 *)(param_1 + 0xb5) = 1;
  if ((*(uint *)(*(longlong *)(param_1 + 0xa0) + 8) & 0x1f000000) == 0) {
    uVar10 = FUN_1804a6370(param_1,1);
    local_res10[0] = 1;
  }
  else {
    uVar10 = FUN_1804e4020(param_1);
    lVar12 = *param_2;
    uVar9 = (uint)((longlong)*(ulonglong *)(lVar12 + 0x10) >> 0x2f);
    if ((0xfffffff2 < uVar9) &&
       ((uVar9 != 0xfffffffb ||
        (iVar11 = FUN_1804972a0(*(ulonglong *)(lVar12 + 0x10) & 0x7fffffffffff,lVar12 + 0x10),
        iVar11 == 0)))) {
LAB_1804d985c:
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xb);
    }
    local_res10[0] = (uint)*(double *)(lVar12 + 0x10);
  }
  uVar5 = FUN_1804dbea0(param_1,uVar15,local_res10,uVar10,uVar7,uVar8);
  uVar3 = local_res10[0];
  uVar9 = *(uint *)(uVar15 + 0x14);
  *(undefined2 *)(param_1 + 0xb8) = uVar5;
  *(short *)(param_1 + 0xba) = (short)uVar7;
  uVar14 = (ulonglong)local_res10[0];
  if (uVar9 < local_res10[0]) {
    *(undefined2 *)(param_1 + 0xbc) = 0x793;
  }
  else {
    *(undefined2 *)(param_1 + 0xbc) = 0x693;
    FUN_1804d6ae0(param_1);
    if ((*(int *)(*(longlong *)(param_1 + 0xa0) + 8) == 0) ||
       ((*(uint *)(*(longlong *)(param_1 + 0xa0) + 0xc) & 0x1f000000) < 0x1000001)) {
      uVar6 = FUN_1804a62e0(param_1,uVar13,4);
      *(undefined2 *)(param_1 + 0xbc) = 0x884;
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      *(undefined2 *)(param_1 + 0xba) = uVar6;
      FUN_1804d6ae0(param_1);
      iVar11 = FUN_180491c70(uVar13);
      if (iVar11 != 0) {
        FUN_1804d6e20(param_1,param_2);
        return;
      }
    }
    *(undefined2 *)(param_1 + 0xbc) = 0x4009;
    *(short *)(param_1 + 0xb8) = (short)local_res18;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    local_res10[0] = FUN_1804d6ae0(param_1);
    *(short *)(param_1 + 0xba) = (short)local_res20;
    *(undefined2 *)(param_1 + 0xbc) = 0x4009;
    *(undefined2 *)(param_1 + 0xb8) = uVar4;
    uVar8 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x2a13;
    *(short *)(param_1 + 0xb8) = (short)uVar7;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    uVar7 = FUN_1804d6ae0(param_1);
    *(undefined4 *)(param_1 + 0xba) = 0x45130000;
    *(undefined2 *)(param_1 + 0xb8) = uVar4;
    local_res18 = FUN_1804d6ae0(param_1);
    uVar9 = local_res10[0];
    uVar4 = FUN_1804a5e80(param_1,1,local_res10[0],uVar8,uVar7,local_res18);
    uVar6 = FUN_1804a66d0(param_1,0x1a,0);
    lVar12 = FUN_180491b90(uVar14 + 0x18 + uVar15,uVar13 + 0x18,*(int *)(uVar15 + 0x14) - uVar3,
                           *(undefined4 *)(uVar13 + 0x14));
    *(undefined2 *)(param_1 + 0xb8) = uVar4;
    *(undefined2 *)(param_1 + 0xba) = uVar6;
    if (lVar12 != 0) {
      *(undefined2 *)(param_1 + 0xbc) = 0x989;
      FUN_1804d6ae0(param_1);
      *(undefined2 *)(param_1 + 0xbc) = 0x2a13;
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      *(short *)(param_1 + 0xba) = (short)uVar9;
      uVar4 = FUN_1804d6ae0(param_1);
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      *(undefined2 *)(param_1 + 0xbc) = 0x2913;
      *(undefined2 *)(param_1 + 0xba) = uVar5;
      uVar4 = FUN_1804d6ae0(param_1);
      uVar5 = FUN_1804a6370(param_1,1);
      puVar2 = *(undefined4 **)(param_1 + 0xa0);
      *(undefined2 *)(param_1 + 0xbc) = 0x2913;
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      *(undefined2 *)(param_1 + 0xba) = uVar5;
      uVar7 = FUN_1804d6ae0(param_1);
      *puVar2 = uVar7;
      lVar12 = *(longlong *)(param_1 + 0xa0);
      *(short *)(param_1 + 0xba) = (short)local_res18;
      *(undefined2 *)(param_1 + 0xbc) = 0x2913;
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      uVar7 = FUN_1804d6ae0(param_1);
      *(undefined4 *)(lVar12 + 4) = uVar7;
      param_2[1] = 2;
      return;
    }
    *(undefined2 *)(param_1 + 0xbc) = 0x889;
  }
  FUN_1804d6ae0(param_1);
  **(undefined4 **)(param_1 + 0xa0) = 0x7fff;
  return;
}



/* ===== 1804d9870 FUN_1804d9870 ===== */

void FUN_1804d9870(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1804a66d0(param_1,0x19,param_1 + -0x220);
  *(undefined4 *)(param_1 + 0xba) = 0x55090000;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar2 = FUN_1804d6ae0(param_1);
  FUN_1804db690(param_1,param_2,uVar2,0);
  return;
}



/* ===== 1804d98d0 FUN_1804d98d0 ===== */

void FUN_1804d98d0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar2 = FUN_1804dbcb0(param_1,param_2,0);
  uVar1 = *(uint *)((*(ulonglong *)*param_2 & 0x7fffffffffff) + 0x48);
  *(undefined4 *)(param_1 + 0xba) = 0x45090011;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar3 = FUN_1804d6ae0(param_1);
  uVar4 = FUN_1804a6410(param_1,2);
  *(undefined2 *)(param_1 + 0xbc) = 0x2115;
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  *(undefined2 *)(param_1 + 0xba) = uVar4;
  uVar4 = FUN_1804d6ae0(param_1);
  uVar5 = FUN_1804a6410(param_1,0);
  *(undefined2 *)(param_1 + 0xb8) = uVar4;
  *(undefined2 *)(param_1 + 0xba) = uVar5;
  uVar4 = 0x895;
  if ((uVar1 >> 1 & 1) != 0) {
    uVar4 = 0x995;
  }
  *(undefined2 *)(param_1 + 0xbc) = uVar4;
  FUN_1804d6ae0(param_1);
  if ((uVar1 >> 1 & 1) == 0) {
    *(undefined4 *)(param_1 + 0xba) = 0x45090010;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    uVar5 = FUN_1804d6ae0(param_1);
    uVar3 = 0xe;
    uVar4 = uVar5;
  }
  else {
    uVar4 = FUN_1804a6410(param_1,0);
    uVar6 = FUN_1804a6410(param_1,2);
    *(undefined2 *)(param_1 + 0xbc) = 0x2315;
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    *(undefined2 *)(param_1 + 0xba) = uVar6;
    uVar3 = FUN_1804d6ae0(param_1);
    *(undefined4 *)(param_1 + 0xba) = 0x3e09000e;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    uVar6 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x4d09;
    *(undefined2 *)(param_1 + 0xb8) = uVar6;
    *(undefined2 *)(param_1 + 0xba) = uVar4;
    FUN_1804d6ae0(param_1);
    *(undefined4 *)(param_1 + 0xba) = 0x3e09000f;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    uVar6 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x4d09;
    *(undefined2 *)(param_1 + 0xb8) = uVar6;
    *(undefined2 *)(param_1 + 0xba) = uVar4;
    FUN_1804d6ae0(param_1);
    *(undefined4 *)(param_1 + 0xba) = 0x3e090010;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    uVar6 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x4d09;
    *(undefined2 *)(param_1 + 0xb8) = uVar6;
    *(undefined2 *)(param_1 + 0xba) = uVar4;
    FUN_1804d6ae0(param_1);
    *(undefined4 *)(param_1 + 0xba) = 0x3e090011;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    uVar6 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x4d09;
    *(undefined2 *)(param_1 + 0xb8) = uVar6;
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    FUN_1804d6ae0(param_1);
    uVar3 = 0x12;
  }
  *(undefined2 *)(param_1 + 0xbc) = 0x3e09;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  uVar3 = FUN_1804d6ae0(param_1);
  *(undefined2 *)(param_1 + 0xbc) = 0x4d09;
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  *(undefined2 *)(param_1 + 0xba) = uVar5;
  FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x3e090013;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar2 = FUN_1804d6ae0(param_1);
  *(undefined2 *)(param_1 + 0xbc) = 0x4d09;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  *(undefined2 *)(param_1 + 0xba) = uVar4;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804d9b70 FUN_1804d9b70 ===== */

void FUN_1804d9b70(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar1 = FUN_1804dbcb0(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0xba) = 0x45090013;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar2 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x4509000e;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar3 = FUN_1804d6ae0(param_1);
  *(undefined2 *)(param_1 + 0xbc) = 0x2a15;
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  uVar3 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x5b131275;
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  uVar3 = FUN_1804d6ae0(param_1);
  uVar4 = FUN_1804dbd70(param_1,param_2,1);
  *(undefined2 *)(param_1 + 0xbc) = 0x3213;
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  *(undefined2 *)(param_1 + 0xba) = uVar4;
  uVar3 = FUN_1804d6ae0(param_1);
  *(undefined2 *)(param_1 + 0xbc) = 0x2909;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  uVar2 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x3e090013;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar1 = FUN_1804d6ae0(param_1);
  *(undefined2 *)(param_1 + 0xbc) = 0x4d09;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804d9cb0 FUN_1804d9cb0 ===== */

void FUN_1804d9cb0(longlong param_1,longlong *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint uVar7;
  
  uVar1 = FUN_1804dbcb0(param_1,param_2,0);
  uVar2 = FUN_1804a6410(param_1,0x30);
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0xbc) = 0x2909;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  uVar1 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x55090002;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar3 = FUN_1804d6ae0(param_1);
  uVar7 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 4);
  if ((uVar7 & 0x1f000000) == 0x4000000) {
    uVar1 = FUN_1804a6370(param_1,0);
    *(undefined2 *)(param_1 + 0xbc) = 0x4009;
    uVar6 = (ushort)uVar7;
    *(ushort *)(param_1 + 0xb8) = uVar6;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    uVar4 = FUN_1804d6ae0(param_1);
    *(undefined4 *)(param_1 + 0xba) = 0x45130000;
    *(ushort *)(param_1 + 0xb8) = uVar6;
    uVar5 = FUN_1804d6ae0(param_1);
    if (*(char *)(*(longlong *)(param_1 + 0x20) + 5 + ((ulonglong)uVar4 & 0xffff) * 8) == '@') {
      uVar7 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + ((ulonglong)uVar4 & 0xffff) * 8);
    }
    else if (0x7fff < uVar6) {
      uVar1 = FUN_1804a6410(param_1,0x18);
      *(undefined2 *)(param_1 + 0xbc) = 0x2909;
      *(ushort *)(param_1 + 0xb8) = uVar6;
      *(undefined2 *)(param_1 + 0xba) = uVar1;
      uVar4 = FUN_1804d6ae0(param_1);
    }
  }
  else {
    if ((uVar7 & 0x1f000000) != 0xa000000) {
      return;
    }
    uVar4 = FUN_1804df940(param_1,uVar7,*param_2 + 8);
    uVar5 = FUN_1804dbd70(param_1,param_2,2);
  }
  FUN_1804a5e80(param_1,0x18,uVar3,uVar4,uVar5,uVar7);
  return;
}



/* ===== 1804d9e40 FUN_1804d9e40 ===== */

void FUN_1804d9e40(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar1 = FUN_1804dbcb0(param_1,param_2,0);
  uVar2 = FUN_1804a6410(param_1,0x30);
  *(undefined2 *)(param_1 + 0xbc) = 0x2909;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  uVar2 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x55090002;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar3 = FUN_1804d6ae0(param_1);
  uVar6 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 4);
  if (uVar6 != 0) {
    lVar8 = 1;
    do {
      if ((uVar6 & 0x1f000000) == 0xc000000) {
        uVar2 = FUN_1804dbcb0(param_1,param_2,lVar8);
        *(undefined2 *)(param_1 + 0xbc) = 0x989;
        *(undefined2 *)(param_1 + 0xb8) = uVar1;
        *(undefined2 *)(param_1 + 0xba) = uVar2;
        FUN_1804d6ae0(param_1);
      }
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 4 + lVar8 * 4);
      lVar8 = lVar8 + 1;
    } while (uVar6 != 0);
    uVar6 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 4);
    lVar8 = 1;
    while (uVar1 = (undefined2)uVar3, uVar6 != 0) {
      uVar7 = uVar6 & 0x1f000000;
      uVar2 = (undefined2)uVar6;
      if (uVar7 == 0x4000000) {
        *(undefined2 *)(param_1 + 0xbc) = 0x5689;
        *(undefined2 *)(param_1 + 0xb8) = uVar1;
        *(undefined2 *)(param_1 + 0xba) = uVar2;
        uVar3 = FUN_1804d6ae0(param_1);
      }
      else if ((uVar6 >> 0x18 & 0x1f) - 0xe < 6) {
        *(undefined2 *)(param_1 + 0xbc) = 0x5d04;
        *(undefined2 *)(param_1 + 0xb8) = uVar2;
        *(ushort *)(param_1 + 0xba) = (ushort)(uVar7 == 0xe000000);
        uVar2 = FUN_1804d6ae0(param_1);
        *(undefined2 *)(param_1 + 0xbc) = 0x5689;
        *(undefined2 *)(param_1 + 0xb8) = uVar1;
        *(undefined2 *)(param_1 + 0xba) = uVar2;
        uVar3 = FUN_1804d6ae0(param_1);
      }
      else if (uVar7 == 0xc000000) {
        *(undefined4 *)(param_1 + 0xba) = 0x45090013;
        *(undefined2 *)(param_1 + 0xb8) = uVar2;
        uVar4 = FUN_1804d6ae0();
        *(undefined4 *)(param_1 + 0xba) = 0x4509000e;
        *(undefined2 *)(param_1 + 0xb8) = uVar2;
        uVar1 = FUN_1804d6ae0(param_1);
        *(undefined2 *)(param_1 + 0xbc) = 0x2a15;
        *(undefined2 *)(param_1 + 0xb8) = uVar1;
        *(short *)(param_1 + 0xba) = (short)uVar4;
        uVar1 = FUN_1804d6ae0(param_1);
        *(undefined4 *)(param_1 + 0xba) = 0x5b131275;
        *(undefined2 *)(param_1 + 0xb8) = uVar1;
        uVar5 = FUN_1804d6ae0(param_1);
        uVar3 = FUN_1804a5e80(param_1,0x10,uVar3,uVar4,uVar5);
      }
      else {
        FUN_1804d6e20(param_1,param_2);
      }
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 4 + lVar8 * 4);
      lVar8 = lVar8 + 1;
    }
    *(undefined4 *)(param_1 + 0xba) = 0x12000000;
    *(undefined2 *)(param_1 + 0xb8) = uVar1;
    FUN_1804d6ae0(param_1);
  }
  return;
}



/* ===== 1804da0e0 FUN_1804da0e0 ===== */

void FUN_1804da0e0(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_1804dbcb0(param_1,param_2,0);
  uVar2 = FUN_1804a6410(param_1,0x30);
  *(undefined2 *)(param_1 + 0xbc) = 0x2909;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  uVar1 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x55090002;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar3 = FUN_1804d6ae0(param_1);
  FUN_1804db690(param_1,param_2,uVar3,1);
  return;
}



/* ===== 1804da170 FUN_1804da170 ===== */

void FUN_1804da170(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar2 = FUN_1804dbcb0(param_1,param_2,0);
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  *(undefined4 *)(param_1 + 0xba) = 0x45090013;
  uVar3 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x4509000e;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar4 = FUN_1804d6ae0(param_1);
  if (*(int *)(*(longlong *)(param_1 + 0xa0) + 4) == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4) = 0x7fff;
    *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 8) = 0;
  }
  lVar9 = *(longlong *)(param_1 + 0xa0);
  lVar8 = 0;
  uVar10 = *(uint *)(lVar9 + 4);
  while (uVar10 != 0) {
    lVar1 = lVar8 * 4;
    if ((uVar10 & 0x1f000000) != 0) {
      uVar7 = FUN_1804dbd70(param_1,param_2,lVar8 + 1);
      *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4 + lVar1) = uVar7;
    }
    lVar9 = *(longlong *)(param_1 + 0xa0);
    lVar8 = lVar8 + 1;
    uVar10 = *(uint *)(lVar9 + 8 + lVar1);
  }
  uVar10 = *(uint *)(lVar9 + 4);
  lVar9 = 0;
  if (uVar10 != 0) {
    do {
      *(undefined2 *)(param_1 + 0xbc) = 0x2a15;
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      *(undefined2 *)(param_1 + 0xba) = uVar3;
      uVar5 = FUN_1804d6ae0(param_1);
      *(undefined4 *)(param_1 + 0xba) = 0x5b131275;
      *(undefined2 *)(param_1 + 0xb8) = uVar5;
      uVar5 = FUN_1804d6ae0(param_1);
      lVar8 = lVar9 * 4;
      if ((uVar10 & 0x1f000000) == 0) {
        *(undefined2 *)(param_1 + 0xbc) = 0x5004;
        *(undefined2 *)(param_1 + 0xb8) = uVar3;
        *(undefined2 *)(param_1 + 0xba) = uVar5;
        uVar7 = FUN_1804d6ae0(param_1);
        uVar5 = uVar4;
      }
      else {
        *(undefined2 *)(param_1 + 0xbc) = 0x3213;
        *(undefined2 *)(param_1 + 0xb8) = uVar5;
        *(short *)(param_1 + 0xba) = (short)uVar10;
        uVar6 = FUN_1804d6ae0(param_1);
        *(undefined2 *)(param_1 + 0xbc) = 0x2909;
        *(undefined2 *)(param_1 + 0xba) = uVar6;
        *(undefined2 *)(param_1 + 0xb8) = uVar3;
        uVar5 = FUN_1804d6ae0(param_1);
        *(undefined2 *)(param_1 + 0xbc) = 0x5004;
        *(undefined2 *)(param_1 + 0xb8) = uVar3;
        *(undefined2 *)(param_1 + 0xba) = uVar6;
        uVar7 = FUN_1804d6ae0(param_1);
      }
      *(undefined4 *)(lVar8 + *(longlong *)(param_1 + 0xa0)) = uVar7;
      *(undefined4 *)(param_1 + 0xba) = 0x3e090013;
      *(undefined2 *)(param_1 + 0xb8) = uVar2;
      uVar3 = FUN_1804d6ae0(param_1);
      *(undefined2 *)(param_1 + 0xbc) = 0x4d09;
      *(undefined2 *)(param_1 + 0xb8) = uVar3;
      *(undefined2 *)(param_1 + 0xba) = uVar5;
      FUN_1804d6ae0(param_1);
      lVar9 = lVar9 + 1;
      uVar10 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 8 + lVar8);
      uVar3 = uVar5;
    } while (uVar10 != 0);
  }
  *(longlong *)(param_2 + 8) = lVar9;
  return;
}



/* ===== 1804da3c0 FUN_1804da3c0 ===== */

void FUN_1804da3c0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_1804dbcb0(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0xba) = 0x45090013;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar3 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x4509000e;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar2 = FUN_1804d6ae0(param_1);
  *(undefined2 *)(param_1 + 0xbc) = 0x2a15;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  uVar2 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x5b131275;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar2 = FUN_1804d6ae0(param_1);
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  *(undefined2 *)(param_1 + 0xbc) = 0x5004;
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  uVar4 = FUN_1804d6ae0(param_1);
  *puVar1 = uVar4;
  return;
}



/* ===== 1804da480 FUN_1804da480 ===== */

void FUN_1804da480(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_1804dbcb0(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0xba) = 0x45090013;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar2 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x4509000e;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar1 = FUN_1804d6ae0(param_1);
  *(undefined2 *)(param_1 + 0xbc) = 0x2a15;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  uVar1 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x5b131275;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar3 = FUN_1804d6ae0(param_1);
  **(undefined4 **)(param_1 + 0xa0) = uVar3;
  return;
}



/* ===== 1804da520 FUN_1804da520 ===== */

void FUN_1804da520(longlong param_1,longlong *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_1804dbcb0(param_1,param_2,0);
  uVar2 = FUN_1804a6410(param_1,0x30);
  *(undefined2 *)(param_1 + 0xbc) = 0x2909;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  uVar1 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x55090002;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar3 = FUN_1804d6ae0(param_1);
  uVar4 = FUN_1804df940(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4),*param_2 + 8);
  uVar5 = FUN_1804dbd70(param_1,param_2,2);
  uVar1 = FUN_1804a5e80(param_1,0x10,uVar3,uVar4,uVar5);
  *(undefined4 *)(param_1 + 0xba) = 0x12000000;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804da5f0 FUN_1804da5f0 ===== */

void FUN_1804da5f0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_1804dbcb0(param_1,param_2,0);
  uVar3 = FUN_1804a6410(param_1,0x30);
  *(undefined2 *)(param_1 + 0xbc) = 0x2909;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  uVar3 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x55090002;
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  uVar4 = FUN_1804d6ae0(param_1);
  uVar5 = FUN_1804dbd70(param_1,param_2,1);
  uVar4 = FUN_1804a5e80(param_1,0x19,uVar4,uVar5);
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4) = uVar4;
  *(undefined4 *)(param_1 + 0xba) = 0x4509000e;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar4 = FUN_1804d6ae0(param_1);
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  uVar4 = FUN_1804df990(param_1,uVar4);
  *puVar1 = uVar4;
  *(undefined8 *)(param_2 + 8) = 2;
  return;
}



/* ===== 1804da6d0 FUN_1804da6d0 ===== */

void FUN_1804da6d0(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar1 = FUN_1804dbcb0(param_1,param_2,0);
  uVar2 = FUN_1804dbd70(param_1,param_2,1);
  *(undefined4 *)(param_1 + 0xba) = 0x4509000e;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar3 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x4509000f;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar4 = FUN_1804d6ae0(param_1);
  *(undefined2 *)(param_1 + 0xbc) = 0x2a15;
  *(undefined2 *)(param_1 + 0xb8) = uVar4;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  uVar4 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x5b131275;
  *(undefined2 *)(param_1 + 0xb8) = uVar4;
  uVar4 = FUN_1804d6ae0(param_1);
  *(undefined2 *)(param_1 + 0xbc) = 0x693;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  *(undefined2 *)(param_1 + 0xba) = uVar4;
  FUN_1804d6ae0(param_1);
  *(undefined2 *)(param_1 + 0xbc) = 0x2909;
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  uVar2 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x3e09000e;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar1 = FUN_1804d6ae0(param_1);
  *(undefined2 *)(param_1 + 0xbc) = 0x4d09;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804da7f0 FUN_1804da7f0 ===== */

void FUN_1804da7f0(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_1804dbcb0(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0xba) = 0x45090013;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar2 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x4509000e;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar1 = FUN_1804d6ae0(param_1);
  uVar3 = FUN_1804df990(param_1,uVar2);
  **(undefined4 **)(param_1 + 0xa0) = uVar3;
  *(undefined2 *)(param_1 + 0xbc) = 0x2a15;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  *(short *)(param_1 + 0xba) = (short)uVar2;
  uVar1 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x5b131275;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar2 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4) = uVar2;
  *(undefined8 *)(param_2 + 8) = 2;
  return;
}



/* ===== 1804da8b0 FUN_1804da8b0 ===== */

void FUN_1804da8b0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_1804dbcb0(param_1,param_2,0);
  uVar3 = FUN_1804a6410(param_1,0x30);
  *(undefined2 *)(param_1 + 0xbc) = 0x2909;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  uVar2 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x55090002;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar4 = FUN_1804d6ae0(param_1);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 4);
  uVar2 = (undefined2)uVar1;
  if ((uVar1 >> 0x18 & 0x1f) - 0xf < 5) {
    *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    uVar2 = FUN_1804d6ae0(param_1);
  }
  *(undefined4 *)(param_1 + 0xba) = 0x3f090001;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar5 = FUN_1804d6ae0(param_1);
  FUN_1804a5e80(param_1,0x1a,uVar4,uVar5);
  return;
}



/* ===== 1804da980 FUN_1804da980 ===== */

void FUN_1804da980(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_1804dbcb0(param_1,param_2,0);
  uVar3 = FUN_1804a6410(param_1,0x30);
  *(undefined2 *)(param_1 + 0xbc) = 0x2909;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  uVar3 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x55090002;
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  uVar4 = FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x3f090002;
  *(undefined2 *)(param_1 + 0xb8) = 0x7fff;
  uVar5 = FUN_1804d6ae0(param_1);
  uVar3 = FUN_1804a5e80(param_1,0x1b,uVar4,uVar5);
  uVar4 = FUN_1804d2630((*(ulonglong *)*param_2 & 0x7fffffffffff) + 0x30);
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  uVar4 = FUN_1804c2d70(param_1,uVar5,0,uVar4);
  *puVar1 = uVar4;
  *(undefined4 *)(param_1 + 0xba) = 0x3e090013;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  uVar2 = FUN_1804d6ae0(param_1);
  *(undefined2 *)(param_1 + 0xbc) = 0x4d09;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804daaa0 FUN_1804daaa0 ===== */

void FUN_1804daaa0(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = **(uint **)(param_1 + 0xa0);
  if ((uVar2 >> 0x18 & 0x1f) - 0xf < 5) {
    *(short *)(param_1 + 0xb8) = (short)uVar2;
    *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
    uVar2 = FUN_1804d6ae0(param_1);
  }
  *(short *)(param_1 + 0xb8) = (short)uVar2;
  *(undefined4 *)(param_1 + 0xba) = 0x3f090001;
  uVar3 = FUN_1804d6ae0(param_1);
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  uVar3 = FUN_1804a5e80(param_1,0x1c,uVar3);
  *puVar1 = uVar3;
  *(undefined2 *)(param_1 + 0xb8) = **(undefined2 **)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xba) = 0x12000000;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804dab40 FUN_1804dab40 ===== */

void FUN_1804dab40(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  longlong lStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if ((int)((longlong)*(ulonglong *)*param_2 >> 0x2f) == -5) {
    uVar5 = *(ulonglong *)*param_2 & 0x7fffffffffff;
    *(undefined4 *)(param_1 + 0xba) = 0x3f090002;
    *(undefined2 *)(param_1 + 0xb8) = 0x7fff;
    uVar3 = FUN_1804d6ae0();
    uVar2 = FUN_1804a5e80(param_1,0x1d,uVar3,**(undefined4 **)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xba) = 0x12000000;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    FUN_1804d6ae0(param_1);
    local_48 = uVar5 + 0x18;
    local_18 = 0;
    lStack_40 = *(longlong *)(param_1 + 0x80) + 3;
    local_38 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_58 = uVar5 + 0x18 + (ulonglong)*(uint *)(uVar5 + 0x14);
    lStack_50 = local_58;
    lStack_30 = local_48;
    uVar4 = FUN_1804d2630(&local_58);
    puVar1 = *(undefined4 **)(param_1 + 0xa0);
    uVar3 = FUN_1804c2d70(param_1,uVar3,0,uVar4);
    *puVar1 = uVar3;
  }
  return;
}



/* ===== 1804dac50 FUN_1804dac50 ===== */

void FUN_1804dac50(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  ulonglong local_58;
  double local_50;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  uint local_20;
  undefined4 local_14;
  
  uVar1 = **(uint **)(param_1 + 0xa0);
  local_26 = (undefined2)(uVar1 >> 0x10);
  local_28 = (undefined2)uVar1;
  local_20 = (*(uint **)(param_1 + 0xa0))[1];
  param_2[1] = 0;
  if (((uVar1 & 0x1f000000) == 0xb000000) && (local_20 != 0)) {
    if (*(int *)(*(longlong *)(param_1 + 0xa0) + 8) == 0) {
      *(undefined2 *)(param_1 + 0xb8) = local_28;
      *(undefined4 *)(param_1 + 0xba) = 0x49137fff;
      uVar3 = FUN_1804d6ae0(param_1);
      uVar2 = *(ulonglong *)*param_2;
      uVar4 = FUN_1804a6370(param_1,1);
      *(undefined2 *)(param_1 + 0xbc) = 0x2913;
      *(undefined2 *)(param_1 + 0xb8) = uVar3;
      *(undefined2 *)(param_1 + 0xba) = uVar4;
      local_24 = FUN_1804d6ae0(param_1);
      local_58 = uVar2 & 0x7fffffffffff | 0xfffa000000000000;
      iVar5 = FUN_1804929b0(uVar2 & 0x7fffffffffff);
      local_14 = 0;
      local_50 = (double)(iVar5 + 1);
      FUN_1804bf540(param_1,&local_58);
      return;
    }
    FUN_1804d6e20(param_1,param_2);
  }
  return;
}



/* ===== 1804dad90 FUN_1804dad90 ===== */

void FUN_1804dad90(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar1 = **(uint **)(param_1 + 0xa0);
  if ((uVar1 & 0x1f000000) == 0xb000000) {
    if (((*(uint **)(param_1 + 0xa0))[1] & 0x1f000000) == 0) {
      uVar6 = FUN_1804a64b0(param_1,4);
    }
    else {
      uVar6 = FUN_1804a6be0();
    }
    if ((*(int *)(*(longlong *)(param_1 + 0xa0) + 4) == 0) ||
       ((*(uint *)(*(longlong *)(param_1 + 0xa0) + 8) & 0x1f000000) == 0)) {
      uVar7 = FUN_1804a6370(param_1,1);
    }
    else {
      uVar7 = FUN_1804e4020(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0xa0);
    if (((*(int *)(lVar2 + 4) == 0) || (*(int *)(lVar2 + 8) == 0)) ||
       ((*(uint *)(lVar2 + 0xc) & 0x1f000000) == 0)) {
      *(undefined4 *)(param_1 + 0xba) = 0x49137fff;
      *(short *)(param_1 + 0xb8) = (short)uVar1;
      uVar8 = FUN_1804d6ae0(param_1);
    }
    else {
      uVar8 = FUN_1804e4020(param_1);
    }
    uVar4 = FUN_1804a66d0(param_1,0x19,param_1 + -0x220);
    *(undefined4 *)(param_1 + 0xba) = 0x55090000;
    *(undefined2 *)(param_1 + 0xb8) = uVar4;
    uVar9 = FUN_1804d6ae0(param_1);
    uVar4 = FUN_1804a5e80(param_1,0x17,uVar9,uVar1,uVar6,uVar7,uVar8);
    uVar5 = FUN_1804a66d0(param_1,0x19,0);
    *(undefined2 *)(param_1 + 0xbc) = 0x989;
    *(undefined2 *)(param_1 + 0xb8) = uVar4;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xb8) = uVar4;
    puVar3 = *(undefined4 **)(param_1 + 0xa0);
    *(undefined2 *)(param_1 + 0xbc) = 0x5784;
    *(short *)(param_1 + 0xba) = (short)uVar9;
    uVar6 = FUN_1804d6ae0(param_1);
    *puVar3 = uVar6;
  }
  return;
}



/* ===== 1804daf30 FUN_1804daf30 ===== */

void FUN_1804daf30(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  short sVar8;
  
  uVar5 = FUN_1804e4020(param_1,**(undefined4 **)(param_1 + 0xa0));
  uVar6 = FUN_1804e4020(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4));
  if (((ushort)uVar5 < 0x8000) && ((ushort)uVar6 < 0x8000)) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar5 & 0xffff) * 8);
    if (iVar1 < 0x7fff) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar6 & 0xffff) * 8);
      if (iVar2 == 0) {
        sVar8 = 0;
      }
      else if (iVar2 == 1) {
        sVar8 = 1;
      }
      else {
        iVar4 = 0x1f;
        if (iVar2 - 1U != 0) {
          for (; iVar2 - 1U >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        sVar8 = (short)iVar4 + 1;
      }
      puVar3 = *(undefined4 **)(param_1 + 0xa0);
      *(undefined2 *)(param_1 + 0xbc) = 0x518b;
      *(short *)(param_1 + 0xba) = sVar8;
      sVar8 = (short)iVar1 + 1;
      if (iVar1 < 1) {
        sVar8 = 0;
      }
      *(short *)(param_1 + 0xb8) = sVar8;
      uVar7 = FUN_1804d6ae0(param_1);
      *puVar3 = uVar7;
      return;
    }
  }
  puVar3 = *(undefined4 **)(param_1 + 0xa0);
  uVar7 = FUN_1804a5e80(param_1,0x1f,uVar5,uVar6);
  *puVar3 = uVar7;
  return;
}



/* ===== 1804db020 FUN_1804db020 ===== */

void FUN_1804db020(longlong param_1,longlong param_2)

{
  if ((**(uint **)(param_1 + 0xa0) & 0x1f000000) == 0xb000000) {
    *(undefined8 *)(param_2 + 8) = 0;
    FUN_1804a5e80(param_1,0x22);
    *(undefined1 *)(param_1 + 0xb5) = 1;
  }
  return;
}



/* ===== 1804db070 FUN_1804db070 ===== */

void FUN_1804db070(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  
  uVar7 = FUN_1804dbac0(param_1,local_res8,*(undefined4 *)(param_2 + 0x10));
  uVar8 = FUN_1804a6370(param_1,0);
  local_res10 = uVar8;
  uVar9 = FUN_1804a6370(param_1,1);
  puVar2 = *(undefined4 **)(param_1 + 0xa0);
  uVar12 = (ulonglong)(*(int *)(param_2 + 0x10) == 0);
  iVar1 = puVar2[uVar12];
  do {
    if (iVar1 == 0) {
      *puVar2 = local_res8[0];
      return;
    }
    uVar4 = FUN_1804a6be0(param_1,puVar2[uVar12]);
    *(ushort *)(param_1 + 0xb8) = uVar4;
    *(undefined2 *)(param_1 + 0xbc) = 0x4009;
    *(short *)(param_1 + 0xba) = (short)uVar8;
    uVar8 = FUN_1804d6ae0(param_1);
    *(undefined4 *)(param_1 + 0xba) = 0x45130000;
    *(ushort *)(param_1 + 0xb8) = uVar4;
    uVar10 = FUN_1804d6ae0(param_1);
    if (((ushort)uVar10 < 0x8000) &&
       (lVar3 = *(longlong *)(param_1 + 0x20),
       *(int *)(lVar3 + (ulonglong)(uVar10 & 0xffff) * 8) == 1)) {
      uVar11 = (ulonglong)uVar4;
      if ((*(char *)(lVar3 + 5 + uVar11 * 8) == ']') && (*(short *)(lVar3 + 2 + uVar11 * 8) == 2)) {
        uVar10 = (uint)*(ushort *)(lVar3 + uVar11 * 8);
      }
      else {
        *(undefined4 *)(param_1 + 0xba) = 0x46100001;
        *(short *)(param_1 + 0xb8) = (short)uVar8;
        uVar10 = FUN_1804d6ae0(param_1);
      }
      uVar5 = FUN_1804a5e80(param_1,0x38,uVar10,uVar7);
      uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + -8);
      if (((uVar11 & 3) != 0) || ((char)((uint)*(undefined4 *)(uVar11 - 4) >> 0x18) != '\x01')) {
        uVar6 = FUN_1804a6370(param_1,0xffffffff);
        *(undefined2 *)(param_1 + 0xba) = uVar6;
        *(undefined2 *)(param_1 + 0xbc) = 0x993;
        *(undefined2 *)(param_1 + 0xb8) = uVar5;
LAB_1804db242:
        FUN_1804d6ae0(param_1);
      }
    }
    else {
      uVar5 = FUN_1804a5e80(param_1,0x39,uVar8,uVar9,uVar10,uVar7);
      uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + -8);
      if (((uVar11 & 3) != 0) || ((char)((uint)*(undefined4 *)(uVar11 - 4) >> 0x18) != '\x01')) {
        *(undefined2 *)(param_1 + 0xbc) = 0x893;
        *(undefined2 *)(param_1 + 0xb8) = uVar5;
        *(ushort *)(param_1 + 0xba) = (ushort)uVar10;
        goto LAB_1804db242;
      }
    }
    puVar2 = *(undefined4 **)(param_1 + 0xa0);
    iVar1 = puVar2[uVar12 + 1];
    uVar12 = uVar12 + 1;
    uVar8 = local_res10;
  } while( true );
}



/* ===== 1804db290 FUN_1804db290 ===== */

void FUN_1804db290(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = FUN_1804dbac0(param_1,local_res8,*(undefined4 *)(param_2 + 0x10));
  uVar2 = FUN_1804a5e80(param_1,0x3a,uVar4);
  uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + -8);
  if (((uVar1 & 3) != 0) || ((char)((uint)*(undefined4 *)(uVar1 - 4) >> 0x18) != '\x01')) {
    uVar3 = FUN_1804a6370(param_1,0);
    *(undefined2 *)(param_1 + 0xbc) = 0x893;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    FUN_1804d6ae0(param_1);
  }
  **(undefined4 **)(param_1 + 0xa0) = 0x2007ffd;
  return;
}



/* ===== 1804db320 FUN_1804db320 ===== */

void FUN_1804db320(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  uint uVar7;
  
  uVar4 = **(uint **)(param_1 + 0xa0);
  uVar7 = uVar4 & 0x1f000000;
  if (uVar7 == 0xb000000) {
    uVar2 = 5;
  }
  else {
    if (uVar7 != 0xc000000) {
      uVar4 = (uint)((longlong)*(ulonglong *)*param_2 >> 0x2f);
      if (uVar4 < 0xfffffff3) {
        uVar4 = 0xd;
      }
      else {
        uVar4 = ~uVar4;
      }
      lVar1 = *(longlong *)(param_1 + -0x138 + (ulonglong)(uVar4 + 0x16) * 8);
      if (lVar1 == 0) {
        uVar5 = 0x7fff;
      }
      else {
        uVar5 = FUN_1804a62e0(param_1,lVar1,0xb);
      }
      goto LAB_1804db42b;
    }
    uVar2 = 0xb;
  }
  lVar1 = *(longlong *)((*(ulonglong *)*param_2 & 0x7fffffffffff) + 0x20);
  *(undefined2 *)(param_1 + 0xbc) = 0x450b;
  *(short *)(param_1 + 0xb8) = (short)uVar4;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  uVar3 = FUN_1804d6ae0(param_1);
  uVar2 = FUN_1804a64b0(param_1,0xb);
  uVar6 = 0x88b;
  *(short *)(param_1 + 0xb8) = (short)uVar3;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  if (lVar1 != 0) {
    uVar6 = 0x98b;
  }
  *(undefined2 *)(param_1 + 0xbc) = uVar6;
  FUN_1804d6ae0(param_1);
  uVar5 = 0x7fff;
  if (lVar1 != 0) {
    uVar5 = uVar3;
  }
LAB_1804db42b:
  **(undefined4 **)(param_1 + 0xa0) = uVar5;
  return;
}



/* ===== 1804db440 FUN_1804db440 ===== */

int FUN_1804db440(undefined8 param_1,double *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)((longlong)*param_2 >> 0x2f);
  if (uVar1 < 0xfffffff3) {
LAB_1804db47a:
    return (int)*param_2;
  }
  if (uVar1 == 0xfffffffb) {
    iVar2 = FUN_1804972a0((ulonglong)*param_2 & 0x7fffffffffff);
    if (iVar2 != 0) goto LAB_1804db47a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804954a0(param_1,0xb);
}



/* ===== 1804db4a0 FUN_1804db4a0 ===== */

void FUN_1804db4a0(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 local_28;
  longlong local_20;
  uint local_18;
  
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x90) + 10);
  if (bVar1 < 0xe3) {
    uVar2 = (uint)*(ushort *)(&DAT_180571930 + (ulonglong)bVar1 * 2);
  }
  else {
    uVar2 = 0;
  }
  local_18 = uVar2 & 0xff;
  local_20 = 1;
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x20);
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)*(uint *)(param_1 + 0xac) * 4) = 0;
  (*(code *)(&PTR_FUN_180571b00)[uVar2 >> 8])(param_1,&local_28);
  if (-1 < local_20) {
    if (*(int *)(param_1 + 0x174) == 0) {
      *(undefined4 *)(param_1 + 0x174) = 6;
    }
    FUN_1804c1f80(param_1,0);
  }
  return;
}



/* ===== 1804db550 FUN_1804db550 ===== */

int FUN_1804db550(longlong param_1,uint param_2,double *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 uVar6;
  
  uVar2 = (undefined2)param_2;
  if (((param_2 & 0x1f000000) == 0x4000000) &&
     (uVar5 = (ulonglong)*param_3 & 0x7fffffffffff, *(char *)(uVar5 + 0x18) == '#')) {
    if (*(int *)(uVar5 + 0x14) == 1) {
      uVar6 = 0x884;
      uVar1 = FUN_1804a62e0(param_1,uVar5,4);
    }
    else {
      uVar1 = FUN_1804a6370(param_1,0);
      *(undefined2 *)(param_1 + 0xbc) = 0x4009;
      *(undefined2 *)(param_1 + 0xb8) = uVar2;
      *(undefined2 *)(param_1 + 0xba) = uVar1;
      uVar2 = FUN_1804d6ae0(param_1);
      *(undefined4 *)(param_1 + 0xba) = 0x46100001;
      *(undefined2 *)(param_1 + 0xb8) = uVar2;
      uVar2 = FUN_1804d6ae0(param_1);
      uVar6 = 0x893;
      uVar1 = FUN_1804a6370(param_1,0x23);
    }
    *(undefined2 *)(param_1 + 0xbc) = uVar6;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    FUN_1804d6ae0(param_1);
    iVar4 = 0;
  }
  else {
    uVar3 = (uint)((longlong)*param_3 >> 0x2f);
    if (0xfffffff2 < uVar3) {
      if (uVar3 != 0xfffffffb) goto LAB_1804db658;
      iVar4 = FUN_1804972a0((ulonglong)*param_3 & 0x7fffffffffff,param_3);
      if (iVar4 == 0) goto LAB_1804db658;
    }
    iVar4 = (int)*param_3;
    if (iVar4 == 0) {
LAB_1804db658:
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xb);
    }
  }
  return iVar4;
}



/* ===== 1804db670 FUN_1804db670 ===== */

undefined8 FUN_1804db670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1804c2b90(param_3,8,0);
  return 0;
}



/* ===== 1804db690 FUN_1804db690 ===== */

void FUN_1804db690(longlong param_1,longlong *param_2,undefined4 param_3,int param_4)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int local_res8;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  lVar11 = (longlong)param_4;
  uVar3 = FUN_1804a6be0(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xa0) + lVar11 * 4));
  uVar13 = *(ulonglong *)(*param_2 + lVar11 * 8);
  puVar1 = (ulonglong *)(*param_2 + lVar11 * 8);
  uVar5 = (uint)((longlong)uVar13 >> 0x2f);
  if (uVar5 == 0xfffffffb) {
    uVar13 = uVar13 & 0x7fffffffffff;
  }
  else {
    if (0xfffffff2 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xb);
    }
    uVar13 = thunk_FUN_1804b8f90(*(undefined8 *)(param_1 + 0x80),puVar1);
    *puVar1 = uVar13 | 0xfffd800000000000;
  }
  uVar4 = FUN_1804a62e0(param_1,uVar13,4);
  *(undefined2 *)(param_1 + 0xbc) = 0x884;
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  *(undefined2 *)(param_1 + 0xba) = uVar4;
  FUN_1804d6ae0(param_1);
  local_58 = uVar13 + 0x18;
  local_50 = (ulonglong)*(uint *)(uVar13 + 0x14) + 0x18 + uVar13;
  uVar5 = FUN_180498480(&local_58);
  uVar10 = param_3;
  if (uVar5 != 0) {
    local_res8 = 0;
    do {
      if (uVar5 == 2) {
        uVar9 = 0;
        uVar6 = FUN_1804a6370(param_1,2);
        uVar7 = 1;
      }
      else {
        uVar9 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 4 + lVar11 * 4);
        uVar6 = FUN_1804a6370(param_1,uVar5);
        uVar7 = (uVar5 & 0xf) - 1;
        if (7 < uVar7) goto switchD_1804db7f0_caseD_0;
        lVar11 = lVar11 + 1;
      }
      uVar3 = (undefined2)uVar10;
      switch(uVar7) {
      case 0:
      case 7:
switchD_1804db7f0_caseD_0:
        FUN_1804d6e20(param_1,param_2);
        return;
      default:
        uVar12 = FUN_180491d30(*(undefined8 *)(param_1 + 0x80),local_48,local_40);
        uVar4 = FUN_1804a62e0(param_1,uVar12,4);
        *(undefined2 *)(param_1 + 0xbc) = 0x5689;
        *(undefined2 *)(param_1 + 0xb8) = uVar3;
        *(undefined2 *)(param_1 + 0xba) = uVar4;
        uVar10 = FUN_1804d6ae0(param_1);
        break;
      case 2:
        uVar12 = 0xb;
        goto LAB_1804db84c;
      case 3:
        uVar12 = 0xc;
LAB_1804db84c:
        if ((uVar9 >> 0x18 & 0x1f) - 0xf < 5) {
          *(short *)(param_1 + 0xb8) = (short)uVar9;
          if (uVar5 != 3) {
            *(undefined4 *)(param_1 + 0xba) = 0x5b160ad3;
            uVar8 = FUN_1804d6ae0(param_1);
            goto LAB_1804db880;
          }
          *(undefined4 *)(param_1 + 0xba) = 0x5d040000;
          uVar4 = FUN_1804d6ae0(param_1);
          *(undefined2 *)(param_1 + 0xbc) = 0x5689;
          *(undefined2 *)(param_1 + 0xb8) = uVar3;
          *(undefined2 *)(param_1 + 0xba) = uVar4;
          uVar10 = FUN_1804d6ae0(param_1);
        }
        else {
          if ((uVar9 & 0x1f000000) == 0xa000000) {
            uVar8 = FUN_1804df7d0(param_1,uVar9,*param_2 + lVar11 * 8);
LAB_1804db880:
            uVar12 = 10;
          }
          else {
LAB_1804db904:
            uVar8 = FUN_1804a6b20(param_1,uVar9);
          }
          uVar10 = FUN_1804a5e80(param_1,uVar12,uVar10,uVar6,uVar8);
        }
        break;
      case 4:
        uVar12 = 0xd;
        goto LAB_1804db904;
      case 5:
        if ((uVar9 & 0x1f000000) != 0x4000000) goto switchD_1804db7f0_caseD_0;
        if (uVar5 == 6) {
          *(undefined2 *)(param_1 + 0xbc) = 0x5689;
          *(undefined2 *)(param_1 + 0xb8) = uVar3;
          *(short *)(param_1 + 0xba) = (short)uVar9;
          uVar10 = FUN_1804d6ae0();
        }
        else {
          if ((uVar5 & 0x10) == 0) {
            uVar12 = 0xe;
            goto LAB_1804db9d1;
          }
          uVar10 = FUN_1804a5e80(param_1,9,uVar10,uVar9);
        }
        break;
      case 6:
        uVar9 = FUN_1804e4020(param_1,uVar9);
        if (uVar5 == 7) {
          *(undefined4 *)(param_1 + 0xba) = 0x5d040002;
          *(short *)(param_1 + 0xb8) = (short)uVar9;
          uVar4 = FUN_1804d6ae0(param_1);
          *(undefined2 *)(param_1 + 0xbc) = 0x5689;
          *(undefined2 *)(param_1 + 0xb8) = uVar3;
          *(undefined2 *)(param_1 + 0xba) = uVar4;
          uVar10 = FUN_1804d6ae0(param_1);
        }
        else {
          uVar12 = 0xf;
LAB_1804db9d1:
          uVar10 = FUN_1804a5e80(param_1,uVar12,uVar10,uVar6,uVar9);
        }
      }
      local_res8 = local_res8 + 1;
      if (100 < local_res8) {
                    /* WARNING: Subroutine does not return */
        FUN_1804954a0(param_1,2);
      }
      uVar5 = FUN_180498480(&local_58);
    } while (uVar5 != 0);
  }
  *(short *)(param_1 + 0xb8) = (short)uVar10;
  if (param_4 == 0) {
    puVar2 = *(undefined4 **)(param_1 + 0xa0);
    *(undefined2 *)(param_1 + 0xbc) = 0x5784;
    *(short *)(param_1 + 0xba) = (short)param_3;
    uVar10 = FUN_1804d6ae0(param_1);
    *puVar2 = uVar10;
  }
  else {
    *(undefined4 *)(param_1 + 0xba) = 0x12000000;
    FUN_1804d6ae0(param_1);
  }
  return;
}



/* ===== 1804dbac0 FUN_1804dbac0 ===== */

undefined4 FUN_1804dbac0(longlong param_1,uint *param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_3 == 0) {
    uVar3 = **(uint **)(param_1 + 0xa0);
    if ((uVar3 & 0x1f000000) != 0xc000000) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xb);
    }
    *(undefined4 *)(param_1 + 0xba) = 0x4510000c;
    *(short *)(param_1 + 0xb8) = (short)uVar3;
    uVar2 = FUN_1804d6ae0();
    uVar1 = FUN_1804a6370(param_1,1);
    *(undefined2 *)(param_1 + 0xbc) = 0x893;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    FUN_1804d6ae0(param_1);
  }
  else {
    uVar3 = FUN_1804a6000(param_1,0xc,(longlong)(param_3 * 8 + 0x210));
  }
  *param_2 = uVar3;
  *(undefined4 *)(param_1 + 0xba) = 0x4509000d;
  *(short *)(param_1 + 0xb8) = (short)uVar3;
  uVar4 = FUN_1804d6ae0(param_1);
  uVar2 = FUN_1804a64b0(param_1,9);
  *(undefined2 *)(param_1 + 0xbc) = 0x989;
  *(short *)(param_1 + 0xb8) = (short)uVar4;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  FUN_1804d6ae0(param_1);
  return uVar4;
}



/* ===== 1804dbbb0 FUN_1804dbbb0 ===== */

undefined8 FUN_1804dbbb0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_58 [3];
  undefined8 local_40;
  undefined4 local_28;
  undefined4 local_18;
  
  local_28 = **(undefined4 **)(param_1 + 0xa0);
  local_58[0] = *(undefined8 *)*param_2;
  iVar2 = FUN_1804c1910(param_1,local_58);
  if (iVar2 == 0) {
    return 0;
  }
  (*(undefined4 **)(param_1 + 0xa0))[2] = **(undefined4 **)(param_1 + 0xa0);
  **(undefined4 **)(param_1 + 0xa0) = local_18;
  uVar1 = *(undefined8 *)*param_2;
  ((undefined8 *)*param_2)[2] = uVar1;
  *(undefined8 *)*param_2 = local_40;
  iVar2 = FUN_180003349(*(undefined8 *)(param_1 + 0x80),0,param_1,FUN_1804dbc90);
  *(undefined8 *)*param_2 = uVar1;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180484920(*(undefined8 *)(param_1 + 0x80),iVar2);
  }
  param_2[1] = -1;
  return 1;
}



/* ===== 1804dbc90 FUN_1804dbc90 ===== */

undefined8 FUN_1804dbc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1804c2ca0(param_3,0,1);
  return 0;
}



/* ===== 1804dbcb0 FUN_1804dbcb0 ===== */

undefined4 FUN_1804dbcb0(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar2 = *(ulonglong *)(*param_2 + param_3 * 8);
  if (((int)((longlong)uVar2 >> 0x2f) != -0xd) ||
     (*(char *)((uVar2 & 0x7fffffffffff) + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0xb);
  }
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + param_3 * 4);
  *(undefined4 *)(param_1 + 0xba) = 0x4510000c;
  *(short *)(param_1 + 0xb8) = (short)uVar1;
  uVar3 = FUN_1804d6ae0(param_1);
  uVar4 = FUN_1804a6370(param_1,3);
  *(undefined2 *)(param_1 + 0xbc) = 0x893;
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  *(undefined2 *)(param_1 + 0xba) = uVar4;
  FUN_1804d6ae0(param_1);
  *(undefined1 *)(param_1 + 0xb5) = 1;
  return uVar1;
}



/* ===== 1804dbd70 FUN_1804dbd70 ===== */

ulonglong FUN_1804dbd70(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *(uint *)(*(longlong *)(param_1 + 0xa0) + param_3 * 4);
  uVar1 = FUN_1804a6370(param_1,0x7fffff00);
  if ((uVar3 >> 0x18 & 0x1f) - 0xf < 5) {
    *(undefined2 *)(param_1 + 0xbc) = 0x693;
    *(short *)(param_1 + 0xb8) = (short)uVar3;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    FUN_1804d6ae0();
    return (ulonglong)uVar3;
  }
  if ((uVar3 & 0x1f000000) == 0xe000000) {
    *(undefined4 *)(param_1 + 0xba) = 0x5b13126e;
    *(short *)(param_1 + 0xb8) = (short)uVar3;
    uVar3 = FUN_1804d6ae0();
    *(undefined2 *)(param_1 + 0xbc) = 0x693;
    *(short *)(param_1 + 0xb8) = (short)uVar3;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    FUN_1804d6ae0(param_1);
    return (ulonglong)uVar3;
  }
  if ((uVar3 & 0x1f000000) != 0xa000000) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0xb);
  }
  uVar1 = FUN_1804df7d0(param_1,uVar3,*param_2 + param_3 * 8);
  uVar2 = FUN_1804a6410(param_1,0x7fffff00);
  *(undefined2 *)(param_1 + 0xbc) = 0x696;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0xba) = 0x5b131275;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar4 = FUN_1804d6ae0(param_1);
  return uVar4;
}



/* ===== 1804dbea0 FUN_1804dbea0 ===== */

undefined4
FUN_1804dbea0(longlong param_1,longlong param_2,int *param_3,undefined2 param_4,undefined2 param_5,
             undefined4 param_6)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 uVar5;
  
  iVar1 = *param_3;
  uVar5 = (undefined2)param_6;
  if (iVar1 < 0) {
    *(undefined2 *)(param_1 + 0xbc) = 0x93;
    *(undefined2 *)(param_1 + 0xb8) = param_4;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    FUN_1804d6ae0();
    *(undefined2 *)(param_1 + 0xb8) = param_5;
    *(undefined2 *)(param_1 + 0xbc) = 0x2913;
    *(undefined2 *)(param_1 + 0xba) = param_4;
    uVar3 = FUN_1804d6ae0(param_1);
    iVar4 = *(int *)(param_2 + 0x14);
    uVar2 = 0x193;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    iVar4 = iVar4 + iVar1;
    *(short *)(param_1 + 0xb8) = (short)uVar3;
    if (iVar4 < 0) {
      uVar2 = 0x93;
    }
    *(undefined2 *)(param_1 + 0xbc) = uVar2;
    FUN_1804d6ae0(param_1);
    if (iVar4 < 0) {
      *param_3 = 0;
      uVar3 = param_6;
    }
    else {
      *param_3 = iVar4;
    }
    return uVar3;
  }
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0xbc) = 0x893;
    *(undefined2 *)(param_1 + 0xb8) = param_4;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    FUN_1804d6ae0();
    *param_3 = 0;
    return param_6;
  }
  uVar2 = FUN_1804a6370(param_1,0xffffffff);
  *(undefined2 *)(param_1 + 0xbc) = 0x3593;
  *(undefined2 *)(param_1 + 0xb8) = param_4;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  uVar3 = FUN_1804d6ae0(param_1);
  *(undefined2 *)(param_1 + 0xbc) = 0x193;
  *(short *)(param_1 + 0xb8) = (short)uVar3;
  *(undefined2 *)(param_1 + 0xba) = uVar5;
  FUN_1804d6ae0(param_1);
  *param_3 = iVar1 + -1;
  return uVar3;
}



/* ===== 1804dc020 FUN_1804dc020 ===== */

void FUN_1804dc020(longlong param_1,ulonglong param_2,undefined2 param_3)

{
  uint uVar1;
  
  if (((uint)(param_2 >> 0x18) & 0x1f) - 0xf < 5) {
    *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
    *(short *)(param_1 + 0xb8) = (short)param_2;
    uVar1 = FUN_1804d6ae0();
    param_2 = (ulonglong)uVar1;
  }
  *(undefined2 *)(param_1 + 0xbc) = 0x3f09;
  *(short *)(param_1 + 0xb8) = (short)param_2;
  *(undefined2 *)(param_1 + 0xba) = param_3;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804dc090 FUN_1804dc090 ===== */

undefined8 FUN_1804dc090(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1804bf460(param_3,1,*(int *)(param_3 + 0xac) + -2);
  return 0;
}



/* ===== 1804dc0c0 FUN_1804dc0c0 ===== */

ulonglong FUN_1804dc0c0(longlong param_1,uint param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  if ((param_2 & 0x1f000000) != 0xa000000) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0xb);
  }
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0xba) = 0x45120014;
  *(short *)(param_1 + 0xb8) = (short)param_2;
  uVar2 = FUN_1804d6ae0();
  uVar3 = FUN_1804a6370(param_1,*(undefined2 *)((uVar1 & 0x7fffffffffff) + 10));
  *(undefined2 *)(param_1 + 0xbc) = 0x893;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  FUN_1804d6ae0(param_1);
  return uVar1 & 0x7fffffffffff;
}



/* ===== 1804dc160 FUN_1804dc160 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1804dc160(longlong param_1,uint param_2,ulonglong *param_3)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [12];
  uint local_9c;
  longlong local_88;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if ((param_2 & 0x1f000000) == 0x4000000) {
    uVar5 = *param_3;
    uVar2 = FUN_1804a62e0(param_1,uVar5 & 0x7fffffffffff,4);
    *(undefined2 *)(param_1 + 0xbc) = 0x884;
    *(short *)(param_1 + 0xb8) = (short)param_2;
    *(undefined2 *)(param_1 + 0xba) = uVar2;
    FUN_1804d6ae0(param_1);
    local_60 = *(longlong *)(param_1 + 0x80);
    local_58 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 0x188);
    local_88 = (uVar5 & 0x7fffffffffff) + 0x18;
    *(longlong *)(local_58 + 0x10) = local_60;
    uVar1 = *(uint *)(local_58 + 8);
    local_50 = 0;
    local_34 = 0x12;
    local_48 = local_88;
    iVar3 = FUN_1804b07e0(local_a8);
    if ((iVar3 != 0) || (uVar1 < *(uint *)(local_58 + 8))) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xb);
    }
    uVar5 = (ulonglong)local_9c;
  }
  else {
    lVar4 = FUN_1804dc0c0();
    if (*(ushort *)(lVar4 + 10) == 0x18) {
      uVar5 = FUN_1804ddb40(param_1,lVar4,param_2);
    }
    else {
      uVar5 = (ulonglong)(uint)*(ushort *)(lVar4 + 10);
    }
  }
  return uVar5;
}



/* ===== 1804dc290 FUN_1804dc290 ===== */

void FUN_1804dc290(longlong param_1,longlong *param_2,uint param_3)

{
  ushort *puVar1;
  ushort uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ushort *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  uint *puVar21;
  byte bVar22;
  bool bVar23;
  uint local_res8 [2];
  longlong *local_res10;
  uint local_res18;
  undefined4 local_res20;
  undefined8 in_stack_ffffffffffffff78;
  int local_78;
  undefined8 local_68 [5];
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  plVar3 = *(longlong **)(param_1 + -0x160);
  uVar19 = (ulonglong)param_3;
  local_res10 = param_2;
  local_res18 = param_3;
  uVar8 = FUN_1804ab410(plVar3,uVar19,local_res8);
  lVar16 = *plVar3;
  bVar22 = (byte)((uint)*(undefined4 *)(lVar16 + uVar19 * 0x18) >> 0x18);
  while (puVar21 = (uint *)(lVar16 + uVar19 * 0x18), bVar22 >> 4 == 8) {
    uVar19 = (ulonglong)(ushort)*puVar21;
    bVar22 = (byte)((uint)*(undefined4 *)(lVar16 + uVar19 * 0x18) >> 0x18);
  }
  uVar5 = FUN_1804a6370(param_1,param_3);
  if ((uVar8 >> 0x1c == 2) ||
     (((uVar8 & 0xfc000000) == 0 && ((local_res8[0] - 4 & 0xfffffffb) == 0)))) {
    iVar9 = *(int *)(*(longlong *)(param_1 + 0xa0) + 4);
    if (iVar9 == 0) {
      if (uVar8 >> 0x1c == 2) {
        uVar6 = FUN_1804a66d0(param_1,0x19,0);
      }
      else if (local_res8[0] == 4) {
        uVar6 = FUN_1804a6370(param_1,0);
      }
      else {
        uVar6 = FUN_1804a6410(param_1,0);
      }
    }
    else {
      uVar6 = FUN_1804de8e0(param_1,puVar21,0,iVar9,*param_2 + 8);
    }
    puVar4 = *(undefined4 **)(param_1 + 0xa0);
    *(undefined2 *)(param_1 + 0xbc) = 0x548a;
    *(undefined2 *)(param_1 + 0xb8) = uVar5;
    *(undefined2 *)(param_1 + 0xba) = uVar6;
    uVar13 = FUN_1804d6ae0(param_1);
    *puVar4 = uVar13;
    return;
  }
  uVar19 = 1;
  if ((uVar8 & 0x100000) == 0) {
    local_78 = 0x7fff;
    if (0x30000 < (uVar8 & 0xf0000)) {
      local_78 = FUN_1804a6370(param_1,local_res8[0]);
    }
  }
  else {
    iVar9 = *(int *)(*(longlong *)(param_1 + 0xa0) + 4);
    if ((iVar9 == 0) || (*(int *)(*(longlong *)(param_1 + 0xa0) + 8) != 0)) goto LAB_1804dca03;
    lVar16 = *param_2 + 8;
    uVar6 = FUN_1804de8e0(param_1,*plVar3 + 0xd8,0,iVar9,lVar16);
    uVar13 = (undefined4)((ulonglong)lVar16 >> 0x20);
    iVar9 = FUN_1804abda0(plVar3,puVar21,0);
    iVar10 = FUN_1804abda0(plVar3,puVar21,1);
    uVar7 = FUN_1804a6370(param_1,iVar10 - iVar9);
    *(undefined2 *)(param_1 + 0xbc) = 0x3793;
    *(undefined2 *)(param_1 + 0xb8) = uVar6;
    *(undefined2 *)(param_1 + 0xba) = uVar7;
    uVar6 = FUN_1804d6ae0(param_1);
    uVar7 = FUN_1804a6370(param_1,iVar9);
    *(undefined2 *)(param_1 + 0xbc) = 0x3593;
    *(undefined2 *)(param_1 + 0xb8) = uVar6;
    *(undefined2 *)(param_1 + 0xba) = uVar7;
    local_78 = FUN_1804d6ae0(param_1);
    *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4) = 0;
    param_2 = local_res10;
  }
  *(short *)(param_1 + 0xba) = (short)local_78;
  *(undefined2 *)(param_1 + 0xbc) = 0x538a;
  *(undefined2 *)(param_1 + 0xb8) = uVar5;
  uVar11 = FUN_1804d6ae0(param_1);
  local_res20 = uVar11;
  if ((local_res8[0] < 0x81) && ((uVar8 & 0x100000) == 0)) {
    if ((*(int *)(*(longlong *)(param_1 + 0xa0) + 4) == 0) ||
       ((*(int *)(*(longlong *)(param_1 + 0xa0) + 8) != 0 ||
        (iVar9 = FUN_1804b2920(plVar3,puVar21,*param_2 + 8), iVar9 != 0)))) {
      if (*puVar21 >> 0x1c == 3) {
        do {
          uVar14 = *puVar21;
          puVar21 = (uint *)(*plVar3 + (ulonglong)(ushort)uVar14 * 0x18);
          uVar14 = *(uint *)(*plVar3 + (ulonglong)(ushort)uVar14 * 0x18);
          uVar12 = uVar14 >> 0x1c;
        } while (uVar12 == 8);
        local_68[0] = 0;
        if (((uVar14 < 0x10000000) || (uVar12 == 2)) &&
           (uVar14 = puVar21[1], local_res8[0] <= uVar14 << 4)) {
          iVar9 = 0;
          puVar20 = local_68;
          uVar17 = 0;
          if (local_res8[0] != 0) {
            do {
              uVar5 = FUN_1804a6410(param_1,uVar17 + 0x10);
              *(short *)(param_1 + 0xb8) = (short)local_res20;
              *(undefined2 *)(param_1 + 0xbc) = 0x2909;
              *(undefined2 *)(param_1 + 0xba) = uVar5;
              uVar13 = FUN_1804d6ae0(param_1);
              iVar10 = *(int *)(*(longlong *)(param_1 + 0xa0) + uVar19 * 4);
              if (iVar10 == 0) {
                if ((int)uVar19 != 2) {
                  if (*puVar21 < 0x10000000) {
                    iVar9 = FUN_1804a6370(param_1,0);
                  }
                  else {
                    iVar9 = 0x7fff;
                  }
                }
              }
              else {
                puVar20 = (undefined8 *)(*local_res10 + uVar19 * 8);
                uVar19 = (ulonglong)((int)uVar19 + 1);
                iVar9 = iVar10;
              }
              FUN_1804de8e0(param_1,puVar21,uVar13,iVar9,puVar20);
              uVar8 = (int)uVar17 + uVar14;
              uVar17 = (ulonglong)uVar8;
            } while (uVar8 < local_res8[0]);
          }
          goto LAB_1804dc920;
        }
        goto LAB_1804dc876;
      }
      if (*puVar21 >> 0x1c == 1) {
        if ((*(int *)(*(longlong *)(param_1 + 0xa0) + 4) == 0) &&
           (uVar2 = (ushort)puVar21[2], uVar2 != 0)) {
          lVar16 = *plVar3;
          do {
            puVar1 = (ushort *)(lVar16 + (ulonglong)uVar2 * 0x18);
            uVar14 = *(uint *)(lVar16 + (ulonglong)uVar2 * 0x18) >> 0x1c;
            if (uVar14 == 9) {
              if (*(longlong *)(puVar1 + 8) != 0) {
                puVar18 = puVar1;
                do {
                  uVar14 = *(uint *)(lVar16 + (ulonglong)*puVar18 * 0x18);
                  puVar18 = (ushort *)(lVar16 + (ulonglong)*puVar18 * 0x18);
                  uVar12 = uVar14 >> 0x1c;
                } while (uVar12 == 8);
                if ((0xfffffff < uVar14) && (uVar12 != 2)) {
                  bVar23 = uVar12 == 5;
                  goto LAB_1804dc68e;
                }
              }
            }
            else {
              bVar23 = uVar14 == 0xb;
LAB_1804dc68e:
              if (!bVar23) goto LAB_1804dc876;
            }
            uVar2 = puVar1[4];
          } while (uVar2 != 0);
        }
        uVar2 = (ushort)puVar21[2];
        do {
          while( true ) {
            if (uVar2 == 0) goto LAB_1804dc920;
            uVar17 = (ulonglong)uVar2;
            lVar16 = *plVar3;
            puVar1 = (ushort *)(lVar16 + uVar17 * 0x18);
            uVar2 = puVar1[4];
            uVar8 = *(uint *)(lVar16 + uVar17 * 0x18) >> 0x1c;
            if (uVar8 != 9) break;
            local_68[0] = 0;
            if (*(longlong *)(puVar1 + 8) != 0) {
              puVar18 = puVar1;
              do {
                uVar8 = *(uint *)(lVar16 + (ulonglong)*puVar18 * 0x18);
                puVar18 = (ushort *)(lVar16 + (ulonglong)*puVar18 * 0x18);
                uVar14 = uVar8 >> 0x1c;
              } while (uVar14 == 8);
              if (((0xfffffff < uVar8) && (uVar14 != 2)) && (uVar14 != 5)) goto LAB_1804dca03;
              iVar9 = *(int *)(*(longlong *)(param_1 + 0xa0) + uVar19 * 4);
              if (iVar9 == 0) {
                puVar20 = local_68;
                if (uVar14 == 2) {
                  iVar9 = 0x7fff;
                }
                else {
                  iVar9 = FUN_1804a6370(param_1,0);
                }
              }
              else {
                puVar20 = (undefined8 *)(*local_res10 + uVar19 * 8);
                uVar19 = (ulonglong)((int)uVar19 + 1);
              }
              uVar5 = FUN_1804a6410(param_1,(ulonglong)*(uint *)(puVar1 + 2) + 0x10);
              *(short *)(param_1 + 0xb8) = (short)local_res20;
              *(undefined2 *)(param_1 + 0xbc) = 0x2909;
              *(undefined2 *)(param_1 + 0xba) = uVar5;
              uVar13 = FUN_1804d6ae0(param_1);
              FUN_1804de8e0(param_1,puVar18,uVar13,iVar9,puVar20);
              if ((*puVar21 & 0x800000) != 0) {
                if (puVar21[1] == *(uint *)(puVar18 + 2)) goto LAB_1804dc920;
                goto LAB_1804dca03;
              }
            }
          }
        } while (uVar8 == 0xb);
        goto LAB_1804dca03;
      }
    }
    uVar5 = FUN_1804a6410(param_1,0x10);
    *(undefined2 *)(param_1 + 0xbc) = 0x2909;
    *(short *)(param_1 + 0xb8) = (short)uVar11;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    uVar13 = FUN_1804d6ae0(param_1);
    iVar9 = *(int *)(*(longlong *)(param_1 + 0xa0) + 4);
    if (iVar9 == 0) {
      local_68[0] = 0;
      uVar11 = FUN_1804a6370(param_1,0);
      FUN_1804de8e0(param_1,puVar21,uVar13,uVar11,local_68);
    }
    else {
      FUN_1804de8e0(param_1,puVar21,uVar13,iVar9,*param_2 + 8);
    }
  }
  else {
LAB_1804dc876:
    if (*(int *)(*(longlong *)(param_1 + 0xa0) + 4) != 0) {
LAB_1804dca03:
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0x16);
    }
    uVar5 = FUN_1804a6410(param_1,0x10);
    *(short *)(param_1 + 0xb8) = (short)local_res20;
    *(undefined2 *)(param_1 + 0xbc) = 0x2909;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    uVar11 = FUN_1804d6ae0(param_1);
    if (local_78 == 0x7fff) {
      local_78 = FUN_1804a6370(param_1,local_res8[0]);
    }
    if ((uVar8 & 0xf0000) < 0x30000) {
      bVar22 = 3;
    }
    else {
      bVar22 = (byte)(uVar8 >> 0x10) & 0xf;
    }
    uVar15 = FUN_1804a6370(param_1,0);
    FUN_1804dee00(param_1,uVar11,local_78,uVar15,CONCAT44(uVar13,1 << bVar22));
  }
LAB_1804dc920:
  uVar13 = local_res20;
  **(undefined4 **)(param_1 + 0xa0) = local_res20;
  lVar16 = FUN_1804ab8d0(plVar3,local_res18,2);
  if (lVar16 != 0) {
    FUN_1804df040(param_1,uVar13,0,lVar16);
  }
  return;
}



/* ===== 1804dca20 FUN_1804dca20 ===== */

undefined8 FUN_1804dca20(longlong param_1,uint *param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  short sVar10;
  ushort uVar11;
  int iVar12;
  undefined8 uVar13;
  
  uVar7 = *param_2;
  if ((uVar7 == 0) || (param_2[1] == 0)) {
    return 0;
  }
  puVar2 = (uint *)*param_3;
  uVar9 = *puVar2;
  if (0xfffffff < uVar9) {
    return 0;
  }
  puVar3 = (uint *)param_3[1];
  uVar1 = *puVar3;
  if (0xfffffff < uVar1) {
    return 0;
  }
  if ((((uVar9 & 0x800000) == 0) || (puVar2[1] != 8)) &&
     (((uVar1 & 0x800000) == 0 || (puVar3[1] != 8)))) {
    iVar12 = 0x15;
    uVar13 = 0xb;
    if ((((param_4 < 10) && (((uVar9 | uVar1) >> 0x1a & 1) == 0)) && (puVar2[1] == 4)) &&
       (puVar3[1] == 4)) {
      if ((((uVar9 ^ uVar1) >> 0x17 & 1) == 0) ||
         (((ushort)param_2[1] < 0x8000 &&
          (-1 < *(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(ushort)param_2[1] * 8))))) {
        iVar12 = ((uVar9 & 0x800000) != 0) + 0x13;
        goto LAB_1804dccd6;
      }
      if (((ushort)*param_2 < 0x8000) &&
         (-1 < *(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(ushort)*param_2 * 8))) {
        iVar12 = ((uVar1 & 0x800000) != 0) + 0x13;
        goto LAB_1804dccd6;
      }
    }
  }
  else {
    iVar12 = 0x16;
    uVar13 = 0xc;
  }
  uVar9 = uVar7 >> 0x18 & 0x1f;
  iVar4 = uVar9 * 0x1000000;
  uVar8 = (ushort)uVar9;
  uVar11 = (ushort)iVar12;
  if ((iVar4 + 0xf3000000U & 0xfeffffff) == 0) {
    *(ushort *)(param_1 + 0xbc) = uVar11 | 0x5b00;
    *(ushort *)(param_1 + 0xba) = (uVar11 | 0x80) << 5 | uVar8;
LAB_1804dcbf0:
    *(short *)(param_1 + 0xb8) = (short)uVar7;
    uVar7 = FUN_1804d6ae0(param_1);
    *param_2 = uVar7;
  }
  else if ((iVar4 + 0xeb000000U & 0xfeffffff) != 0) {
    *(ushort *)(param_1 + 0xbc) = uVar11 | 0x5b00;
    *(ushort *)(param_1 + 0xba) = ~((uVar8 - 1) * 0x800) & 0x800 | uVar11 << 5 | 0x13;
    goto LAB_1804dcbf0;
  }
  uVar5 = (undefined2)param_2[1];
  uVar7 = param_2[1] >> 0x18 & 0x1f;
  if ((uVar7 * 0x1000000 + 0xf3000000 & 0xfeffffff) == 0) {
    *(ushort *)(param_1 + 0xbc) = uVar11 | 0x5b00;
    *(undefined2 *)(param_1 + 0xb8) = uVar5;
    *(ushort *)(param_1 + 0xba) = (uVar11 | 0x80) << 5 | (ushort)uVar7;
    uVar7 = FUN_1804d6ae0(param_1);
    uVar5 = (undefined2)uVar7;
LAB_1804dccca:
    param_2[1] = uVar7;
  }
  else if ((uVar7 != 0x15) && (uVar7 != 0x16)) {
    *(ushort *)(param_1 + 0xbc) = uVar11 | 0x5b00;
    *(undefined2 *)(param_1 + 0xb8) = uVar5;
    *(ushort *)(param_1 + 0xba) = ~(((ushort)uVar7 - 1) * 0x800) & 0x800 | uVar11 << 5 | 0x13;
    uVar7 = FUN_1804d6ae0(param_1);
    uVar5 = (undefined2)uVar7;
    goto LAB_1804dccca;
  }
  if (9 < param_4) {
    *(ushort *)(param_1 + 0xb8) = (ushort)*param_2;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    *(ushort *)(param_1 + 0xbc) = (short)param_4 * 0x100 + 0x1f00U | uVar11;
    uVar5 = FUN_1804d6ae0(param_1);
    uVar6 = FUN_1804a6370(param_1,uVar13);
    *(undefined2 *)(param_1 + 0xbc) = 0x548a;
    *(undefined2 *)(param_1 + 0xb8) = uVar6;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    uVar13 = FUN_1804d6ae0(param_1);
    return uVar13;
  }
LAB_1804dccd6:
  if (param_4 == 4) {
    sVar10 = 8;
  }
  else {
    sVar10 = 2;
    if (param_4 == 6) {
      sVar10 = 0;
    }
    if (((iVar12 - 0x14U & 0xfffffffd) == 0) && (sVar10 = 6, param_4 == 6)) {
      sVar10 = 4;
    }
  }
  uVar7 = param_2[1];
  *(ushort *)(param_1 + 0xb8) = (ushort)*param_2;
  *(ushort *)(param_1 + 0xba) = (ushort)uVar7;
  *(ushort *)(param_1 + 0xbc) = sVar10 << 8 | (ushort)iVar12 | 0x80;
  *(undefined4 *)(param_1 + 0x174) = 2;
  return 0x2007ffd;
}



/* ===== 1804dcdd0 FUN_1804dcdd0 ===== */

undefined8
FUN_1804dcdd0(longlong param_1,int *param_2,undefined8 *param_3,longlong *param_4,longlong *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  
  if (**(int **)(param_1 + 0xa0) != 0) {
    if ((int)((longlong)*(undefined8 *)*param_5 >> 0x2f) == -0xb) {
      lVar6 = FUN_1804dc0c0();
      lVar4 = *param_4;
      uVar9 = (ulonglong)*(ushort *)(lVar6 + 10);
      uVar1 = *(uint *)(lVar4 + uVar9 * 0x18);
      bVar5 = (byte)(uVar1 >> 0x18);
      uVar7 = uVar9;
      while (bVar5 >> 4 == 8) {
        uVar7 = (ulonglong)*(ushort *)(lVar4 + uVar7 * 0x18);
        uVar1 = *(uint *)(lVar4 + uVar7 * 0x18);
        bVar5 = (byte)(uVar1 >> 0x18);
      }
      uVar7 = (ulonglong)(uVar1 & 0xffff);
      if ((byte)(uVar1 >> 0x1c) != 2) {
        uVar7 = uVar9;
      }
      puVar8 = (undefined8 *)FUN_1804ab8d0(param_4,uVar7,(int)param_5[2]);
      if (puVar8 == (undefined8 *)0x0) goto LAB_1804dce6e;
LAB_1804dcefa:
      if ((int)((longlong)*puVar8 >> 0x2f) == -9) {
        FUN_1804df400(param_1,param_5);
        return 0;
      }
      goto LAB_1804dcfa0;
    }
LAB_1804dce6e:
    if ((*(int *)(*(longlong *)(param_1 + 0xa0) + 4) != 0) &&
       ((int)((longlong)*(undefined8 *)(*param_5 + 8) >> 0x2f) == -0xb)) {
      lVar6 = FUN_1804dc0c0(param_1);
      lVar4 = *param_4;
      uVar9 = (ulonglong)*(ushort *)(lVar6 + 10);
      uVar1 = *(uint *)(lVar4 + uVar9 * 0x18);
      bVar5 = (byte)(uVar1 >> 0x18);
      uVar7 = uVar9;
      while (bVar5 >> 4 == 8) {
        uVar7 = (ulonglong)*(ushort *)(lVar4 + uVar7 * 0x18);
        uVar1 = *(uint *)(lVar4 + uVar7 * 0x18);
        bVar5 = (byte)(uVar1 >> 0x18);
      }
      uVar7 = (ulonglong)(uVar1 & 0xffff);
      if ((byte)(uVar1 >> 0x1c) != 2) {
        uVar7 = uVar9;
      }
      puVar8 = (undefined8 *)FUN_1804ab8d0(param_4,uVar7,(int)param_5[2]);
      if (puVar8 != (undefined8 *)0x0) goto LAB_1804dcefa;
    }
  }
  if ((int)param_5[2] == 4) {
    iVar2 = *param_2;
    if (((iVar2 == 0) || (iVar3 = param_2[1], iVar3 == 0)) ||
       (*(uint *)*param_3 < 0x10000000 != *(uint *)param_3[1] < 0x10000000)) {
      return 0x1007ffe;
    }
    *(undefined2 *)(param_1 + 0xbc) = 0x889;
    *(short *)(param_1 + 0xb8) = (short)iVar2;
    *(short *)(param_1 + 0xba) = (short)iVar3;
    *(undefined4 *)(param_1 + 0x174) = 2;
    return 0x2007ffd;
  }
LAB_1804dcfa0:
                    /* WARNING: Subroutine does not return */
  FUN_1804954a0(param_1,0xb);
}



/* ===== 1804dcfb0 FUN_1804dcfb0 ===== */

undefined8 FUN_1804dcfb0(longlong param_1,int *param_2,undefined8 *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  ushort uVar8;
  uint uVar9;
  short sVar10;
  uint *puVar11;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = param_2[1];
  if (iVar2 == 0) {
    return 0;
  }
  puVar11 = (uint *)*param_3;
  uVar7 = *(undefined8 *)(param_1 + -0x160);
  uVar6 = *puVar11;
  if (((byte)(uVar6 >> 0x1c) == 2) || ((uVar6 & 0xfc000000) == 0x30000000)) {
    if (((param_4 < 0xc) && ((0x8d0U >> (param_4 & 0x1f) & 1) != 0)) &&
       (((byte)(*(uint *)param_3[1] >> 0x1c) == 2 ||
        ((*(uint *)param_3[1] & 0xfc000000) == 0x30000000)))) {
      if (param_4 != 0xb) {
        if (param_4 == 4) {
          sVar10 = 8;
        }
        else {
          sVar10 = 6;
          if (param_4 == 6) {
            sVar10 = 4;
          }
        }
        *(short *)(param_1 + 0xb8) = (short)iVar1;
        *(ushort *)(param_1 + 0xbc) = sVar10 << 8 | 0x89;
        *(short *)(param_1 + 0xba) = (short)iVar2;
        *(undefined4 *)(param_1 + 0x174) = 2;
        return 0x2007ffd;
      }
      uVar6 = FUN_1804abd40(uVar7,uVar6 & 0xffff);
      if (uVar6 == 0) {
        return 0;
      }
      if ((uVar6 & uVar6 - 1) != 0) {
        return 0;
      }
      iVar1 = param_2[1];
      *(short *)(param_1 + 0xb8) = (short)*param_2;
      *(undefined2 *)(param_1 + 0xbc) = 0x2a15;
      *(short *)(param_1 + 0xba) = (short)iVar1;
      uVar3 = FUN_1804d6ae0(param_1);
      iVar1 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      uVar4 = FUN_1804a6370(param_1,iVar1);
      *(undefined2 *)(param_1 + 0xbc) = 0x2615;
      *(undefined2 *)(param_1 + 0xb8) = uVar3;
      *(undefined2 *)(param_1 + 0xba) = uVar4;
      uVar3 = FUN_1804d6ae0(param_1);
      *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d5;
      *(undefined2 *)(param_1 + 0xb8) = uVar3;
      uVar7 = FUN_1804d6ae0(param_1);
      return uVar7;
    }
    if (1 < param_4 - 10) {
      return 0;
    }
    if (0xfffffff < *(uint *)param_3[1]) {
      return 0;
    }
  }
  else {
    if (param_4 != 10) {
      return 0;
    }
    if (0xfffffff < uVar6) {
      return 0;
    }
    if (((byte)(*(uint *)param_3[1] >> 0x1c) != 2) &&
       ((*(uint *)param_3[1] & 0xfc000000) != 0x30000000)) {
      return 0;
    }
    *param_2 = iVar2;
    param_2[1] = iVar1;
    puVar11 = (uint *)param_3[1];
  }
  uVar6 = param_2[1];
  uVar9 = uVar6 >> 0x18 & 0x1f;
  uVar5 = FUN_1804abd40(uVar7,(ushort)*puVar11);
  iVar1 = uVar9 * 0x1000000;
  uVar8 = (ushort)uVar9;
  if ((iVar1 + 0xf3000000U & 0xfeffffff) == 0) {
    uVar8 = uVar8 | 0x12a0;
  }
  else {
    if ((iVar1 + 0xeb000000U & 0xfeffffff) == 0) goto LAB_1804dd231;
    uVar8 = ~((uVar8 - 1) * 0x800) & 0x800 | 0x2b3;
  }
  *(undefined2 *)(param_1 + 0xbc) = 0x5b15;
  *(short *)(param_1 + 0xb8) = (short)uVar6;
  *(ushort *)(param_1 + 0xba) = uVar8;
  uVar6 = FUN_1804d6ae0(param_1);
LAB_1804dd231:
  uVar3 = FUN_1804a6410(param_1,uVar5);
  *(undefined2 *)(param_1 + 0xbc) = 0x2b15;
  *(short *)(param_1 + 0xb8) = (short)uVar6;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  uVar3 = FUN_1804d6ae0(param_1);
  *(short *)(param_1 + 0xb8) = (short)*param_2;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  *(ushort *)(param_1 + 0xbc) = (short)param_4 * 0x100 + 0x1f00U | 9;
  uVar3 = FUN_1804d6ae0(param_1);
  uVar5 = FUN_1804ab7b0(uVar7,(ushort)*puVar11 | 0x20030000,8);
  uVar4 = FUN_1804a6370(param_1,uVar5);
  *(undefined2 *)(param_1 + 0xbc) = 0x548a;
  *(undefined2 *)(param_1 + 0xb8) = uVar4;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  uVar7 = FUN_1804d6ae0(param_1);
  return uVar7;
}



/* ===== 1804dd300 FUN_1804dd300 ===== */

void FUN_1804dd300(longlong param_1,undefined8 param_2,uint param_3,ulonglong *param_4)

{
  int iVar1;
  
  if ((param_3 & 0x1f000000) == 0x4000000) {
    iVar1 = FUN_1804972a0(*param_4 & 0x7fffffffffff,param_4);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xba) = 0x5e8e0000;
      *(short *)(param_1 + 0xb8) = (short)param_3;
      param_3 = FUN_1804d6ae0(param_1);
    }
  }
  FUN_1804de8e0(param_1,param_2,0,param_3,param_4);
  return;
}



/* ===== 1804dd380 FUN_1804dd380 ===== */

char FUN_1804dd380(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  
  if ((int)((longlong)*param_2 >> 0x2f) != -0xb) {
    return '\0';
  }
  puVar1 = (uint *)FUN_1804aba40(param_1,*(undefined2 *)((*param_2 & 0x7fffffffffff) + 10));
  if ((byte)(*puVar1 >> 0x1c) == 5) {
    puVar1 = (uint *)(*param_1 + (ulonglong)(*puVar1 & 0xffff) * 0x18);
  }
  if ((*puVar1 & 0xfc800000) == 0x800000) {
    return (puVar1[1] == 8) + '\v';
  }
  return '\v';
}



/* ===== 1804dd410 FUN_1804dd410 ===== */

undefined8 FUN_1804dd410(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  ushort *puVar17;
  ushort uVar18;
  longlong lVar19;
  undefined2 local_res8;
  ulonglong local_res20;
  
  plVar3 = *(longlong **)(param_1 + -0x160);
  uVar13 = (ulonglong)*(ushort *)(param_3 + 10);
  lVar4 = *plVar3;
  uVar15 = *(uint *)(lVar4 + uVar13 * 0x18);
  bVar1 = (byte)(uVar15 >> 0x18);
  while (bVar1 >> 4 == 8) {
    uVar13 = (ulonglong)*(ushort *)(lVar4 + uVar13 * 0x18);
    uVar15 = *(uint *)(lVar4 + uVar13 * 0x18);
    bVar1 = (byte)(uVar15 >> 0x18);
  }
  puVar17 = (ushort *)(lVar4 + uVar13 * 0x18);
  uVar18 = 9;
  if ((byte)(uVar15 >> 0x1c) == 2) {
    uVar18 = 9;
    if (*(int *)(puVar17 + 2) != 8) {
      uVar18 = 5;
    }
    do {
      uVar15 = *(uint *)(lVar4 + (ulonglong)*puVar17 * 0x18);
      puVar17 = (ushort *)(lVar4 + (ulonglong)*puVar17 * 0x18);
    } while ((byte)(uVar15 >> 0x1c) == 8);
  }
  if ((byte)(uVar15 >> 0x1c) != 6) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0xb8) = **(undefined2 **)(param_1 + 0xa0);
  *(ushort *)(param_1 + 0xbc) = uVar18 | 0x4500;
  *(undefined2 *)(param_1 + 0xba) = 0x15;
  local_res8 = FUN_1804d6ae0(param_1);
  puVar14 = puVar17;
  do {
    uVar2 = *(uint *)(*plVar3 + (ulonglong)*puVar14 * 0x18);
    puVar14 = (ushort *)(*plVar3 + (ulonglong)*puVar14 * 0x18);
    uVar16 = uVar2 >> 0x1c;
  } while (uVar16 == 8);
  uVar10 = FUN_1804de010(plVar3);
  if (uVar18 == 9) {
    local_res20 = *(ulonglong *)(param_3 + 0x10);
  }
  else {
    local_res20 = (ulonglong)*(uint *)(param_3 + 0x10);
  }
  local_res20 = local_res20 >> 2;
  puVar12 = (undefined8 *)FUN_1804926a0(*(undefined8 *)(param_1 + 0x80),plVar3[4],&local_res20);
  if ((int)((longlong)*puVar12 >> 0x2f) == -3) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,5);
  }
  if (uVar16 == 4) {
    uVar10 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else if ((((0xfffffff < uVar2) && (uVar16 != 2)) && (uVar16 != 5)) || (uVar10 == 10))
  goto LAB_1804dd8da;
  if ((uVar15 >> 0x17 & 1) != 0) {
    uVar8 = FUN_1804a6370(param_1,((longlong)puVar17 - *plVar3) / 0x18);
    *(undefined2 *)(param_1 + 0xb8) = local_res8;
    *(undefined2 *)(param_1 + 0xbc) = 0x6400;
    *(undefined2 *)(param_1 + 0xba) = uVar8;
    local_res8 = FUN_1804d6ae0(param_1);
  }
  uVar8 = FUN_1804dd8f0(param_1,param_2,plVar3,puVar17);
  uVar18 = (ushort)uVar10;
  *(undefined2 *)(param_1 + 0xb8) = uVar8;
  *(ushort *)(param_1 + 0xbc) = uVar18 | 0x6300;
  *(undefined2 *)(param_1 + 0xba) = local_res8;
  uVar11 = FUN_1804d6ae0(param_1);
  uVar8 = (undefined2)uVar11;
  if ((uVar2 & 0xf8000000) == 0x8000000) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    lVar5 = *(longlong *)(lVar4 + 0x20);
    uVar13 = *(ulonglong *)(lVar5 + -8);
    if ((uVar13 & 3) != 0) {
LAB_1804dd8da:
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0x17);
    }
    if ((char)((uint)*(undefined4 *)(uVar13 - 4) >> 0x18) == '\x01') {
      uVar11 = 0x7fff;
    }
    else {
      if (*(int *)(param_1 + 0xfc) < 1) goto LAB_1804dd8da;
      uVar6 = *(undefined8 *)(lVar4 + 0x28);
      uVar7 = *(undefined8 *)(param_1 + 0x88);
      uVar11 = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + -8);
      *(ulonglong *)(param_1 + 0x88) = uVar13;
      bVar1 = *(byte *)(uVar13 - 3);
      *(longlong *)(lVar4 + 0x28) = lVar5;
      lVar19 = (ulonglong)bVar1 + 2;
      *(longlong *)(lVar4 + 0x20) = lVar5 + lVar19 * -8;
      *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + -8) = 0x1007ffe;
      *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + lVar19 * -4;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) - (int)lVar19;
      *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + -1;
      *(uint *)(param_1 + 0xac) = bVar1 + 1;
      FUN_1804bc6f0(param_1);
      *(longlong *)(lVar4 + 0x20) = lVar5;
      *(undefined8 *)(lVar4 + 0x28) = uVar6;
      *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + lVar19 * 4;
      *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + (int)lVar19;
      *(undefined4 *)(param_1 + 0xac) = 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + -8) = uVar11;
      *(undefined8 *)(param_1 + 0x88) = uVar7;
      uVar9 = FUN_1804a6370(param_1,0);
      *(undefined2 *)(param_1 + 0xb8) = uVar8;
      uVar11 = 0x2007ffd;
      *(undefined2 *)(param_1 + 0xba) = uVar9;
      *(undefined2 *)(param_1 + 0xbc) = 0x990;
      *(undefined4 *)(param_1 + 0x174) = 3;
    }
  }
  else {
    if (((uVar10 < 0x17) && ((0x600220U >> (uVar10 & 0x1f) & 1) != 0)) || (uVar16 == 5)) {
      uVar9 = FUN_1804a6370(param_1,uVar15 & 0xffff);
      *(undefined2 *)(param_1 + 0xb8) = uVar9;
      *(undefined2 *)(param_1 + 0xbc) = 0x548a;
      *(undefined2 *)(param_1 + 0xba) = uVar8;
    }
    else if ((uVar10 == 0xd) || (uVar10 == 0x14)) {
      *(undefined2 *)(param_1 + 0xbc) = 0x5b0e;
      *(ushort *)(param_1 + 0xba) = uVar18 | 0x1c0;
      *(undefined2 *)(param_1 + 0xb8) = uVar8;
    }
    else if ((uVar10 - 0xf & 0xfffffffd) == 0) {
      *(undefined2 *)(param_1 + 0xbc) = 0x5b13;
      *(ushort *)(param_1 + 0xba) = uVar18 | 0xa60;
      *(undefined2 *)(param_1 + 0xb8) = uVar8;
    }
    else {
      if ((uVar10 - 0x10 & 0xfffffffd) != 0) goto LAB_1804dd884;
      *(undefined2 *)(param_1 + 0xbc) = 0x5b13;
      *(ushort *)(param_1 + 0xba) = uVar18 | 0x260;
      *(undefined2 *)(param_1 + 0xb8) = uVar8;
    }
    uVar11 = FUN_1804d6ae0(param_1);
  }
LAB_1804dd884:
  **(undefined4 **)(param_1 + 0xa0) = uVar11;
  *(undefined1 *)(param_1 + 0xb5) = 1;
  return 1;
}



/* ===== 1804dd8f0 FUN_1804dd8f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804dd8f0(longlong param_1,longlong *param_2,longlong *param_3,uint *param_4)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int *piVar15;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined4 local_d8;
  undefined4 local_d4 [31];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_108;
  uVar14 = (ulonglong)(ushort)param_4[2];
  if ((ushort)param_4[2] != 0) {
    do {
      if ((byte)((uint)*(undefined4 *)(*param_3 + uVar14 * 0x18) >> 0x1c) != 8) break;
      uVar2 = *(ushort *)(*param_3 + 8 + uVar14 * 0x18);
      uVar14 = (ulonglong)uVar2;
    } while (uVar2 != 0);
  }
  piVar15 = (int *)(*(longlong *)(param_1 + 0xa0) + 4);
  local_d8 = 0x7fff;
  if (*piVar15 != 0) {
    lVar10 = *param_2;
    uVar12 = 0;
    uVar13 = *param_4;
    do {
      lVar10 = lVar10 + 8;
      if (0x1f < (uint)uVar12) {
LAB_1804ddb2a:
                    /* WARNING: Subroutine does not return */
        FUN_1804954a0(param_1,0x17);
      }
      if ((int)uVar14 == 0) {
        if ((uVar13 & 0x800000) == 0) goto LAB_1804ddb2a;
        uVar11 = FUN_1804b4470(param_3,lVar10);
      }
      else {
        uVar11 = (uint)*(ushort *)(*param_3 + uVar14 * 0x18);
        uVar14 = (ulonglong)*(ushort *)(*param_3 + 8 + uVar14 * 0x18);
      }
      lVar4 = *param_3;
      uVar9 = (ulonglong)uVar11;
      uVar11 = *(uint *)(lVar4 + uVar9 * 0x18);
      bVar5 = (byte)(uVar11 >> 0x18);
      while (bVar5 >> 4 == 8) {
        uVar9 = (ulonglong)*(ushort *)(lVar4 + uVar9 * 0x18);
        uVar11 = *(uint *)(lVar4 + uVar9 * 0x18);
        bVar5 = (byte)(uVar11 >> 0x18);
      }
      if (((0xfffffff < uVar11) && (uVar11 >> 0x1c != 2)) && (uVar11 >> 0x1c != 5))
      goto LAB_1804ddb2a;
      puVar1 = (uint *)(lVar4 + uVar9 * 0x18);
      local_e8 = lVar10;
      uVar7 = FUN_1804de8e0(param_1,puVar1,0,*piVar15);
      uVar11 = *puVar1;
      if (((uVar11 & 0xf4000000) == 0) && (uVar3 = puVar1[1], uVar3 < 4)) {
        *(undefined2 *)(param_1 + 0xbc) = 0x5b13;
        *(short *)(param_1 + 0xb8) = (short)uVar7;
        if ((uVar11 >> 0x17 & 1) == 0) {
          uVar6 = 0xa71;
          uVar8 = 0xa6f;
        }
        else {
          uVar6 = 0x272;
          uVar8 = 0x270;
        }
        if (uVar3 == 1) {
          uVar6 = uVar8;
        }
        *(undefined2 *)(param_1 + 0xba) = uVar6;
        uVar7 = FUN_1804d6ae0(param_1);
      }
      piVar15 = piVar15 + 1;
      local_d4[uVar12 - 1] = uVar7;
      uVar11 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (*piVar15 != 0);
    uVar14 = 1;
    uVar7 = local_d8;
    if (1 < uVar11) {
      do {
        *(short *)(param_1 + 0xb8) = (short)uVar7;
        *(undefined2 *)(param_1 + 0xbc) = 0x6400;
        *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(local_d4 + (uVar14 - 1));
        uVar7 = FUN_1804d6ae0(param_1);
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
      } while (uVar13 < uVar11);
    }
  }
  return;
}



/* ===== 1804ddb40 FUN_1804ddb40 ===== */

undefined4 FUN_1804ddb40(longlong param_1,longlong param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xba) = 0x45130016;
  *(undefined2 *)(param_1 + 0xb8) = param_3;
  uVar2 = FUN_1804d6ae0();
  uVar3 = FUN_1804a6370(param_1,uVar1);
  *(undefined2 *)(param_1 + 0xbc) = 0x893;
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  FUN_1804d6ae0(param_1);
  return uVar1;
}



/* ===== 1804ddbb0 FUN_1804ddbb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ddbb0(longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint *param_5
                  )

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_198 [32];
  uint local_178;
  undefined4 local_168;
  int local_164;
  undefined4 local_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  undefined4 auStack_14c [61];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_198;
  local_168 = param_2;
  local_160 = param_3;
  if ((ushort)param_4 < 0x8000) {
    uVar13 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(param_4 & 0xffff) * 8);
    if (uVar13 == 0) {
      return;
    }
    if (uVar13 < 0x81) {
      uVar11 = 10;
      if (param_5 == (uint *)0x0) {
LAB_1804ddc9f:
        uVar10 = 8;
        iVar12 = 1;
        if ((int)uVar11 == 10) {
          for (iVar4 = 0x1f; 8U >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
          uVar11 = (ulonglong)(iVar4 * 2 + 0x10);
        }
LAB_1804ddcbd:
        uVar6 = 0;
        uVar9 = 0;
        while( true ) {
          uVar8 = uVar6 + uVar10;
          while( true ) {
            uVar5 = (uint)uVar9;
            local_164 = iVar12;
            if (uVar13 < uVar8) break;
            if (0xf < uVar5) {
              uVar5 = 0;
              goto LAB_1804ddd03;
            }
            (&uStack_154)[uVar9 * 4 + -1] = uVar6;
            (&uStack_154)[uVar9 * 4] = (uint)uVar11;
            uVar8 = uVar6 + uVar10 * 2;
            uVar9 = (ulonglong)(uVar5 + 1);
            uVar6 = uVar6 + uVar10;
          }
          if (uVar13 <= uVar6) break;
          uVar10 = uVar10 >> 1;
          uVar11 = (ulonglong)((uint)uVar11 - 2);
        }
      }
      else {
        iVar12 = 0;
        plVar1 = *(longlong **)(param_1 + -0x160);
        local_164 = 0;
        if ((byte)(*param_5 >> 0x1c) == 3) {
          do {
            uVar10 = *param_5;
            param_5 = (uint *)(*plVar1 + (ulonglong)(ushort)uVar10 * 0x18);
          } while ((byte)((uint)*(undefined4 *)(*plVar1 + (ulonglong)(ushort)uVar10 * 0x18) >> 0x1c)
                   == 8);
          iVar4 = FUN_1804de010(plVar1,param_5);
          uVar11 = (ulonglong)iVar4;
          if (iVar4 == 10) goto LAB_1804ddc9f;
          uVar10 = (uint)(byte)(&DAT_18056eea8)[uVar11];
          goto LAB_1804ddcbd;
        }
        if ((*param_5 >> 0x17 & 1) != 0) goto LAB_1804ddc9f;
        uVar5 = FUN_1804dde90(&local_158,plVar1);
      }
LAB_1804ddd03:
      uVar2 = local_168;
      if (uVar5 != 0) {
        uVar11 = 0;
        uVar10 = 0;
        uVar13 = 0;
        if (uVar5 != 0) {
LAB_1804ddd31:
          do {
            uVar6 = FUN_1804a6410(param_1,(&uStack_154)[uVar11 * 4 + -1]);
            *(undefined2 *)(param_1 + 0xbc) = 0x2909;
            *(short *)(param_1 + 0xb8) = (short)local_160;
            *(short *)(param_1 + 0xba) = (short)uVar6;
            uVar3 = FUN_1804d6ae0(param_1);
            *(undefined2 *)(param_1 + 0xb8) = uVar3;
            *(ushort *)(param_1 + 0xbc) = (ushort)(&uStack_154)[uVar11 * 4] | 0x4600;
            *(undefined2 *)(param_1 + 0xba) = 0;
            uVar7 = FUN_1804d6ae0(param_1);
            uVar8 = (int)uVar11 + 1;
            auStack_14c[uVar11 * 4] = uVar7;
            uVar10 = uVar10 + 1;
            (&uStack_154)[uVar11 * 4 + 1] = uVar6;
            uVar11 = (ulonglong)uVar8;
            if (uVar10 < 4) {
              if (uVar8 < uVar5) goto LAB_1804ddd31;
            }
            uVar10 = 0;
            iVar12 = local_164;
            for (; local_164 = iVar12, uVar13 < uVar8; uVar13 = uVar13 + 1) {
              uVar9 = (ulonglong)uVar13;
              *(undefined2 *)(param_1 + 0xbc) = 0x2909;
              *(short *)(param_1 + 0xb8) = (short)uVar2;
              *(short *)(param_1 + 0xba) = (short)(&uStack_154)[uVar9 * 4 + 1];
              uVar3 = FUN_1804d6ae0(param_1);
              *(undefined2 *)(param_1 + 0xb8) = uVar3;
              uVar3 = *(undefined2 *)(auStack_14c + uVar9 * 4);
              *(ushort *)(param_1 + 0xbc) = (ushort)(&uStack_154)[uVar9 * 4] | 0x4e00;
              *(undefined2 *)(param_1 + 0xba) = uVar3;
              FUN_1804d6ae0(param_1);
              iVar12 = local_164;
            }
          } while (uVar8 < uVar5);
        }
        if (iVar12 == 0) {
          return;
        }
        goto LAB_1804dde4f;
      }
    }
  }
  local_178 = param_4;
  FUN_1804a5e80(param_1,99,param_2,param_3);
LAB_1804dde4f:
  *(undefined4 *)(param_1 + 0xba) = 0x5a000000;
  *(undefined2 *)(param_1 + 0xb8) = 0;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804dde90 FUN_1804dde90 ===== */

uint FUN_1804dde90(longlong param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint *puVar10;
  bool bVar11;
  
  uVar2 = *(ushort *)(param_3 + 8);
  uVar7 = 0;
  do {
    do {
      while( true ) {
        uVar5 = uVar7;
        if (uVar2 == 0) {
          return uVar5;
        }
        uVar8 = (ulonglong)uVar2;
        lVar3 = *param_2;
        puVar1 = (uint *)(lVar3 + uVar8 * 0x18);
        uVar2 = (ushort)puVar1[2];
        uVar6 = *(uint *)(lVar3 + uVar8 * 0x18) >> 0x1c;
        uVar7 = uVar5;
        if (uVar6 == 9) break;
        if (uVar6 != 0xb) {
          return 0;
        }
      }
    } while (*(longlong *)(puVar1 + 4) == 0);
    puVar10 = puVar1;
    do {
      uVar8 = (ulonglong)(ushort)*puVar10;
      puVar10 = (uint *)(lVar3 + uVar8 * 0x18);
      uVar7 = *(uint *)(lVar3 + uVar8 * 0x18);
    } while (uVar7 >> 0x1c == 8);
    if (uVar7 >> 0x1c == 5) {
      uVar8 = (ulonglong)(uVar7 & 0xffff);
      uVar7 = *(uint *)(lVar3 + uVar8 * 0x18);
    }
    if (uVar7 < 0x10000000) {
      uVar6 = *(uint *)(lVar3 + 4 + uVar8 * 0x18);
      if ((uVar7 >> 0x1a & 1) == 0) {
        uVar4 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> uVar4 == 0; uVar4 = uVar4 - 1) {
          }
        }
        if (3 < uVar4) {
          return 0;
        }
        uVar7 = uVar7 >> 0x17 & 1 | uVar4 * 2;
        iVar9 = uVar7 + 0xf;
        if (uVar7 == 0xfffffffb) {
          return 0;
        }
      }
      else {
        if (uVar6 != 8) {
          bVar11 = uVar6 == 4;
          goto LAB_1804ddf9e;
        }
        iVar9 = 0xe;
      }
    }
    else if ((byte)(uVar7 >> 0x1c) == 2) {
      iVar9 = 5;
      if (*(int *)(lVar3 + 4 + uVar8 * 0x18) == 8) {
        iVar9 = 9;
      }
    }
    else {
      if ((uVar7 & 0xf4000000) != 0x34000000) {
        return 0;
      }
      iVar9 = *(int *)(lVar3 + 4 + uVar8 * 0x18);
      if (iVar9 == 0x10) {
        iVar9 = 0xe;
      }
      else {
        bVar11 = iVar9 == 8;
LAB_1804ddf9e:
        if (!bVar11) {
          return 0;
        }
        iVar9 = 0xd;
      }
    }
    if (0xf < uVar5) {
      return 0;
    }
    *(uint *)(param_1 + (ulonglong)uVar5 * 0x10) = puVar1[1];
    *(int *)(param_1 + 4 + (ulonglong)uVar5 * 0x10) = iVar9;
    uVar7 = uVar5 + 1;
    if ((*puVar10 & 0xf4000000) == 0x34000000) {
      if (0xf < uVar7) {
        return 0;
      }
      *(uint *)(param_1 + (ulonglong)uVar7 * 0x10) = (puVar10[1] >> 1) + puVar1[1];
      *(int *)(param_1 + 4 + (ulonglong)uVar7 * 0x10) = iVar9;
      uVar7 = uVar5 + 2;
    }
  } while( true );
}



/* ===== 1804de010 FUN_1804de010 ===== */

int FUN_1804de010(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if ((byte)(*param_2 >> 0x1c) == 5) {
    param_2 = (uint *)(*param_1 + (ulonglong)(*param_2 & 0xffff) * 0x18);
  }
  uVar1 = *param_2;
  if (uVar1 < 0x10000000) {
    uVar2 = param_2[1];
    if ((uVar1 >> 0x1a & 1) == 0) {
      uVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> uVar3 == 0; uVar3 = uVar3 - 1) {
        }
      }
      if (uVar3 < 4) {
        return (uVar3 * 2 | uVar1 >> 0x17 & 1) + 0xf;
      }
    }
    else {
      if (uVar2 == 8) {
        return 0xe;
      }
      if (uVar2 == 4) {
        return 0xd;
      }
    }
  }
  else {
    if ((byte)(uVar1 >> 0x1c) == 2) {
      iVar4 = 9;
      if (param_2[1] != 8) {
        iVar4 = 5;
      }
      return iVar4;
    }
    if ((uVar1 & 0xf4000000) == 0x34000000) {
      if (param_2[1] == 0x10) {
        return 0xe;
      }
      iVar4 = 10;
      if (param_2[1] == 8) {
        iVar4 = 0xd;
      }
      return iVar4;
    }
  }
  return 10;
}



/* ===== 1804de0c0 FUN_1804de0c0 ===== */

uint FUN_1804de0c0(longlong param_1,uint *param_2,uint *param_3,int param_4,uint param_5,
                  double *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ushort uVar13;
  bool bVar14;
  
  iVar11 = param_4;
  iVar6 = FUN_1804de010(*(undefined8 *)(param_1 + -0x160));
  iVar7 = FUN_1804de010(*(undefined8 *)(param_1 + -0x160),param_3);
  if (((3 < (byte)(*param_2 >> 0x1c)) || (uVar10 = *param_3, 3 < (byte)(uVar10 >> 0x1c))) ||
     (uVar1 = ((uint)(0xf436fff5fff7f021 >> (sbyte)((uVar10 >> 0x1a & 0xf) << 2)) & 0xf) +
              ((uint)(0xf436fff5fff7f021 >> (sbyte)((*param_2 >> 0x1a & 0xf) << 2)) & 0xf) * 8,
     0x3f < uVar1)) goto switchD_1804de186_caseD_3;
  uVar2 = param_2[1];
  uVar12 = param_3[1];
  uVar9 = (ushort)iVar7;
  uVar13 = (ushort)iVar6;
  uVar4 = (undefined2)param_4;
  switch(uVar1) {
  case 0:
  case 0x2d:
  case 0x2e:
  case 0x2f:
    break;
  case 1:
  case 2:
    if (iVar7 == 10) goto switchD_1804de186_caseD_3;
    if (iVar7 - 0xdU < 2) {
      uVar5 = FUN_1804a6540(param_1,0);
    }
    else if (iVar7 - 0x15U < 2) {
      uVar5 = FUN_1804a6410(param_1,0);
    }
    else {
      uVar5 = FUN_1804a6370(param_1,0);
    }
    if (param_6 == (double *)0x0) {
      bVar14 = false;
    }
    else {
      if (param_6 == (double *)0x1) goto LAB_1804de1f0;
      uVar10 = param_3[1];
      if ((*param_3 & 0x4000000) == 0) {
        if (uVar10 == 1) {
          bVar14 = *(char *)param_6 == '\0';
        }
        else if (uVar10 == 2) {
          bVar14 = *(short *)param_6 == 0;
        }
        else if (uVar10 == 4) {
          bVar14 = *(float *)param_6 == 0.0;
        }
        else {
          bVar14 = *param_6 == 0.0;
        }
        bVar14 = !bVar14;
      }
      else if (uVar10 == 4) {
        if (*(float *)param_6 != 0.0) goto LAB_1804de1f0;
        bVar14 = false;
      }
      else if (*param_6 == 0.0) {
        bVar14 = false;
      }
      else {
LAB_1804de1f0:
        bVar14 = true;
      }
    }
    uVar13 = 0x880;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    if (bVar14 != false) {
      uVar13 = 0x980;
    }
    *(ushort *)(param_1 + 0xbc) = uVar13 | uVar9;
    *(undefined2 *)(param_1 + 0xb8) = (undefined2)param_5;
    FUN_1804d6ae0(param_1);
    param_5 = FUN_1804a6370(param_1,bVar14);
    goto LAB_1804de74a;
  default:
    goto switchD_1804de186_caseD_3;
  case 8:
  case 9:
switchD_1804de186_caseD_8:
    if ((iVar6 == 10) || (iVar7 == 10)) goto switchD_1804de186_caseD_3;
    if (uVar2 == 8) {
      if ((uVar12 < 8) && ((uVar10 >> 0x17 & 1) == 0)) {
        *(ushort *)(param_1 + 0xbc) = uVar13 | 0x5b00;
        if (uVar12 < 4) {
          iVar7 = 0x13;
        }
        *(undefined2 *)(param_1 + 0xb8) = (undefined2)param_5;
        *(ushort *)(param_1 + 0xba) = (ushort)iVar7 | uVar13 << 5 | 0x800;
        goto LAB_1804de73b;
      }
    }
    else if ((uVar2 < 8) && (uVar12 == 8)) {
      if (uVar2 < 4) {
        uVar13 = 0x13;
      }
      uVar9 = uVar13 << 5 | (ushort)iVar7;
      goto LAB_1804de318;
    }
    if (iVar7 == 0x13) {
      param_5 = FUN_1804e4020(param_1,param_5);
      goto LAB_1804de74a;
    }
    break;
  case 10:
    goto LAB_1804de2d6;
  case 0xb:
    *(undefined2 *)(param_1 + 0xba) = 0;
    *(ushort *)(param_1 + 0xbc) = uVar9 | 0x4600;
    *(undefined2 *)(param_1 + 0xb8) = (undefined2)param_5;
    param_5 = FUN_1804d6ae0(param_1);
LAB_1804de2d6:
    if ((iVar6 == 10) || (iVar7 == 10)) goto switchD_1804de186_caseD_3;
LAB_1804de780:
    uVar13 = (ushort)iVar6;
    if (uVar2 < 8) {
      *(short *)(param_1 + 0xb8) = (short)param_5;
      *(ushort *)(param_1 + 0xba) = uVar9 | 0x12a0;
      *(undefined2 *)(param_1 + 0xbc) = 0x5b15;
      uVar5 = FUN_1804d6ae0(param_1);
      *(undefined2 *)(param_1 + 0xb8) = uVar5;
      if (uVar2 < 4) {
        uVar13 = 0x13;
      }
      *(ushort *)(param_1 + 0xbc) = uVar13 | 0x5b00;
      *(ushort *)(param_1 + 0xba) = uVar13 << 5 | 0x15;
    }
    else {
LAB_1804de712:
      *(ushort *)(param_1 + 0xbc) = uVar13 | 0x5b00;
      *(ushort *)(param_1 + 0xba) = (uVar13 | 0x80) << 5 | uVar9;
LAB_1804de734:
      *(short *)(param_1 + 0xb8) = (short)param_5;
    }
LAB_1804de73b:
    param_5 = FUN_1804d6ae0(param_1);
    goto LAB_1804de74a;
  case 0xd:
  case 0xe:
    if ((~uVar2 & 8) != 0) {
      uVar10 = 0x800000;
      iVar7 = 0x16;
      uVar12 = 8;
      goto switchD_1804de186_caseD_8;
    }
    if (uVar2 < 4) {
      uVar13 = 0x13;
    }
    uVar9 = uVar13 << 5 | 9;
LAB_1804de318:
    *(ushort *)(param_1 + 0xbc) = uVar13 | 0x5b00;
    *(undefined2 *)(param_1 + 0xb8) = (undefined2)param_5;
    *(ushort *)(param_1 + 0xba) = uVar9;
    goto LAB_1804de73b;
  case 0x10:
  case 0x11:
    goto switchD_1804de186_caseD_10;
  case 0x12:
switchD_1804de186_caseD_12:
    goto LAB_1804de4c1;
  case 0x13:
    *(undefined2 *)(param_1 + 0xba) = 0;
    *(ushort *)(param_1 + 0xbc) = uVar9 | 0x4600;
    *(undefined2 *)(param_1 + 0xb8) = (undefined2)param_5;
    param_5 = FUN_1804d6ae0(param_1);
LAB_1804de4c1:
    if ((iVar6 == 10) || (iVar7 == 10)) goto switchD_1804de186_caseD_3;
    if (iVar6 == iVar7) goto LAB_1804de74a;
    *(ushort *)(param_1 + 0xbc) = uVar13 | 0x5b00;
    *(ushort *)(param_1 + 0xba) = uVar13 << 5 | uVar9;
    goto LAB_1804de734;
  case 0x19:
  case 0x1a:
    uVar5 = FUN_1804a6410(param_1,uVar2 >> 1);
    *(undefined2 *)(param_1 + 0xbc) = 0x2909;
    *(undefined2 *)(param_1 + 0xb8) = uVar4;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    uVar5 = FUN_1804d6ae0(param_1);
    uVar3 = FUN_1804a6540(param_1,0);
    *(undefined2 *)(param_1 + 0xb8) = uVar5;
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    *(ushort *)(param_1 + 0xbc) = uVar13 | 0x4e00;
    FUN_1804d6ae0(param_1);
    if ((uVar10 >> 0x1a & 1) != 0) goto switchD_1804de186_caseD_12;
switchD_1804de186_caseD_10:
    if ((iVar6 == 10) || (iVar7 == 10)) goto switchD_1804de186_caseD_3;
    *(ushort *)(param_1 + 0xbc) = uVar13 | 0x5b00;
    *(undefined2 *)(param_1 + 0xb8) = (undefined2)param_5;
    if (uVar12 < 4) {
      iVar7 = 0x13;
    }
    *(ushort *)(param_1 + 0xba) = (ushort)iVar7 | uVar13 << 5;
    goto LAB_1804de73b;
  case 0x1b:
    if ((iVar6 != 10) && (iVar7 != 10)) {
      *(undefined2 *)(param_1 + 0xb8) = (undefined2)param_5;
      *(ushort *)(param_1 + 0xbc) = uVar9 | 0x4600;
      *(undefined2 *)(param_1 + 0xba) = 0;
      uVar3 = FUN_1804d6ae0(param_1);
      uVar5 = FUN_1804a6410(param_1,uVar12 >> 1);
      *(undefined2 *)(param_1 + 0xb8) = (undefined2)param_5;
      *(undefined2 *)(param_1 + 0xbc) = 0x2909;
      *(undefined2 *)(param_1 + 0xba) = uVar5;
      uVar5 = FUN_1804d6ae0(param_1);
      *(ushort *)(param_1 + 0xbc) = uVar9 | 0x4600;
      *(undefined2 *)(param_1 + 0xb8) = uVar5;
      *(undefined2 *)(param_1 + 0xba) = 0;
      uVar5 = FUN_1804d6ae0(param_1);
      if (iVar6 != iVar7) {
        uVar9 = uVar13 << 5 | uVar9;
        *(undefined2 *)(param_1 + 0xb8) = uVar3;
        *(ushort *)(param_1 + 0xba) = uVar9;
        *(ushort *)(param_1 + 0xbc) = uVar13 | 0x5b00;
        uVar3 = FUN_1804d6ae0(param_1);
        *(ushort *)(param_1 + 0xbc) = uVar13 | 0x5b00;
        *(undefined2 *)(param_1 + 0xb8) = uVar5;
        *(ushort *)(param_1 + 0xba) = uVar9;
        uVar5 = FUN_1804d6ae0(param_1);
      }
      *(ushort *)(param_1 + 0xbc) = uVar13 | 0x4e00;
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      *(undefined2 *)(param_1 + 0xba) = uVar3;
      FUN_1804d6ae0(param_1);
      uVar3 = FUN_1804a6410(param_1,uVar2 >> 1);
      *(undefined2 *)(param_1 + 0xbc) = 0x2909;
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      *(undefined2 *)(param_1 + 0xba) = uVar3;
      uVar4 = FUN_1804d6ae0(param_1);
      *(ushort *)(param_1 + 0xbc) = uVar13 | 0x4e00;
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      *(undefined2 *)(param_1 + 0xba) = uVar5;
      FUN_1804d6ae0(param_1);
      return 0;
    }
    goto switchD_1804de186_caseD_3;
  case 0x29:
    if (iVar7 == 10) goto switchD_1804de186_caseD_3;
    break;
  case 0x2a:
    if (iVar7 == 10) goto switchD_1804de186_caseD_3;
    if (uVar2 != 8) {
      iVar6 = 0x14;
      goto LAB_1804de780;
    }
    param_5 = param_5 & 0xffff;
    iVar6 = 0x15;
    uVar13 = 0x15;
    goto LAB_1804de712;
  case 0x36:
  case 0x3f:
    if (iVar11 != 0) {
      uVar8 = FUN_1804a6370(param_1,uVar2);
      FUN_1804ddbb0(param_1,param_4,param_5,uVar8,param_2);
      return 0;
    }
switchD_1804de186_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0x16);
  }
LAB_1804de74a:
  if (param_4 != 0) {
    *(short *)(param_1 + 0xba) = (short)param_5;
    *(ushort *)(param_1 + 0xbc) = (ushort)iVar6 | 0x4e00;
    *(undefined2 *)(param_1 + 0xb8) = uVar4;
    FUN_1804d6ae0(param_1);
    param_5 = 0;
  }
  return param_5;
}



/* ===== 1804de8e0 FUN_1804de8e0 ===== */

void FUN_1804de8e0(longlong param_1,uint *param_2,undefined4 param_3,uint param_4,ulonglong *param_5
                  )

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  ushort *puVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined2 uVar12;
  byte bVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int local_res20 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar17;
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  plVar1 = *(longlong **)(param_1 + -0x160);
  uVar14 = param_4 >> 0x18 & 0x1f;
  if (uVar14 - 0xf < 5) {
    puVar15 = (undefined8 *)(ulonglong)((*param_5 & 0x7fffffffffffffff) != 0);
    puVar9 = (uint *)(*plVar1 + 0xd8);
    goto LAB_1804ded97;
  }
  uVar8 = param_4 & 0x1f000000;
  if (uVar8 == 0xe000000) {
    puVar15 = (undefined8 *)(ulonglong)((*param_5 & 0x7fffffffffffffff) != 0);
    puVar9 = (uint *)(*plVar1 + 0x180);
    goto LAB_1804ded97;
  }
  puVar15 = (undefined8 *)0x0;
  if (uVar14 - 1 < 2) {
    param_4 = FUN_1804a6370(param_1,uVar8 == 0x2000000);
    uVar16 = 3;
  }
  else {
    uVar16 = 0x13;
    if (uVar8 == 0) {
      param_4 = FUN_1804a66d0(param_1,0x19,0);
    }
    else {
      uVar12 = (undefined2)param_4;
      if (uVar8 == 0xc000000) {
        uVar11 = *param_5 & 0x7fffffffffff;
        if ((*(char *)(uVar11 + 10) - 1U & 0xfd) == 0) {
          *(undefined4 *)(param_1 + 0xba) = 0x4510000c;
          *(undefined2 *)(param_1 + 0xb8) = uVar12;
          uVar3 = FUN_1804d6ae0(param_1);
          uVar4 = FUN_1804a6370(param_1,*(undefined1 *)(uVar11 + 10));
          *(undefined2 *)(param_1 + 0xbc) = 0x893;
          *(undefined2 *)(param_1 + 0xb8) = uVar3;
          *(undefined2 *)(param_1 + 0xba) = uVar4;
          FUN_1804d6ae0(param_1);
          uVar3 = 0x13;
          if (*(char *)(uVar11 + 10) == '\x01') {
            uVar3 = 0xd;
          }
          uVar4 = 0x4509;
        }
        else {
          uVar3 = FUN_1804a6410(param_1,0x30);
          uVar4 = 0x2909;
        }
        *(undefined2 *)(param_1 + 0xbc) = uVar4;
        *(undefined2 *)(param_1 + 0xb8) = uVar12;
        *(undefined2 *)(param_1 + 0xba) = uVar3;
        param_4 = FUN_1804d6ae0(param_1);
      }
      else {
        if (uVar8 != 0x4000000) {
          if (uVar8 == 0x3000000) {
                    /* WARNING: Subroutine does not return */
            FUN_1804954a0(param_1,0x16);
          }
          lVar7 = FUN_1804dc0c0(param_1,param_4,param_5);
          lVar2 = *plVar1;
          uVar16 = (ulonglong)*(ushort *)(lVar7 + 10);
          bVar13 = (byte)((uint)*(undefined4 *)(lVar2 + uVar16 * 0x18) >> 0x18);
          if (bVar13 >> 4 == 8) {
            do {
              uVar16 = (ulonglong)*(ushort *)(lVar2 + uVar16 * 0x18);
              bVar13 = (byte)((uint)*(undefined4 *)(lVar2 + uVar16 * 0x18) >> 0x18);
            } while (bVar13 >> 4 == 8);
          }
          puVar15 = (undefined8 *)((*param_5 & 0x7fffffffffff) + 0x10);
          if (bVar13 >> 4 == 6) {
            uVar14 = FUN_1804ab7b0(plVar1,*(ushort *)(lVar7 + 10) | 0x20030000,8);
            iVar5 = 9;
            puVar9 = (uint *)(*plVar1 + (ulonglong)uVar14 * 0x18);
          }
          else {
            puVar9 = (uint *)(lVar2 + uVar16 * 0x18);
            iVar5 = FUN_1804de010(plVar1,puVar9);
          }
          uVar14 = *puVar9 >> 0x1c;
          if (uVar14 == 2) {
            *(undefined2 *)(param_1 + 0xb8) = uVar12;
            *(ushort *)(param_1 + 0xbc) = (ushort)iVar5 | 0x4500;
            *(undefined2 *)(param_1 + 0xba) = 0x15;
            param_4 = FUN_1804d6ae0(param_1);
            if ((*puVar9 & 0xf0800000) != 0x20800000) goto LAB_1804ded97;
            puVar15 = (undefined8 *)*puVar15;
            lVar2 = *plVar1;
            do {
              uVar16 = (ulonglong)(ushort)*puVar9;
              uVar14 = *(uint *)(lVar2 + uVar16 * 0x18);
              puVar9 = (uint *)(lVar2 + uVar16 * 0x18);
              uVar8 = uVar14 >> 0x1c;
            } while (uVar8 == 8);
            if (uVar8 == 5) {
              uVar16 = (ulonglong)(uVar14 & 0xffff);
            }
            puVar9 = (uint *)(lVar2 + uVar16 * 0x18);
            iVar5 = FUN_1804de010(plVar1,puVar9);
LAB_1804ded36:
            if ((0xfffffff < *puVar9) || (iVar5 == 10)) goto LAB_1804ded97;
            uVar10 = (ushort)iVar5 | 0x4600;
            *(undefined2 *)(param_1 + 0xba) = 0;
          }
          else {
            if (iVar5 - 0x15U < 2) {
              *(undefined2 *)(param_1 + 0xba) = 0x17;
            }
            else {
              if (1 < iVar5 - 0x13U) {
                uVar3 = FUN_1804a6410(param_1,0x10);
                *(undefined2 *)(param_1 + 0xbc) = 0x2909;
                *(undefined2 *)(param_1 + 0xb8) = uVar12;
                *(undefined2 *)(param_1 + 0xba) = uVar3;
                param_4 = FUN_1804d6ae0(param_1);
                goto LAB_1804ded36;
              }
              if (uVar14 == 5) {
                puVar9 = (uint *)(*plVar1 + ((ulonglong)*puVar9 & 0xffff) * 0x18);
              }
              *(undefined2 *)(param_1 + 0xba) = 0x16;
            }
            uVar10 = (ushort)iVar5 | 0x4500;
          }
          *(ushort *)(param_1 + 0xbc) = uVar10;
          *(short *)(param_1 + 0xb8) = (short)param_4;
          param_4 = FUN_1804d6ae0(param_1);
          goto LAB_1804ded97;
        }
        if ((byte)(*param_2 >> 0x1c) == 5) {
          uVar17 = 0;
          uVar11 = *param_5;
          puVar6 = (ushort *)FUN_1804ab270(plVar1,param_2,uVar11 & 0x7fffffffffff,local_res20,0);
          uVar3 = FUN_1804a62e0(param_1,uVar11 & 0x7fffffffffff,4);
          *(undefined2 *)(param_1 + 0xbc) = 0x884;
          *(undefined2 *)(param_1 + 0xb8) = uVar12;
          *(undefined2 *)(param_1 + 0xba) = uVar3;
          FUN_1804d6ae0(param_1);
          if ((puVar6 != (ushort *)0x0) && ((byte)((uint)*(undefined4 *)puVar6 >> 0x1c) == 0xb)) {
            puVar15 = (undefined8 *)(ulonglong)(local_res20[0] != 0);
            param_4 = FUN_1804a6370(param_1);
            uVar16 = (ulonglong)*puVar6;
          }
        }
        else {
          if ((*param_2 & 0xfc000000) == 0x30000000) {
                    /* WARNING: Subroutine does not return */
            FUN_1804954a0(param_1,0xb);
          }
          uVar3 = FUN_1804a6410(param_1,0x18);
          *(undefined2 *)(param_1 + 0xbc) = 0x2909;
          *(undefined2 *)(param_1 + 0xb8) = uVar12;
          *(undefined2 *)(param_1 + 0xba) = uVar3;
          param_4 = FUN_1804d6ae0(param_1);
          uVar16 = 0x17;
        }
      }
    }
  }
  puVar9 = (uint *)(*plVar1 + uVar16 * 0x18);
LAB_1804ded97:
  if ((byte)(*param_2 >> 0x1c) == 5) {
    param_2 = (uint *)(*plVar1 + (ulonglong)(*param_2 & 0xffff) * 0x18);
  }
  FUN_1804de0c0(param_1,param_2,puVar9,param_3,CONCAT44(uVar17,param_4),puVar15);
  return;
}



/* ===== 1804dee00 FUN_1804dee00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804dee00(longlong param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_178 [32];
  uint local_158;
  uint uStack_148;
  undefined8 local_144 [31];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_178;
  if ((ushort)param_3 < 0x8000) {
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x20) + ((ulonglong)param_3 & 0xffff) * 8);
    if (uVar10 == 0) {
      return;
    }
    if (uVar10 < 0x81) {
      uVar3 = 0;
      uVar7 = 0;
      uVar8 = 8;
      for (iVar9 = 0x1f; 8U >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
      iVar9 = iVar9 * 2 + 0x10;
      while( true ) {
        uVar4 = uVar3 + uVar8;
        while (uVar4 <= uVar10) {
          if (0xf < uVar7) goto LAB_1804defec;
          uVar5 = (ulonglong)uVar7;
          uVar7 = uVar7 + 1;
          *(uint *)((longlong)local_144 + uVar5 * 0x10 + -4) = uVar3;
          *(int *)(local_144 + uVar5 * 2) = iVar9;
          uVar4 = uVar3 + uVar8 * 2;
          uVar3 = uVar3 + uVar8;
        }
        if (uVar10 <= uVar3) break;
        uVar8 = uVar8 >> 1;
        iVar9 = iVar9 + -2;
      }
      if (uVar7 != 0) {
        iVar9 = (int)local_144[0];
        if (((ushort)param_4 < 0x8000) || (iVar9 != 0x10)) {
          *(undefined4 *)(param_1 + 0xba) = 0x5b130270;
          *(ushort *)(param_1 + 0xb8) = (ushort)param_4;
          param_4 = FUN_1804d6ae0(param_1);
          uVar1 = (ushort)param_4;
          if (iVar9 != 0x10) {
            if (iVar9 == 0x16) {
              if (uVar1 < 0x8000) {
                *(undefined4 *)(param_1 + 0xba) = 0x5b1602d4;
                *(ushort *)(param_1 + 0xb8) = uVar1;
                uVar1 = FUN_1804d6ae0(param_1);
              }
              uVar2 = FUN_1804a6410(param_1,0x101010101010101);
              *(undefined2 *)(param_1 + 0xbc) = 0x2b16;
            }
            else {
              uVar6 = 0x1010101;
              if (iVar9 == 0x12) {
                uVar6 = 0x101;
              }
              uVar2 = FUN_1804a6370(param_1,uVar6);
              *(undefined2 *)(param_1 + 0xbc) = 0x2b13;
            }
            *(ushort *)(param_1 + 0xb8) = uVar1;
            *(undefined2 *)(param_1 + 0xba) = uVar2;
            param_4 = FUN_1804d6ae0(param_1);
          }
        }
        uVar5 = 0;
        if (uVar7 != 0) {
          do {
            uVar2 = FUN_1804a6410(param_1,*(undefined4 *)((longlong)local_144 + uVar5 * 0x10 + -4));
            *(undefined2 *)(param_1 + 0xbc) = 0x2909;
            *(short *)(param_1 + 0xb8) = (short)param_2;
            *(undefined2 *)(param_1 + 0xba) = uVar2;
            uVar2 = FUN_1804d6ae0(param_1);
            *(undefined2 *)(param_1 + 0xb8) = uVar2;
            *(ushort *)(param_1 + 0xbc) = *(ushort *)(local_144 + uVar5 * 2) | 0x4e00;
            *(short *)(param_1 + 0xba) = (short)param_4;
            FUN_1804d6ae0(param_1);
            uVar10 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar10;
          } while (uVar10 < uVar7);
        }
        goto LAB_1804df004;
      }
    }
  }
LAB_1804defec:
  local_158 = param_3;
  FUN_1804a5e80(param_1,100,param_2,param_4);
LAB_1804df004:
  *(undefined4 *)(param_1 + 0xba) = 0x5a000000;
  *(undefined2 *)(param_1 + 0xb8) = 0;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804df040 FUN_1804df040 ===== */

void FUN_1804df040(longlong param_1,undefined4 param_2,int param_3,ulonglong *param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar2 = *param_4;
  if ((int)((longlong)uVar2 >> 0x2f) + 4U < 0xfffffff7) {
    if (uVar2 != 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xb);
    }
    uVar2 = 0;
  }
  else {
    if (param_3 != 0) goto LAB_1804df092;
    uVar2 = uVar2 & 0x7fffffffffff;
  }
  param_3 = FUN_1804a66d0(param_1,0x19,uVar2);
LAB_1804df092:
  uVar1 = FUN_1804a6370(param_1,(longlong)*param_4 >> 0x2f);
  FUN_1804a5e80(param_1,0x61,param_2,param_3,uVar1);
  *(undefined1 *)(param_1 + 0xb5) = 1;
  return;
}



/* ===== 1804df0e0 FUN_1804df0e0 ===== */

void FUN_1804df0e0(longlong param_1,longlong *param_2,undefined2 param_3,ulonglong param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  
  *(undefined2 *)(param_1 + 0xb8) = param_3;
  iVar8 = 0x1f;
  if ((param_4 & 0x7f0000) != 0) {
    for (; ((uint)(param_4 >> 0x10) & 0x7f) >> iVar8 == 0; iVar8 = iVar8 + -1) {
    }
  }
  uVar9 = ((param_4 & 0x800000) != 0) + 0xf + (short)iVar8 * 2;
  *(ushort *)(param_1 + 0xbc) = uVar9 | 0x4600;
  *(undefined2 *)(param_1 + 0xba) = 0;
  uVar1 = FUN_1804d6ae0();
  uVar10 = (uint)param_4 & 0x7f;
  uVar7 = (uint)(param_4 >> 8) & 0x7f;
  bVar6 = (byte)uVar7;
  if ((int)param_2[2] == 0) {
    if ((param_4 & 0x8000000) == 0) {
      if ((param_4 & 0x800000) == 0) {
        iVar8 = 0x20 - uVar7;
        uVar2 = FUN_1804a6370(param_1,iVar8 - uVar10);
        *(undefined2 *)(param_1 + 0xbc) = 0x2413;
        *(undefined2 *)(param_1 + 0xb8) = uVar1;
        *(undefined2 *)(param_1 + 0xba) = uVar2;
        uVar1 = FUN_1804d6ae0(param_1);
        uVar2 = FUN_1804a6370(param_1,iVar8);
        *(undefined2 *)(param_1 + 0xbc) = 0x2613;
      }
      else {
        uVar2 = FUN_1804a6370(param_1,uVar10);
        *(undefined2 *)(param_1 + 0xbc) = 0x2513;
        *(undefined2 *)(param_1 + 0xb8) = uVar1;
        *(undefined2 *)(param_1 + 0xba) = uVar2;
        uVar1 = FUN_1804d6ae0(param_1);
        uVar2 = FUN_1804a6370(param_1,(1 << (bVar6 & 0x1f)) + -1);
        *(undefined2 *)(param_1 + 0xbc) = 0x2113;
      }
      *(undefined2 *)(param_1 + 0xb8) = uVar1;
      *(undefined2 *)(param_1 + 0xba) = uVar2;
      uVar4 = FUN_1804d6ae0(param_1);
      **(undefined4 **)(param_1 + 0xa0) = uVar4;
    }
    else {
      uVar2 = FUN_1804a6370(param_1,1 << ((byte)uVar10 & 0x1f));
      *(undefined2 *)(param_1 + 0xbc) = 0x2113;
      *(undefined2 *)(param_1 + 0xb8) = uVar1;
      *(undefined2 *)(param_1 + 0xba) = uVar2;
      uVar1 = FUN_1804d6ae0(param_1);
      uVar2 = FUN_1804a6370(param_1,0);
      *(undefined2 *)(param_1 + 0xba) = uVar2;
      *(undefined2 *)(param_1 + 0xbc) = 0x993;
      *(undefined2 *)(param_1 + 0xb8) = uVar1;
      *(undefined4 *)(param_1 + 0x174) = 2;
      **(undefined4 **)(param_1 + 0xa0) = 0x2007ffd;
    }
  }
  else {
    if ((param_4 & 0x8000000) == 0) {
      lVar5 = (ulonglong)((param_4 & 0x800000) != 0) + 9;
    }
    else {
      lVar5 = 3;
    }
    uVar7 = (1 << (bVar6 & 0x1f)) + -1 << ((byte)uVar10 & 0x1f);
    uVar2 = FUN_1804de8e0(param_1,**(longlong **)(param_1 + -0x160) + lVar5 * 0x18,0,
                          *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 8),*param_2 + 0x10);
    uVar3 = FUN_1804a6370(param_1,uVar10);
    *(undefined2 *)(param_1 + 0xbc) = 0x2413;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    uVar2 = FUN_1804d6ae0(param_1);
    uVar3 = FUN_1804a6370(param_1,uVar7);
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    *(ushort *)(param_1 + 0xbc) = uVar9 | 0x2100;
    uVar2 = FUN_1804d6ae0(param_1);
    uVar3 = FUN_1804a6370(param_1,~uVar7);
    *(ushort *)(param_1 + 0xbc) = uVar9 | 0x2100;
    *(undefined2 *)(param_1 + 0xb8) = uVar1;
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    uVar1 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xb8) = uVar1;
    *(undefined2 *)(param_1 + 0xba) = uVar2;
    *(ushort *)(param_1 + 0xbc) = uVar9 | 0x2200;
    uVar1 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xb8) = param_3;
    *(ushort *)(param_1 + 0xbc) = uVar9 | 0x4e00;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    FUN_1804d6ae0(param_1);
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 0xb5) = 1;
  }
  return;
}



/* ===== 1804df400 FUN_1804df400 ===== */

void FUN_1804df400(longlong param_1,longlong param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1804a62e0(param_1,*param_3 & 0x7fffffffffff,8);
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + -8) = uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + -4) = 0x10000;
  *(undefined8 *)(param_2 + 8) = 0xffffffffffffffff;
  return;
}



/* ===== 1804df460 FUN_1804df460 ===== */

ulonglong FUN_1804df460(longlong param_1,uint *param_2,int param_3,uint param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ushort uVar9;
  
  uVar7 = (ulonglong)param_4;
  lVar8 = *(longlong *)(param_1 + -0x160);
  iVar4 = FUN_1804de010(lVar8);
  uVar6 = *param_2;
  uVar9 = (ushort)iVar4;
  uVar1 = (undefined2)param_4;
  if (uVar6 < 0x10000000) {
    if (iVar4 == 10) {
LAB_1804df7c2:
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0x16);
    }
    *(undefined2 *)(param_1 + 0xb8) = uVar1;
    *(ushort *)(param_1 + 0xbc) = uVar9 | 0x4600;
    *(undefined2 *)(param_1 + 0xba) = 0;
    uVar5 = FUN_1804d6ae0(param_1);
    uVar7 = (ulonglong)uVar5;
    if ((iVar4 == 0xd) || (iVar4 == 0x14)) {
      *(undefined2 *)(param_1 + 0xbc) = 0x5b0e;
      *(ushort *)(param_1 + 0xba) = uVar9 | 0x1c0;
      *(short *)(param_1 + 0xb8) = (short)uVar5;
      goto LAB_1804df7a8;
    }
    if (1 < iVar4 - 0x15U) {
      if ((uVar6 >> 0x1b & 1) == 0) {
        return uVar7;
      }
      uVar1 = FUN_1804a6370(param_1,0);
      *(undefined2 *)(param_1 + 0xba) = uVar1;
      *(undefined2 *)(param_1 + 0xbc) = 0x993;
      *(short *)(param_1 + 0xb8) = (short)uVar5;
      *(undefined4 *)(param_1 + 0x174) = 2;
      return 0x2007ffd;
    }
  }
  else {
    uVar5 = uVar6 >> 0x1c;
    if ((uVar5 == 2) || (uVar5 == 5)) {
      *(undefined2 *)(param_1 + 0xb8) = uVar1;
      *(ushort *)(param_1 + 0xbc) = uVar9 | 0x4600;
      *(undefined2 *)(param_1 + 0xba) = 0;
      uVar6 = FUN_1804d6ae0(param_1);
      uVar7 = (ulonglong)uVar6;
    }
    else {
      if (((uVar6 & 0xfc000000) != 0x30000000) && (uVar5 != 1)) {
        if ((uVar6 & 0xf4000000) == 0x34000000) {
          uVar6 = param_2[1];
          uVar2 = FUN_1804a6370(param_1,param_3);
          *(undefined4 *)(param_1 + 0xba) = 0x538a7fff;
          *(undefined2 *)(param_1 + 0xb8) = uVar2;
          uVar5 = FUN_1804d6ae0(param_1);
          *(undefined2 *)(param_1 + 0xb8) = uVar1;
          *(ushort *)(param_1 + 0xbc) = uVar9 | 0x4600;
          *(undefined2 *)(param_1 + 0xba) = 0;
          uVar2 = FUN_1804d6ae0(param_1);
          uVar3 = FUN_1804a6410(param_1,uVar6 >> 1);
          *(undefined2 *)(param_1 + 0xbc) = 0x2909;
          *(undefined2 *)(param_1 + 0xb8) = uVar1;
          *(undefined2 *)(param_1 + 0xba) = uVar3;
          uVar1 = FUN_1804d6ae0(param_1);
          *(ushort *)(param_1 + 0xbc) = uVar9 | 0x4600;
          *(undefined2 *)(param_1 + 0xb8) = uVar1;
          *(undefined2 *)(param_1 + 0xba) = 0;
          uVar1 = FUN_1804d6ae0(param_1);
          uVar3 = FUN_1804a6410(param_1,0x10);
          *(short *)(param_1 + 0xb8) = (short)uVar5;
          *(undefined2 *)(param_1 + 0xbc) = 0x2909;
          *(undefined2 *)(param_1 + 0xba) = uVar3;
          uVar3 = FUN_1804d6ae0(param_1);
          *(undefined2 *)(param_1 + 0xb8) = uVar3;
          *(ushort *)(param_1 + 0xbc) = uVar9 | 0x4e00;
          *(undefined2 *)(param_1 + 0xba) = uVar2;
          FUN_1804d6ae0(param_1);
          uVar2 = FUN_1804a6410(param_1,(uVar6 >> 1) + 0x10);
          *(undefined2 *)(param_1 + 0xbc) = 0x2909;
          *(short *)(param_1 + 0xb8) = (short)uVar5;
          *(undefined2 *)(param_1 + 0xba) = uVar2;
          uVar2 = FUN_1804d6ae0(param_1);
          *(ushort *)(param_1 + 0xbc) = uVar9 | 0x4e00;
          *(undefined2 *)(param_1 + 0xb8) = uVar2;
          *(undefined2 *)(param_1 + 0xba) = uVar1;
          FUN_1804d6ae0(param_1);
          return (ulonglong)uVar5;
        }
        goto LAB_1804df7c2;
      }
      *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(param_1 + 0x80);
      param_3 = FUN_1804ab7b0(lVar8,param_3 + 0x22830000,8);
    }
  }
  uVar1 = FUN_1804a6370(param_1,param_3);
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0xbc) = 0x548a;
  *(short *)(param_1 + 0xba) = (short)uVar7;
LAB_1804df7a8:
  uVar7 = FUN_1804d6ae0(param_1);
  return uVar7;
}



/* ===== 1804df7d0 FUN_1804df7d0 ===== */

void FUN_1804df7d0(longlong param_1,undefined2 param_2)

{
  short sVar1;
  longlong lVar2;
  
  lVar2 = FUN_1804dc0c0();
  sVar1 = *(short *)(lVar2 + 10);
  if (1 < (ushort)(sVar1 - 0xbU)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0xb);
  }
  *(undefined2 *)(param_1 + 0xb8) = param_2;
  *(undefined2 *)(param_1 + 0xba) = 0x17;
  *(ushort *)(param_1 + 0xbc) = (sVar1 != 0xb) + 0x4515;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804df840 FUN_1804df840 ===== */

void FUN_1804df840(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  
  plVar1 = *(longlong **)(param_1 + -0x160);
  puVar4 = (uint *)FUN_1804aba40(plVar1,*(undefined2 *)
                                         ((*(ulonglong *)*param_2 & 0x7fffffffffff) + 10));
  uVar5 = *puVar4;
  if ((byte)(uVar5 >> 0x1c) == 5) {
    puVar4 = (uint *)(*plVar1 + (ulonglong)(uVar5 & 0xffff) * 0x18);
    uVar5 = *(uint *)(*plVar1 + (ulonglong)(uVar5 & 0xffff) * 0x18);
  }
  if (uVar5 < 0x10000000) {
    if ((((uVar5 & 0xf4000000) == 0) && (puVar4[1] < 5)) &&
       ((puVar4[1] != 4 || ((uVar5 >> 0x17 & 1) == 0)))) {
      lVar6 = *plVar1 + 0xd8;
      goto LAB_1804df90c;
    }
  }
  else if ((uVar5 & 0xf4000000) != 0x34000000) {
    FUN_1804dc0c0(param_1,**(undefined4 **)(param_1 + 0xa0),*param_2);
    **(undefined4 **)(param_1 + 0xa0) = 0x7fff;
    return;
  }
  lVar6 = *plVar1 + 0x180;
LAB_1804df90c:
  puVar2 = *(undefined4 **)(param_1 + 0xa0);
  uVar3 = FUN_1804de8e0(param_1,lVar6,0,*puVar2,*param_2);
  *puVar2 = uVar3;
  return;
}



/* ===== 1804df940 FUN_1804df940 ===== */

void FUN_1804df940(longlong param_1,uint param_2,undefined8 param_3)

{
  if ((param_2 & 0x1f000000) != 0xa000000) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0xb,param_3,param_2);
  }
  FUN_1804de8e0(param_1,**(longlong **)(param_1 + -0x160) + 0x1e0,0,param_2,param_3);
  return;
}



/* ===== 1804df990 FUN_1804df990 ===== */

void FUN_1804df990(longlong param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1804a6370(param_1,0x16);
  *(undefined2 *)(param_1 + 0xbc) = 0x548a;
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0xba) = param_2;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804df9e0 FUN_1804df9e0 ===== */

void FUN_1804df9e0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5,short param_6)

{
  longlong lVar1;
  longlong *plVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  
  plVar2 = *(longlong **)(param_1 + -0x160);
  uVar5 = FUN_1804dd380(plVar2,param_4);
  if (param_5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1804dd380(plVar2,param_5);
  }
  if (uVar6 <= uVar5) {
    uVar6 = uVar5;
  }
  lVar1 = *plVar2 + (ulonglong)uVar6 * 0x18;
  uVar3 = FUN_1804dd300(param_1,lVar1,param_2,param_4);
  if (param_5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1804dd300(param_1,lVar1,param_3,param_5);
  }
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  *(ushort *)(param_1 + 0xbc) = param_6 << 8 | (short)uVar6 + 10U;
  *(undefined2 *)(param_1 + 0xba) = uVar4;
  uVar3 = FUN_1804d6ae0(param_1);
  uVar4 = FUN_1804a6370(param_1,(ulonglong)uVar6);
  *(undefined2 *)(param_1 + 0xbc) = 0x548a;
  *(undefined2 *)(param_1 + 0xb8) = uVar4;
  *(undefined2 *)(param_1 + 0xba) = uVar3;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804dfae0 FUN_1804dfae0 ===== */

undefined8 FUN_1804dfae0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  
  uVar16 = 0;
  plVar2 = *(longlong **)(param_1 + -0x160);
  uVar15 = 0;
  if (**(int **)(param_1 + 0xa0) != 0) {
    do {
      uVar3 = *(ulonglong *)(*param_2 + uVar15 * 8);
      if ((int)((longlong)uVar3 >> 0x2f) == -0xb) {
        puVar13 = (uint *)FUN_1804aba40(plVar2,*(undefined2 *)((uVar3 & 0x7fffffffffff) + 10));
        uVar11 = *puVar13;
        if ((byte)(uVar11 >> 0x1c) == 5) {
          uVar9 = uVar11 & 0xffff;
          uVar11 = *(uint *)(*plVar2 + (ulonglong)uVar9 * 0x18);
          puVar13 = (uint *)(*plVar2 + (ulonglong)uVar9 * 0x18);
        }
        if (((uVar11 & 0xfc800000) == 0x800000) && (puVar13[1] == 8)) {
          uVar11 = 0xc;
        }
        else {
          uVar11 = 0xb;
        }
      }
      else {
        uVar11 = 0;
      }
      if (uVar11 <= uVar16) {
        uVar11 = uVar16;
      }
      uVar16 = uVar11;
      uVar15 = (ulonglong)((int)uVar15 + 1);
    } while ((*(uint **)(param_1 + 0xa0))[uVar15] != 0);
    if (uVar16 != 0) {
      uVar11 = **(uint **)(param_1 + 0xa0);
      puVar4 = (ulonglong *)*param_2;
      lVar6 = param_2[2];
      lVar1 = *plVar2 + (ulonglong)uVar16 * 0x18;
      if (((uVar11 & 0x1f000000) == 0x4000000) &&
         (iVar10 = FUN_1804972a0(*puVar4 & 0x7fffffffffff,puVar4), iVar10 != 0)) {
        *(undefined4 *)(param_1 + 0xba) = 0x5e8e0000;
        *(short *)(param_1 + 0xb8) = (short)uVar11;
        uVar11 = FUN_1804d6ae0(param_1);
      }
      uVar7 = FUN_1804de8e0(param_1,lVar1,0,uVar11,puVar4);
      lVar14 = *(longlong *)(param_1 + 0xa0);
      if (*(int *)(lVar14 + 4) != 0) {
        uVar15 = 1;
        do {
          uVar11 = *(uint *)(lVar14 + uVar15 * 4);
          puVar4 = (ulonglong *)(*param_2 + uVar15 * 8);
          if (((uVar11 & 0x1f000000) == 0x4000000) &&
             (iVar10 = FUN_1804972a0(*puVar4 & 0x7fffffffffff,puVar4), iVar10 != 0)) {
            *(undefined4 *)(param_1 + 0xba) = 0x5e8e0000;
            *(short *)(param_1 + 0xb8) = (short)uVar11;
            uVar11 = FUN_1804d6ae0(param_1);
          }
          uVar8 = FUN_1804de8e0(param_1,lVar1,0,uVar11,puVar4);
          *(ushort *)(param_1 + 0xbc) = (ushort)((int)lVar6 << 8) | (short)uVar16 + 10U;
          *(undefined2 *)(param_1 + 0xb8) = uVar7;
          *(undefined2 *)(param_1 + 0xba) = uVar8;
          uVar7 = FUN_1804d6ae0(param_1);
          lVar14 = *(longlong *)(param_1 + 0xa0);
          uVar15 = (ulonglong)((int)uVar15 + 1);
        } while (*(int *)(lVar14 + uVar15 * 4) != 0);
      }
      uVar8 = FUN_1804a6370(param_1,uVar16);
      puVar5 = *(undefined4 **)(param_1 + 0xa0);
      *(undefined2 *)(param_1 + 0xbc) = 0x548a;
      *(undefined2 *)(param_1 + 0xb8) = uVar8;
      *(undefined2 *)(param_1 + 0xba) = uVar7;
      uVar12 = FUN_1804d6ae0(param_1);
      *puVar5 = uVar12;
      return 1;
    }
  }
  return 0;
}



/* ===== 1804dfd80 FUN_1804dfd80 ===== */

undefined8
FUN_1804dfd80(longlong param_1,int *param_2,uint *param_3,undefined8 param_4,undefined8 param_5,
             short param_6)

{
  longlong *plVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  plVar1 = *(longlong **)(param_1 + -0x160);
  uVar4 = 0;
  if ((*param_2 != 0) && ((*param_3 & 0x1f000000) == 0xa000000)) {
    uVar4 = FUN_1804dd300(param_1,*plVar1 + 0x108,*param_3,param_5);
    *param_3 = uVar4;
  }
  uVar5 = FUN_1804dd380(plVar1,param_4);
  if (uVar5 == 0) {
    return 0;
  }
  uVar2 = FUN_1804dd300(param_1,*plVar1 + (ulonglong)uVar5 * 0x18,*param_2,param_4);
  if (uVar4 == 0) {
    uVar4 = FUN_1804e3f60(param_1,*param_3);
  }
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  *(ushort *)(param_1 + 0xbc) = (short)uVar5 + 10U | param_6 << 8;
  *(short *)(param_1 + 0xba) = (short)uVar4;
  uVar2 = FUN_1804d6ae0(param_1);
  uVar3 = FUN_1804a6370(param_1,(ulonglong)uVar5);
  *(undefined2 *)(param_1 + 0xbc) = 0x548a;
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  iVar6 = FUN_1804d6ae0(param_1);
  *param_2 = iVar6;
  return 1;
}



/* ===== 1804dfeb0 FUN_1804dfeb0 ===== */

void FUN_1804dfeb0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_1804dd300(param_1,**(longlong **)(param_1 + -0x160) + 0x108,
                        **(undefined4 **)(param_1 + 0xa0),*param_2);
  uVar1 = (undefined4)uVar2;
  uVar3 = uVar2 >> 0x18 & 0xff;
  if (4 < ((uint)uVar3 & 0x1f) - 0xf) {
    *(undefined2 *)(param_1 + 0xbc) = 0x5b13;
    *(short *)(param_1 + 0xb8) = (short)uVar2;
    *(ushort *)(param_1 + 0xba) = (ushort)uVar3 & 0x1f | 0x260;
    uVar1 = FUN_1804d6ae0(param_1);
  }
  **(undefined4 **)(param_1 + 0xa0) = uVar1;
  return;
}



/* ===== 1804dff30 FUN_1804dff30 ===== */

void FUN_1804dff30(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int local_res8 [2];
  
  plVar2 = *(longlong **)(param_1 + -0x160);
  uVar5 = FUN_1804dd380(plVar2,*param_2);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xa0) + 4);
  if (iVar1 == 0) {
    uVar6 = 8;
    if (uVar5 != 0) {
      uVar6 = 0x10;
    }
  }
  else {
    local_res8[0] = 0;
    uVar6 = FUN_1804b3660(*(undefined8 *)(param_1 + 0x80),2,local_res8);
    if (local_res8[0] == 0) {
      uVar3 = FUN_1804e3f60(param_1,iVar1);
    }
    else {
      uVar3 = FUN_1804dd300(param_1,*plVar2 + 0xd8,iVar1,*param_2 + 8);
    }
    uVar4 = FUN_1804a6370(param_1,uVar6);
    *(undefined2 *)(param_1 + 0xbc) = 0x893;
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    *(undefined2 *)(param_1 + 0xba) = uVar4;
    FUN_1804d6ae0(param_1);
  }
  uVar9 = -uVar6;
  if ((int)-uVar6 < 0) {
    uVar9 = uVar6;
  }
  if (0xfe < uVar9) {
    uVar9 = 0xfe;
  }
  if (uVar5 == 0) {
    uVar7 = FUN_1804e3f60(param_1,**(undefined4 **)(param_1 + 0xa0));
    if ((int)uVar9 < 8) {
      uVar3 = FUN_1804a6370(param_1,(1 << ((char)uVar9 * '\x04' & 0x1fU)) + -1);
      *(undefined2 *)(param_1 + 0xbc) = 0x2113;
      *(short *)(param_1 + 0xb8) = (short)uVar7;
      *(undefined2 *)(param_1 + 0xba) = uVar3;
      uVar7 = FUN_1804d6ae0(param_1);
    }
    *(undefined4 *)(param_1 + 0xba) = 0x5b1602d3;
  }
  else {
    uVar7 = FUN_1804dd300(param_1,*plVar2 + (ulonglong)uVar5 * 0x18,
                          **(undefined4 **)(param_1 + 0xa0),*param_2);
    if (0xf < (int)uVar9) goto LAB_1804e00f2;
    uVar3 = FUN_1804a6410(param_1,(1L << ((char)uVar9 * '\x04' & 0x3fU)) + -1);
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    *(undefined2 *)(param_1 + 0xbc) = 0x2116;
  }
  *(short *)(param_1 + 0xb8) = (short)uVar7;
  uVar7 = FUN_1804d6ae0(param_1);
LAB_1804e00f2:
  uVar8 = FUN_1804a6370(param_1,(int)uVar6 >> 0x1f & 0x2000U | uVar9 * 0x1000000 + 0x1000000 | 0x14)
  ;
  FUN_1804a5e80(param_1,10,param_3,uVar8,uVar7);
  return;
}



/* ===== 1804e0130 FUN_1804e0130 ===== */

undefined8 FUN_1804e0130(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  plVar2 = *(longlong **)(param_1 + -0x160);
  uVar6 = FUN_1804dd380(plVar2,*param_2);
  if (uVar6 == 0) {
    return 0;
  }
  uVar4 = FUN_1804dd300(param_1,*plVar2 + (ulonglong)uVar6 * 0x18,**(undefined4 **)(param_1 + 0xa0),
                        *param_2);
  sVar1 = *(short *)(param_2 + 2);
  *(undefined2 *)(param_1 + 0xb8) = uVar4;
  *(ushort *)(param_1 + 0xbc) = sVar1 << 8 | (short)uVar6 + 10U;
  *(undefined2 *)(param_1 + 0xba) = 0;
  uVar4 = FUN_1804d6ae0(param_1);
  uVar5 = FUN_1804a6370(param_1,(ulonglong)uVar6);
  *(undefined2 *)(param_1 + 0xba) = uVar4;
  puVar3 = *(undefined4 **)(param_1 + 0xa0);
  *(undefined2 *)(param_1 + 0xbc) = 0x548a;
  *(undefined2 *)(param_1 + 0xb8) = uVar5;
  uVar7 = FUN_1804d6ae0(param_1);
  *puVar3 = uVar7;
  return 1;
}



