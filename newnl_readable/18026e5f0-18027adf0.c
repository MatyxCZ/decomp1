/* ===== 18026e5f0 FUN_18026e5f0 ===== */

longlong FUN_18026e5f0(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x48) {
    FUN_18002ba60(param_3,param_1);
    FUN_18002ba60(param_3 + 0x20,param_1 + 0x20);
    *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    param_3 = param_3 + 0x48;
  }
  return param_3;
}



/* ===== 18026e650 FUN_18026e650 ===== */

undefined8 * FUN_18026e650(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  lVar11 = *param_1;
  uVar12 = 0x38e38e38e38e38e;
  lVar8 = (param_1[1] - lVar11 >> 3) * -0x71c71c71c71c71c7;
  if (lVar8 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar8 + 1;
  uVar10 = (param_1[2] - lVar11 >> 3) * -0x71c71c71c71c71c7;
  if (uVar10 <= 0x38e38e38e38e38e - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar12 = uVar1;
    if (uVar1 <= uVar10) {
      uVar12 = uVar10;
    }
    if (0x38e38e38e38e38e < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar12 * 0x48);
  lVar11 = (param_2 - lVar11) / 0x48;
  puVar9[lVar11 * 9] = 0;
  (puVar9 + lVar11 * 9)[1] = 0;
  puVar9[lVar11 * 9 + 2] = 0;
  puVar2 = puVar9 + lVar11 * 9;
  puVar2[3] = 0;
  local_28 = puVar2 + 9;
  uVar6 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar6;
  uVar6 = param_3[3];
  puVar2[2] = param_3[2];
  puVar2[3] = uVar6;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar4 = *(undefined4 *)(param_3 + 5);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar3;
  *(undefined4 *)(puVar2 + 5) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar4 = *(undefined4 *)(param_3 + 7);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar3;
  *(undefined4 *)(puVar2 + 7) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar5;
  *(undefined1 *)(param_3 + 4) = 0;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_3 + 8);
  lVar11 = param_1[1];
  lVar8 = *param_1;
  puVar13 = puVar9;
  local_48 = param_1;
  local_38 = uVar12;
  local_30 = puVar2;
  if (param_2 != lVar11) {
    puVar7 = local_28;
    FUN_18026e4d0(*param_1,param_2,puVar9);
    puVar9 = puVar7;
    lVar11 = param_1[1];
    lVar8 = param_2;
    local_30 = puVar13;
  }
  FUN_18026e4d0(lVar8,lVar11,puVar9);
  local_40 = 0;
  FUN_18026e950(param_1,puVar13,uVar1,uVar12);
  FUN_18026e890(&local_48);
  return puVar2;
}



/* ===== 18026e890 FUN_18026e890 ===== */

void FUN_18026e890(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  for (lVar6 = *(longlong *)(param_1 + 0x18); lVar6 != lVar2; lVar6 = lVar6 + 0x48) {
    FUN_18000f890(lVar6 + 0x20);
    FUN_18000f890(lVar6);
  }
  uVar5 = *(ulonglong *)(param_1 + 8);
  uVar4 = *(longlong *)(param_1 + 0x10) * 0x48;
  if (0xfff < uVar4) {
    plVar1 = (longlong *)(uVar5 - 8);
    uVar5 = (uVar5 - *plVar1) - 8;
    if (uVar5 < 0x20) {
      thunk_FUN_1803d64e0(*plVar1,uVar4 + 0x27);
      return;
    }
    uVar4 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
  }
  thunk_FUN_1803d64e0(uVar5,uVar4);
  return;
}



/* ===== 18026e950 FUN_18026e950 ===== */

void FUN_18026e950(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar4 = auStack_38;
  puVar5 = auStack_38;
  lVar3 = *param_1;
  if (lVar3 == 0) goto LAB_18026ea09;
  lVar2 = param_1[1];
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x48) {
    FUN_18000f890(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if ((ulonglong)((param_1[2] - lVar3 >> 3) * 8) < 0x1000) {
LAB_18026e9fe:
    puVar5 = puVar4;
  }
  else {
    lVar2 = *(longlong *)(lVar3 + -8);
    if (0x1f < (lVar3 - lVar2) - 8U) {
      lVar2 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_30;
      goto LAB_18026e9fe;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x18026ea09;
  thunk_FUN_1803d64e0(lVar2);
LAB_18026ea09:
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}



/* ===== 18026ea40 FUN_18026ea40 ===== */

void FUN_18026ea40(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(param_3 - 1) >> 1;
  lVar5 = param_2;
  if (param_2 < lVar6) {
    do {
      cVar3 = FUN_180023470(param_1 + 0x90 + lVar5 * 0x90,param_1 + 0x48 + lVar5 * 0x90);
      lVar2 = lVar5 * 9;
      lVar4 = param_1 + lVar5 * 0x48;
      lVar5 = ((longlong)cVar3 >> 0x3f) + (lVar5 + 1) * 2;
      lVar1 = param_1 + lVar5 * 0x48;
      FUN_18002ba60(lVar4,lVar1);
      FUN_18002ba60(param_1 + (lVar2 + 4) * 8,param_1 + 0x20 + lVar5 * 0x48);
      *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(lVar1 + 0x40);
    } while (lVar5 < lVar6);
  }
  if ((lVar5 == lVar6) && ((param_3 & 1) == 0)) {
    lVar5 = param_1 + lVar5 * 0x48;
    FUN_18002ba60(lVar5,param_1 + -0x48 + param_3 * 0x48);
    FUN_18002ba60(lVar5 + 0x20,param_1 + -0x28 + param_3 * 0x48);
    *(undefined4 *)(lVar5 + 0x40) = *(undefined4 *)(param_1 + -8 + param_3 * 0x48);
    lVar5 = param_3 - 1;
  }
  while (param_2 < lVar5) {
    lVar4 = lVar5 + -1 >> 1;
    lVar6 = param_1 + lVar4 * 0x48;
    cVar3 = FUN_180023470(lVar6,param_4);
    if (-1 < cVar3) break;
    lVar1 = param_1 + lVar5 * 0x48;
    FUN_18002ba60(lVar1,lVar6);
    FUN_18002ba60(lVar5 * 0x48 + param_1 + 0x20,lVar4 * 0x48 + param_1 + 0x20);
    *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(lVar6 + 0x40);
    lVar5 = lVar4;
  }
  param_1 = param_1 + lVar5 * 0x48;
  FUN_18002ba60(param_1,param_4);
  FUN_18002ba60(param_1 + 0x20,param_4 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_4 + 0x40);
  return;
}



/* ===== 18026ebf0 FUN_18026ebf0 ===== */

void FUN_18026ebf0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = (param_3 - param_1 >> 3) * -0x71c71c71c71c71c7;
  if (lVar2 < 0x29) {
    cVar1 = FUN_180023470(param_2,param_1);
    if (cVar1 < '\0') {
      FUN_18026f040(param_2,param_1);
    }
    cVar1 = FUN_180023470(param_3,param_2);
    if (cVar1 < '\0') {
      FUN_18026f040(param_3,param_2);
      cVar1 = FUN_180023470(param_2,param_1);
      if (cVar1 < '\0') {
        FUN_18026f040(param_2,param_1);
        return;
      }
    }
  }
  else {
    lVar3 = lVar2 + 1 >> 3;
    lVar2 = lVar3 * 0x48 + param_1;
    lVar4 = lVar3 * 0x90 + param_1;
    cVar1 = FUN_180023470(lVar2,param_1);
    if (cVar1 < '\0') {
      FUN_18026f040(lVar2,param_1);
    }
    cVar1 = FUN_180023470(lVar4,lVar2);
    if (cVar1 < '\0') {
      FUN_18026f040(lVar4,lVar2);
      cVar1 = FUN_180023470(lVar2,param_1);
      if (cVar1 < '\0') {
        FUN_18026f040(lVar2,param_1);
      }
    }
    lVar4 = lVar3 * 0x48 + param_2;
    lVar5 = param_2 + lVar3 * -0x48;
    cVar1 = FUN_180023470(param_2,lVar5);
    if (cVar1 < '\0') {
      FUN_18026f040(param_2,lVar5);
    }
    cVar1 = FUN_180023470(lVar4,param_2);
    if (cVar1 < '\0') {
      FUN_18026f040(lVar4,param_2);
      cVar1 = FUN_180023470(param_2,lVar5);
      if (cVar1 < '\0') {
        FUN_18026f040(param_2,lVar5);
      }
    }
    lVar5 = param_3 + lVar3 * -0x48;
    lVar4 = param_3 + lVar3 * -0x90;
    cVar1 = FUN_180023470(lVar5,lVar4);
    if (cVar1 < '\0') {
      FUN_18026f040(lVar5,lVar4);
    }
    cVar1 = FUN_180023470(param_3,lVar5);
    if (cVar1 < '\0') {
      FUN_18026f040(param_3,lVar5);
      cVar1 = FUN_180023470(lVar5,lVar4);
      if (cVar1 < '\0') {
        FUN_18026f040(lVar5,lVar4);
      }
    }
    cVar1 = FUN_180023470(param_2,lVar2);
    if (cVar1 < '\0') {
      FUN_18026f040(param_2,lVar2);
    }
    cVar1 = FUN_180023470(lVar5,param_2);
    if (cVar1 < '\0') {
      FUN_18026f040(lVar5,param_2);
      cVar1 = FUN_180023470(param_2,lVar2);
      if (cVar1 < '\0') {
        FUN_18026f040(param_2,lVar2);
      }
    }
  }
  return;
}



/* ===== 18026ee20 FUN_18026ee20 ===== */

void FUN_18026ee20(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = param_3;
  while (uVar6 = uVar1, param_2 < uVar6) {
    uVar1 = uVar6 - 0x48;
    cVar3 = FUN_180023470(uVar1,uVar6);
    if ((cVar3 < '\0') || (cVar3 = FUN_180023470(uVar6,uVar1), cVar3 < '\0')) break;
  }
  do {
    param_3 = param_3 + 0x48;
    uVar1 = param_3;
    uVar4 = uVar6;
    if (param_4 <= param_3) break;
    cVar3 = FUN_180023470(param_3,uVar6);
    if ((cVar3 < '\0') || (cVar3 = FUN_180023470(uVar6,param_3), cVar3 < '\0')) break;
  } while( true );
joined_r0x00018026eeb3:
  if (param_4 <= uVar1) {
joined_r0x00018026eef3:
    while (uVar2 = uVar6, param_2 < uVar2) {
      uVar6 = uVar2 - 0x48;
      cVar3 = FUN_180023470(uVar6,uVar4);
      if (-1 < cVar3) {
        cVar3 = FUN_180023470(uVar4,uVar6);
        if (cVar3 < '\0') break;
        if (uVar2 != uVar4) {
          FUN_18026f040(uVar4 - 0x48,uVar6);
        }
        uVar4 = uVar4 - 0x48;
      }
    }
    if ((uVar2 == param_2) && (uVar1 == param_4)) {
      *param_1 = uVar4;
      param_1[1] = param_3;
      return;
    }
    if (uVar2 == param_2) {
      if (param_3 != uVar1) {
        FUN_18026f040(uVar4,param_3);
      }
      param_3 = param_3 + 0x48;
      FUN_18026f040(uVar4,uVar1);
      uVar1 = uVar1 + 0x48;
      uVar6 = uVar2;
      uVar4 = uVar4 + 0x48;
    }
    else {
      uVar6 = uVar2 - 0x48;
      if (uVar1 == param_4) {
        uVar5 = uVar4 - 0x48;
        if (uVar4 != uVar2) {
          FUN_18026f040(uVar6,uVar5);
        }
        param_3 = param_3 - 0x48;
        FUN_18026f040(uVar5,param_3);
        uVar4 = uVar5;
      }
      else {
        FUN_18026f040(uVar1,uVar6);
        uVar1 = uVar1 + 0x48;
      }
    }
    goto joined_r0x00018026eeb3;
  }
  cVar3 = FUN_180023470(uVar4,uVar1);
  if (-1 < cVar3) {
    cVar3 = FUN_180023470(uVar1,uVar4);
    if (cVar3 < '\0') goto joined_r0x00018026eef3;
    if (param_3 != uVar1) {
      FUN_18026f040(param_3,uVar1);
    }
    param_3 = param_3 + 0x48;
  }
  uVar1 = uVar1 + 0x48;
  goto joined_r0x00018026eeb3;
}



/* ===== 18026f000 FUN_18026f000 ===== */

void FUN_18026f000(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    FUN_18000f890(lVar2 + 0x20);
    FUN_18000f890(lVar2);
  }
  return;
}



/* ===== 18026f040 FUN_18026f040 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18026f040(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_98;
  local_78 = *param_1;
  uStack_70 = param_1[1];
  local_68 = param_1[2];
  uStack_60 = param_1[3];
  *(undefined1 *)param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  local_58 = param_1[4];
  local_40 = param_1[7];
  uStack_50 = param_1[5];
  uStack_48 = *(undefined4 *)(param_1 + 6);
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x34);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  local_38 = *(undefined4 *)(param_1 + 8);
  FUN_18002ba60(param_1);
  FUN_18002ba60(param_1 + 4,param_2 + 0x20);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  FUN_18002ba60(param_2,&local_78);
  FUN_18002ba60(param_2 + 0x20,&local_58);
  *(undefined4 *)(param_2 + 0x40) = local_38;
  FUN_18000f890(&local_58);
  FUN_18000f890(&local_78);
  return;
}



/* ===== 18026f140 FUN_18026f140 ===== */

ulonglong FUN_18026f140(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int *piVar2;
  LPCVOID lpAddress;
  SIZE_T SVar3;
  undefined8 uVar4;
  int *piVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *local_res20;
  _MEMORY_BASIC_INFORMATION local_58;
  
  lVar1 = FUN_18000f3a0(param_2);
  piVar2 = (int *)0x7ffffffefffe;
  if (lVar1 - 0x10000U < 0x7ffffffeffff) {
    iVar8 = 0;
    while( true ) {
      lpAddress = (LPCVOID)FUN_18000f3a0(lVar1 + (longlong)iVar8 * 8);
      local_58.BaseAddress = (PVOID)0x0;
      local_58.AllocationBase = (PVOID)0x0;
      local_58.AllocationProtect = 0;
      local_58._20_4_ = 0;
      local_58.RegionSize = 0;
      local_58.State = 0;
      local_58.Protect = 0;
      local_58.Type = 0;
      local_58._44_4_ = 0;
      if (((lpAddress == (LPCVOID)0x0) ||
          (SVar3 = VirtualQuery(lpAddress,&local_58,0x30), SVar3 == 0)) ||
         (local_58.State != 0x1000)) break;
      if (((local_58._32_8_ & 0xf000000000) == 0) || (iVar8 = iVar8 + 1, 0x9f < iVar8)) break;
    }
    piVar2 = (int *)*param_3;
    while( true ) {
      if (piVar2 == (int *)param_3[1]) {
        FUN_180540170(param_1 + 2,0,0x508);
        uVar4 = FUN_18000f3a0(lVar1 + -8);
        uVar6 = 0;
        param_1[2] = uVar4;
        if (0 < iVar8) {
          do {
            uVar4 = FUN_18000f3a0(lVar1 + uVar6 * 8);
            param_1[uVar6 + 3] = uVar4;
            uVar7 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar7;
          } while ((int)uVar7 < iVar8);
        }
        piVar2 = (int *)param_3[1];
        for (piVar5 = (int *)*param_3; piVar5 != piVar2; piVar5 = piVar5 + 4) {
          param_1[(longlong)*piVar5 + 3] = *(undefined8 *)(piVar5 + 2);
        }
        local_res20 = param_1 + 3;
        *param_1 = param_2;
        param_1[1] = lVar1;
        uVar6 = FUN_1800239d0(param_2,&local_res20);
        return uVar6;
      }
      if (iVar8 <= *piVar2) break;
      piVar2 = piVar2 + 4;
    }
  }
  return (ulonglong)piVar2 & 0xffffffffffffff00;
}



/* ===== 18026f2d0 FUN_18026f2d0 ===== */

undefined8
FUN_18026f2d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             undefined1 *param_5,int param_6)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong lVar2;
  
  if (DAT_180920e17 == '\0') {
    UNRECOVERED_JUMPTABLE = (code *)FUN_18000f3a0(DAT_180cfa298 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x00018026f313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  if ((param_6 != 0) && (param_5 != (undefined1 *)0x0)) {
    if ((param_4 != 0) && (lVar2 = FUN_180512ae0(param_4,param_6 + -1), lVar2 != 0)) {
      FUN_180540530(param_5,param_4,lVar2);
      param_5[lVar2] = 0;
      return 0;
    }
    *param_5 = 0;
  }
  return 0;
}



/* ===== 18026f380 FUN_18026f380 ===== */

void FUN_18026f380(code *param_1)

{
  (*param_1)();
  return;
}



/* ===== 18026f390 FUN_18026f390 ===== */

undefined8 * FUN_18026f390(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  FUN_180067510(0,*(undefined8 *)(param_2 + 0x10),param_3,param_4,1);
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    pcVar3 = param_2;
  }
  else {
    pcVar3 = *(char **)param_2;
  }
  pcVar2 = pcVar3 + *(longlong *)(param_2 + 0x10);
  for (; pcVar3 != pcVar2; pcVar3 = pcVar3 + 1) {
    cVar1 = *pcVar3;
    if (cVar1 == '<') {
      FUN_1800134a0(param_1,&DAT_18073dff0,4);
    }
    else if (cVar1 == '>') {
      FUN_1800134a0(param_1,&DAT_18073dfe8,4);
    }
    else if (cVar1 == '&') {
      FUN_1800134a0(param_1,"&amp;",5);
    }
    else {
      FUN_1800690a0(param_1);
    }
  }
  return param_1;
}



/* ===== 18026f480 FUN_18026f480 ===== */

undefined1 FUN_18026f480(void)

{
  HMODULE hModule;
  
  if (DAT_180cfad00 == '\0') {
    DAT_180cfad00 = 1;
    hModule = GetModuleHandleA("tier0.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_180cfad08 = GetProcAddress(hModule,"LoggingSystem_GetChannelCount");
      DAT_180cfad10 = GetProcAddress(hModule,"LoggingSystem_GetChannelFlags");
      DAT_180cfad18 = GetProcAddress(hModule,"LoggingSystem_SetChannelFlags");
      DAT_180cfad20 = GetProcAddress(hModule,"LoggingSystem_FindChannel");
      if (((DAT_180cfad08 != (FARPROC)0x0) && (DAT_180cfad10 != (FARPROC)0x0)) &&
         (DAT_180cfad18 != (FARPROC)0x0)) {
        return 1;
      }
    }
    return 0;
  }
  if (((DAT_180cfad08 == (FARPROC)0x0) || (DAT_180cfad10 == (FARPROC)0x0)) ||
     (DAT_180cfad18 == (FARPROC)0x0)) {
    return 0;
  }
  return 1;
}



/* ===== 18026f570 FUN_18026f570 ===== */

void FUN_18026f570(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  puVar1 = DAT_180cfad38;
  if (DAT_180cfad2c != '\0') {
    bVar4 = DAT_180cfad30 == DAT_180cfad38;
    puVar3 = DAT_180cfad30;
    if (!bVar4) {
      do {
        uVar2 = (*DAT_180cfad10)(*puVar3);
        if (uVar2 != (puVar3[1] * 2 | uVar2 & 0xfffffffd)) {
          (*DAT_180cfad18)(*puVar3);
        }
        puVar3 = puVar3 + 2;
      } while (puVar3 != puVar1);
      bVar4 = DAT_180cfad30 == DAT_180cfad38;
    }
    if (!bVar4) {
      DAT_180cfad38 = DAT_180cfad30;
    }
    DAT_180cfad28 = 0;
    DAT_180cfad2c = '\0';
  }
  return;
}



/* ===== 18026f610 FUN_18026f610 ===== */

void FUN_18026f610(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_res8 [2];
  uint local_res10 [2];
  
  cVar2 = FUN_18026f480();
  if (cVar2 != '\0') {
    if (DAT_180920e19 == '\0') {
      FUN_18026f570();
      return;
    }
    DAT_180cfad2c = 1;
    if (DAT_180cfad20 == (code *)0x0) {
      iVar3 = -1;
    }
    else {
      iVar3 = (*DAT_180cfad20)("neverlose");
    }
    iVar4 = (*DAT_180cfad08)();
    local_res8[0] = DAT_180cfad28;
    while (local_res8[0] < iVar4) {
      uVar5 = (*DAT_180cfad10)(local_res8[0]);
      local_res10[0] = (int)uVar5 >> 1 & 1;
      FUN_180271030(&DAT_180cfad30,local_res8,local_res10);
      iVar1 = local_res8[0];
      if (((uVar5 & 2) == 0) && (local_res8[0] != iVar3)) {
        (*DAT_180cfad18)(local_res8[0],uVar5 | 2);
      }
      local_res8[0] = iVar1 + 1;
    }
    if (DAT_180cfad28 < iVar4) {
      DAT_180cfad28 = iVar4;
    }
  }
  return;
}



/* ===== 18026f710 FUN_18026f710 ===== */

void FUN_18026f710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  FUN_18026f610();
  piVar2 = DAT_180cfad38;
  puVar3 = DAT_180cfa7d8;
  piVar1 = DAT_180cfad30;
  if (DAT_180cfad2c == '\0') {
    if (DAT_180cfa7d8 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018026f760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*DAT_180cfa7d8)(DAT_180cfa7d8,param_2,param_3);
      return;
    }
  }
  else {
    for (; piVar1 != piVar2; piVar1 = piVar1 + 2) {
      uVar5 = (*DAT_180cfad10)(*piVar1);
      if (uVar5 != (piVar1[1] * 2 | uVar5 & 0xfffffffd)) {
        (*DAT_180cfad18)(*piVar1);
      }
    }
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,param_2,param_3);
    }
    if (DAT_180cfad20 == (code *)0x0) {
      iVar6 = -1;
      piVar1 = DAT_180cfad30;
      piVar2 = DAT_180cfad38;
    }
    else {
      iVar6 = (*DAT_180cfad20)("neverlose");
      piVar1 = DAT_180cfad30;
      piVar2 = DAT_180cfad38;
    }
    for (; piVar4 = DAT_180cfad38, piVar1 != DAT_180cfad38; piVar1 = piVar1 + 2) {
      DAT_180cfad38 = piVar2;
      uVar5 = (*DAT_180cfad10)(*piVar1);
      piVar1[1] = (int)uVar5 >> 1 & 1;
      if (((uVar5 & 2) == 0) && (*piVar1 != iVar6)) {
        (*DAT_180cfad18)(*piVar1,uVar5 | 2);
      }
      piVar2 = DAT_180cfad38;
      DAT_180cfad38 = piVar4;
    }
    DAT_180cfad38 = piVar2;
    FUN_1802b2560("[filter console] log_flags ran with the filter on: %d channel bits re-read as the originals"
                  ,(longlong)piVar2 - (longlong)DAT_180cfad30 >> 3);
  }
  return;
}



/* ===== 18026f860 FUN_18026f860 ===== */

undefined8 FUN_18026f860(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x88))(param_1,param_3,"log_flags",0);
  return 1;
}



/* ===== 18026f8a0 FUN_18026f8a0 ===== */

void FUN_18026f8a0(void)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  INT_PTR IVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined **local_res8;
  ulonglong local_res10;
  
  if (DAT_180cfa7c8 != '\0') {
    return;
  }
  DAT_180cfa7c8 = '\x01';
  hModule = GetModuleHandleA("tier0.dll");
  if ((hModule == (HMODULE)0x0) ||
     (pFVar5 = GetProcAddress(hModule,"CreateInterface"), pFVar5 == (FARPROC)0x0)) {
    local_res10 = 0xffff;
    IVar6 = 0;
LAB_18026fab5:
    FUN_1802b2560("[filter console] log_flags: command not found (cvar %p), callback left alone",
                  IVar6);
    return;
  }
  IVar6 = (*pFVar5)("VEngineCvar007",0);
  local_res10 = 0xffff;
  if (((IVar6 == 0) || (cVar1 = FUN_18026f860(IVar6), uVar10 = local_res10, cVar1 == '\0')) ||
     (local_res10 == 0xffff)) goto LAB_18026fab5;
  uVar3 = FUN_180011440(IVar6 + 0x102);
  lVar8 = 0;
  if ((uVar3 & 0x7fff) == 0) {
    FUN_180011200((uVar10 & 0xffff) * 0x38 + 0x2c);
LAB_18026fa87:
    lVar9 = 0;
  }
  else {
    lVar7 = FUN_18000f3a0(IVar6 + 0x108);
    uVar4 = FUN_180011200((uVar10 & 0xffff) * 0x38 + 0x2c + lVar7);
    if (((lVar7 == 0) || (uVar4 == 0)) ||
       (((short)uVar4 == -1 ||
        ((uVar3 = FUN_180011440(IVar6 + 0x13a), (uVar3 & 0x7fff) == 0 ||
         (lVar7 = FUN_18000f3a0(IVar6 + 0x140), lVar7 == 0)))))) goto LAB_18026fa87;
    uVar10 = (ulonglong)(uVar4 & 0xffff) * 0x20;
    lVar9 = uVar10 + lVar7;
    if (lVar9 != 0) {
      lVar8 = FUN_18000f3a0(lVar9);
      bVar2 = FUN_180011220((uVar10 | 8) + lVar7);
      if (((bVar2 & 1) != 0) && (lVar8 != 0)) {
        local_res8 = &PTR_PTR_1809f3608;
        DAT_180cfa7d0 = lVar9;
        DAT_180cfa7d8 = lVar8;
        FUN_1800239d0(lVar9,&local_res8);
        FUN_1802b2560("[filter console] log_flags: callback %p replaced (handle %llu, record %p)",
                      lVar8,local_res10,lVar9);
        return;
      }
      goto LAB_18026fa8d;
    }
  }
  bVar2 = 0;
LAB_18026fa8d:
  FUN_1802b2560("[filter console] log_flags: handle %llu, record %p, flags 0x%X, callback %p: not an interface callback, left alone"
                ,local_res10,lVar9,bVar2,lVar8);
  return;
}



/* ===== 18026fae0 FUN_18026fae0 ===== */

undefined8 FUN_18026fae0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if (DAT_180920e1a != '\0') {
    uVar1 = FUN_180011220(param_2 + 0x50);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)FUN_18000f3a0(DAT_180cfa7e8 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00018026fb33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return uVar2;
}



/* ===== 18026fb40 FUN_18026fb40 ===== */

