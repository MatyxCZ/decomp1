/* Ghidra decompiler output; generated pseudocode, not original or buildable source.
 * Input: newnl.dll
 * SHA-256: 03c8ab74b4318cf17c87be8b39f4d868dba4ee1aa45d60fe38ab781a54b3eb57
 * Addresses are virtual addresses in the imported image.
 */

/* ===== 180001000 FUN_180001000 ===== */

void FUN_180001000(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong in_RAX;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong unaff_RBX;
  longlong unaff_RSI;
  uint *puVar11;
  ulonglong uVar12;
  undefined8 *unaff_RDI;
  int iStackX_20;
  longlong in_stack_00000058;
  
  dVar5 = *(double *)(param_2 + param_1 * 8);
  dVar6 = *(double *)(param_2 + in_RAX * 8);
  if (((uint)((longlong)dVar5 >> 0x2f) < 0xfffffff2) &&
     ((uint)((longlong)dVar6 >> 0x2f) < 0xfffffff2)) {
    puVar11 = (uint *)(unaff_RSI + 4);
    if (dVar5 < dVar6) {
      puVar11 = (uint *)(unaff_RSI + -0x1fffc + (ulonglong)*(ushort *)(unaff_RSI + 2) * 4);
    }
                    /* WARNING: Could not recover jumptable at 0x000180001058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_RBX + (ulonglong)(*puVar11 & 0xff) * 8))(*puVar11 >> 8 & 0xff);
    return;
  }
  uVar3 = *(ushort *)(unaff_RSI + -2);
  bVar2 = *(byte *)(unaff_RSI + -3);
  *(longlong *)(in_stack_00000058 + 0x20) = param_2;
  puVar9 = (undefined8 *)
           FUN_180494740(in_stack_00000058,param_2 + (ulonglong)bVar2 * 8,
                         param_2 + (ulonglong)uVar3 * 8,*(undefined1 *)(unaff_RSI + -4));
  lVar8 = *(longlong *)(in_stack_00000058 + 0x20);
  if (puVar9 < (undefined8 *)0x2) {
    puVar11 = (uint *)(unaff_RSI + 4);
    if (puVar9 != (undefined8 *)0x0) {
      puVar11 = (uint *)(unaff_RSI + -0x1fffc + (ulonglong)*(ushort *)(unaff_RSI + 2) * 4);
    }
                    /* WARNING: Could not recover jumptable at 0x00018000366b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_RBX + (ulonglong)(*puVar11 & 0xff) * 8))(*puVar11 >> 8 & 0xff);
    return;
  }
  puVar9[-3] = unaff_RSI;
  lVar1 = (longlong)puVar9 + (2 - lVar8);
  if ((int)((longlong)puVar9[-2] >> 0x2f) == -9) {
    puVar9[-1] = lVar1;
    uVar4 = **(uint **)((puVar9[-2] & 0x7fffffffffff) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000180003346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_RBX + (ulonglong)(uVar4 & 0xff) * 8))(uVar4 >> 8 & 0xff);
    return;
  }
  iStackX_20 = 3;
  *(longlong *)(in_stack_00000058 + 0x20) = lVar8;
  FUN_1804942f0(in_stack_00000058,puVar9 + -2,puVar9 + 2);
  puVar10 = *(undefined8 **)(in_stack_00000058 + 0x20);
  if (unaff_RDI != puVar10) {
    puVar9[-1] = lVar1;
    uVar4 = **(uint **)((puVar9[-2] & 0x7fffffffffff) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000180003865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_RBX + (ulonglong)(uVar4 & 0xff) * 8))(uVar4 >> 8 & 0xff);
    return;
  }
  if (((puVar10[-1] & 3) != 0) && (uVar12 = puVar10[-1] - 3, (uVar12 & 7) == 0)) {
    puVar10 = (undefined8 *)((longlong)puVar10 - uVar12);
    unaff_RDI = puVar10;
  }
  puVar10[-2] = puVar9[-2];
  do {
    uVar7 = *puVar9;
    puVar9 = puVar9 + 1;
    *unaff_RDI = uVar7;
    unaff_RDI = unaff_RDI + 1;
    iStackX_20 = iStackX_20 + -1;
  } while (iStackX_20 != 0);
  uVar4 = **(uint **)((puVar10[-2] & 0x7fffffffffff) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00018000248b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_RBX + (ulonglong)(uVar4 & 0xff) * 8))(uVar4 >> 8 & 0xff);
  return;
}



/* ===== 180003147 FUN_180003147 ===== */

undefined4 FUN_180003147(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10) + 0xb8) = 0xfffffffe;
  return param_2;
}



/* ===== 18000329c FUN_18000329c ===== */

void FUN_18000329c(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_48 [32];
  uint uStack_28;
  
  lVar8 = *(longlong *)(param_1 + 0x10);
  puVar9 = *(undefined8 **)(param_1 + 0x50);
  lVar5 = lVar8 + 4000;
  *(undefined1 **)(param_1 + 0x50) = auStack_48;
  *(longlong *)(lVar8 + 0x178) = param_1;
  *(undefined4 *)(lVar8 + 0xb8) = 0xffffffff;
  lVar8 = (longlong)param_2 + (5 - *(longlong *)(param_1 + 0x20));
  uStack_28 = ((uint)((int)*(undefined8 *)(param_1 + 0x28) - (int)param_2) >> 3) + 1;
  if ((int)((longlong)param_2[-2] >> 0x2f) == -9) {
    param_2[-1] = lVar8;
    uVar1 = **(uint **)((param_2[-2] & 0x7fffffffffff) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000180003346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + (ulonglong)(uVar1 & 0xff) * 8))(uVar1 >> 8 & 0xff);
    return;
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20);
  FUN_1804942f0(param_1,param_2 + -2,param_2 + ((ulonglong)uStack_28 - 1));
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  uVar6 = param_2[-2];
  iVar3 = uStack_28 + 1;
  if (puVar9 != puVar4) {
    param_2[-1] = lVar8;
    uVar1 = **(uint **)((uVar6 & 0x7fffffffffff) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000180003865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + (ulonglong)(uVar1 & 0xff) * 8))(uVar1 >> 8 & 0xff);
    return;
  }
  if (((puVar4[-1] & 3) != 0) && (uVar7 = puVar4[-1] - 3, (uVar7 & 7) == 0)) {
    puVar4 = (undefined8 *)((longlong)puVar4 - uVar7);
    puVar9 = puVar4;
  }
  puVar4[-2] = uVar6;
  if (uStack_28 != 0) {
    do {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *puVar9 = uVar2;
      puVar9 = puVar9 + 1;
      uStack_28 = uStack_28 - 1;
    } while (uStack_28 != 0);
    uVar6 = puVar4[-2];
  }
  uVar1 = **(uint **)((uVar6 & 0x7fffffffffff) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00018000248b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uStack_28 = iVar3;
  (**(code **)(lVar5 + (ulonglong)(uVar1 & 0xff) * 8))(uVar1 >> 8 & 0xff);
  return;
}



/* ===== 1800032b0 FUN_1800032b0 ===== */

void FUN_1800032b0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_48 [32];
  uint uStack_28;
  
  lVar8 = *(longlong *)(param_1 + 0x10);
  puVar9 = *(undefined8 **)(param_1 + 0x50);
  lVar5 = lVar8 + 4000;
  *(undefined1 **)(param_1 + 0x50) = auStack_48;
  *(longlong *)(lVar8 + 0x178) = param_1;
  *(undefined4 *)(lVar8 + 0xb8) = 0xffffffff;
  lVar8 = (longlong)param_2 + (1 - *(longlong *)(param_1 + 0x20));
  uStack_28 = ((uint)((int)*(undefined8 *)(param_1 + 0x28) - (int)param_2) >> 3) + 1;
  if ((int)((longlong)param_2[-2] >> 0x2f) == -9) {
    param_2[-1] = lVar8;
    uVar1 = **(uint **)((param_2[-2] & 0x7fffffffffff) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000180003346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + (ulonglong)(uVar1 & 0xff) * 8))(uVar1 >> 8 & 0xff);
    return;
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20);
  FUN_1804942f0(param_1,param_2 + -2,param_2 + ((ulonglong)uStack_28 - 1));
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  uVar6 = param_2[-2];
  iVar3 = uStack_28 + 1;
  if (puVar9 != puVar4) {
    param_2[-1] = lVar8;
    uVar1 = **(uint **)((uVar6 & 0x7fffffffffff) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000180003865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + (ulonglong)(uVar1 & 0xff) * 8))(uVar1 >> 8 & 0xff);
    return;
  }
  if (((puVar4[-1] & 3) != 0) && (uVar7 = puVar4[-1] - 3, (uVar7 & 7) == 0)) {
    puVar4 = (undefined8 *)((longlong)puVar4 - uVar7);
    puVar9 = puVar4;
  }
  puVar4[-2] = uVar6;
  if (uStack_28 != 0) {
    do {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *puVar9 = uVar2;
      puVar9 = puVar9 + 1;
      uStack_28 = uStack_28 - 1;
    } while (uStack_28 != 0);
    uVar6 = puVar4[-2];
  }
  uVar1 = **(uint **)((uVar6 & 0x7fffffffffff) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00018000248b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uStack_28 = iVar3;
  (**(code **)(lVar5 + (ulonglong)(uVar1 & 0xff) * 8))(uVar1 >> 8 & 0xff);
  return;
}



