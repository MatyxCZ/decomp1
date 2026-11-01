/* ===== 180349fa0 FUN_180349fa0 ===== */

void FUN_180349fa0(undefined8 *param_1)

{
  FUN_180355520(param_1,*param_1);
  thunk_FUN_1803d64e0(*param_1,0x68);
  return;
}



/* ===== 180349fd0 FUN_180349fd0 ===== */

void FUN_180349fd0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1803d64e0(puVar1,0x78);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x78);
  return;
}



/* ===== 18034a030 FUN_18034a030 ===== */

void FUN_18034a030(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x30) {
    FUN_1800132b0(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 4) << 4)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18034a0bb;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18034a0bb:
  *(undefined8 *)(puVar5 + -8) = 0x18034a0c3;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18034a0e0 FUN_18034a0e0 ===== */

/* WARNING: Removing unreachable block (ram,0x00018034a137) */
/* WARNING: Removing unreachable block (ram,0x00018034a1c3) */
/* WARNING: Removing unreachable block (ram,0x00018034a148) */
/* WARNING: Removing unreachable block (ram,0x00018034a377) */

void FUN_18034a0e0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  plVar1 = DAT_181107718;
  if ((longlong)DAT_181107720 - (longlong)DAT_181107710 >> 3 == 0) {
    if (DAT_181107710 != (longlong *)0x0) {
      thunk_FUN_1803d64e0(DAT_181107710,0);
      DAT_181107710 = (longlong *)0x0;
      DAT_181107718 = (longlong *)0x0;
      DAT_181107720 = (longlong *)0x0;
    }
    DAT_181107710 = (longlong *)FUN_18000fb70(8);
    DAT_181107720 = DAT_181107710 + 1;
    DAT_181107718 = DAT_181107710 + 1;
    *DAT_181107710 = *param_3;
    return;
  }
  if ((longlong)DAT_181107718 - (longlong)DAT_181107710 >> 3 == 0) {
    lVar3 = *param_3;
    if (lVar3 == 0) {
      FUN_180540170(DAT_181107710,0,
                    (longlong)DAT_181107718 - (longlong)DAT_181107710 & 0xfffffffffffffff8);
    }
    else {
      uVar5 = ((longlong)DAT_181107718 - (longlong)DAT_181107710) + 7;
      uVar2 = uVar5 >> 3;
      if (DAT_181107718 < DAT_181107710) {
        uVar2 = 0;
      }
      plVar6 = DAT_181107710;
      if ((1 < uVar2) && ((param_3 < DAT_181107710 || (DAT_181107710 + (uVar2 - 1) < param_3)))) {
        uVar5 = uVar5 & 0xfffffffffffffff0;
        if (DAT_181107718 < DAT_181107710) {
          uVar5 = 0;
        }
        plVar6 = (longlong *)((longlong)DAT_181107710 + uVar5);
        plVar4 = DAT_181107710;
        for (uVar5 = uVar5 / 8; uVar5 != 0; uVar5 = uVar5 - 1) {
          *plVar4 = lVar3;
          plVar4 = plVar4 + 1;
        }
      }
      for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
        *plVar6 = *param_3;
      }
    }
    plVar1 = DAT_181107718;
    lVar3 = 1;
    if (*param_3 == 0) {
      FUN_180540170(DAT_181107718,0,8);
      DAT_181107718 = plVar1 + 1;
    }
    else {
      do {
        *DAT_181107718 = *param_3;
        DAT_181107718 = DAT_181107718 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  else {
    lVar3 = *param_3;
    plVar1 = DAT_181107710 + 1;
    if (lVar3 == 0) {
      FUN_180540170(DAT_181107710,0,(longlong)plVar1 - (longlong)DAT_181107710 & 0xfffffffffffffff8)
      ;
      DAT_181107718 = plVar1;
    }
    else {
      uVar5 = ((longlong)plVar1 - (longlong)DAT_181107710) + 7;
      uVar2 = uVar5 >> 3;
      if (plVar1 < DAT_181107710) {
        uVar2 = 0;
      }
      plVar6 = DAT_181107710;
      if ((1 < uVar2) && ((param_3 < DAT_181107710 || (DAT_181107710 + (uVar2 - 1) < param_3)))) {
        uVar5 = uVar5 & 0xfffffffffffffff0;
        if (plVar1 < DAT_181107710) {
          uVar5 = 0;
        }
        plVar6 = (longlong *)((longlong)DAT_181107710 + uVar5);
        plVar4 = DAT_181107710;
        for (uVar5 = uVar5 / 8; uVar5 != 0; uVar5 = uVar5 - 1) {
          *plVar4 = lVar3;
          plVar4 = plVar4 + 1;
        }
      }
      for (; DAT_181107718 = plVar1, plVar6 != plVar1; plVar6 = plVar6 + 1) {
        *plVar6 = *param_3;
      }
    }
  }
  return;
}



/* ===== 18034a380 FUN_18034a380 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18034a380(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  uVar7 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar5 = (undefined8 *)(DAT_181107640 & uVar7);
  puVar4 = *(undefined8 **)(DAT_181107628 + 8 + (longlong)puVar5 * 0x10);
  puVar6 = DAT_181107618;
  if (puVar4 != DAT_181107618) {
    puVar5 = *(undefined8 **)(DAT_181107628 + (longlong)puVar5 * 0x10);
    iVar1 = *(int *)(puVar4 + 2);
    puVar6 = puVar4;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar6;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar6 == puVar5) break;
      puVar6 = (undefined8 *)puVar6[1];
      iVar1 = *(int *)(puVar6 + 2);
    }
  }
  if (DAT_181107620 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar8 = &DAT_181107618;
  lVar2 = FUN_1804ecaa0(0x28,puVar5,DAT_181107628,param_4,&DAT_181107618,0);
  *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)param_3;
  uVar3 = param_4[1];
  *(undefined8 *)(lVar2 + 0x14) = *param_4;
  *(undefined8 *)(lVar2 + 0x1c) = uVar3;
  *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_4 + 2);
  puVar4 = DAT_181107648;
  if ((longlong)DAT_181107648 < 0) {
    puVar4 = (undefined8 *)(ulonglong)((uint)DAT_181107648 & 1);
  }
  lVar9 = lVar2;
  if (_DAT_181107610 < (float)(DAT_181107620 + 1) / (float)DAT_181107648) {
    FUN_180355830();
    puVar4 = *(undefined8 **)(DAT_181107628 + 8 + (DAT_181107640 & uVar7) * 0x10);
    puVar6 = DAT_181107618;
    if (puVar4 != DAT_181107618) {
      iVar1 = *(int *)(puVar4 + 2);
      while (*(int *)(lVar2 + 0x10) != iVar1) {
        if (puVar4 == *(undefined8 **)(DAT_181107628 + (DAT_181107640 & uVar7) * 0x10)) {
          puVar6 = puVar4;
          goto LAB_18034a541;
        }
        puVar4 = (undefined8 *)puVar4[1];
        iVar1 = *(int *)(puVar4 + 2);
      }
      puVar6 = (undefined8 *)*puVar4;
    }
  }
LAB_18034a541:
  uVar3 = FUN_1803558e0(puVar4,uVar7,puVar6,lVar2,puVar8,lVar9);
  *param_2 = uVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18034a580 FUN_18034a580 ===== */

void FUN_18034a580(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_res8;
  longlong *local_48;
  longlong *local_40;
  
  lVar5 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar5 >> 3 < 0x21) {
      plVar7 = param_1;
      if (param_1 != param_2) {
        while (plVar1 = plVar7 + 1, plVar1 != param_2) {
          lVar5 = *plVar1;
          local_res8 = (longlong *)(*param_4 + lVar5 * 0x20);
          cVar4 = FUN_180023470(local_res8,*param_1 * 0x20 + *param_4);
          if (cVar4 < '\0') {
            FUN_180540530(param_1 + 1,param_1,(longlong)plVar1 - (longlong)param_1);
            *param_1 = lVar5;
            plVar7 = plVar1;
          }
          else {
            cVar4 = FUN_180023470(local_res8,*plVar7 * 0x20 + *param_4);
            plVar3 = plVar1;
            while (plVar2 = plVar7, cVar4 < '\0') {
              *plVar3 = *plVar2;
              cVar4 = FUN_180023470(*param_4 + lVar5 * 0x20,plVar2[-1] * 0x20 + *param_4);
              plVar7 = plVar2 + -1;
              plVar3 = plVar2;
            }
            *plVar3 = lVar5;
            plVar7 = plVar1;
          }
        }
      }
      return;
    }
    lVar5 = (longlong)param_2 - (longlong)param_1 >> 4;
    if (param_3 < 1) break;
    local_res8 = param_1 + lVar5;
    lVar6 = (longlong)param_2 + (-8 - (longlong)param_1) >> 3;
    if (lVar6 < 0x29) {
      FUN_1803599b0(param_1,local_res8,param_2 + -1,param_4);
      plVar7 = local_res8;
    }
    else {
      lVar6 = lVar6 + 1 >> 3;
      FUN_1803599b0(param_1,param_1 + lVar6,param_1 + lVar6 * 2,param_4);
      plVar7 = local_res8;
      FUN_1803599b0(local_res8 + -lVar6,local_res8,param_1 + lVar6 + lVar5,param_4);
      plVar1 = param_2 + -1;
      FUN_1803599b0(plVar1 + lVar6 * -2,plVar1 + -lVar6,plVar1,param_4);
      FUN_1803599b0(param_1 + lVar6,plVar7,plVar1 + -lVar6,param_4);
    }
    FUN_180355ae0(&local_48,param_1,plVar7,param_2,param_4);
    plVar1 = local_40;
    plVar7 = local_48;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)local_48 - (longlong)param_1 >> 3 < (longlong)param_2 - (longlong)local_40 >> 3) {
      FUN_18034a580(param_1,local_48,param_3,param_4);
      param_1 = plVar1;
      plVar7 = param_2;
    }
    else {
      FUN_18034a580(local_40,param_2,param_3,param_4);
    }
    lVar5 = (longlong)plVar7 - (longlong)param_1;
    param_2 = plVar7;
  }
  lVar6 = (longlong)param_2 - (longlong)param_1 >> 3;
  while (0 < lVar5) {
    local_res8 = (longlong *)param_1[lVar5 + -1];
    lVar5 = lVar5 + -1;
    FUN_1803559d0(param_1,lVar5,lVar6,&local_res8,param_4);
  }
  if (lVar6 < 2) {
    return;
  }
  do {
    if (1 < (longlong)param_2 - (longlong)param_1 >> 3) {
      local_res8 = (longlong *)param_2[-1];
      param_2[-1] = *param_1;
      FUN_1803559d0(param_1,0,(longlong)(param_2 + -1) - (longlong)param_1 >> 3,&local_res8,param_4)
      ;
    }
    param_2 = param_2 + -1;
  } while (0xf < (longlong)param_2 - (longlong)param_1);
  return;
}



/* ===== 18034a8b0 FUN_18034a8b0 ===== */

void FUN_18034a8b0(int *param_1,int *param_2,longlong param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  int local_res8 [8];
  int *local_48;
  int *local_40;
  
  lVar3 = (longlong)param_2 - (longlong)param_1;
  while (0x20 < lVar3 >> 2) {
    lVar3 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (param_3 < 1) {
      lVar6 = (longlong)param_2 - (longlong)param_1 >> 2;
      while (0 < lVar3) {
        local_res8[0] = param_1[lVar3 + -1];
        lVar3 = lVar3 + -1;
        FUN_180355db0(param_1,lVar3,lVar6,local_res8,param_4);
      }
      if (lVar6 < 2) {
        return;
      }
      do {
        if (1 < (longlong)param_2 - (longlong)param_1 >> 2) {
          local_res8[0] = param_2[-1];
          param_2[-1] = *param_1;
          FUN_180355db0(param_1,0,(longlong)(param_2 + -1) - (longlong)param_1 >> 2,local_res8,
                        param_4);
        }
        param_2 = param_2 + -1;
      } while (7 < (longlong)param_2 - (longlong)param_1);
      return;
    }
    piVar4 = param_1 + lVar3;
    FUN_180355e90(param_1,piVar4,param_2 + -1,param_4);
    FUN_180356100(&local_48,param_1,piVar4,param_2);
    piVar5 = local_40;
    piVar4 = local_48;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)local_48 - (longlong)param_1 >> 2 < (longlong)param_2 - (longlong)local_40 >> 2) {
      FUN_18034a8b0(param_1,local_48,param_3,param_4);
      piVar4 = param_2;
      param_1 = piVar5;
    }
    else {
      FUN_18034a8b0(local_40,param_2,param_3,param_4);
    }
    param_2 = piVar4;
    lVar3 = (longlong)piVar4 - (longlong)param_1;
  }
  if (param_1 == param_2) {
    return;
  }
  piVar4 = param_1 + 1;
joined_r0x00018034a995:
  if (piVar4 == param_2) {
    return;
  }
  iVar1 = *piVar4;
  iVar2 = *param_1;
  if (iVar1 == 0) {
    if (iVar2 == 0) goto LAB_18034aa95;
  }
  else if ((iVar2 == 0) || (iVar1 <= iVar2)) {
LAB_18034aa95:
    piVar5 = piVar4;
    do {
      iVar2 = piVar5[-1];
      if (iVar1 == 0) {
        if (iVar2 == 0) goto LAB_18034aab3;
      }
      else if ((iVar2 == 0) || (iVar1 <= iVar2)) goto LAB_18034aab3;
      *piVar5 = iVar2;
      piVar5 = piVar5 + -1;
    } while( true );
  }
  FUN_180540530(param_1 + 1,param_1,(longlong)piVar4 - (longlong)param_1);
  *param_1 = iVar1;
  goto LAB_18034a9d0;
LAB_18034aab3:
  *piVar5 = iVar1;
LAB_18034a9d0:
  piVar4 = piVar4 + 1;
  goto joined_r0x00018034a995;
}



/* ===== 18034aad0 FUN_18034aad0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_18034aad0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  int local_b0;
  undefined1 local_ac;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  char local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_118;
  puVar1 = param_1;
  if (param_1 != param_2) {
    while (puVar1 = puVar1 + 0x2e, puVar1 != param_2) {
      FUN_18034fd60(&local_f8,puVar1);
      cVar3 = local_68;
      iVar2 = local_b0;
      if (local_68 == *(char *)(param_1 + 0x24)) {
        bVar6 = (int)param_1[0x12] < local_b0;
      }
      else {
        bVar6 = local_68 == '\0';
      }
      if (bVar6) {
        puVar5 = puVar1 + 0x2e;
        puVar4 = puVar1;
        while (puVar4 != param_1) {
          puVar4 = puVar4 + -0x2e;
          puVar5 = puVar5 + -0x2e;
          FUN_18034ad30(puVar5,puVar4);
        }
        *param_1 = local_f8;
        param_1[1] = local_f4;
        FUN_18002ba60(param_1 + 2,local_f0);
        FUN_18002ba60(param_1 + 10,local_d0);
        param_1[0x12] = local_b0;
        *(undefined1 *)(param_1 + 0x13) = local_ac;
        FUN_18002ba60(param_1 + 0x14,local_a8);
        FUN_18002ba60(param_1 + 0x1c,local_88);
        *(char *)(param_1 + 0x24) = local_68;
        puVar5 = param_1;
      }
      else {
        puVar5 = puVar1;
        while( true ) {
          if (cVar3 == *(char *)(puVar5 + -10)) {
            bVar6 = (int)puVar5[-0x1c] < iVar2;
          }
          else {
            bVar6 = cVar3 == '\0';
          }
          if (!bVar6) break;
          FUN_18034ad30(puVar5,puVar5 + -0x2e);
          puVar5 = puVar5 + -0x2e;
        }
        *puVar5 = local_f8;
        puVar5[1] = local_f4;
        FUN_18002ba60(puVar5 + 2,local_f0);
        FUN_18002ba60(puVar5 + 10,local_d0);
        puVar5[0x12] = local_b0;
        *(undefined1 *)(puVar5 + 0x13) = local_ac;
        FUN_18002ba60(puVar5 + 0x14,local_a8);
        FUN_18002ba60(puVar5 + 0x1c,local_88);
        *(char *)(puVar5 + 0x24) = local_68;
      }
      FUN_18002ba60(puVar5 + 0x26,local_60);
      FUN_18000f890(local_60);
      FUN_18000f890(local_88);
      FUN_18000f890(local_a8);
      FUN_18000f890(local_d0);
      FUN_18000f890(local_f0);
    }
  }
  return param_2;
}



/* ===== 18034ad30 FUN_18034ad30 ===== */

undefined4 * FUN_18034ad30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_18002ba60(param_1 + 2,param_2 + 2);
  FUN_18002ba60(param_1 + 10,param_2 + 10);
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  FUN_18002ba60(param_1 + 0x14,param_2 + 0x14);
  FUN_18002ba60(param_1 + 0x1c,param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  FUN_18002ba60(param_1 + 0x26,param_2 + 0x26);
  return param_1;
}



/* ===== 18034adc0 FUN_18034adc0 ===== */

longlong * FUN_18034adc0(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x17) {
    plVar1 = param_1 + 2;
    uVar2 = param_2;
  }
  else {
    uVar2 = 0x7fffffffffffffff;
    if ((longlong)param_2 < 0x7fffffffffffffff) {
      uVar2 = param_2;
    }
    if ((uVar2 < 0x1642c8590b21643) && (0 < (longlong)uVar2)) {
      do {
        plVar1 = (longlong *)FUN_1804ed030(uVar2 * 0xb8,&DAT_1805757b2);
        if (plVar1 != (longlong *)0x0) {
          if (uVar2 < 0x17) goto LAB_18034ae33;
          goto LAB_18034ae44;
        }
        uVar2 = uVar2 >> 1;
      } while (uVar2 != 0);
    }
    plVar1 = (longlong *)0x0;
LAB_18034ae33:
    FUN_1803d64e0(plVar1);
    plVar1 = param_1 + 2;
    uVar2 = 0x16;
  }
LAB_18034ae44:
  *param_1 = (longlong)plVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* ===== 18034ae70 FUN_18034ae70 ===== */

