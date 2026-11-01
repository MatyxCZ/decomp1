/* ===== 1804f4304 FUN_1804f4304 ===== */

undefined8 FUN_1804f4304(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar5 = *(undefined1 **)(param_1 + 0x18);
    *(undefined1 **)(param_1 + 0x18) = puVar5 + 8;
    *param_2 = *puVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = **(undefined1 **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x39);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined1 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f8548(param_1,piVar1,1,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f4408 FUN_1804f4408 ===== */

undefined8 FUN_1804f4408(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar5 = *(ushort **)(param_1 + 0x18);
    *(ushort **)(param_1 + 0x18) = puVar5 + 4;
    *param_2 = (ulonglong)*puVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = (ulonglong)**(ushort **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x39);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined1 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f8548(param_1,piVar1,1,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f4510 FUN_1804f4510 ===== */

undefined8 FUN_1804f4510(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar5 = *(ushort **)(param_1 + 0x18);
    *(ushort **)(param_1 + 0x18) = puVar5 + 4;
    *param_2 = (ulonglong)*puVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = (ulonglong)**(ushort **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined2 *)(param_1 + 0x3a);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined2 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f877c(param_1,piVar1,1,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f461c FUN_1804f461c ===== */

undefined8 FUN_1804f461c(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  char cVar6;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    piVar4 = *(int **)(param_1 + 0x18);
    *(int **)(param_1 + 0x18) = piVar4 + 2;
    *param_2 = (longlong)*piVar4;
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar2) {
    lVar5 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined4 *)(lVar5 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = (longlong)**(int **)(param_1 + 0x488 + (longlong)(int)uVar2 * 0x18);
    return 1;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar1 = *(undefined1 *)(param_1 + 0x39);
  piVar4 = (int *)(param_1 + ((longlong)(int)uVar2 * 3 + 0x90) * 8);
  if (*piVar4 == 0) {
    *piVar4 = 1;
    *(undefined1 *)(piVar4 + 1) = uVar1;
    piVar4[4] = iVar3;
  }
  else {
    cVar6 = FUN_1804f8548(param_1,piVar4,1,uVar1,iVar3);
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



/* ===== 1804f4724 FUN_1804f4724 ===== */

undefined8 FUN_1804f4724(longlong param_1,longlong *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  char cVar6;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    piVar4 = *(int **)(param_1 + 0x18);
    *(int **)(param_1 + 0x18) = piVar4 + 2;
    *param_2 = (longlong)*piVar4;
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar2) {
    lVar5 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined4 *)(lVar5 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = (longlong)**(int **)(param_1 + 0x488 + (longlong)(int)uVar2 * 0x18);
    return 1;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uVar1 = *(undefined2 *)(param_1 + 0x3a);
  piVar4 = (int *)(param_1 + ((longlong)(int)uVar2 * 3 + 0x90) * 8);
  if (*piVar4 == 0) {
    *piVar4 = 1;
    *(undefined2 *)(piVar4 + 1) = uVar1;
    piVar4[4] = iVar3;
  }
  else {
    cVar6 = FUN_1804f877c(param_1,piVar4,1,uVar1,iVar3);
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



/* ===== 1804f4830 FUN_1804f4830 ===== */

undefined8 FUN_1804f4830(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar5 = *(uint **)(param_1 + 0x18);
    *(uint **)(param_1 + 0x18) = puVar5 + 2;
    *param_2 = (ulonglong)*puVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = (ulonglong)**(uint **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x39);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined1 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f8548(param_1,piVar1,1,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f4938 FUN_1804f4938 ===== */

undefined8 FUN_1804f4938(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar5 = *(uint **)(param_1 + 0x18);
    *(uint **)(param_1 + 0x18) = puVar5 + 2;
    *param_2 = (ulonglong)*puVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = (ulonglong)**(uint **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined2 *)(param_1 + 0x3a);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined2 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f877c(param_1,piVar1,1,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f4a40 FUN_1804f4a40 ===== */

undefined8 FUN_1804f4a40(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    *(undefined8 **)(param_1 + 0x18) = puVar5 + 1;
    *param_2 = *puVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = **(undefined8 **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x39);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 3;
    *(undefined1 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f8548(param_1,piVar1,3,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f4b48 FUN_1804f4b48 ===== */

undefined8 FUN_1804f4b48(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    *(undefined8 **)(param_1 + 0x18) = puVar5 + 1;
    *param_2 = *puVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = **(undefined8 **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined2 *)(param_1 + 0x3a);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 3;
    *(undefined2 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f877c(param_1,piVar1,3,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f4c54 FUN_1804f4c54 ===== */

undefined8 FUN_1804f4c54(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    *(undefined8 **)(param_1 + 0x18) = puVar5 + 1;
    uVar8 = *puVar5;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xde4);
    if (99 < uVar3) {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
    if (*(int *)(param_1 + 0x470) == 1) {
      iVar4 = *(int *)(param_1 + 0x34);
      uVar2 = *(undefined1 *)(param_1 + 0x39);
      piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
      if (*piVar1 == 0) {
        *piVar1 = 4;
        *(undefined1 *)(piVar1 + 1) = uVar2;
        piVar1[4] = iVar4;
      }
      else {
        cVar7 = FUN_1804f8548(param_1,piVar1,4,uVar2,iVar4);
        if (cVar7 == '\0') {
          lVar6 = *(longlong *)(param_1 + 8);
          *(undefined1 *)(lVar6 + 0x30) = 1;
          *(undefined4 *)(lVar6 + 0x2c) = 0x16;
          FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
          return 0;
        }
      }
      return 1;
    }
    uVar8 = **(undefined8 **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
  }
  *param_2 = uVar8;
  return 1;
}



/* ===== 1804f4d5c FUN_1804f4d5c ===== */

undefined8 FUN_1804f4d5c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    *(undefined8 **)(param_1 + 0x18) = puVar5 + 1;
    uVar8 = *puVar5;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xde4);
    if (99 < uVar3) {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
    if (*(int *)(param_1 + 0x470) == 1) {
      iVar4 = *(int *)(param_1 + 0x34);
      uVar2 = *(undefined2 *)(param_1 + 0x3a);
      piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
      if (*piVar1 == 0) {
        *piVar1 = 4;
        *(undefined2 *)(piVar1 + 1) = uVar2;
        piVar1[4] = iVar4;
      }
      else {
        cVar7 = FUN_1804f877c(param_1,piVar1,4,uVar2,iVar4);
        if (cVar7 == '\0') {
          lVar6 = *(longlong *)(param_1 + 8);
          *(undefined1 *)(lVar6 + 0x30) = 1;
          *(undefined4 *)(lVar6 + 0x2c) = 0x16;
          FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
          return 0;
        }
      }
      return 1;
    }
    uVar8 = **(undefined8 **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
  }
  *param_2 = uVar8;
  return 1;
}



/* ===== 1804f4e68 FUN_1804f4e68 ===== */

undefined8 FUN_1804f4e68(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    *(undefined8 **)(param_1 + 0x18) = puVar5 + 1;
    *param_2 = *puVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = **(undefined8 **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x39);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 2;
    *(undefined1 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f8548(param_1,piVar1,2,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f4f70 FUN_1804f4f70 ===== */

undefined8 FUN_1804f4f70(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    *(undefined8 **)(param_1 + 0x18) = puVar5 + 1;
    *param_2 = *puVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = **(undefined8 **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined2 *)(param_1 + 0x3a);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 2;
    *(undefined2 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f877c(param_1,piVar1,2,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f507c FUN_1804f507c ===== */

undefined8 FUN_1804f507c(longlong param_1,undefined2 *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar5 = *(undefined2 **)(param_1 + 0x18);
    *(undefined2 **)(param_1 + 0x18) = puVar5 + 4;
    *param_2 = *puVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = **(undefined2 **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x39);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined1 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f8548(param_1,piVar1,1,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f5184 FUN_1804f5184 ===== */

undefined8 FUN_1804f5184(longlong param_1,undefined2 *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    puVar5 = *(undefined2 **)(param_1 + 0x18);
    *(undefined2 **)(param_1 + 0x18) = puVar5 + 4;
    *param_2 = *puVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = **(undefined2 **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined2 *)(param_1 + 0x3a);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined2 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f877c(param_1,piVar1,1,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f5290 __crt_stdio_output::is_wide_character_specifier<wchar_t> ===== */

/* Library Function - Single Match
    bool __cdecl __crt_stdio_output::is_wide_character_specifier<wchar_t>(unsigned
   __int64,wchar_t,enum __crt_stdio_output::length_modifier)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __cdecl
__crt_stdio_output::is_wide_character_specifier<wchar_t>
          (__uint64 param_1,wchar_t param_2,length_modifier param_3)

{
  bool bVar1;
  
  if (param_3 == 2) {
    bVar1 = false;
  }
  else {
    if (((param_3 == 3) || (param_3 == 0xc)) || (param_3 == 0xd)) {
      return true;
    }
    bVar1 = (param_1 & 4) != 0;
    if ((param_2 + L'ﾝ' & 0xffefU) != 0) {
      return (param_1 & 4) == 0;
    }
  }
  return bVar1;
}



/* ===== 1804f52d0 FUN_1804f52d0 ===== */

uint FUN_1804f52d0(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  char cVar1;
  char *pcVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  char *pcVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  
  pcVar2 = (char *)*param_2;
  uVar8 = (ulonglong)param_3;
  if (pcVar2 == (char *)0x0) {
    puVar7 = (undefined4 *)FUN_18051bfb0();
    *puVar7 = 0x16;
    FUN_180527740();
LAB_1804f5341:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_1);
    goto LAB_1804f5341;
  }
  cVar13 = *pcVar2;
  pcVar11 = pcVar2 + 1;
  *param_2 = (longlong)pcVar11;
  bVar9 = param_4 | 2;
  if ((cVar13 == '-') || (bVar9 = param_4, cVar13 == '+')) {
    param_4 = bVar9;
    cVar13 = *pcVar11;
    pcVar11 = pcVar2 + 2;
    *param_2 = (longlong)pcVar11;
  }
  if ((param_3 & 0xffffffef) == 0) {
    if ((byte)(cVar13 - 0x30U) < 10) {
      iVar5 = cVar13 + -0x30;
LAB_1804f53c7:
      if (iVar5 != 0) goto LAB_1804f5415;
      cVar1 = *pcVar11;
      *param_2 = (longlong)(pcVar11 + 1);
      if ((cVar1 + 0xa8U & 0xdf) != 0) {
        *param_2 = (longlong)pcVar11;
        uVar8 = 8;
        if (param_3 != 0) {
          uVar8 = (ulonglong)param_3;
        }
        if ((cVar1 != '\0') && (*pcVar11 != cVar1)) {
          puVar7 = (undefined4 *)FUN_18051bfb0();
          *puVar7 = 0x16;
          FUN_180527740();
        }
        goto LAB_1804f5421;
      }
      cVar13 = pcVar11[1];
      *param_2 = (longlong)(pcVar11 + 2);
      uVar8 = 0x10;
    }
    else {
      if ((byte)(cVar13 + 0x9fU) < 0x1a) {
        iVar5 = cVar13 + -0x57;
        goto LAB_1804f53c7;
      }
      if ((byte)(cVar13 + 0xbfU) < 0x1a) {
        iVar5 = cVar13 + -0x37;
        goto LAB_1804f53c7;
      }
LAB_1804f5415:
      uVar8 = 10;
    }
    if (param_3 != 0) {
      uVar8 = (ulonglong)param_3;
    }
  }
LAB_1804f5421:
  pcVar11 = (char *)*param_2;
  uVar12 = 0xffffffff % uVar8;
  uVar14 = 0;
  while( true ) {
    if ((byte)(cVar13 - 0x30U) < 10) {
      uVar10 = (int)cVar13 - 0x30;
    }
    else if ((byte)(cVar13 + 0x9fU) < 0x1a) {
      uVar10 = (int)cVar13 - 0x57;
    }
    else if ((byte)(cVar13 + 0xbfU) < 0x1a) {
      uVar10 = (int)cVar13 - 0x37;
    }
    else {
      uVar10 = 0xffffffff;
    }
    if ((uint)uVar8 <= uVar10) break;
    cVar13 = *pcVar11;
    uVar6 = uVar14 * (uint)uVar8;
    uVar10 = uVar6 + uVar10;
    uVar12 = (ulonglong)uVar10;
    param_4 = param_4 | (uVar10 < uVar6 || (uint)(0xffffffff / uVar8) < uVar14) << 2 | 8U;
    pcVar11 = pcVar11 + 1;
    *param_2 = (longlong)pcVar11;
    uVar14 = uVar10;
  }
  *param_2 = (longlong)(pcVar11 + -1);
  if ((cVar13 != '\0') && (pcVar11[-1] != cVar13)) {
    puVar7 = (undefined4 *)FUN_18051bfb0(uVar10,uVar12);
    *puVar7 = 0x16;
    FUN_180527740();
  }
  if ((param_4 & 8) == 0) {
    *param_2 = (longlong)pcVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pcVar2;
    return 0;
  }
  if ((param_4 & 4) == 0) {
    if ((param_4 & 1) == 0) {
      if ((param_4 & 2) == 0) goto LAB_1804f5555;
LAB_1804f5552:
      uVar14 = -uVar14;
      goto LAB_1804f5555;
    }
    if ((param_4 & 2) == 0) {
      if (uVar14 < 0x80000000) goto LAB_1804f5555;
    }
    else if (uVar14 < 0x80000001) goto LAB_1804f5552;
    bVar9 = 1;
    bVar4 = param_4;
  }
  else {
    bVar9 = param_4;
    bVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x22;
  if ((bVar4 & bVar9) != 0) {
    plVar3 = (longlong *)param_2[1];
    if ((param_4 & 2) == 0) {
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = *param_2;
      }
      return 0x7fffffff;
    }
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = *param_2;
    }
    return 0x80000000;
  }
  uVar14 = 0xffffffff;
LAB_1804f5555:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
  }
  return uVar14;
}



/* ===== 1804f5584 FUN_1804f5584 ===== */

uint FUN_1804f5584(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  ushort *puVar2;
  short *psVar3;
  ushort *puVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ushort uVar13;
  uint uVar14;
  int local_a8;
  int local_a0;
  int local_98;
  int local_90;
  int local_88;
  int local_80;
  int local_78;
  int local_70;
  int local_68;
  int local_60;
  
  puVar2 = (ushort *)*param_2;
  uVar9 = (ulonglong)param_3;
  if (puVar2 == (ushort *)0x0) {
    puVar8 = (undefined4 *)FUN_18051bfb0();
    *puVar8 = 0x16;
    FUN_180527740();
LAB_1804f55fd:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_1);
    goto LAB_1804f55fd;
  }
  uVar13 = *puVar2;
  *param_2 = (longlong)(puVar2 + 1);
  uVar14 = param_4 & 0xff | 2;
  if (uVar13 != 0x2d) {
    uVar14 = param_4 & 0xff;
  }
  if ((uVar13 - 0x2b & 0xfffd) == 0) {
    uVar13 = puVar2[1];
    *param_2 = (longlong)(puVar2 + 2);
  }
  local_a8 = 0xae6;
  iVar6 = 0x30;
  local_a0 = 0xb66;
  local_98 = 0xc66;
  local_90 = 0xce6;
  local_88 = 0xd66;
  local_80 = 0xe50;
  local_78 = 0xed0;
  local_70 = 0xf20;
  local_68 = 0x1040;
  local_60 = 0x17e0;
  if ((param_3 & 0xffffffef) != 0) goto LAB_1804f59c1;
  if (uVar13 < 0x30) goto LAB_1804f5912;
  if (uVar13 < 0x3a) {
LAB_1804f5757:
    iVar6 = (uint)uVar13 - iVar6;
LAB_1804f590d:
    if (iVar6 == -1) goto LAB_1804f5912;
LAB_1804f5938:
    if (iVar6 != 0) goto LAB_1804f59b2;
    psVar3 = (short *)*param_2;
    sVar1 = *psVar3;
    *param_2 = (longlong)(psVar3 + 1);
    if ((sVar1 - 0x58U & 0xffdf) != 0) {
      *param_2 = (longlong)psVar3;
      uVar9 = 8;
      if (param_3 != 0) {
        uVar9 = (ulonglong)param_3;
      }
      if ((sVar1 != 0) && (*psVar3 != sVar1)) {
        puVar8 = (undefined4 *)FUN_18051bfb0();
        *puVar8 = 0x16;
        FUN_180527740();
      }
      goto LAB_1804f59c1;
    }
    uVar13 = psVar3[1];
    *param_2 = (longlong)(psVar3 + 2);
    uVar9 = 0x10;
  }
  else {
    if (uVar13 < 0xff10) {
      if (0x65f < uVar13) {
        if (uVar13 < 0x66a) {
          iVar6 = uVar13 - 0x660;
          goto LAB_1804f590d;
        }
        if (0x6ef < uVar13) {
          if (uVar13 < 0x6fa) {
            iVar6 = uVar13 - 0x6f0;
            goto LAB_1804f590d;
          }
          if (0x965 < uVar13) {
            if (uVar13 < 0x970) {
              iVar6 = uVar13 - 0x966;
              goto LAB_1804f590d;
            }
            if (0x9e5 < uVar13) {
              if (uVar13 < 0x9f0) {
                iVar6 = uVar13 - 0x9e6;
                goto LAB_1804f590d;
              }
              if (0xa65 < uVar13) {
                if (uVar13 < 0xa70) {
                  iVar6 = uVar13 - 0xa66;
                  goto LAB_1804f590d;
                }
                iVar6 = 0xae6;
                if ((0xae5 < uVar13) &&
                   ((uVar13 < 0xaf0 ||
                    ((iVar6 = 0xb66, 0xb65 < uVar13 &&
                     ((uVar13 < 0xb70 ||
                      ((iVar6 = 0xc66, 0xc65 < uVar13 &&
                       ((uVar13 < 0xc70 ||
                        ((iVar6 = 0xce6, 0xce5 < uVar13 &&
                         ((uVar13 < 0xcf0 ||
                          ((iVar6 = 0xd66, 0xd65 < uVar13 &&
                           ((uVar13 < 0xd70 ||
                            ((iVar6 = 0xe50, 0xe4f < uVar13 &&
                             ((uVar13 < 0xe5a ||
                              ((iVar6 = 0xed0, 0xecf < uVar13 &&
                               ((uVar13 < 0xeda ||
                                ((iVar6 = 0xf20, 0xf1f < uVar13 &&
                                 ((uVar13 < 0xf2a ||
                                  ((iVar6 = 0x1040, 0x103f < uVar13 &&
                                   ((uVar13 < 0x104a ||
                                    ((iVar6 = 0x17e0, 0x17df < uVar13 &&
                                     ((uVar13 < 0x17ea ||
                                      (iVar6 = 0x1810, (ushort)(uVar13 + 0xe7f0) < 10)))))))))))))))
                               ))))))))))))))))))))))))) goto LAB_1804f5757;
              }
            }
          }
        }
      }
    }
    else if (uVar13 < 0xff1a) {
      iVar6 = uVar13 - 0xff10;
      goto LAB_1804f590d;
    }
LAB_1804f5912:
    uVar10 = (uint)uVar13;
    if ((uVar13 - 0x41 < 0x1a) || (uVar13 - 0x61 < 0x1a)) {
      if (uVar13 - 0x61 < 0x1a) {
        uVar10 = uVar13 - 0x20;
      }
      iVar6 = uVar10 - 0x37;
      goto LAB_1804f5938;
    }
LAB_1804f59b2:
    uVar9 = 10;
  }
  if (param_3 != 0) {
    uVar9 = (ulonglong)param_3;
  }
LAB_1804f59c1:
  uVar12 = 0xffffffff % uVar9;
  uVar10 = 0;
  do {
    if (uVar13 < 0x30) goto LAB_1804f5b8e;
    if (uVar13 < 0x3a) {
      uVar11 = uVar13 - 0x30;
LAB_1804f5b89:
      if (uVar11 == 0xffffffff) goto LAB_1804f5b8e;
    }
    else {
      if (uVar13 < 0xff10) {
        if (0x65f < uVar13) {
          if (uVar13 < 0x66a) {
            uVar11 = uVar13 - 0x660;
            goto LAB_1804f5b89;
          }
          if (0x6ef < uVar13) {
            if (uVar13 < 0x6fa) {
              uVar11 = uVar13 - 0x6f0;
              goto LAB_1804f5b89;
            }
            if (0x965 < uVar13) {
              iVar6 = 0x966;
              if (uVar13 < 0x970) {
LAB_1804f5a55:
                uVar11 = (uint)uVar13 - iVar6;
                goto LAB_1804f5b89;
              }
              if (0x9e5 < uVar13) {
                iVar6 = 0x9e6;
                if (uVar13 < 0x9f0) goto LAB_1804f5a55;
                if (0xa65 < uVar13) {
                  iVar6 = 0xa66;
                  if (uVar13 < 0xa70) goto LAB_1804f5a55;
                  if (0xae5 < uVar13) {
                    iVar6 = local_a8;
                    if (uVar13 < 0xaf0) goto LAB_1804f5a55;
                    if (0xb65 < uVar13) {
                      iVar6 = local_a0;
                      if (uVar13 < 0xb70) goto LAB_1804f5a55;
                      if (0xc65 < uVar13) {
                        iVar6 = local_98;
                        if (uVar13 < 0xc70) goto LAB_1804f5a55;
                        if (0xce5 < uVar13) {
                          iVar6 = local_90;
                          if (uVar13 < 0xcf0) goto LAB_1804f5a55;
                          if (0xd65 < uVar13) {
                            iVar6 = local_88;
                            if (uVar13 < 0xd70) goto LAB_1804f5a55;
                            if (0xe4f < uVar13) {
                              iVar6 = local_80;
                              if (uVar13 < 0xe5a) goto LAB_1804f5a55;
                              if (0xecf < uVar13) {
                                iVar6 = local_78;
                                if (uVar13 < 0xeda) goto LAB_1804f5a55;
                                if (0xf1f < uVar13) {
                                  iVar6 = local_70;
                                  if (uVar13 < 0xf2a) goto LAB_1804f5a55;
                                  if (0x103f < uVar13) {
                                    iVar6 = local_68;
                                    if (uVar13 < 0x104a) goto LAB_1804f5a55;
                                    if (0x17df < uVar13) {
                                      iVar6 = local_60;
                                      if (uVar13 < 0x17ea) goto LAB_1804f5a55;
                                      uVar12 = 0x1810;
                                      if ((ushort)(uVar13 + 0xe7f0) < 10) {
                                        uVar11 = uVar13 - 0x1810;
                                        goto LAB_1804f5b89;
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
      else if (uVar13 < 0xff1a) {
        uVar11 = uVar13 - 0xff10;
        goto LAB_1804f5b89;
      }
LAB_1804f5b8e:
      uVar11 = (uint)uVar13;
      if (((uVar13 < 0x41) || (0x5a < uVar13)) && ((uVar11 < 0x61 || (0x7a < uVar13)))) {
        uVar11 = 0xffffffff;
      }
      else {
        if ((ushort)(uVar13 - 0x61) < 0x1a) {
          uVar11 = uVar11 - 0x20;
        }
        uVar11 = uVar11 - 0x37;
      }
    }
    puVar4 = (ushort *)*param_2;
    if ((uint)uVar9 <= uVar11) break;
    uVar13 = *puVar4;
    uVar7 = uVar10 * (uint)uVar9;
    uVar11 = uVar7 + uVar11;
    uVar12 = (ulonglong)uVar11;
    *param_2 = (longlong)(puVar4 + 1);
    uVar14 = uVar14 | (uint)(uVar11 < uVar7 || (uint)(0xffffffff / uVar9) < uVar10) << 2 | 8;
    uVar10 = uVar11;
  } while( true );
  *param_2 = (longlong)(puVar4 + -1);
  if ((uVar13 != 0) && (puVar4[-1] != uVar13)) {
    puVar8 = (undefined4 *)FUN_18051bfb0(uVar11,uVar12);
    *puVar8 = 0x16;
    FUN_180527740();
  }
  if ((uVar14 & 8) == 0) {
    *param_2 = (longlong)puVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = puVar2;
    return 0;
  }
  if ((uVar14 & 4) == 0) {
    if ((uVar14 & 1) == 0) {
      if ((uVar14 & 2) == 0) goto LAB_1804f5c8b;
LAB_1804f5caa:
      uVar10 = -uVar10;
      goto LAB_1804f5c8b;
    }
    if ((uVar14 & 2) == 0) {
      if (uVar10 < 0x80000000) goto LAB_1804f5c8b;
    }
    else if (uVar10 < 0x80000001) goto LAB_1804f5caa;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x22;
  if ((uVar14 & 1) != 0) {
    plVar5 = (longlong *)param_2[1];
    if ((uVar14 & 2) != 0) {
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar5 == (longlong *)0x0) {
      return 0x7fffffff;
    }
    *plVar5 = *param_2;
    return 0x7fffffff;
  }
  uVar10 = 0xffffffff;
LAB_1804f5c8b:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
  }
  return uVar10;
}



/* ===== 1804f5cf0 FUN_1804f5cf0 ===== */

ulonglong FUN_1804f5cf0(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_1804f5d6e;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_1804f5d6e;
        }
        goto LAB_1804f5d3e;
      }
LAB_1804f5e43:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_1804f5d6e;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_1804f5d3e:
    if (iVar9 == 1) goto LAB_1804f5e43;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_1804f5d6e:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_1804f3b6c(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (lVar8 == 8) {
    FUN_1804f7a00(param_1,uVar7);
  }
  else {
    FUN_1804f767c(param_1,uVar7 & 0xffffffff,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  pcVar5 = (char *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (pcVar5 = *(char **)(param_1 + 0x40), *pcVar5 != '0')))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    **(undefined1 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}



/* ===== 1804f5ef4 FUN_1804f5ef4 ===== */

undefined8 FUN_1804f5ef4(longlong param_1,undefined1 param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  iVar5 = *(int *)(param_1 + 0x34);
  if (iVar5 < 6) {
    if (iVar5 != 5) {
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          local_res8 = 0;
          lVar4 = 1;
          if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
            cVar1 = FUN_1804f3ed8(param_1,&local_res8);
          }
          else {
            cVar1 = FUN_1804f3cc0();
          }
          goto LAB_1804f6061;
        }
        iVar5 = iVar5 + -2;
        if (iVar5 == 0) {
          local_res8 = 0;
          lVar4 = 2;
          if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
            cVar1 = FUN_1804f4408(param_1,&local_res8);
          }
          else {
            cVar1 = FUN_1804f40ec();
          }
          goto LAB_1804f6061;
        }
        goto LAB_1804f5f47;
      }
LAB_1804f6034:
      local_res8 = 0;
      lVar4 = 4;
      if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
        cVar1 = FUN_1804f4830(param_1,&local_res8);
      }
      else {
        cVar1 = FUN_1804f461c();
      }
      goto LAB_1804f6061;
    }
  }
  else if (((iVar5 != 6) && (iVar5 != 7)) && (iVar5 = iVar5 + -9, iVar5 != 0)) {
LAB_1804f5f47:
    if (iVar5 == 1) goto LAB_1804f6034;
    if (iVar5 != 2) {
      lVar4 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar4 + 0x30) = 1;
      *(undefined4 *)(lVar4 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  local_res8 = 0;
  lVar4 = 8;
  if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
    cVar1 = FUN_1804f4e68(param_1,&local_res8);
  }
  else {
    cVar1 = FUN_1804f4e68(param_1,&local_res8);
  }
LAB_1804f6061:
  puVar3 = (uint *)(param_1 + 0x28);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x470) != 1) || (*(int *)(param_1 + 0x474) == 1)) {
    uVar2 = *puVar3;
    uVar6 = local_res8;
    if (((uVar2 >> 4 & 1) != 0) && ((longlong)local_res8 < 0)) {
      uVar6 = -local_res8;
      uVar2 = uVar2 | 0x40;
      *puVar3 = uVar2;
    }
    if (*(int *)(param_1 + 0x30) < 0) {
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
    else {
      *puVar3 = uVar2 & 0xfffffff7;
      FUN_1804f3b6c(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
    }
    if (uVar6 == 0) {
      *puVar3 = *puVar3 & 0xffffffdf;
    }
    *(undefined1 *)(param_1 + 0x4c) = 0;
    if (lVar4 == 8) {
      FUN_1804f7a00(param_1,uVar6);
    }
    else {
      FUN_1804f767c(param_1,uVar6 & 0xffffffff,param_2);
    }
    if (((*puVar3 >> 7 & 1) != 0) &&
       ((*(int *)(param_1 + 0x48) == 0 || (**(char **)(param_1 + 0x40) != '0')))) {
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
      **(undefined1 **)(param_1 + 0x40) = 0x30;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
  }
  return 1;
}



/* ===== 1804f612c FUN_1804f612c ===== */

ulonglong FUN_1804f612c(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  short *psVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_1804f61aa;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_1804f61aa;
        }
        goto LAB_1804f617a;
      }
LAB_1804f627f:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_1804f61aa;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_1804f617a:
    if (iVar9 == 1) goto LAB_1804f627f;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_1804f61aa:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_1804f3c14(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  if (lVar8 == 8) {
    FUN_1804f7a70(param_1,uVar7);
  }
  else {
    FUN_1804f76ec(param_1,uVar7 & 0xffffffff,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  psVar5 = (short *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (psVar5 = *(short **)(param_1 + 0x40), *psVar5 != 0x30)))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    **(undefined2 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)psVar5 >> 8),1);
}



/* ===== 1804f6338 FUN_1804f6338 ===== */

undefined8 FUN_1804f6338(longlong param_1,undefined1 param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  iVar5 = *(int *)(param_1 + 0x34);
  if (iVar5 < 6) {
    if (iVar5 != 5) {
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          local_res8 = 0;
          lVar4 = 1;
          if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
            cVar1 = FUN_1804f3fe0(param_1,&local_res8);
          }
          else {
            cVar1 = FUN_1804f3dcc();
          }
          goto LAB_1804f64a5;
        }
        iVar5 = iVar5 + -2;
        if (iVar5 == 0) {
          local_res8 = 0;
          lVar4 = 2;
          if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
            cVar1 = FUN_1804f4510(param_1,&local_res8);
          }
          else {
            cVar1 = FUN_1804f41f8();
          }
          goto LAB_1804f64a5;
        }
        goto LAB_1804f638b;
      }
LAB_1804f6478:
      local_res8 = 0;
      lVar4 = 4;
      if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
        cVar1 = FUN_1804f4938(param_1,&local_res8);
      }
      else {
        cVar1 = FUN_1804f4724();
      }
      goto LAB_1804f64a5;
    }
  }
  else if (((iVar5 != 6) && (iVar5 != 7)) && (iVar5 = iVar5 + -9, iVar5 != 0)) {
LAB_1804f638b:
    if (iVar5 == 1) goto LAB_1804f6478;
    if (iVar5 != 2) {
      lVar4 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar4 + 0x30) = 1;
      *(undefined4 *)(lVar4 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  local_res8 = 0;
  lVar4 = 8;
  if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
    cVar1 = FUN_1804f4f70(param_1,&local_res8);
  }
  else {
    cVar1 = FUN_1804f4f70(param_1,&local_res8);
  }
LAB_1804f64a5:
  puVar3 = (uint *)(param_1 + 0x28);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x470) != 1) || (*(int *)(param_1 + 0x474) == 1)) {
    uVar2 = *puVar3;
    uVar6 = local_res8;
    if (((uVar2 >> 4 & 1) != 0) && ((longlong)local_res8 < 0)) {
      uVar6 = -local_res8;
      uVar2 = uVar2 | 0x40;
      *puVar3 = uVar2;
    }
    if (*(int *)(param_1 + 0x30) < 0) {
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
    else {
      *puVar3 = uVar2 & 0xfffffff7;
      FUN_1804f3c14(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
    }
    if (uVar6 == 0) {
      *puVar3 = *puVar3 & 0xffffffdf;
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    if (lVar4 == 8) {
      FUN_1804f7a70(param_1,uVar6);
    }
    else {
      FUN_1804f76ec(param_1,uVar6 & 0xffffffff,param_2);
    }
    if (((*puVar3 >> 7 & 1) != 0) &&
       ((*(int *)(param_1 + 0x48) == 0 || (**(short **)(param_1 + 0x40) != 0x30)))) {
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
      **(undefined2 **)(param_1 + 0x40) = 0x30;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
  }
  return 1;
}



/* ===== 1804f6574 FUN_1804f6574 ===== */

ulonglong FUN_1804f6574(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_1804f65f2;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_1804f65f2;
        }
        goto LAB_1804f65c2;
      }
LAB_1804f66c7:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_1804f65f2;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_1804f65c2:
    if (iVar9 == 1) goto LAB_1804f66c7;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_1804f65f2:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_1804f3b6c(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (lVar8 == 8) {
    FUN_1804f7af8(param_1,uVar7);
  }
  else {
    FUN_1804f7770(param_1,uVar7 & 0xffffffff,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  pcVar5 = (char *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (pcVar5 = *(char **)(param_1 + 0x40), *pcVar5 != '0')))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    **(undefined1 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}



/* ===== 1804f6778 FUN_1804f6778 ===== */

undefined8 FUN_1804f6778(longlong param_1,undefined1 param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  iVar5 = *(int *)(param_1 + 0x34);
  if (iVar5 < 6) {
    if (iVar5 != 5) {
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          local_res8 = 0;
          lVar4 = 1;
          if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
            cVar1 = FUN_1804f3ed8(param_1,&local_res8);
          }
          else {
            cVar1 = FUN_1804f3cc0();
          }
          goto LAB_1804f68e5;
        }
        iVar5 = iVar5 + -2;
        if (iVar5 == 0) {
          local_res8 = 0;
          lVar4 = 2;
          if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
            cVar1 = FUN_1804f4408(param_1,&local_res8);
          }
          else {
            cVar1 = FUN_1804f40ec();
          }
          goto LAB_1804f68e5;
        }
        goto LAB_1804f67cb;
      }
LAB_1804f68b8:
      local_res8 = 0;
      lVar4 = 4;
      if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
        cVar1 = FUN_1804f4830(param_1,&local_res8);
      }
      else {
        cVar1 = FUN_1804f461c();
      }
      goto LAB_1804f68e5;
    }
  }
  else if (((iVar5 != 6) && (iVar5 != 7)) && (iVar5 = iVar5 + -9, iVar5 != 0)) {
LAB_1804f67cb:
    if (iVar5 == 1) goto LAB_1804f68b8;
    if (iVar5 != 2) {
      lVar4 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar4 + 0x30) = 1;
      *(undefined4 *)(lVar4 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  local_res8 = 0;
  lVar4 = 8;
  if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
    cVar1 = FUN_1804f4e68(param_1,&local_res8);
  }
  else {
    cVar1 = FUN_1804f4e68(param_1,&local_res8);
  }
LAB_1804f68e5:
  puVar3 = (uint *)(param_1 + 0x28);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x470) != 1) || (*(int *)(param_1 + 0x474) == 1)) {
    uVar2 = *puVar3;
    uVar6 = local_res8;
    if (((uVar2 >> 4 & 1) != 0) && ((longlong)local_res8 < 0)) {
      uVar6 = -local_res8;
      uVar2 = uVar2 | 0x40;
      *puVar3 = uVar2;
    }
    if (*(int *)(param_1 + 0x30) < 0) {
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
    else {
      *puVar3 = uVar2 & 0xfffffff7;
      FUN_1804f3b6c(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
    }
    if (uVar6 == 0) {
      *puVar3 = *puVar3 & 0xffffffdf;
    }
    *(undefined1 *)(param_1 + 0x4c) = 0;
    if (lVar4 == 8) {
      FUN_1804f7af8(param_1,uVar6);
    }
    else {
      FUN_1804f7770(param_1,uVar6 & 0xffffffff,param_2);
    }
    if (((*puVar3 >> 7 & 1) != 0) &&
       ((*(int *)(param_1 + 0x48) == 0 || (**(char **)(param_1 + 0x40) != '0')))) {
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
      **(undefined1 **)(param_1 + 0x40) = 0x30;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
  }
  return 1;
}



/* ===== 1804f69b0 FUN_1804f69b0 ===== */

ulonglong FUN_1804f69b0(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  short *psVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_1804f6a2e;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_1804f6a2e;
        }
        goto LAB_1804f69fe;
      }
LAB_1804f6b03:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_1804f6a2e;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_1804f69fe:
    if (iVar9 == 1) goto LAB_1804f6b03;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_1804f6a2e:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_1804f3c14(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  if (lVar8 == 8) {
    FUN_1804f7ba8(param_1,uVar7);
  }
  else {
    FUN_1804f781c(param_1,uVar7 & 0xffffffff,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  psVar5 = (short *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (psVar5 = *(short **)(param_1 + 0x40), *psVar5 != 0x30)))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    **(undefined2 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)psVar5 >> 8),1);
}



/* ===== 1804f6bbc FUN_1804f6bbc ===== */

undefined8 FUN_1804f6bbc(longlong param_1,undefined1 param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  iVar5 = *(int *)(param_1 + 0x34);
  if (iVar5 < 6) {
    if (iVar5 != 5) {
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          local_res8 = 0;
          lVar4 = 1;
          if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
            cVar1 = FUN_1804f3fe0(param_1,&local_res8);
          }
          else {
            cVar1 = FUN_1804f3dcc();
          }
          goto LAB_1804f6d29;
        }
        iVar5 = iVar5 + -2;
        if (iVar5 == 0) {
          local_res8 = 0;
          lVar4 = 2;
          if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
            cVar1 = FUN_1804f4510(param_1,&local_res8);
          }
          else {
            cVar1 = FUN_1804f41f8();
          }
          goto LAB_1804f6d29;
        }
        goto LAB_1804f6c0f;
      }
LAB_1804f6cfc:
      local_res8 = 0;
      lVar4 = 4;
      if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
        cVar1 = FUN_1804f4938(param_1,&local_res8);
      }
      else {
        cVar1 = FUN_1804f4724();
      }
      goto LAB_1804f6d29;
    }
  }
  else if (((iVar5 != 6) && (iVar5 != 7)) && (iVar5 = iVar5 + -9, iVar5 != 0)) {
LAB_1804f6c0f:
    if (iVar5 == 1) goto LAB_1804f6cfc;
    if (iVar5 != 2) {
      lVar4 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar4 + 0x30) = 1;
      *(undefined4 *)(lVar4 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  local_res8 = 0;
  lVar4 = 8;
  if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
    cVar1 = FUN_1804f4f70(param_1,&local_res8);
  }
  else {
    cVar1 = FUN_1804f4f70(param_1,&local_res8);
  }
LAB_1804f6d29:
  puVar3 = (uint *)(param_1 + 0x28);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x470) != 1) || (*(int *)(param_1 + 0x474) == 1)) {
    uVar2 = *puVar3;
    uVar6 = local_res8;
    if (((uVar2 >> 4 & 1) != 0) && ((longlong)local_res8 < 0)) {
      uVar6 = -local_res8;
      uVar2 = uVar2 | 0x40;
      *puVar3 = uVar2;
    }
    if (*(int *)(param_1 + 0x30) < 0) {
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
    else {
      *puVar3 = uVar2 & 0xfffffff7;
      FUN_1804f3c14(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
    }
    if (uVar6 == 0) {
      *puVar3 = *puVar3 & 0xffffffdf;
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    if (lVar4 == 8) {
      FUN_1804f7ba8(param_1,uVar6);
    }
    else {
      FUN_1804f781c(param_1,uVar6 & 0xffffffff,param_2);
    }
    if (((*puVar3 >> 7 & 1) != 0) &&
       ((*(int *)(param_1 + 0x48) == 0 || (**(short **)(param_1 + 0x40) != 0x30)))) {
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
      **(undefined2 **)(param_1 + 0x40) = 0x30;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
  }
  return 1;
}



/* ===== 1804f6df8 FUN_1804f6df8 ===== */

ulonglong FUN_1804f6df8(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_1804f6e76;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_1804f6e76;
        }
        goto LAB_1804f6e46;
      }
LAB_1804f6f4b:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_1804f6e76;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_1804f6e46:
    if (iVar9 == 1) goto LAB_1804f6f4b;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_1804f6e76:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_1804f3b6c(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (lVar8 == 8) {
    FUN_1804f7c6c(param_1,uVar7);
  }
  else {
    FUN_1804f78dc(param_1,uVar7 & 0xffffffff,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  pcVar5 = (char *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (pcVar5 = *(char **)(param_1 + 0x40), *pcVar5 != '0')))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    **(undefined1 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}



/* ===== 1804f6ffc FUN_1804f6ffc ===== */

undefined8 FUN_1804f6ffc(longlong param_1,undefined1 param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  iVar5 = *(int *)(param_1 + 0x34);
  if (iVar5 < 6) {
    if (iVar5 != 5) {
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          local_res8 = 0;
          lVar4 = 1;
          if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
            cVar1 = FUN_1804f3ed8(param_1,&local_res8);
          }
          else {
            cVar1 = FUN_1804f3cc0();
          }
          goto LAB_1804f7169;
        }
        iVar5 = iVar5 + -2;
        if (iVar5 == 0) {
          local_res8 = 0;
          lVar4 = 2;
          if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
            cVar1 = FUN_1804f4408(param_1,&local_res8);
          }
          else {
            cVar1 = FUN_1804f40ec();
          }
          goto LAB_1804f7169;
        }
        goto LAB_1804f704f;
      }
LAB_1804f713c:
      local_res8 = 0;
      lVar4 = 4;
      if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
        cVar1 = FUN_1804f4830(param_1,&local_res8);
      }
      else {
        cVar1 = FUN_1804f461c();
      }
      goto LAB_1804f7169;
    }
  }
  else if (((iVar5 != 6) && (iVar5 != 7)) && (iVar5 = iVar5 + -9, iVar5 != 0)) {
LAB_1804f704f:
    if (iVar5 == 1) goto LAB_1804f713c;
    if (iVar5 != 2) {
      lVar4 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar4 + 0x30) = 1;
      *(undefined4 *)(lVar4 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  local_res8 = 0;
  lVar4 = 8;
  if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
    cVar1 = FUN_1804f4e68(param_1,&local_res8);
  }
  else {
    cVar1 = FUN_1804f4e68(param_1,&local_res8);
  }
LAB_1804f7169:
  puVar3 = (uint *)(param_1 + 0x28);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x470) != 1) || (*(int *)(param_1 + 0x474) == 1)) {
    uVar2 = *puVar3;
    uVar6 = local_res8;
    if (((uVar2 >> 4 & 1) != 0) && ((longlong)local_res8 < 0)) {
      uVar6 = -local_res8;
      uVar2 = uVar2 | 0x40;
      *puVar3 = uVar2;
    }
    if (*(int *)(param_1 + 0x30) < 0) {
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
    else {
      *puVar3 = uVar2 & 0xfffffff7;
      FUN_1804f3b6c(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
    }
    if (uVar6 == 0) {
      *puVar3 = *puVar3 & 0xffffffdf;
    }
    *(undefined1 *)(param_1 + 0x4c) = 0;
    if (lVar4 == 8) {
      FUN_1804f7c6c(param_1,uVar6);
    }
    else {
      FUN_1804f78dc(param_1,uVar6 & 0xffffffff,param_2);
    }
    if (((*puVar3 >> 7 & 1) != 0) &&
       ((*(int *)(param_1 + 0x48) == 0 || (**(char **)(param_1 + 0x40) != '0')))) {
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
      **(undefined1 **)(param_1 + 0x40) = 0x30;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
  }
  return 1;
}



/* ===== 1804f7234 FUN_1804f7234 ===== */

ulonglong FUN_1804f7234(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  short *psVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_1804f72b2;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_1804f72b2;
        }
        goto LAB_1804f7282;
      }
LAB_1804f7387:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_1804f72b2;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_1804f7282:
    if (iVar9 == 1) goto LAB_1804f7387;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_1804f72b2:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_1804f3c14(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  if (lVar8 == 8) {
    FUN_1804f7cf0(param_1,uVar7);
  }
  else {
    FUN_1804f7960(param_1,uVar7 & 0xffffffff,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  psVar5 = (short *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (psVar5 = *(short **)(param_1 + 0x40), *psVar5 != 0x30)))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    **(undefined2 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)psVar5 >> 8),1);
}



/* ===== 1804f7440 FUN_1804f7440 ===== */

undefined8 FUN_1804f7440(longlong param_1,undefined1 param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  iVar5 = *(int *)(param_1 + 0x34);
  if (iVar5 < 6) {
    if (iVar5 != 5) {
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          local_res8 = 0;
          lVar4 = 1;
          if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
            cVar1 = FUN_1804f3fe0(param_1,&local_res8);
          }
          else {
            cVar1 = FUN_1804f3dcc();
          }
          goto LAB_1804f75ad;
        }
        iVar5 = iVar5 + -2;
        if (iVar5 == 0) {
          local_res8 = 0;
          lVar4 = 2;
          if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
            cVar1 = FUN_1804f4510(param_1,&local_res8);
          }
          else {
            cVar1 = FUN_1804f41f8();
          }
          goto LAB_1804f75ad;
        }
        goto LAB_1804f7493;
      }
LAB_1804f7580:
      local_res8 = 0;
      lVar4 = 4;
      if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
        cVar1 = FUN_1804f4938(param_1,&local_res8);
      }
      else {
        cVar1 = FUN_1804f4724();
      }
      goto LAB_1804f75ad;
    }
  }
  else if (((iVar5 != 6) && (iVar5 != 7)) && (iVar5 = iVar5 + -9, iVar5 != 0)) {
LAB_1804f7493:
    if (iVar5 == 1) goto LAB_1804f7580;
    if (iVar5 != 2) {
      lVar4 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar4 + 0x30) = 1;
      *(undefined4 *)(lVar4 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  local_res8 = 0;
  lVar4 = 8;
  if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
    cVar1 = FUN_1804f4f70(param_1,&local_res8);
  }
  else {
    cVar1 = FUN_1804f4f70(param_1,&local_res8);
  }
LAB_1804f75ad:
  puVar3 = (uint *)(param_1 + 0x28);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x470) != 1) || (*(int *)(param_1 + 0x474) == 1)) {
    uVar2 = *puVar3;
    uVar6 = local_res8;
    if (((uVar2 >> 4 & 1) != 0) && ((longlong)local_res8 < 0)) {
      uVar6 = -local_res8;
      uVar2 = uVar2 | 0x40;
      *puVar3 = uVar2;
    }
    if (*(int *)(param_1 + 0x30) < 0) {
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
    else {
      *puVar3 = uVar2 & 0xfffffff7;
      FUN_1804f3c14(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
    }
    if (uVar6 == 0) {
      *puVar3 = *puVar3 & 0xffffffdf;
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    if (lVar4 == 8) {
      FUN_1804f7cf0(param_1,uVar6);
    }
    else {
      FUN_1804f7960(param_1,uVar6 & 0xffffffff,param_2);
    }
    if (((*puVar3 >> 7 & 1) != 0) &&
       ((*(int *)(param_1 + 0x48) == 0 || (**(short **)(param_1 + 0x40) != 0x30)))) {
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
      **(undefined2 **)(param_1 + 0x40) = 0x30;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
  }
  return 1;
}



/* ===== 1804f767c FUN_1804f767c ===== */

void FUN_1804f767c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x458);
  if (lVar3 == 0) {
    uVar1 = 0x200;
    lVar3 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar2 = (char *)(lVar3 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar2;
  pcVar4 = pcVar2;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *pcVar4 = ((byte)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pcVar2 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}



/* ===== 1804f76ec FUN_1804f76ec ===== */

void FUN_1804f76ec(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  short *psVar3;
  short *psVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 == 0) {
    uVar1 = 0x100;
    lVar2 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  psVar3 = (short *)(lVar2 + uVar1 * 2 + -2);
  *(short **)(param_1 + 0x40) = psVar3;
  psVar4 = psVar3;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *psVar4 = ((ushort)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    psVar4 = *(short **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)psVar3 - (longlong)psVar4 >> 1);
  *(short **)(param_1 + 0x40) = psVar4 + 1;
  return;
}



/* ===== 1804f7770 FUN_1804f7770 ===== */

void FUN_1804f7770(longlong param_1,uint param_2,byte param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 == 0) {
    uVar1 = 0x200;
    lVar2 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar3 = (char *)(lVar2 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar3;
  pcVar4 = pcVar3;
  uVar1 = (ulonglong)param_2;
  while ((0 < *(int *)(param_1 + 0x30) || ((int)uVar1 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    cVar5 = (char)uVar1 + (char)(uVar1 / 10) * -10 + '0';
    if ('9' < cVar5) {
      cVar5 = (param_3 ^ 1) * ' ' + '\a' + cVar5;
    }
    *pcVar4 = cVar5;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
    uVar1 = uVar1 / 10;
  }
  *(int *)(param_1 + 0x48) = (int)pcVar3 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}



/* ===== 1804f781c FUN_1804f781c ===== */

void FUN_1804f781c(longlong param_1,uint param_2,byte param_3)

{
  short *psVar1;
  ulonglong uVar2;
  ushort uVar3;
  longlong lVar4;
  short *psVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x458);
  if (lVar4 == 0) {
    uVar2 = 0x100;
    lVar4 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  psVar1 = (short *)(lVar4 + (uVar2 - 1) * 2);
  *(short **)(param_1 + 0x40) = psVar1;
  uVar2 = (ulonglong)param_2;
  psVar5 = psVar1;
  while ((0 < *(int *)(param_1 + 0x30) || ((int)uVar2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    uVar3 = (short)uVar2 + (short)(uVar2 / 10) * -10 + 0x30;
    if (0x39 < uVar3) {
      uVar3 = (ushort)(char)((param_3 ^ 1) * ' ' + '\a' + (char)uVar3);
    }
    *psVar5 = (short)(char)uVar3;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    psVar5 = *(short **)(param_1 + 0x40);
    uVar2 = uVar2 / 10;
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)psVar1 - (longlong)psVar5 >> 1);
  *(short **)(param_1 + 0x40) = psVar5 + 1;
  return;
}



/* ===== 1804f78dc FUN_1804f78dc ===== */

void FUN_1804f78dc(longlong param_1,uint param_2,byte param_3)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    uVar2 = 0x200;
    lVar5 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pbVar3 = (byte *)(lVar5 + -1 + uVar2);
  *(byte **)(param_1 + 0x40) = pbVar3;
  pbVar4 = pbVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 4;
    bVar1 = (bVar1 & 0xf) + 0x30;
    if (0x39 < bVar1) {
      bVar1 = (param_3 ^ 1) * ' ' + '\a' + bVar1;
    }
    *pbVar4 = bVar1;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pbVar4 = *(byte **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pbVar3 - *(int *)(param_1 + 0x40);
  *(byte **)(param_1 + 0x40) = pbVar4 + 1;
  return;
}



/* ===== 1804f7960 FUN_1804f7960 ===== */

void FUN_1804f7960(longlong param_1,uint param_2,byte param_3)

{
  ushort *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  longlong lVar4;
  ushort *puVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x458);
  if (lVar4 == 0) {
    uVar2 = 0x100;
    lVar4 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  puVar1 = (ushort *)(lVar4 + (uVar2 - 1) * 2);
  *(ushort **)(param_1 + 0x40) = puVar1;
  puVar5 = puVar1;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    uVar3 = (ushort)param_2;
    param_2 = param_2 >> 4;
    uVar3 = (uVar3 & 0xf) + 0x30;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    if (0x39 < uVar3) {
      uVar3 = (ushort)(byte)((param_3 ^ 1) * ' ' + '\a' + (char)uVar3);
    }
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    puVar5 = *(ushort **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)puVar1 - (longlong)puVar5 >> 1);
  *(ushort **)(param_1 + 0x40) = puVar5 + 1;
  return;
}



/* ===== 1804f7a00 FUN_1804f7a00 ===== */

void FUN_1804f7a00(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x458);
  if (lVar3 == 0) {
    uVar1 = 0x200;
    lVar3 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar2 = (char *)(lVar3 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar2;
  pcVar4 = pcVar2;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *pcVar4 = ((byte)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pcVar2 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}



/* ===== 1804f7a70 FUN_1804f7a70 ===== */

void FUN_1804f7a70(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  short *psVar3;
  short *psVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 == 0) {
    uVar1 = 0x100;
    lVar2 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  psVar3 = (short *)(lVar2 + uVar1 * 2 + -2);
  *(short **)(param_1 + 0x40) = psVar3;
  psVar4 = psVar3;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *psVar4 = ((ushort)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    psVar4 = *(short **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)psVar3 - (longlong)psVar4 >> 1);
  *(short **)(param_1 + 0x40) = psVar4 + 1;
  return;
}



/* ===== 1804f7af8 FUN_1804f7af8 ===== */

void FUN_1804f7af8(longlong param_1,ulonglong param_2,byte param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 == 0) {
    uVar1 = 0x200;
    lVar2 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar3 = (char *)(lVar2 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar3;
  pcVar4 = pcVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    cVar5 = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
    if ('9' < cVar5) {
      cVar5 = (param_3 ^ 1) * ' ' + '\a' + cVar5;
    }
    *pcVar4 = cVar5;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
    param_2 = param_2 / 10;
  }
  *(int *)(param_1 + 0x48) = (int)pcVar3 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}



/* ===== 1804f7ba8 FUN_1804f7ba8 ===== */

void FUN_1804f7ba8(longlong param_1,ulonglong param_2,byte param_3)

{
  short *psVar1;
  ulonglong uVar2;
  ushort uVar3;
  longlong lVar4;
  short *psVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x458);
  if (lVar4 == 0) {
    uVar2 = 0x100;
    lVar4 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  psVar1 = (short *)(lVar4 + (uVar2 - 1) * 2);
  *(short **)(param_1 + 0x40) = psVar1;
  psVar5 = psVar1;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    uVar3 = (short)param_2 + (short)(param_2 / 10) * -10 + 0x30;
    if (0x39 < uVar3) {
      uVar3 = (ushort)(char)((param_3 ^ 1) * ' ' + '\a' + (char)uVar3);
    }
    *psVar5 = (short)(char)uVar3;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    psVar5 = *(short **)(param_1 + 0x40);
    param_2 = param_2 / 10;
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)psVar1 - (longlong)psVar5 >> 1);
  *(short **)(param_1 + 0x40) = psVar5 + 1;
  return;
}



/* ===== 1804f7c6c FUN_1804f7c6c ===== */

void FUN_1804f7c6c(longlong param_1,ulonglong param_2,byte param_3)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    uVar2 = 0x200;
    lVar5 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pbVar3 = (byte *)(lVar5 + -1 + uVar2);
  *(byte **)(param_1 + 0x40) = pbVar3;
  pbVar4 = pbVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 4;
    bVar1 = (bVar1 & 0xf) + 0x30;
    if (0x39 < bVar1) {
      bVar1 = (param_3 ^ 1) * ' ' + '\a' + bVar1;
    }
    *pbVar4 = bVar1;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pbVar4 = *(byte **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pbVar3 - *(int *)(param_1 + 0x40);
  *(byte **)(param_1 + 0x40) = pbVar4 + 1;
  return;
}



/* ===== 1804f7cf0 FUN_1804f7cf0 ===== */

void FUN_1804f7cf0(longlong param_1,ulonglong param_2,byte param_3)

{
  ushort *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  longlong lVar4;
  ushort *puVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x458);
  if (lVar4 == 0) {
    uVar2 = 0x100;
    lVar4 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  puVar1 = (ushort *)(lVar4 + (uVar2 - 1) * 2);
  *(ushort **)(param_1 + 0x40) = puVar1;
  puVar5 = puVar1;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    uVar3 = (ushort)param_2;
    param_2 = param_2 >> 4;
    uVar3 = (uVar3 & 0xf) + 0x30;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    if (0x39 < uVar3) {
      uVar3 = (ushort)(byte)((param_3 ^ 1) * ' ' + '\a' + (char)uVar3);
    }
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    puVar5 = *(ushort **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)puVar1 - (longlong)puVar5 >> 1);
  *(ushort **)(param_1 + 0x40) = puVar5 + 1;
  return;
}



/* ===== 1804f7d90 FUN_1804f7d90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1804f7d90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 auStack_4c8 [32];
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined1 local_484;
  undefined8 local_480;
  undefined4 local_478;
  undefined1 local_470;
  undefined2 local_46e;
  undefined4 local_460;
  undefined1 local_45c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_4c8;
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_1805292d8(uVar2);
  local_490 = *(undefined8 *)param_1[4];
  local_48 = *(undefined8 *)*param_1;
  local_498 = *(undefined8 *)param_1[3];
  local_4a8 = *(undefined8 *)param_1[2];
  local_4a0 = param_1[1];
  local_488 = 0;
  local_484 = 0;
  local_480 = 0;
  local_478 = 0;
  local_470 = 0;
  local_46e = 0;
  local_460 = 0;
  local_45c = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_40 = 0;
  uVar4 = FUN_1804fa094(&local_4a8);
  FUN_1805277b0(uStack_50);
  uStack_50 = 0;
  FUN_1805293a0(uVar3,uVar2,uVar1);
  return uVar4;
}



/* ===== 1804f7eac FUN_1804f7eac ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1804f7eac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined1 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined2 local_460;
  undefined4 local_450;
  undefined1 local_44c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_4b8;
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_1805292d8(uVar2);
  local_480 = *(undefined8 *)param_1[4];
  local_38 = *(undefined8 *)*param_1;
  local_488 = *(undefined8 *)param_1[3];
  local_498 = *(undefined8 *)param_1[2];
  local_490 = param_1[1];
  local_478 = 0;
  local_470 = 0;
  local_46c = 0;
  local_468 = 0;
  local_460 = 0;
  local_450 = 0;
  local_30 = 0;
  local_474 = 0;
  local_44c = 0;
  local_48 = 0;
  uStack_40 = 0;
  uVar4 = FUN_1804f9238(&local_498);
  FUN_1805277b0(uStack_40);
  uStack_40 = 0;
  FUN_1805293a0(uVar3,uVar2,uVar1);
  return uVar4;
}



/* ===== 1804f7fc8 FUN_1804f7fc8 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1804f7fc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 auStack_e38 [32];
  undefined8 local_e18;
  undefined8 local_e10;
  undefined8 local_e08;
  undefined8 local_e00;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined8 local_df0;
  undefined4 local_de8;
  undefined1 local_de0;
  undefined2 local_dde;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined4 local_9b0;
  undefined8 local_9a8;
  undefined8 local_9a0;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_e38;
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_1805292d8(uVar2);
  local_e00 = *(undefined8 *)param_1[4];
  local_9b8 = *(undefined8 *)*param_1;
  local_e08 = *(undefined8 *)param_1[3];
  local_e18 = *(undefined8 *)param_1[2];
  local_e10 = param_1[1];
  local_df8 = 0;
  local_df4 = 0;
  local_df0 = 0;
  local_de8 = 0;
  local_de0 = 0;
  local_dde = 0;
  local_dd0 = 0;
  local_dcc = 0;
  local_9c8 = 0;
  uStack_9c0 = 0;
  local_9b0 = 0;
  local_9a8 = 0;
  local_38 = 0xffffffff;
  local_34 = 0xffffffff;
  local_9a0 = local_e08;
  uVar4 = FUN_1804fa354(&local_e18);
  FUN_1805277b0(uStack_9c0);
  uStack_9c0 = 0;
  FUN_1805293a0(uVar3,uVar2,uVar1);
  return uVar4;
}



/* ===== 1804f8104 FUN_1804f8104 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1804f8104(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined1 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined2 local_460;
  undefined4 local_450;
  undefined1 local_44c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_4b8;
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_1805292d8(uVar2);
  local_480 = *(undefined8 *)param_1[4];
  local_38 = *(undefined8 *)*param_1;
  local_488 = *(undefined8 *)param_1[3];
  local_498 = *(undefined8 *)param_1[2];
  local_490 = param_1[1];
  local_478 = 0;
  local_470 = 0;
  local_46c = 0;
  local_468 = 0;
  local_460 = 0;
  local_450 = 0;
  local_30 = 0;
  local_474 = 0;
  local_44c = 0;
  local_48 = 0;
  uStack_40 = 0;
  uVar4 = FUN_1804f8aa0(&local_498);
  FUN_1805277b0(uStack_40);
  uStack_40 = 0;
  FUN_1805293a0(uVar3,uVar2,uVar1);
  return uVar4;
}



/* ===== 1804f8220 FUN_1804f8220 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1804f8220(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 auStack_e38 [32];
  undefined8 local_e18;
  undefined8 local_e10;
  undefined8 local_e08;
  undefined8 local_e00;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined8 local_df0;
  undefined4 local_de8;
  undefined2 local_de0;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined4 local_9b0;
  undefined8 local_9a8;
  undefined8 local_9a0;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_e38;
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_1805292d8(uVar2);
  local_e00 = *(undefined8 *)param_1[4];
  local_9b8 = *(undefined8 *)*param_1;
  local_e08 = *(undefined8 *)param_1[3];
  local_e18 = *(undefined8 *)param_1[2];
  local_e10 = param_1[1];
  local_df8 = 0;
  local_df4 = 0;
  local_df0 = 0;
  local_de8 = 0;
  local_de0 = 0;
  local_dd0 = 0;
  local_dcc = 0;
  local_9c8 = 0;
  uStack_9c0 = 0;
  local_9b0 = 0;
  local_9a8 = 0;
  local_38 = 0xffffffff;
  local_34 = 0xffffffff;
  local_9a0 = local_e08;
  uVar4 = FUN_1804f8e20(&local_e18);
  FUN_1805277b0(uStack_9c0);
  uStack_9c0 = 0;
  FUN_1805293a0(uVar3,uVar2,uVar1);
  return uVar4;
}



/* ===== 1804f8358 FUN_1804f8358 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1804f8358(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 auStack_4c8 [32];
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined1 local_484;
  undefined8 local_480;
  undefined4 local_478;
  undefined1 local_470;
  undefined2 local_46e;
  undefined4 local_460;
  undefined1 local_45c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_4c8;
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_1805292d8(uVar2);
  local_490 = *(undefined8 *)param_1[4];
  local_48 = *(undefined8 *)*param_1;
  local_498 = *(undefined8 *)param_1[3];
  local_4a8 = *(undefined8 *)param_1[2];
  local_4a0 = param_1[1];
  local_488 = 0;
  local_484 = 0;
  local_480 = 0;
  local_478 = 0;
  local_470 = 0;
  local_46e = 0;
  local_460 = 0;
  local_45c = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_40 = 0;
  uVar4 = FUN_1804fa6b4(&local_4a8);
  FUN_1805277b0(uStack_50);
  uStack_50 = 0;
  FUN_1805293a0(uVar3,uVar2,uVar1);
  return uVar4;
}



/* ===== 1804f8474 FUN_1804f8474 ===== */

void FUN_1804f8474(char *param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    do {
      if (cVar1 == *(char *)**(undefined8 **)(*param_2 + 0xf8)) break;
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    } while (cVar1 != '\0');
  }
  if (cVar1 != '\0') {
    do {
      param_1 = param_1 + 1;
      pcVar2 = param_1;
      if (*param_1 == '\0') break;
    } while ((*param_1 + 0xbbU & 0xdf) != 0);
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
    } while (*pcVar2 == '0');
    pcVar3 = pcVar3 + -2;
    if (*pcVar2 != *(char *)**(undefined8 **)(*param_2 + 0xf8)) {
      pcVar3 = pcVar2;
    }
    lVar4 = (longlong)param_1 - (longlong)pcVar3;
    do {
      cVar1 = pcVar3[lVar4];
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}



/* ===== 1804f84e0 FUN_1804f84e0 ===== */

longlong FUN_1804f84e0(longlong *param_1)

{
  longlong lVar1;
  DWORD local_res8 [2];
  
  if (*param_1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      lVar1 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      param_1[1] = 0;
    }
    else {
      lVar1 = param_1[1];
    }
    lVar1 = FUN_180529950(local_res8,lVar1);
    *param_1 = lVar1;
    SetLastError(local_res8[0]);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return *param_1;
}



/* ===== 1804f8548 FUN_1804f8548 ===== */

bool FUN_1804f8548(undefined8 param_1,int *param_2,int param_3,char param_4,int param_5)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  cVar1 = (char)param_2[1];
  if ((cVar1 == 'p') || (param_4 == 'p')) {
    return (cVar1 == 'p') != (param_4 != 'p');
  }
  bVar6 = (param_4 + 0xadU & 0xdf) == 0;
  bVar7 = (cVar1 + 0xbdU & 0xdf) == 0;
  bVar8 = (param_4 + 0xbdU & 0xdf) == 0;
  bVar9 = false;
  if ((cVar1 + 0xadU & 0xdf) == 0) {
    if (!bVar6) {
      return false;
    }
  }
  else {
    if (bVar6) {
      return false;
    }
    if (!bVar7) {
      if (bVar8) {
        return false;
      }
      if ((((byte)(cVar1 + 0xa8U) < 0x21) &&
          ((0x120821001U >> ((longlong)(char)(cVar1 + 0xa8U) & 0x3fU) & 1) != 0)) ||
         (cVar2 = '\0', cVar1 == '*')) {
        cVar2 = '\x01';
      }
      if ((((byte)(param_4 + 0xa8U) < 0x21) &&
          ((0x120821001U >> ((longlong)(char)(param_4 + 0xa8U) & 0x3fU) & 1) != 0)) ||
         (cVar1 = '\0', param_4 == '*')) {
        cVar1 = '\x01';
      }
      if (cVar2 == '\0') {
        if (cVar1 == '\0') {
          return *param_2 == param_3;
        }
        return false;
      }
      if (cVar2 != cVar1) {
        return false;
      }
      iVar4 = param_2[4];
      if ((iVar4 == 9) != (param_5 == 9)) {
        return false;
      }
      lVar3 = 8;
      if (iVar4 < 6) {
        if (iVar4 == 5) goto LAB_1804f866e;
        if (iVar4 == 0) goto LAB_1804f8695;
        if (iVar4 == 1) {
          lVar5 = 1;
        }
        else {
          iVar4 = iVar4 + -2;
          if (iVar4 != 0) goto LAB_1804f8662;
          lVar5 = 2;
        }
      }
      else {
        if (((iVar4 != 6) && (iVar4 != 7)) && (iVar4 = iVar4 + -9, iVar4 != 0)) {
LAB_1804f8662:
          if (iVar4 == 1) {
LAB_1804f8695:
            lVar5 = 4;
            goto LAB_1804f8671;
          }
          if (iVar4 != 2) {
            lVar5 = 0;
            goto LAB_1804f8671;
          }
        }
LAB_1804f866e:
        lVar5 = 8;
      }
LAB_1804f8671:
      if (param_5 < 6) {
        if (param_5 == 5) goto LAB_1804f86e5;
        if (param_5 != 0) {
          if (param_5 == 1) {
            lVar3 = 1;
            goto LAB_1804f86e5;
          }
          param_5 = param_5 + -2;
          if (param_5 == 0) {
            lVar3 = 2;
            goto LAB_1804f86e5;
          }
          goto LAB_1804f8686;
        }
      }
      else {
        if (((param_5 == 6) || (param_5 == 7)) || (param_5 = param_5 + -9, param_5 == 0))
        goto LAB_1804f86e5;
LAB_1804f8686:
        if (param_5 != 1) {
          if (param_5 != 2) {
            lVar3 = 0;
          }
          goto LAB_1804f86e5;
        }
      }
      lVar3 = 4;
LAB_1804f86e5:
      return lVar5 == lVar3;
    }
  }
  if (bVar7 != bVar8) {
    return false;
  }
  iVar4 = param_2[4];
  if (iVar4 != 2) {
    if ((iVar4 == 3) || (iVar4 == 0xc)) {
      bVar6 = true;
      goto LAB_1804f8728;
    }
    if (iVar4 != 0xd) {
      bVar6 = (cVar1 + 0x9dU & 0xef) != 0;
      goto LAB_1804f8728;
    }
  }
  bVar6 = false;
LAB_1804f8728:
  if (param_5 != 2) {
    if ((param_5 == 3) || (param_5 == 0xc)) {
      bVar9 = true;
    }
    else if (param_5 != 0xd) {
      bVar9 = (param_4 + 0x9dU & 0xef) != 0;
    }
  }
  if (bVar6 == bVar9) {
    return true;
  }
  return false;
}



/* ===== 1804f877c FUN_1804f877c ===== */

bool FUN_1804f877c(__uint64 *param_1,int *param_2,int param_3,wchar_t param_4,
                  length_modifier param_5)

{
  wchar_t wVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  wVar1 = *(wchar_t *)(param_2 + 1);
  if ((wVar1 == L'p') || (param_4 == L'p')) {
    return (wVar1 == L'p') != (param_4 != L'p');
  }
  bVar7 = (param_4 + L'ﾭ' & 0xffdfU) == 0;
  bVar8 = (wVar1 + L'ﾽ' & 0xffdfU) == 0;
  bVar9 = (param_4 + L'ﾽ' & 0xffdfU) == 0;
  if ((wVar1 + L'ﾭ' & 0xffdfU) == 0) {
    if (!bVar7) {
      return false;
    }
LAB_1804f8932:
    if (bVar8 == bVar9) {
      bVar7 = __crt_stdio_output::is_wide_character_specifier<wchar_t>(*param_1,wVar1,param_2[4]);
      bVar8 = __crt_stdio_output::is_wide_character_specifier<wchar_t>(*param_1,param_4,param_5);
      if (bVar7 == bVar8) {
        return true;
      }
    }
    return false;
  }
  if (bVar7) {
    return false;
  }
  if (bVar8) goto LAB_1804f8932;
  if (bVar9) {
    return false;
  }
  if ((((ushort)(wVar1 + L'ﾨ') < 0x21) &&
      ((0x120821001U >> ((ulonglong)(ushort)(wVar1 + L'ﾨ') & 0x3f) & 1) != 0)) || (wVar1 == L'*'))
  {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  if ((((ushort)((ushort)param_4 - 0x58) < 0x21) &&
      ((0x120821001U >> ((ulonglong)((ushort)param_4 - 0x58 & 0xffff) & 0x3f) & 1) != 0)) ||
     (param_4 == L'*')) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
  }
  if (cVar3 == '\0') {
    if (cVar2 == '\0') {
      return *param_2 == param_3;
    }
    return false;
  }
  if (cVar3 != cVar2) {
    return false;
  }
  iVar5 = param_2[4];
  if ((iVar5 == 9) != (param_5 == 9)) {
    return false;
  }
  lVar4 = 8;
  if (iVar5 < 6) {
    if (iVar5 == 5) goto LAB_1804f88b5;
    if (iVar5 == 0) goto LAB_1804f88db;
    if (iVar5 == 1) {
      lVar6 = 1;
    }
    else {
      iVar5 = iVar5 + -2;
      if (iVar5 != 0) goto LAB_1804f88a9;
      lVar6 = 2;
    }
  }
  else {
    if (((iVar5 != 6) && (iVar5 != 7)) && (iVar5 = iVar5 + -9, iVar5 != 0)) {
LAB_1804f88a9:
      if (iVar5 == 1) {
LAB_1804f88db:
        lVar6 = 4;
        goto LAB_1804f88b8;
      }
      if (iVar5 != 2) {
        lVar6 = 0;
        goto LAB_1804f88b8;
      }
    }
LAB_1804f88b5:
    lVar6 = 8;
  }
LAB_1804f88b8:
  if ((int)param_5 < 6) {
    if (param_5 == 5) goto LAB_1804f8925;
    if (param_5 != 0) {
      if (param_5 == 1) {
        lVar4 = 1;
        goto LAB_1804f8925;
      }
      iVar5 = param_5 - 2;
      if (iVar5 == 0) {
        lVar4 = 2;
        goto LAB_1804f8925;
      }
      goto LAB_1804f88cd;
    }
  }
  else {
    if (((param_5 == 6) || (param_5 == 7)) || (iVar5 = param_5 - 9, iVar5 == 0)) goto LAB_1804f8925;
LAB_1804f88cd:
    if (iVar5 != 1) {
      if (iVar5 != 2) {
        lVar4 = 0;
      }
      goto LAB_1804f8925;
    }
  }
  lVar4 = 4;
LAB_1804f8925:
  return lVar6 == lVar4;
}



/* ===== 1804f8980 FUN_1804f8980 ===== */

undefined1 FUN_1804f8980(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  ulonglong local_res8;
  ulonglong local_18;
  ulonglong *local_10;
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_10 = &local_res8;
  local_res8 = *(longlong *)(param_1 + 0x10) - 1;
  uVar2 = *(undefined8 *)(lVar1 + 0x2c);
  local_18 = local_res8;
  uVar3 = FUN_1804f52d0(lVar1,&local_18,10,1);
  *param_2 = uVar3;
  uVar4 = 0;
  if (((*(char *)(*(longlong *)(param_1 + 8) + 0x30) == '\0') ||
      (*(int *)(*(longlong *)(param_1 + 8) + 0x2c) != 0x22)) &&
     (*(ulonglong *)(param_1 + 0x10) <= local_res8)) {
    *(ulonglong *)(param_1 + 0x10) = local_res8;
    uVar4 = 1;
  }
  *(undefined8 *)(lVar1 + 0x2c) = uVar2;
  return uVar4;
}



/* ===== 1804f8a10 FUN_1804f8a10 ===== */

undefined1 FUN_1804f8a10(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  ulonglong local_res8;
  ulonglong local_18;
  ulonglong *local_10;
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_10 = &local_res8;
  local_res8 = *(longlong *)(param_1 + 0x10) - 2;
  uVar2 = *(undefined8 *)(lVar1 + 0x2c);
  local_18 = local_res8;
  uVar3 = FUN_1804f5584(lVar1,&local_18,10,1);
  *param_2 = uVar3;
  uVar4 = 0;
  if (((*(char *)(*(longlong *)(param_1 + 8) + 0x30) == '\0') ||
      (*(int *)(*(longlong *)(param_1 + 8) + 0x2c) != 0x22)) &&
     (*(ulonglong *)(param_1 + 0x10) <= local_res8)) {
    *(ulonglong *)(param_1 + 0x10) = local_res8;
    uVar4 = 1;
  }
  *(undefined8 *)(lVar1 + 0x2c) = uVar2;
  return uVar4;
}



/* ===== 1804f8aa0 FUN_1804f8aa0 ===== */

undefined4 FUN_1804f8aa0(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 8);
  if (*(_iobuf **)(param_1 + 0x460) == (_iobuf *)0x0) {
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
  }
  else {
    bVar2 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required
                      (*(_iobuf **)(param_1 + 0x460));
    if (!bVar2) {
      return 0xffffffff;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar4 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar4;
joined_r0x0001804f8b22:
      if (iVar4 == 2) {
        return *(undefined4 *)(param_1 + 0x20);
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x24) = 0;
LAB_1804f8d83:
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              cVar3 = **(char **)(param_1 + 0x10);
              *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
              *(char *)(param_1 + 0x39) = cVar3;
              if ((cVar3 == '\0') || (*(int *)(param_1 + 0x20) < 0)) goto LAB_1804f8d9b;
              if ((byte)(cVar3 - 0x20U) < 0x5b) {
                bVar5 = (&DAT_180576a91)[(ulonglong)((int)cVar3 - 0x20U & 0x7f) * 2];
              }
              else {
                bVar5 = 0;
              }
              bVar5 = (&DAT_180576a90)
                      [(ulonglong)((uint)bVar5 * 9 + (uint)*(byte *)(param_1 + 0x24) & 0x7f) * 2];
              *(byte *)(param_1 + 0x24) = bVar5;
              if (7 < bVar5) goto LAB_1804f8ded;
              if (bVar5 != 0) break;
              lVar6 = *(longlong *)(param_1 + 8);
              *(undefined1 *)(param_1 + 0x4c) = 0;
              if (*(char *)(lVar6 + 0x28) == '\0') {
                FUN_1805002a0(lVar6);
              }
              cVar3 = *(char *)(param_1 + 0x39);
              if ((-2 < cVar3) &&
                 ((*(ushort *)(**(longlong **)(lVar6 + 0x18) + (longlong)cVar3 * 2) & 0x8000) != 0))
              {
                if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                    (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
                   (iVar4 = FUN_18050ff4c((longlong)cVar3 & 0xffffffff,
                                          *(undefined8 *)(param_1 + 0x460),
                                          *(undefined8 *)(param_1 + 8)), iVar4 == -1)) {
                  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                }
                cVar3 = **(char **)(param_1 + 0x10);
                *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
                *(char *)(param_1 + 0x39) = cVar3;
                if (cVar3 == '\0') {
                  lVar6 = *(longlong *)(param_1 + 8);
                  *(undefined1 *)(lVar6 + 0x30) = 1;
                  *(undefined4 *)(lVar6 + 0x2c) = 0x16;
                  FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
                  goto LAB_1804f8ded;
                }
              }
              if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                  (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
                 (iVar4 = FUN_18050ff4c((int)cVar3,*(undefined8 *)(param_1 + 0x460),
                                        *(undefined8 *)(param_1 + 8)), iVar4 == -1)) {
                *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              }
            }
            if (bVar5 != 1) break;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          if (bVar5 != 2) break;
          if (cVar3 == ' ') {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
          }
          else if (cVar3 == '#') {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
          }
          else if (cVar3 == '+') {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
          }
          else if (cVar3 == '-') {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
          }
          else if (cVar3 == '0') {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
          }
        }
        if (bVar5 == 3) {
          if (cVar3 != '*') {
            lVar6 = param_1 + 0x2c;
            goto LAB_1804f8bd3;
          }
          piVar1 = *(int **)(param_1 + 0x18);
          *(int **)(param_1 + 0x18) = piVar1 + 2;
          iVar4 = *piVar1;
          *(int *)(param_1 + 0x2c) = iVar4;
          if (iVar4 < 0) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            *(int *)(param_1 + 0x2c) = -iVar4;
          }
LAB_1804f8c28:
          cVar3 = '\x01';
        }
        else {
          if (bVar5 == 4) {
            *(undefined4 *)(param_1 + 0x30) = 0;
            goto LAB_1804f8d83;
          }
          if (bVar5 == 5) {
            if (cVar3 == '*') {
              piVar1 = *(int **)(param_1 + 0x18);
              *(int **)(param_1 + 0x18) = piVar1 + 2;
              iVar4 = *piVar1;
              *(int *)(param_1 + 0x30) = iVar4;
              if (iVar4 < 0) {
                *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
              }
              goto LAB_1804f8c28;
            }
            lVar6 = param_1 + 0x30;
LAB_1804f8bd3:
            cVar3 = FUN_1804f8980(param_1,lVar6);
          }
          else if (bVar5 == 6) {
            cVar3 = FUN_1804fb254(param_1);
          }
          else {
            if (bVar5 != 7) {
              return 0xffffffff;
            }
            cVar3 = FUN_1804fbf34(param_1);
          }
        }
        if (cVar3 == '\0') {
          return 0xffffffff;
        }
      } while( true );
    }
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    lVar6 = *(longlong *)(param_1 + 8);
  }
LAB_1804f8e05:
  FUN_180527688(0,0,0,0,0,lVar6);
  return 0xffffffff;
LAB_1804f8d9b:
  if ((*(char *)(param_1 + 0x24) != '\0') && (*(char *)(param_1 + 0x24) != '\a')) {
LAB_1804f8ded:
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    lVar6 = *(longlong *)(param_1 + 8);
    goto LAB_1804f8e05;
  }
  *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
  iVar4 = *(int *)(param_1 + 0x468);
  goto joined_r0x0001804f8b22;
}



/* ===== 1804f8e20 FUN_1804f8e20 ===== */

undefined4 FUN_1804f8e20(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  int *piVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)(param_1 + 8);
  if (*(_iobuf **)(param_1 + 0x460) == (_iobuf *)0x0) {
    *(undefined1 *)(lVar11 + 0x30) = 1;
    *(undefined4 *)(lVar11 + 0x2c) = 0x16;
  }
  else {
    bVar5 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required
                      (*(_iobuf **)(param_1 + 0x460));
    if (!bVar5) {
      return 0xffffffff;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      piVar3 = (int *)(param_1 + 0x474);
      do {
        iVar4 = *(int *)(param_1 + 0x470);
        iVar7 = iVar4 + 1;
        *(int *)(param_1 + 0x470) = iVar7;
        if ((iVar7 == 3) || ((iVar4 == 1 && (*piVar3 == 1)))) {
          return *(undefined4 *)(param_1 + 0x20);
        }
        pcVar8 = *(char **)(param_1 + 0x478);
        piVar1 = (int *)(param_1 + 0x2c);
        piVar2 = (int *)(param_1 + 0x30);
        *piVar1 = 0;
        *piVar2 = 0;
        *(char **)(param_1 + 0x10) = pcVar8;
        *piVar3 = 0;
        *(undefined4 *)(param_1 + 0xde0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xde4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        while( true ) {
          cVar6 = *pcVar8;
          *(char **)(param_1 + 0x10) = pcVar8 + 1;
          *(char *)(param_1 + 0x39) = cVar6;
          if ((cVar6 == '\0') || (*(int *)(param_1 + 0x20) < 0)) break;
          if ((byte)(cVar6 - 0x20U) < 0x5b) {
            bVar9 = (&DAT_180576a91)[(ulonglong)((int)cVar6 - 0x20U & 0x7f) * 2];
          }
          else {
            bVar9 = 0;
          }
          *(undefined *)(param_1 + 0x24) =
               (&DAT_180576a90)
               [(ulonglong)((uint)bVar9 * 9 + (uint)*(byte *)(param_1 + 0x24) & 0x7f) * 2];
          cVar6 = FUN_1805005f4(param_1);
          if (cVar6 == '\0') {
            return 0xffffffff;
          }
          if (7 < *(byte *)(param_1 + 0x24)) {
LAB_1804f9216:
            lVar11 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(lVar11 + 0x30) = 1;
            *(undefined4 *)(lVar11 + 0x2c) = 0x16;
            lVar11 = *(longlong *)(param_1 + 8);
            goto LAB_1804f8e65;
          }
          cVar6 = *(char *)(param_1 + 0x24);
          if (cVar6 == '\0') {
            if (*(int *)(param_1 + 0x470) == 1) {
              if (*piVar3 != 2) goto LAB_1804f90ea;
            }
            else if ((*(int *)(param_1 + 0x470) != 2) || (*piVar3 != 0)) {
LAB_1804f90ea:
              lVar11 = *(longlong *)(param_1 + 8);
              *(undefined1 *)(param_1 + 0x4c) = 0;
              if (*(char *)(lVar11 + 0x28) == '\0') {
                FUN_1805002a0(lVar11);
              }
              cVar6 = *(char *)(param_1 + 0x39);
              if ((-2 < cVar6) &&
                 ((*(ushort *)(**(longlong **)(lVar11 + 0x18) + (longlong)cVar6 * 2) & 0x8000) != 0)
                 ) {
                if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                    (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
                   (iVar7 = FUN_18050ff4c((longlong)cVar6 & 0xffffffff,
                                          *(undefined8 *)(param_1 + 0x460),
                                          *(undefined8 *)(param_1 + 8)), iVar7 == -1)) {
                  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                }
                cVar6 = **(char **)(param_1 + 0x10);
                *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
                *(char *)(param_1 + 0x39) = cVar6;
                if (cVar6 == '\0') {
                  lVar11 = *(longlong *)(param_1 + 8);
                  *(undefined1 *)(lVar11 + 0x30) = 1;
                  *(undefined4 *)(lVar11 + 0x2c) = 0x16;
                  FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
                  goto LAB_1804f9216;
                }
              }
              if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                  (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
                 (iVar7 = FUN_18050ff4c((int)cVar6,*(undefined8 *)(param_1 + 0x460),
                                        *(undefined8 *)(param_1 + 8)), iVar7 == -1)) {
                *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              }
            }
          }
          else if (cVar6 == '\x01') {
            *piVar1 = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x28) = 0;
            *piVar2 = -1;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          else if (cVar6 == '\x02') {
            cVar6 = *(char *)(param_1 + 0x39);
            if (cVar6 == ' ') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (cVar6 == '#') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (cVar6 == '+') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (cVar6 == '-') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (cVar6 == '0') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else if (cVar6 == '\x03') {
            if (*(char *)(param_1 + 0x39) == '*') {
              cVar6 = FUN_1804fffc0(param_1);
              if (cVar6 == '\0') {
                return 0xffffffff;
              }
              if ((*(int *)(param_1 + 0x470) == 1) && (*piVar3 != 1)) goto LAB_1804f91bd;
              if (*piVar1 < 0) {
                *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                *piVar1 = -*piVar1;
              }
LAB_1804f9058:
              cVar6 = '\x01';
            }
            else {
              piVar10 = piVar1;
LAB_1804f8fe3:
              cVar6 = FUN_1804f8980(param_1,piVar10);
            }
LAB_1804f905a:
            if (cVar6 == '\0') {
              return 0xffffffff;
            }
          }
          else if (cVar6 == '\x04') {
            *piVar2 = 0;
          }
          else {
            if (cVar6 != '\x05') {
              if (cVar6 == '\x06') {
                cVar6 = FUN_1804fb3dc(param_1);
              }
              else {
                if (cVar6 != '\a') {
                  return 0xffffffff;
                }
                cVar6 = FUN_1804fc46c(param_1);
              }
              goto LAB_1804f905a;
            }
            if (*(char *)(param_1 + 0x39) != '*') {
              piVar10 = piVar2;
              goto LAB_1804f8fe3;
            }
            cVar6 = FUN_180500318(param_1);
            if (cVar6 == '\0') {
              return 0xffffffff;
            }
            if ((*(int *)(param_1 + 0x470) != 1) || (*piVar3 == 1)) {
              if (*piVar2 < 0) {
                *piVar2 = -1;
              }
              goto LAB_1804f9058;
            }
          }
LAB_1804f91bd:
          pcVar8 = *(char **)(param_1 + 0x10);
        }
        cVar6 = FUN_180500888(param_1);
        if (cVar6 == '\0') {
          return 0xffffffff;
        }
      } while( true );
    }
    lVar11 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar11 + 0x30) = 1;
    *(undefined4 *)(lVar11 + 0x2c) = 0x16;
    lVar11 = *(longlong *)(param_1 + 8);
  }
LAB_1804f8e65:
  FUN_180527688(0,0,0,0,0,lVar11);
  return 0xffffffff;
}



/* ===== 1804f9238 FUN_1804f9238 ===== */

undefined4 FUN_1804f9238(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 8);
  if (*(_iobuf **)(param_1 + 0x460) == (_iobuf *)0x0) {
    *(undefined1 *)(lVar7 + 0x30) = 1;
    *(undefined4 *)(lVar7 + 0x2c) = 0x16;
  }
  else {
    bVar2 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required
                      (*(_iobuf **)(param_1 + 0x460));
    if (!bVar2) {
      return 0xffffffff;
    }
    pcVar6 = *(char **)(param_1 + 0x10);
    if (pcVar6 != (char *)0x0) {
      iVar4 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar4;
      do {
        if (iVar4 == 2) {
          return *(undefined4 *)(param_1 + 0x20);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        cVar3 = *pcVar6;
        while( true ) {
          pcVar6 = pcVar6 + 1;
          *(char **)(param_1 + 0x10) = pcVar6;
          *(char *)(param_1 + 0x39) = cVar3;
          if ((cVar3 == '\0') || (*(int *)(param_1 + 0x20) < 0)) break;
          if ((byte)(cVar3 - 0x20U) < 0x5b) {
            bVar5 = (&DAT_180576991)[(ulonglong)((int)cVar3 - 0x20U & 0x7f) * 2];
          }
          else {
            bVar5 = 0;
          }
          bVar5 = (&DAT_180576990)
                  [(ulonglong)((uint)*(byte *)(param_1 + 0x24) + (uint)bVar5 * 8 & 0x7f) * 2];
          *(byte *)(param_1 + 0x24) = bVar5;
          if (7 < bVar5) {
LAB_1804f9588:
            lVar7 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(lVar7 + 0x30) = 1;
            *(undefined4 *)(lVar7 + 0x2c) = 0x16;
            lVar7 = *(longlong *)(param_1 + 8);
            goto LAB_1804f95a0;
          }
          if (bVar5 == 0) {
            lVar7 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(param_1 + 0x4c) = 0;
            if (*(char *)(lVar7 + 0x28) == '\0') {
              FUN_1805002a0(lVar7);
            }
            cVar3 = *(char *)(param_1 + 0x39);
            if ((-2 < cVar3) &&
               ((*(ushort *)(**(longlong **)(lVar7 + 0x18) + (longlong)cVar3 * 2) & 0x8000) != 0)) {
              if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                  (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
                 (iVar4 = FUN_18050ff4c((longlong)cVar3 & 0xffffffff,
                                        *(undefined8 *)(param_1 + 0x460),
                                        *(undefined8 *)(param_1 + 8)), iVar4 == -1)) {
                *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              }
              cVar3 = **(char **)(param_1 + 0x10);
              *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
              *(char *)(param_1 + 0x39) = cVar3;
              if (cVar3 == '\0') {
                lVar7 = *(longlong *)(param_1 + 8);
                *(undefined1 *)(lVar7 + 0x30) = 1;
                *(undefined4 *)(lVar7 + 0x2c) = 0x16;
                FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
                goto LAB_1804f9588;
              }
            }
            if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
               (iVar4 = FUN_18050ff4c((int)cVar3,*(undefined8 *)(param_1 + 0x460),
                                      *(undefined8 *)(param_1 + 8)), iVar4 == -1)) {
              *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
            }
            else {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            }
          }
          else if (bVar5 == 1) {
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          else if (bVar5 == 2) {
            if (cVar3 == ' ') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (cVar3 == '#') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (cVar3 == '+') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (cVar3 == '-') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (cVar3 == '0') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else {
            if (bVar5 == 3) {
              if (cVar3 == '*') {
                piVar1 = *(int **)(param_1 + 0x18);
                *(int **)(param_1 + 0x18) = piVar1 + 2;
                iVar4 = *piVar1;
                *(int *)(param_1 + 0x2c) = iVar4;
                if (iVar4 < 0) {
                  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                  *(int *)(param_1 + 0x2c) = -iVar4;
                }
LAB_1804f93c9:
                cVar3 = '\x01';
              }
              else {
                lVar7 = param_1 + 0x2c;
LAB_1804f9373:
                cVar3 = FUN_1804f8980(param_1,lVar7);
              }
            }
            else {
              if (bVar5 == 4) {
                *(undefined4 *)(param_1 + 0x30) = 0;
                goto LAB_1804f9525;
              }
              if (bVar5 == 5) {
                if (cVar3 == '*') {
                  piVar1 = *(int **)(param_1 + 0x18);
                  *(int **)(param_1 + 0x18) = piVar1 + 2;
                  iVar4 = *piVar1;
                  *(int *)(param_1 + 0x30) = iVar4;
                  if (iVar4 < 0) {
                    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
                  }
                  goto LAB_1804f93c9;
                }
                lVar7 = param_1 + 0x30;
                goto LAB_1804f9373;
              }
              if (bVar5 == 6) {
                cVar3 = FUN_1804fb254(param_1);
              }
              else {
                if (bVar5 != 7) {
                  return 0xffffffff;
                }
                cVar3 = FUN_1804fbf34(param_1);
              }
            }
            if (cVar3 == '\0') {
              return 0xffffffff;
            }
          }
LAB_1804f9525:
          pcVar6 = *(char **)(param_1 + 0x10);
          cVar3 = *pcVar6;
        }
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
        iVar4 = *(int *)(param_1 + 0x468);
      } while( true );
    }
    lVar7 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar7 + 0x30) = 1;
    *(undefined4 *)(lVar7 + 0x2c) = 0x16;
    lVar7 = *(longlong *)(param_1 + 8);
  }
LAB_1804f95a0:
  FUN_180527688(0,0,0,0,0,lVar7);
  return 0xffffffff;
}



/* ===== 1804f95bc FUN_1804f95bc ===== */

undefined4 FUN_1804f95bc(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined4 *)(lVar5 + 0x2c) = 0x16;
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar3 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar3;
joined_r0x0001804f9640:
      if (iVar3 == 2) {
        return *(undefined4 *)(param_1 + 0x20);
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x24) = 0;
LAB_1804f9886:
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              cVar2 = **(char **)(param_1 + 0x10);
              *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
              *(char *)(param_1 + 0x39) = cVar2;
              if ((cVar2 == '\0') || (*(int *)(param_1 + 0x20) < 0)) goto LAB_1804f989e;
              if ((byte)(cVar2 - 0x20U) < 0x5b) {
                bVar4 = (&DAT_180576a91)[(ulonglong)((int)cVar2 - 0x20U & 0x7f) * 2];
              }
              else {
                bVar4 = 0;
              }
              bVar4 = (&DAT_180576a90)
                      [(ulonglong)((uint)bVar4 * 9 + (uint)*(byte *)(param_1 + 0x24) & 0x7f) * 2];
              *(byte *)(param_1 + 0x24) = bVar4;
              if (7 < bVar4) goto LAB_1804f9906;
              if (bVar4 != 0) break;
              lVar5 = *(longlong *)(param_1 + 8);
              *(undefined1 *)(param_1 + 0x4c) = 0;
              if (*(char *)(lVar5 + 0x28) == '\0') {
                FUN_1805002a0(lVar5);
              }
              cVar2 = *(char *)(param_1 + 0x39);
              if ((-2 < cVar2) &&
                 ((*(ushort *)(**(longlong **)(lVar5 + 0x18) + (longlong)cVar2 * 2) & 0x8000) != 0))
              {
                lVar5 = *(longlong *)(param_1 + 0x460);
                if (*(longlong *)(lVar5 + 0x10) == *(longlong *)(lVar5 + 8)) {
                  if (*(char *)(lVar5 + 0x18) == '\0') {
                    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
                  }
                  else {
                    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                  }
                }
                else {
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                  *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 1;
                  *(char *)**(undefined8 **)(param_1 + 0x460) = cVar2;
                  **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
                }
                cVar2 = **(char **)(param_1 + 0x10);
                *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
                *(char *)(param_1 + 0x39) = cVar2;
                if (cVar2 == '\0') {
                  lVar5 = *(longlong *)(param_1 + 8);
                  *(undefined1 *)(lVar5 + 0x30) = 1;
                  *(undefined4 *)(lVar5 + 0x2c) = 0x16;
                  FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
                  goto LAB_1804f9906;
                }
              }
              lVar5 = *(longlong *)(param_1 + 0x460);
              if (*(longlong *)(lVar5 + 0x10) == *(longlong *)(lVar5 + 8)) {
                if (*(char *)(lVar5 + 0x18) == '\0') {
                  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                }
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 1;
                *(char *)**(undefined8 **)(param_1 + 0x460) = cVar2;
                **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
              }
            }
            if (bVar4 != 1) break;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          if (bVar4 != 2) break;
          if (cVar2 == ' ') {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
          }
          else if (cVar2 == '#') {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
          }
          else if (cVar2 == '+') {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
          }
          else if (cVar2 == '-') {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
          }
          else if (cVar2 == '0') {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
          }
        }
        if (bVar4 == 3) {
          if (cVar2 != '*') {
            lVar5 = param_1 + 0x2c;
            goto LAB_1804f96f5;
          }
          piVar1 = *(int **)(param_1 + 0x18);
          *(int **)(param_1 + 0x18) = piVar1 + 2;
          iVar3 = *piVar1;
          *(int *)(param_1 + 0x2c) = iVar3;
          if (iVar3 < 0) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            *(int *)(param_1 + 0x2c) = -iVar3;
          }
LAB_1804f974a:
          cVar2 = '\x01';
        }
        else {
          if (bVar4 == 4) {
            *(undefined4 *)(param_1 + 0x30) = 0;
            goto LAB_1804f9886;
          }
          if (bVar4 == 5) {
            if (cVar2 == '*') {
              piVar1 = *(int **)(param_1 + 0x18);
              *(int **)(param_1 + 0x18) = piVar1 + 2;
              iVar3 = *piVar1;
              *(int *)(param_1 + 0x30) = iVar3;
              if (iVar3 < 0) {
                *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
              }
              goto LAB_1804f974a;
            }
            lVar5 = param_1 + 0x30;
LAB_1804f96f5:
            cVar2 = FUN_1804f8980(param_1,lVar5);
          }
          else if (bVar4 == 6) {
            cVar2 = FUN_1804fb564(param_1);
          }
          else {
            if (bVar4 != 7) {
              return 0xffffffff;
            }
            cVar2 = FUN_1804fc9bc(param_1);
          }
        }
        if (cVar2 == '\0') {
          return 0xffffffff;
        }
      } while( true );
    }
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined4 *)(lVar5 + 0x2c) = 0x16;
    lVar5 = *(longlong *)(param_1 + 8);
  }
LAB_1804f9614:
  FUN_180527688(0,0,0,0,0,lVar5);
  return 0xffffffff;
LAB_1804f989e:
  if ((*(char *)(param_1 + 0x24) != '\0') && (*(char *)(param_1 + 0x24) != '\a')) {
LAB_1804f9906:
    lVar5 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined4 *)(lVar5 + 0x2c) = 0x16;
    lVar5 = *(longlong *)(param_1 + 8);
    goto LAB_1804f9614;
  }
  *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
  iVar3 = *(int *)(param_1 + 0x468);
  goto joined_r0x0001804f9640;
}



/* ===== 1804f9924 FUN_1804f9924 ===== */

undefined4 FUN_1804f9924(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  char *pcVar7;
  byte bVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    *(undefined1 *)(lVar9 + 0x30) = 1;
    *(undefined4 *)(lVar9 + 0x2c) = 0x16;
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      piVar4 = (int *)(param_1 + 0x474);
      do {
        iVar5 = *(int *)(param_1 + 0x470);
        iVar1 = iVar5 + 1;
        *(int *)(param_1 + 0x470) = iVar1;
        if ((iVar1 == 3) || ((iVar5 == 1 && (*piVar4 == 1)))) {
          return *(undefined4 *)(param_1 + 0x20);
        }
        pcVar7 = *(char **)(param_1 + 0x478);
        piVar2 = (int *)(param_1 + 0x2c);
        piVar3 = (int *)(param_1 + 0x30);
        *piVar2 = 0;
        *piVar3 = 0;
        *(char **)(param_1 + 0x10) = pcVar7;
        *piVar4 = 0;
        *(undefined4 *)(param_1 + 0xde0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xde4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        while( true ) {
          cVar6 = *pcVar7;
          *(char **)(param_1 + 0x10) = pcVar7 + 1;
          *(char *)(param_1 + 0x39) = cVar6;
          if ((cVar6 == '\0') || (*(int *)(param_1 + 0x20) < 0)) break;
          if ((byte)(cVar6 - 0x20U) < 0x5b) {
            bVar8 = (&DAT_180576a91)[(ulonglong)((int)cVar6 - 0x20U & 0x7f) * 2];
          }
          else {
            bVar8 = 0;
          }
          *(undefined *)(param_1 + 0x24) =
               (&DAT_180576a90)
               [(ulonglong)((uint)bVar8 * 9 + (uint)*(byte *)(param_1 + 0x24) & 0x7f) * 2];
          cVar6 = FUN_1805005f4(param_1);
          if (cVar6 == '\0') {
            return 0xffffffff;
          }
          if (7 < *(byte *)(param_1 + 0x24)) {
LAB_1804f9ce7:
            lVar9 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(lVar9 + 0x30) = 1;
            *(undefined4 *)(lVar9 + 0x2c) = 0x16;
            lVar9 = *(longlong *)(param_1 + 8);
            goto LAB_1804f9980;
          }
          cVar6 = *(char *)(param_1 + 0x24);
          if (cVar6 == '\0') {
            if (*(int *)(param_1 + 0x470) == 1) {
              if (*piVar4 != 2) goto LAB_1804f9bc4;
            }
            else if ((*(int *)(param_1 + 0x470) != 2) || (*piVar4 != 0)) {
LAB_1804f9bc4:
              lVar9 = *(longlong *)(param_1 + 8);
              *(undefined1 *)(param_1 + 0x4c) = 0;
              if (*(char *)(lVar9 + 0x28) == '\0') {
                FUN_1805002a0(lVar9);
              }
              cVar6 = *(char *)(param_1 + 0x39);
              if ((-2 < cVar6) &&
                 ((*(ushort *)(**(longlong **)(lVar9 + 0x18) + (longlong)cVar6 * 2) & 0x8000) != 0))
              {
                lVar9 = *(longlong *)(param_1 + 0x460);
                if (*(longlong *)(lVar9 + 0x10) == *(longlong *)(lVar9 + 8)) {
                  if (*(char *)(lVar9 + 0x18) == '\0') {
                    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
                  }
                  else {
                    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                  }
                }
                else {
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                  *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 1;
                  *(char *)**(undefined8 **)(param_1 + 0x460) = cVar6;
                  **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
                }
                cVar6 = **(char **)(param_1 + 0x10);
                *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
                *(char *)(param_1 + 0x39) = cVar6;
                if (cVar6 == '\0') {
                  lVar9 = *(longlong *)(param_1 + 8);
                  *(undefined1 *)(lVar9 + 0x30) = 1;
                  *(undefined4 *)(lVar9 + 0x2c) = 0x16;
                  FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
                  goto LAB_1804f9ce7;
                }
              }
              lVar9 = *(longlong *)(param_1 + 0x460);
              if (*(longlong *)(lVar9 + 0x10) == *(longlong *)(lVar9 + 8)) {
                if (*(char *)(lVar9 + 0x18) == '\0') {
                  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                }
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 1;
                *(char *)**(undefined8 **)(param_1 + 0x460) = cVar6;
                **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
              }
            }
          }
          else if (cVar6 == '\x01') {
            *piVar2 = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x28) = 0;
            *piVar3 = -1;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          else if (cVar6 == '\x02') {
            cVar6 = *(char *)(param_1 + 0x39);
            if (cVar6 == ' ') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (cVar6 == '#') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (cVar6 == '+') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (cVar6 == '-') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (cVar6 == '0') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else if (cVar6 == '\x03') {
            if (*(char *)(param_1 + 0x39) == '*') {
              cVar6 = FUN_1804fffc0(param_1);
              if (cVar6 == '\0') {
                return 0xffffffff;
              }
              if ((*(int *)(param_1 + 0x470) == 1) && (*piVar4 != 1)) goto LAB_1804f9c8e;
              if (*piVar2 < 0) {
                *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                *piVar2 = -*piVar2;
              }
LAB_1804f9b32:
              cVar6 = '\x01';
            }
            else {
LAB_1804f9abd:
              cVar6 = FUN_1804f8980();
            }
LAB_1804f9b34:
            if (cVar6 == '\0') {
              return 0xffffffff;
            }
          }
          else if (cVar6 == '\x04') {
            *piVar3 = 0;
          }
          else {
            if (cVar6 != '\x05') {
              if (cVar6 == '\x06') {
                cVar6 = FUN_1804fb6ec(param_1);
              }
              else {
                if (cVar6 != '\a') {
                  return 0xffffffff;
                }
                cVar6 = FUN_1804fce2c(param_1);
              }
              goto LAB_1804f9b34;
            }
            if (*(char *)(param_1 + 0x39) != '*') goto LAB_1804f9abd;
            cVar6 = FUN_180500318(param_1);
            if (cVar6 == '\0') {
              return 0xffffffff;
            }
            if ((*(int *)(param_1 + 0x470) != 1) || (*piVar4 == 1)) {
              if (*piVar3 < 0) {
                *piVar3 = -1;
              }
              goto LAB_1804f9b32;
            }
          }
LAB_1804f9c8e:
          pcVar7 = *(char **)(param_1 + 0x10);
        }
        cVar6 = FUN_180500888(param_1);
        if (cVar6 == '\0') {
          return 0xffffffff;
        }
      } while( true );
    }
    *(undefined1 *)(lVar9 + 0x30) = 1;
    *(undefined4 *)(lVar9 + 0x2c) = 0x16;
    lVar9 = *(longlong *)(param_1 + 8);
  }
LAB_1804f9980:
  FUN_180527688(0,0,0,0,0,lVar9);
  return 0xffffffff;
}



/* ===== 1804f9d24 FUN_1804f9d24 ===== */

undefined4 FUN_1804f9d24(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  char *pcVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
  }
  else {
    pcVar5 = *(char **)(param_1 + 0x10);
    if (pcVar5 != (char *)0x0) {
      iVar3 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar3;
      do {
        if (iVar3 == 2) {
          return *(undefined4 *)(param_1 + 0x20);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        cVar2 = *pcVar5;
        while( true ) {
          pcVar5 = pcVar5 + 1;
          *(char **)(param_1 + 0x10) = pcVar5;
          *(char *)(param_1 + 0x39) = cVar2;
          if ((cVar2 == '\0') || (*(int *)(param_1 + 0x20) < 0)) break;
          if ((byte)(cVar2 - 0x20U) < 0x5b) {
            bVar4 = (&DAT_180576991)[(ulonglong)((int)cVar2 - 0x20U & 0x7f) * 2];
          }
          else {
            bVar4 = 0;
          }
          bVar4 = (&DAT_180576990)
                  [(ulonglong)((uint)*(byte *)(param_1 + 0x24) + (uint)bVar4 * 8 & 0x7f) * 2];
          *(byte *)(param_1 + 0x24) = bVar4;
          if (7 < bVar4) {
LAB_1804fa075:
            lVar6 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(lVar6 + 0x30) = 1;
            *(undefined4 *)(lVar6 + 0x2c) = 0x16;
            lVar6 = *(longlong *)(param_1 + 8);
            goto LAB_1804f9d7f;
          }
          if (bVar4 == 0) {
            lVar6 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(param_1 + 0x4c) = 0;
            if (*(char *)(lVar6 + 0x28) == '\0') {
              FUN_1805002a0(lVar6);
            }
            cVar2 = *(char *)(param_1 + 0x39);
            if ((-2 < cVar2) &&
               ((*(ushort *)(**(longlong **)(lVar6 + 0x18) + (longlong)cVar2 * 2) & 0x8000) != 0)) {
              lVar6 = *(longlong *)(param_1 + 0x460);
              if (*(longlong *)(lVar6 + 0x10) == *(longlong *)(lVar6 + 8)) {
                if (*(char *)(lVar6 + 0x18) == '\0') {
                  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                }
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 1;
                *(char *)**(undefined8 **)(param_1 + 0x460) = cVar2;
                **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
              }
              cVar2 = **(char **)(param_1 + 0x10);
              *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
              *(char *)(param_1 + 0x39) = cVar2;
              if (cVar2 == '\0') {
                lVar6 = *(longlong *)(param_1 + 8);
                *(undefined1 *)(lVar6 + 0x30) = 1;
                *(undefined4 *)(lVar6 + 0x2c) = 0x16;
                FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
                goto LAB_1804fa075;
              }
            }
            lVar6 = *(longlong *)(param_1 + 0x460);
            if (*(longlong *)(lVar6 + 0x10) == *(longlong *)(lVar6 + 8)) {
              if (*(char *)(lVar6 + 0x18) == '\0') {
                *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              }
            }
            else {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 1;
              *(char *)**(undefined8 **)(param_1 + 0x460) = cVar2;
              **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
            }
          }
          else if (bVar4 == 1) {
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          else if (bVar4 == 2) {
            if (cVar2 == ' ') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (cVar2 == '#') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (cVar2 == '+') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (cVar2 == '-') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (cVar2 == '0') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else {
            if (bVar4 == 3) {
              if (cVar2 == '*') {
                piVar1 = *(int **)(param_1 + 0x18);
                *(int **)(param_1 + 0x18) = piVar1 + 2;
                iVar3 = *piVar1;
                *(int *)(param_1 + 0x2c) = iVar3;
                if (iVar3 < 0) {
                  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                  *(int *)(param_1 + 0x2c) = -iVar3;
                }
LAB_1804f9ebb:
                cVar2 = '\x01';
              }
              else {
                lVar6 = param_1 + 0x2c;
LAB_1804f9e65:
                cVar2 = FUN_1804f8980(param_1,lVar6);
              }
            }
            else {
              if (bVar4 == 4) {
                *(undefined4 *)(param_1 + 0x30) = 0;
                goto LAB_1804f9ffc;
              }
              if (bVar4 == 5) {
                if (cVar2 == '*') {
                  piVar1 = *(int **)(param_1 + 0x18);
                  *(int **)(param_1 + 0x18) = piVar1 + 2;
                  iVar3 = *piVar1;
                  *(int *)(param_1 + 0x30) = iVar3;
                  if (iVar3 < 0) {
                    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
                  }
                  goto LAB_1804f9ebb;
                }
                lVar6 = param_1 + 0x30;
                goto LAB_1804f9e65;
              }
              if (bVar4 == 6) {
                cVar2 = FUN_1804fb564(param_1);
              }
              else {
                if (bVar4 != 7) {
                  return 0xffffffff;
                }
                cVar2 = FUN_1804fc9bc(param_1);
              }
            }
            if (cVar2 == '\0') {
              return 0xffffffff;
            }
          }
LAB_1804f9ffc:
          pcVar5 = *(char **)(param_1 + 0x10);
          cVar2 = *pcVar5;
        }
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
        iVar3 = *(int *)(param_1 + 0x468);
      } while( true );
    }
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    lVar6 = *(longlong *)(param_1 + 8);
  }
LAB_1804f9d7f:
  FUN_180527688(0,0,0,0,0,lVar6);
  return 0xffffffff;
}



/* ===== 1804fa094 FUN_1804fa094 ===== */

undefined4 FUN_1804fa094(longlong param_1)

{
  ushort uVar1;
  int *piVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  byte bVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    *(undefined1 *)(lVar7 + 0x30) = 1;
    *(undefined4 *)(lVar7 + 0x2c) = 0x16;
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar5 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar5;
joined_r0x0001804fa118:
      if (iVar5 == 2) {
        return *(undefined4 *)(param_1 + 0x20);
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x24) = 0;
LAB_1804fa2dc:
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar1 = **(ushort **)(param_1 + 0x10);
              *(ushort **)(param_1 + 0x10) = *(ushort **)(param_1 + 0x10) + 1;
              *(ushort *)(param_1 + 0x3a) = uVar1;
              if ((uVar1 == 0) || (*(int *)(param_1 + 0x20) < 0)) goto LAB_1804fa2fb;
              if ((ushort)(uVar1 - 0x20) < 0x5b) {
                bVar6 = (&DAT_180576a91)[(ulonglong)(uVar1 - 0x20 & 0x7f) * 2];
              }
              else {
                bVar6 = 0;
              }
              bVar6 = (&DAT_180576a90)
                      [(ulonglong)((uint)bVar6 * 9 + (uint)*(byte *)(param_1 + 0x24) & 0x7f) * 2];
              *(byte *)(param_1 + 0x24) = bVar6;
              if (7 < bVar6) goto LAB_1804fa337;
              if (bVar6 != 0) break;
              *(undefined1 *)(param_1 + 0x4c) = 1;
              if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                  (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
                 (sVar4 = FUN_1805290f8((uint)uVar1,*(undefined8 *)(param_1 + 0x460)), sVar4 == -1))
              {
                *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              }
            }
            if (bVar6 != 1) break;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          if (bVar6 != 2) break;
          if (uVar1 == 0x20) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
          }
          else if (uVar1 == 0x23) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
          }
          else if (uVar1 == 0x2b) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
          }
          else if (uVar1 == 0x2d) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
          }
          else if (uVar1 == 0x30) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
          }
        }
        if (bVar6 == 3) {
          if (uVar1 != 0x2a) {
            lVar7 = param_1 + 0x2c;
            goto LAB_1804fa1d9;
          }
          piVar2 = *(int **)(param_1 + 0x18);
          *(int **)(param_1 + 0x18) = piVar2 + 2;
          iVar5 = *piVar2;
          *(int *)(param_1 + 0x2c) = iVar5;
          if (iVar5 < 0) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            *(int *)(param_1 + 0x2c) = -iVar5;
          }
LAB_1804fa230:
          cVar3 = '\x01';
        }
        else {
          if (bVar6 == 4) {
            *(undefined4 *)(param_1 + 0x30) = 0;
            goto LAB_1804fa2dc;
          }
          if (bVar6 == 5) {
            if (uVar1 == 0x2a) {
              piVar2 = *(int **)(param_1 + 0x18);
              *(int **)(param_1 + 0x18) = piVar2 + 2;
              iVar5 = *piVar2;
              *(int *)(param_1 + 0x30) = iVar5;
              if (iVar5 < 0) {
                *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
              }
              goto LAB_1804fa230;
            }
            lVar7 = param_1 + 0x30;
LAB_1804fa1d9:
            cVar3 = FUN_1804f8a10(param_1,lVar7);
          }
          else if (bVar6 == 6) {
            cVar3 = FUN_1804fb874(param_1);
          }
          else {
            if (bVar6 != 7) {
              return 0xffffffff;
            }
            cVar3 = FUN_1804fd2dc(param_1);
          }
        }
        if (cVar3 == '\0') {
          return 0xffffffff;
        }
      } while( true );
    }
    *(undefined1 *)(lVar7 + 0x30) = 1;
    *(undefined4 *)(lVar7 + 0x2c) = 0x16;
    lVar7 = *(longlong *)(param_1 + 8);
  }