/* ===== 180003349 FUN_180003349 ===== */

undefined8 FUN_180003349(longlong param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_48 [32];
  uint uStack_28;
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  lVar6 = lVar9 + 4000;
  puVar10 = *(undefined8 **)(param_1 + 0x50);
  *(undefined1 **)(param_1 + 0x50) = auStack_48;
  *(longlong *)(lVar9 + 0x178) = param_1;
  puVar4 = (undefined8 *)(*param_4)();
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x50) = puVar10;
    return 0;
  }
  *(longlong *)(lVar9 + 0x178) = param_1;
  *(undefined4 *)(lVar9 + 0xb8) = 0xffffffff;
  lVar9 = (longlong)puVar4 + (5 - *(longlong *)(param_1 + 0x20));
  uStack_28 = ((uint)((int)*(undefined8 *)(param_1 + 0x28) - (int)puVar4) >> 3) + 1;
  if ((int)((longlong)puVar4[-2] >> 0x2f) == -9) {
    puVar4[-1] = lVar9;
    uVar1 = **(uint **)((puVar4[-2] & 0x7fffffffffff) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000180003346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(lVar6 + (ulonglong)(uVar1 & 0xff) * 8))(uVar1 >> 8 & 0xff);
    return uVar3;
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20);
  FUN_1804942f0(param_1,puVar4 + -2,puVar4 + ((ulonglong)uStack_28 - 1));
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  uVar7 = puVar4[-2];
  iVar2 = uStack_28 + 1;
  if (puVar10 != puVar5) {
    puVar4[-1] = lVar9;
    uVar1 = **(uint **)((uVar7 & 0x7fffffffffff) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000180003865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(lVar6 + (ulonglong)(uVar1 & 0xff) * 8))(uVar1 >> 8 & 0xff);
    return uVar3;
  }
  if (((puVar5[-1] & 3) != 0) && (uVar8 = puVar5[-1] - 3, (uVar8 & 7) == 0)) {
    puVar5 = (undefined8 *)((longlong)puVar5 - uVar8);
    puVar10 = puVar5;
  }
  puVar5[-2] = uVar7;
  if (uStack_28 != 0) {
    do {
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar10 = uVar3;
      puVar10 = puVar10 + 1;
      uStack_28 = uStack_28 - 1;
    } while (uStack_28 != 0);
    uVar7 = puVar5[-2];
  }
  uVar1 = **(uint **)((uVar7 & 0x7fffffffffff) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00018000248b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uStack_28 = iVar2;
  uVar3 = (**(code **)(lVar6 + (ulonglong)(uVar1 & 0xff) * 8))(uVar1 >> 8 & 0xff);
  return uVar3;
}



/* ===== 18000515f FUN_18000515f ===== */

double FUN_18000515f(double param_1)

{
  double dVar1;
  
  if (ABS(param_1) < 4503599627370496.0) {
    dVar1 = (double)((ulonglong)((ABS(param_1) + 4503599627370496.0) - 4503599627370496.0) |
                    (ulonglong)param_1 & 0x8000000000000000);
    param_1 = dVar1 - (double)(-(ulonglong)(param_1 < dVar1) & 0x3ff0000000000000);
  }
  return param_1;
}



/* ===== 1800051ba FUN_1800051ba ===== */

double FUN_1800051ba(double param_1)

{
  double dVar1;
  
  if (ABS(param_1) < 4503599627370496.0) {
    dVar1 = (double)((ulonglong)((ABS(param_1) + 4503599627370496.0) - 4503599627370496.0) |
                    (ulonglong)param_1 & 0x8000000000000000);
    param_1 = (double)((ulonglong)
                       (dVar1 + (double)(-(ulonglong)(dVar1 < param_1) & 0x3ff0000000000000)) |
                      (ulonglong)param_1 & 0x8000000000000000);
  }
  return param_1;
}



/* ===== 180005219 FUN_180005219 ===== */

double FUN_180005219(double param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = ABS(param_1);
  if (dVar1 < 4503599627370496.0) {
    dVar2 = (dVar1 + 4503599627370496.0) - 4503599627370496.0;
    param_1 = (double)((ulonglong)
                       (dVar2 - (double)(-(ulonglong)(dVar1 < dVar2) & 0x3ff0000000000000)) |
                      (ulonglong)param_1 & 0x8000000000000000);
  }
  return param_1;
}



/* ===== 1800052ed FUN_1800052ed ===== */

ulonglong FUN_1800052ed(double param_1)

{
  if ((double)(int)param_1 == param_1) {
    return (ulonglong)(uint)(int)param_1;
  }
  return 0x8000000080000000;
}



/* ===== 18000530c FUN_18000530c ===== */

longlong FUN_18000530c(double param_1)

{
  return (longlong)param_1;
}



/* ===== 180005312 FUN_180005312 ===== */

longlong FUN_180005312(double param_1)

{
  if (SBORROW8((longlong)param_1,1)) {
    return (longlong)(param_1 + -1.8446744073709552e+19);
  }
  return (longlong)param_1;
}



/* ===== 180005337 FUN_180005337 ===== */

ulonglong FUN_180005337(double param_1)

{
  return (ulonglong)(param_1 + 6755399441055744.0) & 0xffffffff;
}



/* ===== 18000534f FUN_18000534f ===== */