undefined8 FUN_18026fb40(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if (DAT_180920e1a != '\0') {
    uVar1 = FUN_180011220(param_2 + 0x70);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)FUN_18000f3a0(DAT_180cfa7e8 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00018026fb93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return uVar2;
}



/* ===== 18026fba0 FUN_18026fba0 ===== */

undefined8 FUN_18026fba0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if (DAT_180920e1a != '\0') {
    iVar1 = FUN_180011200(param_2 + 0x60);
    if ((iVar1 - 3U & 0xfffffffd) == 0) {
      return 0;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)FUN_18000f3a0(DAT_180cfa7e8 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00018026fbfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return uVar2;
}



/* ===== 18026fc00 FUN_18026fc00 ===== */

undefined8
FUN_18026fc00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (DAT_180920e1b == '\0') {
    UNRECOVERED_JUMPTABLE = (code *)FUN_18000f3a0(DAT_180cfad58 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00018026fc4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}



/* ===== 18026fc50 FUN_18026fc50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18026fc50(void)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  HMODULE pHVar4;
  HANDLE pvVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  char *pcVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  code *local_68;
  undefined4 *local_58;
  code *pcStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_98;
  if (DAT_180ccfba7 == '\0') {
    DAT_180ccfba7 = '\x01';
    pHVar4 = GetModuleHandleA("client.dll");
    if (pHVar4 == (HMODULE)0x0) {
      pcStack_50 = (code *)0x0;
      local_58 = (undefined4 *)0x0;
    }
    else {
      local_78 = (char *)0x0;
      uStack_70 = (code *)0x0;
      local_68 = (code *)0x0;
      pvVar5 = GetCurrentProcess();
      iVar3 = K32GetModuleInformation(pvVar5,pHVar4,&local_78,0x18);
      if (iVar3 == 0) {
        pcStack_50 = (code *)0x0;
        local_58 = (undefined4 *)0x0;
      }
      else {
        pcStack_50 = (code *)((ulonglong)uStack_70 & 0xffffffff);
        local_58 = (undefined4 *)local_78;
      }
    }
    local_78 = "B9 48 00 00 00 49 89 06 4C 89 35 ? ? ? ?";
    uStack_70 = (code *)0x28;
    lVar6 = FUN_1801d1e00(&local_58,&local_78);
    if (lVar6 != 0) {
      if (lVar6 == -8) {
        DAT_180cfb268 = 0;
      }
      else {
        DAT_180cfb268 = (longlong)*(int *)(lVar6 + 0xb) + 0xf + lVar6;
      }
    }
    uStack_70 = (code *)0x33;
    local_78 = "?$CGameMessageDelegateHook@VCCSUsrMsg_RadioText_t@@";
    DAT_180cfa7a8 = FUN_1801d1f10(&local_58,&local_78);
    uStack_70 = (code *)0x36;
    local_78 = "?$CNetMessagePB@$0HG@VCUserMessageSayText2@@$0N@$00$00";
    DAT_180cfa7b8 = FUN_1801d1f10(&local_58,&local_78);
    if (DAT_180cfb268 == 0) {
      FUN_1802b2560("[error] filter chat messages | the chat delegate wasn\'t found");
      goto LAB_18026fd8f;
    }
  }
  else {
LAB_18026fd8f:
    puVar14 = auStack_98;
    if (DAT_180cfb268 == 0) goto LAB_18026ff81;
  }
  lVar6 = FUN_18000f3a0();
  if (0x7ffffffefffe < lVar6 - 0x10000U) {
    DAT_180cfa7e0 = 0;
    DAT_180cfad50 = 0;
    puVar14 = auStack_98;
    goto LAB_18026ff81;
  }
  if ((DAT_180cfa7e0 == 0) || (puVar7 = (undefined *)FUN_18000f3a0(), puVar7 != &DAT_180cfa7f8)) {
    if (DAT_180cfa7e0 != lVar6) goto LAB_18026fe19;
LAB_18026fe20:
    local_58 = (undefined4 *)CONCAT44(local_58._4_4_,0xb);
    pcStack_50 = FUN_18026fae0;
    local_48 = (code *)CONCAT44(local_48._4_4_,0xc);
    uStack_40 = FUN_18026fb40;
    uStack_30 = FUN_18026fba0;
    local_38 = 0xd;
    local_78 = (char *)FUN_18000fb70(0x30);
    *(undefined4 **)local_78 = local_58;
    *(code **)(local_78 + 8) = pcStack_50;
    uStack_70 = (code *)(local_78 + 0x30);
    *(undefined4 *)(local_78 + 0x10) = (undefined4)local_48;
    *(undefined4 *)(local_78 + 0x14) = local_48._4_4_;
    *(undefined4 *)(local_78 + 0x18) = (undefined4)uStack_40;
    *(undefined4 *)(local_78 + 0x1c) = uStack_40._4_4_;
    *(undefined4 *)(local_78 + 0x20) = local_38;
    *(undefined4 *)(local_78 + 0x24) = uStack_34;
    *(undefined4 *)(local_78 + 0x28) = (undefined4)uStack_30;
    *(undefined4 *)(local_78 + 0x2c) = uStack_30._4_4_;
    local_68 = uStack_70;
    FUN_18026f140(&DAT_180cfa7e0,lVar6,&local_78);
    if (local_78 != (char *)0x0) {
      uVar12 = (longlong)local_68 - (longlong)local_78 & 0xfffffffffffffff0;
      if (uVar12 < 0x1000) {
        pcVar11 = local_78;
      }
      else {
        if (&DAT_0000001f < local_78 + (-8 - (longlong)*(char **)(local_78 + -8))) {
LAB_18027001e:
          pcVar1 = (code *)swi(0x29);
          puVar10 = (undefined4 *)(*pcVar1)(5);
          puVar15 = auStack_90;
LAB_180270025:
          *(undefined8 *)(puVar15 + -8) = 0x18027002d;
          thunk_FUN_1803d64e0(puVar10);
          puVar14 = puVar15;
          goto LAB_18026ff81;
        }
        uVar12 = uVar12 + 0x27;
        pcVar11 = *(char **)(local_78 + -8);
      }
      thunk_FUN_1803d64e0(pcVar11,uVar12);
    }
  }
  else if (DAT_180cfa7e0 != lVar6) {
LAB_18026fe19:
    DAT_180cfad50 = 0;
    goto LAB_18026fe20;
  }
  lVar2 = DAT_180cfa7a8;
  puVar14 = auStack_98;
  if (DAT_180cfa7a8 != 0) {
    if (DAT_180cfad50 != 0) {
      puVar7 = (undefined *)FUN_18000f3a0();
      puVar14 = auStack_98;
      if (puVar7 == &DAT_180cfad68) goto LAB_18026ff81;
    }
    iVar3 = FUN_180011200(lVar6 + 0x18);
    lVar6 = FUN_18000f3a0(lVar6 + 0x20);
    puVar15 = auStack_98;
    puVar14 = auStack_98;
    if ((iVar3 - 1U < 0x3f) && (puVar14 = auStack_98, lVar6 - 0x10000U < 0x7ffffffeffff)) {
      uVar13 = 0;
      puVar14 = auStack_98;
      if (0 < iVar3) {
        do {
          lVar8 = FUN_18000f3a0(lVar6 + (ulonglong)uVar13 * 8);
          if ((lVar8 - 0x10000U < 0x7ffffffeffff) && (lVar9 = FUN_18000f3a0(lVar8), lVar9 == lVar2))
          {
            local_78 = (char *)CONCAT44(local_78._4_4_,5);
            uStack_70 = FUN_18026fc00;
            local_58 = (undefined4 *)FUN_18000fb70(0x10);
            pcStack_50 = (code *)(local_58 + 4);
            *local_58 = (undefined4)local_78;
            local_58[1] = local_78._4_4_;
            local_58[2] = (undefined4)uStack_70;
            local_58[3] = uStack_70._4_4_;
            local_48 = pcStack_50;
            FUN_18026f140(&DAT_180cfad50,lVar8,&local_58);
            puVar14 = auStack_98;
            if (local_58 != (undefined4 *)0x0) {
              uVar12 = (longlong)local_48 - (longlong)local_58 & 0xfffffffffffffff0;
              puVar10 = local_58;
              if (uVar12 < 0x1000) goto LAB_180270025;
              if (0x1f < (ulonglong)((longlong)local_58 + (-8 - *(longlong *)(local_58 + -2))))
              goto LAB_18027001e;
              thunk_FUN_1803d64e0(*(longlong *)(local_58 + -2),uVar12 + 0x27);
              puVar14 = auStack_98;
            }
            break;
          }
          uVar13 = uVar13 + 1;
          puVar14 = auStack_98;
        } while ((int)uVar13 < iVar3);
      }
    }
  }
LAB_18026ff81:
  *(undefined8 *)(puVar14 + -8) = 0x18026ff8d;
  return;
}



/* ===== 180270050 FUN_180270050 ===== */

void FUN_180270050(void)

{
  (**(code **)(*DAT_180cfa7c0 + 0x70))(DAT_180cfa7c0,"CUserMessageSayText2");
  return;
}



/* ===== 180270080 FUN_180270080 ===== */

undefined8 FUN_180270080(longlong param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  pcVar2 = DAT_180961b58;
  pcVar1 = DAT_180961b50;
  puVar6 = (undefined8 *)(*(ulonglong *)(param_1 + 0x38) & 0xfffffffffffffffc);
  if (((*(ulonglong *)(param_1 + 0x38) & 1) != 0) && (puVar6 != (undefined8 *)0x0)) {
    puVar6 = (undefined8 *)*puVar6;
  }
  if ((*(ulonglong *)(param_1 + param_2) & 2) == 0) {
    if (puVar6 != (undefined8 *)0x0) {
      return 0;
    }
    plVar5 = (longlong *)(*DAT_180961b50)(0x20);
    if (plVar5 == (longlong *)0x0) {
      return 0;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[3] = 0xf;
    *(ulonglong *)(param_1 + param_2) = (ulonglong)plVar5 | 2;
  }
  else {
    plVar5 = (longlong *)(*(ulonglong *)(param_1 + param_2) & 0xfffffffffffffffc);
  }
  if ((0xf < (ulonglong)plVar5[3]) && (*plVar5 != 0)) {
    (*pcVar2)();
  }
  uVar3 = FUN_180512ae0(param_3,0xffe);
  if (uVar3 < 0x10) {
    FUN_180540530(plVar5,param_3,uVar3);
    *(undefined1 *)(uVar3 + (longlong)plVar5) = 0;
    plVar5[3] = 0xf;
    plVar5[2] = uVar3;
    return 1;
  }
  lVar4 = (*pcVar1)(uVar3 + 1);
  if (lVar4 == 0) {
    *(undefined1 *)plVar5 = 0;
    plVar5[2] = 0;
    plVar5[3] = 0xf;
    return 0;
  }
  FUN_180540530(lVar4,param_3,uVar3);
  *(undefined1 *)(lVar4 + uVar3) = 0;
  *plVar5 = lVar4;
  plVar5[3] = uVar3;
  plVar5[2] = uVar3;
  return 1;
}



/* ===== 1802701a0 FUN_1802701a0 ===== */

undefined8
FUN_1802701a0(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             longlong param_5)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)(**(code **)(*DAT_180cfa7b0 + 0x30))();
  uVar4 = 0;
  if (plVar3 != (longlong *)0x0) {
    puVar1 = (undefined8 *)*plVar3;
    if (puVar1 == DAT_180cfa7b8) {
      *(undefined1 *)(plVar3 + 0xe) = 1;
      *(undefined4 *)((longlong)plVar3 + 0x74) = param_2;
      *(byte *)(plVar3 + 8) = *(byte *)(plVar3 + 8) | 0xa1;
      cVar2 = FUN_180270080(plVar3,0x48,param_3);
      if (cVar2 != '\0') {
        if (param_4 != 0) {
          *(byte *)(plVar3 + 8) = *(byte *)(plVar3 + 8) | 2;
          cVar2 = FUN_180270080(plVar3,0x50,param_4);
        }
        if (cVar2 != '\0') {
          if (param_5 != 0) {
            *(byte *)(plVar3 + 8) = *(byte *)(plVar3 + 8) | 4;
            cVar2 = FUN_180270080(plVar3,0x58);
          }
          if (cVar2 != '\0') {
            (**(code **)(*param_1 + 0x60))(param_1,plVar3);
            uVar4 = 1;
          }
        }
      }
    }
    (*(code *)*puVar1)(plVar3,1);
  }
  return uVar4;
}



/* ===== 180270290 FUN_180270290 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180270290(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  size_t sVar11;
  HMODULE pHVar12;
  FARPROC pFVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  longlong ****pppplVar18;
  longlong ****pppplVar19;
  longlong ****_Str2;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  char *pcVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  char ****ppppcVar29;
  float fVar30;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [24];
  undefined8 ****local_1c8;
  float local_1b8;
  undefined4 uStack_1b4;
  char ****local_1b0;
  char ****local_1a8;
  longlong ***ppplStack_1a0;
  ulonglong local_198;
  ulonglong local_190;
  undefined8 ****local_188;
  undefined8 uStack_180;
  ulonglong local_178;
  ulonglong local_170;
  longlong ****local_168;
  undefined8 uStack_160;
  ulonglong local_158;
  ulonglong local_150;
  char ****local_148;
  undefined8 uStack_140;
  longlong local_138;
  ulonglong local_130;
  undefined8 ****local_128 [2];
  longlong local_118;
  ulonglong local_110;
  undefined8 ****local_108 [3];
  ulonglong local_f0;
  char local_e8 [128];
  ulonglong local_68;
  
  puVar24 = auStack_1e8;
  local_68 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  local_1b8 = 0.0;
  if (DAT_180920e18 == '\0') goto LAB_180270fe5;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_1b8);
    lVar8 = CONCAT44(uStack_1b4,local_1b8);
  }
  else {
    lVar8 = DAT_181108a00;
  }
  puVar24 = auStack_1e8;
  if (lVar8 == 0) goto LAB_180270fe5;
  lVar8 = FUN_180266660();
  puVar24 = auStack_1e8;
  if (lVar8 == 0) goto LAB_180270fe5;
  lVar8 = FUN_180266660();
  if ((lVar8 != 0) && (DAT_180cf9f80 != 0)) {
    cVar4 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar8);
    puVar24 = auStack_1e8;
    if (cVar4 != '\0') goto LAB_180270fe5;
  }
  FUN_180273d10(local_128,param_1,"teamonly");
  fVar30 = (float)FUN_180273cc0(param_1,"teamonly");
  if (fVar30 == 0.0) {
    ppppuVar14 = local_128;
    if (0xf < local_110) {
      ppppuVar14 = local_128[0];
    }
    if ((local_118 == 1) && (iVar6 = memcmp(ppppuVar14,&DAT_1806d328c,1), iVar6 == 0))
    goto LAB_1802703c4;
    ppppuVar14 = local_128;
    if (0xf < local_110) {
      ppppuVar14 = local_128[0];
    }
    puVar24 = auStack_1e8;
    if (local_118 == 4) {
      iVar6 = memcmp(ppppuVar14,&DAT_1806dfa60,4);
      puVar24 = auStack_1e8;
      if (iVar6 == 0) goto LAB_1802703c4;
    }
  }
  else {
LAB_1802703c4:
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_1b8);
      lVar8 = CONCAT44(uStack_1b4,local_1b8);
    }
    else {
      lVar8 = DAT_181108a00;
    }
    lVar9 = FUN_180273f90(param_1,"userid");
    uVar7 = DAT_180ca09f4;
    puVar24 = auStack_1e8;
    if (((lVar8 != 0) && (puVar24 = auStack_1e8, lVar9 != 0)) &&
       (puVar24 = auStack_1e8, lVar9 != lVar8)) {
      uVar21 = (ulonglong)DAT_180ca09f4;
      if (DAT_180ca09f4 == 0) {
        cVar4 = '\0';
        cVar5 = '\0';
      }
      else {
        cVar4 = FUN_180011220(lVar9 + uVar21);
        cVar5 = FUN_180011220(lVar8 + uVar21);
      }
      if (cVar4 == cVar5) {
        lVar8 = FUN_180264b70("mp_teammates_are_enemies");
        puVar24 = auStack_1e8;
        if (lVar8 != 0) {
          local_1b8 = (float)FUN_180264d70(lVar8);
          puVar24 = auStack_1e8;
          if ((((uint)local_1b8 & 0x7f800000) != 0x7f800000) &&
             (puVar24 = auStack_1e8, local_1b8 != 0.0)) {
            uVar7 = DAT_180ca09f4;
            goto LAB_180270499;
          }
        }
      }
      else {
LAB_180270499:
        if (uVar7 == 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = FUN_180011220((ulonglong)uVar7 + lVar9);
        }
        pcVar26 = "#Cstrike_Chat_CT_Loc";
        if (cVar4 == '\x02') {
          pcVar26 = "#Cstrike_Chat_T_Loc";
        }
        if (DAT_180ca0a08 == 0) {
LAB_180270536:
          uStack_140 = 0;
          local_138 = 0;
          local_130 = 0xf;
          local_148 = (char ****)0x0;
        }
        else {
          local_e8[0] = '\0';
          local_e8[1] = '\0';
          local_e8[2] = '\0';
          local_e8[3] = '\0';
          local_e8[4] = '\0';
          local_e8[5] = '\0';
          local_e8[6] = '\0';
          local_e8[7] = '\0';
          local_e8[8] = '\0';
          local_e8[9] = '\0';
          local_e8[10] = '\0';
          local_e8[0xb] = '\0';
          local_e8[0xc] = '\0';
          local_e8[0xd] = '\0';
          local_e8[0xe] = '\0';
          local_e8[0xf] = '\0';
          local_e8[0x10] = '\0';
          local_e8[0x11] = '\0';
          local_e8[0x12] = '\0';
          local_e8[0x13] = '\0';
          local_e8[0x14] = '\0';
          local_e8[0x15] = '\0';
          local_e8[0x16] = '\0';
          local_e8[0x17] = '\0';
          local_e8[0x18] = '\0';
          local_e8[0x19] = '\0';
          local_e8[0x1a] = '\0';
          local_e8[0x1b] = '\0';
          local_e8[0x1c] = '\0';
          local_e8[0x1d] = '\0';
          local_e8[0x1e] = '\0';
          local_e8[0x1f] = '\0';
          local_e8[0x20] = '\0';
          local_e8[0x21] = '\0';
          local_e8[0x22] = '\0';
          local_e8[0x23] = '\0';
          local_e8[0x24] = '\0';
          local_e8[0x25] = '\0';
          local_e8[0x26] = '\0';
          local_e8[0x27] = '\0';
          local_e8[0x28] = '\0';
          local_e8[0x29] = '\0';
          local_e8[0x2a] = '\0';
          local_e8[0x2b] = '\0';
          local_e8[0x2c] = '\0';
          local_e8[0x2d] = '\0';
          local_e8[0x2e] = '\0';
          local_e8[0x2f] = '\0';
          local_e8[0x30] = '\0';
          local_e8[0x31] = '\0';
          local_e8[0x32] = '\0';
          local_e8[0x33] = '\0';
          local_e8[0x34] = '\0';
          local_e8[0x35] = '\0';
          local_e8[0x36] = '\0';
          local_e8[0x37] = '\0';
          local_e8[0x38] = '\0';
          local_e8[0x39] = '\0';
          local_e8[0x3a] = '\0';
          local_e8[0x3b] = '\0';
          local_e8[0x3c] = '\0';
          local_e8[0x3d] = '\0';
          local_e8[0x3e] = '\0';
          local_e8[0x3f] = '\0';
          local_e8[0x40] = '\0';
          local_e8[0x41] = '\0';
          local_e8[0x42] = '\0';
          local_e8[0x43] = '\0';
          local_e8[0x44] = '\0';
          local_e8[0x45] = '\0';
          local_e8[0x46] = '\0';
          local_e8[0x47] = '\0';
          local_e8[0x48] = '\0';
          local_e8[0x49] = '\0';
          local_e8[0x4a] = '\0';
          local_e8[0x4b] = '\0';
          local_e8[0x4c] = '\0';
          local_e8[0x4d] = '\0';
          local_e8[0x4e] = '\0';
          local_e8[0x4f] = '\0';
          local_e8[0x50] = '\0';
          local_e8[0x51] = '\0';
          local_e8[0x52] = '\0';
          local_e8[0x53] = '\0';
          local_e8[0x54] = '\0';
          local_e8[0x55] = '\0';
          local_e8[0x56] = '\0';
          local_e8[0x57] = '\0';
          local_e8[0x58] = '\0';
          local_e8[0x59] = '\0';
          local_e8[0x5a] = '\0';
          local_e8[0x5b] = '\0';
          local_e8[0x5c] = '\0';
          local_e8[0x5d] = '\0';
          local_e8[0x5e] = '\0';
          local_e8[0x5f] = '\0';
          local_e8[0x60] = '\0';
          local_e8[0x61] = '\0';
          local_e8[0x62] = '\0';
          local_e8[99] = '\0';
          local_e8[100] = '\0';
          local_e8[0x65] = '\0';
          local_e8[0x66] = '\0';
          local_e8[0x67] = '\0';
          local_e8[0x68] = '\0';
          local_e8[0x69] = '\0';
          local_e8[0x6a] = '\0';
          local_e8[0x6b] = '\0';
          local_e8[0x6c] = '\0';
          local_e8[0x6d] = '\0';
          local_e8[0x6e] = '\0';
          local_e8[0x6f] = '\0';
          local_e8[0x70] = '\0';
          local_e8[0x71] = '\0';
          local_e8[0x72] = '\0';
          local_e8[0x73] = '\0';
          local_e8[0x74] = '\0';
          local_e8[0x75] = '\0';
          local_e8[0x76] = '\0';
          local_e8[0x77] = '\0';
          local_e8[0x78] = '\0';
          local_e8[0x79] = '\0';
          local_e8[0x7a] = '\0';
          local_e8[0x7b] = '\0';
          local_e8[0x7c] = '\0';
          local_e8[0x7d] = '\0';
          local_e8[0x7e] = '\0';
          local_e8[0x7f] = '\0';
          uVar10 = FUN_18000f3a0(lVar9 + (ulonglong)DAT_180ca0a08);
          cVar5 = FUN_1803a05b0(uVar10,local_e8);
          if (cVar5 == '\0') goto LAB_180270536;
          local_148 = (char ****)0x0;
          uStack_140 = 0;
          local_138 = 0;
          local_130 = 0;
          sVar11 = strlen(local_e8);
          FUN_1800133a0(&local_148,local_e8,sVar11);
        }
        FUN_180273d10(local_108,param_1,&DAT_18058b7a0);
        lVar8 = FUN_18000f3a0(lVar9 + 0x10);
        if (lVar8 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_180011200(lVar8 + 0x10);
          uVar7 = uVar7 & 0x7fff;
        }
        if (DAT_180cfb268 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = FUN_18000f3a0();
        }
        if ((uVar7 == 0) || (0x7ffffffefffe < lVar8 - 0x10000U)) {
LAB_1802706c6:
          if (DAT_180ccfba6 == '\0') {
            FUN_1802b2560(
                         "[error] reveal enemy chat | no SayText2 path, printing the line without team colours"
                         );
          }
          DAT_180ccfba6 = '\x01';
          local_168 = (longlong ****)0x0;
          uStack_160 = 0;
          local_158 = 0;
          local_150 = 0;
          sVar11 = strlen(pcVar26);
          FUN_1800133a0(&local_168,pcVar26,sVar11);
          if (DAT_180cfc838 == (longlong *)0x0) {
            pHVar12 = GetModuleHandleA("localize.dll");
            if ((pHVar12 == (HMODULE)0x0) ||
               (pFVar13 = GetProcAddress(pHVar12,"CreateInterface"), pFVar13 == (FARPROC)0x0)) {
              DAT_180cfc838 = (longlong *)0x0;
            }
            else {
              DAT_180cfc838 = (longlong *)(*pFVar13)("Localize_001",0);
              if (DAT_180cfc838 != (longlong *)0x0) goto LAB_180270872;
            }
LAB_180270740:
            FUN_180024b50(&local_1a8,&local_168);
          }
          else {
LAB_180270872:
            if (local_158 == 0) goto LAB_180270740;
            pppplVar19 = (longlong ****)&local_168;
            if (0xf < local_150) {
              pppplVar19 = local_168;
            }
            pcVar26 = (char *)(**(code **)(*DAT_180cfc838 + 0x88))(DAT_180cfc838,pppplVar19);
            uVar20 = local_150;
            uVar21 = local_158;
            pppplVar19 = local_168;
            if ((pcVar26 == (char *)0x0) || (*pcVar26 == '\0')) {
              local_1a8 = (char ****)0x0;
              ppplStack_1a0 = (longlong ***)0x0;
              local_198 = 0;
              local_190 = 0;
              pppplVar19 = (longlong ****)&local_168;
              if (0xf < local_150) {
                pppplVar19 = local_168;
              }
              if (0x7fffffffffffffff < local_158) {
LAB_180271024:
                local_190 = 0;
                local_198 = 0;
                ppplStack_1a0 = (longlong ***)0x0;
                local_1a8 = (char ****)0x0;
                    /* WARNING: Subroutine does not return */
                FUN_180011990();
              }
              if (local_158 < 0x10) {
                local_198 = local_158;
                local_190 = 0xf;
                local_1a8 = (char ****)*pppplVar19;
                ppplStack_1a0 = pppplVar19[1];
              }
              else {
                uVar20 = local_158 | 0xf;
                if (uVar20 < 0x8000000000000000) {
                  if (uVar20 < 0x16) {
                    uVar20 = 0x16;
                  }
                }
                else {
                  uVar20 = 0x7fffffffffffffff;
                }
                local_1a8 = (char ****)FUN_18000fb70(uVar20 + 1);
                local_198 = uVar21;
                local_190 = uVar20;
                FUN_180540530(local_1a8,pppplVar19,uVar21 + 1);
              }
            }
            else {
              pppplVar18 = (longlong ****)&local_168;
              if (0xf < local_150) {
                pppplVar18 = local_168;
              }
              if (*(char *)pppplVar18 == '#') {
                pppplVar18 = (longlong ****)&local_168;
                if (0xf < local_150) {
                  pppplVar18 = local_168;
                }
                pppplVar18 = (longlong ****)((longlong)pppplVar18 + 1);
              }
              else {
                pppplVar18 = (longlong ****)&local_168;
                if (0xf < local_150) {
                  pppplVar18 = local_168;
                }
              }
              _Str2 = (longlong ****)&local_168;
              if (0xf < local_150) {
                _Str2 = local_168;
              }
              iVar6 = strcmp(pcVar26,(char *)_Str2);
              if ((iVar6 == 0) || (iVar6 = strcmp(pcVar26,(char *)pppplVar18), iVar6 == 0)) {
                uVar21 = local_158;
                local_1a8 = (char ****)0x0;
                ppplStack_1a0 = (longlong ***)0x0;
                local_198 = 0;
                local_190 = 0;
                pppplVar18 = (longlong ****)&local_168;
                if (0xf < uVar20) {
                  pppplVar18 = pppplVar19;
                }
                if (0x7fffffffffffffff < local_158) goto LAB_180271024;
                if (local_158 < 0x10) {
                  local_198 = local_158;
                  local_190 = 0xf;
                  local_1a8 = (char ****)*pppplVar18;
                  ppplStack_1a0 = pppplVar18[1];
                }
                else {
                  uVar20 = local_158 | 0xf;
                  if (uVar20 < 0x8000000000000000) {
                    if (uVar20 < 0x16) {
                      uVar20 = 0x16;
                    }
                  }
                  else {
                    uVar20 = 0x7fffffffffffffff;
                  }
                  local_1a8 = (char ****)FUN_18000fb70(uVar20 + 1);
                  local_198 = uVar21;
                  local_190 = uVar20;
                  FUN_180540530(local_1a8,pppplVar18,uVar21 + 1);
                }
              }
              else {
                local_1a8 = (char ****)0x0;
                ppplStack_1a0 = (longlong ***)0x0;
                local_198 = 0;
                local_190 = 0;
                sVar11 = strlen(pcVar26);
                FUN_1800133a0(&local_1a8,pcVar26,sVar11);
              }
            }
          }
          puVar25 = auStack_1e8;
          puVar23 = auStack_1e8;
          FUN_18000f890(&local_168);
          if (local_198 == 0) {
LAB_180270776:
            pcVar26 = " [CT] %s1: %s2";
            if (cVar4 == '\x02') {
              pcVar26 = " [T] %s1: %s2";
            }
            sVar11 = strlen(pcVar26);
            FUN_180029840(&local_1a8,pcVar26,sVar11);
          }
          else {
            ppppcVar29 = (char ****)&local_1a8;
            if (0xf < local_190) {
              ppppcVar29 = local_1a8;
            }
            if (*(char *)ppppcVar29 == '#') goto LAB_180270776;
          }
          uStack_180 = 0;
          local_178 = 0;
          local_170 = 0xf;
          local_188 = (undefined8 ****)0x0;
          local_1b8 = 2.10195e-44;
          FUN_180067510(&local_188,local_138);
          ppppcVar29 = (char ****)&local_148;
          if (0xf < local_130) {
            ppppcVar29 = local_148;
          }
          local_1b0 = (char ****)((longlong)ppppcVar29 + local_138);
          puVar24 = auStack_1e8;
          if (ppppcVar29 != local_1b0) {
            do {
              uVar20 = local_170;
              uVar21 = local_178;
              cVar4 = *(char *)ppppcVar29;
              if (cVar4 == '<') {
                FUN_1800134a0(&local_188,&DAT_18073dff0,4);
              }
              else if (cVar4 == '>') {
                FUN_1800134a0(&local_188,&DAT_18073dfe8,4);
              }
              else if (cVar4 == '&') {
                FUN_1800134a0(&local_188,"&amp;",5);
              }
              else if (local_178 < local_170) {
                local_178 = local_178 + 1;
                ppppuVar14 = &local_188;
                if (0xf < local_170) {
                  ppppuVar14 = local_188;
                }
                *(char *)((longlong)ppppuVar14 + uVar21) = cVar4;
                *(undefined1 *)((longlong)ppppuVar14 + uVar21 + 1) = 0;
              }
              else {
                if (local_178 == 0x7fffffffffffffff) goto LAB_18027101e;
                uVar1 = local_178 + 1;
                uVar27 = uVar1 | 0xf;
                if (uVar27 < 0x8000000000000000) {
                  if (0x7fffffffffffffff - (local_170 >> 1) < local_170) {
                    uVar27 = 0x7fffffffffffffff;
                  }
                  else {
                    uVar2 = (local_170 >> 1) + local_170;
                    if (uVar27 < uVar2) {
                      uVar27 = uVar2;
                    }
                  }
                }
                else {
                  uVar27 = 0x7fffffffffffffff;
                }
                ppppuVar15 = (undefined8 ****)FUN_18000fb70(uVar27 + 1);
                ppppuVar14 = local_188;
                local_178 = uVar1;
                local_170 = uVar27;
                if (uVar20 < 0x10) {
                  FUN_180540530(ppppuVar15,&local_188,uVar21);
                  *(char *)((longlong)ppppuVar15 + uVar21) = cVar4;
                  *(undefined1 *)((longlong)ppppuVar15 + uVar21 + 1) = 0;
                }
                else {
                  FUN_180540530(ppppuVar15,local_188,uVar21);
                  *(char *)((longlong)ppppuVar15 + uVar21) = cVar4;
                  *(undefined1 *)((longlong)ppppuVar15 + uVar21 + 1) = 0;
                  if (uVar20 + 1 < 0x1000) {
                    thunk_FUN_1803d64e0(ppppuVar14);
                  }
                  else {
                    if (0x1f < (ulonglong)((longlong)ppppuVar14 + (-8 - (longlong)ppppuVar14[-1])))
                    {
                      pcVar3 = (code *)swi(0x29);
                      (*pcVar3)(5);
                      puVar23 = auStack_1e0;
                      break;
                    }
                    thunk_FUN_1803d64e0(ppppuVar14[-1],uVar20 + 0x28);
                  }
                }
                local_188 = ppppuVar15;
              }
              ppppcVar29 = (char ****)((longlong)ppppcVar29 + 1);
            } while (ppppcVar29 != local_1b0);
            puVar24 = puVar23;
          }
          uVar21 = *(ulonglong *)(puVar24 + 0x50);
          puVar22 = puVar24 + 0x40;
          if (0xf < *(ulonglong *)(puVar24 + 0x58)) {
            puVar22 = *(undefined1 **)(puVar24 + 0x40);
          }
          if (2 < uVar21) {
            *(undefined8 *)(puVar24 + -8) = 0x180270c2a;
            puVar16 = (undefined1 *)thunk_FUN_1804e92d0(puVar22,puVar22 + uVar21,&DAT_1806f1274,3);
            if ((puVar16 != puVar22 + uVar21) &&
               (lVar8 = (longlong)puVar16 - (longlong)puVar22, lVar8 != -1)) {
              while( true ) {
                puVar22 = puVar24 + 0x60;
                if (0xf < *(ulonglong *)(puVar24 + 0x78)) {
                  puVar22 = *(undefined1 **)(puVar24 + 0x60);
                }
                *(undefined8 *)(puVar24 + 0x20) = *(undefined8 *)(puVar24 + 0x70);
                *(undefined8 *)(puVar24 + -8) = 0x180270c7e;
                FUN_1800d8750(puVar24 + 0x40,lVar8,3,puVar22);
                uVar21 = *(ulonglong *)(puVar24 + 0x50);
                puVar22 = puVar24 + 0x40;
                if (0xf < *(ulonglong *)(puVar24 + 0x58)) {
                  puVar22 = *(undefined1 **)(puVar24 + 0x40);
                }
                if ((uVar21 < 3) ||
                   (uVar21 - 3 < (ulonglong)(*(longlong *)(puVar24 + 0x70) + lVar8))) break;
                *(undefined8 *)(puVar24 + -8) = 0x180270cc8;
                puVar16 = (undefined1 *)
                          thunk_FUN_1804e92d0(puVar22 + *(longlong *)(puVar24 + 0x70) + lVar8,
                                              puVar22 + uVar21,&DAT_1806f1274,3);
                if ((puVar16 == puVar22 + uVar21) ||
                   (lVar8 = (longlong)puVar16 - (longlong)puVar22, lVar8 == -1)) break;
              }
            }
          }
          *(undefined8 *)(puVar24 + -8) = 0x180270ce7;
          FUN_18000f890(puVar24 + 0x60);
          *(undefined8 *)(puVar24 + -8) = 0x180270cf5;
          puVar17 = (undefined8 *)FUN_18026f390(puVar24 + 0x60,local_108);
          uVar21 = *(ulonglong *)(puVar24 + 0x50);
          puVar22 = puVar24 + 0x40;
          if (0xf < *(ulonglong *)(puVar24 + 0x58)) {
            puVar22 = *(undefined1 **)(puVar24 + 0x40);
          }
          if (2 < uVar21) {
            *(undefined8 *)(puVar24 + -8) = 0x180270d34;
            puVar16 = (undefined1 *)thunk_FUN_1804e92d0(puVar22,puVar22 + uVar21,&DAT_18073e318,3);
            if ((puVar16 != puVar22 + uVar21) &&
               (lVar8 = (longlong)puVar16 - (longlong)puVar22, lVar8 != -1)) {
              while( true ) {
                if ((ulonglong)puVar17[3] < 0x10) {
                  puVar28 = puVar17;
                }
                else {
                  puVar28 = (undefined8 *)*puVar17;
                }
                *(undefined8 *)(puVar24 + 0x20) = puVar17[2];
                *(undefined8 *)(puVar24 + -8) = 0x180270d7b;
                FUN_1800d8750(puVar24 + 0x40,lVar8,3,puVar28);
                uVar21 = *(ulonglong *)(puVar24 + 0x50);
                puVar22 = puVar24 + 0x40;
                if (0xf < *(ulonglong *)(puVar24 + 0x58)) {
                  puVar22 = *(undefined1 **)(puVar24 + 0x40);
                }
                if ((uVar21 < 3) || (lVar9 = puVar17[2], uVar21 - 3 < (ulonglong)(lVar9 + lVar8)))
                break;
                *(undefined8 *)(puVar24 + -8) = 0x180270dc4;
                puVar16 = (undefined1 *)
                          thunk_FUN_1804e92d0(puVar22 + lVar9 + lVar8,puVar22 + uVar21,
                                              &DAT_18073e318,3);
                if ((puVar16 == puVar22 + uVar21) ||
                   (lVar8 = (longlong)puVar16 - (longlong)puVar22, lVar8 == -1)) break;
              }
            }
          }
          *(undefined8 *)(puVar24 + -8) = 0x180270de3;
          FUN_18000f890(puVar24 + 0x60);
          *(undefined8 *)(puVar24 + 0x60) = 0;
          *(undefined8 *)(puVar24 + 0x68) = 0;
          lVar8 = 0;
          *(undefined8 *)(puVar24 + 0x70) = 0;
          *(undefined8 *)(puVar24 + 0x78) = 0xf;
          puVar24[0x60] = 0;
          uVar21 = *(ulonglong *)(puVar24 + 0x50);
          puVar22 = puVar24 + 0x40;
          if (0xf < *(ulonglong *)(puVar24 + 0x58)) {
            puVar22 = *(undefined1 **)(puVar24 + 0x40);
          }
          if (2 < uVar21) {
            *(undefined8 *)(puVar24 + -8) = 0x180270e3d;
            puVar16 = (undefined1 *)thunk_FUN_1804e92d0(puVar22,puVar22 + uVar21,&DAT_18073e314,3);
            if ((puVar16 != puVar22 + uVar21) &&
               (lVar9 = (longlong)puVar16 - (longlong)puVar22, lVar9 != -1)) {
              while( true ) {
                puVar22 = puVar24 + 0x60;
                if (0xf < *(ulonglong *)(puVar24 + 0x78)) {
                  puVar22 = *(undefined1 **)(puVar24 + 0x60);
                }
                *(longlong *)(puVar24 + 0x20) = lVar8;
                *(undefined8 *)(puVar24 + -8) = 0x180270e89;
                FUN_1800d8750(puVar24 + 0x40,lVar9,3,puVar22);
                uVar21 = *(ulonglong *)(puVar24 + 0x50);
                puVar22 = puVar24 + 0x40;
                if (0xf < *(ulonglong *)(puVar24 + 0x58)) {
                  puVar22 = *(undefined1 **)(puVar24 + 0x40);
                }
                if (uVar21 < 3) break;
                lVar8 = *(longlong *)(puVar24 + 0x70);
                if (uVar21 - 3 < (ulonglong)(lVar8 + lVar9)) break;
                *(undefined8 *)(puVar24 + -8) = 0x180270ed3;
                puVar16 = (undefined1 *)
                          thunk_FUN_1804e92d0(puVar22 + lVar8 + lVar9,puVar22 + uVar21,
                                              &DAT_18073e314,3);
                if ((puVar16 == puVar22 + uVar21) ||
                   (lVar9 = (longlong)puVar16 - (longlong)puVar22, lVar9 == -1)) break;
              }
            }
          }
          uVar21 = *(ulonglong *)(puVar24 + 0x78);
          if (0xf < uVar21) {
            uVar20 = uVar21 + 1;
            lVar8 = *(longlong *)(puVar24 + 0x60);
            lVar9 = lVar8;
            if (0xfff < uVar20) {
              lVar9 = *(longlong *)(lVar8 + -8);
              if (0x1f < (lVar8 - lVar9) - 8U) {
                pcVar3 = (code *)swi(0x29);
                (*pcVar3)(5);
                puVar24 = puVar24 + 8;
                goto LAB_180271017;
              }
              uVar20 = uVar21 + 0x28;
            }
            *(undefined8 *)(puVar24 + -8) = 0x180270f25;
            thunk_FUN_1803d64e0(lVar9,uVar20);
          }
          puVar22 = puVar24 + 0x40;
          if (0xf < *(ulonglong *)(puVar24 + 0x58)) {
            puVar22 = *(undefined1 **)(puVar24 + 0x40);
          }
          if (((DAT_180961aa8 != (code *)0x0) && (DAT_180961d40 != (code *)0x0)) &&
             (puVar22 != (undefined1 *)0x0)) {
            *(undefined8 *)(puVar24 + -8) = 0x180270f5a;
            uVar21 = (*DAT_180961aa8)("CCSGO_HudVoiceStatus");
            if (0x20 < uVar21) {
              *(undefined2 *)(puVar24 + 0x30) = 1;
              *(undefined8 *)(puVar24 + -8) = 0x180270f7f;
              (*DAT_180961d40)(uVar21 - 0x20,puVar22,0xffffffff,puVar24 + 0x30);
            }
          }
          *(undefined8 *)(puVar24 + -8) = 0x180270f8a;
          FUN_18000f890(puVar24 + 0x40);
        }
        else {
          if (DAT_180ccfbd4 == '\0') {
            DAT_180ccfbd4 = '\x01';
            pHVar12 = GetModuleHandleA("networksystem.dll");
            if ((pHVar12 != (HMODULE)0x0) &&
               (pFVar13 = GetProcAddress(pHVar12,"CreateInterface"), pFVar13 != (FARPROC)0x0)) {
              DAT_180cfa7c0 = (*pFVar13)("NetworkMessagesVersion001",0);
            }
          }
          if ((((0x7ffffffefffe < DAT_180cfa7c0 - 0x10000U) || (DAT_180cfa7b8 == 0)) ||
              (DAT_180961b50 == 0)) || (DAT_180961b58 == 0)) goto LAB_1802706c6;
          if (DAT_180cfa7b0 == 0) {
            DAT_180cfa7b0 = FUN_180270050();
          }
          if (0x7ffffffefffe < DAT_180cfa7b0 - 0x10000U) goto LAB_1802706c6;
          local_1c8 = local_108;
          if (0xf < local_f0) {
            local_1c8 = local_108[0];
          }
          ppppcVar29 = (char ****)&local_148;
          if (0xf < local_130) {
            ppppcVar29 = local_148;
          }
          iVar6 = FUN_1802701a0(lVar8,uVar7,pcVar26,ppppcVar29);
          puVar24 = auStack_1e8;
          if (iVar6 != 1) {
            if (-1 < iVar6) goto LAB_1802706c6;
            if (DAT_180ccfba6 == '\0') {
              FUN_1802b2560("[error] reveal enemy chat | the SayText2 handler faulted");
            }
            puVar24 = auStack_1e8;
            DAT_180ccfba6 = '\x01';
          }
        }
        *(undefined8 *)(puVar24 + -8) = 0x180270f94;
        FUN_18000f890(local_108);
        if (0xf < local_130) {
          uVar21 = local_130 + 1;
          ppppcVar29 = local_148;
          if (0xfff < uVar21) {
            ppppcVar29 = (char ****)local_148[-1];
            if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)ppppcVar29))) {
LAB_180271017:
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              puVar25 = puVar24 + 8;
LAB_18027101e:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar25 + -8) = 0x180271023;
              FUN_180011990();
            }
            uVar21 = local_130 + 0x28;
          }
          *(undefined8 *)(puVar24 + -8) = 0x180270fcc;
          thunk_FUN_1803d64e0(ppppcVar29,uVar21);
        }
        local_138 = 0;
        local_130 = 0xf;
        local_148 = (char ****)((ulonglong)local_148 & 0xffffffffffffff00);
      }
    }
  }
  *(undefined8 *)(puVar24 + -8) = 0x180270fe5;
  FUN_18000f890(local_128);
LAB_180270fe5:
  *(undefined8 *)(puVar24 + -8) = 0x180270ff4;
  return;
}



/* ===== 180271030 FUN_180271030 ===== */