LAB_1804fa0ec:
  FUN_180527688(0,0,0,0,0,lVar7);
  return 0xffffffff;
LAB_1804fa2fb:
  if ((*(char *)(param_1 + 0x24) != '\0') && (*(char *)(param_1 + 0x24) != '\a')) {
LAB_1804fa337:
    lVar7 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar7 + 0x30) = 1;
    *(undefined4 *)(lVar7 + 0x2c) = 0x16;
    lVar7 = *(longlong *)(param_1 + 8);
    goto LAB_1804fa0ec;
  }
  *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
  iVar5 = *(int *)(param_1 + 0x468);
  goto joined_r0x0001804fa118;
}



/* ===== 1804fa354 FUN_1804fa354 ===== */

undefined4 FUN_1804fa354(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  ushort uVar5;
  int iVar6;
  char cVar7;
  short sVar8;
  ushort *puVar9;
  byte bVar10;
  int *piVar11;
  longlong lVar12;
  
  lVar12 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    *(undefined1 *)(lVar12 + 0x30) = 1;
    *(undefined4 *)(lVar12 + 0x2c) = 0x16;
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      piVar4 = (int *)(param_1 + 0x474);
      do {
        iVar6 = *(int *)(param_1 + 0x470);
        iVar1 = iVar6 + 1;
        *(int *)(param_1 + 0x470) = iVar1;
        if ((iVar1 == 3) || ((iVar6 == 1 && (*piVar4 == 1)))) {
          return *(undefined4 *)(param_1 + 0x20);
        }
        puVar9 = *(ushort **)(param_1 + 0x478);
        piVar2 = (int *)(param_1 + 0x2c);
        piVar3 = (int *)(param_1 + 0x30);
        *piVar2 = 0;
        *piVar3 = 0;
        *(ushort **)(param_1 + 0x10) = puVar9;
        *piVar4 = 0;
        *(undefined4 *)(param_1 + 0xde0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xde4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        while( true ) {
          uVar5 = *puVar9;
          *(ushort **)(param_1 + 0x10) = puVar9 + 1;
          *(ushort *)(param_1 + 0x3a) = uVar5;
          if ((uVar5 == 0) || (*(int *)(param_1 + 0x20) < 0)) break;
          if ((ushort)(uVar5 - 0x20) < 0x5b) {
            bVar10 = (&DAT_180576a91)[(ulonglong)(uVar5 - 0x20 & 0x7f) * 2];
          }
          else {
            bVar10 = 0;
          }
          *(undefined *)(param_1 + 0x24) =
               (&DAT_180576a90)
               [(ulonglong)((uint)bVar10 * 9 + (uint)*(byte *)(param_1 + 0x24) & 0x7f) * 2];
          cVar7 = FUN_180500738(param_1);
          if (cVar7 == '\0') {
            return 0xffffffff;
          }
          if (7 < *(byte *)(param_1 + 0x24)) {
            lVar12 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(lVar12 + 0x30) = 1;
            *(undefined4 *)(lVar12 + 0x2c) = 0x16;
            lVar12 = *(longlong *)(param_1 + 8);
            goto LAB_1804fa3b0;
          }
          cVar7 = *(char *)(param_1 + 0x24);
          if (cVar7 == '\0') {
            if (*(int *)(param_1 + 0x470) == 1) {
              if (*piVar4 != 2) goto LAB_1804fa5fb;
            }
            else if ((*(int *)(param_1 + 0x470) != 2) || (*piVar4 != 0)) {
LAB_1804fa5fb:
              *(undefined1 *)(param_1 + 0x4c) = 1;
              if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                  (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
                 (sVar8 = FUN_1805290f8(*(undefined2 *)(param_1 + 0x3a),
                                        *(undefined8 *)(param_1 + 0x460),
                                        *(undefined8 *)(param_1 + 8)), sVar8 == -1)) {
                *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              }
            }
          }
          else if (cVar7 == '\x01') {
            *piVar2 = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x28) = 0;
            *piVar3 = -1;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          else if (cVar7 == '\x02') {
            sVar8 = *(short *)(param_1 + 0x3a);
            if (sVar8 == 0x20) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (sVar8 == 0x23) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (sVar8 == 0x2b) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (sVar8 == 0x2d) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (sVar8 == 0x30) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else if (cVar7 == '\x03') {
            if (*(short *)(param_1 + 0x3a) == 0x2a) {
              cVar7 = FUN_18050012c(param_1);
              if (cVar7 == '\0') {
                return 0xffffffff;
              }
              if ((*(int *)(param_1 + 0x470) == 1) && (*piVar4 != 1)) goto LAB_1804fa646;
              if (*piVar2 < 0) {
                *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                *piVar2 = -*piVar2;
              }
LAB_1804fa56b:
              cVar7 = '\x01';
            }
            else {
              piVar11 = piVar2;
LAB_1804fa4f7:
              cVar7 = FUN_1804f8a10(param_1,piVar11);
            }
LAB_1804fa56d:
            if (cVar7 == '\0') {
              return 0xffffffff;
            }
          }
          else if (cVar7 == '\x04') {
            *piVar3 = 0;
          }
          else {
            if (cVar7 != '\x05') {
              if (cVar7 == '\x06') {
                cVar7 = FUN_1804fba24(param_1);
              }
              else {
                if (cVar7 != '\a') {
                  return 0xffffffff;
                }
                cVar7 = FUN_1804fd8d8(param_1);
              }
              goto LAB_1804fa56d;
            }
            if (*(short *)(param_1 + 0x3a) != 0x2a) {
              piVar11 = piVar3;
              goto LAB_1804fa4f7;
            }
            cVar7 = FUN_180500484(param_1);
            if (cVar7 == '\0') {
              return 0xffffffff;
            }
            if ((*(int *)(param_1 + 0x470) != 1) || (*piVar4 == 1)) {
              if (*piVar3 < 0) {
                *piVar3 = -1;
              }
              goto LAB_1804fa56b;
            }
          }
LAB_1804fa646:
          puVar9 = *(ushort **)(param_1 + 0x10);
        }
        cVar7 = FUN_180500888(param_1);
        if (cVar7 == '\0') {
          return 0xffffffff;
        }
      } while( true );
    }
    *(undefined1 *)(lVar12 + 0x30) = 1;
    *(undefined4 *)(lVar12 + 0x2c) = 0x16;
    lVar12 = *(longlong *)(param_1 + 8);
  }
LAB_1804fa3b0:
  FUN_180527688(0,0,0,0,0,lVar12);
  return 0xffffffff;
}