void FUN_18000534f(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)cpuid_basic_info(0);
  }
  else if (param_1 == 1) {
    puVar1 = (undefined4 *)cpuid_Version_info(1);
  }
  else if (param_1 == 2) {
    puVar1 = (undefined4 *)cpuid_cache_tlb_info(2);
  }
  else if (param_1 == 3) {
    puVar1 = (undefined4 *)cpuid_serial_info(3);
  }
  else if (param_1 == 4) {
    puVar1 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (param_1 == 5) {
    puVar1 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (param_1 == 6) {
    puVar1 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
  }
  else if (param_1 == 7) {
    puVar1 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (param_1 == 9) {
    puVar1 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
  }
  else if (param_1 == 10) {
    puVar1 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (param_1 == 0xb) {
    puVar1 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
  }
  else if (param_1 == 0xd) {
    puVar1 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
  }
  else if (param_1 == 0xf) {
    puVar1 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
  }
  else if (param_1 == -0x7ffffffe) {
    puVar1 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
  }
  else if (param_1 == -0x7ffffffd) {
    puVar1 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
  }
  else if (param_1 == -0x7ffffffc) {
    puVar1 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
  }
  else {
    puVar1 = (undefined4 *)cpuid(param_1);
  }
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar4;
  param_2[3] = uVar3;
  return;
}



/* ===== 180005499 FUN_180005499 ===== */

void FUN_180005499(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *in_RCX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 auStackX_10 [3];
  undefined8 uStack_18;
  
  uVar1 = *(uint *)(in_RCX + 1);
  uVar4 = (uint)*(byte *)((longlong)in_RCX + 0xc);
  while (uVar4 = uVar4 - 8, -1 < (int)uVar4) {
    *(undefined8 *)((longlong)auStackX_10 + (ulonglong)uVar4 + -(ulonglong)uVar1) =
         *(undefined8 *)((longlong)in_RCX + (ulonglong)uVar4 + 0x70);
  }
  if (*(char *)((longlong)in_RCX + 0xf) != '\0') {
    param_1 = *(undefined4 *)(in_RCX + 2);
    param_2 = *(undefined4 *)(in_RCX + 4);
    param_3 = *(undefined4 *)(in_RCX + 6);
    param_4 = *(undefined4 *)(in_RCX + 8);
  }
  pcVar2 = (code *)*in_RCX;
  *(undefined8 *)((longlong)auStackX_10 + -(ulonglong)uVar1 + -0x28) = 0x1800054e9;
  uVar3 = (*pcVar2)(param_1,param_2,param_3,param_4);
  in_RCX[10] = uVar3;
  *(undefined4 *)(in_RCX + 2) = extraout_XMM0_Da;
  *(undefined4 *)((longlong)in_RCX + 0x14) = extraout_XMM0_Db;
  *(undefined4 *)(in_RCX + 3) = extraout_XMM0_Dc;
  *(undefined4 *)((longlong)in_RCX + 0x1c) = extraout_XMM0_Dd;
  return;
}



/* ===== 180005550 FUN_180005550 ===== */

void FUN_180005550(void)

{
  FUN_180023b90(&DAT_180ca0be0);
  FUN_1804ece40(FUN_180564bc0);
  return;
}



/* ===== 1800055e0 FUN_1800055e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800055e0(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x48);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cc3fb8 = (longlong *)0x0;
  _DAT_180cc3fc0 = (longlong *)0x0;
  DAT_180cc3fc8 = (longlong *)0x0;
  DAT_180cc3fd0 = 7;
  DAT_180cc3fd8 = 8;
  DAT_180cc3fa0 = 0x3f800000;
  DAT_180cc3fa8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cc3fc8 - (longlong)DAT_180cc3fb8 == 0) goto LAB_180005696;
  lVar5 = (longlong)DAT_180cc3fb8;
  if ((ulonglong)(((longlong)DAT_180cc3fc8 - (longlong)DAT_180cc3fb8 >> 3) * 8) < 0x1000) {
LAB_18000568e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cc3fb8 + -8);
    if (0x1f < ((longlong)DAT_180cc3fb8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000568e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180005696;
  thunk_FUN_1803d64e0(lVar5);
LAB_180005696:
  plVar1 = plVar4 + 0x10;
  _DAT_180cc3fc0 = plVar1;
  DAT_180cc3fc8 = plVar1;
  DAT_180cc3fb8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180564c50);
  return;
}



/* ===== 1800056f0 FUN_1800056f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800056f0(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x20);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cc3f18 = (longlong *)0x0;
  _DAT_180cc3f20 = (longlong *)0x0;
  DAT_180cc3f28 = (longlong *)0x0;
  DAT_180cc3f30 = 7;
  DAT_180cc3f38 = 8;
  DAT_180cc3f00 = 0x3f800000;
  DAT_180cc3f08 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cc3f28 - (longlong)DAT_180cc3f18 == 0) goto LAB_1800057a6;
  lVar5 = (longlong)DAT_180cc3f18;
  if ((ulonglong)(((longlong)DAT_180cc3f28 - (longlong)DAT_180cc3f18 >> 3) * 8) < 0x1000) {
LAB_18000579e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cc3f18 + -8);
    if (0x1f < ((longlong)DAT_180cc3f18 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000579e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800057a6;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800057a6:
  plVar1 = plVar4 + 0x10;
  _DAT_180cc3f20 = plVar1;
  DAT_180cc3f28 = plVar1;
  DAT_180cc3f18 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180564c70);
  return;
}



/* ===== 180005800 FUN_180005800 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180005800(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x20);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cc40b8 = (longlong *)0x0;
  _DAT_180cc40c0 = (longlong *)0x0;
  DAT_180cc40c8 = (longlong *)0x0;
  DAT_180cc40d0 = 7;
  DAT_180cc40d8 = 8;
  DAT_180cc40a0 = 0x3f800000;
  DAT_180cc40a8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cc40c8 - (longlong)DAT_180cc40b8 == 0) goto LAB_1800058b6;
  lVar5 = (longlong)DAT_180cc40b8;
  if ((ulonglong)(((longlong)DAT_180cc40c8 - (longlong)DAT_180cc40b8 >> 3) * 8) < 0x1000) {
LAB_1800058ae:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cc40b8 + -8);
    if (0x1f < ((longlong)DAT_180cc40b8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_1800058ae;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800058b6;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800058b6:
  plVar1 = plVar4 + 0x10;
  _DAT_180cc40c0 = plVar1;
  DAT_180cc40c8 = plVar1;
  DAT_180cc40b8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180564c90);
  return;
}



/* ===== 180005910 FUN_180005910 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180005910(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x30);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cc3ed8 = (longlong *)0x0;
  _DAT_180cc3ee0 = (longlong *)0x0;
  DAT_180cc3ee8 = (longlong *)0x0;
  DAT_180cc3ef0 = 7;
  DAT_180cc3ef8 = 8;
  DAT_180cc3ec0 = 0x3f800000;
  DAT_180cc3ec8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cc3ee8 - (longlong)DAT_180cc3ed8 == 0) goto LAB_1800059c6;
  lVar5 = (longlong)DAT_180cc3ed8;
  if ((ulonglong)(((longlong)DAT_180cc3ee8 - (longlong)DAT_180cc3ed8 >> 3) * 8) < 0x1000) {
LAB_1800059be:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cc3ed8 + -8);
    if (0x1f < ((longlong)DAT_180cc3ed8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_1800059be;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800059c6;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800059c6:
  plVar1 = plVar4 + 0x10;
  _DAT_180cc3ee0 = plVar1;
  DAT_180cc3ee8 = plVar1;
  DAT_180cc3ed8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180564cb0);
  return;
}



/* ===== 180005a20 FUN_180005a20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180005a20(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x28);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cc3f58 = (longlong *)0x0;
  _DAT_180cc3f60 = (longlong *)0x0;
  DAT_180cc3f68 = (longlong *)0x0;
  DAT_180cc3f70 = 7;
  DAT_180cc3f78 = 8;
  DAT_180cc3f40 = 0x3f800000;
  DAT_180cc3f48 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cc3f68 - (longlong)DAT_180cc3f58 == 0) goto LAB_180005ad6;
  lVar5 = (longlong)DAT_180cc3f58;
  if ((ulonglong)(((longlong)DAT_180cc3f68 - (longlong)DAT_180cc3f58 >> 3) * 8) < 0x1000) {
LAB_180005ace:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cc3f58 + -8);
    if (0x1f < ((longlong)DAT_180cc3f58 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180005ace;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180005ad6;
  thunk_FUN_1803d64e0(lVar5);
LAB_180005ad6:
  plVar1 = plVar4 + 0x10;
  _DAT_180cc3f60 = plVar1;
  DAT_180cc3f68 = plVar1;
  DAT_180cc3f58 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180564cd0);
  return;
}



/* ===== 180005b30 FUN_180005b30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180005b30(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x20);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cc3ff8 = (longlong *)0x0;
  _DAT_180cc4000 = (longlong *)0x0;
  DAT_180cc4008 = (longlong *)0x0;
  DAT_180cc4010 = 7;
  DAT_180cc4018 = 8;
  DAT_180cc3fe0 = 0x3f800000;
  DAT_180cc3fe8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cc4008 - (longlong)DAT_180cc3ff8 == 0) goto LAB_180005be6;
  lVar5 = (longlong)DAT_180cc3ff8;
  if ((ulonglong)(((longlong)DAT_180cc4008 - (longlong)DAT_180cc3ff8 >> 3) * 8) < 0x1000) {
LAB_180005bde:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cc3ff8 + -8);
    if (0x1f < ((longlong)DAT_180cc3ff8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180005bde;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180005be6;
  thunk_FUN_1803d64e0(lVar5);
LAB_180005be6:
  plVar1 = plVar4 + 0x10;
  _DAT_180cc4000 = plVar1;
  DAT_180cc4008 = plVar1;
  DAT_180cc3ff8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180564cf0);
  return;
}



/* ===== 180005c40 FUN_180005c40 ===== */

void FUN_180005c40(void)

{
  FUN_180023b90(&DAT_180ca0a60);
  FUN_1804ece40(FUN_180564d10);
  return;
}



/* ===== 180005c70 FUN_180005c70 ===== */

void FUN_180005c70(void)

{
  FUN_180023e90(&DAT_180ca0aa0);
  FUN_1804ece40(FUN_180564d40);
  return;
}



/* ===== 180005c90 FUN_180005c90 ===== */

void FUN_180005c90(void)

{
  FUN_180023e90(&DAT_180ca0b60);
  FUN_1804ece40(FUN_180564d60);
  return;
}



/* ===== 180005cb0 FUN_180005cb0 ===== */

void FUN_180005cb0(void)

{
  FUN_180023e90(&DAT_180ca0ae0);
  FUN_1804ece40(FUN_180564d80);
  return;
}



/* ===== 180005cf0 FUN_180005cf0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180005cf0(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x28);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cc3e98 = (longlong *)0x0;
  _DAT_180cc3ea0 = (longlong *)0x0;
  DAT_180cc3ea8 = (longlong *)0x0;
  DAT_180cc3eb0 = 7;
  DAT_180cc3eb8 = 8;
  DAT_180cc3e80 = 0x3f800000;
  DAT_180cc3e88 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cc3ea8 - (longlong)DAT_180cc3e98 == 0) goto LAB_180005da6;
  lVar5 = (longlong)DAT_180cc3e98;
  if ((ulonglong)(((longlong)DAT_180cc3ea8 - (longlong)DAT_180cc3e98 >> 3) * 8) < 0x1000) {
LAB_180005d9e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cc3e98 + -8);
    if (0x1f < ((longlong)DAT_180cc3e98 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180005d9e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180005da6;
  thunk_FUN_1803d64e0(lVar5);
LAB_180005da6:
  plVar1 = plVar4 + 0x10;
  _DAT_180cc3ea0 = plVar1;
  DAT_180cc3ea8 = plVar1;
  DAT_180cc3e98 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180564dc0);
  return;
}



/* ===== 180005e00 FUN_180005e00 ===== */

void FUN_180005e00(void)

{
  FUN_180023b90(&DAT_180ca0ba0);
  FUN_1804ece40(FUN_180564de0);
  return;
}



/* ===== 180005e20 FUN_180005e20 ===== */

void FUN_180005e20(void)

{
  FUN_180023b90(&DAT_180ca0b20);
  FUN_1804ece40(FUN_180564e00);
  return;
}



/* ===== 180005e40 FUN_180005e40 ===== */

void FUN_180005e40(void)

{
  FUN_1800333f0(&DAT_180ca0c20);
  FUN_1804ece40(FUN_180564e20);
  return;
}



/* ===== 180005e60 FUN_180005e60 ===== */

void FUN_180005e60(void)

{
  FUN_1800333f0(&DAT_180ca0c60);
  FUN_1804ece40(FUN_180564e40);
  return;
}



/* ===== 180005ec0 FUN_180005ec0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180005ec0(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0xb8);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180ccf718 = (longlong *)0x0;
  _DAT_180ccf720 = (longlong *)0x0;
  DAT_180ccf728 = (longlong *)0x0;
  DAT_180ccf730 = 7;
  DAT_180ccf738 = 8;
  DAT_180ccf700 = 0x3f800000;
  DAT_180ccf708 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180ccf728 - (longlong)DAT_180ccf718 == 0) goto LAB_180005f76;
  lVar5 = (longlong)DAT_180ccf718;
  if ((ulonglong)(((longlong)DAT_180ccf728 - (longlong)DAT_180ccf718 >> 3) * 8) < 0x1000) {
LAB_180005f6e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180ccf718 + -8);
    if (0x1f < ((longlong)DAT_180ccf718 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180005f6e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180005f76;
  thunk_FUN_1803d64e0(lVar5);
LAB_180005f76:
  plVar1 = plVar4 + 0x10;
  _DAT_180ccf720 = plVar1;
  DAT_180ccf728 = plVar1;
  DAT_180ccf718 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180564ff0);
  return;
}



/* ===== 180006010 FUN_180006010 ===== */

void FUN_180006010(void)

{
  DAT_180ca0ca0 = FUN_1804ecaa0(0x88);
  *(longlong *)DAT_180ca0ca0 = DAT_180ca0ca0;
  *(longlong *)(DAT_180ca0ca0 + 8) = DAT_180ca0ca0;
  *(longlong *)(DAT_180ca0ca0 + 0x10) = DAT_180ca0ca0;
  *(undefined2 *)(DAT_180ca0ca0 + 0x18) = 0x101;
  FUN_1804ece40(FUN_180565310);
  return;
}



/* ===== 1800060a0 FUN_1800060a0 ===== */

void FUN_1800060a0(void)

{
  DAT_180ca0cb0 = (undefined8 *)FUN_1804ecaa0(0x10);
  DAT_180ca0cb0[1] = 0;
  *DAT_180ca0cb0 = &DAT_180ca0cb0;
  FUN_1804ece40(FUN_180565540);
  return;
}



/* ===== 1800060e0 FUN_1800060e0 ===== */

void FUN_1800060e0(void)

{
  FUN_180023b90(&DAT_180ca0ce0);
  FUN_1804ece40(FUN_180565660);
  return;
}



/* ===== 180006120 FUN_180006120 ===== */

void FUN_180006120(void)

{
  DAT_180ca0d40 = FUN_1804ecaa0(0x40);
  *(longlong *)DAT_180ca0d40 = DAT_180ca0d40;
  *(longlong *)(DAT_180ca0d40 + 8) = DAT_180ca0d40;
  *(longlong *)(DAT_180ca0d40 + 0x10) = DAT_180ca0d40;
  *(undefined2 *)(DAT_180ca0d40 + 0x18) = 0x101;
  FUN_1804ece40(FUN_1805657b0);
  return;
}



/* ===== 180006160 FUN_180006160 ===== */

void FUN_180006160(void)

{
  DAT_180ca0d30 = FUN_1804ecaa0(0x40);
  *(longlong *)DAT_180ca0d30 = DAT_180ca0d30;
  *(longlong *)(DAT_180ca0d30 + 8) = DAT_180ca0d30;
  *(longlong *)(DAT_180ca0d30 + 0x10) = DAT_180ca0d30;
  *(undefined2 *)(DAT_180ca0d30 + 0x18) = 0x101;
  FUN_1804ece40(FUN_1805657f0);
  return;
}



/* ===== 180006230 FUN_180006230 ===== */

void FUN_180006230(void)

{
  ULONGLONG UVar1;
  
  UVar1 = GetTickCount64();
  DAT_180ca0d50 = ((int)UVar1 + (int)(UVar1 / 1000000) * -1000000) * 1000;
  return;
}



/* ===== 1800062c0 FUN_1800062c0 ===== */

void FUN_1800062c0(void)

{
  DAT_180ca0d68 = FUN_1804ecaa0(0xd0);
  *(longlong *)DAT_180ca0d68 = DAT_180ca0d68;
  *(longlong *)(DAT_180ca0d68 + 8) = DAT_180ca0d68;
  *(longlong *)(DAT_180ca0d68 + 0x10) = DAT_180ca0d68;
  *(undefined2 *)(DAT_180ca0d68 + 0x18) = 0x101;
  FUN_1804ece40(FUN_180565c30);
  return;
}



/* ===== 180006300 FUN_180006300 ===== */

void FUN_180006300(void)

{
  DAT_180ca0d58 = FUN_1804ecaa0(0x90);
  *(longlong *)DAT_180ca0d58 = DAT_180ca0d58;
  *(longlong *)(DAT_180ca0d58 + 8) = DAT_180ca0d58;
  *(longlong *)(DAT_180ca0d58 + 0x10) = DAT_180ca0d58;
  *(undefined2 *)(DAT_180ca0d58 + 0x18) = 0x101;
  FUN_1804ece40(FUN_180565c70);
  return;
}



/* ===== 180006380 FUN_180006380 ===== */

void FUN_180006380(void)

{
  DAT_180ca0d78 = (undefined8 *)FUN_1804ecaa0(0x10);
  DAT_180ca0d78[1] = 0;
  *DAT_180ca0d78 = &DAT_180ca0d78;
  FUN_1804ece40(FUN_180565d70);
  return;
}



/* ===== 180006440 FUN_180006440 ===== */

void FUN_180006440(void)

{
  DAT_180ca0da0 = (undefined8 *)FUN_1804ecaa0(0x10);
  DAT_180ca0da0[1] = 0;
  *DAT_180ca0da0 = &DAT_180ca0da0;
  FUN_1804ece40(FUN_1805661d0);
  return;
}



/* ===== 1800064a0 FUN_1800064a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800064a0(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x218);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cd0d98 = (longlong *)0x0;
  DAT_180cd0da0 = (longlong *)0x0;
  DAT_180cd0da8 = (longlong *)0x0;
  DAT_180cd0db0 = 7;
  DAT_180cd0db8 = 8;
  _DAT_180cd0d80 = 0x3f800000;
  DAT_180cd0d88 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cd0da8 - (longlong)DAT_180cd0d98 == 0) goto LAB_180006556;
  lVar5 = (longlong)DAT_180cd0d98;
  if ((ulonglong)(((longlong)DAT_180cd0da8 - (longlong)DAT_180cd0d98 >> 3) * 8) < 0x1000) {
LAB_18000654e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cd0d98 + -8);
    if (0x1f < ((longlong)DAT_180cd0d98 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000654e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180006556;
  thunk_FUN_1803d64e0(lVar5);
LAB_180006556:
  plVar1 = plVar4 + 0x10;
  DAT_180cd0da0 = plVar1;
  DAT_180cd0da8 = plVar1;
  DAT_180cd0d98 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180566280);
  return;
}



/* ===== 180006650 FUN_180006650 ===== */

void FUN_180006650(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x30);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cd0f28 = (longlong *)0x0;
  DAT_180cd0f30 = (longlong *)0x0;
  DAT_180cd0f38 = (longlong *)0x0;
  DAT_180cd0f40 = 7;
  DAT_180cd0f48 = 8;
  DAT_180cd0f10 = 0x3f800000;
  DAT_180cd0f18 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cd0f38 - (longlong)DAT_180cd0f28 == 0) goto LAB_180006706;
  lVar5 = (longlong)DAT_180cd0f28;
  if ((ulonglong)(((longlong)DAT_180cd0f38 - (longlong)DAT_180cd0f28 >> 3) * 8) < 0x1000) {
LAB_1800066fe:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cd0f28 + -8);
    if (0x1f < ((longlong)DAT_180cd0f28 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_1800066fe;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180006706;
  thunk_FUN_1803d64e0(lVar5);
LAB_180006706:
  plVar1 = plVar4 + 0x10;
  DAT_180cd0f30 = plVar1;
  DAT_180cd0f38 = plVar1;
  DAT_180cd0f28 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180566510);
  return;
}



/* ===== 180006770 FUN_180006770 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180006770(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x40);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cd1038 = (longlong *)0x0;
  _DAT_180cd1040 = (longlong *)0x0;
  DAT_180cd1048 = (longlong *)0x0;
  DAT_180cd1050 = 7;
  DAT_180cd1058 = 8;
  DAT_180cd1020 = 0x3f800000;
  DAT_180cd1028 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cd1048 - (longlong)DAT_180cd1038 == 0) goto LAB_180006826;
  lVar5 = (longlong)DAT_180cd1038;
  if ((ulonglong)(((longlong)DAT_180cd1048 - (longlong)DAT_180cd1038 >> 3) * 8) < 0x1000) {
LAB_18000681e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cd1038 + -8);
    if (0x1f < ((longlong)DAT_180cd1038 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000681e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180006826;
  thunk_FUN_1803d64e0(lVar5);
LAB_180006826:
  plVar1 = plVar4 + 0x10;
  _DAT_180cd1040 = plVar1;
  DAT_180cd1048 = plVar1;
  DAT_180cd1038 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180566540);
  return;
}



/* ===== 180006880 FUN_180006880 ===== */

void FUN_180006880(void)

{
  FUN_180023e90(&DAT_180ca0de0);
  FUN_1804ece40(FUN_180566560);
  return;
}



/* ===== 1800068a0 FUN_1800068a0 ===== */

void FUN_1800068a0(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x38);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cd10d8 = (longlong *)0x0;
  DAT_180cd10e0 = (longlong *)0x0;
  DAT_180cd10e8 = (longlong *)0x0;
  DAT_180cd10f0 = 7;
  DAT_180cd10f8 = 8;
  DAT_180cd10c0 = 0x3f800000;
  DAT_180cd10c8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cd10e8 - (longlong)DAT_180cd10d8 == 0) goto LAB_180006956;
  lVar5 = (longlong)DAT_180cd10d8;
  if ((ulonglong)(((longlong)DAT_180cd10e8 - (longlong)DAT_180cd10d8 >> 3) * 8) < 0x1000) {
LAB_18000694e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cd10d8 + -8);
    if (0x1f < ((longlong)DAT_180cd10d8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000694e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180006956;
  thunk_FUN_1803d64e0(lVar5);
LAB_180006956:
  plVar1 = plVar4 + 0x10;
  DAT_180cd10e0 = plVar1;
  DAT_180cd10e8 = plVar1;
  DAT_180cd10d8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180566580);
  return;
}



/* ===== 1800069e0 FUN_1800069e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800069e0(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x50);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cd1128 = (longlong *)0x0;
  _DAT_180cd1130 = (longlong *)0x0;
  DAT_180cd1138 = (longlong *)0x0;
  DAT_180cd1140 = 7;
  DAT_180cd1148 = 8;
  DAT_180cd1110 = 0x3f800000;
  DAT_180cd1118 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cd1138 - (longlong)DAT_180cd1128 == 0) goto LAB_180006a96;
  lVar5 = (longlong)DAT_180cd1128;
  if ((ulonglong)(((longlong)DAT_180cd1138 - (longlong)DAT_180cd1128 >> 3) * 8) < 0x1000) {
LAB_180006a8e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cd1128 + -8);
    if (0x1f < ((longlong)DAT_180cd1128 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180006a8e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180006a96;
  thunk_FUN_1803d64e0(lVar5);
LAB_180006a96:
  plVar1 = plVar4 + 0x10;
  _DAT_180cd1130 = plVar1;
  DAT_180cd1138 = plVar1;
  DAT_180cd1128 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180566650);
  return;
}



/* ===== 180006af0 FUN_180006af0 ===== */

void FUN_180006af0(void)

{
  DAT_180ca0f10 = (undefined8 *)FUN_1804ecaa0(0x10);
  DAT_180ca0f10[1] = 0;
  *DAT_180ca0f10 = &DAT_180ca0f10;
  FUN_1804ece40(FUN_180566670);
  return;
}



/* ===== 180006b30 FUN_180006b30 ===== */

void FUN_180006b30(void)

{
  DAT_180ca0e30 = (undefined8 *)FUN_1804ecaa0(0x10);
  DAT_180ca0e30[1] = 0;
  *DAT_180ca0e30 = &DAT_180ca0e30;
  FUN_1804ece40(FUN_1805666a0);
  return;
}



/* ===== 180006ba0 FUN_180006ba0 ===== */

void FUN_180006ba0(void)

{
  FUN_1800e5e30(&DAT_180ca0e60);
  FUN_1804ece40(FUN_180566740);
  return;
}



/* ===== 180006bc0 FUN_180006bc0 ===== */

void FUN_180006bc0(void)

{
  DAT_180ca0f38 = (undefined8 *)FUN_1804ecaa0(0x10);
  DAT_180ca0f38[1] = 0;
  *DAT_180ca0f38 = &DAT_180ca0f38;
  FUN_1804ece40(FUN_180566790);
  return;
}



/* ===== 180006c00 FUN_180006c00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180006c00(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x50);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cd1218 = (longlong *)0x0;
  _DAT_180cd1220 = (longlong *)0x0;
  DAT_180cd1228 = (longlong *)0x0;
  DAT_180cd1230 = 7;
  DAT_180cd1238 = 8;
  DAT_180cd1200 = 0x3f800000;
  DAT_180cd1208 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cd1228 - (longlong)DAT_180cd1218 == 0) goto LAB_180006cb6;
  lVar5 = (longlong)DAT_180cd1218;
  if ((ulonglong)(((longlong)DAT_180cd1228 - (longlong)DAT_180cd1218 >> 3) * 8) < 0x1000) {
LAB_180006cae:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cd1218 + -8);
    if (0x1f < ((longlong)DAT_180cd1218 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180006cae;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180006cb6;
  thunk_FUN_1803d64e0(lVar5);
LAB_180006cb6:
  plVar1 = plVar4 + 0x10;
  _DAT_180cd1220 = plVar1;
  DAT_180cd1228 = plVar1;
  DAT_180cd1218 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_1805667c0);
  return;
}



/* ===== 180006d40 FUN_180006d40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180006d40(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x40);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cd12d8 = (longlong *)0x0;
  _DAT_180cd12e0 = (longlong *)0x0;
  DAT_180cd12e8 = (longlong *)0x0;
  DAT_180cd12f0 = 7;
  DAT_180cd12f8 = 8;
  DAT_180cd12c0 = 0x3f800000;
  DAT_180cd12c8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cd12e8 - (longlong)DAT_180cd12d8 == 0) goto LAB_180006df6;
  lVar5 = (longlong)DAT_180cd12d8;
  if ((ulonglong)(((longlong)DAT_180cd12e8 - (longlong)DAT_180cd12d8 >> 3) * 8) < 0x1000) {
LAB_180006dee:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cd12d8 + -8);
    if (0x1f < ((longlong)DAT_180cd12d8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180006dee;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180006df6;
  thunk_FUN_1803d64e0(lVar5);
LAB_180006df6:
  plVar1 = plVar4 + 0x10;
  _DAT_180cd12e0 = plVar1;
  DAT_180cd12e8 = plVar1;
  DAT_180cd12d8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180566820);
  return;
}



/* ===== 180006e50 FUN_180006e50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180006e50(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x38);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cd1298 = (longlong *)0x0;
  _DAT_180cd12a0 = (longlong *)0x0;
  DAT_180cd12a8 = (longlong *)0x0;
  DAT_180cd12b0 = 7;
  DAT_180cd12b8 = 8;
  DAT_180cd1280 = 0x3f800000;
  DAT_180cd1288 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cd12a8 - (longlong)DAT_180cd1298 == 0) goto LAB_180006f06;
  lVar5 = (longlong)DAT_180cd1298;
  if ((ulonglong)(((longlong)DAT_180cd12a8 - (longlong)DAT_180cd1298 >> 3) * 8) < 0x1000) {
LAB_180006efe:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cd1298 + -8);
    if (0x1f < ((longlong)DAT_180cd1298 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180006efe;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180006f06;
  thunk_FUN_1803d64e0(lVar5);
LAB_180006f06:
  plVar1 = plVar4 + 0x10;
  _DAT_180cd12a0 = plVar1;
  DAT_180cd12a8 = plVar1;
  DAT_180cd1298 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180566840);
  return;
}



/* ===== 180006fd0 FUN_180006fd0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180006fd0(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x20);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180ce1e98 = (longlong *)0x0;
  _DAT_180ce1ea0 = (longlong *)0x0;
  DAT_180ce1ea8 = (longlong *)0x0;
  DAT_180ce1eb0 = 7;
  DAT_180ce1eb8 = 8;
  DAT_180ce1e80 = 0x3f800000;
  DAT_180ce1e88 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180ce1ea8 - (longlong)DAT_180ce1e98 == 0) goto LAB_180007086;
  lVar5 = (longlong)DAT_180ce1e98;
  if ((ulonglong)(((longlong)DAT_180ce1ea8 - (longlong)DAT_180ce1e98 >> 3) * 8) < 0x1000) {
LAB_18000707e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180ce1e98 + -8);
    if (0x1f < ((longlong)DAT_180ce1e98 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000707e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180007086;
  thunk_FUN_1803d64e0(lVar5);
LAB_180007086:
  plVar1 = plVar4 + 0x10;
  _DAT_180ce1ea0 = plVar1;
  DAT_180ce1ea8 = plVar1;
  DAT_180ce1e98 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180566ac0);
  return;
}



/* ===== 1800070f0 FUN_1800070f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800070f0(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x20);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180ce1ef8 = (longlong *)0x0;
  _DAT_180ce1f00 = (longlong *)0x0;
  DAT_180ce1f08 = (longlong *)0x0;
  DAT_180ce1f10 = 7;
  DAT_180ce1f18 = 8;
  DAT_180ce1ee0 = 0x3f800000;
  DAT_180ce1ee8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180ce1f08 - (longlong)DAT_180ce1ef8 == 0) goto LAB_1800071a6;
  lVar5 = (longlong)DAT_180ce1ef8;
  if ((ulonglong)(((longlong)DAT_180ce1f08 - (longlong)DAT_180ce1ef8 >> 3) * 8) < 0x1000) {
LAB_18000719e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180ce1ef8 + -8);
    if (0x1f < ((longlong)DAT_180ce1ef8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000719e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800071a6;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800071a6:
  plVar1 = plVar4 + 0x10;
  _DAT_180ce1f00 = plVar1;
  DAT_180ce1f08 = plVar1;
  DAT_180ce1ef8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180566b60);
  return;
}



/* ===== 180007200 FUN_180007200 ===== */

void FUN_180007200(void)

{
  FUN_180023b90(&DAT_180ca0f60);
  FUN_1804ece40(FUN_180566b80);
  return;
}



/* ===== 180007230 FUN_180007230 ===== */

void FUN_180007230(void)

{
  FUN_180023b90(&DAT_180ca0fa0);
  FUN_1804ece40(FUN_180566c10);
  return;
}



/* ===== 180007250 FUN_180007250 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180007250(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x20);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180ce2088 = (longlong *)0x0;
  _DAT_180ce2090 = (longlong *)0x0;
  DAT_180ce2098 = (longlong *)0x0;
  DAT_180ce20a0 = 7;
  DAT_180ce20a8 = 8;
  DAT_180ce2070 = 0x3f800000;
  DAT_180ce2078 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180ce2098 - (longlong)DAT_180ce2088 == 0) goto LAB_180007306;
  lVar5 = (longlong)DAT_180ce2088;
  if ((ulonglong)(((longlong)DAT_180ce2098 - (longlong)DAT_180ce2088 >> 3) * 8) < 0x1000) {
LAB_1800072fe:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180ce2088 + -8);
    if (0x1f < ((longlong)DAT_180ce2088 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_1800072fe;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180007306;
  thunk_FUN_1803d64e0(lVar5);
LAB_180007306:
  plVar1 = plVar4 + 0x10;
  _DAT_180ce2090 = plVar1;
  DAT_180ce2098 = plVar1;
  DAT_180ce2088 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180566c30);
  return;
}



/* ===== 180007360 FUN_180007360 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180007360(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x30);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180ce20d8 = (longlong *)0x0;
  _DAT_180ce20e0 = (longlong *)0x0;
  DAT_180ce20e8 = (longlong *)0x0;
  DAT_180ce20f0 = 7;
  DAT_180ce20f8 = 8;
  DAT_180ce20c0 = 0x3f800000;
  DAT_180ce20c8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180ce20e8 - (longlong)DAT_180ce20d8 == 0) goto LAB_180007416;
  lVar5 = (longlong)DAT_180ce20d8;
  if ((ulonglong)(((longlong)DAT_180ce20e8 - (longlong)DAT_180ce20d8 >> 3) * 8) < 0x1000) {
LAB_18000740e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180ce20d8 + -8);
    if (0x1f < ((longlong)DAT_180ce20d8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000740e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180007416;
  thunk_FUN_1803d64e0(lVar5);
LAB_180007416:
  plVar1 = plVar4 + 0x10;
  _DAT_180ce20e0 = plVar1;
  DAT_180ce20e8 = plVar1;
  DAT_180ce20d8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180566c50);
  return;
}



/* ===== 180007510 FUN_180007510 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180007510(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x20);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180ceb628 = (longlong *)0x0;
  _DAT_180ceb630 = (longlong *)0x0;
  DAT_180ceb638 = (longlong *)0x0;
  DAT_180ceb640 = 7;
  DAT_180ceb648 = 8;
  DAT_180ceb610 = 0x3f800000;
  DAT_180ceb618 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180ceb638 - (longlong)DAT_180ceb628 == 0) goto LAB_1800075c6;
  lVar5 = (longlong)DAT_180ceb628;
  if ((ulonglong)(((longlong)DAT_180ceb638 - (longlong)DAT_180ceb628 >> 3) * 8) < 0x1000) {
LAB_1800075be:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180ceb628 + -8);
    if (0x1f < ((longlong)DAT_180ceb628 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_1800075be;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800075c6;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800075c6:
  plVar1 = plVar4 + 0x10;
  _DAT_180ceb630 = plVar1;
  DAT_180ceb638 = plVar1;
  DAT_180ceb628 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180566dc0);
  return;
}



/* ===== 180007630 FUN_180007630 ===== */

void FUN_180007630(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x90);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180ceb6b8 = (longlong *)0x0;
  DAT_180ceb6c0 = (longlong *)0x0;
  DAT_180ceb6c8 = (longlong *)0x0;
  DAT_180ceb6d0 = 7;
  DAT_180ceb6d8 = 8;
  DAT_180ceb6a0 = 0x3f800000;
  DAT_180ceb6a8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180ceb6c8 - (longlong)DAT_180ceb6b8 == 0) goto LAB_1800076e6;
  lVar5 = (longlong)DAT_180ceb6b8;
  if ((ulonglong)(((longlong)DAT_180ceb6c8 - (longlong)DAT_180ceb6b8 >> 3) * 8) < 0x1000) {
LAB_1800076de:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180ceb6b8 + -8);
    if (0x1f < ((longlong)DAT_180ceb6b8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_1800076de;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800076e6;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800076e6:
  plVar1 = plVar4 + 0x10;
  DAT_180ceb6c0 = plVar1;
  DAT_180ceb6c8 = plVar1;
  DAT_180ceb6b8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180566df0);
  return;
}