undefined4 * FUN_180271030(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar10 = (undefined4 *)param_1[1];
  if (puVar10 != (undefined4 *)param_1[2]) {
    *puVar10 = *param_2;
    puVar10[1] = *param_3;
    puVar10 = (undefined4 *)param_1[1];
    param_1[1] = (longlong)(puVar10 + 2);
    return puVar10;
  }
  uVar9 = 0x1fffffffffffffff;
  uVar13 = (longlong)puVar10 - *param_1;
  lVar4 = (longlong)uVar13 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar6 = param_1[2] - *param_1 >> 3;
  uVar1 = lVar4 + 1;
  if (uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar9 = uVar1;
    if (uVar1 <= uVar6) {
      uVar9 = uVar6;
    }
    if (0x1fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar5 = (undefined4 *)FUN_18000fb70(uVar9 * 8);
  puVar14 = (undefined4 *)((uVar13 & 0xfffffffffffffff8) + (longlong)puVar5);
  *puVar14 = *param_2;
  puVar14[1] = *param_3;
  puVar2 = (undefined4 *)*param_1;
  if (puVar10 == (undefined4 *)param_1[1]) {
    lVar4 = param_1[1] - (longlong)puVar2;
    puVar7 = puVar5;
    puVar10 = puVar2;
  }
  else {
    FUN_180540530(puVar5,puVar2,(longlong)puVar10 - (longlong)puVar2);
    puVar7 = puVar14 + 2;
    lVar4 = param_1[1] - (longlong)puVar10;
  }
  puVar11 = auStack_48;
  puVar12 = auStack_48;
  FUN_180540530(puVar7,puVar10,lVar4);
  lVar4 = *param_1;
  if (lVar4 == 0) goto LAB_180271183;
  lVar8 = lVar4;
  if ((ulonglong)((param_1[2] - lVar4 >> 3) * 8) < 0x1000) {
LAB_180271178:
    puVar12 = puVar11;
  }
  else {
    lVar8 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar8) - 8U) {
      lVar8 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar11 = auStack_40;
      goto LAB_180271178;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x180271183;
  thunk_FUN_1803d64e0(lVar8);
LAB_180271183:
  *param_1 = (longlong)puVar5;
  param_1[1] = (longlong)(puVar5 + uVar1 * 2);
  param_1[2] = (longlong)(puVar5 + uVar9 * 2);
  return puVar14;
}



/* ===== 1802711d0 FUN_1802711d0 ===== */

undefined4 FUN_1802711d0(void)

{
  int iVar1;
  
  if (DAT_1809f3620 == '\0') {
    if (DAT_1811089f0 == 0) {
      return 0;
    }
    DAT_1809f3620 = '\x01';
    DAT_1809f3624 = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
    DAT_1809f3628 = FUN_18038eaf0("CCSWeaponBaseVData","m_flArmorRatio");
    DAT_1809f362c = FUN_18038eaf0("C_BasePlayerWeapon","m_flNextPrimaryAttackTickRatio");
    DAT_1809f3630 = FUN_18038eaf0("C_Knife","m_bFirstAttack");
    iVar1 = FUN_18038eaf0("C_CSPlayerPawn","m_bWaitForNoAttack");
    if (iVar1 == 0) {
      iVar1 = FUN_18038eaf0("C_CSPlayerPawnBase","m_bWaitForNoAttack");
    }
    DAT_1809f3634 = iVar1;
    iVar1 = FUN_18038eaf0("C_CSPlayerPawn","m_bIsDefusing");
    if (iVar1 == 0) {
      iVar1 = FUN_18038eaf0("C_CSPlayerPawnBase","m_bIsDefusing");
    }
    DAT_1809f3638 = iVar1;
    iVar1 = FUN_18038eaf0("C_CSPlayerPawn","m_ArmorValue");
    if (iVar1 == 0) {
      iVar1 = FUN_18038eaf0("C_CSPlayerPawnBase","m_ArmorValue");
    }
    DAT_1809f363c = iVar1;
    iVar1 = FUN_18038eaf0("C_CSPlayerPawn","m_bGunGameImmunity");
    if (iVar1 == 0) {
      iVar1 = FUN_18038eaf0("C_CSPlayerPawnBase","m_bGunGameImmunity");
    }
    DAT_1809f3640 = iVar1;
    DAT_1809f3644 = FUN_18038eaf0("C_BaseEntity","m_lifeState");
    DAT_1809f3648 = FUN_18038eaf0("C_BaseEntity","m_bTakesDamage");
    DAT_1809f364c = FUN_18038eaf0("C_BaseEntity","m_nActualMoveType");
    DAT_1809f3650 = FUN_18038eaf0("C_BaseEntity","m_pRenderComponent");
    DAT_1809f3654 = FUN_18038eaf0("CRenderComponent","m_bEnableRendering");
    DAT_1809f3658 = FUN_18038eaf0("C_BaseEntity","m_iTeamNum");
    DAT_1809f365c = FUN_18038eaf0("C_BaseEntity","m_pCollision");
    DAT_1809f3660 = FUN_18038eaf0("CCollisionProperty","m_usSolidFlags");
    DAT_1809f3664 = FUN_18038eaf0("CCollisionProperty","m_collisionAttribute");
    iVar1 = FUN_18038eaf0("VPhysicsCollisionAttribute_t","m_nHierarchyId");
    if (iVar1 != 0) {
      DAT_1809f3668 = iVar1;
    }
    DAT_1809f366c = FUN_18038eaf0("C_BaseEntity","m_hOwnerEntity");
    DAT_1809f3670 = FUN_18038eaf0("C_CSGameRules","m_bFreezePeriod");
    DAT_1809f3674 = FUN_18038eaf0("C_CSGameRules","m_fRoundStartTime");
    iVar1 = FUN_18038eaf0("C_CSGameRules","m_bGamePaused");
    if (iVar1 == 0) {
      iVar1 = FUN_18038eaf0("C_GameRules","m_bGamePaused");
    }
    DAT_1809f367c = iVar1;
    iVar1 = FUN_18038eaf0("C_CSGameRules","m_nPauseStartTick");
    if (iVar1 == 0) {
      iVar1 = FUN_18038eaf0("C_GameRules","m_nPauseStartTick");
    }
    DAT_1809f3680 = iVar1;
    iVar1 = FUN_18038eaf0("C_CSGameRules","m_nTotalPausedTicks");
    if (iVar1 == 0) {
      iVar1 = FUN_18038eaf0("C_GameRules","m_nTotalPausedTicks");
    }
    DAT_1809f3684 = iVar1;
    DAT_1809f3678 = FUN_18038eaf0("CGameSceneNode","m_angAbsRotation");
  }
  if ((((DAT_1809f3624 == 0) || (DAT_1809f362c == 0)) || (DAT_18096199c == 0)) ||
     ((DAT_1809619a0 == 0 || (DAT_1809f3658 == 0)))) {
    return 0;
  }
  return 1;
}



/* ===== 180271550 FUN_180271550 ===== */

bool FUN_180271550(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  ulonglong uVar4;
  
  lVar1 = DAT_180cfb270;
  if (((param_2 == 0) || (DAT_180cfb270 == 0)) || (param_2 == DAT_180cfb270)) {
    return false;
  }
  uVar4 = (ulonglong)DAT_1809f3658;
  cVar2 = FUN_180011220(uVar4 + param_2);
  cVar3 = FUN_180011220(uVar4 + lVar1);
  return cVar2 != cVar3;
}



/* ===== 1802715b0 FUN_1802715b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802715b0(undefined8 *param_1,char param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined **ppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong local_res8;
  
  ppuVar6 = &PTR_FUN_1809f3688;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[1] = 0xc3001;
  uVar2 = _UNK_1808adf98;
  uVar1 = _DAT_1808adf90;
  if (param_2 != '\0') {
    ppuVar6 = &PTR_FUN_1809f3698;
  }
  *param_1 = ppuVar6;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar4 = FUN_1800451f0(param_3);
  uVar9 = DAT_1809f365c;
  uVar8 = (ulonglong)DAT_1809f365c;
  *(undefined4 *)(param_1 + 4) = uVar4;
  if ((param_3 != 0) && (uVar9 != 0)) {
    lVar7 = FUN_18000f3a0(uVar8 + param_3);
    if (lVar7 != 0) {
      if (DAT_1809f3660 != 0) {
        uVar8 = FUN_180011220((ulonglong)DAT_1809f3660 + lVar7);
        if ((uVar8 & 4) != 0) goto LAB_180271690;
      }
      uVar4 = 0xffffffff;
      if (DAT_1809f366c != 0) {
        iVar5 = FUN_180011200((ulonglong)DAT_1809f366c + param_3);
        if (iVar5 != -1) {
          FUN_1803a0940(&local_res8,iVar5);
          uVar4 = 0xffffffff;
          if (local_res8 != 0) {
            uVar4 = FUN_1800451f0();
          }
          uVar9 = DAT_1809f365c;
        }
      }
      goto LAB_180271695;
    }
  }
LAB_180271690:
  uVar4 = 0xffffffff;
LAB_180271695:
  *(undefined4 *)(param_1 + 5) = uVar4;
  if (uVar9 == 0) {
    uVar3 = 0;
  }
  else {
    lVar7 = FUN_18000f3a0((ulonglong)uVar9 + param_3);
    uVar3 = 0;
    if ((lVar7 != 0) && (DAT_1809f3664 != 0)) {
      uVar3 = FUN_180011440((ulonglong)DAT_1809f3664 + (ulonglong)DAT_1809f3668 + lVar7);
    }
  }
  *(undefined2 *)(param_1 + 6) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x32) = 0xffff0000;
  *(undefined4 *)((longlong)param_1 + 0x36) = 0x4b040f00;
  *(char *)(param_1 + 8) = param_2;
  return;
}



/* ===== 180271700 FUN_180271700 ===== */

void FUN_180271700(void)

{
  (*DAT_180961f48)();
  return;
}



/* ===== 180271730 FUN_180271730 ===== */

undefined8 FUN_180271730(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_180961e18)();
  *param_3 = uVar1;
  return 1;
}



/* ===== 180271760 FUN_180271760 ===== */

undefined8 FUN_180271760(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  (*DAT_180961e20)(param_1,param_3,param_2);
  return 1;
}



/* ===== 180271780 FUN_180271780 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180271780(undefined8 param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  ulonglong uVar5;
  float *pfVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_108 [32];
  double local_e8;
  double local_e0;
  int local_d8 [2];
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  uVar5 = DAT_180919500 ^ (ulonglong)auStack_108;
  if ((DAT_180961e18 != 0) && (DAT_180961e20 != 0)) {
    local_98 = 0x6e697073;
    local_94 = 0x315f65;
    local_d8[0] = -1;
    local_90 = uVar5;
    uVar5 = FUN_180271730(*param_2,&local_98,local_d8);
    if (((char)uVar5 != '\0') && (-1 < local_d8[0])) {
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      uVar5 = FUN_180271760(*param_2,local_d8[0],&local_b8);
      if ((char)uVar5 != '\0') {
        pfVar6 = (float *)FUN_1802ae9b0(local_d0,param_1);
        fVar11 = pfVar6[1] - local_b8._4_4_;
        fVar12 = pfVar6[2] - (float)uStack_b0;
        fVar10 = *pfVar6 - (float)local_b8;
        fVar9 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
        if (fVar9 < 0.0) {
          fVar7 = (float)FUN_18051af10(fVar9);
        }
        else {
          fVar7 = SQRT(fVar9);
        }
        if ((fVar7 < DAT_1808abf54) || (DAT_1808accfc < fVar7)) {
          if (fVar9 == 0.0) {
            fVar10 = 0.0;
            fVar11 = 0.0;
            fVar12 = 0.0;
          }
          else {
            dVar1 = (double)fVar10;
            dVar2 = (double)fVar11;
            dVar3 = (double)fVar12;
            dVar8 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
            if (dVar8 < 0.0) {
              dVar8 = (double)FUN_18051ff20(SUB84(dVar8,0));
            }
            else {
              dVar8 = SQRT(dVar8);
            }
            dVar8 = DAT_1808ac500 / dVar8;
            fVar10 = (float)(dVar1 * dVar8);
            fVar11 = (float)(dVar2 * dVar8);
            fVar12 = (float)(dVar3 * dVar8);
          }
        }
        else {
          fVar7 = DAT_1808ac34c / fVar7;
          fVar10 = fVar10 * fVar7;
          fVar11 = fVar11 * fVar7;
          fVar12 = fVar12 * fVar7;
        }
        fVar9 = (float)local_a8 - local_a8._4_4_ * 0.0;
        fVar7 = local_a8._4_4_ * 0.0 - (float)uStack_a0;
        fVar13 = (float)uStack_a0 * 0.0 - (float)local_a8 * 0.0;
        fVar9 = fVar9 + fVar9;
        fVar7 = fVar7 + fVar7;
        fVar13 = fVar13 + fVar13;
        fVar9 = ((fVar13 * (float)local_a8 - fVar7 * local_a8._4_4_) + fVar9 * uStack_a0._4_4_ + 0.0
                ) * fVar12 +
                ((fVar7 * (float)uStack_a0 - fVar9 * (float)local_a8) +
                fVar13 * uStack_a0._4_4_ + DAT_1808ac34c) * fVar11 +
                ((fVar9 * local_a8._4_4_ - fVar13 * (float)uStack_a0) +
                fVar7 * uStack_a0._4_4_ + 0.0) * fVar10;
        bVar4 = fVar9 < DAT_1808acd7c;
        if (bVar4) {
          local_e0 = (double)fVar9;
          local_e8 = (double)(float)uStack_b0;
          FUN_1802b2560("[knife bot] spine_1 backstab | bone %d at %.1f %.1f %.1f | dot %.3f",
                        local_d8[0],(double)(float)local_b8,(double)local_b8._4_4_);
        }
        return (ulonglong)bVar4;
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



/* ===== 180271b30 FUN_180271b30 ===== */

undefined8 FUN_180271b30(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [64];
  
  uVar2 = DAT_180ca09f8;
  uVar1 = DAT_180ca0950;
  uVar8 = (ulonglong)DAT_180ca0950;
  uVar7 = (ulonglong)DAT_180ca09f8;
  uVar11 = 0;
  if ((((*param_2 == 0) || (DAT_180ca09f8 == 0)) ||
      (lVar3 = FUN_18000f3a0(*param_2 + uVar7), lVar3 == 0)) || (uVar1 == 0)) {
    fVar12 = 0.0;
    fVar13 = 0.0;
  }
  else {
    pfVar4 = (float *)FUN_1800111b0(&local_88,lVar3 + uVar8);
    fVar12 = *pfVar4;
    fVar13 = pfVar4[1];
  }
  if (((*param_1 == 0) || (uVar2 == 0)) ||
     ((lVar3 = FUN_18000f3a0(*param_1 + uVar7), lVar3 == 0 || (uVar1 == 0)))) {
    fVar10 = 0.0;
    fVar9 = 0.0;
  }
  else {
    pfVar4 = (float *)FUN_1800111b0(&local_88,lVar3 + uVar8);
    fVar10 = *pfVar4;
    fVar9 = pfVar4[1];
  }
  fVar12 = fVar12 - fVar10;
  fVar13 = fVar13 - fVar9;
  fVar10 = fVar13 * fVar13 + fVar12 * fVar12;
  if (fVar10 < 0.0) {
    fVar10 = (float)FUN_18051af10(fVar10);
  }
  else {
    fVar10 = SQRT(fVar10);
  }
  if (fVar10 == 0.0) {
    fVar12 = 0.0;
    fVar13 = 0.0;
  }
  else {
    fVar12 = fVar12 * (DAT_1808ac34c / fVar10);
    fVar13 = fVar13 * (DAT_1808ac34c / fVar10);
  }
  if (((*param_2 != 0) && (uVar2 != 0)) &&
     ((lVar3 = FUN_18000f3a0(*param_2 + uVar7), lVar3 != 0 && (DAT_1809f3678 != 0)))) {
    puVar5 = (undefined4 *)FUN_1800111b0(local_78,lVar3 + (ulonglong)DAT_1809f3678);
    local_98 = 0;
    local_80 = 0;
    local_88 = *puVar5;
    local_84 = puVar5[1];
    FUN_1803a19a0(&local_88,&local_98,local_68,local_78);
    if (DAT_1808ac1d8 < local_98._4_4_ * fVar13 + (float)local_98 * fVar12) {
      return 1;
    }
  }
  if ((*param_2 == 0) || (DAT_180ca0a20 == 0)) {
    local_84 = 0;
  }
  else {
    puVar5 = (undefined4 *)FUN_1800111b0(local_68,*param_2 + (ulonglong)DAT_180ca0a20);
    uVar11 = *puVar5;
    local_84 = puVar5[1];
  }
  local_98 = 0;
  local_80 = 0;
  local_88 = uVar11;
  FUN_1803a19a0(&local_88,&local_98,local_78,local_68);
  if (DAT_1808ac1d8 < local_98._4_4_ * fVar13 + (float)local_98 * fVar12) {
    return 1;
  }
  uVar6 = FUN_180271780(param_1,param_2);
  return uVar6;
}



/* ===== 180271d80 FUN_180271d80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_180271d80(ulonglong *param_1,undefined8 *param_2,float *param_3,char param_4,ulonglong *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_368 [32];
  undefined8 *local_348;
  undefined8 *local_340;
  ulonglong local_338;
  undefined8 local_330;
  float local_328;
  float local_320;
  float local_31c;
  undefined4 uStack_318;
  undefined2 uStack_314;
  undefined2 local_312;
  undefined8 local_308;
  longlong lStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  ulonglong uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  ulonglong uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  float fStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  ulonglong uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  float fStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined2 uStack_150;
  undefined1 uStack_14e;
  char cStack_14d;
  undefined4 uStack_14c;
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
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_368;
  *(uint *)((longlong)param_5 + 10) = CONCAT22(uStack_314,uStack_318._2_2_);
  *(undefined2 *)((longlong)param_5 + 0xe) = local_312;
  *param_5 = 0;
  *(undefined2 *)(param_5 + 1) = 0;
  if (param_4 == '\0') {
    fVar13 = DAT_1808aca80;
  }
  else {
    fVar13 = DAT_1808acab8;
  }
  local_328 = fVar13 * param_3[2] + *(float *)(param_2 + 1);
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_330 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)param_3 >> 0x20) * fVar13,
                       (float)*param_2 + (float)*(undefined8 *)param_3 * fVar13);
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1802715b0(&local_e8,1,*param_1);
  FUN_1802715b0(&local_148,0,*param_1);
  FUN_180540170(&local_2c8,0,0xc0);
  uVar2 = _UNK_1808adae8;
  uVar1 = _DAT_1808adae0;
  fVar13 = DAT_1808ac34c;
  local_298 = _DAT_1808adae0;
  uStack_290 = _UNK_1808adae8;
  local_288 = _DAT_1808adae0;
  uStack_280 = _UNK_1808adae8;
  local_218 = CONCAT44(0xffffffff,(undefined4)local_218);
  uStack_210 = CONCAT62(uStack_210._2_6_,0xffff);
  fStack_21c = 1.0;
  if (DAT_180961f48 == 0) {
    return 0;
  }
  if (DAT_180961f40 == 0) {
    return 0;
  }
  lVar8 = FUN_18000f3a0();
  if (lVar8 == 0) {
    return 0;
  }
  local_340 = &local_2c8;
  local_348 = &local_e8;
  local_308 = 0;
  lStack_300 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  cVar4 = FUN_180271700(lVar8,&local_308,param_2,&local_330);
  if (cVar4 == '\0') {
    return 0;
  }
  if (((uStack_210._3_1_ == '\0') && (fVar13 <= fStack_21c)) || (uStack_2c0 == 0)) {
LAB_180271fa6:
    FUN_180540170(&local_2c8,0,0xc0);
    local_298 = uVar1;
    uStack_290 = uVar2;
    local_288 = uVar1;
    uStack_280 = uVar2;
    fStack_21c = 1.0;
    local_218 = CONCAT44(0xffffffff,(undefined4)local_218);
    uStack_210 = CONCAT62(uStack_210._2_6_,0xffff);
    if (DAT_180961f48 == 0) {
      return 0;
    }
    if (DAT_180961f40 == 0) {
      return 0;
    }
    lVar8 = FUN_18000f3a0();
    if (lVar8 == 0) {
      return 0;
    }
    local_340 = &local_2c8;
    local_348 = &local_148;
    local_308 = 0;
    lStack_300 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    cVar4 = FUN_180271700(lVar8,&local_308,param_2,&local_330);
    if (cVar4 == '\0') {
      return 0;
    }
  }
  else {
    local_338 = uStack_2c0;
    pcVar9 = (char *)FUN_1803a0710(&local_338);
    if ((pcVar9 == (char *)0x0) || (iVar7 = strcmp(pcVar9,"C_CSPlayerPawn"), iVar7 != 0))
    goto LAB_180271fa6;
  }
  if (uStack_210._3_1_ == '\0') {
    cVar4 = '\0';
    if (fVar13 <= fStack_21c) {
      uVar11 = 0xe;
      while( true ) {
        FUN_180540170(&local_208,0,0xc0);
        fVar14 = (float)(int)uVar11;
        fStack_15c = 1.0;
        uStack_154 = 0xffffffff;
        uStack_150 = 0xffff;
        local_1d8 = uVar1;
        uStack_1d0 = uVar2;
        local_338 = CONCAT44(local_338._4_4_,fVar14);
        local_320 = (float)local_330 - fVar14 * *param_3;
        local_1c8 = uVar1;
        uStack_1c0 = uVar2;
        local_31c = local_330._4_4_ - fVar14 * param_3[1];
        uStack_318 = local_328 - fVar14 * param_3[2];
        if ((DAT_180961f48 == 0) || (DAT_180961f40 == 0)) break;
        lVar8 = FUN_18000f3a0();
        if (lVar8 == 0) break;
        local_308 = 0;
        lStack_300 = 0;
        local_2f8 = 0;
        uStack_2f0 = 0;
        local_2e8 = 0;
        local_2d8 = 0;
        uStack_2d0 = 0;
        if (0.0 < fVar14) {
          lStack_300 = local_338 << 0x20;
        }
        uStack_2e0 = (ulonglong)(0.0 < fVar14);
        local_340 = &local_208;
        local_348 = &local_148;
        cVar4 = FUN_180271700(lVar8,&local_308,param_2,&local_320);
        if ((cVar4 == '\0') || ((cStack_14d == '\0' && (fVar13 <= fStack_15c)))) break;
        local_2c8 = local_208;
        uStack_2c0 = uStack_200;
        local_2b8 = local_1f8;
        uStack_2b0 = uStack_1f0;
        local_2a8 = local_1e8;
        uStack_2a0 = uStack_1e0;
        local_298 = local_1d8;
        uStack_290 = uStack_1d0;
        local_288 = local_1c8;
        uStack_280 = uStack_1c0;
        local_278 = local_1b8;
        uStack_270 = uStack_1b0;
        local_268 = local_1a8;
        uStack_260 = uStack_1a0;
        local_258 = local_198;
        uStack_250 = uStack_190;
        local_248 = local_188;
        uStack_240 = uStack_180;
        local_238 = local_178;
        uStack_230 = uStack_170;
        local_218 = CONCAT44(uStack_154,local_158);
        uStack_210 = CONCAT44(uStack_14c,CONCAT13(cStack_14d,CONCAT12(uStack_14e,uStack_150)));
        local_228 = local_168;
        uStack_224 = uStack_164;
        uStack_220 = uStack_160;
        fStack_21c = fStack_15c;
        if (uVar11 < 4) break;
        uVar11 = uVar11 - 3;
      }
      cVar4 = (char)((ulonglong)uStack_210 >> 0x18);
    }
    if ((cVar4 == '\0') && (fVar13 <= fStack_21c)) {
      return 0;
    }
  }
  uVar3 = uStack_2c0;
  if (uStack_2c0 != 0) {
    local_338 = uStack_2c0;
    pcVar9 = (char *)FUN_1803a0710(&local_338);
    if (pcVar9 != (char *)0x0) {
      iVar7 = strcmp(pcVar9,"C_CSPlayerPawn");
      if (iVar7 == 0) {
        local_338 = uVar3;
        if (DAT_1809f3644 != 0) {
          cVar4 = FUN_180011220(uVar3 + DAT_1809f3644);
          if (cVar4 != '\0') {
            return 0;
          }
        }
        lVar8 = FUN_18000f3a0(uVar3 + 0x10);
        if (lVar8 != 0) {
          cVar4 = FUN_180011220(lVar8 + 0x30);
          if (-1 < cVar4) {
            if (DAT_1809f3648 != 0) {
              cVar4 = FUN_180011220(uVar3 + DAT_1809f3648);
              if (cVar4 == '\0') {
                return 0;
              }
            }
            if (DAT_1809f3640 != 0) {
              cVar4 = FUN_180011220(uVar3 + DAT_1809f3640);
              if (cVar4 != '\0') {
                return 0;
              }
            }
            uVar10 = (ulonglong)DAT_180ca09f0;
            if (DAT_180ca09f0 != 0) {
              iVar7 = FUN_180011200(uVar3 + uVar10);
              uVar11 = DAT_180ca09f4;
              if (iVar7 - 1U < 1000) {
                if (*param_1 != 0) {
                  if (uVar3 == *param_1) {
                    return 0;
                  }
                  uVar12 = (ulonglong)DAT_180ca09f4;
                  if (DAT_180ca09f4 == 0) {
                    cVar4 = '\0';
                  }
                  else {
                    cVar4 = FUN_180011220(uVar3 + uVar12);
                  }
                  if ((*param_1 == 0) || (uVar11 == 0)) {
                    cVar5 = '\0';
                  }
                  else {
                    cVar5 = FUN_180011220(*param_1 + uVar12);
                  }
                  if (cVar4 == cVar5) {
                    return 0;
                  }
                }
                if (DAT_1809f364c != 0) {
                  cVar4 = FUN_180011220(uVar3 + DAT_1809f364c);
                  if ((byte)(cVar4 - 7U) < 2) {
                    return 0;
                  }
                }
                iVar7 = FUN_180011200(uVar3 + uVar10);
                if (0 < iVar7) {
                  if ((DAT_1809f3650 == 0) ||
                     (uVar10 = (ulonglong)DAT_1809f3654, DAT_1809f3654 == 0)) {
LAB_1802723cb:
                    *param_5 = uVar3;
                    *(char *)(param_5 + 1) = param_4;
                    uVar6 = FUN_180271b30(param_1,&local_338);
                    *(undefined1 *)((longlong)param_5 + 9) = uVar6;
                    return 1;
                  }
                  lVar8 = FUN_18000f3a0(uVar3 + DAT_1809f3650);
                  if (lVar8 != 0) {
                    cVar4 = FUN_180011220(lVar8 + uVar10);
                    if (cVar4 != '\0') goto LAB_1802723cb;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



/* ===== 180272430 FUN_180272430 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180272430(longlong param_1)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  uint *puVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  char cVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [12];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [12];
  undefined1 auVar37 [16];
  char local_res10;
  undefined7 uStackX_11;
  char local_res18;
  float local_res20;
  undefined4 uStackX_24;
  longlong local_140;
  undefined8 local_138;
  float local_130;
  longlong local_128;
  undefined4 local_120;
  undefined8 local_118;
  uint local_110;
  longlong local_108;
  undefined2 local_100;
  undefined1 local_f8 [184];
  
  cVar2 = DAT_180cd1304;
  if (param_1 == 0) {
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    lVar10 = CONCAT71(uStackX_11,local_res10);
  }
  else {
    lVar10 = DAT_181108a00;
  }
  if ((lVar10 == 0) || (DAT_180ca09b8 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_180011200((ulonglong)DAT_180ca09b8 + lVar10);
  }
  uVar17 = DAT_180cfb280;
  fVar34 = DAT_1808ac00c;
  fVar26 = (float)iVar4 * DAT_1808ac00c;
  if (DAT_180cfb280 != 0) {
    if (fVar26 < DAT_180cfb27c) {
      *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | DAT_180cfb280;
      return;
    }
    DAT_180cfb280 = 0;
    *(ulonglong *)(param_1 + 0x68) = *(ulonglong *)(param_1 + 0x68) | uVar17;
    *(ulonglong *)(param_1 + 0x60) = ~uVar17 & *(ulonglong *)(param_1 + 0x60);
  }
  cVar18 = DAT_180920dd6;
  if (DAT_180920dd5 == '\0') {
    return;
  }
  if (DAT_18094f760 == '\0') {
    return;
  }
  local_res10 = DAT_180920dd6;
  local_res18 = DAT_180920dd7;
  if ((DAT_180920dd6 == '\0') && (DAT_180920dd7 == '\0')) {
    return;
  }
  if (cVar2 == '\0') {
    FUN_1803a0b60(&local_res20);
    DAT_181108a00 = CONCAT44(uStackX_24,local_res20);
    local_140 = FUN_1803a0c50(&local_res20);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_140 = DAT_1811089f8;
  }
  lVar10 = local_140;
  if (local_140 == 0) {
    DAT_1811089f8 = local_140;
    return;
  }
  if (DAT_180ca09f0 == 0) {
    DAT_1811089f8 = local_140;
    return;
  }
  DAT_1811089f8 = local_140;
  iVar5 = FUN_180011200((ulonglong)DAT_180ca09f0 + local_140);
  if (999 < iVar5 - 1U) {
    return;
  }
  cVar2 = FUN_1802711d0();
  if (cVar2 == '\0') {
    return;
  }
  if (lVar10 == 0) {
    DAT_180cfb270 = lVar10;
    return;
  }
  if (DAT_180ca0a0c == 0) {
    DAT_180cfb270 = lVar10;
    return;
  }
  uVar17 = (ulonglong)DAT_180ca0a10;
  if (DAT_180ca0a10 == 0) {
    DAT_180cfb270 = lVar10;
    return;
  }
  DAT_180cfb270 = lVar10;
  lVar11 = FUN_18000f3a0(lVar10 + (ulonglong)DAT_180ca0a0c);
  if (lVar11 == 0) {
    return;
  }
  uVar6 = FUN_180011200(lVar11 + uVar17);
  plVar12 = (longlong *)FUN_1803a0940(&local_res20,uVar6);
  lVar11 = *plVar12;
  if (lVar11 == 0) {
    return;
  }
  lVar13 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + lVar11);
  if (lVar13 == 0) {
    return;
  }
  iVar5 = FUN_180011200((ulonglong)DAT_1809f3624 + lVar13);
  if (iVar5 != 0) {
    return;
  }
  iVar5 = FUN_180011200((ulonglong)DAT_18096199c + lVar11);
  uVar23 = FUN_18000f3d0((ulonglong)DAT_1809f362c + lVar11);
  fVar27 = DAT_1808ac34c;
  if (((float)uVar23 < 0.0) || (DAT_1808ac34c <= (float)uVar23)) {
    local_res20 = 0.0;
    fVar20 = (float)FUN_180512fd0(uVar23,&local_res20);
    fVar21 = local_res20;
    if (fVar20 < 0.0) {
      fVar21 = local_res20 + DAT_1808acda0;
    }
    iVar5 = iVar5 + (int)fVar21;
  }
  if (iVar4 <= iVar5) {
    return;
  }
  if ((DAT_1809f3634 != 0) &&
     (cVar2 = FUN_180011220(lVar10 + (ulonglong)DAT_1809f3634), cVar2 != '\0')) {
    return;
  }
  if ((DAT_1809f3638 != 0) &&
     (cVar2 = FUN_180011220(lVar10 + (ulonglong)DAT_1809f3638), cVar2 != '\0')) {
    return;
  }
  lVar11 = FUN_180266660();
  if ((((lVar11 != 0) && (DAT_1809f3670 != 0)) &&
      (uVar17 = (ulonglong)DAT_1809f3674, DAT_1809f3674 != 0)) &&
     (cVar2 = FUN_180011220(lVar11 + (ulonglong)DAT_1809f3670), cVar2 != '\0')) {
    fVar21 = (float)FUN_18000f3d0(lVar11 + uVar17);
    if (((uint)fVar21 & 0x7f800000) == 0x7f800000) {
      return;
    }
    if ((DAT_180961a50 == 0) || (lVar13 = FUN_18000f3a0(), lVar13 == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_180011200(lVar13 + 0x44);
    }
    if (DAT_1809f3680 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_180011200(lVar11 + (ulonglong)DAT_1809f3680);
    }
    if (DAT_1809f3684 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_180011200(lVar11 + (ulonglong)DAT_1809f3684);
    }
    fVar20 = fVar21 - (float)iVar8 * fVar34;
    if (((DAT_1809f367c != 0) &&
        (cVar2 = FUN_180011220(lVar11 + (ulonglong)DAT_1809f367c), cVar2 != '\0')) &&
       ((0 < iVar5 && ((float)iVar5 * fVar34 <= fVar21)))) {
      fVar20 = (float)(iVar5 - iVar8) * fVar34;
    }
    if (fVar20 + (float)(int)(~uVar7 + iVar4) * fVar34 < fVar21) {
      return;
    }
    cVar18 = local_res10;
  }
  if ((*(uint *)(param_1 + 0x60) & 0x801) != 0) {
    return;
  }
  lVar11 = *(longlong *)(param_1 + 0x40);
  if (0x7ffffffefffe < lVar11 - 0x10000U) {
    return;
  }
  if (0x7ffffffefffe < *(longlong *)(lVar11 + 0x40) - 0x10000U) {
    return;
  }
  local_138 = 0;
  local_130 = 0.0;
  cVar2 = FUN_1802ae6f0(&local_140,iVar4);
  if (cVar2 == '\0') {
    if (((DAT_180ca09f8 == 0) ||
        (lVar13 = FUN_18000f3a0(lVar10 + (ulonglong)DAT_180ca09f8), lVar13 == 0)) ||
       (DAT_180ca0950 == 0)) {
      auVar29 = ZEXT812(0);
      auVar36 = ZEXT812(0);
      fVar21 = 0.0;
    }
    else {
      puVar14 = (uint *)FUN_1800111b0(&local_118,lVar13 + (ulonglong)DAT_180ca0950);
      auVar29._4_8_ = 0;
      auVar29._0_4_ = *puVar14;
      auVar36._4_8_ = 0;
      auVar36._0_4_ = puVar14[1];
      fVar21 = (float)puVar14[2];
    }
    if (DAT_180ca0a34 == 0) {
LAB_1802729ca:
      local_130 = DAT_1808acab0;
    }
    else {
      pfVar15 = (float *)FUN_1800111b0(&local_118,lVar10 + (ulonglong)DAT_180ca0a34);
      local_130 = pfVar15[2];
      if (((((uint)local_130 & 0x7f800000) == 0x7f800000) || (local_130 <= 0.0)) ||
         (DAT_1808acb28 <= local_130)) goto LAB_1802729ca;
      auVar29._4_8_ = auVar29._4_8_;
      auVar29._0_4_ = auVar29._0_4_ + *pfVar15;
      auVar36._4_8_ = auVar36._4_8_;
      auVar36._0_4_ = auVar36._0_4_ + pfVar15[1];
    }
    local_130 = local_130 + fVar21;
    local_138 = CONCAT44(auVar36._0_4_,auVar29._0_4_);
  }
  if (DAT_180ca0a30 == 0) {
    fVar21 = 0.0;
    fVar20 = 0.0;
  }
  else {
    pfVar15 = (float *)FUN_1800111b0(&local_118,lVar10 + (ulonglong)DAT_180ca0a30);
    fVar21 = *pfVar15;
    fVar20 = pfVar15[1];
  }
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_118 = CONCAT44(fVar20 + *(float *)(*(longlong *)(lVar11 + 0x40) + 0x1c),
                       fVar21 + *(float *)(*(longlong *)(lVar11 + 0x40) + 0x18));
  FUN_1803a19a0(&local_118,&local_128,local_f8,&local_108);
  local_110 = local_120;
  local_118 = local_128;
  if ((DAT_1809f3630 == 0) || (cVar2 = FUN_180011220(), cVar2 == '\0')) {
    iVar5 = FUN_180011200();
    local_res10 = '\0';
    if (DAT_1808ac1b0 < (float)(iVar4 - iVar5) * fVar34) goto LAB_180272ab6;
  }
  else {
LAB_180272ab6:
    local_res10 = '\x01';
  }
  if (DAT_1809f3628 == 0) {
    local_res20 = fVar27;
  }
  else {
    local_res20 = (float)FUN_18000f3d0();
  }
  local_128 = 0;
  local_120 = local_120 & 0xffff0000;
  local_108 = 0;
  local_100 = 0;
  cVar2 = '\0';
  if (cVar18 != '\0') {
    FUN_180271d80(&local_140,&local_138,&local_118,1,&local_128);
    cVar2 = local_120._1_1_;
  }
  lVar10 = local_128;
  fVar30 = DAT_1808acd08;
  fVar20 = DAT_1808acb58;
  fVar21 = DAT_1808acaf4;
  uVar9 = DAT_1808acab4;
  uVar7 = DAT_1808aca54;
  fVar34 = DAT_1808ac1f4;
  auVar37 = ZEXT416(DAT_1808ac988);
  lVar11 = 0;
  if (local_res18 == '\0') {
LAB_180272faf:
    iVar4 = DAT_1809f363c;
    uVar19 = DAT_180ca09f0;
  }
  else {
    FUN_180271d80(&local_140,&local_138,&local_118,0,&local_108);
    lVar11 = local_108;
    uVar1 = DAT_180ca09f8;
    uVar19 = DAT_180ca0950;
    if (lVar10 == 0) {
      cVar18 = (char)local_120;
      uVar19 = DAT_180ca09f0;
      iVar4 = DAT_1809f363c;
      goto LAB_180273105;
    }
    if ((cVar2 == '\0') || (local_108 != 0)) goto LAB_180272faf;
    if ((((lVar10 == 0) || (DAT_180ca09f8 == 0)) || (lVar13 = FUN_18000f3a0(), lVar13 == 0)) ||
       (uVar19 == 0)) {
      fVar34 = 0.0;
      fVar21 = 0.0;
      fVar20 = 0.0;
    }
    else {
      pfVar15 = (float *)FUN_1800111b0();
      fVar34 = *pfVar15;
      fVar21 = pfVar15[1];
      fVar20 = pfVar15[2];
    }
    lVar13 = local_140;
    if (((local_140 == 0) || (uVar1 == 0)) ||
       ((lVar16 = FUN_18000f3a0(), lVar16 == 0 || (uVar19 == 0)))) {
      fVar30 = 0.0;
      fVar35 = 0.0;
      fVar22 = 0.0;
    }
    else {
      pfVar15 = (float *)FUN_1800111b0();
      fVar30 = *pfVar15;
      fVar35 = pfVar15[1];
      fVar22 = pfVar15[2];
    }
    fVar20 = fVar20 - fVar22;
    fVar21 = fVar21 - fVar35;
    fVar34 = fVar34 - fVar30;
    fVar30 = fVar21 * fVar21 + fVar34 * fVar34 + fVar20 * fVar20;
    if (fVar30 < 0.0) {
      fVar30 = (float)FUN_18051af10();
    }
    else {
      fVar30 = SQRT(fVar30);
    }
    iVar4 = DAT_180ca0a1c;
    if (fVar30 <= 0.0) {
      fVar34 = 0.0;
      fVar21 = 0.0;
      fVar20 = 0.0;
    }
    else {
      fVar27 = fVar27 / fVar30;
      fVar34 = fVar34 * fVar27;
      fVar21 = fVar21 * fVar27;
      fVar20 = fVar20 * fVar27;
    }
    if ((lVar13 == 0) || (DAT_180ca0a1c == 0)) {
      fVar27 = 0.0;
      fVar30 = 0.0;
      fVar35 = 0.0;
    }
    else {
      pfVar15 = (float *)FUN_1800111b0();
      fVar27 = *pfVar15;
      fVar30 = pfVar15[1];
      fVar35 = pfVar15[2];
    }
    if ((lVar10 == 0) || (iVar4 == 0)) {
      fVar22 = 0.0;
      fVar28 = 0.0;
      fVar31 = 0.0;
    }
    else {
      pfVar15 = (float *)FUN_1800111b0();
      fVar22 = *pfVar15;
      fVar28 = pfVar15[1];
      fVar31 = pfVar15[2];
    }
    iVar4 = DAT_1809f363c;
    if (DAT_1809f363c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_180011200();
    }
    uVar19 = DAT_180ca09f0;
    if ((lVar10 == 0) || (DAT_180ca09f0 == 0)) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_180011200();
    }
    if (iVar5 < 1) {
      fVar32 = DAT_1808acaf4;
    }
    else {
      fVar33 = (float)iVar5;
      fVar32 = local_res20 * DAT_1808ac1f4 * DAT_1808acaf4;
      if (fVar33 < (DAT_1808acaf4 - fVar32) * DAT_1808ac1f4) {
        fVar32 = DAT_1808acaf4 - (fVar33 + fVar33);
      }
    }
    if (0.0 < (float)iVar8 - fVar32) {
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_180011200();
      }
      if ((lVar10 == 0) || (uVar19 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_180011200();
      }
      if (iVar5 < 1) {
        fVar32 = DAT_1808acb58;
      }
      else {
        fVar33 = (float)iVar5;
        fVar32 = local_res20 * DAT_1808ac1f4 * DAT_1808acb58;
        if (fVar33 < (DAT_1808acb58 - fVar32) * DAT_1808ac1f4) {
          fVar32 = DAT_1808acb58 - (fVar33 + fVar33);
        }
      }
      if (((float)iVar8 - fVar32 <= 0.0) &&
         (DAT_1808ac950 <=
          fVar34 * (fVar27 - fVar22) + fVar21 * (fVar30 - fVar28) + fVar20 * (fVar35 - fVar31))) {
        if ((lVar10 == 0) || (lVar13 = FUN_18000f3a0(lVar10 + 0x10), lVar13 == 0)) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar9 = FUN_180011200(lVar13 + 0x10);
          sVar3 = FUN_180011200(lVar13 + 0x30);
          uVar7 = uVar9 - (ushort)(sVar3 << 0xf);
          uVar7 = (uVar9 ^ uVar7) & 0x7fff ^ uVar7;
        }
        if ((uVar7 != DAT_180cfb278) || (DAT_1809f3610 != *(longlong *)(param_1 + 8) + -1)) {
          DAT_1809f3610 = *(undefined8 *)(param_1 + 8);
          DAT_180cfb278 = uVar7;
          _DAT_180cfb288 = fVar26;
          return;
        }
        DAT_1809f3610 = *(longlong *)(param_1 + 8);
        if (fVar26 - _DAT_180cfb288 <= DAT_1808ac188) {
          return;
        }
      }
    }
    auVar37 = ZEXT416(DAT_1808ac988);
    fVar34 = DAT_1808ac1f4;
    fVar21 = DAT_1808acaf4;
    fVar20 = DAT_1808acb58;
    uVar7 = DAT_1808aca54;
    uVar9 = DAT_1808acab4;
    fVar30 = DAT_1808acd08;
  }
  if (lVar10 == 0) {
    cVar18 = (char)local_120;
  }
  else {
    if (uVar19 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_180011200();
    }
    fVar27 = (float)iVar5;
    if (0.0 < fVar27) {
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_180011200();
      }
      if ((char)local_120 == '\0') {
        fVar35 = DAT_1808ac394;
      }
      else {
        fVar35 = fVar34;
      }
      iVar8 = 0;
      do {
        if ((char)local_120 == '\0') {
          if ((iVar8 == 0) && (cVar2 != '\0')) {
            auVar24 = ZEXT416((uint)fVar20);
          }
          else {
            auVar24 = ZEXT416(uVar9);
          }
        }
        else if (iVar8 == 0) {
          if (cVar2 == '\0') {
            if (local_res10 == '\0') goto LAB_180273084;
            auVar24 = ZEXT416(uVar7);
          }
          else {
            auVar24 = ZEXT416((uint)fVar21);
          }
        }
        else {
LAB_180273084:
          auVar24 = auVar37;
        }
        if (0 < iVar5) {
          fVar28 = auVar24._0_4_;
          fVar32 = local_res20 * fVar34 * fVar28;
          fVar31 = (float)iVar5;
          auVar29 = auVar24._4_12_;
          fVar22 = (fVar28 - fVar32) * fVar34;
          if (fVar22 <= fVar31) {
            auVar24 = ZEXT416((uint)fVar32);
            if (fVar22 < 0.0) {
              fVar22 = DAT_1808ac34c;
            }
            iVar5 = iVar5 - (int)fVar22;
          }
          else {
            iVar5 = 0;
            auVar24._0_4_ = fVar28 - (fVar31 + fVar31);
            auVar24._4_12_ = auVar29;
          }
        }
        fVar27 = fVar27 - auVar24._0_4_;
        cVar18 = (char)local_120;
        if (fVar27 <= 0.0) {
          fVar30 = (float)iVar8 * fVar35;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0xb);
    }
    else {
      fVar30 = 0.0;
      cVar18 = (char)local_120;
    }
  }
LAB_180273105:
  fVar27 = local_res20;
  cVar2 = local_res10;
  if (lVar11 == 0) {
    fVar22 = DAT_1808acd08;
  }
  else {
    if (uVar19 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_180011200();
    }
    fVar35 = (float)iVar5;
    if (0.0 < fVar35) {
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_180011200();
      }
      if ((char)local_100 == '\0') {
        fVar22 = DAT_1808ac394;
      }
      else {
        fVar22 = fVar34;
      }
      iVar5 = 0;
      do {
        if ((char)local_100 == '\0') {
          if ((iVar5 == 0) && (local_100._1_1_ != '\0')) {
            auVar25 = ZEXT416((uint)fVar20);
          }
          else {
            auVar25 = ZEXT416(uVar9);
          }
        }
        else if (iVar5 == 0) {
          if (local_100._1_1_ == '\0') {
            if (cVar2 == '\0') goto LAB_180273193;
            auVar25 = ZEXT416(uVar7);
          }
          else {
            auVar25 = ZEXT416((uint)fVar21);
          }
        }
        else {
LAB_180273193:
          auVar25 = auVar37;
        }
        if (0 < iVar4) {
          fVar31 = auVar25._0_4_;
          fVar33 = fVar27 * fVar34 * fVar31;
          fVar32 = (float)iVar4;
          auVar29 = auVar25._4_12_;
          fVar28 = (fVar31 - fVar33) * fVar34;
          if (fVar28 <= fVar32) {
            auVar25 = ZEXT416((uint)fVar33);
            if (fVar28 < 0.0) {
              fVar28 = DAT_1808ac34c;
            }
            iVar4 = iVar4 - (int)fVar28;
          }
          else {
            iVar4 = 0;
            auVar25._0_4_ = fVar31 - (fVar32 + fVar32);
            auVar25._4_12_ = auVar29;
          }
        }
        fVar35 = fVar35 - auVar25._0_4_;
        if (fVar35 <= 0.0) {
          fVar22 = (float)iVar5 * fVar22;
          goto LAB_18027321e;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0xb);
      fVar22 = DAT_1808acd08;
    }
    else {
      fVar22 = 0.0;
    }
  }
LAB_18027321e:
  if ((lVar10 != 0) || (lVar11 != 0)) {
    plVar12 = &local_128;
    if (fVar22 < fVar30) {
      plVar12 = &local_108;
    }
    if (*plVar12 != 0) {
      DAT_180cfb27c = fVar26 + DAT_1808ac0c0;
      if (fVar30 <= fVar22) {
        local_100._0_1_ = cVar18;
      }
      DAT_180cfb280 = 0x800;
      if ((char)local_100 != '\0') {
        DAT_180cfb280 = 1;
      }
      uVar17 = *(ulonglong *)(param_1 + 0x68) | DAT_180cfb280;
      *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | DAT_180cfb280;
      *(ulonglong *)(param_1 + 0x68) = uVar17;
    }
  }
  return;
}



/* ===== 180273330 FUN_180273330 ===== */

void FUN_180273330(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint local_res18;
  undefined4 uStackX_1c;
  longlong local_res20;
  
  if (DAT_180ca0a0c == 0) {
    return;
  }
  lVar5 = FUN_18000f3a0((ulonglong)DAT_180ca0a0c + *param_2);
  if (0x7ffffffefffe < lVar5 - 0x10000U) {
    return;
  }
  iVar2 = FUN_180011200((ulonglong)DAT_180cfb294 + lVar5);
  local_res20 = FUN_18000f3a0((ulonglong)DAT_180cfb294 + 8 + lVar5);
  if (0x3f < iVar2 - 1U) {
    return;
  }
  if (local_res20 == 0) {
    return;
  }
  lVar5 = 0;
  lVar7 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar8 = 0;
  if (iVar2 < 1) {
    return;
  }
  do {
    uVar3 = FUN_180011200(local_res20 + uVar10 * 4);
    uVar11 = uVar8;
    if (uVar3 != 0xffffffff) {
      FUN_1803a0940(&local_res18,uVar3);
      lVar1 = CONCAT44(uStackX_1c,local_res18);
      if (((lVar1 != 0) && (DAT_1809619a0 != 0)) &&
         (lVar6 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + lVar1),
         lVar6 != 0)) {
        iVar4 = FUN_180011200((ulonglong)DAT_180cfb298 + lVar6);
        uVar11 = uVar3;
        if ((iVar4 - 2U < 5) || (uVar11 = uVar8, iVar4 != 0x13)) {
          lVar6 = lVar1;
          if (4 < iVar4 - 2U) {
            lVar6 = lVar7;
          }
          if (iVar4 == 1) {
            lVar5 = lVar1;
            uVar9 = uVar3;
          }
          lVar7 = lVar6;
          if ((lVar6 != 0) && (lVar5 != 0)) goto LAB_180273493;
        }
      }
    }
    uVar3 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar3;
    uVar8 = uVar11;
  } while ((int)uVar3 < iVar2);
  if (lVar7 == 0) {
    uVar8 = DAT_180961990;
  }
  else {
LAB_180273493:
    uVar8 = DAT_180961990;
    if ((DAT_180961990 != 0) && (iVar2 = FUN_180011200((ulonglong)DAT_180961990 + lVar7), 0 < iVar2)
       ) goto LAB_1802734cc;
  }
  if (lVar5 == 0) {
    return;
  }
  if (uVar8 == 0) {
    return;
  }
  iVar2 = FUN_180011200((ulonglong)uVar8 + lVar5);
  if (iVar2 < 1) {
    return;
  }
  uVar11 = uVar9;
LAB_1802734cc:
  if ((((uVar11 != 0) && (param_1 != 0)) &&
      (lVar5 = *(longlong *)(param_1 + 0x40), lVar5 - 0x10000U < 0x7ffffffeffff)) &&
     (*(longlong *)(lVar5 + 0x40) - 0x10000U < 0x7ffffffeffff)) {
    local_res18 = uVar11 & 0x7fff;
    FUN_180013280(lVar5 + 0x68,&local_res18);
    *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 0x400;
  }
  return;
}



