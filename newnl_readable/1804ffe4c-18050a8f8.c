/* ===== 1804ffe4c FUN_1804ffe4c ===== */

undefined1 FUN_1804ffe4c(__uint64 *param_1)

{
  __uint64 *p_Var1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  
  p_Var1 = param_1 + 8;
  cVar2 = FUN_1804f4b48(param_1,p_Var1);
  uVar4 = 0;
  if (cVar2 != '\0') {
    if (((int)param_1[0x8e] != 1) || (*(int *)((longlong)param_1 + 0x474) == 1)) {
      iVar6 = (int)param_1[6];
      if (iVar6 == -1) {
        iVar6 = 0x7fffffff;
      }
      pwVar7 = (wchar_t *)*p_Var1;
      bVar3 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                        (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                         *(length_modifier *)((longlong)param_1 + 0x34));
      if (bVar3) {
        if (pwVar7 == (wchar_t *)0x0) {
          pwVar7 = L"(null)";
          *p_Var1 = (__uint64)L"(null)";
        }
        *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
        uVar5 = FUN_180512dc0(pwVar7,(longlong)iVar6);
      }
      else {
        if (pwVar7 == (wchar_t *)0x0) {
          *p_Var1 = (__uint64)&DAT_1808a7550;
        }
        uVar5 = FUN_1804fff00(param_1,iVar6,0);
      }
      *(undefined4 *)(param_1 + 9) = uVar5;
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* ===== 1804fff00 FUN_1804fff00 ===== */

int FUN_1804fff00(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1805002a0(lVar4);
  }
  pbVar5 = *(byte **)(param_1 + 0x40);
  if (*(int *)((longlong)*(longlong **)(lVar4 + 0x18) + 0xc) == 0xfde9) {
    iVar6 = 0;
    if (0 < param_2) {
      do {
        if (*pbVar5 == 0) {
          return iVar6;
        }
        iVar1 = FUN_180528c44(pbVar5);
        lVar4 = (longlong)iVar1;
        if (3 < iVar1 - 1U) {
          lVar4 = 1;
        }
        iVar2 = iVar6 + 1;
        if (iVar1 != 4) {
          iVar2 = iVar6;
        }
        iVar6 = iVar2 + 1;
        pbVar5 = pbVar5 + lVar4;
      } while (iVar6 < param_2);
    }
  }
  else {
    iVar6 = 0;
    if (0 < param_2) {
      do {
        if (*pbVar5 == 0) {
          return iVar6;
        }
        pbVar3 = pbVar5 + 1;
        if (-1 < *(short *)(**(longlong **)(lVar4 + 0x18) + (ulonglong)*pbVar5 * 2)) {
          pbVar3 = pbVar5;
        }
        pbVar5 = pbVar3 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_2);
    }
  }
  return iVar6;
}



/* ===== 1804fffc0 FUN_1804fffc0 ===== */

undefined8 FUN_1804fffc0(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  char *local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar9;
  char *local_18;
  char **local_10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    *(undefined4 **)(param_1 + 0x18) = puVar4 + 2;
    *(undefined4 *)(param_1 + 0x2c) = *puVar4;
    return 1;
  }
  local_res8 = *(char **)(param_1 + 0x10);
  local_10 = &local_res8;
  local_18 = local_res8;
  iVar7 = FUN_1804f52d0(*(undefined8 *)(param_1 + 8),&local_18,10,1);
  iVar8 = iVar7 + -1;
  *(char **)(param_1 + 0x10) = local_res8 + 1;
  if (*(int *)(param_1 + 0x470) != 1) {
    *(undefined4 *)(param_1 + 0x2c) = **(undefined4 **)(param_1 + 0x470 + (longlong)iVar7 * 0x18);
    return 1;
  }
  if (((iVar8 < 0) || (*local_res8 != '$')) || (99 < iVar8)) {
    lVar5 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined4 *)(lVar5 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x39);
  if (iVar8 <= *(int *)(param_1 + 0xde0)) {
    iVar8 = *(int *)(param_1 + 0xde0);
  }
  *(int *)(param_1 + 0xde0) = iVar8;
  piVar1 = (int *)(param_1 + ((longlong)iVar7 + 0x2f) * 0x18);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined1 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar3;
  }
  else {
    cVar6 = FUN_1804f8548(param_1,piVar1,1,uVar2,CONCAT44(uVar9,iVar3));
    if (cVar6 == '\0') {
      lVar5 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar5 + 0x30) = 1;
      *(undefined4 *)(lVar5 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 18050012c FUN_18050012c ===== */

undefined8 FUN_18050012c(longlong param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  short *local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar9;
  short *local_18;
  short **local_10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    *(undefined4 **)(param_1 + 0x18) = puVar4 + 2;
    *(undefined4 *)(param_1 + 0x2c) = *puVar4;
    return 1;
  }
  local_res8 = *(short **)(param_1 + 0x10);
  local_10 = &local_res8;
  local_18 = local_res8;
  iVar7 = FUN_1804f5584(*(undefined8 *)(param_1 + 8),&local_18,10,1);
  iVar8 = iVar7 + -1;
  *(short **)(param_1 + 0x10) = local_res8 + 1;
  if (*(int *)(param_1 + 0x470) != 1) {
    *(undefined4 *)(param_1 + 0x2c) = **(undefined4 **)(param_1 + 0x470 + (longlong)iVar7 * 0x18);
    return 1;
  }
  if (((iVar8 < 0) || (*local_res8 != 0x24)) || (99 < iVar8)) {
    lVar5 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined4 *)(lVar5 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined2 *)(param_1 + 0x3a);
  if (iVar8 <= *(int *)(param_1 + 0xde0)) {
    iVar8 = *(int *)(param_1 + 0xde0);
  }
  *(int *)(param_1 + 0xde0) = iVar8;
  piVar1 = (int *)(param_1 + ((longlong)iVar7 + 0x2f) * 0x18);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined2 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar3;
  }
  else {
    cVar6 = FUN_1804f877c(param_1,piVar1,1,uVar2,CONCAT44(uVar9,iVar3));
    if (cVar6 == '\0') {
      lVar5 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar5 + 0x30) = 1;
      *(undefined4 *)(lVar5 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1805002a0 FUN_1805002a0 ===== */

void FUN_1805002a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1804f84e0();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x90);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x88);
  FUN_1805278a4(lVar1,(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8));
  FUN_180527910(lVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 8));
  if ((*(uint *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar1 + 0x3a8) = *(uint *)(lVar1 + 0x3a8) | 2;
    *(undefined1 *)(param_1 + 0x28) = 2;
  }
  return;
}



/* ===== 180500318 FUN_180500318 ===== */

undefined8 FUN_180500318(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  char *local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar9;
  char *local_18;
  char **local_10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    *(undefined4 **)(param_1 + 0x18) = puVar4 + 2;
    *(undefined4 *)(param_1 + 0x30) = *puVar4;
    return 1;
  }
  local_res8 = *(char **)(param_1 + 0x10);
  local_10 = &local_res8;
  local_18 = local_res8;
  iVar7 = FUN_1804f52d0(*(undefined8 *)(param_1 + 8),&local_18,10,1);
  iVar8 = iVar7 + -1;
  *(char **)(param_1 + 0x10) = local_res8 + 1;
  if (*(int *)(param_1 + 0x470) != 1) {
    *(undefined4 *)(param_1 + 0x30) = **(undefined4 **)(param_1 + 0x470 + (longlong)iVar7 * 0x18);
    return 1;
  }
  if (((iVar8 < 0) || (*local_res8 != '$')) || (99 < iVar8)) {
    lVar5 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined4 *)(lVar5 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x39);
  if (iVar8 <= *(int *)(param_1 + 0xde0)) {
    iVar8 = *(int *)(param_1 + 0xde0);
  }
  *(int *)(param_1 + 0xde0) = iVar8;
  piVar1 = (int *)(param_1 + ((longlong)iVar7 + 0x2f) * 0x18);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined1 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar3;
  }
  else {
    cVar6 = FUN_1804f8548(param_1,piVar1,1,uVar2,CONCAT44(uVar9,iVar3));
    if (cVar6 == '\0') {
      lVar5 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar5 + 0x30) = 1;
      *(undefined4 *)(lVar5 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 180500484 FUN_180500484 ===== */

undefined8 FUN_180500484(longlong param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  short *local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar9;
  short *local_18;
  short **local_10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    *(undefined4 **)(param_1 + 0x18) = puVar4 + 2;
    *(undefined4 *)(param_1 + 0x30) = *puVar4;
    return 1;
  }
  local_res8 = *(short **)(param_1 + 0x10);
  local_10 = &local_res8;
  local_18 = local_res8;
  iVar7 = FUN_1804f5584(*(undefined8 *)(param_1 + 8),&local_18,10,1);
  iVar8 = iVar7 + -1;
  *(short **)(param_1 + 0x10) = local_res8 + 1;
  if (*(int *)(param_1 + 0x470) != 1) {
    *(undefined4 *)(param_1 + 0x30) = **(undefined4 **)(param_1 + 0x470 + (longlong)iVar7 * 0x18);
    return 1;
  }
  if (((iVar8 < 0) || (*local_res8 != 0x24)) || (99 < iVar8)) {
    lVar5 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined4 *)(lVar5 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined2 *)(param_1 + 0x3a);
  if (iVar8 <= *(int *)(param_1 + 0xde0)) {
    iVar8 = *(int *)(param_1 + 0xde0);
  }
  *(int *)(param_1 + 0xde0) = iVar8;
  piVar1 = (int *)(param_1 + ((longlong)iVar7 + 0x2f) * 0x18);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined2 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar3;
  }
  else {
    cVar6 = FUN_1804f877c(param_1,piVar1,1,uVar2,CONCAT44(uVar9,iVar3));
    if (cVar6 == '\0') {
      lVar5 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar5 + 0x30) = 1;
      *(undefined4 *)(lVar5 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1805005f4 FUN_1805005f4 ===== */

undefined8 FUN_1805005f4(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char *local_res8;
  char *local_res10;
  char *local_18;
  char **local_10;
  
  if (*(char *)(param_1 + 0x24) != '\x01') {
    return 1;
  }
  local_18 = *(char **)(param_1 + 0x10);
  if (*local_18 == '%') {
    return 1;
  }
  if (*(int *)(param_1 + 0x474) == 0) {
    if ((byte)(*local_18 - 0x30U) < 10) {
      local_10 = &local_res8;
      local_res8 = local_18;
      iVar2 = FUN_1804f52d0(*(undefined8 *)(param_1 + 8),&local_18,10,1);
      if ((0 < iVar2) && (*local_res8 == '$')) {
        if (*(int *)(param_1 + 0x470) == 1) {
          FUN_180540170(param_1 + 0x480,0,0x960);
        }
        *(undefined4 *)(param_1 + 0x474) = 2;
        goto LAB_18050069a;
      }
    }
    *(undefined4 *)(param_1 + 0x474) = 1;
  }
  else {
    if (*(int *)(param_1 + 0x474) != 2) {
      return 1;
    }
LAB_18050069a:
    local_res10 = *(char **)(param_1 + 0x10);
    local_10 = &local_res10;
    local_18 = local_res10;
    iVar2 = FUN_1804f52d0(*(undefined8 *)(param_1 + 8),&local_18,10,1);
    iVar2 = iVar2 + -1;
    *(int *)(param_1 + 0xde4) = iVar2;
    *(char **)(param_1 + 0x10) = local_res10 + 1;
    if (*(int *)(param_1 + 0x470) == 1) {
      if (((iVar2 < 0) || (*local_res10 != '$')) || (99 < iVar2)) {
        lVar1 = *(longlong *)(param_1 + 8);
        *(undefined1 *)(lVar1 + 0x30) = 1;
        *(undefined4 *)(lVar1 + 0x2c) = 0x16;
        FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
        return 0;
      }
      if (iVar2 <= *(int *)(param_1 + 0xde0)) {
        iVar2 = *(int *)(param_1 + 0xde0);
      }
      *(int *)(param_1 + 0xde0) = iVar2;
    }
  }
  return 1;
}



/* ===== 180500738 FUN_180500738 ===== */

undefined8 FUN_180500738(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  short *local_res8;
  short *local_res10;
  short *local_18;
  short **local_10;
  
  if (*(char *)(param_1 + 0x24) != '\x01') {
    return 1;
  }
  local_18 = *(short **)(param_1 + 0x10);
  if (*local_18 == 0x25) {
    return 1;
  }
  if (*(int *)(param_1 + 0x474) == 0) {
    if ((ushort)(*local_18 - 0x30U) < 10) {
      local_10 = &local_res8;
      local_res8 = local_18;
      iVar2 = FUN_1804f5584(*(undefined8 *)(param_1 + 8),&local_18,10,1);
      if ((0 < iVar2) && (*local_res8 == 0x24)) {
        if (*(int *)(param_1 + 0x470) == 1) {
          FUN_180540170(param_1 + 0x480,0,0x960);
        }
        *(undefined4 *)(param_1 + 0x474) = 2;
        goto LAB_1805007ea;
      }
    }
    *(undefined4 *)(param_1 + 0x474) = 1;
  }
  else {
    if (*(int *)(param_1 + 0x474) != 2) {
      return 1;
    }
LAB_1805007ea:
    local_res10 = *(short **)(param_1 + 0x10);
    local_10 = &local_res10;
    local_18 = local_res10;
    iVar2 = FUN_1804f5584(*(undefined8 *)(param_1 + 8),&local_18,10,1);
    iVar2 = iVar2 + -1;
    *(int *)(param_1 + 0xde4) = iVar2;
    *(short **)(param_1 + 0x10) = local_res10 + 1;
    if (*(int *)(param_1 + 0x470) == 1) {
      if (((iVar2 < 0) || (*local_res10 != 0x24)) || (99 < iVar2)) {
        lVar1 = *(longlong *)(param_1 + 8);
        *(undefined1 *)(lVar1 + 0x30) = 1;
        *(undefined4 *)(lVar1 + 0x2c) = 0x16;
        FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
        return 0;
      }
      if (iVar2 <= *(int *)(param_1 + 0xde0)) {
        iVar2 = *(int *)(param_1 + 0xde0);
      }
      *(int *)(param_1 + 0xde0) = iVar2;
    }
  }
  return 1;
}



/* ===== 180500888 FUN_180500888 ===== */

ulonglong FUN_180500888(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 in_RAX;
  int *piVar5;
  ulonglong uVar6;
  int *piVar7;
  bool bVar8;
  
  cVar1 = (char)param_1[9];
  piVar5 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  if ((cVar1 == '\0') || (cVar1 == '\a')) {
    if ((param_1[0x11d] == 2) && (param_1[0x11c] == 1)) {
      iVar2 = param_1[0x378];
      piVar5 = param_1 + (longlong)iVar2 * 6 + 6;
      piVar7 = param_1 + 0x120;
      if (param_1 != piVar5) {
        do {
          iVar3 = *piVar7;
          *(undefined8 *)(piVar7 + 2) = *(undefined8 *)(param_1 + 6);
          if ((((iVar3 != 1) && (iVar3 != 2)) && (iVar3 != 3)) && (iVar3 != 4)) goto LAB_180500897;
          *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + 8;
          piVar5 = param_1 + (longlong)iVar2 * 6 + 0x120;
          bVar8 = piVar7 != piVar5;
          piVar7 = piVar7 + 6;
        } while (bVar8);
      }
    }
    uVar6 = CONCAT71((int7)((ulonglong)piVar5 >> 8),1);
  }
  else {
LAB_180500897:
    lVar4 = *(longlong *)(param_1 + 2);
    *(undefined1 *)(lVar4 + 0x30) = 1;
    *(undefined4 *)(lVar4 + 0x2c) = 0x16;
    uVar6 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 2));
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  return uVar6;
}



/* ===== 180500940 FUN_180500940 ===== */

undefined8 FUN_180500940(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  
  if ((*(int *)(param_1 + 0x474) != 2) || (*(int *)(param_1 + 0x470) != 1)) {
    return 1;
  }
  if (99 < *(uint *)(param_1 + 0xde4)) {
    lVar4 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar4 + 0x30) = 1;
    *(undefined4 *)(lVar4 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x39);
  piVar1 = (int *)(param_1 + ((longlong)(int)*(uint *)(param_1 + 0xde4) + 0x30) * 0x18);
  if (*piVar1 == 0) {
    *piVar1 = 4;
    *(undefined1 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar3;
  }
  else {
    cVar5 = FUN_1804f8548(param_1,piVar1,4,uVar2,iVar3);
    if (cVar5 == '\0') {
      lVar4 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar4 + 0x30) = 1;
      *(undefined4 *)(lVar4 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 180500a24 FUN_180500a24 ===== */

undefined8 FUN_180500a24(longlong param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  
  if ((*(int *)(param_1 + 0x474) != 2) || (*(int *)(param_1 + 0x470) != 1)) {
    return 1;
  }
  if (99 < *(uint *)(param_1 + 0xde4)) {
    lVar4 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar4 + 0x30) = 1;
    *(undefined4 *)(lVar4 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined2 *)(param_1 + 0x3a);
  piVar1 = (int *)(param_1 + ((longlong)(int)*(uint *)(param_1 + 0xde4) + 0x30) * 0x18);
  if (*piVar1 == 0) {
    *piVar1 = 4;
    *(undefined2 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar3;
  }
  else {
    cVar5 = FUN_1804f877c(param_1,piVar1,4,uVar2,iVar3);
    if (cVar5 == '\0') {
      lVar4 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar4 + 0x30) = 1;
      *(undefined4 *)(lVar4 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 180500b08 __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required ===== */

/* Library Function - Single Match
    public: static bool __cdecl
   __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(struct _iobuf * __ptr64
   const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(_iobuf *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    uVar2 = _fileno(param_1);
    puVar5 = &DAT_1809198d0;
    if (uVar2 + 2 < 2) {
      puVar4 = &DAT_1809198d0;
    }
    else {
      puVar4 = (undefined *)
               ((&DAT_180c9f990)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    if (puVar4[0x39] == '\0') {
      if (1 < uVar2 + 2) {
        puVar5 = (undefined *)
                 ((&DAT_180c9f990)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_180500b9c;
    }
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    FUN_180527740();
    bVar1 = false;
  }
  else {
LAB_180500b9c:
    bVar1 = true;
  }
  return bVar1;
}



/* ===== 180500ba4 __crt_stdio_output::string_output_adapter<char>::write_string ===== */

/* Library Function - Single Match
    public: void __cdecl __crt_stdio_output::string_output_adapter<char>::write_string(char const *
   __ptr64 const,int,int * __ptr64 const,class __crt_deferred_errno_cache & __ptr64)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_stdio_output::string_output_adapter<char>::write_string
          (string_output_adapter<char> *this,char *param_1,int param_2,int *param_3,
          __crt_deferred_errno_cache *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    uVar4 = (ulonglong)param_2;
    puVar1 = *(undefined8 **)this;
    if (puVar1[2] == puVar1[1]) {
      if (*(char *)(puVar1 + 3) == '\0') {
        *param_3 = -1;
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
    else {
      uVar2 = puVar1[1] - puVar1[2];
      uVar3 = uVar4;
      if (uVar2 < uVar4) {
        uVar3 = uVar2;
      }
      FUN_180540530(*puVar1,param_1,uVar3);
      **(longlong **)this = **(longlong **)this + uVar3;
      *(longlong *)(*(longlong *)this + 0x10) = *(longlong *)(*(longlong *)this + 0x10) + uVar3;
      if (*(char *)(*(longlong *)this + 0x18) == '\0') {
        if (uVar3 == uVar4) {
          *param_3 = *param_3 + (int)uVar3;
        }
        else {
          *param_3 = -1;
        }
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
  }
  return;
}



/* ===== 180500c48 __crt_stdio_output::string_output_adapter<wchar_t>::write_string ===== */

/* Library Function - Single Match
    public: void __cdecl __crt_stdio_output::string_output_adapter<wchar_t>::write_string(wchar_t
   const * __ptr64 const,int,int * __ptr64 const,class __crt_deferred_errno_cache & __ptr64)const
   __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_stdio_output::string_output_adapter<wchar_t>::write_string
          (string_output_adapter<wchar_t> *this,wchar_t *param_1,int param_2,int *param_3,
          __crt_deferred_errno_cache *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2;
    puVar1 = *(undefined8 **)this;
    if (puVar1[2] == puVar1[1]) {
      if (*(char *)(puVar1 + 3) == '\0') {
        *param_3 = -1;
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
    else {
      uVar2 = puVar1[1] - puVar1[2];
      uVar4 = uVar3;
      if (uVar2 < uVar3) {
        uVar4 = uVar2;
      }
      FUN_180540530(*puVar1,param_1,uVar4 * 2);
      **(longlong **)this = **(longlong **)this + uVar4 * 2;
      *(longlong *)(*(longlong *)this + 0x10) = *(longlong *)(*(longlong *)this + 0x10) + uVar4;
      if (*(char *)(*(longlong *)this + 0x18) == '\0') {
        if (uVar4 == uVar3) {
          *param_3 = *param_3 + (int)uVar4;
        }
        else {
          *param_3 = -1;
        }
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
  }
  return;
}



/* ===== 180500cf0 FUN_180500cf0 ===== */

void FUN_180500cf0(longlong *param_1,char *param_2,int param_3,int *param_4,longlong param_5)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = param_2 + param_3;
  uVar1 = *(undefined8 *)(param_5 + 0x2c);
  do {
    if (param_2 == pcVar3) {
LAB_180500da2:
      *(undefined8 *)(param_5 + 0x2c) = uVar1;
      return;
    }
    if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*param_1 + 8) != 0)) &&
       (iVar2 = FUN_18050ff4c((int)*param_2,*param_1,param_5), iVar2 == -1)) {
      if ((*(char *)(param_5 + 0x30) == '\0') || (*(int *)(param_5 + 0x2c) != 0x2a)) {
        *param_4 = -1;
        goto LAB_180500da2;
      }
      if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) != 0) && (*(longlong *)(*param_1 + 8) == 0)) ||
         (iVar2 = FUN_18050ff4c(0x3f,*param_1,param_5), iVar2 != -1)) goto LAB_180500d8e;
      *param_4 = -1;
    }
    else {
LAB_180500d8e:
      *param_4 = *param_4 + 1;
    }
    param_2 = param_2 + 1;
  } while( true );
}



/* ===== 180500dc0 FUN_180500dc0 ===== */

void FUN_180500dc0(longlong *param_1,undefined2 *param_2,int param_3,int *param_4,longlong param_5)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  short sVar3;
  
  uVar2 = *(undefined8 *)(param_5 + 0x2c);
  puVar1 = param_2 + param_3;
  do {
    if (param_2 == puVar1) {
LAB_180500e84:
      *(undefined8 *)(param_5 + 0x2c) = uVar2;
      return;
    }
    if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*param_1 + 8) != 0)) &&
       (sVar3 = FUN_1805290f8(*param_2,*param_1,param_5), sVar3 == -1)) {
      if ((*(char *)(param_5 + 0x30) == '\0') || (*(int *)(param_5 + 0x2c) != 0x2a)) {
        *param_4 = -1;
        goto LAB_180500e84;
      }
      if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) != 0) && (*(longlong *)(*param_1 + 8) == 0)) ||
         (sVar3 = FUN_1805290f8(0x3f,*param_1,param_5), sVar3 != -1)) goto LAB_180500e6b;
      *param_4 = -1;
    }
    else {
LAB_180500e6b:
      *param_4 = *param_4 + 1;
    }
    param_2 = param_2 + 1;
  } while( true );
}



/* ===== 180500ea4 FUN_180500ea4 ===== */

undefined4
FUN_180500ea4(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined8 *local_28;
  
  local_98[0] = 0;
  local_88 = 0;
  local_70 = '\0';
  local_68 = '\0';
  local_60 = '\0';
  if (param_4 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc != 0) goto LAB_180500eed;
    local_80 = PTR_PTR_1809198b8._0_4_;
    uStack_7c = PTR_PTR_1809198b8._4_4_;
    uStack_78 = PTR_DAT_1809198c0._0_4_;
    uStack_74 = PTR_DAT_1809198c0._4_4_;
  }
  else {
    local_80 = *param_4;
    uStack_7c = param_4[1];
    uStack_78 = param_4[2];
    uStack_74 = param_4[3];
  }
  local_70 = '\x01';
LAB_180500eed:
  local_res20 = param_5;
  local_res8 = param_2;
  local_res10 = param_1;
  local_res18 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_180527688(0,0,0,0,0,local_98);
    uVar2 = 0xffffffff;
  }
  else {
    local_48 = &local_res8;
    local_40 = local_98;
    local_38 = &local_res10;
    local_30 = &local_res18;
    local_28 = &local_res20;
    local_58 = param_2;
    local_50 = param_2;
    uVar2 = operator()<>(&param_5,&local_50,&local_48,&local_58);
  }
  uVar1 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar3 = FUN_1804f84e0(local_98);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_60 != '\0') {
    lVar3 = FUN_1804f84e0(local_98);
    *(undefined4 *)(lVar3 + 0x24) = local_64;
  }
  return uVar2;
}



/* ===== 180500fc8 FUN_180500fc8 ===== */

undefined4
FUN_180500fc8(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined8 *local_28;
  
  local_98[0] = 0;
  local_88 = 0;
  local_70 = '\0';
  local_68 = '\0';
  local_60 = '\0';
  if (param_4 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc != 0) goto LAB_180501011;
    local_80 = PTR_PTR_1809198b8._0_4_;
    uStack_7c = PTR_PTR_1809198b8._4_4_;
    uStack_78 = PTR_DAT_1809198c0._0_4_;
    uStack_74 = PTR_DAT_1809198c0._4_4_;
  }
  else {
    local_80 = *param_4;
    uStack_7c = param_4[1];
    uStack_78 = param_4[2];
    uStack_74 = param_4[3];
  }
  local_70 = '\x01';
LAB_180501011:
  local_res20 = param_5;
  local_res8 = param_2;
  local_res10 = param_1;
  local_res18 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_180527688(0,0,0,0,0,local_98);
    uVar2 = 0xffffffff;
  }
  else {
    local_48 = &local_res8;
    local_40 = local_98;
    local_38 = &local_res10;
    local_30 = &local_res18;
    local_28 = &local_res20;
    local_58 = param_2;
    local_50 = param_2;
    uVar2 = operator()<>(&param_5,&local_50,&local_48,&local_58);
  }
  uVar1 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar3 = FUN_1804f84e0(local_98);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_60 != '\0') {
    lVar3 = FUN_1804f84e0(local_98);
    *(undefined4 *)(lVar3 + 0x24) = local_64;
  }
  return uVar2;
}



/* ===== 1805010ec FUN_1805010ec ===== */

undefined4
FUN_1805010ec(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined8 *local_28;
  
  local_98[0] = 0;
  local_88 = 0;
  local_70 = '\0';
  local_68 = '\0';
  local_60 = '\0';
  if (param_4 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc != 0) goto LAB_180501135;
    local_80 = PTR_PTR_1809198b8._0_4_;
    uStack_7c = PTR_PTR_1809198b8._4_4_;
    uStack_78 = PTR_DAT_1809198c0._0_4_;
    uStack_74 = PTR_DAT_1809198c0._4_4_;
  }
  else {
    local_80 = *param_4;
    uStack_7c = param_4[1];
    uStack_78 = param_4[2];
    uStack_74 = param_4[3];
  }
  local_70 = '\x01';
LAB_180501135:
  local_res20 = param_5;
  local_res8 = param_2;
  local_res10 = param_1;
  local_res18 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_180527688(0,0,0,0,0,local_98);
    uVar2 = 0xffffffff;
  }
  else {
    local_48 = &local_res8;
    local_40 = local_98;
    local_38 = &local_res10;
    local_30 = &local_res18;
    local_28 = &local_res20;
    local_58 = param_2;
    local_50 = param_2;
    uVar2 = operator()<>(&param_5,&local_50,&local_48,&local_58);
  }
  uVar1 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar3 = FUN_1804f84e0(local_98);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_60 != '\0') {
    lVar3 = FUN_1804f84e0(local_98);
    *(undefined4 *)(lVar3 + 0x24) = local_64;
  }
  return uVar2;
}



/* ===== 180501210 FUN_180501210 ===== */

undefined4
FUN_180501210(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined8 *local_28;
  
  local_98[0] = 0;
  local_88 = 0;
  local_70 = '\0';
  local_68 = '\0';
  local_60 = '\0';
  if (param_4 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc != 0) goto LAB_180501259;
    local_80 = PTR_PTR_1809198b8._0_4_;
    uStack_7c = PTR_PTR_1809198b8._4_4_;
    uStack_78 = PTR_DAT_1809198c0._0_4_;
    uStack_74 = PTR_DAT_1809198c0._4_4_;
  }
  else {
    local_80 = *param_4;
    uStack_7c = param_4[1];
    uStack_78 = param_4[2];
    uStack_74 = param_4[3];
  }
  local_70 = '\x01';
LAB_180501259:
  local_res20 = param_5;
  local_res8 = param_2;
  local_res10 = param_1;
  local_res18 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_180527688(0,0,0,0,0,local_98);
    uVar2 = 0xffffffff;
  }
  else {
    local_48 = &local_res8;
    local_40 = local_98;
    local_38 = &local_res10;
    local_30 = &local_res18;
    local_28 = &local_res20;
    local_58 = param_2;
    local_50 = param_2;
    uVar2 = operator()<>(&param_5,&local_50,&local_48,&local_58);
  }
  uVar1 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar3 = FUN_1804f84e0(local_98);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_60 != '\0') {
    lVar3 = FUN_1804f84e0(local_98);
    *(undefined4 *)(lVar3 + 0x24) = local_64;
  }
  return uVar2;
}



/* ===== 180501334 FUN_180501334 ===== */

undefined4
FUN_180501334(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined8 *local_28;
  
  local_98[0] = 0;
  local_88 = 0;
  local_70 = '\0';
  local_68 = '\0';
  local_60 = '\0';
  if (param_4 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc != 0) goto LAB_18050137d;
    local_80 = PTR_PTR_1809198b8._0_4_;
    uStack_7c = PTR_PTR_1809198b8._4_4_;
    uStack_78 = PTR_DAT_1809198c0._0_4_;
    uStack_74 = PTR_DAT_1809198c0._4_4_;
  }
  else {
    local_80 = *param_4;
    uStack_7c = param_4[1];
    uStack_78 = param_4[2];
    uStack_74 = param_4[3];
  }
  local_70 = '\x01';
LAB_18050137d:
  local_res20 = param_5;
  local_res8 = param_2;
  local_res10 = param_1;
  local_res18 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_180527688(0,0,0,0,0,local_98);
    uVar2 = 0xffffffff;
  }
  else {
    local_48 = &local_res8;
    local_40 = local_98;
    local_38 = &local_res10;
    local_30 = &local_res18;
    local_28 = &local_res20;
    local_58 = param_2;
    local_50 = param_2;
    uVar2 = operator()<>(&param_5,&local_50,&local_48,&local_58);
  }
  uVar1 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar3 = FUN_1804f84e0(local_98);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_60 != '\0') {
    lVar3 = FUN_1804f84e0(local_98);
    *(undefined4 *)(lVar3 + 0x24) = local_64;
  }
  return uVar2;
}



/* ===== 180501458 FUN_180501458 ===== */

undefined4
FUN_180501458(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined8 *local_28;
  
  local_98[0] = 0;
  local_88 = 0;
  local_70 = '\0';
  local_68 = '\0';
  local_60 = '\0';
  if (param_4 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc != 0) goto LAB_1805014a1;
    local_80 = PTR_PTR_1809198b8._0_4_;
    uStack_7c = PTR_PTR_1809198b8._4_4_;
    uStack_78 = PTR_DAT_1809198c0._0_4_;
    uStack_74 = PTR_DAT_1809198c0._4_4_;
  }
  else {
    local_80 = *param_4;
    uStack_7c = param_4[1];
    uStack_78 = param_4[2];
    uStack_74 = param_4[3];
  }
  local_70 = '\x01';
LAB_1805014a1:
  local_res20 = param_5;
  local_res8 = param_2;
  local_res10 = param_1;
  local_res18 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_180527688(0,0,0,0,0,local_98);
    uVar2 = 0xffffffff;
  }
  else {
    local_48 = &local_res8;
    local_40 = local_98;
    local_38 = &local_res10;
    local_30 = &local_res18;
    local_28 = &local_res20;
    local_58 = param_2;
    local_50 = param_2;
    uVar2 = operator()<>(&param_5,&local_50,&local_48,&local_58);
  }
  uVar1 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar3 = FUN_1804f84e0(local_98);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_60 != '\0') {
    lVar3 = FUN_1804f84e0(local_98);
    *(undefined4 *)(lVar3 + 0x24) = local_64;
  }
  return uVar2;
}



/* ===== 18050157c FUN_18050157c ===== */

int FUN_18050157c(undefined4 param_1,undefined1 *param_2,ulonglong param_3,ulonglong param_4,
                 longlong param_5,undefined4 *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auVar2 [8];
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  longlong local_58 [2];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char local_30;
  undefined1 local_2c [8];
  undefined4 local_24;
  char local_20;
  
  local_58[0] = 0;
  local_48 = 0;
  local_30 = '\0';
  uVar1 = local_2c._0_4_;
  local_2c[4] = 0;
  auVar2 = local_2c;
  local_20 = '\0';
  if (param_6 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc == 0) {
      param_1 = PTR_PTR_1809198b8._0_4_;
      uStack_3c = PTR_PTR_1809198b8._4_4_;
      uStack_38 = PTR_DAT_1809198c0._0_4_;
      uStack_34 = PTR_DAT_1809198c0._4_4_;
      goto LAB_1805015d9;
    }
  }
  else {
    param_1 = *param_6;
    uStack_3c = param_6[1];
    uStack_38 = param_6[2];
    uStack_34 = param_6[3];
LAB_1805015d9:
    local_30 = '\x01';
    local_40 = param_1;
  }
  if (param_5 != 0) {
    if (param_4 == 0) {
      if (param_2 != (undefined1 *)0x0) goto LAB_180501613;
      if (param_3 == 0) {
        iVar3 = 0;
        goto LAB_1805016e2;
      }
    }
    else if (param_2 != (undefined1 *)0x0) {
LAB_180501613:
      if (param_3 != 0) {
        iVar5 = -1;
        if (param_4 < param_3) {
          iVar3 = FUN_1804f3464(param_1,param_2,param_4 + 1,param_5,local_58,param_7);
          if (iVar3 == -2) {
LAB_180501649:
            iVar3 = iVar5;
            if (local_2c[4] != '\0') {
              if (local_2c._0_4_ == 0x22) {
                local_2c._4_4_ = auVar2._4_4_;
                local_2c = (undefined1  [8])CONCAT44(local_2c._4_4_,uVar1);
              }
            }
            goto LAB_1805016e2;
          }
LAB_18050167c:
          if (-1 < iVar3) goto LAB_1805016e2;
        }
        else {
          iVar3 = FUN_1804f3464();
          param_2[param_3 - 1] = 0;
          if (iVar3 != -2) goto LAB_18050167c;
          iVar3 = -2;
          if (param_4 == 0xffffffffffffffff) goto LAB_180501649;
        }
        *param_2 = 0;
        bVar6 = iVar3 == -2;
        iVar3 = iVar5;
        if (bVar6) {
          local_2c._0_5_ = 0x100000000;
          local_2c._0_4_ = 0x22;
          FUN_180527688(0,0,0,0,0,local_58);
        }
        goto LAB_1805016e2;
      }
    }
  }
  local_2c._0_5_ = 0x100000000;
  local_2c._0_4_ = 0x16;
  FUN_180527688(0,0,0,0,0,local_58);
  iVar3 = -1;