/* ===== 180007760 FUN_180007760 ===== */

void FUN_180007760(void)

{
  FUN_180023b90(&DAT_180ca0fe0);
  FUN_1804ece40(FUN_180566e50);
  return;
}



/* ===== 180007830 FUN_180007830 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180007830(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x60);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cec9a8 = (longlong *)0x0;
  _DAT_180cec9b0 = (longlong *)0x0;
  DAT_180cec9b8 = (longlong *)0x0;
  DAT_180cec9c0 = 7;
  DAT_180cec9c8 = 8;
  DAT_180cec990 = 0x3f800000;
  DAT_180cec998 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cec9b8 - (longlong)DAT_180cec9a8 == 0) goto LAB_1800078e6;
  lVar5 = (longlong)DAT_180cec9a8;
  if ((ulonglong)(((longlong)DAT_180cec9b8 - (longlong)DAT_180cec9a8 >> 3) * 8) < 0x1000) {
LAB_1800078de:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cec9a8 + -8);
    if (0x1f < ((longlong)DAT_180cec9a8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_1800078de;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800078e6;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800078e6:
  plVar1 = plVar4 + 0x10;
  _DAT_180cec9b0 = plVar1;
  DAT_180cec9b8 = plVar1;
  DAT_180cec9a8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180567030);
  return;
}



/* ===== 180007970 FUN_180007970 ===== */

