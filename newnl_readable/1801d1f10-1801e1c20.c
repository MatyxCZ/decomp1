/* ===== 1801d1f10 FUN_1801d1f10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801d1f10(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  size_t _Size;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 ****local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_98;
  puVar12 = auStack_98;
  if (((*param_1 != 0) && (puVar12 = auStack_98, param_1[1] != 0)) &&
     (puVar12 = auStack_98, param_2[1] != 0)) {
    uStack_70 = 0;
    local_68 = 4;
    local_60 = 0xf;
    local_78 = (undefined8 ****)(ulonglong)DAT_1806d2a10;
    FUN_1800134a0(&local_78,*param_2);
    FUN_1800134a0(&local_78,&DAT_1806d2a18,2);
    uVar5 = local_60;
    ppppuVar4 = local_78;
    puVar12 = auStack_98;
    _Size = local_68 + 1;
    uVar9 = param_1[1];
    if (local_68 + 0x11U <= uVar9) {
      lVar2 = *param_1;
      lVar11 = 0x10;
      do {
        ppppuVar8 = &local_78;
        if (0xf < uVar5) {
          ppppuVar8 = ppppuVar4;
        }
        iVar6 = memcmp((void *)(lVar11 + lVar2),ppppuVar8,_Size);
        if (iVar6 == 0) {
          lVar11 = lVar11 + lVar2 + -0x10;
          if (lVar11 != 0) {
            lVar10 = 0;
            if (0x17 < uVar9) goto LAB_1801d2052;
          }
          break;
        }
        lVar10 = lVar11 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar10 + _Size <= uVar9);
    }
    goto LAB_1801d1fff;
  }
  goto LAB_1801d20ae;
  while (uVar7 = lVar10 + 0x1c, lVar10 = lVar10 + 4, uVar7 <= uVar9) {
LAB_1801d2052:
    piVar1 = (int *)(lVar10 + lVar2);
    if (((*piVar1 == 1) && (piVar1[1] == 0)) && (piVar1[3] == (int)lVar11 - (int)*param_1)) {
      lVar11 = 0;
      goto LAB_1801d2080;
    }
  }
  goto LAB_1801d1fff;
  while (uVar7 = lVar11 + 0x18, lVar11 = lVar11 + 8, uVar7 <= uVar9) {
LAB_1801d2080:
    if (*(int **)(lVar11 + lVar2) == piVar1) {
      lVar11 = lVar2 + 8 + lVar11;
      goto LAB_1801d2001;
    }
  }
LAB_1801d1fff:
  lVar11 = 0;
LAB_1801d2001:
  if (0xf < uVar5) {
    uVar9 = uVar5 + 1;
    ppppuVar8 = ppppuVar4;
    if (0xfff < uVar9) {
      ppppuVar8 = (undefined8 ****)ppppuVar4[-1];
      if (0x1f < (ulonglong)((longlong)ppppuVar4 + (-8 - (longlong)ppppuVar8))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar12 = auStack_90;
LAB_1801d20ae:
        lVar11 = 0;
        goto LAB_1801d20b0;
      }
      uVar9 = uVar5 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar8,uVar9);
  }
LAB_1801d20b0:
  *(undefined8 *)(puVar12 + -8) = 0x1801d20bd;
  return lVar11;
}



/* ===== 1801d20d0 FUN_1801d20d0 ===== */

longlong FUN_1801d20d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 - 0x10000U < 0x7ffffffeffff) {
    cVar1 = FUN_180011220(param_1);
    if (cVar1 == -0x18) {
      iVar2 = FUN_180011200(param_1 + 1);
      return (longlong)iVar2 + 5 + param_1;
    }
  }
  return 0;
}



/* ===== 1801d2120 FUN_1801d2120 ===== */

longlong FUN_1801d2120(longlong param_1,longlong param_2,longlong param_3)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(int *)(param_1 + param_2) + param_1 + param_3;
}



/* ===== 1801d2140 FUN_1801d2140 ===== */

void FUN_1801d2140(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  uVar4 = *param_1;
  if (uVar4 == 0) {
    return;
  }
  uVar2 = ((longlong)(param_1[2] - uVar4) >> 1) * 2;
  uVar3 = uVar4;
  if (0xfff < uVar2) {
    uVar3 = *(ulonglong *)(uVar4 - 8);
    uVar4 = (uVar4 - uVar3) - 8;
    if (uVar4 < 0x20) {
      uVar2 = uVar2 + 0x27;
      puVar5 = auStack_28;
    }
    else {
      pcVar1 = (code *)swi(0x29);
      uVar2 = (*pcVar1)(5);
      puVar5 = auStack_20;
      uVar3 = uVar4;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x1801d218f;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1801d21b0 FUN_1801d21b0 ===== */

undefined2 * FUN_1801d21b0(longlong *param_1,undefined2 *param_2)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  code *pcVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar10 = (undefined2 *)param_1[1];
  if (puVar10 != (undefined2 *)param_1[2]) {
    *puVar10 = *param_2;
    puVar10 = (undefined2 *)param_1[1];
    param_1[1] = (longlong)(puVar10 + 1);
    return puVar10;
  }
  uVar9 = 0x7fffffffffffffff;
  uVar13 = (longlong)puVar10 - *param_1;
  lVar4 = (longlong)uVar13 >> 1;
  if (lVar4 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar6 = param_1[2] - *param_1 >> 1;
  uVar1 = lVar4 + 1;
  if (uVar6 <= 0x7fffffffffffffff - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar9 = uVar1;
    if (uVar1 <= uVar6) {
      uVar9 = uVar6;
    }
    if (0x7fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar5 = (undefined2 *)FUN_18000fb70(uVar9 * 2);
  puVar14 = (undefined2 *)((uVar13 & 0xfffffffffffffffe) + (longlong)puVar5);
  *puVar14 = *param_2;
  puVar2 = (undefined2 *)*param_1;
  if (puVar10 == (undefined2 *)param_1[1]) {
    lVar4 = param_1[1] - (longlong)puVar2;
    puVar7 = puVar5;
    puVar10 = puVar2;
  }
  else {
    FUN_180540530(puVar5,puVar2,(longlong)puVar10 - (longlong)puVar2);
    puVar7 = puVar14 + 1;
    lVar4 = param_1[1] - (longlong)puVar10;
  }
  puVar11 = auStack_38;
  puVar12 = auStack_38;
  FUN_180540530(puVar7,puVar10,lVar4);
  lVar4 = *param_1;
  if (lVar4 == 0) goto LAB_1801d22ea;
  lVar8 = lVar4;
  if ((ulonglong)((param_1[2] - lVar4 >> 1) * 2) < 0x1000) {
LAB_1801d22df:
    puVar12 = puVar11;
  }
  else {
    lVar8 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar8) - 8U) {
      lVar8 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar11 = auStack_30;
      goto LAB_1801d22df;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1801d22ea;
  thunk_FUN_1803d64e0(lVar8);
LAB_1801d22ea:
  *param_1 = (longlong)puVar5;
  param_1[1] = (longlong)(puVar5 + uVar1);
  param_1[2] = (longlong)(puVar5 + uVar9);
  return puVar14;
}



/* ===== 1801d2330 FUN_1801d2330 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801d2330(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  undefined8 *puVar6;
  INT_PTR IVar7;
  undefined4 uVar8;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined4 local_70;
  longlong *local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  pcVar4 = DAT_1809620f0;
  pcVar3 = DAT_1809620e8;
  pcVar2 = DAT_1809620e0;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  if ((param_1 != 0) && (param_2 != 0)) {
    hModule = GetModuleHandleA("tier0.dll");
    if (hModule == (HMODULE)0x0) {
      pFVar5 = (FARPROC)0x0;
    }
    else {
      pFVar5 = GetProcAddress(hModule,
                              "?LoadKV3@@YA_NPEAVKeyValues3@@PEAVCUtlString@@PEBDAEBUKV3ID_t@@2I@Z")
      ;
    }
    if ((((pcVar2 == (code *)0x0) || (pcVar3 == (code *)0x0)) || (pcVar4 == (code *)0x0)) ||
       (pFVar5 == (FARPROC)0x0)) {
      PTR_s_not_initialized_1809ee490 = "material entry points missing";
    }
    else {
      local_60 = "generic";
      local_58 = 0x41b818518343427e;
      local_50 = 0xb5f447c23c0cdf8c;
      FUN_1801d65e0(param_1);
      local_48 = 0;
      uStack_40 = 0;
      puVar6 = (undefined8 *)(*pcVar2)(&local_48,1,6);
      if (puVar6 == &local_48) {
        local_70 = 0;
        local_78 = 0;
        local_68 = (longlong *)0x0;
        IVar7 = (*pFVar5)(&local_48,0,param_1,&local_60);
        if ((char)IVar7 == '\0') {
          (*pcVar3)(&local_48,0);
          PTR_s_not_initialized_1809ee490 = "vmat parse failed";
        }
        else {
          local_70 = CONCAT31(local_70._1_3_,1);
          local_78 = local_78 & 0xffffffff00000000;
          (*pcVar4)(0,&local_68,param_2,&local_48);
          uVar8 = (*pcVar3)(&local_48,0);
          if (local_68 != (longlong *)0x0) {
            lVar1 = *local_68;
            if (lVar1 != 0) {
              FUN_1801d51e0(uVar8,&local_68);
            }
            return lVar1;
          }
          PTR_s_not_initialized_1809ee490 = "material not created";
        }
      }
      else {
        PTR_s_not_initialized_1809ee490 = "kv3 alloc failed";
      }
    }
  }
  return 0;
}



/* ===== 1801d2520 FUN_1801d2520 ===== */

void FUN_1801d2520(longlong *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* ===== 1801d2540 FUN_1801d2540 ===== */

undefined8 FUN_1801d2540(longlong param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    cVar1 = FUN_1801d2520();
    if (cVar1 != '\0') {
      iVar3 = FUN_180011200(param_1 + 0x18);
      lVar4 = FUN_18000f3a0(param_1 + 0x20);
      if ((0 < iVar3) && (lVar4 != 0)) {
        lVar4 = FUN_18000f3a0(lVar4 + 0x30);
        if (lVar4 - 0x10000U < 0x7ffffffeffff) {
          cVar1 = FUN_180011220(lVar4);
          if (cVar1 != '\0') {
            cVar2 = FUN_180011220(lVar4 + 1);
            if ((cVar1 != 'e') || (cVar2 != 'r')) {
              return 1;
            }
          }
        }
      }
      return 0;
    }
  }
  return 0;
}



/* ===== 1801d25f0 FUN_1801d25f0 ===== */

ulonglong FUN_1801d25f0(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong in_RAX;
  HMODULE pHVar5;
  FARPROC pFVar6;
  INT_PTR IVar7;
  ulonglong uVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (DAT_180cc3e7e == '\0') {
    DAT_180cc3e7e = '\x01';
    pHVar5 = GetModuleHandleA("materialsystem2.dll");
    if ((pHVar5 != (HMODULE)0x0) &&
       (pFVar6 = GetProcAddress(pHVar5,"CreateInterface"), pFVar6 != (FARPROC)0x0)) {
      DAT_180ce2030 = (*pFVar6)("VMaterialSystem2_001",0);
    }
    pHVar5 = GetModuleHandleA("tier0.dll");
    if (pHVar5 != (HMODULE)0x0) {
      DAT_180ce1f20 = GetProcAddress(pHVar5,"UtlVectorMemory_CalcNewAllocationCount");
      DAT_180ce2068 = GetProcAddress(pHVar5,"UtlVectorMemory_Alloc");
    }
    pcVar9 = "MISSING";
    pcVar10 = "MISSING";
    if (DAT_180ce2068 != (FARPROC)0x0) {
      pcVar10 = "ok";
    }
    if (DAT_180ce1f20 != (FARPROC)0x0) {
      pcVar9 = "ok";
    }
    in_RAX = FUN_1802b2560("[transparency] material system %p | UtlVectorMemory_CalcNewAllocationCount %s | UtlVectorMemory_Alloc %s"
                           ,DAT_180ce2030,pcVar9,pcVar10);
  }
  lVar2 = DAT_180ce2030;
  if ((((DAT_180ce2030 == 0) || (DAT_180ce1f20 == (FARPROC)0x0)) || (DAT_180ce2068 == (FARPROC)0x0))
     || ((DAT_180ce2030 == 0 || (in_RAX = FUN_1801d2540(param_1), (char)in_RAX == '\0')))) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = *(uint *)(lVar2 + 0x218);
  uVar4 = uVar1;
  if (((uVar1 == *(uint *)(lVar2 + 0x228)) && ((*(uint *)(lVar2 + 0x22c) >> 0x1e & 1) == 0)) &&
     (uVar4 = 0x7fffffff, uVar1 != 0x7fffffff)) {
    uVar8 = (ulonglong)(*(uint *)(lVar2 + 0x22c) & 0x3fffffff);
    IVar7 = (*DAT_180ce1f20)((ulonglong)uVar1,uVar8,(ulonglong)(uVar1 + 1),8);
    for (iVar3 = (int)IVar7; iVar3 <= (int)uVar1; iVar3 = iVar3 / 2) {
      iVar3 = iVar3 + uVar1 + 1;
      uVar8 = (ulonglong)(uint)(iVar3 >> 0x1f);
    }
    IVar7 = (*DAT_180ce2068)(*(undefined8 *)(lVar2 + 0x220),
                             CONCAT71((int7)(uVar8 >> 8),*(uint *)(lVar2 + 0x22c) < 0x40000000),
                             (ulonglong)(uint)(iVar3 * 8),
                             (ulonglong)(uint)(*(int *)(lVar2 + 0x228) << 3));
    *(INT_PTR *)(lVar2 + 0x220) = IVar7;
    if (0x3fffffff < *(uint *)(lVar2 + 0x22c)) {
      *(uint *)(lVar2 + 0x22c) = *(uint *)(lVar2 + 0x22c) & 0x3fffffff;
    }
    *(int *)(lVar2 + 0x228) = iVar3;
    uVar4 = *(uint *)(lVar2 + 0x218);
  }
  *(uint *)(lVar2 + 0x218) = uVar4 + 1;
  lVar2 = *(longlong *)(lVar2 + 0x220);
  *(undefined8 *)(lVar2 + (longlong)(int)uVar1 * 8) = param_1;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



/* ===== 1801d2820 FUN_1801d2820 ===== */

void FUN_1801d2820(void)

{
  FUN_1801d25f0();
  return;
}



/* ===== 1801d2840 FUN_1801d2840 ===== */

void FUN_1801d2840(undefined8 *param_1)

{
  (**(code **)*param_1)();
  return;
}



/* ===== 1801d2860 FUN_1801d2860 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801d2860(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  char local_b8 [48];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_e8;
  *param_2 = 0;
  if (param_1 != 0) {
    iVar2 = FUN_180011200(param_1 + 0x18);
    lVar5 = FUN_18000f3a0(param_1 + 0x20);
    if ((iVar2 - 1U < 0x200) && (lVar5 - 0x10000U < 0x7ffffffeffff)) {
      lVar9 = 0;
      uVar12 = 0;
      if (0 < iVar2) {
        do {
          if (0x2ff < lVar9 + 0x40U) {
            return;
          }
          uVar10 = uVar12 * 0x40;
          lVar6 = FUN_18000f3a0((uVar10 | 0x28) + lVar5);
          if (lVar6 - 0x10000U < 0x7ffffffeffff) {
            lVar8 = 0;
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
            do {
              cVar1 = FUN_180011220(lVar8 + lVar6);
              if (cVar1 == '\0') break;
              local_b8[lVar8] = cVar1;
              uVar7 = lVar8 + 2;
              lVar8 = lVar8 + 1;
            } while (uVar7 < 0x30);
            iVar3 = strncmp(local_b8,"F_",2);
            if (iVar3 == 0) {
              uVar4 = FUN_180011200((uVar10 | 0x10) + lVar5);
              local_c8 = FUN_180011200(uVar10 + lVar5);
              local_c0 = uVar4;
              iVar3 = snprintf(param_2 + lVar9,0x300 - lVar9,"%s=%d/%d ",local_b8);
              lVar9 = lVar9 + iVar3;
            }
            else {
              lVar6 = 0;
              do {
                lVar8 = lVar6 + 1;
                if (local_b8[lVar6] != "shader"[lVar6]) goto LAB_1801d29f2;
                lVar6 = lVar8;
              } while (lVar8 != 7);
              lVar6 = FUN_18000f3a0(lVar5 + (uVar10 | 0x30));
              local_88 = 0;
              uStack_80 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_68 = 0;
              uStack_60 = 0;
              local_58 = 0;
              uStack_50 = 0;
              if (lVar6 - 0x10000U < 0x7ffffffeffff) {
                lVar8 = 0;
                do {
                  cVar1 = FUN_180011220(lVar8 + lVar6);
                  if (cVar1 == '\0') break;
                  local_b8[lVar8 + 0x30] = cVar1;
                  uVar10 = lVar8 + 2;
                  lVar8 = lVar8 + 1;
                } while (uVar10 < 0x40);
              }
              iVar3 = snprintf(param_2 + lVar9,0x300 - lVar9,"shader=%s ",&local_88);
              lVar9 = lVar9 + iVar3;
            }
          }
LAB_1801d29f2:
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while ((int)uVar11 < iVar2);
      }
    }
  }
  return;
}



/* ===== 1801d2b20 FUN_1801d2b20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1801d2b20(longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float *pfVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  float *local_98;
  char local_90 [48];
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if ((param_1 != 0) &&
     (local_a0 = param_2, local_98 = param_3, cVar5 = FUN_1801d2540(), cVar5 != '\0')) {
    iVar7 = FUN_180011200(param_1 + 0x18);
    lVar9 = FUN_18000f3a0(param_1 + 0x20);
    if ((iVar7 - 1U < 0x200) && ((lVar9 - 0x10000U < 0x7ffffffeffff && (uVar13 = 0, 0 < iVar7)))) {
      do {
        uVar14 = (ulonglong)uVar13 * 0x40;
        lVar10 = FUN_18000f3a0(lVar9 + 0x28 + uVar14);
        if (lVar10 - 0x10000U < 0x7ffffffeffff) {
          local_90[0] = '\0';
          local_90[1] = '\0';
          local_90[2] = '\0';
          local_90[3] = '\0';
          local_90[4] = '\0';
          local_90[5] = '\0';
          local_90[6] = '\0';
          local_90[7] = '\0';
          local_90[8] = '\0';
          local_90[9] = '\0';
          local_90[10] = '\0';
          local_90[0xb] = '\0';
          local_90[0xc] = '\0';
          local_90[0xd] = '\0';
          local_90[0xe] = '\0';
          local_90[0xf] = '\0';
          lVar12 = 0;
          local_90[0x10] = '\0';
          local_90[0x11] = '\0';
          local_90[0x12] = '\0';
          local_90[0x13] = '\0';
          local_90[0x14] = '\0';
          local_90[0x15] = '\0';
          local_90[0x16] = '\0';
          local_90[0x17] = '\0';
          local_90[0x18] = '\0';
          local_90[0x19] = '\0';
          local_90[0x1a] = '\0';
          local_90[0x1b] = '\0';
          local_90[0x1c] = '\0';
          local_90[0x1d] = '\0';
          local_90[0x1e] = '\0';
          local_90[0x1f] = '\0';
          local_90[0x20] = '\0';
          local_90[0x21] = '\0';
          local_90[0x22] = '\0';
          local_90[0x23] = '\0';
          local_90[0x24] = '\0';
          local_90[0x25] = '\0';
          local_90[0x26] = '\0';
          local_90[0x27] = '\0';
          local_90[0x28] = '\0';
          local_90[0x29] = '\0';
          local_90[0x2a] = '\0';
          local_90[0x2b] = '\0';
          local_90[0x2c] = '\0';
          local_90[0x2d] = '\0';
          local_90[0x2e] = '\0';
          local_90[0x2f] = '\0';
          do {
            cVar5 = FUN_180011220(lVar12 + lVar10);
            if (cVar5 == '\0') break;
            local_90[lVar12] = cVar5;
            uVar11 = lVar12 + 2;
            lVar12 = lVar12 + 1;
          } while (uVar11 < 0x30);
          iVar8 = FUN_1805117b0(local_90,local_a0);
          if (iVar8 == 0) {
            uVar11 = FUN_180011220((uVar14 | 0x1e) + lVar9);
            if ((uVar11 & 1) != 0) {
              return 0;
            }
            fVar15 = (float)FUN_18000f3d0(uVar14 + lVar9);
            pfVar4 = local_98;
            fVar3 = DAT_1808abf80;
            fVar1 = local_98[1];
            bVar2 = (float)((uint)(*local_98 - fVar15) & _DAT_1808ade90) <= DAT_1808abf80;
            fVar15 = (float)FUN_18000f3d0((uVar14 | 4) + lVar9);
            fVar16 = (float)((uint)(fVar1 - fVar15) & _DAT_1808ade90);
            fVar1 = pfVar4[2];
            fVar15 = (float)FUN_18000f3d0((uVar14 | 8) + lVar9);
            fVar17 = (float)((uint)(fVar1 - fVar15) & _DAT_1808ade90);
            fVar1 = pfVar4[3];
            fVar15 = (float)FUN_18000f3d0((uVar14 | 0xc) + lVar9);
            if (((float)((uint)(fVar1 - fVar15) & _DAT_1808ade90) <= fVar3) &&
               (fVar17 <= fVar3 && (fVar16 <= fVar3 && bVar2))) {
              return 1;
            }
            local_a8[0] = 0;
            FUN_1800233d0(lVar9 + (uVar14 | 0x38),local_a8);
            lVar10 = 0;
            do {
              FUN_180013280(uVar14 + lVar9 + lVar10 * 4,pfVar4 + lVar10);
              lVar10 = lVar10 + 1;
            } while (lVar10 != 4);
            bVar6 = FUN_1801d2820(param_1);
            return bVar6 ^ 1 | 2;
          }
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar7);
    }
  }
  return 0;
}



/* ===== 1801d2da0 FUN_1801d2da0 ===== */

undefined8 FUN_1801d2da0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + -1;
    UNLOCK();
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  LOCK();
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  UNLOCK();
  *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 1;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



/* ===== 1801d2dc0 FUN_1801d2dc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801d2dc0(uint param_1)

{
  char *pcVar1;
  undefined1 auStack_498 [32];
  double local_478;
  double local_470;
  double local_468;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_498;
  FUN_180540170(local_418,0,0x400);
  pcVar1 = "";
  local_468 = (double)((float)(param_1 >> 0x10 & 0xff) / DAT_1808acb94);
  local_470 = (double)((float)(param_1 >> 8 & 0xff) / DAT_1808acb94);
  if ((param_1 >> 0x18 & 1) != 0) {
    pcVar1 = "    F_NO_ZTEST = 1\n";
  }
  local_478 = (double)((float)(param_1 & 0xff) / DAT_1808acb94);
  snprintf(local_418,0x400,
           "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"tools_wireframe.vfx\"\n    F_WIREFRAME = 1\n    F_NO_CULLING = 1\n    F_TRANSLUCENT = 1\n%s    g_vOverrideColor = [%.4f, %.4f, %.4f, 1.0]\n    g_OverrideColorFactor = 1.0\n    g_bIgnoreTintAlpha = 0\n    g_LineThickness = 1.0\n    g_DepthBiasAmount = 0.005\n}\n"
           ,pcVar1);
  local_458 = 0;
  uStack_450 = 0;
  local_448 = 0;
  uStack_440 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_428 = 0;
  uStack_420 = 0;
  snprintf(&local_458,0x40,"neverlose/wireframe_%08x.vmat",param_1);
  FUN_1801d2330(local_418,&local_458);
  return;
}



/* ===== 1801d2ee0 FUN_1801d2ee0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801d2ee0(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char local_18 [16];
  
  DAT_180ce1f30 = 0;
  DAT_180ce1f38 = 0;
  DAT_180ce1f40 = 0;
  DAT_180ce1f48 = 0;
  _DAT_180ce1f50 = 0;
  _DAT_180ce1f58 = 0;
  _DAT_180ce1f60 = 0;
  _DAT_180ce1f68 = 0;
  _DAT_180ce1f70 = 0;
  _DAT_180ce1f78 = 0;
  _DAT_180ce1f80 = 0;
  _DAT_180ce1f88 = 0;
  _DAT_180ce1f90 = 0;
  _DAT_180ce1f98 = 0;
  _DAT_180ce1fa0 = 0;
  _DAT_180ce1fa8 = 0;
  _DAT_180ce1fb0 = 0;
  _DAT_180ce1fb8 = 0;
  DAT_180ce1fc0 = 0;
  _DAT_180ce1fc8 = 0;
  _DAT_180ce1fd0 = 0;
  _DAT_180ce1fd8 = 0;
  _DAT_180ce1fe0 = 0;
  _DAT_180ce1fe8 = 0;
  _DAT_180ce1ff0 = 0;
  _DAT_180ce1ff8 = 0;
  DAT_180ce2000 = 0;
  _DAT_180ce2008 = 0;
  _DAT_180ce2010 = 0;
  _DAT_180ce2018 = 0;
  _DAT_180ce2020 = 0;
  _DAT_180ce2028 = 0;
  if (DAT_180ce2050 != DAT_180ce2058) {
    DAT_180ce2058 = DAT_180ce2050;
  }
  DAT_180ce2038 = 0;
  if (((DAT_1809620e0 == 0) || (DAT_1809620e8 == 0)) || (DAT_1809620f0 == 0)) {
    pcVar5 = "material patterns not resolved";
    PTR_s_not_initialized_1809ee490 = s_material_patterns_not_resolved_180700060;
  }
  else {
    DAT_180ce1f40 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_unlitgeneric.vfx\"\n    F_RENDER_BACKFACES = 0\n    F_DISABLE_Z_BUFFERING = 0\n    F_PAINT_VERTEX_COLORS = 1\n    F_TRANSLUCENT = 1\n    F_BLEND_MODE = 1\n    g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_7652cb.vtex\"\n}\n"
                       ,"neverlose/flat.vmat");
    if (DAT_180ce1f40 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    DAT_180ce1f48 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_unlitgeneric.vfx\"\n    F_RENDER_BACKFACES = 0\n    F_DISABLE_Z_BUFFERING = 1\n    F_DISABLE_Z_WRITE = 1\n    F_PAINT_VERTEX_COLORS = 1\n    F_TRANSLUCENT = 1\n    F_BLEND_MODE = 1\n    g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_7652cb.vtex\"\n}\n"
                       ,"neverlose/flat_iz.vmat");
    if (DAT_180ce1f48 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1f50 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d} format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} --> {\n\n    shader = \"csgo_effects.vfx\"\n\n    F_ADDITIVE_BLEND = 1\n    F_BLEND_MODE = 1\n    F_TRANSLUCENT = 1\n    F_IGNOREZ = 0\n    F_DISABLE_Z_BUFFERING = 0\n    F_RENDER_BACKFACES = 0\n\n    g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n    g_flFresnelExponent = 1.5\n    g_flFresnelFalloff = 5.0\n    g_flFresnelMax = 0.0\n    g_flFresnelMin = 1.0\n    g_flColorBoost = 20.0\n    g_flOpacityScale = 0.6\n    g_vMask1PanSpeed = [0.000000, 0.000000]\n\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n    g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n\n    g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n    g_vMask1Scale = [1.000000, 1.000000]\n\n}\n"
                       ,"neverlose/glow.vmat");
    if (_DAT_180ce1f50 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1f58 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d} format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} --> {\n\n    shader = \"csgo_effects.vfx\"\n\n    F_ADDITIVE_BLEND = 1\n    F_BLEND_MODE = 1\n    F_TRANSLUCENT = 1\n    F_IGNOREZ = 1\n    F_DISABLE_Z_BUFFERING = 1\n    F_DISABLE_Z_WRITE = 1\n    F_RENDER_BACKFACES = 0\n\n    g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n    g_flFresnelExponent = 1.5\n    g_flFresnelFalloff = 5.0\n    g_flFresnelMax = 0.0\n    g_flFresnelMin = 1.0\n    g_flColorBoost = 20.0\n    g_flOpacityScale = 0.6\n    g_vMask1PanSpeed = [0.000000, 0.000000]\n\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n    g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n\n    g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n    g_vMask1Scale = [1.000000, 1.000000]\n\n}\n"
                       ,"neverlose/glow_iz.vmat");
    if (_DAT_180ce1f58 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1f60 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d} format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} --> {\n\n    shader = \"csgo_complex.vfx\"\n    F_SELF_ILLUM = 1\n    F_TRANSLUCENT = 1\n    F_RENDER_BACKFACES = 0\n    F_METALNESS_TEXTURE = 0\n    g_flModelTintAmount = 1.000000\n    g_flOpacityScale = 1.000000\n    g_flMetalness = 0.000000\n    g_flSelfIllumScale = 1.000000\n    g_flSelfIllumBrightness = 4.000000\n    g_flSelfIllumAlbedoFactor = 1.000000\n    g_vSelfIllumTint = [1.000000, 1.000000, 1.000000]\n    g_vSelfIllumScrollSpeed = [0.015000, 0.010000]\n    g_vTexCoordScale = [2.000000, 2.000000]\n    g_bFogEnabled = 0\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_7be61377.vtex\"\n    g_tSelfIllumMask = resource:\"materials/particle/tile/tile_starfield.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_ao_tga_559f1ac6.vtex\"\n\n}\n"
                       ,"neverlose/galaxy.vmat");
    if (_DAT_180ce1f60 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1f68 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d} format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} --> {\n\n    shader = \"csgo_complex.vfx\"\n    F_SELF_ILLUM = 1\n    F_TRANSLUCENT = 1\n    F_RENDER_BACKFACES = 0\n    F_METALNESS_TEXTURE = 0\n    g_flModelTintAmount = 1.000000\n    g_flOpacityScale = 1.000000\n    g_flMetalness = 0.000000\n    g_flSelfIllumScale = 1.000000\n    g_flSelfIllumBrightness = 4.000000\n    g_flSelfIllumAlbedoFactor = 1.000000\n    g_vSelfIllumTint = [1.000000, 1.000000, 1.000000]\n    g_vSelfIllumScrollSpeed = [0.015000, 0.010000]\n    g_vTexCoordScale = [2.000000, 2.000000]\n    g_bFogEnabled = 0\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_7be61377.vtex\"\n    g_tSelfIllumMask = resource:\"materials/particle/tile/tile_starfield.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_ao_tga_559f1ac6.vtex\"\n\n    F_DISABLE_Z_BUFFERING = 1\n\n}\n"
                       ,"neverwin/galaxy_iz.vmat");
    if (_DAT_180ce1f68 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1f70 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d} format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} --> {\n\n    shader = \"csgo_weapon.vfx\"\n    F_ENABLE_ADJUSTMENTS = 1\n    F_ENABLE_SFX_MASK = 1\n    F_GLITTER = 1\n    g_bFogEnabled = 0\n    g_fGlitterIntensity = 0.300000\n    g_fGlitterRainbowBalance = -0.578000\n    g_fGlitterRainbowSpread = 0.601000\n    g_fGlitterScale = 1.400000\n    g_fBrightness = 1.000000\n    g_fContrast = 1.000000\n    g_fSaturation = 1.000000\n    g_fDetailBlendFactor = 1.000000\n    g_fTextureRoughnessBrightness = 1.000000\n    g_fTextureRoughnessContrast = 1.000000\n    g_flMetalnessTransitionBias = 2.000000\n    g_flModelTintAmount = 1.000000\n    g_flUvScale1 = 1.000000\n    g_vMetalnessRemapRange = [0.000000, 1.000000, 0.000000, 0.000000]\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_4fc2d3dd.vtex\"\n    g_tGlitterNormal = resource:\"materials/default/stickers/squares_glitter_normal_tga_25145674.vtex\"\n    g_tMetalness = resource:\"weapons/keychains/weapon_1/materials/kc_wpn_mac10_tile_ao_png_e5743ffc.vtex\"\n    g_tDetail = resource:\"materials/default/default_detail_tga_7a7467a1.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_ao_tga_559f1ac6.vtex\"\n\n}\n"
                       ,"neverlose/glitter.vmat");
    if (_DAT_180ce1f70 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1f78 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d} format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} --> {\n\n    shader = \"csgo_weapon.vfx\"\n    F_ENABLE_ADJUSTMENTS = 1\n    F_ENABLE_SFX_MASK = 1\n    F_GLITTER = 1\n    g_bFogEnabled = 0\n    g_fGlitterIntensity = 0.300000\n    g_fGlitterRainbowBalance = -0.578000\n    g_fGlitterRainbowSpread = 0.601000\n    g_fGlitterScale = 1.400000\n    g_fBrightness = 1.000000\n    g_fContrast = 1.000000\n    g_fSaturation = 1.000000\n    g_fDetailBlendFactor = 1.000000\n    g_fTextureRoughnessBrightness = 1.000000\n    g_fTextureRoughnessContrast = 1.000000\n    g_flMetalnessTransitionBias = 2.000000\n    g_flModelTintAmount = 1.000000\n    g_flUvScale1 = 1.000000\n    g_vMetalnessRemapRange = [0.000000, 1.000000, 0.000000, 0.000000]\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_4fc2d3dd.vtex\"\n    g_tGlitterNormal = resource:\"materials/default/stickers/squares_glitter_normal_tga_25145674.vtex\"\n    g_tMetalness = resource:\"weapons/keychains/weapon_1/materials/kc_wpn_mac10_tile_ao_png_e5743ffc.vtex\"\n    g_tDetail = resource:\"materials/default/default_detail_tga_7a7467a1.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_ao_tga_559f1ac6.vtex\"\n\n    F_DISABLE_Z_BUFFERING = 1\n\n}\n"
                       ,"neverlose/glitter_iz.vmat");
    if (_DAT_180ce1f78 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1f80 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d} format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} --> {\n\n    shader = \"solidcolor.vfx\"\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_7652cb.vtex\"\n    g_tRoughness = resource:\"materials/default/default_normal_tga_b3f4ec4c.vtex\"\n    g_tMetalness = resource:\"materials/default/default_normal_tga_b3f4ec4c.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_normal_tga_b3f4ec4c.vtex\"\n    g_vColorTint = [ 15.000000, 15.000000, 15.000000, 15.000000 ]\n    g_flSelfIllumScale = [ 5.000000, 5.000000, 5.000000, 5.000000 ]\n    g_flSelfIllumBrightness = [ 5.000000, 5.000000, 5.000000, 5.000000 ]\n    g_vSelfIllumTint = [ 10.000000, 10.000000, 10.000000, 10.000000 ]\n    F_BLEND_MODE = 1\n    F_SELF_ILLUM = 1\n    F_PAINT_VERTEX_COLORS = 1\n    F_TRANSLUCENT = 1\n\n}\n"
                       ,"neverlose/bloom.vmat");
    if (_DAT_180ce1f80 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1f88 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d} format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} --> {\n\n    shader = \"solidcolor.vfx\"\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_7652cb.vtex\"\n    g_tRoughness = resource:\"materials/default/default_normal_tga_b3f4ec4c.vtex\"\n    g_tMetalness = resource:\"materials/default/default_normal_tga_b3f4ec4c.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_normal_tga_b3f4ec4c.vtex\"\n    g_vColorTint = [ 15.000000, 15.000000, 15.000000, 15.000000 ]\n    g_flSelfIllumScale = [ 5.000000, 5.000000, 5.000000, 5.000000 ]\n    g_flSelfIllumBrightness = [ 5.000000, 5.000000, 5.000000, 5.000000 ]\n    g_vSelfIllumTint = [ 10.000000, 10.000000, 10.000000, 10.000000 ]\n    F_BLEND_MODE = 1\n    F_SELF_ILLUM = 1\n    F_PAINT_VERTEX_COLORS = 1\n    F_TRANSLUCENT = 1\n    F_RENDER_BACKFACES = 1\n    F_DISABLE_Z_BUFFERING = 1\n    F_IGNOREZ = 1\n    F_DISABLE_Z_WRITE = 1\n\n}\n"
                       ,"neverlose/bloom_iz.vmat");
    if (_DAT_180ce1f88 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1f90 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_effects.vfx\"\n    F_ADDITIVE_BLEND = 0\n    F_BLEND_MODE = 1\n    F_TRANSLUCENT = 1\n    F_DISABLE_Z_BUFFERING = 0\n    g_flOpacityScale = 1.0\n    g_flFresnelExponent = 3.0\n    g_flFresnelFalloff = 2.0\n    g_flFresnelMax = 1.0\n    g_flFresnelMin = 0.0\n    g_flColorBoost = 3.0\n    g_flToolsVisCubemapReflectionRoughness = 0.1\n    g_flBeginMixingRoughness = 0.1\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tMask1 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tMask2 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tMask3 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tSceneDepth = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_vColorTint = [ 1.000000, 1.000000, 1.000000, 1.0 ]\n}\n"
                       ,"neverlose/inner_glow.vmat");
    if (_DAT_180ce1f90 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1f98 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_effects.vfx\"\n    F_ADDITIVE_BLEND = 0\n    F_BLEND_MODE = 1\n    F_TRANSLUCENT = 1\n    F_DISABLE_Z_BUFFERING = 1\n    g_flOpacityScale = 1.0\n    g_flFresnelExponent = 3.0\n    g_flFresnelFalloff = 2.0\n    g_flFresnelMax = 1.0\n    g_flFresnelMin = 0.0\n    g_flColorBoost = 3.0\n    g_flToolsVisCubemapReflectionRoughness = 0.1\n    g_flBeginMixingRoughness = 0.1\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tMask1 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tMask2 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tMask3 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tSceneDepth = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_vColorTint = [ 1.000000, 1.000000, 1.000000, 1.0 ]\n}\n"
                       ,"neverlose/inner_glow_iz.vmat");
    if (_DAT_180ce1f98 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1fa0 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_effects.vfx\"\n    F_ADDITIVE_BLEND = 1\n    F_BLEND_MODE = 1\n    F_TRANSLUCENT = 1\n    F_IGNOREZ = 0\n    F_DISABLE_Z_BUFFERING = 0\n    F_RENDER_BACKFACES = 0\n    g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n    g_flFresnelExponent = 1.5\n    g_flFresnelFalloff = 5.0\n    g_flFresnelMax = 0.0\n    g_flFresnelMin = 1.0\n    g_flColorBoost = 20.0\n    g_flOpacityScale = 0.6\n    g_vTexCoordScrollSpeed = [0.05, 0.02]\n    g_vTexCoordScale = [1.2, 1.2]\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n    g_tMask2 = resource:\"materials/dev/water_waves.vtex\"\n    g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n}\n"
                       ,"neverlose/animated_glow.vmat");
    if (_DAT_180ce1fa0 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1fa8 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_effects.vfx\"\n    F_ADDITIVE_BLEND = 1\n    F_BLEND_MODE = 1\n    F_TRANSLUCENT = 1\n    F_IGNOREZ = 1\n    F_DISABLE_Z_BUFFERING = 1\n    F_DISABLE_Z_WRITE = 1\n    F_RENDER_BACKFACES = 0\n    g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n    g_flFresnelExponent = 1.5\n    g_flFresnelFalloff = 5.0\n    g_flFresnelMax = 0.0\n    g_flFresnelMin = 1.0\n    g_flColorBoost = 20.0\n    g_flOpacityScale = 0.6\n    g_vTexCoordScrollSpeed = [0.05, 0.02]\n    g_vTexCoordScale = [1.2, 1.2]\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n    g_tMask2 = resource:\"materials/dev/water_waves.vtex\"\n    g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n}\n"
                       ,"neverlose/animated_glow_iz.vmat");
    if (_DAT_180ce1fa8 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1fb0 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_effects.vfx\"\n    F_ADDITIVE_BLEND = 1\n    F_BLEND_MODE = 1\n    F_TRANSLUCENT = 1\n    g_vColorTint = [1.0, 1.0, 1.0, 0.0]\n    g_flOpacityScale = 0.45\n    g_flFresnelExponent = 0.75\n    g_flFresnelFalloff = 1.0\n    g_flFresnelMax = 0.0\n    g_flFresnelMin = 1.0\n    g_flColorBoost = 2.25\n    g_flToolsVisCubemapReflectionRoughness = 1.0\n    g_flBeginMixingRoughness = 1.0\n    g_vTexCoordScrollSpeed = [0.05, 0.02]\n    g_vTexCoordScale = [1.2, 1.2]\n    g_tColor = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n    g_tMask2 = resource:\"materials/dev/water_waves.vtex\"\n    g_tMask3 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tSceneDepth = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n}\n"
                       ,"neverwin/animated_outlines.vmat");
    if (_DAT_180ce1fb0 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1fb8 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_effects.vfx\"\n    F_ADDITIVE_BLEND = 1\n    F_BLEND_MODE = 1\n    F_TRANSLUCENT = 1\n    F_DISABLE_Z_BUFFERING = 1\n    F_DISABLE_Z_WRITE = 1\n    g_vColorTint = [1.0, 1.0, 1.0, 0.0]\n    g_flOpacityScale = 0.45\n    g_flFresnelExponent = 0.75\n    g_flFresnelFalloff = 1.0\n    g_flFresnelMax = 0.0\n    g_flFresnelMin = 1.0\n    g_flColorBoost = 2.25\n    g_flToolsVisCubemapReflectionRoughness = 1.0\n    g_flBeginMixingRoughness = 1.0\n    g_vTexCoordScrollSpeed = [0.05, 0.02]\n    g_vTexCoordScale = [1.2, 1.2]\n    g_tColor = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n    g_tMask2 = resource:\"materials/dev/water_waves.vtex\"\n    g_tMask3 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tSceneDepth = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n}\n"
                       ,"neverlose/animated_outlines_iz.vmat");
    if (_DAT_180ce1fb8 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1fd0 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_character.vfx\"\n    F_IRIDESCENCE = 1\n    F_CLOTH_SHADING = 1\n    F_RENDER_BACKFACES = 1\n    F_DISABLE_Z_PREPASS = 1\n    F_TRANSLUCENT = 1\n    F_ADDITIVE_BLEND = 1\n    g_vColorTint = [1.0, 1.0, 1.0]\n    g_flModelTintAmount = 1.0\n    g_flOpacityScale = 1.0\n    g_vTexCoordScrollSpeed = [0.05, 0.02]\n    g_vTexCoordScale = [1.2, 1.2]\n    g_flIridescentStrength = 2.0\n    g_flIridescentFresnelStrength = 15.0\n    g_flIridescentHueShift = 0.5\n    g_flSheenScale = 10.0\n    g_flSheenTintColor = [1.0, 1.0, 1.0]\n    g_fContrast = 0.5\n    g_fBrightness = 1.5\n    g_fSaturation = 1.5\n    g_flAmbientOcclusionMasking = 0.0\n    g_bFogEnabled = 0\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tNormal = resource:\"materials/dev/water_waves.vtex\"\n    g_tMetalness = resource:\"materials/dev/water_waves.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tIridescentThickness_Mask = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n}\n"
                       ,"neverlose/metallic.vmat");
    if (_DAT_180ce1fd0 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1fd8 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_character.vfx\"\n    F_IRIDESCENCE = 1\n    F_CLOTH_SHADING = 1\n    F_RENDER_BACKFACES = 1\n    F_DISABLE_Z_PREPASS = 1\n    F_TRANSLUCENT = 1\n    F_ADDITIVE_BLEND = 1\n    F_IGNOREZ = 1\n    F_DISABLE_Z_BUFFERING = 1\n    F_DISABLE_Z_WRITE = 1\n    g_vColorTint = [1.0, 1.0, 1.0]\n    g_flModelTintAmount = 1.0\n    g_flOpacityScale = 1.0\n    g_vTexCoordScrollSpeed = [0.05, 0.02]\n    g_vTexCoordScale = [1.2, 1.2]\n    g_flIridescentStrength = 2.0\n    g_flIridescentFresnelStrength = 15.0\n    g_flIridescentHueShift = 0.5\n    g_flSheenScale = 10.0\n    g_flSheenTintColor = [1.0, 1.0, 1.0]\n    g_fContrast = 0.5\n    g_fBrightness = 1.5\n    g_fSaturation = 1.5\n    g_flAmbientOcclusionMasking = 0.0\n    g_bFogEnabled = 0\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tNormal = resource:\"materials/dev/water_waves.vtex\"\n    g_tMetalness = resource:\"materials/dev/water_waves.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tIridescentThickness_Mask = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n}\n"
                       ,"neverlose/metallic_iz.vmat");
    if (_DAT_180ce1fd8 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1fe0 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_effects.vfx\"\n    F_ADDITIVE_BLEND = 1\n    F_BLEND_MODE = 1\n    F_TRANSLUCENT = 1\n    g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n    g_vTexCoordScrollSpeed = [0.1, 0.1]\n    g_flFresnelExponent = 1.5\n    g_flFresnelFalloff = 10.0\n    g_flFresnelMax = 0.0\n    g_flFresnelMin = 1.0\n    g_flColorBoost = 20.0\n    g_tMetalness = resource:\"materials/default/default_rough_tga_8aa56190.vtex\"\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_ao_tga_79a2e0d0.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_1b833b2a.vtex\"\n}\n"
                       ,"neverlose/scroll_glow.vmat");
    if (_DAT_180ce1fe0 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1fe8 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_effects.vfx\"\n    F_ADDITIVE_BLEND = 1\n    F_BLEND_MODE = 1\n    F_TRANSLUCENT = 1\n    F_IGNOREZ = 1\n    F_DISABLE_Z_BUFFERING = 1\n    F_DISABLE_Z_WRITE = 1\n    g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n    g_vTexCoordScrollSpeed = [0.1, 0.1]\n    g_flFresnelExponent = 1.5\n    g_flFresnelFalloff = 10.0\n    g_flFresnelMax = 0.0\n    g_flFresnelMin = 1.0\n    g_flColorBoost = 20.0\n    g_tMetalness = resource:\"materials/default/default_rough_tga_8aa56190.vtex\"\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_ao_tga_79a2e0d0.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_1b833b2a.vtex\"\n}\n"
                       ,"neverlose/scroll_glow_iz.vmat");
    if (_DAT_180ce1fe8 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1ff0 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_complex.vfx\"\n    F_SPECULAR = 1\n    F_METALNESS_TEXTURE = 1\n    F_PAINT_VERTEX_COLORS = 1\n    F_TRANSLUCENT = 1\n    F_DISABLE_Z_PREPASS = 1\n    F_DISABLE_Z_WRITE = 1\n    g_vColorTint = [1.0, 1.0, 1.0, 0.0]\n    g_flMetalness = 1.0\n    g_flRoughness = 0.05\n    g_flSpecularScale = 5.0\n    g_flAmbientOcclusionDirectSpecular = 1.0\n    g_tColor = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_7652cb.vtex\"\n    g_tTintMask = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n}\n"
                       ,"neverlose/specular.vmat");
    if (_DAT_180ce1ff0 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce1ff8 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_complex.vfx\"\n    F_SPECULAR = 1\n    F_METALNESS_TEXTURE = 1\n    F_PAINT_VERTEX_COLORS = 1\n    F_TRANSLUCENT = 1\n    F_DISABLE_Z_PREPASS = 1\n    F_DISABLE_Z_WRITE = 1\n    F_DISABLE_Z_BUFFERING = 1\n    F_IGNOREZ = 1\n    g_vColorTint = [1.0, 1.0, 1.0, 0.0]\n    g_flMetalness = 1.0\n    g_flRoughness = 0.05\n    g_flSpecularScale = 5.0\n    g_flAmbientOcclusionDirectSpecular = 1.0\n    g_tColor = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_7652cb.vtex\"\n    g_tTintMask = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n}\n"
                       ,"neverlose/specular_iz.vmat");
    if (_DAT_180ce1ff8 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    iVar2 = FUN_1804e4d70(&DAT_1809ee4a0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809ee4ec == 0x7fffffff) {
      DAT_1809ee4ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    FUN_1801d4510(&DAT_180ca0fa0);
    FUN_1801d4460(&DAT_180ce2070);
    DAT_180cc3e7d = 0;
    _DAT_180ce2040 = 0;
    uRam0000000180ce2048 = 0;
    FUN_1804e4e90(&DAT_1809ee4a0);
    local_18[0] = '\0';
    local_18[1] = '\x01';
    pcVar5 = local_18;
    do {
      cVar1 = *pcVar5;
      uVar4 = 0xffffff;
      if (cVar1 != '\0') {
        uVar4 = 0x1ffffff;
      }
      lVar3 = FUN_1801d2dc0(uVar4);
      (&DAT_180ce2000)[cVar1 != '\0'] = lVar3;
      if (lVar3 != 0) {
        DAT_180ce2038 = DAT_180ce2038 + 1;
      }
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 != local_18 + 2);
    _DAT_180ce2010 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_complex.vfx\"\n    F_SELF_ILLUM = 1\n    F_RENDER_BACKFACES = 1\n    F_TRANSLUCENT = 1\n    g_vColorTint = [0.0, 0.0, 0.0]\n    g_flModelTintAmount = 1.0\n    g_flOpacityScale = 0.8\n    g_flSelfIllumBrightness = 3.0\n    g_flSelfIllumScale = 1.5\n    g_vSelfIllumTint = [0.4, 0.7, 1.0]\n    g_flSelfIllumAlbedoFactor = 0.3\n    g_vSelfIllumScrollSpeed = [0.15, 0.1]\n    g_vTexCoordScrollSpeed = [0.03, 0.02]\n    g_vTexCoordScale = [2.0, 2.0]\n    g_bFogEnabled = 0\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_7652cb.vtex\"\n    g_tSelfIllumMask = resource:\"materials/particle/electrical/electrical_cracks.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tTintMask = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n}\n"
                       ,"neverlose/electric.vmat");
    if (_DAT_180ce2010 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce2018 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_complex.vfx\"\n    F_SELF_ILLUM = 1\n    F_RENDER_BACKFACES = 1\n    F_TRANSLUCENT = 1\n    F_DISABLE_Z_BUFFERING = 1\n    F_DISABLE_Z_WRITE = 1\n    g_vColorTint = [0.0, 0.0, 0.0]\n    g_flModelTintAmount = 1.0\n    g_flOpacityScale = 0.8\n    g_flSelfIllumBrightness = 3.0\n    g_flSelfIllumScale = 1.5\n    g_vSelfIllumTint = [0.4, 0.7, 1.0]\n    g_flSelfIllumAlbedoFactor = 0.3\n    g_vSelfIllumScrollSpeed = [0.15, 0.1]\n    g_vTexCoordScrollSpeed = [0.03, 0.02]\n    g_vTexCoordScale = [2.0, 2.0]\n    g_bFogEnabled = 0\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_7652cb.vtex\"\n    g_tSelfIllumMask = resource:\"materials/particle/electrical/electrical_cracks.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tTintMask = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n}\n"
                       ,"neverlose/electric_iz.vmat");
    if (_DAT_180ce2018 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce2020 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_character.vfx\"\n    F_IRIDESCENCE = 1\n    F_CLOTH_SHADING = 1\n    F_RENDER_BACKFACES = 1\n    F_DISABLE_Z_PREPASS = 1\n    g_vColorTint = [1.0, 1.0, 1.0]\n    g_flModelTintAmount = 1.0\n    g_flOpacityScale = 1.0\n    g_vTexCoordScale = [1.0, 1.0]\n    g_flIridescentStrength = 3.5\n    g_flIridescentFresnelStrength = 4.0\n    g_flIridescentHueShift = 1.0\n    g_flSheenScale = 6.0\n    g_flSheenTintColor = [1.0, 1.0, 1.0]\n    g_fContrast = 0.35\n    g_fBrightness = 1.25\n    g_fSaturation = 1.6\n    g_flAmbientOcclusionMasking = 0.0\n    g_bFogEnabled = 0\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_7652cb.vtex\"\n    g_tMetalness = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tIridescentThickness_Mask = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n}\n"
                       ,"neverlose/pearl.vmat");
    if (_DAT_180ce2020 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    _DAT_180ce2028 =
         FUN_1801d2330("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n    shader = \"csgo_character.vfx\"\n    F_IRIDESCENCE = 1\n    F_CLOTH_SHADING = 1\n    F_RENDER_BACKFACES = 1\n    F_DISABLE_Z_PREPASS = 1\n    F_IGNOREZ = 1\n    F_DISABLE_Z_BUFFERING = 1\n    F_DISABLE_Z_WRITE = 1\n    g_vColorTint = [1.0, 1.0, 1.0]\n    g_flModelTintAmount = 1.0\n    g_flOpacityScale = 1.0\n    g_vTexCoordScale = [1.0, 1.0]\n    g_flIridescentStrength = 3.5\n    g_flIridescentFresnelStrength = 4.0\n    g_flIridescentHueShift = 1.0\n    g_flSheenScale = 6.0\n    g_flSheenTintColor = [1.0, 1.0, 1.0]\n    g_fContrast = 0.35\n    g_fBrightness = 1.25\n    g_fSaturation = 1.6\n    g_flAmbientOcclusionMasking = 0.0\n    g_bFogEnabled = 0\n    g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n    g_tNormal = resource:\"materials/default/default_normal_tga_7652cb.vtex\"\n    g_tMetalness = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n    g_tAmbientOcclusion = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n    g_tIridescentThickness_Mask = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n}\n"
                       ,"neverlose/pearl_iz.vmat");
    if (_DAT_180ce2028 != 0) {
      DAT_180ce2038 = DAT_180ce2038 + 1;
    }
    pcVar5 = (char *)(ulonglong)DAT_180ce2038;
    if (DAT_180ce2038 != 0) {
      PTR_s_not_initialized_1809ee490 = (undefined *)0x0;
      return CONCAT71((uint7)(uint3)(DAT_180ce2038 >> 8),1);
    }
  }
  return (ulonglong)pcVar5 & 0xffffffffffffff00;
}



/* ===== 1801d34f0 FUN_1801d34f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801d34f0(void)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  code ****ppppcVar9;
  code *pcVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  size_t sVar15;
  code *******pppppppcVar16;
  HMODULE hModule;
  FARPROC pFVar17;
  undefined8 *puVar18;
  INT_PTR IVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined8 ****ppppuVar23;
  code *******pppppppcVar24;
  ulonglong uVar25;
  longlong *plVar26;
  byte *pbVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  int iVar31;
  undefined8 ****ppppuVar32;
  int iVar33;
  code *******unaff_R14;
  byte *pbVar34;
  undefined4 uVar35;
  undefined4 extraout_XMM0_Da;
  float unaff_XMM6_Da;
  undefined8 uStack_4e0;
  undefined1 auStack_4d8 [8];
  undefined1 auStack_4d0 [24];
  undefined8 *local_4b8;
  int local_4b0 [2];
  undefined1 local_4a8;
  undefined4 local_498;
  undefined8 *local_490;
  byte *local_488;
  byte *local_480;
  byte *local_478;
  float local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 local_464;
  byte *local_460 [4];
  undefined *local_440;
  longlong local_438;
  byte *local_430;
  byte *pbStack_428;
  longlong local_420;
  char *local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined1 local_400 [16];
  undefined1 local_3f0 [16];
  code *******local_3e0;
  undefined8 uStack_3d8;
  ulonglong local_3d0;
  ulonglong local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 ****local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  ulonglong local_398;
  longlong local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined1 local_368 [768];
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_4d8;
  FUN_1800941c0();
  local_430 = (byte *)0x0;
  pbStack_428 = (byte *)0x0;
  local_420 = 0;
  iVar12 = FUN_1804e4d70(&DAT_1809ee4f0);
  pbVar27 = DAT_180ce1ec8;
  pbVar34 = DAT_180ce1ec0;
  puVar30 = auStack_4d8;
  if (iVar12 != 0) goto LAB_1801d4023;
  if (DAT_1809ee53c == 0x7fffffff) {
    DAT_1809ee53c = 0x7ffffffe;
    puVar30 = auStack_4d8;
    goto LAB_1801d4018;
  }
  local_478 = DAT_180ce1ec0;
  local_430 = DAT_180ce1ec0;
  DAT_180ce1ec0 = (byte *)0x0;
  local_470 = SUB84(DAT_180ce1ec8,0);
  uStack_46c = (undefined4)((ulonglong)DAT_180ce1ec8 >> 0x20);
  pbStack_428 = DAT_180ce1ec8;
  DAT_180ce1ec8 = (byte *)0x0;
  local_438 = DAT_180ce1ed0;
  local_420 = DAT_180ce1ed0;
  DAT_180ce1ed0 = 0;
  FUN_1804e4e90(&DAT_1809ee4f0);
  puVar28 = auStack_4d8;
  puVar29 = auStack_4d8;
  pbVar14 = pbVar34;
  if (pbVar34 != pbVar27) {
    do {
      iVar12 = FUN_1804e4d70(&DAT_1809ee4f0);
      if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809ee53c == 0x7fffffff) {
        DAT_1809ee53c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      uVar25 = DAT_180ce1f10 &
               (((((((((ulonglong)*pbVar34 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)pbVar34[1]) * 0x100000001b3 ^ (ulonglong)pbVar34[2]) * 0x100000001b3
                   ^ (ulonglong)pbVar34[3]) * 0x100000001b3 ^ (ulonglong)pbVar34[4]) * 0x100000001b3
                 ^ (ulonglong)pbVar34[5]) * 0x100000001b3 ^ (ulonglong)pbVar34[6]) * 0x100000001b3 ^
               (ulonglong)pbVar34[7]) * 0x100000001b3;
      puVar18 = *(undefined8 **)(DAT_180ce1ef8 + 8 + uVar25 * 0x10);
      if (puVar18 == DAT_180ce1ee8) {
LAB_1801d36b5:
        puVar18 = (undefined8 *)0x0;
      }
      else {
        lVar3 = puVar18[2];
        while (*(longlong *)pbVar34 != lVar3) {
          if (puVar18 == *(undefined8 **)(DAT_180ce1ef8 + uVar25 * 0x10)) goto LAB_1801d36b5;
          puVar18 = (undefined8 *)puVar18[1];
          lVar3 = puVar18[2];
        }
      }
      if ((puVar18 == (undefined8 *)0x0) && (DAT_180ce1ef0 < 0x100)) {
        FUN_1804e4e90(&DAT_1809ee4f0);
        pbVar14 = (byte *)FUN_1801d2840(*(undefined8 *)pbVar34);
        pbVar27 = (byte *)"neverlose/blend";
        if (pbVar14 != (byte *)0x0) {
          pbVar27 = pbVar14;
        }
        local_3e0 = (code *******)0x0;
        uStack_3d8 = 0;
        local_3d0 = 0;
        local_3c8 = 0;
        local_488 = pbVar14;
        sVar15 = strlen((char *)pbVar27);
        FUN_1800133a0(&local_3e0,pbVar27,sVar15);
        uVar11 = local_3c8;
        uVar25 = local_3d0;
        pppppppcVar24 = local_3e0;
        if (5 < local_3d0) {
          uVar1 = local_3d0 - 5;
          if (local_3d0 < uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_18002a1a0();
          }
          sVar15 = 5;
          if (local_3d0 - uVar1 < 5) {
            sVar15 = local_3d0 - uVar1;
          }
          pppppppcVar16 = (code *******)&local_3e0;
          if (0xf < local_3c8) {
            pppppppcVar16 = local_3e0;
          }
          iVar12 = memcmp((void *)((longlong)pppppppcVar16 + uVar1),".vmat",sVar15);
          unaff_R14 = pppppppcVar24;
          if ((iVar12 == 0) && (4 < sVar15)) {
            if (uVar25 < uVar1) {
              FUN_180028a50(&local_3e0,uVar1 - uVar25,0);
            }
            else {
              pppppppcVar16 = (code *******)&local_3e0;
              if (0xf < uVar11) {
                pppppppcVar16 = pppppppcVar24;
              }
              local_3d0 = uVar1;
              *(undefined1 *)((longlong)pppppppcVar16 + uVar1) = 0;
            }
          }
        }
        FUN_1800134a0(&local_3e0,"_transparent.vmat",0x11);
        _DAT_180ce1f28 = _DAT_180ce1f28 + 1;
        local_3b0 = (undefined8 ****)0x0;
        uStack_3a8 = 0;
        pFVar17 = (FARPROC)0x0;
        local_3a0 = 0;
        local_398 = 0;
        sVar15 = strlen(
                       "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n"
                       );
        FUN_1800133a0(&local_3b0,
                      "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\nformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n"
                      ,sVar15);
        if (*(int *)(pbVar34 + 8) == 2) {
          sVar15 = strlen("    shader = \"csgo_complex.vfx\"\n");
          FUN_1800134a0(&local_3b0,"    shader = \"csgo_complex.vfx\"\n",sVar15);
        }
        sVar15 = strlen(
                       "    F_RENDER_BACKFACES = 0\n    F_TINT_MASK = 0\n    F_EYEBALLS = 0\n    F_STICKERS = 0\n    F_PATCHES = 0\n    F_TRANSLUCENT = 1\n}\n"
                       );
        FUN_1800134a0(&local_3b0,
                      "    F_RENDER_BACKFACES = 0\n    F_TINT_MASK = 0\n    F_EYEBALLS = 0\n    F_STICKERS = 0\n    F_PATCHES = 0\n    F_TRANSLUCENT = 1\n}\n"
                      ,sVar15);
        pcVar10 = DAT_1809620f8;
        ppppcVar9 = DAT_1809620e8;
        pcVar7 = DAT_1809620e0;
        pppppppcVar24 = (code *******)&local_3e0;
        if (0xf < local_3c8) {
          pppppppcVar24 = local_3e0;
        }
        ppppuVar32 = &local_3b0;
        if (0xf < local_398) {
          ppppuVar32 = local_3b0;
        }
        local_440 = *(undefined **)pbVar34;
        if (local_440 == (undefined *)0x0) {
LAB_1801d39f8:
          pbVar27 = (byte *)0x0;
        }
        else {
          if (ppppuVar32 == (undefined8 ****)0x0) goto LAB_1801d39f8;
          if (pppppppcVar24 == (code *******)0x0) goto LAB_1801d39f8;
          hModule = GetModuleHandleA("tier0.dll");
          if (hModule != (HMODULE)0x0) {
            pFVar17 = GetProcAddress(hModule,
                                     "?LoadKV3@@YA_NPEAVKeyValues3@@PEAVCUtlString@@PEBDAEBUKV3ID_t@@2I@Z"
                                    );
          }
          unaff_R14 = (code *******)ppppcVar9;
          if ((((pcVar7 == (code *)0x0) || (ppppcVar9 == (code ****)0x0)) ||
              (pcVar10 == (code *)0x0)) || (pFVar17 == (FARPROC)0x0)) {
LAB_1801d39f3:
            pbVar14 = local_488;
            goto LAB_1801d39f8;
          }
          local_418 = "generic";
          local_410 = 0x41b818518343427e;
          local_408 = 0xb5f447c23c0cdf8c;
          local_3c0 = 0;
          uStack_3b8 = 0;
          puVar18 = (undefined8 *)(*pcVar7)(&local_3c0,1,6);
          if (puVar18 != &local_3c0) goto LAB_1801d39f3;
          local_390 = (longlong)local_440;
          local_388 = 0;
          uStack_380 = 0;
          local_378 = 0;
          local_370 = 1;
          local_490 = (undefined8 *)0x0;
          local_4b0[0] = 0;
          local_4b8 = (undefined8 *)0x0;
          IVar19 = (*pFVar17)(&local_3c0,0,ppppuVar32,&local_418);
          if ((char)IVar19 == '\0') {
            (*(code *)ppppcVar9)(&local_3c0,0);
            goto LAB_1801d39f3;
          }
          local_4a8 = 1;
          local_4b0[0] = 1;
          local_4b8 = &local_3c0;
          (*pcVar10)(0,&local_490,pppppppcVar24,&local_390);
          uVar35 = (*(code *)ppppcVar9)(&local_3c0,0);
          if (local_490 == (undefined8 *)0x0) goto LAB_1801d39f3;
          local_460[3] = (byte *)*local_490;
          if (local_460[3] != (byte *)0x0) {
            uVar35 = FUN_1801d51e0(uVar35,&local_490);
            puVar18 = local_490;
            plVar20 = (longlong *)FUN_1801d5390(uVar35,local_400,local_460 + 3);
            *(undefined8 **)(*plVar20 + 0x18) = puVar18;
          }
          pbVar27 = local_460[3];
          pbVar14 = local_488;
        }
        local_480 = pbVar27;
        FUN_180540170(local_368,0,0x300);
        FUN_1801d2860(pbVar27,local_368);
        if (local_480 == (byte *)0x0) {
          pbVar27 = (byte *)&DAT_1806dfbb4;
          if (pbVar14 != (byte *)0x0) {
            pbVar27 = pbVar14;
          }
          FUN_1802b2560("[error] transparency variant failed | %s",pbVar27);
        }
        else {
          pppppppcVar24 = (code *******)&local_3e0;
          if (0xf < local_3c8) {
            pppppppcVar24 = local_3e0;
          }
          FUN_1802b2560("[transparency] variant %s (set %d) | %s",pppppppcVar24,
                        *(undefined4 *)(pbVar34 + 8),local_368);
        }
        iVar13 = -0x7f611b10;
        local_440 = &DAT_1809ee4f0;
        iVar12 = FUN_1804e4d70(&DAT_1809ee4f0);
        pbVar27 = local_480;
        if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(5);
        }
        if (DAT_1809ee53c == 0x7fffffff) {
          DAT_1809ee53c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(6);
        }
        plVar20 = (longlong *)FUN_1801d4ef0(extraout_XMM0_Da,local_3f0,pbVar34);
        *(byte **)(*plVar20 + 0x18) = pbVar27;
        if (local_480 != (byte *)0x0) {
          plVar20 = (longlong *)FUN_1801d4cb0(&DAT_180ca0f60,local_460,&local_480);
          *(undefined1 *)(*plVar20 + 0x18) = 1;
        }
        FUN_1804e4e90(&DAT_1809ee4f0);
        if (0xf < local_398) {
          uVar25 = local_398 + 1;
          ppppuVar23 = local_3b0;
          if (0xfff < uVar25) {
            ppppuVar23 = (undefined8 ****)local_3b0[-1];
            if (0x1f < (ulonglong)((longlong)local_3b0 + (-8 - (longlong)ppppuVar23))) {
              pcVar7 = (code *)swi(0x29);
              (*pcVar7)(5);
              puVar28 = auStack_4d0;
              goto LAB_1801d3c6b;
            }
            uVar25 = local_398 + 0x28;
          }
          thunk_FUN_1803d64e0(ppppuVar23,uVar25);
        }
        local_3a0 = 0;
        local_398 = 0xf;
        local_3b0 = (undefined8 ****)((ulonglong)local_3b0 & 0xffffffffffffff00);
        if (0xf < local_3c8) {
          uVar25 = local_3c8 + 1;
          pppppppcVar24 = local_3e0;
          if (0xfff < uVar25) {
            pppppppcVar24 = (code *******)local_3e0[-1];
            if (0x1f < (ulonglong)((longlong)local_3e0 + (-8 - (longlong)pppppppcVar24))) {
LAB_1801d3c6b:
              pcVar7 = (code *)swi(0x29);
              (*pcVar7)(5);
              puVar29 = puVar28 + 8;
              goto LAB_1801d3c72;
            }
            uVar25 = local_3c8 + 0x28;
          }
          thunk_FUN_1803d64e0(pppppppcVar24,uVar25);
        }
      }
      else {
        FUN_1804e4e90(&DAT_1809ee4f0);
      }
      pbVar34 = pbVar34 + 0x10;
    } while (pbVar34 != (byte *)CONCAT44(uStack_46c,local_470));
    pbVar14 = local_478;
  }
  unaff_XMM6_Da = DAT_1809ee464;
  local_470 = DAT_1809ee464;
  uStack_46c = 0;
  uStack_468 = 0;
  local_464 = 0;
  local_460[0] = (byte *)0x0;
  local_460[1] = (byte *)0x0;
  local_460[2] = (byte *)0x0;
  local_478 = &DAT_1809ee4f0;
  iVar12 = FUN_1804e4d70(&DAT_1809ee4f0);
  puVar18 = DAT_180ce1ee8;
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ee53c == 0x7fffffff) {
    DAT_1809ee53c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  for (puVar4 = (undefined8 *)*DAT_180ce1ee8; puVar4 != puVar18; puVar4 = (undefined8 *)*puVar4) {
    if (puVar4[3] != 0) {
      FUN_1800242d0(local_460);
    }
  }
  FUN_1804e4e90(&DAT_1809ee4f0);
  iVar13 = 0;
  ppppuVar32 = (undefined8 ****)0x0;
  iVar31 = 0;
  unaff_R14 = (code *******)0x0;
  iVar33 = 0;
  pbVar27 = local_460[0];
  puVar30 = auStack_4d8;
  pbVar34 = local_460[1];
  iVar12 = 0;
  if (local_460[0] == local_460[1]) {
LAB_1801d3c85:
    if ((iVar31 != DAT_1809ee498) || (iVar33 != 0)) goto LAB_1801d3c92;
  }
  else {
    do {
      iVar13 = iVar12;
      uVar5 = *(undefined8 *)pbVar27;
      *(undefined8 *)(puVar29 + -8) = 0x1801d3c44;
      iVar12 = FUN_1801d2b20(uVar5,"g_flOpacityScale",puVar29 + 0x68);
      if (iVar12 == 0) {
        ppppuVar32 = (undefined8 ****)(ulonglong)((int)ppppuVar32 + 1);
      }
      else if (iVar12 == 2) {
LAB_1801d3c72:
        iVar13 = iVar13 + 1;
      }
      else if (iVar12 == 3) {
        unaff_R14 = (code *******)(ulonglong)((int)unaff_R14 + 1);
      }
      iVar31 = (int)ppppuVar32;
      iVar33 = (int)unaff_R14;
      pbVar27 = pbVar27 + 8;
      iVar12 = iVar13;
    } while (pbVar27 != pbVar34);
    puVar30 = puVar29;
    if (iVar13 == 0) goto LAB_1801d3c85;
LAB_1801d3c92:
    *(int *)(puVar30 + 0x28) = iVar33;
    *(int *)(puVar30 + 0x20) = iVar31;
    *(undefined8 *)(puVar30 + -8) = 0x1801d3cc9;
    DAT_1809ee498 = iVar31;
    FUN_1802b2560("[transparency] g_flOpacityScale %.4f | %d variants | written and queued %d | no such parameter %d | NOT queued %d"
                  ,(double)unaff_XMM6_Da,(longlong)local_460[1] - *(longlong *)(puVar30 + 0x78) >> 3
                  ,iVar13);
  }
  *(undefined8 *)(puVar30 + -8) = 0x1801d3cd4;
  FUN_1800132b0(puVar30 + 0x78);
  iVar12 = DAT_180ce1ed8;
  LOCK();
  DAT_180ce1ed8 = DAT_180ce1ed8 + 1;
  UNLOCK();
  if ((DAT_180cc3e7d != '\0') || (DAT_180ce2000 == 0)) goto LAB_1801d3fa4;
  *(undefined4 *)(puVar30 + 0x40) = 0;
  *(undefined8 *)(puVar30 + -8) = 0x1801d3d0f;
  iVar13 = FUN_1804e4d70(&DAT_1809ee4a0);
  if (iVar13 != 0) {
LAB_1801d4023:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar30 + -8) = 0x1801d402d;
    FUN_1804e4a90(5);
  }
  if (DAT_1809ee4ec == 0x7fffffff) {
LAB_1801d4010:
    DAT_1809ee4ec = DAT_1809ee4ec + -1;
LAB_1801d4018:
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar30 + -8) = &UNK_1801d4022;
    FUN_1804e4a90(6);
  }
  bVar8 = false;
  if ((longlong *)*DAT_180ce2078 != DAT_180ce2078) {
    plVar20 = (longlong *)*DAT_180ce2078;
    plVar26 = DAT_180ce2078;
    do {
      lVar3 = DAT_180ce2088;
      if ((iVar12 + 1) - (int)plVar20[3] < 5) {
        if ((!bVar8) && (0xb < (iVar12 + 1) - *(int *)((longlong)plVar20 + 0x14))) {
          *(int *)(puVar30 + 0x40) = (int)plVar20[2];
          bVar8 = true;
        }
        plVar21 = (longlong *)*plVar20;
      }
      else {
        uVar25 = DAT_180ce20a0 &
                 (((((ulonglong)*(byte *)(plVar20 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar20 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar20 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar20 + 0x13)) * 0x100000001b3;
        plVar21 = *(longlong **)(DAT_180ce2088 + uVar25 * 0x10);
        if (*(longlong **)(DAT_180ce2088 + 8 + uVar25 * 0x10) == plVar20) {
          if (plVar21 == plVar20) {
            *(longlong **)(DAT_180ce2088 + uVar25 * 0x10) = plVar26;
            *(longlong **)(lVar3 + 8 + uVar25 * 0x10) = plVar26;
          }
          else {
            *(longlong *)(DAT_180ce2088 + 8 + uVar25 * 0x10) = plVar20[1];
          }
        }
        else if (plVar21 == plVar20) {
          *(longlong *)(DAT_180ce2088 + uVar25 * 0x10) = *plVar20;
        }
        plVar21 = (longlong *)*plVar20;
        DAT_180ce2080 = DAT_180ce2080 + -1;
        *(longlong **)plVar20[1] = plVar21;
        plVar21[1] = plVar20[1];
        *(undefined8 *)(puVar30 + -8) = 0x1801d3dfe;
        thunk_FUN_1803d64e0(plVar20,0x20);
        plVar26 = DAT_180ce2078;
      }
      plVar20 = plVar21;
    } while (plVar21 != plVar26);
    if ((bVar8) && (DAT_180ca0fb0 < 0x100)) {
      *(undefined8 *)(puVar30 + -8) = 0x1801d3e57;
      FUN_1804e4e90(&DAT_1809ee4a0);
      *(undefined8 *)(puVar30 + -8) = 0x1801d3e60;
      lVar22 = FUN_1801d2dc0(*(undefined4 *)(puVar30 + 0x40));
      *(undefined **)(puVar30 + 0x60) = &DAT_1809ee4a0;
      *(undefined8 *)(puVar30 + -8) = 0x1801d3e70;
      iVar12 = FUN_1804e4d70(&DAT_1809ee4a0);
      lVar3 = DAT_180ce2088;
      plVar20 = DAT_180ce2078;
      if (iVar12 != 0) goto LAB_1801d4023;
      if (DAT_1809ee4ec == 0x7fffffff) goto LAB_1801d4010;
      uVar25 = DAT_180ce20a0 &
               (((((ulonglong)(*(uint *)(puVar30 + 0x40) & 0xff) ^ 0xcbf29ce484222325) *
                  0x100000001b3 ^ (ulonglong)(byte)puVar30[0x41]) * 0x100000001b3 ^
                (ulonglong)(byte)puVar30[0x42]) * 0x100000001b3 ^ (ulonglong)(byte)puVar30[0x43]) *
               0x100000001b3;
      plVar26 = *(longlong **)(DAT_180ce2088 + 8 + uVar25 * 0x10);
      if (plVar26 == DAT_180ce2078) {
LAB_1801d3f01:
        plVar21 = (longlong *)0x0;
      }
      else {
        uVar2 = *(uint *)(plVar26 + 2);
        plVar21 = plVar26;
        while (*(uint *)(puVar30 + 0x40) != uVar2) {
          if (plVar21 == *(longlong **)(DAT_180ce2088 + uVar25 * 0x10)) goto LAB_1801d3f01;
          plVar21 = (longlong *)plVar21[1];
          uVar2 = *(uint *)(plVar21 + 2);
        }
      }
      if (plVar21 != (longlong *)0x0) {
        plVar6 = *(longlong **)(DAT_180ce2088 + uVar25 * 0x10);
        if (plVar26 == plVar21) {
          if (plVar6 == plVar21) {
            *(longlong **)(DAT_180ce2088 + uVar25 * 0x10) = DAT_180ce2078;
            *(longlong **)(lVar3 + 8 + uVar25 * 0x10) = plVar20;
          }
          else {
            *(longlong *)(DAT_180ce2088 + 8 + uVar25 * 0x10) = plVar21[1];
          }
        }
        else if (plVar6 == plVar21) {
          *(longlong *)(DAT_180ce2088 + uVar25 * 0x10) = *plVar21;
        }
        lVar3 = *plVar21;
        DAT_180ce2080 = DAT_180ce2080 + -1;
        *(longlong *)plVar21[1] = lVar3;
        *(longlong *)(lVar3 + 8) = plVar21[1];
        *(undefined8 *)(puVar30 + -8) = 0x1801d3f5b;
        thunk_FUN_1803d64e0(plVar21,0x20);
      }
      if (lVar22 == 0) {
        DAT_180cc3e7d = '\x01';
      }
      else {
        *(undefined8 *)(puVar30 + -8) = 0x1801d3f7f;
        plVar20 = (longlong *)FUN_1801d4a30(&DAT_180ca0fa0,puVar30 + 0x78,puVar30 + 0x40);
        *(longlong *)(*plVar20 + 0x18) = lVar22;
        *(longlong *)(&DAT_180ce2040 + (ulonglong)(*(uint *)(puVar30 + 0x40) >> 0x18 & 1) * 8) =
             lVar22;
      }
    }
  }
  *(undefined8 *)(puVar30 + -8) = 0x1801d3fa3;
  FUN_1804e4e90(&DAT_1809ee4a0);
LAB_1801d3fa4:
  if (pbVar14 != (byte *)0x0) {
    uVar25 = local_438 - (longlong)pbVar14 & 0xfffffffffffffff0;
    pbVar34 = pbVar14;
    if (0xfff < uVar25) {
      pbVar34 = *(byte **)(pbVar14 + -8);
      if (&DAT_0000001f < pbVar14 + (-8 - (longlong)pbVar34)) {
        pcVar7 = (code *)swi(0x29);
        uVar25 = (*pcVar7)(5);
        puVar30 = puVar30 + 8;
        pbVar34 = pbVar14 + (-8 - (longlong)pbVar34);
      }
      else {
        uVar25 = uVar25 + 0x27;
      }
    }
    *(undefined8 *)(puVar30 + -8) = 0x1801d3fe5;
    thunk_FUN_1803d64e0(pbVar34,uVar25);
  }
  *(undefined8 *)(puVar30 + -8) = 0x1801d3ff4;
  return;
}



/* ===== 1801d40a0 FUN_1801d40a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1801d40a0(uint param_1,ulonglong param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 local_res8;
  undefined1 local_28 [16];
  
  if (param_1 != 0xd) {
    if (0xf < param_1) {
      return 0;
    }
    if ((&DAT_180ce1f30)[(param_2 & 0xff) + (longlong)(int)param_1 * 2] == 0) {
      return (&DAT_180ce1f30)[(longlong)(int)param_1 * 2];
    }
    return (&DAT_180ce1f30)[(param_2 & 0xff) + (longlong)(int)param_1 * 2];
  }
  lVar7 = (&DAT_180ce1f30)[(param_2 & 0xff) + 0x1a];
  if (((&DAT_180ce1f30)[(param_2 & 0xff) + 0x1a] == 0) &&
     (lVar7 = DAT_180ce2000, DAT_180ce2000 == 0)) {
    return 0;
  }
  uVar2 = (int)param_2 << 0x18;
  local_res8 = param_3 & 0xffffff | uVar2;
  if (local_res8 == (uVar2 | 0xffffff)) {
    return lVar7;
  }
  iVar3 = FUN_1804e4d70(&DAT_1809ee4a0);
  uVar1 = DAT_180ce1ed8;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ee4ec == 0x7fffffff) {
    DAT_1809ee4ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  uVar6 = (((((ulonglong)(byte)local_res8 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)local_res8._1_1_) * 0x100000001b3 ^ (ulonglong)local_res8._2_1_) *
           0x100000001b3 ^ (ulonglong)local_res8._3_1_) * 0x100000001b3 & _DAT_180ca0fd0;
  lVar4 = *(longlong *)(DAT_180ca0fb8 + 8 + uVar6 * 0x10);
  if (lVar4 != DAT_180ca0fa8) {
    uVar2 = *(uint *)(lVar4 + 0x10);
    while (local_res8 != uVar2) {
      if (lVar4 == *(longlong *)(DAT_180ca0fb8 + uVar6 * 0x10)) goto LAB_1801d41f4;
      lVar4 = *(longlong *)(lVar4 + 8);
      uVar2 = *(uint *)(lVar4 + 0x10);
    }
    if (lVar4 != 0) goto LAB_1801d41f7;
  }
LAB_1801d41f4:
  lVar4 = DAT_180ca0fa8;
LAB_1801d41f7:
  if (lVar4 == DAT_180ca0fa8) {
    plVar5 = (longlong *)FUN_1801d4780(local_res8,local_28,&local_res8);
    lVar4 = *plVar5;
    if (*(int *)(lVar4 + 0x14) == 0) {
      *(undefined4 *)(lVar4 + 0x14) = uVar1;
    }
    *(undefined4 *)(lVar4 + 0x18) = uVar1;
    if (*(longlong *)(&DAT_180ce2040 + (param_2 & 0xff) * 8) != 0) {
      lVar7 = *(longlong *)(&DAT_180ce2040 + (param_2 & 0xff) * 8);
    }
  }
  else {
    lVar7 = *(longlong *)(lVar4 + 0x18);
  }
  FUN_1804e4e90(&DAT_1809ee4a0);
  return lVar7;
}



/* ===== 1801d4280 FUN_1801d4280 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801d4280(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  char local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_a8;
  if (((param_1 != 0) && (param_3 != 0)) &&
     (local_88 = param_2, local_80 = param_3, cVar1 = FUN_1801d2540(), cVar1 != '\0')) {
    iVar3 = FUN_180011200(param_1 + 0x18);
    lVar5 = FUN_18000f3a0(param_1 + 0x20);
    if (((iVar3 - 1U < 0x200) && (lVar5 - 0x10000U < 0x7ffffffeffff)) && (uVar8 = 0, 0 < iVar3)) {
      do {
        uVar10 = uVar8 * 0x40;
        lVar6 = FUN_18000f3a0(lVar5 + 0x28 + uVar10);
        if (lVar6 - 0x10000U < 0x7ffffffeffff) {
          local_78[0] = '\0';
          local_78[1] = '\0';
          local_78[2] = '\0';
          local_78[3] = '\0';
          local_78[4] = '\0';
          local_78[5] = '\0';
          local_78[6] = '\0';
          local_78[7] = '\0';
          local_78[8] = '\0';
          local_78[9] = '\0';
          local_78[10] = '\0';
          local_78[0xb] = '\0';
          local_78[0xc] = '\0';
          local_78[0xd] = '\0';
          local_78[0xe] = '\0';
          local_78[0xf] = '\0';
          lVar9 = 0;
          local_78[0x10] = '\0';
          local_78[0x11] = '\0';
          local_78[0x12] = '\0';
          local_78[0x13] = '\0';
          local_78[0x14] = '\0';
          local_78[0x15] = '\0';
          local_78[0x16] = '\0';
          local_78[0x17] = '\0';
          local_78[0x18] = '\0';
          local_78[0x19] = '\0';
          local_78[0x1a] = '\0';
          local_78[0x1b] = '\0';
          local_78[0x1c] = '\0';
          local_78[0x1d] = '\0';
          local_78[0x1e] = '\0';
          local_78[0x1f] = '\0';
          local_78[0x20] = '\0';
          local_78[0x21] = '\0';
          local_78[0x22] = '\0';
          local_78[0x23] = '\0';
          local_78[0x24] = '\0';
          local_78[0x25] = '\0';
          local_78[0x26] = '\0';
          local_78[0x27] = '\0';
          local_78[0x28] = '\0';
          local_78[0x29] = '\0';
          local_78[0x2a] = '\0';
          local_78[0x2b] = '\0';
          local_78[0x2c] = '\0';
          local_78[0x2d] = '\0';
          local_78[0x2e] = '\0';
          local_78[0x2f] = '\0';
          do {
            cVar1 = FUN_180011220(lVar9 + lVar6);
            if (cVar1 == '\0') break;
            local_78[lVar9] = cVar1;
            uVar7 = lVar9 + 2;
            lVar9 = lVar9 + 1;
          } while (uVar7 < 0x30);
          iVar4 = FUN_1805117b0(local_78,local_88);
          if (iVar4 == 0) {
            uVar8 = FUN_180011220((uVar10 | 0x1e) + lVar5);
            if ((uVar8 & 1) == 0) {
              return 0;
            }
            lVar6 = FUN_18000f3a0(lVar5 + (uVar10 | 0x10));
            if (lVar6 != local_80) {
              cVar1 = FUN_1801d2da0(uVar10 + lVar5);
              if (cVar1 == '\0') {
                return 0;
              }
              bVar2 = FUN_1801d2820(param_1);
              if ((byte)(bVar2 ^ 1 | 2) != 2) {
                return 0;
              }
            }
            return 1;
          }
        }
        uVar11 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar11;
      } while ((int)uVar11 < iVar3);
    }
  }
  return 0;
}



/* ===== 1801d4430 FUN_1801d4430 ===== */

undefined4 FUN_1801d4430(void)

{
  return DAT_180ce2038;
}



/* ===== 1801d4440 FUN_1801d4440 ===== */

undefined * FUN_1801d4440(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_1806d2ba0;
  if (PTR_s_not_initialized_1809ee490 != (undefined *)0x0) {
    puVar1 = PTR_s_not_initialized_1809ee490;
  }
  return puVar1;
}



/* ===== 1801d4460 FUN_1801d4460 ===== */

void FUN_1801d4460(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1801d5680(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      thunk_FUN_1803d64e0(puVar1,0x20);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_180026ac0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8);
  }
  return;
}



/* ===== 1801d4510 FUN_1801d4510 ===== */

void FUN_1801d4510(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1801d5890(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      thunk_FUN_1803d64e0(puVar1,0x20);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_180026a10(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8);
  }
  return;
}



/* ===== 1801d45c0 FUN_1801d45c0 ===== */

undefined8 * FUN_1801d45c0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar2 = DAT_180ce1ec8;
  if (DAT_180ce1ec8 != DAT_180ce1ed0) {
    *DAT_180ce1ec8 = *param_2;
    *(undefined4 *)(puVar2 + 1) = *param_3;
    puVar2 = DAT_180ce1ec8;
    DAT_180ce1ec8 = DAT_180ce1ec8 + 2;
    return puVar2;
  }
  uVar8 = 0xfffffffffffffff;
  uVar11 = (longlong)DAT_180ce1ec8 - (longlong)DAT_180ce1ec0;
  lVar9 = (longlong)uVar11 >> 4;
  if (lVar9 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar10 = lVar9 + 1;
  uVar4 = (longlong)DAT_180ce1ed0 - (longlong)DAT_180ce1ec0 >> 4;
  if (uVar4 <= 0xfffffffffffffff - (uVar4 >> 1)) {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar8 = uVar10;
    if (uVar10 <= uVar4) {
      uVar8 = uVar4;
    }
    if (0xfffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar3 = (undefined8 *)FUN_18000fb70(uVar8 * 0x10);
  puVar12 = (undefined8 *)((uVar11 & 0xfffffffffffffff0) + (longlong)puVar3);
  *puVar12 = *param_2;
  *(undefined4 *)(puVar12 + 1) = *param_3;
  if (puVar2 == DAT_180ce1ec8) {
    lVar9 = (longlong)DAT_180ce1ec8 - (longlong)DAT_180ce1ec0;
    puVar5 = puVar3;
    puVar2 = DAT_180ce1ec0;
  }
  else {
    FUN_180540530(puVar3,DAT_180ce1ec0,(longlong)puVar2 - (longlong)DAT_180ce1ec0);
    puVar5 = puVar12 + 2;
    lVar9 = (longlong)DAT_180ce1ec8 - (longlong)puVar2;
  }
  puVar6 = auStack_38;
  puVar7 = auStack_38;
  FUN_180540530(puVar5,puVar2,lVar9);
  if (DAT_180ce1ec0 == (undefined8 *)0x0) goto LAB_1801d4724;
  puVar2 = DAT_180ce1ec0;
  if (((longlong)DAT_180ce1ed0 - (longlong)DAT_180ce1ec0 & 0xfffffffffffffff0U) < 0x1000) {
LAB_1801d471c:
    puVar7 = puVar6;
  }
  else {
    puVar2 = (undefined8 *)DAT_180ce1ec0[-1];
    if (0x1f < (ulonglong)((longlong)DAT_180ce1ec0 + (-8 - (longlong)puVar2))) {
      pcVar1 = (code *)swi(0x29);
      puVar2 = (undefined8 *)(*pcVar1)(5);
      puVar6 = auStack_30;
      goto LAB_1801d471c;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1801d4724;
  thunk_FUN_1803d64e0(puVar2);
LAB_1801d4724:
  DAT_180ce1ec8 = puVar3 + uVar10 * 2;
  DAT_180ce1ec0 = puVar3;
  DAT_180ce1ed0 = puVar3 + uVar8 * 2;
  return puVar12;
}



/* ===== 1801d4780 FUN_1801d4780 ===== */

undefined8 * FUN_1801d4780(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar8 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar7 = (undefined8 *)(DAT_180ce20a0 & uVar8);
  puVar4 = *(undefined8 **)(DAT_180ce2088 + 8 + (longlong)puVar7 * 0x10);
  puVar9 = DAT_180ce2078;
  if (puVar4 != DAT_180ce2078) {
    puVar7 = *(undefined8 **)(DAT_180ce2088 + (longlong)puVar7 * 0x10);
    iVar1 = *(int *)(puVar4 + 2);
    puVar9 = puVar4;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == puVar7) break;
      puVar9 = (undefined8 *)puVar9[1];
      iVar1 = *(int *)(puVar9 + 2);
    }
  }
  if (DAT_180ce2080 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x20,puVar7,DAT_180ce2088,param_4,&DAT_180ce2078,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
  uVar3 = DAT_180ce20a8;
  if (DAT_180ce2070 < (float)(DAT_180ce2080 + 1) / (float)DAT_180ce20a8) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_180ce2080 + 1) / DAT_180ce2070);
    lVar5 = 0;
    if ((DAT_1808acd00 <= fVar11) && (fVar11 = fVar11 - DAT_1808acd00, fVar11 < DAT_1808acd00)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar5)) {
      uVar6 = (longlong)fVar11 + lVar5;
    }
    uVar10 = uVar3;
    if ((uVar3 < uVar6) && ((0x1ff < uVar3 || (uVar10 = uVar3 * 8, uVar3 * 8 < uVar6)))) {
      uVar10 = uVar6;
    }
    FUN_1801d5aa0(uVar6,uVar10);
    puVar7 = *(undefined8 **)(DAT_180ce2088 + 8 + (DAT_180ce20a0 & uVar8) * 0x10);
    puVar9 = DAT_180ce2078;
    if (puVar7 != DAT_180ce2078) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar9 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar9 == *(undefined8 **)(DAT_180ce2088 + (DAT_180ce20a0 & uVar8) * 0x10))
        goto LAB_1801d49ae;
        puVar9 = (undefined8 *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_1801d49ae:
  puVar7 = (undefined8 *)puVar9[1];
  DAT_180ce2080 = DAT_180ce2080 + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar9[1] = puVar4;
  lVar5 = DAT_180ce2088;
  uVar8 = DAT_180ce20a0 & uVar8;
  puVar2 = *(undefined8 **)(DAT_180ce2088 + uVar8 * 0x10);
  if (puVar2 == DAT_180ce2078) {
    *(undefined8 **)(DAT_180ce2088 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar9) {
      *(undefined8 **)(DAT_180ce2088 + uVar8 * 0x10) = puVar4;
      goto LAB_1801d4a0d;
    }
    if (*(undefined8 **)(DAT_180ce2088 + 8 + uVar8 * 0x10) != puVar7) goto LAB_1801d4a0d;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
LAB_1801d4a0d:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1801d4a30 FUN_1801d4a30 ===== */

undefined8 * FUN_1801d4a30(float *param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  
  uVar11 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  puVar8 = (undefined8 *)(uVar11 & *(ulonglong *)(param_1 + 0xc));
  lVar6 = *(longlong *)(param_1 + 6);
  puVar5 = *(undefined8 **)(lVar6 + 8 + (longlong)puVar8 * 0x10);
  pfVar1 = param_1 + 2;
  puVar9 = *(undefined8 **)pfVar1;
  if (puVar5 != puVar9) {
    puVar8 = *(undefined8 **)(lVar6 + (longlong)puVar8 * 0x10);
    iVar2 = *(int *)(puVar5 + 2);
    puVar9 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == puVar8) break;
      puVar9 = (undefined8 *)puVar9[1];
      iVar2 = *(int *)(puVar9 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x20,puVar8,lVar6,param_4,pfVar1,0);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  puVar5[3] = 0;
  uVar3 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar3) {
    fVar12 = (float)FUN_18053ef70((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar6 = 0;
    if ((DAT_1808acd00 <= fVar12) && (fVar12 = fVar12 - DAT_1808acd00, fVar12 < DAT_1808acd00)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar6)) {
      uVar7 = (longlong)fVar12 + lVar6;
    }
    uVar10 = uVar3;
    if ((uVar3 < uVar7) && ((0x1ff < uVar3 || (uVar10 = uVar3 * 8, uVar3 * 8 < uVar7)))) {
      uVar10 = uVar7;
    }
    FUN_1801d5c70(param_1,uVar10);
    puVar8 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar9 = *(undefined8 **)pfVar1;
    if (puVar8 != puVar9) {
      iVar2 = *(int *)(puVar8 + 2);
      puVar9 = puVar8;
      while (*(int *)(puVar5 + 2) != iVar2) {
        if (puVar9 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10
                       )) goto LAB_1801d4c41;
        puVar9 = (undefined8 *)puVar9[1];
        iVar2 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_1801d4c41:
  puVar8 = (undefined8 *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar9;
  puVar5[1] = puVar8;
  *puVar8 = puVar5;
  puVar9[1] = puVar5;
  lVar6 = *(longlong *)(param_1 + 6);
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  puVar4 = *(undefined8 **)(lVar6 + uVar11 * 0x10);
  if (puVar4 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar6 + uVar11 * 0x10) = puVar5;
  }
  else {
    if (puVar4 == puVar9) {
      *(undefined8 **)(lVar6 + uVar11 * 0x10) = puVar5;
      goto LAB_1801d4c91;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) != puVar8) goto LAB_1801d4c91;
  }
  *(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) = puVar5;
LAB_1801d4c91:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1801d4cb0 FUN_1801d4cb0 ===== */

undefined8 * FUN_1801d4cb0(float *param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  float fVar9;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(uVar7 & *(ulonglong *)(param_1 + 0xc));
  lVar2 = *(longlong *)(param_1 + 6);
  puVar5 = *(undefined8 **)(lVar2 + 8 + (longlong)puVar6 * 0x10);
  pfVar1 = param_1 + 2;
  puVar8 = *(undefined8 **)pfVar1;
  if (puVar5 != puVar8) {
    puVar6 = *(undefined8 **)(lVar2 + (longlong)puVar6 * 0x10);
    lVar3 = puVar5[2];
    puVar8 = puVar5;
    while( true ) {
      if (*(longlong *)param_3 == lVar3) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar3 = puVar8[2];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x20,puVar6,lVar2,param_4,pfVar1,0);
  puVar5[2] = *(undefined8 *)param_3;
  *(undefined1 *)(puVar5 + 3) = 0;
  fVar9 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar9 && fVar9 != *param_1) {
    FUN_180027b20(param_1);
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar8 = *(undefined8 **)pfVar1;
    if (puVar6 != puVar8) {
      lVar2 = puVar6[2];
      puVar8 = puVar6;
      while (puVar5[2] != lVar2) {
        if (puVar8 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_1801d4e82;
        puVar8 = (undefined8 *)puVar8[1];
        lVar2 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_1801d4e82:
  puVar6 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar8;
  puVar5[1] = puVar6;
  *puVar6 = puVar5;
  puVar8[1] = puVar5;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  puVar4 = *(undefined8 **)(lVar2 + uVar7 * 0x10);
  if (puVar4 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar5;
  }
  else {
    if (puVar4 == puVar8) {
      *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar5;
      goto LAB_1801d4ed2;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) != puVar6) goto LAB_1801d4ed2;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar5;
LAB_1801d4ed2:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1801d4ef0 FUN_1801d4ef0 ===== */

undefined8 * FUN_1801d4ef0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(DAT_180ce1f10 & uVar7);
  puVar3 = *(undefined8 **)(DAT_180ce1ef8 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_180ce1ee8;
  if (puVar3 != DAT_180ce1ee8) {
    puVar6 = *(undefined8 **)(DAT_180ce1ef8 + (longlong)puVar6 * 0x10);
    lVar4 = puVar3[2];
    puVar8 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar4 = puVar8[2];
    }
  }
  if (DAT_180ce1ef0 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x20,puVar6,DAT_180ce1ef8,param_4,&DAT_180ce1ee8,0);
  puVar3[2] = *(undefined8 *)param_3;
  puVar3[3] = 0;
  uVar2 = DAT_180ce1f18;
  if (DAT_180ce1ee0 < (float)(DAT_180ce1ef0 + 1) / (float)DAT_180ce1f18) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180ce1ef0 + 1) / DAT_180ce1ee0);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar9 = uVar2;
    if ((uVar2 < uVar5) && ((0x1ff < uVar2 || (uVar9 = uVar2 * 8, uVar2 * 8 < uVar5)))) {
      uVar9 = uVar5;
    }
    FUN_1801d5e40(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_180ce1ef8 + 8 + (DAT_180ce1f10 & uVar7) * 0x10);
    puVar8 = DAT_180ce1ee8;
    if (puVar6 != DAT_180ce1ee8) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_180ce1ef8 + (DAT_180ce1f10 & uVar7) * 0x10))
        goto LAB_1801d5159;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_1801d5159:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_180ce1ef0 = DAT_180ce1ef0 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_180ce1ef8;
  uVar7 = DAT_180ce1f10 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180ce1ef8 + uVar7 * 0x10);
  if (puVar1 == DAT_180ce1ee8) {
    *(undefined8 **)(DAT_180ce1ef8 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_180ce1ef8 + uVar7 * 0x10) = puVar3;
      goto LAB_1801d51b8;
    }
    if (*(undefined8 **)(DAT_180ce1ef8 + 8 + uVar7 * 0x10) != puVar6) goto LAB_1801d51b8;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_1801d51b8:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1801d51e0 FUN_1801d51e0 ===== */

undefined8 * FUN_1801d51e0(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar3 = DAT_180ce2058;
  if (DAT_180ce2058 != DAT_180ce2060) {
    *DAT_180ce2058 = *param_2;
    puVar3 = DAT_180ce2058;
    DAT_180ce2058 = DAT_180ce2058 + 1;
    return puVar3;
  }
  uVar8 = 0x1fffffffffffffff;
  uVar11 = (longlong)DAT_180ce2058 - (longlong)DAT_180ce2050;
  lVar4 = (longlong)uVar11 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar6 = (longlong)DAT_180ce2060 - (longlong)DAT_180ce2050 >> 3;
  uVar1 = lVar4 + 1;
  if (uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar8 = uVar1;
    if (uVar1 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar5 = (undefined8 *)FUN_18000fb70(uVar8 * 8);
  puVar12 = (undefined8 *)((uVar11 & 0xfffffffffffffff8) + (longlong)puVar5);
  *puVar12 = *param_2;
  if (puVar3 == DAT_180ce2058) {
    lVar4 = (longlong)DAT_180ce2058 - (longlong)DAT_180ce2050;
    puVar7 = puVar5;
    puVar3 = DAT_180ce2050;
  }
  else {
    FUN_180540530(puVar5,DAT_180ce2050,(longlong)puVar3 - (longlong)DAT_180ce2050);
    puVar7 = puVar12 + 1;
    lVar4 = (longlong)DAT_180ce2058 - (longlong)puVar3;
  }
  puVar9 = auStack_38;
  puVar10 = auStack_38;
  FUN_180540530(puVar7,puVar3,lVar4);
  if (DAT_180ce2050 == (undefined8 *)0x0) goto LAB_1801d533f;
  puVar3 = DAT_180ce2050;
  if ((ulonglong)(((longlong)DAT_180ce2060 - (longlong)DAT_180ce2050 >> 3) * 8) < 0x1000) {
LAB_1801d5334:
    puVar10 = puVar9;
  }
  else {
    puVar3 = (undefined8 *)DAT_180ce2050[-1];
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_180ce2050 + (-8 - (longlong)puVar3))) {
      puVar3 = (undefined8 *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_30;
      goto LAB_1801d5334;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x1801d533f;
  thunk_FUN_1803d64e0(puVar3);
LAB_1801d533f:
  DAT_180ce2050 = puVar5;
  DAT_180ce2058 = puVar5 + uVar1;
  DAT_180ce2060 = puVar5 + uVar8;
  return puVar12;
}



/* ===== 1801d5390 FUN_1801d5390 ===== */

undefined8 * FUN_1801d5390(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(DAT_180ce1eb0 & uVar7);
  puVar3 = *(undefined8 **)(DAT_180ce1e98 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_180ce1e88;
  if (puVar3 != DAT_180ce1e88) {
    puVar6 = *(undefined8 **)(DAT_180ce1e98 + (longlong)puVar6 * 0x10);
    lVar4 = puVar3[2];
    puVar8 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar4 = puVar8[2];
    }
  }
  if (DAT_180ce1e90 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x20,puVar6,DAT_180ce1e98,param_4,&DAT_180ce1e88,0);
  puVar3[2] = *(undefined8 *)param_3;
  puVar3[3] = 0;
  uVar2 = DAT_180ce1eb8;
  if (DAT_180ce1e80 < (float)(DAT_180ce1e90 + 1) / (float)DAT_180ce1eb8) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180ce1e90 + 1) / DAT_180ce1e80);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar9 = uVar2;
    if ((uVar2 < uVar5) && ((0x1ff < uVar2 || (uVar9 = uVar2 * 8, uVar2 * 8 < uVar5)))) {
      uVar9 = uVar5;
    }
    FUN_1801d6040(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_180ce1e98 + 8 + (DAT_180ce1eb0 & uVar7) * 0x10);
    puVar8 = DAT_180ce1e88;
    if (puVar6 != DAT_180ce1e88) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_180ce1e98 + (DAT_180ce1eb0 & uVar7) * 0x10))
        goto LAB_1801d55f9;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_1801d55f9:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_180ce1e90 = DAT_180ce1e90 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_180ce1e98;
  uVar7 = DAT_180ce1eb0 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180ce1e98 + uVar7 * 0x10);
  if (puVar1 == DAT_180ce1e88) {
    *(undefined8 **)(DAT_180ce1e98 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_180ce1e98 + uVar7 * 0x10) = puVar3;
      goto LAB_1801d5658;
    }
    if (*(undefined8 **)(DAT_180ce1e98 + 8 + uVar7 * 0x10) != puVar6) goto LAB_1801d5658;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_1801d5658:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1801d5680 FUN_1801d5680 ===== */

longlong * FUN_1801d5680(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined8 *)param_2[1];
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3) * 0x10;
  plVar8 = (longlong *)(lVar1 + 8 + lVar5);
  plVar7 = (longlong *)(lVar5 + lVar1);
  plVar4 = *(longlong **)(lVar5 + lVar1);
  plVar10 = (longlong *)*plVar8;
  plVar9 = param_2;
  do {
    plVar11 = (longlong *)*plVar9;
    thunk_FUN_1803d64e0(plVar9,0x20);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar10) {
      if (plVar4 == param_2) {
        *plVar7 = (longlong)puVar2;
        puVar6 = puVar2;
      }
      else {
        puVar6 = puVar3;
      }
      *plVar8 = (longlong)puVar6;
      while (plVar11 != param_3) {
        uVar12 = *(ulonglong *)(param_1 + 0x30) &
                 (((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar1 + 8 + uVar12 * 0x10);
        plVar7 = (longlong *)(lVar1 + uVar12 * 0x10);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_1803d64e0(plVar10,0x20);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) goto LAB_1801d5836;
        }
        *plVar7 = (longlong)puVar2;
        *(undefined8 **)(lVar1 + 8 + uVar12 * 0x10) = puVar2;
      }
      goto LAB_1801d5839;
    }
    plVar9 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
LAB_1801d5836:
    *plVar7 = (longlong)plVar11;
  }
LAB_1801d5839:
  *puVar3 = plVar11;
  plVar11[1] = (longlong)puVar3;
  return param_3;
}



/* ===== 1801d5890 FUN_1801d5890 ===== */

longlong * FUN_1801d5890(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined8 *)param_2[1];
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3) * 0x10;
  plVar8 = (longlong *)(lVar1 + 8 + lVar5);
  plVar7 = (longlong *)(lVar5 + lVar1);
  plVar4 = *(longlong **)(lVar5 + lVar1);
  plVar10 = (longlong *)*plVar8;
  plVar9 = param_2;
  do {
    plVar11 = (longlong *)*plVar9;
    thunk_FUN_1803d64e0(plVar9,0x20);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar10) {
      if (plVar4 == param_2) {
        *plVar7 = (longlong)puVar2;
        puVar6 = puVar2;
      }
      else {
        puVar6 = puVar3;
      }
      *plVar8 = (longlong)puVar6;
      while (plVar11 != param_3) {
        uVar12 = *(ulonglong *)(param_1 + 0x30) &
                 (((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar1 + 8 + uVar12 * 0x10);
        plVar7 = (longlong *)(lVar1 + uVar12 * 0x10);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_1803d64e0(plVar10,0x20);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) goto LAB_1801d5a46;
        }
        *plVar7 = (longlong)puVar2;
        *(undefined8 **)(lVar1 + 8 + uVar12 * 0x10) = puVar2;
      }
      goto LAB_1801d5a49;
    }
    plVar9 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
LAB_1801d5a46:
    *plVar7 = (longlong)plVar11;
  }
LAB_1801d5a49:
  *puVar3 = plVar11;
  plVar11[1] = (longlong)puVar3;
  return param_3;
}



/* ===== 1801d5aa0 FUN_1801d5aa0 ===== */

void FUN_1801d5aa0(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  
  plVar8 = DAT_180ce2078;
  for (lVar11 = 0x3f; 0xfffffffffffffffU >> lVar11 == 0; lVar11 = lVar11 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar11 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar9 = param_2 - 1 | 1;
  lVar11 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  bVar10 = (char)lVar11 + 1;
  lVar11 = 1L << (bVar10 & 0x3f);
  FUN_180029d30(&DAT_180ce2088,2L << (bVar10 & 0x3f),DAT_180ce2078);
  DAT_180ce20a0 = lVar11 - 1;
  DAT_180ce20a8 = lVar11;
  plVar7 = (longlong *)*DAT_180ce2078;
  lVar11 = DAT_180ce2088;
joined_r0x0001801d5b1c:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180ce2088 = lVar11;
          return;
        }
        plVar1 = (longlong *)*plVar7;
        uVar9 = (((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 & DAT_180ce20a0;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180ce2088 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180ce2088;
      }
      plVar3 = *(longlong **)(lVar11 + 8 + uVar9 * 0x10);
      if ((int)plVar7[2] != (int)plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar7) {
        puVar4 = (undefined8 *)plVar7[1];
        *puVar4 = plVar1;
        puVar5 = (undefined8 *)plVar1[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar1[1] = (longlong)puVar4;
        plVar7[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
      plVar7 = plVar1;
      lVar11 = DAT_180ce2088;
    }
    do {
      if (plVar2 == plVar3) {
        puVar4 = (undefined8 *)plVar7[1];
        *puVar4 = plVar1;
        puVar5 = (undefined8 *)plVar1[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar1[1] = (longlong)puVar4;
        plVar7[1] = (longlong)puVar6;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180ce2088;
        goto joined_r0x0001801d5b1c;
      }
      plVar3 = (longlong *)plVar3[1];
    } while ((int)plVar7[2] != (int)plVar3[2]);
    lVar11 = *plVar3;
    puVar4 = (undefined8 *)plVar7[1];
    *puVar4 = plVar1;
    plVar2 = (longlong *)plVar1[1];
    *plVar2 = lVar11;
    puVar5 = *(undefined8 **)(lVar11 + 8);
    *puVar5 = plVar7;
    *(longlong **)(lVar11 + 8) = plVar2;
    plVar1[1] = (longlong)puVar4;
    plVar7[1] = (longlong)puVar5;
    plVar7 = plVar1;
    lVar11 = DAT_180ce2088;
  } while( true );
}



/* ===== 1801d5c70 FUN_1801d5c70 ===== */

void FUN_1801d5c70(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  
  for (lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar10 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar8 = param_2 - 1 | 1;
  lVar10 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  bVar9 = (char)lVar10 + 1;
  lVar10 = 1L << (bVar9 & 0x3f);
  FUN_180029a30(param_1 + 0x18,2L << (bVar9 & 0x3f),plVar1);
  *(longlong *)(param_1 + 0x38) = lVar10;
  *(longlong *)(param_1 + 0x30) = lVar10 + -1;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x0001801d5ce6:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar1) {
          return;
        }
        lVar10 = *(longlong *)(param_1 + 0x18);
        plVar2 = (longlong *)*plVar7;
        uVar8 = *(ulonglong *)(param_1 + 0x30) &
                (((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3;
        plVar3 = *(longlong **)(lVar10 + uVar8 * 0x10);
        if (plVar3 != plVar1) break;
        *(longlong **)(lVar10 + uVar8 * 0x10) = plVar7;
        *(longlong **)(lVar10 + 8 + uVar8 * 0x10) = plVar7;
        plVar7 = plVar2;
      }
      plVar4 = *(longlong **)(lVar10 + 8 + uVar8 * 0x10);
      if ((int)plVar7[2] != (int)plVar4[2]) break;
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != plVar7) {
        plVar3 = (longlong *)plVar7[1];
        *plVar3 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar7;
        plVar4[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar3;
        plVar7[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar10 + 8 + uVar8 * 0x10) = plVar7;
      plVar7 = plVar2;
    }
    do {
      if (plVar3 == plVar4) {
        plVar3 = (longlong *)plVar7[1];
        *plVar3 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar7;
        plVar4[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar3;
        plVar7[1] = (longlong)puVar6;
        *(longlong **)(lVar10 + uVar8 * 0x10) = plVar7;
        plVar7 = plVar2;
        goto joined_r0x0001801d5ce6;
      }
      plVar4 = (longlong *)plVar4[1];
    } while ((int)plVar7[2] != (int)plVar4[2]);
    lVar10 = *plVar4;
    plVar3 = (longlong *)plVar7[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar10;
    puVar5 = *(undefined8 **)(lVar10 + 8);
    *puVar5 = plVar7;
    *(longlong **)(lVar10 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar7[1] = (longlong)puVar5;
    plVar7 = plVar2;
  } while( true );
}



/* ===== 1801d5e40 FUN_1801d5e40 ===== */

void FUN_1801d5e40(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  
  plVar8 = DAT_180ce1ee8;
  for (lVar11 = 0x3f; 0xfffffffffffffffU >> lVar11 == 0; lVar11 = lVar11 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar11 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar9 = param_2 - 1 | 1;
  lVar11 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  bVar10 = (char)lVar11 + 1;
  lVar11 = 1L << (bVar10 & 0x3f);
  FUN_180029a30(&DAT_180ce1ef8,2L << (bVar10 & 0x3f),DAT_180ce1ee8);
  DAT_180ce1f10 = lVar11 - 1;
  DAT_180ce1f18 = lVar11;
  plVar7 = (longlong *)*DAT_180ce1ee8;
  lVar11 = DAT_180ce1ef8;
joined_r0x0001801d5ebc:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180ce1ef8 = lVar11;
          return;
        }
        plVar1 = (longlong *)*plVar7;
        uVar9 = (((((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar7 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_180ce1f10;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180ce1ef8 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180ce1ef8;
      }
      plVar3 = *(longlong **)(lVar11 + 8 + uVar9 * 0x10);
      if (plVar7[2] != plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar7) {
        puVar4 = (undefined8 *)plVar7[1];
        *puVar4 = plVar1;
        puVar5 = (undefined8 *)plVar1[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar1[1] = (longlong)puVar4;
        plVar7[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
      plVar7 = plVar1;
      lVar11 = DAT_180ce1ef8;
    }
    do {
      if (plVar2 == plVar3) {
        puVar4 = (undefined8 *)plVar7[1];
        *puVar4 = plVar1;
        puVar5 = (undefined8 *)plVar1[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar1[1] = (longlong)puVar4;
        plVar7[1] = (longlong)puVar6;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180ce1ef8;
        goto joined_r0x0001801d5ebc;
      }
      plVar3 = (longlong *)plVar3[1];
    } while (plVar7[2] != plVar3[2]);
    lVar11 = *plVar3;
    puVar4 = (undefined8 *)plVar7[1];
    *puVar4 = plVar1;
    plVar2 = (longlong *)plVar1[1];
    *plVar2 = lVar11;
    puVar5 = *(undefined8 **)(lVar11 + 8);
    *puVar5 = plVar7;
    *(longlong **)(lVar11 + 8) = plVar2;
    plVar1[1] = (longlong)puVar4;
    plVar7[1] = (longlong)puVar5;
    plVar7 = plVar1;
    lVar11 = DAT_180ce1ef8;
  } while( true );
}



/* ===== 1801d6040 FUN_1801d6040 ===== */

void FUN_1801d6040(undefined8 param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  
  plVar9 = DAT_180ce1e88;
  for (lVar12 = 0x3f; 0xfffffffffffffffU >> lVar12 == 0; lVar12 = lVar12 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar12 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar10 = param_2 - 1 | 1;
  lVar12 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  bVar11 = (char)lVar12 + 1;
  lVar12 = 1L << (bVar11 & 0x3f);
  FUN_180029a30(&DAT_180ce1e98,2L << (bVar11 & 0x3f),DAT_180ce1e88);
  DAT_180ce1eb0 = lVar12 - 1;
  DAT_180ce1eb8 = lVar12;
  plVar8 = (longlong *)*DAT_180ce1e88;
joined_r0x0001801d60bc:
  do {
    while( true ) {
      while( true ) {
        if (plVar8 == plVar9) {
          return;
        }
        plVar2 = (longlong *)*plVar8;
        uVar10 = (((((((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar8 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar8 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x17)) * 0x100000001b3 & DAT_180ce1eb0;
        plVar3 = *(longlong **)(DAT_180ce1e98 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_180ce1e98 + uVar10 * 0x10);
        lVar12 = DAT_180ce1e98 + uVar10 * 0x10;
        if (plVar3 != plVar9) break;
        *puVar1 = plVar8;
        *(longlong **)(lVar12 + 8) = plVar8;
        plVar8 = plVar2;
      }
      plVar4 = *(longlong **)(lVar12 + 8);
      if (plVar8[2] != plVar4[2]) break;
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != plVar8) {
        puVar1 = (undefined8 *)plVar8[1];
        *puVar1 = plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar8;
        plVar4[1] = (longlong)puVar5;
        plVar2[1] = (longlong)puVar1;
        plVar8[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar12 + 8) = plVar8;
      plVar8 = plVar2;
    }
    do {
      if (plVar3 == plVar4) {
        puVar5 = (undefined8 *)plVar8[1];
        *puVar5 = plVar2;
        puVar6 = (undefined8 *)plVar2[1];
        *puVar6 = plVar4;
        puVar7 = (undefined8 *)plVar4[1];
        *puVar7 = plVar8;
        plVar4[1] = (longlong)puVar6;
        plVar2[1] = (longlong)puVar5;
        plVar8[1] = (longlong)puVar7;
        *puVar1 = plVar8;
        plVar8 = plVar2;
        goto joined_r0x0001801d60bc;
      }
      plVar4 = (longlong *)plVar4[1];
    } while (plVar8[2] != plVar4[2]);
    lVar12 = *plVar4;
    puVar1 = (undefined8 *)plVar8[1];
    *puVar1 = plVar2;
    plVar3 = (longlong *)plVar2[1];
    *plVar3 = lVar12;
    puVar5 = *(undefined8 **)(lVar12 + 8);
    *puVar5 = plVar8;
    *(longlong **)(lVar12 + 8) = plVar3;
    plVar2[1] = (longlong)puVar1;
    plVar8[1] = (longlong)puVar5;
    plVar8 = plVar2;
  } while( true );
}



/* ===== 1801d6240 FUN_1801d6240 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801d6240(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1f0 [200];
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_110 [200];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  pcVar3 = DAT_180961d10;
  pcVar2 = DAT_180961d08;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_218;
  pcVar1 = *(code **)(*param_1 + 0x278);
  local_1f8 = 0;
  local_1f4 = 0xc00000c8;
  FUN_180540170(local_1f0,0,200);
  local_128 = 0;
  local_120 = 0;
  (*pcVar2)(&local_1f8,param_2);
  local_120 = 0x78657476;
  (*pcVar3)(param_1,&local_1f8,&DAT_18058b643);
  local_118 = 0;
  local_114 = 0xc00000c8;
  FUN_180540170(local_110,0,200);
  local_48 = 0;
  local_40 = 0;
  (*pcVar2)(&local_118,param_2);
  local_40 = 0x78657476;
  (*pcVar1)(param_1,&local_118,0);
  return;
}



/* ===== 1801d6370 FUN_1801d6370 ===== */

undefined1 FUN_1801d6370(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  UNLOCK();
  return 1;
}



/* ===== 1801d6380 FUN_1801d6380 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801d6380(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  code *pcVar2;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_110 [200];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  pcVar2 = DAT_180961d08;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_138;
  pcVar1 = *(code **)(*param_1 + 0x140);
  local_118 = 0;
  local_114 = 0xc00000c8;
  FUN_180540170(local_110,0,200);
  local_48 = 0;
  local_40 = 0;
  (*pcVar2)(&local_118,param_2);
  local_40 = param_3;
  (*pcVar1)(param_1,&local_118,0);
  return;
}



/* ===== 1801d6440 FUN_1801d6440 ===== */

undefined1 FUN_1801d6440(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  UNLOCK();
  return 1;
}



/* ===== 1801d6450 FUN_1801d6450 ===== */

longlong FUN_1801d6450(char *param_1)

{
  byte bVar1;
  char cVar2;
  uint3 uVar3;
  uint uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  char cVar8;
  size_t sVar9;
  HMODULE hModule;
  FARPROC pFVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) && (sVar9 = strlen(param_1), sVar9 < 0xc0)) {
    if (DAT_181114308 == 0) {
      hModule = GetModuleHandleA("resourcesystem.dll");
      if (hModule == (HMODULE)0x0) {
        return 0;
      }
      pFVar10 = GetProcAddress(hModule,"CreateInterface");
      if (pFVar10 == (FARPROC)0x0) {
        return 0;
      }
      DAT_181114308 = (*pFVar10)("ResourceSystem013",0);
      if (DAT_181114308 == 0) {
        return 0;
      }
    }
    lVar12 = DAT_181114308;
    if (DAT_180961d08 != 0) {
      lVar11 = FUN_1804ef4b0(param_1,0x2e);
      uVar13 = 0;
      if (((lVar11 != 0) && (bVar1 = *(byte *)(lVar11 + 1), bVar1 != 0)) && (bVar1 != 0x5f)) {
        uVar13 = (ulonglong)bVar1;
        cVar8 = *(char *)(lVar11 + 2);
        if ((cVar8 != '\0') && (cVar8 != '_')) {
          uVar13 = (ulonglong)CONCAT11(cVar8,bVar1);
          cVar2 = *(char *)(lVar11 + 3);
          if ((cVar2 != '\0') && (cVar2 != '_')) {
            uVar3 = CONCAT12(cVar2,CONCAT11(cVar8,bVar1));
            uVar13 = (ulonglong)uVar3;
            cVar8 = *(char *)(lVar11 + 4);
            if ((cVar8 != '\0') && (cVar8 != '_')) {
              uVar4 = CONCAT13(cVar8,uVar3);
              uVar13 = (ulonglong)uVar4;
              cVar8 = *(char *)(lVar11 + 5);
              if ((cVar8 != '\0') && (cVar8 != '_')) {
                uVar5 = CONCAT14(cVar8,uVar4);
                uVar13 = (ulonglong)uVar5;
                cVar8 = *(char *)(lVar11 + 6);
                if ((cVar8 != '\0') && (cVar8 != '_')) {
                  uVar6 = CONCAT15(cVar8,uVar5);
                  uVar13 = (ulonglong)uVar6;
                  cVar8 = *(char *)(lVar11 + 7);
                  if ((cVar8 != '\0') && (cVar8 != '_')) {
                    uVar7 = CONCAT16(cVar8,uVar6);
                    uVar13 = (ulonglong)uVar7;
                    cVar8 = *(char *)(lVar11 + 8);
                    if ((cVar8 != '\0') && (cVar8 != '_')) {
                      uVar13 = CONCAT17(cVar8,uVar7);
                    }
                  }
                }
              }
            }
          }
        }
      }
      lVar12 = FUN_1801d6380(lVar12,param_1,uVar13);
      if ((lVar12 != 0) && (cVar8 = FUN_1801d6370(lVar12), cVar8 != '\0')) {
        return lVar12;
      }
    }
  }
  return 0;
}



/* ===== 1801d65e0 FUN_1801d65e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801d65e0(longlong param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  uint7 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined4 local_b8;
  undefined1 local_b3;
  undefined *local_b0;
  undefined1 local_a8 [8];
  char local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  ulonglong local_40;
  
  if (param_1 != 0) {
    local_40 = DAT_180919500 ^ (ulonglong)auStack_d8;
    local_50 = 0x6f736572;
    local_4c = 0x65637275;
    local_48 = 0x223a;
    local_46 = 0;
    local_b0 = &DAT_1809ee540;
    iVar6 = FUN_1804e4d70(&DAT_1809ee540);
    puVar10 = auStack_d8;
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809ee58c == 0x7fffffff) {
LAB_1801d6816:
      DAT_1809ee58c = DAT_1809ee58c + -1;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar10 + -8) = &UNK_1801d6828;
      FUN_1804e4a90(6);
    }
    lVar7 = FUN_1804ef120(param_1,&local_50);
    while (lVar7 != 0) {
      lVar7 = lVar7 + 10;
      lVar8 = FUN_1804ef420(lVar7,0x22);
      if (lVar8 == 0) break;
      local_b8 = 0x6574762e;
      local_b3 = 0;
      if ((((lVar8 - lVar7) - 6U < 0xba) && (*(int *)(lVar8 + -5) == 0x6574762e)) &&
         (*(char *)(lVar8 + -1) == 'x')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      local_98 = 0;
      lStack_90 = 0;
      local_88 = 0;
      local_80 = 0;
      uVar11 = FUN_1800133a0(&local_98,lVar7);
      if ((bVar2) &&
         (FUN_1801d6d80(uVar11,local_a8,&local_98), uVar9 = local_80, lVar5 = local_88,
         lVar7 = local_98, plVar3 = DAT_180ce2108, uVar11 = DAT_180ce20b0, local_a0 != '\0')) {
        local_78 = local_98;
        lStack_70 = lStack_90;
        local_68 = local_88;
        local_60 = local_80;
        local_88 = 0;
        local_80 = 0xf;
        uVar4 = local_98._1_7_;
        local_98 = (ulonglong)local_98._1_7_ << 8;
        local_58 = 0;
        local_54 = DAT_180ce20b0;
        if (DAT_180ce2108 == DAT_180ce2110) {
          FUN_1801d7040(&DAT_180ce2100,DAT_180ce2108,&local_78);
        }
        else {
          *DAT_180ce2108 = lVar7;
          plVar3[1] = lStack_90;
          plVar3[2] = lVar5;
          plVar3[3] = uVar9;
          local_68 = 0;
          local_60 = 0xf;
          local_78 = (ulonglong)uVar4 << 8;
          *(undefined4 *)(plVar3 + 4) = 0;
          *(undefined4 *)((longlong)plVar3 + 0x24) = uVar11;
          DAT_180ce2108 = DAT_180ce2108 + 5;
        }
        FUN_18000f890(&local_78);
      }
      else if (0xf < local_80) {
        uVar9 = local_80 + 1;
        lVar7 = local_98;
        if (0xfff < uVar9) {
          lVar7 = *(longlong *)(local_98 + -8);
          if (0x1f < (local_98 - lVar7) - 8U) {
            pcVar1 = (code *)swi(0x29);
            DAT_1809ee58c = (*pcVar1)(5);
            puVar10 = auStack_d0;
            goto LAB_1801d6816;
          }
          uVar9 = local_80 + 0x28;
        }
        thunk_FUN_1803d64e0(lVar7,uVar9);
      }
      lVar7 = FUN_1804ef120(lVar8 + 1,&local_50);
    }
    FUN_1804e4e90(&DAT_1809ee540);
  }
  return;
}



/* ===== 1801d6840 FUN_1801d6840 ===== */

void FUN_1801d6840(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char cVar10;
  int iVar11;
  HMODULE hModule;
  FARPROC pFVar12;
  longlong lVar13;
  undefined8 *puVar14;
  char *pcVar15;
  char *pcVar16;
  undefined8 *puVar17;
  char *pcVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  char *local_60;
  char *pcStack_58;
  char *local_50;
  
  local_60 = (char *)0x0;
  pcStack_58 = (char *)0x0;
  local_50 = (char *)0x0;
  iVar11 = FUN_1804e4d70(&DAT_1809ee540);
  puVar19 = auStack_98;
  puVar20 = auStack_98;
  if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ee58c == 0x7fffffff) {
    DAT_1809ee58c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_180ce20b0 = DAT_180ce20b0 + 1;
  if (DAT_180ce2100 != DAT_180ce2108) {
    puVar14 = DAT_180ce2108;
    pcVar15 = pcStack_58;
    puVar17 = DAT_180ce2100;
    iVar11 = DAT_180ce20b0;
    do {
      if (3 < (int)((longlong)pcVar15 - (longlong)local_60 >> 3) * -0x33333333) break;
      if (iVar11 < *(int *)((longlong)puVar17 + 0x24)) {
        puVar17 = puVar17 + 5;
      }
      else {
        puVar14 = puVar17;
        puVar6 = puVar17;
        if (pcVar15 == local_50) {
          FUN_1801d7040(&local_60,pcVar15,puVar17);
          puVar8 = DAT_180ce2108;
        }
        else {
          pcVar15[0] = '\0';
          pcVar15[1] = '\0';
          pcVar15[2] = '\0';
          pcVar15[3] = '\0';
          pcVar15[4] = '\0';
          pcVar15[5] = '\0';
          pcVar15[6] = '\0';
          pcVar15[7] = '\0';
          pcVar15[8] = '\0';
          pcVar15[9] = '\0';
          pcVar15[10] = '\0';
          pcVar15[0xb] = '\0';
          pcVar15[0xc] = '\0';
          pcVar15[0xd] = '\0';
          pcVar15[0xe] = '\0';
          pcVar15[0xf] = '\0';
          pcVar15[0x10] = '\0';
          pcVar15[0x11] = '\0';
          pcVar15[0x12] = '\0';
          pcVar15[0x13] = '\0';
          pcVar15[0x14] = '\0';
          pcVar15[0x15] = '\0';
          pcVar15[0x16] = '\0';
          pcVar15[0x17] = '\0';
          pcVar15[0x18] = '\0';
          pcVar15[0x19] = '\0';
          pcVar15[0x1a] = '\0';
          pcVar15[0x1b] = '\0';
          pcVar15[0x1c] = '\0';
          pcVar15[0x1d] = '\0';
          pcVar15[0x1e] = '\0';
          pcVar15[0x1f] = '\0';
          uVar2 = *(undefined4 *)((longlong)puVar17 + 4);
          uVar3 = *(undefined4 *)(puVar17 + 1);
          uVar4 = *(undefined4 *)((longlong)puVar17 + 0xc);
          *(undefined4 *)pcVar15 = *(undefined4 *)puVar17;
          *(undefined4 *)(pcVar15 + 4) = uVar2;
          *(undefined4 *)(pcVar15 + 8) = uVar3;
          *(undefined4 *)(pcVar15 + 0xc) = uVar4;
          uVar5 = puVar17[3];
          *(undefined8 *)(pcVar15 + 0x10) = puVar17[2];
          *(undefined8 *)(pcVar15 + 0x18) = uVar5;
          puVar17[2] = 0;
          puVar17[3] = 0xf;
          *(undefined1 *)puVar17 = 0;
          *(undefined4 *)(pcVar15 + 0x20) = *(undefined4 *)(puVar17 + 4);
          *(undefined4 *)(pcVar15 + 0x24) = *(undefined4 *)((longlong)puVar17 + 0x24);
          pcStack_58 = pcStack_58 + 0x28;
          puVar8 = DAT_180ce2108;
        }
        while( true ) {
          puVar9 = DAT_180ce2108;
          puVar7 = puVar6 + 5;
          if (puVar7 == DAT_180ce2108) break;
          DAT_180ce2108 = puVar8;
          FUN_18002ba60(puVar14,puVar7);
          *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar7 + 4);
          *(undefined4 *)((longlong)puVar14 + 0x24) = *(undefined4 *)((longlong)puVar6 + 0x4c);
          puVar14 = puVar14 + 5;
          puVar8 = DAT_180ce2108;
          puVar6 = puVar7;
          DAT_180ce2108 = puVar9;
        }
        DAT_180ce2108 = puVar8;
        FUN_18000f890(puVar8 + -5);
        puVar14 = DAT_180ce2108 + -5;
        pcVar15 = pcStack_58;
        DAT_180ce2108 = puVar14;
        iVar11 = DAT_180ce20b0;
      }
    } while (puVar17 != puVar14);
  }
  FUN_1804e4e90(&DAT_1809ee540);
  pcVar15 = pcStack_58;
  puVar21 = auStack_98;
  if (local_60 == pcStack_58) goto LAB_1801d6c42;
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  pcVar18 = local_60;
  do {
    if (*(ulonglong *)(pcVar18 + 0x18) < 0x10) {
      pcVar16 = pcVar18;
    }
    else {
      pcVar16 = *(char **)pcVar18;
    }
    if (((((pcVar16 == (char *)0x0) || (*pcVar16 == '\0')) ||
         ((DAT_181114308 == 0 &&
          (((hModule = GetModuleHandleA("resourcesystem.dll"), hModule == (HMODULE)0x0 ||
            (pFVar12 = GetProcAddress(hModule,"CreateInterface"), pFVar12 == (FARPROC)0x0)) ||
           (DAT_181114308 = (*pFVar12)("ResourceSystem013",0), DAT_181114308 == 0)))))) ||
        ((DAT_180961d08 == 0 || (DAT_180961d10 == 0)))) ||
       ((lVar13 = FUN_1801d6240(DAT_181114308,pcVar16), lVar13 == 0 ||
        (cVar10 = FUN_1801d6370(lVar13), cVar10 == '\0')))) {
      *(int *)(pcVar18 + 0x20) = *(int *)(pcVar18 + 0x20) + 1;
      if (*(int *)(pcVar18 + 0x20) < 0x14) {
        *(int *)(pcVar18 + 0x24) = DAT_180ce20b0 + 0x1e;
        if (puStack_70 == local_68) {
          FUN_1801d7040(&local_78,puStack_70,pcVar18);
        }
        else {
          *puStack_70 = 0;
          puStack_70[1] = 0;
          puStack_70[2] = 0;
          puStack_70[3] = 0;
          uVar2 = *(undefined4 *)(pcVar18 + 4);
          uVar3 = *(undefined4 *)(pcVar18 + 8);
          uVar4 = *(undefined4 *)(pcVar18 + 0xc);
          *(undefined4 *)puStack_70 = *(undefined4 *)pcVar18;
          *(undefined4 *)((longlong)puStack_70 + 4) = uVar2;
          *(undefined4 *)(puStack_70 + 1) = uVar3;
          *(undefined4 *)((longlong)puStack_70 + 0xc) = uVar4;
          uVar5 = *(undefined8 *)(pcVar18 + 0x18);
          puStack_70[2] = *(undefined8 *)(pcVar18 + 0x10);
          puStack_70[3] = uVar5;
          pcVar18[0x10] = '\0';
          pcVar18[0x11] = '\0';
          pcVar18[0x12] = '\0';
          pcVar18[0x13] = '\0';
          pcVar18[0x14] = '\0';
          pcVar18[0x15] = '\0';
          pcVar18[0x16] = '\0';
          pcVar18[0x17] = '\0';
          pcVar18[0x18] = '\x0f';
          pcVar18[0x19] = '\0';
          pcVar18[0x1a] = '\0';
          pcVar18[0x1b] = '\0';
          pcVar18[0x1c] = '\0';
          pcVar18[0x1d] = '\0';
          pcVar18[0x1e] = '\0';
          pcVar18[0x1f] = '\0';
          *pcVar18 = '\0';
          *(undefined4 *)(puStack_70 + 4) = *(undefined4 *)(pcVar18 + 0x20);
          *(undefined4 *)((longlong)puStack_70 + 0x24) = *(undefined4 *)(pcVar18 + 0x24);
          puStack_70 = puStack_70 + 5;
        }
      }
      else {
        pcVar16 = pcVar18;
        if (0xf < *(ulonglong *)(pcVar18 + 0x18)) {
          pcVar16 = *(char **)pcVar18;
        }
        FUN_1802b2560("[materials] texture not pinned | %s",pcVar16);
      }
    }
    pcVar18 = pcVar18 + 0x28;
  } while (pcVar18 != pcVar15);
  if (local_78 != puStack_70) {
    iVar11 = FUN_1804e4d70(&DAT_1809ee540);
    puVar14 = puStack_70;
    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    puVar17 = DAT_180ce2108;
    puVar6 = local_78;
    if (DAT_1809ee58c == 0x7fffffff) {
      DAT_1809ee58c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    for (; DAT_180ce2108 = puVar17, puVar6 != puVar14; puVar6 = puVar6 + 5) {
      if (puVar17 == DAT_180ce2110) {
        FUN_1801d7040(&DAT_180ce2100,puVar17,puVar6);
      }
      else {
        *puVar17 = 0;
        puVar17[1] = 0;
        puVar17[2] = 0;
        puVar17[3] = 0;
        uVar2 = *(undefined4 *)((longlong)puVar6 + 4);
        uVar3 = *(undefined4 *)(puVar6 + 1);
        uVar4 = *(undefined4 *)((longlong)puVar6 + 0xc);
        *(undefined4 *)puVar17 = *(undefined4 *)puVar6;
        *(undefined4 *)((longlong)puVar17 + 4) = uVar2;
        *(undefined4 *)(puVar17 + 1) = uVar3;
        *(undefined4 *)((longlong)puVar17 + 0xc) = uVar4;
        uVar5 = puVar6[3];
        puVar17[2] = puVar6[2];
        puVar17[3] = uVar5;
        puVar6[2] = 0;
        puVar6[3] = 0xf;
        *(undefined1 *)puVar6 = 0;
        *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(puVar6 + 4);
        *(undefined4 *)((longlong)puVar17 + 0x24) = *(undefined4 *)((longlong)puVar6 + 0x24);
        DAT_180ce2108 = DAT_180ce2108 + 5;
      }
      puVar17 = DAT_180ce2108;
    }
    FUN_1804e4e90(&DAT_1809ee540);
  }
  puVar17 = puStack_70;
  puVar21 = auStack_98;
  puVar14 = local_78;
  if (local_78 == (undefined8 *)0x0) goto LAB_1801d6c42;
  for (; puVar14 != puVar17; puVar14 = puVar14 + 5) {
    FUN_18000f890(puVar14);
  }
  puVar14 = local_78;
  if ((ulonglong)(((longlong)local_68 - (longlong)local_78 >> 3) * 8) < 0x1000) {
LAB_1801d6c2b:
    puVar20 = puVar19;
  }
  else {
    puVar14 = (undefined8 *)local_78[-1];
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_78 + (-8 - (longlong)puVar14))) {
      puVar14 = (undefined8 *)&DAT_00000005;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar19 = auStack_90;
      goto LAB_1801d6c2b;
    }
  }
  *(undefined8 *)(puVar20 + -8) = 0x1801d6c36;
  thunk_FUN_1803d64e0(puVar14);
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  puVar21 = puVar20;
LAB_1801d6c42:
  pcVar18 = pcStack_58;
  pcVar15 = local_60;
  if (local_60 == (char *)0x0) {
    return;
  }
  for (; pcVar15 != pcVar18; pcVar15 = pcVar15 + 0x28) {
    *(undefined8 *)(puVar21 + -8) = 0x1801d6c5c;
    FUN_18000f890(pcVar15);
  }
  pcVar15 = local_60;
  if ((0xfff < (ulonglong)(((longlong)local_50 - (longlong)local_60 >> 3) * 8)) &&
     (pcVar15 = *(char **)(local_60 + -8), (char *)0x1f < local_60 + (-8 - (longlong)pcVar15))) {
    pcVar15 = &DAT_00000005;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar21 = puVar21 + 8;
  }
  *(undefined8 *)(puVar21 + -8) = 0x1801d6cb6;
  thunk_FUN_1803d64e0(pcVar15);
  return;
}



/* ===== 1801d6d10 FUN_1801d6d10 ===== */

void FUN_1801d6d10(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_18000f890(puVar1 + 2);
    thunk_FUN_1803d64e0(puVar1,0x30);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x30);
  return;
}



/* ===== 1801d6d80 FUN_1801d6d80 ===== */

longlong * FUN_1801d6d80(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  size_t _Size;
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  undefined8 *puVar10;
  undefined8 *local_58;
  longlong local_50;
  
  puVar6 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar6 = (undefined8 *)*param_3;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar3 = 0;
  if (param_3[2] != 0) {
    do {
      uVar8 = (uVar8 ^ *(byte *)((longlong)puVar6 + uVar3)) * 0x100000001b3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)param_3[2]);
  }
  FUN_1801d7320(uVar3,&local_58,param_3,uVar8);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180ce20d0 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar10 = &DAT_180ce20c8;
  puVar2 = (undefined8 *)FUN_1804ecaa0(0x30);
  puVar6 = puVar2;
  FUN_180024b50(puVar2 + 2,param_3);
  uVar3 = DAT_180ce20f8;
  if (DAT_180ce20c0 < (float)(DAT_180ce20d0 + 1) / (float)DAT_180ce20f8) {
    fVar9 = (float)FUN_18053ef70((float)(DAT_180ce20d0 + 1) / DAT_180ce20c0,DAT_180ce20d0,
                                 (float)DAT_180ce20f8,DAT_180ce20c0,puVar10,puVar6);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar9) && (fVar9 = fVar9 - DAT_1808acd00, fVar9 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar9 + lVar4)) {
      uVar5 = (longlong)fVar9 + lVar4;
    }
    uVar7 = uVar3;
    if ((uVar3 < uVar5) && ((0x1ff < uVar3 || (uVar7 = uVar3 * 8, uVar3 * 8 < uVar5)))) {
      uVar7 = uVar5;
    }
    FUN_1801d7440(uVar5,uVar7);
    puVar6 = *(undefined8 **)(DAT_180ce20d8 + 8 + (DAT_180ce20f0 & uVar8) * 0x10);
    local_58 = DAT_180ce20c8;
    if (puVar6 != DAT_180ce20c8) {
      puVar10 = *(undefined8 **)(DAT_180ce20d8 + (DAT_180ce20f0 & uVar8) * 0x10);
      uVar3 = puVar2[5];
      _Size = puVar2[4];
      local_58 = puVar6;
      while( true ) {
        puVar6 = local_58 + 2;
        if (0xf < (ulonglong)local_58[5]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        if (uVar3 < 0x10) {
          _Buf1 = puVar2 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar2[2];
        }
        if ((_Size == local_58[4]) &&
           ((_Size == 0 || (iVar1 = memcmp(_Buf1,puVar6,_Size), iVar1 == 0)))) break;
        if (local_58 == puVar10) goto LAB_1801d6fbd;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_1801d6fbd:
  puVar6 = (undefined8 *)local_58[1];
  DAT_180ce20d0 = DAT_180ce20d0 + 1;
  *puVar2 = local_58;
  puVar2[1] = puVar6;
  *puVar6 = puVar2;
  local_58[1] = puVar2;
  lVar4 = DAT_180ce20d8;
  uVar8 = DAT_180ce20f0 & uVar8;
  puVar10 = *(undefined8 **)(DAT_180ce20d8 + uVar8 * 0x10);
  if (puVar10 == DAT_180ce20c8) {
    *(undefined8 **)(DAT_180ce20d8 + uVar8 * 0x10) = puVar2;
  }
  else {
    if (puVar10 == local_58) {
      *(undefined8 **)(DAT_180ce20d8 + uVar8 * 0x10) = puVar2;
      goto LAB_1801d7017;
    }
    if (*(undefined8 **)(DAT_180ce20d8 + 8 + uVar8 * 0x10) != puVar6) goto LAB_1801d7017;
  }
  *(undefined8 **)(lVar4 + 8 + uVar8 * 0x10) = puVar2;
LAB_1801d7017:
  *param_2 = (longlong)puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1801d7040 FUN_1801d7040 ===== */

undefined8 * FUN_1801d7040(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar16 = *param_1;
  uVar15 = 0x666666666666666;
  lVar10 = (param_1[1] - lVar16 >> 3) * -0x3333333333333333;
  if (lVar10 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar10 + 1;
  uVar13 = (param_1[2] - lVar16 >> 3) * -0x3333333333333333;
  if (uVar13 <= 0x666666666666666 - (uVar13 >> 1)) {
    uVar13 = (uVar13 >> 1) + uVar13;
    uVar15 = uVar1;
    if (uVar1 <= uVar13) {
      uVar15 = uVar13;
    }
    if (0x666666666666666 < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar11 = (undefined8 *)FUN_18000fb70(uVar15 * 0x28);
  puVar17 = auStack_48;
  puVar18 = auStack_48;
  lVar16 = ((longlong)param_2 - lVar16) / 0x28;
  puVar11[lVar16 * 5] = 0;
  (puVar11 + lVar16 * 5)[1] = 0;
  puVar11[lVar16 * 5 + 2] = 0;
  puVar2 = puVar11 + lVar16 * 5;
  puVar2[3] = 0;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined4 *)puVar2 = *param_3;
  *(undefined4 *)((longlong)puVar2 + 4) = uVar5;
  *(undefined4 *)(puVar2 + 1) = uVar6;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar7;
  uVar8 = *(undefined8 *)(param_3 + 6);
  puVar2[2] = *(undefined8 *)(param_3 + 4);
  puVar2[3] = uVar8;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined4 *)(puVar2 + 4) = param_3[8];
  *(undefined4 *)((longlong)puVar2 + 0x24) = param_3[9];
  puVar3 = (undefined4 *)param_1[1];
  puVar12 = (undefined4 *)*param_1;
  puVar9 = puVar11;
  if (param_2 == puVar3) {
    for (; puVar12 != puVar3; puVar12 = puVar12 + 10) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar5 = puVar12[1];
      uVar6 = puVar12[2];
      uVar7 = puVar12[3];
      *(undefined4 *)puVar9 = *puVar12;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar5;
      *(undefined4 *)(puVar9 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(puVar12 + 6);
      puVar9[2] = *(undefined8 *)(puVar12 + 4);
      puVar9[3] = uVar8;
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar12 + 6) = 0xf;
      *(undefined1 *)puVar12 = 0;
      *(undefined4 *)(puVar9 + 4) = puVar12[8];
      *(undefined4 *)((longlong)puVar9 + 0x24) = puVar12[9];
      puVar9 = puVar9 + 5;
    }
  }
  else {
    for (; puVar12 != param_2; puVar12 = puVar12 + 10) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar5 = puVar12[1];
      uVar6 = puVar12[2];
      uVar7 = puVar12[3];
      *(undefined4 *)puVar9 = *puVar12;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar5;
      *(undefined4 *)(puVar9 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(puVar12 + 6);
      puVar9[2] = *(undefined8 *)(puVar12 + 4);
      puVar9[3] = uVar8;
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar12 + 6) = 0xf;
      *(undefined1 *)puVar12 = 0;
      *(undefined4 *)(puVar9 + 4) = puVar12[8];
      *(undefined4 *)((longlong)puVar9 + 0x24) = puVar12[9];
      puVar9 = puVar9 + 5;
    }
    puVar3 = (undefined4 *)param_1[1];
    puVar9 = puVar2;
    for (; param_2 != puVar3; param_2 = param_2 + 10) {
      puVar14 = puVar9 + 5;
      *puVar14 = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      *(undefined4 *)puVar14 = *param_2;
      *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar5;
      *(undefined4 *)(puVar9 + 6) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0x34) = uVar7;
      uVar8 = *(undefined8 *)(param_2 + 6);
      puVar9[7] = *(undefined8 *)(param_2 + 4);
      puVar9[8] = uVar8;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      *(undefined4 *)(puVar9 + 9) = param_2[8];
      *(undefined4 *)((longlong)puVar9 + 0x4c) = param_2[9];
      puVar9 = puVar14;
    }
  }
  lVar16 = *param_1;
  if (lVar16 == 0) goto LAB_1801d72d3;
  lVar10 = param_1[1];
  for (; lVar16 != lVar10; lVar16 = lVar16 + 0x28) {
    FUN_18000f890(lVar16);
  }
  lVar16 = *param_1;
  lVar10 = lVar16;
  if ((ulonglong)((param_1[2] - lVar16 >> 3) * 8) < 0x1000) {
LAB_1801d72c8:
    puVar18 = puVar17;
  }
  else {
    lVar10 = *(longlong *)(lVar16 + -8);
    if (0x1f < (lVar16 - lVar10) - 8U) {
      lVar10 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar17 = auStack_40;
      goto LAB_1801d72c8;
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x1801d72d3;
  thunk_FUN_1803d64e0(lVar10);
LAB_1801d72d3:
  *param_1 = (longlong)puVar11;
  param_1[1] = (longlong)(puVar11 + uVar1 * 5);
  param_1[2] = (longlong)(puVar11 + uVar15 * 5);
  return puVar2;
}



/* ===== 1801d7320 FUN_1801d7320 ===== */

undefined8 *
FUN_1801d7320(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(DAT_180ce20d8 + 8 + (DAT_180ce20f0 & param_4) * 0x10);
  if (puVar4 == DAT_180ce20c8) {
    *param_2 = DAT_180ce20c8;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = *(undefined8 **)(DAT_180ce20d8 + (DAT_180ce20f0 & param_4) * 0x10);
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



/* ===== 1801d7400 FUN_1801d7400 ===== */

void FUN_1801d7400(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18000f890(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x30);
  return;
}



/* ===== 1801d7440 FUN_1801d7440 ===== */

void FUN_1801d7440(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong _Size;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  
  plVar9 = DAT_180ce20c8;
  for (lVar17 = 0x3f; 0xfffffffffffffffU >> lVar17 == 0; lVar17 = lVar17 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar17 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar11 = param_2 - 1 | 1;
  lVar17 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
  }
  bVar13 = (char)lVar17 + 1;
  lVar17 = 1L << (bVar13 & 0x3f);
  FUN_180029a30(&DAT_180ce20d8,2L << (bVar13 & 0x3f),DAT_180ce20c8);
  DAT_180ce20f0 = lVar17 - 1;
  DAT_180ce20f8 = lVar17;
  plVar8 = (longlong *)*DAT_180ce20c8;
joined_r0x0001801d74ca:
  do {
    while( true ) {
      if (plVar8 == plVar9) {
        return;
      }
      uVar11 = plVar8[5];
      plVar18 = plVar8 + 2;
      plVar3 = (longlong *)*plVar8;
      _Size = plVar8[4];
      uVar12 = 0xcbf29ce484222325;
      if (0xf < uVar11) {
        plVar18 = (longlong *)plVar8[2];
      }
      uVar15 = 0;
      if (_Size != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar18 + uVar15);
          uVar15 = uVar15 + 1;
          uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
        } while (uVar15 < _Size);
      }
      uVar12 = uVar12 & DAT_180ce20f0;
      plVar18 = *(longlong **)(DAT_180ce20d8 + uVar12 * 0x10);
      puVar2 = (undefined8 *)(DAT_180ce20d8 + uVar12 * 0x10);
      lVar17 = DAT_180ce20d8 + uVar12 * 0x10;
      if (plVar18 != plVar9) break;
      *puVar2 = plVar8;
      *(longlong **)(lVar17 + 8) = plVar8;
      plVar8 = plVar3;
    }
    plVar4 = *(longlong **)(lVar17 + 8);
    plVar16 = plVar4 + 2;
    if (0xf < (ulonglong)plVar4[5]) {
      plVar16 = (longlong *)*plVar16;
    }
    plVar14 = plVar8 + 2;
    if (0xf < uVar11) {
      plVar14 = (longlong *)plVar8[2];
    }
    if (_Size != plVar4[4]) {
joined_r0x0001801d75d3:
      while (plVar18 != plVar4) {
        plVar4 = (longlong *)plVar4[1];
        plVar16 = plVar4 + 2;
        if (0xf < (ulonglong)plVar4[5]) {
          plVar16 = (longlong *)*plVar16;
        }
        if (uVar11 < 0x10) {
          plVar14 = plVar8 + 2;
        }
        else {
          plVar14 = (longlong *)plVar8[2];
        }
        if (_Size == plVar4[4]) {
          if ((_Size == 0) || (iVar10 = memcmp(plVar14,plVar16,_Size), iVar10 == 0)) {
            lVar17 = *plVar4;
            puVar2 = (undefined8 *)plVar8[1];
            *puVar2 = plVar3;
            plVar18 = (longlong *)plVar3[1];
            *plVar18 = lVar17;
            puVar5 = *(undefined8 **)(lVar17 + 8);
            *puVar5 = plVar8;
            *(longlong **)(lVar17 + 8) = plVar18;
            plVar3[1] = (longlong)puVar2;
            plVar8[1] = (longlong)puVar5;
            plVar8 = plVar3;
            goto joined_r0x0001801d74ca;
          }
          uVar11 = plVar8[5];
        }
      }
      puVar5 = (undefined8 *)plVar8[1];
      *puVar5 = plVar3;
      puVar6 = (undefined8 *)plVar3[1];
      *puVar6 = plVar4;
      puVar7 = (undefined8 *)plVar4[1];
      *puVar7 = plVar8;
      plVar4[1] = (longlong)puVar6;
      plVar3[1] = (longlong)puVar5;
      plVar8[1] = (longlong)puVar7;
      *puVar2 = plVar8;
      plVar8 = plVar3;
      goto joined_r0x0001801d74ca;
    }
    if ((_Size != 0) && (iVar10 = memcmp(plVar14,plVar16,_Size), iVar10 != 0)) {
      uVar11 = plVar8[5];
      goto joined_r0x0001801d75d3;
    }
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != plVar8) {
      puVar2 = (undefined8 *)plVar8[1];
      *puVar2 = plVar3;
      puVar5 = (undefined8 *)plVar3[1];
      *puVar5 = plVar4;
      puVar6 = (undefined8 *)plVar4[1];
      *puVar6 = plVar8;
      plVar4[1] = (longlong)puVar5;
      plVar3[1] = (longlong)puVar2;
      plVar8[1] = (longlong)puVar6;
    }
    *(longlong **)(lVar17 + 8) = plVar8;
    plVar8 = plVar3;
  } while( true );
}



/* ===== 1801d76c0 FUN_1801d76c0 ===== */

undefined1 FUN_1801d76c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  
  if ((*param_1 != 0) && (DAT_180ca09f0 != 0)) {
    iVar5 = FUN_180011200(*param_1 + (ulonglong)DAT_180ca09f0);
    uVar2 = DAT_180ca09f4;
    if (iVar5 - 1U < 1000) {
      if (*param_2 == 0) {
        return false;
      }
      lVar1 = *param_1;
      if (lVar1 == *param_2) {
        return 2;
      }
      uVar6 = (ulonglong)DAT_180ca09f4;
      if ((lVar1 == 0) || (DAT_180ca09f4 == 0)) {
        cVar3 = '\0';
      }
      else {
        cVar3 = FUN_180011220(lVar1 + uVar6);
      }
      if ((*param_2 == 0) || (uVar2 == 0)) {
        return cVar3 == '\0';
      }
      cVar4 = FUN_180011220(*param_2 + uVar6);
      return cVar3 == cVar4;
    }
  }
  return 3;
}



/* ===== 1801d77b0 FUN_1801d77b0 ===== */

void FUN_1801d77b0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 local_48;
  uint local_40;
  undefined8 local_38;
  uint local_30;
  undefined1 local_28 [32];
  
  if ((param_1 != 0) && (param_1 - 0xff38U < 0x7ffffffeffff)) {
    puVar3 = (undefined8 *)FUN_1800111b0(&local_38,param_1 + 200);
    local_48 = *puVar3;
    uVar4 = (uint)local_48;
    uVar2 = *(uint *)(puVar3 + 1);
    local_40 = uVar2;
    puVar3 = (undefined8 *)FUN_1800111b0(local_28,param_1 + 0x38);
    uVar1 = *puVar3;
    local_30 = *(uint *)(puVar3 + 1);
    if ((((uVar4 & 0x7f800000) != 0x7f800000) &&
        ((((local_48._4_4_ & 0x7f800000) != 0x7f800000 && ((uVar2 & 0x7f800000) != 0x7f800000)) &&
         (((uint)uVar1 & 0x7f800000) != 0x7f800000)))) &&
       ((local_38._4_4_ = (uint)((ulonglong)uVar1 >> 0x20),
        (local_38._4_4_ & 0x7f800000) != 0x7f800000 && ((local_30 & 0x7f800000) != 0x7f800000)))) {
      local_38 = uVar1;
      if (param_3 != 0) {
        if (DAT_180ca0950 != 0) {
          FUN_180023a50(param_3 + (ulonglong)DAT_180ca0950,&local_48);
        }
        if (DAT_180ca09d4 != 0) {
          FUN_180023a50(param_3 + (ulonglong)DAT_180ca09d4,&local_48);
        }
      }
      if (DAT_180ca09c0 != 0) {
        FUN_180023a50(param_2 + (ulonglong)DAT_180ca09c0,&local_38);
      }
      if (DAT_180ca09bc != 0) {
        FUN_180023a50(param_2 + (ulonglong)DAT_180ca09bc,&local_38);
      }
    }
  }
  return;
}



/* ===== 1801d7950 FUN_1801d7950 ===== */

bool FUN_1801d7950(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined2 local_27;
  undefined1 local_25;
  
  if (DAT_180cc3e7f == '\0') {
    if (DAT_1811089f0 == 0) {
      return false;
    }
    ppuVar4 = (undefined **)&DAT_1805f8c30;
    DAT_180ce2a28 = 0;
    do {
      if (0xbf < DAT_180ce2a28) break;
      uVar1 = FUN_18038eaf0(ppuVar4[1],ppuVar4[2]);
      if (uVar1 != 0) {
        if (ppuVar4[4] == (undefined *)0x0) {
          iVar3 = *(int *)(ppuVar4 + 3);
        }
        else {
          uVar2 = FUN_18038eaf0(ppuVar4[1]);
          if ((uVar2 == 0) || (uVar2 < uVar1)) goto LAB_1801d7a49;
          iVar3 = (*(int *)(ppuVar4 + 5) - uVar1) + uVar2;
        }
        if (iVar3 - 1U < 0x80) {
          (&DAT_180ce2120)[DAT_180ce2a28 * 0xc] = *(undefined1 *)ppuVar4;
          (&DAT_180ce2121)[DAT_180ce2a28 * 6] = local_27;
          (&DAT_180ce2123)[DAT_180ce2a28 * 0xc] = local_25;
          (&DAT_180ce2124)[DAT_180ce2a28 * 3] = uVar1;
          (&DAT_180ce2128)[DAT_180ce2a28 * 3] = iVar3;
          DAT_180ce2a28 = DAT_180ce2a28 + 1;
        }
      }
LAB_1801d7a49:
      ppuVar4 = ppuVar4 + 6;
    } while (ppuVar4 != &PTR_s_health_bar_1805fa220);
    DAT_180ce9630 = FUN_18038eaf0("C_CSPlayerPawn","m_pAimPunchServices");
    DAT_180cc3e7f = '\x01';
  }
  return DAT_180ce2a28 != 0;
}



/* ===== 1801d7ab0 FUN_1801d7ab0 ===== */

void FUN_1801d7ab0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = DAT_180ce9638;
  if (((param_1 - 0x10000U < 0x7ffffffeffff) && (param_2 - 1U < 0x80)) && (DAT_180ce9638 < 0xc0)) {
    lVar2 = DAT_180ce9638 * 0x90;
    (&DAT_180ce2a38)[DAT_180ce9638 * 0x12] = param_2;
    (&DAT_180ce2a30)[uVar1 * 0x12] = param_1;
    FUN_180540530(&DAT_180ce2a40 + lVar2,param_1,param_2);
    DAT_180ce9638 = uVar1 + 1;
  }
  return;
}



/* ===== 1801d7b30 FUN_1801d7b30 ===== */

void FUN_1801d7b30(void)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar1 = DAT_180ce9638; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar1 * 0x90;
    if (*(longlong *)(&DAT_180ce29a0 + lVar2) - 0x10000U < 0x7ffffffeffff) {
      FUN_180540530(*(longlong *)(&DAT_180ce29a0 + lVar2),&DAT_180ce29b0 + lVar2,
                    *(undefined8 *)(&DAT_180ce29a8 + lVar2));
    }
  }
  DAT_180ce9638 = 0;
  return;
}



/* ===== 1801d7bc0 FUN_1801d7bc0 ===== */

undefined1 FUN_1801d7bc0(void)

{
  if (((((DAT_180961a50 == 0) || (DAT_180961a58 == 0)) || (DAT_180961a60 == 0)) ||
      ((((DAT_180961a68 == 0 || (DAT_180961a70 == 0)) ||
        ((DAT_180961a78 == 0 || ((DAT_180961a80 == 0 || (DAT_180961aa0 == 0)))))) ||
       (DAT_180961a88 == 0)))) ||
     ((((DAT_180961a90 == 0 || (DAT_180961a98 == 0)) || (DAT_180ca09b8 == 0)) ||
      ((DAT_180ca0970 == 0 || (DAT_180ca0a0c == 0)))))) {
    return 0;
  }
  return 1;
}



/* ===== 1801d7c60 FUN_1801d7c60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801d7c60(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  DWORD DVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  HMODULE hModule;
  FARPROC pFVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_3d8 [32];
  undefined8 *local_3b8;
  undefined4 local_3b0;
  uint local_3a8;
  char local_398;
  char local_397;
  undefined8 local_390;
  longlong local_388 [2];
  int local_378 [2];
  longlong local_370;
  uint local_368 [2];
  longlong local_360;
  ulonglong local_358;
  longlong local_350;
  ulonglong local_348;
  longlong *local_340;
  longlong local_338;
  undefined8 local_330;
  longlong local_328;
  longlong local_320;
  longlong local_318 [3];
  longlong *local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  ulonglong local_2d8;
  ulonglong local_2d0;
  ulonglong local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  longlong local_2b8 [32];
  ulonglong local_1b8 [32];
  int local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_3d8;
  DAT_1809ee590 = 0;
  DAT_1809ee5a0 = 0;
  _DAT_1809ee5a4 = 0xbf800000;
  if (param_1 == 0) {
    DAT_1809ee590 = 0;
    DAT_1809ee5a0 = 0;
    _DAT_1809ee5a4 = 0xbf800000;
    return;
  }
  local_348 = param_1;
  cVar4 = FUN_1801d7bc0();
  if (cVar4 == '\0') {
    PTR_DAT_1809ee5c8 = s_patterns_missing_180700f20;
    return;
  }
  cVar4 = FUN_1801d7950();
  if ((cVar4 == '\0') || (DAT_180ce9630 == 0)) {
    PTR_DAT_1809ee5c8 = s_schema_fields_missing_180700f08;
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_360);
    DAT_181108a00 = local_360;
    DAT_1811089f8 = FUN_1803a0c50(&local_360);
    DAT_180cd1304 = '\x01';
  }
  lVar15 = DAT_181108a00;
  lVar17 = DAT_1811089f8;
  uVar9 = DAT_180ce9630;
  if (((DAT_1811089f8 == 0) || (DAT_181108a00 == 0)) || (DAT_180ca09f0 == 0)) {
LAB_1801d8981:
    PTR_DAT_1809ee5c8 = s_no_local_pawn_180700ef8;
    return;
  }
  iVar6 = FUN_180011200(DAT_1811089f8 + (ulonglong)DAT_180ca09f0);
  uVar24 = DAT_180ca09f8;
  if (999 < iVar6 - 1U) goto LAB_1801d8981;
  if (DAT_180ca09f8 == 0) {
    local_360 = 0;
  }
  else {
    local_360 = FUN_18000f3a0(lVar17 + (ulonglong)DAT_180ca09f8);
  }
  plVar10 = (longlong *)FUN_18000f3a0((ulonglong)DAT_180ca0970 + lVar17);
  local_340 = plVar10;
  local_358 = FUN_18000f3a0((ulonglong)uVar9 + lVar17);
  uVar9 = DAT_180ca0a0c;
  uVar22 = (ulonglong)DAT_180ca0a0c;
  local_370 = FUN_18000f3a0(lVar17 + uVar22);
  if (((uVar9 == 0) || (uVar25 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 == 0)) ||
     (lVar11 = FUN_18000f3a0(lVar17 + uVar22), lVar11 == 0)) {
    lVar11 = 0;
  }
  else {
    uVar7 = FUN_180011200(lVar11 + uVar25);
    plVar13 = (longlong *)FUN_1803a0940(local_388,uVar7);
    lVar11 = *plVar13;
    uVar24 = DAT_180ca09f8;
  }
  uVar22 = local_358;
  if (((local_360 == 0) || (plVar10 == (longlong *)0x0)) ||
     ((local_358 == 0 || ((local_370 == 0 || (lVar11 == 0)))))) {
    PTR_DAT_1809ee5c8 = s_no_weapon_or_services_180700ee0;
    return;
  }
  if (((uVar24 == 0) || (lVar12 = FUN_18000f3a0((ulonglong)uVar24 + lVar17), lVar12 == 0)) ||
     (DAT_180ca0950 == 0)) {
    fVar29 = 0.0;
  }
  else {
    lVar12 = FUN_1800111b0(local_388,lVar12 + (ulonglong)DAT_180ca0950);
    fVar29 = *(float *)(lVar12 + 8);
  }
  if (DAT_180ca0a1c == 0) {
    fVar27 = 0.0;
  }
  else {
    lVar12 = FUN_1800111b0(local_388,lVar17 + (ulonglong)DAT_180ca0a1c);
    fVar27 = *(float *)(lVar12 + 8);
  }
  local_368[0] = FUN_180011200((ulonglong)DAT_180ca0a18 + lVar17);
  lVar12 = FUN_18000f3a0(DAT_180961a50);
  local_350 = lVar12;
  local_338 = FUN_18000f3a0(DAT_180961a58);
  if (lVar12 == 0) {
    return;
  }
  if (local_338 == 0) {
    return;
  }
  if ((DAT_181115068 == 0) &&
     (((hModule = GetModuleHandleA("client.dll"), hModule == (HMODULE)0x0 ||
       (pFVar14 = GetProcAddress(hModule,"CreateInterface"), pFVar14 == (FARPROC)0x0)) ||
      (DAT_181115068 = (*pFVar14)("Source2ClientPrediction001",0), DAT_181115068 == 0)))) {
    lVar12 = 0;
  }
  else {
    lVar12 = FUN_18000f3a0(DAT_181115068 + 0x38);
  }
  lVar3 = local_350;
  local_318[2] = local_360;
  local_2f8 = local_370;
  local_328 = (ulonglong)DAT_180961954 + local_350;
  local_318[0] = lVar15;
  local_2e8 = uVar22;
  DAT_180ce9638 = 0;
  local_390 = lVar12;
  local_318[1] = lVar17;
  local_300 = plVar10;
  local_2f0 = lVar11;
  FUN_1801d7ab0(local_328,4);
  local_358 = (ulonglong)DAT_180961950 + lVar3;
  FUN_1801d7ab0(local_358,4);
  local_320 = (ulonglong)DAT_180961958 + lVar3;
  FUN_1801d7ab0(local_320,4);
  local_388[0] = (ulonglong)DAT_18096195c + lVar3;
  FUN_1801d7ab0(local_388[0],4);
  FUN_1801d7ab0((ulonglong)DAT_180961960 + lVar3,4);
  FUN_1801d7ab0(DAT_180961a60,4);
  FUN_1801d7ab0(DAT_180961a68,8);
  FUN_1801d7ab0(DAT_180961a70,8);
  if (lVar12 != 0) {
    FUN_1801d7ab0(lVar12 + 0x8c,1);
  }
  uVar22 = DAT_180ce2a28;
  uVar25 = 0;
  if (DAT_180ce2a28 != 0) {
    uVar21 = DAT_180ce9638;
    do {
      lVar11 = local_318[(byte)(&DAT_180ce2120)[uVar25 * 0xc]] +
               (ulonglong)(uint)(&DAT_180ce2124)[uVar25 * 3];
      if (lVar11 - 0x10000U < 0x7ffffffeffff) {
        uVar9 = (&DAT_180ce2128)[uVar25 * 3];
        if ((uVar9 - 1 < 0x80) && (uVar21 < 0xc0)) {
          (&DAT_180ce2a38)[uVar21 * 0x12] = (ulonglong)uVar9;
          (&DAT_180ce2a30)[uVar21 * 0x12] = lVar11;
          FUN_180540530(&DAT_180ce2a40 + uVar21 * 0x90,lVar11,uVar9);
          uVar21 = uVar21 + 1;
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 < uVar22);
    DAT_180ce9638 = uVar21;
  }
  FUN_1801d7ab0(plVar10 + 0x33,8);
  lVar11 = local_370;
  uVar25 = 0xe8;
  uVar22 = DAT_180ce9638;
  do {
    uVar21 = 0x80;
    if (0x370 - uVar25 < 0x80) {
      uVar21 = 0x370 - uVar25;
    }
    if ((((uVar25 + lVar11) - 0x10000 < 0x7ffffffeffff) && (uVar21 != 0)) && (uVar22 < 0xc0)) {
      (&DAT_180ce2a30)[uVar22 * 0x12] = uVar25 + lVar11;
      (&DAT_180ce2a38)[uVar22 * 0x12] = uVar21;
      FUN_180540530(&DAT_180ce2a40 + uVar22 * 0x90);
      uVar22 = uVar22 + 1;
    }
    plVar10 = local_340;
    uVar21 = local_348;
    uVar25 = uVar25 + 0x80;
  } while (uVar25 < 0x370);
  DAT_180ce9638 = uVar22;
  if (local_390 != 0) {
    local_398 = '\0';
    FUN_1800233d0(local_390 + 0x8c,&local_398);
  }
  local_378[0] = FUN_180011200((ulonglong)DAT_180ca09b8 + lVar15);
  fVar28 = DAT_1808ac00c;
  local_378[0] = local_378[0] + 1;
  local_390._0_4_ = (float)local_378[0] * DAT_1808ac00c;
  FUN_180013280(local_358,&local_390);
  FUN_180013280(local_328,&DAT_1805a4548);
  FUN_180013280(local_320,local_378);
  local_390 = (ulonglong)local_390._4_4_ << 0x20;
  FUN_180013280(local_388[0],&local_390);
  DVar8 = GetCurrentThreadId();
  local_390._0_4_ = (float)DVar8;
  FUN_180013280((ulonglong)DAT_180961960 + local_350,&local_390);
  local_388[0] = lVar17;
  FUN_1800239d0(DAT_180961a68,local_388);
  local_388[0] = lVar17;
  FUN_1800239d0(DAT_180961a70,local_388);
  FUN_180013280((ulonglong)DAT_180ca09b8 + lVar15,local_378);
  local_330 = 0;
  FUN_180540170(local_2b8,0,0x100);
  FUN_180540170(local_1b8,0,0x100);
  local_358 = *(ulonglong *)(uVar21 + 0x70);
  iVar6 = 0;
  local_348 = *(ulonglong *)(uVar21 + 0x60);
  local_340 = *(longlong **)(uVar21 + 0x68);
  local_2c0 = *(undefined4 *)(uVar21 + 0x4c);
  lVar15 = *(longlong *)(uVar21 + 0x40);
  *(ulonglong *)(uVar21 + 0x60) = local_348 & 0xfffffffffffff7fc;
  *(ulonglong *)(uVar21 + 0x68) = (ulonglong)local_340 & 0xfffffffffffff7fc;
  local_2bc = *(uint *)(uVar21 + 0x50);
  *(ulonglong *)(uVar21 + 0x70) = local_358 & 0xfffffffffffff7fc;
  local_b8 = 0;
  *(undefined8 *)(uVar21 + 0x4c) = 0xffffffffffffffff;
  if (((lVar15 - 0x10000U < 0x7ffffffeffff) && (lVar11 = *(longlong *)(lVar15 + 0x28), lVar11 != 0))
     && ((0 < *(int *)(lVar15 + 0x20) && (lVar11 - 0x10000U < 0x7ffffffeffff)))) {
    iVar23 = 0;
    do {
      if (0x1f < iVar6) break;
      lVar12 = *(longlong *)(lVar11 + 8 + (longlong)iVar23 * 8);
      if ((lVar12 != 0) && (lVar12 - 0x10000U < 0x7ffffffeffff)) {
        uVar22 = *(ulonglong *)(lVar12 + 0x18);
        if ((uVar22 & 0x803) != 0) {
          local_2b8[iVar6] = lVar12;
          local_1b8[local_b8] = uVar22;
          iVar6 = local_b8 + 1;
          *(ulonglong *)(lVar12 + 0x18) = uVar22 & 0xfffffffffffff7fc;
          lVar11 = *(longlong *)(lVar15 + 0x28);
          local_b8 = iVar6;
        }
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(lVar15 + 0x20));
  }
  lVar15 = *(longlong *)(uVar21 + 0x40);
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_397 = lVar15 - 0x10000U < 0x7ffffffeffff;
  local_2d8 = local_348;
  local_2d0 = (ulonglong)local_340;
  local_2c8 = local_358;
  local_390._0_4_ = (float)local_2bc;
  local_350._0_4_ = local_2c0;
  if ((bool)local_397) {
    cVar4 = FUN_1801d89b0(lVar15,plVar10,&local_a8);
    if (cVar4 != '\0') goto LAB_1801d84d1;
  }
  else {
    cVar4 = '\x01';
LAB_1801d84d1:
    DAT_181115070 = DAT_181115070 + 1;
    uVar9 = DAT_181115070 & 0x800000ff;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xffffff00) + 1;
    }
    local_398 = '\0';
    if (uVar9 != 0) goto LAB_1801d84fd;
  }
  local_398 = '\x01';
LAB_1801d84fd:
  (*DAT_180961a80)(&local_330,lVar17);
  (*DAT_180961a78)(local_338,1);
  (**(code **)(*plVar10 + 0x178))(plVar10,uVar21);
  lVar11 = (**(code **)(*plVar10 + 0x130))(plVar10);
  cVar5 = (**(code **)(*plVar10 + 0x188))(plVar10);
  if (lVar11 != 0) {
    local_370 = CONCAT44(local_370._4_4_,(uint)(cVar5 != '\0'));
    (*DAT_180961a88)(lVar11,uVar21,local_378[0],(uint)(cVar5 != '\0'));
    (**(code **)(*plVar10 + 0x138))(plVar10,uVar21,lVar11);
    if (local_398 != '\0') {
      if (lVar11 - 0xffa0U < 0x7ffffffeffff) {
        local_3b0 = FUN_180011200(lVar11 + 0x60);
      }
      else {
        local_3b0 = 0xffffffff;
      }
      uVar7 = 0xffffffff;
      if (local_397 != '\0') {
        uVar7 = *(undefined4 *)(lVar15 + 0x20);
      }
      local_3a8 = (uint)local_370;
      local_3b8 = &local_a8;
      FUN_1801ec960("predict: real cmd %u | pb steps %d | valid %d %s | movedata steps %d | sync %d"
                    ,*(undefined4 *)(uVar21 + 8),uVar7,cVar4);
    }
    local_388[0] = 0;
    FUN_1800239d0(plVar10 + 0x33,local_388);
    (*DAT_180961a90)(plVar10,uVar21,lVar11,1);
    FUN_1801d77b0(lVar11,lVar17,local_360);
    (*DAT_180961a98)(plVar10,uVar21,lVar11,1);
    local_388[0] = 0;
    FUN_1800239d0(DAT_180961a68);
  }
  (*DAT_180961a78)(local_338);
  (*DAT_180961aa0)(&local_330);
  (**(code **)(*plVar10 + 0x180))(plVar10);
  iVar23 = 0;
  *(ulonglong *)(uVar21 + 0x60) = local_348;
  *(longlong **)(uVar21 + 0x68) = local_340;
  *(ulonglong *)(uVar21 + 0x70) = local_358;
  *(undefined4 *)(uVar21 + 0x4c) = (undefined4)local_350;
  *(float *)(uVar21 + 0x50) = (float)local_390;
  if (0 < iVar6) {
    do {
      iVar20 = iVar23 + 1;
      *(ulonglong *)(local_2b8[iVar23] + 0x18) = local_1b8[iVar23];
      iVar23 = iVar20;
    } while (iVar20 < iVar6);
  }
  if (lVar11 == 0) {
    PTR_DAT_1809ee5c8 = s_no_move_data_180700f68;
  }
  else {
    uVar9 = local_368[0] & 1;
    DAT_1809ee594 = FUN_180011200((ulonglong)DAT_180ca0a18 + lVar17);
    if (DAT_180ca0a44 == 0) {
      DAT_1809ee598 = 0;
    }
    else {
      DAT_1809ee598 = FUN_180011220(lVar17 + (ulonglong)DAT_180ca0a44);
    }
    uVar24 = DAT_180ca0974;
    uVar22 = (ulonglong)DAT_180ca0974;
    if ((DAT_180ca0974 == 0) || (DAT_180ca0978 == 0)) {
      DAT_1809ee59c = 0;
    }
    else {
      DAT_1809ee59c = FUN_18000f3d0((longlong)plVar10 + uVar22 + DAT_180ca0978);
    }
    iVar6 = local_378[0];
    uVar2 = DAT_180ca09f8;
    uVar1 = DAT_180ca0950;
    uVar21 = (ulonglong)DAT_180ca09f8;
    uVar25 = (ulonglong)DAT_180ca0950;
    DAT_1809ee5a8 = local_378[0];
    if (((DAT_180ca09f8 == 0) || (lVar15 = FUN_18000f3a0(lVar17 + uVar21), lVar15 == 0)) ||
       (uVar1 == 0)) {
      _DAT_1809ee5ac = 0;
      _DAT_1809ee5b0 = 0;
      _DAT_1809ee5b4 = 0;
    }
    else {
      puVar16 = (undefined4 *)FUN_1800111b0(local_388,lVar15 + uVar25);
      _DAT_1809ee5ac = *puVar16;
      _DAT_1809ee5b0 = puVar16[1];
      _DAT_1809ee5b4 = puVar16[2];
    }
    if (DAT_180ca0a1c == 0) {
      _DAT_1809ee5b8 = 0;
      _DAT_1809ee5bc = 0;
      _DAT_1809ee5c0 = 0;
    }
    else {
      puVar16 = (undefined4 *)FUN_1800111b0(local_388,lVar17 + (ulonglong)DAT_180ca0a1c);
      _DAT_1809ee5b8 = *puVar16;
      _DAT_1809ee5bc = puVar16[1];
      _DAT_1809ee5c0 = puVar16[2];
    }
    PTR_DAT_1809ee5c8 = &DAT_1806d2ba0;
    DAT_1809ee590 = 1;
    if ((uVar24 != 0) && (DAT_180ca097c != 0)) {
      iVar23 = FUN_180011200((longlong)plVar10 + uVar22 + DAT_180ca097c);
      DAT_1809ee5a0 = iVar23 == iVar6;
    }
    if ((uVar9 == 0) && ((DAT_1809ee594 & 1) != 0)) {
      if ((uVar2 == 0) || ((lVar17 = FUN_18000f3a0(lVar17 + uVar21), lVar17 == 0 || (uVar1 == 0))))
      {
        fVar26 = 0.0;
      }
      else {
        lVar17 = FUN_1800111b0(local_388,lVar17 + uVar25);
        fVar26 = *(float *)(lVar17 + 8);
      }
      fVar28 = (fVar27 - _DAT_1808ac7cc) * fVar28;
      if (fVar28 < DAT_1808acd1c) {
        fVar28 = (fVar26 - fVar29) / fVar28;
        local_370 = CONCAT44(local_370._4_4_,fVar28);
        if (((uint)fVar28 & 0x7f800000) != 0x7f800000) {
          local_390._0_4_ = 0.999;
          local_368[0] = 0;
          puVar19 = local_368;
          if (0.0 <= fVar28) {
            puVar19 = (uint *)&local_370;
          }
          puVar18 = (uint *)&local_390;
          if (fVar28 <= DAT_1808ac33c) {
            puVar18 = puVar19;
          }
          _DAT_1809ee5a4 = *puVar18;
        }
      }
    }
  }
  FUN_1801d7b30();
  return;
}



/* ===== 1801d89b0 FUN_1801d89b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801d89b0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  ulonglong extraout_XMM0_Qa;
  ulonglong uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  *param_3 = 0;
  if (*(int **)(param_1 + 0x28) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 0x28);
    iVar5 = *(int *)(param_1 + 0x20);
    if (iVar1 < *(int *)(param_1 + 0x20)) {
      iVar5 = iVar1;
    }
    if (0x20 < iVar5) {
      snprintf(param_3,0x30,"%d steps",iVar5);
      return 0;
    }
  }
  if (param_2 - 0xfe34U < 0x7ffffffeffff) {
    fVar8 = (float)FUN_18000f3d0(param_2 + 0x1cc);
  }
  else {
    fVar8 = 0.0;
  }
  if (param_2 - 0xfe30U < 0x7ffffffeffff) {
    FUN_18000f3d0(param_2 + 0x1d0);
    uVar9 = extraout_XMM0_Qa;
  }
  else {
    uVar9 = 0;
  }
  if (0 < iVar5) {
    uVar7 = 0;
    fVar11 = 0.0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + uVar7 * 8);
      fVar12 = fVar11;
      if (lVar2 - 0x10000U < 0x7ffffffeffff) {
        fVar12 = *(float *)(lVar2 + 0x24);
        uVar10 = (undefined8)DAT_1808ade90;
        if ((fVar12 < fVar11) || (DAT_1808ac34c < fVar12)) {
          snprintf(param_3,0x30,"step %d when %.3f after %.3f",uVar10,(double)fVar12,(double)fVar11)
          ;
          return 0;
        }
        uVar3 = *(ulonglong *)(lVar2 + 0x18);
        fVar11 = (float)uVar9;
        if (uVar3 == 0) {
          fVar8 = fVar8 + *(float *)(lVar2 + 0x28);
          uVar9 = (ulonglong)(uint)(fVar11 + *(float *)(lVar2 + 0x2c));
        }
        else {
          if (((uVar3 & uVar3 - 1) != 0) || ((uVar3 & 0xe1f) == 0)) {
            snprintf(param_3,0x30,"step %d button %llx",uVar10,uVar3);
            return 0;
          }
          fVar4 = DAT_1808acda0;
          if (*(char *)(lVar2 + 0x20) != '\0') {
            fVar4 = DAT_1808ac34c;
          }
          if (uVar3 == 8) {
            fVar8 = fVar8 + fVar4;
          }
          else if (uVar3 == 0x10) {
            fVar8 = fVar8 - fVar4;
          }
          else if (uVar3 == 0x200) {
            uVar9 = (ulonglong)(uint)(fVar11 + fVar4);
          }
          else if (uVar3 == 0x400) {
            uVar9 = (ulonglong)(uint)(fVar11 - fVar4);
          }
        }
        if ((DAT_1808ac540 < (float)((uint)fVar8 & (uint)DAT_1808ade90)) ||
           (DAT_1808ac540 < (float)((uint)(float)uVar9 & (uint)DAT_1808ade90))) {
          snprintf(param_3,0x30,"step %d analog %.2f %.2f",uVar10,(double)fVar8,(double)(float)uVar9
                  );
          return 0;
        }
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      fVar11 = fVar12;
    } while ((int)uVar6 < iVar5);
  }
  return 1;
}



/* ===== 1801d8c10 FUN_1801d8c10 ===== */

void FUN_1801d8c10(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  *param_3 = *(undefined8 *)(param_1 + 0x60);
  param_3[1] = *(undefined8 *)(param_1 + 0x68);
  param_3[2] = *(undefined8 *)(param_1 + 0x70);
  *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((longlong)param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_3 + 0x24) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_3 + 5) = *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x18);
  *(undefined4 *)((longlong)param_3 + 0x2c) = *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x1c);
  *(undefined4 *)(param_3 + 6) = *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x20);
  *(undefined4 *)((longlong)param_3 + 0x34) = *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x10);
  *(undefined4 *)(param_3 + 7) = *(undefined4 *)(param_2 + 0x10);
  iVar7 = *(int *)(param_1 + 0x30);
  if (((iVar7 - 1U < 0x100) &&
      (lVar6 = *(longlong *)(param_1 + 0x38), lVar6 - 0x10000U < 0x7ffffffeffff)) &&
     (iVar10 = 0, 0 < iVar7)) {
    do {
      iVar3 = *(int *)((longlong)param_3 + 0x44);
      lVar11 = (longlong)iVar3;
      if (0x3f < iVar3) break;
      lVar4 = *(longlong *)(lVar6 + 8 + (longlong)iVar10 * 8);
      if ((lVar4 - 0x10000U < 0x7ffffffeffff) &&
         (*(longlong *)(lVar4 + 0x18) - 0x10000U < 0x7ffffffeffff)) {
        *(int *)((longlong)param_3 + 0x44) = iVar3 + 1;
        param_3[lVar11 + 9] = lVar4;
        lVar6 = *(longlong *)(lVar4 + 0x18);
        uVar1 = *(undefined4 *)(lVar6 + 0x1c);
        uVar2 = *(undefined4 *)(lVar6 + 0x20);
        *(undefined4 *)((longlong)param_3 + lVar11 * 0xc + 0x248) = *(undefined4 *)(lVar6 + 0x18);
        *(undefined4 *)((longlong)param_3 + lVar11 * 0xc + 0x24c) = uVar1;
        *(undefined4 *)((longlong)param_3 + lVar11 * 0xc + 0x250) = uVar2;
        *(undefined4 *)((longlong)param_3 + lVar11 * 4 + 0x548) =
             *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + 0x10);
        *(undefined4 *)((longlong)param_3 + lVar11 * 4 + 0x648) = *(undefined4 *)(lVar4 + 0x10);
        lVar6 = *(longlong *)(param_1 + 0x38);
        iVar7 = *(int *)(param_1 + 0x30);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar7);
  }
  *(undefined4 *)((longlong)param_3 + 0x3c) = *(undefined4 *)(param_2 + 0x20);
  if (*(int **)(param_2 + 0x28) + -0x4000 < (int *)0x7ffffffeffff) {
    iVar7 = **(int **)(param_2 + 0x28);
    if (0x20 < iVar7) {
      iVar7 = 0x20;
    }
    uVar9 = 0;
    if (0 < iVar7) {
      do {
        lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 8 + uVar9 * 8);
        if (0x7ffffffefffe < lVar6 - 0x10000U) {
          return;
        }
        param_3[uVar9 + 0xe9] = lVar6;
        uVar5 = *(undefined8 *)(lVar6 + 0x18);
        uVar8 = (int)uVar9 + 1;
        param_3[uVar9 * 5 + 0x109] = *(undefined8 *)(lVar6 + 0x10);
        (param_3 + uVar9 * 5 + 0x109)[1] = uVar5;
        uVar5 = *(undefined8 *)(lVar6 + 0x28);
        param_3[uVar9 * 5 + 0x10b] = *(undefined8 *)(lVar6 + 0x20);
        (param_3 + uVar9 * 5 + 0x10b)[1] = uVar5;
        param_3[uVar9 * 5 + 0x10d] = *(undefined8 *)(lVar6 + 0x30);
        *(uint *)(param_3 + 8) = uVar8;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < iVar7);
    }
  }
  return;
}



/* ===== 1801d8df0 FUN_1801d8df0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_1801d8df0(longlong param_1,longlong param_2,ulonglong *param_3,ulonglong param_4,
                  float param_5,float param_6,longlong param_7)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  char cVar18;
  undefined1 auStack_10b8 [32];
  ulonglong local_1098;
  undefined1 local_1090;
  undefined1 local_1088;
  undefined4 local_1084;
  undefined4 local_1080 [2];
  longlong local_1078 [514];
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_10b8;
  uVar6 = *param_3;
  *(ulonglong *)(param_1 + 0x60) = uVar6 & 0xfffffffffffff7fe;
  *(ulonglong *)(param_1 + 0x68) = ~param_4 & uVar6 & 0xfffffffffffff7fe;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0xffffffffffffffff;
  *(int *)(param_2 + 0x58) = (int)param_3[1];
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)((longlong)param_3 + 0xc);
  *(int *)(*(longlong *)(param_2 + 0x40) + 0x18) = (int)param_3[2];
  *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x1c) = *(undefined4 *)((longlong)param_3 + 0x14);
  *(int *)(*(longlong *)(param_2 + 0x40) + 0x20) = (int)param_3[3];
  if (*(float *)(param_3 + 3) != 0.0) {
    puVar1 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
    *puVar1 = *puVar1 | 4;
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0xc0;
  if ((((param_7 != 0) && (*(float *)(param_3 + 1) == *(float *)(param_7 + 0x20))) &&
      (*(float *)((longlong)param_3 + 0xc) == *(float *)(param_7 + 0x24))) &&
     (((*(float *)(param_3 + 2) == *(float *)(param_7 + 0x28) &&
       (*(float *)((longlong)param_3 + 0x14) == *(float *)(param_7 + 0x2c))) &&
      (*(float *)(param_3 + 3) == *(float *)(param_7 + 0x30))))) {
    iVar16 = *(int *)(param_7 + 0x40);
    iVar5 = *(int *)(param_7 + 0x3c);
    if (iVar16 < *(int *)(param_7 + 0x3c)) {
      iVar5 = iVar16;
    }
    if (((*(int **)(param_2 + 0x28) != (int *)0x0) && (0 < iVar5)) &&
       (iVar16 <= **(int **)(param_2 + 0x28))) {
      FUN_180540170(local_1078,0);
      iVar16 = 0;
      iVar17 = 0;
      uVar14 = 0;
      do {
        lVar9 = *(longlong *)(param_7 + 0x748 + uVar14 * 8);
        puVar3 = (undefined8 *)(param_7 + 0x848 + uVar14 * 0x28);
        uVar7 = puVar3[1];
        *(undefined8 *)(lVar9 + 0x10) = *puVar3;
        *(undefined8 *)(lVar9 + 0x18) = uVar7;
        puVar3 = (undefined8 *)(param_7 + 0x858 + uVar14 * 0x28);
        uVar7 = puVar3[1];
        *(undefined8 *)(lVar9 + 0x20) = *puVar3;
        *(undefined8 *)(lVar9 + 0x28) = uVar7;
        *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(param_7 + 0x868 + uVar14 * 0x28);
        if (((*(byte *)(lVar9 + 0x10) & 1) == 0) || ((*(uint *)(lVar9 + 0x18) & 0x803) == 0)) {
          *(longlong *)(*(longlong *)(param_2 + 0x28) + 8 + (longlong)iVar17 * 8) = lVar9;
          iVar17 = iVar17 + 1;
        }
        else {
          local_1078[iVar16] = lVar9;
          iVar16 = iVar16 + 1;
        }
        uVar15 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar15;
      } while ((int)uVar15 < iVar5);
      uVar14 = 0;
      if (0 < iVar16) {
        do {
          *(longlong *)(*(longlong *)(param_2 + 0x28) + 8 + (longlong)((int)uVar14 + iVar17) * 8) =
               local_1078[uVar14];
          uVar15 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar15;
        } while ((int)uVar15 < iVar16);
      }
      *(int *)(param_2 + 0x20) = iVar17;
      cVar18 = '\x01';
      goto LAB_1801d9020;
    }
  }
  cVar18 = '\0';
  *(undefined4 *)(param_2 + 0x20) = 0;
LAB_1801d9020:
  uVar13 = 0;
  uVar14 = 0;
  if (0 < (int)param_3[0x14]) {
    do {
      uVar13 = uVar13 | param_3[(uVar14 + 2) * 2];
      uVar15 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)param_3[0x14]);
  }
  if (cVar18 == '\0') {
    uVar14 = 1;
    iVar16 = 0x20;
    do {
      if (((uVar14 & (uVar6 & 0xfffffffffffff7fe ^ param_4) & ~uVar13 & 0xe1f) != 0) &&
         (lVar9 = FUN_180265420(param_2), lVar9 != 0)) {
        *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | 7;
        *(ulonglong *)(lVar9 + 0x18) = uVar14;
        *(bool *)(lVar9 + 0x20) = (uVar6 & uVar14 & 0xfffffffffffff7fe) != 0;
        *(undefined4 *)(lVar9 + 0x24) = 0;
      }
      uVar14 = uVar14 << 1 | (ulonglong)((longlong)uVar14 < 0);
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  fVar8 = DAT_1808ac33c;
  iVar16 = 0;
  if (0 < (int)param_3[0x14]) {
    do {
      lVar9 = (longlong)iVar16;
      uVar6 = param_3[lVar9 * 2 + 4];
      if ((((uVar6 & 0xe1f) != 0) && ((uVar6 & uVar6 - 1) == 0)) &&
         (lVar10 = FUN_180265420(param_2), lVar10 != 0)) {
        *(uint *)(lVar10 + 0x10) = *(uint *)(lVar10 + 0x10) | 7;
        *(ulonglong *)(lVar10 + 0x18) = param_3[lVar9 * 2 + 4];
        *(char *)(lVar10 + 0x20) = (char)param_3[lVar9 * 2 + 5];
        local_1080[0] = 0x3f7fbe77;
        local_1084 = 0;
        fVar4 = *(float *)((longlong)param_3 + lVar9 * 0x10 + 0x2c);
        puVar12 = &local_1084;
        if (0.0 <= fVar4) {
          puVar12 = (undefined4 *)((longlong)param_3 + lVar9 * 0x10 + 0x2c);
        }
        puVar11 = local_1080;
        if (fVar4 <= fVar8) {
          puVar11 = puVar12;
        }
        *(undefined4 *)(lVar10 + 0x24) = *puVar11;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)param_3[0x14]);
  }
  if ((cVar18 == '\0') && (lVar9 = FUN_180265420(param_2), lVar9 != 0)) {
    *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | 0x1f;
    *(float *)(lVar9 + 0x28) = *(float *)(param_3 + 1) - param_5;
    *(float *)(lVar9 + 0x2c) = *(float *)((longlong)param_3 + 0xc) - param_6;
  }
  lVar9 = *(longlong *)(param_2 + 0x28);
  if (lVar9 != 0) {
    iVar16 = *(int *)(param_2 + 0x20);
    lVar10 = (longlong)iVar16;
    if (1 < iVar16) {
      lVar2 = lVar9 + lVar10 * 8;
      if (iVar16 < 0x21) {
        FUN_1801db230(lVar9 + 8,lVar2 + 8);
      }
      else {
        FUN_1801db310(local_1078,lVar10 - lVar10 / 2);
        local_1090 = local_1088;
        local_1098 = local_1078[1];
        FUN_1801db3c0(lVar9 + 8,lVar2 + 8,lVar10,local_1078[0]);
        if (0x200 < (ulonglong)local_1078[1]) {
          FUN_1803d64e0(local_1078[0]);
        }
      }
    }
  }
  return cVar18;
}



/* ===== 1801d9250 FUN_1801d9250 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801d9250(longlong param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  char *pcVar5;
  uint uVar6;
  undefined **ppuVar7;
  char *pcVar8;
  uint uVar9;
  float fVar10;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  int local_c8;
  uint local_c0;
  uint local_b8;
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
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_f8;
  if ((((DAT_180ca0974 != 0) && (DAT_180ca097c != 0)) &&
      (iVar2 = FUN_180011200(param_1 + (ulonglong)DAT_180ca097c + (ulonglong)DAT_180ca0974),
      iVar2 == param_2 + -1)) && (iVar2 != DAT_1809ee49c)) {
    ppuVar7 = (undefined **)&DAT_1809ee5d0;
    ppuVar4 = (undefined **)&DAT_1809ee5d0;
    do {
      if ((-1 < *(int *)ppuVar4) && (*(int *)((longlong)ppuVar4 + 4) == iVar2)) goto LAB_1801d9305;
      ppuVar4 = ppuVar4 + 6;
    } while (ppuVar4 != &PTR_s_sv_stepsize_1809ee690);
    ppuVar4 = (undefined **)0x0;
LAB_1801d9305:
    do {
      if ((-1 < *(int *)ppuVar7) && (*(int *)((longlong)ppuVar7 + 4) == iVar2 + -1))
      goto LAB_1801d931c;
      ppuVar7 = ppuVar7 + 6;
    } while (ppuVar7 != &PTR_s_sv_stepsize_1809ee690);
    ppuVar7 = (undefined **)0x0;
LAB_1801d931c:
    pcVar5 = " (ground flag only)";
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    DAT_1809ee49c = iVar2;
    if ((ppuVar4 == (undefined **)0x0) || (*(int *)(ppuVar4 + 1) < 1)) {
      snprintf(&local_68,0x40,"no sim");
    }
    else if ((*(char *)((longlong)ppuVar4 + 0xc) == '\0') &&
            (*(char *)((longlong)ppuVar4 + 0xe) == '\0')) {
      local_d0 = (undefined8 *)(double)*(float *)((longlong)ppuVar4 + 0x1c);
      local_d8 = (undefined8 *)(double)*(float *)(ppuVar4 + 4);
      snprintf(&local_68,0x40,"air (z %.1f -> %.1f, vz %.1f)",(double)*(float *)(ppuVar4 + 3));
    }
    else {
      local_d8 = (undefined8 *)(double)*(float *)(ppuVar4 + 2);
      pcVar8 = " (ground flag only)";
      if (*(char *)((longlong)ppuVar4 + 0xe) != '\0') {
        pcVar8 = "";
      }
      snprintf(&local_68,0x40,"landing%s frac %.2f",pcVar8);
    }
    if ((ppuVar7 == (undefined **)0x0) || (*(int *)(ppuVar7 + 1) < 2)) {
      snprintf(&local_a8,0x40,"no sim");
    }
    else if ((*(char *)((longlong)ppuVar7 + 0xd) == '\0') &&
            (*(char *)((longlong)ppuVar7 + 0xf) == '\0')) {
      local_d0 = (undefined8 *)(double)*(float *)((longlong)ppuVar7 + 0x1c);
      local_d8 = (undefined8 *)(double)*(float *)((longlong)ppuVar7 + 0x24);
      snprintf(&local_a8,0x40,"air (z %.1f -> %.1f, vz %.1f)",(double)*(float *)(ppuVar7 + 3));
    }
    else {
      local_d8 = (undefined8 *)(double)*(float *)((longlong)ppuVar7 + 0x14);
      if (*(char *)((longlong)ppuVar7 + 0xf) != '\0') {
        pcVar5 = "";
      }
      snprintf(&local_a8,0x40,"landing%s frac %.2f",pcVar5);
    }
    if (((ppuVar4 == (undefined **)0x0) || (*(char *)((longlong)ppuVar4 + 0xc) != '\0')) ||
       (*(char *)((longlong)ppuVar4 + 0xe) != '\0')) {
      uVar6 = (uint)(DAT_180920fac != '\0');
      bVar1 = false;
      if (ppuVar4 == (undefined **)0x0) {
        uVar9 = 0;
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(ppuVar4 + 5);
        uVar9 = (uint)(*(char *)((longlong)ppuVar4 + 0x2c) != '\0');
      }
    }
    else {
      bVar1 = true;
      uVar6 = (uint)(DAT_180920fac != '\0');
      iVar3 = *(int *)(ppuVar4 + 5);
      uVar9 = (uint)(*(char *)((longlong)ppuVar4 + 0x2c) != '\0');
    }
    if (((param_1 == 0) || (DAT_180ca0974 == 0)) || (DAT_180ca0978 == 0)) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = (float)FUN_18000f3d0((ulonglong)DAT_180ca0974 + (ulonglong)DAT_180ca0978 + param_1);
    }
    pcVar5 = "landing";
    if (bVar1) {
      pcVar5 = "LANDING MISSED";
    }
    local_d0 = &local_a8;
    local_d8 = &local_68;
    local_c8 = iVar3;
    local_c0 = uVar9;
    local_b8 = uVar6;
    FUN_1801ec960("predict: %s | landing tick %d frac %.2f | sim at that tick: %s | sim a tick earlier: %s | cmd steps %d (kept in sim %d) | anti-aim %d"
                  ,pcVar5,iVar2,(double)fVar10);
  }
  return;
}



/* ===== 1801d95d0 FUN_1801d95d0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1801d95d0(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  undefined4 uVar13;
  DWORD DVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  HMODULE hModule;
  FARPROC pFVar23;
  float *pfVar24;
  undefined8 *puVar25;
  longlong lVar26;
  undefined4 *puVar27;
  ulonglong *puVar28;
  ulonglong *puVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong *plVar33;
  int iVar34;
  ulonglong uVar35;
  float fVar36;
  undefined8 uVar37;
  undefined4 uVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  int local_res10 [6];
  undefined1 auStack_2158 [32];
  double local_2138;
  double local_2130;
  undefined8 *local_2128;
  double local_2120;
  double local_2118;
  double local_2110;
  undefined4 local_2108;
  uint local_2100;
  double local_20f8;
  undefined4 local_20f0;
  undefined4 local_20e8;
  undefined4 local_20e0;
  uint local_20d8;
  undefined1 *local_20d0;
  undefined4 local_20c8;
  double local_20c0;
  double local_20b8;
  double local_20b0;
  char local_20a8 [8];
  undefined8 local_20a0;
  int local_2098 [2];
  int local_2090;
  undefined4 local_208c;
  int local_2088;
  float local_2084;
  float local_2080;
  ulonglong local_2078;
  undefined4 local_2070;
  longlong local_2068;
  longlong *local_2060;
  uint local_2058;
  float local_2054;
  int local_2050;
  int local_204c;
  longlong local_2048;
  longlong *local_2040;
  undefined8 local_2038;
  float local_2030;
  longlong local_2028;
  longlong local_2020;
  longlong local_2018;
  int local_2010;
  int local_200c;
  int local_2008;
  ulonglong local_2000;
  uint uStack_1ff8;
  undefined4 uStack_1ff4;
  undefined4 uStack_1ff0;
  undefined4 uStack_1fec;
  undefined4 uStack_1fe8;
  undefined4 uStack_1fe4;
  undefined4 uStack_1fe0;
  undefined2 uStack_1fdc;
  ushort uStack_1fda;
  undefined8 uStack_1fd8;
  undefined8 local_1fd0;
  undefined8 uStack_1fc8;
  undefined8 local_1fc0;
  undefined8 uStack_1fb8;
  undefined8 local_1fb0;
  undefined8 uStack_1fa8;
  undefined8 local_1fa0;
  undefined8 uStack_1f98;
  undefined8 local_1f90;
  undefined8 uStack_1f88;
  undefined8 local_1f80;
  undefined8 uStack_1f78;
  undefined8 local_1f70;
  undefined4 uStack_1f68;
  undefined4 uStack_1f64;
  undefined4 uStack_1f60;
  uint uStack_1f5c;
  longlong local_1f58;
  longlong local_1f50;
  longlong local_1f48;
  ulonglong local_1f40 [2];
  longlong local_1f30;
  undefined8 local_1f28;
  undefined8 uStack_1f20;
  undefined8 local_1f18;
  undefined8 uStack_1f10;
  undefined8 local_1f08;
  undefined8 uStack_1f00;
  undefined8 local_1ef8;
  undefined8 uStack_1ef0;
  undefined8 local_1ee8;
  undefined8 uStack_1ee0;
  undefined8 local_1ed8;
  undefined8 uStack_1ed0;
  undefined8 local_1ec8;
  undefined8 uStack_1ec0;
  undefined8 local_1eb8;
  undefined8 uStack_1eb0;
  undefined8 local_1ea8;
  undefined8 uStack_1ea0;
  ulonglong local_1e98;
  undefined8 uStack_1e90;
  undefined1 local_1e88 [16];
  undefined1 local_1e78 [64];
  ulonglong local_1e38;
  undefined8 uStack_1e30;
  undefined8 local_1e28;
  undefined8 uStack_1e20;
  undefined8 local_1e18;
  undefined8 uStack_1e10;
  undefined8 local_1e08;
  undefined8 uStack_1e00;
  undefined8 local_1df8;
  undefined8 uStack_1df0;
  undefined8 local_1de8;
  undefined8 uStack_1de0;
  undefined8 local_1dd8;
  undefined8 uStack_1dd0;
  undefined8 local_1dc8;
  undefined8 uStack_1dc0;
  undefined8 local_1db8;
  undefined8 uStack_1db0;
  undefined4 local_1da8;
  undefined4 uStack_1da4;
  undefined4 uStack_1da0;
  undefined4 uStack_1d9c;
  ulonglong local_1d98;
  undefined8 local_1d88;
  undefined8 local_1d80;
  undefined8 local_1d78;
  undefined8 local_1d70;
  undefined8 local_1d68;
  undefined8 uStack_1d60;
  undefined8 local_1d58;
  undefined8 local_1d50;
  undefined8 local_1d48;
  undefined1 local_1d40 [512];
  undefined8 local_1b40;
  undefined8 local_1b38;
  undefined8 uStack_1b30;
  undefined8 local_1b28;
  undefined8 uStack_1b20;
  undefined8 local_1b18;
  undefined8 uStack_1b10;
  undefined8 local_1b08;
  undefined8 uStack_1b00;
  undefined8 local_1af8;
  undefined8 uStack_1af0;
  undefined8 local_1ae8;
  undefined8 uStack_1ae0;
  undefined8 local_1ad8;
  undefined8 uStack_1ad0;
  undefined8 local_1ac8;
  undefined8 uStack_1ac0;
  undefined8 local_1ab8;
  undefined8 uStack_1ab0;
  undefined8 local_1aa8;
  undefined8 uStack_1aa0;
  undefined8 local_1a98;
  undefined8 uStack_1a90;
  undefined8 local_1a88;
  undefined8 uStack_1a80;
  undefined8 local_1a78;
  undefined8 uStack_1a70;
  undefined8 local_1a68;
  undefined8 uStack_1a60;
  undefined8 local_1a58;
  undefined8 uStack_1a50;
  undefined8 local_1a48;
  undefined8 uStack_1a40;
  undefined8 local_1a38;
  undefined8 uStack_1a30;
  undefined8 local_1a28;
  undefined8 uStack_1a20;
  undefined8 local_1a18;
  undefined8 uStack_1a10;
  undefined8 local_1a08;
  undefined8 uStack_1a00;
  undefined8 local_19f8;
  undefined8 uStack_19f0;
  undefined8 local_19e8;
  undefined8 uStack_19e0;
  undefined8 local_19d8;
  undefined8 uStack_19d0;
  undefined8 local_19c8;
  undefined8 uStack_19c0;
  undefined8 local_19b8;
  undefined8 uStack_19b0;
  undefined8 local_19a8;
  undefined8 uStack_19a0;
  undefined8 local_1998;
  undefined8 uStack_1990;
  undefined8 local_1988;
  undefined8 uStack_1980;
  undefined8 local_1978;
  undefined8 uStack_1970;
  undefined8 local_1968;
  undefined8 uStack_1960;
  undefined8 local_1958;
  undefined8 uStack_1950;
  undefined8 local_1948;
  undefined8 uStack_1940;
  undefined8 local_1938;
  undefined8 uStack_1930;
  undefined8 local_1928;
  undefined8 uStack_1920;
  undefined8 local_1918;
  undefined8 uStack_1910;
  undefined8 local_1908;
  undefined8 uStack_1900;
  undefined8 local_18f8;
  undefined8 uStack_18f0;
  undefined8 local_18e8;
  undefined8 uStack_18e0;
  undefined8 local_18d8;
  undefined8 uStack_18d0;
  undefined8 local_18c8;
  undefined8 uStack_18c0;
  undefined8 local_18b8;
  undefined8 uStack_18b0;
  undefined8 local_18a8;
  undefined8 uStack_18a0;
  undefined8 local_1898;
  undefined8 uStack_1890;
  undefined8 local_1888;
  undefined8 uStack_1880;
  undefined8 local_1878;
  undefined8 uStack_1870;
  undefined8 local_1868;
  undefined8 uStack_1860;
  undefined8 local_1858;
  undefined8 uStack_1850;
  undefined8 local_1848;
  undefined1 local_1840 [256];
  undefined1 local_1740 [256];
  undefined1 local_1640 [256];
  undefined1 local_1540 [1288];
  float local_1038 [64];
  float local_f38 [64];
  float local_e38 [64];
  longlong *local_d38;
  undefined4 uStack_d30;
  undefined4 uStack_d2c;
  undefined4 uStack_d28;
  undefined4 uStack_d24;
  longlong *plStack_d20;
  longlong local_d18;
  undefined8 uStack_d10;
  longlong local_d08;
  undefined8 uStack_d00;
  undefined1 local_cf8 [3072];
  ulonglong local_f8;
  undefined8 uStack_48;
  
  local_res10[0] = param_2;
  uStack_48 = 0x1801d95f2;
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_2158;
  local_2010 = 0;
  piVar18 = &local_2010;
  if (-1 < param_2) {
    piVar18 = local_res10;
  }
  if (0x40 < param_2) {
    piVar18 = &DAT_1805a84c8;
  }
  local_2088 = *piVar18;
  if (((param_1 == 0) || (local_2088 == 0)) || (param_4 == 0)) {
LAB_1801db21c:
    return 0;
  }
  local_2048 = param_1;
  local_1f58 = param_4;
  local_1f30 = param_3;
  cVar10 = FUN_1801d7bc0();
  if (((cVar10 == '\0') || (cVar10 = FUN_1801d7950(), cVar10 == '\0')) ||
     ((DAT_180ce9630 == 0 ||
      ((local_2020 = *(longlong *)(param_1 + 0x40), 0x7ffffffefffe < local_2020 - 0x10000U ||
       (0x7ffffffefffe < *(longlong *)(local_2020 + 0x40) - 0x10000U)))))) goto LAB_1801db21c;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_2060);
    DAT_181108a00 = local_2060;
    local_2060 = (longlong *)FUN_1803a0c50(&local_2060);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_2060 = DAT_1811089f8;
  }
  plVar8 = local_2060;
  plVar33 = DAT_181108a00;
  uVar30 = DAT_180ce9630;
  if (local_2060 == (longlong *)0x0) {
    DAT_1811089f8 = local_2060;
    return 0;
  }
  local_2040 = DAT_181108a00;
  if (DAT_181108a00 == (longlong *)0x0) {
    DAT_1811089f8 = local_2060;
    return 0;
  }
  if (DAT_180ca09f0 == 0) {
    DAT_1811089f8 = local_2060;
    return 0;
  }
  DAT_1811089f8 = local_2060;
  iVar12 = FUN_180011200((ulonglong)DAT_180ca09f0 + (longlong)local_2060);
  if (999 < iVar12 - 1U) {
    return 0;
  }
  if ((plVar8 == (longlong *)0x0) || (DAT_180ca09f8 == 0)) {
    local_2028 = 0;
  }
  else {
    local_2028 = FUN_18000f3a0((longlong)plVar8 + (ulonglong)DAT_180ca09f8);
  }
  local_20a0 = (longlong *)FUN_18000f3a0((ulonglong)DAT_180ca0970 + (longlong)plVar8);
  local_2018 = FUN_18000f3a0((ulonglong)uVar30 + (longlong)plVar8);
  uVar30 = DAT_180ca0a0c;
  uVar32 = (ulonglong)DAT_180ca0a0c;
  lVar19 = FUN_18000f3a0((longlong)plVar8 + uVar32);
  if ((((plVar8 == (longlong *)0x0) || (uVar30 == 0)) ||
      (uVar35 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 == 0)) ||
     (lVar20 = FUN_18000f3a0((longlong)plVar8 + uVar32), lVar20 == 0)) {
    lVar20 = 0;
  }
  else {
    uVar13 = FUN_180011200(lVar20 + uVar35);
    plVar21 = (longlong *)FUN_1803a0940(local_1f40,uVar13);
    lVar20 = *plVar21;
  }
  lVar26 = local_2018;
  if (local_2028 == 0) {
    return 0;
  }
  if (local_20a0 == (longlong *)0x0) {
    return 0;
  }
  if (local_2018 == 0) {
    return 0;
  }
  if (lVar19 == 0) {
    return 0;
  }
  if (lVar20 == 0) {
    return 0;
  }
  lVar22 = FUN_18000f3a0(DAT_180961a50);
  local_1f50 = lVar22;
  local_1f48 = FUN_18000f3a0(DAT_180961a58);
  if (lVar22 == 0) {
    return 0;
  }
  if (local_1f48 == 0) {
    return 0;
  }
  if ((DAT_181115068 == 0) &&
     (((hModule = GetModuleHandleA("client.dll"), hModule == (HMODULE)0x0 ||
       (pFVar23 = GetProcAddress(hModule,"CreateInterface"), pFVar23 == (FARPROC)0x0)) ||
      (DAT_181115068 = (*pFVar23)("Source2ClientPrediction001",0), DAT_181115068 == 0)))) {
    lVar22 = 0;
  }
  else {
    lVar22 = FUN_18000f3a0(DAT_181115068 + 0x38);
  }
  lVar9 = local_1f50;
  uStack_d28 = (undefined4)local_2028;
  uStack_d24 = (undefined4)((ulonglong)local_2028 >> 0x20);
  plStack_d20 = local_20a0;
  local_d38 = plVar33;
  uStack_d30 = SUB84(plVar8,0);
  uStack_d2c = (undefined4)((ulonglong)plVar8 >> 0x20);
  local_d08 = lVar26;
  DAT_180ce9638 = 0;
  local_2068 = lVar22;
  local_d18 = lVar19;
  uStack_d10 = lVar20;
  FUN_1801d7ab0((ulonglong)DAT_180961954 + local_1f50,4);
  FUN_1801d7ab0((ulonglong)DAT_180961950 + lVar9,4);
  FUN_1801d7ab0((ulonglong)DAT_180961958 + lVar9,4);
  FUN_1801d7ab0((ulonglong)DAT_18096195c + lVar9,4);
  FUN_1801d7ab0((ulonglong)DAT_180961960 + lVar9,4);
  FUN_1801d7ab0(DAT_180961a60,4);
  FUN_1801d7ab0(DAT_180961a68,8);
  FUN_1801d7ab0(DAT_180961a70,8);
  if (lVar22 != 0) {
    FUN_1801d7ab0(lVar22 + 0x8c,1);
  }
  uVar32 = DAT_180ce2a28;
  uVar35 = 0;
  if (DAT_180ce2a28 != 0) {
    uVar31 = DAT_180ce9638;
    do {
      lVar20 = *(longlong *)(local_e38 + (ulonglong)(byte)(&DAT_180ce2120)[uVar35 * 0xc] * 2 + 0x40)
               + (ulonglong)(uint)(&DAT_180ce2124)[uVar35 * 3];
      if (lVar20 - 0x10000U < 0x7ffffffeffff) {
        uVar30 = (&DAT_180ce2128)[uVar35 * 3];
        if ((uVar30 - 1 < 0x80) && (uVar31 < 0xc0)) {
          (&DAT_180ce2a38)[uVar31 * 0x12] = (ulonglong)uVar30;
          (&DAT_180ce2a30)[uVar31 * 0x12] = lVar20;
          FUN_180540530(&DAT_180ce2a40 + uVar31 * 0x90,lVar20,uVar30);
          uVar31 = uVar31 + 1;
        }
      }
      uVar35 = uVar35 + 1;
    } while (uVar35 < uVar32);
    plVar33 = local_2040;
    DAT_180ce9638 = uVar31;
  }
  plVar21 = local_20a0;
  FUN_1801d7ab0(local_20a0 + 0x33,8);
  uVar35 = 0xe8;
  uVar32 = DAT_180ce9638;
  do {
    uVar31 = 0x80;
    if (0x370 - uVar35 < 0x80) {
      uVar31 = 0x370 - uVar35;
    }
    if ((((uVar35 + lVar19) - 0x10000 < 0x7ffffffeffff) && (uVar31 != 0)) && (uVar32 < 0xc0)) {
      (&DAT_180ce2a30)[uVar32 * 0x12] = uVar35 + lVar19;
      (&DAT_180ce2a38)[uVar32 * 0x12] = uVar31;
      FUN_180540530(&DAT_180ce2a40 + uVar32 * 0x90);
      uVar32 = uVar32 + 1;
    }
    lVar20 = local_1f58;
    uVar35 = uVar35 + 0x80;
  } while (uVar35 < 0x370);
  DAT_180ce9638 = uVar32;
  if (local_2068 != 0) {
    local_20a8[0] = '\0';
    FUN_1800233d0(local_2068 + 0x8c,local_20a8);
  }
  local_1d88 = 0;
  local_1d80 = 0;
  local_1d78 = 0;
  local_1d70 = 0;
  local_1d68 = 0;
  uStack_1d60 = 0;
  local_1d58 = 0;
  local_1d50 = 0;
  local_1d48 = 0;
  FUN_180540170(local_1d40,0,0x200);
  FUN_180540170(&local_1b40,0,0x300);
  local_1b40 = 0;
  local_1b38 = 0;
  uStack_1b30 = 0;
  local_1b28 = 0;
  uStack_1b20 = 0;
  local_1b18 = 0;
  uStack_1b10 = 0;
  local_1b08 = 0;
  uStack_1b00 = 0;
  local_1af8 = 0;
  uStack_1af0 = 0;
  local_1ae8 = 0;
  uStack_1ae0 = 0;
  local_1ad8 = 0;
  uStack_1ad0 = 0;
  local_1ac8 = 0;
  uStack_1ac0 = 0;
  local_1ab8 = 0;
  uStack_1ab0 = 0;
  local_1aa8 = 0;
  uStack_1aa0 = 0;
  local_1a98 = 0;
  uStack_1a90 = 0;
  local_1a88 = 0;
  uStack_1a80 = 0;
  local_1a78 = 0;
  uStack_1a70 = 0;
  local_1a68 = 0;
  uStack_1a60 = 0;
  local_1a58 = 0;
  uStack_1a50 = 0;
  local_1a48 = 0;
  uStack_1a40 = 0;
  local_1a38 = 0;
  uStack_1a30 = 0;
  local_1a28 = 0;
  uStack_1a20 = 0;
  local_1a18 = 0;
  uStack_1a10 = 0;
  local_1a08 = 0;
  uStack_1a00 = 0;
  local_19f8 = 0;
  uStack_19f0 = 0;
  local_19e8 = 0;
  uStack_19e0 = 0;
  local_19d8 = 0;
  uStack_19d0 = 0;
  local_19c8 = 0;
  uStack_19c0 = 0;
  local_19b8 = 0;
  uStack_19b0 = 0;
  local_19a8 = 0;
  uStack_19a0 = 0;
  local_1998 = 0;
  uStack_1990 = 0;
  local_1988 = 0;
  uStack_1980 = 0;
  local_1978 = 0;
  uStack_1970 = 0;
  local_1968 = 0;
  uStack_1960 = 0;
  local_1958 = 0;
  uStack_1950 = 0;
  local_1948 = 0;
  uStack_1940 = 0;
  local_1938 = 0;
  uStack_1930 = 0;
  local_1928 = 0;
  uStack_1920 = 0;
  local_1918 = 0;
  uStack_1910 = 0;
  local_1908 = 0;
  uStack_1900 = 0;
  local_18f8 = 0;
  uStack_18f0 = 0;
  local_18e8 = 0;
  uStack_18e0 = 0;
  local_18d8 = 0;
  uStack_18d0 = 0;
  local_18c8 = 0;
  uStack_18c0 = 0;
  local_18b8 = 0;
  uStack_18b0 = 0;
  local_18a8 = 0;
  uStack_18a0 = 0;
  local_1898 = 0;
  uStack_1890 = 0;
  local_1888 = 0;
  uStack_1880 = 0;
  local_1878 = 0;
  uStack_1870 = 0;
  local_1868 = 0;
  uStack_1860 = 0;
  local_1858 = 0;
  uStack_1850 = 0;
  local_1848 = 0;
  FUN_180540170(local_1840,0,0x100);
  FUN_180540170(local_1740,0,0x100);
  FUN_180540170(local_1640,0,0x100);
  FUN_180540170(local_1540,0,0x500);
  FUN_180540530(&DAT_181114320,&local_1d88,0xd48);
  lVar19 = local_2048;
  FUN_1801d8c10(local_2048,local_2020,&DAT_181114320);
  if ((DAT_181114310 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_181115074 = FUN_18038eaf0("CCSPlayer_MovementServices","m_nLastJumpTick");
    DAT_181114310 = '\x01';
  }
  local_2058 = DAT_181115074;
  local_204c = FUN_180011200((ulonglong)DAT_180ca09b8 + (longlong)plVar33);
  local_204c = local_204c + 1;
  FUN_1801d9250(plVar21,local_204c);
  uVar30 = DAT_180ce2a20;
  local_2008 = *(int *)(lVar19 + 8);
  local_20a8[0] = '\0';
  local_2050 = -1;
  local_200c = (&DAT_1809ee5d0)[(longlong)(int)DAT_180ce2a20 * 0xc];
  FUN_180540170(&local_1d88,0,0x100);
  FUN_180540170(local_e38,0,0x100);
  FUN_180540170(local_f38,0,0x100);
  FUN_180540170(local_1038,0,0x100);
  local_d38 = (longlong *)0x0;
  uStack_d30 = 0;
  uStack_d2c = 0;
  uStack_d28 = 0;
  uStack_d24 = 0;
  plStack_d20 = (longlong *)0x0;
  local_d18 = 0;
  uStack_d10 = 0;
  local_d08 = 0;
  uStack_d00 = 0;
  FUN_180540170(local_cf8,0,0xc00);
  local_2040 = (longlong *)0x0;
  if (DAT_180ca0990 != 0) {
    local_2040 = (longlong *)FUN_18000f3a0((ulonglong)DAT_180ca0990 + 8 + (longlong)plVar21);
  }
  if (DAT_180ca0994 == 0) {
    local_208c = 0;
  }
  else {
    local_208c = FUN_18000f3d0((ulonglong)DAT_180ca0994 + (longlong)plVar21);
  }
  if (DAT_180ca0998 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = FUN_18000f3d0((longlong)plVar21 + (ulonglong)DAT_180ca0998);
  }
  uVar17 = DAT_180ca0a1c;
  lVar26 = *(longlong *)(lVar19 + 0x40);
  local_2000 = *(ulonglong *)(lVar19 + 0x60);
  uStack_1fe8 = 0;
  uStack_1fe0 = 0;
  uStack_1fdc = 0;
  uStack_1fda = 0;
  uStack_1fd8 = 0;
  local_1fd0 = 0;
  uStack_1fc8 = 0;
  local_1fc0 = 0;
  uStack_1fb8 = 0;
  local_1fb0 = 0;
  uStack_1fa8 = 0;
  local_1fa0 = 0;
  uStack_1f98 = 0;
  local_1f90 = 0;
  uStack_1f88 = 0;
  local_1f80 = 0;
  uStack_1f78 = 0;
  local_1f70 = 0;
  uStack_1f68 = 0;
  uStack_1f64 = 0;
  uStack_1f60 = 0;
  uStack_1ff8 = 0;
  uStack_1ff4 = 0;
  uStack_1ff0 = 0;
  uStack_1fec = 0;
  if ((lVar26 - 0x10000U < 0x7ffffffeffff) &&
     (lVar19 = *(longlong *)(lVar26 + 0x40), lVar19 - 0x10000U < 0x7ffffffeffff)) {
    uStack_1ff8 = *(uint *)(lVar26 + 0x58);
    uStack_1ff4 = *(undefined4 *)(lVar26 + 0x5c);
    uStack_1ff0 = *(undefined4 *)(lVar19 + 0x18);
    uStack_1fe8 = *(undefined4 *)(lVar19 + 0x20);
    uStack_1fec = *(undefined4 *)(lVar19 + 0x1c);
  }
  uStack_1e30 = CONCAT44(uStack_1ff4,uStack_1ff8);
  local_1e38 = local_2000 & 0xfffffffffffffffd;
  local_1d98 = (ulonglong)uStack_1f5c << 0x20;
  local_1f28 = CONCAT44(uStack_1fec,uStack_1ff0);
  uStack_1f20 = CONCAT44(uStack_1fe4,uStack_1fe8);
  local_1f18 = 0;
  uStack_1f10 = 0;
  local_1f08 = 0;
  uStack_1f00 = 0;
  local_1ef8 = 0;
  uStack_1ef0 = 0;
  local_1ee8 = 0;
  uStack_1ee0 = 0;
  local_1ea8 = 0;
  uStack_1ea0 = 0;
  local_1ed8 = 0;
  uStack_1ed0 = 0;
  local_1ec8 = 0;
  uStack_1ec0 = 0;
  local_1eb8 = 0;
  uStack_1eb0 = 0;
  if ((plVar8 == (longlong *)0x0) || (DAT_180ca0a1c == 0)) {
    local_2084 = 0.0;
  }
  else {
    lVar19 = FUN_1800111b0(&local_2078,(longlong)plVar8 + (ulonglong)DAT_180ca0a1c);
    local_2084 = *(float *)(lVar19 + 8);
  }
  uVar7 = DAT_180ca09f8;
  uVar6 = DAT_180ca0950;
  uVar32 = (ulonglong)DAT_180ca0950;
  uVar35 = (ulonglong)DAT_180ca09f8;
  local_2054 = local_2084;
  if ((((plVar8 == (longlong *)0x0) || (DAT_180ca09f8 == 0)) ||
      (lVar19 = FUN_18000f3a0((longlong)plVar8 + uVar35), lVar19 == 0)) || (uVar6 == 0)) {
    local_2080 = 0.0;
  }
  else {
    lVar19 = FUN_1800111b0(&local_2078,lVar19 + uVar32);
    local_2080 = *(float *)(lVar19 + 8);
  }
  if ((plVar8 == (longlong *)0x0) || (uVar7 == 0)) {
    local_2068 = 0;
  }
  else {
    local_2068 = FUN_18000f3a0((longlong)plVar8 + uVar35);
  }
  if (((plVar8 == (longlong *)0x0) || (uVar7 == 0)) ||
     ((lVar19 = FUN_18000f3a0((longlong)plVar8 + uVar35), lVar19 == 0 || (uVar6 == 0)))) {
    fVar43 = 0.0;
    fVar44 = 0.0;
    fVar45 = 0.0;
  }
  else {
    pfVar24 = (float *)FUN_1800111b0(&local_2078,lVar19 + uVar32);
    fVar43 = *pfVar24;
    fVar44 = pfVar24[1];
    fVar45 = pfVar24[2];
  }
  if ((local_2068 == 0) || (DAT_180ca09d4 == 0)) {
    FUN_1803a0780(&local_2060);
  }
  else {
    puVar25 = (undefined8 *)FUN_1800111b0(&local_2078);
    local_2038 = *puVar25;
    local_2030 = *(float *)(puVar25 + 1);
  }
  if ((plVar8 == (longlong *)0x0) || (uVar17 == 0)) {
    fVar46 = 0.0;
    fVar47 = 0.0;
    fVar39 = 0.0;
  }
  else {
    pfVar24 = (float *)FUN_1800111b0(&local_2078);
    fVar46 = *pfVar24;
    fVar47 = pfVar24[1];
    fVar39 = pfVar24[2];
  }
  if (DAT_180ca09bc == 0) {
    if ((plVar8 == (longlong *)0x0) || (uVar17 == 0)) {
      fVar48 = 0.0;
      fVar49 = 0.0;
      fVar50 = 0.0;
      goto LAB_1801da2a0;
    }
    puVar29 = local_1f40;
  }
  else {
    puVar29 = &local_2078;
  }
  pfVar24 = (float *)FUN_1800111b0(puVar29);
  fVar48 = *pfVar24;
  fVar49 = pfVar24[1];
  fVar50 = pfVar24[2];
LAB_1801da2a0:
  plVar21 = local_20a0;
  iVar12 = 0;
  local_2090 = 0;
  iVar16 = local_2088;
  if (0 < local_2088) {
    uVar32 = local_1d98;
    uVar35 = local_1e38;
    uVar37 = uStack_1e30;
    do {
      iVar16 = local_2088;
      iVar12 = local_2090;
      local_1e28 = local_1f28;
      uStack_1e20 = uStack_1f20;
      local_1d98 = uVar32 & 0xffffffff00000000;
      local_1e08 = local_1f08;
      uStack_1e00 = uStack_1f00;
      local_1e18 = local_1f18;
      uStack_1e10 = uStack_1f10;
      local_1de8 = local_1ee8;
      uStack_1de0 = uStack_1ee0;
      local_1df8 = local_1ef8;
      uStack_1df0 = uStack_1ef0;
      local_1dc8 = local_1ed8;
      uStack_1dc0 = uStack_1ed0;
      local_1dd8 = local_1ea8;
      uStack_1dd0 = uStack_1ea0;
      local_1da8 = (undefined4)local_1eb8;
      uStack_1da4 = local_1eb8._4_4_;
      uStack_1da0 = (undefined4)uStack_1eb0;
      uStack_1d9c = uStack_1eb0._4_4_;
      local_1db8 = local_1ec8;
      uStack_1db0 = uStack_1ec0;
      local_2098[0] = local_2090;
      local_1e38 = uVar35;
      uStack_1e30 = uVar37;
      if (*(longlong **)(local_1f30 + 0x38) == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4cb0();
      }
      cVar10 = (**(code **)(**(longlong **)(local_1f30 + 0x38) + 0x10))();
      lVar19 = local_2048;
      if (cVar10 == '\0') break;
      local_1e98 = local_1e38;
      uStack_1e90 = uStack_1e30;
      local_1f40[0] = local_1d98;
      local_2098[0] = local_204c + iVar12;
      local_1f28 = local_1e28;
      uStack_1f20 = uStack_1e20;
      local_2128 = (undefined8 *)0x0;
      local_1f18 = local_1e18;
      uStack_1f10 = uStack_1e10;
      if (iVar12 == 0) {
        local_2128 = &DAT_181114320;
      }
      local_2130 = (double)CONCAT44(local_2130._4_4_,uVar13);
      local_1f08 = local_1e08;
      uStack_1f00 = uStack_1e00;
      local_1ef8 = local_1df8;
      uStack_1ef0 = uStack_1df0;
      local_1ee8 = local_1de8;
      uStack_1ee0 = uStack_1de0;
      local_1ea8 = local_1dd8;
      uStack_1ea0 = uStack_1dd0;
      local_1ed8 = local_1dc8;
      uStack_1ed0 = uStack_1dc0;
      local_1ec8 = local_1db8;
      uStack_1ec0 = uStack_1db0;
      local_1eb8 = CONCAT44(uStack_1da4,local_1da8);
      uStack_1eb0 = CONCAT44(uStack_1d9c,uStack_1da0);
      local_2138 = (double)CONCAT44(local_2138._4_4_,local_208c);
      cVar10 = FUN_1801d8df0(local_2048,local_2020,&local_1e38,local_2040);
      if (iVar12 == 0) {
        local_2050 = (int)local_1d98;
        local_20a8[0] = cVar10;
      }
      lVar22 = (longlong)iVar12;
      uVar11 = FUN_1801d89b0(local_2020);
      lVar26 = local_1f50;
      iVar12 = 0;
      *(undefined1 *)((longlong)local_e38 + lVar22 + 0x100) = uVar11;
      if (0 < DAT_181114364) {
        do {
          lVar20 = (longlong)iVar12;
          iVar12 = iVar12 + 1;
          lVar20 = (&DAT_181114368)[lVar20];
          *(undefined4 *)(*(longlong *)(lVar20 + 0x18) + 0x18) = (undefined4)local_1e28;
          *(undefined4 *)(*(longlong *)(lVar20 + 0x18) + 0x1c) = local_1e28._4_4_;
          *(undefined4 *)(*(longlong *)(lVar20 + 0x18) + 0x20) = (undefined4)uStack_1e20;
          puVar1 = (uint *)(*(longlong *)(lVar20 + 0x18) + 0x10);
          *puVar1 = *puVar1 | 3;
          *(uint *)(lVar20 + 0x10) = *(uint *)(lVar20 + 0x10) | 1;
        } while (iVar12 < DAT_181114364);
        lVar20 = local_1f58;
      }
      local_2040 = (longlong *)(local_1e38 & 0xfffffffffffff7fe);
      uVar13 = uStack_1e30._4_4_;
      local_208c = (undefined4)uStack_1e30;
      local_20a0._0_4_ = (float)local_2098[0] * DAT_1808ac00c;
      FUN_180013280((ulonglong)DAT_180961950 + local_1f50,&local_20a0);
      FUN_180013280((ulonglong)DAT_180961954 + lVar26,&DAT_1805a4548);
      FUN_180013280((ulonglong)DAT_180961958 + lVar26,local_2098);
      local_20a0 = (longlong *)((ulonglong)local_20a0._4_4_ << 0x20);
      FUN_180013280((ulonglong)DAT_18096195c + lVar26,&local_20a0);
      DVar14 = GetCurrentThreadId();
      local_20a0 = (longlong *)CONCAT44(local_20a0._4_4_,DVar14);
      FUN_180013280((ulonglong)DAT_180961960 + lVar26,&local_20a0);
      local_20a0 = plVar8;
      FUN_1800239d0(DAT_180961a68,&local_20a0);
      local_20a0 = plVar8;
      FUN_1800239d0(DAT_180961a70,&local_20a0);
      FUN_180013280((ulonglong)DAT_180ca09b8 + (longlong)plVar33,local_2098);
      local_2018 = 0;
      (*DAT_180961a80)(&local_2018,plVar8);
      (*DAT_180961a78)(local_1f48,1);
      (**(code **)(*plVar21 + 0x178))(plVar21,lVar19);
      lVar26 = (**(code **)(*plVar21 + 0x130))(plVar21);
      cVar10 = (**(code **)(*plVar21 + 0x188))(plVar21);
      if (lVar26 != 0) {
        (*DAT_180961a88)(lVar26,lVar19,local_2098[0],cVar10 != '\0');
        (**(code **)(*plVar21 + 0x138))(plVar21,lVar19,lVar26);
        local_20a0 = (longlong *)0x0;
        FUN_1800239d0(plVar21 + 0x33,&local_20a0);
        if (lVar26 - 0xff38U < 0x7ffffffeffff) {
          iVar12 = FUN_180011200(lVar26 + 0x60);
          *(int *)(local_1d40 + lVar22 * 4 + -0x48) = iVar12;
          lVar19 = FUN_18000f3a0(lVar26 + 0x68);
          if ((iVar12 < 1) || (0x7ffffffefffe < lVar19 - 0x10000U)) {
            fVar36 = DAT_1808acda0;
          }
          else {
            fVar36 = (float)FUN_18000f3d0(lVar19);
          }
          lVar19 = local_2048;
          local_e38[lVar22] = fVar36;
          (*DAT_180961a90)(plVar21,local_2048,lVar26,1);
          fVar36 = (float)FUN_18000f3d0(lVar26 + 0xd0);
          local_f38[lVar22] = fVar36;
          fVar36 = (float)FUN_18000f3d0(lVar26 + 0x40);
          local_1038[lVar22] = fVar36;
        }
        else {
          (*DAT_180961a90)(plVar21,lVar19,lVar26,1);
        }
        FUN_1801d77b0(lVar26,plVar8,local_2028);
        (*DAT_180961a98)(plVar21,lVar19,lVar26,1);
        local_20a0 = (longlong *)0x0;
        FUN_1800239d0(DAT_180961a68);
      }
      (*DAT_180961a78)(local_1f48);
      (*DAT_180961aa0)(&local_2018);
      (**(code **)(*plVar21 + 0x180))(plVar21);
      if (lVar26 == 0) {
        iVar12 = local_2090;
        iVar16 = local_2088;
        break;
      }
      uVar32 = (ulonglong)DAT_180ca0a18;
      uStack_1fe4 = 0;
      uStack_1fe0 = 0;
      lVar22 = lVar22 * 0x60;
      puVar29 = (ulonglong *)(lVar22 + lVar20);
      uStack_1ff4 = 0;
      uStack_1ff0 = 0;
      uStack_1fec = 0;
      uStack_1fe8 = 0;
      local_2000 = (local_2000 >> 8 & 0xffffff) << 8;
      uStack_1fd8 = 0;
      local_1fd0 = 0;
      uStack_1ff8 = uStack_1ff8 & 0xffffff00;
      uStack_1fb8 = 0;
      local_1fb0 = 0;
      uStack_1fdc = 0;
      uStack_1fa8 = 0;
      uStack_1fc8 = 0;
      local_1fc0 = 0;
      *puVar29 = local_2000;
      puVar29[1] = (ulonglong)uStack_1ff8;
      puVar29[2] = 0;
      puVar29[3] = 0;
      puVar29[4] = (ulonglong)uStack_1fda << 0x30;
      puVar29[5] = 0;
      puVar29[6] = 0;
      puVar29[7] = 0;
      puVar29[8] = 0;
      puVar29[9] = 0;
      *(undefined4 *)(puVar29 + 10) = 0;
      *(undefined4 *)((longlong)puVar29 + 0x54) = 0;
      *(undefined4 *)(puVar29 + 0xb) = 0;
      *(undefined4 *)((longlong)puVar29 + 0x5c) = 0;
      *(undefined1 *)puVar29 = 1;
      uVar15 = FUN_180011200(uVar32 + (longlong)plVar8);
      *(undefined4 *)((longlong)puVar29 + 4) = uVar15;
      if (DAT_180ca0a44 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_180011220((longlong)plVar8 + (ulonglong)DAT_180ca0a44);
      }
      *(undefined1 *)(puVar29 + 1) = uVar11;
      if ((((plVar8 == (longlong *)0x0) || (DAT_180ca09f8 == 0)) ||
          (lVar19 = FUN_18000f3a0((longlong)plVar8 + (ulonglong)DAT_180ca09f8), lVar19 == 0)) ||
         (DAT_180ca0950 == 0)) {
        uVar15 = 0;
        uVar38 = 0;
        uVar40 = 0;
      }
      else {
        puVar27 = (undefined4 *)FUN_1800111b0(local_1e88,lVar19 + (ulonglong)DAT_180ca0950);
        uVar15 = *puVar27;
        uVar38 = puVar27[1];
        uVar40 = puVar27[2];
      }
      *(undefined4 *)(puVar29 + 6) = uVar15;
      *(undefined4 *)((longlong)puVar29 + 0x34) = uVar38;
      *(undefined4 *)(puVar29 + 7) = uVar40;
      if ((local_2068 == 0) || (DAT_180ca09d4 == 0)) {
        FUN_1803a0780(&local_2060);
      }
      else {
        puVar28 = (ulonglong *)FUN_1800111b0(local_1e78);
        local_2078 = *puVar28;
        local_2070 = (undefined4)puVar28[1];
      }
      uVar30 = DAT_180ca0a1c;
      *(ulonglong *)(lVar22 + 0x3c + lVar20) = local_2078;
      *(undefined4 *)(lVar22 + 0x44 + lVar20) = local_2070;
      if ((plVar8 == (longlong *)0x0) || (uVar30 == 0)) {
        uVar15 = 0;
        uVar38 = 0;
        uVar40 = 0;
      }
      else {
        puVar27 = (undefined4 *)FUN_1800111b0();
        uVar15 = *puVar27;
        uVar38 = puVar27[1];
        uVar40 = puVar27[2];
      }
      iVar12 = DAT_180ca09bc;
      *(undefined4 *)(puVar29 + 9) = uVar15;
      *(undefined4 *)((longlong)puVar29 + 0x4c) = uVar38;
      *(undefined4 *)(puVar29 + 10) = uVar40;
      if ((iVar12 == 0) && ((plVar8 == (longlong *)0x0 || (uVar30 == 0)))) {
        fVar36 = 0.0;
        fVar41 = 0.0;
        fVar42 = 0.0;
      }
      else {
        pfVar24 = (float *)FUN_1800111b0();
        fVar36 = *pfVar24;
        fVar41 = pfVar24[1];
        fVar42 = pfVar24[2];
      }
      *(float *)((longlong)puVar29 + 0x54) = fVar36;
      *(float *)(puVar29 + 0xb) = fVar41;
      *(float *)((longlong)puVar29 + 0x5c) = fVar42;
      if ((((*(float *)(puVar29 + 6) == fVar43) && (*(float *)((longlong)puVar29 + 0x34) == fVar44))
          && (*(float *)(puVar29 + 7) == fVar45)) &&
         (((*(float *)((longlong)puVar29 + 0x3c) != (float)local_2038 ||
           (*(float *)(puVar29 + 8) != local_2038._4_4_)) ||
          (*(float *)((longlong)puVar29 + 0x44) != local_2030)))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      lVar19 = 0x3c;
      if (!bVar5) {
        lVar19 = 0x30;
      }
      *(undefined8 *)(lVar22 + 0xc + lVar20) = *(undefined8 *)((longlong)puVar29 + lVar19);
      *(undefined4 *)(lVar22 + 0x14 + lVar20) = *(undefined4 *)((longlong)puVar29 + lVar19 + 8);
      if (((*(float *)(puVar29 + 9) == fVar46) && (*(float *)((longlong)puVar29 + 0x4c) == fVar47))
         && ((*(float *)(puVar29 + 10) == fVar39 &&
             (((fVar36 != fVar48 || (fVar41 != fVar49)) || (fVar42 != fVar50)))))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      fVar43 = *(float *)(puVar29 + 6);
      fVar44 = *(float *)((longlong)puVar29 + 0x34);
      fVar45 = *(float *)(puVar29 + 7);
      fVar46 = *(float *)(puVar29 + 9);
      lVar19 = 0x54;
      if (!bVar5) {
        lVar19 = 0x48;
      }
      fVar47 = *(float *)((longlong)puVar29 + 0x4c);
      fVar39 = *(float *)(puVar29 + 10);
      *(undefined8 *)(lVar22 + 0x18 + lVar20) = *(undefined8 *)((longlong)puVar29 + lVar19);
      local_2038 = *(undefined8 *)(lVar22 + 0x3c + lVar20);
      *(undefined4 *)(lVar22 + 0x20 + lVar20) = *(undefined4 *)((longlong)puVar29 + lVar19 + 8);
      local_2030 = *(float *)(lVar22 + 0x44 + lVar20);
      if (DAT_180ca09a8 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = FUN_18000f3d0((ulonglong)DAT_180ca09a8 + (longlong)plVar21);
      }
      *(undefined4 *)((longlong)puVar29 + 0x2c) = uVar15;
      *(bool *)((longlong)puVar29 + 0x24) = DAT_1808acb34 < *(float *)(puVar29 + 4) - local_2054;
      if ((local_2058 != 0) &&
         (iVar12 = FUN_180011200((ulonglong)local_2058 + (longlong)plVar21), iVar12 == local_2098[0]
         )) {
        *(undefined1 *)((longlong)puVar29 + 0x24) = 1;
      }
      iVar12 = local_2098[0];
      local_2054 = *(float *)(puVar29 + 4);
      if ((DAT_180ca0974 != 0) && (DAT_180ca097c != 0)) {
        uVar32 = (ulonglong)DAT_180ca0974;
        iVar16 = FUN_180011200((ulonglong)DAT_180ca0974 + (ulonglong)DAT_180ca097c +
                               (longlong)plVar21);
        *(bool *)((longlong)puVar29 + 0x25) = iVar16 == iVar12;
        if (DAT_180ca0978 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = FUN_18000f3d0(uVar32 + DAT_180ca0978 + (longlong)plVar21);
        }
        *(undefined4 *)(puVar29 + 5) = uVar15;
      }
      local_2090 = local_2090 + 1;
      uVar32 = local_1f40[0];
      fVar48 = fVar36;
      fVar49 = fVar41;
      fVar50 = fVar42;
      iVar12 = local_2090;
      iVar16 = local_2088;
      uVar35 = local_1e98;
      uVar37 = uStack_1e90;
    } while (local_2090 < local_2088);
    uVar30 = DAT_180ce2a20;
  }
  fVar44 = local_2080;
  fVar43 = local_2084;
  if (((1 < iVar16) && (0 < iVar12)) && (local_2050 == 0)) {
    DAT_180ce2a24 = DAT_180ce2a24 + 1;
    uVar17 = DAT_180ce2a24 & 0x8000000f;
    if ((int)uVar17 < 0) {
      uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
    }
    if (uVar17 == 0) {
      iVar16 = 0;
      dVar3 = (double)local_2084;
      lVar19 = 0;
      local_20a0 = (longlong *)CONCAT44(local_20a0._4_4_,(uint)(local_20a8[0] != '\0'));
      dVar4 = (double)local_2080;
      do {
        fVar45 = local_1038[lVar19];
        fVar46 = local_f38[lVar19];
        fVar47 = local_e38[lVar19];
        lVar26 = lVar19 * 0x60;
        cVar10 = *(char *)((longlong)local_e38 + lVar19 + 0x100);
        fVar39 = *(float *)(lVar20 + 0x18 + lVar26);
        fVar48 = *(float *)(lVar20 + 0x1c + lVar26);
        fVar49 = *(float *)(lVar20 + 0x28 + lVar26);
        cVar2 = *(char *)(lVar20 + 0x25 + lVar26);
        fVar39 = fVar48 * fVar48 + fVar39 * fVar39;
        if (fVar39 < 0.0) {
          fVar39 = (float)FUN_18051af10();
        }
        else {
          fVar39 = SQRT(fVar39);
        }
        iVar12 = local_2090;
        local_20c8 = *(undefined4 *)(local_1d40 + lVar19 * 4 + -0x48);
        local_20e0 = 0;
        local_20e8 = (float)local_20a0;
        local_20f0 = DAT_18111435c;
        local_2108 = *(undefined4 *)(lVar20 + 4 + lVar26);
        local_2128 = (undefined8 *)(double)*(float *)(lVar20 + 0x44 + lVar26);
        local_2110 = (double)fVar39;
        local_2118 = (double)*(float *)(lVar20 + 0x5c + lVar26);
        local_2120 = (double)*(float *)(lVar20 + 0x50 + lVar26);
        local_2130 = (double)*(float *)(lVar20 + 0x38 + lVar26);
        local_2138 = dVar3;
        local_2100 = (uint)(cVar2 != '\0');
        local_20f8 = (double)fVar49;
        local_20d8 = (uint)(cVar10 != '\0');
        local_20d0 = local_cf8 + lVar19 * 0x30;
        local_20c0 = (double)fVar47;
        local_20b8 = (double)fVar46;
        local_20b0 = (double)fVar45;
        FUN_1801ec960("sim: tick %d/%d | start z %.2f vz %.1f | end abs z %.2f node z %.2f | end vz abs %.1f net %.1f | speed %.1f | flags %x | landed %d frac %.2f | steps %d kept %d events %d | pb steps valid %d %s | movedata steps %d first when %.3f | md origin z %.2f vel z %.1f"
                      ,iVar16,local_2090,dVar4);
        iVar16 = iVar16 + 1;
        lVar19 = lVar19 + 1;
      } while (iVar16 < iVar12);
      uVar30 = DAT_180ce2a20;
    }
    if ((local_200c == local_2008) && (uVar30 = uVar30 + 3 & 0x80000003, (int)uVar30 < 0)) {
      uVar30 = (uVar30 - 1 | 0xfffffffc) + 1;
    }
    DAT_180ce2a20 = uVar30 + 1 & 0x80000003;
    if ((int)DAT_180ce2a20 < 0) {
      DAT_180ce2a20 = (DAT_180ce2a20 - 1 | 0xfffffffc) + 1;
    }
    lVar19 = (longlong)(int)DAT_180ce2a20;
    uStack_d28 = 0;
    uStack_d24 = 0;
    uStack_d2c = 0;
    lVar26 = lVar19 * 0x30;
    plStack_d20 = (longlong *)0x0;
    local_d18 = 0;
    *(undefined8 *)(&DAT_1809ee5d4 + lVar26) = 0;
    *(undefined8 *)(&DAT_1809ee5dc + lVar26) = 0;
    *(undefined4 *)(&DAT_1809ee5e4 + lVar26) = 0;
    *(undefined8 *)(&DAT_1809ee5f0 + lVar26) = 0;
    *(undefined2 *)(&DAT_1809ee5fd + lVar26) = uStack_d10._5_2_;
    (&DAT_1809ee5ff)[lVar26] = uStack_d10._7_1_;
    *(undefined4 *)(&DAT_1809ee5e8 + lVar26) = 0;
    *(undefined4 *)(&DAT_1809ee5ec + lVar26) = 0;
    (&DAT_1809ee5d0)[lVar19 * 0xc] = 0xffffffff;
    *(undefined4 *)(&DAT_1809ee5f8 + lVar26) = 0;
    (&DAT_1809ee5fc)[lVar26] = 0;
    (&DAT_1809ee5d0)[lVar19 * 0xc] = *(undefined4 *)(local_2048 + 8);
    *(int *)(&DAT_1809ee5d4 + lVar26) = local_204c;
    *(float *)(&DAT_1809ee5e8 + lVar26) = fVar44;
    *(float *)(&DAT_1809ee5ec + lVar26) = fVar43;
    iVar16 = iVar12;
    if (2 < iVar12) {
      iVar16 = 2;
    }
    *(undefined4 *)(&DAT_1809ee5f8 + lVar26) = DAT_18111435c;
    iVar34 = 0;
    (&DAT_1809ee5fc)[lVar26] = local_20a8[0];
    *(int *)(&DAT_1809ee5d8 + lVar26) = iVar16;
    if (0 < iVar16) {
      do {
        lVar22 = (longlong)iVar34;
        iVar34 = iVar34 + 1;
        lVar19 = lVar22 * 0x60;
        (&DAT_1809ee5dc)[lVar22 + lVar26] = *(byte *)(lVar20 + 4 + lVar19) & 1;
        (&DAT_1809ee5de)[lVar22 + lVar26] = *(undefined1 *)(lVar20 + 0x25 + lVar19);
        *(undefined4 *)(&DAT_1809ee5e0 + lVar22 * 4 + lVar26) =
             *(undefined4 *)(lVar20 + 0x28 + lVar19);
        *(undefined4 *)(&DAT_1809ee5f0 + lVar22 * 4 + lVar26) =
             *(undefined4 *)(lVar20 + 0x14 + lVar19);
      } while (iVar34 < *(int *)(&DAT_1809ee5d8 + lVar26));
    }
  }
  iVar16 = 0;
  *(undefined8 *)(local_2048 + 0x60) = DAT_181114320;
  *(undefined8 *)(local_2048 + 0x68) = DAT_181114328;
  *(undefined8 *)(local_2048 + 0x70) = DAT_181114330;
  *(undefined4 *)(local_2048 + 0x4c) = DAT_181114338;
  *(undefined4 *)(local_2048 + 0x50) = DAT_18111433c;
  *(undefined4 *)(local_2020 + 0x58) = DAT_181114340;
  *(undefined4 *)(local_2020 + 0x5c) = DAT_181114344;
  *(undefined4 *)(*(longlong *)(local_2020 + 0x40) + 0x18) = DAT_181114348;
  *(undefined4 *)(*(longlong *)(local_2020 + 0x40) + 0x1c) = DAT_18111434c;
  *(undefined4 *)(*(longlong *)(local_2020 + 0x40) + 0x20) = DAT_181114350;
  *(undefined4 *)(*(longlong *)(local_2020 + 0x40) + 0x10) = DAT_181114354;
  *(undefined4 *)(local_2020 + 0x10) = DAT_181114358;
  if (0 < DAT_181114364) {
    do {
      lVar20 = (longlong)iVar16;
      iVar16 = iVar16 + 1;
      lVar19 = (&DAT_181114368)[lVar20];
      *(undefined4 *)(*(longlong *)(lVar19 + 0x18) + 0x18) = (&DAT_181114568)[lVar20 * 3];
      *(undefined4 *)(*(longlong *)(lVar19 + 0x18) + 0x1c) = (&DAT_18111456c)[lVar20 * 3];
      *(undefined4 *)(*(longlong *)(lVar19 + 0x18) + 0x20) = (&DAT_181114570)[lVar20 * 3];
      *(undefined4 *)(*(longlong *)(lVar19 + 0x18) + 0x10) = (&DAT_181114868)[lVar20];
      *(undefined4 *)(lVar19 + 0x10) = (&DAT_181114968)[lVar20];
    } while (iVar16 < DAT_181114364);
  }
  if ((*(longlong *)(local_2020 + 0x28) - 0x10000U < 0x7ffffffeffff) &&
     (iVar16 = 0, 0 < DAT_181114360)) {
    do {
      if (**(int **)(local_2020 + 0x28) <= iVar16) break;
      lVar20 = (longlong)iVar16;
      iVar16 = iVar16 + 1;
      *(undefined8 *)(*(int **)(local_2020 + 0x28) + lVar20 * 2 + 2) = (&DAT_181114a68)[lVar20];
      uVar37 = *(undefined8 *)(lVar20 * 0x28 + 0x181114b70);
      lVar19 = (&DAT_181114a68)[lVar20];
      *(undefined8 *)(lVar19 + 0x10) = *(undefined8 *)(&DAT_181114b68 + lVar20 * 0x28);
      *(undefined8 *)(lVar19 + 0x18) = uVar37;
      uVar37 = *(undefined8 *)(lVar20 * 0x28 + 0x181114b80);
      *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(&DAT_181114b78 + lVar20 * 0x28);
      *(undefined8 *)(lVar19 + 0x28) = uVar37;
      *(undefined8 *)(lVar19 + 0x30) = (&DAT_181114b88)[lVar20 * 5];
    } while (iVar16 < DAT_181114360);
  }
  uVar32 = DAT_180ce9638;
  *(undefined4 *)(local_2020 + 0x20) = DAT_18111435c;
  for (; uVar32 != 0; uVar32 = uVar32 - 1) {
    lVar19 = uVar32 * 0x90;
    if (*(longlong *)(&DAT_180ce29a0 + lVar19) - 0x10000U < 0x7ffffffeffff) {
      FUN_180540530(*(longlong *)(&DAT_180ce29a0 + lVar19),&DAT_180ce29b0 + lVar19,
                    *(undefined8 *)(&DAT_180ce29a8 + lVar19));
    }
  }
  DAT_180ce9638 = 0;
  return iVar12;
}



/* ===== 1801db230 FUN_1801db230 ===== */

longlong * FUN_1801db230(longlong *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_1 == param_2) {
    return param_2;
  }
  for (plVar5 = param_1 + 1; plVar5 != param_2; plVar5 = plVar5 + 1) {
    lVar3 = *plVar5;
    fVar1 = *(float *)(lVar3 + 0x24);
    if (*(float *)(*param_1 + 0x24) <= fVar1) {
      fVar2 = *(float *)(plVar5[-1] + 0x24);
      plVar4 = plVar5;
      while (fVar1 < fVar2) {
        *plVar4 = plVar4[-1];
        fVar2 = *(float *)(plVar4[-2] + 0x24);
        plVar4 = plVar4 + -1;
      }
      *plVar4 = lVar3;
    }
    else {
      FUN_180540530(param_1 + 1,param_1,(longlong)plVar5 - (longlong)param_1);
      *param_1 = lVar3;
    }
  }
  return param_2;
}



/* ===== 1801db310 FUN_1801db310 ===== */

longlong * FUN_1801db310(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x201) {
    plVar1 = param_1 + 2;
    uVar2 = param_2;
  }
  else {
    uVar2 = 0x7fffffffffffffff;
    if ((longlong)param_2 < 0x7fffffffffffffff) {
      uVar2 = param_2;
    }
    if ((uVar2 < 0x2000000000000000) && (0 < (longlong)uVar2)) {
      do {
        plVar1 = (longlong *)FUN_1804ed030(uVar2 * 8,&DAT_1805757b2);
        if (plVar1 != (longlong *)0x0) {
          if (uVar2 < 0x201) goto LAB_1801db384;
          goto LAB_1801db395;
        }
        uVar2 = uVar2 >> 1;
      } while (uVar2 != 0);
    }
    plVar1 = (longlong *)0x0;
LAB_1801db384:
    FUN_1803d64e0(plVar1);
    plVar1 = param_1 + 2;
    uVar2 = 0x200;
  }
LAB_1801db395:
  *param_1 = (longlong)plVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* ===== 1801db3c0 FUN_1801db3c0 ===== */

void FUN_1801db3c0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_1801db230();
    return;
  }
  uVar2 = param_3 >> 1;
  lVar3 = param_3 - uVar2;
  lVar1 = param_1 + lVar3 * 8;
  if (param_5 < lVar3) {
    FUN_1801db3c0(param_1,lVar1,lVar3,param_4,param_5,param_6);
    FUN_1801db3c0(lVar1,param_2,uVar2,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_1801db4e0();
    FUN_1801db4e0(lVar1,param_2,uVar2,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_1801db6d0(param_1,lVar1,param_2,lVar3,uVar2,param_4,param_5,param_6);
  return;
}



/* ===== 1801db4e0 FUN_1801db4e0 ===== */

void FUN_1801db4e0(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  float *pfVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  float fVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  plVar7 = param_1;
  for (lVar10 = param_3; 0x20 < lVar10; lVar10 = lVar10 + -0x20) {
    plVar7 = (longlong *)FUN_1801db230(plVar7,plVar7 + 0x20);
  }
  FUN_1801db230(plVar7,param_2);
  if (0x20 < param_3) {
    plVar7 = param_4;
    lVar10 = param_3;
    plVar13 = param_1;
    do {
      lVar1 = lVar10 + -0x20;
      plVar3 = plVar13 + 0x20;
      lVar11 = lVar10 + -0x40;
      plVar4 = plVar13 + 0x1f;
      if (lVar1 < 0x20) {
        lVar11 = 0;
      }
      lVar8 = 0x200;
      if (lVar1 < 0x20) {
        lVar8 = lVar10 * 8;
      }
      plVar12 = (longlong *)(lVar8 + (longlong)plVar13);
      lVar8 = 0x1f8;
      if (lVar1 < 0x20) {
        lVar8 = lVar10 * 8 + -8;
      }
      plVar5 = (longlong *)(lVar8 + (longlong)plVar13);
      plVar9 = plVar3;
      while( true ) {
        while( true ) {
          fVar6 = *(float *)(*plVar13 + 0x24);
          pfVar2 = (float *)(*plVar9 + 0x24);
          if (fVar6 < *pfVar2 || fVar6 == *pfVar2) break;
          *plVar7 = *plVar9;
          if (plVar9 == plVar5) {
            lVar10 = (longlong)plVar3 - (longlong)plVar13;
            plVar9 = plVar13;
            goto LAB_1801db5f6;
          }
          plVar9 = plVar9 + 1;
          plVar7 = plVar7 + 1;
        }
        *plVar7 = *plVar13;
        if (plVar13 == plVar4) break;
        plVar13 = plVar13 + 1;
        plVar7 = plVar7 + 1;
      }
      lVar10 = (longlong)plVar12 - (longlong)plVar9;
LAB_1801db5f6:
      FUN_180540530(plVar7 + 1,plVar9,lVar10);
      plVar7 = (longlong *)((longlong)plVar7 + lVar10 + 8);
      lVar10 = lVar11;
      plVar13 = plVar12;
    } while (0x20 < lVar11);
    FUN_180540530(plVar7,plVar12,param_2 - (longlong)plVar12);
    lVar10 = 0x40;
    FUN_1801db7f0(param_4,param_4 + param_3,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_1801db7f0(param_1,param_2,param_4,lVar10 * 2,param_3,param_5);
        lVar10 = lVar10 * 4;
        FUN_1801db7f0(param_4,param_4 + param_3,param_1,lVar10,param_3,param_5);
      } while (lVar10 <= (param_3 + -1) / 2);
    }
  }
  return;
}



/* ===== 1801db6d0 FUN_1801db6d0 ===== */

void FUN_1801db6d0(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    lVar2 = *param_2;
    fVar1 = *(float *)(lVar2 + 0x24);
    while (lVar3 = *param_1, *(float *)(lVar3 + 0x24) <= fVar1) {
      param_1 = param_1 + 1;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    plVar5 = param_3 + -1;
    if (param_2 != plVar5) {
      plVar4 = plVar5;
      do {
        if (*(float *)(*plVar4 + 0x24) <= *(float *)(param_2[-1] + 0x24) &&
            *(float *)(param_2[-1] + 0x24) != *(float *)(*plVar4 + 0x24)) {
          if (param_4 == 1) {
            FUN_180540530(param_1,fVar1,(longlong)param_3 - (longlong)param_2);
            *(longlong *)(((longlong)param_3 - (longlong)param_2) + (longlong)param_1) = lVar3;
            return;
          }
          FUN_1801db8f0(param_1,fVar1,param_3,param_4,param_5,param_6,param_7,param_8);
          return;
        }
        param_5 = param_5 + -1;
        plVar5 = plVar4 + -1;
        param_3 = plVar4;
        plVar4 = plVar5;
      } while (param_2 != plVar5);
    }
    FUN_180540530((longlong)plVar5 + (8 - ((longlong)param_2 - (longlong)param_1)),param_1,
                  (longlong)param_2 - (longlong)param_1);
    *param_1 = lVar2;
  }
  return;
}



/* ===== 1801db7f0 FUN_1801db7f0 ===== */

void FUN_1801db7f0(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  float *pfVar1;
  longlong *plVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_5 <= param_4) {
LAB_1801db8cc:
    FUN_180540530(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  plVar7 = param_1;
LAB_1801db830:
  plVar2 = plVar7 + param_4;
  lVar8 = param_5 - param_4;
  lVar5 = param_4;
  if (lVar8 < param_4) {
    lVar5 = lVar8;
  }
  lVar9 = param_4 * 2;
  if (lVar8 < param_4) {
    lVar9 = param_5;
  }
  param_1 = plVar7 + lVar9;
  plVar6 = plVar2;
  do {
    lVar9 = *plVar7;
    lVar4 = *plVar6;
    fVar3 = *(float *)(lVar9 + 0x24);
    pfVar1 = (float *)(lVar4 + 0x24);
    if (fVar3 < *pfVar1 || fVar3 == *pfVar1) {
      plVar7 = plVar7 + 1;
      *param_3 = lVar9;
      if (plVar7 == plVar2) {
        lVar9 = (longlong)param_1 - (longlong)plVar6;
        goto LAB_1801db89e;
      }
    }
    else {
      plVar6 = plVar6 + 1;
      *param_3 = lVar4;
      if (plVar6 == param_1) break;
    }
    param_3 = param_3 + 1;
  } while( true );
  lVar9 = (longlong)plVar2 - (longlong)plVar7;
  plVar6 = plVar7;
LAB_1801db89e:
  FUN_180540530(param_3 + 1,plVar6,lVar9);
  param_3 = (longlong *)((longlong)param_3 + lVar9 + 8);
  plVar7 = param_1;
  param_5 = lVar8 - lVar5;
  if (lVar8 - lVar5 <= param_4) goto LAB_1801db8cc;
  goto LAB_1801db830;
}



/* ===== 1801db8f0 FUN_1801db8f0 ===== */

void FUN_1801db8f0(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6,longlong param_7,undefined1 param_8)

{
  longlong *plVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    FUN_180540530(param_6,param_1,lVar9);
    plVar6 = param_2 + 1;
    *param_1 = *param_2;
    plVar7 = param_1 + 1;
    plVar10 = param_6;
    do {
      plVar1 = plVar7 + 1;
      lVar11 = *plVar6;
      fVar3 = *(float *)(*plVar10 + 0x24);
      pfVar2 = (float *)(lVar11 + 0x24);
      if (fVar3 < *pfVar2 || fVar3 == *pfVar2) {
        *plVar7 = *plVar10;
        if (plVar10 == (longlong *)((longlong)param_6 + lVar9 + -0x10)) {
          uVar4 = *(undefined8 *)((longlong)param_6 + lVar9 + -8);
          FUN_180540530(plVar1,plVar6,(longlong)param_3 - (longlong)plVar6);
          *(undefined8 *)(((longlong)param_3 - (longlong)plVar6) + (longlong)plVar1) = uVar4;
          return;
        }
        plVar10 = plVar10 + 1;
      }
      else {
        plVar6 = plVar6 + 1;
        *plVar7 = lVar11;
        if (plVar6 == param_3) {
          FUN_180540530(plVar1,plVar10,(longlong)param_6 + (lVar9 - (longlong)plVar10));
          return;
        }
      }
      plVar7 = plVar1;
    } while( true );
  }
  if (param_7 < param_5) {
    if (param_5 < param_4) {
      lVar9 = param_5 >> 1;
      uVar8 = (longlong)param_2 - (longlong)param_1 >> 3;
      plVar7 = param_2 + lVar9;
      plVar6 = param_1;
      if (0 < (longlong)uVar8) {
        do {
          uVar5 = uVar8 >> 1;
          if (*(float *)(plVar6[uVar5] + 0x24) <= *(float *)(*plVar7 + 0x24)) {
            plVar6 = plVar6 + uVar5 + 1;
            uVar5 = uVar8 + (-1 - uVar5);
          }
          uVar8 = uVar5;
        } while (0 < (longlong)uVar5);
      }
      lVar11 = (longlong)plVar6 - (longlong)param_1 >> 3;
    }
    else {
      lVar11 = param_4 >> 1;
      uVar8 = (longlong)param_3 - (longlong)param_2 >> 3;
      plVar6 = param_1 + lVar11;
      plVar7 = param_2;
      if (0 < (longlong)uVar8) {
        do {
          uVar5 = uVar8 >> 1;
          if (!(*(float *)(*plVar6 + 0x24) < *(float *)(plVar7[uVar5] + 0x24) ||
               *(float *)(*plVar6 + 0x24) == *(float *)(plVar7[uVar5] + 0x24))) {
            plVar7 = plVar7 + uVar5 + 1;
            uVar5 = uVar8 + (-1 - uVar5);
          }
          uVar8 = uVar5;
        } while (0 < (longlong)uVar5);
      }
      lVar9 = (longlong)plVar7 - (longlong)param_2 >> 3;
    }
    FUN_1801dbbe0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar6,plVar7,
                  lVar11,lVar9);
    return;
  }
  FUN_180540530(param_6,param_2,(longlong)param_3 - (longlong)param_2);
  plVar6 = param_3 + -1;
  *plVar6 = param_2[-1];
  plVar7 = (longlong *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -8);
  param_2 = param_2 + -2;
  while( true ) {
    while( true ) {
      lVar9 = *plVar7;
      fVar3 = *(float *)(*param_2 + 0x24);
      pfVar2 = (float *)(lVar9 + 0x24);
      if (!(*pfVar2 <= fVar3 && fVar3 != *pfVar2)) break;
      plVar6[-1] = *param_2;
      if (param_1 == param_2) {
        plVar6[-2] = *plVar7;
        FUN_180540530((longlong)(plVar6 + -2) - ((longlong)plVar7 - (longlong)param_6),param_6,
                      (longlong)plVar7 - (longlong)param_6);
        return;
      }
      param_2 = param_2 + -1;
      plVar6 = plVar6 + -1;
    }
    plVar7 = plVar7 + -1;
    plVar6[-1] = lVar9;
    if (param_6 == plVar7) break;
    plVar6 = plVar6 + -1;
  }
  plVar6[-2] = *param_2;
  FUN_180540530((longlong)(plVar6 + -2) - ((longlong)param_2 - (longlong)param_1),param_1);
  *param_1 = *param_6;
  return;
}



/* ===== 1801dbbe0 FUN_1801dbbe0 ===== */

void FUN_1801dbbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1801dbcd0(param_9,param_2,param_10,param_4 - param_11,param_12,param_6,param_7);
  FUN_1801db6d0(param_1,param_9,uVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_1801db6d0(uVar1,param_10,param_3,param_4 - param_11);
  return;
}



/* ===== 1801dbcd0 FUN_1801dbcd0 ===== */

longlong FUN_1801dbcd0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  
  if (param_4 == 0) {
    return param_3;
  }
  if (param_5 == 0) {
    return param_1;
  }
  if ((param_5 < param_4) || (param_7 < param_4)) {
    if (param_7 < param_5) {
      if (param_1 != param_2) {
        if (param_2 == param_3) {
          param_3 = param_1;
        }
        else {
          FUN_1804ea090(param_1);
          param_3 = (param_3 - param_2 & 0xfffffffffffffff8U) + param_1;
        }
      }
    }
    else {
      lVar1 = param_3 - param_2;
      FUN_180540530(param_6,param_2,lVar1);
      FUN_180540530(param_3 - (param_2 - param_1),param_1,param_2 - param_1);
      FUN_180540530(param_1,param_6,lVar1);
      param_3 = lVar1 + param_1;
    }
  }
  else {
    FUN_180540530(param_6,param_1,param_2 - param_1);
    FUN_180540530(param_1,param_2,param_3 - param_2);
    param_3 = (param_3 - param_2) + param_1;
    FUN_180540530(param_3,param_6,param_2 - param_1);
  }
  return param_3;
}



/* ===== 1801dbdf0 FUN_1801dbdf0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801dbdf0(longlong *param_1,longlong param_2)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  float fVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float extraout_XMM0_Da;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined4 local_a8;
  
  fVar10 = *(float *)(param_2 + 0x1c);
  fVar13 = *(float *)(param_2 + 0x18);
  fVar8 = fVar13 * fVar13 + fVar10 * fVar10;
  if (fVar8 < 0.0) {
    FUN_18051af10();
    fVar8 = extraout_XMM0_Da;
  }
  else {
    fVar8 = SQRT(fVar8);
  }
  uVar2 = (uint)DAT_180ca09b0;
  fVar1 = DAT_1808ac34c;
  if (fVar8 < DAT_1808ac34c) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  if (DAT_180ca0a3c == 0) {
    return 0;
  }
  if ((uint)DAT_180ca09b0 == 0) {
    return 0;
  }
  if (DAT_180ca09b0._4_4_ == 0) {
    return 0;
  }
  lVar5 = FUN_18000f3a0(*param_1 + (ulonglong)DAT_180ca0a3c);
  if (0x7ffffffefffe < lVar5 - 0x10000U) {
    return 0;
  }
  puVar6 = (undefined8 *)FUN_1800111b0(&local_f8,(ulonglong)uVar2 + lVar5);
  local_e8 = *puVar6;
  fVar8 = *(float *)(puVar6 + 1);
  local_e0 = fVar8;
  puVar6 = (undefined8 *)FUN_1800111b0(&local_108,(ulonglong)DAT_180ca09b0._4_4_ + lVar5);
  local_f8 = *puVar6;
  local_f0 = *(float *)(puVar6 + 1);
  if (((uint)fVar8 & 0x7f800000) == 0x7f800000) {
    return 0;
  }
  if (((uint)local_f0 & 0x7f800000) == 0x7f800000) {
    return 0;
  }
  if (local_f0 <= fVar8) {
    return 0;
  }
  if ((((*param_1 == 0) || (DAT_180ca09f8 == 0)) ||
      (lVar5 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + *param_1), lVar5 == 0)) ||
     (DAT_180ca0950 == 0)) {
    fVar8 = 0.0;
    fVar15 = 0.0;
    fVar14 = 0.0;
  }
  else {
    pfVar7 = (float *)FUN_1800111b0(&local_108,lVar5 + (ulonglong)DAT_180ca0950);
    fVar8 = *pfVar7;
    fVar15 = pfVar7[1];
    fVar14 = pfVar7[2];
  }
  uVar12 = _UNK_1808ad2c8;
  uVar11 = _DAT_1808ad2c0;
  fVar13 = fVar13 * DAT_1808ac00c;
  fVar10 = fVar10 * DAT_1808ac00c;
  fVar16 = fVar14 - DAT_1808ac710;
  fVar14 = fVar14 + DAT_1808ac540;
  local_b8 = 0;
  local_118 = fVar13 * 0.0 + fVar8;
  local_114 = fVar10 * 0.0 + fVar15;
  local_b0 = 0;
  local_d8 = _DAT_1808ad2c0;
  uStack_d0 = _UNK_1808ad2c8;
  local_ac = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_a8 = 0x3f800000;
  local_110 = fVar16;
  local_108 = local_118;
  local_104 = local_114;
  local_100 = fVar14;
  cVar3 = FUN_1802aed00(&local_108,&local_118,&local_e8,&local_f8,*param_1,0x1c1003,4,7,&local_d8,0)
  ;
  fVar9 = DAT_1808ac254;
  if (cVar3 == '\0') {
    return 0;
  }
  if (local_ac._1_1_ != '\0') {
    return 0;
  }
  if (fVar1 <= (float)local_d8) {
    return 0;
  }
  if (DAT_1809ee6c8 == 0) {
    fVar4 = fVar9;
    if (DAT_1809ee6d0 == '\0') {
      DAT_1809ee6c8 = FUN_180264b70(PTR_s_sv_standable_normal_1809ee6c0);
      DAT_1809ee6d0 = DAT_1809ee6c8 == 0;
      if (DAT_1809ee6c8 != 0) goto LAB_1801dc10b;
      goto LAB_1801dc13b;
    }
  }
  else {
LAB_1801dc10b:
    fVar4 = (float)FUN_180264d70(DAT_1809ee6c8);
    if (((uint)fVar4 & 0x7f800000) == 0x7f800000) {
LAB_1801dc13b:
      fVar4 = fVar9;
      uVar11 = _DAT_1808ad2c0;
      uVar12 = _UNK_1808ad2c8;
    }
    else {
      uVar11 = _DAT_1808ad2c0;
      uVar12 = _UNK_1808ad2c8;
    }
  }
  if ((float)uStack_c0 < fVar4) {
    return 0;
  }
  local_118 = fVar8 + fVar13;
  local_114 = fVar10 + fVar15;
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0x3f800000;
  local_110 = fVar14;
  local_108 = local_118;
  local_104 = local_114;
  local_100 = fVar16;
  local_d8 = uVar11;
  uStack_d0 = uVar12;
  cVar3 = FUN_1802aed00(&local_118,&local_108,&local_e8,&local_f8,*param_1,0x1c1003,4,7,&local_d8,0)
  ;
  if (cVar3 == '\0') {
    return 1;
  }
  if (local_ac._1_1_ != '\0') {
    return 1;
  }
  if (fVar1 <= (float)local_d8) {
    return 1;
  }
  if (DAT_1809ee6c8 == 0) {
    if (DAT_1809ee6d0 != '\0') goto LAB_1801dc254;
    DAT_1809ee6c8 = FUN_180264b70(PTR_s_sv_standable_normal_1809ee6c0);
    DAT_1809ee6d0 = DAT_1809ee6c8 == 0;
    if (DAT_1809ee6c8 == 0) goto LAB_1801dc254;
  }
  fVar10 = (float)FUN_180264d70(DAT_1809ee6c8);
  if (((uint)fVar10 & 0x7f800000) != 0x7f800000) {
    fVar9 = fVar10;
  }
LAB_1801dc254:
  if (fVar9 <= (float)uStack_c0) {
    return 0;
  }
  return 1;
}



/* ===== 1801dc2d0 FUN_1801dc2d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801dc2d0(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  float *pfVar11;
  float extraout_XMM0_Da;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  undefined8 local_150;
  float local_148;
  undefined8 local_140;
  float local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined4 local_100;
  float local_f8 [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  if (DAT_1809ee698 == 0) {
    pfVar8 = (float *)0x0;
    if (DAT_1809ee6a0 == '\0') {
      DAT_1809ee698 = FUN_180264b70(PTR_s_sv_stepsize_1809ee690);
      DAT_1809ee6a0 = DAT_1809ee698 == 0;
      pfVar8 = (float *)0x0;
      if (DAT_1809ee698 != 0) goto LAB_1801dc349;
    }
  }
  else {
LAB_1801dc349:
    local_188 = (float)FUN_180264d70(DAT_1809ee698);
    uVar6 = (uint)local_188 & 0x7f800000;
    pfVar8 = (float *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),uVar6 != 0x7f800000);
    fVar13 = local_188;
    if (uVar6 != 0x7f800000) goto LAB_1801dc378;
  }
  fVar13 = DAT_1808ac934;
LAB_1801dc378:
  fVar18 = *(float *)(param_2 + 0x18);
  fVar15 = *(float *)(param_2 + 0x1c);
  fVar12 = fVar18 * fVar18 + fVar15 * fVar15;
  if (fVar12 < 0.0) {
    pfVar8 = (float *)FUN_18051af10();
    fVar12 = extraout_XMM0_Da;
  }
  else {
    fVar12 = SQRT(fVar12);
  }
  uVar6 = (uint)DAT_180ca09b0;
  fVar4 = DAT_1808ac34c;
  if ((((DAT_1808ac34c <= fVar12) && (pfVar8 = (float *)*param_1, pfVar8 != (float *)0x0)) &&
      (DAT_180ca0a3c != 0)) &&
     (((uint)DAT_180ca09b0 != 0 &&
      (uVar10 = (ulonglong)DAT_180ca09b0._4_4_, DAT_180ca09b0._4_4_ != 0)))) {
    lVar7 = FUN_18000f3a0((ulonglong)DAT_180ca0a3c + (longlong)pfVar8);
    pfVar8 = (float *)0x7ffffffefffe;
    if (lVar7 - 0x10000U < 0x7ffffffeffff) {
      puVar9 = (undefined8 *)FUN_1800111b0(&local_150,(ulonglong)uVar6 + lVar7);
      local_140 = *puVar9;
      fVar14 = *(float *)(puVar9 + 1);
      local_138 = fVar14;
      puVar9 = (undefined8 *)FUN_1800111b0(&local_170,lVar7 + uVar10);
      local_150 = *puVar9;
      local_148 = *(float *)(puVar9 + 1);
      uVar6 = (uint)fVar14 & 0x7f800000;
      pfVar8 = (float *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),uVar6 != 0x7f800000);
      if (((uVar6 != 0x7f800000) &&
          (uVar6 = (uint)local_148 & 0x7f800000,
          pfVar8 = (float *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),uVar6 != 0x7f800000),
          uVar6 != 0x7f800000)) && (fVar14 < local_148)) {
        fVar13 = fVar13 + DAT_1808ac540;
        if ((((*param_1 == 0) || (DAT_180ca09f8 == 0)) ||
            (lVar7 = FUN_18000f3a0(*param_1 + (ulonglong)DAT_180ca09f8), lVar7 == 0)) ||
           (DAT_180ca0950 == 0)) {
          local_180 = 0.0;
          local_188 = 0.0;
          fVar14 = 0.0;
        }
        else {
          pfVar8 = (float *)FUN_1800111b0(&local_170,lVar7 + (ulonglong)DAT_180ca0950);
          local_180 = *pfVar8;
          local_188 = pfVar8[1];
          fVar14 = pfVar8[2];
        }
        fVar3 = DAT_1808ac254;
        fVar2 = DAT_1808ac0d4;
        pfVar11 = local_f8;
        local_184 = fVar18 / fVar12;
        local_f8[0] = 1.0;
        local_f8[1] = 2.0;
        local_f8[2] = 3.0;
        fVar17 = (float)((uint)fVar15 ^ DAT_1808adec0);
        local_178 = fVar15 * DAT_1808ac00c;
        fVar18 = fVar18 * DAT_1808ac00c;
        do {
          pfVar8 = (float *)&local_e8;
          local_d8 = 0xc1600000;
          local_d4 = 0x41b00000;
          fVar15 = fVar18 * *pfVar11 + local_180;
          local_d0 = 0xc1b00000;
          local_e8 = _DAT_1808adda0;
          uStack_e0 = _UNK_1808adda8;
          fVar16 = local_178 * *pfVar11 + local_188;
          do {
            fVar1 = *pfVar8;
            local_198 = &local_130;
            local_190 = 0;
            local_1b8 = *param_1;
            local_1a0 = 7;
            local_1a8 = 4;
            local_1b0 = 0x1c1003;
            local_110 = 0;
            local_16c = fVar16 + fVar1 * local_184;
            local_108 = 0;
            local_104 = 0;
            local_100 = 0x3f800000;
            local_170 = fVar15 + fVar1 * (fVar17 / fVar12);
            local_168 = fVar14 + fVar1 * 0.0;
            local_130 = _DAT_1808ad2c0;
            uStack_128 = _UNK_1808ad2c8;
            local_120 = 0;
            uStack_118 = 0;
            local_158 = local_168 - _DAT_1808acb40;
            local_168 = local_168 + DAT_1808ac540;
            local_160 = local_170;
            local_15c = local_16c;
            cVar5 = FUN_1802aed00(&local_170,&local_160,&local_140,&local_150);
            if (((cVar5 != '\0') && (local_104._1_1_ == '\0')) && ((float)local_130 < fVar4)) {
              if (DAT_1809ee6c8 == 0) {
                uVar10 = 0;
                if (DAT_1809ee6d0 == '\0') {
                  DAT_1809ee6c8 = FUN_180264b70(PTR_s_sv_standable_normal_1809ee6c0);
                  DAT_1809ee6d0 = DAT_1809ee6c8 == 0;
                  uVar10 = 0;
                  if (DAT_1809ee6c8 != 0) goto LAB_1801dc710;
                }
LAB_1801dc737:
                fVar1 = fVar3;
              }
              else {
LAB_1801dc710:
                local_17c = (float)FUN_180264d70(DAT_1809ee6c8);
                uVar6 = (uint)local_17c & 0x7f800000;
                uVar10 = (ulonglong)CONCAT31((int3)(uVar6 >> 8),uVar6 != 0x7f800000);
                fVar1 = local_17c;
                if (uVar6 == 0x7f800000) goto LAB_1801dc737;
              }
              if (fVar1 <= (float)uStack_118) {
                if ((fVar2 <= fVar14 - uStack_128._4_4_) && (fVar14 - uStack_128._4_4_ <= fVar13)) {
                  return CONCAT71((int7)(uVar10 >> 8),1);
                }
              }
            }
            pfVar8 = pfVar8 + 1;
          } while (pfVar8 != &local_cc);
          pfVar11 = pfVar11 + 1;
          pfVar8 = local_f8 + 3;
        } while (pfVar11 != pfVar8);
      }
    }
  }
  return (ulonglong)pfVar8 & 0xffffffffffffff00;
}



/* ===== 1801dc810 FUN_1801dc810 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801dc810(longlong param_1,longlong param_2,char param_3,float param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_3 != '\0') {
    FUN_1801ec5d0(param_2,4);
    lVar3 = FUN_180265420(param_2);
    if (lVar3 == 0) {
      DAT_181115098 = DAT_181115098 + 1;
      if (0x40 < (int)DAT_181115098) {
        uVar1 = DAT_181115098 & 0x8000003f;
        if ((int)uVar1 < 0) {
          uVar1 = (uVar1 - 1 | 0xffffffc0) + 1;
        }
        if (uVar1 != 0) goto LAB_1801dc8be;
      }
      if (param_2 == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x20);
      }
      FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",4,"press",
                    (double)param_4,uVar2);
    }
    else {
      *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 7;
      *(float *)(lVar3 + 0x24) = param_4;
      *(undefined8 *)(lVar3 + 0x18) = 4;
      *(undefined1 *)(lVar3 + 0x20) = 1;
    }
  }
LAB_1801dc8be:
  if (param_1 != 0) {
    *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) | 4;
    uVar4 = *(ulonglong *)(param_1 + 0x68) | _UNK_1808ad3d8;
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | _DAT_1808ad3d0;
    *(ulonglong *)(param_1 + 0x68) = uVar4;
  }
  return;
}



/* ===== 1801dc8f0 FUN_1801dc8f0 ===== */

void FUN_1801dc8f0(longlong param_1,longlong param_2,char param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar3 = DAT_1808acda0;
  uVar2 = DAT_1808ac34c;
  if (param_3 == '\0') goto LAB_1801dc9ea;
  uVar1 = *(ulonglong *)(param_1 + 0x60);
  uVar8 = (uint)uVar1;
  uVar7 = uVar8 & 0x600;
  uVar5 = ~(uint)DAT_180ce9650 & uVar8;
  uVar6 = (ulonglong)(uVar5 & 0x600);
  if ((uVar6 - 0x200 & 0xfffffffffffffdff) == 0) {
LAB_1801dc962:
    DAT_180ce9658 = uVar6;
  }
  else if ((DAT_180ce9658 & uVar1 & 0x600) == 0) {
    uVar6 = (ulonglong)uVar7;
    if (((ulonglong)uVar7 - 0x200 & 0xfffffffffffffdff) != 0) {
      uVar6 = 0;
    }
    goto LAB_1801dc962;
  }
  DAT_181115080 = 0;
  if ((ulonglong)uVar7 == 0x600) {
    DAT_181115080 = DAT_180ce9658;
  }
  uVar6 = (ulonglong)(uVar5 & 0x18);
  uVar8 = uVar8 & 0x18;
  if ((uVar6 - 8 & 0xfffffffffffffff7) == 0) {
LAB_1801dc9bb:
    DAT_180ce9640 = uVar6;
  }
  else if (((byte)DAT_180ce9640 & (byte)uVar1 & 0x18) == 0) {
    uVar6 = (ulonglong)uVar8;
    if (((ulonglong)uVar8 - 8 & 0xfffffffffffffff7) != 0) {
      uVar6 = 0;
    }
    goto LAB_1801dc9bb;
  }
  DAT_181115078 = 0;
  if ((ulonglong)uVar8 == 0x18) {
    DAT_181115078 = DAT_180ce9640;
  }
  DAT_180ce9650 = uVar1;
LAB_1801dc9ea:
  uVar6 = DAT_181115080;
  uVar1 = DAT_181115078;
  uVar9 = *(undefined4 *)(param_2 + 0x58);
  if (DAT_181115080 == 0) {
    uVar10 = *(undefined4 *)(param_2 + 0x5c);
  }
  else {
    if (param_1 != 0) {
      uVar4 = ~(ulonglong)(~(uint)DAT_181115080 & 0x600);
      *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & uVar4;
      uVar5 = (uint)(uVar4 >> 0x20);
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & (uint)uVar4;
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & uVar5;
      *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & (uint)uVar4;
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & uVar5;
    }
    if (uVar6 == 0x200) {
      uVar10 = uVar2;
    }
    else {
      uVar10 = uVar3;
    }
  }
  if (uVar1 != 0) {
    if (param_1 != 0) {
      uVar4 = ~(ulonglong)(~(uint)uVar1 & 0x18);
      *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & uVar4;
      uVar5 = (uint)(uVar4 >> 0x20);
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & (uint)uVar4;
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & uVar5;
      *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & (uint)uVar4;
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & uVar5;
    }
    if (uVar1 == 8) {
      uVar9 = uVar2;
    }
    else {
      uVar9 = uVar3;
    }
  }
  if ((uVar6 != 0) || (uVar1 != 0)) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0xc0;
    *(undefined4 *)(param_2 + 0x58) = uVar9;
    *(undefined4 *)(param_2 + 0x5c) = uVar10;
  }
  return;
}



/* ===== 1801dcab0 FUN_1801dcab0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801dcab0(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  char cVar4;
  float fVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float local_res8;
  undefined8 local_148;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined4 local_d8;
  
  iVar9 = DAT_180960e58;
  _DAT_180960e5d = uStack_100._5_2_;
  DAT_180960e5f = uStack_100._7_1_;
  _DAT_180960e69 = uStack_f0._1_4_;
  _DAT_180960e6d = uStack_f0._5_2_;
  DAT_180960e6f = uStack_f0._7_1_;
  DAT_180960e50 = *(undefined8 *)(param_1 + 8);
  DAT_180960e5c = 0;
  _DAT_180960e60 = 0;
  DAT_180960e68 = 0;
  if ((*param_3 == 0) || (DAT_180ca0a44 == 0)) {
    cVar4 = '\0';
  }
  else {
    cVar4 = FUN_180011220(*param_3 + (ulonglong)DAT_180ca0a44);
    if (cVar4 == '\t') {
      if (iVar9 == 1) {
        DAT_180960e58 = 2;
      }
      else if (iVar9 != 2) {
        return;
      }
      if (DAT_180920d0b == '\0') {
        return;
      }
      DAT_180960e68 = 1;
      return;
    }
  }
  uVar2 = (uint)DAT_180ca09b0;
  if ((*(byte *)(param_4 + 8) & 1) != 0) {
    DAT_180960e58 = 0;
    return;
  }
  if (iVar9 == 2) {
    return;
  }
  if (cVar4 != '\x02') {
    return;
  }
  fVar15 = *(float *)(param_4 + 0x20);
  if (0.0 <= fVar15) {
    return;
  }
  if (*param_3 == 0) {
    return;
  }
  if (DAT_180ca0a3c == 0) {
    return;
  }
  if ((uint)DAT_180ca09b0 == 0) {
    return;
  }
  uVar10 = (ulonglong)DAT_180ca09b0._4_4_;
  if (DAT_180ca09b0._4_4_ == 0) {
    return;
  }
  lVar6 = FUN_18000f3a0((ulonglong)DAT_180ca0a3c + *param_3);
  if (0x7ffffffefffe < lVar6 - 0x10000U) {
    return;
  }
  puVar7 = (undefined8 *)FUN_1800111b0(&local_128,(ulonglong)uVar2 + lVar6);
  local_118 = *puVar7;
  fVar13 = *(float *)(puVar7 + 1);
  local_110 = fVar13;
  puVar7 = (undefined8 *)FUN_1800111b0(&local_138,lVar6 + uVar10);
  local_128 = *puVar7;
  local_120 = *(float *)(puVar7 + 1);
  if (((uint)fVar13 & 0x7f800000) == 0x7f800000) {
    return;
  }
  if (((uint)local_120 & 0x7f800000) == 0x7f800000) {
    return;
  }
  if (local_120 <= fVar13) {
    return;
  }
  if ((((*param_3 == 0) || (DAT_180ca09f8 == 0)) ||
      (lVar6 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + *param_3), lVar6 == 0)) ||
     (DAT_180ca0950 == 0)) {
    local_138 = 0.0;
    local_134 = 0.0;
    local_148 = 0;
    local_140 = 0.0;
  }
  else {
    puVar7 = (undefined8 *)FUN_1800111b0(&local_138,lVar6 + (ulonglong)DAT_180ca0950);
    uVar18 = *puVar7;
    local_138 = (float)uVar18;
    local_140 = *(float *)(puVar7 + 1);
    local_148._4_4_ = (float)((ulonglong)uVar18 >> 0x20);
    local_134 = local_148._4_4_;
    local_148 = uVar18;
  }
  uVar19 = _UNK_1808ad2c8;
  uVar18 = _DAT_1808ad2c0;
  fVar16 = DAT_1808acc44;
  fVar13 = DAT_1808ac34c;
  local_138 = local_138 - 0.0;
  local_130 = local_140 - DAT_1808acc44;
  local_134 = local_134 - 0.0;
  local_d8 = 0x3f800000;
  local_108 = _DAT_1808ad2c0;
  uStack_100 = _UNK_1808ad2c8;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e0 = 0;
  local_dc = 0;
  cVar4 = FUN_1802aed00(&local_148,&local_138,&local_118,&local_128,*param_3,0x1c1003,4,7,&local_108
                        ,0);
  if (cVar4 == '\0') {
    return;
  }
  fVar16 = (float)local_108 * fVar16;
  if (DAT_180960e40 == 0) {
    if (DAT_180960e48 == '\0') {
      DAT_180960e40 = FUN_180264b70(PTR_s_sv_gravity_180960e38);
      DAT_180960e48 = DAT_180960e40 == 0;
      if (DAT_180960e40 != 0) goto LAB_1801dce45;
    }
LAB_1801dce70:
    fVar5 = DAT_1808acc30;
  }
  else {
LAB_1801dce45:
    fVar5 = (float)FUN_180264d70(DAT_180960e40);
    if (((uint)fVar5 & 0x7f800000) == 0x7f800000) goto LAB_1801dce70;
  }
  if (((DAT_180ca0a48 == 0) ||
      (fVar11 = (float)FUN_18000f3d0((ulonglong)DAT_180ca0a48 + *param_3),
      ((uint)fVar11 & 0x7f800000) == 0x7f800000)) || (fVar11 <= 0.0)) {
    fVar11 = fVar13;
  }
  fVar15 = (float)((uint)fVar15 ^ DAT_1808adec0);
  fVar11 = fVar11 * fVar5;
  fVar5 = fVar13;
  if (fVar13 <= fVar15) {
    fVar5 = fVar15;
  }
  local_res8 = (fVar11 + fVar11) * fVar16 + fVar5 * fVar5;
  if (local_res8 < 0.0) {
    local_res8 = (float)FUN_18051af10();
  }
  else {
    local_res8 = SQRT(local_res8);
  }
  fVar15 = DAT_1808ac0c0;
  bVar1 = false;
  fVar20 = 0.0;
  fVar21 = 0.0;
  iVar9 = 0;
  fVar16 = DAT_1808acab0;
  fVar17 = fVar13;
  do {
    fVar12 = (float)FUN_180517200();
    local_138 = fVar12 * fVar16 + (float)local_148;
    fVar12 = (float)FUN_180517790();
    local_134 = fVar12 * fVar16 + local_148._4_4_;
    local_e8 = 0;
    local_130 = local_140 + 0.0;
    local_e0 = 0;
    local_dc = 0;
    local_d8 = 0x3f800000;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = uVar18;
    uStack_100 = uVar19;
    cVar4 = FUN_1802aed00(&local_148,&local_138,&local_118,&local_128,*param_3,0x100,4,7,&local_108,
                          0);
    if ((cVar4 != '\0') && (fVar12 = (float)local_108, (float)local_108 < fVar13)) {
      if (0.0 < (float)local_108) {
        fVar3 = local_f8._4_4_;
        fVar16 = (float)local_f8;
        fVar14 = local_f8._4_4_ * local_f8._4_4_ + (float)local_f8 * (float)local_f8;
        if (fVar14 < 0.0) {
          fVar14 = (float)FUN_18051af10();
        }
        else {
          fVar14 = SQRT(fVar14);
        }
        if (((fVar15 < fVar14) && ((float)((uint)uStack_f0 & _DAT_1808ade90) < DAT_1808ac1b0)) &&
           (fVar12 < fVar17)) {
          fVar20 = fVar16 / fVar14;
          fVar21 = fVar3 / fVar14;
          fVar17 = fVar12;
        }
        fVar16 = DAT_1808acab0;
        uVar18 = _DAT_1808ad2c0;
        uVar19 = _UNK_1808ad2c8;
      }
      else {
        bVar1 = true;
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  if ((fVar13 <= fVar17) && (!bVar1)) {
    if (DAT_180960e58 == 1) {
      DAT_180960e5c = 1;
      return;
    }
    return;
  }
  DAT_180960e58 = 1;
  if (fVar13 <= fVar17) {
    DAT_180960e58 = 1;
    return;
  }
  fVar17 = fVar17 * fVar16;
  fVar16 = ((local_res8 - fVar5) / fVar11) * fVar16;
  if (DAT_180960e78 == 0) {
    if (DAT_180960e80 == '\0') {
      DAT_180960e78 = FUN_180264b70(PTR_s_sv_air_max_wishspeed_180960e70);
      DAT_180960e80 = DAT_180960e78 == 0;
      if (DAT_180960e78 != 0) goto LAB_1801dd124;
    }
  }
  else {
LAB_1801dd124:
    fVar15 = (float)FUN_180264d70(DAT_180960e78);
    if (((uint)fVar15 & 0x7f800000) != 0x7f800000) goto LAB_1801dd157;
  }
  fVar15 = DAT_1808ac9e4;
LAB_1801dd157:
  bVar1 = fVar16 <= fVar17 / (fVar15 * DAT_1808ac00c) + DAT_1808ac658;
  if ((bVar1) || (fVar15 = 0.0, DAT_1808ac5e0 < fVar17)) {
    fVar15 = fVar13;
  }
  DAT_180960e68 = bVar1;
  fVar13 = (float)FUN_180517200();
  fVar11 = (float)FUN_180517790();
  DAT_180960e5c = 1;
  pcVar8 = "";
  if (bVar1) {
    pcVar8 = " (hurry)";
  }
  _DAT_180960e60 =
       CONCAT44(((float)((uint)fVar20 ^ DAT_1808adec0) * (float)((uint)fVar11 ^ DAT_1808adec0) +
                (float)((uint)fVar21 ^ DAT_1808adec0) * fVar13) * fVar15,
                ((float)((uint)fVar21 ^ DAT_1808adec0) * fVar11 +
                (float)((uint)fVar20 ^ DAT_1808adec0) * fVar13) * fVar15);
  FUN_1801ec960("fireman: ladder %.1f away, fall %.0f -> %.0f, ground in %.0f ticks%s",
                (double)fVar17,(double)fVar5,(double)local_res8,(double)fVar16,pcVar8);
  return;
}



/* ===== 1801dd2e0 FUN_1801dd2e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801dd2e0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte bVar12;
  char *pcVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  float fVar19;
  char local_res8;
  undefined7 uStackX_9;
  longlong local_res10;
  longlong local_88;
  uint local_80;
  undefined1 local_7c;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  float fStack_78;
  undefined1 uStack_74;
  undefined2 uStack_73;
  undefined1 uStack_71;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined2 uStack_6b;
  undefined1 uStack_69;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  DAT_180cc3f98 = 0;
  if (param_1 == 0) {
    DAT_180cc3f98 = 0;
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = CONCAT71(uStackX_9,local_res8);
    local_res10 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_res10 = DAT_1811089f8;
  }
  lVar11 = local_res10;
  if (local_res10 == 0) {
    DAT_1811089f8 = local_res10;
    return;
  }
  if (DAT_180ca09f0 == 0) {
    DAT_1811089f8 = local_res10;
    return;
  }
  DAT_1811089f8 = local_res10;
  iVar9 = FUN_180011200((ulonglong)DAT_180ca09f0 + local_res10);
  if (999 < iVar9 - 1U) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (0x7ffffffefffe < lVar1 - 0x10000U) {
    return;
  }
  if (0x7ffffffefffe < *(longlong *)(lVar1 + 0x40) - 0x10000U) {
    return;
  }
  local_58 = 0x3f800000;
  local_88 = 0;
  local_80 = 0;
  local_5c = 0;
  local_7c = 0;
  uStack_7b = 0;
  uStack_79 = 0;
  fStack_78 = 0.0;
  uStack_74 = 0;
  uStack_73 = 0;
  uStack_71 = 0;
  uStack_70 = 0;
  local_54 = 0x437a0000;
  uStack_6c = 0;
  uStack_6b = 0;
  uStack_69 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  cVar6 = FUN_1801ec0c0(&local_res10,&local_88);
  if (cVar6 == '\0') {
    return;
  }
  bVar14 = *(longlong *)(param_1 + 8) != DAT_1809ee6a8;
  if (DAT_180920d09 != '\0') {
    FUN_1801dc8f0(param_1,lVar1,bVar14);
  }
  if (DAT_180920d0a == '\0') {
    _DAT_180960e5d = uStack_7b;
    DAT_180960e5f = uStack_79;
    _DAT_180960e69 = CONCAT13(uStack_6c,uStack_70._1_3_);
    _DAT_180960e6d = uStack_6b;
    DAT_180960e6f = uStack_69;
    DAT_180960e50 = -1;
    DAT_180960e58 = 0;
    DAT_180960e5c = '\0';
    _DAT_180960e60 = 0;
    DAT_180960e68 = '\0';
  }
  else {
    if (DAT_180960e50 != *(longlong *)(param_1 + 8)) {
      FUN_1801dcab0(param_1,lVar1,&local_res10,&local_88);
    }
    if (DAT_180960e68 != '\0') {
      FUN_1801ec5d0(lVar1,2);
      *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffd;
      uVar15 = *(uint *)(param_1 + 100) & _UNK_1808adf64;
      uVar16 = *(uint *)(param_1 + 0x68) & _UNK_1808adf68;
      uVar17 = *(uint *)(param_1 + 0x6c) & _UNK_1808adf6c;
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & _DAT_1808adf60;
      *(uint *)(param_1 + 100) = uVar15;
      *(uint *)(param_1 + 0x68) = uVar16;
      *(uint *)(param_1 + 0x6c) = uVar17;
    }
    if (DAT_180960e5c != '\0') {
      FUN_1801ec5d0(lVar1,0x618);
      *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & 0xfffffffffffff9e7;
      fVar19 = DAT_1808ac0c0;
      fVar4 = DAT_180960e60;
      uVar10 = *(ulonglong *)(param_1 + 0x60);
      if (DAT_1808ac0c0 < DAT_180960e60) {
        uVar10 = uVar10 | 8;
        *(ulonglong *)(param_1 + 0x60) = uVar10;
      }
      fVar3 = DAT_1808acd4c;
      if (fVar4 < DAT_1808acd4c) {
        uVar10 = uVar10 | 0x10;
        *(ulonglong *)(param_1 + 0x60) = uVar10;
      }
      fVar5 = DAT_180960e64;
      if (fVar19 < DAT_180960e64) {
        uVar10 = uVar10 | 0x200;
        *(ulonglong *)(param_1 + 0x60) = uVar10;
      }
      if (fVar5 < fVar3) {
        *(ulonglong *)(param_1 + 0x60) = uVar10 | 0x400;
      }
      *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 0xc0;
      *(float *)(lVar1 + 0x58) = fVar4;
      *(float *)(lVar1 + 0x5c) = fVar5;
    }
  }
  uVar16 = local_80;
  uVar15 = DAT_180ca0a44;
  bVar8 = (byte)local_80;
  if (bVar14) {
    _DAT_1809ee6b9 = CONCAT13(uStack_74,fStack_78._1_3_);
    bVar12 = 0;
    _DAT_1809ee6bd = uStack_73;
    DAT_1809ee6bf = uStack_71;
    DAT_1809ee6a8 = *(longlong *)(param_1 + 8);
    _DAT_1809ee6b0 = 0;
    DAT_1809ee6b8 = 0;
    if (0 < DAT_180ce9648) {
      if ((local_80 & 1) == 0) {
        DAT_180ce9648 = DAT_180ce9648 + -1;
      }
      else {
        DAT_180ce9648 = 0;
      }
    }
    uVar10 = (ulonglong)DAT_180ca0a44;
    if (DAT_180920d08 == '\0') {
LAB_1801dd631:
      if (uVar15 != 0) {
        cVar6 = FUN_180011220(lVar11 + uVar10);
        if ((cVar6 - 7U & 0xfd) == 0) goto LAB_1801dd803;
      }
    }
    else if (DAT_180ca0a44 != 0) {
      cVar6 = FUN_180011220(lVar11 + uVar10);
      if (((cVar6 == '\t') && (DAT_1809ee590 != '\0')) && (DAT_1809ee598 != '\t')) {
        _DAT_1809ee6b0 = CONCAT44(DAT_1809ee6b4,1);
        goto LAB_1801dd803;
      }
      goto LAB_1801dd631;
    }
    cVar6 = DAT_180920d07;
    if ((uVar16 & 1) != 0) {
      local_res8 = DAT_180920d06;
      if (((DAT_1809ee590 == '\0') || (((byte)DAT_1809ee594 & 1) != 0)) || (DAT_1809ee598 == '\t'))
      {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if ((DAT_180920d07 == '\0' && DAT_180920d06 == '\0') && (DAT_180920d05 == '\0')) {
LAB_1801dd6c5:
        bVar14 = false;
      }
      else {
        if (((!bVar14) && (cVar7 = FUN_1801dbdf0(&local_res10,&local_88), cVar7 == '\0')) ||
           (cVar7 = FUN_1801dc2d0(&local_res10,&local_88), cVar7 != '\0')) {
          bVar12 = DAT_1809ee6b8;
          goto LAB_1801dd6c5;
        }
        if (DAT_181115088 < 0x14) {
          fVar19 = (float)CONCAT13(uStack_79,CONCAT21(uStack_7b,local_7c));
          pcVar13 = "trace";
          DAT_181115088 = DAT_181115088 + 1;
          if (bVar14) {
            pcVar13 = "prediction";
          }
          fVar19 = fStack_78 * fStack_78 + fVar19 * fVar19;
          if (fVar19 < 0.0) {
            fVar19 = (float)FUN_18051af10();
          }
          else {
            fVar19 = SQRT(fVar19);
          }
          FUN_1801ec960("tricks: leaving the ground at speed %.0f (%s)",(double)fVar19,pcVar13);
        }
        bVar14 = true;
        bVar12 = DAT_1809ee6b8;
      }
      lVar11 = local_88;
      uVar15 = DAT_180ca0990;
      uVar10 = (ulonglong)DAT_180ca0990;
      if (((*(byte *)(param_1 + 0x60) & 2) == 0) ||
         (((local_88 != 0 && (DAT_180ca0990 != 0)) &&
          (bVar8 = FUN_18000f3a0(uVar10 + 8 + local_88), (bVar8 >> 1 & 1) != 0)))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (cVar6 == '\0') {
        if (bVar14) {
          uVar16 = 2;
          if (local_res8 != '\0') {
            uVar16 = 4;
          }
          goto LAB_1801dd8e9;
        }
      }
      else {
        if (bVar14) {
          uVar16 = 3;
LAB_1801dd8e9:
          _DAT_1809ee6b0 = (ulonglong)uVar16;
          if ((lVar11 == 0) || (uVar15 == 0)) {
            DAT_1809ee6b8 = 0;
          }
          else {
            bVar8 = FUN_18000f3a0(uVar10 + 8 + lVar11);
            DAT_1809ee6b8 = bVar8 >> 1 & 1;
          }
          if (uVar16 != 2) {
            DAT_180ce9648 = 0x20;
            if ((uVar16 == 4) && (DAT_180920d0d != '\0')) {
              DAT_180cc3f99 = '\x01';
            }
            else {
              DAT_180cc3f99 = '\0';
            }
          }
          FUN_1801ec960("tricks: edge jump kind=%d when=%.4f",uVar16,0);
        }
        else {
          if (!bVar2) goto LAB_1801dd7f5;
          if ((((lVar11 == 0) || (uVar15 == 0)) ||
              (bVar8 = FUN_18000f3a0(uVar10 + 8 + lVar11), (bVar8 >> 1 & 1) == 0)) &&
             ((*(byte *)(param_1 + 0x60) & 4) == 0)) {
            DAT_1809ee6b8 = 0;
            fVar19 = 0.0;
          }
          else {
            DAT_1809ee6b8 = 1;
            fVar19 = DAT_1808ac00c;
          }
          _DAT_1809ee6b0 = CONCAT44(fVar19,5);
          FUN_1801ec960("tricks: mini jump on press when=%.4f",(double)fVar19);
        }
        bVar12 = DAT_1809ee6b8;
      }
LAB_1801dd7f5:
      bVar8 = (byte)local_80;
    }
  }
  else {
    bVar12 = DAT_1809ee6b8;
  }
LAB_1801dd803:
  if (DAT_1809ee6b0 == 1) {
    uVar18 = 0;
LAB_1801ddd87:
    DAT_180cc3f98 = FUN_1801ec770(param_1,lVar1,uVar18,bVar12);
    return;
  }
  if (DAT_1809ee6b0 == 2) {
    uVar18 = DAT_1809ee6b4;
    goto LAB_1801ddd87;
  }
  if (DAT_1809ee6b0 == 3) {
    DAT_180cc3f98 = FUN_1801ec770(param_1,lVar1,DAT_1809ee6b4,bVar12);
    fVar19 = DAT_1809ee6b4;
    FUN_1801ec5d0(lVar1,4);
    lVar11 = FUN_180265420(lVar1);
    if (lVar11 == 0) {
      DAT_181115098 = DAT_181115098 + 1;
      if (0x40 < (int)DAT_181115098) {
        uVar15 = DAT_181115098 & 0x8000003f;
        if ((int)uVar15 < 0) {
          uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
        }
        if (uVar15 != 0) goto LAB_1801ddd5f;
      }
      FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",4,"press",
                    (double)fVar19,*(undefined4 *)(lVar1 + 0x20));
    }
    else {
      *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 7;
      *(float *)(lVar11 + 0x24) = fVar19;
      *(undefined8 *)(lVar11 + 0x18) = 4;
      *(undefined1 *)(lVar11 + 0x20) = 1;
    }
LAB_1801ddd5f:
    *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) | 4;
    uVar10 = *(ulonglong *)(param_1 + 0x68) | _UNK_1808ad3d8;
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | _DAT_1808ad3d0;
    *(ulonglong *)(param_1 + 0x68) = uVar10;
    return;
  }
  if (DAT_1809ee6b0 == 4) {
    DAT_180cc3f98 = FUN_1801ec770(param_1,lVar1,DAT_1809ee6b4,bVar12);
    FUN_1801ec5d0(lVar1,4);
    *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffb;
    uVar15 = *(uint *)(param_1 + 100) & _UNK_1808adf54;
    uVar16 = *(uint *)(param_1 + 0x68) & _UNK_1808adf58;
    uVar17 = *(uint *)(param_1 + 0x6c) & _UNK_1808adf5c;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & _DAT_1808adf50;
    *(uint *)(param_1 + 100) = uVar15;
    *(uint *)(param_1 + 0x68) = uVar16;
    *(uint *)(param_1 + 0x6c) = uVar17;
    return;
  }
  if (DAT_1809ee6b0 != 5) {
    if (DAT_180ce9648 < 1) {
      return;
    }
    if ((bVar8 & 1) != 0) {
      return;
    }
    FUN_1801dc810(param_1,lVar1,DAT_180ce9648 == 0x1f,0);
    if (DAT_180cc3f99 == '\0') {
      return;
    }
    *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xffffffffffffffe7;
    uVar15 = *(uint *)(param_1 + 100) & _UNK_1808adf44;
    uVar16 = *(uint *)(param_1 + 0x68) & _UNK_1808adf48;
    uVar17 = *(uint *)(param_1 + 0x6c) & _UNK_1808adf4c;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & _DAT_1808adf40;
    *(uint *)(param_1 + 100) = uVar15;
    *(uint *)(param_1 + 0x68) = uVar16;
    *(uint *)(param_1 + 0x6c) = uVar17;
    *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 0xc0;
    *(undefined4 *)(lVar1 + 0x58) = 0;
    return;
  }
  FUN_1801ec5d0(lVar1,6);
  if (bVar12 != 0) {
    lVar11 = FUN_180265420(lVar1);
    if (lVar11 == 0) {
      DAT_181115098 = DAT_181115098 + 1;
      if (0x40 < (int)DAT_181115098) {
        uVar15 = DAT_181115098 & 0x8000003f;
        if ((int)uVar15 < 0) {
          uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
        }
        if (uVar15 != 0) goto LAB_1801dd9f4;
      }
      FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",2,"release",0,
                    *(undefined4 *)(lVar1 + 0x20));
    }
    else {
      *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 7;
      *(undefined8 *)(lVar11 + 0x18) = 2;
      *(undefined1 *)(lVar11 + 0x20) = 0;
      *(undefined4 *)(lVar11 + 0x24) = 0;
    }
LAB_1801dd9f4:
    lVar11 = FUN_180265420(lVar1);
    if (lVar11 == 0) {
      DAT_181115098 = DAT_181115098 + 1;
      if (0x40 < (int)DAT_181115098) {
        uVar15 = DAT_181115098 & 0x8000003f;
        if ((int)uVar15 < 0) {
          uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
        }
        if (uVar15 != 0) goto LAB_1801dda5d;
      }
      FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",4,"release",0,
                    *(undefined4 *)(lVar1 + 0x20));
    }
    else {
      *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 7;
      *(undefined8 *)(lVar11 + 0x18) = 4;
      *(undefined1 *)(lVar11 + 0x20) = 0;
      *(undefined4 *)(lVar11 + 0x24) = 0;
    }
  }
LAB_1801dda5d:
  fVar19 = DAT_1809ee6b4;
  lVar11 = FUN_180265420(lVar1);
  if (lVar11 == 0) {
    DAT_181115098 = DAT_181115098 + 1;
    if (0x40 < (int)DAT_181115098) {
      uVar15 = DAT_181115098 & 0x8000003f;
      if ((int)uVar15 < 0) {
        uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
      }
      if (uVar15 != 0) goto LAB_1801ddacf;
    }
    FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",4,"press",
                  (double)fVar19,*(undefined4 *)(lVar1 + 0x20));
  }
  else {
    *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 7;
    *(float *)(lVar11 + 0x24) = fVar19;
    *(undefined8 *)(lVar11 + 0x18) = 4;
    *(undefined1 *)(lVar11 + 0x20) = 1;
  }
LAB_1801ddacf:
  fVar19 = DAT_1809ee6b4;
  lVar11 = FUN_180265420(lVar1);
  if (lVar11 == 0) {
    DAT_181115098 = DAT_181115098 + 1;
    if (0x40 < (int)DAT_181115098) {
      uVar15 = DAT_181115098 & 0x8000003f;
      if ((int)uVar15 < 0) {
        uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
      }
      if (uVar15 != 0) goto LAB_1801ddb47;
    }
    FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",2,"press",
                  (double)fVar19,*(undefined4 *)(lVar1 + 0x20));
  }
  else {
    *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 7;
    *(float *)(lVar11 + 0x24) = fVar19;
    *(undefined8 *)(lVar11 + 0x18) = 2;
    *(undefined1 *)(lVar11 + 0x20) = 1;
  }
LAB_1801ddb47:
  fVar19 = DAT_1809ee6b4 + DAT_1808ac00c;
  if (DAT_1808ac314 < fVar19) {
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 6;
    *(ulonglong *)(param_1 + 0x68) = *(ulonglong *)(param_1 + 0x68) | 6;
    DAT_180cc3f98 = 1;
    return;
  }
  lVar11 = FUN_180265420(lVar1);
  if (lVar11 == 0) {
    DAT_181115098 = DAT_181115098 + 1;
    if (0x40 < (int)DAT_181115098) {
      uVar15 = DAT_181115098 & 0x8000003f;
      if ((int)uVar15 < 0) {
        uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
      }
      if (uVar15 != 0) goto LAB_1801ddbd2;
    }
    FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",4,"release",
                  (double)fVar19,*(undefined4 *)(lVar1 + 0x20));
  }
  else {
    *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 7;
    *(float *)(lVar11 + 0x24) = fVar19;
    *(undefined8 *)(lVar11 + 0x18) = 4;
    *(undefined1 *)(lVar11 + 0x20) = 0;
  }
LAB_1801ddbd2:
  lVar11 = FUN_180265420(lVar1);
  if (lVar11 != 0) {
    *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 7;
    *(float *)(lVar11 + 0x24) = fVar19;
    *(undefined8 *)(lVar11 + 0x18) = 2;
    *(undefined1 *)(lVar11 + 0x20) = 0;
LAB_1801ddc56:
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & 0xfffffffffffffff9;
    *(ulonglong *)(param_1 + 0x68) = *(ulonglong *)(param_1 + 0x68) | 6;
    DAT_180cc3f98 = 1;
    return;
  }
  DAT_181115098 = DAT_181115098 + 1;
  if (0x40 < (int)DAT_181115098) {
    uVar15 = DAT_181115098 & 0x8000003f;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
    }
    if (uVar15 != 0) goto LAB_1801ddc56;
  }
  FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",2,"release",
                (double)fVar19,*(undefined4 *)(lVar1 + 0x20));
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & 0xfffffffffffffff9;
  *(ulonglong *)(param_1 + 0x68) = *(ulonglong *)(param_1 + 0x68) | 6;
  DAT_180cc3f98 = 1;
  return;
}



/* ===== 1801dddb0 FUN_1801dddb0 ===== */

/* WARNING: Removing unreachable block (ram,0x0001801ddf29) */
/* WARNING: Removing unreachable block (ram,0x0001801ddf4e) */
/* WARNING: Removing unreachable block (ram,0x0001801ddf5f) */
/* WARNING: Removing unreachable block (ram,0x0001801ddfdb) */
/* WARNING: Removing unreachable block (ram,0x0001801ddf64) */
/* WARNING: Removing unreachable block (ram,0x0001801ddf80) */
/* WARNING: Removing unreachable block (ram,0x0001801ddf91) */
/* WARNING: Removing unreachable block (ram,0x0001801ddf97) */
/* WARNING: Removing unreachable block (ram,0x0001801ddfaf) */
/* WARNING: Removing unreachable block (ram,0x0001801ddfb4) */
/* WARNING: Removing unreachable block (ram,0x0001801ddfbf) */
/* WARNING: Removing unreachable block (ram,0x0001801ddfc2) */
/* WARNING: Removing unreachable block (ram,0x0001801ddfc9) */
/* WARNING: Removing unreachable block (ram,0x0001801ddfcf) */
/* WARNING: Removing unreachable block (ram,0x0001801ddfd9) */
/* WARNING: Removing unreachable block (ram,0x0001801ddfe4) */
/* WARNING: Removing unreachable block (ram,0x0001801de000) */
/* WARNING: Removing unreachable block (ram,0x0001801de004) */
/* WARNING: Removing unreachable block (ram,0x0001801de00f) */
/* WARNING: Removing unreachable block (ram,0x0001801de013) */
/* WARNING: Removing unreachable block (ram,0x0001801de023) */
/* WARNING: Removing unreachable block (ram,0x0001801de027) */
/* WARNING: Removing unreachable block (ram,0x0001801de03d) */
/* WARNING: Removing unreachable block (ram,0x0001801de041) */
/* WARNING: Removing unreachable block (ram,0x0001801de05d) */
/* WARNING: Removing unreachable block (ram,0x0001801de061) */
/* WARNING: Removing unreachable block (ram,0x0001801de06c) */
/* WARNING: Removing unreachable block (ram,0x0001801de070) */
/* WARNING: Removing unreachable block (ram,0x0001801de080) */
/* WARNING: Removing unreachable block (ram,0x0001801de084) */
/* WARNING: Removing unreachable block (ram,0x0001801de09d) */
/* WARNING: Removing unreachable block (ram,0x0001801de0a1) */
/* WARNING: Removing unreachable block (ram,0x0001801de0ba) */
/* WARNING: Removing unreachable block (ram,0x0001801de0be) */
/* WARNING: Removing unreachable block (ram,0x0001801de0c9) */
/* WARNING: Removing unreachable block (ram,0x0001801de0cd) */
/* WARNING: Removing unreachable block (ram,0x0001801de0dd) */
/* WARNING: Removing unreachable block (ram,0x0001801de0e1) */
/* WARNING: Removing unreachable block (ram,0x0001801de0f3) */
/* WARNING: Removing unreachable block (ram,0x0001801de0f7) */
/* WARNING: Removing unreachable block (ram,0x0001801de11c) */
/* WARNING: Removing unreachable block (ram,0x0001801de128) */
/* WARNING: Removing unreachable block (ram,0x0001801de130) */
/* WARNING: Removing unreachable block (ram,0x0001801de146) */
/* WARNING: Removing unreachable block (ram,0x0001801de153) */
/* WARNING: Removing unreachable block (ram,0x0001801de16b) */
/* WARNING: Removing unreachable block (ram,0x0001801de16f) */
/* WARNING: Removing unreachable block (ram,0x0001801de17a) */
/* WARNING: Removing unreachable block (ram,0x0001801de17e) */
/* WARNING: Removing unreachable block (ram,0x0001801de18e) */
/* WARNING: Removing unreachable block (ram,0x0001801de192) */
/* WARNING: Removing unreachable block (ram,0x0001801de1a4) */
/* WARNING: Removing unreachable block (ram,0x0001801de1a8) */
/* WARNING: Removing unreachable block (ram,0x0001801de1ac) */
/* WARNING: Removing unreachable block (ram,0x0001801de1b2) */
/* WARNING: Removing unreachable block (ram,0x0001801de1c1) */
/* WARNING: Removing unreachable block (ram,0x0001801de1c7) */
/* WARNING: Removing unreachable block (ram,0x0001801de1d6) */
/* WARNING: Removing unreachable block (ram,0x0001801de1e2) */
/* WARNING: Removing unreachable block (ram,0x0001801de1e7) */
/* WARNING: Removing unreachable block (ram,0x0001801de22a) */
/* WARNING: Removing unreachable block (ram,0x0001801de237) */
/* WARNING: Removing unreachable block (ram,0x0001801de1f1) */
/* WARNING: Removing unreachable block (ram,0x0001801de20f) */
/* WARNING: Removing unreachable block (ram,0x0001801de21f) */
/* WARNING: Removing unreachable block (ram,0x0001801de249) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801dddb0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong local_res8;
  
  if (((param_1 != 0) && (DAT_180920d0c != '\0')) && ((*(uint *)(param_1 + 0x60) & 0x803) == 0)) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res8);
      DAT_181108a00 = local_res8;
      local_res8 = FUN_1803a0c50(&local_res8);
      DAT_180cd1304 = '\x01';
    }
    else {
      local_res8 = DAT_1811089f8;
    }
    lVar1 = local_res8;
    DAT_1811089f8 = local_res8;
    if (((((local_res8 != 0) && (DAT_180ca09f0 != 0)) &&
         ((iVar3 = FUN_180011200((ulonglong)DAT_180ca09f0 + local_res8), iVar3 - 1U < 1000 &&
          ((DAT_180ca0a44 != 0 &&
           (cVar2 = FUN_180011220(lVar1 + (ulonglong)DAT_180ca0a44), cVar2 == '\x02')))))) &&
        (*(longlong *)(param_1 + 0x40) - 0x10000U < 0x7ffffffeffff)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) - 0x10000U < 0x7ffffffeffff)) {
      FUN_1801ec0c0(&local_res8);
    }
  }
  return;
}



/* ===== 1801de270 FUN_1801de270 ===== */

ulonglong FUN_1801de270(undefined8 *param_1)

{
  float fVar1;
  uint uVar2;
  ulonglong in_RAX;
  float fVar3;
  float extraout_XMM0_Da;
  float fVar4;
  float fVar5;
  
  fVar3 = (float)*param_1;
  fVar4 = (float)((ulonglong)*param_1 >> 0x20);
  fVar1 = *(float *)(param_1 + 1);
  fVar5 = fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1;
  if (fVar5 < 0.0) {
    in_RAX = FUN_18051af10(fVar5);
    fVar5 = extraout_XMM0_Da;
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  if ((DAT_1808abf8c < fVar5) &&
     (uVar2 = (uint)fVar5 & 0x7f800000,
     in_RAX = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000), uVar2 != 0x7f800000)) {
    fVar5 = DAT_1808ac34c / fVar5;
    *(float *)(param_1 + 1) = fVar1 * fVar5;
    *param_1 = CONCAT44(fVar4 * fVar5,fVar3 * fVar5);
    return in_RAX;
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 1801de330 FUN_1801de330 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801de330(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char **ppcVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_168 [32];
  float local_148;
  undefined8 local_140;
  float local_138;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  char *local_100 [3];
  char *local_e8 [22];
  
  local_e8[0] = (char *)(DAT_180919500 ^ (ulonglong)auStack_168);
  uVar8 = (ulonglong)local_e8[0];
  if ((((DAT_180920d85 == '\0') || (*param_3 == 0)) ||
      (uVar8 = (ulonglong)DAT_180ca0a44, DAT_180ca0a44 == 0)) ||
     ((uVar8 = FUN_180011220(*param_3 + uVar8), (char)uVar8 != '\t' ||
      ((DAT_180920d86 != '\0' && ((*(byte *)(param_1 + 0x60) & 2) != 0)))))) {
LAB_1801deb80:
    return uVar8 & 0xffffffffffffff00;
  }
  if ((DAT_180cc3f9a == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cc3f9a = '\x01';
    local_100[0] = "CCSPlayer_MovementServices";
    ppcVar14 = local_100;
    local_100[1] = "CPlayer_MovementServices_Humanoid";
    local_100[2] = "CPlayer_MovementServices";
    iVar5 = DAT_180ce9660;
    do {
      DAT_180ce9660 = iVar5;
      DAT_180ce9660 = FUN_18038eaf0(*ppcVar14,"m_vecLadderNormal");
      if (DAT_180ce9660 != 0) break;
      ppcVar14 = ppcVar14 + 1;
      iVar5 = 0;
    } while (ppcVar14 != local_100 + 3);
  }
  iVar5 = DAT_180ce9660;
  uVar8 = (ulonglong)DAT_180ca0970;
  if (((DAT_180ca0970 == 0) ||
      (uVar8 = FUN_18000f3a0((ulonglong)DAT_180ca0970 + *param_3), uVar8 == 0)) || (iVar5 == 0))
  goto LAB_1801deb80;
  puVar9 = (undefined8 *)FUN_1800111b0(&local_128);
  uVar1 = *puVar9;
  local_138 = *(float *)(puVar9 + 1);
  uVar7 = (uint)uVar1 & 0x7f800000;
  uVar8 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),uVar7 != 0x7f800000);
  if (uVar7 == 0x7f800000) goto LAB_1801deb80;
  local_140._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  uVar7 = (uint)local_140._4_4_ & 0x7f800000;
  uVar8 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),uVar7 != 0x7f800000);
  if ((uVar7 == 0x7f800000) ||
     (uVar7 = (uint)local_138 & 0x7f800000,
     uVar8 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),uVar7 != 0x7f800000), uVar7 == 0x7f800000))
  goto LAB_1801deb80;
  local_140 = uVar1;
  uVar8 = FUN_1801de270(&local_140);
  if ((char)uVar8 == '\0') goto LAB_1801deb80;
  local_130 = (float)FUN_180517790();
  fVar15 = (float)FUN_180517200();
  local_10c = fVar15;
  fVar16 = (float)FUN_180517790();
  local_148 = fVar16;
  fVar17 = (float)FUN_180517200();
  local_118 = fVar17;
  fVar18 = (float)FUN_180517790();
  local_110 = fVar18;
  fVar19 = (float)FUN_180517200();
  uVar7 = DAT_1808adec0;
  fVar26 = local_140._4_4_;
  fVar24 = (float)local_140;
  local_128 = (float)((uint)local_140._4_4_ ^ DAT_1808adec0);
  local_124 = (float)local_140;
  local_120 = 0.0;
  local_114 = fVar19;
  uVar8 = FUN_1801de270(&local_128);
  fVar28 = DAT_1808acda0;
  fVar4 = DAT_1808ac34c;
  if ((char)uVar8 == '\0') goto LAB_1801deb80;
  fVar20 = (float)((uint)local_130 ^ uVar7);
  fVar27 = *(float *)(param_2 + 0x58);
  local_108 = fVar16 * fVar15;
  fVar17 = fVar17 * fVar15;
  fVar15 = *(float *)(param_2 + 0x5c);
  fVar16 = local_120 * fVar26 - local_124 * local_138;
  fVar25 = local_124 * fVar24 - local_128 * fVar26;
  fVar23 = local_128 * local_138 - local_120 * fVar24;
  fVar19 = fVar15 * (fVar18 * local_130 * local_118 - fVar19 * local_148) + fVar27 * fVar17;
  fVar18 = fVar15 * (fVar18 * local_130 * local_148 + local_114 * local_118) + fVar27 * local_108;
  fVar27 = fVar15 * local_110 * local_10c + fVar27 * fVar20;
  fVar15 = fVar18 * fVar26 + fVar19 * fVar24 + fVar27 * local_138;
  local_148 = (fVar27 - fVar15 * local_138) - fVar25 * fVar15;
  if (((float)((uint)local_148 & _DAT_1808ade90) <= DAT_1808ac118) ||
     ((float)((uint)local_148 & _DAT_1808ade90) <
      (float)((uint)((fVar18 - fVar15 * fVar26) - fVar23 * fVar15) & _DAT_1808ade90) +
      (float)((uint)((fVar19 - fVar15 * fVar24) - fVar16 * fVar15) & _DAT_1808ade90)))
  goto LAB_1801deb80;
  fVar24 = fVar23 * local_108 + fVar16 * fVar17 + fVar25 * fVar20;
  fVar26 = local_124 * local_108 + local_128 * fVar17 + local_120 * fVar20;
  bVar2 = 0.0 < local_148;
  if (0.0 < fVar24) {
    fVar15 = DAT_1808ac34c;
  }
  else {
    fVar15 = DAT_1808acda0;
  }
  if (0.0 < fVar26 == 0.0 < fVar24) {
    fVar17 = DAT_1808acda0;
  }
  else {
    fVar17 = DAT_1808ac34c;
  }
  fVar23 = fVar23 * fVar15;
  fVar16 = fVar16 * fVar15;
  local_138 = fVar23 * fVar17 * local_128 - fVar17 * local_124 * fVar16;
  local_140 = CONCAT44(fVar17 * local_120 * fVar16 - fVar25 * fVar15 * fVar17 * local_128,
                       fVar17 * local_124 * fVar25 * fVar15 - fVar17 * local_120 * fVar23);
  local_130 = fVar20;
  uVar8 = FUN_1801de270(&local_140);
  if ((char)uVar8 == '\0') goto LAB_1801deb80;
  if (fVar16 * fVar16 + fVar23 * fVar23 < 0.0) {
    FUN_18051af10();
  }
  fVar18 = (float)FUN_180516b00();
  fVar16 = DAT_1808aca98;
  fVar18 = fVar18 * DAT_1808aca98;
  fVar19 = (float)FUN_180516b00();
  if (((uint)(fVar19 * fVar16 - fVar17) & 0x7f800000) == 0x7f800000) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = (float)FUN_180516750();
  }
  uVar7 = (uint)(fVar18 + fVar15) & 0x7f800000;
  uVar8 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),uVar7 != 0x7f800000);
  if ((uVar7 == 0x7f800000) ||
     (uVar7 = (uint)fVar16 & 0x7f800000,
     uVar8 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),uVar7 != 0x7f800000), uVar7 == 0x7f800000))
  goto LAB_1801deb80;
  bVar3 = 0.0 < local_148;
  cVar6 = (char)DAT_180920d88;
  if (cVar6 == '\0') {
    fVar15 = (float)FUN_180516750();
    if (((*(longlong *)(param_2 + 0x40) != 0) && (cVar6 = FUN_1801eca30(), cVar6 != '\0')) &&
       (((uint)fVar15 & 0x7f800000) != 0x7f800000)) {
      fVar15 = fVar15 - *(float *)(*(longlong *)(param_2 + 0x40) + 0x18);
      if (((uint)(fVar16 - *(float *)(*(longlong *)(param_2 + 0x40) + 0x1c)) & 0x7f800000) ==
          0x7f800000) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_180516750();
      }
      if (((float)((uint)fVar15 & _DAT_1808ade90) < DAT_1808ac000) &&
         ((float)(uVar7 & _DAT_1808ade90) < DAT_1808ac000)) goto LAB_1801deac6;
      if ((*(int *)(param_2 + 0x20) < 0x20) && (lVar10 = FUN_180265420(param_2), lVar10 != 0)) {
        *(uint *)(lVar10 + 0x10) = *(uint *)(lVar10 + 0x10) | 0x67;
        *(float *)(lVar10 + 0x30) = fVar15;
        *(uint *)(lVar10 + 0x34) = uVar7;
        *(undefined4 *)(lVar10 + 0x24) = 0x3f800000;
        goto LAB_1801deac6;
      }
    }
    cVar6 = (char)DAT_180920d88;
  }
  FUN_180516750();
  FUN_1801ec3f0(param_1);
  if (cVar6 == '\0') {
    DAT_180ceb098 = 2;
  }
LAB_1801deac6:
  FUN_180516750();
  uVar8 = *(ulonglong *)(param_2 + 0x40);
  *(undefined4 *)(uVar8 + 0x20) = 0;
  fVar15 = fVar4;
  if (0.0 < fVar26 != bVar3) {
    fVar15 = fVar28;
  }
  if (0.0 < fVar24 == bVar2) {
    fVar28 = fVar4;
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0xc0;
  *(float *)(param_2 + 0x58) = fVar28;
  *(float *)(param_2 + 0x5c) = fVar15;
  if (param_1 != 0) {
    *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffff9e7;
    auVar22._0_4_ = *(uint *)(param_1 + 0x60) & _DAT_1808adf30;
    auVar22._4_4_ = *(uint *)(param_1 + 100) & _UNK_1808adf34;
    auVar22._8_4_ = *(uint *)(param_1 + 0x68) & _UNK_1808adf38;
    auVar22._12_4_ = *(uint *)(param_1 + 0x6c) & _UNK_1808adf3c;
    uVar13 = 0;
    if (0.0 < local_148) {
      uVar13 = 0x200;
    }
    uVar11 = 0;
    if (0.0 < fVar26) {
      uVar11 = 0x200;
    }
    uVar12 = 0;
    if (0.0 < local_148) {
      uVar12 = 8;
    }
    uVar8 = 0;
    if (0.0 < fVar24) {
      uVar8 = 8;
    }
    uVar13 = (uVar13 ^ uVar11) + 0x200 | (uVar12 ^ uVar8) + 8;
    *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) | uVar13;
    auVar21._8_8_ = uVar13;
    auVar21._0_8_ = uVar13;
    *(undefined1 (*) [16])(param_1 + 0x60) = auVar22 | auVar21;
  }
  return CONCAT71((int7)(uVar8 >> 8),1);
}



/* ===== 1801debf0 FUN_1801debf0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801debf0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  
  if ((DAT_180920d9d != '\0') && ((*(byte *)(param_3 + 8) & 1) == 0)) {
    if ((DAT_180920da4 != '\0') && ((*(ulonglong *)(param_1 + 0x60) & 0x18) != 0)) {
      *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & 0xffffffffffffffe7;
      uVar6 = *(uint *)(param_1 + 0x6c) & _UNK_1808adf44;
      uVar7 = *(uint *)(param_1 + 0x70) & _UNK_1808adf48;
      uVar8 = *(uint *)(param_1 + 0x74) & _UNK_1808adf4c;
      *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & _DAT_1808adf40;
      *(uint *)(param_1 + 0x6c) = uVar6;
      *(uint *)(param_1 + 0x70) = uVar7;
      *(uint *)(param_1 + 0x74) = uVar8;
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0xc0;
      *(undefined4 *)(param_2 + 0x58) = 0;
    }
    uVar3 = DAT_1809ee6f0;
    uVar1 = *(ulonglong *)(param_1 + 0x60);
    if (((uVar1 & 0x600) != 0) && (DAT_1809ee6e8 != '\0')) {
      if (DAT_1809ee6e9 == '\0') {
        if (DAT_1809ee6f0 != 0) {
          *(ulonglong *)(param_1 + 0x68) = *(ulonglong *)(param_1 + 0x68) & 0xfffffffffffff9ff;
          *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffff9ff;
          *(ulonglong *)(param_1 + 0x60) = uVar1 & 0xfffffffffffff9ff;
          if (uVar3 != 0) {
            *(ulonglong *)(param_1 + 0x68) = *(ulonglong *)(param_1 + 0x68) | uVar3;
            *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) | uVar3;
            *(ulonglong *)(param_1 + 0x60) = uVar1 & 0xfffffffffffff9ff | uVar3;
          }
          uVar2 = DAT_1808acda0;
          uVar5 = DAT_1808ac34c;
          if (DAT_1809ee6f0 == 0x200) {
            *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0xc0;
            *(undefined4 *)(param_2 + 0x5c) = uVar5;
            return;
          }
          *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0xc0;
          *(undefined4 *)(param_2 + 0x5c) = uVar2;
          return;
        }
      }
      else {
        fVar4 = *(float *)(*(longlong *)(param_2 + 0x40) + 0x1c) - DAT_1809ee6e4;
        if (((uint)fVar4 & 0x7f800000) == 0x7f800000) {
          fVar4 = 0.0;
        }
        else {
          fVar4 = (float)FUN_180516750(fVar4,DAT_1808acbd0);
        }
        fVar9 = DAT_180920da0;
        if (DAT_180920da0 <= 0.0) {
          fVar9 = 0.0;
        }
        if ((fVar9 <= (float)((uint)fVar4 & _DAT_1808ade90)) &&
           ((float)((uint)fVar4 & _DAT_1808ade90) <= DAT_1808acaf4)) {
          uVar3 = 0x400;
          if (0.0 < fVar4) {
            uVar3 = 0x200;
          }
          if (((uint)uVar1 & 0x600) != uVar3) {
            DAT_1809ee6f0 = uVar3;
            *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & 0xfffffffffffff9ff;
            *(ulonglong *)(param_1 + 0x68) = *(ulonglong *)(param_1 + 0x68) & 0xfffffffffffff9ff;
            *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffff9ff;
            *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | uVar3;
            *(ulonglong *)(param_1 + 0x68) = *(ulonglong *)(param_1 + 0x68) | uVar3;
            *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) | uVar3;
            if (fVar4 <= 0.0) {
              uVar5 = DAT_1808acda0;
            }
            else {
              uVar5 = DAT_1808ac34c;
            }
            *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0xc0;
            *(undefined4 *)(param_2 + 0x5c) = uVar5;
          }
        }
      }
    }
  }
  return;
}



/* ===== 1801dee00 FUN_1801dee00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801dee00(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  longlong local_res8;
  undefined8 local_58;
  uint local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (0x7ffffffefffe < lVar1 - 0x10000U) {
    return;
  }
  if (0x7ffffffefffe < *(longlong *)(lVar1 + 0x40) - 0x10000U) {
    return;
  }
  DAT_1809ee6e9 = *(longlong *)(param_1 + 8) != DAT_1809ee6d8;
  if ((bool)DAT_1809ee6e9) {
    if (DAT_1809ee6d8 != -1) {
      DAT_1809ee6e4 = DAT_1809ee6e0;
      DAT_1809ee6e8 = '\x01';
    }
    DAT_1809ee6d8 = *(longlong *)(param_1 + 8);
    DAT_1809ee6ea = '\0';
    DAT_1809ee6f0 = 0;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = local_res8;
    DAT_1811089f8 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  local_58 = 0;
  local_50 = 0;
  uVar9 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_24 = 0x437a0000;
  local_4c = 0;
  uStack_44 = 0;
  local_3c = 0;
  uStack_34 = 0;
  if ((DAT_1811089f8 == 0) || (DAT_180ca09f0 == 0)) goto LAB_1801df0fc;
  local_res8 = DAT_1811089f8;
  iVar4 = FUN_180011200((ulonglong)DAT_180ca09f0 + DAT_1811089f8);
  if ((999 < iVar4 - 1U) || (cVar3 = FUN_1801ec0c0(&local_res8,&local_58), cVar3 == '\0'))
  goto LAB_1801df0fc;
  cVar3 = FUN_1801de330(param_1,lVar1,&local_res8);
  if ((((DAT_180cc3f9c == '\0') && (DAT_180cc4129 == '\0')) && (DAT_180cc3f9e == '\0')) &&
     (DAT_180960e5c == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (cVar3 != '\0' || bVar2) goto LAB_1801df0fc;
  if (((DAT_180920d90 != '\0') && (DAT_1809ee6e8 != '\0')) &&
     ((DAT_180920d9c == '\0' || ((local_50 & 1) == 0)))) {
    if (DAT_1809ee6e9 == '\0') {
      if (DAT_1809ee6ea != '\0') {
LAB_1801df0d8:
        FUN_1801ec3f0(param_1,*(undefined4 *)(*(longlong *)(lVar1 + 0x40) + 0x18),DAT_1809ee6ec,1);
      }
    }
    else {
      fVar5 = *(float *)(*(longlong *)(lVar1 + 0x40) + 0x1c) - DAT_1809ee6e4;
      if (((uint)fVar5 & 0x7f800000) == 0x7f800000) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = (float)FUN_180516750(fVar5,DAT_1808acbd0);
      }
      fVar8 = (float)((uint)fVar5 & _DAT_1808ade90);
      if (fVar8 <= DAT_1808acaf4) {
        fVar7 = DAT_180920d94;
        if (DAT_180920d94 <= 0.0) {
          fVar7 = 0.0;
        }
        if (fVar7 < fVar8) {
          fVar6 = DAT_180920d98;
          if (DAT_180920d98 <= DAT_1808ac34c) {
            fVar6 = DAT_1808ac34c;
          }
          fVar7 = (fVar8 - fVar7) / fVar6 + fVar7;
          if (fVar5 < 0.0) {
            fVar7 = (float)((uint)fVar7 ^ DAT_1808adec0);
          }
          if (((uint)(fVar7 + DAT_1809ee6e4) & 0x7f800000) != 0x7f800000) {
            uVar9 = FUN_180516750(fVar7 + DAT_1809ee6e4,DAT_1808acbd0);
          }
          DAT_1809ee6ea = '\x01';
          DAT_1809ee6ec = uVar9;
          goto LAB_1801df0d8;
        }
      }
    }
  }
  FUN_1801debf0(param_1,lVar1,&local_58);
LAB_1801df0fc:
  DAT_1809ee6e0 = (float)*(undefined4 *)(*(longlong *)(lVar1 + 0x40) + 0x1c);
  return;
}



/* ===== 1801df120 FUN_1801df120 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801df120(longlong *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  char cVar8;
  uint uVar9;
  ulonglong in_RAX;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_158;
  undefined4 local_150;
  float local_148;
  float local_144;
  undefined4 local_140;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined4 local_e8;
  
  uVar9 = (uint)DAT_180ca09b0;
  if ((((*param_1 != 0) && (in_RAX = (ulonglong)DAT_180ca0a3c, DAT_180ca0a3c != 0)) &&
      ((uint)DAT_180ca09b0 != 0)) &&
     (uVar13 = (ulonglong)DAT_180ca09b0._4_4_, DAT_180ca09b0._4_4_ != 0)) {
    lVar10 = FUN_18000f3a0(*param_1 + in_RAX);
    in_RAX = 0x7ffffffefffe;
    if (lVar10 - 0x10000U < 0x7ffffffeffff) {
      puVar11 = (undefined8 *)FUN_1800111b0(&local_138,(ulonglong)uVar9 + lVar10);
      local_128 = *puVar11;
      fVar15 = *(float *)(puVar11 + 1);
      local_120 = fVar15;
      puVar11 = (undefined8 *)FUN_1800111b0(&local_148,lVar10 + uVar13);
      local_138 = *puVar11;
      local_130 = *(float *)(puVar11 + 1);
      uVar9 = (uint)fVar15 & 0x7f800000;
      in_RAX = (ulonglong)CONCAT31((int3)(uVar9 >> 8),uVar9 != 0x7f800000);
      if (((uVar9 != 0x7f800000) &&
          (uVar9 = (uint)local_130 & 0x7f800000,
          in_RAX = (ulonglong)CONCAT31((int3)(uVar9 >> 8),uVar9 != 0x7f800000), uVar9 != 0x7f800000)
          ) && (fVar15 < local_130)) {
        if (((*param_1 == 0) || (DAT_180ca09f8 == 0)) ||
           ((lVar10 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + *param_1), lVar10 == 0 ||
            (DAT_180ca0950 == 0)))) {
          fVar15 = 0.0;
          local_150 = 0;
          local_158 = 0;
        }
        else {
          puVar11 = (undefined8 *)FUN_1800111b0(&local_148,lVar10 + (ulonglong)DAT_180ca0950);
          local_158 = *puVar11;
          fVar15 = (float)local_158;
          local_150 = *(undefined4 *)(puVar11 + 1);
        }
        uVar9 = _DAT_1808ade90;
        uVar5 = _UNK_1808ad2c8;
        uVar4 = _DAT_1808ad2c0;
        fVar3 = DAT_1808ac34c;
        fVar2 = DAT_1808ac254;
        fVar1 = DAT_1808ac000;
        uVar13 = 0;
        iVar12 = 0;
        fVar17 = DAT_1808ac540;
        while( true ) {
          uVar6 = local_150;
          fVar14 = (float)FUN_180517200();
          local_148 = fVar14 + fVar14 + fVar15;
          fVar15 = (float)FUN_180517790();
          local_144 = fVar15 + fVar15 + local_158._4_4_;
          local_118 = uVar4;
          uStack_110 = uVar5;
          local_f8 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_f0 = 0;
          local_ec = 0;
          local_e8 = 0x3f800000;
          local_140 = uVar6;
          cVar8 = FUN_1802aed00(&local_158,&local_148,&local_128,&local_138,*param_1,0x1c1003,4,7,
                                &local_118,0);
          if ((((cVar8 != '\0') && (local_ec._1_1_ == '\0')) && ((char)local_ec == '\0')) &&
             ((fVar15 = (float)local_118, (float)local_118 < fVar3 &&
              ((float)((uint)uStack_100 & uVar9) < fVar2)))) {
            fVar7 = local_108._4_4_;
            fVar14 = (float)local_108;
            fVar16 = local_108._4_4_ * local_108._4_4_ + (float)local_108 * (float)local_108;
            if (fVar16 < 0.0) {
              fVar16 = (float)FUN_18051af10();
            }
            else {
              fVar16 = SQRT(fVar16);
            }
            if ((fVar1 <= fVar16) && (fVar15 < fVar17)) {
              uVar13 = 1;
              *param_2 = fVar14 / fVar16;
              *param_3 = fVar7 / fVar16;
              fVar17 = fVar15;
            }
          }
          iVar12 = iVar12 + 1;
          if (0xf < iVar12) break;
          fVar15 = (float)local_158;
        }
        return uVar13;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 1801df4f0 FUN_1801df4f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801df4f0(undefined8 param_1,float param_2,undefined8 param_3,float param_4,float param_5,
                  char param_6,float param_7,float *param_8,undefined8 param_9)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float local_res8 [2];
  float local_res10 [6];
  
  fVar7 = DAT_1808ac9e4;
  if (param_6 == '\0') {
    fVar8 = DAT_1808ac9e0;
  }
  else {
    fVar8 = DAT_1808ac9e8;
  }
  if (DAT_1809ee700 == 0) {
    if (DAT_1809ee708 == '\0') {
      DAT_1809ee700 = FUN_180264b70(PTR_s_sv_air_max_wishspeed_1809ee6f8);
      DAT_1809ee708 = DAT_1809ee700 == 0;
      if (DAT_1809ee700 != 0) goto LAB_1801df58c;
    }
  }
  else {
LAB_1801df58c:
    local_res8[0] = (float)FUN_180264d70(DAT_1809ee700);
    fVar12 = local_res8[0];
    if (((uint)local_res8[0] & 0x7f800000) != 0x7f800000) goto LAB_1801df5bd;
  }
  fVar12 = fVar7;
LAB_1801df5bd:
  fVar3 = param_5;
  fVar2 = DAT_1808acda0;
  fVar11 = DAT_1808ac34c;
  if (DAT_1808acaa8 <= param_5) {
    local_res10[0] = 1.0;
    param_5 = -1.0;
    local_res8[0] = ((fVar8 * fVar12) / fVar7) / fVar3;
    pfVar5 = &param_5;
    if (DAT_1808acda0 <= local_res8[0]) {
      pfVar5 = local_res8;
    }
    pfVar4 = local_res10;
    if (local_res8[0] <= DAT_1808ac34c) {
      pfVar4 = pfVar5;
    }
    uVar6 = FUN_18051acf0(*pfVar4);
  }
  else {
    uVar6 = DAT_1808ac0fc;
  }
  if (param_6 == '\0') {
    fVar11 = fVar2;
  }
  fVar7 = (float)FUN_180517790(uVar6);
  fVar8 = (float)FUN_180517200(uVar6);
  fVar8 = (float)FUN_180516b00(fVar11 * param_2 * fVar8 + fVar7 * param_4);
  fVar7 = DAT_1808acaf4;
  fVar8 = fVar8 * DAT_1808aca94;
  uVar9 = 0;
  if (((uint)(fVar8 - DAT_1808acaf4) & 0x7f800000) == 0x7f800000) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = (float)FUN_180516750();
  }
  fVar8 = fVar8 + fVar7;
  if (((uint)fVar8 & 0x7f800000) == 0x7f800000) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)FUN_180516750(fVar8);
  }
  fVar8 = param_7;
  if (((uint)(fVar12 - param_7) & 0x7f800000) == 0x7f800000) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_180516750();
  }
  fVar11 = (float)(uVar10 & _DAT_1808ade90);
  if (((uint)(fVar7 - fVar8) & 0x7f800000) != 0x7f800000) {
    uVar9 = FUN_180516750();
  }
  bVar1 = fVar11 <= (float)(uVar9 & _DAT_1808ade90);
  *(bool *)param_9 = bVar1;
  if (bVar1) {
    *param_8 = fVar12;
  }
  else {
    *param_8 = fVar7;
  }
  return;
}



/* ===== 1801df800 FUN_1801df800 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801df800(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 auStack_118 [32];
  undefined1 local_f8 [4];
  undefined4 local_f4;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined **local_88;
  undefined4 *local_80;
  undefined1 *local_78;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_118;
  local_f8[0] = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_d4 = 0;
  uVar8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if ((*param_2 != 0) && (DAT_180ca09f8 != 0)) {
    lVar3 = FUN_18000f3a0(*param_2 + (ulonglong)DAT_180ca09f8);
    if ((lVar3 != 0) && (DAT_180ca0950 != 0)) {
      puVar4 = (undefined4 *)FUN_1800111b0(local_98,lVar3 + (ulonglong)DAT_180ca0950);
      local_ec = *puVar4;
      local_e8 = puVar4[1];
      local_e4 = puVar4[2];
      goto LAB_1801df8b8;
    }
  }
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
LAB_1801df8b8:
  if ((*param_2 == 0) || (DAT_180ca0a1c == 0)) {
    local_dc = 0;
    local_d8 = 0;
  }
  else {
    puVar4 = (undefined4 *)FUN_1800111b0(local_98,*param_2 + (ulonglong)DAT_180ca0a1c);
    uVar8 = *puVar4;
    local_dc = puVar4[1];
    local_d8 = puVar4[2];
  }
  local_88 = std::
             _Func_impl_no_alloc<`int___cdecl_pixelsurf::_anon_8FE86C00::surf_ticks(sdk::usercmd*___ptr64,sdk::entity_const&___ptr64,float,bool)'::`2'::<lambda_1>,bool,int,prediction::sim_input&___ptr64>
             ::vftable;
  local_80 = local_res18;
  local_78 = local_res20;
  local_50 = &local_88;
  local_e0 = uVar8;
  iVar2 = FUN_1801d95d0(param_1,3,&local_88,&DAT_180ce9670);
  if (local_50 != (undefined ***)0x0) {
    (*(code *)(*local_50)[4])(local_50,local_50 != &local_88);
  }
  uVar7 = 0;
  if (0 < iVar2) {
    do {
      if ((int)uVar7 == 0) {
        puVar5 = local_f8;
      }
      else {
        puVar5 = (undefined1 *)(uVar7 * 0x60 + 0x180ce9610);
      }
      cVar1 = FUN_1801e22c0(puVar5,&DAT_180ce9670 + uVar7 * 0x60);
    } while ((cVar1 != '\0') &&
            (uVar6 = (int)uVar7 + 1, uVar7 = (ulonglong)uVar6, (int)uVar6 < iVar2));
  }
  return uVar7;
}



/* ===== 1801df9d0 FUN_1801df9d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801df9d0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  float *pfVar9;
  int *piVar10;
  float *pfVar11;
  float **ppfVar12;
  ulonglong uVar13;
  int iVar14;
  float extraout_XMM0_Da;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_178 [32];
  double local_158;
  undefined1 local_150;
  undefined4 local_148;
  float *local_140;
  char *local_138;
  char local_128 [4];
  undefined1 local_124;
  undefined1 local_123;
  undefined1 local_122 [2];
  float local_120;
  float local_11c;
  float local_118 [2];
  uint local_110 [2];
  undefined2 local_107;
  undefined1 local_105;
  undefined4 local_ff;
  undefined2 local_fb;
  undefined1 local_f9;
  float *local_f8 [24];
  
  fVar19 = DAT_1808ac34c;
  pfVar9 = (float *)(DAT_180919500 ^ (ulonglong)auStack_178);
  lVar2 = *(longlong *)(param_1 + 8);
  local_f8[4] = pfVar9;
  if (lVar2 != DAT_1809ee750) {
    _DAT_1809ee759 = local_107;
    DAT_1809ee75b = local_105;
    _DAT_1809ee761 = local_ff;
    _DAT_1809ee765 = local_fb;
    pfVar9 = (float *)0x0;
    DAT_1809ee767 = local_f9;
    DAT_1809ee758 = '\0';
    DAT_1809ee75c = 0.0;
    DAT_1809ee760 = '\0';
    DAT_1809ee750 = lVar2;
    if ((*param_3 == 0) || (pfVar9 = (float *)(ulonglong)DAT_180ca0a1c, DAT_180ca0a1c == 0)) {
      fVar18 = 0.0;
      fVar17 = 0.0;
      fVar16 = 0.0;
    }
    else {
      pfVar9 = (float *)FUN_1800111b0(local_110,*param_3 + (longlong)pfVar9);
      fVar18 = *pfVar9;
      fVar17 = pfVar9[1];
      fVar16 = pfVar9[2];
    }
    fVar15 = fVar17 * fVar17 + fVar18 * fVar18;
    if (fVar15 < 0.0) {
      pfVar9 = (float *)FUN_18051af10(fVar15);
      fVar15 = extraout_XMM0_Da;
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    fVar4 = DAT_1808acdf4;
    fVar3 = DAT_1808ac080;
    if (fVar15 < fVar19) goto LAB_1801dff21;
    fVar19 = (float)((uint)(fVar16 + _DAT_1808ac7c4) & (uint)_DAT_1808ade90);
    if ((fVar19 < DAT_1808ac080) ||
       (((DAT_1808ace14 <= fVar16 && (fVar16 <= DAT_1808acdf4)) ||
        (iVar14 = 2, (float)((uint)fVar16 & (uint)_DAT_1808ade90) <= DAT_1808ac1f4)))) {
      iVar14 = 8;
    }
    local_11c = 0.0;
    local_120 = 0.0;
    local_118[0] = fVar15;
    pfVar9 = (float *)FUN_1801df120(param_3,&local_11c,&local_120);
    fVar20 = local_11c;
    if ((char)pfVar9 == '\0') {
      if (DAT_180ce9790 != '\0') {
        DAT_180ce979c = DAT_180ce979c + 1;
        pfVar9 = (float *)(ulonglong)DAT_180ce979c;
        if ((int)DAT_180ce979c <= iVar14) {
          local_11c = DAT_180ce9798;
          fVar15 = DAT_180ce9798;
          fVar20 = DAT_180ce9794;
          goto LAB_1801dfc6f;
        }
      }
      local_110[0] = local_110[0] & 0xffffff00;
      _DAT_180ce9790 = local_110[0];
      _DAT_180ce9794 = 0;
      DAT_180ce979c = 0;
      goto LAB_1801dff21;
    }
    local_11c = local_120;
    if (DAT_180ce9790 == '\0') {
      local_158 = (double)fVar16;
      FUN_1801ec960("pixelsurf contact: wall (%.2f %.2f) speed %.0f vz %.2f",(double)fVar20,
                    (double)local_120,(double)fVar15);
    }
    local_110[0] = CONCAT31(local_110[0]._1_3_,1);
    _DAT_180ce9790 = local_110[0];
    _DAT_180ce9794 = CONCAT44(local_120,fVar20);
    DAT_180ce979c = 0;
    fVar15 = local_120;
LAB_1801dfc6f:
    fVar6 = local_118[0];
    local_120 = fVar20;
    if (fVar17 * fVar20 + fVar18 * (float)((uint)fVar15 ^ DAT_1808adec0) < 0.0) {
      local_120 = (float)((uint)fVar20 ^ DAT_1808adec0);
    }
    if ((fVar19 < fVar3) || ((DAT_1808ace14 <= fVar16 && (fVar16 <= fVar4)))) {
      local_124 = 1;
      local_123 = 0;
    }
    else {
      local_124 = 0;
      local_123 = 1;
    }
    pfVar11 = (float *)&local_124;
    iVar14 = -1;
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x1c);
    do {
      local_138 = local_128;
      local_118[0] = 0.0;
      local_140 = local_118;
      local_128[0] = '\0';
      local_150 = *(undefined1 *)pfVar11;
      local_158 = (double)CONCAT44(local_158._4_4_,fVar6);
      local_148 = uVar1;
      FUN_1801df4f0(fVar20,fVar15);
      cVar7 = FUN_1801d7bc0();
      fVar19 = local_118[0];
      cVar5 = local_128[0];
      if (cVar7 == '\0') {
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_1801df800(param_1,param_3);
      }
      if (iVar14 < iVar8) {
        DAT_1809ee75c = fVar19;
        DAT_1809ee758 = '\x01';
        DAT_1809ee760 = cVar5;
        iVar14 = iVar8;
      }
      pfVar9 = (float *)local_122;
      pfVar11 = (float *)((longlong)pfVar11 + 1);
      fVar15 = local_11c;
    } while (pfVar11 != pfVar9);
  }
  cVar5 = DAT_180920d20;
  fVar19 = DAT_1808ac34c;
  if (DAT_1809ee758 != '\0') {
    FUN_1801ec3f0(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x18));
    if (cVar5 != '\0') {
      DAT_180ceb098 = 2;
    }
    piVar10 = *(int **)(param_2 + 0x28);
    if (((piVar10 != (int *)0x0) && (0 < *(int *)(param_2 + 0x20))) &&
       (*(int *)(param_2 + 0x20) <= *piVar10)) {
      iVar14 = 0;
      do {
        lVar2 = *(longlong *)(piVar10 + (longlong)iVar14 * 2 + 2);
        if (lVar2 != 0) {
          *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) & 0xffffffe7;
          *(undefined8 *)(lVar2 + 0x28) = 0;
          piVar10 = *(int **)(param_2 + 0x28);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(param_2 + 0x20));
    }
    if (DAT_1809ee760 == '\0') {
      fVar19 = DAT_1808acda0;
    }
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0xc0;
    ppfVar12 = local_f8;
    *(float *)(param_2 + 0x5c) = fVar19;
    uVar13 = 0x400;
    local_f8[2] = (float *)0x200;
    local_f8[3] = (float *)0x400;
    *(undefined4 *)(param_2 + 0x58) = 0;
    local_f8[0] = (float *)0x8;
    local_f8[1] = (float *)0x10;
    do {
      FUN_1801ec5d0(param_2,*ppfVar12);
      ppfVar12 = ppfVar12 + 1;
    } while (ppfVar12 != local_f8 + 4);
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & 0xfffffffffffff9e7;
    if (DAT_1809ee760 != '\0') {
      uVar13 = 0x200;
    }
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | uVar13;
    *(ulonglong *)(param_1 + 0x68) = *(ulonglong *)(param_1 + 0x68) | 0x618;
    return CONCAT71((int7)((ulonglong)(local_f8 + 4) >> 8),1);
  }
LAB_1801dff21:
  return (ulonglong)pfVar9 & 0xffffffffffffff00;
}



/* ===== 1801dff30 FUN_1801dff30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801dff30(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  byte *pbVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  longlong local_res8;
  undefined4 local_res10 [2];
  uint local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  byte local_94;
  undefined1 local_93;
  undefined2 uStack_92;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined2 local_87;
  byte local_85;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar13 = 0;
  DAT_180cc3f9c = 0;
  if (DAT_180920d0e == 0) {
    _DAT_1809ee721 = local_70._1_2_;
    DAT_1809ee723 = local_70._3_1_;
    _DAT_1809ee736 = local_5c._2_2_;
    _DAT_1809ee745 = local_4c._1_2_;
    DAT_1809ee747 = local_4c._3_1_;
    _DAT_1809ee74c = local_44;
    DAT_1809ee718 = -1;
    DAT_1809ee720 = DAT_180920d0e;
    _DAT_1809ee724 = 0xffffffff;
    _DAT_1809ee728 = 0;
    _DAT_1809ee730 = 0.0;
    _DAT_1809ee734 = 0;
    _DAT_1809ee738 = 0;
    _DAT_1809ee73c = 0x437a0000;
    _DAT_1809ee740 = 0x3f800000;
    DAT_1809ee744 = DAT_180920d0e;
    DAT_1809ee748 = -1;
    DAT_180cc3f9d = DAT_180920d0e;
  }
  if (param_1 == 0) {
    DAT_180cc3f9c = 0;
    return;
  }
  if (DAT_180920d0e == 0) {
    DAT_180cc3f9c = 0;
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = local_res8;
    local_res8 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_res8 = DAT_1811089f8;
  }
  lVar4 = local_res8;
  if (local_res8 == 0) {
    DAT_1811089f8 = local_res8;
    return;
  }
  if (DAT_180ca09f0 == 0) {
    DAT_1811089f8 = local_res8;
    return;
  }
  DAT_1811089f8 = local_res8;
  iVar7 = FUN_180011200((ulonglong)DAT_180ca09f0 + local_res8);
  if (999 < iVar7 - 1U) {
    return;
  }
  if ((DAT_180ca0a44 != 0) &&
     (cVar6 = FUN_180011220(lVar4 + (ulonglong)DAT_180ca0a44), (cVar6 - 7U & 0xfd) == 0)) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (0x7ffffffefffe < lVar4 - 0x10000U) {
    return;
  }
  if (0x7ffffffefffe < *(longlong *)(lVar4 + 0x40) - 0x10000U) {
    return;
  }
  if (DAT_180920d24 == 0) {
    _DAT_1809ee721 = local_70._1_2_;
    DAT_1809ee723 = local_70._3_1_;
    _DAT_1809ee736 = local_5c._2_2_;
    _DAT_1809ee745 = local_4c._1_2_;
    DAT_1809ee747 = local_4c._3_1_;
    _DAT_1809ee74c = local_44;
    local_44 = 0x437a0000;
    DAT_1809ee718 = 0xffffffffffffffff;
    DAT_1809ee720 = 0;
    _DAT_1809ee724 = 0xffffffff;
    _DAT_1809ee728 = 0;
    _DAT_1809ee730 = 0.0;
    _DAT_1809ee734 = 0;
    _DAT_1809ee738 = 0;
    _DAT_1809ee73c = 0x437a0000;
    _DAT_1809ee740 = 0x3f800000;
    DAT_1809ee744 = 0;
    DAT_1809ee748 = 0xffffffff;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0;
    uStack_64 = 0;
    local_4c = 0;
    local_5c = 0;
    uStack_54 = 0;
    local_48 = 0x3f800000;
    cVar6 = FUN_1801ec0c0(&local_res8,&local_78);
    if ((cVar6 == '\0') || ((local_70 & 1) != 0)) {
      local_a8 = local_a8 & 0xffffff00;
      _DAT_180ce9790 = local_a8;
      _DAT_180ce9794 = 0;
      DAT_180ce979c = 0;
      return;
    }
    DAT_180cc3f9c = FUN_1801df9d0(param_1,lVar4,&local_res8);
    return;
  }
  if (*(longlong *)(param_1 + 8) != DAT_1809ee718) {
    if ((DAT_1809ee720 == 0) || (0 < DAT_1809ee748)) {
      DAT_180cc3f9d = 0;
    }
    else {
      DAT_180ce9664 = *(float *)(*(longlong *)(lVar4 + 0x40) + 0x1c);
      DAT_180cc3f9d = 1;
    }
    if (DAT_1809ee710 == *(longlong *)(param_1 + 8) + -1) {
      DAT_1809ee744 = DAT_180cc3f9b;
    }
    else {
      DAT_1809ee744 = (byte)(*(uint *)(param_1 + 0x60) >> 2) & 1;
    }
    _DAT_1809ee721 = local_70._1_2_;
    DAT_1809ee723 = local_70._3_1_;
    _DAT_1809ee736 = local_5c._2_2_;
    _DAT_1809ee745 = local_4c._1_2_;
    DAT_1809ee747 = local_4c._3_1_;
    _DAT_1809ee74c = local_44;
    DAT_1809ee720 = 0;
    _DAT_1809ee724 = 0xffffffff;
    _DAT_1809ee728 = 0;
    _DAT_1809ee730 = 0.0;
    _DAT_1809ee734 = 0;
    _DAT_1809ee738 = 0;
    _DAT_1809ee73c = 0x437a0000;
    _DAT_1809ee740 = 0x3f800000;
    DAT_1809ee748 = 0xffffffff;
    DAT_1809ee718 = *(longlong *)(param_1 + 8);
    local_78 = 0;
    local_70 = 0;
    local_6c = 0;
    uStack_64 = 0;
    local_4c = 0;
    local_5c = 0;
    uStack_54 = 0;
    local_48 = 0x3f800000;
    local_44 = 0x437a0000;
    cVar6 = FUN_1801ec0c0(&local_res8,&local_78);
    if (cVar6 == '\0') {
      return;
    }
    if ((local_70 & 1) != 0) {
      return;
    }
    fVar12 = local_6c._4_4_ * local_6c._4_4_ + (float)local_6c * (float)local_6c;
    if (fVar12 < 0.0) {
      fVar12 = (float)FUN_18051af10(fVar12);
    }
    else {
      fVar12 = SQRT(fVar12);
    }
    if (fVar12 < DAT_1808aca54) {
      return;
    }
    if (DAT_1808ac750 < (float)uStack_64) {
      return;
    }
    cVar6 = FUN_1801d7bc0();
    if (cVar6 == '\0') {
      return;
    }
    plVar10 = &local_res8;
    local_res10[0] = 0x1f;
    local_res8 = CONCAT44(local_res8._4_4_,2);
    if (1 < DAT_180920d10) {
      plVar10 = (longlong *)&DAT_180920d10;
    }
    local_9c = DAT_180920d1c;
    local_a8 = 0;
    plVar8 = (longlong *)local_res10;
    if (DAT_180920d10 < 0x20) {
      plVar8 = plVar10;
    }
    local_a4 = (undefined4)*plVar8;
    local_a0 = DAT_180920d18;
    local_98 = *(undefined4 *)(*(longlong *)(lVar4 + 0x40) + 0x1c);
    local_94 = DAT_1809ee744;
    pbVar9 = (byte *)FUN_1801e3490(&local_78,param_1,lVar4,&local_a8);
    uVar3 = *(undefined8 *)(pbVar9 + 0x15);
    DAT_1809ee720 = *pbVar9;
    _DAT_1809ee724 = *(undefined4 *)(pbVar9 + 4);
    _DAT_1809ee728 = *(undefined8 *)(pbVar9 + 8);
    _DAT_1809ee730 = *(float *)(pbVar9 + 0x10);
    _DAT_1809ee734 = *(undefined2 *)(pbVar9 + 0x14);
    uStack_88 = (undefined1)((uint)*(undefined4 *)(pbVar9 + 0x1d) >> 0x18);
    local_87 = *(undefined2 *)(pbVar9 + 0x21);
    local_93 = (undefined1)uVar3;
    uStack_92 = (undefined2)((ulonglong)uVar3 >> 8);
    uStack_90 = (undefined4)((ulonglong)uVar3 >> 0x18);
    uStack_8c._0_1_ = (undefined1)((ulonglong)uVar3 >> 0x38);
    _DAT_1809ee73c = CONCAT31((int3)*(undefined4 *)(pbVar9 + 0x1d),(undefined1)uStack_8c);
    local_85 = pbVar9[0x23];
    DAT_1809ee748 = *(int *)(pbVar9 + 0x24);
    _DAT_1809ee738 = uStack_90;
    _DAT_1809ee740 = CONCAT13(local_85,CONCAT21(local_87,uStack_88));
    _DAT_1809ee736 = uStack_92;
    if (DAT_1809ee720 == 0) goto LAB_1801e06d7;
    uStack_8c = _DAT_1809ee73c;
    FUN_1801ec960("pixelsurf: flip=%d steer=%d yaw=%.1f fwd=%.1f left=%.1f surf at %d for %d ticks",
                  _DAT_1809ee724,pbVar9[0x14],(double)*(float *)(pbVar9 + 8),
                  (double)*(float *)(pbVar9 + 0xc),(double)_DAT_1809ee730,DAT_1809ee748,
                  *(undefined4 *)(pbVar9 + 0x28));
  }
  if (DAT_1809ee720 != 0) {
    DAT_180cc3f9c = 1;
    FUN_1801e3ef0(param_1,lVar4,&DAT_1809ee724,DAT_1809ee744,DAT_180920d20);
    fVar12 = DAT_180920d14;
    if ((((DAT_1809ee734 == '\0') && (DAT_1809ee748 < 1)) && (DAT_180cc3f9d != 0)) &&
       (0.0 < DAT_180920d14)) {
      fVar11 = *(float *)(*(longlong *)(lVar4 + 0x40) + 0x1c) - DAT_180ce9664;
      if (((uint)fVar11 & 0x7f800000) == 0x7f800000) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = (float)FUN_180516750(fVar11,DAT_1808acbd0);
      }
      if (fVar12 < (float)((uint)fVar11 & _DAT_1808ade90)) {
        if (fVar11 < 0.0) {
          fVar12 = (float)((uint)fVar12 ^ DAT_1808adec0);
        }
        if (((uint)(fVar12 + DAT_180ce9664) & 0x7f800000) != 0x7f800000) {
          uVar13 = FUN_180516750(fVar12 + DAT_180ce9664,DAT_1808acbd0);
        }
        lVar5 = *(longlong *)(param_1 + 0x40);
        if (((lVar5 - 0x10000U < 0x7ffffffeffff) &&
            (*(longlong *)(lVar5 + 0x40) - 0x10000U < 0x7ffffffeffff)) &&
           ((uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x40) + 0x18),
            (uVar2 & 0x7f800000) != 0x7f800000 && ((uVar13 & 0x7f800000) != 0x7f800000)))) {
          *(uint *)(*(longlong *)(lVar5 + 0x40) + 0x18) = uVar2;
          DAT_180ceb098 = 2;
          *(uint *)(*(longlong *)(lVar5 + 0x40) + 0x1c) = uVar13;
          puVar1 = (uint *)(*(longlong *)(lVar5 + 0x40) + 0x10);
          *puVar1 = *puVar1 | 3;
          *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 4;
        }
      }
    }
  }
LAB_1801e06d7:
  DAT_180cc3f9b = *(byte *)(param_1 + 0x60) >> 2 & 1;
  DAT_1809ee710 = *(undefined8 *)(param_1 + 8);
  return;
}



/* ===== 1801e0720 FUN_1801e0720 ===== */

void FUN_1801e0720(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  thunk_FUN_1803d64e0(param_1,0x18);
  return;
}



/* ===== 1801e0730 FUN_1801e0730 ===== */

TypeDescriptor * FUN_1801e0730(void)

{
  return &`int___cdecl_pixelsurf::_anon_8FE86C00::surf_ticks(sdk::usercmd*___ptr64,sdk::entity_const&___ptr64,float,bool)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 1801e0740 FUN_1801e0740 ===== */

undefined8 FUN_1801e0740(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)((longlong)param_3 + 0x14) = **(undefined4 **)(param_1 + 8);
  *(undefined4 *)(param_3 + 1) = 0;
  if (**(char **)(param_1 + 0x10) == '\0') {
    uVar3 = DAT_1808acda0;
  }
  else {
    uVar3 = DAT_1808ac34c;
  }
  *param_3 = *param_3 & 0xfffffffffffff9e7;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
  pcVar1 = *(char **)(param_1 + 0x10);
  uVar2 = 0x400;
  if (*pcVar1 != '\0') {
    uVar2 = 0x200;
  }
  *param_3 = *param_3 | uVar2;
  return CONCAT71((int7)((ulonglong)pcVar1 >> 8),1);
}



/* ===== 1801e07a0 FUN_1801e07a0 ===== */

undefined8 * FUN_1801e07a0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = std::
             _Func_impl_no_alloc<`int___cdecl_pixelsurf::_anon_8FE86C00::surf_ticks(sdk::usercmd*___ptr64,sdk::entity_const&___ptr64,float,bool)'::`2'::<lambda_1>,bool,int,prediction::sim_input&___ptr64>
             ::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = uVar1;
  return param_2;
}



/* ===== 1801e07c0 FUN_1801e07c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1801e07c0(undefined1 *param_1,undefined8 *param_2,float *param_3,float param_4,float param_5)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  char cVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  uint uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float local_138;
  float local_134 [5];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_110;
  float local_10c;
  float local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined4 local_d0;
  
  fVar8 = DAT_180920d80;
  fVar28 = DAT_1808ac750;
  param_4 = param_4 * DAT_1808ac00c;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_134[0] = 50.0;
  local_138 = 5.0;
  local_120 = 0xbfa00000;
  local_11c = 0xbfa00000;
  pfVar5 = &local_138;
  if (fVar28 <= fVar8) {
    pfVar5 = &DAT_180920d80;
  }
  local_118 = 0x40000000;
  local_134[1] = 1.25;
  local_134[2] = 1.25;
  local_134[3] = 36.0;
  pfVar6 = local_134;
  if (fVar8 <= DAT_1808aca80) {
    pfVar6 = pfVar5;
  }
  param_4 = param_4 + *pfVar6;
  fVar8 = (float)FUN_180517200();
  fVar9 = (float)FUN_180517790();
  uVar2 = _DAT_1808ade90;
  uVar1 = DAT_1808acbd0;
  iVar7 = 0;
  fVar28 = DAT_1808accf0;
  do {
    fVar10 = (float)FUN_180517200();
    local_110 = fVar10 * param_4 + *param_3;
    fVar10 = (float)FUN_180517790();
    local_10c = fVar10 * param_4 + param_3[1];
    local_e0 = 0;
    local_108 = param_3[2];
    local_100 = _DAT_1808ad2c0;
    uStack_f8 = _UNK_1808ad2c8;
    local_d8 = 0;
    local_d4 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_d0 = 0x3f800000;
    cVar4 = FUN_1802aed00(param_3,&local_110,&local_120,local_134 + 1,*param_2,0x1c1003,4,7,
                          &local_100,0);
    if (((((cVar4 != '\0') && ((char)local_d4 == '\0')) && (local_d4._1_1_ == '\0')) &&
        ((0.0 < (float)local_100 && ((float)local_100 < DAT_1808ac34c)))) &&
       (((float)((uint)uStack_e8 & uVar2) <= DAT_1808ac140 &&
        (fVar10 = (float)local_100 * param_4, fVar10 < fVar28)))) {
      fVar28 = (float)local_f0;
      fVar3 = local_f0._4_4_;
      uVar12 = FUN_180516b00();
      auVar13._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
      auVar13._8_4_ = (undefined4)extraout_XMM0_Qb;
      auVar13._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
      *(float *)(param_1 + 0xc) = fVar10;
      fVar22 = (float)uVar12 * DAT_1808aca94;
      *param_1 = 1;
      auVar13._0_4_ = fVar22;
      auVar14._4_12_ = auVar13._4_12_;
      auVar14._0_4_ = fVar22 - DAT_1808acaf4;
      if (((uint)auVar14._0_4_ & 0x7f800000) == 0x7f800000) {
        fVar24 = 0.0;
        uVar25 = 0;
        uVar26 = 0;
        uVar27 = 0;
      }
      else {
        uVar12 = FUN_180516750(auVar14._0_8_,uVar1);
        fVar24 = (float)uVar12;
        uVar25 = (undefined4)((ulonglong)uVar12 >> 0x20);
        uVar26 = (undefined4)extraout_XMM0_Qb_00;
        uVar27 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      }
      if (((uint)(fVar22 + DAT_1808acaf4) & 0x7f800000) == 0x7f800000) {
        auVar21 = ZEXT816(0);
      }
      else {
        uVar12 = FUN_180516750();
        auVar21._8_4_ = (int)extraout_XMM0_Qb_01;
        auVar21._0_8_ = uVar12;
        auVar21._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
      }
      auVar15._4_12_ = auVar21._4_12_;
      auVar15._0_4_ = auVar21._0_4_ - param_5;
      if (((uint)auVar15._0_4_ & 0x7f800000) == 0x7f800000) {
        uVar23 = 0;
      }
      else {
        uVar23 = FUN_180516750(auVar15._0_8_,uVar1);
      }
      auVar16._4_4_ = uVar25;
      auVar16._0_4_ = fVar24;
      auVar16._8_4_ = uVar26;
      auVar16._12_4_ = uVar27;
      fVar22 = (float)(uVar23 & uVar2);
      auVar17._4_12_ = auVar16._4_12_;
      auVar17._0_4_ = fVar24 - param_5;
      if (((uint)auVar17._0_4_ & 0x7f800000) == 0x7f800000) {
        uVar23 = 0;
      }
      else {
        uVar23 = FUN_180516750(auVar17._0_8_,uVar1);
      }
      fVar11 = (float)(uVar23 & uVar2);
      if ((DAT_180cc3f9f != '\0') && ((float)((uint)(fVar22 - fVar11) & uVar2) < DAT_1808ac864)) {
        auVar18._0_4_ = auVar21._0_4_ - DAT_180ce97a0;
        auVar18._4_12_ = auVar15._4_12_;
        if (((uint)auVar18._0_4_ & 0x7f800000) == 0x7f800000) {
          uVar23 = 0;
        }
        else {
          uVar23 = FUN_180516750(auVar18._0_8_,uVar1);
        }
        auVar19._4_4_ = uVar25;
        auVar19._0_4_ = fVar24;
        auVar19._8_4_ = uVar26;
        auVar19._12_4_ = uVar27;
        fVar22 = (float)(uVar23 & uVar2);
        auVar20._4_12_ = auVar19._4_12_;
        auVar20._0_4_ = fVar24 - DAT_180ce97a0;
        if (((uint)auVar20._0_4_ & 0x7f800000) == 0x7f800000) {
          uVar23 = 0;
        }
        else {
          uVar23 = FUN_180516750(auVar20._0_8_,uVar1);
        }
        fVar11 = (float)(uVar23 & uVar2);
      }
      if (fVar11 <= fVar22) {
        auVar21._4_4_ = uVar25;
        auVar21._0_4_ = fVar24;
        auVar21._8_4_ = uVar26;
        auVar21._12_4_ = uVar27;
      }
      *(int *)(param_1 + 4) = auVar21._0_4_;
      param_1[8] = fVar3 * fVar8 - fVar28 * fVar9 < 0.0;
      fVar28 = fVar10;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x20);
  return param_1;
}



/* ===== 1801e0c90 FUN_1801e0c90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1801e0c90(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  
  if ((((*(byte *)(param_2 + 4) & 1) == 0) && (*(char *)(param_2 + 0x25) == '\0')) &&
     (*(char *)(param_2 + 8) != '\t')) {
    fVar1 = *(float *)(param_2 + 0x20);
    if (((((float)((uint)fVar1 & _DAT_1808ade90) <= DAT_1808ac1f4) ||
         ((_DAT_1808ace0c <= fVar1 && (fVar1 <= DAT_1808acdf0)))) ||
        ((*(float *)(param_1 + 0x20) < 0.0 &&
         (((float)((uint)(fVar1 - *(float *)(param_1 + 0x20)) & _DAT_1808ade90) <= DAT_1808ac658 &&
          (_DAT_1808ace20 < fVar1)))))) &&
       (fVar1 = *(float *)(param_1 + 0x14) - DAT_1808ac1f4,
       fVar1 < *(float *)(param_2 + 0x14) || fVar1 == *(float *)(param_2 + 0x14))) {
      fVar1 = *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x1c) +
              *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x18);
      if (fVar1 < 0.0) {
        fVar1 = (float)FUN_18051af10(fVar1);
      }
      else {
        fVar1 = SQRT(fVar1);
      }
      if (DAT_1808ac750 <= fVar1) {
        fVar2 = *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18) +
                *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x1c);
        if (fVar2 < 0.0) {
          fVar2 = (float)FUN_18051af10(fVar2);
        }
        else {
          fVar2 = SQRT(fVar2);
        }
        if (fVar2 * DAT_1808ac2cc <= fVar1) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}



/* ===== 1801e0de0 FUN_1801e0de0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801e0de0(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 **ppuVar10;
  ulonglong uVar11;
  undefined4 **ppuVar12;
  char *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  longlong local_res8;
  byte local_res10;
  undefined7 uStackX_11;
  undefined4 *local_res18;
  undefined4 *local_res20;
  undefined8 in_stack_fffffffffffffe58;
  undefined8 local_178;
  float local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 **local_160;
  byte local_158;
  undefined2 uStack_157;
  undefined1 uStack_155;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  float local_120;
  undefined4 local_118;
  float fStack_114;
  undefined4 uStack_110;
  float fStack_10c;
  undefined1 local_108 [4];
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined2 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
  DAT_180cc3f9e = 0;
  if ((((param_1 == 0) || (DAT_180920d78 == '\0')) || (DAT_180cc3f9c != '\0')) ||
     (DAT_180cc4129 != '\0')) {
    _DAT_1809ee771 = uStack_157;
    DAT_1809ee773 = uStack_155;
    _DAT_1809ee784 = uStack_148._4_4_;
    DAT_1809ee768 = 0xffffffffffffffff;
    DAT_1809ee770 = 0;
    _DAT_1809ee774 = 0;
    DAT_1809ee77c = 0;
    DAT_1809ee780 = 0xffffffff;
    DAT_180cc3f9f = 0;
    DAT_180cea414 = 0;
    return;
  }
  local_res8 = param_1;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    DAT_181108a00 = CONCAT71(uStackX_11,local_res10);
    local_res18 = (undefined4 *)FUN_1803a0c50(&local_res10);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_res18 = DAT_1811089f8;
  }
  puVar9 = local_res18;
  if (local_res18 == (undefined4 *)0x0) {
    DAT_1811089f8 = local_res18;
    return;
  }
  if (DAT_180ca09f0 == 0) {
    DAT_1811089f8 = local_res18;
    return;
  }
  DAT_1811089f8 = local_res18;
  iVar5 = FUN_180011200((ulonglong)DAT_180ca09f0 + (longlong)local_res18);
  if (999 < iVar5 - 1U) {
    return;
  }
  if ((DAT_180ca0a44 != 0) &&
     (cVar4 = FUN_180011220((longlong)puVar9 + (ulonglong)DAT_180ca0a44), (cVar4 - 7U & 0xfd) == 0))
  {
    return;
  }
  fVar3 = DAT_1808ac34c;
  if (local_res8 == 0) {
    return;
  }
  lVar2 = *(longlong *)(local_res8 + 0x40);
  if (0x7ffffffefffe < lVar2 - 0x10000U) {
    return;
  }
  if (0x7ffffffefffe < *(longlong *)(lVar2 + 0x40) - 0x10000U) {
    return;
  }
  local_160 = (undefined4 **)0x0;
  local_158 = 0;
  uStack_157 = 0;
  uStack_155 = 0;
  uStack_154 = 0;
  uStack_150._0_4_ = 0;
  uStack_150._4_4_ = 0;
  uStack_148._0_4_ = 0;
  uStack_138._4_4_ = 0;
  uStack_148._4_4_ = 0;
  uStack_140._0_4_ = 0;
  uStack_140._4_4_ = 0;
  uStack_138._0_4_ = 0;
  local_130 = 0x3f800000;
  local_12c = 0x437a0000;
  cVar4 = FUN_1801ec0c0(&local_res18,&local_160);
  if ((cVar4 == '\0') || ((local_158 & 1) != 0)) {
    DAT_1809ee768 = 0xffffffffffffffff;
    DAT_1809ee770 = 0;
    _DAT_1809ee771 = uStack_157;
    DAT_1809ee773 = uStack_155;
    _DAT_1809ee774 = 0;
    DAT_1809ee77c = 0;
    DAT_1809ee780 = 0xffffffff;
    _DAT_1809ee784 = uStack_148._4_4_;
    DAT_180cc3f9f = 0;
    DAT_180cea414 = 0;
    return;
  }
  lVar7 = *(longlong *)(local_res8 + 8);
  if (lVar7 == DAT_1809ee768) {
LAB_1801e14e3:
    if (DAT_1809ee770 == '\0') {
      return;
    }
  }
  else {
    _DAT_1809ee771 = uStack_157;
    DAT_1809ee773 = uStack_155;
    _DAT_1809ee784 = uStack_148._4_4_;
    DAT_1809ee770 = '\0';
    _DAT_1809ee774 = 0;
    DAT_1809ee77c = 0;
    DAT_1809ee780 = 0xffffffff;
    DAT_1809ee768 = lVar7;
    if ((puVar9 == (undefined4 *)0x0) || (DAT_180ca0a1c == 0)) {
      fVar16 = 0.0;
      fVar18 = 0.0;
      fVar19 = 0.0;
    }
    else {
      pfVar6 = (float *)FUN_1800111b0(&local_128,(longlong)puVar9 + (ulonglong)DAT_180ca0a1c);
      fVar16 = *pfVar6;
      fVar18 = pfVar6[1];
      fVar19 = pfVar6[2];
    }
    fVar15 = fVar18 * fVar18 + fVar16 * fVar16;
    if (fVar15 < 0.0) {
      fVar15 = (float)FUN_18051af10(fVar15);
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    if (fVar15 < DAT_1808ac750) {
      return;
    }
    cVar4 = FUN_1801d7bc0();
    if (cVar4 == '\0') {
      return;
    }
    fVar14 = (float)FUN_180516b00(fVar18);
    fVar14 = fVar14 * DAT_1808aca94;
    if ((((puVar9 == (undefined4 *)0x0) || (DAT_180ca09f8 == 0)) ||
        (lVar7 = FUN_18000f3a0((longlong)puVar9 + (ulonglong)DAT_180ca09f8), lVar7 == 0)) ||
       (DAT_180ca0950 == 0)) {
      local_178 = 0;
      local_170 = 0.0;
    }
    else {
      puVar8 = (undefined8 *)FUN_1800111b0(&local_128,lVar7 + (ulonglong)DAT_180ca0950);
      local_178 = *puVar8;
      local_170 = *(float *)(puVar8 + 1);
    }
    puVar9 = (undefined4 *)
             FUN_1801e07c0(&local_128,&local_res18,&local_178,fVar15,CONCAT44(uVar17,fVar14));
    local_118 = *puVar9;
    uVar17 = puVar9[2];
    fStack_114 = (float)puVar9[1];
    uStack_110 = uVar17;
    fStack_10c = (float)puVar9[3];
    if ((char)local_118 == '\0') {
      local_128 = (undefined4)local_178;
      local_120 = local_170 - DAT_1808ac934;
      local_124 = local_178._4_4_;
      puVar9 = (undefined4 *)FUN_1801e07c0(&local_160,&local_res18,&local_128,fVar15,fVar14);
      local_118 = *puVar9;
      uVar17 = puVar9[2];
      fStack_114 = (float)puVar9[1];
      uStack_110 = uVar17;
      fStack_10c = (float)puVar9[3];
    }
    fVar14 = DAT_1808acda0;
    local_res20 = (undefined4 *)CONCAT44(local_res20._4_4_,0x1f);
    local_res10 = *(byte *)(local_res8 + 0x60) >> 2 & 1;
    local_c8 = 0;
    uStack_c0 = 0;
    ppuVar12 = &local_res18;
    if (1 < DAT_180920d7c) {
      ppuVar12 = (undefined4 **)&DAT_180920d7c;
    }
    local_fc = (undefined4)local_178;
    local_d8 = 0;
    uStack_d0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    ppuVar10 = &local_res20;
    if (DAT_180920d7c < 0x20) {
      ppuVar10 = ppuVar12;
    }
    local_res18 = (undefined4 *)CONCAT44(local_res18._4_4_,2);
    local_ec = fVar18;
    local_164 = *(undefined4 *)ppuVar10;
    local_f8 = local_178._4_4_;
    local_f4 = local_170;
    local_f0 = fVar16;
    local_e8 = fVar19;
    local_108[0] = 0;
    local_104 = 0;
    local_100 = 0;
    local_e4 = 0;
    local_e0 = 0;
    uStack_110 = uVar17;
    if ((char)local_118 != '\0') {
      if ((fVar15 <= DAT_1808ac9c0) || (fVar15 < fVar3)) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = DAT_1808ac9c0 / fVar15;
        local_168 = 0x3f800000;
        local_res18 = (undefined4 *)CONCAT44(local_res18._4_4_,0xbf800000);
        local_res20 = (undefined4 *)CONCAT44(local_res20._4_4_,fVar16);
        ppuVar12 = &local_res18;
        if (DAT_1808acda0 <= fVar16) {
          ppuVar12 = &local_res20;
        }
        ppuVar10 = (undefined4 **)&local_168;
        if (fVar16 <= fVar3) {
          ppuVar10 = ppuVar12;
        }
        fVar16 = (float)FUN_18053eb30(*(undefined4 *)ppuVar10);
        fVar16 = DAT_1808acaf4 - fVar16 * DAT_1808aca94;
      }
      if ((char)uVar17 == '\0') {
        fVar18 = fVar14;
      }
      else {
        fVar18 = fVar3;
      }
      local_res20 = &local_118;
      local_res18 = (undefined4 *)CONCAT44(local_res18._4_4_,fVar18);
      local_160 = &local_res20;
      local_158 = (byte)&local_res8;
      uStack_157 = (undefined2)((ulonglong)&local_res8 >> 8);
      uStack_155 = (undefined1)((ulonglong)&local_res8 >> 0x18);
      uStack_154 = (undefined4)((ulonglong)&local_res8 >> 0x20);
      uStack_150 = &local_164;
      uStack_148 = &local_res18;
      uStack_140 = &local_res10;
      uStack_138 = local_108;
      FUN_1801e1680(&local_160,fVar16);
      pfVar6 = (float *)&DAT_180602120;
      do {
        fVar18 = *pfVar6;
        FUN_1801e1680(&local_160,fVar18 + fVar16);
        if ((0.0 < fVar18) && (0.0 <= fVar16 - fVar18)) {
          FUN_1801e1680(&local_160);
        }
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != (float *)&DAT_180602168);
      if (DAT_1809ee770 != '\0') {
        pcVar13 = "right";
        DAT_180cc4098 = (char)uStack_110;
        if ((char)uStack_110 != '\0') {
          pcVar13 = "left";
        }
        DAT_180ce97a0 = fStack_114;
        DAT_180cc3f9f = '\x01';
        DAT_180cea414 = 0;
        DAT_180cea410 = DAT_1809ee774;
        FUN_1801ec960("texturebug: wall %.1f (%s, %.1fu) speed %.0f formula %.1f -> yaw %.1f, glide at %d for %d ticks"
                      ,(double)fStack_114,pcVar13,(double)fStack_10c,(double)fVar15,(double)fVar16,
                      (double)DAT_1809ee774,DAT_1809ee780,DAT_1809ee77c);
        goto LAB_1801e146c;
      }
LAB_1801e1477:
      if (DAT_180cc3f9f != '\0') {
        DAT_180cea414 = DAT_180cea414 + 1;
        if (DAT_180cea414 < 9) {
          DAT_1809ee770 = '\x01';
          fVar16 = DAT_180cea410;
          if (DAT_180cc4098 == '\0') {
            _DAT_1809ee774 = CONCAT44(fVar14,DAT_180cea410);
          }
          else {
            _DAT_1809ee774 = CONCAT44(fVar3,DAT_180cea410);
            fVar14 = fVar3;
          }
          goto LAB_1801e14f8;
        }
        DAT_180cc3f9f = '\0';
        DAT_180cea414 = 0;
      }
      goto LAB_1801e14e3;
    }
LAB_1801e146c:
    if (DAT_1809ee770 == '\0') goto LAB_1801e1477;
  }
  fVar14 = DAT_1809ee778;
  fVar16 = DAT_1809ee774;
LAB_1801e14f8:
  lVar7 = local_res8;
  cVar4 = DAT_180920d84;
  DAT_180cc3f9e = 1;
  FUN_1801ec3f0(local_res8,*(undefined4 *)(*(longlong *)(lVar2 + 0x40) + 0x18),fVar16,1);
  if (cVar4 != '\0') {
    DAT_180ceb098 = 2;
  }
  *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 0xc0;
  *(float *)(lVar2 + 0x5c) = fVar14;
  *(undefined4 *)(lVar2 + 0x58) = 0;
  puVar1 = (ulonglong *)(lVar7 + 0x60);
  *puVar1 = *puVar1 & 0xfffffffffffff9e7;
  uVar11 = 0x400;
  if (0.0 < fVar14) {
    uVar11 = 0x200;
  }
  puVar1 = (ulonglong *)(lVar7 + 0x60);
  *puVar1 = *puVar1 | uVar11;
  return;
}



/* ===== 1801e1680 FUN_1801e1680 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e1680(undefined8 *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  int local_90;
  int local_8c;
  undefined4 local_88 [2];
  undefined4 local_80 [2];
  undefined **local_78;
  undefined *local_70;
  int *local_68;
  int *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined1 *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_b8;
  fVar4 = *(float *)(*(longlong *)*param_1 + 4);
  if (*(char *)(*(longlong *)*param_1 + 8) == '\0') {
    fVar4 = fVar4 + param_2;
  }
  else {
    fVar4 = fVar4 - param_2;
  }
  if (((uint)fVar4 & 0x7f800000) == 0x7f800000) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_180516750(fVar4,DAT_1808acbd0);
  }
  local_90 = -1;
  puVar3 = (undefined *)param_1[5];
  local_98[0] = *(undefined1 *)param_1[4];
  local_80[0] = *(undefined4 *)param_1[3];
  local_8c = 0;
  local_78 = std::
             _Func_impl_no_alloc<`int___cdecl_texturebug::_anon_6E289F13::evaluate(sdk::usercmd*___ptr64,int,float,float,bool,prediction::sim_tick_const&___ptr64,int&___ptr64)'::`2'::<lambda_1>,bool,int,prediction::sim_input&___ptr64>
             ::vftable;
  local_68 = &local_90;
  local_60 = &local_8c;
  local_58 = local_88;
  local_50 = local_80;
  local_48 = local_98;
  local_40 = &local_78;
  local_88[0] = uVar5;
  local_70 = puVar3;
  iVar2 = FUN_1801d95d0(*(undefined8 *)param_1[1],*(undefined4 *)param_1[2],&local_78,&DAT_180ce97b0
                       );
  if (local_40 != (undefined ***)0x0) {
    (*(code *)(*local_40)[4])(local_40,local_40 != &local_78);
  }
  if (0 < iVar2) {
    if (1 < iVar2) {
      puVar3 = &DAT_180ce97b0 + (longlong)(iVar2 + -2) * 0x60;
    }
    iVar2 = iVar2 + -1;
    cVar1 = FUN_1801e0c90(puVar3,&DAT_180ce97b0 + (longlong)iVar2 * 0x60);
    if (cVar1 != '\0') {
      if (local_8c < 1) {
        if (local_90 < 0) {
          local_8c = local_8c + 1;
          local_90 = iVar2;
        }
      }
      else {
        if (local_90 < 0) {
          local_90 = iVar2;
        }
        local_8c = local_8c + 1;
      }
    }
  }
  if ((0 < local_8c) &&
     (((DAT_1809ee770 == '\0' || (DAT_1809ee77c < local_8c)) ||
      ((local_8c == DAT_1809ee77c && (local_90 < DAT_1809ee780)))))) {
    DAT_1809ee770 = '\x01';
    DAT_1809ee778 = *(undefined4 *)param_1[3];
    DAT_1809ee774 = uVar5;
    DAT_1809ee77c = local_8c;
    DAT_1809ee780 = local_90;
  }
  return;
}



/* ===== 1801e1870 FUN_1801e1870 ===== */

void FUN_1801e1870(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  thunk_FUN_1803d64e0(param_1,0x38);
  return;
}



/* ===== 1801e1880 FUN_1801e1880 ===== */

TypeDescriptor * FUN_1801e1880(void)

{
  return &`int___cdecl_texturebug::_anon_6E289F13::evaluate(sdk::usercmd*___ptr64,int,float,float,bool,prediction::sim_tick_const&___ptr64,int&___ptr64)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 1801e1890 FUN_1801e1890 ===== */

ulonglong FUN_1801e1890(longlong param_1,int *param_2,ulonglong *param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  char cVar5;
  int *in_RAX;
  char *pcVar6;
  undefined *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  iVar2 = *param_2;
  if (0 < iVar2) {
    lVar9 = (longlong)iVar2 * 0x60;
    if (iVar2 < 2) {
      puVar7 = *(undefined **)(param_1 + 8);
    }
    else {
      in_RAX = (int *)(ulonglong)(iVar2 - 2U);
      puVar7 = &DAT_180ce97b0 + (longlong)(int)(iVar2 - 2U) * 0x60;
    }
    if (((((&DAT_180ce9754)[lVar9] & 1) != 0) || ((&DAT_180ce9775)[lVar9] != '\0')) ||
       ((&DAT_180ce9758)[lVar9] == '\t')) {
LAB_1801e198a:
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
    cVar5 = FUN_1801e0c90(puVar7,&DAT_180ce9750 + lVar9);
    if (cVar5 == '\0') {
      in_RAX = *(int **)(param_1 + 0x18);
      if (0 < *in_RAX) goto LAB_1801e198a;
    }
    else {
      if (**(int **)(param_1 + 0x10) < 0) {
        **(int **)(param_1 + 0x10) = iVar2 + -1;
      }
      **(int **)(param_1 + 0x18) = **(int **)(param_1 + 0x18) + 1;
    }
  }
  *(undefined4 *)((longlong)param_3 + 0x14) = **(undefined4 **)(param_1 + 0x20);
  *(undefined4 *)(param_3 + 1) = 0;
  uVar3 = **(undefined4 **)(param_1 + 0x28);
  *param_3 = *param_3 & 0xfffffffffffff9e7;
  uVar4 = *param_3;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
  fVar1 = **(float **)(param_1 + 0x28);
  uVar8 = 0x400;
  if (0.0 < fVar1) {
    uVar8 = 0x200;
  }
  *param_3 = uVar8 | uVar4;
  pcVar6 = *(char **)(param_1 + 0x30);
  if (*pcVar6 == '\0') {
    uVar8 = uVar8 | uVar4 & 0xfffffffffffffffb;
  }
  else {
    pcVar6 = (char *)0x204;
    uVar8 = 0x404;
    if (0.0 < fVar1) {
      uVar8 = 0x204;
    }
    uVar8 = uVar8 | uVar4;
  }
  *param_3 = uVar8;
  return CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
}



/* ===== 1801e19c0 FUN_1801e19c0 ===== */

undefined8 * FUN_1801e19c0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = std::
             _Func_impl_no_alloc<`int___cdecl_texturebug::_anon_6E289F13::evaluate(sdk::usercmd*___ptr64,int,float,float,bool,prediction::sim_tick_const&___ptr64,int&___ptr64)'::`2'::<lambda_1>,bool,int,prediction::sim_input&___ptr64>
             ::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[6] = uVar1;
  return param_2;
}



/* ===== 1801e19f0 FUN_1801e19f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e19f0(int param_1,float param_2,float param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  size_t sVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_118 [32];
  double local_f8;
  double local_f0;
  longlong local_e8 [4];
  char local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_118;
  FUN_180072490((&PTR_s_edge_bug_180604128)[param_1]);
  if ((&DAT_180920d2c)[param_1] != '\0') {
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
    local_c8[0x18] = '\0';
    local_c8[0x19] = '\0';
    local_c8[0x1a] = '\0';
    local_c8[0x1b] = '\0';
    local_c8[0x1c] = '\0';
    local_c8[0x1d] = '\0';
    local_c8[0x1e] = '\0';
    local_c8[0x1f] = '\0';
    local_c8[0x20] = '\0';
    local_c8[0x21] = '\0';
    local_c8[0x22] = '\0';
    local_c8[0x23] = '\0';
    local_c8[0x24] = '\0';
    local_c8[0x25] = '\0';
    local_c8[0x26] = '\0';
    local_c8[0x27] = '\0';
    local_c8[0x28] = '\0';
    local_c8[0x29] = '\0';
    local_c8[0x2a] = '\0';
    local_c8[0x2b] = '\0';
    local_c8[0x2c] = '\0';
    local_c8[0x2d] = '\0';
    local_c8[0x2e] = '\0';
    local_c8[0x2f] = '\0';
    local_c8[0x30] = '\0';
    local_c8[0x31] = '\0';
    local_c8[0x32] = '\0';
    local_c8[0x33] = '\0';
    local_c8[0x34] = '\0';
    local_c8[0x35] = '\0';
    local_c8[0x36] = '\0';
    local_c8[0x37] = '\0';
    local_c8[0x38] = '\0';
    local_c8[0x39] = '\0';
    local_c8[0x3a] = '\0';
    local_c8[0x3b] = '\0';
    local_c8[0x3c] = '\0';
    local_c8[0x3d] = '\0';
    local_c8[0x3e] = '\0';
    local_c8[0x3f] = '\0';
    local_c8[0x40] = '\0';
    local_c8[0x41] = '\0';
    local_c8[0x42] = '\0';
    local_c8[0x43] = '\0';
    local_c8[0x44] = '\0';
    local_c8[0x45] = '\0';
    local_c8[0x46] = '\0';
    local_c8[0x47] = '\0';
    local_c8[0x48] = '\0';
    local_c8[0x49] = '\0';
    local_c8[0x4a] = '\0';
    local_c8[0x4b] = '\0';
    local_c8[0x4c] = '\0';
    local_c8[0x4d] = '\0';
    local_c8[0x4e] = '\0';
    local_c8[0x4f] = '\0';
    local_c8[0x50] = '\0';
    local_c8[0x51] = '\0';
    local_c8[0x52] = '\0';
    local_c8[0x53] = '\0';
    local_c8[0x54] = '\0';
    local_c8[0x55] = '\0';
    local_c8[0x56] = '\0';
    local_c8[0x57] = '\0';
    local_c8[0x58] = '\0';
    local_c8[0x59] = '\0';
    local_c8[0x5a] = '\0';
    local_c8[0x5b] = '\0';
    local_c8[0x5c] = '\0';
    local_c8[0x5d] = '\0';
    local_c8[0x5e] = '\0';
    local_c8[0x5f] = '\0';
    local_c8[0x60] = '\0';
    local_c8[0x61] = '\0';
    local_c8[0x62] = '\0';
    local_c8[99] = '\0';
    local_c8[100] = '\0';
    local_c8[0x65] = '\0';
    local_c8[0x66] = '\0';
    local_c8[0x67] = '\0';
    local_c8[0x68] = '\0';
    local_c8[0x69] = '\0';
    local_c8[0x6a] = '\0';
    local_c8[0x6b] = '\0';
    local_c8[0x6c] = '\0';
    local_c8[0x6d] = '\0';
    local_c8[0x6e] = '\0';
    local_c8[0x6f] = '\0';
    local_c8[0x70] = '\0';
    local_c8[0x71] = '\0';
    local_c8[0x72] = '\0';
    local_c8[0x73] = '\0';
    local_c8[0x74] = '\0';
    local_c8[0x75] = '\0';
    local_c8[0x76] = '\0';
    local_c8[0x77] = '\0';
    local_c8[0x78] = '\0';
    local_c8[0x79] = '\0';
    local_c8[0x7a] = '\0';
    local_c8[0x7b] = '\0';
    local_c8[0x7c] = '\0';
    local_c8[0x7d] = '\0';
    local_c8[0x7e] = '\0';
    local_c8[0x7f] = '\0';
    local_f8 = (double)param_2;
    if (0.0 <= param_3) {
      snprintf(local_c8,0x80,"%s | %.0f u/s",(&PTR_s_edge_bug_180604128)[param_1]);
    }
    else {
      local_f0 = (double)(float)((uint)param_3 ^ DAT_1808adec0);
      snprintf(local_c8,0x80,"%s | %.0f u/s, fall %.0f",(&PTR_s_edge_bug_180604128)[param_1]);
    }
    FUN_1801ec960("hit: %s",local_c8);
    if (DAT_180920d28 != '\0') {
      local_e8[0] = 0;
      local_e8[1] = 0;
      local_e8[2] = 0;
      local_e8[3] = 0;
      sVar3 = strlen(local_c8);
      FUN_1800133a0(local_e8,local_c8,sVar3);
      FUN_1800d84f0(local_e8,&DAT_180920d29);
      if (0xf < (ulonglong)local_e8[3]) {
        uVar5 = local_e8[3] + 1;
        lVar4 = local_e8[0];
        if (0xfff < uVar5) {
          lVar4 = *(longlong *)(local_e8[0] + -8);
          if (0x1f < (local_e8[0] - lVar4) - 8U) goto LAB_1801e1c0b;
          uVar5 = local_e8[3] + 0x28;
        }
        thunk_FUN_1803d64e0(lVar4,uVar5);
      }
    }
    uVar2 = DAT_180920d74;
    if ((DAT_180920d30 != '\0') && (DAT_180920d31 != '\0')) {
      local_e8[0] = 0;
      local_e8[1] = 0;
      local_e8[2] = 0;
      local_e8[3] = 0;
      sVar3 = strlen(&DAT_180920d31);
      FUN_1800133a0(local_e8,&DAT_180920d31,sVar3);
      FUN_18022ca60(local_e8,uVar2);
      if (0xf < (ulonglong)local_e8[3]) {
        uVar5 = local_e8[3] + 1;
        lVar4 = local_e8[0];
        if (0xfff < uVar5) {
          lVar4 = *(longlong *)(local_e8[0] + -8);
          if (0x1f < (local_e8[0] - lVar4) - 8U) {
LAB_1801e1c0b:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar5 = local_e8[3] + 0x28;
        }
        thunk_FUN_1803d64e0(lVar4,uVar5);
      }
    }
  }
  return;
}



/* ===== 1801e1c20 FUN_1801e1c20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801e1c20(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  float fVar10;
  longlong lVar11;
  uint *puVar12;
  byte bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_res8;
  uint local_f8 [2];
  undefined8 local_f0;
  uint local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  
  if (param_1 == 0) {
    return;
  }
  lVar11 = *(longlong *)(param_1 + 8);
  if (lVar11 == DAT_1809ee788) {
    return;
  }
  if ((DAT_180920d28 == '\0') && (DAT_180920d30 == '\0')) {
    DAT_180cc4099 = 0;
    DAT_1809ee788 = lVar11;
    return;
  }
  DAT_1809ee788 = lVar11;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = local_res8;
    local_res8 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_res8 = DAT_1811089f8;
  }
  lVar11 = local_res8;
  fVar16 = DAT_1808ac34c;
  local_f0 = 0;
  local_e8 = 0;
  local_c4 = 0;
  local_c0 = 0x3f800000;
  local_bc = 0x437a0000;
  local_e4 = 0;
  uStack_dc = 0;
  local_d4 = 0;
  uStack_cc = 0;
  if (local_res8 == 0) {
    DAT_180cc4099 = 0;
    DAT_1811089f8 = local_res8;
    return;
  }
  if (DAT_180ca09f0 == 0) {
    DAT_180cc4099 = 0;
    DAT_1811089f8 = local_res8;
    return;
  }
  DAT_1811089f8 = local_res8;
  iVar9 = FUN_180011200((ulonglong)DAT_180ca09f0 + local_res8);
  if (999 < iVar9 - 1U) {
    DAT_180cc4099 = 0;
    return;
  }
  cVar8 = FUN_1801ec0c0(&local_res8,&local_f0);
  if (cVar8 == '\0') {
    DAT_180cc4099 = 0;
    return;
  }
  uVar1 = local_e8 & 1;
  uVar2 = local_e8 & 1;
  bVar13 = (byte)local_e8 & 1;
  fVar7 = local_d4._4_4_;
  fVar15 = (float)local_d4 * (float)local_d4 + uStack_dc._4_4_ * uStack_dc._4_4_;
  if (fVar15 < 0.0) {
    fVar15 = (float)FUN_18051af10(fVar15);
  }
  else {
    fVar15 = SQRT(fVar15);
  }
  uVar6 = _DAT_1808ade90;
  fVar3 = DAT_1808ac1f4;
  if (DAT_180cc4099 == '\0') goto LAB_1801e1f2a;
  if (DAT_1809ee798 == 0) {
    if (DAT_1809ee7a0 == '\0') {
      DAT_1809ee798 = FUN_180264b70(PTR_s_sv_gravity_1809ee790);
      DAT_1809ee7a0 = DAT_1809ee798 == 0;
      if (DAT_1809ee798 != 0) goto LAB_1801e1e30;
    }
LAB_1801e1e57:
    fVar10 = DAT_1808acc30;
  }
  else {
LAB_1801e1e30:
    fVar10 = (float)FUN_180264d70(DAT_1809ee798);
    local_res8 = CONCAT44(local_res8._4_4_,fVar10);
    if (((uint)fVar10 & 0x7f800000) == 0x7f800000) goto LAB_1801e1e57;
  }
  if (((DAT_180ca0a48 != 0) &&
      (fVar14 = (float)FUN_18000f3d0(lVar11 + (ulonglong)DAT_180ca0a48),
      ((uint)fVar14 & 0x7f800000) != 0x7f800000)) && (0.0 < fVar14)) {
    fVar16 = fVar14;
  }
  if (((DAT_180cea418 < DAT_1808ace70) && (uVar1 == 0)) &&
     ((float)((uint)(fVar7 - (DAT_1808ac040 - fVar16 * fVar10 * DAT_1808ac00c * fVar3)) & uVar6) <
      DAT_1808ac064)) {
    FUN_1801e19f0(0,fVar15);
  }
  if (((DAT_180cc409b != '\0') && (DAT_180cea418 < DAT_1808ace1c)) &&
     ((DAT_180cc409a == '\0' && (DAT_1808acb60 < fVar7)))) {
    FUN_1801e19f0(1,fVar15);
  }
LAB_1801e1f2a:
  fVar5 = DAT_1808ace38;
  fVar14 = DAT_1808ace14;
  fVar10 = DAT_1808acdf4;
  uVar4 = DAT_1808acda0;
  fVar16 = DAT_1808ac080;
  puVar12 = local_f8;
  fVar17 = fVar7 + _DAT_1808ac7c4;
  local_res8 = (ulonglong)CONCAT42(local_res8._4_4_,CONCAT11(DAT_180cc3f9e,DAT_180cc3f9c)) << 0x10;
  local_f8[0] = 2;
  local_f8[1] = 3;
  do {
    uVar1 = *puVar12;
    lVar11 = (longlong)(int)uVar1;
    if ((uVar2 != 0) || (fVar7 < fVar5)) {
      *(undefined4 *)(lVar11 * 4 + 0x180cea420) = 0;
      if (3 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_1804ed0f0();
      }
      *(undefined1 *)(lVar11 + 0x180cea41c) = 0;
    }
    else if ((*(char *)((longlong)local_f8 + lVar11 + 0x100) == '\0') ||
            (((fVar3 < (float)((uint)fVar7 & uVar6) && (fVar16 <= (float)((uint)fVar17 & uVar6))) &&
             ((fVar7 < fVar14 || (fVar10 < fVar7)))))) {
      *(undefined4 *)(lVar11 * 4 + 0x180cea420) = 0;
    }
    else {
      iVar9 = *(int *)(lVar11 * 4 + 0x180cea420) + 1;
      *(int *)(lVar11 * 4 + 0x180cea420) = iVar9;
      if ((1 < iVar9) && (*(char *)(lVar11 + 0x180cea41c) == '\0')) {
        *(undefined1 *)(lVar11 + 0x180cea41c) = 1;
        FUN_1801e19f0(lVar11,fVar15,uVar4);
      }
    }
    puVar12 = puVar12 + 1;
  } while (puVar12 != (uint *)&local_f0);
  DAT_180cc4099 = 1;
  DAT_180cc409a = bVar13;
  DAT_180cea418 = fVar7;
  return;
}