LAB_1805016e2:
  if (local_30 == '\x02') {
    *(uint *)(local_58[0] + 0x3a8) = *(uint *)(local_58[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_2c[4] != '\0') {
    uVar1 = local_2c._0_4_;
    lVar4 = FUN_1804f84e0(local_58);
    *(undefined4 *)(lVar4 + 0x20) = uVar1;
  }
  if (local_20 != '\0') {
    lVar4 = FUN_1804f84e0(local_58);
    *(undefined4 *)(lVar4 + 0x24) = local_24;
  }
  return iVar3;
}



/* ===== 180501740 FUN_180501740 ===== */

int FUN_180501740(undefined4 param_1,undefined2 *param_2,ulonglong param_3,ulonglong param_4,
                 longlong param_5,undefined4 *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auVar2 [8];
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  longlong local_58 [2];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char local_30;
  undefined1 local_2c [8];
  undefined4 local_24;
  char local_20;
  
  local_58[0] = 0;
  local_48 = 0;
  local_30 = '\0';
  uVar1 = local_2c._0_4_;
  local_2c[4] = 0;
  auVar2 = local_2c;
  local_20 = '\0';
  if (param_6 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc == 0) {
      param_1 = PTR_PTR_1809198b8._0_4_;
      uStack_3c = PTR_PTR_1809198b8._4_4_;
      uStack_38 = PTR_DAT_1809198c0._0_4_;
      uStack_34 = PTR_DAT_1809198c0._4_4_;
      goto LAB_18050179d;
    }
  }
  else {
    param_1 = *param_6;
    uStack_3c = param_6[1];
    uStack_38 = param_6[2];
    uStack_34 = param_6[3];
LAB_18050179d:
    local_30 = '\x01';
    local_40 = param_1;
  }
  if (param_5 != 0) {
    if (param_4 == 0) {
      if (param_2 != (undefined2 *)0x0) goto LAB_1805017d7;
      if (param_3 == 0) {
        iVar3 = 0;
        goto LAB_1805018a8;
      }
    }
    else if (param_2 != (undefined2 *)0x0) {
LAB_1805017d7:
      if (param_3 != 0) {
        iVar5 = -1;
        if (param_4 < param_3) {
          iVar3 = FUN_1804f3614(param_1,param_2,param_4 + 1,param_5,local_58,param_7);
          if (iVar3 == -2) {
LAB_18050180d:
            iVar3 = iVar5;
            if (local_2c[4] != '\0') {
              if (local_2c._0_4_ == 0x22) {
                local_2c._4_4_ = auVar2._4_4_;
                local_2c = (undefined1  [8])CONCAT44(local_2c._4_4_,uVar1);
              }
            }
            goto LAB_1805018a8;
          }
LAB_180501841:
          if (-1 < iVar3) goto LAB_1805018a8;
        }
        else {
          iVar3 = FUN_1804f3614();
          param_2[param_3 - 1] = 0;
          if (iVar3 != -2) goto LAB_180501841;
          iVar3 = -2;
          if (param_4 == 0xffffffffffffffff) goto LAB_18050180d;
        }
        *param_2 = 0;
        bVar6 = iVar3 == -2;
        iVar3 = iVar5;
        if (bVar6) {
          local_2c._0_5_ = 0x100000000;
          local_2c._0_4_ = 0x22;
          FUN_180527688(0,0,0,0,0,local_58);
        }
        goto LAB_1805018a8;
      }
    }
  }
  local_2c._0_5_ = 0x100000000;
  local_2c._0_4_ = 0x16;
  FUN_180527688(0,0,0,0,0,local_58);
  iVar3 = -1;
LAB_1805018a8:
  if (local_30 == '\x02') {
    *(uint *)(local_58[0] + 0x3a8) = *(uint *)(local_58[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_2c[4] != '\0') {
    uVar1 = local_2c._0_4_;
    lVar4 = FUN_1804f84e0(local_58);
    *(undefined4 *)(lVar4 + 0x20) = uVar1;
  }
  if (local_20 != '\0') {
    lVar4 = FUN_1804f84e0(local_58);
    *(undefined4 *)(lVar4 + 0x24) = local_24;
  }
  return iVar3;
}



/* ===== 180501904 FUN_180501904 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180501904(ulonglong param_1,undefined1 *param_2,ulonglong param_3,longlong param_4,
                       undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_548 [32];
  undefined8 local_528;
  longlong *local_520;
  undefined1 *local_518;
  ulonglong local_510;
  ulonglong local_508;
  undefined1 local_500;
  undefined4 local_4ff;
  undefined2 local_4fb;
  undefined1 local_4f9;
  longlong local_4f8 [2];
  undefined1 local_4e8;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  char local_4d0;
  undefined4 local_4cc;
  char local_4c8;
  undefined4 local_4c4;
  char local_4c0;
  ulonglong local_4b8;
  longlong *local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined4 local_488;
  undefined2 local_480;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 **local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_548;
  local_4f8[0] = 0;
  local_4e8 = 0;
  local_4d0 = '\0';
  local_4c8 = '\0';
  local_4c0 = '\0';
  if (param_5 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc == 0) {
      local_4e0 = PTR_PTR_1809198b8._0_4_;
      uStack_4dc = PTR_PTR_1809198b8._4_4_;
      uStack_4d8 = PTR_DAT_1809198c0._0_4_;
      uStack_4d4 = PTR_DAT_1809198c0._4_4_;
      goto LAB_180501973;
    }
  }
  else {
    local_4e0 = *param_5;
    uStack_4dc = param_5[1];
    uStack_4d8 = param_5[2];
    uStack_4d4 = param_5[3];
LAB_180501973:
    local_4d0 = '\x01';
  }
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined1 *)0x0)))) {
    local_520 = local_4f8;
    local_4c8 = '\x01';
    local_528 = 0;
    local_4cc = 0x16;
    FUN_180527688(0,0,0,0);
  }
  else {
    local_4ff = 0;
    local_4fb = 0;
    local_4f9 = 0;
    local_508 = 0;
    if (((param_1 & 2) != 0) || (local_500 = 0, param_2 == (undefined1 *)0x0)) {
      local_500 = 1;
    }
    local_4b0 = local_4f8;
    local_498 = 0;
    local_58 = &local_518;
    local_494 = 0;
    local_4a0 = param_6;
    local_490 = 0;
    local_488 = 0;
    local_480 = 0;
    local_470 = 0;
    local_46c = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_50 = 0;
    local_518 = param_2;
    local_510 = param_3;
    local_4b8 = param_1;
    local_4a8 = param_4;
    iVar2 = FUN_1804f9d24(&local_4b8);
    uVar4 = (ulonglong)iVar2;
    if (param_2 == (undefined1 *)0x0) {
LAB_180501ae6:
      FUN_1805277b0(uStack_60);
      goto LAB_180501af2;
    }
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) != 0) {
        if (param_3 != 0) {
          if (iVar2 < 0) {
            *param_2 = 0;
          }
          else {
            if (local_508 != param_3) goto LAB_180501ae2;
            param_2[param_3 - 1] = 0;
          }
        }
        goto LAB_180501ae6;
      }
      if (param_3 != 0) {
        if (local_508 == param_3) {
          param_2[param_3 - 1] = 0;
          FUN_1805277b0(uStack_60);
          uVar4 = 0xfffffffe;
          goto LAB_180501af2;
        }
        goto LAB_180501ae2;
      }
    }
    else if ((param_3 != 0) || (iVar2 == 0)) {
      if (local_508 != param_3) {
LAB_180501ae2:
        param_2[local_508] = 0;
        goto LAB_180501ae6;
      }
      if ((iVar2 < 0) || (uVar4 <= param_3)) goto LAB_180501ae6;
    }
    FUN_1805277b0(uStack_60);
  }
  uVar4 = 0xffffffff;
LAB_180501af2:
  uVar1 = local_4cc;
  if (local_4d0 == '\x02') {
    *(uint *)(local_4f8[0] + 0x3a8) = *(uint *)(local_4f8[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_4c8 != '\0') {
    lVar3 = FUN_1804f84e0(local_4f8);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_4c0 != '\0') {
    lVar3 = FUN_1804f84e0(local_4f8);
    *(undefined4 *)(lVar3 + 0x24) = local_4c4;
  }
  return uVar4 & 0xffffffff;
}



/* ===== 180501b58 FUN_180501b58 ===== */

undefined4 FUN_180501b58(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *in_stack_00000028;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (in_stack_00000028 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc != 0) goto LAB_180501ba6;
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  else {
    local_30 = *in_stack_00000028;
    uStack_2c = in_stack_00000028[1];
    uStack_28 = in_stack_00000028[2];
    uStack_24 = in_stack_00000028[3];
  }
  local_20 = '\x01';
LAB_180501ba6:
  uVar1 = FUN_1804f37cc();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 180501c10 FUN_180501c10 ===== */

int FUN_180501c10(undefined8 param_1,undefined1 *param_2,longlong param_3,longlong param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_5 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc == 0) {
      local_30 = PTR_PTR_1809198b8._0_4_;
      uStack_2c = PTR_PTR_1809198b8._4_4_;
      uStack_28 = PTR_DAT_1809198c0._0_4_;
      uStack_24 = PTR_DAT_1809198c0._4_4_;
      goto LAB_180501c5d;
    }
  }
  else {
    local_30 = *param_5;
    uStack_2c = param_5[1];
    uStack_28 = param_5[2];
    uStack_24 = param_5[3];
LAB_180501c5d:
    local_20 = '\x01';
  }
  if (((param_4 == 0) || (param_2 == (undefined1 *)0x0)) || (param_3 == 0)) {
    local_1c = 0x16;
  }
  else {
    iVar2 = FUN_1804f3464();
    if (iVar2 < 0) {
      *param_2 = 0;
    }
    if (iVar2 != -2) goto LAB_180501cce;
    local_1c = 0x22;
  }
  local_18 = '\x01';
  FUN_180527688(0,0,0,0,0,local_48);
  iVar2 = -1;
LAB_180501cce:
  uVar1 = local_1c;
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar3 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_10 != '\0') {
    lVar3 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar3 + 0x24) = local_14;
  }
  return iVar2;
}



/* ===== 180501d24 FUN_180501d24 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180501d24(ulonglong param_1,undefined2 *param_2,ulonglong param_3,longlong param_4,
                       undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_548 [32];
  undefined8 local_528;
  longlong *local_520;
  undefined2 *local_518;
  ulonglong local_510;
  ulonglong local_508;
  undefined1 local_500;
  undefined4 local_4ff;
  undefined2 local_4fb;
  undefined1 local_4f9;
  longlong local_4f8 [2];
  undefined1 local_4e8;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  char local_4d0;
  undefined4 local_4cc;
  char local_4c8;
  undefined4 local_4c4;
  char local_4c0;
  ulonglong local_4b8;
  longlong *local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined4 local_488;
  undefined1 local_480;
  undefined2 local_47e;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 **local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_548;
  local_4f8[0] = 0;
  local_4e8 = 0;
  local_4d0 = '\0';
  local_4c8 = '\0';
  local_4c0 = '\0';
  if (param_5 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc == 0) {
      local_4e0 = PTR_PTR_1809198b8._0_4_;
      uStack_4dc = PTR_PTR_1809198b8._4_4_;
      uStack_4d8 = PTR_DAT_1809198c0._0_4_;
      uStack_4d4 = PTR_DAT_1809198c0._4_4_;
      goto LAB_180501d93;
    }
  }
  else {
    local_4e0 = *param_5;
    uStack_4dc = param_5[1];
    uStack_4d8 = param_5[2];
    uStack_4d4 = param_5[3];
LAB_180501d93:
    local_4d0 = '\x01';
  }
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined2 *)0x0)))) {
    local_520 = local_4f8;
    local_4c8 = '\x01';
    local_528 = 0;
    local_4cc = 0x16;
    FUN_180527688(0,0,0,0);
  }
  else {
    local_4ff = 0;
    local_4fb = 0;
    local_4f9 = 0;
    local_508 = 0;
    if (((param_1 & 2) != 0) || (local_500 = 0, param_2 == (undefined2 *)0x0)) {
      local_500 = 1;
    }
    local_4b0 = local_4f8;
    local_498 = 0;
    local_58 = &local_518;
    local_494 = 0;
    local_4a0 = param_6;
    local_490 = 0;
    local_488 = 0;
    local_480 = 0;
    local_47e = 0;
    local_470 = 0;
    local_46c = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_50 = 0;
    local_518 = param_2;
    local_510 = param_3;
    local_4b8 = param_1;
    local_4a8 = param_4;
    iVar2 = FUN_1804faf90(&local_4b8);
    uVar4 = (ulonglong)iVar2;
    if (param_2 == (undefined2 *)0x0) {
LAB_180501f0e:
      FUN_1805277b0(uStack_60);
      goto LAB_180501f1a;
    }
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) != 0) {
        if (param_3 != 0) {
          if (iVar2 < 0) {
            *param_2 = 0;
          }
          else {
            if (local_508 != param_3) goto LAB_180501f09;
            param_2[param_3 - 1] = 0;
          }
        }
        goto LAB_180501f0e;
      }
      if (param_3 != 0) {
        if (local_508 == param_3) {
          param_2[param_3 - 1] = 0;
          FUN_1805277b0(uStack_60);
          uVar4 = 0xfffffffe;
          goto LAB_180501f1a;
        }
        goto LAB_180501f09;
      }
    }
    else if ((param_3 != 0) || (iVar2 == 0)) {
      if (local_508 != param_3) {
LAB_180501f09:
        param_2[local_508] = 0;
        goto LAB_180501f0e;
      }
      if ((iVar2 < 0) || (uVar4 <= param_3)) goto LAB_180501f0e;
    }
    FUN_1805277b0(uStack_60);
  }
  uVar4 = 0xffffffff;
LAB_180501f1a:
  uVar1 = local_4cc;
  if (local_4d0 == '\x02') {
    *(uint *)(local_4f8[0] + 0x3a8) = *(uint *)(local_4f8[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_4c8 != '\0') {
    lVar3 = FUN_1804f84e0(local_4f8);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_4c0 != '\0') {
    lVar3 = FUN_1804f84e0(local_4f8);
    *(undefined4 *)(lVar3 + 0x24) = local_4c4;
  }
  return uVar4 & 0xffffffff;
}



/* ===== 180501f80 FUN_180501f80 ===== */

undefined4 FUN_180501f80(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *in_stack_00000028;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (in_stack_00000028 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc != 0) goto LAB_180501fce;
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  else {
    local_30 = *in_stack_00000028;
    uStack_2c = in_stack_00000028[1];
    uStack_28 = in_stack_00000028[2];
    uStack_24 = in_stack_00000028[3];
  }
  local_20 = '\x01';
LAB_180501fce:
  uVar1 = FUN_1804f3998();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 180502038 FUN_180502038 ===== */

int FUN_180502038(undefined8 param_1,undefined2 *param_2,longlong param_3,longlong param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_5 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc == 0) {
      local_30 = PTR_PTR_1809198b8._0_4_;
      uStack_2c = PTR_PTR_1809198b8._4_4_;
      uStack_28 = PTR_DAT_1809198c0._0_4_;
      uStack_24 = PTR_DAT_1809198c0._4_4_;
      goto LAB_180502085;
    }
  }
  else {
    local_30 = *param_5;
    uStack_2c = param_5[1];
    uStack_28 = param_5[2];
    uStack_24 = param_5[3];
LAB_180502085:
    local_20 = '\x01';
  }
  if (((param_4 == 0) || (param_2 == (undefined2 *)0x0)) || (param_3 == 0)) {
    local_1c = 0x16;
  }
  else {
    iVar2 = FUN_1804f3614();
    if (iVar2 < 0) {
      *param_2 = 0;
    }
    if (iVar2 != -2) goto LAB_1805020f6;
    local_1c = 0x22;
  }
  local_18 = '\x01';
  FUN_180527688(0,0,0,0,0,local_48);
  iVar2 = -1;
LAB_1805020f6:
  uVar1 = local_1c;
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar3 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_10 != '\0') {
    lVar3 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar3 + 0x24) = local_14;
  }
  return iVar2;
}



/* ===== 180502150 FUN_180502150 ===== */

ulonglong FUN_180502150(void)

{
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  double dVar6;
  double dVar7;
  
  fVar2 = in_ZMM0._0_4_;
  if (((byte)DAT_180c9fd94 & 3) == 3) {
    uVar1 = (uint)fVar2 >> 0x14 & 0x7ff;
    if (0x42f < uVar1) {
      if (fVar2 == -INFINITY) {
        return 0;
      }
      if (0x7f7 < uVar1) {
        return (ulonglong)(uint)(fVar2 + fVar2);
      }
      if (0.0 < fVar2) {
        uVar3 = FUN_180529e20(0);
        return uVar3;
      }
      if (fVar2 <= DAT_180576d08) {
        uVar3 = FUN_180529e70(0);
        return uVar3;
      }
    }
    dVar6 = (double)fVar2 + DAT_18057d580;
    dVar7 = (double)fVar2 - (dVar6 - DAT_18057d580);
    dVar6 = (dVar7 * dVar7 * (DAT_18057d588 * dVar7 + DAT_18057d590) +
            DAT_18057d598 * dVar7 + DAT_1808ac500) *
            (double)(((longlong)dVar6 << 0x2f) +
                    *(longlong *)(&DAT_18057d480 + (ulonglong)(SUB84(dVar6,0) & 0x1f) * 8));
    return CONCAT44((int)((ulonglong)dVar6 >> 0x20),(float)dVar6);
  }
  auVar4._16_48_ = in_ZMM1._16_48_;
  auVar4._0_16_ = in_ZMM0._0_16_;
  uVar1 = (uint)fVar2 >> 0x14 & 0x7ff;
  auVar5._4_60_ = auVar4._4_60_;
  if (0x42f < uVar1) {
    if (fVar2 == -INFINITY) {
      return 0;
    }
    if (0x7f7 < uVar1) {
      auVar5._0_4_ = fVar2 + fVar2;
      return auVar5._0_8_;
    }
    if (0.0 < fVar2) {
      uVar3 = FUN_180529e20(0);
      return uVar3;
    }
    if (fVar2 <= DAT_180576d08) {
      uVar3 = FUN_180529e70(0);
      return uVar3;
    }
  }
  dVar6 = (double)fVar2 + DAT_18057d580;
  dVar7 = (double)fVar2 - (dVar6 - DAT_18057d580);
  return (ulonglong)
         (uint)(float)(((dVar7 * DAT_18057d588 + DAT_18057d590) * dVar7 * dVar7 +
                       dVar7 * DAT_18057d598 + DAT_1808ac500) *
                      (double)(((longlong)dVar6 << 0x2f) +
                              *(longlong *)(&DAT_18057d480 + (ulonglong)(SUB84(dVar6,0) & 0x1f) * 8)
                              ));
}



/* ===== 180502250 operator()<> ===== */

/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583>,class <lambda_f3caf1ecae5fe01a9a1a6239afa44510> &
   __ptr64,class <lambda_c640b76c0755ae85b317b35c67c61e6b> >(class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583> && __ptr64,class
   <lambda_f3caf1ecae5fe01a9a1a6239afa44510> & __ptr64,class
   <lambda_c640b76c0755ae85b317b35c67c61e6b> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6>,class <lambda_a775ed57af18ba8e4d5dc780aa9068fe> &
   __ptr64,class <lambda_975a71a6baa488a08f4e15f6b0339b9e> >(class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6> && __ptr64,class
   <lambda_a775ed57af18ba8e4d5dc780aa9068fe> & __ptr64,class
   <lambda_975a71a6baa488a08f4e15f6b0339b9e> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_1c23a5dd5e46d7c5fbe45428cfdcd388>,class <lambda_ad9c22e73f4850e44729a5f831ae9ec1> &
   __ptr64,class <lambda_13a597834fd3cef18bd4341e137232db> >(class
   <lambda_1c23a5dd5e46d7c5fbe45428cfdcd388> && __ptr64,class
   <lambda_ad9c22e73f4850e44729a5f831ae9ec1> & __ptr64,class
   <lambda_13a597834fd3cef18bd4341e137232db> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_2647abb55a408a205467c4169a724277>,class <lambda_576477a770bb5ab586b2d9569451c7f7> &
   __ptr64,class <lambda_c2b006f504a10a4cf14b9a1fbce2a01e> >(class
   <lambda_2647abb55a408a205467c4169a724277> && __ptr64,class
   <lambda_576477a770bb5ab586b2d9569451c7f7> & __ptr64,class
   <lambda_c2b006f504a10a4cf14b9a1fbce2a01e> && __ptr64) __ptr64
     22 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4
operator()<>(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  
  FUN_1805110a4(*param_2);
  uVar1 = FUN_18050a8f8(param_3);
  FUN_1805110b0(*param_4);
  return uVar1;
}



/* ===== 180502290 operator()<> ===== */

/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583>,class <lambda_f3caf1ecae5fe01a9a1a6239afa44510> &
   __ptr64,class <lambda_c640b76c0755ae85b317b35c67c61e6b> >(class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583> && __ptr64,class
   <lambda_f3caf1ecae5fe01a9a1a6239afa44510> & __ptr64,class
   <lambda_c640b76c0755ae85b317b35c67c61e6b> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6>,class <lambda_a775ed57af18ba8e4d5dc780aa9068fe> &
   __ptr64,class <lambda_975a71a6baa488a08f4e15f6b0339b9e> >(class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6> && __ptr64,class
   <lambda_a775ed57af18ba8e4d5dc780aa9068fe> & __ptr64,class
   <lambda_975a71a6baa488a08f4e15f6b0339b9e> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_1c23a5dd5e46d7c5fbe45428cfdcd388>,class <lambda_ad9c22e73f4850e44729a5f831ae9ec1> &
   __ptr64,class <lambda_13a597834fd3cef18bd4341e137232db> >(class
   <lambda_1c23a5dd5e46d7c5fbe45428cfdcd388> && __ptr64,class
   <lambda_ad9c22e73f4850e44729a5f831ae9ec1> & __ptr64,class
   <lambda_13a597834fd3cef18bd4341e137232db> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_2647abb55a408a205467c4169a724277>,class <lambda_576477a770bb5ab586b2d9569451c7f7> &
   __ptr64,class <lambda_c2b006f504a10a4cf14b9a1fbce2a01e> >(class
   <lambda_2647abb55a408a205467c4169a724277> && __ptr64,class
   <lambda_576477a770bb5ab586b2d9569451c7f7> & __ptr64,class
   <lambda_c2b006f504a10a4cf14b9a1fbce2a01e> && __ptr64) __ptr64
     22 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4
operator()<>(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  
  FUN_1805110a4(*param_2);
  uVar1 = FUN_18050a824(param_3);
  FUN_1805110b0(*param_4);
  return uVar1;
}



/* ===== 1805022d0 FUN_1805022d0 ===== */

undefined8 FUN_1805022d0(byte param_1,ulonglong param_2)

{
  if ((param_1 & 4) != 0) {
    return 1;
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 2) == 0) {
      return CONCAT71(0x7fffffffffffff,0x7fffffffffffffff < param_2);
    }
    if (0x8000000000000000 < param_2) {
      return 1;
    }
  }
  return 0;
}



/* ===== 180502308 parse_floating_point<> ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double>(struct __crt_locale_pointers *
   __ptr64 const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double * __ptr64 const)
     12 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 parse_floating_point<>(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_180502848(param_1,param_2,local_328);
    uVar3 = FUN_180506f9c(uVar1,local_328,param_3);
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
  }
  return uVar3;
}



/* ===== 1805023b0 parse_floating_point<> ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double>(struct __crt_locale_pointers *
   __ptr64 const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double * __ptr64 const)
     12 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 parse_floating_point<>(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_180502848(param_1,param_2,local_328);
    uVar3 = FUN_180507104(uVar1,local_328,param_3);
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
  }
  return uVar3;
}



/* ===== 180502458 parse_floating_point<> ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double>(struct __crt_locale_pointers *
   __ptr64 const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double * __ptr64 const)
     12 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 parse_floating_point<>(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_180503028(param_1,param_2,local_328);
    uVar3 = FUN_180506f9c(uVar1,local_328,param_3);
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
  }
  return uVar3;
}



/* ===== 180502500 parse_floating_point<> ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double>(struct __crt_locale_pointers *
   __ptr64 const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double * __ptr64 const)
     12 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 parse_floating_point<>(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_180503028(param_1,param_2,local_328);
    uVar3 = FUN_180507104(uVar1,local_328,param_3);
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
  }
  return uVar3;
}



/* ===== 1805025a8 parse_floating_point<> ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double>(struct __crt_locale_pointers *
   __ptr64 const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double * __ptr64 const)
     12 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 parse_floating_point<>(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_1805040c0(param_1,param_2,local_328);
    uVar3 = FUN_180506f9c(uVar1,local_328,param_3);
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
  }
  return uVar3;
}



/* ===== 180502650 parse_floating_point<> ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double>(struct __crt_locale_pointers *
   __ptr64 const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double * __ptr64 const)
     12 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 parse_floating_point<>(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_1805040c0(param_1,param_2,local_328);
    uVar3 = FUN_180507104(uVar1,local_328,param_3);
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
  }
  return uVar3;
}



/* ===== 1805026f8 parse_floating_point<> ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double>(struct __crt_locale_pointers *
   __ptr64 const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double * __ptr64 const)
     12 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 parse_floating_point<>(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_180504884(param_1,param_2,local_328);
    uVar3 = FUN_180506f9c(uVar1,local_328,param_3);
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
  }
  return uVar3;
}



/* ===== 1805027a0 parse_floating_point<> ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double>(struct __crt_locale_pointers *
   __ptr64 const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double * __ptr64 const)
     12 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 parse_floating_point<>(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_180504884(param_1,param_2,local_328);
    uVar3 = FUN_180507104(uVar1,local_328,param_3);
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
  }
  return uVar3;
}



/* ===== 180502848 FUN_180502848 ===== */

ulonglong FUN_180502848(longlong *param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  char cVar16;
  uint uVar17;
  byte local_res10 [8];
  int *local_res18;
  byte local_res20;
  int local_74;
  longlong local_68;
  longlong *local_60;
  byte *local_58;
  longlong *local_50;
  
  puVar4 = (undefined8 *)*param_2;
  local_res18 = param_3;
  if ((puVar4 == (undefined8 *)0x0) || (param_2[3] == 0)) {
    puVar14 = (undefined4 *)FUN_18051bfb0();
    *puVar14 = 0x16;
    FUN_180527740();
    return 7;
  }
  local_68 = param_2[2];
  param_2[2] = local_68 + 1U;
  if (((param_2[1] == 0) || (local_68 + 1U <= (ulonglong)param_2[1])) &&
     (uVar10 = _fgetc_nolock(*puVar4), uVar10 != 0xffffffff)) {
    puVar4[1] = puVar4[1] + 1;
  }
  else {
    uVar10 = 0;
  }
  local_58 = local_res10;
  local_50 = &local_68;
  local_60 = param_2;
  while( true ) {
    local_res10[0] = (byte)uVar10;
    iVar11 = FUN_18050fc80(uVar10 & 0xff,8,param_1);
    if (iVar11 == 0) break;
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      uVar10 = _fgetc_nolock(*puVar4);
      if (uVar10 == 0xffffffff) goto LAB_180502912;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_180502912:
      uVar10 = 0;
    }
  }
  uVar10 = (uint)local_res10[0];
  piVar2 = param_3 + 0xc2;
  *(bool *)piVar2 = local_res10[0] == 0x2d;
  if ((local_res10[0] - 0x2b & 0xfd) == 0) {
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      uVar10 = _fgetc_nolock(*puVar4);
      if (uVar10 == 0xffffffff) goto LAB_180502973;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_180502973:
      uVar10 = 0;
    }
    local_res10[0] = (byte)uVar10;
  }
  if ((uVar10 - 0x49 & 0xdf) == 0) {
    uVar15 = FUN_1805058f8(local_res10,param_2,local_68);
    return uVar15;
  }
  if ((uVar10 - 0x4e & 0xdf) == 0) {
    uVar15 = FUN_1805060a4(local_res10,param_2,local_68);
    return uVar15;
  }
  local_res20 = 0;
  if ((char)uVar10 == '0') {
    lVar5 = param_2[2];
    uVar15 = lVar5 + 1;
    param_2[2] = uVar15;
    if ((param_2[1] == 0) || (uVar15 <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      iVar11 = _fgetc_nolock(*puVar4);
      cVar8 = (char)iVar11;
      if (iVar11 == -1) {
        uVar10 = (uint)local_res10[0];
        goto LAB_180502a1a;
      }
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
      if ((iVar11 - 0x58U & 0xdf) == 0) {
        lVar6 = param_2[2];
        local_res20 = 1;
        param_2[2] = lVar6 + 1U;
        if ((param_2[1] == 0) || (lVar6 + 1U <= (ulonglong)param_2[1])) {
          puVar4 = (undefined8 *)*param_2;
          uVar10 = _fgetc_nolock(*puVar4);
          if (uVar10 == 0xffffffff) goto LAB_180502a04;
          plVar1 = puVar4 + 1;
          *plVar1 = *plVar1 + 1;
        }
        else {
LAB_180502a04:
          uVar10 = 0;
        }
        local_res10[0] = (byte)uVar10;
        uVar10 = uVar10 & 0xff;
        local_68 = lVar5;
        goto LAB_180502a57;
      }
      uVar10 = (uint)local_res10[0];
    }
    else {
LAB_180502a1a:
      cVar8 = '\0';
    }
    lVar5 = param_2[2];
    param_2[2] = lVar5 - 1U;
    if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar8 + 1U))) {
      puVar4 = (undefined8 *)*param_2;
      if (cVar8 != -1) {
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + -1;
        FUN_180511948((int)cVar8,*puVar4);
        uVar10 = (uint)local_res10[0];
      }
    }
  }
LAB_180502a57:
  param_3 = param_3 + 2;
  bVar7 = false;
  local_74 = 0;
  if ((char)uVar10 == '0') {
    bVar7 = true;
    do {
      lVar5 = param_2[2];
      param_2[2] = lVar5 + 1U;
      if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar5 + 1U)) {
LAB_180502aa2:
        uVar10 = 0;
        local_res10[0] = 0;
        break;
      }
      puVar4 = (undefined8 *)*param_2;
      uVar10 = _fgetc_nolock(*puVar4);
      if (uVar10 == 0xffffffff) goto LAB_180502aa2;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
      local_res10[0] = (byte)uVar10;
      uVar10 = uVar10 & 0xff;
    } while (local_res10[0] == 0x30);
  }
  uVar17 = (-(uint)(local_res20 != 0) & 6) + 9;
  while( true ) {
    cVar8 = (char)uVar10;
    if ((byte)(cVar8 - 0x30U) < 10) {
      uVar10 = (int)cVar8 - 0x30;
    }
    else if ((byte)(cVar8 + 0x9fU) < 0x1a) {
      uVar10 = (int)cVar8 - 0x57;
    }
    else if ((byte)(cVar8 + 0xbfU) < 0x1a) {
      uVar10 = (int)cVar8 - 0x37;
    }
    else {
      uVar10 = 0xffffffff;
    }
    if (uVar17 < uVar10) break;
    bVar7 = true;
    if (param_3 != piVar2) {
      *(char *)param_3 = (char)uVar10;
      param_3 = (int *)((longlong)param_3 + 1);
    }
    lVar5 = param_2[2];
    local_74 = local_74 + 1;
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      uVar10 = _fgetc_nolock(*puVar4);
      if (uVar10 == 0xffffffff) goto LAB_180502b2c;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_180502b2c:
      uVar10 = 0;
    }
    local_res10[0] = (byte)uVar10;
    uVar10 = uVar10 & 0xff;
  }
  if (cVar8 == *(char *)**(undefined8 **)(*param_1 + 0xf8)) {
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      iVar11 = _fgetc_nolock(*puVar4);
      local_res10[0] = (byte)iVar11;
      if (iVar11 == -1) goto LAB_180502b82;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_180502b82:
      local_res10[0] = 0;
    }
    uVar13 = (uint)local_res10[0];
    uVar10 = (uint)local_res10[0];
    if ((param_3 == local_res18 + 2) && (local_res10[0] == 0x30)) {
      bVar7 = true;
      local_res10[0] = 0x30;
      do {
        local_74 = local_74 + -1;
        lVar5 = param_2[2];
        param_2[2] = lVar5 + 1U;
        if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar5 + 1U)) {
LAB_180502bda:
          uVar10 = 0;
          local_res10[0] = 0;
          uVar13 = 0;
          break;
        }
        puVar4 = (undefined8 *)*param_2;
        uVar10 = _fgetc_nolock(*puVar4);
        if (uVar10 == 0xffffffff) goto LAB_180502bda;
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + 1;
        local_res10[0] = (byte)uVar10;
        uVar13 = uVar10 & 0xff;
      } while (local_res10[0] == 0x30);
    }
    uVar12 = uVar10 & 0xff;
    while( true ) {
      cVar8 = (char)uVar13;
      if (((char)uVar10 < '0') || ('9' < (char)uVar12)) {
        if ((byte)(cVar8 + 0x9fU) < 0x1a) {
          uVar10 = (int)cVar8 - 0x57;
        }
        else if ((byte)(cVar8 + 0xbfU) < 0x1a) {
          uVar10 = (int)cVar8 - 0x37;
        }
        else {
          uVar10 = 0xffffffff;
        }
      }
      else {
        uVar10 = (int)cVar8 - 0x30;
      }
      if (uVar17 < uVar10) break;
      bVar7 = true;
      if (param_3 != piVar2) {
        *(char *)param_3 = (char)uVar10;
        param_3 = (int *)((longlong)param_3 + 1);
      }
      lVar5 = param_2[2];
      param_2[2] = lVar5 + 1U;
      if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
        puVar4 = (undefined8 *)*param_2;
        uVar12 = _fgetc_nolock(*puVar4);
        if (uVar12 == 0xffffffff) goto LAB_180502c58;
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + 1;
      }
      else {
LAB_180502c58:
        uVar12 = 0;
      }
      local_res10[0] = (byte)uVar12;
      uVar13 = uVar12 & 0xff;
      uVar10 = uVar12 & 0xff;
    }
  }
  if (!bVar7) {
    cVar8 = FUN_18050a660(&local_60);
    if ((cVar8 == '\0') || (local_res20 == 0)) {
      return 7;
    }
    return 2;
  }
  lVar5 = param_2[2];
  param_2[2] = lVar5 - 1U;
  if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar8 + 1U))) {
    puVar4 = (undefined8 *)*param_2;
    if (cVar8 != -1) {
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + -1;
      FUN_180511948((int)cVar8,*puVar4);
    }
  }
  local_68 = param_2[2];
  param_2[2] = local_68 + 1U;
  if ((param_2[1] == 0) || (local_68 + 1U <= (ulonglong)param_2[1])) {
    puVar4 = (undefined8 *)*param_2;
    uVar10 = _fgetc_nolock(*puVar4);
    if (uVar10 != 0xffffffff) {
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
      local_res10[0] = (byte)uVar10;
      if (local_res10[0] == 0x45) {
LAB_180502d18:
        bVar9 = local_res20 ^ 1;
      }
      else if (local_res10[0] == 0x50) {
LAB_180502d13:
        bVar9 = local_res20;
      }
      else {
        if (local_res10[0] == 0x65) goto LAB_180502d18;
        bVar9 = 0;
        if (local_res10[0] == 0x70) goto LAB_180502d13;
      }
      iVar11 = 0;
      if (bVar9 == 0) goto LAB_180502f3e;
      lVar5 = param_2[2];
      param_2[2] = lVar5 + 1U;
      if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
        puVar4 = (undefined8 *)*param_2;
        uVar17 = _fgetc_nolock(*puVar4);
        if (uVar17 != 0xffffffff) {
          plVar1 = puVar4 + 1;
          *plVar1 = *plVar1 + 1;
          local_res10[0] = (byte)uVar17;
          if ((local_res10[0] == 0x2b) || (uVar13 = uVar17, local_res10[0] == 0x2d)) {
            lVar5 = param_2[2];
            param_2[2] = lVar5 + 1U;
            if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
              puVar4 = (undefined8 *)*param_2;
              uVar13 = _fgetc_nolock(*puVar4);
              if (uVar13 == 0xffffffff) goto LAB_180502d9d;
              plVar1 = puVar4 + 1;
              *plVar1 = *plVar1 + 1;
            }
            else {
LAB_180502d9d:
              uVar13 = 0;
            }
            local_res10[0] = (byte)uVar13;
          }
          iVar11 = 0;
          uVar10 = uVar13 & 0xff;
          bVar7 = false;
          cVar8 = (char)uVar13;
          if (cVar8 != '0') goto LAB_180502dfc;
          bVar7 = true;
          do {
            lVar5 = param_2[2];
            param_2[2] = lVar5 + 1U;
            if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar5 + 1U)) goto LAB_180502df1;
            puVar4 = (undefined8 *)*param_2;
            uVar13 = _fgetc_nolock(*puVar4);
            if (uVar13 == 0xffffffff) goto LAB_180502df1;
            plVar1 = puVar4 + 1;
            *plVar1 = *plVar1 + 1;
            local_res10[0] = (byte)uVar13;
            uVar10 = uVar13 & 0xff;
          } while (local_res10[0] == 0x30);
          goto LAB_180502dfa;
        }
      }
      bVar7 = false;
      uVar17 = 0;