void FUN_180007970(void)

{
  FUN_1800e5e30(&DAT_180ca1030);
  FUN_1804ece40(FUN_180567080);
  return;
}



/* ===== 1800079a0 FUN_1800079a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800079a0(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x50);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cecad8 = (longlong *)0x0;
  _DAT_180cecae0 = (longlong *)0x0;
  DAT_180cecae8 = (longlong *)0x0;
  DAT_180cecaf0 = 7;
  DAT_180cecaf8 = 8;
  DAT_180cecac0 = 0x3f800000;
  DAT_180cecac8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cecae8 - (longlong)DAT_180cecad8 == 0) goto LAB_180007a56;
  lVar5 = (longlong)DAT_180cecad8;
  if ((ulonglong)(((longlong)DAT_180cecae8 - (longlong)DAT_180cecad8 >> 3) * 8) < 0x1000) {
LAB_180007a4e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cecad8 + -8);
    if (0x1f < ((longlong)DAT_180cecad8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180007a4e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180007a56;
  thunk_FUN_1803d64e0(lVar5);
LAB_180007a56:
  plVar1 = plVar4 + 0x10;
  _DAT_180cecae0 = plVar1;
  DAT_180cecae8 = plVar1;
  DAT_180cecad8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_1805670e0);
  return;
}



/* ===== 180007ab0 FUN_180007ab0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180007ab0(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x78);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cecb38 = (longlong *)0x0;
  _DAT_180cecb40 = (longlong *)0x0;
  DAT_180cecb48 = (longlong *)0x0;
  DAT_180cecb50 = 7;
  DAT_180cecb58 = 8;
  DAT_180cecb20 = 0x3f800000;
  DAT_180cecb28 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cecb48 - (longlong)DAT_180cecb38 == 0) goto LAB_180007b66;
  lVar5 = (longlong)DAT_180cecb38;
  if ((ulonglong)(((longlong)DAT_180cecb48 - (longlong)DAT_180cecb38 >> 3) * 8) < 0x1000) {
LAB_180007b5e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cecb38 + -8);
    if (0x1f < ((longlong)DAT_180cecb38 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180007b5e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180007b66;
  thunk_FUN_1803d64e0(lVar5);
LAB_180007b66:
  plVar1 = plVar4 + 0x10;
  _DAT_180cecb40 = plVar1;
  DAT_180cecb48 = plVar1;
  DAT_180cecb38 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180567100);
  return;
}



/* ===== 180007bd0 FUN_180007bd0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180007bd0(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x70);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cecb88 = (longlong *)0x0;
  _DAT_180cecb90 = (longlong *)0x0;
  DAT_180cecb98 = (longlong *)0x0;
  DAT_180cecba0 = 7;
  DAT_180cecba8 = 8;
  DAT_180cecb70 = 0x3f800000;
  DAT_180cecb78 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cecb98 - (longlong)DAT_180cecb88 == 0) goto LAB_180007c86;
  lVar5 = (longlong)DAT_180cecb88;
  if ((ulonglong)(((longlong)DAT_180cecb98 - (longlong)DAT_180cecb88 >> 3) * 8) < 0x1000) {
LAB_180007c7e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cecb88 + -8);
    if (0x1f < ((longlong)DAT_180cecb88 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180007c7e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180007c86;
  thunk_FUN_1803d64e0(lVar5);
LAB_180007c86:
  plVar1 = plVar4 + 0x10;
  _DAT_180cecb90 = plVar1;
  DAT_180cecb98 = plVar1;
  DAT_180cecb88 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180567150);
  return;
}



/* ===== 180007ce0 FUN_180007ce0 ===== */