/* ===== 180273560 FUN_180273560 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180273560(longlong param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  longlong local_res10;
  longlong local_res18;
  undefined4 local_1c;
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    DAT_181108a00 = local_res10;
    local_res10 = FUN_1803a0c50(&local_res10);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_res10 = DAT_1811089f8;
  }
  lVar9 = local_res10;
  DAT_1811089f8 = local_res10;
  if (((local_res10 != 0) && (DAT_180ca09f0 != 0)) &&
     (iVar4 = FUN_180011200((ulonglong)DAT_180ca09f0 + local_res10), iVar4 - 1U < 1000)) {
    if (DAT_180cfb290 == '\0') {
      if (DAT_1811089f0 == 0) {
        DAT_1809f36a8 = 0xffffffffffffffff;
        DAT_1809f36b0 = 0;
        _DAT_1809f36b4 = local_1c;
        return;
      }
      DAT_180cfb290 = '\x01';
      DAT_180cfb294 = FUN_18038eaf0("CPlayer_WeaponServices","m_hMyWeapons");
      DAT_180cfb298 = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
      DAT_180cfb29c = FUN_18038eaf0("C_BaseCSGrenade","m_fThrowTime");
      DAT_180cfb2a0 = FUN_18038eaf0("C_BaseCSGrenade","m_bIsHeldByPlayer");
      DAT_180cfb2a4 = FUN_18038eaf0("C_CSPlayerPawn","m_iShotsFired");
    }
    if (((DAT_180cfb294 != 0) && (DAT_180cfb298 != 0)) &&
       ((DAT_180cfb29c != 0 && (DAT_180cfb2a0 != 0)))) {
      iVar4 = 0;
      if (((lVar9 == 0) || (DAT_180ca0a0c == 0)) ||
         ((uVar10 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 == 0 ||
          (lVar6 = FUN_18000f3a0(lVar9 + (ulonglong)DAT_180ca0a0c), lVar6 == 0)))) {
        lVar6 = 0;
      }
      else {
        uVar5 = FUN_180011200(lVar6 + uVar10);
        plVar7 = (longlong *)FUN_1803a0940(&local_res18,uVar5);
        lVar6 = *plVar7;
      }
      if (DAT_180cfb2a4 != 0) {
        iVar4 = FUN_180011200(lVar9 + (ulonglong)DAT_180cfb2a4);
      }
      iVar1 = DAT_1809f36b0;
      lVar9 = DAT_1809f36a8;
      DAT_1809f36a8 = *(undefined8 *)(param_1 + 8);
      _DAT_1809f36b4 = local_1c;
      DAT_1809f36b0 = iVar4;
      if (((DAT_180920dd4 != '\0') && (cVar2 = FUN_18026b8a0(), cVar2 == '\0')) && (lVar6 != 0)) {
        lVar8 = FUN_1803a08e0(&local_res10);
        if (((lVar8 == 0) || (DAT_1809619a4 == 0)) ||
           ((DAT_1809619a8 == 0 ||
            ((DAT_180961998 == 0 ||
             (sVar3 = FUN_180011440((ulonglong)DAT_1809619a4 +
                                    (ulonglong)DAT_1809619a8 + lVar8 + (ulonglong)DAT_180961998),
             sVar3 != 0x1f)))))) {
          local_res18 = lVar6;
          lVar9 = FUN_1803a0710(&local_res18);
          if (lVar9 == 0) {
            return;
          }
          lVar8 = FUN_1804ef120(lVar9,"Grenade");
          if ((lVar8 == 0) && (lVar9 = FUN_1804ef120(lVar9,"Flashbang"), lVar9 == 0)) {
            return;
          }
          fVar11 = (float)FUN_18000f3d0((ulonglong)DAT_180cfb29c + lVar6);
          if (fVar11 != 0.0) {
            return;
          }
          cVar2 = FUN_180011220((ulonglong)DAT_180cfb2a0 + lVar6);
          if (cVar2 != '\0') {
            return;
          }
        }
        else {
          if (lVar9 < 0) {
            return;
          }
          if (lVar9 != *(longlong *)(param_1 + 8) + -1) {
            return;
          }
          if (iVar4 <= iVar1) {
            return;
          }
        }
        FUN_180273330(param_1,&local_res10);
      }
      return;
    }
  }
  DAT_1809f36b0 = 0;
  DAT_1809f36a8 = 0xffffffffffffffff;
  _DAT_1809f36b4 = local_1c;
  return;
}



/* ===== 180273880 FUN_180273880 ===== */

void FUN_180273880(void)

{
  HMODULE hModule;
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (DAT_180ccfbd6 != '\0') {
    return;
  }
  DAT_180ccfbd6 = 1;
  hModule = GetModuleHandleA("tier0.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_180cfb2a8 = GetProcAddress(hModule,"RandomSeed");
    DAT_180cfb2b8 = GetProcAddress(hModule,"RandomFloat");
    DAT_180cfb2b0 = GetProcAddress(hModule,"RandomInt");
  }
  pcVar1 = "MISSING";
  pcVar3 = "MISSING";
  pcVar2 = "MISSING";
  if (DAT_180cfb2b0 != (FARPROC)0x0) {
    pcVar3 = "ok";
  }
  if (DAT_180cfb2b8 != (FARPROC)0x0) {
    pcVar2 = "ok";
  }
  if (DAT_180cfb2a8 != (FARPROC)0x0) {
    pcVar1 = "ok";
  }
  FUN_1802b2560("[tier0] RandomSeed %s | RandomFloat %s | RandomInt %s",pcVar1,pcVar2,pcVar3);
  return;
}



/* ===== 180273960 FUN_180273960 ===== */

ulonglong FUN_180273960(float param_1,float param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  FUN_180273880();
  if (DAT_180cfb2b8 == (code *)0x0) {
    uVar1 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
    uVar1 = uVar1 >> 0x11 ^ uVar1;
    DAT_1809f3584 = uVar1 << 5 ^ uVar1;
    return (ulonglong)
           (uint)(((float)(DAT_1809f3584 & 0xffff) * (param_2 - param_1)) / DAT_1808accac + param_1)
    ;
  }
                    /* WARNING: Could not recover jumptable at 0x000180273999. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_180cfb2b8)(param_1,param_2);
  return uVar2;
}



/* ===== 1802739f0 FUN_1802739f0 ===== */

uint FUN_1802739f0(byte *param_1)

{
  ushort *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = 0;
  bVar3 = *param_1;
  while (uVar4 = (uint)uVar5, bVar3 != 0) {
    uVar5 = (ulonglong)(uVar4 + 1);
    bVar3 = param_1[uVar5];
  }
  uVar7 = uVar4 ^ 0x31415926;
  while (3 < uVar4) {
    puVar1 = (ushort *)(param_1 + 1);
    uVar4 = (int)uVar5 - 4;
    uVar5 = (ulonglong)uVar4;
    pbVar2 = param_1 + 3;
    bVar3 = *param_1;
    param_1 = param_1 + 4;
    uVar6 = ((uint)*puVar1 << 8 | (uint)*pbVar2 << 0x18 | (uint)bVar3) * 0x5bd1e995;
    uVar7 = uVar7 * 0x5bd1e995 ^ (uVar6 >> 0x18 ^ uVar6) * 0x5bd1e995;
  }
  if (uVar4 != 1) {
    if (uVar4 != 2) {
      if (uVar4 != 3) goto LAB_180273a9e;
      uVar7 = uVar7 ^ (uint)param_1[2] << 0x10;
    }
    uVar7 = uVar7 ^ (uint)param_1[1] << 8;
  }
  uVar7 = (*param_1 ^ uVar7) * 0x5bd1e995;
LAB_180273a9e:
  uVar4 = (uVar7 >> 0xd ^ uVar7) * 0x5bd1e995;
  return uVar4 >> 0xf ^ uVar4;
}



/* ===== 180273ac0 FUN_180273ac0 ===== */

undefined8 FUN_180273ac0(undefined *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (DAT_180cfc7c0 <= uVar1) {
      return 0;
    }
    if ((&DAT_180cfb2c0 + uVar1 * 0x38 == param_1) &&
       ((code *)(&DAT_180cfb2e8)[uVar1 * 7] != (code *)0x0)) break;
    uVar1 = uVar1 + 1;
  }
  (*(code *)(&DAT_180cfb2e8)[uVar1 * 7])(param_2);
  return 0;
}



/* ===== 180273b20 FUN_180273b20 ===== */

void FUN_180273b20(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* ===== 180273b40 FUN_180273b40 ===== */

void FUN_180273b40(longlong *param_1)

{
  (**(code **)(*param_1 + 0x28))();
  return;
}



/* ===== 180273b60 FUN_180273b60 ===== */

bool FUN_180273b60(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uStack_3c;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  
  uVar1 = DAT_180cfc7c0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (DAT_180cfc7c0 < 0x60) {
      if (DAT_1809620c0 != 0) {
        lVar3 = FUN_18000f3a0();
        if (lVar3 != 0) {
          lVar4 = uVar1 * 0x38;
          (&DAT_180cfb2f0)[lVar4] = 0;
          *(undefined4 *)(&DAT_180cfb2f1 + lVar4) = local_17;
          *(undefined2 *)(&DAT_180cfb2f5 + lVar4) = local_13;
          (&DAT_180cfb2f7)[lVar4] = local_11;
          *(undefined4 *)(&DAT_180cfb2cc + lVar4) = uStack_3c;
          *(undefined4 *)(&DAT_180cfb2d0 + lVar4) = 0;
          *(undefined4 *)(lVar4 + 0x180cfb2d4) = 0;
          *(undefined4 *)(&DAT_180cfb2d8 + lVar4) = 0;
          (&DAT_180cfb2e8)[uVar1 * 7] = param_2;
          *(undefined4 *)(&DAT_180cfb2d8 + lVar4) = 0;
          *(undefined4 *)(lVar4 + 0x180cfb2dc) = 0;
          *(undefined4 *)(&DAT_180cfb2e0 + lVar4) = 0;
          *(undefined4 *)(lVar4 + 0x180cfb2e4) = 0;
          *(code **)(&DAT_180cfb2d8 + lVar4) = FUN_180273ac0;
          *(undefined1 **)(&DAT_180cfb2e0 + lVar4) = &LAB_180273b10;
          *(undefined **)(&DAT_180cfb2c0 + lVar4) = &DAT_180cfb2d0 + lVar4;
          *(int *)(&DAT_180cfb2c8 + lVar4) = (int)uVar1 + 1;
          cVar2 = FUN_180273b20(lVar3,&DAT_180cfb2c0 + lVar4,param_1);
          if (cVar2 != '\0') {
            DAT_180cfc7c0 = DAT_180cfc7c0 + 1;
            (&DAT_180cfb2f0)[lVar4] = 1;
          }
          else {
            FUN_1802b2560("[error] events | failed to listen for %s",param_1);
          }
          return cVar2 != '\0';
        }
      }
    }
    else {
      if (DAT_181116110 == '\0') {
        FUN_1802b2560("[error] events | no room to listen for %s",param_1);
      }
      DAT_181116110 = '\x01';
    }
  }
  return false;
}



/* ===== 180273cc0 FUN_180273cc0 ===== */

undefined8 FUN_180273cc0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (DAT_1809620d0 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_1809620d0)(param_1,param_2,0);
  }
  return uVar1;
}



/* ===== 180273cf0 FUN_180273cf0 ===== */

void FUN_180273cf0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x50))(param_1,param_2,&DAT_18058b643);
  return;
}



/* ===== 180273d10 FUN_180273d10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180273d10(undefined8 *param_1,longlong param_2,char *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  char cVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  ulonglong local_88;
  undefined8 *local_80;
  undefined4 local_70;
  undefined4 local_6c;
  char *local_68;
  undefined8 ****local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  puVar9 = auStack_a8;
  local_40 = DAT_180919500 ^ (ulonglong)auStack_a8;
  if (((param_2 == 0) || (param_3 == (char *)0x0)) || (*param_3 == '\0')) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    local_80 = param_1;
    local_70 = FUN_1802739f0(param_3);
    local_6c = 0xffffffff;
    local_68 = param_3;
    local_80 = (undefined8 *)FUN_180273cf0(param_2,&local_70);
    puVar9 = auStack_a8;
    if ((longlong)local_80 - 0x10000U < 0x7ffffffeffff) {
      uStack_58 = 0;
      uVar10 = 0;
      local_50 = 0;
      uStack_48 = 0xf;
      local_60 = (undefined8 ****)0x0;
      uVar11 = 0;
      uVar7 = 0xf;
      while( true ) {
        ppppuVar4 = local_60;
        cVar5 = FUN_180011220((longlong)local_80 + uVar11);
        puVar9 = auStack_a8;
        if (cVar5 == '\0') break;
        if (uVar10 < uVar7) {
          local_50 = uVar10 + 1;
          ppppuVar6 = &local_60;
          if (0xf < uVar7) {
            ppppuVar6 = ppppuVar4;
          }
          *(char *)((longlong)ppppuVar6 + uVar10) = cVar5;
          *(undefined1 *)((longlong)ppppuVar6 + uVar10 + 1) = 0;
          uVar8 = uStack_48;
          uVar10 = local_50;
        }
        else {
          if (uVar10 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_180011990();
          }
          local_88 = uVar10 + 1;
          uVar8 = local_88 | 0xf;
          if (uVar8 < 0x8000000000000000) {
            if (0x7fffffffffffffff - (uVar7 >> 1) < uVar7) {
              uVar8 = 0x7fffffffffffffff;
            }
            else {
              uVar1 = (uVar7 >> 1) + uVar7;
              if (uVar8 < uVar1) {
                uVar8 = uVar1;
              }
            }
          }
          else {
            uVar8 = 0x7fffffffffffffff;
          }
          ppppuVar6 = (undefined8 ****)FUN_18000fb70(uVar8 + 1);
          local_50 = local_88;
          uStack_48 = uVar8;
          if (uVar7 < 0x10) {
            FUN_180540530(ppppuVar6,&local_60,uVar10);
            *(char *)((longlong)ppppuVar6 + uVar10) = cVar5;
            *(undefined1 *)((longlong)ppppuVar6 + uVar10 + 1) = 0;
          }
          else {
            FUN_180540530(ppppuVar6,ppppuVar4,uVar10);
            *(char *)((longlong)ppppuVar6 + uVar10) = cVar5;
            *(undefined1 *)((longlong)ppppuVar6 + uVar10 + 1) = 0;
            if (uVar7 + 1 < 0x1000) {
              thunk_FUN_1803d64e0(ppppuVar4);
            }
            else {
              if (0x1f < (ulonglong)((longlong)ppppuVar4 + (-8 - (longlong)ppppuVar4[-1]))) {
                pcVar2 = (code *)swi(0x29);
                (*pcVar2)(5);
                puVar9 = auStack_a0;
                break;
              }
              thunk_FUN_1803d64e0(ppppuVar4[-1],uVar7 + 0x28);
            }
          }
          local_60 = ppppuVar6;
          uVar10 = local_88;
        }
        uVar11 = uVar11 + 1;
        puVar9 = auStack_a8;
        if (0x7f < uVar11) break;
        uVar7 = uVar8;
      }
      uVar3 = *(undefined8 *)(puVar9 + 0x50);
      *param_1 = *(undefined8 *)(puVar9 + 0x48);
      param_1[1] = uVar3;
      uVar3 = *(undefined8 *)(puVar9 + 0x60);
      param_1[2] = *(undefined8 *)(puVar9 + 0x58);
      param_1[3] = uVar3;
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x180273f6f;
  return param_1;
}



/* ===== 180273f90 FUN_180273f90 ===== */

undefined8 FUN_180273f90(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 local_18;
  undefined4 local_14;
  char *local_10;
  
  if ((((param_1 == 0) || (DAT_1809620c8 == (code *)0x0)) || (param_2 == (char *)0x0)) ||
     (*param_2 == '\0')) {
    uVar1 = 0;
  }
  else {
    pcVar2 = DAT_1809620c8;
    local_18 = FUN_1802739f0(param_2);
    local_14 = 0xffffffff;
    local_10 = param_2;
    uVar1 = (*pcVar2)(param_1,&local_18);
  }
  return uVar1;
}



/* ===== 180273ff0 FUN_180273ff0 ===== */

undefined8 * FUN_180273ff0(undefined8 *param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  short *psVar5;
  undefined8 *puVar6;
  
  if ((ulonglong)param_1[3] < 8) {
    puVar6 = param_1;
  }
  else {
    puVar6 = (undefined8 *)*param_1;
  }
  psVar5 = (short *)((longlong)puVar6 + param_1[2] * 2);
  psVar2 = psVar5;
  for (psVar1 = (short *)FUN_180013e50(puVar6); psVar1 != psVar2; psVar1 = psVar1 + 1) {
    if ((*psVar1 != 0x5c) && (*psVar1 != 0x2f)) goto LAB_180274041;
  }
LAB_18027405d:
  psVar1 = (short *)thunk_FUN_1804e6d50(psVar5);
  if ((psVar5 != psVar1) && (psVar2 = psVar1 + -1, psVar5 != psVar2)) {
    if (*psVar2 == 0x2e) {
      if ((psVar5 != psVar1 + -2) || (psVar1[-2] != 0x2e)) {
LAB_180274091:
        psVar1 = psVar2;
      }
    }
    else {
      for (psVar2 = psVar1 + -2; psVar5 != psVar2; psVar2 = psVar2 + -1) {
        if (*psVar2 == 0x2e) goto LAB_180274091;
      }
    }
  }
  uVar3 = (longlong)psVar1 - (longlong)puVar6 >> 1;
  if ((ulonglong)param_1[2] < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_18002a1a0();
  }
  param_1[2] = uVar3;
  if ((ulonglong)param_1[3] < 8) {
    puVar4 = param_1;
  }
  else {
    puVar4 = (undefined8 *)*param_1;
  }
  *(undefined2 *)(((longlong)psVar1 - (longlong)puVar6 & 0xfffffffffffffffeU) + (longlong)puVar4) =
       0;
  if (*(longlong *)(param_2 + 8) != 0) {
    psVar5 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      psVar5 = *(short **)param_2;
    }
    if (*psVar5 != 0x2e) {
      FUN_180024750(param_1,0x2e);
    }
  }
  if (*(ulonglong *)(param_2 + 0xc) < 8) {
    psVar5 = param_2;
  }
  else {
    psVar5 = *(short **)param_2;
  }
  FUN_180025260(param_1,psVar5,*(undefined8 *)(param_2 + 8));
  return param_1;
LAB_180274041:
  psVar2 = psVar5 + -1;
  if (*psVar2 == 0x5c) goto LAB_18027405d;
  if ((*psVar2 == 0x2f) || (psVar5 = psVar2, psVar1 == psVar2)) goto LAB_18027405d;
  goto LAB_180274041;
}



/* ===== 180274140 FUN_180274140 ===== */

undefined8 * FUN_180274140(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined4 local_4c;
  
  *param_2 = 0;
  *(undefined ***)(param_2 + 2) = &PTR_vftable_18091a158;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  FUN_180029680(param_1,0x104,(ulonglong)param_1 & 0xff,0x104,0);
  do {
    uVar1 = *(uint *)(param_1 + 2);
    if ((ulonglong)param_1[3] < 8) {
      puVar3 = param_1;
    }
    else {
      puVar3 = (undefined8 *)*param_1;
    }
    uVar2 = FUN_1804e57a0(uVar1,puVar3);
    FUN_1800246c0(param_1,uVar2 & 0xffffffff,0);
  } while (uVar1 <= (uint)uVar2);
  *param_2 = (int)(uVar2 >> 0x20);
  param_2[1] = local_4c;
  *(undefined ***)(param_2 + 2) = &PTR_vftable_18091a158;
  return param_1;
}



/* ===== 180274200 FUN_180274200 ===== */

void FUN_180274200(longlong param_1)

{
  FUN_1800132b0(param_1 + 0x18);
  FUN_180142340(param_1 + 8);
  return;
}



/* ===== 180274220 FUN_180274220 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180274220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  ulonglong *puVar3;
  ULONGLONG UVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  undefined8 *local_320;
  undefined1 local_318 [768];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_348;
  LOCK();
  iVar2 = DAT_180cfc7e8 + 1;
  UNLOCK();
  bVar1 = DAT_180cfc7e8 < 0x259;
  DAT_180cfc7e8 = iVar2;
  if (bVar1) {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_180540170(local_318,0,0x300);
    puVar3 = (ulonglong *)FUN_180013640();
    local_328 = 0;
    local_320 = &local_res10;
    FUN_180501904(*puVar3 | 2,local_318,0x300,param_1);
    UVar4 = GetTickCount64();
    FUN_1802b2870("wl_skins.log","[%llu] custom models | %s\n",UVar4,local_318);
  }
  return;
}



/* ===== 180274300 FUN_180274300 ===== */

undefined8 FUN_180274300(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *local_18;
  undefined8 local_10;
  
  if ((ulonglong)param_2[3] < 8) {
    local_18 = param_2;
  }
  else {
    local_18 = (undefined8 *)*param_2;
  }
  local_10 = param_2[2];
  FUN_180024c20(param_1,&local_18);
  return param_1;
}



/* ===== 180274350 FUN_180274350 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180274350(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  size_t _Size;
  char *pcVar6;
  undefined8 ****ppppuVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_208 [48];
  short local_1d8 [2];
  uint local_1d4;
  uint local_1d0 [2];
  longlong local_1c8 [4];
  undefined2 local_1a8 [2];
  uint local_1a4;
  int local_1a0;
  uint local_19c;
  ulonglong local_198;
  ulonglong local_190;
  undefined4 local_188 [4];
  longlong local_178 [2];
  byte abStack_168 [128];
  longlong local_e8;
  undefined8 ****local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_208;
  FUN_180276480(local_178,param_1,0x20);
  if (((abStack_168[*(int *)(local_178[0] + 4)] & 6) == 0) && (local_e8 != 0)) {
    local_188[0] = 0;
    local_1d8[0] = 0;
    local_1a8[0] = 0;
    FUN_180276e90(local_178,local_188,4);
    if (((((abStack_168[*(int *)(local_178[0] + 4)] & 6) == 0) &&
         (FUN_180276e90(local_178,local_1d8,2), (abStack_168[*(int *)(local_178[0] + 4)] & 6) == 0))
        && (FUN_180276e90(local_178,local_1a8,2), (abStack_168[*(int *)(local_178[0] + 4)] & 6) == 0
           )) && (local_1d8[0] == 0xc)) {
      plVar5 = (longlong *)FUN_180276790(local_178,local_1c8);
      lVar8 = plVar5[1];
      lVar1 = *plVar5;
      local_1a4 = 0;
      local_1d4 = 0;
      FUN_180276e90(local_178,&local_1a4,4);
      if ((((abStack_168[*(int *)(local_178[0] + 4)] & 6) == 0) &&
          (FUN_180276e90(local_178,&local_1d4,4), (abStack_168[*(int *)(local_178[0] + 4)] & 6) == 0
          )) && (0xfffffeff < local_1d4 - 0x101)) {
        local_1c8[0] = (ulonglong)local_1a4 + lVar8 + lVar1;
        local_1c8[1] = 0;
        local_1c8[2] = 0;
        FUN_180276850(local_178,local_1c8);
        bVar3 = false;
        lVar8 = -1;
        uVar10 = 0;
        if (local_1d4 != 0) {
          do {
            local_1a0 = 0;
            FUN_180276e90(local_178,&local_1a0,4);
            if ((abStack_168[*(int *)(local_178[0] + 4)] & 6) != 0) goto LAB_180274871;
            plVar5 = (longlong *)FUN_180276790(local_178,local_1c8);
            lVar1 = plVar5[1];
            lVar2 = *plVar5;
            local_198 = local_198 & 0xffffffff00000000;
            local_190 = local_190 & 0xffffffff00000000;
            FUN_180276e90(local_178,&local_198,4);
            if (((abStack_168[*(int *)(local_178[0] + 4)] & 6) != 0) ||
               (FUN_180276e90(local_178,&local_190,4),
               (abStack_168[*(int *)(local_178[0] + 4)] & 6) != 0)) goto LAB_180274871;
            bVar3 = (bool)(bVar3 | local_1a0 == 0x5441444d);
            if (local_1a0 == 0x4c524552) {
              lVar8 = (local_198 & 0xffffffff) + lVar1 + lVar2;
            }
            local_1c8[0] = lVar1 + lVar2 + 8;
            local_1c8[1] = 0;
            local_1c8[2] = 0;
            FUN_180276850(local_178,local_1c8);
            uVar10 = uVar10 + 1;
          } while (uVar10 < local_1d4);
          if ((bVar3) && (-1 < lVar8)) {
            local_1c8[1] = 0;
            local_1c8[2] = 0;
            local_1c8[0] = lVar8;
            FUN_180276850(local_178,local_1c8);
            local_19c = 0;
            local_1d0[0] = 0;
            FUN_180276e90(local_178,&local_19c,4);
            if (((abStack_168[*(int *)(local_178[0] + 4)] & 6) == 0) &&
               ((FUN_180276e90(local_178,local_1d0,4),
                (abStack_168[*(int *)(local_178[0] + 4)] & 6) == 0 &&
                (0xffffefff < local_1d0[0] - 0x1001)))) {
              local_1c8[0] = (ulonglong)local_19c + lVar8;
              local_1c8[1] = 0;
              local_1c8[2] = 0;
              FUN_180276850(local_178,local_1c8);
              uStack_60 = 0;
              local_58 = _DAT_1808ad410;
              uStack_50 = _UNK_1808ad418;
              local_68 = (undefined8 ****)0x0;
              uVar10 = 0;
              if (local_1d0[0] != 0) {
                do {
                  local_198 = 0;
                  FUN_180276e90(local_178,&local_198,8);
                  if ((abStack_168[*(int *)(local_178[0] + 4)] & 6) != 0) {
LAB_180274848:
                    pcVar6 = "RERL entry";
                    goto LAB_180274827;
                  }
                  plVar5 = (longlong *)FUN_180276790(local_178,local_1c8);
                  lVar8 = plVar5[1];
                  lVar1 = *plVar5;
                  local_190 = 0;
                  FUN_180276e90(local_178,&local_190,8);
                  if ((abStack_168[*(int *)(local_178[0] + 4)] & 6) != 0) goto LAB_180274848;
                  local_1c8[0] = local_190 + lVar8 + lVar1;
                  local_1c8[1] = 0;
                  local_1c8[2] = 0;
                  FUN_180276850(local_178,local_1c8);
                  FUN_180075fd0(local_178,&local_68,0);
                  if ((abStack_168[*(int *)(local_178[0] + 4)] & 6) != 0) {
                    pcVar6 = "RERL name";
                    goto LAB_180274827;
                  }
                  _Size = strlen("worldmodel.vnmgraph");
                  if (_Size <= local_58) {
                    ppppuVar7 = &local_68;
                    if (0xf < uStack_50) {
                      ppppuVar7 = local_68;
                    }
                    iVar4 = memcmp((void *)((longlong)ppppuVar7 + (local_58 - _Size)),
                                   "worldmodel.vnmgraph",_Size);
                    if (iVar4 == 0) {
                      uVar9 = 1;
                      goto LAB_18027482d;
                    }
                  }
                  local_1c8[0] = lVar8 + lVar1 + 8;
                  local_1c8[1] = 0;
                  local_1c8[2] = 0;
                  FUN_180276850(local_178,local_1c8);
                  uVar10 = uVar10 + 1;
                } while (uVar10 < local_1d0[0]);
              }
              pcVar6 = "no worldmodel.vnmgraph reference";
LAB_180274827:
              uVar9 = 0;
              *param_2 = pcVar6;
LAB_18027482d:
              FUN_18000f890(&local_68);
              goto LAB_180274890;
            }
            pcVar6 = "RERL header";
            goto LAB_18027488a;
          }
        }
        pcVar6 = "no MDAT block";
        if (bVar3) {
          pcVar6 = "no RERL block";
        }
      }
      else {
LAB_180274871:
        pcVar6 = "block table";
      }
    }
    else {
      pcVar6 = "header";
    }
  }
  else {
    pcVar6 = "not opened";
  }
LAB_18027488a:
  *param_2 = pcVar6;
  uVar9 = 0;
LAB_180274890:
  FUN_18005e2f0(local_178);
  return uVar9;
}



/* ===== 1802748d0 FUN_1802748d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180274f60) */

void FUN_1802748d0(undefined8 *param_1)