LAB_180502df1:
      iVar11 = 0;
      uVar10 = 0;
      uVar13 = 0;
      local_res10[0] = 0;
LAB_180502dfa:
      while( true ) {
        cVar8 = (char)uVar13;
LAB_180502dfc:
        cVar16 = (char)uVar10;
        if ((cVar8 < '0') || ('9' < cVar16)) {
          if ((byte)(cVar16 + 0x9fU) < 0x1a) {
            uVar13 = (int)cVar16 - 0x57;
          }
          else {
            if (0x19 < (byte)(cVar16 + 0xbfU)) goto LAB_180502e79;
            uVar13 = (int)cVar16 - 0x37;
          }
        }
        else {
          uVar13 = (int)cVar16 - 0x30;
        }
        if (9 < uVar13) goto LAB_180502e79;
        bVar7 = true;
        iVar11 = uVar13 + iVar11 * 10;
        if (0x1450 < iVar11) break;
        lVar5 = param_2[2];
        param_2[2] = lVar5 + 1U;
        if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
          puVar4 = (undefined8 *)*param_2;
          uVar13 = _fgetc_nolock(*puVar4);
          if (uVar13 == 0xffffffff) goto LAB_180502e6a;
          plVar1 = puVar4 + 1;
          *plVar1 = *plVar1 + 1;
        }
        else {
LAB_180502e6a:
          uVar13 = 0;
        }
        local_res10[0] = (byte)uVar13;
        uVar10 = uVar13 & 0xff;
      }
      iVar11 = 0x1451;
LAB_180502e79:
      do {
        cVar8 = (char)uVar10;
        if ((byte)(cVar8 - 0x30U) < 10) {
          uVar13 = (int)cVar8 - 0x30;
        }
        else if ((byte)(cVar8 + 0x9fU) < 0x1a) {
          uVar13 = (int)cVar8 - 0x57;
        }
        else {
          if (0x19 < (byte)(cVar8 + 0xbfU)) goto LAB_180502ee0;
          uVar13 = (int)cVar8 - 0x37;
        }
        if (9 < uVar13) goto LAB_180502ee0;
        lVar5 = param_2[2];
        param_2[2] = lVar5 + 1U;
        if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
          puVar4 = (undefined8 *)*param_2;
          uVar10 = _fgetc_nolock(*puVar4);
          if (uVar10 == 0xffffffff) goto LAB_180502ed6;
          plVar1 = puVar4 + 1;
          *plVar1 = *plVar1 + 1;
        }
        else {
LAB_180502ed6:
          uVar10 = 0;
        }
        local_res10[0] = (byte)uVar10;
        uVar10 = uVar10 & 0xff;
      } while( true );
    }
  }
  uVar10 = 0;
  iVar11 = 0;
  local_res10[0] = 0;
  goto LAB_180502f3e;
LAB_180502ee0:
  if ((char)uVar17 == '-') {
    iVar11 = -iVar11;
  }
  if (bVar7) goto LAB_180502f3e;
  cVar8 = FUN_18050a660(&local_60);
  if (cVar8 == '\0') {
    return 7;
  }
  lVar5 = param_2[2];
  param_2[2] = lVar5 + 1U;
  if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
    puVar4 = (undefined8 *)*param_2;
    uVar10 = _fgetc_nolock(*puVar4);
    if (uVar10 == 0xffffffff) goto LAB_180502f2b;
    plVar1 = puVar4 + 1;
    *plVar1 = *plVar1 + 1;
  }
  else {
LAB_180502f2b:
    uVar10 = 0;
  }
  local_res10[0] = (byte)uVar10;
  uVar10 = uVar10 & 0xff;
LAB_180502f3e:
  lVar5 = param_2[2];
  param_2[2] = lVar5 - 1U;
  if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) &&
     (cVar8 = (char)uVar10, 1 < (byte)(cVar8 + 1U))) {
    puVar4 = (undefined8 *)*param_2;
    if (cVar8 != -1) {
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + -1;
      FUN_180511948((int)cVar8,*puVar4);
    }
  }
  piVar2 = local_res18 + 2;
  if (param_3 != piVar2) {
    do {
      piVar3 = (int *)((longlong)param_3 + -1);
      if (*(char *)piVar3 != '\0') break;
      param_3 = piVar3;
    } while (piVar3 != piVar2);
    if (param_3 != piVar2) {
      if (0x1450 < iVar11) {
        return 9;
      }
      if (-0x1451 < iVar11) {
        iVar11 = iVar11 + ((-(uint)(local_res20 != 0) & 3) + 1) * local_74;
        if (0x1450 < iVar11) {
          return 9;
        }
        if (-0x1451 < iVar11) {
          *local_res18 = iVar11;
          local_res18[1] = (int)param_3 - (int)piVar2;
          return (ulonglong)local_res20;
        }
      }
      return 8;
    }
  }
  return 2;
}



/* ===== 180503028 FUN_180503028 ===== */

ulonglong FUN_180503028(longlong *param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  short sVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  ushort uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  byte local_res10;
  ushort local_res20 [4];
  int local_78;
  longlong local_70;
  longlong *local_68;
  ushort *local_60;
  longlong *local_58;
  
  puVar4 = (undefined8 *)*param_2;
  if ((puVar4 == (undefined8 *)0x0) || (param_2[3] == 0)) {
    puVar16 = (undefined4 *)FUN_18051bfb0();
    *puVar16 = 0x16;
    FUN_180527740();
    return 7;
  }
  local_70 = param_2[2];
  param_2[2] = local_70 + 1U;
  if ((param_2[1] == 0) || (local_70 + 1U <= (ulonglong)param_2[1])) {
    local_res20[0] = thunk_FUN_18052a138(*puVar4);
    if (local_res20[0] == 0xffff) {
      local_res20[0] = 0;
    }
    else {
      puVar4[1] = puVar4[1] + 1;
    }
  }
  else {
    local_res20[0] = 0;
  }
  local_60 = local_res20;
  local_58 = &local_70;
  local_68 = param_2;
  while (iVar13 = iswctype(local_res20[0],8), iVar13 != 0) {
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      local_res20[0] = thunk_FUN_18052a138(*puVar4);
      if (local_res20[0] == 0xffff) {
        local_res20[0] = 0;
      }
      else {
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + 1;
      }
    }
    else {
      local_res20[0] = 0;
    }
  }
  uVar19 = (uint)local_res20[0];
  piVar3 = param_3 + 0xc2;
  *(bool *)piVar3 = local_res20[0] == 0x2d;
  if ((local_res20[0] - 0x2b & 0xfffd) == 0) {
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      uVar12 = thunk_FUN_18052a138(*puVar4);
      if (uVar12 == 0xffff) {
        uVar19 = 0;
      }
      else {
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + 1;
        uVar19 = (uint)uVar12;
      }
    }
    else {
      uVar19 = 0;
    }
    local_res20[0] = (ushort)uVar19;
  }
  if ((uVar19 - 0x49 & 0xffdf) == 0) {
    uVar17 = FUN_180505c7c(local_res20,param_2,local_70);
    return uVar17;
  }
  if ((uVar19 - 0x4e & 0xffdf) == 0) {
    uVar17 = FUN_180506580(local_res20,param_2,local_70);
    return uVar17;
  }
  local_res10 = 0;
  bVar8 = 0;
  bVar10 = bVar8;
  if ((short)uVar19 == 0x30) {
    lVar5 = param_2[2];
    uVar17 = lVar5 + 1;
    param_2[2] = uVar17;
    if ((param_2[1] == 0) || (uVar17 <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      sVar11 = thunk_FUN_18052a138(*puVar4);
      if (sVar11 == -1) {
        sVar11 = 0;
      }
      else {
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + 1;
        if ((sVar11 - 0x58U & 0xffdf) == 0) {
          lVar6 = param_2[2];
          bVar10 = 1;
          local_res10 = 1;
          param_2[2] = lVar6 + 1U;
          if ((param_2[1] == 0) || (lVar6 + 1U <= (ulonglong)param_2[1])) {
            puVar4 = (undefined8 *)*param_2;
            local_res20[0] = thunk_FUN_18052a138(*puVar4);
            if (local_res20[0] == 0xffff) {
              local_res20[0] = 0;
            }
            else {
              plVar1 = puVar4 + 1;
              *plVar1 = *plVar1 + 1;
            }
          }
          else {
            local_res20[0] = 0;
          }
          uVar19 = (uint)local_res20[0];
          local_70 = lVar5;
          goto LAB_1805032bf;
        }
      }
      uVar19 = (uint)local_res20[0];
    }
    else {
      sVar11 = 0;
    }
    lVar5 = param_2[2];
    param_2[2] = lVar5 - 1U;
    if ((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) {
      bVar10 = 0;
      if ((ushort)(sVar11 - 1U) < 0xfffe) {
        puVar4 = (undefined8 *)*param_2;
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + -1;
        FUN_18052a454(sVar11,*puVar4);
        uVar19 = (uint)local_res20[0];
        bVar10 = bVar8;
      }
    }
  }
LAB_1805032bf:
  piVar20 = param_3 + 2;
  local_78 = 0;
  bVar7 = false;
  if ((short)uVar19 == 0x30) {
    bVar7 = true;
    do {
      lVar5 = param_2[2];
      param_2[2] = lVar5 + 1U;
      if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar5 + 1U)) {
LAB_180503326:
        uVar19 = 0;
        local_res20[0] = 0;
        break;
      }
      puVar4 = (undefined8 *)*param_2;
      local_res20[0] = thunk_FUN_18052a138(*puVar4);
      if (local_res20[0] == 0xffff) goto LAB_180503326;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
      uVar19 = (uint)local_res20[0];
    } while (local_res20[0] == 0x30);
  }
  uVar21 = (-(uint)bVar10 & 6) + 9;
  do {
    iVar13 = 0xff10;
    uVar12 = (ushort)uVar19;
    if (uVar12 < 0x30) goto LAB_18050352b;
    if (uVar12 < 0x3a) {
      uVar14 = uVar19 - 0x30;
LAB_180503526:
      if (uVar14 == 0xffffffff) goto LAB_18050352b;
    }
    else {
      if (uVar12 < 0xff10) {
        if (0x65f < uVar12) {
          if (uVar12 < 0x66a) {
            uVar14 = uVar19 - 0x660;
            goto LAB_180503526;
          }
          if (0x6ef < uVar12) {
            if (uVar12 < 0x6fa) {
              uVar14 = uVar19 - 0x6f0;
              goto LAB_180503526;
            }
            if (0x965 < uVar12) {
              if (uVar12 < 0x970) {
                uVar14 = uVar19 - 0x966;
                goto LAB_180503526;
              }
              iVar13 = 0x9e6;
              if ((0x9e5 < uVar12) &&
                 ((uVar12 < 0x9f0 ||
                  ((iVar13 = 0xa66, 0xa65 < uVar12 &&
                   ((uVar12 < 0xa70 ||
                    ((iVar13 = 0xae6, 0xae5 < uVar12 &&
                     ((uVar12 < 0xaf0 ||
                      ((iVar13 = 0xb66, 0xb65 < uVar12 &&
                       ((uVar12 < 0xb70 ||
                        ((iVar13 = 0xc66, 0xc65 < uVar12 &&
                         ((uVar12 < 0xc70 ||
                          ((iVar13 = 0xce6, 0xce5 < uVar12 &&
                           ((uVar12 < 0xcf0 ||
                            ((iVar13 = 0xd66, 0xd65 < uVar12 &&
                             ((uVar12 < 0xd70 ||
                              ((iVar13 = 0xe50, 0xe4f < uVar12 &&
                               ((uVar12 < 0xe5a ||
                                ((iVar13 = 0xed0, 0xecf < uVar12 &&
                                 ((uVar12 < 0xeda ||
                                  ((iVar13 = 0xf20, 0xf1f < uVar12 &&
                                   ((uVar12 < 0xf2a ||
                                    ((iVar13 = 0x1040, 0x103f < uVar12 &&
                                     ((uVar12 < 0x104a ||
                                      ((iVar13 = 0x17e0, 0x17df < uVar12 &&
                                       ((uVar12 < 0x17ea ||
                                        (iVar13 = 0x1810, (ushort)(uVar12 + 0xe7f0) < 10))))))))))))
                                  )))))))))))))))))))))))))))))))))))) goto LAB_180503520;
            }
          }
        }
      }
      else if (uVar12 < 0xff1a) {
LAB_180503520:
        uVar14 = uVar19 - iVar13;
        goto LAB_180503526;
      }
LAB_18050352b:
      if ((uVar19 - 0x41 < 0x1a) || (uVar19 - 0x61 < 0x1a)) {
        uVar14 = uVar19;
        if (uVar19 - 0x61 < 0x1a) {
          uVar14 = uVar19 - 0x20;
        }
        uVar14 = uVar14 - 0x37;
      }
      else {
        uVar14 = 0xffffffff;
      }
    }
    if (uVar21 < uVar14) break;
    bVar7 = true;
    if (piVar20 != piVar3) {
      *(char *)piVar20 = (char)uVar14;
      piVar20 = (int *)((longlong)piVar20 + 1);
    }
    lVar5 = param_2[2];
    local_78 = local_78 + 1;
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      local_res20[0] = thunk_FUN_18052a138(*puVar4);
      if (local_res20[0] == 0xffff) {
        local_res20[0] = 0;
      }
      else {
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + 1;
      }
    }
    else {
      local_res20[0] = 0;
    }
    uVar19 = (uint)local_res20[0];
  } while( true );
  if (uVar19 == (int)*(char *)**(undefined8 **)(*param_1 + 0xf8)) {
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      local_res20[0] = thunk_FUN_18052a138(*puVar4);
      if (local_res20[0] != 0xffff) {
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + 1;
        goto LAB_180503636;
      }
    }
    local_res20[0] = 0;
LAB_180503636:
    uVar19 = (uint)local_res20[0];
    if ((piVar20 == param_3 + 2) && (local_res20[0] == 0x30)) {
      bVar7 = true;
      do {
        local_res20[0] = 0x30;
        local_78 = local_78 + -1;
        lVar5 = param_2[2];
        param_2[2] = lVar5 + 1U;
        if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar5 + 1U)) {
LAB_1805036af:
          local_res20[0] = 0;
          uVar19 = 0;
          break;
        }
        puVar4 = (undefined8 *)*param_2;
        local_res20[0] = thunk_FUN_18052a138(*puVar4);
        if (local_res20[0] == 0xffff) goto LAB_1805036af;
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + 1;
        uVar19 = (uint)local_res20[0];
      } while (local_res20[0] == 0x30);
    }
    do {
      uVar12 = (ushort)uVar19;
      if (local_res20[0] < 0x30) goto LAB_180503883;
      if (local_res20[0] < 0x3a) {
        uVar14 = uVar19 - 0x30;
LAB_18050387e:
        if (uVar14 == 0xffffffff) goto LAB_180503883;
      }
      else {
        iVar13 = 0xff10;
        if (uVar12 < 0xff10) {
          iVar13 = 0x660;
          if ((0x65f < uVar12) &&
             ((uVar12 < 0x66a ||
              ((iVar13 = 0x6f0, 0x6ef < uVar12 &&
               ((uVar12 < 0x6fa ||
                ((iVar13 = 0x966, 0x965 < uVar12 &&
                 ((uVar12 < 0x970 ||
                  ((iVar13 = 0x9e6, 0x9e5 < uVar12 &&
                   ((uVar12 < 0x9f0 ||
                    ((iVar13 = 0xa66, 0xa65 < uVar12 &&
                     ((uVar12 < 0xa70 ||
                      ((iVar13 = 0xae6, 0xae5 < uVar12 &&
                       ((uVar12 < 0xaf0 ||
                        ((iVar13 = 0xb66, 0xb65 < uVar12 &&
                         ((uVar12 < 0xb70 ||
                          ((iVar13 = 0xc66, 0xc65 < uVar12 &&
                           ((uVar12 < 0xc70 ||
                            ((iVar13 = 0xce6, 0xce5 < uVar12 &&
                             ((uVar12 < 0xcf0 ||
                              ((iVar13 = 0xd66, 0xd65 < uVar12 &&
                               ((uVar12 < 0xd70 ||
                                ((iVar13 = 0xe50, 0xe4f < uVar12 &&
                                 ((uVar12 < 0xe5a ||
                                  ((iVar13 = 0xed0, 0xecf < uVar12 &&
                                   ((uVar12 < 0xeda ||
                                    ((iVar13 = 0xf20, 0xf1f < uVar12 &&
                                     ((uVar12 < 0xf2a ||
                                      ((iVar13 = 0x1040, 0x103f < uVar12 &&
                                       ((uVar12 < 0x104a ||
                                        ((iVar13 = 0x17e0, 0x17df < uVar12 &&
                                         ((uVar12 < 0x17ea ||
                                          (iVar13 = 0x1810, (ushort)(uVar12 + 0xe7f0) < 10))))))))))
                                     ))))))))))))))))))))))))))))))))))))))))))))))))))
          goto LAB_180503878;
        }
        else if (uVar12 < 0xff1a) {
LAB_180503878:
          uVar14 = uVar19 - iVar13;
          goto LAB_18050387e;
        }
LAB_180503883:
        if ((uVar19 - 0x41 < 0x1a) || (uVar19 - 0x61 < 0x1a)) {
          uVar14 = uVar19;
          if (uVar19 - 0x61 < 0x1a) {
            uVar14 = uVar19 - 0x20;
          }
          uVar14 = uVar14 - 0x37;
        }
        else {
          uVar14 = 0xffffffff;
        }
      }
      if (uVar21 < uVar14) break;
      bVar7 = true;
      if (piVar20 != piVar3) {
        *(char *)piVar20 = (char)uVar14;
        piVar20 = (int *)((longlong)piVar20 + 1);
      }
      lVar5 = param_2[2];
      param_2[2] = lVar5 + 1U;
      if ((param_2[1] == 0) || (uVar12 = 0, lVar5 + 1U <= (ulonglong)param_2[1])) {
        puVar4 = (undefined8 *)*param_2;
        uVar12 = thunk_FUN_18052a138(*puVar4);
        if (uVar12 == 0xffff) {
          uVar12 = 0;
        }
        else {
          plVar1 = puVar4 + 1;
          *plVar1 = *plVar1 + 1;
        }
      }
      local_res20[0] = uVar12;
      uVar19 = (uint)local_res20[0];
    } while( true );
  }
  if (!bVar7) {
    cVar9 = FUN_18050a7a8(&local_68);
    if (cVar9 == '\0') {
      return 7;
    }
    if (local_res10 == 0) {
      return 7;
    }
    return 2;
  }
  lVar5 = param_2[2];
  param_2[2] = lVar5 - 1U;
  if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) &&
     ((ushort)((short)uVar19 - 1U) < 0xfffe)) {
    puVar4 = (undefined8 *)*param_2;
    plVar1 = puVar4 + 1;
    *plVar1 = *plVar1 + -1;
    FUN_18052a454(uVar19,*puVar4);
  }
  local_70 = param_2[2];
  param_2[2] = local_70 + 1U;
  if ((param_2[1] == 0) || (local_70 + 1U <= (ulonglong)param_2[1])) {
    puVar4 = (undefined8 *)*param_2;
    uVar12 = thunk_FUN_18052a138(*puVar4);
    uVar19 = (uint)uVar12;
    if (uVar12 == 0xffff) {
      uVar19 = 0;
    }
    else {
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
    }
  }
  else {
    uVar19 = 0;
  }
  local_res20[0] = (ushort)uVar19;
  bVar10 = 0;
  if (local_res20[0] == 0x45) {
LAB_1805039e8:
    bVar10 = local_res10 ^ 1;
  }
  else if (local_res20[0] == 0x50) {
LAB_1805039df:
    bVar10 = local_res10;
  }
  else {
    if (local_res20[0] == 0x65) goto LAB_1805039e8;
    if (local_res20[0] == 0x70) goto LAB_1805039df;
  }
  iVar13 = 0;
  if (bVar10 == 0) {
LAB_180503fd0:
    lVar5 = param_2[2];
    param_2[2] = lVar5 - 1U;
    if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) &&
       ((ushort)((short)uVar19 - 1U) < 0xfffe)) {
      puVar4 = (undefined8 *)*param_2;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + -1;
      FUN_18052a454(uVar19,*puVar4);
    }
    piVar3 = param_3 + 2;
    if (piVar20 != piVar3) {
      do {
        piVar2 = (int *)((longlong)piVar20 + -1);
        if (*(char *)piVar2 != '\0') break;
        piVar20 = piVar2;
      } while (piVar2 != piVar3);
      if (piVar20 != piVar3) {
        if (0x1450 < iVar13) {
          return 9;
        }
        if (-0x1451 < iVar13) {
          iVar13 = iVar13 + ((-(uint)(local_res10 != 0) & 3) + 1) * local_78;
          if (0x1450 < iVar13) {
            return 9;
          }
          if (-0x1451 < iVar13) {
            *param_3 = iVar13;
            param_3[1] = (int)piVar20 - (int)piVar3;
            return (ulonglong)local_res10;
          }
        }
        return 8;
      }
    }
    return 2;
  }
  lVar5 = param_2[2];
  param_2[2] = lVar5 + 1U;
  if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
    puVar4 = (undefined8 *)*param_2;
    uVar12 = thunk_FUN_18052a138(*puVar4);
    if (uVar12 != 0xffff) {
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
      local_res20[0] = uVar12;
      if ((uVar12 == 0x2b) || (uVar12 == 0x2d)) {
        lVar5 = param_2[2];
        param_2[2] = lVar5 + 1U;
        if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
          puVar4 = (undefined8 *)*param_2;
          local_res20[0] = thunk_FUN_18052a138(*puVar4);
          if (local_res20[0] == 0xffff) {
            local_res20[0] = 0;
          }
          else {
            plVar1 = puVar4 + 1;
            *plVar1 = *plVar1 + 1;
          }
        }
        else {
          local_res20[0] = 0;
        }
      }
      uVar19 = (uint)local_res20[0];
      bVar7 = false;
      if (local_res20[0] == 0x30) {
        bVar7 = true;
        while( true ) {
          lVar5 = param_2[2];
          param_2[2] = lVar5 + 1U;
          if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar5 + 1U)) goto LAB_180503b13;
          puVar4 = (undefined8 *)*param_2;
          local_res20[0] = thunk_FUN_18052a138(*puVar4);
          if (local_res20[0] == 0xffff) goto LAB_180503b13;
          plVar1 = puVar4 + 1;
          *plVar1 = *plVar1 + 1;
          uVar19 = (uint)local_res20[0];
          if (local_res20[0] != 0x30) break;
          local_res20[0] = 0x30;
        }
      }
      goto LAB_180503b20;
    }
  }
  uVar12 = 0;
  bVar7 = false;
LAB_180503b13:
  local_res20[0] = 0;
  uVar19 = 0;