void FUN_180007ce0(void)

{
  FUN_1802283b0(&DAT_180ca10e0);
  FUN_1804ece40(FUN_180567190);
  return;
}



/* ===== 180007d50 FUN_180007d50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180007d50(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)FUN_18000fb70(0x20);
  uVar5 = s_the_game_folder_wasn_t_found_18070c8e0._24_4_;
  uVar4 = s_the_game_folder_wasn_t_found_18070c8e0._20_4_;
  uVar3 = s_the_game_folder_wasn_t_found_18070c8e0._16_4_;
  uVar2 = s_the_game_folder_wasn_t_found_18070c8e0._12_4_;
  _DAT_180ca1130 = _DAT_1808ad4f0;
  DAT_180ca1138 = _UNK_1808ad4f8;
  uVar1 = CONCAT44(s_the_game_folder_wasn_t_found_18070c8e0._12_4_,
                   s_the_game_folder_wasn_t_found_18070c8e0._8_4_);
  DAT_180ca1120 = pcVar6;
  *(undefined8 *)pcVar6 = s_the_game_folder_wasn_t_found_18070c8e0._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  *(undefined4 *)(pcVar6 + 0xc) = uVar2;
  *(undefined4 *)(pcVar6 + 0x10) = uVar3;
  *(undefined4 *)(pcVar6 + 0x14) = uVar4;
  *(undefined4 *)(pcVar6 + 0x18) = uVar5;
  pcVar6[0x1c] = '\0';
  FUN_1804ece40(&LAB_1805672e0);
  return;
}



/* ===== 180007e70 FUN_180007e70 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180007e70(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x1f0);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cf9d38 = (longlong *)0x0;
  _DAT_180cf9d40 = (longlong *)0x0;
  DAT_180cf9d48 = (longlong *)0x0;
  DAT_180cf9d50 = 7;
  DAT_180cf9d58 = 8;
  DAT_180cf9d20 = 0x3f800000;
  DAT_180cf9d28 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cf9d48 - (longlong)DAT_180cf9d38 == 0) goto LAB_180007f26;
  lVar5 = (longlong)DAT_180cf9d38;
  if ((ulonglong)(((longlong)DAT_180cf9d48 - (longlong)DAT_180cf9d38 >> 3) * 8) < 0x1000) {
LAB_180007f1e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cf9d38 + -8);
    if (0x1f < ((longlong)DAT_180cf9d38 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180007f1e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180007f26;
  thunk_FUN_1803d64e0(lVar5);
LAB_180007f26:
  plVar1 = plVar4 + 0x10;
  _DAT_180cf9d40 = plVar1;
  DAT_180cf9d48 = plVar1;
  DAT_180cf9d38 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_1805675e0);
  return;
}



/* ===== 180007fd0 FUN_180007fd0 ===== */