{
  longlong *plVar1;
  char *_Str;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 ****ppppuVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_278 [32];
  uint local_258;
  int local_254;
  int local_250;
  undefined4 local_24c;
  undefined **local_248;
  undefined8 *local_240;
  uint local_238;
  undefined8 *local_230;
  undefined **local_228;
  undefined8 local_218;
  undefined8 local_210;
  longlong local_208;
  longlong *plStack_200;
  int local_1f8 [2];
  int local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  char *local_1c8;
  size_t local_1c0;
  undefined8 ****local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [8];
  undefined8 ****local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  ulonglong local_178;
  undefined8 ****local_170 [3];
  ulonglong local_158;
  undefined1 local_150 [32];
  undefined8 ****local_130 [3];
  ulonglong local_118;
  undefined1 local_110 [32];
  undefined8 ****local_f0 [3];
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_278;
  uVar17 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = &PTR_vftable_18091a158;
  local_230 = param_1;
  FUN_180274140(local_b0,&local_250);
  if (local_250 == 0) {
    puVar9 = (undefined8 *)FUN_180274300(local_130,local_b0);
    if (0xf < (ulonglong)puVar9[3]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    FUN_180274220("scan | base %s",puVar9);
    FUN_18000f890(local_130);
    local_228 = &PTR_s_______csgo_characters_18064e068;
    uVar3 = local_218._4_4_;
    do {
      _Str = *local_228;
      local_1c0 = strlen(_Str);
      local_1c8 = _Str;
      uVar6 = FUN_1804e5000();
      FUN_180013d60(&local_190,uVar6,&local_1c8);
      uVar16 = uVar17 | 6;
      local_258 = uVar16;
      FUN_180014f50(local_170,local_b0,&local_190);
      FUN_1800289e0(&local_190);
      local_250 = 0;
      local_248 = &PTR_vftable_18091a158;
      piVar10 = (int *)FUN_180016ab0(local_198,local_170,&local_250);
      if (*piVar10 == 0) {
        if (local_250 == 0) goto LAB_180274f6f;
        (**(code **)(*local_248 + 0x10))(local_248,local_130);
        uVar17 = uVar17 | 0x27;
        ppppuVar13 = local_130;
        local_258 = uVar17;
        if (0xf < local_118) {
          ppppuVar13 = local_130[0];
        }
LAB_180274fa2:
        puVar9 = (undefined8 *)FUN_180274300(local_70,local_170);
        if (0xf < (ulonglong)puVar9[3]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        FUN_180274220("scan | %s | %s",puVar9,ppppuVar13);
        FUN_18000f890(local_70);
        if ((uVar17 & 1) != 0) {
          uVar17 = uVar17 & 0xfffffffe;
          FUN_18000f890(local_130);
        }
      }
      else {
        local_250 = 0;
        local_248 = &PTR_vftable_18091a158;
        if (*piVar10 == 1) {
LAB_180274f6f:
          ppppuVar13 = (undefined8 ****)"missing";
          uVar17 = uVar16;
          goto LAB_180274fa2;
        }
        FUN_180016eb0(local_110,local_170,&local_250);
        if (local_250 == 0) {
          local_254 = 0;
          uVar14 = 0;
          local_258 = 0;
          local_208 = 0;
          plStack_200 = (longlong *)0x0;
          iVar7 = FUN_1800225b0(&local_208,local_110,0);
          local_d0 = 0;
          uStack_c8 = 0;
          iVar8 = 0;
          if (iVar7 == 0) {
            do {
              lVar2 = local_208;
              local_24c = uVar3;
              if (local_208 == 0) {
                uVar17 = uVar16;
                iVar8 = local_254;
                goto LAB_180274ecc;
              }
              FUN_180015fc0(local_208,local_1f8,6);
              local_24c = uVar3;
              if (local_1f0 != 0) break;
              if ((1 < local_1f8[0] - 3U) && (local_1f8[0] != 10)) {
                uVar11 = FUN_180512c70();
                local_190 = (undefined8 ****)0x0;
                uStack_188 = 0;
                local_180 = 0;
                local_178 = 0;
                FUN_180024d40(&local_190,L".vmdl_c",uVar11);
                uVar16 = uVar16 | 0x300;
                puVar9 = (undefined8 *)(lVar2 + 0x20);
                local_238 = uVar16;
                uVar11 = FUN_180099dd0(puVar9,local_150);
                local_1b8 = &local_190;
                if (7 < local_178) {
                  local_1b8 = local_190;
                }
                local_1b0 = local_180;
                iVar8 = FUN_180014140(uVar11,&local_1b8);
                FUN_1800289e0(local_150);
                FUN_1800289e0(&local_190);
                if (iVar8 == 0) {
                  local_254 = local_254 + 1;
                  local_240 = (undefined8 *)0x0;
                  cVar5 = FUN_180274350(puVar9,&local_240);
                  if (cVar5 != '\0') {
                    param_1 = (undefined8 *)*param_1;
                    puVar12 = (undefined8 *)param_1[1];
                    if (*(char *)((longlong)puVar12 + 0x19) == '\0') {
                      do {
                        if (*(ulonglong *)(lVar2 + 0x38) < 8) {
                          local_1a8 = puVar9;
                        }
                        else {
                          local_1a8 = (undefined8 *)*puVar9;
                        }
                        local_1a0 = *(undefined8 *)(lVar2 + 0x30);
                        local_240 = puVar12;
                        uVar17 = FUN_180014140(puVar12 + 4,&local_1a8);
                        if (uVar17 < 0x80000000) {
                          puVar15 = (undefined8 *)*puVar12;
                          param_1 = puVar12;
                        }
                        else {
                          puVar15 = (undefined8 *)puVar12[2];
                        }
                        uVar17 = (uint)(uVar17 < 0x80000000);
                        puVar12 = puVar15;
                      } while (*(char *)((longlong)puVar15 + 0x19) == '\0');
                    }
                    else {
                      uVar17 = 0;
                      local_240 = puVar12;
                    }
                    if (*(char *)((longlong)param_1 + 0x19) == '\0') {
                      local_218 = param_1 + 4;
                      if (7 < (ulonglong)param_1[7]) {
                        local_218 = (undefined8 *)*local_218;
                      }
                      local_210 = param_1[6];
                      uVar16 = FUN_180014140(puVar9,&local_218);
                      if (0x7fffffff < uVar16) goto LAB_180274d14;
                      param_1 = local_230;
                    }
                    else {
LAB_180274d14:
                      if (local_230[1] == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        FUN_18006dab0();
                      }
                      uVar11 = *local_230;
                      local_1e8 = local_230;
                      local_1e0 = (undefined8 *)0x0;
                      puVar12 = (undefined8 *)FUN_1804ecaa0(0x40);
                      local_1e0 = puVar12;
                      FUN_180024980(puVar12 + 4,puVar9);
                      param_1 = local_230;
                      *puVar12 = uVar11;
                      puVar12[1] = uVar11;
                      puVar12[2] = uVar11;
                      *(undefined2 *)(puVar12 + 3) = 0;
                      local_1e0 = (undefined8 *)0x0;
                      local_1d8 = local_240;
                      local_1cc = uStack_c8._4_4_;
                      local_1d0 = uVar17;
                      FUN_1800774d0(local_230,&local_1d8,puVar12);
                    }
                    uVar14 = local_258 + 1;
                    local_258 = uVar14;
                    puVar9 = (undefined8 *)FUN_180274300(local_150,puVar9);
                    if (0xf < (ulonglong)puVar9[3]) {
                      puVar9 = (undefined8 *)*puVar9;
                    }
                    FUN_180274220("scan | accepted %s",puVar9);
                    FUN_18000f890(local_150);
                    uVar16 = local_238;
                    goto LAB_180274e33;
                  }
                  puVar12 = (undefined8 *)&DAT_1806dfbb4;
                  if (local_240 != (undefined8 *)0x0) {
                    puVar12 = local_240;
                  }
                  puVar9 = (undefined8 *)FUN_180274300(local_150,puVar9);
                  if (0xf < (ulonglong)puVar9[3]) {
                    puVar9 = (undefined8 *)*puVar9;
                  }
                  FUN_180274220("scan | skipped %s | %s",puVar9,puVar12);
                  FUN_18000f890(local_150);
                }
                uVar14 = local_258;
              }
LAB_180274e33:
              iVar8 = FUN_1800164b0(&local_208);
            } while (iVar8 == 0);
            iVar8 = local_254;
          }
          local_24c = uVar3;
          (**(code **)(PTR_vftable_18091a158 + 0x10))(&PTR_vftable_18091a158,local_f0);
          ppppuVar13 = local_f0;
          if (0xf < local_d8) {
            ppppuVar13 = local_f0[0];
          }
          puVar9 = (undefined8 *)FUN_180274300(local_90,local_110);
          if (0xf < (ulonglong)puVar9[3]) {
            puVar9 = (undefined8 *)*puVar9;
          }
          FUN_180274220("[error] scan | %s | iteration stopped | %s",puVar9,ppppuVar13);
          FUN_18000f890(local_90);
          FUN_18000f890(local_f0);
          uVar17 = uVar16 | 8;
          uVar14 = local_258;
LAB_180274ecc:
          puVar9 = (undefined8 *)FUN_180274300(local_150,local_110);
          if (0xf < (ulonglong)puVar9[3]) {
            puVar9 = (undefined8 *)*puVar9;
          }
          FUN_180274220("scan | %s | %d .vmdl_c files | %d player models",puVar9,iVar8,uVar14);
          FUN_18000f890(local_150);
          plVar4 = plStack_200;
          if (plStack_200 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_200 + 1;
            lVar2 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*plStack_200)(plStack_200);
              LOCK();
              piVar10 = (int *)((longlong)plVar4 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4);
              }
            }
          }
          FUN_1800289e0(local_110);
        }
        else {
          (**(code **)(*local_248 + 0x10))(local_248,&local_190);
          uVar17 = uVar17 | 0x86;
          ppppuVar13 = &local_190;
          if (0xf < local_178) {
            ppppuVar13 = local_190;
          }
          puVar9 = (undefined8 *)FUN_180274300(&local_d0,local_170);
          if (0xf < (ulonglong)puVar9[3]) {
            puVar9 = (undefined8 *)*puVar9;
          }
          FUN_180274220("[error] scan | %s | weakly_canonical failed | %s",puVar9,ppppuVar13);
          FUN_18000f890(&local_d0);
          FUN_18000f890(&local_190);
          FUN_1800289e0(local_110);
        }
      }
      FUN_1800289e0(local_170);
      local_228 = local_228 + 1;
    } while (local_228 != (undefined **)&DAT_18064e088);
    local_228 = (undefined **)&DAT_18064e088;
  }
  else {
    (**(code **)(*local_248 + 0x10))(local_248,local_170);
    ppppuVar13 = local_170;
    if (0xf < local_158) {
      ppppuVar13 = local_170[0];
    }
    FUN_180274220("[error] scan | current_path failed | %s",ppppuVar13);
    FUN_18000f890(local_170);
  }
  FUN_1800289e0(local_b0);
  return;
}



/* ===== 180275030 FUN_180275030 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_180275030(int param_1,char ****param_2,undefined8 *param_3)

{
  int *piVar1;
  char ***_Size;
  size_t _Size_00;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  char ****ppppcVar7;
  ulonglong uVar8;
  char ****ppppcVar9;
  ulonglong uVar10;
  undefined1 auStack_178 [32];
  ulonglong local_158;
  int local_148 [2];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  char ****local_100;
  undefined8 uStack_f8;
  longlong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  char ***local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  lVar2 = DAT_180ca12c8;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_178;
  if (DAT_180ca12e0 != 0) {
    uVar8 = DAT_180ca12e0 + DAT_180ca12d8;
    local_158 = DAT_180ca12d0 - 1;
    uVar10 = DAT_180ca12d8;
    do {
      piVar1 = *(int **)(lVar2 + (local_158 & uVar10) * 8);
      if (*piVar1 == param_1) {
        piVar5 = piVar1 + 0x36;
        if (param_2[3] < (char ***)0x10) {
          ppppcVar9 = param_2;
        }
        else {
          ppppcVar9 = (char ****)*param_2;
        }
        _Size = *(char ****)(piVar1 + 0x3a);
        if (0xf < *(ulonglong *)(piVar1 + 0x3c)) {
          piVar5 = *(int **)piVar5;
        }
        if ((_Size == param_2[2]) &&
           ((_Size == (char ***)0x0 || (iVar3 = memcmp(piVar5,ppppcVar9,(size_t)_Size), iVar3 == 0))
           )) {
          piVar5 = piVar1 + 10;
          if ((ulonglong)param_3[3] < 0x10) {
            puVar6 = param_3;
          }
          else {
            puVar6 = (undefined8 *)*param_3;
          }
          _Size_00 = *(size_t *)(piVar1 + 0xe);
          if (0xf < *(ulonglong *)(piVar1 + 0x10)) {
            piVar5 = *(int **)piVar5;
          }
          if (_Size_00 == param_3[2]) {
            if (_Size_00 == 0) {
              return piVar1;
            }
            iVar3 = memcmp(piVar5,puVar6,_Size_00);
            if (iVar3 == 0) {
              return piVar1;
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar8);
  }
  uStack_138 = 0;
  local_130 = 0;
  local_128 = 0xf;
  local_140 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0xf;
  local_120 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0xf;
  local_100 = (char ****)0x0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_c8 = 0xf;
  local_e0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xf;
  local_c0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0xf;
  local_a0 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0xf;
  local_70 = (char ***)0x0;
  local_148[0] = param_1;
  if (&local_140 != param_3) {
    puVar6 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar6 = (undefined8 *)*param_3;
    }
    FUN_180029840(&local_140,puVar6,param_3[2]);
  }
  if (&local_120 != param_3) {
    if ((ulonglong)param_3[3] < 0x10) {
      puVar6 = param_3;
    }
    else {
      puVar6 = (undefined8 *)*param_3;
    }
    FUN_180029840(&local_120,puVar6,param_3[2]);
  }
  if (&local_70 != param_2) {
    ppppcVar9 = param_2;
    if ((char ***)0xf < param_2[3]) {
      ppppcVar9 = (char ****)*param_2;
    }
    FUN_180029840(&local_70,ppppcVar9,param_2[2]);
  }
  if (&local_100 != (char *****)param_2) {
    if (param_2[3] < (char ***)0x10) {
      ppppcVar9 = param_2;
    }
    else {
      ppppcVar9 = (char ****)*param_2;
    }
    FUN_180029840(&local_100,ppppcVar9,param_2[2]);
  }
  ppppcVar9 = (char ****)&local_100;
  if (0xf < local_e8) {
    ppppcVar9 = local_100;
  }
  ppppcVar7 = (char ****)((longlong)ppppcVar9 + local_f0);
  for (; ppppcVar9 != ppppcVar7; ppppcVar9 = (char ****)((longlong)ppppcVar9 + 1)) {
    if (*(char *)ppppcVar9 == '\\') {
      *(char *)ppppcVar9 = '/';
    }
  }
  local_80 = 8;
  local_78 = 1;
  if (DAT_180ca12d0 <= DAT_180ca12e0 + 1U) {
    FUN_180277210();
  }
  DAT_180ca12d8 = DAT_180ca12d8 & DAT_180ca12d0 - 1;
  uVar10 = DAT_180ca12e0 + DAT_180ca12d8;
  uVar8 = DAT_180ca12d0 - 1 & uVar10;
  if (*(longlong *)(DAT_180ca12c8 + uVar8 * 8) == 0) {
    uVar4 = FUN_1804ecaa0(0xf8);
    *(undefined8 *)(DAT_180ca12c8 + uVar8 * 8) = uVar4;
  }
  FUN_1802774b0(*(undefined8 *)(DAT_180ca12c8 + (DAT_180ca12d0 - 1 & uVar10) * 8),local_148);
  DAT_180ca12e0 = DAT_180ca12e0 + 1;
  piVar1 = *(int **)(DAT_180ca12c8 + (DAT_180ca12d0 - 1 & DAT_180ca12e0 + (DAT_180ca12d8 - 1)) * 8);
  FUN_18000f890(&local_70);
  FUN_18000f890(&local_a0);
  FUN_18000f890(&local_c0);
  FUN_18000f890(&local_e0);
  FUN_18000f890(&local_100);
  FUN_18000f890(&local_120);
  FUN_18000f890(&local_140);
  return piVar1;
}



/* ===== 1802753e0 FUN_1802753e0 ===== */

void FUN_1802753e0(longlong param_1)

{
  FUN_18000f890(param_1 + 0xd8);
  FUN_18000f890(param_1 + 0xa8);
  FUN_18000f890(param_1 + 0x88);
  FUN_18000f890(param_1 + 0x68);
  FUN_18000f890(param_1 + 0x48);
  FUN_18000f890(param_1 + 0x28);
  FUN_18000f890(param_1 + 8);
  return;
}



/* ===== 180275440 FUN_180275440 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180275440(void)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  short *psVar14;
  short *psVar15;
  undefined4 *puVar16;
  undefined8 ******ppppppuVar17;
  ulonglong uVar18;
  longlong *plVar19;
  short *psVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  uint uVar28;
  short *psVar29;
  byte ******ppppppbVar30;
  longlong *plVar31;
  byte ******ppppppbVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined4 extraout_XMM0_Da;
  undefined8 uStack_240;
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [24];
  uint local_218;
  longlong *local_210 [3];
  int local_1f8 [2];
  undefined **local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined8 ******local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  undefined8 ******local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  ulonglong local_190;
  char *local_188;
  size_t local_180;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 local_150;
  byte ******local_148 [2];
  longlong local_138;
  ulonglong local_130;
  undefined8 ******local_128 [3];
  ulonglong local_110;
  longlong **local_108;
  longlong *local_100;
  ulonglong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  char *local_d8;
  size_t local_d0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_238;
  uVar28 = 0;
  local_218 = 0;
  local_1d8 = (undefined8 *)0x0;
  local_1d0 = 0;
  local_1d8 = (undefined8 *)FUN_1804ecaa0(0x40);
  *local_1d8 = local_1d8;
  local_1d8[1] = local_1d8;
  local_1d8[2] = local_1d8;
  *(undefined2 *)(local_1d8 + 3) = 0x101;
  FUN_1802748d0(&local_1d8);
  local_1f8[0] = 0;
  local_1f0 = &PTR_vftable_18091a158;
  FUN_180274140(local_98,local_1f8);
  if (local_1f8[0] == 0) {
    local_180 = strlen("..\\..\\csgo");
    local_188 = "..\\..\\csgo";
    uVar9 = FUN_1804e5000();
    FUN_180013d60(local_128,uVar9,&local_188);
    local_218 = 0xc001;
    uVar12 = FUN_180014f50(&local_108,local_98,local_128);
    uVar28 = 0xc003;
    local_218 = 0xc003;
    FUN_180016eb0(&local_168,uVar12,local_1f8);
  }
  else {
    uStack_160 = 0;
    local_158 = 0;
    local_150 = 7;
    local_168 = 0;
  }
  iVar10 = local_1f8[0];
  if ((uVar28 & 2) != 0) {
    uVar28 = uVar28 & 0xfffffffd;
    local_218 = uVar28;
    FUN_1800289e0(&local_108);
  }
  if ((uVar28 & 1) != 0) {
    uVar28 = uVar28 & 0xfffffffe;
    local_218 = uVar28;
    FUN_1800289e0(local_128);
  }
  if (iVar10 != 0) {
    (**(code **)(*local_1f0 + 0x10))(local_1f0,&local_1a8,iVar10);
    ppppppuVar17 = &local_1a8;
    if (0xf < local_190) {
      ppppppuVar17 = local_1a8;
    }
    local_180 = strlen("..\\..\\csgo");
    local_188 = "..\\..\\csgo";
    uVar9 = FUN_1804e5000();
    FUN_180013d60(&local_d8,uVar9,&local_188);
    uVar28 = uVar28 | 0x3800;
    local_218 = uVar28;
    uVar12 = FUN_180014f50(local_b8,local_98,&local_d8);
    puVar13 = (undefined8 *)FUN_180274300(local_78,uVar12);
    if (0xf < (ulonglong)puVar13[3]) {
      puVar13 = (undefined8 *)*puVar13;
    }
    FUN_180274220("[error] list | game folder %s | %s",puVar13,ppppppuVar17);
    FUN_18000f890(local_78);
    FUN_1800289e0(local_b8);
    FUN_1800289e0(&local_d8);
    FUN_18000f890(&local_1a8);
  }
  puVar25 = auStack_238;
  puVar24 = auStack_238;
  puVar26 = auStack_238;
  local_210[0] = (longlong *)0x0;
  local_210[1] = (longlong *)0x0;
  local_210[2] = (longlong *)0x0;
  cVar1 = *(char *)((longlong)*local_1d8 + 0x19);
  plVar23 = (longlong *)*local_1d8;
  while (cVar1 == '\0') {
    iVar10 = 0;
    local_1f8[0] = 0;
    local_1f0 = &PTR_vftable_18091a158;
    if (local_158 == 0) {
      uStack_1c0 = 0;
      local_1b8 = 0;
      local_1b0 = 7;
      local_1c8 = (undefined8 ******)0x0;
    }
    else {
      FUN_180016eb0(&local_1a8,plVar23 + 4,local_1f8);
      uVar28 = uVar28 | 8;
      if (local_1f8[0] == 0) {
        FUN_180016eb0(&local_188,&local_168,local_1f8);
        iVar10 = local_1f8[0];
        if (local_1f8[0] == 0) {
          FUN_1800151a0(&local_1a8,&local_1c8,&local_188);
        }
        else {
          uStack_1c0 = 0;
          local_1b8 = 0;
          local_1b0 = 7;
          local_1c8 = (undefined8 ******)0x0;
        }
        local_218 = uVar28;
        FUN_1800289e0(&local_188);
      }
      else {
        uStack_1c0 = 0;
        local_1b8 = 0;
        local_1b0 = 7;
        local_1c8 = (undefined8 ******)0x0;
        iVar10 = local_1f8[0];
        local_218 = uVar28;
      }
      FUN_1800289e0(&local_1a8);
    }
    if (iVar10 == 0) {
      if (local_1b8 == 0) {
        ppppppuVar17 = (undefined8 ******)"empty";
        goto LAB_180275b8e;
      }
      local_d0 = strlen(".vmdl");
      local_d8 = ".vmdl";
      uVar9 = FUN_1804e5000();
      FUN_180013d60(&local_1a8,uVar9,&local_d8);
      FUN_180273ff0(&local_1c8,&local_1a8);
      FUN_1800289e0(&local_1a8);
      ppppppuVar17 = &local_1c8;
      if (7 < local_1b0) {
        ppppppuVar17 = local_1c8;
      }
      psVar29 = (short *)((longlong)ppppppuVar17 + local_1b8 * 2);
      psVar20 = psVar29;
      for (psVar14 = (short *)FUN_180013e50(); psVar14 != psVar20; psVar14 = psVar14 + 1) {
        if ((*psVar14 != 0x5c) && (*psVar14 != 0x2f)) goto LAB_1802757f0;
      }
LAB_18027580c:
      psVar14 = (short *)thunk_FUN_1804e6d50(psVar29);
      if (psVar29 != psVar14) {
        psVar20 = psVar14 + -1;
        if (psVar29 != psVar20) {
          psVar15 = psVar14 + -2;
          if (*psVar20 == 0x2e) {
            if ((psVar29 != psVar15) || (psVar14[-2] != 0x2e)) {
              psVar14 = psVar20;
            }
          }
          else {
            for (; psVar29 != psVar15; psVar15 = psVar15 + -1) {
              if (*psVar15 == 0x2e) {
                psVar14 = psVar15;
                break;
              }
            }
          }
        }
      }
      local_1a8 = (undefined8 ******)0x0;
      uStack_1a0 = 0;
      local_198 = 0;
      local_190 = 0;
      FUN_180024d40(&local_1a8,psVar29,(longlong)psVar14 - (longlong)psVar29 >> 1);
      uVar28 = uVar28 | 0x3e0;
      local_218 = uVar28;
      FUN_180274300(local_148,&local_1a8);
      FUN_1800289e0(&local_1a8);
      ppppppbVar30 = (byte ******)local_148;
      if (0xf < local_130) {
        ppppppbVar30 = local_148[0];
      }
      ppppppbVar32 = (byte ******)((longlong)ppppppbVar30 + local_138);
      bVar5 = true;
      for (; ppppppbVar30 != ppppppbVar32; ppppppbVar30 = (byte ******)((longlong)ppppppbVar30 + 1))
      {
        bVar8 = *(byte *)ppppppbVar30;
        if (bVar8 == 0x5f) {
          *(byte *)ppppppbVar30 = 0x20;
          bVar8 = 0x20;
        }
        iVar10 = isspace((uint)bVar8);
        if ((iVar10 == 0) && (bVar5)) {
          iVar11 = toupper((uint)*(byte *)ppppppbVar30);
          *(byte *)ppppppbVar30 = (byte)iVar11;
        }
        bVar5 = iVar10 != 0;
      }
      puVar16 = (undefined4 *)FUN_180274300(local_b8,&local_1c8);
      plVar19 = local_210[1];
      if (local_210[1] == local_210[2]) {
        uVar21 = (longlong)local_210[1] - (longlong)local_210[0];
        lVar22 = (longlong)uVar21 >> 6;
        if (lVar22 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_1800118d0();
        }
        uVar33 = lVar22 + 1;
        uVar18 = (longlong)local_210[2] - (longlong)local_210[0] >> 6;
        if (0x3ffffffffffffff - (uVar18 >> 1) < uVar18) {
          uVar34 = 0x3ffffffffffffff;
        }
        else {
          uVar18 = (uVar18 >> 1) + uVar18;
          uVar34 = uVar33;
          if (uVar33 <= uVar18) {
            uVar34 = uVar18;
          }
          if (0x3ffffffffffffff < uVar34) {
                    /* WARNING: Subroutine does not return */
            FUN_18000d840();
          }
        }
        local_188 = (char *)(uVar34 << 6);
        local_1e8 = (longlong *)FUN_18000fb70(local_188);
        plVar31 = (longlong *)((uVar21 & 0xffffffffffffffc0) + (longlong)local_1e8);
        local_1e0 = plVar31 + 8;
        local_108 = local_210;
        local_100 = local_1e8;
        local_f8 = uVar34;
        local_f0 = local_1e0;
        local_e8 = local_1e0;
        FUN_180024b50(plVar31,local_148);
        plVar7 = local_1e8;
        plVar31[4] = 0;
        plVar31[5] = 0;
        plVar31[6] = 0;
        plVar31[7] = 0;
        uVar9 = puVar16[1];
        uVar3 = puVar16[2];
        uVar4 = puVar16[3];
        *(undefined4 *)(plVar31 + 4) = *puVar16;
        *(undefined4 *)((longlong)plVar31 + 0x24) = uVar9;
        *(undefined4 *)(plVar31 + 5) = uVar3;
        *(undefined4 *)((longlong)plVar31 + 0x2c) = uVar4;
        uVar9 = puVar16[5];
        uVar3 = puVar16[6];
        uVar4 = puVar16[7];
        *(undefined4 *)(plVar31 + 6) = puVar16[4];
        *(undefined4 *)((longlong)plVar31 + 0x34) = uVar9;
        *(undefined4 *)(plVar31 + 7) = uVar3;
        *(undefined4 *)((longlong)plVar31 + 0x3c) = uVar4;
        *(undefined8 *)(puVar16 + 4) = 0;
        *(undefined8 *)(puVar16 + 6) = 0xf;
        *(undefined1 *)puVar16 = 0;
        local_f0 = plVar31;
        if (plVar19 == local_210[1]) {
          plVar31 = local_1e8;
          plVar19 = local_210[0];
        }
        else {
          FUN_18006c260(local_210[0],plVar19,local_1e8,local_210);
          local_f0 = plVar7;
          plVar31 = local_1e0;
        }
        FUN_18006c260(plVar19,local_210[1],plVar31,local_210);
        plVar31 = local_210[1];
        local_100 = (longlong *)0x0;
        plVar19 = local_210[0];
        if (local_210[0] != (longlong *)0x0) {
          for (; plVar19 != plVar31; plVar19 = plVar19 + 8) {
            FUN_18000f890(plVar19 + 4);
            FUN_18000f890(plVar19);
          }
          uVar21 = (longlong)local_210[2] - (longlong)local_210[0] & 0xffffffffffffffc0;
          if (uVar21 < 0x1000) {
            plVar19 = local_210[0];
          }
          else {
            if ((undefined1 *)0x1f <
                (undefined1 *)((longlong)local_210[0] + (-8 - local_210[0][-1]))) {
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              puVar24 = auStack_230;
              goto LAB_180275e52;
            }
            uVar21 = uVar21 | 0x27;
            plVar19 = (longlong *)local_210[0][-1];
          }
          thunk_FUN_1803d64e0(plVar19,uVar21);
        }
        local_210[0] = plVar7;
        local_210[1] = plVar7 + uVar33 * 8;
        local_210[2] = (longlong *)(local_188 + (longlong)plVar7);
        FUN_18006c890(&local_108);
      }
      else {
        FUN_180024b50(local_210[1],local_148);
        plVar19[4] = 0;
        plVar19[5] = 0;
        plVar19[6] = 0;
        plVar19[7] = 0;
        uVar9 = puVar16[1];
        uVar3 = puVar16[2];
        uVar4 = puVar16[3];
        *(undefined4 *)(plVar19 + 4) = *puVar16;
        *(undefined4 *)((longlong)plVar19 + 0x24) = uVar9;
        *(undefined4 *)(plVar19 + 5) = uVar3;
        *(undefined4 *)((longlong)plVar19 + 0x2c) = uVar4;
        lVar22 = *(longlong *)(puVar16 + 6);
        plVar19[6] = *(longlong *)(puVar16 + 4);
        plVar19[7] = lVar22;
        *(undefined8 *)(puVar16 + 4) = 0;
        *(undefined8 *)(puVar16 + 6) = 0xf;
        *(undefined1 *)puVar16 = 0;
        local_210[1] = local_210[1] + 8;
      }
      FUN_18000f890(local_b8);
      FUN_18000f890(local_148);
    }
    else {
      (**(code **)(*local_1f0 + 0x10))(local_1f0,local_128,iVar10);
      uVar28 = uVar28 | 0x14;
      ppppppuVar17 = local_128;
      local_218 = uVar28;
      if (0xf < local_110) {
        ppppppuVar17 = local_128[0];
      }
LAB_180275b8e:
      puVar13 = (undefined8 *)FUN_180274300(local_78,plVar23 + 4);
      if (0xf < (ulonglong)puVar13[3]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      FUN_180274220("[error] list | %s | relative failed | %s",puVar13,ppppppuVar17);
      FUN_18000f890(local_78);
      if ((uVar28 & 4) != 0) {
        uVar28 = uVar28 & 0xfffffffb;
        local_218 = uVar28;
        FUN_18000f890(local_128);
      }
      if (local_210[1] == local_210[2]) {
        FUN_180276fe0(local_210);
      }
      else {
        *local_210[1] = 0;
        local_210[1][1] = 0;
        local_210[1][2] = 0;
        local_210[1][3] = 0xf;
        *(undefined1 *)local_210[1] = 0;
        local_210[1][4] = 0;
        local_210[1][5] = 0;
        local_210[1][6] = 0;
        local_210[1][7] = 0xf;
        *(undefined1 *)(local_210[1] + 4) = 0;
        local_210[1] = local_210[1] + 8;
      }
    }
    FUN_1800289e0(&local_1c8);
    plVar19 = (longlong *)plVar23[2];
    if (*(char *)((longlong)plVar19 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar19 + 0x19);
      while (cVar1 == '\0') {
        plVar19 = (longlong *)*plVar19;
        cVar1 = *(char *)(*plVar19 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar23[1] + 0x19);
      plVar7 = (longlong *)plVar23[1];
      while ((plVar19 = plVar7, cVar1 == '\0' && (plVar23 == (longlong *)plVar19[2]))) {
        cVar1 = *(char *)(plVar19[1] + 0x19);
        plVar7 = (longlong *)plVar19[1];
        plVar23 = plVar19;
      }
    }
    plVar23 = plVar19;
    cVar1 = *(char *)((longlong)plVar19 + 0x19);
  }
  local_1e0 = (longlong *)&DAT_1809f36c0;
  iVar10 = FUN_1804e4d70(&DAT_1809f36c0);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f370c == 0x7fffffff) {
    DAT_1809f370c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180cfc7c8 != DAT_180cfc7d0) {
    DAT_180cfc7d0 = DAT_180cfc7c8;
  }
  uVar21 = 0;
  plVar23 = local_210[0];
  plVar19 = local_210[1];
  if ((longlong)local_210[1] - (longlong)local_210[0] >> 6 != 0) {
    do {
      if (plVar23[uVar21 * 8 + 6] != 0) {
        local_188 = (char *)FUN_180275030((int)uVar21 + 50000,plVar23 + uVar21 * 8 + 4);
        FUN_180276ce0(extraout_XMM0_Da,&local_188);
        plVar23 = local_210[0];
        plVar19 = local_210[1];
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < (ulonglong)((longlong)plVar19 - (longlong)plVar23 >> 6));
  }
  puVar6 = DAT_180cfc7d0;
  lVar22 = (longlong)DAT_180cfc7d0 - (longlong)DAT_180cfc7c8;
  for (puVar13 = DAT_180cfc7c8; puVar13 != puVar6; puVar13 = puVar13 + 1) {
    puVar16 = (undefined4 *)*puVar13;
    plVar23 = (longlong *)(puVar16 + 0x36);
    if (0xf < *(ulonglong *)(puVar16 + 0x3c)) {
      plVar23 = (longlong *)*plVar23;
    }
    plVar19 = (longlong *)(puVar16 + 10);
    if (0xf < *(ulonglong *)(puVar16 + 0x10)) {
      plVar19 = (longlong *)*plVar19;
    }
    FUN_180274220("agent | def %d | %s | %s",*puVar16,plVar19,plVar23);
  }
  FUN_1804e4e90(&DAT_1809f36c0);
  puVar13 = (undefined8 *)FUN_180274300(local_b8,&local_168);
  if (0xf < (ulonglong)puVar13[3]) {
    puVar13 = (undefined8 *)*puVar13;
  }
  FUN_180274220("list | %zu custom agents | mount: none, the files are read from %s by the game\'s own file system"
                ,lVar22 >> 3,puVar13);
  FUN_18000f890(local_b8);
  plVar19 = local_210[1];
  LOCK();
  DAT_180ccfbd7 = 1;
  UNLOCK();
  LOCK();
  DAT_180cfc7e0 = DAT_180cfc7e0 + 1;
  UNLOCK();
  puVar27 = auStack_238;
  plVar23 = local_210[0];
  if (local_210[0] == (longlong *)0x0) goto LAB_180275e6f;
  for (; plVar23 != plVar19; plVar23 = plVar23 + 8) {
    FUN_18000f890(plVar23 + 4);
    FUN_18000f890(plVar23);
  }
  plVar19 = local_210[0];
  if (((longlong)local_210[2] - (longlong)local_210[0] & 0xffffffffffffffc0U) < 0x1000) {
LAB_180275e59:
    puVar26 = puVar25;
  }
  else {
    plVar19 = (longlong *)local_210[0][-1];
    plVar23 = (longlong *)((longlong)local_210[0] + (-8 - (longlong)plVar19));
    if (&DAT_0000001f < plVar23) {
LAB_180275e52:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar25 = puVar24 + 8;
      plVar19 = plVar23;
      goto LAB_180275e59;
    }
  }
  *(undefined8 *)(puVar26 + -8) = 0x180275e61;
  thunk_FUN_1803d64e0(plVar19);
  *(undefined8 *)(puVar26 + 0x28) = 0;
  *(undefined8 *)(puVar26 + 0x30) = 0;
  *(undefined8 *)(puVar26 + 0x38) = 0;
  puVar27 = puVar26;
LAB_180275e6f:
  *(undefined8 *)(puVar27 + -8) = 0x180275e78;
  FUN_1800289e0(&local_168);
  *(undefined8 *)(puVar27 + -8) = 0x180275e85;
  FUN_1800289e0(local_98);
  *(undefined8 *)(puVar27 + -8) = 0x180275e90;
  FUN_180276610(puVar27 + 0x60);
  *(undefined8 *)(puVar27 + -8) = 0x180275e9f;
  return;
LAB_1802757f0:
  psVar20 = psVar29 + -1;
  if (*psVar20 == 0x5c) goto LAB_18027580c;
  if ((*psVar20 == 0x2f) || (psVar29 = psVar20, psVar14 == psVar20)) goto LAB_18027580c;
  goto LAB_1802757f0;
}



/* ===== 180275ef0 FUN_180275ef0 ===== */