LAB_180503b20:
  do {
    uVar18 = (ushort)uVar19;
    if (local_res20[0] < 0x30) {
LAB_180503cc4:
      if ((0x19 < uVar19 - 0x41) && (0x19 < uVar19 - 0x61)) goto LAB_180503d52;
      uVar21 = uVar19;
      if (uVar19 - 0x61 < 0x1a) {
        uVar21 = uVar19 - 0x20;
      }
      uVar21 = uVar21 - 0x37;
    }
    else {
      if (0x39 < uVar18) {
        iVar15 = 0xff10;
        if (uVar18 < 0xff10) {
          iVar15 = 0x660;
          if (0x65f < uVar18) {
            if (uVar18 < 0x66a) {
LAB_180503cba:
              uVar21 = uVar19 - iVar15;
              goto LAB_180503cbf;
            }
            iVar15 = 0x6f0;
            if (0x6ef < uVar18) {
              if (uVar18 < 0x6fa) goto LAB_180503cba;
              iVar15 = 0x966;
              if (0x965 < uVar18) {
                if (uVar18 < 0x970) goto LAB_180503cba;
                iVar15 = 0x9e6;
                if (0x9e5 < uVar18) {
                  if (uVar18 < 0x9f0) goto LAB_180503cba;
                  iVar15 = 0xa66;
                  if (0xa65 < uVar18) {
                    if (uVar18 < 0xa70) goto LAB_180503cba;
                    iVar15 = 0xae6;
                    if (0xae5 < uVar18) {
                      if (uVar18 < 0xaf0) goto LAB_180503cba;
                      iVar15 = 0xb66;
                      if (0xb65 < uVar18) {
                        if (uVar18 < 0xb70) goto LAB_180503cba;
                        iVar15 = 0xc66;
                        if (0xc65 < uVar18) {
                          if (uVar18 < 0xc70) goto LAB_180503cba;
                          iVar15 = 0xce6;
                          if (0xce5 < uVar18) {
                            if (uVar18 < 0xcf0) goto LAB_180503cba;
                            iVar15 = 0xd66;
                            if (0xd65 < uVar18) {
                              if (uVar18 < 0xd70) goto LAB_180503cba;
                              iVar15 = 0xe50;
                              if (0xe4f < uVar18) {
                                if (uVar18 < 0xe5a) goto LAB_180503cba;
                                iVar15 = 0xed0;
                                if (0xecf < uVar18) {
                                  if (uVar18 < 0xeda) goto LAB_180503cba;
                                  iVar15 = 0xf20;
                                  if (0xf1f < uVar18) {
                                    if (uVar18 < 0xf2a) goto LAB_180503cba;
                                    iVar15 = 0x1040;
                                    if (0x103f < uVar18) {
                                      if (uVar18 < 0x104a) goto LAB_180503cba;
                                      iVar15 = 0x17e0;
                                      if (0x17df < uVar18) {
                                        if (uVar18 < 0x17ea) goto LAB_180503cba;
                                        if ((ushort)(uVar18 + 0xe7f0) < 10) {
                                          uVar21 = uVar19 - 0x1810;
                                          goto LAB_180503cbf;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if (uVar18 < 0xff1a) goto LAB_180503cba;
        goto LAB_180503cc4;
      }
      uVar21 = uVar19 - 0x30;
LAB_180503cbf:
      if (uVar21 == 0xffffffff) goto LAB_180503cc4;
    }
    if (9 < uVar21) goto LAB_180503d52;
    bVar7 = true;
    iVar13 = uVar21 + iVar13 * 10;
    if (0x1450 < iVar13) break;
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      local_res20[0] = thunk_FUN_18052a138(*puVar4);
      if (local_res20[0] == 0xffff) {
        local_res20[0] = 0;
      }
      else {
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + 1;
      }
    }
    else {
      local_res20[0] = 0;
    }
    uVar19 = (uint)local_res20[0];
  } while( true );
  iVar13 = 0x1451;
LAB_180503d52:
  do {
    uVar18 = (ushort)uVar19;
    if (uVar18 < 0x30) goto LAB_180503ef2;
    if (uVar18 < 0x3a) {
      uVar21 = uVar19 - 0x30;
LAB_180503eed:
      if (uVar21 == 0xffffffff) goto LAB_180503ef2;
    }
    else {
      iVar15 = 0xff10;
      if (uVar18 < 0xff10) {
        iVar15 = 0x660;
        if ((0x65f < uVar18) &&
           ((uVar18 < 0x66a ||
            ((iVar15 = 0x6f0, 0x6ef < uVar18 &&
             ((uVar18 < 0x6fa ||
              ((iVar15 = 0x966, 0x965 < uVar18 &&
               ((uVar18 < 0x970 ||
                ((iVar15 = 0x9e6, 0x9e5 < uVar18 &&
                 ((uVar18 < 0x9f0 ||
                  ((iVar15 = 0xa66, 0xa65 < uVar18 &&
                   ((uVar18 < 0xa70 ||
                    ((iVar15 = 0xae6, 0xae5 < uVar18 &&
                     ((uVar18 < 0xaf0 ||
                      ((iVar15 = 0xb66, 0xb65 < uVar18 &&
                       ((uVar18 < 0xb70 ||
                        ((iVar15 = 0xc66, 0xc65 < uVar18 &&
                         ((uVar18 < 0xc70 ||
                          ((iVar15 = 0xce6, 0xce5 < uVar18 &&
                           ((uVar18 < 0xcf0 ||
                            ((iVar15 = 0xd66, 0xd65 < uVar18 &&
                             ((uVar18 < 0xd70 ||
                              ((iVar15 = 0xe50, 0xe4f < uVar18 &&
                               ((uVar18 < 0xe5a ||
                                ((iVar15 = 0xed0, 0xecf < uVar18 &&
                                 ((uVar18 < 0xeda ||
                                  ((iVar15 = 0xf20, 0xf1f < uVar18 &&
                                   ((uVar18 < 0xf2a ||
                                    ((iVar15 = 0x1040, 0x103f < uVar18 &&
                                     ((uVar18 < 0x104a ||
                                      ((iVar15 = 0x17e0, 0x17df < uVar18 &&
                                       ((uVar18 < 0x17ea ||
                                        (iVar15 = 0x1810, (ushort)(uVar18 + 0xe7f0) < 10))))))))))))
                                  ))))))))))))))))))))))))))))))))))))))))))))))))
        goto LAB_180503ee8;
      }
      else if (uVar18 < 0xff1a) {
LAB_180503ee8:
        uVar21 = uVar19 - iVar15;
        goto LAB_180503eed;
      }
LAB_180503ef2:
      if ((0x19 < uVar19 - 0x41) && (0x19 < uVar19 - 0x61)) break;
      uVar21 = uVar19;
      if (uVar19 - 0x61 < 0x1a) {
        uVar21 = uVar19 - 0x20;
      }
      uVar21 = uVar21 - 0x37;
    }
    if (9 < uVar21) break;
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      local_res20[0] = thunk_FUN_18052a138(*puVar4);
      if (local_res20[0] == 0xffff) {
        local_res20[0] = 0;
      }
      else {
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + 1;
      }
    }
    else {
      local_res20[0] = 0;
    }
    uVar19 = (uint)local_res20[0];
  } while( true );
  if (uVar12 == 0x2d) {
    iVar13 = -iVar13;
  }
  if (!bVar7) {
    cVar9 = FUN_18050a7a8(&local_68);
    if (cVar9 == '\0') {
      return 7;
    }
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      local_res20[0] = thunk_FUN_18052a138(*puVar4);
      if (local_res20[0] == 0xffff) {
        local_res20[0] = 0;
      }
      else {
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + 1;
      }
    }
    else {
      local_res20[0] = 0;
    }
    uVar19 = (uint)local_res20[0];
  }
  goto LAB_180503fd0;
}



/* ===== 1805040c0 FUN_1805040c0 ===== */

ulonglong FUN_1805040c0(longlong *param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  int *piVar14;
  int iVar15;
  byte bVar16;
  char local_res10 [24];
  longlong local_58;
  longlong *local_50;
  char *local_48;
  longlong *local_40;
  
  iVar15 = 0;
  lVar3 = *param_2;
  if ((lVar3 == 0) || (param_2[3] == 0)) {
    puVar12 = (undefined4 *)FUN_18051bfb0();
    *puVar12 = 0x16;
    FUN_180527740();
    return 7;
  }
  local_58 = param_2[2];
  param_2[2] = local_58 + 1U;
  if (((param_2[1] == 0) || (local_58 + 1U <= (ulonglong)param_2[1])) &&
     (pcVar6 = *(char **)(lVar3 + 0x10), pcVar6 != *(char **)(lVar3 + 8))) {
    local_res10[0] = *pcVar6;
    *(char **)(lVar3 + 0x10) = pcVar6 + 1;
  }
  else {
    local_res10[0] = '\0';
  }
  local_48 = local_res10;
  local_40 = &local_58;
  local_50 = param_2;
  while (iVar10 = FUN_18050fc80(local_res10[0],8), iVar10 != 0) {
    lVar3 = param_2[2];
    param_2[2] = lVar3 + 1U;
    if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
      lVar3 = *param_2;
      pcVar6 = *(char **)(lVar3 + 0x10);
      if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_180504170;
      local_res10[0] = *pcVar6;
      *(char **)(lVar3 + 0x10) = pcVar6 + 1;
    }
    else {
LAB_180504170:
      local_res10[0] = '\0';
    }
  }
  piVar2 = param_3 + 0xc2;
  *(bool *)piVar2 = local_res10[0] == '-';
  if ((local_res10[0] - 0x2bU & 0xfd) == 0) {
    lVar3 = param_2[2];
    param_2[2] = lVar3 + 1U;
    if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
      lVar3 = *param_2;
      pcVar6 = *(char **)(lVar3 + 0x10);
      if (pcVar6 != *(char **)(lVar3 + 8)) {
        local_res10[0] = *pcVar6;
        *(char **)(lVar3 + 0x10) = pcVar6 + 1;
        goto LAB_1805041ee;
      }
    }
    local_res10[0] = '\0';
  }
LAB_1805041ee:
  if ((local_res10[0] + 0xb7U & 0xdf) == 0) {
    uVar13 = FUN_180505acc(local_res10,param_2,local_58);
    return uVar13;
  }
  if ((local_res10[0] + 0xb2U & 0xdf) == 0) {
    uVar13 = FUN_18050631c(local_res10,param_2,local_58);
    return uVar13;
  }
  bVar16 = 0;
  if (local_res10[0] == '0') {
    lVar3 = param_2[2];
    uVar13 = lVar3 + 1;
    param_2[2] = uVar13;
    if ((param_2[1] == 0) || (uVar13 <= (ulonglong)param_2[1])) {
      lVar4 = *param_2;
      pcVar6 = *(char **)(lVar4 + 0x10);
      if (pcVar6 == *(char **)(lVar4 + 8)) goto LAB_180504228;
      cVar8 = *pcVar6;
      *(char **)(lVar4 + 0x10) = pcVar6 + 1;
      if ((cVar8 == 'x') || (cVar8 == 'X')) {
        lVar4 = param_2[2];
        bVar16 = 1;
        param_2[2] = lVar4 + 1U;
        if ((param_2[1] == 0) || (lVar4 + 1U <= (ulonglong)param_2[1])) {
          lVar4 = *param_2;
          pcVar6 = *(char **)(lVar4 + 0x10);
          if (pcVar6 == *(char **)(lVar4 + 8)) goto LAB_1805042a0;
          local_res10[0] = *pcVar6;
          *(char **)(lVar4 + 0x10) = pcVar6 + 1;
        }
        else {
LAB_1805042a0:
          local_res10[0] = '\0';
        }
        local_58 = lVar3;
        goto LAB_1805042c2;
      }
    }
    else {
LAB_180504228:
      cVar8 = '\0';
    }
    lVar3 = param_2[2];
    param_2[2] = lVar3 - 1U;
    if (((param_2[1] == 0) || (lVar3 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar8 + 1U))) {
      plVar5 = (longlong *)*param_2;
      if (plVar5[2] != *plVar5) {
        plVar5[2] = plVar5[2] + -1;
      }
    }
  }
LAB_1805042c2:
  piVar1 = param_3 + 2;
  bVar7 = false;
  if (local_res10[0] == '0') {
    bVar7 = true;
    do {
      lVar3 = param_2[2];
      param_2[2] = lVar3 + 1U;
      if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar3 + 1U)) {
LAB_18050430e:
        local_res10[0] = '\0';
        break;
      }
      lVar3 = *param_2;
      pcVar6 = *(char **)(lVar3 + 0x10);
      if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_18050430e;
      local_res10[0] = *pcVar6;
      *(char **)(lVar3 + 0x10) = pcVar6 + 1;
    } while (local_res10[0] == '0');
  }
  piVar14 = piVar1;
  while( true ) {
    if ((byte)(local_res10[0] - 0x30U) < 10) {
      uVar11 = (int)local_res10[0] - 0x30;
    }
    else if ((byte)(local_res10[0] + 0x9fU) < 0x1a) {
      uVar11 = (int)local_res10[0] - 0x57;
    }
    else if ((byte)(local_res10[0] + 0xbfU) < 0x1a) {
      uVar11 = (int)local_res10[0] - 0x37;
    }
    else {
      uVar11 = 0xffffffff;
    }
    if ((-(uint)(bVar16 != 0) & 6) + 9 < uVar11) break;
    bVar7 = true;
    if (piVar14 != piVar2) {
      *(char *)piVar14 = (char)uVar11;
      piVar14 = (int *)((longlong)piVar14 + 1);
    }
    lVar3 = param_2[2];
    iVar15 = iVar15 + 1;
    param_2[2] = lVar3 + 1U;
    if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
      lVar3 = *param_2;
      pcVar6 = *(char **)(lVar3 + 0x10);
      if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_180504380;
      local_res10[0] = *pcVar6;
      *(char **)(lVar3 + 0x10) = pcVar6 + 1;
    }
    else {
LAB_180504380:
      local_res10[0] = '\0';
    }
  }
  if (local_res10[0] == *(char *)**(undefined8 **)(*param_1 + 0xf8)) {
    lVar3 = param_2[2];
    param_2[2] = lVar3 + 1U;
    if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
      lVar3 = *param_2;
      pcVar6 = *(char **)(lVar3 + 0x10);
      if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_1805043cc;
      local_res10[0] = *pcVar6;
      *(char **)(lVar3 + 0x10) = pcVar6 + 1;
    }
    else {
LAB_1805043cc:
      local_res10[0] = '\0';
    }
    if ((piVar14 == piVar1) && (local_res10[0] == '0')) {
      bVar7 = true;
      do {
        lVar3 = param_2[2];
        iVar15 = iVar15 + -1;
        param_2[2] = lVar3 + 1U;
        if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar3 + 1U)) {
LAB_180504435:
          local_res10[0] = '\0';
          break;
        }
        lVar3 = *param_2;
        pcVar6 = *(char **)(lVar3 + 0x10);
        if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_180504435;
        local_res10[0] = *pcVar6;
        *(char **)(lVar3 + 0x10) = pcVar6 + 1;
      } while (local_res10[0] == '0');
    }
    while( true ) {
      if ((local_res10[0] < '0') || ('9' < local_res10[0])) {
        if ((byte)(local_res10[0] + 0x9fU) < 0x1a) {
          uVar11 = (int)local_res10[0] - 0x57;
        }
        else if ((byte)(local_res10[0] + 0xbfU) < 0x1a) {
          uVar11 = (int)local_res10[0] - 0x37;
        }
        else {
          uVar11 = 0xffffffff;
        }
      }
      else {
        uVar11 = (int)local_res10[0] - 0x30;
      }
      if ((-(uint)(bVar16 != 0) & 6) + 9 < uVar11) break;
      bVar7 = true;
      if (piVar14 != piVar2) {
        *(char *)piVar14 = (char)uVar11;
        piVar14 = (int *)((longlong)piVar14 + 1);
      }
      lVar3 = param_2[2];
      param_2[2] = lVar3 + 1U;
      if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
        lVar3 = *param_2;
        pcVar6 = *(char **)(lVar3 + 0x10);
        if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_1805044af;
        local_res10[0] = *pcVar6;
        *(char **)(lVar3 + 0x10) = pcVar6 + 1;
      }
      else {
LAB_1805044af:
        local_res10[0] = '\0';
      }
    }
  }
  if (!bVar7) {
    cVar8 = FUN_18050a6d8(&local_50);
    if ((cVar8 == '\0') || (bVar16 == 0)) {
      return 7;
    }
    return 2;
  }
  lVar3 = param_2[2];
  param_2[2] = lVar3 - 1U;
  if (((param_2[1] == 0) || (lVar3 - 1U <= (ulonglong)param_2[1])) &&
     (1 < (byte)(local_res10[0] + 1U))) {
    plVar5 = (longlong *)*param_2;
    if (plVar5[2] != *plVar5) {
      plVar5[2] = plVar5[2] + -1;
    }
  }
  local_58 = param_2[2];
  param_2[2] = local_58 + 1U;
  if ((param_2[1] == 0) || (local_58 + 1U <= (ulonglong)param_2[1])) {
    lVar3 = *param_2;
    pcVar6 = *(char **)(lVar3 + 0x10);
    if (pcVar6 != *(char **)(lVar3 + 8)) {
      local_res10[0] = *pcVar6;
      *(char **)(lVar3 + 0x10) = pcVar6 + 1;
      if (local_res10[0] == 'E') {
LAB_18050458f:
        bVar9 = bVar16 ^ 1;
      }
      else if (local_res10[0] == 'P') {
LAB_18050458a:
        bVar9 = bVar16;
      }
      else {
        if (local_res10[0] == 'e') goto LAB_18050458f;
        bVar9 = 0;
        if (local_res10[0] == 'p') goto LAB_18050458a;
      }
      iVar10 = 0;
      if (bVar9 == 0) goto LAB_1805047af;
      lVar3 = param_2[2];
      param_2[2] = lVar3 + 1U;
      if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
        lVar3 = *param_2;
        pcVar6 = *(char **)(lVar3 + 0x10);
        if (pcVar6 != *(char **)(lVar3 + 8)) {
          cVar8 = *pcVar6;
          *(char **)(lVar3 + 0x10) = pcVar6 + 1;
          if ((cVar8 == '+') || (local_res10[0] = cVar8, cVar8 == '-')) {
            lVar3 = param_2[2];
            param_2[2] = lVar3 + 1U;
            if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
              lVar3 = *param_2;
              pcVar6 = *(char **)(lVar3 + 0x10);
              if (pcVar6 != *(char **)(lVar3 + 8)) {
                local_res10[0] = *pcVar6;
                *(char **)(lVar3 + 0x10) = pcVar6 + 1;
                goto LAB_18050461f;
              }
            }
            local_res10[0] = '\0';
          }
LAB_18050461f:
          bVar7 = false;
          if (local_res10[0] == '0') {
            bVar7 = true;
            do {
              lVar3 = param_2[2];
              param_2[2] = lVar3 + 1U;
              if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar3 + 1U)) goto LAB_180504668;
              lVar3 = *param_2;
              iVar10 = 0;
              pcVar6 = *(char **)(lVar3 + 0x10);
              if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_180504668;
              local_res10[0] = *pcVar6;
              *(char **)(lVar3 + 0x10) = pcVar6 + 1;
            } while (local_res10[0] == '0');
          }
          goto LAB_180504673;
        }
      }
      cVar8 = '\0';
      bVar7 = false;
LAB_180504668:
      iVar10 = 0;
      local_res10[0] = '\0';
LAB_180504673:
      while( true ) {
        if ((local_res10[0] < '0') || ('9' < local_res10[0])) {
          if ((byte)(local_res10[0] + 0x9fU) < 0x1a) {
            uVar11 = (int)local_res10[0] - 0x57;
          }
          else {
            if (0x19 < (byte)(local_res10[0] + 0xbfU)) goto LAB_1805046ec;
            uVar11 = (int)local_res10[0] - 0x37;
          }
        }
        else {
          uVar11 = (int)local_res10[0] - 0x30;
        }
        if (9 < uVar11) goto LAB_1805046ec;
        bVar7 = true;
        iVar10 = uVar11 + iVar10 * 10;
        if (0x1450 < iVar10) break;
        lVar3 = param_2[2];
        param_2[2] = lVar3 + 1U;
        if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
          lVar3 = *param_2;
          pcVar6 = *(char **)(lVar3 + 0x10);
          if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_1805046c8;
          local_res10[0] = *pcVar6;
          *(char **)(lVar3 + 0x10) = pcVar6 + 1;
        }
        else {
LAB_1805046c8:
          local_res10[0] = '\0';
        }
      }
      iVar10 = 0x1451;
LAB_1805046ec:
      if ((byte)(local_res10[0] - 0x30U) < 10) {
        uVar11 = (int)local_res10[0] - 0x30;
      }
      else if ((byte)(local_res10[0] + 0x9fU) < 0x1a) {
        uVar11 = (int)local_res10[0] - 0x57;
      }
      else {
        if (0x19 < (byte)(local_res10[0] + 0xbfU)) goto LAB_180504753;
        uVar11 = (int)local_res10[0] - 0x37;
      }
      if (9 < uVar11) goto LAB_180504753;
      lVar3 = param_2[2];
      param_2[2] = lVar3 + 1U;
      if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
        lVar3 = *param_2;
        pcVar6 = *(char **)(lVar3 + 0x10);
        if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_180504733;
        local_res10[0] = *pcVar6;
        *(char **)(lVar3 + 0x10) = pcVar6 + 1;
      }
      else {
LAB_180504733:
        local_res10[0] = '\0';
      }
      goto LAB_1805046ec;
    }
  }
  local_res10[0] = '\0';
  iVar10 = 0;
LAB_1805047af:
  lVar3 = param_2[2];
  param_2[2] = lVar3 - 1U;
  if (((param_2[1] == 0) || (lVar3 - 1U <= (ulonglong)param_2[1])) &&
     (1 < (byte)(local_res10[0] + 1U))) {
    param_2 = (longlong *)*param_2;
    if (param_2[2] != *param_2) {
      param_2[2] = param_2[2] + -1;
    }
  }
  if (piVar14 != piVar1) {
    do {
      piVar2 = (int *)((longlong)piVar14 + -1);
      if (*(char *)piVar2 != '\0') break;
      piVar14 = piVar2;
    } while (piVar2 != piVar1);
    if (piVar14 != piVar1) {
      if (0x1450 < iVar10) {
        return 9;
      }
      if (-0x1451 < iVar10) {
        iVar10 = iVar10 + ((-(uint)(bVar16 != 0) & 3) + 1) * iVar15;
        if (0x1450 < iVar10) {
          return 9;
        }
        if (-0x1451 < iVar10) {
          *param_3 = iVar10;
          param_3[1] = (int)piVar14 - (int)piVar1;
          return (ulonglong)bVar16;
        }
      }
      return 8;
    }
  }
  return 2;
LAB_180504753:
  if (cVar8 == '-') {
    iVar10 = -iVar10;
  }
  if (!bVar7) {
    cVar8 = FUN_18050a6d8(&local_50);
    if (cVar8 == '\0') {
      return 7;
    }
    lVar3 = param_2[2];
    param_2[2] = lVar3 + 1U;
    if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
      lVar3 = *param_2;
      pcVar6 = *(char **)(lVar3 + 0x10);
      if (pcVar6 != *(char **)(lVar3 + 8)) {
        local_res10[0] = *pcVar6;
        *(char **)(lVar3 + 0x10) = pcVar6 + 1;
        goto LAB_1805047af;
      }
    }
    local_res10[0] = '\0';
  }
  goto LAB_1805047af;
}



/* ===== 180504884 FUN_180504884 ===== */

ulonglong FUN_180504884(longlong *param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  longlong lVar2;
  wint_t *pwVar3;
  longlong lVar4;
  short *psVar5;
  longlong *plVar6;
  ushort *puVar7;
  byte bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  short sVar16;
  ushort uVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  int *piVar23;
  byte local_res10;
  ushort local_res20 [4];
  int local_78;
  longlong local_70;
  longlong *local_68;
  ushort *local_60;
  longlong *local_58;
  
  lVar2 = *param_2;
  local_78 = 0;
  if ((lVar2 == 0) || (param_2[3] == 0)) {
    puVar14 = (undefined4 *)FUN_18051bfb0();
    *puVar14 = 0x16;
    FUN_180527740();
    return 7;
  }
  local_70 = param_2[2];
  param_2[2] = local_70 + 1U;
  if ((param_2[1] == 0) || (local_70 + 1U <= (ulonglong)param_2[1])) {
    pwVar3 = *(wint_t **)(lVar2 + 0x10);
    if (pwVar3 != *(wint_t **)(lVar2 + 8)) {
      local_res20[0] = *pwVar3;
      *(wint_t **)(lVar2 + 0x10) = pwVar3 + 1;
      if (local_res20[0] != 0xffff) goto LAB_180504915;
    }
    local_res20[0] = 0;
  }
  else {
    local_res20[0] = 0;
  }
LAB_180504915:
  local_60 = local_res20;
  local_58 = &local_70;
  local_68 = param_2;
LAB_18050496e:
  while (iVar11 = iswctype(local_res20[0],8), iVar11 != 0) {
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      lVar2 = *param_2;
      pwVar3 = *(wint_t **)(lVar2 + 0x10);
      if (pwVar3 != *(wint_t **)(lVar2 + 8)) goto code_r0x00018050495b;
      goto LAB_18050496b;
    }
    local_res20[0] = 0;
  }
  uVar13 = (uint)local_res20[0];
  piVar23 = param_3 + 0xc2;
  *(bool *)piVar23 = local_res20[0] == 0x2d;
  if ((local_res20[0] - 0x2b & 0xfffd) == 0) {
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      lVar2 = *param_2;
      puVar7 = *(ushort **)(lVar2 + 0x10);
      if (puVar7 != *(ushort **)(lVar2 + 8)) {
        uVar17 = *puVar7;
        uVar13 = (uint)uVar17;
        *(ushort **)(lVar2 + 0x10) = puVar7 + 1;
        if (uVar17 != 0xffff) goto LAB_1805049de;
      }
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
    }
LAB_1805049de:
    local_res20[0] = (ushort)uVar13;
  }
  if ((uVar13 - 0x49 & 0xffdf) == 0) {
    uVar15 = FUN_180505e94(local_res20,param_2,local_70);
    return uVar15;
  }
  if ((uVar13 - 0x4e & 0xffdf) == 0) {
    uVar15 = FUN_180506840(local_res20,param_2,local_70);
    return uVar15;
  }
  local_res10 = 0;
  bVar8 = 0;
  if ((short)uVar13 != 0x30) goto LAB_180504afc;
  lVar2 = param_2[2];
  uVar15 = lVar2 + 1;
  param_2[2] = uVar15;
  if ((param_2[1] == 0) || (uVar15 <= (ulonglong)param_2[1])) {
    lVar4 = *param_2;
    psVar5 = *(short **)(lVar4 + 0x10);
    if (psVar5 != *(short **)(lVar4 + 8)) {
      sVar16 = *psVar5;
      *(short **)(lVar4 + 0x10) = psVar5 + 1;
      if (sVar16 != -1) {
        if ((sVar16 - 0x58U & 0xffdf) != 0) {
          uVar13 = (uint)local_res20[0];
          goto LAB_180504abf;
        }
        lVar4 = param_2[2];
        bVar8 = 1;
        local_res10 = 1;
        param_2[2] = lVar4 + 1U;
        if ((param_2[1] == 0) || (lVar4 + 1U <= (ulonglong)param_2[1])) {
          lVar4 = *param_2;
          puVar7 = *(ushort **)(lVar4 + 0x10);
          if (puVar7 != *(ushort **)(lVar4 + 8)) {
            uVar17 = *puVar7;
            uVar13 = (uint)uVar17;
            *(ushort **)(lVar4 + 0x10) = puVar7 + 1;
            if (uVar17 != 0xffff) goto LAB_180504aa8;
          }
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
        }
LAB_180504aa8:
        local_res20[0] = (ushort)uVar13;
        local_70 = lVar2;
        goto LAB_180504afc;
      }
      uVar13 = (uint)local_res20[0];
    }
    sVar16 = 0;
  }
  else {
    sVar16 = 0;
  }
LAB_180504abf:
  lVar2 = param_2[2];
  param_2[2] = lVar2 - 1U;
  if (((param_2[1] == 0) || (lVar2 - 1U <= (ulonglong)param_2[1])) &&
     ((ushort)(sVar16 - 1U) < 0xfffe)) {
    plVar6 = (longlong *)*param_2;
    if (plVar6[2] != *plVar6) {
      plVar6[2] = plVar6[2] + -2;
      uVar13 = (uint)local_res20[0];
    }
  }
LAB_180504afc:
  piVar21 = param_3 + 2;
  bVar9 = false;
  if ((short)uVar13 == 0x30) {
    bVar9 = true;
    do {
      lVar2 = param_2[2];
      param_2[2] = lVar2 + 1U;
      if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar2 + 1U)) {
LAB_180504b71:
        uVar13 = 0;
        local_res20[0] = 0;
        break;
      }
      lVar2 = *param_2;
      puVar7 = *(ushort **)(lVar2 + 0x10);
      if (puVar7 == *(ushort **)(lVar2 + 8)) goto LAB_180504b71;
      local_res20[0] = *puVar7;
      *(ushort **)(lVar2 + 0x10) = puVar7 + 1;
      if (local_res20[0] == 0xffff) goto LAB_180504b71;
      uVar13 = (uint)local_res20[0];
    } while (local_res20[0] == 0x30);
  }
  uVar22 = (-(uint)bVar8 & 6) + 9;
  do {
    iVar11 = 0x30;
    uVar17 = (ushort)uVar13;
    if (uVar17 < 0x30) goto LAB_180504d66;
    if (uVar17 < 0x3a) {
LAB_180504bbe:
      uVar12 = uVar13 - iVar11;
LAB_180504d61:
      if (uVar12 == 0xffffffff) goto LAB_180504d66;
    }
    else {
      if (uVar17 < 0xff10) {
        if (0x65f < uVar17) {
          if (uVar17 < 0x66a) {
            uVar12 = uVar13 - 0x660;
            goto LAB_180504d61;
          }
          if (0x6ef < uVar17) {
            if (uVar17 < 0x6fa) {
              uVar12 = uVar13 - 0x6f0;
              goto LAB_180504d61;
            }
            iVar11 = 0x966;
            if ((0x965 < uVar17) &&
               ((uVar17 < 0x970 ||
                ((iVar11 = 0x9e6, 0x9e5 < uVar17 &&
                 ((uVar17 < 0x9f0 ||
                  ((iVar11 = 0xa66, 0xa65 < uVar17 &&
                   ((uVar17 < 0xa70 ||
                    ((iVar11 = 0xae6, 0xae5 < uVar17 &&
                     ((uVar17 < 0xaf0 ||
                      ((iVar11 = 0xb66, 0xb65 < uVar17 &&
                       ((uVar17 < 0xb70 ||
                        ((iVar11 = 0xc66, 0xc65 < uVar17 &&
                         ((uVar17 < 0xc70 ||
                          ((iVar11 = 0xce6, 0xce5 < uVar17 &&
                           ((uVar17 < 0xcf0 ||
                            ((iVar11 = 0xd66, 0xd65 < uVar17 &&
                             ((uVar17 < 0xd70 ||
                              ((iVar11 = 0xe50, 0xe4f < uVar17 &&
                               ((uVar17 < 0xe5a ||
                                ((iVar11 = 0xed0, 0xecf < uVar17 &&
                                 ((uVar17 < 0xeda ||
                                  ((iVar11 = 0xf20, 0xf1f < uVar17 &&
                                   ((uVar17 < 0xf2a ||
                                    ((iVar11 = 0x1040, 0x103f < uVar17 &&
                                     ((uVar17 < 0x104a ||
                                      ((iVar11 = 0x17e0, 0x17df < uVar17 &&
                                       ((uVar17 < 0x17ea ||
                                        (iVar11 = 0x1810, (ushort)(uVar17 + 0xe7f0) < 10))))))))))))
                                  )))))))))))))))))))))))))))))))))))))))) goto LAB_180504bbe;
          }
        }
      }
      else if (uVar17 < 0xff1a) {
        uVar12 = uVar13 - 0xff10;
        goto LAB_180504d61;
      }
LAB_180504d66:
      if ((uVar13 - 0x41 < 0x1a) || (uVar13 - 0x61 < 0x1a)) {
        uVar12 = uVar13;
        if (uVar13 - 0x61 < 0x1a) {
          uVar12 = uVar13 - 0x20;
        }
        uVar12 = uVar12 - 0x37;
      }
      else {
        uVar12 = 0xffffffff;
      }
    }
    if (uVar22 < uVar12) goto LAB_180504dea;
    bVar9 = true;
    if (piVar21 != piVar23) {
      *(char *)piVar21 = (char)uVar12;
      piVar21 = (int *)((longlong)piVar21 + 1);
    }
    lVar2 = param_2[2];
    local_78 = local_78 + 1;
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      lVar2 = *param_2;
      puVar7 = *(ushort **)(lVar2 + 0x10);
      if (puVar7 != *(ushort **)(lVar2 + 8)) {
        uVar17 = *puVar7;
        uVar13 = (uint)uVar17;
        *(ushort **)(lVar2 + 0x10) = puVar7 + 1;
        if (uVar17 != 0xffff) goto LAB_180504ddc;
      }
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
    }
LAB_180504ddc:
    local_res20[0] = (ushort)uVar13;
  } while( true );
code_r0x00018050495b:
  local_res20[0] = *pwVar3;
  *(wint_t **)(lVar2 + 0x10) = pwVar3 + 1;
  if (local_res20[0] == 0xffff) {
LAB_18050496b:
    local_res20[0] = 0;
  }
  goto LAB_18050496e;
LAB_180504dea:
  if (uVar13 == (int)*(char *)**(undefined8 **)(*param_1 + 0xf8)) {
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      lVar2 = *param_2;
      puVar7 = *(ushort **)(lVar2 + 0x10);
      if (puVar7 != *(ushort **)(lVar2 + 8)) {
        local_res20[0] = *puVar7;
        *(ushort **)(lVar2 + 0x10) = puVar7 + 1;
        if (local_res20[0] != 0xffff) goto LAB_180504e5c;
      }
      local_res20[0] = 0;
    }
    else {
      local_res20[0] = 0;
    }
LAB_180504e5c:
    uVar13 = (uint)local_res20[0];
    if ((piVar21 == param_3 + 2) && (local_res20[0] == 0x30)) {
      bVar9 = true;
      do {
        local_78 = local_78 + -1;
        lVar2 = param_2[2];
        param_2[2] = lVar2 + 1U;
        if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar2 + 1U)) {
LAB_180504ee3:
          uVar13 = 0;
          local_res20[0] = 0;
          break;
        }
        lVar2 = *param_2;
        puVar7 = *(ushort **)(lVar2 + 0x10);
        if (puVar7 == *(ushort **)(lVar2 + 8)) goto LAB_180504ee3;
        local_res20[0] = *puVar7;
        *(ushort **)(lVar2 + 0x10) = puVar7 + 1;
        if (local_res20[0] == 0xffff) goto LAB_180504ee3;
        uVar13 = (uint)local_res20[0];
      } while (local_res20[0] == 0x30);
    }
    do {
      uVar17 = (ushort)uVar13;
      if (local_res20[0] < 0x30) goto LAB_1805050b3;
      if (local_res20[0] < 0x3a) {
        uVar12 = uVar13 - 0x30;
LAB_1805050ae:
        if (uVar12 == 0xffffffff) goto LAB_1805050b3;
      }
      else {
        if (uVar17 < 0xff10) {
          iVar11 = 0x660;
          if ((0x65f < uVar17) &&
             ((uVar17 < 0x66a ||
              ((iVar11 = 0x6f0, 0x6ef < uVar17 &&
               ((uVar17 < 0x6fa ||
                ((iVar11 = 0x966, 0x965 < uVar17 &&
                 ((uVar17 < 0x970 ||
                  ((iVar11 = 0x9e6, 0x9e5 < uVar17 &&
                   ((uVar17 < 0x9f0 ||
                    ((iVar11 = 0xa66, 0xa65 < uVar17 &&
                     ((uVar17 < 0xa70 ||
                      ((iVar11 = 0xae6, 0xae5 < uVar17 &&
                       ((uVar17 < 0xaf0 ||
                        ((iVar11 = 0xb66, 0xb65 < uVar17 &&
                         ((uVar17 < 0xb70 ||
                          ((iVar11 = 0xc66, 0xc65 < uVar17 &&
                           ((uVar17 < 0xc70 ||
                            ((iVar11 = 0xce6, 0xce5 < uVar17 &&
                             ((uVar17 < 0xcf0 ||
                              ((iVar11 = 0xd66, 0xd65 < uVar17 &&
                               ((uVar17 < 0xd70 ||
                                ((iVar11 = 0xe50, 0xe4f < uVar17 &&
                                 ((uVar17 < 0xe5a ||
                                  ((iVar11 = 0xed0, 0xecf < uVar17 &&
                                   ((uVar17 < 0xeda ||
                                    ((iVar11 = 0xf20, 0xf1f < uVar17 &&
                                     ((uVar17 < 0xf2a ||
                                      ((iVar11 = 0x1040, 0x103f < uVar17 &&
                                       ((uVar17 < 0x104a ||
                                        ((iVar11 = 0x17e0, 0x17df < uVar17 &&
                                         ((uVar17 < 0x17ea ||
                                          (iVar11 = 0x1810, (ushort)(uVar17 + 0xe7f0) < 10))))))))))
                                     )))))))))))))))))))))))))))))))))))))))))))))))))) {
            uVar12 = uVar13 - iVar11;
            goto LAB_1805050ae;
          }
        }
        else if (uVar17 < 0xff1a) {
          uVar12 = uVar13 - 0xff10;
          goto LAB_1805050ae;
        }
LAB_1805050b3:
        if ((uVar13 - 0x41 < 0x1a) || (uVar13 - 0x61 < 0x1a)) {
          uVar12 = uVar13;
          if (uVar13 - 0x61 < 0x1a) {
            uVar12 = uVar13 - 0x20;
          }
          uVar12 = uVar12 - 0x37;
        }
        else {
          uVar12 = 0xffffffff;
        }
      }
      if (uVar22 < uVar12) break;
      bVar9 = true;
      if (piVar21 != piVar23) {
        *(char *)piVar21 = (char)uVar12;
        piVar21 = (int *)((longlong)piVar21 + 1);
      }
      lVar2 = param_2[2];
      param_2[2] = lVar2 + 1U;
      if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
        lVar2 = *param_2;
        puVar7 = *(ushort **)(lVar2 + 0x10);
        if (puVar7 != *(ushort **)(lVar2 + 8)) {
          local_res20[0] = *puVar7;
          *(ushort **)(lVar2 + 0x10) = puVar7 + 1;
          if (local_res20[0] != 0xffff) goto LAB_180505127;
        }
        local_res20[0] = 0;
      }
      else {
        local_res20[0] = 0;
      }
LAB_180505127:
      uVar13 = (uint)local_res20[0];
    } while( true );
  }
  piVar23 = param_3 + 2;
  uVar12 = 0;
  uVar22 = 0;
  if (!bVar9) {
    cVar10 = FUN_18050a73c(&local_68);
    if ((cVar10 == '\0') || (local_res10 == 0)) {
      return 7;
    }
    return 2;
  }
  lVar2 = param_2[2];
  param_2[2] = lVar2 - 1U;
  if (((param_2[1] == 0) || (lVar2 - 1U <= (ulonglong)param_2[1])) &&
     ((ushort)((short)uVar13 - 1U) < 0xfffe)) {
    plVar6 = (longlong *)*param_2;
    if (plVar6[2] != *plVar6) {
      plVar6[2] = plVar6[2] + -2;
    }
  }
  local_70 = param_2[2];
  param_2[2] = local_70 + 1U;
  if ((param_2[1] == 0) || (uVar13 = uVar12, local_70 + 1U <= (ulonglong)param_2[1])) {
    lVar2 = *param_2;
    puVar7 = *(ushort **)(lVar2 + 0x10);
    if (puVar7 != *(ushort **)(lVar2 + 8)) {
      uVar17 = *puVar7;
      *(ushort **)(lVar2 + 0x10) = puVar7 + 1;
      uVar13 = (uint)uVar17;
      if (uVar17 != 0xffff) goto LAB_1805051fc;
    }
    uVar13 = uVar12;
  }
LAB_1805051fc:
  uVar17 = (ushort)uVar13;
  if (uVar17 == 0x45) {
LAB_180505220:
    uVar13 = (uint)(local_res10 ^ 1);
  }
  else if (uVar17 == 0x50) {
LAB_18050521b:
    uVar13 = (uint)local_res10;
  }
  else {
    if (uVar17 == 0x65) goto LAB_180505220;
    uVar13 = uVar12;
    if (uVar17 == 0x70) goto LAB_18050521b;
  }
  if ((char)uVar13 == '\0') {
LAB_18050580f:
    lVar2 = param_2[2];
    param_2[2] = lVar2 - 1U;
    if (((param_2[1] == 0) || (lVar2 - 1U <= (ulonglong)param_2[1])) &&
       ((ushort)(uVar17 - 1) < 0xfffe)) {
      param_2 = (longlong *)*param_2;
      if (param_2[2] != *param_2) {
        param_2[2] = param_2[2] + -2;
      }
    }
    if (piVar21 != piVar23) {
      do {
        piVar1 = (int *)((longlong)piVar21 + -1);
        if (*(char *)piVar1 != '\0') break;
        piVar21 = piVar1;
      } while (piVar1 != piVar23);
      if (piVar21 != piVar23) {
        if (0x1450 < (int)uVar22) {
          return 9;
        }
        if (-0x1451 < (int)uVar22) {
          iVar11 = uVar22 + ((-(uint)(local_res10 != 0) & 3) + 1) * local_78;
          if (0x1450 < iVar11) {
            return 9;
          }
          if (-0x1451 < iVar11) {
            *param_3 = iVar11;
            param_3[1] = (int)piVar21 - (int)piVar23;
            return (ulonglong)local_res10;
          }
        }
        return 8;
      }
    }
    return 2;
  }
  lVar2 = param_2[2];
  param_2[2] = lVar2 + 1U;
  uVar22 = uVar12;
  if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar2 + 1U)) {
LAB_18050535f:
    local_res20[0] = 0;
    bVar9 = false;
    uVar13 = uVar12;
    uVar20 = uVar12;
    goto LAB_18050536e;
  }
  lVar2 = *param_2;
  puVar7 = *(ushort **)(lVar2 + 0x10);
  if (puVar7 == *(ushort **)(lVar2 + 8)) goto LAB_18050535f;
  local_res20[0] = *puVar7;
  uVar13 = (uint)local_res20[0];
  *(ushort **)(lVar2 + 0x10) = puVar7 + 1;
  if (local_res20[0] == 0xffff) goto LAB_18050535f;
  uVar20 = (uint)local_res20[0];
  if ((local_res20[0] != 0x2b) && (local_res20[0] != 0x2d)) goto LAB_1805052e5;
  lVar2 = param_2[2];
  param_2[2] = lVar2 + 1U;
  if ((param_2[1] == 0) || (uVar20 = uVar12, lVar2 + 1U <= (ulonglong)param_2[1])) {
    lVar2 = *param_2;
    puVar7 = *(ushort **)(lVar2 + 0x10);
    if (puVar7 != *(ushort **)(lVar2 + 8)) {
      uVar17 = *puVar7;
      *(ushort **)(lVar2 + 0x10) = puVar7 + 1;
      uVar20 = (uint)uVar17;
      if (uVar17 != 0xffff) goto LAB_1805052de;
    }
    uVar20 = uVar12;
  }
LAB_1805052de:
  local_res20[0] = (ushort)uVar20;