/* ===== 1804fa6b4 FUN_1804fa6b4 ===== */

undefined4 FUN_1804fa6b4(longlong param_1)

{
  ushort uVar1;
  int *piVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  byte bVar6;
  ushort *puVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    *(undefined1 *)(lVar8 + 0x30) = 1;
    *(undefined4 *)(lVar8 + 0x2c) = 0x16;
  }
  else {
    puVar7 = *(ushort **)(param_1 + 0x10);
    if (puVar7 != (ushort *)0x0) {
      iVar5 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar5;
      do {
        if (iVar5 == 2) {
          return *(undefined4 *)(param_1 + 0x20);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        uVar1 = *puVar7;
        while( true ) {
          puVar7 = puVar7 + 1;
          *(ushort **)(param_1 + 0x10) = puVar7;
          *(ushort *)(param_1 + 0x3a) = uVar1;
          if ((uVar1 == 0) || (*(int *)(param_1 + 0x20) < 0)) break;
          if ((ushort)(uVar1 - 0x20) < 0x5b) {
            bVar6 = (&DAT_180576991)[(ulonglong)(uVar1 - 0x20 & 0x7f) * 2];
          }
          else {
            bVar6 = 0;
          }
          bVar6 = (&DAT_180576990)
                  [(ulonglong)((uint)*(byte *)(param_1 + 0x24) + (uint)bVar6 * 8 & 0x7f) * 2];
          *(byte *)(param_1 + 0x24) = bVar6;
          if (7 < bVar6) {
            lVar8 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(lVar8 + 0x30) = 1;
            *(undefined4 *)(lVar8 + 0x2c) = 0x16;
            lVar8 = *(longlong *)(param_1 + 8);
            goto LAB_1804fa70f;
          }
          if (bVar6 == 0) {
            *(undefined1 *)(param_1 + 0x4c) = 1;
            if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
               (sVar4 = FUN_1805290f8(uVar1,*(undefined8 *)(param_1 + 0x460)), sVar4 == -1)) {
              *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
            }
            else {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            }
          }
          else if (bVar6 == 1) {
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          else if (bVar6 == 2) {
            if (uVar1 == 0x20) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (uVar1 == 0x23) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (uVar1 == 0x2b) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (uVar1 == 0x2d) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (uVar1 == 0x30) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else {
            if (bVar6 == 3) {
              if (uVar1 == 0x2a) {
                piVar2 = *(int **)(param_1 + 0x18);
                *(int **)(param_1 + 0x18) = piVar2 + 2;
                iVar5 = *piVar2;
                *(int *)(param_1 + 0x2c) = iVar5;
                if (iVar5 < 0) {
                  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                  *(int *)(param_1 + 0x2c) = -iVar5;
                }
LAB_1804fa858:
                cVar3 = '\x01';
              }
              else {
                lVar8 = param_1 + 0x2c;
LAB_1804fa801:
                cVar3 = FUN_1804f8a10(param_1,lVar8);
              }
            }
            else {
              if (bVar6 == 4) {
                *(undefined4 *)(param_1 + 0x30) = 0;
                goto LAB_1804fa904;
              }
              if (bVar6 == 5) {
                if (uVar1 == 0x2a) {
                  piVar2 = *(int **)(param_1 + 0x18);
                  *(int **)(param_1 + 0x18) = piVar2 + 2;
                  iVar5 = *piVar2;
                  *(int *)(param_1 + 0x30) = iVar5;
                  if (iVar5 < 0) {
                    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
                  }
                  goto LAB_1804fa858;
                }
                lVar8 = param_1 + 0x30;
                goto LAB_1804fa801;
              }
              if (bVar6 == 6) {
                cVar3 = FUN_1804fb874(param_1);
              }
              else {
                if (bVar6 != 7) {
                  return 0xffffffff;
                }
                cVar3 = FUN_1804fd2dc(param_1);
              }
            }
            if (cVar3 == '\0') {
              return 0xffffffff;
            }
          }
LAB_1804fa904:
          puVar7 = *(ushort **)(param_1 + 0x10);
          uVar1 = *puVar7;
        }
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
        iVar5 = *(int *)(param_1 + 0x468);
      } while( true );
    }
    *(undefined1 *)(lVar8 + 0x30) = 1;
    *(undefined4 *)(lVar8 + 0x2c) = 0x16;
    lVar8 = *(longlong *)(param_1 + 8);
  }
LAB_1804fa70f:
  FUN_180527688(0,0,0,0,0,lVar8);
  return 0xffffffff;
}



/* ===== 1804fa974 FUN_1804fa974 ===== */

undefined4 FUN_1804fa974(longlong param_1)

{
  ushort uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar4 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar4;
joined_r0x0001804fa9f8:
      if (iVar4 == 2) {
        return *(undefined4 *)(param_1 + 0x20);
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x24) = 0;
LAB_1804fabb9:
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar1 = **(ushort **)(param_1 + 0x10);
              *(ushort **)(param_1 + 0x10) = *(ushort **)(param_1 + 0x10) + 1;
              *(ushort *)(param_1 + 0x3a) = uVar1;
              if ((uVar1 == 0) || (iVar4 = *(int *)(param_1 + 0x20), iVar4 < 0)) goto LAB_1804fabd5;
              if ((ushort)(uVar1 - 0x20) < 0x5b) {
                bVar5 = (&DAT_180576a91)[(ulonglong)(uVar1 - 0x20 & 0x7f) * 2];
              }
              else {
                bVar5 = 0;
              }
              bVar5 = (&DAT_180576a90)
                      [(ulonglong)((uint)bVar5 * 9 + (uint)*(byte *)(param_1 + 0x24) & 0x7f) * 2];
              *(byte *)(param_1 + 0x24) = bVar5;
              if (7 < bVar5) goto LAB_1804fac11;
              if (bVar5 != 0) break;
              *(undefined1 *)(param_1 + 0x4c) = 1;
              lVar6 = *(longlong *)(param_1 + 0x460);
              if (*(longlong *)(lVar6 + 0x10) == *(longlong *)(lVar6 + 8)) {
                if (*(char *)(lVar6 + 0x18) == '\0') {
                  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 0x20) = iVar4 + 1;
                }
              }
              else {
                *(int *)(param_1 + 0x20) = iVar4 + 1;
                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 1;
                *(ushort *)**(undefined8 **)(param_1 + 0x460) = uVar1;
                **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 2;
              }
            }
            if (bVar5 != 1) break;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          if (bVar5 != 2) break;
          if (uVar1 == 0x20) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
          }
          else if (uVar1 == 0x23) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
          }
          else if (uVar1 == 0x2b) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
          }
          else if (uVar1 == 0x2d) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
          }
          else if (uVar1 == 0x30) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
          }
        }
        if (bVar5 == 3) {
          if (uVar1 != 0x2a) {
            lVar6 = param_1 + 0x2c;
            goto LAB_1804faaba;
          }
          piVar2 = *(int **)(param_1 + 0x18);
          *(int **)(param_1 + 0x18) = piVar2 + 2;
          iVar4 = *piVar2;
          *(int *)(param_1 + 0x2c) = iVar4;
          if (iVar4 < 0) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            *(int *)(param_1 + 0x2c) = -iVar4;
          }