void FUN_180007fd0(void)

{
  FUN_18025bb30(&DAT_180ca1140);
  FUN_1804ece40(FUN_180567690);
  return;
}



/* ===== 180008020 FUN_180008020 ===== */

void FUN_180008020(void)

{
  FUN_18025bb30(&DAT_180ca11c0);
  FUN_1804ece40(FUN_1805677d0);
  return;
}



/* ===== 180008040 FUN_180008040 ===== */

void FUN_180008040(void)

{
  FUN_18025bb30(&DAT_180ca1180);
  FUN_1804ece40(FUN_1805677f0);
  return;
}



/* ===== 1800080b0 FUN_1800080b0 ===== */

void FUN_1800080b0(void)

{
  FUN_18025bb30(&DAT_180ca1200);
  FUN_1804ece40(FUN_180567910);
  return;
}



/* ===== 1800080d0 FUN_1800080d0 ===== */

void FUN_1800080d0(void)

{
  FUN_180023e90(&DAT_180ca1240);
  FUN_1804ece40(FUN_180567930);
  return;
}



/* ===== 180008120 FUN_180008120 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180008120(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x18);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cfa208 = (longlong *)0x0;
  _DAT_180cfa210 = (longlong *)0x0;
  DAT_180cfa218 = (longlong *)0x0;
  DAT_180cfa220 = 7;
  DAT_180cfa228 = 8;
  DAT_180cfa1f0 = 0x3f800000;
  DAT_180cfa1f8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cfa218 - (longlong)DAT_180cfa208 == 0) goto LAB_1800081d6;
  lVar5 = (longlong)DAT_180cfa208;
  if ((ulonglong)(((longlong)DAT_180cfa218 - (longlong)DAT_180cfa208 >> 3) * 8) < 0x1000) {
LAB_1800081ce:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cfa208 + -8);
    if (0x1f < ((longlong)DAT_180cfa208 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_1800081ce;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800081d6;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800081d6:
  plVar1 = plVar4 + 0x10;
  _DAT_180cfa210 = plVar1;
  DAT_180cfa218 = plVar1;
  DAT_180cfa208 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180567980);
  return;
}



/* ===== 180008260 FUN_180008260 ===== */

void FUN_180008260(void)

{
  DAT_180ca12c0 = (undefined8 *)FUN_1804ecaa0(0x10);
  DAT_180ca12c0[1] = 0;
  *DAT_180ca12c0 = &DAT_180ca12c0;
  FUN_1804ece40(FUN_180567a40);
  return;
}



/* ===== 1800082b0 FUN_1800082b0 ===== */

void FUN_1800082b0(void)

{
  FUN_180276680(&DAT_180ca1280);
  FUN_1804ece40(FUN_180567b70);
  return;
}



/* ===== 1800082e0 FUN_1800082e0 ===== */

void FUN_1800082e0(void)

{
  FUN_180023b90(&DAT_180ca1460);
  FUN_1804ece40(FUN_180567ba0);
  return;
}



/* ===== 180008310 FUN_180008310 ===== */

void FUN_180008310(void)

{
  FUN_180023b90(&DAT_180ca14a0);
  FUN_1804ece40(FUN_180567bd0);
  return;
}



/* ===== 180008330 FUN_180008330 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180008330(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x30);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cfc8e8 = (longlong *)0x0;
  _DAT_180cfc8f0 = (longlong *)0x0;
  DAT_180cfc8f8 = (longlong *)0x0;
  DAT_180cfc900 = 7;
  DAT_180cfc908 = 8;
  DAT_180cfc8d0 = 0x3f800000;
  DAT_180cfc8d8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cfc8f8 - (longlong)DAT_180cfc8e8 == 0) goto LAB_1800083e6;
  lVar5 = (longlong)DAT_180cfc8e8;
  if ((ulonglong)(((longlong)DAT_180cfc8f8 - (longlong)DAT_180cfc8e8 >> 3) * 8) < 0x1000) {
LAB_1800083de:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cfc8e8 + -8);
    if (0x1f < ((longlong)DAT_180cfc8e8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_1800083de;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800083e6;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800083e6:
  plVar1 = plVar4 + 0x10;
  _DAT_180cfc8f0 = plVar1;
  DAT_180cfc8f8 = plVar1;
  DAT_180cfc8e8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180567bf0);
  return;
}



/* ===== 180008490 FUN_180008490 ===== */

void FUN_180008490(void)

{
  FUN_180023b90(&DAT_180ca1560);
  FUN_1804ece40(FUN_180567c60);
  return;
}