void FUN_18034ae70(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_18034aad0();
    return;
  }
  uVar1 = param_3 >> 1;
  lVar2 = param_3 - uVar1;
  lVar3 = lVar2 * 0xb8 + param_1;
  if (param_5 < lVar2) {
    FUN_18034ae70(param_1,lVar3,lVar2,param_4,param_5,param_6);
    FUN_18034ae70(lVar3,param_2,uVar1,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_180350520();
    FUN_180350520(lVar3,param_2,uVar1,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_1803507d0(param_1,lVar3,param_2,lVar2,uVar1,param_4,param_5,param_6);
  return;
}



/* ===== 18034af70 FUN_18034af70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_18034af70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  int local_f4;
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  char local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_118;
  puVar1 = param_1;
  if (param_1 != param_2) {
    while (puVar1 = puVar1 + 0x2e, puVar1 != param_2) {
      FUN_18034fd60(&local_f8,puVar1);
      cVar3 = local_68;
      iVar2 = local_f4;
      if (local_68 == *(char *)(param_1 + 0x24)) {
        bVar6 = (int)param_1[1] < local_f4;
      }
      else {
        bVar6 = local_68 == '\0';
      }
      if (bVar6) {
        puVar5 = puVar1 + 0x2e;
        puVar4 = puVar1;
        while (puVar4 != param_1) {
          puVar4 = puVar4 + -0x2e;
          puVar5 = puVar5 + -0x2e;
          FUN_18034ad30(puVar5,puVar4);
        }
        *param_1 = local_f8;
        param_1[1] = iVar2;
        FUN_18002ba60(param_1 + 2,local_f0);
        FUN_18002ba60(param_1 + 10,local_d0);
        param_1[0x12] = local_b0;
        *(undefined1 *)(param_1 + 0x13) = local_ac;
        FUN_18002ba60(param_1 + 0x14,local_a8);
        FUN_18002ba60(param_1 + 0x1c,local_88);
        *(char *)(param_1 + 0x24) = local_68;
        puVar5 = param_1;
      }
      else {
        puVar5 = puVar1;
        while( true ) {
          if (cVar3 == *(char *)(puVar5 + -10)) {
            bVar6 = (int)puVar5[-0x2d] < iVar2;
          }
          else {
            bVar6 = cVar3 == '\0';
          }
          if (!bVar6) break;
          FUN_18034ad30(puVar5,puVar5 + -0x2e);
          puVar5 = puVar5 + -0x2e;
        }
        *puVar5 = local_f8;
        puVar5[1] = iVar2;
        FUN_18002ba60(puVar5 + 2,local_f0);
        FUN_18002ba60(puVar5 + 10,local_d0);
        puVar5[0x12] = local_b0;
        *(undefined1 *)(puVar5 + 0x13) = local_ac;
        FUN_18002ba60(puVar5 + 0x14,local_a8);
        FUN_18002ba60(puVar5 + 0x1c,local_88);
        *(char *)(puVar5 + 0x24) = local_68;
      }
      FUN_18002ba60(puVar5 + 0x26,local_60);
      FUN_18000f890(local_60);
      FUN_18000f890(local_88);
      FUN_18000f890(local_a8);
      FUN_18000f890(local_d0);
      FUN_18000f890(local_f0);
    }
  }
  return param_2;
}



/* ===== 18034b1d0 FUN_18034b1d0 ===== */

void FUN_18034b1d0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_18034af70();
    return;
  }
  uVar1 = param_3 >> 1;
  lVar2 = param_3 - uVar1;
  lVar3 = lVar2 * 0xb8 + param_1;
  if (param_5 < lVar2) {
    FUN_18034b1d0(param_1,lVar3,lVar2,param_4,param_5,param_6);
    FUN_18034b1d0(lVar3,param_2,uVar1,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_1803508f0();
    FUN_1803508f0(lVar3,param_2,uVar1,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_180350ba0(param_1,lVar3,param_2,lVar2,uVar1,param_4,param_5,param_6);
  return;
}



/* ===== 18034b2d0 FUN_18034b2d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_18034b2d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  char local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_118;
  puVar1 = param_1;
  if (param_1 != param_2) {
    while (puVar1 = puVar1 + 0x2e, puVar1 != param_2) {
      FUN_18034fd60(&local_f8,puVar1);
      cVar2 = local_68;
      if (local_68 == *(char *)(param_1 + 0x24)) {
        bVar3 = FUN_180023470(local_f0,param_1 + 2);
        bVar6 = (bool)(bVar3 >> 7);
      }
      else {
        bVar6 = local_68 == '\0';
      }
      if (bVar6 == false) {
        puVar5 = puVar1;
        while( true ) {
          if (cVar2 == *(char *)(puVar5 + -10)) {
            bVar3 = FUN_180023470(local_f0,puVar5 + -0x2c);
            bVar6 = (bool)(bVar3 >> 7);
          }
          else {
            bVar6 = cVar2 == '\0';
          }
          if (bVar6 == false) break;
          FUN_18034ad30(puVar5,puVar5 + -0x2e);
          puVar5 = puVar5 + -0x2e;
        }
        *puVar5 = local_f8;
        puVar5[1] = local_f4;
        FUN_18002ba60(puVar5 + 2,local_f0);
        FUN_18002ba60(puVar5 + 10,local_d0);
        puVar5[0x12] = local_b0;
        *(undefined1 *)(puVar5 + 0x13) = local_ac;
        FUN_18002ba60(puVar5 + 0x14,local_a8);
        FUN_18002ba60(puVar5 + 0x1c,local_88);
        *(char *)(puVar5 + 0x24) = local_68;
      }
      else {
        puVar5 = puVar1 + 0x2e;
        puVar4 = puVar1;
        while (puVar4 != param_1) {
          puVar4 = puVar4 + -0x2e;
          puVar5 = puVar5 + -0x2e;
          FUN_18034ad30(puVar5,puVar4);
        }
        *param_1 = local_f8;
        param_1[1] = local_f4;
        FUN_18002ba60(param_1 + 2,local_f0);
        FUN_18002ba60(param_1 + 10,local_d0);
        param_1[0x12] = local_b0;
        *(undefined1 *)(param_1 + 0x13) = local_ac;
        FUN_18002ba60(param_1 + 0x14,local_a8);
        FUN_18002ba60(param_1 + 0x1c,local_88);
        *(char *)(param_1 + 0x24) = local_68;
        puVar5 = param_1;
      }
      FUN_18002ba60(puVar5 + 0x26,local_60);
      FUN_18000f890(local_60);
      FUN_18000f890(local_88);
      FUN_18000f890(local_a8);
      FUN_18000f890(local_d0);
      FUN_18000f890(local_f0);
    }
  }
  return param_2;
}



/* ===== 18034b540 FUN_18034b540 ===== */

void FUN_18034b540(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_18034b2d0();
    return;
  }
  uVar1 = param_3 >> 1;
  lVar2 = param_3 - uVar1;
  lVar3 = lVar2 * 0xb8 + param_1;
  if (param_5 < lVar2) {
    FUN_18034b540(param_1,lVar3,lVar2,param_4,param_5,param_6);
    FUN_18034b540(lVar3,param_2,uVar1,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_180350cc0();
    FUN_180350cc0(lVar3,param_2,uVar1,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_180350f70(param_1,lVar3,param_2,lVar2,uVar1,param_4,param_5,param_6);
  return;
}



/* ===== 18034b640 FUN_18034b640 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18034b640(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58;
  undefined1 local_50 [40];
  ulonglong local_28;
  
  if (param_1 != param_2) {
    local_28 = DAT_180919500 ^ (ulonglong)auStack_108;
    do {
      puVar1 = param_2 + -0x2e;
      if (param_1 == puVar1) {
        return;
      }
      FUN_18034fd60(&local_e8,param_1);
      FUN_18034ad30(param_1,puVar1);
      *puVar1 = local_e8;
      param_2[-0x2d] = local_e4;
      FUN_18002ba60(param_2 + -0x2c,local_e0);
      FUN_18002ba60(param_2 + -0x24,local_c0);
      param_2[-0x1c] = local_a0;
      *(undefined1 *)(param_2 + -0x1b) = local_9c;
      FUN_18002ba60(param_2 + -0x1a,local_98);
      FUN_18002ba60(param_2 + -0x12,local_78);
      *(undefined1 *)(param_2 + -10) = local_58;
      FUN_18002ba60(param_2 + -8,local_50);
      FUN_18000f890(local_50);
      FUN_18000f890(local_78);
      FUN_18000f890(local_98);
      FUN_18000f890(local_c0);
      FUN_18000f890(local_e0);
      param_1 = param_1 + 0x2e;
      param_2 = puVar1;
    } while (param_1 != puVar1);
  }
  return;
}



/* ===== 18034b7a0 FUN_18034b7a0 ===== */

void FUN_18034b7a0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar5 = DAT_181107810;
  lVar8 = DAT_181107808;
  if (param_4 != 0) {
    lVar4 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(DAT_181107818 - DAT_181107810),8) +
            (DAT_181107818 - DAT_181107810);
    if (param_4 <= (ulonglong)((lVar4 >> 7) - (lVar4 >> 0x3f))) {
      lVar8 = param_4 * 0xb8;
      if (param_4 < (ulonglong)((DAT_181107810 - param_2 >> 3) * -0x2c8590b21642c859)) {
        lVar4 = DAT_181107810 + param_4 * -0xb8;
        lVar2 = lVar4;
        lVar3 = DAT_181107810;
        if (lVar8 != 0) {
          do {
            FUN_18034fd60(lVar3);
            lVar3 = lVar3 + 0xb8;
            lVar2 = lVar2 + 0xb8;
          } while (lVar2 != lVar5);
        }
        FUN_18034e360(lVar3,lVar3);
        DAT_181107810 = lVar3;
        while (lVar4 != param_2) {
          lVar4 = lVar4 + -0xb8;
          lVar5 = lVar5 + -0xb8;
          FUN_18034ad30(lVar5,lVar4);
        }
        FUN_18034e360(param_2,param_2 + lVar8);
        do {
          FUN_18034fd60(param_2,param_3);
          param_2 = param_2 + 0xb8;
          param_3 = param_3 + 0xb8;
          param_4 = param_4 - 1;
        } while (param_4 != 0);
        FUN_18034e360(param_2,param_2);
      }
      else {
        lVar8 = param_2 + lVar8;
        for (lVar4 = param_2; lVar4 != lVar5; lVar4 = lVar4 + 0xb8) {
          FUN_18034fd60(lVar8);
          lVar8 = lVar8 + 0xb8;
        }
        FUN_18034e360(lVar8,lVar8);
        DAT_181107810 = lVar8;
        FUN_18034e360(param_2,lVar5);
        do {
          FUN_18034fd60(param_2,param_3);
          param_2 = param_2 + 0xb8;
          param_3 = param_3 + 0xb8;
          param_4 = param_4 - 1;
        } while (param_4 != 0);
        FUN_18034e360(param_2,param_2);
      }
      return;
    }
    lVar4 = DAT_181107810 - DAT_181107808 >> 3;
    uVar7 = 0x1642c8590b21642;
    if (lVar4 * 0x2c8590b21642c859 + 0x1642c8590b21642U < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_18000fb10();
    }
    uVar1 = lVar4 * -0x2c8590b21642c859 + param_4;
    uVar6 = (DAT_181107818 - DAT_181107808 >> 3) * -0x2c8590b21642c859;
    if (uVar6 <= 0x1642c8590b21642 - (uVar6 >> 1)) {
      uVar6 = (uVar6 >> 1) + uVar6;
      uVar7 = uVar1;
      if (uVar1 <= uVar6) {
        uVar7 = uVar6;
      }
      if (0x1642c8590b21642 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_18000d840();
      }
    }
    lVar4 = FUN_18000fb70(uVar7 * 0xb8);
    lVar2 = param_2 - lVar8 >> 3;
    lVar3 = lVar2 * 8 + lVar4;
    uVar6 = param_4;
    do {
      FUN_18034fd60(lVar3,param_3);
      lVar3 = lVar3 + 0xb8;
      param_3 = param_3 + 0xb8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    FUN_18034e360(lVar3,lVar3);
    lVar3 = lVar4;
    if ((param_4 == 1) && (param_2 == lVar5)) {
      for (; lVar8 != lVar5; lVar8 = lVar8 + 0xb8) {
        FUN_18034fd60(lVar3,lVar8);
        lVar3 = lVar3 + 0xb8;
      }
    }
    else {
      for (; lVar8 != param_2; lVar8 = lVar8 + 0xb8) {
        FUN_18034fd60(lVar3,lVar8);
        lVar3 = lVar3 + 0xb8;
      }
      FUN_18034e360(lVar3,lVar3);
      lVar3 = (lVar2 * -0x2c8590b21642c859 + param_4) * 0xb8 + lVar4;
      for (; param_2 != lVar5; param_2 = param_2 + 0xb8) {
        FUN_18034fd60(lVar3,param_2);
        lVar3 = lVar3 + 0xb8;
      }
    }
    FUN_18034e360(lVar3,lVar3);
    FUN_1803556e0(&DAT_181107808,lVar4,uVar1,uVar7);
  }
  return;
}



/* ===== 18034bb20 FUN_18034bb20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18034bb20(longlong *param_1)

{
  undefined4 local_14;
  
  DAT_1811074d0 = "nl_glyph_arrows";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M278 10C266 -3 245 -3 233 10L169 74C156 86 156 107 169 119C181 132 202 132 214 119L224 110L224 224L109 224L118 215C131 203 131 182 118 170C106 157 85 157 73 170L9 234C-3 246 -3 267 9 279L73 343C85 356 106 356 118 343C131 331 131 310 118 298L109 288L224 288L224 403L214 394C202 381 181 381 169 394C156 406 156 427 169 439L233 502C245 515 266 515 278 502L342 439C355 427 355 406 342 394C330 381 309 381 297 394L287 403L287 288L402 288L393 298C380 310 380 331 393 343C405 356 426 356 438 343L502 279C515 267 515 246 502 234L438 170C426 157 405 157 393 170C380 182 380 203 393 215L402 225L288 225L288 110L297 119C309 132 330 132 342 119C355 107 355 86 342 74L278 10L278 10ZM278 10Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x44000000;
  FUN_18033fa10(&DAT_1806e0df8,*param_1 + 0x11bc,5,0x14,&DAT_1806dfdd8,0);
  DAT_1811074d0 = "nl_glyph_circle_radius";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M1 232C6 180 26 132 58 93L104 139C83 165 69 197 65 232L1 232L1 232ZM138 105L92 59C131 27 179 6 231 2L231 66C196 70 164 84 138 105ZM279 447C315 443 347 429 373 408L419 453C380 485 332 506 279 510L279 447ZM407 374C428 348 442 315 446 280L510 280C505 333 485 381 453 420L407 374L407 374ZM407 374ZM92 453L138 408C164 429 196 443 231 447L231 510C179 506 131 485 92 453L92 453ZM92 453ZM58 420C26 381 5 333 1 280L65 280C69 316 83 348 104 374L58 420L58 420ZM419 59L373 105C347 84 315 70 280 66L280 2C332 6 380 27 419 59ZM407 139L453 93C485 132 505 180 510 233L446 233C442 197 428 165 407 139L407 139ZM407 139Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x44000000;
  FUN_18033fa10("radius",*param_1 + 0x11c0,1,100,&DAT_1806dfdd8,0);
  return;
}



/* ===== 18034bc00 FUN_18034bc00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18034bc00(longlong *param_1)

{
  undefined4 local_14;
  
  DAT_1811074d0 = "nl_glyph_spread";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M32 24C32 11 42 0 56 0C69 0 80 11 80 24L80 488C80 501 69 512 56 512C42 512 32 501 32 488L32 24ZM160 144C160 118 181 96 208 96L304 96C330 96 352 118 352 144L352 368C352 395 330 416 304 416L208 416C181 416 160 395 160 368L160 144ZM456 0C469 0 480 11 480 24L480 488C480 501 469 512 456 512C442 512 432 501 432 488L432 24C432 11 442 0 456 0Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x44000000;
  FUN_18033fa10("spread force",*param_1 + 0x28,0,100,&DAT_1806dfdd8,0);
  DAT_1811074d0 = "nl_glyph_arrow_up";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M214 42C202 29 181 29 169 42L9 202C-3 214 -3 235 9 247C21 260 42 260 54 247L160 142L160 448C160 465 174 480 192 480C209 480 224 465 224 448L224 142L329 247C341 260 362 260 374 247C387 235 387 214 374 202L214 42L214 42ZM214 42Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x43c00000;
  FUN_18033fa10("speed",*param_1 + 0x2c,0,200,&DAT_1806dfdd8,0);
  return;
}



/* ===== 18034bce0 FUN_18034bce0 ===== */

undefined4 * FUN_18034bce0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  
  if (param_1 == param_2) {
    return param_2;
  }
  for (puVar4 = param_1 + 1; puVar4 != param_2; puVar4 = puVar4 + 1) {
    uVar1 = *puVar4;
    uVar2 = FUN_1802f7770(uVar1);
    uVar8 = (ulonglong)uVar2;
    iVar3 = FUN_1802f7770(*param_1);
    if ((int)uVar8 < iVar3) {
      FUN_180540530(param_1 + 1,param_1,(longlong)puVar4 - (longlong)param_1);
      *param_1 = uVar1;
    }
    else {
      puVar5 = puVar4 + -1;
      puVar7 = puVar4;
      iVar3 = FUN_1802f7770(puVar4[-1]);
      if ((int)uVar8 < iVar3) {
        do {
          *puVar7 = *puVar5;
          puVar6 = puVar5 + -1;
          puVar7 = puVar5;
          iVar3 = FUN_1802f7770(puVar5[-1]);
          puVar5 = puVar6;
        } while ((int)uVar8 < iVar3);
      }
      *puVar7 = uVar1;
    }
  }
  return param_2;
}



/* ===== 18034bdc0 FUN_18034bdc0 ===== */

longlong * FUN_18034bdc0(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x401) {
    plVar1 = param_1 + 2;
    uVar2 = param_2;
  }
  else {
    uVar2 = 0x7fffffffffffffff;
    if ((longlong)param_2 < 0x7fffffffffffffff) {
      uVar2 = param_2;
    }
    if ((uVar2 < 0x4000000000000000) && (0 < (longlong)uVar2)) {
      do {
        plVar1 = (longlong *)FUN_1804ed030(uVar2 * 4,&DAT_1805757b2);
        if (plVar1 != (longlong *)0x0) {
          if (uVar2 < 0x401) goto LAB_18034be34;
          goto LAB_18034be45;
        }
        uVar2 = uVar2 >> 1;
      } while (uVar2 != 0);
    }
    plVar1 = (longlong *)0x0;
LAB_18034be34:
    FUN_1803d64e0(plVar1);
    plVar1 = param_1 + 2;
    uVar2 = 0x400;
  }
LAB_18034be45:
  *param_1 = (longlong)plVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* ===== 18034be70 FUN_18034be70 ===== */

void FUN_18034be70(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_18034bce0();
    return;
  }
  uVar2 = param_3 >> 1;
  lVar3 = param_3 - uVar2;
  lVar1 = param_1 + lVar3 * 4;
  if (param_5 < lVar3) {
    FUN_18034be70(param_1,lVar1,lVar3,param_4,param_5,param_6);
    FUN_18034be70(lVar1,param_2,uVar2,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_1803511c0();
    FUN_1803511c0(lVar1,param_2,uVar2,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_1803513f0(param_1,lVar1,param_2,lVar3,uVar2,param_4,param_5,param_6);
  return;
}



/* ===== 18034bf70 FUN_18034bf70 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18034bf70(longlong *param_1)

{
  undefined4 local_14;
  
  DAT_1811074d0 = "icon_e269";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M96 32L128 32L128 96L96 96C78 96 64 111 64 128L64 160L0 160L0 128C0 75 43 32 96 32ZM0 192L64 192L64 320L0 320L0 192ZM384 192L448 192L448 320L384 320L384 192ZM448 160L384 160L384 128C384 111 369 96 352 96L320 96L320 32L352 32C405 32 448 75 448 128L448 160ZM448 352L448 384C448 437 405 480 352 480L320 480L320 416L352 416C369 416 384 402 384 384L384 352L448 352ZM64 352L64 384C64 402 78 416 96 416L128 416L128 480L96 480C43 480 0 437 0 384L0 352L64 352ZM160 480L160 416L288 416L288 480L160 480ZM160 96L160 32L288 32L288 96L160 96Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x43e00000;
  FUN_18033fa10("overlay transparency",*param_1 + 0x14,1,100,&DAT_1806f0260,0);
  DAT_1811074d0 = "icon_e3db";
  DAT_1811074e0 = 0x43e00000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M96 32L96 112L352 112L352 32L96 32ZM64 112L64 32C28 32 0 61 0 96L0 112L64 112ZM0 144L0 240L208 240L208 144L0 144ZM0 368L64 368L64 272L0 272L0 368ZM0 400L0 416C0 451 28 480 64 480L208 480L208 400L0 400ZM240 400L240 480L384 480C419 480 448 451 448 416L448 400L240 400ZM448 368L448 272L384 272L384 368L448 368ZM352 368L352 272L96 272L96 368L352 368ZM448 144L240 144L240 240L448 240L448 144ZM448 112L448 96C448 61 419 32 384 32L384 112L448 112Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  FUN_1802c0a60("colorize props",*param_1 + 0x18);
  FUN_1803ec6c0(0,DAT_1808acda0);
  FUN_1802cedb0("##props_color");
  return;
}



/* ===== 18034c050 FUN_18034c050 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18034c050(longlong *param_1)

{
  char *local_28;
  char *local_20;
  undefined4 local_14;
  
  local_28 = "modulation";
  DAT_1811074e0 = 0x44200000;
  local_20 = "override";
  DAT_1811074d0 = "icon_f085";
  DAT_1811074d8 = &DAT_180750280;
  _DAT_1811074e4 = local_14;
  FUN_1802c2640("method",*param_1 + 0x80,&local_28,2);
  DAT_1811074d0 = "icon_e08d";
  DAT_1811074e0 = 0x43e00000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M64 64C64 47 49 32 32 32C14 32 0 47 0 64L0 448C0 465 14 480 32 480L416 480C433 480 448 465 448 448C448 431 433 416 416 416L64 416L64 64ZM96 98L96 146C127 150 156 159 183 172L208 131C174 113 136 102 96 98ZM211 188C243 209 271 237 292 269L333 244C308 205 275 172 236 147L211 188L211 188ZM211 188ZM334 384L382 384C378 344 367 306 349 272L308 297C321 324 330 353 334 385L334 384ZM334 384Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  FUN_1802c0a60("override rotation",*param_1 + 0x84);
  if (*(char *)(*param_1 + 0x84) != '\0') {
    DAT_1811074d0 = "icon_f07d";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 320 512\" width=\"320\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M182 10C170 -3 149 -3 137 10L41 106C28 118 28 139 41 151C53 164 74 164 86 151L128 110L128 403L86 362C74 349 53 349 41 362C28 374 28 395 41 407L137 502C149 515 170 515 182 502L278 407C291 395 291 374 278 362C266 349 245 349 233 362L191 403L191 110L233 151C245 164 266 164 278 151C291 139 291 118 278 106L182 10L182 10ZM182 10Z\"/></svg>"
    ;
    _DAT_1811074e4 = local_14;
    DAT_1811074e0 = 0x43a00000;
    FUN_18033fa10("pitch",*param_1 + 0x88,0xffffffa6,0x5a,&DAT_180761354,0);
    DAT_1811074d0 = "icon_f07e";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M406 375L502 279C515 267 515 246 502 234L406 138C394 125 373 125 361 138C348 150 348 171 361 183L402 224L109 224L150 183C163 171 163 150 150 138C138 125 117 125 105 138L9 234C-3 246 -3 267 9 279L105 375C117 388 138 388 150 375C163 363 163 342 150 330L109 288L402 288L361 330C348 342 348 363 361 375C373 388 394 388 406 375L406 375ZM406 375Z\"/></svg>"
    ;
    _DAT_1811074e4 = local_14;
    DAT_1811074e0 = 0x44000000;
    FUN_18033fa10(&DAT_1806e7350,*param_1 + 0x8c,0xffffff4c,0xb4,&DAT_180761354,0);
  }
  DAT_1811074d0 = "icon_e0ca";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M224 80C224 63 238 48 256 48C273 48 288 63 288 80C288 98 273 112 256 112C238 112 224 98 224 80ZM160 256C160 222 178 191 208 173C237 156 274 156 304 173C333 191 352 222 352 256C352 291 333 322 304 340C274 357 237 357 208 340C178 322 160 291 160 256ZM256 400C273 400 288 415 288 432C288 449 273 464 256 464C238 464 224 449 224 432C224 415 238 400 256 400ZM432 224C449 224 464 239 464 256C464 274 449 288 432 288C414 288 400 274 400 256C400 239 414 224 432 224ZM112 256C112 274 97 288 80 288C62 288 48 274 48 256C48 239 62 224 80 224C97 224 112 239 112 256ZM96 128C96 111 110 96 128 96C145 96 160 111 160 128C160 146 145 160 128 160C110 160 96 146 96 128ZM352 384C352 367 366 352 384 352C401 352 416 367 416 384C416 402 401 416 384 416C366 416 352 402 352 384ZM352 128C352 111 366 96 384 96C401 96 416 111 416 128C416 146 401 160 384 160C366 160 352 146 352 128ZM160 384C160 402 145 416 128 416C110 416 96 402 96 384C96 367 110 352 128 352C145 352 160 367 160 384Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x44000000;
  FUN_18033fa10("volumetric brightness",*param_1 + 0x90,0,300,&DAT_1806f0260,0);
  return;
}



/* ===== 18034c250 FUN_18034c250 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18034c250(longlong *param_1)

{
  int iVar1;
  undefined4 local_24;
  
  DAT_1811074d0 = "icon_e0a1";
  DAT_1811074e0 = 0x43e00000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M32 32C14 32 0 47 0 64C0 82 14 96 32 96C49 96 64 82 64 64C64 47 49 32 32 32ZM128 32C110 32 96 47 96 64C96 82 110 96 128 96C145 96 160 82 160 64C160 47 145 32 128 32ZM192 64C192 82 206 96 224 96C241 96 256 82 256 64C256 47 241 32 224 32C206 32 192 47 192 64ZM320 32C302 32 288 47 288 64C288 82 302 96 320 96C337 96 352 82 352 64C352 47 337 32 320 32ZM384 64C384 82 398 96 416 96C433 96 448 82 448 64C448 47 433 32 416 32C398 32 384 47 384 64ZM374 298L246 170C234 157 213 157 201 170L73 298C60 310 60 331 73 343C85 356 106 356 118 343L192 270L192 336L192 448C192 465 206 480 224 480C241 480 256 465 256 448L256 336L256 270L329 343C341 356 362 356 374 343C387 331 387 310 374 298L374 298ZM374 298Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_24;
  FUN_18033fa10("distance",*param_1 + 0x1a0,0,0x96,&DAT_1807613a4,0);
  DAT_1811074d0 = "icon_e1c0";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M134 154C122 141 101 141 89 154C76 166 76 187 89 199L153 263C165 276 186 276 198 263C211 251 211 230 198 218L134 154L134 154ZM134 154ZM288 192C288 210 302 224 320 224C337 224 352 210 352 192L352 96C352 79 337 64 320 64C302 64 288 79 288 96L288 192ZM441 218C428 230 428 251 441 263C453 276 474 276 486 263L550 199C563 187 563 166 550 154C538 141 517 141 505 154L441 218L441 218ZM441 218ZM0 384C0 402 14 416 32 416L96 416C113 416 128 402 128 384C128 367 113 352 96 352L32 352C14 352 0 367 0 384ZM224 352C206 352 192 367 192 384C192 402 206 416 224 416L416 416C433 416 448 402 448 384C448 367 433 352 416 352L224 352ZM544 352C526 352 512 367 512 384C512 402 526 416 544 416L608 416C625 416 640 402 640 384C640 367 625 352 608 352L544 352Z\"/></svg>"
  ;
  DAT_1811074e0 = 0x44200000;
  _DAT_1811074e4 = local_24;
  FUN_18033e3a0("exponent",*param_1 + 0x1a4,0,DAT_1808ac864,"%.1fx",0);
  FUN_1802bc470();
  DAT_1811074d0 = "icon_f6c4";
  DAT_1811074e0 = 0x44200000;
  DAT_1811074d8 = &DAT_1807521e0;
  _DAT_1811074e4 = local_24;
  FUN_1802c0a60("override skybox fog",*param_1 + 0x1a8);
  DAT_1811074d0 = "icon_e4b5";
  DAT_1811074e0 = 0x44100000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M288 352C305 352 320 338 320 320L320 110L345 135C357 148 378 148 390 135C403 123 403 102 390 90L310 10C298 -3 277 -3 265 10L185 90C172 102 172 123 185 135C197 148 218 148 230 135L256 110L256 320C256 338 270 352 288 352ZM269 422C247 438 219 448 192 448C165 448 136 438 114 422L114 422C102 414 86 415 75 424C60 436 42 445 24 448C7 452 -3 470 0 487C4 504 22 515 39 511C63 505 84 494 97 486C126 501 158 512 191 512C223 512 252 502 272 493C278 490 283 487 287 485C292 487 297 490 303 493C323 502 352 512 383 512C416 512 449 501 478 486C491 494 512 505 536 511C553 515 571 504 575 487C579 470 568 452 551 448C533 445 514 436 500 424C489 415 473 414 461 422L461 422C439 438 410 448 383 448C356 448 328 438 306 422C295 414 280 414 269 422L269 422ZM191 192L47 192C21 192 0 214 0 240L0 425C5 422 11 420 17 419C30 415 44 409 54 400C76 381 109 380 132 397C150 409 172 417 191 417L191 192L191 192ZM576 240C576 214 554 192 528 192L384 192L384 417L384 417C403 417 425 409 443 397C467 380 499 381 521 400C531 409 545 416 558 419C564 420 570 422 576 426L576 240L576 240ZM576 240Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_24;
  FUN_1802c0a60("override fog height",*param_1 + 0x1a9);
  if (*(char *)(*param_1 + 0x1a9) != '\0') {
    FUN_1803e89e0("height");
    DAT_1811074d0 = "icon_e456";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M73 167L196 44C203 37 213 32 224 32C234 32 244 37 251 44L374 167C380 173 384 182 384 191C384 209 368 224 350 224L288 224L288 352C288 370 273 384 256 384L192 384C174 384 160 370 160 352L160 224L97 224C79 224 64 209 64 191C64 182 67 173 73 167L73 167ZM32 416C49 416 64 431 64 448C64 465 49 480 32 480C14 480 0 465 0 448C0 431 14 416 32 416ZM128 416C145 416 160 431 160 448C160 465 145 480 128 480C110 480 96 465 96 448C96 431 110 416 128 416ZM192 448C192 431 206 416 224 416C241 416 256 431 256 448C256 465 241 480 224 480C206 480 192 465 192 448L192 448ZM320 416C337 416 352 431 352 448C352 465 337 480 320 480C302 480 288 465 288 448C288 431 302 416 320 416ZM384 448C384 431 398 416 416 416C433 416 448 431 448 448C448 465 433 480 416 480C398 480 384 465 384 448Z\"/></svg>"
    ;
    _DAT_1811074e4 = local_24;
    DAT_1811074e0 = 0x43e00000;
    FUN_18033fa10("start",*param_1 + 0x1ac,0xfffffda8,600,&DAT_1806f0260,0);
    DAT_1811074d0 = "icon_e407";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M73 346L196 468C203 475 213 480 224 480C234 480 244 475 251 468L374 346C380 340 384 331 384 322C384 304 368 288 350 288L288 288L288 160C288 143 273 128 256 128L192 128C174 128 160 143 160 160L160 288L97 288C79 288 64 304 64 322C64 331 67 340 73 346L73 346ZM32 32C14 32 0 47 0 64C0 82 14 96 32 96C49 96 64 82 64 64C64 47 49 32 32 32ZM128 32C110 32 96 47 96 64C96 82 110 96 128 96C145 96 160 82 160 64C160 47 145 32 128 32ZM256 64C256 47 241 32 224 32C206 32 192 47 192 64C192 82 206 96 224 96C241 96 256 82 256 64ZM320 32C302 32 288 47 288 64C288 82 302 96 320 96C337 96 352 82 352 64C352 47 337 32 320 32ZM448 64C448 47 433 32 416 32C398 32 384 47 384 64C384 82 398 96 416 96C433 96 448 82 448 64Z\"/></svg>"
    ;
    _DAT_1811074e4 = local_24;
    DAT_1811074e0 = 0x43e00000;
    FUN_18033fa10(&DAT_1806f8df4,*param_1 + 0x1b0,0xfffffda8,600,&DAT_1806f0260,0);
    DAT_1811074d0 = "icon_e1c0";
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M134 154C122 141 101 141 89 154C76 166 76 187 89 199L153 263C165 276 186 276 198 263C211 251 211 230 198 218L134 154L134 154ZM134 154ZM288 192C288 210 302 224 320 224C337 224 352 210 352 192L352 96C352 79 337 64 320 64C302 64 288 79 288 96L288 192ZM441 218C428 230 428 251 441 263C453 276 474 276 486 263L550 199C563 187 563 166 550 154C538 141 517 141 505 154L441 218L441 218ZM441 218ZM0 384C0 402 14 416 32 416L96 416C113 416 128 402 128 384C128 367 113 352 96 352L32 352C14 352 0 367 0 384ZM224 352C206 352 192 367 192 384C192 402 206 416 224 416L416 416C433 416 448 402 448 384C448 367 433 352 416 352L224 352ZM544 352C526 352 512 367 512 384C512 402 526 416 544 416L608 416C625 416 640 402 640 384C640 367 625 352 608 352L544 352Z\"/></svg>"
    ;
    DAT_1811074e0 = 0x44200000;
    _DAT_1811074e4 = local_24;
    FUN_18033e3a0("exponent",*param_1 + 0x1b4,0,DAT_1808ac864,"%.1fx",0);
    iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar1 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
    }
  }
  return;
}



/* ===== 18034c530 FUN_18034c530 ===== */

void FUN_18034c530(longlong *param_1)

{
  FUN_18033fa10("strength",*param_1 + 0x248,0xffffff9c,100,&DAT_1806f0260,0);
  FUN_18033fa10("radius",*param_1 + 0x24c,0,100,&DAT_1806f0260,0);
  FUN_18033fa10("roundness",*param_1 + 0x250,0,100,&DAT_1806f0260,0);
  FUN_18033fa10("feather",*param_1 + 0x254,10,0x96,&DAT_1806f0260,0);
  return;
}



/* ===== 18034c610 FUN_18034c610 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18034c610(longlong *param_1)

{
  undefined4 local_34;
  
  DAT_1811074d0 = "icon_e29e";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 0C238 0 224 15 224 32L224 96C224 114 238 128 256 128C273 128 288 114 288 96L288 67C378 82 448 161 448 256C448 362 362 448 256 448C150 448 64 362 64 256C64 203 86 154 121 119C134 107 134 87 122 74C109 61 89 61 76 74C29 120 0 185 0 256C0 398 114 512 256 512C397 512 512 398 512 256C512 115 397 0 256 0ZM193 159C183 150 168 150 159 159C149 169 149 184 159 193L239 273C248 283 263 283 273 273C282 264 282 249 273 239L193 159Z\"/></svg>"
  ;
  DAT_1811074e0 = 0x44000000;
  _DAT_1811074e4 = local_34;
  FUN_18033e3a0("interval",*param_1 + 0x2f8,DAT_1808ac0c0,DAT_1808acb18,"%.1fs",0);
  DAT_1811074d0 = "icon_e29e";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 0C238 0 224 15 224 32L224 96C224 114 238 128 256 128C273 128 288 114 288 96L288 67C378 82 448 161 448 256C448 362 362 448 256 448C150 448 64 362 64 256C64 203 86 154 121 119C134 107 134 87 122 74C109 61 89 61 76 74C29 120 0 185 0 256C0 398 114 512 256 512C397 512 512 398 512 256C512 115 397 0 256 0ZM193 159C183 150 168 150 159 159C149 169 149 184 159 193L239 273C248 283 263 283 273 273C282 264 282 249 273 239L193 159Z\"/></svg>"
  ;
  DAT_1811074e0 = 0x44000000;
  _DAT_1811074e4 = local_34;
  FUN_18033e3a0("duration",*param_1 + 0x2fc,DAT_1808ac154,DAT_1808ac750,"%.1fs",0);
  DAT_1811074d0 = "icon_f028";
  DAT_1811074e0 = 0x44200000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M533 33C598 86 640 166 640 256C640 347 598 427 533 479C523 487 508 486 499 476C491 465 493 450 503 443C557 399 592 332 592 256C592 181 557 114 503 70C493 62 491 47 499 36C508 26 523 25 533 33L533 33ZM533 33ZM473 107C516 143 544 196 544 256C544 317 516 370 473 405C462 414 447 412 439 402C430 392 432 377 442 368C475 342 496 302 496 256C496 211 475 171 442 145C432 136 431 121 439 111C447 101 462 99 473 107L473 107ZM473 107ZM412 182C434 200 448 226 448 256C448 287 434 313 412 331C402 339 387 338 378 327C370 317 372 302 382 294C393 285 400 271 400 256C400 241 393 228 382 219C372 211 370 196 378 185C387 175 402 174 412 182L412 182ZM412 182ZM301 35C312 40 320 52 320 64L320 448C320 460 312 472 301 477C289 482 276 480 266 471L131 352L64 352C28 352 0 324 0 288L0 224C0 189 28 160 64 160L131 160L266 41C276 32 289 30 301 35Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_34;
  FUN_1802c0a60("lightning sound",*param_1 + 0x300);
  DAT_1811074d0 = "icon_f54c";
  DAT_1811074e0 = 0x44000000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M416 399C474 358 512 295 512 224C512 101 397 0 256 0C114 0 0 101 0 224C0 295 37 358 96 399C96 400 96 400 96 400L96 464C96 490 117 512 144 512L192 512L192 464C192 455 199 448 208 448C216 448 224 455 224 464L224 512L288 512L288 464C288 455 295 448 304 448C312 448 320 455 320 464L320 512L368 512C394 512 416 490 416 464L416 400C416 400 416 400 416 399ZM96 256C96 234 108 213 128 201C147 190 172 190 192 201C211 213 224 234 224 256C224 279 211 300 192 312C172 323 147 323 128 312C108 300 96 279 96 256ZM352 192C374 192 395 205 407 224C418 244 418 269 407 288C395 308 374 320 352 320C329 320 308 308 296 288C285 269 285 244 296 224C308 205 329 192 352 192Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_34;
  FUN_1802c0a60("spawn on kill",*param_1 + 0x301);
  return;
}



/* ===== 18034c780 FUN_18034c780 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18034c780(longlong *param_1)

{
  undefined4 local_14;
  
  DAT_1811074d0 = "icon_f063";
  DAT_1811074e0 = 0x43c00000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M169 470C181 483 202 483 214 470L374 311C387 299 387 278 374 266C362 253 341 253 329 266L224 371L224 64C224 47 209 32 192 32C174 32 160 47 160 64L160 371L54 266C42 253 21 253 9 266C-3 278 -3 299 9 311L169 470L169 470ZM169 470Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  FUN_18033fa10("rain speed",*param_1 + 0x324,10,100,&DAT_1806f0260,0);
  DAT_1811074d0 = "icon_f890";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M327 86C323 87 320 92 320 96C320 101 323 106 327 107L384 128L405 185C406 189 411 192 416 192C420 192 425 189 426 185L448 128L504 107C509 106 512 101 512 96C512 92 509 87 504 86L448 64L426 8C425 3 420 0 416 0C411 0 406 3 405 8L384 64L327 86ZM205 74C202 68 196 64 190 64C184 64 178 68 176 74L123 188L9 240C3 243 0 249 0 255C0 261 3 267 9 270L123 322L176 436C178 442 184 446 190 446C196 446 202 442 205 436L257 322L371 269C377 267 381 261 381 255C381 249 377 243 371 240L257 188L205 74ZM384 384L327 406C323 407 320 412 320 416C320 421 323 426 327 427L384 448L405 504C406 509 411 512 416 512C420 512 425 509 426 504L448 448L504 427C509 426 512 421 512 416C512 412 509 407 504 406L448 384L426 328C425 323 420 320 416 320C411 320 406 323 405 328L384 384Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x44000000;
  FUN_18033fa10("radius",*param_1 + 0x328,0x14,100,&DAT_1806f0260,0);
  DAT_1811074d0 = "icon_f75c";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M102 134C98 143 96 152 96 162C96 196 124 225 158 225L161 225C195 225 224 196 224 162C224 152 221 143 217 134L171 40C169 35 164 32 160 32C155 32 150 35 148 40L102 134ZM6 326C2 335 0 344 0 354C0 388 28 416 62 416L65 416C99 416 128 388 128 354C128 344 125 335 121 326L75 232C73 227 68 224 63 224C59 224 54 227 52 232L6 326L6 326ZM6 326ZM307 135L209 295C198 314 191 336 191 358C191 426 246 480 313 480L325 480C393 480 447 426 447 358C447 336 441 314 429 295L332 135C329 131 324 128 319 128C314 128 310 131 307 135Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x43e00000;
  FUN_18033fa10("density",*param_1 + 0x32c,10,100,&DAT_1806f0260,0);
  DAT_1811074d0 = "icon_f05b";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 0C273 0 288 15 288 32L288 43C381 57 455 131 469 224L480 224C497 224 512 239 512 256C512 274 497 288 480 288L469 288C455 382 381 455 288 469L288 480C288 497 273 512 256 512C238 512 224 497 224 480L224 469C130 455 56 382 42 288L32 288C14 288 0 274 0 256C0 239 14 224 32 224L42 224C56 131 130 57 224 43L224 32C224 15 238 0 256 0ZM107 288C119 347 165 393 224 405L224 384C224 367 238 352 256 352C273 352 288 367 288 384L288 405C346 393 392 347 404 288L384 288C366 288 352 274 352 256C352 239 366 224 384 224L404 224C392 166 346 120 288 108L288 128C288 146 273 160 256 160C238 160 224 146 224 128L224 108C165 120 119 166 107 224L128 224C145 224 160 239 160 256C160 274 145 288 128 288L107 288ZM256 224C273 224 288 239 288 256C288 274 273 288 256 288C238 288 224 274 224 256C224 239 238 224 256 224Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x44000000;
  FUN_18033fa10("center bias",*param_1 + 0x330,0,100,&DAT_1806f0260,0);
  DAT_1811074d0 = "icon_f028";
  DAT_1811074e0 = 0x44200000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M533 33C598 86 640 166 640 256C640 347 598 427 533 479C523 487 508 486 499 476C491 465 493 450 503 443C557 399 592 332 592 256C592 181 557 114 503 70C493 62 491 47 499 36C508 26 523 25 533 33L533 33ZM533 33ZM473 107C516 143 544 196 544 256C544 317 516 370 473 405C462 414 447 412 439 402C430 392 432 377 442 368C475 342 496 302 496 256C496 211 475 171 442 145C432 136 431 121 439 111C447 101 462 99 473 107L473 107ZM473 107ZM412 182C434 200 448 226 448 256C448 287 434 313 412 331C402 339 387 338 378 327C370 317 372 302 382 294C393 285 400 271 400 256C400 241 393 228 382 219C372 211 370 196 378 185C387 175 402 174 412 182L412 182ZM412 182ZM301 35C312 40 320 52 320 64L320 448C320 460 312 472 301 477C289 482 276 480 266 471L131 352L64 352C28 352 0 324 0 288L0 224C0 189 28 160 64 160L131 160L266 41C276 32 289 30 301 35Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  FUN_1802c0a60("rain sound",*param_1 + 0x334);
  return;
}



/* ===== 18034c960 FUN_18034c960 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18034c960(longlong *param_1)

{
  undefined4 local_14;
  
  DAT_1811074d0 = "icon_f063";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M169 470C181 483 202 483 214 470L374 311C387 299 387 278 374 266C362 253 341 253 329 266L224 371L224 64C224 47 209 32 192 32C174 32 160 47 160 64L160 371L54 266C42 253 21 253 9 266C-3 278 -3 299 9 311L169 470L169 470ZM169 470Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x43c00000;
  FUN_18033fa10("fall speed",*param_1 + 0x358,0x14,100,&DAT_1806f0260,0);
  DAT_1811074d0 = "icon_f890";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M327 86C323 87 320 92 320 96C320 101 323 106 327 107L384 128L405 185C406 189 411 192 416 192C420 192 425 189 426 185L448 128L504 107C509 106 512 101 512 96C512 92 509 87 504 86L448 64L426 8C425 3 420 0 416 0C411 0 406 3 405 8L384 64L327 86ZM205 74C202 68 196 64 190 64C184 64 178 68 176 74L123 188L9 240C3 243 0 249 0 255C0 261 3 267 9 270L123 322L176 436C178 442 184 446 190 446C196 446 202 442 205 436L257 322L371 269C377 267 381 261 381 255C381 249 377 243 371 240L257 188L205 74ZM384 384L327 406C323 407 320 412 320 416C320 421 323 426 327 427L384 448L405 504C406 509 411 512 416 512C420 512 425 509 426 504L448 448L504 427C509 426 512 421 512 416C512 412 509 407 504 406L448 384L426 328C425 323 420 320 416 320C411 320 406 323 405 328L384 384Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x44000000;
  FUN_18033fa10("radius",*param_1 + 0x35c,0x14,200,&DAT_1806f0260,0);
  DAT_1811074d0 = "icon_f2dc";
  DAT_1811074d8 = &DAT_180752cf0;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x43e00000;
  FUN_18033fa10("density",*param_1 + 0x360,10,100,&DAT_1806f0260,0);
  return;
}



/* ===== 18034caa0 FUN_18034caa0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18034caa0(longlong *param_1)

{
  undefined4 local_14;
  
  DAT_1811074d0 = "icon_f106";
  DAT_1811074e0 = 0x43e00000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M201 138C213 125 234 125 246 138L406 298C419 310 419 331 406 343C394 356 373 356 361 343L224 206L86 343C74 356 53 356 41 343C28 331 28 310 41 298L201 138L201 138ZM201 138Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  FUN_1802c0a60("follow recoil",*param_1 + 0x7c);
  DAT_1811074d0 = "icon_e59f";
  DAT_1811074e0 = 0x44000000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M445 224L384 224C366 224 352 239 352 256C352 274 366 288 384 288L445 288C431 369 368 432 288 446L288 384C288 367 273 352 256 352C238 352 224 367 224 384L224 446C143 432 80 369 66 288L127 288C145 288 159 274 159 256C159 239 145 224 127 224L66 224C80 144 143 81 224 67L224 128C224 146 238 160 256 160C273 160 288 146 288 128L288 67C368 81 431 144 445 224ZM0 256C0 348 48 432 128 477C207 523 304 523 384 477C463 432 512 348 512 256C512 165 463 81 384 35C304 -11 207 -11 128 35C48 81 0 165 0 256Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  FUN_1802c0a60("only in scope",*param_1 + 0x7d);
  DAT_1811074d0 = "icon_e665";
  DAT_1811074e0 = 0x44000000;
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M0 256C0 243 10 232 24 232L488 232C501 232 512 243 512 256C512 270 501 280 488 280L24 280C10 280 0 270 0 256ZM98 20C103 8 115 0 128 0L384 0C396 0 408 8 413 20C418 32 415 46 406 55L278 183C266 196 245 196 233 183L105 55C96 46 93 32 98 20L98 20ZM98 20ZM98 492C93 480 96 466 105 457L233 330C245 317 266 317 278 330L406 457C415 466 418 480 413 492C408 504 396 512 383 512L127 512C114 512 103 504 98 492L98 492ZM98 492Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  FUN_1802c0a60("invert fade",*param_1 + 0x7e);
  DAT_1811074d0 = "icon_f042";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M448 256C448 150 362 64 256 64L256 448C362 448 448 362 448 256ZM0 256C0 165 48 81 128 35C207 -11 304 -11 384 35C463 81 512 165 512 256C512 348 463 432 384 477C304 523 207 523 128 477C48 432 0 348 0 256Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x44000000;
  FUN_18033fa10("fade offset",*param_1 + 0x80,5,100,&DAT_1806f0260,0);
  return;
}



/* ===== 18034cc40 FUN_18034cc40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18034cc40(longlong *param_1)

{
  undefined4 local_44;
  
  DAT_1811074d0 = "icon_f88e";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M160 32C169 32 177 36 183 43L271 139C283 152 282 172 269 184C256 196 236 195 224 182L192 147L192 448C192 465 177 480 160 480C142 480 128 465 128 448L128 147L95 182C83 195 63 196 50 184C37 172 36 152 48 139L136 43C142 36 150 32 159 32L160 32ZM320 368C320 342 341 320 368 320L432 320C458 320 480 342 480 368L480 432C480 458 458 480 432 480L368 480C341 480 320 458 320 432L320 368ZM368 32L496 32C522 32 544 54 544 80L544 208C544 235 522 256 496 256L368 256C341 256 320 235 320 208L320 80C320 54 341 32 368 32Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_44;
  DAT_1811074e0 = 0x44100000;
  FUN_18033fa10("scale",*param_1 + 0x24,0x19,200,&DAT_1806f0260,0);
  DAT_1811074d0 = "icon_e105";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M1 232C6 180 26 132 58 93L104 139C83 165 69 197 65 232L1 232L1 232ZM138 105L92 59C131 27 179 6 231 2L231 66C196 70 164 84 138 105ZM279 447C315 443 347 429 373 408L419 453C380 485 332 506 279 510L279 447ZM407 374C428 348 442 315 446 280L510 280C505 333 485 381 453 420L407 374L407 374ZM407 374ZM92 453L138 408C164 429 196 443 231 447L231 510C179 506 131 485 92 453L92 453ZM92 453ZM58 420C26 381 5 333 1 280L65 280C69 316 83 348 104 374L58 420L58 420ZM419 59L373 105C347 84 315 70 280 66L280 2C332 6 380 27 419 59ZM407 139L453 93C485 132 505 180 510 233L446 233C442 197 428 165 407 139L407 139ZM407 139Z\"/></svg>"
  ;
  DAT_1811074e0 = 0x44000000;
  _DAT_1811074e4 = local_44;
  FUN_18033fa10("rounding",*param_1 + 0x28,0,100,&DAT_1806f0260,0);
  DAT_1811074d0 = "icon_f042";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M448 256C448 150 362 64 256 64L256 448C362 448 448 362 448 256ZM0 256C0 165 48 81 128 35C207 -11 304 -11 384 35C463 81 512 165 512 256C512 348 463 432 384 477C304 523 207 523 128 477C48 432 0 348 0 256Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_44;
  DAT_1811074e0 = 0x44000000;
  FUN_18033fa10("fill opacity",*param_1 + 0x2c,0,100,&DAT_1806f0260,0);
  DAT_1811074d0 = "icon_e105";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M1 232C6 180 26 132 58 93L104 139C83 165 69 197 65 232L1 232L1 232ZM138 105L92 59C131 27 179 6 231 2L231 66C196 70 164 84 138 105ZM279 447C315 443 347 429 373 408L419 453C380 485 332 506 279 510L279 447ZM407 374C428 348 442 315 446 280L510 280C505 333 485 381 453 420L407 374L407 374ZM407 374ZM92 453L138 408C164 429 196 443 231 447L231 510C179 506 131 485 92 453L92 453ZM92 453ZM58 420C26 381 5 333 1 280L65 280C69 316 83 348 104 374L58 420L58 420ZM419 59L373 105C347 84 315 70 280 66L280 2C332 6 380 27 419 59ZM407 139L453 93C485 132 505 180 510 233L446 233C442 197 428 165 407 139L407 139ZM407 139Z\"/></svg>"
  ;
  DAT_1811074e0 = 0x44000000;
  _DAT_1811074e4 = local_44;
  FUN_18033fa10("outline opacity",*param_1 + 0x30,0,100,&DAT_1806f0260,0);
  if (0.0 < *(float *)(*param_1 + 0x38)) {
    DAT_1811074d0 = "icon_e1c0";
    DAT_1811074e0 = 0x44200000;
    DAT_1811074d8 =
         "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M134 154C122 141 101 141 89 154C76 166 76 187 89 199L153 263C165 276 186 276 198 263C211 251 211 230 198 218L134 154L134 154ZM134 154ZM288 192C288 210 302 224 320 224C337 224 352 210 352 192L352 96C352 79 337 64 320 64C302 64 288 79 288 96L288 192ZM441 218C428 230 428 251 441 263C453 276 474 276 486 263L550 199C563 187 563 166 550 154C538 141 517 141 505 154L441 218L441 218ZM441 218ZM0 384C0 402 14 416 32 416L96 416C113 416 128 402 128 384C128 367 113 352 96 352L32 352C14 352 0 367 0 384ZM224 352C206 352 192 367 192 384C192 402 206 416 224 416L416 416C433 416 448 402 448 384C448 367 433 352 416 352L224 352ZM544 352C526 352 512 367 512 384C512 402 526 416 544 416L608 416C625 416 640 402 640 384C640 367 625 352 608 352L544 352Z\"/></svg>"
    ;
    _DAT_1811074e4 = local_44;
    FUN_18033fa10("glow opacity",*param_1 + 0x34,0,100,&DAT_1806f0260,0);
  }
  DAT_1811074d0 = "icon_f185";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M361 2C366 4 370 8 371 14L391 121L498 141C504 142 508 146 510 151C512 156 512 162 509 166L446 256L509 347C512 351 512 357 510 362C508 367 504 371 498 372L391 391L371 498C370 504 366 508 361 510C356 512 350 512 346 509L256 447L165 509C161 512 155 512 150 510C145 508 141 504 140 498L121 391L13 372C7 371 3 367 1 362C0 357 0 351 2 347L65 256L2 166C0 162 0 156 1 151C3 146 7 142 13 141L121 121L140 14C141 8 145 4 150 2C155 0 161 0 165 3L256 66L346 3C350 0 356 0 361 2ZM361 2ZM160 256C160 222 178 191 208 173C237 156 274 156 304 173C333 191 352 222 352 256C352 291 333 322 304 340C274 357 237 357 208 340C178 322 160 291 160 256ZM384 256C384 211 359 169 320 146C280 123 231 123 192 146C152 169 128 211 128 256C128 302 152 344 192 367C231 390 280 390 320 367C359 344 384 302 384 256Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_44;
  DAT_1811074e0 = 0x44000000;
  FUN_18033e3a0(&DAT_1806f83d8,*param_1 + 0x38,0,DAT_1808ac980,"%.0f px",0);
  DAT_1811074d0 = "icon_e29e";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 0C238 0 224 15 224 32L224 96C224 114 238 128 256 128C273 128 288 114 288 96L288 67C378 82 448 161 448 256C448 362 362 448 256 448C150 448 64 362 64 256C64 203 86 154 121 119C134 107 134 87 122 74C109 61 89 61 76 74C29 120 0 185 0 256C0 398 114 512 256 512C397 512 512 398 512 256C512 115 397 0 256 0ZM193 159C183 150 168 150 159 159C149 169 149 184 159 193L239 273C248 283 263 283 273 273C282 264 282 249 273 239L193 159Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_44;
  DAT_1811074e0 = 0x44000000;
  FUN_18033e3a0("duration",*param_1 + 0x3c,DAT_1808ac1f4,DAT_1808ac864,"%.1fs",0);
  return;
}



/* ===== 18034cee0 FUN_18034cee0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18034cee0(longlong *param_1)

{
  undefined4 local_14;
  
  DAT_1811074d0 = "icon_e105";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M1 232C6 180 26 132 58 93L104 139C83 165 69 197 65 232L1 232L1 232ZM138 105L92 59C131 27 179 6 231 2L231 66C196 70 164 84 138 105ZM279 447C315 443 347 429 373 408L419 453C380 485 332 506 279 510L279 447ZM407 374C428 348 442 315 446 280L510 280C505 333 485 381 453 420L407 374L407 374ZM407 374ZM92 453L138 408C164 429 196 443 231 447L231 510C179 506 131 485 92 453L92 453ZM92 453ZM58 420C26 381 5 333 1 280L65 280C69 316 83 348 104 374L58 420L58 420ZM419 59L373 105C347 84 315 70 280 66L280 2C332 6 380 27 419 59ZM407 139L453 93C485 132 505 180 510 233L446 233C442 197 428 165 407 139L407 139ZM407 139Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x44000000;
  FUN_18033e3a0("radius",*param_1 + 100,DAT_1808ac34c,DAT_1808ac864,"%.1f px",0);
  DAT_1811074d0 = "icon_f890";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M327 86C323 87 320 92 320 96C320 101 323 106 327 107L384 128L405 185C406 189 411 192 416 192C420 192 425 189 426 185L448 128L504 107C509 106 512 101 512 96C512 92 509 87 504 86L448 64L426 8C425 3 420 0 416 0C411 0 406 3 405 8L384 64L327 86ZM205 74C202 68 196 64 190 64C184 64 178 68 176 74L123 188L9 240C3 243 0 249 0 255C0 261 3 267 9 270L123 322L176 436C178 442 184 446 190 446C196 446 202 442 205 436L257 322L371 269C377 267 381 261 381 255C381 249 377 243 371 240L257 188L205 74ZM384 384L327 406C323 407 320 412 320 416C320 421 323 426 327 427L384 448L405 504C406 509 411 512 416 512C420 512 425 509 426 504L448 448L504 427C509 426 512 421 512 416C512 412 509 407 504 406L448 384L426 328C425 323 420 320 416 320C411 320 406 323 405 328L384 384Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x44000000;
  FUN_18033fa10("count",*param_1 + 0x68,1,300,&DAT_1806dfdd8,0);
  DAT_1811074d0 = "icon_e365";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M32 24C32 11 42 0 56 0C69 0 80 11 80 24L80 488C80 501 69 512 56 512C42 512 32 501 32 488L32 24ZM160 144C160 118 181 96 208 96L304 96C330 96 352 118 352 144L352 368C352 395 330 416 304 416L208 416C181 416 160 395 160 368L160 144ZM456 0C469 0 480 11 480 24L480 488C480 501 469 512 456 512C442 512 432 501 432 488L432 24C432 11 442 0 456 0Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x44000000;
  FUN_18033fa10("spread",*param_1 + 0x6c,0x32,300,"%d u/s",0);
  DAT_1811074d0 = "icon_f062";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 384 512\" width=\"384\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M214 42C202 29 181 29 169 42L9 202C-3 214 -3 235 9 247C21 260 42 260 54 247L160 142L160 448C160 465 174 480 192 480C209 480 224 465 224 448L224 142L329 247C341 260 362 260 374 247C387 235 387 214 374 202L214 42L214 42ZM214 42Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x43c00000;
  FUN_18033fa10("height",*param_1 + 0x70,0,800,&DAT_1807613a4,0);
  DAT_1811074d0 = "icon_e29e";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 0C238 0 224 15 224 32L224 96C224 114 238 128 256 128C273 128 288 114 288 96L288 67C378 82 448 161 448 256C448 362 362 448 256 448C150 448 64 362 64 256C64 203 86 154 121 119C134 107 134 87 122 74C109 61 89 61 76 74C29 120 0 185 0 256C0 398 114 512 256 512C397 512 512 398 512 256C512 115 397 0 256 0ZM193 159C183 150 168 150 159 159C149 169 149 184 159 193L239 273C248 283 263 283 273 273C282 264 282 249 273 239L193 159Z\"/></svg>"
  ;
  _DAT_1811074e4 = local_14;
  DAT_1811074e0 = 0x44000000;
  FUN_18033e3a0("lifetime",*param_1 + 0x74,DAT_1808ac34c,DAT_1808ac864,"%.1fs",0);
  return;
}



/* ===== 18034d0e0 FUN_18034d0e0 ===== */

void FUN_18034d0e0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar4 = (undefined8 *)*param_1;
  if ((ulonglong)(param_1[2] - (longlong)puVar4 >> 5) < param_3) {
    FUN_18006bb60(param_1,param_3);
    lVar3 = *param_1;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      FUN_180024b50(lVar3,param_2);
      lVar3 = lVar3 + 0x20;
      param_2 = param_2 + 4;
    }
    param_1[1] = lVar3;
    return;
  }
  puVar1 = (undefined8 *)param_1[1];
  uVar5 = (longlong)puVar1 - (longlong)puVar4 >> 5;
  if (uVar5 < param_3) {
    if (puVar4 != puVar1) {
      do {
        if (puVar4 != param_2) {
          if ((ulonglong)param_2[3] < 0x10) {
            puVar1 = param_2;
          }
          else {
            puVar1 = (undefined8 *)*param_2;
          }
          FUN_180029840(puVar4,puVar1,param_2[2]);
        }
        puVar4 = puVar4 + 4;
        param_2 = param_2 + 4;
        puVar1 = (undefined8 *)param_1[1];
      } while (puVar4 != puVar1);
    }
    for (lVar3 = param_3 - uVar5; lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_180024b50(puVar1,param_2);
      puVar1 = puVar1 + 4;
      param_2 = param_2 + 4;
    }
  }
  else {
    puVar1 = puVar4 + param_3 * 4;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if (puVar4 != param_2) {
        if ((ulonglong)param_2[3] < 0x10) {
          puVar2 = param_2;
        }
        else {
          puVar2 = (undefined8 *)*param_2;
        }
        FUN_180029840(puVar4,puVar2,param_2[2]);
      }
      puVar4 = puVar4 + 4;
      param_2 = param_2 + 4;
    }
    puVar4 = (undefined8 *)param_1[1];
    for (puVar2 = puVar1; puVar2 != puVar4; puVar2 = puVar2 + 4) {
      FUN_18000f890(puVar2);
    }
  }
  param_1[1] = (longlong)puVar1;
  return;
}



/* ===== 18034d260 FUN_18034d260 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18034d260(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 ***pppuVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  undefined8 ***pppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong _Size;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 ***local_88;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if ((param_1 == param_2) || (local_a8 = param_1 + 10, local_a8 == param_2)) {
LAB_18034d4ba:
    return param_2;
  }
  local_98 = param_1;
  local_90 = param_2;
LAB_18034d2d0:
  puVar8 = local_a8;
  local_80 = local_a8[1];
  local_a0 = local_a8[3];
  pppuVar1 = (undefined8 ***)*local_a8;
  uVar2 = local_a8[2];
  *(undefined1 *)local_a8 = 0;
  local_a8[2] = 0;
  local_a8[3] = 0xf;
  local_58 = local_a8[6];
  local_60 = local_a8[5];
  local_68 = local_a8[4];
  local_a8[6] = 0;
  local_a8[5] = 0;
  local_a8[4] = 0;
  local_50 = local_a8[7];
  local_a8[7] = 0;
  local_48 = local_a8[8];
  local_a8[8] = 0;
  local_40 = local_a8[9];
  local_a8[9] = 0;
  uVar3 = param_1[2];
  if ((ulonglong)param_1[3] < 0x10) {
    puVar7 = param_1;
  }
  else {
    puVar7 = (undefined8 *)*param_1;
  }
  pppuVar6 = &local_88;
  if (0xf < local_a0) {
    pppuVar6 = pppuVar1;
  }
  uVar9 = uVar2;
  if (uVar3 < uVar2) {
    uVar9 = uVar3;
  }
  local_88 = pppuVar1;
  local_78 = uVar2;
  local_70 = local_a0;
  iVar4 = memcmp(pppuVar6,puVar7,uVar9);
  uVar9 = local_a0;
  if (iVar4 == 0) {
    if (uVar3 <= uVar2) goto LAB_18034d39d;
  }
  else {
    cVar5 = -1;
    if (-1 < iVar4) {
      cVar5 = '\x01';
    }
    if (-1 < cVar5) {
LAB_18034d39d:
      param_1 = puVar8;
      do {
        puVar8 = param_1 + -10;
        uVar3 = param_1[-8];
        if ((ulonglong)param_1[-7] < 0x10) {
          puVar7 = puVar8;
        }
        else {
          puVar7 = (undefined8 *)*puVar8;
        }
        pppuVar6 = &local_88;
        if (0xf < uVar9) {
          pppuVar6 = pppuVar1;
        }
        _Size = uVar2;
        if (uVar3 < uVar2) {
          _Size = uVar3;
        }
        iVar4 = memcmp(pppuVar6,puVar7,_Size);
        if (iVar4 == 0) {
          if (uVar3 <= uVar2) goto LAB_18034d41a;
        }
        else {
          cVar5 = -1;
          if (-1 < iVar4) {
            cVar5 = '\x01';
          }
          if (-1 < cVar5) goto LAB_18034d41a;
        }
        FUN_18002ba60(param_1,puVar8);
        FUN_180351790(param_1 + 4,param_1 + -6);
        param_1 = puVar8;
      } while( true );
    }
  }
  FUN_180351710(param_1,puVar8,puVar8 + 10);
  puVar7 = param_1;
  goto LAB_18034d429;
LAB_18034d41a:
  puVar8 = local_a8;
  puVar7 = local_98;
LAB_18034d429:
  FUN_18002ba60(param_1,&local_88);
  FUN_180351790(param_1 + 4,&local_68);
  FUN_18034fab0(&local_50);
  FUN_1800288b0(&local_68);
  FUN_18000f890(&local_88);
  local_a8 = puVar8 + 10;
  param_2 = local_90;
  param_1 = puVar7;
  if (local_a8 == local_90) goto LAB_18034d4ba;
  goto LAB_18034d2d0;
}



/* ===== 18034d510 FUN_18034d510 ===== */

void FUN_18034d510(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_18034d260();
    return;
  }
  uVar1 = param_3 >> 1;
  lVar2 = param_3 - uVar1;
  lVar3 = lVar2 * 0x50 + param_1;
  if (param_5 < lVar2) {
    FUN_18034d510(param_1,lVar3,lVar2,param_4,param_5,param_6);
    FUN_18034d510(lVar3,param_2,uVar1,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_180351800();
    FUN_180351800(lVar3,param_2,uVar1,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_1803519b0(param_1,lVar3,param_2,lVar2,uVar1,param_4,param_5,param_6);
  return;
}



/* ===== 18034d610 FUN_18034d610 ===== */

undefined8 * FUN_18034d610(float *param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  float fVar9;
  
  uVar7 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(uVar7 & *(ulonglong *)(param_1 + 0xc));
  lVar3 = *(longlong *)(param_1 + 6);
  puVar5 = *(undefined8 **)(lVar3 + 8 + (longlong)puVar6 * 0x10);
  pfVar1 = param_1 + 2;
  puVar8 = *(undefined8 **)pfVar1;
  if (puVar5 != puVar8) {
    puVar6 = *(undefined8 **)(lVar3 + (longlong)puVar6 * 0x10);
    iVar2 = *(int *)(puVar5 + 2);
    puVar8 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      iVar2 = *(int *)(puVar8 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x20,puVar6,lVar3,param_4,pfVar1,0);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  *(undefined8 *)((longlong)puVar5 + 0x14) = *param_4;
  fVar9 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar9 && fVar9 != *param_1) {
    FUN_180355780(param_1);
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar8 = *(undefined8 **)pfVar1;
    if (puVar6 != puVar8) {
      iVar2 = *(int *)(puVar6 + 2);
      puVar8 = puVar6;
      while (*(int *)(puVar5 + 2) != iVar2) {
        if (puVar8 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_18034d7b5;
        puVar8 = (undefined8 *)puVar8[1];
        iVar2 = *(int *)(puVar8 + 2);
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_18034d7b5:
  puVar6 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar8;
  puVar5[1] = puVar6;
  *puVar6 = puVar5;
  puVar8[1] = puVar5;
  lVar3 = *(longlong *)(param_1 + 6);
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  puVar4 = *(undefined8 **)(lVar3 + uVar7 * 0x10);
  if (puVar4 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar3 + uVar7 * 0x10) = puVar5;
  }
  else {
    if (puVar4 == puVar8) {
      *(undefined8 **)(lVar3 + uVar7 * 0x10) = puVar5;
      goto LAB_18034d805;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar7 * 0x10) != puVar6) goto LAB_18034d805;
  }
  *(undefined8 **)(lVar3 + 8 + uVar7 * 0x10) = puVar5;
LAB_18034d805:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18034d820 FUN_18034d820 ===== */

undefined8 * FUN_18034d820(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  puVar7 = (undefined8 *)(DAT_1811078a0 & uVar8);
  puVar4 = *(undefined8 **)(DAT_181107888 + 8 + (longlong)puVar7 * 0x10);
  puVar9 = DAT_181107878;
  if (puVar4 != DAT_181107878) {
    puVar7 = *(undefined8 **)(DAT_181107888 + (longlong)puVar7 * 0x10);
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
  if (DAT_181107880 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x38,puVar7,DAT_181107888,param_4,&DAT_181107878,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0xf;
  *(undefined1 *)(puVar4 + 3) = 0;
  uVar3 = DAT_1811078a8;
  if (DAT_181107870 < (float)(DAT_181107880 + 1) / (float)DAT_1811078a8) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_181107880 + 1) / DAT_181107870);
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
    FUN_1803583a0(uVar6,uVar10);
    puVar7 = *(undefined8 **)(DAT_181107888 + 8 + (DAT_1811078a0 & uVar8) * 0x10);
    puVar9 = DAT_181107878;
    if (puVar7 != DAT_181107878) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar9 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar9 == *(undefined8 **)(DAT_181107888 + (DAT_1811078a0 & uVar8) * 0x10))
        goto LAB_18034da68;
        puVar9 = (undefined8 *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_18034da68:
  puVar7 = (undefined8 *)puVar9[1];
  DAT_181107880 = DAT_181107880 + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar9[1] = puVar4;
  lVar5 = DAT_181107888;
  uVar8 = DAT_1811078a0 & uVar8;
  puVar2 = *(undefined8 **)(DAT_181107888 + uVar8 * 0x10);
  if (puVar2 == DAT_181107878) {
    *(undefined8 **)(DAT_181107888 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar9) {
      *(undefined8 **)(DAT_181107888 + uVar8 * 0x10) = puVar4;
      goto LAB_18034dac7;
    }
    if (*(undefined8 **)(DAT_181107888 + 8 + uVar8 * 0x10) != puVar7) goto LAB_18034dac7;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
LAB_18034dac7:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18034daf0 FUN_18034daf0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18034daf0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  uVar5 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar4 = (undefined8 *)(DAT_180ca18f0 & uVar5);
  puVar3 = *(undefined8 **)(DAT_180ca18d8 + 8 + (longlong)puVar4 * 0x10);
  puVar6 = DAT_180ca18c8;
  if (puVar3 != DAT_180ca18c8) {
    puVar4 = *(undefined8 **)(DAT_180ca18d8 + (longlong)puVar4 * 0x10);
    lVar1 = puVar3[2];
    puVar6 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar1) {
        *param_2 = puVar6;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar6 == puVar4) break;
      puVar6 = (undefined8 *)puVar6[1];
      lVar1 = puVar6[2];
    }
  }
  if (DAT_180ca18d0 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x20,puVar4,DAT_180ca18d8,param_4,&DAT_180ca18c8,0);
  puVar3[2] = *(undefined8 *)param_3;
  *(undefined1 *)(puVar3 + 3) = 0;
  if (_DAT_180ca18c0 < (float)(DAT_180ca18d0 + 1) / (float)DAT_180ca18f8) {
    FUN_180027b20(&DAT_180ca18c0);
    puVar4 = *(undefined8 **)(DAT_180ca18d8 + 8 + (DAT_180ca18f0 & uVar5) * 0x10);
    puVar6 = DAT_180ca18c8;
    if (puVar4 != DAT_180ca18c8) {
      lVar1 = puVar4[2];
      puVar6 = puVar4;
      while (puVar3[2] != lVar1) {
        if (puVar6 == *(undefined8 **)(DAT_180ca18d8 + (DAT_180ca18f0 & uVar5) * 0x10))
        goto LAB_18034dce9;
        puVar6 = (undefined8 *)puVar6[1];
        lVar1 = puVar6[2];
      }
      puVar6 = (undefined8 *)*puVar6;
    }
  }
LAB_18034dce9:
  puVar4 = (undefined8 *)puVar6[1];
  DAT_180ca18d0 = DAT_180ca18d0 + 1;
  *puVar3 = puVar6;
  puVar3[1] = puVar4;
  *puVar4 = puVar3;
  puVar6[1] = puVar3;
  lVar1 = DAT_180ca18d8;
  uVar5 = DAT_180ca18f0 & uVar5;
  puVar2 = *(undefined8 **)(DAT_180ca18d8 + uVar5 * 0x10);
  if (puVar2 == DAT_180ca18c8) {
    *(undefined8 **)(DAT_180ca18d8 + uVar5 * 0x10) = puVar3;
  }
  else {
    if (puVar2 == puVar6) {
      *(undefined8 **)(DAT_180ca18d8 + uVar5 * 0x10) = puVar3;
      goto LAB_18034dd48;
    }
    if (*(undefined8 **)(DAT_180ca18d8 + 8 + uVar5 * 0x10) != puVar4) goto LAB_18034dd48;
  }
  *(undefined8 **)(lVar1 + 8 + uVar5 * 0x10) = puVar3;
LAB_18034dd48:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18034dd70 FUN_18034dd70 ===== */

undefined8 * FUN_18034dd70(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  float fVar11;
  
  uVar9 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar7 = (undefined8 *)(DAT_1811076b0 & uVar9);
  puVar4 = *(undefined8 **)(DAT_181107698 + 8 + (longlong)puVar7 * 0x10);
  puVar10 = DAT_181107688;
  if (puVar4 != DAT_181107688) {
    puVar7 = *(undefined8 **)(DAT_181107698 + (longlong)puVar7 * 0x10);
    iVar1 = *(int *)(puVar4 + 2);
    puVar10 = puVar4;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar10;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar10 == puVar7) break;
      puVar10 = (undefined8 *)puVar10[1];
      iVar1 = *(int *)(puVar10 + 2);
    }
  }
  if (DAT_181107690 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x18,puVar7,DAT_181107698,param_4,&DAT_181107688,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  *(undefined1 *)((longlong)puVar4 + 0x14) = 0;
  uVar3 = DAT_1811076b8;
  if (DAT_181107680 < (float)(DAT_181107690 + 1) / (float)DAT_1811076b8) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_181107690 + 1) / DAT_181107680);
    lVar5 = 0;
    if ((DAT_1808acd00 <= fVar11) && (fVar11 = fVar11 - DAT_1808acd00, fVar11 < DAT_1808acd00)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar5)) {
      uVar6 = (longlong)fVar11 + lVar5;
    }
    uVar8 = uVar3;
    if ((uVar3 < uVar6) && ((0x1ff < uVar3 || (uVar8 = uVar3 * 8, uVar3 * 8 < uVar6)))) {
      uVar8 = uVar6;
    }
    FUN_180358570(uVar6,uVar8);
    puVar7 = *(undefined8 **)(DAT_181107698 + 8 + (DAT_1811076b0 & uVar9) * 0x10);
    puVar10 = DAT_181107688;
    if (puVar7 != DAT_181107688) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar10 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar10 == *(undefined8 **)(DAT_181107698 + (DAT_1811076b0 & uVar9) * 0x10))
        goto LAB_18034df9a;
        puVar10 = (undefined8 *)puVar10[1];
        iVar1 = *(int *)(puVar10 + 2);
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_18034df9a:
  puVar7 = (undefined8 *)puVar10[1];
  DAT_181107690 = DAT_181107690 + 1;
  *puVar4 = puVar10;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar10[1] = puVar4;
  lVar5 = DAT_181107698;
  uVar9 = DAT_1811076b0 & uVar9;
  puVar2 = *(undefined8 **)(DAT_181107698 + uVar9 * 0x10);
  if (puVar2 == DAT_181107688) {
    *(undefined8 **)(DAT_181107698 + uVar9 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar10) {
      *(undefined8 **)(DAT_181107698 + uVar9 * 0x10) = puVar4;
      goto LAB_18034dff9;
    }
    if (*(undefined8 **)(DAT_181107698 + 8 + uVar9 * 0x10) != puVar7) goto LAB_18034dff9;
  }
  *(undefined8 **)(lVar5 + 8 + uVar9 * 0x10) = puVar4;
LAB_18034dff9:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18034e020 FUN_18034e020 ===== */

void FUN_18034e020(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    do {
      FUN_18000f890(param_1 + 0x98);
      FUN_18000f890(param_1 + 0x78);
      FUN_1800288b0(param_1 + 0x60);
      FUN_1800288b0(param_1 + 0x48);
      FUN_1800288b0(param_1 + 0x28);
      FUN_18000f890(param_1 + 8);
      param_1 = param_1 + 0xc0;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 18034e090 FUN_18034e090 ===== */

void FUN_18034e090(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    do {
      FUN_18000f890(param_1 + 200);
      FUN_18000f890(param_1 + 0xa8);
      FUN_18000f890(param_1 + 0x70);
      FUN_18000f890(param_1 + 0x50);
      FUN_18000f890(param_1 + 0x20);
      FUN_18000f890(param_1);
      param_1 = param_1 + 0xe8;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 18034e110 FUN_18034e110 ===== */

longlong * FUN_18034e110(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar6;
  ulonglong uVar7;
  float fVar8;
  undefined8 *local_58;
  longlong local_50;
  
  puVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)(uVar5 + (longlong)puVar4)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_3[2]);
  }
  FUN_1800268a0(param_1,&local_58,param_3,uVar7);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x50);
  FUN_180024b50(puVar4 + 2,param_3);
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0xf;
  *(undefined1 *)(puVar4 + 6) = 0;
  fVar8 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (!(fVar8 < *param_1 || fVar8 == *param_1)) {
    FUN_1800280b0(param_1);
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_58 = *(undefined8 **)(param_1 + 2);
    if (puVar6 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      _Size = puVar4[4];
      while( true ) {
        _Buf2 = puVar6 + 2;
        if (0xf < (ulonglong)puVar6[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        if ((ulonglong)puVar4[5] < 0x10) {
          _Buf1 = puVar4 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar4[2];
        }
        if ((_Size == puVar6[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0)))) {
          local_58 = (undefined8 *)*puVar6;
          goto LAB_18034e2dd;
        }
        if (puVar6 == puVar1) break;
        puVar6 = (undefined8 *)puVar6[1];
      }
      local_58 = puVar6;
    }
  }
LAB_18034e2dd:
  puVar6 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = local_58;
  puVar4[1] = puVar6;
  *puVar6 = puVar4;
  local_58[1] = puVar4;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  puVar1 = *(undefined8 **)(lVar2 + uVar7 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar4;
  }
  else {
    if (puVar1 == local_58) {
      *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar4;
      goto LAB_18034e328;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) != puVar6) goto LAB_18034e328;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar4;
LAB_18034e328:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18034e360 FUN_18034e360 ===== */

void FUN_18034e360(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    do {
      FUN_18000f890(param_1 + 0x98);
      FUN_18000f890(param_1 + 0x70);
      FUN_18000f890(param_1 + 0x50);
      FUN_18000f890(param_1 + 0x28);
      FUN_18000f890(param_1 + 8);
      param_1 = param_1 + 0xb8;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 18034e3d0 FUN_18034e3d0 ===== */

undefined8 * FUN_18034e3d0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  puVar7 = (undefined8 *)(DAT_181106ef0 & uVar8);
  puVar4 = *(undefined8 **)(DAT_181106ed8 + 8 + (longlong)puVar7 * 0x10);
  puVar9 = DAT_181106ec8;
  if (puVar4 != DAT_181106ec8) {
    puVar7 = *(undefined8 **)(DAT_181106ed8 + (longlong)puVar7 * 0x10);
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
  if (DAT_181106ed0 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x28,puVar7,DAT_181106ed8,param_4,&DAT_181106ec8,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  *(undefined4 *)(puVar4 + 3) = 0;
  puVar4[4] = 0;
  uVar3 = DAT_181106ef8;
  if (DAT_181106ec0 < (float)(DAT_181106ed0 + 1) / (float)DAT_181106ef8) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_181106ed0 + 1) / DAT_181106ec0);
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
    FUN_180358750(uVar6,uVar10);
    puVar7 = *(undefined8 **)(DAT_181106ed8 + 8 + (DAT_181106ef0 & uVar8) * 0x10);
    puVar9 = DAT_181106ec8;
    if (puVar7 != DAT_181106ec8) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar9 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar9 == *(undefined8 **)(DAT_181106ed8 + (DAT_181106ef0 & uVar8) * 0x10))
        goto LAB_18034e608;
        puVar9 = (undefined8 *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_18034e608:
  puVar7 = (undefined8 *)puVar9[1];
  DAT_181106ed0 = DAT_181106ed0 + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar9[1] = puVar4;
  lVar5 = DAT_181106ed8;
  uVar8 = DAT_181106ef0 & uVar8;
  puVar2 = *(undefined8 **)(DAT_181106ed8 + uVar8 * 0x10);
  if (puVar2 == DAT_181106ec8) {
    *(undefined8 **)(DAT_181106ed8 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar9) {
      *(undefined8 **)(DAT_181106ed8 + uVar8 * 0x10) = puVar4;
      goto LAB_18034e667;
    }
    if (*(undefined8 **)(DAT_181106ed8 + 8 + uVar8 * 0x10) != puVar7) goto LAB_18034e667;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
LAB_18034e667:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18034e690 FUN_18034e690 ===== */

undefined8 * FUN_18034e690(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar6 = DAT_1811077f8;
  if (DAT_1811077f8 != DAT_181107800) {
    uVar5 = param_2[1];
    *DAT_1811077f8 = *param_2;
    puVar6[1] = uVar5;
    uVar5 = param_2[3];
    puVar6[2] = param_2[2];
    puVar6[3] = uVar5;
    puVar6 = DAT_1811077f8;
    DAT_1811077f8 = DAT_1811077f8 + 4;
    return puVar6;
  }
  uVar12 = 0x7ffffffffffffff;
  uVar15 = (longlong)DAT_1811077f8 - (longlong)DAT_1811077f0;
  lVar13 = (longlong)uVar15 >> 5;
  if (lVar13 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar14 = lVar13 + 1;
  uVar8 = (longlong)DAT_181107800 - (longlong)DAT_1811077f0 >> 5;
  if (uVar8 <= 0x7ffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar12 = uVar14;
    if (uVar14 <= uVar8) {
      uVar12 = uVar8;
    }
    if (0x7ffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar12 * 0x20);
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar16 = (undefined8 *)((uVar15 & 0xffffffffffffffe0) + (longlong)puVar7);
  *(undefined4 *)puVar16 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)puVar16 + 4) = uVar2;
  *(undefined4 *)(puVar16 + 1) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0xc) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)puVar16 + 0x14) = uVar2;
  *(undefined4 *)(puVar16 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar4;
  if (puVar6 == DAT_1811077f8) {
    lVar13 = (longlong)DAT_1811077f8 - (longlong)DAT_1811077f0;
    puVar9 = puVar7;
    puVar6 = DAT_1811077f0;
  }
  else {
    FUN_180540530(puVar7,DAT_1811077f0,(longlong)puVar6 - (longlong)DAT_1811077f0);
    puVar9 = puVar16 + 4;
    lVar13 = (longlong)DAT_1811077f8 - (longlong)puVar6;
  }
  puVar10 = auStack_38;
  puVar11 = auStack_38;
  FUN_180540530(puVar9,puVar6,lVar13);
  if (DAT_1811077f0 == (undefined8 *)0x0) goto LAB_18034e7f3;
  puVar6 = DAT_1811077f0;
  if (((longlong)DAT_181107800 - (longlong)DAT_1811077f0 & 0xffffffffffffffe0U) < 0x1000) {
LAB_18034e7eb:
    puVar11 = puVar10;
  }
  else {
    puVar6 = (undefined8 *)DAT_1811077f0[-1];
    if (0x1f < (ulonglong)((longlong)DAT_1811077f0 + (-8 - (longlong)puVar6))) {
      pcVar1 = (code *)swi(0x29);
      puVar6 = (undefined8 *)(*pcVar1)(5);
      puVar10 = auStack_30;
      goto LAB_18034e7eb;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x18034e7f3;
  thunk_FUN_1803d64e0(puVar6);
LAB_18034e7f3:
  DAT_1811077f8 = puVar7 + uVar14 * 4;
  DAT_1811077f0 = puVar7;
  DAT_181107800 = puVar7 + uVar12 * 4;
  return puVar16;
}



/* ===== 18034e840 FUN_18034e840 ===== */

longlong * FUN_18034e840(undefined8 param_1,longlong *param_2,undefined8 *param_3)

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
      uVar8 = (uVar8 ^ *(byte *)(uVar3 + (longlong)puVar6)) * 0x100000001b3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)param_3[2]);
  }
  FUN_180354860(uVar3,&local_58,param_3,uVar8);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_181107430 == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar10 = &DAT_181107428;
  puVar2 = (undefined8 *)FUN_1804ecaa0(0x68);
  puVar6 = puVar2;
  FUN_180024b50(puVar2 + 2,param_3);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0xf;
  *(undefined1 *)(puVar2 + 6) = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  uVar3 = DAT_181107458;
  if (DAT_181107420 < (float)(DAT_181107430 + 1) / (float)DAT_181107458) {
    fVar9 = (float)FUN_18053ef70((float)(DAT_181107430 + 1) / DAT_181107420,DAT_181107430,
                                 (float)DAT_181107458,DAT_181107420,puVar10,puVar6);
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
    FUN_1803589d0(uVar5,uVar7);
    puVar6 = *(undefined8 **)(DAT_181107438 + 8 + (DAT_181107450 & uVar8) * 0x10);
    local_58 = DAT_181107428;
    if (puVar6 != DAT_181107428) {
      puVar10 = *(undefined8 **)(DAT_181107438 + (DAT_181107450 & uVar8) * 0x10);
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
        if (local_58 == puVar10) goto LAB_18034eaad;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_18034eaad:
  puVar6 = (undefined8 *)local_58[1];
  DAT_181107430 = DAT_181107430 + 1;
  *puVar2 = local_58;
  puVar2[1] = puVar6;
  *puVar6 = puVar2;
  local_58[1] = puVar2;
  lVar4 = DAT_181107438;
  uVar8 = DAT_181107450 & uVar8;
  puVar10 = *(undefined8 **)(DAT_181107438 + uVar8 * 0x10);
  if (puVar10 == DAT_181107428) {
    *(undefined8 **)(DAT_181107438 + uVar8 * 0x10) = puVar2;
  }
  else {
    if (puVar10 == local_58) {
      *(undefined8 **)(DAT_181107438 + uVar8 * 0x10) = puVar2;
      goto LAB_18034eb07;
    }
    if (*(undefined8 **)(DAT_181107438 + 8 + uVar8 * 0x10) != puVar6) goto LAB_18034eb07;
  }
  *(undefined8 **)(lVar4 + 8 + uVar8 * 0x10) = puVar2;
LAB_18034eb07:
  *param_2 = (longlong)puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18034eb30 FUN_18034eb30 ===== */

undefined8 * FUN_18034eb30(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  puVar7 = (undefined8 *)(DAT_181107140 & uVar8);
  puVar4 = *(undefined8 **)(DAT_181107128 + 8 + (longlong)puVar7 * 0x10);
  puVar9 = DAT_181107118;
  if (puVar4 != DAT_181107118) {
    puVar7 = *(undefined8 **)(DAT_181107128 + (longlong)puVar7 * 0x10);
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
  if (DAT_181107120 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x40,puVar7,DAT_181107128,param_4,&DAT_181107118,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  puVar4[6] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *(undefined4 *)(puVar4 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = 0;
  puVar4[7] = 0xbff0000000000000;
  uVar3 = DAT_181107148;
  if (DAT_181107110 < (float)(DAT_181107120 + 1) / (float)DAT_181107148) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_181107120 + 1) / DAT_181107110);
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
    FUN_180358c40(uVar6,uVar10);
    puVar7 = *(undefined8 **)(DAT_181107128 + 8 + (DAT_181107140 & uVar8) * 0x10);
    puVar9 = DAT_181107118;
    if (puVar7 != DAT_181107118) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar9 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar9 == *(undefined8 **)(DAT_181107128 + (DAT_181107140 & uVar8) * 0x10))
        goto LAB_18034ed7c;
        puVar9 = (undefined8 *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_18034ed7c:
  puVar7 = (undefined8 *)puVar9[1];
  DAT_181107120 = DAT_181107120 + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar9[1] = puVar4;
  lVar5 = DAT_181107128;
  uVar8 = DAT_181107140 & uVar8;
  puVar2 = *(undefined8 **)(DAT_181107128 + uVar8 * 0x10);
  if (puVar2 == DAT_181107118) {
    *(undefined8 **)(DAT_181107128 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar9) {
      *(undefined8 **)(DAT_181107128 + uVar8 * 0x10) = puVar4;
      goto LAB_18034eddb;
    }
    if (*(undefined8 **)(DAT_181107128 + 8 + uVar8 * 0x10) != puVar7) goto LAB_18034eddb;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
LAB_18034eddb:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18034ee00 FUN_18034ee00 ===== */

undefined8 * FUN_18034ee00(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  puVar7 = (undefined8 *)(DAT_1811077a0 & uVar8);
  puVar4 = *(undefined8 **)(DAT_181107788 + 8 + (longlong)puVar7 * 0x10);
  puVar9 = DAT_181107778;
  if (puVar4 != DAT_181107778) {
    puVar7 = *(undefined8 **)(DAT_181107788 + (longlong)puVar7 * 0x10);
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
  if (DAT_181107780 == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x78,puVar7,DAT_181107788,param_4,&DAT_181107778,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  *(undefined4 *)(puVar4 + 0xb) = 0;
  puVar4[0xe] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0xc059000000000000;
  puVar4[6] = 0;
  puVar4[7] = 0;
  *(undefined4 *)(puVar4 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)puVar4 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x4c) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x54) = 0xffffffff;
  *(undefined8 *)((longlong)puVar4 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar4 + 100) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x6c) = 0;
  uVar3 = DAT_1811077a8;
  if (DAT_181107770 < (float)(DAT_181107780 + 1) / (float)DAT_1811077a8) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_181107780 + 1) / DAT_181107770);
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
    FUN_180358e10(uVar6,uVar10);
    puVar7 = *(undefined8 **)(DAT_181107788 + 8 + (DAT_1811077a0 & uVar8) * 0x10);
    puVar9 = DAT_181107778;
    if (puVar7 != DAT_181107778) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar9 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar9 == *(undefined8 **)(DAT_181107788 + (DAT_1811077a0 & uVar8) * 0x10))
        goto LAB_18034f070;
        puVar9 = (undefined8 *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_18034f070:
  puVar7 = (undefined8 *)puVar9[1];
  DAT_181107780 = DAT_181107780 + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar9[1] = puVar4;
  lVar5 = DAT_181107788;
  uVar8 = DAT_1811077a0 & uVar8;
  puVar2 = *(undefined8 **)(DAT_181107788 + uVar8 * 0x10);
  if (puVar2 == DAT_181107778) {
    *(undefined8 **)(DAT_181107788 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar9) {
      *(undefined8 **)(DAT_181107788 + uVar8 * 0x10) = puVar4;
      goto LAB_18034f0cf;
    }
    if (*(undefined8 **)(DAT_181107788 + 8 + uVar8 * 0x10) != puVar7) goto LAB_18034f0cf;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
LAB_18034f0cf:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18034f100 FUN_18034f100 ===== */

undefined8 * FUN_18034f100(float *param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  float fVar9;
  
  uVar7 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(uVar7 & *(ulonglong *)(param_1 + 0xc));
  lVar3 = *(longlong *)(param_1 + 6);
  puVar5 = *(undefined8 **)(lVar3 + 8 + (longlong)puVar6 * 0x10);
  pfVar1 = param_1 + 2;
  puVar8 = *(undefined8 **)pfVar1;
  if (puVar5 != puVar8) {
    puVar6 = *(undefined8 **)(lVar3 + (longlong)puVar6 * 0x10);
    iVar2 = *(int *)(puVar5 + 2);
    puVar8 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      iVar2 = *(int *)(puVar8 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x20,puVar6,lVar3,param_4,pfVar1,0);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
  fVar9 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar9 && fVar9 != *param_1) {
    FUN_180355780(param_1);
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar8 = *(undefined8 **)pfVar1;
    if (puVar6 != puVar8) {
      iVar2 = *(int *)(puVar6 + 2);
      puVar8 = puVar6;
      while (*(int *)(puVar5 + 2) != iVar2) {
        if (puVar8 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_18034f2a1;
        puVar8 = (undefined8 *)puVar8[1];
        iVar2 = *(int *)(puVar8 + 2);
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_18034f2a1:
  puVar6 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar8;
  puVar5[1] = puVar6;
  *puVar6 = puVar5;
  puVar8[1] = puVar5;
  lVar3 = *(longlong *)(param_1 + 6);
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  puVar4 = *(undefined8 **)(lVar3 + uVar7 * 0x10);
  if (puVar4 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar3 + uVar7 * 0x10) = puVar5;
  }
  else {
    if (puVar4 == puVar8) {
      *(undefined8 **)(lVar3 + uVar7 * 0x10) = puVar5;
      goto LAB_18034f2f1;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar7 * 0x10) != puVar6) goto LAB_18034f2f1;
  }
  *(undefined8 **)(lVar3 + 8 + uVar7 * 0x10) = puVar5;
LAB_18034f2f1:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18034f310 FUN_18034f310 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18034f310(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  uVar6 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar5 = (undefined8 *)(DAT_180ca1870 & uVar6);
  puVar4 = *(undefined8 **)(DAT_180ca1858 + 8 + (longlong)puVar5 * 0x10);
  puVar7 = DAT_180ca1848;
  if (puVar4 != DAT_180ca1848) {
    puVar5 = *(undefined8 **)(DAT_180ca1858 + (longlong)puVar5 * 0x10);
    iVar1 = *(int *)(puVar4 + 2);
    puVar7 = puVar4;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar7;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar7 == puVar5) break;
      puVar7 = (undefined8 *)puVar7[1];
      iVar1 = *(int *)(puVar7 + 2);
    }
  }
  if (DAT_180ca1850 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x20,puVar5,DAT_180ca1858,param_4,&DAT_180ca1848,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
  if (_DAT_180ca1840 < (float)(DAT_180ca1850 + 1) / (float)DAT_180ca1878) {
    FUN_180355780(&DAT_180ca1840);
    puVar5 = *(undefined8 **)(DAT_180ca1858 + 8 + (DAT_180ca1870 & uVar6) * 0x10);
    puVar7 = DAT_180ca1848;
    if (puVar5 != DAT_180ca1848) {
      iVar1 = *(int *)(puVar5 + 2);
      puVar7 = puVar5;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar7 == *(undefined8 **)(DAT_180ca1858 + (DAT_180ca1870 & uVar6) * 0x10))
        goto LAB_18034f4d8;
        puVar7 = (undefined8 *)puVar7[1];
        iVar1 = *(int *)(puVar7 + 2);
      }
      puVar7 = (undefined8 *)*puVar7;
    }
  }
LAB_18034f4d8:
  puVar5 = (undefined8 *)puVar7[1];
  DAT_180ca1850 = DAT_180ca1850 + 1;
  *puVar4 = puVar7;
  puVar4[1] = puVar5;
  *puVar5 = puVar4;
  puVar7[1] = puVar4;
  lVar3 = DAT_180ca1858;
  uVar6 = DAT_180ca1870 & uVar6;
  puVar2 = *(undefined8 **)(DAT_180ca1858 + uVar6 * 0x10);
  if (puVar2 == DAT_180ca1848) {
    *(undefined8 **)(DAT_180ca1858 + uVar6 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar7) {
      *(undefined8 **)(DAT_180ca1858 + uVar6 * 0x10) = puVar4;
      goto LAB_18034f537;
    }
    if (*(undefined8 **)(DAT_180ca1858 + 8 + uVar6 * 0x10) != puVar5) goto LAB_18034f537;
  }
  *(undefined8 **)(lVar3 + 8 + uVar6 * 0x10) = puVar4;
LAB_18034f537:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18034f560 FUN_18034f560 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18034f560(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  uVar6 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar5 = (undefined8 *)(DAT_181107640 & uVar6);
  puVar4 = *(undefined8 **)(DAT_181107628 + 8 + (longlong)puVar5 * 0x10);
  puVar7 = DAT_181107618;
  if (puVar4 != DAT_181107618) {
    puVar5 = *(undefined8 **)(DAT_181107628 + (longlong)puVar5 * 0x10);
    iVar1 = *(int *)(puVar4 + 2);
    puVar7 = puVar4;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar7;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar7 == puVar5) break;
      puVar7 = (undefined8 *)puVar7[1];
      iVar1 = *(int *)(puVar7 + 2);
    }
  }
  if (DAT_181107620 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar8 = &DAT_181107618;
  lVar2 = FUN_1804ecaa0(0x28,puVar5,DAT_181107628,param_4,&DAT_181107618,0);
  *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)param_3;
  *(undefined8 *)(lVar2 + 0x14) = 0;
  *(undefined8 *)(lVar2 + 0x1c) = 0;
  *(undefined4 *)(lVar2 + 0x24) = 0xffffffff;
  puVar4 = DAT_181107648;
  if ((longlong)DAT_181107648 < 0) {
    puVar4 = (undefined8 *)(ulonglong)((uint)DAT_181107648 & 1);
  }
  lVar9 = lVar2;
  if (_DAT_181107610 < (float)(DAT_181107620 + 1) / (float)DAT_181107648) {
    FUN_180355830();
    puVar4 = *(undefined8 **)(DAT_181107628 + 8 + (DAT_181107640 & uVar6) * 0x10);
    puVar7 = DAT_181107618;
    if (puVar4 != DAT_181107618) {
      iVar1 = *(int *)(puVar4 + 2);
      while (*(int *)(lVar2 + 0x10) != iVar1) {
        if (puVar4 == *(undefined8 **)(DAT_181107628 + (DAT_181107640 & uVar6) * 0x10)) {
          puVar7 = puVar4;
          goto LAB_18034f721;
        }
        puVar4 = (undefined8 *)puVar4[1];
        iVar1 = *(int *)(puVar4 + 2);
      }
      puVar7 = (undefined8 *)*puVar4;
    }
  }
LAB_18034f721:
  uVar3 = FUN_1803558e0(puVar4,uVar6,puVar7,lVar2,puVar8,lVar9);
  *param_2 = uVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18034f760 FUN_18034f760 ===== */

undefined8 * FUN_18034f760(float *param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x18,puVar8,lVar6,param_4,pfVar1,0);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
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
                       )) goto LAB_18034f971;
        puVar9 = (undefined8 *)puVar9[1];
        iVar2 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_18034f971:
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
      goto LAB_18034f9c1;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) != puVar8) goto LAB_18034f9c1;
  }
  *(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) = puVar5;
LAB_18034f9c1:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18034fa20 FUN_18034fa20 ===== */

void FUN_18034fa20(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x40) {
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  if (0xfff < (param_1[2] - lVar3 & 0xffffffffffffffc0U)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18034fa91;
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar2 = lVar3;
  puVar5 = puVar4;
LAB_18034fa91:
  *(undefined8 *)(puVar5 + -8) = 0x18034fa96;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18034fab0 FUN_18034fab0 ===== */

void FUN_18034fab0(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x38) {
    FUN_180068f30(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18034fb40;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18034fb40:
  *(undefined8 *)(puVar5 + -8) = 0x18034fb48;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18034fb60 FUN_18034fb60 ===== */

void FUN_18034fb60(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (*param_1 == 0) {
    return;
  }
  FUN_18034e360(*param_1,param_1[1]);
  puVar5 = auStack_28;
  uVar4 = *param_1;
  uVar3 = ((longlong)(param_1[2] - uVar4) >> 3) * 8;
  uVar2 = uVar4;
  if (0xfff < uVar3) {
    uVar2 = *(ulonglong *)(uVar4 - 8);
    uVar4 = (uVar4 - uVar2) - 8;
    if (uVar4 < 0x20) {
      uVar3 = uVar3 + 0x27;
      puVar5 = auStack_28;
    }
    else {
      uVar3 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar5 = auStack_20;
      uVar2 = uVar4;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x18034fbd2;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18034fbf0 FUN_18034fbf0 ===== */

void FUN_18034fbf0(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
    FUN_180043290(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18034fc7f;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18034fc7f:
  *(undefined8 *)(puVar5 + -8) = 0x18034fc87;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18034fca0 FUN_18034fca0 ===== */

void FUN_18034fca0(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x68) {
    FUN_18000f890(lVar3 + 0x40);
    FUN_18000f890(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18034fd39;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18034fd39:
  *(undefined8 *)(puVar5 + -8) = 0x18034fd41;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18034fd60 FUN_18034fd60 ===== */

undefined4 * FUN_18034fd60(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
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
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar1;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0xf;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar1;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x22) = 0xf;
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  *(undefined1 *)(param_2 + 0x26) = 0;
  *(undefined8 *)(param_2 + 0x2a) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0xf;
  return param_1;
}



/* ===== 18034feb0 FUN_18034feb0 ===== */

undefined8
FUN_18034feb0(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  char *_Str;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  size_t sVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  longlong *local_68;
  undefined4 *local_60;
  ulonglong local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  
  lVar16 = *param_1;
  lVar10 = (param_1[1] - lVar16 >> 3) * -0x3333333333333333;
  uVar15 = 0x666666666666666;
  if (lVar10 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
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
  puVar11 = (undefined4 *)FUN_18000fb70(uVar15 * 0x28);
  puVar2 = puVar11 + (((longlong)param_2 - lVar16) / 0x28) * 10;
  puVar8 = puVar2 + 10;
  *puVar2 = *param_3;
  _Str = (char *)*param_4;
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  local_68 = param_1;
  local_60 = puVar11;
  local_58 = uVar15;
  local_50 = puVar8;
  local_48 = puVar8;
  sVar12 = strlen(_Str);
  FUN_1800133a0(puVar2 + 2,_Str,sVar12);
  puVar17 = auStack_88;
  puVar18 = auStack_88;
  puVar2 = (undefined4 *)param_1[1];
  puVar14 = (undefined4 *)*param_1;
  puVar9 = puVar11;
  if (param_2 == puVar2) {
    for (; puVar14 != puVar2; puVar14 = puVar14 + 10) {
      *puVar9 = *puVar14;
      *(undefined8 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      uVar4 = puVar14[3];
      uVar5 = puVar14[4];
      uVar6 = puVar14[5];
      puVar9[2] = puVar14[2];
      puVar9[3] = uVar4;
      puVar9[4] = uVar5;
      puVar9[5] = uVar6;
      uVar7 = *(undefined8 *)(puVar14 + 8);
      *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar14 + 6);
      *(undefined8 *)(puVar9 + 8) = uVar7;
      *(undefined8 *)(puVar14 + 6) = 0;
      *(undefined8 *)(puVar14 + 8) = 0xf;
      *(undefined1 *)(puVar14 + 2) = 0;
      puVar9 = puVar9 + 10;
    }
  }
  else {
    for (; puVar14 != param_2; puVar14 = puVar14 + 10) {
      *puVar9 = *puVar14;
      *(undefined8 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      uVar4 = puVar14[3];
      uVar5 = puVar14[4];
      uVar6 = puVar14[5];
      puVar9[2] = puVar14[2];
      puVar9[3] = uVar4;
      puVar9[4] = uVar5;
      puVar9[5] = uVar6;
      uVar7 = *(undefined8 *)(puVar14 + 8);
      *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar14 + 6);
      *(undefined8 *)(puVar9 + 8) = uVar7;
      *(undefined8 *)(puVar14 + 6) = 0;
      *(undefined8 *)(puVar14 + 8) = 0xf;
      *(undefined1 *)(puVar14 + 2) = 0;
      puVar9 = puVar9 + 10;
    }
    puVar2 = (undefined4 *)param_1[1];
    for (; param_2 != puVar2; param_2 = param_2 + 10) {
      *puVar8 = *param_2;
      *(undefined8 *)(puVar8 + 2) = 0;
      *(undefined8 *)(puVar8 + 4) = 0;
      *(undefined8 *)(puVar8 + 6) = 0;
      *(undefined8 *)(puVar8 + 8) = 0;
      uVar4 = param_2[3];
      uVar5 = param_2[4];
      uVar6 = param_2[5];
      puVar8[2] = param_2[2];
      puVar8[3] = uVar4;
      puVar8[4] = uVar5;
      puVar8[5] = uVar6;
      uVar7 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(puVar8 + 8) = uVar7;
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined8 *)(param_2 + 8) = 0xf;
      *(undefined1 *)(param_2 + 2) = 0;
      puVar8 = puVar8 + 10;
    }
  }
  lVar16 = *param_1;
  puVar19 = auStack_88;
  if (lVar16 == 0) goto LAB_180350161;
  lVar10 = param_1[1];
  for (; lVar16 != lVar10; lVar16 = lVar16 + 0x28) {
    FUN_18000f890(lVar16 + 8);
  }
  lVar16 = *param_1;
  lVar10 = lVar16;
  if ((ulonglong)((param_1[2] - lVar16 >> 3) * 8) < 0x1000) {
LAB_180350156:
    puVar18 = puVar17;
  }
  else {
    lVar10 = *(longlong *)(lVar16 + -8);
    if (0x1f < (lVar16 - lVar10) - 8U) {
      lVar10 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar17 = auStack_80;
      goto LAB_180350156;
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x180350161;
  thunk_FUN_1803d64e0(lVar10);
  puVar19 = puVar18;
LAB_180350161:
  *param_1 = (longlong)puVar11;
  param_1[1] = (longlong)(puVar11 + uVar1 * 10);
  param_1[2] = *(longlong *)(puVar19 + 0x90) + (longlong)puVar11;
  return *(undefined8 *)(puVar19 + 0x98);
}



/* ===== 1803501d0 FUN_1803501d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803501d0(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_14;
  
  plVar2 = (longlong *)*param_1;
  DAT_1811074d0 = PTR_s_nl_glyph_sun_bright_1806a0a40;
  lVar3 = *plVar2;
  DAT_1811074d8 = PTR_DAT_1806a0a48;
  _DAT_1811074e0 = 0x44000000;
  FUN_1803e89e0(&DAT_1806f83d8);
  FUN_1802c0a60(&DAT_1806f83d8,lVar3 + 0x108);
  FUN_1803ec6c0(0,DAT_1808acda0);
  FUN_1802cedb0("##color",lVar3 + 0x10c,1);
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  DAT_1811074d0 = "nl_glyph_timer";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 0C238 0 224 15 224 32L224 96C224 114 238 128 256 128C273 128 288 114 288 96L288 67C378 82 448 161 448 256C448 362 362 448 256 448C150 448 64 362 64 256C64 203 86 154 121 119C134 107 134 87 122 74C109 61 89 61 76 74C29 120 0 185 0 256C0 398 114 512 256 512C397 512 512 398 512 256C512 115 397 0 256 0ZM193 159C183 150 168 150 159 159C149 169 149 184 159 193L239 273C248 283 263 283 273 273C282 264 282 249 273 239L193 159Z\"/></svg>"
  ;
  _DAT_1811074e0 = CONCAT44(local_14,0x44000000);
  FUN_18033e3a0("duration",*plVar2 + 0x11c,DAT_1808ac1f4,DAT_1808ac750,"%.1fs",0);
  FUN_1802d0220(param_1[1]);
  return;
}



/* ===== 180350310 FUN_180350310 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180350310(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)*param_1;
  DAT_1811074d0._0_4_ = PTR_s_nl_glyph_sun_bright_1806a0a40._0_4_;
  DAT_1811074d0._4_4_ = PTR_s_nl_glyph_sun_bright_1806a0a40._4_4_;
  DAT_1811074d8._0_4_ = PTR_DAT_1806a0a48._0_4_;
  DAT_1811074d8._4_4_ = PTR_DAT_1806a0a48._4_4_;
  _DAT_1811074e0 = DAT_1806a0a50;
  FUN_1803e89e0(&DAT_1806f83d8);
  FUN_1802c0a60(&DAT_1806f83d8,lVar2 + 0x178);
  FUN_1803ec6c0(0,DAT_1808acda0);
  FUN_1802cedb0("##color",lVar2 + 0x17c,1);
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    FUN_1802d0220(param_1[1]);
    return;
  }
  *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  FUN_1802d0220(param_1[1]);
  return;
}



/* ===== 1803503e0 FUN_1803503e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803503e0(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char *local_28;
  char *local_20;
  undefined4 local_14;
  
  plVar2 = (longlong *)*param_1;
  DAT_1811074d0 = PTR_s_nl_glyph_sun_bright_1806a0a40;
  lVar3 = *plVar2;
  DAT_1811074d8 = PTR_DAT_1806a0a48;
  _DAT_1811074e0 = 0x44000000;
  FUN_1803e89e0(&DAT_1806f83d8);
  FUN_1802c0a60(&DAT_1806f83d8,lVar3 + 0x1e4);
  FUN_1803ec6c0(0,DAT_1808acda0);
  FUN_1802cedb0("##color",lVar3 + 0x1e8,1);
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  local_28 = "visible";
  local_20 = "behind walls";
  DAT_1811074d0 = "nl_glyph_user";
  DAT_1811074d8 =
       "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M224 256C269 256 311 232 334 192C357 153 357 104 334 64C311 25 269 0 224 0C178 0 136 25 113 64C90 104 90 153 113 192C136 232 178 256 224 256ZM178 304C79 304 0 384 0 482C0 498 13 512 29 512L418 512C434 512 448 498 448 482C448 384 368 304 269 304L178 304Z\"/></svg>"
  ;
  _DAT_1811074e0 = CONCAT44(local_14,0x43e00000);
  FUN_1802c3050("visibility",&local_28,*plVar2 + 0x1f8,2);
  FUN_1802d0220(param_1[1]);
  return;
}



/* ===== 180350520 FUN_180350520 ===== */

void FUN_180350520(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar2 = param_1;
  for (lVar3 = param_3; 0x20 < lVar3; lVar3 = lVar3 + -0x20) {
    lVar2 = FUN_18034aad0(lVar2,lVar2 + 0x1700);
  }
  FUN_18034aad0(lVar2,param_2);
  if (param_3 < 0x21) {
    return;
  }
  lVar7 = param_3;
  lVar2 = param_4;
  lVar3 = param_1;
LAB_1803505a0:
  lVar1 = lVar3 + 0x1700;
  lVar5 = lVar7 + -0x40;
  if (lVar7 + -0x20 < 0x20) {
    lVar5 = 0;
  }
  lVar4 = 0x1700;
  if (lVar7 + -0x20 < 0x20) {
    lVar4 = lVar7 * 0xb8 + -0x1700;
  }
  lVar4 = lVar4 + lVar1;
  lVar6 = lVar2;
  lVar7 = lVar1;
  do {
    while( true ) {
      if (*(char *)(lVar7 + 0x90) == *(char *)(lVar3 + 0x90)) {
        bVar8 = *(int *)(lVar3 + 0x48) < *(int *)(lVar7 + 0x48);
      }
      else {
        bVar8 = *(char *)(lVar7 + 0x90) == '\0';
      }
      lVar2 = lVar6 + 0xb8;
      if (!bVar8) break;
      FUN_18034fd60(lVar6,lVar7);
      lVar7 = lVar7 + 0xb8;
      lVar6 = lVar2;
      if (lVar7 == lVar4) goto joined_r0x000180350624;
    }
    FUN_18034fd60(lVar6,lVar3);
    lVar3 = lVar3 + 0xb8;
    lVar6 = lVar2;
  } while (lVar3 != lVar1);
  for (; lVar7 != lVar4; lVar7 = lVar7 + 0xb8) {
    FUN_18034fd60(lVar2,lVar7);
    lVar2 = lVar2 + 0xb8;
  }
  goto LAB_18035068e;
joined_r0x000180350624:
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0xb8) {
    FUN_18034fd60(lVar2,lVar3);
    lVar2 = lVar2 + 0xb8;
  }
LAB_18035068e:
  lVar7 = lVar5;
  lVar3 = lVar4;
  if (lVar5 < 0x21) {
    for (; lVar4 != param_2; lVar4 = lVar4 + 0xb8) {
      FUN_18034fd60(lVar2,lVar4);
      lVar2 = lVar2 + 0xb8;
    }
    lVar3 = 0x40;
    lVar2 = param_3 * 0xb8 + param_4;
    FUN_1803562d0(param_4,lVar2,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_1803562d0(param_1,param_2,param_4,lVar3 * 2,param_3,param_5);
        lVar3 = lVar3 * 4;
        FUN_1803562d0(param_4,lVar2,param_1,lVar3,param_3,param_5);
      } while (lVar3 <= (param_3 + -1) / 2);
    }
    if (param_3 * 0xb8 == 0) {
      return;
    }
    do {
      FUN_18000f890(param_4 + 0x98);
      FUN_18000f890(param_4 + 0x70);
      FUN_18000f890(param_4 + 0x50);
      FUN_18000f890(param_4 + 0x28);
      FUN_18000f890(param_4 + 8);
      param_4 = param_4 + 0xb8;
    } while (param_4 != lVar2);
    return;
  }
  goto LAB_1803505a0;
}



/* ===== 1803507d0 FUN_1803507d0 ===== */

void FUN_1803507d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    while( true ) {
      if (*(char *)(param_2 + 0x90) == *(char *)(param_1 + 0x90)) {
        bVar3 = *(int *)(param_1 + 0x48) < *(int *)(param_2 + 0x48);
      }
      else {
        bVar3 = *(char *)(param_2 + 0x90) == '\0';
      }
      if (bVar3) break;
      param_1 = param_1 + 0xb8;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    if (param_2 != param_3 + -0xb8) {
      lVar1 = param_3 + -0xb8;
      lVar2 = param_3;
      do {
        param_3 = lVar1;
        if (*(char *)(lVar2 + -0x28) == *(char *)(param_2 + -0x28)) {
          bVar3 = *(int *)(param_2 + -0x70) < *(int *)(lVar2 + -0x70);
        }
        else {
          bVar3 = *(char *)(lVar2 + -0x28) == '\0';
        }
        if (bVar3) {
          if (param_4 == 1) {
            FUN_180356580();
            return;
          }
          FUN_1803566c0(param_1,param_2,lVar2,param_4);
          return;
        }
        lVar1 = param_3 + -0xb8;
        lVar2 = param_3;
      } while (param_2 != param_3 + -0xb8);
    }
    FUN_180356450(param_1,param_2,param_3);
  }
  return;
}



/* ===== 1803508f0 FUN_1803508f0 ===== */

void FUN_1803508f0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar2 = param_1;
  for (lVar3 = param_3; 0x20 < lVar3; lVar3 = lVar3 + -0x20) {
    lVar2 = FUN_18034af70(lVar2,lVar2 + 0x1700);
  }
  FUN_18034af70(lVar2,param_2);
  if (param_3 < 0x21) {
    return;
  }
  lVar7 = param_3;
  lVar2 = param_4;
  lVar3 = param_1;
LAB_180350970:
  lVar1 = lVar3 + 0x1700;
  lVar5 = lVar7 + -0x40;
  if (lVar7 + -0x20 < 0x20) {
    lVar5 = 0;
  }
  lVar4 = 0x1700;
  if (lVar7 + -0x20 < 0x20) {
    lVar4 = lVar7 * 0xb8 + -0x1700;
  }
  lVar4 = lVar4 + lVar1;
  lVar6 = lVar2;
  lVar7 = lVar1;
  do {
    while( true ) {
      if (*(char *)(lVar7 + 0x90) == *(char *)(lVar3 + 0x90)) {
        bVar8 = *(int *)(lVar3 + 4) < *(int *)(lVar7 + 4);
      }
      else {
        bVar8 = *(char *)(lVar7 + 0x90) == '\0';
      }
      lVar2 = lVar6 + 0xb8;
      if (!bVar8) break;
      FUN_18034fd60(lVar6,lVar7);
      lVar7 = lVar7 + 0xb8;
      lVar6 = lVar2;
      if (lVar7 == lVar4) goto joined_r0x0001803509f4;
    }
    FUN_18034fd60(lVar6,lVar3);
    lVar3 = lVar3 + 0xb8;
    lVar6 = lVar2;
  } while (lVar3 != lVar1);
  for (; lVar7 != lVar4; lVar7 = lVar7 + 0xb8) {
    FUN_18034fd60(lVar2,lVar7);
    lVar2 = lVar2 + 0xb8;
  }
  goto LAB_180350a5e;
joined_r0x0001803509f4:
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0xb8) {
    FUN_18034fd60(lVar2,lVar3);
    lVar2 = lVar2 + 0xb8;
  }
LAB_180350a5e:
  lVar7 = lVar5;
  lVar3 = lVar4;
  if (lVar5 < 0x21) {
    for (; lVar4 != param_2; lVar4 = lVar4 + 0xb8) {
      FUN_18034fd60(lVar2,lVar4);
      lVar2 = lVar2 + 0xb8;
    }
    lVar3 = 0x40;
    lVar2 = param_3 * 0xb8 + param_4;
    FUN_180356920(param_4,lVar2,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_180356920(param_1,param_2,param_4,lVar3 * 2,param_3,param_5);
        lVar3 = lVar3 * 4;
        FUN_180356920(param_4,lVar2,param_1,lVar3,param_3,param_5);
      } while (lVar3 <= (param_3 + -1) / 2);
    }
    if (param_3 * 0xb8 == 0) {
      return;
    }
    do {
      FUN_18000f890(param_4 + 0x98);
      FUN_18000f890(param_4 + 0x70);
      FUN_18000f890(param_4 + 0x50);
      FUN_18000f890(param_4 + 0x28);
      FUN_18000f890(param_4 + 8);
      param_4 = param_4 + 0xb8;
    } while (param_4 != lVar2);
    return;
  }
  goto LAB_180350970;
}



/* ===== 180350ba0 FUN_180350ba0 ===== */

void FUN_180350ba0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    while( true ) {
      if (*(char *)(param_2 + 0x90) == *(char *)(param_1 + 0x90)) {
        bVar3 = *(int *)(param_1 + 4) < *(int *)(param_2 + 4);
      }
      else {
        bVar3 = *(char *)(param_2 + 0x90) == '\0';
      }
      if (bVar3) break;
      param_1 = param_1 + 0xb8;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    if (param_2 != param_3 + -0xb8) {
      lVar1 = param_3 + -0xb8;
      lVar2 = param_3;
      do {
        param_3 = lVar1;
        if (*(char *)(lVar2 + -0x28) == *(char *)(param_2 + -0x28)) {
          bVar3 = *(int *)(param_2 + -0xb4) < *(int *)(lVar2 + -0xb4);
        }
        else {
          bVar3 = *(char *)(lVar2 + -0x28) == '\0';
        }
        if (bVar3) {
          if (param_4 == 1) {
            FUN_180356580();
            return;
          }
          FUN_180356aa0(param_1,param_2,lVar2,param_4);
          return;
        }
        lVar1 = param_3 + -0xb8;
        lVar2 = param_3;
      } while (param_2 != param_3 + -0xb8);
    }
    FUN_180356450(param_1,param_2,param_3);
  }
  return;
}



/* ===== 180350cc0 FUN_180350cc0 ===== */

void FUN_180350cc0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar3 = param_1;
  for (lVar4 = param_3; 0x20 < lVar4; lVar4 = lVar4 + -0x20) {
    lVar3 = FUN_18034b2d0(lVar3,lVar3 + 0x1700);
  }
  FUN_18034b2d0(lVar3,param_2);
  if (param_3 < 0x21) {
    return;
  }
  lVar4 = param_1;
  lVar3 = param_4;
  lVar6 = param_3;
LAB_180350d40:
  lVar1 = lVar4 + 0x1700;
  lVar8 = lVar6 + -0x40;
  if (lVar6 + -0x20 < 0x20) {
    lVar8 = 0;
  }
  lVar5 = 0x1700;
  if (lVar6 + -0x20 < 0x20) {
    lVar5 = lVar6 * 0xb8 + -0x1700;
  }
  lVar5 = lVar5 + lVar1;
  lVar6 = lVar1;
  lVar7 = lVar3;
  do {
    while( true ) {
      if (*(char *)(lVar6 + 0x90) == *(char *)(lVar4 + 0x90)) {
        bVar2 = FUN_180023470(lVar6 + 8,lVar4 + 8);
        bVar9 = (bool)(bVar2 >> 7);
      }
      else {
        bVar9 = *(char *)(lVar6 + 0x90) == '\0';
      }
      lVar3 = lVar7 + 0xb8;
      if (bVar9 == false) break;
      FUN_18034fd60(lVar7,lVar6);
      lVar6 = lVar6 + 0xb8;
      lVar7 = lVar3;
      if (lVar6 == lVar5) goto joined_r0x000180350dca;
    }
    FUN_18034fd60(lVar7,lVar4);
    lVar4 = lVar4 + 0xb8;
    lVar7 = lVar3;
  } while (lVar4 != lVar1);
  for (; lVar6 != lVar5; lVar6 = lVar6 + 0xb8) {
    FUN_18034fd60(lVar3,lVar6);
    lVar3 = lVar3 + 0xb8;
  }
  goto LAB_180350e2e;
joined_r0x000180350dca:
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0xb8) {
    FUN_18034fd60(lVar3,lVar4);
    lVar3 = lVar3 + 0xb8;
  }
LAB_180350e2e:
  lVar4 = lVar5;
  lVar6 = lVar8;
  if (lVar8 < 0x21) {
    for (; lVar5 != param_2; lVar5 = lVar5 + 0xb8) {
      FUN_18034fd60(lVar3,lVar5);
      lVar3 = lVar3 + 0xb8;
    }
    lVar4 = 0x40;
    lVar3 = param_3 * 0xb8 + param_4;
    FUN_180356d00(param_4,lVar3,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_180356d00(param_1,param_2,param_4,lVar4 * 2,param_3,param_5);
        lVar4 = lVar4 * 4;
        FUN_180356d00(param_4,lVar3,param_1,lVar4,param_3,param_5);
      } while (lVar4 <= (param_3 + -1) / 2);
    }
    if (param_3 * 0xb8 == 0) {
      return;
    }
    do {
      FUN_18000f890(param_4 + 0x98);
      FUN_18000f890(param_4 + 0x70);
      FUN_18000f890(param_4 + 0x50);
      FUN_18000f890(param_4 + 0x28);
      FUN_18000f890(param_4 + 8);
      param_4 = param_4 + 0xb8;
    } while (param_4 != lVar3);
    return;
  }
  goto LAB_180350d40;
}



/* ===== 180350f70 FUN_180350f70 ===== */

void FUN_180350f70(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,longlong param_7,undefined1 param_8)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_2 == param_3) {
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  cVar1 = *(char *)(param_2 + 0x90);
  while( true ) {
    if (cVar1 == *(char *)(param_1 + 0x90)) {
      bVar3 = FUN_180023470(param_2 + 8,param_1 + 8);
      bVar5 = (bool)(bVar3 >> 7);
    }
    else {
      bVar5 = cVar1 == '\0';
    }
    if (bVar5 != false) break;
    param_1 = param_1 + 0xb8;
    param_4 = param_4 + -1;
    if (param_1 == param_2) {
      return;
    }
  }
  if (param_2 != param_3 + -0xb8) {
    cVar1 = *(char *)(param_2 + -0x28);
    lVar2 = param_3 + -0xb8;
    lVar4 = param_3;
    do {
      param_3 = lVar2;
      if (*(char *)(lVar4 + -0x28) == cVar1) {
        bVar3 = FUN_180023470(lVar4 + -0xb0,param_2 + -0xb0);
        bVar5 = (bool)(bVar3 >> 7);
      }
      else {
        bVar5 = *(char *)(lVar4 + -0x28) == '\0';
      }
      if (bVar5 != false) {
        if (param_4 == 1) {
          FUN_180356580(param_1,param_2,lVar4);
          return;
        }
        if ((param_4 <= param_5) && (param_4 <= param_7)) {
          FUN_18035a180(param_1,param_2,lVar4,param_6);
          return;
        }
        if (param_7 < param_5) {
          FUN_18035a4b0(param_1,param_2,lVar4,param_4,param_5,param_6,param_7,param_8);
          return;
        }
        FUN_18035a300(param_1,param_2,lVar4,param_6);
        return;
      }
      param_5 = param_5 + -1;
      lVar2 = param_3 + -0xb8;
      lVar4 = param_3;
    } while (param_2 != param_3 + -0xb8);
  }
  FUN_180356450(param_1,param_2,param_3);
  return;
}



/* ===== 180351110 FUN_180351110 ===== */

longlong FUN_180351110(longlong param_1,longlong param_2,longlong param_3)

{
  if (param_1 != param_2) {
    do {
      FUN_18034fd60(param_3);
      param_3 = param_3 + 0xb8;
      param_1 = param_1 + 0xb8;
    } while (param_1 != param_2);
  }
  FUN_18034e360(param_3,param_3);
  return param_3;
}



/* ===== 180351160 FUN_180351160 ===== */

longlong FUN_180351160(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xb8) {
    FUN_18034ad30(param_3,param_1);
    param_3 = param_3 + 0xb8;
  }
  return param_3;
}



/* ===== 1803511c0 FUN_1803511c0 ===== */

void FUN_1803511c0(uint *param_1,longlong param_2,longlong param_3,uint *param_4,undefined1 param_5)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  uint *puVar16;
  
  puVar7 = param_1;
  for (lVar9 = param_3; 0x20 < lVar9; lVar9 = lVar9 + -0x20) {
    puVar7 = (uint *)FUN_18034bce0(puVar7,puVar7 + 0x20);
  }
  FUN_18034bce0(puVar7,param_2);
  if (0x20 < param_3) {
    puVar7 = param_4;
    lVar9 = param_3;
    puVar11 = param_1;
    do {
      lVar1 = lVar9 + -0x20;
      puVar3 = puVar11 + 0x20;
      lVar10 = lVar9 + -0x40;
      puVar2 = puVar11 + 0x1f;
      if (lVar1 < 0x20) {
        lVar10 = 0;
      }
      lVar14 = 0x100;
      if (lVar1 < 0x20) {
        lVar14 = lVar9 * 4;
      }
      puVar15 = (uint *)(lVar14 + (longlong)puVar11);
      lVar14 = 0xfc;
      if (lVar1 < 0x20) {
        lVar14 = lVar9 * 4 + -4;
      }
      puVar16 = (uint *)(lVar14 + (longlong)puVar11);
      puVar8 = puVar3;
      while( true ) {
        while( true ) {
          uVar4 = *puVar11;
          uVar13 = (ulonglong)*puVar8;
          iVar5 = FUN_1802f7770(uVar4);
          uVar12 = (uint)uVar13;
          iVar6 = FUN_1802f7770(uVar13 & 0xffffffff);
          if (iVar5 <= iVar6) break;
          *puVar7 = uVar12;
          if (puVar8 == puVar16) {
            lVar9 = (longlong)puVar3 - (longlong)puVar11;
            puVar8 = puVar11;
            goto LAB_1803512f1;
          }
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        }
        *puVar7 = uVar4;
        if (puVar11 == puVar2) break;
        puVar11 = puVar11 + 1;
        puVar7 = puVar7 + 1;
      }
      lVar9 = (longlong)puVar15 - (longlong)puVar8;
LAB_1803512f1:
      FUN_180540530(puVar7 + 1,puVar8,lVar9);
      puVar7 = (uint *)((longlong)puVar7 + lVar9 + 4);
      lVar9 = lVar10;
      puVar11 = puVar15;
    } while (0x20 < lVar10);
    FUN_180540530(puVar7,puVar15,param_2 - (longlong)puVar15);
    lVar9 = 0x40;
    FUN_180356e80(param_4,param_4 + param_3,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_180356e80(param_1,param_2,param_4,lVar9 * 2,param_3,param_5);
        lVar9 = lVar9 * 4;
        FUN_180356e80(param_4,param_4 + param_3,param_1,lVar9,param_3,param_5);
      } while (lVar9 <= (param_3 + -1) / 2);
    }
  }
  return;
}



/* ===== 1803513f0 FUN_1803513f0 ===== */

void FUN_1803513f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    uVar1 = *param_2;
    uVar3 = FUN_1802f7770(uVar1);
    uVar6 = (ulonglong)uVar3;
    while( true ) {
      uVar2 = *param_1;
      iVar4 = FUN_1802f7770(uVar2);
      if ((int)uVar6 < iVar4) break;
      param_1 = param_1 + 1;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    puVar7 = param_3 + -1;
    if (param_2 != puVar7) {
      iVar4 = FUN_1802f7770(param_2[-1]);
      puVar8 = puVar7;
      do {
        iVar5 = FUN_1802f7770(*puVar8);
        if (iVar5 < iVar4) {
          if (param_4 == 1) {
            FUN_180540530(param_1,param_2,(longlong)param_3 - (longlong)param_2);
            *(undefined4 *)(((longlong)param_3 - (longlong)param_2) + (longlong)param_1) = uVar2;
            return;
          }
          FUN_180356fa0(param_1,param_2,param_3);
          return;
        }
        puVar7 = puVar8 + -1;
        param_3 = puVar8;
        puVar8 = puVar7;
      } while (param_2 != puVar7);
    }
    FUN_180540530((longlong)puVar7 + (4 - ((longlong)param_2 - (longlong)param_1)),param_1,
                  (longlong)param_2 - (longlong)param_1);
    *param_1 = uVar1;
  }
  return;
}



/* ===== 180351520 FUN_180351520 ===== */

undefined8 * FUN_180351520(undefined8 param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  
  puVar8 = DAT_181107060;
  if ((longlong)DAT_181107068 - (longlong)DAT_181107060 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar11 = DAT_181107070 - (longlong)DAT_181107060 >> 5;
  uVar1 = ((longlong)DAT_181107068 - (longlong)DAT_181107060 >> 5) + 1;
  uVar13 = 0x7ffffffffffffff;
  if (uVar11 <= 0x7ffffffffffffff - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar13 = uVar1;
    if (uVar1 <= uVar11) {
      uVar13 = uVar11;
    }
    if (0x7ffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar10 = (undefined8 *)FUN_18000fb70(uVar13 << 5);
  puVar2 = (undefined8 *)
           (((longlong)param_2 - (longlong)puVar8 & 0xffffffffffffffe0U) + (longlong)puVar10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0xf;
  *(undefined1 *)puVar2 = 0;
  puVar9 = DAT_181107068;
  puVar12 = puVar10;
  puVar8 = DAT_181107060;
  if (param_2 == DAT_181107068) {
    for (; puVar8 != puVar9; puVar8 = puVar8 + 8) {
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      *(undefined4 *)puVar12 = *puVar8;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar3;
      *(undefined4 *)(puVar12 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar5;
      uVar6 = *(undefined8 *)(puVar8 + 6);
      puVar12[2] = *(undefined8 *)(puVar8 + 4);
      puVar12[3] = uVar6;
      *(undefined8 *)(puVar8 + 4) = 0;
      *(undefined8 *)(puVar8 + 6) = 0xf;
      *(undefined1 *)puVar8 = 0;
      puVar12 = puVar12 + 4;
    }
  }
  else {
    while( true ) {
      puVar7 = puVar2;
      DAT_181107068 = puVar9;
      if (puVar8 == param_2) break;
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      *(undefined4 *)puVar12 = *puVar8;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar3;
      *(undefined4 *)(puVar12 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar5;
      uVar6 = *(undefined8 *)(puVar8 + 6);
      puVar12[2] = *(undefined8 *)(puVar8 + 4);
      puVar12[3] = uVar6;
      *(undefined8 *)(puVar8 + 4) = 0;
      *(undefined8 *)(puVar8 + 6) = 0xf;
      *(undefined1 *)puVar8 = 0;
      puVar12 = puVar12 + 4;
      puVar8 = puVar8 + 8;
      puVar9 = DAT_181107068;
    }
    for (; param_2 != puVar9; param_2 = param_2 + 8) {
      puVar12 = puVar7 + 4;
      *puVar12 = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      *(undefined4 *)puVar12 = *param_2;
      *(undefined4 *)((longlong)puVar7 + 0x24) = uVar3;
      *(undefined4 *)(puVar7 + 5) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar5;
      uVar6 = *(undefined8 *)(param_2 + 6);
      puVar7[6] = *(undefined8 *)(param_2 + 4);
      puVar7[7] = uVar6;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      puVar7 = puVar12;
    }
  }
  FUN_18002b950(&DAT_181107060,puVar10,uVar1,uVar13);
  return puVar2;
}



/* ===== 180351710 FUN_180351710 ===== */

longlong FUN_180351710(longlong param_1,longlong param_2,longlong param_3)

{
  while (param_2 != param_1) {
    FUN_18002ba60(param_3 + -0x50,param_2 + -0x50);
    FUN_180351790(param_3 + -0x30,param_2 + -0x30);
    param_3 = param_3 + -0x50;
    param_2 = param_2 + -0x50;
  }
  return param_3;
}



/* ===== 180351790 FUN_180351790 ===== */

longlong FUN_180351790(longlong param_1,longlong param_2)

{
  FUN_180067380();
  if (param_1 != param_2) {
    FUN_18034fab0(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  return param_1;
}



/* ===== 180351800 FUN_180351800 ===== */

void FUN_180351800(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = param_1;
  for (lVar3 = param_3; 0x20 < lVar3; lVar3 = lVar3 + -0x20) {
    lVar1 = FUN_18034d260(lVar1,lVar1 + 0xa00);
  }
  FUN_18034d260(lVar1,param_2);
  if (0x20 < param_3) {
    lVar6 = 0x40;
    lVar3 = param_1;
    lVar1 = param_3;
    lVar2 = param_4;
    do {
      lVar5 = lVar1 + -0x40;
      if (lVar1 + -0x20 < 0x20) {
        lVar5 = 0;
      }
      lVar4 = 0x40;
      if (lVar1 + -0x20 < 0x20) {
        lVar4 = lVar1;
      }
      lVar4 = lVar4 * 0x50 + lVar3;
      lVar2 = FUN_18035a6f0(lVar3,lVar3 + 0xa00,lVar4,lVar2);
      lVar3 = lVar4;
      lVar1 = lVar5;
    } while (0x20 < lVar5);
    FUN_1803576e0(lVar4,param_2,lVar2);
    lVar3 = param_3 * 0x50 + param_4;
    FUN_1803572c0(param_4,lVar3,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_1803572c0(param_1,param_2,param_4,lVar6 * 2,param_3,param_5);
        lVar6 = lVar6 * 4;
        FUN_1803572c0(param_4,lVar3,param_1,lVar6,param_3,param_5);
      } while (lVar6 <= (param_3 + -1) / 2);
    }
    if (param_3 * 0x50 != 0) {
      do {
        FUN_18034fab0(param_4 + 0x38);
        FUN_1800288b0(param_4 + 0x20);
        FUN_18000f890(param_4);
        param_4 = param_4 + 0x50;
      } while (param_4 != lVar3);
    }
  }
  return;
}



/* ===== 1803519b0 FUN_1803519b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803519b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  if (param_2 == param_3) {
    return;
  }
  local_58 = DAT_180919500 ^ (ulonglong)auStack_f8;
  local_b8 = param_6;
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    cVar2 = FUN_180023470(param_2,param_1);
    if (cVar2 < '\0') break;
    param_1 = param_1 + 10;
    param_4 = param_4 + -1;
  }
  if (param_2 != param_3 + -10) {
    puVar1 = param_3 + -10;
    puVar3 = param_3;
    do {
      param_3 = puVar1;
      cVar2 = FUN_180023470(param_3,param_2 + -10);
      if (cVar2 < '\0') {
        if (param_4 != 1) {
          local_c0 = param_8;
          local_c8 = param_7;
          local_d0 = local_b8;
          local_d8 = param_5;
          FUN_180357450(param_1,param_2,puVar3,param_4);
          return;
        }
        local_a8 = *param_1;
        uStack_a0 = param_1[1];
        local_98 = *(undefined4 *)(param_1 + 2);
        uStack_94 = *(undefined4 *)((longlong)param_1 + 0x14);
        uStack_90 = *(undefined4 *)(param_1 + 3);
        uStack_8c = *(undefined4 *)((longlong)param_1 + 0x1c);
        *(undefined1 *)param_1 = 0;
        param_1[2] = 0;
        param_1[3] = 0xf;
        local_78 = param_1[6];
        local_80 = param_1[5];
        local_88 = param_1[4];
        param_1[6] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        local_70 = param_1[7];
        local_68 = param_1[8];
        local_60 = param_1[9];
        param_1[9] = 0;
        param_1[8] = 0;
        param_1[7] = 0;
        for (; param_2 != puVar3; param_2 = param_2 + 10) {
          FUN_18002ba60(param_1,param_2);
          FUN_180351790(param_1 + 4,param_2 + 4);
          param_1 = param_1 + 10;
        }
        goto LAB_180351b0c;
      }
      param_5 = param_5 + -1;
      puVar1 = param_3 + -10;
      puVar3 = param_3;
    } while (param_2 != param_3 + -10);
  }
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_98 = *(undefined4 *)(param_2 + 2);
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_90 = *(undefined4 *)(param_2 + 3);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  local_78 = param_2[6];
  local_80 = param_2[5];
  local_88 = param_2[4];
  param_2[6] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  local_70 = param_2[7];
  local_68 = param_2[8];
  local_60 = param_2[9];
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  while (param_2 != param_1) {
    FUN_18002ba60(param_3 + -10,param_2 + -10);
    FUN_180351790(param_3 + -6,param_2 + -6);
    param_3 = param_3 + -10;
    param_2 = param_2 + -10;
  }
LAB_180351b0c:
  FUN_18002ba60(param_1,&local_a8);
  FUN_180351790(param_1 + 4,&local_88);
  FUN_18034fab0(&local_70);
  FUN_1800288b0(&local_88);
  FUN_18000f890(&local_a8);
  return;
}



/* ===== 180351c50 FUN_180351c50 ===== */

undefined8 *
FUN_180351c50(longlong *param_1,undefined4 *param_2,undefined8 *param_3,ulonglong *param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  
  lVar2 = *param_1;
  if (param_1[1] - lVar2 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = (param_1[1] - lVar2 >> 5) + 1;
  uVar14 = param_1[2] - lVar2 >> 5;
  uVar15 = 0x7ffffffffffffff;
  if (uVar14 <= 0x7ffffffffffffff - (uVar14 >> 1)) {
    uVar14 = (uVar14 >> 1) + uVar14;
    uVar15 = uVar1;
    if (uVar1 <= uVar14) {
      uVar15 = uVar14;
    }
    if (0x7ffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar11 = (undefined8 *)FUN_18000fb70(uVar15 << 5);
  puVar16 = (undefined8 *)(((longlong)param_2 - lVar2 & 0xffffffffffffffe0U) + (longlong)puVar11);
  puVar10 = puVar16 + 4;
  uVar14 = *param_5;
  uVar3 = *param_4;
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  puVar16[3] = 0;
  if ((ulonglong)param_3[2] < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_18002a1a0();
  }
  uVar12 = param_3[2] - uVar3;
  if (uVar12 < uVar14) {
    uVar14 = uVar12;
  }
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  plVar17 = param_1;
  puVar18 = puVar11;
  uVar12 = uVar15;
  puVar19 = puVar10;
  puVar20 = puVar10;
  FUN_1800133a0(puVar16,(longlong)param_3 + uVar3,uVar14);
  puVar4 = (undefined4 *)param_1[1];
  puVar13 = (undefined4 *)*param_1;
  puVar9 = puVar11;
  if (param_2 == puVar4) {
    for (; puVar13 != puVar4; puVar13 = puVar13 + 8) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar5 = puVar13[1];
      uVar6 = puVar13[2];
      uVar7 = puVar13[3];
      *(undefined4 *)puVar9 = *puVar13;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar5;
      *(undefined4 *)(puVar9 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(puVar13 + 6);
      puVar9[2] = *(undefined8 *)(puVar13 + 4);
      puVar9[3] = uVar8;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 6) = 0xf;
      *(undefined1 *)puVar13 = 0;
      puVar9 = puVar9 + 4;
    }
  }
  else {
    for (; puVar13 != param_2; puVar13 = puVar13 + 8) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar5 = puVar13[1];
      uVar6 = puVar13[2];
      uVar7 = puVar13[3];
      *(undefined4 *)puVar9 = *puVar13;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar5;
      *(undefined4 *)(puVar9 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(puVar13 + 6);
      puVar9[2] = *(undefined8 *)(puVar13 + 4);
      puVar9[3] = uVar8;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 6) = 0xf;
      *(undefined1 *)puVar13 = 0;
      puVar9 = puVar9 + 4;
    }
    puVar4 = (undefined4 *)param_1[1];
    for (; param_2 != puVar4; param_2 = param_2 + 8) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      *(undefined4 *)puVar10 = *param_2;
      *(undefined4 *)((longlong)puVar10 + 4) = uVar5;
      *(undefined4 *)(puVar10 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar10 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(param_2 + 6);
      puVar10[2] = *(undefined8 *)(param_2 + 4);
      puVar10[3] = uVar8;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      puVar10 = puVar10 + 4;
    }
  }
  FUN_18002b950(param_1,puVar11,uVar1,uVar15,plVar17,puVar18,uVar12,puVar19,puVar20);
  return puVar16;
}



/* ===== 180351e70 FUN_180351e70 ===== */

undefined8 *
FUN_180351e70(longlong *param_1,undefined4 *param_2,undefined8 *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  
  lVar14 = *param_1;
  if (param_1[1] - lVar14 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = (param_1[1] - lVar14 >> 5) + 1;
  uVar12 = param_1[2] - lVar14 >> 5;
  uVar13 = 0x7ffffffffffffff;
  if (uVar12 <= 0x7ffffffffffffff - (uVar12 >> 1)) {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar13 = uVar1;
    if (uVar1 <= uVar12) {
      uVar13 = uVar12;
    }
    if (0x7ffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar13 << 5);
  puVar15 = (undefined8 *)(((longlong)param_2 - lVar14 & 0xffffffffffffffe0U) + (longlong)puVar9);
  puVar8 = puVar15 + 4;
  uVar12 = *param_4;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  if ((ulonglong)param_3[2] < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_18002a1a0();
  }
  lVar10 = param_3[2] - uVar12;
  lVar14 = -1;
  if (lVar10 != -1) {
    lVar14 = lVar10;
  }
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  plVar16 = param_1;
  puVar17 = puVar9;
  uVar18 = uVar13;
  puVar19 = puVar8;
  puVar20 = puVar8;
  FUN_1800133a0(puVar15,(longlong)param_3 + uVar12,lVar14);
  puVar2 = (undefined4 *)param_1[1];
  puVar11 = (undefined4 *)*param_1;
  puVar7 = puVar9;
  if (param_2 == puVar2) {
    for (; puVar11 != puVar2; puVar11 = puVar11 + 8) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      *(undefined4 *)puVar7 = *puVar11;
      *(undefined4 *)((longlong)puVar7 + 4) = uVar3;
      *(undefined4 *)(puVar7 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0xc) = uVar5;
      uVar6 = *(undefined8 *)(puVar11 + 6);
      puVar7[2] = *(undefined8 *)(puVar11 + 4);
      puVar7[3] = uVar6;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0xf;
      *(undefined1 *)puVar11 = 0;
      puVar7 = puVar7 + 4;
    }
  }
  else {
    for (; puVar11 != param_2; puVar11 = puVar11 + 8) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      *(undefined4 *)puVar7 = *puVar11;
      *(undefined4 *)((longlong)puVar7 + 4) = uVar3;
      *(undefined4 *)(puVar7 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0xc) = uVar5;
      uVar6 = *(undefined8 *)(puVar11 + 6);
      puVar7[2] = *(undefined8 *)(puVar11 + 4);
      puVar7[3] = uVar6;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0xf;
      *(undefined1 *)puVar11 = 0;
      puVar7 = puVar7 + 4;
    }
    puVar2 = (undefined4 *)param_1[1];
    for (; param_2 != puVar2; param_2 = param_2 + 8) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      *(undefined4 *)puVar8 = *param_2;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar3;
      *(undefined4 *)(puVar8 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar5;
      uVar6 = *(undefined8 *)(param_2 + 6);
      puVar8[2] = *(undefined8 *)(param_2 + 4);
      puVar8[3] = uVar6;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      puVar8 = puVar8 + 4;
    }
  }
  FUN_18002b950(param_1,puVar9,uVar1,uVar13,plVar16,puVar17,uVar18,puVar19,puVar20);
  return puVar15;
}



/* ===== 180352090 FUN_180352090 ===== */

undefined8 * FUN_180352090(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar2 = *param_1;
  uVar14 = 0x555555555555555;
  lVar8 = (param_1[1] - lVar2 >> 4) * -0x5555555555555555;
  if (lVar8 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar8 + 1;
  uVar10 = (param_1[2] - lVar2 >> 4) * -0x5555555555555555;
  if (uVar10 <= 0x555555555555555 - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar14 = uVar1;
    if (uVar1 <= uVar10) {
      uVar14 = uVar10;
    }
    if (0x555555555555555 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar14 * 0x30);
  uVar7 = param_3[1];
  puVar15 = puVar9 + ((param_2 - lVar2) / 0x30) * 6;
  *puVar15 = *param_3;
  puVar15[1] = uVar7;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar5 = *(undefined4 *)(param_3 + 3);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)puVar15 + 0x14) = uVar4;
  *(undefined4 *)(puVar15 + 3) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar6;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar5 = *(undefined4 *)(param_3 + 5);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar15 + 0x24) = uVar4;
  *(undefined4 *)(puVar15 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar6;
  lVar2 = *param_1;
  if (param_2 == param_1[1]) {
    lVar8 = param_1[1] - lVar2;
    puVar11 = puVar9;
    param_2 = lVar2;
  }
  else {
    FUN_180540530(puVar9,lVar2,param_2 - lVar2);
    puVar11 = puVar15 + 6;
    lVar8 = param_1[1] - param_2;
  }
  puVar12 = auStack_48;
  puVar13 = auStack_48;
  FUN_180540530(puVar11,param_2,lVar8);
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_180352203;
  lVar8 = lVar2;
  if ((ulonglong)((param_1[2] - lVar2 >> 4) << 4) < 0x1000) {
LAB_1803521f8:
    puVar13 = puVar12;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar8) - 8U) {
      lVar8 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar12 = auStack_40;
      goto LAB_1803521f8;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x180352203;
  thunk_FUN_1803d64e0(lVar8);
LAB_180352203:
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + uVar1 * 6);
  param_1[2] = (longlong)(puVar9 + uVar14 * 6);
  return puVar15;
}



/* ===== 180352250 FUN_180352250 ===== */

undefined8 * FUN_180352250(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar10 = *param_1;
  uVar14 = 0x2aaaaaaaaaaaaaa;
  lVar7 = (param_1[1] - lVar10 >> 5) * -0x5555555555555555;
  if (lVar7 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar7 + 1;
  uVar9 = (param_1[2] - lVar10 >> 5) * -0x5555555555555555;
  if (uVar9 <= 0x2aaaaaaaaaaaaaa - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar14 = uVar1;
    if (uVar1 <= uVar9) {
      uVar14 = uVar9;
    }
    if (0x2aaaaaaaaaaaaaa < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined8 *)FUN_18000fb70(uVar14 * 0x60);
  puVar15 = puVar8 + ((param_2 - lVar10) / 0x60) * 0xc;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  uVar6 = param_3[1];
  *puVar15 = *param_3;
  puVar15[1] = uVar6;
  uVar6 = param_3[3];
  puVar15[2] = param_3[2];
  puVar15[3] = uVar6;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar15[4] = 0;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  uVar6 = param_3[5];
  puVar15[4] = param_3[4];
  puVar15[5] = uVar6;
  uVar6 = param_3[7];
  puVar15[6] = param_3[6];
  puVar15[7] = uVar6;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 4) = 0;
  puVar15[8] = 0;
  puVar15[9] = 0;
  puVar15[10] = 0;
  puVar15[0xb] = 0;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar4 = *(undefined4 *)(param_3 + 9);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x4c);
  *(undefined4 *)(puVar15 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)((longlong)puVar15 + 0x44) = uVar3;
  *(undefined4 *)(puVar15 + 9) = uVar4;
  *(undefined4 *)((longlong)puVar15 + 0x4c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x54);
  uVar4 = *(undefined4 *)(param_3 + 0xb);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x5c);
  *(undefined4 *)(puVar15 + 10) = *(undefined4 *)(param_3 + 10);
  *(undefined4 *)((longlong)puVar15 + 0x54) = uVar3;
  *(undefined4 *)(puVar15 + 0xb) = uVar4;
  *(undefined4 *)((longlong)puVar15 + 0x5c) = uVar5;
  param_3[10] = 0;
  param_3[0xb] = 0xf;
  *(undefined1 *)(param_3 + 8) = 0;
  lVar10 = param_1[1];
  lVar7 = *param_1;
  puVar13 = puVar8;
  if (param_2 != lVar10) {
    FUN_1800bad10(*param_1,param_2,puVar8);
    lVar10 = param_1[1];
    puVar13 = puVar15 + 0xc;
    lVar7 = param_2;
  }
  puVar11 = auStack_48;
  puVar12 = auStack_48;
  FUN_1800bad10(lVar7,lVar10,puVar13);
  lVar10 = *param_1;
  if (lVar10 == 0) goto LAB_180352489;
  lVar7 = param_1[1];
  for (; lVar10 != lVar7; lVar10 = lVar10 + 0x60) {
    FUN_18000f890(lVar10 + 0x40);
    FUN_18000f890(lVar10 + 0x20);
    FUN_18000f890(lVar10);
  }
  lVar10 = *param_1;
  lVar7 = lVar10;
  if ((ulonglong)((param_1[2] - lVar10 >> 5) << 5) < 0x1000) {
LAB_18035247e:
    puVar12 = puVar11;
  }
  else {
    lVar7 = *(longlong *)(lVar10 + -8);
    if (0x1f < (lVar10 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar11 = auStack_40;
      goto LAB_18035247e;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x180352489;
  thunk_FUN_1803d64e0(lVar7);
LAB_180352489:
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1 * 0xc);
  param_1[2] = (longlong)(puVar8 + uVar14 * 0xc);
  return puVar15;
}



/* ===== 1803524e0 FUN_1803524e0 ===== */

undefined8 * FUN_1803524e0(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar14 = *param_1;
  if (param_1[1] - lVar14 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar11 = param_1[2] - lVar14 >> 6;
  uVar1 = (param_1[1] - lVar14 >> 6) + 1;
  uVar18 = 0x3ffffffffffffff;
  if (uVar11 <= 0x3ffffffffffffff - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar18 = uVar1;
    if (uVar1 <= uVar11) {
      uVar18 = uVar11;
    }
    if (0x3ffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar18 * 0x40);
  puVar15 = auStack_48;
  puVar16 = auStack_48;
  puVar17 = (undefined8 *)(((longlong)param_2 - lVar14 & 0xffffffffffffffc0U) + (longlong)puVar9);
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)puVar17 = *param_3;
  *(undefined4 *)((longlong)puVar17 + 4) = uVar4;
  *(undefined4 *)(puVar17 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar17 + 0xc) = uVar6;
  uVar7 = *(undefined8 *)(param_3 + 6);
  puVar17[2] = *(undefined8 *)(param_3 + 4);
  puVar17[3] = uVar7;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar17[4] = *(undefined8 *)(param_3 + 8);
  puVar17[5] = *(undefined8 *)(param_3 + 10);
  *(undefined1 *)(puVar17 + 6) = *(undefined1 *)(param_3 + 0xc);
  puVar17[7] = *(undefined8 *)(param_3 + 0xe);
  puVar2 = (undefined4 *)param_1[1];
  puVar10 = (undefined4 *)*param_1;
  puVar8 = puVar9;
  if (param_2 == puVar2) {
    for (; puVar10 != puVar2; puVar10 = puVar10 + 0x10) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      *(undefined4 *)puVar8 = *puVar10;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
      *(undefined4 *)(puVar8 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(puVar10 + 6);
      puVar8[2] = *(undefined8 *)(puVar10 + 4);
      puVar8[3] = uVar7;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0xf;
      *(undefined1 *)puVar10 = 0;
      puVar8[4] = *(undefined8 *)(puVar10 + 8);
      puVar8[5] = *(undefined8 *)(puVar10 + 10);
      *(undefined1 *)(puVar8 + 6) = *(undefined1 *)(puVar10 + 0xc);
      puVar8[7] = *(undefined8 *)(puVar10 + 0xe);
      puVar8 = puVar8 + 8;
    }
  }
  else {
    for (; puVar10 != param_2; puVar10 = puVar10 + 0x10) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      *(undefined4 *)puVar8 = *puVar10;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
      *(undefined4 *)(puVar8 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(puVar10 + 6);
      puVar8[2] = *(undefined8 *)(puVar10 + 4);
      puVar8[3] = uVar7;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0xf;
      *(undefined1 *)puVar10 = 0;
      puVar8[4] = *(undefined8 *)(puVar10 + 8);
      puVar8[5] = *(undefined8 *)(puVar10 + 10);
      *(undefined1 *)(puVar8 + 6) = *(undefined1 *)(puVar10 + 0xc);
      puVar8[7] = *(undefined8 *)(puVar10 + 0xe);
      puVar8 = puVar8 + 8;
    }
    puVar2 = (undefined4 *)param_1[1];
    puVar8 = puVar17;
    for (; param_2 != puVar2; param_2 = param_2 + 0x10) {
      puVar12 = puVar8 + 8;
      *puVar12 = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *(undefined4 *)puVar12 = *param_2;
      *(undefined4 *)((longlong)puVar8 + 0x44) = uVar4;
      *(undefined4 *)(puVar8 + 9) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar6;
      uVar7 = *(undefined8 *)(param_2 + 6);
      puVar8[10] = *(undefined8 *)(param_2 + 4);
      puVar8[0xb] = uVar7;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      puVar8[0xc] = *(undefined8 *)(param_2 + 8);
      puVar8[0xd] = *(undefined8 *)(param_2 + 10);
      *(undefined1 *)(puVar8 + 0xe) = *(undefined1 *)(param_2 + 0xc);
      puVar8[0xf] = *(undefined8 *)(param_2 + 0xe);
      puVar8 = puVar12;
    }
  }
  lVar14 = *param_1;
  if (lVar14 == 0) goto LAB_18035278e;
  lVar13 = param_1[1];
  for (; lVar14 != lVar13; lVar14 = lVar14 + 0x40) {
    FUN_18000f890(lVar14);
  }
  lVar14 = *param_1;
  if ((param_1[2] - lVar14 & 0xffffffffffffffc0U) < 0x1000) {
LAB_180352786:
    lVar13 = lVar14;
    puVar16 = puVar15;
  }
  else {
    lVar13 = *(longlong *)(lVar14 + -8);
    if (0x1f < (lVar14 - lVar13) - 8U) {
      pcVar3 = (code *)swi(0x29);
      lVar14 = (*pcVar3)(5);
      puVar15 = auStack_40;
      goto LAB_180352786;
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x18035278e;
  thunk_FUN_1803d64e0(lVar13);
LAB_18035278e:
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + uVar1 * 8);
  param_1[2] = (longlong)(puVar9 + uVar18 * 8);
  return puVar17;
}



/* ===== 1803527e0 FUN_1803527e0 ===== */

longlong FUN_1803527e0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar7 = DAT_181107728;
  uVar8 = 0x155555555555555;
  lVar4 = (DAT_181107730 - DAT_181107728 >> 6) * -0x5555555555555555;
  if (lVar4 == 0x155555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar4 + 1;
  uVar6 = (DAT_181107738 - DAT_181107728 >> 6) * -0x5555555555555555;
  if (uVar6 <= 0x155555555555555 - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar8 = uVar1;
    if (uVar1 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0x155555555555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar5 = FUN_18000fb70(uVar8 * 0xc0);
  lVar11 = ((param_2 - lVar7) / 0xc0) * 0xc0 + lVar5;
  FUN_1803591b0(lVar11,param_3);
  lVar3 = DAT_181107730;
  puVar9 = auStack_48;
  puVar10 = auStack_48;
  lVar7 = lVar5;
  lVar4 = DAT_181107728;
  if (param_2 == DAT_181107730) {
    for (; lVar4 != lVar3; lVar4 = lVar4 + 0xc0) {
      FUN_1803591b0(lVar7,lVar4);
      lVar7 = lVar7 + 0xc0;
    }
  }
  else {
    for (; lVar4 != param_2; lVar4 = lVar4 + 0xc0) {
      FUN_1803591b0(lVar7,lVar4);
      lVar7 = lVar7 + 0xc0;
    }
    FUN_18034e020(lVar7,lVar7);
    lVar4 = DAT_181107730;
    lVar7 = lVar11;
    for (; lVar7 = lVar7 + 0xc0, param_2 != lVar4; param_2 = param_2 + 0xc0) {
      FUN_1803591b0(lVar7,param_2);
    }
  }
  FUN_18034e020(lVar7,lVar7);
  if (DAT_181107728 == 0) goto LAB_1803529e4;
  FUN_18034e020(DAT_181107728,DAT_181107730);
  lVar7 = DAT_181107728;
  if ((ulonglong)((DAT_181107738 - DAT_181107728 >> 6) << 6) < 0x1000) {
LAB_1803529d9:
    puVar10 = puVar9;
  }
  else {
    lVar7 = *(longlong *)(DAT_181107728 + -8);
    if (0x1f < (DAT_181107728 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_40;
      goto LAB_1803529d9;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x1803529e4;
  thunk_FUN_1803d64e0(lVar7);
LAB_1803529e4:
  DAT_181107728 = lVar5;
  DAT_181107730 = uVar1 * 0xc0 + lVar5;
  DAT_181107738 = uVar8 * 0xc0 + lVar5;
  return lVar11;
}



/* ===== 180352a40 FUN_180352a40 ===== */

longlong FUN_180352a40(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar7 = DAT_181107740;
  uVar8 = 0x11a7b9611a7b961;
  lVar4 = (DAT_181107748 - DAT_181107740 >> 3) * 0x34f72c234f72c235;
  if (lVar4 == 0x11a7b9611a7b961) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar4 + 1;
  uVar6 = (DAT_181107750 - DAT_181107740 >> 3) * 0x34f72c234f72c235;
  if (uVar6 <= 0x11a7b9611a7b961 - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar8 = uVar1;
    if (uVar1 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0x11a7b9611a7b961 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar5 = FUN_18000fb70(uVar8 * 0xe8);
  lVar12 = ((param_2 - lVar7) / 0xe8) * 0xe8 + lVar5;
  FUN_180359320(lVar12,param_3);
  lVar3 = DAT_181107748;
  puVar9 = auStack_48;
  puVar10 = auStack_48;
  lVar7 = lVar5;
  lVar4 = DAT_181107740;
  if (param_2 == DAT_181107748) {
    for (; lVar4 != lVar3; lVar4 = lVar4 + 0xe8) {
      FUN_180359320(lVar7,lVar4);
      lVar7 = lVar7 + 0xe8;
    }
  }
  else {
    while( true ) {
      lVar11 = lVar12;
      DAT_181107748 = lVar3;
      if (lVar4 == param_2) break;
      FUN_180359320(lVar7,lVar4);
      lVar7 = lVar7 + 0xe8;
      lVar4 = lVar4 + 0xe8;
      lVar3 = DAT_181107748;
    }
    for (; param_2 != lVar3; param_2 = param_2 + 0xe8) {
      lVar11 = lVar11 + 0xe8;
      FUN_180359320(lVar11,param_2);
    }
  }
  lVar4 = DAT_181107748;
  lVar7 = DAT_181107740;
  if (DAT_181107740 == 0) goto LAB_180352c3d;
  for (; lVar7 != lVar4; lVar7 = lVar7 + 0xe8) {
    FUN_1803276c0(lVar7);
  }
  lVar7 = DAT_181107740;
  if ((ulonglong)((DAT_181107750 - DAT_181107740 >> 3) * 8) < 0x1000) {
LAB_180352c32:
    puVar10 = puVar9;
  }
  else {
    lVar7 = *(longlong *)(DAT_181107740 + -8);
    if (0x1f < (DAT_181107740 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_40;
      goto LAB_180352c32;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x180352c3d;
  thunk_FUN_1803d64e0(lVar7);
LAB_180352c3d:
  DAT_181107748 = uVar1 * 0xe8 + lVar5;
  DAT_181107740 = lVar5;
  DAT_181107750 = uVar8 * 0xe8 + lVar5;
  return lVar12;
}



/* ===== 180352c90 FUN_180352c90 ===== */

undefined8 * FUN_180352c90(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar12 = *param_1;
  uVar16 = 0x333333333333333;
  lVar9 = (param_1[1] - lVar12 >> 4) * -0x3333333333333333;
  if (lVar9 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar9 + 1;
  uVar11 = (param_1[2] - lVar12 >> 4) * -0x3333333333333333;
  if (uVar11 <= 0x333333333333333 - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar16 = uVar1;
    if (uVar1 <= uVar11) {
      uVar16 = uVar11;
    }
    if (0x333333333333333 < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar10 = (undefined8 *)FUN_18000fb70(uVar16 * 0x50);
  puVar17 = puVar10 + ((param_2 - lVar12) / 0x50) * 10;
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  *(undefined4 *)puVar17 = *param_3;
  *(undefined4 *)((longlong)puVar17 + 4) = uVar6;
  *(undefined4 *)(puVar17 + 1) = uVar7;
  *(undefined4 *)((longlong)puVar17 + 0xc) = uVar8;
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  *(undefined4 *)(puVar17 + 2) = param_3[4];
  *(undefined4 *)((longlong)puVar17 + 0x14) = uVar6;
  *(undefined4 *)(puVar17 + 3) = uVar7;
  *(undefined4 *)((longlong)puVar17 + 0x1c) = uVar8;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined1 *)param_3 = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  uVar2 = *(undefined8 *)(param_3 + 0xc);
  uVar3 = *(undefined8 *)(param_3 + 10);
  uVar4 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_3 + 0xc) = 0;
  *(undefined8 *)(param_3 + 10) = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  puVar17[4] = uVar4;
  puVar17[5] = uVar3;
  puVar17[6] = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x12);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0xe);
  *(undefined8 *)(param_3 + 0x12) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0xe) = 0;
  puVar17[7] = uVar4;
  puVar17[8] = uVar3;
  puVar17[9] = uVar2;
  lVar12 = param_1[1];
  lVar9 = *param_1;
  puVar15 = puVar10;
  if (param_2 != lVar12) {
    FUN_1803576e0(*param_1,param_2,puVar10);
    lVar12 = param_1[1];
    puVar15 = puVar17 + 10;
    lVar9 = param_2;
  }
  puVar13 = auStack_48;
  puVar14 = auStack_48;
  FUN_1803576e0(lVar9,lVar12,puVar15);
  lVar12 = *param_1;
  if (lVar12 == 0) goto LAB_180352e80;
  lVar9 = param_1[1];
  for (; lVar12 != lVar9; lVar12 = lVar12 + 0x50) {
    FUN_18034fab0(lVar12 + 0x38);
    FUN_1800288b0(lVar12 + 0x20);
    FUN_18000f890(lVar12);
  }
  lVar12 = *param_1;
  lVar9 = lVar12;
  if ((ulonglong)((param_1[2] - lVar12 >> 4) << 4) < 0x1000) {
LAB_180352e75:
    puVar14 = puVar13;
  }
  else {
    lVar9 = *(longlong *)(lVar12 + -8);
    if (0x1f < (lVar12 - lVar9) - 8U) {
      lVar9 = 5;
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar13 = auStack_40;
      goto LAB_180352e75;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x180352e80;
  thunk_FUN_1803d64e0(lVar9);
LAB_180352e80:
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + uVar1 * 10);
  param_1[2] = (longlong)(puVar10 + uVar16 * 10);
  return puVar17;
}



/* ===== 180352ed0 FUN_180352ed0 ===== */

undefined8 * FUN_180352ed0(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar16 = *param_1;
  uVar15 = 0x492492492492492;
  lVar11 = (param_1[1] - lVar16 >> 3) * 0x6db6db6db6db6db7;
  if (lVar11 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar11 + 1;
  uVar14 = (param_1[2] - lVar16 >> 3) * 0x6db6db6db6db6db7;
  if (uVar14 <= 0x492492492492492 - (uVar14 >> 1)) {
    uVar14 = (uVar14 >> 1) + uVar14;
    uVar15 = uVar1;
    if (uVar1 <= uVar14) {
      uVar15 = uVar14;
    }
    if (0x492492492492492 < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar12 = (undefined8 *)FUN_18000fb70(uVar15 * 0x38);
  puVar17 = auStack_48;
  puVar18 = auStack_48;
  puVar20 = puVar12 + (((longlong)param_2 - lVar16) / 0x38) * 7;
  *puVar20 = 0;
  puVar20[1] = 0;
  puVar20[2] = 0;
  puVar20[3] = 0;
  uVar7 = param_3[1];
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  *(undefined4 *)puVar20 = *param_3;
  *(undefined4 *)((longlong)puVar20 + 4) = uVar7;
  *(undefined4 *)(puVar20 + 1) = uVar8;
  *(undefined4 *)((longlong)puVar20 + 0xc) = uVar9;
  uVar2 = *(undefined8 *)(param_3 + 6);
  puVar20[2] = *(undefined8 *)(param_3 + 4);
  puVar20[3] = uVar2;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  uVar2 = *(undefined8 *)(param_3 + 8);
  uVar3 = *(undefined8 *)(param_3 + 0xc);
  uVar4 = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(param_3 + 0xc) = 0;
  *(undefined8 *)(param_3 + 10) = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  puVar20[4] = uVar2;
  puVar20[5] = uVar4;
  puVar20[6] = uVar3;
  puVar5 = (undefined4 *)param_1[1];
  puVar13 = (undefined4 *)*param_1;
  puVar10 = puVar12;
  if (param_2 == puVar5) {
    for (; puVar13 != puVar5; puVar13 = puVar13 + 0xe) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      uVar7 = puVar13[1];
      uVar8 = puVar13[2];
      uVar9 = puVar13[3];
      *(undefined4 *)puVar10 = *puVar13;
      *(undefined4 *)((longlong)puVar10 + 4) = uVar7;
      *(undefined4 *)(puVar10 + 1) = uVar8;
      *(undefined4 *)((longlong)puVar10 + 0xc) = uVar9;
      uVar2 = *(undefined8 *)(puVar13 + 6);
      puVar10[2] = *(undefined8 *)(puVar13 + 4);
      puVar10[3] = uVar2;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 6) = 0xf;
      *(undefined1 *)puVar13 = 0;
      uVar2 = *(undefined8 *)(puVar13 + 0xc);
      uVar3 = *(undefined8 *)(puVar13 + 10);
      uVar4 = *(undefined8 *)(puVar13 + 8);
      *(undefined8 *)(puVar13 + 0xc) = 0;
      *(undefined8 *)(puVar13 + 10) = 0;
      *(undefined8 *)(puVar13 + 8) = 0;
      puVar10[4] = uVar4;
      puVar10[5] = uVar3;
      puVar10[6] = uVar2;
      puVar10 = puVar10 + 7;
    }
  }
  else {
    for (; puVar13 != param_2; puVar13 = puVar13 + 0xe) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      uVar7 = puVar13[1];
      uVar8 = puVar13[2];
      uVar9 = puVar13[3];
      *(undefined4 *)puVar10 = *puVar13;
      *(undefined4 *)((longlong)puVar10 + 4) = uVar7;
      *(undefined4 *)(puVar10 + 1) = uVar8;
      *(undefined4 *)((longlong)puVar10 + 0xc) = uVar9;
      uVar2 = *(undefined8 *)(puVar13 + 6);
      puVar10[2] = *(undefined8 *)(puVar13 + 4);
      puVar10[3] = uVar2;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 6) = 0xf;
      *(undefined1 *)puVar13 = 0;
      uVar2 = *(undefined8 *)(puVar13 + 0xc);
      uVar3 = *(undefined8 *)(puVar13 + 10);
      uVar4 = *(undefined8 *)(puVar13 + 8);
      *(undefined8 *)(puVar13 + 0xc) = 0;
      *(undefined8 *)(puVar13 + 10) = 0;
      *(undefined8 *)(puVar13 + 8) = 0;
      puVar10[4] = uVar4;
      puVar10[5] = uVar3;
      puVar10[6] = uVar2;
      puVar10 = puVar10 + 7;
    }
    puVar5 = (undefined4 *)param_1[1];
    puVar10 = puVar20;
    for (; param_2 != puVar5; param_2 = param_2 + 0xe) {
      puVar19 = puVar10 + 7;
      *puVar19 = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      *(undefined4 *)puVar19 = *param_2;
      *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar7;
      *(undefined4 *)(puVar10 + 8) = uVar8;
      *(undefined4 *)((longlong)puVar10 + 0x44) = uVar9;
      uVar2 = *(undefined8 *)(param_2 + 6);
      puVar10[9] = *(undefined8 *)(param_2 + 4);
      puVar10[10] = uVar2;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      uVar2 = *(undefined8 *)(param_2 + 0xc);
      uVar3 = *(undefined8 *)(param_2 + 10);
      uVar4 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_2 + 0xc) = 0;
      *(undefined8 *)(param_2 + 10) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar3;
      puVar10[0xd] = uVar2;
      puVar10 = puVar19;
    }
  }
  lVar16 = *param_1;
  if (lVar16 == 0) goto LAB_1803531cd;
  lVar11 = param_1[1];
  for (; lVar16 != lVar11; lVar16 = lVar16 + 0x38) {
    FUN_180068f30(lVar16 + 0x20);
    FUN_18000f890(lVar16);
  }
  lVar16 = *param_1;
  lVar11 = lVar16;
  if ((ulonglong)((param_1[2] - lVar16 >> 3) * 8) < 0x1000) {
LAB_1803531c2:
    puVar18 = puVar17;
  }
  else {
    lVar11 = *(longlong *)(lVar16 + -8);
    if (0x1f < (lVar16 - lVar11) - 8U) {
      lVar11 = 5;
      pcVar6 = (code *)swi(0x29);
      (*pcVar6)(5);
      puVar17 = auStack_40;
      goto LAB_1803531c2;
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x1803531cd;
  thunk_FUN_1803d64e0(lVar11);
LAB_1803531cd:
  *param_1 = (longlong)puVar12;
  param_1[1] = (longlong)(puVar12 + uVar1 * 7);
  param_1[2] = (longlong)(puVar12 + uVar15 * 7);
  return puVar20;
}



/* ===== 180353210 FUN_180353210 ===== */

undefined8 * FUN_180353210(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar14 = (undefined4 *)DAT_181107460;
  uVar15 = 0x666666666666666;
  lVar10 = ((longlong)DAT_181107468 - (longlong)DAT_181107460 >> 3) * -0x3333333333333333;
  if (lVar10 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar10 + 1;
  uVar12 = ((longlong)DAT_181107470 - (longlong)DAT_181107460 >> 3) * -0x3333333333333333;
  if (uVar12 <= 0x666666666666666 - (uVar12 >> 1)) {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar15 = uVar1;
    if (uVar1 <= uVar12) {
      uVar15 = uVar12;
    }
    if (0x666666666666666 < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar11 = (undefined8 *)FUN_18000fb70(uVar15 * 0x28);
  puVar16 = auStack_48;
  puVar17 = auStack_48;
  lVar10 = ((longlong)param_2 - (longlong)puVar14) / 0x28;
  puVar11[lVar10 * 5] = 0;
  (puVar11 + lVar10 * 5)[1] = 0;
  puVar11[lVar10 * 5 + 2] = 0;
  puVar2 = puVar11 + lVar10 * 5;
  puVar2[3] = 0;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)puVar2 = *param_3;
  *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
  *(undefined4 *)(puVar2 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar6;
  uVar7 = *(undefined8 *)(param_3 + 6);
  puVar2[2] = *(undefined8 *)(param_3 + 4);
  puVar2[3] = uVar7;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined4 *)(puVar2 + 4) = param_3[8];
  *(undefined4 *)((longlong)puVar2 + 0x24) = param_3[9];
  puVar8 = (undefined4 *)DAT_181107468;
  puVar13 = puVar11;
  puVar14 = (undefined4 *)DAT_181107460;
  if ((undefined8 *)param_2 == DAT_181107468) {
    for (; puVar14 != puVar8; puVar14 = puVar14 + 10) {
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      uVar4 = puVar14[1];
      uVar5 = puVar14[2];
      uVar6 = puVar14[3];
      *(undefined4 *)puVar13 = *puVar14;
      *(undefined4 *)((longlong)puVar13 + 4) = uVar4;
      *(undefined4 *)(puVar13 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar13 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(puVar14 + 6);
      puVar13[2] = *(undefined8 *)(puVar14 + 4);
      puVar13[3] = uVar7;
      *(undefined8 *)(puVar14 + 4) = 0;
      *(undefined8 *)(puVar14 + 6) = 0xf;
      *(undefined1 *)puVar14 = 0;
      *(undefined4 *)(puVar13 + 4) = puVar14[8];
      *(undefined4 *)((longlong)puVar13 + 0x24) = puVar14[9];
      puVar13 = puVar13 + 5;
    }
  }
  else {
    while( true ) {
      puVar9 = puVar2;
      DAT_181107468 = (undefined8 *)puVar8;
      if (puVar14 == param_2) break;
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      uVar4 = puVar14[1];
      uVar5 = puVar14[2];
      uVar6 = puVar14[3];
      *(undefined4 *)puVar13 = *puVar14;
      *(undefined4 *)((longlong)puVar13 + 4) = uVar4;
      *(undefined4 *)(puVar13 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar13 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(puVar14 + 6);
      puVar13[2] = *(undefined8 *)(puVar14 + 4);
      puVar13[3] = uVar7;
      *(undefined8 *)(puVar14 + 4) = 0;
      *(undefined8 *)(puVar14 + 6) = 0xf;
      *(undefined1 *)puVar14 = 0;
      *(undefined4 *)(puVar13 + 4) = puVar14[8];
      *(undefined4 *)((longlong)puVar13 + 0x24) = puVar14[9];
      puVar13 = puVar13 + 5;
      puVar14 = puVar14 + 10;
      puVar8 = (undefined4 *)DAT_181107468;
    }
    for (; param_2 != puVar8; param_2 = param_2 + 10) {
      puVar13 = puVar9 + 5;
      *puVar13 = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *(undefined4 *)puVar13 = *param_2;
      *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar4;
      *(undefined4 *)(puVar9 + 6) = uVar5;
      *(undefined4 *)((longlong)puVar9 + 0x34) = uVar6;
      uVar7 = *(undefined8 *)(param_2 + 6);
      puVar9[7] = *(undefined8 *)(param_2 + 4);
      puVar9[8] = uVar7;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      *(undefined4 *)(puVar9 + 9) = param_2[8];
      *(undefined4 *)((longlong)puVar9 + 0x4c) = param_2[9];
      puVar9 = puVar13;
    }
  }
  puVar8 = (undefined4 *)DAT_181107468;
  puVar14 = (undefined4 *)DAT_181107460;
  if (DAT_181107460 == (undefined8 *)0x0) goto LAB_1803534c8;
  for (; puVar14 != puVar8; puVar14 = puVar14 + 10) {
    FUN_18000f890(puVar14);
  }
  puVar14 = (undefined4 *)DAT_181107460;
  if ((ulonglong)(((longlong)DAT_181107470 - (longlong)DAT_181107460 >> 3) * 8) < 0x1000) {
LAB_1803534bd:
    puVar17 = puVar16;
  }
  else {
    puVar14 = *(undefined4 **)((longlong)DAT_181107460 + -8);
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_181107460 + (-8 - (longlong)puVar14))) {
      puVar14 = (undefined4 *)&DAT_00000005;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar16 = auStack_40;
      goto LAB_1803534bd;
    }
  }
  *(undefined8 *)(puVar17 + -8) = 0x1803534c8;
  thunk_FUN_1803d64e0(puVar14);
LAB_1803534c8:
  DAT_181107460 = puVar11;
  DAT_181107468 = puVar11 + uVar1 * 5;
  DAT_181107470 = puVar11 + uVar15 * 5;
  return puVar2;
}



/* ===== 180353520 FUN_180353520 ===== */

longlong FUN_180353520(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar7 = DAT_181107360;
  uVar8 = 0xf83e0f83e0f83e;
  lVar4 = (DAT_181107368 - DAT_181107360 >> 3) * 0xf83e0f83e0f83e1;
  if (lVar4 == 0xf83e0f83e0f83e) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar4 + 1;
  uVar6 = (DAT_181107370 - DAT_181107360 >> 3) * 0xf83e0f83e0f83e1;
  if (uVar6 <= 0xf83e0f83e0f83e - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar8 = uVar1;
    if (uVar1 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0xf83e0f83e0f83e < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar5 = FUN_18000fb70(uVar8 * 0x108);
  lVar11 = ((param_2 - lVar7) / 0x108) * 0x108 + lVar5;
  FUN_1803594f0(lVar11,param_3);
  lVar3 = DAT_181107368;
  puVar9 = auStack_48;
  puVar10 = auStack_48;
  lVar7 = lVar5;
  lVar4 = DAT_181107360;
  if (param_2 == DAT_181107368) {
    for (; lVar4 != lVar3; lVar4 = lVar4 + 0x108) {
      FUN_1803594f0(lVar7,lVar4);
      lVar7 = lVar7 + 0x108;
    }
  }
  else {
    for (; DAT_181107368 = lVar3, lVar4 != param_2; lVar4 = lVar4 + 0x108) {
      FUN_1803594f0(lVar7,lVar4);
      lVar7 = lVar7 + 0x108;
      lVar3 = DAT_181107368;
    }
    lVar7 = lVar11;
    for (; param_2 != lVar3; param_2 = param_2 + 0x108) {
      lVar7 = lVar7 + 0x108;
      FUN_1803594f0(lVar7,param_2);
    }
  }
  lVar4 = DAT_181107368;
  lVar7 = DAT_181107360;
  if (DAT_181107360 == 0) goto LAB_18035371d;
  for (; lVar7 != lVar4; lVar7 = lVar7 + 0x108) {
    FUN_180313ad0(lVar7);
  }
  lVar7 = DAT_181107360;
  if ((ulonglong)((DAT_181107370 - DAT_181107360 >> 3) * 8) < 0x1000) {
LAB_180353712:
    puVar10 = puVar9;
  }
  else {
    lVar7 = *(longlong *)(DAT_181107360 + -8);
    if (0x1f < (DAT_181107360 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_40;
      goto LAB_180353712;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x18035371d;
  thunk_FUN_1803d64e0(lVar7);
LAB_18035371d:
  DAT_181107368 = uVar1 * 0x108 + lVar5;
  DAT_181107360 = lVar5;
  DAT_181107370 = uVar8 * 0x108 + lVar5;
  return lVar11;
}



/* ===== 180353770 FUN_180353770 ===== */

undefined8 * FUN_180353770(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar9 = *param_1;
  if (param_1[1] - lVar9 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar7 = param_1[2] - lVar9 >> 5;
  uVar1 = (param_1[1] - lVar9 >> 5) + 1;
  uVar14 = 0x7ffffffffffffff;
  if (uVar7 <= 0x7ffffffffffffff - (uVar7 >> 1)) {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar14 = uVar1;
    if (uVar1 <= uVar7) {
      uVar14 = uVar7;
    }
    if (0x7ffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar6 = (undefined8 *)FUN_18000fb70(uVar14 * 0x20);
  puVar13 = (undefined8 *)((param_2 - lVar9 & 0xffffffffffffffe0U) + (longlong)puVar6);
  *puVar13 = *param_3;
  uVar2 = param_3[3];
  uVar3 = param_3[2];
  uVar4 = param_3[1];
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  puVar13[3] = uVar2;
  puVar13[1] = uVar4;
  puVar13[2] = uVar3;
  lVar9 = param_1[1];
  lVar8 = *param_1;
  puVar12 = puVar6;
  if (param_2 != lVar9) {
    FUN_1803577a0(*param_1,param_2,puVar6);
    lVar9 = param_1[1];
    puVar12 = puVar13 + 4;
    lVar8 = param_2;
  }
  puVar10 = auStack_48;
  puVar11 = auStack_48;
  FUN_1803577a0(lVar8,lVar9,puVar12);
  lVar9 = *param_1;
  if (lVar9 == 0) goto LAB_1803538ce;
  lVar8 = param_1[1];
  for (; lVar9 != lVar8; lVar9 = lVar9 + 0x20) {
    FUN_18030f490(lVar9);
  }
  lVar9 = *param_1;
  if ((param_1[2] - lVar9 & 0xffffffffffffffe0U) < 0x1000) {
LAB_1803538c6:
    lVar8 = lVar9;
    puVar11 = puVar10;
  }
  else {
    lVar8 = *(longlong *)(lVar9 + -8);
    if (0x1f < (lVar9 - lVar8) - 8U) {
      pcVar5 = (code *)swi(0x29);
      lVar9 = (*pcVar5)(5);
      puVar10 = auStack_40;
      goto LAB_1803538c6;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x1803538ce;
  thunk_FUN_1803d64e0(lVar8);
LAB_1803538ce:
  *param_1 = (longlong)puVar6;
  param_1[1] = (longlong)(puVar6 + uVar1 * 4);
  param_1[2] = (longlong)(puVar6 + uVar14 * 4);
  return puVar13;
}



/* ===== 180353920 FUN_180353920 ===== */

longlong FUN_180353920(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar7 = *param_1;
  if (param_1[1] - lVar7 == -0x100) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar8 = param_1[2] - lVar7 >> 8;
  uVar13 = (param_1[1] - lVar7 >> 8) + 1;
  uVar14 = 0xffffffffffffff;
  if (uVar8 <= 0xffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar14 = uVar13;
    if (uVar13 <= uVar8) {
      uVar14 = uVar8;
    }
    if (0xffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar6 = FUN_18000fb70(uVar14 * 0x100);
  lVar1 = (param_2 - lVar7 & 0xffffffffffffff00U) + lVar6;
  FUN_180359720(lVar1,param_3);
  uVar2 = *(undefined8 *)(param_3 + 0xf0);
  uVar3 = *(undefined8 *)(param_3 + 0xe8);
  uVar4 = *(undefined8 *)(param_3 + 0xf8);
  *(undefined8 *)(param_3 + 0xf8) = 0;
  *(undefined8 *)(param_3 + 0xf0) = 0;
  *(undefined8 *)(param_3 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = uVar3;
  *(undefined8 *)(lVar1 + 0xf0) = uVar2;
  *(undefined8 *)(lVar1 + 0xf8) = uVar4;
  lVar10 = param_1[1];
  lVar9 = *param_1;
  lVar7 = lVar6;
  if (param_2 != lVar10) {
    FUN_180357810(*param_1,param_2,lVar6);
    lVar10 = param_1[1];
    lVar7 = lVar1 + 0x100;
    lVar9 = param_2;
  }
  puVar11 = auStack_38;
  puVar12 = auStack_38;
  FUN_180357810(lVar9,lVar10,lVar7);
  if (*param_1 == 0) goto LAB_180353a8b;
  FUN_1803551e0(*param_1,param_1[1]);
  lVar7 = *param_1;
  if ((param_1[2] - lVar7 & 0xffffffffffffff00U) < 0x1000) {
LAB_180353a83:
    lVar10 = lVar7;
    puVar12 = puVar11;
  }
  else {
    lVar10 = *(longlong *)(lVar7 + -8);
    if (0x1f < (lVar7 - lVar10) - 8U) {
      pcVar5 = (code *)swi(0x29);
      lVar7 = (*pcVar5)(5);
      puVar11 = auStack_30;
      goto LAB_180353a83;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x180353a8b;
  thunk_FUN_1803d64e0(lVar10);
LAB_180353a8b:
  *param_1 = lVar6;
  param_1[1] = uVar13 * 0x100 + lVar6;
  param_1[2] = uVar14 * 0x100 + lVar6;
  return lVar1;
}



/* ===== 180353ad0 FUN_180353ad0 ===== */

longlong FUN_180353ad0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar11 = *param_1;
  uVar7 = 0x11a7b9611a7b961;
  lVar3 = (param_1[1] - lVar11 >> 3) * 0x34f72c234f72c235;
  if (lVar3 == 0x11a7b9611a7b961) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (param_1[2] - lVar11 >> 3) * 0x34f72c234f72c235;
  if (uVar5 <= 0x11a7b9611a7b961 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar7 = uVar1;
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x11a7b9611a7b961 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar7 * 0xe8);
  lVar10 = ((param_2 - lVar11) / 0xe8) * 0xe8 + lVar4;
  FUN_180359720(lVar10,param_3);
  puVar8 = auStack_48;
  puVar9 = auStack_48;
  lVar11 = param_1[1];
  lVar3 = *param_1;
  lVar6 = lVar4;
  if (param_2 == lVar11) {
    if (lVar3 != lVar11) {
      do {
        FUN_180359720();
        lVar6 = lVar6 + 0xe8;
        lVar3 = lVar3 + 0xe8;
      } while (lVar3 != lVar11);
    }
  }
  else {
    for (; lVar3 != param_2; lVar3 = lVar3 + 0xe8) {
      FUN_180359720();
      lVar6 = lVar6 + 0xe8;
    }
    FUN_18034e090(lVar6,lVar6);
    lVar11 = param_1[1];
    lVar6 = lVar10 + 0xe8;
    if (param_2 != lVar11) {
      do {
        FUN_180359720(lVar6,param_2);
        lVar6 = lVar6 + 0xe8;
        param_2 = param_2 + 0xe8;
      } while (param_2 != lVar11);
    }
  }
  FUN_18034e090(lVar6,lVar6);
  if (*param_1 == 0) goto LAB_180353c8f;
  FUN_18034e090(*param_1,param_1[1]);
  lVar11 = *param_1;
  lVar3 = lVar11;
  if ((ulonglong)((param_1[2] - lVar11 >> 3) * 8) < 0x1000) {
LAB_180353c84:
    puVar9 = puVar8;
  }
  else {
    lVar3 = *(longlong *)(lVar11 + -8);
    if (0x1f < (lVar11 - lVar3) - 8U) {
      lVar3 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar8 = auStack_40;
      goto LAB_180353c84;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x180353c8f;
  thunk_FUN_1803d64e0(lVar3);
LAB_180353c8f:
  *param_1 = lVar4;
  param_1[1] = uVar1 * 0xe8 + lVar4;
  param_1[2] = uVar7 * 0xe8 + lVar4;
  return lVar10;
}



/* ===== 180353ce0 FUN_180353ce0 ===== */

undefined4 * FUN_180353ce0(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar10 = *param_1;
  if (param_1[1] - lVar10 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar7 = param_1[2] - lVar10 >> 6;
  uVar1 = (param_1[1] - lVar10 >> 6) + 1;
  uVar14 = 0x3ffffffffffffff;
  if (uVar7 <= 0x3ffffffffffffff - (uVar7 >> 1)) {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar14 = uVar1;
    if (uVar1 <= uVar7) {
      uVar14 = uVar7;
    }
    if (0x3ffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar6 = (undefined4 *)FUN_18000fb70(uVar14 * 0x40);
  puVar11 = auStack_48;
  puVar12 = auStack_48;
  puVar13 = (undefined4 *)(((longlong)param_2 - lVar10 & 0xffffffffffffffc0U) + (longlong)puVar6);
  *puVar13 = *param_3;
  *(undefined8 *)(puVar13 + 2) = 0;
  *(undefined8 *)(puVar13 + 4) = 0;
  *(undefined8 *)(puVar13 + 6) = 0;
  *(undefined8 *)(puVar13 + 8) = 0;
  uVar4 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(puVar13 + 4) = uVar4;
  uVar4 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(puVar13 + 6) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(puVar13 + 8) = uVar4;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 8) = 0xf;
  *(undefined1 *)(param_3 + 2) = 0;
  *(undefined8 *)(puVar13 + 10) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(puVar13 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  puVar13[0xe] = param_3[0xe];
  puVar13[0xf] = param_3[0xf];
  puVar2 = (undefined4 *)param_1[1];
  puVar8 = (undefined4 *)*param_1;
  puVar5 = puVar6;
  if (param_2 == puVar2) {
    for (; puVar8 != puVar2; puVar8 = puVar8 + 0x10) {
      *puVar5 = *puVar8;
      *(undefined8 *)(puVar5 + 2) = 0;
      *(undefined8 *)(puVar5 + 4) = 0;
      *(undefined8 *)(puVar5 + 6) = 0;
      *(undefined8 *)(puVar5 + 8) = 0;
      uVar4 = *(undefined8 *)(puVar8 + 4);
      *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar8 + 2);
      *(undefined8 *)(puVar5 + 4) = uVar4;
      uVar4 = *(undefined8 *)(puVar8 + 8);
      *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar8 + 6);
      *(undefined8 *)(puVar5 + 8) = uVar4;
      *(undefined8 *)(puVar8 + 6) = 0;
      *(undefined8 *)(puVar8 + 8) = 0xf;
      *(undefined1 *)(puVar8 + 2) = 0;
      *(undefined8 *)(puVar5 + 10) = *(undefined8 *)(puVar8 + 10);
      *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar8 + 0xc);
      puVar5[0xe] = puVar8[0xe];
      puVar5[0xf] = puVar8[0xf];
      puVar5 = puVar5 + 0x10;
    }
  }
  else {
    for (; puVar8 != param_2; puVar8 = puVar8 + 0x10) {
      *puVar5 = *puVar8;
      *(undefined8 *)(puVar5 + 2) = 0;
      *(undefined8 *)(puVar5 + 4) = 0;
      *(undefined8 *)(puVar5 + 6) = 0;
      *(undefined8 *)(puVar5 + 8) = 0;
      uVar4 = *(undefined8 *)(puVar8 + 4);
      *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar8 + 2);
      *(undefined8 *)(puVar5 + 4) = uVar4;
      uVar4 = *(undefined8 *)(puVar8 + 8);
      *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar8 + 6);
      *(undefined8 *)(puVar5 + 8) = uVar4;
      *(undefined8 *)(puVar8 + 6) = 0;
      *(undefined8 *)(puVar8 + 8) = 0xf;
      *(undefined1 *)(puVar8 + 2) = 0;
      *(undefined8 *)(puVar5 + 10) = *(undefined8 *)(puVar8 + 10);
      *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar8 + 0xc);
      puVar5[0xe] = puVar8[0xe];
      puVar5[0xf] = puVar8[0xf];
      puVar5 = puVar5 + 0x10;
    }
    puVar2 = (undefined4 *)param_1[1];
    puVar8 = puVar13;
    for (; param_2 != puVar2; param_2 = param_2 + 0x10) {
      puVar8[0x10] = *param_2;
      *(undefined8 *)(puVar8 + 0x12) = 0;
      *(undefined8 *)(puVar8 + 0x14) = 0;
      *(undefined8 *)(puVar8 + 0x16) = 0;
      *(undefined8 *)(puVar8 + 0x18) = 0;
      uVar4 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar8 + 0x12) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar8 + 0x14) = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar8 + 0x16) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(puVar8 + 0x18) = uVar4;
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined8 *)(param_2 + 8) = 0xf;
      *(undefined1 *)(param_2 + 2) = 0;
      *(undefined8 *)(puVar8 + 0x1a) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(puVar8 + 0x1c) = *(undefined8 *)(param_2 + 0xc);
      puVar8[0x1e] = param_2[0xe];
      puVar8[0x1f] = param_2[0xf];
      puVar8 = puVar8 + 0x10;
    }
  }
  lVar10 = *param_1;
  if (lVar10 == 0) goto LAB_180353faf;
  lVar9 = param_1[1];
  for (; lVar10 != lVar9; lVar10 = lVar10 + 0x40) {
    FUN_18000f890(lVar10 + 8);
  }
  lVar10 = *param_1;
  if ((param_1[2] - lVar10 & 0xffffffffffffffc0U) < 0x1000) {
LAB_180353fa7:
    lVar9 = lVar10;
    puVar12 = puVar11;
  }
  else {
    lVar9 = *(longlong *)(lVar10 + -8);
    if (0x1f < (lVar10 - lVar9) - 8U) {
      pcVar3 = (code *)swi(0x29);
      lVar10 = (*pcVar3)(5);
      puVar11 = auStack_40;
      goto LAB_180353fa7;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x180353faf;
  thunk_FUN_1803d64e0(lVar9);
LAB_180353faf:
  *param_1 = (longlong)puVar6;
  param_1[1] = (longlong)(puVar6 + uVar1 * 0x10);
  param_1[2] = (longlong)(puVar6 + uVar14 * 0x10);
  return puVar13;
}



/* ===== 180354000 FUN_180354000 ===== */

longlong FUN_180354000(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar6 = *param_1;
  uVar8 = 0x1642c8590b21642;
  lVar2 = (param_1[1] - lVar6 >> 3) * -0x2c8590b21642c859;
  if (lVar2 == 0x1642c8590b21642) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar2 + 1;
  uVar4 = (param_1[2] - lVar6 >> 3) * -0x2c8590b21642c859;
  if (uVar4 <= 0x1642c8590b21642 - (uVar4 >> 1)) {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar8 = uVar1;
    if (uVar1 <= uVar4) {
      uVar8 = uVar4;
    }
    if (0x1642c8590b21642 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar3 = FUN_18000fb70(uVar8 * 0xb8);
  lVar6 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_2 - lVar6),8) + (param_2 - lVar6);
  lVar7 = ((lVar6 >> 7) - (lVar6 >> 0x3f)) * 0xb8 + lVar3;
  FUN_18034fd60(lVar7,param_3);
  lVar6 = param_1[1];
  lVar2 = *param_1;
  lVar5 = lVar3;
  if (param_2 == lVar6) {
    if (lVar2 != lVar6) {
      do {
        FUN_18034fd60();
        lVar5 = lVar5 + 0xb8;
        lVar2 = lVar2 + 0xb8;
      } while (lVar2 != lVar6);
    }
  }
  else {
    for (; lVar2 != param_2; lVar2 = lVar2 + 0xb8) {
      FUN_18034fd60();
      lVar5 = lVar5 + 0xb8;
    }
    FUN_18034e360(lVar5,lVar5);
    lVar6 = param_1[1];
    lVar5 = lVar7 + 0xb8;
    if (param_2 != lVar6) {
      do {
        FUN_18034fd60(lVar5,param_2);
        lVar5 = lVar5 + 0xb8;
        param_2 = param_2 + 0xb8;
      } while (param_2 != lVar6);
    }
  }
  FUN_18034e360(lVar5,lVar5);
  FUN_1803556e0(param_1,lVar3,uVar1,uVar8);
  return lVar7;
}



/* ===== 1803541a0 FUN_1803541a0 ===== */

longlong FUN_1803541a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar2 = DAT_1811075f0;
  uVar10 = 0x1555555555555555;
  lVar4 = (DAT_1811075f8 - DAT_1811075f0 >> 2) * -0x5555555555555555;
  if (lVar4 == 0x1555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar4 + 1;
  uVar5 = (DAT_181107600 - DAT_1811075f0 >> 2) * -0x5555555555555555;
  if (uVar5 <= 0x1555555555555555 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar10 = uVar1;
    if (uVar1 <= uVar5) {
      uVar10 = uVar5;
    }
    if (0x1555555555555555 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar10 * 0xc);
  lVar2 = (param_2 - lVar2) / 0xc;
  *(undefined8 *)(lVar4 + lVar2 * 0xc) = *param_3;
  lVar2 = lVar4 + lVar2 * 0xc;
  *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_3 + 1);
  if (param_2 == DAT_1811075f8) {
    lVar9 = DAT_1811075f8 - DAT_1811075f0;
    lVar6 = lVar4;
    param_2 = DAT_1811075f0;
  }
  else {
    FUN_180540530(lVar4,DAT_1811075f0,param_2 - DAT_1811075f0);
    lVar6 = lVar2 + 0xc;
    lVar9 = DAT_1811075f8 - param_2;
  }
  puVar7 = auStack_38;
  puVar8 = auStack_38;
  FUN_180540530(lVar6,param_2,lVar9);
  if (DAT_1811075f0 == 0) goto LAB_180354322;
  lVar6 = DAT_1811075f0;
  if ((ulonglong)((DAT_181107600 - DAT_1811075f0 >> 2) * 4) < 0x1000) {
LAB_180354317:
    puVar8 = puVar7;
  }
  else {
    lVar6 = *(longlong *)(DAT_1811075f0 + -8);
    if (0x1f < (DAT_1811075f0 - lVar6) - 8U) {
      lVar6 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar7 = auStack_30;
      goto LAB_180354317;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x180354322;
  thunk_FUN_1803d64e0(lVar6);
LAB_180354322:
  DAT_1811075f0 = lVar4;
  DAT_1811075f8 = lVar4 + uVar1 * 0xc;
  DAT_181107600 = uVar10 * 0xc + lVar4;
  return lVar2;
}



/* ===== 180354370 FUN_180354370 ===== */

longlong FUN_180354370(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar3 = *param_1;
  uVar15 = 0x71c71c71c71c71c;
  lVar8 = (param_1[1] - lVar3 >> 2) * -0x71c71c71c71c71c7;
  if (lVar8 == 0x71c71c71c71c71c) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar8 + 1;
  uVar10 = (param_1[2] - lVar3 >> 2) * -0x71c71c71c71c71c7;
  if (uVar10 <= 0x71c71c71c71c71c - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar15 = uVar1;
    if (uVar1 <= uVar10) {
      uVar15 = uVar10;
    }
    if (0x71c71c71c71c71c < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar9 = FUN_18000fb70(uVar15 * 0x24);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  lVar3 = (param_2 - lVar3) / 0x24;
  puVar2 = (undefined4 *)(lVar9 + lVar3 * 0x24);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  lVar3 = lVar9 + lVar3 * 0x24;
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  *(undefined4 *)(lVar3 + 0x10) = param_3[4];
  *(undefined4 *)(lVar3 + 0x14) = uVar5;
  *(undefined4 *)(lVar3 + 0x18) = uVar6;
  *(undefined4 *)(lVar3 + 0x1c) = uVar7;
  *(undefined4 *)(lVar3 + 0x20) = param_3[8];
  lVar8 = *param_1;
  if (param_2 == param_1[1]) {
    lVar14 = param_1[1] - lVar8;
    lVar11 = lVar9;
    param_2 = lVar8;
  }
  else {
    FUN_180540530(lVar9,lVar8,param_2 - lVar8);
    lVar11 = lVar3 + 0x24;
    lVar14 = param_1[1] - param_2;
  }
  puVar12 = auStack_48;
  puVar13 = auStack_48;
  FUN_180540530(lVar11,param_2,lVar14);
  lVar8 = *param_1;
  if (lVar8 == 0) goto LAB_1803544e2;
  lVar11 = lVar8;
  if ((ulonglong)((param_1[2] - lVar8 >> 2) * 4) < 0x1000) {
LAB_1803544d7:
    puVar13 = puVar12;
  }
  else {
    lVar11 = *(longlong *)(lVar8 + -8);
    if (0x1f < (lVar8 - lVar11) - 8U) {
      lVar11 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar12 = auStack_40;
      goto LAB_1803544d7;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x1803544e2;
  thunk_FUN_1803d64e0(lVar11);
LAB_1803544e2:
  *param_1 = lVar9;
  param_1[1] = lVar9 + uVar1 * 0x24;
  param_1[2] = uVar15 * 0x24 + lVar9;
  return lVar3;
}



/* ===== 180354530 FUN_180354530 ===== */

longlong * FUN_180354530(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 *local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  longlong *local_58;
  
  plVar11 = DAT_181107558;
  lVar8 = ((longlong)DAT_181107560 - (longlong)DAT_181107558 >> 3) * -0x5555555555555555;
  uVar15 = 0xaaaaaaaaaaaaaaa;
  if (lVar8 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar8 + 1;
  uVar10 = (DAT_181107568 - (longlong)DAT_181107558 >> 3) * -0x5555555555555555;
  if (uVar10 <= 0xaaaaaaaaaaaaaaa - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar15 = uVar1;
    if (uVar1 <= uVar10) {
      uVar15 = uVar10;
    }
    if (0xaaaaaaaaaaaaaaa < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  plVar9 = (longlong *)FUN_18000fb70(uVar15 * 0x18);
  plVar2 = plVar9 + (((longlong)param_2 - (longlong)plVar11) / 0x18) * 3;
  plVar11 = plVar2 + 3;
  local_78 = &DAT_181107558;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  local_70 = plVar9;
  local_68 = uVar15;
  local_60 = plVar11;
  local_58 = plVar11;
  if (param_3[1] - *param_3 != 0) {
    uVar15 = param_3[1] - *param_3 >> 4;
    if (0xfffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar16 = uVar15 * 0x10;
    lVar8 = FUN_18000fb70(lVar16);
    *plVar2 = lVar8;
    plVar2[1] = lVar8;
    plVar2[2] = lVar16 + lVar8;
    uVar15 = param_3[1] - *param_3;
    FUN_180540530(lVar8,*param_3,uVar15);
    plVar2[1] = (uVar15 & 0xfffffffffffffff0) + lVar8;
  }
  plVar7 = DAT_181107560;
  puVar12 = auStack_98;
  puVar13 = auStack_98;
  plVar5 = plVar9;
  plVar6 = DAT_181107558;
  if (param_2 == DAT_181107560) {
    for (; plVar6 != plVar7; plVar6 = plVar6 + 3) {
      lVar8 = plVar6[2];
      plVar6[2] = 0;
      lVar16 = plVar6[1];
      plVar6[1] = 0;
      lVar3 = *plVar6;
      *plVar6 = 0;
      *plVar5 = lVar3;
      plVar5[1] = lVar16;
      plVar5[2] = lVar8;
      plVar5 = plVar5 + 3;
    }
  }
  else {
    for (; DAT_181107560 = plVar7, plVar6 != param_2; plVar6 = plVar6 + 3) {
      lVar8 = plVar6[2];
      plVar6[2] = 0;
      lVar16 = plVar6[1];
      plVar6[1] = 0;
      lVar3 = *plVar6;
      *plVar6 = 0;
      *plVar5 = lVar3;
      plVar5[1] = lVar16;
      plVar5[2] = lVar8;
      plVar5 = plVar5 + 3;
      plVar7 = DAT_181107560;
    }
    for (; param_2 != plVar7; param_2 = param_2 + 3) {
      lVar8 = param_2[2];
      param_2[2] = 0;
      lVar16 = param_2[1];
      param_2[1] = 0;
      lVar3 = *param_2;
      *param_2 = 0;
      *plVar11 = lVar3;
      plVar11[1] = lVar16;
      plVar11[2] = lVar8;
      plVar11 = plVar11 + 3;
    }
  }
  plVar5 = DAT_181107560;
  puVar14 = auStack_98;
  plVar11 = DAT_181107558;
  if (DAT_181107558 == (longlong *)0x0) goto LAB_180354808;
  for (; plVar11 != plVar5; plVar11 = plVar11 + 3) {
    FUN_1800244c0(plVar11);
  }
  plVar11 = DAT_181107558;
  if ((ulonglong)((DAT_181107568 - (longlong)DAT_181107558 >> 3) * 8) < 0x1000) {
LAB_1803547fd:
    puVar13 = puVar12;
  }
  else {
    plVar11 = (longlong *)DAT_181107558[-1];
    if (0x1f < (ulonglong)((longlong)DAT_181107558 + (-8 - (longlong)plVar11))) {
      plVar11 = (longlong *)&DAT_00000005;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar12 = auStack_90;
      goto LAB_1803547fd;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x180354808;
  thunk_FUN_1803d64e0(plVar11);
  puVar14 = puVar13;
LAB_180354808:
  DAT_181107558 = plVar9;
  DAT_181107560 = plVar9 + uVar1 * 3;
  DAT_181107568 = *(longlong *)(puVar14 + 0xa0) + (longlong)plVar9;
  return plVar2;
}



/* ===== 180354860 FUN_180354860 ===== */

undefined8 *
FUN_180354860(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(DAT_181107438 + 8 + (DAT_181107450 & param_4) * 0x10);
  if (puVar4 == DAT_181107428) {
    *param_2 = DAT_181107428;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = *(undefined8 **)(DAT_181107438 + (DAT_181107450 & param_4) * 0x10);
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



/* ===== 180354940 FUN_180354940 ===== */

longlong FUN_180354940(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar6 = DAT_181107150;
  uVar7 = 0x1e1e1e1e1e1e1e1;
  lVar3 = (DAT_181107158 - DAT_181107150 >> 3) * -0xf0f0f0f0f0f0f0f;
  if (lVar3 == 0x1e1e1e1e1e1e1e1) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (DAT_181107160 - DAT_181107150 >> 3) * -0xf0f0f0f0f0f0f0f;
  if (uVar5 <= 0x1e1e1e1e1e1e1e1 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar7 = uVar1;
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x1e1e1e1e1e1e1e1 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar7 * 0x88);
  lVar11 = ((param_2 - lVar6) / 0x88) * 0x88 + lVar4;
  FUN_1803598d0(lVar11,param_3);
  puVar8 = auStack_48;
  puVar9 = auStack_48;
  lVar6 = lVar4;
  lVar3 = DAT_181107150;
  lVar10 = DAT_181107158;
  if (param_2 == DAT_181107158) {
    if (DAT_181107150 != DAT_181107158) {
      do {
        FUN_1803598d0(lVar6);
        lVar6 = lVar6 + 0x88;
        lVar3 = lVar3 + 0x88;
      } while (lVar3 != lVar10);
    }
  }
  else {
    for (; DAT_181107158 = lVar10, lVar3 != param_2; lVar3 = lVar3 + 0x88) {
      FUN_1803598d0(lVar6);
      lVar6 = lVar6 + 0x88;
      lVar10 = DAT_181107158;
    }
    lVar6 = lVar11;
    if (param_2 != lVar10) {
      do {
        lVar6 = lVar6 + 0x88;
        FUN_1803598d0(lVar6,param_2);
        param_2 = param_2 + 0x88;
      } while (param_2 != lVar10);
    }
  }
  lVar3 = DAT_181107158;
  lVar6 = DAT_181107150;
  if (DAT_181107150 == 0) goto LAB_180354b2a;
  for (; lVar6 != lVar3; lVar6 = lVar6 + 0x88) {
    FUN_18000f890(lVar6 + 0x28);
  }
  lVar6 = DAT_181107150;
  if ((ulonglong)((DAT_181107160 - DAT_181107150 >> 3) * 8) < 0x1000) {
LAB_180354b1f:
    puVar9 = puVar8;
  }
  else {
    lVar6 = *(longlong *)(DAT_181107150 + -8);
    if (0x1f < (DAT_181107150 - lVar6) - 8U) {
      lVar6 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar8 = auStack_40;
      goto LAB_180354b1f;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x180354b2a;
  thunk_FUN_1803d64e0(lVar6);
LAB_180354b2a:
  DAT_181107158 = uVar1 * 0x88 + lVar4;
  DAT_181107150 = lVar4;
  DAT_181107160 = uVar7 * 0x88 + lVar4;
  return lVar11;
}



/* ===== 180354b80 FUN_180354b80 ===== */

undefined4 * FUN_180354b80(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar14 = (longlong)DAT_181107838;
  uVar15 = 0xccccccccccccccc;
  lVar8 = ((longlong)DAT_181107840 - (longlong)DAT_181107838 >> 2) * -0x3333333333333333;
  if (lVar8 == 0xccccccccccccccc) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar8 + 1;
  uVar10 = ((longlong)DAT_181107848 - (longlong)DAT_181107838 >> 2) * -0x3333333333333333;
  if (uVar10 <= 0xccccccccccccccc - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar15 = uVar1;
    if (uVar1 <= uVar10) {
      uVar15 = uVar10;
    }
    if (0xccccccccccccccc < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined4 *)FUN_18000fb70(uVar15 * 0x14);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar3 = param_3[4];
  puVar2 = puVar9 + ((param_2 - lVar14) / 0x14) * 5;
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar2[4] = uVar3;
  if ((undefined4 *)param_2 == DAT_181107840) {
    lVar14 = (longlong)DAT_181107840 - (longlong)DAT_181107838;
    puVar11 = puVar9;
    param_2 = (longlong)DAT_181107838;
  }
  else {
    FUN_180540530(puVar9,DAT_181107838,param_2 - (longlong)DAT_181107838);
    puVar11 = puVar2 + 5;
    lVar14 = (longlong)DAT_181107840 - param_2;
  }
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  FUN_180540530(puVar11,param_2,lVar14);
  if (DAT_181107838 == (undefined4 *)0x0) goto LAB_180354d01;
  lVar14 = (longlong)DAT_181107838;
  if ((ulonglong)(((longlong)DAT_181107848 - (longlong)DAT_181107838 >> 2) * 4) < 0x1000) {
LAB_180354cf6:
    puVar13 = puVar12;
  }
  else {
    lVar14 = *(longlong *)((longlong)DAT_181107838 + -8);
    if (0x1f < ((longlong)DAT_181107838 - lVar14) - 8U) {
      lVar14 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar12 = auStack_30;
      goto LAB_180354cf6;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x180354d01;
  thunk_FUN_1803d64e0(lVar14);
LAB_180354d01:
  DAT_181107838 = puVar9;
  DAT_181107840 = puVar9 + uVar1 * 5;
  DAT_181107848 = puVar9 + uVar15 * 5;
  return puVar2;
}



/* ===== 180354d50 FUN_180354d50 ===== */

longlong FUN_180354d50(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar2 = DAT_1811074b8;
  uVar10 = 0x1555555555555555;
  lVar4 = (DAT_1811074c0 - DAT_1811074b8 >> 2) * -0x5555555555555555;
  if (lVar4 == 0x1555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar4 + 1;
  uVar5 = (DAT_1811074c8 - DAT_1811074b8 >> 2) * -0x5555555555555555;
  if (uVar5 <= 0x1555555555555555 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar10 = uVar1;
    if (uVar1 <= uVar5) {
      uVar10 = uVar5;
    }
    if (0x1555555555555555 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar10 * 0xc);
  lVar2 = (param_2 - lVar2) / 0xc;
  *(undefined8 *)(lVar4 + lVar2 * 0xc) = *param_3;
  lVar2 = lVar4 + lVar2 * 0xc;
  *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_3 + 1);
  if (param_2 == DAT_1811074c0) {
    lVar9 = DAT_1811074c0 - DAT_1811074b8;
    lVar6 = lVar4;
    param_2 = DAT_1811074b8;
  }
  else {
    FUN_180540530(lVar4,DAT_1811074b8,param_2 - DAT_1811074b8);
    lVar6 = lVar2 + 0xc;
    lVar9 = DAT_1811074c0 - param_2;
  }
  puVar7 = auStack_38;
  puVar8 = auStack_38;
  FUN_180540530(lVar6,param_2,lVar9);
  if (DAT_1811074b8 == 0) goto LAB_180354ed2;
  lVar6 = DAT_1811074b8;
  if ((ulonglong)((DAT_1811074c8 - DAT_1811074b8 >> 2) * 4) < 0x1000) {
LAB_180354ec7:
    puVar8 = puVar7;
  }
  else {
    lVar6 = *(longlong *)(DAT_1811074b8 + -8);
    if (0x1f < (DAT_1811074b8 - lVar6) - 8U) {
      lVar6 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar7 = auStack_30;
      goto LAB_180354ec7;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x180354ed2;
  thunk_FUN_1803d64e0(lVar6);
LAB_180354ed2:
  DAT_1811074b8 = lVar4;
  DAT_1811074c0 = lVar4 + uVar1 * 0xc;
  DAT_1811074c8 = uVar10 * 0xc + lVar4;
  return lVar2;
}