LAB_1804fab10:
          cVar3 = '\x01';
        }
        else {
          if (bVar5 == 4) {
            *(undefined4 *)(param_1 + 0x30) = 0;
            goto LAB_1804fabb9;
          }
          if (bVar5 == 5) {
            if (uVar1 == 0x2a) {
              piVar2 = *(int **)(param_1 + 0x18);
              *(int **)(param_1 + 0x18) = piVar2 + 2;
              iVar4 = *piVar2;
              *(int *)(param_1 + 0x30) = iVar4;
              if (iVar4 < 0) {
                *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
              }
              goto LAB_1804fab10;
            }
            lVar6 = param_1 + 0x30;
LAB_1804faaba:
            cVar3 = FUN_1804f8a10(param_1,lVar6);
          }
          else if (bVar5 == 6) {
            cVar3 = FUN_1804fbbd4(param_1);
          }
          else {
            if (bVar5 != 7) {
              return 0xffffffff;
            }
            cVar3 = FUN_1804fdf10(param_1);
          }
        }
        if (cVar3 == '\0') {
          return 0xffffffff;
        }
      } while( true );
    }
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    lVar6 = *(longlong *)(param_1 + 8);
  }
LAB_1804fa9cc:
  FUN_180527688(0,0,0,0,0,lVar6);
  return 0xffffffff;
LAB_1804fabd5:
  if ((*(char *)(param_1 + 0x24) != '\0') && (*(char *)(param_1 + 0x24) != '\a')) {
LAB_1804fac11:
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    lVar6 = *(longlong *)(param_1 + 8);
    goto LAB_1804fa9cc;
  }
  *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
  iVar4 = *(int *)(param_1 + 0x468);
  goto joined_r0x0001804fa9f8;
}



/* ===== 1804fac30 FUN_1804fac30 ===== */

undefined4 FUN_1804fac30(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  short sVar5;
  undefined2 uVar6;
  ushort uVar7;
  int iVar8;
  char cVar9;
  ushort *puVar10;
  byte bVar11;
  int *piVar12;
  longlong lVar13;
  
  lVar13 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    *(undefined1 *)(lVar13 + 0x30) = 1;
    *(undefined4 *)(lVar13 + 0x2c) = 0x16;
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      piVar4 = (int *)(param_1 + 0x474);
      do {
        iVar8 = *(int *)(param_1 + 0x470);
        iVar1 = iVar8 + 1;
        *(int *)(param_1 + 0x470) = iVar1;
        if ((iVar1 == 3) || ((iVar8 == 1 && (*piVar4 == 1)))) {
          return *(undefined4 *)(param_1 + 0x20);
        }
        puVar10 = *(ushort **)(param_1 + 0x478);
        piVar2 = (int *)(param_1 + 0x2c);
        piVar3 = (int *)(param_1 + 0x30);
        *piVar2 = 0;
        *piVar3 = 0;
        *(ushort **)(param_1 + 0x10) = puVar10;
        *piVar4 = 0;
        *(undefined4 *)(param_1 + 0xde0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xde4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        while( true ) {
          uVar7 = *puVar10;
          *(ushort **)(param_1 + 0x10) = puVar10 + 1;
          *(ushort *)(param_1 + 0x3a) = uVar7;
          if ((uVar7 == 0) || (*(int *)(param_1 + 0x20) < 0)) break;
          if ((ushort)(uVar7 - 0x20) < 0x5b) {
            bVar11 = (&DAT_180576a91)[(ulonglong)(uVar7 - 0x20 & 0x7f) * 2];
          }
          else {
            bVar11 = 0;
          }
          *(undefined *)(param_1 + 0x24) =
               (&DAT_180576a90)
               [(ulonglong)((uint)bVar11 * 9 + (uint)*(byte *)(param_1 + 0x24) & 0x7f) * 2];
          cVar9 = FUN_180500738(param_1);
          if (cVar9 == '\0') {
            return 0xffffffff;
          }
          if (7 < *(byte *)(param_1 + 0x24)) {
            lVar13 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(lVar13 + 0x30) = 1;
            *(undefined4 *)(lVar13 + 0x2c) = 0x16;
            lVar13 = *(longlong *)(param_1 + 8);
            goto LAB_1804fac8c;
          }
          cVar9 = *(char *)(param_1 + 0x24);
          if (cVar9 == '\0') {
            if (*(int *)(param_1 + 0x470) == 1) {
              if (*piVar4 != 2) goto LAB_1804faed7;
            }
            else if ((*(int *)(param_1 + 0x470) != 2) || (*piVar4 != 0)) {
LAB_1804faed7:
              uVar6 = *(undefined2 *)(param_1 + 0x3a);
              *(undefined1 *)(param_1 + 0x4c) = 1;
              lVar13 = *(longlong *)(param_1 + 0x460);
              if (*(longlong *)(lVar13 + 0x10) == *(longlong *)(lVar13 + 8)) {
                if (*(char *)(lVar13 + 0x18) == '\0') {
                  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                }
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 1;
                *(undefined2 *)**(undefined8 **)(param_1 + 0x460) = uVar6;
                **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 2;
              }
            }
          }
          else if (cVar9 == '\x01') {
            *piVar2 = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x28) = 0;
            *piVar3 = -1;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          else if (cVar9 == '\x02') {
            sVar5 = *(short *)(param_1 + 0x3a);
            if (sVar5 == 0x20) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (sVar5 == 0x23) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (sVar5 == 0x2b) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (sVar5 == 0x2d) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (sVar5 == 0x30) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else if (cVar9 == '\x03') {
            if (*(short *)(param_1 + 0x3a) == 0x2a) {
              cVar9 = FUN_18050012c(param_1);
              if (cVar9 == '\0') {
                return 0xffffffff;
              }
              if ((*(int *)(param_1 + 0x470) == 1) && (*piVar4 != 1)) goto LAB_1804faf20;
              if (*piVar2 < 0) {
                *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                *piVar2 = -*piVar2;
              }
LAB_1804fae47:
              cVar9 = '\x01';
            }
            else {
              piVar12 = piVar2;
LAB_1804fadd3:
              cVar9 = FUN_1804f8a10(param_1,piVar12);
            }
LAB_1804fae49:
            if (cVar9 == '\0') {
              return 0xffffffff;
            }
          }
          else if (cVar9 == '\x04') {
            *piVar3 = 0;
          }
          else {
            if (cVar9 != '\x05') {
              if (cVar9 == '\x06') {
                cVar9 = FUN_1804fbd84(param_1);
              }
              else {
                if (cVar9 != '\a') {
                  return 0xffffffff;
                }
                cVar9 = FUN_1804fe488(param_1);
              }
              goto LAB_1804fae49;
            }
            if (*(short *)(param_1 + 0x3a) != 0x2a) {
              piVar12 = piVar3;
              goto LAB_1804fadd3;
            }
            cVar9 = FUN_180500484(param_1);
            if (cVar9 == '\0') {
              return 0xffffffff;
            }
            if ((*(int *)(param_1 + 0x470) != 1) || (*piVar4 == 1)) {
              if (*piVar3 < 0) {
                *piVar3 = -1;
              }
              goto LAB_1804fae47;
            }
          }
LAB_1804faf20:
          puVar10 = *(ushort **)(param_1 + 0x10);
        }
        cVar9 = FUN_180500888(param_1);
        if (cVar9 == '\0') {
          return 0xffffffff;
        }
      } while( true );
    }
    *(undefined1 *)(lVar13 + 0x30) = 1;
    *(undefined4 *)(lVar13 + 0x2c) = 0x16;
    lVar13 = *(longlong *)(param_1 + 8);
  }
LAB_1804fac8c:
  FUN_180527688(0,0,0,0,0,lVar13);
  return 0xffffffff;
}



/* ===== 1804faf90 FUN_1804faf90 ===== */

undefined4 FUN_1804faf90(longlong param_1)