longlong * FUN_180275ef0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar2 = FUN_1804e4d70(&DAT_1809f36c0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f370c == 0x7fffffff) {
    DAT_1809f370c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (DAT_180cfc7d0 - DAT_180cfc7c8 != 0) {
    uVar4 = DAT_180cfc7d0 - DAT_180cfc7c8 >> 3;
    if (0x1fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar1 = uVar4 * 8;
    lVar3 = FUN_18000fb70(lVar1);
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = lVar1 + lVar3;
    uVar4 = DAT_180cfc7d0 - DAT_180cfc7c8;
    FUN_180540530(lVar3,DAT_180cfc7c8,uVar4);
    param_1[1] = (uVar4 & 0xfffffffffffffff8) + lVar3;
  }
  FUN_1804e4e90(&DAT_1809f36c0);
  return param_1;
}



/* ===== 180275fe0 FUN_180275fe0 ===== */

void FUN_180275fe0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  char *pcVar12;
  
  if (DAT_180ccfbd7 != '\0') {
    iVar4 = FUN_1804e4d70(&DAT_1809f36c0);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f370c == 0x7fffffff) {
      DAT_1809f370c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    iVar4 = 0;
    do {
      lVar11 = 0x1c;
      if (iVar4 != 0) {
        lVar11 = 0x120;
      }
      pcVar12 = (char *)(lVar11 + param_1);
      lVar11 = 0x14;
      if (iVar4 != 0) {
        lVar11 = 0x18;
      }
      if (*pcVar12 == '\0') {
        puVar8 = DAT_180cfc7c8;
        if (49999 < *(int *)(param_1 + lVar11)) {
          for (; puVar8 != DAT_180cfc7d0; puVar8 = puVar8 + 1) {
            piVar1 = (int *)*puVar8;
            if (*piVar1 == *(int *)(param_1 + lVar11)) {
              plVar9 = (longlong *)(piVar1 + 0x36);
              uVar10 = 0x103;
              if (*(ulonglong *)(piVar1 + 0x3a) < 0x103) {
                uVar10 = *(ulonglong *)(piVar1 + 0x3a);
              }
              plVar7 = plVar9;
              if (0xf < *(ulonglong *)(piVar1 + 0x3c)) {
                plVar7 = (longlong *)*plVar9;
              }
              FUN_180540530(pcVar12,plVar7,uVar10);
              if (0xf < *(ulonglong *)(piVar1 + 0x3c)) {
                plVar9 = (longlong *)*plVar9;
              }
              puVar6 = &DAT_1806dfd54;
              if (iVar4 == 0) {
                puVar6 = &DAT_18070a238;
              }
              FUN_180274220("selection | %s | def %d -> %s",puVar6,*(undefined4 *)(param_1 + lVar11)
                            ,plVar9);
              goto LAB_18027617e;
            }
          }
          puVar6 = &DAT_1806dfd54;
          if (iVar4 == 0) {
            puVar6 = &DAT_18070a238;
          }
          FUN_180274220("selection | %s | def %d not found, cleared",puVar6);
          goto LAB_18027616c;
        }
      }
      else {
        lVar5 = 0x11f;
        if (iVar4 != 0) {
          lVar5 = 0x223;
        }
        *(undefined1 *)(param_1 + lVar5) = 0;
        puVar2 = DAT_180cfc7d0;
        for (puVar8 = DAT_180cfc7c8; puVar8 != puVar2; puVar8 = puVar8 + 1) {
          piVar1 = (int *)*puVar8;
          cVar3 = FUN_180023400(piVar1 + 0x36,pcVar12);
          if (cVar3 != '\0') {
            if (piVar1 != (int *)0x0) {
              if (*(int *)(param_1 + lVar11) != *piVar1) {
                puVar6 = &DAT_1806dfd54;
                if (iVar4 == 0) {
                  puVar6 = &DAT_18070a238;
                }
                FUN_180274220("selection | %s | %s -> def %d",puVar6,pcVar12);
                *(int *)(param_1 + lVar11) = *piVar1;
              }
              goto LAB_18027617e;
            }
            break;
          }
        }
        puVar6 = &DAT_1806dfd54;
        if (iVar4 == 0) {
          puVar6 = &DAT_18070a238;
        }
        FUN_180274220("selection | %s | %s not found, cleared",puVar6,pcVar12);
        FUN_180540170(pcVar12,0,0x104);
LAB_18027616c:
        *(undefined4 *)(param_1 + lVar11) = 0;
      }
LAB_18027617e:
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    FUN_1804e4e90(&DAT_1809f36c0);
  }
  return;
}



/* ===== 180276240 FUN_180276240 ===== */

ulonglong FUN_180276240(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  size_t _Size;
  int iVar3;
  ulonglong in_RAX;
  longlong lVar4;
  uint *_Buf2;
  ulonglong uVar5;
  undefined8 *puVar6;
  byte bStackX_9;
  byte bStackX_a;
  byte bStackX_b;
  
  if ((int)param_1 < 50000) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar3 = FUN_1804e4d70(&DAT_1809f36c0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  puVar6 = DAT_180cfc7c8;
  if (DAT_1809f370c == 0x7fffffff) {
    DAT_1809f370c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  for (; puVar6 != DAT_180cfc7d0; puVar6 = puVar6 + 1) {
    puVar2 = (uint *)*puVar6;
    if (*puVar2 == param_1) {
      bStackX_9 = (byte)(param_1 >> 8);
      bStackX_a = (byte)(param_1 >> 0x10);
      bStackX_b = (byte)(param_1 >> 0x18);
      uVar5 = DAT_180ca12b0 &
              (((((ulonglong)param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)bStackX_9) * 0x100000001b3 ^ (ulonglong)bStackX_a) * 0x100000001b3 ^
              (ulonglong)bStackX_b) * 0x100000001b3;
      lVar4 = *(longlong *)(DAT_180ca1298 + 8 + uVar5 * 0x10);
      if (lVar4 == DAT_180ca1288) goto LAB_180276343;
      uVar1 = *(uint *)(lVar4 + 0x10);
      goto joined_r0x000180276327;
    }
  }
  goto LAB_1802762a2;
joined_r0x000180276327:
  if (param_1 == uVar1) goto LAB_18027633e;
  if (lVar4 == *(longlong *)(DAT_180ca1298 + uVar5 * 0x10)) goto LAB_180276343;
  lVar4 = *(longlong *)(lVar4 + 8);
  uVar1 = *(uint *)(lVar4 + 0x10);
  goto joined_r0x000180276327;
LAB_18027633e:
  if (lVar4 == 0) {
LAB_180276343:
    lVar4 = DAT_180ca1288;
  }
  if (lVar4 != DAT_180ca1288) {
    _Buf2 = puVar2 + 0x36;
    puVar6 = (undefined8 *)(lVar4 + 0x18);
    if (0xf < *(ulonglong *)(puVar2 + 0x3c)) {
      _Buf2 = *(uint **)_Buf2;
    }
    _Size = *(size_t *)(lVar4 + 0x28);
    if (0xf < *(ulonglong *)(lVar4 + 0x30)) {
      puVar6 = (undefined8 *)*puVar6;
    }
    if ((_Size == *(size_t *)(puVar2 + 0x3a)) &&
       ((_Size == 0 || (iVar3 = memcmp(puVar6,_Buf2,_Size), iVar3 == 0)))) {
      uVar5 = 1;
      goto LAB_1802762a4;
    }
  }
LAB_1802762a2:
  uVar5 = 0;
LAB_1802762a4:
  FUN_1804e4e90(&DAT_1809f36c0);
  return uVar5;
}



/* ===== 1802763d0 FUN_1802763d0 ===== */

void FUN_1802763d0(undefined4 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_18 [16];
  
  local_res8[0] = param_1;
  iVar2 = FUN_1804e4d70(&DAT_1809f36c0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f370c == 0x7fffffff) {
    DAT_1809f370c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  plVar1 = (longlong *)FUN_180276a50(&DAT_180ca1280,local_18,local_res8);
  if ((undefined8 *)(*plVar1 + 0x18) != param_2) {
    if ((ulonglong)param_2[3] < 0x10) {
      puVar3 = param_2;
    }
    else {
      puVar3 = (undefined8 *)*param_2;
    }
    FUN_180029840((undefined8 *)(*plVar1 + 0x18),puVar3,param_2[2]);
  }
  FUN_1804e4e90(&DAT_1809f36c0);
  return;
}



/* ===== 180276480 FUN_180276480 ===== */

longlong * FUN_180276480(longlong *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *param_1 = (longlong)&DAT_1806e1718;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x16] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  FUN_18006c040(param_1,param_1 + 2);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  FUN_18006bd70(param_1 + 2);
  lVar2 = FUN_1802773e0(param_1 + 2,param_2,param_3 | 1);
  if (lVar2 == 0) {
    lVar2 = (longlong)*(int *)(*param_1 + 4);
    uVar4 = 6;
    if (*(longlong *)(lVar2 + 0x48 + (longlong)param_1) != 0) {
      uVar4 = 2;
    }
    uVar1 = *(uint *)(lVar2 + 0x10 + (longlong)param_1);
    *(uint *)(lVar2 + 0x10 + (longlong)param_1) = uVar4 | uVar1 & 0x17;
    uVar4 = (uVar4 | uVar1) & *(uint *)(lVar2 + 0x14 + (longlong)param_1);
    if ((uVar4 & 0x17) != 0) {
      if ((uVar4 & 4) == 0) {
        pcVar5 = "ios_base::failbit set";
        if ((uVar4 & 2) == 0) {
          pcVar5 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar5 = "ios_base::badbit set";
      }
      uVar3 = FUN_18004d7f0(local_68,1);
      FUN_18004e280(local_58,pcVar5,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_1804ef5f0(local_58,&DAT_180915ec0);
    }
  }
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  return param_1;
}



/* ===== 180276610 FUN_180276610 ===== */

void FUN_180276610(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180277190(param_1,param_1,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    FUN_1800289e0(plVar3 + 4);
    thunk_FUN_1803d64e0(plVar3,0x40);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_1803d64e0(*param_1,0x40);
  return;
}



/* ===== 180276680 FUN_180276680 ===== */

undefined4 * FUN_180276680(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 local_res10;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar4 = FUN_1804ecaa0(0x38);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(param_1 + 2) = lVar4;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  uVar2 = *(undefined8 *)(param_1 + 2);
  local_res10 = uVar2;
  if (0x7f < *(ulonglong *)(param_1 + 8)) {
    FUN_180026a10(0,*(ulonglong *)(param_1 + 8),&local_res10);
    return param_1;
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x80);
  puVar7 = auStack_28;
  puVar8 = auStack_28;
  lVar4 = *(longlong *)(param_1 + 6);
  if (*(longlong *)(param_1 + 10) - lVar4 == 0) goto LAB_180276745;
  if ((ulonglong)((*(longlong *)(param_1 + 10) - lVar4 >> 3) * 8) < 0x1000) {
LAB_18027673d:
    lVar6 = lVar4;
    puVar8 = puVar7;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar6) - 8U) {
      pcVar3 = (code *)swi(0x29);
      lVar4 = (*pcVar3)(5);
      puVar7 = auStack_20;
      goto LAB_18027673d;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x180276745;
  thunk_FUN_1803d64e0(lVar6);
LAB_180276745:
  *(undefined8 **)(param_1 + 6) = puVar5;
  puVar1 = puVar5 + 0x10;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *(undefined8 **)(param_1 + 10) = puVar1;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    *puVar5 = uVar2;
  }
  return param_1;
}



/* ===== 180276790 FUN_180276790 ===== */

undefined8 * FUN_180276790(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *local_18 [2];
  
  FUN_180077490(local_18,param_1);
  if ((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,0,1,1);
    plVar1 = *(longlong **)((longlong)*(int *)(*local_18[0] + 4) + 0x48 + (longlong)local_18[0]);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  else {
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0;
    param_2[2] = 0;
    plVar1 = *(longlong **)((longlong)*(int *)(*local_18[0] + 4) + 0x48 + (longlong)local_18[0]);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return param_2;
}



/* ===== 180276850 FUN_180276850 ===== */

longlong * FUN_180276850(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *local_98 [2];
  longlong local_88;
  longlong local_80;
  undefined1 local_70 [40];
  undefined1 local_48 [48];
  
  lVar7 = (longlong)*(int *)(*param_1 + 4);
  uVar4 = 4;
  if (*(longlong *)(lVar7 + 0x48 + (longlong)param_1) != 0) {
    uVar4 = 0;
  }
  uVar1 = *(uint *)(lVar7 + 0x10 + (longlong)param_1);
  *(uint *)(lVar7 + 0x10 + (longlong)param_1) = uVar4 | uVar1 & 0x16;
  uVar4 = (uVar4 | uVar1 & 0xfffffffe) & *(uint *)(lVar7 + 0x14 + (longlong)param_1);
  if ((uVar4 & 0x17) != 0) {
    if ((uVar4 & 4) == 0) {
      pcVar5 = "ios_base::failbit set";
      if ((uVar4 & 2) == 0) {
        pcVar5 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar5 = "ios_base::badbit set";
    }
    uVar3 = FUN_18004d7f0(&local_b8,1);
    FUN_18004e280(local_70,pcVar5,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_1804ef5f0(local_70,&DAT_180915ec0);
  }
  uVar4 = 0;
  FUN_180077490(local_98,param_1);
  if ((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) == 0) {
    plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    local_a8 = *(undefined8 *)(param_2 + 4);
    (**(code **)(*plVar2 + 0x58))(plVar2,&local_88,&local_b8,1);
    uVar4 = 0;
    if (local_88 + local_80 == -1) {
      uVar4 = 2;
    }
  }
  lVar7 = (longlong)*(int *)(*param_1 + 4);
  uVar1 = *(uint *)(lVar7 + 0x10 + (longlong)param_1);
  uVar6 = 4;
  if (*(longlong *)(lVar7 + 0x48 + (longlong)param_1) != 0) {
    uVar6 = 0;
  }
  *(uint *)(lVar7 + 0x10 + (longlong)param_1) = uVar6 | uVar4 | uVar1 & 0x17;
  uVar4 = (uVar6 | uVar4 | uVar1) & *(uint *)(lVar7 + 0x14 + (longlong)param_1);
  if ((uVar4 & 0x17) == 0) {
    plVar2 = *(longlong **)((longlong)*(int *)(*local_98[0] + 4) + 0x48 + (longlong)local_98[0]);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    return param_1;
  }
  if ((uVar4 & 4) == 0) {
    pcVar5 = "ios_base::failbit set";
    if ((uVar4 & 2) == 0) {
      pcVar5 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar5 = "ios_base::badbit set";
  }
  uVar3 = FUN_18004d7f0(&local_b8,1);
  FUN_18004e280(local_48,pcVar5,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_48,&DAT_180915ec0);
}



/* ===== 180276a50 FUN_180276a50 ===== */

undefined8 * FUN_180276a50(float *param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x38,puVar8,lVar6,param_4,pfVar1,0);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0xf;
  *(undefined1 *)(puVar5 + 3) = 0;
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
                       )) goto LAB_180276c72;
        puVar9 = (undefined8 *)puVar9[1];
        iVar2 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_180276c72:
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
      goto LAB_180276cc2;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) != puVar8) goto LAB_180276cc2;
  }
  *(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) = puVar5;
LAB_180276cc2:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180276ce0 FUN_180276ce0 ===== */

undefined8 * FUN_180276ce0(undefined8 param_1,undefined8 *param_2)

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
  
  puVar3 = DAT_180cfc7d0;
  if (DAT_180cfc7d0 != DAT_180cfc7d8) {
    *DAT_180cfc7d0 = *param_2;
    puVar3 = DAT_180cfc7d0;
    DAT_180cfc7d0 = DAT_180cfc7d0 + 1;
    return puVar3;
  }
  uVar8 = 0x1fffffffffffffff;
  uVar11 = (longlong)DAT_180cfc7d0 - (longlong)DAT_180cfc7c8;
  lVar4 = (longlong)uVar11 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar6 = (longlong)DAT_180cfc7d8 - (longlong)DAT_180cfc7c8 >> 3;
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
  if (puVar3 == DAT_180cfc7d0) {
    lVar4 = (longlong)DAT_180cfc7d0 - (longlong)DAT_180cfc7c8;
    puVar7 = puVar5;
    puVar3 = DAT_180cfc7c8;
  }
  else {
    FUN_180540530(puVar5,DAT_180cfc7c8,(longlong)puVar3 - (longlong)DAT_180cfc7c8);
    puVar7 = puVar12 + 1;
    lVar4 = (longlong)DAT_180cfc7d0 - (longlong)puVar3;
  }
  puVar9 = auStack_38;
  puVar10 = auStack_38;
  FUN_180540530(puVar7,puVar3,lVar4);
  if (DAT_180cfc7c8 == (undefined8 *)0x0) goto LAB_180276e3f;
  puVar3 = DAT_180cfc7c8;
  if ((ulonglong)(((longlong)DAT_180cfc7d8 - (longlong)DAT_180cfc7c8 >> 3) * 8) < 0x1000) {
LAB_180276e34:
    puVar10 = puVar9;
  }
  else {
    puVar3 = (undefined8 *)DAT_180cfc7c8[-1];
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_180cfc7c8 + (-8 - (longlong)puVar3))) {
      puVar3 = (undefined8 *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_30;
      goto LAB_180276e34;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x180276e3f;
  thunk_FUN_1803d64e0(puVar3);
LAB_180276e3f:
  DAT_180cfc7c8 = puVar5;
  DAT_180cfc7d0 = puVar5 + uVar1;
  DAT_180cfc7d8 = puVar5 + uVar8;
  return puVar12;
}



/* ===== 180276e90 FUN_180276e90 ===== */

longlong * FUN_180276e90(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  longlong *local_68;
  char local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  
  uVar6 = 0;
  param_1[1] = 0;
  FUN_180077490(&local_68,param_1);
  if ((local_60 != '\0') && (0 < param_3)) {
    plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    lVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
    param_1[1] = lVar3;
    uVar6 = 0;
    if (lVar3 != param_3) {
      uVar6 = 3;
    }
  }
  lVar3 = (longlong)*(int *)(*param_1 + 4);
  uVar1 = *(uint *)(lVar3 + 0x10 + (longlong)param_1);
  uVar5 = 4;
  if (*(longlong *)(lVar3 + 0x48 + (longlong)param_1) != 0) {
    uVar5 = 0;
  }
  *(uint *)(lVar3 + 0x10 + (longlong)param_1) = uVar5 | uVar6 | uVar1 & 0x17;
  uVar6 = (uVar5 | uVar6 | uVar1) & *(uint *)(lVar3 + 0x14 + (longlong)param_1);
  if ((uVar6 & 0x17) == 0) {
    plVar2 = *(longlong **)((longlong)*(int *)(*local_68 + 4) + 0x48 + (longlong)local_68);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    return param_1;
  }
  if ((uVar6 & 4) == 0) {
    pcVar7 = "ios_base::failbit set";
    if ((uVar6 & 2) == 0) {
      pcVar7 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar7 = "ios_base::badbit set";
  }
  uVar4 = FUN_18004d7f0(local_58,1);
  FUN_18004e280(local_48,pcVar7,uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_48,&DAT_180915ec0);
}



/* ===== 180276fe0 FUN_180276fe0 ===== */

undefined8 * FUN_180276fe0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar6 = *param_1;
  if (param_1[1] - lVar6 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar4 = param_1[2] - lVar6 >> 6;
  uVar1 = (param_1[1] - lVar6 >> 6) + 1;
  uVar11 = 0x3ffffffffffffff;
  if (uVar4 <= 0x3ffffffffffffff - (uVar4 >> 1)) {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar11 = uVar1;
    if (uVar1 <= uVar4) {
      uVar11 = uVar4;
    }
    if (0x3ffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar3 = (undefined8 *)FUN_18000fb70(uVar11 * 0x40);
  puVar10 = (undefined8 *)((param_2 - lVar6 & 0xffffffffffffffc0U) + (longlong)puVar3);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0xf;
  *(undefined1 *)puVar10 = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0xf;
  *(undefined1 *)(puVar10 + 4) = 0;
  lVar6 = param_1[1];
  lVar5 = *param_1;
  puVar9 = puVar3;
  if (param_2 != lVar6) {
    FUN_18006c260(*param_1,param_2,puVar3,param_1);
    lVar6 = param_1[1];
    puVar9 = puVar10 + 8;
    lVar5 = param_2;
  }
  FUN_18006c260(lVar5,lVar6,puVar9,param_1);
  puVar7 = auStack_38;
  puVar8 = auStack_38;
  lVar6 = *param_1;
  if (lVar6 == 0) goto LAB_180277147;
  lVar5 = param_1[1];
  for (; lVar6 != lVar5; lVar6 = lVar6 + 0x40) {
    FUN_18000f890(lVar6 + 0x20);
    FUN_18000f890(lVar6);
  }
  lVar6 = *param_1;
  if ((param_1[2] - lVar6 & 0xffffffffffffffc0U) < 0x1000) {
LAB_18027713f:
    lVar5 = lVar6;
    puVar8 = puVar7;
  }
  else {
    lVar5 = *(longlong *)(lVar6 + -8);
    if (0x1f < (lVar6 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar6 = (*pcVar2)(5);
      puVar7 = auStack_30;
      goto LAB_18027713f;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x180277147;
  thunk_FUN_1803d64e0(lVar5);
LAB_180277147:
  *param_1 = (longlong)puVar3;
  param_1[1] = (longlong)(puVar3 + uVar1 * 8);
  param_1[2] = (longlong)(puVar3 + uVar11 * 8);
  return puVar10;
}



/* ===== 180277190 FUN_180277190 ===== */

void FUN_180277190(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180277190(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_1800289e0(param_3 + 4);
    thunk_FUN_1803d64e0(param_3,0x40);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* ===== 180277210 FUN_180277210 ===== */

void FUN_180277210(void)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar2 = DAT_180ca12d8;
  uVar6 = 1;
  if (DAT_180ca12d0 != 0) {
    uVar6 = DAT_180ca12d0;
  }
  for (; (uVar6 == DAT_180ca12d0 || (uVar6 < 8)); uVar6 = uVar6 * 2) {
    if (0x108421084210842 - uVar6 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_1800ce400();
    }
  }
  if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
  lVar3 = FUN_18000fb70(uVar6 * 8);
  lVar5 = uVar2 * 8;
  uVar4 = uVar6 >> 1;
  for (; uVar6 <= uVar4; uVar6 = uVar6 * 2) {
  }
  uVar6 = uVar6 - DAT_180ca12d0;
  lVar9 = (DAT_180ca12d0 - uVar2) * 8;
  FUN_180540530(lVar5 + lVar3,DAT_180ca12c8 + lVar5,lVar9);
  lVar9 = lVar9 + lVar5 + lVar3;
  if (uVar6 < uVar2) {
    lVar5 = uVar6 * 8;
    FUN_180540530(lVar9,DAT_180ca12c8,lVar5);
    lVar9 = (uVar2 - uVar6) * 8;
    FUN_180540530(lVar3,DAT_180ca12c8 + lVar5,lVar9);
    lVar9 = lVar3 + lVar9;
  }
  else {
    FUN_180540530(lVar9,DAT_180ca12c8,lVar5);
    FUN_180540170(lVar9 + lVar5,0,(uVar6 - uVar2) * 8);
    lVar9 = lVar3;
  }
  FUN_180540170(lVar9,0,lVar5);
  puVar7 = auStack_38;
  puVar8 = auStack_38;
  if (DAT_180ca12c8 == 0) goto LAB_1802773b8;
  lVar5 = DAT_180ca12c8;
  if (DAT_180ca12d0 * 8 < 0x1000) {
LAB_1802773ad:
    puVar8 = puVar7;
  }
  else {
    lVar5 = *(longlong *)(DAT_180ca12c8 + -8);
    if (0x1f < (DAT_180ca12c8 - lVar5) - 8U) {
      lVar5 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar7 = auStack_30;
      goto LAB_1802773ad;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x1802773b8;
  thunk_FUN_1803d64e0(lVar5);
LAB_1802773b8:
  DAT_180ca12d0 = DAT_180ca12d0 + uVar6;
  DAT_180ca12c8 = lVar3;
  return;
}



/* ===== 1802773e0 FUN_1802773e0 ===== */

longlong FUN_1802773e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = FUN_1804eabd0(param_2,param_3,0x40,param_2,0);
    if (lVar2 != 0) {
      FUN_1800698d0(param_1,lVar2,1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8);
      local_18 = plVar1;
      (**(code **)(*plVar1 + 8))(plVar1);
      uVar3 = FUN_180068df0(local_20);
      FUN_180069760(param_1,uVar3);
      if (plVar1 != (longlong *)0x0) {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      return param_1;
    }
  }
  return 0;
}



/* ===== 1802774b0 FUN_1802774b0 ===== */

undefined4 * FUN_1802774b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0xf;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0xf;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0xf;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)(param_2 + 0x22) = 0;
  *(undefined8 *)(param_2 + 0x26) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0xf;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined1 *)(param_2 + 0x2a) = 0;
  *(undefined8 *)(param_2 + 0x2e) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0xf;
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  *(undefined1 *)(param_2 + 0x36) = 0;
  *(undefined8 *)(param_2 + 0x3a) = 0;
  *(undefined8 *)(param_2 + 0x3c) = 0xf;
  return param_1;
}



/* ===== 180277690 FUN_180277690 ===== */

undefined8 FUN_180277690(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  while ((uVar1 + 1 < 0x100 && (*(char *)(uVar1 + param_1) != '\0'))) {
    *(char *)(uVar1 + param_2) = *(char *)(uVar1 + param_1);
    uVar1 = uVar1 + 1;
  }
  *(undefined1 *)(uVar1 + param_2) = 0;
  return CONCAT71((int7)(uVar1 >> 8),1);
}



/* ===== 1802776e0 FUN_1802776e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802776e0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  size_t sVar2;
  undefined1 auStack_148 [40];
  undefined8 *local_120;
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_148;
  local_120 = param_1;
  FUN_180540170(local_118,0,0x100);
  if ((param_2 - 0x10000U < 0x7ffffffeffff) &&
     (cVar1 = FUN_180277690(param_2,local_118), cVar1 != '\0')) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar2 = strlen(local_118);
    FUN_1800133a0(param_1,local_118,sVar2);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return param_1;
}



/* ===== 1802777c0 FUN_1802777c0 ===== */

undefined8 * FUN_1802777c0(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  
  if ((DAT_180cfc838 == (longlong *)0x0) || (*(longlong *)(param_2 + 0x10) == 0))
  goto LAB_1802778a7;
  pcVar3 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pcVar3 = *(char **)param_2;
  }
  pcVar3 = (char *)(**(code **)(*DAT_180cfc838 + 0x88))(DAT_180cfc838,pcVar3);
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) goto LAB_1802778a7;
  uVar1 = *(ulonglong *)(param_2 + 0x18);
  pcVar5 = param_2;
  if (0xf < uVar1) {
    pcVar5 = *(char **)param_2;
  }
  if (*pcVar5 == '#') {
    pcVar5 = param_2;
    if (0xf < uVar1) {
      pcVar5 = *(char **)param_2;
    }
    pcVar5 = pcVar5 + 1;
LAB_180277846:
    if (0xf < uVar1) {
      param_2 = *(char **)param_2;
    }
  }
  else {
    pcVar5 = param_2;
    if (0xf < uVar1) {
      pcVar5 = *(char **)param_2;
      goto LAB_180277846;
    }
  }
  iVar2 = strcmp(pcVar3,param_2);
  if (iVar2 != 0) {
    iVar2 = strcmp(pcVar3,pcVar5);
    if (iVar2 != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      sVar4 = strlen(pcVar3);
      FUN_1800133a0(param_1,pcVar3,sVar4);
      return param_1;
    }
  }
LAB_1802778a7:
  FUN_180024b50(param_1,param_3);
  return param_1;
}



/* ===== 1802778c0 FUN_1802778c0 ===== */

undefined8 FUN_1802778c0(longlong *param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char **ppcVar6;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  
  if (param_2 == 0x29) {
    return 3;
  }
  plVar5 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    plVar5 = (longlong *)*param_1;
  }
  if ((((ulonglong)param_1[2] < 0xc) ||
      (plVar2 = (longlong *)
                thunk_FUN_1804e6890(plVar5,(longlong *)((longlong)plVar5 + 0xc),"weapon_knife",0xc),
      plVar2 == (longlong *)((longlong)plVar5 + 0xc))) || (plVar2 != plVar5)) {
    plVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar5 = (longlong *)*param_1;
    }
    if (param_1[2] == 0xe) {
      lVar4 = *plVar5 + -0x625f6e6f70616577;
      if ((lVar4 == 0) && (lVar4 = (ulonglong)*(uint *)(plVar5 + 1) - 0x6e6f7961, lVar4 == 0)) {
        lVar4 = (ulonglong)*(ushort *)((longlong)plVar5 + 0xc) - 0x7465;
      }
      if (lVar4 == 0) goto LAB_180277987;
    }
    if ((ulonglong)param_1[3] < 0x10) {
      plVar5 = param_1;
    }
    else {
      plVar5 = (longlong *)*param_1;
    }
    if (((6 < (ulonglong)param_1[2]) &&
        (plVar2 = (longlong *)
                  thunk_FUN_1804e6890(plVar5,(longlong *)((longlong)plVar5 + 7),"weapon_",7),
        plVar2 != (longlong *)((longlong)plVar5 + 7))) && (plVar2 == plVar5)) {
      local_c8 = "weapon_flashbang";
      ppcVar6 = &local_c8;
      local_c0 = "weapon_hegrenade";
      local_b8 = "weapon_smokegrenade";
      local_b0 = "weapon_molotov";
      local_a8 = "weapon_decoy";
      local_a0 = "weapon_incgrenade";
      local_98 = "weapon_c4";
      local_90 = "weapon_healthshot";
      local_88 = "weapon_knifegg";
      local_80 = "weapon_tagrenade";
      local_78 = "weapon_shield";
      local_70 = "weapon_snowball";
      local_68 = "weapon_breachcharge";
      local_60 = "weapon_bumpmine";
      local_58 = "weapon_diversion";
      local_50 = "weapon_frag_grenade";
      local_48 = "weapon_firebomb";
      local_40 = "weapon_zone_repulsor";
      local_38 = "weapon_tablet";
      local_30 = "weapon_fists";
      local_28 = "weapon_melee";
      local_20 = "weapon_axe";
      local_18 = "weapon_hammer";
      local_10 = "weapon_spanner";
      while (cVar1 = FUN_180023400(param_1,*ppcVar6), cVar1 == '\0') {
        ppcVar6 = ppcVar6 + 1;
        if (ppcVar6 == (char **)((longlong)register0x00000020 + -8)) {
          return 1;
        }
      }
    }
    uVar3 = 0;
  }
  else {
LAB_180277987:
    uVar3 = 2;
  }
  return uVar3;
}



/* ===== 180277b30 FUN_180277b30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180277b30(longlong param_1,ulonglong param_2,longlong param_3,undefined1 *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  char *pcVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  undefined8 ****ppppuVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  int iVar19;
  char *pcVar20;
  uint uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  int local_e8;
  int local_e4;
  undefined1 *local_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong uStack_c8;
  ulonglong local_c0;
  ulonglong uStack_b8;
  undefined8 ****local_b0 [2];
  longlong local_a0;
  ulonglong local_98;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_108;
  bVar23 = false;
  local_e4 = 0;
  param_1 = (param_2 & 0xffffffff) + param_1;
  local_e0 = param_4;
  iVar8 = FUN_180011200(param_1);
  local_e4 = iVar8;
  local_d8 = FUN_18000f3a0(param_1 + 8);
  if (iVar8 - 300U < 0x7405) {
    cVar7 = FUN_1801d1c60(local_d8,(longlong)iVar8 << 5);
    if (cVar7 != '\0') {
      iVar19 = 0;
      local_e8 = 0;
      uVar22 = 0;
      puVar18 = auStack_108;
      if (0 < iVar8) {
        local_d8 = local_d8 + 0x18;
        do {
          lVar10 = FUN_18000f3a0(uVar22 * 0x20 + local_d8);
          cVar7 = FUN_1801d1c60(lVar10,0x10);
          if ((cVar7 != '\0') && (iVar8 = FUN_180011200(lVar10), iVar8 - 1U < 100000)) {
            uVar11 = FUN_18000f3a0(lVar10 + 8);
            cVar7 = FUN_1801d1c60(uVar11,2);
            if (cVar7 == '\0') {
LAB_180277c92:
              bVar4 = false;
            }
            else {
              pcVar12 = (char *)FUN_1802776e0(&local_d0,uVar11);
              bVar23 = true;
              plVar1 = (longlong *)(pcVar12 + 0x10);
              if (0x2e < *plVar1 - 2U) goto LAB_180277c92;
              if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
                pcVar12 = *(char **)pcVar12;
              }
              pcVar20 = pcVar12 + *plVar1;
              for (; pcVar12 != pcVar20; pcVar12 = pcVar12 + 1) {
                cVar7 = *pcVar12;
                if (((0x19 < (byte)(cVar7 + 0x9fU)) && (9 < (byte)(cVar7 - 0x30U))) &&
                   (cVar7 != '_')) goto LAB_180277c92;
              }
              bVar4 = true;
            }
            if (bVar23) {
              bVar23 = false;
              FUN_18000f890(&local_d0);
            }
            if (bVar4) {
              uVar11 = FUN_18000f3a0(lVar10 + 8);
              FUN_1802776e0(local_b0,uVar11);
              uVar16 = local_98;
              lVar6 = local_a0;
              ppppuVar5 = local_b0[0];
              if (local_e0 != (undefined1 *)0x0) {
                ppppuVar15 = local_b0;
                if (0xf < local_98) {
                  ppppuVar15 = local_b0[0];
                }
                if ((local_a0 == 8) && (iVar8 = memcmp(ppppuVar15,"so_olive",8), iVar8 == 0)) {
LAB_180277d23:
                  *local_e0 = 1;
                }
                else {
                  ppppuVar15 = local_b0;
                  if (0xf < uVar16) {
                    ppppuVar15 = ppppuVar5;
                  }
                  if ((lVar6 == 0x16) &&
                     (iVar8 = memcmp(ppppuVar15,"cu_medieval_dragon_awp",0x16), iVar8 == 0))
                  goto LAB_180277d23;
                }
                iVar19 = local_e8;
              }
              if ((param_3 != 0) && (iVar19 < 3)) {
                if (*(longlong *)(param_3 + 0x10) != 0) {
                  FUN_1800134a0(param_3,&DAT_1806f0594,2);
                }
                uVar9 = FUN_180011200(lVar10);
                uVar11 = FUN_18003a390(local_70,uVar9);
                puVar13 = (ulonglong *)FUN_1800134a0(uVar11,&DAT_18073ec98,1);
                local_d0 = *puVar13;
                uStack_c8 = puVar13[1];
                local_c0 = puVar13[2];
                uStack_b8 = puVar13[3];
                puVar13[2] = 0;
                puVar13[3] = 0xf;
                *(undefined1 *)puVar13 = 0;
                puVar14 = (undefined8 *)FUN_1800667a0(local_90,&local_d0,local_b0);
                puVar2 = puVar14 + 2;
                if (0xf < (ulonglong)puVar14[3]) {
                  puVar14 = (undefined8 *)*puVar14;
                }
                FUN_1800134a0(param_3,puVar14,*puVar2);
                FUN_18000f890(local_90);
                if (0xf < uStack_b8) {
                  uVar17 = uStack_b8 + 1;
                  uVar16 = local_d0;
                  if (0xfff < uVar17) {
                    uVar16 = *(ulonglong *)(local_d0 - 8);
                    if (0x1f < (local_d0 - uVar16) - 8) {
                      pcVar3 = (code *)swi(0x29);
                      (*pcVar3)(5);
                      puVar18 = auStack_100;
                      break;
                    }
                    uVar17 = uStack_b8 + 0x28;
                  }
                  thunk_FUN_1803d64e0(uVar16,uVar17);
                }
                local_c0 = 0;
                uStack_b8 = 0xf;
                local_d0 = local_d0 & 0xffffffffffffff00;
                FUN_18000f890(local_70);
              }
              iVar19 = iVar19 + 1;
              local_e8 = iVar19;
              FUN_18000f890(local_b0);
            }
          }
          uVar21 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar21;
          puVar18 = auStack_108;
        } while ((int)uVar21 < local_e4);
      }
      goto LAB_180277e6e;
    }
  }
  puVar18 = auStack_108;
  iVar19 = 0;
LAB_180277e6e:
  *(undefined8 *)(puVar18 + -8) = 0x180277e7a;
  return iVar19;
}



/* ===== 180277e90 FUN_180277e90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180277e90(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  uint local_88;
  undefined8 ****local_80;
  char local_78 [8];
  undefined8 ****local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_a8;
  puVar8 = auStack_a8;
  if (param_1 != 0) {
    uVar5 = (ulonglong)DAT_180cfc848;
    puVar8 = auStack_a8;
    if (DAT_180cfc848 != 0) goto LAB_180277fe6;
    uVar5 = 0;
    iVar11 = 0;
    uVar10 = 0x138;
    do {
      uStack_68 = 0;
      local_60 = 0;
      local_58 = 0xf;
      local_70 = (undefined8 ****)0x0;
      local_78[0] = '\0';
      iVar3 = FUN_180277b30(param_1,uVar10,&local_70,local_78);
      cVar2 = local_78[0];
      if (299 < iVar3) {
        ppppuVar6 = &local_70;
        if (0xf < local_58) {
          ppppuVar6 = local_70;
        }
        bVar12 = local_78[0] != '\0';
        uVar4 = FUN_180011200(uVar10 + param_1);
        local_88 = (uint)bVar12;
        local_80 = ppppuVar6;
        FUN_1802b2560("[skins] kit map candidate 0x%X | count %d | valid %d | marker %d | %s",uVar10
                      ,uVar4,iVar3);
        if ((cVar2 != '\0') && (iVar11 < iVar3)) {
          uVar5 = uVar10;
          iVar11 = iVar3;
        }
      }
      if (0xf < local_58) {
        uVar7 = local_58 + 1;
        ppppuVar6 = local_70;
        if (0xfff < uVar7) {
          ppppuVar6 = (undefined8 ****)local_70[-1];
          if (0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)ppppuVar6))) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar8 = auStack_a0;
            goto LAB_180277fe4;
          }
          uVar7 = local_58 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppuVar6,uVar7);
      }
      uVar9 = (int)uVar10 + 8;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 < 0x701);
    puVar8 = auStack_a8;
    if ((uint)uVar5 != 0) {
      DAT_180cfc848 = (uint)uVar5;
      FUN_1802b2560("[skins] paint kit map at 0x%X (was 0x%X) | %d kits",uVar5,0x2f0,iVar11);
      puVar8 = auStack_a8;
      goto LAB_180277fe6;
    }
  }
LAB_180277fe4:
  uVar5 = 0;
LAB_180277fe6:
  *(undefined8 *)(puVar8 + -8) = 0x180277ff3;
  return uVar5;
}



/* ===== 180278010 FUN_180278010 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180278010(longlong param_1)

{
  code *pcVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong local_120;
  longlong lStack_118;
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  longlong lStack_f8;
  longlong local_f0;
  ulonglong local_e8;
  int local_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_148;
  iVar3 = FUN_180011200(param_1 + 0x128);
  lVar5 = FUN_18000f3a0(param_1 + 0x130);
  uVar11 = 0;
  if (0 < iVar3) {
    do {
      lVar6 = FUN_18000f3a0((ulonglong)uVar11 * 0x20 + lVar5 + 0x18);
      if (lVar6 - 0x10000U < 0x7ffffffeffff) {
        local_128 = 0;
        lStack_118 = 0;
        local_110 = 0;
        local_108 = 0xf;
        local_120 = 0;
        lStack_f8 = 0;
        local_f0 = 0;
        local_e8 = 0xf;
        local_100 = 0;
        local_e0 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0xf;
        local_d8 = 0;
        lStack_b0 = 0;
        local_a8 = 0;
        local_a0 = 0xf;
        local_b8 = 0;
        uVar2 = FUN_180011440(lVar6 + 0x10);
        local_128 = CONCAT44(local_128._4_4_,(uint)uVar2);
        uVar4 = FUN_180011200(lVar6 + 0x338);
        local_128 = CONCAT44(uVar4,(int)local_128);
        uVar7 = FUN_18000f3a0(lVar6 + 0x260);
        plVar8 = (longlong *)FUN_1802776e0(local_78,uVar7);
        if (&local_120 != plVar8) {
          if (0xf < local_108) {
            uVar10 = local_108 + 1;
            lVar9 = local_120;
            if (0xfff < uVar10) {
              lVar9 = *(longlong *)(local_120 + -8);
              if (0x1f < (local_120 - lVar9) - 8U) goto LAB_18027856c;
              uVar10 = local_108 + 0x28;
            }
            thunk_FUN_1803d64e0(lVar9,uVar10);
          }
          local_120 = *plVar8;
          lStack_118 = plVar8[1];
          local_110 = plVar8[2];
          local_108 = plVar8[3];
          plVar8[2] = 0;
          plVar8[3] = 0xf;
          *(undefined1 *)plVar8 = 0;
        }
        FUN_18000f890(local_78);
        if (((int)local_128 != 0) && (local_110 != 0)) {
          local_e0 = FUN_1802778c0(&local_120,local_128._4_4_);
          if (local_e0 != 0) {
            uVar7 = FUN_18000f3a0(lVar6 + 0x70);
            uVar7 = FUN_1802776e0(local_98,uVar7);
            plVar8 = (longlong *)FUN_1802777c0(local_78,uVar7,&local_120);
            if (&local_100 != plVar8) {
              if (0xf < local_e8) {
                uVar10 = local_e8 + 1;
                lVar9 = local_100;
                if (0xfff < uVar10) {
                  lVar9 = *(longlong *)(local_100 + -8);
                  if (0x1f < (local_100 - lVar9) - 8U) {
                    pcVar1 = (code *)swi(0x29);
                    (*pcVar1)(5);
                    goto LAB_18027856c;
                  }
                  uVar10 = local_e8 + 0x28;
                }
                thunk_FUN_1803d64e0(lVar9,uVar10);
              }
              local_100 = *plVar8;
              lStack_f8 = plVar8[1];
              local_f0 = plVar8[2];
              local_e8 = plVar8[3];
              plVar8[2] = 0;
              plVar8[3] = 0xf;
              *(undefined1 *)plVar8 = 0;
            }
            FUN_18000f890(local_78);
            FUN_18000f890(local_98);
            if (local_e0 - 2U < 2) {
              plVar8 = (longlong *)FUN_180066a20(local_98,&DAT_1806de684,&local_100);
              if (&local_100 != plVar8) {
                if (0xf < local_e8) {
                  uVar10 = local_e8 + 1;
                  lVar9 = local_100;
                  if (0xfff < uVar10) {
                    lVar9 = *(longlong *)(local_100 + -8);
                    if (0x1f < (local_100 - lVar9) - 8U) goto LAB_18027856c;
                    uVar10 = local_e8 + 0x28;
                  }
                  thunk_FUN_1803d64e0(lVar9,uVar10);
                }
                local_100 = *plVar8;
                lStack_f8 = plVar8[1];
                local_f0 = plVar8[2];
                local_e8 = plVar8[3];
                plVar8[2] = 0;
                plVar8[3] = 0xf;
                *(undefined1 *)plVar8 = 0;
              }
              FUN_18000f890(local_98);
            }
            uVar7 = FUN_18000f3a0(lVar6 + 0x3c0);
            plVar8 = (longlong *)FUN_1802776e0(local_98,uVar7);
            if (&local_d8 != plVar8) {
              if (0xf < local_c0) {
                uVar10 = local_c0 + 1;
                lVar9 = local_d8;
                if (0xfff < uVar10) {
                  lVar9 = *(longlong *)(local_d8 + -8);
                  if (0x1f < (local_d8 - lVar9) - 8U) goto LAB_18027856c;
                  uVar10 = local_c0 + 0x28;
                }
                thunk_FUN_1803d64e0(lVar9,uVar10);
              }
              local_d8 = *plVar8;
              lStack_d0 = plVar8[1];
              local_c8 = plVar8[2];
              local_c0 = plVar8[3];
              plVar8[2] = 0;
              plVar8[3] = 0xf;
              *(undefined1 *)plVar8 = 0;
            }
            FUN_18000f890(local_98);
            uVar7 = FUN_18000f3a0(lVar6 + 0x148);
            plVar8 = (longlong *)FUN_1802776e0(local_98,uVar7);
            if (&local_b8 != plVar8) {
              if (0xf < local_a0) {
                uVar10 = local_a0 + 1;
                lVar6 = local_b8;
                if (0xfff < uVar10) {
                  lVar6 = *(longlong *)(local_b8 + -8);
                  if (0x1f < (local_b8 - lVar6) - 8U) {
LAB_18027856c:
                    pcVar1 = (code *)swi(0x29);
                    (*pcVar1)(5);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  uVar10 = local_a0 + 0x28;
                }
                thunk_FUN_1803d64e0(lVar6,uVar10);
              }
              local_b8 = *plVar8;
              lStack_b0 = plVar8[1];
              local_a8 = plVar8[2];
              local_a0 = plVar8[3];
              plVar8[2] = 0;
              plVar8[3] = 0xf;
              *(undefined1 *)plVar8 = 0;
            }
            FUN_18000f890(local_98);
            if (DAT_180cfc960 == DAT_180cfc968) {
              FUN_180287e40(DAT_180cfc960,DAT_180cfc960,&local_128);
            }
            else {
              FUN_1802886b0(DAT_180cfc960,&local_128);
              DAT_180cfc960 = DAT_180cfc960 + 0x90;
            }
          }
        }
        FUN_18000f890(&local_b8);
        FUN_18000f890(&local_d8);
        FUN_18000f890(&local_100);
        FUN_18000f890(&local_120);
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar3);
  }
  return;
}



/* ===== 180278580 FUN_180278580 ===== */

void FUN_180278580(longlong param_1)

{
  FUN_18000f890(param_1 + 0x70);
  FUN_18000f890(param_1 + 0x50);
  FUN_18000f890(param_1 + 0x28);
  FUN_18000f890(param_1 + 8);
  return;
}



/* ===== 1802785c0 FUN_1802785c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802785c0(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  char ***pppcVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_178 [32];
  longlong local_158 [4];
  int local_138 [2];
  undefined8 local_130;
  undefined8 uStack_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  longlong lStack_108;
  longlong local_100;
  ulonglong local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  ulonglong local_a8;
  char ***local_98 [2];
  longlong local_88;
  ulonglong local_80;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_178;
  uVar2 = FUN_180277e90();
  if (uVar2 != 0) {
    iVar3 = FUN_180011200(param_1 + (ulonglong)uVar2);
    lVar5 = FUN_18000f3a0(param_1 + (ulonglong)uVar2 + 8);
    uVar13 = 0;
    if (0 < iVar3) {
      do {
        lVar11 = 0;
        lVar6 = FUN_18000f3a0(uVar13 * 0x20 + lVar5 + 0x18);
        if (lVar6 - 0x10000U < 0x7ffffffeffff) {
          uStack_128 = 0;
          local_120 = 0;
          local_118 = 0xf;
          local_130 = 0;
          lStack_108 = 0;
          local_100 = 0;
          local_f8 = 0xf;
          local_110 = 0;
          local_f0 = 0;
          local_ec = 0x3f800000;
          local_e8 = 0;
          uStack_d8 = 0;
          local_d0 = 0;
          local_c8 = 0xf;
          local_e0 = 0;
          lStack_b8 = 0;
          local_b0 = 0;
          local_a8 = 0xf;
          local_c0 = 0;
          iVar4 = FUN_180011200(lVar6);
          local_138[0] = iVar4;
          uVar7 = FUN_18000f3a0(lVar6 + 8);
          puVar8 = (undefined8 *)FUN_1802776e0(local_158,uVar7);
          if (&local_130 != puVar8) {
            local_130 = *puVar8;
            uStack_128 = puVar8[1];
            lVar11 = puVar8[2];
            local_118 = puVar8[3];
            puVar8[2] = 0;
            puVar8[3] = 0xf;
            *(undefined1 *)puVar8 = 0;
            local_120 = lVar11;
          }
          FUN_18000f890(local_158);
          if ((iVar4 < 1) || (lVar11 == 0)) {
            FUN_18000f890(&local_c0);
            FUN_18000f890(&local_e0);
            FUN_18000f890(&local_110);
            FUN_18000f890(&local_130);
          }
          else {
            local_f0 = FUN_18000f3d0(lVar6 + 0x6c);
            local_ec = FUN_18000f3d0(lVar6 + 0x70);
            local_e8 = FUN_180011220(lVar6 + 0xae);
            uVar7 = FUN_18000f3a0(lVar6 + 200);
            puVar8 = (undefined8 *)FUN_1802776e0(local_158,uVar7);
            if (&local_e0 != puVar8) {
              local_e0 = *puVar8;
              uStack_d8 = puVar8[1];
              local_d0 = puVar8[2];
              local_c8 = puVar8[3];
              puVar8[2] = 0;
              puVar8[3] = 0xf;
              *(undefined1 *)puVar8 = 0;
            }
            FUN_18000f890(local_158);
            uVar7 = FUN_18000f3a0(lVar6 + 0x18);
            uVar7 = FUN_1802776e0(local_78,uVar7);
            plVar9 = (longlong *)FUN_1802777c0(local_158,uVar7,&local_130);
            if (&local_110 != plVar9) {
              if (local_f8 < 0x10) {
LAB_180278842:
                local_110 = *plVar9;
                lStack_108 = plVar9[1];
                local_100 = plVar9[2];
                local_f8 = plVar9[3];
                plVar9[2] = 0;
                plVar9[3] = 0xf;
                *(undefined1 *)plVar9 = 0;
                goto LAB_18027886f;
              }
              uVar12 = local_f8 + 1;
              lVar11 = local_110;
              if (uVar12 < 0x1000) {
LAB_18027883d:
                thunk_FUN_1803d64e0(lVar11,uVar12);
                goto LAB_180278842;
              }
              lVar11 = *(longlong *)(local_110 + -8);
              if ((local_110 - lVar11) - 8U < 0x20) {
                uVar12 = local_f8 + 0x28;
                goto LAB_18027883d;
              }
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
LAB_180278a6e:
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
LAB_180278a75:
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
LAB_18027886f:
            FUN_18000f890(local_158);
            FUN_18000f890(local_78);
            uVar7 = FUN_18000f3a0(lVar6 + 0x10);
            FUN_1802776e0(local_98,uVar7);
            if (local_88 != 0) {
              pppcVar10 = (char ***)local_98;
              if (0xf < local_80) {
                pppcVar10 = local_98[0];
              }
              if (*(char *)pppcVar10 == '#') {
                local_158[1] = 0;
                local_158[2] = 0;
                local_158[3] = 0xf;
                local_158[0] = 0;
                plVar9 = (longlong *)FUN_1802777c0(local_78,local_98,local_158);
                if (&local_c0 != plVar9) {
                  if (0xf < local_a8) {
                    uVar12 = local_a8 + 1;
                    lVar11 = local_c0;
                    if (0xfff < uVar12) {
                      lVar11 = *(longlong *)(local_c0 + -8);
                      if (0x1f < (local_c0 - lVar11) - 8U) goto LAB_180278a6e;
                      uVar12 = local_a8 + 0x28;
                    }
                    thunk_FUN_1803d64e0(lVar11,uVar12);
                  }
                  local_c0 = *plVar9;
                  lStack_b8 = plVar9[1];
                  local_b0 = plVar9[2];
                  local_a8 = plVar9[3];
                  plVar9[2] = 0;
                  plVar9[3] = 0xf;
                  *(undefined1 *)plVar9 = 0;
                }
                FUN_18000f890(local_78);
                if (0xf < (ulonglong)local_158[3]) {
                  uVar12 = local_158[3] + 1;
                  lVar11 = local_158[0];
                  if (0xfff < uVar12) {
                    lVar11 = *(longlong *)(local_158[0] + -8);
                    if (0x1f < (local_158[0] - lVar11) - 8U) goto LAB_180278a75;
                    uVar12 = local_158[3] + 0x28;
                  }
                  thunk_FUN_1803d64e0(lVar11,uVar12);
                }
              }
            }
            if (DAT_180cfc858 == DAT_180cfc860) {
              FUN_1802879a0(DAT_180cfc858,DAT_180cfc858,local_138);
            }
            else {
              FUN_1802887a0(DAT_180cfc858,local_138);
              DAT_180cfc858 = DAT_180cfc858 + 0x98;
            }
            FUN_18000f890(local_98);
            FUN_18000f890(&local_c0);
            FUN_18000f890(&local_e0);
            FUN_18000f890(&local_110);
            FUN_18000f890(&local_130);
          }
        }
        uVar2 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar2;
      } while ((int)uVar2 < iVar3);
    }
  }
  return;
}



/* ===== 180278a80 FUN_180278a80 ===== */

void FUN_180278a80(longlong param_1)

{
  FUN_18000f890(param_1 + 0x78);
  FUN_18000f890(param_1 + 0x58);
  FUN_18000f890(param_1 + 0x28);
  FUN_18000f890(param_1 + 8);
  return;
}



/* ===== 180278ac0 FUN_180278ac0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180278ac0(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *****pppppuVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *****pppppuVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  char *pcVar22;
  ulonglong uVar23;
  char *pcVar24;
  undefined4 extraout_XMM0_Da;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [24];
  int local_1b8;
  undefined1 local_1b4;
  char *local_1a8;
  undefined8 local_1a0;
  undefined1 *local_198;
  undefined8 local_190;
  char *local_188;
  char *local_180;
  undefined1 local_168 [8];
  longlong local_160 [2];
  undefined1 local_150 [40];
  undefined1 local_128 [8];
  longlong local_120 [2];
  undefined1 local_110 [40];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 *****local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 *****local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined8 *****local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  local_1b8 = 0;
  FUN_180023e90(local_168);
  puVar5 = DAT_180cfc960;
  puVar17 = auStack_1d8;
  puVar19 = auStack_1d8;
  puVar18 = auStack_1d8;
  for (puVar20 = DAT_180cfc958; puVar20 != puVar5; puVar20 = puVar20 + 0x24) {
    uVar1 = *puVar20;
    plVar8 = (longlong *)FUN_180026e60(local_168,&local_198,puVar20 + 2);
    *(undefined4 *)(*plVar8 + 0x30) = uVar1;
  }
  FUN_180023e90(local_128);
  puVar5 = DAT_180cfc858;
  for (puVar20 = DAT_180cfc850; puVar20 != puVar5; puVar20 = puVar20 + 0x26) {
    uVar1 = *puVar20;
    plVar8 = (longlong *)FUN_180026e60(local_128,&local_198,puVar20 + 2);
    *(undefined4 *)(*plVar8 + 0x30) = uVar1;
  }
  local_1a8 = "panorama/images/econ/default_generated/";
  local_1a0 = 0x27;
  local_198 = &DAT_18073ece0;
  local_190 = 6;
  FUN_180390930(&DAT_180ca1330,&local_188,&local_198,&local_1a8);
  local_1a8 = local_180;
  pcVar22 = local_188;
  pcVar24 = local_180;
  if (local_188 != local_180) {
    do {
      uVar23 = *(ulonglong *)(pcVar22 + 0x10);
      if (0x38 < uVar23) {
        uVar13 = *(ulonglong *)(pcVar22 + 0x18);
        pcVar9 = pcVar22;
        if (0xf < uVar13) {
          pcVar9 = *(char **)pcVar22;
        }
        iVar7 = memcmp(pcVar9,"panorama/images/econ/default_generated/",0x27);
        if (iVar7 == 0) {
          if (uVar23 < uVar23 - 0x11) {
                    /* WARNING: Subroutine does not return */
            FUN_18002a1a0();
          }
          pcVar9 = pcVar22;
          if (0xf < uVar13) {
            pcVar9 = *(char **)pcVar22;
          }
          iVar7 = memcmp(pcVar9 + (uVar23 - 0x11),"_light_png.vtex_c",0x11);
          if (iVar7 == 0) {
            local_c8 = (undefined8 *****)0x0;
            uStack_c0 = 0;
            local_b8 = 0;
            local_b0 = 0;
            lVar14 = 0x38;
            if (uVar23 - 0x27 < uVar23 - 0x38) {
              lVar14 = 0x27;
            }
            if (uVar13 < 0x10) {
              pcVar9 = pcVar22;
            }
            else {
              pcVar9 = *(char **)pcVar22;
            }
            FUN_1800133a0(&local_c8,pcVar9 + 0x27,uVar23 - lVar14);
            local_1b8 = 0;
            uStack_80 = 0;
            local_78 = 0;
            uVar23 = 0xf;
            uStack_70 = 0xf;
            local_88 = (undefined8 *****)0x0;
            pppppuVar12 = &local_c8;
            if (0xf < local_b0) {
              pppppuVar12 = local_c8;
            }
            if (local_b8 < 2) {
              uVar13 = 0xffffffffffffffff;
            }
            else {
              lVar14 = local_b8 + (longlong)pppppuVar12;
              lVar11 = thunk_FUN_1804e6c50((longlong)pppppuVar12 + 1,lVar14,0x5f);
              uVar13 = 0xffffffffffffffff;
              if (lVar11 != lVar14) {
                uVar13 = lVar11 - (longlong)pppppuVar12;
              }
            }
            uVar16 = 0;
            if (uVar13 != 0xffffffffffffffff) {
              do {
                uVar10 = 0;
                local_a8 = (undefined8 *****)0x0;
                uStack_a0 = 0;
                local_98 = 0;
                uStack_90 = 0;
                uVar16 = uVar13;
                if (local_b8 < uVar13) {
                  uVar16 = local_b8;
                }
                pppppuVar12 = &local_c8;
                if (0xf < local_b0) {
                  pppppuVar12 = local_c8;
                }
                FUN_1800133a0(&local_a8,pppppuVar12,uVar16);
                uVar16 = uStack_90;
                pppppuVar12 = local_a8;
                pppppuVar15 = &local_a8;
                if (0xf < uStack_90) {
                  pppppuVar15 = local_a8;
                }
                uVar21 = 0xcbf29ce484222325;
                if (local_98 != 0) {
                  do {
                    uVar21 = (uVar21 ^ *(byte *)((longlong)pppppuVar15 + uVar10)) * 0x100000001b3;
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < local_98);
                }
                lVar11 = FUN_1800268a0(local_168,&local_198,&local_a8,uVar21);
                lVar14 = local_160[0];
                if (*(longlong *)(lVar11 + 8) != 0) {
                  lVar14 = *(longlong *)(lVar11 + 8);
                }
                if (0xf < uVar16) {
                  uVar10 = uVar16 + 1;
                  pppppuVar15 = pppppuVar12;
                  if (uVar10 < 0x1000) {
LAB_180278e1c:
                    thunk_FUN_1803d64e0(pppppuVar15,uVar10);
                    goto LAB_180278e29;
                  }
                  pppppuVar15 = (undefined8 *****)pppppuVar12[-1];
                  if ((ulonglong)((longlong)pppppuVar12 + (-8 - (longlong)pppppuVar15)) < 0x20) {
                    uVar10 = uVar16 + 0x28;
                    goto LAB_180278e1c;
                  }
LAB_180279176:
                  pcVar4 = (code *)swi(0x29);
                  (*pcVar4)(5);
                  puVar17 = auStack_1d0;
                  goto LAB_18027917d;
                }
LAB_180278e29:
                if (lVar14 != local_160[0]) {
                  local_1b8 = *(int *)(lVar14 + 0x30);
                  uVar16 = uVar13 + 1;
                  local_a8 = (undefined8 *****)0x0;
                  uStack_a0 = 0;
                  local_98 = 0;
                  uStack_90 = 0;
                  if (local_b8 < uVar16) goto LAB_18027918b;
                  lVar14 = -1;
                  if (local_b8 - uVar16 != -1) {
                    lVar14 = local_b8 - uVar16;
                  }
                  pppppuVar12 = &local_c8;
                  if (0xf < local_b0) {
                    pppppuVar12 = local_c8;
                  }
                  FUN_1800133a0(&local_a8,(longlong)pppppuVar12 + uVar16,lVar14);
                  if (0xf < uVar23) {
                    uVar16 = uVar23 + 1;
                    pppppuVar12 = local_88;
                    if (0xfff < uVar16) {
                      pppppuVar12 = (undefined8 *****)local_88[-1];
                      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppuVar12)))
                      goto LAB_180279176;
                      uVar16 = uVar23 + 0x28;
                    }
                    thunk_FUN_1803d64e0(pppppuVar12,uVar16);
                  }
                  uVar23 = uStack_90;
                  local_88 = local_a8;
                  uStack_80 = uStack_a0;
                  local_78 = local_98;
                  uStack_70 = uStack_90;
                  local_98 = 0;
                  uStack_90 = 0xf;
                  local_a8 = (undefined8 *****)((ulonglong)local_a8 & 0xffffffffffffff00);
                  FUN_18000f890(&local_a8);
                }
                pppppuVar12 = &local_c8;
                if (0xf < local_b0) {
                  pppppuVar12 = local_c8;
                }
                if (uVar13 + 1 < local_b8) {
                  lVar14 = local_b8 + (longlong)pppppuVar12;
                  lVar11 = thunk_FUN_1804e6c50((longlong)pppppuVar12 + uVar13 + 1,lVar14,0x5f);
                  uVar13 = 0xffffffffffffffff;
                  if (lVar11 != lVar14) {
                    uVar13 = lVar11 - (longlong)pppppuVar12;
                  }
                }
                else {
                  uVar13 = 0xffffffffffffffff;
                }
              } while (uVar13 != 0xffffffffffffffff);
              uVar16 = local_78;
              pcVar24 = local_1a8;
            }
            pppppuVar12 = local_88;
            if ((local_1b8 == 0) || (uVar16 == 0)) {
              FUN_18000f890(&local_88);
              FUN_18000f890(&local_c8);
            }
            else {
              pppppuVar15 = &local_88;
              if (0xf < uVar23) {
                pppppuVar15 = local_88;
              }
              uVar13 = 0;
              uVar10 = 0xcbf29ce484222325;
              if (uVar16 != 0) {
                do {
                  uVar10 = (uVar10 ^ *(byte *)(uVar13 + (longlong)pppppuVar15)) * 0x100000001b3;
                  uVar13 = uVar13 + 1;
                } while (uVar13 < uVar16);
                pcVar24 = local_1a8;
              }
              lVar14 = FUN_1800268a0(local_128,local_e8,&local_88,uVar10);
              lVar14 = *(longlong *)(lVar14 + 8);
              if ((lVar14 != 0) && (lVar14 != local_120[0])) {
                plVar8 = (longlong *)FUN_1802857b0(extraout_XMM0_Da,local_d8,&local_1b8);
                lVar11 = *plVar8;
                if (*(undefined4 **)(lVar11 + 0x20) == *(undefined4 **)(lVar11 + 0x28)) {
                  FUN_18006a410(lVar11 + 0x18);
                }
                else {
                  **(undefined4 **)(lVar11 + 0x20) = *(undefined4 *)(lVar14 + 0x30);
                  *(longlong *)(lVar11 + 0x20) = *(longlong *)(lVar11 + 0x20) + 4;
                }
              }
              if (0xf < uVar23) {
                uVar13 = uVar23 + 1;
                pppppuVar15 = pppppuVar12;
                if (0xfff < uVar13) {
                  pppppuVar15 = (undefined8 *****)pppppuVar12[-1];
                  if (0x1f < (ulonglong)((longlong)pppppuVar12 + (-8 - (longlong)pppppuVar15))) {
LAB_18027917d:
                    pcVar4 = (code *)swi(0x29);
                    (*pcVar4)(5);
                    puVar18 = puVar17 + 8;
                    goto LAB_180279184;
                  }
                  uVar13 = uVar23 + 0x28;
                }
                thunk_FUN_1803d64e0(pppppuVar15,uVar13);
              }
              if (0xf < local_b0) {
                uVar23 = local_b0 + 1;
                pppppuVar12 = local_c8;
                if (0xfff < uVar23) {
                  pppppuVar12 = (undefined8 *****)local_c8[-1];
                  if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)pppppuVar12))) {
LAB_180279184:
                    pcVar4 = (code *)swi(0x29);
                    (*pcVar4)(5);
                    puVar19 = puVar18 + 8;
LAB_18027918b:
                    /* WARNING: Subroutine does not return */
                    *(undefined8 *)(puVar19 + -8) = 0x180279190;
                    FUN_18002a1a0();
                  }
                  uVar23 = local_b0 + 0x28;
                }
                thunk_FUN_1803d64e0(pppppuVar12,uVar23);
              }
            }
          }
        }
      }
      pcVar22 = pcVar22 + 0x20;
    } while (pcVar22 != pcVar24);
  }
  FUN_1800288b0(&local_188);
  puVar6 = DAT_180cfc8d8;
  for (puVar2 = (undefined8 *)*DAT_180cfc8d8; puVar2 != puVar6; puVar2 = (undefined8 *)*puVar2) {
    FUN_1802835f0(puVar2[3],puVar2[4],(longlong)(puVar2[4] - puVar2[3]) >> 2,local_1b4);
    lVar14 = puVar2[4];
    lVar11 = FUN_1804ea320(puVar2[3],lVar14);
    if (lVar11 != lVar14) {
      lVar3 = puVar2[4];
      FUN_180540530(lVar11,lVar14,lVar3 - lVar14);
      puVar2[4] = lVar11 + (lVar3 - lVar14);
    }
  }
  FUN_1800132b0(local_110);
  FUN_180023e20(local_120);
  FUN_1800132b0(local_150);
  FUN_180023e20(local_160);
  return;
}