LAB_1805052e5:
  bVar9 = false;
  uVar17 = local_res20[0];
  if (local_res20[0] != 0x30) goto LAB_180505376;
  do {
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar2 + 1U)) {
LAB_18050534f:
      local_res20[0] = 0;
      uVar20 = uVar12;
      break;
    }
    lVar2 = *param_2;
    puVar7 = *(ushort **)(lVar2 + 0x10);
    if (puVar7 == *(ushort **)(lVar2 + 8)) goto LAB_18050534f;
    local_res20[0] = *puVar7;
    uVar20 = (uint)local_res20[0];
    *(ushort **)(lVar2 + 0x10) = puVar7 + 1;
    if (local_res20[0] == 0xffff) goto LAB_18050534f;
  } while (local_res20[0] == 0x30);
  do {
    bVar9 = true;
LAB_18050536e:
    uVar17 = (ushort)uVar20;
LAB_180505376:
    uVar18 = (ushort)uVar20;
    if (uVar17 < 0x30) {
LAB_180505515:
      if ((0x19 < uVar20 - 0x41) && (0x19 < uVar20 - 0x61)) goto LAB_18050559c;
      uVar19 = uVar20;
      if (uVar20 - 0x61 < 0x1a) {
        uVar19 = uVar20 - 0x20;
      }
      uVar19 = uVar19 - 0x37;
    }
    else {
      if (0x39 < uVar18) {
        iVar11 = 0xff10;
        if (uVar18 < 0xff10) {
          iVar11 = 0x660;
          if (0x65f < uVar18) {
            if (0x669 < uVar18) {
              iVar11 = 0x6f0;
              if (uVar18 < 0x6f0) goto LAB_180505515;
              if (0x6f9 < uVar18) {
                iVar11 = 0x966;
                if (uVar18 < 0x966) goto LAB_180505515;
                if (0x96f < uVar18) {
                  iVar11 = 0x9e6;
                  if (uVar18 < 0x9e6) goto LAB_180505515;
                  if (0x9ef < uVar18) {
                    iVar11 = 0xa66;
                    if (uVar18 < 0xa66) goto LAB_180505515;
                    if (0xa6f < uVar18) {
                      iVar11 = 0xae6;
                      if (uVar18 < 0xae6) goto LAB_180505515;
                      if (0xaef < uVar18) {
                        iVar11 = 0xb66;
                        if (uVar18 < 0xb66) goto LAB_180505515;
                        if (0xb6f < uVar18) {
                          iVar11 = 0xc66;
                          if (uVar18 < 0xc66) goto LAB_180505515;
                          if (0xc6f < uVar18) {
                            iVar11 = 0xce6;
                            if (uVar18 < 0xce6) goto LAB_180505515;
                            if (0xcef < uVar18) {
                              iVar11 = 0xd66;
                              if (uVar18 < 0xd66) goto LAB_180505515;
                              if (0xd6f < uVar18) {
                                iVar11 = 0xe50;
                                if (uVar18 < 0xe50) goto LAB_180505515;
                                if (0xe59 < uVar18) {
                                  iVar11 = 0xed0;
                                  if (uVar18 < 0xed0) goto LAB_180505515;
                                  if (0xed9 < uVar18) {
                                    iVar11 = 0xf20;
                                    if (uVar18 < 0xf20) goto LAB_180505515;
                                    if (0xf29 < uVar18) {
                                      iVar11 = 0x1040;
                                      if (uVar18 < 0x1040) goto LAB_180505515;
                                      if (0x1049 < uVar18) {
                                        iVar11 = 0x17e0;
                                        if (uVar18 < 0x17e0) goto LAB_180505515;
                                        if (0x17e9 < uVar18) {
                                          if (9 < (ushort)(uVar18 + 0xe7f0)) goto LAB_180505515;
                                          iVar11 = 0x1810;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_18050550b:
            uVar19 = uVar20 - iVar11;
            goto LAB_180505510;
          }
        }
        else if (uVar18 < 0xff1a) goto LAB_18050550b;
        goto LAB_180505515;
      }
      uVar19 = uVar20 - 0x30;
LAB_180505510:
      if (uVar19 == 0xffffffff) goto LAB_180505515;
    }
    if (9 < uVar19) goto LAB_18050559c;
    bVar9 = true;
    uVar22 = uVar19 + uVar22 * 10;
    if (0x1450 < (int)uVar22) break;
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (uVar20 = uVar12, lVar2 + 1U <= (ulonglong)param_2[1])) {
      lVar2 = *param_2;
      puVar7 = *(ushort **)(lVar2 + 0x10);
      if (puVar7 != *(ushort **)(lVar2 + 8)) {
        uVar17 = *puVar7;
        *(ushort **)(lVar2 + 0x10) = puVar7 + 1;
        uVar20 = (uint)uVar17;
        if (uVar17 != 0xffff) goto LAB_18050558b;
      }
      uVar20 = uVar12;
    }
LAB_18050558b:
    local_res20[0] = (ushort)uVar20;
  } while( true );
  uVar22 = 0x1451;
LAB_18050559c:
  do {
    iVar11 = 0x30;
    uVar17 = (ushort)uVar20;
    if (uVar17 < 0x30) goto LAB_180505733;
    if (uVar17 < 0x3a) {
LAB_180505729:
      uVar19 = uVar20 - iVar11;
      if (uVar19 == 0xffffffff) goto LAB_180505733;
    }
    else {
      iVar11 = 0xff10;
      if (uVar17 < 0xff10) {
        iVar11 = 0x660;
        if ((0x65f < uVar17) &&
           ((uVar17 < 0x66a ||
            ((iVar11 = 0x6f0, 0x6ef < uVar17 &&
             ((uVar17 < 0x6fa ||
              ((iVar11 = 0x966, 0x965 < uVar17 &&
               ((uVar17 < 0x970 ||
                ((iVar11 = 0x9e6, 0x9e5 < uVar17 &&
                 ((uVar17 < 0x9f0 ||
                  ((iVar11 = 0xa66, 0xa65 < uVar17 &&
                   ((uVar17 < 0xa70 ||
                    ((iVar11 = 0xae6, 0xae5 < uVar17 &&
                     ((uVar17 < 0xaf0 ||
                      ((iVar11 = 0xb66, 0xb65 < uVar17 &&
                       ((uVar17 < 0xb70 ||
                        ((iVar11 = 0xc66, 0xc65 < uVar17 &&
                         ((uVar17 < 0xc70 ||
                          ((iVar11 = 0xce6, 0xce5 < uVar17 &&
                           ((uVar17 < 0xcf0 ||
                            ((iVar11 = 0xd66, 0xd65 < uVar17 &&
                             ((uVar17 < 0xd70 ||
                              ((iVar11 = 0xe50, 0xe4f < uVar17 &&
                               ((uVar17 < 0xe5a ||
                                ((iVar11 = 0xed0, 0xecf < uVar17 &&
                                 ((uVar17 < 0xeda ||
                                  ((iVar11 = 0xf20, 0xf1f < uVar17 &&
                                   ((uVar17 < 0xf2a ||
                                    ((iVar11 = 0x1040, 0x103f < uVar17 &&
                                     ((uVar17 < 0x104a ||
                                      ((iVar11 = 0x17e0, 0x17df < uVar17 &&
                                       ((uVar17 < 0x17ea ||
                                        (iVar11 = 0x1810, (ushort)(uVar17 + 0xe7f0) < 10))))))))))))
                                  ))))))))))))))))))))))))))))))))))))))))))))))))
        goto LAB_180505729;
      }
      else if (uVar17 < 0xff1a) goto LAB_180505729;
LAB_180505733:
      if ((0x19 < uVar20 - 0x41) && (0x19 < uVar20 - 0x61)) break;
      if (uVar20 - 0x61 < 0x1a) {
        uVar20 = uVar20 - 0x20;
      }
      uVar19 = uVar20 - 0x37;
    }
    if (9 < uVar19) break;
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (uVar20 = uVar12, lVar2 + 1U <= (ulonglong)param_2[1])) {
      lVar2 = *param_2;
      puVar7 = *(ushort **)(lVar2 + 0x10);
      if (puVar7 != *(ushort **)(lVar2 + 8)) {
        uVar17 = *puVar7;
        *(ushort **)(lVar2 + 0x10) = puVar7 + 1;
        uVar20 = (uint)uVar17;
        if (uVar17 != 0xffff) goto LAB_180505798;
      }
      uVar20 = uVar12;
    }
LAB_180505798:
    local_res20[0] = (ushort)uVar20;
  } while( true );
  if ((short)uVar13 == 0x2d) {
    uVar22 = -uVar22;
  }
  if (!bVar9) {
    cVar10 = FUN_18050a73c(&local_68);
    if (cVar10 == '\0') {
      return 7;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      lVar2 = *param_2;
      puVar7 = *(ushort **)(lVar2 + 0x10);
      if (puVar7 != *(ushort **)(lVar2 + 8)) {
        uVar17 = *puVar7;
        *(ushort **)(lVar2 + 0x10) = puVar7 + 1;
        if (uVar17 != 0xffff) goto LAB_18050580f;
      }
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
    }
  }
  goto LAB_18050580f;
}



/* ===== 1805058f8 FUN_1805058f8 ===== */

int FUN_1805058f8(char *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  longlong lVar8;
  longlong local_res18 [2];
  longlong *local_38;
  char *local_30;
  longlong *local_28;
  
  local_28 = local_res18;
  lVar8 = 0;
  local_res18[0] = param_3;
  local_38 = param_2;
  local_30 = param_1;
  do {
    if ((*param_1 != (&DAT_180577964)[lVar8]) && (*param_1 != (&DAT_180577968)[lVar8])) {
      FUN_18050a660(&local_38);
      return 7;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      iVar5 = _fgetc_nolock(*puVar3);
      cVar7 = (char)iVar5;
      if (iVar5 == -1) goto LAB_18050597a;
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_18050597a:
      cVar7 = '\0';
    }
    lVar8 = lVar8 + 1;
    *param_1 = cVar7;
  } while (lVar8 != 3);
  lVar8 = param_2[2];
  param_2[2] = lVar8 - 1U;
  if (((param_2[1] == 0) || (lVar8 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar7 + 1U))) {
    puVar3 = (undefined8 *)*param_2;
    if (cVar7 != -1) {
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + -1;
      FUN_180511948((int)cVar7,*puVar3);
    }
  }
  local_res18[0] = param_2[2];
  param_2[2] = local_res18[0] + 1U;
  if ((param_2[1] == 0) || (local_res18[0] + 1U <= (ulonglong)param_2[1])) {
    lVar8 = *param_2;
    uVar6 = _fgetc_nolock();
    if (uVar6 != 0xffffffff) {
      *(longlong *)(lVar8 + 8) = *(longlong *)(lVar8 + 8) + 1;
      goto LAB_180505a07;
    }
  }
  uVar6 = 0;
LAB_180505a07:
  *param_1 = (char)uVar6;
  lVar8 = 0;
  do {
    if (((char)uVar6 != "INITY"[lVar8]) && ((char)uVar6 != "inity"[lVar8])) {
      bVar4 = FUN_18050a660(&local_38);
      return (bVar4 ^ 1) * 4 + 3;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      uVar6 = _fgetc_nolock(*puVar3);
      if (uVar6 == 0xffffffff) goto LAB_180505a54;
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_180505a54:
      uVar6 = 0;
    }
    lVar8 = lVar8 + 1;
    cVar7 = (char)uVar6;
    *param_1 = cVar7;
    uVar6 = uVar6 & 0xff;
    if (lVar8 == 5) {
      lVar8 = param_2[2];
      param_2[2] = lVar8 - 1U;
      if (((param_2[1] == 0) || (lVar8 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar7 + 1U)))
      {
        puVar3 = (undefined8 *)*param_2;
        if (cVar7 != -1) {
          plVar1 = puVar3 + 1;
          *plVar1 = *plVar1 + -1;
          FUN_180511948((int)cVar7,*puVar3);
        }
      }
      return 3;
    }
  } while( true );
}



/* ===== 180505acc FUN_180505acc ===== */

int FUN_180505acc(char *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  longlong local_res18 [2];
  longlong *local_28;
  char *local_20;
  longlong *local_18;
  
  local_18 = local_res18;
  lVar6 = 0;
  do {
    local_28 = param_2;
    local_20 = param_1;
    if ((*param_1 != (&DAT_180577904)[lVar6]) && (*param_1 != (&DAT_180577908)[lVar6])) {
      local_res18[0] = param_3;
      FUN_18050a6d8(&local_28);
      return 7;
    }
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      pcVar3 = *(char **)(lVar1 + 0x10);
      if (pcVar3 == *(char **)(lVar1 + 8)) goto LAB_180505b2a;
      cVar5 = *pcVar3;
      *(char **)(lVar1 + 0x10) = pcVar3 + 1;
    }
    else {
LAB_180505b2a:
      cVar5 = '\0';
    }
    lVar6 = lVar6 + 1;
    *param_1 = cVar5;
  } while (lVar6 != 3);
  lVar6 = param_2[2];
  param_2[2] = lVar6 - 1U;
  if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar5 + 1U))) {
    plVar2 = (longlong *)*param_2;
    if (plVar2[2] != *plVar2) {
      plVar2[2] = plVar2[2] + -1;
    }
  }
  local_res18[0] = param_2[2];
  param_2[2] = local_res18[0] + 1U;
  if ((param_2[1] == 0) || (local_res18[0] + 1U <= (ulonglong)param_2[1])) {
    lVar6 = *param_2;
    pcVar3 = *(char **)(lVar6 + 0x10);
    if (pcVar3 != *(char **)(lVar6 + 8)) {
      cVar5 = *pcVar3;
      *(char **)(lVar6 + 0x10) = pcVar3 + 1;
      goto LAB_180505bcd;
    }
  }
  cVar5 = '\0';
LAB_180505bcd:
  *param_1 = cVar5;
  lVar6 = 0;
  do {
    if ((cVar5 != "INITY"[lVar6]) && (cVar5 != "inity"[lVar6])) {
      bVar4 = FUN_18050a6d8(&local_28);
      return (bVar4 ^ 1) * 4 + 3;
    }
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      pcVar3 = *(char **)(lVar1 + 0x10);
      if (pcVar3 == *(char **)(lVar1 + 8)) goto LAB_180505bfe;
      cVar5 = *pcVar3;
      *(char **)(lVar1 + 0x10) = pcVar3 + 1;
    }
    else {
LAB_180505bfe:
      cVar5 = '\0';
    }
    lVar6 = lVar6 + 1;
    *param_1 = cVar5;
    if (lVar6 == 5) {
      lVar6 = param_2[2];
      param_2[2] = lVar6 - 1U;
      if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar5 + 1U)))
      {
        param_2 = (longlong *)*param_2;
        if (param_2[2] != *param_2) {
          param_2[2] = param_2[2] + -1;
        }
      }
      return 3;
    }
  } while( true );
}



/* ===== 180505c7c FUN_180505c7c ===== */

int FUN_180505c7c(short *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  short sVar5;
  longlong lVar6;
  longlong local_res18;
  longlong *local_48;
  short *local_40;
  longlong *local_38;
  
  local_38 = &local_res18;
  lVar6 = 0;
  local_res18 = param_3;
  local_48 = param_2;
  local_40 = param_1;
  do {
    if ((*param_1 != *(short *)((longlong)&DAT_180577924 + lVar6)) &&
       (*param_1 != *(short *)((longlong)&DAT_18057792c + lVar6))) {
      FUN_18050a7a8(&local_48);
      return 7;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      sVar5 = thunk_FUN_18052a138(*puVar3);
      if (sVar5 == -1) {
        sVar5 = 0;
      }
      else {
        plVar1 = puVar3 + 1;
        *plVar1 = *plVar1 + 1;
      }
    }
    else {
      sVar5 = 0;
    }
    lVar6 = lVar6 + 2;
    *param_1 = sVar5;
  } while (lVar6 != 6);
  lVar6 = param_2[2];
  param_2[2] = lVar6 - 1U;
  if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) &&
     ((ushort)(sVar5 - 1U) < 0xfffe)) {
    puVar3 = (undefined8 *)*param_2;
    plVar1 = puVar3 + 1;
    *plVar1 = *plVar1 + -1;
    FUN_18052a454(sVar5,*puVar3);
  }
  local_res18 = param_2[2];
  param_2[2] = local_res18 + 1U;
  if ((param_2[1] == 0) || (local_res18 + 1U <= (ulonglong)param_2[1])) {
    puVar3 = (undefined8 *)*param_2;
    sVar5 = thunk_FUN_18052a138(*puVar3);
    if (sVar5 == -1) {
      sVar5 = 0;
    }
    else {
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
  }
  else {
    sVar5 = 0;
  }
  *param_1 = sVar5;
  lVar6 = 0;
  do {
    if ((sVar5 != *(short *)((longlong)L"INITY" + lVar6)) &&
       (sVar5 != *(short *)((longlong)L"inity" + lVar6))) {
      bVar4 = FUN_18050a7a8(&local_48);
      return (bVar4 ^ 1) * 4 + 3;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      sVar5 = thunk_FUN_18052a138(*puVar3);
      if (sVar5 == -1) {
        sVar5 = 0;
      }
      else {
        plVar1 = puVar3 + 1;
        *plVar1 = *plVar1 + 1;
      }
    }
    else {
      sVar5 = 0;
    }
    lVar6 = lVar6 + 2;
    *param_1 = sVar5;
  } while (lVar6 != 10);
  lVar6 = param_2[2];
  param_2[2] = lVar6 - 1U;
  if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) &&
     ((ushort)(sVar5 - 1U) < 0xfffe)) {
    puVar3 = (undefined8 *)*param_2;
    plVar1 = puVar3 + 1;
    *plVar1 = *plVar1 + -1;
    FUN_18052a454(sVar5,*puVar3);
  }
  return 3;
}



/* ===== 180505e94 FUN_180505e94 ===== */

int FUN_180505e94(short *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  short *psVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_res18;
  longlong *local_28;
  short *local_20;
  longlong *local_18;
  
  local_18 = &local_res18;
  lVar8 = 0;
  do {
    lVar7 = lVar8;
    local_28 = param_2;
    local_20 = param_1;
    if ((*param_1 != *(short *)((longlong)&DAT_1805778c8 + lVar7)) &&
       (*param_1 != *(short *)((longlong)&DAT_1805778d0 + lVar7))) {
      local_res18 = param_3;
      FUN_18050a73c(&local_28);
      return 7;
    }
    lVar8 = param_2[2];
    param_2[2] = lVar8 + 1U;
    if ((param_2[1] == 0) || (lVar8 + 1U <= (ulonglong)param_2[1])) {
      lVar8 = *param_2;
      psVar2 = *(short **)(lVar8 + 0x10);
      if (psVar2 != *(short **)(lVar8 + 8)) {
        sVar4 = *psVar2;
        *(short **)(lVar8 + 0x10) = psVar2 + 1;
        if (sVar4 != -1) goto LAB_180505f2c;
      }
      sVar4 = 0;
    }
    else {
      sVar4 = 0;
    }
LAB_180505f2c:
    *param_1 = sVar4;
    lVar8 = lVar7 + 2;
  } while (lVar7 + 2 != 6);
  lVar8 = param_2[2];
  uVar6 = (int)lVar7 - 3;
  param_2[2] = lVar8 - 1U;
  sVar5 = (short)uVar6;
  if (((param_2[1] == 0) || (lVar8 - 1U <= (ulonglong)param_2[1])) &&
     ((ushort)(sVar4 - sVar5) < 0xfffe)) {
    plVar1 = (longlong *)*param_2;
    if (plVar1[2] != *plVar1) {
      plVar1[2] = plVar1[2] + -2;
    }
  }
  local_res18 = param_2[2];
  param_2[2] = local_res18 + 1U;
  if ((param_2[1] == 0) || (local_res18 + 1U <= (ulonglong)param_2[1])) {
    lVar8 = *param_2;
    psVar2 = *(short **)(lVar8 + 0x10);
    if (psVar2 != *(short **)(lVar8 + 8)) {
      sVar4 = *psVar2;
      *(short **)(lVar8 + 0x10) = psVar2 + 1;
      if (sVar4 != -1) goto LAB_180505fce;
    }
    sVar4 = 0;
  }
  else {
    sVar4 = 0;
  }
LAB_180505fce:
  *param_1 = sVar4;
  lVar8 = 0;
  do {
    if ((sVar4 != *(short *)((longlong)L"INITY" + lVar8)) &&
       (sVar4 != *(short *)((longlong)L"inity" + lVar8))) {
      bVar3 = FUN_18050a73c(&local_28);
      return (bVar3 ^ uVar6) * 4 + 3;
    }
    lVar7 = param_2[2];
    param_2[2] = lVar7 + 1U;
    if ((param_2[1] == 0) || (lVar7 + 1U <= (ulonglong)param_2[1])) {
      lVar7 = *param_2;
      psVar2 = *(short **)(lVar7 + 0x10);
      if (psVar2 != *(short **)(lVar7 + 8)) {
        sVar4 = *psVar2;
        *(short **)(lVar7 + 0x10) = psVar2 + 1;
        if (sVar4 != -1) goto LAB_18050602c;
      }
      sVar4 = 0;
    }
    else {
      sVar4 = 0;
    }
LAB_18050602c:
    lVar8 = lVar8 + 2;
    *param_1 = sVar4;
    if (lVar8 == 10) {
      lVar8 = param_2[2];
      param_2[2] = lVar8 - 1U;
      if (((param_2[1] == 0) || (lVar8 - 1U <= (ulonglong)param_2[1])) &&
         ((ushort)(sVar4 - sVar5) < 0xfffe)) {
        param_2 = (longlong *)*param_2;
        if (param_2[2] != *param_2) {
          param_2[2] = param_2[2] + -2;
        }
      }
      return 3;
    }
  } while( true );
}



/* ===== 1805060a4 FUN_1805060a4 ===== */

int FUN_1805060a4(char *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong local_res18 [2];
  longlong *local_38;
  char *local_30;
  longlong *local_28;
  
  local_28 = local_res18;
  lVar7 = 0;
  local_res18[0] = param_3;
  local_38 = param_2;
  local_30 = param_1;
  do {
    if ((*param_1 != (&DAT_18057797c)[lVar7]) && (*param_1 != (&DAT_180577980)[lVar7])) {
      FUN_18050a660(&local_38);
      return 7;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      iVar6 = _fgetc_nolock(*puVar3);
      if (iVar6 == -1) goto LAB_180506125;
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_180506125:
      iVar6 = 0;
    }
    lVar7 = lVar7 + 1;
    cVar4 = (char)iVar6;
    *param_1 = cVar4;
  } while (lVar7 != 3);
  lVar7 = param_2[2];
  param_2[2] = lVar7 - 1U;
  if (((param_2[1] == 0) || (lVar7 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar4 + 1U))) {
    puVar3 = (undefined8 *)*param_2;
    if (cVar4 != -1) {
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + -1;
      FUN_180511948((int)cVar4,*puVar3);
    }
  }
  local_res18[0] = param_2[2];
  param_2[2] = local_res18[0] + 1U;
  if ((param_2[1] == 0) || (local_res18[0] + 1U <= (ulonglong)param_2[1])) {
    puVar3 = (undefined8 *)*param_2;
    iVar6 = _fgetc_nolock(*puVar3);
    if (iVar6 != -1) {
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
      *param_1 = (char)iVar6;
      if ((char)iVar6 != '(') goto LAB_1805062f1;
      lVar7 = param_2[2];
      param_2[2] = lVar7 + 1U;
      if ((param_2[1] == 0) || (lVar7 + 1U <= (ulonglong)param_2[1])) {
        puVar3 = (undefined8 *)*param_2;
        iVar6 = _fgetc_nolock(*puVar3);
        if (iVar6 == -1) goto LAB_1805061ed;
        plVar1 = puVar3 + 1;
        *plVar1 = *plVar1 + 1;
      }
      else {
LAB_1805061ed:
        iVar6 = 0;
      }
      *param_1 = (char)iVar6;
      cVar4 = FUN_180506d50(param_1,param_2);
      if (cVar4 != '\0') {
        lVar7 = param_2[2];
        cVar4 = *param_1;
        param_2[2] = lVar7 - 1U;
        if ((((param_2[1] == 0) || (lVar7 - 1U <= (ulonglong)param_2[1])) &&
            (1 < (byte)(cVar4 + 1U))) && (puVar3 = (undefined8 *)*param_2, cVar4 != -1)) {
          plVar1 = puVar3 + 1;
          *plVar1 = *plVar1 + -1;
          FUN_180511948((int)cVar4,*puVar3);
        }
        return 5;
      }
      cVar5 = FUN_180506b04(param_1,param_2);
      cVar4 = *param_1;
      iVar6 = (int)cVar4;
      if (cVar5 != '\0') {
        lVar7 = param_2[2];
        param_2[2] = lVar7 - 1U;
        if (((param_2[1] == 0) || (lVar7 - 1U <= (ulonglong)param_2[1])) &&
           ((1 < (byte)(cVar4 + 1U) && (puVar3 = (undefined8 *)*param_2, iVar6 != -1)))) {
          plVar1 = puVar3 + 1;
          *plVar1 = *plVar1 + -1;
          FUN_180511948(iVar6,*puVar3);
        }
        return 6;
      }
      while( true ) {
        cVar4 = (char)iVar6;
        if (cVar4 == ')') {
          return 4;
        }
        if ((cVar4 == '\0') ||
           ((((9 < (byte)(cVar4 - 0x30U) && (0x19 < (byte)(cVar4 + 0x9fU))) &&
             (0x19 < (byte)(cVar4 + 0xbfU))) && (cVar4 != '_')))) break;
        lVar7 = param_2[2];
        param_2[2] = lVar7 + 1U;
        if ((param_2[1] == 0) || (lVar7 + 1U <= (ulonglong)param_2[1])) {
          puVar3 = (undefined8 *)*param_2;
          iVar6 = _fgetc_nolock(*puVar3);
          if (iVar6 == -1) goto LAB_1805062de;
          plVar1 = puVar3 + 1;
          *plVar1 = *plVar1 + 1;
        }
        else {
LAB_1805062de:
          iVar6 = 0;
        }
        *param_1 = (char)iVar6;
      }
      goto LAB_1805062f1;
    }
  }
  *param_1 = '\0';
LAB_1805062f1:
  cVar4 = FUN_18050a660(&local_38);
  return (-(uint)(cVar4 != '\0') & 0xfffffffd) + 7;
}



/* ===== 18050631c FUN_18050631c ===== */

int FUN_18050631c(char *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong local_res18 [2];
  longlong *local_28;
  char *local_20;
  longlong *local_18;
  
  local_18 = local_res18;
  lVar6 = 0;
  do {
    local_28 = param_2;
    local_20 = param_1;
    if ((*param_1 != (&DAT_18057791c)[lVar6]) && (*param_1 != (&DAT_180577920)[lVar6])) {
      local_res18[0] = param_3;
      FUN_18050a6d8(&local_28);
      return 7;
    }
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      pcVar3 = *(char **)(lVar1 + 0x10);
      if (pcVar3 == *(char **)(lVar1 + 8)) goto LAB_18050637d;
      cVar4 = *pcVar3;
      *(char **)(lVar1 + 0x10) = pcVar3 + 1;
    }
    else {
LAB_18050637d:
      cVar4 = '\0';
    }
    lVar6 = lVar6 + 1;
    *param_1 = cVar4;
  } while (lVar6 != 3);
  lVar6 = param_2[2];
  param_2[2] = lVar6 - 1U;
  if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar4 + 1U))) {
    plVar2 = (longlong *)*param_2;
    if (plVar2[2] != *plVar2) {
      plVar2[2] = plVar2[2] + -1;
    }
  }
  local_res18[0] = param_2[2];
  param_2[2] = local_res18[0] + 1U;
  if ((param_2[1] == 0) || (local_res18[0] + 1U <= (ulonglong)param_2[1])) {
    lVar6 = *param_2;
    pcVar3 = *(char **)(lVar6 + 0x10);
    if (pcVar3 != *(char **)(lVar6 + 8)) {
      cVar4 = *pcVar3;
      *(char **)(lVar6 + 0x10) = pcVar3 + 1;
      *param_1 = cVar4;
      if (cVar4 != '(') goto LAB_180506427;
      lVar6 = param_2[2];
      param_2[2] = lVar6 + 1U;
      if ((param_2[1] == 0) || (lVar6 + 1U <= (ulonglong)param_2[1])) {
        lVar6 = *param_2;
        pcVar3 = *(char **)(lVar6 + 0x10);
        if (pcVar3 == *(char **)(lVar6 + 8)) goto LAB_180506458;
        cVar4 = *pcVar3;
        *(char **)(lVar6 + 0x10) = pcVar3 + 1;
      }
      else {
LAB_180506458:
        cVar4 = '\0';
      }
      *param_1 = cVar4;
      cVar4 = FUN_180506de8(param_1,param_2);
      if (cVar4 != '\0') {
        lVar6 = param_2[2];
        cVar4 = *param_1;
        param_2[2] = lVar6 - 1U;
        if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar4 + 1U))
           ) {
          param_2 = (longlong *)*param_2;
          if (param_2[2] != *param_2) {
            param_2[2] = param_2[2] + -1;
          }
        }
        return 5;
      }
      cVar5 = FUN_180506b9c(param_1,param_2);
      cVar4 = *param_1;
      if (cVar5 != '\0') {
        lVar6 = param_2[2];
        param_2[2] = lVar6 - 1U;
        if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar4 + 1U))
           ) {
          param_2 = (longlong *)*param_2;
          if (param_2[2] != *param_2) {
            param_2[2] = param_2[2] + -1;
          }
        }
        return 6;
      }
      while( true ) {
        if (cVar4 == ')') {
          return 4;
        }
        if ((cVar4 == '\0') ||
           ((((9 < (byte)(cVar4 - 0x30U) && (0x19 < (byte)(cVar4 + 0x9fU))) &&
             (0x19 < (byte)(cVar4 + 0xbfU))) && (cVar4 != '_')))) break;
        lVar6 = param_2[2];
        param_2[2] = lVar6 + 1U;
        if ((param_2[1] == 0) || (lVar6 + 1U <= (ulonglong)param_2[1])) {
          lVar6 = *param_2;
          pcVar3 = *(char **)(lVar6 + 0x10);
          if (pcVar3 == *(char **)(lVar6 + 8)) goto LAB_18050654d;
          cVar4 = *pcVar3;
          *(char **)(lVar6 + 0x10) = pcVar3 + 1;
        }
        else {
LAB_18050654d:
          cVar4 = '\0';
        }
        *param_1 = cVar4;
      }
      goto LAB_180506427;
    }
  }
  *param_1 = '\0';
LAB_180506427:
  cVar4 = FUN_18050a6d8(&local_28);
  return (-(uint)(cVar4 != '\0') & 0xfffffffd) + 7;
}



/* ===== 180506580 FUN_180506580 ===== */

int FUN_180506580(ushort *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  ushort uVar5;
  longlong lVar6;
  longlong local_res18;
  longlong *local_48;
  ushort *local_40;
  longlong *local_38;
  
  local_38 = &local_res18;
  lVar6 = 0;
  local_res18 = param_3;
  local_48 = param_2;
  local_40 = param_1;
  do {
    if ((*param_1 != *(ushort *)((longlong)&DAT_180577954 + lVar6)) &&
       (*param_1 != *(ushort *)((longlong)&DAT_18057795c + lVar6))) {
      FUN_18050a7a8(&local_48);
      return 7;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      uVar5 = thunk_FUN_18052a138(*puVar3);
      if (uVar5 == 0xffff) {
        uVar5 = 0;
      }
      else {
        plVar1 = puVar3 + 1;
        *plVar1 = *plVar1 + 1;
      }
    }
    else {
      uVar5 = 0;
    }
    lVar6 = lVar6 + 2;
    *param_1 = uVar5;
  } while (lVar6 != 6);
  lVar6 = param_2[2];
  param_2[2] = lVar6 - 1U;
  if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) && ((ushort)(uVar5 - 1) < 0xfffe)
     ) {
    puVar3 = (undefined8 *)*param_2;
    plVar1 = puVar3 + 1;
    *plVar1 = *plVar1 + -1;
    FUN_18052a454(uVar5,*puVar3);
  }
  local_res18 = param_2[2];
  param_2[2] = local_res18 + 1U;
  if ((param_2[1] == 0) || (local_res18 + 1U <= (ulonglong)param_2[1])) {
    puVar3 = (undefined8 *)*param_2;
    uVar5 = thunk_FUN_18052a138(*puVar3);
    if (uVar5 != 0xffff) {
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
      *param_1 = uVar5;
      if (uVar5 == 0x28) {
        lVar6 = param_2[2];
        param_2[2] = lVar6 + 1U;
        if ((param_2[1] == 0) || (lVar6 + 1U <= (ulonglong)param_2[1])) {
          puVar3 = (undefined8 *)*param_2;
          uVar5 = thunk_FUN_18052a138(*puVar3);
          if (uVar5 == 0xffff) {
            uVar5 = 0;
          }
          else {
            plVar1 = puVar3 + 1;
            *plVar1 = *plVar1 + 1;
          }
        }
        else {
          uVar5 = 0;
        }
        *param_1 = uVar5;
        cVar4 = FUN_180506e64(param_1,param_2);
        if (cVar4 != '\0') {
          lVar6 = param_2[2];
          uVar5 = *param_1;
          param_2[2] = lVar6 - 1U;
          if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) &&
             ((ushort)(uVar5 - 1) < 0xfffe)) {
            puVar3 = (undefined8 *)*param_2;
            plVar1 = puVar3 + 1;
            *plVar1 = *plVar1 + -1;
            FUN_18052a454(uVar5,*puVar3);
          }
          return 5;
        }
        cVar4 = FUN_180506c18(param_1,param_2);
        uVar5 = *param_1;
        if (cVar4 != '\0') {
          lVar6 = param_2[2];
          param_2[2] = lVar6 - 1U;
          if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) &&
             ((ushort)(uVar5 - 1) < 0xfffe)) {
            puVar3 = (undefined8 *)*param_2;
            plVar1 = puVar3 + 1;
            *plVar1 = *plVar1 + -1;
            FUN_18052a454(uVar5,*puVar3);
          }
          return 6;
        }
        while( true ) {
          if (uVar5 == 0x29) {
            return 4;
          }
          if ((uVar5 == 0) ||
             ((((9 < uVar5 - 0x30 && (0x19 < uVar5 - 0x61)) && (0x19 < uVar5 - 0x41)) &&
              (uVar5 != 0x5f)))) break;
          lVar6 = param_2[2];
          param_2[2] = lVar6 + 1U;
          if ((param_2[1] == 0) || (lVar6 + 1U <= (ulonglong)param_2[1])) {
            puVar3 = (undefined8 *)*param_2;
            uVar5 = thunk_FUN_18052a138(*puVar3);
            if (uVar5 == 0xffff) {
              uVar5 = 0;
            }
            else {
              plVar1 = puVar3 + 1;
              *plVar1 = *plVar1 + 1;
            }
          }
          else {
            uVar5 = 0;
          }
          *param_1 = uVar5;
        }
      }
      goto LAB_18050680e;
    }
  }
  *param_1 = 0;
LAB_18050680e:
  cVar4 = FUN_18050a7a8(&local_48);
  return (-(uint)(cVar4 != '\0') & 0xfffffffd) + 7;
}



/* ===== 180506840 FUN_180506840 ===== */