/* ===== 1800084b0 FUN_1800084b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800084b0(void)

{
  undefined1 auStack_168 [32];
  ulonglong *local_148;
  ulonglong *local_140;
  ulonglong local_138 [3];
  undefined8 uStack_120;
  char local_118 [8];
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  char local_f8 [8];
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  char local_b8 [8];
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
  char local_58 [8];
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_180919500 ^ (ulonglong)auStack_168;
  local_138[1] = 0;
  local_138[2] = _DAT_1808ad420;
  uStack_120 = _UNK_1808ad428;
  local_138[0] = (ulonglong)(uint3)DAT_18073e9a0;
  local_108 = _DAT_1808ad4c0;
  uStack_100 = _UNK_1808ad4c8;
  local_118 = (char  [8])s_Service_medals_18073e990._0_8_;
  uStack_110 = (ulonglong)
               CONCAT24(s_Service_medals_18073e990._12_2_,s_Service_medals_18073e990._8_4_);
  local_e8 = _DAT_1808ad4d0;
  uStack_e0 = _UNK_1808ad4d8;
  local_f8 = (char  [8])s_Operation_coins_18073e9b0._0_8_;
  uStack_f0 = (ulonglong)
              CONCAT16(s_Operation_coins_18073e9b0[0xe],
                       CONCAT24(s_Operation_coins_18073e9b0._12_2_,s_Operation_coins_18073e9b0._8_4_
                               ));
  uStack_d0 = 0;
  local_c8 = _DAT_1808ad460;
  uStack_c0 = _UNK_1808ad468;
  local_d8 = (ulonglong)
             CONCAT16(s_Premier_18073e9a8[6],
                      CONCAT24(s_Premier_18073e9a8._4_2_,s_Premier_18073e9a8._0_4_));
  local_a8 = _DAT_1808ad4c0;
  uStack_a0 = _UNK_1808ad4c8;
  local_b8 = (char  [8])s_Major_trophies_18073ea48._0_8_;
  uStack_b0 = (ulonglong)
              CONCAT24(s_Major_trophies_18073ea48._12_2_,s_Major_trophies_18073ea48._8_4_);
  uStack_90 = 0;
  local_88 = _DAT_1808ad460;
  uStack_80 = _UNK_1808ad468;
  local_98 = (ulonglong)
             CONCAT16(DAT_18073ea40._6_1_,CONCAT24(DAT_18073ea40._4_2_,(undefined4)DAT_18073ea40));
  uStack_70 = 0;
  local_68 = _DAT_1808ad430;
  uStack_60 = _UNK_1808ad438;
  local_78 = 0x736e6950;
  local_48 = _DAT_1808ad480;
  uStack_40 = _UNK_1808ad488;
  local_58 = (char  [8])s_Map_tokens_18073ea58._0_8_;
  uStack_50 = (ulonglong)(ushort)s_Map_tokens_18073ea58._8_2_;
  uStack_30 = 0;
  local_28 = _DAT_1808ad440;
  uStack_20 = _UNK_1808ad448;
  local_38 = (ulonglong)CONCAT14(s_OTHER_1806f2a30[4],s_OTHER_1806f2a30._0_4_);
  local_148 = local_18;
  local_140 = local_138;
  FUN_180068970(&DAT_180ca15a0,9,&local_140,&local_148);
  FUN_1804eced0(local_138,0x20,9,thunk_FUN_18000f890);
  FUN_1804ece40(&LAB_180567c80);
  return;
}



/* ===== 180008710 FUN_180008710 ===== */

void FUN_180008710(void)

{
  FUN_180023e90(&DAT_180ca1520);
  FUN_1804ece40(FUN_180567d50);
  return;
}



/* ===== 180008740 FUN_180008740 ===== */

void FUN_180008740(void)

{
  FUN_180023e90(&DAT_180ca13e0);
  FUN_1804ece40(FUN_180567d80);
  return;
}



/* ===== 180008760 FUN_180008760 ===== */

void FUN_180008760(void)

{
  FUN_180023e90(&DAT_180ca14e0);
  FUN_1804ece40(FUN_180567da0);
  return;
}



/* ===== 180008780 FUN_180008780 ===== */

void FUN_180008780(void)

{
  FUN_180282950(&DAT_180ca15c0);
  FUN_1804ece40(FUN_180567dc0);
  return;
}



/* ===== 1800087a0 FUN_1800087a0 ===== */

void FUN_1800087a0(void)

{
  FUN_180282950(&DAT_180ca1420);
  FUN_1804ece40(FUN_180567de0);
  return;
}



/* ===== 1800087c0 FUN_1800087c0 ===== */

void FUN_1800087c0(void)

{
  FUN_1800e5e30(&DAT_180ca1330);
  FUN_1804ece40(FUN_180567e00);
  return;
}



/* ===== 1800087e0 FUN_1800087e0 ===== */

void FUN_1800087e0(void)

{
  FUN_180282950(&DAT_180ca12f0);
  FUN_1804ece40(FUN_180567e50);
  return;
}



/* ===== 180008800 FUN_180008800 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180008800(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0xc0);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cfc888 = (longlong *)0x0;
  _DAT_180cfc890 = (longlong *)0x0;
  DAT_180cfc898 = (longlong *)0x0;
  DAT_180cfc8a0 = 7;
  DAT_180cfc8a8 = 8;
  DAT_180cfc870 = 0x3f800000;
  DAT_180cfc878 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cfc898 - (longlong)DAT_180cfc888 == 0) goto LAB_1800088b6;
  lVar5 = (longlong)DAT_180cfc888;
  if ((ulonglong)(((longlong)DAT_180cfc898 - (longlong)DAT_180cfc888 >> 3) * 8) < 0x1000) {
LAB_1800088ae:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cfc888 + -8);
    if (0x1f < ((longlong)DAT_180cfc888 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_1800088ae;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800088b6;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800088b6:
  plVar1 = plVar4 + 0x10;
  _DAT_180cfc890 = plVar1;
  DAT_180cfc898 = plVar1;
  DAT_180cfc888 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180567e70);
  return;
}



/* ===== 180008910 FUN_180008910 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180008910(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x1b8);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cfe6b8 = (longlong *)0x0;
  _DAT_180cfe6c0 = (longlong *)0x0;
  DAT_180cfe6c8 = (longlong *)0x0;
  DAT_180cfe6d0 = 7;
  DAT_180cfe6d8 = 8;
  DAT_180cfe6a0 = 0x3f800000;
  DAT_180cfe6a8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cfe6c8 - (longlong)DAT_180cfe6b8 == 0) goto LAB_1800089c6;
  lVar5 = (longlong)DAT_180cfe6b8;
  if ((ulonglong)(((longlong)DAT_180cfe6c8 - (longlong)DAT_180cfe6b8 >> 3) * 8) < 0x1000) {
LAB_1800089be:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cfe6b8 + -8);
    if (0x1f < ((longlong)DAT_180cfe6b8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_1800089be;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800089c6;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800089c6:
  plVar1 = plVar4 + 0x10;
  _DAT_180cfe6c0 = plVar1;
  DAT_180cfe6c8 = plVar1;
  DAT_180cfe6b8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180567ef0);
  return;
}



/* ===== 180008a20 FUN_180008a20 ===== */

void FUN_180008a20(void)

{
  FUN_180023b90(&DAT_180ca1640);
  FUN_1804ece40(FUN_180567f10);
  return;
}



/* ===== 180008a40 FUN_180008a40 ===== */

void FUN_180008a40(void)

{
  FUN_18025bb30(&DAT_180ca1680);
  FUN_1804ece40(FUN_180567f30);
  return;
}



/* ===== 180008a60 FUN_180008a60 ===== */

void FUN_180008a60(void)

{
  FUN_180023b90(&DAT_180ca1600);
  FUN_1804ece40(FUN_180567f50);
  return;
}



/* ===== 180008a80 FUN_180008a80 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180008a80(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x40);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_180cfe748 = (longlong *)0x0;
  _DAT_180cfe750 = (longlong *)0x0;
  DAT_180cfe758 = (longlong *)0x0;
  DAT_180cfe760 = 7;
  DAT_180cfe768 = 8;
  DAT_180cfe730 = 0x3f800000;
  DAT_180cfe738 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_180cfe758 - (longlong)DAT_180cfe748 == 0) goto LAB_180008b36;
  lVar5 = (longlong)DAT_180cfe748;
  if ((ulonglong)(((longlong)DAT_180cfe758 - (longlong)DAT_180cfe748 >> 3) * 8) < 0x1000) {
LAB_180008b2e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_180cfe748 + -8);
    if (0x1f < ((longlong)DAT_180cfe748 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180008b2e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180008b36;
  thunk_FUN_1803d64e0(lVar5);
LAB_180008b36:
  plVar1 = plVar4 + 0x10;
  _DAT_180cfe750 = plVar1;
  DAT_180cfe758 = plVar1;
  DAT_180cfe748 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180567f70);
  return;
}



/* ===== 180008c00 FUN_180008c00 ===== */

void FUN_180008c00(void)

{
  FUN_18025bb30(&DAT_180ca1780);
  FUN_1804ece40(FUN_180568110);
  return;
}



/* ===== 180008c20 FUN_180008c20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180008c20(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = FUN_1804ecaa0(0x28);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_181107628 = (longlong *)0x0;
  _DAT_181107630 = (longlong *)0x0;
  DAT_181107638 = (longlong *)0x0;
  DAT_181107640 = 7;
  DAT_181107648 = 8;
  _DAT_181107610 = 0x3f800000;
  DAT_181107618 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_181107638 - (longlong)DAT_181107628 == 0) goto LAB_180008cd6;
  lVar5 = (longlong)DAT_181107628;
  if ((ulonglong)(((longlong)DAT_181107638 - (longlong)DAT_181107628 >> 3) * 8) < 0x1000) {
LAB_180008cce:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181107628 + -8);
    if (0x1f < ((longlong)DAT_181107628 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180008cce;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180008cd6;
  thunk_FUN_1803d64e0(lVar5);
LAB_180008cd6:
  plVar1 = plVar4 + 0x10;
  _DAT_181107630 = plVar1;
  DAT_181107638 = plVar1;
  DAT_181107628 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180568130);
  return;
}



/* ===== 180008d90 FUN_180008d90 ===== */

void FUN_180008d90(void)

{
  FUN_180023b90(&DAT_180ca1840);
  FUN_1804ece40(FUN_180568250);
  return;
}