/* ===== 1802791a0 FUN_1802791a0 ===== */

byte FUN_1802791a0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  plVar1 = (longlong *)*param_1;
  if (lVar3 == 6) {
    iVar2 = (int)*plVar1 + -0x6d6d6f63;
    if (iVar2 == 0) {
      iVar2 = *(ushort *)((longlong)plVar1 + 4) - 0x6e6f;
    }
    if (iVar2 == 0) {
      return 1;
    }
  }
  else {
    if (lVar3 == 8) {
      if (*plVar1 == 0x6e6f6d6d6f636e75) {
        return 2;
      }
      if (*plVar1 == 0x6c6163696874796d) {
        return 4;
      }
      goto LAB_180279273;
    }
    if (lVar3 == 4) {
      if ((int)*plVar1 == 0x65726172) {
        return 3;
      }
      goto LAB_180279273;
    }
  }
  if (lVar3 == 9) {
    lVar3 = *plVar1 + -0x7261646e6567656c;
    if (lVar3 == 0) {
      lVar3 = (ulonglong)*(byte *)(plVar1 + 1) - 0x79;
    }
    if (lVar3 == 0) {
      return 5;
    }
    return 0;
  }
  if (lVar3 == 7) {
    iVar2 = (int)*plVar1 + -0x69636e61;
    if ((iVar2 == 0) && (iVar2 = *(ushort *)((longlong)plVar1 + 4) - 0x6e65, iVar2 == 0)) {
      iVar2 = *(byte *)((longlong)plVar1 + 6) - 0x74;
    }
    return -(iVar2 == 0) & 6;
  }
LAB_180279273:
  if (lVar3 == 8) {
    return -(*plVar1 == 0x6c6174726f6d6d69) & 7;
  }
  return 0;
}



/* ===== 1802792a0 FUN_1802792a0 ===== */

longlong * FUN_1802792a0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = param_1[2];
  uVar2 = param_1[1];
  if (uVar2 <= uVar4) {
LAB_180279316:
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  do {
    lVar3 = *param_1;
    cVar1 = *(char *)(lVar3 + uVar4);
    if ((cVar1 + 0x85U & 0xfd) == 0) {
      *param_2 = lVar3 + uVar4;
      param_1[2] = uVar4 + 1;
      param_2[1] = (ulonglong)(uVar2 != uVar4);
      return param_2;
    }
    if (((cVar1 == '/') && (uVar4 + 1 < uVar2)) && (*(char *)(lVar3 + uVar4 + 1) == '/')) {
      if (uVar2 <= uVar4) goto LAB_180279316;
      while (*(char *)(uVar4 + lVar3) != '\n') {
        uVar4 = uVar4 + 1;
        param_1[2] = uVar4;
        if (uVar2 <= uVar4) goto LAB_180279316;
      }
    }
    else {
      uVar4 = uVar4 + 1;
      param_1[2] = uVar4;
      if (cVar1 == '\"') {
        uVar5 = uVar4;
        if (uVar2 <= uVar4) goto LAB_180279371;
        break;
      }
    }
    if (uVar2 <= uVar4) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 + 1;
    param_1[2] = uVar5;
    if (uVar2 <= uVar5) break;
    if (*(char *)(uVar5 + lVar3) == '\"') break;
  }
LAB_180279371:
  if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_180225aa0();
  }
  uVar6 = uVar5 - uVar4;
  if (uVar2 - uVar4 < uVar5 - uVar4) {
    uVar6 = uVar2 - uVar4;
  }
  if (uVar5 < uVar2) {
    param_1[2] = uVar5 + 1;
  }
  *param_2 = lVar3 + uVar4;
  param_2[1] = uVar6;
  return param_2;
}