int FUN_180506840(ushort *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ushort *puVar3;
  char cVar4;
  ushort uVar5;
  longlong lVar6;
  longlong local_res18 [2];
  longlong *local_38;
  ushort *local_30;
  longlong *local_28;
  
  local_28 = local_res18;
  lVar6 = 0;
  do {
    local_38 = param_2;
    local_30 = param_1;
    if ((*param_1 != *(ushort *)((longlong)&DAT_1805778f4 + lVar6)) &&
       (*param_1 != *(ushort *)((longlong)&DAT_1805778fc + lVar6))) {
      local_res18[0] = param_3;
      FUN_18050a73c(&local_38);
      return 7;
    }
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      puVar3 = *(ushort **)(lVar1 + 0x10);
      if (puVar3 != *(ushort **)(lVar1 + 8)) {
        uVar5 = *puVar3;
        *(ushort **)(lVar1 + 0x10) = puVar3 + 1;
        if (uVar5 != 0xffff) goto LAB_1805068d7;
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
    }
LAB_1805068d7:
    lVar6 = lVar6 + 2;
    *param_1 = uVar5;
  } while (lVar6 != 6);
  lVar6 = param_2[2];
  param_2[2] = lVar6 - 1U;
  if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) && ((ushort)(uVar5 - 1) < 0xfffe)
     ) {
    plVar2 = (longlong *)*param_2;
    if (plVar2[2] != *plVar2) {
      plVar2[2] = plVar2[2] + -2;
    }
  }
  local_res18[0] = param_2[2];
  param_2[2] = local_res18[0] + 1U;
  if ((param_2[1] == 0) || (local_res18[0] + 1U <= (ulonglong)param_2[1])) {
    lVar6 = *param_2;
    puVar3 = *(ushort **)(lVar6 + 0x10);
    if (puVar3 != *(ushort **)(lVar6 + 8)) {
      uVar5 = *puVar3;
      *(ushort **)(lVar6 + 0x10) = puVar3 + 1;
      if (uVar5 != 0xffff) {
        *param_1 = uVar5;
        if (uVar5 != 0x28) goto LAB_180506adc;
        lVar6 = param_2[2];
        param_2[2] = lVar6 + 1U;
        if ((param_2[1] == 0) || (lVar6 + 1U <= (ulonglong)param_2[1])) {
          lVar6 = *param_2;
          puVar3 = *(ushort **)(lVar6 + 0x10);
          if (puVar3 != *(ushort **)(lVar6 + 8)) {
            uVar5 = *puVar3;
            *(ushort **)(lVar6 + 0x10) = puVar3 + 1;
            if (uVar5 != 0xffff) goto LAB_1805069bf;
          }
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
        }
LAB_1805069bf:
        *param_1 = uVar5;
        cVar4 = FUN_180506f0c(param_1,param_2);
        if (cVar4 != '\0') {
          lVar6 = param_2[2];
          uVar5 = *param_1;
          param_2[2] = lVar6 - 1U;
          if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) &&
             ((ushort)(uVar5 - 1) < 0xfffe)) {
            param_2 = (longlong *)*param_2;
            if (param_2[2] != *param_2) {
              param_2[2] = param_2[2] + -2;
            }
          }
          return 5;
        }
        cVar4 = FUN_180506cc0(param_1,param_2);
        uVar5 = *param_1;
        if (cVar4 != '\0') {
          lVar6 = param_2[2];
          param_2[2] = lVar6 - 1U;
          if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) &&
             ((ushort)(uVar5 - 1) < 0xfffe)) {
            param_2 = (longlong *)*param_2;
            if (param_2[2] != *param_2) {
              param_2[2] = param_2[2] + -2;
            }
          }
          return 6;
        }
        while( true ) {
          if (uVar5 == 0x29) {
            return 4;
          }
          if ((uVar5 == 0) ||
             ((((9 < uVar5 - 0x30 && (0x19 < uVar5 - 0x61)) && (0x19 < uVar5 - 0x41)) &&
              (uVar5 != 0x5f)))) break;
          lVar6 = param_2[2];
          param_2[2] = lVar6 + 1U;
          if ((param_2[1] == 0) || (lVar6 + 1U <= (ulonglong)param_2[1])) {
            lVar6 = *param_2;
            puVar3 = *(ushort **)(lVar6 + 0x10);
            if (puVar3 != *(ushort **)(lVar6 + 8)) {
              uVar5 = *puVar3;
              *(ushort **)(lVar6 + 0x10) = puVar3 + 1;
              if (uVar5 != 0xffff) goto LAB_180506ac9;
            }
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
          }
LAB_180506ac9:
          *param_1 = uVar5;
        }
        goto LAB_180506adc;
      }
    }
  }
  *param_1 = 0;
LAB_180506adc:
  cVar4 = FUN_18050a73c(&local_38);
  return (-(uint)(cVar4 != '\0') & 0xfffffffd) + 7;
}



/* ===== 180506b04 FUN_180506b04 ===== */

undefined1 FUN_180506b04(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    if ((*param_1 != (&DAT_180577a10)[lVar5]) && (*param_1 != (&DAT_180577a14)[lVar5])) {
      return 0;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      iVar4 = _fgetc_nolock(*puVar3);
      if (iVar4 == -1) goto LAB_180506b6f;
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_180506b6f:
      iVar4 = 0;
    }
    lVar5 = lVar5 + 1;
    *param_1 = (char)iVar4;
    if (lVar5 == 4) {
      return 1;
    }
  } while( true );
}



/* ===== 180506b9c FUN_180506b9c ===== */

undefined8 FUN_180506b9c(char *param_1,longlong *param_2)

{
  longlong lVar1;
  char *in_RAX;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  lVar4 = 0;
  do {
    cVar2 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
    if ((cVar2 != (&DAT_1805779c8)[lVar4]) && (cVar2 != (&DAT_1805779cc)[lVar4]))
    goto LAB_180506c0c;
    in_RAX = (char *)(param_2[2] + 1);
    param_2[2] = (longlong)in_RAX;
    if ((param_2[1] == 0) || (in_RAX <= (char *)param_2[1])) {
      lVar1 = *param_2;
      in_RAX = *(char **)(lVar1 + 0x10);
      if (in_RAX == *(char **)(lVar1 + 8)) goto LAB_180506be2;
      cVar2 = *in_RAX;
      in_RAX = in_RAX + 1;
      *(char **)(lVar1 + 0x10) = in_RAX;
    }
    else {
LAB_180506be2:
      cVar2 = '\0';
    }
    lVar4 = lVar4 + 1;
    *param_1 = cVar2;
  } while (lVar4 != 4);
  uVar3 = 1;
LAB_180506c0c:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar3);
}



/* ===== 180506c18 FUN_180506c18 ===== */

undefined1 FUN_180506c18(short *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  short sVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    if ((*param_1 != *(short *)((longlong)&DAT_1805779f0 + lVar5)) &&
       (*param_1 != *(short *)((longlong)&DAT_1805779f8 + lVar5))) {
      return 0;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      sVar4 = thunk_FUN_18052a138(*puVar3);
      if (sVar4 == -1) {
        sVar4 = 0;
      }
      else {
        plVar1 = puVar3 + 1;
        *plVar1 = *plVar1 + 1;
      }
    }
    else {
      sVar4 = 0;
    }
    lVar5 = lVar5 + 2;
    *param_1 = sVar4;
  } while (lVar5 != 8);
  return 1;
}



/* ===== 180506cc0 FUN_180506cc0 ===== */

undefined8 FUN_180506cc0(ushort *param_1,longlong *param_2)

{
  longlong lVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  lVar5 = 0;
  do {
    uVar3 = *param_1;
    puVar2 = (ushort *)(ulonglong)uVar3;
    if ((uVar3 != *(ushort *)((longlong)&DAT_1805779a8 + lVar5)) &&
       (uVar3 != *(ushort *)((longlong)&DAT_1805779b0 + lVar5))) goto LAB_180506d45;
    puVar2 = (ushort *)(param_2[2] + 1);
    param_2[2] = (longlong)puVar2;
    if ((param_2[1] == 0) || (puVar2 <= (ushort *)param_2[1])) {
      lVar1 = *param_2;
      puVar2 = *(ushort **)(lVar1 + 0x10);
      if (puVar2 != *(ushort **)(lVar1 + 8)) {
        uVar3 = *puVar2;
        *(ushort **)(lVar1 + 0x10) = puVar2 + 1;
        puVar2 = (ushort *)0xffff;
        if (uVar3 != 0xffff) goto LAB_180506d34;
      }
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
    }
LAB_180506d34:
    lVar5 = lVar5 + 2;
    *param_1 = uVar3;
  } while (lVar5 != 8);
  uVar4 = 1;
LAB_180506d45:
  return CONCAT71((int7)((ulonglong)puVar2 >> 8),uVar4);
}



/* ===== 180506d50 FUN_180506d50 ===== */

undefined1 FUN_180506d50(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    if ((*param_1 != (&DAT_180577a00)[lVar5]) && (*param_1 != (&DAT_180577a08)[lVar5])) {
      return 0;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      iVar4 = _fgetc_nolock(*puVar3);
      if (iVar4 == -1) goto LAB_180506dbb;
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_180506dbb:
      iVar4 = 0;
    }
    lVar5 = lVar5 + 1;
    *param_1 = (char)iVar4;
    if (lVar5 == 5) {
      return 1;
    }
  } while( true );
}



/* ===== 180506de8 FUN_180506de8 ===== */

undefined8 FUN_180506de8(char *param_1,longlong *param_2)

{
  longlong lVar1;
  char *in_RAX;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  lVar4 = 0;
  do {
    cVar2 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
    if ((cVar2 != (&DAT_1805779b8)[lVar4]) && (cVar2 != (&DAT_1805779c0)[lVar4]))
    goto LAB_180506e58;
    in_RAX = (char *)(param_2[2] + 1);
    param_2[2] = (longlong)in_RAX;
    if ((param_2[1] == 0) || (in_RAX <= (char *)param_2[1])) {
      lVar1 = *param_2;
      in_RAX = *(char **)(lVar1 + 0x10);
      if (in_RAX == *(char **)(lVar1 + 8)) goto LAB_180506e2e;
      cVar2 = *in_RAX;
      in_RAX = in_RAX + 1;
      *(char **)(lVar1 + 0x10) = in_RAX;
    }
    else {
LAB_180506e2e:
      cVar2 = '\0';
    }
    lVar4 = lVar4 + 1;
    *param_1 = cVar2;
  } while (lVar4 != 5);
  uVar3 = 1;
LAB_180506e58:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar3);
}



/* ===== 180506e64 FUN_180506e64 ===== */

undefined1 FUN_180506e64(short *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  short sVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    if ((*param_1 != *(short *)((longlong)&DAT_1805779d0 + lVar5)) &&
       (*param_1 != *(short *)((longlong)&DAT_1805779e0 + lVar5))) {
      return 0;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      sVar4 = thunk_FUN_18052a138(*puVar3);
      if (sVar4 == -1) {
        sVar4 = 0;
      }
      else {
        plVar1 = puVar3 + 1;
        *plVar1 = *plVar1 + 1;
      }
    }
    else {
      sVar4 = 0;
    }
    lVar5 = lVar5 + 2;
    *param_1 = sVar4;
  } while (lVar5 != 10);
  return 1;
}



/* ===== 180506f0c FUN_180506f0c ===== */

undefined8 FUN_180506f0c(ushort *param_1,longlong *param_2)

{
  longlong lVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  lVar5 = 0;
  do {
    uVar3 = *param_1;
    puVar2 = (ushort *)(ulonglong)uVar3;
    if ((uVar3 != *(ushort *)((longlong)&DAT_180577988 + lVar5)) &&
       (uVar3 != *(ushort *)((longlong)&DAT_180577998 + lVar5))) goto LAB_180506f91;
    puVar2 = (ushort *)(param_2[2] + 1);
    param_2[2] = (longlong)puVar2;
    if ((param_2[1] == 0) || (puVar2 <= (ushort *)param_2[1])) {
      lVar1 = *param_2;
      puVar2 = *(ushort **)(lVar1 + 0x10);
      if (puVar2 != *(ushort **)(lVar1 + 8)) {
        uVar3 = *puVar2;
        *(ushort **)(lVar1 + 0x10) = puVar2 + 1;
        puVar2 = (ushort *)0xffff;
        if (uVar3 != 0xffff) goto LAB_180506f80;
      }
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
    }
LAB_180506f80:
    lVar5 = lVar5 + 2;
    *param_1 = uVar3;
  } while (lVar5 != 10);
  uVar4 = 1;
LAB_180506f91:
  return CONCAT71((int7)((ulonglong)puVar2 >> 8),uVar4);
}



/* ===== 180506f9c FUN_180506f9c ===== */

SLD_STATUS FUN_180506f9c(int param_1,floating_point_string *param_2,uint *param_3)

{
  SLD_STATUS SVar1;
  uint uVar2;
  uint *local_18;
  undefined1 local_10;
  
  if (param_1 < 6) {
    if (param_1 == 5) {
      uVar2 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) + 0x7f800000 |
              *param_3 & 0x7f800000 | 1;
    }
    else {
      local_18 = param_3;
      if (param_1 == 0) {
        local_10 = 0;
        SVar1 = FUN_18050b2b8(param_2,&local_18);
        return SVar1;
      }
      if (param_1 == 1) {
        local_10 = 0;
        SVar1 = __crt_strtox::convert_hexadecimal_string_to_floating_type_common
                          (param_2,(floating_point_value *)&local_18);
        return SVar1;
      }
      if (param_1 == 2) {
        uVar2 = -(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000;
      }
      else if (param_1 == 3) {
        uVar2 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) + 0x7f800000 |
                *param_3 & 0x7f800000;
      }
      else {
        if (param_1 != 4) {
          return 1;
        }
        uVar2 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) + 0x7fffffff;
      }
    }
    *param_3 = uVar2;
  }
  else {
    if (param_1 != 6) {
      if (param_1 == 7) {
        *param_3 = 0;
      }
      else {
        if (param_1 == 8) {
          *param_3 = -(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000;
          return 2;
        }
        if (param_1 == 9) {
          *param_3 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) +
                     0x7f800000 | *param_3 & 0x7f800000;
          return 3;
        }
      }
      return 1;
    }
    *param_3 = 0xffc00000;
  }
  return 0;
}



/* ===== 180507104 FUN_180507104 ===== */

SLD_STATUS FUN_180507104(int param_1,floating_point_string *param_2,ulonglong *param_3)

{
  SLD_STATUS SVar1;
  ulonglong uVar2;
  ulonglong *local_18;
  undefined1 local_10;
  
  if (param_1 < 6) {
    if (param_1 == 5) {
      uVar2 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) +
              0x7ff0000000000000 | *param_3 & 0x7ff0000000000000 | 1;
    }
    else {
      local_18 = param_3;
      if (param_1 == 0) {
        local_10 = 1;
        SVar1 = FUN_18050b2b8(param_2,&local_18);
        return SVar1;
      }
      if (param_1 == 1) {
        local_10 = 1;
        SVar1 = __crt_strtox::convert_hexadecimal_string_to_floating_type_common
                          (param_2,(floating_point_value *)&local_18);
        return SVar1;
      }
      if (param_1 == 2) {
        uVar2 = -(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000;
      }
      else if (param_1 == 3) {
        uVar2 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) +
                0x7ff0000000000000 | *param_3 & 0x7ff0000000000000;
      }
      else {
        if (param_1 != 4) {
          return 1;
        }
        uVar2 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) +
                0x7fffffffffffffff;
      }
    }
    *param_3 = uVar2;
  }
  else {
    if (param_1 != 6) {
      if (param_1 == 7) {
        *param_3 = 0;
      }
      else {
        if (param_1 == 8) {
          *param_3 = -(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000
          ;
          return 2;
        }
        if (param_1 == 9) {
          *param_3 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) &
                     0x8000000000000000) + 0x7ff0000000000000 | *param_3 & 0x7ff0000000000000;
          return 3;
        }
      }
      return 1;
    }
    *param_3 = 0xfff8000000000000;
  }
  return 0;
}



/* ===== 1805072dc FUN_1805072dc ===== */

ulonglong FUN_1805072dc(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  
  puVar2 = (undefined8 *)*param_2;
  if ((puVar2 == (undefined8 *)0x0) || (param_2[3] == 0)) {
    puVar10 = (undefined4 *)FUN_18051bfb0();
    *puVar10 = 0x16;
    FUN_180527740();
LAB_18050735b:
    puVar3 = (undefined1 *)param_2[3];
    if ((puVar3 != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *puVar3 = 0;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_1);
    goto LAB_18050735b;
  }
  lVar4 = param_2[2];
  uVar11 = lVar4 + 1;
  param_2[2] = uVar11;
  if (((param_2[1] == 0) || (uVar11 <= (ulonglong)param_2[1])) &&
     (uVar7 = _fgetc_nolock(*puVar2), uVar7 != 0xffffffff)) {
    puVar2[1] = puVar2[1] + 1;
  }
  else {
    uVar7 = 0;
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_1805002a0(param_1);
  }
  while( true ) {
    iVar8 = FUN_18050fc80(uVar7 & 0xff,8,param_1 + 0x18);
    if (iVar8 == 0) break;
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar2 = (undefined8 *)*param_2;
      uVar7 = _fgetc_nolock(*puVar2);
      if (uVar7 == 0xffffffff) goto LAB_1805073f0;
      plVar1 = puVar2 + 1;
      *plVar1 = *plVar1 + 1;
      uVar7 = uVar7 & 0xff;
    }
    else {
LAB_1805073f0:
      uVar7 = 0;
    }
  }
  bVar14 = param_4 | 2;
  if ((char)uVar7 != '-') {
    bVar14 = param_4;
  }
  if ((uVar7 - 0x2b & 0xfd) == 0) {
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar2 = (undefined8 *)*param_2;
      uVar7 = _fgetc_nolock(*puVar2);
      if (uVar7 != 0xffffffff) {
        plVar1 = puVar2 + 1;
        *plVar1 = *plVar1 + 1;
        uVar7 = uVar7 & 0xff;
        goto LAB_180507451;
      }
    }
    uVar7 = 0;
  }
LAB_180507451:
  uVar9 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_180507561;
  cVar6 = (char)uVar7;
  if ((byte)(cVar6 - 0x30U) < 10) {
    iVar8 = cVar6 + -0x30;
LAB_18050748f:
    if (iVar8 == 0) {
      lVar5 = param_2[2];
      param_2[2] = lVar5 + 1U;
      if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
        puVar2 = (undefined8 *)*param_2;
        iVar8 = _fgetc_nolock(*puVar2);
        if (iVar8 == -1) goto LAB_18050750d;
        plVar1 = puVar2 + 1;
        *plVar1 = *plVar1 + 1;
        if ((iVar8 - 0x58U & 0xdf) == 0) {
          uVar9 = 0x10;
          if (param_3 != 0) {
            uVar9 = param_3;
          }
          lVar5 = param_2[2];
          param_2[2] = lVar5 + 1U;
          if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
            puVar2 = (undefined8 *)*param_2;
            uVar7 = _fgetc_nolock(*puVar2);
            if (uVar7 != 0xffffffff) {
              plVar1 = puVar2 + 1;
              *plVar1 = *plVar1 + 1;
              uVar7 = uVar7 & 0xff;
              goto LAB_180507561;
            }
          }
          uVar7 = 0;
          goto LAB_180507561;
        }
      }
      else {
LAB_18050750d:
        iVar8 = 0;
      }
      uVar9 = 8;
      if (param_3 != 0) {
        uVar9 = param_3;
      }
      lVar5 = param_2[2];
      param_2[2] = lVar5 - 1U;
      if ((((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) &&
          (1 < (byte)((char)iVar8 + 1U))) && ((char)iVar8 != -1)) {
        *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + -1;
        FUN_180511948();
      }
      goto LAB_180507561;
    }
  }
  else {
    if ((byte)(cVar6 + 0x9fU) < 0x1a) {
      iVar8 = cVar6 + -0x57;
      goto LAB_18050748f;
    }
    if ((byte)(cVar6 + 0xbfU) < 0x1a) {
      iVar8 = cVar6 + -0x37;
      goto LAB_18050748f;
    }
  }
  uVar9 = 10;
  if (param_3 != 0) {
    uVar9 = param_3;
  }
LAB_180507561:
  uVar11 = 0;
  do {
    while( true ) {
      cVar6 = (char)uVar7;
      iVar8 = (int)cVar6;
      if ((byte)(cVar6 - 0x30U) < 10) {
        uVar7 = iVar8 - 0x30;
      }
      else if ((byte)(cVar6 + 0x9fU) < 0x1a) {
        uVar7 = iVar8 - 0x57;
      }
      else if ((byte)(cVar6 + 0xbfU) < 0x1a) {
        uVar7 = iVar8 - 0x37;
      }
      else {
        uVar7 = 0xffffffff;
      }
      if (uVar9 <= uVar7) {
        lVar5 = param_2[2];
        param_2[2] = lVar5 - 1U;
        if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) &&
           ((1 < (byte)(cVar6 + 1U) && (puVar2 = (undefined8 *)*param_2, iVar8 != -1)))) {
          plVar1 = puVar2 + 1;
          *plVar1 = *plVar1 + -1;
          FUN_180511948(iVar8,*puVar2);
        }
        if ((bVar14 & 8) == 0) {
          if (lVar4 != param_2[2]) {
            *(undefined1 *)param_2[3] = 0;
          }
          if ((undefined1 *)param_2[3] == (undefined1 *)0x0) {
            return 0;
          }
          if (param_2[2] == 0) {
            *(undefined1 *)param_2[3] = 0;
            return 0;
          }
          return 0;
        }
        cVar6 = FUN_1805022d0(bVar14,uVar11);
        if (cVar6 == '\0') {
          if ((bVar14 & 2) != 0) {
            uVar11 = -uVar11;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x30) = 1;
          *(undefined4 *)(param_1 + 0x2c) = 0x22;
          if ((bVar14 & 1) != 0) {
            puVar3 = (undefined1 *)param_2[3];
            if ((bVar14 & 2) == 0) {
              if ((puVar3 != (undefined1 *)0x0) && (param_2[2] == 0)) {
                *puVar3 = 0;
              }
              return 0x7fffffffffffffff;
            }
            if ((puVar3 != (undefined1 *)0x0) && (param_2[2] == 0)) {
              *puVar3 = 0;
            }
            return 0x8000000000000000;
          }
          uVar11 = 0xffffffffffffffff;
        }
        if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
          *(undefined1 *)param_2[3] = 0;
        }
        return uVar11;
      }
      uVar12 = (longlong)(int)uVar9 * uVar11;
      uVar13 = uVar7 + uVar12;
      lVar5 = param_2[2];
      bVar14 = bVar14 | (uVar13 < uVar12 ||
                        0xffffffffffffffffU / (ulonglong)(longlong)(int)uVar9 < uVar11) << 2 | 8U;
      param_2[2] = lVar5 + 1U;
      uVar11 = uVar13;
      if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) break;
LAB_180507600:
      uVar7 = 0;
    }
    puVar2 = (undefined8 *)*param_2;
    uVar7 = _fgetc_nolock(*puVar2);
    if (uVar7 == 0xffffffff) goto LAB_180507600;
    plVar1 = puVar2 + 1;
    *plVar1 = *plVar1 + 1;
    uVar7 = uVar7 & 0xff;
  } while( true );
}



/* ===== 180507714 FUN_180507714 ===== */

undefined8 FUN_180507714(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_1 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc != 0) goto LAB_18050776f;
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  else {
    local_30 = *param_1;
    uStack_2c = param_1[1];
    uStack_28 = param_1[2];
    uStack_24 = param_1[3];
  }
  local_20 = '\x01';
LAB_18050776f:
  local_68 = *param_2;
  local_60 = param_2[1];
  local_58 = param_2[2];
  local_50 = param_2[3];
  param_2[3] = 0;
  *param_2 = 0;
  uVar1 = FUN_1805072dc(local_48,&local_68);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
    *(undefined1 *)param_2[3] = 0;
  }
  return uVar1;
}



/* ===== 180507814 FUN_180507814 ===== */

ulonglong FUN_180507814(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  byte bVar17;
  int local_98;
  int local_90;
  int local_88;
  int local_80;
  int local_78;
  int local_70;
  int local_68;
  int local_60;
  int local_58;
  int local_50;
  
  puVar2 = (undefined8 *)*param_2;
  if ((puVar2 == (undefined8 *)0x0) || (param_2[3] == 0)) {
    puVar10 = (undefined4 *)FUN_18051bfb0();
    *puVar10 = 0x16;
    FUN_180527740();
LAB_180507895:
    puVar3 = (undefined1 *)param_2[3];
    if ((puVar3 != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *puVar3 = 0;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_1);
    goto LAB_180507895;
  }
  lVar4 = param_2[2];
  uVar11 = lVar4 + 1;
  param_2[2] = uVar11;
  if ((param_2[1] == 0) || (uVar11 <= (ulonglong)param_2[1])) {
    uVar7 = thunk_FUN_18052a138(*puVar2);
    uVar16 = (uint)uVar7;
    if (uVar7 == 0xffff) {
      uVar16 = 0;
    }
    else {
      puVar2[1] = puVar2[1] + 1;
    }
  }
  else {
    uVar16 = 0;
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_1805002a0(param_1);
  }
  iVar9 = iswctype((wint_t)uVar16,8);
  while (iVar9 != 0) {
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar2 = (undefined8 *)*param_2;
      uVar7 = thunk_FUN_18052a138(*puVar2);
      if (uVar7 == 0xffff) goto LAB_180507956;
      plVar1 = puVar2 + 1;
      *plVar1 = *plVar1 + 1;
      uVar16 = (uint)uVar7;
    }
    else {
LAB_180507956:
      uVar16 = 0;
    }
    iVar9 = iswctype((wint_t)uVar16,8);
  }
  bVar17 = param_4 | 2;
  if ((short)uVar16 != 0x2d) {
    bVar17 = param_4;
  }
  if ((uVar16 - 0x2b & 0xfffd) == 0) {
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar2 = (undefined8 *)*param_2;
      uVar7 = thunk_FUN_18052a138(*puVar2);
      if (uVar7 != 0xffff) {
        plVar1 = puVar2 + 1;
        *plVar1 = *plVar1 + 1;
        uVar16 = (uint)uVar7;
        goto LAB_1805079c0;
      }
    }
    uVar16 = 0;
  }
LAB_1805079c0:
  local_98 = 0xae6;
  iVar9 = 0x30;
  local_90 = 0xb66;
  local_88 = 0xc66;
  local_80 = 0xce6;
  local_78 = 0xd66;
  local_70 = 0xe50;
  local_68 = 0xed0;
  local_60 = 0xf20;
  local_58 = 0x1040;
  local_50 = 0x17e0;
  uVar13 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_180507da3;
  uVar7 = (ushort)uVar16;
  if (uVar7 < 0x30) goto LAB_180507c7d;
  if (uVar7 < 0x3a) {
LAB_180507ac2:
    iVar9 = uVar16 - iVar9;
LAB_180507c78:
    if (iVar9 == -1) goto LAB_180507c7d;
LAB_180507c9f:
    if (iVar9 == 0) {
      lVar5 = param_2[2];
      param_2[2] = lVar5 + 1U;
      if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
        puVar2 = (undefined8 *)*param_2;
        sVar8 = thunk_FUN_18052a138(*puVar2);
        if (sVar8 == -1) {
          sVar8 = 0;
        }
        else {
          plVar1 = puVar2 + 1;
          *plVar1 = *plVar1 + 1;
          if ((sVar8 - 0x58U & 0xffdf) == 0) {
            uVar13 = 0x10;
            if (param_3 != 0) {
              uVar13 = param_3;
            }
            lVar5 = param_2[2];
            param_2[2] = lVar5 + 1U;
            if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
              puVar2 = (undefined8 *)*param_2;
              uVar7 = thunk_FUN_18052a138(*puVar2);
              if (uVar7 == 0xffff) {
                uVar16 = 0;
              }
              else {
                plVar1 = puVar2 + 1;
                *plVar1 = *plVar1 + 1;
                uVar16 = (uint)uVar7;
              }
            }
            else {
              uVar16 = 0;
            }
            goto LAB_180507da3;
          }
        }
      }
      else {
        sVar8 = 0;
      }
      uVar13 = 8;
      if (param_3 != 0) {
        uVar13 = param_3;
      }
      lVar5 = param_2[2];
      param_2[2] = lVar5 - 1U;
      if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) &&
         ((ushort)(sVar8 - 1U) < 0xfffe)) {
        *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + -1;
        FUN_18052a454();
      }
      goto LAB_180507da3;
    }
  }
  else {
    if (uVar7 < 0xff10) {
      if (0x65f < uVar7) {
        if (uVar7 < 0x66a) {
          iVar9 = uVar16 - 0x660;
          goto LAB_180507c78;
        }
        if (0x6ef < uVar7) {
          if (uVar7 < 0x6fa) {
            iVar9 = uVar16 - 0x6f0;
            goto LAB_180507c78;
          }
          if (0x965 < uVar7) {
            if (uVar7 < 0x970) {
              iVar9 = uVar16 - 0x966;
              goto LAB_180507c78;
            }
            if (0x9e5 < uVar7) {
              if (uVar7 < 0x9f0) {
                iVar9 = uVar16 - 0x9e6;
                goto LAB_180507c78;
              }
              if (0xa65 < uVar7) {
                if (uVar7 < 0xa70) {
                  iVar9 = uVar16 - 0xa66;
                  goto LAB_180507c78;
                }
                iVar9 = 0xae6;
                if ((0xae5 < uVar7) &&
                   ((uVar7 < 0xaf0 ||
                    ((iVar9 = 0xb66, 0xb65 < uVar7 &&
                     ((uVar7 < 0xb70 ||
                      ((iVar9 = 0xc66, 0xc65 < uVar7 &&
                       ((uVar7 < 0xc70 ||
                        ((iVar9 = 0xce6, 0xce5 < uVar7 &&
                         ((uVar7 < 0xcf0 ||
                          ((iVar9 = 0xd66, 0xd65 < uVar7 &&
                           ((uVar7 < 0xd70 ||
                            ((iVar9 = 0xe50, 0xe4f < uVar7 &&
                             ((uVar7 < 0xe5a ||
                              ((iVar9 = 0xed0, 0xecf < uVar7 &&
                               ((uVar7 < 0xeda ||
                                ((iVar9 = 0xf20, 0xf1f < uVar7 &&
                                 ((uVar7 < 0xf2a ||
                                  ((iVar9 = 0x1040, 0x103f < uVar7 &&
                                   ((uVar7 < 0x104a ||
                                    ((iVar9 = 0x17e0, 0x17df < uVar7 &&
                                     ((uVar7 < 0x17ea ||
                                      (iVar9 = 0x1810, (ushort)(uVar7 + 0xe7f0) < 10))))))))))))))))
                              )))))))))))))))))))))))) goto LAB_180507ac2;
              }
            }
          }
        }
      }
    }
    else if (uVar7 < 0xff1a) {
      iVar9 = uVar16 - 0xff10;
      goto LAB_180507c78;
    }
LAB_180507c7d:
    if ((uVar16 - 0x41 < 0x1a) || (uVar16 - 0x61 < 0x1a)) {
      uVar13 = uVar16;
      if (uVar16 - 0x61 < 0x1a) {
        uVar13 = uVar16 - 0x20;
      }
      iVar9 = uVar13 - 0x37;
      goto LAB_180507c9f;
    }
  }
  uVar13 = 10;
  if (param_3 != 0) {
    uVar13 = param_3;
  }
LAB_180507da3:
  uVar11 = 0;
