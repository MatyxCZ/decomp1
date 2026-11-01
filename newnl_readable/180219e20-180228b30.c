/* ===== 180219e20 FUN_180219e20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180219e20(undefined4 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *puVar11;
  char cVar12;
  char cVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_90;
  uint local_88;
  undefined4 local_80;
  undefined8 *******local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_b8;
  local_80 = param_1;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_90);
    DAT_181108a00 = local_90;
    local_90 = FUN_1803a0c50(&local_90);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_90 = DAT_1811089f8;
  }
  lVar2 = local_90;
  DAT_1811089f8 = local_90;
  if (local_90 == 0) {
    DAT_180cec908 = 0;
    DAT_180cec8fc = 0;
    DAT_180cec850 = 0;
    DAT_1809f1bd0 = 0;
    puVar11 = &DAT_1809f1bc0;
    if (0xf < DAT_1809f1bd8) {
      puVar11 = DAT_1809f1bc0;
    }
    *(undefined1 *)puVar11 = 0;
    DAT_180cc4c8d = 0;
    DAT_180cc509a = 0;
    DAT_180cec8f4 = 0;
    DAT_180cec860 = 0;
    DAT_180cc5099 = 0;
    DAT_180cc4c8e = 0;
    DAT_180cec910 = 0;
    DAT_180cc4c8a = 0;
    DAT_180cec8b8 = 0;
    DAT_180cc4c8f = 0;
    DAT_180cec858 = 0;
    DAT_180cc5098 = 0;
    FUN_180218b90();
    return;
  }
  if (DAT_180ca09f0 == 0) {
    return;
  }
  iVar6 = FUN_180011200((ulonglong)DAT_180ca09f0 + local_90);
  if (999 < iVar6 - 1U) {
    return;
  }
  if (lVar2 == 0) {
    return;
  }
  if (DAT_180ca09f4 == 0) {
    return;
  }
  bVar5 = FUN_180011220(lVar2 + (ulonglong)DAT_180ca09f4);
  if (1 < (byte)(bVar5 - 2)) {
    return;
  }
  FUN_180275fe0(&DAT_180921498);
  if (DAT_180921498 == '\0') {
    piVar7 = (int *)0x0;
  }
  else {
    uVar1 = DAT_1809214b0;
    if (bVar5 == 3) {
      uVar1 = DAT_1809214ac;
    }
    piVar7 = (int *)FUN_18027fb40(uVar1);
    if (piVar7 != (int *)0x0) {
      iVar6 = *piVar7;
      goto LAB_180219fd1;
    }
  }
  iVar6 = 0;
LAB_180219fd1:
  if ((((DAT_180ca09f8 == 0) ||
       (lVar8 = FUN_18000f3a0(lVar2 + (ulonglong)DAT_180ca09f8), lVar8 == 0)) ||
      (DAT_180cec8c4 == 0)) || (((ulonglong)DAT_180cec8c4 + lVar8 == 0 || (DAT_180cec8cc == 0)))) {
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0xf;
    local_78 = (undefined8 *******)0x0;
  }
  else {
    uVar9 = FUN_18000f3a0((ulonglong)DAT_180cec8c4 + lVar8 + (ulonglong)DAT_180cec8cc);
    FUN_180217820(&local_78,uVar9);
  }
  uVar4 = local_60;
  uVar3 = local_68;
  if (local_68 == 0) {
    FUN_18000f890(&local_78);
    return;
  }
  local_88 = (uint)bVar5;
  local_98 = lVar2 != DAT_180cec908;
  if ((((bool)local_98) || (bVar5 != DAT_180cec8fc)) ||
     ((iVar6 != DAT_180cec850 || ((piVar7 != DAT_180cec880 || (local_68 != DAT_1809f1bd0)))))) {
LAB_18021a10d:
    if ((bool)local_98) {
      DAT_180cc509a = 0;
      DAT_180cc5099 = 0;
    }
    if (((piVar7 != (int *)0x0) && ((char)piVar7[0x34] != '\0')) && (piVar7 != DAT_180cec880)) {
      plVar16 = (longlong *)(piVar7 + 0x12);
      if (0xf < *(ulonglong *)(piVar7 + 0x18)) {
        plVar16 = (longlong *)*plVar16;
      }
      plVar15 = (longlong *)(piVar7 + 0x36);
      if (0xf < *(ulonglong *)(piVar7 + 0x3c)) {
        plVar15 = (longlong *)*plVar15;
      }
      FUN_180217550("custom | def %d | %s | model %s",*piVar7,plVar15,plVar16);
    }
    DAT_180cec8fc = local_88;
    pppppppuVar10 = &local_78;
    if (0xf < uVar4) {
      pppppppuVar10 = local_78;
    }
    DAT_180cec850 = iVar6;
    DAT_180cec880 = piVar7;
    DAT_180cec908 = lVar2;
    FUN_180029840(&DAT_1809f1bc0,pppppppuVar10,uVar3);
    DAT_180cc4c8d = 1;
    DAT_180cec8f4 = 0;
    DAT_180cec860 = 0;
  }
  else {
    uVar14 = 0;
    if (local_68 != 0) {
      do {
        pppppppuVar10 = &local_78;
        if (0xf < local_60) {
          pppppppuVar10 = local_78;
        }
        cVar13 = *(char *)((longlong)pppppppuVar10 + uVar14);
        if (cVar13 == '\\') {
          cVar13 = '/';
        }
        else if ((byte)(cVar13 + 0xbfU) < 0x1a) {
          cVar13 = cVar13 + ' ';
        }
        puVar11 = &DAT_1809f1bc0;
        if (0xf < DAT_1809f1bd8) {
          puVar11 = DAT_1809f1bc0;
        }
        cVar12 = *(char *)((longlong)puVar11 + uVar14);
        if (cVar12 == '\\') {
          cVar12 = '/';
        }
        else if ((byte)(cVar12 + 0xbfU) < 0x1a) {
          cVar12 = cVar12 + ' ';
        }
        if (cVar13 != cVar12) goto LAB_18021a10d;
        uVar14 = uVar14 + 1;
      } while (uVar14 < local_68);
    }
  }
  FUN_180219b30(&local_90,piVar7);
  FUN_1811bd21b();
  return;
}



/* ===== 18021a1c5 FUN_18021a1c5 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18021a1c5(void)

{
  char cVar1;
  short sVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char cVar8;
  char *pcVar9;
  int unaff_R12D;
  int unaff_R13D;
  short sVar10;
  bool bVar11;
  
  if ((DAT_180cc509a == '\0') || (DAT_180cc4c8d != '\0')) {
    bVar11 = false;
    cVar1 = '\0';
LAB_18021a244:
    cVar8 = cVar1;
    iVar6 = -1;
  }
  else {
    if ((*(char *)(unaff_RSI + 0xd0) == '\0') || (cVar1 = FUN_180276240(unaff_R12D), cVar1 != '\0'))
    {
      bVar11 = true;
      iVar6 = 1;
    }
    else {
      bVar11 = false;
      iVar6 = 0;
    }
    if ((*(char *)(unaff_RSI + 0xd0) != '\0') && (iVar6 != DAT_1809f1778)) {
      pcVar9 = "not in the item schema: m_nPawnCharacterDefIndex left to the server";
      if (bVar11) {
        pcVar9 = "in the item schema: m_nPawnCharacterDefIndex written (NL 0x567f90 step 5)";
      }
      FUN_180217550("custom | def %d | %s",unaff_R12D,pcVar9);
    }
    cVar8 = '\x01';
    cVar1 = '\x01';
    if (*(char *)(unaff_RSI + 0xd0) == '\0') goto LAB_18021a244;
  }
  DAT_1809f1778 = iVar6;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(unaff_RBP + -0x48);
    lVar4 = *(longlong *)(unaff_RBP + -0x48);
  }
  else {
    lVar4 = DAT_181108a00;
  }
  iVar6 = 0;
  if (bVar11) {
    iVar6 = unaff_R12D;
  }
  uVar3 = (ulonglong)DAT_180cec8e4;
  if ((DAT_180cec8e4 == 0) || (lVar4 == 0)) goto LAB_18021a322;
  sVar2 = FUN_180011440();
  if (lVar4 != DAT_180cec900) {
    DAT_180cc4c8b = '\0';
    DAT_180cec900 = lVar4;
  }
  cVar1 = DAT_180cc4c8b;
  if (iVar6 < 1) {
    if (DAT_180cc4c8b != '\0') {
      if (sVar2 == DAT_180ce1edc) {
        FUN_180066890(lVar4 + uVar3,&DAT_180ce1f2c);
      }
      DAT_180cc4c8b = '\0';
    }
    goto LAB_18021a322;
  }
  sVar10 = (short)iVar6;
  *(short *)(unaff_RBP + -0x58) = sVar10;
  if (cVar1 == '\0') {
    DAT_180cc4c8b = '\x01';
LAB_18021a2dc:
    _DAT_180ce1f2c = sVar2;
  }
  else if (sVar2 != DAT_180ce1edc) goto LAB_18021a2dc;
  if (sVar2 != sVar10) {
    FUN_180066890(lVar4 + uVar3,unaff_RBP + -0x58);
  }
  DAT_180ce1edc = sVar10;
LAB_18021a322:
  lVar4 = *(longlong *)(unaff_RBP + -0x50);
  FUN_180217e10(lVar4,unaff_R13D,cVar8);
  DAT_180cc4c8e = 0;
  if (*(int *)(unaff_RBP + -0x40) == 0xc) {
    if ((((lVar4 == 0) || (DAT_180ca09f8 == 0)) ||
        (lVar4 = FUN_18000f3a0(lVar4 + (ulonglong)DAT_180ca09f8), lVar4 == 0)) ||
       (((DAT_180cec8c4 == 0 || ((ulonglong)DAT_180cec8c4 + lVar4 == 0)) ||
        ((DAT_180cec8c8 == 0 ||
         (lVar4 = FUN_18000f3a0((ulonglong)DAT_180cec8c4 + lVar4 + (ulonglong)DAT_180cec8c8),
         0x7ffffffefffe < lVar4 - 0x10000U)))))) {
      lVar4 = 0;
    }
    else {
      lVar5 = FUN_18000f3a0(lVar4);
      lVar4 = 0;
      if (lVar5 - 0x10000U < 0x7ffffffeffff) {
        lVar4 = lVar5;
      }
    }
    if ((cVar8 == '\0') || (lVar4 == 0)) {
      if (DAT_180cec890 != 0) {
        FUN_180218b90();
      }
    }
    else if (((lVar4 != DAT_180cec890) || (DAT_1809f1be4 != unaff_R12D)) ||
            (DAT_1809f1be8 != unaff_R13D)) {
      FUN_180218250(lVar4,unaff_R12D,unaff_R13D);
    }
    if ((unaff_RSI != 0) && (DAT_180ccf6d4 == '\0')) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_180cecb60);
      if (DAT_180ccf607 == '\0') {
        DAT_180ccf607 = '\x01';
        FUN_180227480();
        DAT_180ccf6d4 = '\x01';
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cecb60);
    }
    if ((cVar8 != '\0') && (0 < unaff_R12D)) {
      piVar7 = &DAT_180931b4c;
      do {
        if ((*piVar7 == unaff_R12D) && (piVar7[1] == unaff_R13D)) goto LAB_18021a47e;
        piVar7 = piVar7 + 0xab;
      } while (piVar7 != &DAT_18093c64c);
    }
    piVar7 = (int *)0x0;
LAB_18021a47e:
    FUN_180218cd0(unaff_RBP + -0x50,cVar8,piVar7);
    FUN_180219030(unaff_RBP + -0x50,cVar8,piVar7);
    FUN_180219750(unaff_RBP + -0x50,cVar8,piVar7);
    if ((((cVar8 == '\0') || (piVar7 == (int *)0x0)) ||
        (*(char *)((longlong)piVar7 + 0x1a1) == '\0')) || (DAT_180cec89a == '\0')) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
      DAT_180cec840 = DAT_180cec8a0;
      DAT_180cec848 = DAT_180cec8a8;
    }
    LOCK();
    UNLOCK();
    bVar11 = DAT_180cc4c8c != cVar1;
    DAT_180cc4c8c = cVar1;
    if (bVar11) {
      pcVar9 = "kept";
      if (cVar1 != '\0') {
        pcVar9 = "removed";
      }
      FUN_180217550("sleeves | %s | %llx %llx",pcVar9,DAT_180cec8a0,DAT_180cec8a8);
    }
  }
  FUN_18000f890(unaff_RBP + -0x38);
  return;
}



/* ===== 18021a550 FUN_18021a550 ===== */

undefined1 * FUN_18021a550(undefined1 *param_1,longlong param_2,undefined1 param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int local_res8 [2];
  int local_res10;
  int local_res18 [2];
  int local_res20;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  int *local_68;
  int *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  uVar7 = 0xffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  FUN_180217620();
  uVar2 = DAT_180cec8c4;
  uVar1 = DAT_180ca09f8;
  if (param_2 == 0) {
    return param_1;
  }
  if (DAT_180cec8d0 == 0) {
    return param_1;
  }
  if (DAT_180cec8d4 == 0) {
    return param_1;
  }
  uVar12 = (ulonglong)DAT_180ca09f8;
  uVar10 = (ulonglong)DAT_180cec8c4;
  if (((DAT_180ca09f8 == 0) || (local_88 = FUN_18000f3a0(), local_88 == 0)) || (uVar2 == 0)) {
    local_88 = 0;
  }
  else {
    local_88 = local_88 + uVar10;
  }
  if ((((uVar1 == 0) || (lVar8 = FUN_18000f3a0(uVar12 + param_2), lVar8 == 0)) ||
      ((uVar2 == 0 || ((lVar8 = uVar10 + lVar8, lVar8 == 0 || (DAT_180cec8c8 == 0)))))) ||
     (lVar8 = FUN_18000f3a0(lVar8 + (ulonglong)DAT_180cec8c8), 0x7ffffffefffe < lVar8 - 0x10000U)) {
    lVar8 = 0;
  }
  else {
    lVar9 = FUN_18000f3a0(lVar8);
    lVar8 = 0;
    if (lVar9 - 0x10000U < 0x7ffffffeffff) {
      lVar8 = lVar9;
    }
  }
  if (local_88 == 0) {
    return param_1;
  }
  if (lVar8 == 0) {
    return param_1;
  }
  local_res10 = FUN_180217a40("first_or_third_person");
  local_res20 = FUN_180217a40("thirdperson_hide_default_gloves");
  iVar5 = FUN_180011200(lVar8 + 0x280);
  local_res18[0] = 0;
  iVar6 = 0;
  if (iVar5 - 1U < 0xfff) {
    iVar6 = iVar5;
  }
  if (iVar6 < 1) {
    return param_1;
  }
  while( true ) {
    iVar5 = local_res18[0];
    lVar9 = FUN_18000f3a0(lVar8 + 0x288);
    lVar9 = (longlong)iVar5 * 0x50 + lVar9;
    iVar5 = FUN_180011200(lVar9);
    if ((iVar5 == local_res10) ||
       (cVar3 = FUN_180218190(lVar9,"first_or_third_person"), cVar3 != '\0')) break;
    local_res18[0] = local_res18[0] + 1;
    if (iVar6 <= local_res18[0]) {
      return param_1;
    }
  }
  iVar6 = FUN_180011200(lVar9 + 0x28);
  if (0xffe < iVar6 - 1U) {
    return param_1;
  }
  lVar8 = FUN_18000f3a0(lVar9 + 0x30);
  uVar10 = 0;
  if (iVar6 < 1) {
    return param_1;
  }
  while( true ) {
    iVar5 = FUN_180011200(lVar8 + uVar10 * 0x18);
    local_res8[0] = (int)uVar10;
    if (iVar5 == local_res20) break;
    uVar10 = (ulonglong)(local_res8[0] + 1U);
    if (iVar6 <= (int)(local_res8[0] + 1U)) {
      return param_1;
    }
  }
  iVar5 = FUN_180011200(lVar9 + 0x10);
  iVar6 = 0;
  if (iVar5 - 1U < 0xfff) {
    iVar6 = iVar5;
  }
  if (iVar6 <= local_res8[0]) {
    return param_1;
  }
  *(int *)(param_1 + 8) = local_res8[0];
  *param_1 = 1;
  *(int *)(param_1 + 4) = local_res18[0];
  local_80 = FUN_18000f3a0(lVar9 + 0x40);
  lVar11 = (longlong)local_res8[0];
  lVar8 = FUN_18000f3a0(lVar9 + 0x18);
  local_78 = FUN_18000f3a0(lVar8 + lVar11 * 8);
  iVar6 = local_res18[0];
  local_70 = &local_88;
  local_68 = local_res18;
  local_60 = local_res8;
  local_58 = &local_80;
  local_50 = &local_78;
  if (DAT_180cec8d4 != 0) {
    lVar8 = (longlong)local_res18[0];
    lVar9 = (ulonglong)DAT_180cec8d4 + local_88;
    iVar5 = FUN_180011200(lVar9);
    if (iVar6 < iVar5) {
      lVar9 = FUN_18000f3a0(lVar9 + 8);
      uVar7 = FUN_180011200(lVar9 + lVar8 * 4);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = uVar7;
  cVar3 = FUN_18021a870(&local_70);
  if (cVar3 != '\0') {
    param_1[0x12] = 1;
    return param_1;
  }
  if (*(int *)(param_1 + 0xc) != local_res8[0]) {
    uVar4 = FUN_180217d80(param_2,local_res18[0]);
    param_1[0x10] = uVar4;
  }
  cVar3 = FUN_18021a870(&local_70);
  if (cVar3 == '\0') {
    uVar4 = FUN_180217db0(param_2);
    param_1[0x11] = uVar4;
  }
  uVar4 = FUN_18021a870(&local_70);
  param_1[0x12] = uVar4;
  return param_1;
}



/* ===== 18021a870 FUN_18021a870 ===== */

ulonglong FUN_18021a870(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)DAT_180cec8d4;
  if (DAT_180cec8d4 == 0) {
    puVar3 = (ulonglong *)0xffffffff;
  }
  else {
    iVar1 = *(int *)param_1[1];
    lVar4 = *(longlong *)*param_1;
    iVar2 = FUN_180011200(lVar4 + uVar5);
    if (iVar1 < iVar2) {
      lVar4 = FUN_18000f3a0(lVar4 + uVar5 + 8);
      puVar3 = (ulonglong *)FUN_180011200(lVar4 + (longlong)iVar1 * 4);
    }
    else {
      puVar3 = (ulonglong *)0xffffffff;
    }
  }
  if ((int)puVar3 == *(int *)param_1[2]) {
    uVar5 = FUN_18000f3a0((ulonglong)DAT_180cec8d0 + *(longlong *)*param_1);
    puVar3 = (ulonglong *)param_1[4];
    if ((*(ulonglong *)param_1[3] & uVar5) == *puVar3) {
      return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
    }
  }
  return (ulonglong)puVar3 & 0xffffffffffffff00;
}



/* ===== 18021a910 FUN_18021a910 ===== */

void FUN_18021a910(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  return;
}



/* ===== 18021ace0 FUN_18021ace0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18021ace0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  code *pcVar12;
  undefined8 ****ppppuVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  char *pcVar17;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [48];
  char *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 ****local_70;
  longlong lStack_68;
  longlong local_60;
  ulonglong uStack_58;
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  uVar4 = DAT_1809f177c;
  puVar16 = auStack_c8;
  local_10 = DAT_180919500 ^ (ulonglong)auStack_c8;
  LOCK();
  DAT_1809f177c = 0xffffffff;
  uVar10 = (ulonglong)uVar4;
  UNLOCK();
  if ((int)uVar4 < 0) goto LAB_18021afd8;
  local_90 = (char *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = (char *)FUN_18000fb70(0x40);
  uVar8 = s__function______try___InventoryAP_18070b628._8_8_;
  local_80 = 0x39;
  local_78 = 0x3f;
  *(undefined8 *)local_90 = s__function______try___InventoryAP_18070b628._0_8_;
  *(undefined8 *)(local_90 + 8) = uVar8;
  uVar8 = s__function______try___InventoryAP_18070b628._24_8_;
  *(undefined8 *)(local_90 + 0x10) = s__function______try___InventoryAP_18070b628._16_8_;
  *(undefined8 *)(local_90 + 0x18) = uVar8;
  uVar3 = s__function______try___InventoryAP_18070b628._44_4_;
  uVar2 = s__function______try___InventoryAP_18070b628._40_4_;
  uVar1 = s__function______try___InventoryAP_18070b628._36_4_;
  *(undefined4 *)(local_90 + 0x20) = s__function______try___InventoryAP_18070b628._32_4_;
  *(undefined4 *)(local_90 + 0x24) = uVar1;
  *(undefined4 *)(local_90 + 0x28) = uVar2;
  *(undefined4 *)(local_90 + 0x2c) = uVar3;
  uVar8 = s__function______try___InventoryAP_18070b628._49_8_;
  *(ulonglong *)(local_90 + 0x29) =
       CONCAT17(s__function______try___InventoryAP_18070b628[0x30],
                CONCAT43(s__function______try___InventoryAP_18070b628._44_4_,
                         s__function______try___InventoryAP_18070b628._41_3_));
  *(undefined8 *)(local_90 + 0x31) = uVar8;
  local_90[0x39] = '\0';
  if (((int)uVar4 < 1) || (lVar7 = FUN_1800e04f0(uVar4), lVar7 == 0)) {
LAB_18021ae70:
    FUN_1800134a0(&local_90," } catch (e) {} })();",0x15);
    if ((((DAT_180961ab8 != 0) && (lVar7 = FUN_18000f3a0(), lVar7 != 0)) &&
        (uVar10 = FUN_18000f3a0(lVar7 + 8), uVar10 != 0)) &&
       ((lVar7 = FUN_18000f3a0(uVar10), lVar7 != 0 && (lVar7 = FUN_18000f3a0(lVar7), lVar7 != 0))))
    {
LAB_18021af1d:
      puVar15 = auStack_c8;
      if (local_78 < 0x10) goto LAB_18021af3d;
      puVar16 = auStack_c8;
      if ((uVar10 == 0) ||
         (puVar16 = auStack_c8, puVar5 = auStack_c8, pcVar17 = local_90, local_90 == (char *)0x0))
      goto LAB_18021af9f;
      goto LAB_18021af42;
    }
    puVar16 = auStack_c8;
    if (DAT_180961ab0 != 0) {
      lVar7 = FUN_18000f3a0();
      puVar16 = auStack_c8;
      if (lVar7 != 0) {
        uVar10 = FUN_18000f3a0(lVar7 + 8);
        puVar16 = auStack_c8;
        if (uVar10 != 0) {
          lVar7 = FUN_18000f3a0(uVar10);
          puVar16 = auStack_c8;
          if (lVar7 != 0) {
            lVar7 = FUN_18000f3a0(lVar7);
            puVar16 = auStack_c8;
            if (lVar7 != 0) goto LAB_18021af1d;
          }
        }
      }
    }
  }
  else {
    uVar8 = FUN_18004e4f0(local_30,lVar7);
    uVar8 = FUN_180066ab0(local_50," InventoryAPI.PlayItemPreviewMusic(\'",uVar8);
    plVar9 = (longlong *)FUN_1800134a0(uVar8,"\', \'\');",7);
    local_70 = (undefined8 ****)*plVar9;
    lStack_68 = plVar9[1];
    local_60 = plVar9[2];
    uStack_58 = plVar9[3];
    plVar9[2] = 0;
    plVar9[3] = 0xf;
    *(undefined1 *)plVar9 = 0;
    ppppuVar13 = &local_70;
    if (0xf < uStack_58) {
      ppppuVar13 = local_70;
    }
    FUN_1800134a0(&local_90,ppppuVar13,local_60);
    if (uStack_58 < 0x10) {
LAB_18021ae58:
      FUN_18000f890(local_50);
      FUN_18000f890(local_30);
      goto LAB_18021ae70;
    }
    uVar14 = uStack_58 + 1;
    ppppuVar13 = local_70;
    if (uVar14 < 0x1000) {
LAB_18021ae52:
      thunk_FUN_1803d64e0(ppppuVar13,uVar14);
      goto LAB_18021ae58;
    }
    ppppuVar13 = (undefined8 ****)local_70[-1];
    if ((ulonglong)((longlong)local_70 + (-8 - (longlong)ppppuVar13)) < 0x20) {
      uVar14 = uStack_58 + 0x28;
      goto LAB_18021ae52;
    }
    pcVar12 = (code *)swi(0x29);
    (*pcVar12)(5);
    puVar15 = auStack_c0;
LAB_18021af3d:
    puVar5 = puVar15;
    pcVar17 = puVar15 + 0x38;
LAB_18021af42:
    puVar16 = puVar5;
    *(undefined8 *)(puVar16 + -8) = 0x18021af47;
    cVar6 = FUN_180200ed0();
    if (cVar6 != '\0') {
      *(undefined8 *)(puVar16 + -8) = 0x18021af50;
      lVar7 = FUN_180200ff0();
      if (lVar7 != 0) {
        *(undefined8 *)(puVar16 + -8) = 0x18021af60;
        lVar11 = FUN_18000f3a0(lVar7);
        if (lVar11 != 0) {
          *(undefined8 *)(puVar16 + -8) = 0x18021af71;
          pcVar12 = (code *)FUN_18000f3a0(lVar11 + 0x268);
          if ((DAT_180ceb448 <= pcVar12) && (pcVar12 < DAT_180ceb440)) {
            *(undefined8 *)(puVar16 + 0x20) = 1;
            *(undefined8 *)(puVar16 + -8) = 0x18021af9e;
            (*pcVar12)(lVar7,uVar10,pcVar17,&DAT_18070230d);
          }
        }
      }
    }
  }
LAB_18021af9f:
  uVar10 = *(ulonglong *)(puVar16 + 0x50);
  if (0xf < uVar10) {
    uVar14 = uVar10 + 1;
    lVar7 = *(longlong *)(puVar16 + 0x38);
    lVar11 = lVar7;
    if (0xfff < uVar14) {
      lVar11 = *(longlong *)(lVar7 + -8);
      if (0x1f < (lVar7 - lVar11) - 8U) {
        pcVar12 = (code *)swi(0x29);
        (*pcVar12)(5);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar14 = uVar10 + 0x28;
    }
    *(undefined8 *)(puVar16 + -8) = 0x18021afd8;
    thunk_FUN_1803d64e0(lVar11,uVar14);
  }
LAB_18021afd8:
  *(undefined8 *)(puVar16 + -8) = 0x18021afe8;
  return;
}



/* ===== 18021b010 FUN_18021b010 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18021b010(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  longlong lVar8;
  undefined1 local_res8;
  undefined1 uStackX_9;
  undefined2 uStackX_a;
  undefined4 uStackX_c;
  short local_res10 [4];
  undefined2 local_27;
  undefined1 local_25;
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    lVar4 = CONCAT44(uStackX_c,CONCAT22(uStackX_a,CONCAT11(uStackX_9,local_res8)));
  }
  else {
    lVar4 = DAT_181108a00;
  }
  if (((lVar4 == 0) || (DAT_180cec954 == 0)) ||
     (lVar4 = FUN_18000f3a0((ulonglong)DAT_180cec954 + lVar4), lVar4 == 0)) {
    DAT_180cec948 = 0;
    return;
  }
  iVar7 = 0;
  if (lVar4 != DAT_180cec948) {
    _DAT_180cec939 = local_27;
    DAT_180cec93b = local_25;
    DAT_180cec960 = '\0';
    DAT_180cec961 = uStackX_9;
    _DAT_180cec962 = 0;
    DAT_180cec938 = '\0';
    _DAT_180cec93c = 0;
    DAT_180cec948 = lVar4;
  }
  if ((DAT_180921498 == '\0') || (DAT_180ccfeda == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (DAT_180cec958 != 0) {
    if ((bVar1) && (DAT_180ccfeda != '\0')) {
      piVar5 = DAT_180cfc910;
      if (0 < DAT_1809216e4) {
        for (; piVar5 != DAT_180cfc918; piVar5 = piVar5 + 0x26) {
          if (*piVar5 == DAT_1809216e4) goto LAB_18021b127;
        }
      }
      piVar5 = (int *)0x0;
LAB_18021b127:
      if (piVar5 != (int *)0x0) {
        iVar7 = DAT_1809216e4;
      }
    }
    lVar8 = (ulonglong)DAT_180cec958 + lVar4;
    sVar6 = (short)iVar7;
    local_res10[0] = sVar6;
    sVar2 = FUN_180011440(lVar8);
    local_res8 = (undefined1)sVar2;
    uStackX_9 = (undefined1)((ushort)sVar2 >> 8);
    if (sVar6 == 0) {
      if (DAT_180cec960 != (char)iVar7) {
        if (sVar2 == DAT_180cec964) {
          FUN_180066890(lVar8,&DAT_180cec962);
        }
        DAT_180cec960 = '\0';
      }
    }
    else {
      if (DAT_180cec960 == '\0') {
        DAT_180cec960 = '\x01';
LAB_18021b199:
        _DAT_180cec962 = CONCAT31(CONCAT21(DAT_180cec964,uStackX_9),local_res8);
      }
      else if (sVar2 != DAT_180cec964) goto LAB_18021b199;
      if (sVar2 != sVar6) {
        FUN_180066890(lVar8,local_res10);
      }
      _DAT_180cec962 = CONCAT22(sVar6,_DAT_180cec962);
    }
  }
  if (DAT_180cec95c == 0) {
    return;
  }
  if ((!bVar1) || (lVar8 = FUN_180280f20(DAT_1809216e8), iVar7 = DAT_1809216e8, lVar8 == 0)) {
    lVar4 = (ulonglong)DAT_180cec95c + 0x14 + lVar4;
    iVar3 = FUN_180011200(lVar4);
LAB_18021b270:
    if (DAT_180cec938 == '\0') {
      return;
    }
    if (iVar3 == DAT_180cec940) {
      FUN_180013280(lVar4,&DAT_180cec93c);
    }
    DAT_180cec938 = 0;
    return;
  }
  lVar4 = (ulonglong)DAT_180cec95c + 0x14 + lVar4;
  local_res8 = (undefined1)DAT_1809216e8;
  uStackX_9 = (undefined1)((uint)DAT_1809216e8 >> 8);
  uStackX_a = (undefined2)((uint)DAT_1809216e8 >> 0x10);
  iVar3 = FUN_180011200(lVar4);
  if (iVar7 == 0) goto LAB_18021b270;
  if (DAT_180cec938 == '\0') {
    DAT_180cec938 = '\x01';
  }
  else if (iVar3 == DAT_180cec940) goto LAB_18021b22e;
  _DAT_180cec93c = CONCAT44(DAT_180cec940,iVar3);
LAB_18021b22e:
  if (iVar3 != iVar7) {
    FUN_180013280(lVar4,&local_res8);
  }
  _DAT_180cec93c = CONCAT44(iVar7,_DAT_180cec93c);
  return;
}



/* ===== 18021b2d0 FUN_18021b2d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18021b2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ULONGLONG UVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 *local_230;
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_258;
  if (DAT_1811150d0 < 0x191) {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_180540170(local_228,0,0x200);
    puVar1 = (ulonglong *)FUN_180013640();
    local_238 = 0;
    local_230 = &local_res10;
    FUN_180501904(*puVar1 | 2,local_228,0x200,param_1);
    UVar2 = GetTickCount64();
    FUN_1802b2870("wl_charms.log","[%llu] %s\n",UVar2,local_228);
    DAT_1811150d0 = DAT_1811150d0 + 1;
  }
  return;
}



/* ===== 18021b3a0 FUN_18021b3a0 ===== */

void FUN_18021b3a0(void)

{
  if ((DAT_180cec968 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cec968 = '\x01';
    DAT_180cec96c = FUN_18038eaf0("C_BaseEntity","m_pGameSceneNode");
    DAT_180cec970 = FUN_18038eaf0("CGameSceneNode","m_pChild");
    DAT_180cec974 = FUN_18038eaf0("CGameSceneNode","m_pNextSibling");
    DAT_180cec978 = FUN_18038eaf0("CGameSceneNode","m_pOwner");
    DAT_180cec97c = FUN_18038eaf0("CSkeletonInstance","m_modelState");
    DAT_180cec980 = FUN_18038eaf0("CModelState","m_ModelName");
    FUN_18021b2d0("offsets | node %#x | child %#x | sibling %#x | owner %#x | model %#x+%#x | add %p | remove %p | module vtable %p"
                  ,DAT_180cec96c,DAT_180cec970,DAT_180cec974,DAT_180cec978,DAT_180cec97c,
                  DAT_180cec980,DAT_180961ed8,DAT_180961ee0,DAT_1809620d8);
  }
  return;
}



/* ===== 18021b4c0 FUN_18021b4c0 ===== */

ulonglong FUN_18021b4c0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if (((DAT_180961ed8 == (code *)0x0) || (param_1 == 0)) || (param_2 == 0)) {
    uVar1 = (ulonglong)DAT_180961ed8 & 0xffffffffffffff00;
  }
  else {
    uVar1 = (*DAT_180961ed8)(param_1,param_2,0);
  }
  return uVar1;
}



/* ===== 18021b4f0 FUN_18021b4f0 ===== */

void FUN_18021b4f0(longlong param_1)

{
  if ((DAT_180961ee0 != (code *)0x0) && (param_1 != 0)) {
    (*DAT_180961ee0)();
  }
  return;
}



/* ===== 18021b510 FUN_18021b510 ===== */

void FUN_18021b510(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*param_2 < 1) {
      FUN_180290960(param_1,"keychain slot 0 id",0);
      return;
    }
    FUN_180290960(param_1,"keychain slot 0 id");
    FUN_180290960(param_1,"keychain slot 0 seed",param_2[1]);
    FUN_180290880(param_1,"keychain slot 0 offset x",param_2[2]);
    FUN_180290880(param_1,"keychain slot 0 offset y",param_2[3]);
    FUN_180290880(param_1,"keychain slot 0 offset z",param_2[4]);
    if ((0 < param_2[5]) ||
       (cVar1 = FUN_180298560(param_1,"keychain slot 0 sticker"), cVar1 != '\0')) {
      iVar2 = param_2[5];
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      FUN_180290960(param_1,"keychain slot 0 sticker",iVar2);
    }
  }
  return;
}



/* ===== 18021b5e0 FUN_18021b5e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18021b5e0(undefined4 param_1,longlong param_2,longlong param_3,int *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined1 auStack_1c8 [32];
  char *local_1a8;
  int local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined4 local_180;
  char *local_178;
  longlong local_170;
  char local_168;
  char local_167;
  undefined4 local_160 [2];
  int local_158;
  uint uStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  ulonglong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128 [3];
  undefined1 local_110 [184];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  if (((DAT_180961ed8 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    local_160[0] = param_1;
    uVar14 = FUN_18021b3a0();
    plVar5 = (longlong *)FUN_18021c100(uVar14,local_128,local_160);
    lVar8 = *plVar5;
    local_130 = lVar8;
    UVar6 = GetTickCount64();
    if ((((*(int *)(lVar8 + 0x34) != *param_4) || (*(int *)(lVar8 + 0x38) != param_4[1])) ||
        ((*(float *)(lVar8 + 0x3c) != (float)param_4[2] ||
         ((*(float *)(lVar8 + 0x40) != (float)param_4[3] ||
          (*(float *)(lVar8 + 0x44) != (float)param_4[4])))))) ||
       (*(int *)(lVar8 + 0x48) != param_4[5])) {
      uVar3 = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)(lVar8 + 0x34) = *(undefined8 *)param_4;
      *(undefined8 *)(lVar8 + 0x3c) = uVar3;
      *(undefined8 *)(lVar8 + 0x44) = *(undefined8 *)(param_4 + 4);
      *(ULONGLONG *)(lVar8 + 0x50) = UVar6;
    }
    cVar1 = *(char *)(lVar8 + 0x18);
    iVar13 = *param_4;
    if (cVar1 == '\0') {
      bVar2 = 0 < iVar13;
    }
    else if (((((*(int *)(lVar8 + 0x1c) == iVar13) && (*(int *)(lVar8 + 0x20) == param_4[1])) &&
              (*(float *)(lVar8 + 0x24) == (float)param_4[2])) &&
             ((*(float *)(lVar8 + 0x28) == (float)param_4[3] &&
              (*(float *)(lVar8 + 0x2c) == (float)param_4[4])))) &&
            (*(int *)(lVar8 + 0x30) == param_4[5])) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && ((cVar1 == '\0' || (0x95 < UVar6 - *(longlong *)(lVar8 + 0x50))))) {
      local_148 = *(undefined8 *)(param_4 + 4);
      local_158 = *param_4;
      uStack_154 = param_4[1];
      fStack_150 = (float)param_4[2];
      fStack_14c = (float)param_4[3];
      if ((cVar1 == '\0') ||
         (((*(int *)(lVar8 + 0x1c) < 1 || (*(int *)(lVar8 + 0x1c) != iVar13)) ||
          (*(int *)(lVar8 + 0x20) != param_4[1])))) {
        local_167 = '\0';
      }
      else {
        uStack_154 = (uint)((ulonglong)*(undefined8 *)param_4 >> 0x20) ^ 1;
        local_167 = '\x01';
      }
      FUN_18021b510(param_3,&local_158);
      local_168 = FUN_18021b4c0(param_2,param_3);
      lVar11 = 0;
      local_128[0] = DAT_1809620d8;
      local_170 = lVar11;
      if (DAT_1809620d8 != 0) {
        local_138 = 0;
        if (((DAT_180cec96c != 0) &&
            (lVar7 = FUN_18000f3a0(param_2 + (ulonglong)DAT_180cec96c), uVar12 = DAT_180cec978,
            lVar7 != 0)) && ((DAT_180cec970 != 0 && ((DAT_180cec974 != 0 && (DAT_180cec978 != 0)))))
           ) {
          FUN_180540170(local_110,0,0xb8);
          lVar4 = local_128[0];
          uVar10 = 1;
          iVar13 = 0;
          local_128[2] = lVar7;
          local_140 = 0;
          do {
            lVar8 = FUN_18000f3a0((ulonglong)DAT_180cec970 + local_128[local_140 + 2]);
            while ((lVar8 - 0x10000U < 0x7ffffffeffff && (iVar13 < 0xc0))) {
              iVar13 = iVar13 + 1;
              lVar7 = FUN_18000f3a0((ulonglong)uVar12 + lVar8);
              if ((lVar7 - 0x10000U < 0x7ffffffeffff) &&
                 ((lVar9 = FUN_18000f3a0(lVar7), lVar9 == lVar4 && (lVar11 == 0)))) {
                lVar11 = 1;
                local_138 = lVar7;
              }
              if (uVar10 < 0x18) {
                local_128[uVar10 + 2] = lVar8;
                uVar10 = uVar10 + 1;
              }
              lVar8 = FUN_18000f3a0((ulonglong)DAT_180cec974 + lVar8);
              uVar12 = DAT_180cec978;
            }
            local_140 = local_140 + 1;
            local_170 = local_138;
            lVar8 = local_130;
          } while (local_140 < uVar10);
        }
      }
      local_178 = "made none";
      local_1a8 = "";
      if (local_168 != '\0') {
        local_178 = "made one";
      }
      local_188 = (double)(float)local_148;
      local_1a0 = (int)uStack_154 / 10000;
      local_190 = (double)fStack_14c;
      if (local_167 != '\0') {
        local_1a8 = " (nudged)";
      }
      local_180 = local_148._4_4_;
      local_198 = (double)fStack_150;
      FUN_18021b2d0("apply | weapon %08X | charm %d | seed %d%s (NL Variant %d = seed / 10000) | offset %.2f %.2f %.2f | sticker %d | game %s | module %p"
                    ,local_160[0],local_158);
      *(undefined1 *)(lVar8 + 0x18) = 1;
      *(ulonglong *)(lVar8 + 0x1c) = CONCAT44(uStack_154,local_158);
      *(ulonglong *)(lVar8 + 0x24) = CONCAT44(fStack_14c,fStack_150);
      *(undefined1 *)(lVar8 + 0x58) = 1;
      *(undefined8 *)(lVar8 + 0x2c) = local_148;
    }
  }
  return;
}



/* ===== 18021b9f0 FUN_18021b9f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18021b9f0(uint param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  longlong local_130 [6];
  undefined1 local_100 [184];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_158;
  uVar1 = DAT_180cec9c0 &
          (((((ulonglong)(byte)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)(param_1 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(param_1 >> 0x10 & 0xff))
           * 0x100000001b3 ^ (ulonglong)(param_1 >> 0x18)) * 0x100000001b3;
  lVar9 = *(longlong *)(DAT_180cec9a8 + 8 + uVar1 * 0x10);
  if (lVar9 != DAT_180cec998) {
    uVar5 = *(uint *)(lVar9 + 0x10);
    while (param_1 != uVar5) {
      if (lVar9 == *(longlong *)(DAT_180cec9a8 + uVar1 * 0x10)) goto LAB_18021baa4;
      lVar9 = *(longlong *)(lVar9 + 8);
      uVar5 = *(uint *)(lVar9 + 0x10);
    }
    if (lVar9 != 0) goto LAB_18021baa7;
  }
LAB_18021baa4:
  lVar9 = DAT_180cec998;
LAB_18021baa7:
  if ((lVar9 != DAT_180cec998) && (param_2 != 0)) {
    FUN_18021b3a0();
    local_130[1] = 0;
    local_130[2] = 0;
    local_130[3] = 0;
    local_130[4] = 0;
    uVar1 = FUN_18021bce0(param_2,local_130 + 1,4);
    uVar6 = 0;
    if (uVar1 == 0) {
      FUN_18021b2d0("first person | weapon %08X | model %p | copies taken down %zu",param_1,param_2,
                    0);
      if ((((DAT_180cec96c != 0) &&
           (local_130[5] = FUN_18000f3a0((ulonglong)DAT_180cec96c + param_2), uVar11 = DAT_180cec978
           , uVar10 = DAT_180cec974, uVar5 = DAT_180cec970, local_130[5] != 0)) &&
          (DAT_180cec970 != 0)) && ((DAT_180cec974 != 0 && (DAT_180cec978 != 0)))) {
        FUN_180540170(local_100,0,0xb8);
        iVar7 = 0;
        uVar1 = 1;
        local_138 = 0;
        while( true ) {
          lVar2 = FUN_18000f3a0((ulonglong)uVar5 + local_130[local_138 + 5]);
          while ((lVar2 - 0x10000U < 0x7ffffffeffff && (iVar7 < 0xc0))) {
            iVar7 = iVar7 + 1;
            lVar3 = FUN_18000f3a0((ulonglong)uVar11 + lVar2);
            if (lVar3 - 0x10000U < 0x7ffffffeffff) {
              local_130[0] = lVar3;
              puVar4 = (undefined2 *)FUN_1803a0710(local_130);
              puVar8 = &DAT_1806dfbb4;
              if (puVar4 != (undefined2 *)0x0) {
                puVar8 = puVar4;
              }
              FUN_18021b2d0("first person | child %p | %s",lVar3,puVar8);
              uVar10 = DAT_180cec974;
              uVar11 = DAT_180cec978;
            }
            if (uVar1 < 0x18) {
              local_130[uVar1 + 5] = lVar2;
              uVar1 = uVar1 + 1;
            }
            lVar2 = FUN_18000f3a0((ulonglong)uVar10 + lVar2);
          }
          local_138 = local_138 + 1;
          if (uVar1 <= local_138) break;
          uVar5 = DAT_180cec970;
        }
      }
    }
    else {
      do {
        FUN_18021b4f0(local_130[uVar6 + 1]);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
      FUN_18021b2d0("first person | weapon %08X | model %p | copies taken down %zu",param_1,param_2,
                    uVar1);
    }
    *(undefined1 *)(lVar9 + 0x58) = 0;
  }
  return;
}



/* ===== 18021bce0 FUN_18021bce0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18021bce0(longlong param_1,longlong param_2,ulonglong param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  char *pcVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_258 [32];
  ulonglong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_218;
  undefined1 local_210 [184];
  char local_158 [259];
  undefined1 local_55;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_258;
  if ((((param_1 == 0) || (DAT_180cec96c == 0)) ||
      (local_228 = param_2, local_218 = FUN_18000f3a0(param_1 + (ulonglong)DAT_180cec96c),
      uVar9 = DAT_180cec970, local_218 == 0)) ||
     (((DAT_180cec970 == 0 || (DAT_180cec974 == 0)) || (DAT_180cec978 == 0)))) {
    return 0;
  }
  FUN_180540170(local_210,0,0xb8);
  uVar14 = 0;
  iVar12 = 0;
  uVar13 = 1;
  local_238 = 0;
  do {
    lVar4 = FUN_18000f3a0((ulonglong)uVar9 + *(longlong *)(local_210 + local_238 * 8 + -8));
    while ((lVar4 - 0x10000U < 0x7ffffffeffff && (iVar12 < 0xc0))) {
      iVar12 = iVar12 + 1;
      lVar5 = FUN_18000f3a0((ulonglong)DAT_180cec978 + lVar4);
      if ((lVar5 - 0x10000U < 0x7ffffffeffff) &&
         ((local_230 = lVar5, pcVar6 = (char *)FUN_1803a0710(&local_230), pcVar6 != (char *)0x0 &&
          (iVar3 = strcmp(pcVar6,"C_CS2HudModelAddon"), iVar3 == 0)))) {
        FUN_180540170(local_158 + 1,0,0x103);
        local_158[0] = '\0';
        if ((lVar4 == 0) || ((DAT_180cec97c == 0 || (DAT_180cec980 == 0)))) {
LAB_18021bf05:
          bVar1 = true;
        }
        else {
          lVar7 = FUN_18000f3a0((ulonglong)DAT_180cec97c + (ulonglong)DAT_180cec980 + lVar4);
          if (lVar7 - 0x10000U < 0x7ffffffeffff) {
            lVar10 = 0;
            do {
              cVar2 = FUN_180011220(lVar10 + lVar7);
              local_158[lVar10] = cVar2;
              if (cVar2 == '\0') goto LAB_18021bec5;
              uVar8 = lVar10 + 2;
              lVar10 = lVar10 + 1;
            } while (uVar8 < 0x104);
            local_55 = 0;
          }
LAB_18021bec5:
          if (((local_158[0] == '\0') || (lVar7 = FUN_1804ef120(local_158,"keychain"), lVar7 != 0))
             || (lVar7 = FUN_1804ef120(local_158,&DAT_18070b6bc), lVar7 != 0)) goto LAB_18021bf05;
          bVar1 = false;
        }
        pcVar6 = "left alone";
        if (bVar1) {
          pcVar6 = "a charm\'s copy";
        }
        pcVar11 = local_158;
        if (local_158[0] == '\0') {
          pcVar11 = "model unread";
        }
        FUN_18021b2d0("first person | addon %p | %s | %s",lVar5,pcVar11,pcVar6);
        if ((bVar1) && (uVar14 < param_3)) {
          *(longlong *)(local_228 + uVar14 * 8) = lVar5;
          uVar14 = uVar14 + 1;
        }
      }
      if (uVar13 < 0x18) {
        *(longlong *)(local_210 + uVar13 * 8 + -8) = lVar4;
        uVar13 = uVar13 + 1;
      }
      lVar4 = FUN_18000f3a0((ulonglong)DAT_180cec974 + lVar4);
    }
    local_238 = local_238 + 1;
    if (uVar13 <= local_238) {
      return uVar14;
    }
    uVar9 = DAT_180cec970;
  } while( true );
}



/* ===== 18021bff0 FUN_18021bff0 ===== */

void FUN_18021bff0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1803d64e0(puVar1,0x60);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x60);
  return;
}



/* ===== 18021c050 FUN_18021c050 ===== */

void FUN_18021c050(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_18021c3f0(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      thunk_FUN_1803d64e0(puVar1,0x60);
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



/* ===== 18021c100 FUN_18021c100 ===== */

undefined8 * FUN_18021c100(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  puVar7 = (undefined8 *)(DAT_180cec9c0 & uVar8);
  puVar4 = *(undefined8 **)(DAT_180cec9a8 + 8 + (longlong)puVar7 * 0x10);
  puVar9 = DAT_180cec998;
  if (puVar4 != DAT_180cec998) {
    puVar7 = *(undefined8 **)(DAT_180cec9a8 + (longlong)puVar7 * 0x10);
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
  if (DAT_180cec9a0 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x60,puVar7,DAT_180cec9a8,param_4,&DAT_180cec998,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  *(undefined2 *)((longlong)puVar4 + 0x19) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x1b) = 0;
  puVar4[9] = 0;
  *(undefined4 *)((longlong)puVar4 + 0x59) = 0;
  *(undefined2 *)((longlong)puVar4 + 0x5d) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x5f) = 0;
  *(undefined1 *)(puVar4 + 3) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x3c) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x44) = 0;
  puVar4[10] = 0;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  uVar3 = DAT_180cec9c8;
  if (DAT_180cec990 < (float)(DAT_180cec9a0 + 1) / (float)DAT_180cec9c8) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_180cec9a0 + 1) / DAT_180cec990);
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
    FUN_18021c620(uVar6,uVar10);
    puVar7 = *(undefined8 **)(DAT_180cec9a8 + 8 + (DAT_180cec9c0 & uVar8) * 0x10);
    puVar9 = DAT_180cec998;
    if (puVar7 != DAT_180cec998) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar9 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar9 == *(undefined8 **)(DAT_180cec9a8 + (DAT_180cec9c0 & uVar8) * 0x10))
        goto LAB_18021c368;
        puVar9 = (undefined8 *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_18021c368:
  puVar7 = (undefined8 *)puVar9[1];
  DAT_180cec9a0 = DAT_180cec9a0 + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar9[1] = puVar4;
  lVar5 = DAT_180cec9a8;
  uVar8 = DAT_180cec9c0 & uVar8;
  puVar2 = *(undefined8 **)(DAT_180cec9a8 + uVar8 * 0x10);
  if (puVar2 == DAT_180cec998) {
    *(undefined8 **)(DAT_180cec9a8 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar9) {
      *(undefined8 **)(DAT_180cec9a8 + uVar8 * 0x10) = puVar4;
      goto LAB_18021c3c7;
    }
    if (*(undefined8 **)(DAT_180cec9a8 + 8 + uVar8 * 0x10) != puVar7) goto LAB_18021c3c7;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
LAB_18021c3c7:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18021c3f0 FUN_18021c3f0 ===== */

longlong * FUN_18021c3f0(longlong param_1,longlong *param_2,longlong *param_3)

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
    thunk_FUN_1803d64e0(plVar9,0x60);
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
          thunk_FUN_1803d64e0(plVar10,0x60);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) goto LAB_18021c5a6;
        }
        *plVar7 = (longlong)puVar2;
        *(undefined8 **)(lVar1 + 8 + uVar12 * 0x10) = puVar2;
      }
      goto LAB_18021c5a9;
    }
    plVar9 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
LAB_18021c5a6:
    *plVar7 = (longlong)plVar11;
  }
LAB_18021c5a9:
  *puVar3 = plVar11;
  plVar11[1] = (longlong)puVar3;
  return param_3;
}



/* ===== 18021c620 FUN_18021c620 ===== */

void FUN_18021c620(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180cec998;
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
  FUN_180029d30(&DAT_180cec9a8,2L << (bVar10 & 0x3f),DAT_180cec998);
  DAT_180cec9c0 = lVar11 - 1;
  DAT_180cec9c8 = lVar11;
  plVar7 = (longlong *)*DAT_180cec998;
  lVar11 = DAT_180cec9a8;
joined_r0x00018021c69c:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180cec9a8 = lVar11;
          return;
        }
        plVar1 = (longlong *)*plVar7;
        uVar9 = (((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 & DAT_180cec9c0;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180cec9a8 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180cec9a8;
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
      lVar11 = DAT_180cec9a8;
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
        lVar11 = DAT_180cec9a8;
        goto joined_r0x00018021c69c;
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
    lVar11 = DAT_180cec9a8;
  } while( true );
}



/* ===== 18021c7f0 FUN_18021c7f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18021c7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ULONGLONG UVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 *local_230;
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_258;
  if (DAT_180ceca58 < 0xbb9) {
    DAT_180ceca58 = DAT_180ceca58 + 1;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_180540170(local_228,0,0x200);
    puVar1 = (ulonglong *)FUN_180013640();
    local_238 = 0;
    local_230 = &local_res10;
    FUN_180501904(*puVar1 | 2,local_228,0x200,param_1);
    UVar2 = GetTickCount64();
    FUN_1802b2870("wl_placement.log","[%llu] %s\n",UVar2,local_228);
  }
  return;
}



/* ===== 18021c8d0 FUN_18021c8d0 ===== */

ulonglong FUN_18021c8d0(longlong param_1,longlong param_2,ulonglong param_3)

{
  char cVar1;
  ulonglong uVar2;
  
  if (param_1 - 0x10000U < 0x7ffffffeffff) {
    uVar2 = 0;
    while( true ) {
      if (param_3 <= uVar2 + 1) break;
      cVar1 = *(char *)(uVar2 + param_1);
      *(char *)(uVar2 + param_2) = cVar1;
      if (cVar1 == '\0') {
        return 1;
      }
      uVar2 = uVar2 + 1;
    }
    *(char *)(uVar2 + param_2) = '\0';
    uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  else {
    uVar2 = param_1 - 0x10000U & 0xffffffffffffff00;
  }
  return uVar2;
}



/* ===== 18021c940 FUN_18021c940 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18021c940(longlong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [32];
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
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_b8;
  if (param_1 != 0) {
    uVar2 = FUN_180011200(param_1 + 0x28);
    lVar4 = FUN_18000f3a0(param_1 + 0x30);
    if ((uVar2 - 1 < 0x2000) && (lVar4 != 0)) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        lVar5 = FUN_18000f3a0(lVar4 + (ulonglong)uVar2 * 8);
        if (lVar5 != 0) {
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_48 = 0;
          uStack_40 = 0;
          uVar6 = FUN_18000f3a0(lVar5 + 0x10);
          cVar1 = FUN_18021c8d0(uVar6,&local_98,0x60);
          if ((cVar1 != '\0') && (iVar3 = strcmp((char *)&local_98,param_2), iVar3 == 0)) {
            return lVar5;
          }
        }
      }
    }
  }
  return 0;
}



/* ===== 18021ca30 FUN_18021ca30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18021ca30(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  bool bVar13;
  undefined1 auStack_108 [40];
  undefined8 ****local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  ulonglong local_c8;
  undefined8 ****local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined8 ****local_a0 [3];
  ulonglong local_88;
  char local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_108;
  lVar5 = FUN_1800e35e0(param_2);
  if (lVar5 == 0) {
    uStack_b8 = 0;
    local_b0 = 0;
    local_a8 = 0xf;
    local_c0 = (undefined8 ****)0x0;
  }
  else {
    FUN_1800e1b20(&local_c0,lVar5);
  }
  lVar5 = FUN_1800e35e0();
  if (lVar5 == 0) {
    uStack_d8 = 0;
    local_d0 = 0;
    local_c8 = 0xf;
    local_e0 = (undefined8 ****)0x0;
  }
  else {
    FUN_1800e1c40(&local_e0,lVar5,param_3);
  }
  if ((local_b0 == 0) || (local_d0 == 0)) {
    uVar6 = 0;
  }
  else {
    FUN_180073a70(local_a0,&local_c0,"Frame");
    ppppuVar8 = &local_e0;
    if (0xf < local_c8) {
      ppppuVar8 = local_e0;
    }
    ppppuVar11 = local_a0;
    if (0xf < local_88) {
      ppppuVar11 = local_a0[0];
    }
    ppppuVar12 = &local_c0;
    if (0xf < local_a8) {
      ppppuVar12 = local_c0;
    }
    iVar10 = 0;
    if (param_1 != 0) {
      for (; iVar10 < 0x40; iVar10 = iVar10 + 1) {
        lVar5 = FUN_18000f3a0(param_1 + 0x18);
        if (lVar5 == 0) goto LAB_18021cb4e;
        param_1 = lVar5;
      }
    }
    param_1 = 0;
LAB_18021cb4e:
    uVar6 = FUN_18021c940(param_1,ppppuVar12);
    uVar6 = FUN_18021c940(uVar6,ppppuVar11);
    lVar5 = FUN_18021c940(uVar6,ppppuVar8);
    if (lVar5 == 0) {
      uVar6 = 0;
      FUN_18000f890(local_a0);
    }
    else {
      uVar7 = FUN_18000f3a0(lVar5 + 8);
      lVar5 = FUN_18000f3a0();
      if (lVar5 == 0) {
LAB_18021cc44:
        bVar13 = false;
      }
      else {
        if (DAT_180cec9f8 == 0) {
          uVar9 = FUN_18000f3a0(lVar5 + -8);
          uVar3 = FUN_180011200(uVar9 + 0xc);
          uVar4 = FUN_180011200();
          if ((((uVar9 != 0) && (uVar3 != 0)) && (uVar4 != 0)) && (uVar4 <= uVar9)) {
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
            local_78[0x30] = '\0';
            local_78[0x31] = '\0';
            local_78[0x32] = '\0';
            local_78[0x33] = '\0';
            local_78[0x34] = '\0';
            local_78[0x35] = '\0';
            local_78[0x36] = '\0';
            local_78[0x37] = '\0';
            local_78[0x38] = '\0';
            local_78[0x39] = '\0';
            local_78[0x3a] = '\0';
            local_78[0x3b] = '\0';
            local_78[0x3c] = '\0';
            local_78[0x3d] = '\0';
            local_78[0x3e] = '\0';
            local_78[0x3f] = '\0';
            cVar2 = FUN_18021c8d0(((ulonglong)uVar3 - (ulonglong)uVar4) + 0x10 + uVar9,local_78,0x40
                                 );
            if (cVar2 != '\0') {
              iVar10 = strcmp(local_78,".?AVCUI_Item3dPanel@@");
              if (iVar10 == 0) {
                bVar13 = true;
                DAT_180cec9f8 = lVar5;
                goto LAB_18021cc46;
              }
            }
          }
          goto LAB_18021cc44;
        }
        bVar13 = lVar5 == DAT_180cec9f8;
      }
LAB_18021cc46:
      uVar6 = 0;
      if (bVar13) {
        uVar6 = uVar7;
      }
      FUN_18000f890(local_a0);
    }
  }
  if (0xf < local_c8) {
    uVar9 = local_c8 + 1;
    ppppuVar8 = local_e0;
    if (0xfff < uVar9) {
      ppppuVar8 = (undefined8 ****)local_e0[-1];
      if (0x1f < (ulonglong)((longlong)local_e0 + (-8 - (longlong)ppppuVar8))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        goto LAB_18021cd11;
      }
      uVar9 = local_c8 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar8,uVar9);
  }
  local_d0 = 0;
  local_c8 = 0xf;
  local_e0 = (undefined8 ****)((ulonglong)local_e0 & 0xffffffffffffff00);
  if (0xf < local_a8) {
    uVar9 = local_a8 + 1;
    ppppuVar8 = local_c0;
    if (0xfff < uVar9) {
      ppppuVar8 = (undefined8 ****)local_c0[-1];
      if (0x1f < (ulonglong)((longlong)local_c0 + (-8 - (longlong)ppppuVar8))) {
LAB_18021cd11:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      uVar9 = local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar8,uVar9);
  }
  return uVar6;
}



/* ===== 18021cd20 FUN_18021cd20 ===== */

void FUN_18021cd20(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x618))();
  }
  return;
}



/* ===== 18021cd40 FUN_18021cd40 ===== */

void FUN_18021cd40(void)

{
  (*DAT_180961d60)();
  return;
}



/* ===== 18021cd60 FUN_18021cd60 ===== */

void FUN_18021cd60(longlong param_1)

{
  undefined4 uVar1;
  undefined4 local_res10 [6];
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x4c) == '\0') {
    local_res10[0] = 0;
  }
  else {
    local_res10[0] = *(undefined4 *)(param_1 + 0x40);
  }
  FUN_180013280(DAT_180961d88,local_res10);
  if (*(char *)(param_1 + 0x4c) == '\0') {
    local_res10[0] = 0;
  }
  else {
    local_res10[0] = *(undefined4 *)(param_1 + 0x44);
  }
  FUN_180013280(DAT_180961d88 + 4,local_res10);
  if (*(char *)(param_1 + 0x4c) != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x48);
  }
  local_res10[0] = uVar1;
  FUN_180013280(DAT_180961d88 + 8,local_res10);
  return;
}



/* ===== 18021ce00 FUN_18021ce00 ===== */

void FUN_18021ce00(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ULONGLONG UVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  UVar3 = GetTickCount64();
  if (499 < UVar3 - *(longlong *)(param_2 + 0x70)) {
    *(ULONGLONG *)(param_2 + 0x70) = UVar3;
    uVar1 = FUN_180011220(param_1 + 0x830);
    uVar2 = FUN_180011220(param_1 + 0x831);
    fVar4 = (float)FUN_18000f3d0(DAT_180961d88);
    fVar5 = (float)FUN_18000f3d0(DAT_180961d88 + 4);
    fVar6 = (float)FUN_18000f3d0(DAT_180961d88 + 8);
    fVar7 = (float)FUN_18000f3d0(param_1 + 0x824);
    fVar8 = (float)FUN_18000f3d0(param_1 + 0x828);
    fVar9 = (float)FUN_18000f3d0(param_1 + 0x81c);
    fVar10 = (float)FUN_18000f3d0(param_1 + 0x820);
    fVar12 = 0.0;
    if (DAT_180961c38 == 0) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = (float)FUN_18000f3d0();
    }
    if (DAT_180961c40 != 0) {
      fVar12 = (float)FUN_18000f3d0();
    }
    FUN_18021c7f0("readback %s | drag %d moved %d | point global %.2f %.2f %.2f | ours set %d %.2f %.2f %.2f | sticker %.3f %.3f + %.3f %.3f ours %.3f %.3f + %.3f %.3f | apply %.3f %.3f | placed %d %.2f %.2f %.2f | drags %d"
                  ,param_3,uVar1,uVar2,(double)fVar4,(double)fVar5,(double)fVar6,
                  *(char *)(param_2 + 0x4c) != '\0',(double)*(float *)(param_2 + 0x40),
                  (double)*(float *)(param_2 + 0x44),(double)*(float *)(param_2 + 0x48),
                  (double)fVar7,(double)fVar8,(double)fVar9,(double)fVar10,
                  (double)*(float *)(param_2 + 0x34),(double)*(float *)(param_2 + 0x38),
                  (double)*(float *)(param_2 + 0x84),(double)*(float *)(param_2 + 0x88),
                  (double)fVar11,(double)fVar12,*(char *)(param_2 + 0x5c) != '\0',
                  (double)*(float *)(param_2 + 0x50),(double)*(float *)(param_2 + 0x54),
                  (double)*(float *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x78));
  }
  return;
}



/* ===== 18021d1a0 FUN_18021d1a0 ===== */

void FUN_18021d1a0(longlong param_1,longlong param_2)

{
  float fVar1;
  float *pfVar2;
  bool bVar3;
  float local_res8 [2];
  float local_res10 [2];
  
  local_res8[0]._0_1_ = 1;
  FUN_1800233d0(param_1 + 0x810,local_res8);
  local_res8[0] = (float)((uint)local_res8[0]._1_3_ << 8);
  FUN_1800233d0(param_1 + 0x811,local_res8);
  local_res8[0]._0_1_ = 1;
  FUN_1800233d0(param_1 + 0x812,local_res8);
  bVar3 = *(char *)(param_2 + 0x80) != '\0';
  local_res8[0]._0_1_ = bVar3;
  FUN_1800233d0(param_1 + 0x830,local_res8);
  local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,bVar3);
  FUN_1800233d0(param_1 + 0x831,local_res8);
  local_res8[0] = 0.0;
  FUN_180013280(param_1 + 0x81c,local_res8);
  local_res8[0] = 0.0;
  FUN_180013280(param_1 + 0x820,local_res8);
  fVar1 = DAT_1808ace10;
  pfVar2 = (float *)(param_2 + 0x34);
  if (*(char *)(param_2 + 0x80) != '\0') {
    local_res10[0] = *(float *)(param_2 + 0x84) + *pfVar2;
    local_res8[0] = -8.0;
    pfVar2 = local_res8;
    if (DAT_1808ace10 <= local_res10[0]) {
      pfVar2 = local_res10;
    }
    if (DAT_1808ac838 < local_res10[0]) {
      pfVar2 = (float *)&DAT_180623ee4;
    }
  }
  FUN_180013280(param_1 + 0x824,pfVar2);
  pfVar2 = (float *)(param_2 + 0x38);
  if (*(char *)(param_2 + 0x80) != '\0') {
    local_res10[0] = *(float *)(param_2 + 0x88) + *pfVar2;
    local_res8[0] = -8.0;
    pfVar2 = local_res8;
    if (fVar1 <= local_res10[0]) {
      pfVar2 = local_res10;
    }
    if (DAT_1808ac838 < local_res10[0]) {
      pfVar2 = (float *)&DAT_180623ee4;
    }
  }
  FUN_180013280(param_1 + 0x828,pfVar2);
  FUN_180013280(param_1 + 0x838,param_2 + 0x3c);
  FUN_180013280(DAT_180961d80,param_2 + 0x10);
  return;
}



/* ===== 18021d350 FUN_18021d350 ===== */

uint * FUN_18021d350(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  param_1[0] = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  if (((DAT_180961f00 != 0) && (DAT_180961ef8 != 0)) && (DAT_180961ef0 != 0)) {
    uVar4 = FUN_18000f3a0();
    lVar5 = DAT_180961ef8;
    *(undefined8 *)(param_1 + 4) = uVar4;
    uVar2 = FUN_180011200(lVar5);
    lVar5 = DAT_180961ef0;
    param_1[6] = uVar2;
    lVar5 = FUN_18000f3a0(lVar5);
    if (lVar5 != 0) {
      uVar3 = FUN_180011200(lVar5 + 4);
    }
    param_1[7] = uVar3;
  }
  lVar5 = DAT_180961d88;
  if (DAT_180961d88 != 0) {
    bVar1 = FUN_180011220(DAT_180961d88 + -0x10);
    *param_1 = (uint)bVar1;
    uVar3 = FUN_18000f3d0(lVar5 + -0xc);
    param_1[3] = uVar3;
    uVar3 = FUN_18000f3d0(lVar5 + -8);
    param_1[2] = uVar3;
    uVar3 = FUN_180011200(lVar5 + -4);
    param_1[1] = uVar3;
  }
  return param_1;
}



/* ===== 18021d420 FUN_18021d420 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18021d420(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  short sVar11;
  undefined4 *puVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar19;
  undefined1 local_98 [112];
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  if (*(int *)(param_1 + 0xc0) == *(int *)(param_1 + 0xcc)) {
    return;
  }
  puVar12 = (undefined4 *)FUN_18021d350(local_98);
  uVar4 = *puVar12;
  uVar5 = puVar12[1];
  fVar1 = (float)puVar12[2];
  fVar2 = (float)puVar12[3];
  if (*(char *)(param_1 + 0x18) != '\0') {
    cVar3 = *(char *)(param_1 + 0x5c);
    lVar13 = 0x50;
    if (cVar3 == '\0') {
      lVar13 = 0x40;
    }
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar13 + param_1);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(lVar13 + 8 + param_1);
    if ((cVar3 != '\0') || (*(char *)(param_1 + 0x4c) != '\0')) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    *(undefined1 *)(param_1 + 0xec) = uVar10;
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0xc0);
    FUN_18021c7f0("commit %s | charm | dragged point %d %.3f %.3f %.3f | saved = game placed (snapped) %d %.3f %.3f %.3f | thinks %d | point overwrites %d | trace %d idx %d uv %.3f %.3f"
                  ,param_2,*(char *)(param_1 + 0x4c) != '\0',(double)*(float *)(param_1 + 0x40),
                  (double)*(float *)(param_1 + 0x44),(double)*(float *)(param_1 + 0x48),
                  cVar3 != '\0',(double)*(float *)(param_1 + 0x50),
                  (double)*(float *)(param_1 + 0x54),(double)*(float *)(param_1 + 0x58),
                  *(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x128),uVar4,
                  CONCAT44(uVar19,uVar5),(double)fVar1,(double)fVar2);
    return;
  }
  uVar19 = puVar12[7];
  fVar16 = 0.0;
  bVar9 = false;
  bVar8 = false;
  uVar7 = *(undefined8 *)(puVar12 + 4);
  uVar6 = puVar12[6];
  fVar17 = 0.0;
  fVar18 = 0.0;
  if ((((DAT_180961c38 == 0) || (DAT_180961c40 == 0)) || (DAT_180961c48 == 0)) ||
     (*(int *)(param_1 + 0xb8) < 1)) goto LAB_18021d70c;
  uVar15 = FUN_18000f3d0();
  fVar17 = (float)uVar15;
  fVar18 = (float)FUN_18000f3d0(DAT_180961c40);
  fVar16 = (float)FUN_18000f3d0(DAT_180961c48);
  sVar11 = thunk_FUN_1805266e0(uVar15);
  bVar8 = bVar9;
  if (sVar11 < 1) {
    if (((((uint)fVar18 & 0x7f800000) == 0x7f800000) || (((uint)fVar16 & 0x7f800000) == 0x7f800000))
       || ((DAT_1808ac838 < (float)((uint)fVar17 & _DAT_1808ade90) ||
           ((DAT_1808ac838 < (float)((uint)fVar18 & _DAT_1808ade90) ||
            (uVar14 = FUN_180516750(fVar16 - *(float *)(param_1 + 0x3c)),
            DAT_1808ac000 <= (float)(uVar14 & _DAT_1808ade90))))))) {
      if (0 < sVar11) goto LAB_18021d6e4;
    }
    else {
      bVar8 = true;
    }
    if (((uint)fVar18 & 0x7f800000) != 0x7f800000) goto LAB_18021d70c;
  }
LAB_18021d6e4:
  FUN_180013280(DAT_180961c38,param_1 + 0x34);
  FUN_180013280(DAT_180961c40,param_1 + 0x38);
LAB_18021d70c:
  FUN_18021c7f0("commit %s | sticker slot %d | ours %.4f %.4f rot %.2f | game %d %.4f %.4f rot %.2f | thinks %d | trace %d idx %d uv %.3f %.3f | trace world %p frame %d / now %d"
                ,param_2,*(undefined4 *)(param_1 + 0x10),(double)*(float *)(param_1 + 0x34),
                (double)*(float *)(param_1 + 0x38),(double)*(float *)(param_1 + 0x3c),bVar8,
                (double)fVar17,(double)fVar18,(double)fVar16,*(undefined4 *)(param_1 + 0xb8),uVar4,
                uVar5,(double)fVar1,(double)fVar2,uVar7,uVar6,uVar19);
  if (bVar8) {
    *(float *)(param_1 + 0x34) = fVar17;
    *(float *)(param_1 + 0x38) = fVar18;
  }
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0xc0);
  return;
}



/* ===== 18021d860 FUN_18021d860 ===== */

void FUN_18021d860(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  double dVar7;
  float local_res8 [4];
  float local_res18 [4];
  
  if (*(char *)(param_1 + 0x80) != '\0') {
    *(undefined1 *)(param_1 + 0x80) = 0;
    fVar4 = DAT_1808ac838;
    if (*(char *)(param_1 + 0x18) == '\0') {
      fVar1 = *(float *)(param_1 + 0x34);
      fVar2 = *(float *)(param_1 + 0x38);
      local_res18[0] = *(float *)(param_1 + 0x84) + fVar1;
      local_res8[0] = -8.0;
      pfVar5 = local_res8;
      if (DAT_1808ace10 <= local_res18[0]) {
        pfVar5 = local_res18;
      }
      fVar6 = *(float *)(param_1 + 0x88) + fVar2;
      if (DAT_1808ac838 < local_res18[0]) {
        pfVar5 = (float *)&DAT_180623ee4;
      }
      fVar3 = *pfVar5;
      local_res8[0] = -8.0;
      pfVar5 = local_res8;
      if (DAT_1808ace10 <= fVar6) {
        pfVar5 = local_res18;
      }
      *(float *)(param_1 + 0x34) = fVar3;
      local_res18[0] = fVar6;
      if (fVar4 < fVar6) {
        pfVar5 = (float *)&DAT_180623ee4;
      }
      dVar7 = (double)*pfVar5;
      *(float *)(param_1 + 0x38) = *pfVar5;
      FUN_18021c7f0("release %s | press %d | moved px %.1f %.1f | image %.1f %.1f | uv %.4f %.4f | sticker %.4f %.4f + %.4f %.4f -> %.4f %.4f"
                    ,dVar7,*(undefined4 *)(param_1 + 0xb0),(double)*(float *)(param_1 + 0x98),
                    (double)*(float *)(param_1 + 0x9c),(double)*(float *)(param_1 + 0xa8),
                    (double)*(float *)(param_1 + 0xac),(double)*(float *)(param_1 + 0xa0),
                    (double)*(float *)(param_1 + 0xa4),(double)fVar1,(double)fVar2,
                    (double)*(float *)(param_1 + 0x84),(double)*(float *)(param_1 + 0x88),
                    (double)fVar3,dVar7);
    }
    else {
      FUN_18021c7f0("release %s | press %d | moved px %.1f %.1f | image %.1f %.1f | uv %.4f %.4f | charm point %.2f %.2f %.2f -> %.2f %.2f %.2f | placed %d %.2f %.2f %.2f"
                    ,(double)*(float *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0xb0),
                    (double)*(float *)(param_1 + 0x98),(double)*(float *)(param_1 + 0x9c),
                    (double)*(float *)(param_1 + 0xa8),(double)*(float *)(param_1 + 0xac),
                    (double)*(float *)(param_1 + 0xa0),(double)*(float *)(param_1 + 0xa4),
                    (double)*(float *)(param_1 + 0x8c),(double)*(float *)(param_1 + 0x90),
                    (double)*(float *)(param_1 + 0x94),(double)*(float *)(param_1 + 0x40),
                    (double)*(float *)(param_1 + 0x44),(double)*(float *)(param_1 + 0x48),
                    *(char *)(param_1 + 0x5c) != '\0',(double)*(float *)(param_1 + 0x50),
                    (double)*(float *)(param_1 + 0x54),(double)*(float *)(param_1 + 0x58));
    }
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  }
  return;
}



/* ===== 18021dbc0 FUN_18021dbc0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18021dbc0(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float local_38 [3];
  float local_2c [9];
  
  fVar2 = (float)FUN_18000f3d0(DAT_180961c50);
  local_38[0] = fVar2;
  fVar3 = (float)FUN_18000f3d0(DAT_180961c58);
  local_38[1] = fVar3;
  local_38[2] = (float)FUN_18000f3d0(DAT_180961c60);
  pfVar1 = local_38;
  while( true ) {
    if (((uint)*pfVar1 & 0x7f800000) == 0x7f800000) {
      return;
    }
    if (DAT_1808acbb4 < (float)((uint)*pfVar1 & _DAT_1808ade90)) break;
    pfVar1 = pfVar1 + 1;
    if (pfVar1 == local_2c) {
      if (((fVar2 != 0.0) || (fVar3 != 0.0)) || (local_38[2] != 0.0)) {
        *(ulonglong *)(param_1 + 0x50) = CONCAT44(fVar3,fVar2);
        *(float *)(param_1 + 0x58) = local_38[2];
        *(undefined1 *)(param_1 + 0x5c) = 1;
      }
      return;
    }
  }
  return;
}



/* ===== 18021dca0 FUN_18021dca0 ===== */

void FUN_18021dca0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  cVar1 = FUN_180011220(param_1 + 0x811);
  cVar2 = FUN_180011220(param_1 + 0x999);
  cVar3 = FUN_180011220();
  if (param_1 == 0) {
    lVar11 = 0;
    lVar12 = 0;
LAB_18021dd9d:
    lVar7 = 0;
  }
  else {
    iVar5 = FUN_180011200(param_1 + 0xab0);
    if (iVar5 - 1U < 0xfffffffe) {
      plVar6 = (longlong *)FUN_1803a0940(local_res10);
      lVar11 = *plVar6;
    }
    else {
      lVar11 = 0;
    }
    iVar5 = FUN_180011200(param_1 + 0x8f8);
    if (iVar5 - 1U < 0xfffffffe) {
      plVar6 = (longlong *)FUN_1803a0940();
      lVar12 = *plVar6;
    }
    else {
      lVar12 = 0;
    }
    if ((lVar11 == 0) || (DAT_180ceca50 == 0)) goto LAB_18021dd9d;
    iVar5 = FUN_180011200(DAT_180ceca50 + lVar11);
    if (0xfffffffd < iVar5 - 1U) goto LAB_18021dd9d;
    plVar6 = (longlong *)FUN_1803a0940();
    lVar7 = *plVar6;
  }
  if ((lVar12 == 0) || (DAT_180ceca80 == 0)) {
LAB_18021ddd5:
    lVar10 = 0;
  }
  else {
    iVar5 = FUN_180011200(DAT_180ceca80 + lVar12);
    if (0xfffffffd < iVar5 - 1U) goto LAB_18021ddd5;
    plVar6 = (longlong *)FUN_1803a0940();
    lVar10 = *plVar6;
  }
  if (lVar7 == 0) {
LAB_18021ddfa:
    if (lVar10 != 0) {
      lVar7 = FUN_18000f3a0();
      if (lVar7 != 0) {
        cVar4 = FUN_180011220();
        if (cVar4 != '\0') goto LAB_18021de1d;
      }
    }
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = FUN_18000f3a0();
    if (lVar7 == 0) goto LAB_18021ddfa;
    cVar4 = FUN_180011220();
    if (cVar4 == '\0') goto LAB_18021ddfa;
LAB_18021de1d:
    uVar9 = 1;
    uVar8 = 0x10;
  }
  uVar8 = (uVar8 | -(uint)(lVar12 != 0) & 8 | -(uint)(lVar11 != 0) & 4 | -(uint)(cVar3 != '\0') & 2
          | (uint)(cVar2 != '\0')) * 2 | local_res20 * 0x100 + 0x100U | local_res18 * 0x40 + 0x40U |
          (uint)(cVar1 != '\0');
  if (uVar8 != *(uint *)(param_2 + 100)) {
    *(int *)(param_2 + 0x120) = *(int *)(param_2 + 0x120) + 1;
    *(uint *)(param_2 + 100) = uVar8;
    if (*(int *)(param_2 + 0x120) < 0xd) {
      FUN_18021c7f0("stage 12 | keychain %d | 999 %d | ab5 %d | player %d | item %d | hud drawn %d | item drawn %d -> %d"
                    ,(uint)(cVar1 != '\0'),(uint)(cVar2 != '\0'),cVar3 != '\0',lVar11 != 0,
                    lVar12 != 0,uVar9,local_res18,local_res20);
    }
  }
  return;
}



/* ===== 18021def0 FUN_18021def0 ===== */

void FUN_18021def0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  
  local_res8[0] = local_res8[0] & 0xffffff00;
  FUN_1800233d0(param_1 + 0x810,local_res8);
  local_res8[0]._0_1_ = 1;
  FUN_1800233d0(param_1 + 0x811,local_res8);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
  FUN_1800233d0(param_1 + 0x812,local_res8);
  local_res8[0] = 0;
  FUN_180013280(DAT_180961d90,local_res8);
  bVar8 = *(char *)(param_2 + 0x4c) != '\0';
  local_res8[0]._0_1_ = bVar8;
  FUN_1800233d0(param_1 + 0x830,local_res8);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar8);
  FUN_1800233d0(param_1 + 0x831,local_res8);
  FUN_18021cd60(param_2);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    iVar2 = FUN_180011200(param_1 + 0x8f8);
    if (iVar2 - 1U < 0xfffffffe) {
      plVar3 = (longlong *)FUN_1803a0940(local_res8,iVar2);
      lVar7 = *plVar3;
    }
    else {
      lVar7 = 0;
    }
    lVar1 = DAT_180ceca50;
    iVar2 = FUN_180011200(param_1 + 0xab0);
    if (iVar2 - 1U < 0xfffffffe) {
      plVar3 = (longlong *)FUN_1803a0940(local_res8,iVar2);
      if ((*plVar3 != 0) && (lVar1 != 0)) {
        iVar2 = FUN_180011200(*plVar3 + lVar1);
        if (iVar2 - 1U < 0xfffffffe) {
          puVar4 = (undefined8 *)FUN_1803a0940(local_res8,iVar2);
          uVar5 = *puVar4;
          goto LAB_18021e027;
        }
      }
    }
  }
  uVar5 = 0;
LAB_18021e027:
  uVar6 = 0;
  FUN_18021cd20(uVar5,0);
  if ((lVar7 != 0) && (DAT_180ceca80 != 0)) {
    iVar2 = FUN_180011200(DAT_180ceca80 + lVar7);
    if (iVar2 - 1U < 0xfffffffe) {
      puVar4 = (undefined8 *)FUN_1803a0940(local_res8,iVar2);
      uVar6 = *puVar4;
    }
  }
  FUN_18021cd20(uVar6,0);
  local_res10[0] = FUN_180011220(param_1 + 0x811);
  local_res8[0] = local_res8[0] & 0xffffff00;
  FUN_1800233d0(param_1 + 0x811,local_res8);
  FUN_18021cd40(param_1);
  FUN_1800233d0(param_1 + 0x811,local_res10);
  return;
}



/* ===== 18021e0c0 FUN_18021e0c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18021e0c0(char *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 local_138 [4];
  undefined8 uStack_134;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined1 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined8 local_10;
  
  uVar6 = DAT_180cc509f;
  LOCK();
  DAT_180cec9ec = 0;
  UNLOCK();
  LOCK();
  DAT_180cc509f = 0;
  UNLOCK();
  DAT_180ceca48 = 0;
  _DAT_180ceca18 = 0;
  uRam0000000180ceca20 = 0;
  _DAT_180ceca28 = 0;
  uRam0000000180ceca30 = 0;
  _DAT_180ceca38 = 0;
  uRam0000000180ceca40 = 0;
  iVar10 = FUN_1804e4d70(&DAT_1809f2790,uVar6);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f27dc == 0x7fffffff) {
    DAT_1809f27dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  LOCK();
  DAT_180cc509c = DAT_1809f2904;
  UNLOCK();
  lVar13 = 0;
  do {
    LOCK();
    lVar1 = (&DAT_180cec9d0)[lVar13];
    (&DAT_180cec9d0)[lVar13] = 0;
    UNLOCK();
    if (lVar1 != 0) {
      LOCK();
      (&DAT_180ceca00)[lVar13] = lVar1;
      UNLOCK();
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 2);
  local_138[0] = 0;
  local_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_88 = _DAT_1808adf20;
  uStack_80 = _UNK_1808adf28;
  uStack_f0 = 0;
  uStack_ec = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d0 = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_ac = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_28 = 0;
  local_14 = 0;
  local_30 = 0;
  uStack_134 = 0;
  uStack_12c = 0;
  local_128 = 0xfffffffe;
  uStack_124 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_d8 = 0;
  uStack_d4 = 0xffffffff;
  uStack_cc = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_78 = _DAT_1808ad380;
  uStack_70 = _UNK_1808ad388;
  local_68 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  lVar13 = 2;
  puVar8 = (undefined8 *)&DAT_1809f27e0;
  puVar9 = (undefined8 *)local_138;
  do {
    puVar14 = puVar9;
    puVar11 = puVar8;
    uVar2 = puVar14[1];
    uVar3 = puVar14[2];
    uVar4 = puVar14[3];
    *puVar11 = *puVar14;
    puVar11[1] = uVar2;
    uVar2 = puVar14[4];
    uVar5 = puVar14[5];
    puVar11[2] = uVar3;
    puVar11[3] = uVar4;
    uVar3 = puVar14[6];
    uVar4 = puVar14[7];
    puVar11[4] = uVar2;
    puVar11[5] = uVar5;
    uVar2 = puVar14[8];
    uVar5 = puVar14[9];
    puVar11[6] = uVar3;
    puVar11[7] = uVar4;
    uVar3 = puVar14[10];
    uVar4 = puVar14[0xb];
    puVar11[8] = uVar2;
    puVar11[9] = uVar5;
    uVar2 = puVar14[0xc];
    uVar5 = puVar14[0xd];
    puVar11[10] = uVar3;
    puVar11[0xb] = uVar4;
    uVar3 = puVar14[0xe];
    uVar4 = puVar14[0xf];
    puVar11[0xc] = uVar2;
    puVar11[0xd] = uVar5;
    puVar11[0xe] = uVar3;
    puVar11[0xf] = uVar4;
    lVar13 = lVar13 + -1;
    puVar8 = puVar11 + 0x10;
    puVar9 = puVar14 + 0x10;
  } while (lVar13 != 0);
  uVar2 = puVar14[0x11];
  uVar3 = puVar14[0x12];
  uVar4 = puVar14[0x13];
  puVar11[0x10] = puVar14[0x10];
  puVar11[0x11] = uVar2;
  uVar2 = puVar14[0x14];
  uVar5 = puVar14[0x15];
  puVar11[0x12] = uVar3;
  puVar11[0x13] = uVar4;
  puVar11[0x14] = uVar2;
  puVar11[0x15] = uVar5;
  FUN_1804e4e90(&DAT_1809f2790);
  bVar7 = DAT_180ccf604;
  LOCK();
  UNLOCK();
  LOCK();
  DAT_1809f18d8 = 0xfffffffe;
  UNLOCK();
  LOCK();
  DAT_180ccf604 = 0;
  uVar12 = (ulonglong)bVar7;
  UNLOCK();
  PTR_DAT_1809f2760 = param_1;
  if (*param_1 != '\0') {
    uVar12 = FUN_18021c7f0("ended | %s",param_1);
  }
  return uVar12;
}



/* ===== 18021e340 FUN_18021e340 ===== */

void FUN_18021e340(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f2790);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f27dc == 0x7fffffff) {
    DAT_1809f27dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar2 = &DAT_1809f2768;
  if (0xf < DAT_1809f2780) {
    puVar2 = DAT_1809f2768;
  }
  FUN_180029840(&DAT_1809f2910,puVar2,DAT_1809f2778);
  FUN_1804e4e90(&DAT_1809f2790);
  FUN_18021e0c0(param_1);
  return;
}



/* ===== 18021e3e0 FUN_18021e3e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_18021e3e0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             char param_5,undefined8 param_6)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  size_t sVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  char *_Str;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  ulonglong local_148;
  ulonglong uStack_140;
  ulonglong local_138;
  ulonglong uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_178;
  local_150 = param_1;
  uVar3 = FUN_18003a390(local_68,param_4);
  uVar4 = FUN_18003a390(local_88,param_3);
  uVar5 = FUN_18003a390(local_a8,param_2);
  puVar6 = (undefined4 *)FUN_1800134a0(uVar5,&DAT_1806e9100,1);
  local_108 = *puVar6;
  uStack_104 = puVar6[1];
  uStack_100 = puVar6[2];
  uStack_fc = puVar6[3];
  local_f8 = puVar6[4];
  uStack_f4 = puVar6[5];
  uStack_f0 = puVar6[6];
  uStack_ec = puVar6[7];
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 6) = 0xf;
  *(undefined1 *)puVar6 = 0;
  uVar4 = FUN_180066820(local_c8,&local_108,uVar4);
  puVar6 = (undefined4 *)FUN_1800134a0(uVar4,&DAT_1806e9100,1);
  local_128 = *puVar6;
  uStack_124 = puVar6[1];
  uStack_120 = puVar6[2];
  uStack_11c = puVar6[3];
  local_118 = puVar6[4];
  uStack_114 = puVar6[5];
  uStack_110 = puVar6[6];
  uStack_10c = puVar6[7];
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 6) = 0xf;
  *(undefined1 *)puVar6 = 0;
  uVar3 = FUN_180066820(local_e8,&local_128,uVar3);
  _Str = "|inline|";
  if (param_5 != '\0') {
    _Str = "|big|";
  }
  sVar7 = strlen(_Str);
  puVar8 = (ulonglong *)FUN_1800134a0(uVar3,_Str,sVar7);
  local_148 = *puVar8;
  uStack_140 = puVar8[1];
  local_138 = puVar8[2];
  uStack_130 = puVar8[3];
  puVar8[2] = 0;
  puVar8[3] = 0xf;
  *(undefined1 *)puVar8 = 0;
  FUN_1800667a0(param_1,&local_148,param_6);
  if (0xf < uStack_130) {
    uVar11 = uStack_130 + 1;
    uVar9 = local_148;
    if (uVar11 < 0x1000) {
LAB_18021e57e:
      thunk_FUN_1803d64e0(uVar9,uVar11);
      goto LAB_18021e583;
    }
    uVar9 = *(ulonglong *)(local_148 - 8);
    if ((local_148 - uVar9) - 8 < 0x20) {
      uVar11 = uStack_130 + 0x28;
      goto LAB_18021e57e;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_18021e666:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_18021e66d:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
LAB_18021e583:
  local_138 = 0;
  uStack_130 = 0xf;
  local_148 = local_148 & 0xffffffffffffff00;
  FUN_18000f890(local_e8);
  uVar9 = CONCAT44(uStack_10c,uStack_110);
  if (0xf < uVar9) {
    uVar11 = uVar9 + 1;
    lVar2 = CONCAT44(uStack_124,local_128);
    lVar10 = lVar2;
    if (0xfff < uVar11) {
      lVar10 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar10) - 8U) goto LAB_18021e666;
      uVar11 = uVar9 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar10,uVar11);
  }
  FUN_18000f890(local_c8);
  uVar9 = CONCAT44(uStack_ec,uStack_f0);
  if (0xf < uVar9) {
    uVar11 = uVar9 + 1;
    lVar2 = CONCAT44(uStack_104,local_108);
    lVar10 = lVar2;
    if (0xfff < uVar11) {
      lVar10 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar10) - 8U) goto LAB_18021e66d;
      uVar11 = uVar9 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar10,uVar11);
  }
  FUN_18000f890(local_a8);
  FUN_18000f890(local_88);
  FUN_18000f890(local_68);
  return param_1;
}



/* ===== 18021e680 FUN_18021e680 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18021e680(int param_1,int param_2,uint param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char cVar7;
  float fVar8;
  byte bVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  char *pcVar16;
  int *piVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_428 [32];
  longlong local_408;
  longlong local_400;
  longlong local_3f8;
  char *local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  char *local_3b8;
  uint local_3b0;
  float local_3a8;
  char local_3a4;
  undefined1 local_398 [4];
  int iStack_394;
  int iStack_390;
  int iStack_38c;
  uint local_388;
  float fStack_384;
  undefined1 uStack_380;
  longlong local_378;
  longlong lStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  float fStack_350;
  undefined1 uStack_34c;
  undefined8 local_348;
  undefined4 uStack_340;
  undefined1 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined1 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_318;
  undefined8 uStack_314;
  undefined8 uStack_30c;
  undefined4 uStack_304;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  uint local_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined1 local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  undefined8 local_29c;
  float local_294;
  undefined8 local_290;
  undefined1 local_288;
  undefined8 local_280;
  undefined4 local_278;
  char local_274;
  undefined8 local_270;
  undefined *local_268;
  undefined8 local_258 [11];
  char cStack_1fc;
  float afStack_168 [38];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_180919500 ^ (ulonglong)auStack_428;
  lVar20 = (longlong)(int)param_3;
  local_3a4 = param_4;
  if ((((DAT_180961d60 == 0) || (DAT_180961d80 == 0)) || (DAT_180961d88 == 0)) ||
     (((DAT_180961d90 == 0 || (DAT_180961c50 == 0)) ||
      ((DAT_180961c58 == 0 || (DAT_180961c60 == 0)))))) {
    pcVar16 = "the game\'s placing functions weren\'t found";
    goto LAB_18021ed07;
  }
  if (0 < param_1) {
    piVar15 = &DAT_18092174c;
    do {
      if ((*piVar15 == param_1) && (piVar15[1] == param_2)) goto LAB_18021e793;
      piVar15 = piVar15 + 0x68;
    } while (piVar15 != &DAT_180931b4c);
    piVar15 = &DAT_18092174c;
    do {
      if ((*piVar15 == param_1) && (piVar15[1] < 0)) goto LAB_18021e793;
      piVar15 = piVar15 + 0x68;
    } while (piVar15 != &DAT_180931b4c);
  }
LAB_18021e787:
  pcVar16 = "nothing in that slot";
LAB_18021ed07:
  FUN_18021e340(pcVar16);
  return;
LAB_18021e793:
  if (param_3 == 0xffffffff) {
    iVar10 = piVar15[0x62];
  }
  else {
    if (5 < param_3) goto LAB_18021e787;
    iVar10 = piVar15[(lVar20 + 8) * 7];
  }
  if (0 < iVar10) {
    lVar19 = 3;
    puVar14 = local_258;
    do {
      piVar17 = piVar15;
      puVar11 = puVar14;
      uVar6 = *(undefined8 *)(piVar17 + 2);
      *puVar11 = *(undefined8 *)piVar17;
      puVar11[1] = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 6);
      puVar11[2] = *(undefined8 *)(piVar17 + 4);
      puVar11[3] = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 10);
      puVar11[4] = *(undefined8 *)(piVar17 + 8);
      puVar11[5] = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 0xe);
      puVar11[6] = *(undefined8 *)(piVar17 + 0xc);
      puVar11[7] = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 0x12);
      puVar11[8] = *(undefined8 *)(piVar17 + 0x10);
      puVar11[9] = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 0x16);
      puVar11[10] = *(undefined8 *)(piVar17 + 0x14);
      puVar11[0xb] = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 0x1a);
      puVar11[0xc] = *(undefined8 *)(piVar17 + 0x18);
      puVar11[0xd] = uVar6;
      uVar6 = *(undefined8 *)(piVar17 + 0x1e);
      puVar11[0xe] = *(undefined8 *)(piVar17 + 0x1c);
      puVar11[0xf] = uVar6;
      lVar19 = lVar19 + -1;
      puVar14 = puVar11 + 0x10;
      piVar15 = piVar17 + 0x20;
    } while (lVar19 != 0);
    uVar6 = *(undefined8 *)(piVar17 + 0x22);
    puVar11[0x10] = *(undefined8 *)(piVar17 + 0x20);
    puVar11[0x11] = uVar6;
    iVar10 = piVar17[0x25];
    iVar1 = piVar17[0x26];
    iVar2 = piVar17[0x27];
    *(int *)(puVar11 + 0x12) = piVar17[0x24];
    *(int *)((longlong)puVar11 + 0x94) = iVar10;
    *(int *)(puVar11 + 0x13) = iVar1;
    *(int *)((longlong)puVar11 + 0x9c) = iVar2;
    local_368 = 0;
    uStack_360 = 0;
    local_358 = 0;
    fStack_350 = 0.0;
    uStack_34c = 0;
    local_348 = 0;
    uStack_340 = 0;
    uStack_33c = 0;
    local_338 = 0;
    uStack_334 = 0xffffffff;
    uStack_330 = 0;
    uStack_32c = 0;
    local_328 = 0;
    uStack_320 = 0;
    local_318 = 0;
    uStack_314 = 0;
    uStack_30c = 0;
    uStack_304 = 0;
    uStack_300 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    local_2e0 = 0;
    local_2d8 = _DAT_1808ad380;
    uStack_2d0 = _UNK_1808ad388;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 0;
    local_29c = 0;
    local_294 = 0.0;
    local_290 = 0;
    local_288 = 0;
    local_280 = 0;
    local_278 = 0;
    local_270 = 0;
    uVar21 = 0xffffffff;
    if (param_3 == 0xffffffff) {
      local_3a8 = 0.0;
      FUN_180013280(DAT_180961c50,&local_3a8);
      local_3a8 = 0.0;
      FUN_180013280(DAT_180961c58,&local_3a8);
      local_3a8 = 0.0;
      FUN_180013280(DAT_180961c60,&local_3a8);
      local_3a8 = (float)local_d0;
      lVar19 = FUN_1800e0830(&local_d0);
      fVar26 = (float)local_c8;
      fVar25 = local_c8._4_4_;
      local_358 = local_c8;
      fStack_350 = (float)local_c0;
      if ((((float)local_c8 != 0.0) || (local_c8._4_4_ != 0.0)) ||
         (uStack_34c = 0, (float)local_c0 != 0.0)) {
        uStack_34c = 1;
      }
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      fVar22 = uStack_360._4_4_;
      fVar23 = (float)uStack_360;
      fVar24 = local_368._4_4_;
    }
    else {
      local_3a8 = afStack_168[lVar20 * 7 + -4];
      lVar19 = FUN_1800e0690(local_3a8);
      fVar24 = afStack_168[lVar20 * 7];
      local_368 = CONCAT44(fVar24,(undefined4)local_368);
      fVar23 = afStack_168[lVar20 * 7 + 1];
      uStack_360 = CONCAT44(uStack_360._4_4_,fVar23);
      fVar22 = afStack_168[lVar20 * 7 + -1];
      uStack_360 = CONCAT44(fVar22,fVar23);
      local_368 = CONCAT44(fVar24,afStack_168[lVar20 * 7 + -3]);
      (afStack_168 + lVar20 * 7 + -4)[0] = 0.0;
      (afStack_168 + lVar20 * 7 + -4)[1] = 0.0;
      (afStack_168 + lVar20 * 7 + -2)[0] = 1.0;
      (afStack_168 + lVar20 * 7 + -2)[1] = 0.0;
      (afStack_168 + lVar20 * 7)[0] = 0.0;
      (afStack_168 + lVar20 * 7)[1] = 0.0;
      afStack_168[lVar20 * 7 + 2] = -NAN;
      fVar25 = local_358._4_4_;
      fVar26 = (float)local_358;
    }
    fVar8 = fStack_350;
    if (cStack_1fc != '\0') {
      FUN_180298cb0(param_1,local_258);
    }
    lVar20 = FUN_1800e0b60(param_1,local_258);
    if ((lVar20 != 0) && (lVar19 != 0)) {
      local_398[0] = 1;
      DAT_180ceca10 = DAT_180ceca10 + 1;
      fStack_384 = local_3a8;
      local_29c = CONCAT44(fVar25,fVar26);
      iStack_394 = DAT_180ceca10;
      iStack_390 = param_1;
      iStack_38c = param_2;
      local_388 = param_3;
      uStack_380 = param_3 == 0xffffffff;
      local_378 = lVar20;
      lStack_370 = lVar19;
      local_2a8 = fVar24;
      local_2a4 = fVar23;
      local_2a0 = fVar22;
      local_294 = fVar8;
      lVar12 = FUN_180264b70("r_csgo_mouse_trace_coord");
      if (lVar12 != 0) {
        bVar9 = FUN_180264d70(lVar12);
        uVar21 = (uint)bVar9;
      }
      cVar7 = local_3a4;
      local_274 = local_3a4;
      local_268 = &DAT_1809f2790;
      local_2dc = uVar21;
      iVar10 = FUN_1804e4d70(&DAT_1809f2790);
      if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f27dc == 0x7fffffff) {
        DAT_1809f27dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      lVar12 = 2;
      puVar14 = (undefined8 *)&DAT_1809f27e0;
      puVar11 = (undefined8 *)local_398;
      do {
        puVar18 = puVar11;
        puVar13 = puVar14;
        uVar6 = puVar18[1];
        *puVar13 = *puVar18;
        puVar13[1] = uVar6;
        uVar6 = puVar18[3];
        puVar13[2] = puVar18[2];
        puVar13[3] = uVar6;
        uVar6 = puVar18[5];
        puVar13[4] = puVar18[4];
        puVar13[5] = uVar6;
        uVar6 = puVar18[7];
        puVar13[6] = puVar18[6];
        puVar13[7] = uVar6;
        uVar6 = puVar18[9];
        puVar13[8] = puVar18[8];
        puVar13[9] = uVar6;
        uVar6 = puVar18[0xb];
        puVar13[10] = puVar18[10];
        puVar13[0xb] = uVar6;
        uVar6 = puVar18[0xd];
        puVar13[0xc] = puVar18[0xc];
        puVar13[0xd] = uVar6;
        uVar6 = puVar18[0xf];
        puVar13[0xe] = puVar18[0xe];
        puVar13[0xf] = uVar6;
        lVar12 = lVar12 + -1;
        puVar14 = puVar13 + 0x10;
        puVar11 = puVar18 + 0x10;
      } while (lVar12 != 0);
      uVar6 = puVar18[0x11];
      puVar13[0x10] = puVar18[0x10];
      puVar13[0x11] = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar18 + 0x94);
      uVar4 = *(undefined4 *)(puVar18 + 0x13);
      uVar5 = *(undefined4 *)((longlong)puVar18 + 0x9c);
      *(undefined4 *)(puVar13 + 0x12) = *(undefined4 *)(puVar18 + 0x12);
      *(undefined4 *)((longlong)puVar13 + 0x94) = uVar3;
      *(undefined4 *)(puVar13 + 0x13) = uVar4;
      *(undefined4 *)((longlong)puVar13 + 0x9c) = uVar5;
      uVar6 = puVar18[0x15];
      puVar13[0x14] = puVar18[0x14];
      puVar13[0x15] = uVar6;
      puVar14 = &DAT_1809f2768;
      if (0xf < DAT_1809f2780) {
        puVar14 = DAT_1809f2768;
      }
      FUN_180029840(&DAT_1809f2930,puVar14,DAT_1809f2778);
      DAT_1809f2920 = 0;
      puVar14 = &DAT_1809f2910;
      if (0xf < DAT_1809f2928) {
        puVar14 = DAT_1809f2910;
      }
      *(undefined1 *)puVar14 = 0;
      FUN_1804e4e90(&DAT_1809f2790);
      LOCK();
      PTR_DAT_1809f2760 = &DAT_18058b643;
      UNLOCK();
      LOCK();
      UNLOCK();
      LOCK();
      UNLOCK();
      LOCK();
      UNLOCK();
      LOCK();
      DAT_180ccf604 = 1;
      UNLOCK();
      local_3c0 = (double)fVar8;
      local_3c8 = (double)fVar25;
      local_3d0 = (double)fVar26;
      local_3d8 = (double)fVar22;
      local_3e0 = (double)fVar23;
      local_3e8 = (double)fVar24;
      local_3f0 = "weapon";
      if (cVar7 != '\0') {
        local_3f0 = "weapon_big";
      }
      local_3b8 = "r_csgo_mouse_trace_coord";
      local_408 = CONCAT44(local_408._4_4_,local_3a8);
      DAT_1809f18d8 = param_3;
      DAT_180cec984 = param_1;
      DAT_180cec9e4 = param_2;
      local_400 = lVar20;
      local_3f8 = lVar19;
      local_3b0 = uVar21;
      FUN_18021c7f0("open | def %d | side %d | slot %d | kit %d | item %llu | tool %llu | scene %s | start %.4f %.4f rot %.2f point %.2f %.2f %.2f | %s %d"
                    ,param_1,param_2,param_3);
      return;
    }
    local_408 = lVar19;
    FUN_18021c7f0("no items | def %d | slot %d | item %llu | tool %llu",param_1,param_3,lVar20);
    pcVar16 = "the game\'s item functions weren\'t found";
    goto LAB_18021ed07;
  }
  goto LAB_18021e787;
}



/* ===== 18021ed80 FUN_18021ed80 ===== */

void FUN_18021ed80(longlong param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
  int *piVar7;
  float fVar8;
  float local_res8 [2];
  
  fVar4 = DAT_1808ace10;
  fVar3 = DAT_1808acbd0;
  fVar8 = DAT_1808ac838;
  iVar2 = *(int *)(param_1 + 8);
  if (0 < iVar2) {
    piVar7 = &DAT_18092174c;
    do {
      if ((*piVar7 == iVar2) && (piVar7[1] == *(int *)(param_1 + 0xc))) goto LAB_18021edf1;
      piVar7 = piVar7 + 0x68;
    } while (piVar7 != &DAT_180931b4c);
    piVar7 = &DAT_18092174c;
    while ((*piVar7 != iVar2 || (-1 < piVar7[1]))) {
      piVar7 = piVar7 + 0x68;
      if (piVar7 == &DAT_180931b4c) {
        return;
      }
    }
LAB_18021edf1:
    if (*(char *)(param_1 + 0x18) == '\0') {
      if ((*(uint *)(param_1 + 0x10) < 6) &&
         (lVar5 = (longlong)(int)*(uint *)(param_1 + 0x10) + 8,
         piVar7[lVar5 * 7] == *(int *)(param_1 + 0x14))) {
        fVar1 = *(float *)(param_1 + 0xd4);
        local_res8[0] = -8.0;
        pfVar6 = local_res8;
        if (DAT_1808ace10 <= fVar1) {
          pfVar6 = (float *)(param_1 + 0xd4);
        }
        if (DAT_1808ac838 < fVar1) {
          pfVar6 = (float *)&DAT_180623ee4;
        }
        piVar7[lVar5 * 7 + 4] = (int)*pfVar6;
        fVar1 = *(float *)(param_1 + 0xd8);
        local_res8[0] = -8.0;
        pfVar6 = local_res8;
        if (fVar4 <= fVar1) {
          pfVar6 = (float *)(param_1 + 0xd8);
        }
        if (fVar8 < fVar1) {
          pfVar6 = (float *)&DAT_180623ee4;
        }
        piVar7[lVar5 * 7 + 5] = (int)*pfVar6;
        for (fVar8 = (float)FUN_180516750(*(undefined4 *)(param_1 + 0xdc),fVar3);
            fVar8 < DAT_1808ace7c; fVar8 = fVar8 + fVar3) {
        }
        for (; DAT_1808acb58 < fVar8; fVar8 = fVar8 + DAT_1808ace80) {
        }
        piVar7[lVar5 * 7 + 3] = (int)fVar8;
        FUN_18021c7f0("applied sticker | slot %d | %.4f %.4f | %.2f",*(undefined4 *)(param_1 + 0x10)
                      ,(double)(float)piVar7[lVar5 * 7 + 4],(double)(float)piVar7[lVar5 * 7 + 5],
                      (double)fVar8);
      }
    }
    else if ((piVar7[0x62] == *(int *)(param_1 + 0x14)) && (*(char *)(param_1 + 0xec) != '\0')) {
      piVar7[100] = *(int *)(param_1 + 0xe0);
      piVar7[0x65] = *(int *)(param_1 + 0xe4);
      piVar7[0x66] = *(int *)(param_1 + 0xe8);
      FUN_18021c7f0("applied charm | %.3f %.3f %.3f",(double)*(float *)(param_1 + 0xe0),
                    (double)*(float *)(param_1 + 0xe4),(double)*(float *)(param_1 + 0xe8));
      return;
    }
  }
  return;
}



/* ===== 18021efc0 FUN_18021efc0 ===== */

undefined1 FUN_18021efc0(void)

{
  (*DAT_180961bc0)();
  return 1;
}



/* ===== 18021efe0 FUN_18021efe0 ===== */

ulonglong FUN_18021efe0(undefined8 param_1,uint param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  longlong local_res18;
  undefined4 local_res20 [2];
  undefined1 local_48 [16];
  
  local_res18 = param_3;
  if ((DAT_180ceca60 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180ceca60 = '\x01';
    DAT_180ceca64 = FUN_18038eaf0("C_EconEntity","m_AttributeManager");
    DAT_180ceca68 = FUN_18038eaf0("C_AttributeContainer","m_Item");
    DAT_180ceca6c = FUN_18038eaf0("C_EconItemView","m_iItemDefinitionIndex");
    DAT_180ceca70 = FUN_18038eaf0("C_EconItemView","m_iItemID");
    DAT_180ceca74 = FUN_18038eaf0("C_EconItemView","m_iItemIDHigh");
    uVar6 = FUN_18038eaf0("C_EconItemView","m_iItemIDLow");
    DAT_180ceca78 = (uint)uVar6;
  }
  else {
    uVar6 = (ulonglong)DAT_180ceca78;
  }
  if (((((DAT_180ceca64 == 0) || (DAT_180ceca68 == 0)) || (DAT_180ceca6c == 0)) ||
      ((DAT_180ceca70 == 0 || (DAT_180ceca74 == 0)))) || ((int)uVar6 == 0)) {
    return uVar6 & 0xffffffffffffff00;
  }
  bVar16 = false;
  if (DAT_180961ab8 == 0) {
LAB_18021f167:
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_18000f3a0();
    if (lVar7 == 0) goto LAB_18021f167;
    lVar7 = FUN_18000f3a0(lVar7 + 8);
    if (lVar7 == 0) goto LAB_18021f167;
    lVar8 = FUN_18000f3a0(lVar7);
    if (lVar8 == 0) goto LAB_18021f167;
    lVar8 = FUN_18000f3a0(lVar8);
    if (lVar8 == 0) goto LAB_18021f167;
  }
  if (DAT_180961ab0 == 0) {
LAB_18021f1aa:
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_18000f3a0();
    if (lVar8 == 0) goto LAB_18021f1aa;
    lVar8 = FUN_18000f3a0(lVar8 + 8);
    if (lVar8 == 0) goto LAB_18021f1aa;
    lVar9 = FUN_18000f3a0(lVar8);
    if (lVar9 == 0) goto LAB_18021f1aa;
    lVar9 = FUN_18000f3a0(lVar9);
    if (lVar9 == 0) goto LAB_18021f1aa;
  }
  uVar15 = (undefined4)((ulonglong)param_3 >> 0x20);
  if (lVar7 != 0) {
    lVar7 = FUN_18021ca30(lVar7,param_1,0);
    if (lVar7 != 0) {
      iVar5 = FUN_180011200(lVar7 + 0x8f8);
      if (iVar5 - 1U < 0xfffffffe) {
        plVar10 = (longlong *)FUN_1803a0940(local_48,iVar5);
        lVar7 = *plVar10;
      }
      else {
        lVar7 = 0;
      }
      if (lVar7 != 0) {
        lVar9 = (ulonglong)DAT_180ceca64 + (ulonglong)DAT_180ceca68 + lVar7;
        uVar4 = FUN_180011440();
        uVar14 = (uint)uVar4;
        if (uVar4 == 0) {
LAB_18021f29a:
          bVar2 = false;
        }
        else {
          lVar11 = FUN_180280c60();
          if (lVar11 == 0) goto LAB_18021f29a;
          if (param_3 != 0) {
            FUN_1800239d0((ulonglong)DAT_180ceca70 + lVar9,&local_res18);
            local_res20[0] = uVar15;
            FUN_180013280((ulonglong)DAT_180ceca74 + lVar9,local_res20);
            local_res20[0] = (int)param_3;
            FUN_180013280((ulonglong)DAT_180ceca78 + lVar9,local_res20);
          }
          bVar2 = true;
        }
        if ((uVar14 == param_2) || (DAT_180961bc0 == 0)) {
LAB_18021f37b:
          bVar1 = false;
          if (uVar14 != param_2) goto LAB_18021f2cb;
          pcVar12 = "skipped (same def)";
        }
        else {
          cVar3 = FUN_18021efc0();
          if (cVar3 == '\0') goto LAB_18021f37b;
          bVar16 = true;
          bVar1 = true;
LAB_18021f2cb:
          pcVar12 = "failed";
          if (bVar1) {
            pcVar12 = "done";
          }
        }
        if ((!bVar2) || (pcVar13 = "written", param_3 == 0)) {
          pcVar13 = "not written";
        }
        FUN_1800e4040("preview item | %s tree %d | entity %p | shown def %d -> %d | id %llu %s | UTIL_Remove %s"
                      ,param_1,0,lVar7,uVar14,param_2,param_3,pcVar13,pcVar12);
      }
    }
  }
  pcVar12 = "skipped (same def)";
  if (lVar8 == 0) goto LAB_18021f4c0;
  lVar7 = FUN_18021ca30(lVar8,param_1,1);
  if (lVar7 == 0) goto LAB_18021f4c0;
  iVar5 = FUN_180011200(lVar7 + 0x8f8);
  if (iVar5 - 1U < 0xfffffffe) {
    plVar10 = (longlong *)FUN_1803a0940(local_48,iVar5);
    lVar7 = *plVar10;
  }
  else {
    lVar7 = 0;
  }
  if (lVar7 == 0) goto LAB_18021f4c0;
  lVar8 = (ulonglong)DAT_180ceca64 + (ulonglong)DAT_180ceca68 + lVar7;
  uVar4 = FUN_180011440();
  uVar14 = (uint)uVar4;
  if (uVar4 == 0) {
LAB_18021f42c:
    bVar2 = false;
  }
  else {
    lVar9 = FUN_180280c60();
    if (lVar9 == 0) goto LAB_18021f42c;
    if (param_3 != 0) {
      FUN_1800239d0((ulonglong)DAT_180ceca70 + lVar8,&local_res18);
      local_res20[0] = uVar15;
      FUN_180013280((ulonglong)DAT_180ceca74 + lVar8,local_res20);
      local_res20[0] = (int)param_3;
      FUN_180013280((ulonglong)DAT_180ceca78 + lVar8,local_res20);
    }
    bVar2 = true;
  }
  if ((uVar14 == param_2) || (DAT_180961bc0 == 0)) {
LAB_18021f44e:
    bVar1 = false;
  }
  else {
    cVar3 = FUN_18021efc0();
    if (cVar3 == '\0') goto LAB_18021f44e;
    bVar1 = true;
  }
  bVar16 = bVar1 || bVar16 != false;
  if ((uVar14 != param_2) && (pcVar12 = "failed", bVar1)) {
    pcVar12 = "done";
  }
  if ((!bVar2) || (pcVar13 = "written", param_3 == 0)) {
    pcVar13 = "not written";
  }
  FUN_1800e4040("preview item | %s tree %d | entity %p | shown def %d -> %d | id %llu %s | UTIL_Remove %s"
                ,param_1,1,lVar7,uVar14,param_2,param_3,pcVar13,pcVar12);
LAB_18021f4c0:
  return (ulonglong)bVar16;
}



/* ===== 18021f500 FUN_18021f500 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_18021f500(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined1 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_98;
  local_68 = &DAT_1809f2790;
  iVar4 = FUN_1804e4d70(&DAT_1809f2790);
  puVar8 = auStack_98;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f27dc == 0x7fffffff) {
LAB_18021f672:
    DAT_1809f27dc = DAT_1809f27dc + -1;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_18021f684;
    FUN_1804e4a90(6);
  }
  local_78 = param_5;
  local_70 = param_4;
  puVar5 = (undefined8 *)FUN_18021e3e0(local_60,param_1,param_2,param_3);
  if (puVar5 != &DAT_1809f2768) {
    if (0xf < DAT_1809f2780) {
      uVar7 = DAT_1809f2780 + 1;
      lVar2 = CONCAT44(DAT_1809f2768._4_4_,(undefined4)DAT_1809f2768);
      lVar6 = lVar2;
      if (0xfff < uVar7) {
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
          pcVar1 = (code *)swi(0x29);
          DAT_1809f27dc = (*pcVar1)(5);
          puVar8 = auStack_90;
          goto LAB_18021f672;
        }
        uVar7 = DAT_1809f2780 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar6,uVar7);
    }
    DAT_1809f2768._0_4_ = *(undefined4 *)puVar5;
    DAT_1809f2768._4_4_ = *(undefined4 *)((longlong)puVar5 + 4);
    uRam00000001809f2770 = *(undefined4 *)(puVar5 + 1);
    uRam00000001809f2774 = *(undefined4 *)((longlong)puVar5 + 0xc);
    DAT_1809f2778 = puVar5[2];
    DAT_1809f2780 = puVar5[3];
    puVar5[2] = 0;
    puVar5[3] = 0xf;
    *(undefined1 *)puVar5 = 0;
  }
  FUN_18000f890(local_60);
  FUN_1804e4e90(&DAT_1809f2790);
  DAT_180cec9f0 = GetTickCount64();
  uVar3 = DAT_180ccf604;
  LOCK();
  UNLOCK();
  LOCK();
  DAT_180cec9e8 = param_1;
  UNLOCK();
  LOCK();
  DAT_180cec9e0 = param_2;
  UNLOCK();
  LOCK();
  DAT_1809f18dc = param_3;
  UNLOCK();
  LOCK();
  DAT_180cc509b = param_5;
  UNLOCK();
  LOCK();
  DAT_180ccf604 = 1;
  UNLOCK();
  LOCK();
  DAT_180ccf605 = 1;
  UNLOCK();
  return uVar3;
}



/* ===== 18021f690 FUN_18021f690 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18021f690(int param_1,int param_2,uint param_3,double param_4,undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  int *piVar7;
  size_t _Size;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined *local_98;
  undefined8 ***local_90 [2];
  size_t local_80;
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_180919500 ^ (ulonglong)auStack_e8;
  lVar8 = (longlong)(int)param_3;
  DAT_180cec9f0 = GetTickCount64();
  LOCK();
  UNLOCK();
  local_c8 = (double)CONCAT71(local_c8._1_7_,param_5);
  local_c0 = param_4;
  FUN_18021e3e0(local_90,param_1,param_2,param_3);
  local_98 = &DAT_1809f2790;
  iVar4 = FUN_1804e4d70(&DAT_1809f2790);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f27dc == 0x7fffffff) {
    DAT_1809f27dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((DAT_180ccf605 == '\0') && (DAT_180cc509e == '\0')) {
    if (DAT_1809f27e0 == '\0') {
      pppuVar6 = local_90;
      if (0xf < local_78) {
        pppuVar6 = local_90[0];
      }
      puVar5 = &DAT_1809f2910;
      _Size = DAT_1809f2920;
      if (0xf < DAT_1809f2928) {
        puVar5 = DAT_1809f2910;
      }
      goto LAB_18021fa69;
    }
    pppuVar6 = local_90;
    if (0xf < local_78) {
      pppuVar6 = local_90[0];
    }
    puVar5 = &DAT_1809f2930;
    if (0xf < DAT_1809f2948) {
      puVar5 = DAT_1809f2930;
    }
    if ((DAT_1809f2940 == local_80) &&
       ((DAT_1809f2940 == 0 || (iVar4 = memcmp(puVar5,pppuVar6,DAT_1809f2940), iVar4 == 0)))) {
      if (0 < param_1) {
        piVar7 = &DAT_18092174c;
        do {
          if ((*piVar7 == param_1) && (piVar7[1] == param_2)) goto LAB_18021f853;
          piVar7 = piVar7 + 0x68;
        } while (piVar7 != &DAT_180931b4c);
        piVar7 = &DAT_18092174c;
        do {
          if ((*piVar7 == param_1) && (piVar7[1] < 0)) goto LAB_18021f853;
          piVar7 = piVar7 + 0x68;
        } while (piVar7 != &DAT_180931b4c);
      }
      goto LAB_18021f80e;
    }
  }
  else {
    pppuVar6 = local_90;
    if (0xf < local_78) {
      pppuVar6 = local_90[0];
    }
    puVar5 = &DAT_1809f2768;
    _Size = DAT_1809f2778;
    if (0xf < DAT_1809f2780) {
      puVar5 = DAT_1809f2768;
    }
LAB_18021fa69:
    if ((_Size == local_80) && ((_Size == 0 || (iVar4 = memcmp(puVar5,pppuVar6,_Size), iVar4 == 0)))
       ) goto LAB_18021f80e;
  }
  FUN_1804e4e90(&DAT_1809f2790);
  if (DAT_180ccf604 != '\0') {
    FUN_18021fae0();
  }
LAB_18021fa9e:
  local_c8 = (double)CONCAT71(local_c8._1_7_,param_5);
  FUN_18021f500(param_1,param_2,param_3,param_4);
LAB_18021f817:
  FUN_18000f890(local_90);
  return;
LAB_18021f853:
  if (DAT_1809f2860 == '\0') {
    if (DAT_1809f27f8 != '\0') {
      fVar1 = (float)piVar7[100];
      fVar2 = (float)piVar7[0x65];
      fVar3 = (float)piVar7[0x66];
      local_a8 = fVar1;
      local_a4 = fVar2;
      local_a0 = fVar3;
      iVar4 = memcmp(&local_a8,&DAT_1809f28dc,0xc);
      if (iVar4 == 0) goto LAB_18021f80e;
      local_b8 = (double)fVar3;
      local_c0 = (double)fVar2;
      local_c8 = (double)fVar1;
      FUN_18021c7f0("charm changed outside | %.3f %.3f %.3f -> %.3f %.3f %.3f | restart",
                    (double)DAT_1809f28dc,(double)DAT_1809f28e0,(double)DAT_1809f28e4);
      FUN_1804e4e90(&DAT_1809f2790);
      FUN_18021e0c0(&DAT_18058b643);
      goto LAB_18021fa9e;
    }
    if (param_3 < 6) {
      if ((((float)piVar7[lVar8 * 7 + 0x3c] != DAT_1809f28d0) ||
          ((float)piVar7[lVar8 * 7 + 0x3d] != DAT_1809f28d4)) ||
         ((float)piVar7[lVar8 * 7 + 0x3b] != DAT_1809f28d8)) {
        local_b8 = (double)(float)piVar7[lVar8 * 7 + 0x3b];
        local_c0 = (double)(float)piVar7[lVar8 * 7 + 0x3d];
        local_c8 = (double)(float)piVar7[lVar8 * 7 + 0x3c];
        FUN_18021c7f0("sticker changed outside | %.4f %.4f rot %.2f -> %.4f %.4f rot %.2f | pushed",
                      (double)DAT_1809f28d0,(double)DAT_1809f28d4,(double)DAT_1809f28d8);
        DAT_1809f2814 = (float)piVar7[lVar8 * 7 + 0x3c];
        DAT_1809f2818 = (float)piVar7[lVar8 * 7 + 0x3d];
        DAT_1809f281c = (float)piVar7[lVar8 * 7 + 0x3b];
        DAT_1809f28f0 = 0;
        DAT_1809f28ac = DAT_1809f28b0;
        DAT_1809f28a0 = DAT_1809f28b0;
        DAT_1809f28d0 = DAT_1809f2814;
        DAT_1809f28d4 = DAT_1809f2818;
        DAT_1809f28d8 = DAT_1809f281c;
      }
    }
  }
LAB_18021f80e:
  FUN_1804e4e90(&DAT_1809f2790);
  goto LAB_18021f817;
}



/* ===== 18021fae0 FUN_18021fae0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18021fae0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_178 [32];
  undefined *local_158;
  char local_148 [204];
  int local_7c;
  int local_78;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_178;
  local_158 = &DAT_1809f2790;
  iVar7 = FUN_1804e4d70(&DAT_1809f2790);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f27dc == 0x7fffffff) {
    DAT_1809f27dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_1809f27e0 != '\0') {
    FUN_18021d860(&DAT_1809f27e0,&DAT_1806f233c);
    if (DAT_1809f28f0 != '\0') {
      DAT_1809f28f0 = '\0';
      DAT_1809f28a0 = DAT_1809f28a0 + 1;
      DAT_1809f28a4 = 0xffffffff;
    }
    FUN_18021d420(&DAT_1809f27e0,&DAT_1806f233c);
  }
  lVar9 = 2;
  pcVar5 = local_148;
  puVar6 = (undefined8 *)&DAT_1809f27e0;
  do {
    puVar10 = puVar6;
    pcVar8 = pcVar5;
    uVar4 = puVar10[1];
    *(undefined8 *)pcVar8 = *puVar10;
    *(undefined8 *)(pcVar8 + 8) = uVar4;
    uVar4 = puVar10[3];
    *(undefined8 *)(pcVar8 + 0x10) = puVar10[2];
    *(undefined8 *)(pcVar8 + 0x18) = uVar4;
    uVar4 = puVar10[5];
    *(undefined8 *)(pcVar8 + 0x20) = puVar10[4];
    *(undefined8 *)(pcVar8 + 0x28) = uVar4;
    uVar4 = puVar10[7];
    *(undefined8 *)(pcVar8 + 0x30) = puVar10[6];
    *(undefined8 *)(pcVar8 + 0x38) = uVar4;
    uVar4 = puVar10[9];
    *(undefined8 *)(pcVar8 + 0x40) = puVar10[8];
    *(undefined8 *)(pcVar8 + 0x48) = uVar4;
    uVar4 = puVar10[0xb];
    *(undefined8 *)(pcVar8 + 0x50) = puVar10[10];
    *(undefined8 *)(pcVar8 + 0x58) = uVar4;
    uVar4 = puVar10[0xd];
    *(undefined8 *)(pcVar8 + 0x60) = puVar10[0xc];
    *(undefined8 *)(pcVar8 + 0x68) = uVar4;
    uVar4 = puVar10[0xf];
    *(undefined8 *)(pcVar8 + 0x70) = puVar10[0xe];
    *(undefined8 *)(pcVar8 + 0x78) = uVar4;
    lVar9 = lVar9 + -1;
    pcVar5 = pcVar8 + 0x80;
    puVar6 = puVar10 + 0x10;
  } while (lVar9 != 0);
  uVar4 = puVar10[0x11];
  *(undefined8 *)(pcVar8 + 0x80) = puVar10[0x10];
  *(undefined8 *)(pcVar8 + 0x88) = uVar4;
  uVar1 = *(undefined4 *)((longlong)puVar10 + 0x94);
  uVar2 = *(undefined4 *)(puVar10 + 0x13);
  uVar3 = *(undefined4 *)((longlong)puVar10 + 0x9c);
  *(undefined4 *)(pcVar8 + 0x90) = *(undefined4 *)(puVar10 + 0x12);
  *(undefined4 *)(pcVar8 + 0x94) = uVar1;
  *(undefined4 *)(pcVar8 + 0x98) = uVar2;
  *(undefined4 *)(pcVar8 + 0x9c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar10 + 0xa4);
  uVar2 = *(undefined4 *)(puVar10 + 0x15);
  uVar3 = *(undefined4 *)((longlong)puVar10 + 0xac);
  *(undefined4 *)(pcVar8 + 0xa0) = *(undefined4 *)(puVar10 + 0x14);
  *(undefined4 *)(pcVar8 + 0xa4) = uVar1;
  *(undefined4 *)(pcVar8 + 0xa8) = uVar2;
  *(undefined4 *)(pcVar8 + 0xac) = uVar3;
  FUN_1804e4e90(&DAT_1809f2790);
  if ((local_148[0] != '\0') && (local_7c != local_78)) {
    FUN_18021ed80(local_148);
  }
  FUN_18021e0c0(&DAT_18058b643);
  return;
}



/* ===== 18021fc60 FUN_18021fc60 ===== */

char FUN_18021fc60(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = DAT_180ccf605;
  cVar1 = DAT_180cc509e;
  cVar3 = '\0';
  if (DAT_180ccf605 != '\0') {
    LOCK();
    DAT_180cc509e = '\x01';
    UNLOCK();
    cVar3 = cVar1;
    if (cVar1 == '\0') {
      LOCK();
      DAT_180ccf605 = '\0';
      UNLOCK();
      if (cVar2 != '\0') {
        FUN_18021e680(DAT_180cec9e8,DAT_180cec9e0,DAT_1809f18dc,DAT_180cc509b);
      }
      cVar3 = DAT_180cc509e;
      LOCK();
      DAT_180cc509e = '\0';
      UNLOCK();
    }
  }
  return cVar3;
}



/* ===== 18021fcc0 FUN_18021fcc0 ===== */

void FUN_18021fcc0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ULONGLONG UVar8;
  ULONGLONG UVar9;
  char cVar10;
  char *pcVar11;
  ULONGLONG *pUVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 local_res8 [8];
  longlong local_48;
  undefined2 uStack_3b;
  longlong local_40;
  undefined1 uStack_39;
  
  if ((((DAT_180961ab8 == 0) || (lVar4 = FUN_18000f3a0(), lVar4 == 0)) ||
      (lVar4 = FUN_18000f3a0(lVar4 + 8), lVar4 == 0)) ||
     ((lVar5 = FUN_18000f3a0(lVar4), lVar5 == 0 || (lVar5 = FUN_18000f3a0(lVar5), lVar5 == 0)))) {
    lVar4 = 0;
  }
  local_48 = lVar4;
  if (((DAT_180961ab0 == 0) || (lVar4 = FUN_18000f3a0(), lVar4 == 0)) ||
     ((lVar4 = FUN_18000f3a0(lVar4 + 8), lVar4 == 0 ||
      ((lVar5 = FUN_18000f3a0(lVar4), lVar5 == 0 || (lVar5 = FUN_18000f3a0(lVar5), lVar5 == 0))))))
  {
    lVar4 = 0;
  }
  uVar13 = 0;
  local_40 = lVar4;
  do {
    lVar4 = FUN_18021ca30(*(undefined8 *)(local_res8 + uVar13 * 8 + -0x50),"weapon",uVar13);
    if (lVar4 == 0) {
LAB_180220022:
      *(undefined2 *)(&DAT_180ca00e5 + uVar13 * 0x18) = uStack_3b;
      (&DAT_180ca00e7)[uVar13 * 0x18] = uStack_39;
      *(undefined8 *)(&DAT_180ca00d8 + uVar13 * 0x18) = 0;
      *(undefined4 *)(&DAT_180ca00e0 + uVar13 * 0x18) = 0;
      (&DAT_180ca00e4)[uVar13 * 0x18] = 0;
      *(undefined8 *)(&DAT_180ca00e8 + uVar13 * 0x18) = 0;
    }
    else {
      iVar1 = FUN_180011200(lVar4 + 0x8f8);
      if (iVar1 - 1U < 0xfffffffe) {
        plVar6 = (longlong *)FUN_1803a0940(local_res8,iVar1);
        lVar4 = *plVar6;
      }
      else {
        lVar4 = 0;
      }
      if (lVar4 == 0) goto LAB_180220022;
      if (((DAT_180cd011c == '\0') || (DAT_180ccfeda == '\0')) ||
         (0x7ffffffefffe < ((ulonglong)DAT_180cfe5d0 + lVar4) - 0x10000)) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_180298510();
      }
      if ((*(longlong *)(&DAT_180ca00d8 + uVar13 * 0x18) != lVar4) ||
         (*(int *)(&DAT_180ca00e0 + uVar13 * 0x18) != iVar1)) {
        *(undefined2 *)(&DAT_180ca00e5 + uVar13 * 0x18) = uStack_3b;
        (&DAT_180ca00e7)[uVar13 * 0x18] = uStack_39;
        *(longlong *)(&DAT_180ca00d8 + uVar13 * 0x18) = lVar4;
        *(int *)(&DAT_180ca00e0 + uVar13 * 0x18) = iVar1;
        (&DAT_180ca00e4)[uVar13 * 0x18] = 0;
        *(undefined8 *)(&DAT_180ca00e8 + uVar13 * 0x18) = 0;
      }
      if ((&DAT_180ca00e4)[uVar13 * 0x18] == '\0') {
        if (((iVar1 == 0) || (lVar5 = FUN_180280d30(iVar1), lVar5 == 0)) ||
           (*(char *)(lVar5 + 0x50) == '\0')) {
          cVar10 = '\0';
        }
        else {
          cVar10 = '\x01';
        }
        lVar5 = FUN_18000f3a0((ulonglong)DAT_180cfe610 + lVar4);
        if (((lVar5 == 0) || (DAT_180cfe648 == 0)) || (DAT_180cfe64c == 0)) {
          pUVar12 = (ULONGLONG *)(&DAT_180ca00e8 + uVar13 * 0x18);
        }
        else {
          uVar2 = FUN_18000f3a0((ulonglong)DAT_180cfe64c + lVar5 + (ulonglong)DAT_180cfe648);
          pUVar12 = (ULONGLONG *)(&DAT_180ca00e8 + uVar13 * 0x18);
          if (cVar10 == '\0') {
            bVar14 = (uVar2 & 3) == 1;
          }
          else {
            bVar14 = (uVar2 & 3) == 2;
          }
          if (!bVar14) {
            uVar7 = FUN_18000f3a0((ulonglong)DAT_180cfe610 + lVar4);
            FUN_180290b50(uVar7,cVar10);
            FUN_180290be0(lVar4);
            FUN_180290b50(uVar7,cVar10);
            UVar8 = GetTickCount64();
            *pUVar12 = UVar8;
            pcVar11 = "default";
            if (cVar10 != '\0') {
              pcVar11 = "legacy";
            }
            FUN_18021c7f0("preview mesh | tree %d | kit %d | switched to %s",uVar13,iVar1,pcVar11);
            goto LAB_18021ff44;
          }
        }
        UVar8 = *pUVar12;
        if ((UVar8 == 0) || (UVar9 = GetTickCount64(), 0x95 < UVar9 - UVar8)) {
          if ((iVar1 != 0) &&
             ((cVar10 != '\0' || (*(longlong *)(&DAT_180ca00e8 + uVar13 * 0x18) != 0)))) {
            if (((DAT_180961e84 == 0) ||
                ((iVar3 = FUN_180011200(lVar4 + (ulonglong)DAT_180961e84), iVar3 < 1 ||
                 ((DAT_180961e88 != 0 &&
                  (iVar3 = FUN_180011200(lVar4 + (ulonglong)DAT_180961e88), 0 < iVar3)))))) &&
               (*(longlong *)(&DAT_180ca00e8 + uVar13 * 0x18) == 0)) goto LAB_18021ff44;
            FUN_180290b80(lVar4);
            FUN_180290bc0(lVar4,1);
            pcVar11 = "default";
            if (cVar10 != '\0') {
              pcVar11 = "legacy";
            }
            FUN_18021c7f0("preview paint | tree %d | kit %d | rebuilt on the %s mesh",uVar13,iVar1,
                          pcVar11);
          }
          (&DAT_180ca00e4)[uVar13 * 0x18] = 1;
        }
      }
    }
LAB_18021ff44:
    uVar2 = (int)uVar13 + 1;
    uVar13 = (ulonglong)uVar2;
    if (1 < (int)uVar2) {
      return;
    }
  } while( true );
}



/* ===== 180220050 FUN_180220050 ===== */

void FUN_180220050(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_res8 [2];
  
  local_res8[0] = local_res8[0] & 0xffffff00;
  FUN_1800233d0(param_1 + 0x810,local_res8);
  local_res8[0] = local_res8[0] & 0xffffff00;
  FUN_1800233d0(param_1 + 0x811,local_res8);
  local_res8[0] = local_res8[0] & 0xffffff00;
  FUN_1800233d0(param_1 + 0x812,local_res8);
  local_res8[0] = local_res8[0] & 0xffffff00;
  FUN_1800233d0(param_1 + 0x830,local_res8);
  local_res8[0] = local_res8[0] & 0xffffff00;
  FUN_1800233d0(param_1 + 0x831,local_res8);
  local_res8[0] = 0;
  FUN_180013280(param_1 + 0x81c,local_res8);
  local_res8[0] = 0;
  FUN_180013280(param_1 + 0x820,local_res8);
  if ((param_1 == 0) ||
     (iVar4 = FUN_180011200(param_1 + 0xab0), lVar3 = DAT_180ceca50, 0xfffffffd < iVar4 - 1U)) {
LAB_18022016e:
    FUN_18021cd20(0,0);
    if (param_1 != 0) goto LAB_18022017c;
LAB_1802201ed:
    FUN_18021cd20(0,0);
    if (param_1 != 0) goto LAB_1802201fb;
  }
  else {
    plVar1 = (longlong *)FUN_1803a0940(local_res8,iVar4);
    if ((*plVar1 == 0) || (lVar3 == 0)) goto LAB_18022016e;
    iVar4 = FUN_180011200(*plVar1 + lVar3);
    if (iVar4 - 1U < 0xfffffffe) {
      puVar2 = (undefined8 *)FUN_1803a0940(local_res8,iVar4);
      FUN_18021cd20(*puVar2,0);
    }
    else {
      FUN_18021cd20(0,0);
    }
LAB_18022017c:
    lVar3 = DAT_180ceca80;
    iVar4 = FUN_180011200(param_1 + 0x8f8);
    if (0xfffffffd < iVar4 - 1U) goto LAB_1802201ed;
    plVar1 = (longlong *)FUN_1803a0940(local_res8,iVar4);
    if ((*plVar1 == 0) || (lVar3 == 0)) goto LAB_1802201ed;
    iVar4 = FUN_180011200(*plVar1 + lVar3);
    if (iVar4 - 1U < 0xfffffffe) {
      puVar2 = (undefined8 *)FUN_1803a0940(local_res8,iVar4);
      FUN_18021cd20(*puVar2,0);
    }
    else {
      FUN_18021cd20(0,0);
    }
LAB_1802201fb:
    iVar4 = FUN_180011200(param_1 + 0x8f8);
    if (iVar4 - 1U < 0xfffffffe) {
      puVar2 = (undefined8 *)FUN_1803a0940(local_res8,iVar4);
      uVar5 = *puVar2;
      goto LAB_18022021e;
    }
  }
  uVar5 = 0;
LAB_18022021e:
  FUN_18021cd20(uVar5,1);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
  FUN_1800233d0(param_1 + 0x8c8,local_res8);
  FUN_18021cd40(param_1);
  FUN_18021c7f0("modes cleared | panel %p | item shown, model re-set requested",param_1);
  return;
}



/* ===== 180220270 FUN_180220270 ===== */

void FUN_180220270(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined *local_58;
  longlong local_50;
  
  if (DAT_180961d60 == 0) {
    return;
  }
  if (DAT_180961d80 == 0) {
    return;
  }
  if (DAT_180961d88 == 0) {
    return;
  }
  if (DAT_180961d90 == 0) {
    return;
  }
  if (DAT_180961c50 == 0) {
    return;
  }
  if (DAT_180961c58 == 0) {
    return;
  }
  if (DAT_180961c60 == 0) {
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
    pFVar4 = GetProcAddress(hModule,"CreateInterface");
    if (pFVar4 == (FARPROC)0x0) {
      return;
    }
    DAT_1811150a0 = (*pFVar4)("PanoramaUIEngine001",0);
    if (DAT_1811150a0 == 0) {
      return;
    }
  }
  cVar1 = FUN_180200ed0();
  if (cVar1 == '\0') {
    return;
  }
  FUN_18021fcc0();
  if ((((DAT_180961ab8 == 0) || (lVar5 = FUN_18000f3a0(), lVar5 == 0)) ||
      (puVar6 = (undefined *)FUN_18000f3a0(lVar5 + 8), puVar6 == (undefined *)0x0)) ||
     ((lVar5 = FUN_18000f3a0(puVar6), lVar5 == 0 || (lVar5 = FUN_18000f3a0(lVar5), lVar5 == 0)))) {
    puVar6 = (undefined *)0x0;
  }
  local_58 = puVar6;
  if (((DAT_180961ab0 == 0) || (lVar5 = FUN_18000f3a0(), lVar5 == 0)) ||
     ((lVar5 = FUN_18000f3a0(lVar5 + 8), lVar5 == 0 ||
      ((lVar7 = FUN_18000f3a0(lVar5), lVar7 == 0 || (lVar7 = FUN_18000f3a0(lVar7), lVar7 == 0))))))
  {
    lVar5 = 0;
  }
  local_50 = lVar5;
  uVar10 = 0;
  pcVar14 = "weapon";
  do {
    LOCK();
    lVar7 = (&DAT_180ceca00)[uVar10];
    (&DAT_180ceca00)[uVar10] = 0;
    UNLOCK();
    if (lVar7 != 0) {
      pcVar12 = "weapon";
      if (DAT_180cc509c != '\0') {
        pcVar12 = "weapon_big";
      }
      lVar8 = FUN_18021ca30((&local_58)[uVar10],pcVar12,uVar10);
      if (lVar8 == lVar7) {
        FUN_180220050(lVar7);
      }
    }
    uVar16 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar16;
  } while ((int)uVar16 < 2);
  if (DAT_180ccf604 == '\0') {
    return;
  }
  if ((DAT_180cc509d == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cc509d = '\x01';
    uVar16 = FUN_18038eaf0("C_CSPlayerPawn","m_hHudModelArms");
    DAT_180ceca50 = (ulonglong)uVar16;
    if (uVar16 == 0) {
      DAT_180ceca50 = 0x1da8;
    }
    uVar16 = FUN_18038eaf0("C_CSWeaponBase","m_iWeaponGameplayAnimState");
    if (uVar16 < 0x19) {
      DAT_180ceca80 = 0x1990;
    }
    else {
      DAT_180ceca80 = (ulonglong)uVar16 - 0x18;
    }
  }
  local_58 = &DAT_1809f2790;
  iVar2 = FUN_1804e4d70(&DAT_1809f2790);
  iVar3 = DAT_180cec9ec;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f27dc == 0x7fffffff) {
    DAT_1809f27dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_1809f27e0 == '\0') goto LAB_180220b3b;
  LOCK();
  UNLOCK();
  iVar2 = DAT_180cec9ec + 1;
  if (DAT_180cec9ec < 0x30) {
    lVar7 = (longlong)DAT_180cec9ec;
    DAT_180cec9ec = DAT_180cec9ec + 1;
    (&DAT_180ceca18)[lVar7] = 0x53;
    iVar2 = DAT_180cec9ec;
  }
  DAT_180cec9ec = iVar2;
  cVar1 = DAT_180cc509f;
  if (iVar3 == 0x2f) {
    LOCK();
    DAT_180cc509f = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      FUN_18021c7f0("order | %s | S = stage 12, T = panel think, P = present");
    }
  }
  DAT_1809f2894 = DAT_1809f2894 + 1;
  if (DAT_1809f28a0 != DAT_1809f28ac) {
    if (DAT_1809f28a4 < 0) {
      DAT_1809f28a8 = DAT_1809f2898;
      DAT_1809f28a4 = DAT_1809f2894;
      if (((DAT_1809f27f8 == '\0') && (DAT_180961c38 != 0)) && (DAT_180961c40 != 0)) {
        local_res8[0] = 0x7fc00000;
        FUN_180013280(DAT_180961c38,local_res8);
        local_res8[0] = 0x7fc00000;
        FUN_180013280(DAT_180961c40,local_res8);
      }
    }
    else if ((DAT_1809f28a8 < DAT_1809f2898) || (1 < DAT_1809f2894 - DAT_1809f28a4)) {
      if (DAT_1809f27f8 != '\0') {
        FUN_18021dbc0(&DAT_1809f27e0);
      }
      pcVar12 = "no think";
      if (DAT_1809f28a8 < DAT_1809f2898) {
        pcVar12 = "after think";
      }
      FUN_18021d420(&DAT_1809f27e0,pcVar12);
    }
  }
  if (DAT_1809f2904 != '\0') {
    pcVar14 = "weapon_big";
  }
  lVar7 = FUN_18021ca30(puVar6,pcVar14,0);
  LOCK();
  UNLOCK();
  DAT_180cec9d0 = lVar7;
  lVar8 = FUN_1800e40f0(pcVar14);
  pcVar12 = "loading model";
  if (((lVar8 != 0) != (bool)DAT_1809f2848) || (DAT_1809f284c != DAT_1809f27e4)) {
    DAT_1809f284c = DAT_1809f27e4;
    DAT_1809f2848 = lVar8 != 0;
    lVar9 = FUN_1800e35e0(pcVar14);
    if ((lVar9 == 0) || (*(char *)(lVar9 + 0x50) == '\0')) {
      pcVar17 = "starting";
    }
    else {
      lVar9 = FUN_1800e40f0(pcVar14);
      pcVar17 = "loading model";
      if (lVar9 != 0) {
        pcVar17 = "ok";
      }
    }
    FUN_18021c7f0("scene | %s | texture %d | status %s",pcVar14,lVar8 != 0,pcVar17);
  }
  uVar16 = 0xffffffff;
  pcVar17 = "sticker";
  if (lVar7 != 0) {
    if (DAT_1809f2840 != DAT_1809f27e4) {
      DAT_1809f2840 = DAT_1809f27e4;
      FUN_18021c7f0("panel | tree %d | %p | %s",0,lVar7,pcVar14);
    }
    lVar8 = FUN_18000f3a0(lVar7 + 8);
    uVar10 = FUN_180011220(lVar8 + 0x11f);
    if ((uVar10 & 0x20) != 0) {
      iVar3 = FUN_180011200(lVar7 + 0x8f8);
      if (iVar3 - 1U < 0xfffffffe) {
        plVar11 = (longlong *)FUN_1803a0940(local_res10,iVar3);
        if ((*plVar11 == 0) || (lVar8 = FUN_18000f3a0(*plVar11 + 0x338), lVar8 == 0))
        goto LAB_180220782;
        cVar1 = FUN_180011220(lVar8 + 0x58);
        uVar15 = (uint)(cVar1 != '\0');
      }
      else {
LAB_180220782:
        uVar15 = 0xffffffff;
      }
      if (DAT_1809f2860 != '\0') {
        FUN_18021ce00(lVar7,&DAT_1809f27e0,"stage12");
      }
      if (DAT_1809f27f8 == '\0') {
        FUN_18021d1a0(lVar7,&DAT_1809f27e0);
      }
      else {
        FUN_18021dbc0(&DAT_1809f27e0);
        FUN_18021def0(lVar7,&DAT_1809f27e0);
      }
      if (((DAT_1809f285c != DAT_1809f27e4) &&
          (iVar3 = FUN_180011200(lVar7 + 0x8f8), iVar3 - 1U < 0xfffffffe)) &&
         (plVar11 = (longlong *)FUN_1803a0940(local_res18,iVar3), *plVar11 != 0)) {
        DAT_1809f285c = DAT_1809f27e4;
        local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
        FUN_1800233d0(lVar7 + 0x8c8,local_res8);
        pcVar13 = "sticker";
        if (DAT_1809f27f8 != '\0') {
          pcVar13 = "charm";
        }
        FUN_18021c7f0("model re-set requested | %s | panel %p",pcVar13,lVar7);
      }
      iVar3 = FUN_180011200(lVar7 + 0x8f8);
      if (iVar3 - 1U < 0xfffffffe) {
        plVar11 = (longlong *)FUN_1803a0940(local_res20,iVar3);
        if ((*plVar11 == 0) || (lVar8 = FUN_18000f3a0(*plVar11 + 0x338), lVar8 == 0))
        goto LAB_1802208ab;
        cVar1 = FUN_180011220(lVar8 + 0x58);
        uVar10 = (ulonglong)(cVar1 != '\0');
      }
      else {
LAB_1802208ab:
        uVar10 = 0xffffffff;
      }
      FUN_18021dca0(lVar7,&DAT_1809f27e0,uVar15,uVar10);
    }
  }
  lVar5 = FUN_18021ca30(lVar5,pcVar14,1);
  LOCK();
  UNLOCK();
  DAT_180cec9d8 = lVar5;
  lVar7 = FUN_1800e40f0(pcVar14);
  if (((lVar7 != 0) != (bool)DAT_1809f2848) || (DAT_1809f284c != DAT_1809f27e4)) {
    DAT_1809f284c = DAT_1809f27e4;
    DAT_1809f2848 = lVar7 != 0;
    lVar8 = FUN_1800e35e0(pcVar14);
    if ((lVar8 == 0) || (*(char *)(lVar8 + 0x50) == '\0')) {
      pcVar12 = "starting";
    }
    else {
      lVar8 = FUN_1800e40f0(pcVar14);
      if (lVar8 != 0) {
        pcVar12 = "ok";
      }
    }
    FUN_18021c7f0("scene | %s | texture %d | status %s",pcVar14,lVar7 != 0,pcVar12);
  }
  if (lVar5 == 0) goto LAB_180220b3b;
  if (DAT_1809f2840 != DAT_1809f27e4) {
    DAT_1809f2840 = DAT_1809f27e4;
    FUN_18021c7f0("panel | tree %d | %p | %s",1,lVar5,pcVar14);
  }
  lVar7 = FUN_18000f3a0(lVar5 + 8);
  uVar10 = FUN_180011220(lVar7 + 0x11f);
  if ((uVar10 & 0x20) == 0) goto LAB_180220b3b;
  iVar3 = FUN_180011200(lVar5 + 0x8f8);
  if (iVar3 - 1U < 0xfffffffe) {
    plVar11 = (longlong *)FUN_1803a0940(local_res10,iVar3);
    if ((*plVar11 == 0) || (lVar7 = FUN_18000f3a0(*plVar11 + 0x338), lVar7 == 0))
    goto LAB_1802209ff;
    cVar1 = FUN_180011220(lVar7 + 0x58);
    uVar15 = (uint)(cVar1 != '\0');
  }
  else {
LAB_1802209ff:
    uVar15 = 0xffffffff;
  }
  if (DAT_1809f2860 != '\0') {
    FUN_18021ce00(lVar5,&DAT_1809f27e0,"stage12");
  }
  if (DAT_1809f27f8 == '\0') {
    FUN_18021d1a0(lVar5,&DAT_1809f27e0);
  }
  else {
    FUN_18021dbc0(&DAT_1809f27e0);
    FUN_18021def0(lVar5,&DAT_1809f27e0);
  }
  if (((DAT_1809f285c != DAT_1809f27e4) &&
      (iVar3 = FUN_180011200(lVar5 + 0x8f8), iVar3 - 1U < 0xfffffffe)) &&
     (plVar11 = (longlong *)FUN_1803a0940(local_res18,iVar3), *plVar11 != 0)) {
    DAT_1809f285c = DAT_1809f27e4;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
    FUN_1800233d0(lVar5 + 0x8c8,local_res8);
    if (DAT_1809f27f8 != '\0') {
      pcVar17 = "charm";
    }
    FUN_18021c7f0("model re-set requested | %s | panel %p",pcVar17,lVar5);
  }
  iVar3 = FUN_180011200(lVar5 + 0x8f8);
  if (iVar3 - 1U < 0xfffffffe) {
    plVar11 = (longlong *)FUN_1803a0940(local_res20,iVar3);
    if ((*plVar11 != 0) && (lVar7 = FUN_18000f3a0(*plVar11 + 0x338), lVar7 != 0)) {
      cVar1 = FUN_180011220(lVar7 + 0x58);
      uVar16 = (uint)(cVar1 != '\0');
    }
  }
  FUN_18021dca0(lVar5,&DAT_1809f27e0,uVar15,uVar16);
LAB_180220b3b:
  FUN_1804e4e90(&DAT_1809f2790);
  return;
}



/* ===== 180220b80 FUN_180220b80 ===== */

void FUN_180220b80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_res10;
  float local_98;
  float local_94;
  float local_90;
  
  if ((DAT_180ccf604 != '\0') && (param_1 != 0)) {
    plVar5 = &DAT_180cec9d0;
    do {
      if (*plVar5 == param_1) {
        lVar2 = FUN_18000f3a0(param_1 + 8);
        uVar3 = FUN_180011220(lVar2 + 0x11f);
        if ((uVar3 & 0x20) == 0) {
          return;
        }
        local_res10 = &DAT_1809f2790;
        iVar1 = FUN_1804e4d70(&DAT_1809f2790);
        lVar2 = DAT_180961d88;
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(5);
        }
        if (DAT_1809f27dc == 0x7fffffff) {
          DAT_1809f27dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(6);
        }
        if (DAT_1809f27e0 != '\0') {
          if (DAT_1809f27f8 == '\0') {
            FUN_18021d1a0(param_1,&DAT_1809f27e0);
          }
          else {
            if (DAT_1809f282c != '\0') {
              fVar7 = (float)FUN_18000f3d0(DAT_180961d88);
              local_98 = fVar7;
              fVar8 = (float)FUN_18000f3d0(lVar2 + 4);
              local_94 = fVar8;
              fVar9 = (float)FUN_18000f3d0(lVar2 + 8);
              local_90 = fVar9;
              iVar1 = memcmp(&local_98,&DAT_1809f2820,0xc);
              if ((iVar1 != 0) && (DAT_1809f2908 = DAT_1809f2908 + 1, DAT_1809f290c < 6)) {
                DAT_1809f290c = DAT_1809f290c + 1;
                puVar4 = (undefined4 *)FUN_18021d350();
                FUN_18021c7f0("point global overwritten by the game\'s trace readback | %d | global %.2f %.2f %.2f | ours %.2f %.2f %.2f | trace %d idx %d uv %.3f %.3f | held %d"
                              ,DAT_1809f2908,(double)fVar7,(double)fVar8,(double)fVar9,
                              (double)DAT_1809f2820,(double)DAT_1809f2824,(double)DAT_1809f2828,
                              *puVar4,puVar4[1],(double)(float)puVar4[2],(double)(float)puVar4[3],
                              DAT_1809f2860 != '\0');
              }
            }
            local_res10 = (undefined *)((ulonglong)local_res10 & 0xffffffffffffff00);
            FUN_1800233d0(param_1 + 0x810,&local_res10);
            local_res10._0_1_ = 1;
            FUN_1800233d0(param_1 + 0x811,&local_res10);
            local_res10._0_1_ = 1;
            FUN_1800233d0(param_1 + 0x812,&local_res10);
            bVar6 = DAT_1809f282c != '\0';
            local_res10._0_1_ = bVar6;
            FUN_1800233d0(param_1 + 0x830,&local_res10);
            local_res10 = (undefined *)CONCAT71(local_res10._1_7_,bVar6);
            FUN_1800233d0(param_1 + 0x831,&local_res10);
            if (DAT_1809f282c == '\0') {
              fVar7 = 0.0;
            }
            else {
              fVar7 = DAT_1809f2820;
            }
            local_res10._0_4_ = fVar7;
            FUN_180013280(DAT_180961d88,&local_res10);
            if (DAT_1809f282c == '\0') {
              local_res10._0_4_ = 0.0;
            }
            else {
              local_res10._0_4_ = DAT_1809f2824;
            }
            FUN_180013280(DAT_180961d88 + 4,&local_res10);
            local_res10._0_4_ = 0.0;
            if (DAT_1809f282c != '\0') {
              local_res10._0_4_ = DAT_1809f2828;
            }
            FUN_180013280(DAT_180961d88 + 8,&local_res10);
            local_res10 = (undefined *)((ulonglong)local_res10._4_4_ << 0x20);
            FUN_180013280(DAT_180961d90,&local_res10);
          }
        }
        FUN_1804e4e90(&DAT_1809f2790);
        return;
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != (longlong *)&DAT_180cec9e0);
  }
  return;
}



/* ===== 180220ee0 FUN_180220ee0 ===== */

void FUN_180220ee0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 local_res10;
  
  if ((DAT_180ccf604 != '\0') && (param_1 != 0)) {
    plVar6 = &DAT_180cec9d0;
    do {
      if (*plVar6 == param_1) {
        lVar4 = FUN_18000f3a0(param_1 + 8);
        uVar5 = FUN_180011220(lVar4 + 0x11f);
        iVar3 = DAT_180cec9ec;
        if ((uVar5 & 0x20) == 0) {
          return;
        }
        LOCK();
        UNLOCK();
        iVar2 = DAT_180cec9ec + 1;
        if (DAT_180cec9ec < 0x30) {
          lVar4 = (longlong)DAT_180cec9ec;
          DAT_180cec9ec = DAT_180cec9ec + 1;
          (&DAT_180ceca18)[lVar4] = 0x54;
          iVar2 = DAT_180cec9ec;
        }
        DAT_180cec9ec = iVar2;
        cVar1 = DAT_180cc509f;
        if (iVar3 == 0x2f) {
          LOCK();
          DAT_180cc509f = '\x01';
          UNLOCK();
          if (cVar1 == '\0') {
            FUN_18021c7f0("order | %s | S = stage 12, T = panel think, P = present");
          }
        }
        local_res10 = &DAT_1809f2790;
        iVar3 = FUN_1804e4d70(&DAT_1809f2790);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(5);
        }
        if (DAT_1809f27dc == 0x7fffffff) {
          DAT_1809f27dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(6);
        }
        if (DAT_1809f27e0 != '\0') {
          DAT_1809f2898 = DAT_1809f2898 + 1;
          if (DAT_1809f2860 != '\0') {
            FUN_18021ce00(param_1,&DAT_1809f27e0,"think");
          }
          if (DAT_1809f27f8 == '\0') {
            FUN_18021d1a0(param_1,&DAT_1809f27e0);
          }
          else {
            local_res10 = (undefined *)((ulonglong)local_res10 & 0xffffffffffffff00);
            FUN_1800233d0(param_1 + 0x810,&local_res10);
            local_res10._0_1_ = 1;
            FUN_1800233d0(param_1 + 0x811,&local_res10);
            local_res10._0_1_ = 1;
            FUN_1800233d0(param_1 + 0x812,&local_res10);
            bVar7 = DAT_1809f282c != '\0';
            local_res10._0_1_ = bVar7;
            FUN_1800233d0(param_1 + 0x830,&local_res10);
            local_res10 = (undefined *)CONCAT71(local_res10._1_7_,bVar7);
            FUN_1800233d0(param_1 + 0x831,&local_res10);
            if (DAT_1809f282c == '\0') {
              uVar8 = 0;
            }
            else {
              uVar8 = DAT_1809f2820;
            }
            local_res10._0_4_ = uVar8;
            FUN_180013280(DAT_180961d88,&local_res10);
            if (DAT_1809f282c == '\0') {
              local_res10._0_4_ = 0;
            }
            else {
              local_res10._0_4_ = DAT_1809f2824;
            }
            FUN_180013280(DAT_180961d88 + 4,&local_res10);
            local_res10._0_4_ = 0;
            if (DAT_1809f282c != '\0') {
              local_res10._0_4_ = DAT_1809f2828;
            }
            FUN_180013280(DAT_180961d88 + 8,&local_res10);
            local_res10 = (undefined *)((ulonglong)local_res10._4_4_ << 0x20);
            FUN_180013280(DAT_180961d90,&local_res10);
          }
        }
        FUN_1804e4e90(&DAT_1809f2790);
        return;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != (longlong *)&DAT_180cec9e0);
  }
  return;
}



/* ===== 180221170 FUN_180221170 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180221170(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ULONGLONG UVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_188 [32];
  undefined4 local_168 [4];
  undefined1 local_158 [12];
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined1 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  iVar12 = DAT_180cec9ec;
  local_28 = DAT_180919500 ^ (ulonglong)auStack_188;
  if ((DAT_180ccf604 != '\0') && (DAT_180cec9d0 != 0)) {
    LOCK();
    UNLOCK();
    iVar11 = DAT_180cec9ec + 1;
    if (DAT_180cec9ec < 0x30) {
      lVar13 = (longlong)DAT_180cec9ec;
      DAT_180cec9ec = DAT_180cec9ec + 1;
      (&DAT_180ceca18)[lVar13] = 0x50;
      iVar11 = DAT_180cec9ec;
    }
    DAT_180cec9ec = iVar11;
    cVar8 = DAT_180cc509f;
    if (iVar12 == 0x2f) {
      LOCK();
      DAT_180cc509f = '\x01';
      UNLOCK();
      if (cVar8 == '\0') {
        FUN_18021c7f0();
      }
    }
  }
  lVar13 = DAT_180cec9f0;
  if (DAT_180ccf604 != '\0') {
    if (((DAT_180ccf605 == '\0') && (DAT_180cc509e == '\0')) &&
       (UVar14 = GetTickCount64(), 300 < UVar14 - lVar13)) {
      iVar12 = FUN_1804e4d70(&DAT_1809f2790);
      uVar7 = DAT_1809f2908;
      uVar6 = DAT_1809f2890;
      if (iVar12 != 0) goto LAB_18022160f;
      if (DAT_1809f27dc == 0x7fffffff) goto LAB_1802215fa;
      FUN_1804e4e90(&DAT_1809f2790);
      lVar13 = DAT_180cec9f0;
      UVar14 = GetTickCount64();
      FUN_18021c7f0("view gone | not kept for %llu ms | presses %d | point overwrites %d | session ended"
                    ,UVar14 - lVar13,uVar6,uVar7);
      FUN_18021fae0();
    }
    else {
      local_158[0] = 0;
      local_158._4_8_ = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_a8 = _DAT_1808adf20;
      uStack_a0 = _UNK_1808adf28;
      uStack_14c = 0;
      uStack_144 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_f8 = 0;
      uStack_ec = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_88 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_50 = 0;
      local_148 = 0xfffffffe;
      local_118 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      local_108 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_f4 = 0xffffffff;
      uStack_f0 = 0;
      local_d8 = 0;
      uStack_d4 = 0;
      uStack_cc = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_98 = _DAT_1808ad380;
      uStack_90 = _UNK_1808ad388;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_60 = 0;
      local_5c = 0;
      local_54 = 0;
      local_48 = 0;
      local_34 = 0;
      iVar12 = FUN_1804e4d70(&DAT_1809f2790);
      if (iVar12 != 0) {
LAB_18022160f:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f27dc == 0x7fffffff) {
LAB_1802215fa:
        DAT_1809f27dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      if (DAT_1809f27e0 != '\0') {
        if (((DAT_1809f2860 == '\0') && (DAT_1809f28f0 != '\0')) &&
           (UVar14 = GetTickCount64(), 500 < UVar14 - _DAT_1809f28f8)) {
          DAT_1809f28a0 = DAT_1809f28a0 + 1;
          DAT_1809f28f0 = '\0';
          DAT_1809f28a4 = 0xffffffff;
        }
        fVar5 = DAT_1808acbd0;
        if (DAT_1809f28ac != DAT_1809f28b0) {
          DAT_1809f28b0 = DAT_1809f28ac;
          if (DAT_1809f27f8 == '\0') {
            puVar15 = local_168;
            local_168[0] = 0xc1000000;
            if (DAT_1808ace10 <= DAT_1809f28b4) {
              puVar15 = &DAT_1809f28b4;
            }
            if (DAT_1808ac838 < DAT_1809f28b4) {
              puVar15 = (undefined4 *)&DAT_180623ee4;
            }
            DAT_1809f28d0 = *puVar15;
            puVar15 = local_168;
            if (DAT_1808ace10 <= DAT_1809f28b8) {
              puVar15 = &DAT_1809f28b8;
            }
            local_168[0] = 0xc1000000;
            if (DAT_1808ac838 < DAT_1809f28b8) {
              puVar15 = (undefined4 *)&DAT_180623ee4;
            }
            DAT_1809f28d4 = *puVar15;
            for (DAT_1809f28d8 = (float)FUN_180516750(); DAT_1809f28d8 < DAT_1808ace7c;
                DAT_1809f28d8 = DAT_1809f28d8 + fVar5) {
            }
            for (; DAT_1808acb58 < DAT_1809f28d8; DAT_1809f28d8 = DAT_1809f28d8 + DAT_1808ace80) {
            }
          }
          else if (DAT_1809f28cc != '\0') {
            _DAT_1809f28dc = DAT_1809f28c0;
            DAT_1809f28e4 = DAT_1809f28c8;
          }
          lVar13 = 2;
          puVar9 = (undefined8 *)local_158;
          puVar10 = (undefined8 *)&DAT_1809f27e0;
          do {
            puVar17 = puVar10;
            puVar16 = puVar9;
            uVar1 = puVar17[1];
            uVar2 = puVar17[2];
            uVar3 = puVar17[3];
            *puVar16 = *puVar17;
            puVar16[1] = uVar1;
            uVar1 = puVar17[4];
            uVar4 = puVar17[5];
            puVar16[2] = uVar2;
            puVar16[3] = uVar3;
            uVar2 = puVar17[6];
            uVar3 = puVar17[7];
            puVar16[4] = uVar1;
            puVar16[5] = uVar4;
            uVar1 = puVar17[8];
            uVar4 = puVar17[9];
            puVar16[6] = uVar2;
            puVar16[7] = uVar3;
            uVar2 = puVar17[10];
            uVar3 = puVar17[0xb];
            puVar16[8] = uVar1;
            puVar16[9] = uVar4;
            uVar1 = puVar17[0xc];
            uVar4 = puVar17[0xd];
            puVar16[10] = uVar2;
            puVar16[0xb] = uVar3;
            uVar2 = puVar17[0xe];
            uVar3 = puVar17[0xf];
            puVar16[0xc] = uVar1;
            puVar16[0xd] = uVar4;
            puVar16[0xe] = uVar2;
            puVar16[0xf] = uVar3;
            lVar13 = lVar13 + -1;
            puVar9 = puVar16 + 0x10;
            puVar10 = puVar17 + 0x10;
          } while (lVar13 != 0);
          uVar1 = puVar17[0x11];
          uVar2 = puVar17[0x12];
          uVar3 = puVar17[0x13];
          puVar16[0x10] = puVar17[0x10];
          puVar16[0x11] = uVar1;
          uVar1 = puVar17[0x14];
          uVar4 = puVar17[0x15];
          puVar16[0x12] = uVar2;
          puVar16[0x13] = uVar3;
          puVar16[0x14] = uVar1;
          puVar16[0x15] = uVar4;
          FUN_1804e4e90(&DAT_1809f2790);
          FUN_18021ed80(local_158);
          return;
        }
      }
      FUN_1804e4e90(&DAT_1809f2790);
    }
  }
  return;
}



/* ===== 180221620 FUN_180221620 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180221620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ULONGLONG UVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_358 [32];
  undefined8 local_338;
  undefined8 *local_330;
  undefined1 local_328 [768];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_358;
  if (DAT_180cecaac < 0x191) {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_180540170(local_328,0,0x300);
    puVar1 = (ulonglong *)FUN_180013640();
    local_338 = 0;
    local_330 = &local_res10;
    FUN_180501904(*puVar1 | 2,local_328,0x300,param_1);
    UVar2 = GetTickCount64();
    FUN_1802b2870("wl_skins.log","[%llu] anim | %s\n",UVar2,local_328);
    DAT_180cecaac = DAT_180cecaac + 1;
  }
  return;
}



/* ===== 1802216f0 FUN_1802216f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802216f0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  size_t sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *_Buf1;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  char local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_e8;
  uVar4 = 0;
  local_b8 = (char *)((ulonglong)local_b8 & 0xffffffff00000000);
  if (DAT_180ca10a8 == 0) {
    if (DAT_180ccf606 == '\0') {
      DAT_180ccf606 = '\x01';
      FUN_180390a90(local_a8);
      if (local_88 != '\0') {
        local_b8 = "pak01_dir.vpk";
        local_b0 = 0xd;
        uVar4 = FUN_1804e5000();
        FUN_180013d60(&local_80,uVar4,&local_b8);
        uVar4 = 3;
        uVar6 = FUN_180014f50(local_60,local_a8,&local_80);
        FUN_18038fa80(&DAT_180ca1030,uVar6);
        FUN_1800289e0(local_60);
        FUN_1800289e0(&local_80);
      }
      if (local_88 != '\0') {
        FUN_1800289e0(local_a8);
      }
      puVar14 = DAT_180ca10a0;
      puVar11 = PTR_s_vnmgraph_c_180625f68;
      if (DAT_180ca10a8 != 0) {
        local_80 = (undefined8 *)0x0;
        puStack_78 = (undefined8 *)0x0;
        local_70 = (undefined8 *)0x0;
        local_b8 = (char *)(CONCAT44(local_b8._4_4_,uVar4) | 4);
        puVar7 = puStack_78;
        for (puVar10 = (undefined8 *)*DAT_180ca10a0; puStack_78 = puVar7, puVar10 != puVar14;
            puVar10 = (undefined8 *)*puVar10) {
          uVar1 = puVar10[4];
          if (0xb < uVar1) {
            if (uVar1 < uVar1 - 10) {
                    /* WARNING: Subroutine does not return */
              FUN_18002a1a0();
            }
            puVar7 = puVar10 + 2;
            uVar2 = puVar10[5];
            if (0xf < uVar2) {
              puVar7 = (undefined8 *)puVar10[2];
            }
            iVar5 = memcmp((void *)((longlong)puVar7 + (uVar1 - 10)),puVar11,10);
            if (iVar5 == 0) {
              puVar7 = puVar10 + 2;
              if (0xf < uVar2) {
                puVar7 = (undefined8 *)puVar10[2];
              }
              if (*(char *)((longlong)puVar7 + (uVar1 - 0xb)) == '.') {
                if (uVar2 < 0x10) {
                  puVar7 = puVar10 + 2;
                }
                else {
                  puVar7 = (undefined8 *)puVar10[2];
                }
                local_c8 = 0x1b;
                lVar8 = FUN_180068d80(puVar7,uVar1,0,"animation/graphs/viewmodel/");
                if (lVar8 != -1) {
                  if (puStack_78 == local_70) {
                    FUN_180028f00(&local_80,puStack_78,puVar10 + 2);
                  }
                  else {
                    FUN_180024b50(puStack_78,puVar10 + 2);
                    puStack_78 = puStack_78 + 4;
                  }
                }
              }
            }
          }
          puVar7 = puStack_78;
        }
        for (puVar14 = local_80; puVar14 != puVar7; puVar14 = puVar14 + 4) {
          puVar10 = puVar14;
          if (0xf < (ulonglong)puVar14[3]) {
            puVar10 = (undefined8 *)*puVar14;
          }
          local_c8 = 0x1b;
          lVar8 = FUN_180043210(puVar10,puVar14[2],0,"animation/graphs/viewmodel/");
          if (lVar8 == 0) {
            puVar10 = puVar14;
            if (0xf < (ulonglong)puVar14[3]) {
              puVar10 = (undefined8 *)*puVar14;
            }
            if ((((ulonglong)puVar14[2] < 0x1c) ||
                (lVar8 = puVar14[2] + (longlong)puVar10,
                lVar9 = thunk_FUN_1804e6c50((longlong)puVar10 + 0x1b,lVar8), lVar9 == lVar8)) ||
               (lVar9 - (longlong)puVar10 == -1)) {
              if (DAT_180cecb08 == DAT_180cecb10) {
                FUN_180028f00(&DAT_180cecb00,DAT_180cecb08);
              }
              else {
                FUN_180024b50(DAT_180cecb08,puVar14);
                DAT_180cecb08 = DAT_180cecb08 + 4;
              }
            }
          }
        }
        FUN_1800288b0(&local_80);
        FUN_180225020(DAT_180cecb00,DAT_180cecb08,
                      (longlong)DAT_180cecb08 - (longlong)DAT_180cecb00 >> 5,0);
        puVar14 = DAT_180cecb08;
        puVar10 = puVar14;
        if ((DAT_180cecb00 != DAT_180cecb08) &&
           (puVar7 = DAT_180cecb00 + 4, puVar13 = DAT_180cecb00, puVar7 != DAT_180cecb08)) {
LAB_1802219f0:
          if ((ulonglong)puVar7[3] < 0x10) {
            puVar12 = puVar7;
          }
          else {
            puVar12 = (undefined8 *)*puVar7;
          }
          sVar3 = puVar13[2];
          if ((ulonglong)puVar13[3] < 0x10) {
            _Buf1 = puVar13;
          }
          else {
            _Buf1 = (undefined8 *)*puVar13;
          }
          puVar15 = puVar7 + 4;
          if ((sVar3 != puVar7[2]) ||
             ((sVar3 != 0 && (iVar5 = memcmp(_Buf1,puVar12,sVar3), iVar5 != 0))))
          goto LAB_180221a2a;
          if (puVar15 != puVar14) {
            do {
              if ((ulonglong)puVar15[3] < 0x10) {
                puVar10 = puVar15;
              }
              else {
                puVar10 = (undefined8 *)*puVar15;
              }
              sVar3 = puVar13[2];
              if ((ulonglong)puVar13[3] < 0x10) {
                puVar7 = puVar13;
              }
              else {
                puVar7 = (undefined8 *)*puVar13;
              }
              if ((sVar3 != puVar15[2]) ||
                 ((sVar3 != 0 && (iVar5 = memcmp(puVar7,puVar10,sVar3), iVar5 != 0)))) {
                puVar13 = puVar13 + 4;
                FUN_18002ba60(puVar13,puVar15);
              }
              puVar15 = puVar15 + 4;
            } while (puVar15 != puVar14);
            puVar10 = DAT_180cecb08;
          }
          puVar13 = puVar13 + 4;
          puVar7 = puVar10;
          if (puVar13 != puVar14) {
            for (; puVar12 = puVar13, puVar14 != puVar10; puVar14 = puVar14 + 4) {
              FUN_18002ba60(puVar13,puVar14);
              puVar13 = puVar13 + 4;
              puVar7 = DAT_180cecb08;
            }
            for (; puVar12 != puVar7; puVar12 = puVar12 + 4) {
              FUN_18000f890(puVar12);
            }
            puVar10 = puVar13;
            DAT_180cecb08 = puVar13;
          }
        }
LAB_180221aeb:
        FUN_180221620("viewmodel graphs: %d files",
                      (longlong)puVar10 - (longlong)DAT_180cecb00 >> 5 & 0xffffffff);
        goto LAB_180221b05;
      }
      puVar11 = &DAT_1806d2ba0;
      if (DAT_180ca10d8 != (undefined *)0x0) {
        puVar11 = DAT_180ca10d8;
      }
      FUN_180221620("pak01_dir.vpk not opened (%s)",puVar11);
    }
    uVar6 = 0;
  }
  else {
LAB_180221b05:
    uVar6 = 1;
  }
  return uVar6;
LAB_180221a2a:
  puVar13 = puVar7;
  puVar7 = puVar15;
  if (puVar15 == puVar14) goto LAB_180221aeb;
  goto LAB_1802219f0;
}



/* ===== 180221b30 FUN_180221b30 ===== */

longlong * FUN_180221b30(longlong *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  ulonglong uVar5;
  int local_res18 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 != (int *)0x0) && (*param_2 == 4)) {
    lVar4 = *(longlong *)(param_2 + 0xe) - *(longlong *)(param_2 + 0xc) >> 5;
    uVar5 = lVar4 * -0x5555555555555555;
    if (uVar5 != 0) {
      if (0x3fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      uVar2 = FUN_18000fb70(lVar4 * -0x5555555555555554);
      FUN_180540530(uVar2,*param_1,param_1[1] - *param_1);
      FUN_18006b9f0(param_1,uVar2,0,uVar5);
    }
    piVar1 = *(int **)(param_2 + 0xe);
    for (piVar3 = *(int **)(param_2 + 0xc); piVar3 != piVar1; piVar3 = piVar3 + 0x18) {
      if (*piVar3 == 2) {
        local_res18[0] = (int)*(double *)(piVar3 + 2);
      }
      else {
        local_res18[0] = 0;
      }
      FUN_180066e60(param_1,local_res18);
    }
  }
  return param_1;
}



/* ===== 180221c30 FUN_180221c30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180221c30(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  code *pcVar3;
  ulonglong *puVar4;
  size_t sVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined8 ****ppppuVar10;
  longlong ****pppplVar11;
  undefined8 ****ppppuVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  int iVar16;
  ulonglong *puVar17;
  longlong *plVar18;
  longlong *_Buf2;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  int *piVar23;
  longlong ****_Buf2_00;
  int iVar24;
  longlong lVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  ulonglong uVar33;
  longlong *plVar34;
  uint uVar35;
  ulonglong uVar36;
  longlong *plVar37;
  uint uVar38;
  longlong *plVar39;
  longlong *plVar40;
  bool bVar41;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [24];
  char local_2b8;
  int local_2b4;
  uint local_2b0;
  undefined1 local_2a8 [8];
  longlong local_2a0;
  int *piStack_298;
  longlong local_290;
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  longlong local_270;
  longlong alStack_268 [2];
  longlong *local_258;
  longlong *local_250;
  ulonglong *local_248;
  ulonglong *puStack_240;
  ulonglong *local_238;
  int local_230;
  longlong *local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  longlong local_200;
  longlong local_1f8;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c0;
  longlong local_1b8;
  longlong ****local_1a8;
  undefined8 uStack_1a0;
  size_t local_198;
  ulonglong uStack_190;
  longlong ****local_188;
  undefined8 uStack_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong uStack_160;
  ulonglong local_158;
  ulonglong local_150;
  int local_148;
  undefined8 ****local_140;
  longlong ***ppplStack_138;
  ulonglong local_130;
  ulonglong local_128;
  longlong ****local_120;
  undefined8 uStack_118;
  size_t local_110;
  ulonglong uStack_108;
  int local_100 [2];
  ulonglong *local_f8;
  ulonglong *local_f0;
  ulonglong *local_e8;
  int local_e0;
  undefined8 ****local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  int local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_2d8;
  plVar18 = (longlong *)0x0;
  uVar38 = 0;
  local_2b0 = 0;
  local_2a8[0] = 0;
  local_2a0 = 0;
  piStack_298 = (int *)0x0;
  local_290 = 0;
  local_270 = 0;
  alStack_268[0] = 0;
  alStack_268[1] = 0;
  local_210 = param_1;
  local_208 = param_1;
  cVar6 = FUN_180390640(&DAT_180ca1030,param_2,&local_270,0xffffffff);
  if (cVar6 == '\0') {
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_180221620("graph %s: read failed",param_2);
    lVar25 = local_290;
    piVar23 = piStack_298;
    lVar15 = local_2a0;
    *(undefined1 *)param_1 = local_2a8[0];
    local_290 = 0;
    piStack_298 = (int *)0x0;
    local_2a0 = 0;
    param_1[1] = lVar15;
    param_1[2] = (longlong)piVar23;
    param_1[3] = lVar25;
LAB_180222f95:
    puVar30 = auStack_2d8;
    puVar31 = auStack_2d8;
    puVar32 = auStack_2d8;
    if (local_270 == 0) goto LAB_180222fe4;
    lVar15 = local_270;
    if ((ulonglong)(alStack_268[1] - local_270) < 0x1000) {
LAB_180222fce:
      puVar31 = puVar30;
    }
    else {
      lVar15 = *(longlong *)(local_270 + -8);
      puVar29 = auStack_2d8;
      if (0x1f < (local_270 - lVar15) - 8U) {
LAB_180222fc7:
        pcVar3 = (code *)swi(0x29);
        lVar15 = (*pcVar3)(5);
        puVar30 = puVar29 + 8;
        goto LAB_180222fce;
      }
    }
    *(undefined8 *)(puVar31 + -8) = 0x180222fd6;
    thunk_FUN_1803d64e0(lVar15);
    *(longlong **)(puVar31 + 0x78) = plVar18;
  }
  else {
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0xf;
    local_a8 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    cVar6 = FUN_18028da00(&local_270,&local_b8);
    plVar34 = local_68;
    puVar32 = auStack_2d8;
    puVar29 = auStack_2d8;
    puVar31 = auStack_2d8;
    puVar28 = auStack_2d8;
    puVar26 = auStack_2d8;
    puVar27 = auStack_2d8;
    if ((cVar6 == '\0') || (local_b8 != 5)) {
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      FUN_180221620("graph %s: kv3 parse failed (%d bytes)",param_2,
                    (int)alStack_268[0] - (int)local_270);
      lVar25 = local_290;
      piVar23 = piStack_298;
      lVar15 = local_2a0;
      *(undefined1 *)param_1 = local_2a8[0];
      local_290 = 0;
      piStack_298 = (int *)0x0;
      local_2a0 = 0;
      param_1[1] = lVar15;
      param_1[2] = (longlong)piVar23;
      param_1[3] = lVar25;
      FUN_1801a6920(&plStack_70);
      FUN_1801a69c0(&local_88);
      FUN_18000f890(&local_a8);
      goto LAB_180222f95;
    }
    local_2a8[0] = 1;
    plVar40 = plStack_70;
    while( true ) {
      plVar18 = plStack_70;
      plVar19 = plStack_70;
      if (plVar40 == local_68) break;
      if ((ulonglong)plVar40[3] < 0x10) {
        plVar39 = plVar40;
      }
      else {
        plVar39 = (longlong *)*plVar40;
      }
      if (plVar40[2] == 7) {
        iVar16 = 0x6f6e5f6d - (int)*plVar39;
        if ((iVar16 == 0) &&
           (iVar16 = 0x6564 - (uint)*(ushort *)((longlong)plVar39 + 4), iVar16 == 0)) {
          iVar16 = 0x73 - (uint)*(byte *)((longlong)plVar39 + 6);
        }
        if (iVar16 == 0) {
          plVar40 = plVar40 + 4;
          goto LAB_180221e10;
        }
      }
      plVar40 = plVar40 + 0x10;
    }
    plVar40 = (longlong *)0x0;
    for (; plVar18 != local_68; plVar18 = plVar18 + 0x10) {
LAB_180221e10:
      if ((ulonglong)plVar18[3] < 0x10) {
        plVar39 = plVar18;
      }
      else {
        plVar39 = (longlong *)*plVar18;
      }
      if (plVar18[2] == 0xb) {
        lVar15 = 0x615065646f6e5f6d - *plVar39;
        if ((lVar15 == 0) && (lVar15 = 0x6874 - (ulonglong)*(ushort *)(plVar39 + 1), lVar15 == 0)) {
          lVar15 = 0x73 - (ulonglong)*(byte *)((longlong)plVar39 + 10);
        }
        if (lVar15 == 0) {
          plVar18 = plVar18 + 4;
          plVar37 = plVar18;
          plVar39 = plVar18;
          goto LAB_180221e70;
        }
      }
    }
    plVar18 = (longlong *)0x0;
    plVar39 = (longlong *)0x0;
    plVar37 = plVar18;
    while( true ) {
      if (plVar19 == plVar34) break;
LAB_180221e70:
      if ((ulonglong)plVar19[3] < 0x10) {
        _Buf2 = plVar19;
      }
      else {
        _Buf2 = (longlong *)*plVar19;
      }
      if ((plVar19[2] == 0x17) &&
         (iVar16 = memcmp("m_persistentNodeIndices",_Buf2,0x17), iVar16 == 0)) {
        plVar19 = plVar19 + 4;
        goto LAB_180221eb5;
      }
      plVar19 = plVar19 + 0x10;
    }
    plVar19 = (longlong *)0x0;
LAB_180221eb5:
    FUN_180221b30(&local_1d8,plVar19);
    plVar34 = local_68;
    for (local_220 = plStack_70; local_220 != plVar34; local_220 = local_220 + 0x10) {
      if ((ulonglong)local_220[3] < 0x10) {
        plVar19 = local_220;
      }
      else {
        plVar19 = (longlong *)*local_220;
      }
      if ((local_220[2] == 0x15) &&
         (iVar16 = memcmp("m_controlParameterIDs",plVar19,0x15), iVar16 == 0)) {
        local_228 = local_220 + 4;
        local_218 = local_220 + 0xb;
        local_220 = local_220 + 10;
        goto LAB_180221f23;
      }
    }
    local_228 = (longlong *)0x0;
    local_218 = (longlong *)&DAT_00000038;
    local_220 = (longlong *)&DAT_00000030;
LAB_180221f23:
    param_1 = local_210;
    lVar25 = local_290;
    piVar23 = piStack_298;
    lVar15 = local_2a0;
    if ((plVar40 == (longlong *)0x0) || ((int)*plVar40 != 4)) {
      *(undefined1 *)local_210 = local_2a8[0];
      local_290 = 0;
      piStack_298 = (int *)0x0;
      local_2a0 = 0;
      local_210[1] = lVar15;
      local_210[2] = (longlong)piVar23;
      local_210[3] = lVar25;
      FUN_180068f30(&local_1d8);
      FUN_1801a6920(&plStack_70);
      FUN_1801a69c0(&local_88);
      FUN_18000f890(&local_a8);
      if (local_270 == 0) goto LAB_180222fe4;
      if ((ulonglong)(alStack_268[1] - local_270) < 0x1000) {
        thunk_FUN_1803d64e0(local_270);
        alStack_268[1] = 0;
      }
      else {
        if (0x1f < (local_270 - *(longlong *)(local_270 + -8)) - 8U) goto LAB_180222fc7;
        thunk_FUN_1803d64e0(*(longlong *)(local_270 + -8),(alStack_268[1] - local_270) + 0x27);
        alStack_268[1] = 0;
        puVar31 = auStack_2d8;
      }
      goto LAB_180222fdb;
    }
    local_1e8 = plVar40 + 6;
    plVar34 = (longlong *)*local_1e8;
    local_208 = (longlong *)plVar40[7];
    bVar41 = plVar34 == local_208;
LAB_180221f4c:
    while (local_250 = plVar34, !bVar41) {
      for (piVar23 = (int *)plVar34[9]; piVar23 != (int *)plVar34[10]; piVar23 = piVar23 + 0x20) {
        if (*(ulonglong *)(piVar23 + 6) < 0x10) {
          piVar9 = piVar23;
        }
        else {
          piVar9 = *(int **)piVar23;
        }
        if (*(longlong *)(piVar23 + 4) == 6) {
          iVar16 = 0x616c635f - *piVar9;
          if (iVar16 == 0) {
            iVar16 = 0x7373 - (uint)*(ushort *)(piVar9 + 1);
          }
          if (iVar16 == 0) {
            if ((piVar23 + 8 != (int *)0x0) && (piVar23[8] == 3)) {
              FUN_180024b50(&local_1a8,piVar23 + 0xc);
              goto LAB_180221fd9;
            }
            break;
          }
        }
      }
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0xf;
      local_1a8 = (longlong ****)0x0;
LAB_180221fd9:
      uVar38 = uVar38 | 0x40;
      pppplVar11 = (longlong ****)&local_1a8;
      if (0xf < uStack_190) {
        pppplVar11 = local_1a8;
      }
      if (local_198 == 0x2d) {
        iVar16 = memcmp(PTR_s_CNmParameterizedClipSelectorNode_180625f08,pppplVar11,0x2d);
        FUN_18000f890();
        if (iVar16 == 0) {
          puVar1 = (undefined8 *)plVar34[10];
          local_288 = plVar18;
          local_278 = plVar37;
          local_280 = plVar39;
          local_258 = plVar40;
          for (puVar20 = (undefined8 *)plVar34[9]; puVar20 != puVar1; puVar20 = puVar20 + 0x10) {
            if ((ulonglong)puVar20[3] < 0x10) {
              puVar21 = puVar20;
            }
            else {
              puVar21 = (undefined8 *)*puVar20;
            }
            if ((puVar20[2] == 0x13) &&
               (iVar16 = memcmp("m_optionNodeIndices",puVar21,0x13), iVar16 == 0)) {
              puVar20 = puVar20 + 4;
              goto LAB_1802220a7;
            }
          }
          puVar20 = (undefined8 *)0x0;
LAB_1802220a7:
          FUN_180221b30(&local_200,puVar20);
          plVar18 = local_250;
          puVar1 = (undefined8 *)local_250[10];
          for (puVar20 = (undefined8 *)local_250[9]; puVar20 != puVar1; puVar20 = puVar20 + 0x10) {
            if ((ulonglong)puVar20[3] < 0x10) {
              puVar21 = puVar20;
            }
            else {
              puVar21 = (undefined8 *)*puVar20;
            }
            if ((puVar20[2] == 0xf) && (iVar16 = memcmp("m_optionWeights",puVar21,0xf), iVar16 == 0)
               ) {
              puVar20 = puVar20 + 4;
              goto LAB_1802220ff;
            }
          }
          puVar20 = (undefined8 *)0x0;
LAB_1802220ff:
          FUN_180221b30(&local_1c0,puVar20);
          for (plVar34 = (longlong *)plVar18[9]; plVar34 != (longlong *)plVar18[10];
              plVar34 = plVar34 + 0x10) {
            if ((ulonglong)plVar34[3] < 0x10) {
              plVar19 = plVar34;
            }
            else {
              plVar19 = (longlong *)*plVar34;
            }
            if (plVar34[2] == 0x10) {
              lVar15 = 0x6557736148625f6d - *plVar19;
              if (lVar15 == 0) {
                lVar15 = 0x7465537374686769 - plVar19[1];
              }
              if (lVar15 == 0) {
                if (plVar34 + 4 != (longlong *)0x0) {
                  iVar16 = (int)plVar34[4];
                  if (iVar16 == 1) {
                    local_2b8 = *(char *)((longlong)plVar34 + 0x24);
                    goto LAB_180222164;
                  }
                  if ((iVar16 == 2) && ((double)plVar34[5] != 0.0)) {
                    local_2b8 = '\x01';
                    goto LAB_180222164;
                  }
                }
                break;
              }
            }
          }
          local_2b8 = '\0';
LAB_180222164:
          local_248 = (ulonglong *)0x0;
          puStack_240 = (ulonglong *)0x0;
          local_238 = (ulonglong *)0x0;
          local_230 = 0;
          iVar16 = 0;
          local_2b4 = 0;
          uVar36 = 0;
          if (local_1f8 - local_200 >> 2 != 0) {
            local_1e0 = plVar40 + 7;
            cVar6 = local_2b8;
LAB_1802221b0:
            for (plVar18 = (longlong *)*local_1e8; plVar18 != (longlong *)*local_1e0;
                plVar18 = plVar18 + 0xc) {
              for (plVar34 = (longlong *)plVar18[9]; plVar34 != (longlong *)plVar18[10];
                  plVar34 = plVar34 + 0x10) {
                if ((ulonglong)plVar34[3] < 0x10) {
                  plVar40 = plVar34;
                }
                else {
                  plVar40 = (longlong *)*plVar34;
                }
                if (plVar34[2] == 10) {
                  lVar15 = 0x4965646f4e6e5f6d - *plVar40;
                  if (lVar15 == 0) {
                    lVar15 = 0x7864 - (ulonglong)*(ushort *)(plVar40 + 1);
                  }
                  if (lVar15 == 0) {
                    if (plVar34 + 4 != (longlong *)0x0) {
                      iVar16 = (int)plVar34[4];
                      if (iVar16 == 2) {
                        uVar35 = (uint)(double)plVar34[5];
                        goto LAB_18022226c;
                      }
                      if (iVar16 == 1) {
                        uVar35 = (uint)(*(char *)((longlong)plVar34 + 0x24) != '\0');
                        goto LAB_18022226c;
                      }
                    }
                    break;
                  }
                }
              }
              uVar35 = 0xffffffff;
LAB_18022226c:
              if (uVar35 == *(uint *)(local_200 + uVar36 * 4)) goto LAB_180222280;
            }
            plVar18 = (longlong *)0x0;
LAB_180222280:
            if (plVar18 == (longlong *)0x0) {
LAB_18022237e:
              bVar41 = true;
            }
            else {
              for (piVar23 = (int *)plVar18[9]; piVar23 != (int *)plVar18[10];
                  piVar23 = piVar23 + 0x20) {
                if (*(ulonglong *)(piVar23 + 6) < 0x10) {
                  piVar9 = piVar23;
                }
                else {
                  piVar9 = *(int **)piVar23;
                }
                if (*(longlong *)(piVar23 + 4) == 6) {
                  iVar16 = 0x616c635f - *piVar9;
                  if (iVar16 == 0) {
                    iVar16 = 0x7373 - (uint)*(ushort *)(piVar9 + 1);
                  }
                  if (iVar16 == 0) {
                    if ((piVar23 + 8 != (int *)0x0) && (piVar23[8] == 3)) {
                      FUN_180024b50(&local_1a8,piVar23 + 0xc);
                      goto LAB_18022230d;
                    }
                    break;
                  }
                }
              }
              uStack_1a0 = 0;
              local_198 = 0;
              uStack_190 = 0xf;
              local_1a8 = (longlong ****)0x0;
LAB_18022230d:
              uVar38 = uVar38 | 0x22;
              pppplVar11 = (longlong ****)&local_1a8;
              if (0xf < uStack_190) {
                pppplVar11 = local_1a8;
              }
              if (local_198 != 0x18) goto LAB_18022237e;
              lVar15 = *(longlong *)PTR_s_CNmClipNode_CDefinition_180625f58 - (longlong)*pppplVar11;
              if ((lVar15 == 0) &&
                 (lVar15 = *(longlong *)(PTR_s_CNmClipNode_CDefinition_180625f58 + 8) -
                           (longlong)pppplVar11[1], lVar15 == 0)) {
                lVar15 = *(longlong *)(PTR_s_CNmClipNode_CDefinition_180625f58 + 0x10) -
                         (longlong)pppplVar11[2];
              }
              if (lVar15 != 0) goto LAB_18022237e;
              bVar41 = false;
            }
            if (((uVar38 & 2) != 0) && (uVar38 = uVar38 & 0xfffffffd, 0xf < uStack_190)) {
              uVar22 = uStack_190 + 1;
              pppplVar11 = local_1a8;
              if (uVar22 < 0x1000) {
LAB_1802223bc:
                thunk_FUN_1803d64e0(pppplVar11,uVar22);
                goto LAB_1802223c1;
              }
              pppplVar11 = (longlong ****)local_1a8[-1];
              if ((ulonglong)((longlong)local_1a8 + (-8 - (longlong)pppplVar11)) < 0x20) {
                uVar22 = uStack_190 + 0x28;
                goto LAB_1802223bc;
              }
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              puVar26 = auStack_2d0;
              goto LAB_180222d7e;
            }
LAB_1802223c1:
            puVar14 = puStack_240;
            if (!bVar41) {
              plVar34 = (longlong *)plVar18[9];
              plVar18 = (longlong *)plVar18[10];
              plVar40 = plVar34;
              if (plVar34 != plVar18) {
LAB_1802223d5:
                if ((ulonglong)plVar40[3] < 0x10) {
                  plVar19 = plVar40;
                }
                else {
                  plVar19 = (longlong *)*plVar40;
                }
                if (plVar40[2] != 0xe) goto LAB_18022241f;
                lVar15 = 0x53617461446e5f6d - *plVar19;
                if ((lVar15 == 0) &&
                   (lVar15 = 0x49746f6c - (ulonglong)*(uint *)(plVar19 + 1), lVar15 == 0)) {
                  lVar15 = 0x7864 - (ulonglong)*(ushort *)((longlong)plVar19 + 0xc);
                }
                if (lVar15 != 0) goto LAB_18022241f;
                if (plVar40 + 4 == (longlong *)0x0) goto LAB_180222428;
                iVar16 = (int)plVar40[4];
                if (iVar16 == 2) {
                  uVar35 = (uint)(double)plVar40[5];
                }
                else {
                  if (iVar16 != 1) goto LAB_180222428;
                  uVar35 = (uint)(*(char *)((longlong)plVar40 + 0x24) != '\0');
                }
                if ((-1 < (int)uVar35) &&
                   (((uVar35 = 1, cVar6 == '\0' ||
                     ((ulonglong)(local_1b8 - local_1c0 >> 2) <= uVar36)) ||
                    (uVar35 = *(uint *)(local_1c0 + uVar36 * 4) & 0xff, uVar35 != 0)))) {
                  if ((int)(uVar35 ^ 0xffff) < local_2b4) {
                    puVar17 = local_248;
                    if (local_248 != puStack_240) {
                      do {
                        FUN_18000f890(puVar17);
                        puVar17 = puVar17 + 5;
                      } while (puVar17 != puVar14);
                      puStack_240 = local_248;
                    }
                    iVar16 = 0;
                    local_2b4 = 0;
                    goto LAB_180222a05;
                  }
                  uStack_160 = 0;
                  local_158 = 0;
                  local_150 = 0xf;
                  local_168 = 0;
                  local_148 = 0;
                  goto LAB_1802224e0;
                }
              }
            }
LAB_180222428:
            iVar16 = local_2b4;
            goto LAB_18022242c;
          }
          goto LAB_180222a09;
        }
        goto LAB_180222d6a;
      }
      FUN_18000f890();
      plVar34 = plVar34 + 0xc;
      bVar41 = plVar34 == local_208;
    }
LAB_180222d8c:
    param_1 = local_210;
    *(undefined1 *)local_210 = puVar28[0x30];
    lVar15 = *(longlong *)(puVar28 + 0x48);
    *(undefined8 *)(puVar28 + 0x48) = 0;
    lVar25 = *(longlong *)(puVar28 + 0x40);
    *(undefined8 *)(puVar28 + 0x40) = 0;
    lVar2 = *(longlong *)(puVar28 + 0x38);
    *(undefined8 *)(puVar28 + 0x38) = 0;
    local_210[1] = lVar2;
    local_210[2] = lVar25;
    local_210[3] = lVar15;
    *(undefined8 *)(puVar28 + -8) = 0x180222dcc;
    FUN_180068f30(&local_1d8);
    *(undefined8 *)(puVar28 + -8) = 0x180222dd9;
    FUN_1801a6920(&plStack_70);
    *(undefined8 *)(puVar28 + -8) = 0x180222de5;
    FUN_1801a69c0(&local_88);
    *(undefined8 *)(puVar28 + -8) = 0x180222df1;
    FUN_18000f890(&local_a8);
    lVar15 = *(longlong *)(puVar28 + 0x68);
    puVar32 = puVar28;
    if (lVar15 == 0) goto LAB_180222fe4;
    puVar31 = puVar28;
    if (0xfff < (ulonglong)(*(longlong *)(puVar28 + 0x78) - lVar15)) {
      lVar25 = *(longlong *)(lVar15 + -8);
      puVar29 = puVar28;
      if ((lVar15 - lVar25) - 8U < 0x20) {
        *(undefined8 *)(puVar28 + -8) = 0x180222e2f;
        thunk_FUN_1803d64e0(lVar25,(*(longlong *)(puVar28 + 0x78) - lVar15) + 0x27);
        *(undefined8 *)(puVar28 + 0x78) = 0;
        goto LAB_180222fdb;
      }
      goto LAB_180222fc7;
    }
    *(undefined8 *)(puVar28 + -8) = 0x180222e41;
    thunk_FUN_1803d64e0(lVar15);
    *(undefined8 *)(puVar28 + 0x78) = 0;
  }
LAB_180222fdb:
  *(undefined8 *)(puVar31 + 0x68) = 0;
  *(undefined8 *)(puVar31 + 0x70) = 0;
  puVar32 = puVar31;
LAB_180222fe4:
  *(undefined8 *)(puVar32 + -8) = 0x180222fee;
  FUN_180224f70(puVar32 + 0x38);
  *(undefined8 *)(puVar32 + -8) = 0x180223000;
  return param_1;
LAB_18022241f:
  plVar40 = plVar40 + 0x10;
  if (plVar40 == plVar18) goto LAB_180222428;
  goto LAB_1802223d5;
LAB_1802224e0:
  do {
    if ((ulonglong)plVar34[3] < 0x10) {
      plVar40 = plVar34;
    }
    else {
      plVar40 = (longlong *)*plVar34;
    }
    if (plVar34[2] == 10) {
      lVar15 = 0x4965646f4e6e5f6d - *plVar40;
      if (lVar15 == 0) {
        lVar15 = 0x7864 - (ulonglong)*(ushort *)(plVar40 + 1);
      }
      if (lVar15 == 0) {
        if (plVar34 + 4 == (longlong *)0x0) goto LAB_180222548;
        iVar16 = (int)plVar34[4];
        if (iVar16 == 2) {
          uVar7 = (uint)(double)plVar34[5];
        }
        else {
          if (iVar16 != 1) goto LAB_180222548;
          uVar7 = (uint)(*(char *)((longlong)plVar34 + 0x24) != '\0');
        }
        goto LAB_18022254d;
      }
    }
    plVar34 = plVar34 + 0x10;
  } while (plVar34 != plVar18);
LAB_180222548:
  uVar7 = 0xffffffff;
LAB_18022254d:
  if (((local_288 == (longlong *)0x0) || ((int)*local_288 != 4)) || ((int)uVar7 < 0)) {
LAB_18022262a:
    uStack_180 = 0;
    local_178 = 0;
    local_170 = 0xf;
    local_188 = (longlong ****)0x0;
    uVar38 = uVar38 | 0x80;
  }
  else {
    if ((ulonglong)((local_280[7] - local_278[6] >> 5) * -0x5555555555555555) <=
        (ulonglong)(longlong)(int)uVar7) goto LAB_18022262a;
    piVar23 = (int *)(local_278[6] + (longlong)(int)uVar7 * 0x60);
    if ((piVar23 == (int *)0x0) || (*piVar23 != 3)) {
      uStack_180 = 0;
      local_178 = 0;
      local_170 = 0xf;
      local_188 = (longlong ****)0x0;
      uVar38 = uVar38 | 0x180;
    }
    else {
      FUN_180024b50(&local_188,piVar23 + 4);
      uVar38 = uVar38 | 0x180;
    }
  }
  local_2b0 = uVar38;
  if (local_178 == 0) {
    uVar13 = FUN_18004e4f0(local_100,
                           ((longlong)puStack_240 - (longlong)local_248 >> 3) * -0x3333333333333333
                           + 1);
    puVar14 = (ulonglong *)FUN_180066ab0(&local_1a8,"Animation ",uVar13);
    if (&local_168 != puVar14) {
      local_168 = *puVar14;
      uStack_160 = puVar14[1];
      local_158 = puVar14[2];
      local_150 = puVar14[3];
      puVar14[2] = 0;
      puVar14[3] = 0xf;
      *(undefined1 *)puVar14 = 0;
    }
    FUN_18000f890(&local_1a8);
    FUN_18000f890(local_100);
    goto LAB_18022284a;
  }
  pppplVar11 = (longlong ****)&local_188;
  if (0xf < local_170) {
    pppplVar11 = local_188;
  }
  if (local_178 == 0) {
LAB_1802226a9:
    lVar15 = -1;
  }
  else {
    lVar15 = -1;
    if (local_178 - 1 != -1) {
      lVar15 = local_178 - 1;
    }
    lVar25 = lVar15 + 1 + (longlong)pppplVar11;
    lVar15 = thunk_FUN_1804e7010(pppplVar11,lVar25,0x2f);
    if (lVar15 == lVar25) goto LAB_1802226a9;
    lVar15 = lVar15 - (longlong)pppplVar11;
  }
  uVar22 = local_178;
  if (lVar15 == -1) {
    local_140 = (undefined8 ****)0x0;
    ppplStack_138 = (longlong ***)0x0;
    local_130 = 0;
    local_128 = 0;
    pppplVar11 = (longlong ****)&local_188;
    if (0xf < local_170) {
      pppplVar11 = local_188;
    }
    if (0x7fffffffffffffff < local_178) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    if (local_178 < 0x10) {
      local_130 = local_178;
      local_128 = 0xf;
      ppppuVar10 = (undefined8 ****)*pppplVar11;
      local_140 = ppppuVar10;
      ppplStack_138 = pppplVar11[1];
    }
    else {
      uVar33 = local_178 | 0xf;
      if (uVar33 < 0x8000000000000000) {
        if (uVar33 < 0x16) {
          uVar33 = 0x16;
        }
      }
      else {
        uVar33 = 0x7fffffffffffffff;
      }
      ppppuVar10 = (undefined8 ****)FUN_18000fb70(uVar33 + 1);
      local_140 = ppppuVar10;
      local_130 = uVar22;
      local_128 = uVar33;
      FUN_180540530(ppppuVar10,pppplVar11,uVar22 + 1);
    }
    ppppuVar12 = &local_140;
    uVar38 = uVar38 | 4;
    puVar14 = &local_130;
    puVar17 = &local_128;
    cVar6 = local_2b8;
  }
  else {
    uVar22 = lVar15 + 1;
    local_d8 = (undefined8 ****)0x0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    if (local_178 < uVar22) {
                    /* WARNING: Subroutine does not return */
      FUN_18002a1a0();
    }
    lVar15 = -1;
    if (local_178 - uVar22 != -1) {
      lVar15 = local_178 - uVar22;
    }
    pppplVar11 = (longlong ****)&local_188;
    if (0xf < local_170) {
      pppplVar11 = local_188;
    }
    FUN_1800133a0(&local_d8,(longlong)pppplVar11 + uVar22,lVar15);
    ppppuVar12 = &local_d8;
    uVar38 = uVar38 | 0x208;
    puVar14 = &local_c8;
    puVar17 = &local_c0;
    ppppuVar10 = local_d8;
  }
  if (*puVar17 < 0x10) {
    ppppuVar10 = ppppuVar12;
  }
  local_2b0 = uVar38;
  FUN_180029840(&local_168,ppppuVar10,*puVar14);
  if ((uVar38 & 8) != 0) {
    uVar38 = uVar38 & 0xfffffff7;
    FUN_18000f890(&local_d8);
  }
  if ((uVar38 & 4) != 0) {
    uVar38 = uVar38 & 0xfffffffb;
    FUN_18000f890(&local_140);
  }
LAB_18022284a:
  iVar16 = local_2b4;
  plVar18 = (longlong *)0x0;
  local_148 = local_2b4;
  if (puStack_240 == local_238) {
    FUN_1802256d0(&local_248,puStack_240,&local_168);
  }
  else {
    *puStack_240 = local_168;
    puStack_240[1] = uStack_160;
    puStack_240[2] = local_158;
    puStack_240[3] = local_150;
    local_158 = 0;
    local_150 = 0xf;
    local_168 = local_168 & 0xffffffffffffff00;
    *(int *)(puStack_240 + 4) = local_2b4;
    puStack_240 = puStack_240 + 5;
  }
  if (0xf < local_170) {
    uVar22 = local_170 + 1;
    pppplVar11 = local_188;
    if (0xfff < uVar22) {
      pppplVar11 = (longlong ****)local_188[-1];
      if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)pppplVar11))) {
LAB_180222d7e:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar27 = puVar26 + 8;
        goto LAB_180222d85;
      }
      uVar22 = local_170 + 0x28;
    }
    thunk_FUN_1803d64e0(pppplVar11,uVar22);
  }
  iVar16 = iVar16 + uVar35;
  local_178 = 0;
  local_170 = 0xf;
  local_188 = (longlong ****)((ulonglong)local_188 & 0xffffffffffffff00);
  local_2b4 = iVar16;
  FUN_18000f890(&local_168);
LAB_18022242c:
  uVar36 = uVar36 + 1;
  if ((ulonglong)(local_1f8 - local_200 >> 2) <= uVar36) goto LAB_180222a05;
  goto LAB_1802221b0;
LAB_180222a05:
  plVar18 = local_250;
LAB_180222a09:
  for (plVar34 = (longlong *)plVar18[9]; plVar34 != (longlong *)plVar18[10];
      plVar34 = plVar34 + 0x10) {
    if ((ulonglong)plVar34[3] < 0x10) {
      plVar40 = plVar34;
    }
    else {
      plVar40 = (longlong *)*plVar34;
    }
    if (plVar34[2] == 0x12) {
      lVar15 = 0x656d617261705f6d - *plVar40;
      if ((lVar15 == 0) && (lVar15 = 0x4965646f4e726574 - plVar40[1], lVar15 == 0)) {
        lVar15 = 0x7864 - (ulonglong)*(ushort *)(plVar40 + 2);
      }
      if (lVar15 == 0) {
        if (plVar34 + 4 != (longlong *)0x0) {
          iVar24 = (int)plVar34[4];
          if (iVar24 == 2) {
            uVar35 = (uint)(double)plVar34[5];
            goto LAB_180222a7c;
          }
          if (iVar24 == 1) {
            uVar35 = (uint)(*(char *)((longlong)plVar34 + 0x24) != '\0');
            goto LAB_180222a7c;
          }
        }
        break;
      }
    }
  }
  uVar35 = 0xffffffff;
LAB_180222a7c:
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0xf;
  local_120 = (longlong ****)0x0;
  local_230 = iVar16;
  if ((local_228 != (longlong *)0x0) && ((int)*local_228 == 4)) {
    lVar15 = *local_220;
    uVar22 = (*local_218 - lVar15 >> 5) * -0x5555555555555555;
    uVar36 = local_1d0 - local_1d8 >> 2;
    if (uVar22 < uVar36) {
      uVar36 = uVar22;
    }
    uVar22 = 0;
    if (uVar36 != 0) {
      do {
        if ((uint)*(ushort *)(local_1d8 + uVar22 * 4) == (uVar35 & 0xffff)) {
          piVar23 = (int *)(uVar22 * 0x60 + lVar15);
          if ((piVar23 == (int *)0x0) || (*piVar23 != 3)) {
            uStack_1a0 = 0;
            local_198 = 0;
            uStack_190 = 0xf;
            local_1a8 = (longlong ****)0x0;
          }
          else {
            FUN_180024b50(&local_1a8,(uVar22 * 0x60 | 0x10) + lVar15);
          }
          uVar38 = uVar38 | 0x10;
          if (0xf < uStack_108) {
            uVar36 = uStack_108 + 1;
            pppplVar11 = local_120;
            if (0xfff < uVar36) {
              pppplVar11 = (longlong ****)local_120[-1];
              if (0x1f < (ulonglong)((longlong)local_120 + (-8 - (longlong)pppplVar11)))
              goto LAB_180222d85;
              uVar36 = uStack_108 + 0x28;
            }
            thunk_FUN_1803d64e0(pppplVar11,uVar36);
          }
          local_120 = local_1a8;
          uStack_118 = uStack_1a0;
          local_110 = local_198;
          uStack_108 = uStack_190;
          local_198 = 0;
          uStack_190 = 0xf;
          local_1a8 = (longlong ****)((ulonglong)local_1a8 & 0xffffffffffffff00);
          FUN_18000f890(&local_1a8);
          iVar16 = local_230;
          goto LAB_180222b1b;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar36);
    }
  }
  iVar16 = local_2b4;
LAB_180222b1b:
  uVar36 = uStack_108;
  sVar5 = local_110;
  pppplVar11 = local_120;
  iVar24 = 0;
  do {
    _Buf2_00 = (longlong ****)&local_120;
    if (0xf < uVar36) {
      _Buf2_00 = pppplVar11;
    }
    _Size = (&DAT_180625f30)[(longlong)iVar24 * 2];
    if ((_Size == sVar5) &&
       ((_Size == 0 ||
        (iVar8 = memcmp((&PTR_s_inspect_variation_180625f28)[(longlong)iVar24 * 2],_Buf2_00,_Size),
        iVar8 == 0)))) {
      puVar4 = local_238;
      puVar17 = puStack_240;
      puVar14 = local_248;
      local_238 = (ulonglong *)0x0;
      puStack_240 = (ulonglong *)0x0;
      local_248 = (ulonglong *)0x0;
      local_f8 = puVar14;
      local_f0 = puVar17;
      local_e8 = puVar4;
      local_100[0] = iVar24;
      local_e0 = iVar16;
      if (piStack_298 == (int *)local_290) {
        FUN_180225400(&local_2a0,piStack_298,local_100);
      }
      else {
        *piStack_298 = iVar24;
        local_e8 = (ulonglong *)0x0;
        local_f0 = (ulonglong *)0x0;
        local_f8 = (ulonglong *)0x0;
        *(ulonglong **)(piStack_298 + 2) = puVar14;
        *(ulonglong **)(piStack_298 + 4) = puVar17;
        *(ulonglong **)(piStack_298 + 6) = puVar4;
        piStack_298[8] = iVar16;
        piStack_298 = piStack_298 + 10;
      }
      FUN_1800b38f0(&local_f8);
      break;
    }
    iVar24 = iVar24 + 1;
  } while (iVar24 < 3);
  FUN_18000f890(&local_120);
  FUN_1800b38f0(&local_248);
  FUN_180068f30(&local_1c0);
  FUN_180068f30();
  plVar18 = local_288;
  plVar34 = local_250;
  plVar37 = local_278;
  plVar39 = local_280;
  plVar40 = local_258;
LAB_180222d6a:
  plVar34 = plVar34 + 0xc;
  bVar41 = plVar34 == local_208;
  goto LAB_180221f4c;
LAB_180222d85:
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(5);
  puVar28 = puVar27 + 8;
  goto LAB_180222d8c;
}



/* ===== 180223050 FUN_180223050 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180223050(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [24];
  uint local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  char local_168 [256];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar13 = 1;
  local_188 = 1;
  local_180 = param_1;
  local_178 = param_1;
  FUN_180028f00(param_1,0,param_2 + 0x50);
  lVar10 = param_1[1];
  if (lVar10 == param_1[2]) {
    FUN_180028f00(param_1,lVar10);
  }
  else {
    FUN_180024b50(lVar10,param_2 + 8);
    param_1[1] = param_1[1] + 0x20;
  }
  if (*(longlong *)(param_2 + 0x80) != 0) {
    uVar5 = 0;
    puVar12 = (undefined8 *)(param_2 + 0x70);
    do {
      uVar8 = *(ulonglong *)(param_2 + 0x80);
      puVar4 = puVar12;
      if (0xf < *(ulonglong *)(param_2 + 0x88)) {
        puVar4 = (undefined8 *)*puVar12;
      }
      if (uVar5 < uVar8) {
        pbVar9 = (byte *)((longlong)puVar4 + uVar5);
        if ((uVar8 - uVar5) + 2 < 0x10) {
          FUN_180540170(local_168,0,0x100);
          pbVar6 = &DAT_1806f2a88;
          do {
            local_168[*pbVar6] = '\x01';
            pbVar6 = pbVar6 + 1;
          } while (pbVar6 != &DAT_1806f2a8a);
          while( true ) {
            param_1 = local_180;
            uVar13 = local_188;
            if ((byte *)(uVar8 + (longlong)puVar4) <= pbVar9) break;
            if (local_168[*pbVar9] != '\0') {
              lVar10 = (longlong)pbVar9 - (longlong)puVar4;
              goto LAB_1802231d5;
            }
            pbVar9 = pbVar9 + 1;
          }
          goto LAB_1802231d2;
        }
        lVar3 = thunk_FUN_1804e6380(pbVar9,uVar8 - uVar5,&DAT_1806f2a88,2);
        lVar10 = lVar3 + uVar5;
        if (lVar3 == -1) {
          lVar10 = -1;
        }
      }
      else {
LAB_1802231d2:
        lVar10 = -1;
      }
LAB_1802231d5:
      uVar8 = *(ulonglong *)(param_2 + 0x80);
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      if (lVar10 == -1) {
        puVar11 = auStack_1a8;
        if (uVar8 < uVar5) goto LAB_1802233b8;
        lVar10 = -1;
        if (uVar8 - uVar5 != -1) {
          lVar10 = uVar8 - uVar5;
        }
        if (0xf < *(ulonglong *)(param_2 + 0x88)) {
          puVar12 = (undefined8 *)*puVar12;
        }
        FUN_1800133a0(&local_68,(longlong)puVar12 + uVar5,lVar10);
        local_188 = uVar13 | 2;
        puVar1 = (undefined4 *)param_1[1];
        if (puVar1 == (undefined4 *)param_1[2]) {
          FUN_18009bb20(param_1,puVar1,&local_68);
          uVar5 = uStack_50;
        }
        else {
          *puVar1 = (undefined4)local_68;
          puVar1[1] = local_68._4_4_;
          puVar1[2] = (undefined4)uStack_60;
          puVar1[3] = uStack_60._4_4_;
          *(undefined8 *)(puVar1 + 4) = local_58;
          *(ulonglong *)(puVar1 + 6) = uStack_50;
          local_68 = local_68 & 0xffffffffffffff00;
          param_1[1] = param_1[1] + 0x20;
          uVar5 = 0xf;
        }
        if (uVar5 < 0x10) {
          return param_1;
        }
        uVar8 = uVar5 + 1;
        uVar7 = local_68;
        if (uVar8 < 0x1000) {
LAB_1802233a7:
          thunk_FUN_1803d64e0(uVar7,uVar8);
          return param_1;
        }
        uVar7 = *(ulonglong *)(local_68 - 8);
        if ((local_68 - uVar7) - 8 < 0x20) {
          uVar8 = uVar5 + 0x28;
          goto LAB_1802233a7;
        }
LAB_1802233b1:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar11 = auStack_1a0;
LAB_1802233b8:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar11 + -8) = &UNK_1802233bd;
        FUN_18002a1a0();
      }
      puVar11 = auStack_1a8;
      if (uVar8 < uVar5) goto LAB_1802233b8;
      uVar7 = lVar10 - uVar5;
      if (uVar8 - uVar5 < lVar10 - uVar5) {
        uVar7 = uVar8 - uVar5;
      }
      puVar4 = puVar12;
      if (0xf < *(ulonglong *)(param_2 + 0x88)) {
        puVar4 = (undefined8 *)*puVar12;
      }
      FUN_1800133a0(&local_68,(longlong)puVar4 + uVar5,uVar7);
      uVar13 = uVar13 | 4;
      puVar1 = (undefined4 *)param_1[1];
      local_188 = uVar13;
      if (puVar1 == (undefined4 *)param_1[2]) {
        FUN_18009bb20(param_1,puVar1,&local_68);
        uVar5 = uStack_50;
      }
      else {
        *puVar1 = (undefined4)local_68;
        puVar1[1] = local_68._4_4_;
        puVar1[2] = (undefined4)uStack_60;
        puVar1[3] = uStack_60._4_4_;
        *(undefined8 *)(puVar1 + 4) = local_58;
        *(ulonglong *)(puVar1 + 6) = uStack_50;
        local_68 = local_68 & 0xffffffffffffff00;
        param_1[1] = param_1[1] + 0x20;
        uVar5 = 0xf;
      }
      if (0xf < uVar5) {
        uVar7 = uVar5 + 1;
        uVar8 = local_68;
        if (0xfff < uVar7) {
          uVar8 = *(ulonglong *)(local_68 - 8);
          if (0x1f < (local_68 - uVar8) - 8) goto LAB_1802233b1;
          uVar7 = uVar5 + 0x28;
        }
        thunk_FUN_1803d64e0(uVar8,uVar7);
      }
      uVar5 = lVar10 + 1;
    } while (uVar5 < *(ulonglong *)(param_2 + 0x80));
  }
  return param_1;
}



/* ===== 1802233c0 FUN_1802233c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1802233c0(uint param_1)

{
  uint uVar1;
  int *piVar2;
  longlong *plVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  undefined8 ******ppppppuVar22;
  undefined8 *_Buf1;
  ulonglong uVar23;
  undefined8 *_Buf2;
  ulonglong uVar24;
  int *piVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined8 ******ppppppuVar30;
  uint uVar31;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar32;
  undefined8 uStack_210;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [24];
  longlong local_1e8 [2];
  uint local_1d8;
  uint local_1d0 [2];
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  ulonglong local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  undefined8 ******local_178;
  longlong lStack_170;
  ulonglong local_168;
  ulonglong uStack_160;
  longlong local_158 [3];
  undefined8 auStack_140 [4];
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 ******local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  ulonglong local_e0;
  undefined8 ******local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  ulonglong local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  puVar27 = auStack_208;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_208;
  uVar31 = 0;
  local_1d8 = 0;
  uVar23 = (((((ulonglong)(param_1 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)((int)param_1 >> 8 & 0xff)) * 0x100000001b3 ^
            (ulonglong)((int)param_1 >> 0x10 & 0xff)) * 0x100000001b3 ^
           (ulonglong)((int)param_1 >> 0x18 & 0xff)) * 0x100000001b3 & DAT_180cecb50;
  lVar14 = *(longlong *)(DAT_180cecb38 + 8 + uVar23 * 0x10);
  if (lVar14 == DAT_180cecb28) {
LAB_180223491:
    lVar14 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar14 + 0x10);
    while (param_1 != uVar1) {
      if (lVar14 == *(longlong *)(DAT_180cecb38 + uVar23 * 0x10)) goto LAB_180223491;
      lVar14 = *(longlong *)(lVar14 + 8);
      uVar1 = *(uint *)(lVar14 + 0x10);
    }
  }
  if ((lVar14 != 0) && (lVar14 != DAT_180cecb28)) {
    plVar17 = (longlong *)(lVar14 + 0x18);
    goto LAB_180223dda;
  }
  if (0 < (int)param_1) {
    local_1d0[0] = param_1;
    cVar11 = FUN_1802216f0();
    if ((cVar11 != '\0') && (uVar23 = FUN_180280c60(local_1d0[0]), uVar23 != 0)) {
      local_1b8 = uVar23;
      FUN_180223050(&local_1b0,uVar23);
      local_158[0] = 0;
      local_158[1] = 0;
      local_158[2] = 0;
      auStack_140[0] = 0;
      auStack_140[1] = 0;
      auStack_140[2] = 0;
      auStack_140[3] = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      FUN_180224610(local_158);
      puVar26 = auStack_208;
      uStack_f0 = 0;
      local_e8 = 0;
      local_e0 = 0xf;
      local_f8 = (undefined8 ******)0x0;
      local_1c8 = DAT_180cecb00;
      local_1c0 = DAT_180cecb08;
      puVar21 = DAT_180cecb00;
      if (DAT_180cecb00 != DAT_180cecb08) {
        do {
          uVar24 = 0;
          local_178 = (undefined8 ******)0x0;
          lStack_170 = 0;
          local_168 = 0;
          uStack_160 = 0;
          local_1d8 = uVar31;
          local_1c8 = puVar21;
          if ((ulonglong)puVar21[2] < 0x1b) {
                    /* WARNING: Subroutine does not return */
            FUN_18002a1a0();
          }
          lVar13 = puVar21[2] - 0x1b;
          lVar14 = -1;
          if (lVar13 != -1) {
            lVar14 = lVar13;
          }
          if ((ulonglong)puVar21[3] < 0x10) {
            puVar18 = puVar21;
          }
          else {
            puVar18 = (undefined8 *)*puVar21;
          }
          FUN_1800133a0(&local_178,(longlong)puVar18 + 0x1b,lVar14);
          uVar9 = local_168;
          ppppppuVar22 = &local_178;
          if (0xf < uStack_160) {
            ppppppuVar22 = local_178;
          }
          local_1e8[0] = 0xb;
          uVar23 = FUN_180068d80(ppppppuVar22,local_168,0,PTR_s__vnmgraph_c_180625ef8);
          if (uVar23 == 0xffffffffffffffff) {
LAB_180223695:
            uStack_190 = 0;
            local_198 = (undefined8 *)0x0;
            uStack_180 = 0xf;
            local_188 = 0;
            puVar18 = local_1b0;
            puVar8 = local_1a8;
            uVar9 = local_188;
          }
          else {
            uVar15 = uVar23;
            if (uVar9 < uVar23) {
              uVar15 = uVar9;
            }
            lVar14 = FUN_1800ba730(ppppppuVar22,uVar15);
            if (lVar14 == -1) {
              if ((uVar9 < 10) ||
                 (iVar12 = memcmp(ppppppuVar22,PTR_s_viewmodel__180625f18,10), iVar12 != 0)) {
                local_1d8 = uVar31;
                goto LAB_180223695;
              }
              local_198 = (undefined8 *)0x0;
              uStack_190 = 0;
              local_188 = 0;
              uStack_180 = 0;
              uVar15 = uVar23 - 10;
              if (uVar9 - 10 < uVar23 - 10) {
                uVar15 = uVar9 - 10;
              }
              FUN_1800133a0(&local_198,(longlong)ppppppuVar22 + 10,uVar15);
              local_1d8 = uVar31;
              puVar18 = local_1b0;
              puVar8 = local_1a8;
              uVar9 = local_188;
            }
            else {
              uVar15 = lVar14 + 1;
              if (uVar9 < uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_180225aa0();
              }
              uVar23 = uVar23 - lVar14;
              local_198 = (undefined8 *)0x0;
              uStack_190 = 0;
              local_188 = 0;
              uStack_180 = 0;
              uVar28 = uVar23 - 1;
              if (uVar9 - uVar15 < uVar23 - 1) {
                uVar28 = uVar9 - uVar15;
              }
              FUN_1800133a0(&local_198,uVar15 + (longlong)ppppppuVar22,uVar28);
              local_1d8 = uVar31;
              puVar18 = local_1b0;
              puVar8 = local_1a8;
              uVar9 = local_188;
            }
          }
          while( true ) {
            puVar10 = local_1a8;
            local_188 = uVar9;
            if (puVar18 == local_1a8) break;
            uVar23 = puVar18[2];
            if ((ulonglong)puVar18[3] < 0x10) {
              _Buf2 = puVar18;
            }
            else {
              _Buf2 = (undefined8 *)*puVar18;
            }
            _Buf1 = &local_198;
            if (0xf < uStack_180) {
              _Buf1 = local_198;
            }
            local_1a8 = puVar8;
            if (uVar9 == uVar23) {
              if (uVar9 != 0) {
                iVar12 = memcmp(_Buf1,_Buf2,uVar9);
                if (iVar12 != 0) goto LAB_180223706;
              }
LAB_1802238d9:
              FUN_18000f890(&local_198);
              if (local_e8 != 0) {
                FUN_1800134a0(&local_f8,&DAT_1806f0594,2);
              }
              ppppppuVar22 = &local_178;
              if (0xf < uStack_160) {
                ppppppuVar22 = local_178;
              }
              FUN_1800134a0(&local_f8,ppppppuVar22,local_168);
              if ((ulonglong)puVar21[3] < 0x10) {
                puVar18 = puVar21;
              }
              else {
                puVar18 = (undefined8 *)*puVar21;
              }
              uVar23 = 0xcbf29ce484222325;
              if (puVar21[2] != 0) {
                do {
                  uVar23 = (uVar23 ^ *(byte *)((longlong)puVar18 + uVar24)) * 0x100000001b3;
                  uVar24 = uVar24 + 1;
                } while (uVar24 < (ulonglong)puVar21[2]);
                puVar21 = local_1c8;
              }
              lVar14 = FUN_180225320(uVar24,local_98,puVar21,uVar23);
              puVar27 = *(undefined1 **)(lVar14 + 8);
              if ((puVar27 == (undefined1 *)0x0) || (puVar27 == DAT_180cecac8)) {
                puVar18 = (undefined8 *)FUN_180224a10(extraout_XMM0_Da,local_b8,puVar21);
                puVar27 = (undefined1 *)*puVar18;
                puVar19 = (undefined1 *)FUN_180221c30(&local_198,puVar21);
                puVar27[0x30] = *puVar19;
                if (puVar27 != puVar19 + -0x30) {
                  FUN_180224f70(puVar27 + 0x38);
                  *(undefined8 *)(puVar27 + 0x38) = *(undefined8 *)(puVar19 + 8);
                  *(undefined8 *)(puVar27 + 0x40) = *(undefined8 *)(puVar19 + 0x10);
                  *(undefined8 *)(puVar27 + 0x48) = *(undefined8 *)(puVar19 + 0x18);
                  *(undefined8 *)(puVar19 + 8) = 0;
                  *(undefined8 *)(puVar19 + 0x10) = 0;
                  *(undefined8 *)(puVar19 + 0x18) = 0;
                }
                FUN_180224f70(&uStack_190);
              }
              piVar2 = *(int **)(puVar27 + 0x40);
              piVar25 = *(int **)(puVar27 + 0x38);
              if (piVar25 != piVar2) {
                do {
                  lVar13 = (longlong)*piVar25;
                  plVar17 = local_158 + lVar13 * 4;
                  lVar14 = *(longlong *)(piVar25 + 2);
                  lVar29 = *(longlong *)(piVar25 + 4) - lVar14;
                  uVar23 = (lVar29 >> 3) * -0x3333333333333333;
                  if (((ulonglong)
                       ((local_158[lVar13 * 4 + 1] - *plVar17 >> 3) * -0x3333333333333333) < uVar23)
                     || ((lVar29 == local_158[lVar13 * 4 + 1] - *plVar17 &&
                         (*(int *)(auStack_140 + lVar13 * 4) < piVar25[8])))) {
                    if (plVar17 != (longlong *)(piVar25 + 2)) {
                      FUN_180224cf0(plVar17,lVar14,uVar23);
                    }
                    *(int *)(auStack_140 + lVar13 * 4) = piVar25[8];
                  }
                  piVar25 = piVar25 + 10;
                } while (piVar25 != piVar2);
                uVar31 = local_1d8;
              }
              FUN_18000f890(&local_178);
              goto LAB_1802237a5;
            }
LAB_180223706:
            uVar15 = uVar9;
            if (uVar23 < uVar9) {
              uVar15 = uVar23;
            }
            if ((3 < uVar15) &&
               (((uVar23 <= uVar9 && (iVar12 = FUN_1800990d0(&local_198), iVar12 == 0)) ||
                ((local_188 <= (ulonglong)puVar18[2] &&
                 (iVar12 = FUN_1800990d0(puVar18), iVar12 == 0)))))) goto LAB_1802238d9;
            puVar18 = puVar18 + 4;
            puVar8 = local_1a8;
            uVar9 = local_188;
            local_1a8 = puVar10;
          }
          local_1a8 = puVar8;
          FUN_18000f890(&local_198);
          if (0xf < uStack_160) {
            uVar24 = uStack_160 + 1;
            ppppppuVar22 = local_178;
            if (0xfff < uVar24) {
              ppppppuVar22 = (undefined8 ******)local_178[-1];
              if (0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)ppppppuVar22))) {
                pcVar5 = (code *)swi(0x29);
                (*pcVar5)(5);
                puVar26 = auStack_200;
                goto LAB_180223aba;
              }
              uVar24 = uStack_160 + 0x28;
            }
            thunk_FUN_1803d64e0(ppppppuVar22,uVar24);
          }
LAB_1802237a5:
          local_1c8 = puVar21 + 4;
          uVar31 = uVar31 | 0xc;
          puVar21 = local_1c8;
        } while (local_1c8 != local_1c0);
        uVar23 = local_1b8;
      }
      uStack_d0 = 0;
      local_c8 = 0;
      local_c0 = 0xf;
      local_d8 = (undefined8 ******)0x0;
      puVar21 = local_1b0;
      puVar27 = auStack_208;
      if (local_1b0 != local_1a8) {
        do {
          if (local_c8 != 0) {
            FUN_1800134a0(&local_d8,&DAT_1806efc00,1);
          }
          uVar16 = FUN_180066a20(&local_198,&DAT_1806e17c8,puVar21);
          plVar17 = (longlong *)FUN_1800134a0(uVar16,&DAT_1806e17c8,1);
          local_178 = (undefined8 ******)*plVar17;
          lStack_170 = plVar17[1];
          local_168 = plVar17[2];
          uStack_160 = plVar17[3];
          plVar17[2] = 0;
          plVar17[3] = 0xf;
          *(undefined1 *)plVar17 = 0;
          ppppppuVar22 = &local_178;
          if (0xf < uStack_160) {
            ppppppuVar22 = local_178;
          }
          FUN_1800134a0(&local_d8,ppppppuVar22,local_168);
          if (0xf < uStack_160) {
            uVar24 = uStack_160 + 1;
            ppppppuVar22 = local_178;
            if (0xfff < uVar24) {
              ppppppuVar22 = (undefined8 ******)local_178[-1];
              if (0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)ppppppuVar22)))
              goto LAB_180223aba;
              uVar24 = uStack_160 + 0x28;
            }
            thunk_FUN_1803d64e0(ppppppuVar22,uVar24);
          }
          FUN_18000f890(&local_198);
          puVar21 = puVar21 + 4;
          puVar27 = auStack_208;
        } while (puVar21 != local_1a8);
      }
      goto LAB_180223ac5;
    }
  }
  puVar27 = auStack_208;
  plVar17 = (longlong *)0x0;
LAB_180223dda:
  *(undefined8 *)(puVar27 + -8) = 0x180223de9;
  return plVar17;
LAB_180223aba:
  pcVar5 = (code *)swi(0x29);
  (*pcVar5)(5);
  puVar27 = puVar26 + 8;
LAB_180223ac5:
  uVar24 = 0;
  if (local_e8 == 0) {
    ppppppuVar22 = (undefined8 ******)&DAT_1806dfd84;
  }
  else {
    ppppppuVar22 = &local_f8;
    if (0xf < local_e0) {
      ppppppuVar22 = local_f8;
    }
  }
  ppppppuVar30 = &local_d8;
  if (0xf < local_c0) {
    ppppppuVar30 = local_d8;
  }
  plVar17 = (longlong *)(uVar23 + 8);
  if (0xf < *(ulonglong *)(uVar23 + 0x20)) {
    plVar17 = (longlong *)*plVar17;
  }
  *(undefined8 *******)(puVar27 + 0x20) = ppppppuVar22;
  *(undefined8 *)(puVar27 + -8) = 0x180223b13;
  FUN_180221620("def %d (%s) names %s | graphs %s",*(undefined4 *)(puVar27 + 0x38),plVar17,
                ppppppuVar30);
  do {
    lStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0xf;
    local_178 = (undefined8 ******)0x0;
    plVar3 = (longlong *)local_158[uVar24 * 4 + 1];
    for (plVar17 = (longlong *)local_158[uVar24 * 4]; plVar17 != plVar3; plVar17 = plVar17 + 5) {
      lVar14 = plVar17[4];
      *(undefined8 *)(puVar27 + -8) = 0x180223b6f;
      lVar14 = FUN_18003a390(local_78,(int)lVar14);
      *(undefined8 *)(puVar27 + -8) = 0x180223b85;
      uVar16 = FUN_180066a20(local_98,&DAT_1806efc00,plVar17);
      *(undefined8 *)(puVar27 + -8) = 0x180223b9b;
      puVar20 = (undefined4 *)FUN_1800134a0(uVar16,&DAT_1806e1b3c,1);
      uVar32 = puVar20[1];
      uVar6 = puVar20[2];
      uVar7 = puVar20[3];
      *(undefined4 *)(puVar27 + 0x70) = *puVar20;
      *(undefined4 *)(puVar27 + 0x74) = uVar32;
      *(undefined4 *)(puVar27 + 0x78) = uVar6;
      *(undefined4 *)(puVar27 + 0x7c) = uVar7;
      local_188 = *(ulonglong *)(puVar20 + 4);
      uStack_180 = *(ulonglong *)(puVar20 + 6);
      *(undefined8 *)(puVar20 + 4) = 0;
      *(undefined8 *)(puVar20 + 6) = 0xf;
      *(undefined1 *)puVar20 = 0;
      *(undefined8 *)(puVar27 + -8) = 0x180223bcf;
      puVar21 = (undefined8 *)FUN_180066820(local_b8,puVar27 + 0x70,lVar14);
      uVar16 = puVar21[2];
      if (0xf < (ulonglong)puVar21[3]) {
        puVar21 = (undefined8 *)*puVar21;
      }
      *(undefined8 *)(puVar27 + -8) = 0x180223bea;
      FUN_1800134a0(&local_178,puVar21,uVar16);
      *(undefined8 *)(puVar27 + -8) = 0x180223bf4;
      FUN_18000f890(local_b8);
      if (0xf < uStack_180) {
        uVar23 = uStack_180 + 1;
        lVar13 = *(longlong *)(puVar27 + 0x70);
        lVar29 = lVar13;
        if (0xfff < uVar23) {
          lVar29 = *(longlong *)(lVar13 + -8);
          if (0x1f < (lVar13 - lVar29) - 8U) {
            pcVar5 = (code *)swi(0x29);
            (*pcVar5)(5);
            puVar27 = puVar27 + 8;
            goto LAB_180223d17;
          }
          uVar23 = uStack_180 + 0x28;
        }
        *(undefined8 *)(puVar27 + -8) = 0x180223c31;
        thunk_FUN_1803d64e0(lVar29,uVar23);
      }
      *(undefined8 *)(puVar27 + -8) = 0x180223c3b;
      FUN_18000f890(local_98);
      *(undefined8 *)(puVar27 + -8) = 0x180223c48;
      FUN_18000f890(local_78);
    }
    ppppppuVar22 = &local_178;
    if (0xf < uStack_160) {
      ppppppuVar22 = local_178;
    }
    lVar14 = local_158[uVar24 * 4 + 1];
    lVar13 = local_158[uVar24 * 4];
    *(undefined8 *******)(puVar27 + 0x28) = ppppppuVar22;
    *(undefined4 *)(puVar27 + 0x20) = *(undefined4 *)(auStack_140 + uVar24 * 4);
    puVar4 = (&PTR_s_inspect_variation_180625f28)[uVar24 * 2];
    *(undefined8 *)(puVar27 + -8) = 0x180223ca8;
    FUN_180221620("def %d %s: %d variants, modulus %d |%s",*(undefined4 *)(puVar27 + 0x38),puVar4,
                  (lVar14 - lVar13 >> 3) * -0x3333333333333333);
    *(undefined8 *)(puVar27 + -8) = 0x180223cb2;
    uVar32 = FUN_18000f890(&local_178);
    uVar31 = (int)uVar24 + 1;
    uVar24 = (ulonglong)uVar31;
  } while ((int)uVar31 < 3);
  *(undefined8 *)(puVar27 + -8) = 0x180223ccd;
  plVar17 = (longlong *)FUN_180224730(uVar32,local_b8,puVar27 + 0x38);
  lVar14 = *plVar17;
  plVar17 = (longlong *)(lVar14 + 0x18);
  if (plVar17 != local_158) {
    *(undefined8 *)(puVar27 + -8) = 0x180223ce5;
    FUN_1800b38f0(plVar17);
    *plVar17 = local_158[0];
    *(longlong *)(lVar14 + 0x20) = local_158[1];
    *(longlong *)(lVar14 + 0x28) = local_158[2];
    local_158[0] = 0;
    local_158[1] = 0;
    local_158[2] = 0;
  }
LAB_180223d17:
  *(undefined4 *)(lVar14 + 0x30) = (undefined4)auStack_140[0];
  puVar21 = (undefined8 *)(lVar14 + 0x38);
  if (puVar21 != auStack_140 + 1) {
    *(undefined8 *)(puVar27 + -8) = 0x180223d32;
    FUN_1800b38f0(puVar21);
    *puVar21 = auStack_140[1];
    *(undefined8 *)(lVar14 + 0x40) = auStack_140[2];
    *(undefined8 *)(lVar14 + 0x48) = auStack_140[3];
    auStack_140[1] = 0;
    auStack_140[2] = 0;
    auStack_140[3] = 0;
  }
  *(undefined4 *)(lVar14 + 0x50) = (undefined4)uStack_120;
  puVar21 = (undefined8 *)(lVar14 + 0x58);
  if (puVar21 != &local_118) {
    *(undefined8 *)(puVar27 + -8) = 0x180223d70;
    FUN_1800b38f0(puVar21);
    *puVar21 = local_118;
    *(undefined8 *)(lVar14 + 0x60) = uStack_110;
    *(undefined8 *)(lVar14 + 0x68) = local_108;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
  }
  *(undefined4 *)(lVar14 + 0x70) = (undefined4)uStack_100;
  *(undefined8 *)(puVar27 + -8) = 0x180223da2;
  FUN_18000f890(&local_d8);
  *(undefined8 *)(puVar27 + -8) = 0x180223dac;
  FUN_18000f890(&local_f8);
  *(undefined8 *)(puVar27 + -8) = 0x180223dc8;
  FUN_1804eced0(local_158,0x20,3,thunk_FUN_1800b38f0);
  *(undefined8 *)(puVar27 + -8) = 0x180223dd3;
  FUN_1800288b0(puVar27 + 0x58);
  goto LAB_180223dda;
}



/* ===== 180223e10 FUN_180223e10 ===== */

void FUN_180223e10(undefined8 param_1)

{
  FUN_1804eced0(param_1,0x20,3,thunk_FUN_1800b38f0);
  return;
}



/* ===== 180223e40 FUN_180223e40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180223e40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  uint *puVar12;
  longlong lVar13;
  longlong *plVar14;
  int *piVar15;
  uint *puVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  undefined8 local_res8;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  
  iVar19 = 0;
  uVar20 = 0;
  local_88 = 0;
  uStack_80 = _DAT_1808adf80;
  uStack_78 = _UNK_1808adf88;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = local_res8;
    DAT_1811089f8 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  lVar13 = DAT_1811089f8;
  if (DAT_1811089f8 != 0) {
    if (((DAT_180ca0a0c == 0) || (uVar18 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 == 0)) ||
       (lVar10 = FUN_18000f3a0(DAT_1811089f8 + (ulonglong)DAT_180ca0a0c), lVar10 == 0)) {
      lVar10 = 0;
    }
    else {
      uVar8 = FUN_180011200(lVar10 + uVar18);
      plVar11 = (longlong *)FUN_1803a0940(&local_res8,uVar8);
      lVar10 = *plVar11;
    }
    if (((lVar10 != 0) && (DAT_180ceca9c != 0)) && ((DAT_180cecaa0 != 0 && (DAT_180cecaa8 != 0)))) {
      uVar7 = FUN_180011440((ulonglong)DAT_180cecaa8 + (ulonglong)DAT_180cecaa4 + lVar10);
      uVar18 = (ulonglong)uVar7;
      if (DAT_180ca09f4 == 0) {
        cVar6 = '\0';
      }
      else {
        cVar6 = FUN_180011220(lVar13 + (ulonglong)DAT_180ca09f4);
      }
      uVar17 = (uint)uVar7;
      local_88 = lVar10;
      if (uVar7 != 0) {
        puVar12 = &DAT_180931b4c;
        puVar16 = &DAT_180931b4c;
        do {
          if ((*puVar16 == uVar17) && (puVar16[1] == (uint)(cVar6 == '\x02'))) goto LAB_180223ff0;
          puVar16 = puVar16 + 0xab;
        } while (puVar16 != &DAT_18093c64c);
        do {
          if ((*puVar12 == uVar17) && (puVar12[1] == 0xffffffff)) goto LAB_180223fd7;
          puVar12 = puVar12 + 0xab;
        } while (puVar12 != &DAT_18093c64c);
      }
      puVar12 = (uint *)0x0;
LAB_180223fd7:
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar17);
      if (puVar12 != (uint *)0x0) {
        puVar16 = puVar12;
LAB_180223ff0:
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar17);
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_180ceca88);
        uVar20 = puVar16[3];
        uStack_64 = uVar20;
        if ((((0 < (int)uVar20) &&
             (plVar11 = (longlong *)FUN_1802233c0(uVar18), plVar11 != (longlong *)0x0)) &&
            ((int)plVar11[3] != 0)) &&
           ((int)(uVar20 - 1) < (int)(plVar11[1] - *plVar11 >> 3) * -0x33333333)) {
          uStack_70 = CONCAT44(uStack_70._4_4_,(int)plVar11[3]);
          uStack_80 = CONCAT44(*(undefined4 *)
                                (*plVar11 + 0x20 + ((longlong)(int)uVar20 + -1) * 0x28),
                               (undefined4)uStack_80);
        }
        uVar20 = puVar16[4];
        uStack_60 = uVar20;
        if (0 < (int)uVar20) {
          lVar13 = FUN_1802233c0();
          plVar11 = (longlong *)(lVar13 + 0x20);
          if (lVar13 == 0) {
            plVar11 = (longlong *)0x0;
          }
          if (plVar11 != (longlong *)0x0) {
            piVar15 = (int *)(lVar13 + 0x38);
            if (lVar13 == 0) {
              piVar15 = (int *)&DAT_00000018;
            }
            if (*piVar15 != 0) {
              plVar14 = (longlong *)(lVar13 + 0x28);
              if (lVar13 == 0) {
                plVar14 = (longlong *)&DAT_00000008;
              }
              if ((int)(uVar20 - 1) < (int)(*plVar14 - *plVar11 >> 3) * -0x33333333) {
                uStack_70 = CONCAT44(*piVar15,(undefined4)uStack_70);
                uStack_78 = CONCAT44(uStack_78._4_4_,
                                     *(undefined4 *)
                                      (*plVar11 + 0x20 + ((longlong)(int)uVar20 + -1) * 0x28));
              }
            }
          }
        }
        uVar20 = puVar16[5];
        uStack_5c = uVar20;
        if (0 < (int)uVar20) {
          lVar13 = FUN_1802233c0();
          plVar11 = (longlong *)(lVar13 + 0x40);
          if (lVar13 == 0) {
            plVar11 = (longlong *)0x0;
          }
          if (plVar11 != (longlong *)0x0) {
            piVar15 = (int *)(lVar13 + 0x58);
            if (lVar13 == 0) {
              piVar15 = (int *)&DAT_00000018;
            }
            iVar9 = *piVar15;
            if (iVar9 != 0) {
              plVar14 = (longlong *)(lVar13 + 0x48);
              if (lVar13 == 0) {
                plVar14 = (longlong *)&DAT_00000008;
              }
              if ((int)(uVar20 - 1) < (int)(*plVar14 - *plVar11 >> 3) * -0x33333333) {
                uStack_78 = CONCAT44(*(undefined4 *)
                                      (*plVar11 + 0x20 + ((longlong)(int)uVar20 + -1) * 0x28),
                                     (undefined4)uStack_78);
                iVar19 = iVar9;
                local_68 = iVar9;
              }
            }
          }
        }
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180ceca88);
      }
      goto LAB_180224198;
    }
  }
  uVar18 = uStack_80 & 0xffffffff;
LAB_180224198:
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180ceca90);
  uVar5 = uStack_70;
  uVar4 = uStack_78;
  uVar3 = uStack_80;
  uVar1 = CONCAT44(uStack_64,local_68);
  uVar2 = CONCAT44(uStack_5c,uStack_60);
  DAT_1809f2950 = local_88;
  _DAT_1809f2958 = uStack_80;
  _DAT_1809f2960 = uStack_78;
  _DAT_1809f2968 = uStack_70;
  _DAT_1809f2970 = uVar1;
  DAT_1809f2978 = uVar2;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180ceca90);
  if (((local_88 == DAT_1809f2980) && (iVar9 = memcmp(&uStack_64,&DAT_1809f29a4,0xc), iVar9 == 0))
     && (iVar9 = memcmp((void *)((longlong)&uStack_80 + 4),&DAT_1809f298c,0xc), iVar9 == 0)) {
    return;
  }
  FUN_180221620("snap table | weapon %p def %d | inspect %d (%d/%d) | deploy %d (%d/%d) | idle %d (%d/%d)"
                ,local_88,uVar18,uStack_64,uStack_80._4_4_,(undefined4)uStack_70,uStack_60,
                (undefined4)uStack_78,uStack_70._4_4_,uVar20,uStack_78._4_4_,iVar19);
  uRam00000001809f29a8 = uVar2;
  _DAT_1809f29a0 = uVar1;
  uRam00000001809f2998 = uVar5;
  _DAT_1809f2990 = uVar4;
  uRam00000001809f2988 = uVar3;
  DAT_1809f2980 = local_88;
  return;
}



/* ===== 1802242b0 FUN_1802242b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802242b0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float local_b0;
  float local_ac;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88 [3];
  undefined4 uStack_7c;
  undefined8 local_78;
  
  if (DAT_180ca0108 == (code *)0x0) {
    return 0;
  }
  if ((((param_2 == 0) || (DAT_180ceca98 == '\0')) || (DAT_180ceca9c == 0)) || (DAT_180cecaa0 == 0))
  {
                    /* WARNING: Could not recover jumptable at 0x000180224606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*DAT_180ca0108)();
    return uVar6;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180ceca90);
  lVar8 = DAT_1809f2950;
  local_a0 = DAT_1809f2950;
  local_98 = _DAT_1809f2958;
  uStack_90 = _DAT_1809f2960;
  local_78 = DAT_1809f2978;
  local_88[0] = _DAT_1809f2968;
  local_88[1] = uRam00000001809f296c;
  local_88[2] = _DAT_1809f2970;
  uStack_7c = uRam00000001809f2974;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180ceca90);
  if (lVar8 == param_2) {
    uVar4 = FUN_180011440((ulonglong)DAT_180ceca9c + param_2);
    if (uVar4 == 0x32) {
      uVar13 = 2;
      piVar7 = (int *)((longlong)&uStack_90 + 4);
      puVar11 = local_88 + 2;
    }
    else if (uVar4 == 0xb) {
      uVar13 = 1;
      piVar7 = (int *)&uStack_90;
      puVar11 = local_88 + 1;
    }
    else {
      if ((uVar4 & 0xfffe) != 1000) {
        uVar6 = (*DAT_180ca0108)(param_1,param_2,param_3,param_4);
        return uVar6;
      }
      uVar13 = 0;
      piVar7 = (int *)((longlong)&local_98 + 4);
      puVar11 = local_88;
    }
    iVar1 = *piVar7;
    if (((iVar1 < 0) || (uVar2 = *puVar11, (int)uVar2 < 1)) ||
       (lVar8 = FUN_18000f3a0(param_2 + 0x10), lVar8 == 0)) {
      uVar6 = (*DAT_180ca0108)(param_1,param_2,param_3,param_4);
    }
    else {
      uVar5 = FUN_180011200(lVar8 + 0x10);
      uVar5 = uVar5 & 0x7fff;
      local_a8 = (ulonglong)DAT_180cecaa0 + param_2;
      fVar14 = (float)FUN_18000f3d0(local_a8);
      uVar9 = (int)(fVar14 * DAT_1808acab0 + DAT_1808ac1f4) + uVar5;
      if ((int)uVar9 < 0) {
        iVar10 = -((-uVar9 - -uVar9 % uVar2) + iVar1);
      }
      else {
        iVar10 = (uVar9 - uVar9 % uVar2) + iVar1;
      }
      fVar15 = (float)(int)(iVar10 - uVar5) * DAT_1808ac00c;
      local_b0 = fVar15;
      local_ac = fVar14;
      cVar3 = FUN_180013280(local_a8,&local_b0);
      if (cVar3 == '\0') {
        uVar6 = (*DAT_180ca0108)();
      }
      else {
        uVar6 = (*DAT_180ca0108)(param_1,param_2,param_3,param_4);
        FUN_180013280(local_a8,&local_ac);
        if (uVar4 != DAT_180ce203c) {
          LOCK();
          iVar10 = DAT_180cecab0 + 1;
          UNLOCK();
          iVar12 = DAT_180cecab0 + 1;
          DAT_180cecab0 = iVar10;
          if (iVar12 < 0xc9) {
            DAT_180ce203c = uVar4;
            FUN_180221620("snap | weapon %p state %u kind %d | idx %d | modulus %d start %d | ts %.6f -> %.6f"
                          ,param_2,uVar4,uVar13,uVar5,uVar2,iVar1,(double)fVar14,(double)fVar15);
          }
        }
      }
    }
  }
  else {
    uVar6 = (*DAT_180ca0108)(param_1,param_2,param_3,param_4);
  }
  return uVar6;
}



/* ===== 180224610 FUN_180224610 ===== */

void FUN_180224610(longlong param_1)

{
  ulonglong uVar1;
  
  for (uVar1 = 0; uVar1 < 3; uVar1 = uVar1 + 1) {
    FUN_180224710(uVar1 * 0x20 + param_1);
  }
  return;
}



/* ===== 180224660 FUN_180224660 ===== */

void FUN_180224660(undefined8 *param_1)

{
  FUN_1802259a0(param_1,*param_1);
  thunk_FUN_1803d64e0(*param_1,0x78);
  return;
}



/* ===== 180224690 FUN_180224690 ===== */

void FUN_180224690(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_180224f70(puVar1 + 7);
    FUN_18000f890(puVar1 + 2);
    thunk_FUN_1803d64e0(puVar1,0x50);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x50);
  return;
}



/* ===== 180224710 FUN_180224710 ===== */

void FUN_180224710(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



/* ===== 180224730 FUN_180224730 ===== */

undefined8 * FUN_180224730(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  puVar7 = (undefined8 *)(DAT_180cecb50 & uVar9);
  puVar4 = *(undefined8 **)(DAT_180cecb38 + 8 + (longlong)puVar7 * 0x10);
  puVar10 = DAT_180cecb28;
  if (puVar4 != DAT_180cecb28) {
    puVar7 = *(undefined8 **)(DAT_180cecb38 + (longlong)puVar7 * 0x10);
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
  if (DAT_180cecb30 == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x78,puVar7,DAT_180cecb38,param_4,&DAT_180cecb28,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  FUN_180224610();
  uVar3 = DAT_180cecb58;
  if (DAT_180cecb20 < (float)(DAT_180cecb30 + 1) / (float)DAT_180cecb58) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_180cecb30 + 1) / DAT_180cecb20);
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
    FUN_180225d80(uVar6,uVar8);
    puVar7 = *(undefined8 **)(DAT_180cecb38 + 8 + (DAT_180cecb50 & uVar9) * 0x10);
    puVar10 = DAT_180cecb28;
    if (puVar7 != DAT_180cecb28) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar10 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar10 == *(undefined8 **)(DAT_180cecb38 + (DAT_180cecb50 & uVar9) * 0x10))
        goto LAB_180224988;
        puVar10 = (undefined8 *)puVar10[1];
        iVar1 = *(int *)(puVar10 + 2);
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_180224988:
  puVar7 = (undefined8 *)puVar10[1];
  DAT_180cecb30 = DAT_180cecb30 + 1;
  *puVar4 = puVar10;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar10[1] = puVar4;
  lVar5 = DAT_180cecb38;
  uVar9 = DAT_180cecb50 & uVar9;
  puVar2 = *(undefined8 **)(DAT_180cecb38 + uVar9 * 0x10);
  if (puVar2 == DAT_180cecb28) {
    *(undefined8 **)(DAT_180cecb38 + uVar9 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar10) {
      *(undefined8 **)(DAT_180cecb38 + uVar9 * 0x10) = puVar4;
      goto LAB_1802249e7;
    }
    if (*(undefined8 **)(DAT_180cecb38 + 8 + uVar9 * 0x10) != puVar7) goto LAB_1802249e7;
  }
  *(undefined8 **)(lVar5 + 8 + uVar9 * 0x10) = puVar4;
LAB_1802249e7:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180224a10 FUN_180224a10 ===== */

longlong * FUN_180224a10(undefined8 param_1,longlong *param_2,undefined8 *param_3)

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
  FUN_180225320(uVar3,&local_58,param_3,uVar8);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180cecad0 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar10 = &DAT_180cecac8;
  puVar2 = (undefined8 *)FUN_1804ecaa0(0x50);
  puVar6 = puVar2;
  FUN_180024b50(puVar2 + 2,param_3);
  *(undefined4 *)((longlong)puVar2 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar2 + 0x35) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x37) = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  uVar3 = DAT_180cecaf8;
  if (DAT_180cecac0 < (float)(DAT_180cecad0 + 1) / (float)DAT_180cecaf8) {
    fVar9 = (float)FUN_18053ef70((float)(DAT_180cecad0 + 1) / DAT_180cecac0,DAT_180cecad0,
                                 (float)DAT_180cecaf8,DAT_180cecac0,puVar10,puVar6);
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
    FUN_180225f50(uVar5,uVar7);
    puVar6 = *(undefined8 **)(DAT_180cecad8 + 8 + (DAT_180cecaf0 & uVar8) * 0x10);
    local_58 = DAT_180cecac8;
    if (puVar6 != DAT_180cecac8) {
      puVar10 = *(undefined8 **)(DAT_180cecad8 + (DAT_180cecaf0 & uVar8) * 0x10);
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
        if (local_58 == puVar10) goto LAB_180224c6d;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_180224c6d:
  puVar6 = (undefined8 *)local_58[1];
  DAT_180cecad0 = DAT_180cecad0 + 1;
  *puVar2 = local_58;
  puVar2[1] = puVar6;
  *puVar6 = puVar2;
  local_58[1] = puVar2;
  lVar4 = DAT_180cecad8;
  uVar8 = DAT_180cecaf0 & uVar8;
  puVar10 = *(undefined8 **)(DAT_180cecad8 + uVar8 * 0x10);
  if (puVar10 == DAT_180cecac8) {
    *(undefined8 **)(DAT_180cecad8 + uVar8 * 0x10) = puVar2;
  }
  else {
    if (puVar10 == local_58) {
      *(undefined8 **)(DAT_180cecad8 + uVar8 * 0x10) = puVar2;
      goto LAB_180224cc7;
    }
    if (*(undefined8 **)(DAT_180cecad8 + 8 + uVar8 * 0x10) != puVar6) goto LAB_180224cc7;
  }
  *(undefined8 **)(lVar4 + 8 + uVar8 * 0x10) = puVar2;
LAB_180224cc7:
  *param_2 = (longlong)puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180224cf0 FUN_180224cf0 ===== */

void FUN_180224cf0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 *local_68;
  undefined8 *local_60;
  longlong *local_58;
  
  puVar6 = auStack_88;
  puVar7 = auStack_88;
  puVar10 = (undefined8 *)*param_1;
  uVar3 = (param_1[2] - (longlong)puVar10 >> 3) * -0x3333333333333333;
  if (param_3 <= uVar3) {
    puVar2 = (undefined8 *)param_1[1];
    lVar9 = (longlong)puVar2 - (longlong)puVar10 >> 3;
    if ((ulonglong)(lVar9 * -0x3333333333333333) < param_3) {
      if (puVar10 != puVar2) {
        do {
          if (puVar10 != param_2) {
            if ((ulonglong)param_2[3] < 0x10) {
              puVar2 = param_2;
            }
            else {
              puVar2 = (undefined8 *)*param_2;
            }
            FUN_180029840(puVar10,puVar2,param_2[2]);
          }
          *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(param_2 + 4);
          puVar10 = puVar10 + 5;
          param_2 = param_2 + 5;
          puVar2 = (undefined8 *)param_1[1];
        } while (puVar10 != puVar2);
      }
      local_68 = puVar2;
      local_58 = param_1;
      for (lVar9 = param_3 + lVar9 * 0x3333333333333333; lVar9 != 0; lVar9 = lVar9 + -1) {
        local_60 = puVar2;
        FUN_180024b50(puVar2,param_2);
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 4);
        puVar2 = puVar2 + 5;
        param_2 = param_2 + 5;
      }
    }
    else {
      puVar2 = puVar10 + param_3 * 5;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        if (puVar10 != param_2) {
          if ((ulonglong)param_2[3] < 0x10) {
            puVar5 = param_2;
          }
          else {
            puVar5 = (undefined8 *)*param_2;
          }
          FUN_180029840(puVar10,puVar5,param_2[2]);
        }
        *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(param_2 + 4);
        puVar10 = puVar10 + 5;
        param_2 = param_2 + 5;
      }
      puVar10 = (undefined8 *)param_1[1];
      for (puVar5 = puVar2; puVar5 != puVar10; puVar5 = puVar5 + 5) {
        FUN_18000f890(puVar5);
      }
    }
    goto LAB_180224f44;
  }
  if (0x666666666666666 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  if (0x666666666666666 - (uVar3 >> 1) < uVar3) {
    uVar3 = 0x666666666666666;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar3 < param_3) {
      uVar3 = param_3;
    }
  }
  puVar8 = auStack_88;
  if (puVar10 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    for (; puVar10 != puVar2; puVar10 = puVar10 + 5) {
      FUN_18000f890(puVar10);
    }
    lVar9 = *param_1;
    lVar4 = lVar9;
    if ((ulonglong)((param_1[2] - lVar9 >> 3) * 8) < 0x1000) {
LAB_180224dc7:
      puVar7 = puVar6;
    }
    else {
      lVar4 = *(longlong *)(lVar9 + -8);
      if (0x1f < (lVar9 - lVar4) - 8U) {
        lVar4 = 5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar6 = auStack_80;
        goto LAB_180224dc7;
      }
    }
    *(undefined8 *)(puVar7 + -8) = 0x180224dd2;
    thunk_FUN_1803d64e0(lVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar8 = puVar7;
  }
  if (0x666666666666666 < uVar3) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_180224f5e;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar8 + -8) = 0x180224dfc;
  puVar2 = (undefined8 *)FUN_18000fb70(uVar3 * 0x28);
  *param_1 = (longlong)puVar2;
  param_1[1] = (longlong)puVar2;
  param_1[2] = (longlong)(puVar2 + uVar3 * 5);
  *(undefined8 **)(puVar8 + 0x20) = puVar2;
  *(undefined8 **)(puVar8 + 0x28) = puVar2;
  *(longlong **)(puVar8 + 0x30) = param_1;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined8 *)(puVar8 + -8) = 0x180224e2d;
    FUN_180024b50(puVar2,param_2);
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 4);
    puVar2 = puVar2 + 5;
    *(undefined8 **)(puVar8 + 0x28) = puVar2;
    param_2 = param_2 + 5;
  }
LAB_180224f44:
  param_1[1] = (longlong)puVar2;
  return;
}



/* ===== 180224f70 FUN_180224f70 ===== */

void FUN_180224f70(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x28) {
    FUN_1800b38f0(lVar3 + 8);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_180225000;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_180225000:
  *(undefined8 *)(puVar5 + -8) = 0x180225008;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180225020 FUN_180225020 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180225020(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_a8;
  lVar6 = param_2 - param_1;
  while( true ) {
    if (lVar6 >> 5 < 0x21) {
      FUN_180225ac0(param_1,param_2);
      return;
    }
    lVar6 = param_2 - param_1 >> 6;
    if (param_3 < 1) break;
    local_78 = lVar6 * 0x20 + param_1;
    lVar6 = param_2 + -0x20;
    lVar9 = lVar6 - param_1 >> 5;
    lVar8 = param_1;
    if (0x28 < lVar9) {
      lVar9 = lVar9 + 1 >> 3;
      lVar8 = lVar9 * 0x20 + param_1;
      FUN_180226540(param_1,lVar8,lVar9 * 0x40 + param_1);
      FUN_180226540(local_78 + lVar9 * -0x20,local_78,lVar9 * 0x20 + local_78);
      lVar6 = lVar6 + lVar9 * -0x20;
      FUN_180226540(param_2 + -0x20 + lVar9 * -0x40,lVar6);
    }
    lVar9 = local_78;
    FUN_180226540(lVar8,local_78,lVar6);
    FUN_1802262e0(&local_70,param_1,lVar9,param_2);
    lVar8 = CONCAT44(uStack_6c,local_70);
    lVar6 = CONCAT44(uStack_64,uStack_68);
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (lVar8 - param_1 >> 5 < param_2 - lVar6 >> 5) {
      FUN_180225020(param_1,lVar8,param_3,param_4);
      param_1 = lVar6;
      lVar8 = param_2;
    }
    else {
      FUN_180225020(lVar6,param_2,param_3,param_4);
    }
    lVar6 = lVar8 - param_1;
    param_2 = lVar8;
  }
  lVar8 = param_2 - param_1 >> 5;
  while (0 < lVar6) {
    lVar9 = lVar6 * 0x20;
    lVar6 = lVar6 + -1;
    puVar2 = (undefined4 *)(param_1 + -0x20 + lVar9);
    local_70 = *puVar2;
    uStack_6c = puVar2[1];
    uStack_68 = puVar2[2];
    uStack_64 = puVar2[3];
    puVar2 = (undefined4 *)(param_1 + -0x10 + lVar9);
    local_60 = *puVar2;
    uStack_5c = puVar2[1];
    uStack_58 = puVar2[2];
    uStack_54 = puVar2[3];
    *(undefined8 *)(param_1 + -0x10 + lVar9) = 0;
    *(undefined8 *)(param_1 + -8 + lVar9) = 0xf;
    *(undefined1 *)(param_1 + -0x20 + lVar9) = 0;
    local_88 = param_4;
    FUN_1802261d0(param_1,lVar6,lVar8,&local_70);
    uVar5 = CONCAT44(uStack_54,uStack_58);
    if (0xf < uVar5) {
      lVar4 = CONCAT44(uStack_6c,local_70);
      uVar7 = uVar5 + 1;
      lVar9 = lVar4;
      if (0xfff < uVar7) {
        lVar9 = *(longlong *)(lVar4 + -8);
        if (0x1f < (lVar4 - lVar9) - 8U) goto LAB_180225314;
        uVar7 = uVar5 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar9,uVar7);
    }
  }
  if (1 < lVar8) {
    do {
      if (1 < param_2 - param_1 >> 5) {
        local_70 = *(undefined4 *)(param_2 + -0x20);
        uStack_6c = *(undefined4 *)(param_2 + -0x1c);
        uStack_68 = *(undefined4 *)(param_2 + -0x18);
        uStack_64 = *(undefined4 *)(param_2 + -0x14);
        puVar1 = (undefined1 *)(param_2 + -0x20);
        local_60 = *(undefined4 *)(param_2 + -0x10);
        uStack_5c = *(undefined4 *)(param_2 + -0xc);
        uStack_58 = *(undefined4 *)(param_2 + -8);
        uStack_54 = *(undefined4 *)(param_2 + -4);
        *(undefined8 *)(param_2 + -0x10) = 0;
        *(undefined8 *)(param_2 + -8) = 0xf;
        *puVar1 = 0;
        FUN_18002ba60(puVar1,param_1);
        local_88 = param_4;
        FUN_1802261d0(param_1,0,(longlong)puVar1 - param_1 >> 5,&local_70);
        uVar5 = CONCAT44(uStack_54,uStack_58);
        if (0xf < uVar5) {
          lVar8 = CONCAT44(uStack_6c,local_70);
          uVar7 = uVar5 + 1;
          lVar6 = lVar8;
          if (0xfff < uVar7) {
            lVar6 = *(longlong *)(lVar8 + -8);
            if (0x1f < (lVar8 - lVar6) - 8U) {
LAB_180225314:
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar7 = uVar5 + 0x28;
          }
          thunk_FUN_1803d64e0(lVar6,uVar7);
        }
      }
      param_2 = param_2 + -0x20;
    } while (0x3f < param_2 - param_1);
  }
  return;
}



/* ===== 180225320 FUN_180225320 ===== */

undefined8 *
FUN_180225320(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(DAT_180cecad8 + 8 + (DAT_180cecaf0 & param_4) * 0x10);
  if (puVar4 == DAT_180cecac8) {
    *param_2 = DAT_180cecac8;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = *(undefined8 **)(DAT_180cecad8 + (DAT_180cecaf0 & param_4) * 0x10);
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



/* ===== 180225400 FUN_180225400 ===== */

undefined4 * FUN_180225400(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar14 = *param_1;
  uVar13 = 0x666666666666666;
  lVar9 = (param_1[1] - lVar14 >> 3) * -0x3333333333333333;
  if (lVar9 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar9 + 1;
  uVar12 = (param_1[2] - lVar14 >> 3) * -0x3333333333333333;
  if (uVar12 <= 0x666666666666666 - (uVar12 >> 1)) {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar13 = uVar1;
    if (uVar1 <= uVar12) {
      uVar13 = uVar12;
    }
    if (0x666666666666666 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar10 = (undefined4 *)FUN_18000fb70(uVar13 * 0x28);
  puVar15 = auStack_48;
  puVar16 = auStack_48;
  lVar14 = ((longlong)param_2 - lVar14) / 0x28;
  puVar10[lVar14 * 10] = *param_3;
  puVar2 = puVar10 + lVar14 * 10;
  uVar3 = *(undefined8 *)(param_3 + 2);
  uVar4 = *(undefined8 *)(param_3 + 6);
  uVar5 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(puVar2 + 2) = uVar3;
  *(undefined8 *)(puVar2 + 4) = uVar5;
  *(undefined8 *)(puVar2 + 6) = uVar4;
  puVar2[8] = param_3[8];
  puVar6 = (undefined4 *)param_1[1];
  puVar11 = (undefined4 *)*param_1;
  puVar8 = puVar10;
  if (param_2 == puVar6) {
    for (; puVar11 != puVar6; puVar11 = puVar11 + 10) {
      *puVar8 = *puVar11;
      uVar3 = *(undefined8 *)(puVar11 + 2);
      uVar4 = *(undefined8 *)(puVar11 + 6);
      uVar5 = *(undefined8 *)(puVar11 + 4);
      *(undefined8 *)(puVar11 + 6) = 0;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 2) = 0;
      *(undefined8 *)(puVar8 + 2) = uVar3;
      *(undefined8 *)(puVar8 + 4) = uVar5;
      *(undefined8 *)(puVar8 + 6) = uVar4;
      puVar8[8] = puVar11[8];
      puVar8 = puVar8 + 10;
    }
  }
  else {
    for (; puVar11 != param_2; puVar11 = puVar11 + 10) {
      *puVar8 = *puVar11;
      uVar3 = *(undefined8 *)(puVar11 + 2);
      uVar4 = *(undefined8 *)(puVar11 + 6);
      uVar5 = *(undefined8 *)(puVar11 + 4);
      *(undefined8 *)(puVar11 + 6) = 0;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 2) = 0;
      *(undefined8 *)(puVar8 + 2) = uVar3;
      *(undefined8 *)(puVar8 + 4) = uVar5;
      *(undefined8 *)(puVar8 + 6) = uVar4;
      puVar8[8] = puVar11[8];
      puVar8 = puVar8 + 10;
    }
    puVar6 = (undefined4 *)param_1[1];
    puVar11 = puVar2;
    for (; param_2 != puVar6; param_2 = param_2 + 10) {
      puVar11[10] = *param_2;
      uVar3 = *(undefined8 *)(param_2 + 2);
      uVar4 = *(undefined8 *)(param_2 + 6);
      uVar5 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(puVar11 + 0xc) = uVar3;
      *(undefined8 *)(puVar11 + 0xe) = uVar5;
      *(undefined8 *)(puVar11 + 0x10) = uVar4;
      puVar11[0x12] = param_2[8];
      puVar11 = puVar11 + 10;
    }
  }
  lVar14 = *param_1;
  if (lVar14 == 0) goto LAB_18022568c;
  lVar9 = param_1[1];
  for (; lVar14 != lVar9; lVar14 = lVar14 + 0x28) {
    FUN_1800b38f0(lVar14 + 8);
  }
  lVar14 = *param_1;
  lVar9 = lVar14;
  if ((ulonglong)((param_1[2] - lVar14 >> 3) * 8) < 0x1000) {
LAB_180225681:
    puVar16 = puVar15;
  }
  else {
    lVar9 = *(longlong *)(lVar14 + -8);
    if (0x1f < (lVar14 - lVar9) - 8U) {
      lVar9 = 5;
      pcVar7 = (code *)swi(0x29);
      (*pcVar7)(5);
      puVar15 = auStack_40;
      goto LAB_180225681;
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x18022568c;
  thunk_FUN_1803d64e0(lVar9);
LAB_18022568c:
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + uVar1 * 10);
  param_1[2] = (longlong)(puVar10 + uVar13 * 10);
  return puVar2;
}



/* ===== 1802256d0 FUN_1802256d0 ===== */

undefined8 * FUN_1802256d0(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

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
      puVar9 = puVar14;
    }
  }
  lVar16 = *param_1;
  if (lVar16 == 0) goto LAB_18022595b;
  lVar10 = param_1[1];
  for (; lVar16 != lVar10; lVar16 = lVar16 + 0x28) {
    FUN_18000f890(lVar16);
  }
  lVar16 = *param_1;
  lVar10 = lVar16;
  if ((ulonglong)((param_1[2] - lVar16 >> 3) * 8) < 0x1000) {
LAB_180225950:
    puVar18 = puVar17;
  }
  else {
    lVar10 = *(longlong *)(lVar16 + -8);
    if (0x1f < (lVar16 - lVar10) - 8U) {
      lVar10 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar17 = auStack_40;
      goto LAB_180225950;
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x18022595b;
  thunk_FUN_1803d64e0(lVar10);
LAB_18022595b:
  *param_1 = (longlong)puVar11;
  param_1[1] = (longlong)(puVar11 + uVar1 * 5);
  param_1[2] = (longlong)(puVar11 + uVar15 * 5);
  return puVar2;
}



/* ===== 1802259a0 FUN_1802259a0 ===== */

void FUN_1802259a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_1804eced0(puVar2 + 3,0x20,3,thunk_FUN_1800b38f0);
    thunk_FUN_1803d64e0(puVar2,0x78);
    puVar2 = puVar1;
  }
  return;
}



/* ===== 180225a00 FUN_180225a00 ===== */

void FUN_180225a00(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_180224f70(lVar1 + 0x38);
    FUN_18000f890(lVar1 + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x50);
  }
  return;
}



/* ===== 180225a50 FUN_180225a50 ===== */

void FUN_180225a50(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1804eced0(*(longlong *)(param_1 + 8) + 0x18,0x20,3,thunk_FUN_1800b38f0);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x78);
  return;
}



/* ===== 180225aa0 FUN_180225aa0 ===== */

void FUN_180225aa0(void)

{
  code *pcVar1;
  
  FUN_1804e4d00("invalid string_view position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 180225ac0 FUN_180225ac0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ******* FUN_180225ac0(undefined8 *******param_1,undefined8 *******param_2)

{
  code *pcVar1;
  undefined8 *******pppppppuVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  undefined8 ******ppppppuVar5;
  int iVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******_Buf1;
  undefined8 *******pppppppuVar9;
  undefined8 *******_Buf2;
  undefined8 ******ppppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined1 auStack_b8 [32];
  undefined8 *******local_98;
  undefined8 *******local_90;
  undefined8 ******ppppppuStack_88;
  undefined8 ******local_80;
  undefined8 ******ppppppuStack_78;
  ulonglong local_70;
  
  local_70 = DAT_180919500 ^ (ulonglong)auStack_b8;
  if ((param_1 == param_2) ||
     (pppppppuVar7 = param_1 + 4, local_98 = param_2, pppppppuVar7 == param_2)) {
    return param_2;
  }
LAB_180225b10:
  pppppppuVar2 = (undefined8 *******)*pppppppuVar7;
  ppppppuVar3 = pppppppuVar7[1];
  ppppppuVar4 = pppppppuVar7[2];
  ppppppuVar5 = pppppppuVar7[3];
  pppppppuVar7[2] = (undefined8 ******)0x0;
  pppppppuVar7[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar7 = 0;
  ppppppuVar10 = param_1[2];
  if (param_1[3] < (undefined8 ******)0x10) {
    pppppppuVar9 = param_1;
  }
  else {
    pppppppuVar9 = (undefined8 *******)*param_1;
  }
  pppppppuVar8 = &local_90;
  if ((undefined8 ******)0xf < ppppppuVar5) {
    pppppppuVar8 = pppppppuVar2;
  }
  ppppppuVar11 = ppppppuVar4;
  if (ppppppuVar10 < ppppppuVar4) {
    ppppppuVar11 = ppppppuVar10;
  }
  local_90 = pppppppuVar2;
  ppppppuStack_88 = ppppppuVar3;
  local_80 = ppppppuVar4;
  ppppppuStack_78 = ppppppuVar5;
  iVar6 = memcmp(pppppppuVar8,pppppppuVar9,(size_t)ppppppuVar11);
  if (iVar6 == 0) {
    if (ppppppuVar10 <= ppppppuVar4) goto LAB_180225b84;
  }
  else if (-1 < iVar6) {
LAB_180225b84:
    pppppppuVar9 = pppppppuVar7;
    do {
      pppppppuVar8 = pppppppuVar9 + -4;
      ppppppuVar10 = pppppppuVar9[-2];
      if (pppppppuVar9[-1] < (undefined8 ******)0x10) {
        _Buf2 = pppppppuVar8;
      }
      else {
        _Buf2 = (undefined8 *******)*pppppppuVar8;
      }
      _Buf1 = &local_90;
      if ((undefined8 ******)0xf < ppppppuVar5) {
        _Buf1 = pppppppuVar2;
      }
      ppppppuVar11 = ppppppuVar4;
      if (ppppppuVar10 < ppppppuVar4) {
        ppppppuVar11 = ppppppuVar10;
      }
      iVar6 = memcmp(_Buf1,_Buf2,(size_t)ppppppuVar11);
      if (iVar6 == 0) {
        if (ppppppuVar10 <= ppppppuVar4) goto LAB_180225c69;
      }
      else if (-1 < iVar6) goto LAB_180225c69;
      FUN_18002ba60(pppppppuVar9,pppppppuVar8);
      pppppppuVar9 = pppppppuVar8;
    } while( true );
  }
  pppppppuVar9 = pppppppuVar7 + 4;
  pppppppuVar8 = pppppppuVar7;
  while (pppppppuVar8 != param_1) {
    pppppppuVar8 = pppppppuVar8 + -4;
    pppppppuVar9 = pppppppuVar9 + -4;
    FUN_18002ba60(pppppppuVar9,pppppppuVar8);
  }
  if ((undefined8 ********)param_1 == &local_90) goto LAB_180225ce3;
  ppppppuVar10 = param_1[3];
  if (ppppppuVar10 < (undefined8 ******)0x10) {
LAB_180225c38:
    *param_1 = pppppppuVar2;
    param_1[1] = ppppppuVar3;
    param_1[2] = ppppppuVar4;
    param_1[3] = ppppppuVar5;
  }
  else {
    ppppppuVar11 = *param_1;
    if ((longlong)ppppppuVar10 + 1U < 0x1000) {
      thunk_FUN_1803d64e0(ppppppuVar11,(longlong)ppppppuVar10 + 1U,ppppppuVar11);
      goto LAB_180225c38;
    }
    if (0x1f < (ulonglong)((longlong)ppppppuVar11 + (-8 - (longlong)ppppppuVar11[-1])))
    goto LAB_180225d50;
    thunk_FUN_1803d64e0(ppppppuVar11[-1],ppppppuVar10 + 5);
    *param_1 = pppppppuVar2;
    param_1[1] = ppppppuVar3;
    param_1[2] = ppppppuVar4;
    param_1[3] = ppppppuVar5;
  }
  goto LAB_180225d16;
LAB_180225c69:
  if ((undefined8 ********)pppppppuVar9 == &local_90) {
LAB_180225ce3:
    if ((undefined8 ******)0xf < ppppppuVar5) {
      ppppppuVar10 = (undefined8 ******)((longlong)ppppppuVar5 + 1);
      pppppppuVar9 = pppppppuVar2;
      if ((undefined8 ******)0xfff < ppppppuVar10) {
        pppppppuVar9 = (undefined8 *******)pppppppuVar2[-1];
        if (0x1f < (ulonglong)((longlong)pppppppuVar2 + (-8 - (longlong)pppppppuVar9))) {
LAB_180225d50:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          pppppppuVar7 = (undefined8 *******)(*pcVar1)();
          return pppppppuVar7;
        }
        ppppppuVar10 = ppppppuVar5 + 5;
      }
      thunk_FUN_1803d64e0(pppppppuVar9,ppppppuVar10);
    }
  }
  else {
    ppppppuVar10 = pppppppuVar9[3];
    if ((undefined8 ******)0xf < ppppppuVar10) {
      ppppppuVar11 = *pppppppuVar9;
      if (0xfff < (longlong)ppppppuVar10 + 1U) {
        if (0x1f < (ulonglong)((longlong)ppppppuVar11 + (-8 - (longlong)ppppppuVar11[-1])))
        goto LAB_180225d50;
        thunk_FUN_1803d64e0(ppppppuVar11[-1],ppppppuVar10 + 5);
        *pppppppuVar9 = pppppppuVar2;
        pppppppuVar9[1] = ppppppuVar3;
        pppppppuVar9[2] = ppppppuVar4;
        pppppppuVar9[3] = ppppppuVar5;
        goto LAB_180225d16;
      }
      thunk_FUN_1803d64e0(ppppppuVar11,(longlong)ppppppuVar10 + 1U,ppppppuVar11);
    }
    *pppppppuVar9 = pppppppuVar2;
    pppppppuVar9[1] = ppppppuVar3;
    pppppppuVar9[2] = ppppppuVar4;
    pppppppuVar9[3] = ppppppuVar5;
  }
LAB_180225d16:
  pppppppuVar7 = pppppppuVar7 + 4;
  if (pppppppuVar7 == local_98) {
    return local_98;
  }
  goto LAB_180225b10;
}



/* ===== 180225d80 FUN_180225d80 ===== */

void FUN_180225d80(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180cecb28;
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
  FUN_180029d30(&DAT_180cecb38,2L << (bVar10 & 0x3f),DAT_180cecb28);
  DAT_180cecb50 = lVar11 - 1;
  DAT_180cecb58 = lVar11;
  plVar7 = (longlong *)*DAT_180cecb28;
  lVar11 = DAT_180cecb38;
joined_r0x000180225dfc:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180cecb38 = lVar11;
          return;
        }
        plVar1 = (longlong *)*plVar7;
        uVar9 = (((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 & DAT_180cecb50;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180cecb38 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180cecb38;
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
      lVar11 = DAT_180cecb38;
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
        lVar11 = DAT_180cecb38;
        goto joined_r0x000180225dfc;
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
    lVar11 = DAT_180cecb38;
  } while( true );
}



/* ===== 180225f50 FUN_180225f50 ===== */

void FUN_180225f50(undefined8 param_1,ulonglong param_2)

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
  
  plVar9 = DAT_180cecac8;
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
  FUN_180029d30(&DAT_180cecad8,2L << (bVar13 & 0x3f),DAT_180cecac8);
  DAT_180cecaf0 = lVar17 - 1;
  DAT_180cecaf8 = lVar17;
  plVar8 = (longlong *)*DAT_180cecac8;
joined_r0x000180225fda:
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
      uVar12 = uVar12 & DAT_180cecaf0;
      plVar18 = *(longlong **)(DAT_180cecad8 + uVar12 * 0x10);
      puVar2 = (undefined8 *)(DAT_180cecad8 + uVar12 * 0x10);
      lVar17 = DAT_180cecad8 + uVar12 * 0x10;
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
joined_r0x0001802260e3:
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
            goto joined_r0x000180225fda;
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
      goto joined_r0x000180225fda;
    }
    if ((_Size != 0) && (iVar10 = memcmp(plVar14,plVar16,_Size), iVar10 != 0)) {
      uVar11 = plVar8[5];
      goto joined_r0x0001802260e3;
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



/* ===== 1802261d0 FUN_1802261d0 ===== */

void FUN_1802261d0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(param_3 - 1) >> 1;
  lVar1 = param_2;
  while (lVar1 < lVar4) {
    cVar2 = FUN_180023470(param_1 + 0x40 + lVar1 * 0x40,(lVar1 * 0x40 | 0x20U) + param_1);
    lVar3 = lVar1 * 0x20;
    lVar1 = ((longlong)cVar2 >> 0x3f) + 2 + lVar1 * 2;
    FUN_18002ba60(param_1 + lVar3,lVar1 * 0x20 + param_1);
  }
  if ((lVar1 == lVar4) && ((param_3 & 1) == 0)) {
    FUN_18002ba60(param_1 + lVar1 * 0x20,param_1 + -0x20 + param_3 * 0x20);
    lVar1 = param_3 - 1;
  }
  while (param_2 < lVar1) {
    lVar3 = lVar1 + -1 >> 1;
    lVar4 = lVar3 * 0x20 + param_1;
    cVar2 = FUN_180023470(lVar4,param_4);
    if (-1 < cVar2) break;
    FUN_18002ba60(param_1 + lVar1 * 0x20,lVar4);
    lVar1 = lVar3;
  }
  FUN_18002ba60(param_1 + lVar1 * 0x20,param_4);
  return;
}



/* ===== 1802262e0 FUN_1802262e0 ===== */

undefined8 *
FUN_1802262e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char cVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  puVar14 = param_3;
  while (puVar15 = puVar14, param_2 < puVar15) {
    puVar14 = puVar15 + -4;
    cVar10 = FUN_180023470(puVar14,puVar15);
    if ((cVar10 < '\0') || (cVar10 = FUN_180023470(puVar15,puVar14), cVar10 < '\0')) break;
  }
  do {
    param_3 = param_3 + 4;
    puVar14 = param_3;
    puVar11 = puVar15;
    if (param_4 <= param_3) break;
    cVar10 = FUN_180023470(param_3,puVar15);
    if ((cVar10 < '\0') || (cVar10 = FUN_180023470(puVar15,param_3), cVar10 < '\0')) break;
  } while( true );
joined_r0x000180226373:
  puVar13 = puVar14;
  puVar12 = puVar11;
  if (param_4 <= param_3) {
joined_r0x0001802263c4:
    while (puVar9 = puVar15, param_2 < puVar9) {
      puVar15 = puVar9 + -4;
      cVar10 = FUN_180023470(puVar15,puVar12);
      if (-1 < cVar10) {
        cVar10 = FUN_180023470(puVar12,puVar15);
        if (cVar10 < '\0') break;
        if (puVar9 != puVar12) {
          uVar1 = *(undefined4 *)((longlong)puVar9 + -0x1c);
          uVar2 = *(undefined4 *)(puVar9 + -3);
          uVar3 = *(undefined4 *)((longlong)puVar9 + -0x14);
          uVar4 = puVar12[-4];
          uVar5 = puVar12[-3];
          uVar6 = puVar12[-2];
          uVar7 = puVar12[-1];
          *(undefined4 *)(puVar12 + -4) = *(undefined4 *)puVar15;
          *(undefined4 *)((longlong)puVar12 + -0x1c) = uVar1;
          *(undefined4 *)(puVar12 + -3) = uVar2;
          *(undefined4 *)((longlong)puVar12 + -0x14) = uVar3;
          uVar8 = puVar9[-1];
          puVar12[-2] = puVar9[-2];
          puVar12[-1] = uVar8;
          *puVar15 = uVar4;
          puVar9[-3] = uVar5;
          puVar9[-2] = uVar6;
          puVar9[-1] = uVar7;
        }
        puVar12 = puVar12 + -4;
      }
    }
    if (puVar9 == param_2) {
      if (param_3 == param_4) {
        *param_1 = puVar12;
        param_1[1] = puVar13;
        return param_1;
      }
      if ((puVar13 != param_3) && (puVar12 != puVar13)) {
        uVar1 = *(undefined4 *)((longlong)puVar13 + 4);
        uVar2 = *(undefined4 *)(puVar13 + 1);
        uVar3 = *(undefined4 *)((longlong)puVar13 + 0xc);
        uVar4 = *puVar12;
        uVar5 = puVar12[1];
        uVar6 = puVar12[2];
        uVar7 = puVar12[3];
        *(undefined4 *)puVar12 = *(undefined4 *)puVar13;
        *(undefined4 *)((longlong)puVar12 + 4) = uVar1;
        *(undefined4 *)(puVar12 + 1) = uVar2;
        *(undefined4 *)((longlong)puVar12 + 0xc) = uVar3;
        uVar8 = puVar13[3];
        puVar12[2] = puVar13[2];
        puVar12[3] = uVar8;
        *puVar13 = uVar4;
        puVar13[1] = uVar5;
        puVar13[2] = uVar6;
        puVar13[3] = uVar7;
      }
      if (puVar12 != param_3) {
        uVar1 = *(undefined4 *)((longlong)param_3 + 4);
        uVar2 = *(undefined4 *)(param_3 + 1);
        uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
        uVar4 = *puVar12;
        uVar5 = puVar12[1];
        uVar6 = puVar12[2];
        uVar7 = puVar12[3];
        *(undefined4 *)puVar12 = *(undefined4 *)param_3;
        *(undefined4 *)((longlong)puVar12 + 4) = uVar1;
        *(undefined4 *)(puVar12 + 1) = uVar2;
        *(undefined4 *)((longlong)puVar12 + 0xc) = uVar3;
        uVar8 = param_3[3];
        puVar12[2] = param_3[2];
        puVar12[3] = uVar8;
        *param_3 = uVar4;
        param_3[1] = uVar5;
        param_3[2] = uVar6;
        param_3[3] = uVar7;
      }
      param_3 = param_3 + 4;
      puVar14 = puVar13 + 4;
      puVar15 = puVar9;
      puVar11 = puVar12 + 4;
    }
    else {
      puVar15 = puVar9 + -4;
      if (param_3 == param_4) {
        puVar11 = puVar12 + -4;
        if (puVar12 != puVar9) {
          uVar1 = *(undefined4 *)((longlong)puVar12 + -0x1c);
          uVar2 = *(undefined4 *)(puVar12 + -3);
          uVar3 = *(undefined4 *)((longlong)puVar12 + -0x14);
          uVar4 = *puVar15;
          uVar5 = puVar9[-3];
          uVar6 = puVar9[-2];
          uVar7 = puVar9[-1];
          *(undefined4 *)puVar15 = *(undefined4 *)puVar11;
          *(undefined4 *)((longlong)puVar9 + -0x1c) = uVar1;
          *(undefined4 *)(puVar9 + -3) = uVar2;
          *(undefined4 *)((longlong)puVar9 + -0x14) = uVar3;
          uVar8 = puVar12[-1];
          puVar9[-2] = puVar12[-2];
          puVar9[-1] = uVar8;
          *puVar11 = uVar4;
          puVar12[-3] = uVar5;
          puVar12[-2] = uVar6;
          puVar12[-1] = uVar7;
        }
        puVar14 = puVar13 + -4;
        if (puVar13 != puVar12) {
          uVar1 = *(undefined4 *)((longlong)puVar13 + -0x1c);
          uVar2 = *(undefined4 *)(puVar13 + -3);
          uVar3 = *(undefined4 *)((longlong)puVar13 + -0x14);
          uVar4 = *puVar11;
          uVar5 = puVar12[-3];
          uVar6 = puVar12[-2];
          uVar7 = puVar12[-1];
          *(undefined4 *)puVar11 = *(undefined4 *)puVar14;
          *(undefined4 *)((longlong)puVar12 + -0x1c) = uVar1;
          *(undefined4 *)(puVar12 + -3) = uVar2;
          *(undefined4 *)((longlong)puVar12 + -0x14) = uVar3;
          uVar8 = puVar13[-1];
          puVar12[-2] = puVar13[-2];
          puVar12[-1] = uVar8;
          *puVar14 = uVar4;
          puVar13[-3] = uVar5;
          puVar13[-2] = uVar6;
          puVar13[-1] = uVar7;
        }
      }
      else {
        if (param_3 != puVar15) {
          uVar1 = *(undefined4 *)((longlong)puVar9 + -0x1c);
          uVar2 = *(undefined4 *)(puVar9 + -3);
          uVar3 = *(undefined4 *)((longlong)puVar9 + -0x14);
          uVar4 = *param_3;
          uVar5 = param_3[1];
          uVar6 = param_3[2];
          uVar7 = param_3[3];
          *(undefined4 *)param_3 = *(undefined4 *)puVar15;
          *(undefined4 *)((longlong)param_3 + 4) = uVar1;
          *(undefined4 *)(param_3 + 1) = uVar2;
          *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
          uVar8 = puVar9[-1];
          param_3[2] = puVar9[-2];
          param_3[3] = uVar8;
          *puVar15 = uVar4;
          puVar9[-3] = uVar5;
          puVar9[-2] = uVar6;
          puVar9[-1] = uVar7;
        }
        param_3 = param_3 + 4;
        puVar14 = puVar13;
        puVar11 = puVar12;
      }
    }
    goto joined_r0x000180226373;
  }
  cVar10 = FUN_180023470(puVar11,param_3);
  if (-1 < cVar10) {
    cVar10 = FUN_180023470(param_3,puVar11);
    if (cVar10 < '\0') goto joined_r0x0001802263c4;
    if (puVar13 != param_3) {
      uVar1 = *(undefined4 *)((longlong)param_3 + 4);
      uVar2 = *(undefined4 *)(param_3 + 1);
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar4 = *puVar13;
      uVar5 = puVar13[1];
      uVar6 = puVar13[2];
      uVar7 = puVar13[3];
      *(undefined4 *)puVar13 = *(undefined4 *)param_3;
      *(undefined4 *)((longlong)puVar13 + 4) = uVar1;
      *(undefined4 *)(puVar13 + 1) = uVar2;
      *(undefined4 *)((longlong)puVar13 + 0xc) = uVar3;
      uVar8 = param_3[3];
      puVar13[2] = param_3[2];
      puVar13[3] = uVar8;
      *param_3 = uVar4;
      param_3[1] = uVar5;
      param_3[2] = uVar6;
      param_3[3] = uVar7;
    }
    puVar13 = puVar13 + 4;
  }
  param_3 = param_3 + 4;
  puVar14 = puVar13;
  goto joined_r0x000180226373;
}



/* ===== 180226540 FUN_180226540 ===== */

void FUN_180226540(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  
  cVar9 = FUN_180023470(param_2,param_1);
  if ((cVar9 < '\0') && (param_2 != param_1)) {
    uVar1 = *(undefined4 *)((longlong)param_1 + 4);
    uVar2 = *(undefined4 *)(param_1 + 1);
    uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    *(undefined4 *)param_2 = *(undefined4 *)param_1;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    uVar8 = param_1[3];
    param_2[2] = param_1[2];
    param_2[3] = uVar8;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
  }
  cVar9 = FUN_180023470(param_3,param_2);
  if (cVar9 < '\0') {
    if (param_3 != param_2) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      uVar2 = *(undefined4 *)(param_2 + 1);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar4 = *param_3;
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      *(undefined4 *)param_3 = *(undefined4 *)param_2;
      *(undefined4 *)((longlong)param_3 + 4) = uVar1;
      *(undefined4 *)(param_3 + 1) = uVar2;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
      uVar8 = param_2[3];
      param_3[2] = param_2[2];
      param_3[3] = uVar8;
      *param_2 = uVar4;
      param_2[1] = uVar5;
      param_2[2] = uVar6;
      param_2[3] = uVar7;
    }
    cVar9 = FUN_180023470(param_2,param_1);
    if ((cVar9 < '\0') && (param_2 != param_1)) {
      uVar4 = param_1[1];
      uVar5 = *param_2;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      *param_2 = *param_1;
      param_2[1] = uVar4;
      uVar4 = param_1[3];
      param_2[2] = param_1[2];
      param_2[3] = uVar4;
      *param_1 = uVar5;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
    }
  }
  return;
}



/* ===== 1802265f0 FUN_1802265f0 ===== */

void FUN_1802265f0(longlong param_1)

{
  FUN_1800132b0(param_1 + 0x18);
  FUN_180228300(param_1 + 8);
  return;
}



/* ===== 180226610 FUN_180226610 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180226610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  iVar2 = DAT_180cecab4 + 1;
  UNLOCK();
  bVar1 = DAT_180cecab4 < 0xc9;
  DAT_180cecab4 = iVar2;
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
    FUN_1802b2870("wl_skins.log","[%llu] radio | %s\n",UVar4,local_318);
  }
  return;
}



/* ===== 1802266f0 FUN_1802266f0 ===== */

undefined8 * FUN_1802266f0(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar1 = param_2[1];
  if ((uVar1 == 0) || (uVar2 = param_3[1], uVar2 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  lVar3 = *param_2;
  uVar7 = uVar1;
  if ((((*(char *)((uVar1 - 1) + lVar3) == ')') && (uVar1 != 0)) &&
      (lVar5 = thunk_FUN_1804e6c50(lVar3,uVar1 + lVar3,0x28), lVar5 != uVar1 + lVar3)) &&
     ((uVar8 = lVar5 - lVar3, uVar8 != 0xffffffffffffffff && (uVar8 + 1 < uVar1)))) {
    uVar6 = 0;
    if (uVar1 - uVar8 != 2) {
      do {
        if (9 < (byte)(*(char *)(uVar8 + 1 + lVar3 + uVar6) - 0x30U)) goto LAB_18022679d;
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uVar1 - uVar8) - 2);
    }
    uVar7 = uVar8;
  }
LAB_18022679d:
  if (uVar2 <= uVar7) {
    uVar7 = uVar7 - uVar2;
    if (uVar1 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_180225aa0();
    }
    uVar8 = uVar2;
    if (uVar1 - uVar7 < uVar2) {
      uVar8 = uVar1 - uVar7;
    }
    if ((uVar8 == uVar2) &&
       ((uVar8 == 0 || (iVar4 = memcmp((void *)(lVar3 + uVar7),(void *)*param_3,uVar8), iVar4 == 0))
       )) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_1800133a0(param_1,lVar3,uVar7);
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return param_1;
}



/* ===== 180226860 FUN_180226860 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180226860(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  char *pcVar15;
  longlong *plVar16;
  int *piVar17;
  longlong ****pppplVar18;
  undefined8 ****ppppuVar19;
  int iVar20;
  ulonglong uVar21;
  longlong *plVar22;
  int *piVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  longlong ****pppplVar28;
  undefined4 uVar29;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [24];
  undefined8 local_278 [2];
  int local_268 [2];
  undefined8 local_260;
  undefined4 local_258 [2];
  longlong local_250 [8];
  int *local_210;
  int *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_1d8 [2];
  int *local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [16];
  undefined8 ****local_1a8;
  longlong ***ppplStack_1a0;
  ulonglong local_198;
  ulonglong local_190;
  longlong ****local_188;
  undefined8 uStack_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  ulonglong local_150;
  ulonglong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulonglong local_130;
  ulonglong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_110;
  undefined1 local_108 [16];
  longlong local_f8;
  int local_e8;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_298;
  local_268[1] = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_250[7] = param_1;
  local_208 = param_3;
  FUN_1800133a0(&local_168,PTR_s__vsndevts_c_180627f78,0xb);
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_130 = 0;
  FUN_1800133a0(&local_148,PTR_s_soundevents_vo_agents_game_sound_180627fa8,0x22);
  uVar7 = FUN_1800667a0(&local_128,&local_148,param_3);
  uVar7 = FUN_180066820(local_108,uVar7,&local_168);
  lVar8 = FUN_1803905b0(param_1,uVar7);
  FUN_18000f890(local_108);
  FUN_18000f890(&local_128);
  if (local_130 < 0x10) {
LAB_180226979:
    puVar24 = auStack_298;
    local_138 = 0;
    local_130 = 0xf;
    local_148 = local_148 & 0xffffffffffffff00;
    if (0xf < local_150) {
      uVar21 = local_150 + 1;
      uVar26 = local_168;
      if (0xfff < uVar21) {
        uVar26 = *(ulonglong *)(local_168 - 8);
        if (0x1f < (local_168 - uVar26) - 8) goto LAB_180226a13;
        uVar21 = local_150 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar26,uVar21);
    }
    puVar25 = auStack_298;
    if (lVar8 == 0) goto LAB_180227449;
    local_200 = 0;
    uStack_1f8 = 0;
    local_1f0 = 0;
    cVar6 = FUN_180390640(param_1,param_2,&local_200,0xffffffff);
    puVar25 = auStack_298;
    if (cVar6 != '\0') goto LAB_180226a1a;
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_180226610("[error] %s not read",param_2);
    puVar25 = auStack_298;
  }
  else {
    uVar21 = local_130 + 1;
    uVar26 = local_148;
    if (uVar21 < 0x1000) {
LAB_180226974:
      thunk_FUN_1803d64e0(uVar26,uVar21);
      goto LAB_180226979;
    }
    uVar26 = *(ulonglong *)(local_148 - 8);
    if ((local_148 - uVar26) - 8 < 0x20) {
      uVar21 = local_130 + 0x28;
      goto LAB_180226974;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar24 = auStack_290;
LAB_180226a13:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar25 = puVar24 + 8;
LAB_180226a1a:
    local_e8 = 0;
    local_e4 = 0;
    local_e0 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_c0 = 0xf;
    local_d8 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    *(undefined8 *)(puVar25 + -8) = 0x180226a7e;
    cVar6 = FUN_18028da00(&local_200,&local_e8);
    if ((cVar6 == '\0') || (local_e8 != 5)) {
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      pcVar15 = "[error] %s not parsed";
    }
    else {
      plVar22 = plStack_a0;
      if (plStack_a0 != local_98) {
LAB_180226ac0:
        if ((ulonglong)plVar22[3] < 0x10) {
          plVar11 = plVar22;
        }
        else {
          plVar11 = (longlong *)*plVar22;
        }
        if (plVar22[2] != 0x10) goto LAB_180226aea;
        lVar8 = 0x6e6f707365525f6d - *plVar11;
        if (lVar8 == 0) {
          lVar8 = 0x7370756f72476573 - plVar11[1];
        }
        if (lVar8 != 0) goto LAB_180226aea;
        if ((plVar22 + 4 != (longlong *)0x0) && ((int)plVar22[4] == 4)) {
          *(undefined8 *)(puVar25 + -8) = 0x180226b21;
          FUN_1802283b0(puVar25 + 0x40);
          puVar5 = PTR_s_radio__180627f58;
          puVar4 = PTR_s_radio__180627f48;
          iVar14 = 0;
          *(undefined4 *)(puVar25 + 0x30) = 0;
          piVar17 = (int *)plVar22[10];
          *(int **)(puVar25 + 0x38) = piVar17;
          piVar23 = (int *)plVar22[0xb];
          local_210 = piVar23;
          if (piVar17 != piVar23) {
            do {
              piVar10 = (int *)0x0;
              if (*piVar17 == 5) {
                for (piVar12 = *(int **)(piVar17 + 0x12); piVar12 != *(int **)(piVar17 + 0x14);
                    piVar12 = piVar12 + 0x20) {
                  if (*(ulonglong *)(piVar12 + 6) < 0x10) {
                    piVar9 = piVar12;
                  }
                  else {
                    piVar9 = *(int **)piVar12;
                  }
                  if (*(longlong *)(piVar12 + 4) == 6) {
                    iVar20 = 0x616e5f6d - *piVar9;
                    if (iVar20 == 0) {
                      iVar20 = 0x656d - (uint)*(ushort *)(piVar9 + 1);
                    }
                    if (iVar20 == 0) {
                      piVar10 = piVar12 + 8;
                      break;
                    }
                  }
                }
              }
              local_1c8 = param_3;
              if (0xf < *(ulonglong *)(param_3 + 6)) {
                local_1c8 = *(int **)param_3;
              }
              if ((piVar10 == (int *)0x0) || (*piVar10 != 3)) {
                local_1d8[0] = 0;
                local_1d8[1] = 0;
                plVar22 = local_1d8;
              }
              else {
                local_1e8 = (longlong)(piVar10 + 4);
                if (0xf < *(ulonglong *)(piVar10 + 10)) {
                  local_1e8 = *(longlong *)local_1e8;
                }
                local_1e0 = *(undefined8 *)(piVar10 + 8);
                plVar22 = &local_1e8;
              }
              local_1c0 = *(undefined8 *)(param_3 + 4);
              local_1a8 = (undefined8 ****)*plVar22;
              ppplStack_1a0 = (longlong ***)plVar22[1];
              *(undefined8 *)(puVar25 + -8) = 0x180226c19;
              FUN_1802266f0(local_108,&local_1a8,&local_1c8);
              if ((local_f8 != 0) && (*piVar17 == 5)) {
                for (plVar22 = *(longlong **)(piVar17 + 0x12);
                    plVar22 != *(longlong **)(piVar17 + 0x14); plVar22 = plVar22 + 0x10) {
                  if ((ulonglong)plVar22[3] < 0x10) {
                    plVar11 = plVar22;
                  }
                  else {
                    plVar11 = (longlong *)*plVar22;
                  }
                  if (plVar22[2] == 0xb) {
                    lVar8 = 0x6e6f707365725f6d - *plVar11;
                    if ((lVar8 == 0) &&
                       (lVar8 = 0x6573 - (ulonglong)*(ushort *)(plVar11 + 1), lVar8 == 0)) {
                      lVar8 = 0x73 - (ulonglong)*(byte *)((longlong)plVar11 + 10);
                    }
                    if (lVar8 == 0) {
                      plVar11 = plVar22 + 4;
                      plVar16 = plVar22 + 10;
                      plVar22 = plVar22 + 0xb;
                      goto LAB_180226ca1;
                    }
                  }
                }
                plVar11 = (longlong *)0x0;
                plVar16 = (longlong *)&DAT_00000030;
                plVar22 = (longlong *)&DAT_00000038;
LAB_180226ca1:
                if ((plVar11 != (longlong *)0x0) && ((int)*plVar11 == 4)) {
                  param_3 = (int *)*plVar16;
                  piVar10 = (int *)*plVar22;
                  if (param_3 != piVar10) {
                    do {
                      if (*param_3 == 5) {
                        for (piVar23 = *(int **)(param_3 + 0x12);
                            piVar23 != *(int **)(param_3 + 0x14); piVar23 = piVar23 + 0x20) {
                          if (*(ulonglong *)(piVar23 + 6) < 0x10) {
                            piVar17 = piVar23;
                          }
                          else {
                            piVar17 = *(int **)piVar23;
                          }
                          if (*(longlong *)(piVar23 + 4) == 7) {
                            iVar14 = 0x61765f6d - *piVar17;
                            if ((iVar14 == 0) &&
                               (iVar14 = 0x756c - (uint)*(ushort *)(piVar17 + 1), iVar14 == 0)) {
                              iVar14 = 0x65 - (uint)*(byte *)((longlong)piVar17 + 6);
                            }
                            if (iVar14 == 0) {
                              piVar17 = piVar23 + 8;
                              piVar12 = piVar23 + 0xc;
                              puVar27 = (ulonglong *)(piVar23 + 0x12);
                              piVar23 = piVar23 + 0x10;
                              goto LAB_180226d47;
                            }
                          }
                        }
                        piVar17 = (int *)0x0;
                        piVar12 = (int *)&DAT_00000010;
                        piVar23 = (int *)&DAT_00000020;
                        puVar27 = (ulonglong *)&DAT_00000028;
LAB_180226d47:
                        if ((piVar17 == (int *)0x0) || (*piVar17 != 3)) goto LAB_180226d71;
                        if (0xf < *puVar27) {
                          piVar12 = *(int **)piVar12;
                        }
                        uVar7 = *(undefined8 *)piVar23;
                      }
                      else {
LAB_180226d71:
                        piVar12 = (int *)0x0;
                        uVar7 = 0;
                      }
                      local_188 = (longlong ****)0x0;
                      uStack_180 = 0;
                      local_178 = 0;
                      local_170 = 0;
                      *(undefined8 *)(puVar25 + -8) = 0x180226d99;
                      FUN_1800133a0(&local_188,piVar12,uVar7);
                      pppplVar18 = (longlong ****)&local_188;
                      if (0xf < local_170) {
                        pppplVar18 = local_188;
                      }
                      pppplVar28 = (longlong ****)((longlong)pppplVar18 + local_178);
                      uVar26 = local_178;
                      for (; local_178 = uVar26, pppplVar18 != pppplVar28;
                          pppplVar18 = (longlong ****)((longlong)pppplVar18 + 1)) {
                        if ((byte)(*(char *)pppplVar18 + 0xbfU) < 0x1a) {
                          *(char *)pppplVar18 = *(char *)pppplVar18 + ' ';
                        }
                        uVar26 = local_178;
                      }
                      local_1a8 = (undefined8 ****)0x0;
                      ppplStack_1a0 = (longlong ***)0x0;
                      local_198 = 0;
                      local_190 = 0;
                      pppplVar18 = (longlong ****)&local_188;
                      if (0xf < local_170) {
                        pppplVar18 = local_188;
                      }
                      if (0x7fffffffffffffff < uVar26) {
                    /* WARNING: Subroutine does not return */
                        *(undefined **)(puVar25 + -8) = &UNK_180227478;
                        FUN_180011990();
                      }
                      if (uVar26 < 0x10) {
                        local_190 = 0xf;
                        local_1a8 = (undefined8 ****)*pppplVar18;
                        ppplStack_1a0 = pppplVar18[1];
                        local_198 = uVar26;
                      }
                      else {
                        uVar21 = uVar26 | 0xf;
                        if (uVar21 < 0x8000000000000000) {
                          if (uVar21 < 0x16) {
                            uVar21 = 0x16;
                          }
                        }
                        else {
                          uVar21 = 0x7fffffffffffffff;
                        }
                        *(undefined8 *)(puVar25 + -8) = 0x180226e56;
                        local_1a8 = (undefined8 ****)FUN_18000fb70(uVar21 + 1);
                        *(undefined8 *)(puVar25 + -8) = 0x180226e71;
                        local_198 = uVar26;
                        local_190 = uVar21;
                        FUN_180540530(local_1a8,pppplVar18,uVar26 + 1);
                      }
                      iVar14 = 0;
                      if (local_198 != 0) {
                        uVar26 = 0;
                        while( true ) {
                          ppppuVar19 = &local_1a8;
                          if (0xf < local_190) {
                            ppppuVar19 = local_1a8;
                          }
                          *(undefined8 *)(puVar25 + 0x20) = 1;
                          *(undefined8 *)(puVar25 + -8) = 0x180226ea9;
                          lVar8 = FUN_180068d80(ppppuVar19,local_198,uVar26,&DAT_1806e6f24);
                          if (lVar8 == -1) break;
                          *(undefined8 *)(puVar25 + 0x20) = 1;
                          *(undefined8 *)(puVar25 + -8) = 0x180226ed4;
                          FUN_1800d8750(&local_1a8,lVar8,1,&DAT_1806e08bc);
                          if ((local_198 == 0) || (uVar26 = lVar8 + 1, local_198 - 1 < uVar26))
                          break;
                        }
                      }
                      if (5 < local_198) {
                        uVar26 = 0;
                        while( true ) {
                          ppppuVar19 = &local_1a8;
                          if (0xf < local_190) {
                            ppppuVar19 = local_1a8;
                          }
                          *(undefined8 *)(puVar25 + 0x20) = 6;
                          *(undefined8 *)(puVar25 + -8) = 0x180226f25;
                          lVar8 = FUN_180068d80(ppppuVar19,local_198,uVar26,puVar5);
                          if (lVar8 == -1) break;
                          *(undefined8 *)(puVar25 + 0x20) = 6;
                          *(undefined8 *)(puVar25 + -8) = 0x180226f4c;
                          FUN_1800d8750(&local_1a8,lVar8,6,puVar4);
                          if ((local_198 < 6) || (uVar26 = lVar8 + 6, local_198 - 6 < uVar26))
                          break;
                        }
                      }
                      local_128 = 0;
                      uStack_120 = 0;
                      local_118 = 0;
                      local_110 = 0;
                      *(undefined8 *)(puVar25 + -8) = 0x180226f8e;
                      FUN_1800133a0(&local_128,PTR_DAT_180627f68,7);
                      local_168 = 0;
                      uStack_160 = 0;
                      local_158 = 0;
                      local_150 = 0;
                      *(undefined8 *)(puVar25 + -8) = 0x180226fb4;
                      FUN_1800133a0(&local_168,PTR_s_sounds_vo_agents__180627fb8,0x11);
                      *(undefined8 *)(puVar25 + -8) = 0x180226fc9;
                      uVar7 = FUN_1800667a0(local_68,&local_168,&local_1a8);
                      *(undefined8 *)(puVar25 + -8) = 0x180226fdd;
                      uVar7 = FUN_180066820(local_88,uVar7);
                      *(undefined8 *)(puVar25 + -8) = 0x180226fe9;
                      lVar8 = FUN_1803905b0(local_250[7],uVar7);
                      *(undefined8 *)(puVar25 + -8) = 0x180226ff8;
                      FUN_18000f890(local_88);
                      *(undefined8 *)(puVar25 + -8) = 0x180227005;
                      FUN_18000f890();
                      if (0xf < local_150) {
                        uVar21 = local_150 + 1;
                        uVar26 = local_168;
                        if (uVar21 < 0x1000) {
LAB_18022703c:
                          *(undefined8 *)(puVar25 + -8) = 0x180227041;
                          thunk_FUN_1803d64e0(uVar26,uVar21);
                          goto LAB_180227041;
                        }
                        uVar26 = *(ulonglong *)(local_168 - 8);
                        if ((local_168 - uVar26) - 8 < 0x20) {
                          uVar21 = local_150 + 0x28;
                          goto LAB_18022703c;
                        }
                        pcVar3 = (code *)swi(0x29);
                        (*pcVar3)(5);
                        puVar25 = puVar25 + 8;
LAB_1802272c5:
                        pcVar3 = (code *)swi(0x29);
                        (*pcVar3)(5);
                        puVar25 = puVar25 + 8;
LAB_1802272cc:
                        pcVar3 = (code *)swi(0x29);
                        (*pcVar3)(5);
                        puVar25 = puVar25 + 8;
LAB_1802272d3:
                        pcVar3 = (code *)swi(0x29);
                        (*pcVar3)(5);
                        puVar25 = puVar25 + 8;
                        goto LAB_1802272da;
                      }
LAB_180227041:
                      local_158 = 0;
                      local_150 = 0xf;
                      local_168 = local_168 & 0xffffffffffffff00;
                      if (0xf < local_110) {
                        uVar21 = local_110 + 1;
                        uVar26 = local_128;
                        if (0xfff < uVar21) {
                          uVar26 = *(ulonglong *)(local_128 - 8);
                          if (0x1f < (local_128 - uVar26) - 8) goto LAB_1802272c5;
                          uVar21 = local_110 + 0x28;
                        }
                        *(undefined8 *)(puVar25 + -8) = 0x18022708f;
                        thunk_FUN_1803d64e0(uVar26,uVar21);
                      }
                      if (lVar8 == 0) {
                        if (0xf < local_190) {
                          uVar26 = local_190 + 1;
                          ppppuVar19 = local_1a8;
                          if (0xfff < uVar26) {
                            ppppuVar19 = (undefined8 ****)local_1a8[-1];
                            if (0x1f < (ulonglong)
                                       ((longlong)local_1a8 + (-8 - (longlong)ppppuVar19)))
                            goto LAB_1802272cc;
                            uVar26 = local_190 + 0x28;
                          }
                          *(undefined8 *)(puVar25 + -8) = 0x1802270d3;
                          thunk_FUN_1803d64e0(ppppuVar19,uVar26);
                        }
                        local_198 = 0;
                        local_190 = 0xf;
                        local_1a8 = (undefined8 ****)((ulonglong)local_1a8 & 0xffffffffffffff00);
                        if (0xf < local_170) {
                          uVar26 = local_170 + 1;
                          pppplVar18 = local_188;
                          if (0xfff < uVar26) {
                            pppplVar18 = (longlong ****)local_188[-1];
                            if (0x1f < (ulonglong)
                                       ((longlong)local_188 + (-8 - (longlong)pppplVar18)))
                            goto LAB_1802272d3;
                            uVar26 = local_170 + 0x28;
                          }
                          *(undefined8 *)(puVar25 + -8) = 0x18022711e;
                          thunk_FUN_1803d64e0(pppplVar18,uVar26);
                        }
                        iVar14 = *(int *)(puVar25 + 0x30);
                      }
                      else {
                        *(undefined8 *)(puVar25 + -8) = 0x18022715b;
                        plVar22 = (longlong *)FUN_1802287a0(puVar25 + 0x40,local_1b8,local_108);
                        lVar8 = *plVar22;
                        lVar2 = *(longlong *)(lVar8 + 0x38);
                        uVar7 = *(undefined8 *)(lVar8 + 0x30);
                        *(undefined8 *)(puVar25 + -8) = 0x180227172;
                        lVar13 = FUN_180026970(uVar7,lVar2,&local_188);
                        if (lVar13 == lVar2) {
                          if (lVar2 == *(longlong *)(lVar8 + 0x40)) {
                            *(undefined8 *)(puVar25 + -8) = 0x1802271a0;
                            FUN_180028f00(lVar8 + 0x30,lVar2,&local_188);
                          }
                          else {
                            *(undefined8 *)(puVar25 + -8) = 0x180227189;
                            FUN_180024b50(lVar2,&local_188);
                            *(longlong *)(lVar8 + 0x38) = *(longlong *)(lVar8 + 0x38) + 0x20;
                          }
                        }
                        *(undefined8 *)(puVar25 + -8) = 0x1802271b4;
                        plVar22 = (longlong *)FUN_1802287a0(&DAT_180ca10e0,&local_148,&local_188);
                        lVar8 = *plVar22;
                        lVar2 = *(longlong *)(lVar8 + 0x38);
                        uVar7 = *(undefined8 *)(lVar8 + 0x30);
                        *(undefined8 *)(puVar25 + -8) = 0x1802271ce;
                        lVar13 = FUN_180026970(uVar7,lVar2);
                        if (lVar13 == lVar2) {
                          if (lVar2 == *(longlong *)(lVar8 + 0x40)) {
                            *(undefined8 *)(puVar25 + -8) = 0x180227202;
                            FUN_180028f00(lVar8 + 0x30,lVar2);
                          }
                          else {
                            *(undefined8 *)(puVar25 + -8) = 0x1802271e8;
                            FUN_180024b50(lVar2,local_108);
                            *(longlong *)(lVar8 + 0x38) = *(longlong *)(lVar8 + 0x38) + 0x20;
                          }
                        }
                        if (0xf < local_190) {
                          uVar26 = local_190 + 1;
                          ppppuVar19 = local_1a8;
                          if (0xfff < uVar26) {
                            ppppuVar19 = (undefined8 ****)local_1a8[-1];
                            if (0x1f < (ulonglong)
                                       ((longlong)local_1a8 + (-8 - (longlong)ppppuVar19)))
                            goto LAB_1802272cc;
                            uVar26 = local_190 + 0x28;
                          }
                          *(undefined8 *)(puVar25 + -8) = 0x18022723e;
                          thunk_FUN_1803d64e0(ppppuVar19,uVar26);
                        }
                        iVar14 = *(int *)(puVar25 + 0x30) + 1;
                        *(int *)(puVar25 + 0x30) = iVar14;
                        local_198 = 0;
                        local_190 = 0xf;
                        local_1a8 = (undefined8 ****)((ulonglong)local_1a8 & 0xffffffffffffff00);
                        if (0xf < local_170) {
                          uVar26 = local_170 + 1;
                          pppplVar18 = local_188;
                          if (0xfff < uVar26) {
                            pppplVar18 = (longlong ****)local_188[-1];
                            if (0x1f < (ulonglong)
                                       ((longlong)local_188 + (-8 - (longlong)pppplVar18)))
                            goto LAB_1802272d3;
                            uVar26 = local_170 + 0x28;
                          }
                          *(undefined8 *)(puVar25 + -8) = 0x180227297;
                          thunk_FUN_1803d64e0(pppplVar18,uVar26);
                        }
                      }
                      *(uint *)(puVar25 + 0x34) = *(uint *)(puVar25 + 0x34) | 1;
                      param_3 = param_3 + 0x18;
                    } while (param_3 != piVar10);
                    piVar17 = *(int **)(puVar25 + 0x38);
                    piVar23 = local_210;
                  }
                  param_3 = local_208;
                }
              }
              *(undefined8 *)(puVar25 + -8) = 0x1802272a8;
              FUN_18000f890(local_108);
              piVar17 = piVar17 + 0x18;
              *(int **)(puVar25 + 0x38) = piVar17;
            } while (piVar17 != piVar23);
          }
LAB_1802272da:
          if (*(longlong *)(puVar25 + 0x50) != 0) {
            if (*(ulonglong *)(param_3 + 6) < 0x10) {
              piVar23 = param_3;
            }
            else {
              piVar23 = *(int **)param_3;
            }
            *(undefined8 *)(puVar25 + -8) = 0x180227306;
            uVar29 = FUN_180226610("set %s | %zu concepts | %d lines",piVar23,
                                   *(longlong *)(puVar25 + 0x50),iVar14);
            *(undefined8 *)(puVar25 + -8) = 0x180227312;
            plVar22 = (longlong *)FUN_1802284c0(uVar29,&local_148,param_3);
            lVar8 = *plVar22;
            puVar1 = (undefined4 *)(lVar8 + 0x30);
            if (puVar1 != (undefined4 *)(puVar25 + 0x40)) {
              *(undefined8 *)(puVar25 + -8) = 0x18022732f;
              FUN_180228c30(puVar1);
              *puVar1 = *(undefined4 *)(puVar25 + 0x40);
              uVar7 = *(undefined8 *)(lVar8 + 0x38);
              *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(puVar25 + 0x48);
              *(undefined8 *)(puVar25 + 0x48) = uVar7;
              uVar7 = *(undefined8 *)(lVar8 + 0x40);
              *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(puVar25 + 0x50);
              *(undefined8 *)(puVar25 + 0x50) = uVar7;
              uVar7 = *(undefined8 *)(lVar8 + 0x48);
              *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(puVar25 + 0x58);
              *(undefined8 *)(puVar25 + 0x58) = uVar7;
              uVar7 = *(undefined8 *)(lVar8 + 0x50);
              *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)(puVar25 + 0x60);
              *(undefined8 *)(puVar25 + 0x60) = uVar7;
              uVar7 = *(undefined8 *)(lVar8 + 0x58);
              *(undefined8 *)(lVar8 + 0x58) = *(undefined8 *)(puVar25 + 0x68);
              *(undefined8 *)(puVar25 + 0x68) = uVar7;
              uVar7 = *(undefined8 *)(lVar8 + 0x60);
              *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(puVar25 + 0x70);
              *(undefined8 *)(puVar25 + 0x70) = uVar7;
              uVar7 = *(undefined8 *)(lVar8 + 0x68);
              *(undefined8 *)(lVar8 + 0x68) = *(undefined8 *)(puVar25 + 0x78);
              *(undefined8 *)(puVar25 + 0x78) = uVar7;
            }
            if (DAT_180cecbb8 == DAT_180cecbc0) {
              *(undefined8 *)(puVar25 + -8) = 0x1802273ea;
              FUN_180028f00(&DAT_180cecbb0,DAT_180cecbb8,param_3);
            }
            else {
              *(undefined8 *)(puVar25 + -8) = 0x1802273ce;
              FUN_180024b50(DAT_180cecbb8,param_3);
              DAT_180cecbb8 = DAT_180cecbb8 + 0x20;
            }
          }
          *(undefined8 *)(puVar25 + -8) = 0x1802273f5;
          FUN_1800132b0(puVar25 + 0x58);
          *(undefined8 *)(puVar25 + -8) = 0x1802273ff;
          FUN_180228300(puVar25 + 0x48);
          goto LAB_18022741b;
        }
      }
LAB_180226af3:
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      pcVar15 = "[error] %s has no m_ResponseGroups";
    }
    *(undefined8 *)(puVar25 + -8) = 0x18022741a;
    FUN_180226610(pcVar15,param_2);
LAB_18022741b:
    *(undefined8 *)(puVar25 + -8) = 0x180227427;
    FUN_1801a6920(&plStack_a0);
    *(undefined8 *)(puVar25 + -8) = 0x180227433;
    FUN_1801a69c0(&local_b8);
    *(undefined8 *)(puVar25 + -8) = 0x18022743f;
    FUN_18000f890(&local_d8);
  }
  *(undefined8 *)(puVar25 + -8) = 0x180227449;
  FUN_180081c30(&local_200);
LAB_180227449:
  *(undefined8 *)(puVar25 + -8) = 0x180227458;
  return;
LAB_180226aea:
  plVar22 = plVar22 + 0x10;
  if (plVar22 == local_98) goto LAB_180226af3;
  goto LAB_180226ac0;
}



/* ===== 180227480 FUN_180227480 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180227480(void)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178 [32];
  char local_158;
  undefined8 *local_150;
  undefined8 *puStack_148;
  undefined8 *local_140;
  longlong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulonglong local_118;
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [48];
  longlong *local_98;
  longlong local_90;
  undefined1 local_88 [40];
  undefined *local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  uVar18 = 0;
  local_188 = (char *)((ulonglong)local_188 & 0xffffffff00000000);
  FUN_1800e5e30(local_108);
  FUN_180390a90(local_178);
  if (local_158 != '\0') {
    local_188 = "pak01_dir.vpk";
    local_180 = 0xd;
    uVar7 = FUN_1804e5000();
    FUN_180013d60(&local_130,uVar7,&local_188);
    uVar18 = 3;
    uVar9 = FUN_180014f50(&local_150,local_178,&local_130);
    FUN_18038fa80(local_108,uVar9);
    FUN_1800289e0(&local_150);
    FUN_1800289e0(&local_130);
  }
  if (local_158 != '\0') {
    FUN_1800289e0(local_178);
  }
  puVar14 = PTR_DAT_180627f38;
  if (local_90 == 0) {
    puVar14 = &DAT_1806d2ba0;
    if (local_60 != (undefined *)0x0) {
      puVar14 = local_60;
    }
    FUN_180226610("[error] pak01_dir.vpk not opened (%s)",puVar14);
    puVar16 = auStack_1b8;
  }
  else {
    local_150 = (undefined8 *)0x0;
    puStack_148 = (undefined8 *)0x0;
    local_140 = (undefined8 *)0x0;
    uVar17 = uVar18 | 4;
    local_188 = (char *)(CONCAT44(local_188._4_4_,uVar18) | 4);
    puVar5 = puStack_148;
    for (plVar2 = (longlong *)*local_98; puVar6 = local_150, puStack_148 = puVar5,
        plVar2 != local_98; plVar2 = (longlong *)*plVar2) {
      uVar15 = plVar2[4];
      if (6 < uVar15) {
        if (uVar15 < uVar15 - 5) {
                    /* WARNING: Subroutine does not return */
          FUN_18002a1a0();
        }
        plVar10 = plVar2 + 2;
        uVar3 = plVar2[5];
        if (0xf < uVar3) {
          plVar10 = (longlong *)plVar2[2];
        }
        lVar11 = 0;
        do {
          bVar1 = *(byte *)((longlong)plVar10 + lVar11 + (uVar15 - 5));
          lVar12 = lVar11 + 1;
          if (bVar1 != puVar14[lVar11]) {
            uVar18 = -(uint)(bVar1 < (byte)puVar14[lVar11]) | 1;
            goto LAB_18022760e;
          }
          lVar11 = lVar12;
        } while (lVar12 != 5);
        uVar18 = 0;
LAB_18022760e:
        if (uVar18 == 0) {
          plVar10 = plVar2 + 2;
          if (0xf < uVar3) {
            plVar10 = (longlong *)plVar2[2];
          }
          if (*(char *)((uVar15 - 6) + (longlong)plVar10) == '.') {
            if (uVar3 < 0x10) {
              plVar10 = plVar2 + 2;
            }
            else {
              plVar10 = (longlong *)plVar2[2];
            }
            local_198 = 0xf;
            lVar11 = FUN_180068d80(plVar10,uVar15,0,"scripts/talker/");
            if (lVar11 != -1) {
              if (puStack_148 == local_140) {
                FUN_180028f00(&local_150,puStack_148,plVar2 + 2);
              }
              else {
                FUN_180024b50(puStack_148,plVar2 + 2);
                puStack_148 = puStack_148 + 4;
              }
            }
          }
        }
      }
      puVar5 = puStack_148;
    }
    for (; puVar16 = auStack_1b8, puVar6 != puVar5; puVar6 = puVar6 + 4) {
      puVar13 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar13 = (undefined8 *)*puVar6;
      }
      local_198 = 0xf;
      lVar11 = FUN_180043210(puVar13,puVar6[2],0,"scripts/talker/");
      uVar18 = uVar17;
      if (lVar11 == 0) {
        puVar13 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar13 = (undefined8 *)*puVar6;
        }
        if (((((ulonglong)puVar6[2] < 0x10) ||
             (lVar11 = puVar6[2] + (longlong)puVar13,
             lVar12 = thunk_FUN_1804e6c50((longlong)puVar13 + 0xf,lVar11), lVar12 == lVar11)) ||
            (lVar12 - (longlong)puVar13 == -1)) && (uVar15 = puVar6[2], 0x15 < uVar15)) {
          if (uVar15 < uVar15 - 6) {
                    /* WARNING: Subroutine does not return */
            FUN_18002a1a0();
          }
          puVar13 = puVar6;
          if (0xf < (ulonglong)puVar6[3]) {
            puVar13 = (undefined8 *)*puVar6;
          }
          lVar11 = 0;
          do {
            bVar1 = *(byte *)((longlong)puVar13 + lVar11 + (uVar15 - 6));
            lVar12 = lVar11 + 1;
            if (bVar1 != (&DAT_18070c738)[lVar11]) {
              uVar8 = -(uint)(bVar1 < (byte)(&DAT_18070c738)[lVar11]) | 1;
              goto LAB_18022776e;
            }
            lVar11 = lVar12;
          } while (lVar12 != 6);
          uVar8 = 0;
LAB_18022776e:
          if (uVar8 == 0) {
            local_130 = 0;
            uStack_128 = 0;
            local_120 = 0;
            local_118 = 0;
            lVar11 = 0x15;
            if (uVar15 - 0xf < uVar15 - 0x15) {
              lVar11 = 0xf;
            }
            if ((ulonglong)puVar6[3] < 0x10) {
              puVar13 = puVar6;
            }
            else {
              puVar13 = (undefined8 *)*puVar6;
            }
            FUN_1800133a0(&local_130,(longlong)puVar13 + 0xf,uVar15 - lVar11);
            uVar18 = uVar17 | 8;
            local_188 = (char *)(CONCAT44(local_188._4_4_,uVar17) | 8);
            FUN_180226860(local_108,puVar6);
            if (0xf < local_118) {
              uVar15 = local_118 + 1;
              lVar11 = local_130;
              if (0xfff < uVar15) {
                lVar11 = *(longlong *)(local_130 + -8);
                if (0x1f < (local_130 - lVar11) - 8U) {
                  pcVar4 = (code *)swi(0x29);
                  (*pcVar4)(5);
                  puVar16 = auStack_1b0;
                  break;
                }
                uVar15 = local_118 + 0x28;
              }
              thunk_FUN_1803d64e0(lVar11,uVar15);
            }
          }
        }
      }
      uVar17 = uVar18;
    }
    *(undefined8 *)(puVar16 + -8) = 0x18022782f;
    FUN_1800288b0(puVar16 + 0x68);
    *(undefined8 *)(puVar16 + -8) = 0x18022784f;
    FUN_180225020(DAT_180cecbb0,DAT_180cecbb8,DAT_180cecbb8 - DAT_180cecbb0 >> 5,0);
    *(undefined8 *)(puVar16 + -8) = 0x180227874;
    FUN_180226610("built | %zu sets | %zu events",DAT_180cecbb8 - DAT_180cecbb0 >> 5,DAT_180ca10f0);
  }
  *(undefined8 *)(puVar16 + -8) = 0x18022787e;
  FUN_1800132b0(local_88);
  *(undefined8 *)(puVar16 + -8) = 0x180227887;
  FUN_1800e8810(&local_98);
  *(undefined8 *)(puVar16 + -8) = 0x180227890;
  FUN_1800289e0(local_c8);
  *(undefined8 *)(puVar16 + -8) = 0x180227899;
  FUN_18000f890(local_e8);
  *(undefined8 *)(puVar16 + -8) = 0x1802278a2;
  FUN_1800289e0(local_108);
  *(undefined8 *)(puVar16 + -8) = 0x1802278ae;
  return;
}



/* ===== 1802278d0 FUN_1802278d0 ===== */

undefined1 FUN_1802278d0(longlong param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  code *pcVar3;
  
  lVar2 = FUN_18000f3a0(param_1 + 0x38);
  if ((lVar2 == 0) || (pcVar3 = (code *)FUN_18000f3a0(lVar2 + 8), pcVar3 == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*pcVar3)(param_1 + 0x38,param_2);
  *param_3 = uVar1;
  return 1;
}



/* ===== 180227930 FUN_180227930 ===== */

undefined8 FUN_180227930(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_18000f3a0(param_1 + 0x38);
  if ((lVar1 == 0) || (pcVar2 = (code *)FUN_18000f3a0(lVar1 + 0x10), pcVar2 == (code *)0x0)) {
    return 0;
  }
  lVar1 = (*pcVar2)(param_1 + 0x38,param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  while ((uVar3 + 1 < 0x100 && (*(char *)(uVar3 + lVar1) != '\0'))) {
    *(char *)(uVar3 + param_3) = *(char *)(uVar3 + lVar1);
    uVar3 = uVar3 + 1;
  }
  *(undefined1 *)(uVar3 + param_3) = 0;
  return CONCAT71((int7)(uVar3 >> 8),uVar3 != 0);
}



/* ===== 1802279d0 FUN_1802279d0 ===== */

undefined4 FUN_1802279d0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  
  lVar2 = FUN_18000f3a0(param_1 + 8);
  if (lVar2 != 0) {
    pcVar3 = (code *)FUN_18000f3a0(lVar2);
    if (pcVar3 != (code *)0x0) {
      uVar1 = (*pcVar3)(param_1 + 8,param_2);
      *param_3 = uVar1;
      return 1;
    }
  }
  return 0;
}



/* ===== 180227a30 FUN_180227a30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180227a30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  char ****ppppcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  char ****ppppcVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  undefined1 *puVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  char ****ppppcVar21;
  ulonglong uVar22;
  undefined8 unaff_R12;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [32];
  undefined8 *local_90 [5];
  char ****local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_b8;
  if ((ulonglong)param_2[3] < 0x10) {
    puVar6 = param_2;
  }
  else {
    puVar6 = (undefined8 *)*param_2;
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_90[0] = param_1;
  FUN_1800133a0(&local_68,puVar6,param_2[2]);
  ppppcVar11 = (char ****)&local_68;
  if (0xf < local_50) {
    ppppcVar11 = local_68;
  }
  ppppcVar21 = (char ****)((longlong)ppppcVar11 + local_58);
  ppppcVar4 = local_68;
  uVar13 = local_50;
  for (; local_68 = ppppcVar4, local_50 = uVar13, ppppcVar11 != ppppcVar21;
      ppppcVar11 = (char ****)((longlong)ppppcVar11 + 1)) {
    if ((byte)(*(char *)ppppcVar11 + 0xbfU) < 0x1a) {
      *(char *)ppppcVar11 = *(char *)ppppcVar11 + ' ';
    }
    ppppcVar4 = local_68;
    uVar13 = local_50;
  }
  uVar22 = 0xcbf29ce484222325;
  uVar12 = 0;
  ppppcVar11 = (char ****)&local_68;
  if (0xf < uVar13) {
    ppppcVar11 = ppppcVar4;
  }
  if (local_58 != 0) {
    do {
      pbVar1 = (byte *)((longlong)ppppcVar11 + uVar12);
      uVar12 = uVar12 + 1;
      uVar22 = (uVar22 ^ *pbVar1) * 0x100000001b3;
    } while (uVar12 < local_58);
  }
  lVar7 = FUN_1800268a0(&DAT_180ca10e0,local_90,&local_68,uVar22);
  lVar19 = DAT_180ca10e8;
  if (*(longlong *)(lVar7 + 8) != 0) {
    lVar19 = *(longlong *)(lVar7 + 8);
  }
  if (uVar13 < 0x10) {
LAB_180227b89:
    puVar17 = auStack_b8;
    puVar5 = auStack_b8;
    if (lVar19 != DAT_180ca10e8) goto LAB_180227baf;
  }
  else {
    uVar12 = uVar13 + 1;
    ppppcVar11 = ppppcVar4;
    if (uVar12 < 0x1000) {
LAB_180227b7a:
      thunk_FUN_1803d64e0(ppppcVar11,uVar12);
      goto LAB_180227b89;
    }
    ppppcVar11 = (char ****)ppppcVar4[-1];
    if ((char *)((longlong)ppppcVar4 + (-8 - (longlong)ppppcVar11)) < (char *)0x20) {
      uVar12 = uVar13 + 0x28;
      goto LAB_180227b7a;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar5 = auStack_b0;
LAB_180227baf:
    puVar17 = puVar5;
    if ((ulonglong)param_3[3] < 0x10) {
      puVar6 = param_3;
    }
    else {
      puVar6 = (undefined8 *)*param_3;
    }
    uVar13 = 0;
    uVar12 = 0xcbf29ce484222325;
    if (param_3[2] != 0) {
      do {
        pbVar1 = (byte *)((longlong)puVar6 + uVar13);
        uVar13 = uVar13 + 1;
        uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
      } while (uVar13 < (ulonglong)param_3[2]);
    }
    *(undefined8 *)(puVar17 + -8) = 0x180227c00;
    lVar7 = FUN_180228a50(uVar13,puVar17 + 0x40,param_3,uVar12);
    lVar7 = *(longlong *)(lVar7 + 8);
    if ((lVar7 != 0) && (lVar7 != DAT_180cecb78)) {
      lVar16 = *(longlong *)(lVar19 + 0x30);
      lVar19 = *(longlong *)(lVar19 + 0x38);
      *(undefined8 *)(puVar17 + 200) = unaff_R12;
      if (lVar16 != lVar19) {
        lVar2 = *(longlong *)(lVar7 + 0x38);
        do {
          uVar13 = 0;
          if (*(ulonglong *)(lVar16 + 0x10) != 0) {
            do {
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(ulonglong *)(lVar16 + 0x10));
          }
          *(undefined8 *)(puVar17 + -8) = 0x180227c74;
          lVar8 = FUN_1800268a0(lVar7 + 0x30,puVar17 + 0x28,lVar16);
          lVar20 = *(longlong *)(lVar8 + 8);
          if (*(longlong *)(lVar8 + 8) == 0) {
            lVar20 = lVar2;
          }
          if ((lVar20 != lVar2) && (*(longlong *)(lVar20 + 0x30) != *(longlong *)(lVar20 + 0x38))) {
            uVar13 = *(longlong *)(lVar20 + 0x38) - *(longlong *)(lVar20 + 0x30) >> 5;
            iVar18 = (int)uVar13 + -1;
            *(undefined8 *)(puVar17 + -8) = 0x180227cbb;
            FUN_180273880();
            if (DAT_180cfb2b0 == (code *)0x0) {
              if (iVar18 < 1) {
                iVar18 = 0;
              }
              else {
                uVar10 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
                uVar10 = uVar10 >> 0x11 ^ uVar10;
                DAT_1809f3584 = uVar10 << 5 ^ uVar10;
                iVar18 = (int)((ulonglong)DAT_1809f3584 % (uVar13 & 0xffffffff));
              }
            }
            else {
              *(undefined8 *)(puVar17 + -8) = 0x180227ccd;
              iVar18 = (*DAT_180cfb2b0)(0,iVar18);
            }
            lVar19 = *(longlong *)(lVar20 + 0x30);
            lVar7 = *(longlong *)(lVar20 + 0x38);
            *(int *)(puVar17 + 0x24) = iVar18;
            iVar15 = (int)(lVar7 - lVar19 >> 5) + -1;
            *(undefined4 *)(puVar17 + 0x20) = 0;
            *(int *)(puVar17 + 0x28) = iVar15;
            piVar14 = (int *)(puVar17 + 0x20);
            if (-1 < iVar18) {
              piVar14 = (int *)(puVar17 + 0x24);
            }
            piVar9 = (int *)(puVar17 + 0x28);
            if (iVar18 <= iVar15) {
              piVar9 = piVar14;
            }
            iVar18 = *piVar9;
            *(undefined8 *)(puVar17 + -8) = 0x180227d54;
            FUN_180024b50(param_1,(longlong)iVar18 * 0x20 + lVar19);
            goto LAB_180227d76;
          }
          lVar16 = lVar16 + 0x20;
        } while (lVar16 != lVar19);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      goto LAB_180227d76;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
LAB_180227d76:
  *(undefined8 *)(puVar17 + -8) = 0x180227d86;
  return param_1;
}



/* ===== 180227da0 FUN_180227da0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180227f26) */

void FUN_180227da0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  HMODULE hModule;
  FARPROC pFVar9;
  INT_PTR IVar10;
  size_t sVar11;
  char *pcVar12;
  size_t _Size;
  int *piVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *******pppppppuVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [24];
  uint local_1d8;
  byte local_1c8 [8];
  uint local_1c0;
  undefined4 uStack_1bc;
  undefined8 *******local_1b8;
  undefined8 uStack_1b0;
  size_t local_1a8;
  ulonglong local_1a0;
  undefined8 *******local_198 [2];
  longlong local_188;
  ulonglong local_180;
  ulonglong local_178 [4];
  char local_158 [256];
  ulonglong local_58;
  
  if (param_1 == 0) {
    return;
  }
  local_58 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  puVar17 = auStack_1f8;
  if ((DAT_180ccf6d4 == '\0') || (puVar17 = auStack_1f8, DAT_180cecb80 == 0)) goto LAB_1802282d1;
  uVar4 = FUN_180011200(param_1 + 0x60);
  puVar17 = auStack_1f8;
  if (uVar4 >> 1 == 0x7fffffff) goto LAB_1802282d1;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_1c0);
    DAT_181108a00 = CONCAT44(uStack_1bc,local_1c0);
    DAT_1811089f8 = FUN_1803a0c50(&local_1c0);
    DAT_180cd1304 = '\x01';
  }
  lVar1 = DAT_1811089f8;
  puVar17 = auStack_1f8;
  if (DAT_1811089f8 == 0) goto LAB_1802282d1;
  lVar7 = FUN_18000f3a0(DAT_1809619d0);
  puVar17 = auStack_1f8;
  if (lVar7 == 0) goto LAB_1802282d1;
  lVar7 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                        lVar7 + (ulonglong)(((uVar4 & 0x7fff) >> 9) * DAT_180961944));
  puVar17 = auStack_1f8;
  if (0xfffffffffffefffe < lVar7 - 0x10000U) goto LAB_1802282d1;
  lVar7 = FUN_18000f3a0((ulonglong)((uVar4 & 0x1ff) * DAT_180961948) + lVar7);
  puVar17 = auStack_1f8;
  if ((0xfffffffffffefffe < lVar7 - 0x10000U) || (puVar17 = auStack_1f8, lVar7 != lVar1))
  goto LAB_1802282d1;
  if ((DAT_180921498 == '\0') || (DAT_180ca09f4 == 0)) {
LAB_180227fbc:
    uStack_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0xf;
    local_1b8 = (undefined8 *******)0x0;
  }
  else {
    cVar3 = FUN_180011220(lVar1 + (ulonglong)DAT_180ca09f4);
    if (cVar3 == '\x02') {
      iVar6 = 1;
      uVar5 = DAT_1809214b0;
    }
    else {
      if (cVar3 != '\x03') goto LAB_180227fbc;
      iVar6 = 0;
      uVar5 = DAT_1809214ac;
    }
    piVar8 = (int *)FUN_18027fb40(uVar5);
    if (piVar8 == (int *)0x0) goto LAB_180227fbc;
    if (0 < *piVar8) {
      piVar13 = &DAT_180931b4c;
      do {
        if ((*piVar13 == *piVar8) && (piVar13[1] == iVar6)) {
          iVar6 = piVar13[0x69];
          if ((0 < iVar6) &&
             ((ulonglong)(longlong)iVar6 <= (ulonglong)(DAT_180cecbb8 - DAT_180cecbb0 >> 5))) {
            FUN_180024b50(&local_1b8,DAT_180cecbb0 + -0x20 + (longlong)iVar6 * 0x20);
            goto LAB_180227fd7;
          }
          break;
        }
        piVar13 = piVar13 + 0xab;
      } while (piVar13 != &DAT_18093c64c);
    }
    FUN_180024b50(&local_1b8,piVar8 + 0x2a);
  }
LAB_180227fd7:
  cVar3 = DAT_180ccf6d5;
  puVar17 = auStack_1f8;
  if (local_1a8 != 0) {
    if (DAT_180cecb68 == 0) {
      LOCK();
      DAT_180ccf6d5 = '\x01';
      UNLOCK();
      puVar17 = auStack_1f8;
      if (cVar3 == '\0') {
        hModule = GetModuleHandleA("soundsystem.dll");
        if ((hModule == (HMODULE)0x0) ||
           (pFVar9 = GetProcAddress(hModule,"CreateInterface"), pFVar9 == (FARPROC)0x0)) {
          IVar10 = 0;
        }
        else {
          IVar10 = (*pFVar9)("SoundOpSystem001",0);
        }
        FUN_180226610("SoundOpSystem001 %p",IVar10);
        puVar17 = auStack_1f8;
        DAT_180cecb68 = IVar10;
        if (IVar10 != 0) goto LAB_18022805b;
      }
    }
    else {
LAB_18022805b:
      lVar1 = DAT_180cecb68;
      uVar5 = FUN_180011200(param_1 + 0x54);
      local_1c8[0] = 0;
      cVar3 = FUN_1802278d0(lVar1,uVar5,local_1c8);
      puVar17 = auStack_1f8;
      if ((cVar3 != '\0') && (puVar17 = auStack_1f8, local_1c8[0] != 0)) {
        FUN_180540170(local_158,0,0x100);
        cVar3 = FUN_180227930(lVar1,uVar5,local_158);
        puVar17 = auStack_1f8;
        if (cVar3 != '\0') {
          sVar11 = strlen(local_158);
          if (((sVar11 == 0) ||
              (pcVar12 = (char *)thunk_FUN_1804e6c50(local_158,local_158 + sVar11,0x2e),
              pcVar12 == local_158 + sVar11)) ||
             (_Size = (longlong)pcVar12 - (longlong)local_158, _Size == 0xffffffffffffffff)) {
            pcVar12 = (char *)0x0;
            _Size = 0;
          }
          else {
            pcVar12 = local_158;
            if (sVar11 < _Size) {
              _Size = sVar11;
            }
          }
          puVar17 = auStack_1f8;
          pppppppuVar16 = &local_1b8;
          if (0xf < local_1a0) {
            pppppppuVar16 = local_1b8;
          }
          if (_Size == local_1a8) {
            if (_Size != 0) {
              iVar6 = memcmp(pcVar12,pppppppuVar16,_Size);
              puVar17 = auStack_1f8;
              if (iVar6 != 0) goto LAB_180228133;
            }
          }
          else {
LAB_180228133:
            local_178[0] = 0;
            local_178[1] = 0;
            local_178[2] = 0;
            local_178[3] = 0;
            FUN_1800133a0(local_178,local_158,sVar11);
            FUN_180227a30(local_198,local_178,&local_1b8);
            if (local_178[3] < 0x10) {
LAB_1802281a2:
              puVar17 = auStack_1f8;
              local_178[2] = 0;
              local_178[3] = 0xf;
              local_178[0] = local_178[0] & 0xffffffffffffff00;
              if (local_188 != 0) {
                local_1c0 = 0;
                pppppppuVar16 = local_198;
                if (0xf < local_180) {
                  pppppppuVar16 = local_198[0];
                }
                cVar3 = FUN_1802279d0(lVar1,pppppppuVar16,&local_1c0);
                uVar4 = local_1c0;
                puVar17 = auStack_1f8;
                if (cVar3 != '\0') {
                  local_1c8[0] = 0;
                  sVar11 = (size_t)local_1c0;
                  cVar3 = FUN_1802278d0(lVar1,sVar11,local_1c8);
                  puVar17 = auStack_1f8;
                  if ((cVar3 == '\0') || (puVar17 = auStack_1f8, local_1c8[0] == 0))
                  goto LAB_180228268;
                  FUN_180013280(param_1 + 0x54,&local_1c0);
                  local_1c8[0] = FUN_180011220(param_1 + 0x40);
                  local_1c8[0] = local_1c8[0] | 4;
                  FUN_1800233d0(param_1 + 0x40,local_1c8);
                  pppppppuVar16 = local_198;
                  if (0xf < local_180) {
                    pppppppuVar16 = local_198[0];
                  }
                  local_1d8 = uVar4;
                  FUN_180226610("%s -> %s | %08x -> %08x",local_158,pppppppuVar16,uVar5);
                  puVar17 = auStack_1f8;
                }
              }
            }
            else {
              uVar15 = local_178[3] + 1;
              uVar14 = local_178[0];
              if (uVar15 < 0x1000) {
LAB_18022819d:
                thunk_FUN_1803d64e0(uVar14,uVar15);
                goto LAB_1802281a2;
              }
              uVar14 = *(ulonglong *)(local_178[0] - 8);
              if ((local_178[0] - uVar14) - 8 < 0x20) {
                uVar15 = local_178[3] + 0x28;
                goto LAB_18022819d;
              }
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              puVar17 = auStack_1f0;
LAB_180228268:
              puVar18 = puVar17 + 0x60;
              if (0xf < *(ulonglong *)(puVar17 + 0x78)) {
                puVar18 = *(undefined1 **)(puVar17 + 0x60);
              }
              *(undefined8 *)(puVar17 + -8) = 0x18022828c;
              FUN_180226610("[error] %s -> %s | hash %08x not valid",local_158,puVar18,
                            sVar11 & 0xffffffff);
            }
            *(undefined8 *)(puVar17 + -8) = 0x180228297;
            FUN_18000f890(puVar17 + 0x60);
          }
        }
      }
    }
  }
  uVar14 = *(ulonglong *)(puVar17 + 0x58);
  if (0xf < uVar14) {
    uVar15 = uVar14 + 1;
    lVar1 = *(longlong *)(puVar17 + 0x40);
    lVar7 = lVar1;
    if (0xfff < uVar15) {
      lVar7 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar7) - 8U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar15 = uVar14 + 0x28;
    }
    *(undefined8 *)(puVar17 + -8) = 0x1802282d1;
    thunk_FUN_1803d64e0(lVar7,uVar15);
  }
LAB_1802282d1:
  *(undefined8 *)(puVar17 + -8) = 0x1802282e0;
  return;
}



/* ===== 180228300 FUN_180228300 ===== */

void FUN_180228300(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1800288b0(puVar1 + 6);
    FUN_18000f890(puVar1 + 2);
    thunk_FUN_1803d64e0(puVar1,0x48);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x48);
  return;
}



/* ===== 180228380 FUN_180228380 ===== */

void FUN_180228380(undefined8 *param_1)

{
  FUN_180228b30(param_1,*param_1);
  thunk_FUN_1803d64e0(*param_1,0x70);
  return;
}



/* ===== 1802283b0 FUN_1802283b0 ===== */

undefined4 * FUN_1802283b0(undefined4 *param_1)

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
  lVar4 = FUN_1804ecaa0(0x48);
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
  if (*(longlong *)(param_1 + 10) - lVar4 == 0) goto LAB_180228475;
  if ((ulonglong)((*(longlong *)(param_1 + 10) - lVar4 >> 3) * 8) < 0x1000) {
LAB_18022846d:
    lVar6 = lVar4;
    puVar8 = puVar7;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar6) - 8U) {
      pcVar3 = (code *)swi(0x29);
      lVar4 = (*pcVar3)(5);
      puVar7 = auStack_20;
      goto LAB_18022846d;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x180228475;
  thunk_FUN_1803d64e0(lVar6);
LAB_180228475:
  *(undefined8 **)(param_1 + 6) = puVar5;
  puVar1 = puVar5 + 0x10;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *(undefined8 **)(param_1 + 10) = puVar1;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    *puVar5 = uVar2;
  }
  return param_1;
}



/* ===== 1802284c0 FUN_1802284c0 ===== */

longlong * FUN_1802284c0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

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
  undefined8 *puVar9;
  float fVar10;
  undefined8 *puVar11;
  undefined8 *local_58;
  longlong local_50;
  
  puVar9 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar9 = (undefined8 *)*param_3;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar3 = 0;
  if (param_3[2] != 0) {
    do {
      uVar8 = (uVar8 ^ *(byte *)(uVar3 + (longlong)puVar9)) * 0x100000001b3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)param_3[2]);
  }
  FUN_180228a50(uVar3,&local_58,param_3,uVar8);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180cecb80 == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar11 = &DAT_180cecb78;
  puVar2 = (undefined8 *)FUN_1804ecaa0(0x70);
  puVar9 = puVar2 + 2;
  puVar6 = puVar2;
  FUN_180024b50(puVar9,param_3);
  FUN_1802283b0(puVar2 + 6);
  uVar3 = DAT_180cecba8;
  if (DAT_180cecb70 < (float)(DAT_180cecb80 + 1) / (float)DAT_180cecba8) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180cecb80 + 1) / DAT_180cecb70,DAT_180cecb80,
                                  (float)DAT_180cecba8,DAT_180cecb70,puVar11,puVar6);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar7 = uVar3;
    if ((uVar3 < uVar5) && ((0x1ff < uVar3 || (uVar7 = uVar3 * 8, uVar3 * 8 < uVar5)))) {
      uVar7 = uVar5;
    }
    FUN_180228f80(uVar5,uVar7);
    puVar6 = *(undefined8 **)(DAT_180cecb88 + 8 + (DAT_180cecba0 & uVar8) * 0x10);
    local_58 = DAT_180cecb78;
    if (puVar6 != DAT_180cecb78) {
      puVar11 = *(undefined8 **)(DAT_180cecb88 + (DAT_180cecba0 & uVar8) * 0x10);
      uVar3 = puVar2[5];
      _Size = puVar2[4];
      local_58 = puVar6;
      while( true ) {
        puVar6 = local_58 + 2;
        if (0xf < (ulonglong)local_58[5]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        if (uVar3 < 0x10) {
          _Buf1 = puVar9;
        }
        else {
          _Buf1 = (undefined8 *)*puVar9;
        }
        if ((_Size == local_58[4]) &&
           ((_Size == 0 || (iVar1 = memcmp(_Buf1,puVar6,_Size), iVar1 == 0)))) break;
        if (local_58 == puVar11) goto LAB_18022871b;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_18022871b:
  puVar9 = (undefined8 *)local_58[1];
  DAT_180cecb80 = DAT_180cecb80 + 1;
  *puVar2 = local_58;
  puVar2[1] = puVar9;
  *puVar9 = puVar2;
  local_58[1] = puVar2;
  lVar4 = DAT_180cecb88;
  uVar8 = DAT_180cecba0 & uVar8;
  puVar6 = *(undefined8 **)(DAT_180cecb88 + uVar8 * 0x10);
  if (puVar6 == DAT_180cecb78) {
    *(undefined8 **)(DAT_180cecb88 + uVar8 * 0x10) = puVar2;
  }
  else {
    if (puVar6 == local_58) {
      *(undefined8 **)(DAT_180cecb88 + uVar8 * 0x10) = puVar2;
      goto LAB_180228775;
    }
    if (*(undefined8 **)(DAT_180cecb88 + 8 + uVar8 * 0x10) != puVar9) goto LAB_180228775;
  }
  *(undefined8 **)(lVar4 + 8 + uVar8 * 0x10) = puVar2;
LAB_180228775:
  *param_2 = (longlong)puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1802287a0 FUN_1802287a0 ===== */

longlong * FUN_1802287a0(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  undefined8 *local_58;
  longlong local_50;
  
  puVar3 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar3 = (undefined8 *)*param_3;
  }
  uVar9 = 0xcbf29ce484222325;
  uVar4 = 0;
  if (param_3[2] != 0) {
    do {
      uVar9 = (uVar9 ^ *(byte *)(uVar4 + (longlong)puVar3)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)param_3[2]);
  }
  FUN_1800268a0(param_1,&local_58,param_3,uVar9);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x48);
  FUN_180024b50(puVar3 + 2,param_3);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  uVar4 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar4) {
    fVar10 = (float)FUN_18053ef70((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar5 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar5)) {
      uVar6 = (longlong)fVar10 + lVar5;
    }
    uVar7 = uVar4;
    if ((uVar4 < uVar6) && ((0x1ff < uVar4 || (uVar7 = uVar4 * 8, uVar4 * 8 < uVar6)))) {
      uVar7 = uVar6;
    }
    FUN_180029ef0(param_1,uVar7);
    puVar8 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_58 = *(undefined8 **)(param_1 + 2);
    if (puVar8 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      _Size = puVar3[4];
      while( true ) {
        _Buf2 = puVar8 + 2;
        if (0xf < (ulonglong)puVar8[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        if ((ulonglong)puVar3[5] < 0x10) {
          _Buf1 = puVar3 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar3[2];
        }
        if ((_Size == puVar8[4]) &&
           ((_Size == 0 || (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 == 0)))) {
          local_58 = (undefined8 *)*puVar8;
          goto LAB_1802289d8;
        }
        if (puVar8 == puVar1) break;
        puVar8 = (undefined8 *)puVar8[1];
      }
      local_58 = puVar8;
    }
  }
LAB_1802289d8:
  puVar8 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar3 = local_58;
  puVar3[1] = puVar8;
  *puVar8 = puVar3;
  local_58[1] = puVar3;
  lVar5 = *(longlong *)(param_1 + 6);
  uVar9 = *(ulonglong *)(param_1 + 0xc) & uVar9;
  puVar1 = *(undefined8 **)(lVar5 + uVar9 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar5 + uVar9 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == local_58) {
      *(undefined8 **)(lVar5 + uVar9 * 0x10) = puVar3;
      goto LAB_180228a23;
    }
    if (*(undefined8 **)(lVar5 + 8 + uVar9 * 0x10) != puVar8) goto LAB_180228a23;
  }
  *(undefined8 **)(lVar5 + 8 + uVar9 * 0x10) = puVar3;
LAB_180228a23:
  *param_2 = (longlong)puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180228a50 FUN_180228a50 ===== */

undefined8 *
FUN_180228a50(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(DAT_180cecb88 + 8 + (DAT_180cecba0 & param_4) * 0x10);
  if (puVar4 == DAT_180cecb78) {
    *param_2 = DAT_180cecb78;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = *(undefined8 **)(DAT_180cecb88 + (DAT_180cecba0 & param_4) * 0x10);
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



/* ===== 180228b30 FUN_180228b30 ===== */

void FUN_180228b30(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_1800132b0(puVar2 + 9);
    FUN_180228300(puVar2 + 7);
    FUN_18000f890(puVar2 + 2);
    thunk_FUN_1803d64e0(puVar2,0x70);
    puVar2 = puVar1;
  }
  return;
}