{
  ushort uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  ushort *puVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    *(undefined1 *)(lVar7 + 0x30) = 1;
    *(undefined4 *)(lVar7 + 0x2c) = 0x16;
  }
  else {
    puVar6 = *(ushort **)(param_1 + 0x10);
    if (puVar6 != (ushort *)0x0) {
      iVar4 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar4;
      do {
        if (iVar4 == 2) {
          return *(undefined4 *)(param_1 + 0x20);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        uVar1 = *puVar6;
        while( true ) {
          puVar6 = puVar6 + 1;
          *(ushort **)(param_1 + 0x10) = puVar6;
          *(ushort *)(param_1 + 0x3a) = uVar1;
          if ((uVar1 == 0) || (iVar4 = *(int *)(param_1 + 0x20), iVar4 < 0)) break;
          if ((ushort)(uVar1 - 0x20) < 0x5b) {
            bVar5 = (&DAT_180576991)[(ulonglong)(uVar1 - 0x20 & 0x7f) * 2];
          }
          else {
            bVar5 = 0;
          }
          bVar5 = (&DAT_180576990)
                  [(ulonglong)((uint)*(byte *)(param_1 + 0x24) + (uint)bVar5 * 8 & 0x7f) * 2];
          *(byte *)(param_1 + 0x24) = bVar5;
          if (7 < bVar5) {
            lVar7 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(lVar7 + 0x30) = 1;
            *(undefined4 *)(lVar7 + 0x2c) = 0x16;
            lVar7 = *(longlong *)(param_1 + 8);
            goto LAB_1804fafeb;
          }
          if (bVar5 == 0) {
            *(undefined1 *)(param_1 + 0x4c) = 1;
            lVar7 = *(longlong *)(param_1 + 0x460);
            if (*(longlong *)(lVar7 + 0x10) == *(longlong *)(lVar7 + 8)) {
              if (*(char *)(lVar7 + 0x18) == '\0') {
                *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x20) = iVar4 + 1;
              }
            }
            else {
              *(int *)(param_1 + 0x20) = iVar4 + 1;
              *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 1;
              *(ushort *)**(undefined8 **)(param_1 + 0x460) = uVar1;
              **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 2;
            }
          }
          else if (bVar5 == 1) {
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          else if (bVar5 == 2) {
            if (uVar1 == 0x20) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (uVar1 == 0x23) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (uVar1 == 0x2b) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (uVar1 == 0x2d) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (uVar1 == 0x30) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else {
            if (bVar5 == 3) {
              if (uVar1 == 0x2a) {
                piVar2 = *(int **)(param_1 + 0x18);
                *(int **)(param_1 + 0x18) = piVar2 + 2;
                iVar4 = *piVar2;
                *(int *)(param_1 + 0x2c) = iVar4;
                if (iVar4 < 0) {
                  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                  *(int *)(param_1 + 0x2c) = -iVar4;
                }
LAB_1804fb138:
                cVar3 = '\x01';
              }
              else {
                lVar7 = param_1 + 0x2c;
LAB_1804fb0e1:
                cVar3 = FUN_1804f8a10(param_1,lVar7);
              }
            }
            else {
              if (bVar5 == 4) {
                *(undefined4 *)(param_1 + 0x30) = 0;
                goto LAB_1804fb1e7;
              }
              if (bVar5 == 5) {
                if (uVar1 == 0x2a) {
                  piVar2 = *(int **)(param_1 + 0x18);
                  *(int **)(param_1 + 0x18) = piVar2 + 2;
                  iVar4 = *piVar2;
                  *(int *)(param_1 + 0x30) = iVar4;
                  if (iVar4 < 0) {
                    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
                  }
                  goto LAB_1804fb138;
                }
                lVar7 = param_1 + 0x30;
                goto LAB_1804fb0e1;
              }
              if (bVar5 == 6) {
                cVar3 = FUN_1804fbbd4(param_1);
              }
              else {
                if (bVar5 != 7) {
                  return 0xffffffff;
                }
                cVar3 = FUN_1804fdf10(param_1);
              }
            }
            if (cVar3 == '\0') {
              return 0xffffffff;
            }
          }
LAB_1804fb1e7:
          puVar6 = *(ushort **)(param_1 + 0x10);
          uVar1 = *puVar6;
        }
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
        iVar4 = *(int *)(param_1 + 0x468);
      } while( true );
    }
    *(undefined1 *)(lVar7 + 0x30) = 1;
    *(undefined4 *)(lVar7 + 0x2c) = 0x16;
    lVar7 = *(longlong *)(param_1 + 8);
  }
LAB_1804fafeb:
  FUN_180527688(0,0,0,0,0,lVar7);
  return 0xffffffff;
}



/* ===== 1804fb254 FUN_1804fb254 ===== */

ulonglong FUN_1804fb254(byte *param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 in_RAX;
  undefined7 uVar7;
  ulonglong uVar5;
  char *pcVar6;
  
  bVar4 = param_1[0x39];
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar6 = (char *)CONCAT71(uVar7,bVar4);
  if (bVar4 == 0x46) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 7;
      uVar5 = FUN_1804fbf34();
      return uVar5;
    }
  }
  else if (bVar4 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 8;
LAB_1804fb286:
      lVar2 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined4 *)(lVar2 + 0x2c) = 0x16;
      uVar5 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_1804fb286;
    if (bVar4 == 0x49) {
      pcVar3 = *(char **)(param_1 + 0x10);
      cVar1 = *pcVar3;
      pcVar6 = (char *)CONCAT71(uVar7,cVar1);
      if ((cVar1 == '3') && (pcVar3[1] == '2')) {
        pcVar6 = pcVar3 + 2;
        param_1[0x34] = 10;
        param_1[0x35] = 0;
        param_1[0x36] = 0;
        param_1[0x37] = 0;
        *(char **)(param_1 + 0x10) = pcVar6;
      }
      else if (cVar1 == '6') {
        if (pcVar3[1] == '4') {
          pcVar6 = pcVar3 + 2;
          param_1[0x34] = 0xb;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          *(char **)(param_1 + 0x10) = pcVar6;
        }
      }
      else {
        bVar4 = cVar1 + 0xa8;
        pcVar6 = (char *)CONCAT71(uVar7,bVar4);
        if ((bVar4 < 0x21) && ((0x120821001U >> ((ulonglong)bVar4 & 0x3f) & 1) != 0)) {
          param_1[0x34] = 9;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
        }
      }
    }
    else if (bVar4 == 0x4c) {
      param_1[0x34] = 8;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else if (bVar4 == 0x54) {
      param_1[0x34] = 0xd;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else {
      if (bVar4 == 0x68) {
        if (**(char **)(param_1 + 0x10) == 'h') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          pcVar6 = (char *)0x1;
        }
        else {
          pcVar6 = (char *)0x2;
        }
      }
      else {
        if (bVar4 == 0x6a) {
          param_1[0x34] = 5;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          goto LAB_1804fb3d4;
        }
        if (bVar4 != 0x6c) {
          if (bVar4 == 0x74) {
            param_1[0x34] = 7;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (bVar4 == 0x77) {
            param_1[0x34] = 0xc;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (bVar4 == 0x7a) {
            param_1[0x34] = 6;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          goto LAB_1804fb3d4;
        }
        if (**(char **)(param_1 + 0x10) == 'l') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          pcVar6 = &DAT_00000004;
        }
        else {
          pcVar6 = (char *)0x3;
        }
      }
      *(int *)(param_1 + 0x34) = (int)pcVar6;
    }
  }
LAB_1804fb3d4:
  return CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
}



/* ===== 1804fb3dc FUN_1804fb3dc ===== */

ulonglong FUN_1804fb3dc(byte *param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 in_RAX;
  undefined7 uVar7;
  ulonglong uVar5;
  char *pcVar6;
  
  bVar4 = param_1[0x39];
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar6 = (char *)CONCAT71(uVar7,bVar4);
  if (bVar4 == 0x46) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 7;
      uVar5 = FUN_1804fc46c();
      return uVar5;
    }
  }
  else if (bVar4 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 8;
LAB_1804fb40e:
      lVar2 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined4 *)(lVar2 + 0x2c) = 0x16;
      uVar5 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_1804fb40e;
    if (bVar4 == 0x49) {
      pcVar3 = *(char **)(param_1 + 0x10);
      cVar1 = *pcVar3;
      pcVar6 = (char *)CONCAT71(uVar7,cVar1);
      if ((cVar1 == '3') && (pcVar3[1] == '2')) {
        pcVar6 = pcVar3 + 2;
        param_1[0x34] = 10;
        param_1[0x35] = 0;
        param_1[0x36] = 0;
        param_1[0x37] = 0;
        *(char **)(param_1 + 0x10) = pcVar6;
      }
      else if (cVar1 == '6') {
        if (pcVar3[1] == '4') {
          pcVar6 = pcVar3 + 2;
          param_1[0x34] = 0xb;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          *(char **)(param_1 + 0x10) = pcVar6;
        }
      }
      else {
        bVar4 = cVar1 + 0xa8;
        pcVar6 = (char *)CONCAT71(uVar7,bVar4);
        if ((bVar4 < 0x21) && ((0x120821001U >> ((ulonglong)bVar4 & 0x3f) & 1) != 0)) {
          param_1[0x34] = 9;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
        }
      }
    }
    else if (bVar4 == 0x4c) {
      param_1[0x34] = 8;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else if (bVar4 == 0x54) {
      param_1[0x34] = 0xd;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else {
      if (bVar4 == 0x68) {
        if (**(char **)(param_1 + 0x10) == 'h') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          pcVar6 = (char *)0x1;
        }
        else {
          pcVar6 = (char *)0x2;
        }
      }
      else {
        if (bVar4 == 0x6a) {
          param_1[0x34] = 5;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          goto LAB_1804fb55c;
        }
        if (bVar4 != 0x6c) {
          if (bVar4 == 0x74) {
            param_1[0x34] = 7;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (bVar4 == 0x77) {
            param_1[0x34] = 0xc;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (bVar4 == 0x7a) {
            param_1[0x34] = 6;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          goto LAB_1804fb55c;
        }
        if (**(char **)(param_1 + 0x10) == 'l') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          pcVar6 = &DAT_00000004;
        }
        else {
          pcVar6 = (char *)0x3;
        }
      }
      *(int *)(param_1 + 0x34) = (int)pcVar6;
    }
  }
LAB_1804fb55c:
  return CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
}



/* ===== 1804fb564 FUN_1804fb564 ===== */

ulonglong FUN_1804fb564(byte *param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 in_RAX;
  undefined7 uVar7;
  ulonglong uVar5;
  char *pcVar6;
  
  bVar4 = param_1[0x39];
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar6 = (char *)CONCAT71(uVar7,bVar4);
  if (bVar4 == 0x46) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 7;
      uVar5 = FUN_1804fc9bc();
      return uVar5;
    }
  }
  else if (bVar4 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 8;
LAB_1804fb596:
      lVar2 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined4 *)(lVar2 + 0x2c) = 0x16;
      uVar5 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_1804fb596;
    if (bVar4 == 0x49) {
      pcVar3 = *(char **)(param_1 + 0x10);
      cVar1 = *pcVar3;
      pcVar6 = (char *)CONCAT71(uVar7,cVar1);
      if ((cVar1 == '3') && (pcVar3[1] == '2')) {
        pcVar6 = pcVar3 + 2;
        param_1[0x34] = 10;
        param_1[0x35] = 0;
        param_1[0x36] = 0;
        param_1[0x37] = 0;
        *(char **)(param_1 + 0x10) = pcVar6;
      }
      else if (cVar1 == '6') {
        if (pcVar3[1] == '4') {
          pcVar6 = pcVar3 + 2;
          param_1[0x34] = 0xb;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          *(char **)(param_1 + 0x10) = pcVar6;
        }
      }
      else {
        bVar4 = cVar1 + 0xa8;
        pcVar6 = (char *)CONCAT71(uVar7,bVar4);
        if ((bVar4 < 0x21) && ((0x120821001U >> ((ulonglong)bVar4 & 0x3f) & 1) != 0)) {
          param_1[0x34] = 9;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
        }
      }
    }
    else if (bVar4 == 0x4c) {
      param_1[0x34] = 8;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else if (bVar4 == 0x54) {
      param_1[0x34] = 0xd;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else {
      if (bVar4 == 0x68) {
        if (**(char **)(param_1 + 0x10) == 'h') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          pcVar6 = (char *)0x1;
        }
        else {
          pcVar6 = (char *)0x2;
        }
      }
      else {
        if (bVar4 == 0x6a) {
          param_1[0x34] = 5;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          goto LAB_1804fb6e4;
        }
        if (bVar4 != 0x6c) {
          if (bVar4 == 0x74) {
            param_1[0x34] = 7;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (bVar4 == 0x77) {
            param_1[0x34] = 0xc;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (bVar4 == 0x7a) {
            param_1[0x34] = 6;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          goto LAB_1804fb6e4;
        }
        if (**(char **)(param_1 + 0x10) == 'l') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          pcVar6 = &DAT_00000004;
        }
        else {
          pcVar6 = (char *)0x3;
        }
      }
      *(int *)(param_1 + 0x34) = (int)pcVar6;
    }
  }
LAB_1804fb6e4:
  return CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
}



/* ===== 1804fb6ec FUN_1804fb6ec ===== */

ulonglong FUN_1804fb6ec(byte *param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 in_RAX;
  undefined7 uVar7;
  ulonglong uVar5;
  char *pcVar6;
  
  bVar4 = param_1[0x39];
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar6 = (char *)CONCAT71(uVar7,bVar4);
  if (bVar4 == 0x46) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 7;
      uVar5 = FUN_1804fce2c();
      return uVar5;
    }
  }
  else if (bVar4 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 8;
LAB_1804fb71e:
      lVar2 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined4 *)(lVar2 + 0x2c) = 0x16;
      uVar5 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_1804fb71e;
    if (bVar4 == 0x49) {
      pcVar3 = *(char **)(param_1 + 0x10);
      cVar1 = *pcVar3;
      pcVar6 = (char *)CONCAT71(uVar7,cVar1);
      if ((cVar1 == '3') && (pcVar3[1] == '2')) {
        pcVar6 = pcVar3 + 2;
        param_1[0x34] = 10;
        param_1[0x35] = 0;
        param_1[0x36] = 0;
        param_1[0x37] = 0;
        *(char **)(param_1 + 0x10) = pcVar6;
      }
      else if (cVar1 == '6') {
        if (pcVar3[1] == '4') {
          pcVar6 = pcVar3 + 2;
          param_1[0x34] = 0xb;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          *(char **)(param_1 + 0x10) = pcVar6;
        }
      }
      else {
        bVar4 = cVar1 + 0xa8;
        pcVar6 = (char *)CONCAT71(uVar7,bVar4);
        if ((bVar4 < 0x21) && ((0x120821001U >> ((ulonglong)bVar4 & 0x3f) & 1) != 0)) {
          param_1[0x34] = 9;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
        }
      }
    }
    else if (bVar4 == 0x4c) {
      param_1[0x34] = 8;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else if (bVar4 == 0x54) {
      param_1[0x34] = 0xd;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else {
      if (bVar4 == 0x68) {
        if (**(char **)(param_1 + 0x10) == 'h') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          pcVar6 = (char *)0x1;
        }
        else {
          pcVar6 = (char *)0x2;
        }
      }
      else {
        if (bVar4 == 0x6a) {
          param_1[0x34] = 5;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          goto LAB_1804fb86c;
        }
        if (bVar4 != 0x6c) {
          if (bVar4 == 0x74) {
            param_1[0x34] = 7;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (bVar4 == 0x77) {
            param_1[0x34] = 0xc;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (bVar4 == 0x7a) {
            param_1[0x34] = 6;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          goto LAB_1804fb86c;
        }
        if (**(char **)(param_1 + 0x10) == 'l') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          pcVar6 = &DAT_00000004;
        }
        else {
          pcVar6 = (char *)0x3;
        }
      }
      *(int *)(param_1 + 0x34) = (int)pcVar6;
    }
  }
LAB_1804fb86c:
  return CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
}



/* ===== 1804fb874 FUN_1804fb874 ===== */

ulonglong FUN_1804fb874(byte *param_1)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  ulonglong uVar5;
  short *psVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x3a);
  psVar6 = (short *)(ulonglong)uVar1;
  if (uVar1 == 0x46) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 7;
      uVar5 = FUN_1804fd2dc();
      return uVar5;
    }
  }
  else if (uVar1 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 8;
LAB_1804fb8ab:
      lVar3 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar3 + 0x30) = 1;
      *(undefined4 *)(lVar3 + 0x2c) = 0x16;
      uVar5 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_1804fb8ab;
    if (uVar1 == 0x49) {
      psVar4 = *(short **)(param_1 + 0x10);
      sVar2 = *psVar4;
      if ((sVar2 == 0x33) && (psVar4[1] == 0x32)) {
        psVar6 = psVar4 + 2;
        param_1[0x34] = 10;
        param_1[0x35] = 0;
        param_1[0x36] = 0;
        param_1[0x37] = 0;
        *(short **)(param_1 + 0x10) = psVar6;
      }
      else if (sVar2 == 0x36) {
        psVar6 = (short *)0x0;
        if (psVar4[1] == 0x34) {
          psVar6 = psVar4 + 2;
          param_1[0x34] = 0xb;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          *(short **)(param_1 + 0x10) = psVar6;
        }
      }
      else {
        psVar6 = (short *)(ulonglong)(ushort)(sVar2 - 0x58U);
        if (((ushort)(sVar2 - 0x58U) < 0x21) &&
           ((0x120821001U >> ((ulonglong)psVar6 & 0x3f) & 1) != 0)) {
          param_1[0x34] = 9;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
        }
      }
    }
    else if (uVar1 == 0x4c) {
      param_1[0x34] = 8;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else if (uVar1 == 0x54) {
      param_1[0x34] = 0xd;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else {
      if (uVar1 == 0x68) {
        if (**(short **)(param_1 + 0x10) == 0x68) {
          *(short **)(param_1 + 0x10) = *(short **)(param_1 + 0x10) + 1;
          psVar6 = (short *)0x1;
        }
        else {
          psVar6 = (short *)0x2;
        }
      }
      else {
        if (uVar1 == 0x6a) {
          param_1[0x34] = 5;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          goto LAB_1804fba1a;
        }
        if (uVar1 != 0x6c) {
          if (uVar1 == 0x74) {
            param_1[0x34] = 7;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (uVar1 == 0x77) {
            param_1[0x34] = 0xc;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (uVar1 == 0x7a) {
            param_1[0x34] = 6;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          goto LAB_1804fba1a;
        }
        if (**(short **)(param_1 + 0x10) == 0x6c) {
          *(short **)(param_1 + 0x10) = *(short **)(param_1 + 0x10) + 1;
          psVar6 = (short *)&DAT_00000004;
        }
        else {
          psVar6 = (short *)0x3;
        }
      }
      *(int *)(param_1 + 0x34) = (int)psVar6;
    }
  }
LAB_1804fba1a:
  return CONCAT71((int7)((ulonglong)psVar6 >> 8),1);
}



/* ===== 1804fba24 FUN_1804fba24 ===== */

ulonglong FUN_1804fba24(byte *param_1)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  ulonglong uVar5;
  short *psVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x3a);
  psVar6 = (short *)(ulonglong)uVar1;
  if (uVar1 == 0x46) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 7;
      uVar5 = FUN_1804fd8d8();
      return uVar5;
    }
  }
  else if (uVar1 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 8;
LAB_1804fba5b:
      lVar3 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar3 + 0x30) = 1;
      *(undefined4 *)(lVar3 + 0x2c) = 0x16;
      uVar5 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_1804fba5b;
    if (uVar1 == 0x49) {
      psVar4 = *(short **)(param_1 + 0x10);
      sVar2 = *psVar4;
      if ((sVar2 == 0x33) && (psVar4[1] == 0x32)) {
        psVar6 = psVar4 + 2;
        param_1[0x34] = 10;
        param_1[0x35] = 0;
        param_1[0x36] = 0;
        param_1[0x37] = 0;
        *(short **)(param_1 + 0x10) = psVar6;
      }
      else if (sVar2 == 0x36) {
        psVar6 = (short *)0x0;
        if (psVar4[1] == 0x34) {
          psVar6 = psVar4 + 2;
          param_1[0x34] = 0xb;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          *(short **)(param_1 + 0x10) = psVar6;
        }
      }
      else {
        psVar6 = (short *)(ulonglong)(ushort)(sVar2 - 0x58U);
        if (((ushort)(sVar2 - 0x58U) < 0x21) &&
           ((0x120821001U >> ((ulonglong)psVar6 & 0x3f) & 1) != 0)) {
          param_1[0x34] = 9;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
        }
      }
    }
    else if (uVar1 == 0x4c) {
      param_1[0x34] = 8;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else if (uVar1 == 0x54) {
      param_1[0x34] = 0xd;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else {
      if (uVar1 == 0x68) {
        if (**(short **)(param_1 + 0x10) == 0x68) {
          *(short **)(param_1 + 0x10) = *(short **)(param_1 + 0x10) + 1;
          psVar6 = (short *)0x1;
        }
        else {
          psVar6 = (short *)0x2;
        }
      }
      else {
        if (uVar1 == 0x6a) {
          param_1[0x34] = 5;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          goto LAB_1804fbbca;
        }
        if (uVar1 != 0x6c) {
          if (uVar1 == 0x74) {
            param_1[0x34] = 7;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (uVar1 == 0x77) {
            param_1[0x34] = 0xc;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (uVar1 == 0x7a) {
            param_1[0x34] = 6;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          goto LAB_1804fbbca;
        }
        if (**(short **)(param_1 + 0x10) == 0x6c) {
          *(short **)(param_1 + 0x10) = *(short **)(param_1 + 0x10) + 1;
          psVar6 = (short *)&DAT_00000004;
        }
        else {
          psVar6 = (short *)0x3;
        }
      }
      *(int *)(param_1 + 0x34) = (int)psVar6;
    }
  }
LAB_1804fbbca:
  return CONCAT71((int7)((ulonglong)psVar6 >> 8),1);
}



/* ===== 1804fbbd4 FUN_1804fbbd4 ===== */

ulonglong FUN_1804fbbd4(byte *param_1)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  ulonglong uVar5;
  short *psVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x3a);
  psVar6 = (short *)(ulonglong)uVar1;
  if (uVar1 == 0x46) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 7;
      uVar5 = FUN_1804fdf10();
      return uVar5;
    }
  }
  else if (uVar1 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 8;
LAB_1804fbc0b:
      lVar3 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar3 + 0x30) = 1;
      *(undefined4 *)(lVar3 + 0x2c) = 0x16;
      uVar5 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_1804fbc0b;
    if (uVar1 == 0x49) {
      psVar4 = *(short **)(param_1 + 0x10);
      sVar2 = *psVar4;
      if ((sVar2 == 0x33) && (psVar4[1] == 0x32)) {
        psVar6 = psVar4 + 2;
        param_1[0x34] = 10;
        param_1[0x35] = 0;
        param_1[0x36] = 0;
        param_1[0x37] = 0;
        *(short **)(param_1 + 0x10) = psVar6;
      }
      else if (sVar2 == 0x36) {
        psVar6 = (short *)0x0;
        if (psVar4[1] == 0x34) {
          psVar6 = psVar4 + 2;
          param_1[0x34] = 0xb;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          *(short **)(param_1 + 0x10) = psVar6;
        }
      }
      else {
        psVar6 = (short *)(ulonglong)(ushort)(sVar2 - 0x58U);
        if (((ushort)(sVar2 - 0x58U) < 0x21) &&
           ((0x120821001U >> ((ulonglong)psVar6 & 0x3f) & 1) != 0)) {
          param_1[0x34] = 9;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
        }
      }
    }
    else if (uVar1 == 0x4c) {
      param_1[0x34] = 8;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else if (uVar1 == 0x54) {
      param_1[0x34] = 0xd;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else {
      if (uVar1 == 0x68) {
        if (**(short **)(param_1 + 0x10) == 0x68) {
          *(short **)(param_1 + 0x10) = *(short **)(param_1 + 0x10) + 1;
          psVar6 = (short *)0x1;
        }
        else {
          psVar6 = (short *)0x2;
        }
      }
      else {
        if (uVar1 == 0x6a) {
          param_1[0x34] = 5;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          goto LAB_1804fbd7a;
        }
        if (uVar1 != 0x6c) {
          if (uVar1 == 0x74) {
            param_1[0x34] = 7;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (uVar1 == 0x77) {
            param_1[0x34] = 0xc;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (uVar1 == 0x7a) {
            param_1[0x34] = 6;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          goto LAB_1804fbd7a;
        }
        if (**(short **)(param_1 + 0x10) == 0x6c) {
          *(short **)(param_1 + 0x10) = *(short **)(param_1 + 0x10) + 1;
          psVar6 = (short *)&DAT_00000004;
        }
        else {
          psVar6 = (short *)0x3;
        }
      }
      *(int *)(param_1 + 0x34) = (int)psVar6;
    }
  }
LAB_1804fbd7a:
  return CONCAT71((int7)((ulonglong)psVar6 >> 8),1);
}



/* ===== 1804fbd84 FUN_1804fbd84 ===== */

ulonglong FUN_1804fbd84(byte *param_1)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  ulonglong uVar5;
  short *psVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x3a);
  psVar6 = (short *)(ulonglong)uVar1;
  if (uVar1 == 0x46) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 7;
      uVar5 = FUN_1804fe488();
      return uVar5;
    }
  }
  else if (uVar1 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 8;
LAB_1804fbdbb:
      lVar3 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar3 + 0x30) = 1;
      *(undefined4 *)(lVar3 + 0x2c) = 0x16;
      uVar5 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_1804fbdbb;
    if (uVar1 == 0x49) {
      psVar4 = *(short **)(param_1 + 0x10);
      sVar2 = *psVar4;
      if ((sVar2 == 0x33) && (psVar4[1] == 0x32)) {
        psVar6 = psVar4 + 2;
        param_1[0x34] = 10;
        param_1[0x35] = 0;
        param_1[0x36] = 0;
        param_1[0x37] = 0;
        *(short **)(param_1 + 0x10) = psVar6;
      }
      else if (sVar2 == 0x36) {
        psVar6 = (short *)0x0;
        if (psVar4[1] == 0x34) {
          psVar6 = psVar4 + 2;
          param_1[0x34] = 0xb;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          *(short **)(param_1 + 0x10) = psVar6;
        }
      }
      else {
        psVar6 = (short *)(ulonglong)(ushort)(sVar2 - 0x58U);
        if (((ushort)(sVar2 - 0x58U) < 0x21) &&
           ((0x120821001U >> ((ulonglong)psVar6 & 0x3f) & 1) != 0)) {
          param_1[0x34] = 9;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
        }
      }
    }
    else if (uVar1 == 0x4c) {
      param_1[0x34] = 8;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else if (uVar1 == 0x54) {
      param_1[0x34] = 0xd;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else {
      if (uVar1 == 0x68) {
        if (**(short **)(param_1 + 0x10) == 0x68) {
          *(short **)(param_1 + 0x10) = *(short **)(param_1 + 0x10) + 1;
          psVar6 = (short *)0x1;
        }
        else {
          psVar6 = (short *)0x2;
        }
      }
      else {
        if (uVar1 == 0x6a) {
          param_1[0x34] = 5;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          goto LAB_1804fbf2a;
        }
        if (uVar1 != 0x6c) {
          if (uVar1 == 0x74) {
            param_1[0x34] = 7;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (uVar1 == 0x77) {
            param_1[0x34] = 0xc;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (uVar1 == 0x7a) {
            param_1[0x34] = 6;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          goto LAB_1804fbf2a;
        }
        if (**(short **)(param_1 + 0x10) == 0x6c) {
          *(short **)(param_1 + 0x10) = *(short **)(param_1 + 0x10) + 1;
          psVar6 = (short *)&DAT_00000004;
        }
        else {
          psVar6 = (short *)0x3;
        }
      }
      *(int *)(param_1 + 0x34) = (int)psVar6;
    }
  }
LAB_1804fbf2a:
  return CONCAT71((int7)((ulonglong)psVar6 >> 8),1);
}



/* ===== 1804fbf34 FUN_1804fbf34 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804fbf34(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  int iVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_48 = 0xfffffffffffffffe;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_88;
  cVar6 = *(char *)(param_1 + 0x39);
  uVar9 = 0x78;
  if (cVar6 < 'e') {
    if (cVar6 == 'd') {
LAB_1804fc017:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_1804fc01b:
      cVar6 = FUN_1804f6574(param_1,0);
    }
    else if (cVar6 < 'T') {
      if (cVar6 == 'S') {
LAB_1804fc05d:
        cVar6 = FUN_1804ffc58(param_1);
      }
      else {
        if (cVar6 != 'A') {
          if (cVar6 == 'C') {
LAB_1804fbfd1:
            cVar6 = FUN_1804ff62c(param_1,0);
            goto LAB_1804fc07f;
          }
          if (((cVar6 != 'E') && (cVar6 != 'F')) && (cVar6 != 'G')) {
            return 0;
          }
        }
LAB_1804fbfa8:
        cVar6 = FUN_1804fec3c(param_1);
      }
    }
    else {
      if (cVar6 == 'X') goto LAB_1804fc075;
      if (cVar6 != 'Z') {
        if (cVar6 != 'a') {
          if (cVar6 != 'c') {
            return 0;
          }
          goto LAB_1804fbfd1;
        }
        goto LAB_1804fbfa8;
      }
      cVar6 = FUN_1804fea14(param_1);
    }
  }
  else if (cVar6 < 'p') {
    if (cVar6 == 'o') {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar6 = FUN_1804f5cf0(param_1,0);
    }
    else {
      if (((cVar6 == 'e') || (cVar6 == 'f')) || (cVar6 == 'g')) goto LAB_1804fbfa8;
      if (cVar6 == 'i') goto LAB_1804fc017;
      if (cVar6 != 'n') {
        return 0;
      }
      cVar6 = FUN_1804ff9d8(param_1);
    }
  }
  else {
    if (cVar6 == 'p') {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_1804fc075:
      uVar8 = 1;
    }
    else {
      if (cVar6 == 's') goto LAB_1804fc05d;
      if (cVar6 == 'u') goto LAB_1804fc01b;
      if (cVar6 != 'x') {
        return 0;
      }
      uVar8 = 0;
    }
    cVar6 = FUN_1804f6df8(param_1,uVar8);
  }
LAB_1804fc07f:
  if (cVar6 == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return 1;
  }
  local_50 = local_50 & 0xffffffffff000000;
  lVar11 = 0;
  uVar4 = *(uint *)(param_1 + 0x28);
  if ((uVar4 >> 4 & 1) != 0) {
    if ((uVar4 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        if ((uVar4 >> 1 & 1) == 0) goto LAB_1804fc0db;
        local_50 = CONCAT71(local_50._1_7_,0x20);
      }
      else {
        local_50 = CONCAT71(local_50._1_7_,0x2b);
      }
    }
    else {
      local_50 = CONCAT71(local_50._1_7_,0x2d);
    }
    lVar11 = 1;
  }
LAB_1804fc0db:
  cVar6 = *(char *)(param_1 + 0x39);
  if (((cVar6 + 0xa8U & 0xdf) != 0) || (bVar5 = true, (uVar4 >> 5 & 1) == 0)) {
    bVar5 = false;
  }
  if ((bVar5) || ((cVar6 + 0xbfU & 0xdf) == 0)) {
    local_40[lVar11 + -0x10] = 0x30;
    if ((cVar6 == 'X') || (cVar6 == 'A')) {
      uVar9 = 0x58;
    }
    local_40[lVar11 + -0xf] = uVar9;
    lVar11 = lVar11 + 2;
  }
  iVar13 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x48)) - (int)lVar11;
  if ((uVar4 & 0xc) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    iVar10 = 0;
    if (0 < iVar13) {
      while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
             (iVar7 = FUN_18050ff4c(0x20,*(undefined8 *)(param_1 + 0x460),uVar8), iVar7 != -1))) {
        iVar7 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar7 + 1;
        if ((iVar7 == -2) || (iVar10 = iVar10 + 1, iVar13 <= iVar10)) goto LAB_1804fc190;
      }
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
  }
LAB_1804fc190:
  plVar2 = (longlong *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
    local_68 = *(undefined8 *)(param_1 + 8);
    FUN_180500cf0(plVar2,&local_50,lVar11,piVar1);
  }
  else {
    *piVar1 = *piVar1 + (int)lVar11;
  }
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0)) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    iVar10 = 0;
    if (0 < iVar13) {
      while ((((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) != 0 && (*(longlong *)(*plVar2 + 8) == 0)) ||
             (iVar7 = FUN_18050ff4c(0x30,*plVar2,uVar8), iVar7 != -1))) {
        iVar7 = *piVar1;
        *piVar1 = iVar7 + 1;
        if ((iVar7 == -2) || (iVar10 = iVar10 + 1, iVar13 <= iVar10)) goto LAB_1804fc237;
      }
      *piVar1 = -1;
    }
  }
LAB_1804fc237:
  if ((*(char *)(param_1 + 0x4c) == '\0') || (*(int *)(param_1 + 0x48) < 1)) {
    plVar2 = (longlong *)(param_1 + 0x460);
    if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
      local_68 = *(undefined8 *)(param_1 + 8);
      FUN_180500cf0(plVar2,*(undefined8 *)(param_1 + 0x40));
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x48);
    }
  }
  else {
    lVar11 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar11 + 0x28) == '\0') {
      FUN_1805002a0(lVar11);
    }
    puVar12 = *(undefined2 **)(param_1 + 0x40);
    if (*(int *)(*(longlong *)(lVar11 + 0x18) + 0xc) == 0xfde9) {
      local_50 = 0;
      iVar10 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        piVar1 = (int *)(param_1 + 0x20);
        plVar2 = (longlong *)(param_1 + 0x460);
        do {
          uVar3 = *puVar12;
          puVar12 = puVar12 + 1;
          lVar11 = FUN_180528e3c(local_40,uVar3,&local_50,*(undefined8 *)(param_1 + 8));
          if (lVar11 == -1) {
            *piVar1 = -1;
            break;
          }
          if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
            local_68 = *(undefined8 *)(param_1 + 8);
            FUN_180500cf0(plVar2,local_40,lVar11,piVar1);
          }
          else {
            *piVar1 = *piVar1 + (int)lVar11;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 != *(int *)(param_1 + 0x48));
      }
    }
    else {
      iVar10 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        plVar2 = (longlong *)(param_1 + 0x460);
        do {
          local_50 = local_50 & 0xffffffff00000000;
          uVar3 = *puVar12;
          puVar12 = puVar12 + 1;
          local_68 = *(undefined8 *)(param_1 + 8);
          iVar7 = FUN_180528740(&local_50,local_40,6,uVar3);
          if (iVar7 != 0) {
LAB_1804fc385:
            *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
            break;
          }
          if ((int)local_50 == 0) goto LAB_1804fc385;
          if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
            local_68 = *(undefined8 *)(param_1 + 8);
            FUN_180500cf0(plVar2,local_40,local_50 & 0xffffffff,param_1 + 0x20);
          }
          else {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + (int)local_50;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 != *(int *)(param_1 + 0x48));
      }
    }
  }
  if ((-1 < *(int *)(param_1 + 0x20)) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    iVar10 = 0;
    if (0 < iVar13) {
      while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
             (iVar7 = FUN_18050ff4c(0x20,*(undefined8 *)(param_1 + 0x460),uVar8), iVar7 != -1))) {
        iVar7 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar7 + 1;
        if (iVar7 == -2) {
          return 1;
        }
        iVar10 = iVar10 + 1;
        if (iVar13 <= iVar10) {
          return 1;
        }
      }
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
  }
  return 1;
}



/* ===== 1804fc46c FUN_1804fc46c ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804fc46c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  int iVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_48 = 0xfffffffffffffffe;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_88;
  cVar6 = *(char *)(param_1 + 0x39);
  uVar9 = 0x78;
  if (cVar6 < 'e') {
    if (cVar6 == 'd') {
LAB_1804fc54f:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_1804fc553:
      cVar6 = FUN_1804f6778(param_1,0);
    }
    else if (cVar6 < 'T') {
      if (cVar6 == 'S') {
LAB_1804fc595:
        cVar6 = FUN_1804ffcf4(param_1);
      }
      else {
        if (cVar6 != 'A') {
          if (cVar6 == 'C') {
LAB_1804fc509:
            cVar6 = FUN_1804ff700(param_1,0);
            goto LAB_1804fc5b7;
          }
          if (((cVar6 != 'E') && (cVar6 != 'F')) && (cVar6 != 'G')) {
            return 0;
          }
        }
LAB_1804fc4e0:
        cVar6 = FUN_1804fee98(param_1);
      }
    }
    else {
      if (cVar6 == 'X') goto LAB_1804fc5ad;
      if (cVar6 != 'Z') {
        if (cVar6 != 'a') {
          if (cVar6 != 'c') {
            return 0;
          }
          goto LAB_1804fc509;
        }
        goto LAB_1804fc4e0;
      }
      cVar6 = FUN_1804fea90(param_1);
    }
  }
  else if (cVar6 < 'p') {
    if (cVar6 == 'o') {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar6 = FUN_1804f5ef4(param_1,0);
    }
    else {
      if (((cVar6 == 'e') || (cVar6 == 'f')) || (cVar6 == 'g')) goto LAB_1804fc4e0;
      if (cVar6 == 'i') goto LAB_1804fc54f;
      if (cVar6 != 'n') {
        return 0;
      }
      cVar6 = FUN_1804ffa90(param_1);
    }
  }
  else {
    if (cVar6 == 'p') {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_1804fc5ad:
      uVar8 = 1;
    }
    else {
      if (cVar6 == 's') goto LAB_1804fc595;
      if (cVar6 == 'u') goto LAB_1804fc553;
      if (cVar6 != 'x') {
        return 0;
      }
      uVar8 = 0;
    }
    cVar6 = FUN_1804f6ffc(param_1,uVar8);
  }
LAB_1804fc5b7:
  if (cVar6 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x474) == 2) && (*(int *)(param_1 + 0x470) == 1)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return 1;
  }
  local_50 = local_50 & 0xffffffffff000000;
  lVar11 = 0;
  uVar4 = *(uint *)(param_1 + 0x28);
  if ((uVar4 >> 4 & 1) != 0) {
    if ((uVar4 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        if ((uVar4 >> 1 & 1) == 0) goto LAB_1804fc629;
        local_50 = CONCAT71(local_50._1_7_,0x20);
      }
      else {
        local_50 = CONCAT71(local_50._1_7_,0x2b);
      }
    }
    else {
      local_50 = CONCAT71(local_50._1_7_,0x2d);
    }
    lVar11 = 1;
  }
LAB_1804fc629:
  cVar6 = *(char *)(param_1 + 0x39);
  if (((cVar6 + 0xa8U & 0xdf) != 0) || (bVar5 = true, (uVar4 >> 5 & 1) == 0)) {
    bVar5 = false;
  }
  if ((bVar5) || ((cVar6 + 0xbfU & 0xdf) == 0)) {
    local_40[lVar11 + -0x10] = 0x30;
    if ((cVar6 == 'X') || (cVar6 == 'A')) {
      uVar9 = 0x58;
    }
    local_40[lVar11 + -0xf] = uVar9;
    lVar11 = lVar11 + 2;
  }
  iVar13 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x48)) - (int)lVar11;
  if ((uVar4 & 0xc) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    iVar10 = 0;
    if (0 < iVar13) {
      while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
             (iVar7 = FUN_18050ff4c(0x20,*(undefined8 *)(param_1 + 0x460),uVar8), iVar7 != -1))) {
        iVar7 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar7 + 1;
        if ((iVar7 == -2) || (iVar10 = iVar10 + 1, iVar13 <= iVar10)) goto LAB_1804fc6de;
      }
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
  }
LAB_1804fc6de:
  plVar2 = (longlong *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
    local_68 = *(undefined8 *)(param_1 + 8);
    FUN_180500cf0(plVar2,&local_50,lVar11,piVar1);
  }
  else {
    *piVar1 = *piVar1 + (int)lVar11;
  }
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0)) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    iVar10 = 0;
    if (0 < iVar13) {
      while ((((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) != 0 && (*(longlong *)(*plVar2 + 8) == 0)) ||
             (iVar7 = FUN_18050ff4c(0x30,*plVar2,uVar8), iVar7 != -1))) {
        iVar7 = *piVar1;
        *piVar1 = iVar7 + 1;
        if ((iVar7 == -2) || (iVar10 = iVar10 + 1, iVar13 <= iVar10)) goto LAB_1804fc785;
      }
      *piVar1 = -1;
    }
  }
LAB_1804fc785:
  if ((*(char *)(param_1 + 0x4c) == '\0') || (*(int *)(param_1 + 0x48) < 1)) {
    plVar2 = (longlong *)(param_1 + 0x460);
    if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
      local_68 = *(undefined8 *)(param_1 + 8);
      FUN_180500cf0(plVar2,*(undefined8 *)(param_1 + 0x40));
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x48);
    }
  }
  else {
    lVar11 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar11 + 0x28) == '\0') {
      FUN_1805002a0(lVar11);
    }
    puVar12 = *(undefined2 **)(param_1 + 0x40);
    if (*(int *)(*(longlong *)(lVar11 + 0x18) + 0xc) == 0xfde9) {
      local_50 = 0;
      iVar10 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        piVar1 = (int *)(param_1 + 0x20);
        plVar2 = (longlong *)(param_1 + 0x460);
        do {
          uVar3 = *puVar12;
          puVar12 = puVar12 + 1;
          lVar11 = FUN_180528e3c(local_40,uVar3,&local_50,*(undefined8 *)(param_1 + 8));
          if (lVar11 == -1) {
            *piVar1 = -1;
            break;
          }
          if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
            local_68 = *(undefined8 *)(param_1 + 8);
            FUN_180500cf0(plVar2,local_40,lVar11,piVar1);
          }
          else {
            *piVar1 = *piVar1 + (int)lVar11;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 != *(int *)(param_1 + 0x48));
      }
    }
    else {
      iVar10 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        plVar2 = (longlong *)(param_1 + 0x460);
        do {
          local_50 = local_50 & 0xffffffff00000000;
          uVar3 = *puVar12;
          puVar12 = puVar12 + 1;
          local_68 = *(undefined8 *)(param_1 + 8);
          iVar7 = FUN_180528740(&local_50,local_40,6,uVar3);
          if (iVar7 != 0) {
LAB_1804fc8d3:
            *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
            break;
          }
          if ((int)local_50 == 0) goto LAB_1804fc8d3;
          if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
            local_68 = *(undefined8 *)(param_1 + 8);
            FUN_180500cf0(plVar2,local_40,local_50 & 0xffffffff,param_1 + 0x20);
          }
          else {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + (int)local_50;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 != *(int *)(param_1 + 0x48));
      }
    }
  }
  if ((-1 < *(int *)(param_1 + 0x20)) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    iVar10 = 0;
    if (0 < iVar13) {
      while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
             (iVar7 = FUN_18050ff4c(0x20,*(undefined8 *)(param_1 + 0x460),uVar8), iVar7 != -1))) {
        iVar7 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar7 + 1;
        if (iVar7 == -2) {
          return 1;
        }
        iVar10 = iVar10 + 1;
        if (iVar13 <= iVar10) {
          return 1;
        }
      }
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
  }
  return 1;
}



/* ===== 1804fc9bc FUN_1804fc9bc ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804fc9bc(longlong param_1)

{
  int *piVar1;
  string_output_adapter<char> *this;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  char cVar10;
  longlong lVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined1 auStackY_88 [32];
  undefined4 local_48;
  char local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStackY_88;
  iVar7 = (int)*(char *)(param_1 + 0x39);
  cVar10 = 'x';
  if (iVar7 < 0x65) {
    if (iVar7 == 100) {
LAB_1804fca8e:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_1804fca92:
      cVar6 = FUN_1804f6574(param_1,0);
    }
    else if (iVar7 < 0x54) {
      if (iVar7 == 0x53) {
LAB_1804fcad1:
        cVar6 = FUN_1804ffc58();
      }
      else {
        if (iVar7 != 0x41) {
          if (iVar7 == 0x43) {
LAB_1804fca51:
            cVar6 = FUN_1804ff62c(param_1,0);
            goto LAB_1804fcaed;
          }
          if (((iVar7 != 0x45) && (iVar7 != 0x46)) && (iVar7 != 0x47)) {
            return 0;
          }
        }
LAB_1804fca2b:
        cVar6 = FUN_1804fec3c();
      }
    }
    else {
      if (iVar7 == 0x58) goto LAB_1804fcae6;
      if (iVar7 != 0x5a) {
        if (iVar7 != 0x61) {
          if (iVar7 != 99) {
            return 0;
          }
          goto LAB_1804fca51;
        }
        goto LAB_1804fca2b;
      }
      cVar6 = FUN_1804fea14();
    }
  }
  else if (iVar7 < 0x70) {
    if (iVar7 == 0x6f) {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar6 = FUN_1804f5cf0(param_1,0);
    }
    else {
      if (((iVar7 == 0x65) || (iVar7 == 0x66)) || (iVar7 == 0x67)) goto LAB_1804fca2b;
      if (iVar7 == 0x69) goto LAB_1804fca8e;
      if (iVar7 != 0x6e) {
        return 0;
      }
      cVar6 = FUN_1804ff9d8();
    }
  }
  else {
    if (iVar7 == 0x70) {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_1804fcae6:
      uVar9 = CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),1);
    }
    else {
      if (iVar7 == 0x73) goto LAB_1804fcad1;
      if (iVar7 == 0x75) goto LAB_1804fca92;
      if (iVar7 != 0x78) {
        return 0;
      }
      uVar9 = 0;
    }
    cVar6 = FUN_1804f6df8(param_1,uVar9);
  }
LAB_1804fcaed:
  if (cVar6 == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return 1;
  }
  local_48 = (uint)local_48._3_1_ << 0x18;
  lVar11 = 0;
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 >> 4 & 1) != 0) {
    if ((uVar3 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        if ((uVar3 >> 1 & 1) == 0) goto LAB_1804fcb47;
        local_48 = CONCAT31(local_48._1_3_,0x20);
      }
      else {
        local_48 = CONCAT31(local_48._1_3_,0x2b);
      }
    }
    else {
      local_48 = CONCAT31(local_48._1_3_,0x2d);
    }
    lVar11 = 1;
  }
LAB_1804fcb47:
  cVar6 = *(char *)(param_1 + 0x39);
  if (((cVar6 + 0xa8U & 0xdf) == 0) && ((uVar3 >> 5 & 1) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((bVar5) || ((cVar6 + 0xbfU & 0xdf) == 0)) {
    local_40[lVar11 + -8] = '0';
    if ((cVar6 == 'X') || (cVar6 == 'A')) {
      cVar10 = 'X';
    }
    local_40[lVar11 + -7] = cVar10;
    lVar11 = lVar11 + 2;
  }
  iVar7 = (*(int *)(param_1 + 0x2c) - (int)lVar11) - *(int *)(param_1 + 0x48);
  if (((uVar3 & 0xc) == 0) && (iVar12 = 0, 0 < iVar7)) {
    iVar8 = *(int *)(param_1 + 0x20);
    do {
      lVar4 = *(longlong *)(param_1 + 0x460);
      if (*(longlong *)(lVar4 + 0x10) == *(longlong *)(lVar4 + 8)) {
        if (*(char *)(lVar4 + 0x18) == '\0') {
          iVar8 = -1;
        }
        else {
          iVar8 = iVar8 + 1;
        }
        *(int *)(param_1 + 0x20) = iVar8;
      }
      else {
        *(int *)(param_1 + 0x20) = iVar8 + 1;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 1;
        *(undefined1 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
        **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
      }
      iVar8 = *(int *)(param_1 + 0x20);
    } while ((iVar8 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar7));
  }
  this = (string_output_adapter<char> *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  __crt_stdio_output::string_output_adapter<char>::write_string
            (this,(char *)&local_48,(int)lVar11,piVar1,*(__crt_deferred_errno_cache **)(param_1 + 8)
            );
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) &&
     (((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0 && (iVar12 = 0, 0 < iVar7)))) {
    iVar8 = *piVar1;
    do {
      lVar11 = *(longlong *)this;
      if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
        if (*(char *)(lVar11 + 0x18) == '\0') {
          iVar8 = -1;
        }
        else {
          iVar8 = iVar8 + 1;
        }
        *piVar1 = iVar8;
      }
      else {
        *piVar1 = iVar8 + 1;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
        *(undefined1 *)**(undefined8 **)this = 0x30;
        **(longlong **)this = **(longlong **)this + 1;
      }
      iVar8 = *piVar1;
    } while ((iVar8 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar7));
  }
  if ((*(char *)(param_1 + 0x4c) == '\0') || (*(int *)(param_1 + 0x48) < 1)) {
    __crt_stdio_output::string_output_adapter<char>::write_string
              (this,*(char **)(param_1 + 0x40),*(int *)(param_1 + 0x48),piVar1,
               *(__crt_deferred_errno_cache **)(param_1 + 8));
  }
  else {
    lVar11 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar11 + 0x28) == '\0') {
      FUN_1805002a0(lVar11);
    }
    puVar13 = *(undefined2 **)(param_1 + 0x40);
    iVar12 = 0;
    if (*(int *)(*(longlong *)(lVar11 + 0x18) + 0xc) == 0xfde9) {
      local_40[0] = '\0';
      local_40[1] = '\0';
      local_40[2] = '\0';
      local_40[3] = '\0';
      local_40[4] = '\0';
      local_40[5] = '\0';
      local_40[6] = '\0';
      local_40[7] = '\0';
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          uVar2 = *puVar13;
          puVar13 = puVar13 + 1;
          lVar11 = FUN_180528e3c(&local_48,uVar2,local_40);
          if (lVar11 == -1) goto LAB_1804fcd12;
          __crt_stdio_output::string_output_adapter<char>::write_string
                    (this,(char *)&local_48,(int)lVar11,piVar1,
                     *(__crt_deferred_errno_cache **)(param_1 + 8));
          iVar12 = iVar12 + 1;
        } while (iVar12 != *(int *)(param_1 + 0x48));
      }
    }
    else if (*(int *)(param_1 + 0x48) != 0) {
      do {
        local_48 = 0;
        iVar8 = FUN_180528740(&local_48,local_40,6);
        if ((iVar8 != 0) || (local_48 == 0)) goto LAB_1804fcd12;
        __crt_stdio_output::string_output_adapter<char>::write_string
                  (this,local_40,local_48,piVar1,*(__crt_deferred_errno_cache **)(param_1 + 8));
        iVar12 = iVar12 + 1;
      } while (iVar12 != *(int *)(param_1 + 0x48));
    }
  }
LAB_1804fcd90:
  iVar12 = *(int *)(param_1 + 0x20);
  if ((-1 < iVar12) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    piVar1 = (int *)(param_1 + 0x20);
    iVar8 = 0;
    if (0 < iVar7) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x460);
        if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
          if (*(char *)(lVar11 + 0x18) == '\0') {
            iVar12 = -1;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          *piVar1 = iVar12;
        }
        else {
          *piVar1 = iVar12 + 1;
          *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
          *(undefined1 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
          **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
        }
        iVar12 = *piVar1;
      } while ((iVar12 != -1) && (iVar8 = iVar8 + 1, iVar8 < iVar7));
    }
  }
  return 1;
LAB_1804fcd12:
  *piVar1 = -1;
  goto LAB_1804fcd90;
}



/* ===== 1804fce2c FUN_1804fce2c ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804fce2c(longlong param_1)

{
  int *piVar1;
  string_output_adapter<char> *this;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  char cVar10;
  longlong lVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined1 auStackY_88 [32];
  undefined4 local_48;
  char local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStackY_88;
  cVar6 = *(char *)(param_1 + 0x39);
  cVar10 = 'x';
  if (cVar6 < 'e') {
    if (cVar6 == 'd') {
LAB_1804fcf13:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_1804fcf17:
      cVar6 = FUN_1804f6778(param_1,0);
    }
    else if (cVar6 < 'T') {
      if (cVar6 == 'S') {
LAB_1804fcf5a:
        cVar6 = FUN_1804ffcf4(param_1);
      }
      else {
        if (cVar6 != 'A') {
          if (cVar6 == 'C') {
LAB_1804fcecd:
            cVar6 = FUN_1804ff700(param_1,0);
            goto LAB_1804fcf7d;
          }
          if (((cVar6 != 'E') && (cVar6 != 'F')) && (cVar6 != 'G')) {
            return 0;
          }
        }
LAB_1804fcea4:
        cVar6 = FUN_1804fee98(param_1);
      }
    }
    else {
      if (cVar6 == 'X') goto LAB_1804fcf72;
      if (cVar6 != 'Z') {
        if (cVar6 != 'a') {
          if (cVar6 != 'c') {
            return 0;
          }
          goto LAB_1804fcecd;
        }
        goto LAB_1804fcea4;
      }
      cVar6 = FUN_1804fea90(param_1);
    }
  }
  else if (cVar6 < 'p') {
    if (cVar6 == 'o') {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar6 = FUN_1804f5ef4(param_1,0);
    }
    else {
      if (((cVar6 == 'e') || (cVar6 == 'f')) || (cVar6 == 'g')) goto LAB_1804fcea4;
      if (cVar6 == 'i') goto LAB_1804fcf13;
      if (cVar6 != 'n') {
        return 0;
      }
      cVar6 = FUN_1804ffa90(param_1);
    }
  }
  else {
    if (cVar6 == 'p') {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_1804fcf72:
      uVar8 = 1;
    }
    else {
      if (cVar6 == 's') goto LAB_1804fcf5a;
      if (cVar6 == 'u') goto LAB_1804fcf17;
      if (cVar6 != 'x') {
        return 0;
      }
      uVar8 = 0;
    }
    cVar6 = FUN_1804f6ffc(param_1,uVar8);
  }
LAB_1804fcf7d:
  if (cVar6 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x474) == 2) && (*(int *)(param_1 + 0x470) == 1)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return 1;
  }
  local_48 = (uint)local_48._3_1_ << 0x18;
  lVar11 = 0;
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 >> 4 & 1) != 0) {
    if ((uVar3 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        if ((uVar3 >> 1 & 1) == 0) goto LAB_1804fcfed;
        local_48 = CONCAT31(local_48._1_3_,0x20);
      }
      else {
        local_48 = CONCAT31(local_48._1_3_,0x2b);
      }
    }
    else {
      local_48 = CONCAT31(local_48._1_3_,0x2d);
    }
    lVar11 = 1;
  }
LAB_1804fcfed:
  cVar6 = *(char *)(param_1 + 0x39);
  if (((cVar6 + 0xa8U & 0xdf) == 0) && ((uVar3 >> 5 & 1) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((bVar5) || ((cVar6 + 0xbfU & 0xdf) == 0)) {
    local_40[lVar11 + -8] = '0';
    if ((cVar6 == 'X') || (cVar6 == 'A')) {
      cVar10 = 'X';
    }
    local_40[lVar11 + -7] = cVar10;
    lVar11 = lVar11 + 2;
  }
  iVar9 = (*(int *)(param_1 + 0x2c) - (int)lVar11) - *(int *)(param_1 + 0x48);
  if (((uVar3 & 0xc) == 0) && (iVar12 = 0, 0 < iVar9)) {
    iVar7 = *(int *)(param_1 + 0x20);
    do {
      lVar4 = *(longlong *)(param_1 + 0x460);
      if (*(longlong *)(lVar4 + 0x10) == *(longlong *)(lVar4 + 8)) {
        if (*(char *)(lVar4 + 0x18) == '\0') {
          iVar7 = -1;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        *(int *)(param_1 + 0x20) = iVar7;
      }
      else {
        *(int *)(param_1 + 0x20) = iVar7 + 1;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 1;
        *(undefined1 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
        **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
      }
      iVar7 = *(int *)(param_1 + 0x20);
    } while ((iVar7 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar9));
  }
  this = (string_output_adapter<char> *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  __crt_stdio_output::string_output_adapter<char>::write_string
            (this,(char *)&local_48,(int)lVar11,piVar1,*(__crt_deferred_errno_cache **)(param_1 + 8)
            );
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) &&
     (((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0 && (iVar12 = 0, 0 < iVar9)))) {
    iVar7 = *piVar1;
    do {
      lVar11 = *(longlong *)this;
      if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
        if (*(char *)(lVar11 + 0x18) == '\0') {
          iVar7 = -1;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        *piVar1 = iVar7;
      }
      else {
        *piVar1 = iVar7 + 1;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
        *(undefined1 *)**(undefined8 **)this = 0x30;
        **(longlong **)this = **(longlong **)this + 1;
      }
      iVar7 = *piVar1;
    } while ((iVar7 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar9));
  }
  if ((*(char *)(param_1 + 0x4c) == '\0') || (*(int *)(param_1 + 0x48) < 1)) {
    __crt_stdio_output::string_output_adapter<char>::write_string
              (this,*(char **)(param_1 + 0x40),*(int *)(param_1 + 0x48),piVar1,
               *(__crt_deferred_errno_cache **)(param_1 + 8));
  }
  else {
    lVar11 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar11 + 0x28) == '\0') {
      FUN_1805002a0(lVar11);
    }
    puVar13 = *(undefined2 **)(param_1 + 0x40);
    iVar12 = 0;
    if (*(int *)(*(longlong *)(lVar11 + 0x18) + 0xc) == 0xfde9) {
      local_40[0] = '\0';
      local_40[1] = '\0';
      local_40[2] = '\0';
      local_40[3] = '\0';
      local_40[4] = '\0';
      local_40[5] = '\0';
      local_40[6] = '\0';
      local_40[7] = '\0';
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          uVar2 = *puVar13;
          puVar13 = puVar13 + 1;
          lVar11 = FUN_180528e3c(&local_48,uVar2,local_40);
          if (lVar11 == -1) goto LAB_1804fd1bc;
          __crt_stdio_output::string_output_adapter<char>::write_string
                    (this,(char *)&local_48,(int)lVar11,piVar1,
                     *(__crt_deferred_errno_cache **)(param_1 + 8));
          iVar12 = iVar12 + 1;
        } while (iVar12 != *(int *)(param_1 + 0x48));
      }
    }
    else if (*(int *)(param_1 + 0x48) != 0) {
      do {
        local_48 = 0;
        iVar7 = FUN_180528740(&local_48,local_40,6);
        if ((iVar7 != 0) || (local_48 == 0)) goto LAB_1804fd1bc;
        __crt_stdio_output::string_output_adapter<char>::write_string
                  (this,local_40,local_48,piVar1,*(__crt_deferred_errno_cache **)(param_1 + 8));
        iVar12 = iVar12 + 1;
      } while (iVar12 != *(int *)(param_1 + 0x48));
    }
  }
LAB_1804fd23a:
  iVar12 = *(int *)(param_1 + 0x20);
  if ((-1 < iVar12) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    piVar1 = (int *)(param_1 + 0x20);
    iVar7 = 0;
    if (0 < iVar9) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x460);
        if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
          if (*(char *)(lVar11 + 0x18) == '\0') {
            iVar12 = -1;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          *piVar1 = iVar12;
        }
        else {
          *piVar1 = iVar12 + 1;
          *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
          *(undefined1 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
          **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
        }
        iVar12 = *piVar1;
      } while ((iVar12 != -1) && (iVar7 = iVar7 + 1, iVar7 < iVar9));
    }
  }
  return 1;
LAB_1804fd1bc:
  *piVar1 = -1;
  goto LAB_1804fd23a;
}



/* ===== 1804fd2dc FUN_1804fd2dc ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804fd2dc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50;
  ulonglong local_48 [2];
  undefined4 local_38;
  undefined2 local_34;
  ulonglong local_30;
  
  local_48[1] = 0xfffffffffffffffe;
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  uVar6 = *(ushort *)(param_1 + 0x3a);
  uVar10 = 0x78;
  if (uVar6 < 0x65) {
    if (uVar6 == 100) {
LAB_1804fd3c7:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_1804fd3cb:
      cVar5 = FUN_1804f69b0(param_1,0);
    }
    else if (uVar6 < 0x54) {
      if (uVar6 == 0x53) {
LAB_1804fd40d:
        cVar5 = FUN_1804ffdb0(param_1);
      }
      else {
        if (uVar6 != 0x41) {
          if (uVar6 == 0x43) {
LAB_1804fd381:
            cVar5 = FUN_1804ff81c(param_1,0);
            goto LAB_1804fd42f;
          }
          if (((uVar6 != 0x45) && (uVar6 != 0x46)) && (uVar6 != 0x47)) {
            return 0;
          }
        }
LAB_1804fd358:
        cVar5 = FUN_1804ff114(param_1);
      }
    }
    else {
      if (uVar6 == 0x58) goto LAB_1804fd425;
      if (uVar6 != 0x5a) {
        if (uVar6 != 0x61) {
          if (uVar6 != 99) {
            return 0;
          }
          goto LAB_1804fd381;
        }
        goto LAB_1804fd358;
      }
      cVar5 = FUN_1804feb38(param_1);
    }
  }
  else if (uVar6 < 0x70) {
    if (uVar6 == 0x6f) {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar5 = FUN_1804f612c(param_1,0);
    }
    else {
      if (((uVar6 == 0x65) || (uVar6 == 0x66)) || (uVar6 == 0x67)) goto LAB_1804fd358;
      if (uVar6 == 0x69) goto LAB_1804fd3c7;
      if (uVar6 != 0x6e) {
        return 0;
      }
      cVar5 = FUN_1804ff9d8(param_1);
    }
  }
  else {
    if (uVar6 == 0x70) {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_1804fd425:
      uVar9 = 1;
    }
    else {
      if (uVar6 == 0x73) goto LAB_1804fd40d;
      if (uVar6 == 0x75) goto LAB_1804fd3cb;
      if (uVar6 != 0x78) {
        return 0;
      }
      uVar9 = 0;
    }
    cVar5 = FUN_1804f7234(param_1,uVar9);
  }
LAB_1804fd42f:
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return 1;
  }
  local_38 = 0;
  local_34 = 0;
  lVar12 = 0;
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 >> 4 & 1) != 0) {
    if ((uVar3 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
        uVar6 = 0x2b;
        goto LAB_1804fd472;
      }
      if ((uVar3 >> 1 & 1) == 0) goto LAB_1804fd497;
      local_38 = 0x20;
    }
    else {
      uVar6 = 0x2d;
LAB_1804fd472:
      local_38 = (uint)uVar6;
    }
    lVar12 = 1;
  }
LAB_1804fd497:
  sVar7 = *(short *)(param_1 + 0x3a);
  if (((sVar7 - 0x58U & 0xffdf) != 0) || (bVar4 = true, (uVar3 >> 5 & 1) == 0)) {
    bVar4 = false;
  }
  if ((bVar4) || ((sVar7 - 0x41U & 0xffdf) == 0)) {
    *(undefined2 *)((longlong)local_48 + lVar12 * 2 + 0x10) = 0x30;
    if ((sVar7 == 0x58) || (sVar7 == 0x41)) {
      uVar10 = 0x58;
    }
    *(undefined2 *)((longlong)local_48 + lVar12 * 2 + 0x12) = uVar10;
    lVar12 = lVar12 + 2;
  }
  iVar13 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x48)) - (int)lVar12;
  if ((uVar3 & 0xc) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    iVar11 = 0;
    if (0 < iVar13) {
      while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
             (sVar7 = FUN_1805290f8(0x20,*(undefined8 *)(param_1 + 0x460),uVar9), sVar7 != -1))) {
        iVar8 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar8 + 1;
        if ((iVar8 == -2) || (iVar11 = iVar11 + 1, iVar13 <= iVar11)) goto LAB_1804fd574;
      }
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
  }
LAB_1804fd574:
  plVar2 = (longlong *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
    local_68 = *(undefined8 *)(param_1 + 8);
    FUN_180500dc0(plVar2,&local_38,lVar12,piVar1);
  }
  else {
    *piVar1 = *piVar1 + (int)lVar12;
  }
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0)) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    iVar11 = 0;
    if (0 < iVar13) {
      while ((((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) != 0 && (*(longlong *)(*plVar2 + 8) == 0)) ||
             (sVar7 = FUN_1805290f8(0x30,*plVar2,uVar9), sVar7 != -1))) {
        iVar8 = *piVar1;
        *piVar1 = iVar8 + 1;
        if ((iVar8 == -2) || (iVar11 = iVar11 + 1, iVar13 <= iVar11)) goto LAB_1804fd625;
      }
      *piVar1 = -1;
    }
  }
LAB_1804fd625:
  if ((*(char *)(param_1 + 0x4c) == '\0') && (0 < *(int *)(param_1 + 0x48))) {
    lVar12 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar12 + 0x28) == '\0') {
      FUN_1805002a0(lVar12);
    }
    if (*(int *)(*(longlong *)(lVar12 + 0x18) + 0xc) == 0xfde9) {
      local_48[0] = *(ulonglong *)(param_1 + 0x40);
      local_50 = 0;
      iVar11 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          local_38 = 0;
          local_68 = *(undefined8 *)(param_1 + 8);
          lVar12 = FUN_180528f28(&local_38,local_48,2,&local_50);
          if (lVar12 == -1) goto LAB_1804fd74f;
          if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
             (sVar7 = FUN_1805290f8((undefined2)local_38,*(undefined8 *)(param_1 + 0x460),
                                    *(undefined8 *)(param_1 + 8)), sVar7 == -1)) {
            *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
          }
          else {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          }
          if (lVar12 == 2) {
            if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
               (sVar7 = FUN_1805290f8(local_38._2_2_,*(undefined8 *)(param_1 + 0x460),
                                      *(undefined8 *)(param_1 + 8)), sVar7 == -1)) {
              *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
            }
            else {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            }
            iVar11 = iVar11 + 1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 != *(int *)(param_1 + 0x48));
      }
    }
    else {
      lVar12 = *(longlong *)(param_1 + 8);
      if (*(char *)(lVar12 + 0x28) == '\0') {
        FUN_1805002a0(lVar12);
      }
      lVar14 = *(longlong *)(param_1 + 0x40);
      iVar11 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          local_38 = local_38 & 0xffff0000;
          iVar8 = FUN_180528990(&local_38,lVar14,
                                (longlong)*(int *)(*(longlong *)(lVar12 + 0x18) + 8),
                                *(undefined8 *)(param_1 + 8));
          if (iVar8 < 1) goto LAB_1804fd74f;
          if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
             (sVar7 = FUN_1805290f8((undefined2)local_38,*(undefined8 *)(param_1 + 0x460),
                                    *(undefined8 *)(param_1 + 8)), sVar7 == -1)) {
            *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
          }
          else {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          }
          lVar14 = lVar14 + iVar8;
          iVar11 = iVar11 + 1;
        } while (iVar11 != *(int *)(param_1 + 0x48));
      }
    }
  }
  else {
    plVar2 = (longlong *)(param_1 + 0x460);
    if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
      local_68 = *(undefined8 *)(param_1 + 8);
      FUN_180500dc0(plVar2,*(undefined8 *)(param_1 + 0x40));
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x48);
    }
  }
LAB_1804fd837:
  if ((-1 < *(int *)(param_1 + 0x20)) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    iVar11 = 0;
    if (0 < iVar13) {
      while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
             (sVar7 = FUN_1805290f8(0x20,*(undefined8 *)(param_1 + 0x460),uVar9), sVar7 != -1))) {
        iVar8 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar8 + 1;
        if (iVar8 == -2) {
          return 1;
        }
        iVar11 = iVar11 + 1;
        if (iVar13 <= iVar11) {
          return 1;
        }
      }
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
  }
  return 1;
LAB_1804fd74f:
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  goto LAB_1804fd837;
}



/* ===== 1804fd8d8 FUN_1804fd8d8 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804fd8d8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50;
  ulonglong local_48 [2];
  undefined4 local_38;
  undefined2 local_34;
  ulonglong local_30;
  
  local_48[1] = 0xfffffffffffffffe;
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  uVar6 = *(ushort *)(param_1 + 0x3a);
  uVar10 = 0x78;
  if (uVar6 < 0x65) {
    if (uVar6 == 100) {
LAB_1804fd9c7:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_1804fd9cb:
      cVar5 = FUN_1804f6bbc(param_1,0);
    }
    else if (uVar6 < 0x54) {
      if (uVar6 == 0x53) {
LAB_1804fda0e:
        cVar5 = FUN_1804ffe4c(param_1);
      }
      else {
        if (uVar6 != 0x41) {
          if (uVar6 == 0x43) {
LAB_1804fd981:
            cVar5 = FUN_1804ff8e0(param_1,0);
            goto LAB_1804fda31;
          }
          if (((uVar6 != 0x45) && (uVar6 != 0x46)) && (uVar6 != 0x47)) {
            return 0;
          }
        }
LAB_1804fd958:
        cVar5 = FUN_1804ff390(param_1);
      }
    }
    else {
      if (uVar6 == 0x58) goto LAB_1804fda26;
      if (uVar6 != 0x5a) {
        if (uVar6 != 0x61) {
          if (uVar6 != 99) {
            return 0;
          }
          goto LAB_1804fd981;
        }
        goto LAB_1804fd958;
      }
      cVar5 = FUN_1804febac(param_1);
    }
  }
  else if (uVar6 < 0x70) {
    if (uVar6 == 0x6f) {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar5 = FUN_1804f6338(param_1,0);
    }
    else {
      if (((uVar6 == 0x65) || (uVar6 == 0x66)) || (uVar6 == 0x67)) goto LAB_1804fd958;
      if (uVar6 == 0x69) goto LAB_1804fd9c7;
      if (uVar6 != 0x6e) {
        return 0;
      }
      cVar5 = FUN_1804ffb74(param_1);
    }
  }
  else {
    if (uVar6 == 0x70) {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_1804fda26:
      uVar9 = 1;
    }
    else {
      if (uVar6 == 0x73) goto LAB_1804fda0e;
      if (uVar6 == 0x75) goto LAB_1804fd9cb;
      if (uVar6 != 0x78) {
        return 0;
      }
      uVar9 = 0;
    }
    cVar5 = FUN_1804f7440(param_1,uVar9);
  }
LAB_1804fda31:
  if (cVar5 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x474) == 2) && (*(int *)(param_1 + 0x470) == 1)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return 1;
  }
  local_38 = 0;
  local_34 = 0;
  lVar12 = 0;
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 >> 4 & 1) == 0) goto LAB_1804fdab0;
  if ((uVar3 >> 6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
      uVar6 = 0x2b;
      goto LAB_1804fda8c;
    }
    if ((uVar3 >> 1 & 1) == 0) goto LAB_1804fdab0;
    local_38 = 0x20;
  }
  else {
    uVar6 = 0x2d;
LAB_1804fda8c:
    local_38 = (uint)uVar6;
  }
  lVar12 = 1;
LAB_1804fdab0:
  sVar7 = *(short *)(param_1 + 0x3a);
  if (((sVar7 - 0x58U & 0xffdf) != 0) || (bVar4 = true, (uVar3 >> 5 & 1) == 0)) {
    bVar4 = false;
  }
  if ((bVar4) || ((sVar7 - 0x41U & 0xffdf) == 0)) {
    *(undefined2 *)((longlong)local_48 + lVar12 * 2 + 0x10) = 0x30;
    if ((sVar7 == 0x58) || (sVar7 == 0x41)) {
      uVar10 = 0x58;
    }
    *(undefined2 *)((longlong)local_48 + (lVar12 + 1) * 2 + 0x10) = uVar10;
    lVar12 = lVar12 + 2;
  }
  iVar13 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x48)) - (int)lVar12;
  if ((uVar3 & 0xc) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    iVar11 = 0;
    if (0 < iVar13) {
      while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
             (sVar7 = FUN_1805290f8(0x20,*(undefined8 *)(param_1 + 0x460),uVar9), sVar7 != -1))) {
        iVar8 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar8 + 1;
        if ((iVar8 == -2) || (iVar11 = iVar11 + 1, iVar13 <= iVar11)) goto LAB_1804fdb8f;
      }
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
  }
LAB_1804fdb8f:
  plVar2 = (longlong *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
    local_68 = *(undefined8 *)(param_1 + 8);
    FUN_180500dc0(plVar2,&local_38,lVar12,piVar1);
  }
  else {
    *piVar1 = *piVar1 + (int)lVar12;
  }
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0)) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    iVar11 = 0;
    if (0 < iVar13) {
      while ((((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) != 0 && (*(longlong *)(*plVar2 + 8) == 0)) ||
             (sVar7 = FUN_1805290f8(0x30,*plVar2,uVar9), sVar7 != -1))) {
        iVar8 = *piVar1;
        *piVar1 = iVar8 + 1;
        if ((iVar8 == -2) || (iVar11 = iVar11 + 1, iVar13 <= iVar11)) goto LAB_1804fdc43;
      }
      *piVar1 = -1;
    }
  }
LAB_1804fdc43:
  if ((*(char *)(param_1 + 0x4c) == '\0') && (0 < *(int *)(param_1 + 0x48))) {
    lVar12 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar12 + 0x28) == '\0') {
      FUN_1805002a0(lVar12);
    }
    if (*(int *)(*(longlong *)(lVar12 + 0x18) + 0xc) == 0xfde9) {
      local_48[0] = *(ulonglong *)(param_1 + 0x40);
      local_50 = 0;
      iVar11 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          local_38 = 0;
          local_68 = *(undefined8 *)(param_1 + 8);
          lVar12 = FUN_180528f28(&local_38,local_48,2,&local_50);
          if (lVar12 == -1) {
            *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
            break;
          }
          if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
             (sVar7 = FUN_1805290f8((undefined2)local_38,*(undefined8 *)(param_1 + 0x460),
                                    *(undefined8 *)(param_1 + 8)), sVar7 == -1)) {
            *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
          }
          else {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          }
          if (lVar12 == 2) {
            if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
               (sVar7 = FUN_1805290f8(local_38._2_2_,*(undefined8 *)(param_1 + 0x460),
                                      *(undefined8 *)(param_1 + 8)), sVar7 == -1)) {
              *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
            }
            else {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            }
            iVar11 = iVar11 + 1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 != *(int *)(param_1 + 0x48));
      }
    }
    else {
      lVar12 = *(longlong *)(param_1 + 8);
      if (*(char *)(lVar12 + 0x28) == '\0') {
        FUN_1805002a0(lVar12);
      }
      lVar14 = *(longlong *)(param_1 + 0x40);
      iVar11 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          local_38 = local_38 & 0xffff0000;
          iVar8 = FUN_180528990(&local_38,lVar14,
                                (longlong)*(int *)(*(longlong *)(lVar12 + 0x18) + 8),
                                *(undefined8 *)(param_1 + 8));
          if (iVar8 < 1) {
            *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
            break;
          }
          if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
             (sVar7 = FUN_1805290f8((undefined2)local_38,*(undefined8 *)(param_1 + 0x460),
                                    *(undefined8 *)(param_1 + 8)), sVar7 == -1)) {
            *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
          }
          else {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          }
          lVar14 = lVar14 + iVar8;
          iVar11 = iVar11 + 1;
        } while (iVar11 != *(int *)(param_1 + 0x48));
      }
    }
  }
  else {
    plVar2 = (longlong *)(param_1 + 0x460);
    if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
      local_68 = *(undefined8 *)(param_1 + 8);
      FUN_180500dc0(plVar2,*(undefined8 *)(param_1 + 0x40));
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x48);
    }
  }
  if ((-1 < *(int *)(param_1 + 0x20)) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    iVar11 = 0;
    if (0 < iVar13) {
      while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
             (sVar7 = FUN_1805290f8(0x20,*(undefined8 *)(param_1 + 0x460),uVar9), sVar7 != -1))) {
        iVar8 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar8 + 1;
        if (iVar8 == -2) {
          return 1;
        }
        iVar11 = iVar11 + 1;
        if (iVar13 <= iVar11) {
          return 1;
        }
      }
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
  }
  return 1;
}



/* ===== 1804fdf10 FUN_1804fdf10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804fdf10(longlong param_1)

{
  int *piVar1;
  string_output_adapter<wchar_t> *this;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  undefined2 uVar8;
  int iVar9;
  undefined2 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStackY_88 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_48 = 0xfffffffffffffffe;
  local_38 = DAT_180919500 ^ (ulonglong)auStackY_88;
  uVar2 = *(ushort *)(param_1 + 0x3a);
  uVar10 = 0x78;
  if (uVar2 < 0x65) {
    if (uVar2 == 100) {
LAB_1804fdff1:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_1804fdff5:
      cVar7 = FUN_1804f69b0(param_1,0);
    }
    else if (uVar2 < 0x54) {
      if (uVar2 == 0x53) {
LAB_1804fe035:
        cVar7 = FUN_1804ffdb0();
      }
      else {
        if (uVar2 != 0x41) {
          if (uVar2 == 0x43) {
LAB_1804fdfb4:
            cVar7 = FUN_1804ff81c(param_1,0);
            goto LAB_1804fe052;
          }
          if (((uVar2 != 0x45) && (uVar2 != 0x46)) && (uVar2 != 0x47)) {
            return 0;
          }
        }
LAB_1804fdf8f:
        cVar7 = FUN_1804ff114();
      }
    }
    else {
      if (uVar2 == 0x58) goto LAB_1804fe04a;
      if (uVar2 != 0x5a) {
        if (uVar2 != 0x61) {
          if (uVar2 != 99) {
            return 0;
          }
          goto LAB_1804fdfb4;
        }
        goto LAB_1804fdf8f;
      }
      cVar7 = FUN_1804feb38();
    }
  }
  else if (uVar2 < 0x70) {
    if (uVar2 == 0x6f) {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar7 = FUN_1804f612c(param_1,0);
    }
    else {
      if (((uVar2 == 0x65) || (uVar2 == 0x66)) || (uVar2 == 0x67)) goto LAB_1804fdf8f;
      if (uVar2 == 0x69) goto LAB_1804fdff1;
      if (uVar2 != 0x6e) {
        return 0;
      }
      cVar7 = FUN_1804ff9d8();
    }
  }
  else {
    if (uVar2 == 0x70) {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_1804fe04a:
      uVar8 = CONCAT11((char)(uVar2 >> 8),1);
    }
    else {
      if (uVar2 == 0x73) goto LAB_1804fe035;
      if (uVar2 == 0x75) goto LAB_1804fdff5;
      if (uVar2 != 0x78) {
        return 0;
      }
      uVar8 = 0;
    }
    cVar7 = FUN_1804f7234(param_1,uVar8);
  }
LAB_1804fe052:
  if (cVar7 == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return 1;
  }
  local_40 = (ulonglong)local_40._6_2_ << 0x30;
  lVar11 = 0;
  uVar4 = *(uint *)(param_1 + 0x28);
  if ((uVar4 >> 4 & 1) != 0) {
    if ((uVar4 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
        uVar8 = 0x2b;
        goto LAB_1804fe097;
      }
      if ((uVar4 >> 1 & 1) == 0) goto LAB_1804fe0bb;
      local_40 = CONCAT62(local_40._2_6_,0x20);
    }
    else {
      uVar8 = 0x2d;
LAB_1804fe097:
      local_40 = CONCAT62(local_40._2_6_,uVar8);
    }
    lVar11 = 1;
  }
LAB_1804fe0bb:
  sVar3 = *(short *)(param_1 + 0x3a);
  if (((sVar3 - 0x58U & 0xffdf) != 0) || (bVar6 = true, (uVar4 >> 5 & 1) == 0)) {
    bVar6 = false;
  }
  if ((bVar6) || ((sVar3 - 0x41U & 0xffdf) == 0)) {
    *(undefined2 *)((longlong)&local_40 + lVar11 * 2) = 0x30;
    if ((sVar3 == 0x58) || (sVar3 == 0x41)) {
      uVar10 = 0x58;
    }
    *(undefined2 *)((longlong)&local_40 + (lVar11 + 1) * 2) = uVar10;
    lVar11 = lVar11 + 2;
  }
  iVar14 = (*(int *)(param_1 + 0x2c) - (int)lVar11) - *(int *)(param_1 + 0x48);
  if (((uVar4 & 0xc) == 0) && (iVar12 = 0, 0 < iVar14)) {
    iVar9 = *(int *)(param_1 + 0x20);
    do {
      lVar13 = *(longlong *)(param_1 + 0x460);
      if (*(longlong *)(lVar13 + 0x10) == *(longlong *)(lVar13 + 8)) {
        if (*(char *)(lVar13 + 0x18) == '\0') {
          iVar9 = -1;
        }
        else {
          iVar9 = iVar9 + 1;
        }
        *(int *)(param_1 + 0x20) = iVar9;
      }
      else {
        *(int *)(param_1 + 0x20) = iVar9 + 1;
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 1;
        *(undefined2 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
        **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 2;
      }
      iVar9 = *(int *)(param_1 + 0x20);
    } while ((iVar9 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar14));
  }
  this = (string_output_adapter<wchar_t> *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  __crt_stdio_output::string_output_adapter<wchar_t>::write_string
            (this,(wchar_t *)&local_40,(int)lVar11,piVar1,
             *(__crt_deferred_errno_cache **)(param_1 + 8));
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) &&
     (((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0 && (iVar12 = 0, 0 < iVar14)))) {
    iVar9 = *piVar1;
    do {
      lVar11 = *(longlong *)this;
      if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
        if (*(char *)(lVar11 + 0x18) == '\0') {
          iVar9 = -1;
        }
        else {
          iVar9 = iVar9 + 1;
        }
        *piVar1 = iVar9;
      }
      else {
        *piVar1 = iVar9 + 1;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
        *(undefined2 *)**(undefined8 **)this = 0x30;
        **(longlong **)this = **(longlong **)this + 2;
      }
      iVar9 = *piVar1;
    } while ((iVar9 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar14));
  }
  if ((*(char *)(param_1 + 0x4c) == '\0') && (0 < *(int *)(param_1 + 0x48))) {
    lVar11 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar11 + 0x28) == '\0') {
      FUN_1805002a0(lVar11);
    }
    if (*(int *)(*(longlong *)(lVar11 + 0x18) + 0xc) == 0xfde9) {
      local_50 = *(undefined8 *)(param_1 + 0x40);
      local_40 = 0;
      iVar12 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          local_58 = 0;
          lVar11 = FUN_180528f28(&local_58,&local_50,2,&local_40);
          if (lVar11 == -1) goto LAB_1804fe3b9;
          lVar13 = *(longlong *)this;
          if (*(longlong *)(lVar13 + 0x10) == *(longlong *)(lVar13 + 8)) {
            if (*(char *)(lVar13 + 0x18) == '\0') {
              *piVar1 = -1;
            }
            else {
              *piVar1 = *piVar1 + 1;
            }
          }
          else {
            *piVar1 = *piVar1 + 1;
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 1;
            *(undefined2 *)**(undefined8 **)this = (undefined2)local_58;
            **(longlong **)this = **(longlong **)this + 2;
          }
          if (lVar11 == 2) {
            lVar11 = *(longlong *)this;
            if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
              if (*(char *)(lVar11 + 0x18) == '\0') {
                *piVar1 = -1;
              }
              else {
                *piVar1 = *piVar1 + 1;
              }
            }
            else {
              *piVar1 = *piVar1 + 1;
              *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
              *(undefined2 *)**(undefined8 **)this = local_58._2_2_;
              **(longlong **)this = **(longlong **)this + 2;
            }
            iVar12 = iVar12 + 1;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != *(int *)(param_1 + 0x48));
      }
    }
    else {
      lVar11 = *(longlong *)(param_1 + 8);
      if (*(char *)(lVar11 + 0x28) == '\0') {
        FUN_1805002a0(lVar11);
      }
      lVar13 = *(longlong *)(param_1 + 0x40);
      iVar12 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          local_58 = local_58 & 0xffff0000;
          iVar9 = FUN_180528990(&local_58,lVar13,
                                (longlong)*(int *)(*(longlong *)(lVar11 + 0x18) + 8));
          if (iVar9 < 1) goto LAB_1804fe3b9;
          lVar5 = *(longlong *)this;
          if (*(longlong *)(lVar5 + 0x10) == *(longlong *)(lVar5 + 8)) {
            if (*(char *)(lVar5 + 0x18) == '\0') {
              *piVar1 = -1;
            }
            else {
              *piVar1 = *piVar1 + 1;
            }
          }
          else {
            *piVar1 = *piVar1 + 1;
            *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 1;
            *(undefined2 *)**(undefined8 **)this = (undefined2)local_58;
            **(longlong **)this = **(longlong **)this + 2;
          }
          lVar13 = lVar13 + iVar9;
          iVar12 = iVar12 + 1;
        } while (iVar12 != *(int *)(param_1 + 0x48));
      }
    }
  }
  else {
    __crt_stdio_output::string_output_adapter<wchar_t>::write_string
              (this,*(wchar_t **)(param_1 + 0x40),*(int *)(param_1 + 0x48),piVar1,
               *(__crt_deferred_errno_cache **)(param_1 + 8));
  }
LAB_1804fe3db:
  iVar12 = *(int *)(param_1 + 0x20);
  if ((-1 < iVar12) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    piVar1 = (int *)(param_1 + 0x20);
    iVar9 = 0;
    if (0 < iVar14) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x460);
        if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
          if (*(char *)(lVar11 + 0x18) == '\0') {
            iVar12 = -1;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          *piVar1 = iVar12;
        }
        else {
          *piVar1 = iVar12 + 1;
          *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
          *(undefined2 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
          **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 2;
        }
        iVar12 = *piVar1;
      } while ((iVar12 != -1) && (iVar9 = iVar9 + 1, iVar9 < iVar14));
    }
  }
  return 1;
LAB_1804fe3b9:
  *piVar1 = -1;
  goto LAB_1804fe3db;
}



/* ===== 1804fe488 FUN_1804fe488 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804fe488(longlong param_1)

{
  int *piVar1;
  string_output_adapter<wchar_t> *this;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  undefined2 uVar8;
  int iVar9;
  undefined2 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStackY_88 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_48 = 0xfffffffffffffffe;
  local_38 = DAT_180919500 ^ (ulonglong)auStackY_88;
  uVar2 = *(ushort *)(param_1 + 0x3a);
  uVar10 = 0x78;
  if (uVar2 < 0x65) {
    if (uVar2 == 100) {
LAB_1804fe569:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_1804fe56d:
      cVar7 = FUN_1804f6bbc(param_1,0);
    }
    else if (uVar2 < 0x54) {
      if (uVar2 == 0x53) {
LAB_1804fe5ad:
        cVar7 = FUN_1804ffe4c();
      }
      else {
        if (uVar2 != 0x41) {
          if (uVar2 == 0x43) {
LAB_1804fe52c:
            cVar7 = FUN_1804ff8e0(param_1,0);
            goto LAB_1804fe5ca;
          }
          if (((uVar2 != 0x45) && (uVar2 != 0x46)) && (uVar2 != 0x47)) {
            return 0;
          }
        }
LAB_1804fe507:
        cVar7 = FUN_1804ff390();
      }
    }
    else {
      if (uVar2 == 0x58) goto LAB_1804fe5c2;
      if (uVar2 != 0x5a) {
        if (uVar2 != 0x61) {
          if (uVar2 != 99) {
            return 0;
          }
          goto LAB_1804fe52c;
        }
        goto LAB_1804fe507;
      }
      cVar7 = FUN_1804febac();
    }
  }
  else if (uVar2 < 0x70) {
    if (uVar2 == 0x6f) {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar7 = FUN_1804f6338(param_1,0);
    }
    else {
      if (((uVar2 == 0x65) || (uVar2 == 0x66)) || (uVar2 == 0x67)) goto LAB_1804fe507;
      if (uVar2 == 0x69) goto LAB_1804fe569;
      if (uVar2 != 0x6e) {
        return 0;
      }
      cVar7 = FUN_1804ffb74();
    }
  }
  else {
    if (uVar2 == 0x70) {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_1804fe5c2:
      uVar8 = CONCAT11((char)(uVar2 >> 8),1);
    }
    else {
      if (uVar2 == 0x73) goto LAB_1804fe5ad;
      if (uVar2 == 0x75) goto LAB_1804fe56d;
      if (uVar2 != 0x78) {
        return 0;
      }
      uVar8 = 0;
    }
    cVar7 = FUN_1804f7440(param_1,uVar8);
  }
LAB_1804fe5ca:
  if (cVar7 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x474) == 2) && (*(int *)(param_1 + 0x470) == 1)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return 1;
  }
  local_40 = (ulonglong)local_40._6_2_ << 0x30;
  lVar11 = 0;
  uVar4 = *(uint *)(param_1 + 0x28);
  if ((uVar4 >> 4 & 1) != 0) {
    if ((uVar4 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
        uVar8 = 0x2b;
        goto LAB_1804fe625;
      }
      if ((uVar4 >> 1 & 1) == 0) goto LAB_1804fe649;
      local_40 = CONCAT62(local_40._2_6_,0x20);
    }
    else {
      uVar8 = 0x2d;
LAB_1804fe625:
      local_40 = CONCAT62(local_40._2_6_,uVar8);
    }
    lVar11 = 1;
  }
LAB_1804fe649:
  sVar3 = *(short *)(param_1 + 0x3a);
  if (((sVar3 - 0x58U & 0xffdf) != 0) || (bVar6 = true, (uVar4 >> 5 & 1) == 0)) {
    bVar6 = false;
  }
  if ((bVar6) || ((sVar3 - 0x41U & 0xffdf) == 0)) {
    *(undefined2 *)((longlong)&local_40 + lVar11 * 2) = 0x30;
    if ((sVar3 == 0x58) || (sVar3 == 0x41)) {
      uVar10 = 0x58;
    }
    *(undefined2 *)((longlong)&local_40 + (lVar11 + 1) * 2) = uVar10;
    lVar11 = lVar11 + 2;
  }
  iVar14 = (*(int *)(param_1 + 0x2c) - (int)lVar11) - *(int *)(param_1 + 0x48);
  if (((uVar4 & 0xc) == 0) && (iVar12 = 0, 0 < iVar14)) {
    iVar9 = *(int *)(param_1 + 0x20);
    do {
      lVar13 = *(longlong *)(param_1 + 0x460);
      if (*(longlong *)(lVar13 + 0x10) == *(longlong *)(lVar13 + 8)) {
        if (*(char *)(lVar13 + 0x18) == '\0') {
          iVar9 = -1;
        }
        else {
          iVar9 = iVar9 + 1;
        }
        *(int *)(param_1 + 0x20) = iVar9;
      }
      else {
        *(int *)(param_1 + 0x20) = iVar9 + 1;
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 1;
        *(undefined2 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
        **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 2;
      }
      iVar9 = *(int *)(param_1 + 0x20);
    } while ((iVar9 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar14));
  }
  this = (string_output_adapter<wchar_t> *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  __crt_stdio_output::string_output_adapter<wchar_t>::write_string
            (this,(wchar_t *)&local_40,(int)lVar11,piVar1,
             *(__crt_deferred_errno_cache **)(param_1 + 8));
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) &&
     (((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0 && (iVar12 = 0, 0 < iVar14)))) {
    iVar9 = *piVar1;
    do {
      lVar11 = *(longlong *)this;
      if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
        if (*(char *)(lVar11 + 0x18) == '\0') {
          iVar9 = -1;
        }
        else {
          iVar9 = iVar9 + 1;
        }
        *piVar1 = iVar9;
      }
      else {
        *piVar1 = iVar9 + 1;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
        *(undefined2 *)**(undefined8 **)this = 0x30;
        **(longlong **)this = **(longlong **)this + 2;
      }
      iVar9 = *piVar1;
    } while ((iVar9 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar14));
  }
  if ((*(char *)(param_1 + 0x4c) == '\0') && (0 < *(int *)(param_1 + 0x48))) {
    lVar11 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar11 + 0x28) == '\0') {
      FUN_1805002a0(lVar11);
    }
    if (*(int *)(*(longlong *)(lVar11 + 0x18) + 0xc) == 0xfde9) {
      local_50 = *(undefined8 *)(param_1 + 0x40);
      local_40 = 0;
      iVar12 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          local_58 = 0;
          lVar11 = FUN_180528f28(&local_58,&local_50,2,&local_40);
          if (lVar11 == -1) goto LAB_1804fe947;
          lVar13 = *(longlong *)this;
          if (*(longlong *)(lVar13 + 0x10) == *(longlong *)(lVar13 + 8)) {
            if (*(char *)(lVar13 + 0x18) == '\0') {
              *piVar1 = -1;
            }
            else {
              *piVar1 = *piVar1 + 1;
            }
          }
          else {
            *piVar1 = *piVar1 + 1;
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 1;
            *(undefined2 *)**(undefined8 **)this = (undefined2)local_58;
            **(longlong **)this = **(longlong **)this + 2;
          }
          if (lVar11 == 2) {
            lVar11 = *(longlong *)this;
            if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
              if (*(char *)(lVar11 + 0x18) == '\0') {
                *piVar1 = -1;
              }
              else {
                *piVar1 = *piVar1 + 1;
              }
            }
            else {
              *piVar1 = *piVar1 + 1;
              *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
              *(undefined2 *)**(undefined8 **)this = local_58._2_2_;
              **(longlong **)this = **(longlong **)this + 2;
            }
            iVar12 = iVar12 + 1;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != *(int *)(param_1 + 0x48));
      }
    }
    else {
      lVar11 = *(longlong *)(param_1 + 8);
      if (*(char *)(lVar11 + 0x28) == '\0') {
        FUN_1805002a0(lVar11);
      }
      lVar13 = *(longlong *)(param_1 + 0x40);
      iVar12 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          local_58 = local_58 & 0xffff0000;
          iVar9 = FUN_180528990(&local_58,lVar13,
                                (longlong)*(int *)(*(longlong *)(lVar11 + 0x18) + 8));
          if (iVar9 < 1) goto LAB_1804fe947;
          lVar5 = *(longlong *)this;
          if (*(longlong *)(lVar5 + 0x10) == *(longlong *)(lVar5 + 8)) {
            if (*(char *)(lVar5 + 0x18) == '\0') {
              *piVar1 = -1;
            }
            else {
              *piVar1 = *piVar1 + 1;
            }
          }
          else {
            *piVar1 = *piVar1 + 1;
            *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 1;
            *(undefined2 *)**(undefined8 **)this = (undefined2)local_58;
            **(longlong **)this = **(longlong **)this + 2;
          }
          lVar13 = lVar13 + iVar9;
          iVar12 = iVar12 + 1;
        } while (iVar12 != *(int *)(param_1 + 0x48));
      }
    }
  }
  else {
    __crt_stdio_output::string_output_adapter<wchar_t>::write_string
              (this,*(wchar_t **)(param_1 + 0x40),*(int *)(param_1 + 0x48),piVar1,
               *(__crt_deferred_errno_cache **)(param_1 + 8));
  }
LAB_1804fe969:
  iVar12 = *(int *)(param_1 + 0x20);
  if ((-1 < iVar12) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    piVar1 = (int *)(param_1 + 0x20);
    iVar9 = 0;
    if (0 < iVar14) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x460);
        if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
          if (*(char *)(lVar11 + 0x18) == '\0') {
            iVar12 = -1;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          *piVar1 = iVar12;
        }
        else {
          *piVar1 = iVar12 + 1;
          *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
          *(undefined2 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
          **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 2;
        }
        iVar12 = *piVar1;
      } while ((iVar12 != -1) && (iVar9 = iVar9 + 1, iVar9 < iVar14));
    }
  }
  return 1;
LAB_1804fe947:
  *piVar1 = -1;
  goto LAB_1804fe969;
}



/* ===== 1804fea14 FUN_1804fea14 ===== */

undefined8 FUN_1804fea14(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  ulonglong uVar5;
  bool bVar6;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar3 + 1;
  puVar4 = (ushort *)*puVar3;
  if ((puVar4 == (ushort *)0x0) || (*(longlong *)(puVar4 + 4) == 0)) {
    uVar5 = 6;
    *(undefined **)(param_1 + 0x40) = &DAT_1808a7550;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 2) {
LAB_1804fea5e:
      bVar6 = false;
    }
    else if ((iVar2 == 3) || (iVar2 == 0xc)) {
      bVar6 = true;
    }
    else {
      if (*(int *)(param_1 + 0x34) == 0xd) goto LAB_1804fea5e;
      bVar6 = (*(char *)(param_1 + 0x39) + 0x9dU & 0xef) != 0;
    }
    *(longlong *)(param_1 + 0x40) = *(longlong *)(puVar4 + 4);
    uVar1 = *puVar4;
    uVar5 = (ulonglong)uVar1;
    if (bVar6) {
      *(undefined1 *)(param_1 + 0x4c) = 1;
      uVar5 = (ulonglong)(uVar1 >> 1);
      goto LAB_1804fea8a;
    }
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
LAB_1804fea8a:
  *(int *)(param_1 + 0x48) = (int)uVar5;
  return CONCAT71((int7)(uVar5 >> 8),1);
}



/* ===== 1804fea90 FUN_1804fea90 ===== */

undefined1 FUN_1804fea90(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  ushort *local_res10 [3];
  
  local_res10[0] = (ushort *)0x0;
  cVar3 = FUN_1804f4a40(param_1,local_res10);
  if (cVar3 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x470) == 1) && (*(int *)(param_1 + 0x474) != 1)) {
    return 1;
  }
  if ((local_res10[0] == (ushort *)0x0) || (*(longlong *)(local_res10[0] + 4) == 0)) {
    uVar4 = 6;
    *(undefined **)(param_1 + 0x40) = &DAT_1808a7550;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 2) {
LAB_1804feb03:
      bVar5 = false;
    }
    else if ((iVar2 == 3) || (iVar2 == 0xc)) {
      bVar5 = true;
    }
    else {
      if (*(int *)(param_1 + 0x34) == 0xd) goto LAB_1804feb03;
      bVar5 = (*(char *)(param_1 + 0x39) + 0x9dU & 0xef) != 0;
    }
    *(longlong *)(param_1 + 0x40) = *(longlong *)(local_res10[0] + 4);
    uVar1 = *local_res10[0];
    uVar4 = (uint)uVar1;
    if (bVar5) {
      *(undefined1 *)(param_1 + 0x4c) = 1;
      uVar4 = (uint)(uVar1 >> 1);
      goto LAB_1804feb2c;
    }
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
LAB_1804feb2c:
  *(uint *)(param_1 + 0x48) = uVar4;
  return 1;
}



/* ===== 1804feb38 FUN_1804feb38 ===== */

undefined8 FUN_1804feb38(__uint64 *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  bool bVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)param_1[3];
  param_1[3] = (__uint64)(puVar2 + 1);
  puVar3 = (ushort *)*puVar2;
  if ((puVar3 == (ushort *)0x0) || (*(__uint64 *)(puVar3 + 4) == 0)) {
    uVar5 = 6;
    param_1[8] = (__uint64)&DAT_1808a7550;
  }
  else {
    param_1[8] = *(__uint64 *)(puVar3 + 4);
    uVar1 = *puVar3;
    uVar5 = (ulonglong)uVar1;
    bVar4 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                      (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                       *(length_modifier *)((longlong)param_1 + 0x34));
    if (bVar4) {
      *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
      uVar5 = (ulonglong)(uVar1 >> 1);
      goto LAB_1804feb9b;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
LAB_1804feb9b:
  *(int *)(param_1 + 9) = (int)uVar5;
  return CONCAT71((int7)(uVar5 >> 8),1);
}



/* ===== 1804febac FUN_1804febac ===== */

undefined1 FUN_1804febac(__uint64 *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ushort *local_res10 [3];
  
  local_res10[0] = (ushort *)0x0;
  cVar3 = FUN_1804f4b48(param_1,local_res10);
  puVar2 = local_res10[0];
  if (cVar3 == '\0') {
    return 0;
  }
  if (((int)param_1[0x8e] == 1) && (*(int *)((longlong)param_1 + 0x474) != 1)) {
    return 1;
  }
  if ((local_res10[0] == (ushort *)0x0) || (*(__uint64 *)(local_res10[0] + 4) == 0)) {
    uVar5 = 6;
    param_1[8] = (__uint64)&DAT_1808a7550;
  }
  else {
    param_1[8] = *(__uint64 *)(local_res10[0] + 4);
    bVar4 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                      (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                       *(length_modifier *)((longlong)param_1 + 0x34));
    uVar1 = *puVar2;
    uVar5 = (uint)uVar1;
    if (bVar4) {
      *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
      uVar5 = (uint)(uVar1 >> 1);
      goto LAB_1804fec29;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
LAB_1804fec29:
  *(uint *)(param_1 + 9) = uVar5;
  return 1;
}



/* ===== 1804fec3c FUN_1804fec3c ===== */

undefined8 FUN_1804fec3c(undefined8 *param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  char *pcVar7;
  byte *pbVar8;
  longlong lVar9;
  byte bVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined8 local_res8;
  
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x10;
  iVar4 = *(int *)(param_1 + 6);
  if (iVar4 < 0) {
    iVar4 = (-(uint)((*(char *)((longlong)param_1 + 0x39) + 0xbfU & 0xdf) != 0) & 0xfffffff9) + 0xd;
    *(int *)(param_1 + 6) = iVar4;
  }
  else if ((iVar4 == 0) &&
          ((*(char *)((longlong)param_1 + 0x39) == 'g' ||
           (*(char *)((longlong)param_1 + 0x39) == 'G')))) {
    *(undefined4 *)(param_1 + 6) = 1;
    iVar4 = 1;
  }
  cVar3 = FUN_1804f3b6c(param_1 + 10,(longlong)(iVar4 + 0x15d),param_1[1]);
  uVar13 = 0x200;
  if (cVar3 == '\0') {
    if (param_1[0x8b] == 0) {
      iVar4 = 0x200;
    }
    else {
      iVar4 = (int)((ulonglong)param_1[0x8a] >> 1);
    }
    iVar4 = iVar4 + -0x15d;
    *(int *)(param_1 + 6) = iVar4;
  }
  else {
    iVar4 = *(int *)(param_1 + 6);
  }
  puVar5 = (undefined8 *)param_1[0x8b];
  if ((undefined8 *)param_1[0x8b] == (undefined8 *)0x0) {
    puVar5 = param_1 + 10;
  }
  param_1[8] = puVar5;
  puVar11 = (undefined8 *)param_1[3];
  param_1[3] = puVar11 + 1;
  puVar5 = (undefined8 *)param_1[0x8b];
  local_res8 = *puVar11;
  if (puVar5 == (undefined8 *)0x0) {
    puVar11 = param_1 + 0x4a;
    puVar5 = param_1 + 10;
    uVar6 = 0x200;
  }
  else {
    puVar11 = (undefined8 *)(((ulonglong)param_1[0x8a] >> 1) + (longlong)puVar5);
    uVar6 = (ulonglong)param_1[0x8a] >> 1;
    uVar13 = (ulonglong)param_1[0x8a] >> 1;
  }
  FUN_180528458(&local_res8,puVar5,uVar13,puVar11,uVar6,(int)*(char *)((longlong)param_1 + 0x39),
                iVar4,*param_1,1,param_1[1]);
  if (((*(uint *)(param_1 + 5) >> 5 & 1) != 0) && (*(int *)(param_1 + 6) == 0)) {
    lVar9 = param_1[1];
    if (*(char *)(lVar9 + 0x28) == '\0') {
      FUN_1805002a0(lVar9);
    }
    pbVar12 = (byte *)param_1[8];
    plVar2 = *(longlong **)(lVar9 + 0x18);
    uVar13 = (ulonglong)*pbVar12;
    if (*(char *)(uVar13 + plVar2[0x22]) != 'e') {
      do {
        pbVar12 = pbVar12 + 1;
        uVar13 = (ulonglong)*pbVar12;
      } while ((*(byte *)(*plVar2 + uVar13 * 2) & 4) != 0);
    }
    bVar14 = *(char *)(uVar13 + plVar2[0x22]) == 'x';
    if (bVar14) {
      uVar13 = (ulonglong)pbVar12[2];
    }
    pbVar8 = pbVar12 + 2;
    if (!bVar14) {
      pbVar8 = pbVar12;
    }
    *pbVar8 = **(byte **)plVar2[0x1f];
    do {
      pbVar8 = pbVar8 + 1;
      bVar1 = *pbVar8;
      bVar10 = (byte)uVar13;
      *pbVar8 = bVar10;
      uVar13 = (ulonglong)bVar1;
    } while (bVar10 != 0);
  }
  if (((*(char *)((longlong)param_1 + 0x39) + 0xb9U & 0xdf) == 0) &&
     ((*(uint *)(param_1 + 5) >> 5 & 1) == 0)) {
    if (*(char *)(param_1[1] + 0x28) == '\0') {
      FUN_1805002a0(param_1[1]);
    }
    FUN_1804f8474(param_1[8]);
  }
  pcVar7 = (char *)param_1[8];
  cVar3 = *pcVar7;
  if (cVar3 == '-') {
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x40;
    pcVar7 = pcVar7 + 1;
    param_1[8] = pcVar7;
    cVar3 = *pcVar7;
  }
  if (((byte)(cVar3 + 0xb7U) < 0x26) &&
     ((0x2100000021U >> ((ulonglong)(byte)(cVar3 + 0xb7U) & 0x3f) & 1) != 0)) {
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffff7;
    *(undefined1 *)((longlong)param_1 + 0x39) = 0x73;
  }
  lVar9 = -1;
  do {
    lVar9 = lVar9 + 1;
  } while (pcVar7[lVar9] != '\0');
  *(int *)(param_1 + 9) = (int)lVar9;
  return 1;
}



/* ===== 1804fee98 FUN_1804fee98 ===== */

undefined8 FUN_1804fee98(undefined8 *param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  byte *pbVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  bool bVar15;
  undefined8 local_res8;
  
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x10;
  cVar3 = FUN_180500940();
  if (cVar3 == '\0') {
LAB_1804ff100:
    uVar5 = 0;
  }
  else {
    if ((*(int *)(param_1 + 0x8e) != 1) || (*(int *)((longlong)param_1 + 0x474) == 1)) {
      iVar4 = *(int *)(param_1 + 6);
      if (iVar4 < 0) {
        iVar4 = (-(uint)((*(char *)((longlong)param_1 + 0x39) + 0xbfU & 0xdf) != 0) & 0xfffffff9) +
                0xd;
        *(int *)(param_1 + 6) = iVar4;
      }
      else if ((iVar4 == 0) &&
              ((*(char *)((longlong)param_1 + 0x39) == 'g' ||
               (*(char *)((longlong)param_1 + 0x39) == 'G')))) {
        *(undefined4 *)(param_1 + 6) = 1;
        iVar4 = 1;
      }
      cVar3 = FUN_1804f3b6c(param_1 + 10,(longlong)(iVar4 + 0x15d),param_1[1]);
      uVar11 = 0x200;
      if (cVar3 == '\0') {
        if (param_1[0x8b] == 0) {
          iVar4 = 0x200;
        }
        else {
          iVar4 = (int)((ulonglong)param_1[0x8a] >> 1);
        }
        *(int *)(param_1 + 6) = iVar4 + -0x15d;
      }
      puVar6 = (undefined8 *)param_1[0x8b];
      if ((undefined8 *)param_1[0x8b] == (undefined8 *)0x0) {
        puVar6 = param_1 + 10;
      }
      param_1[8] = puVar6;
      local_res8 = 0;
      cVar3 = FUN_1804f4c54(param_1,&local_res8);
      if (cVar3 == '\0') goto LAB_1804ff100;
      puVar6 = (undefined8 *)param_1[0x8b];
      if (puVar6 == (undefined8 *)0x0) {
        puVar13 = param_1 + 0x4a;
        uVar8 = 0x200;
        puVar6 = param_1 + 10;
      }
      else {
        puVar13 = (undefined8 *)(((ulonglong)param_1[0x8a] >> 1) + (longlong)puVar6);
        uVar8 = (ulonglong)param_1[0x8a] >> 1;
        uVar11 = (ulonglong)param_1[0x8a] >> 1;
      }
      FUN_180528458(&local_res8,puVar6,uVar11,puVar13,uVar8,(int)*(char *)((longlong)param_1 + 0x39)
                    ,*(undefined4 *)(param_1 + 6),*param_1,1,param_1[1]);
      if (((*(uint *)(param_1 + 5) >> 5 & 1) != 0) && (*(int *)(param_1 + 6) == 0)) {
        lVar7 = param_1[1];
        if (*(char *)(lVar7 + 0x28) == '\0') {
          FUN_1805002a0(lVar7);
        }
        pbVar14 = (byte *)param_1[8];
        plVar2 = *(longlong **)(lVar7 + 0x18);
        uVar11 = (ulonglong)*pbVar14;
        if (*(char *)(uVar11 + plVar2[0x22]) != 'e') {
          do {
            pbVar14 = pbVar14 + 1;
            uVar11 = (ulonglong)*pbVar14;
          } while ((*(byte *)(*plVar2 + uVar11 * 2) & 4) != 0);
        }
        bVar15 = *(char *)(uVar11 + plVar2[0x22]) == 'x';
        if (bVar15) {
          uVar11 = (ulonglong)pbVar14[2];
        }
        pbVar10 = pbVar14 + 2;
        if (!bVar15) {
          pbVar10 = pbVar14;
        }
        *pbVar10 = **(byte **)plVar2[0x1f];
        do {
          pbVar10 = pbVar10 + 1;
          bVar1 = *pbVar10;
          bVar12 = (byte)uVar11;
          *pbVar10 = bVar12;
          uVar11 = (ulonglong)bVar1;
        } while (bVar12 != 0);
      }
      if (((*(char *)((longlong)param_1 + 0x39) + 0xb9U & 0xdf) == 0) &&
         ((*(uint *)(param_1 + 5) >> 5 & 1) == 0)) {
        lVar7 = param_1[1];
        if (*(char *)(lVar7 + 0x28) == '\0') {
          FUN_1805002a0(lVar7);
        }
        FUN_1804f8474(param_1[8],lVar7 + 0x18);
      }
      pcVar9 = (char *)param_1[8];
      cVar3 = *pcVar9;
      if (cVar3 == '-') {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x40;
        pcVar9 = pcVar9 + 1;
        param_1[8] = pcVar9;
        cVar3 = *pcVar9;
      }
      if (((byte)(cVar3 + 0xb7U) < 0x26) &&
         ((0x2100000021U >> ((ulonglong)(byte)(cVar3 + 0xb7U) & 0x3f) & 1) != 0)) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffff7;
        *(undefined1 *)((longlong)param_1 + 0x39) = 0x73;
      }
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (pcVar9[lVar7] != '\0');
      *(int *)(param_1 + 9) = (int)lVar7;
    }
    uVar5 = 1;
  }
  return uVar5;
}



/* ===== 1804ff114 FUN_1804ff114 ===== */

undefined8 FUN_1804ff114(undefined8 *param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  char *pcVar7;
  byte *pbVar8;
  longlong lVar9;
  byte bVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined8 local_res8;
  
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x10;
  iVar4 = *(int *)(param_1 + 6);
  if (iVar4 < 0) {
    iVar4 = (-(uint)((*(short *)((longlong)param_1 + 0x3a) - 0x41U & 0xffdf) != 0) & 0xfffffff9) +
            0xd;
    *(int *)(param_1 + 6) = iVar4;
  }
  else if ((iVar4 == 0) &&
          ((*(short *)((longlong)param_1 + 0x3a) == 0x67 ||
           (*(short *)((longlong)param_1 + 0x3a) == 0x47)))) {
    *(undefined4 *)(param_1 + 6) = 1;
    iVar4 = 1;
  }
  cVar3 = FUN_1804f3b6c(param_1 + 10,(longlong)(iVar4 + 0x15d),param_1[1]);
  uVar13 = 0x200;
  if (cVar3 == '\0') {
    if (param_1[0x8b] == 0) {
      iVar4 = 0x200;
    }
    else {
      iVar4 = (int)((ulonglong)param_1[0x8a] >> 1);
    }
    iVar4 = iVar4 + -0x15d;
    *(int *)(param_1 + 6) = iVar4;
  }
  else {
    iVar4 = *(int *)(param_1 + 6);
  }
  puVar5 = (undefined8 *)param_1[0x8b];
  if ((undefined8 *)param_1[0x8b] == (undefined8 *)0x0) {
    puVar5 = param_1 + 10;
  }
  param_1[8] = puVar5;
  puVar11 = (undefined8 *)param_1[3];
  param_1[3] = puVar11 + 1;
  puVar5 = (undefined8 *)param_1[0x8b];
  local_res8 = *puVar11;
  if (puVar5 == (undefined8 *)0x0) {
    puVar11 = param_1 + 0x4a;
    puVar5 = param_1 + 10;
    uVar6 = 0x200;
  }
  else {
    puVar11 = (undefined8 *)(((ulonglong)param_1[0x8a] >> 1) + (longlong)puVar5);
    uVar6 = (ulonglong)param_1[0x8a] >> 1;
    uVar13 = (ulonglong)param_1[0x8a] >> 1;
  }
  FUN_180528458(&local_res8,puVar5,uVar13,puVar11,uVar6,(int)*(char *)((longlong)param_1 + 0x3a),
                iVar4,*param_1,1,param_1[1]);
  if (((*(uint *)(param_1 + 5) >> 5 & 1) != 0) && (*(int *)(param_1 + 6) == 0)) {
    lVar9 = param_1[1];
    if (*(char *)(lVar9 + 0x28) == '\0') {
      FUN_1805002a0(lVar9);
    }
    pbVar12 = (byte *)param_1[8];
    plVar2 = *(longlong **)(lVar9 + 0x18);
    uVar13 = (ulonglong)*pbVar12;
    if (*(char *)(uVar13 + plVar2[0x22]) != 'e') {
      do {
        pbVar12 = pbVar12 + 1;
        uVar13 = (ulonglong)*pbVar12;
      } while ((*(byte *)(*plVar2 + uVar13 * 2) & 4) != 0);
    }
    bVar14 = *(char *)(uVar13 + plVar2[0x22]) == 'x';
    if (bVar14) {
      uVar13 = (ulonglong)pbVar12[2];
    }
    pbVar8 = pbVar12 + 2;
    if (!bVar14) {
      pbVar8 = pbVar12;
    }
    *pbVar8 = **(byte **)plVar2[0x1f];
    do {
      pbVar8 = pbVar8 + 1;
      bVar1 = *pbVar8;
      bVar10 = (byte)uVar13;
      *pbVar8 = bVar10;
      uVar13 = (ulonglong)bVar1;
    } while (bVar10 != 0);
  }
  if (((*(short *)((longlong)param_1 + 0x3a) - 0x47U & 0xffdf) == 0) &&
     ((*(uint *)(param_1 + 5) >> 5 & 1) == 0)) {
    if (*(char *)(param_1[1] + 0x28) == '\0') {
      FUN_1805002a0(param_1[1]);
    }
    FUN_1804f8474(param_1[8]);
  }
  pcVar7 = (char *)param_1[8];
  cVar3 = *pcVar7;
  if (cVar3 == '-') {
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x40;
    pcVar7 = pcVar7 + 1;
    param_1[8] = pcVar7;
    cVar3 = *pcVar7;
  }
  if (((byte)(cVar3 + 0xb7U) < 0x26) &&
     ((0x2100000021U >> ((ulonglong)(byte)(cVar3 + 0xb7U) & 0x3f) & 1) != 0)) {
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffff7;
    *(undefined2 *)((longlong)param_1 + 0x3a) = 0x73;
  }
  lVar9 = -1;
  do {
    lVar9 = lVar9 + 1;
  } while (pcVar7[lVar9] != '\0');
  *(int *)(param_1 + 9) = (int)lVar9;
  return 1;
}



/* ===== 1804ff390 FUN_1804ff390 ===== */

undefined8 FUN_1804ff390(undefined8 *param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  byte *pbVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  bool bVar15;
  undefined8 local_res8;
  
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x10;
  cVar3 = FUN_180500a24();
  if (cVar3 == '\0') {
LAB_1804ff613:
    uVar5 = 0;
  }
  else {
    if ((*(int *)(param_1 + 0x8e) != 1) || (*(int *)((longlong)param_1 + 0x474) == 1)) {
      iVar4 = *(int *)(param_1 + 6);
      if (iVar4 < 0) {
        iVar4 = (-(uint)((*(short *)((longlong)param_1 + 0x3a) - 0x41U & 0xffdf) != 0) & 0xfffffff9)
                + 0xd;
        *(int *)(param_1 + 6) = iVar4;
      }
      else if ((iVar4 == 0) &&
              ((*(short *)((longlong)param_1 + 0x3a) == 0x67 ||
               (*(short *)((longlong)param_1 + 0x3a) == 0x47)))) {
        *(undefined4 *)(param_1 + 6) = 1;
        iVar4 = 1;
      }
      cVar3 = FUN_1804f3b6c(param_1 + 10,(longlong)(iVar4 + 0x15d),param_1[1]);
      uVar11 = 0x200;
      if (cVar3 == '\0') {
        if (param_1[0x8b] == 0) {
          iVar4 = 0x200;
        }
        else {
          iVar4 = (int)((ulonglong)param_1[0x8a] >> 1);
        }
        *(int *)(param_1 + 6) = iVar4 + -0x15d;
      }
      puVar6 = (undefined8 *)param_1[0x8b];
      if ((undefined8 *)param_1[0x8b] == (undefined8 *)0x0) {
        puVar6 = param_1 + 10;
      }
      param_1[8] = puVar6;
      local_res8 = 0;
      cVar3 = FUN_1804f4d5c(param_1,&local_res8);
      if (cVar3 == '\0') goto LAB_1804ff613;
      puVar6 = (undefined8 *)param_1[0x8b];
      if (puVar6 == (undefined8 *)0x0) {
        puVar13 = param_1 + 0x4a;
        uVar8 = 0x200;
        puVar6 = param_1 + 10;
      }
      else {
        puVar13 = (undefined8 *)(((ulonglong)param_1[0x8a] >> 1) + (longlong)puVar6);
        uVar8 = (ulonglong)param_1[0x8a] >> 1;
        uVar11 = (ulonglong)param_1[0x8a] >> 1;
      }
      FUN_180528458(&local_res8,puVar6,uVar11,puVar13,uVar8,(int)*(char *)((longlong)param_1 + 0x3a)
                    ,*(undefined4 *)(param_1 + 6),*param_1,1,param_1[1]);
      if (((*(uint *)(param_1 + 5) >> 5 & 1) != 0) && (*(int *)(param_1 + 6) == 0)) {
        lVar7 = param_1[1];
        if (*(char *)(lVar7 + 0x28) == '\0') {
          FUN_1805002a0(lVar7);
        }
        pbVar14 = (byte *)param_1[8];
        plVar2 = *(longlong **)(lVar7 + 0x18);
        uVar11 = (ulonglong)*pbVar14;
        if (*(char *)(uVar11 + plVar2[0x22]) != 'e') {
          do {
            pbVar14 = pbVar14 + 1;
            uVar11 = (ulonglong)*pbVar14;
          } while ((*(byte *)(*plVar2 + uVar11 * 2) & 4) != 0);
        }
        bVar15 = *(char *)(uVar11 + plVar2[0x22]) == 'x';
        if (bVar15) {
          uVar11 = (ulonglong)pbVar14[2];
        }
        pbVar10 = pbVar14 + 2;
        if (!bVar15) {
          pbVar10 = pbVar14;
        }
        *pbVar10 = **(byte **)plVar2[0x1f];
        do {
          pbVar10 = pbVar10 + 1;
          bVar1 = *pbVar10;
          bVar12 = (byte)uVar11;
          *pbVar10 = bVar12;
          uVar11 = (ulonglong)bVar1;
        } while (bVar12 != 0);
      }
      if (((*(short *)((longlong)param_1 + 0x3a) - 0x47U & 0xffdf) == 0) &&
         ((*(uint *)(param_1 + 5) >> 5 & 1) == 0)) {
        lVar7 = param_1[1];
        if (*(char *)(lVar7 + 0x28) == '\0') {
          FUN_1805002a0(lVar7);
        }
        FUN_1804f8474(param_1[8],lVar7 + 0x18);
      }
      pcVar9 = (char *)param_1[8];
      cVar3 = *pcVar9;
      if (cVar3 == '-') {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x40;
        pcVar9 = pcVar9 + 1;
        param_1[8] = pcVar9;
        cVar3 = *pcVar9;
      }
      if (((byte)(cVar3 + 0xb7U) < 0x26) &&
         ((0x2100000021U >> ((ulonglong)(byte)(cVar3 + 0xb7U) & 0x3f) & 1) != 0)) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffff7;
        *(undefined2 *)((longlong)param_1 + 0x3a) = 0x73;
      }
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (pcVar9[lVar7] != '\0');
      *(int *)(param_1 + 9) = (int)lVar7;
    }
    uVar5 = 1;
  }
  return uVar5;
}



/* ===== 1804ff62c FUN_1804ff62c ===== */

undefined8 FUN_1804ff62c(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  
  iVar3 = *(int *)(param_1 + 0x34);
  if ((iVar3 == 2) ||
     (((iVar3 != 3 && (iVar3 != 0xc)) &&
      ((*(int *)(param_1 + 0x34) == 0xd || ((*(char *)(param_1 + 0x39) + 0x9dU & 0xef) == 0)))))) {
    puVar2 = *(undefined1 **)(param_1 + 0x18);
    puVar5 = *(undefined1 **)(param_1 + 0x458);
    if (*(undefined1 **)(param_1 + 0x458) == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(param_1 + 0x50);
    }
    *(undefined1 **)(param_1 + 0x18) = puVar2 + 8;
    *puVar5 = *puVar2;
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0x18);
    *(undefined2 **)(param_1 + 0x18) = puVar1 + 4;
    lVar4 = *(longlong *)(param_1 + 0x458);
    if (lVar4 == 0) {
      lVar4 = param_1 + 0x50;
      uVar6 = 0x200;
    }
    else {
      uVar6 = *(ulonglong *)(param_1 + 0x450) >> 1;
    }
    iVar3 = FUN_180528740(param_1 + 0x48,lVar4,uVar6,*puVar1,*(undefined8 *)(param_1 + 8));
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x458);
  if (*(longlong *)(param_1 + 0x458) == 0) {
    lVar4 = param_1 + 0x50;
  }
  *(longlong *)(param_1 + 0x40) = lVar4;
  return 1;
}



/* ===== 1804ff700 FUN_1804ff700 ===== */

undefined8 FUN_1804ff700(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 local_res8 [4];
  
  iVar2 = *(int *)(param_1 + 0x34);
  if ((iVar2 == 2) ||
     (((iVar2 != 3 && (iVar2 != 0xc)) &&
      ((*(int *)(param_1 + 0x34) == 0xd || ((*(char *)(param_1 + 0x39) + 0x9dU & 0xef) == 0)))))) {
    lVar3 = *(longlong *)(param_1 + 0x458);
    if (*(longlong *)(param_1 + 0x458) == 0) {
      lVar3 = param_1 + 0x50;
    }
    cVar1 = FUN_1804f4304(param_1,lVar3);
    if (cVar1 == '\0') {
      return 0;
    }
    if ((*(int *)(param_1 + 0x470) == 1) && (*(int *)(param_1 + 0x474) != 1)) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  else {
    local_res8[0] = 0;
    cVar1 = FUN_1804f507c(param_1,local_res8);
    if (cVar1 == '\0') {
      return 0;
    }
    if ((*(int *)(param_1 + 0x470) == 1) && (*(int *)(param_1 + 0x474) != 1)) {
      return 1;
    }
    lVar3 = *(longlong *)(param_1 + 0x458);
    if (lVar3 == 0) {
      lVar3 = param_1 + 0x50;
      uVar4 = 0x200;
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 0x450) >> 1;
    }
    iVar2 = FUN_180528740(param_1 + 0x48,lVar3,uVar4,local_res8[0],*(undefined8 *)(param_1 + 8));
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x458);
  if (*(longlong *)(param_1 + 0x458) == 0) {
    lVar3 = param_1 + 0x50;
  }
  *(longlong *)(param_1 + 0x40) = lVar3;
  return 1;
}



/* ===== 1804ff81c FUN_1804ff81c ===== */

undefined8 FUN_1804ff81c(__uint64 *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  __uint64 _Var3;
  int iVar4;
  __uint64 *p_Var5;
  undefined1 local_res8;
  undefined1 local_res9;
  
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  puVar2 = (undefined2 *)param_1[3];
  param_1[3] = (__uint64)(puVar2 + 4);
  uVar1 = *puVar2;
  local_res9 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                         (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                          *(length_modifier *)((longlong)param_1 + 0x34));
  if ((bool)local_res9) {
    p_Var5 = (__uint64 *)param_1[0x8b];
    if ((__uint64 *)param_1[0x8b] == (__uint64 *)0x0) {
      p_Var5 = param_1 + 10;
    }
    *(undefined2 *)p_Var5 = uVar1;
  }
  else {
    local_res8 = (undefined1)uVar1;
    _Var3 = param_1[1];
    if (*(char *)(_Var3 + 0x28) == '\0') {
      FUN_1805002a0(_Var3);
    }
    p_Var5 = (__uint64 *)param_1[0x8b];
    if ((__uint64 *)param_1[0x8b] == (__uint64 *)0x0) {
      p_Var5 = param_1 + 10;
    }
    iVar4 = FUN_180528990(p_Var5,&local_res8,(longlong)*(int *)(*(longlong *)(_Var3 + 0x18) + 8),
                          _Var3);
    if (iVar4 < 0) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  *(undefined4 *)(param_1 + 9) = 1;
  p_Var5 = (__uint64 *)param_1[0x8b];
  if ((__uint64 *)param_1[0x8b] == (__uint64 *)0x0) {
    p_Var5 = param_1 + 10;
  }
  param_1[8] = (__uint64)p_Var5;
  return 1;
}



/* ===== 1804ff8e0 FUN_1804ff8e0 ===== */

undefined1 FUN_1804ff8e0(__uint64 *param_1)

{
  __uint64 _Var1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  __uint64 *p_Var6;
  ushort local_res8 [4];
  
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  local_res8[0] = 0;
  cVar2 = FUN_1804f5184(param_1,local_res8);
  uVar4 = 0;
  if (cVar2 != '\0') {
    if (((int)param_1[0x8e] != 1) || (*(int *)((longlong)param_1 + 0x474) == 1)) {
      bVar3 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                        (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                         *(length_modifier *)((longlong)param_1 + 0x34));
      if (bVar3) {
        p_Var6 = (__uint64 *)param_1[0x8b];
        if ((__uint64 *)param_1[0x8b] == (__uint64 *)0x0) {
          p_Var6 = param_1 + 10;
        }
        *(ushort *)p_Var6 = local_res8[0];
      }
      else {
        _Var1 = param_1[1];
        local_res8[0] = local_res8[0] & 0xff;
        if (*(char *)(_Var1 + 0x28) == '\0') {
          FUN_1805002a0(_Var1);
        }
        p_Var6 = (__uint64 *)param_1[0x8b];
        if ((__uint64 *)param_1[0x8b] == (__uint64 *)0x0) {
          p_Var6 = param_1 + 10;
        }
        iVar5 = FUN_180528990(p_Var6,local_res8,(longlong)*(int *)(*(longlong *)(_Var1 + 0x18) + 8),
                              _Var1);
        if (iVar5 < 0) {
          *(undefined1 *)(param_1 + 7) = 1;
        }
      }
      *(undefined4 *)(param_1 + 9) = 1;
      p_Var6 = (__uint64 *)param_1[0x8b];
      if ((__uint64 *)param_1[0x8b] == (__uint64 *)0x0) {
        p_Var6 = param_1 + 10;
      }
      param_1[8] = (__uint64)p_Var6;
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* ===== 1804ff9d8 FUN_1804ff9d8 ===== */

ulonglong FUN_1804ff9d8(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar1 + 1;
  puVar2 = (ulonglong *)*puVar1;
  uVar4 = FUN_1805290e0();
  if ((int)uVar4 == 0) goto LAB_1804ff9fd;
  iVar6 = *(int *)(param_1 + 0x34);
  if (iVar6 < 6) {
    if (iVar6 != 5) {
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),*(undefined1 *)(param_1 + 0x20));
          *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0x20);
          goto LAB_1804ffa76;
        }
        iVar6 = iVar6 + -2;
        if (iVar6 == 0) {
          uVar5 = (ulonglong)*(ushort *)(param_1 + 0x20);
          *(ushort *)puVar2 = *(ushort *)(param_1 + 0x20);
          goto LAB_1804ffa76;
        }
        goto LAB_1804ffa65;
      }
LAB_1804ffa87:
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x20);
      *(uint *)puVar2 = *(uint *)(param_1 + 0x20);
      goto LAB_1804ffa76;
    }
  }
  else if (((iVar6 != 6) && (iVar6 != 7)) && (iVar6 = iVar6 + -9, iVar6 != 0)) {
LAB_1804ffa65:
    if (iVar6 == 1) goto LAB_1804ffa87;
    if (iVar6 != 2) {
LAB_1804ff9fd:
      lVar3 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar3 + 0x30) = 1;
      *(undefined4 *)(lVar3 + 0x2c) = 0x16;
      uVar5 = FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  uVar5 = (ulonglong)*(int *)(param_1 + 0x20);
  *puVar2 = uVar5;
LAB_1804ffa76:
  *(undefined1 *)(param_1 + 0x38) = 1;
  return CONCAT71((int7)(uVar5 >> 8),1);
}



