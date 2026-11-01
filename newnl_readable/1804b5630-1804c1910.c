/* ===== 1804b5630 FUN_1804b5630 ===== */

undefined8 FUN_1804b5630(longlong param_1)

{
  ulonglong uVar1;
  
  if (((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
      (uVar1 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar1 >> 0x2f) != -0xd)) ||
     (uVar1 = uVar1 & 0x7fffffffffff, *(char *)(uVar1 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  if ((*(ulonglong *)(uVar1 + 0x48) & 2) != 0) {
    *(ulonglong *)(uVar1 + 0x48) = *(ulonglong *)(uVar1 + 0x48) & 0xfffffffffffffffd;
    *(undefined8 *)(uVar1 + 0x50) = 0;
    *(undefined8 *)(uVar1 + 0x38) = 0;
    *(undefined8 *)(uVar1 + 0x40) = 0;
  }
  *(undefined8 *)(uVar1 + 0x30) = *(undefined8 *)(uVar1 + 0x40);
  *(undefined8 *)(uVar1 + 0x58) = *(undefined8 *)(uVar1 + 0x40);
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + 8;
  return 1;
}



/* ===== 1804b56c0 FUN_1804b56c0 ===== */

undefined8 FUN_1804b56c0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
      (uVar3 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar3 >> 0x2f) != -0xd)) ||
     (uVar3 = uVar3 & 0x7fffffffffff, *(char *)(uVar3 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  uVar1 = FUN_1804a8af0(param_1,2,0,0x7fffff00);
  if (uVar1 < (uint)(*(int *)(uVar3 + 0x30) - *(int *)(uVar3 + 0x58))) {
    *(longlong *)(uVar3 + 0x58) = *(longlong *)(uVar3 + 0x58) + (ulonglong)uVar1;
  }
  else {
    if ((*(byte *)(uVar3 + 0x48) & 2) == 0) {
      uVar2 = *(undefined8 *)(uVar3 + 0x40);
      *(undefined8 *)(uVar3 + 0x30) = uVar2;
    }
    else {
      uVar2 = *(undefined8 *)(uVar3 + 0x30);
    }
    *(undefined8 *)(uVar3 + 0x58) = uVar2;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + 8;
  return 1;
}



/* ===== 1804b5770 FUN_1804b5770 ===== */

undefined8 FUN_1804b5770(longlong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_res8;
  
  puVar1 = *(ulonglong **)(param_1 + 0x20);
  if (((*(ulonglong **)(param_1 + 0x28) <= puVar1) || ((int)((longlong)*puVar1 >> 0x2f) != -0xd)) ||
     (uVar7 = *puVar1 & 0x7fffffffffff, *(char *)(uVar7 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  if ((int)((longlong)puVar1[1] >> 0x2f) == -0xb) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
    plVar2[2] = param_1;
    FUN_1804b23e0(plVar2,*plVar2 + 0x1e0,&local_res8,*(longlong *)(param_1 + 0x20) + 8,0x200);
    uVar5 = FUN_1804a8af0(param_1,3,0,0x7fffff00);
  }
  else {
    lVar6 = FUN_1804a8d80(param_1,2);
    local_res8 = lVar6 + 0x18;
    uVar5 = *(uint *)(lVar6 + 0x14);
  }
  if ((*(byte *)(uVar7 + 0x48) & 6) == 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    uVar8 = (ulonglong)(uint)(*(int *)(uVar7 + 0x38) - *(int *)(uVar7 + 0x40));
    uVar4 = *(undefined8 *)(uVar7 + 0x40);
    puVar3[2] = puVar3[2] - uVar8;
    (*(code *)*puVar3)(puVar3[1],uVar4,uVar8,0);
  }
  *(longlong *)(uVar7 + 0x48) = param_1 + 1;
  *(undefined8 *)(uVar7 + 0x50) = 0;
  *(undefined8 *)(uVar7 + 0x38) = 0;
  *(undefined8 *)(uVar7 + 0x40) = 0;
  *(undefined8 *)(uVar7 + 0x30) = 0;
  *(undefined8 *)(uVar7 + 0x58) = 0;
  *(longlong *)(uVar7 + 0x48) = param_1 + 3;
  *(longlong *)(uVar7 + 0x40) = local_res8;
  *(longlong *)(uVar7 + 0x58) = local_res8;
  *(ulonglong *)(uVar7 + 0x38) = local_res8 + (ulonglong)uVar5;
  *(ulonglong *)(uVar7 + 0x30) = local_res8 + (ulonglong)uVar5;
  uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 8) & 0x7fffffffffff;
  *(ulonglong *)(uVar7 + 0x50) = uVar8;
  if (((*(byte *)(uVar8 + 8) & 3) != 0) && ((*(byte *)(uVar7 + 8) & 4) != 0)) {
    FUN_1804908e0(*(undefined8 *)(param_1 + 0x10),uVar7);
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + 8;
  return 1;
}



/* ===== 1804b5900 FUN_1804b5900 ===== */

undefined8 FUN_1804b5900(ulonglong param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
      (uVar9 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar9 >> 0x2f) != -0xd)) ||
     (uVar9 = uVar9 & 0x7fffffffffff, *(char *)(uVar9 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  *(ulonglong *)(uVar9 + 0x48) = *(ulonglong *)(uVar9 + 0x48) & 7;
  *(ulonglong *)(uVar9 + 0x48) = *(ulonglong *)(uVar9 + 0x48) | param_1;
  uVar10 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
  lVar8 = (longlong)uVar10 >> 3;
  if (1 < lVar8) {
    lVar6 = 1;
    do {
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + lVar6 * 8);
      puVar7 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + lVar6 * 8);
      if ((int)((longlong)uVar5 >> 0x2f) != -5) {
        plVar4 = (longlong *)0x0;
        do {
          uVar3 = (uint)((longlong)*puVar7 >> 0x2f);
          if (uVar3 < 0xfffffff2) {
            FUN_1804b8ff0(uVar9 + 0x30,0xf000035,*puVar7);
            goto LAB_1804b5a77;
          }
          if ((uVar3 == 0xfffffff3) &&
             (uVar5 = *puVar7 & 0x7fffffffffff, *(char *)(uVar5 + 10) == '\x03')) {
            if (uVar5 == uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_1804840c0(param_1,(int)lVar6 + 1,0xf52);
            }
            FUN_1804a9f00(uVar9 + 0x30,*(undefined8 *)(uVar5 + 0x58),
                          *(int *)(uVar5 + 0x30) - *(int *)(uVar5 + 0x58));
            goto LAB_1804b5a77;
          }
          if ((plVar4 != (longlong *)0x0) ||
             (plVar4 = (longlong *)FUN_180494e10(param_1,puVar7,0x12), *plVar4 == -1)) {
                    /* WARNING: Subroutine does not return */
            FUN_180484100(param_1,(int)lVar6 + 1,"string/number/__tostring");
          }
          plVar1 = *(longlong **)(param_1 + 0x28);
          *(longlong **)(param_1 + 0x28) = plVar1 + 1;
          *plVar1 = *plVar4;
          puVar2 = *(ulonglong **)(param_1 + 0x28);
          *(ulonglong **)(param_1 + 0x28) = puVar2 + 1;
          *puVar2 = *puVar7;
          FUN_18047e730(param_1,1,1);
          puVar7 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + lVar6 * 8);
          *puVar7 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8);
          *(ulonglong *)(param_1 + 0x28) =
               *(longlong *)(param_1 + 0x20) + (uVar10 & 0xfffffffffffffff8);
          uVar5 = *puVar7;
        } while ((int)((longlong)uVar5 >> 0x2f) != -5);
      }
      FUN_1804a9f60(uVar9 + 0x30,uVar5 & 0x7fffffffffff);
LAB_1804b5a77:
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar8);
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + 8;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 1804b5b50 FUN_1804b5b50 ===== */

undefined8 FUN_1804b5b50(ulonglong param_1)

{
  ulonglong uVar1;
  
  if (((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
      (uVar1 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar1 >> 0x2f) != -0xd)) ||
     (uVar1 = uVar1 & 0x7fffffffffff, *(char *)(uVar1 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  *(ulonglong *)(uVar1 + 0x48) = *(ulonglong *)(uVar1 + 0x48) & 7;
  *(ulonglong *)(uVar1 + 0x48) = *(ulonglong *)(uVar1 + 0x48) | param_1;
  FUN_180498920(param_1,uVar1 + 0x30,2);
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + 8;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 1804b5be0 FUN_1804b5be0 ===== */

int FUN_1804b5be0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  puVar1 = *(ulonglong **)(param_1 + 0x28);
  puVar2 = *(ulonglong **)(param_1 + 0x20);
  if (((puVar1 <= puVar2) || ((int)((longlong)*puVar2 >> 0x2f) != -0xd)) ||
     (uVar7 = *puVar2 & 0x7fffffffffff, *(char *)(uVar7 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  lVar9 = (longlong)puVar1 - (longlong)puVar2 >> 3;
  if (lVar9 == 1) {
    *puVar1 = 0xffffffffffffffff;
    lVar9 = 2;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  }
  else if (lVar9 < 2) goto LAB_1804b5cd7;
  lVar8 = 1;
  do {
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(lVar3 + lVar8 * 8) == -1) {
      uVar4 = 0x7fffff00;
    }
    else {
      uVar4 = FUN_1804a8af0(param_1,(int)lVar8 + 1,0,0x7fffff00);
    }
    uVar6 = *(int *)(uVar7 + 0x30) - *(int *)(uVar7 + 0x58);
    if (uVar4 <= uVar6) {
      uVar6 = uVar4;
    }
    uVar5 = FUN_180491d30(param_1,*(undefined8 *)(uVar7 + 0x58));
    *(ulonglong *)(lVar3 + lVar8 * 8) = uVar5 | 0xfffd800000000000;
    lVar8 = lVar8 + 1;
    *(longlong *)(uVar7 + 0x58) = *(longlong *)(uVar7 + 0x58) + (ulonglong)uVar6;
  } while (lVar8 < lVar9);
LAB_1804b5cd7:
  if ((*(longlong *)(uVar7 + 0x58) == *(longlong *)(uVar7 + 0x30)) &&
     ((*(byte *)(uVar7 + 0x48) & 2) == 0)) {
    *(undefined8 *)(uVar7 + 0x30) = *(undefined8 *)(uVar7 + 0x40);
    *(undefined8 *)(uVar7 + 0x58) = *(undefined8 *)(uVar7 + 0x40);
  }
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return (int)lVar9 + -1;
}



/* ===== 1804b5d30 FUN_1804b5d30 ===== */

undefined8 FUN_1804b5d30(ulonglong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 local_res8;
  
  if (((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
      (uVar3 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar3 >> 0x2f) != -0xd)) ||
     (uVar3 = uVar3 & 0x7fffffffffff, *(char *)(uVar3 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  *(ulonglong *)(uVar3 + 0x48) = *(ulonglong *)(uVar3 + 0x48) & 7;
  *(ulonglong *)(uVar3 + 0x48) = *(ulonglong *)(uVar3 + 0x48) | param_1;
  if ((int)((longlong)*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8) >> 0x2f) != -0xb) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,2,"cdata");
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x188);
  plVar1[2] = param_1;
  FUN_1804b23e0(plVar1,*plVar1 + 0x1e0,&local_res8,*(longlong *)(param_1 + 0x20) + 8,0x200);
  uVar2 = FUN_1804a8af0(param_1,3,0,0x7fffff00);
  FUN_1804a9f00(uVar3 + 0x30,local_res8,uVar2);
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + 8;
  return 1;
}



/* ===== 1804b5e30 FUN_1804b5e30 ===== */

undefined8 FUN_1804b5e30(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  double *pdVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
      (uVar7 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar7 >> 0x2f) != -0xd)) ||
     (uVar7 = uVar7 & 0x7fffffffffff, *(char *)(uVar7 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  *(ulonglong *)(uVar7 + 0x48) = *(ulonglong *)(uVar7 + 0x48) & 7;
  *(ulonglong *)(uVar7 + 0x48) = *(ulonglong *)(uVar7 + 0x48) | param_1;
  uVar5 = FUN_1804a8af0(param_1,2,0,0x7fffff00);
  if ((uint)(*(int *)(uVar7 + 0x38) - *(int *)(uVar7 + 0x30)) < uVar5) {
    FUN_1804a9db0(uVar7 + 0x30);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x188) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    lVar2 = *(longlong *)(param_1 + 0x38);
    FUN_180489a10(param_1);
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x38) + (lVar1 - lVar2);
  }
  uVar6 = FUN_1804916f0(param_1,0x18);
  *(undefined1 *)(uVar6 + 9) = 10;
  *(undefined2 *)(uVar6 + 10) = 0x16;
  *(undefined8 *)(uVar6 + 0x10) = *(undefined8 *)(uVar7 + 0x30);
  puVar3 = *(ulonglong **)(param_1 + 0x28);
  *(ulonglong **)(param_1 + 0x28) = puVar3 + 1;
  *puVar3 = uVar6 | 0xfffa800000000000;
  pdVar4 = *(double **)(param_1 + 0x28);
  *(double **)(param_1 + 0x28) = pdVar4 + 1;
  *pdVar4 = (double)(*(int *)(uVar7 + 0x38) - *(int *)(uVar7 + 0x30));
  return 2;
}



/* ===== 1804b5f70 FUN_1804b5f70 ===== */

undefined8 FUN_1804b5f70(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
      (uVar2 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar2 >> 0x2f) != -0xd)) ||
     (uVar2 = uVar2 & 0x7fffffffffff, *(char *)(uVar2 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  uVar1 = FUN_1804a8af0(param_1,2,0,0x7fffff00);
  if ((uint)(*(int *)(uVar2 + 0x38) - *(int *)(uVar2 + 0x30)) < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840c0(param_1,2,0x482);
  }
  *(longlong *)(uVar2 + 0x30) = *(longlong *)(uVar2 + 0x30) + (ulonglong)uVar1;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + 8;
  return 1;
}



/* ===== 1804b6010 FUN_1804b6010 ===== */

undefined8 FUN_1804b6010(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  double *pdVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar1 = *(ulonglong **)(param_1 + 0x28);
  if (((puVar1 <= *(ulonglong **)(param_1 + 0x20)) ||
      (uVar5 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar5 >> 0x2f) != -0xd)) ||
     (uVar5 = uVar5 & 0x7fffffffffff, *(char *)(uVar5 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x188) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    FUN_180489a10();
    *(longlong *)(param_1 + 0x28) = (longlong)puVar1 + (*(longlong *)(param_1 + 0x38) - lVar2);
  }
  uVar4 = FUN_1804916f0(param_1,0x18);
  *(undefined1 *)(uVar4 + 9) = 10;
  *(undefined2 *)(uVar4 + 10) = 0x16;
  *(undefined8 *)(uVar4 + 0x10) = *(undefined8 *)(uVar5 + 0x58);
  puVar1 = *(ulonglong **)(param_1 + 0x28);
  *(ulonglong **)(param_1 + 0x28) = puVar1 + 1;
  *puVar1 = uVar4 | 0xfffa800000000000;
  pdVar3 = *(double **)(param_1 + 0x28);
  *(double **)(param_1 + 0x28) = pdVar3 + 1;
  *pdVar3 = (double)(*(int *)(uVar5 + 0x30) - *(int *)(uVar5 + 0x58));
  return 2;
}



/* ===== 1804b6100 FUN_1804b6100 ===== */

undefined8 FUN_1804b6100(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
      (uVar2 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar2 >> 0x2f) != -0xd)) ||
     (uVar2 = uVar2 & 0x7fffffffffff, *(char *)(uVar2 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  *(ulonglong *)(uVar2 + 0x48) = *(ulonglong *)(uVar2 + 0x48) & 7;
  *(ulonglong *)(uVar2 + 0x48) = *(ulonglong *)(uVar2 + 0x48) | param_1;
  uVar1 = FUN_1804a89f0(param_1,2);
  FUN_1804d2720(uVar2 + 0x30,uVar1);
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + 8;
  return 1;
}



/* ===== 1804b61a0 FUN_1804b61a0 ===== */

undefined8 FUN_1804b61a0(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
      (uVar2 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar2 >> 0x2f) != -0xd)) ||
     (uVar2 = uVar2 & 0x7fffffffffff, *(char *)(uVar2 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  *(ulonglong *)(uVar2 + 0x48) = *(ulonglong *)(uVar2 + 0x48) & 7;
  *(ulonglong *)(uVar2 + 0x48) = *(ulonglong *)(uVar2 + 0x48) | param_1;
  **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  uVar1 = FUN_1804d2610(uVar2 + 0x30);
  *(undefined8 *)(uVar2 + 0x58) = uVar1;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 1804b6240 FUN_1804b6240 ===== */

void FUN_1804b6240(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
      (uVar3 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar3 >> 0x2f) != -0xd)) ||
     (uVar3 = uVar3 & 0x7fffffffffff, *(char *)(uVar3 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  if ((*(byte *)(uVar3 + 0x48) & 6) == 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = (ulonglong)(uint)(*(int *)(uVar3 + 0x38) - *(int *)(uVar3 + 0x40));
    uVar2 = *(undefined8 *)(uVar3 + 0x40);
    puVar1[2] = puVar1[2] - uVar4;
    (*(code *)*puVar1)(puVar1[1],uVar2,uVar4,0);
  }
  *(longlong *)(uVar3 + 0x48) = param_1 + 1;
  *(undefined8 *)(uVar3 + 0x50) = 0;
  *(undefined8 *)(uVar3 + 0x38) = 0;
  *(undefined8 *)(uVar3 + 0x40) = 0;
  *(undefined8 *)(uVar3 + 0x30) = 0;
  *(undefined8 *)(uVar3 + 0x58) = 0;
  return;
}



/* ===== 1804b62e0 FUN_1804b62e0 ===== */

undefined8 FUN_1804b62e0(longlong param_1)

{
  ulonglong uVar1;
  
  if (((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
      (uVar1 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar1 >> 0x2f) != -0xd)) ||
     (uVar1 = uVar1 & 0x7fffffffffff, *(char *)(uVar1 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  uVar1 = FUN_180491d30(param_1,*(undefined8 *)(uVar1 + 0x58),
                        *(int *)(uVar1 + 0x30) - *(int *)(uVar1 + 0x58));
  *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8) = uVar1 | 0xfffd800000000000;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 1804b6370 FUN_1804b6370 ===== */

undefined8 FUN_1804b6370(longlong param_1)

{
  ulonglong uVar1;
  
  if (((*(ulonglong **)(param_1 + 0x28) <= *(ulonglong **)(param_1 + 0x20)) ||
      (uVar1 = **(ulonglong **)(param_1 + 0x20), (int)((longlong)uVar1 >> 0x2f) != -0xd)) ||
     (uVar1 = uVar1 & 0x7fffffffffff, *(char *)(uVar1 + 10) != '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,1,"buffer");
  }
  (*(ulonglong **)(param_1 + 0x28))[-1] =
       (ulonglong)(double)(*(int *)(uVar1 + 0x30) - *(int *)(uVar1 + 0x58));
  return 1;
}



/* ===== 1804b63e0 FUN_1804b63e0 ===== */

undefined8 FUN_1804b63e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  iVar2 = 0;
  uVar7 = 1;
  uVar9 = 0;
  uVar8 = 0;
  if (((*(longlong **)(param_1 + 0x20) < *(longlong **)(param_1 + 0x28)) &&
      (lVar1 = **(longlong **)(param_1 + 0x20), (int)(lVar1 >> 0x2f) != -0xc)) &&
     (uVar7 = 2, lVar1 != -1)) {
    iVar2 = FUN_1804a8af0(param_1,1,0,0x7fffff00);
  }
  if (*(longlong *)(param_1 + 0x20) + -8 + (ulonglong)uVar7 * 8 < *(ulonglong *)(param_1 + 0x28)) {
    uVar3 = FUN_1804a8dd0(param_1,uVar7);
    uVar4 = FUN_180491d30(param_1,&DAT_18056ff24,4);
    puVar5 = (ulonglong *)FUN_180492860(uVar3,uVar4);
    if ((puVar5 != (ulonglong *)0x0) && ((int)((longlong)*puVar5 >> 0x2f) == -0xc)) {
      uVar9 = *puVar5 & 0x7fffffffffff;
      FUN_1804d2490(param_1,uVar9);
    }
    uVar4 = FUN_180491d30(param_1,"metatable",9);
    puVar5 = (ulonglong *)FUN_180492860(uVar3,uVar4);
    if ((puVar5 != (ulonglong *)0x0) && ((int)((longlong)*puVar5 >> 0x2f) == -0xc)) {
      uVar8 = *puVar5 & 0x7fffffffffff;
      FUN_1804d23a0(param_1,uVar8);
    }
  }
  uVar3 = *(undefined8 *)
           ((*(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) + 0x10);
  uVar6 = FUN_180493f30(param_1,0x48,uVar3);
  *(undefined1 *)(uVar6 + 10) = 3;
  *(undefined8 *)(uVar6 + 0x20) = uVar3;
  puVar5 = *(ulonglong **)(param_1 + 0x28);
  *(ulonglong **)(param_1 + 0x28) = puVar5 + 1;
  *puVar5 = uVar6 | 0xfff9800000000000;
  *(undefined8 *)(uVar6 + 0x30) = 0;
  *(undefined8 *)(uVar6 + 0x38) = 0;
  *(undefined8 *)(uVar6 + 0x40) = 0;
  *(undefined8 *)(uVar6 + 0x50) = 0;
  *(undefined8 *)(uVar6 + 0x58) = 0;
  *(undefined8 *)(uVar6 + 0x70) = 0;
  *(longlong *)(uVar6 + 0x48) = param_1 + 1;
  *(ulonglong *)(uVar6 + 0x60) = uVar9;
  *(ulonglong *)(uVar6 + 0x68) = uVar8;
  if (iVar2 != 0) {
    FUN_1804a9e80(uVar6 + 0x30,iVar2);
  }
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 1804b65b0 FUN_1804b65b0 ===== */

undefined8 FUN_1804b65b0(longlong param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_1804a89f0(param_1,1);
  puVar1 = *(ulonglong **)(param_1 + 0x28);
  *(ulonglong **)(param_1 + 0x28) = puVar1 + 1;
  uVar3 = FUN_1804d2580(param_1,uVar2);
  *puVar1 = uVar3 | 0xfffd800000000000;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 1804b6620 FUN_1804b6620 ===== */

undefined8 FUN_1804b6620(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1804a8d80(param_1,1);
  **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x28) = lVar1 + 8;
  FUN_1804d2330(param_1,lVar1,uVar2);
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  return 1;
}



/* ===== 1804b6680 FUN_1804b6680 ===== */

undefined8 FUN_1804b6680(undefined8 param_1)

{
  FUN_1804a90d0(param_1,0,&DAT_18056fe40,&PTR_FUN_18056fdc0);
  FUN_18047eb70(param_1,0xffffffff,"__tostring");
  FUN_18047f8e0(param_1,0xfffffffe,"tostring");
  FUN_1804a90d0(param_1,0,&DAT_18056fee0,&PTR_FUN_18056fec8);
  return 1;
}



/* ===== 1804b66f0 FUN_1804b66f0 ===== */

undefined8 FUN_1804b66f0(ulonglong *param_1)

{
  HMODULE hModule;
  INT_PTR IVar1;
  
  if (DAT_180c9ec88 == (FARPROC)0x0) {
    hModule = LoadLibraryExA("advapi32.dll",(HANDLE)0x0,0);
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    DAT_180c9ec88 = GetProcAddress(hModule,"SystemFunction036");
    if (DAT_180c9ec88 == (FARPROC)0x0) {
      return 0;
    }
  }
  IVar1 = (*DAT_180c9ec88)(param_1,0x20);
  if ((char)IVar1 == '\0') {
    return 0;
  }
  if (*param_1 < 2) {
    *param_1 = *param_1 + 2;
  }
  if (param_1[1] < 0x40) {
    param_1[1] = param_1[1] + 0x40;
  }
  if (param_1[2] < 0x200) {
    param_1[2] = param_1[2] + 0x200;
  }
  if (param_1[3] < 0x20000) {
    param_1[3] = param_1[3] + 0x20000;
  }
  FUN_1804b67c0(param_1);
  return 1;
}



/* ===== 1804b67c0 FUN_1804b67c0 ===== */

ulonglong FUN_1804b67c0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[2];
  uVar4 = (uVar1 & 0x1ffffc000 ^ uVar1 >> 0x1f) >> 0xe ^ (uVar1 & 0xfffffffffffffffe) << 0x12;
  *param_1 = uVar4;
  uVar1 = param_1[1];
  uVar3 = (uVar1 & 0x1ffffffff800 ^ uVar1 >> 0x13) >> 0xb ^ (uVar1 & 0xffffffffffffffc0) << 0x1c;
  param_1[1] = uVar3;
  uVar1 = param_1[3];
  uVar2 = (uVar2 >> 0x18 ^ uVar2 & 0xffff000000) >> 0x18 ^ (uVar2 & 0xfffffffffffffe00) << 7;
  uVar1 = (uVar1 & 0x7fffffc0000 ^ uVar1 >> 0x15) >> 0x12 ^ (uVar1 & 0xfffffffffffe0000) << 8;
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return uVar1 ^ uVar2 ^ uVar3 ^ uVar4;
}



/* ===== 1804b68a0 FUN_1804b68a0 ===== */

ulonglong FUN_1804b68a0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[2];
  uVar4 = (uVar1 & 0x1ffffc000 ^ uVar1 >> 0x1f) >> 0xe ^ (uVar1 & 0xfffffffffffffffe) << 0x12;
  *param_1 = uVar4;
  uVar1 = param_1[1];
  uVar3 = (uVar1 & 0x1ffffffff800 ^ uVar1 >> 0x13) >> 0xb ^ (uVar1 & 0xffffffffffffffc0) << 0x1c;
  uVar1 = param_1[3];
  uVar2 = (uVar2 >> 0x18 ^ uVar2 & 0xffff000000) >> 0x18 ^ (uVar2 & 0xfffffffffffffe00) << 7;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  uVar1 = (uVar1 & 0x7fffffc0000 ^ uVar1 >> 0x15) >> 0x12 ^ (uVar1 & 0xfffffffffffe0000) << 8;
  param_1[3] = uVar1;
  return (uVar1 ^ uVar2 ^ uVar3 ^ uVar4) & 0xfffffffffffff | 0x3ff0000000000000;
}



/* ===== 1804b69a0 FUN_1804b69a0 ===== */

undefined8 FUN_1804b69a0(LPCVOID param_1,ulonglong param_2)

{
  DWORD dwErrCode;
  BOOL BVar1;
  SIZE_T SVar2;
  _MEMORY_BASIC_INFORMATION local_38;
  
  dwErrCode = GetLastError();
  while( true ) {
    if (param_2 == 0) {
      SetLastError(dwErrCode);
      return 0;
    }
    SVar2 = VirtualQuery(param_1,&local_38,0x30);
    if ((((SVar2 == 0) || (local_38.BaseAddress != param_1)) || (local_38.AllocationBase != param_1)
        ) || (((local_38.State != 0x1000 || (param_2 < local_38.RegionSize)) ||
              (BVar1 = VirtualFree(param_1,0,0x8000), BVar1 == 0)))) break;
    param_1 = (LPCVOID)((longlong)param_1 + local_38.RegionSize);
    param_2 = param_2 - local_38.RegionSize;
  }
  return 0xffffffff;
}



/* ===== 1804b6a50 FUN_1804b6a50 ===== */

void FUN_1804b6a50(uint *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  ulonglong *puVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  
  puVar1 = *(ulonglong **)(param_1 + 8);
  puVar9 = param_1 + 0xd2;
  do {
    if ((*(ulonglong **)puVar9 <= puVar1) &&
       (puVar1 < (ulonglong *)(*(longlong *)(puVar9 + 2) + (longlong)*(ulonglong **)puVar9))) break;
    puVar9 = *(uint **)(puVar9 + 4);
  } while (puVar9 != (uint *)0x0);
  puVar13 = (ulonglong *)(*(longlong *)(puVar9 + 2) + *(longlong *)puVar9);
  if (((longlong)puVar13 + 1U & 7) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulonglong)(-((uint)((longlong)puVar13 + 1U) & 7) & 7);
  }
  puVar11 = (ulonglong *)((uVar12 - 0x47) + (longlong)puVar13);
  if (puVar11 < puVar1 + 4) {
    puVar11 = puVar1;
  }
  if ((param_2 & 7) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulonglong)(-((uint)param_2 & 7) & 7);
  }
  lVar10 = uVar12 + param_2;
  uVar12 = (param_3 + -0x40) - uVar12;
  *(longlong *)(param_1 + 8) = lVar10;
  *(ulonglong *)(param_1 + 4) = uVar12;
  *(ulonglong *)(lVar10 + 8) = uVar12 | 1;
  *(undefined8 *)(lVar10 + 8 + uVar12) = 0x40;
  param_1[10] = 0x200000;
  param_1[0xb] = 0;
  puVar11[1] = 0x23;
  uVar12 = *(ulonglong *)(param_1 + 0xd4);
  puVar11[2] = *(ulonglong *)(param_1 + 0xd2);
  puVar11[3] = uVar12;
  puVar11[4] = *(ulonglong *)(param_1 + 0xd6);
  *(ulonglong *)(param_1 + 0xd2) = param_2;
  *(longlong *)(param_1 + 0xd4) = param_3;
  *(ulonglong **)(param_1 + 0xd6) = puVar11 + 2;
  puVar11[5] = 0xb;
  puVar8 = puVar11 + 6;
  puVar4 = puVar11 + 5;
  while (puVar8 < puVar13) {
    puVar4[1] = 0xb;
    puVar8 = puVar4 + 2;
    puVar4 = puVar4 + 1;
  }
  if (puVar11 != puVar1) {
    puVar11[1] = puVar11[1] & 0xfffffffffffffffe;
    uVar14 = (longlong)puVar11 - (longlong)puVar1;
    puVar1[1] = uVar14 | 1;
    uVar12 = uVar14 >> 3;
    *puVar11 = uVar14;
    if (uVar12 < 0x20) {
      if ((*param_1 & 1 << ((byte)uVar12 & 0x1f)) == 0) {
        *param_1 = *param_1 | 1 << ((uint)uVar12 & 0x1f);
        puVar9 = param_1 + uVar12 * 4 + 0xe;
      }
      else {
        puVar9 = *(uint **)(param_1 + uVar12 * 4 + 0x12);
      }
      *(ulonglong **)(param_1 + uVar12 * 4 + 0x12) = puVar1;
      *(ulonglong **)(puVar9 + 6) = puVar1;
      puVar1[2] = (ulonglong)puVar9;
      puVar1[3] = (ulonglong)(param_1 + uVar12 * 4 + 0xe);
      return;
    }
    uVar7 = (uint)(uVar14 >> 8);
    if (uVar7 == 0) {
      uVar12 = 0;
    }
    else if (uVar7 < 0x10000) {
      iVar3 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      uVar12 = (ulonglong)((uint)(uVar14 >> ((char)iVar3 + 7U & 0x3f)) & 1 | iVar3 * 2);
    }
    else {
      uVar12 = 0x1f;
    }
    puVar1[7] = uVar12;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar13 = (ulonglong *)(param_1 + uVar12 * 2 + 0x92);
    if ((param_1[1] & 1 << ((byte)uVar12 & 0x1f)) == 0) {
      param_1[1] = param_1[1] | 1 << ((uint)uVar12 & 0x1f);
      *puVar13 = (ulonglong)puVar1;
      puVar1[6] = (ulonglong)puVar13;
      puVar1[3] = (ulonglong)puVar1;
      puVar1[2] = (ulonglong)puVar1;
      return;
    }
    bVar6 = 0x39 - (char)(uVar12 >> 1);
    if (uVar12 == 0x1f) {
      bVar6 = 0;
    }
    lVar10 = uVar14 << (bVar6 & 0x3f);
    uVar12 = *(ulonglong *)(*puVar13 + 8);
    uVar5 = *puVar13;
    while ((uVar12 & 0xfffffffffffffffc) != uVar14) {
      uVar2 = *(ulonglong *)(uVar5 + 0x20 + (lVar10 >> 0x3f) * -8);
      if (uVar2 == 0) {
        *(ulonglong **)(uVar5 + 0x20 + (lVar10 >> 0x3f) * -8) = puVar1;
        puVar1[6] = uVar5;
        puVar1[3] = (ulonglong)puVar1;
        puVar1[2] = (ulonglong)puVar1;
        return;
      }
      lVar10 = lVar10 * 2;
      uVar5 = uVar2;
      uVar12 = *(ulonglong *)(uVar2 + 8);
    }
    uVar12 = *(ulonglong *)(uVar5 + 0x10);
    *(ulonglong **)(uVar12 + 0x18) = puVar1;
    *(ulonglong **)(uVar5 + 0x10) = puVar1;
    puVar1[2] = uVar12;
    puVar1[3] = uVar5;
    puVar1[6] = 0;
  }
  return;
}



/* ===== 1804b6d00 FUN_1804b6d00 ===== */

longlong FUN_1804b6d00(longlong param_1,ulonglong param_2)

{
  DWORD DVar1;
  LPVOID pvVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  LPVOID pvVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if ((0x1ffff < param_2) && (uVar9 = param_2 + 0x20036 & 0xfffffffffffe0000, param_2 < uVar9)) {
    DVar1 = GetLastError();
    pvVar2 = VirtualAlloc((LPVOID)0x0,uVar9,0x103000,4);
    SetLastError(DVar1);
    pvVar8 = (LPVOID)0xffffffffffffffff;
    if (pvVar2 != (LPVOID)0x0) {
      pvVar8 = pvVar2;
    }
    if (pvVar8 != (LPVOID)0xffffffffffffffff) {
      if (((ulonglong)pvVar8 & 7) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (ulonglong)(-((uint)pvVar8 & 7) & 7);
      }
      lVar10 = uVar9 - uVar7;
      puVar3 = (ulonglong *)(uVar7 + (longlong)pvVar8);
      *puVar3 = uVar7 | 1;
      puVar3[1] = lVar10 - 0x20U | 2;
      lVar4 = (uVar7 | 0x10) + (longlong)pvVar8;
      *(undefined8 *)((longlong)puVar3 + lVar10 + -0x18) = 0xb;
      *(undefined8 *)((longlong)puVar3 + lVar10 + -0x10) = 0;
      if (lVar4 != 0) {
        return lVar4;
      }
    }
  }
  uVar9 = param_2 + 0x20040 & 0xfffffffffffe0000;
  if (param_2 < uVar9) {
    DVar1 = GetLastError();
    pvVar2 = VirtualAlloc((LPVOID)0x0,uVar9,0x3000,4);
    SetLastError(DVar1);
    pvVar8 = (LPVOID)0xffffffffffffffff;
    if (pvVar2 != (LPVOID)0x0) {
      pvVar8 = pvVar2;
    }
    if (pvVar8 != (LPVOID)0xffffffffffffffff) {
      puVar3 = (ulonglong *)(param_1 + 0x348);
      puVar5 = puVar3;
      if (puVar3 != (ulonglong *)0x0) {
        do {
          pvVar2 = (LPVOID)(puVar5[1] + (longlong)*puVar5);
          if (pvVar8 == pvVar2) {
            if (((LPVOID)*puVar5 <= *(LPVOID *)(param_1 + 0x20)) &&
               (*(LPVOID *)(param_1 + 0x20) < pvVar2)) {
              puVar5[1] = puVar5[1] + uVar9;
              uVar7 = *(ulonglong *)(param_1 + 0x20);
              if ((uVar7 & 7) == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = (ulonglong)(-((uint)uVar7 & 7) & 7);
              }
              lVar4 = uVar7 + uVar6;
              uVar6 = (*(longlong *)(param_1 + 0x10) + uVar9) - uVar6;
              *(longlong *)(param_1 + 0x20) = lVar4;
              *(ulonglong *)(param_1 + 0x10) = uVar6;
              *(ulonglong *)(lVar4 + 8) = uVar6 | 1;
              *(undefined8 *)(lVar4 + 8 + uVar6) = 0x40;
              *(undefined8 *)(param_1 + 0x28) = 0x200000;
              goto LAB_1804b6e73;
            }
            break;
          }
          puVar5 = (ulonglong *)puVar5[2];
        } while (puVar5 != (ulonglong *)0x0);
        do {
          uVar7 = *puVar3;
          if (uVar7 == uVar9 + (longlong)pvVar8) {
            *puVar3 = (ulonglong)pvVar8;
            puVar3[1] = puVar3[1] + uVar9;
            lVar4 = FUN_1804b7e60(param_1,pvVar8,uVar7,param_2);
            return lVar4;
          }
          puVar3 = (ulonglong *)puVar3[2];
        } while (puVar3 != (ulonglong *)0x0);
      }
      FUN_1804b6a50(param_1,pvVar8,uVar9);
LAB_1804b6e73:
      if (param_2 < *(ulonglong *)(param_1 + 0x10)) {
        lVar4 = *(longlong *)(param_1 + 0x20);
        uVar9 = *(ulonglong *)(param_1 + 0x10) - param_2;
        *(ulonglong *)(param_1 + 0x10) = uVar9;
        *(ulonglong *)(param_1 + 0x20) = lVar4 + param_2;
        *(ulonglong *)(lVar4 + param_2 + 8) = uVar9 | 1;
        *(ulonglong *)(lVar4 + 8) = param_2 | 3;
        return lVar4 + 0x10;
      }
    }
  }
  return 0;
}



/* ===== 1804b6f50 FUN_1804b6f50 ===== */

longlong FUN_1804b6f50(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  DWORD dwErrCode;
  LPVOID pvVar6;
  ulonglong uVar7;
  longlong lVar8;
  LPVOID pvVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  dwErrCode = GetLastError();
  pvVar6 = VirtualAlloc((LPVOID)0x0,0x20000,0x3000,4);
  SetLastError(dwErrCode);
  pvVar9 = (LPVOID)0xffffffffffffffff;
  if (pvVar6 != (LPVOID)0x0) {
    pvVar9 = pvVar6;
  }
  if (pvVar9 == (LPVOID)0xffffffffffffffff) {
    return 0;
  }
  if (((ulonglong)pvVar9 & 7) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (ulonglong)(-((uint)pvVar9 & 7) & 7);
  }
  puVar5 = (undefined8 *)((uVar11 | 0x10) + (longlong)pvVar9);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined8 *)((uVar11 | 0x28) + (longlong)pvVar9) = 0;
  puVar5 = (undefined8 *)((uVar11 | 0x48) + (longlong)pvVar9);
  *puVar5 = 0;
  puVar5[1] = 0;
  FUN_180540170((uVar11 | 600) + (longlong)pvVar9,0,0x100);
  puVar5 = (undefined8 *)((uVar11 | 0x368) + (longlong)pvVar9);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined8 *)((uVar11 | 0x368) + 0x10 + (longlong)pvVar9) = 0;
  plVar1 = (longlong *)((longlong)pvVar9 + uVar11 + 0x58);
  *(undefined8 *)((longlong)pvVar9 + uVar11 + 8) = 0x373;
  lVar8 = (uVar11 | 0x48) + (longlong)pvVar9;
  *(LPVOID *)((longlong)pvVar9 + uVar11 + 0x358) = pvVar9;
  *(undefined8 *)((longlong)pvVar9 + uVar11 + 0x360) = 0x20000;
  *(undefined8 *)((longlong)pvVar9 + uVar11 + 0x40) = 0xff;
  *plVar1 = lVar8;
  *(longlong *)((longlong)pvVar9 + uVar11 + 0x60) = lVar8;
  plVar2 = (longlong *)((longlong)pvVar9 + uVar11 + 0x68);
  *(longlong **)((longlong)pvVar9 + uVar11 + 0x70) = plVar1;
  *plVar2 = (longlong)plVar1;
  puVar5 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x78);
  *(longlong **)((longlong)pvVar9 + uVar11 + 0x80) = plVar2;
  *puVar5 = plVar2;
  puVar3 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x88);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x90) = puVar5;
  *puVar3 = puVar5;
  puVar5 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x98);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0xa0) = puVar3;
  *puVar5 = puVar3;
  puVar3 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0xa8);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0xb0) = puVar5;
  *puVar3 = puVar5;
  puVar5 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0xb8);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0xc0) = puVar3;
  *puVar5 = puVar3;
  puVar3 = (undefined8 *)((longlong)pvVar9 + uVar11 + 200);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0xd0) = puVar5;
  *puVar3 = puVar5;
  puVar5 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0xd8);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0xe0) = puVar3;
  *puVar5 = puVar3;
  puVar3 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0xe8);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0xf0) = puVar5;
  *puVar3 = puVar5;
  puVar5 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0xf8);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x100) = puVar3;
  *puVar5 = puVar3;
  puVar3 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x108);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x110) = puVar5;
  *puVar3 = puVar5;
  puVar5 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x118);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x120) = puVar3;
  *puVar5 = puVar3;
  puVar3 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x128);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x130) = puVar5;
  *puVar3 = puVar5;
  puVar5 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x138);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x140) = puVar3;
  *puVar5 = puVar3;
  puVar3 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x148);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x150) = puVar5;
  *puVar3 = puVar5;
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x160) = puVar3;
  puVar5 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x158);
  *puVar5 = puVar3;
  puVar3 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x228);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x170) = puVar5;
  puVar4 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x168);
  *puVar4 = puVar5;
  puVar5 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x178);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x180) = puVar4;
  *puVar5 = puVar4;
  puVar4 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x188);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 400) = puVar5;
  *puVar4 = puVar5;
  puVar5 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x198);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x1a0) = puVar4;
  *puVar5 = puVar4;
  puVar4 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x1a8);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x1b0) = puVar5;
  *puVar4 = puVar5;
  puVar5 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x1b8);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x1c0) = puVar4;
  *puVar5 = puVar4;
  puVar4 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x1c8);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x1d0) = puVar5;
  *puVar4 = puVar5;
  puVar5 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x1d8);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x1e0) = puVar4;
  *puVar5 = puVar4;
  puVar4 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x1e8);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x1f0) = puVar5;
  *puVar4 = puVar5;
  puVar5 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x1f8);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x200) = puVar4;
  *puVar5 = puVar4;
  puVar4 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x208);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x210) = puVar5;
  *puVar4 = puVar5;
  puVar5 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x218);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x220) = puVar4;
  *puVar5 = puVar4;
  puVar4 = (undefined8 *)((longlong)pvVar9 + uVar11 + 0x238);
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x230) = puVar5;
  *puVar3 = puVar5;
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x240) = puVar3;
  *puVar4 = puVar3;
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x250) = puVar4;
  *(undefined8 **)((longlong)pvVar9 + uVar11 + 0x248) = puVar4;
  uVar10 = (longlong)pvVar9 + uVar11 + 0x370;
  if ((uVar10 & 7) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulonglong)(-((uint)uVar10 & 7) & 7);
  }
  uVar10 = (longlong)pvVar9 + ((0x1ffc0 - uVar10) - uVar7);
  lVar8 = (longlong)pvVar9 + uVar7 + 0x370 + uVar11;
  *(ulonglong *)((longlong)pvVar9 + uVar11 + 0x20) = uVar10;
  *(longlong *)((longlong)pvVar9 + uVar11 + 0x30) = lVar8;
  *(ulonglong *)((longlong)pvVar9 + uVar7 + 0x378 + uVar11) = uVar10 | 1;
  *(undefined8 *)(lVar8 + 8 + uVar10) = 0x40;
  *(undefined8 *)((longlong)pvVar9 + uVar11 + 0x38) = 0x200000;
  return (uVar11 | 0x10) + (longlong)pvVar9;
}



/* ===== 1804b72e0 FUN_1804b72e0 ===== */

void FUN_1804b72e0(longlong param_1)

{
  undefined8 *puVar1;
  DWORD dwErrCode;
  BOOL BVar2;
  SIZE_T SVar3;
  LPCVOID lpAddress;
  ulonglong uVar4;
  _MEMORY_BASIC_INFORMATION local_38;
  
  puVar1 = (undefined8 *)(param_1 + 0x348);
joined_r0x0001804b72f0:
  do {
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    lpAddress = (LPCVOID)*puVar1;
    uVar4 = puVar1[1];
    puVar1 = (undefined8 *)puVar1[2];
    dwErrCode = GetLastError();
    for (; uVar4 != 0; uVar4 = uVar4 - local_38.RegionSize) {
      SVar3 = VirtualQuery(lpAddress,&local_38,0x30);
      if ((((SVar3 == 0) || (local_38.BaseAddress != lpAddress)) ||
          (local_38.AllocationBase != lpAddress)) ||
         (((local_38.State != 0x1000 || (uVar4 < local_38.RegionSize)) ||
          (BVar2 = VirtualFree(lpAddress,0,0x8000), BVar2 == 0)))) goto joined_r0x0001804b72f0;
      lpAddress = (LPCVOID)((longlong)lpAddress + local_38.RegionSize);
    }
    SetLastError(dwErrCode);
  } while( true );
}



/* ===== 1804b73a0 FUN_1804b73a0 ===== */

undefined8 FUN_1804b73a0(uint *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  ulonglong *puVar10;
  byte bVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  
  if (param_4 != 0) {
    if (param_2 == 0) {
      uVar6 = FUN_1804b79d0(param_1,param_4);
      return uVar6;
    }
    uVar6 = FUN_1804b7cc0(param_1,param_2,param_4);
    return uVar6;
  }
  if (param_2 == 0) {
    return 0;
  }
  puVar18 = (ulonglong *)(param_2 + -0x10);
  uVar20 = *(ulonglong *)(param_2 + -8) & 0xfffffffffffffffc;
  plVar2 = (longlong *)(uVar20 + param_2);
  if ((*(ulonglong *)(param_2 + -8) & 1) == 0) {
    uVar15 = *puVar18;
    if ((uVar15 & 1) != 0) {
      FUN_1804b69a0((longlong)puVar18 - (uVar15 & 0xfffffffffffffffe),
                    uVar20 + 0x20 + (uVar15 & 0xfffffffffffffffe));
      return 0;
    }
    uVar20 = uVar20 + uVar15;
    puVar18 = (ulonglong *)((longlong)puVar18 - uVar15);
    if (puVar18 == *(ulonglong **)(param_1 + 6)) {
      if ((*(byte *)(plVar2 + -1) & 3) == 3) {
        *(ulonglong *)(param_1 + 2) = uVar20;
        plVar2[-1] = plVar2[-1] & 0xfffffffffffffffe;
        puVar18[1] = uVar20 | 1;
        *(ulonglong *)(uVar20 + (longlong)puVar18) = uVar20;
        return 0;
      }
    }
    else if (uVar15 >> 3 < 0x20) {
      uVar16 = puVar18[2];
      uVar7 = puVar18[3];
      if (uVar16 == uVar7) {
        *param_1 = *param_1 & ~(1 << ((uint)(uVar15 >> 3) & 0x1f));
      }
      else {
        *(ulonglong *)(uVar16 + 0x18) = uVar7;
        *(ulonglong *)(uVar7 + 0x10) = uVar16;
      }
    }
    else {
      puVar17 = (ulonglong *)puVar18[3];
      uVar15 = puVar18[6];
      if (puVar17 == puVar18) {
        puVar17 = (ulonglong *)puVar18[5];
        if (puVar17 == (ulonglong *)0x0) {
          puVar17 = (ulonglong *)puVar18[4];
          if (puVar17 == (ulonglong *)0x0) goto LAB_1804b74d6;
          lVar12 = 0x20;
        }
        else {
          lVar12 = 0x28;
        }
        puVar10 = (ulonglong *)(lVar12 + (longlong)puVar18);
        while( true ) {
          while ((ulonglong *)puVar17[5] != (ulonglong *)0x0) {
            puVar10 = puVar17 + 5;
            puVar17 = (ulonglong *)puVar17[5];
          }
          if ((ulonglong *)puVar17[4] == (ulonglong *)0x0) break;
          puVar10 = puVar17 + 4;
          puVar17 = (ulonglong *)puVar17[4];
        }
        *puVar10 = 0;
      }
      else {
        uVar16 = puVar18[2];
        *(ulonglong **)(uVar16 + 0x18) = puVar17;
        puVar17[2] = uVar16;
      }
LAB_1804b74d6:
      if (uVar15 != 0) {
        if (puVar18 == *(ulonglong **)(param_1 + puVar18[7] * 2 + 0x92)) {
          *(ulonglong **)(param_1 + puVar18[7] * 2 + 0x92) = puVar17;
          if (puVar17 == (ulonglong *)0x0) {
            param_1[1] = param_1[1] & ~(1 << ((uint)puVar18[7] & 0x1f));
          }
          else {
LAB_1804b751e:
            puVar17[6] = uVar15;
            uVar15 = puVar18[4];
            if (uVar15 != 0) {
              puVar17[4] = uVar15;
              *(ulonglong **)(uVar15 + 0x30) = puVar17;
            }
            uVar15 = puVar18[5];
            if (uVar15 != 0) {
              puVar17[5] = uVar15;
              *(ulonglong **)(uVar15 + 0x30) = puVar17;
            }
          }
        }
        else {
          if (*(ulonglong **)(uVar15 + 0x20) == puVar18) {
            *(ulonglong **)(uVar15 + 0x20) = puVar17;
          }
          else {
            *(ulonglong **)(uVar15 + 0x28) = puVar17;
          }
          if (puVar17 != (ulonglong *)0x0) goto LAB_1804b751e;
        }
      }
    }
  }
  puVar9 = param_1 + 6;
  uVar15 = plVar2[-1];
  if ((uVar15 & 2) != 0) {
    plVar2[-1] = uVar15 & 0xfffffffffffffffe;
    puVar18[1] = uVar20 | 1;
    *(ulonglong *)(uVar20 + (longlong)puVar18) = uVar20;
    goto LAB_1804b786a;
  }
  plVar1 = plVar2 + -2;
  if (plVar1 == *(longlong **)(param_1 + 8)) {
    *(ulonglong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + uVar20;
    uVar20 = *(ulonglong *)(param_1 + 4);
    *(ulonglong **)(param_1 + 8) = puVar18;
    puVar18[1] = uVar20 | 1;
    if (puVar18 == *(ulonglong **)puVar9) {
      puVar9[0] = 0;
      puVar9[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    if (uVar20 <= *(ulonglong *)(param_1 + 10)) {
      return 0;
    }
    uVar20 = *(ulonglong *)(param_1 + 8);
    if (uVar20 == 0) {
      return 0;
    }
    uVar15 = 0;
    if (0x40 < *(ulonglong *)(param_1 + 4)) {
      puVar18 = (ulonglong *)(param_1 + 0xd2);
      uVar16 = (*(ulonglong *)(param_1 + 4) + 0x1ffbf & 0xfffffffffffe0000) - 0x20000;
      puVar17 = puVar18;
      do {
        if ((*puVar17 <= uVar20) && (uVar20 < *puVar17 + puVar17[1])) goto LAB_1804b7624;
        puVar17 = (ulonglong *)puVar17[2];
      } while (puVar17 != (ulonglong *)0x0);
      puVar17 = (ulonglong *)0x0;
LAB_1804b7624:
      uVar20 = puVar17[1];
      if (uVar16 <= uVar20) {
        puVar10 = (ulonglong *)*puVar17;
        do {
          if ((puVar10 <= puVar18) && (puVar18 < (ulonglong *)(uVar20 + (longlong)puVar10)))
          goto LAB_1804b76b1;
          puVar18 = (ulonglong *)puVar18[2];
        } while (puVar18 != (ulonglong *)0x0);
        iVar4 = FUN_1804b69a0((uVar20 - uVar16) + (longlong)puVar10,uVar16);
        if ((iVar4 == 0) && (uVar15 = uVar16, uVar16 != 0)) {
          puVar17[1] = puVar17[1] - uVar16;
          uVar20 = *(ulonglong *)(param_1 + 8);
          if ((uVar20 & 7) == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (ulonglong)(-((uint)uVar20 & 7) & 7);
          }
          lVar12 = uVar20 + uVar7;
          uVar7 = (*(longlong *)(param_1 + 4) - uVar16) - uVar7;
          *(longlong *)(param_1 + 8) = lVar12;
          *(ulonglong *)(param_1 + 4) = uVar7;
          *(ulonglong *)(lVar12 + 8) = uVar7 | 1;
          *(undefined8 *)(lVar12 + 8 + uVar7) = 0x40;
          param_1[10] = 0x200000;
          param_1[0xb] = 0;
        }
      }
    }
LAB_1804b76b1:
    lVar12 = FUN_1804b81c0(param_1);
    if (lVar12 + uVar15 != 0) {
      return 0;
    }
    if (*(ulonglong *)(param_1 + 10) < *(ulonglong *)(param_1 + 4)) {
      param_1[10] = 0xffffffff;
      param_1[0xb] = 0xffffffff;
      return 0;
    }
    return 0;
  }
  if (plVar1 == *(longlong **)puVar9) {
    *(ulonglong *)(param_1 + 2) = *(longlong *)(param_1 + 2) + uVar20;
    uVar20 = *(ulonglong *)(param_1 + 2);
    *(ulonglong **)puVar9 = puVar18;
    puVar18[1] = uVar20 | 1;
    *(ulonglong *)(uVar20 + (longlong)puVar18) = uVar20;
    return 0;
  }
  uVar20 = uVar20 + (uVar15 & 0xfffffffffffffffc);
  if (uVar15 >> 3 < 0x20) {
    lVar12 = *plVar2;
    lVar8 = plVar2[1];
    if (lVar12 == lVar8) {
      *param_1 = *param_1 & ~(1 << ((uint)(uVar15 >> 3) & 0x1f));
    }
    else {
      *(longlong *)(lVar12 + 0x18) = lVar8;
      *(longlong *)(lVar8 + 0x10) = lVar12;
    }
  }
  else {
    plVar13 = (longlong *)plVar2[1];
    lVar12 = plVar2[4];
    if (plVar13 == plVar1) {
      plVar13 = (longlong *)plVar2[3];
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)plVar2[2];
        if (plVar13 == (longlong *)0x0) goto LAB_1804b77c1;
        lVar8 = 0x10;
      }
      else {
        lVar8 = 0x18;
      }
      plVar19 = (longlong *)(lVar8 + (longlong)plVar2);
      while( true ) {
        while ((longlong *)plVar13[5] != (longlong *)0x0) {
          plVar19 = plVar13 + 5;
          plVar13 = (longlong *)plVar13[5];
        }
        if ((longlong *)plVar13[4] == (longlong *)0x0) break;
        plVar19 = plVar13 + 4;
        plVar13 = (longlong *)plVar13[4];
      }
      *plVar19 = 0;
    }
    else {
      lVar8 = *plVar2;
      *(longlong **)(lVar8 + 0x18) = plVar13;
      plVar13[2] = lVar8;
    }
LAB_1804b77c1:
    if (lVar12 != 0) {
      if (plVar1 == *(longlong **)(param_1 + plVar2[5] * 2 + 0x92)) {
        *(longlong **)(param_1 + plVar2[5] * 2 + 0x92) = plVar13;
        if (plVar13 == (longlong *)0x0) {
          param_1[1] = param_1[1] & ~(1 << (*(uint *)(plVar2 + 5) & 0x1f));
        }
        else {
LAB_1804b7805:
          plVar13[6] = lVar12;
          lVar12 = plVar2[2];
          if (lVar12 != 0) {
            plVar13[4] = lVar12;
            *(longlong **)(lVar12 + 0x30) = plVar13;
          }
          lVar12 = plVar2[3];
          if (lVar12 != 0) {
            plVar13[5] = lVar12;
            *(longlong **)(lVar12 + 0x30) = plVar13;
          }
        }
      }
      else {
        if (*(longlong **)(lVar12 + 0x20) == plVar1) {
          *(longlong **)(lVar12 + 0x20) = plVar13;
        }
        else {
          *(longlong **)(lVar12 + 0x28) = plVar13;
        }
        if (plVar13 != (longlong *)0x0) goto LAB_1804b7805;
      }
    }
  }
  puVar18[1] = uVar20 | 1;
  *(ulonglong *)(uVar20 + (longlong)puVar18) = uVar20;
  if (puVar18 == *(ulonglong **)puVar9) {
    *(ulonglong *)(param_1 + 2) = uVar20;
    return 0;
  }
LAB_1804b786a:
  uVar15 = uVar20 >> 3;
  if (uVar15 < 0x20) {
    if ((*param_1 & 1 << ((byte)uVar15 & 0x1f)) == 0) {
      *param_1 = *param_1 | 1 << ((uint)uVar15 & 0x1f);
      puVar9 = param_1 + uVar15 * 4 + 0xe;
    }
    else {
      puVar9 = *(uint **)(param_1 + uVar15 * 4 + 0x12);
    }
    *(ulonglong **)(param_1 + uVar15 * 4 + 0x12) = puVar18;
    *(ulonglong **)(puVar9 + 6) = puVar18;
    puVar18[2] = (ulonglong)puVar9;
    puVar18[3] = (ulonglong)(param_1 + uVar15 * 4 + 0xe);
    return 0;
  }
  uVar5 = (uint)(uVar20 >> 8);
  if (uVar5 == 0) {
    uVar15 = 0;
  }
  else if (uVar5 < 0x10000) {
    iVar4 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    uVar15 = (ulonglong)((uint)(uVar20 >> ((char)iVar4 + 7U & 0x3f)) & 1 | iVar4 * 2);
  }
  else {
    uVar15 = 0x1f;
  }
  puVar18[7] = uVar15;
  puVar18[5] = 0;
  puVar18[4] = 0;
  puVar17 = (ulonglong *)(param_1 + uVar15 * 2 + 0x92);
  puVar10 = puVar18;
  puVar14 = puVar18;
  if ((param_1[1] & 1 << ((byte)uVar15 & 0x1f)) == 0) {
    param_1[1] = param_1[1] | 1 << ((uint)uVar15 & 0x1f);
    *puVar17 = (ulonglong)puVar18;
  }
  else {
    bVar11 = 0x39 - (char)(uVar15 >> 1);
    uVar16 = ((ulonglong *)*puVar17)[1];
    if (uVar15 == 0x1f) {
      bVar11 = 0;
    }
    lVar12 = uVar20 << (bVar11 & 0x3f);
    puVar17 = (ulonglong *)*puVar17;
    while ((uVar16 & 0xfffffffffffffffc) != uVar20) {
      puVar3 = (ulonglong *)puVar17[4 - (lVar12 >> 0x3f)];
      if (puVar3 == (ulonglong *)0x0) {
        puVar17[4 - (lVar12 >> 0x3f)] = (ulonglong)puVar18;
        goto LAB_1804b7997;
      }
      lVar12 = lVar12 * 2;
      puVar17 = puVar3;
      uVar16 = puVar3[1];
    }
    puVar10 = (ulonglong *)puVar17[2];
    puVar10[3] = (ulonglong)puVar18;
    puVar17[2] = (ulonglong)puVar18;
    puVar14 = puVar17;
    puVar17 = (ulonglong *)0x0;
  }
LAB_1804b7997:
  puVar18[6] = (ulonglong)puVar17;
  puVar18[3] = (ulonglong)puVar14;
  puVar18[2] = (ulonglong)puVar10;
  puVar9 = param_1 + 0xc;
  *(longlong *)puVar9 = *(longlong *)puVar9 + -1;
  if (*(longlong *)puVar9 == 0) {
    FUN_1804b81c0(param_1);
  }
  return 0;
}



/* ===== 1804b73c0 FUN_1804b73c0 ===== */

undefined8 FUN_1804b73c0(uint *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong *puVar9;
  byte bVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar17 = (ulonglong *)(param_2 + -0x10);
  uVar19 = *(ulonglong *)(param_2 + -8) & 0xfffffffffffffffc;
  plVar2 = (longlong *)(uVar19 + param_2);
  if ((*(ulonglong *)(param_2 + -8) & 1) == 0) {
    uVar14 = *puVar17;
    if ((uVar14 & 1) != 0) {
      FUN_1804b69a0((longlong)puVar17 - (uVar14 & 0xfffffffffffffffe),
                    uVar19 + 0x20 + (uVar14 & 0xfffffffffffffffe));
      return 0;
    }
    uVar19 = uVar19 + uVar14;
    puVar17 = (ulonglong *)((longlong)puVar17 - uVar14);
    if (puVar17 == *(ulonglong **)(param_1 + 6)) {
      if ((*(byte *)(plVar2 + -1) & 3) == 3) {
        *(ulonglong *)(param_1 + 2) = uVar19;
        plVar2[-1] = plVar2[-1] & 0xfffffffffffffffe;
        puVar17[1] = uVar19 | 1;
        *(ulonglong *)(uVar19 + (longlong)puVar17) = uVar19;
        return 0;
      }
    }
    else if (uVar14 >> 3 < 0x20) {
      uVar15 = puVar17[2];
      uVar6 = puVar17[3];
      if (uVar15 == uVar6) {
        *param_1 = *param_1 & ~(1 << ((uint)(uVar14 >> 3) & 0x1f));
      }
      else {
        *(ulonglong *)(uVar15 + 0x18) = uVar6;
        *(ulonglong *)(uVar6 + 0x10) = uVar15;
      }
    }
    else {
      puVar16 = (ulonglong *)puVar17[3];
      uVar14 = puVar17[6];
      if (puVar16 == puVar17) {
        puVar16 = (ulonglong *)puVar17[5];
        if (puVar16 == (ulonglong *)0x0) {
          puVar16 = (ulonglong *)puVar17[4];
          if (puVar16 == (ulonglong *)0x0) goto LAB_1804b74d6;
          lVar11 = 0x20;
        }
        else {
          lVar11 = 0x28;
        }
        puVar9 = (ulonglong *)(lVar11 + (longlong)puVar17);
        while( true ) {
          while ((ulonglong *)puVar16[5] != (ulonglong *)0x0) {
            puVar9 = puVar16 + 5;
            puVar16 = (ulonglong *)puVar16[5];
          }
          if ((ulonglong *)puVar16[4] == (ulonglong *)0x0) break;
          puVar9 = puVar16 + 4;
          puVar16 = (ulonglong *)puVar16[4];
        }
        *puVar9 = 0;
      }
      else {
        uVar15 = puVar17[2];
        *(ulonglong **)(uVar15 + 0x18) = puVar16;
        puVar16[2] = uVar15;
      }
LAB_1804b74d6:
      if (uVar14 != 0) {
        if (puVar17 == *(ulonglong **)(param_1 + puVar17[7] * 2 + 0x92)) {
          *(ulonglong **)(param_1 + puVar17[7] * 2 + 0x92) = puVar16;
          if (puVar16 == (ulonglong *)0x0) {
            param_1[1] = param_1[1] & ~(1 << ((uint)puVar17[7] & 0x1f));
          }
          else {
LAB_1804b751e:
            puVar16[6] = uVar14;
            uVar14 = puVar17[4];
            if (uVar14 != 0) {
              puVar16[4] = uVar14;
              *(ulonglong **)(uVar14 + 0x30) = puVar16;
            }
            uVar14 = puVar17[5];
            if (uVar14 != 0) {
              puVar16[5] = uVar14;
              *(ulonglong **)(uVar14 + 0x30) = puVar16;
            }
          }
        }
        else {
          if (*(ulonglong **)(uVar14 + 0x20) == puVar17) {
            *(ulonglong **)(uVar14 + 0x20) = puVar16;
          }
          else {
            *(ulonglong **)(uVar14 + 0x28) = puVar16;
          }
          if (puVar16 != (ulonglong *)0x0) goto LAB_1804b751e;
        }
      }
    }
  }
  puVar8 = param_1 + 6;
  uVar14 = plVar2[-1];
  if ((uVar14 & 2) != 0) {
    plVar2[-1] = uVar14 & 0xfffffffffffffffe;
    puVar17[1] = uVar19 | 1;
    *(ulonglong *)(uVar19 + (longlong)puVar17) = uVar19;
    goto LAB_1804b786a;
  }
  plVar1 = plVar2 + -2;
  if (plVar1 == *(longlong **)(param_1 + 8)) {
    *(ulonglong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + uVar19;
    uVar19 = *(ulonglong *)(param_1 + 4);
    *(ulonglong **)(param_1 + 8) = puVar17;
    puVar17[1] = uVar19 | 1;
    if (puVar17 == *(ulonglong **)puVar8) {
      puVar8[0] = 0;
      puVar8[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    if (uVar19 <= *(ulonglong *)(param_1 + 10)) {
      return 0;
    }
    uVar19 = *(ulonglong *)(param_1 + 8);
    if (uVar19 == 0) {
      return 0;
    }
    uVar14 = 0;
    if (0x40 < *(ulonglong *)(param_1 + 4)) {
      puVar17 = (ulonglong *)(param_1 + 0xd2);
      uVar15 = (*(ulonglong *)(param_1 + 4) + 0x1ffbf & 0xfffffffffffe0000) - 0x20000;
      puVar16 = puVar17;
      do {
        if ((*puVar16 <= uVar19) && (uVar19 < *puVar16 + puVar16[1])) goto LAB_1804b7624;
        puVar16 = (ulonglong *)puVar16[2];
      } while (puVar16 != (ulonglong *)0x0);
      puVar16 = (ulonglong *)0x0;
LAB_1804b7624:
      uVar19 = puVar16[1];
      if (uVar15 <= uVar19) {
        puVar9 = (ulonglong *)*puVar16;
        do {
          if ((puVar9 <= puVar17) && (puVar17 < (ulonglong *)(uVar19 + (longlong)puVar9)))
          goto LAB_1804b76b1;
          puVar17 = (ulonglong *)puVar17[2];
        } while (puVar17 != (ulonglong *)0x0);
        iVar4 = FUN_1804b69a0((uVar19 - uVar15) + (longlong)puVar9,uVar15);
        if ((iVar4 == 0) && (uVar14 = uVar15, uVar15 != 0)) {
          puVar16[1] = puVar16[1] - uVar15;
          uVar19 = *(ulonglong *)(param_1 + 8);
          if ((uVar19 & 7) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulonglong)(-((uint)uVar19 & 7) & 7);
          }
          lVar11 = uVar19 + uVar6;
          uVar6 = (*(longlong *)(param_1 + 4) - uVar15) - uVar6;
          *(longlong *)(param_1 + 8) = lVar11;
          *(ulonglong *)(param_1 + 4) = uVar6;
          *(ulonglong *)(lVar11 + 8) = uVar6 | 1;
          *(undefined8 *)(lVar11 + 8 + uVar6) = 0x40;
          param_1[10] = 0x200000;
          param_1[0xb] = 0;
        }
      }
    }
LAB_1804b76b1:
    lVar11 = FUN_1804b81c0(param_1);
    if (lVar11 + uVar14 != 0) {
      return 0;
    }
    if (*(ulonglong *)(param_1 + 10) < *(ulonglong *)(param_1 + 4)) {
      param_1[10] = 0xffffffff;
      param_1[0xb] = 0xffffffff;
      return 0;
    }
    return 0;
  }
  if (plVar1 == *(longlong **)puVar8) {
    *(ulonglong *)(param_1 + 2) = *(longlong *)(param_1 + 2) + uVar19;
    uVar19 = *(ulonglong *)(param_1 + 2);
    *(ulonglong **)puVar8 = puVar17;
    puVar17[1] = uVar19 | 1;
    *(ulonglong *)(uVar19 + (longlong)puVar17) = uVar19;
    return 0;
  }
  uVar19 = uVar19 + (uVar14 & 0xfffffffffffffffc);
  if (uVar14 >> 3 < 0x20) {
    lVar11 = *plVar2;
    lVar7 = plVar2[1];
    if (lVar11 == lVar7) {
      *param_1 = *param_1 & ~(1 << ((uint)(uVar14 >> 3) & 0x1f));
    }
    else {
      *(longlong *)(lVar11 + 0x18) = lVar7;
      *(longlong *)(lVar7 + 0x10) = lVar11;
    }
  }
  else {
    plVar12 = (longlong *)plVar2[1];
    lVar11 = plVar2[4];
    if (plVar12 == plVar1) {
      plVar12 = (longlong *)plVar2[3];
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)plVar2[2];
        if (plVar12 == (longlong *)0x0) goto LAB_1804b77c1;
        lVar7 = 0x10;
      }
      else {
        lVar7 = 0x18;
      }
      plVar18 = (longlong *)(lVar7 + (longlong)plVar2);
      while( true ) {
        while ((longlong *)plVar12[5] != (longlong *)0x0) {
          plVar18 = plVar12 + 5;
          plVar12 = (longlong *)plVar12[5];
        }
        if ((longlong *)plVar12[4] == (longlong *)0x0) break;
        plVar18 = plVar12 + 4;
        plVar12 = (longlong *)plVar12[4];
      }
      *plVar18 = 0;
    }
    else {
      lVar7 = *plVar2;
      *(longlong **)(lVar7 + 0x18) = plVar12;
      plVar12[2] = lVar7;
    }
LAB_1804b77c1:
    if (lVar11 != 0) {
      if (plVar1 == *(longlong **)(param_1 + plVar2[5] * 2 + 0x92)) {
        *(longlong **)(param_1 + plVar2[5] * 2 + 0x92) = plVar12;
        if (plVar12 == (longlong *)0x0) {
          param_1[1] = param_1[1] & ~(1 << (*(uint *)(plVar2 + 5) & 0x1f));
        }
        else {
LAB_1804b7805:
          plVar12[6] = lVar11;
          lVar11 = plVar2[2];
          if (lVar11 != 0) {
            plVar12[4] = lVar11;
            *(longlong **)(lVar11 + 0x30) = plVar12;
          }
          lVar11 = plVar2[3];
          if (lVar11 != 0) {
            plVar12[5] = lVar11;
            *(longlong **)(lVar11 + 0x30) = plVar12;
          }
        }
      }
      else {
        if (*(longlong **)(lVar11 + 0x20) == plVar1) {
          *(longlong **)(lVar11 + 0x20) = plVar12;
        }
        else {
          *(longlong **)(lVar11 + 0x28) = plVar12;
        }
        if (plVar12 != (longlong *)0x0) goto LAB_1804b7805;
      }
    }
  }
  puVar17[1] = uVar19 | 1;
  *(ulonglong *)(uVar19 + (longlong)puVar17) = uVar19;
  if (puVar17 == *(ulonglong **)puVar8) {
    *(ulonglong *)(param_1 + 2) = uVar19;
    return 0;
  }
LAB_1804b786a:
  uVar14 = uVar19 >> 3;
  if (uVar14 < 0x20) {
    if ((*param_1 & 1 << ((byte)uVar14 & 0x1f)) == 0) {
      *param_1 = *param_1 | 1 << ((uint)uVar14 & 0x1f);
      puVar8 = param_1 + uVar14 * 4 + 0xe;
    }
    else {
      puVar8 = *(uint **)(param_1 + uVar14 * 4 + 0x12);
    }
    *(ulonglong **)(param_1 + uVar14 * 4 + 0x12) = puVar17;
    *(ulonglong **)(puVar8 + 6) = puVar17;
    puVar17[2] = (ulonglong)puVar8;
    puVar17[3] = (ulonglong)(param_1 + uVar14 * 4 + 0xe);
    return 0;
  }
  uVar5 = (uint)(uVar19 >> 8);
  if (uVar5 == 0) {
    uVar14 = 0;
  }
  else if (uVar5 < 0x10000) {
    iVar4 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    uVar14 = (ulonglong)((uint)(uVar19 >> ((char)iVar4 + 7U & 0x3f)) & 1 | iVar4 * 2);
  }
  else {
    uVar14 = 0x1f;
  }
  puVar17[7] = uVar14;
  puVar17[5] = 0;
  puVar17[4] = 0;
  puVar16 = (ulonglong *)(param_1 + uVar14 * 2 + 0x92);
  puVar9 = puVar17;
  puVar13 = puVar17;
  if ((param_1[1] & 1 << ((byte)uVar14 & 0x1f)) == 0) {
    param_1[1] = param_1[1] | 1 << ((uint)uVar14 & 0x1f);
    *puVar16 = (ulonglong)puVar17;
  }
  else {
    bVar10 = 0x39 - (char)(uVar14 >> 1);
    uVar15 = ((ulonglong *)*puVar16)[1];
    if (uVar14 == 0x1f) {
      bVar10 = 0;
    }
    lVar11 = uVar19 << (bVar10 & 0x3f);
    puVar16 = (ulonglong *)*puVar16;
    while ((uVar15 & 0xfffffffffffffffc) != uVar19) {
      puVar3 = (ulonglong *)puVar16[4 - (lVar11 >> 0x3f)];
      if (puVar3 == (ulonglong *)0x0) {
        puVar16[4 - (lVar11 >> 0x3f)] = (ulonglong)puVar17;
        goto LAB_1804b7997;
      }
      lVar11 = lVar11 * 2;
      puVar16 = puVar3;
      uVar15 = puVar3[1];
    }
    puVar9 = (ulonglong *)puVar16[2];
    puVar9[3] = (ulonglong)puVar17;
    puVar16[2] = (ulonglong)puVar17;
    puVar13 = puVar16;
    puVar16 = (ulonglong *)0x0;
  }
LAB_1804b7997:
  puVar17[6] = (ulonglong)puVar16;
  puVar17[3] = (ulonglong)puVar13;
  puVar17[2] = (ulonglong)puVar9;
  puVar8 = param_1 + 0xc;
  *(longlong *)puVar8 = *(longlong *)puVar8 + -1;
  if (*(longlong *)puVar8 == 0) {
    FUN_1804b81c0(param_1);
  }
  return 0;
}



/* ===== 1804b79d0 FUN_1804b79d0 ===== */

longlong FUN_1804b79d0(uint *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  if (param_2 < 0xf1) {
    if (param_2 < 0x17) {
      uVar11 = 0x20;
    }
    else {
      uVar11 = param_2 + 0xf & 0xfffffffffffffff8;
    }
    uVar2 = *param_1;
    bVar7 = (byte)(uVar11 >> 3);
    uVar12 = uVar2 >> (bVar7 & 0x1f);
    if ((uVar12 & 3) != 0) {
      lVar8 = (ulonglong)(~uVar12 & 1) + (uVar11 >> 3);
      lVar6 = *(longlong *)(param_1 + lVar8 * 4 + 0x12);
      puVar5 = *(uint **)(lVar6 + 0x10);
      if (param_1 + lVar8 * 4 + 0xe == puVar5) {
        *param_1 = uVar2 & ~(1 << ((uint)lVar8 & 0x1f));
      }
      else {
        *(uint **)(param_1 + lVar8 * 4 + 0x12) = puVar5;
        *(uint **)(puVar5 + 6) = param_1 + lVar8 * 4 + 0xe;
      }
      *(ulonglong *)(lVar6 + 8) = lVar8 * 8 | 3;
      puVar1 = (ulonglong *)(lVar8 * 8 + 8U + lVar6);
      *puVar1 = *puVar1 | 1;
      return lVar6 + 0x10;
    }
    if (*(ulonglong *)(param_1 + 2) < uVar11) {
      if (uVar12 != 0) {
        uVar4 = 2 << (bVar7 & 0x1f);
        uVar4 = (-uVar4 | uVar4) & uVar12 << (bVar7 & 0x1f);
        uVar12 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
          }
        }
        uVar9 = (ulonglong)uVar12;
        lVar6 = *(longlong *)(param_1 + uVar9 * 4 + 0x12);
        puVar5 = *(uint **)(lVar6 + 0x10);
        if (param_1 + uVar9 * 4 + 0xe == puVar5) {
          *param_1 = uVar2 & ~(1 << (uVar12 & 0x1f));
        }
        else {
          *(uint **)(param_1 + uVar9 * 4 + 0x12) = puVar5;
          *(uint **)(puVar5 + 6) = param_1 + uVar9 * 4 + 0xe;
        }
        uVar9 = (ulonglong)uVar12 * 8 - uVar11;
        if (uVar9 < 0x20) {
          uVar11 = (ulonglong)uVar12 * 8;
          *(ulonglong *)(lVar6 + 8) = uVar11 | 3;
          puVar1 = (ulonglong *)(uVar11 + 8 + lVar6);
          *puVar1 = *puVar1 | 1;
          return lVar6 + 0x10;
        }
        lVar8 = lVar6 + uVar11;
        *(ulonglong *)(lVar6 + 8) = uVar11 | 3;
        *(ulonglong *)(lVar8 + 8) = uVar9 | 1;
        *(ulonglong *)(lVar8 + uVar9) = uVar9;
        if (*(ulonglong *)(param_1 + 2) != 0) {
          lVar3 = *(longlong *)(param_1 + 6);
          uVar11 = *(ulonglong *)(param_1 + 2) >> 3;
          if ((1 << ((byte)uVar11 & 0x1f) & *param_1) == 0) {
            *param_1 = *param_1 | 1 << ((uint)uVar11 & 0x1f);
            puVar5 = param_1 + uVar11 * 4 + 0xe;
          }
          else {
            puVar5 = *(uint **)(param_1 + uVar11 * 4 + 0x12);
          }
          *(longlong *)(param_1 + uVar11 * 4 + 0x12) = lVar3;
          *(longlong *)(puVar5 + 6) = lVar3;
          *(uint **)(lVar3 + 0x10) = puVar5;
          *(uint **)(lVar3 + 0x18) = param_1 + uVar11 * 4 + 0xe;
        }
        *(ulonglong *)(param_1 + 2) = uVar9;
        *(longlong *)(param_1 + 6) = lVar8;
        return lVar6 + 0x10;
      }
      if ((param_1[1] != 0) && (lVar6 = FUN_1804b8900(param_1,uVar11), lVar6 != 0)) {
        return lVar6;
      }
    }
  }
  else if (param_2 < 0xffffffffffffff80) {
    uVar11 = param_2 + 0xf & 0xfffffffffffffff8;
    if ((param_1[1] != 0) && (lVar6 = FUN_1804b84d0(param_1,uVar11), lVar6 != 0)) {
      return lVar6;
    }
  }
  else {
    uVar11 = 0xffffffffffffffff;
  }
  uVar9 = *(ulonglong *)(param_1 + 2);
  if (uVar11 <= uVar9) {
    lVar6 = *(longlong *)(param_1 + 6);
    uVar10 = uVar9 - uVar11;
    if (uVar10 < 0x20) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(ulonglong *)(lVar6 + 8) = uVar9 | 3;
      puVar1 = (ulonglong *)(uVar9 + 8 + lVar6);
      *puVar1 = *puVar1 | 1;
      return lVar6 + 0x10;
    }
    lVar8 = lVar6 + uVar11;
    *(ulonglong *)(param_1 + 2) = uVar10;
    *(longlong *)(param_1 + 6) = lVar8;
    *(ulonglong *)(lVar8 + 8) = uVar10 | 1;
    *(ulonglong *)(lVar8 + uVar10) = uVar10;
    *(ulonglong *)(lVar6 + 8) = uVar11 | 3;
    return lVar6 + 0x10;
  }
  if (uVar11 < *(ulonglong *)(param_1 + 4)) {
    lVar6 = *(longlong *)(param_1 + 8);
    uVar9 = *(ulonglong *)(param_1 + 4) - uVar11;
    *(ulonglong *)(param_1 + 4) = uVar9;
    *(ulonglong *)(param_1 + 8) = lVar6 + uVar11;
    *(ulonglong *)(lVar6 + uVar11 + 8) = uVar9 | 1;
    *(ulonglong *)(lVar6 + 8) = uVar11 | 3;
    return lVar6 + 0x10;
  }
  lVar6 = FUN_1804b6d00(param_1,uVar11);
  return lVar6;
}



/* ===== 1804b7cc0 FUN_1804b7cc0 ===== */

longlong FUN_1804b7cc0(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (0xffffffffffffff7f < param_3) {
    return 0;
  }
  uVar4 = *(ulonglong *)(param_2 + -8);
  uVar5 = uVar4 & 0xfffffffffffffffc;
  if (param_3 < 0x17) {
    uVar6 = 0x20;
  }
  else {
    uVar6 = param_3 + 0xf & 0xfffffffffffffff8;
  }
  uVar7 = (ulonglong)((uint)uVar4 & 1);
  if (((uVar4 & 1) == 0) && ((*(byte *)(param_2 + -0x10) & 1) != 0)) {
    if (uVar6 < 0x100) {
      lVar2 = 0;
    }
    else {
      if ((uVar6 + 8 <= uVar5) && (uVar5 - uVar6 < 0x10001)) goto LAB_1804b7dd5;
      lVar2 = 0;
    }
  }
  else if (uVar5 < uVar6) {
    if ((param_2 + -0x10 + uVar5 != *(longlong *)(param_1 + 0x20)) ||
       (*(longlong *)(param_1 + 0x10) + uVar5 <= uVar6)) goto LAB_1804b7de4;
    uVar4 = (*(longlong *)(param_1 + 0x10) - uVar6) + uVar5;
    *(ulonglong *)(param_2 + -8) = uVar7 | uVar6 | 2;
    *(ulonglong *)((uVar6 - 8) + param_2) = uVar4 | 1;
    *(ulonglong *)(param_1 + 0x10) = uVar4;
    *(ulonglong *)(param_1 + 0x20) = param_2 + -0x10 + uVar6;
LAB_1804b7dd5:
    lVar2 = param_2 + -0x10;
  }
  else {
    lVar2 = param_2 + -0x10;
    uVar4 = uVar5 - uVar6;
    if (0x1f < uVar4) {
      *(ulonglong *)(param_2 + -8) = uVar7 | uVar6 | 2;
      *(ulonglong *)(param_2 + uVar6 + -8) = uVar4 | 3;
      puVar1 = (ulonglong *)(param_2 + uVar6 + -8 + uVar4);
      *puVar1 = *puVar1 | 1;
      FUN_1804b73c0(param_1);
    }
  }
  if (lVar2 != 0) {
    return lVar2 + 0x10;
  }
LAB_1804b7de4:
  lVar2 = FUN_1804b79d0(param_1,param_3);
  if (lVar2 != 0) {
    if (((*(byte *)(param_2 + -8) & 1) != 0) ||
       (lVar3 = 0x10, (*(byte *)(param_2 + -0x10) & 1) == 0)) {
      lVar3 = 8;
    }
    if (uVar5 - lVar3 < param_3) {
      param_3 = uVar5 - lVar3;
    }
    FUN_180540530(lVar2,param_2,param_3);
    FUN_1804b73c0(param_1,param_2);
  }
  return lVar2;
}



/* ===== 1804b7e50 FUN_1804b7e50 ===== */

void FUN_1804b7e50(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x360) = param_2;
  return;
}



/* ===== 1804b7e60 FUN_1804b7e60 ===== */

longlong FUN_1804b7e60(uint *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  
  if ((param_2 & 7) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulonglong)(-((uint)param_2 & 7) & 7);
  }
  lVar11 = uVar12 + param_2;
  if ((param_3 & 7) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulonglong)(-((uint)param_3 & 7) & 7);
  }
  lVar10 = uVar7 + param_3;
  lVar1 = lVar11 + param_4;
  uVar15 = (lVar10 - lVar11) - param_4;
  *(ulonglong *)(lVar11 + 8) = param_4 | 3;
  if (lVar10 == *(longlong *)(param_1 + 8)) {
    *(ulonglong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + uVar15;
    *(longlong *)(param_1 + 8) = lVar1;
    *(ulonglong *)(lVar1 + 8) = *(ulonglong *)(param_1 + 4) | 1;
    goto LAB_1804b818c;
  }
  if (lVar10 == *(longlong *)(param_1 + 6)) {
    *(ulonglong *)(param_1 + 2) = *(longlong *)(param_1 + 2) + uVar15;
    uVar7 = *(ulonglong *)(param_1 + 2);
    *(longlong *)(param_1 + 6) = lVar1;
    *(ulonglong *)(lVar1 + 8) = uVar7 | 1;
    *(ulonglong *)(uVar7 + lVar1) = uVar7;
    goto LAB_1804b818c;
  }
  uVar2 = *(ulonglong *)(lVar10 + 8);
  if ((uVar2 & 2) == 0) {
    lVar11 = *(longlong *)(lVar10 + 0x18);
    if (uVar2 >> 3 < 0x20) {
      lVar3 = *(longlong *)(lVar10 + 0x10);
      if (lVar3 == lVar11) {
        *param_1 = *param_1 & ~(1 << ((uint)(uVar2 >> 3) & 0x1f));
      }
      else {
        *(longlong *)(lVar3 + 0x18) = lVar11;
        *(longlong *)(lVar11 + 0x10) = lVar3;
      }
    }
    else {
      lVar3 = *(longlong *)(lVar10 + 0x30);
      if (lVar11 == lVar10) {
        lVar11 = *(longlong *)(lVar10 + 0x28);
        if (lVar11 == 0) {
          lVar11 = *(longlong *)(lVar10 + 0x20);
          if (lVar11 == 0) goto LAB_1804b7fc2;
          uVar13 = 0x20;
        }
        else {
          uVar13 = 0x28;
        }
        puVar14 = (undefined8 *)((uVar13 | uVar7) + param_3);
        while( true ) {
          while (*(longlong *)(lVar11 + 0x28) != 0) {
            puVar14 = (undefined8 *)(lVar11 + 0x28);
            lVar11 = *(longlong *)(lVar11 + 0x28);
          }
          if (*(longlong *)(lVar11 + 0x20) == 0) break;
          puVar14 = (undefined8 *)(lVar11 + 0x20);
          lVar11 = *(longlong *)(lVar11 + 0x20);
        }
        *puVar14 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar10 + 0x10);
        *(longlong *)(lVar4 + 0x18) = lVar11;
        *(longlong *)(lVar11 + 0x10) = lVar4;
      }
LAB_1804b7fc2:
      if (lVar3 != 0) {
        if (lVar10 == *(longlong *)(param_1 + *(longlong *)(lVar10 + 0x38) * 2 + 0x92)) {
          *(longlong *)(param_1 + *(longlong *)(lVar10 + 0x38) * 2 + 0x92) = lVar11;
          if (lVar11 == 0) {
            param_1[1] = param_1[1] & ~(1 << (*(uint *)(lVar10 + 0x38) & 0x1f));
          }
          else {
LAB_1804b8007:
            *(longlong *)(lVar11 + 0x30) = lVar3;
            lVar3 = *(longlong *)(lVar10 + 0x20);
            if (lVar3 != 0) {
              *(longlong *)(lVar11 + 0x20) = lVar3;
              *(longlong *)(lVar3 + 0x30) = lVar11;
            }
            lVar3 = *(longlong *)(lVar10 + 0x28);
            if (lVar3 != 0) {
              *(longlong *)(lVar11 + 0x28) = lVar3;
              *(longlong *)(lVar3 + 0x30) = lVar11;
            }
          }
        }
        else {
          if (*(longlong *)(lVar3 + 0x20) == lVar10) {
            *(longlong *)(lVar3 + 0x20) = lVar11;
          }
          else {
            *(longlong *)(lVar3 + 0x28) = lVar11;
          }
          if (lVar11 != 0) goto LAB_1804b8007;
        }
      }
    }
    lVar10 = lVar10 + (uVar2 & 0xfffffffffffffffc);
    uVar15 = uVar15 + (uVar2 & 0xfffffffffffffffc);
  }
  *(ulonglong *)(lVar10 + 8) = *(ulonglong *)(lVar10 + 8) & 0xfffffffffffffffe;
  *(ulonglong *)(lVar1 + 8) = uVar15 | 1;
  uVar7 = uVar15 >> 3;
  *(ulonglong *)(uVar15 + lVar1) = uVar15;
  if (uVar7 < 0x20) {
    if ((*param_1 & 1 << ((byte)uVar7 & 0x1f)) == 0) {
      *param_1 = *param_1 | 1 << ((uint)uVar7 & 0x1f);
      puVar8 = param_1 + uVar7 * 4 + 0xe;
    }
    else {
      puVar8 = *(uint **)(param_1 + uVar7 * 4 + 0x12);
    }
    *(longlong *)(param_1 + uVar7 * 4 + 0x12) = lVar1;
    *(longlong *)(puVar8 + 6) = lVar1;
    *(uint **)(lVar1 + 0x10) = puVar8;
    *(uint **)(lVar1 + 0x18) = param_1 + uVar7 * 4 + 0xe;
  }
  else {
    uVar6 = (uint)(uVar15 >> 8);
    if (uVar6 == 0) {
      uVar7 = 0;
    }
    else if (uVar6 < 0x10000) {
      iVar5 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar7 = (ulonglong)((uint)(uVar15 >> ((char)iVar5 + 7U & 0x3f)) & 1 | iVar5 * 2);
    }
    else {
      uVar7 = 0x1f;
    }
    *(ulonglong *)(lVar1 + 0x38) = uVar7;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    puVar8 = param_1 + uVar7 * 2 + 0x92;
    if ((param_1[1] & 1 << ((byte)uVar7 & 0x1f)) == 0) {
      param_1[1] = param_1[1] | 1 << ((uint)uVar7 & 0x1f);
      *(longlong *)puVar8 = lVar1;
      *(uint **)(lVar1 + 0x30) = puVar8;
      *(longlong *)(lVar1 + 0x18) = lVar1;
      *(longlong *)(lVar1 + 0x10) = lVar1;
    }
    else {
      bVar9 = 0x39 - (char)(uVar7 >> 1);
      uVar2 = *(ulonglong *)(*(longlong *)puVar8 + 8);
      if (uVar7 == 0x1f) {
        bVar9 = 0;
      }
      lVar11 = uVar15 << (bVar9 & 0x3f);
      lVar10 = *(longlong *)puVar8;
      while ((uVar2 & 0xfffffffffffffffc) != uVar15) {
        lVar3 = *(longlong *)(lVar10 + 0x20 + (lVar11 >> 0x3f) * -8);
        if (lVar3 == 0) {
          *(longlong *)(lVar10 + 0x20 + (lVar11 >> 0x3f) * -8) = lVar1;
          *(longlong *)(lVar1 + 0x30) = lVar10;
          *(longlong *)(lVar1 + 0x18) = lVar1;
          *(longlong *)(lVar1 + 0x10) = lVar1;
          goto LAB_1804b818c;
        }
        lVar11 = lVar11 * 2;
        lVar10 = lVar3;
        uVar2 = *(ulonglong *)(lVar3 + 8);
      }
      lVar11 = *(longlong *)(lVar10 + 0x10);
      *(longlong *)(lVar11 + 0x18) = lVar1;
      *(longlong *)(lVar10 + 0x10) = lVar1;
      *(longlong *)(lVar1 + 0x10) = lVar11;
      *(longlong *)(lVar1 + 0x18) = lVar10;
      *(undefined8 *)(lVar1 + 0x30) = 0;
    }
  }
LAB_1804b818c:
  return param_2 + (uVar12 | 0x10);
}



/* ===== 1804b81c0 FUN_1804b81c0 ===== */

longlong FUN_1804b81c0(longlong param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong local_res8;
  
  uVar19 = 0;
  local_res8 = 0;
  puVar2 = *(ulonglong **)(param_1 + 0x358);
  puVar8 = (ulonglong *)(param_1 + 0x348);
  lVar7 = 0;
joined_r0x0001804b81ed:
  do {
    do {
      do {
        puVar6 = puVar8;
        puVar8 = puVar2;
        if (puVar8 == (ulonglong *)0x0) {
          uVar18 = 0xff;
          if (0xff < uVar19) {
            uVar18 = uVar19;
          }
          *(ulonglong *)(param_1 + 0x30) = uVar18;
          return lVar7;
        }
        uVar13 = 0;
        uVar18 = *puVar8;
        uVar19 = uVar19 + 1;
        puVar2 = (ulonglong *)puVar8[2];
        if ((uVar18 & 7) != 0) {
          uVar13 = (ulonglong)(-((uint)uVar18 & 7) & 7);
        }
        uVar3 = *(ulonglong *)(uVar13 + 8 + uVar18);
        lVar1 = uVar13 + uVar18;
      } while ((uVar3 & 2) != 0);
      uVar15 = uVar3 & 0xfffffffffffffffc;
      lVar7 = local_res8;
    } while ((ulonglong *)(uVar15 + lVar1) != puVar8 + -2);
    uVar4 = puVar8[1];
    if (lVar1 == *(longlong *)(param_1 + 0x18)) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      lVar12 = *(longlong *)(lVar1 + 0x18);
      lVar14 = *(longlong *)(lVar1 + 0x30);
      if (lVar12 == lVar1) {
        lVar12 = *(longlong *)(lVar1 + 0x28);
        if (lVar12 == 0) {
          lVar12 = *(longlong *)(lVar1 + 0x20);
          if (lVar12 == 0) goto LAB_1804b82e1;
          uVar16 = 0x20;
        }
        else {
          uVar16 = 0x28;
        }
        puVar17 = (undefined8 *)((uVar16 | uVar13) + uVar18);
        while( true ) {
          for (; *(longlong *)(lVar12 + 0x28) != 0; lVar12 = *(longlong *)(lVar12 + 0x28)) {
            puVar17 = (undefined8 *)(lVar12 + 0x28);
          }
          if (*(longlong *)(lVar12 + 0x20) == 0) break;
          puVar17 = (undefined8 *)(lVar12 + 0x20);
          lVar12 = *(longlong *)(lVar12 + 0x20);
        }
        *puVar17 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar1 + 0x10);
        *(longlong *)(lVar5 + 0x18) = lVar12;
        *(longlong *)(lVar12 + 0x10) = lVar5;
      }
LAB_1804b82e1:
      if (lVar14 != 0) {
        if (lVar1 == *(longlong *)(param_1 + 0x248 + *(longlong *)(lVar1 + 0x38) * 8)) {
          *(longlong *)(param_1 + 0x248 + *(longlong *)(lVar1 + 0x38) * 8) = lVar12;
          if (lVar12 != 0) goto LAB_1804b8324;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & ~(1 << (*(uint *)(lVar1 + 0x38) & 0x1f))
          ;
        }
        else {
          if (*(longlong *)(lVar14 + 0x20) == lVar1) {
            *(longlong *)(lVar14 + 0x20) = lVar12;
          }
          else {
            *(longlong *)(lVar14 + 0x28) = lVar12;
          }
          if (lVar12 != 0) {
LAB_1804b8324:
            *(longlong *)(lVar12 + 0x30) = lVar14;
            lVar14 = *(longlong *)(lVar1 + 0x20);
            if (lVar14 != 0) {
              *(longlong *)(lVar12 + 0x20) = lVar14;
              *(longlong *)(lVar14 + 0x30) = lVar12;
            }
            lVar14 = *(longlong *)(lVar1 + 0x28);
            if (lVar14 != 0) {
              *(longlong *)(lVar12 + 0x28) = lVar14;
              *(longlong *)(lVar14 + 0x30) = lVar12;
            }
          }
        }
      }
    }
    iVar9 = FUN_1804b69a0(uVar18,uVar4);
    if (iVar9 == 0) {
      local_res8 = local_res8 + uVar4;
      puVar6[2] = (ulonglong)puVar2;
      puVar8 = puVar6;
      lVar7 = local_res8;
    }
    else {
      uVar10 = (uint)(uVar3 >> 8);
      if (uVar10 == 0) {
        uVar18 = 0;
      }
      else if (uVar10 < 0x10000) {
        iVar9 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        uVar18 = (ulonglong)((uint)(uVar15 >> ((char)iVar9 + 7U & 0x3f)) & 1 | iVar9 * 2);
      }
      else {
        uVar18 = 0x1f;
      }
      *(ulonglong *)(lVar1 + 0x38) = uVar18;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      if ((*(uint *)(param_1 + 4) & 1 << ((byte)uVar18 & 0x1f)) == 0) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1 << ((uint)uVar18 & 0x1f);
        *(longlong *)(param_1 + 0x248 + uVar18 * 8) = lVar1;
        *(ulonglong *)(lVar1 + 0x30) = param_1 + 0x248 + uVar18 * 8;
        *(longlong *)(lVar1 + 0x18) = lVar1;
        *(longlong *)(lVar1 + 0x10) = lVar1;
      }
      else {
        lVar12 = *(longlong *)(param_1 + 0x248 + uVar18 * 8);
        bVar11 = 0x39 - (char)(uVar18 >> 1);
        uVar13 = *(ulonglong *)(lVar12 + 8);
        if (uVar18 == 0x1f) {
          bVar11 = 0;
        }
        lVar14 = uVar15 << (bVar11 & 0x3f);
        while ((uVar13 & 0xfffffffffffffffc) != uVar15) {
          lVar5 = *(longlong *)(lVar12 + 0x20 + (lVar14 >> 0x3f) * -8);
          if (lVar5 == 0) {
            *(longlong *)(lVar12 + 0x20 + (lVar14 >> 0x3f) * -8) = lVar1;
            *(longlong *)(lVar1 + 0x30) = lVar12;
            *(longlong *)(lVar1 + 0x18) = lVar1;
            *(longlong *)(lVar1 + 0x10) = lVar1;
            goto joined_r0x0001804b81ed;
          }
          lVar14 = lVar14 * 2;
          lVar12 = lVar5;
          uVar13 = *(ulonglong *)(lVar5 + 8);
        }
        lVar14 = *(longlong *)(lVar12 + 0x10);
        *(longlong *)(lVar14 + 0x18) = lVar1;
        *(longlong *)(lVar12 + 0x10) = lVar1;
        *(longlong *)(lVar1 + 0x10) = lVar14;
        *(longlong *)(lVar1 + 0x18) = lVar12;
        *(undefined8 *)(lVar1 + 0x30) = 0;
      }
    }
  } while( true );
}



/* ===== 1804b84d0 FUN_1804b84d0 ===== */

longlong FUN_1804b84d0(uint *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  ulonglong uVar17;
  
  uVar12 = -param_2;
  lVar13 = 0;
  uVar17 = 0x1f;
  uVar5 = (uint)(param_2 >> 8);
  if (uVar5 == 0) {
    uVar11 = 0;
  }
  else if (uVar5 < 0x10000) {
    iVar4 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    uVar11 = (ulonglong)((uint)(param_2 >> ((char)iVar4 + 7U & 0x3f)) & 1 | iVar4 * 2);
  }
  else {
    uVar11 = 0x1f;
  }
  uVar6 = uVar12;
  if (*(longlong *)(param_1 + uVar11 * 2 + 0x92) == 0) {
LAB_1804b85cd:
    uVar5 = 2 << ((byte)uVar11 & 0x1f);
    uVar5 = (-uVar5 | uVar5) & param_1[1];
    if (uVar5 == 0) {
      return 0;
    }
    uVar3 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    lVar9 = *(longlong *)(param_1 + (ulonglong)uVar3 * 2 + 0x92);
    while (lVar9 != 0) {
LAB_1804b8600:
      do {
        lVar7 = lVar9;
        uVar12 = (*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffc) - param_2;
        lVar15 = lVar7;
        if (uVar6 <= uVar12) {
          lVar15 = lVar13;
          uVar12 = uVar6;
        }
        uVar6 = uVar12;
        lVar9 = *(longlong *)(lVar7 + 0x20);
        lVar13 = lVar15;
      } while (*(longlong *)(lVar7 + 0x20) != 0);
      lVar9 = *(longlong *)(lVar7 + 0x28);
    }
    if (lVar13 == 0) {
      return 0;
    }
  }
  else {
    bVar8 = 0x39 - (char)(uVar11 >> 1);
    if (uVar11 == 0x1f) {
      bVar8 = 0;
    }
    lVar15 = param_2 << (bVar8 & 0x3f);
    lVar7 = 0;
    lVar9 = *(longlong *)(param_1 + uVar11 * 2 + 0x92);
    lVar14 = lVar13;
    while( true ) {
      uVar6 = (*(ulonglong *)(lVar9 + 8) & 0xfffffffffffffffc) - param_2;
      lVar13 = lVar9;
      if ((uVar6 < uVar12) && (uVar6 == 0)) goto LAB_1804b85be;
      if (uVar12 <= uVar6) {
        lVar13 = lVar14;
        uVar6 = uVar12;
      }
      uVar12 = uVar6;
      lVar14 = *(longlong *)(lVar9 + 0x28);
      lVar2 = *(longlong *)(lVar9 + 0x20 + (lVar15 >> 0x3f) * -8);
      lVar9 = lVar7;
      if ((lVar14 != 0) && (lVar9 = lVar14, lVar14 == lVar2)) {
        lVar9 = lVar7;
      }
      if (lVar2 == 0) break;
      lVar15 = lVar15 * 2;
      lVar7 = lVar9;
      lVar9 = lVar2;
      lVar14 = lVar13;
    }
    uVar6 = uVar12;
LAB_1804b85be:
    if (lVar9 != 0) goto LAB_1804b8600;
    if (lVar13 == 0) goto LAB_1804b85cd;
  }
  if (*(longlong *)(param_1 + 2) - param_2 <= uVar6) {
    return 0;
  }
  lVar9 = *(longlong *)(lVar13 + 0x18);
  lVar15 = *(longlong *)(lVar13 + 0x30);
  if (lVar9 == lVar13) {
    lVar9 = *(longlong *)(lVar13 + 0x28);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(lVar13 + 0x20);
      if (lVar9 == 0) goto LAB_1804b86bf;
      lVar7 = 0x20;
    }
    else {
      lVar7 = 0x28;
    }
    puVar10 = (undefined8 *)(lVar7 + lVar13);
    while( true ) {
      for (; *(longlong *)(lVar9 + 0x28) != 0; lVar9 = *(longlong *)(lVar9 + 0x28)) {
        puVar10 = (undefined8 *)(lVar9 + 0x28);
      }
      if (*(longlong *)(lVar9 + 0x20) == 0) break;
      puVar10 = (undefined8 *)(lVar9 + 0x20);
      lVar9 = *(longlong *)(lVar9 + 0x20);
    }
    *puVar10 = 0;
  }
  else {
    lVar7 = *(longlong *)(lVar13 + 0x10);
    *(longlong *)(lVar7 + 0x18) = lVar9;
    *(longlong *)(lVar9 + 0x10) = lVar7;
  }
LAB_1804b86bf:
  if (lVar15 != 0) {
    if (lVar13 == *(longlong *)(param_1 + *(longlong *)(lVar13 + 0x38) * 2 + 0x92)) {
      *(longlong *)(param_1 + *(longlong *)(lVar13 + 0x38) * 2 + 0x92) = lVar9;
      if (lVar9 == 0) {
        param_1[1] = param_1[1] & ~(1 << (*(uint *)(lVar13 + 0x38) & 0x1f));
        goto LAB_1804b8729;
      }
    }
    else {
      if (*(longlong *)(lVar15 + 0x20) == lVar13) {
        *(longlong *)(lVar15 + 0x20) = lVar9;
      }
      else {
        *(longlong *)(lVar15 + 0x28) = lVar9;
      }
      if (lVar9 == 0) goto LAB_1804b8729;
    }
    *(longlong *)(lVar9 + 0x30) = lVar15;
    lVar15 = *(longlong *)(lVar13 + 0x20);
    if (lVar15 != 0) {
      *(longlong *)(lVar9 + 0x20) = lVar15;
      *(longlong *)(lVar15 + 0x30) = lVar9;
    }
    lVar15 = *(longlong *)(lVar13 + 0x28);
    if (lVar15 != 0) {
      *(longlong *)(lVar9 + 0x28) = lVar15;
      *(longlong *)(lVar15 + 0x30) = lVar9;
    }
  }
LAB_1804b8729:
  if (uVar6 < 0x20) {
    *(ulonglong *)(lVar13 + 8) = uVar6 + param_2 | 3;
    puVar1 = (ulonglong *)(uVar6 + lVar13 + 8 + param_2);
    *puVar1 = *puVar1 | 1;
    return lVar13 + 0x10;
  }
  lVar9 = lVar13 + param_2;
  *(ulonglong *)(lVar13 + 8) = param_2 | 3;
  uVar12 = uVar6 >> 3;
  *(ulonglong *)(lVar9 + 8) = uVar6 | 1;
  *(ulonglong *)(lVar9 + uVar6) = uVar6;
  if (uVar12 < 0x20) {
    puVar16 = param_1 + uVar12 * 4 + 0xe;
    if ((*param_1 & 1 << ((byte)uVar12 & 0x1f)) == 0) {
      *param_1 = *param_1 | 1 << ((uint)uVar12 & 0x1f);
      *(longlong *)(param_1 + uVar12 * 4 + 0x12) = lVar9;
      *(longlong *)(puVar16 + 6) = lVar9;
      *(uint **)(lVar9 + 0x10) = puVar16;
      *(uint **)(lVar9 + 0x18) = puVar16;
      return lVar13 + 0x10;
    }
    lVar15 = *(longlong *)(param_1 + uVar12 * 4 + 0x12);
    *(longlong *)(param_1 + uVar12 * 4 + 0x12) = lVar9;
    *(longlong *)(lVar15 + 0x18) = lVar9;
    *(longlong *)(lVar9 + 0x10) = lVar15;
    *(uint **)(lVar9 + 0x18) = puVar16;
    return lVar13 + 0x10;
  }
  uVar5 = (uint)(uVar6 >> 8);
  if (uVar5 == 0) {
    uVar17 = 0;
  }
  else if (uVar5 < 0x10000) {
    iVar4 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    uVar17 = (ulonglong)((uint)(uVar6 >> ((char)iVar4 + 7U & 0x3f)) & 1 | iVar4 * 2);
  }
  *(ulonglong *)(lVar9 + 0x38) = uVar17;
  *(undefined8 *)(lVar9 + 0x28) = 0;
  *(undefined8 *)(lVar9 + 0x20) = 0;
  puVar16 = param_1 + uVar17 * 2 + 0x92;
  if ((param_1[1] & 1 << ((byte)uVar17 & 0x1f)) == 0) {
    param_1[1] = param_1[1] | 1 << ((uint)uVar17 & 0x1f);
    *(longlong *)puVar16 = lVar9;
    *(uint **)(lVar9 + 0x30) = puVar16;
    *(longlong *)(lVar9 + 0x18) = lVar9;
    *(longlong *)(lVar9 + 0x10) = lVar9;
    return lVar13 + 0x10;
  }
  bVar8 = 0x39 - (char)(uVar17 >> 1);
  uVar12 = *(ulonglong *)(*(longlong *)puVar16 + 8);
  if (uVar17 == 0x1f) {
    bVar8 = 0;
  }
  lVar15 = uVar6 << (bVar8 & 0x3f);
  lVar7 = *(longlong *)puVar16;
  while( true ) {
    if ((uVar12 & 0xfffffffffffffffc) == uVar6) {
      lVar15 = *(longlong *)(lVar7 + 0x10);
      *(longlong *)(lVar15 + 0x18) = lVar9;
      *(longlong *)(lVar7 + 0x10) = lVar9;
      *(longlong *)(lVar9 + 0x10) = lVar15;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(longlong *)(lVar9 + 0x18) = lVar7;
      return lVar13 + 0x10;
    }
    lVar14 = *(longlong *)(lVar7 + 0x20 + (lVar15 >> 0x3f) * -8);
    if (lVar14 == 0) break;
    uVar12 = *(ulonglong *)(lVar14 + 8);
    lVar15 = lVar15 * 2;
    lVar7 = lVar14;
  }
  *(longlong *)(lVar7 + 0x20 + (lVar15 >> 0x3f) * -8) = lVar9;
  *(longlong *)(lVar9 + 0x30) = lVar7;
  *(longlong *)(lVar9 + 0x18) = lVar9;
  *(longlong *)(lVar9 + 0x10) = lVar9;
  return lVar13 + 0x10;
}



/* ===== 1804b8900 FUN_1804b8900 ===== */

longlong FUN_1804b8900(uint *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    for (; (param_1[1] >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  lVar9 = *(longlong *)(param_1 + (ulonglong)uVar2 * 2 + 0x92);
  lVar6 = lVar9;
  uVar10 = (*(ulonglong *)(lVar9 + 8) & 0xfffffffffffffffc) - param_2;
  while ((lVar8 = *(longlong *)(lVar6 + 0x20), lVar8 != 0 ||
         (lVar8 = *(longlong *)(lVar6 + 0x28), lVar8 != 0))) {
    uVar5 = (*(ulonglong *)(lVar8 + 8) & 0xfffffffffffffffc) - param_2;
    lVar6 = lVar8;
    if (uVar10 <= uVar5) {
      uVar5 = uVar10;
      lVar6 = lVar9;
    }
    lVar9 = lVar6;
    lVar6 = lVar8;
    uVar10 = uVar5;
  }
  lVar6 = *(longlong *)(lVar9 + 0x18);
  lVar8 = *(longlong *)(lVar9 + 0x30);
  if (lVar6 == lVar9) {
    lVar6 = *(longlong *)(lVar9 + 0x28);
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(lVar9 + 0x20);
      if (lVar6 == 0) goto LAB_1804b89d6;
      lVar3 = 0x20;
    }
    else {
      lVar3 = 0x28;
    }
    puVar7 = (undefined8 *)(lVar3 + lVar9);
    while( true ) {
      while (*(longlong *)(lVar6 + 0x28) != 0) {
        puVar7 = (undefined8 *)(lVar6 + 0x28);
        lVar6 = *(longlong *)(lVar6 + 0x28);
      }
      if (*(longlong *)(lVar6 + 0x20) == 0) break;
      puVar7 = (undefined8 *)(lVar6 + 0x20);
      lVar6 = *(longlong *)(lVar6 + 0x20);
    }
    *puVar7 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar9 + 0x10);
    *(longlong *)(lVar3 + 0x18) = lVar6;
    *(longlong *)(lVar6 + 0x10) = lVar3;
  }
LAB_1804b89d6:
  if (lVar8 != 0) {
    if (lVar9 == *(longlong *)(param_1 + *(longlong *)(lVar9 + 0x38) * 2 + 0x92)) {
      *(longlong *)(param_1 + *(longlong *)(lVar9 + 0x38) * 2 + 0x92) = lVar6;
      if (lVar6 == 0) {
        param_1[1] = param_1[1] & ~(1 << (*(uint *)(lVar9 + 0x38) & 0x1f));
        goto LAB_1804b8a42;
      }
    }
    else {
      if (*(longlong *)(lVar8 + 0x20) == lVar9) {
        *(longlong *)(lVar8 + 0x20) = lVar6;
      }
      else {
        *(longlong *)(lVar8 + 0x28) = lVar6;
      }
      if (lVar6 == 0) goto LAB_1804b8a42;
    }
    *(longlong *)(lVar6 + 0x30) = lVar8;
    lVar8 = *(longlong *)(lVar9 + 0x20);
    if (lVar8 != 0) {
      *(longlong *)(lVar6 + 0x20) = lVar8;
      *(longlong *)(lVar8 + 0x30) = lVar6;
    }
    lVar8 = *(longlong *)(lVar9 + 0x28);
    if (lVar8 != 0) {
      *(longlong *)(lVar6 + 0x28) = lVar8;
      *(longlong *)(lVar8 + 0x30) = lVar6;
    }
  }
LAB_1804b8a42:
  if (uVar10 < 0x20) {
    *(ulonglong *)(lVar9 + 8) = uVar10 + param_2 | 3;
    puVar1 = (ulonglong *)(uVar10 + lVar9 + 8 + param_2);
    *puVar1 = *puVar1 | 1;
    return lVar9 + 0x10;
  }
  lVar6 = lVar9 + param_2;
  *(ulonglong *)(lVar9 + 8) = param_2 | 3;
  *(ulonglong *)(lVar6 + 8) = uVar10 | 1;
  *(ulonglong *)(lVar6 + uVar10) = uVar10;
  if (*(ulonglong *)(param_1 + 2) != 0) {
    lVar8 = *(longlong *)(param_1 + 6);
    uVar5 = *(ulonglong *)(param_1 + 2) >> 3;
    if ((*param_1 & 1 << ((byte)uVar5 & 0x1f)) == 0) {
      *param_1 = *param_1 | 1 << ((uint)uVar5 & 0x1f);
      puVar4 = param_1 + uVar5 * 4 + 0xe;
    }
    else {
      puVar4 = *(uint **)(param_1 + uVar5 * 4 + 0x12);
    }
    *(longlong *)(param_1 + uVar5 * 4 + 0x12) = lVar8;
    *(longlong *)(puVar4 + 6) = lVar8;
    *(uint **)(lVar8 + 0x18) = param_1 + uVar5 * 4 + 0xe;
    *(uint **)(lVar8 + 0x10) = puVar4;
  }
  *(ulonglong *)(param_1 + 2) = uVar10;
  *(longlong *)(param_1 + 6) = lVar6;
  return lVar9 + 0x10;
}



/* ===== 1804b8af0 FUN_1804b8af0 ===== */

void FUN_1804b8af0(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  bVar1 = *(byte *)(lVar3 + 0x91);
  uVar2 = *(undefined1 *)(lVar3 + 0x93);
  uVar4 = *(undefined8 *)(lVar3 + 0x178);
  *(byte *)(lVar3 + 0x91) = bVar1 | 0x30;
  *(undefined1 *)(lVar3 + 0x93) = 0;
  iVar5 = FUN_18000329c(param_1,param_2 + *(longlong *)(param_1 + 0x38),1,0);
  if (iVar5 != 0) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
    uVar6 = __acrt_iob_func(2);
    FUN_18051c4a4("VM handler failed: ",uVar6);
    puVar7 = &DAT_1806dfbb4;
    if ((int)((longlong)**(ulonglong **)(param_1 + 0x28) >> 0x2f) == -5) {
      puVar7 = (undefined2 *)((**(ulonglong **)(param_1 + 0x28) & 0x7fffffffffff) + 0x18);
    }
    uVar6 = __acrt_iob_func(2);
    FUN_18051c4a4(puVar7,uVar6);
    uVar6 = __acrt_iob_func(2);
    FUN_18050ff88(10,uVar6);
  }
  *(undefined8 *)(lVar3 + 0x178) = uVar4;
  *(undefined8 *)(lVar3 + 0x368) = uVar4;
  *(byte *)(lVar3 + 0x91) = (bVar1 ^ *(byte *)(lVar3 + 0x91)) & 0xf ^ bVar1;
  if (*(char *)(lVar3 + 0x93) != -1) {
    *(undefined1 *)(lVar3 + 0x93) = uVar2;
  }
  return;
}



/* ===== 1804b8c00 FUN_1804b8c00 ===== */

longlong FUN_1804b8c00(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar3 = FUN_180491d30(param_1,"_VMEVENTS",9);
  puVar4 = (ulonglong *)
           FUN_180492860(*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x110) & 0x7fffffffffff,
                         uVar3);
  if ((int)((longlong)*puVar4 >> 0x2f) == -0xc) {
    uVar5 = *puVar4 & 0x7fffffffffff;
    if ((param_2 & 0xfffffff8) < *(uint *)(uVar5 + 0x30)) {
      puVar4 = (ulonglong *)
               (*(longlong *)(uVar5 + 0x10) + (longlong)(int)(param_2 & 0xfffffff8) * 8);
    }
    else {
      puVar4 = (ulonglong *)FUN_1804927e0(uVar5);
    }
    if ((puVar4 != (ulonglong *)0x0) && ((int)((longlong)*puVar4 >> 0x2f) == -9)) {
      if (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) < 0xa1) {
        FUN_18048e920(param_1,0x14);
      }
      puVar2 = *(ulonglong **)(param_1 + 0x28);
      *(ulonglong **)(param_1 + 0x28) = puVar2 + 1;
      *puVar2 = *puVar4 & 0x7fffffffffff | 0xfffb800000000000;
      **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
      return *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x38);
    }
  }
  *(byte *)(lVar1 + 0x93) = *(byte *)(lVar1 + 0x93) & ~(byte)(1 << (param_2 & 7));
  return 0;
}



/* ===== 1804b8d20 FUN_1804b8d20 ===== */

undefined4 FUN_1804b8d20(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_18051bfb0();
  return *puVar1;
}



/* ===== 1804b8d30 FUN_1804b8d30 ===== */

double FUN_1804b8d30(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (double)FUN_18000515f(param_1 / param_2);
  return dVar1 * param_2;
}



/* ===== 1804b8d60 FUN_1804b8d60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1804b8d60(double param_1,double param_2,undefined4 param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)((ulonglong)param_1 >> 0x20);
  uVar2 = SUB84(param_1,0);
  uVar3 = (uint)((ulonglong)param_2 >> 0x20);
  switch(param_3) {
  case 0:
    return param_1 + param_2;
  case 1:
    return param_1 - param_2;
  case 2:
    return param_1 * param_2;
  case 3:
    return param_1 / param_2;
  case 4:
    dVar1 = (double)FUN_1804b8d30(uVar2);
    return param_1 - dVar1;
  case 5:
    dVar1 = (double)FUN_18051cb80(uVar2);
    return dVar1;
  case 6:
    return (double)CONCAT44(uVar4 ^ DAT_1808adeb0._4_4_,uVar2 ^ (uint)DAT_1808adeb0);
  case 7:
    return (double)CONCAT44(uVar4 & _UNK_1808adea4,uVar2 & _DAT_1808adea0);
  case 8:
    dVar1 = (double)FUN_18051fbc0(uVar2,(int)param_2);
    return dVar1;
  case 9:
    if (param_2 <= param_1) {
      uVar2 = SUB84(param_2,0);
      uVar4 = uVar3;
    }
    return (double)CONCAT44(uVar4,uVar2);
  case 10:
    if (param_1 <= param_2) {
      uVar2 = SUB84(param_2,0);
      uVar4 = uVar3;
    }
  }
  return (double)CONCAT44(uVar4,uVar2);
}



/* ===== 1804b8e90 FUN_1804b8e90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1804b8e90(double param_1,undefined4 param_2)

{
  double dVar1;
  
  switch(param_2) {
  case 0:
    dVar1 = (double)FUN_18000515f();
    return dVar1;
  case 1:
    dVar1 = (double)FUN_1800051ba();
    return dVar1;
  case 2:
    dVar1 = (double)FUN_180005219();
    return dVar1;
  case 3:
    break;
  case 4:
    dVar1 = (double)FUN_18051c650();
    return dVar1;
  case 5:
    dVar1 = (double)FUN_18051c650();
    return dVar1 * _DAT_18056ff80;
  default:
    return 0.0;
  }
  if (param_1 < 0.0) {
    dVar1 = (double)FUN_18051ff20(param_1);
    return dVar1;
  }
  return SQRT(param_1);
}



/* ===== 1804b8f30 FUN_1804b8f30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1804b8f30(void)

{
  double dVar1;
  
  dVar1 = (double)FUN_18051c650();
  return dVar1 * _DAT_18056ff80;
}



/* ===== 1804b8f50 FUN_1804b8f50 ===== */

ulonglong FUN_1804b8f50(uint param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar4 = -param_2;
  if ((int)-param_2 < 0) {
    uVar4 = param_2;
  }
  uVar1 = -param_1;
  if ((int)-param_1 < 0) {
    uVar1 = param_1;
  }
  uVar2 = (ulonglong)uVar1 % (ulonglong)uVar4;
  uVar3 = uVar2;
  if (((int)uVar2 != 0) && (uVar3 = (ulonglong)((int)uVar2 - uVar4), -1 < (int)(param_1 ^ param_2)))
  {
    uVar3 = uVar2;
  }
  uVar2 = (ulonglong)-(uint)uVar3;
  if (-1 < (int)((uint)uVar3 ^ param_2)) {
    uVar2 = uVar3;
  }
  return uVar2;
}



/* ===== 1804b8f90 FUN_1804b8f90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804b8f90(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1804b9010(0,0xf000035,*param_2,local_38);
  FUN_180491d30(param_1,local_38,iVar1 - (int)local_38);
  return;
}



/* ===== 1804b8ff0 FUN_1804b8ff0 ===== */

undefined8 * FUN_1804b8ff0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1804b9010();
  *param_1 = uVar1;
  return param_1;
}



/* ===== 1804b9010 FUN_1804b9010 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1804b9010(int *param_1,uint param_2,double param_3,char *param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  longlong lVar12;
  undefined4 uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  char *pcVar17;
  ulonglong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined7 uVar22;
  ulonglong uVar21;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  uint local_1a8;
  uint local_1a4;
  int local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  undefined8 local_188;
  int *local_180;
  uint local_178 [31];
  uint local_fc;
  uint local_f8;
  uint local_f4 [31];
  undefined8 local_78;
  char local_70;
  ulonglong local_68;
  
  uVar26 = (uint)((ulonglong)param_3 >> 0x20);
  local_68 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  uVar16 = param_2 >> 0x10 & 0xff;
  local_1a4 = param_2;
  local_180 = param_1;
  if (0xffdfffff < uVar26 * 2) {
    local_1a0 = 0;
    if (((ulonglong)param_3 & 0xfffff00000000) == 0 && SUB84(param_3,0) == 0) {
      uVar13 = 0x696e66;
      if ((param_2 & 0x2000) != 0) {
        uVar13 = 0x494e46;
      }
      if ((longlong)param_3 < 0) {
        local_1a0 = 0x2d;
      }
      else if ((param_2 >> 9 & 1) == 0) {
        local_1a0 = 0;
        if ((param_2 >> 0xb & 1) != 0) {
          local_1a0 = 0x20;
        }
      }
      else {
        local_1a0 = 0x2b;
      }
    }
    else {
      uVar13 = 0x6e616e;
      if ((param_2 & 0x2000) != 0) {
        uVar13 = 0x4e414e;
      }
      if ((param_2 >> 0xb & 1) != 0) {
        local_1a0 = 0x20;
      }
    }
    uVar26 = (local_1a0 != 0) + 3;
    if (param_4 == (char *)0x0) {
      uVar23 = uVar26;
      if (uVar26 < uVar16) {
        uVar23 = uVar16;
      }
      if ((uint)(param_1[2] - *param_1) < uVar23) {
        local_78 = param_3;
        param_4 = (char *)FUN_1804a9db0(param_1);
        param_2 = local_1a4;
      }
      else {
        param_4 = *(char **)param_1;
      }
    }
    if ((param_2 >> 8 & 1) == 0) {
      for (; uVar26 < uVar16; uVar16 = uVar16 - 1) {
        *param_4 = ' ';
        param_4 = param_4 + 1;
      }
      uVar16 = uVar16 - 1;
    }
    if (local_1a0 != 0) {
      *param_4 = (char)local_1a0;
      param_4 = param_4 + 1;
    }
    *param_4 = (char)((uint)uVar13 >> 0x10);
    param_4[1] = (char)((uint)uVar13 >> 8);
    param_4[2] = (char)uVar13;
    param_4 = param_4 + 3;
    goto LAB_1804ba133;
  }
  uVar23 = (param_2 >> 0x18) - 1;
  uVar18 = (ulonglong)uVar23;
  if ((param_2 & 0x30) != 0) {
    uVar27 = uVar26 >> 0x14 & 0x7ff;
    local_1a8 = 0;
    if ((longlong)param_3 < 0) {
      local_1a0 = CONCAT31(local_1a0._1_3_,0x2d);
    }
    else if ((param_2 >> 9 & 1) == 0) {
      local_1a0 = 0;
      if ((param_2 >> 0xb & 1) != 0) {
        local_1a0 = 0x20;
      }
    }
    else {
      local_1a0 = CONCAT31(local_1a0._1_3_,0x2b);
    }
    iVar4 = (param_2 >> 0x18) + ((int)uVar23 >> 0x1f & 7U);
    if ((param_2 & 0x30) == 0x30) {
      uVar23 = iVar4 - 2;
      uVar23 = (int)uVar23 >> 0x1f ^ uVar23;
    }
    else {
      uVar23 = iVar4 - 1;
    }
    local_190 = param_2 & 0x10;
    if (local_190 == 0) goto LAB_1804b9610;
    if (0xd < uVar23) goto LAB_1804b9610;
    if (param_3 == 0.0) goto LAB_1804b9610;
    local_1a8 = (uint)*(short *)(&DAT_18056ff90 + (ulonglong)(uVar27 >> 6) * 2);
    if (*(short *)(&DAT_18056ff90 + (ulonglong)(uVar27 >> 6) * 2) == 0) goto LAB_1804b9610;
    local_78 = param_3 * *(double *)(&DAT_18056ffd0 + (ulonglong)(uVar27 >> 6) * 8);
    if (uVar27 == 0) {
      local_78 = local_78 * _DAT_1808aca10;
      local_1a8 = local_1a8 - 10;
    }
    dVar11 = (double)((longlong)local_78 + -2);
    local_78._4_4_ = (uint)((ulonglong)dVar11 >> 0x20);
    local_198 = local_78._4_4_;
    uVar8 = local_78._4_4_ >> 0x14 & 0x7ff;
    uVar9 = local_78._4_4_ & 0xfffff | 0x100000;
    local_78 = dVar11;
    do {
      iVar7 = 0x433 - uVar8;
      iVar24 = uVar8 - 0x433;
      uVar18 = (ulonglong)(uVar9 * 8 | (uint)local_78 >> 0x1d) << 0x1d |
               (ulonglong)((uint)local_78 & 0x1fffffff);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar18;
      lVar12 = SUB168(ZEXT816(0x12e0be826d694b2f) * auVar2,8);
      iVar4 = (int)((uVar18 - lVar12 >> 1) + lVar12 >> 0x1d);
      local_178[0] = (int)uVar18 + iVar4 * -1000000000;
      if (iVar4 == 0) goto LAB_1804b96b5;
      uVar18 = 1;
      local_178[1] = iVar4;
LAB_1804b96b8:
      if (iVar24 < 0) {
        uVar27 = FUN_1804ba310(local_178,uVar18,iVar7);
        uVar21 = (ulonglong)uVar27;
        if (((int)uVar18 != 0) && (local_178[uVar18] == 0)) {
          uVar18 = (ulonglong)((int)uVar18 - 1);
        }
      }
      else {
        local_1b8 = local_1a4;
        uVar27 = FUN_1804ba510(local_178,uVar18,iVar24,0);
        uVar18 = (ulonglong)uVar27;
        uVar21 = 0;
      }
      uVar27 = (uint)uVar21;
      if (local_190 == 0) {
        if (uVar23 < (-uVar27 & 0x3f) * 9) {
          uVar26 = FUN_1804ba630(local_178,uVar21,uVar18,~uVar23);
          uVar18 = (ulonglong)uVar26;
        }
        goto LAB_1804b9f45;
      }
      iVar4 = -1;
      if ((uVar27 != 0) && (local_178[uVar18] == 0)) {
        uVar18 = 0x40;
        do {
          uVar18 = (ulonglong)((int)uVar18 - 1);
        } while (local_178[uVar18] == 0);
        iVar4 = -0x241;
      }
      iVar14 = (int)uVar18;
      uVar8 = local_178[uVar18];
      iVar7 = 0x1f;
      if ((uVar8 | 1) != 0) {
        for (; (uVar8 | 1) >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      uVar9 = (uint)(iVar7 * 0x4d) >> 8;
      iVar7 = (*(uint *)(&DAT_1809191b0 + (ulonglong)(uVar9 + 1) * 4) < uVar8) + uVar9;
      local_188 = (char *)CONCAT44(local_188._4_4_,iVar7);
      iVar3 = (*(uint *)(&DAT_1809191b0 + (ulonglong)(uVar9 + 1) * 4) < uVar8) + 1 + uVar9;
      local_194 = iVar4 + iVar3 + iVar14 * 9;
      local_19c = iVar3;
      if (local_1a8 == 0) goto LAB_1804b98ff;
      if (((uint)local_78 < 0xfffffffe) || (iVar4 = 0x47, (~local_198 & 0xfffff) != 0)) {
        iVar4 = 0x46;
      }
      local_f4[0] = uVar8;
      iVar4 = (iVar4 + iVar24) * 2;
      local_f8 = local_178[iVar14 - 1U & 0x3f];
      local_fc = local_178[iVar14 - 2U & 0x3f];
      uVar8 = (uint)(char)(&DAT_1805700d1)[iVar4];
      if ((char)(&DAT_1805700d1)[iVar4] < '\0') {
        uVar10 = (int)(uVar8 - 8) / 9;
        uVar9 = uVar10 + 0x40;
      }
      else {
        uVar9 = uVar8 / 9;
        uVar10 = uVar9;
      }
      uVar25 = (ulonglong)uVar9;
      uVar8 = (*(int *)(&DAT_1809191b0 + (longlong)(int)(uVar8 + uVar10 * -9) * 4) + 1) *
              (uint)(byte)(&DAT_1805700d0)[iVar4] + local_178[uVar25];
      while (999999999 < uVar8) {
        local_178[uVar25] = uVar8 + 0xc4653600;
        if ((int)uVar25 == iVar14) {
          local_178[iVar14 + 1U & 0x3f] = 1;
          goto LAB_1804b987b;
        }
        uVar25 = (ulonglong)((int)uVar25 + 1U & 0x3f);
        uVar8 = local_178[uVar25] + 1;
      }
      local_178[uVar25] = uVar8;
LAB_1804b987b:
      local_1b8 = uVar23 + 1;
      iVar4 = FUN_1804ba7e0(local_178,uVar18,local_f4,iVar3);
      if (iVar4 != 0) {
        iVar7 = (int)local_188;
        goto LAB_1804b98ff;
      }
      uVar27 = uVar26 >> 0x14 & 0x7ff;
      local_1a8 = 0;
LAB_1804b9610:
      uVar9 = uVar26 & 0xfffff;
      if (uVar27 == 0) {
        uVar8 = 1;
        local_178[0] = uVar9;
      }
      else {
        local_178[0] = uVar9 | 0x100000;
        uVar8 = uVar27;
      }
      if (uVar27 != 0) {
        uVar9 = uVar9 | 0x100000;
      }
      local_198 = uVar26;
      if (SUB84(param_3,0) == 0) goto LAB_1804b96a5;
      local_78 = param_3;
    } while( true );
  }
  local_188 = "0123456789abcdefpx";
  local_198 = param_2 & 0x2000;
  if (local_198 != 0) {
    local_188 = "0123456789ABCDEFPX";
  }
  local_194 = uVar26 >> 0x14 & 0x7ff;
  uVar22 = (undefined7)((ulonglong)param_1 >> 8);
  if ((longlong)param_3 < 0) {
    uVar21 = CONCAT71(uVar22,0x2d);
  }
  else if ((param_2 >> 9 & 1) == 0) {
    uVar21 = 0;
    if ((param_2 >> 0xb & 1) != 0) {
      uVar21 = 0x20;
    }
  }
  else {
    uVar21 = CONCAT71(uVar22,0x2b);
  }
  uVar27 = uVar26 & 0xfffff;
  local_1a8 = (uint)uVar21;
  local_78 = (double)((ulonglong)param_3 & 0xfffffffffffff);
  if (local_194 == 0) {
    if (((ulonglong)param_3 & 0xfffff00000000) == 0 && (uint)local_78 == 0) {
      uVar8 = 0;
      local_194 = 0;
      uVar26 = (uint)local_78;
      goto LAB_1804b9294;
    }
    if (((ulonglong)param_3 & 0xfffff00000000) == 0) {
      iVar4 = 0x1f;
      if ((uint)local_78 != 0) {
        for (; (uint)local_78 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar7 = 0x34;
    }
    else {
      iVar4 = 0x1f;
      if (((ulonglong)param_3 & 0xfffff00000000) != 0) {
        for (; uVar27 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar7 = 0x14;
    }
    iVar7 = iVar7 - iVar4;
    uVar25 = (longlong)local_78 << ((byte)iVar7 & 0x3f);
    uVar8 = -iVar7 - 0x3fe;
    local_78._4_4_ = (uint)(uVar25 >> 0x20);
    local_194 = iVar7 + 0x3fe;
    local_78._0_4_ = (uint)uVar25;
    uVar26 = (uint)local_78;
    uVar27 = local_78._4_4_;
    local_78 = (double)uVar25;
  }
  else {
    uVar27 = uVar27 | 0x100000;
    uVar8 = local_194 - 0x3ff;
    uVar25 = CONCAT44(uVar26,(uint)local_78) & 0xfffffffffffff;
    local_78 = (double)(uVar25 | 0x10000000000000);
    uVar15 = (ulonglong)local_78;
    local_194 = 0x3ff - local_194;
    local_78._0_4_ = (uint)uVar25;
    uVar26 = (uint)local_78;
    local_78 = (double)uVar15;
LAB_1804b9294:
  }
  uVar25 = 0xd;
  if ((int)uVar23 < 0) {
    if (uVar26 == 0) {
      uVar26 = 0;
      if ((uVar27 | 0x100000) != 0) {
        for (; ((uVar27 | 0x100000) >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
        }
      }
      uVar18 = (ulonglong)(5 - (uVar26 >> 2));
    }
    else {
      uVar23 = 0;
      if (uVar26 != 0) {
        for (; (uVar26 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
        }
      }
      uVar18 = (ulonglong)(0xd - (uVar23 >> 2));
    }
  }
  else if (uVar23 < 0xd) {
    uVar15 = (longlong)local_78 + (1L << ((char)(param_2 >> 0x18) * -4 + 0x37U & 0x3f));
    local_78._4_4_ = (uint)(uVar15 >> 0x20);
    uVar27 = local_78._4_4_;
    local_78 = (double)uVar15;
  }
  uVar15 = (ulonglong)local_78;
  local_190 = 0x2d;
  if (-1 < (int)uVar8) {
    local_190 = 0x2b;
    local_194 = uVar8;
  }
  uVar23 = (uint)uVar18;
  local_19c = param_2 & 0x1000 | uVar23;
  iVar4 = 0x1f;
  if ((local_194 | 1) != 0) {
    for (; (local_194 | 1) >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  uVar26 = (uint)(iVar4 * 0x4d) >> 8;
  uVar26 = ((char)uVar21 != '\0') + 6 +
           (local_19c != 0) + uVar26 +
           (uint)(*(uint *)(&DAT_1809191b0 + (ulonglong)(uVar26 + 1) * 4) < local_194) + uVar23;
  if (param_4 == (char *)0x0) {
    uVar8 = uVar26;
    if (uVar26 < uVar16) {
      uVar8 = uVar16;
    }
    if ((uint)(param_1[2] - *param_1) < uVar8) {
      param_4 = (char *)FUN_1804a9db0(param_1);
      uVar21 = (ulonglong)local_1a8;
    }
    else {
      param_4 = *(char **)param_1;
    }
  }
  if ((local_1a4 & 0x500) == 0) {
    for (; uVar26 < uVar16; uVar16 = uVar16 - 1) {
      *param_4 = ' ';
      param_4 = param_4 + 1;
    }
    uVar16 = uVar16 - 1;
  }
  if ((char)uVar21 != '\0') {
    *param_4 = (char)uVar21;
    param_4 = param_4 + 1;
  }
  *param_4 = '0';
  cVar6 = 'x';
  if (local_198 != 0) {
    cVar6 = 'X';
  }
  param_4[1] = cVar6;
  param_4 = param_4 + 2;
  if ((local_1a4 & 0x500) == 0x400) {
    for (; uVar26 < uVar16; uVar16 = uVar16 - 1) {
      *param_4 = '0';
      param_4 = param_4 + 1;
    }
    uVar16 = uVar16 - 1;
  }
  *param_4 = (char)(uVar27 >> 0x14) + '0';
  pcVar17 = param_4 + 1;
  if (local_19c != 0) {
    *pcVar17 = '.';
    uVar21 = uVar18;
    if (uVar23 < 0xd) {
      uVar15 = uVar15 >> ((char)uVar18 * -4 + 0x34U & 0x3f);
    }
    else if (0xd < uVar23) {
      FUN_180540170(param_4 + ((uVar18 + 1) - ((ulonglong)(uVar23 - 0xd) - 1)),
                    CONCAT71((uint7)(uint3)(local_198 >> 8),0x30),uVar23 - 0xd);
      goto LAB_1804b9462;
    }
    while (uVar25 = uVar21, uVar23 != 0) {
LAB_1804b9462:
      uVar23 = (uint)uVar15;
      uVar15 = uVar15 >> 4;
      pcVar17[uVar25] = local_188[uVar23 & 0xf];
      uVar23 = (int)uVar25 - 1;
      uVar21 = (ulonglong)uVar23;
    }
    pcVar17 = param_4 + uVar18 + 2;
  }
  cVar6 = 'p';
  if (local_198 != 0) {
    cVar6 = 'P';
  }
  *pcVar17 = cVar6;
  pcVar17[1] = (char)local_190;
  param_4 = (char *)FUN_180499410(pcVar17 + 2,local_194);
LAB_1804ba116:
  param_2 = local_1a4;
LAB_1804ba133:
  if ((param_2 >> 8 & 1) != 0) {
    for (; uVar26 < uVar16; uVar16 = uVar16 - 1) {
      *param_4 = ' ';
      param_4 = param_4 + 1;
    }
  }
  return param_4;
LAB_1804b96a5:
  iVar7 = 0x413 - uVar8;
  iVar24 = uVar8 - 0x413;
  local_78 = param_3;
LAB_1804b96b5:
  uVar18 = 0;
  goto LAB_1804b96b8;
LAB_1804b98ff:
  if ((int)(uVar23 - local_194) < (int)((-uVar27 & 0x3f) * 9)) {
    uVar26 = FUN_1804ba630(local_178,uVar21,uVar18,(local_194 - uVar23) + -1);
    uVar18 = (ulonglong)uVar26;
    uVar26 = local_178[uVar18] | 1;
    iVar4 = 0x1f;
    if (uVar26 != 0) {
      for (; uVar26 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    uVar26 = (uint)(iVar4 * 0x4d) >> 8;
    local_194 = local_194 +
                ((int)local_188 !=
                (*(uint *)(&DAT_1809191b0 + (ulonglong)(uVar26 + 1) * 4) < local_178[uVar18]) +
                uVar26);
    iVar7 = (int)local_188;
  }
  local_1a8 = local_1a8 + local_194;
  local_194 = local_1a4 & 0x20;
  uVar26 = (uint)uVar18;
  if (local_194 != 0) {
    if (((int)local_1a8 <= (int)uVar23) && (-5 < (int)local_1a8)) {
      uVar8 = 0;
      if (-1 < (int)local_1a8) {
        uVar8 = uVar26;
      }
      uVar23 = uVar23 - local_1a8;
      uVar18 = (ulonglong)uVar8;
      if ((((local_1a4 >> 0xc & 1) == 0) && (uVar23 != 0)) && ((local_1a4 & 0xff0000) != 0)) {
        if (uVar27 == 0) {
LAB_1804b9b4e:
          uVar23 = 0;
        }
        else {
          uVar26 = uVar27 * -9 + 0x240;
          if (uVar23 < uVar26) {
            uVar21 = (ulonglong)(0x40 - (uVar23 + 8) / 9);
            uVar26 = uVar23;
          }
          uVar27 = (uint)uVar21;
          uVar25 = (ulonglong)(uVar27 * 9 + -0x237 + uVar26);
          FUN_1804ba180(&local_78,local_178[uVar21]);
          for (uVar23 = uVar26; uVar23 != 0; uVar23 = uVar23 - 1) {
            uVar27 = (uint)uVar21;
            uVar26 = (int)uVar25 - 1;
            uVar25 = (ulonglong)uVar26;
            if (*(char *)((longlong)local_f4 + uVar25 + 0x7c) != '0') break;
            if (uVar26 == 0) {
              if (uVar27 == 0x3f) goto LAB_1804b9b4e;
              uVar21 = (ulonglong)(uVar27 + 1);
              uVar25 = 9;
              uVar26 = local_178[uVar21] / 10000;
              uVar27 = local_178[uVar21] % 10000;
              uVar15 = (ulonglong)uVar26 / 10000;
              iVar4 = uVar26 + (int)uVar15 * -10000;
              uVar26 = (uint)(iVar4 * 0x20c5) >> 0x17;
              local_78._0_2_ = CONCAT11((char)uVar26 + '0',(char)uVar15 + '0');
              iVar4 = iVar4 + uVar26 * -1000;
              uVar26 = (uint)(iVar4 * 0x29) >> 0xc;
              local_78._0_3_ = CONCAT12((char)uVar26 + '0',(undefined2)local_78);
              iVar4 = iVar4 + uVar26 * -100;
              cVar6 = (char)((uint)(iVar4 * 0x67) >> 10);
              local_78._0_4_ = CONCAT13(cVar6 + '0',(undefined3)local_78);
              local_78._0_5_ = CONCAT14((char)iVar4 + cVar6 * -10 + '0',(uint)local_78);
              local_78._0_6_ = CONCAT15((char)(uVar27 / 1000) + '0',(undefined5)local_78);
              uVar27 = uVar27 % 1000;
              uVar26 = uVar27 * 0x29 >> 0xc;
              local_78._0_7_ = CONCAT16((char)uVar26 + '0',(undefined6)local_78);
              iVar4 = uVar27 + uVar26 * -100;
              cVar6 = (char)((uint)(iVar4 * 0x67) >> 10);
              local_78 = (double)CONCAT17(cVar6 + '0',(undefined7)local_78);
              local_70 = (char)iVar4 + cVar6 * -10 + '0';
            }
            uVar27 = (uint)uVar21;
          }
        }
      }
LAB_1804b9f45:
      uVar8 = local_1a4;
      local_19c = local_1a4 & 0x1000;
      uVar9 = (uint)uVar18;
      local_188 = (char *)CONCAT44(local_188._4_4_,local_19c | uVar23);
      local_194 = local_178[uVar18];
      iVar4 = 0x1f;
      if ((local_194 | 1) != 0) {
        for (; (local_194 | 1) >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      uVar26 = (uint)(iVar4 * 0x4d) >> 8;
      cVar6 = (char)local_1a0;
      uVar26 = uVar23 + 1 +
               uVar9 * 9 +
               (cVar6 != '\0') + uVar26 +
               (uint)(*(uint *)(&DAT_1809191b0 + (ulonglong)(uVar26 + 1) * 4) < local_194) +
               (uint)((local_19c | uVar23) != 0);
      if (param_4 == (char *)0x0) {
        uVar10 = uVar26;
        if (uVar26 < uVar16) {
          uVar10 = uVar16;
        }
        if ((uint)(local_180[2] - *local_180) < uVar10 + 8) {
          param_4 = (char *)FUN_1804a9db0(local_180);
          cVar6 = (char)local_1a0;
        }
        else {
          param_4 = *(char **)local_180;
        }
      }
      if ((uVar8 & 0x500) == 0) {
        for (; uVar26 < uVar16; uVar16 = uVar16 - 1) {
          *param_4 = ' ';
          param_4 = param_4 + 1;
        }
        uVar16 = uVar16 - 1;
      }
      if (cVar6 != '\0') {
        *param_4 = cVar6;
        param_4 = param_4 + 1;
      }
      if ((uVar8 & 0x500) == 0x400) {
        for (; uVar26 < uVar16; uVar16 = uVar16 - 1) {
          *param_4 = '0';
          param_4 = param_4 + 1;
        }
        uVar16 = uVar16 - 1;
      }
      param_4 = (char *)FUN_180499410(param_4,local_194);
      while (uVar9 != 0) {
        uVar9 = (int)uVar18 - 1;
        uVar18 = (ulonglong)uVar9;
        param_4 = (char *)FUN_1804ba180(param_4,local_178[uVar18]);
      }
      if ((int)local_188 != 0) {
        *param_4 = '.';
        param_4 = param_4 + 1;
        while ((0 < (int)uVar23 && ((uint)uVar18 != uVar27))) {
          uVar18 = (ulonglong)((uint)uVar18 - 1 & 0x3f);
          param_4 = (char *)FUN_1804ba180(param_4,local_178[uVar18]);
          uVar23 = uVar23 - 9;
        }
        if ((local_190 == 0) || (local_19c != 0)) {
          for (; 0 < (int)uVar23; uVar23 = uVar23 - 1) {
            *param_4 = '0';
            param_4 = param_4 + 1;
          }
          param_4 = param_4 + (int)uVar23;
        }
        else {
          cVar6 = (param_4 + ((longlong)(int)uVar23 >> 0x1f & (longlong)(int)uVar23))[-1];
          pcVar17 = param_4 + ((longlong)(int)uVar23 >> 0x1f & (longlong)(int)uVar23);
          while (cVar6 == '0') {
            cVar6 = pcVar17[-2];
            pcVar17 = pcVar17 + -1;
          }
          param_4 = pcVar17 + -1;
          if (pcVar17[-1] != '.') {
            param_4 = pcVar17;
          }
        }
      }
      goto LAB_1804ba116;
    }
    if ((((local_1a4 >> 0xc & 1) == 0) && (uVar23 != 0)) && (0x50000 < (local_1a4 & 0xff0000))) {
      uVar27 = iVar7 + (uVar26 - uVar27 & 0x3f) * 9;
      if (uVar23 < uVar27) {
        uVar21 = (ulonglong)(uVar26 - (int)((uVar23 - iVar3) + 9) / 9 & 0x3f);
      }
      else {
        uVar23 = uVar27;
      }
      uVar27 = (uint)uVar21;
      uVar25 = (ulonglong)(((uVar23 + (uVar26 - uVar27 & 0x3f) * -9) - local_19c) + 10);
      FUN_1804ba180(&local_78,local_178[uVar21]);
      if (uVar23 == 0) goto LAB_1804b9d08;
      while( true ) {
        uVar27 = (uint)uVar21;
        uVar8 = (int)uVar25 - 1;
        uVar25 = (ulonglong)uVar8;
        if (*(char *)((longlong)local_f4 + uVar25 + 0x7c) != '0') break;
        if (uVar8 == 0) {
          if (uVar27 == uVar26) {
            uVar23 = 0;
            break;
          }
          uVar25 = 9;
          uVar27 = uVar27 + 1 & 0x3f;
          uVar21 = (ulonglong)uVar27;
          uVar8 = local_178[uVar27] / 10000;
          uVar9 = local_178[uVar27] % 10000;
          uVar15 = (ulonglong)uVar8 / 10000;
          iVar4 = uVar8 + (int)uVar15 * -10000;
          uVar27 = (uint)(iVar4 * 0x20c5) >> 0x17;
          local_78._0_2_ = CONCAT11((char)uVar27 + '0',(char)uVar15 + '0');
          iVar4 = iVar4 + uVar27 * -1000;
          uVar27 = (uint)(iVar4 * 0x29) >> 0xc;
          local_78._0_3_ = CONCAT12((char)uVar27 + '0',(undefined2)local_78);
          iVar4 = iVar4 + uVar27 * -100;
          cVar6 = (char)((uint)(iVar4 * 0x67) >> 10);
          local_78._0_4_ = CONCAT13(cVar6 + '0',(undefined3)local_78);
          local_78._0_5_ = CONCAT14((char)iVar4 + cVar6 * -10 + '0',(uint)local_78);
          local_78._0_6_ = CONCAT15((char)(uVar9 / 1000) + '0',(undefined5)local_78);
          uVar9 = uVar9 % 1000;
          uVar27 = uVar9 * 0x29 >> 0xc;
          local_78._0_7_ = CONCAT16((char)uVar27 + '0',(undefined6)local_78);
          iVar4 = uVar9 + uVar27 * -100;
          cVar6 = (char)((uint)(iVar4 * 0x67) >> 10);
          local_78 = (double)CONCAT17(cVar6 + '0',(undefined7)local_78);
          local_70 = (char)iVar4 + cVar6 * -10 + '0';
        }
        uVar27 = (uint)uVar21;
        uVar23 = uVar23 - 1;
        if (uVar23 == 0) break;
      }
    }
  }
LAB_1804b9d08:
  param_2 = local_1a4;
  local_198 = -local_1a8;
  if ((int)-local_1a8 < 0) {
    local_198 = local_1a8;
  }
  local_19c = 0x2d;
  if (-1 < (int)local_1a8) {
    local_19c = 0x2b;
  }
  local_188 = (char *)(CONCAT44(local_188._4_4_,local_1a4) & 0xffffffff00001000);
  local_190 = local_1a4 & 0x1000 | uVar23;
  iVar4 = 0x1f;
  if ((local_198 | 1) != 0) {
    for (; (local_198 | 1) >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  uVar26 = (uint)(iVar4 * 0x4d) >> 8;
  cVar6 = (char)local_1a0;
  uVar26 = ((int)local_198 < 10) + 4 +
           (cVar6 != '\0') + uVar26 +
           (uint)(*(uint *)(&DAT_1809191b0 + (ulonglong)(uVar26 + 1) * 4) < local_198) +
           (uint)(local_190 != 0) + uVar23;
  if (param_4 == (char *)0x0) {
    uVar8 = uVar26;
    if (uVar26 < uVar16) {
      uVar8 = uVar16;
    }
    if ((uint)(local_180[2] - *local_180) < uVar8 + 5) {
      param_4 = (char *)FUN_1804a9db0(local_180);
      cVar6 = (char)local_1a0;
    }
    else {
      param_4 = *(char **)local_180;
    }
  }
  if ((param_2 & 0x500) == 0) {
    for (; uVar26 < uVar16; uVar16 = uVar16 - 1) {
      *param_4 = ' ';
      param_4 = param_4 + 1;
    }
    uVar16 = uVar16 - 1;
  }
  if (cVar6 != '\0') {
    *param_4 = cVar6;
    param_4 = param_4 + 1;
  }
  if ((param_2 & 0x500) == 0x400) {
    for (; uVar26 < uVar16; uVar16 = uVar16 - 1) {
      *param_4 = '0';
      param_4 = param_4 + 1;
    }
    uVar16 = uVar16 - 1;
  }
  puVar5 = (undefined1 *)FUN_180499410(param_4 + 1,local_178[uVar18]);
  *param_4 = param_4[1];
  if (local_190 == 0) {
    pbVar19 = (byte *)(param_4 + 1);
  }
  else {
    param_4[1] = '.';
    iVar4 = ((int)param_4 - (int)puVar5) + 2 + uVar23;
    while ((0 < iVar4 && ((uint)uVar18 != uVar27))) {
      uVar18 = (ulonglong)((uint)uVar18 - 1 & 0x3f);
      puVar5 = (undefined1 *)FUN_1804ba180(puVar5,local_178[uVar18]);
      iVar4 = iVar4 + -9;
    }
    if ((local_194 == 0) || ((int)local_188 != 0)) {
      for (; 0 < iVar4; iVar4 = iVar4 + -1) {
        *puVar5 = 0x30;
        puVar5 = puVar5 + 1;
      }
      pbVar19 = puVar5 + iVar4;
    }
    else {
      bVar1 = (puVar5 + ((longlong)iVar4 >> 0x1f & (longlong)iVar4))[-1];
      pbVar20 = puVar5 + ((longlong)iVar4 >> 0x1f & (longlong)iVar4);
      while (bVar1 == 0x30) {
        bVar1 = pbVar20[-2];
        pbVar20 = pbVar20 + -1;
      }
      pbVar19 = pbVar20 + -1;
      if (pbVar20[-1] != 0x2e) {
        pbVar19 = pbVar20;
      }
    }
  }
  *pbVar19 = ~(byte)(param_2 >> 8) & 0x20 | 0x45;
  pbVar19[1] = (byte)local_19c;
  pbVar20 = pbVar19 + 2;
  if ((int)local_198 < 10) {
    *pbVar20 = 0x30;
    pbVar20 = pbVar19 + 3;
  }
  param_4 = (char *)FUN_180499410(pbVar20);
  goto LAB_1804ba133;
}



/* ===== 1804ba180 FUN_1804ba180 ===== */

char * FUN_1804ba180(char *param_1,uint param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = (ulonglong)(param_2 / 10000) / 10000;
  *param_1 = (char)uVar1 + '0';
  iVar4 = param_2 / 10000 + (int)uVar1 * -10000;
  uVar3 = (uint)(iVar4 * 0x20c5) >> 0x17;
  param_1[1] = (char)uVar3 + '0';
  iVar4 = iVar4 + uVar3 * -1000;
  uVar3 = (uint)(iVar4 * 0x29) >> 0xc;
  param_1[2] = (char)uVar3 + '0';
  iVar4 = iVar4 + uVar3 * -100;
  cVar2 = (char)((uint)(iVar4 * 0x67) >> 10);
  param_1[3] = cVar2 + '0';
  param_1[4] = (char)iVar4 + cVar2 * -10 + '0';
  param_1[5] = (char)((param_2 % 10000) / 1000) + '0';
  uVar5 = (param_2 % 10000) % 1000;
  uVar3 = uVar5 * 0x29 >> 0xc;
  param_1[6] = (char)uVar3 + '0';
  iVar4 = uVar5 + uVar3 * -100;
  cVar2 = (char)((uint)(iVar4 * 0x67) >> 10);
  param_1[7] = cVar2 + '0';
  param_1[8] = (char)iVar4 + cVar2 * -10 + '0';
  return param_1 + 9;
}



/* ===== 1804ba260 FUN_1804ba260 ===== */

ulonglong FUN_1804ba260(longlong param_1,uint param_2,byte param_3,uint param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  
  if ((int)param_4 < 0) {
    iVar1 = (int)(param_4 - 8) / 9;
    uVar2 = (ulonglong)(iVar1 + 0x40);
  }
  else {
    uVar2 = (ulonglong)param_4 / 9;
    iVar1 = (int)uVar2;
  }
  uVar3 = (*(int *)(&DAT_1809191b0 + (longlong)(int)(param_4 + iVar1 * -9) * 4) + 1) * (uint)param_3
          + *(int *)(param_1 + uVar2 * 4);
  while( true ) {
    if (uVar3 < 1000000000) {
      *(uint *)(param_1 + uVar2 * 4) = uVar3;
      return (ulonglong)param_2;
    }
    *(uint *)(param_1 + uVar2 * 4) = uVar3 + 0xc4653600;
    if ((uint)uVar2 == param_2) break;
    uVar2 = (ulonglong)((uint)uVar2 + 1 & 0x3f);
    uVar3 = *(int *)(param_1 + uVar2 * 4) + 1;
  }
  uVar2 = (ulonglong)(param_2 + 1 & 0x3f);
  *(undefined4 *)(param_1 + uVar2 * 4) = 1;
  return uVar2;
}



/* ===== 1804ba310 FUN_1804ba310 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1804ba310(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar12 = (ulonglong)param_2;
  if (param_2 == 0) {
    uVar10 = *param_1;
    if (uVar10 == 0) {
      return 0;
    }
    uVar6 = 0;
    if (uVar10 != 0) {
      for (; (uVar10 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    if (param_3 <= uVar6) {
      *param_1 = uVar10 >> ((byte)param_3 & 0x1f);
      return 0;
    }
    *param_1 = uVar10 >> ((byte)uVar6 & 0x1f);
    param_3 = param_3 - uVar6;
  }
  uVar10 = 0;
  uVar7 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (param_3 < 0x13) {
    if (param_3 < 9) goto LAB_1804ba481;
  }
  else if (((byte)param_4 & 0x30) != 0x20) {
    iVar3 = 0x1f;
    if (param_1[uVar12] != 0) {
      for (; param_1[uVar12] >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar1 = (param_4 >> 0x18) - 1;
    uVar6 = (int)((1 - (int)((double)(int)((param_2 * 0x1d - param_3) + iVar3) * _DAT_180570200)) -
                 (param_4 >> 0x18)) / 9 + 0x3e;
    uVar7 = (param_2 - ((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3)) + 0x3d;
  }
  do {
    uVar2 = param_1[uVar12];
    uVar11 = (uint)uVar12;
    param_1[uVar12] = uVar2 >> 9;
    uVar9 = uVar12;
    uVar8 = uVar11;
    while (uVar4 = (uVar2 & 0x1ff) * 0x1dcd65, uVar8 != uVar10) {
      uVar8 = (int)uVar9 - 1U & 0x3f;
      uVar9 = (ulonglong)uVar8;
      uVar2 = param_1[uVar9];
      param_1[uVar9] = (uVar2 >> 9) + uVar4;
    }
    if ((uVar10 == uVar6) || (uVar10 == uVar7)) {
      if (param_1[uVar12] == 0) {
        if (uVar11 == uVar10) {
          return uVar10;
        }
        goto LAB_1804ba46c;
      }
    }
    else {
      if (uVar4 != 0) {
        uVar10 = uVar10 - 1 & 0x3f;
        param_1[uVar10] = uVar4;
      }
      if (param_1[uVar12] == 0) {
LAB_1804ba46c:
        uVar12 = (ulonglong)(uVar11 - 1 & 0x3f);
        uVar7 = uVar7 - 1;
      }
    }
    param_3 = param_3 - 9;
  } while (8 < param_3);
LAB_1804ba481:
  if (param_3 != 0) {
    uVar6 = param_1[uVar12];
    bVar5 = (byte)param_3;
    param_1[uVar12] = uVar6 >> (bVar5 & 0x1f);
    uVar7 = (uint)uVar12;
    while (uVar2 = (uVar6 & (1 << (bVar5 & 0x1f)) - 1U) * (1000000000 >> (bVar5 & 0x1f)),
          uVar7 != uVar10) {
      uVar7 = (int)uVar12 - 1U & 0x3f;
      uVar12 = (ulonglong)uVar7;
      uVar6 = param_1[uVar12];
      param_1[uVar12] = (uVar6 >> (bVar5 & 0x1f)) + uVar2;
    }
    if (uVar2 != 0) {
      uVar10 = uVar10 - 1 & 0x3f;
      param_1[uVar10] = uVar2;
    }
  }
  return uVar10;
}



/* ===== 1804ba510 FUN_1804ba510 ===== */

ulonglong FUN_1804ba510(longlong param_1,uint param_2,uint param_3,ulonglong param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  
  uVar6 = 0;
  uVar11 = (ulonglong)param_2;
  uVar7 = 1;
  if (param_3 < 0x3b) {
    if (param_3 < 0x1d) goto LAB_1804ba5cd;
  }
  else if (((byte)param_5 & 0x30) != 0x20) {
    uVar7 = param_2 - ((param_5 >> 0x18) + 0x10 >> 3);
  }
  do {
    uVar5 = (uint)uVar6;
    uVar8 = uVar6;
    uVar10 = uVar5;
    while (uVar10 <= (uint)uVar11) {
      uVar10 = (int)uVar8 + 1;
      uVar3 = (ulonglong)*(uint *)(param_1 + uVar8 * 4) << 0x1d | param_4 & 0xffffffff;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar3;
      lVar4 = SUB168(ZEXT816(0x12e0be826d694b2f) * auVar1,8);
      param_4 = (uVar3 - lVar4 >> 1) + lVar4 >> 0x1d;
      *(int *)(param_1 + uVar8 * 4) = (int)uVar3 + (int)param_4 * -1000000000;
      uVar8 = (ulonglong)uVar10;
    }
    if ((int)param_4 != 0) {
      uVar11 = (ulonglong)((uint)uVar11 + 1);
      uVar10 = uVar7 + 1;
      *(int *)(param_1 + uVar11 * 4) = (int)param_4;
      param_4 = 0;
      bVar12 = uVar7 == uVar5;
      uVar7 = uVar10;
      if (bVar12) {
        uVar6 = (ulonglong)(uVar5 + 1);
      }
    }
    param_3 = param_3 - 0x1d;
  } while (0x1c < param_3);
LAB_1804ba5cd:
  iVar9 = (int)param_4;
  if (param_3 != 0) {
    uVar7 = (uint)uVar6;
    while (uVar7 <= (uint)uVar11) {
      uVar8 = (ulonglong)*(uint *)(param_1 + uVar6 * 4) << ((byte)param_3 & 0x3f) |
              param_4 & 0xffffffff;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar8;
      lVar4 = SUB168(ZEXT816(0x12e0be826d694b2f) * auVar2,8);
      param_4 = (uVar8 - lVar4 >> 1) + lVar4 >> 0x1d;
      iVar9 = (int)param_4;
      *(int *)(param_1 + uVar6 * 4) = (int)uVar8 + iVar9 * -1000000000;
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar7;
    }
    if (iVar9 != 0) {
      uVar11 = (ulonglong)((uint)uVar11 + 1);
      *(int *)(param_1 + uVar11 * 4) = iVar9;
    }
  }
  return uVar11;
}



/* ===== 1804ba630 FUN_1804ba630 ===== */

ulonglong FUN_1804ba630(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char local_28 [4];
  char local_24;
  char local_23;
  char local_22;
  char local_21;
  char local_20 [8];
  
  if ((int)param_4 < 0) {
    uVar4 = (int)(param_4 - 8) / 9;
    uVar3 = uVar4 + 0x40;
  }
  else {
    uVar3 = param_4 / 9;
    uVar4 = uVar3;
  }
  uVar2 = (ulonglong)uVar3;
  uVar7 = *(uint *)(param_1 + uVar2 * 4);
  iVar8 = uVar4 * 9 - param_4;
  uVar5 = uVar7 / 10000;
  local_28[0] = (char)((ulonglong)uVar5 / 10000) + '0';
  uVar7 = uVar7 % 10000;
  iVar6 = uVar5 + (int)((ulonglong)uVar5 / 10000) * -10000;
  uVar4 = (uint)(iVar6 * 0x20c5) >> 0x17;
  local_28[1] = (char)uVar4 + '0';
  iVar6 = iVar6 + uVar4 * -1000;
  uVar4 = (uint)(iVar6 * 0x29) >> 0xc;
  local_28[2] = (char)uVar4 + '0';
  iVar6 = iVar6 + uVar4 * -100;
  cVar1 = (char)((uint)(iVar6 * 0x67) >> 10);
  local_28[3] = cVar1 + '0';
  local_24 = (char)iVar6 + cVar1 * -10 + '0';
  local_23 = (char)(uVar7 / 1000) + '0';
  uVar7 = uVar7 % 1000;
  uVar4 = uVar7 * 0x29 >> 0xc;
  local_22 = (char)uVar4 + '0';
  iVar6 = uVar7 + uVar4 * -100;
  cVar1 = (char)((uint)(iVar6 * 0x67) >> 10);
  local_21 = cVar1 + '0';
  local_20[0] = (char)iVar6 + cVar1 * -10 + '0';
  if (local_20[iVar8] < '5') {
LAB_1804ba7b4:
    return (ulonglong)param_3;
  }
  if (local_20[iVar8] == '5') {
    if (iVar8 == -8) {
      uVar4 = *(uint *)(param_1 + (ulonglong)(uVar3 + 1 & 0x3f) * 4);
    }
    else {
      uVar4 = (uint)local_28[iVar8 + 7];
    }
    if ((uVar4 & 1) == 0) {
      for (iVar8 = iVar8 + 9; iVar8 < 9; iVar8 = iVar8 + 1) {
        if (local_28[iVar8] != '0') goto LAB_1804ba7c3;
      }
      while (uVar3 != param_2) {
        if (*(int *)(param_1 + uVar2 * 4) != 0) goto LAB_1804ba7c3;
        uVar3 = (int)uVar2 - 1U & 0x3f;
        uVar2 = (ulonglong)uVar3;
      }
      goto LAB_1804ba7b4;
    }
  }
LAB_1804ba7c3:
  uVar2 = FUN_1804ba260(param_1,param_3,CONCAT71((uint7)(uint3)(uVar5 * 10000 >> 8),5),param_4);
  return uVar2;
}



/* ===== 1804ba7e0 FUN_1804ba7e0 ===== */

undefined8 FUN_1804ba7e0(longlong param_1,ulonglong param_2,uint *param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char local_28 [4];
  char local_24;
  char local_23;
  char local_22;
  char local_21;
  char local_20;
  char local_18 [4];
  char local_14;
  char local_13;
  char local_12;
  char local_11;
  char local_10;
  
  if (param_5 < param_4) {
    param_5 = param_5 + (9 - param_4);
  }
  else {
    if (*(uint *)(param_1 + (param_2 & 0xffffffff) * 4) != *param_3) {
      return 0;
    }
    param_5 = param_5 - param_4;
    uVar3 = (int)param_2 - 1U & 0x3f;
    param_2 = (ulonglong)uVar3;
    if (param_5 < 9) {
      param_3 = param_3 + -1;
    }
    else {
      if (*(uint *)(param_1 + param_2 * 4) != param_3[-1]) {
        return 0;
      }
      param_5 = param_5 - 9;
      param_2 = (ulonglong)(uVar3 - 1 & 0x3f);
      param_3 = param_3 + -2;
    }
  }
  uVar3 = *(uint *)(param_1 + (param_2 & 0xffffffff) * 4);
  uVar4 = uVar3 / 10000;
  uVar3 = uVar3 % 10000;
  uVar1 = (ulonglong)uVar4 / 10000;
  local_18[0] = (char)uVar1 + '0';
  iVar5 = uVar4 + (int)uVar1 * -10000;
  uVar4 = (uint)(iVar5 * 0x20c5) >> 0x17;
  local_18[1] = (char)uVar4 + '0';
  iVar5 = iVar5 + uVar4 * -1000;
  uVar4 = (uint)(iVar5 * 0x29) >> 0xc;
  local_18[2] = (char)uVar4 + '0';
  iVar5 = iVar5 + uVar4 * -100;
  cVar2 = (char)((uint)(iVar5 * 0x67) >> 10);
  local_18[3] = cVar2 + '0';
  local_14 = (char)iVar5 + cVar2 * -10 + '0';
  local_13 = (char)(uVar3 / 1000) + '0';
  uVar3 = uVar3 % 1000;
  uVar4 = uVar3 * 0x29 >> 0xc;
  local_12 = (char)uVar4 + '0';
  iVar5 = uVar3 + uVar4 * -100;
  cVar2 = (char)((uint)(iVar5 * 0x67) >> 10);
  local_11 = cVar2 + '0';
  local_10 = (char)iVar5 + cVar2 * -10 + '0';
  uVar3 = *param_3 / 10000;
  uVar1 = (ulonglong)uVar3 / 10000;
  local_28[0] = (char)uVar1 + '0';
  uVar4 = *param_3 % 10000;
  iVar5 = uVar3 + (int)uVar1 * -10000;
  uVar3 = (uint)(iVar5 * 0x20c5) >> 0x17;
  iVar5 = iVar5 + uVar3 * -1000;
  local_28[1] = (char)uVar3 + '0';
  uVar3 = (uint)(iVar5 * 0x29) >> 0xc;
  local_28[2] = (char)uVar3 + '0';
  iVar5 = iVar5 + uVar3 * -100;
  cVar2 = (char)((uint)(iVar5 * 0x67) >> 10);
  local_28[3] = cVar2 + '0';
  local_24 = (char)iVar5 + cVar2 * -10 + '0';
  local_23 = (char)(uVar4 / 1000) + '0';
  uVar4 = uVar4 % 1000;
  uVar3 = uVar4 * 0x29 >> 0xc;
  local_22 = (char)uVar3 + '0';
  iVar5 = uVar4 + uVar3 * -100;
  cVar2 = (char)((uint)(iVar5 * 0x67) >> 10);
  local_21 = cVar2 + '0';
  local_20 = (char)iVar5 + cVar2 * -10 + '0';
  iVar5 = memcmp(local_18,local_28,(ulonglong)param_5);
  if ((iVar5 == 0) && (local_18[param_5] < '5' == local_28[param_5] < '5')) {
    return 1;
  }
  return 0;
}



/* ===== 1804baa40 FUN_1804baa40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804baa40(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong local_348 [102];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)local_348;
  lVar1 = param_1 + 0x192;
  uVar7 = 0;
  do {
    iVar5 = (int)uVar7;
    uVar4 = iVar5 + 2;
    local_348[uVar7] = (ulonglong)(uint)(iVar5 + (int)DAT_1808ad670) * 2 + lVar1;
    local_348[uVar7 + 1] = (ulonglong)(uint)(iVar5 + DAT_1808ad670._4_4_) * 2 + lVar1;
    local_348[uVar4] = (ulonglong)(uVar4 + (int)DAT_1808ad670) * 2 + lVar1;
    local_348[(ulonglong)uVar4 + 1] = (ulonglong)(uVar4 + DAT_1808ad670._4_4_) * 2 + lVar1;
    uVar4 = iVar5 + 4;
    local_348[uVar4] = (ulonglong)(uVar4 + (int)DAT_1808ad670) * 2 + lVar1;
    local_348[(ulonglong)uVar4 + 1] = (ulonglong)(uVar4 + DAT_1808ad670._4_4_) * 2 + lVar1;
    uVar4 = iVar5 + 6;
    uVar6 = iVar5 + 8;
    uVar7 = (ulonglong)uVar6;
    local_348[uVar4] = (ulonglong)(uVar4 + (int)DAT_1808ad670) * 2 + lVar1;
    local_348[(ulonglong)uVar4 + 1] = (ulonglong)(uVar4 + DAT_1808ad670._4_4_) * 2 + lVar1;
  } while (uVar6 < 0x60);
  while (uVar6 < 0x65) {
    local_348[uVar7] = param_1 + 0x192 + uVar7 * 2;
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
  }
  uVar4 = *(uint *)(param_1 + 0xc);
  do {
    while( true ) {
      uVar4 = uVar4 - 1;
      if (uVar4 < 0x8001) {
        return;
      }
      lVar1 = *(longlong *)(param_1 + 0x20);
      uVar7 = (ulonglong)uVar4 * 8;
      bVar2 = *(byte *)(uVar7 + 4 + lVar1);
      if ((bVar2 & 0x20) == 0) break;
      *(byte *)(uVar7 + 4 + lVar1) = bVar2 & 0xdf;
      pbVar8 = (byte *)((uVar7 | 5) + lVar1);
      lVar9 = *(longlong *)(param_1 + 0x20);
LAB_1804babf6:
      local_348[*pbVar8] = (uVar7 | 6) + lVar1;
      if (0x8000 < *(ushort *)(uVar7 + lVar1)) {
        pbVar8 = (byte *)(lVar9 + 4 + (ulonglong)*(ushort *)(uVar7 + lVar1) * 8);
        *pbVar8 = *pbVar8 | 0x20;
        lVar9 = *(longlong *)(param_1 + 0x20);
      }
      uVar3 = *(ushort *)(uVar7 + 2 + lVar1);
      if (0x8000 < uVar3) {
        pbVar8 = (byte *)(lVar9 + 4 + (ulonglong)uVar3 * 8);
        *pbVar8 = *pbVar8 | 0x20;
      }
    }
    pbVar8 = (byte *)(lVar1 + 5 + uVar7);
    if (0x5f < ((&DAT_18056ee40)[*pbVar8] & (bVar2 | 0x7f))) {
      lVar9 = lVar1;
      goto LAB_1804babf6;
    }
    *(undefined2 *)local_348[*pbVar8] = *(undefined2 *)(uVar7 + 6 + lVar1);
    *(undefined2 *)(uVar7 + lVar1) = 0;
    *(undefined2 *)(uVar7 + 6 + lVar1) = 0;
    *(undefined4 *)(uVar7 + 2 + lVar1) = 0xc000000;
  } while( true );
}



/* ===== 1804bac70 FUN_1804bac70 ===== */

void FUN_1804bac70(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if ((*(uint *)(param_1 + 0xa8) & 0x40000) != 0) {
    uVar8 = 0;
    uVar3 = *(ushort *)(param_1 + 10);
    if (uVar3 != 0) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x38);
        uVar7 = *(uint *)(*(longlong *)(param_1 + 0x30) + uVar8 * 0xc);
        bVar2 = *(byte *)(*(longlong *)(param_1 + 0x30) + 10 + uVar8 * 0xc);
        uVar5 = 0;
        if (bVar2 != 0) {
          do {
            uVar6 = *(uint *)(lVar4 + (ulonglong)uVar7 * 4 + uVar5 * 4) & 0xffff;
            if (0x8000 < uVar6) {
              pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)uVar6 * 8);
              *pbVar1 = *pbVar1 | 0x20;
            }
            uVar6 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar6;
          } while (uVar6 < bVar2);
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < uVar3);
    }
    FUN_1804baa40(param_1);
    *(undefined8 *)(param_1 + 0xb24) = 0;
    *(undefined8 *)(param_1 + 0xb2c) = 0;
    *(undefined8 *)(param_1 + 0xb34) = 0;
    *(undefined8 *)(param_1 + 0xb3c) = 0;
    *(undefined8 *)(param_1 + 0xb44) = 0;
    *(undefined8 *)(param_1 + 0xb4c) = 0;
    *(undefined8 *)(param_1 + 0xb54) = 0;
    *(undefined8 *)(param_1 + 0xb5c) = 0;
    *(undefined8 *)(param_1 + 0xb64) = 0;
    *(undefined8 *)(param_1 + 0xb6c) = 0;
    *(undefined8 *)(param_1 + 0xb74) = 0;
    *(undefined8 *)(param_1 + 0xb7c) = 0;
    *(undefined8 *)(param_1 + 0xb84) = 0;
    *(undefined8 *)(param_1 + 0xb8c) = 0;
    *(undefined8 *)(param_1 + 0xb94) = 0;
    *(undefined8 *)(param_1 + 0xb9c) = 0;
  }
  return;
}



/* ===== 1804bad40 FUN_1804bad40 ===== */

undefined8 FUN_1804bad40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1804bb500(param_3);
  return 0;
}



/* ===== 1804bad60 FUN_1804bad60 ===== */

undefined8 FUN_1804bad60(longlong param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  longlong local_38;
  undefined8 local_30;
  uint local_28;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined2 *)(param_1 + 10);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  local_30 = 0;
  local_28 = 0;
  local_38 = param_1;
  iVar6 = FUN_180003349(*(undefined8 *)(param_1 + 0x80),0,&local_38,FUN_1804bad40);
  *(longlong *)(param_1 + -0x2d8) = *(longlong *)(param_1 + -0x2d8) + (ulonglong)local_28 * -2;
  (**(code **)(param_1 + -0x2e8))
            (*(undefined8 *)(param_1 + -0x2e0),local_30,(ulonglong)local_28 * 2,0);
  if (iVar6 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x80);
  if (((iVar6 == 2) &&
      ((uint)((longlong)*(undefined8 *)(*(longlong *)(lVar5 + 0x28) + -8) >> 0x2f) < 0xfffffff3)) &&
     (((int)*(double *)(*(longlong *)(lVar5 + 0x28) + -8) - 0x18U & 0xfffffffd) == 0)) {
    piVar1 = (int *)(param_1 + 0xf0);
    *piVar1 = *piVar1 + -1;
    if (-1 < *piVar1) {
      *(longlong *)(lVar5 + 0x28) = *(longlong *)(lVar5 + 0x28) + -8;
      FUN_1804bb340(param_1,uVar3,uVar2,uVar4);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180484920(lVar5,iVar6);
}



/* ===== 1804bae50 FUN_1804bae50 ===== */

void FUN_1804bae50(longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5)

{
  ushort *puVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  longlong lVar8;
  bool bVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  uVar5 = *(ushort *)(param_1 + 0x1b4);
  uVar15 = 0;
  bVar9 = false;
  uVar12 = 0;
  if (param_4 != 0) {
    do {
      uVar6 = *(ushort *)(param_3 + uVar15 * 2);
      uVar10 = (ulonglong)uVar6;
      uVar7 = *(ushort *)(param_2 + uVar10 * 2);
      if ((uVar6 == uVar7) || (uVar7 == 0xffff)) {
        pbVar2 = (byte *)(*(longlong *)(param_1 + 0x20) + 4 + uVar10 * 8);
        *pbVar2 = *pbVar2 & 0xbf;
      }
      else {
        *(ushort *)(param_3 + uVar12 * 2) = uVar6;
        uVar12 = (ulonglong)((int)uVar12 + 1);
        lVar8 = *(longlong *)(param_1 + 0x20);
        if ((*(ushort *)(lVar8 + (ulonglong)uVar7 * 8) != uVar6) &&
           (*(ushort *)(lVar8 + 2 + (ulonglong)uVar7 * 8) != uVar6)) {
          pbVar2 = (byte *)(lVar8 + 4 + uVar10 * 8);
          *pbVar2 = *pbVar2 | 0x20;
          bVar9 = true;
        }
      }
      uVar13 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar13;
    } while (uVar13 < param_4);
    if (bVar9) {
      uVar13 = *(uint *)(param_1 + 0xc);
joined_r0x0001804baeed:
      uVar13 = uVar13 - 1;
      if (uVar5 < uVar13) {
        uVar15 = (ulonglong)uVar13;
        lVar8 = *(longlong *)(param_1 + 0x20);
        uVar6 = *(ushort *)(lVar8 + 2 + uVar15 * 8);
        if (0x7fff < uVar6) {
          pbVar2 = (byte *)(lVar8 + 4 + (ulonglong)uVar6 * 8);
          *pbVar2 = *pbVar2 & 0xdf;
        }
        uVar6 = *(ushort *)(lVar8 + uVar15 * 8);
        if (0x7fff < uVar6) {
          pbVar2 = (byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)uVar6 * 8);
          *pbVar2 = *pbVar2 & 0xdf;
          uVar6 = *(ushort *)(lVar8 + uVar15 * 8);
          if ((uVar6 < uVar5) && ((byte)(*(char *)(lVar8 + 5 + uVar15 * 8) + 0xa1U) < 6)) {
            puVar1 = (ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar6 * 8);
            cVar3 = *(char *)(*(longlong *)(param_1 + 0x20) + 5 + (ulonglong)uVar6 * 8);
            while (cVar3 == 'd') {
              if (0x7fff < puVar1[1]) {
                pbVar2 = (byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)puVar1[1] * 8);
                *pbVar2 = *pbVar2 & 0xdf;
              }
              uVar6 = *puVar1;
              if (uVar6 < 0x8000) break;
              lVar8 = *(longlong *)(param_1 + 0x20);
              pbVar2 = (byte *)(lVar8 + 4 + (ulonglong)uVar6 * 8);
              *pbVar2 = *pbVar2 & 0xdf;
              puVar1 = (ushort *)(lVar8 + (ulonglong)uVar6 * 8);
              cVar3 = *(char *)((longlong)puVar1 + 5);
            }
          }
        }
        goto joined_r0x0001804baeed;
      }
      uVar13 = (uint)*(ushort *)(param_1 + 10);
      while (uVar13 = uVar13 - 1, param_5 <= uVar13) {
        lVar8 = *(longlong *)(param_1 + 0x38);
        uVar14 = *(uint *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar13 * 0xc);
        bVar4 = *(byte *)(*(longlong *)(param_1 + 0x30) + 10 + (ulonglong)uVar13 * 0xc);
        uVar15 = 0;
        if (bVar4 != 0) {
          do {
            uVar11 = *(uint *)(lVar8 + (ulonglong)uVar14 * 4 + uVar15 * 4);
            if ((uVar11 & 0x8000) != 0) {
              pbVar2 = (byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)(uVar11 & 0xffff) * 8
                               );
              *pbVar2 = *pbVar2 & 0xdf;
            }
            uVar11 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar11;
          } while (uVar11 < bVar4);
        }
      }
    }
  }
  uVar15 = 1;
  uVar13 = *(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0xac);
  if (1 < uVar13) {
    do {
      uVar6 = *(ushort *)(param_1 + 0x25c + uVar15 * 4);
      if (0x7fff < uVar6) {
        while (uVar10 = (ulonglong)uVar6, uVar6 != *(ushort *)(param_2 + uVar10 * 2)) {
          lVar8 = *(longlong *)(param_1 + 0x20);
          bVar4 = *(byte *)(lVar8 + 4 + uVar10 * 8);
          *(byte *)(lVar8 + 4 + uVar10 * 8) = bVar4 & 0xdf;
          if (((bVar4 & 0x40) != 0) || ((bVar4 & 0x1f) < 3)) break;
          *(byte *)(lVar8 + 4 + uVar10 * 8) = bVar4 & 0xdf | 0x40;
          if (0x3f < (uint)uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_1804954a0(param_1,0x19);
          }
          *(ushort *)(param_3 + uVar12 * 2) = uVar6;
          uVar12 = (ulonglong)((uint)uVar12 + 1);
          uVar6 = *(ushort *)(param_2 + uVar10 * 2);
          if ((uVar5 < uVar6) || (uVar6 < 0x8000)) break;
        }
      }
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
    } while (uVar14 < uVar13);
  }
  uVar13 = (uint)uVar12;
  if (bVar9) {
    do {
      bVar9 = false;
      uVar12 = 0;
      if (uVar13 == 0) break;
      do {
        uVar15 = (ulonglong)*(ushort *)(param_3 + uVar12 * 2);
        lVar8 = *(longlong *)(param_1 + 0x20);
        if ((*(byte *)(lVar8 + 4 + uVar15 * 8) & 0x20) == 0) {
          uVar15 = (ulonglong)*(ushort *)(param_2 + uVar15 * 2);
          bVar4 = *(byte *)(lVar8 + 4 + uVar15 * 8);
          if ((bVar4 & 0x20) != 0) {
            bVar9 = true;
            *(byte *)(lVar8 + 4 + uVar15 * 8) = bVar4 & 0xdf;
          }
        }
        uVar14 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar14;
      } while (uVar14 < uVar13);
    } while (bVar9);
  }
  uVar12 = 0;
  if (uVar13 != 0) {
    do {
      uVar6 = *(ushort *)(param_3 + uVar12 * 2);
      uVar15 = (ulonglong)uVar6;
      lVar8 = *(longlong *)(param_1 + 0x20);
      bVar4 = *(byte *)(lVar8 + 4 + uVar15 * 8);
      if ((bVar4 & 0x20) == 0) {
        uVar7 = *(ushort *)(param_2 + uVar15 * 2);
        if (uVar5 < uVar7) {
          pbVar2 = (byte *)(lVar8 + 4 + (ulonglong)uVar7 * 8);
          *pbVar2 = *pbVar2 | 0x40;
        }
        bVar4 = *(byte *)(lVar8 + 4 + uVar15 * 8);
        *(ushort *)(param_1 + 0xb8) = uVar6;
        *(ushort *)(param_1 + 0xba) = uVar7;
        *(ushort *)(param_1 + 0xbc) = bVar4 & 0x1f | 0x1300;
        FUN_1804a5f70(param_1);
      }
      else {
        *(byte *)(lVar8 + 4 + uVar15 * 8) = bVar4 & 0x9f;
      }
      uVar14 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar14;
    } while (uVar14 < uVar13);
  }
  return;
}



/* ===== 1804bb150 FUN_1804bb150 ===== */

void FUN_1804bb150(longlong param_1,uint *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint *puVar18;
  
  lVar6 = *(longlong *)(param_1 + 0x38);
  uVar3 = *param_2;
  puVar18 = (uint *)(*(longlong *)(param_1 + 0x30) + (ulonglong)*(ushort *)(param_1 + 10) * 0xc);
  if (param_2 + 3 == puVar18) {
    uVar4 = *(uint *)(param_1 + 0x2c);
  }
  else {
    uVar4 = param_2[3];
  }
  bVar2 = *(byte *)((longlong)param_2 + 10);
  uVar8 = param_2[2];
  if (*(char *)(param_1 + 0xb6) < '\0') {
    uVar11 = *(uint *)(param_1 + 0x2c);
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) + 1;
  }
  else {
    uVar11 = puVar18[-3];
    puVar18 = puVar18 + -3;
  }
  *(undefined1 *)(param_1 + 0xb6) = 0;
  uVar13 = 0;
  *puVar18 = uVar11;
  uVar15 = 0;
  *(undefined2 *)(puVar18 + 1) = *(undefined2 *)(param_1 + 0xc);
  *(undefined2 *)((longlong)puVar18 + 6) = 0;
  *(byte *)(puVar18 + 2) = (byte)uVar8;
  uVar12 = 0;
  *(undefined1 *)((longlong)puVar18 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined1 *)((longlong)puVar18 + 0xb) = 0;
  lVar7 = *(longlong *)(param_1 + 0x38);
  lVar1 = lVar7 + (ulonglong)uVar11 * 4;
  uVar16 = uVar13;
  if (bVar2 != 0) {
    do {
      uVar5 = *(uint *)(lVar6 + (ulonglong)uVar3 * 4 + uVar15 * 4);
      uVar17 = *(uint *)(param_3 + uVar12 * 4);
      uVar9 = (uint)uVar12 + 1;
      if (uVar5 >> 0x18 <= uVar17 >> 0x18) {
        if (uVar17 >> 0x18 != uVar5 >> 0x18) {
          uVar9 = (uint)uVar12;
        }
        if ((uVar5 >> 0xf & 1) == 0) {
          uVar17 = uVar5;
        }
        else {
          uVar17 = (uint)*(ushort *)(param_4 + (ulonglong)(uVar5 & 0xffff) * 2) | uVar5 & 0xfffb0000
          ;
        }
        uVar15 = (ulonglong)((int)uVar15 + 1);
      }
      uVar12 = (ulonglong)uVar9;
      uVar16 = (ulonglong)((int)uVar13 + 1);
      *(uint *)(lVar1 + uVar13 * 4) = uVar17;
      uVar13 = uVar16;
    } while ((uint)uVar15 < (uint)bVar2);
  }
  uVar5 = *(uint *)(param_3 + uVar12 * 4);
  while (uVar5 >> 0x18 < (uint)(byte)uVar8) {
    uVar13 = (ulonglong)((int)uVar12 + 1);
    *(undefined4 *)(lVar1 + uVar16 * 4) = *(undefined4 *)(param_3 + uVar12 * 4);
    uVar12 = uVar13;
    uVar16 = (ulonglong)((int)uVar16 + 1);
    uVar5 = *(uint *)(param_3 + uVar13 * 4);
  }
  *(char *)((longlong)puVar18 + 10) = (char)uVar16;
  puVar10 = (undefined4 *)(lVar7 + (uVar16 + uVar11) * 4);
  for (puVar14 = (undefined4 *)(lVar6 + ((ulonglong)uVar3 + (ulonglong)bVar2) * 4);
      puVar14 < (undefined4 *)(lVar6 + (ulonglong)uVar4 * 4); puVar14 = puVar14 + 1) {
    *puVar10 = *puVar14;
    puVar10 = puVar10 + 1;
  }
  *(int *)(param_1 + 0x2c) = (int)((longlong)puVar10 - *(longlong *)(param_1 + 0x38) >> 2);
  return;
}



/* ===== 1804bb340 FUN_1804bb340 ===== */

void FUN_1804bb340(longlong param_1,uint param_2,int param_3,undefined4 param_4)

{
  byte *pbVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  *(undefined4 *)
   (*(longlong *)(param_1 + 0x38) +
   (ulonglong)
   ((uint)*(byte *)(lVar2 + 10 + (ulonglong)(param_3 - 1) * 0xc) +
   *(int *)(lVar2 + (ulonglong)(param_3 - 1) * 0xc)) * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x38) + (ulonglong)*(byte *)(lVar2 + 10) * 4);
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  *(short *)(param_1 + 10) = (short)param_3;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  FUN_1804a6a90(param_1);
  if (param_2 <= *(ushort *)(param_1 + 0xb26)) {
    *(undefined2 *)(param_1 + 0xb24) = 0;
  }
  if (param_2 <= *(ushort *)(param_1 + 0xb2e)) {
    *(undefined2 *)(param_1 + 0xb2c) = 0;
  }
  if (param_2 <= *(ushort *)(param_1 + 0xb36)) {
    *(undefined2 *)(param_1 + 0xb34) = 0;
  }
  if (param_2 <= *(ushort *)(param_1 + 0xb3e)) {
    *(undefined2 *)(param_1 + 0xb3c) = 0;
  }
  if (param_2 <= *(ushort *)(param_1 + 0xb46)) {
    *(undefined2 *)(param_1 + 0xb44) = 0;
  }
  if (param_2 <= *(ushort *)(param_1 + 0xb4e)) {
    *(undefined2 *)(param_1 + 0xb4c) = 0;
  }
  if (param_2 <= *(ushort *)(param_1 + 0xb56)) {
    *(undefined2 *)(param_1 + 0xb54) = 0;
  }
  if (param_2 <= *(ushort *)(param_1 + 0xb5e)) {
    *(undefined2 *)(param_1 + 0xb5c) = 0;
  }
  if (param_2 <= *(ushort *)(param_1 + 0xb66)) {
    *(undefined2 *)(param_1 + 0xb64) = 0;
  }
  if (param_2 <= *(ushort *)(param_1 + 0xb6e)) {
    *(undefined2 *)(param_1 + 0xb6c) = 0;
  }
  if (param_2 <= *(ushort *)(param_1 + 0xb76)) {
    *(undefined2 *)(param_1 + 0xb74) = 0;
  }
  if (param_2 <= *(ushort *)(param_1 + 0xb7e)) {
    *(undefined2 *)(param_1 + 0xb7c) = 0;
  }
  if (param_2 <= *(ushort *)(param_1 + 0xb86)) {
    *(undefined2 *)(param_1 + 0xb84) = 0;
  }
  if (param_2 <= *(ushort *)(param_1 + 0xb8e)) {
    *(undefined2 *)(param_1 + 0xb8c) = 0;
  }
  if (param_2 <= *(ushort *)(param_1 + 0xb96)) {
    *(undefined2 *)(param_1 + 0xb94) = 0;
  }
  if (param_2 <= *(ushort *)(param_1 + 0xb9e)) {
    *(undefined2 *)(param_1 + 0xb9c) = 0;
  }
  while (param_2 = param_2 - 1, 0x8000 < param_2) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)param_2 * 8);
    *pbVar1 = *pbVar1 & 0x9f;
  }
  return;
}



/* ===== 1804bb500 FUN_1804bb500 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804bb500(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  undefined2 uVar8;
  ushort uVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined2 uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ushort uVar18;
  ulonglong uVar19;
  undefined1 auStack_128 [32];
  uint local_108;
  uint local_f8;
  longlong local_f0;
  undefined4 *local_e8;
  ushort local_d8 [64];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_128;
  lVar7 = *param_1;
  uVar19 = 0;
  uVar6 = *(uint *)(lVar7 + 0xc);
  *(uint *)(param_1 + 2) = uVar6 - 0x8000;
  puVar10 = (undefined2 *)
            FUN_180491760(*(undefined8 *)(lVar7 + 0x80),0,0,(ulonglong)(uVar6 - 0x8000) * 2);
  param_1[1] = (longlong)puVar10;
  *puVar10 = 0x8000;
  *(undefined2 *)(lVar7 + 0xb8) = 0;
  *(undefined4 *)(lVar7 + 0xba) = 0x11800000;
  FUN_1804a5f70(lVar7);
  uVar9 = *(ushort *)(lVar7 + 10);
  local_f8 = (uint)uVar9;
  if (*(uint *)(lVar7 + 0x15c) < (uint)uVar9 * 2 - 2) {
    FUN_1804bc800(lVar7);
  }
  uVar11 = (ulonglong)(uVar9 - 1);
  if (*(uint *)(lVar7 + 0x170) <
      (uint)*(byte *)(*(longlong *)(lVar7 + 0x30) + 10 + uVar11 * 0xc) * (uVar9 - 2) +
      *(int *)(lVar7 + 0x2c) * 2) {
    FUN_1804bc860(lVar7);
  }
  uVar17 = 0x8001;
  local_f0 = *(longlong *)(lVar7 + 0x38);
  uVar15 = (ulonglong)*(uint *)(*(longlong *)(lVar7 + 0x30) + uVar11 * 0xc);
  lVar12 = *(byte *)(*(longlong *)(lVar7 + 0x30) + 10 + uVar11 * 0xc) + uVar15;
  *(undefined4 *)(local_f0 + lVar12 * 4) = 0xff000000;
  local_e8 = (undefined4 *)(local_f0 + lVar12 * 4);
  local_f0 = local_f0 + uVar15 * 4;
  lVar16 = *(longlong *)(lVar7 + 0x30);
  lVar12 = lVar16 + 0xc;
  if (0x8001 < uVar6) {
    do {
      if (*(ushort *)(lVar12 + 4) <= uVar17) {
        FUN_1804bb150(lVar7,lVar12,local_f0,puVar10 + -0x8000);
        lVar12 = lVar12 + 0xc;
      }
      lVar16 = *(longlong *)(lVar7 + 0x20);
      uVar11 = (ulonglong)uVar17;
      uVar9 = *(ushort *)(lVar16 + uVar11 * 8);
      if (uVar9 < 0x8000) {
        uVar18 = uVar9;
      }
      else {
        uVar18 = puVar10[(ulonglong)uVar9 - 0x8000];
      }
      uVar4 = *(ushort *)(lVar16 + 2 + uVar11 * 8);
      uVar5 = uVar4;
      if (0x7fff < uVar4) {
        uVar5 = puVar10[(ulonglong)uVar4 - 0x8000];
      }
      if (((((&DAT_18056ee40)[*(byte *)(lVar16 + 5 + uVar11 * 8)] & 0x60) == 0) && (uVar18 == uVar9)
          ) && (uVar5 == uVar4)) {
        puVar10[uVar11 - 0x8000] = (short)uVar17;
      }
      else {
        bVar1 = *(byte *)(lVar16 + 4 + uVar11 * 8);
        *(ushort *)(lVar7 + 0xbc) = *(ushort *)(lVar16 + 4 + uVar11 * 8) & 0xffbf;
        *(ushort *)(lVar7 + 0xb8) = uVar18;
        *(ushort *)(lVar7 + 0xba) = uVar5;
        uVar9 = FUN_1804d6ae0(lVar7);
        puVar10[uVar11 - 0x8000] = uVar9;
        if (uVar9 != uVar17) {
          lVar16 = *(longlong *)(lVar7 + 0x20);
          uVar11 = (ulonglong)uVar9;
          if (uVar9 < uVar6) {
            if (((0x7fff < uVar9) &&
                (bVar2 = *(byte *)(lVar16 + 4 + uVar11 * 8), (bVar2 & 0x40) == 0)) &&
               (2 < (bVar2 & 0x1f))) {
              *(byte *)(lVar16 + 4 + uVar11 * 8) = bVar2 | 0x40;
              if (0x3f < (uint)uVar19) goto LAB_1804bb906;
              local_d8[uVar19] = uVar9;
              uVar19 = (ulonglong)((uint)uVar19 + 1);
            }
            bVar2 = *(byte *)(lVar16 + 4 + uVar11 * 8);
            if (((bVar2 ^ bVar1) & 0x1f) != 0) {
              uVar14 = (bVar1 & 0x1f) - 0xf;
              if ((4 < uVar14) || (4 < (bVar2 & 0x1f) - 0xf)) {
                if (((bVar1 & 0x1f) == 0xe) && ((bVar2 & 0x1f) - 0xf < 5)) {
                  uVar8 = 0x1d3;
                  uVar13 = 0x5b0e;
                }
                else {
                  if (((bVar2 & 0x1f) != 0xe) || (4 < uVar14)) {
                    /* WARNING: Subroutine does not return */
                    FUN_1804954a0(lVar7,0x1a);
                  }
                  uVar8 = 0x326e;
                  uVar13 = 0x5b93;
                }
                *(undefined2 *)(lVar7 + 0xbc) = uVar13;
                *(ushort *)(lVar7 + 0xb8) = uVar9;
                *(undefined2 *)(lVar7 + 0xba) = uVar8;
                uVar9 = FUN_1804d6ae0(lVar7);
                puVar10[(ulonglong)uVar17 - 0x8000] = uVar9;
                lVar16 = *(longlong *)(lVar7 + 0x20) + (ulonglong)uVar9 * 8;
LAB_1804bb838:
                if (((uVar9 < uVar6) && (0x7fff < uVar9)) && ((*(byte *)(lVar16 + 4) & 0x40) == 0))
                {
                  *(byte *)(lVar16 + 4) = *(byte *)(lVar16 + 4) | 0x40;
                  if (0x3f < (uint)uVar19) {
LAB_1804bb906:
                    /* WARNING: Subroutine does not return */
                    FUN_1804954a0(lVar7,0x19);
                  }
                  local_d8[uVar19] = uVar9;
                  uVar19 = (ulonglong)((uint)uVar19 + 1);
                }
              }
            }
          }
          else if ((uVar9 != 0xffff) && (uVar6 < uVar9)) {
            cVar3 = *(char *)(lVar16 + 5 + uVar11 * 8);
            if (cVar3 == '[') {
              uVar9 = *(ushort *)(lVar16 + uVar11 * 8);
              if (uVar9 < uVar6) {
LAB_1804bb829:
                lVar16 = lVar16 + (ulonglong)uVar9 * 8;
                goto LAB_1804bb838;
              }
            }
            else if (((cVar3 == 'I') &&
                     (uVar9 = *(ushort *)(lVar16 + 2 + uVar11 * 8), uVar9 < uVar6)) &&
                    (uVar9 != 0x7fff)) goto LAB_1804bb829;
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar6);
    lVar16 = *(longlong *)(lVar7 + 0x30);
  }
  if (-1 < *(char *)(lVar7 + 0xb6)) {
    uVar9 = *(short *)(lVar7 + 10) - 1;
    *(ushort *)(lVar7 + 10) = uVar9;
    *(undefined4 *)(lVar7 + 0x2c) = *(undefined4 *)(lVar16 + (ulonglong)uVar9 * 0xc);
  }
  *local_e8 = *(undefined4 *)(*(longlong *)(lVar7 + 0x38) + (ulonglong)*(byte *)(lVar16 + 10) * 4);
  local_108 = local_f8;
  FUN_1804bae50(lVar7,puVar10 + -0x8000,local_d8,uVar19);
  return;
}



/* ===== 1804bb920 FUN_1804bb920 ===== */

void FUN_1804bb920(longlong param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ushort *puVar9;
  longlong lVar10;
  byte bVar11;
  
  if (((*(uint *)(param_1 + 0xa8) & 0x10f0000) != 0x10f0000) ||
     ((((*(short *)(param_1 + 0x234) == 0 && (*(short *)(param_1 + 0x236) == 0)) &&
       (*(short *)(param_1 + 0x238) == 0)) && (*(short *)(param_1 + 0x23a) == 0)))) {
    return;
  }
  if (*(int *)(param_1 + 0x158) == 0) {
    lVar6 = *(longlong *)(param_1 + 0x38);
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x30) + -0xc +
                     (ulonglong)*(ushort *)(param_1 + 10) * 0xc);
    bVar11 = *(byte *)(*(longlong *)(param_1 + 0x30) + -2 +
                      (ulonglong)*(ushort *)(param_1 + 10) * 0xc);
    uVar7 = 0;
    if (bVar11 != 0) {
      do {
        uVar8 = *(uint *)(lVar6 + (ulonglong)uVar5 * 4 + uVar7 * 4);
        if ((uVar8 >> 0xf & 1) != 0) {
          pbVar2 = (byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)(uVar8 & 0xffff) * 8);
          *pbVar2 = *pbVar2 | 0x20;
        }
        uVar8 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar8;
      } while (uVar8 < bVar11);
    }
  }
  FUN_1804bbb60(param_1);
  if (*(int *)(param_1 + 0x158) != 0) {
    do {
      lVar6 = *(longlong *)(param_1 + 0x20);
      uVar7 = (ulonglong)(*(int *)(param_1 + 0xc) - 1);
      if (*(char *)(lVar6 + 5 + uVar7 * 8) != '\x13') break;
      bVar11 = 0;
      puVar9 = (ushort *)(lVar6 + uVar7 * 8);
      lVar10 = lVar6;
      do {
        uVar7 = (ulonglong)*puVar9;
        bVar3 = *(byte *)(lVar6 + 4 + (ulonglong)puVar9[1] * 8);
        bVar4 = *(byte *)(lVar6 + 4 + uVar7 * 8);
        if ((((bVar3 ^ bVar4) & 0x20) == 0) &&
           (*(short *)(lVar6 + 6 + uVar7 * 8) == *(short *)(lVar6 + 6 + (ulonglong)puVar9[1] * 8)))
        {
        }
        else {
          pbVar2 = (byte *)(lVar10 + 4 + uVar7 * 8);
          *pbVar2 = *pbVar2 | 0x20;
          bVar11 = bVar11 | ~(bVar3 & bVar4) & 0x20;
          pbVar2 = (byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)puVar9[1] * 8);
          *pbVar2 = *pbVar2 | 0x20;
          lVar6 = *(longlong *)(param_1 + 0x20);
          lVar10 = lVar6;
        }
        pcVar1 = (char *)((longlong)puVar9 + -3);
        puVar9 = puVar9 + -4;
      } while (*pcVar1 == '\x13');
    } while (bVar11 != 0);
  }
  FUN_1804bbe40(param_1);
  return;
}



/* ===== 1804bbab0 FUN_1804bbab0 ===== */

undefined8 FUN_1804bbab0(longlong param_1,longlong param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 local_res18 [4];
  
  if (0x8000 < param_3) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    uVar4 = (ulonglong)param_3;
    if (((*(byte *)(lVar3 + 4 + uVar4 * 8) & 0x40) == 0) &&
       (((*(char *)(lVar3 + 5 + uVar4 * 8) != '[' || (*(short *)(lVar3 + 2 + uVar4 * 8) != 0x1d3))
        || ((*(byte *)(lVar3 + 4 + (ulonglong)*(ushort *)(lVar3 + uVar4 * 8) * 8) & 0x40) == 0)))) {
      if (*(uint *)(param_1 + 0x158) <= param_3) {
        return 0;
      }
      local_res18[0] = 0x3f;
      uVar1 = *(ushort *)(lVar3 + uVar4 * 8);
      if ((0x8000 < uVar1) && (iVar2 = FUN_1804bbdb0(param_1,uVar1,local_res18), iVar2 != 0)) {
        return 0;
      }
      uVar1 = *(ushort *)(lVar3 + 2 + uVar4 * 8);
      if ((0x8000 < uVar1) && (iVar2 = FUN_1804bbdb0(param_1,uVar1,local_res18), iVar2 != 0)) {
        return 0;
      }
    }
    else {
      *(short *)(param_2 + 6) = *(short *)(param_2 + 6) + 1;
    }
  }
  return 1;
}



/* ===== 1804bbb60 FUN_1804bbb60 ===== */

void FUN_1804bbb60(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  ushort *puVar7;
  ulonglong uVar8;
  ushort *puVar9;
  ulonglong uVar10;
  
  puVar9 = (ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(*(int *)(param_1 + 0xc) - 1) * 8);
LAB_1804bbba0:
  switch(*(undefined1 *)((longlong)puVar9 + 5)) {
  case 0xd:
    goto switchD_1804bbbc4_caseD_d;
  default:
    if ((((byte)puVar9[2] & 0x20) != 0) || ((char)(byte)puVar9[2] < '\0')) {
      if (0x8000 < *puVar9) {
        pbVar2 = (byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)*puVar9 * 8);
        *pbVar2 = *pbVar2 | 0x20;
      }
      if (0x8000 < puVar9[1]) {
        pbVar2 = (byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)puVar9[1] * 8);
        *pbVar2 = *pbVar2 | 0x20;
      }
    }
    break;
  case 0x13:
    lVar5 = *(longlong *)(param_1 + 0x20);
    uVar10 = (ulonglong)puVar9[1];
    uVar8 = (ulonglong)*puVar9;
    *(undefined2 *)(lVar5 + 6 + uVar10 * 8) = 0;
    *(undefined2 *)(lVar5 + 6 + uVar8 * 8) = 0;
    cVar4 = *(char *)(lVar5 + 5 + uVar8 * 8);
    if ((cVar4 != *(char *)(lVar5 + 5 + uVar10 * 8)) || (3 < (byte)(cVar4 + 0xafU))) {
      pbVar2 = (byte *)(lVar5 + 4 + uVar8 * 8);
      *pbVar2 = *pbVar2 | 0x20;
      pbVar2 = (byte *)(lVar5 + 4 + uVar10 * 8);
      *pbVar2 = *pbVar2 | 0x20;
      puVar9 = puVar9 + -4;
      goto LAB_1804bbba0;
    }
    break;
  case 0x42:
  case 0x43:
  case 0x46:
  case 0x49:
  case 0x58:
  case 0x62:
  case 99:
switchD_1804bbbc4_caseD_42:
    pbVar2 = (byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)*puVar9 * 8);
    *pbVar2 = *pbVar2 | 0x20;
    puVar9 = puVar9 + -4;
    goto LAB_1804bbba0;
  case 0x45:
    if ((puVar9[2] & 0x20) != 0) goto switchD_1804bbbc4_caseD_42;
    if (puVar9[1] == 5) {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)*puVar9 * 8);
      *pbVar2 = *pbVar2 | 0x20;
      puVar9 = puVar9 + -4;
      goto LAB_1804bbba0;
    }
    break;
  case 0x4a:
  case 0x4b:
  case 0x4d:
  case 0x4e:
    lVar5 = *(longlong *)(param_1 + 0x20);
    puVar7 = (ushort *)(lVar5 + (ulonglong)*puVar9 * 8);
    if (*(ushort *)(lVar5 + 2 + (ulonglong)*puVar9 * 8) < 0x8000) {
      bVar3 = *(byte *)((longlong)puVar7 + 5);
      if ((byte)(bVar3 - 0x38) < 2) {
        puVar7 = (ushort *)(lVar5 + (ulonglong)*puVar7 * 8);
      }
      else if ((0x3e < bVar3) || ((0x4c00020000000000U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0))
      goto LAB_1804bbc57;
      lVar1 = lVar5 + (ulonglong)*puVar7 * 8;
      if ((2 < (byte)(*(char *)(lVar5 + 5 + (ulonglong)*puVar7 * 8) + 0xafU)) ||
         (((*(byte *)(lVar1 + 4) & 0x40) != 0 &&
          (iVar6 = FUN_1804bbab0(param_1,lVar1,puVar9[1]), iVar6 == 0)))) goto LAB_1804bbc57;
    }
    else {
LAB_1804bbc57:
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)*puVar9 * 8);
      *pbVar2 = *pbVar2 | 0x20;
    }
    pbVar2 = (byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)puVar9[1] * 8);
    *pbVar2 = *pbVar2 | 0x20;
    puVar9 = puVar9 + -4;
    goto LAB_1804bbba0;
  case 0x4c:
    goto switchD_1804bbbc4_caseD_4c;
  case 0x54:
    if (((puVar9[2] & 0x40) != 0) && (iVar6 = FUN_1804bbab0(param_1,puVar9,puVar9[1]), iVar6 == 0))
    {
      *(byte *)(puVar9 + 2) = (byte)puVar9[2] | 0x20;
    }
switchD_1804bbbc4_caseD_4c:
    pbVar2 = (byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)puVar9[1] * 8);
    *pbVar2 = *pbVar2 | 0x20;
    puVar9 = puVar9 + -4;
    goto LAB_1804bbba0;
  }
  puVar9 = puVar9 + -4;
  goto LAB_1804bbba0;
switchD_1804bbbc4_caseD_d:
  return;
}



/* ===== 1804bbdb0 FUN_1804bbdb0 ===== */

bool FUN_1804bbdb0(longlong param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (*param_3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    uVar4 = (ulonglong)param_2;
    *param_3 = *param_3 + -1;
    if ((*(byte *)(lVar2 + 4 + uVar4 * 8) & 0x40) == 0) {
      uVar1 = *(ushort *)(lVar2 + uVar4 * 8);
      if ((0x8000 < uVar1) && (iVar3 = FUN_1804bbdb0(param_1,uVar1), iVar3 != 0)) {
        return true;
      }
      uVar1 = *(ushort *)(lVar2 + 2 + uVar4 * 8);
      if (uVar1 < 0x8001) {
        return false;
      }
      iVar3 = FUN_1804bbdb0(param_1,uVar1,param_3);
      return iVar3 != 0;
    }
  }
  return true;
}



/* ===== 1804bbe40 FUN_1804bbe40 ===== */

void FUN_1804bbe40(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  puVar5 = (ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(*(int *)(param_1 + 0xc) - 1) * 8);
  puVar1 = (ushort *)(*(longlong *)(param_1 + 0x20) + 0x40000);
  do {
    if (puVar5 < puVar1) {
      for (puVar5 = (ushort *)
                    (*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 8);
          puVar5 < puVar1; puVar5 = puVar5 + 4) {
        *(byte *)(puVar5 + 2) = (byte)puVar5[2] & 0xdf;
        puVar5[3] = 0xff;
        if (((0x605fd9U >> ((byte)puVar5[2] & 0x1f) & 1) != 0) &&
           (*(char *)((longlong)puVar5 + 5) != '\x1b')) {
          puVar5 = puVar5 + 4;
        }
      }
      return;
    }
    switch(*(undefined1 *)((longlong)puVar5 + 5)) {
    case 0x13:
      if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)puVar5[1] * 8) & 0x20) == 0) &&
         ((byte)(*(char *)(*(longlong *)(param_1 + 0x20) + 5 + (ulonglong)puVar5[1] * 8) + 0xafU) <
          4)) {
        puVar5[3] = 0xfe;
      }
      else {
LAB_1804bbf5a:
        puVar5[3] = 0xff;
      }
      break;
    default:
      *(byte *)(puVar5 + 2) = (byte)puVar5[2] & 0xdf;
LAB_1804bbfb0:
      puVar5[3] = 0xff;
      break;
    case 0x3b:
      if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)*puVar5 * 8) & 0x20) != 0) {
        *(byte *)(puVar5 + 2) = (byte)puVar5[2] & 0xdf;
        goto LAB_1804bbf5a;
      }
      puVar5[3] = 0xfe;
      break;
    case 0x4a:
    case 0x4b:
    case 0x4d:
    case 0x4e:
      lVar4 = *(longlong *)(param_1 + 0x20);
      puVar6 = (ushort *)(lVar4 + (ulonglong)*puVar5 * 8);
      if (*(ushort *)(lVar4 + 2 + (ulonglong)*puVar5 * 8) < 0x8000) {
        bVar3 = *(byte *)((longlong)puVar6 + 5);
        if ((byte)(bVar3 - 0x38) < 2) {
          puVar6 = (ushort *)(lVar4 + (ulonglong)*puVar6 * 8);
        }
        else if ((0x3e < bVar3) || ((0x4c00020000000000U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0))
        goto LAB_1804bbef1;
        lVar2 = lVar4 + (ulonglong)*puVar6 * 8;
        if (((byte)(*(char *)(lVar4 + 5 + (ulonglong)*puVar6 * 8) + 0xafU) < 3) &&
           ((*(byte *)(lVar2 + 4) & 0x20) == 0)) {
          lVar4 = (longlong)puVar5 - lVar2 >> 3;
          if (0xff < (int)lVar4) {
            lVar4 = 0xff;
          }
          puVar5[3] = (short)lVar4 << 8 | 0xfe;
          break;
        }
      }
LAB_1804bbef1:
      puVar5[3] = 0xff;
      break;
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
      bVar3 = (byte)puVar5[2];
      if ((bVar3 & 0x20) != 0) {
        *(byte *)(puVar5 + 2) = bVar3 & 0xdf;
        goto LAB_1804bbfb0;
      }
      puVar5[3] = 0xfe;
      *(byte *)(puVar5 + 2) = bVar3 & 0x7f;
      *(undefined1 *)(param_1 + 0x72) = 1;
    }
    puVar5 = puVar5 + -4;
  } while( true );
}



/* ===== 1804bc080 FUN_1804bc080 ===== */

void FUN_1804bc080(longlong param_1)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  if ((*(LPVOID *)(param_1 + 0xbe8) != (LPVOID)0x0) && (*(int *)(param_1 + 0xbe4) != 0x20)) {
    BVar1 = VirtualProtect(*(LPVOID *)(param_1 + 0xbe8),*(SIZE_T *)(param_1 + 0xc00),0x20,local_res8
                          );
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804bc680(param_1);
    }
    *(undefined4 *)(param_1 + 0xbe4) = 0x20;
  }
  return;
}



/* ===== 1804bc0e0 FUN_1804bc0e0 ===== */

void FUN_1804bc0e0(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  *(undefined8 *)(param_1 + 0xbf0) = param_2;
  if (*(int *)(param_1 + 0xbe4) != 0x20) {
    BVar1 = VirtualProtect(*(LPVOID *)(param_1 + 0xbe8),*(SIZE_T *)(param_1 + 0xc00),0x20,local_res8
                          );
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804bc680(param_1);
    }
    *(undefined4 *)(param_1 + 0xbe4) = 0x20;
  }
  return;
}



/* ===== 1804bc140 FUN_1804bc140 ===== */

void FUN_1804bc140(longlong param_1)

{
  undefined8 *lpAddress;
  undefined8 *puVar1;
  
  lpAddress = *(undefined8 **)(param_1 + 0xbe8);
  *(undefined8 *)(param_1 + 0xbe8) = 0;
  *(undefined8 *)(param_1 + 0xc08) = 0;
  while (lpAddress != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*lpAddress;
    VirtualFree(lpAddress,0,0x8000);
    lpAddress = puVar1;
  }
  return;
}



/* ===== 1804bc1a0 FUN_1804bc1a0 ===== */

void FUN_1804bc1a0(longlong param_1,ulonglong param_2)

{
  BOOL BVar1;
  ulonglong uVar2;
  DWORD local_res8 [2];
  
  if ((*(LPVOID *)(param_1 + 0xbe8) != (LPVOID)0x0) && (*(int *)(param_1 + 0xbe4) != 0x20)) {
    BVar1 = VirtualProtect(*(LPVOID *)(param_1 + 0xbe8),*(SIZE_T *)(param_1 + 0xc00),0x20,local_res8
                          );
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804bc680(param_1);
    }
    *(undefined4 *)(param_1 + 0xbe4) = 0x20;
  }
  uVar2 = (longlong)*(int *)(param_1 + 0x698) * 0x400;
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0x1c);
  }
  if ((ulonglong)((longlong)*(int *)(param_1 + 0x69c) * 0x400) <
      uVar2 + *(longlong *)(param_1 + 0xc08)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0x1b);
  }
  FUN_1804bc600(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_1804954a0(param_1,0x1d);
}



/* ===== 1804bc250 FUN_1804bc250 ===== */

undefined8 * FUN_1804bc250(longlong param_1,undefined8 *param_2,int param_3)

{
  BOOL BVar1;
  undefined8 *lpAddress;
  DWORD local_res18 [4];
  
  lpAddress = *(undefined8 **)(param_1 + 0xbe8);
  if (param_3 != 0) {
    if (lpAddress == param_2) {
      if (*(int *)(param_1 + 0xbe4) != 0x20) {
        BVar1 = VirtualProtect(lpAddress,*(SIZE_T *)(param_1 + 0xc00),0x20,local_res18);
        if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804bc680(param_1);
        }
        *(undefined4 *)(param_1 + 0xbe4) = 0x20;
      }
    }
    else {
      BVar1 = VirtualProtect(param_2,param_2[1],0x20,local_res18);
      if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804bc680(param_1);
      }
    }
    return (undefined8 *)0x0;
  }
  if ((param_2 < lpAddress) ||
     ((undefined8 *)(*(SIZE_T *)(param_1 + 0xc00) + (longlong)lpAddress) <= param_2)) {
    do {
      do {
        lpAddress = (undefined8 *)*lpAddress;
      } while (param_2 < lpAddress);
    } while ((undefined8 *)(lpAddress[1] + (longlong)lpAddress) <= param_2);
    BVar1 = VirtualProtect(lpAddress,lpAddress[1],4,local_res18);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804bc680(param_1);
    }
  }
  else if (*(int *)(param_1 + 0xbe4) != 4) {
    BVar1 = VirtualProtect(lpAddress,*(SIZE_T *)(param_1 + 0xc00),4,local_res18);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804bc680(param_1);
    }
    *(undefined4 *)(param_1 + 0xbe4) = 4;
  }
  return lpAddress;
}



/* ===== 1804bc380 FUN_1804bc380 ===== */

undefined8 FUN_1804bc380(longlong param_1,undefined8 *param_2)

{
  BOOL BVar1;
  DWORD local_res8 [2];
  
  if (*(LPVOID *)(param_1 + 0xbe8) == (LPVOID)0x0) {
    FUN_1804bc600(param_1);
  }
  else if (*(int *)(param_1 + 0xbe4) != 4) {
    BVar1 = VirtualProtect(*(LPVOID *)(param_1 + 0xbe8),*(SIZE_T *)(param_1 + 0xc00),4,local_res8);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804bc680(param_1);
    }
    *(undefined4 *)(param_1 + 0xbe4) = 4;
  }
  *param_2 = *(undefined8 *)(param_1 + 0xbf8);
  return *(undefined8 *)(param_1 + 0xbf0);
}



/* ===== 1804bc400 FUN_1804bc400 ===== */

/* WARNING: Removing unreachable block (ram,0x0001804bc453) */
/* WARNING: Removing unreachable block (ram,0x0001804bc468) */

void FUN_1804bc400(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  longlong lVar3;
  uint uVar4;
  LPVOID lpAddress;
  LPVOID pvVar5;
  ulonglong uVar6;
  LPVOID pvVar7;
  int iVar8;
  int iVar9;
  
  pvVar5 = *(LPVOID *)(param_1 + 0xc10);
  if (pvVar5 == (LPVOID)0x0) {
    *(undefined8 *)(param_1 + 0xc10) = 0x140010000;
    pvVar7 = (LPVOID)0x1c0000000;
    *(undefined8 *)(param_1 + 0xc18) = 0x1c0000000;
    pvVar5 = (LPVOID)0x140010000;
LAB_1804bc48c:
    pvVar2 = *(LPVOID *)(param_1 + 0xbe8);
    lpAddress = (LPVOID)((longlong)pvVar2 - param_2);
    if (((lpAddress < pvVar5) || (pvVar2 < pvVar5)) || (pvVar7 < pvVar2)) {
      iVar9 = 0;
      goto LAB_1804bc4b0;
    }
    for (iVar9 = 0; iVar9 < 0x10; iVar9 = iVar9 + 1) {
      pvVar5 = VirtualAlloc(lpAddress,param_2,0x103000,4);
      if (((*(LPVOID *)(param_1 + 0xc10) <= pvVar5) &&
          (*(LPVOID *)(param_1 + 0xc10) <= (LPVOID)((longlong)pvVar5 + param_2))) &&
         ((LPVOID)((longlong)pvVar5 + param_2) <= *(LPVOID *)(param_1 + 0xc18))) {
        return;
      }
      if (pvVar5 != (LPVOID)0x0) {
        VirtualFree(pvVar5,0,0x8000);
      }
LAB_1804bc4b0:
      iVar8 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0xc10);
        uVar4 = FUN_1804b67c0(param_1 + -0x158);
        iVar8 = iVar8 + 1;
        if (0xf < iVar8) goto LAB_1804bc558;
        lpAddress = (LPVOID)((ulonglong)(uVar4 & 0x7fff0000) + lVar3);
      } while (((lpAddress < *(LPVOID *)(param_1 + 0xc10)) ||
               ((LPVOID)((longlong)lpAddress + param_2) < *(LPVOID *)(param_1 + 0xc10))) ||
              (*(LPVOID *)(param_1 + 0xc18) < (LPVOID)((longlong)lpAddress + param_2)));
    }
LAB_1804bc558:
    if (*(longlong *)(param_1 + 0xbe8) != 0) {
      *(undefined8 *)(param_1 + 0xc18) = 0;
      goto LAB_1804bc5e5;
    }
  }
  else {
    pvVar7 = *(LPVOID *)(param_1 + 0xc18);
    if (pvVar7 != (LPVOID)0x0) goto LAB_1804bc48c;
  }
  pvVar5 = VirtualAlloc((LPVOID)0x0,param_2,0x103000,4);
  if (pvVar5 != (LPVOID)0x0) {
    uVar1 = (param_2 >> 1) + (longlong)pvVar5;
    uVar6 = uVar1 - 0x3ffe8001 & 0xffffffffffff0000;
    *(ulonglong *)(param_1 + 0xc10) = uVar6;
    *(ulonglong *)(param_1 + 0xc18) = uVar6 + 0x7fff0000;
    if ((uVar1 < uVar6) || (uVar6 == 0)) {
      *(undefined8 *)(param_1 + 0xc10) = 0x10000;
    }
    if (uVar6 + 0x7fff0000 < uVar1) {
      *(undefined8 *)(param_1 + 0xc18) = 0xffffffffffff0000;
    }
    return;
  }
LAB_1804bc5e5:
                    /* WARNING: Subroutine does not return */
  FUN_1804954a0(param_1,0x1b);
}



/* ===== 1804bc600 FUN_1804bc600 ===== */

void FUN_1804bc600(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x698);
  uVar2 = *(undefined8 *)(param_1 + 0xbe8);
  lVar4 = (longlong)iVar1 * 0x400;
  puVar3 = (undefined8 *)FUN_1804bc400(param_1,lVar4);
  *(undefined8 **)(param_1 + 0xbe8) = puVar3;
  *(longlong *)(param_1 + 0xc00) = lVar4;
  *(undefined4 *)(param_1 + 0xbe4) = 4;
  *(undefined8 **)(param_1 + 0xbf0) = puVar3 + (longlong)iVar1 * 0x80;
  *(undefined8 **)(param_1 + 0xbf8) = puVar3 + 2;
  *puVar3 = uVar2;
  *(longlong *)(*(longlong *)(param_1 + 0xbe8) + 8) = lVar4;
  *(longlong *)(param_1 + 0xc08) = *(longlong *)(param_1 + 0xc08) + lVar4;
  return;
}



/* ===== 1804bc680 FUN_1804bc680 ===== */

void FUN_1804bc680(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  
  pcVar1 = *(code **)(param_1 + -0x180);
  if (pcVar1 != (code *)0x0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    puVar3 = *(ulonglong **)(lVar2 + 0x28);
    *(ulonglong **)(lVar2 + 0x28) = puVar3 + 1;
    uVar4 = FUN_1804848e0(lVar2,0x823);
    *puVar3 = uVar4 | 0xfffd800000000000;
    (*pcVar1)(lVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_18051c3d4(1);
}



/* ===== 1804bc6f0 FUN_1804bc6f0 ===== */

void FUN_1804bc6f0(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar1 = *(ushort *)(param_1 + 10);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = (ulonglong)(uVar1 - 1);
  if (((uVar1 != 0) &&
      ((uint)*(ushort *)(*(longlong *)(param_1 + 0x30) + 4 + uVar4 * 0xc) ==
       *(uint *)(param_1 + 0xc))) ||
     ((*(char *)(param_1 + 0xb4) != '\0' && (-1 < *(char *)(param_1 + 0xb6))))) {
    if (uVar1 != 1) {
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + uVar4 * 0xc);
      goto LAB_1804bc7ba;
    }
    *(undefined4 *)(param_1 + 0xba) = 0xc000000;
    *(undefined2 *)(param_1 + 0xb8) = 0;
    FUN_1804a5f70();
  }
  if (*(uint *)(param_1 + 0x15c) < uVar1 + 1) {
    if (*(uint *)(param_1 + 0x674) < uVar1 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,4);
    }
    uVar2 = FUN_180491670(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x160),
                          (uint *)(param_1 + 0x15c),*(uint *)(param_1 + 0x674),0xc);
    *(undefined8 *)(param_1 + 0x160) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  uVar4 = (ulonglong)(uint)uVar1;
  *(ushort *)(param_1 + 10) = uVar1 + 1;
LAB_1804bc7ba:
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  FUN_1804bed50(param_1,*(longlong *)(param_1 + 0x30) + uVar4 * 0xc,uVar3);
  return;
}



/* ===== 1804bc800 FUN_1804bc800 ===== */

void FUN_1804bc800(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(uint *)(param_1 + 0x674) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,4);
  }
  uVar1 = FUN_180491670(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x160),
                        param_1 + 0x15c,*(uint *)(param_1 + 0x674),0xc);
  *(undefined8 *)(param_1 + 0x160) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



/* ===== 1804bc860 FUN_1804bc860 ===== */

void FUN_1804bc860(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x170) * 2;
  if ((uVar2 <= param_2) && (uVar2 = 0x40, 0x3f < param_2)) {
    uVar2 = param_2;
  }
  uVar1 = FUN_180491760(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x168),
                        (ulonglong)*(uint *)(param_1 + 0x170) << 2,(ulonglong)uVar2 << 2);
  *(uint *)(param_1 + 0x170) = uVar2;
  *(undefined8 *)(param_1 + 0x168) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



/* ===== 1804bc8d0 FUN_1804bc8d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804bc8d0(longlong param_1)

{
  byte bVar1;
  short sVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_148 [32];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_148;
  uVar7 = *(uint *)(param_1 + 0xac);
  if (**(char **)(param_1 + 0x88) == 'c') {
    uVar4 = (uint)*(byte *)(*(longlong *)(param_1 + 0x98) + 10);
    if (uVar7 <= uVar4) {
      uVar4 = uVar7;
    }
    uVar7 = uVar4;
  }
  uVar4 = FUN_1804be280(param_1,local_128,*(char **)(param_1 + 0x88),uVar7);
  uVar6 = (ulonglong)uVar4;
  if (uVar4 < uVar7) {
    lVar3 = *(longlong *)(param_1 + 0x98);
    if ((*(byte *)(lVar3 + 0x3d) & 1) != 0) {
      lVar9 = 0;
      uVar4 = *(uint *)(lVar3 + 0x30);
      plVar8 = *(longlong **)(lVar3 + 0x20);
      if (uVar4 != 0) {
        do {
          plVar8 = plVar8 + -1;
          lVar3 = *plVar8;
          if ((*(char *)(lVar3 + 9) == '\a') && (bVar1 = *(byte *)(lVar3 + 0x3c), bVar1 != 0)) {
            lVar5 = 0;
            lVar3 = *(longlong *)(lVar3 + 0x28);
            do {
              sVar2 = *(short *)(lVar3 + lVar5 * 2);
              if (sVar2 < 0) {
                local_128[(byte)sVar2] = '\0';
              }
              lVar5 = lVar5 + 1;
            } while (lVar5 < (longlong)(ulonglong)bVar1);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < (longlong)(ulonglong)uVar4);
      }
    }
    do {
      if (local_128[uVar6] != '\0') {
        *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 4) = 0;
      }
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
    } while (uVar4 < uVar7);
  }
  return;
}



/* ===== 1804bca00 FUN_1804bca00 ===== */

ushort * FUN_1804bca00(undefined8 param_1,longlong param_2,uint param_3,ushort *param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ushort *puVar5;
  ushort uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  uVar7 = (ulonglong)(*(int *)(param_2 + 0xc) - 1);
  lVar1 = *(longlong *)(param_2 + 0x38) +
          (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x30) + (ulonglong)param_3 * 0xc) * 4;
  cVar2 = *(char *)(*(longlong *)(param_2 + 0x20) + 5 + uVar7 * 8);
  puVar5 = (ushort *)(*(longlong *)(param_2 + 0x20) + uVar7 * 8);
  while (cVar2 == '\x14') {
    if (puVar5[1] <= param_3) {
      uVar9 = uVar9 | 1L << (*puVar5 & 0x3f);
    }
    cVar2 = *(char *)((longlong)puVar5 + -3);
    puVar5 = puVar5 + -4;
  }
  uVar7 = 0;
  do {
    if (*(char *)((longlong)param_4 + 5) == 'G') {
      if ((param_4[1] & 1) == 0) {
        return param_4;
      }
      uVar3 = *(uint *)(lVar1 + uVar7 * 4);
      while (uVar3 >> 0x18 != (uint)*param_4) {
        uVar7 = (ulonglong)((int)uVar7 + 1);
        uVar3 = *(uint *)(lVar1 + uVar7 * 4);
      }
      uVar10 = (ulonglong)*(ushort *)(lVar1 + uVar7 * 4);
      uVar7 = (ulonglong)((int)uVar7 + 1);
    }
    else {
      if (*(char *)((longlong)param_4 + 5) != '\x0e') {
        return param_4;
      }
      uVar10 = (ulonglong)(*param_4 + 0x8000);
    }
    lVar4 = *(longlong *)(param_2 + 0x20);
    uVar6 = *(ushort *)(lVar4 + 6 + uVar10 * 8);
    if ((uVar9 >> ((byte)uVar10 & 0x3f) & 1) != 0) {
      uVar8 = (ulonglong)(*(int *)(param_2 + 0xc) - 1);
      cVar2 = *(char *)(lVar4 + 5 + uVar8 * 8);
      puVar5 = (ushort *)(lVar4 + uVar8 * 8);
      while (cVar2 == '\x14') {
        if (((uint)*puVar5 == (uint)uVar10) && (puVar5[1] <= param_3)) {
          uVar6 = puVar5[3];
        }
        cVar2 = *(char *)((longlong)puVar5 + -3);
        puVar5 = puVar5 + -4;
      }
    }
    param_4[3] = uVar6;
    param_4 = param_4 + 4;
  } while( true );
}



/* ===== 1804bcb20 FUN_1804bcb20 ===== */

void FUN_1804bcb20(longlong param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  bool bVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  undefined2 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  ushort *puVar21;
  ushort *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  bool bVar29;
  
  uVar18 = (ulonglong)*(uint *)(param_1 + 0xbcc);
  uVar27 = 0;
  bVar29 = false;
  lVar9 = *(longlong *)(param_2 + 0x30);
  bVar6 = *(byte *)(lVar9 + 10 + uVar18 * 0xc);
  lVar19 = lVar9 + uVar18 * 0xc;
  uVar24 = *(uint *)(lVar9 + uVar18 * 0xc);
  lVar9 = *(longlong *)(param_2 + 0x38);
  uVar18 = 0;
  uVar28 = (uint)bVar6;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  lVar9 = lVar9 + (ulonglong)uVar24 * 4;
  if (bVar6 == 0) {
    bVar10 = false;
  }
  else {
    do {
      uVar24 = *(uint *)(lVar9 + uVar18 * 4);
      uVar23 = uVar24 >> 0x18;
      uVar25 = (uint)uVar18;
      if (((uVar27 >> (ulonglong)(uVar24 & 0x3f) & 1) != 0) && (uVar18 = 0, uVar25 != 0)) {
        do {
          uVar20 = *(uint *)(lVar9 + uVar18 * 4);
          if ((uVar20 & 0xffff) == (uVar24 & 0xffff)) {
            uVar20 = *(uint *)(param_1 + 0x25c + (ulonglong)(uVar20 >> 0x18) * 4) & 0xffecffff;
            if (uVar20 != 0) goto LAB_1804bccab;
            break;
          }
          uVar20 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar20;
        } while (uVar20 < uVar25);
      }
      uVar27 = uVar27 | 1L << (ulonglong)(uVar24 & 0x3f);
      lVar2 = *(longlong *)(param_2 + 0x20) + (ulonglong)(uVar24 & 0xffff) * 8;
      if ((uVar24 >> 0xf & 1) == 0) {
        if (uVar24 != 0x1057fff) {
          uVar20 = FUN_1804bd980(param_1,lVar2);
          goto LAB_1804bccab;
        }
        *(undefined4 *)(param_1 + 0x260) = 0x10000;
LAB_1804bcccc:
        if (uVar23 == 1) goto LAB_1804bccd8;
        iVar15 = 1;
      }
      else {
        if ((*(ushort *)(lVar2 + 6) & 0xff80) == 0x80) {
          bVar29 = true;
          uVar20 = uVar23;
        }
        else {
          uVar11 = 0x21;
          bVar7 = *(byte *)(lVar2 + 4);
          if (*(char *)(lVar2 + 5) == 'G') {
            uVar11 = *(ushort *)(lVar2 + 2) & 0x10 | 0x21;
          }
          *(ushort *)(param_1 + 0xb8) = (ushort)(byte)(uVar24 >> 0x18);
          *(ushort *)(param_1 + 0xbc) = bVar7 & 0x1f | 0x4700;
          uVar12 = uVar11 | 0x40;
          if ((uVar24 >> 0x14 & 1) == 0) {
            uVar12 = uVar11;
          }
          *(ushort *)(param_1 + 0xba) = uVar12;
          uVar20 = FUN_1804a5f70(param_1);
LAB_1804bccab:
        }
        *(uint *)(param_1 + 0x25c + (ulonglong)uVar23 * 4) = uVar24 & 0x130000 | uVar20;
        if ((uVar24 & 0x30000) != 0) goto LAB_1804bcccc;
LAB_1804bccd8:
        iVar15 = 0;
      }
      *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + iVar15;
      if ((uVar24 >> 0x10 & 1) != 0) {
        *(uint *)(param_1 + 0xb0) = uVar23 + 1;
      }
      uVar18 = (ulonglong)(uVar25 + 1);
    } while (uVar25 + 1 < uVar28);
    bVar10 = false;
    if (bVar29) {
      bVar10 = false;
      uVar18 = 0;
      puVar3 = (ushort *)(*(longlong *)(param_2 + 0x20) + (ulonglong)*(ushort *)(lVar19 + 4) * 8);
      do {
        uVar24 = *(uint *)(lVar9 + uVar18 * 4);
        puVar4 = (ushort *)(*(longlong *)(param_2 + 0x20) + ((ulonglong)uVar24 & 0xffff) * 8);
        uVar23 = (uint)bVar6;
        if (*(char *)(*(longlong *)(param_2 + 0x20) + 6 + ((ulonglong)uVar24 & 0xffff) * 8) == -3) {
          if (*(uint *)(param_1 + 0x25c + (ulonglong)(uVar24 >> 0x18) * 4) == uVar24 >> 0x18) {
            bVar10 = true;
            bVar7 = (&DAT_18056ee40)[*(byte *)((longlong)puVar4 + 5)];
            if ((bVar7 & 3) == 0) {
              FUN_1804bd8a0(param_1,param_2,lVar9,uVar23,uVar27,*puVar4);
            }
            if ((bVar7 & 0xc) == 0) {
              FUN_1804bd8a0(param_1,param_2,lVar9,uVar23,uVar27,puVar4[1]);
            }
            puVar5 = puVar4;
            if (*(char *)((longlong)puVar4 + 5) != 'T') {
              while( true ) {
                puVar21 = puVar5;
                puVar5 = puVar21 + 4;
                if (puVar3 <= puVar5) break;
                if ((char)puVar5[3] == -2) {
                  if (*(byte *)((longlong)puVar21 + 0xf) == 0xff) {
                    bVar7 = *(byte *)((longlong)puVar21 + 0xd);
                    if (((bVar7 == 0x4c) || (bVar7 < 0x4a)) || (0x4e < bVar7)) {
                      bVar29 = false;
                    }
                    else {
                      lVar2 = *(longlong *)(param_2 + 0x20);
                      puVar21 = (ushort *)(lVar2 + (ulonglong)*puVar5 * 8);
                      if ((byte)(*(char *)(lVar2 + 5 + (ulonglong)*puVar5 * 8) - 0x38U) < 2) {
                        puVar21 = (ushort *)(lVar2 + (ulonglong)*puVar21 * 8);
                      }
                      bVar29 = (ushort *)(lVar2 + (ulonglong)*puVar21 * 8) == puVar4;
                    }
                  }
                  else {
                    bVar29 = puVar4 + (ulonglong)*(byte *)((longlong)puVar21 + 0xf) * 4 == puVar5;
                  }
                  if (bVar29) {
                    iVar15 = FUN_1804bd8a0(param_1,param_2,lVar9,uVar23,uVar27,puVar5[1]);
                    if (iVar15 == 0) {
                      FUN_1804bd8a0(param_1,param_2,lVar9,uVar23,uVar27,
                                    *(undefined2 *)
                                     (*(longlong *)(param_2 + 0x20) + (ulonglong)puVar5[1] * 8));
                    }
                  }
                }
              }
            }
          }
        }
        else if (((uVar24 >> 0xf & 1) != 0) && ((puVar4[3] & 0xff80) == 0x80)) {
          uVar16 = FUN_1804bd8a0(param_1,param_2,lVar9,uVar23,uVar27,*puVar4);
          *(undefined4 *)(param_1 + 0x25c + (ulonglong)(uVar24 >> 0x18) * 4) = uVar16;
        }
        uVar24 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar24;
      } while (uVar24 < uVar23);
      if (bVar10) {
        uVar18 = 0;
        while( true ) {
          uVar23 = (uint)bVar6;
          uVar24 = (uint)uVar18;
          if (uVar23 <= uVar24) break;
          uVar25 = *(uint *)(lVar9 + uVar18 * 4);
          puVar4 = (ushort *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar25 & 0xffff) * 8);
          if (*(char *)(*(longlong *)(param_2 + 0x20) + 6 + (ulonglong)(uVar25 & 0xffff) * 8) == -3)
          {
            uVar26 = (ulonglong)(uVar25 >> 0x18);
            uVar20 = *(uint *)(param_1 + 0x25c + uVar26 * 4);
            if (uVar20 == uVar25 >> 0x18) {
              uVar11 = *puVar4;
              bVar7 = (&DAT_18056ee40)[*(byte *)((longlong)puVar4 + 5)];
              if ((bVar7 & 3) == 0) {
                uVar11 = FUN_1804bd8a0(param_1,param_2,lVar9,uVar23,uVar27,uVar11);
              }
              uVar12 = puVar4[1];
              if ((bVar7 & 0xc) == 0) {
                uVar12 = FUN_1804bd8a0(param_1,param_2,lVar9,uVar23,uVar27,uVar12);
              }
              cVar8 = *(char *)((longlong)puVar4 + 5);
              uVar13 = puVar4[2];
              *(ushort *)(param_1 + 0xb8) = uVar11;
              *(ushort *)(param_1 + 0xba) = uVar12;
              if (cVar8 != 'T') {
                *(ushort *)(param_1 + 0xbc) = uVar13;
                uVar16 = FUN_1804d6ae0(param_1);
                *(undefined4 *)(param_1 + 0x25c + uVar26 * 4) = uVar16;
                puVar5 = puVar4;
joined_r0x0001804bd055:
                puVar21 = puVar5 + 4;
                if (puVar21 < puVar3) {
                  if ((char)puVar21[3] != -2) goto LAB_1804bd250;
                  if (*(byte *)((longlong)puVar5 + 0xf) == 0xff) {
                    bVar7 = *(byte *)((longlong)puVar5 + 0xd);
                    if (((bVar7 == 0x4c) || (bVar7 < 0x4a)) || (0x4e < bVar7)) {
                      bVar29 = false;
                    }
                    else {
                      lVar2 = *(longlong *)(param_2 + 0x20);
                      puVar22 = (ushort *)(lVar2 + (ulonglong)*puVar21 * 8);
                      if ((byte)(*(char *)(lVar2 + 5 + (ulonglong)*puVar21 * 8) - 0x38U) < 2) {
                        puVar22 = (ushort *)(lVar2 + (ulonglong)*puVar22 * 8);
                      }
                      bVar29 = (ushort *)(lVar2 + (ulonglong)*puVar22 * 8) == puVar4;
                    }
                  }
                  else {
                    bVar29 = puVar4 + (ulonglong)*(byte *)((longlong)puVar5 + 0xf) * 4 == puVar21;
                  }
                  if (!bVar29) goto LAB_1804bd250;
                  lVar2 = *(longlong *)(param_2 + 0x20);
                  uVar12 = (ushort)uVar16;
                  uVar18 = (ulonglong)*puVar21;
                  cVar8 = *(char *)(lVar2 + 5 + uVar18 * 8);
                  uVar11 = *(ushort *)(lVar2 + 2 + uVar18 * 8);
                  if (cVar8 == '>') {
LAB_1804bd193:
                    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(lVar2 + 4 + uVar18 * 8);
                    *(ushort *)(param_1 + 0xb8) = uVar12;
                    *(ushort *)(param_1 + 0xba) = uVar11;
                    uVar13 = FUN_1804d6ae0(param_1);
                  }
                  else {
                    puVar5 = (ushort *)(lVar2 + (ulonglong)uVar11 * 8);
                    if (cVar8 == '9') {
                      uVar11 = puVar5[1];
                      uVar17 = FUN_1804bd980(param_1,lVar2 + (ulonglong)*puVar5 * 8);
                      uVar11 = FUN_1804a6780(param_1,uVar17,uVar11);
                    }
                    else {
                      uVar11 = FUN_1804bd980(param_1);
                    }
                    cVar8 = *(char *)(lVar2 + 5 + uVar18 * 8);
                    if ((byte)(cVar8 - 0x38U) < 2) {
                      uVar26 = (ulonglong)*(ushort *)(lVar2 + uVar18 * 8);
                      uVar14 = *(undefined2 *)(*(longlong *)(param_2 + 0x20) + 2 + uVar26 * 8);
                      *(undefined2 *)(param_1 + 0xbc) =
                           *(undefined2 *)(*(longlong *)(param_2 + 0x20) + 4 + uVar26 * 8);
                      *(ushort *)(param_1 + 0xb8) = uVar12;
                      *(undefined2 *)(param_1 + 0xba) = uVar14;
                      uVar12 = FUN_1804d6ae0(param_1);
                      goto LAB_1804bd193;
                    }
                    if (cVar8 != ';') goto LAB_1804bd193;
                    uVar13 = *(ushort *)(param_1 + 0x208);
                    if ((uVar13 <= uVar12) ||
                       (*(ushort *)(*(longlong *)(param_1 + 0x20) + 2 + (ulonglong)uVar13 * 8) !=
                        uVar11)) goto LAB_1804bd193;
                  }
                  iVar15 = FUN_1804bd8a0(param_1,param_2,lVar9,uVar28,uVar27,puVar21[1]);
                  uVar14 = (undefined2)iVar15;
                  if (iVar15 == 0) {
                    uVar14 = FUN_1804bd8a0(param_1,param_2,lVar9,uVar28,uVar27,
                                           *(undefined2 *)
                                            (*(longlong *)(param_2 + 0x20) +
                                            (ulonglong)puVar21[1] * 8));
                    *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
                    *(undefined2 *)(param_1 + 0xb8) = uVar14;
                    uVar14 = FUN_1804d6ae0(param_1);
                  }
                  *(ushort *)(param_1 + 0xbc) = puVar21[2];
                  *(ushort *)(param_1 + 0xb8) = uVar13;
                  *(undefined2 *)(param_1 + 0xba) = uVar14;
                  goto LAB_1804bd271;
                }
                goto LAB_1804bd292;
              }
              *(ushort *)(param_1 + 0xbc) = uVar13 & 0xff9f;
              uVar16 = FUN_1804d6ae0(param_1);
              *(undefined4 *)(param_1 + 0x25c + uVar26 * 4) = uVar16;
              uVar18 = (ulonglong)(uVar24 + 1);
            }
            else {
              uVar18 = (ulonglong)(uVar24 + 1);
              *(undefined4 *)(param_1 + 0x25c + uVar26 * 4) =
                   *(undefined4 *)(param_1 + 0x25c + (ulonglong)uVar20 * 4);
            }
          }
          else {
LAB_1804bd292:
            uVar18 = (ulonglong)(uVar24 + 1);
          }
        }
      }
    }
  }
  uVar11 = *(ushort *)(param_1 + 10);
  uVar16 = *(undefined4 *)(param_1 + 0x2c);
  uVar18 = (ulonglong)(uVar11 - 1);
  *(ulonglong *)(param_1 + 0xa0) = param_1 + 0x25c + (ulonglong)*(uint *)(param_1 + 0xb0) * 4;
  *(uint *)(param_1 + 0xac) = (uint)*(byte *)(lVar19 + 8) - *(uint *)(param_1 + 0xb0);
  if (((uVar11 != 0) &&
      ((uint)*(ushort *)(*(longlong *)(param_1 + 0x30) + 4 + uVar18 * 0xc) ==
       *(uint *)(param_1 + 0xc))) ||
     ((*(char *)(param_1 + 0xb4) != '\0' && (-1 < *(char *)(param_1 + 0xb6))))) {
    if (uVar11 != 1) {
      lVar19 = *(longlong *)(param_1 + 0x30);
      uVar16 = *(undefined4 *)(lVar19 + uVar18 * 0xc);
      goto LAB_1804bd3b1;
    }
    *(undefined4 *)(param_1 + 0xba) = 0xc000000;
    *(undefined2 *)(param_1 + 0xb8) = 0;
    FUN_1804a5f70(param_1);
  }
  if (*(uint *)(param_1 + 0x15c) < uVar11 + 1) {
    if (*(uint *)(param_1 + 0x674) < uVar11 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,4);
    }
    lVar19 = FUN_180491670(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x160),
                           (uint *)(param_1 + 0x15c),*(uint *)(param_1 + 0x674),0xc);
    *(longlong *)(param_1 + 0x160) = lVar19;
    *(longlong *)(param_1 + 0x30) = lVar19;
  }
  else {
    lVar19 = *(longlong *)(param_1 + 0x30);
  }
  uVar18 = (ulonglong)(uint)uVar11;
  *(ushort *)(param_1 + 10) = uVar11 + 1;
LAB_1804bd3b1:
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  FUN_1804bed50(param_1,lVar19 + uVar18 * 0xc,uVar16);
  if (bVar10) {
    *(undefined4 *)(param_1 + 0xba) = 0xf800000;
    *(undefined2 *)(param_1 + 0xb8) = 0;
    FUN_1804a5f70(param_1);
  }
  return;
LAB_1804bd250:
  pcVar1 = (char *)((longlong)puVar5 + 0xd);
  puVar5 = puVar21;
  if ((*pcVar1 == 'Z') && (*(char *)((longlong)puVar4 + 5) == 'S')) {
    *(undefined4 *)(param_1 + 0xba) = 0x5a000000;
    *(undefined2 *)(param_1 + 0xb8) = 0;
LAB_1804bd271:
    FUN_1804d6ae0(param_1);
    puVar5 = puVar21;
  }
  goto joined_r0x0001804bd055;
}



/* ===== 1804bd410 FUN_1804bd410 ===== */

uint * FUN_1804bd410(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint *puVar20;
  ulonglong uVar21;
  ulonglong in_stack_ffffffffffffff60;
  
  uVar19 = 0;
  uVar14 = *(uint *)(param_1 + 0xbcc);
  uVar21 = (ulonglong)uVar14;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)*(uint *)(param_1 + 0xbc8) * 8);
  lVar8 = *(longlong *)(lVar7 + 0x30);
  lVar9 = *(longlong *)(lVar7 + 0x38);
  uVar15 = (ulonglong)(*(int *)(lVar7 + 0xc) - 1);
  uVar17 = (ulonglong)*(uint *)(lVar8 + uVar21 * 0xc);
  bVar5 = *(byte *)(lVar8 + 10 + uVar21 * 0xc);
  lVar1 = lVar9 + uVar17 * 4;
  cVar4 = *(char *)(*(longlong *)(lVar7 + 0x20) + 5 + uVar15 * 8);
  puVar12 = (ushort *)(*(longlong *)(lVar7 + 0x20) + uVar15 * 8);
  while (cVar4 == '\x14') {
    if (puVar12[1] <= uVar14) {
      uVar19 = uVar19 | 1L << (*puVar12 & 0x3f);
    }
    cVar4 = *(char *)((longlong)puVar12 + -3);
    puVar12 = puVar12 + -4;
  }
  lVar10 = *(longlong *)(param_1 + 0x80);
  lVar2 = uVar17 + bVar5;
  puVar20 = (uint *)(*(ulonglong *)(lVar9 + lVar2 * 4) >> 8);
  if (((*puVar20 & 0xff) - 0x43 < 2) || (puVar16 = puVar20 + 1, (*puVar20 & 0xff) - 0x49 < 4)) {
    puVar16 = puVar20;
  }
  *(uint **)(*(longlong *)(lVar10 + 0x50) + 0x60) = puVar16;
  *(uint **)((*(ulonglong *)(*(longlong *)(lVar10 + 0x50) + 0x68) & 0xfffffffffffffffc) + 0x60) =
       puVar20;
  lVar11 = *(longlong *)(lVar10 + 0x20);
  if (*(ulonglong *)(lVar10 + 0x30) <= lVar11 + (ulonglong)*(byte *)(lVar8 + 9 + uVar21 * 0xc) * 8)
  {
    *(ulonglong *)(lVar10 + 0x28) =
         lVar11 + (ulonglong)
                  *(byte *)(*(longlong *)((*(ulonglong *)(lVar11 + -0x10) & 0x7fffffffffff) + 0x20)
                           + -0x5d) * 8;
    FUN_18048e920(lVar10,(uint)*(byte *)(lVar8 + 9 + uVar21 * 0xc) -
                         (uint)*(byte *)(*(longlong *)
                                          ((*(ulonglong *)(lVar11 + -0x10) & 0x7fffffffffff) + 0x20)
                                        + -0x5d));
  }
  lVar11 = *(longlong *)(lVar10 + 0x20);
  uVar15 = 0;
  if (bVar5 != 0) {
    do {
      uVar6 = *(uint *)(lVar1 + uVar15 * 4);
      uVar18 = (uint)uVar15;
      if ((uVar6 >> 0x12 & 1) == 0) {
        uVar15 = *(longlong *)(lVar7 + 0x20) + (ulonglong)(uVar6 & 0xffff) * 8;
        pdVar3 = (double *)(lVar11 + -0x10 + (ulonglong)(uVar6 >> 0x18) * 8);
        if (*(char *)(uVar15 + 6) == -3) {
          uVar17 = 0;
          if (uVar18 != 0) {
            do {
              uVar13 = *(uint *)(lVar1 + uVar17 * 4);
              if ((uVar13 & 0xffff) == (uVar6 & 0xffff)) {
                *pdVar3 = *(double *)(lVar11 + -0x10 + (ulonglong)(uVar13 >> 0x18) * 8);
                goto LAB_1804bd656;
              }
              uVar13 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar13;
            } while (uVar13 < uVar18);
          }
          FUN_1804bde40(param_1,lVar7,param_2,uVar14,uVar19,uVar15,pdVar3);
          in_stack_ffffffffffffff60 = uVar15;
        }
        else {
          in_stack_ffffffffffffff60 =
               CONCAT44((int)(in_stack_ffffffffffffff60 >> 0x20),uVar6) & 0xffffffff0000ffff;
          FUN_1804bdc40(param_1,lVar7,param_2,uVar14,uVar19,in_stack_ffffffffffffff60,pdVar3);
          if ((uVar6 >> 0x14 & 1) != 0) {
            *(undefined4 *)(lVar11 + -0xc + (ulonglong)(uVar6 >> 0x18) * 8) = 0xfffe7fff;
            *(int *)pdVar3 = (int)*pdVar3;
          }
        }
      }
LAB_1804bd656:
      uVar15 = (ulonglong)(uVar18 + 1);
    } while (uVar18 + 1 < (uint)bVar5);
  }
  lVar7 = *(longlong *)(lVar10 + 0x20);
  uVar19 = (ulonglong)*(byte *)(lVar9 + lVar2 * 4);
  lVar1 = lVar7 + uVar19 * 8;
  *(longlong *)(lVar10 + 0x20) = lVar1;
  if (((*puVar20 & 0xff) < 0x3f) ||
     ((uVar14 = (*puVar20 & 0xff) - 0x40, uVar14 < 0x20 &&
      ((0xfffffdf5U >> (uVar14 & 0x1f) & 1) != 0)))) {
    *(ulonglong *)(lVar10 + 0x28) =
         lVar7 + (*(byte *)(*(longlong *)((*(ulonglong *)(lVar1 + -0x10) & 0x7fffffffffff) + 0x20) +
                           -0x5d) + uVar19) * 8;
  }
  else {
    *(ulonglong *)(lVar10 + 0x28) =
         lVar11 + ((ulonglong)*(byte *)(lVar8 + 8 + uVar21 * 0xc) - 2) * 8;
  }
  return puVar20;
}



/* ===== 1804bd710 FUN_1804bd710 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804bd710(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_168 [32];
  char local_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_168;
  uVar10 = (ulonglong)*(ushort *)(param_1 + 10);
  uVar13 = *(uint *)(param_1 + 0xac);
  iVar5 = *(int *)(param_1 + 0xb0);
  lVar6 = *(longlong *)(param_1 + 0x30);
  bVar2 = *(byte *)(lVar6 + -2 + uVar10 * 0xc);
  lVar1 = lVar6 + uVar10 * 0xc;
  lVar6 = *(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(lVar6 + -0xc + uVar10 * 0xc) * 4;
  uVar8 = FUN_1804be280();
  if ((uVar8 < uVar13) &&
     (lVar7 = *(longlong *)(param_1 + 0x98), (*(byte *)(lVar7 + 0x3d) & 1) != 0)) {
    uVar12 = *(uint *)(lVar7 + 0x30);
    lVar16 = 0;
    plVar15 = *(longlong **)(lVar7 + 0x20);
    if (uVar12 != 0) {
      do {
        plVar15 = plVar15 + -1;
        lVar7 = *plVar15;
        if ((*(char *)(lVar7 + 9) == '\a') && (bVar3 = *(byte *)(lVar7 + 0x3c), bVar3 != 0)) {
          lVar7 = *(longlong *)(lVar7 + 0x28);
          lVar11 = 0;
          do {
            sVar4 = *(short *)(lVar7 + lVar11 * 2);
            if (sVar4 < 0) {
              local_148[(byte)sVar4] = '\0';
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < (longlong)(ulonglong)bVar3);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < (longlong)(ulonglong)uVar12);
    }
  }
  uVar13 = uVar13 + iVar5;
  uVar14 = 0;
  *(char *)(lVar1 + -4) = (char)uVar13;
  uVar10 = 0;
  if (bVar2 != 0) {
    do {
      uVar12 = *(uint *)(lVar6 + uVar10 * 4);
      uVar9 = uVar12 >> 0x18;
      if ((uVar9 < uVar8 + iVar5) || ((uVar9 < uVar13 && (local_148[uVar9 - iVar5] == '\0')))) {
        *(uint *)(lVar6 + uVar14 * 4) = uVar12;
        uVar14 = (ulonglong)((int)uVar14 + 1);
      }
      uVar12 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar12;
    } while (uVar12 < bVar2);
  }
  uVar13 = *(uint *)(lVar1 + -0xc);
  *(char *)(lVar1 + -2) = (char)uVar14;
  iVar5 = *(int *)(param_1 + 0x2c);
  uVar8 = (uint)uVar10;
  while (uVar8 <= ~uVar13 + iVar5) {
    lVar7 = uVar10 * 4;
    uVar8 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar8;
    *(undefined4 *)(lVar6 + uVar14 * 4) = *(undefined4 *)(lVar6 + lVar7);
    uVar14 = (ulonglong)((int)uVar14 + 1);
  }
  *(int *)(param_1 + 0x2c) = *(int *)(lVar1 + -0xc) + (int)uVar14;
  return;
}



/* ===== 1804bd8a0 FUN_1804bd8a0 ===== */

ulonglong FUN_1804bd8a0(longlong param_1,longlong param_2,longlong param_3,uint param_4,
                       ulonglong param_5,uint param_6)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x20) + (ulonglong)param_6 * 8;
  if (param_6 < 0x8000) {
    uVar4 = FUN_1804bd980(param_1,lVar1);
    return uVar4;
  }
  if ((*(ushort *)(lVar1 + 6) & 0xff80) == 0x80) {
    return 0;
  }
  if (((param_5 >> ((byte)param_6 & 0x3f) & 1) != 0) && (uVar5 = 0, param_4 != 0)) {
    do {
      uVar3 = *(uint *)(param_3 + (ulonglong)uVar5 * 4);
      if ((uVar3 & 0xffff) == param_6) {
        uVar5 = *(uint *)(param_1 + 0x25c + (ulonglong)(uVar3 >> 0x18) * 4) & 0xffecffff;
        if (uVar5 != 0) {
          return (ulonglong)uVar5;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_4);
  }
  bVar2 = *(byte *)(lVar1 + 4);
  *(short *)(param_1 + 0xb8) = (short)param_6 + -0x8000;
  *(undefined2 *)(param_1 + 0xba) = 0;
  *(ushort *)(param_1 + 0xbc) = bVar2 & 0x1f | 0xe00;
  uVar4 = FUN_1804d6ae0(param_1);
  return uVar4;
}



/* ===== 1804bd980 FUN_1804bd980 ===== */

ulonglong FUN_1804bd980(undefined8 param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  
  switch(*(undefined1 *)((longlong)param_2 + 5)) {
  case 0x16:
    return (ulonglong)((*(byte *)(param_2 + 1) & 0x1f) * 0xffffff + 0x7fff);
  case 0x17:
    uVar1 = FUN_1804a6370(param_1,*param_2);
    return uVar1;
  case 0x18:
    uVar1 = FUN_1804a62e0(param_1,*(undefined8 *)(param_2 + 2),*(undefined1 *)(param_2 + 1));
    return uVar1;
  case 0x19:
    uVar1 = FUN_1804a66d0(param_1,0x19,*(undefined8 *)(param_2 + 2));
    return uVar1;
  default:
    return 0x7fff;
  case 0x1b:
    uVar1 = FUN_1804a64b0(param_1,*(byte *)(param_2 + 1) & 0x1f);
    return uVar1;
  case 0x1c:
  case 0x1d:
    uVar1 = FUN_1804a6210(param_1,*(undefined1 *)((longlong)param_2 + 5),
                          *(undefined8 *)(param_2 + 2));
    return uVar1;
  }
}



/* ===== 1804bda20 FUN_1804bda20 ===== */

void FUN_1804bda20(undefined8 param_1,longlong param_2,longlong param_3,uint param_4,
                  ulonglong param_5,uint param_6,double *param_7,int param_8)

{
  double *pdVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  ushort *puVar5;
  ulonglong uVar6;
  uint uVar7;
  double *pdVar8;
  
  lVar4 = *(longlong *)(param_2 + 0x20);
  pdVar1 = (double *)(lVar4 + (ulonglong)param_6 * 8);
  if (param_6 < 0x8000) {
    bVar2 = *(byte *)((longlong)pdVar1 + 5);
    if (((bVar2 == 0x1b) || (bVar2 < 0x18)) || (0x1d < bVar2)) {
      pdVar8 = pdVar1;
      if (param_8 == 8) {
        *param_7 = (double)(ulonglong)*(uint *)pdVar1;
        return;
      }
    }
    else {
      pdVar8 = pdVar1 + 1;
    }
  }
  else {
    uVar7 = (uint)*(ushort *)((longlong)pdVar1 + 6);
    if ((param_5 >> ((byte)param_6 & 0x3f) & 1) != 0) {
      uVar6 = (ulonglong)(*(int *)(param_2 + 0xc) - 1);
      cVar3 = *(char *)(lVar4 + 5 + uVar6 * 8);
      puVar5 = (ushort *)(lVar4 + uVar6 * 8);
      while (cVar3 == '\x14') {
        if ((*puVar5 == param_6) && (puVar5[1] <= param_4)) {
          uVar7 = (uint)puVar5[3];
        }
        cVar3 = *(char *)((longlong)puVar5 + -3);
        puVar5 = puVar5 + -4;
      }
    }
    if (uVar7 < 0x100) {
      if ((char)uVar7 < '\0') {
        FUN_1804bda20(param_1,param_2,param_3,param_4,param_5,*(undefined2 *)pdVar1,param_7,4);
        *param_7 = (double)(int)*(uint *)param_7;
        return;
      }
      if ((uVar7 & 0xf0) == 0) {
        pdVar8 = (double *)(param_3 + 0x80 + (ulonglong)(uVar7 & 0xff) * 8);
      }
      else {
        pdVar8 = (double *)(param_3 + (ulonglong)((uVar7 & 0xff) - 0x10) * 8);
      }
    }
    else {
      pdVar8 = (double *)(param_3 + ((ulonglong)(uVar7 >> 8) + 0x40) * 4);
      if (param_8 == 8) {
        if ((0x605fd9U >> (*(byte *)((longlong)pdVar1 + 4) & 0x1f) & 1) == 0) {
          *param_7 = (double)(ulonglong)*(uint *)pdVar8;
          return;
        }
        goto LAB_1804bdbe8;
      }
    }
  }
  if (param_8 == 4) {
    *(uint *)param_7 = *(uint *)pdVar8;
    return;
  }
  if (param_8 != 8) {
    if (param_8 == 1) {
      *(undefined1 *)param_7 = *(undefined1 *)pdVar8;
      return;
    }
    *(undefined2 *)param_7 = *(undefined2 *)pdVar8;
    return;
  }
LAB_1804bdbe8:
  *param_7 = *pdVar8;
  return;
}



/* ===== 1804bdc40 FUN_1804bdc40 ===== */

void FUN_1804bdc40(longlong param_1,longlong param_2,longlong param_3,uint param_4,ulonglong param_5
                  ,uint param_6,double *param_7)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  double dVar6;
  ushort *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ushort *puVar12;
  
  uVar11 = (ulonglong)param_6;
  lVar5 = *(longlong *)(param_2 + 0x20);
  puVar12 = (ushort *)(lVar5 + uVar11 * 8);
  if (0x7fff < param_6) {
    bVar2 = (byte)puVar12[2];
    uVar3 = puVar12[3];
    do {
      uVar9 = (uint)uVar3;
      if ((param_5 >> ((byte)uVar11 & 0x3f) & 1) != 0) {
        uVar8 = (ulonglong)(*(int *)(param_2 + 0xc) - 1);
        cVar1 = *(char *)(lVar5 + 5 + uVar8 * 8);
        puVar7 = (ushort *)(lVar5 + uVar8 * 8);
        while (cVar1 == '\x14') {
          if (((uint)*puVar7 == (uint)uVar11) && (puVar7[1] <= param_4)) {
            uVar9 = (uint)puVar7[3];
          }
          cVar1 = *(char *)((longlong)puVar7 + -3);
          puVar7 = puVar7 + -4;
        }
      }
      if (0xff < uVar9) {
        uVar10 = bVar2 & 0x1f;
        if (uVar10 - 0xf < 5) {
          *param_7 = (double)*(int *)(param_3 + 0x100 + (ulonglong)(uVar9 >> 8) * 4);
          return;
        }
        dVar6 = *(double *)(param_3 + 0x100 + (ulonglong)(uVar9 >> 8) * 4);
        if ((bVar2 & 0x1f) == 0xe) {
          *param_7 = dVar6;
          return;
        }
        *param_7 = (double)((ulonglong)~uVar10 << 0x2f | (ulonglong)dVar6);
        return;
      }
      uVar10 = uVar9 & 0xff;
      if (-1 < (char)uVar9) {
        uVar9 = bVar2 & 0x1f;
        if (uVar9 - 0xf < 5) {
          *param_7 = (double)*(int *)(param_3 + 0x80 + (ulonglong)uVar10 * 8);
          return;
        }
        if ((bVar2 & 0x1f) == 0xe) {
          *param_7 = *(double *)(param_3 + (ulonglong)(uVar10 - 0x10) * 8);
          return;
        }
        if ((bVar2 & 0x1f) < 3) {
          *param_7 = (double)~((ulonglong)uVar9 << 0x2f);
          return;
        }
        *param_7 = (double)((ulonglong)~uVar9 << 0x2f |
                           *(ulonglong *)(param_3 + 0x80 + (ulonglong)uVar10 * 8));
        return;
      }
      uVar4 = *puVar12;
      uVar11 = (ulonglong)uVar4;
      bVar2 = *(byte *)(lVar5 + 4 + uVar11 * 8);
      puVar12 = (ushort *)(lVar5 + uVar11 * 8);
      uVar3 = puVar12[3];
    } while (0x7fff < uVar4);
  }
  if (*(char *)((longlong)puVar12 + 5) == '\x19') {
    *param_7 = *(double *)(puVar12 + 4);
    return;
  }
  FUN_1804a6890(*(undefined8 *)(param_1 + 0x80),param_7,puVar12);
  return;
}



/* ===== 1804bde40 FUN_1804bde40 ===== */

void FUN_1804bde40(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,ushort *param_6,ulonglong *param_7)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ushort *puVar10;
  byte bVar11;
  longlong lVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  bool bVar15;
  
  puVar4 = param_6;
  if ((byte)(*(char *)((longlong)param_6 + 5) + 0xadU) < 2) {
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) + 0x188);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(param_1 + 0x80);
    uVar13 = *(undefined4 *)(*(longlong *)(param_2 + 0x20) + (ulonglong)*param_6 * 8);
    uVar6 = FUN_1804ab410(lVar3,uVar13,&param_6);
    uVar7 = FUN_1804b10c0(lVar3,uVar13,param_6._0_4_,uVar6);
    *param_7 = uVar7 | 0xfffa800000000000;
    if (*(char *)((longlong)puVar4 + 5) == 'T') {
      FUN_1804bda20(param_1,param_2,param_3,param_4,param_5,puVar4[1],uVar7 + 0x10,param_6._0_4_);
    }
    else {
      uVar1 = *(ushort *)(*(longlong *)(param_2 + 0x30) + 4 + (ulonglong)param_4 * 0xc);
      lVar3 = *(longlong *)(param_2 + 0x20);
      puVar5 = puVar4;
      while (puVar10 = puVar5, puVar5 = puVar10 + 4,
            puVar5 < (ushort *)(lVar3 + (ulonglong)uVar1 * 8)) {
        if ((char)puVar5[3] == -2) {
          if (*(byte *)((longlong)puVar10 + 0xf) == 0xff) {
            bVar11 = *(byte *)((longlong)puVar10 + 0xd);
            if (((bVar11 == 0x4c) || (bVar11 < 0x4a)) || (0x4e < bVar11)) {
              bVar15 = false;
            }
            else {
              lVar9 = *(longlong *)(param_2 + 0x20);
              puVar10 = (ushort *)(lVar9 + (ulonglong)*puVar5 * 8);
              if ((byte)(*(char *)(lVar9 + 5 + (ulonglong)*puVar5 * 8) - 0x38U) < 2) {
                puVar10 = (ushort *)(lVar9 + (ulonglong)*puVar10 * 8);
              }
              bVar15 = (ushort *)(lVar9 + (ulonglong)*puVar10 * 8) == puVar4;
            }
          }
          else {
            bVar15 = puVar4 + (ulonglong)*(byte *)((longlong)puVar10 + 0xf) * 4 == puVar5;
          }
          if (bVar15) {
            lVar9 = *(longlong *)(param_2 + 0x20);
            uVar14 = (ulonglong)*(ushort *)(lVar9 + 2 + (ulonglong)*puVar5 * 8);
            if ((0x605fd9U >> ((byte)puVar5[2] & 0x1f) & 1) == 0) {
              bVar11 = (byte)puVar5[2] & 0x1f;
              if ((byte)(bVar11 - 0xf) < 2) {
                uVar13 = 1;
              }
              else {
                uVar13 = 2;
                if (1 < (byte)(bVar11 - 0x11)) {
                  uVar13 = 4;
                }
              }
            }
            else {
              uVar13 = 8;
            }
            if (*(char *)(lVar9 + 5 + uVar14 * 8) == '\x1d') {
              lVar9 = *(longlong *)(lVar9 + 8 + uVar14 * 8);
            }
            else {
              lVar9 = (longlong)*(int *)(lVar9 + uVar14 * 8);
            }
            FUN_1804bda20(param_1,param_2,param_3,param_4,param_5,puVar5[1],lVar9 + uVar7,uVar13);
          }
        }
      }
    }
  }
  else {
    if (*(char *)((longlong)param_6 + 5) == 'Q') {
      uVar7 = FUN_180492ab0(*(undefined8 *)(param_1 + 0x80),*param_6,param_6[1]);
    }
    else {
      uVar7 = FUN_1804924c0(*(undefined8 *)(param_1 + 0x80),
                            *(undefined8 *)
                             (*(longlong *)(param_2 + 0x20) + 8 + (ulonglong)*param_6 * 8));
    }
    *param_7 = uVar7 | 0xfffa000000000000;
    uVar1 = *(ushort *)(*(longlong *)(param_2 + 0x30) + 4 + (ulonglong)param_4 * 0xc);
    lVar3 = *(longlong *)(param_2 + 0x20);
    puVar5 = puVar4;
    while (puVar10 = puVar5, puVar5 = puVar10 + 4, puVar5 < (ushort *)(lVar3 + (ulonglong)uVar1 * 8)
          ) {
      if ((char)puVar5[3] == -2) {
        if (*(byte *)((longlong)puVar10 + 0xf) == 0xff) {
          bVar11 = *(byte *)((longlong)puVar10 + 0xd);
          if (((bVar11 == 0x4c) || (bVar11 < 0x4a)) || (0x4e < bVar11)) {
            bVar15 = false;
          }
          else {
            lVar9 = *(longlong *)(param_2 + 0x20);
            puVar10 = (ushort *)(lVar9 + (ulonglong)*puVar5 * 8);
            if ((byte)(*(char *)(lVar9 + 5 + (ulonglong)*puVar5 * 8) - 0x38U) < 2) {
              puVar10 = (ushort *)(lVar9 + (ulonglong)*puVar10 * 8);
            }
            bVar15 = (ushort *)(lVar9 + (ulonglong)*puVar10 * 8) == puVar4;
          }
        }
        else {
          bVar15 = puVar4 + (ulonglong)*(byte *)((longlong)puVar10 + 0xf) * 4 == puVar5;
        }
        if (bVar15) {
          lVar9 = *(longlong *)(param_2 + 0x20);
          uVar2 = *(ushort *)(lVar9 + 2 + (ulonglong)*puVar5 * 8);
          if (*(char *)(lVar9 + 5 + (ulonglong)*puVar5 * 8) == '>') {
            if (uVar2 == 5) {
              if (*(char *)(lVar9 + 5 + (ulonglong)puVar5[1] * 8) == '\x1b') {
                *(undefined8 *)(uVar7 + 0x20) = 0;
              }
              else {
                FUN_1804bdc40(param_1,param_2,param_3,param_4,param_5,puVar5[1],&param_6);
                *(ulonglong *)(uVar7 + 0x20) =
                     CONCAT44(param_6._4_4_,param_6._0_4_) & 0x7fffffffffff;
              }
            }
          }
          else {
            lVar12 = (ulonglong)uVar2 * 8;
            if (*(char *)(lVar12 + 5 + lVar9) == '\x1e') {
              lVar12 = (ulonglong)*(ushort *)(lVar12 + lVar9) * 8;
            }
            FUN_1804a6890(*(undefined8 *)(param_1 + 0x80),&param_6,lVar12 + lVar9);
            uVar8 = FUN_1804931f0(*(undefined8 *)(param_1 + 0x80),uVar7,&param_6);
            FUN_1804bdc40(param_1,param_2,param_3,param_4,param_5,puVar5[1],uVar8);
          }
        }
      }
    }
  }
  return;
}



/* ===== 1804be280 FUN_1804be280 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1804be280(longlong param_1,longlong param_2,uint *param_3,uint param_4)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  char cVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  uint *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  if (param_4 != 0) {
    FUN_180540170(param_2,1,param_4);
    auVar9 = _DAT_180570210;
    uVar21 = _DAT_180570220;
    uVar24 = _UNK_180570224;
    uVar10 = _UNK_180570228;
    uVar11 = _UNK_18057022c;
    iVar23 = DAT_1809194c8;
    for (puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x80) + 0x40); _DAT_180570210 = auVar9,
        _DAT_180570220 = uVar21, _UNK_180570224 = uVar24, _UNK_180570228 = uVar10,
        _UNK_18057022c = uVar11, DAT_1809194c8 = iVar23, puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)*puVar4) {
      uVar16 = *(ulonglong *)(*(longlong *)(param_1 + 0x80) + 0x20);
      if ((ulonglong)puVar4[4] < uVar16) break;
      *(undefined1 *)(param_2 + ((longlong)(puVar4[4] - uVar16) >> 3)) = 0;
      auVar9 = _DAT_180570210;
      uVar21 = _DAT_180570220;
      uVar24 = _UNK_180570224;
      uVar10 = _UNK_180570228;
      uVar11 = _UNK_18057022c;
      iVar23 = DAT_1809194c8;
    }
LAB_1804be320:
    uVar22 = *param_3;
    uVar16 = (ulonglong)(byte)uVar22;
    puVar26 = param_3 + 1;
    if (((&DAT_18056f5e0)[uVar16 * 2] & 0x78) == 0x18) {
      pbVar1 = (byte *)(param_2 + (ulonglong)(uVar22 >> 0x18));
      *pbVar1 = *pbVar1 & 0xfe;
    }
    uVar13 = *(ushort *)(&DAT_18056f5e0 + uVar16 * 2) >> 7 & 0xf;
    uVar12 = uVar22 & 0xff;
    cVar14 = (char)(uVar22 >> 8);
    if (uVar13 == 3) {
      pbVar1 = (byte *)(param_2 + (ulonglong)(byte)(uVar22 >> 0x10));
      *pbVar1 = *pbVar1 & 0xfe;
      goto LAB_1804be578;
    }
    if (uVar13 == 4) {
      uVar17 = uVar22 >> 0x10 & 0xff;
      uVar18 = uVar22 >> 0x18;
      uVar25 = (ulonglong)uVar18;
      if (uVar18 <= uVar17) {
        uVar18 = (uVar17 - uVar18) + 1;
        if (0x3f < uVar18) {
          do {
            puVar3 = (uint *)(param_2 + uVar25);
            uVar19 = puVar3[1];
            uVar20 = puVar3[2];
            uVar7 = puVar3[3];
            iVar15 = (int)uVar25;
            puVar2 = (uint *)(param_2 + uVar25);
            *puVar2 = uVar21 & *puVar3;
            puVar2[1] = uVar24 & uVar19;
            puVar2[2] = uVar10 & uVar20;
            puVar2[3] = uVar11 & uVar7;
            puVar3 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x10));
            uVar19 = puVar3[1];
            uVar20 = puVar3[2];
            uVar7 = puVar3[3];
            puVar2 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x10));
            *puVar2 = uVar21 & *puVar3;
            puVar2[1] = uVar24 & uVar19;
            puVar2[2] = uVar10 & uVar20;
            puVar2[3] = uVar11 & uVar7;
            puVar3 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x20));
            uVar19 = puVar3[1];
            uVar20 = puVar3[2];
            uVar7 = puVar3[3];
            puVar2 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x20));
            *puVar2 = uVar21 & *puVar3;
            puVar2[1] = uVar24 & uVar19;
            puVar2[2] = uVar10 & uVar20;
            puVar2[3] = uVar11 & uVar7;
            uVar19 = iVar15 + 0x40;
            uVar25 = (ulonglong)uVar19;
            auVar27 = *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30));
            auVar28._0_4_ = uVar21 & auVar27._0_4_;
            auVar28._4_4_ = uVar24 & auVar27._4_4_;
            auVar28._8_4_ = uVar10 & auVar27._8_4_;
            auVar28._12_4_ = uVar11 & auVar27._12_4_;
            *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30)) = auVar28;
          } while (uVar19 <= uVar17 - (uVar18 & 0x3f));
          if (uVar17 < uVar19) goto LAB_1804be49d;
        }
        do {
          *(byte *)(param_2 + uVar25) = *(byte *)(param_2 + uVar25) & 0xfe;
          uVar18 = (int)uVar25 + 1;
          uVar25 = (ulonglong)uVar18;
        } while (uVar18 <= uVar17);
      }
LAB_1804be49d:
      if ((uint)uVar25 < param_4) {
        uVar17 = param_4 - (uint)uVar25;
        if ((0x3f < uVar17) && (5 < iVar23)) {
          do {
            auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + uVar25));
            iVar15 = (int)uVar25;
            auVar6 = vpmovzxbw_avx2(auVar9);
            auVar5 = vpmullw_avx2(auVar6,auVar5);
            auVar27 = vpmovwb_avx512vl(auVar5);
            *(undefined1 (*) [16])(param_2 + uVar25) = auVar27;
            auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x10)));
            auVar6 = vpmovzxbw_avx2(auVar9);
            auVar5 = vpmullw_avx2(auVar6,auVar5);
            auVar27 = vpmovwb_avx512vl(auVar5);
            *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x10)) = auVar27;
            auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x20)));
            auVar6 = vpmovzxbw_avx2(auVar9);
            auVar5 = vpmullw_avx2(auVar6,auVar5);
            auVar27 = vpmovwb_avx512vl(auVar5);
            *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x20)) = auVar27;
            uVar18 = iVar15 + 0x40;
            uVar25 = (ulonglong)uVar18;
            auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30)));
            auVar6 = vpmovzxbw_avx2(auVar9);
            auVar5 = vpmullw_avx2(auVar6,auVar5);
            auVar27 = vpmovwb_avx512vl(auVar5);
            *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30)) = auVar27;
          } while (uVar18 < param_4 - (uVar17 & 0x3f));
          if (param_4 <= uVar18) goto LAB_1804be578;
        }
        do {
          *(char *)(param_2 + uVar25) = *(char *)(param_2 + uVar25) * '\x03';
          uVar17 = (int)uVar25 + 1;
          uVar25 = (ulonglong)uVar17;
        } while (uVar17 < param_4);
      }
    }
    else if (uVar13 == 6) {
      uVar17 = (uVar22 & 0xff) - 0x51;
      if ((uVar17 < 7) && ((0x49U >> (uVar17 & 0x1f) & 1) != 0)) goto LAB_1804be38d;
      if ((uVar22 & 0xff) - 0x49 < 4) {
        uVar17 = uVar22 >> 8;
        if (uVar12 == 0x49) {
          uVar12 = param_4;
        }
        else {
          uVar12 = ((uVar22 >> 0x10) - 1) + (uVar17 & 0xff);
        }
        uVar16 = 0;
        if (cVar14 != '\0') {
          if ((uVar22 & 0xc000) == 0) goto LAB_1804bebd0;
          if (iVar23 < 6) goto LAB_1804bebd0;
          do {
            auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + uVar16));
            iVar15 = (int)uVar16;
            auVar6 = vpmovzxbw_avx2(auVar9);
            auVar5 = vpmullw_avx2(auVar6,auVar5);
            auVar27 = vpmovwb_avx512vl(auVar5);
            *(undefined1 (*) [16])(param_2 + uVar16) = auVar27;
            auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x10)));
            auVar6 = vpmovzxbw_avx2(auVar9);
            auVar5 = vpmullw_avx2(auVar6,auVar5);
            auVar27 = vpmovwb_avx512vl(auVar5);
            *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x10)) = auVar27;
            auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x20)));
            auVar6 = vpmovzxbw_avx2(auVar9);
            auVar5 = vpmullw_avx2(auVar6,auVar5);
            auVar27 = vpmovwb_avx512vl(auVar5);
            *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x20)) = auVar27;
            uVar22 = iVar15 + 0x40;
            uVar16 = (ulonglong)uVar22;
            auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30)));
            auVar6 = vpmovzxbw_avx2(auVar9);
            auVar5 = vpmullw_avx2(auVar6,auVar5);
            auVar27 = vpmovwb_avx512vl(auVar5);
            *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30)) = auVar27;
          } while (uVar22 < (uVar17 & 0xff) - (uVar17 & 0x3f));
          while (uVar22 < (uVar17 & 0xff)) {
LAB_1804bebd0:
            *(char *)(param_2 + uVar16) = *(char *)(param_2 + uVar16) * '\x03';
            uVar22 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar22;
          }
        }
        if ((uint)uVar16 < uVar12) {
          uVar22 = uVar12 - (uint)uVar16;
          if (0x3f < uVar22) {
            do {
              puVar26 = (uint *)(param_2 + uVar16);
              uVar17 = puVar26[1];
              uVar18 = puVar26[2];
              uVar19 = puVar26[3];
              iVar15 = (int)uVar16;
              puVar3 = (uint *)(param_2 + uVar16);
              *puVar3 = uVar21 & *puVar26;
              puVar3[1] = uVar24 & uVar17;
              puVar3[2] = uVar10 & uVar18;
              puVar3[3] = uVar11 & uVar19;
              puVar26 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x10));
              uVar17 = puVar26[1];
              uVar18 = puVar26[2];
              uVar19 = puVar26[3];
              puVar3 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x10));
              *puVar3 = uVar21 & *puVar26;
              puVar3[1] = uVar24 & uVar17;
              puVar3[2] = uVar10 & uVar18;
              puVar3[3] = uVar11 & uVar19;
              puVar26 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x20));
              uVar17 = puVar26[1];
              uVar18 = puVar26[2];
              uVar19 = puVar26[3];
              puVar3 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x20));
              *puVar3 = uVar21 & *puVar26;
              puVar3[1] = uVar24 & uVar17;
              puVar3[2] = uVar10 & uVar18;
              puVar3[3] = uVar11 & uVar19;
              uVar17 = iVar15 + 0x40;
              uVar16 = (ulonglong)uVar17;
              auVar27 = *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30));
              auVar31._0_4_ = uVar21 & auVar27._0_4_;
              auVar31._4_4_ = uVar24 & auVar27._4_4_;
              auVar31._8_4_ = uVar10 & auVar27._8_4_;
              auVar31._12_4_ = uVar11 & auVar27._12_4_;
              *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30)) = auVar31;
            } while (uVar17 < uVar12 - (uVar22 & 0x3f));
            if (uVar12 <= uVar17) goto LAB_1804bec7d;
          }
          do {
            *(byte *)(param_2 + uVar16) = *(byte *)(param_2 + uVar16) & 0xfe;
            uVar21 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar21;
          } while (uVar21 < uVar12);
        }
LAB_1804bec7d:
        if (param_4 <= (uint)uVar16) {
          return 0;
        }
        uVar21 = param_4 - (uint)uVar16;
        if ((0x3f < uVar21) && (5 < iVar23)) {
          do {
            auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + uVar16));
            iVar23 = (int)uVar16;
            auVar6 = vpmovzxbw_avx2(auVar9);
            auVar5 = vpmullw_avx2(auVar6,auVar5);
            auVar27 = vpmovwb_avx512vl(auVar5);
            *(undefined1 (*) [16])(param_2 + uVar16) = auVar27;
            auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x10)));
            auVar6 = vpmovzxbw_avx2(auVar9);
            auVar5 = vpmullw_avx2(auVar6,auVar5);
            auVar27 = vpmovwb_avx512vl(auVar5);
            *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x10)) = auVar27;
            auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x20)));
            auVar6 = vpmovzxbw_avx2(auVar9);
            auVar5 = vpmullw_avx2(auVar6,auVar5);
            auVar27 = vpmovwb_avx512vl(auVar5);
            *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x20)) = auVar27;
            uVar24 = iVar23 + 0x40;
            uVar16 = (ulonglong)uVar24;
            auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x30)));
            auVar6 = vpmovzxbw_avx2(auVar9);
            auVar5 = vpmullw_avx2(auVar6,auVar5);
            auVar27 = vpmovwb_avx512vl(auVar5);
            *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x30)) = auVar27;
          } while (uVar24 < param_4 - (uVar21 & 0x3f));
          if (param_4 <= uVar24) {
            return 0;
          }
        }
        do {
          *(char *)(param_2 + uVar16) = *(char *)(param_2 + uVar16) * '\x03';
          uVar21 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar21;
        } while (uVar21 < param_4);
        return 0;
      }
    }
    else {
      if (uVar13 == 0xc) {
        return param_4;
      }
      if (uVar13 == 0xd) {
LAB_1804be38d:
        uVar17 = uVar22 >> 8 & 0xff;
        if ((uVar22 & 0xff) - 0x4d < 5) {
          uVar17 = uVar17 + 3;
LAB_1804bea2c:
          if (uVar17 < param_4) {
            uVar16 = (ulonglong)uVar17;
            if (param_4 - uVar17 < 0x40) goto LAB_1804beae0;
            if (iVar23 < 6) goto LAB_1804beae0;
            do {
              iVar23 = (int)uVar16;
              auVar5 = vpmovzxbw_avx2(auVar9);
              auVar6 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + uVar16));
              auVar5 = vpmullw_avx2(auVar5,auVar6);
              auVar27 = vpmovwb_avx512vl(auVar5);
              *(undefined1 (*) [16])(param_2 + uVar16) = auVar27;
              auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x10)));
              auVar6 = vpmovzxbw_avx2(auVar9);
              auVar5 = vpmullw_avx2(auVar6,auVar5);
              auVar27 = vpmovwb_avx512vl(auVar5);
              *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x10)) = auVar27;
              auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x20)));
              auVar6 = vpmovzxbw_avx2(auVar9);
              auVar5 = vpmullw_avx2(auVar6,auVar5);
              auVar27 = vpmovwb_avx512vl(auVar5);
              *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x20)) = auVar27;
              uVar21 = iVar23 + 0x40;
              uVar16 = (ulonglong)uVar21;
              auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x30)));
              auVar6 = vpmovzxbw_avx2(auVar9);
              auVar5 = vpmullw_avx2(auVar6,auVar5);
              auVar27 = vpmovwb_avx512vl(auVar5);
              *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x30)) = auVar27;
            } while (uVar21 < param_4 - (param_4 - uVar17 & 0x3f));
            while (uVar21 < param_4) {
LAB_1804beae0:
              uVar21 = (int)uVar16 + 1;
              *(char *)(param_2 + uVar16) = *(char *)(param_2 + uVar16) * '\x03';
              uVar16 = (ulonglong)uVar21;
            }
          }
          if (uVar17 < param_4) {
            param_4 = uVar17;
          }
          return param_4;
        }
        if ((uVar22 & 0xff) - 0x52 < 3) {
          uVar17 = (uVar17 - 1) + (param_3[-1] >> 0x18);
          goto LAB_1804bea2c;
        }
        if (uVar12 != 0x32) goto LAB_1804bea2c;
        if ((ulonglong)(uVar22 >> 0x10) < 0x8000) {
          return param_4;
        }
        puVar26 = param_3 + ((ulonglong)(uVar22 >> 0x10) - 0x7fff);
      }
    }
LAB_1804be578:
    uVar13 = *(ushort *)(&DAT_18056f5e0 + uVar16 * 2) & 7;
    param_3 = puVar26;
    if (uVar13 == 1) {
      if (1 < (uVar22 & 0xff) - 0xc) {
        uVar16 = (ulonglong)(uVar22 >> 8) & 0xff;
        *(char *)(param_2 + uVar16) = *(char *)(param_2 + uVar16) * '\x03';
      }
      goto LAB_1804be320;
    }
    if (uVar13 != 2) {
      if (uVar13 == 3) {
        pbVar1 = (byte *)(param_2 + ((ulonglong)(uVar22 >> 8) & 0xff));
        *pbVar1 = *pbVar1 & 0xfe;
      }
      goto LAB_1804be320;
    }
    if (5 < (uVar22 & 0xff) - 0x41) {
      if (uVar12 == 0x47) {
        return param_4;
      }
      if (uVar12 == 0x2c) {
        uVar12 = uVar22 >> 0x10;
        uVar22 = uVar22 >> 8 & 0xff;
        uVar16 = (ulonglong)uVar22;
        if (uVar12 < uVar22) {
LAB_1804be920:
          if (uVar12 < uVar22) goto LAB_1804be320;
        }
        else {
          uVar17 = (uVar12 - uVar22) + 1;
          if ((0x3f < uVar17) && (5 < iVar23)) {
            do {
              auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + uVar16));
              iVar15 = (int)uVar16;
              auVar6 = vpmovzxbw_avx2(auVar9);
              auVar5 = vpmullw_avx2(auVar6,auVar5);
              auVar27 = vpmovwb_avx512vl(auVar5);
              *(undefined1 (*) [16])(param_2 + uVar16) = auVar27;
              auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x10)));
              auVar6 = vpmovzxbw_avx2(auVar9);
              auVar5 = vpmullw_avx2(auVar6,auVar5);
              auVar27 = vpmovwb_avx512vl(auVar5);
              *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x10)) = auVar27;
              auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x20)));
              auVar6 = vpmovzxbw_avx2(auVar9);
              auVar5 = vpmullw_avx2(auVar6,auVar5);
              auVar27 = vpmovwb_avx512vl(auVar5);
              *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x20)) = auVar27;
              uVar22 = iVar15 + 0x40;
              uVar16 = (ulonglong)uVar22;
              auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30)));
              auVar6 = vpmovzxbw_avx2(auVar9);
              auVar5 = vpmullw_avx2(auVar6,auVar5);
              auVar27 = vpmovwb_avx512vl(auVar5);
              *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30)) = auVar27;
            } while (uVar22 <= uVar12 - (uVar17 & 0x3f));
            goto LAB_1804be920;
          }
        }
        do {
          *(char *)(param_2 + uVar16) = *(char *)(param_2 + uVar16) * '\x03';
          uVar22 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar22;
        } while (uVar22 <= uVar12);
        goto LAB_1804be320;
      }
      if (uVar12 == 0x3f) {
        uVar22 = (uVar22 >> 8 & 0xff) - 1;
        uVar16 = (ulonglong)uVar22;
        if (uVar22 < param_4) {
          if (0x3f < param_4 - uVar22) {
            do {
              puVar26 = (uint *)(param_2 + uVar16);
              uVar12 = puVar26[1];
              uVar17 = puVar26[2];
              uVar18 = puVar26[3];
              iVar15 = (int)uVar16;
              puVar3 = (uint *)(param_2 + uVar16);
              *puVar3 = uVar21 & *puVar26;
              puVar3[1] = uVar24 & uVar12;
              puVar3[2] = uVar10 & uVar17;
              puVar3[3] = uVar11 & uVar18;
              puVar26 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x10));
              uVar12 = puVar26[1];
              uVar17 = puVar26[2];
              uVar18 = puVar26[3];
              puVar3 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x10));
              *puVar3 = uVar21 & *puVar26;
              puVar3[1] = uVar24 & uVar12;
              puVar3[2] = uVar10 & uVar17;
              puVar3[3] = uVar11 & uVar18;
              puVar26 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x20));
              uVar12 = puVar26[1];
              uVar17 = puVar26[2];
              uVar18 = puVar26[3];
              puVar3 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x20));
              *puVar3 = uVar21 & *puVar26;
              puVar3[1] = uVar24 & uVar12;
              puVar3[2] = uVar10 & uVar17;
              puVar3[3] = uVar11 & uVar18;
              uVar12 = iVar15 + 0x40;
              uVar16 = (ulonglong)uVar12;
              auVar27 = *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30));
              auVar30._0_4_ = uVar21 & auVar27._0_4_;
              auVar30._4_4_ = uVar24 & auVar27._4_4_;
              auVar30._8_4_ = uVar10 & auVar27._8_4_;
              auVar30._12_4_ = uVar11 & auVar27._12_4_;
              *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30)) = auVar30;
            } while (uVar12 < param_4 - (param_4 - uVar22 & 0x3f));
            if (param_4 <= uVar12) goto LAB_1804be320;
          }
          do {
            *(byte *)(param_2 + uVar16) = *(byte *)(param_2 + uVar16) & 0xfe;
            uVar22 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar22;
          } while (uVar22 < param_4);
        }
      }
      goto LAB_1804be320;
    }
    if ((((uVar22 & 0xff) - 0x41 & 0xfffffffd) == 0) || ((uVar22 & 0xff0000) == 0)) {
      uVar12 = param_4;
    }
    else {
      uVar12 = (uVar22 >> 0x10 & 0xff) + 1 + (uVar22 >> 8 & 0xff);
    }
    uVar18 = uVar22 >> 8;
    uVar17 = uVar18 & 0xff;
    *(char *)(param_2 + (ulonglong)(uVar17 + 1)) =
         *(char *)(param_2 + (ulonglong)(uVar17 + 1)) * '\x03';
    iVar15 = 3;
    if (1 < (uVar22 & 0xff) - 0x45) {
      iVar15 = 0;
    }
    uVar19 = uVar17 - iVar15;
    uVar16 = (ulonglong)uVar19;
    if (uVar19 < uVar12) {
      if (uVar12 - uVar19 < 0x40) goto LAB_1804be6a0;
      do {
        puVar26 = (uint *)(param_2 + uVar16);
        uVar20 = puVar26[1];
        uVar7 = puVar26[2];
        uVar8 = puVar26[3];
        iVar15 = (int)uVar16;
        puVar3 = (uint *)(param_2 + uVar16);
        *puVar3 = uVar21 & *puVar26;
        puVar3[1] = uVar24 & uVar20;
        puVar3[2] = uVar10 & uVar7;
        puVar3[3] = uVar11 & uVar8;
        puVar26 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x10));
        uVar20 = puVar26[1];
        uVar7 = puVar26[2];
        uVar8 = puVar26[3];
        puVar3 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x10));
        *puVar3 = uVar21 & *puVar26;
        puVar3[1] = uVar24 & uVar20;
        puVar3[2] = uVar10 & uVar7;
        puVar3[3] = uVar11 & uVar8;
        puVar26 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x20));
        uVar20 = puVar26[1];
        uVar7 = puVar26[2];
        uVar8 = puVar26[3];
        puVar3 = (uint *)(param_2 + (ulonglong)(iVar15 + 0x20));
        *puVar3 = uVar21 & *puVar26;
        puVar3[1] = uVar24 & uVar20;
        puVar3[2] = uVar10 & uVar7;
        puVar3[3] = uVar11 & uVar8;
        uVar20 = iVar15 + 0x40;
        uVar16 = (ulonglong)uVar20;
        auVar27 = *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30));
        auVar29._0_4_ = uVar21 & auVar27._0_4_;
        auVar29._4_4_ = uVar24 & auVar27._4_4_;
        auVar29._8_4_ = uVar10 & auVar27._8_4_;
        auVar29._12_4_ = uVar11 & auVar27._12_4_;
        *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30)) = auVar29;
      } while (uVar20 < uVar12 - (uVar12 - uVar19 & 0x3f));
      while (uVar20 < uVar12) {
LAB_1804be6a0:
        *(byte *)(param_2 + uVar16) = *(byte *)(param_2 + uVar16) & 0xfe;
        uVar20 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar20;
      }
    }
    if ((uint)uVar16 < param_4) {
      uVar12 = param_4 - (uint)uVar16;
      if ((0x3f < uVar12) && (5 < iVar23)) {
        do {
          auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + uVar16));
          iVar15 = (int)uVar16;
          auVar6 = vpmovzxbw_avx2(auVar9);
          auVar5 = vpmullw_avx2(auVar6,auVar5);
          auVar27 = vpmovwb_avx512vl(auVar5);
          *(undefined1 (*) [16])(param_2 + uVar16) = auVar27;
          auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x10)));
          auVar6 = vpmovzxbw_avx2(auVar9);
          auVar5 = vpmullw_avx2(auVar6,auVar5);
          auVar27 = vpmovwb_avx512vl(auVar5);
          *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x10)) = auVar27;
          auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x20)));
          auVar6 = vpmovzxbw_avx2(auVar9);
          auVar5 = vpmullw_avx2(auVar6,auVar5);
          auVar27 = vpmovwb_avx512vl(auVar5);
          *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x20)) = auVar27;
          uVar19 = iVar15 + 0x40;
          uVar16 = (ulonglong)uVar19;
          auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30)));
          auVar6 = vpmovzxbw_avx2(auVar9);
          auVar5 = vpmullw_avx2(auVar6,auVar5);
          auVar27 = vpmovwb_avx512vl(auVar5);
          *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar15 + 0x30)) = auVar27;
        } while (uVar19 < param_4 - (uVar12 & 0x3f));
        if (param_4 <= uVar19) goto LAB_1804be778;
      }
      do {
        *(char *)(param_2 + uVar16) = *(char *)(param_2 + uVar16) * '\x03';
        uVar12 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar12;
      } while (uVar12 < param_4);
    }
LAB_1804be778:
    if (1 < (uVar22 & 0xff) - 0x43) goto LAB_1804be320;
    if (cVar14 != '\0') {
      uVar16 = 0;
      if (((uVar18 & 0xc0) != 0) && (5 < iVar23)) {
        do {
          auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + uVar16));
          iVar23 = (int)uVar16;
          auVar6 = vpmovzxbw_avx2(auVar9);
          auVar5 = vpmullw_avx2(auVar6,auVar5);
          auVar27 = vpmovwb_avx512vl(auVar5);
          *(undefined1 (*) [16])(param_2 + uVar16) = auVar27;
          auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x10)));
          auVar6 = vpmovzxbw_avx2(auVar9);
          auVar5 = vpmullw_avx2(auVar6,auVar5);
          auVar27 = vpmovwb_avx512vl(auVar5);
          *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x10)) = auVar27;
          auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x20)));
          auVar6 = vpmovzxbw_avx2(auVar9);
          auVar5 = vpmullw_avx2(auVar6,auVar5);
          auVar27 = vpmovwb_avx512vl(auVar5);
          *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x20)) = auVar27;
          uVar21 = iVar23 + 0x40;
          uVar16 = (ulonglong)uVar21;
          auVar5 = vpmovzxbw_avx2(*(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x30)));
          auVar6 = vpmovzxbw_avx2(auVar9);
          auVar5 = vpmullw_avx2(auVar6,auVar5);
          auVar27 = vpmovwb_avx512vl(auVar5);
          *(undefined1 (*) [16])(param_2 + (ulonglong)(iVar23 + 0x30)) = auVar27;
        } while (uVar21 < uVar17 - (uVar18 & 0x3f));
        if (uVar17 <= uVar21) {
          return 0;
        }
      }
      do {
        *(char *)(param_2 + uVar16) = *(char *)(param_2 + uVar16) * '\x03';
        uVar21 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar21;
      } while (uVar21 < uVar17);
    }
  }
  return 0;
}



/* ===== 1804bed50 FUN_1804bed50 ===== */

void FUN_1804bed50(longlong param_1,uint *param_2,uint param_3)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  uint uVar15;
  
  uVar15 = *(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0xac);
  if (*(uint *)(param_1 + 0x170) < param_3 + 2 + uVar15) {
    FUN_1804bc860();
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  uVar12 = 0;
  uVar2 = *(ushort *)(param_1 + 0x1a8);
  uVar9 = 0;
  lVar1 = lVar4 + (ulonglong)param_3 * 4;
  if (uVar15 != 0) {
    do {
      uVar7 = *(uint *)(param_1 + 0x25c + uVar9 * 4);
      uVar11 = (uint)uVar9;
      if (uVar11 == 1) {
        if ((uVar7 >> 0x10 & 1) != 0) {
          *(undefined4 *)(lVar1 + uVar12 * 4) = 0x1057fff;
          goto LAB_1804bee94;
        }
      }
      else {
        uVar10 = (ulonglong)(uVar7 & 0xffff);
        if (((uVar7 & 0x30000) != 0) && ((short)uVar7 == 0)) {
          uVar6 = FUN_1804a6210(param_1,0x1c,
                                *(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) +
                                  (ulonglong)*(uint *)(param_1 + 0xb0) * -8 + uVar9 * 8));
          uVar7 = uVar6 | uVar7 & 0xff0000;
          *(uint *)(param_1 + 0x25c + uVar9 * 4) = uVar7;
          uVar10 = (ulonglong)(uVar6 & 0xffff);
        }
        if ((uint)uVar10 != 0) {
          lVar5 = *(longlong *)(param_1 + 0x20);
          uVar7 = uVar11 << 0x18 | uVar7 & 0x13ffff;
          if (((*(char *)(lVar5 + 5 + uVar10 * 8) == 'G') &&
              (*(ushort *)(lVar5 + uVar10 * 8) == uVar11)) && ((uint)uVar2 < (uint)uVar10)) {
            uVar3 = *(ushort *)(lVar5 + 2 + uVar10 * 8);
            if (((uVar3 & 0x20) == 0) &&
               (((uVar11 == 0 || (uVar11 + 1 == uVar15)) ||
                ((*(uint *)(param_1 + 0x25c + (ulonglong)(uVar11 + 1) * 4) & 0x30000) == 0))))
            goto LAB_1804bee96;
            if (((byte)uVar3 & 0x11) != 1) {
              uVar7 = uVar7 | 0x40000;
            }
          }
          *(uint *)(lVar1 + uVar12 * 4) = uVar7;
LAB_1804bee94:
          uVar12 = (ulonglong)((int)uVar12 + 1);
        }
      }
LAB_1804bee96:
      uVar9 = (ulonglong)(uVar11 + 1);
    } while (uVar11 + 1 < uVar15);
  }
  *(char *)((longlong)param_2 + 10) = (char)uVar12;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20);
  puVar14 = (ulonglong *)(lVar1 + (ulonglong)*(uint *)(param_1 + 0xb0) * -8 + 8);
  puVar8 = (ulonglong *)(lVar1 + -8);
  uVar9 = *(ulonglong *)(lVar1 + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar9 + 10) == '\0') {
    puVar13 = (ulonglong *)
              (lVar1 + (ulonglong)*(byte *)(*(longlong *)(uVar9 + 0x20) + -0x5d) * 8 + -8);
  }
  else {
    puVar13 = *(ulonglong **)(*(longlong *)(param_1 + 0x80) + 0x28);
  }
  *(ulonglong *)(lVar4 + (uVar12 + param_3) * 4) =
       (ulonglong)(*(uint *)(param_1 + 0xb0) - 2) | *(longlong *)(param_1 + 0x88) << 8;
joined_r0x0001804bef2a:
  if (puVar8 <= puVar14) {
    *param_2 = param_3;
    *(char *)((longlong)param_2 + 9) = (char)((longlong)puVar13 - (longlong)puVar14 >> 3);
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 0xc);
    *(undefined2 *)((longlong)param_2 + 6) = 0;
    *(undefined1 *)((longlong)param_2 + 0xb) = 0;
    *(char *)(param_2 + 2) = (char)uVar15;
    *(uint *)(param_1 + 0x2c) = param_3 + 2 + (int)uVar12;
    return;
  }
  uVar9 = *puVar8;
  if ((uVar9 & 3) != 0) goto LAB_1804bef4f;
  puVar8 = puVar8 + (-2 - (ulonglong)*(byte *)(uVar9 - 3));
  goto LAB_1804bef61;
LAB_1804bef4f:
  puVar8 = (ulonglong *)((longlong)puVar8 - (uVar9 & 0xfffffffffffffff8));
  if (((byte)uVar9 & 7) == 2) {
LAB_1804bef61:
    if (puVar13 < puVar8 + *(byte *)(*(longlong *)((puVar8[-1] & 0x7fffffffffff) + 0x20) + -0x5d)) {
      puVar13 = puVar8 + *(byte *)(*(longlong *)((puVar8[-1] & 0x7fffffffffff) + 0x20) + -0x5d);
    }
  }
  goto joined_r0x0001804bef2a;
}



/* ===== 1804befd0 FUN_1804befd0 ===== */

void FUN_1804befd0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_1 + 0xfc);
  iVar9 = 0;
  iVar8 = iVar1 + -1;
  if ((*(byte *)(*(longlong *)(param_1 + 0x98) + 0x3d) & 2) == 0) {
    iVar8 = iVar1;
  }
  if (0 < iVar8) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20);
    puVar7 = (ulonglong *)(lVar2 + -8);
    do {
      uVar3 = *puVar7;
      iVar6 = iVar8 + -1;
      if (((byte)uVar3 & 7) != 2) {
        iVar6 = iVar8;
      }
      if ((uVar3 & 3) == 0) {
        lVar5 = (ulonglong)*(byte *)(uVar3 - 3) * -8 + -0x10;
      }
      else {
        lVar5 = -(uVar3 & 0xfffffffffffffff8);
      }
      puVar7 = (ulonglong *)((longlong)puVar7 + lVar5);
      iVar8 = iVar6 + -1;
      iVar6 = iVar9 + 1;
      if (*(longlong *)((puVar7[-1] & 0x7fffffffffff) + 0x20) !=
          *(longlong *)((*(ulonglong *)(lVar2 + -0x10) & 0x7fffffffffff) + 0x20)) {
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
    } while (0 < iVar8);
  }
  if (*(longlong *)(param_1 + 0x88) == *(longlong *)(param_1 + 0xbc0)) {
    if (*(int *)(param_1 + 0x694) < *(int *)(param_1 + 0xf8) + iVar9) {
      *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 4;
      if (*(int *)(param_1 + 0x100) + iVar1 != 0) {
        FUN_1804c2b90(param_1,4,*(undefined2 *)(param_1 + 0x68));
        return;
      }
      FUN_1804c2b90(param_1,3,*(undefined2 *)(param_1 + 0x68));
    }
  }
  else if (*(int *)(param_1 + 0x690) < iVar9) {
    if (param_2 != 0) {
      FUN_180495870(param_1,param_2);
      uVar4 = FUN_1804b67c0(param_1 + -0x158);
      *(ushort *)(param_1 + 0xc38 + (ulonglong)(*(int *)(param_1 + 0x88) + 4U >> 2 & 0x3f) * 2) =
           uVar4 & 0xf;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0xd);
  }
  return;
}



/* ===== 1804bf160 FUN_1804bf160 ===== */

undefined8 FUN_1804bf160(longlong param_1,uint *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint *puVar7;
  
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x98) + 0x68);
  puVar3 = param_2;
  do {
    while( true ) {
      puVar3 = puVar3 + -1;
      if (puVar3 <= puVar1) {
        return 0;
      }
      uVar2 = *puVar3;
      if ((*(ushort *)(&DAT_18056f5e0 + ((ulonglong)uVar2 & 0xff) * 2) & 7) != 2) break;
      if ((uVar2 >> 8 & 0xff) <= param_3) {
        return 0;
      }
    }
  } while (((*(ushort *)(&DAT_18056f5e0 + ((ulonglong)uVar2 & 0xff) * 2) & 7) != 1) ||
          ((uVar2 >> 8 & 0xff) != param_3));
  iVar4 = (int)((ulonglong)uVar2 & 0xff);
  puVar7 = puVar3;
  if (iVar4 - 0x29U < 2) {
    do {
      if ((((char)*puVar7 == 'X') && (puVar3 < puVar7 + ((ulonglong)(*puVar7 >> 0x10) - 0x7fff))) &&
         (puVar7 + ((ulonglong)(*puVar7 >> 0x10) - 0x7fff) <= param_2)) {
        return 0;
      }
      puVar7 = puVar7 + -1;
    } while (puVar1 < puVar7);
    if (iVar4 == 0x29) {
      iVar4 = (int)(short)(uVar2 >> 0x10);
      if (param_4 == 0x13) {
        uVar5 = FUN_1804a6370(param_1,iVar4);
        return uVar5;
      }
      uVar5 = FUN_1804a6540(param_1,(double)iVar4);
      return uVar5;
    }
    if (param_4 != 0x13) {
      uVar5 = FUN_1804a6540(param_1,*(undefined8 *)
                                     (*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x20) +
                                     (ulonglong)(uVar2 >> 0x10) * 8));
      return uVar5;
    }
    uVar6 = FUN_1800052ed();
    if (-1 < (longlong)uVar6) {
      uVar5 = FUN_1804a6370(param_1,uVar6 & 0xffffffff);
      return uVar5;
    }
  }
  return 0;
}



/* ===== 1804bf2c0 FUN_1804bf2c0 ===== */

ulonglong FUN_1804bf2c0(longlong param_1,undefined8 param_2,uint param_3,int param_4,
                       undefined4 param_5)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)param_3 * 4);
  if (uVar1 == 0) {
    uVar2 = FUN_1804bf160(param_1,param_2,param_3);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_1804bf380(param_1,param_3,param_4,param_5);
    }
    return uVar2;
  }
  if (param_4 == 0x13) {
    if ((uVar1 >> 0x18 & 0x1f) - 0xf < 5) goto LAB_1804bf32f;
    *(undefined4 *)(param_1 + 0xba) = 0x5b93326e;
  }
  else {
    if ((uVar1 & 0x1f000000) == 0xe000000) goto LAB_1804bf32f;
    *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
  }
  *(short *)(param_1 + 0xb8) = (short)uVar1;
  uVar1 = FUN_1804d6ae0(param_1);
LAB_1804bf32f:
  return (ulonglong)uVar1;
}



/* ===== 1804bf380 FUN_1804bf380 ===== */

void FUN_1804bf380(longlong param_1,int param_2,int param_3,uint param_4)

{
  short sVar1;
  undefined4 uVar2;
  
  if (((param_4 & 4) == 0) && ((param_3 != 0x13 || ((int)param_4 >> 0x10 != 0)))) {
    sVar1 = 0;
  }
  else {
    sVar1 = 0x80;
  }
  *(ushort *)(param_1 + 0xbc) = sVar1 + (short)param_3 | 0x4700;
  *(short *)(param_1 + 0xb8) = (short)param_2 + *(short *)(param_1 + 0xb0);
  sVar1 = 0;
  if (param_3 == 0x13) {
    sVar1 = 8;
  }
  *(short *)(param_1 + 0xba) = sVar1 + (short)param_4;
  uVar2 = FUN_1804a5f70(param_1);
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (longlong)param_2 * 4) = uVar2;
  return;
}



/* ===== 1804bf410 FUN_1804bf410 ===== */

void FUN_1804bf410(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0xa0) + -8) == 0) {
    *(undefined4 *)(param_1 + 0xba) = 0x47080010;
    *(short *)(param_1 + 0xb8) = *(short *)(param_1 + 0xb0) + -2;
    uVar1 = FUN_1804a5f70();
    *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + -8) = uVar1;
  }
  return;
}



/* ===== 1804bf460 FUN_1804bf460 ===== */

void FUN_1804bf460(longlong param_1,int param_2)

{
  int iVar1;
  
  FUN_1804c2dc0();
  iVar1 = *(int *)(param_1 + 0xb0) + param_2;
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 + 2) * 4;
  *(int *)(param_1 + 0xb0) = iVar1 + 2;
  if (0xf9 < (uint)(*(int *)(param_1 + 0xac) + 2 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,3);
  }
  return;
}



/* ===== 1804bf4d0 FUN_1804bf4d0 ===== */

ulonglong FUN_1804bf4d0(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined8 in_RCX;
  uint uVar2;
  
  uVar2 = (uint)((longlong)*param_2 >> 0x2f);
  if (0xfffffff6 < uVar2 + 4) {
    if (uVar2 < 0xfffffff2) {
      uVar2 = 0xe;
    }
    else {
      uVar2 = ~uVar2;
    }
    uVar1 = FUN_1804a62e0(in_RCX,*param_2 & 0x7fffffffffff,uVar2);
    return uVar1;
  }
  if (uVar2 < 0xfffffff2) {
    uVar1 = FUN_1804a65e0(param_1,*param_2);
    return uVar1;
  }
  if (uVar2 + 3 < 2) {
    return (ulonglong)(~uVar2 * 0xffffff + 0x7fff);
  }
  return 0;
}



/* ===== 1804bf540 FUN_1804bf540 ===== */

ulonglong FUN_1804bf540(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  ushort uVar6;
  undefined2 uVar7;
  ushort uVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined2 *puVar17;
  byte bVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  ushort *puVar21;
  undefined2 *puVar22;
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_54;
  uint local_50;
  longlong local_48;
  
  local_50 = 0xe;
  do {
    if ((param_2[6] & 0x1f000000) == 0xb000000) {
      if ((param_2[1] == 0xffffffffffffffff) ||
         (((uint)((longlong)param_2[1] >> 0x2f) < 0xfffffff2 && (NAN((double)param_2[1]))))) {
        if ((int)param_2[7] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804954a0(param_1,0x11);
        }
        if (*(ushort *)((longlong)param_2 + 0x34) < 0x8000) {
          if ((*(int *)((longlong)param_2 + 0x44) == 0) ||
             (iVar10 = FUN_1804c1910(param_1,param_2,0), iVar10 == 0)) {
            return 0x7fff;
          }
          goto LAB_1804bf849;
        }
      }
      local_res20 = FUN_1804c3cc0(param_1,param_2,&local_54,local_res18);
      uVar6 = (ushort)local_res20;
      cVar2 = *(char *)(*(longlong *)(param_1 + 0x20) + 5 + (ulonglong)uVar6 * 8);
      if (cVar2 == '\x1a') {
        plVar19 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 8 + (ulonglong)uVar6 * 8);
      }
      else {
        plVar19 = (longlong *)param_2[5];
      }
      if ((uint)param_2[7] != 0) {
        local_48 = *(longlong *)((*param_2 & 0x7fffffffffff) + 0x20);
        if ((8 < (*(uint *)((longlong)param_2 + 0x34) >> 0x18 & 0x1f) - 4) ||
           (bVar5 = true, ((uint)param_2[7] & 0x1f000000) == 0)) {
          bVar5 = false;
        }
        uVar15 = local_res20 & 0xffff;
        if (uVar15 < local_54) {
          FUN_1804a6a90(param_1);
          *(undefined1 *)(param_1 + 0xb6) = local_res18[0];
        }
        if (*plVar19 == -1) {
          if ((((*(int *)((longlong)param_2 + 0x44) == 0) || (local_48 == 0)) ||
              (plVar12 = (longlong *)FUN_180492860(local_48,*(undefined8 *)(param_1 + -0x130)),
              plVar12 == (longlong *)0x0)) || (*plVar12 == -1)) {
            if (cVar2 == ':') {
              uVar7 = FUN_1804a66d0(param_1,0x1a,(longlong *)(param_1 + -0x1f0));
              *(ushort *)(param_1 + 0xb8) = uVar6;
              uVar9 = 0x989;
              *(undefined2 *)(param_1 + 0xba) = uVar7;
              if (plVar19 == (longlong *)(param_1 + -0x1f0)) {
                uVar9 = 0x889;
              }
              *(undefined2 *)(param_1 + 0xbc) = uVar9;
              FUN_1804d6ae0(param_1);
            }
          }
          else {
            uVar7 = 0x4380;
            *(ushort *)(param_1 + 0xb8) = uVar6;
            if (cVar2 == '8') {
              uVar7 = 0x4280;
            }
            *(undefined2 *)(param_1 + 0xbc) = uVar7;
            *(undefined2 *)(param_1 + 0xba) = 0;
            FUN_1804d6ae0(param_1);
          }
          if ((*(int *)((longlong)param_2 + 0x44) != 0) &&
             (iVar10 = FUN_1804c1910(param_1,param_2,1), iVar10 != 0)) goto LAB_1804bf849;
          if (plVar19 == (longlong *)(param_1 + -0x1f0)) {
            uVar15 = *(uint *)((longlong)param_2 + 0x34);
            uVar6 = (ushort)uVar15;
            if ((uVar15 >> 0x18 & 0x1f) - 0xf < 5) {
              *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
              *(ushort *)(param_1 + 0xb8) = uVar6;
              uVar15 = FUN_1804d6ae0(param_1);
            }
            else if ((uVar15 & 0x1f000000) == 0xe000000) {
              if (uVar6 < 0x8000) {
                if ((double)param_2[1] == -0.0) {
                  uVar15 = FUN_1804a6540(param_1,0);
                }
              }
              else {
                *(undefined2 *)(param_1 + 0xbc) = 0x88e;
                *(ushort *)(param_1 + 0xb8) = uVar6;
                *(ushort *)(param_1 + 0xba) = uVar6;
                FUN_1804d6ae0(param_1);
              }
            }
            *(short *)(param_1 + 0xb8) = (short)param_2[6];
            *(undefined2 *)(param_1 + 0xbc) = 0x3b09;
            *(short *)(param_1 + 0xba) = (short)uVar15;
            uVar15 = FUN_1804d6ae0(param_1);
            bVar5 = false;
          }
          else {
            uVar15 = local_res20;
          }
          bVar18 = (cVar2 != '8') + 0x42;
        }
        else {
          bVar18 = (cVar2 != '8') + 0x42;
          iVar10 = FUN_1804e3540(param_1,bVar18,uVar15);
          if (iVar10 == 0) {
            if (cVar2 == ':') {
              uVar7 = FUN_1804a66d0(param_1,0x1a,param_1 + -0x1f0);
              *(undefined2 *)(param_1 + 0xbc) = 0x989;
              *(ushort *)(param_1 + 0xb8) = uVar6;
              *(undefined2 *)(param_1 + 0xba) = uVar7;
              FUN_1804d6ae0(param_1);
            }
            puVar17 = (undefined2 *)(param_1 + 0xba);
            puVar22 = (undefined2 *)(param_1 + 0xb8);
            puVar21 = (ushort *)(param_1 + 0xbc);
            if (*(int *)((longlong)param_2 + 0x44) != 0) {
              if (local_48 != 0) {
                uVar15 = (uint)(*plVar19 >> 0x2f);
                if (0xfffffff1 < uVar15) {
                  local_50 = ~uVar15;
                }
                uVar7 = (undefined2)local_res20;
                uVar6 = 0x4380;
                if (cVar2 == '8') {
                  uVar6 = 0x4280;
                }
                *puVar21 = uVar6 | (ushort)local_50;
                *puVar22 = uVar7;
                *puVar17 = 0;
                FUN_1804d6ae0(param_1);
                goto LAB_1804bfc5c;
              }
              *puVar22 = (short)param_2[6];
              *puVar21 = 0x450b;
              *puVar17 = 5;
              uVar7 = FUN_1804d6ae0(param_1);
              uVar9 = FUN_1804a64b0(param_1,0xb);
              *puVar21 = 0x88b;
              *puVar22 = uVar7;
              *puVar17 = uVar9;
              FUN_1804d6ae0(param_1);
            }
            uVar7 = (undefined2)local_res20;
            goto LAB_1804bfc5c;
          }
          bVar5 = false;
          uVar15 = local_res20;
        }
        uVar7 = (undefined2)uVar15;
LAB_1804bfc5c:
        puVar22 = (undefined2 *)(param_1 + 0xb8);
        puVar21 = (ushort *)(param_1 + 0xbc);
        puVar17 = (undefined2 *)(param_1 + 0xba);
        uVar15 = (uint)param_2[7];
        if ((uVar15 >> 0x18 & 0x1f) - 0xf < 5) {
          *(short *)(param_1 + 0xb8) = (short)param_2[7];
          *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
          uVar15 = FUN_1804d6ae0(param_1);
          *(uint *)(param_2 + 7) = uVar15;
          uVar11 = uVar15;
        }
        else {
          uVar11 = uVar15 & 0xffff;
        }
        *puVar22 = uVar7;
        *puVar17 = (short)uVar11;
        *puVar21 = (ushort)bVar18 << 8 | (byte)(uVar15 >> 0x18) & 0x1f | 0x800;
        FUN_1804d6ae0(param_1);
        if ((bVar5) || (((uint)param_2[7] >> 0x18 & 0x1f) - 4 < 9)) {
          *puVar22 = (short)param_2[6];
          *puVar17 = 0;
          *puVar21 = 0x5800;
          FUN_1804d6ae0(param_1);
        }
        uVar15 = *(uint *)((longlong)param_2 + 0x34);
        if (((uVar15 & 0x1f000000) == 0x4000000) &&
           (((0x7fff < (ushort)uVar15 ||
             (lVar3 = *(longlong *)
                       (*(longlong *)(param_1 + 0x20) + 8 + (ulonglong)(uVar15 & 0xffff) * 8),
             *(longlong *)(param_1 + -0x138) == lVar3)) ||
            ((*(longlong *)(param_1 + -0x130) == lVar3 ||
             ((((*(longlong *)(param_1 + -0x128) == lVar3 ||
                (*(longlong *)(param_1 + -0x120) == lVar3)) ||
               (*(longlong *)(param_1 + -0x118) == lVar3)) ||
              (*(longlong *)(param_1 + -0x110) == lVar3)))))))) {
          *puVar22 = (short)param_2[6];
          *puVar21 = 0x3e09;
          *puVar17 = 10;
          uVar7 = FUN_1804d6ae0(param_1);
          uVar9 = FUN_1804a6370(param_1,0);
          *puVar21 = 0x4d10;
          *puVar22 = uVar7;
          *puVar17 = uVar9;
          FUN_1804d6ae0(param_1);
        }
        *(undefined1 *)(param_1 + 0xb5) = 1;
        return 0;
      }
      uVar15 = (uint)(*plVar19 >> 0x2f);
      if (uVar15 < 0xfffffff2) {
        uVar15 = 0xe;
      }
      else {
        uVar15 = ~uVar15;
      }
      if (plVar19 == (longlong *)(param_1 + -0x1f0)) {
        uVar7 = FUN_1804a66d0(param_1,0x1a,(longlong *)(param_1 + -0x1f0));
        *(undefined2 *)(param_1 + 0xbc) = 0x889;
        *(ushort *)(param_1 + 0xb8) = uVar6;
        *(undefined2 *)(param_1 + 0xba) = uVar7;
        FUN_1804d6ae0(param_1);
        uVar14 = 0x7fff;
      }
      else {
        uVar8 = 0x4380;
        *(ushort *)(param_1 + 0xb8) = uVar6;
        if (cVar2 == '8') {
          uVar8 = 0x4280;
        }
        *(ushort *)(param_1 + 0xbc) = uVar8 | (ushort)uVar15;
        *(undefined2 *)(param_1 + 0xba) = 0;
        uVar11 = FUN_1804d6ae0(param_1);
        uVar14 = (ulonglong)uVar11;
      }
      if (((uint)uVar14 & 0xffff) < local_54) {
        FUN_1804a6a90(param_1);
        *(undefined1 *)(param_1 + 0xb6) = local_res18[0];
      }
      if (uVar15 != 0) {
        if (2 < uVar15) {
          return uVar14;
        }
LAB_1804bf941:
        return (ulonglong)(uVar15 * 0xffffff + 0x7fff);
      }
      if ((*(int *)((longlong)param_2 + 0x44) == 0) ||
         (iVar10 = FUN_1804c1910(param_1,param_2,0), iVar10 == 0)) goto LAB_1804bf941;
    }
    else {
      iVar10 = FUN_1804c1910(param_1,param_2,(int)param_2[7] != 0);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804954a0(param_1,0x12);
      }
    }
LAB_1804bf849:
    puVar20 = param_2 + 7;
    uVar15 = (uint)param_2[8] & 0x1f000000;
    if (uVar15 == 0x8000000) {
      puVar16 = &LAB_1800034b2;
      if ((int)*puVar20 != 0) {
        puVar16 = &LAB_1800035a9;
      }
      uVar15 = FUN_1804c4a40(param_1,puVar16);
      lVar3 = *(longlong *)(param_1 + 0xa0);
      uVar14 = (ulonglong)uVar15;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20);
      *(int *)(lVar3 + uVar14 * 4) = (int)param_2[8];
      *(int *)(lVar3 + 8 + uVar14 * 4) = (int)param_2[6];
      *(undefined4 *)(lVar3 + 0xc + uVar14 * 4) = *(undefined4 *)((longlong)param_2 + 0x34);
      *(ulonglong *)(lVar4 + uVar14 * 8) = param_2[3] & 0x7fffffffffff | 0xfffb800000000000;
      *(ulonglong *)(lVar4 + 0x10 + uVar14 * 8) = *param_2;
      *(ulonglong *)(lVar4 + 0x18 + uVar14 * 8) = param_2[1];
      if ((int)*puVar20 == 0) {
        uVar13 = 2;
      }
      else {
        *(int *)(lVar3 + 0x10 + uVar14 * 4) = (int)*puVar20;
        uVar13 = 3;
        *(ulonglong *)(lVar4 + 0x20 + uVar14 * 8) = param_2[2];
      }
      FUN_1804bf460(param_1,uVar14,uVar13);
      return 0;
    }
    if ((((*(int *)((longlong)param_2 + 0x3c) == 0x7fff) && ((int)*puVar20 == 0)) &&
        (((param_2[6] & 0x1f000000) == 0xc000000 &&
         (((*(char *)((*param_2 & 0x7fffffffffff) + 10) == '\x03' && (uVar15 == 0xb000000)) &&
          ((*(uint *)((longlong)param_2 + 0x34) & 0x1f000000) == 0x4000000)))))) &&
       ((ushort)*(uint *)((longlong)param_2 + 0x34) < 0x8000)) {
      uVar13 = FUN_180492860(param_2[3] & 0x7fffffffffff,param_2[1] & 0x7fffffffffff);
      uVar14 = FUN_1804bf4d0(param_1,uVar13);
      if ((int)uVar14 != 0) {
        return uVar14;
      }
    }
    piVar1 = (int *)((longlong)param_2 + 0x44);
    *piVar1 = *piVar1 + -1;
    *(int *)(param_2 + 6) = (int)param_2[8];
    *param_2 = param_2[3];
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0x13);
    }
  } while( true );
}



/* ===== 1804bfdd0 FUN_1804bfdd0 ===== */

void FUN_1804bfdd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  uint *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  double dVar7;
  double dVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ushort uVar20;
  uint uVar21;
  uint uVar22;
  ushort *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong *plVar26;
  char cVar27;
  ulonglong uVar28;
  ushort uVar29;
  uint uVar30;
  undefined8 local_res8;
  uint *local_res10;
  ushort *local_res18;
  longlong local_res20;
  short sVar31;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  longlong local_b8;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  double local_90;
  double local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_50;
  undefined4 local_4c;
  
  if (*(int *)(param_1 + 0x174) != 0) {
    switch(*(int *)(param_1 + 0x174)) {
    case 1:
      FUN_1804c3140(param_1,*(uint **)(param_1 + -0x200),
                    (uint)(0xfffffffd < (uint)((longlong)*(undefined8 *)(param_1 + -0x1f8) >> 0x2f))
                    ^ **(uint **)(param_1 + -0x200) & 1);
    case 2:
    case 3:
      if ((0xfffffffd < (uint)((longlong)*(undefined8 *)(param_1 + -0x1f8) >> 0x2f)) &&
         (*(byte *)(param_1 + 0xbd) = *(byte *)(param_1 + 0xbd) ^ 1, *(int *)(param_1 + 0x174) == 3)
         ) {
        piVar2 = (int *)(*(longlong *)(param_1 + 0x38) +
                        (ulonglong)
                        ((uint)*(byte *)(*(longlong *)(param_1 + 0x30) + -2 +
                                        (ulonglong)*(ushort *)(param_1 + 10) * 0xc) +
                        *(int *)(*(longlong *)(param_1 + 0x30) + -0xc +
                                (ulonglong)*(ushort *)(param_1 + 10) * 0xc) + -1) * 4);
        *piVar2 = *piVar2 + -1;
      }
      FUN_1804d6ae0(param_1);
    case 4:
      if ((0xfffffffd < (uint)((longlong)*(undefined8 *)(param_1 + -0x1f8) >> 0x2f)) &&
         (*(uint *)(param_1 + 0xac) != 0)) {
        uVar16 = 0;
        do {
          uVar18 = (ulonglong)uVar16;
          if ((*(int *)(*(longlong *)(param_1 + 0xa0) + uVar18 * 4) == 0x2007ffd) &&
             ((int)((longlong)
                    *(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + uVar18 * 8) >> 0x2f) ==
              -2)) {
            *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + uVar18 * 4) = 0x1007ffe;
            break;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(uint *)(param_1 + 0xac));
      }
      break;
    case 5:
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20);
      uVar16 = *(uint *)(param_1 + 0xac);
      uVar21 = (uint)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x28) - lVar15 >> 3);
      if (uVar21 < uVar16) {
        *(uint *)(param_1 + 0xac) = uVar21;
        uVar16 = uVar21;
      }
      uVar21 = 0;
      if (uVar16 != 0) {
        do {
          uVar18 = (ulonglong)uVar21;
          if ((*(int *)(*(longlong *)(param_1 + 0xa0) + uVar18 * 4) == 0x7fff) &&
             (*(longlong *)(lVar15 + uVar18 * 8) != -1)) {
            uVar11 = FUN_1804bf4d0(param_1,lVar15 + uVar18 * 8);
            *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + uVar18 * 4) = uVar11;
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < *(uint *)(param_1 + 0xac));
      }
      break;
    case 6:
      if (0x67 < **(byte **)(param_1 + 0x88)) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  if (*(char *)(param_1 + 0xb5) != '\0') {
    *(undefined1 *)(param_1 + 0xb5) = 0;
    if ((*(longlong *)(param_1 + 0x98) != 0) && (**(byte **)(param_1 + 0x88) < 0x60)) {
      FUN_1804bc8d0(param_1);
    }
    FUN_1804bc6f0(param_1);
    *(undefined1 *)(param_1 + 0xb4) = 1;
  }
  if (*(char *)(param_1 + 0xb7) != '\0') {
    *(char *)(param_1 + 0xb7) = *(char *)(param_1 + 0xb7) + -1;
    return;
  }
  puVar4 = *(uint **)(param_1 + 0x88);
  local_res10 = puVar4;
  if ((*(int *)(param_1 + 0xfc) == 0) &&
     (*(uint *)(param_1 + 0xe8) <= (uint)((int)puVar4 - *(int *)(param_1 + 0xe0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,8);
  }
  if ((*(int *)(param_1 + 0xc34) != 0) && (lVar15 = *(longlong *)(param_1 + 0x98), lVar15 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0xc28);
    *(longlong *)(param_1 + 0xc28) = lVar15;
    if ((lVar15 == lVar5) || (lVar5 == 0)) {
      if (*(int *)(param_1 + 0xc34) == 0x6c) {
        iVar12 = FUN_18048aa20(lVar15,(longlong)puVar4 + (-0x68 - lVar15) >> 2);
        iVar14 = *(int *)(param_1 + 0xc30);
        *(int *)(param_1 + 0xc30) = iVar12;
        if (iVar14 != iVar12) goto LAB_1804c0093;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc30) = 0xffffffff;
LAB_1804c0093:
      *(undefined4 *)(param_1 + 0xba) = 0x15800000;
      *(undefined2 *)(param_1 + 0xb8) = 0;
      FUN_1804d6ae0(param_1);
      FUN_1804bc6f0(param_1);
    }
  }
  uVar16 = *puVar4;
  uVar19 = (ulonglong)uVar16 & 0xff;
  uVar21 = (uint)uVar19;
  local_res20 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20);
  puVar23 = (ushort *)(&DAT_18056f5e0 + uVar19 * 2);
  uVar30 = uVar16 >> 8 & 0xff;
  uVar18 = (ulonglong)uVar30;
  local_res8 = CONCAT44(local_res8._4_4_,uVar16 >> 8) & 0xffffffff000000ff;
  local_a0 = 0;
  uVar3 = *puVar23;
  local_res18 = puVar23;
  if (((byte)uVar3 & 7) == 3) {
    local_c8 = *(double *)(local_res20 + uVar18 * 8);
    uVar13 = *(uint *)(*(longlong *)(param_1 + 0xa0) + uVar18 * 4);
    if (uVar13 == 0) {
      uVar13 = FUN_1804c5880(param_1,uVar30);
      local_res8 = CONCAT44(local_res8._4_4_,uVar13);
    }
    else {
      local_res8 = CONCAT44(local_res8._4_4_,uVar13);
    }
    uVar18 = (ulonglong)uVar13;
    uVar3 = *puVar23;
    local_a0 = uVar13;
  }
  uVar30 = (uint)uVar3;
  plVar1 = (longlong *)(param_1 + 0xa0);
  uVar28 = (ulonglong)(uVar16 >> 0x10);
  if ((uVar3 & 0x78) == 0) {
    uVar25 = 0;
  }
  else {
    uVar28 = (ulonglong)(byte)(uVar16 >> 0x10);
    uVar24 = (ulonglong)(uVar16 >> 0x18);
    uVar25 = uVar24;
    if ((uVar30 & 0x78) == 0x18) {
      local_d8 = *(double *)(local_res20 + uVar24 * 8);
      local_a8 = *(uint *)(*plVar1 + uVar24 * 4);
      uVar25 = (ulonglong)local_a8;
      if (local_a8 == 0) {
        local_a8 = FUN_1804c5880(param_1,uVar24);
        uVar25 = (ulonglong)local_a8;
        uVar30 = (uint)*local_res18;
      }
    }
  }
  uVar30 = uVar30 >> 7 & 0xf;
  if (uVar30 == 3) {
    local_d0 = *(double *)(local_res20 + uVar28 * 8);
    uVar30 = *(uint *)(*plVar1 + uVar28 * 4);
    if (uVar30 == 0) {
      uVar30 = FUN_1804c5880(param_1,uVar28);
LAB_1804c027f:
      uVar28 = (ulonglong)uVar30;
    }
    else {
      uVar28 = (ulonglong)uVar30;
    }
LAB_1804c0282:
    local_a4 = (uint)uVar28;
  }
  else {
    if (uVar30 == 8) {
      local_d0 = (double)~(uVar28 << 0x2f);
      uVar28 = (ulonglong)((int)uVar28 * 0xffffff + 0x7fff);
      goto LAB_1804c0282;
    }
    if (uVar30 == 9) {
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x20);
      local_d0 = *(double *)(lVar15 + uVar28 * 8);
      if (*(int *)(lVar15 + 4 + uVar28 * 8) != -0x18001) {
        uVar30 = FUN_1804a65e0(param_1,*(undefined8 *)(lVar15 + uVar28 * 8));
        goto LAB_1804c027f;
      }
      uVar30 = FUN_1804a6370(param_1,0);
      uVar28 = (ulonglong)(uVar30 | 0x100000);
      goto LAB_1804c0282;
    }
    if (uVar30 == 10) {
      uVar28 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x20) + ~uVar28 * 8);
      local_d0 = (double)(uVar28 | 0xfffd800000000000);
      local_a4 = FUN_1804a62e0(param_1,uVar28,4);
      uVar28 = (ulonglong)local_a4;
    }
  }
  dVar8 = local_d8;
  puVar4 = local_res10;
  uVar13 = (uint)uVar28;
  uVar29 = (ushort)uVar28;
  uVar17 = (uint)uVar18;
  uVar22 = (uint)uVar25;
  uVar30 = (uint)(uVar28 >> 0x18);
  uVar3 = (ushort)uVar18;
  uVar24 = uVar25;
  switch(uVar21) {
  case 0:
  case 1:
  case 2:
  case 3:
    if (((uVar17 & 0x1f000000) != 0xa000000) && ((uVar13 & 0x1f000000) != 0xa000000)) {
      if ((((uVar3 | uVar29) < 0x8000) &&
          (((uVar17 >> 0x18 & 0x1f) - 0xe < 6 || ((uVar17 & 0x1f000000) == 0x4000000)))) &&
         (((uVar30 & 0x1f) - 0xe < 6 || ((uVar13 & 0x1f000000) == 0x4000000)))) break;
      local_res8 = CONCAT44(local_res8._4_4_,uVar17);
      uVar17 = (uint)(uVar18 >> 0x18) & 0x1f;
      if (uVar17 - 0xf < 5) {
        uVar17 = 0x13;
      }
      uVar20 = (ushort)uVar17;
      uVar30 = uVar30 & 0x1f;
      if (uVar30 - 0xf < 5) {
        uVar30 = 0x13;
      }
      if (uVar17 == uVar30) {
        FUN_1804c31c0(param_1);
        if (uVar17 == 0xe) goto LAB_1804c0496;
        if (uVar17 == 0x13) {
          iVar14 = FUN_1804a69e0(local_c8,local_d0,uVar19);
          uVar16 = uVar21;
          if (iVar14 == 0) {
            uVar16 = uVar21 ^ 1;
          }
        }
        else {
          if (uVar17 != 4) goto LAB_1804c03cd;
          iVar14 = FUN_1804a6ad0((ulonglong)local_c8 & 0x7fffffffffff,
                                 (ulonglong)local_d0 & 0x7fffffffffff,uVar19);
          uVar16 = uVar21 ^ 1;
          if (iVar14 != 0) {
            uVar16 = uVar21;
          }
          uVar30 = FUN_1804a5e80(param_1,0,uVar18,uVar28);
          uVar18 = (ulonglong)uVar30;
          uVar13 = FUN_1804a6370(param_1,0);
          uVar20 = 0x13;
        }
      }
      else {
        if (uVar17 == 0x13) {
          if (uVar30 != 0xe) goto LAB_1804c03c5;
          *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
          *(ushort *)(param_1 + 0xb8) = uVar3;
          uVar30 = FUN_1804d6ae0(param_1);
          uVar18 = (ulonglong)uVar30;
          uVar20 = 0xe;
          FUN_1804c31c0(param_1);
        }
        else {
          if ((uVar17 != 0xe) || (uVar30 != 0x13)) {
LAB_1804c03c5:
            FUN_1804c31c0(param_1);
LAB_1804c03cd:
            local_a8 = local_a0;
            local_d8 = local_c8;
            uVar16 = ((uVar16 & 2) != 0) + 6;
            iVar14 = FUN_1804c1910(param_1,&local_d8,uVar16);
            dVar8 = local_d8;
            local_d8 = local_d0;
            uVar30 = local_a8;
            local_a8 = local_a4;
            while( true ) {
              local_d0 = local_d8;
              local_a4 = local_a8;
              if (iVar14 != 0) break;
              uVar21 = (uint)uVar19;
              iVar14 = FUN_1804c1910(param_1,&local_d8,uVar16);
              uVar16 = local_a0;
              dVar7 = local_c8;
              dVar8 = local_d8;
              uVar30 = local_a8;
              if (iVar14 != 0) break;
              uVar18 = local_res8 & 0xffffffff;
              if ((uVar19 & 2) == 0) goto switchD_1804c02b6_caseD_27;
              uVar21 = uVar21 ^ 3;
              uVar19 = (ulonglong)uVar21;
              local_a8 = local_a4;
              local_a0 = local_a4;
              local_a4 = uVar16;
              local_d8 = local_d0;
              local_c8 = local_d0;
              uVar16 = (uVar21 & 2 | 0xc) >> 1;
              local_d0 = dVar7;
              iVar14 = FUN_1804c1910(param_1,&local_d8,uVar16);
              dVar8 = local_d8;
              local_d8 = local_d0;
              uVar30 = local_a8;
              local_a8 = local_a4;
            }
            local_a8 = uVar30;
            local_d8 = dVar8;
            FUN_1804c45c0(param_1,&local_d8,uVar21);
            uVar18 = local_res8 & 0xffffffff;
            break;
          }
          *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
          *(ushort *)(param_1 + 0xb8) = uVar29;
          uVar13 = FUN_1804d6ae0(param_1);
          FUN_1804c31c0(param_1);
        }
LAB_1804c0496:
        local_res8 = CONCAT44(local_res8._4_4_,uVar16) & 0xffffffffffffff01;
        uVar16 = uVar21 ^ 4;
        if ((char)local_res8 == '\0') {
          uVar16 = uVar21;
        }
        iVar14 = FUN_1804a69e0(local_c8,local_d0,uVar16);
        if (iVar14 == 0) {
          uVar16 = uVar16 ^ 5;
        }
      }
      *(short *)(param_1 + 0xb8) = (short)uVar18;
      *(short *)(param_1 + 0xba) = (short)uVar13;
      *(ushort *)(param_1 + 0xbc) = (short)uVar16 << 8 | uVar20 | 0x80;
      FUN_1804d6ae0(param_1);
      FUN_1804c3140(param_1,*(undefined8 *)(param_1 + 0x88),(uVar21 ^ uVar16) & 1);
      break;
    }
    FUN_1804bc6f0(param_1);
    if ((local_a0 & 0x1f000000) == 0xa000000) {
      local_a8 = local_a0;
      local_d8 = local_c8;
    }
    else {
      local_a8 = local_a4;
      local_d8 = local_d0;
    }
    cVar27 = ((uVar16 & 2) != 0) + '\x06';
    goto LAB_1804c05d5;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    uVar17 = uVar17 & 0x1f000000;
    if ((uVar17 != 0xa000000) && ((uVar13 & 0x1f000000) != 0xa000000)) {
      if (((uVar3 | uVar29) < 0x8000) && ((uVar17 + 0xf5000000 & 0xfeffffff) != 0)) break;
      FUN_1804c31c0(param_1);
      iVar14 = FUN_1804c1e60(param_1,uVar18,uVar28,&local_c8,&local_d0);
      if ((iVar14 == 2) || ((uVar17 + 0xf5000000 & 0xfeffffff) != 0)) {
        FUN_1804c3140(param_1,*(undefined8 *)(param_1 + 0x88),~uVar16 & 1 ^ (uint)(iVar14 == 0));
        break;
      }
      if (iVar14 != 1) break;
      local_a8 = local_a0;
      local_d8 = local_c8;
      iVar14 = FUN_1804c1910(param_1,&local_d8,4);
      uVar11 = local_98;
      if (iVar14 == 0) break;
      local_res8 = local_c0;
      iVar14 = (int)((longlong)local_d0 >> 0x2f);
      if (iVar14 == -0xc) {
        if (*(longlong *)(((ulonglong)local_d0 & 0x7fffffffffff) + 0x20) != local_b8)
        goto LAB_1804c0756;
        *(undefined4 *)(param_1 + 0xba) = 0x450b0005;
      }
      else {
        if ((iVar14 != -0xd) ||
           (*(longlong *)(((ulonglong)local_d0 & 0x7fffffffffff) + 0x20) != local_b8)) {
LAB_1804c0756:
          local_d8 = local_d0;
          local_a8 = local_a4;
          iVar14 = FUN_1804c1910(param_1,&local_d8,4);
          if ((iVar14 != 0) &&
             (iVar14 = FUN_1804c1e60(param_1,uVar11,local_98,&local_res8,&local_c0), iVar14 == 0)) {
            FUN_1804c45c0(param_1,&local_d8,uVar19);
          }
          break;
        }
        *(undefined4 *)(param_1 + 0xba) = 0x450b000b;
      }
      *(undefined2 *)(param_1 + 0xb8) = (undefined2)local_a4;
      uVar9 = FUN_1804d6ae0(param_1);
      *(undefined2 *)(param_1 + 0xb8) = uVar9;
      *(undefined2 *)(param_1 + 0xba) = local_9c;
      *(undefined2 *)(param_1 + 0xbc) = 0x88b;
      FUN_1804d6ae0(param_1);
      FUN_1804c45c0(param_1,&local_d8,uVar19);
      break;
    }
    FUN_1804bc6f0(param_1);
    if ((local_a0 & 0x1f000000) == 0xa000000) {
      cVar27 = '\x04';
      local_a8 = local_a0;
      local_d8 = local_c8;
    }
    else {
      cVar27 = '\x04';
      local_a8 = local_a4;
      local_d8 = local_d0;
    }
LAB_1804c05d5:
    FUN_1804c1910(param_1,&local_d8,cVar27);
    FUN_1804c45c0(param_1,&local_d8,uVar19);
    break;
  case 0xc:
  case 0xd:
    if ((uVar16 & 1) == (uint)(0x1000000 < (uVar13 & 0x1f000000))) {
      uVar13 = 0;
    }
  case 0xe:
  case 0xf:
    if ((uint)*(byte *)((longlong)local_res10 + 5) < *(uint *)(param_1 + 0xac)) {
      *(uint *)(param_1 + 0xac) = (uint)*(byte *)((longlong)local_res10 + 5);
    }
    break;
  case 0x10:
  case 0x11:
    if (uVar13 == 0xf) {
      uVar21 = FUN_1804a6b20(param_1,uVar18);
LAB_1804c087a:
      uVar18 = (ulonglong)uVar21;
    }
    else if (uVar13 == 5) {
      uVar21 = FUN_1804a6be0(param_1,uVar18);
      goto LAB_1804c087a;
    }
    *(int *)(*plVar1 + (ulonglong)(byte)(uVar16 >> 8) * 4) = (int)uVar18;
    break;
  case 0x12:
    uVar16 = *(uint *)(param_1 + 0xac);
    if (uVar16 < uVar17) {
      FUN_180540170(*plVar1 + (ulonglong)uVar16 * 4,0,(ulonglong)(uVar17 - uVar16) << 2);
    }
    break;
  case 0x13:
    uVar16 = uVar13 & 0x1f000000;
    uVar13 = 0x2007ffd;
    if (0x1000000 < uVar16) {
      uVar13 = 0x1007ffe;
    }
    break;
  case 0x14:
    if (((uVar30 & 0x1f) - 0xe < 6) || ((uVar13 & 0x1f000000) == 0x4000000)) {
      uVar13 = FUN_1804e40b0(param_1,uVar28,&local_d0);
    }
    else {
      local_d8 = local_d0;
      local_a8 = uVar13;
      uVar13 = FUN_1804c4480(param_1,&local_d8,0x10);
    }
    break;
  case 0x15:
    if ((uVar13 & 0x1f000000) == 0x4000000) {
      *(undefined4 *)(param_1 + 0xba) = 0x45130000;
    }
    else {
      local_90 = local_d0;
      local_60 = uVar13;
      iVar14 = FUN_1804c1910(param_1,&local_90,5);
      if (iVar14 != 0) {
        uVar16 = FUN_1804c4a40(param_1,&LAB_1800034b2);
        lVar15 = *plVar1;
        uVar19 = (ulonglong)uVar16;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20);
        *(undefined4 *)(lVar15 + uVar19 * 4) = local_50;
        *(undefined8 *)(lVar5 + uVar19 * 8) = local_78;
        *(uint *)(lVar15 + 8 + uVar19 * 4) = uVar13;
        *(double *)(lVar5 + 0x10 + uVar19 * 8) = local_d0;
        *(uint *)(lVar15 + 0xc + uVar19 * 4) = uVar13;
        *(double *)(lVar5 + 0x18 + uVar19 * 8) = local_d0;
        FUN_1804c2dc0(param_1,uVar16,2);
        *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
        *plVar1 = *plVar1 + (ulonglong)(uVar16 + 2) * 4;
        iVar14 = *(int *)(param_1 + 0xb0) + uVar16;
        *(int *)(param_1 + 0xb0) = iVar14 + 2;
        if (0xf9 < (uint)(iVar14 + *(int *)(param_1 + 0xac) + 2)) goto LAB_1804c176e;
        uVar13 = 0;
        break;
      }
      if ((uVar13 & 0x1f000000) != 0xb000000) {
                    /* WARNING: Subroutine does not return */
        FUN_1804954a0(param_1,0x12);
      }
      *(undefined4 *)(param_1 + 0xba) = 0x49137fff;
    }
    *(ushort *)(param_1 + 0xb8) = uVar29;
    uVar13 = FUN_1804d6ae0();
    break;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
    goto switchD_1804c02b6_caseD_16;
  case 0x1a:
  case 0x24:
switchD_1804c02b6_caseD_1a:
    if (((((uint)uVar24 >> 0x18 & 0x1f) - 0xe < 6) || (((uint)uVar24 & 0x1f000000) == 0x4000000)) &&
       ((((uint)uVar28 >> 0x18 & 0x1f) - 0xe < 6 || (((uint)uVar28 & 0x1f000000) == 0x4000000)))) {
      uVar13 = FUN_1804e3e20(param_1,uVar24,uVar28,&local_d8,&local_d0);
    }
    else {
      uVar13 = FUN_1804c4480(param_1,&local_d8,0xe);
    }
    break;
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    local_c8 = local_d8;
    local_d8 = local_d0;
    local_d0 = dVar8;
    uVar24 = uVar28;
    uVar28 = uVar25;
    local_a8 = uVar13;
    local_a4 = uVar22;
    if (uVar21 == 0x1f) goto switchD_1804c02b6_caseD_1a;
switchD_1804c02b6_caseD_16:
    if (((((uint)uVar24 >> 0x18 & 0x1f) - 0xe < 6) || (((uint)uVar24 & 0x1f000000) == 0x4000000)) &&
       ((((uint)uVar28 >> 0x18 & 0x1f) - 0xe < 6 || (((uint)uVar28 & 0x1f000000) == 0x4000000)))) {
      sVar31 = (*local_res18 >> 0xb) + 0x1f;
LAB_1804c0aa9:
      uVar13 = FUN_1804e3aa0(param_1,uVar24,uVar28,&local_d8,&local_d0,sVar31);
    }
    else {
      uVar13 = FUN_1804c4480(param_1,&local_d8,*local_res18 >> 0xb);
    }
    break;
  case 0x25:
    if (((5 < (uVar22 >> 0x18 & 0x1f) - 0xe) && ((uVar22 & 0x1f000000) != 0x4000000)) ||
       ((5 < (uVar30 & 0x1f) - 0xe && ((uVar13 & 0x1f000000) != 0x4000000)))) {
      uVar13 = FUN_1804c4480(param_1,&local_d8,0xf);
      break;
    }
    sVar31 = 0x2e;
    goto LAB_1804c0aa9;
  case 0x26:
    uVar13 = FUN_1804c3030(param_1,uVar25,uVar28);
    if (0xfffffeff < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_180484920(*(undefined8 *)(param_1 + 0x80),-uVar13);
    }
    break;
  case 0x27:
  case 0x2a:
  case 0x2b:
  case 0x65:
    break;
  case 0x28:
    uVar13 = FUN_1804a62e0(param_1,*(undefined8 *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x20) +
                                    ~uVar28 * 8),10);
    break;
  case 0x29:
    uVar13 = FUN_1804a6370(param_1,(int)(short)uVar29);
    break;
  case 0x2c:
    if (*(uint *)(param_1 + 0xac) < uVar17) {
      *(undefined4 *)(*plVar1 + (ulonglong)(uVar17 - 1) * 4) = 0;
    }
    if (uVar17 <= uVar13) {
      uVar16 = (uVar13 - uVar17) + 1;
      if (3 < uVar16) {
        plVar26 = (longlong *)(*plVar1 + uVar18 * 4);
        if ((plVar1 < plVar26) || ((longlong *)(*plVar1 + uVar28 * 4) < plVar1)) {
          uVar16 = uVar13 - (uVar16 & 3);
          do {
            uVar21 = (int)uVar18 + 4;
            uVar18 = (ulonglong)uVar21;
          } while (uVar21 <= uVar16);
          for (lVar15 = SUB168((ZEXT416((uVar16 - uVar17) + 4 >> 2) << 4) / ZEXT816(4),0);
              lVar15 != 0; lVar15 = lVar15 + -1) {
            *(undefined4 *)plVar26 = 0x7fff;
            plVar26 = (longlong *)((longlong)plVar26 + 4);
          }
        }
      }
      uVar16 = (uint)uVar18;
      while (uVar16 <= uVar13) {
        uVar16 = (int)uVar18 + 1;
        *(undefined4 *)(*plVar1 + uVar18 * 4) = 0x7fff;
        uVar18 = (ulonglong)uVar16;
      }
    }
    if (*(uint *)(param_1 + 0xac) <= uVar13) {
      *(uint *)(param_1 + 0xac) = uVar13 + 1;
    }
    break;
  case 0x2d:
    uVar13 = FUN_1804c4b50(param_1,uVar28,0);
    break;
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
    FUN_1804c4b50(param_1,uVar18,uVar28);
    break;
  case 0x32:
  case 0x33:
    *(double *)(param_1 + 0xc20) = (double)uVar21;
                    /* WARNING: Subroutine does not return */
    FUN_1804954f0(param_1,7);
  case 0x34:
    *(undefined2 *)(param_1 + 0xbc) = 0x518b;
    uVar9 = (undefined2)(uVar13 & 0x7ff);
    *(short *)(param_1 + 0xba) = (short)(uVar13 >> 0xb);
    if ((uVar13 & 0x7ff) == 0x7ff) {
      uVar9 = 0x801;
    }
    *(undefined2 *)(param_1 + 0xb8) = uVar9;
    uVar13 = FUN_1804d6ae0(param_1);
    break;
  case 0x35:
    uVar9 = FUN_1804a62e0(param_1,*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x20) +
                                   ~uVar28 * 8),0xb);
    *(undefined4 *)(param_1 + 0xba) = 0x528b0000;
    *(undefined2 *)(param_1 + 0xb8) = uVar9;
    uVar13 = FUN_1804d6ae0(param_1);
    break;
  case 0x36:
  case 0x37:
    local_d8 = (double)(*(ulonglong *)(*(longlong *)(param_1 + 0x90) + 0x10) | 0xfffa000000000000);
    uVar9 = FUN_1804bf410(param_1);
    *(undefined4 *)(param_1 + 0xba) = 0x450b0001;
    *(undefined2 *)(param_1 + 0xb8) = uVar9;
    local_a8 = FUN_1804d6ae0(param_1);
  case 0x38:
  case 0x39:
  case 0x3c:
  case 0x3d:
switchD_1804c02b6_caseD_38:
    local_94 = 100;
    uVar13 = FUN_1804bf540(param_1,&local_d8);
    break;
  case 0x3a:
  case 0x3e:
    local_d0 = (double)(int)uVar13;
    local_a4 = FUN_1804a6370(param_1);
    goto switchD_1804c02b6_caseD_38;
  case 0x3b:
  case 0x40:
    local_94 = 0;
    uVar13 = FUN_1804bf540(param_1,&local_d8);
    break;
  case 0x3f:
    iVar14 = local_d0._0_4_;
    local_res10 = *(uint **)(*(longlong *)(param_1 + 0x80) + 0x20);
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x28) - (longlong)local_res10;
    local_90 = (double)(*(ulonglong *)(local_res10 + (ulonglong)(uVar17 - 1) * 2) & 0x7fffffffffff |
                       0xfffa000000000000);
    local_60 = *(uint *)(*plVar1 + (ulonglong)(uVar17 - 1) * 4);
    if (local_60 == 0) {
      local_60 = FUN_1804c5880(param_1,uVar17 - 1);
    }
    puVar4 = local_res10;
    local_4c = 0;
    uVar16 = (uint)(lVar15 >> 3);
    if (uVar17 < uVar16) {
      do {
        local_88 = (double)iVar14;
        local_5c = FUN_1804a6370(param_1,iVar14);
        local_80 = *(undefined8 *)(puVar4 + uVar18 * 2);
        iVar12 = *(int *)(*plVar1 + uVar18 * 4);
        if (iVar12 == 0) {
          local_58 = FUN_1804c5880(param_1,uVar18);
        }
        else {
          local_58 = iVar12;
        }
        FUN_1804bf540(param_1,&local_90);
        iVar14 = iVar14 + 1;
        uVar21 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar21;
      } while (uVar21 < uVar16);
      uVar18 = local_res8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xac) = (int)uVar18;
    break;
  case 0x41:
    uVar28 = (ulonglong)
             (((int)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x28) -
                     *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) >> 3) - uVar17) - 1);
  case 0x42:
    goto switchD_1804c02b6_caseD_42;
  case 0x43:
    uVar28 = (ulonglong)
             (((int)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x28) -
                     *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) >> 3) - uVar17) - 1);
  case 0x44:
    uVar13 = (uint)uVar28;
    FUN_1804c2dc0(param_1,uVar18,uVar28 - 1);
    lVar15 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + -8);
    if (((byte)lVar15 & 7) == 3) {
      piVar2 = (int *)(param_1 + 0xfc);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804954a0(param_1,0x10);
      }
      uVar19 = lVar15 >> 3;
      iVar14 = (int)uVar19;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) - iVar14;
      *plVar1 = *plVar1 + (uVar19 & 0xffffffff) * -4;
      uVar17 = iVar14 + uVar17;
    }
    if (*(int *)(param_1 + 0xb0) == 2) {
      *(undefined4 *)(*plVar1 + (ulonglong)(uVar17 + 1) * 4) = 0x10000;
    }
    FUN_180540530(*plVar1 + -8,*plVar1 + (ulonglong)uVar17 * 4,
                  (ulonglong)(*(int *)(param_1 + 0xac) + 2) << 2);
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    if (*(int *)(param_1 + 0xf4) < *(int *)(param_1 + 0xf8)) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,10);
    }
    break;
  case 0x45:
    iVar14 = *(int *)(*plVar1 + (ulonglong)(uVar17 - 3) * 4);
    if (iVar14 == 0) {
      iVar14 = FUN_1804c5880(param_1);
    }
    *(int *)(*plVar1 + uVar18 * 4) = iVar14;
    iVar14 = *(int *)(*plVar1 + (ulonglong)(uVar17 - 2) * 4);
    if (iVar14 == 0) {
      iVar14 = FUN_1804c5880(param_1);
    }
    *(int *)(*plVar1 + (ulonglong)(uVar17 + 2) * 4) = iVar14;
    iVar14 = *(int *)(*plVar1 + (ulonglong)(uVar17 - 1) * 4);
    if (iVar14 == 0) {
      iVar14 = FUN_1804c5880(param_1);
    }
    *(int *)(*plVar1 + (ulonglong)(uVar17 + 3) * 4) = iVar14;
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20);
    *(undefined8 *)(lVar15 + uVar18 * 8) = *(undefined8 *)(lVar15 + -0x18 + uVar18 * 8);
    *(undefined8 *)(lVar15 + 0x10 + uVar18 * 8) = *(undefined8 *)(lVar15 + -0x10 + uVar18 * 8);
    *(undefined8 *)(lVar15 + 0x18 + uVar18 * 8) = *(undefined8 *)(lVar15 + -8 + uVar18 * 8);
switchD_1804c02b6_caseD_42:
    uVar13 = (uint)uVar28;
    FUN_1804bf460(param_1,uVar18,uVar28 - 1);
    break;
  case 0x46:
    uVar11 = FUN_1804c40d0(param_1,uVar18,uVar25);
    FUN_1804c42d0(param_1,local_res10,uVar11);
    break;
  case 0x47:
    FUN_1804c5000(param_1,uVar18,uVar25 - 1);
    break;
  case 0x48:
    uVar28 = (ulonglong)(uVar17 - 3);
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20);
    uVar19 = *(ulonglong *)(lVar15 + uVar28 * 8);
    if (((((int)((longlong)uVar19 >> 0x2f) != -9) ||
         (*(char *)((uVar19 & 0x7fffffffffff) + 10) != '\x04')) ||
        ((int)((longlong)*(undefined8 *)(lVar15 + 8 + uVar28 * 8) >> 0x2f) != -0xc)) ||
       (*(longlong *)(lVar15 + 0x10 + uVar28 * 8) != -1)) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0);
    }
    iVar14 = *(int *)(*plVar1 + uVar28 * 4);
    uVar9 = (undefined2)iVar14;
    if (iVar14 == 0) {
      uVar9 = FUN_1804c5880(param_1,uVar28);
    }
    *(undefined4 *)(param_1 + 0xba) = 0x45100003;
    *(undefined2 *)(param_1 + 0xb8) = uVar9;
    uVar9 = FUN_1804d6ae0(param_1);
    uVar10 = FUN_1804a6370(param_1,4);
    *(undefined2 *)(param_1 + 0xbc) = 0x893;
    *(undefined2 *)(param_1 + 0xb8) = uVar9;
    *(undefined2 *)(param_1 + 0xba) = uVar10;
    FUN_1804d6ae0(param_1);
    if (*(int *)(*plVar1 + (ulonglong)(uVar17 - 2) * 4) == 0) {
      FUN_1804c5880(param_1);
    }
    if (*(int *)(*plVar1 + (ulonglong)(uVar17 - 1) * 4) == 0) {
      FUN_1804c5880(param_1);
    }
    uVar16 = FUN_1804a6370(param_1,0);
    *(uint *)(*plVar1 + (ulonglong)(uVar17 - 1) * 4) = uVar16 | 0x100000;
    *(uint *)(param_1 + 0xac) = uVar17;
    break;
  case 0x49:
    uVar28 = (ulonglong)
             (((int)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x28) -
                     *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) >> 3) - uVar17) + 1);
  case 0x4a:
  case 0x4b:
  case 0x4c:
    uVar13 = (uint)uVar28;
    if (*(int *)(param_1 + 0xc34) == 0x66) {
      *(undefined4 *)(param_1 + 0xba) = 0x15800000;
      *(undefined2 *)(param_1 + 0xb8) = 0;
      FUN_1804d6ae0(param_1);
      *(undefined8 *)(param_1 + 0xc28) = 0;
      FUN_1804bc6f0(param_1);
    }
    FUN_1804c1f80(param_1,uVar18,uVar28 - 1);
    break;
  case 0x4d:
    iVar14 = FUN_1804c3210(param_1,local_res10,0);
    if (iVar14 != 0) {
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0xc);
    }
    break;
  case 0x4e:
    iVar14 = FUN_1804c3210(param_1,local_res10,0);
    if (iVar14 != 0) {
      FUN_1804c2b90(param_1,1,puVar4[uVar28 - 0x8000] >> 0x10);
    }
    break;
  case 0x4f:
    uVar11 = FUN_1804c3210(param_1,local_res10 + (uVar28 - 0x8000),1);
    FUN_1804c42d0(param_1,puVar4,uVar11);
    break;
  case 0x50:
  case 0x53:
  case 0x56:
  case 0x61:
  case 100:
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,5);
  case 0x51:
    uVar11 = FUN_1804c3210(param_1,local_res10 +
                                   ((ulonglong)
                                    (*(uint *)(*(longlong *)
                                                (*(longlong *)(param_1 + 0x180) + uVar28 * 8) + 0x50
                                              ) >> 0x10) - 0x8000),1);
    FUN_1804c4400(param_1,uVar28,uVar11);
    break;
  case 0x52:
    uVar11 = FUN_1804c4020(param_1,*local_res10);
    FUN_1804c42d0(param_1,puVar4,uVar11);
    break;
  case 0x54:
    uVar11 = FUN_1804c4020(param_1,*(undefined4 *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x180) + uVar28 * 8) +
                                    0x50));
    FUN_1804c4400(param_1,uVar28,uVar11);
    break;
  case 0x55:
    if (uVar17 < *(uint *)(param_1 + 0xac)) {
      *(uint *)(param_1 + 0xac) = uVar17;
    }
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 4;
    FUN_1804c42d0(param_1,local_res10,2);
    break;
  case 0x57:
    uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x180) + uVar28 * 8) + 0x50) & 0xff;
    if ((uVar16 - 0x49 < 4) || (uVar16 == 0x46)) {
      lVar15 = 0;
    }
    else {
      lVar15 = 4;
    }
    if (uVar17 < *(uint *)(param_1 + 0xac)) {
      *(uint *)(param_1 + 0xac) = uVar17;
    }
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + lVar15;
    FUN_1804c4400(param_1,uVar28,2);
    break;
  case 0x58:
    if (uVar17 < *(uint *)(param_1 + 0xac)) {
      *(uint *)(param_1 + 0xac) = uVar17;
    }
    break;
  case 0x59:
    if ((uVar13 & 0x1f000000) == 0xa000000) {
      uVar13 = FUN_1804df9e0(param_1,uVar28,0,&local_d0,0,0x1f);
    }
    else {
      uVar9 = FUN_1804e3f60(param_1);
      *(undefined4 *)(param_1 + 0xba) = 0x1f130000;
      *(undefined2 *)(param_1 + 0xb8) = uVar9;
      uVar13 = FUN_1804d6ae0(param_1);
    }
    break;
  case 0x5a:
  case 0x5b:
  case 0x5c:
    if (((uVar22 & 0x1f000000) == 0xa000000) || ((uVar13 & 0x1f000000) == 0xa000000)) {
      uVar13 = FUN_1804df9e0(param_1,uVar25,uVar28,&local_d8,&local_d0,uVar21 - 0x39);
      break;
    }
    goto LAB_1804c0c89;
  case 0x5d:
  case 0x5e:
  case 0x5f:
    local_res8 = CONCAT44(local_res8._4_4_,uVar22);
    local_res10 = (uint *)CONCAT44(local_res10._4_4_,uVar13);
    iVar14 = FUN_1804dfd80(param_1,&local_res8,&local_res10,&local_d8,&local_d0,uVar21 - 0x39);
    if (iVar14 != 0) {
      uVar13 = (uint)local_res8;
      break;
    }
    uVar28 = (ulonglong)local_res10 & 0xffffffff;
LAB_1804c0c89:
    uVar9 = FUN_1804e3f60(param_1,uVar25);
    uVar10 = FUN_1804e3f60(param_1,uVar28);
    *(undefined2 *)(param_1 + 0xb8) = uVar9;
    *(undefined2 *)(param_1 + 0xba) = uVar10;
    *(ushort *)(param_1 + 0xbc) = ((short)uVar19 + -0x39) * 0x100 | 0x13;
    uVar13 = FUN_1804d6ae0(param_1);
    break;
  case 0x60:
    goto switchD_1804c02b6_caseD_60;
  case 0x62:
    FUN_1804c3a30(param_1);
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x180) + uVar28 * 8);
    if (*(char *)(lVar15 + 0x74) == '\a') {
      FUN_1804befd0(param_1,uVar28);
      puVar6 = *(undefined4 **)(param_1 + 0x88);
      *(undefined4 *)(param_1 + 0xbe0) = *puVar6;
      *(undefined4 **)(param_1 + 0xbd8) = puVar6;
      *puVar6 = *(undefined4 *)(lVar15 + 0x50);
    }
    else {
      *(undefined4 *)(param_1 + 0xf0) = 0;
      if ((*(longlong *)(param_1 + 0x88) == *(longlong *)(param_1 + 0xbc0)) &&
         (*(int *)(param_1 + 0x100) + *(int *)(param_1 + 0xfc) == 0)) {
        FUN_1804c2b90(param_1,3,*(undefined2 *)(param_1 + 0x68));
      }
      else {
        FUN_1804c2b90(param_1,1,uVar28);
      }
    }
    break;
  case 99:
    lVar15 = *(longlong *)(param_1 + 0x98);
    uVar16 = *(uint *)(param_1 + 0xac);
    if (0xf9 < uVar16 + 2 + (uint)*(byte *)(lVar15 + 0xb) + *(int *)(param_1 + 0xb0)) {
LAB_1804c176e:
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,3);
    }
    *(undefined4 *)(*plVar1 + (ulonglong)uVar16 * 4) = *(undefined4 *)(*plVar1 + -8);
    *(undefined4 *)(*plVar1 + (ulonglong)(uVar16 + 1) * 4) = 0x10000;
    uVar21 = (uint)*(byte *)(lVar15 + 10);
    if (*(uint *)(param_1 + 0xac) <= uVar21) {
      uVar21 = *(uint *)(param_1 + 0xac);
    }
    uVar19 = 0;
    if (uVar21 != 0) {
      do {
        *(undefined4 *)(*plVar1 + (ulonglong)((int)uVar19 + uVar16 + 2) * 4) =
             *(undefined4 *)(*plVar1 + uVar19 * 4);
        *(undefined4 *)(*plVar1 + uVar19 * 4) = 0x7fff;
        uVar30 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar30;
      } while (uVar30 < uVar21);
    }
    *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
    *plVar1 = *plVar1 + (ulonglong)(uVar16 + 2) * 4;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + uVar16 + 2;
    *(uint *)(param_1 + 0xac) = uVar21;
switchD_1804c02b6_caseD_60:
    FUN_1804c3a30(param_1);
    FUN_1804befd0(param_1,0);
    break;
  default:
    FUN_1804db4a0(param_1);
  }
switchD_1804c02b6_caseD_27:
  if (((*local_res18 & 7) == 1) && (uVar13 != 0)) {
    uVar16 = (uint)uVar18;
    *(uint *)(*plVar1 + uVar18 * 4) = uVar13;
    if (*(uint *)(param_1 + 0xac) <= uVar16) {
      if (*(uint *)(param_1 + 0xac) < uVar16) {
        *(undefined4 *)(*plVar1 + (ulonglong)(uVar16 - 1) * 4) = 0;
      }
      *(uint *)(param_1 + 0xac) = uVar16 + 1;
    }
  }
  if ((*(int *)(param_1 + 0x668) + 0x8001U < *(uint *)(param_1 + 0xc)) ||
     (*(uint *)(param_1 + 0x28) < 0x8000U - *(int *)(param_1 + 0x66c))) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,2);
  }
  return;
}



/* ===== 1804c1910 FUN_1804c1910 ===== */

bool FUN_1804c1910(longlong param_1,ulonglong *param_2,int param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong local_98;
  ulonglong local_90;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_54;
  
  uVar12 = (uint)param_2[6] & 0x1f000000;
  uVar3 = (undefined2)param_2[6];
  if (uVar12 == 0xb000000) {
    uVar10 = *(ulonglong *)((*param_2 & 0x7fffffffffff) + 0x20);
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    *(undefined4 *)(param_1 + 0xba) = 0x450b0005;
    local_68 = FUN_1804d6ae0(param_1);
LAB_1804c197d:
    uVar6 = 0x7fff;
    if (uVar10 != 0) {
      uVar6 = local_68;
    }
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar6;
    uVar3 = FUN_1804a64b0(param_1,0xb);
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    uVar3 = 0x88b;
    if (uVar10 != 0) {
      uVar3 = 0x98b;
    }
    *(undefined2 *)(param_1 + 0xbc) = uVar3;
    *(undefined2 *)(param_1 + 0xb8) = (undefined2)local_68;
    FUN_1804d6ae0(param_1);
    if (uVar10 != 0) {
LAB_1804c1b8a:
      uVar2 = *(ulonglong *)(param_1 + -0x138 + (longlong)param_3 * 8);
      puVar7 = (ulonglong *)FUN_180492860(uVar10,uVar2);
      if ((puVar7 != (ulonglong *)0x0) && (*puVar7 != 0xffffffffffffffff)) {
        param_2[3] = *puVar7;
      }
      param_2[4] = uVar10;
      local_98 = uVar10 | 0xfffa000000000000;
      local_90 = uVar2 | 0xfffd800000000000;
      local_64 = FUN_1804a62e0(param_1,uVar2,4);
      local_60 = 0;
      local_54 = 0;
      uVar12 = FUN_1804bf540(param_1,&local_98);
      *(uint *)(param_2 + 8) = uVar12;
      return (uVar12 & 0x1f000000) != 0;
    }
  }
  else {
    if (uVar12 == 0xc000000) {
      cVar1 = *(char *)((*param_2 & 0x7fffffffffff) + 10);
      uVar10 = *(ulonglong *)((*param_2 & 0x7fffffffffff) + 0x20);
      *(undefined2 *)(param_1 + 0xb8) = uVar3;
      *(undefined4 *)(param_1 + 0xba) = 0x450b000b;
      local_68 = FUN_1804d6ae0(param_1);
      if (cVar1 == '\0') goto LAB_1804c197d;
      if (cVar1 == '\x02') {
        uVar3 = FUN_1804a66d0(param_1,0x19,*param_2 & 0x7fffffffffff);
        *(short *)(param_1 + 0xb8) = (short)param_2[6];
        *(undefined2 *)(param_1 + 0xbc) = 0x889;
        *(undefined2 *)(param_1 + 0xba) = uVar3;
        FUN_1804d6ae0(param_1);
      }
      else {
        *(short *)(param_1 + 0xb8) = (short)param_2[6];
        *(undefined4 *)(param_1 + 0xba) = 0x4510000c;
        uVar3 = FUN_1804d6ae0(param_1);
        uVar4 = FUN_1804a6370(param_1,cVar1);
        *(undefined2 *)(param_1 + 0xbc) = 0x893;
        *(undefined2 *)(param_1 + 0xb8) = uVar3;
        *(undefined2 *)(param_1 + 0xba) = uVar4;
        FUN_1804d6ae0(param_1);
      }
    }
    else {
      uVar11 = 0xd;
      uVar9 = (uint)((longlong)*param_2 >> 0x2f);
      if (uVar9 < 0xfffffff3) {
        uVar5 = 0xd;
      }
      else {
        uVar5 = ~uVar9;
      }
      uVar10 = *(ulonglong *)(param_1 + -0x138 + (ulonglong)(uVar5 + 0x16) * 8);
      if (uVar10 == 0) {
        *(undefined4 *)((longlong)param_2 + 0x3c) = 0x7fff;
        return false;
      }
      if (uVar12 != 0xa000000) {
        if (0xfffffff2 < uVar9) {
          uVar11 = ~uVar9;
        }
        local_68 = FUN_1804a6000(param_1,0xb,(longlong)(int)(uVar11 * 8 + 0x2c0));
        *(undefined4 *)((longlong)param_2 + 0x3c) = local_68;
        goto LAB_1804c1b8a;
      }
      local_68 = 0x7fff;
    }
    puVar7 = (ulonglong *)
             FUN_180492860(uVar10,*(undefined8 *)(param_1 + -0x138 + (longlong)param_3 * 8));
    *(undefined4 *)((longlong)param_2 + 0x3c) = local_68;
    param_2[4] = uVar10;
    if ((puVar7 != (ulonglong *)0x0) && (uVar10 = *puVar7, uVar10 != 0xffffffffffffffff)) {
      iVar8 = (int)((longlong)uVar10 >> 0x2f);
      if ((iVar8 != -9) && (iVar8 != -0xc)) {
                    /* WARNING: Subroutine does not return */
        FUN_1804954a0(param_1,0xb);
      }
      param_2[3] = uVar10;
      uVar6 = 0xb;
      if ((int)((longlong)*puVar7 >> 0x2f) == -9) {
        uVar6 = 8;
      }
      uVar6 = FUN_1804a62e0(param_1,*puVar7 & 0x7fffffffffff,uVar6);
      *(undefined4 *)(param_2 + 8) = uVar6;
      return true;
    }
  }
  return false;
}