/* ===== 1802793e0 FUN_1802793e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802793e0(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  void *_Buf2;
  size_t sVar1;
  void *_Buf2_00;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  size_t sVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  void *pvVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  longlong *_Buf1;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong *_Buf2_01;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  longlong lVar27;
  longlong lVar28;
  undefined4 uVar29;
  undefined8 uStack_310;
  undefined1 auStack_308 [8];
  undefined1 auStack_300 [24];
  undefined1 local_2e8 [32];
  longlong local_2c8 [4];
  undefined4 local_2a8;
  longlong local_2a0 [3];
  longlong *local_288;
  longlong *plStack_280;
  ulonglong local_278;
  undefined8 local_270;
  longlong *local_268;
  longlong local_260;
  longlong *local_258;
  void *local_250;
  longlong local_248;
  undefined1 local_238 [8];
  longlong *local_230 [2];
  undefined1 local_220 [40];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined8 ****local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  ulonglong local_170;
  undefined8 ****local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  ulonglong local_150;
  int local_148 [2];
  undefined8 local_140;
  undefined8 uStack_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  longlong lStack_f8;
  longlong local_f0;
  ulonglong local_e8;
  int local_e0;
  undefined8 ****local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  int local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_308;
  local_2a8 = 0;
  local_2a0[0] = 0;
  local_2a0[1] = 0;
  local_258 = param_4;
  lVar8 = FUN_1804ecaa0(0xb0);
  *(longlong *)lVar8 = lVar8;
  *(longlong *)(lVar8 + 8) = lVar8;
  local_2a0[2] = 0;
  local_288 = (longlong *)0x0;
  plStack_280 = (longlong *)0x0;
  local_278 = 7;
  local_270 = 8;
  local_2a8 = 0x3f800000;
  local_2a0[0] = lVar8;
  plVar9 = (longlong *)FUN_1804ecaa0(0x80);
  puVar24 = auStack_308;
  puVar25 = auStack_308;
  puVar26 = auStack_308;
  if ((longlong)plStack_280 - local_2a0[2] == 0) goto LAB_1802794c5;
  lVar10 = local_2a0[2];
  if ((ulonglong)(((longlong)plStack_280 - local_2a0[2] >> 3) * 8) < 0x1000) {
LAB_1802794bd:
    puVar25 = puVar24;
  }
  else {
    lVar10 = *(longlong *)(local_2a0[2] + -8);
    if (0x1f < (local_2a0[2] - lVar10) - 8U) {
      pcVar3 = (code *)swi(0x29);
      lVar10 = (*pcVar3)(5);
      puVar24 = auStack_300;
      goto LAB_1802794bd;
    }
  }
  *(undefined8 *)(puVar25 + -8) = 0x1802794c5;
  thunk_FUN_1803d64e0(lVar10);
  puVar26 = puVar25;
LAB_1802794c5:
  *(longlong **)(puVar26 + 0x78) = plVar9;
  local_288 = plVar9 + 0x10;
  for (; plVar9 != local_288; plVar9 = plVar9 + 1) {
    *plVar9 = lVar8;
  }
  *(undefined8 *)(puVar26 + -8) = 0x1802794f5;
  plStack_280 = local_288;
  FUN_180276680(local_238);
  uVar29 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  *(undefined4 *)(puVar26 + 0x28) = *param_1;
  *(undefined4 *)(puVar26 + 0x2c) = uVar29;
  *(undefined4 *)(puVar26 + 0x30) = uVar4;
  *(undefined4 *)(puVar26 + 0x34) = uVar5;
  *(undefined8 *)(puVar26 + 0x38) = 0;
  *(undefined8 *)(puVar26 + -8) = 0x180279517;
  FUN_1802792a0(puVar26 + 0x28,puVar26 + 0x50);
  sVar11 = *(size_t *)(puVar26 + 0x58);
  if (sVar11 != 0) {
    _Buf2 = (void *)*param_2;
    sVar1 = param_2[1];
    pvVar16 = *(void **)(puVar26 + 0x50);
    do {
      if (sVar11 == sVar1) {
        if (sVar11 != 0) {
          *(undefined8 *)(puVar26 + -8) = 0x18027954a;
          iVar6 = memcmp(pvVar16,_Buf2,sVar11);
          if (iVar6 != 0) goto LAB_18027a166;
        }
        *(undefined8 *)(puVar26 + -8) = 0x180279560;
        puVar12 = (undefined8 *)FUN_1802792a0(puVar26 + 0x28,local_1f8);
        if (puVar12[1] == 1) {
          pvVar16 = (void *)*puVar12;
          *(undefined8 *)(puVar26 + -8) = 0x18027957d;
          iVar6 = memcmp(pvVar16,&DAT_1806dfff8,1);
          if (iVar6 == 0) {
            *(undefined8 *)(puVar26 + -8) = 0x180279593;
            FUN_1802792a0(puVar26 + 0x28,&local_268);
            if (local_260 != 0) {
              do {
                lVar8 = local_260;
                plVar9 = local_268;
                if (local_260 == 1) {
                  *(undefined8 *)(puVar26 + -8) = 0x1802795bc;
                  iVar6 = memcmp(local_268,&DAT_1806e0010,1);
                  if (iVar6 == 0) break;
                }
                *(undefined8 *)(puVar26 + -8) = 0x1802795d2;
                puVar12 = (undefined8 *)FUN_1802792a0(puVar26 + 0x28,local_1e8);
                if (puVar12[1] == 1) {
                  pvVar16 = (void *)*puVar12;
                  *(undefined8 *)(puVar26 + -8) = 0x1802795ef;
                  iVar6 = memcmp(pvVar16,&DAT_1806dfff8,1);
                  if (iVar6 == 0) {
                    uStack_138 = 0;
                    local_130 = 0;
                    local_128 = 0xf;
                    local_140 = 0;
                    uStack_118 = 0;
                    local_110 = 0;
                    local_108 = 0xf;
                    local_120 = 0;
                    lStack_f8 = 0;
                    local_f0 = 0;
                    local_e8 = 0xf;
                    local_100 = 0;
                    uStack_d0 = 0;
                    local_c8 = 0;
                    local_c0 = 0xf;
                    local_d8 = (undefined8 ****)0x0;
                    local_188 = (undefined8 ****)0x0;
                    uStack_180 = 0;
                    local_178 = 0;
                    local_170 = 0;
                    *(undefined8 *)(puVar26 + -8) = 0x1802796c7;
                    local_148[0] = iVar6;
                    local_e0 = iVar6;
                    local_b8 = iVar6;
                    FUN_1800133a0(&local_188,plVar9,lVar8);
                    ppppuVar17 = &local_188;
                    if (0xf < local_170) {
                      ppppuVar17 = local_188;
                    }
                    *(undefined8 *)(puVar26 + -8) = 0x1802796e3;
                    local_148[0] = FUN_1805145e4(ppppuVar17);
                    if (0xf < local_170) {
                      uVar19 = local_170 + 1;
                      ppppuVar17 = local_188;
                      if (0xfff < uVar19) {
                        ppppuVar17 = (undefined8 ****)local_188[-1];
                        if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)ppppuVar17))) {
LAB_18027a234:
                          pcVar3 = (code *)swi(0x29);
                          (*pcVar3)(5);
                          puVar26 = puVar26 + 8;
                          goto LAB_18027a23b;
                        }
                        uVar19 = local_170 + 0x28;
                      }
                      *(undefined8 *)(puVar26 + -8) = 0x18027972a;
                      thunk_FUN_1803d64e0(ppppuVar17,uVar19);
                    }
                    *(undefined8 *)(puVar26 + -8) = 0x180279739;
                    FUN_1802792a0(puVar26 + 0x28,puVar26 + 0x40);
                    sVar11 = *(size_t *)(puVar26 + 0x48);
                    if (sVar11 != 0) {
                      plVar9 = *(longlong **)(puVar26 + 0x40);
                      do {
                        if (sVar11 == 1) {
                          *(undefined8 *)(puVar26 + -8) = 0x180279768;
                          iVar6 = memcmp(plVar9,&DAT_1806e0010,1);
                          if (iVar6 == 0) break;
                        }
                        *(undefined8 *)(puVar26 + -8) = 0x18027977f;
                        FUN_1802792a0(puVar26 + 0x28,puVar26 + 0x50);
                        pvVar16 = *(void **)(puVar26 + 0x50);
                        uVar19 = *(ulonglong *)(puVar26 + 0x58);
                        if (uVar19 == 1) {
                          *(undefined8 *)(puVar26 + -8) = 0x1802797a5;
                          iVar6 = memcmp(pvVar16,&DAT_1806dfff8,1);
                          if (iVar6 != 0) goto LAB_180279810;
                          iVar6 = 1;
                          do {
                            *(undefined8 *)(puVar26 + -8) = 0x1802797be;
                            FUN_1802792a0(puVar26 + 0x28,&local_250);
                            pvVar16 = local_250;
                            if (local_248 == 0) break;
                            if (local_248 == 1) {
                              *(undefined8 *)(puVar26 + -8) = 0x1802797e7;
                              iVar7 = memcmp(local_250,&DAT_1806dfff8,1);
                              if (iVar7 == 0) {
                                iVar6 = iVar6 + 1;
                              }
                              else {
                                *(undefined8 *)(puVar26 + -8) = 0x180279801;
                                iVar7 = memcmp(pvVar16,&DAT_1806e0010,1);
                                if (iVar7 == 0) {
                                  iVar6 = iVar6 + -1;
                                }
                              }
                            }
                          } while (0 < iVar6);
                        }
                        else {
LAB_180279810:
                          if (sVar11 == 4) {
                            *(undefined8 *)(puVar26 + -8) = 0x180279828;
                            iVar6 = memcmp(plVar9,&DAT_18058b644,4);
                            if (iVar6 == 0) {
                              *(undefined8 *)(puVar26 + -8) = 0x18027983e;
                              FUN_180029840(&local_140,pvVar16,uVar19);
                              goto LAB_18027a055;
                            }
                          }
                          if (sVar11 == param_3[1]) {
                            if (sVar11 != 0) {
                              _Buf2_00 = (void *)*param_3;
                              *(undefined8 *)(puVar26 + -8) = 0x18027985c;
                              iVar6 = memcmp(plVar9,_Buf2_00,sVar11);
                              if (iVar6 != 0) goto LAB_180279877;
                            }
                            *(undefined8 *)(puVar26 + -8) = 0x180279872;
                            FUN_180029840(&local_120,pvVar16,uVar19);
                          }
                          else {
LAB_180279877:
                            if (sVar11 == 4) {
                              *(undefined8 *)(puVar26 + -8) = 0x18027988f;
                              iVar6 = memcmp(plVar9,&DAT_18073ca80,4);
                              if (iVar6 == 0) {
                                *(undefined8 *)(puVar26 + -8) = 0x1802798a7;
                                plVar9 = (longlong *)FUN_180276a50(local_238,local_1d8,local_148);
                                lVar8 = *plVar9;
                                *(undefined8 *)(puVar26 + -8) = 0x1802798b9;
                                FUN_180029840(lVar8 + 0x18,pvVar16,uVar19);
                                goto LAB_18027a055;
                              }
                            }
                            if (sVar11 == 0xb) {
                              *(undefined8 *)(puVar26 + -8) = 0x1802798d6;
                              iVar6 = memcmp(plVar9,"item_rarity",0xb);
                              if (iVar6 == 0) {
                                local_188 = *(undefined8 *****)(puVar26 + 0x50);
                                uStack_180 = *(undefined8 *)(puVar26 + 0x58);
                                *(undefined8 *)(puVar26 + -8) = 0x1802798f3;
                                local_e0 = FUN_1802791a0(&local_188);
                                goto LAB_18027a055;
                              }
                            }
                            if (sVar11 == 0x13) {
                              *(undefined8 *)(puVar26 + -8) = 0x180279916;
                              iVar6 = memcmp(plVar9,"tournament_event_id",0x13);
                              if (iVar6 == 0) {
                                local_188 = (undefined8 ****)0x0;
                                uStack_180 = 0;
                                local_178 = 0;
                                local_170 = 0;
                                *(undefined8 *)(puVar26 + -8) = 0x180279946;
                                FUN_1800133a0(&local_188,pvVar16,uVar19);
                                ppppuVar17 = &local_188;
                                if (0xf < local_170) {
                                  ppppuVar17 = local_188;
                                }
                                *(undefined8 *)(puVar26 + -8) = 0x180279962;
                                local_b8 = FUN_1805145e4(ppppuVar17);
                                *(undefined8 *)(puVar26 + -8) = 0x180279974;
                                FUN_18000f890(&local_188);
                                goto LAB_18027a055;
                              }
                            }
                            if (sVar11 == 0x10) {
                              *(undefined8 *)(puVar26 + -8) = 0x180279995;
                              iVar6 = memcmp(plVar9,"sticker_material",0x10);
                              if (iVar6 != 0) goto LAB_180279c53;
                              local_a8 = 0;
                              uStack_a0 = 0;
                              plVar9 = (longlong *)0x0;
                              local_98 = 0;
                              local_90 = 0;
                              *(undefined8 *)(puVar26 + -8) = 0x1802799d0;
                              FUN_1800133a0(&local_a8,"_png.vtex_c",0xb);
                              local_188 = (undefined8 ****)0x0;
                              uStack_180 = 0;
                              local_178 = 0;
                              local_170 = 0;
                              *(undefined8 *)(puVar26 + -8) = 0x1802799fb;
                              FUN_1800133a0(&local_188,pvVar16,uVar19);
                              local_168 = (undefined8 ****)0x0;
                              uStack_160 = 0;
                              local_158 = 0;
                              local_150 = 0;
                              *(undefined8 *)(puVar26 + -8) = 0x180279a2d;
                              FUN_1800133a0(&local_168,"panorama/images/econ/stickers/",0x1e);
                              *(undefined8 *)(puVar26 + -8) = 0x180279a48;
                              uVar15 = FUN_180066820(local_88,&local_168,&local_188);
                              *(undefined8 *)(puVar26 + -8) = 0x180279a5f;
                              plVar13 = (longlong *)FUN_180066820(local_68,uVar15,&local_a8);
                              if (&local_100 == plVar13) {
LAB_180279b06:
                                *(undefined8 *)(puVar26 + -8) = 0x180279b12;
                                FUN_18000f890(local_68);
                                *(undefined8 *)(puVar26 + -8) = 0x180279b1f;
                                FUN_18000f890(local_88);
                                *(undefined8 *)(puVar26 + -8) = 0x180279b2c;
                                FUN_18000f890(&local_168);
                                *(undefined8 *)(puVar26 + -8) = 0x180279b39;
                                FUN_18000f890(&local_188);
                                *(undefined8 *)(puVar26 + -8) = 0x180279b46;
                                FUN_18000f890(&local_a8);
                                if (uVar19 == 0) {
                                  uVar20 = 0xffffffffffffffff;
                                }
                                else {
                                  *(undefined8 *)(puVar26 + -8) = 0x180279b66;
                                  lVar8 = thunk_FUN_1804e6c50(pvVar16,(longlong)pvVar16 + uVar19,
                                                              0x2f);
                                  uVar20 = 0xffffffffffffffff;
                                  if (lVar8 != (longlong)pvVar16 + uVar19) {
                                    uVar20 = lVar8 - (longlong)pvVar16;
                                  }
                                }
                                if (uVar20 == 0xffffffffffffffff) {
                                  uVar20 = 0;
                                }
                                local_188 = (undefined8 ****)0x0;
                                uStack_180 = 0;
                                local_178 = 0;
                                local_170 = 0;
                                if (uVar19 < uVar20) {
                                  uVar20 = uVar19;
                                }
                                *(undefined8 *)(puVar26 + -8) = 0x180279bb0;
                                FUN_1800133a0(&local_188,pvVar16,uVar20);
                                if (0xf < local_c0) {
                                  uVar19 = local_c0 + 1;
                                  ppppuVar17 = local_d8;
                                  if (0xfff < uVar19) {
                                    ppppuVar17 = (undefined8 ****)local_d8[-1];
                                    if (0x1f < (ulonglong)
                                               ((longlong)local_d8 + (-8 - (longlong)ppppuVar17)))
                                    goto LAB_18027a234;
                                    uVar19 = local_c0 + 0x28;
                                  }
                                  *(undefined8 *)(puVar26 + -8) = 0x180279bf1;
                                  thunk_FUN_1803d64e0(ppppuVar17,uVar19);
                                }
                                local_d8 = local_188;
                                uStack_d0 = uStack_180;
                                local_c8 = local_178;
                                local_c0 = local_170;
                                local_178 = 0;
                                local_170 = 0xf;
                                local_188 = (undefined8 ****)
                                            ((ulonglong)local_188 & 0xffffffffffffff00);
                                *(undefined8 *)(puVar26 + -8) = 0x180279c4e;
                                FUN_18000f890(&local_188);
                                goto LAB_18027a055;
                              }
                              if (local_e8 < 0x10) {
LAB_180279ab3:
                                local_100 = *plVar13;
                                lStack_f8 = plVar13[1];
                                local_f0 = plVar13[2];
                                local_e8 = plVar13[3];
                                plVar13[2] = 0;
                                plVar13[3] = 0xf;
                                *(undefined1 *)plVar13 = 0;
                                goto LAB_180279b06;
                              }
                              uVar20 = local_e8 + 1;
                              lVar8 = local_100;
                              if (uVar20 < 0x1000) {
LAB_180279aae:
                                *(undefined8 *)(puVar26 + -8) = 0x180279ab3;
                                thunk_FUN_1803d64e0(lVar8,uVar20);
                                goto LAB_180279ab3;
                              }
                              lVar8 = *(longlong *)(local_100 + -8);
                              if ((local_100 - lVar8) - 8U < 0x20) {
                                uVar20 = local_e8 + 0x28;
                                goto LAB_180279aae;
                              }
                              pcVar3 = (code *)swi(0x29);
                              (*pcVar3)(5);
                              puVar26 = puVar26 + 8;
LAB_18027a21f:
                              pcVar3 = (code *)swi(0x29);
                              (*pcVar3)(5);
                              puVar26 = puVar26 + 8;
LAB_18027a226:
                              pcVar3 = (code *)swi(0x29);
                              (*pcVar3)(5);
                              puVar26 = puVar26 + 8;
LAB_18027a22d:
                              pcVar3 = (code *)swi(0x29);
                              (*pcVar3)(5);
                              puVar26 = puVar26 + 8;
                              goto LAB_18027a234;
                            }
LAB_180279c53:
                            if (sVar11 == 0xe) {
                              *(undefined8 *)(puVar26 + -8) = 0x180279c6f;
                              iVar6 = memcmp(plVar9,"patch_material",0xe);
                              if (iVar6 != 0) goto LAB_180279e39;
                              local_188 = (undefined8 ****)0x0;
                              uStack_180 = 0;
                              local_178 = 0;
                              local_170 = 0;
                              *(undefined8 *)(puVar26 + -8) = 0x180279caa;
                              FUN_1800133a0(&local_188,"_png.vtex_c",0xb);
                              local_168 = (undefined8 ****)0x0;
                              uStack_160 = 0;
                              local_158 = 0;
                              local_150 = 0;
                              *(undefined8 *)(puVar26 + -8) = 0x180279cd5;
                              FUN_1800133a0(&local_168,pvVar16,uVar19);
                              local_a8 = 0;
                              uStack_a0 = 0;
                              local_98 = 0;
                              local_90 = 0;
                              *(undefined8 *)(puVar26 + -8) = 0x180279d07;
                              FUN_1800133a0(&local_a8,"panorama/images/econ/patches/",0x1d);
                              *(undefined8 *)(puVar26 + -8) = 0x180279d22;
                              uVar15 = FUN_180066820(local_68,&local_a8,&local_168);
                              *(undefined8 *)(puVar26 + -8) = 0x180279d39;
                              plVar13 = (longlong *)FUN_180066820(local_88,uVar15,&local_188);
                              if (&local_100 != plVar13) {
                                if (0xf < local_e8) {
                                  uVar19 = local_e8 + 1;
                                  lVar8 = local_100;
                                  if (0xfff < uVar19) {
                                    lVar8 = *(longlong *)(local_100 + -8);
                                    if (0x1f < (local_100 - lVar8) - 8U) goto LAB_18027a21f;
                                    uVar19 = local_e8 + 0x28;
                                  }
                                  *(undefined8 *)(puVar26 + -8) = 0x180279d8d;
                                  thunk_FUN_1803d64e0(lVar8,uVar19);
                                }
                                local_100 = *plVar13;
                                lStack_f8 = plVar13[1];
                                local_f0 = plVar13[2];
                                local_e8 = plVar13[3];
                                plVar13[2] = 0;
                                plVar13[3] = 0xf;
                                *(undefined1 *)plVar13 = 0;
                              }
                              *(undefined8 *)(puVar26 + -8) = 0x180279df4;
                              FUN_18000f890(local_88);
                              *(undefined8 *)(puVar26 + -8) = 0x180279e01;
                              FUN_18000f890(local_68);
                              *(undefined8 *)(puVar26 + -8) = 0x180279e0e;
                              FUN_18000f890(&local_a8);
                              *(undefined8 *)(puVar26 + -8) = 0x180279e1b;
                              FUN_18000f890(&local_168);
                              if (local_170 < 0x10) goto LAB_18027a055;
                              ppppuVar17 = local_188;
                              uVar19 = local_170;
LAB_18027a028:
                              uVar20 = uVar19 + 1;
                              ppppuVar18 = ppppuVar17;
                              if (0xfff < uVar20) {
                                ppppuVar18 = (undefined8 ****)ppppuVar17[-1];
                                if (0x1f < (ulonglong)
                                           ((longlong)ppppuVar17 + (-8 - (longlong)ppppuVar18)))
                                goto LAB_18027a234;
                                uVar20 = uVar19 + 0x28;
                              }
                              *(undefined8 *)(puVar26 + -8) = 0x18027a055;
                              thunk_FUN_1803d64e0(ppppuVar18,uVar20);
                            }
                            else {
LAB_180279e39:
                              if (sVar11 == 0xf) {
                                *(undefined8 *)(puVar26 + -8) = 0x180279e55;
                                iVar6 = memcmp(plVar9,"image_inventory",0xf);
                                if (iVar6 == 0) {
                                  local_168 = (undefined8 ****)0x0;
                                  uStack_160 = 0;
                                  local_158 = 0;
                                  local_150 = 0;
                                  *(undefined8 *)(puVar26 + -8) = 0x180279e90;
                                  FUN_1800133a0(&local_168,"_png.vtex_c",0xb);
                                  local_188 = (undefined8 ****)0x0;
                                  uStack_180 = 0;
                                  local_178 = 0;
                                  local_170 = 0;
                                  *(undefined8 *)(puVar26 + -8) = 0x180279ebb;
                                  FUN_1800133a0(&local_188,pvVar16,uVar19);
                                  *(undefined8 *)(puVar26 + -8) = 0x180279ed6;
                                  uVar15 = FUN_180066ab0(local_68,"panorama/images/",&local_188);
                                  *(undefined8 *)(puVar26 + -8) = 0x180279eed;
                                  plVar13 = (longlong *)FUN_180066820(local_88,uVar15,&local_168);
                                  if (&local_100 != plVar13) {
                                    if (0xf < local_e8) {
                                      uVar19 = local_e8 + 1;
                                      lVar8 = local_100;
                                      if (0xfff < uVar19) {
                                        lVar8 = *(longlong *)(local_100 + -8);
                                        if (0x1f < (local_100 - lVar8) - 8U) goto LAB_18027a226;
                                        uVar19 = local_e8 + 0x28;
                                      }
                                      *(undefined8 *)(puVar26 + -8) = 0x180279f41;
                                      thunk_FUN_1803d64e0(lVar8,uVar19);
                                    }
                                    local_100 = *plVar13;
                                    lStack_f8 = plVar13[1];
                                    local_f0 = plVar13[2];
                                    local_e8 = plVar13[3];
                                    plVar13[2] = 0;
                                    plVar13[3] = 0xf;
                                    *(undefined1 *)plVar13 = 0;
                                  }
                                  *(undefined8 *)(puVar26 + -8) = 0x180279fa8;
                                  FUN_18000f890(local_88);
                                  *(undefined8 *)(puVar26 + -8) = 0x180279fb5;
                                  FUN_18000f890(local_68);
                                  if (0xf < local_170) {
                                    uVar19 = local_170 + 1;
                                    ppppuVar17 = local_188;
                                    if (0xfff < uVar19) {
                                      ppppuVar17 = (undefined8 ****)local_188[-1];
                                      if (0x1f < (ulonglong)
                                                 ((longlong)local_188 + (-8 - (longlong)ppppuVar17))
                                         ) goto LAB_18027a22d;
                                      uVar19 = local_170 + 0x28;
                                    }
                                    *(undefined8 *)(puVar26 + -8) = 0x180279ff7;
                                    thunk_FUN_1803d64e0(ppppuVar17,uVar19);
                                  }
                                  local_178 = 0;
                                  local_170 = 0xf;
                                  local_188 = (undefined8 ****)
                                              ((ulonglong)local_188 & 0xffffffffffffff00);
                                  if (0xf < local_150) {
                                    ppppuVar17 = local_168;
                                    uVar19 = local_150;
                                    goto LAB_18027a028;
                                  }
                                }
                              }
                            }
                          }
                        }
LAB_18027a055:
                        *(undefined8 *)(puVar26 + -8) = 0x18027a063;
                        puVar12 = (undefined8 *)FUN_1802792a0(puVar26 + 0x28,local_1c8);
                        plVar9 = (longlong *)*puVar12;
                        *(longlong **)(puVar26 + 0x40) = plVar9;
                        sVar11 = puVar12[1];
                        *(size_t *)(puVar26 + 0x48) = sVar11;
                      } while (sVar11 != 0);
                    }
                    if ((0 < local_148[0]) && (local_130 != 0)) {
                      *(undefined8 *)(puVar26 + -8) = 0x18027a0a9;
                      plVar9 = (longlong *)FUN_180285230(puVar26 + 0x60,local_1b8,local_148);
                      lVar8 = *plVar9;
                      *(int *)(lVar8 + 0x18) = local_148[0];
                      *(undefined8 *)(puVar26 + -8) = 0x18027a0c5;
                      FUN_18002ba60(lVar8 + 0x20,&local_140);
                      *(undefined8 *)(puVar26 + -8) = 0x18027a0d5;
                      FUN_18002ba60(lVar8 + 0x40,&local_120);
                      *(undefined8 *)(puVar26 + -8) = 0x18027a0e5;
                      FUN_18002ba60(lVar8 + 0x60,&local_100);
                      *(int *)(lVar8 + 0x80) = local_e0;
                      *(undefined8 *)(puVar26 + -8) = 0x18027a104;
                      FUN_18002ba60(lVar8 + 0x88,&local_d8);
                      *(int *)(lVar8 + 0xa8) = local_b8;
                    }
                    *(undefined8 *)(puVar26 + -8) = 0x18027a11c;
                    FUN_18000f890(&local_d8);
                    *(undefined8 *)(puVar26 + -8) = 0x18027a128;
                    FUN_18000f890(&local_100);
                    *(undefined8 *)(puVar26 + -8) = 0x18027a134;
                    FUN_18000f890(&local_120);
                    *(undefined8 *)(puVar26 + -8) = 0x18027a140;
                    FUN_18000f890(&local_140);
                  }
                }
                *(undefined8 *)(puVar26 + -8) = 0x18027a14e;
                puVar12 = (undefined8 *)FUN_1802792a0(puVar26 + 0x28,local_1a8);
                local_268 = (longlong *)*puVar12;
                local_260 = puVar12[1];
              } while (local_260 != 0);
            }
          }
        }
      }
LAB_18027a166:
      *(undefined8 *)(puVar26 + -8) = 0x18027a174;
      puVar12 = (undefined8 *)FUN_1802792a0(puVar26 + 0x28,local_198);
      pvVar16 = (void *)*puVar12;
      sVar11 = puVar12[1];
    } while (sVar11 != 0);
  }
  *(longlong **)(puVar26 + 0x40) = local_230[0];
  plVar9 = (longlong *)*local_230[0];
  if (plVar9 != local_230[0]) {
    do {
      uVar19 = (((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 & local_278;
      plVar13 = *(longlong **)(*(longlong *)(puVar26 + 0x78) + 8 + uVar19 * 0x10);
      if (plVar13 == *(longlong **)(puVar26 + 0x68)) {
LAB_18027a23b:
        plVar13 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar13[2];
        while ((int)plVar9[2] != iVar6) {
          if (plVar13 == *(longlong **)(*(longlong *)(puVar26 + 0x78) + uVar19 * 0x10))
          goto LAB_18027a23b;
          plVar13 = (longlong *)plVar13[1];
          iVar6 = (int)plVar13[2];
        }
      }
      if ((((plVar13 != (longlong *)0x0) &&
           (plVar21 = *(longlong **)(puVar26 + 0x68), plVar13 != plVar21)) && (plVar13[0xe] == 0))
         && (plVar23 = (longlong *)*plVar21, plVar23 != plVar21)) {
        uVar19 = plVar9[6];
        sVar11 = plVar9[5];
        do {
          _Buf1 = plVar23 + 4;
          if (uVar19 < 0x10) {
            _Buf2_01 = plVar9 + 3;
          }
          else {
            _Buf2_01 = (longlong *)plVar9[3];
          }
          sVar1 = plVar23[6];
          if (0xf < (ulonglong)plVar23[7]) {
            _Buf1 = (longlong *)*_Buf1;
          }
          if (sVar1 == sVar11) {
            if (sVar1 != 0) {
              *(undefined8 *)(puVar26 + -8) = 0x18027a2a1;
              iVar6 = memcmp(_Buf1,_Buf2_01,sVar1);
              if (iVar6 != 0) goto LAB_18027a2a5;
            }
            if (plVar13 != plVar23) {
              plVar21 = plVar23 + 0xc;
              if (0xf < (ulonglong)plVar23[0xf]) {
                plVar21 = (longlong *)*plVar21;
              }
              lVar8 = plVar23[0xe];
              *(undefined8 *)(puVar26 + -8) = 0x18027a2cf;
              FUN_180029840(plVar13 + 0xc,plVar21,lVar8);
            }
            if ((int)plVar13[0x10] == 0) {
              *(int *)(plVar13 + 0x10) = (int)plVar23[0x10];
            }
            break;
          }
LAB_18027a2a5:
          plVar23 = (longlong *)*plVar23;
        } while (plVar23 != plVar21);
      }
      plVar9 = (longlong *)*plVar9;
    } while (plVar9 != (longlong *)*(longlong *)(puVar26 + 0x40));
  }
  plVar9 = local_258;
  lVar8 = *local_258;
  lVar10 = local_258[1];
  if (lVar8 != lVar10) {
    do {
      *(undefined8 *)(puVar26 + -8) = 0x18027a329;
      FUN_18000f890(lVar8 + 0x70);
      *(undefined8 *)(puVar26 + -8) = 0x18027a332;
      FUN_18000f890(lVar8 + 0x48);
      *(undefined8 *)(puVar26 + -8) = 0x18027a33b;
      FUN_18000f890(lVar8 + 0x28);
      *(undefined8 *)(puVar26 + -8) = 0x18027a344;
      FUN_18000f890(lVar8 + 8);
      lVar8 = lVar8 + 0x98;
    } while (lVar8 != lVar10);
    lVar8 = *plVar9;
    plVar9[1] = lVar8;
    lVar10 = lVar8;
  }
  uVar19 = *(ulonglong *)(puVar26 + 0x70);
  if ((ulonglong)((plVar9[2] - lVar8 >> 3) * -0x79435e50d79435e5) < uVar19) {
    if (0x1af286bca1af286 < uVar19) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar26 + -8) = &UNK_18027a4c6;
      FUN_1800118d0();
    }
    *(undefined8 *)(puVar26 + -8) = 0x18027a3a7;
    lVar14 = FUN_18000fb70(uVar19 * 0x98);
    lVar27 = plVar9[1];
    lVar22 = *plVar9;
    lVar28 = lVar14;
    if (lVar22 != lVar27) {
      do {
        *(undefined8 *)(puVar26 + -8) = 0x18027a3c5;
        FUN_180288890(lVar14);
        lVar14 = lVar14 + 0x98;
        lVar22 = lVar22 + 0x98;
      } while (lVar22 != lVar27);
    }
    *(undefined8 *)(puVar26 + -8) = 0x18027a3e9;
    FUN_1802885b0(plVar9,lVar28,(lVar10 - lVar8 >> 3) * -0x79435e50d79435e5,uVar19);
  }
  puVar12 = *(undefined8 **)(puVar26 + 0x68);
  for (puVar2 = (undefined8 *)*puVar12; puVar2 != puVar12; puVar2 = (undefined8 *)*puVar2) {
    *(undefined8 *)(puVar26 + -8) = 0x18027a414;
    uVar15 = FUN_1802777c0(local_88,puVar2 + 8,puVar2 + 4);
    *(undefined8 *)(puVar26 + -8) = 0x18027a420;
    FUN_18002ba60(puVar2 + 8,uVar15);
    *(undefined8 *)(puVar26 + -8) = 0x18027a42c;
    FUN_18000f890(local_88);
    *(undefined8 *)(puVar26 + -8) = 0x18027a438;
    FUN_180285ca0(plVar9,puVar2 + 3);
  }
  lVar8 = plVar9[1];
  lVar10 = *plVar9;
  *(undefined8 *)(puVar26 + -8) = 0x18027a460;
  FUN_180283910(lVar10,lVar8,(lVar8 - lVar10 >> 3) * -0x79435e50d79435e5,puVar26[0x20]);
  *(undefined8 *)(puVar26 + -8) = 0x18027a46a;
  FUN_1800132b0(local_220);
  *(undefined8 *)(puVar26 + -8) = 0x18027a473;
  FUN_180142340(local_230);
  *(undefined8 *)(puVar26 + -8) = 0x18027a47e;
  uVar29 = FUN_1800132b0(puVar26 + 0x78);
  *(undefined8 *)(puVar26 + -8) = 0x18027a488;
  FUN_180288100(uVar29,*(undefined8 *)(puVar26 + 0x68));
  *(undefined8 *)(puVar26 + -8) = 0x18027a497;
  thunk_FUN_1803d64e0(*(undefined8 *)(puVar26 + 0x68),0xb0);
  *(undefined8 *)(puVar26 + -8) = 0x18027a4a6;
  return;
}



/* ===== 18027a4d0 FUN_18027a4d0 ===== */

void FUN_18027a4d0(longlong param_1)

{
  FUN_1800132b0(param_1 + 0x18);
  FUN_180288100();
  thunk_FUN_1803d64e0(*(undefined8 *)(param_1 + 8),0xb0);
  return;
}



/* ===== 18027a500 FUN_18027a500 ===== */

void FUN_18027a500(longlong param_1)

{
  FUN_18000f890(param_1 + 0x70);
  FUN_18000f890(param_1 + 0x48);
  FUN_18000f890(param_1 + 0x28);
  FUN_18000f890(param_1 + 8);
  return;
}



/* ===== 18027a540 FUN_18027a540 ===== */

undefined4 * FUN_18027a540(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_18002ba60(param_1 + 2,param_2 + 2);
  FUN_18002ba60(param_1 + 10,param_2 + 10);
  FUN_18002ba60(param_1 + 0x12,param_2 + 0x12);
  param_1[0x1a] = param_2[0x1a];
  FUN_18002ba60(param_1 + 0x1c,param_2 + 0x1c);
  param_1[0x24] = param_2[0x24];
  return param_1;
}



/* ===== 18027a5b0 FUN_18027a5b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027a5b0(undefined4 *param_1)

{
  code *pcVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  undefined1 auStack_158 [32];
  int local_138 [2];
  void *local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  void *local_108;
  longlong local_100;
  void *local_f8;
  longlong local_f0;
  void *local_e8;
  longlong local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 ****local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_158;
  local_120 = *param_1;
  uStack_11c = param_1[1];
  uStack_118 = param_1[2];
  uStack_114 = param_1[3];
  local_110 = 0;
  FUN_1802792a0(&local_120,&local_130);
  if (local_128 != 0) {
    lVar7 = local_128;
    pvVar9 = local_130;
    do {
      if ((((lVar7 == 10) && (iVar4 = memcmp(pvVar9,"attributes",10), iVar4 == 0)) &&
          (puVar8 = (undefined8 *)FUN_1802792a0(&local_120,local_d8), puVar8[1] == 1)) &&
         ((iVar4 = memcmp((void *)*puVar8,&DAT_1806dfff8,1), iVar4 == 0 &&
          (FUN_1802792a0(&local_120,&local_130), local_128 != 0)))) {
        do {
          lVar7 = local_128;
          pvVar9 = local_130;
          if ((local_128 == 1) && (iVar4 = memcmp(local_130,&DAT_1806e0010,1), iVar4 == 0)) break;
          puVar8 = (undefined8 *)FUN_1802792a0(&local_120,local_c8);
          if ((puVar8[1] == 1) && (iVar4 = memcmp((void *)*puVar8,&DAT_1806dfff8,1), iVar4 == 0)) {
            local_78 = (undefined8 ****)0x0;
            uStack_70 = 0;
            local_68 = 0;
            local_60 = 0;
            FUN_1800133a0(&local_78,pvVar9,lVar7);
            ppppuVar10 = &local_78;
            if (0xf < local_60) {
              ppppuVar10 = local_78;
            }
            iVar4 = FUN_1805145e4(ppppuVar10);
            local_138[0] = iVar4;
            if (0xf < local_60) {
              uVar11 = local_60 + 1;
              ppppuVar10 = local_78;
              if (0xfff < uVar11) {
                ppppuVar10 = (undefined8 ****)local_78[-1];
                if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar10))) {
                  pcVar1 = (code *)swi(0x29);
                  (*pcVar1)(5);
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                uVar11 = local_60 + 0x28;
              }
              thunk_FUN_1803d64e0(ppppuVar10,uVar11);
            }
            uStack_50 = 0;
            local_48 = 0;
            local_40 = 0xf;
            local_58 = 0;
            FUN_1802792a0(&local_120,&local_108);
            if (local_100 != 0) {
              lVar7 = local_100;
              pvVar9 = local_108;
              do {
                if ((lVar7 == 1) && (iVar5 = memcmp(pvVar9,&DAT_1806e0010,1), iVar5 == 0)) break;
                FUN_1802792a0(&local_120,&local_f8);
                lVar3 = local_f0;
                pvVar2 = local_f8;
                if ((local_f0 == 1) && (iVar5 = memcmp(local_f8,&DAT_1806dfff8,1), iVar5 == 0)) {
                  iVar5 = 1;
                  do {
                    FUN_1802792a0(&local_120,&local_e8);
                    pvVar9 = local_e8;
                    if (local_e0 == 0) break;
                    if (local_e0 == 1) {
                      iVar6 = memcmp(local_e8,&DAT_1806dfff8,1);
                      if (iVar6 == 0) {
                        iVar5 = iVar5 + 1;
                      }
                      else {
                        iVar6 = memcmp(pvVar9,&DAT_1806e0010,1);
                        if (iVar6 == 0) {
                          iVar5 = iVar5 + -1;
                        }
                      }
                    }
                  } while (0 < iVar5);
                }
                else if ((lVar7 == 4) && (iVar5 = memcmp(pvVar9,&DAT_18058b644,4), iVar5 == 0)) {
                  FUN_180029840(&local_58,pvVar2,lVar3);
                }
                puVar8 = (undefined8 *)FUN_1802792a0(&local_120,local_b8);
                pvVar9 = (void *)*puVar8;
                lVar7 = puVar8[1];
              } while (lVar7 != 0);
              local_108 = pvVar9;
              local_100 = lVar7;
            }
            if ((0 < iVar4) && (local_48 != 0)) {
              FUN_1802819e0(&DAT_180ca1520,local_a8,&local_58,local_138);
            }
            FUN_18000f890(&local_58);
          }
          puVar8 = (undefined8 *)FUN_1802792a0(&local_120,local_98);
          local_130 = (void *)*puVar8;
          local_128 = puVar8[1];
        } while (local_128 != 0);
      }
      puVar8 = (undefined8 *)FUN_1802792a0(&local_120,local_88);
      pvVar9 = (void *)*puVar8;
      lVar7 = puVar8[1];
    } while (lVar7 != 0);
  }
  return;
}



/* ===== 18027a940 FUN_18027a940 ===== */

void FUN_18027a940(undefined4 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined4 *local_res8;
  undefined4 *local_res10;
  undefined4 *local_res18;
  longlong *local_98;
  longlong local_90;
  char *local_88;
  longlong local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  local_58 = *param_1;
  uStack_54 = param_1[1];
  uStack_50 = param_1[2];
  uStack_4c = param_1[3];
  local_res8 = &local_58;
  local_res10 = &local_58;
  local_res18 = &local_58;
  local_48 = 0;
  plVar1 = (longlong *)FUN_1802792a0(&local_58,&local_88);
  if (plVar1[1] == 10) {
    lVar3 = *(longlong *)*plVar1 + -0x61675f736d657469;
    if (lVar3 == 0) {
      lVar3 = (ulonglong)*(ushort *)((longlong *)*plVar1 + 1) - 0x656d;
    }
    if (((lVar3 == 0) && (puVar2 = (undefined8 *)FUN_1802792a0(&local_58,&local_88), puVar2[1] == 1)
        ) && (*(char *)*puVar2 == '{')) goto LAB_18027a9dc;
  }
  local_58 = *param_1;
  uStack_54 = param_1[1];
  uStack_50 = param_1[2];
  uStack_4c = param_1[3];
  local_48 = 0;
LAB_18027a9dc:
  FUN_1802792a0(&local_58,&local_98);
  if (local_90 != 0) {
    plVar1 = local_98;
    lVar3 = local_90;
    do {
      if (lVar3 == 1) {
        if ((char)*plVar1 == '}') {
          return;
        }
        if ((char)*plVar1 != '{') goto LAB_18027aaad;
        iVar5 = 1;
        do {
          FUN_1802792a0(&local_58,&local_98);
          if (local_90 == 0) break;
          if (local_90 == 1) {
            if ((char)*local_98 == '{') {
              iVar5 = iVar5 + 1;
            }
            else if ((char)*local_98 == '}') {
              iVar5 = iVar5 + -1;
            }
          }
        } while (0 < iVar5);
      }
      else {
LAB_18027aaad:
        puVar2 = (undefined8 *)FUN_1802792a0(&local_58,local_78);
        if ((puVar2[1] == 1) && (*(char *)*puVar2 == '{')) {
          if (lVar3 == 0x11) {
            lVar4 = *plVar1 + -0x696b5f746e696170;
            if ((lVar4 == 0) && (lVar4 = plVar1[1] + -0x74697261725f7374, lVar4 == 0)) {
              lVar4 = (ulonglong)*(byte *)(plVar1 + 2) - 0x79;
            }
            if (lVar4 == 0) {
              FUN_18027ac10(&local_res8);
            }
            else {
              lVar4 = *plVar1 + -0x6c5f746e65696c63;
              if ((lVar4 == 0) && (lVar4 = plVar1[1] + -0x7473696c5f746f6f, lVar4 == 0)) {
                lVar4 = (ulonglong)*(byte *)(plVar1 + 2) - 0x73;
              }
              if (lVar4 != 0) goto LAB_18027ab46;
              FUN_18027adf0(&local_res10);
            }
          }
          else {
LAB_18027ab46:
            if (lVar3 == 9) {
              lVar3 = *plVar1 + -0x7465735f6d657469;
              if (lVar3 == 0) {
                lVar3 = (ulonglong)*(byte *)(plVar1 + 1) - 0x73;
              }
              if (lVar3 == 0) {
                FUN_18027b0b0(&local_res18);
                goto LAB_18027abb4;
              }
            }
            iVar5 = 1;
            do {
              FUN_1802792a0(&local_58,&local_88);
              if (local_80 == 0) break;
              if (local_80 == 1) {
                if (*local_88 == '{') {
                  iVar5 = iVar5 + 1;
                }
                else if (*local_88 == '}') {
                  iVar5 = iVar5 + -1;
                }
              }
            } while (0 < iVar5);
          }
        }
      }
LAB_18027abb4:
      puVar2 = (undefined8 *)FUN_1802792a0(&local_58,local_68);
      lVar3 = puVar2[1];
      plVar1 = (longlong *)*puVar2;
    } while (lVar3 != 0);
  }
  return;
}



/* ===== 18027ac10 FUN_18027ac10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027ac10(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  void *local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  longlong local_68 [7];
  
  local_68[4] = DAT_180919500 ^ (ulonglong)auStack_d8;
  FUN_1802792a0(*param_1,&local_b8);
  lVar8 = CONCAT44(uStack_ac,uStack_b0);
  if (lVar8 != 0) {
    pvVar10 = (void *)CONCAT44(uStack_b4,local_b8);
    do {
      if ((lVar8 == 1) && (iVar3 = memcmp(pvVar10,&DAT_1806e0010,1), iVar3 == 0)) {
        return;
      }
      FUN_1802792a0(*param_1,&local_b8);
      if ((CONCAT44(uStack_ac,uStack_b0) == 1) &&
         (iVar3 = memcmp((void *)CONCAT44(uStack_b4,local_b8),&DAT_1806dfff8,1), iVar3 == 0)) {
        uVar1 = *param_1;
        iVar3 = 1;
        do {
          FUN_1802792a0(uVar1,&local_a8);
          pvVar10 = local_a8;
          if (local_a0 == 0) break;
          if (local_a0 == 1) {
            iVar4 = memcmp(local_a8,&DAT_1806dfff8,1);
            if (iVar4 == 0) {
              iVar3 = iVar3 + 1;
            }
            else {
              iVar4 = memcmp(pvVar10,&DAT_1806e0010,1);
              if (iVar4 == 0) {
                iVar3 = iVar3 + -1;
              }
            }
          }
        } while (0 < iVar3);
      }
      else {
        local_98 = local_b8;
        uStack_94 = uStack_b4;
        uStack_90 = uStack_b0;
        uStack_8c = uStack_ac;
        uVar5 = FUN_1802791a0(&local_98);
        local_68[0] = 0;
        local_68[1] = 0;
        local_68[2] = 0;
        local_68[3] = 0;
        uVar11 = FUN_1800133a0(local_68,pvVar10,lVar8);
        plVar6 = (longlong *)FUN_180285520(uVar11,local_88,local_68);
        *(undefined4 *)(*plVar6 + 0x30) = uVar5;
        if (0xf < (ulonglong)local_68[3]) {
          uVar9 = local_68[3] + 1;
          lVar8 = local_68[0];
          if (0xfff < uVar9) {
            lVar8 = *(longlong *)(local_68[0] + -8);
            if (0x1f < (local_68[0] - lVar8) - 8U) {
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar9 = local_68[3] + 0x28;
          }
          thunk_FUN_1803d64e0(lVar8,uVar9);
        }
      }
      puVar7 = (undefined8 *)FUN_1802792a0(*param_1,local_78);
      pvVar10 = (void *)*puVar7;
      lVar8 = puVar7[1];
    } while (lVar8 != 0);
  }
  return;
}



/* ===== 18027adf0 FUN_18027adf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027adf0(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  void *_Buf1;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  int local_108 [2];
  char *local_100;
  ulonglong local_f8;
  char *local_e8;
  longlong local_e0;
  void *local_d8;
  longlong local_d0;
  void *local_c8;
  longlong local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong local_78 [7];
  
  local_78[4] = DAT_180919500 ^ (ulonglong)auStack_128;
  FUN_1802792a0(*param_1,&local_100);
  puVar10 = auStack_128;
  if (local_f8 != 0) {
    uVar9 = local_f8;
    pcVar11 = local_100;
    do {
      if ((uVar9 == 1) && (iVar3 = memcmp(pcVar11,&DAT_1806e0010,1), iVar3 == 0)) {
        return;
      }
      puVar6 = (undefined8 *)FUN_1802792a0(*param_1,local_b8);
      if ((puVar6[1] == 1) && (iVar3 = memcmp((void *)*puVar6,&DAT_1806dfff8,1), iVar3 == 0)) {
        lVar7 = FUN_1800ba730(pcVar11,uVar9);
        if (lVar7 == -1) {
          iVar3 = 0;
        }
        else {
          uVar8 = lVar7 + 1;
          if (uVar9 < uVar8) {
LAB_18027b0a3:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar10 + -8) = &UNK_18027b0a8;
            FUN_180225aa0();
          }
          local_e8 = pcVar11 + uVar8;
          local_e0 = -1;
          if (uVar9 - uVar8 != -1) {
            local_e0 = uVar9 - uVar8;
          }
          iVar3 = FUN_1802791a0(&local_e8);
        }
        local_108[0] = iVar3;
        FUN_1802792a0(*param_1,&local_100);
        if (local_f8 != 0) {
          do {
            uVar9 = local_f8;
            pcVar11 = local_100;
            if ((local_f8 == 1) && (iVar4 = memcmp(local_100,&DAT_1806e0010,1), iVar4 == 0)) break;
            FUN_1802792a0(*param_1,&local_d8);
            if ((local_d0 == 1) && (iVar4 = memcmp(local_d8,&DAT_1806dfff8,1), iVar4 == 0)) {
              uVar1 = *param_1;
              iVar4 = 1;
              do {
                FUN_1802792a0(uVar1,&local_c8);
                _Buf1 = local_c8;
                if (local_c0 == 0) break;
                if (local_c0 == 1) {
                  iVar5 = memcmp(local_c8,&DAT_1806dfff8,1);
                  if (iVar5 == 0) {
                    iVar4 = iVar4 + 1;
                  }
                  else {
                    iVar5 = memcmp(_Buf1,&DAT_1806e0010,1);
                    if (iVar5 == 0) {
                      iVar4 = iVar4 + -1;
                    }
                  }
                }
              } while (0 < iVar4);
            }
            else if (((iVar3 != 0) && (uVar9 != 0)) && (*pcVar11 == '[')) {
              local_78[0] = 0;
              local_78[1] = 0;
              local_78[2] = 0;
              local_78[3] = 0;
              FUN_1800133a0(local_78,pcVar11,uVar9);
              FUN_1802819e0(&DAT_180ca13e0,local_a8,local_78,local_108);
              if (0xf < (ulonglong)local_78[3]) {
                uVar9 = local_78[3] + 1;
                lVar7 = local_78[0];
                if (0xfff < uVar9) {
                  lVar7 = *(longlong *)(local_78[0] + -8);
                  if (0x1f < (local_78[0] - lVar7) - 8U) {
                    pcVar2 = (code *)swi(0x29);
                    (*pcVar2)(5);
                    puVar10 = auStack_120;
                    goto LAB_18027b0a3;
                  }
                  uVar9 = local_78[3] + 0x28;
                }
                thunk_FUN_1803d64e0(lVar7,uVar9);
              }
            }
            puVar6 = (undefined8 *)FUN_1802792a0(*param_1,local_98);
            local_100 = (char *)*puVar6;
            local_f8 = puVar6[1];
          } while (local_f8 != 0);
        }
      }
      puVar6 = (undefined8 *)FUN_1802792a0(*param_1,local_88);
      pcVar11 = (char *)*puVar6;
      uVar9 = puVar6[1];
    } while (uVar9 != 0);
  }
  return;
}