/* ===== 1804ffa90 FUN_1804ffa90 ===== */

undefined8 FUN_1804ffa90(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *local_res10 [3];
  
  local_res10[0] = (longlong *)0x0;
  cVar2 = FUN_1804f4a40(param_1,local_res10);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x470) == 1) && (*(int *)(param_1 + 0x474) != 1)) {
    return 1;
  }
  iVar3 = FUN_1805290e0();
  if (iVar3 == 0) goto LAB_1804ffad3;
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 < 6) {
    if (iVar3 != 5) {
      if (iVar3 != 0) {
        if (iVar3 == 1) {
          *(undefined1 *)local_res10[0] = *(undefined1 *)(param_1 + 0x20);
          goto LAB_1804ffb59;
        }
        iVar3 = iVar3 + -2;
        if (iVar3 == 0) {
          *(undefined2 *)local_res10[0] = *(undefined2 *)(param_1 + 0x20);
          goto LAB_1804ffb59;
        }
        goto LAB_1804ffb43;
      }
LAB_1804ffb65:
      *(undefined4 *)local_res10[0] = *(undefined4 *)(param_1 + 0x20);
      goto LAB_1804ffb59;
    }
  }
  else if (((iVar3 != 6) && (iVar3 != 7)) && (iVar3 = iVar3 + -9, iVar3 != 0)) {
LAB_1804ffb43:
    if (iVar3 == 1) goto LAB_1804ffb65;
    if (iVar3 != 2) {
LAB_1804ffad3:
      lVar1 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar1 + 0x30) = 1;
      *(undefined4 *)(lVar1 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  *local_res10[0] = (longlong)*(int *)(param_1 + 0x20);
LAB_1804ffb59:
  *(undefined1 *)(param_1 + 0x38) = 1;
  return 1;
}



/* ===== 1804ffb74 FUN_1804ffb74 ===== */

undefined8 FUN_1804ffb74(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *local_res10 [3];
  
  local_res10[0] = (longlong *)0x0;
  cVar2 = FUN_1804f4b48(param_1,local_res10);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x470) == 1) && (*(int *)(param_1 + 0x474) != 1)) {
    return 1;
  }
  iVar3 = FUN_1805290e0();
  if (iVar3 == 0) goto LAB_1804ffbb7;
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 < 6) {
    if (iVar3 != 5) {
      if (iVar3 != 0) {
        if (iVar3 == 1) {
          *(undefined1 *)local_res10[0] = *(undefined1 *)(param_1 + 0x20);
          goto LAB_1804ffc3d;
        }
        iVar3 = iVar3 + -2;
        if (iVar3 == 0) {
          *(undefined2 *)local_res10[0] = *(undefined2 *)(param_1 + 0x20);
          goto LAB_1804ffc3d;
        }
        goto LAB_1804ffc27;
      }
LAB_1804ffc49:
      *(undefined4 *)local_res10[0] = *(undefined4 *)(param_1 + 0x20);
      goto LAB_1804ffc3d;
    }
  }
  else if (((iVar3 != 6) && (iVar3 != 7)) && (iVar3 = iVar3 + -9, iVar3 != 0)) {
LAB_1804ffc27:
    if (iVar3 == 1) goto LAB_1804ffc49;
    if (iVar3 != 2) {
LAB_1804ffbb7:
      lVar1 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar1 + 0x30) = 1;
      *(undefined4 *)(lVar1 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  *local_res10[0] = (longlong)*(int *)(param_1 + 0x20);
LAB_1804ffc3d:
  *(undefined1 *)(param_1 + 0x38) = 1;
  return 1;
}



/* ===== 1804ffc58 FUN_1804ffc58 ===== */

undefined8 FUN_1804ffc58(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar2 + 1;
  pwVar4 = (wchar_t *)*puVar2;
  iVar5 = *(int *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar5 == -1) {
    iVar5 = 0x7fffffff;
  }
  *(wchar_t **)(param_1 + 0x40) = pwVar4;
  if ((iVar1 == 2) ||
     (((iVar1 != 3 && (iVar1 != 0xc)) &&
      ((*(int *)(param_1 + 0x34) == 0xd || ((*(char *)(param_1 + 0x39) + 0x9dU & 0xef) == 0)))))) {
    if (pwVar4 == (wchar_t *)0x0) {
      pwVar4 = L"渨汵⥬";
      *(undefined **)(param_1 + 0x40) = &DAT_1808a7550;
    }
    uVar3 = FUN_180512ae0(pwVar4,(longlong)iVar5);
  }
  else {
    if (pwVar4 == (wchar_t *)0x0) {
      pwVar4 = L"(null)";
      *(wchar_t **)(param_1 + 0x40) = L"(null)";
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    uVar3 = FUN_180512dc0(pwVar4,(longlong)iVar5);
  }
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  return 1;
}



/* ===== 1804ffcf4 FUN_1804ffcf4 ===== */

undefined1 FUN_1804ffcf4(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  int iVar6;
  bool bVar7;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  cVar3 = FUN_1804f4a40(param_1,puVar1);
  if (cVar3 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x470) == 1) && (*(int *)(param_1 + 0x474) != 1)) {
    return 1;
  }
  iVar6 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar6 == -1) {
    iVar6 = 0x7fffffff;
  }
  if (iVar2 != 2) {
    if ((iVar2 == 3) || (iVar2 == 0xc)) {
      bVar7 = true;
      goto LAB_1804ffd64;
    }
    if (*(int *)(param_1 + 0x34) != 0xd) {
      bVar7 = (*(char *)(param_1 + 0x39) + 0x9dU & 0xef) != 0;
      goto LAB_1804ffd64;
    }
  }
  bVar7 = false;