LAB_180507db5:
  do {
    uVar7 = (ushort)uVar16;
    if (uVar7 < 0x30) {
LAB_180507f4f:
      if ((uVar16 - 0x41 < 0x1a) || (uVar16 - 0x61 < 0x1a)) {
        uVar14 = uVar16;
        if (uVar16 - 0x61 < 0x1a) {
          uVar14 = uVar16 - 0x20;
        }
        uVar14 = uVar14 - 0x37;
      }
      else {
        uVar14 = 0xffffffff;
      }
    }
    else {
      if (0x39 < uVar7) {
        iVar9 = 0xff10;
        if (uVar7 < 0xff10) {
          if (0x65f < uVar7) {
            iVar9 = 0x660;
            if (uVar7 < 0x66a) {
LAB_180507f45:
              uVar14 = uVar16 - iVar9;
              goto LAB_180507f4a;
            }
            if (0x6ef < uVar7) {
              iVar9 = 0x6f0;
              if (uVar7 < 0x6fa) goto LAB_180507f45;
              if (0x965 < uVar7) {
                iVar9 = 0x966;
                if (uVar7 < 0x970) goto LAB_180507f45;
                if (0x9e5 < uVar7) {
                  iVar9 = 0x9e6;
                  if (uVar7 < 0x9f0) goto LAB_180507f45;
                  if (0xa65 < uVar7) {
                    iVar9 = 0xa66;
                    if (uVar7 < 0xa70) goto LAB_180507f45;
                    if (0xae5 < uVar7) {
                      iVar9 = local_98;
                      if (uVar7 < 0xaf0) goto LAB_180507f45;
                      if (0xb65 < uVar7) {
                        iVar9 = local_90;
                        if (uVar7 < 0xb70) goto LAB_180507f45;
                        if (0xc65 < uVar7) {
                          iVar9 = local_88;
                          if (uVar7 < 0xc70) goto LAB_180507f45;
                          if (0xce5 < uVar7) {
                            iVar9 = local_80;
                            if (uVar7 < 0xcf0) goto LAB_180507f45;
                            if (0xd65 < uVar7) {
                              iVar9 = local_78;
                              if (uVar7 < 0xd70) goto LAB_180507f45;
                              if (0xe4f < uVar7) {
                                iVar9 = local_70;
                                if (uVar7 < 0xe5a) goto LAB_180507f45;
                                if (0xecf < uVar7) {
                                  iVar9 = local_68;
                                  if (uVar7 < 0xeda) goto LAB_180507f45;
                                  if (0xf1f < uVar7) {
                                    iVar9 = local_60;
                                    if (uVar7 < 0xf2a) goto LAB_180507f45;
                                    if (0x103f < uVar7) {
                                      iVar9 = local_58;
                                      if (uVar7 < 0x104a) goto LAB_180507f45;
                                      if (0x17df < uVar7) {
                                        iVar9 = local_50;
                                        if (uVar7 < 0x17ea) goto LAB_180507f45;
                                        if ((ushort)(uVar7 + 0xe7f0) < 10) {
                                          uVar14 = uVar16 - 0x1810;
                                          goto LAB_180507f4a;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if (uVar7 < 0xff1a) goto LAB_180507f45;
        goto LAB_180507f4f;
      }
      uVar14 = uVar16 - 0x30;
LAB_180507f4a:
      if (uVar14 == 0xffffffff) goto LAB_180507f4f;
    }
    if (uVar13 <= uVar14) {
      lVar5 = param_2[2];
      param_2[2] = lVar5 - 1U;
      if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) &&
         ((ushort)(uVar7 - 1) < 0xfffe)) {
        puVar2 = (undefined8 *)*param_2;
        plVar1 = puVar2 + 1;
        *plVar1 = *plVar1 + -1;
        FUN_18052a454(uVar16,*puVar2);
      }
      if ((bVar17 & 8) == 0) {
        if (lVar4 != param_2[2]) {
          *(undefined1 *)param_2[3] = 0;
        }
        if ((undefined1 *)param_2[3] == (undefined1 *)0x0) {
          return 0;
        }
        if (param_2[2] == 0) {
          *(undefined1 *)param_2[3] = 0;
          return 0;
        }
        return 0;
      }
      cVar6 = FUN_1805022d0(bVar17,uVar11);
      if (cVar6 == '\0') {
        if ((bVar17 & 2) != 0) {
          uVar11 = -uVar11;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x30) = 1;
        *(undefined4 *)(param_1 + 0x2c) = 0x22;
        if ((bVar17 & 1) != 0) {
          puVar3 = (undefined1 *)param_2[3];
          if ((bVar17 & 2) == 0) {
            if ((puVar3 != (undefined1 *)0x0) && (param_2[2] == 0)) {
              *puVar3 = 0;
            }
            return 0x7fffffffffffffff;
          }
          if ((puVar3 != (undefined1 *)0x0) && (param_2[2] == 0)) {
            *puVar3 = 0;
          }
          return 0x8000000000000000;
        }
        uVar11 = 0xffffffffffffffff;
      }
      if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
        *(undefined1 *)param_2[3] = 0;
      }
      return uVar11;
    }
    uVar12 = (longlong)(int)uVar13 * uVar11;
    uVar15 = uVar14 + uVar12;
    lVar5 = param_2[2];
    bVar17 = bVar17 | (uVar15 < uVar12 ||
                      0xffffffffffffffffU / (ulonglong)(longlong)(int)uVar13 < uVar11) << 2 | 8U;
    param_2[2] = lVar5 + 1U;
    uVar11 = uVar15;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar2 = (undefined8 *)*param_2;
      uVar7 = thunk_FUN_18052a138(*puVar2);
      if (uVar7 != 0xffff) {
        plVar1 = puVar2 + 1;
        *plVar1 = *plVar1 + 1;
        uVar16 = (uint)uVar7;
        goto LAB_180507db5;
      }
    }
    uVar16 = 0;
  } while( true );
}



/* ===== 180508100 FUN_180508100 ===== */

undefined8 FUN_180508100(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_1 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc != 0) goto LAB_18050815b;
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  else {
    local_30 = *param_1;
    uStack_2c = param_1[1];
    uStack_28 = param_1[2];
    uStack_24 = param_1[3];
  }
  local_20 = '\x01';
LAB_18050815b:
  local_68 = *param_2;
  local_60 = param_2[1];
  local_58 = param_2[2];
  local_50 = param_2[3];
  param_2[3] = 0;
  *param_2 = 0;
  uVar1 = FUN_180507814(local_48,&local_68);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
    *(undefined1 *)param_2[3] = 0;
  }
  return uVar1;
}



/* ===== 180508200 FUN_180508200 ===== */

ulonglong FUN_180508200(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  char cVar13;
  ulonglong uVar14;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (param_2[3] == 0)) {
    puVar6 = (undefined4 *)FUN_18051bfb0();
    *puVar6 = 0x16;
    FUN_180527740();
LAB_18050827f:
    puVar2 = (undefined1 *)param_2[3];
    if ((puVar2 != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *puVar2 = 0;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_1);
    goto LAB_18050827f;
  }
  lVar3 = param_2[2];
  uVar14 = lVar3 + 1;
  param_2[2] = uVar14;
  if (((param_2[1] == 0) || (uVar14 <= (ulonglong)param_2[1])) &&
     (pcVar7 = *(char **)(lVar1 + 0x10), pcVar7 != *(char **)(lVar1 + 8))) {
    cVar4 = *pcVar7;
    *(char **)(lVar1 + 0x10) = pcVar7 + 1;
  }
  else {
    cVar4 = '\0';
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_1805002a0();
  }
  while (iVar5 = FUN_18050fc80(cVar4,8,param_1 + 0x18), iVar5 != 0) {
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      pcVar7 = *(char **)(lVar1 + 0x10);
      if (pcVar7 == *(char **)(lVar1 + 8)) goto LAB_1805082f6;
      cVar4 = *pcVar7;
      *(char **)(lVar1 + 0x10) = pcVar7 + 1;
    }
    else {
LAB_1805082f6:
      cVar4 = '\0';
    }
  }
  bVar12 = param_4 | 2;
  if (cVar4 != '-') {
    bVar12 = param_4;
  }
  if ((cVar4 - 0x2bU & 0xfd) == 0) {
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      pcVar7 = *(char **)(lVar1 + 0x10);
      if (pcVar7 != *(char **)(lVar1 + 8)) {
        cVar4 = *pcVar7;
        *(char **)(lVar1 + 0x10) = pcVar7 + 1;
        goto LAB_180508373;
      }
    }
    cVar4 = '\0';
  }
LAB_180508373:
  if ((param_3 & 0xffffffef) != 0) goto LAB_18050848a;
  if ((byte)(cVar4 - 0x30U) < 10) {
    iVar5 = cVar4 + -0x30;
LAB_1805083b9:
    if (iVar5 == 0) {
      uVar14 = param_2[1];
      uVar10 = param_2[2] + 1;
      param_2[2] = uVar10;
      if ((uVar14 == 0) || (uVar10 <= uVar14)) {
        lVar1 = *param_2;
        pcVar7 = *(char **)(lVar1 + 0x10);
        if (pcVar7 == *(char **)(lVar1 + 8)) goto LAB_1805083e7;
        cVar13 = *pcVar7;
        *(char **)(lVar1 + 0x10) = pcVar7 + 1;
        uVar10 = param_2[2];
        uVar14 = param_2[1];
        if ((cVar13 != 'x') && (cVar13 != 'X')) goto LAB_18050840a;
        uVar8 = 0x10;
        if (param_3 != 0) {
          uVar8 = param_3;
        }
        param_3 = uVar8;
        param_2[2] = uVar10 + 1;
        if ((uVar14 != 0) && (uVar14 < uVar10 + 1)) {
LAB_180508464:
          cVar4 = '\0';
          goto LAB_18050848a;
        }
        plVar9 = (longlong *)*param_2;
        pcVar7 = (char *)plVar9[2];
        if (pcVar7 == (char *)plVar9[1]) goto LAB_180508464;
        cVar4 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      }
      else {
LAB_1805083e7:
        cVar13 = '\0';
LAB_18050840a:
        uVar8 = 8;
        if (param_3 != 0) {
          uVar8 = param_3;
        }
        param_3 = uVar8;
        param_2[2] = uVar10 - 1;
        if (((uVar14 != 0) && (uVar14 < uVar10 - 1)) || ((byte)(cVar13 + 1U) < 2))
        goto LAB_18050848a;
        plVar9 = (longlong *)*param_2;
        if (plVar9[2] == *plVar9) goto LAB_18050848a;
        pcVar7 = (char *)(plVar9[2] + -1);
      }
      plVar9[2] = (longlong)pcVar7;
      goto LAB_18050848a;
    }
  }
  else {
    if ((byte)(cVar4 + 0x9fU) < 0x1a) {
      iVar5 = cVar4 + -0x57;
      goto LAB_1805083b9;
    }
    if ((byte)(cVar4 + 0xbfU) < 0x1a) {
      iVar5 = cVar4 + -0x37;
      goto LAB_1805083b9;
    }
  }
  uVar8 = 10;
  if (param_3 != 0) {
    uVar8 = param_3;
  }
  param_3 = uVar8;
LAB_18050848a:
  uVar14 = 0;
  do {
    while( true ) {
      if ((byte)(cVar4 - 0x30U) < 10) {
        uVar8 = (int)cVar4 - 0x30;
      }
      else if ((byte)(cVar4 + 0x9fU) < 0x1a) {
        uVar8 = (int)cVar4 - 0x57;
      }
      else if ((byte)(cVar4 + 0xbfU) < 0x1a) {
        uVar8 = (int)cVar4 - 0x37;
      }
      else {
        uVar8 = 0xffffffff;
      }
      if (param_3 <= uVar8) {
        lVar1 = param_2[2];
        param_2[2] = lVar1 - 1U;
        if (((param_2[1] == 0) || (lVar1 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar4 + 1U))
           ) {
          plVar9 = (longlong *)*param_2;
          if (plVar9[2] != *plVar9) {
            plVar9[2] = plVar9[2] + -1;
          }
        }
        if ((bVar12 & 8) == 0) {
          if (lVar3 != param_2[2]) {
            *(undefined1 *)param_2[3] = 0;
          }
          if ((undefined1 *)param_2[3] == (undefined1 *)0x0) {
            return 0;
          }
          if (param_2[2] == 0) {
            *(undefined1 *)param_2[3] = 0;
            return 0;
          }
          return 0;
        }
        cVar4 = FUN_1805022d0(bVar12);
        if (cVar4 == '\0') {
          if ((bVar12 & 2) != 0) {
            uVar14 = -uVar14;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x30) = 1;
          *(undefined4 *)(param_1 + 0x2c) = 0x22;
          if ((bVar12 & 1) != 0) {
            puVar2 = (undefined1 *)param_2[3];
            if ((bVar12 & 2) == 0) {
              if ((puVar2 != (undefined1 *)0x0) && (param_2[2] == 0)) {
                *puVar2 = 0;
              }
              return 0x7fffffffffffffff;
            }
            if ((puVar2 != (undefined1 *)0x0) && (param_2[2] == 0)) {
              *puVar2 = 0;
            }
            return 0x8000000000000000;
          }
          uVar14 = 0xffffffffffffffff;
        }
        if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
          *(undefined1 *)param_2[3] = 0;
        }
        return uVar14;
      }
      uVar10 = (longlong)(int)param_3 * uVar14;
      uVar11 = uVar8 + uVar10;
      lVar1 = param_2[2];
      bVar12 = bVar12 | (uVar11 < uVar10 ||
                        0xffffffffffffffffU / (ulonglong)(longlong)(int)param_3 < uVar14) << 2 | 8U;
      param_2[2] = lVar1 + 1U;
      uVar14 = uVar11;
      if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) break;
LAB_180508515:
      cVar4 = '\0';
    }
    lVar1 = *param_2;
    pcVar7 = *(char **)(lVar1 + 0x10);
    if (pcVar7 == *(char **)(lVar1 + 8)) goto LAB_180508515;
    cVar4 = *pcVar7;
    *(char **)(lVar1 + 0x10) = pcVar7 + 1;
  } while( true );
}



/* ===== 180508634 FUN_180508634 ===== */

undefined8 FUN_180508634(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_1 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc != 0) goto LAB_18050868f;
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  else {
    local_30 = *param_1;
    uStack_2c = param_1[1];
    uStack_28 = param_1[2];
    uStack_24 = param_1[3];
  }
  local_20 = '\x01';
LAB_18050868f:
  local_68 = *param_2;
  local_60 = param_2[1];
  local_58 = param_2[2];
  local_50 = param_2[3];
  param_2[3] = 0;
  *param_2 = 0;
  uVar1 = FUN_180508200(local_48,&local_68);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
    *(undefined1 *)param_2[3] = 0;
  }
  return uVar1;
}



/* ===== 180508734 FUN_180508734 ===== */

ulonglong FUN_180508734(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  longlong lVar1;
  longlong lVar2;
  wint_t *pwVar3;
  ushort *puVar4;
  short *psVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ushort _C;
  byte bVar15;
  short sVar16;
  ulonglong uVar17;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (param_2[3] == 0)) {
    puVar9 = (undefined4 *)FUN_18051bfb0();
    *puVar9 = 0x16;
    FUN_180527740();
  }
  else {
    if ((param_3 == 0) || (param_3 - 2 < 0x23)) {
      lVar2 = param_2[2];
      uVar17 = lVar2 + 1;
      param_2[2] = uVar17;
      if ((param_2[1] == 0) || (uVar17 <= (ulonglong)param_2[1])) {
        pwVar3 = *(wint_t **)(lVar1 + 0x10);
        if (pwVar3 != *(wint_t **)(lVar1 + 8)) {
          _C = *pwVar3;
          *(wint_t **)(lVar1 + 0x10) = pwVar3 + 1;
          if (_C != 0xffff) goto LAB_180508807;
        }
        _C = 0;
      }
      else {
        _C = 0;
      }
LAB_180508807:
      if (*(char *)(param_1 + 0x28) == '\0') {
        FUN_1805002a0(param_1);
      }
      iVar8 = iswctype(_C,8);
      while (iVar8 != 0) {
        lVar1 = param_2[2];
        param_2[2] = lVar1 + 1U;
        if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
          lVar1 = *param_2;
          pwVar3 = *(wint_t **)(lVar1 + 0x10);
          if (pwVar3 == *(wint_t **)(lVar1 + 8)) goto LAB_180508861;
          _C = *pwVar3;
          *(wint_t **)(lVar1 + 0x10) = pwVar3 + 1;
          if (_C == 0xffff) goto LAB_180508861;
        }
        else {
LAB_180508861:
          _C = 0;
        }
        iVar8 = iswctype(_C,8);
      }
      bVar15 = param_4 | 2;
      if (_C != 0x2d) {
        bVar15 = param_4;
      }
      if ((_C - 0x2b & 0xfffd) == 0) {
        lVar1 = param_2[2];
        param_2[2] = lVar1 + 1U;
        if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
          lVar1 = *param_2;
          puVar4 = *(ushort **)(lVar1 + 0x10);
          if (puVar4 != *(ushort **)(lVar1 + 8)) {
            _C = *puVar4;
            *(ushort **)(lVar1 + 0x10) = puVar4 + 1;
            if (_C != 0xffff) goto LAB_1805088ce;
          }
        }
        _C = 0;
      }
LAB_1805088ce:
      iVar8 = 0x30;
      uVar11 = param_3;
      if ((param_3 & 0xffffffef) == 0) {
        if (_C < 0x30) goto LAB_180508b99;
        if (_C < 0x3a) {
LAB_1805089df:
          iVar8 = (uint)_C - iVar8;
LAB_180508b94:
          if (iVar8 == -1) goto LAB_180508b99;
LAB_180508bbb:
          if (iVar8 == 0) {
            uVar17 = param_2[1];
            uVar13 = param_2[2] + 1;
            param_2[2] = uVar13;
            if ((uVar17 == 0) || (uVar13 <= uVar17)) {
              lVar1 = *param_2;
              psVar5 = *(short **)(lVar1 + 0x10);
              if (psVar5 != *(short **)(lVar1 + 8)) {
                sVar16 = *psVar5;
                *(short **)(lVar1 + 0x10) = psVar5 + 1;
                uVar13 = param_2[2];
                uVar17 = param_2[1];
                if (sVar16 != -1) {
                  if ((sVar16 == 0x78) || (sVar16 == 0x58)) {
                    uVar11 = 0x10;
                    if (param_3 != 0) {
                      uVar11 = param_3;
                    }
                    param_2[2] = uVar13 + 1;
                    if ((uVar17 == 0) || (uVar13 + 1 <= uVar17)) {
                      lVar1 = *param_2;
                      puVar4 = *(ushort **)(lVar1 + 0x10);
                      if (puVar4 != *(ushort **)(lVar1 + 8)) {
                        _C = *puVar4;
                        *(ushort **)(lVar1 + 0x10) = puVar4 + 1;
                        if (_C != 0xffff) goto LAB_180508cc1;
                      }
                    }
                    _C = 0;
                    goto LAB_180508cc1;
                  }
                  goto LAB_180508c26;
                }
              }
              sVar16 = 0;
            }
            else {
              sVar16 = 0;
            }
LAB_180508c26:
            uVar11 = 8;
            if (param_3 != 0) {
              uVar11 = param_3;
            }
            param_2[2] = uVar13 - 1;
            if (((uVar17 == 0) || (uVar13 - 1 <= uVar17)) && ((ushort)(sVar16 - 1U) < 0xfffe)) {
              plVar6 = (longlong *)*param_2;
              if (plVar6[2] != *plVar6) {
                plVar6[2] = plVar6[2] + -2;
              }
            }
            goto LAB_180508cc1;
          }
        }
        else {
          if (_C < 0xff10) {
            if (0x65f < _C) {
              if (_C < 0x66a) {
                iVar8 = _C - 0x660;
                goto LAB_180508b94;
              }
              if (0x6ef < _C) {
                if (_C < 0x6fa) {
                  iVar8 = _C - 0x6f0;
                  goto LAB_180508b94;
                }
                if (0x965 < _C) {
                  if (_C < 0x970) {
                    iVar8 = _C - 0x966;
                    goto LAB_180508b94;
                  }
                  if (0x9e5 < _C) {
                    if (_C < 0x9f0) {
                      iVar8 = _C - 0x9e6;
                      goto LAB_180508b94;
                    }
                    iVar8 = 0xa66;
                    if ((0xa65 < _C) &&
                       ((_C < 0xa70 ||
                        ((iVar8 = 0xae6, 0xae5 < _C &&
                         ((_C < 0xaf0 ||
                          ((iVar8 = 0xb66, 0xb65 < _C &&
                           ((_C < 0xb70 ||
                            ((iVar8 = 0xc66, 0xc65 < _C &&
                             ((_C < 0xc70 ||
                              ((iVar8 = 0xce6, 0xce5 < _C &&
                               ((_C < 0xcf0 ||
                                ((iVar8 = 0xd66, 0xd65 < _C &&
                                 ((_C < 0xd70 ||
                                  ((iVar8 = 0xe50, 0xe4f < _C &&
                                   ((_C < 0xe5a ||
                                    ((iVar8 = 0xed0, 0xecf < _C &&
                                     ((_C < 0xeda ||
                                      ((iVar8 = 0xf20, 0xf1f < _C &&
                                       ((_C < 0xf2a ||
                                        ((iVar8 = 0x1040, 0x103f < _C &&
                                         ((_C < 0x104a ||
                                          ((iVar8 = 0x17e0, 0x17df < _C &&
                                           ((_C < 0x17ea ||
                                            (iVar8 = 0x1810, (ushort)(_C + 0xe7f0) < 10)))))))))))))
                                      ))))))))))))))))))))))))))))))) goto LAB_1805089df;
                  }
                }
              }
            }
          }
          else if (_C < 0xff1a) {
            iVar8 = _C - 0xff10;
            goto LAB_180508b94;
          }
LAB_180508b99:
          uVar11 = (uint)_C;
          if ((_C - 0x41 < 0x1a) || (_C - 0x61 < 0x1a)) {
            if (_C - 0x61 < 0x1a) {
              uVar11 = _C - 0x20;
            }
            iVar8 = uVar11 - 0x37;
            goto LAB_180508bbb;
          }
        }
        uVar11 = 10;
        if (param_3 != 0) {
          uVar11 = param_3;
        }
      }
LAB_180508cc1:
      uVar17 = 0;
LAB_180508ce2:
      if (_C < 0x30) goto LAB_180508e93;
      if (_C < 0x3a) {
        uVar12 = _C - 0x30;
LAB_180508e8e:
        if (uVar12 == 0xffffffff) goto LAB_180508e93;
      }
      else {
        if (_C < 0xff10) {
          if (0x65f < _C) {
            if (_C < 0x66a) {
              uVar12 = _C - 0x660;
              goto LAB_180508e8e;
            }
            iVar8 = 0x6f0;
            if (0x6ef < _C) {
              if (_C < 0x6fa) {
LAB_180508d3c:
                uVar12 = (uint)_C - iVar8;
                goto LAB_180508e8e;
              }
              iVar8 = 0x966;
              if (0x965 < _C) {
                if (_C < 0x970) goto LAB_180508d3c;
                iVar8 = 0x9e6;
                if (0x9e5 < _C) {
                  if (_C < 0x9f0) goto LAB_180508d3c;
                  iVar8 = 0xa66;
                  if (0xa65 < _C) {
                    if (_C < 0xa70) goto LAB_180508d3c;
                    iVar8 = 0xae6;
                    if (0xae5 < _C) {
                      if (_C < 0xaf0) goto LAB_180508d3c;
                      iVar8 = 0xb66;
                      if (0xb65 < _C) {
                        if (_C < 0xb70) goto LAB_180508d3c;
                        iVar8 = 0xc66;
                        if (0xc65 < _C) {
                          if (_C < 0xc70) goto LAB_180508d3c;
                          iVar8 = 0xce6;
                          if (0xce5 < _C) {
                            if (_C < 0xcf0) goto LAB_180508d3c;
                            iVar8 = 0xd66;
                            if (0xd65 < _C) {
                              if (_C < 0xd70) goto LAB_180508d3c;
                              iVar8 = 0xe50;
                              if (0xe4f < _C) {
                                if (_C < 0xe5a) goto LAB_180508d3c;
                                iVar8 = 0xed0;
                                if (0xecf < _C) {
                                  if (_C < 0xeda) goto LAB_180508d3c;
                                  iVar8 = 0xf20;
                                  if (0xf1f < _C) {
                                    if (_C < 0xf2a) goto LAB_180508d3c;
                                    iVar8 = 0x1040;
                                    if (0x103f < _C) {
                                      if (_C < 0x104a) goto LAB_180508d3c;
                                      iVar8 = 0x17e0;
                                      if (0x17df < _C) {
                                        if (_C < 0x17ea) goto LAB_180508d3c;
                                        if ((ushort)(_C + 0xe7f0) < 10) {
                                          uVar12 = _C - 0x1810;
                                          goto LAB_180508e8e;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if (_C < 0xff1a) {
          uVar12 = _C - 0xff10;
          goto LAB_180508e8e;
        }
LAB_180508e93:
        uVar12 = (uint)_C;
        if ((_C - 0x41 < 0x1a) || (_C - 0x61 < 0x1a)) {
          if (_C - 0x61 < 0x1a) {
            uVar12 = _C - 0x20;
          }
          uVar12 = uVar12 - 0x37;
        }
        else {
          uVar12 = 0xffffffff;
        }
      }
      if (uVar12 < uVar11) {
        uVar13 = (longlong)(int)uVar11 * uVar17;
        uVar14 = uVar12 + uVar13;
        lVar1 = param_2[2];
        bVar15 = bVar15 | (uVar14 < uVar13 ||
                          0xffffffffffffffffU / (ulonglong)(longlong)(int)uVar11 < uVar17) << 2 | 8U
        ;
        param_2[2] = lVar1 + 1U;
        uVar17 = uVar14;
        if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar1 + 1U)) goto LAB_180508efc;
        lVar1 = *param_2;
        puVar4 = *(ushort **)(lVar1 + 0x10);
        if (puVar4 == *(ushort **)(lVar1 + 8)) goto LAB_180508efc;
        _C = *puVar4;
        *(ushort **)(lVar1 + 0x10) = puVar4 + 1;
        if (_C == 0xffff) {
LAB_180508efc:
          _C = 0;
        }
        goto LAB_180508ce2;
      }
      lVar1 = param_2[2];
      param_2[2] = lVar1 - 1U;
      if (((param_2[1] == 0) || (lVar1 - 1U <= (ulonglong)param_2[1])) &&
         ((ushort)(_C - 1) < 0xfffe)) {
        plVar6 = (longlong *)*param_2;
        if (plVar6[2] != *plVar6) {
          plVar6[2] = plVar6[2] + -2;
        }
      }
      if ((bVar15 & 8) != 0) {
        cVar7 = FUN_1805022d0(bVar15,uVar17);
        if (cVar7 == '\0') {
          if ((bVar15 & 2) != 0) {
            uVar17 = -uVar17;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x30) = 1;
          *(undefined4 *)(param_1 + 0x2c) = 0x22;
          if ((bVar15 & 1) != 0) {
            puVar10 = (undefined1 *)param_2[3];
            if ((bVar15 & 2) == 0) {
              if ((puVar10 != (undefined1 *)0x0) && (param_2[2] == 0)) {
                *puVar10 = 0;
              }
              return 0x7fffffffffffffff;
            }
            if ((puVar10 != (undefined1 *)0x0) && (param_2[2] == 0)) {
              *puVar10 = 0;
            }
            return 0x8000000000000000;
          }
          uVar17 = 0xffffffffffffffff;
        }
        if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
          *(undefined1 *)param_2[3] = 0;
        }
        return uVar17;
      }
      if (lVar2 != param_2[2]) {
        *(undefined1 *)param_2[3] = 0;
      }
      puVar10 = (undefined1 *)param_2[3];
      goto LAB_180508f89;
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_1);
  }
  puVar10 = (undefined1 *)param_2[3];
LAB_180508f89:
  if ((puVar10 != (undefined1 *)0x0) && (param_2[2] == 0)) {
    *puVar10 = 0;
  }
  return 0;
}



/* ===== 18050903c FUN_18050903c ===== */

undefined8 FUN_18050903c(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_1 == (undefined4 *)0x0) {
    if (DAT_180c9f7dc != 0) goto LAB_180509097;
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  else {
    local_30 = *param_1;
    uStack_2c = param_1[1];
    uStack_28 = param_1[2];
    uStack_24 = param_1[3];
  }
  local_20 = '\x01';
LAB_180509097:
  local_68 = *param_2;
  local_60 = param_2[1];
  local_58 = param_2[2];
  local_50 = param_2[3];
  param_2[3] = 0;
  *param_2 = 0;
  uVar1 = FUN_180508734(local_48,&local_68);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
    *(undefined1 *)param_2[3] = 0;
  }
  return uVar1;
}



/* ===== 18050913c FUN_18050913c ===== */

bool FUN_18050913c(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  char local_res8 [8];
  uint local_res10 [2];
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  
  local_res10[0] = 0;
  local_28 = param_1 + 8;
  local_20 = *(undefined8 *)(param_1 + 0x38);
  local_10 = local_res8;
  local_18 = 0;
  local_res8[0] = '\x01';
  iVar3 = parse_floating_point<>(*(undefined8 *)(param_1 + 0x70),&local_28,local_res10);
  if ((local_res8[0] == '\0') || (iVar3 == 1)) {
    bVar5 = false;
  }
  else if (*(char *)(param_1 + 0x32) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x78);
    *(longlong **)(param_1 + 0x78) = plVar1 + 1;
    puVar2 = (uint *)*plVar1;
    bVar5 = puVar2 != (uint *)0x0;
    if (bVar5) {
      *puVar2 = local_res10[0];
    }
    else {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      FUN_180527740();
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}



/* ===== 1805091d8 FUN_1805091d8 ===== */

bool FUN_1805091d8(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  char local_res8 [8];
  uint local_res10 [2];
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  
  local_res10[0] = 0;
  local_28 = param_1 + 8;
  local_20 = *(undefined8 *)(param_1 + 0x40);
  local_10 = local_res8;
  local_18 = 0;
  local_res8[0] = '\x01';
  iVar3 = parse_floating_point<>(*(undefined8 *)(param_1 + 0x78),&local_28,local_res10);
  if ((local_res8[0] == '\0') || (iVar3 == 1)) {
    bVar5 = false;
  }
  else if (*(char *)(param_1 + 0x3a) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x80);
    *(longlong **)(param_1 + 0x80) = plVar1 + 1;
    puVar2 = (uint *)*plVar1;
    bVar5 = puVar2 != (uint *)0x0;
    if (bVar5) {
      *puVar2 = local_res10[0];
    }
    else {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      FUN_180527740();
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}



/* ===== 18050927c FUN_18050927c ===== */

bool FUN_18050927c(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  char local_res8 [8];
  uint local_res10 [2];
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  
  local_res10[0] = 0;
  local_28 = param_1 + 8;
  local_20 = *(undefined8 *)(param_1 + 0x38);
  local_10 = local_res8;
  local_18 = 0;
  local_res8[0] = '\x01';
  iVar3 = parse_floating_point<>(*(undefined8 *)(param_1 + 0x58),&local_28,local_res10);
  if ((local_res8[0] == '\0') || (iVar3 == 1)) {
    bVar5 = false;
  }
  else if (*(char *)(param_1 + 0x34) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x60);
    *(longlong **)(param_1 + 0x60) = plVar1 + 1;
    puVar2 = (uint *)*plVar1;
    bVar5 = puVar2 != (uint *)0x0;
    if (bVar5) {
      *puVar2 = local_res10[0];
    }
    else {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      FUN_180527740();
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}



/* ===== 180509318 FUN_180509318 ===== */

bool FUN_180509318(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  char local_res8 [8];
  uint local_res10 [2];
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  
  local_res10[0] = 0;
  local_28 = param_1 + 8;
  local_20 = *(undefined8 *)(param_1 + 0x40);
  local_10 = local_res8;
  local_18 = 0;
  local_res8[0] = '\x01';
  iVar3 = parse_floating_point<>(*(undefined8 *)(param_1 + 0x60),&local_28,local_res10);
  if ((local_res8[0] == '\0') || (iVar3 == 1)) {
    bVar5 = false;
  }
  else if (*(char *)(param_1 + 0x3c) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x68);
    *(longlong **)(param_1 + 0x68) = plVar1 + 1;
    puVar2 = (uint *)*plVar1;
    bVar5 = puVar2 != (uint *)0x0;
    if (bVar5) {
      *puVar2 = local_res10[0];
    }
    else {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      FUN_180527740();
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}



/* ===== 1805093b4 FUN_1805093b4 ===== */

bool FUN_1805093b4(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  char local_res8 [8];
  undefined8 local_res10;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  
  local_28 = param_1 + 8;
  local_res8[0] = '\x01';
  local_20 = *(undefined8 *)(param_1 + 0x38);
  local_10 = local_res8;
  local_res10 = 0;
  local_18 = 0;
  iVar3 = parse_floating_point<>(*(undefined8 *)(param_1 + 0x70),&local_28,&local_res10);
  if ((local_res8[0] == '\0') || (iVar3 == 1)) {
    bVar5 = false;
  }
  else if (*(char *)(param_1 + 0x32) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x78);
    *(longlong **)(param_1 + 0x78) = plVar1 + 1;
    puVar2 = (undefined8 *)*plVar1;
    bVar5 = puVar2 != (undefined8 *)0x0;
    if (bVar5) {
      *puVar2 = local_res10;
    }
    else {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      FUN_180527740();
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}



/* ===== 180509458 FUN_180509458 ===== */

bool FUN_180509458(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  char local_res8 [8];
  undefined8 local_res10;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  
  local_28 = param_1 + 8;
  local_res8[0] = '\x01';
  local_20 = *(undefined8 *)(param_1 + 0x40);
  local_10 = local_res8;
  local_res10 = 0;
  local_18 = 0;
  iVar3 = parse_floating_point<>(*(undefined8 *)(param_1 + 0x78),&local_28,&local_res10);
  if ((local_res8[0] == '\0') || (iVar3 == 1)) {
    bVar5 = false;
  }
  else if (*(char *)(param_1 + 0x3a) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x80);
    *(longlong **)(param_1 + 0x80) = plVar1 + 1;
    puVar2 = (undefined8 *)*plVar1;
    bVar5 = puVar2 != (undefined8 *)0x0;
    if (bVar5) {
      *puVar2 = local_res10;
    }
    else {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      FUN_180527740();
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}



/* ===== 180509500 FUN_180509500 ===== */

bool FUN_180509500(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  char local_res8 [8];
  undefined8 local_res10;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  
  local_28 = param_1 + 8;
  local_res8[0] = '\x01';
  local_20 = *(undefined8 *)(param_1 + 0x38);
  local_10 = local_res8;
  local_res10 = 0;
  local_18 = 0;
  iVar3 = parse_floating_point<>(*(undefined8 *)(param_1 + 0x58),&local_28,&local_res10);
  if ((local_res8[0] == '\0') || (iVar3 == 1)) {
    bVar5 = false;
  }
  else if (*(char *)(param_1 + 0x34) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x60);
    *(longlong **)(param_1 + 0x60) = plVar1 + 1;
    puVar2 = (undefined8 *)*plVar1;
    bVar5 = puVar2 != (undefined8 *)0x0;
    if (bVar5) {
      *puVar2 = local_res10;
    }
    else {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      FUN_180527740();
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}



/* ===== 1805095a4 FUN_1805095a4 ===== */

bool FUN_1805095a4(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  char local_res8 [8];
  undefined8 local_res10;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  
  local_28 = param_1 + 8;
  local_res8[0] = '\x01';
  local_20 = *(undefined8 *)(param_1 + 0x40);
  local_10 = local_res8;
  local_res10 = 0;
  local_18 = 0;
  iVar3 = parse_floating_point<>(*(undefined8 *)(param_1 + 0x60),&local_28,&local_res10);
  if ((local_res8[0] == '\0') || (iVar3 == 1)) {
    bVar5 = false;
  }
  else if (*(char *)(param_1 + 0x3c) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x68);
    *(longlong **)(param_1 + 0x68) = plVar1 + 1;
    puVar2 = (undefined8 *)*plVar1;
    bVar5 = puVar2 != (undefined8 *)0x0;
    if (bVar5) {
      *puVar2 = local_res10;
    }
    else {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      FUN_180527740();
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}



/* ===== 180509648 FUN_180509648 ===== */

undefined8 FUN_180509648(byte *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  bool bVar11;
  
  puVar7 = (undefined1 *)0x0;
  if (param_1[0x32] == 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x78);
    *(undefined8 **)(param_1 + 0x78) = puVar1 + 1;
    puVar7 = (undefined1 *)*puVar1;
    if (puVar7 == (undefined1 *)0x0) {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      FUN_180527740();
      return 0;
    }
    if ((*param_1 & 1) != 0) {
      *(undefined8 **)(param_1 + 0x78) = puVar1 + 2;
      uVar8 = (ulonglong)*(uint *)(puVar1 + 1);
      if (uVar8 == 0) {
        if ((*param_1 & 4) != 0) {
          iVar3 = _fgetc_nolock(*(undefined8 *)(param_1 + 8));
          if (iVar3 != -1) {
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
          }
LAB_1805096e0:
          *puVar7 = 0;
        }
LAB_1805096e3:
        puVar4 = (undefined4 *)FUN_18051bfb0();
        *puVar4 = 0xc;
        return 0;
      }
      goto LAB_1805096f4;
    }
  }
  uVar8 = 0xffffffffffffffff;
LAB_1805096f4:
  lVar2 = *(longlong *)(param_1 + 0x38);
  uVar10 = uVar8;
  if ((param_2 != 0) && (uVar8 != 0xffffffffffffffff)) {
    uVar10 = uVar8 - 1;
  }
  lVar6 = 0;
  puVar9 = puVar7;
  do {
    if ((lVar2 != 0) && (lVar6 == lVar2)) goto LAB_180509793;
    uVar5 = _fgetc_nolock(*(undefined8 *)(param_1 + 8));
    iVar3 = (int)uVar5;
    if (iVar3 == -1) goto LAB_180509793;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    if (param_2 != 0) {
      if (param_2 == 1) {
        if (iVar3 - 9U < 5) {
LAB_180509783:
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          FUN_180511948(uVar5 & 0xffffffff,*(undefined8 *)(param_1 + 8));
LAB_180509793:
          if ((lVar6 == 0) || (((param_2 == 0 && (lVar6 != lVar2)) && ((*param_1 & 4) == 0)))) {
            return 0;
          }
          if ((param_1[0x32] == 0) && (param_2 != 0)) {
            *puVar9 = 0;
          }
          return 1;
        }
        bVar11 = iVar3 == 0x20;
      }
      else {
        if (param_2 != 8) goto LAB_180509783;
        bVar11 = (param_1[((uVar5 & 0xff) >> 3) + 0x4c] & (byte)(1 << ((byte)uVar5 & 7))) == 0;
      }
      if (bVar11) goto LAB_180509783;
    }
    if (param_1[0x32] == 0) {
      if (uVar10 == 0) {
        if (uVar8 != 0xffffffffffffffff) goto LAB_1805096e0;
        goto LAB_1805096e3;
      }
      *puVar9 = (char)(uVar5 & 0xffffffff);
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 1;
    }
    lVar6 = lVar6 + 1;
  } while( true );
}



/* ===== 1805097d8 FUN_1805097d8 ===== */

undefined8 FUN_1805097d8(byte *param_1,int param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  bool bVar12;
  
  pbVar5 = (byte *)0x0;
  if (param_1[0x3a] == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x80);
    *(undefined8 **)(param_1 + 0x80) = puVar2 + 1;
    pbVar5 = (byte *)*puVar2;
    if (pbVar5 == (byte *)0x0) {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      FUN_180527740();
      return 0;
    }
    if ((*param_1 & 1) != 0) {
      *(undefined8 **)(param_1 + 0x80) = puVar2 + 2;
      uVar10 = (ulonglong)*(uint *)(puVar2 + 1);
      if (uVar10 == 0) {
        if ((*param_1 & 4) != 0) {
          if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_1 + 0x10)) {
            *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
          }
LAB_180509875:
          *pbVar5 = 0;
        }
LAB_180509878:
        puVar4 = (undefined4 *)FUN_18051bfb0();
        *puVar4 = 0xc;
        return 0;
      }
      goto LAB_180509889;
    }
  }
  uVar10 = 0xffffffffffffffff;
LAB_180509889:
  lVar3 = *(longlong *)(param_1 + 0x40);
  uVar6 = uVar10;
  if ((param_2 != 0) && (uVar10 != 0xffffffffffffffff)) {
    uVar6 = uVar10 - 1;
  }
  lVar7 = 0;
  pbVar11 = pbVar5;
  while( true ) {
    if ((lVar3 != 0) && (lVar7 == lVar3)) goto LAB_180509947;
    pbVar8 = *(byte **)(param_1 + 0x18);
    if (pbVar8 == *(byte **)(param_1 + 0x10)) break;
    bVar1 = *pbVar8;
    uVar9 = (uint)bVar1;
    pbVar8 = pbVar8 + 1;
    *(byte **)(param_1 + 0x18) = pbVar8;
    if (param_2 != 0) {
      if (param_2 == 1) {
        if (bVar1 - 9 < 5) goto LAB_18050992d;
        bVar12 = uVar9 == 0x20;
      }
      else {
        if (param_2 != 8) goto LAB_18050992d;
        bVar12 = (param_1[(ulonglong)(bVar1 >> 3) + 0x54] & (byte)(1 << (bVar1 & 7))) == 0;
      }
      if (bVar12) goto LAB_18050992d;
    }
    if (param_1[0x3a] == 0) {
      if (uVar6 == 0) {
        if (uVar10 != 0xffffffffffffffff) goto LAB_180509875;
        goto LAB_180509878;
      }
      *pbVar11 = bVar1;
      pbVar11 = pbVar11 + 1;
      uVar6 = uVar6 - 1;
    }
    lVar7 = lVar7 + 1;
  }
  uVar9 = 0xffffffff;
LAB_18050992d:
  if ((pbVar8 != *(byte **)(param_1 + 8)) &&
     ((pbVar8 != *(byte **)(param_1 + 0x10) || (uVar9 != 0xffffffff)))) {
    *(byte **)(param_1 + 0x18) = pbVar8 + -1;
  }
LAB_180509947:
  if ((lVar7 == 0) || (((param_2 == 0 && (lVar7 != lVar3)) && ((*param_1 & 4) == 0)))) {
    return 0;
  }
  if ((param_1[0x3a] == 0) && (param_2 != 0)) {
    *pbVar11 = 0;
  }
  return 1;
}



/* ===== 18050997c FUN_18050997c ===== */

ulonglong FUN_18050997c(byte *param_1,int param_2)

{
  undefined8 *puVar1;
  char cVar2;
  short sVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  ulonglong local_res20;
  undefined1 *local_48 [2];
  
  puVar7 = (undefined1 *)0x0;
  if (param_1[0x34] == 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    *(undefined8 **)(param_1 + 0x60) = puVar1 + 1;
    puVar7 = (undefined1 *)*puVar1;
    if (puVar7 == (undefined1 *)0x0) {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      puVar4 = (undefined4 *)FUN_180527740();
      goto LAB_1805099c3;
    }
    if ((*param_1 & 1) != 0) {
      *(undefined8 **)(param_1 + 0x60) = puVar1 + 2;
      uVar6 = (ulonglong)*(uint *)(puVar1 + 1);
      if (uVar6 == 0) {
        if ((*param_1 & 4) != 0) {
          sVar3 = thunk_FUN_18052a138(*(undefined8 *)(param_1 + 8));
          if (sVar3 != -1) {
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
          }
LAB_180509a0d:
          *puVar7 = 0;
        }
LAB_180509a11:
        puVar4 = (undefined4 *)FUN_18051bfb0();
        *puVar4 = 0xc;
        goto LAB_1805099c3;
      }
      goto LAB_180509a22;
    }
  }
  uVar6 = 0xffffffffffffffff;
LAB_180509a22:
  puVar4 = *(undefined4 **)(param_1 + 0x38);
  local_res20 = uVar6;
  if ((param_2 != 0) && (uVar6 != 0xffffffffffffffff)) {
    local_res20 = uVar6 - 1;
  }
  puVar8 = (undefined4 *)0x0;
  uVar5 = local_res20;
  local_48[0] = puVar7;
  do {
    if (((puVar4 != (undefined4 *)0x0) && (puVar8 == puVar4)) ||
       (sVar3 = thunk_FUN_18052a138(*(undefined8 *)(param_1 + 8)), sVar3 == -1)) goto LAB_180509b2d;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    if (param_2 != 0) {
      if (param_2 == 1) {
        if (((ushort)(sVar3 - 9U) < 5) || (sVar3 == 0x20)) break;
      }
      else if ((param_2 != 8) || (cVar2 = FUN_18050f508(param_1 + 0x50,sVar3), cVar2 == '\0'))
      break;
    }
    if (param_1[0x34] == 0) {
      if (uVar5 == 0) {
        if (uVar6 == 0xffffffffffffffff) goto LAB_180509a11;
        goto LAB_180509a0d;
      }
      cVar2 = FUN_18050f6a8(param_1,puVar7,uVar6,local_48,&local_res20,sVar3);
      if (cVar2 == '\0') goto LAB_180509b2d;
      uVar5 = local_res20;
    }
    puVar8 = (undefined4 *)((longlong)puVar8 + 1);
  } while( true );
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  FUN_18052a454(sVar3,*(undefined8 *)(param_1 + 8));
LAB_180509b2d:
  if ((puVar8 != (undefined4 *)0x0) &&
     (((param_2 != 0 || (puVar8 == puVar4)) || ((*param_1 & 4) != 0)))) {
    if ((param_1[0x34] == 0) && (param_2 != 0)) {
      *local_48[0] = 0;
    }
    return CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
  }
LAB_1805099c3:
  return (ulonglong)puVar4 & 0xffffffffffffff00;
}



/* ===== 180509b74 FUN_180509b74 ===== */

undefined8 FUN_180509b74(byte *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  short *psVar3;
  longlong lVar4;
  char cVar5;
  undefined4 *puVar6;
  short sVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  ulonglong local_res8;
  undefined1 *local_res20;
  
  puVar8 = (undefined1 *)0x0;
  if (param_1[0x3c] == 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x68);
    *(undefined8 **)(param_1 + 0x68) = puVar1 + 1;
    puVar8 = (undefined1 *)*puVar1;
    if (puVar8 == (undefined1 *)0x0) {
      puVar6 = (undefined4 *)FUN_18051bfb0();
      *puVar6 = 0x16;
      FUN_180527740();
      return 0;
    }
    if ((*param_1 & 1) != 0) {
      *(undefined8 **)(param_1 + 0x68) = puVar1 + 2;
      uVar9 = (ulonglong)*(uint *)(puVar1 + 1);
      if (uVar9 == 0) {
        if ((*param_1 & 4) != 0) {
          if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_1 + 0x10)) {
            *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 2;
          }
LAB_180509bfc:
          *puVar8 = 0;
        }
LAB_180509bff:
        puVar6 = (undefined4 *)FUN_18051bfb0();
        *puVar6 = 0xc;
        return 0;
      }
      goto LAB_180509c10;
    }
  }
  uVar9 = 0xffffffffffffffff;
LAB_180509c10:
  lVar2 = *(longlong *)(param_1 + 0x40);
  local_res8 = uVar9;
  if ((param_2 != 0) && (uVar9 != 0xffffffffffffffff)) {
    local_res8 = uVar9 - 1;
  }
  lVar11 = 0;
  uVar10 = local_res8;
  local_res20 = puVar8;
  while( true ) {
    if ((lVar2 != 0) && (lVar11 == lVar2)) goto LAB_180509d17;
    psVar3 = *(short **)(param_1 + 0x18);
    if (psVar3 == *(short **)(param_1 + 0x10)) break;
    sVar7 = *psVar3;
    *(short **)(param_1 + 0x18) = psVar3 + 1;
    if (sVar7 == -1) goto LAB_180509cfa;
    if (param_2 != 0) {
      if (param_2 == 1) {
        if ((ushort)(sVar7 - 9U) < 5) goto LAB_180509cfa;
        bVar12 = sVar7 == 0x20;
      }
      else {
        if (param_2 != 8) goto LAB_180509cfa;
        cVar5 = FUN_18050f508(param_1 + 0x58,sVar7);
        bVar12 = cVar5 == '\0';
      }
      if (bVar12) goto LAB_180509cfa;
    }
    if (param_1[0x3c] == 0) {
      if (uVar10 == 0) {
        if (uVar9 != 0xffffffffffffffff) goto LAB_180509bfc;
        goto LAB_180509bff;
      }
      cVar5 = FUN_18050f6a8(param_1,puVar8,uVar9,&local_res20,&local_res8,sVar7);
      if (cVar5 == '\0') goto LAB_180509d17;
      uVar10 = local_res8;
    }
    lVar11 = lVar11 + 1;
  }
  sVar7 = -1;
LAB_180509cfa:
  lVar4 = *(longlong *)(param_1 + 0x18);
  if ((lVar4 != *(longlong *)(param_1 + 8)) &&
     ((lVar4 != *(longlong *)(param_1 + 0x10) || (sVar7 != -1)))) {
    *(longlong *)(param_1 + 0x18) = lVar4 + -2;
  }
LAB_180509d17:
  if ((lVar11 == 0) || (((param_2 == 0 && (lVar11 != lVar2)) && ((*param_1 & 4) == 0)))) {
    return 0;
  }
  if ((param_1[0x3c] == 0) && (param_2 != 0)) {
    *local_res20 = 0;
  }
  return 1;
}



/* ===== 180509d50 FUN_180509d50 ===== */

undefined8
FUN_180509d50(input_processor<char,__crt_stdio_input::stream_input_adapter<char>_> *param_1,
             int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  wchar_t *pwVar7;
  __uint64 _Var8;
  longlong lVar9;
  bool bVar10;
  __uint64 local_res8;
  wchar_t *local_res20;
  
  pwVar7 = (wchar_t *)0x0;
  if (param_1[0x32] == (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x78);
    *(undefined8 **)(param_1 + 0x78) = puVar1 + 1;
    pwVar7 = (wchar_t *)*puVar1;
    if (pwVar7 == (wchar_t *)0x0) {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      FUN_180527740();
      return 0;
    }
    if (((byte)*param_1 & 1) != 0) {
      *(undefined8 **)(param_1 + 0x78) = puVar1 + 2;
      _Var8 = (__uint64)*(uint *)(puVar1 + 1);
      if (_Var8 == 0) {
        if (((byte)*param_1 & 4) != 0) {
          iVar3 = _fgetc_nolock(*(undefined8 *)(param_1 + 8));
          if (iVar3 != -1) {
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
          }
LAB_180509ddc:
          *pwVar7 = L'\0';
        }
LAB_180509de0:
        puVar4 = (undefined4 *)FUN_18051bfb0();
        *puVar4 = 0xc;
        return 0;
      }
      goto LAB_180509df1;
    }
  }
  _Var8 = 0xffffffffffffffff;
LAB_180509df1:
  lVar2 = *(longlong *)(param_1 + 0x38);
  local_res8 = _Var8;
  if ((param_2 != 0) && (_Var8 != 0xffffffffffffffff)) {
    local_res8 = _Var8 - 1;
  }
  lVar9 = 0;
  _Var6 = local_res8;
  local_res20 = pwVar7;
  do {
    if ((lVar2 != 0) && (lVar9 == lVar2)) goto LAB_180509ed3;
    uVar5 = _fgetc_nolock(*(undefined8 *)(param_1 + 8));
    iVar3 = (int)uVar5;
    if (iVar3 == -1) goto LAB_180509ed3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    if (param_2 != 0) {
      if (param_2 == 1) {
        if (iVar3 - 9U < 5) {
LAB_180509ec3:
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          FUN_180511948(uVar5 & 0xffffffff,*(undefined8 *)(param_1 + 8));
LAB_180509ed3:
          if ((lVar9 == 0) || (((param_2 == 0 && (lVar9 != lVar2)) && (((byte)*param_1 & 4) == 0))))
          {
            return 0;
          }
          if ((param_1[0x32] ==
               (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>)0x0) &&
             (param_2 != 0)) {
            *local_res20 = L'\0';
          }
          return 1;
        }
        bVar10 = iVar3 == 0x20;
      }
      else {
        if (param_2 != 8) goto LAB_180509ec3;
        bVar10 = ((byte)param_1[((uVar5 & 0xff) >> 3) + 0x4c] & (byte)(1 << ((byte)uVar5 & 7))) == 0
        ;
      }
      if (bVar10) goto LAB_180509ec3;
    }
    if (param_1[0x32] == (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>)0x0)
    {
      if (_Var6 == 0) {
        if (_Var8 != 0xffffffffffffffff) goto LAB_180509ddc;
        goto LAB_180509de0;
      }
      bVar10 = __crt_stdio_input::
               input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::write_character
                         (param_1,pwVar7,_Var8,&local_res20,&local_res8,(char)(uVar5 & 0xffffffff));
      if (!bVar10) goto LAB_180509ed3;
      _Var6 = local_res8;
    }
    lVar9 = lVar9 + 1;
  } while( true );
}



/* ===== 180509f1c FUN_180509f1c ===== */

undefined8
FUN_180509f1c(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *param_1,
             int param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  __uint64 _Var7;
  byte *pbVar8;
  uint uVar9;
  __uint64 _Var10;
  bool bVar11;
  __uint64 local_res8;
  wchar_t *local_res20;
  
  pwVar6 = (wchar_t *)0x0;
  if (param_1[0x3a] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x80);
    *(undefined8 **)(param_1 + 0x80) = puVar2 + 1;
    pwVar6 = (wchar_t *)*puVar2;
    if (pwVar6 == (wchar_t *)0x0) {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      FUN_180527740();
      return 0;
    }
    if (((byte)*param_1 & 1) != 0) {
      *(undefined8 **)(param_1 + 0x80) = puVar2 + 2;
      _Var7 = (__uint64)*(uint *)(puVar2 + 1);
      if (_Var7 == 0) {
        if (((byte)*param_1 & 4) != 0) {
          if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_1 + 0x10)) {
            *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
          }
LAB_180509fb8:
          *pwVar6 = L'\0';
        }
LAB_180509fbc:
        puVar4 = (undefined4 *)FUN_18051bfb0();
        *puVar4 = 0xc;
        return 0;
      }
      goto LAB_180509fcd;
    }
  }
  _Var7 = 0xffffffffffffffff;
LAB_180509fcd:
  lVar3 = *(longlong *)(param_1 + 0x40);
  local_res8 = _Var7;
  if ((param_2 != 0) && (_Var7 != 0xffffffffffffffff)) {
    local_res8 = _Var7 - 1;
  }
  lVar5 = 0;
  _Var10 = local_res8;
  local_res20 = pwVar6;
  while( true ) {
    if ((lVar3 != 0) && (lVar5 == lVar3)) goto LAB_18050a0c2;
    pbVar8 = *(byte **)(param_1 + 0x18);
    if (pbVar8 == *(byte **)(param_1 + 0x10)) break;
    bVar1 = *pbVar8;
    uVar9 = (uint)bVar1;
    pbVar8 = pbVar8 + 1;
    *(byte **)(param_1 + 0x18) = pbVar8;
    if (param_2 != 0) {
      if (param_2 == 1) {
        if (bVar1 - 9 < 5) goto LAB_18050a0a8;
        bVar11 = uVar9 == 0x20;
      }
      else {
        if (param_2 != 8) goto LAB_18050a0a8;
        bVar11 = ((byte)param_1[(ulonglong)(bVar1 >> 3) + 0x54] & (byte)(1 << (bVar1 & 7))) == 0;
      }
      if (bVar11) goto LAB_18050a0a8;
    }
    if (param_1[0x3a] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0)
    {
      if (_Var10 == 0) {
        if (_Var7 != 0xffffffffffffffff) goto LAB_180509fb8;
        goto LAB_180509fbc;
      }
      bVar11 = __crt_stdio_input::
               input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::write_character
                         (param_1,pwVar6,_Var7,&local_res20,&local_res8,bVar1);
      if (!bVar11) goto LAB_18050a0c2;
      _Var10 = local_res8;
    }
    lVar5 = lVar5 + 1;
  }
  uVar9 = 0xffffffff;
LAB_18050a0a8:
  if ((pbVar8 != *(byte **)(param_1 + 8)) &&
     ((pbVar8 != *(byte **)(param_1 + 0x10) || (uVar9 != 0xffffffff)))) {
    *(byte **)(param_1 + 0x18) = pbVar8 + -1;
  }
LAB_18050a0c2:
  if ((lVar5 == 0) || (((param_2 == 0 && (lVar5 != lVar3)) && (((byte)*param_1 & 4) == 0)))) {
    return 0;
  }
  if ((param_1[0x3a] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0)
     && (param_2 != 0)) {
    *local_res20 = L'\0';
  }
  return 1;
}



/* ===== 18050a0fc FUN_18050a0fc ===== */

ulonglong FUN_18050a0fc(byte *param_1,int param_2)

{
  undefined8 *puVar1;
  char cVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  short *psVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  short *psVar9;
  bool bVar10;
  
  puVar4 = (undefined4 *)0x0;
  psVar6 = (short *)0x0;
  if (param_1[0x34] == 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    *(undefined8 **)(param_1 + 0x60) = puVar1 + 1;
    psVar6 = (short *)*puVar1;
    if (psVar6 == (short *)0x0) {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x16;
      puVar5 = (undefined4 *)FUN_180527740();
      goto LAB_18050a14f;
    }
    if ((*param_1 & 1) != 0) {
      *(undefined8 **)(param_1 + 0x60) = puVar1 + 2;
      uVar7 = (ulonglong)*(uint *)(puVar1 + 1);
      if (uVar7 == 0) {
        if ((*param_1 & 4) != 0) {
          sVar3 = thunk_FUN_18052a138(*(undefined8 *)(param_1 + 8));
          if (sVar3 != -1) {
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
          }
          *psVar6 = 0;
        }
LAB_18050a1a3:
        puVar5 = (undefined4 *)FUN_18051bfb0();
        *puVar5 = 0xc;
        goto LAB_18050a14f;
      }
      goto LAB_18050a1b4;
    }
  }
  uVar7 = 0xffffffffffffffff;
LAB_18050a1b4:
  puVar5 = *(undefined4 **)(param_1 + 0x38);
  uVar8 = uVar7;
  if ((param_2 != 0) && (uVar7 != 0xffffffffffffffff)) {
    uVar8 = uVar7 - 1;
  }
  psVar9 = psVar6;
  do {
    if (((puVar5 != (undefined4 *)0x0) && (puVar4 == puVar5)) ||
       (sVar3 = thunk_FUN_18052a138(*(undefined8 *)(param_1 + 8)), sVar3 == -1)) goto LAB_18050a272;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    if (param_2 != 0) {
      if (param_2 == 1) {
        if ((ushort)(sVar3 - 9U) < 5) break;
        bVar10 = sVar3 == 0x20;
      }
      else {
        if (param_2 != 8) break;
        cVar2 = FUN_18050f508(param_1 + 0x50);
        bVar10 = cVar2 == '\0';
      }
      if (bVar10) break;
    }
    if (param_1[0x34] == 0) {
      if (uVar8 == 0) {
        if (uVar7 != 0xffffffffffffffff) {
          *psVar6 = 0;
        }
        goto LAB_18050a1a3;
      }
      *psVar9 = sVar3;
      psVar9 = psVar9 + 1;
      uVar8 = uVar8 - 1;
    }
    puVar4 = (undefined4 *)((longlong)puVar4 + 1);
  } while( true );
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  FUN_18052a454(sVar3);
LAB_18050a272:
  if ((puVar4 != (undefined4 *)0x0) &&
     (((param_2 != 0 || (puVar4 == puVar5)) || ((*param_1 & 4) != 0)))) {
    if ((param_1[0x34] == 0) && (param_2 != 0)) {
      *psVar9 = 0;
    }
    return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
  }
LAB_18050a14f:
  return (ulonglong)puVar5 & 0xffffffffffffff00;
}



/* ===== 18050a2b8 FUN_18050a2b8 ===== */

ulonglong FUN_18050a2b8(byte *param_1,int param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  longlong lVar3;
  char cVar4;
  undefined4 *puVar5;
  short sVar6;
  short *psVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  short *psVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  psVar7 = (short *)0x0;
  if (param_1[0x3c] == 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x68);
    *(undefined8 **)(param_1 + 0x68) = puVar1 + 1;
    psVar7 = (short *)*puVar1;
    if (psVar7 == (short *)0x0) {
      puVar5 = (undefined4 *)FUN_18051bfb0();
      *puVar5 = 0x16;
      puVar5 = (undefined4 *)FUN_180527740();
      goto LAB_18050a30a;
    }
    if ((*param_1 & 1) == 0) goto LAB_18050a365;
    *(undefined8 **)(param_1 + 0x68) = puVar1 + 2;
    uVar8 = (ulonglong)*(uint *)(puVar1 + 1);
    if (uVar8 == 0) {
      if ((*param_1 & 4) != 0) {
        if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_1 + 0x10)) {
          *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 2;
        }
LAB_18050a354:
        *psVar7 = 0;
      }
LAB_18050a358:
      puVar5 = (undefined4 *)FUN_18051bfb0();
      *puVar5 = 0xc;
      goto LAB_18050a30a;
    }
  }
  else {
LAB_18050a365:
    uVar8 = 0xffffffffffffffff;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x40);
  uVar9 = uVar8;
  if ((param_2 != 0) && (uVar8 != 0xffffffffffffffff)) {
    uVar9 = uVar8 - 1;
  }
  puVar11 = (undefined4 *)0x0;
  psVar10 = psVar7;
  while( true ) {
    if ((puVar5 != (undefined4 *)0x0) && (puVar11 == puVar5)) goto LAB_18050a449;
    psVar2 = *(short **)(param_1 + 0x18);
    if (psVar2 == *(short **)(param_1 + 0x10)) break;
    sVar6 = *psVar2;
    *(short **)(param_1 + 0x18) = psVar2 + 1;
    if (sVar6 == -1) goto LAB_18050a427;
    if (param_2 != 0) {
      if (param_2 == 1) {
        if ((ushort)(sVar6 - 9U) < 5) goto LAB_18050a427;
        bVar12 = sVar6 == 0x20;
      }
      else {
        if (param_2 != 8) goto LAB_18050a427;
        cVar4 = FUN_18050f508(param_1 + 0x58,sVar6);
        bVar12 = cVar4 == '\0';
      }
      if (bVar12) goto LAB_18050a427;
    }
    if (param_1[0x3c] == 0) {
      if (uVar9 == 0) {
        if (uVar8 == 0xffffffffffffffff) goto LAB_18050a358;
        goto LAB_18050a354;
      }
      *psVar10 = sVar6;
      psVar10 = psVar10 + 1;
      uVar9 = uVar9 - 1;
    }
    puVar11 = (undefined4 *)((longlong)puVar11 + 1);
  }
  sVar6 = -1;
LAB_18050a427:
  lVar3 = *(longlong *)(param_1 + 0x18);
  if ((lVar3 != *(longlong *)(param_1 + 8)) &&
     ((lVar3 != *(longlong *)(param_1 + 0x10) || (sVar6 != -1)))) {
    *(longlong *)(param_1 + 0x18) = lVar3 + -2;
  }
LAB_18050a449:
  if ((puVar11 != (undefined4 *)0x0) &&
     (((param_2 != 0 || (puVar11 == puVar5)) || ((*param_1 & 4) != 0)))) {
    if ((param_1[0x3c] == 0) && (param_2 != 0)) {
      *psVar10 = 0;
    }
    return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
  }
LAB_18050a30a:
  return (ulonglong)puVar5 & 0xffffffffffffff00;
}



/* ===== 18050a47c __crt_stdio_input::skip_whitespace<__crt_stdio_input::stream_input_adapter,char> ===== */

/* Library Function - Single Match
    int __cdecl __crt_stdio_input::skip_whitespace<class
   __crt_stdio_input::stream_input_adapter,char>(class __crt_stdio_input::stream_input_adapter<char>
   & __ptr64,struct __crt_locale_pointers * __ptr64 const)
   
   Library: Visual Studio 2019 Release */

int __cdecl
__crt_stdio_input::skip_whitespace<__crt_stdio_input::stream_input_adapter,char>
          (stream_input_adapter<char> *param_1,__crt_locale_pointers *param_2)

{
  uint uVar1;
  int iVar2;
  
  do {
    uVar1 = _fgetc_nolock(*(undefined8 *)param_1);
    if (uVar1 == 0xffffffff) {
      return -1;
    }
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    iVar2 = FUN_18050fc80(uVar1 & 0xff,8,param_2);
  } while (iVar2 != 0);
  return uVar1;
}



/* ===== 18050a4cc __crt_stdio_input::skip_whitespace<__crt_stdio_input::stream_input_adapter,wchar_t> ===== */

/* Library Function - Single Match
    unsigned short __cdecl __crt_stdio_input::skip_whitespace<class
   __crt_stdio_input::stream_input_adapter,wchar_t>(class
   __crt_stdio_input::stream_input_adapter<wchar_t> & __ptr64,struct __crt_locale_pointers * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

ushort __cdecl
__crt_stdio_input::skip_whitespace<__crt_stdio_input::stream_input_adapter,wchar_t>
          (stream_input_adapter<wchar_t> *param_1,__crt_locale_pointers *param_2)

{
  wint_t _C;
  int iVar1;
  
  do {
    _C = thunk_FUN_18052a138(*(undefined8 *)param_1);
    if (_C == 0xffff) {
      return 0xffff;
    }
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    iVar1 = iswctype(_C,8);
  } while (iVar1 != 0);
  return _C;
}



/* ===== 18050a514 FUN_18050a514 ===== */

ulonglong FUN_18050a514(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  do {
    pbVar2 = *(byte **)(param_1 + 0x10);
    if (pbVar2 == *(byte **)(param_1 + 8)) {
      return 0xffffffff;
    }
    bVar1 = *pbVar2;
    *(byte **)(param_1 + 0x10) = pbVar2 + 1;
    iVar3 = FUN_18050fc80((ulonglong)bVar1,8,param_2);
  } while (iVar3 != 0);
  return (ulonglong)bVar1;
}



/* ===== 18050a568 FUN_18050a568 ===== */

wint_t FUN_18050a568(longlong param_1)

{
  wint_t _C;
  wint_t *pwVar1;
  int iVar2;
  
  while( true ) {
    pwVar1 = *(wint_t **)(param_1 + 0x10);
    if (pwVar1 == *(wint_t **)(param_1 + 8)) {
      return 0xffff;
    }
    _C = *pwVar1;
    *(wint_t **)(param_1 + 0x10) = pwVar1 + 1;
    if (_C == 0xffff) break;
    iVar2 = iswctype(_C,8);
    if (iVar2 == 0) {
      return _C;
    }
  }
  return 0xffff;
}



/* ===== 18050a5c4 _LocaleUpdate::_LocaleUpdate ===== */

/* Library Function - Single Match
    public: __cdecl _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * __ptr64 const)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1)

{
  _LocaleUpdate *p_Var1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this[0x18] = (_LocaleUpdate)0x0;
  p_Var1 = this + 8;
  if (param_1 == (__crt_locale_pointers *)0x0) {
    if (DAT_180c9f7dc != 0) {
      lVar3 = FUN_180529860();
      *(longlong *)this = lVar3;
      *(undefined8 *)p_Var1 = *(undefined8 *)(lVar3 + 0x90);
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar3 + 0x88);
      __acrt_update_locale_info(lVar3,p_Var1);
      FUN_1805278dc(*(undefined8 *)this,this + 0x10);
      uVar2 = *(uint *)(*(longlong *)this + 0x3a8);
      if ((uVar2 & 2) == 0) {
        *(uint *)(*(longlong *)this + 0x3a8) = uVar2 | 2;
        this[0x18] = (_LocaleUpdate)0x1;
        return this;
      }
      return this;
    }
    uVar4 = PTR_PTR_1809198b8._0_4_;
    uVar5 = PTR_PTR_1809198b8._4_4_;
    uVar6 = PTR_DAT_1809198c0._0_4_;
    uVar7 = PTR_DAT_1809198c0._4_4_;
  }
  else {
    uVar4 = *(undefined4 *)param_1;
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar6 = *(undefined4 *)(param_1 + 8);
    uVar7 = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)p_Var1 = uVar4;
  *(undefined4 *)(this + 0xc) = uVar5;
  *(undefined4 *)(this + 0x10) = uVar6;
  *(undefined4 *)(this + 0x14) = uVar7;
  return this;
}



/* ===== 18050a660 FUN_18050a660 ===== */

undefined8 FUN_18050a660(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  
  plVar2 = (longlong *)*param_1;
  cVar1 = *(char *)param_1[1];
  lVar3 = plVar2[2];
  plVar2[2] = lVar3 - 1U;
  if ((((plVar2[1] == 0) || (lVar3 - 1U <= (ulonglong)plVar2[1])) && (1 < (byte)(cVar1 + 1U))) &&
     (puVar4 = (undefined8 *)*plVar2, cVar1 != -1)) {
    plVar2 = puVar4 + 1;
    *plVar2 = *plVar2 + -1;
    FUN_180511948((int)cVar1,*puVar4);
  }
  *(undefined1 *)param_1[1] = 0;
  puVar5 = *(undefined1 **)(*param_1 + 0x10);
  bVar6 = *(undefined1 **)param_1[2] == puVar5;
  if (!bVar6) {
    puVar5 = *(undefined1 **)(*param_1 + 0x18);
    *puVar5 = 0;
  }
  return CONCAT71((int7)((ulonglong)puVar5 >> 8),bVar6);
}



/* ===== 18050a6d8 FUN_18050a6d8 ===== */

undefined8 FUN_18050a6d8(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  bool bVar5;
  
  plVar2 = (longlong *)*param_1;
  cVar1 = *(char *)param_1[1];
  lVar3 = plVar2[2];
  plVar2[2] = lVar3 - 1U;
  if (((plVar2[1] == 0) || (lVar3 - 1U <= (ulonglong)plVar2[1])) && (1 < (byte)(cVar1 + 1U))) {
    plVar2 = (longlong *)*plVar2;
    if (plVar2[2] != *plVar2) {
      plVar2[2] = plVar2[2] + -1;
    }
  }
  *(undefined1 *)param_1[1] = 0;
  puVar4 = *(undefined1 **)(*param_1 + 0x10);
  bVar5 = *(undefined1 **)param_1[2] == puVar4;
  if (!bVar5) {
    puVar4 = *(undefined1 **)(*param_1 + 0x18);
    *puVar4 = 0;
  }
  return CONCAT71((int7)((ulonglong)puVar4 >> 8),bVar5);
}



/* ===== 18050a73c FUN_18050a73c ===== */

undefined8 FUN_18050a73c(longlong *param_1)

{
  short sVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  bool bVar5;
  
  plVar2 = (longlong *)*param_1;
  sVar1 = *(short *)param_1[1];
  lVar3 = plVar2[2];
  plVar2[2] = lVar3 - 1U;
  if (((plVar2[1] == 0) || (lVar3 - 1U <= (ulonglong)plVar2[1])) && ((ushort)(sVar1 - 1U) < 0xfffe))
  {
    plVar2 = (longlong *)*plVar2;
    if (plVar2[2] != *plVar2) {
      plVar2[2] = plVar2[2] + -2;
    }
  }
  *(undefined2 *)param_1[1] = 0;
  puVar4 = *(undefined1 **)(*param_1 + 0x10);
  bVar5 = *(undefined1 **)param_1[2] == puVar4;
  if (!bVar5) {
    puVar4 = *(undefined1 **)(*param_1 + 0x18);
    *puVar4 = 0;
  }
  return CONCAT71((int7)((ulonglong)puVar4 >> 8),bVar5);
}



/* ===== 18050a7a8 FUN_18050a7a8 ===== */

undefined8 FUN_18050a7a8(longlong *param_1)

{
  short sVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  
  plVar2 = (longlong *)*param_1;
  sVar1 = *(short *)param_1[1];
  lVar3 = plVar2[2];
  plVar2[2] = lVar3 - 1U;
  if (((plVar2[1] == 0) || (lVar3 - 1U <= (ulonglong)plVar2[1])) && ((ushort)(sVar1 - 1U) < 0xfffe))
  {
    puVar4 = (undefined8 *)*plVar2;
    plVar2 = puVar4 + 1;
    *plVar2 = *plVar2 + -1;
    FUN_18052a454(sVar1,*puVar4);
  }
  *(undefined2 *)param_1[1] = 0;
  puVar5 = *(undefined1 **)(*param_1 + 0x10);
  bVar6 = *(undefined1 **)param_1[2] == puVar5;
  if (!bVar6) {
    puVar5 = *(undefined1 **)(*param_1 + 0x18);
    *puVar5 = 0;
  }
  return CONCAT71((int7)((ulonglong)puVar5 >> 8),bVar6);
}



/* ===== 18050a824 FUN_18050a824 ===== */

undefined4 FUN_18050a824(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined1 local_20 [16];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,*(__crt_locale_pointers **)*param_1);
  local_38 = *(undefined8 *)param_1[4];
  local_78 = *(undefined8 *)param_1[3];
  local_98 = *(undefined8 *)param_1[2];
  local_40 = local_20;
  local_a8 = (undefined4)*(undefined8 *)param_1[1];
  uStack_a4 = (undefined4)((ulonglong)*(undefined8 *)param_1[1] >> 0x20);
  local_90 = local_a8;
  uStack_8c = uStack_a4;
  uStack_88 = 0;
  uStack_84 = 0;
  local_70 = 0;
  local_48 = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_30 = 0;
  local_80 = local_98;
  uVar1 = FUN_18050d76c(&local_98);
  FUN_1805277b0(local_48);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return uVar1;
}



/* ===== 18050a8f8 FUN_18050a8f8 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18050a8f8(undefined8 *param_1)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined1 local_c0 [16];
  char local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined1 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_f8;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_c8,*(__crt_locale_pointers **)*param_1);
  local_30 = *(undefined8 *)param_1[4];
  local_88 = *(undefined8 *)param_1[3];
  local_a8 = *(undefined8 *)param_1[2];
  uStack_d0 = 0;
  local_d8 = *(undefined8 *)param_1[1];
  local_38 = local_c0;
  uStack_98 = 0;
  local_80 = 0;
  local_5c = 0;
  uStack_54 = 0;
  local_78 = 0;
  local_4c = 0;
  uStack_44 = 0;
  local_76 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_28 = 0;
  local_a0 = local_d8;
  local_90 = local_a8;
  FUN_18050d5b0(&local_a8);
  if (local_b0 != '\0') {
    *(uint *)(local_c8 + 0x3a8) = *(uint *)(local_c8 + 0x3a8) & 0xfffffffd;
  }
  return;
}