LAB_1804ffd64:
  pwVar5 = (wchar_t *)*puVar1;
  if (bVar7) {
    if (pwVar5 == (wchar_t *)0x0) {
      pwVar5 = L"(null)";
      *puVar1 = L"(null)";
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    uVar4 = FUN_180512dc0(pwVar5,(longlong)iVar6);
  }
  else {
    if (pwVar5 == (wchar_t *)0x0) {
      pwVar5 = L"渨汵⥬";
      *puVar1 = &DAT_1808a7550;
    }
    uVar4 = FUN_180512ae0(pwVar5,(longlong)iVar6);
  }
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  return 1;
}



/* ===== 1804ffdb0 FUN_1804ffdb0 ===== */

undefined8 FUN_1804ffdb0(__uint64 *param_1)

{
  __uint64 *p_Var1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  p_Var1 = (__uint64 *)param_1[3];
  param_1[3] = (__uint64)(p_Var1 + 1);
  iVar4 = (int)param_1[6];
  pwVar5 = (wchar_t *)*p_Var1;
  if (iVar4 == -1) {
    iVar4 = 0x7fffffff;
  }
  param_1[8] = (__uint64)pwVar5;
  bVar2 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                     *(length_modifier *)((longlong)param_1 + 0x34));
  if (bVar2) {
    if (pwVar5 == (wchar_t *)0x0) {
      pwVar5 = L"(null)";
      param_1[8] = (__uint64)L"(null)";
    }
    *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
    uVar3 = FUN_180512dc0(pwVar5,(longlong)iVar4);
  }
  else {
    if (pwVar5 == (wchar_t *)0x0) {
      param_1[8] = (__uint64)&DAT_1808a7550;
    }
    uVar3 = FUN_1804fff00(param_1,iVar4,0);
  }
  *(undefined4 *)(param_1 + 9) = uVar3;
  return 1;
}



