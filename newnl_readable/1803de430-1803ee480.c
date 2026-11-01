/* ===== 1803de430 FUN_1803de430 ===== */

void FUN_1803de430(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  longlong lVar14;
  undefined1 uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  
  lVar14 = DAT_180ca0a50;
  bVar12 = false;
  lVar1 = DAT_180ca0a50 + 0x1508;
  fVar2 = *(float *)(DAT_180ca0a50 + 0xd04);
  if (*(float *)(DAT_180ca0a50 + 0xd04) <= *(float *)(DAT_180ca0a50 + 0xd08)) {
    fVar2 = *(float *)(DAT_180ca0a50 + 0xd08);
  }
  lVar17 = DAT_180ca0a50 + 0x1500;
  if (fVar2 <= *(float *)(DAT_180ca0a50 + 0xcb4)) {
    fVar2 = *(float *)(DAT_180ca0a50 + 0xcb4);
  }
  *(float *)(DAT_180ca0a50 + 0x14ec) = fVar2;
  FUN_1803e15d0(fVar2,param_2,lVar17,lVar1);
  lVar1 = *(longlong *)(lVar14 + 0x1500);
  *(longlong *)(lVar14 + 0x1510) = lVar1;
  iVar9 = *(int *)(lVar14 + 0x2020);
  uVar18 = iVar9 - 1;
  if (-1 < (int)uVar18) {
    do {
      lVar17 = *(longlong *)(*(longlong *)(lVar14 + 0x2028) + 8 + (ulonglong)uVar18 * 0x58);
      if ((lVar17 != 0) && ((*(uint *)(lVar17 + 0x14) & 0x8000000) != 0)) {
        if ((lVar1 == 0) ||
           (lVar19 = *(longlong *)(lVar1 + 0x3c0), *(longlong *)(lVar19 + 0x3c0) == lVar17))
        goto LAB_1803de4d2;
        goto LAB_1803de518;
      }
      uVar18 = uVar18 - 1;
    } while (-1 < (int)uVar18);
  }
  lVar17 = 0;
  goto LAB_1803de4d2;
  while (lVar19 = *(longlong *)(lVar19 + 0x3b8), lVar19 != 0) {
LAB_1803de518:
    if (lVar19 == lVar17) goto LAB_1803de4d2;
  }
  bVar12 = true;
LAB_1803de4d2:
  uVar18 = *(uint *)(lVar14 + 0x28);
  bVar20 = true;
  if ((uVar18 & 0x10) != 0) {
    bVar12 = true;
  }
  if (*(char *)(lVar14 + 0xb40) != '\0') {
    if ((lVar1 == 0) && (iVar9 < 1)) {
      *(undefined1 *)(lVar14 + 0xb90) = 0;
LAB_1803de53a:
      if (lVar17 != 0) goto LAB_1803de543;
      uVar15 = 0;
    }
    else {
      *(undefined1 *)(lVar14 + 0xb90) = 1;
      if (lVar1 == 0) goto LAB_1803de53a;
LAB_1803de543:
      uVar15 = 1;
    }
    *(undefined1 *)(lVar14 + 0xb95) = uVar15;
  }
  cVar4 = *(char *)(lVar14 + 0x118);
  lVar19 = -1;
  if ((cVar4 != '\0') || (iVar16 = -1, *(char *)(lVar14 + 0xb5e) != '\0')) {
    iVar16 = 0;
  }
  if (*(char *)(lVar14 + 0xb41) != '\0') {
    if ((lVar1 == 0) && (iVar9 < 1)) {
      *(undefined1 *)(lVar14 + 0xb91) = 0;
LAB_1803de597:
      if (lVar17 != 0) goto LAB_1803de5a0;
      uVar15 = 0;
    }
    else {
      *(undefined1 *)(lVar14 + 0xb91) = 1;
      if (lVar1 == 0) goto LAB_1803de597;
LAB_1803de5a0:
      uVar15 = 1;
    }
    *(undefined1 *)(lVar14 + 0xb96) = uVar15;
  }
  cVar5 = *(char *)(lVar14 + 0x119);
  if (((cVar5 != '\0') || (*(char *)(lVar14 + 0xb5f) != '\0')) &&
     ((iVar16 == -1 ||
      (dVar3 = *(double *)(lVar14 + 0xb18 + (longlong)iVar16 * 8),
      *(double *)(lVar14 + 0xb20) <= dVar3 && dVar3 != *(double *)(lVar14 + 0xb20))))) {
    iVar16 = 1;
  }
  if (*(char *)(lVar14 + 0xb42) != '\0') {
    if ((lVar1 == 0) && (iVar9 < 1)) {
      *(undefined1 *)(lVar14 + 0xb92) = 0;
LAB_1803de604:
      if (lVar17 != 0) goto LAB_1803de60d;
      uVar15 = 0;
    }
    else {
      *(undefined1 *)(lVar14 + 0xb92) = 1;
      if (lVar1 == 0) goto LAB_1803de604;
LAB_1803de60d:
      uVar15 = 1;
    }
    *(undefined1 *)(lVar14 + 0xb97) = uVar15;
  }
  cVar6 = *(char *)(lVar14 + 0x11a);
  if (((cVar6 != '\0') || (*(char *)(lVar14 + 0xb60) != '\0')) &&
     ((iVar16 == -1 ||
      (dVar3 = *(double *)(lVar14 + 0xb18 + (longlong)iVar16 * 8),
      *(double *)(lVar14 + 0xb28) <= dVar3 && dVar3 != *(double *)(lVar14 + 0xb28))))) {
    iVar16 = 2;
  }
  if (*(char *)(lVar14 + 0xb43) != '\0') {
    if ((lVar1 == 0) && (iVar9 < 1)) {
      *(undefined1 *)(lVar14 + 0xb93) = 0;
LAB_1803de674:
      if (lVar17 != 0) goto LAB_1803de67d;
      uVar15 = 0;
    }
    else {
      *(undefined1 *)(lVar14 + 0xb93) = 1;
      if (lVar1 == 0) goto LAB_1803de674;
LAB_1803de67d:
      uVar15 = 1;
    }
    *(undefined1 *)(lVar14 + 0xb98) = uVar15;
  }
  cVar7 = *(char *)(lVar14 + 0x11b);
  if (((cVar7 != '\0') || (*(char *)(lVar14 + 0xb61) != '\0')) &&
     ((iVar16 == -1 ||
      (dVar3 = *(double *)(lVar14 + 0xb18 + (longlong)iVar16 * 8),
      *(double *)(lVar14 + 0xb30) <= dVar3 && dVar3 != *(double *)(lVar14 + 0xb30))))) {
    iVar16 = 3;
  }
  if (*(char *)(lVar14 + 0xb44) != '\0') {
    if ((lVar1 == 0) && (iVar9 < 1)) {
      *(undefined1 *)(lVar14 + 0xb94) = 0;
LAB_1803de6e5:
      if (lVar17 != 0) goto LAB_1803de6ee;
      uVar15 = 0;
    }
    else {
      *(undefined1 *)(lVar14 + 0xb94) = 1;
      if (lVar1 == 0) goto LAB_1803de6e5;
LAB_1803de6ee:
      uVar15 = 1;
    }
    *(undefined1 *)(lVar14 + 0xb99) = uVar15;
  }
  cVar8 = *(char *)(lVar14 + 0x11c);
  if ((cVar8 == '\0') && (*(char *)(lVar14 + 0xb62) == '\0')) {
    if (iVar16 != -1) goto LAB_1803de74c;
  }
  else {
    if ((iVar16 == -1) ||
       (dVar3 = *(double *)(lVar14 + 0xb18 + (longlong)iVar16 * 8),
       *(double *)(lVar14 + 0xb38) <= dVar3 && dVar3 != *(double *)(lVar14 + 0xb38))) {
      iVar16 = 4;
    }
LAB_1803de74c:
    lVar19 = (longlong)iVar16;
    if (*(char *)(lVar19 + 0xb90 + lVar14) == '\0') {
      bVar10 = false;
      goto LAB_1803de717;
    }
  }
  bVar10 = true;
LAB_1803de717:
  if ((iVar16 == -1) || (*(char *)(lVar19 + 0xb95 + lVar14) != '\0')) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if ((*(char *)(lVar14 + 0x2290) == '\0') || ((*(byte *)(lVar14 + 0x2294) & 0x10) == 0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if ((!bVar10) && (!bVar11)) {
    bVar12 = true;
  }
  if (bVar12) {
    *(undefined8 *)(lVar14 + 0x1508) = 0;
    *(undefined8 *)(lVar14 + 0x1500) = 0;
  }
  iVar16 = *(int *)(lVar14 + 0x2aec);
  if (iVar16 == -1) {
    if (((bVar10) &&
        ((cVar8 != '\0' || (cVar7 != '\0' || (cVar6 != '\0' || (cVar5 != '\0' || cVar4 != '\0'))))
         || *(longlong *)(lVar14 + 0x1500) != 0)) || (0 < iVar9)) {
      uVar15 = 1;
    }
    else {
      uVar15 = 0;
    }
    *(undefined1 *)(lVar14 + 0xe0) = uVar15;
    if (((!bVar13) ||
        ((cVar8 == '\0' && (cVar7 == '\0' && (cVar6 == '\0' && (cVar5 == '\0' && cVar4 == '\0'))))
         && *(longlong *)(lVar14 + 0x1500) == 0)) && (lVar17 == 0)) {
      bVar20 = false;
    }
  }
  else {
    bVar20 = iVar16 != 0;
    *(bool *)(lVar14 + 0xe0) = iVar16 != 0;
  }
  *(bool *)(lVar14 + 0xae4) = bVar20;
  *(undefined1 *)(lVar14 + 0xe1) = 0;
  if (((uVar18 & 0x40) == 0) &&
     ((*(int *)(lVar14 + 0x1578) != 0 || lVar17 != 0 ||
      (((*(char *)(lVar14 + 0xe5) != '\0' && ((uVar18 & 1) != 0)) &&
       (*(char *)(lVar14 + 0x73) != '\0')))))) {
    *(undefined1 *)(lVar14 + 0xe1) = 1;
  }
  if (*(int *)(lVar14 + 0x2af0) != -1) {
    *(bool *)(lVar14 + 0xe1) = *(int *)(lVar14 + 0x2af0) != 0;
  }
  *(bool *)(lVar14 + 0xe2) = *(int *)(lVar14 + 0x2af4) != -1 && *(int *)(lVar14 + 0x2af4) != 0;
  return;
}



/* ===== 1803de890 FUN_1803de890 ===== */

void FUN_1803de890(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  short *psVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  short sVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  int *piVar19;
  char *pcVar20;
  int *piVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined8 *puVar25;
  short sVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_res8;
  undefined *local_88;
  undefined8 local_80;
  char *local_78;
  
  lVar6 = DAT_180ca0a50;
  uVar24 = *(int *)(DAT_180ca0a50 + 0x27e8) - 1;
  if ((int)uVar24 < 0) {
    lVar22 = *(longlong *)(DAT_180ca0a50 + 0x27f0);
  }
  else {
    do {
      lVar22 = *(longlong *)(lVar6 + 0x27f0);
      lVar15 = (ulonglong)uVar24 * 0x20 + lVar22;
      if (*(int *)(lVar15 + 4) == 7) {
        FUN_180540530(lVar15,lVar15 + 0x20,
                      ((longlong)*(int *)(lVar6 + 0x27e8) - (ulonglong)uVar24) * 0x20 + -0x20);
        *(int *)(lVar6 + 0x27e8) = *(int *)(lVar6 + 0x27e8) + -1;
        lVar22 = *(longlong *)(lVar6 + 0x27f0);
      }
      uVar24 = uVar24 - 1;
    } while (-1 < (int)uVar24);
  }
  lVar11 = (longlong)*(int *)(lVar6 + 0x27e8) * 0x20;
  lVar15 = lVar11 + lVar22;
  if (lVar11 != 0) {
    do {
      if (*(int *)(lVar22 + 4) == 0) {
        (**(code **)(lVar22 + 0x10))(lVar6,lVar22);
      }
      lVar22 = lVar22 + 0x20;
    } while (lVar22 != lVar15);
  }
  lVar22 = DAT_180ca0a50;
  uVar24 = *(uint *)(DAT_180ca0a50 + 0x28);
  if ((uVar24 & 4) != 0) {
    uVar24 = uVar24 & 0xfffffffb;
    *(undefined1 *)(DAT_180ca0a50 + 0x72) = 1;
    *(uint *)(lVar22 + 0x28) = uVar24;
  }
  if ((uVar24 & 8) != 0) {
    *(undefined1 *)(lVar22 + 0x73) = 0;
    *(uint *)(lVar22 + 0x28) = uVar24 & 0xfffffff7;
  }
  if ((*(longlong *)(lVar22 + 0xbf8) != 0) &&
     ((*(code **)(lVar22 + 0xc10) == (code *)0x0 || (*(code **)(lVar22 + 0xc10) == FUN_1803f4bf0))))
  {
    *(undefined1 **)(lVar22 + 0xc10) = &LAB_1803eb510;
  }
  if ((*(longlong *)(lVar22 + 0xc00) != 0) &&
     ((*(code **)(lVar22 + 0xc18) == (code *)0x0 || (*(code **)(lVar22 + 0xc18) == FUN_1803f4d40))))
  {
    *(undefined1 **)(lVar22 + 0xc18) = &LAB_1803eb530;
  }
  fVar28 = *(float *)(lVar22 + 0x11dc);
  if (fVar28 != 0.0) {
    if (fVar28 < 0.0) {
      fVar28 = (float)FUN_18051af10();
    }
    else {
      fVar28 = SQRT(fVar28);
    }
    *(float *)(lVar22 + 0xdcc) = fVar28;
  }
  *(undefined4 *)(lVar22 + 0x11dc) = 0;
  if (*(char *)(lVar22 + 0x27a2) == '\0') {
    if (*(longlong *)(lVar22 + 0x48) != 0) {
      local_res8 = 0;
      lVar15 = FUN_1803d7ae0();
      if (lVar15 != 0) {
        if (local_res8 != 0) {
          FUN_1803f3ba0(lVar15);
        }
        lVar11 = DAT_180ca0a50;
        if (DAT_180ca0a50 != 0) {
          piVar21 = (int *)(DAT_180ca0a50 + 4);
          piVar19 = (int *)(DAT_180ca0a50 + 0x29c0 +
                           (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
          if (*piVar19 != *piVar21) {
            iVar14 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
            lVar17 = DAT_180ca0a50 + 0x29c0;
            sVar13 = (short)iVar14 + (short)(iVar14 / 6) * -6;
            *(short *)(DAT_180ca0a50 + 0x29bc) = sVar13;
            piVar19 = (int *)(lVar17 + (longlong)sVar13 * 8);
            *piVar19 = *piVar21;
            *(undefined4 *)(lVar11 + 0x29c4 + (longlong)sVar13 * 8) = 0;
          }
          *(short *)((longlong)piVar19 + 6) = *(short *)((longlong)piVar19 + 6) + 1;
          piVar21 = (int *)(lVar11 + 0x29b8);
          *piVar21 = *piVar21 + 1;
        }
        thunk_FUN_1805277b0(lVar15);
      }
    }
    *(undefined1 *)(lVar22 + 0x27a2) = 1;
  }
  if ((0.0 < *(float *)(lVar22 + 0x27a4)) &&
     (fVar28 = *(float *)(lVar22 + 0x27a4) - *(float *)(lVar22 + 0x40),
     *(float *)(lVar22 + 0x27a4) = fVar28, fVar28 <= 0.0)) {
    lVar15 = *(longlong *)(lVar22 + 0x48);
    if (lVar15 == 0) {
      *(undefined1 *)(lVar22 + 0xe4) = 1;
    }
    else {
      local_res8 = 0;
      *(undefined4 *)(DAT_180ca0a50 + 0x27a4) = 0;
      uVar12 = FUN_1803f3f90(&local_res8);
      lVar15 = FUN_1803d7900(lVar15,&DAT_1808a8e8c);
      if (lVar15 != 0) {
        FUN_18051142c(uVar12,1,local_res8,lVar15);
        FUN_18051053c(lVar15);
      }
    }
    *(undefined4 *)(lVar22 + 0x27a4) = 0;
  }
  iVar14 = *(int *)(lVar6 + 0xc4c);
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  *(undefined2 *)(lVar6 + 0x26d2) = 0;
  *(undefined4 *)(lVar6 + 0x14e8) = 0;
  *(double *)(lVar6 + 0x10) = (double)*(float *)(lVar6 + 0x40) + *(double *)(lVar6 + 0x10);
  sVar26 = (short)(iVar14 / 100);
  sVar13 = (short)(iVar14 / 10000);
  *(ushort *)(lVar6 + 0x27a0) =
       ((short)iVar14 + sVar26 * -4) * 0x800 | sVar13 + 0x30U & 0x7f |
       (sVar26 + sVar13 * -100 & 0xfU) << 7;
  iVar14 = *(int *)(lVar6 + 0x26f4);
  if (iVar14 < 0) {
    iVar14 = iVar14 + iVar14 / 2;
    iVar9 = 0;
    if (0 < iVar14) {
      iVar9 = iVar14;
    }
    FUN_18007e1d0(lVar6 + 0x26f0,iVar9);
  }
  fVar28 = DAT_1808acd08;
  *(undefined4 *)(lVar6 + 0x26f0) = 0;
  *(float *)(lVar6 + 0x2ae8) =
       (*(float *)(lVar6 + 0x40) -
       *(float *)(lVar6 + 0x29f0 + (longlong)*(int *)(lVar6 + 0x2ae0) * 4)) +
       *(float *)(lVar6 + 0x2ae8);
  *(float *)(lVar6 + 0x29f0 + (longlong)*(int *)(lVar6 + 0x2ae0) * 4) = *(float *)(lVar6 + 0x40);
  iVar9 = *(int *)(lVar6 + 0x2ae4) + 1;
  *(int *)(lVar6 + 0x2ae0) = (*(int *)(lVar6 + 0x2ae0) + 1) % 0x3c;
  iVar14 = 0x3c;
  if (iVar9 < 0x3c) {
    iVar14 = iVar9;
  }
  *(int *)(lVar6 + 0x2ae4) = iVar14;
  fVar35 = fVar28;
  if (0.0 < *(float *)(lVar6 + 0x2ae8)) {
    fVar35 = DAT_1808ac34c / (*(float *)(lVar6 + 0x2ae8) / (float)iVar14);
  }
  *(float *)(lVar6 + 0xe8) = fVar35;
  iVar14 = *(int *)(lVar6 + 0x1484);
  if (iVar14 < 0) {
    iVar14 = iVar14 + iVar14 / 2;
    iVar9 = 0;
    if (0 < iVar14) {
      iVar9 = iVar14;
    }
    FUN_1803f6e00(lVar6 + 0x1480,iVar9);
  }
  *(undefined4 *)(lVar6 + 0x1480) = 0;
  FUN_1803eaab0(*(undefined1 *)(lVar6 + 0x79));
  FUN_1803f4940();
  lVar22 = DAT_180ca0a50;
  uVar24 = *(uint *)(DAT_180ca0a50 + 0x2c);
  plVar16 = *(longlong **)(DAT_180ca0a50 + 0x11e8);
  plVar1 = plVar16 + *(int *)(DAT_180ca0a50 + 0x11e0);
  if (((longlong)*(int *)(DAT_180ca0a50 + 0x11e0) & 0x1fffffffffffffffU) != 0) {
    do {
      if (*(longlong *)(*plVar16 + 0x2d8) == lVar22) {
        FUN_180402820(*plVar16,*(undefined4 *)(lVar22 + 4),(byte)(uVar24 >> 4) & 1);
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar1);
  }
  puVar25 = *(undefined8 **)(lVar22 + 0x2798);
  puVar2 = puVar25 + *(int *)(lVar22 + 0x2790);
  if (((longlong)*(int *)(lVar22 + 0x2790) & 0x1fffffffffffffffU) != 0) {
    do {
      FUN_180402ae0(*puVar25);
      puVar25 = puVar25 + 1;
    } while (puVar25 != puVar2);
  }
  lVar22 = DAT_180ca0a50;
  plVar16 = *(longlong **)(DAT_180ca0a50 + 0x2058);
  plVar1 = plVar16 + *(int *)(DAT_180ca0a50 + 0x2050);
  fVar35 = DAT_1808aceb0;
  fVar34 = DAT_1808aceb0;
  fVar33 = fVar28;
  fVar36 = fVar28;
  if (((longlong)*(int *)(DAT_180ca0a50 + 0x2050) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar15 = *plVar16;
      fVar4 = *(float *)(lVar15 + 8);
      fVar5 = *(float *)(lVar15 + 0xc);
      fVar29 = fVar4 + *(float *)(lVar15 + 0x10);
      fVar32 = fVar5 + *(float *)(lVar15 + 0x14);
      if (fVar4 < fVar36) {
        fVar36 = fVar4;
      }
      if (fVar5 < fVar33) {
        fVar33 = fVar5;
      }
      if (fVar35 < fVar29) {
        fVar35 = fVar29;
      }
      if (fVar34 < fVar32) {
        fVar34 = fVar32;
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar1);
  }
  *(float *)(DAT_180ca0a50 + 0x124c) = fVar36;
  *(float *)(lVar22 + 0x1250) = fVar33;
  *(float *)(lVar22 + 0x1254) = fVar35;
  *(float *)(lVar22 + 0x1258) = fVar34;
  *(undefined4 *)(lVar22 + 0x1240) = *(undefined4 *)(lVar22 + 0xdcc);
  FUN_1803fb7f0(lVar22 + 0x1218,*(undefined4 *)(lVar22 + 0xdd0));
  *(undefined4 *)(lVar22 + 0x1248) = 0;
  bVar27 = *(char *)(lVar22 + 0xdc8) != '\0';
  if (bVar27) {
    *(undefined4 *)(lVar22 + 0x1248) = 1;
  }
  uVar24 = (uint)bVar27;
  if ((*(char *)(lVar22 + 0xdc9) != '\0') && ((**(byte **)(lVar22 + 0x60) & 4) == 0)) {
    uVar24 = uVar24 | 2;
    *(uint *)(lVar22 + 0x1248) = uVar24;
  }
  if (*(char *)(lVar22 + 0xdca) != '\0') {
    uVar24 = uVar24 | 4;
    *(uint *)(lVar22 + 0x1248) = uVar24;
  }
  if ((*(uint *)(lVar22 + 0x2c) & 8) != 0) {
    *(uint *)(lVar22 + 0x1248) = uVar24 | 8;
  }
  if ((*(uint *)(lVar22 + 0x2c) & 0x10) == 0) {
    plVar16 = *(longlong **)(lVar22 + 0x11e8);
    plVar1 = plVar16 + *(int *)(lVar22 + 0x11e0);
    if (((longlong)*(int *)(lVar22 + 0x11e0) & 0x1fffffffffffffffU) != 0) {
      do {
        lVar15 = *plVar16;
        plVar16 = plVar16 + 1;
        *(undefined1 *)(lVar15 + 0x50) = 1;
      } while (plVar16 != plVar1);
    }
  }
  if (*(float *)(lVar22 + 0x11d8) != 0.0) {
    *(float *)(lVar22 + 0xc90) = *(float *)(lVar22 + 0x11d8);
    *(undefined4 *)(lVar22 + 0x11d8) = 0;
  }
  lVar15 = *(longlong *)(lVar22 + 0x60);
  if ((*(longlong *)(lVar15 + 0x2b0) == 0) || (*(int *)(lVar15 + 0x68) == 0)) {
    FUN_180403fc0(lVar15);
  }
  local_88 = *(undefined **)(lVar22 + 0x68);
  if (local_88 == (undefined *)0x0) {
    local_88 = (undefined *)**(undefined8 **)(lVar15 + 0x70);
  }
  fVar35 = *(float *)(lVar22 + 0xc90);
  if (fVar35 <= 0.0) {
    fVar35 = *(float *)(local_88 + 0x1c);
    if (*(float *)(local_88 + 0x1c) <= 0.0) {
      fVar35 = DAT_1808ac950;
    }
    *(float *)(lVar22 + 0xc90) = fVar35;
  }
  *(float *)(lVar22 + 0x1204) = fVar35;
  local_80 = (char *)CONCAT44(fVar35,fVar35);
  *(undefined **)(lVar22 + 0x11f0) = local_88;
  *(undefined4 *)(lVar22 + 0x1200) = 0;
  FUN_1803e8680(local_88,fVar35,0);
  FUN_1803f6200(lVar22 + 0x1fe0,&local_88);
  *(undefined1 *)(lVar6 + 1) = 1;
  plVar16 = *(longlong **)(lVar6 + 0x2058);
  plVar1 = plVar16 + *(int *)(lVar6 + 0x2050);
  if (((longlong)*(int *)(lVar6 + 0x2050) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar22 = *plVar16;
      plVar16 = plVar16 + 1;
      *(undefined1 *)(lVar22 + 0x60) = 0;
    } while (plVar16 != plVar1);
  }
  lVar22 = DAT_180ca0a50;
  if ((*(char *)(lVar6 + 0x2290) != '\0') &&
     (iVar14 = *(int *)(lVar6 + 0x22ac), iVar14 == *(int *)(lVar6 + 0x1578))) {
    if (*(int *)(DAT_180ca0a50 + 0x1578) == iVar14) {
      *(int *)(DAT_180ca0a50 + 0x157c) = iVar14;
    }
    if (*(int *)(lVar22 + 0x15ac) == iVar14) {
      *(undefined1 *)(lVar22 + 0x15b5) = 1;
    }
  }
  if ((((*(char *)(lVar6 + 0xb1) != '\0') && (*(char *)(lVar6 + 300) != '\0')) ||
      (*(undefined4 *)(lVar6 + 0x1558) = 0, *(char *)(lVar6 + 0xb1) != '\0')) &&
     (1 < *(int *)(lVar6 + 0x1568))) {
    *(undefined4 *)(lVar6 + 0x1558) = *(undefined4 *)(lVar6 + 0x1564);
  }
  iVar14 = *(int *)(lVar6 + 0x1560);
  if (*(int *)(lVar6 + 0x1564) == 0) {
    *(undefined4 *)(lVar6 + 0x156c) = 0;
LAB_1803df093:
    *(undefined4 *)(lVar6 + 0x1570) = 0;
    if (iVar14 != 0) {
LAB_1803df09e:
      *(float *)(lVar6 + 0x156c) = *(float *)(lVar6 + 0x40) + *(float *)(lVar6 + 0x156c);
      if (*(int *)(lVar6 + 0x1578) != iVar14) {
        *(float *)(lVar6 + 0x1570) = *(float *)(lVar6 + 0x40) + *(float *)(lVar6 + 0x1570);
      }
    }
  }
  else if (iVar14 != 0) {
    if (*(int *)(lVar6 + 0x1578) == iVar14) goto LAB_1803df093;
    goto LAB_1803df09e;
  }
  iVar9 = *(int *)(lVar6 + 0x1578);
  *(int *)(lVar6 + 0x1564) = iVar14;
  *(undefined4 *)(lVar6 + 0x1568) = 0;
  *(undefined4 *)(lVar6 + 0x1560) = 0;
  *(undefined2 *)(lVar6 + 0x1574) = 0;
  if (((iVar9 != 0) && (*(int *)(lVar6 + 0x157c) != iVar9)) && (*(int *)(lVar6 + 0x15a8) == iVar9))
  {
    if ((*(byte *)(lVar6 + 0x28f4) & 2) != 0) {
      FUN_1803f5060("NewFrame(): ClearActiveID() 0x%08X because it isn\'t marked alive anymore!\n");
    }
    FUN_1803dd660(0,0);
  }
  iVar14 = *(int *)(lVar6 + 0x1578);
  if ((iVar14 != 0) &&
     (*(float *)(lVar6 + 0x1580) = *(float *)(lVar6 + 0x40) + *(float *)(lVar6 + 0x1580),
     iVar14 == *(int *)(lVar6 + 0x15c0))) {
    *(undefined1 *)(lVar6 + 0x15c8) = *(undefined1 *)(lVar6 + 0x1585);
    *(undefined1 *)(lVar6 + 0x15c9) = *(undefined1 *)(lVar6 + 0x1586);
  }
  fVar35 = *(float *)(lVar6 + 0x40);
  *(int *)(lVar6 + 0x15a8) = iVar14;
  *(undefined4 *)(lVar6 + 0x157c) = 0;
  *(undefined1 *)(lVar6 + 0x1577) = 0;
  *(undefined1 *)(lVar6 + 0x158b) = 0;
  *(undefined1 *)(lVar6 + 0x1584) = 0;
  *(float *)(lVar6 + 0x15c4) = fVar35 + *(float *)(lVar6 + 0x15c4);
  if ((*(int *)(lVar6 + 0x2630) != 0) && (iVar14 != *(int *)(lVar6 + 0x2630))) {
    *(undefined4 *)(lVar6 + 0x2630) = 0;
  }
  if ((*(int *)(lVar6 + 0x262c) != 0) && (*(int *)(lVar6 + 0x262c) != *(int *)(lVar6 + 0x15ac))) {
    *(undefined4 *)(lVar6 + 0x262c) = 0;
  }
  if (iVar14 == 0) {
    *(undefined4 *)(lVar6 + 0x1e98) = 0;
    *(undefined1 *)(lVar6 + 0x1e9c) = 0;
  }
  if (*(int *)(lVar6 + 0x15b0) < *(int *)(lVar6 + 4)) {
    *(undefined4 *)(lVar6 + 0x15ac) = 0;
  }
  *(undefined1 *)(lVar6 + 0x15b5) = 0;
  if (*(int *)(lVar6 + 0x25ac) < *(int *)(lVar6 + 4)) {
    *(undefined4 *)(lVar6 + 0x25a8) = 0;
  }
  iVar14 = *(int *)(lVar6 + 0x24e8);
  if (iVar14 == 0) {
    *(undefined4 *)(lVar6 + 0x24f8) = 0;
  }
  else if (*(float *)(lVar6 + 0x11c0) <= *(float *)(lVar6 + 0x2504)) {
    *(int *)(lVar6 + 0x24f8) = iVar14;
  }
  if (*(longlong *)(lVar6 + 0x1500) == 0) {
    *(undefined4 *)(lVar6 + 0x24fc) = 0;
  }
  else if (*(float *)(lVar6 + 0x11c0) <= *(float *)(lVar6 + 0x2504)) {
    *(undefined4 *)(lVar6 + 0x24fc) = *(undefined4 *)(*(longlong *)(lVar6 + 0x1500) + 0x10);
  }
  *(int *)(lVar6 + 0x24ec) = iVar14;
  fVar34 = DAT_1808ac140;
  if (iVar14 == 0) {
    if (0.0 < *(float *)(lVar6 + 0x24f0)) {
      fVar33 = fVar35 + *(float *)(lVar6 + 0x24f4);
      *(float *)(lVar6 + 0x24f4) = fVar33;
      if (fVar34 <= fVar35 + fVar35) {
        fVar34 = fVar35 + fVar35;
      }
      if (fVar34 <= fVar33) {
        *(undefined8 *)(lVar6 + 0x24f0) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(lVar6 + 0x24f4) = 0;
    *(undefined4 *)(lVar6 + 0x24e8) = 0;
    *(float *)(lVar6 + 0x24f0) = fVar35 + *(float *)(lVar6 + 0x24f0);
  }
  FUN_1803e97f0();
  *(undefined4 *)(lVar6 + 0x2318) = *(undefined4 *)(lVar6 + 0x2314);
  *(undefined4 *)(lVar6 + 0x230c) = *(undefined4 *)(lVar6 + 0x2308);
  *(undefined4 *)(lVar6 + 0x2308) = 0;
  *(undefined8 *)(lVar6 + 0x2310) = 0x7f7fffff;
  *(undefined2 *)(lVar6 + 0x2291) = 0;
  *(undefined4 *)(lVar6 + 0x2320) = 0;
  if (*(char *)(lVar6 + 0x2290) != '\0') {
    uVar24 = *(uint *)(lVar6 + 0x1578);
    if (uVar24 == 0) {
      uVar23 = 0xffffffff;
      pcVar20 = "##DragDropCancelHandler";
      bVar7 = 0x23;
      do {
        pcVar20 = pcVar20 + 1;
        if (((bVar7 == 0x23) && (*pcVar20 == 0x23)) && (pcVar20[1] == 0x23)) {
          uVar23 = 0xffffffff;
          pcVar20 = pcVar20 + 2;
        }
        else {
          uVar23 = (ulonglong)
                   ((uint)(uVar23 >> 8) ^
                   *(uint *)(&DAT_1806c25c0 + (uVar23 & 0xff ^ (ulonglong)bVar7) * 4));
        }
        bVar7 = *pcVar20;
      } while (bVar7 != 0);
      uVar24 = ~(uint)uVar23;
      if (uVar24 != 0) goto LAB_1803df373;
LAB_1803df378:
      uVar24 = *(uint *)(DAT_180ca0a50 + 0x1ea4);
    }
    else {
LAB_1803df373:
      if (uVar24 == 0xffffffff) goto LAB_1803df378;
    }
    if ((((*(byte *)(DAT_180ca0a50 + 0x1ea8) & 0x40) == 0) &&
        (cVar8 = FUN_1803e9150(0x20e,0x1000,uVar24), cVar8 != '\0')) &&
       (cVar8 = FUN_1803eb3c0(0x20e,0x1000,uVar24), cVar8 != '\0')) {
      FUN_1803dd660(0,0);
      FUN_1803f3710();
    }
  }
  *(undefined8 *)(lVar6 + 0x26d8) = 0;
  FUN_1803f0920();
  FUN_1803e9c00();
  fVar35 = DAT_1808ac378;
  if ((*(char *)(lVar6 + 0x1fb9) != '\0') || (*(float *)(lVar6 + 0x90) < 0.0)) {
    bVar27 = true;
  }
  else {
    bVar27 = false;
    fVar28 = (float)*(double *)(lVar6 + 0x10) - *(float *)(lVar6 + 0x90);
  }
  plVar16 = *(longlong **)(lVar6 + 0x14a0);
  plVar1 = plVar16 + *(int *)(lVar6 + 0x1498);
  if (((longlong)*(int *)(lVar6 + 0x1498) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar22 = *plVar16;
      cVar8 = *(char *)(lVar22 + 0xcc);
      *(char *)(lVar22 + 0xcd) = cVar8;
      *(undefined1 *)(lVar22 + 0xcc) = 0;
      *(undefined1 *)(lVar22 + 0xce) = 0;
      *(undefined2 *)(lVar22 + 0xdc) = *(undefined2 *)(lVar22 + 0xda);
      *(undefined2 *)(lVar22 + 0xda) = 0;
      if ((((cVar8 == '\0') || (bVar27)) && (*(char *)(lVar22 + 0x434) == '\0')) &&
         (*(float *)(lVar22 + 0x294) <= fVar28 && fVar28 != *(float *)(lVar22 + 0x294))) {
        lVar15 = *(longlong *)(lVar22 + 0x2c8);
        *(undefined1 *)(lVar22 + 0x434) = 1;
        iVar9 = (int)((float)*(int *)(lVar15 + 0x10) * fVar35);
        iVar14 = *(int *)(lVar15 + 0x14);
        if (iVar9 < *(int *)(lVar15 + 0x14)) {
          iVar14 = iVar9;
        }
        *(int *)(lVar22 + 0x42c) = iVar14;
        iVar9 = (int)((float)*(int *)(lVar15 + 0x20) * fVar35);
        iVar14 = *(int *)(lVar15 + 0x24);
        if (iVar9 < *(int *)(lVar15 + 0x24)) {
          iVar14 = iVar9;
        }
        *(int *)(lVar22 + 0x430) = iVar14;
        FUN_1803d6150(lVar22 + 0x108);
        FUN_1803fbcd0(*(undefined8 *)(lVar22 + 0x2c8));
        FUN_1803d6150(lVar22 + 0x1b0);
        FUN_1803d6150(lVar22 + 0x1f8);
        FUN_1803d6150(lVar22 + 0x208);
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar1);
  }
  FUN_1803de430(lVar6 + 0x110);
  lVar15 = DAT_180ca0a50;
  lVar22 = *(longlong *)(DAT_180ca0a50 + 0x1518);
  if (lVar22 == 0) {
    if ((*(longlong *)(DAT_180ca0a50 + 0x15a0) == 0) ||
       (iVar14 = *(int *)(DAT_180ca0a50 + 0x1578),
       *(int *)(*(longlong *)(DAT_180ca0a50 + 0x15a0) + 0x8c) != iVar14)) goto LAB_1803df624;
    *(int *)(DAT_180ca0a50 + 0x157c) = iVar14;
    if (*(int *)(lVar15 + 0x15ac) == iVar14) {
      *(undefined1 *)(lVar15 + 0x15b5) = 1;
    }
    if (*(char *)(lVar15 + 0x118) != '\0') goto LAB_1803df624;
  }
  else {
    piVar21 = (int *)(DAT_180ca0a50 + 0x1578);
    *(int *)(DAT_180ca0a50 + 0x157c) = *piVar21;
    if (*(int *)(lVar15 + 0x15ac) == *piVar21) {
      *(undefined1 *)(lVar15 + 0x15b5) = 1;
    }
    if (((*(char *)(lVar15 + 0x118) != '\0') && (DAT_1808ace9c <= *(float *)(lVar15 + 0x110))) &&
       (DAT_1808ace9c <= *(float *)(lVar15 + 0x114))) {
      local_res8 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar15 + 0x110) >> 0x20) -
                            (float)((ulonglong)*(undefined8 *)(lVar15 + 0x1594) >> 0x20),
                            (float)*(undefined8 *)(lVar15 + 0x110) -
                            (float)*(undefined8 *)(lVar15 + 0x1594));
      FUN_1803e7c50(*(undefined8 *)(lVar22 + 0x3c0),&local_res8,1);
      FUN_1803ef030(*(undefined8 *)(lVar15 + 0x1518),0);
      goto LAB_1803df624;
    }
    *(undefined8 *)(lVar15 + 0x1518) = 0;
  }
  FUN_1803dd660(0,0);
LAB_1803df624:
  fVar35 = DAT_1808ac7ac;
  uVar24 = *(int *)(DAT_180ca0a50 + 0x2020) - 1;
  if (-1 < (int)uVar24) {
    do {
      lVar22 = *(longlong *)(*(longlong *)(DAT_180ca0a50 + 0x2028) + 8 + (ulonglong)uVar24 * 0x58);
      if ((lVar22 != 0) && ((*(uint *)(lVar22 + 0x14) & 0x8000000) != 0)) goto LAB_1803df685;
      uVar24 = uVar24 - 1;
    } while (-1 < (int)uVar24);
  }
  if ((*(longlong *)(lVar6 + 0x2250) == 0) || (*(float *)(lVar6 + 0x226c) <= 0.0)) {
    fVar34 = *(float *)(lVar6 + 0x228c) - *(float *)(lVar6 + 0x40) * DAT_1808ac864;
    if (fVar34 <= 0.0) {
      fVar34 = 0.0;
    }
  }
  else {
LAB_1803df685:
    fVar34 = *(float *)(lVar6 + 0x40) * DAT_1808ac7ac + *(float *)(lVar6 + 0x228c);
    if (DAT_1808ac34c <= fVar34) {
      fVar34 = DAT_1808ac34c;
    }
  }
  *(float *)(lVar6 + 0x228c) = fVar34;
  *(undefined8 *)(lVar6 + 0x277c) = *(undefined8 *)(lVar6 + 0x2768);
  *(undefined8 *)(lVar6 + 0x2784) = *(undefined8 *)(lVar6 + 0x2770);
  *(undefined4 *)(lVar6 + 0x278c) = *(undefined4 *)(lVar6 + 0x2778);
  *(undefined4 *)(lVar6 + 0x2500) = 0;
  *(undefined8 *)(lVar6 + 0x2af0) = 0xffffffffffffffff;
  *(undefined4 *)(lVar6 + 0x2aec) = 0xffffffff;
  *(undefined2 *)(lVar6 + 0x2768) = 0;
  FUN_1803e9fd0();
  iVar14 = 0;
  if (0 < *(int *)(lVar6 + 0x23a8)) {
    do {
      lVar22 = DAT_180ca0a50;
      fVar34 = *(float *)(*(longlong *)(lVar6 + 0x23b0) + (longlong)iVar14 * 4);
      if ((0.0 <= fVar34) && (fVar34 < fVar28)) {
        lVar11 = (longlong)iVar14 * 0x250 + *(longlong *)(lVar6 + 0x2388);
        *(undefined8 *)(lVar11 + 0x1f0) = 0;
        lVar15 = *(longlong *)(lVar11 + 0x1e8);
        if (lVar15 != 0) {
          *(undefined8 *)(lVar11 + 0x1e0) = 0;
          if (lVar22 != 0) {
            lVar17 = (longlong)*(short *)(lVar22 + 0x29bc) * 8;
            if (*(int *)(lVar22 + 0x29c0 + lVar17) != *(int *)(lVar22 + 4)) {
              iVar9 = *(short *)(lVar22 + 0x29bc) + 1;
              sVar13 = (short)iVar9 + (short)(iVar9 / 6) * -6;
              *(short *)(lVar22 + 0x29bc) = sVar13;
              lVar17 = (longlong)sVar13 * 8;
              *(int *)(lVar17 + 0x29c0 + lVar22) = *(int *)(lVar22 + 4);
              *(undefined4 *)(lVar17 + 0x29c4 + lVar22) = 0;
            }
            psVar3 = (short *)(lVar17 + 0x29c6 + lVar22);
            *psVar3 = *psVar3 + 1;
            *(int *)(lVar22 + 0x29b8) = *(int *)(lVar22 + 0x29b8) + 1;
          }
          thunk_FUN_1805277b0(lVar15);
          *(undefined8 *)(lVar11 + 0x1e8) = 0;
        }
        *(undefined1 *)(lVar11 + 0x23d) = 1;
        FUN_1803d6150(lVar11 + 400);
        iVar9 = 0;
        *(undefined1 *)(lVar11 + 0x24e) = 1;
        if (0 < *(int *)(lVar11 + 0x6c)) {
          do {
            lVar15 = (longlong)iVar9;
            iVar9 = iVar9 + 1;
            *(undefined2 *)(*(longlong *)(lVar11 + 0x18) + 0x58 + lVar15 * 0x78) = 0xffff;
          } while (iVar9 < *(int *)(lVar11 + 0x6c));
        }
        *(undefined4 *)
         (*(longlong *)(lVar22 + 0x23b0) +
         (longlong)(int)((lVar11 - *(longlong *)(lVar22 + 0x2388)) / 0x250) * 4) = 0xbf800000;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(lVar6 + 0x23a8));
  }
  lVar15 = *(longlong *)(lVar6 + 0x2378);
  lVar11 = (longlong)*(int *)(lVar6 + 0x2370) * 0xb0;
  lVar22 = lVar11 + lVar15;
  if (lVar11 != 0) {
    do {
      lVar17 = DAT_180ca0a50;
      lVar11 = *(longlong *)(lVar15 + 0x28);
      if (lVar11 != 0) {
        *(undefined8 *)(lVar15 + 0x20) = 0;
        if (lVar17 != 0) {
          lVar18 = (longlong)*(short *)(lVar17 + 0x29bc) * 8;
          if (*(int *)(lVar17 + 0x29c0 + lVar18) != *(int *)(lVar17 + 4)) {
            iVar14 = *(short *)(lVar17 + 0x29bc) + 1;
            sVar13 = (short)iVar14 + (short)(iVar14 / 6) * -6;
            *(short *)(lVar17 + 0x29bc) = sVar13;
            lVar18 = (longlong)sVar13 * 8;
            *(int *)(lVar18 + 0x29c0 + lVar17) = *(int *)(lVar17 + 4);
            *(undefined4 *)(lVar18 + 0x29c4 + lVar17) = 0;
          }
          psVar3 = (short *)(lVar18 + 0x29c6 + lVar17);
          *psVar3 = *psVar3 + 1;
          *(int *)(lVar17 + 0x29b8) = *(int *)(lVar17 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar11);
        *(undefined8 *)(lVar15 + 0x28) = 0;
      }
      lVar11 = DAT_180ca0a50;
      if ((0.0 <= *(float *)(lVar15 + 8)) && (*(float *)(lVar15 + 8) < fVar28)) {
        lVar17 = *(longlong *)(lVar15 + 0x18);
        if (lVar17 != 0) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          if (lVar11 != 0) {
            lVar18 = (longlong)*(short *)(lVar11 + 0x29bc) * 8;
            if (*(int *)(lVar11 + 0x29c0 + lVar18) != *(int *)(lVar11 + 4)) {
              iVar14 = *(short *)(lVar11 + 0x29bc) + 1;
              sVar13 = (short)iVar14 + (short)(iVar14 / 6) * -6;
              *(short *)(lVar11 + 0x29bc) = sVar13;
              lVar18 = (longlong)sVar13 * 8;
              *(int *)(lVar18 + 0x29c0 + lVar11) = *(int *)(lVar11 + 4);
              *(undefined4 *)(lVar18 + 0x29c4 + lVar11) = 0;
            }
            psVar3 = (short *)(lVar18 + 0x29c6 + lVar11);
            *psVar3 = *psVar3 + 1;
            *(int *)(lVar11 + 0x29b8) = *(int *)(lVar11 + 0x29b8) + 1;
          }
          thunk_FUN_1805277b0(lVar17);
          *(undefined8 *)(lVar15 + 0x18) = 0;
        }
        FUN_1804014e0(lVar15 + 0x50);
        *(undefined4 *)(lVar15 + 8) = 0xbf800000;
      }
      lVar15 = lVar15 + 0xb0;
    } while (lVar15 != lVar22);
  }
  lVar22 = DAT_180ca0a50;
  if (*(char *)(lVar6 + 0x1fb9) != '\0') {
    FUN_1803d6150(DAT_180ca0a50 + 0x2000);
    lVar11 = DAT_180ca0a50;
    lVar15 = *(longlong *)(lVar22 + 0x2018);
    if (lVar15 != 0) {
      *(undefined8 *)(lVar22 + 0x2010) = 0;
      if (lVar11 != 0) {
        piVar21 = (int *)(lVar11 + 0x29c0 + (longlong)*(short *)(lVar11 + 0x29bc) * 8);
        if (*piVar21 != *(int *)(lVar11 + 4)) {
          iVar14 = *(short *)(lVar11 + 0x29bc) + 1;
          sVar13 = (short)iVar14 + (short)(iVar14 / 6) * -6;
          *(short *)(lVar11 + 0x29bc) = sVar13;
          piVar21 = (int *)(lVar11 + 0x29c0 + (longlong)sVar13 * 8);
          *piVar21 = *(int *)(lVar11 + 4);
          *(undefined4 *)(lVar11 + 0x29c4 + (longlong)sVar13 * 8) = 0;
        }
        *(short *)((longlong)piVar21 + 6) = *(short *)((longlong)piVar21 + 6) + 1;
        *(int *)(lVar11 + 0x29b8) = *(int *)(lVar11 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar15);
      *(undefined8 *)(lVar22 + 0x2018) = 0;
    }
    FUN_1803d6150(lVar22 + 0x2590);
    *(undefined4 *)(lVar22 + 0x25a0) = 0;
    *(undefined4 *)(lVar22 + 0x24a8) = 0;
    FUN_1803f5b50(lVar22 + 0x24b0);
    FUN_180413770();
    plVar16 = *(longlong **)(lVar22 + 0x11e8);
    plVar1 = plVar16 + *(int *)(lVar22 + 0x11e0);
    if (((longlong)*(int *)(lVar22 + 0x11e0) & 0x1fffffffffffffffU) != 0) {
      do {
        lVar22 = *plVar16;
        lVar15 = *(longlong *)(lVar22 + 0x2b0);
        FUN_180405a80(lVar22,1);
        FUN_180406590(&local_res8,lVar22);
        if (((*(int *)(lVar15 + 0x9c) != 0) ||
            ((int)local_res8 != *(int *)(*(longlong *)(lVar22 + 0x38) + 0x24))) ||
           (local_res8._4_4_ != *(int *)(*(longlong *)(lVar22 + 0x38) + 0x28))) {
          FUN_180405e50(lVar22);
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar1);
    }
  }
  *(undefined1 *)(lVar6 + 0x1fb9) = 0;
  if ((*(longlong *)(lVar6 + 0x2068) != 0) &&
     (*(char *)(*(longlong *)(lVar6 + 0x2068) + 0xcd) == '\0')) {
    uVar24 = *(int *)(DAT_180ca0a50 + 0x14a8) - 1;
    if (-1 < (int)uVar24) {
      do {
        lVar22 = *(longlong *)(*(longlong *)(DAT_180ca0a50 + 0x14b0) + (ulonglong)uVar24 * 8);
        if (((lVar22 != 0) && (*(char *)(lVar22 + 0xcd) != '\0')) &&
           ((*(uint *)(lVar22 + 0x14) & 0x10200) != 0x10200)) goto LAB_1803dfbce;
        uVar24 = uVar24 - 1;
      } while (-1 < (int)uVar24);
    }
    lVar22 = 0;
LAB_1803dfbce:
    FUN_1803ef030(lVar22,1);
  }
  FUN_1803f6610(lVar6 + 0x14c8,0);
  iVar14 = *(int *)(lVar6 + 0x2034);
  if (iVar14 < 0) {
    iVar14 = iVar14 + iVar14 / 2;
    iVar9 = 0;
    if (0 < iVar14) {
      iVar9 = iVar14;
    }
    FUN_1803f6cf0(lVar6 + 0x2030,iVar9);
  }
  *(undefined4 *)(lVar6 + 0x2030) = 0;
  FUN_1803edcb0();
  iVar14 = *(int *)(lVar6 + 0x2004);
  piVar21 = (int *)(lVar6 + 0x2000);
  if (iVar14 < 0) {
    iVar14 = iVar14 + iVar14 / 2;
    iVar9 = 0;
    if (0 < iVar14) {
      iVar9 = iVar14;
    }
    FUN_18007e1d0(piVar21,iVar9);
  }
  *piVar21 = 0;
  if (*(int *)(lVar6 + 0x2004) == 0) {
    FUN_18007e1d0(piVar21,8);
  }
  *(undefined4 *)(*(longlong *)(lVar6 + 0x2008) + (longlong)*piVar21 * 4) = 0x90;
  iVar14 = *piVar21;
  *piVar21 = iVar14 + 1;
  *(undefined4 *)(lVar6 + 0x1ea8) =
       *(undefined4 *)(*(longlong *)(lVar6 + 0x2008) + (longlong)iVar14 * 4);
  FUN_1803f60b0(lVar6 + 0x2010,0);
  lVar22 = DAT_180ca0a50;
  *(undefined4 *)(DAT_180ca0a50 + 0x2934) = 0;
  if (*(char *)(lVar22 + 0x2931) != '\0') {
    iVar14 = *(int *)(lVar22 + 0x1564);
    *(undefined4 *)(lVar22 + 0x2500) = 7;
    cVar8 = FUN_1803e9470(0x20e,1,0);
    if (cVar8 != '\0') {
      *(undefined1 *)(lVar22 + 0x2931) = 0;
    }
    iVar9 = *(int *)(lVar22 + 0x130);
    if (iVar9 == 0x3000) {
      cVar8 = FUN_1803e9690(0,0,0);
      if (cVar8 != '\0') {
        *(undefined1 *)(lVar22 + 0x2932) = 0;
      }
      cVar8 = FUN_1803e9690(1,0,0);
      if (cVar8 != '\0') {
        *(undefined1 *)(lVar22 + 0x2932) = 1;
      }
      cVar8 = FUN_1803e9690(2,0,0);
      if (cVar8 != '\0') {
        *(undefined1 *)(lVar22 + 0x2932) = 2;
      }
    }
    else {
      cVar8 = FUN_1803e9690(*(undefined1 *)(lVar22 + 0x2932),0,0);
      if ((cVar8 != '\0') && (iVar14 != 0)) {
        *(int *)(lVar22 + 0x2934) = iVar14;
        *(undefined1 *)(lVar22 + 0x2931) = 0;
      }
    }
    *(uint *)(lVar22 + 0x1f38) = *(uint *)(lVar22 + 0x1f38) | 0x40;
    *(undefined4 *)(lVar22 + 0x1fa8) = 0x3f333333;
    cVar8 = FUN_1803ed650(0);
    if (cVar8 != '\0') {
      FUN_180414bb0("HoveredId: 0x%08X",iVar14);
      FUN_180414bb0("Press ESC to abort picking.");
      local_88 = &DAT_180774264;
      local_80 = "Right";
      local_78 = "Middle";
      if (iVar9 == 0x3000) {
        FUN_180414bb0("Remap w/ Ctrl+Shift: click anywhere to select new mouse button.");
      }
      else {
        lVar15 = 0xde0;
        if (iVar14 == 0) {
          lVar15 = 0xdf0;
        }
        FUN_180414c20(lVar15 + DAT_180ca0a50,
                      "Click %s Button to break in debugger! (remap w/ Ctrl+Shift)",
                      (&local_88)[*(byte *)(lVar22 + 0x2932)]);
      }
      FUN_1803e75b0();
    }
    lVar22 = DAT_180ca0a50;
  }
  uVar10 = 0;
  if (*(int *)(lVar22 + 0x29ac) + 1 == *(int *)(lVar22 + 4)) {
    lVar15 = 0x1564;
    if (*(int *)(lVar22 + 0x1564) == 0) {
      lVar15 = 0x1578;
    }
    uVar10 = *(undefined4 *)(lVar22 + lVar15);
  }
  uVar10 = FUN_1803f5500(lVar22 + 0x2970,uVar10);
  lVar15 = DAT_180ca0a50;
  *(undefined4 *)(lVar22 + 0x155c) = uVar10;
  if (0.0 < *(float *)(lVar15 + 0x2938)) {
    lVar22 = (longlong)*(int *)(lVar15 + 0x1fbc) * 0x10;
    auVar30._0_8_ = FUN_180517200(*(float *)(lVar15 + 0x2938) * fVar35);
    auVar30._8_8_ = extraout_XMM0_Qb;
    auVar31._4_12_ = auVar30._4_12_;
    auVar31._0_4_ = (float)auVar30._0_8_ * DAT_1808ac1f4 + DAT_1808ac1f4;
    FUN_1803d80a0(auVar31._0_8_,DAT_1808ac1f4,DAT_1808ac1f4,lVar22 + 0xde0 + lVar15,
                  lVar15 + 0xde4 + lVar22,lVar15 + 0xde8 + lVar22);
    *(undefined4 *)(lVar15 + 0xdec + (longlong)*(int *)(lVar15 + 0x1fbc) * 0x10) = 0x3f800000;
    fVar28 = *(float *)(lVar15 + 0x2938) - *(float *)(lVar15 + 0x40);
    *(float *)(lVar15 + 0x2938) = fVar28;
    if (fVar28 <= 0.0) {
      if (*(int *)(lVar15 + 0x1fbc) != 0x3e) {
        uVar12 = *(undefined8 *)(lVar15 + 0x2944);
        puVar2 = (undefined8 *)(lVar15 + ((longlong)*(int *)(lVar15 + 0x1fbc) + 0xde) * 0x10);
        *puVar2 = *(undefined8 *)(lVar15 + 0x293c);
        puVar2[1] = uVar12;
      }
      *(undefined4 *)(lVar15 + 0x1fbc) = 0x3e;
    }
  }
  if ((*(char *)(lVar6 + 0x2929) != '\0') &&
     (cVar8 = *(char *)(lVar6 + 0x2929) + -1, *(char *)(lVar6 + 0x2929) = cVar8, cVar8 == '\0')) {
    *(undefined4 *)(lVar6 + 0x1eac) = 0;
    *(undefined1 *)(lVar6 + 0x292a) = 0;
  }
  if ((*(char *)(lVar6 + 0x2928) != '\0') &&
     (cVar8 = *(char *)(lVar6 + 0x2928) + -1, *(char *)(lVar6 + 0x2928) = cVar8, cVar8 == '\0')) {
    FUN_1803f5060("(Debug Log: Auto-disabled some ImGuiDebugLogFlags after 2 frames)\n");
    lVar15 = DAT_180ca0a50;
    *(uint *)(lVar6 + 0x28f4) = *(uint *)(lVar6 + 0x28f4) & ~*(uint *)(lVar6 + 0x2924);
    *(undefined4 *)(lVar6 + 0x2924) = 0;
  }
  *(undefined1 *)(lVar6 + 2) = 1;
  *(uint *)(lVar15 + 0x1f38) = *(uint *)(lVar15 + 0x1f38) | 2;
  *(undefined4 *)(lVar15 + 0x1f58) = 0x43c80000;
  *(undefined4 *)(lVar15 + 0x1f5c) = 0x43c80000;
  *(undefined4 *)(lVar15 + 8000) = 4;
  FUN_1803e4f20("Debug##Default",0,0);
  lVar22 = DAT_180ca0a50;
  *(undefined4 *)(lVar6 + 0x28cc) = 0;
  *(undefined2 *)(lVar6 + 0x28d0) = *(undefined2 *)(lVar22 + 0x14c8);
  *(undefined2 *)(lVar6 + 0x28d2) = *(undefined2 *)(*(longlong *)(lVar22 + 0x14f8) + 0x108);
  *(undefined2 *)(lVar6 + 0x28d4) = *(undefined2 *)(*(longlong *)(lVar22 + 0x14f8) + 0x1a0);
  *(undefined2 *)(lVar6 + 0x28d6) = *(undefined2 *)(lVar22 + 0x1fc0);
  *(undefined2 *)(lVar6 + 0x28d8) = *(undefined2 *)(lVar22 + 0x1fd0);
  *(undefined2 *)(lVar6 + 0x28da) = *(undefined2 *)(lVar22 + 0x1fe0);
  *(undefined2 *)(lVar6 + 0x28dc) = *(undefined2 *)(lVar22 + 0x1ff0);
  *(undefined2 *)(lVar6 + 0x28de) = *(undefined2 *)(lVar22 + 0x2010);
  *(undefined2 *)(lVar6 + 0x28e0) = *(undefined2 *)(lVar22 + 0x2000);
  *(undefined2 *)(lVar6 + 0x28e2) = *(undefined2 *)(lVar22 + 0x2030);
  *(undefined2 *)(lVar6 + 0x28e4) = *(undefined2 *)(lVar22 + 0x26d0);
  if (*(char *)(lVar6 + 0xb4) == '\0') {
    cVar8 = -1;
  }
  else if (*(char *)(lVar6 + 0x2930) == -1) {
    cVar8 = '\0';
  }
  else {
    uVar24 = *(uint *)(lVar6 + 4) & 0x80000003;
    if ((int)uVar24 < 0) {
      uVar24 = (uVar24 - 1 | 0xfffffffc) + 1;
    }
    iVar14 = (uint)(uVar24 == 0) + (int)*(char *)(lVar6 + 0x2930);
    cVar8 = (char)iVar14 + (char)(iVar14 / 10) * -10;
  }
  *(char *)(lVar6 + 0x2930) = cVar8;
  lVar15 = *(longlong *)(lVar6 + 0x27f0);
  lVar11 = (longlong)*(int *)(lVar6 + 0x27e8) * 0x20;
  lVar22 = lVar11 + lVar15;
  if (lVar11 != 0) {
    do {
      if (*(int *)(lVar15 + 4) == 1) {
        (**(code **)(lVar15 + 0x10))(lVar6,lVar15);
      }
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != lVar22);
  }
  return;
}



/* ===== 1803e0170 FUN_1803e0170 ===== */

void FUN_1803e0170(int *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar2 = param_1[1];
  if (*param_1 == iVar2) {
    iVar5 = *param_1 + 1;
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    FUN_18000ba20(param_1,iVar5);
  }
  *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 8) = param_2;
  *param_1 = *param_1 + 1;
  if (*(char *)(param_2 + 0xcc) != '\0') {
    uVar1 = *(uint *)(param_2 + 0x1b0);
    if (1 < uVar1) {
      FUN_180519150(*(undefined8 *)(param_2 + 0x1b8),(longlong)(int)uVar1,8,&LAB_1803e0120);
    }
    uVar4 = 0;
    if (0 < (int)uVar1) {
      do {
        if (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x1b8) + uVar4 * 8) + 0xcc) != '\0') {
          FUN_1803e0170(param_1);
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < (int)uVar1);
    }
  }
  return;
}



/* ===== 1803e0240 FUN_1803e0240 ===== */

void FUN_1803e0240(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = **(longlong **)(DAT_180ca0a50 + 0x2058);
  *(int *)(DAT_180ca0a50 + 0xf4) = *(int *)(DAT_180ca0a50 + 0xf4) + 1;
  if (1 < *(int *)(*(longlong *)(param_1 + 0x2c8) + 0x8c)) {
    FUN_1804016a0(*(longlong *)(param_1 + 0x2c8) + 0x88);
  }
  FUN_180401b60(lVar2 + 0x60,*(undefined8 *)(lVar2 + 0xb0 + (longlong)param_2 * 8),
                *(undefined8 *)(param_1 + 0x2c8));
  plVar3 = *(longlong **)(param_1 + 0x1b8);
  plVar1 = plVar3 + *(int *)(param_1 + 0x1b0);
  if (((longlong)*(int *)(param_1 + 0x1b0) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar2 = *plVar3;
      if ((*(char *)(lVar2 + 0xcc) != '\0') && (*(char *)(lVar2 + 0xd4) == '\0')) {
        FUN_1803e0240(lVar2,param_2);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  return;
}



/* ===== 1803e0300 FUN_1803e0300 ===== */

void FUN_1803e0300(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar4 + 0x14f8);
  FUN_1803fc200(*(undefined8 *)(lVar4 + 0x2c8),param_1,param_2,param_3);
  lVar6 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x2c8) + 0xa0);
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x2c8) + 0xa8);
  uVar1 = *(undefined4 *)(lVar5 + -0xc + lVar6 * 0x10);
  uVar2 = *(undefined4 *)(lVar5 + -8 + lVar6 * 0x10);
  uVar3 = *(undefined4 *)(lVar5 + -4 + lVar6 * 0x10);
  *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(lVar5 + -0x10 + lVar6 * 0x10);
  *(undefined4 *)(lVar4 + 0x26c) = uVar1;
  *(undefined4 *)(lVar4 + 0x270) = uVar2;
  *(undefined4 *)(lVar4 + 0x274) = uVar3;
  return;
}



/* ===== 1803e0390 FUN_1803e0390 ===== */

void FUN_1803e0390(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  lVar5 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar5 = *(longlong *)(lVar5 + 0x14f8);
  lVar6 = *(longlong *)(lVar5 + 0x2c8);
  iVar4 = *(int *)(lVar6 + 0xa0);
  iVar7 = iVar4 + -1;
  *(int *)(lVar6 + 0xa0) = iVar7;
  if (iVar7 == 0) {
    puVar8 = (undefined4 *)(*(longlong *)(lVar6 + 0x38) + 0x34);
  }
  else {
    puVar8 = (undefined4 *)((longlong)(iVar4 + -2) * 0x10 + *(longlong *)(lVar6 + 0xa8));
  }
  uVar1 = puVar8[1];
  uVar2 = puVar8[2];
  uVar3 = puVar8[3];
  *(undefined4 *)(lVar6 + 0x60) = *puVar8;
  *(undefined4 *)(lVar6 + 100) = uVar1;
  *(undefined4 *)(lVar6 + 0x68) = uVar2;
  *(undefined4 *)(lVar6 + 0x6c) = uVar3;
  FUN_1803fbff0();
  lVar9 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x2c8) + 0xa0);
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x2c8) + 0xa8);
  uVar1 = *(undefined4 *)(lVar6 + -0xc + lVar9 * 0x10);
  uVar2 = *(undefined4 *)(lVar6 + -8 + lVar9 * 0x10);
  uVar3 = *(undefined4 *)(lVar6 + -4 + lVar9 * 0x10);
  *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(lVar6 + -0x10 + lVar9 * 0x10);
  *(undefined4 *)(lVar5 + 0x26c) = uVar1;
  *(undefined4 *)(lVar5 + 0x270) = uVar2;
  *(undefined4 *)(lVar5 + 0x274) = uVar3;
  return;
}



/* ===== 1803e0450 FUN_1803e0450 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803e0450(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_res18;
  float local_res1c;
  undefined8 local_res20;
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((param_2 & 0xff000000) != 0) {
    uVar3 = *(undefined8 *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 8);
    fVar18 = (float)uVar3;
    fVar19 = (float)((ulonglong)uVar3 >> 0x20);
    uVar3 = *(undefined8 *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
    fVar20 = (float)uVar3 + fVar18;
    fVar21 = (float)((ulonglong)uVar3 >> 0x20) + fVar19;
    piVar5 = *(int **)(*(longlong *)(param_1 + 0x3c0) + 0x2c8);
    local_b0 = CONCAT44(fVar21,fVar20);
    local_b8 = fVar18;
    local_b4 = fVar19;
    if (*piVar5 == 0) {
      FUN_1803fbe60(piVar5);
    }
    local_res20 = CONCAT44(fVar21 + _UNK_1808adc34,fVar20 + _DAT_1808adc30);
    local_res18 = fVar18 - DAT_1808ac34c;
    local_res1c = fVar19 - DAT_1808ac34c;
    FUN_1803fc200(piVar5,&local_res18,&local_res20,0);
    FUN_1803fe590(piVar5,&local_b8,&local_b0,param_2,0,0);
    iVar4 = *piVar5;
    lVar1 = (longlong)iVar4 + -1;
    lVar6 = *(longlong *)(piVar5 + 2);
    iVar17 = iVar4 + -1;
    uVar3 = *(undefined8 *)(lVar6 + 0x40 + lVar1 * 0x48);
    puVar2 = (undefined8 *)(lVar6 + lVar1 * 0x48);
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar1 * 0x48);
    uVar9 = *puVar2;
    uVar10 = puVar2[1];
    puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar1 * 0x48);
    uVar11 = *puVar2;
    uVar12 = puVar2[1];
    puVar2 = (undefined8 *)(lVar6 + 0x30 + lVar1 * 0x48);
    uVar13 = *puVar2;
    uVar14 = puVar2[1];
    *piVar5 = iVar17;
    local_a8 = uVar7;
    uStack_a0 = uVar8;
    local_98 = uVar9;
    uStack_90 = uVar10;
    local_88 = uVar11;
    uStack_80 = uVar12;
    local_78 = uVar13;
    uStack_70 = uVar14;
    local_68 = uVar3;
    if (iVar17 == 0) {
      FUN_1803f7140(piVar5,&local_a8);
    }
    else {
      iVar15 = piVar5[1];
      if (iVar17 == iVar15) {
        if (iVar15 == 0) {
          iVar15 = 8;
        }
        else {
          iVar15 = iVar15 / 2 + iVar15;
        }
        if (iVar4 < iVar15) {
          iVar4 = iVar15;
        }
        FUN_1803f71d0(piVar5,iVar4);
      }
      if (0 < *piVar5) {
        FUN_180540530(*(longlong *)(piVar5 + 2) + 0x48,*(longlong *)(piVar5 + 2),
                      (longlong)*piVar5 * 0x48);
      }
      puVar2 = *(undefined8 **)(piVar5 + 2);
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      puVar2[4] = uVar11;
      puVar2[5] = uVar12;
      puVar2[6] = uVar13;
      puVar2[7] = uVar14;
      puVar2[8] = uVar3;
      *piVar5 = *piVar5 + 1;
    }
    FUN_1803fbe60(piVar5);
    iVar17 = piVar5[0x28];
    iVar4 = iVar17 + -1;
    piVar5[0x28] = iVar4;
    if (iVar4 == 0) {
      piVar16 = (int *)(*(longlong *)(piVar5 + 0xe) + 0x34);
    }
    else {
      piVar16 = (int *)((longlong)(iVar17 + -2) * 0x10 + *(longlong *)(piVar5 + 0x2a));
    }
    iVar4 = piVar16[1];
    iVar17 = piVar16[2];
    iVar15 = piVar16[3];
    piVar5[0x18] = *piVar16;
    piVar5[0x19] = iVar4;
    piVar5[0x1a] = iVar17;
    piVar5[0x1b] = iVar15;
    FUN_1803fbff0(piVar5);
  }
  return;
}



/* ===== 1803e06a0 FUN_1803e06a0 ===== */

void FUN_1803e06a0(void)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  
  lVar15 = DAT_180ca0a50;
  uVar13 = *(int *)(DAT_180ca0a50 + 0x2020) - 1;
  if (-1 < (int)uVar13) {
    do {
      lVar12 = *(longlong *)(*(longlong *)(DAT_180ca0a50 + 0x2028) + 8 + (ulonglong)uVar13 * 0x58);
      if ((((lVar12 != 0) && ((*(uint *)(lVar12 + 0x14) & 0x8000000) != 0)) &&
          (*(char *)(lVar12 + 0xcc) != '\0')) && (*(char *)(lVar12 + 0xd4) == '\0'))
      goto LAB_1803e0704;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  lVar12 = 0;
LAB_1803e0704:
  fVar16 = *(float *)(DAT_180ca0a50 + 0x228c);
  if ((0.0 < fVar16) || (0.0 < *(float *)(DAT_180ca0a50 + 0x226c))) {
    lVar14 = *(longlong *)(DAT_180ca0a50 + 0x2258);
    if ((lVar14 == 0) || (*(char *)(lVar14 + 0xcc) == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (lVar12 == 0) {
      if (bVar5) {
        local_58 = *(undefined4 *)(DAT_180ca0a50 + 0x1190);
        uStack_54 = *(undefined4 *)(DAT_180ca0a50 + 0x1194);
        uStack_50 = *(undefined4 *)(DAT_180ca0a50 + 0x1198);
        fStack_4c = *(float *)(DAT_180ca0a50 + 0x119c) * fVar16 * *(float *)(DAT_180ca0a50 + 0xc9c);
        uVar6 = FUN_1803d7f30(&local_58);
        FUN_1803e0450(lVar14,uVar6);
        lVar12 = *(longlong *)(lVar15 + 0x2258);
        fVar16 = *(float *)(lVar15 + 0x1200);
        fVar20 = *(float *)(lVar12 + 0x28) - fVar16;
        fVar19 = *(float *)(lVar12 + 0x2c) - fVar16;
        lVar14 = **(longlong **)(DAT_180ca0a50 + 0x2058);
        fVar18 = *(float *)(lVar12 + 0x28) + *(float *)(lVar12 + 0x30) + fVar16;
        fVar17 = *(float *)(lVar12 + 0x2c) + *(float *)(lVar12 + 0x34) + fVar16;
        if ((*(float *)(lVar14 + 0x10) <= fVar18 - fVar20) &&
           (*(float *)(lVar14 + 0x14) <= fVar17 - fVar19)) {
          fVar16 = (float)((uint)fVar16 ^ DAT_1808adec0) - DAT_1808ac34c;
          fVar20 = fVar20 - fVar16;
          fVar19 = fVar19 - fVar16;
          fVar18 = fVar18 + fVar16;
          fVar17 = fVar17 + fVar16;
        }
        if (**(int **)(lVar12 + 0x2c8) == 0) {
          FUN_1803fbe60();
        }
        local_res8 = *(float *)(lVar14 + 0x10) + *(float *)(lVar14 + 8);
        local_resc = *(float *)(lVar14 + 0x14) + *(float *)(lVar14 + 0xc);
        FUN_1803fc200(*(undefined8 *)(lVar12 + 0x2c8),(float *)(lVar14 + 8),&local_res8,0);
        local_58 = *(undefined4 *)(DAT_180ca0a50 + 0x1180);
        uStack_54 = *(undefined4 *)(DAT_180ca0a50 + 0x1184);
        uStack_50 = *(undefined4 *)(DAT_180ca0a50 + 0x1188);
        fStack_4c = *(float *)(DAT_180ca0a50 + 0x118c) *
                    *(float *)(DAT_180ca0a50 + 0xc9c) * *(float *)(lVar15 + 0x226c);
        uVar13 = FUN_1803d7f30(&local_58);
        if ((uVar13 & 0xff000000) != 0) {
          lVar15 = *(longlong *)(lVar12 + 0x2c8);
          local_res10 = fVar20 + DAT_1808ac1f4;
          local_res14 = fVar19 + DAT_1808ac1f4;
          local_resc = DAT_1808ac1f4;
          if ((*(byte *)(lVar15 + 0x30) & 1) == 0) {
            local_resc = DAT_1808ac1e0;
          }
          local_res8 = fVar18 - local_resc;
          local_resc = fVar17 - local_resc;
          FUN_1803fe160(lVar15,&local_res10,&local_res8,*(undefined4 *)(lVar12 + 0x60),0);
          FUN_1803fc600(lVar15,*(undefined8 *)(lVar15 + 0x58),*(undefined4 *)(lVar15 + 0x50),uVar13,
                        DAT_1808ac658,0x200);
          *(undefined4 *)(lVar15 + 0x50) = 0;
        }
        lVar15 = *(longlong *)(lVar12 + 0x2c8);
        iVar1 = *(int *)(lVar15 + 0xa0);
        iVar7 = iVar1 + -1;
        *(int *)(lVar15 + 0xa0) = iVar7;
        if (iVar7 == 0) {
          lVar12 = *(longlong *)(lVar15 + 0x38);
          uVar6 = *(undefined4 *)(lVar12 + 0x38);
          uVar3 = *(undefined4 *)(lVar12 + 0x3c);
          uVar4 = *(undefined4 *)(lVar12 + 0x40);
          *(undefined4 *)(lVar15 + 0x60) = *(undefined4 *)(lVar12 + 0x34);
          *(undefined4 *)(lVar15 + 100) = uVar6;
          *(undefined4 *)(lVar15 + 0x68) = uVar3;
          *(undefined4 *)(lVar15 + 0x6c) = uVar4;
          FUN_1803fbff0();
          return;
        }
        puVar8 = (undefined4 *)((longlong)(iVar1 + -2) * 0x10 + *(longlong *)(lVar15 + 0xa8));
        uVar6 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *(undefined4 *)(lVar15 + 0x60) = *puVar8;
        *(undefined4 *)(lVar15 + 100) = uVar6;
        *(undefined4 *)(lVar15 + 0x68) = uVar3;
        *(undefined4 *)(lVar15 + 0x6c) = uVar4;
        FUN_1803fbff0();
        return;
      }
    }
    else {
      plVar2 = *(longlong **)(DAT_180ca0a50 + 0x14a0);
      for (plVar10 = plVar2;
          (plVar10 < plVar2 + *(int *)(DAT_180ca0a50 + 0x1498) && (*plVar10 != lVar12));
          plVar10 = plVar10 + 1) {
      }
      uVar11 = (longlong)plVar10 - (longlong)plVar2 >> 3;
      uVar13 = (uint)uVar11;
      lVar15 = lVar12;
      while (-1 < (int)uVar13) {
        lVar14 = plVar2[uVar11 & 0xffffffff];
        if ((*(uint *)(lVar14 + 0x14) >> 0x18 & 1) == 0) {
          lVar9 = lVar14;
          if (*(longlong *)(lVar14 + 0x3c0) != lVar12) {
            while (lVar9 != lVar12) {
              lVar9 = *(longlong *)(lVar9 + 0x3b8);
              if (lVar9 == 0) goto LAB_1803e0a93;
            }
          }
          if (((*(char *)(lVar14 + 0xcc) != '\0') && (*(char *)(lVar14 + 0xd4) == '\0')) &&
             (((byte)(*(uint *)(lVar14 + 0x14) >> 0x19) & 1) <=
              ((byte)((uint)*(undefined4 *)(lVar12 + 0x14) >> 0x19) & 1))) {
            lVar15 = lVar14;
          }
        }
        uVar13 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar13;
      }
LAB_1803e0a93:
      fVar16 = fVar16 * *(float *)(DAT_180ca0a50 + 0xc9c);
      uVar13 = *(uint *)(lVar12 + 0x1dc);
      if (fVar16 < DAT_1808ac34c) {
        uVar13 = (int)(longlong)((float)(uVar13 >> 0x18) * fVar16) << 0x18 | uVar13 & 0xffffff;
      }
      FUN_1803e0450(lVar15,uVar13);
    }
  }
  return;
}



/* ===== 1803e0af0 FUN_1803e0af0 ===== */

void FUN_1803e0af0(void)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  short sVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  
  lVar8 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 8) != *(int *)(DAT_180ca0a50 + 4)) {
    if (*(char *)(DAT_180ca0a50 + 1) == '\0') {
      FUN_1803ebc00("Forgot to call ImGui::NewFrame()?");
      return;
    }
    lVar15 = *(longlong *)(DAT_180ca0a50 + 0x27f0);
    lVar10 = (longlong)*(int *)(DAT_180ca0a50 + 0x27e8) * 0x20;
    lVar1 = lVar10 + lVar15;
    if (lVar10 != 0) {
      do {
        if (*(int *)(lVar15 + 4) == 2) {
          (**(code **)(lVar15 + 0x10))(lVar8,lVar15);
        }
        lVar15 = lVar15 + 0x20;
      } while (lVar15 != lVar1);
    }
    lVar1 = DAT_180ca0a50;
    if (*(char *)(lVar8 + 0xac) != '\0') {
      sVar11 = *(short *)(lVar8 + 0x28d0);
      iVar12 = *(int *)(DAT_180ca0a50 + 0x14c8);
      if (sVar11 < iVar12) {
        do {
          if ((*(uint *)(*(longlong *)(lVar1 + 0x14f8) + 0x14) & 0x1000000) == 0) {
            FUN_1803ebc00("Missing End()");
            FUN_1803e75b0();
          }
          else if ((*(longlong *)(lVar1 + 0x2360) == 0) ||
                  (*(longlong *)(*(longlong *)(lVar1 + 0x2360) + 0x188) !=
                   *(longlong *)(lVar1 + 0x14f8))) {
            FUN_1803ebc00("Missing EndChild()");
            FUN_1803e1bc0();
          }
          else {
            FUN_1803ebc00("Missing EndTable()");
            FUN_18040e8a0();
          }
          sVar11 = *(short *)(lVar8 + 0x28d0);
          iVar12 = *(int *)(lVar1 + 0x14c8);
        } while (sVar11 < iVar12);
      }
      if (iVar12 == sVar11) {
        FUN_1803eb5f0(lVar8 + 0x28d0);
      }
    }
    FUN_1803ebdf0();
    if ((*(longlong *)(lVar8 + 0xc38) != 0) &&
       (((*(longlong *)(lVar8 + 0x2768) != *(longlong *)(lVar8 + 0x277c) ||
         (*(longlong *)(lVar8 + 0x2770) != *(longlong *)(lVar8 + 0x2784))) ||
        (*(int *)(lVar8 + 0x2778) != *(int *)(lVar8 + 0x278c))))) {
      puVar5 = (undefined4 *)**(undefined8 **)(DAT_180ca0a50 + 0x2058);
      if ((*(byte *)(lVar8 + 0x28f4) & 0x80) != 0) {
        FUN_1803f5060("[io] Calling Platform_SetImeDataFn(): WantVisible: %d, InputPos (%.2f,%.2f) for Viewport 0x%08X\n"
                      ,*(undefined1 *)(lVar8 + 0x2768),(double)*(float *)(lVar8 + 0x276c),
                      (double)*(float *)(lVar8 + 0x2770),*puVar5);
      }
      (**(code **)(lVar8 + 0xc38))(lVar8,puVar5,lVar8 + 0x2768);
    }
    *(undefined1 *)(lVar8 + 2) = 0;
    *(uint *)(lVar8 + 0x2af4) = (uint)(*(char *)(lVar8 + 0x2769) != '\0');
    lVar1 = *(longlong *)(lVar8 + 0x14f8);
    if (((lVar1 != 0) && (*(char *)(lVar1 + 0xd5) != '\0')) && (*(char *)(lVar1 + 0xce) == '\0')) {
      *(undefined1 *)(lVar1 + 0xcc) = 0;
      if ((*(longlong *)(lVar8 + 0x2068) != 0) &&
         (*(longlong *)(*(longlong *)(lVar8 + 0x2068) + 0x3c0) == *(longlong *)(lVar8 + 0x14f8))) {
        FUN_1803ef030(0,0);
      }
    }
    FUN_1803e75b0();
    lVar1 = DAT_180ca0a50;
    if (*(longlong *)(DAT_180ca0a50 + 0x2250) != 0) {
      FUN_1803f34b0();
    }
    if (((((*(longlong *)(lVar1 + 0x2068) != 0) && (*(char *)(DAT_180ca0a50 + 0x2109) != '\0')) &&
         (*(int *)(DAT_180ca0a50 + 0x2158) == 0)) &&
        ((*(int *)(DAT_180ca0a50 + 0x21c8) == 0 &&
         (uVar3 = *(uint *)(lVar1 + 0x210c), (uVar3 & 0xf) != 0)))) && (-1 < (char)uVar3)) {
      FUN_1803f26a0();
    }
    if (*(char *)(lVar8 + 0x2290) != '\0') {
      if ((*(int *)(lVar8 + 0x2298) + 1 < *(int *)(lVar8 + 4)) &&
         ((((*(byte *)(lVar8 + 0x2294) & 0x20) != 0 || (*(int *)(lVar8 + 0x229c) == -1)) ||
          (cVar9 = FUN_1803e95e0(), cVar9 == '\0')))) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if ((*(char *)(lVar8 + 0x22da) != '\0') || (bVar7)) {
        FUN_1803f3710();
      }
      if (((*(char *)(lVar8 + 0x2290) != '\0') &&
          (*(int *)(lVar8 + 0x2298) + 1 < *(int *)(lVar8 + 4))) &&
         ((*(byte *)(lVar8 + 0x2294) & 1) == 0)) {
        *(undefined1 *)(lVar8 + 0x2291) = 1;
        FUN_1803ed810(&DAT_1806eaba4);
        *(undefined1 *)(lVar8 + 0x2291) = 0;
      }
    }
    lVar1 = DAT_180ca0a50;
    *(undefined1 *)(lVar8 + 1) = 0;
    *(undefined4 *)(lVar8 + 8) = *(undefined4 *)(lVar8 + 4);
    lVar15 = (longlong)*(int *)(lVar1 + 0x1fe0);
    if (*(int *)(lVar1 + 0x1fe0) < 1) {
      FUN_1803ebc00("Calling PopFont() too many times!");
    }
    else {
      lVar10 = *(longlong *)(lVar1 + 0x1fe8);
      FUN_1803e8680(*(undefined8 *)(lVar10 + -0x10 + lVar15 * 0x10),
                    *(undefined4 *)(lVar10 + -8 + lVar15 * 0x10),
                    *(undefined4 *)(lVar10 + -4 + lVar15 * 0x10));
      *(int *)(lVar1 + 0x1fe0) = *(int *)(lVar1 + 0x1fe0) + -1;
    }
    FUN_1803de1b0();
    iVar12 = *(int *)(lVar8 + 0x14bc);
    puVar5 = (undefined4 *)(lVar8 + 0x14b8);
    if (iVar12 < 0) {
      iVar12 = iVar12 + iVar12 / 2;
      iVar14 = 0;
      if (0 < iVar12) {
        iVar14 = iVar12;
      }
      FUN_18000ba20(puVar5,iVar14);
    }
    *puVar5 = 0;
    FUN_18000ba20(puVar5,*(undefined4 *)(lVar8 + 0x1498));
    plVar13 = *(longlong **)(lVar8 + 0x14a0);
    plVar2 = plVar13 + *(int *)(lVar8 + 0x1498);
    if (((longlong)*(int *)(lVar8 + 0x1498) & 0x1fffffffffffffffU) != 0) {
      do {
        if ((*(char *)(*plVar13 + 0xcc) == '\0') || ((*(uint *)(*plVar13 + 0x14) & 0x1000000) == 0))
        {
          FUN_1803e0170(puVar5);
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar2);
    }
    uVar4 = *puVar5;
    *puVar5 = *(undefined4 *)(lVar8 + 0x1498);
    *(undefined4 *)(lVar8 + 0x1498) = uVar4;
    uVar4 = *(undefined4 *)(lVar8 + 0x14bc);
    *(undefined4 *)(lVar8 + 0x14bc) = *(undefined4 *)(lVar8 + 0x149c);
    *(undefined4 *)(lVar8 + 0x149c) = uVar4;
    uVar6 = *(undefined8 *)(lVar8 + 0x14c0);
    *(undefined8 *)(lVar8 + 0x14c0) = *(undefined8 *)(lVar8 + 0x14a0);
    *(undefined4 *)(lVar8 + 0xf8) = *(undefined4 *)(lVar8 + 0x14e8);
    *(undefined8 *)(lVar8 + 0x14a0) = uVar6;
    FUN_1803e81e0();
    plVar13 = *(longlong **)(lVar8 + 0x11e8);
    plVar2 = plVar13 + *(int *)(lVar8 + 0x11e0);
    if (((longlong)*(int *)(lVar8 + 0x11e0) & 0x1fffffffffffffffU) != 0) {
      do {
        lVar1 = *plVar13;
        plVar13 = plVar13 + 1;
        *(undefined1 *)(lVar1 + 0x50) = 0;
      } while (plVar13 != plVar2);
    }
    *(undefined8 *)(lVar8 + 0xae8) = *(undefined8 *)(lVar8 + 0x110);
    *(undefined1 *)(lVar8 + 0xbdc) = 0;
    *(undefined8 *)(lVar8 + 0x120) = 0;
    iVar12 = *(int *)(lVar8 + 0xbe4);
    if (iVar12 < 0) {
      iVar12 = iVar12 + iVar12 / 2;
      iVar14 = 0;
      if (0 < iVar12) {
        iVar14 = iVar12;
      }
      FUN_1803f6b20(lVar8 + 0xbe0,iVar14);
    }
    *(undefined4 *)(lVar8 + 0xbe0) = 0;
    lVar15 = *(longlong *)(lVar8 + 0x27f0);
    lVar10 = (longlong)*(int *)(lVar8 + 0x27e8) * 0x20;
    lVar1 = lVar10 + lVar15;
    if (lVar10 != 0) {
      do {
        if (*(int *)(lVar15 + 4) == 3) {
          (**(code **)(lVar15 + 0x10))(lVar8,lVar15);
        }
        lVar15 = lVar15 + 0x20;
      } while (lVar15 != lVar1);
    }
  }
  return;
}



/* ===== 1803e1010 FUN_1803e1010 ===== */

void FUN_1803e1010(void)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  
  lVar7 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 8) != *(int *)(DAT_180ca0a50 + 4)) {
    FUN_1803e0af0();
  }
  if (*(int *)(lVar7 + 0xc) != *(int *)(lVar7 + 4)) {
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 4);
    *(undefined4 *)(lVar7 + 0xf4) = 0;
    lVar13 = *(longlong *)(lVar7 + 0x27f0);
    lVar10 = (longlong)*(int *)(lVar7 + 0x27e8) * 0x20;
    lVar16 = lVar10 + lVar13;
    if (lVar10 != 0) {
      do {
        if (*(int *)(lVar13 + 4) == 4) {
          (**(code **)(lVar13 + 0x10))(lVar7,lVar13);
        }
        lVar13 = lVar13 + 0x20;
      } while (lVar13 != lVar16);
    }
    plVar14 = *(longlong **)(lVar7 + 0x2058);
    plVar2 = plVar14 + *(int *)(lVar7 + 0x2050);
    if (((longlong)*(int *)(lVar7 + 0x2050) & 0x1fffffffffffffffU) != 0) {
      do {
        lVar13 = DAT_180ca0a50;
        lVar16 = *plVar14;
        puVar1 = (undefined4 *)(lVar16 + 0x70);
        *(undefined4 **)(lVar16 + 0xb0) = puVar1;
        *(longlong *)(lVar16 + 0xb8) = lVar16 + 0xc0;
        iVar8 = *(int *)(lVar16 + 0x74);
        if (iVar8 < 0) {
          iVar8 = (iVar8 + 1 >> 1) + iVar8;
          iVar9 = 0;
          if (0 < iVar8) {
            iVar9 = iVar8;
          }
          FUN_18000ba20(puVar1,iVar9);
        }
        *puVar1 = 0;
        puVar1 = *(undefined4 **)(lVar16 + 0xb8);
        iVar8 = puVar1[1];
        if (iVar8 < 0) {
          iVar8 = (iVar8 + 1 >> 1) + iVar8;
          iVar9 = 0;
          if (0 < iVar8) {
            iVar9 = iVar8;
          }
          FUN_18000ba20(puVar1,iVar9);
        }
        *puVar1 = 0;
        *(undefined1 *)(lVar16 + 0x60) = 1;
        *(undefined4 *)(lVar16 + 100) = *(undefined4 *)(lVar13 + 4);
        *(undefined8 *)(lVar16 + 0x68) = 0;
        *(undefined8 *)(lVar16 + 0x80) = *(undefined8 *)(lVar16 + 8);
        *(undefined8 *)(lVar16 + 0x88) = *(undefined8 *)(lVar16 + 0x10);
        *(undefined8 *)(lVar16 + 0x90) = *(undefined8 *)(lVar13 + 0x38);
        *(longlong *)(lVar16 + 0x98) = lVar16;
        *(longlong *)(lVar16 + 0xa0) = lVar13 + 0xc80;
        *(undefined4 *)(lVar16 + 0xa8) = 0;
        if ((*(longlong *)(lVar16 + 0x40) != 0) && (*(int *)(lVar16 + 0x50) == *(int *)(lVar7 + 4)))
        {
          uVar11 = FUN_1803ddf50(lVar16,0,"##Background");
          FUN_180401b60(lVar16 + 0x60,*(undefined8 *)(lVar16 + 0xb0),uVar11);
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar2);
    }
    FUN_1803e06a0();
    lVar16 = *(longlong *)(lVar7 + 0x2250);
    if ((lVar16 == 0) || ((*(uint *)(lVar16 + 0x14) & 0x2000) != 0)) {
      lVar13 = 0;
      if (lVar16 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)(lVar7 + 0x2260);
      }
    }
    else {
      lVar13 = *(longlong *)(lVar16 + 0x3c0);
      lVar16 = *(longlong *)(lVar7 + 0x2260);
    }
    plVar14 = *(longlong **)(lVar7 + 0x14a0);
    plVar2 = plVar14 + *(int *)(lVar7 + 0x1498);
    if (((longlong)*(int *)(lVar7 + 0x1498) & 0x1fffffffffffffffU) != 0) {
      do {
        lVar10 = *plVar14;
        if ((((*(char *)(lVar10 + 0xcc) != '\0') && (*(char *)(lVar10 + 0xd4) == '\0')) &&
            ((*(uint *)(lVar10 + 0x14) >> 0x18 & 1) == 0)) &&
           ((lVar10 != lVar13 && (lVar10 != lVar16)))) {
          FUN_1803e0240(lVar10,*(uint *)(lVar10 + 0x14) >> 0x19 & 1);
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar2);
    }
    if (((lVar13 != 0) && (*(char *)(lVar13 + 0xcc) != '\0')) && (*(char *)(lVar13 + 0xd4) == '\0'))
    {
      FUN_1803e0240(lVar13,*(uint *)(lVar13 + 0x14) >> 0x19 & 1);
    }
    if (((lVar16 != 0) && (*(char *)(lVar16 + 0xcc) != '\0')) && (*(char *)(lVar16 + 0xd4) == '\0'))
    {
      FUN_1803e0240(lVar16,*(uint *)(lVar16 + 0x14) >> 0x19 & 1);
    }
    if ((*(char *)(lVar7 + 0x8d) != '\0') && (*(int *)(lVar7 + 0x2500) != -1)) {
      FUN_1803da4c0(*(undefined8 *)(lVar7 + 0x110),*(undefined4 *)(lVar7 + 0xdc4));
    }
    *(undefined8 *)(lVar7 + 0xec) = 0;
    plVar14 = *(longlong **)(lVar7 + 0x2058);
    plVar2 = plVar14 + *(int *)(lVar7 + 0x2050);
    if (((longlong)*(int *)(lVar7 + 0x2050) & 0x1fffffffffffffffU) != 0) {
      do {
        lVar16 = *plVar14;
        piVar4 = *(int **)(lVar16 + 0xb0);
        iVar8 = *piVar4;
        iVar9 = piVar4[1];
        iVar15 = **(int **)(lVar16 + 0xb8) + iVar8;
        if (iVar9 < iVar15) {
          if (iVar9 == 0) {
            iVar9 = 8;
          }
          else {
            iVar9 = iVar9 / 2 + iVar9;
          }
          iVar6 = iVar15;
          if (iVar15 < iVar9) {
            iVar6 = iVar9;
          }
          FUN_18000ba20(piVar4,iVar6);
        }
        *piVar4 = iVar15;
        piVar4 = *(int **)(lVar16 + 0xb8);
        if (*piVar4 != 0) {
          FUN_180540530(*(longlong *)(*(longlong *)(lVar16 + 0xb0) + 8) + (longlong)iVar8 * 8,
                        *(undefined8 *)(piVar4 + 2),(longlong)*piVar4 << 3);
          iVar8 = piVar4[1];
          if (iVar8 < 0) {
            iVar8 = (iVar8 + 1 >> 1) + iVar8;
            iVar9 = 0;
            if (0 < iVar8) {
              iVar9 = iVar8;
            }
            FUN_18000ba20(piVar4,iVar9);
          }
          *piVar4 = 0;
        }
        if ((*(longlong *)(lVar16 + 0x48) != 0) && (*(int *)(lVar16 + 0x54) == *(int *)(lVar7 + 4)))
        {
          uVar11 = FUN_1803ddf50(lVar16,1,"##Foreground");
          FUN_180401b60(lVar16 + 0x60,*(undefined8 *)(lVar16 + 0xb0),uVar11);
        }
        puVar17 = *(undefined8 **)(lVar16 + 0x78);
        puVar3 = puVar17 + *(int *)(lVar16 + 0x70);
        for (; puVar17 != puVar3; puVar17 = puVar17 + 1) {
          puVar5 = (uint *)*puVar17;
          uVar12 = *puVar5;
          while (0 < (int)uVar12) {
            if ((*(int *)(*(longlong *)(puVar5 + 2) + -0x20 + (ulonglong)uVar12 * 0x48) != 0) ||
               (*(longlong *)(*(longlong *)(puVar5 + 2) + -0x18 + (ulonglong)uVar12 * 0x48) != 0))
            break;
            uVar12 = uVar12 - 1;
            *puVar5 = uVar12;
          }
        }
        plVar14 = plVar14 + 1;
        *(undefined4 *)(lVar16 + 0xa8) = *(undefined4 *)(lVar16 + 0x70);
        *(int *)(lVar7 + 0xec) = *(int *)(lVar7 + 0xec) + *(int *)(lVar16 + 0x6c);
        *(int *)(lVar7 + 0xf0) = *(int *)(lVar7 + 0xf0) + *(int *)(lVar16 + 0x68);
      } while (plVar14 != plVar2);
    }
    if ((*(byte *)(lVar7 + 0x2c) & 0x10) != 0) {
      plVar14 = *(longlong **)(lVar7 + 0x11e8);
      plVar2 = plVar14 + *(int *)(lVar7 + 0x11e0);
      if (((longlong)*(int *)(lVar7 + 0x11e0) & 0x1fffffffffffffffU) != 0) {
        do {
          puVar17 = *(undefined8 **)(*plVar14 + 0x48);
          puVar3 = puVar17 + *(int *)(*plVar14 + 0x40);
          for (; puVar17 != puVar3; puVar17 = puVar17 + 1) {
            puVar1 = (undefined4 *)*puVar17;
            iVar8 = puVar1[1];
            if (iVar8 == 2) {
              if ((DAT_180ca0a50 != 0) && ((*(uint *)(DAT_180ca0a50 + 0x28f4) & 0x100) != 0)) {
                FUN_1803f5060("[font] Texture #%03d: create %dx%d\n",*puVar1,puVar1[9],puVar1[10]);
              }
            }
            else if (iVar8 == 4) {
              if ((DAT_180ca0a50 != 0) && ((*(uint *)(DAT_180ca0a50 + 0x28f4) & 0x100) != 0)) {
                FUN_1803f5060("[font] Texture #%03d: destroy %dx%d, texid=0x%I64X, backend_data=%p\n"
                              ,*puVar1,puVar1[9],puVar1[10],*(undefined8 *)(puVar1 + 6),
                              *(undefined8 *)(puVar1 + 2));
              }
            }
            else if (((iVar8 == 3) && (DAT_180ca0a50 != 0)) &&
                    ((*(uint *)(DAT_180ca0a50 + 0x28f4) & 0x100) != 0)) {
              FUN_1803f5060("[font] Texture #%03d: update %d regions, texid=0x%I64X, backend_data=0x%I64X\n"
                            ,*puVar1,puVar1[0x12],*(undefined8 *)(puVar1 + 6),
                            *(undefined8 *)(puVar1 + 2));
            }
          }
          plVar14 = plVar14 + 1;
        } while (plVar14 != plVar2);
      }
    }
    lVar13 = *(longlong *)(lVar7 + 0x27f0);
    lVar10 = (longlong)*(int *)(lVar7 + 0x27e8) * 0x20;
    lVar16 = lVar10 + lVar13;
    if (lVar10 != 0) {
      do {
        if (*(int *)(lVar13 + 4) == 5) {
          (**(code **)(lVar13 + 0x10))(lVar7,lVar13);
        }
        lVar13 = lVar13 + 0x20;
      } while (lVar13 != lVar16);
    }
  }
  return;
}



/* ===== 1803e15d0 FUN_1803e15d0 ===== */

void FUN_1803e15d0(float *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  
  lVar11 = 0;
  lVar6 = *(longlong *)(DAT_180ca0a50 + 0x1518);
  lVar8 = 0;
  if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x14) & 0x200) == 0)) {
    lVar8 = lVar6;
  }
  fVar13 = *(float *)(DAT_180ca0a50 + 0xcb4);
  fVar1 = *(float *)(DAT_180ca0a50 + 0xd04);
  fVar2 = fVar1;
  if (fVar1 <= fVar13) {
    fVar2 = fVar13;
  }
  uVar10 = *(int *)(DAT_180ca0a50 + 0x1498) - 1;
  fVar3 = *(float *)(DAT_180ca0a50 + 0xd08);
  if (*(float *)(DAT_180ca0a50 + 0xd08) <= fVar13) {
    fVar3 = fVar13;
  }
  if (-1 < (int)uVar10) {
    lVar9 = lVar8;
    do {
      lVar7 = *(longlong *)(*(longlong *)(DAT_180ca0a50 + 0x14a0) + (ulonglong)uVar10 * 8);
      lVar8 = lVar9;
      if (((*(char *)(lVar7 + 0xcd) != '\0') && (*(char *)(lVar7 + 0xd4) == '\0')) &&
         ((*(uint *)(lVar7 + 0x14) >> 9 & 1) == 0)) {
        fVar13 = fVar2;
        fVar12 = fVar3;
        if ((*(uint *)(lVar7 + 0x14) & 0x42) != 0) {
          fVar13 = fVar1;
          fVar12 = *(float *)(DAT_180ca0a50 + 0xd08);
        }
        fVar4 = *param_1;
        if (((*(float *)(lVar7 + 0x218) - fVar13 <= fVar4) &&
            (fVar5 = param_1[1], *(float *)(lVar7 + 0x21c) - fVar12 <= fVar5)) &&
           ((fVar4 < fVar13 + *(float *)(lVar7 + 0x220) &&
            (fVar5 < fVar12 + *(float *)(lVar7 + 0x224))))) {
          if (*(short *)(lVar7 + 0x288) != 0) {
            fVar13 = (float)(int)*(short *)(lVar7 + 0x28c) + *(float *)(lVar7 + 0x28);
            if (((fVar13 <= fVar4) &&
                (fVar12 = (float)(int)*(short *)(lVar7 + 0x28e) + *(float *)(lVar7 + 0x2c),
                fVar12 <= fVar5)) &&
               ((fVar4 < (float)(int)*(short *)(lVar7 + 0x288) + fVar13 &&
                (fVar5 < (float)(int)*(short *)(lVar7 + 0x28a) + fVar12)))) goto LAB_1803e17c2;
          }
          lVar8 = lVar7;
          if (lVar9 != 0) {
            lVar8 = lVar9;
          }
          if ((lVar11 == 0) &&
             ((lVar6 == 0 || (*(longlong *)(lVar7 + 0x3c0) != *(longlong *)(lVar6 + 0x3c0))))) {
            lVar11 = lVar7;
          }
          if ((lVar8 != 0) && (lVar11 != 0)) break;
        }
      }
LAB_1803e17c2:
      uVar10 = uVar10 - 1;
      lVar9 = lVar8;
    } while (-1 < (int)uVar10);
  }
  *param_3 = lVar8;
  if (param_4 != (longlong *)0x0) {
    *param_4 = lVar11;
  }
  return;
}



/* ===== 1803e1800 FUN_1803e1800 ===== */

undefined1
FUN_1803e1800(longlong param_1,uint param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float local_res8;
  float fStackX_c;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar14;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  lVar2 = DAT_180ca0a50;
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if ((*(uint *)(DAT_180ca0a50 + 0x1f38) & 0x200) != 0) {
    param_4 = (param_4 | *(uint *)(DAT_180ca0a50 + 0x1f78)) & ~*(uint *)(DAT_180ca0a50 + 0x1f7c);
  }
  uVar9 = param_4 & 0xfffffffb;
  if ((param_4 & 0x10) == 0) {
    uVar9 = param_4;
  }
  uVar10 = uVar9 & 0xfffffff7;
  if ((uVar9 & 0x20) == 0) {
    uVar10 = uVar9;
  }
  uVar9 = 0x1000041;
  if ((uVar10 & 0x70) == 0) {
    uVar9 = 0x1000001;
  }
  if (((uVar10 & 0xc) == 0) && (uVar9 = 0x1000143, (uVar10 & 0x70) == 0)) {
    uVar9 = 0x1000103;
  }
  if ((char)uVar10 < '\0') {
    local_74 = *(undefined4 *)(DAT_180ca0a50 + 0xe10);
    uStack_70 = *(undefined4 *)(DAT_180ca0a50 + 0xe14);
    uStack_6c = *(undefined4 *)(DAT_180ca0a50 + 0xe18);
    uStack_68 = *(undefined4 *)(DAT_180ca0a50 + 0xe1c);
    local_78 = 3;
    FUN_1803f64b0(DAT_180ca0a50 + 0x1fc0,&local_78);
    if (*(int *)(lVar2 + 0x1fbc) != 3) {
      *(undefined4 *)(lVar2 + 0xe10) = *(undefined4 *)(lVar2 + 0xe50);
      *(undefined4 *)(lVar2 + 0xe14) = *(undefined4 *)(lVar2 + 0xe54);
      *(undefined4 *)(lVar2 + 0xe18) = *(undefined4 *)(lVar2 + 0xe58);
      *(undefined4 *)(lVar2 + 0xe1c) = *(undefined4 *)(lVar2 + 0xe5c);
    }
    FUN_1803d8870(7,*(undefined4 *)(lVar2 + 0xce4));
    FUN_1803d8870(8,*(undefined4 *)(lVar2 + 0xce8));
    FUN_1803d89a0(2,lVar2 + 0xcdc);
    uVar10 = uVar10 | 3;
    uVar9 = uVar9 | 4;
  }
  else {
    uVar9 = *(uint *)(lVar1 + 0x14) & 4 | uVar9;
  }
  lVar11 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if ((*(longlong *)(lVar11 + 0x1c8) == 0) && (*(longlong *)(DAT_180ca0a50 + 0x2360) == 0)) {
    lVar7 = 0x280;
    lVar6 = 0x284;
  }
  else {
    lVar7 = 0x250;
    lVar6 = 0x254;
  }
  if ((uVar10 & 0x20) == 0) {
    fVar13 = *(float *)(lVar6 + lVar11) - *(float *)(lVar11 + 0x11c);
  }
  else {
    fVar13 = 0.0;
  }
  if ((uVar10 & 0x10) == 0) {
    fVar12 = *(float *)(lVar7 + lVar11) - *(float *)(lVar11 + 0x118);
  }
  else {
    fVar12 = 0.0;
  }
  lVar11 = DAT_180ca0a50;
  FUN_1803ec8b0(&local_res8,*param_3,fVar12,fVar13);
  if (((*(byte *)(lVar2 + 0x1f38) & 2) != 0) && ((*(byte *)(lVar2 + 8000) & 1) != 0)) {
    fVar13 = *(float *)(lVar2 + 0x1f58);
    if (0.0 < fVar13) {
      local_res8 = fVar13;
    }
    uVar3 = uVar10 & 0xfffffffb;
    if (fVar13 <= 0.0) {
      uVar3 = uVar10;
    }
    uVar10 = uVar3;
    if (0.0 < *(float *)(lVar2 + 0x1f5c)) {
      uVar10 = uVar10 & 0xfffffff7;
      fStackX_c = *(float *)(lVar2 + 0x1f5c);
    }
  }
  *(ulonglong *)(lVar11 + 0x1f58) = CONCAT44(fStackX_c,local_res8);
  *(undefined4 *)(lVar11 + 8000) = 1;
  if ((*(uint *)(lVar11 + 0x1f38) >> 9 & 1) == 0) {
    *(undefined8 *)(lVar11 + 0x1f78) = 0;
  }
  *(uint *)(lVar11 + 0x1f78) = *(uint *)(lVar11 + 0x1f78) | uVar10;
  *(uint *)(lVar11 + 0x1f38) = *(uint *)(lVar11 + 0x1f38) | 0x202;
  *(uint *)(lVar11 + 0x1f7c) = *(uint *)(lVar11 + 0x1f7c) & ~uVar10;
  if (param_1 == 0) {
    FUN_1803d7690(&local_res8,0,"%s/%08X",*(undefined8 *)(lVar1 + 8),CONCAT44(uVar14,param_2));
  }
  else {
    FUN_1803d7690(&local_res8,0,"%s/%s_%08X",*(undefined8 *)(lVar1 + 8),param_1,param_2);
  }
  uVar14 = *(undefined4 *)(lVar2 + 0xcd0);
  if ((uVar10 & 1) == 0) {
    *(undefined4 *)(lVar2 + 0xcd0) = 0;
  }
  uVar4 = FUN_1803e4f20(CONCAT44(fStackX_c,local_res8),0,param_5 | uVar9);
  *(undefined4 *)(lVar2 + 0xcd0) = uVar14;
  if ((char)uVar10 < '\0') {
    FUN_1803d8a40(3);
    FUN_1803d87f0(1);
  }
  lVar11 = *(longlong *)(lVar2 + 0x14f8);
  *(uint *)(lVar11 + 0x90) = param_2;
  if (*(short *)(lVar11 + 0xda) == 1) {
    *(undefined8 *)(lVar1 + 0x118) = *(undefined8 *)(lVar11 + 0x28);
  }
  pbVar8 = &DAT_1808a7901;
  bVar5 = 0x23;
  uVar9 = ~param_2;
  do {
    if (((bVar5 == 0x23) && (*pbVar8 == 0x23)) && (pbVar8[1] == 0x23)) {
      pbVar8 = pbVar8 + 2;
      uVar9 = ~param_2;
    }
    else {
      uVar9 = uVar9 >> 8 ^
              *(uint *)(&DAT_1806c25c0 + ((ulonglong)uVar9 & 0xff ^ (ulonglong)bVar5) * 4);
    }
    bVar5 = *pbVar8;
    pbVar8 = pbVar8 + 1;
  } while (bVar5 != 0);
  if (*(uint *)(lVar2 + 0x1578) == ~uVar9) {
    FUN_1803dd660(0,0);
  }
  if (((*(uint *)(lVar2 + 0x207c) == param_2) && ((uVar10 >> 8 & 1) == 0)) &&
     ((*(short *)(lVar11 + 0x174) != 0 || (*(char *)(lVar11 + 0x17a) != '\0')))) {
    FUN_1803ef030(lVar11,0);
    FUN_1803f0510(lVar11,0);
    FUN_1803dd660(~uVar9,lVar11);
    *(undefined4 *)(lVar2 + 0x159c) = *(undefined4 *)(lVar2 + 0x20b8);
  }
  return uVar4;
}



/* ===== 1803e1bc0 FUN_1803e1bc0 ===== */

void FUN_1803e1bc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  undefined8 local_res8;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  lVar7 = DAT_180ca0a50;
  lVar5 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  uVar3 = *(undefined4 *)(DAT_180ca0a50 + 0x1460);
  *(undefined4 *)(DAT_180ca0a50 + 0x1460) = *(undefined4 *)(lVar5 + 0x10);
  local_res8 = *(undefined8 *)(lVar5 + 0x30);
  fVar9 = (float)local_res8;
  FUN_1803e75b0();
  lVar6 = DAT_180ca0a50;
  uVar4 = DAT_1808acda0;
  if (*(short *)(lVar5 + 0xda) == 1) {
    lVar6 = *(longlong *)(lVar7 + 0x14f8);
    local_48 = *(float *)(lVar6 + 0x118);
    local_44 = *(float *)(lVar6 + 0x11c);
    local_40 = local_48 + fVar9;
    local_3c = local_res8._4_4_ + *(float *)(lVar6 + 0x11c);
    FUN_1803ec550(&local_res8,DAT_1808acda0);
    uVar8 = *(uint *)(lVar5 + 0x18) & 0x100;
    if (((*(short *)(lVar5 + 0x174) == 0) && (*(char *)(lVar5 + 0x17a) == '\0')) || (uVar8 != 0)) {
      FUN_1803ec2f0(&local_48,*(undefined4 *)(lVar5 + 0x90),0,2);
      if (uVar8 != 0) {
        *(ushort *)(lVar6 + 0x176) = *(ushort *)(lVar6 + 0x176) | *(ushort *)(lVar5 + 0x176);
      }
    }
    else {
      FUN_1803ec2f0(&local_48,*(undefined4 *)(lVar5 + 0x90),0,0);
      FUN_1803d9fd0(&local_48,*(undefined4 *)(lVar5 + 0x90),0,uVar4);
      if ((*(short *)(lVar5 + 0x174) == 0) && (lVar5 == *(longlong *)(lVar7 + 0x2068))) {
        local_38 = local_48 - DAT_1808ac540;
        local_30 = local_40 + DAT_1808ac540;
        local_34 = local_44 - DAT_1808ac540;
        local_2c = local_3c + DAT_1808ac540;
        FUN_1803d9fd0(&local_38,*(undefined4 *)(lVar7 + 0x2064),2,uVar4);
      }
    }
    if (*(longlong *)(lVar7 + 0x1500) == lVar5) {
      *(uint *)(lVar7 + 0x1ef0) = *(uint *)(lVar7 + 0x1ef0) | 0x80;
    }
    *(undefined4 *)(lVar5 + 0x1e4) = *(undefined4 *)(lVar7 + 0x1ef0);
  }
  else {
    uVar1 = *(undefined8 *)(lVar5 + 0x28);
    uVar2 = *(undefined8 *)(lVar5 + 0x30);
    uVar4 = *(undefined4 *)(lVar5 + 0x1e4);
    *(undefined4 *)(DAT_180ca0a50 + 0x1ee8) = *(undefined4 *)(lVar5 + 0x90);
    *(undefined4 *)(lVar6 + 0x1eec) = *(undefined4 *)(lVar6 + 0x1ea8);
    *(undefined4 *)(lVar6 + 0x1ef0) = uVar4;
    *(undefined8 *)(lVar6 + 0x1f04) = uVar1;
    *(ulonglong *)(lVar6 + 0x1f0c) =
         CONCAT44((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)uVar1 >> 0x20),
                  (float)uVar2 + (float)uVar1);
    *(undefined8 *)(lVar6 + 0x1ef4) = *(undefined8 *)(lVar6 + 0x1f04);
    *(undefined8 *)(lVar6 + 0x1efc) = *(undefined8 *)(lVar6 + 0x1f0c);
  }
  *(undefined4 *)(lVar7 + 0x28a0) = 0xff7fffff;
  *(undefined4 *)(lVar7 + 0x1460) = uVar3;
  return;
}



/* ===== 1803e1e10 FUN_1803e1e10 ===== */

longlong FUN_1803e1e10(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  do {
    iVar2 = *(int *)(param_1 + 0x1b0);
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return param_1;
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar2 * 8);
    } while ((*(char *)(lVar1 + 0xcc) == '\0') || (*(char *)(lVar1 + 0xd4) != '\0'));
    param_1 = lVar1;
  } while( true );
}



/* ===== 1803e1e50 FUN_1803e1e50 ===== */

undefined8 FUN_1803e1e50(uint param_1)

{
  int iVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  
  iVar1 = *(int *)(DAT_180ca0a50 + 0x14d8);
  puVar2 = *(uint **)(DAT_180ca0a50 + 0x14e0);
  uVar4 = (longlong)iVar1;
  puVar5 = puVar2;
  if (iVar1 != 0) {
    do {
      uVar3 = uVar4 >> 1;
      if (puVar5[uVar3 * 4] < param_1) {
        puVar5 = puVar5 + uVar3 * 4 + 4;
        uVar3 = uVar4 + (-1 - uVar3);
      }
      uVar4 = uVar3;
    } while (uVar3 != 0);
  }
  if ((puVar5 == puVar2 + (longlong)iVar1 * 4) || (*puVar5 != param_1)) {
    return 0;
  }
  return *(undefined8 *)(puVar5 + 2);
}



/* ===== 1803e1ee0 FUN_1803e1ee0 ===== */

void FUN_1803e1ee0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0xffffffff;
  uVar3 = 0xffffffff;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    pbVar2 = param_1 + 1;
    if (((bVar1 == 0x23) && (*pbVar2 == 0x23)) && (param_1[2] == 0x23)) {
      uVar4 = 0xffffffff;
      pbVar2 = param_1 + 3;
    }
    else {
      uVar4 = (ulonglong)
              ((uint)(uVar4 >> 8) ^
              *(uint *)(&DAT_1806c25c0 + (uVar4 & 0xff ^ (ulonglong)bVar1) * 4));
    }
    uVar3 = (uint)uVar4;
    param_1 = pbVar2;
    bVar1 = *pbVar2;
  }
  FUN_1803e1e50(~uVar3);
  return;
}



/* ===== 1803e1f50 FUN_1803e1f50 ===== */

void FUN_1803e1f50(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  char cVar6;
  char cVar7;
  undefined2 uVar8;
  float fVar9;
  
  if (param_2 != 0) {
    uVar5 = *(undefined4 *)(param_2 + 4);
    uVar8 = (undefined2)((uint)uVar5 >> 0x10);
    *(ulonglong *)(param_1 + 0x28) =
         CONCAT44((float)(int)(float)(int)((longlong)CONCAT26(uVar8,CONCAT24(uVar8,uVar5)) >> 0x30),
                  (float)(int)(float)(int)(short)uVar5);
    sVar3 = *(short *)(param_2 + 8);
    if ((0 < sVar3) && (sVar4 = *(short *)(param_2 + 10), 0 < sVar4)) {
      *(undefined2 *)(param_1 + 0xe8) = 0;
      fVar9 = (float)(int)(float)(int)sVar3;
      *(float *)(param_1 + 0x38) = fVar9;
      *(float *)(param_1 + 0x30) = fVar9;
      fVar9 = (float)(int)(float)(int)sVar4;
      *(float *)(param_1 + 0x3c) = fVar9;
      *(float *)(param_1 + 0x34) = fVar9;
    }
    bVar2 = *(byte *)(param_2 + 0xe);
    *(byte *)(param_1 + 0xf1) = *(byte *)(param_1 + 0xf1) & 0xfb;
    *(byte *)(param_1 + 0xf2) = *(byte *)(param_1 + 0xf2) & 0xfb;
    *(byte *)(param_1 + 0xcf) = bVar2 & 1;
    *(byte *)(param_1 + 0xf3) = (byte)((uint)*(undefined4 *)(param_1 + 0xf0) >> 0x18) & 0xfb;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x138) = uVar5;
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  *(undefined4 *)(param_1 + 0x130) = uVar5;
  *(undefined4 *)(param_1 + 0x134) = uVar1;
  *(undefined4 *)(param_1 + 0x128) = uVar5;
  *(undefined4 *)(param_1 + 300) = uVar1;
  if ((*(byte *)(param_1 + 0x14) & 0x40) != 0) {
    *(undefined2 *)(param_1 + 0xe8) = 0x202;
    *(undefined1 *)(param_1 + 0xea) = 0;
    return;
  }
  cVar6 = '\0';
  if (*(float *)(param_1 + 0x30) <= 0.0) {
    cVar6 = '\x02';
  }
  *(char *)(param_1 + 0xe8) = cVar6;
  cVar7 = '\0';
  if (*(float *)(param_1 + 0x34) <= 0.0) {
    cVar7 = '\x02';
  }
  *(char *)(param_1 + 0xe9) = cVar7;
  if ((cVar6 == '\0') && (cVar7 == '\0')) {
    *(undefined1 *)(param_1 + 0xea) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0xea) = 1;
  return;
}



/* ===== 1803e2090 FUN_1803e2090 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1803e2090(undefined8 param_1,uint param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  longlong local_res18;
  undefined1 *local_res20;
  
  lVar4 = DAT_180ca0a50;
  local_res18 = _malloc_base(0x438);
  if (DAT_180ca0a50 != 0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  local_res20 = local_res10;
  if (local_res18 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_1803dcef0(local_res18,lVar4,param_1);
  }
  *(uint *)(lVar6 + 0x14) = param_2;
  FUN_1803d8480(lVar4 + 0x14d8,*(undefined4 *)(lVar6 + 0x10),lVar6);
  lVar10 = DAT_180ca0a50;
  piVar9 = (int *)0x0;
  if ((param_2 >> 8 & 1) == 0) {
    if (*(int *)(lVar6 + 0x2c4) == -1) {
      piVar1 = (int *)(*(longlong *)(DAT_180ca0a50 + 0x27d0) + 4);
      piVar9 = (int *)0x0;
      if (*(longlong *)(DAT_180ca0a50 + 0x27d0) != 0) {
        piVar9 = piVar1;
      }
      if (piVar9 != (int *)0x0) {
        do {
          if ((*piVar9 == *(int *)(lVar6 + 0x10)) && ((*(byte *)((longlong)piVar9 + 0xe) & 8) == 0))
          goto LAB_1803e2190;
          piVar7 = (int *)((longlong)piVar9[-1] + (longlong)piVar9);
          piVar9 = (int *)0x0;
          if (piVar7 != (int *)((longlong)*(int *)(DAT_180ca0a50 + 0x27c8) + (longlong)piVar1)) {
            piVar9 = piVar7;
          }
        } while (piVar9 != (int *)0x0);
      }
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)((longlong)*(int *)(lVar6 + 0x2c4) + *(longlong *)(DAT_180ca0a50 + 0x27d0));
    }
LAB_1803e2190:
    if (piVar9 != (int *)0x0) {
      *(int *)(lVar6 + 0x2c4) = (int)piVar9 - *(int *)(lVar4 + 0x27d0);
    }
  }
  uVar2 = *(undefined8 *)(**(longlong **)(lVar10 + 0x2058) + 8);
  *(ulonglong *)(lVar6 + 0x28) =
       CONCAT44((float)((ulonglong)uVar2 >> 0x20) + _UNK_1808ade04,(float)uVar2 + _DAT_1808ade00);
  *(undefined8 *)(lVar6 + 0x38) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined2 *)(lVar6 + 0xf2) = 0xf0f;
  *(undefined1 *)(lVar6 + 0xf1) = 0xf;
  FUN_1803e1f50(lVar6,piVar9);
  if (piVar9 != (int *)0x0) {
    *(undefined2 *)(piVar9 + 3) = *(undefined2 *)(lVar10 + 0x27a0);
  }
  piVar9 = (int *)(lVar4 + 0x1498);
  iVar5 = *(int *)(lVar4 + 0x149c);
  iVar3 = *piVar9;
  if ((param_2 >> 0xd & 1) == 0) {
    if (iVar3 != iVar5) goto LAB_1803e22b3;
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar5 / 2 + iVar5;
    }
    iVar8 = iVar3 + 1;
    if (iVar3 + 1 < iVar5) {
      iVar8 = iVar5;
    }
  }
  else {
    if (iVar3 != 0) {
      if (iVar3 == iVar5) {
        if (iVar5 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar5 / 2 + iVar5;
        }
        iVar8 = iVar3 + 1;
        if (iVar3 + 1 < iVar5) {
          iVar8 = iVar5;
        }
        FUN_18000ba20(piVar9,iVar8);
      }
      if (0 < *piVar9) {
        FUN_180540530(*(longlong *)(lVar4 + 0x14a0) + 8,*(longlong *)(lVar4 + 0x14a0),
                      (longlong)*piVar9 << 3);
      }
      **(longlong **)(lVar4 + 0x14a0) = lVar6;
      *piVar9 = *piVar9 + 1;
      return lVar6;
    }
    if (iVar5 != 0) goto LAB_1803e22b3;
    iVar8 = 8;
  }
  FUN_18000ba20(piVar9,iVar8);
LAB_1803e22b3:
  *(longlong *)(*(longlong *)(lVar4 + 0x14a0) + (longlong)*piVar9 * 8) = lVar6;
  *piVar9 = *piVar9 + 1;
  return lVar6;
}



/* ===== 1803e22e0 FUN_1803e22e0 ===== */

float * FUN_1803e22e0(float *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = DAT_180ca0a50;
  fVar5 = DAT_1808ac710;
  if ((*(uint *)(param_2 + 0x14) & 0x5000000) == 0x1000000) {
    uVar1 = *(uint *)(param_2 + 0x18);
    if ((uVar1 & 4) == 0) {
      fVar4 = DAT_1808ac710;
    }
    else {
      fVar4 = *(float *)(DAT_180ca0a50 + 0xcb8);
    }
    *param_1 = fVar4;
    if ((uVar1 & 8) != 0) {
      fVar5 = *(float *)(lVar2 + 0xcbc);
    }
  }
  else if ((*(uint *)(param_2 + 0x14) & 0x40) == 0) {
    fVar5 = *(float *)(DAT_180ca0a50 + 0xcbc);
    *param_1 = *(float *)(DAT_180ca0a50 + 0xcb8);
  }
  else {
    *param_1 = 4.0;
  }
  fVar3 = *(float *)(lVar2 + 0xcac) - DAT_1808ac34c;
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar4 = *(float *)(param_2 + 0x6c) + *(float *)(param_2 + 0x68) + fVar4;
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  param_1[1] = fVar5;
  return param_1;
}



/* ===== 1803e2390 FUN_1803e2390 ===== */

float * FUN_1803e2390(float *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_res8;
  float local_resc;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  
  fVar4 = *param_3;
  fVar5 = param_3[1];
  if ((*(byte *)(DAT_180ca0a50 + 0x1f38) & 0x10) != 0) {
    fVar3 = *(float *)(DAT_180ca0a50 + 0x1f84);
    fVar2 = *(float *)(DAT_180ca0a50 + 0x1f88);
    if ((fVar3 < 0.0) || (fVar1 = *(float *)(DAT_180ca0a50 + 0x1f8c), fVar1 < 0.0)) {
      fVar3 = *(float *)(param_2 + 0x38);
    }
    else if ((fVar3 <= fVar4) && (fVar3 = fVar1, fVar4 <= fVar1)) {
      fVar3 = fVar4;
    }
    if ((fVar2 < 0.0) || (fVar4 = *(float *)(DAT_180ca0a50 + 0x1f90), fVar4 < 0.0)) {
      fVar2 = *(float *)(param_2 + 0x3c);
    }
    else if ((fVar2 <= fVar5) && (fVar2 = fVar4, fVar5 <= fVar4)) {
      fVar2 = fVar5;
    }
    if (*(code **)(DAT_180ca0a50 + 0x1f98) != (code *)0x0) {
      local_20 = *(undefined4 *)(param_2 + 0x28);
      local_1c = *(undefined4 *)(param_2 + 0x2c);
      local_28 = *(undefined8 *)(DAT_180ca0a50 + 0x1fa0);
      local_18 = *(undefined4 *)(param_2 + 0x38);
      local_14 = *(undefined4 *)(param_2 + 0x3c);
      local_10 = fVar3;
      local_c = fVar2;
      (**(code **)(DAT_180ca0a50 + 0x1f98))(&local_28);
      fVar2 = local_c;
      fVar3 = local_10;
    }
    fVar4 = (float)(int)fVar3;
    fVar5 = (float)(int)fVar2;
  }
  FUN_1803e22e0(&local_res8,param_2);
  if (fVar4 <= local_res8) {
    fVar4 = local_res8;
  }
  if (fVar5 <= local_resc) {
    fVar5 = local_resc;
  }
  *param_1 = fVar4;
  param_1[1] = fVar5;
  return param_1;
}



/* ===== 1803e24d0 FUN_1803e24d0 ===== */

void FUN_1803e24d0(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  if ((((*(char *)(param_1 + 0xcf) != '\0') && (*(char *)(param_1 + 0xe8) < '\x01')) &&
      (*(char *)(param_1 + 0xe9) < '\x01')) ||
     (((*(char *)(param_1 + 0xd4) != '\0' && (*(char *)(param_1 + 0xec) == '\0')) &&
      ('\0' < *(char *)(param_1 + 0xeb))))) {
    *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x48);
    return;
  }
  fVar1 = *(float *)(param_1 + 0x50);
  if (fVar1 == 0.0) {
    fVar1 = (float)(longlong)(*(float *)(param_1 + 0x130) - *(float *)(param_1 + 0x128));
  }
  *param_2 = fVar1;
  fVar1 = *(float *)(param_1 + 0x54);
  if (fVar1 == 0.0) {
    fVar1 = (float)(longlong)(*(float *)(param_1 + 0x134) - *(float *)(param_1 + 300));
  }
  param_2[1] = fVar1;
  fVar1 = *(float *)(param_1 + 0x50);
  if (fVar1 == 0.0) {
    fVar1 = *(float *)(param_1 + 0x130);
    if (*(float *)(param_1 + 0x130) <= *(float *)(param_1 + 0x138)) {
      fVar1 = *(float *)(param_1 + 0x138);
    }
    fVar1 = (float)(longlong)(fVar1 - *(float *)(param_1 + 0x128));
  }
  *param_3 = fVar1;
  fVar1 = *(float *)(param_1 + 0x54);
  if (fVar1 == 0.0) {
    fVar1 = *(float *)(param_1 + 0x134);
    if (*(float *)(param_1 + 0x134) <= *(float *)(param_1 + 0x13c)) {
      fVar1 = *(float *)(param_1 + 0x13c);
    }
    fVar1 = (float)(longlong)(fVar1 - *(float *)(param_1 + 300));
  }
  param_3[1] = fVar1;
  return;
}



/* ===== 1803e25f0 FUN_1803e25f0 ===== */

float * FUN_1803e25f0(float *param_1,longlong param_2,float *param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res10;
  float local_res14;
  float local_c8;
  float local_c4;
  
  lVar3 = DAT_180ca0a50;
  fVar11 = *(float *)(param_2 + 0x58) + *(float *)(param_2 + 0x58);
  fVar13 = *(float *)(param_2 + 0x5c) + *(float *)(param_2 + 0x5c);
  fVar12 = (*(float *)(param_2 + 0x7c) + *(float *)(param_2 + 0x74)) - *(float *)(param_2 + 0xc4);
  fVar10 = (*(float *)(param_2 + 0x78) + *(float *)(param_2 + 0x70)) - *(float *)(param_2 + 0xc0);
  if ((param_4 & 1) == 0) {
    fVar5 = *(float *)(param_2 + 0x30);
  }
  else {
    fVar5 = fVar11 + *param_3 + fVar10;
  }
  if ((param_4 & 2) == 0) {
    fVar6 = *(float *)(param_2 + 0x34);
  }
  else {
    fVar6 = fVar13 + param_3[1] + fVar12;
  }
  if ((*(uint *)(param_2 + 0x14) & 0x5000000) == 0x1000000) {
    fVar8 = DAT_1808acd08;
    fVar9 = DAT_1808acd08;
  }
  else {
    fVar8 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x28) -
            (*(float *)(DAT_180ca0a50 + 0xdbc) + *(float *)(DAT_180ca0a50 + 0xdbc));
    fVar9 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x2c) -
            (*(float *)(DAT_180ca0a50 + 0xdc0) + *(float *)(DAT_180ca0a50 + 0xdc0));
  }
  if ((*(uint *)(param_2 + 0x14) >> 0x19 & 1) == 0) {
    FUN_1803e22e0(&local_res10,param_2);
    if (fVar9 <= local_res14) {
      local_res14 = fVar9;
    }
    if (fVar8 <= local_res10) {
      local_res10 = fVar8;
    }
    fVar7 = local_res14;
    if ((local_res14 <= fVar6) && (fVar7 = fVar9, fVar6 <= fVar9)) {
      fVar7 = fVar6;
    }
    fVar6 = local_res10;
    if ((local_res10 <= fVar5) && (fVar6 = fVar8, fVar5 <= fVar8)) {
      fVar6 = fVar5;
    }
    local_res10 = fVar6;
    local_res14 = fVar7;
    FUN_1803e2390();
    pfVar4 = param_3;
    if ((param_4 & 1) == 0) {
      pfVar4 = (float *)(param_2 + 0x40);
    }
    if ((param_4 & 2) == 0) {
      fVar5 = *(float *)(param_2 + 0x44);
    }
    else {
      fVar5 = param_3[1];
    }
    if ((((local_c8 < *pfVar4 + fVar11 + fVar10) && ((*(uint *)(param_2 + 0x14) & 8) == 0)) &&
        ((*(uint *)(param_2 + 0x14) >> 0xb & 1) != 0)) ||
       ((*(uint *)(param_2 + 0x14) & 0x8000) != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((local_c4 < fVar5 + fVar13 + fVar12) && ((*(uint *)(param_2 + 0x14) & 8) == 0)) ||
       ((*(uint *)(param_2 + 0x14) >> 0xe & 1) != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar1) {
      fVar7 = fVar7 + *(float *)(lVar3 + 0xd14);
    }
    if (bVar2) {
      fVar6 = fVar6 + *(float *)(lVar3 + 0xd14);
    }
    *(ulonglong *)param_1 = CONCAT44(fVar7,fVar6);
  }
  else {
    if (fVar8 <= fVar5) {
      fVar5 = fVar8;
    }
    if (fVar9 <= fVar6) {
      fVar6 = fVar9;
    }
    *param_1 = fVar5;
    param_1[1] = fVar6;
  }
  return param_1;
}



/* ===== 1803e2890 FUN_1803e2890 ===== */

undefined8 FUN_1803e2890(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined1 local_res18 [16];
  
  local_res8 = 0;
  FUN_1803e24d0(param_2,local_res18,&local_res8);
  FUN_1803e25f0(local_res18,param_2,&local_res8,0xffffffff);
  FUN_1803e2390(param_1,param_2,local_res18);
  return param_1;
}



/* ===== 1803e2900 FUN_1803e2900 ===== */

void FUN_1803e2900(longlong param_1,float *param_2,float *param_3,float *param_4,undefined8 *param_5
                  )

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res8;
  float fStackX_c;
  float local_res10;
  float local_res14;
  
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar3 = fVar6;
  fVar4 = fVar7;
  if ((*(uint *)(param_1 + 0x14) & 0x1000000) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3b0);
    fVar8 = *(float *)(lVar2 + 100);
    uVar1 = *(uint *)(lVar2 + 0x14);
    fVar9 = *(float *)(lVar2 + 0x58);
    if (*(float *)(lVar2 + 0x58) <= fVar8) {
      fVar9 = fVar8;
    }
    fVar5 = *(float *)(lVar2 + 0x5c);
    if (*(float *)(lVar2 + 0x5c) <= fVar8) {
      fVar5 = fVar8;
    }
    if (((uVar1 & 0x8800) == 0) || ((uVar1 & 8) != 0)) {
      fVar3 = *(float *)(lVar2 + 0x228) - (float)((uint)fVar9 ^ DAT_1808adec0);
      if ((fVar3 <= fVar6) &&
         (fVar3 = (float)((uint)fVar9 ^ DAT_1808adec0) + *(float *)(lVar2 + 0x230), fVar6 <= fVar3))
      {
        fVar3 = fVar6;
      }
      if ((uVar1 & 8) != 0) {
        fVar4 = *(float *)(lVar2 + 0x22c) - (float)((uint)fVar5 ^ DAT_1808adec0);
        if ((fVar4 <= fVar7) &&
           (fVar4 = (float)((uint)fVar5 ^ DAT_1808adec0) + *(float *)(lVar2 + 0x234), fVar7 <= fVar4
           )) {
          fVar4 = fVar7;
        }
      }
    }
  }
  fVar6 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x30);
  fVar7 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x34);
  fVar9 = (*(float *)(param_1 + 0x28) - fVar3) * *param_3 + fVar3;
  fVar8 = (*(float *)(param_1 + 0x2c) - fVar4) * param_3[1] + fVar4;
  fVar6 = ((fVar3 - fVar6) * *param_3 + fVar6) - fVar9;
  fVar7 = ((fVar4 - fVar7) * param_3[1] + fVar7) - fVar8;
  local_res10 = fVar6;
  local_res14 = fVar7;
  FUN_1803e2390(&local_res8,param_1,&local_res10);
  *param_4 = fVar9;
  param_4[1] = fVar8;
  if (*param_3 == 0.0) {
    *param_4 = fVar9 - (local_res8 - fVar6);
  }
  if (param_3[1] == 0.0) {
    param_4[1] = fVar8 - (fStackX_c - fVar7);
  }
  *param_5 = CONCAT44(fStackX_c,local_res8);
  return;
}



/* ===== 1803e2ae0 FUN_1803e2ae0 ===== */

float * FUN_1803e2ae0(float *param_1,longlong param_2,int param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 0x28);
  fVar2 = *(float *)(param_2 + 0x2c);
  fVar4 = fVar1 + *(float *)(param_2 + 0x30);
  fVar3 = fVar2 + *(float *)(param_2 + 0x34);
  if (param_5 == 0.0) {
    fVar3 = fVar3 - DAT_1808ac34c;
    fVar4 = fVar4 - DAT_1808ac34c;
  }
  if (param_3 == 0) {
    param_1[1] = fVar2 + param_4;
    *param_1 = fVar1 - param_5;
    param_1[2] = fVar1 + param_5;
    param_1[3] = fVar3 - param_4;
    return param_1;
  }
  if (param_3 == 1) {
    param_1[1] = fVar2 + param_4;
    *param_1 = fVar4 - param_5;
    param_1[2] = fVar4 + param_5;
    param_1[3] = fVar3 - param_4;
    return param_1;
  }
  if (param_3 == 2) {
    *param_1 = fVar1 + param_4;
    param_1[1] = fVar2 - param_5;
    param_1[2] = fVar4 - param_4;
    param_1[3] = fVar2 + param_5;
    return param_1;
  }
  if (param_3 == 3) {
    *param_1 = fVar1 + param_4;
    param_1[1] = fVar3 - param_5;
    param_1[2] = fVar4 - param_4;
    param_1[3] = fVar3 + param_5;
    return param_1;
  }
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  return param_1;
}



/* ===== 1803e2c20 FUN_1803e2c20 ===== */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1803e2c20(longlong param_1,uint *param_2,uint *param_3,int param_4,undefined4 *param_5,
                  float *param_6)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  float fVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  float *pfVar15;
  undefined8 uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulonglong local_res8;
  uint *local_res10;
  uint *local_res18;
  undefined8 *in_stack_fffffffffffffe78;
  undefined8 uVar30;
  undefined4 uVar31;
  char local_178;
  bool local_177;
  float local_174;
  uint local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float fStack_15c;
  undefined1 local_158 [8];
  longlong local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  float fStack_13c;
  float local_138;
  float local_134;
  undefined8 local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  longlong local_108;
  float *local_100;
  longlong local_f8;
  float *local_f0;
  undefined1 local_e8 [176];
  
  lVar9 = DAT_180ca0a50;
  fVar4 = DAT_1808acd08;
  fVar23 = DAT_1808ac34c;
  uVar12 = *(uint *)(param_1 + 0x14);
  if (((((uVar12 & 2) != 0) || ('\0' < *(char *)(param_1 + 0xe8))) ||
      ('\0' < *(char *)(param_1 + 0xe9))) ||
     ((((uVar12 & 0x40) != 0 && ((*(byte *)(param_1 + 0x18) & 0xc) == 0)) ||
      (*(char *)(param_1 + 0xcd) == '\0')))) {
    return 0;
  }
  local_150 = DAT_180ca0a50;
  local_170 = 0;
  if (param_4 < 1) {
    fVar20 = 0.0;
  }
  else {
    fVar20 = *(float *)(DAT_180ca0a50 + 0x1200) * _DAT_1808ac400;
    fVar19 = *(float *)(param_1 + 0x60) + DAT_1808ac34c +
             *(float *)(DAT_180ca0a50 + 0x1200) * DAT_1808ac118;
    if (fVar20 <= fVar19) {
      fVar20 = fVar19;
    }
    fVar20 = (float)(int)((float)(int)fVar20 * DAT_1808ac27c);
  }
  fVar19 = *(float *)(DAT_180ca0a50 + 0x14ec);
  fVar29 = *param_6;
  fVar24 = param_6[2];
  fVar18 = param_6[3];
  fVar28 = param_6[1];
  _local_160 = CONCAT44(fStack_15c,fVar18);
  local_177 = (*(byte *)(param_1 + 0xf0) & 1) == 0;
  bVar17 = (uVar12 & 1) == 0;
  if (local_177 && bVar17) {
    fVar28 = fVar28 - *(float *)(param_1 + 0x68);
  }
  local_177 = local_177 && bVar17;
  local_138 = 3.4028235e+38;
  local_134 = 3.4028235e+38;
  local_158 = (undefined1  [8])0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x170) = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_174 = fVar28;
  local_16c = fVar20;
  local_168 = fVar29;
  local_164 = fVar24;
  FUN_1803e89e0("#RESIZE");
  fVar27 = DAT_1808aceb0;
  uVar12 = 0;
  if (0 < param_4) {
    uVar13 = 0;
    fVar29 = (float)((uint)fVar20 ^ DAT_1808adec0);
    do {
      uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
      fVar24 = *(float *)(param_1 + 0x28);
      fVar21 = *(float *)(param_1 + 0x2c);
      pfVar15 = (float *)(&DAT_1806c2560 + uVar13 * 6);
      fVar24 = ((fVar24 + *(float *)(param_1 + 0x30)) - fVar24) * *pfVar15 + fVar24;
      fVar21 = ((fVar21 + *(float *)(param_1 + 0x34)) - fVar21) *
               (float)(&DAT_1806c2564)[uVar13 * 6] + fVar21;
      local_120 = (float)(&DAT_1806c2568)[uVar13 * 6] * fVar20 + fVar24;
      fVar24 = fVar24 - (float)(&DAT_1806c2568)[uVar13 * 6] * fVar19;
      local_11c = (float)(&DAT_1806c256c)[uVar13 * 6] * fVar20 + fVar21;
      fVar21 = fVar21 - (float)(&DAT_1806c256c)[uVar13 * 6] * fVar19;
      local_128 = fVar24;
      if (local_120 < fVar24) {
        local_128 = local_120;
        local_120 = fVar24;
      }
      local_124 = fVar21;
      if (local_11c < fVar21) {
        local_124 = local_11c;
        local_11c = fVar21;
      }
      uVar12 = (uint)uVar13;
      uVar6 = FUN_1803e8960(param_1,uVar13);
      FUN_1803ec2f0(&local_128,uVar6,0,2);
      in_stack_fffffffffffffe78 = (undefined8 *)CONCAT44(uVar7,0x40800);
      FUN_180415270(&local_128,uVar6,&local_178,&local_res8,in_stack_fffffffffffffe78);
      cVar5 = (char)local_res8;
      if ((local_178 == '\0') && ((char)local_res8 == '\0')) {
LAB_1803e3146:
        if ((uVar12 == 0) && ((*(uint *)(param_1 + 0x14) & 0x1000000) == 0)) goto LAB_1803e3153;
      }
      else {
        *(uint *)(DAT_180ca0a50 + 0x2500) = (~uVar12 & 1) + 5;
        if ((char)local_res8 == '\0') {
LAB_1803e313d:
          if (local_178 == '\0') goto LAB_1803e3146;
        }
        else {
          if (*(char *)(lVar9 + 0xb45) == '\0') {
            fVar20 = (float)(&DAT_1806c2564)[uVar13 * 6];
            if ((fVar20 != fVar23) && ((fVar20 != 0.0 || (local_177 == false)))) {
              fVar28 = fVar27;
            }
            fVar24 = *pfVar15;
            if (fVar24 == fVar23) {
              fVar27 = local_168;
            }
            else {
              fVar27 = DAT_1808aceb0;
            }
            if (fVar20 == 0.0) {
            }
            else {
              fVar18 = fVar4;
            }
            if (fVar24 == 0.0) {
              fVar21 = local_164;
            }
            else {
              fVar21 = fVar4;
            }
            fVar22 = (float)(&DAT_1806c2568)[uVar13 * 6] * fVar19;
            fVar25 = (float)(&DAT_1806c256c)[uVar13 * 6] * fVar19;
            fVar24 = (*(float *)(lVar9 + 0x110) - *(float *)(lVar9 + 0x1594)) +
                     (fVar29 * (float)(&DAT_1806c2568)[uVar13 * 6] - fVar22) * fVar24 + fVar22;
            fVar20 = (*(float *)(lVar9 + 0x114) - *(float *)(lVar9 + 0x1598)) +
                     (fVar29 * (float)(&DAT_1806c256c)[uVar13 * 6] - fVar25) * fVar20 + fVar25;
            if ((fVar28 <= fVar20) && (fVar28 = fVar18, fVar20 <= fVar18)) {
              fVar28 = fVar20;
            }
            if ((fVar27 <= fVar24) && (fVar27 = fVar21, fVar24 <= fVar21)) {
              fVar27 = fVar24;
            }
            in_stack_fffffffffffffe78 = (undefined8 *)local_158;
            local_130 = CONCAT44(fVar28,fVar27);
            FUN_1803e2900(param_1,&local_130,pfVar15,&local_138,in_stack_fffffffffffffe78);
            fVar18 = local_160;
            fVar28 = local_174;
            fVar27 = DAT_1808aceb0;
            fVar20 = local_16c;
          }
          else {
            FUN_1803e25f0(&local_118,param_1,param_1 + 0x48);
            puVar8 = (undefined8 *)FUN_1803e2390(local_e8,param_1);
            local_170 = 3;
            local_158 = (undefined1  [8])*puVar8;
            FUN_1803dd660(0,0);
          }
          cVar5 = (char)local_res8;
          if ((char)local_res8 == '\0') goto LAB_1803e313d;
        }
LAB_1803e3153:
        if (cVar5 == '\0') {
          lVar10 = (ulonglong)(local_178 != '\0') + 0x1f;
        }
        else {
          lVar10 = 0x21;
        }
        puVar2 = (undefined4 *)(DAT_180ca0a50 + 0xde0 + lVar10 * 0x10);
        local_148 = *puVar2;
        uStack_144 = puVar2[1];
        uStack_140 = puVar2[2];
        fStack_13c = (float)puVar2[3] * *(float *)(DAT_180ca0a50 + 0xc9c);
        uVar7 = FUN_1803d7f30();
        param_5[uVar13] = uVar7;
      }
      uVar13 = (ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < param_4);
    fVar29 = local_168;
    fVar24 = local_164;
    uVar12 = local_170;
  }
  fVar23 = DAT_1808ac04c;
  if ((*(uint *)(param_1 + 0x14) & 0x1000000) == 0) {
    local_164 = (float)(-(uint)(*(char *)(lVar9 + 0x81) != '\0') & 0xf);
  }
  else {
    local_164 = (float)(*(uint *)(param_1 + 0x18) >> 1 & 2 | *(uint *)(param_1 + 0x18) & 8);
  }
  fVar20 = local_160;
  local_174 = 0.0;
  local_168 = 1.4013e-45;
  fVar19 = local_164;
  do {
    if (((uint)fVar19 & (uint)local_168) == 0) {
      local_170 = uVar12;
    }
    else {
      bVar17 = (uint)local_174 < 2;
      if (bVar17) {
        local_100 = &local_160;
        local_f8 = 0xfc;
        local_f0 = &local_110;
        local_130 = 0x110;
        uVar7 = 4;
        local_108 = 0x1594;
        uVar16 = 1;
        puVar8 = (undefined8 *)local_158;
        lVar10 = 0;
      }
      else {
        local_100 = &fStack_15c;
        local_f8 = 0x100;
        puVar8 = (undefined8 *)((longlong)local_158 + 4);
        local_f0 = &local_10c;
        local_130 = 0x114;
        uVar7 = 3;
        local_108 = 0x1598;
        uVar16 = 2;
        lVar10 = 4;
      }
      uVar30 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe78 >> 0x20),
                        *(undefined4 *)(local_150 + 0x14ec));
      fVar19 = local_174;
      FUN_1803e2ae0(&local_148,param_1,local_174,local_174,uVar30);
      uVar31 = (undefined4)((ulonglong)uVar30 >> 0x20);
      uVar6 = FUN_1803e8960(param_1,(int)fVar19 + 4);
      FUN_1803ec2f0(&local_148,uVar6,0,2);
      in_stack_fffffffffffffe78 = (undefined8 *)CONCAT44(uVar31,0x40800);
      FUN_180415270(&local_148,uVar6,&local_res8,&local_178,in_stack_fffffffffffffe78);
      pfVar15 = local_100;
      lVar9 = local_150;
      if ((char)local_res8 == '\0') {
LAB_1803e3339:
        if (local_178 != '\0') goto LAB_1803e3340;
LAB_1803e33bf:
        lVar9 = local_150;
      }
      else {
        if (*(float *)(local_150 + 0x156c) <= fVar23) {
          local_res8 = local_res8 & 0xffffffffffffff00;
          goto LAB_1803e3339;
        }
LAB_1803e3340:
        *(undefined4 *)(DAT_180ca0a50 + 0x2500) = uVar7;
        if (local_178 == '\0') goto LAB_1803e33bf;
        if (*(char *)(local_150 + 0xb45) != '\0') {
          if (((int)local_174 - 1U & 0xfffffffd) == 0) {
            FUN_1803e25f0(local_e8,param_1,param_1 + 0x48,uVar16);
            lVar9 = FUN_1803e2390(&local_128,param_1,local_e8);
            local_170 = local_170 | 1 << !bVar17;
            *(undefined4 *)puVar8 = *(undefined4 *)(lVar10 + lVar9);
            local_178 = '\0';
            local_res8 = local_res8 & 0xffffffffffffff00;
          }
          FUN_1803dd660(0,0);
          goto LAB_1803e33bf;
        }
        lVar14 = (ulonglong)(uint)local_174 * 0x1c;
        lVar10 = *(longlong *)(local_150 + 0x1520);
        if ((lVar10 == 0) || (*(int *)(local_150 + 0x1534) != *(int *)(local_150 + 4))) {
LAB_1803e346a:
          bVar17 = false;
        }
        else {
          lVar11 = param_1;
          do {
            lVar3 = *(longlong *)(lVar11 + 0x3c0);
            bVar17 = lVar11 != lVar3;
            lVar11 = lVar3;
          } while (bVar17);
          lVar11 = param_1;
          if (lVar3 != lVar10) {
            do {
              if (lVar11 == lVar10) goto LAB_1803e359c;
            } while ((lVar11 != lVar3) &&
                    (plVar1 = (longlong *)(lVar11 + 0x3b0), lVar11 = *plVar1, *plVar1 != 0));
            goto LAB_1803e346a;
          }
LAB_1803e359c:
          bVar17 = true;
        }
        if ((*(char *)(local_150 + 0x1584) != '\0') || (bVar17)) {
          *(undefined1 *)(local_150 + 0x26b0) = 0;
          *(ulonglong *)(local_150 + 0x26a0) = CONCAT44(uStack_144,local_148);
          *(ulonglong *)(local_150 + 0x26a8) = CONCAT44(fStack_13c,uStack_140);
        }
        if (((*(uint *)(param_1 + 0x14) & 0x1000000) != 0) &&
           ((*(longlong *)(local_150 + 0x26a0) != CONCAT44(uStack_144,local_148) ||
            (*(longlong *)(local_150 + 0x26a8) != CONCAT44(fStack_13c,uStack_140))))) {
          *(undefined1 *)(local_150 + 0x26b0) = 1;
        }
        bVar17 = false;
        fVar19 = *(float *)(&DAT_1806c24ec + lVar14);
        if (*(float *)(&DAT_1806c24f4 + lVar14) <= *(float *)(&DAT_1806c24ec + lVar14)) {
          fVar19 = *(float *)(&DAT_1806c24f4 + lVar14);
        }
        fVar18 = *(float *)(&DAT_1806c24e8 + lVar14);
        if (*(float *)(&DAT_1806c24f0 + lVar14) <= *(float *)(&DAT_1806c24e8 + lVar14)) {
          fVar18 = *(float *)(&DAT_1806c24f0 + lVar14);
        }
        local_110 = fVar18 * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x28);
        local_10c = fVar19 * *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x2c);
        fVar21 = (*(float *)(local_130 + local_150) - *(float *)(local_108 + local_150)) +
                 *(float *)(local_150 + 0x14ec);
        uVar16 = *(undefined8 *)(param_1 + 0x28);
        *local_100 = fVar21;
        if (*(char *)(lVar9 + 0x26b0) != '\0') {
          fVar22 = *(float *)(local_f8 + lVar9);
          fVar25 = *local_f0;
          *pfVar15 = fVar22 + fVar25;
          if ((fVar22 == 0.0) || (0.0 < fVar22 == fVar21 < fVar22 + fVar25)) {
            bVar17 = true;
          }
        }
        if ((local_174 == 4.2039e-45) || ((local_174 == 2.8026e-45 && (local_177 != false)))) {
          fVar21 = fVar28;
        }
        else {
          fVar21 = fVar27;
        }
        fVar22 = fVar4;
        if (local_174 == 1.4013e-45) {
          fVar25 = fVar29;
LAB_1803e35b5:
          fVar26 = fVar4;
        }
        else {
          fVar25 = fVar27;
          if (local_174 == 2.8026e-45) {
            fVar22 = fVar20;
            goto LAB_1803e35b5;
          }
          if (local_174 != 0.0) goto LAB_1803e35b5;
          fVar26 = fVar24;
        }
        fStack_15c = (float)((ulonglong)uVar16 >> 0x20);
        if ((fVar21 <= fStack_15c) && (fVar21 = fVar22, fStack_15c <= fVar22)) {
          fVar21 = fStack_15c;
        }
        local_160 = (float)uVar16;
        if ((fVar25 <= local_160) && (fVar25 = fVar26, local_160 <= fVar26)) {
          fVar25 = local_160;
        }
        _local_160 = CONCAT44(fVar21,fVar25);
        if (!bVar17) {
          in_stack_fffffffffffffe78 = (undefined8 *)local_158;
          local_118 = fVar18;
          local_114 = fVar19;
          FUN_1803e2900(param_1,&local_160,&local_118,&local_138,in_stack_fffffffffffffe78);
        }
      }
      if ((char)local_res8 != '\0') {
        *local_res10 = (uint)local_174;
      }
      if (local_178 != '\0') {
        *local_res18 = (uint)local_174;
      }
      fVar19 = local_164;
    }
    uVar12 = local_170;
    local_174 = (float)((int)local_174 + 1);
    local_168 = (float)((int)local_168 << 1 | (uint)((int)local_168 < 0));
  } while ((int)local_174 < 4);
  FUN_1803e8b00();
  *(undefined4 *)(param_1 + 0x170) = 0;
  lVar10 = DAT_180ca0a50;
  if ((*(longlong *)(lVar9 + 0x2250) != 0) &&
     (*(longlong *)(*(longlong *)(lVar9 + 0x2250) + 0x3c0) == param_1)) {
    if (*(int *)(lVar9 + 0x20b8) == 2) {
      if (*(char *)(lVar9 + 0x12d) == '\0') goto LAB_1803e388f;
      fVar23 = *(float *)(DAT_180ca0a50 + 0x160) - *(float *)(DAT_180ca0a50 + 0x150);
      fVar20 = *(float *)(DAT_180ca0a50 + 0x180) - *(float *)(DAT_180ca0a50 + 0x170);
    }
    else {
      if (*(int *)(lVar9 + 0x20b8) != 3) goto LAB_1803e388f;
      fVar23 = *(float *)(DAT_180ca0a50 + 0x930) - *(float *)(DAT_180ca0a50 + 0x920);
      fVar20 = *(float *)(DAT_180ca0a50 + 0x950) - *(float *)(DAT_180ca0a50 + 0x940);
    }
    if ((fVar23 != 0.0) || (fVar20 != 0.0)) {
      fVar19 = *(float *)(lVar9 + 0x40) * DAT_1808acc14 * *(float *)(DAT_180ca0a50 + 0x11d4);
      fVar20 = fVar19 * fVar20 + *(float *)(lVar9 + 0x2288);
      fVar23 = fVar19 * fVar23 + *(float *)(lVar9 + 0x2284);
      *(float *)(lVar9 + 0x2288) = fVar20;
      *(float *)(lVar9 + 0x2284) = fVar23;
      fVar19 = (fVar28 - *(float *)(param_1 + 0x2c)) - *(float *)(param_1 + 0x34);
      fVar29 = (fVar29 - *(float *)(param_1 + 0x28)) - *(float *)(param_1 + 0x30);
      *(undefined1 *)(lVar9 + 0x2274) = 0;
      *(undefined1 *)(lVar9 + 0x2061) = 1;
      if (fVar20 <= fVar19) {
        fVar20 = fVar19;
      }
      if (fVar23 <= fVar29) {
        fVar23 = fVar29;
      }
      *(float *)(lVar9 + 0x2288) = fVar20;
      *(float *)(lVar9 + 0x2284) = fVar23;
      local_148 = *(undefined4 *)(lVar10 + 0xff0);
      uStack_144 = *(undefined4 *)(lVar10 + 0xff4);
      uStack_140 = *(undefined4 *)(lVar10 + 0xff8);
      fStack_13c = *(float *)(lVar10 + 0xffc) * *(float *)(lVar10 + 0xc9c);
      uVar7 = FUN_1803d7f30(&local_148);
      *param_5 = uVar7;
      fVar23 = (float)(int)(float)*(undefined8 *)(lVar9 + 0x2284);
      fVar20 = (float)(int)(float)((ulonglong)*(undefined8 *)(lVar9 + 0x2284) >> 0x20);
      if ((fVar23 != 0.0) || (fVar20 != 0.0)) {
        local_res8 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20) + fVar20,
                              (float)*(undefined8 *)(param_1 + 0x38) + fVar23);
        puVar8 = (undefined8 *)FUN_1803e2390(&local_128,param_1,&local_res8);
        local_158 = (undefined1  [8])*puVar8;
        *(float *)(lVar9 + 0x2284) = *(float *)(lVar9 + 0x2284) - fVar23;
        *(float *)(lVar9 + 0x2288) = *(float *)(lVar9 + 0x2288) - fVar20;
      }
    }
  }
LAB_1803e388f:
  fVar23 = *(float *)(param_1 + 0x28);
  fVar20 = *(float *)(param_1 + 0x2c);
  fVar19 = *(float *)(param_1 + 0x38);
  fVar29 = *(float *)(param_1 + 0x3c);
  if (((float)local_158._0_4_ != fVar4) &&
     ((*(float *)(param_1 + 0x30) != (float)local_158._0_4_ || (fVar19 != (float)local_158._0_4_))))
  {
    *(undefined4 *)(param_1 + 0x38) = local_158._0_4_;
    *(undefined4 *)(param_1 + 0x30) = local_158._0_4_;
  }
  if (((float)local_158._4_4_ != fVar4) &&
     ((*(float *)(param_1 + 0x34) != (float)local_158._4_4_ || (fVar29 != (float)local_158._4_4_))))
  {
    *(undefined4 *)(param_1 + 0x3c) = local_158._4_4_;
    *(undefined4 *)(param_1 + 0x34) = local_158._4_4_;
  }
  fVar24 = fVar23;
  if ((local_138 != fVar4) && (fVar18 = (float)(int)local_138, fVar23 != fVar18)) {
    *(float *)(param_1 + 0x28) = fVar18;
    fVar24 = fVar18;
  }
  if ((local_134 != fVar4) && (fVar20 != (float)(int)local_134)) {
    *(float *)(param_1 + 0x2c) = (float)(int)local_134;
  }
  if (((((fVar23 != fVar24) || (fVar20 != *(float *)(param_1 + 0x2c))) ||
       (fVar19 != *(float *)(param_1 + 0x38))) || (fVar29 != *(float *)(param_1 + 0x3c))) &&
     (((*(uint *)(param_1 + 0x14) & 0x100) == 0 && (*(float *)(DAT_180ca0a50 + 0x27a4) <= 0.0)))) {
    *(undefined4 *)(DAT_180ca0a50 + 0x27a4) = *(undefined4 *)(DAT_180ca0a50 + 0x44);
  }
  if (*local_res18 != 0xffffffff) {
    puVar8 = (undefined8 *)FUN_1803e2ae0(&local_148,param_1);
    uVar16 = puVar8[1];
    *(undefined8 *)(lVar9 + 0x26a0) = *puVar8;
    *(undefined8 *)(lVar9 + 0x26a8) = uVar16;
  }
  return uVar12;
}



/* ===== 1803e3a30 FUN_1803e3a30 ===== */

void FUN_1803e3a30(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float local_res8;
  float local_resc;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  fVar1 = *(float *)(param_1 + 0x60);
  lVar3 = (longlong)param_2 * 0x1c;
  FUN_1803e2ae0(&local_78,param_1,param_2,fVar1,0);
  fVar2 = DAT_1808ac1f4;
  fVar4 = local_70 - local_78;
  fVar5 = local_6c - local_74;
  local_res8 = fVar4 * *(float *)(&DAT_1806c24e8 + lVar3) + local_78 + DAT_1808ac1f4 +
               fVar1 * *(float *)(&DAT_1806c24e0 + lVar3);
  local_resc = fVar5 * *(float *)(&DAT_1806c24ec + lVar3) + local_74 + DAT_1808ac1f4 +
               fVar1 * *(float *)(&DAT_1806c24e4 + lVar3);
  FUN_1803fddf0(*(undefined8 *)(param_1 + 0x2c8),&local_res8,fVar1,
                *(float *)(&DAT_1806c24f8 + lVar3) - DAT_1808ac28c,
                *(float *)(&DAT_1806c24f8 + lVar3),0);
  local_res8 = fVar4 * *(float *)(&DAT_1806c24f0 + lVar3) + local_78 + fVar2 +
               fVar1 * *(float *)(&DAT_1806c24e0 + lVar3);
  local_resc = fVar5 * *(float *)(&DAT_1806c24f4 + lVar3) + local_74 + fVar2 +
               fVar1 * *(float *)(&DAT_1806c24e4 + lVar3);
  FUN_1803fddf0(*(undefined8 *)(param_1 + 0x2c8),&local_res8,fVar1,
                *(float *)(&DAT_1806c24f8 + lVar3),
                *(float *)(&DAT_1806c24f8 + lVar3) + DAT_1808ac28c,0);
  lVar3 = *(longlong *)(param_1 + 0x2c8);
  FUN_1803fc600(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),param_3,param_4,0)
  ;
  *(undefined4 *)(lVar3 + 0x50) = 0;
  return;
}



/* ===== 1803e3c40 FUN_1803e3c40 ===== */

void FUN_1803e3c40(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  float fVar9;
  float local_res8;
  float local_resc;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  lVar3 = DAT_180ca0a50;
  fVar2 = *(float *)(param_1 + 100);
  local_48 = *(float *)(DAT_180ca0a50 + 0xe30);
  fStack_44 = *(float *)(DAT_180ca0a50 + 0xe34);
  fStack_40 = *(float *)(DAT_180ca0a50 + 0xe38);
  fStack_3c = *(float *)(DAT_180ca0a50 + 0xe3c) * *(float *)(DAT_180ca0a50 + 0xc9c);
  uVar4 = FUN_1803d7f30(&local_48);
  if (0.0 < fVar2) {
    if ((*(byte *)(param_1 + 0x14) & 0x80) == 0) {
      local_res8 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x28);
      local_resc = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x2c);
      FUN_1803fe480(*(undefined8 *)(param_1 + 0x2c8),(float *)(param_1 + 0x28),&local_res8,uVar4,
                    *(undefined4 *)(param_1 + 0x60),fVar2,0);
    }
    else {
      if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
        FUN_1803e3a30(param_1,1,uVar4,fVar2);
      }
      if ((*(byte *)(param_1 + 0x18) & 8) != 0) {
        FUN_1803e3a30(param_1,3,uVar4,fVar2);
      }
    }
  }
  cVar8 = *(char *)(param_1 + 0xd8);
  if ((cVar8 != -1) || (*(char *)(param_1 + 0xd9) != -1)) {
    cVar7 = *(char *)(param_1 + 0xd9);
    fVar9 = DAT_1808ac540;
    if (DAT_1808ac540 <= *(float *)(param_1 + 100)) {
      fVar9 = *(float *)(param_1 + 100);
    }
    lVar6 = 800;
    if (cVar7 != -1) {
      lVar6 = 0x330;
    }
    pfVar1 = (float *)(lVar6 + 0xc90 + DAT_180ca0a50);
    local_48 = *pfVar1;
    fStack_44 = pfVar1[1];
    fStack_40 = pfVar1[2];
    fStack_3c = pfVar1[3] * *(float *)(DAT_180ca0a50 + 0xc9c);
    uVar5 = FUN_1803d7f30(&local_48);
    if (cVar7 == -1) {
      cVar7 = cVar8;
    }
    FUN_1803e3a30(param_1,(int)cVar7,uVar5,fVar9);
  }
  if (((0.0 < *(float *)(lVar3 + 0xce8)) && ((*(byte *)(param_1 + 0x14) & 1) == 0)) &&
     ((uVar4 & 0xff000000) != 0)) {
    fStack_44 = ((*(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x2c)) - DAT_1808ac34c) +
                DAT_1808ac1f4;
    fStack_40 = ((*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x30)) - fVar2 * DAT_1808ac1f4)
                + DAT_1808ac1f4;
    local_48 = *(float *)(param_1 + 0x28) + fVar2 * DAT_1808ac1f4 + DAT_1808ac1f4;
    fStack_3c = fStack_44;
    FUN_1803fc600(*(undefined8 *)(param_1 + 0x2c8),&local_48,2,uVar4,*(float *)(lVar3 + 0xce8),0);
  }
  return;
}



/* ===== 1803e3e90 FUN_1803e3e90 ===== */

void FUN_1803e3e90(longlong param_1,undefined8 *param_2,byte param_3,char param_4,int param_5,
                  longlong param_6,float param_7)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  float *pfVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_res8;
  float local_resc;
  undefined8 in_stack_fffffffffffffee0;
  undefined8 uVar19;
  undefined4 *puVar20;
  float local_108;
  float fStack_104;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined2 local_f7;
  undefined1 local_f5;
  undefined1 local_f4;
  undefined2 local_f3;
  undefined1 local_f1;
  undefined1 local_f0;
  undefined2 local_ef;
  undefined1 local_ed;
  undefined1 local_ec;
  undefined2 uStack_eb;
  undefined1 uStack_e9;
  undefined1 local_e8;
  undefined2 local_e7;
  undefined1 local_e5;
  undefined1 local_e4;
  undefined2 local_e3;
  undefined1 local_e1;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined1 local_dc;
  undefined2 uStack_db;
  undefined1 uStack_d9;
  float local_d8;
  float local_d4;
  uint local_d0;
  float local_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  
  lVar3 = DAT_180ca0a50;
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffee0 >> 0x20);
  fVar1 = *(float *)(param_1 + 0x60);
  fVar2 = *(float *)(param_1 + 100);
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined4 *)(param_1 + 0x170) = 1;
  fVar4 = DAT_1808ac1f4;
  if (*(char *)(param_1 + 0xcf) == '\0') {
    uVar14 = *(uint *)(param_1 + 0x14);
    lVar11 = lVar3;
    if (-1 < (char)uVar14) {
      if ((uVar14 & 0x6000000) == 0) {
        uVar12 = ((ulonglong)(uVar14 & 0x1000000) | 0xe0000000) >> 0x14;
      }
      else {
        uVar12 = 0xe20;
      }
      pfVar13 = (float *)(uVar12 + lVar3);
      local_108 = *pfVar13;
      fStack_104 = pfVar13[1];
      uStack_100 = CONCAT44(pfVar13[3] * *(float *)(lVar3 + 0xc9c),pfVar13[2]);
      uVar9 = FUN_1803d7f30(&local_108);
      if ((*(byte *)(lVar3 + 0x1f38) & 0x40) != 0) {
        fVar18 = *(float *)(lVar3 + 0x1fa8);
        if (0.0 <= fVar18) {
          fVar16 = DAT_1808ac34c;
          if (fVar18 <= DAT_1808ac34c) {
            fVar16 = fVar18;
          }
        }
        else {
          fVar16 = 0.0;
        }
        uVar9 = (int)(fVar16 * DAT_1808acb94 + fVar4) << 0x18;
      }
      if ((uVar9 & 0xff000000) != 0) {
        fVar18 = (float)*(undefined8 *)(param_1 + 0x28);
        fVar16 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
        local_108 = fVar18 + 0.0;
        fStack_104 = fVar16 + *(float *)(param_1 + 0x68);
        uVar8 = 0xc0;
        if ((uVar14 & 1) != 0) {
          uVar8 = 0xf0;
        }
        uVar19 = CONCAT44(uVar10,uVar8);
        uStack_100 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20) + fVar16,
                              (float)*(undefined8 *)(param_1 + 0x30) + fVar18);
        FUN_1803fe590(*(undefined8 *)(param_1 + 0x2c8),&local_108,&uStack_100,fVar18,fVar1,uVar19);
        uVar10 = (undefined4)((ulonglong)uVar19 >> 0x20);
        lVar11 = DAT_180ca0a50;
      }
    }
    if (((0.0 < *(float *)(lVar3 + 0xdd4)) && ((uVar14 & 0x5000000) != 0x1000000)) &&
       (0.0 < *(float *)(lVar3 + 0x11bc))) {
      local_108 = *(float *)(lVar11 + 0x11b0);
      fStack_104 = *(float *)(lVar11 + 0x11b4);
      uVar10 = *(undefined4 *)(lVar11 + 0xddc);
      fVar18 = *(float *)(lVar11 + 0xdd8);
      uStack_100 = CONCAT44(*(float *)(lVar11 + 0x11bc) * *(float *)(lVar11 + 0xc9c),
                            *(undefined4 *)(lVar11 + 0x11b8));
      local_res8 = (float)FUN_180517200(uVar10);
      local_res8 = local_res8 * fVar18;
      local_resc = (float)FUN_180517790(uVar10);
      local_d8 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x28);
      local_resc = local_resc * fVar18;
      local_d4 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x2c);
      uVar10 = FUN_1803d7f30(&local_108);
      puVar20 = &local_res8;
      FUN_1804000e0(*(undefined8 *)(param_1 + 0x2c8),param_1 + 0x28,&local_d8,uVar10,
                    *(undefined4 *)(lVar11 + 0xdd4),puVar20,0x100000,*(undefined4 *)(param_1 + 0x60)
                   );
      uVar10 = (undefined4)((ulonglong)puVar20 >> 0x20);
      lVar11 = DAT_180ca0a50;
    }
    if ((uVar14 & 1) == 0) {
      pfVar13 = (float *)(lVar11 + 0xc90 + ((ulonglong)param_3 + 0x1f) * 0x10);
      local_108 = *pfVar13;
      fStack_104 = pfVar13[1];
      uStack_100 = CONCAT44(pfVar13[3] * *(float *)(lVar11 + 0xc9c),pfVar13[2]);
      uVar8 = FUN_1803d7f30(&local_108);
      uVar19 = CONCAT44(uVar10,0x30);
      FUN_1803fe590(*(undefined8 *)(param_1 + 0x2c8),param_2,param_2 + 1,uVar8,fVar1,uVar19);
      uVar10 = (undefined4)((ulonglong)uVar19 >> 0x20);
      lVar11 = DAT_180ca0a50;
    }
    if ((uVar14 >> 10 & 1) != 0) {
      fVar18 = *(float *)(param_1 + 0x28);
      fVar16 = *(float *)(param_1 + 0x2c);
      fVar17 = fVar16 + *(float *)(param_1 + 0x68);
      fStack_104 = fVar17;
      if (fVar17 <= fVar16) {
        fStack_104 = fVar16;
      }
      fVar16 = fVar16 + *(float *)(param_1 + 0x34);
      fVar17 = fVar17 + *(float *)(param_1 + 0x6c);
      fVar15 = fVar18 + *(float *)(param_1 + 0x30);
      if (fVar16 <= fVar17) {
        fVar17 = fVar16;
      }
      fVar16 = fVar18 + *(float *)(param_1 + 0x38);
      if (fVar15 <= fVar16) {
        fVar16 = fVar15;
      }
      uStack_100 = CONCAT44(fVar17,fVar16);
      if ((uVar14 & 1) == 0) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = fVar1;
      }
      local_c8 = *(float *)(lVar11 + 0xeb0);
      fStack_c4 = *(float *)(lVar11 + 0xeb4);
      uStack_c0 = *(undefined4 *)(lVar11 + 0xeb8);
      fStack_bc = *(float *)(lVar11 + 0xebc) * *(float *)(lVar11 + 0xc9c);
      local_108 = fVar18;
      uVar8 = FUN_1803d7f30(&local_c8);
      uVar12 = CONCAT44(uVar10,0x30);
      FUN_1803fe590(*(undefined8 *)(param_1 + 0x2c8),&local_108,&uStack_100,uVar8,fVar15,uVar12);
      fVar15 = *(float *)(lVar3 + 0xce8);
      if ((0.0 < fVar15) && (fVar17 < *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x2c))) {
        local_108 = *(float *)(DAT_180ca0a50 + 0xe30);
        fStack_104 = *(float *)(DAT_180ca0a50 + 0xe34);
        uStack_100 = CONCAT44(*(float *)(DAT_180ca0a50 + 0xe3c) * *(float *)(DAT_180ca0a50 + 0xc9c),
                              *(undefined4 *)(DAT_180ca0a50 + 0xe38));
        uVar9 = FUN_1803d7f30(&local_108);
        if ((uVar9 & 0xff000000) != 0) {
          fStack_104 = fVar17 + fVar4;
          local_108 = fVar18 + fVar2 * fVar4 + fVar4;
          uStack_100 = CONCAT44(fStack_104,(fVar16 - fVar2 * fVar4) + fVar4);
          FUN_1803fc600(*(undefined8 *)(param_1 + 0x2c8),&local_108,2,uVar9,fVar15,
                        uVar12 & 0xffffffff00000000);
        }
      }
    }
    if (*(char *)(param_1 + 200) != '\0') {
      FUN_180416590(0);
    }
    if (*(char *)(param_1 + 0xc9) != '\0') {
      FUN_180416590(1);
    }
    if (param_4 != '\0') {
      if (((uVar14 & 2) == 0) && (0 < param_5)) {
        uVar14 = 0;
        do {
          uVar12 = (ulonglong)uVar14;
          uVar9 = *(uint *)(param_6 + uVar12 * 4);
          if ((uVar9 & 0xff000000) != 0) {
            fVar18 = *(float *)(param_1 + 0x28);
            fVar16 = *(float *)(param_1 + 0x2c);
            local_d0 = uVar14 & 1;
            fVar17 = (float)(int)(fVar2 * fVar4 + fVar4);
            fVar18 = ((fVar18 + *(float *)(param_1 + 0x30)) - fVar18) *
                     (float)(&DAT_1806c2560)[uVar12 * 6] + fVar18;
            fVar16 = ((fVar16 + *(float *)(param_1 + 0x34)) - fVar16) *
                     (float)(&DAT_1806c2564)[uVar12 * 6] + fVar16;
            local_res8._0_1_ = SUB41(fVar17,0);
            uVar5 = (undefined1)local_res8;
            local_res8._1_2_ = (undefined2)((uint)fVar17 >> 8);
            uVar6 = local_res8._1_2_;
            local_res8._3_1_ = (undefined1)((uint)fVar17 >> 0x18);
            uVar7 = local_res8._3_1_;
            if (local_d0 == 0) {
              local_f8 = param_7._0_1_;
              local_f7 = param_7._1_2_;
              local_f5 = param_7._3_1_;
              local_f4 = (undefined1)local_res8;
              local_f3 = local_res8._1_2_;
              local_f1 = local_res8._3_1_;
              fVar15 = param_7;
            }
            else {
              local_ec = param_7._0_1_;
              uStack_eb = param_7._1_2_;
              uStack_e9 = param_7._3_1_;
              local_f0 = (undefined1)local_res8;
              local_ef = local_res8._1_2_;
              local_ed = local_res8._3_1_;
              fVar15 = fVar17;
            }
            pfVar13 = (float *)&local_f4;
            if (local_d0 != 0) {
              pfVar13 = (float *)&local_ec;
            }
            local_c8 = fVar18 + fVar15 * (float)(&DAT_1806c2568)[uVar12 * 6];
            fStack_c4 = fVar16 + (float)(&DAT_1806c256c)[uVar12 * 6] * *pfVar13;
            local_res8 = fVar17;
            FUN_18000b9c0(*(longlong *)(param_1 + 0x2c8) + 0x50,&local_c8);
            if (local_d0 == 0) {
              local_e4 = param_7._0_1_;
              local_e3 = param_7._1_2_;
              local_e1 = param_7._3_1_;
              local_e8 = uVar5;
              local_e7 = uVar6;
              local_e5 = uVar7;
              fVar15 = fVar17;
            }
            else {
              local_e0 = param_7._0_1_;
              local_df = param_7._1_2_;
              local_dd = param_7._3_1_;
              local_dc = uVar5;
              uStack_db = uVar6;
              uStack_d9 = uVar7;
              fVar15 = param_7;
            }
            pfVar13 = (float *)&local_e4;
            if (local_d0 != 0) {
              pfVar13 = (float *)&local_dc;
            }
            local_108 = fVar18 + fVar15 * (float)(&DAT_1806c2568)[uVar12 * 6];
            fStack_104 = fVar16 + (float)(&DAT_1806c256c)[uVar12 * 6] * *pfVar13;
            FUN_18000b9c0(*(longlong *)(param_1 + 0x2c8) + 0x50,&local_108);
            local_d4 = (fVar17 + fVar1) * (float)(&DAT_1806c256c)[uVar12 * 6] + fVar16;
            local_d8 = (fVar17 + fVar1) * (float)(&DAT_1806c2568)[uVar12 * 6] + fVar18;
            if (fVar4 <= fVar1) {
              FUN_1803fd9d0(*(longlong *)(param_1 + 0x2c8),&local_d8,fVar1,
                            *(int *)(&DAT_1806c2570 + uVar12 * 0x18) << 2,
                            *(int *)(&DAT_1806c2574 + uVar12 * 0x18) << 2);
            }
            else {
              FUN_18000b9c0(*(longlong *)(param_1 + 0x2c8) + 0x50);
            }
            lVar3 = *(longlong *)(param_1 + 0x2c8);
            FUN_1803fd460(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),uVar9);
            *(undefined4 *)(lVar3 + 0x50) = 0;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < param_5);
      }
      FUN_1803e3c40(param_1);
    }
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  else {
    uVar10 = *(undefined4 *)(lVar3 + 0xce8);
    *(float *)(lVar3 + 0xce8) = fVar2;
    if ((param_3 == 0) || (lVar11 = 0xe90, *(char *)(lVar3 + 0x2060) == '\0')) {
      lVar11 = 0xea0;
    }
    pfVar13 = (float *)(lVar11 + lVar3);
    local_108 = *pfVar13;
    fStack_104 = pfVar13[1];
    uStack_100 = CONCAT44(pfVar13[3] * *(float *)(lVar3 + 0xc9c),pfVar13[2]);
    uVar8 = FUN_1803d7f30(&local_108);
    FUN_1803d9cb0(*param_2,param_2[1],uVar8,1,fVar1);
    *(undefined4 *)(lVar3 + 0xce8) = uVar10;
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  return;
}



/* ===== 1803e4730 FUN_1803e4730 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803e4730(longlong *param_1,float *param_2,char *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 uVar15;
  char cVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  char local_res8 [8];
  char local_res10 [8];
  undefined8 local_res18;
  float local_res20;
  float local_res24;
  undefined8 in_stack_fffffffffffffea8;
  uint uVar27;
  ulonglong uVar25;
  undefined4 uVar28;
  undefined8 uVar26;
  ulonglong in_stack_fffffffffffffeb0;
  undefined8 local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  
  lVar6 = DAT_180ca0a50;
  uVar27 = (uint)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  uVar14 = *(uint *)((longlong)param_1 + 0x14);
  if (((uVar14 & 0x20) == 0) && (*(int *)(DAT_180ca0a50 + 0xcc8) != -1)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  uVar2 = *(uint *)(DAT_180ca0a50 + 0x1ea8);
  local_108 = 0;
  *(uint *)(DAT_180ca0a50 + 0x1ea8) = uVar2 | 4;
  *(undefined4 *)(param_1 + 0x2e) = 1;
  fVar19 = DAT_1808ac34c;
  fVar21 = *(float *)(lVar6 + 0xcdc);
  fVar24 = *(float *)(lVar6 + 0x1200);
  fVar22 = fVar21;
  if (param_4 != (undefined1 *)0x0) {
    fVar22 = fVar24 + *(float *)(lVar6 + 0xcf4) + fVar21;
    local_108 = CONCAT44(*(float *)(lVar6 + 0xce0) + param_2[1],(param_2[2] - fVar21) - fVar24);
  }
  local_res18 = param_3;
  if (bVar4) {
    fVar20 = 0.0;
    fVar23 = 0.0;
    if (*(int *)(lVar6 + 0xcc8) == 1) {
      fVar23 = param_2[1] + *(float *)(lVar6 + 0xce0);
      fVar20 = param_2[2] - fVar22;
      fVar22 = *(float *)(lVar6 + 0xcf4) + fVar24 + fVar22;
      fVar20 = fVar20 - fVar24;
    }
    if (*(int *)(lVar6 + 0xcc8) == 0) {
      fVar20 = fVar21 + *param_2;
      fVar23 = param_2[1] + *(float *)(lVar6 + 0xce0);
      fVar21 = *(float *)(lVar6 + 0xcf4) + fVar24 + fVar21;
    }
    iVar10 = FUN_1803d7830("#COLLAPSE",0,
                           *(undefined4 *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4));
    if (*(int *)(*param_1 + 0x155c) == iVar10) {
      FUN_1803f5630(iVar10,0xb,"#COLLAPSE");
    }
    lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    local_f0 = *(float *)(DAT_180ca0a50 + 0x1200) + fVar20;
    local_ec = *(float *)(DAT_180ca0a50 + 0x1200) + fVar23;
    local_f8 = fVar20;
    fStack_f4 = fVar23;
    cVar8 = FUN_1803ec2f0(&local_f8,iVar10,0,0);
    uVar25 = (ulonglong)uVar27 << 0x20;
    uVar9 = FUN_180415270(&local_f8,iVar10,local_res8,local_res10,uVar25);
    uVar27 = (uint)(uVar25 >> 0x20);
    local_res20 = (float)CONCAT31(local_res20._1_3_,uVar9);
    if (cVar8 != '\0') {
      if ((local_res10[0] == '\0') || (local_res8[0] == '\0')) {
        lVar13 = (ulonglong)(local_res8[0] != '\0') + 0x16;
      }
      else {
        lVar13 = 0x18;
      }
      fVar20 = *(float *)(DAT_180ca0a50 + 0xc9c);
      puVar1 = (undefined4 *)(DAT_180ca0a50 + 0xc90 + (lVar13 + 0x15) * 0x10);
      local_d8 = *puVar1;
      uStack_d4 = puVar1[1];
      uStack_d0 = puVar1[2];
      fStack_cc = (float)puVar1[3] * fVar20;
      lVar13 = DAT_180ca0a50;
      cVar8 = local_res8[0];
      cVar16 = local_res10[0];
      uVar11 = FUN_1803d7f30(&local_d8);
      local_d8 = *(undefined4 *)(lVar13 + 0xde0);
      uStack_d4 = *(undefined4 *)(lVar13 + 0xde4);
      uStack_d0 = *(undefined4 *)(lVar13 + 0xde8);
      fStack_cc = *(float *)(lVar13 + 0xdec) * fVar20;
      uVar12 = FUN_1803d7f30(&local_d8);
      uVar28 = (undefined4)(uVar25 >> 0x20);
      if ((cVar8 != '\0') || (cVar16 != '\0')) {
        uVar25 = uVar25 & 0xffffffff00000000;
        FUN_1803fe590(*(undefined8 *)(lVar3 + 0x2c8),&local_f8,&local_f0,uVar11,uVar25,
                      in_stack_fffffffffffffeb0 & 0xffffffff00000000);
        uVar28 = (undefined4)(uVar25 >> 0x20);
      }
      FUN_1803d9fd0(&local_f8,iVar10,2);
      uVar15 = 3;
      if (*(char *)(lVar3 + 0xcf) != '\0') {
        uVar15 = 1;
      }
      uVar26 = CONCAT44(uVar28,fVar19);
      FUN_18040b100(*(undefined8 *)(lVar3 + 0x2c8),CONCAT44(fStack_f4,local_f8),uVar12,uVar15,uVar26
                   );
      uVar27 = (uint)((ulonglong)uVar26 >> 0x20);
      if ((((*(int *)(DAT_180ca0a50 + 0x1578) != 0) &&
           (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) &&
          (*(char *)(DAT_180ca0a50 + 0x118) != '\0')) &&
         (*(float *)(DAT_180ca0a50 + 0xa0) * *(float *)(DAT_180ca0a50 + 0xa0) <=
          *(float *)(DAT_180ca0a50 + 0xbc4))) {
        FUN_1803de0f0(lVar3);
      }
    }
    if (local_res20._0_1_ != '\0') {
      *(undefined1 *)(param_1 + 0x1a) = 1;
    }
  }
  pcVar7 = local_res18;
  if (param_4 != (undefined1 *)0x0) {
    *(uint *)(lVar6 + 0x1ea8) = *(uint *)(lVar6 + 0x1ea8) | 0x20000;
    iVar10 = FUN_1803d7830("#CLOSE",0,
                           *(undefined4 *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4));
    if (*(int *)(*param_1 + 0x155c) == iVar10) {
      FUN_1803f5630(iVar10,0xb,"#CLOSE");
    }
    cVar8 = FUN_1804161f0(iVar10,&local_108);
    if (cVar8 != '\0') {
      *param_4 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(uint *)(lVar6 + 0x1ea8) = uVar2;
  uVar14 = uVar14 & 0x40000;
  pcVar5 = pcVar7;
  if (uVar14 == 0) {
    fVar24 = 0.0;
  }
  else {
    fVar24 = fVar24 * DAT_1808ac294;
  }
  for (; ((pcVar5 != (char *)0xffffffffffffffff && (*pcVar5 != '\0')) &&
         ((*pcVar5 != '#' || (pcVar5[1] != '#')))); pcVar5 = pcVar5 + 1) {
  }
  if (pcVar7 == pcVar5) {
    local_res20 = 0.0;
    local_res24 = *(float *)(DAT_180ca0a50 + 0x1200);
  }
  else {
    FUN_18040a2f0(&local_res18,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                  *(float *)(DAT_180ca0a50 + 0x1200));
    local_res20 = (float)(int)((uint)((float)(int)(float)local_res18 < (float)local_res18) +
                              (int)(float)local_res18);
    local_res24 = local_res18._4_4_;
  }
  fVar20 = DAT_1808ac1f4;
  local_res20 = local_res20 + fVar24;
  local_res24 = local_res24 + 0.0;
  if (*(float *)(lVar6 + 0xcdc) < fVar21) {
    fVar21 = fVar21 + *(float *)(lVar6 + 0xcf4);
  }
  if (*(float *)(lVar6 + 0xcdc) < fVar22) {
    fVar22 = *(float *)(lVar6 + 0xcf4) + fVar22;
  }
  fVar23 = *(float *)(lVar6 + 0xcc0);
  if ((0.0 < fVar23) && (fVar23 < fVar19)) {
    fVar17 = (float)((uint)(fVar23 - DAT_1808ac1f4) & _DAT_1808ade90);
    fVar18 = fVar19 - (fVar17 + fVar17);
    fVar17 = 0.0;
    if ((0.0 <= fVar18) && (fVar17 = fVar19, fVar18 <= fVar19)) {
      fVar17 = fVar18;
    }
    fVar19 = fVar21;
    if (fVar21 <= fVar22) {
      fVar19 = fVar22;
    }
    fVar18 = (((param_2[2] - *param_2) - fVar21) - fVar22) - local_res20;
    if (fVar18 <= fVar19) {
      fVar19 = fVar18;
    }
    fVar19 = fVar19 * fVar17;
    if (fVar21 <= fVar19) {
      fVar21 = fVar19;
    }
    if (fVar22 <= fVar19) {
      fVar22 = fVar19;
    }
  }
  fVar19 = param_2[2];
  fVar17 = param_2[1];
  fVar18 = param_2[3];
  local_e0 = fVar19 - fVar22;
  fVar22 = *(float *)(lVar6 + 0xcf4) + local_e0;
  local_e8 = fVar21 + *param_2;
  if (fVar19 <= fVar22) {
    fVar22 = fVar19;
  }
  local_108 = CONCAT44(fVar17,local_e8);
  local_100 = fVar22;
  local_fc = fVar18;
  local_e4 = fVar17;
  local_dc = fVar18;
  if (uVar14 != 0) {
    fVar21 = ((local_e0 - local_e8) - local_res20) * fVar23 + local_e8 + local_res20;
    if (local_e8 <= fVar21) {
      fVar19 = local_e0;
      if (fVar21 <= local_e0) {
        fVar19 = fVar21;
      }
    }
    else {
      fVar19 = local_e8;
    }
    if (local_e8 < fVar19) {
      local_d8 = *(undefined4 *)(DAT_180ca0a50 + 0x1160);
      uStack_d4 = *(undefined4 *)(DAT_180ca0a50 + 0x1164);
      uStack_d0 = *(undefined4 *)(DAT_180ca0a50 + 0x1168);
      fStack_cc = *(float *)(DAT_180ca0a50 + 0x116c) * *(float *)(DAT_180ca0a50 + 0xc9c);
      uVar11 = FUN_1803d7f30(&local_d8);
      fVar21 = *(float *)(*(longlong *)(param_1[0x59] + 0x38) + 0x20);
      local_res18 = (char *)CONCAT44((fVar18 + fVar17) * fVar20,fVar19);
      if (DAT_1808ac964 <= fVar21) {
        uVar12 = 0;
        if (fVar21 < DAT_1808aca54) {
          uVar12 = 0xc;
        }
      }
      else {
        uVar12 = 8;
      }
      FUN_1803fe9d0(param_1[0x59],&local_res18,fVar21 * DAT_1808ac118,uVar11,CONCAT44(uVar27,uVar12)
                   );
      fVar19 = fVar19 - (float)(int)(fVar24 * fVar20);
      local_100 = fVar22;
      if (fVar19 <= fVar22) {
        local_100 = fVar19;
      }
    }
  }
  FUN_1803d9560(&local_e8,&local_e0,pcVar7,0,&local_res20,(float *)(lVar6 + 0xcc0),&local_108);
  return;
}



/* ===== 1803e4eb0 FUN_1803e4eb0 ===== */

void FUN_1803e4eb0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(undefined1 *)(param_1 + 0xcc) = 1;
  plVar3 = *(longlong **)(param_1 + 0x1b8);
  plVar1 = plVar3 + *(int *)(param_1 + 0x1b0);
  if (((longlong)*(int *)(param_1 + 0x1b0) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar2 = *plVar3;
      if (*(char *)(lVar2 + 0xd4) == '\0') {
        *(undefined1 *)(lVar2 + 0xd2) = 1;
        *(undefined1 *)(lVar2 + 0xcc) = 1;
        FUN_1803e4eb0();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  return;
}



/* ===== 1803e4f20 FUN_1803e4f20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1803e4f20(char *param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  undefined2 uVar8;
  short sVar9;
  code *pcVar10;
  int iVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  longlong lVar18;
  char *_Str;
  short sVar19;
  undefined1 uVar20;
  char cVar21;
  int iVar22;
  uint uVar23;
  undefined4 uVar24;
  longlong lVar25;
  size_t sVar26;
  char *_Str2;
  undefined8 uVar27;
  float *pfVar28;
  float *pfVar29;
  byte bVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  uint uVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  undefined1 *puVar38;
  int *piVar39;
  longlong *plVar40;
  undefined4 *puVar41;
  char cVar42;
  bool bVar43;
  int iVar44;
  longlong *plVar45;
  char cVar46;
  uint uVar47;
  ulonglong uVar48;
  uint uVar49;
  longlong lVar50;
  bool bVar51;
  bool bVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auStack_218 [32];
  float *local_1f8;
  float *local_1f0;
  float local_1e8;
  char local_1d8;
  bool local_1d7;
  char local_1d6;
  byte local_1d5;
  char local_1d4;
  uint local_1d0;
  int local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  int local_1bc;
  uint local_1b8;
  longlong local_1b0;
  uint local_1a8;
  float local_1a0;
  float local_19c;
  longlong local_198;
  uint local_190;
  undefined4 local_18c;
  undefined4 local_188;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  uint local_170;
  uint local_16c;
  char *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  float local_150;
  float local_14c;
  longlong local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  longlong local_120;
  float local_118;
  float fStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  float local_e0 [4];
  ulonglong local_d0;
  
  lVar18 = DAT_180ca0a50;
  pfVar29 = &local_118;
  local_d0 = DAT_180919500 ^ (ulonglong)auStack_218;
  local_168 = param_1;
  local_148 = param_2;
  lVar25 = FUN_1803e1ee0();
  bVar51 = lVar25 == 0;
  local_1d5 = bVar51;
  local_198 = lVar25;
  if (lVar25 == 0) {
    lVar25 = FUN_1803e2090(param_1,param_3);
  }
  if (*(int *)(lVar18 + 0x14f0) == *(int *)(lVar25 + 0x10)) {
    pcVar10 = (code *)swi(3);
    uVar20 = (*pcVar10)();
    return uVar20;
  }
  if ((*(uint *)(lVar18 + 0x1f38) & 0x100) != 0) {
    param_3 = (param_3 | *(uint *)(lVar18 + 0x1f70)) & ~*(uint *)(lVar18 + 0x1f74);
  }
  local_1cc = *(int *)(lVar25 + 0x290);
  uVar49 = param_3 | 6;
  if ((param_3 & 0x30200) != 0x30200) {
    uVar49 = param_3;
  }
  iVar22 = *(int *)(lVar18 + 4);
  if ((*(int *)(lVar18 + 0x14c8) == 0) && (*(char *)(lVar18 + 2) != '\0')) {
    uVar20 = 1;
  }
  else {
    uVar20 = 0;
  }
  *(undefined1 *)(lVar25 + 0xd5) = uVar20;
  local_1c0 = CONCAT31((int3)((param_3 & 0x30200) >> 8),local_1cc < iVar22 + -1);
  if (((uVar49 >> 0x1a & 1) != 0) &&
     (lVar35 = (longlong)*(int *)(lVar18 + 0x2030) * 0x58,
     local_1c0 = (uint)(lVar25 != *(longlong *)(lVar35 + 8 + *(longlong *)(lVar18 + 0x2028)) ||
                       *(int *)(lVar25 + 0x94) != *(int *)(lVar35 + *(longlong *)(lVar18 + 0x2028)))
     , local_1cc < iVar22 + -1)) {
    local_1c0 = 1;
  }
  *(char *)(lVar25 + 0xd3) = (char)local_1c0;
  if ((char)local_1c0 != '\0') {
    *(byte *)(lVar25 + 0xf1) = *(byte *)(lVar25 + 0xf1) | 8;
    *(byte *)(lVar25 + 0xf2) = *(byte *)(lVar25 + 0xf2) | 8;
    *(byte *)(lVar25 + 0xf3) = (byte)((uint)*(undefined4 *)(lVar25 + 0xf0) >> 0x18) | 8;
  }
  local_1bc = iVar22;
  if (local_1cc == iVar22) {
    uVar49 = *(uint *)(lVar25 + 0x14);
  }
  else {
    FUN_1803eed20(lVar25,bVar51,uVar49);
    *(uint *)(lVar25 + 0x14) = uVar49;
    if ((*(uint *)(lVar18 + 0x1f38) & 0x200) == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = *(undefined4 *)(lVar18 + 0x1f78);
    }
    *(undefined4 *)(lVar25 + 0x18) = uVar24;
    *(int *)(lVar25 + 0x290) = iVar22;
    dVar7 = *(double *)(lVar18 + 0x10);
    *(undefined2 *)(lVar25 + 0xde) = 0;
    *(float *)(lVar25 + 0x294) = (float)dVar7;
    uVar8 = *(undefined2 *)(lVar18 + 0x14e8);
    *(int *)(lVar18 + 0x14e8) = *(int *)(lVar18 + 0x14e8) + 1;
    *(undefined2 *)(lVar25 + 0xe0) = uVar8;
  }
  if (*(int *)(lVar18 + 0x14c8) == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = *(longlong *)
              (((longlong)*(int *)(lVar18 + 0x14c8) + -1) * 0x88 + *(longlong *)(lVar18 + 0x14d0));
  }
  if (local_1cc == iVar22) {
    local_1b0 = *(longlong *)(lVar25 + 0x3b0);
  }
  else {
    local_1b0 = 0;
    if ((uVar49 & 0x7000000) != 0) {
      local_1b0 = lVar35;
    }
  }
  if (*(int *)(lVar25 + 0x108) == 0) {
    if (*(int *)(lVar25 + 0x10c) == 0) {
      FUN_18007e1d0(lVar25 + 0x108,8);
    }
    *(undefined4 *)(*(longlong *)(lVar25 + 0x110) + (longlong)*(int *)(lVar25 + 0x108) * 4) =
         *(undefined4 *)(lVar25 + 0x10);
    *(int *)(lVar25 + 0x108) = *(int *)(lVar25 + 0x108) + 1;
  }
  *(longlong *)(lVar18 + 0x14f8) = lVar25;
  FUN_1803f6610(lVar18 + 0x14c8);
  lVar37 = *(longlong *)(lVar18 + 0x14d0);
  lVar50 = (longlong)*(int *)(lVar18 + 0x14c8) * 0x88;
  uVar47 = uVar49 & 0x2000000;
  *(longlong *)(lVar50 + -0x88 + lVar37) = lVar25;
  uVar27 = *(undefined8 *)(lVar18 + 0x1ef0);
  puVar3 = (undefined8 *)(lVar50 + -0x80 + lVar37);
  *puVar3 = *(undefined8 *)(lVar18 + 0x1ee8);
  puVar3[1] = uVar27;
  uVar27 = *(undefined8 *)(lVar18 + 0x1f00);
  puVar3 = (undefined8 *)(lVar50 + -0x70 + lVar37);
  *puVar3 = *(undefined8 *)(lVar18 + 0x1ef8);
  puVar3[1] = uVar27;
  uVar27 = *(undefined8 *)(lVar18 + 0x1f10);
  puVar3 = (undefined8 *)(lVar50 + -0x60 + lVar37);
  *puVar3 = *(undefined8 *)(lVar18 + 0x1f08);
  puVar3[1] = uVar27;
  uVar24 = *(undefined4 *)(lVar18 + 0x1f1c);
  uVar4 = *(undefined4 *)(lVar18 + 0x1f20);
  uVar5 = *(undefined4 *)(lVar18 + 0x1f24);
  puVar41 = (undefined4 *)(lVar50 + -0x50 + lVar37);
  *puVar41 = *(undefined4 *)(lVar18 + 0x1f18);
  puVar41[1] = uVar24;
  puVar41[2] = uVar4;
  puVar41[3] = uVar5;
  uVar27 = *(undefined8 *)(lVar18 + 0x1f30);
  puVar3 = (undefined8 *)(lVar50 + -0x40 + lVar37);
  *puVar3 = *(undefined8 *)(lVar18 + 0x1f28);
  puVar3[1] = uVar27;
  if ((uVar47 == 0) || ((*(byte *)(lVar18 + 0x1ea8) & 0x40) == 0)) {
    uVar20 = 0;
  }
  else {
    uVar20 = 1;
  }
  *(undefined1 *)(lVar50 + -0x1a + lVar37) = uVar20;
  lVar36 = lVar37 + -0x30 + lVar50;
  *(undefined4 *)(lVar50 + -0x18 + lVar37) = 0;
  local_170 = uVar47;
  FUN_1803eb550();
  *(longlong *)(lVar18 + 0x28e8) = lVar36;
  local_190 = uVar49 & 0x10000000;
  if (local_190 != 0) {
    *(int *)(lVar18 + 0x263c) = *(int *)(lVar18 + 0x263c) + 1;
  }
  fVar64 = DAT_1808ac34c;
  if (local_1cc != iVar22) {
    *(longlong *)(lVar25 + 0x3b0) = local_1b0;
    *(longlong *)(lVar25 + 0x3d8) = lVar25;
    *(longlong *)(lVar25 + 0x3d0) = lVar25;
    *(longlong *)(lVar25 + 0x3c8) = lVar25;
    *(longlong *)(lVar25 + 0x3c0) = lVar25;
    if (local_1b0 != 0) {
      if (((uVar49 >> 0x18 & 1) != 0) && (uVar47 == 0)) {
        *(undefined8 *)(lVar25 + 0x3c0) = *(undefined8 *)(local_1b0 + 0x3c0);
      }
      if ((uVar49 >> 0x1a & 1) != 0) {
        *(undefined8 *)(lVar25 + 0x3c8) = *(undefined8 *)(local_1b0 + 0x3c8);
      }
      if (((uVar49 >> 0x1b & 1) == 0) && ((uVar49 & 0x7000000) != 0)) {
        *(undefined8 *)(lVar25 + 0x3d0) = *(undefined8 *)(local_1b0 + 0x3d0);
      }
    }
    if ((*(uint *)(lVar25 + 0x18) & 0x100) != 0) {
      lVar36 = lVar25;
      do {
        lVar36 = *(longlong *)(lVar36 + 0x3b0);
        *(longlong *)(lVar25 + 0x3d8) = lVar36;
      } while ((*(uint *)(lVar36 + 0x18) & 0x100) != 0);
    }
    *(longlong *)(lVar25 + 0x3b8) = lVar35;
    lVar36 = 0;
    if ((uVar49 >> 0x18 & 1) != 0) {
      lVar36 = lVar35;
    }
    *(longlong *)(lVar25 + 0x3e0) = lVar36;
    if (local_1b0 == 0) {
      fVar56 = fVar64;
    }
    else {
      fVar56 = *(float *)(local_1b0 + 700) * *(float *)(local_1b0 + 0x2b8);
    }
    *(float *)(lVar25 + 700) = fVar56;
  }
  if ((*(uint *)(lVar25 + 0x18) & 0x100) == 0) {
    uVar24 = *(undefined4 *)(lVar25 + 0x10);
  }
  else {
    uVar24 = *(undefined4 *)(lVar18 + 0x1ea4);
  }
  FUN_1803e7ec0(uVar24);
  *(undefined4 *)(lVar25 + 0x428) = *(undefined4 *)(lVar18 + 0x1ea4);
  local_1c8 = uVar49 & 0x4000000;
  if (local_1c8 != 0) {
    puVar41 = (undefined4 *)
              ((longlong)*(int *)(lVar18 + 0x2030) * 0x58 + *(longlong *)(lVar18 + 0x2028));
    *(longlong *)(puVar41 + 2) = lVar25;
    puVar41[6] = *(undefined4 *)(lVar35 + 0x170);
    FUN_1803f6010();
    *(undefined4 *)(lVar25 + 0x94) = *puVar41;
    iVar22 = local_1bc;
  }
  bVar51 = false;
  local_1d6 = '\0';
  local_1d7 = false;
  local_1d8 = '\0';
  if ((*(byte *)(lVar18 + 0x1f38) & 1) != 0) {
    uVar47 = (uint)*(char *)(lVar25 + 0xf1);
    local_1d6 = (*(uint *)(lVar18 + 0x1f3c) & uVar47) != 0;
    if (((*(uint *)(lVar18 + 0x1f3c) & uVar47) == 0) ||
       (*(float *)(lVar18 + 0x1f54) * *(float *)(lVar18 + 0x1f54) +
        *(float *)(lVar18 + 0x1f50) * *(float *)(lVar18 + 0x1f50) <= DAT_1808abf94)) {
      FUN_1803e7c50(lVar25,lVar18 + 0x1f48);
    }
    else {
      *(undefined8 *)(lVar25 + 0xf4) = *(undefined8 *)(lVar18 + 0x1f48);
      uVar27 = *(undefined8 *)(lVar18 + 0x1f50);
      *(uint *)(lVar25 + 0xf0) = *(uint *)(lVar25 + 0xf0) & 0xffff00ff;
      *(uint *)(lVar25 + 0xf0) = *(uint *)(lVar25 + 0xf0) | (uVar47 & 0xf1) << 8;
      *(undefined8 *)(lVar25 + 0xfc) = uVar27;
    }
  }
  if ((*(byte *)(lVar18 + 0x1f38) & 2) != 0) {
    uVar47 = (int)*(char *)(lVar25 + 0xf2) & *(uint *)(lVar18 + 8000);
    if ((uVar47 == 0) || (*(float *)(lVar18 + 0x1f58) <= 0.0)) {
      local_1d7 = false;
      bVar51 = false;
      if (uVar47 != 0) goto LAB_1803e54a0;
LAB_1803e54b3:
      local_1d8 = '\0';
    }
    else {
      local_1d7 = true;
      bVar51 = true;
LAB_1803e54a0:
      local_1d8 = '\x01';
      if (*(float *)(lVar18 + 0x1f5c) <= 0.0) goto LAB_1803e54b3;
    }
    uVar47 = *(uint *)(lVar25 + 0x18);
    if (((uVar47 & 4) != 0) && (((int)*(char *)(lVar25 + 0xf2) & 4U) == 0)) {
      *(undefined4 *)(lVar18 + 0x1f58) = *(undefined4 *)(lVar25 + 0x38);
      uVar47 = *(uint *)(lVar25 + 0x18);
    }
    if (((uVar47 & 8) != 0) && ((*(byte *)(lVar25 + 0xf2) & 4) == 0)) {
      *(undefined4 *)(lVar18 + 0x1f5c) = *(undefined4 *)(lVar25 + 0x3c);
    }
    FUN_1803e7da0(lVar25);
  }
  if ((*(byte *)(lVar18 + 0x1f38) & 0x80) != 0) {
    if (0.0 <= *(float *)(lVar18 + 0x1f68)) {
      *(float *)(lVar25 + 0xa8) = *(float *)(lVar18 + 0x1f68);
      *(undefined4 *)(lVar25 + 0xb0) = 0;
    }
    if (0.0 <= *(float *)(lVar18 + 0x1f6c)) {
      *(float *)(lVar25 + 0xac) = *(float *)(lVar18 + 0x1f6c);
      *(undefined4 *)(lVar25 + 0xb4) = 0;
    }
  }
  if ((*(byte *)(lVar18 + 0x1f38) & 4) == 0) {
    if (local_1cc != iVar22) {
      *(undefined8 *)(lVar25 + 0x50) = 0;
    }
  }
  else {
    *(undefined8 *)(lVar25 + 0x50) = *(undefined8 *)(lVar18 + 0x1f60);
  }
  if (((*(byte *)(lVar18 + 0x1f38) & 8) != 0) &&
     ((*(uint *)(lVar18 + 0x1f44) == 0 ||
      ((*(uint *)(lVar18 + 0x1f44) & *(int *)(lVar25 + 0xf0) >> 0x18) != 0)))) {
    cVar21 = *(char *)(lVar18 + 0x1f80);
    *(byte *)(lVar25 + 0xf3) = (byte)((uint)*(undefined4 *)(lVar25 + 0xf0) >> 0x18) & 0xf1;
    if (*(char *)(lVar25 + 0xd0) != '\0') {
      *(byte *)(lVar25 + 0xcf) = *(byte *)(lVar25 + 0xcf) ^ 1;
    }
    *(bool *)(lVar25 + 0xd0) = *(char *)(lVar25 + 0xcf) != cVar21;
  }
  if ((*(byte *)(lVar18 + 0x1f38) & 0x20) != 0) {
    FUN_1803ef030(lVar25,0);
  }
  if (*(char *)(lVar25 + 0xd3) != '\0') {
    *(byte *)(lVar25 + 0xf1) = *(byte *)(lVar25 + 0xf1) & 0xf7;
    *(byte *)(lVar25 + 0xf2) = *(byte *)(lVar25 + 0xf2) & 0xf7;
    *(byte *)(lVar25 + 0xf3) = (byte)((uint)*(undefined4 *)(lVar25 + 0xf0) >> 0x18) & 0xf7;
  }
  lVar35 = DAT_180ca0a50;
  *(undefined1 *)(lVar25 + 0xd2) = 0;
  if (((((*(uint *)(lVar35 + 0x1f38) & 0x400) != 0) &&
       (uVar47 = *(uint *)(lVar35 + 0x1fb4), (uVar47 & 1) != 0)) &&
      (*(char *)(lVar25 + 0xd3) == '\0')) && (*(char *)(lVar25 + 0xd4) == '\0')) {
    if (((uVar47 & 2) != 0) && (*(longlong *)(lVar35 + 0x1500) != 0)) {
      lVar36 = *(longlong *)(*(longlong *)(lVar35 + 0x1500) + 0x3c0);
      if ((*(longlong *)(lVar25 + 0x3c0) == lVar36) || (*(longlong *)(lVar36 + 0x3c0) == lVar25))
      goto LAB_1803e56b4;
      do {
        if (lVar36 == lVar25) goto LAB_1803e56b4;
        lVar36 = *(longlong *)(lVar36 + 0x3b8);
      } while (lVar36 != 0);
    }
    if (((uVar47 & 4) != 0) && (*(longlong *)(lVar35 + 0x2068) != 0)) {
      lVar36 = *(longlong *)(*(longlong *)(lVar35 + 0x2068) + 0x3c0);
      if ((*(longlong *)(lVar25 + 0x3c0) == lVar36) || (*(longlong *)(lVar36 + 0x3c0) == lVar25))
      goto LAB_1803e56b4;
      do {
        if (lVar36 == lVar25) goto LAB_1803e56b4;
        lVar36 = *(longlong *)(lVar36 + 0x3b8);
      } while (lVar36 != 0);
    }
    *(undefined8 *)(lVar25 + 0x2c8) = 0;
    *(undefined1 *)(lVar25 + 0xd2) = 1;
  }
LAB_1803e56b4:
  if ((*(char *)(lVar50 + -0x1a + lVar37) != '\0') && (*(longlong *)(lVar25 + 0x3c0) == lVar25)) {
    *(undefined4 *)
     (((longlong)*(int *)(lVar35 + 0x14c8) + -1) * 0x88 + 0x70 + *(longlong *)(lVar35 + 0x14d0)) =
         *(undefined4 *)(lVar35 + 0xc9c);
    *(uint *)(lVar35 + 0x1ea8) = *(uint *)(lVar35 + 0x1ea8) & 0xffffffbf;
    *(undefined4 *)(lVar35 + 0xc9c) = *(undefined4 *)(lVar35 + 0x26cc);
    iVar22 = *(int *)(lVar35 + 0x2004);
    if (*(int *)(lVar35 + 0x2000) == iVar22) {
      iVar44 = *(int *)(lVar35 + 0x2000) + 1;
      if (iVar22 == 0) {
        iVar22 = 8;
      }
      else {
        iVar22 = iVar22 / 2 + iVar22;
      }
      if (iVar44 < iVar22) {
        iVar44 = iVar22;
      }
      FUN_18007e1d0(lVar35 + 0x2000,iVar44);
    }
    *(undefined4 *)(*(longlong *)(lVar35 + 0x2008) + (longlong)*(int *)(lVar35 + 0x2000) * 4) =
         *(undefined4 *)(lVar35 + 0x1ea8);
    *(int *)(lVar35 + 0x2000) = *(int *)(lVar35 + 0x2000) + 1;
    *(short *)(lVar35 + 0x26d0) = *(short *)(lVar35 + 0x26d0) + 1;
  }
  iVar44 = local_1bc;
  iVar22 = local_1cc;
  *(undefined8 *)(lVar18 + 0x14f8) = 0;
  if (local_1cc == local_1bc) {
    if (*(char *)(lVar25 + 0xd2) != '\0') goto LAB_1803e7325;
LAB_1803e7378:
    FUN_1803dd530(lVar25);
    lVar35 = DAT_180ca0a50;
    fVar64 = *(float *)(lVar25 + 0x28);
    fVar56 = *(float *)(lVar25 + 0x2c);
    fVar55 = fVar64 + *(float *)(lVar25 + 0x38);
    uVar24 = *(undefined4 *)(lVar25 + 0x2c);
    fVar54 = *(float *)(lVar25 + 0x68);
    uVar4 = *(undefined4 *)(lVar25 + 0x1e0);
    auVar14._4_4_ = uVar24;
    auVar14._0_4_ = uVar24;
    auVar14._8_4_ = uVar24;
    *(undefined4 *)(DAT_180ca0a50 + 0x1ee8) = *(undefined4 *)(lVar25 + 0x8c);
    auVar12._4_8_ = auVar14._4_8_;
    auVar12._0_4_ = uVar24;
    auVar59._0_8_ = auVar12._0_8_ << 0x20;
    auVar59._8_4_ = uVar24;
    auVar59._12_4_ = fVar55;
    *(undefined4 *)(lVar35 + 0x1eec) = *(undefined4 *)(lVar35 + 0x1ea8);
    auVar13._4_8_ = auVar59._8_8_;
    auVar13._0_4_ = uVar24;
    auVar60._0_8_ = auVar13._0_8_ << 0x20;
    auVar60._8_4_ = fVar55;
    auVar60._12_4_ = fVar56 + fVar54;
    auVar61._4_12_ = auVar60._4_12_;
    auVar61._0_4_ = fVar64;
    *(undefined4 *)(lVar35 + 0x1ef0) = uVar4;
    *(undefined1 (*) [16])(lVar35 + 0x1f04) = auVar61;
    *(undefined1 (*) [16])(lVar35 + 0x1ef4) = auVar61;
    lVar35 = local_1b0;
  }
  else {
    if (*(char *)(lVar25 + 0xd2) != '\0') {
LAB_1803e7325:
      *(undefined1 *)(lVar25 + 0xcc) = 1;
      plVar40 = *(longlong **)(lVar25 + 0x1b8);
      plVar45 = plVar40 + *(int *)(lVar25 + 0x1b0);
      if (((longlong)*(int *)(lVar25 + 0x1b0) & 0x1fffffffffffffffU) != 0) {
        do {
          lVar35 = *plVar40;
          if (*(char *)(lVar35 + 0xd4) == '\0') {
            *(undefined1 *)(lVar35 + 0xd2) = 1;
            *(undefined1 *)(lVar35 + 0xcc) = 1;
            FUN_1803e4eb0();
          }
          plVar40 = plVar40 + 1;
        } while (plVar40 != plVar45);
      }
      goto LAB_1803e7378;
    }
    local_1c4 = uVar49 & 0x3000000;
    *(undefined1 *)(lVar25 + 0xcc) = 1;
    local_1d4 = *(char *)(lVar25 + 0xec);
    *(bool *)(lVar25 + 0xd7) = local_148 != 0;
    *(undefined4 *)(lVar25 + 0x268) = 0xff7fffff;
    *(undefined4 *)(lVar25 + 0x26c) = 0xff7fffff;
    *(undefined4 *)(lVar25 + 0x270) = 0x7f7fffff;
    *(undefined4 *)(lVar25 + 0x274) = 0x7f7fffff;
    iVar22 = *(int *)(lVar25 + 0x10c);
    if (iVar22 < 1) {
      if (iVar22 == 0) {
        iVar22 = 8;
      }
      else {
        iVar22 = iVar22 / 2 + iVar22;
      }
      iVar44 = 1;
      if (1 < iVar22) {
        iVar44 = iVar22;
      }
      FUN_18007e1d0(lVar25 + 0x108,iVar44);
    }
    *(undefined4 *)(lVar25 + 0x108) = 1;
    FUN_1803fbb30(*(undefined8 *)(lVar25 + 0x2c8));
    *(undefined4 *)(lVar25 + 0x1d0) = 0xffffffff;
    if (*(char *)(lVar25 + 0x434) != '\0') {
      *(undefined1 *)(lVar25 + 0x434) = 0;
      FUN_1803f6b20(*(longlong *)(lVar25 + 0x2c8) + 0x10,*(undefined4 *)(lVar25 + 0x42c));
      FUN_1803f6760(*(longlong *)(lVar25 + 0x2c8) + 0x20,*(undefined4 *)(lVar25 + 0x430));
      *(undefined8 *)(lVar25 + 0x42c) = 0;
    }
    _Str = local_168;
    bVar52 = false;
    if ((*(longlong *)(lVar18 + 0x2260) != 0) &&
       (*(char *)(*(longlong *)(lVar18 + 0x2260) + 0xcd) != '\0')) {
      bVar52 = false;
      if ((uVar49 >> 0x11 & 1) == 0) {
        bVar52 = true;
      }
    }
    if (((local_190 != 0 || bVar52) || ((char)local_1c0 != '\0')) && (local_198 != 0)) {
      _Str2 = *(char **)(lVar25 + 8);
      iVar22 = strcmp(local_168,_Str2);
      if (iVar22 != 0) {
        iVar22 = *(int *)(lVar25 + 0x88);
        sVar26 = strlen(_Str);
        lVar35 = DAT_180ca0a50;
        uVar1 = sVar26 + 1;
        uVar48 = (longlong)iVar22;
        if ((ulonglong)(longlong)iVar22 < uVar1) {
          if ((_Str2 != (char *)0x0) && (DAT_180ca0a50 != 0)) {
            piVar2 = (int *)(DAT_180ca0a50 + 4);
            piVar39 = (int *)(DAT_180ca0a50 + 0x29c0 +
                             (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
            if (*piVar39 != *piVar2) {
              iVar22 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
              lVar37 = DAT_180ca0a50 + 0x29c0;
              sVar31 = (short)iVar22 + (short)(iVar22 / 6) * -6;
              *(short *)(DAT_180ca0a50 + 0x29bc) = sVar31;
              piVar39 = (int *)(lVar37 + (longlong)sVar31 * 8);
              *piVar39 = *piVar2;
              *(undefined4 *)(lVar35 + 0x29c4 + (longlong)sVar31 * 8) = 0;
            }
            *(short *)((longlong)piVar39 + 6) = *(short *)((longlong)piVar39 + 6) + 1;
            piVar2 = (int *)(lVar35 + 0x29b8);
            *piVar2 = *piVar2 + 1;
          }
          thunk_FUN_1805277b0(_Str2);
          _Str2 = (char *)_malloc_base(uVar1);
          if (DAT_180ca0a50 != 0) {
            FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
          }
          uVar48 = uVar1;
        }
        uVar27 = FUN_180540530(_Str2,local_168,uVar1);
        *(int *)(lVar25 + 0x88) = (int)uVar48;
        *(undefined8 *)(lVar25 + 8) = uVar27;
      }
    }
    lVar35 = local_198;
    FUN_1803e24d0(lVar25,lVar25 + 0x40,lVar25 + 0x48);
    cVar21 = local_1d8;
    if ('\0' < *(char *)(lVar25 + 0xeb)) {
      *(char *)(lVar25 + 0xeb) = *(char *)(lVar25 + 0xeb) + -1;
    }
    if ('\0' < *(char *)(lVar25 + 0xec)) {
      *(char *)(lVar25 + 0xec) = *(char *)(lVar25 + 0xec) + -1;
    }
    if ('\0' < *(char *)(lVar25 + 0xed)) {
      *(char *)(lVar25 + 0xed) = *(char *)(lVar25 + 0xed) + -1;
    }
    if ((lVar35 == 0) && ((!bVar51 || (local_1d8 == '\0')))) {
      *(undefined1 *)(lVar25 + 0xec) = 1;
    }
    if ((((char)local_1c0 != '\0') && ((uVar49 & 0x6000000) != 0)) &&
       (*(undefined1 *)(lVar25 + 0xec) = 1, (uVar49 & 0x40) != 0)) {
      if (!bVar51) {
        *(undefined4 *)(lVar25 + 0x38) = 0;
        *(undefined4 *)(lVar25 + 0x30) = 0;
      }
      if (local_1d8 == '\0') {
        *(undefined4 *)(lVar25 + 0x3c) = 0;
        *(undefined4 *)(lVar25 + 0x34) = 0;
      }
      *(undefined8 *)(lVar25 + 0x48) = 0;
      *(undefined8 *)(lVar25 + 0x40) = 0;
    }
    local_120 = **(longlong **)(DAT_180ca0a50 + 0x2058);
    *(longlong *)(lVar25 + 0x20) = local_120;
    FUN_1803dd530(lVar25);
    local_1b8 = uVar49 & 0x1000000;
    if (local_1b8 == 0) {
      if (((uVar49 & 0x6000000) == 0) || ((uVar49 >> 0x1b & 1) != 0)) {
        fVar56 = *(float *)(lVar18 + 0xcb0);
      }
      else {
        fVar56 = *(float *)(lVar18 + 0xcd8);
      }
    }
    else {
      fVar56 = *(float *)(lVar18 + 0xcd0);
    }
    *(float *)(lVar25 + 100) = fVar56;
    local_16c = uVar49 & 0x5000000;
    *(undefined8 *)(lVar25 + 0x58) = *(undefined8 *)(lVar18 + 0xca4);
    if (((local_16c == 0x1000000) && ((*(byte *)(lVar25 + 0x18) & 2) == 0)) && (fVar56 == 0.0)) {
      if ((uVar49 >> 10 & 1) == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = *(undefined4 *)(lVar18 + 0xca8);
      }
      *(undefined4 *)(lVar25 + 0x5c) = uVar24;
      *(undefined4 *)(lVar25 + 0x58) = 0;
    }
    fVar56 = *(float *)(lVar25 + 0x58);
    if (*(float *)(lVar25 + 0x58) <= *(float *)(lVar18 + 0xcec)) {
      fVar56 = *(float *)(lVar18 + 0xcec);
    }
    if (fVar56 <= *(float *)(lVar18 + 0x1fac)) {
      fVar56 = *(float *)(lVar18 + 0x1fac);
    }
    *(float *)(lVar25 + 0x17c) = fVar56;
    fVar56 = *(float *)(lVar18 + 0x1fb0);
    *(float *)(lVar25 + 0x180) = fVar56;
    if ((uVar49 & 1) == 0) {
      fVar54 = *(float *)(lVar18 + 0xce0) + *(float *)(lVar18 + 0xce0) + *(float *)(lVar18 + 0x1200)
      ;
    }
    else {
      fVar54 = 0.0;
    }
    *(float *)(lVar25 + 0x68) = fVar54;
    if ((uVar49 >> 10 & 1) == 0) {
      fVar56 = 0.0;
    }
    else {
      fVar56 = fVar56 + *(float *)(lVar18 + 0x1200) +
               *(float *)(lVar18 + 0xce0) + *(float *)(lVar18 + 0xce0);
    }
    *(float *)(lVar25 + 0x6c) = fVar56;
    uVar24 = *(undefined4 *)(lVar18 + 0x1200);
    *(undefined4 *)(lVar25 + 0x2c0) = uVar24;
    lVar35 = DAT_180ca0a50;
    if ((!bVar51) || (*(float *)(lVar25 + 0x50) == 0.0)) {
      local_1d0 = (uint)local_1d5;
    }
    else {
      local_1d0 = (uint)CONCAT71((uint7)(uint3)((uint)uVar24 >> 8),1);
    }
    bVar30 = local_1d5;
    if ((cVar21 != '\0') && (*(float *)(lVar25 + 0x54) != 0.0)) {
      bVar30 = 1;
    }
    if ((uVar49 & 0x21) == 0) {
      if ((((*(longlong *)(lVar18 + 0x1500) == lVar25) && (*(int *)(lVar18 + 0x1560) == 0)) &&
          (*(int *)(lVar18 + 0x1564) == 0)) && (*(int *)(lVar18 + 0x1578) == 0)) {
        lVar37 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
        fVar56 = *(float *)(lVar25 + 0x28);
        fVar55 = fVar56;
        if (fVar56 <= *(float *)(lVar37 + 0x268)) {
          fVar55 = *(float *)(lVar37 + 0x268);
        }
        if (fVar55 - *(float *)(DAT_180ca0a50 + 0xd04) <= *(float *)(DAT_180ca0a50 + 0x110)) {
          fVar55 = *(float *)(lVar25 + 0x2c);
          if (*(float *)(lVar25 + 0x2c) <= *(float *)(lVar37 + 0x26c)) {
            fVar55 = *(float *)(lVar37 + 0x26c);
          }
          if (fVar55 - *(float *)(DAT_180ca0a50 + 0xd08) <= *(float *)(DAT_180ca0a50 + 0x114)) {
            fVar56 = fVar56 + *(float *)(lVar25 + 0x38);
            if (*(float *)(lVar37 + 0x270) <= fVar56) {
              fVar56 = *(float *)(lVar37 + 0x270);
            }
            if (*(float *)(DAT_180ca0a50 + 0x110) < fVar56 + *(float *)(DAT_180ca0a50 + 0xd04)) {
              fVar54 = fVar54 + *(float *)(lVar25 + 0x2c);
              if (*(float *)(lVar37 + 0x274) <= fVar54) {
                fVar54 = *(float *)(lVar37 + 0x274);
              }
              if (((*(float *)(DAT_180ca0a50 + 0x114) < fVar54 + *(float *)(DAT_180ca0a50 + 0xd08))
                  && (*(short *)(lVar18 + 0xb4a) == 2)) && (*(int *)(DAT_180ca0a50 + 0x1cbc) == -1))
              {
                uVar24 = *(undefined4 *)(lVar25 + 0x8c);
                *(undefined1 *)(lVar25 + 0xd0) = 1;
                *(undefined4 *)(lVar35 + 0x1cc0) = uVar24;
                *(undefined4 *)(lVar35 + 0x1cbc) = uVar24;
                *(undefined2 *)(lVar35 + 0x1cc4) = 0;
              }
            }
          }
        }
      }
      if (*(char *)(lVar25 + 0xd0) == '\0') goto LAB_1803e5d75;
      cVar46 = *(char *)(lVar25 + 0xcf);
      *(bool *)(lVar25 + 0xcf) = cVar46 == '\0';
      local_1a8 = (uint)bVar30;
      if (cVar46 != '\0') {
        local_1a8 = 1;
      }
      if (((*(uint *)(lVar25 + 0x14) & 0x100) == 0) && (*(float *)(lVar35 + 0x27a4) <= 0.0)) {
        *(undefined4 *)(lVar35 + 0x27a4) = *(undefined4 *)(lVar35 + 0x44);
      }
    }
    else {
      *(undefined1 *)(lVar25 + 0xcf) = 0;
LAB_1803e5d75:
      local_1a8 = (uint)bVar30;
    }
    fVar54 = *(float *)(lVar25 + 0xc0);
    fVar56 = *(float *)(lVar25 + 0xc4);
    *(undefined1 *)(lVar25 + 0xd0) = 0;
    *(undefined4 *)(lVar25 + 0x70) = 0;
    *(undefined8 *)(lVar25 + 0x78) = 0;
    *(undefined8 *)(lVar25 + 0xc0) = 0;
    *(float *)(lVar25 + 0x74) = *(float *)(lVar25 + 0x6c) + *(float *)(lVar25 + 0x68);
    if (((bVar51) || ((uVar49 & 0x40) == 0)) || (*(char *)(lVar25 + 0xcf) != '\0')) {
      bVar51 = false;
    }
    else {
      bVar51 = true;
    }
    if (((cVar21 == '\0') && ((uVar49 & 0x40) != 0)) && (*(char *)(lVar25 + 0xcf) == '\0')) {
      bVar52 = true;
    }
    else {
      bVar52 = false;
    }
    if ((local_1d7 == false) && ('\0' < *(char *)(lVar25 + 0xe8))) {
      bVar43 = true;
    }
    else {
      bVar43 = false;
    }
    if ((cVar21 == '\0') && ('\0' < *(char *)(lVar25 + 0xe9))) {
      bVar17 = true;
    }
    else {
      bVar17 = false;
    }
    uVar27 = FUN_1803e25f0(&local_1a0,lVar25,lVar25 + 0x48);
    fVar55 = *(float *)(lVar25 + 0x38);
    fVar53 = *(float *)(lVar25 + 0x3c);
    if (bVar51) {
LAB_1803e5e7c:
      fVar57 = local_1a0;
LAB_1803e5e82:
      *(float *)(lVar25 + 0x38) = fVar57;
      local_1d0 = (uint)CONCAT71((int7)((ulonglong)uVar27 >> 8),1);
    }
    else {
      fVar57 = fVar55;
      if (bVar43) {
        if (*(char *)(lVar25 + 0xea) == '\0') goto LAB_1803e5e7c;
        if (fVar55 <= local_1a0) {
          fVar57 = local_1a0;
        }
        goto LAB_1803e5e82;
      }
    }
    if (bVar52) {
LAB_1803e5eb5:
      *(float *)(lVar25 + 0x3c) = local_19c;
      uVar47 = 1;
    }
    else if (bVar17) {
      if (*(char *)(lVar25 + 0xea) == '\0') goto LAB_1803e5eb5;
      fVar65 = *(float *)(lVar25 + 0x3c);
      if (*(float *)(lVar25 + 0x3c) <= local_19c) {
        fVar65 = local_19c;
      }
      *(float *)(lVar25 + 0x3c) = fVar65;
      uVar47 = 1;
    }
    else {
      uVar47 = local_1a8;
    }
    cVar21 = (char)uVar47;
    if ((((fVar55 != fVar57) || (fVar53 != *(float *)(lVar25 + 0x3c))) &&
        ((*(uint *)(lVar25 + 0x14) & 0x100) == 0)) && (*(float *)(DAT_180ca0a50 + 0x27a4) <= 0.0)) {
      *(undefined4 *)(DAT_180ca0a50 + 0x27a4) = *(undefined4 *)(DAT_180ca0a50 + 0x44);
    }
    pfVar28 = (float *)FUN_1803e2390(local_108,lVar25);
    lVar35 = local_1b0;
    cVar46 = local_1d6;
    fVar55 = *pfVar28;
    fVar53 = pfVar28[1];
    *(float *)(lVar25 + 0x38) = fVar55;
    *(float *)(lVar25 + 0x3c) = fVar53;
    if ((*(char *)(lVar25 + 0xcf) != '\0') && (local_1b8 == 0)) {
      fVar55 = (fVar55 + *(float *)(lVar25 + 0x28)) - *(float *)(lVar25 + 0x28);
      fVar53 = (*(float *)(lVar25 + 0x2c) + *(float *)(lVar25 + 0x68)) - *(float *)(lVar25 + 0x2c);
    }
    *(float *)(lVar25 + 0x30) = fVar55;
    *(float *)(lVar25 + 0x34) = fVar53;
    if ((((char)local_1c0 != '\0') &&
        (*(undefined4 *)(lVar25 + 0xe4) = 0xffffffff, (uVar49 & 0xc000000) == 0x4000000)) &&
       (local_1d6 == '\0')) {
      lVar37 = ((longlong)*(int *)(lVar18 + 0x2030) + -1) * 0x58;
      uVar24 = *(undefined4 *)(lVar37 + 0x24 + *(longlong *)(lVar18 + 0x2038));
      *(undefined4 *)(lVar25 + 0x2c) =
           *(undefined4 *)(lVar37 + 0x28 + *(longlong *)(lVar18 + 0x2038));
      *(undefined4 *)(lVar25 + 0x28) = uVar24;
    }
    if (local_1b8 != 0) {
      piVar2 = (int *)(local_1b0 + 0x1b0);
      *(undefined2 *)(lVar25 + 0xde) = *(undefined2 *)piVar2;
      iVar22 = *(int *)(local_1b0 + 0x1b4);
      if (*piVar2 == iVar22) {
        iVar44 = *piVar2 + 1;
        if (iVar22 == 0) {
          iVar22 = 8;
        }
        else {
          iVar22 = iVar22 / 2 + iVar22;
        }
        if (iVar44 < iVar22) {
          iVar44 = iVar22;
        }
        FUN_18000ba20(piVar2,iVar44);
      }
      *(longlong *)(*(longlong *)(lVar35 + 0x1b8) + (longlong)*piVar2 * 8) = lVar25;
      *piVar2 = *piVar2 + 1;
      if ((local_1c8 == 0 && cVar46 == '\0') && (local_1c4 != 0x3000000)) {
        *(undefined8 *)(lVar25 + 0x28) = *(undefined8 *)(lVar35 + 0x118);
      }
    }
    uVar47 = local_1b8;
    if ((*(float *)(lVar25 + 0xf4) == DAT_1808acd08) || (*(char *)(lVar25 + 0xec) != '\0')) {
      if (local_190 == 0) {
        if (((local_1c8 == 0) || (cVar46 != '\0')) || (local_1d4 < '\x01')) {
          if (((local_170 == 0) || (cVar46 != '\0')) || (local_1c4 == 0x3000000))
          goto LAB_1803e60f7;
          puVar38 = local_f0;
        }
        else {
          puVar38 = local_f8;
        }
      }
      else {
        puVar38 = local_100;
      }
      puVar41 = (undefined4 *)FUN_1803ee9a0(puVar38,lVar25);
      uVar24 = *puVar41;
      *(undefined4 *)(lVar25 + 0x2c) = puVar41[1];
      *(undefined4 *)(lVar25 + 0x28) = uVar24;
    }
    else {
      local_150 = *(float *)(lVar25 + 0xf4) - *(float *)(lVar25 + 0xfc) * *(float *)(lVar25 + 0x30);
      local_14c = *(float *)(lVar25 + 0xf8) - *(float *)(lVar25 + 0x100) * *(float *)(lVar25 + 0x34)
      ;
      FUN_1803e7c50(lVar25,&local_150);
    }
LAB_1803e60f7:
    local_13c = *(float *)(lVar18 + 0xdb8);
    if (*(float *)(lVar18 + 0xdb8) <= *(float *)(lVar18 + 0xdc0)) {
      local_13c = *(float *)(lVar18 + 0xdc0);
    }
    local_118 = (float)*(undefined8 *)(local_120 + 8);
    fStack_114 = (float)((ulonglong)*(undefined8 *)(local_120 + 8) >> 0x20);
    local_140 = *(float *)(lVar18 + 0xdb4);
    if (*(float *)(lVar18 + 0xdb4) <= *(float *)(lVar18 + 0xdbc)) {
      local_140 = *(float *)(lVar18 + 0xdbc);
    }
    fVar55 = (float)*(undefined8 *)(local_120 + 0x10) + local_118;
    fVar53 = (float)((ulonglong)*(undefined8 *)(local_120 + 0x10) >> 0x20) + fStack_114;
    local_134 = (*(float *)(local_120 + 0x24) + *(float *)(local_120 + 0x2c)) - local_13c;
    local_138 = (*(float *)(local_120 + 0x20) + *(float *)(local_120 + 0x28)) - local_140;
    local_140 = local_140 + *(float *)(local_120 + 0x20);
    uStack_110 = CONCAT44(fVar53,fVar55);
    local_13c = local_13c + *(float *)(local_120 + 0x24);
    if (((cVar46 != '\0' || uVar47 != 0) || (fVar55 - local_118 <= 0.0)) ||
       (fVar53 - fStack_114 <= 0.0)) {
      *(ulonglong *)(lVar25 + 0x28) =
           CONCAT44((float)(int)(float)((ulonglong)*(undefined8 *)(lVar25 + 0x28) >> 0x20),
                    (float)(int)(float)*(undefined8 *)(lVar25 + 0x28));
      if (uVar47 == 0) goto LAB_1803e6221;
      fVar55 = *(float *)(lVar18 + 0xccc);
    }
    else {
      fVar55 = *(float *)(lVar25 + 0x34);
      if (((*(byte *)(lVar25 + 0xf0) & 1) == 0) && ((*(byte *)(lVar25 + 0x14) & 1) == 0)) {
        fVar55 = *(float *)(lVar25 + 0x68);
      }
      fVar53 = *(float *)(lVar25 + 0x2c);
      fVar57 = local_140 - *(float *)(lVar25 + 0x30);
      fVar65 = local_13c - fVar55;
      if ((local_13c - fVar55 <= fVar53) && (fVar65 = local_134, fVar53 <= local_134)) {
        fVar65 = fVar53;
      }
      fVar55 = *(float *)(lVar25 + 0x28);
      if ((fVar57 <= fVar55) && (fVar57 = local_138, fVar55 <= local_138)) {
        fVar57 = fVar55;
      }
      *(float *)(lVar25 + 0x28) = fVar57;
      *(ulonglong *)(lVar25 + 0x28) =
           CONCAT44((float)(int)fVar65,(float)(int)(float)*(undefined8 *)(lVar25 + 0x28));
LAB_1803e6221:
      if ((uVar49 & 0xc000000) == 0x4000000) {
        fVar55 = *(float *)(lVar18 + 0xcd4);
      }
      else {
        fVar55 = *(float *)(lVar18 + 0xcac);
      }
    }
    *(float *)(lVar25 + 0x60) = fVar55;
    bVar51 = false;
    if (((char)local_1c0 != '\0') && ((uVar49 >> 0xc & 1) == 0)) {
      if (local_1c8 == 0) {
        bVar51 = false;
        if (local_1c4 == 0) {
          bVar51 = true;
        }
      }
      else {
        bVar51 = true;
      }
    }
    local_1d7 = true;
    if (uVar47 != 0) {
      local_1d7 = *(char *)(*(longlong *)(lVar25 + 0x3b0) + 0xd1) == '\0';
    }
    local_18c = 0xffffffff;
    local_188 = 0xffffffff;
    local_e0[0] = 0.0;
    local_e0[1] = 0.0;
    local_e0[2] = 0.0;
    local_e0[3] = 0.0;
    if (local_16c == 0x1000000) {
      uVar47 = (uint)((*(byte *)(lVar25 + 0x18) & 0xc) == 0xc);
    }
    else {
      uVar47 = (*(char *)(lVar18 + 0x81) != '\0') + 1;
    }
    fVar53 = *(float *)(lVar18 + 0x1200) * DAT_1808ac394;
    fVar55 = fVar55 + fVar64 + *(float *)(lVar18 + 0x1200) * DAT_1808ac118;
    if (fVar53 <= fVar55) {
      fVar53 = fVar55;
    }
    if ((!local_1d7) || (*(char *)(lVar25 + 0xcf) != '\0')) {
      uVar34 = local_1d0;
    }
    else {
      local_1f0 = &local_140;
      local_1f8 = local_e0;
      uVar23 = FUN_1803e2c20(lVar25);
      uVar34 = local_1d0;
      if (uVar23 != 0) {
        uVar34 = local_1d0 & 0xff;
        if ((uVar23 & 1) != 0) {
          uVar34 = 1;
        }
        if ((uVar23 & 2) != 0) {
          cVar21 = '\x01';
        }
      }
    }
    *(undefined1 *)(lVar25 + 0xd8) = (undefined1)local_18c;
    *(undefined1 *)(lVar25 + 0xd9) = (undefined1)local_188;
    if (*(char *)(lVar25 + 0xcf) == '\0') {
      if (local_198 == 0) {
        fVar57 = 0.0;
        fVar55 = 0.0;
      }
      else {
        fVar57 = *(float *)(lVar25 + 0x58) + *(float *)(lVar25 + 0x58) + *(float *)(lVar25 + 0x40);
        fVar55 = *(float *)(lVar25 + 0x5c) + *(float *)(lVar25 + 0x5c) + *(float *)(lVar25 + 0x44);
      }
      if ((char)uVar34 == '\0') {
        fVar54 = fVar54 + (*(float *)(lVar25 + 0x230) - *(float *)(lVar25 + 0x228));
      }
      else {
        fVar54 = *(float *)(lVar25 + 0x38);
      }
      if (cVar21 == '\0') {
        fVar56 = fVar56 + (*(float *)(lVar25 + 0x234) - *(float *)(lVar25 + 0x22c));
      }
      else {
        fVar56 = *(float *)(lVar25 + 0x3c) - (*(float *)(lVar25 + 0x7c) + *(float *)(lVar25 + 0x74))
        ;
      }
      cVar21 = *(char *)(lVar25 + 200);
      if (((uVar49 >> 0xe & 1) != 0) || ((fVar56 < fVar55 && ((uVar49 & 8) == 0)))) {
        cVar46 = '\x01';
      }
      else {
        cVar46 = '\0';
      }
      *(char *)(lVar25 + 0xc9) = cVar46;
      if ((uVar49 >> 0xf & 1) == 0) {
        if (cVar46 == '\0') {
          fVar65 = 0.0;
        }
        else {
          fVar65 = *(float *)(lVar18 + 0xd14);
        }
        if ((fVar54 - fVar65 < fVar57) && ((uVar49 & 0x808) == 0x800)) goto LAB_1803e6479;
        cVar42 = '\0';
      }
      else {
LAB_1803e6479:
        cVar42 = '\x01';
      }
      *(char *)(lVar25 + 200) = cVar42;
      bVar30 = cVar21 != cVar42 | *(char *)(lVar25 + 0xcb) * '\x02';
      *(byte *)(lVar25 + 0xcb) = bVar30;
      if (bVar30 == 0) {
LAB_1803e64bf:
        *(undefined1 *)(lVar25 + 0xca) = 0;
        if (cVar42 != '\0') goto LAB_1803e64cb;
        uVar24 = 0;
      }
      else {
        uVar34 = 0;
        do {
          uVar34 = uVar34 + 1;
          bVar30 = bVar30 & bVar30 - 1;
        } while (bVar30 != 0);
        if (uVar34 < 4) goto LAB_1803e64bf;
        *(undefined1 *)(lVar25 + 200) = 1;
        *(undefined1 *)(lVar25 + 0xca) = 1;
LAB_1803e64cb:
        if (cVar46 == '\0') {
          if ((fVar56 - *(float *)(lVar18 + 0xd14) < fVar55) && ((uVar49 & 8) == 0)) {
            *(undefined1 *)(lVar25 + 0xc9) = 1;
            uVar24 = *(undefined4 *)(lVar18 + 0xd14);
            goto LAB_1803e650c;
          }
          *(undefined1 *)(lVar25 + 0xc9) = 0;
        }
        uVar24 = *(undefined4 *)(lVar18 + 0xd14);
      }
LAB_1803e650c:
      if (*(char *)(lVar25 + 0xc9) == '\0') {
        fVar56 = 0.0;
      }
      else {
        fVar56 = *(float *)(lVar18 + 0xd14);
      }
      *(float *)(lVar25 + 0xc0) = fVar56;
      *(undefined4 *)(lVar25 + 0xc4) = uVar24;
      *(float *)(lVar25 + 0x78) = fVar56 + *(float *)(lVar25 + 0x78);
      *(float *)(lVar25 + 0x7c) = *(float *)(lVar25 + 0xc4) + *(float *)(lVar25 + 0x7c);
    }
    if (((uVar49 & 0x5000000) == 0x1000000) && (local_1c4 != 0x3000000)) {
      pfVar29 = (float *)(local_1b0 + 0x268);
    }
    uVar15 = *(undefined8 *)pfVar29;
    uVar16 = *(undefined8 *)(pfVar29 + 2);
    uVar27 = *(undefined8 *)(lVar25 + 0x28);
    fStack_17c = *(float *)(lVar25 + 0x2c);
    fVar54 = (float)uVar27;
    fVar57 = (float)*(undefined8 *)(lVar25 + 0x30) + fVar54;
    fVar55 = (float)((ulonglong)uVar27 >> 0x20);
    fVar65 = (float)((ulonglong)*(undefined8 *)(lVar25 + 0x30) >> 0x20) + fVar55;
    fStack_174 = fVar55 + *(float *)(lVar25 + 0x68);
    local_180 = *(float *)(lVar25 + 0x28);
    fStack_178 = fVar54 + *(float *)(lVar25 + 0x38);
    *(undefined8 *)(lVar25 + 0x218) = uVar27;
    *(ulonglong *)(lVar25 + 0x220) = CONCAT44(fVar65,fVar57);
    local_160._0_4_ = (float)uVar15;
    local_160._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
    fVar56 = *(float *)(lVar25 + 0x218);
    if (*(float *)(lVar25 + 0x218) <= (float)local_160) {
      fVar56 = (float)local_160;
    }
    uStack_158._0_4_ = (float)uVar16;
    fVar58 = *(float *)(lVar25 + 0x21c);
    if (*(float *)(lVar25 + 0x21c) <= local_160._4_4_) {
      fVar58 = local_160._4_4_;
    }
    uStack_158._4_4_ = (float)((ulonglong)uVar16 >> 0x20);
    *(float *)(lVar25 + 0x218) = fVar56;
    *(float *)(lVar25 + 0x21c) = fVar58;
    fVar56 = *(float *)(lVar25 + 0x220);
    if ((float)uStack_158 <= *(float *)(lVar25 + 0x220)) {
      fVar56 = (float)uStack_158;
    }
    fVar58 = *(float *)(lVar25 + 0x224);
    if (uStack_158._4_4_ <= *(float *)(lVar25 + 0x224)) {
      fVar58 = uStack_158._4_4_;
    }
    *(float *)(lVar25 + 0x220) = fVar56;
    *(float *)(lVar25 + 0x224) = fVar58;
    fVar54 = (float)*(undefined8 *)(lVar25 + 0x70) + fVar54;
    fVar55 = (float)((ulonglong)*(undefined8 *)(lVar25 + 0x70) >> 0x20) + fVar55;
    fVar57 = fVar57 - (float)*(undefined8 *)(lVar25 + 0x78);
    fVar65 = fVar65 - (float)((ulonglong)*(undefined8 *)(lVar25 + 0x78) >> 0x20);
    *(ulonglong *)(lVar25 + 0x228) = CONCAT44(fVar55,fVar54);
    *(ulonglong *)(lVar25 + 0x230) = CONCAT44(fVar65,fVar57);
    if ((uVar49 & 0x401) == 1) {
      fVar56 = *(float *)(lVar25 + 100);
    }
    else {
      fVar56 = *(float *)(lVar18 + 0xce8);
    }
    fVar58 = *(float *)(lVar25 + 100) * DAT_1808ac1f4;
    fVar54 = fVar54 + DAT_1808ac1f4 + fVar58;
    iVar22 = (int)fVar54;
    if ((fVar54 < 0.0) && ((float)iVar22 != fVar54)) {
      iVar22 = iVar22 + -1;
    }
    fVar56 = fVar56 * DAT_1808ac1f4 + fVar55 + DAT_1808ac1f4;
    *(float *)(lVar25 + 0x238) = (float)iVar22;
    iVar22 = (int)fVar56;
    if ((fVar56 < 0.0) && ((float)iVar22 != fVar56)) {
      iVar22 = iVar22 + -1;
    }
    fVar57 = fVar57 - fVar58;
    fVar56 = (float)iVar22;
    *(float *)(lVar25 + 0x23c) = fVar56;
    iVar22 = (int)fVar57;
    if ((fVar57 < 0.0) && ((float)iVar22 != fVar57)) {
      iVar22 = iVar22 + -1;
    }
    fVar65 = fVar65 - fVar58;
    *(float *)(lVar25 + 0x240) = (float)iVar22;
    iVar22 = (int)fVar65;
    if ((fVar65 < 0.0) && ((float)iVar22 != fVar65)) {
      iVar22 = iVar22 + -1;
    }
    *(float *)(lVar25 + 0x244) = (float)iVar22;
    if (local_160._4_4_ <= fVar56) {
      fVar54 = uStack_158._4_4_;
      if (fVar56 <= uStack_158._4_4_) {
        fVar54 = fVar56;
      }
    }
    else {
      fVar54 = local_160._4_4_;
    }
    fVar56 = *(float *)(lVar25 + 0x238);
    if ((float)local_160 <= fVar56) {
      fVar55 = (float)uStack_158;
      if (fVar56 <= (float)uStack_158) {
        fVar55 = fVar56;
      }
    }
    else {
      fVar55 = (float)local_160;
    }
    *(float *)(lVar25 + 0x238) = fVar55;
    *(float *)(lVar25 + 0x23c) = fVar54;
    fVar56 = *(float *)(lVar25 + 0x244);
    if ((local_160._4_4_ <= fVar56) &&
       (local_160._4_4_ = uStack_158._4_4_, fVar56 <= uStack_158._4_4_)) {
      local_160._4_4_ = fVar56;
    }
    fVar56 = *(float *)(lVar25 + 0x240);
    if (((float)local_160 <= fVar56) &&
       (local_160._0_4_ = (float)uStack_158, fVar56 <= (float)uStack_158)) {
      local_160._0_4_ = fVar56;
    }
    *(float *)(lVar25 + 0x240) = (float)local_160;
    *(float *)(lVar25 + 0x244) = local_160._4_4_;
    fVar54 = (*(float *)(lVar25 + 0x58) + *(float *)(lVar25 + 0x58) + *(float *)(lVar25 + 0x40)) -
             (*(float *)(lVar25 + 0x230) - *(float *)(lVar25 + 0x228));
    fVar56 = 0.0;
    if (0.0 <= fVar54) {
      fVar56 = fVar54;
    }
    *(float *)(lVar25 + 0xa0) = fVar56;
    fVar54 = (*(float *)(lVar25 + 0x5c) + *(float *)(lVar25 + 0x5c) + *(float *)(lVar25 + 0x44)) -
             (*(float *)(lVar25 + 0x234) - *(float *)(lVar25 + 0x22c));
    fVar56 = 0.0;
    if (0.0 <= fVar54) {
      fVar56 = fVar54;
    }
    *(float *)(lVar25 + 0xa4) = fVar56;
    local_160 = uVar15;
    uStack_158 = uVar16;
    puVar41 = (undefined4 *)FUN_1803ecf50(local_e8,lVar25);
    uVar24 = puVar41[1];
    *(undefined4 *)(lVar25 + 0x98) = *puVar41;
    *(undefined4 *)(lVar25 + 0x9c) = uVar24;
    *(undefined4 *)(lVar25 + 0xa8) = 0x7f7fffff;
    *(undefined4 *)(lVar25 + 0xac) = 0x7f7fffff;
    *(undefined8 *)(lVar25 + 0x80) = 0;
    lVar35 = *(longlong *)(lVar25 + 0x2c8);
    fVar56 = *(float *)(*(longlong *)(lVar25 + 0x20) + 0x18);
    *(float *)(lVar35 + 0xd4) = fVar56;
    *(float *)(lVar35 + 0xd0) = fVar64 / fVar56;
    lVar35 = *(longlong *)(lVar25 + 0x2c8);
    iVar22 = *(int *)(lVar35 + 0xb4);
    lVar37 = *(longlong *)(*(longlong *)(lVar18 + 0x11f0) + 8);
    uVar27 = *(undefined8 *)(lVar37 + 0x28);
    uVar15 = *(undefined8 *)(lVar37 + 0x30);
    if (*(int *)(lVar35 + 0xb0) == iVar22) {
      iVar44 = *(int *)(lVar35 + 0xb0) + 1;
      if (iVar22 == 0) {
        iVar22 = 8;
      }
      else {
        iVar22 = iVar22 / 2 + iVar22;
      }
      if (iVar44 < iVar22) {
        iVar44 = iVar22;
      }
      FUN_1803f7030(lVar35 + 0xb0,iVar44);
    }
    puVar3 = (undefined8 *)(*(longlong *)(lVar35 + 0xb8) + (longlong)*(int *)(lVar35 + 0xb0) * 0x10)
    ;
    *puVar3 = uVar27;
    puVar3[1] = uVar15;
    *(int *)(lVar35 + 0xb0) = *(int *)(lVar35 + 0xb0) + 1;
    *(undefined8 *)(lVar35 + 0x70) = uVar27;
    *(undefined8 *)(lVar35 + 0x78) = uVar15;
    FUN_1803fc0a0(lVar35);
    lVar35 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar37 = *(longlong *)(lVar35 + 0x14f8);
    FUN_1803fc200(*(undefined8 *)(lVar37 + 0x2c8),&local_160,&uStack_158,0);
    lVar35 = local_1b0;
    lVar36 = (longlong)*(int *)(*(longlong *)(lVar37 + 0x2c8) + 0xa0);
    lVar50 = *(longlong *)(*(longlong *)(lVar37 + 0x2c8) + 0xa8);
    uVar24 = *(undefined4 *)(lVar50 + -0xc + lVar36 * 0x10);
    uVar4 = *(undefined4 *)(lVar50 + -8 + lVar36 * 0x10);
    uVar5 = *(undefined4 *)(lVar50 + -4 + lVar36 * 0x10);
    *(undefined4 *)(lVar37 + 0x268) = *(undefined4 *)(lVar50 + -0x10 + lVar36 * 0x10);
    *(undefined4 *)(lVar37 + 0x26c) = uVar24;
    *(undefined4 *)(lVar37 + 0x270) = uVar4;
    *(undefined4 *)(lVar37 + 0x274) = uVar5;
    bVar52 = false;
    if (((uVar49 & 0x5000000) == 0x1000000) && (local_1c4 != 0x3000000)) {
      if ((*(int *)(local_1b0 + 0x1b0) < 2) ||
         (lVar37 = *(longlong *)
                    (*(longlong *)(local_1b0 + 0x1b8) + -0x10 +
                    (longlong)*(int *)(local_1b0 + 0x1b0) * 8), lVar37 == 0)) {
LAB_1803e6a24:
        bVar43 = false;
      }
      else {
        if ((*(float *)(lVar37 + 0x2c) + *(float *)(lVar37 + 0x34) <= *(float *)(lVar25 + 0x2c)) ||
           (*(float *)(lVar25 + 0x2c) + *(float *)(lVar25 + 0x34) <= *(float *)(lVar37 + 0x2c)))
        goto LAB_1803e6a24;
        if ((*(float *)(lVar37 + 0x28) + *(float *)(lVar37 + 0x30) <= *(float *)(lVar25 + 0x28)) ||
           (*(float *)(lVar25 + 0x28) + *(float *)(lVar25 + 0x30) <= *(float *)(lVar37 + 0x28)))
        goto LAB_1803e6a24;
        bVar43 = true;
      }
      if (((*(int *)(*(longlong *)(*(int **)(lVar25 + 0x2c8) + 2) + 0x28 +
                    ((longlong)**(int **)(lVar25 + 0x2c8) + -1) * 0x48) == 0) &&
          (*(int *)(*(longlong *)(local_1b0 + 0x2c8) + 0x20) != 0)) && (!bVar43)) {
        bVar52 = true;
        *(longlong *)(lVar25 + 0x2c8) = *(longlong *)(local_1b0 + 0x2c8);
      }
    }
    lVar37 = *(longlong *)(lVar18 + 0x2250);
    if (lVar37 == 0) {
      lVar37 = *(longlong *)(lVar18 + 0x2068);
    }
    if ((bVar51) ||
       ((lVar37 != 0 && (*(longlong *)(lVar25 + 0x3d0) == *(longlong *)(lVar37 + 0x3d0))))) {
      uVar27 = 1;
    }
    else {
      uVar27 = 0;
    }
    local_1f0 = local_e0;
    local_1f8 = (float *)CONCAT44(local_1f8._4_4_,uVar47);
    local_1e8 = (float)(int)fVar53;
    FUN_1803e3e90(lVar25,&local_180,uVar27,local_1d7);
    if (bVar52) {
      *(longlong *)(lVar25 + 0x2c8) = lVar25 + 0x2d0;
    }
    if (((uVar49 & 8) == 0) && ((uVar49 >> 0xb & 1) != 0)) {
      bVar52 = true;
    }
    else {
      bVar52 = false;
    }
    fVar64 = *(float *)(lVar25 + 0x50);
    if (fVar64 == 0.0) {
      fVar54 = (*(float *)(lVar25 + 0x30) - (*(float *)(lVar25 + 0x58) + *(float *)(lVar25 + 0x58)))
               - (*(float *)(lVar25 + 0x78) + *(float *)(lVar25 + 0x70));
      if (bVar52) {
        fVar56 = *(float *)(lVar25 + 0x40);
        if (*(float *)(lVar25 + 0x40) <= fVar54) {
          fVar56 = fVar54;
        }
      }
      else {
        fVar56 = 0.0;
        if (0.0 <= fVar54) {
          fVar56 = fVar54;
        }
      }
    }
    else {
      fVar56 = fVar64;
    }
    fVar54 = *(float *)(lVar25 + 0x54);
    if (fVar54 == 0.0) {
      fVar53 = (*(float *)(lVar25 + 0x34) - (*(float *)(lVar25 + 0x5c) + *(float *)(lVar25 + 0x5c)))
               - (*(float *)(lVar25 + 0x7c) + *(float *)(lVar25 + 0x74));
      if ((uVar49 & 8) == 0) {
        fVar55 = *(float *)(lVar25 + 0x44);
        if (*(float *)(lVar25 + 0x44) <= fVar53) {
          fVar55 = fVar53;
        }
      }
      else {
        fVar55 = 0.0;
        if (0.0 <= fVar53) {
          fVar55 = fVar53;
        }
      }
    }
    else {
      fVar55 = fVar54;
    }
    fVar53 = *(float *)(lVar25 + 100);
    fVar57 = *(float *)(lVar25 + 0x58);
    fVar65 = *(float *)(lVar25 + 0x98);
    fVar58 = fVar57;
    if (fVar57 <= fVar53) {
      fVar58 = fVar53;
    }
    fVar62 = (float)(int)((*(float *)(lVar25 + 0x228) - fVar65) + fVar58);
    *(float *)(lVar25 + 0x248) = fVar62;
    fVar58 = *(float *)(lVar25 + 0x5c);
    fVar6 = *(float *)(lVar25 + 0x9c);
    fVar63 = fVar58;
    if (fVar58 <= fVar53) {
      fVar63 = fVar53;
    }
    fVar53 = (float)(int)((*(float *)(lVar25 + 0x22c) - fVar6) + fVar63);
    *(float *)(lVar25 + 0x24c) = fVar53;
    *(float *)(lVar25 + 0x250) = fVar62 + fVar56;
    *(float *)(lVar25 + 0x254) = fVar53 + fVar55;
    *(undefined8 *)(lVar25 + 600) = *(undefined8 *)(lVar25 + 0x248);
    *(undefined8 *)(lVar25 + 0x260) = *(undefined8 *)(lVar25 + 0x250);
    fVar56 = *(float *)(lVar25 + 0x70);
    fVar53 = (*(float *)(lVar25 + 0x28) - fVar65) + fVar57 + fVar56;
    *(float *)(lVar25 + 0x278) = fVar53;
    fVar55 = *(float *)(lVar25 + 0x74);
    fVar63 = (*(float *)(lVar25 + 0x2c) - fVar6) + fVar58 + fVar55;
    *(float *)(lVar25 + 0x27c) = fVar63;
    if (fVar64 == 0.0) {
      fVar64 = (*(float *)(lVar25 + 0x30) - (fVar57 + fVar57)) -
               (fVar56 + *(float *)(lVar25 + 0x78));
    }
    *(float *)(lVar25 + 0x280) = fVar53 + fVar64;
    if (fVar54 == 0.0) {
      fVar54 = (*(float *)(lVar25 + 0x34) - (fVar58 + fVar58)) -
               (fVar55 + *(float *)(lVar25 + 0x7c));
    }
    iVar22 = 0;
    *(float *)(lVar25 + 0x284) = fVar63 + fVar54;
    *(float *)(lVar25 + 0x15c) = (fVar56 + fVar57) - fVar65;
    *(undefined8 *)(lVar25 + 0x160) = 0;
    fVar64 = ((fVar57 + *(float *)(lVar25 + 0x28)) - fVar65) + fVar56 + 0.0;
    fVar55 = ((fVar58 + *(float *)(lVar25 + 0x2c)) - fVar6) + fVar55;
    *(float *)(lVar25 + 0x128) = fVar64;
    *(float *)(lVar25 + 300) = fVar55;
    *(float *)(lVar25 + 0x168) = fVar64 - *(float *)(lVar25 + 0x128);
    *(float *)(lVar25 + 0x16c) = fVar55 - *(float *)(lVar25 + 300);
    *(undefined4 *)(lVar25 + 0x118) = *(undefined4 *)(lVar25 + 0x128);
    *(undefined4 *)(lVar25 + 0x11c) = *(undefined4 *)(lVar25 + 300);
    *(undefined4 *)(lVar25 + 0x120) = *(undefined4 *)(lVar25 + 0x128);
    *(undefined4 *)(lVar25 + 0x124) = *(undefined4 *)(lVar25 + 300);
    *(undefined8 *)(lVar25 + 0x130) = *(undefined8 *)(lVar25 + 0x128);
    *(undefined8 *)(lVar25 + 0x138) = *(undefined8 *)(lVar25 + 0x128);
    *(undefined8 *)(lVar25 + 0x148) = 0;
    *(undefined8 *)(lVar25 + 0x140) = 0;
    *(undefined8 *)(lVar25 + 0x150) = 0;
    *(undefined2 *)(lVar25 + 0x158) = 0;
    *(undefined4 *)(lVar25 + 0x170) = 0;
    *(undefined2 *)(lVar25 + 0x174) = *(undefined2 *)(lVar25 + 0x176);
    *(undefined4 *)(lVar25 + 0x176) = 0x10000;
    *(bool *)(lVar25 + 0x17a) = 0.0 < *(float *)(lVar25 + 0xa4);
    *(undefined1 *)(lVar25 + 0x17b) = 0;
    fVar64 = *(float *)(lVar18 + 0xcec);
    if ((char)local_1c0 != '\0') {
      *(undefined8 *)(lVar25 + 0x196) = 0;
    }
    sVar32 = (short)(int)fVar64;
    *(short *)(lVar25 + 0x18c) = sVar32;
    sVar31 = *(short *)(lVar25 + 0x196);
    sVar33 = *(short *)(lVar25 + 0x198);
    bVar52 = sVar31 == 0;
    if (sVar31 != 0) {
      sVar9 = sVar31 + sVar32;
      if (sVar33 == 0) {
        sVar9 = sVar31;
      }
      sVar31 = sVar9;
    }
    *(short *)(lVar25 + 400) = sVar31;
    sVar31 = sVar33 + sVar31;
    sVar9 = *(short *)(lVar25 + 0x19a);
    if (!(sVar33 == 0 && bVar52)) {
      sVar19 = sVar31 + sVar32;
      if (sVar9 == 0) {
        sVar19 = sVar31;
      }
      sVar31 = sVar19;
    }
    *(short *)(lVar25 + 0x192) = sVar31;
    sVar31 = sVar31 + sVar9;
    if (sVar9 == 0 && (sVar33 == 0 && bVar52)) {
      sVar33 = sVar31;
    }
    else {
      sVar33 = sVar32 + sVar31;
      if (*(short *)(lVar25 + 0x19c) == 0) {
        sVar33 = sVar31;
      }
    }
    *(short *)(lVar25 + 0x194) = sVar33;
    *(uint *)(lVar25 + 0x188) = (uint)(ushort)(*(short *)(lVar25 + 0x19c) + sVar33);
    *(undefined8 *)(lVar25 + 0x196) = 0;
    *(undefined4 *)(lVar25 + 0x184) = *(undefined4 *)(lVar25 + 0x188);
    *(undefined4 *)(lVar25 + 0x188) = 0;
    *(undefined8 *)(lVar25 + 0x1a0) = 0;
    *(undefined4 *)(lVar25 + 0x1a8) = 0;
    iVar44 = *(int *)(lVar25 + 0x1b4);
    if (iVar44 < 0) {
      iVar44 = iVar44 + iVar44 / 2;
      iVar11 = iVar22;
      if (0 < iVar44) {
        iVar11 = iVar44;
      }
      FUN_18000ba20(lVar25 + 0x1b0,iVar11);
    }
    *(undefined4 *)(lVar25 + 0x1b0) = 0;
    *(longlong *)(lVar25 + 0x1c0) = lVar25 + 0x298;
    uVar24 = 1;
    *(undefined8 *)(lVar25 + 0x1c8) = 0;
    *(undefined4 *)(lVar25 + 0x1d4) = 1;
    if (lVar35 != 0) {
      uVar24 = *(undefined4 *)(lVar35 + 0x1d4);
    }
    *(undefined4 *)(lVar25 + 0x1d8) = uVar24;
    if (*(float *)(lVar25 + 0x30) <= 0.0) {
LAB_1803e6fb0:
      fVar64 = *(float *)(lVar18 + 0x1200) * DAT_1808ac918;
    }
    else {
      if ((uVar49 >> 0x18 & 1) == 0) {
        bVar52 = (uVar49 & 0x40) == 0;
      }
      else {
        bVar52 = (*(byte *)(lVar25 + 0x18) & 0x50) == 0;
      }
      if (!bVar52) goto LAB_1803e6fb0;
      fVar64 = *(float *)(lVar25 + 0x30) * DAT_1808ac230;
    }
    *(float *)(lVar25 + 0x1ec) = (float)(int)fVar64;
    *(float *)(lVar25 + 0x1e8) = (float)(int)fVar64;
    iVar44 = *(int *)(lVar25 + 0x1fc);
    if (iVar44 < 0) {
      iVar44 = iVar44 + iVar44 / 2;
      iVar11 = iVar22;
      if (0 < iVar44) {
        iVar11 = iVar44;
      }
      FUN_18007e1d0(lVar25 + 0x1f8,iVar11);
    }
    *(undefined4 *)(lVar25 + 0x1f8) = 0;
    *(undefined4 *)(lVar25 + 0x1f0) = 0xbf800000;
    iVar44 = *(int *)(lVar25 + 0x20c);
    if (iVar44 < 0) {
      iVar44 = iVar44 + iVar44 / 2;
      if (0 < iVar44) {
        iVar22 = iVar44;
      }
      FUN_18007e1d0(lVar25 + 0x208,iVar22);
    }
    *(undefined4 *)(lVar25 + 0x208) = 0;
    if ((uVar49 >> 0x1b & 1) != 0) {
      uVar24 = FUN_1803d7f30(DAT_180ca0a50 + 0x11a0);
      *(undefined4 *)(lVar25 + 0x1dc) = uVar24;
    }
    if ('\0' < *(char *)(lVar25 + 0xe8)) {
      *(char *)(lVar25 + 0xe8) = *(char *)(lVar25 + 0xe8) + -1;
    }
    if ('\0' < *(char *)(lVar25 + 0xe9)) {
      *(char *)(lVar25 + 0xe9) = *(char *)(lVar25 + 0xe9) + -1;
    }
    if ((bVar51) && (FUN_1803ef030(lVar25,2), lVar25 == *(longlong *)(lVar18 + 0x2068))) {
      FUN_1803f0510(lVar25,0);
    }
    if ((((*(char *)(lVar18 + 0x83) != '\0') && (*(longlong *)(lVar18 + 0x2068) != 0)) &&
        (*(longlong *)(*(longlong *)(lVar18 + 0x2068) + 0x3c0) == lVar25)) &&
       ((*(int *)(lVar18 + 0x1578) == 0 && (cVar21 = FUN_1803eb460(0x1224,0,0), cVar21 != '\0')))) {
      FUN_1803f3a90();
    }
    fVar55 = fStack_174;
    fVar54 = fStack_178;
    fVar56 = fStack_17c;
    fVar64 = local_180;
    if ((uVar49 & 1) == 0) {
      local_130 = local_180 + *(float *)(lVar25 + 100);
      local_12c = fStack_17c;
      local_128 = fStack_178 - *(float *)(lVar25 + 100);
      local_124 = fStack_174;
      FUN_1803e4730(lVar25,&local_130,local_168,local_148);
    }
    *(undefined4 *)(lVar25 + 0x288) = 0;
    if ((uVar49 >> 0x19 & 1) != 0) {
      *(longlong *)(lVar18 + 0x26d8) = lVar25;
    }
    lVar37 = DAT_180ca0a50;
    if ((uVar49 >> 0x18 & 1) == 0) {
      uVar20 = *(char *)(lVar18 + 0x82) == '\0';
    }
    else {
      uVar20 = *(undefined1 *)(lVar35 + 0xf0);
    }
    *(undefined1 *)(lVar25 + 0xf0) = uVar20;
    *(undefined4 *)(lVar25 + 0x1e0) = 0;
    if (*(float *)(lVar37 + 0x110) < fVar64 - *(float *)(lVar37 + 0xd04)) {
LAB_1803e71dd:
      uVar24 = 0;
    }
    else if (((*(float *)(lVar37 + 0x114) < fVar56 - *(float *)(lVar37 + 0xd08)) ||
             (fVar54 + *(float *)(lVar37 + 0xd04) <= *(float *)(lVar37 + 0x110))) ||
            (uVar24 = 1, fVar55 + *(float *)(lVar37 + 0xd08) <= *(float *)(lVar37 + 0x114)))
    goto LAB_1803e71dd;
    *(undefined4 *)(lVar25 + 0x1e0) = uVar24;
    *(undefined4 *)(lVar37 + 0x1ee8) = *(undefined4 *)(lVar25 + 0x8c);
    *(undefined4 *)(lVar37 + 0x1eec) = *(undefined4 *)(lVar37 + 0x1ea8);
    *(ulonglong *)(lVar37 + 0x1f04) = CONCAT44(fStack_17c,local_180);
    *(ulonglong *)(lVar37 + 0x1f0c) = CONCAT44(fStack_174,fStack_178);
    *(undefined4 *)(lVar37 + 0x1ef0) = uVar24;
    *(ulonglong *)(lVar37 + 0x1ef4) = CONCAT44(fStack_17c,local_180);
    *(ulonglong *)(lVar37 + 0x1efc) = CONCAT44(fStack_174,fStack_178);
    iVar22 = *(int *)(lVar18 + 0x1eac);
    if ((iVar22 != 0) &&
       ((*(int *)(lVar25 + 0x10) == iVar22 || (*(int *)(lVar25 + 0x8c) == iVar22)))) {
      FUN_1803f52e0();
    }
    iVar22 = local_1cc;
    iVar44 = local_1bc;
  }
  if (*(char *)(lVar25 + 0xd2) == '\0') {
    FUN_1803e0300(lVar25 + 0x238,lVar25 + 0x240,1);
  }
  *(undefined1 *)(lVar25 + 0xce) = 0;
  *(short *)(lVar25 + 0xda) = *(short *)(lVar25 + 0xda) + 1;
  *(undefined4 *)(lVar18 + 0x1f38) = 0;
  if (iVar22 == iVar44) goto LAB_1803e7514;
  if (*(char *)(lVar25 + 0xd2) != '\0') {
    *(undefined1 *)(lVar25 + 0xd1) = 1;
    goto LAB_1803e7514;
  }
  if ((uVar49 & 0x11000000) == 0x1000000) {
    if (((((*(uint *)(lVar25 + 0x18) & 0x100) == 0) || (*(char *)(lVar18 + 0x20c9) == '\0')) ||
        (*(longlong *)(lVar18 + 0x2068) == 0)) ||
       (*(longlong *)(*(longlong *)(lVar18 + 0x2068) + 0x3d8) != *(longlong *)(lVar25 + 0x3d8))) {
      bVar51 = false;
    }
    else {
      bVar51 = true;
    }
    if ((!bVar51 && *(char *)(lVar18 + 0x2868) == '\0') &&
       ((*(float *)(lVar25 + 0x220) <= *(float *)(lVar25 + 0x218) ||
        (*(float *)(lVar25 + 0x224) <= *(float *)(lVar25 + 0x21c))))) {
      if ((*(char *)(lVar25 + 0xe8) < '\x01') && (*(char *)(lVar25 + 0xe9) < '\x01')) {
        *(undefined1 *)(lVar25 + 0xeb) = 1;
      }
      else {
        *(undefined1 *)(lVar25 + 0xec) = 1;
      }
    }
    if (lVar35 != 0) {
      if ((*(char *)(lVar35 + 0xcf) != '\0') || ('\0' < *(char *)(lVar35 + 0xeb))) {
        *(undefined1 *)(lVar25 + 0xeb) = 1;
      }
      if ('\0' < *(char *)(lVar35 + 0xec)) {
        *(undefined1 *)(lVar25 + 0xec) = 1;
      }
    }
  }
  if (*(float *)(lVar18 + 0xc9c) <= 0.0) {
    *(undefined1 *)(lVar25 + 0xeb) = 1;
  }
  if ((*(char *)(lVar25 + 0xeb) < '\x01') && (*(char *)(lVar25 + 0xec) < '\x01')) {
    bVar52 = false;
    bVar51 = false;
    if ('\0' < *(char *)(lVar25 + 0xed)) goto LAB_1803e74a9;
    uVar20 = 0;
  }
  else {
    bVar51 = true;
LAB_1803e74a9:
    bVar52 = bVar51;
    uVar20 = 1;
  }
  *(undefined1 *)(lVar25 + 0xd4) = uVar20;
  if ('\0' < *(char *)(lVar25 + 0xee)) {
    *(char *)(lVar25 + 0xee) = *(char *)(lVar25 + 0xee) + -1;
    *(uint *)(lVar25 + 0x14) = *(uint *)(lVar25 + 0x14) | 0x30200;
  }
  uVar20 = 0;
  if ((((*(char *)(lVar25 + 0xcf) != '\0') || (*(char *)(lVar25 + 0xcc) == '\0')) || (bVar52)) &&
     (((*(char *)(lVar25 + 0xe8) < '\x01' && (*(char *)(lVar25 + 0xe9) < '\x01')) &&
      (*(char *)(lVar25 + 0xec) < '\x01')))) {
    uVar20 = 1;
  }
  *(undefined1 *)(lVar25 + 0xd1) = uVar20;
LAB_1803e7514:
  if ((*(char *)(lVar25 + 0xd5) == '\0') &&
     (((*(char *)(lVar18 + 0xb3) != '\0' && (local_198 == 0)) ||
      ((*(char *)(lVar18 + 0xb4) != '\0' &&
       ((int)*(char *)(lVar18 + 0x2930) == *(int *)(lVar18 + 0x14c8))))))) {
    if ('\0' < *(char *)(lVar25 + 0xe8)) {
      *(char *)(lVar25 + 0xe8) = *(char *)(lVar25 + 0xe8) + '\x01';
    }
    if ('\0' < *(char *)(lVar25 + 0xe9)) {
      *(char *)(lVar25 + 0xe9) = *(char *)(lVar25 + 0xe9) + '\x01';
    }
    bVar51 = false;
  }
  else {
    bVar51 = *(char *)(lVar25 + 0xd1) == '\0';
  }
  return bVar51;
}



/* ===== 1803e75b0 FUN_1803e75b0 ===== */

void FUN_1803e75b0(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  undefined *puVar13;
  longlong lVar14;
  undefined4 uVar15;
  
  lVar11 = DAT_180ca0a50;
  if ((*(int *)(DAT_180ca0a50 + 0x14c8) < 2) && (*(char *)(DAT_180ca0a50 + 2) != '\0')) {
    FUN_1803ebc00("Calling End() too many times!");
    return;
  }
  lVar5 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  lVar14 = (longlong)*(int *)(DAT_180ca0a50 + 0x14c8) * 0x88;
  uVar12 = *(uint *)(lVar5 + 0x14);
  lVar6 = *(longlong *)(DAT_180ca0a50 + 0x14d0);
  if ((uVar12 >> 0x1a & 1) != 0) {
    if (*(int *)(DAT_180ca0a50 + 0x1464) != *(int *)(lVar5 + 0x10)) {
      FUN_1803ebc00("Must call EndPopup() and not End()!");
    }
    uVar12 = *(uint *)(lVar5 + 0x14);
  }
  if (((uVar12 >> 0x18 & 1) != 0) && (*(int *)(lVar11 + 0x1460) != *(int *)(lVar5 + 0x10))) {
    FUN_1803ebc00("Must call EndChild() and not End()!");
  }
  if (*(longlong *)(lVar5 + 0x1c8) != 0) {
    FUN_180413c70();
  }
  if (*(char *)(lVar5 + 0xd2) == '\0') {
    FUN_1803e0390();
  }
  lVar7 = DAT_180ca0a50;
  iVar3 = *(int *)(DAT_180ca0a50 + 0x1ff0);
  if (*(short *)(*(longlong *)(DAT_180ca0a50 + 0x28e8) + 0xc) < iVar3) {
    *(int *)(DAT_180ca0a50 + 0x1ff0) = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined4 *)(*(longlong *)(lVar7 + 0x1ff8) + (longlong)(iVar3 + -2) * 8);
    }
    *(undefined4 *)(lVar7 + 0x1ea4) = uVar15;
  }
  else {
    FUN_1803ebc00("Calling PopFocusScope() too many times!");
  }
  lVar7 = DAT_180ca0a50;
  if ((*(char *)(lVar6 + -0x1a + lVar14) != '\0') && (*(longlong *)(lVar5 + 0x3c0) == lVar5)) {
    *(short *)(DAT_180ca0a50 + 0x26d0) = *(short *)(DAT_180ca0a50 + 0x26d0) + -1;
    iVar3 = *(int *)(lVar7 + 0x2000);
    *(int *)(lVar7 + 0x2000) = iVar3 + -1;
    *(undefined4 *)(lVar7 + 0x1ea8) =
         *(undefined4 *)(*(longlong *)(lVar7 + 0x2008) + (longlong)(iVar3 + -2) * 4);
    *(undefined4 *)(lVar7 + 0xc9c) =
         *(undefined4 *)
          (((longlong)*(int *)(lVar7 + 0x14c8) + -1) * 0x88 + 0x70 + *(longlong *)(lVar7 + 0x14d0));
  }
  if (*(char *)(lVar5 + 0xd2) != '\0') {
    *(longlong *)(lVar5 + 0x2c8) = lVar5 + 0x2d0;
  }
  lVar7 = DAT_180ca0a50;
  if ((*(longlong *)(lVar11 + 0x2870) == lVar5) && (*(char *)(DAT_180ca0a50 + 0x2868) != '\0')) {
    FUN_1803f3880(&DAT_1806e6e50);
    uVar12 = *(uint *)(lVar7 + 0x286c) & 0xf;
    if (uVar12 == 1) {
      fflush(*(FILE **)(lVar7 + 0x2878));
    }
    else if (uVar12 == 2) {
      FUN_18051053c(*(undefined8 *)(lVar7 + 0x2878));
    }
    else if ((uVar12 == 8) && (1 < *(int *)(lVar7 + 0x2880))) {
      puVar13 = &DAT_180ca006f;
      if (*(undefined **)(lVar7 + 0x2888) != (undefined *)0x0) {
        puVar13 = *(undefined **)(lVar7 + 0x2888);
      }
      if (*(code **)(DAT_180ca0a50 + 0xc18) != (code *)0x0) {
        (**(code **)(DAT_180ca0a50 + 0xc18))(DAT_180ca0a50,puVar13);
      }
    }
    *(undefined1 *)(lVar7 + 0x1576) = 0;
    *(undefined1 *)(lVar7 + 0x2868) = 0;
    *(undefined4 *)(lVar7 + 0x286c) = 0;
    *(undefined8 *)(lVar7 + 0x2878) = 0;
    FUN_1803d6150(lVar7 + 0x2880);
  }
  if (*(char *)(lVar5 + 0x159) != '\0') {
    lVar7 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    *(undefined1 *)(lVar7 + 0x159) = 0;
    if (((*(float *)(lVar7 + 0x130) < *(float *)(lVar7 + 0x118)) ||
        (*(float *)(lVar7 + 0x134) < *(float *)(lVar7 + 0x11c))) &&
       (*(char *)(lVar7 + 0xd1) == '\0')) {
      FUN_1803ebc00(
                   "Code uses SetCursorPos()/SetCursorScreenPos() to extend window/parent boundaries.\nPlease submit an item e.g. Dummy() afterwards in order to grow window/parent boundaries."
                   );
    }
  }
  puVar1 = (undefined8 *)(lVar6 + -0x80 + lVar14);
  uVar10 = puVar1[1];
  *(undefined8 *)(lVar11 + 0x1ee8) = *puVar1;
  *(undefined8 *)(lVar11 + 0x1ef0) = uVar10;
  puVar1 = (undefined8 *)(lVar6 + -0x70 + lVar14);
  uVar10 = puVar1[1];
  *(undefined8 *)(lVar11 + 0x1ef8) = *puVar1;
  *(undefined8 *)(lVar11 + 0x1f00) = uVar10;
  puVar1 = (undefined8 *)(lVar6 + -0x60 + lVar14);
  uVar10 = puVar1[1];
  *(undefined8 *)(lVar11 + 0x1f08) = *puVar1;
  *(undefined8 *)(lVar11 + 0x1f10) = uVar10;
  puVar2 = (undefined4 *)(lVar6 + -0x50 + lVar14);
  uVar15 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  *(undefined4 *)(lVar11 + 0x1f18) = *puVar2;
  *(undefined4 *)(lVar11 + 0x1f1c) = uVar15;
  *(undefined4 *)(lVar11 + 0x1f20) = uVar8;
  *(undefined4 *)(lVar11 + 0x1f24) = uVar9;
  puVar2 = (undefined4 *)(lVar6 + -0x40 + lVar14);
  uVar15 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  *(undefined4 *)(lVar11 + 0x1f28) = *puVar2;
  *(undefined4 *)(lVar11 + 0x1f2c) = uVar15;
  *(undefined4 *)(lVar11 + 0x1f30) = uVar8;
  *(undefined4 *)(lVar11 + 0x1f34) = uVar9;
  if ((*(uint *)(lVar5 + 0x14) & 0x10000000) != 0) {
    *(int *)(lVar11 + 0x263c) = *(int *)(lVar11 + 0x263c) + -1;
  }
  if ((*(uint *)(lVar5 + 0x14) & 0x4000000) != 0) {
    *(int *)(lVar11 + 0x2030) = *(int *)(lVar11 + 0x2030) + -1;
  }
  if (*(char *)(lVar11 + 0xac) != '\0') {
    FUN_1803eb5f0(lVar6 + -0x30 + lVar14);
  }
  iVar4 = *(int *)(lVar11 + 0x14c8);
  iVar3 = iVar4 + -1;
  *(int *)(lVar11 + 0x14c8) = iVar3;
  if (iVar3 == 0) {
    FUN_1803dd530(0);
    return;
  }
  FUN_1803dd530(*(undefined8 *)((longlong)(iVar4 + -2) * 0x88 + *(longlong *)(lVar11 + 0x14d0)));
  return;
}



/* ===== 1803e7920 FUN_1803e7920 ===== */

void FUN_1803e7920(char param_1)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = DAT_180ca0a50;
  uVar2 = *(uint *)(DAT_180ca0a50 + 0x1ea8);
  if ((uVar2 & 0x40) == 0) {
    if (param_1 == '\0') goto LAB_1803e7968;
    pfVar1 = (float *)(DAT_180ca0a50 + 0xc9c);
    *(float *)(DAT_180ca0a50 + 0x26cc) = *pfVar1;
    *(float *)(lVar3 + 0xc9c) = *pfVar1 * *(float *)(lVar3 + 0xca0);
  }
  *(uint *)(lVar3 + 0x1ea8) = uVar2 | 0x40;
LAB_1803e7968:
  iVar4 = *(int *)(lVar3 + 0x2004);
  if (*(int *)(lVar3 + 0x2000) == iVar4) {
    iVar5 = *(int *)(lVar3 + 0x2000) + 1;
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    FUN_18007e1d0(lVar3 + 0x2000,iVar5);
  }
  *(undefined4 *)(*(longlong *)(lVar3 + 0x2008) + (longlong)*(int *)(lVar3 + 0x2000) * 4) =
       *(undefined4 *)(lVar3 + 0x1ea8);
  *(int *)(lVar3 + 0x2000) = *(int *)(lVar3 + 0x2000) + 1;
  *(short *)(lVar3 + 0x26d0) = *(short *)(lVar3 + 0x26d0) + 1;
  return;
}



/* ===== 1803e79e0 FUN_1803e79e0 ===== */

void FUN_1803e79e0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = DAT_180ca0a50;
  if (*(short *)(DAT_180ca0a50 + 0x26d0) < 1) {
    FUN_1803ebc00("Calling EndDisabled() too many times!");
    return;
  }
  iVar1 = *(int *)(DAT_180ca0a50 + 0x2000);
  uVar2 = *(uint *)(DAT_180ca0a50 + 0x1ea8);
  *(short *)(DAT_180ca0a50 + 0x26d0) = *(short *)(DAT_180ca0a50 + 0x26d0) + -1;
  *(int *)(lVar4 + 0x2000) = iVar1 + -1;
  uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x2008) + (longlong)(iVar1 + -2) * 4);
  *(uint *)(lVar4 + 0x1ea8) = uVar3;
  if (((uVar2 & 0x40) != 0) && ((uVar3 & 0x40) == 0)) {
    *(undefined4 *)(lVar4 + 0xc9c) = *(undefined4 *)(lVar4 + 0x26cc);
  }
  return;
}



/* ===== 1803e7a50 FUN_1803e7a50 ===== */

void FUN_1803e7a50(undefined4 param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  iVar2 = *(int *)(lVar1 + 0x20c);
  if (*(int *)(lVar1 + 0x208) == iVar2) {
    iVar3 = *(int *)(lVar1 + 0x208) + 1;
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    FUN_18007e1d0(lVar1 + 0x208,iVar3);
  }
  *(undefined4 *)(*(longlong *)(lVar1 + 0x210) + (longlong)*(int *)(lVar1 + 0x208) * 4) =
       *(undefined4 *)(lVar1 + 0x1f0);
  *(int *)(lVar1 + 0x208) = *(int *)(lVar1 + 0x208) + 1;
  *(undefined4 *)(lVar1 + 0x1f0) = param_1;
  return;
}



/* ===== 1803e7af0 FUN_1803e7af0 ===== */

bool FUN_1803e7af0(uint param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar1 = DAT_180ca0a50;
  if ((param_1 & 0xffffcf50) != 0) {
    FUN_1803ebc00("Invalid flags for IsWindowHovered()!");
  }
  lVar6 = *(longlong *)(lVar1 + 0x1500);
  if (lVar6 != 0) {
    if ((param_1 & 4) == 0) {
      lVar5 = *(longlong *)(lVar1 + 0x14f8);
      if (((param_1 & 2) != 0) && (lVar3 = lVar5, lVar5 != 0)) {
        do {
          lVar5 = *(longlong *)(lVar3 + 0x3c0);
          if ((param_1 & 8) == 0) {
            lVar5 = *(longlong *)(lVar5 + 0x3c8);
          }
          bVar7 = lVar3 != lVar5;
          lVar3 = lVar5;
        } while (bVar7);
      }
      if ((param_1 & 1) == 0) {
        bVar7 = lVar6 == lVar5;
      }
      else {
        lVar3 = lVar6;
        if ((param_1 & 8) == 0) {
          do {
            lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x3c0) + 0x3c8);
            bVar7 = lVar3 != lVar4;
            lVar3 = lVar4;
          } while (bVar7);
        }
        else {
          do {
            lVar4 = *(longlong *)(lVar3 + 0x3c0);
            bVar7 = lVar3 != lVar4;
            lVar3 = lVar4;
          } while (bVar7);
        }
        if (lVar4 == lVar5) {
LAB_1803e7bac:
          bVar7 = true;
        }
        else {
          lVar3 = lVar6;
          do {
            if (lVar3 == lVar5) goto LAB_1803e7bac;
          } while ((lVar3 != lVar4) && (lVar3 = *(longlong *)(lVar3 + 0x3b0), lVar3 != 0));
          bVar7 = false;
        }
      }
      if (!bVar7) {
        return false;
      }
    }
    cVar2 = FUN_1803dd8c0(lVar6,param_1);
    if (cVar2 != '\0') {
      if ((((-1 < (char)param_1) && (*(int *)(lVar1 + 0x1578) != 0)) &&
          (*(char *)(lVar1 + 0x1587) == '\0')) &&
         (*(int *)(lVar1 + 0x1578) != *(int *)(lVar6 + 0x8c))) {
        return false;
      }
      if ((param_1 >> 0xc & 1) != 0) {
        param_1 = param_1 | *(uint *)(lVar1 + 0x11cc);
      }
      if ((param_1 >> 0xd & 1) == 0) {
        return true;
      }
      return *(int *)(lVar1 + 0x24fc) == *(int *)(lVar6 + 0x10);
    }
  }
  return false;
}



/* ===== 1803e7c50 FUN_1803e7c50 ===== */

void FUN_1803e7c50(longlong param_1,undefined8 *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((param_3 == 0) || ((param_3 & (int)*(char *)(param_1 + 0xf1)) != 0)) {
    *(undefined4 *)(param_1 + 0xf4) = 0x7f7fffff;
    *(undefined4 *)(param_1 + 0xf8) = 0x7f7fffff;
    *(uint *)(param_1 + 0xf0) =
         (*(uint *)(param_1 + 0xf0) >> 8 & 0xf1) << 8 | *(uint *)(param_1 + 0xf0) & 0xffff00ff;
    fVar1 = (float)(int)(float)*param_2;
    fVar2 = (float)(int)(float)((ulonglong)*param_2 >> 0x20);
    fVar3 = fVar1 - *(float *)(param_1 + 0x28);
    *(ulonglong *)(param_1 + 0x28) = CONCAT44(fVar2,fVar1);
    fVar2 = fVar2 - *(float *)(param_1 + 0x2c);
    if ((fVar3 != 0.0) || (fVar2 != 0.0)) {
      if (((*(uint *)(param_1 + 0x14) & 0x100) == 0) && (*(float *)(DAT_180ca0a50 + 0x27a4) <= 0.0))
      {
        *(undefined4 *)(DAT_180ca0a50 + 0x27a4) = *(undefined4 *)(DAT_180ca0a50 + 0x44);
      }
      *(float *)(param_1 + 0x118) = fVar3 + *(float *)(param_1 + 0x118);
      *(float *)(param_1 + 0x11c) = fVar2 + *(float *)(param_1 + 0x11c);
      *(float *)(param_1 + 0x130) = fVar3 + *(float *)(param_1 + 0x130);
      *(float *)(param_1 + 0x134) = fVar2 + *(float *)(param_1 + 0x134);
      *(float *)(param_1 + 0x138) = fVar3 + *(float *)(param_1 + 0x138);
      *(float *)(param_1 + 0x128) = fVar3 + *(float *)(param_1 + 0x128);
      *(float *)(param_1 + 0x13c) = fVar2 + *(float *)(param_1 + 0x13c);
      *(float *)(param_1 + 300) = fVar2 + *(float *)(param_1 + 300);
    }
  }
  return;
}



/* ===== 1803e7da0 FUN_1803e7da0 ===== */

void FUN_1803e7da0(longlong param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  uint uVar4;
  float fVar5;
  
  if ((param_3 != 0) && ((param_3 & (int)*(char *)(param_1 + 0xf2)) == 0)) {
    return;
  }
  *(uint *)(param_1 + 0xf0) =
       (*(uint *)(param_1 + 0xf0) >> 0x10 & 0xf1) << 0x10 | *(uint *)(param_1 + 0xf0) & 0xff00ffff;
  uVar4 = *(uint *)(param_1 + 0x14) & 0x1000000;
  if (((uVar4 == 0) || (*(char *)(param_1 + 0xd3) != '\0')) ||
     ((*(byte *)(param_1 + 0x18) & 0x40) != 0)) {
    uVar3 = 0;
    if (*param_2 <= 0.0) {
      uVar3 = 2;
    }
    *(undefined1 *)(param_1 + 0xe8) = uVar3;
    if (uVar4 != 0) goto LAB_1803e7e18;
  }
  else {
LAB_1803e7e18:
    if ((*(char *)(param_1 + 0xd3) == '\0') && ((*(byte *)(param_1 + 0x18) & 0x40) == 0))
    goto LAB_1803e7e37;
  }
  uVar3 = 0;
  if (param_2[1] <= 0.0) {
    uVar3 = 2;
  }
  *(undefined1 *)(param_1 + 0xe9) = uVar3;
LAB_1803e7e37:
  fVar1 = *(float *)(param_1 + 0x38);
  fVar2 = *(float *)(param_1 + 0x3c);
  if (0.0 < *param_2) {
    fVar5 = (float)(int)*param_2;
    *(float *)(param_1 + 0x38) = fVar5;
  }
  else {
    *(undefined1 *)(param_1 + 0xea) = 0;
    fVar5 = fVar1;
  }
  if (0.0 < param_2[1]) {
    *(float *)(param_1 + 0x3c) = (float)(int)param_2[1];
  }
  else {
    *(undefined1 *)(param_1 + 0xea) = 0;
  }
  if (((fVar1 != fVar5) || (fVar2 != *(float *)(param_1 + 0x3c))) &&
     (((*(uint *)(param_1 + 0x14) >> 8 & 1) == 0 && (*(float *)(DAT_180ca0a50 + 0x27a4) <= 0.0)))) {
    *(undefined4 *)(DAT_180ca0a50 + 0x27a4) = *(undefined4 *)(DAT_180ca0a50 + 0x44);
  }
  return;
}



/* ===== 1803e7ec0 FUN_1803e7ec0 ===== */

void FUN_1803e7ec0(undefined4 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = DAT_180ca0a50;
  iVar4 = *(int *)(DAT_180ca0a50 + 0x1ff4);
  uVar1 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x10);
  if (*(int *)(DAT_180ca0a50 + 0x1ff0) == iVar4) {
    iVar5 = *(int *)(DAT_180ca0a50 + 0x1ff0) + 1;
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    FUN_18000ba20(DAT_180ca0a50 + 0x1ff0,iVar5);
  }
  iVar4 = *(int *)(lVar3 + 0x1ff0);
  lVar2 = *(longlong *)(lVar3 + 0x1ff8);
  *(undefined4 *)(lVar2 + (longlong)iVar4 * 8) = param_1;
  *(undefined4 *)(lVar2 + 4 + (longlong)iVar4 * 8) = uVar1;
  *(int *)(lVar3 + 0x1ff0) = *(int *)(lVar3 + 0x1ff0) + 1;
  *(undefined4 *)(lVar3 + 0x1ea4) = param_1;
  return;
}



/* ===== 1803e7f50 FUN_1803e7f50 ===== */

void FUN_1803e7f50(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  lVar8 = DAT_180ca0a50;
  *(int *)(DAT_180ca0a50 + 0x2070) = param_1;
  piVar1 = (int *)(lVar8 + 0x2090);
  iVar10 = *(int *)(lVar8 + 0x2094);
  if (iVar10 < 0) {
    iVar10 = iVar10 + iVar10 / 2;
    iVar9 = 0;
    if (0 < iVar10) {
      iVar9 = iVar10;
    }
    FUN_18000ba20(piVar1,iVar9);
  }
  *piVar1 = 0;
  if (param_1 != 0) {
    if (param_1 == *(int *)(lVar8 + 0x1ea4)) {
      uVar2 = *(uint *)(lVar8 + 0x1ff0);
      iVar10 = 0;
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        lVar5 = *(longlong *)(lVar8 + 0x1ff8);
        if (*(int *)(lVar5 + 4 + (ulonglong)uVar2 * 8) !=
            *(int *)(*(longlong *)(lVar8 + 0x14f8) + 0x10)) break;
        iVar9 = *(int *)(lVar8 + 0x2094);
        if (iVar10 == iVar9) {
          if (iVar9 == 0) {
            iVar9 = 8;
          }
          else {
            iVar9 = iVar9 / 2 + iVar9;
          }
          iVar7 = iVar10 + 1;
          if (iVar10 + 1 < iVar9) {
            iVar7 = iVar9;
          }
          FUN_18000ba20(piVar1,iVar7);
        }
        *(undefined8 *)(*(longlong *)(lVar8 + 0x2098) + (longlong)*piVar1 * 8) =
             *(undefined8 *)(lVar5 + (ulonglong)uVar2 * 8);
        *piVar1 = *piVar1 + 1;
        iVar10 = *piVar1;
      }
    }
    else {
      if (param_1 != *(int *)(*(longlong *)(lVar8 + 0x2068) + 0x428)) {
        return;
      }
      uVar3 = *(undefined4 *)(*(longlong *)(lVar8 + 0x2068) + 0x10);
      if (*(int *)(lVar8 + 0x2094) == 0) {
        FUN_18000ba20(piVar1,8);
      }
      iVar10 = *piVar1;
      lVar5 = *(longlong *)(lVar8 + 0x2098);
      *(int *)(lVar5 + (longlong)iVar10 * 8) = param_1;
      *(undefined4 *)(lVar5 + 4 + (longlong)iVar10 * 8) = uVar3;
      *piVar1 = *piVar1 + 1;
      iVar10 = *piVar1;
    }
    for (lVar5 = *(longlong *)(*(longlong *)(lVar8 + 0x2068) + 0x3e0); lVar5 != 0;
        lVar5 = *(longlong *)(lVar5 + 0x3e0)) {
      iVar9 = *(int *)(lVar8 + 0x2094);
      uVar3 = *(undefined4 *)(lVar5 + 0x428);
      uVar4 = *(undefined4 *)(lVar5 + 0x10);
      if (iVar10 == iVar9) {
        if (iVar9 == 0) {
          iVar9 = 8;
        }
        else {
          iVar9 = iVar9 / 2 + iVar9;
        }
        iVar7 = iVar10 + 1;
        if (iVar10 + 1 < iVar9) {
          iVar7 = iVar9;
        }
        FUN_18000ba20(piVar1,iVar7);
      }
      iVar10 = *piVar1;
      lVar6 = *(longlong *)(lVar8 + 0x2098);
      *(undefined4 *)(lVar6 + (longlong)iVar10 * 8) = uVar3;
      *(undefined4 *)(lVar6 + 4 + (longlong)iVar10 * 8) = uVar4;
      iVar10 = *piVar1 + 1;
      *piVar1 = iVar10;
    }
  }
  return;
}



/* ===== 1803e8120 FUN_1803e8120 ===== */

void FUN_1803e8120(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = DAT_180ca0a50;
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if ((*(byte *)(DAT_180ca0a50 + 0x28f4) & 4) != 0) {
    FUN_1803f5060("SetKeyboardFocusHere(%d) in window \"%s\"\n",0,*(undefined8 *)(lVar1 + 8));
  }
  if ((*(char *)(lVar2 + 0x2290) == '\0') && (*(longlong *)(lVar2 + 0x1518) == 0)) {
    FUN_1803ef3d0(lVar1);
    uVar3 = 3;
    if (*(char *)(lVar1 + 0xd3) != '\0') {
      uVar3 = 0x21;
    }
    FUN_1803f0230(0xffffffff,3,0x5600,uVar3);
    *(undefined4 *)(lVar2 + 0x2148) = 1;
    *(undefined4 *)(lVar2 + 0x214c) = 1;
    return;
  }
  if ((*(byte *)(lVar2 + 0x28f4) & 4) != 0) {
    FUN_1803f5060("SetKeyboardFocusHere() ignored while DragDropActive!\n");
  }
  return;
}



/* ===== 1803e81e0 FUN_1803e81e0 ===== */

void FUN_1803e81e0(void)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  
  lVar8 = DAT_180ca0a50;
  iVar9 = *(int *)(DAT_180ca0a50 + 0xc84);
  piVar1 = (int *)(DAT_180ca0a50 + 0xc80);
  if (iVar9 < 0) {
    iVar9 = iVar9 + iVar9 / 2;
    iVar12 = 0;
    if (0 < iVar9) {
      iVar12 = iVar9;
    }
    FUN_18000ba20(piVar1,iVar12);
  }
  *piVar1 = 0;
  plVar13 = *(longlong **)(lVar8 + 0x11e8);
  plVar2 = plVar13 + *(int *)(lVar8 + 0x11e0);
  if (((longlong)*(int *)(lVar8 + 0x11e0) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar5 = *plVar13;
      plVar10 = *(longlong **)(lVar5 + 0x48);
      plVar3 = plVar10 + *(int *)(lVar5 + 0x40);
      for (; plVar10 != plVar3; plVar10 = plVar10 + 1) {
        lVar6 = *plVar10;
        *(undefined2 *)(lVar6 + 0x5c) = *(undefined2 *)(lVar5 + 0x2d4);
        iVar9 = *(int *)(lVar8 + 0xc84);
        if (*piVar1 == iVar9) {
          iVar12 = *piVar1 + 1;
          if (iVar9 == 0) {
            iVar9 = 8;
          }
          else {
            iVar9 = iVar9 / 2 + iVar9;
          }
          if (iVar12 < iVar9) {
            iVar12 = iVar9;
          }
          FUN_18000ba20(piVar1,iVar12);
        }
        *(longlong *)(*(longlong *)(lVar8 + 0xc88) + (longlong)*piVar1 * 8) = lVar6;
        *piVar1 = *piVar1 + 1;
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar2);
  }
  puVar11 = *(undefined8 **)(lVar8 + 0x2798);
  puVar4 = puVar11 + *(int *)(lVar8 + 0x2790);
  if (((longlong)*(int *)(lVar8 + 0x2790) & 0x1fffffffffffffffU) != 0) {
    do {
      iVar9 = *(int *)(lVar8 + 0xc84);
      uVar7 = *puVar11;
      if (*piVar1 == iVar9) {
        iVar12 = *piVar1 + 1;
        if (iVar9 == 0) {
          iVar9 = 8;
        }
        else {
          iVar9 = iVar9 / 2 + iVar9;
        }
        if (iVar12 < iVar9) {
          iVar12 = iVar9;
        }
        FUN_18000ba20(piVar1,iVar12);
      }
      puVar11 = puVar11 + 1;
      *(undefined8 *)(*(longlong *)(lVar8 + 0xc88) + (longlong)*piVar1 * 8) = uVar7;
      *(int *)(lVar8 + 0xc80) = *(int *)(lVar8 + 0xc80) + 1;
    } while (puVar11 != puVar4);
  }
  return;
}



/* ===== 1803e8390 FUN_1803e8390 ===== */

void FUN_1803e8390(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong *plVar11;
  int iVar12;
  
  *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d4) + 1;
  lVar3 = DAT_180ca0a50;
  iVar9 = 8;
  iVar8 = *(int *)(DAT_180ca0a50 + 0x11e4);
  if (*(int *)(DAT_180ca0a50 + 0x11e0) == iVar8) {
    iVar12 = *(int *)(DAT_180ca0a50 + 0x11e0) + 1;
    if (iVar8 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar8 / 2 + iVar8;
    }
    if (iVar12 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar8 < iVar12) {
      uVar6 = _malloc_base((longlong)iVar12 * 8);
      lVar4 = DAT_180ca0a50;
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
      if (*(longlong *)(lVar3 + 0x11e8) != 0) {
        FUN_180540530(uVar6,*(longlong *)(lVar3 + 0x11e8),(longlong)*(int *)(lVar3 + 0x11e0) << 3);
        lVar2 = *(longlong *)(lVar3 + 0x11e8);
        if ((lVar2 != 0) && (lVar4 != 0)) {
          piVar10 = (int *)(lVar4 + 0x29c0 + (longlong)*(short *)(lVar4 + 0x29bc) * 8);
          if (*piVar10 != *(int *)(lVar4 + 4)) {
            iVar8 = *(short *)(lVar4 + 0x29bc) + 1;
            sVar7 = (short)iVar8 + (short)(iVar8 / 6) * -6;
            *(short *)(lVar4 + 0x29bc) = sVar7;
            piVar10 = (int *)(lVar4 + 0x29c0 + (longlong)sVar7 * 8);
            *piVar10 = *(int *)(lVar4 + 4);
            *(undefined4 *)(lVar4 + 0x29c4 + (longlong)sVar7 * 8) = 0;
          }
          *(short *)((longlong)piVar10 + 6) = *(short *)((longlong)piVar10 + 6) + 1;
          *(int *)(lVar4 + 0x29b8) = *(int *)(lVar4 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar2);
      }
      *(undefined8 *)(lVar3 + 0x11e8) = uVar6;
      *(int *)(lVar3 + 0x11e4) = iVar12;
    }
  }
  *(longlong *)(*(longlong *)(lVar3 + 0x11e8) + (longlong)*(int *)(lVar3 + 0x11e0) * 8) = param_1;
  *(int *)(lVar3 + 0x11e0) = *(int *)(lVar3 + 0x11e0) + 1;
  iVar8 = *(int *)(param_1 + 0x2a4);
  if (*(int *)(param_1 + 0x2a0) == iVar8) {
    iVar12 = *(int *)(param_1 + 0x2a0) + 1;
    if (iVar8 != 0) {
      iVar9 = iVar8 + iVar8 / 2;
    }
    if (iVar12 < iVar9) {
      iVar12 = iVar9;
    }
    if (iVar8 < iVar12) {
      uVar6 = _malloc_base((longlong)iVar12 * 8);
      lVar4 = DAT_180ca0a50;
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
      if (*(longlong *)(param_1 + 0x2a8) != 0) {
        FUN_180540530(uVar6,*(longlong *)(param_1 + 0x2a8),(longlong)*(int *)(param_1 + 0x2a0) << 3)
        ;
        lVar2 = *(longlong *)(param_1 + 0x2a8);
        if ((lVar2 != 0) && (lVar4 != 0)) {
          piVar10 = (int *)(lVar4 + 0x29c0 + (longlong)*(short *)(lVar4 + 0x29bc) * 8);
          if (*piVar10 != *(int *)(lVar4 + 4)) {
            iVar9 = *(short *)(lVar4 + 0x29bc) + 1;
            sVar7 = (short)iVar9 + (short)(iVar9 / 6) * -6;
            *(short *)(lVar4 + 0x29bc) = sVar7;
            piVar10 = (int *)(lVar4 + 0x29c0 + (longlong)sVar7 * 8);
            *piVar10 = *(int *)(lVar4 + 4);
            *(undefined4 *)(lVar4 + 0x29c4 + (longlong)sVar7 * 8) = 0;
          }
          *(short *)((longlong)piVar10 + 6) = *(short *)((longlong)piVar10 + 6) + 1;
          *(int *)(lVar4 + 0x29b8) = *(int *)(lVar4 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar2);
      }
      *(undefined8 *)(param_1 + 0x2a8) = uVar6;
      *(int *)(param_1 + 0x2a4) = iVar12;
    }
  }
  *(longlong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)*(int *)(param_1 + 0x2a0) * 8) =
       lVar3 + 0x1218;
  *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + 1;
  plVar11 = *(longlong **)(param_1 + 0x48);
  plVar1 = plVar11 + *(int *)(param_1 + 0x40);
  if (((longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar3 = *plVar11;
      plVar11 = plVar11 + 1;
      *(undefined2 *)(lVar3 + 0x5c) = *(undefined2 *)(param_1 + 0x2d4);
    } while (plVar11 != plVar1);
  }
  return;
}



/* ===== 1803e8680 FUN_1803e8680 ===== */

void FUN_1803e8680(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  lVar7 = DAT_180ca0a50;
  *(undefined4 *)(DAT_180ca0a50 + 0x1204) = param_2;
  *(longlong *)(lVar7 + 0x11f0) = param_1;
  FUN_1803e8770(param_3);
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(lVar7 + 0x1228) = lVar2;
    *(longlong *)(lVar7 + 0x1230) = param_1;
    if (((longlong)*(int *)(lVar2 + 0x2a0) & 0x1fffffffffffffffU) != 0) {
      puVar6 = *(undefined8 **)(lVar2 + 0x2a8);
      puVar1 = puVar6 + *(int *)(lVar2 + 0x2a0);
      do {
        puVar3 = (undefined8 *)*puVar6;
        if (puVar3[2] == lVar2) {
          *puVar3 = *(undefined8 *)(lVar2 + 0x5c);
          puVar3[1] = lVar2 + 0x88;
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar1);
    }
    if (*(longlong *)(lVar7 + 0x14f8) != 0) {
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x14f8) + 0x2c8);
      lVar4 = *(longlong *)(lVar2 + 0x30);
      lVar2 = *(longlong *)(lVar2 + 0x28);
      if ((*(longlong *)(lVar7 + 0x78) != lVar4) || (*(longlong *)(lVar7 + 0x70) != lVar2)) {
        *(longlong *)(lVar7 + 0x70) = lVar2;
        *(longlong *)(lVar7 + 0x78) = lVar4;
        lVar5 = *(longlong *)(lVar7 + 0xb8);
        lVar7 = (longlong)*(int *)(lVar7 + 0xb0) + -1;
        *(longlong *)(lVar5 + lVar7 * 0x10) = lVar2;
        *(longlong *)(lVar5 + 8 + lVar7 * 0x10) = lVar4;
        FUN_1803fc0a0();
      }
    }
  }
  return;
}



/* ===== 1803e8770 FUN_1803e8770 ===== */

void FUN_1803e8770(void)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined1 in_XMM0 [16];
  float fVar7;
  float fVar8;
  
  lVar3 = DAT_180ca0a50;
  fVar8 = 0.0;
  if (in_XMM0._0_4_ <= 0.0) {
    auVar2._12_4_ = 0;
    auVar2._0_12_ = in_XMM0._4_12_;
    in_XMM0 = auVar2 << 0x20;
  }
  pfVar1 = (float *)(DAT_180ca0a50 + 0x1204);
  lVar4 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  *(float *)(DAT_180ca0a50 + 0xc90) = *pfVar1;
  fVar7 = in_XMM0._0_4_;
  if (fVar7 == 0.0) {
    fVar7 = *pfVar1 * *(float *)(lVar3 + 0xc94) * *(float *)(lVar3 + 0xc98);
    if (lVar4 != 0) {
      fVar7 = fVar7 * *(float *)(lVar4 + 0x2b8);
    }
    lVar5 = *(longlong *)(lVar3 + 0x11f0);
    fVar7 = fVar7 * *(float *)(lVar3 + 0xbf0);
    if (lVar5 != 0) {
      fVar7 = fVar7 * *(float *)(lVar5 + 0x48);
    }
  }
  else {
    lVar5 = *(longlong *)(lVar3 + 0x11f0);
  }
  fVar6 = (float)(int)(fVar7 + DAT_1808ac1f4);
  fVar7 = DAT_1808ac34c;
  if ((DAT_1808ac34c <= fVar6) && (fVar7 = DAT_1808acc00, fVar6 <= DAT_1808acc00)) {
    fVar7 = fVar6;
  }
  if ((lVar5 != 0) && ((*(byte *)(lVar3 + 0x2c) & 0x10) != 0)) {
    *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(lVar3 + 0x120c);
  }
  *(float *)(lVar3 + 0x1200) = fVar7;
  *(float *)(lVar3 + 0x1238) = fVar7;
  if (((lVar4 == 0) || (*(char *)(lVar4 + 0xd1) == '\0')) ||
     ((lVar5 = *(longlong *)(lVar3 + 0x2360), lVar5 != 0 &&
      ((*(int *)(lVar5 + 0x74) == -1 ||
       (*(char *)((longlong)*(int *)(lVar5 + 0x74) * 0x78 + 0x70 + *(longlong *)(lVar5 + 0x18)) !=
        '\0')))))) {
    lVar5 = *(longlong *)(lVar3 + 0x11f0);
    if ((lVar5 == 0) || (lVar4 == 0)) {
      *(undefined8 *)(lVar3 + 0x11f8) = 0;
    }
    else {
      lVar4 = FUN_180409a40(lVar5,lVar4,DAT_1808acda0);
      lVar5 = *(longlong *)(lVar3 + 0x11f0);
      *(longlong *)(lVar3 + 0x11f8) = lVar4;
      if (lVar4 != 0) {
        fVar8 = *(float *)(lVar3 + 0x1200) / *(float *)(lVar4 + 0x14);
      }
    }
    *(float *)(lVar3 + 0x1208) = fVar8;
    *(float *)(lVar3 + 0x123c) = fVar8;
    if (lVar5 != 0) {
      lVar4 = *(longlong *)(lVar5 + 8);
      *(longlong *)(lVar3 + 0x1450) = lVar4 + 0x2e0;
      *(longlong *)(lVar3 + 0x1458) = lVar4 + 0x2e8;
    }
  }
  return;
}



/* ===== 1803e8900 FUN_1803e8900 ===== */

ulonglong FUN_1803e8900(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1803d7830(param_2,0,
                        *(undefined4 *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4));
  if (*(int *)(*param_1 + 0x155c) == (int)uVar1) {
    FUN_1803f5630(uVar1 & 0xffffffff,0xb,param_2);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



/* ===== 1803e8960 FUN_1803e8960 ===== */

uint FUN_1803e8960(longlong *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int local_res10;
  byte local_res14 [20];
  
  local_res10 = param_2;
  pbVar3 = (byte *)&local_res10;
  uVar2 = ~*(uint *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4);
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    uVar2 = uVar2 >> 8 ^
            *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar2 & 0xff) ^ (ulonglong)bVar1) * 4);
  } while (pbVar3 < local_res14);
  uVar2 = ~uVar2;
  if (*(uint *)(*param_1 + 0x155c) == uVar2) {
    FUN_1803f5630(uVar2,4,(longlong)param_2);
  }
  return uVar2;
}



/* ===== 1803e89e0 FUN_1803e89e0 ===== */

void FUN_1803e89e0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  uVar2 = FUN_1803e8900(lVar1,param_1);
  iVar3 = *(int *)(lVar1 + 0x10c);
  if (*(int *)(lVar1 + 0x108) == iVar3) {
    iVar4 = *(int *)(lVar1 + 0x108) + 1;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_18007e1d0(lVar1 + 0x108,iVar4);
  }
  *(undefined4 *)(*(longlong *)(lVar1 + 0x110) + (longlong)*(int *)(lVar1 + 0x108) * 4) = uVar2;
  *(int *)(lVar1 + 0x108) = *(int *)(lVar1 + 0x108) + 1;
  return;
}



/* ===== 1803e8a70 FUN_1803e8a70 ===== */

void FUN_1803e8a70(undefined4 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  uVar2 = FUN_1803e8960(lVar1,param_1);
  iVar3 = *(int *)(lVar1 + 0x10c);
  if (*(int *)(lVar1 + 0x108) == iVar3) {
    iVar4 = *(int *)(lVar1 + 0x108) + 1;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_18007e1d0(lVar1 + 0x108,iVar4);
  }
  *(undefined4 *)(*(longlong *)(lVar1 + 0x110) + (longlong)*(int *)(lVar1 + 0x108) * 4) = uVar2;
  *(int *)(lVar1 + 0x108) = *(int *)(lVar1 + 0x108) + 1;
  return;
}



/* ===== 1803e8b00 FUN_1803e8b00 ===== */

void FUN_1803e8b00(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    return;
  }
  *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  return;
}



/* ===== 1803e8b30 FUN_1803e8b30 ===== */

uint FUN_1803e8b30(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0xffff0fff;
  if (7 < uVar2 - 0x20f) {
    return param_1;
  }
  if ((uVar2 - 0x20f & 0xfffffffb) == 0) {
    return param_1 | 0x1000;
  }
  if ((uVar2 - 0x210 & 0xfffffffb) == 0) {
    return param_1 | 0x2000;
  }
  if ((uVar2 - 0x211 & 0xfffffffb) == 0) {
    return param_1 | 0x4000;
  }
  uVar1 = 0x8000;
  if ((uVar2 - 0x212 & 0xfffffffb) != 0) {
    uVar1 = 0;
  }
  return uVar1 | param_1;
}



/* ===== 1803e8bb0 FUN_1803e8bb0 ===== */

char * FUN_1803e8bb0(uint param_1)

{
  if (param_1 == 0) {
    return "None";
  }
  if ((param_1 & 0xf000) != 0) {
    if (param_1 == 0x1000) {
      param_1 = 0x297;
    }
    else if (param_1 == 0x2000) {
      param_1 = 0x298;
    }
    else if (param_1 == 0x4000) {
      param_1 = 0x299;
    }
    else if (param_1 == 0x8000) {
      param_1 = 0x29a;
    }
  }
  if (param_1 - 0x200 < 0x9b) {
    return *(char **)(&UNK_1806c19d0 + (longlong)(int)param_1 * 8);
  }
  return "Unknown";
}



/* ===== 1803e8c30 FUN_1803e8c30 ===== */

char * FUN_1803e8c30(uint param_1)

{
  char *_Str;
  longlong lVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  
  lVar1 = DAT_180ca0a50;
  uVar4 = param_1 & 0xffff0fff;
  if (uVar4 - 0x20f < 8) {
    if ((uVar4 - 0x20f & 0xfffffffb) == 0) {
      uVar2 = 0xffffefff;
    }
    else if ((uVar4 - 0x210 & 0xfffffffb) == 0) {
      uVar2 = 0xffffdfff;
    }
    else if ((uVar4 - 0x211 & 0xfffffffb) == 0) {
      uVar2 = 0xffffbfff;
    }
    else {
      uVar2 = 0xffff7fff;
      if ((uVar4 - 0x212 & 0xfffffffb) != 0) {
        uVar2 = 0xffffffff;
      }
    }
    param_1 = param_1 & uVar2;
  }
  if ((uVar4 != 0) || (param_1 == 0)) {
    FUN_1803e8bb0(uVar4);
  }
  _Str = (char *)(lVar1 + 0x2b08);
  FUN_1803d7610(_Str,0x40,"%s%s%s%s%s");
  if (((uVar4 == 0) && (param_1 != 0)) && (sVar3 = strlen(_Str), sVar3 != 0)) {
    *(undefined1 *)(sVar3 + 0x2b07 + lVar1) = 0;
  }
  return _Str;
}



/* ===== 1803e8d70 FUN_1803e8d70 ===== */

int FUN_1803e8d70(undefined8 param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  float fVar5;
  
  pcVar3 = (char *)FUN_1803d6470();
  if (*pcVar3 != '\0') {
    fVar1 = *(float *)(pcVar3 + 4);
    if (fVar1 == 0.0) {
      return 1;
    }
    fVar5 = fVar1 - *(float *)(DAT_180ca0a50 + 0x40);
    if (fVar5 < fVar1) {
      if (0.0 < param_3) {
        iVar2 = -1;
        if (param_2 <= fVar5) {
          iVar4 = (int)((fVar5 - param_2) / param_3);
        }
        else {
          iVar4 = -1;
        }
        if (param_2 <= fVar1) {
          iVar2 = (int)((fVar1 - param_2) / param_3);
        }
        return iVar2 - iVar4;
      }
      if ((fVar5 < param_2) && (param_2 <= fVar1)) {
        return 1;
      }
    }
  }
  return 0;
}



/* ===== 1803e8e10 FUN_1803e8e10 ===== */

void FUN_1803e8e10(longlong param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  short sVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar11 = DAT_180ca0a50;
  piVar2 = (int *)(param_1 + 0x148);
  iVar15 = *(int *)(param_1 + 0x14c);
  if (iVar15 < 0) {
    iVar15 = iVar15 + iVar15 / 2;
    iVar13 = 0;
    if (0 < iVar15) {
      iVar13 = iVar15;
    }
    FUN_1803f7030(piVar2,iVar13);
  }
  *piVar2 = 0;
  iVar15 = 0;
  lVar17 = 0x200;
  do {
    sVar5 = *(short *)(param_1 + -0x400 + lVar17 * 2);
    while (sVar5 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x140);
      lVar16 = (longlong)(int)sVar5;
      iVar13 = *(int *)(lVar7 + 0xc + lVar16 * 0x10);
      *(undefined2 *)(lVar7 + 4 + lVar16 * 0x10) = *(undefined2 *)(lVar7 + 6 + lVar16 * 0x10);
      *(int *)(lVar7 + 8 + lVar16 * 0x10) = iVar13;
      *(undefined4 *)(lVar7 + 0xc + lVar16 * 0x10) = 0xffffffff;
      *(undefined2 *)(lVar7 + 6 + lVar16 * 0x10) = 0;
      if (iVar13 != -1) {
        iVar13 = *(int *)(param_1 + 0x14c);
        if (*piVar2 == iVar13) {
          iVar14 = *piVar2 + 1;
          if (iVar13 == 0) {
            iVar13 = 8;
          }
          else {
            iVar13 = iVar13 / 2 + iVar13;
          }
          if (iVar14 < iVar13) {
            iVar14 = iVar13;
          }
          FUN_1803f7030(piVar2,iVar14);
        }
        puVar3 = (undefined4 *)(lVar7 + lVar16 * 0x10);
        uVar6 = puVar3[1];
        uVar9 = puVar3[2];
        uVar10 = puVar3[3];
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x150) + (longlong)*piVar2 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar6;
        puVar4[2] = uVar9;
        puVar4[3] = uVar10;
        *piVar2 = *piVar2 + 1;
        if (((uint)*(ushort *)(lVar7 + 2 + lVar16 * 0x10) == *(uint *)(lVar11 + 0x130)) &&
           (*(int *)(lVar11 + -0x204 + lVar17 * 0xc) == -1)) {
          *(undefined4 *)(lVar11 + -0x204 + lVar17 * 0xc) =
               *(undefined4 *)(lVar7 + 8 + lVar16 * 0x10);
        }
      }
      sVar5 = *(short *)(lVar7 + lVar16 * 0x10);
    }
    uVar12 = 0xffff;
    if (iVar15 < *piVar2) {
      uVar12 = (short)iVar15;
    }
    *(undefined2 *)(param_1 + -0x400 + lVar17 * 2) = uVar12;
    iVar13 = *piVar2;
    if (iVar15 < iVar13) {
      iVar14 = iVar15;
      do {
        iVar1 = iVar14 + 1;
        iVar15 = -1;
        if (iVar1 < iVar13) {
          iVar15 = iVar1;
        }
        *(short *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar14 * 0x10) = (short)iVar15;
        iVar15 = *piVar2;
        iVar13 = iVar15;
        iVar14 = iVar1;
      } while (iVar1 < iVar15);
    }
    else {
      iVar15 = iVar13;
    }
    lVar17 = lVar17 + 1;
  } while (lVar17 != 0x29b);
  *piVar2 = *(int *)(param_1 + 0x138);
  uVar6 = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x13c) = uVar6;
  uVar8 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = uVar8;
  *(int *)(param_1 + 0x138) = iVar15;
  return;
}



/* ===== 1803e8ff0 FUN_1803e8ff0 ===== */

short * FUN_1803e8ff0(uint param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  
  lVar4 = DAT_180ca0a50;
  uVar9 = param_1 & 0xf000;
  uVar6 = param_1 & 0xffff0fff;
  if ((param_1 & 0xffff0fff) == 0) {
    if (uVar9 == 0x1000) {
      uVar6 = 0x297;
    }
    else if (uVar9 == 0x2000) {
      uVar6 = 0x298;
    }
    else if (uVar9 == 0x4000) {
      uVar6 = 0x299;
    }
    else {
      uVar6 = uVar9;
      if (uVar9 == 0x8000) {
        uVar6 = 0x29a;
      }
    }
  }
  lVar2 = DAT_180ca0a50 + (longlong)(int)uVar6 * 2;
  sVar5 = *(short *)(lVar2 + 0x1940);
  if (sVar5 != -1) {
    do {
      psVar8 = (short *)((longlong)sVar5 * 0x10 + *(longlong *)(DAT_180ca0a50 + 0x1e80));
      if ((ushort)psVar8[1] == uVar9) {
        return psVar8;
      }
      sVar5 = *psVar8;
    } while (sVar5 != -1);
  }
  iVar7 = *(int *)(DAT_180ca0a50 + 0x1e7c);
  piVar1 = (int *)(DAT_180ca0a50 + 0x1e78);
  sVar5 = *(short *)piVar1;
  if (*piVar1 == iVar7) {
    iVar10 = *piVar1 + 1;
    if (iVar7 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar7 / 2 + iVar7;
    }
    if (iVar10 < iVar7) {
      iVar10 = iVar7;
    }
    FUN_1803f7030(piVar1,iVar10);
  }
  iVar7 = *piVar1;
  lVar3 = *(longlong *)(lVar4 + 0x1e80);
  *(undefined8 *)(lVar3 + (longlong)iVar7 * 0x10) = 0xffff;
  *(undefined8 *)(lVar3 + 8 + (longlong)iVar7 * 0x10) = 0xffffffffffffffff;
  *piVar1 = *piVar1 + 1;
  psVar8 = (short *)(*(longlong *)(lVar4 + 0x1e80) + (longlong)sVar5 * 0x10);
  psVar8[1] = (short)uVar9;
  *psVar8 = *(short *)(lVar2 + 0x1940);
  *(short *)(lVar2 + 0x1940) = sVar5;
  return psVar8;
}



/* ===== 1803e9150 FUN_1803e9150 ===== */

undefined1 FUN_1803e9150(undefined8 param_1,uint param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  lVar3 = DAT_180ca0a50;
  uVar10 = param_2 | 0xd000;
  if ((param_2 & 0x3c00) != 0) {
    uVar10 = param_2;
  }
  uVar5 = FUN_1803e8b30();
  if (*(uint *)(lVar3 + 0x1ea0) == uVar5) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if (((uVar10 >> 0x10 & 1) != 0) && (*(longlong *)(lVar3 + 0x2068) == 0)) {
    return false;
  }
  if ((uVar10 >> 0xd & 1) != 0) {
    if ((*(uint *)(lVar3 + 0x28f4) & 0x200) != 0) {
      uVar7 = FUN_1803e8c30(uVar5);
      FUN_1803f5060("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> always, no register\n",
                    uVar7,uVar10,param_3);
    }
    return true;
  }
  if ((*(int *)(lVar3 + 0x1578) != 0) && (*(int *)(lVar3 + 0x1578) != param_3)) {
    if ((uVar10 >> 10 & 1) != 0) {
      return false;
    }
    if ((((*(char *)(lVar3 + 0xe2) != '\0') &&
         (((uVar5 & 0x1000) == 0 || ((uVar5 >> 0xe & 1) != 0)))) &&
        ((*(char *)(lVar3 + 0x78) == '\0' || ((uVar5 & 0x1000) == 0)))) &&
       (((uVar5 & 0xffff0fff) != 0 &&
        ((*(uint *)(lVar3 + 0x15e8 + ((longlong)(int)(uVar5 & 0xffff0fff) + -0x200 >> 5) * 4) >>
          (uVar5 & 0x1f) & 1) != 0)))) {
      if ((*(uint *)(lVar3 + 0x28f4) & 0x200) == 0) {
        return false;
      }
      uVar7 = FUN_1803e8c30(uVar5);
      FUN_1803f5060("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> filtered as potential char input\n"
                    ,uVar7,uVar10,param_3);
      return false;
    }
    if (((uVar10 >> 0xf & 1) == 0) && (*(char *)(lVar3 + 0x1e9c) != '\0')) {
      uVar6 = uVar5 & 0xffff0fff;
      if ((uVar5 & 0xffff0fff) == 0) {
        uVar6 = uVar5 & 0xf000;
        if (uVar6 == 0x1000) {
          uVar6 = 0x297;
        }
        else if (uVar6 == 0x2000) {
          uVar6 = 0x298;
        }
        else if (uVar6 == 0x4000) {
          uVar6 = 0x299;
        }
        else if (uVar6 == 0x8000) {
          uVar6 = 0x29a;
        }
      }
      if (uVar6 - 0x200 < 0x78) {
        return false;
      }
    }
  }
  if ((uVar10 >> 0x11 & 1) == 0) {
    iVar1 = *(int *)(lVar3 + 0x1ea4);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x14f8) + 0x3c0) + 0x10);
  }
  if ((uVar10 >> 0xb & 1) == 0) {
    if ((uVar10 >> 10 & 1) == 0) {
      if ((uVar10 >> 0xc & 1) != 0) {
        if ((uVar10 >> 0xf & 1) == 0) {
          if ((param_3 == 0) || (*(int *)(lVar3 + 0x1578) != param_3)) {
            iVar9 = 1;
            if ((uVar10 >> 0xe & 1) != 0) {
              iVar9 = 200;
            }
          }
          else {
            iVar9 = 300;
          }
        }
        else {
          iVar9 = 400;
        }
        goto LAB_1803e93d0;
      }
    }
    else if ((param_3 != 0) && (*(int *)(lVar3 + 0x1578) == param_3)) {
      iVar9 = 300;
      goto LAB_1803e93d0;
    }
    iVar9 = 0;
  }
  else if ((param_3 == 0) || (*(int *)(lVar3 + 0x1578) != param_3)) {
    iVar9 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(lVar3 + 0x2090))) {
      uVar6 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar3 + 0x2098) + (ulonglong)uVar6 * 8) == iVar1) {
          if ((uVar10 >> 0xf & 1) == 0) {
            iVar9 = 199 - uVar6;
          }
          else {
            iVar9 = 599 - uVar6;
          }
          break;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *(int *)(lVar3 + 0x2090));
    }
  }
  else {
    iVar9 = 300;
  }
LAB_1803e93d0:
  if ((*(uint *)(lVar3 + 0x28f4) & 0x200) != 0) {
    uVar7 = FUN_1803e8c30(uVar5);
    FUN_1803f5060("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> score %d\n",uVar7,uVar10,
                  param_3,iVar9);
  }
  if (iVar9 == 0) {
    return false;
  }
  lVar8 = FUN_1803e8ff0(uVar5);
  if ((int)(uint)*(ushort *)(lVar8 + 6) < iVar9) {
    *(int *)(lVar8 + 0xc) = param_3;
    *(short *)(lVar8 + 6) = (short)iVar9;
  }
  bVar11 = false;
  if (*(int *)(lVar8 + 8) == param_3) {
    if ((*(uint *)(lVar3 + 0x28f4) & 0x200) != 0) {
      FUN_1803f5060("--> granting current route\n");
    }
    bVar11 = *(int *)(lVar8 + 8) == param_3;
  }
  return bVar11;
}



/* ===== 1803e9470 FUN_1803e9470 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1803e9470(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  
  param_3 = param_3 & 0xffffffff;
  param_2 = param_2 & 0xffffffff;
  param_1 = param_1 & 0xffffffff;
  pcVar5 = (char *)FUN_1803d6470();
  if (*pcVar5 == '\0') {
    return false;
  }
  fVar11 = *(float *)(pcVar5 + 4);
  if (fVar11 < 0.0) {
    return false;
  }
  uVar6 = (ulonglong)((uint)param_2 | 1);
  if ((param_2 & 0xfe) == 0) {
    uVar6 = param_2 & 0xffffffff;
  }
  if (fVar11 == 0.0) goto LAB_1803e95be;
  if ((uVar6 & 1) == 0) {
    return false;
  }
  uVar3 = (uint)uVar6 & 0xe;
  if (uVar3 == 2) {
LAB_1803e9524:
    fVar8 = *(float *)(DAT_180ca0a50 + 0xa4);
    fVar10 = *(float *)(DAT_180ca0a50 + 0xa8);
  }
  else if (uVar3 == 4) {
    fVar8 = *(float *)(DAT_180ca0a50 + 0xa4) * _DAT_1808ac274;
    fVar10 = *(float *)(DAT_180ca0a50 + 0xa8) * DAT_1808ac294;
  }
  else {
    if (uVar3 != 8) goto LAB_1803e9524;
    fVar8 = *(float *)(DAT_180ca0a50 + 0xa4) * _DAT_1808ac274;
    fVar10 = *(float *)(DAT_180ca0a50 + 0xa8) * DAT_1808ac154;
  }
  if ((fVar11 <= fVar8) ||
     (lVar7 = DAT_180ca0a50, iVar4 = FUN_1803e8d70(param_1 & 0xffffffff,fVar8,fVar10), iVar4 < 1)) {
    return false;
  }
  if ((uVar6 & 0xf0) != 0) {
    dVar9 = (*(double *)(lVar7 + 0x10) - (double)fVar11) + _DAT_1808ac1c8;
    if ((uVar6 & 0x20) == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(double *)(lVar7 + 0x15d0) <= dVar9;
    }
    if (((uVar6 & 0x40) != 0) && (dVar9 < *(double *)(lVar7 + 0x15d8))) {
      bVar1 = false;
    }
    if (((char)uVar6 < '\0') && (dVar9 < *(double *)(lVar7 + 0x15e0))) {
      return false;
    }
    if (!bVar1) {
      return false;
    }
  }
LAB_1803e95be:
  cVar2 = FUN_1803eb1c0(param_1 & 0xffffffff,param_3 & 0xffffffff);
  return cVar2 != '\0';
}



/* ===== 1803e95e0 FUN_1803e95e0 ===== */

ulonglong FUN_1803e95e0(int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar1 = (ulonglong)param_1;
  if (*(char *)(uVar1 + 0x118 + DAT_180ca0a50) == '\0') {
LAB_1803e968a:
    return uVar1 & 0xffffffffffffff00;
  }
  uVar2 = param_1 + 0x290;
  uVar1 = (ulonglong)(param_1 + 0x90U);
  if ((((param_1 + 0x90U < 0x9b) || (param_1 == 0xd70)) || (param_1 == 0x1d70)) ||
     ((param_1 == 0x3d70 || (param_1 == 0x7d70)))) {
    if ((uVar2 & 0xf000) != 0) {
      if (param_1 == 0xd70) {
        uVar2 = 0x297;
      }
      else if (param_1 == 0x1d70) {
        uVar2 = 0x298;
      }
      else if (param_1 == 0x3d70) {
        uVar2 = 0x299;
      }
      else if (param_1 == 0x7d70) {
        uVar2 = 0x29a;
      }
    }
    uVar1 = ((longlong)(int)uVar2 + -0x200) * 3;
    if (*(char *)(DAT_180ca0a50 + 0x1604 + ((longlong)(int)uVar2 + -0x200) * 0xc) != '\0')
    goto LAB_1803e968a;
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}



/* ===== 1803e9690 FUN_1803e9690 ===== */

bool FUN_1803e9690(int param_1,ulonglong param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  float fVar6;
  
  if ((*(char *)((longlong)param_1 + 0x118 + DAT_180ca0a50) != '\0') &&
     (fVar1 = *(float *)(DAT_180ca0a50 + 0xb9c + (longlong)param_1 * 4), 0.0 <= fVar1)) {
    if (fVar1 == 0.0) goto LAB_1803e9724;
    if ((((param_2 & 1) != 0) && (fVar2 = *(float *)(DAT_180ca0a50 + 0xa4), fVar2 < fVar1)) &&
       (fVar6 = fVar1 - *(float *)(DAT_180ca0a50 + 0x40), fVar6 < fVar1)) {
      fVar3 = *(float *)(DAT_180ca0a50 + 0xa8);
      if (0.0 < fVar3) {
        if (fVar2 <= fVar6) {
          iVar5 = (int)((fVar6 - fVar2) / fVar3);
        }
        else {
          iVar5 = -1;
        }
        if (0 < (int)((fVar1 - fVar2) / fVar3) - iVar5) goto LAB_1803e9724;
      }
      else if (fVar6 < fVar2) {
LAB_1803e9724:
        cVar4 = FUN_1803eb1c0(param_1 + 0x290,param_3);
        return cVar4 != '\0';
      }
    }
  }
  return false;
}



/* ===== 1803e9740 FUN_1803e9740 ===== */

undefined8 FUN_1803e9740(float *param_1,float *param_2,char param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar5 = *param_2;
  fVar4 = param_2[1];
  if (param_3 != '\0') {
    lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    if (fVar2 <= *(float *)(lVar1 + 0x268)) {
      fVar2 = *(float *)(lVar1 + 0x268);
    }
    if (fVar3 <= *(float *)(lVar1 + 0x26c)) {
      fVar3 = *(float *)(lVar1 + 0x26c);
    }
    if (*(float *)(lVar1 + 0x270) <= fVar5) {
      fVar5 = *(float *)(lVar1 + 0x270);
    }
    if (*(float *)(lVar1 + 0x274) <= fVar4) {
      fVar4 = *(float *)(lVar1 + 0x274);
    }
  }
  if (fVar2 - *(float *)(DAT_180ca0a50 + 0xd04) <= *(float *)(DAT_180ca0a50 + 0x110)) {
    if (((fVar3 - *(float *)(DAT_180ca0a50 + 0xd08) <= *(float *)(DAT_180ca0a50 + 0x114)) &&
        (*(float *)(DAT_180ca0a50 + 0x110) < *(float *)(DAT_180ca0a50 + 0xd04) + fVar5)) &&
       (*(float *)(DAT_180ca0a50 + 0x114) < *(float *)(DAT_180ca0a50 + 0xd08) + fVar4)) {
      return 1;
    }
  }
  return 0;
}



/* ===== 1803e97f0 FUN_1803e97f0 ===== */

void FUN_1803e97f0(void)

{
  float fVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint uVar4;
  char *pcVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  char cVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_03;
  float fVar13;
  float fVar14;
  
  lVar2 = DAT_180ca0a50;
  if ((*(byte *)(DAT_180ca0a50 + 0x28) & 0x40) != 0) {
    FUN_1803d6ec0(DAT_180ca0a50 + 0x28);
  }
  cVar11 = *(char *)(lVar2 + 0x118);
  fVar14 = 0.0;
  if (cVar11 == '\0') {
    uVar12 = 0;
  }
  else {
    uVar12 = DAT_1808ac34c;
  }
  lVar9 = DAT_180ca0a50;
  pcVar5 = (char *)FUN_1803d6470(0x290);
  *(undefined4 *)(pcVar5 + 0xc) = uVar12;
  *pcVar5 = cVar11;
  cVar11 = *(char *)(lVar2 + 0x119);
  if (cVar11 == '\0') {
    uVar12 = 0;
  }
  else {
    uVar12 = extraout_XMM0_Da;
  }
  pcVar5 = (char *)FUN_1803d6470(0x291);
  *pcVar5 = cVar11;
  *(undefined4 *)(pcVar5 + 0xc) = uVar12;
  cVar11 = *(char *)(lVar2 + 0x11a);
  if (cVar11 == '\0') {
    uVar12 = 0;
  }
  else {
    uVar12 = extraout_XMM0_Da_00;
  }
  pcVar5 = (char *)FUN_1803d6470(0x292);
  *pcVar5 = cVar11;
  *(undefined4 *)(pcVar5 + 0xc) = uVar12;
  cVar11 = *(char *)(lVar2 + 0x11b);
  if (cVar11 == '\0') {
    uVar12 = 0;
  }
  else {
    uVar12 = extraout_XMM0_Da_01;
  }
  pcVar5 = (char *)FUN_1803d6470(0x293);
  *pcVar5 = cVar11;
  *(undefined4 *)(pcVar5 + 0xc) = uVar12;
  cVar11 = *(char *)(lVar2 + 0x11c);
  uVar12 = extraout_XMM0_Da_02;
  if (cVar11 == '\0') {
    uVar12 = 0;
  }
  pcVar5 = (char *)FUN_1803d6470(uVar12);
  *pcVar5 = cVar11;
  *(undefined4 *)(pcVar5 + 0xc) = extraout_XMM0_Da_03;
  fVar1 = *(float *)(lVar2 + 0x124);
  *(float *)(lVar9 + 0xa90) = fVar1;
  *(bool *)(lVar9 + 0xa84) = fVar1 != fVar14;
  fVar1 = *(float *)(lVar2 + 0x120);
  *(bool *)(lVar9 + 0xa94) = fVar1 != fVar14;
  *(float *)(lVar9 + 0xaa0) = fVar1;
  uVar8 = *(uint *)(lVar2 + 0x130);
  uVar7 = -(uint)(*(char *)(lVar9 + 0xaa4) != '\0') & 0x1000;
  if ((*(char *)(lVar9 + 0xab4) != '\0') && (uVar7 = 0x3000, *(char *)(lVar9 + 0xaa4) == '\0')) {
    uVar7 = 0x2000;
  }
  uVar4 = uVar7 | 0x4000;
  if (*(char *)(lVar9 + 0xac4) == '\0') {
    uVar4 = uVar7;
  }
  uVar7 = uVar4 | 0x8000;
  if (*(char *)(lVar9 + 0xad4) == '\0') {
    uVar7 = uVar4;
  }
  *(uint *)(lVar2 + 0x130) = uVar7;
  *(byte *)(lVar2 + 300) = (byte)(uVar7 >> 0xc) & 1;
  *(byte *)(lVar2 + 0x12d) = (byte)(uVar7 >> 0xd) & 1;
  *(byte *)(lVar2 + 0x12e) = (byte)(uVar7 >> 0xe) & 1;
  *(char *)(lVar2 + 0x12f) = (char)(uVar7 >> 0xf);
  if (uVar8 != uVar7) {
    *(undefined8 *)(lVar2 + 0x15d0) = *(undefined8 *)(lVar2 + 0x10);
    if (uVar8 == 0) {
      *(undefined8 *)(lVar2 + 0x15d8) = *(undefined8 *)(lVar2 + 0x10);
    }
  }
  if ((*(byte *)(lVar2 + 0x2c) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x8b4) = 0;
    *(undefined4 *)(lVar2 + 0x8c0) = 0;
    *(undefined1 *)(lVar2 + 0x8c4) = 0;
    *(undefined4 *)(lVar2 + 0x8d0) = 0;
    *(undefined1 *)(lVar2 + 0x8d4) = 0;
    *(undefined4 *)(lVar2 + 0x8e0) = 0;
    *(undefined1 *)(lVar2 + 0x8e4) = 0;
    *(undefined4 *)(lVar2 + 0x8f0) = 0;
    *(undefined1 *)(lVar2 + 0x8f4) = 0;
    *(undefined4 *)(lVar2 + 0x900) = 0;
    *(undefined1 *)(lVar2 + 0x904) = 0;
    *(undefined4 *)(lVar2 + 0x910) = 0;
    *(undefined1 *)(lVar2 + 0x914) = 0;
    *(undefined4 *)(lVar2 + 0x920) = 0;
    *(undefined1 *)(lVar2 + 0x924) = 0;
    *(undefined4 *)(lVar2 + 0x930) = 0;
    *(undefined1 *)(lVar2 + 0x934) = 0;
    *(undefined4 *)(lVar2 + 0x940) = 0;
    *(undefined1 *)(lVar2 + 0x944) = 0;
    *(undefined4 *)(lVar2 + 0x950) = 0;
    *(undefined1 *)(lVar2 + 0x954) = 0;
    *(undefined4 *)(lVar2 + 0x960) = 0;
    *(undefined1 *)(lVar2 + 0x964) = 0;
    *(undefined4 *)(lVar2 + 0x970) = 0;
    *(undefined1 *)(lVar2 + 0x974) = 0;
    *(undefined4 *)(lVar2 + 0x980) = 0;
    *(undefined1 *)(lVar2 + 0x984) = 0;
    *(undefined4 *)(lVar2 + 0x990) = 0;
    *(undefined1 *)(lVar2 + 0x994) = 0;
    *(undefined4 *)(lVar2 + 0x9a0) = 0;
    *(undefined1 *)(lVar2 + 0x9a4) = 0;
    *(undefined4 *)(lVar2 + 0x9b0) = 0;
    *(undefined1 *)(lVar2 + 0x9b4) = 0;
    *(undefined4 *)(lVar2 + 0x9c0) = 0;
    *(undefined1 *)(lVar2 + 0x9c4) = 0;
    *(undefined4 *)(lVar2 + 0x9d0) = 0;
    *(undefined1 *)(lVar2 + 0x9d4) = 0;
    *(undefined4 *)(lVar2 + 0x9e0) = 0;
    *(undefined1 *)(lVar2 + 0x9e4) = 0;
    *(undefined4 *)(lVar2 + 0x9f0) = 0;
    *(undefined1 *)(lVar2 + 0x9f4) = 0;
    *(undefined4 *)(lVar2 + 0xa00) = 0;
    *(undefined1 *)(lVar2 + 0xa04) = 0;
    *(undefined4 *)(lVar2 + 0xa10) = 0;
    *(undefined1 *)(lVar2 + 0xa14) = 0;
    *(undefined4 *)(lVar2 + 0xa20) = 0;
    *(undefined1 *)(lVar2 + 0xa24) = 0;
    *(undefined4 *)(lVar2 + 0xa30) = 0;
  }
  fVar1 = DAT_1808acda0;
  uVar8 = 0x200;
  do {
    uVar6 = (ulonglong)uVar8;
    fVar13 = *(float *)(lVar2 + -0x1ec8 + uVar6 * 0x10);
    *(float *)(lVar2 + -0x1ec4 + uVar6 * 0x10) = fVar13;
    if (*(char *)(lVar2 + -0x1ecc + uVar6 * 0x10) == '\0') {
      fVar13 = fVar1;
    }
    else if (fVar14 <= fVar13) {
      fVar13 = fVar13 + *(float *)(lVar2 + 0x40);
    }
    else {
      fVar13 = 0.0;
    }
    *(float *)(lVar2 + -0x1ec8 + uVar6 * 0x10) = fVar13;
    if ((fVar13 == fVar14) && ((uVar8 < 0x278 || (uVar8 - 0x297 < 4)))) {
      *(undefined8 *)(lVar2 + 0x15e0) = *(undefined8 *)(lVar2 + 0x10);
    }
    uVar8 = uVar8 + 1;
    lVar9 = 0x200;
  } while ((int)uVar8 < 0x29b);
  do {
    *(undefined4 *)(lVar2 + -0x204 + lVar9 * 0xc) = *(undefined4 *)(lVar2 + -0x200 + lVar9 * 0xc);
    cVar11 = *(char *)(lVar2 + -0x1ecc + lVar9 * 0x10);
    if (cVar11 == '\0') {
      *(undefined4 *)(lVar2 + -0x200 + lVar9 * 0xc) = 0xffffffff;
      cVar11 = *(char *)(lVar2 + -0x1ecc + lVar9 * 0x10);
    }
    if ((*(char *)(lVar2 + -0x1fb + lVar9 * 0xc) == '\0') || (cVar11 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    lVar10 = lVar9 + 1;
    *(undefined1 *)(lVar2 + -0x1fb + lVar9 * 0xc) = uVar3;
    *(undefined1 *)(lVar2 + -0x1fc + lVar9 * 0xc) = uVar3;
    lVar9 = lVar10;
  } while (lVar10 != 0x29b);
  FUN_1803e8e10(lVar2 + 0x1d40);
  return;
}



/* ===== 1803e9c00 FUN_1803e9c00 ===== */

void FUN_1803e9c00(void)

{
  float *pfVar1;
  short *psVar2;
  bool bVar3;
  float fVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar5 = DAT_180ca0a50;
  fVar4 = DAT_1808ace9c;
  if ((*(char *)(DAT_180ca0a50 + 0x12d) == '\0') || (*(char *)(DAT_180ca0a50 + 0x78) != '\0')) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined1 *)(DAT_180ca0a50 + 0xb9a) = uVar6;
  fVar13 = *(float *)(lVar5 + 0x110);
  if ((fVar4 <= fVar13) && (fVar11 = *(float *)(lVar5 + 0x114), fVar4 <= fVar11)) {
    iVar9 = (int)fVar11;
    if ((fVar11 < 0.0) && ((float)iVar9 != fVar11)) {
      iVar9 = iVar9 + -1;
    }
    iVar7 = (int)fVar13;
    if ((fVar13 < 0.0) && ((float)iVar7 != fVar13)) {
      iVar7 = iVar7 + -1;
    }
    *(float *)(lVar5 + 0x2508) = (float)iVar7;
    *(float *)(lVar5 + 0x250c) = (float)iVar9;
    *(float *)(lVar5 + 0x110) = (float)iVar7;
    *(float *)(lVar5 + 0x114) = (float)iVar9;
  }
  if ((fVar4 <= *(float *)(lVar5 + 0x110)) && (fVar4 <= *(float *)(lVar5 + 0x114))) {
    pfVar1 = (float *)(lVar5 + 0xae8);
    pfVar8 = pfVar1;
    if (pfVar1 == (float *)0x0) {
      pfVar8 = (float *)(lVar5 + 0x110);
    }
    if ((fVar4 <= *pfVar8) && (fVar4 <= pfVar8[1])) {
      fVar11 = *(float *)(lVar5 + 0x110) - *pfVar1;
      fVar13 = *(float *)(lVar5 + 0x114) - *(float *)(lVar5 + 0xaec);
      goto LAB_1803e9d19;
    }
  }
  fVar11 = 0.0;
  fVar13 = 0.0;
LAB_1803e9d19:
  *(float *)(lVar5 + 0xfc) = fVar11;
  *(float *)(lVar5 + 0x100) = fVar13;
  if (*(int *)(lVar5 + 0x128) == 0) {
    fVar12 = DAT_1808ac540;
  }
  else {
    fVar12 = DAT_1808ac658;
  }
  if (fVar12 * fVar12 < fVar13 * fVar13 + fVar11 * fVar11) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = *(float *)(lVar5 + 0x2504) + *(float *)(lVar5 + 0x40);
  }
  *(float *)(lVar5 + 0x2504) = fVar12;
  if ((fVar11 != 0.0) || (fVar13 != 0.0)) {
    *(undefined1 *)(lVar5 + 0x2061) = 0;
  }
  fVar13 = DAT_1808acda0;
  lVar10 = 0;
  do {
    pfVar1 = (float *)(lVar5 + 0xb9c + lVar10 * 4);
    if ((*(char *)(lVar5 + 0x118 + lVar10) == '\0') || (0.0 < *pfVar1 || *pfVar1 == 0.0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    *(undefined1 *)(lVar5 + 0xb40 + lVar10) = uVar6;
    *(undefined2 *)(lVar5 + 0xb4a + lVar10 * 2) = 0;
    if ((*(char *)(lVar5 + 0x118 + lVar10) != '\0') || (*pfVar1 < 0.0)) {
      *(undefined1 *)(lVar5 + 0xb5e + lVar10) = 0;
    }
    else {
      *(undefined1 *)(lVar5 + 0xb5e + lVar10) = 1;
      *(undefined8 *)(lVar5 + 0xb68 + lVar10 * 8) = *(undefined8 *)(lVar5 + 0x10);
    }
    fVar11 = *(float *)(lVar5 + 0xb9c + lVar10 * 4);
    *(float *)(lVar5 + 0xbb0 + lVar10 * 4) = fVar11;
    if (*(char *)(lVar5 + 0x118 + lVar10) == '\0') {
      fVar11 = fVar13;
    }
    else if (0.0 <= fVar11) {
      fVar11 = fVar11 + *(float *)(lVar5 + 0x40);
    }
    else {
      fVar11 = 0.0;
    }
    *(float *)(lVar5 + 0xb9c + lVar10 * 4) = fVar11;
    if (*(char *)(lVar5 + 0xb40 + lVar10) == '\0') {
      if (*(char *)(lVar5 + 0x118 + lVar10) != '\0') {
        if ((*(float *)(lVar5 + 0x110) < fVar4) || (*(float *)(lVar5 + 0x114) < fVar4)) {
          fVar11 = 0.0;
        }
        else {
          fVar12 = *(float *)(lVar5 + 0x110) - *(float *)(lVar5 + 0xaf0 + lVar10 * 8);
          fVar11 = *(float *)(lVar5 + 0x114) - *(float *)(lVar5 + 0xaf4 + lVar10 * 8);
          fVar11 = fVar12 * fVar12 + fVar11 * fVar11;
        }
        fVar12 = *(float *)(lVar5 + 0xbc4 + lVar10 * 4);
        if (fVar12 <= fVar11) {
          fVar12 = fVar11;
        }
        *(float *)(lVar5 + 0xbc4 + lVar10 * 4) = fVar12;
      }
    }
    else {
      bVar3 = false;
      if ((float)(*(double *)(lVar5 + 0x10) - *(double *)(lVar5 + 0xb18 + lVar10 * 8)) <
          *(float *)(lVar5 + 0x94)) {
        if ((*(float *)(lVar5 + 0x110) < fVar4) || (*(float *)(lVar5 + 0x114) < fVar4)) {
          fVar12 = 0.0;
          fVar11 = 0.0;
        }
        else {
          fVar12 = *(float *)(lVar5 + 0x110) - *(float *)(lVar5 + 0xaf0 + lVar10 * 8);
          fVar11 = *(float *)(lVar5 + 0x114) - *(float *)(lVar5 + 0xaf4 + lVar10 * 8);
        }
        bVar3 = false;
        if (fVar11 * fVar11 + fVar12 * fVar12 < *(float *)(lVar5 + 0x98) * *(float *)(lVar5 + 0x98))
        {
          bVar3 = true;
        }
      }
      if (bVar3) {
        psVar2 = (short *)(lVar5 + 0xb54 + lVar10 * 2);
        *psVar2 = *psVar2 + 1;
      }
      else {
        *(undefined2 *)(lVar5 + 0xb54 + lVar10 * 2) = 1;
      }
      *(undefined8 *)(lVar5 + 0xb18 + lVar10 * 8) = *(undefined8 *)(lVar5 + 0x10);
      *(undefined8 *)(lVar5 + 0xaf0 + lVar10 * 8) = *(undefined8 *)(lVar5 + 0x110);
      *(undefined2 *)(lVar5 + 0xb4a + lVar10 * 2) = *(undefined2 *)(lVar5 + 0xb54 + lVar10 * 2);
      *(undefined4 *)(lVar5 + 0xbc4 + lVar10 * 4) = 0;
    }
    *(bool *)(lVar5 + 0xb45 + lVar10) = *(short *)(lVar5 + 0xb4a + lVar10 * 2) == 2;
    if (*(char *)(lVar5 + 0xb40 + lVar10) != '\0') {
      *(undefined1 *)(lVar5 + 0x2061) = 0;
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 5);
  return;
}



/* ===== 1803e9fd0 FUN_1803e9fd0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803e9fd0(void)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  undefined8 local_res8;
  
  lVar4 = DAT_180ca0a50;
  fVar11 = DAT_1808ace9c;
  lVar6 = *(longlong *)(DAT_180ca0a50 + 0x1520);
  lVar9 = DAT_180ca0a50;
  if (lVar6 == 0) {
LAB_1803ea0cb:
    if (*(longlong *)(lVar4 + 0x1500) == 0) {
      return;
    }
    lVar6 = 0;
    lVar8 = *(longlong *)(lVar4 + 0x1500);
  }
  else {
    fVar16 = *(float *)(DAT_180ca0a50 + 0x1538) - *(float *)(DAT_180ca0a50 + 0x40);
    *(float *)(DAT_180ca0a50 + 0x1538) = fVar16;
    if (((fVar11 <= *(float *)(lVar4 + 0x110)) && (fVar11 <= *(float *)(lVar4 + 0x114))) &&
       (fVar15 = *(float *)(lVar4 + 0x110) - *(float *)(lVar4 + 0x1528),
       fVar11 = *(float *)(lVar4 + 0x114) - *(float *)(lVar4 + 0x152c),
       *(float *)(lVar4 + 0xa0) * *(float *)(lVar4 + 0xa0) < fVar15 * fVar15 + fVar11 * fVar11)) {
      *(undefined4 *)(lVar4 + 0x1538) = 0;
      fVar16 = 0.0;
    }
    lVar9 = lVar4;
    if (fVar16 <= 0.0) {
      *(undefined4 *)(lVar4 + 0x1538) = 0;
      if ((*(byte *)(lVar4 + 0x28f4) & 0x80) != 0) {
        FUN_1803f5060("[io] LockWheelingWindow() \"%s\"\n",&DAT_1808a81dc);
        lVar9 = DAT_180ca0a50;
      }
      *(undefined8 *)(lVar4 + 0x1528) = *(undefined8 *)(lVar4 + 0x110);
      *(undefined8 *)(lVar4 + 0x1520) = 0;
      *(undefined4 *)(lVar4 + 0x1530) = 0xffffffff;
      *(undefined8 *)(lVar4 + 0x1544) = 0;
      goto LAB_1803ea0cb;
    }
    lVar8 = lVar6;
  }
  if (*(char *)(lVar8 + 0xcf) != '\0') {
    return;
  }
  iVar2 = *(int *)(lVar8 + 0x10);
  if (iVar2 == 0) {
    if (*(char *)(lVar9 + 0x1d00) != '\0') goto LAB_1803ea306;
LAB_1803ea116:
    fVar11 = *(float *)(lVar4 + 0x124);
  }
  else {
    if ((*(int *)(lVar9 + 0x1cf8) == iVar2) ||
       ((*(char *)(lVar9 + 0x1d00) == '\0' && (*(int *)(lVar9 + 0x1cf8) == -1))))
    goto LAB_1803ea116;
LAB_1803ea306:
    fVar11 = 0.0;
  }
  if (iVar2 == 0) {
    if (*(char *)(lVar9 + 0x1d0c) != '\0') goto LAB_1803ea32f;
LAB_1803ea134:
    fVar16 = *(float *)(lVar4 + 0x120);
  }
  else {
    if ((*(int *)(lVar9 + 0x1d04) == iVar2) ||
       ((*(char *)(lVar9 + 0x1d0c) == '\0' && (*(int *)(lVar9 + 0x1d04) == -1))))
    goto LAB_1803ea134;
LAB_1803ea32f:
    fVar16 = 0.0;
  }
  if (lVar6 != 0) {
    *(int *)(lVar9 + 0x1cfc) = iVar2;
    *(int *)(lVar9 + 0x1cf8) = iVar2;
    *(undefined2 *)(lVar9 + 0x1d00) = 0;
    *(int *)(lVar9 + 0x1d08) = iVar2;
    *(int *)(lVar9 + 0x1d04) = iVar2;
    *(undefined2 *)(lVar9 + 0x1d0c) = 0;
  }
  uVar17 = _DAT_1808ade90;
  fVar15 = DAT_1808ac9e4;
  if (fVar16 == 0.0) {
LAB_1803ea337:
    if (*(char *)(lVar4 + 300) != '\0') {
      return;
    }
  }
  else if (*(char *)(lVar4 + 300) != '\0') {
    if (*(char *)(lVar4 + 0x70) != '\0') {
      fVar11 = (float)((uint)fVar16 & _DAT_1808ade90) * DAT_1808ac254 + *(float *)(lVar9 + 0x1538);
      if (DAT_1808ac254 <= fVar11) {
        fVar11 = DAT_1808ac254;
      }
      *(float *)(lVar9 + 0x1538) = fVar11;
      lVar6 = lVar9;
      if (*(longlong *)(lVar9 + 0x1520) != lVar8) {
        if ((*(byte *)(lVar9 + 0x28f4) & 0x80) != 0) {
          FUN_1803f5060("[io] LockWheelingWindow() \"%s\"\n",*(undefined8 *)(lVar8 + 8));
          lVar6 = DAT_180ca0a50;
        }
        *(undefined8 *)(lVar9 + 0x1528) = *(undefined8 *)(lVar9 + 0x110);
        *(longlong *)(lVar9 + 0x1520) = lVar8;
      }
      fVar11 = *(float *)(lVar8 + 0x2b8);
      fVar15 = *(float *)(lVar4 + 0x120) * DAT_1808ac0c0 + fVar11;
      fVar16 = DAT_1808ac1f4;
      if ((DAT_1808ac1f4 <= fVar15) && (fVar16 = DAT_1808ac5e0, fVar15 <= DAT_1808ac5e0)) {
        fVar16 = fVar15;
      }
      *(float *)(lVar8 + 0x2b8) = fVar16;
      if (lVar8 != *(longlong *)(lVar8 + 0x3c0)) {
        return;
      }
      uVar1 = *(ulonglong *)(lVar8 + 0x30);
      fVar16 = fVar16 / fVar11;
      fVar15 = (float)*(undefined8 *)(lVar8 + 0x28);
      fVar18 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x28) >> 0x20);
      fVar11 = DAT_1808ac34c - fVar16;
      auVar13._0_4_ = (float)uVar1 * fVar11 * ((float)*(undefined8 *)(lVar4 + 0x110) - fVar15);
      auVar13._4_4_ =
           (float)(uVar1 >> 0x20) * fVar11 *
           ((float)((ulonglong)*(undefined8 *)(lVar4 + 0x110) >> 0x20) - fVar18);
      auVar13._8_4_ = fVar11 * 0.0 * 0.0;
      auVar13._12_4_ = fVar11 * 0.0 * 0.0;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar1;
      auVar14 = divps(auVar13,auVar14);
      local_res8 = CONCAT44(fVar18 + auVar14._4_4_,fVar15 + auVar14._0_4_);
      FUN_1803e7c50(lVar8,&local_res8,0);
      *(ulonglong *)(lVar8 + 0x30) =
           CONCAT44((float)(int)((float)((ulonglong)*(undefined8 *)(lVar8 + 0x30) >> 0x20) * fVar16)
                    ,(float)(int)((float)*(undefined8 *)(lVar8 + 0x30) * fVar16));
      *(ulonglong *)(lVar8 + 0x38) =
           CONCAT44((float)(int)((float)((ulonglong)*(undefined8 *)(lVar8 + 0x38) >> 0x20) * fVar16)
                    ,(float)(int)((float)*(undefined8 *)(lVar8 + 0x38) * fVar16));
      if ((*(uint *)(lVar8 + 0x14) & 0x100) != 0) {
        return;
      }
      if (0.0 < *(float *)(lVar6 + 0x27a4)) {
        return;
      }
      *(undefined4 *)(lVar6 + 0x27a4) = *(undefined4 *)(lVar6 + 0x44);
      return;
    }
    goto LAB_1803ea337;
  }
  fVar18 = fVar16;
  if (*(char *)(lVar4 + 0xb9a) != '\0') {
    fVar18 = 0.0;
    fVar11 = fVar16;
  }
  fVar16 = *(float *)(lVar4 + 0x1548) / DAT_1808ac9e4;
  *(float *)(lVar4 + 0x1544) =
       (float)((uint)fVar11 & _DAT_1808ade90) / DAT_1808ac9e4 +
       (*(float *)(lVar4 + 0x1544) - *(float *)(lVar4 + 0x1544) / DAT_1808ac9e4);
  *(float *)(lVar4 + 0x1548) =
       (float)((uint)fVar18 & uVar17) / fVar15 + (*(float *)(lVar4 + 0x1548) - fVar16);
  fVar11 = fVar11 + *(float *)(lVar4 + 0x153c);
  fVar18 = fVar18 + *(float *)(lVar4 + 0x1540);
  *(undefined8 *)(lVar4 + 0x153c) = 0;
  if ((fVar11 == 0.0) && (fVar18 == 0.0)) {
    return;
  }
  lVar6 = *(longlong *)(lVar4 + 0x1520);
  if (lVar6 != 0) goto LAB_1803ea548;
  lVar8 = 0;
  lVar6 = 0;
  if (fVar11 != 0.0) {
    lVar8 = *(longlong *)(lVar9 + 0x1500);
    uVar3 = *(uint *)(lVar8 + 0x14);
    while (((uVar3 & 0x1000000) != 0 &&
           ((*(float *)(lVar8 + 0xa0) == 0.0 || ((*(uint *)(lVar8 + 0x14) & 0x210) == 0x10))))) {
      lVar8 = *(longlong *)(lVar8 + 0x3b0);
      uVar3 = *(uint *)(lVar8 + 0x14);
    }
  }
  if (fVar18 != 0.0) {
    lVar6 = *(longlong *)(lVar9 + 0x1500);
    uVar3 = *(uint *)(lVar6 + 0x14);
    while (((uVar3 & 0x1000000) != 0 &&
           ((*(float *)(lVar6 + 0xa4) == 0.0 || ((*(uint *)(lVar6 + 0x14) & 0x210) == 0x10))))) {
      lVar6 = *(longlong *)(lVar6 + 0x3b0);
      uVar3 = *(uint *)(lVar6 + 0x14);
    }
  }
  if (lVar8 == 0) {
    if (lVar6 != 0) goto LAB_1803ea548;
    lVar6 = 0;
  }
  else {
    if (lVar8 == lVar6) {
      if (lVar6 != 0) goto LAB_1803ea548;
    }
    else if (lVar6 != 0) {
      if (*(int *)(lVar9 + 0x1530) == -1) {
        lVar7 = 4;
        *(undefined4 *)(lVar9 + 0x1530) = *(undefined4 *)(lVar9 + 4);
      }
      else {
        lVar7 = 0x1530;
      }
      if (((*(int *)(lVar7 + lVar9) != *(int *)(lVar9 + 4)) || (fVar11 == 0.0)) || (fVar18 == 0.0))
      {
        if (*(float *)(lVar9 + 0x1544) != *(float *)(lVar9 + 0x1548)) {
          if (*(float *)(lVar9 + 0x1548) < *(float *)(lVar9 + 0x1544)) {
            lVar6 = lVar8;
          }
          goto LAB_1803ea53f;
        }
      }
      *(float *)(lVar9 + 0x153c) = fVar11;
      *(float *)(lVar9 + 0x1540) = fVar18;
      lVar6 = 0;
      goto LAB_1803ea53f;
    }
    lVar6 = lVar8;
  }
LAB_1803ea53f:
  if (lVar6 == 0) {
    return;
  }
LAB_1803ea548:
  fVar16 = DAT_1808ac254;
  if ((*(uint *)(lVar6 + 0x14) & 0x210) == 0) {
    if ((fVar11 == 0.0) || (*(float *)(lVar6 + 0xa0) == 0.0)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    if ((fVar18 == 0.0) || (*(float *)(lVar6 + 0xa4) == 0.0)) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x01';
    }
    local_res8._0_2_ = CONCAT11(cVar10,cVar5);
    lVar8 = lVar9;
    if (cVar5 != '\0') {
      if (cVar10 != '\0') {
        *(undefined1 *)
         ((longlong)&local_res8 +
         (ulonglong)
         (*(float *)(lVar4 + 0x1548) <= *(float *)(lVar4 + 0x1544) &&
         *(float *)(lVar4 + 0x1544) != *(float *)(lVar4 + 0x1548))) = 0;
        cVar5 = (char)local_res8;
        cVar10 = local_res8._1_1_;
      }
      if (cVar5 != '\0') {
        fVar15 = (float)((uint)fVar11 & uVar17) * DAT_1808ac254 + *(float *)(lVar9 + 0x1538);
        if (DAT_1808ac254 <= fVar15) {
          fVar15 = DAT_1808ac254;
        }
        *(float *)(lVar9 + 0x1538) = fVar15;
        if (*(longlong *)(lVar9 + 0x1520) != lVar6) {
          if ((*(byte *)(lVar9 + 0x28f4) & 0x80) != 0) {
            FUN_1803f5060("[io] LockWheelingWindow() \"%s\"\n",*(undefined8 *)(lVar6 + 8));
            lVar8 = DAT_180ca0a50;
            uVar17 = _DAT_1808ade90;
          }
          *(undefined8 *)(lVar9 + 0x1528) = *(undefined8 *)(lVar9 + 0x110);
          *(longlong *)(lVar9 + 0x1520) = lVar6;
        }
        fVar15 = *(float *)(lVar6 + 0x2c0) + *(float *)(lVar6 + 0x2c0);
        *(undefined4 *)(lVar6 + 0xb0) = 0;
        *(undefined4 *)(lVar6 + 0xb8) = 0;
        fVar12 = (*(float *)(lVar6 + 0x230) - *(float *)(lVar6 + 0x228)) * _DAT_1808ac240;
        if (fVar12 <= fVar15) {
          fVar15 = fVar12;
        }
        *(float *)(lVar6 + 0xa8) = *(float *)(lVar6 + 0x98) - (float)(int)fVar15 * fVar11;
        *(undefined4 *)(lVar4 + 0x1534) = *(undefined4 *)(lVar4 + 4);
      }
    }
    if (cVar10 != '\0') {
      fVar11 = (float)((uint)fVar18 & uVar17) * fVar16 + *(float *)(lVar8 + 0x1538);
      if (fVar16 <= fVar11) {
        fVar11 = fVar16;
      }
      *(float *)(lVar8 + 0x1538) = fVar11;
      if (*(longlong *)(lVar8 + 0x1520) != lVar6) {
        if ((*(byte *)(lVar8 + 0x28f4) & 0x80) != 0) {
          FUN_1803f5060("[io] LockWheelingWindow() \"%s\"\n",*(undefined8 *)(lVar6 + 8));
        }
        *(undefined8 *)(lVar8 + 0x1528) = *(undefined8 *)(lVar8 + 0x110);
        *(longlong *)(lVar8 + 0x1520) = lVar6;
      }
      fVar11 = *(float *)(lVar6 + 0x2c0) * DAT_1808ac750;
      *(undefined4 *)(lVar6 + 0xb4) = 0;
      *(undefined4 *)(lVar6 + 0xbc) = 0;
      fVar16 = (*(float *)(lVar6 + 0x234) - *(float *)(lVar6 + 0x22c)) * _DAT_1808ac240;
      if (fVar16 <= fVar11) {
        fVar11 = fVar16;
      }
      *(float *)(lVar6 + 0xac) = *(float *)(lVar6 + 0x9c) - (float)(int)fVar11 * fVar18;
      *(undefined4 *)(lVar4 + 0x1534) = *(undefined4 *)(lVar4 + 4);
    }
  }
  return;
}



/* ===== 1803ea7b0 FUN_1803ea7b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803ea7b0(undefined8 param_1,int *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  char *local_48;
  char *local_38 [3];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_68;
  iVar2 = *param_2;
  if (iVar2 == 1) {
    if (((float)param_2[3] == DAT_1808aceb0) && ((float)param_2[4] == DAT_1808aceb0)) {
      if ((*(byte *)(DAT_180ca0a50 + 0x28f4) & 0x80) != 0) {
        FUN_1803f5060("[io] %s: MousePos (-FLT_MAX, -FLT_MAX)\n",param_1);
        return;
      }
    }
    else if ((*(byte *)(DAT_180ca0a50 + 0x28f4) & 0x80) != 0) {
      local_38[0] = "Mouse";
      local_38[1] = "TouchScreen";
      local_38[2] = "Pen";
      if ((uint)param_2[5] < 3) {
        local_48 = local_38[param_2[5]];
      }
      else {
        local_48 = "Unknown";
      }
      FUN_1803f5060("[io] %s: MousePos (%.1f, %.1f) (%s)\n",param_1,(double)(float)param_2[3],
                    (double)(float)param_2[4]);
      return;
    }
  }
  else if (iVar2 == 3) {
    if ((*(byte *)(DAT_180ca0a50 + 0x28f4) & 0x80) != 0) {
      local_38[0] = "Mouse";
      local_38[1] = "TouchScreen";
      local_38[2] = "Pen";
      if ((uint)param_2[5] < 3) {
        local_48 = local_38[param_2[5]];
      }
      else {
        local_48 = "Unknown";
      }
      puVar4 = &DAT_18076ec1c;
      if ((char)param_2[4] != '\0') {
        puVar4 = &DAT_18076ec44;
      }
      FUN_1803f5060("[io] %s: MouseButton %d %s (%s)\n",param_1,param_2[3],puVar4);
      return;
    }
  }
  else if (iVar2 == 2) {
    if ((*(byte *)(DAT_180ca0a50 + 0x28f4) & 0x80) != 0) {
      local_38[0] = "Mouse";
      local_38[1] = "TouchScreen";
      local_38[2] = "Pen";
      if ((uint)param_2[5] < 3) {
        local_48 = local_38[param_2[5]];
      }
      else {
        local_48 = "Unknown";
      }
      FUN_1803f5060("[io] %s: MouseWheel (%.3f, %.3f) (%s)\n",param_1,(double)(float)param_2[3],
                    (double)(float)param_2[4]);
      return;
    }
  }
  else if (iVar2 == 4) {
    if ((*(byte *)(DAT_180ca0a50 + 0x28f4) & 0x80) != 0) {
      puVar4 = &DAT_18076ec1c;
      if ((char)param_2[4] != '\0') {
        puVar4 = &DAT_18076ec44;
      }
      uVar3 = FUN_1803e8bb0(param_2[3],param_2,param_3,puVar4);
      FUN_1803f5060("[io] %s: Key \"%s\" %s\n",param_1,uVar3);
      return;
    }
  }
  else if (iVar2 == 5) {
    uVar6 = (ulonglong)(uint)param_2[3];
    lVar5 = DAT_180ca0a50;
    iVar2 = FUN_1803d7e10(local_20,param_2,uVar6);
    bVar1 = *(byte *)(lVar5 + 0x28f4);
    local_20[iVar2] = 0;
    if ((bVar1 & 0x80) != 0) {
      FUN_1803f5060("[io] %s: Text: \'%s\' (U+%08X)\n",param_1,local_20,uVar6 & 0xffffffff);
      return;
    }
  }
  else if ((iVar2 == 6) && ((*(byte *)(DAT_180ca0a50 + 0x28f4) & 0x80) != 0)) {
    FUN_1803f5060("[io] %s: AppFocused %d\n",param_1,(char)param_2[3]);
  }
  return;
}



/* ===== 1803eaab0 FUN_1803eaab0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803eaab0(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  char *pcVar15;
  uint uVar16;
  undefined4 *puVar17;
  char cVar18;
  undefined2 uVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  int *piVar23;
  char cVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auStack_78 [32];
  char local_58;
  char local_57;
  char local_56;
  char local_55;
  uint local_54;
  uint local_50 [6];
  ulonglong local_38;
  
  lVar9 = DAT_180ca0a50;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_78;
  cVar12 = (char)param_1;
  if ((cVar12 == '\0') || (*(int *)(DAT_180ca0a50 + 0x2af4) != 1)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  iVar26 = 0;
  piVar1 = (int *)(DAT_180ca0a50 + 0x1470);
  local_50[4] = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  if (0 < *piVar1) {
    cVar24 = '\0';
    local_55 = '\0';
    cVar18 = '\0';
    local_57 = '\0';
    local_54 = param_1 & 0xffffff00;
    local_58 = '\0';
    uVar16 = 0;
    local_56 = '\0';
    lVar27 = DAT_180ca0a50;
    do {
      lVar14 = *(longlong *)(lVar9 + 0x1478);
      lVar21 = (longlong)iVar26 * 0x1c;
      iVar11 = *(int *)(lVar14 + lVar21);
      if (iVar11 == 1) {
        if (*(char *)(lVar9 + 0xe3) == '\0') {
          if ((cVar12 != '\0') &&
             ((uVar16 != 0 || cVar18 != '\0') || (local_55 != '\0' || local_56 != '\0'))) break;
          uVar4 = *(undefined4 *)(lVar14 + 0xc + lVar21);
          cVar24 = '\x01';
          *(undefined4 *)(lVar9 + 0x114) = *(undefined4 *)(lVar14 + 0x10 + lVar21);
          *(undefined4 *)(lVar9 + 0x110) = uVar4;
          *(undefined4 *)(lVar9 + 0x128) = *(undefined4 *)(lVar14 + 0x14 + lVar21);
          local_57 = '\x01';
        }
      }
      else if (iVar11 == 3) {
        uVar22 = *(uint *)(lVar14 + 0xc + lVar21);
        if ((cVar12 != '\0') &&
           (((1 << ((byte)uVar22 & 0x1f) & uVar16) != 0 || cVar18 != '\0' ||
            ((*(int *)(lVar14 + 0x14 + lVar21) == 1 && (cVar24 != '\0')))))) break;
        uVar16 = uVar16 | 1 << (uVar22 & 0x1f);
        *(undefined1 *)(lVar9 + 0x118 + (longlong)(int)uVar22) =
             *(undefined1 *)(lVar14 + 0x10 + lVar21);
        *(undefined4 *)(lVar9 + 0x128) = *(undefined4 *)(lVar14 + 0x14 + lVar21);
      }
      else if (iVar11 == 2) {
        if ((cVar12 != '\0') && (cVar24 != '\0' || uVar16 != 0)) break;
        local_58 = '\x01';
        *(float *)(lVar9 + 0x124) = *(float *)(lVar14 + 0xc + lVar21) + *(float *)(lVar9 + 0x124);
        *(float *)(lVar9 + 0x120) = *(float *)(lVar14 + 0x10 + lVar21) + *(float *)(lVar9 + 0x120);
        *(undefined4 *)(lVar9 + 0x128) = *(undefined4 *)(lVar14 + 0x14 + lVar21);
        cVar18 = '\x01';
      }
      else if (iVar11 == 4) {
        if ((*(byte *)(lVar9 + 0x28) & 0x40) == 0) {
          uVar22 = *(uint *)(lVar14 + 0xc + lVar21);
          pcVar15 = (char *)FUN_1803d6470();
          uVar25 = (uint)((longlong)(pcVar15 + (-0x134 - lVar9)) >> 4);
          if (((cVar12 != '\0') && (*pcVar15 != *(char *)(lVar14 + 0x10 + lVar21))) &&
             ((1 << ((byte)((longlong)(pcVar15 + (-0x134 - lVar9)) >> 4) & 0x1f) &
              local_50[(longlong)(int)uVar25 >> 5]) != 0 || uVar16 != 0)) break;
          uVar13 = -(uint)(*(char *)(lVar27 + 0xaa4) != '\0') & 0x1000;
          if ((*(char *)(lVar27 + 0xab4) != '\0') &&
             (uVar13 = 0x3000, *(char *)(lVar27 + 0xaa4) == '\0')) {
            uVar13 = 0;
          }
          uVar10 = uVar13 | 0x4000;
          if (*(char *)(lVar27 + 0xac4) == '\0') {
            uVar10 = uVar13;
          }
          uVar13 = (uVar10 | uVar22) & 0x1000;
          if (((uVar13 == 0) || (((uVar10 | uVar22) >> 0xe & 1) != 0)) &&
             ((*(char *)(lVar27 + 0x78) == '\0' || (uVar13 == 0)))) {
            bVar28 = false;
            if ((uVar22 & 0xffff0fff) != 0) {
              bVar28 = (*(uint *)(lVar27 + 0x15e8 +
                                 ((longlong)(int)(uVar22 & 0xffff0fff) + -0x200 >> 5) * 4) >>
                        (uVar22 & 0x1f) & 1) != 0;
            }
          }
          else {
            bVar28 = false;
          }
          if (((bVar8) && (local_56 != '\0')) && (!bVar28)) break;
          cVar24 = *(char *)(lVar14 + 0x10 + lVar21);
          if (*pcVar15 != cVar24) {
            local_55 = '\x01';
            local_50[(longlong)(int)uVar25 >> 5] =
                 local_50[(longlong)(int)uVar25 >> 5] | 1 << (uVar25 & 0x1f);
            if ((bVar8) && (local_54 = local_54 & 0xff, !bVar28)) {
              local_54 = 1;
            }
          }
          *pcVar15 = cVar24;
          *(undefined4 *)(pcVar15 + 0xc) = *(undefined4 *)(lVar14 + 0x14 + lVar21);
          cVar24 = local_57;
LAB_1803eade7:
          cVar18 = local_58;
        }
      }
      else if (iVar11 == 5) {
        if ((*(byte *)(lVar9 + 0x28) & 0x40) == 0) {
          if (((cVar12 == '\0') || (uVar16 == 0 && (cVar24 == '\0' && cVar18 == '\0'))) &&
             ((!bVar8 || ((char)local_54 == '\0')))) {
            uVar22 = *(uint *)(lVar14 + 0xc + lVar21);
            iVar11 = *(int *)(lVar9 + 0xbe4);
            iVar20 = *(int *)(lVar9 + 0xbe0);
            uVar19 = 0xfffd;
            if (uVar22 < 0x10000) {
              uVar19 = (short)uVar22;
            }
            if (iVar20 == iVar11) {
              iVar20 = iVar20 + 1;
              if (iVar11 == 0) {
                iVar11 = 8;
              }
              else {
                iVar11 = iVar11 / 2 + iVar11;
              }
              if (iVar20 < iVar11) {
                iVar20 = iVar11;
              }
              FUN_1803f6b20((int *)(lVar9 + 0xbe0),iVar20);
              lVar27 = DAT_180ca0a50;
              cVar24 = local_57;
            }
            piVar23 = (int *)(lVar9 + 0xbe0);
            *(undefined2 *)(*(longlong *)(lVar9 + 0xbe8) + (longlong)*piVar23 * 2) = uVar19;
            *piVar23 = *piVar23 + 1;
            if (bVar8) {
              local_56 = '\x01';
            }
            goto LAB_1803eade7;
          }
          break;
        }
      }
      else if (iVar11 == 6) {
        *(bool *)(lVar9 + 0xbdc) = *(char *)(lVar14 + 0xc + lVar21) == '\0';
      }
      iVar26 = iVar26 + 1;
    } while (iVar26 < *piVar1);
  }
  uVar16 = 0;
  if (iVar26 < 1) {
    if (iVar26 == 0) goto LAB_1803eafc9;
  }
  else {
    do {
      iVar11 = *(int *)(lVar9 + 0x1484);
      puVar17 = (undefined4 *)((ulonglong)uVar16 * 0x1c + *(longlong *)(lVar9 + 0x1478));
      if (*(int *)(lVar9 + 0x1480) == iVar11) {
        iVar20 = *(int *)(lVar9 + 0x1480) + 1;
        if (iVar11 == 0) {
          iVar11 = 8;
        }
        else {
          iVar11 = iVar11 / 2 + iVar11;
        }
        if (iVar20 < iVar11) {
          iVar20 = iVar11;
        }
        FUN_1803f6e00(lVar9 + 0x1480,iVar20);
      }
      uVar16 = uVar16 + 1;
      uVar4 = puVar17[1];
      uVar5 = puVar17[2];
      uVar6 = puVar17[3];
      lVar14 = (longlong)*(int *)(lVar9 + 0x1480) * 0x1c;
      lVar27 = *(longlong *)(lVar9 + 0x1488);
      puVar2 = (undefined4 *)(lVar14 + lVar27);
      *puVar2 = *puVar17;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      uVar7 = *(undefined8 *)(puVar17 + 5);
      puVar3 = (undefined8 *)(lVar14 + 0xc + lVar27);
      *puVar3 = *(undefined8 *)(puVar17 + 3);
      puVar3[1] = uVar7;
      *(int *)(lVar9 + 0x1480) = *(int *)(lVar9 + 0x1480) + 1;
    } while ((int)uVar16 < iVar26);
  }
  if (((*(byte *)(lVar9 + 0x28f4) & 0x80) != 0) && (iVar11 = 0, 0 < *piVar1)) {
    do {
      pcVar15 = "Remaining";
      if (iVar11 < iVar26) {
        pcVar15 = "Processed";
      }
      FUN_1803ea7b0(pcVar15,(longlong)iVar11 * 0x1c + *(longlong *)(lVar9 + 0x1478));
      iVar11 = iVar11 + 1;
    } while (iVar11 < *piVar1);
  }
LAB_1803eafc9:
  if (iVar26 == *piVar1) {
    iVar26 = *(int *)(lVar9 + 0x1474);
    if (iVar26 < 0) {
      iVar26 = iVar26 + iVar26 / 2;
      iVar11 = 0;
      if (0 < iVar26) {
        iVar11 = iVar26;
      }
      FUN_1803f6e00(piVar1,iVar11);
    }
    *piVar1 = 0;
  }
  else {
    FUN_180540530(*(longlong *)(lVar9 + 0x1478),
                  (longlong)iVar26 * 0x1c + *(longlong *)(lVar9 + 0x1478),
                  ((longlong)*piVar1 - (longlong)iVar26) * 0x1c);
    *piVar1 = *piVar1 - iVar26;
  }
  if (*(char *)(lVar9 + 0xbdc) != '\0') {
    FUN_1803d6ec0(lVar9 + 0x28);
    *(undefined1 *)(lVar9 + 0xa34) = 0;
    *(undefined4 *)(lVar9 + 0xa38) = 0xbf800000;
    *(undefined4 *)(lVar9 + 0xa3c) = 0xbf800000;
    *(undefined1 *)(lVar9 + 0xa44) = 0;
    *(undefined4 *)(lVar9 + 0xa48) = 0xbf800000;
    *(undefined4 *)(lVar9 + 0xa4c) = 0xbf800000;
    *(undefined1 *)(lVar9 + 0xa54) = 0;
    *(undefined4 *)(lVar9 + 0xa58) = 0xbf800000;
    *(undefined4 *)(lVar9 + 0xa5c) = 0xbf800000;
    *(undefined1 *)(lVar9 + 0xa64) = 0;
    *(undefined4 *)(lVar9 + 0xa68) = 0xbf800000;
    *(undefined4 *)(lVar9 + 0xa6c) = 0xbf800000;
    *(undefined1 *)(lVar9 + 0xa74) = 0;
    *(undefined4 *)(lVar9 + 0xa78) = 0xbf800000;
    *(undefined4 *)(lVar9 + 0xa7c) = 0xbf800000;
    *(undefined1 *)(lVar9 + 0xa84) = 0;
    *(undefined4 *)(lVar9 + 0xa88) = 0xbf800000;
    *(undefined4 *)(lVar9 + 0xa8c) = 0xbf800000;
    *(undefined1 *)(lVar9 + 0xa94) = 0;
    *(undefined4 *)(lVar9 + 0xa98) = 0xbf800000;
    *(undefined4 *)(lVar9 + 0xa9c) = 0xbf800000;
    *(undefined4 *)(lVar9 + 0x110) = 0xff7fffff;
    *(undefined4 *)(lVar9 + 0x114) = 0xff7fffff;
    *(undefined4 *)(lVar9 + 0x118) = 0;
    *(undefined4 *)(lVar9 + 0xbb0) = 0xbf800000;
    *(undefined4 *)(lVar9 + 0xb9c) = 0xbf800000;
    *(undefined4 *)(lVar9 + 0xbb4) = 0xbf800000;
    *(undefined4 *)(lVar9 + 0xba0) = 0xbf800000;
    *(undefined4 *)(lVar9 + 3000) = 0xbf800000;
    *(undefined4 *)(lVar9 + 0xba4) = 0xbf800000;
    *(undefined4 *)(lVar9 + 0xbbc) = 0xbf800000;
    *(undefined4 *)(lVar9 + 0xba8) = 0xbf800000;
    *(undefined1 *)(lVar9 + 0x11c) = 0;
    *(undefined4 *)(lVar9 + 0xbc0) = 0xbf800000;
    *(undefined4 *)(lVar9 + 0xbac) = 0xbf800000;
    *(undefined8 *)(lVar9 + 0x120) = 0;
  }
  return;
}



/* ===== 1803eb1c0 FUN_1803eb1c0 ===== */

ulonglong FUN_1803eb1c0(uint param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)(param_1 - 0x200);
  if ((((0x9a < param_1 - 0x200) && (param_1 != 0x1000)) && (param_1 != 0x2000)) &&
     ((param_1 != 0x4000 && (param_1 != 0x8000)))) {
LAB_1803eb292:
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  if (((*(char *)(DAT_180ca0a50 + 0x1e9c) == '\0') ||
      ((param_2 == *(uint *)(DAT_180ca0a50 + 0x1578) || (param_2 == 0)))) ||
     (uVar2 = (ulonglong)(param_1 - 0x200), 0x77 < param_1 - 0x200)) {
    if ((param_1 & 0xf000) != 0) {
      if (param_1 == 0x1000) {
        param_1 = 0x297;
      }
      else if (param_1 == 0x2000) {
        param_1 = 0x298;
      }
      else if (param_1 == 0x4000) {
        param_1 = 0x299;
      }
      else if (param_1 == 0x8000) {
        param_1 = 0x29a;
      }
    }
    lVar3 = (longlong)(int)param_1 + -0x2b;
    if (param_2 == 0) {
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),
                      *(char *)(DAT_180ca0a50 + 8 + lVar3 * 0xc) == '\0');
    }
    uVar1 = *(uint *)(DAT_180ca0a50 + lVar3 * 0xc);
    uVar2 = (ulonglong)uVar1;
    if (uVar1 == param_2) goto LAB_1803eb292;
    if (*(char *)(DAT_180ca0a50 + 8 + lVar3 * 0xc) == '\0') {
      return (ulonglong)CONCAT31((int3)(uVar1 >> 8),uVar1 == 0xffffffff);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



/* ===== 1803eb2a0 FUN_1803eb2a0 ===== */

void FUN_1803eb2a0(uint param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_180ca0a50;
  if ((param_1 & 0xf000) != 0) {
    if (param_1 == 0x1000) {
      param_1 = 0x297;
    }
    else if (param_1 == 0x2000) {
      param_1 = 0x298;
    }
    else if (param_1 == 0x4000) {
      param_1 = 0x299;
    }
    else if (param_1 == 0x8000) {
      param_1 = 0x29a;
    }
  }
  lVar2 = (longlong)(int)param_1 + -0x2b;
  *(undefined4 *)(DAT_180ca0a50 + 4 + lVar2 * 0xc) = param_2;
  *(undefined4 *)(lVar1 + lVar2 * 0xc) = param_2;
  *(undefined2 *)(lVar1 + 8 + lVar2 * 0xc) = 0;
  return;
}



/* ===== 1803eb310 FUN_1803eb310 ===== */

void FUN_1803eb310(uint param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_180ca0a50;
  if ((param_1 >> 0xc & 1) != 0) {
    *(undefined4 *)(DAT_180ca0a50 + 0x1d14) = param_2;
    *(undefined4 *)(lVar1 + 0x1d10) = param_2;
    *(undefined2 *)(lVar1 + 0x1d18) = 0;
  }
  if ((param_1 >> 0xd & 1) != 0) {
    *(undefined4 *)(lVar1 + 0x1d20) = param_2;
    *(undefined4 *)(lVar1 + 0x1d1c) = param_2;
    *(undefined2 *)(lVar1 + 0x1d24) = 0;
  }
  if ((param_1 >> 0xe & 1) != 0) {
    *(undefined4 *)(lVar1 + 0x1d2c) = param_2;
    *(undefined4 *)(lVar1 + 0x1d28) = param_2;
    *(undefined2 *)(lVar1 + 0x1d30) = 0;
  }
  if ((param_1 >> 0xf & 1) != 0) {
    *(undefined4 *)(lVar1 + 0x1d38) = param_2;
    *(undefined4 *)(lVar1 + 0x1d34) = param_2;
    *(undefined2 *)(lVar1 + 0x1d3c) = 0;
  }
  if ((param_1 & 0xffff0fff) != 0) {
    lVar2 = (longlong)(int)(param_1 & 0xffff0fff) + -0x2b;
    *(undefined4 *)(lVar1 + 4 + lVar2 * 0xc) = param_2;
    *(undefined4 *)(lVar1 + lVar2 * 0xc) = param_2;
    *(undefined2 *)(lVar1 + 8 + lVar2 * 0xc) = 0;
  }
  return;
}



/* ===== 1803eb3c0 FUN_1803eb3c0 ===== */

bool FUN_1803eb3c0(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  param_2 = param_2 & 0xffffffff;
  uVar2 = FUN_1803e8b30();
  uVar3 = uVar2 & 0xf000;
  if (*(uint *)(DAT_180ca0a50 + 0x130) != uVar3) {
    return false;
  }
  if ((uVar2 & 0xffff0fff) == 0) {
    if (uVar3 == 0x1000) {
      uVar3 = 0x297;
    }
    else if (uVar3 == 0x2000) {
      uVar3 = 0x298;
    }
    else if (uVar3 == 0x4000) {
      uVar3 = 0x299;
    }
    else if (uVar3 == 0x8000) {
      uVar3 = 0x29a;
    }
  }
  else {
    uVar3 = uVar2 & 0xffff0fff;
  }
  cVar1 = FUN_1803e9470(uVar3,param_2 & 0xff);
  return cVar1 != '\0';
}



/* ===== 1803eb460 FUN_1803eb460 ===== */

undefined8 FUN_1803eb460(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = param_2 | 0x800;
  if ((param_2 & 0x3c00) != 0) {
    uVar3 = param_2;
  }
  if ((param_3 + 1U & 0xfffffffe) == 0) {
    param_3 = *(int *)(DAT_180ca0a50 + 0x1ea4);
  }
  if ((*(byte *)(DAT_180ca0a50 + 0x1ea8) & 0x40) == 0) {
    cVar2 = FUN_1803e9150(param_1,uVar3,param_3);
    if (cVar2 != '\0') {
      uVar1 = uVar3 | 0x20;
      if (((byte)uVar3 & 0xf1) != 1) {
        uVar1 = uVar3;
      }
      cVar2 = FUN_1803eb3c0(param_1,uVar1,param_3);
      if (cVar2 != '\0') {
        FUN_1803eb310(param_1 & 0xf000,param_3);
        return 1;
      }
    }
  }
  return 0;
}



/* ===== 1803eb550 FUN_1803eb550 ===== */

void FUN_1803eb550(undefined2 *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180ca0a50;
  *param_1 = *(undefined2 *)(DAT_180ca0a50 + 0x14c8);
  param_1[1] = *(undefined2 *)(*(longlong *)(lVar1 + 0x14f8) + 0x108);
  param_1[2] = *(undefined2 *)(*(longlong *)(lVar1 + 0x14f8) + 0x1a0);
  param_1[3] = *(undefined2 *)(lVar1 + 0x1fc0);
  param_1[4] = *(undefined2 *)(lVar1 + 0x1fd0);
  param_1[5] = *(undefined2 *)(lVar1 + 0x1fe0);
  param_1[6] = *(undefined2 *)(lVar1 + 0x1ff0);
  param_1[7] = *(undefined2 *)(lVar1 + 0x2010);
  param_1[8] = *(undefined2 *)(lVar1 + 0x2000);
  param_1[9] = *(undefined2 *)(lVar1 + 0x2030);
  param_1[10] = *(undefined2 *)(lVar1 + 0x26d0);
  return;
}



/* ===== 1803eb5f0 FUN_1803eb5f0 ===== */

void FUN_1803eb5f0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  undefined4 uVar15;
  float fVar16;
  
  lVar11 = DAT_180ca0a50;
  lVar5 = *(longlong *)(DAT_180ca0a50 + 0x2360);
  while ((lVar5 != 0 && (*(longlong *)(lVar5 + 0x188) == *(longlong *)(lVar11 + 0x14f8)))) {
    FUN_1803ebc00("Missing EndTable()");
    FUN_18040e8a0();
    lVar5 = *(longlong *)(lVar11 + 0x2360);
  }
  lVar5 = *(longlong *)(lVar11 + 0x14f8);
  plVar6 = *(longlong **)(lVar11 + 0x23c8);
  while ((plVar6 != (longlong *)0x0 && (*plVar6 == lVar5))) {
    FUN_1803ebc00("Missing EndTabBar()");
    lVar8 = DAT_180ca0a50;
    lVar13 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    if (*(char *)(lVar13 + 0xd1) == '\0') {
      lVar7 = *(longlong *)(DAT_180ca0a50 + 0x23c8);
      if (lVar7 == 0) {
        FUN_1803ebc00("Mismatched BeginTabBar()/EndTabBar()!");
      }
      else {
        if (*(char *)(lVar7 + 0x83) != '\0') {
          FUN_1804235e0(lVar7);
        }
        if (((*(char *)(lVar7 + 0x84) == '\0') && (*(int *)(lVar7 + 0x2c) != 0)) &&
           (*(int *)(lVar8 + 4) <= *(int *)(lVar7 + 0x34) + 1)) {
          fVar16 = *(float *)(lVar7 + 0x50) + *(float *)(lVar7 + 0x44);
        }
        else {
          fVar16 = *(float *)(lVar13 + 0x11c) - *(float *)(lVar7 + 0x44);
          if (fVar16 <= *(float *)(lVar7 + 0x4c)) {
            fVar16 = *(float *)(lVar7 + 0x4c);
          }
          *(float *)(lVar7 + 0x4c) = fVar16;
          fVar16 = *(float *)(lVar7 + 0x44) + fVar16;
        }
        *(float *)(lVar13 + 0x11c) = fVar16;
        if ('\x01' < *(char *)(lVar7 + 0x82)) {
          *(undefined8 *)(lVar13 + 0x118) = *(undefined8 *)(lVar7 + 0x98);
        }
        *(undefined2 *)(lVar7 + 0x8a) = 0xffff;
        if ((*(uint *)(lVar7 + 0x18) & 0x100000) == 0) {
          FUN_1803e8b00();
        }
        iVar12 = *(int *)(lVar8 + 0x23f8);
        *(int *)(lVar8 + 0x23f8) = iVar12 + -1;
        if (iVar12 == 1) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(longlong *)(*(longlong *)(lVar8 + 0x2400) + (longlong)(iVar12 + -2) * 0x10);
          if (lVar13 == 0) {
            lVar13 = (longlong)
                     *(int *)(*(longlong *)(lVar8 + 0x2400) + 8 + (longlong)(iVar12 + -2) * 0x10) *
                     0xb0 + *(longlong *)(DAT_180ca0a50 + 0x23d8);
          }
        }
        *(longlong *)(lVar8 + 0x23c8) = lVar13;
      }
    }
    plVar6 = *(longlong **)(lVar11 + 0x23c8);
  }
  lVar13 = *(longlong *)(lVar11 + 0x24a0);
  while ((lVar13 != 0 && (**(longlong **)(lVar13 + 0x28) == lVar5))) {
    FUN_1803ebc00("Missing EndMultiSelect()");
    FUN_180421100();
    lVar13 = *(longlong *)(lVar11 + 0x24a0);
  }
  if (*(char *)(lVar5 + 0x17b) != '\0') {
    FUN_1803ebc00("Missing EndMenuBar()");
    FUN_180421fa0();
  }
  if ((int)*(short *)(param_1 + 4) < *(int *)(lVar5 + 0x1a0)) {
    do {
      FUN_1803ebc00("Missing TreePop()");
      FUN_18041ffb0();
    } while ((int)*(short *)(param_1 + 4) < *(int *)(lVar5 + 0x1a0));
  }
  if ((int)*(short *)(param_1 + 0xe) < *(int *)(lVar11 + 0x2010)) {
    do {
      FUN_1803ebc00("Missing EndGroup()");
      FUN_1803ecb10();
    } while ((int)*(short *)(param_1 + 0xe) < *(int *)(lVar11 + 0x2010));
  }
  if ((int)*(short *)(param_1 + 2) < *(int *)(lVar5 + 0x108)) {
    do {
      FUN_1803ebc00("Missing PopID()");
      FUN_1803e8b00();
    } while ((int)*(short *)(param_1 + 2) < *(int *)(lVar5 + 0x108));
  }
  if (*(short *)(param_1 + 0x14) < *(short *)(lVar11 + 0x26d0)) {
    do {
      FUN_1803ebc00("Missing EndDisabled()");
      lVar5 = DAT_180ca0a50;
      if ((*(byte *)(lVar11 + 0x1ea8) & 0x40) == 0) {
        *(short *)(DAT_180ca0a50 + 0x26d0) = *(short *)(DAT_180ca0a50 + 0x26d0) + -1;
        iVar12 = *(int *)(lVar5 + 0x2000);
        *(int *)(lVar5 + 0x2000) = iVar12 + -1;
        *(undefined4 *)(lVar5 + 0x1ea8) =
             *(undefined4 *)(*(longlong *)(lVar5 + 0x2008) + (longlong)(iVar12 + -2) * 4);
        *(undefined4 *)(lVar5 + 0xc9c) =
             *(undefined4 *)
              ((longlong)*(int *)(lVar5 + 0x14c8) * 0x88 + -0x18 + *(longlong *)(lVar5 + 0x14d0));
        *(undefined1 *)
         ((longlong)*(int *)(lVar11 + 0x14c8) * 0x88 + -0x1a + *(longlong *)(lVar11 + 0x14d0)) = 0;
      }
      else if (*(short *)(DAT_180ca0a50 + 0x26d0) < 1) {
        FUN_1803ebc00("Calling EndDisabled() too many times!");
      }
      else {
        uVar3 = *(uint *)(DAT_180ca0a50 + 0x1ea8);
        *(short *)(DAT_180ca0a50 + 0x26d0) = *(short *)(DAT_180ca0a50 + 0x26d0) + -1;
        iVar12 = *(int *)(lVar5 + 0x2000);
        *(int *)(lVar5 + 0x2000) = iVar12 + -1;
        uVar4 = *(uint *)(*(longlong *)(lVar5 + 0x2008) + (longlong)(iVar12 + -2) * 4);
        *(uint *)(lVar5 + 0x1ea8) = uVar4;
        if (((uVar3 & 0x40) != 0) && ((uVar4 & 0x40) == 0)) {
          *(undefined4 *)(lVar5 + 0xc9c) = *(undefined4 *)(lVar5 + 0x26cc);
        }
      }
    } while (*(short *)(param_1 + 0x14) < *(short *)(lVar11 + 0x26d0));
  }
  if ((int)*(short *)(param_1 + 6) < *(int *)(lVar11 + 0x1fc0)) {
    do {
      FUN_1803ebc00("Missing PopStyleColor()");
      lVar5 = DAT_180ca0a50;
      iVar12 = *(int *)(DAT_180ca0a50 + 0x1fc0);
      if (0 < iVar12) {
        iVar14 = 1;
        goto LAB_1803eba20;
      }
      FUN_1803ebc00("Calling PopStyleColor() too many times!");
      iVar14 = *(int *)(lVar5 + 0x1fc0);
      iVar12 = iVar14;
      for (; 0 < iVar14; iVar14 = iVar14 + -1) {
LAB_1803eba20:
        puVar1 = (undefined4 *)(*(longlong *)(lVar5 + 0x1fc8) + -0x10 + (longlong)iVar12 * 0x14);
        uVar15 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar2 = (undefined4 *)
                 (lVar5 + 0xde0 +
                 (longlong)*(int *)(*(longlong *)(lVar5 + 0x1fc8) + -0x14 + (longlong)iVar12 * 0x14)
                 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar15;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        iVar12 = *(int *)(lVar5 + 0x1fc0) + -1;
        *(int *)(lVar5 + 0x1fc0) = iVar12;
      }
    } while ((int)*(short *)(param_1 + 6) < *(int *)(lVar11 + 0x1fc0));
  }
  if ((int)*(short *)(param_1 + 0x10) < *(int *)(lVar11 + 0x2000)) {
    do {
      FUN_1803ebc00("Missing PopItemFlag()");
      lVar5 = DAT_180ca0a50;
      iVar12 = *(int *)(DAT_180ca0a50 + 0x2000);
      if (iVar12 < 2) {
        FUN_1803ebc00("Calling PopItemFlag() too many times!");
      }
      else {
        *(int *)(DAT_180ca0a50 + 0x2000) = iVar12 + -1;
        *(undefined4 *)(lVar5 + 0x1ea8) =
             *(undefined4 *)(*(longlong *)(lVar5 + 0x2008) + (longlong)(iVar12 + -2) * 4);
      }
    } while ((int)*(short *)(param_1 + 0x10) < *(int *)(lVar11 + 0x2000));
  }
  if ((int)*(short *)(param_1 + 8) < *(int *)(lVar11 + 0x1fd0)) {
    do {
      FUN_1803ebc00("Missing PopStyleVar()");
      FUN_1803d8a40(1);
    } while ((int)*(short *)(param_1 + 8) < *(int *)(lVar11 + 0x1fd0));
  }
  if ((int)*(short *)(param_1 + 10) < *(int *)(lVar11 + 0x1fe0)) {
    do {
      FUN_1803ebc00("Missing PopFont()");
      lVar5 = DAT_180ca0a50;
      lVar13 = (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0);
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        lVar8 = *(longlong *)(DAT_180ca0a50 + 0x1fe8);
        FUN_1803e8680(*(undefined8 *)(lVar8 + -0x10 + lVar13 * 0x10),
                      *(undefined4 *)(lVar8 + -8 + lVar13 * 0x10),
                      *(undefined4 *)(lVar8 + -4 + lVar13 * 0x10));
        *(int *)(lVar5 + 0x1fe0) = *(int *)(lVar5 + 0x1fe0) + -1;
      }
    } while ((int)*(short *)(param_1 + 10) < *(int *)(lVar11 + 0x1fe0));
  }
  if ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar11 + 0x1ff0)) {
    do {
      FUN_1803ebc00("Missing PopFocusScope()");
      lVar5 = DAT_180ca0a50;
      iVar12 = *(int *)(DAT_180ca0a50 + 0x1ff0);
      if (*(short *)(*(longlong *)(DAT_180ca0a50 + 0x28e8) + 0xc) < iVar12) {
        *(int *)(DAT_180ca0a50 + 0x1ff0) = iVar12 + -1;
        if (iVar12 + -1 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined4 *)(*(longlong *)(lVar5 + 0x1ff8) + (longlong)(iVar12 + -2) * 8);
        }
        *(undefined4 *)(lVar5 + 0x1ea4) = uVar15;
      }
      else {
        FUN_1803ebc00("Calling PopFocusScope() too many times!");
      }
    } while ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar11 + 0x1ff0));
  }
  return;
}



/* ===== 1803ebc00 FUN_1803ebc00 ===== */

undefined1 FUN_1803ebc00(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  float local_res10;
  float local_res14;
  
  lVar3 = DAT_180ca0a50;
  lVar2 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if (*(char *)(DAT_180ca0a50 + 0xae) != '\0') {
    if (*(char *)(DAT_180ca0a50 + 0x28c8) != '\0') {
      if ((*(byte *)(DAT_180ca0a50 + 0x28f4) & 1) == 0) {
        *(int *)(DAT_180ca0a50 + 0x2920) = *(int *)(DAT_180ca0a50 + 0x2920) + 1;
      }
      else {
        FUN_1803f5060("[imgui-error] (current settings: Assert=%d, Log=%d, Tooltip=%d)\n",
                      *(undefined1 *)(DAT_180ca0a50 + 0xad),*(char *)(DAT_180ca0a50 + 0xae),
                      *(undefined1 *)(DAT_180ca0a50 + 0xaf));
      }
    }
    if ((*(byte *)(lVar3 + 0x28f4) & 1) == 0) {
      *(int *)(lVar3 + 0x2920) = *(int *)(lVar3 + 0x2920) + 1;
    }
    else if (lVar2 == 0) {
      FUN_1803f5060("[imgui-error] In window \'%s\': %s\n",&DAT_1808a81dc,param_1);
    }
    else {
      FUN_1803f5060("[imgui-error] In window \'%s\': %s\n",*(undefined8 *)(lVar2 + 8),param_1);
    }
  }
  *(undefined1 *)(lVar3 + 0x28c8) = 0;
  if (*(char *)(lVar3 + 0xaf) != '\0') {
    if (*(char *)(lVar3 + 1) != '\0') {
      cVar4 = FUN_1803ec080();
      if (cVar4 != '\0') {
        iVar1 = *(int *)(lVar3 + 0x28cc);
        if (iVar1 < 0x14) {
          if (lVar2 == 0) {
            FUN_180414bb0("In window \'%s\': %s",&DAT_1808a81dc,param_1);
          }
          else {
            FUN_180414bb0("In window \'%s\': %s",*(undefined8 *)(lVar2 + 8),param_1);
            if ((*(char *)(lVar2 + 0xd5) == '\0') || (*(char *)(lVar2 + 0xcd) != '\0')) {
              uVar5 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),1,"##Foreground");
              local_res10 = *(float *)(lVar2 + 0x30) + *(float *)(lVar2 + 0x28);
              local_res14 = *(float *)(lVar2 + 0x34) + *(float *)(lVar2 + 0x2c);
              FUN_1803fe480(uVar5,(float *)(lVar2 + 0x28),&local_res10,0xff0000ff,0,DAT_1808ac34c,0)
              ;
            }
          }
          iVar1 = *(int *)(lVar3 + 0x28cc);
        }
        if (iVar1 == 0x14) {
          FUN_180414bb0("(and more errors)");
        }
        FUN_1803e75b0();
      }
    }
    *(int *)(lVar3 + 0x28cc) = *(int *)(lVar3 + 0x28cc) + 1;
  }
  if (*(code **)(lVar3 + 0x28b0) != (code *)0x0) {
    (**(code **)(lVar3 + 0x28b0))(lVar3,*(undefined8 *)(lVar3 + 0x28b8),param_1);
  }
  return *(undefined1 *)(lVar3 + 0xad);
}



/* ===== 1803ebdf0 FUN_1803ebdf0 ===== */

void FUN_1803ebdf0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  float fVar9;
  undefined8 local_res8;
  
  lVar3 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x1558) != 0) {
    if (*(char *)(DAT_180ca0a50 + 300) == '\0') {
      *(undefined4 *)(DAT_180ca0a50 + 0x28f0) = *(undefined4 *)(DAT_180ca0a50 + 0x1568);
    }
    if (*(char *)(lVar3 + 0x2931) == '\0') {
      cVar4 = FUN_1803ec080();
      if (cVar4 != '\0') {
        FUN_180414bb0("Programmer error: %d visible items with conflicting ID!",
                      *(undefined4 *)(lVar3 + 0x28f0));
        FUN_180414ea0(
                     "Code should use PushID()/PopID() in loops, or append \"##xx\" to same-label identifiers!"
                     );
        FUN_180414ea0(
                     "Empty label e.g. Button(\"\") == same ID as parent widget/node. Use Button(\"##xx\") instead!"
                     );
        FUN_180414ea0(
                     "Set io.ConfigDebugHighlightIdConflicts=false to disable this warning in non-programmers builds."
                     );
        lVar2 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
        if (*(char *)(lVar2 + 0xd1) == '\0') {
          iVar5 = 2 - (uint)(*(int *)(lVar2 + 0x1d4) != 0);
          if (*(longlong *)(lVar2 + 0x1c8) != 0) {
            iVar5 = 6 - (uint)(*(int *)(lVar2 + 0x1d4) != 0);
          }
          fVar9 = *(float *)(DAT_180ca0a50 + 0xd9c);
          if (*(float *)(DAT_180ca0a50 + 0xd9c) <= DAT_1808ac34c) {
            fVar9 = DAT_1808ac34c;
          }
          FUN_1804176f0(iVar5,fVar9);
        }
        if (*(char *)(lVar3 + 0xb2) == '\0') {
          pcVar7 = "(Hold Ctrl to: ";
        }
        else {
          FUN_180414bb0("(Hold Ctrl to: use ");
          FUN_1803ec6c0(0,0);
          lVar2 = DAT_180ca0a50;
          local_res8 = 0;
          uVar1 = *(undefined4 *)(DAT_180ca0a50 + 0xce0);
          *(undefined4 *)(DAT_180ca0a50 + 0xce0) = 0;
          cVar4 = FUN_180415ad0("Item Picker",&local_res8,0x8000);
          *(undefined4 *)(lVar2 + 0xce0) = uVar1;
          if (cVar4 != '\0') {
            *(undefined1 *)(DAT_180ca0a50 + 0x2931) = 1;
          }
          FUN_1803ec6c0(0,0);
          pcVar7 = " to break in item call-stack, or ";
        }
        FUN_180414bb0(pcVar7);
        FUN_1803ec6c0(0,0);
        FUN_1804173e0();
        FUN_1803ec6c0(0,0);
        FUN_180414bb0(&DAT_1806e1ac0);
        FUN_1803e75b0();
      }
    }
  }
  if (0 < *(int *)(lVar3 + 0x28cc)) {
    cVar4 = FUN_1803ec080();
    if (cVar4 != '\0') {
      lVar2 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
      if (*(char *)(lVar2 + 0xd1) == '\0') {
        iVar5 = *(int *)(lVar2 + 0x1d4);
        iVar6 = 2 - (uint)(iVar5 != 0);
        if (*(longlong *)(lVar2 + 0x1c8) != 0) {
          bVar8 = iVar5 != 0;
          iVar5 = -iVar5;
          iVar6 = 6 - (uint)bVar8;
        }
        fVar9 = *(float *)(DAT_180ca0a50 + 0xd9c);
        if (*(float *)(DAT_180ca0a50 + 0xd9c) <= DAT_1808ac34c) {
          fVar9 = DAT_1808ac34c;
        }
        FUN_1804176f0(iVar6,fVar9,iVar5);
      }
      FUN_180414bb0("(Hold Ctrl to: ");
      FUN_1803ec6c0(0,0);
      lVar2 = DAT_180ca0a50;
      local_res8 = 0;
      uVar1 = *(undefined4 *)(DAT_180ca0a50 + 0xce0);
      *(undefined4 *)(DAT_180ca0a50 + 0xce0) = 0;
      cVar4 = FUN_180415ad0("Enable Asserts",&local_res8,0x8000);
      *(undefined4 *)(lVar2 + 0xce0) = uVar1;
      if (cVar4 != '\0') {
        *(undefined1 *)(lVar3 + 0xad) = 1;
      }
      FUN_1803ec6c0(0,0);
      FUN_180414bb0(&DAT_1806e1ac0);
      FUN_1803e75b0();
    }
  }
  return;
}



/* ===== 1803ec080 FUN_1803ec080 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1803ec080(void)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  byte bVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  char *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar7 = DAT_180ca0a50;
  pcVar12 = "##Tooltip_Error";
  uVar11 = 0xffffffff;
  bVar8 = 0x23;
  do {
    pcVar12 = pcVar12 + 1;
    if (((bVar8 == 0x23) && (*pcVar12 == 0x23)) && (pcVar12[1] == 0x23)) {
      uVar11 = 0xffffffff;
      pcVar12 = pcVar12 + 2;
    }
    else {
      uVar11 = (ulonglong)
               ((uint)(uVar11 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar11 & 0xff ^ (ulonglong)bVar8) * 4));
    }
    bVar8 = *pcVar12;
  } while (bVar8 != 0);
  lVar10 = FUN_1803e1e50(~(uint)uVar11);
  if (((*(char *)(lVar7 + 300) == '\0') || (lVar10 == 0)) || (*(char *)(lVar10 + 0xcd) == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  fVar1 = *(float *)(lVar7 + 0xe20);
  fVar16 = (float)*(undefined8 *)(lVar7 + 0xe24);
  fVar17 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0xe24) >> 0x20);
  fVar2 = *(float *)(lVar7 + 0xe2c);
  FUN_1803f64b0(lVar7 + 0x1fc0);
  if (*(int *)(lVar7 + 0x1fbc) != 4) {
    fVar13 = (0.0 - fVar16) * _DAT_1808ad950;
    fVar14 = (0.0 - fVar17) * _UNK_1808ad954;
    fVar15 = (DAT_1808ac34c - fVar2) * DAT_1808ac0e8;
    *(float *)(lVar7 + 0xe20) = (DAT_1808ac34c - fVar1) * DAT_1808ac0e8 + fVar1;
    *(ulonglong *)(lVar7 + 0xe24) = CONCAT44(fVar14 + fVar17,fVar13 + fVar16);
    *(float *)(lVar7 + 0xe2c) = fVar15 + fVar2;
  }
  lVar10 = DAT_180ca0a50;
  if (bVar6) {
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    uVar3 = *(undefined8 *)(lVar7 + 0x28c0);
    *(undefined8 *)(lVar10 + 0x1f50) = 0;
    *(undefined8 *)(lVar10 + 0x1f48) = uVar3;
    *(undefined4 *)(lVar10 + 0x1f3c) = 1;
  }
  cVar9 = FUN_1803e4f20("##Tooltip_Error",0,0x200016f);
  FUN_1803d87f0(1);
  lVar10 = DAT_180ca0a50;
  if (cVar9 == '\0') {
    FUN_1803e75b0();
  }
  else if (*(short *)(*(longlong *)(lVar7 + 0x14f8) + 0xda) == 1) {
    lVar5 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    *(undefined1 *)(lVar5 + 0xce) = 1;
    if (*(char *)(*(longlong *)(lVar10 + 0x14f8) + 0xd1) == '\0') {
      pcVar12 = "MESSAGE FROM DEAR IMGUI";
      do {
        if ((*pcVar12 == '\0') || ((*pcVar12 == '#' && (pcVar12[1] == '#')))) break;
        pcVar12 = pcVar12 + 1;
      } while (pcVar12 != (char *)0xffffffffffffffff);
      FUN_180417ca0(lVar5,"MESSAGE FROM DEAR IMGUI",pcVar12,0);
      lVar10 = DAT_180ca0a50;
    }
    FUN_1803eef40(*(undefined8 *)(lVar7 + 0x14f8));
    FUN_1803eeeb0(*(undefined8 *)(lVar7 + 0x14f8));
    uVar4 = *(undefined4 *)(*(longlong *)(lVar10 + 0x14f8) + 0x28);
    *(undefined4 *)(lVar7 + 0x28c4) = *(undefined4 *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c);
    *(undefined4 *)(lVar7 + 0x28c0) = uVar4;
  }
  return cVar9;
}



/* ===== 1803ec2f0 FUN_1803ec2f0 ===== */

ulonglong FUN_1803ec2f0(float *param_1,int param_2,float *param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char cVar11;
  uint uVar12;
  float *pfVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar9 = DAT_180ca0a50;
  pfVar13 = param_1;
  if (param_3 != (float *)0x0) {
    pfVar13 = param_3;
  }
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  *(int *)(DAT_180ca0a50 + 0x1ee8) = param_2;
  uVar7 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(uVar9 + 0x1ef4) = *(undefined8 *)param_1;
  *(undefined8 *)(uVar9 + 0x1efc) = uVar7;
  fVar3 = *pfVar13;
  fVar4 = pfVar13[1];
  fVar5 = pfVar13[2];
  fVar6 = pfVar13[3];
  param_4 = *(uint *)(uVar9 + 0x1eb4) | *(uint *)(uVar9 + 0x1ea8) | param_4;
  uVar14 = (ulonglong)param_4;
  *(undefined4 *)(uVar9 + 0x1ef0) = 0;
  *(uint *)(uVar9 + 0x1eec) = param_4;
  *(float *)(uVar9 + 0x1f04) = fVar3;
  *(float *)(uVar9 + 0x1f08) = fVar4;
  *(float *)(uVar9 + 0x1f0c) = fVar5;
  *(float *)(uVar9 + 0x1f10) = fVar6;
  if (param_2 != 0) {
    if (*(int *)(uVar9 + 0x1578) == param_2) {
      *(int *)(uVar9 + 0x157c) = param_2;
    }
    if (*(int *)(uVar9 + 0x15ac) == param_2) {
      *(undefined1 *)(uVar9 + 0x15b5) = 1;
    }
    uVar15 = uVar9;
    if ((param_4 & 2) == 0) {
      uVar14 = (ulonglong)*(uint *)(lVar1 + 0x170);
      *(ushort *)(lVar1 + 0x176) =
           *(ushort *)(lVar1 + 0x176) | (ushort)(1 << (*(uint *)(lVar1 + 0x170) & 0x1f));
      if ((*(int *)(uVar9 + 0x2064) == param_2) || (*(char *)(uVar9 + 0x20c9) != '\0')) {
        lVar2 = *(longlong *)(uVar9 + 0x2068);
        uVar14 = *(ulonglong *)(lVar1 + 0x3d8);
        if ((*(ulonglong *)(lVar2 + 0x3d8) == uVar14) &&
           ((lVar1 == lVar2 ||
            (uVar12 = *(uint *)(lVar2 + 0x18) | *(uint *)(lVar1 + 0x18), uVar14 = (ulonglong)uVar12,
            (uVar12 >> 8 & 1) != 0)))) {
          uVar14 = FUN_1803efa70();
          uVar15 = DAT_180ca0a50;
        }
      }
    }
    if (((*(byte *)(uVar9 + 0x1eb0) & 4) != 0) && ((*(byte *)(uVar15 + 0x1eec) & 0x40) == 0)) {
      if ((*(uint *)(uVar15 + 0x1ed0) >> 0x12 & 1) != 0) {
        *(uint *)(uVar15 + 0x1ef0) = *(uint *)(uVar15 + 0x1ef0) | 0x400;
        *(undefined4 *)(uVar15 + 0x1f34) = *(undefined4 *)(uVar15 + 0x1ecc);
      }
      uVar14 = FUN_1803eb460(*(undefined4 *)(uVar15 + 0x1ecc),*(uint *)(uVar15 + 0x1ed0) & 0x3fcff,
                             param_2);
      uVar10 = DAT_180ca0a50;
      if (((char)uVar14 != '\0') && (*(int *)(uVar15 + 0x207c) == 0)) {
        *(int *)(uVar15 + 0x207c) = param_2;
        *(undefined4 *)(uVar15 + 0x2088) = 0x11;
        *(int *)(uVar15 + 0x2084) = param_2;
        *(int *)(uVar15 + 0x2080) = param_2;
        *(int *)(uVar10 + 0x20a0) = param_2;
        *(undefined4 *)(uVar10 + 0x20a4) = 0x3dcccccd;
        uVar14 = uVar10;
      }
    }
  }
  *(undefined8 *)(uVar9 + 0x1eb0) = 0;
  if ((((param_1[3] < *(float *)(lVar1 + 0x26c) || param_1[3] == *(float *)(lVar1 + 0x26c)) ||
       (*(float *)(lVar1 + 0x274) < param_1[1] || *(float *)(lVar1 + 0x274) == param_1[1])) ||
      (param_1[2] < *(float *)(lVar1 + 0x268) || param_1[2] == *(float *)(lVar1 + 0x268))) ||
     (*(float *)(lVar1 + 0x270) < *param_1 || *(float *)(lVar1 + 0x270) == *param_1)) {
    bVar8 = false;
    if (((param_2 == 0) ||
        (((param_2 != *(int *)(uVar9 + 0x1578) && (param_2 != *(int *)(uVar9 + 0x15a8))) &&
         ((param_2 != *(int *)(uVar9 + 0x2064) && (param_2 != *(int *)(uVar9 + 0x207c))))))) &&
       (*(char *)(uVar9 + 0x1576) == '\0')) {
      return uVar14 & 0xffffffffffffff00;
    }
  }
  else {
    bVar8 = true;
  }
  if (param_2 != 0) {
    if (param_2 == *(int *)(uVar9 + 0x1eac)) {
      FUN_1803f52e0();
    }
    if (*(int *)(uVar9 + 0x15ac) == param_2) {
      *(undefined4 *)(uVar9 + 0x15b0) = *(undefined4 *)(uVar9 + 4);
    }
  }
  if (bVar8) {
    *(uint *)(uVar9 + 0x1ef0) = *(uint *)(uVar9 + 0x1ef0) | 0x100;
  }
  uVar14 = 1;
  cVar11 = FUN_1803e9740(param_1,param_1 + 2,1);
  if (cVar11 != '\0') {
    *(uint *)(uVar9 + 0x1ef0) = *(uint *)(uVar9 + 0x1ef0) | 1;
  }
  return uVar14 & 0xff;
}



/* ===== 1803ec550 FUN_1803ec550 ===== */

void FUN_1803ec550(float *param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = DAT_180ca0a50;
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if (*(char *)(lVar1 + 0xd1) == '\0') {
    fVar6 = 0.0;
    if ((0.0 <= param_2) && (fVar5 = *(float *)(lVar1 + 0x150) - param_2, 0.0 <= fVar5)) {
      fVar6 = fVar5;
    }
    fVar5 = *(float *)(lVar1 + 0x150);
    if (*(float *)(lVar1 + 0x150) <= param_2) {
      fVar5 = param_2;
    }
    lVar4 = 0x124;
    if (*(char *)(lVar1 + 0x158) == '\0') {
      lVar4 = 0x11c;
    }
    fVar7 = *(float *)(lVar4 + lVar1);
    fVar6 = (*(float *)(lVar1 + 0x11c) - fVar7) + param_1[1] + fVar6;
    fVar8 = *(float *)(lVar1 + 0x118) + *param_1;
    *(float *)(lVar1 + 0x124) = fVar7;
    fVar9 = *(float *)(lVar1 + 0x144);
    if (*(float *)(lVar1 + 0x144) <= fVar6) {
      fVar9 = fVar6;
    }
    *(float *)(lVar1 + 0x120) = fVar8;
    *(float *)(lVar1 + 0x118) =
         (float)(int)(*(float *)(lVar1 + 0x15c) + *(float *)(lVar1 + 0x28) +
                     *(float *)(lVar1 + 0x160));
    fVar6 = *(float *)(lVar3 + 0xcf0);
    fVar2 = *(float *)(lVar1 + 0x130);
    if (*(float *)(lVar1 + 0x130) <= fVar8) {
      fVar2 = fVar8;
    }
    *(float *)(lVar1 + 0x130) = fVar2;
    fVar7 = (float)(int)(fVar7 + fVar9 + fVar6);
    *(float *)(lVar1 + 0x11c) = fVar7;
    fVar7 = fVar7 - *(float *)(lVar3 + 0xcf0);
    *(float *)(lVar1 + 0x14c) = fVar9;
    *(float *)(lVar1 + 0x154) = fVar5;
    *(undefined4 *)(lVar1 + 0x144) = 0;
    *(undefined4 *)(lVar1 + 0x150) = 0;
    fVar6 = *(float *)(lVar1 + 0x134);
    if (*(float *)(lVar1 + 0x134) <= fVar7) {
      fVar6 = fVar7;
    }
    *(undefined2 *)(lVar1 + 0x158) = 0;
    *(float *)(lVar1 + 0x134) = fVar6;
    if (*(int *)(lVar1 + 0x1d4) == 0) {
      FUN_1803ec6c0();
    }
  }
  return;
}



/* ===== 1803ec6c0 FUN_1803ec6c0 ===== */

void FUN_1803ec6c0(float param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if (*(char *)(lVar1 + 0xd1) == '\0') {
    if (param_1 == 0.0) {
      if (param_2 < 0.0) {
        param_2 = *(float *)(DAT_180ca0a50 + 0xcec);
      }
      param_2 = param_2 + *(float *)(lVar1 + 0x120);
    }
    else {
      fVar2 = 0.0;
      if (0.0 <= param_2) {
        fVar2 = param_2;
      }
      param_2 = (*(float *)(lVar1 + 0x28) - *(float *)(lVar1 + 0x98)) + param_1 + fVar2 +
                *(float *)(lVar1 + 0x164) + *(float *)(lVar1 + 0x160);
    }
    *(float *)(lVar1 + 0x118) = param_2;
    *(undefined4 *)(lVar1 + 0x11c) = *(undefined4 *)(lVar1 + 0x124);
    *(undefined8 *)(lVar1 + 0x140) = *(undefined8 *)(lVar1 + 0x148);
    *(undefined4 *)(lVar1 + 0x150) = *(undefined4 *)(lVar1 + 0x154);
    *(undefined1 *)(lVar1 + 0x158) = 1;
  }
  return;
}



/* ===== 1803ec770 FUN_1803ec770 ===== */

void FUN_1803ec770(float param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = DAT_180ca0a50;
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  iVar3 = *(int *)(lVar1 + 0x1fc);
  if (*(int *)(lVar1 + 0x1f8) == iVar3) {
    iVar4 = *(int *)(lVar1 + 0x1f8) + 1;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_18007e1d0(lVar1 + 0x1f8,iVar4);
  }
  *(undefined4 *)(*(longlong *)(lVar1 + 0x200) + (longlong)*(int *)(lVar1 + 0x1f8) * 4) =
       *(undefined4 *)(lVar1 + 0x1e8);
  *(int *)(lVar1 + 0x1f8) = *(int *)(lVar1 + 0x1f8) + 1;
  if (param_1 == 0.0) {
    param_1 = *(float *)(lVar1 + 0x1ec);
  }
  *(float *)(lVar1 + 0x1e8) = param_1;
  *(uint *)(lVar2 + 0x1eb0) = *(uint *)(lVar2 + 0x1eb0) & 0xfffffffe;
  return;
}



/* ===== 1803ec830 FUN_1803ec830 ===== */

void FUN_1803ec830(void)

{
  return;
}



/* ===== 1803ec8b0 FUN_1803ec8b0 ===== */

ulonglong * FUN_1803ec8b0(ulonglong *param_1,ulonglong param_2,float param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong local_res8;
  
  fVar7 = (float)param_2;
  fVar8 = (float)(param_2 >> 0x20);
  if (fVar7 < 0.0) {
LAB_1803ec8e8:
    lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    if ((*(longlong *)(lVar1 + 0x1c8) == 0) && (*(longlong *)(DAT_180ca0a50 + 0x2360) == 0)) {
      lVar5 = 0x280;
      lVar6 = 0x284;
    }
    else {
      lVar5 = 0x250;
      lVar6 = 0x254;
    }
    fVar10 = *(float *)(lVar5 + lVar1) - *(float *)(lVar1 + 0x118);
    fVar9 = *(float *)(lVar6 + lVar1) - *(float *)(lVar1 + 0x11c);
  }
  else {
    fVar10 = 0.0;
    fVar9 = 0.0;
    if (fVar8 < 0.0) goto LAB_1803ec8e8;
  }
  if (fVar7 == 0.0) {
LAB_1803ec961:
    local_res8 = CONCAT44(fVar8,param_3);
  }
  else {
    local_res8 = param_2;
    if (fVar7 < 0.0) {
      param_3 = DAT_1808ac710;
      if (DAT_1808ac710 <= fVar10 + fVar7) {
        param_3 = fVar10 + fVar7;
      }
      goto LAB_1803ec961;
    }
  }
  if (fVar8 == 0.0) {
    auVar3._4_8_ = local_res8 & 0xffffffff;
    auVar3._0_4_ = param_4;
    uVar2 = auVar3._0_8_;
  }
  else {
    if (0.0 <= fVar8) goto LAB_1803ec9a0;
    fVar7 = DAT_1808ac710;
    if (DAT_1808ac710 <= fVar9 + fVar8) {
      fVar7 = fVar9 + fVar8;
    }
    auVar4._4_8_ = local_res8 & 0xffffffff;
    auVar4._0_4_ = fVar7;
    uVar2 = auVar4._0_8_;
  }
  local_res8 = CONCAT44((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
LAB_1803ec9a0:
  *param_1 = local_res8;
  return param_1;
}



/* ===== 1803ec9c0 FUN_1803ec9c0 ===== */

void FUN_1803ec9c0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  lVar3 = DAT_180ca0a50;
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  FUN_1803f60b0(DAT_180ca0a50 + 0x2010,*(int *)(DAT_180ca0a50 + 0x2010) + 1);
  lVar2 = *(longlong *)(lVar3 + 0x2018);
  lVar4 = (longlong)*(int *)(lVar3 + 0x2010) * 0x3c;
  *(undefined4 *)(lVar4 + -0x3c + lVar2) = *(undefined4 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar4 + -0x38 + lVar2) = *(undefined8 *)(lVar1 + 0x118);
  *(undefined8 *)(lVar4 + -0x28 + lVar2) = *(undefined8 *)(lVar1 + 0x120);
  *(undefined8 *)(lVar4 + -0x30 + lVar2) = *(undefined8 *)(lVar1 + 0x130);
  *(undefined4 *)(lVar4 + -0x20 + lVar2) = *(undefined4 *)(lVar1 + 0x15c);
  *(undefined4 *)(lVar4 + -0x1c + lVar2) = *(undefined4 *)(lVar1 + 0x164);
  *(undefined8 *)(lVar4 + -0x18 + lVar2) = *(undefined8 *)(lVar1 + 0x140);
  *(undefined4 *)(lVar4 + -0x10 + lVar2) = *(undefined4 *)(lVar1 + 0x150);
  *(undefined4 *)(lVar4 + -0xc + lVar2) = *(undefined4 *)(lVar3 + 0x157c);
  *(bool *)(lVar4 + -6 + lVar2) = *(int *)(lVar3 + 0x1560) != 0;
  *(undefined1 *)(lVar4 + -5 + lVar2) = *(undefined1 *)(lVar1 + 0x158);
  *(undefined1 *)(lVar4 + -8 + lVar2) = *(undefined1 *)(lVar3 + 0x1577);
  *(undefined1 *)(lVar4 + -7 + lVar2) = *(undefined1 *)(lVar3 + 0x15b5);
  *(undefined1 *)(lVar4 + -4 + lVar2) = 1;
  *(undefined8 *)(lVar1 + 0x140) = 0;
  fVar5 = (*(float *)(lVar1 + 0x118) - *(float *)(lVar1 + 0x28)) - *(float *)(lVar1 + 0x160);
  *(float *)(lVar1 + 0x164) = fVar5;
  *(float *)(lVar1 + 0x15c) = fVar5;
  *(undefined8 *)(lVar1 + 0x130) = *(undefined8 *)(lVar1 + 0x118);
  if (*(char *)(lVar3 + 0x2868) != '\0') {
    *(undefined4 *)(lVar3 + 0x28a0) = 0xff7fffff;
  }
  return;
}



/* ===== 1803ecb10 FUN_1803ecb10 ===== */

void FUN_1803ecb10(void)

{
  uint *puVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  char cVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  lVar13 = DAT_180ca0a50;
  lVar6 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  lVar7 = *(longlong *)(DAT_180ca0a50 + 0x2018);
  lVar16 = ((longlong)*(int *)(DAT_180ca0a50 + 0x2010) + -1) * 0x3c;
  if ((*(char *)(lVar6 + 0x159) != '\0') &&
     (((*(undefined1 *)(lVar6 + 0x159) = 0, *(float *)(lVar6 + 0x130) < *(float *)(lVar6 + 0x118) ||
       (*(float *)(lVar6 + 0x134) < *(float *)(lVar6 + 0x11c))) && (*(char *)(lVar6 + 0xd1) == '\0')
      ))) {
    FUN_1803ebc00(
                 "Code uses SetCursorPos()/SetCursorScreenPos() to extend window/parent boundaries.\nPlease submit an item e.g. Dummy() afterwards in order to grow window/parent boundaries."
                 );
  }
  fVar3 = *(float *)(lVar16 + 4 + lVar7);
  fVar22 = *(float *)(lVar6 + 0x134);
  if (*(float *)(lVar6 + 0x134) <= *(float *)(lVar13 + 0x1f00)) {
    fVar22 = *(float *)(lVar13 + 0x1f00);
  }
  fVar21 = *(float *)(lVar6 + 0x130);
  if (*(float *)(lVar6 + 0x130) <= *(float *)(lVar13 + 0x1efc)) {
    fVar21 = *(float *)(lVar13 + 0x1efc);
  }
  fVar4 = *(float *)(lVar16 + 8 + lVar7);
  fVar19 = *(float *)(lVar16 + 8 + lVar7);
  if (fVar22 <= fVar19) {
    fVar22 = fVar19;
  }
  *(undefined8 *)(lVar6 + 0x118) = *(undefined8 *)(lVar16 + 4 + lVar7);
  if (fVar21 <= fVar3) {
    fVar21 = fVar3;
  }
  *(undefined8 *)(lVar6 + 0x120) = *(undefined8 *)(lVar16 + 0x14 + lVar7);
  fVar19 = *(float *)(lVar16 + 0xc + lVar7);
  fVar20 = *(float *)(lVar16 + 0x10 + lVar7);
  if (fVar19 <= fVar21) {
    fVar19 = fVar21;
  }
  if (fVar20 <= fVar22) {
    fVar20 = fVar22;
  }
  *(float *)(lVar6 + 0x130) = fVar19;
  *(float *)(lVar6 + 0x134) = fVar20;
  *(undefined4 *)(lVar6 + 0x15c) = *(undefined4 *)(lVar16 + 0x1c + lVar7);
  *(undefined4 *)(lVar6 + 0x164) = *(undefined4 *)(lVar16 + 0x20 + lVar7);
  *(undefined8 *)(lVar6 + 0x140) = *(undefined8 *)(lVar16 + 0x24 + lVar7);
  *(undefined4 *)(lVar6 + 0x150) = *(undefined4 *)(lVar16 + 0x2c + lVar7);
  *(undefined1 *)(lVar6 + 0x158) = *(undefined1 *)(lVar16 + 0x37 + lVar7);
  if (*(char *)(lVar13 + 0x2868) != '\0') {
    *(undefined4 *)(lVar13 + 0x28a0) = 0xff7fffff;
  }
  if (*(char *)(lVar16 + 0x38 + lVar7) == '\0') {
    *(int *)(lVar13 + 0x2010) = *(int *)(lVar13 + 0x2010) + -1;
    return;
  }
  fVar19 = *(float *)(lVar16 + 0x2c + lVar7);
  fVar20 = *(float *)(lVar6 + 0x154);
  if (*(float *)(lVar6 + 0x154) <= fVar19) {
    fVar20 = fVar19;
  }
  local_res8 = fVar21 - fVar3;
  *(float *)(lVar6 + 0x150) = fVar20;
  local_resc = fVar22 - fVar4;
  local_78 = fVar3;
  fStack_74 = fVar4;
  fStack_70 = fVar21;
  fStack_6c = fVar22;
  FUN_1803ec550(&local_res8,DAT_1808acda0);
  lVar17 = DAT_180ca0a50;
  uVar9 = CONCAT44(fStack_74,local_78);
  uVar10 = CONCAT44(fStack_6c,fStack_70);
  puVar1 = (uint *)(DAT_180ca0a50 + 0x1eb4);
  puVar2 = (uint *)(DAT_180ca0a50 + 0x1ea8);
  *(undefined4 *)(DAT_180ca0a50 + 0x1ee8) = 0;
  *(uint *)(lVar17 + 0x1eec) = *puVar1 | *puVar2 | 1;
  lVar8 = *(longlong *)(lVar17 + 0x14f8);
  *(undefined8 *)(lVar17 + 0x1ef4) = uVar9;
  *(undefined8 *)(lVar17 + 0x1efc) = uVar10;
  *(undefined4 *)(lVar17 + 0x1ef0) = 0;
  *(undefined8 *)(lVar17 + 0x1f04) = uVar9;
  *(undefined8 *)(lVar17 + 0x1f0c) = uVar10;
  *(undefined8 *)(lVar17 + 0x1eb0) = 0;
  if (((fVar22 < *(float *)(lVar8 + 0x26c) || fVar22 == *(float *)(lVar8 + 0x26c)) ||
      (*(float *)(lVar8 + 0x274) <= fVar4)) ||
     ((fVar21 < *(float *)(lVar8 + 0x268) || fVar21 == *(float *)(lVar8 + 0x268) ||
      (*(float *)(lVar8 + 0x270) <= fVar3)))) {
    if (*(char *)(lVar17 + 0x1576) != '\0') {
      uVar18 = 1;
      goto LAB_1803ecd93;
    }
  }
  else {
    *(undefined4 *)(lVar17 + 0x1ef0) = 0x100;
    uVar18 = 0x101;
LAB_1803ecd93:
    cVar14 = FUN_1803e9740(&local_78,&fStack_70,1);
    if (cVar14 != '\0') {
      *(undefined4 *)(lVar17 + 0x1ef0) = uVar18;
    }
  }
  iVar15 = *(int *)(lVar13 + 0x1578);
  if (((*(int *)(lVar16 + 0x30 + lVar7) == iVar15) || (*(int *)(lVar13 + 0x157c) != iVar15)) ||
     (iVar15 == 0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if ((*(char *)(lVar16 + 0x35 + lVar7) == '\0') && (*(char *)(lVar13 + 0x15b5) == '\x01')) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  if (!bVar11) {
    if (!bVar12) goto LAB_1803ecdf8;
    iVar15 = *(int *)(lVar13 + 0x15ac);
  }
  *(int *)(lVar13 + 0x1ee8) = iVar15;
LAB_1803ecdf8:
  *(undefined8 *)(lVar13 + 0x1ef4) = uVar9;
  *(undefined8 *)(lVar13 + 0x1efc) = uVar10;
  if ((*(char *)(lVar16 + 0x36 + lVar7) == '\0') && (*(int *)(lVar13 + 0x1560) != 0)) {
    *(uint *)(lVar13 + 0x1ef0) = *(uint *)(lVar13 + 0x1ef0) | 0x80;
  }
  if ((*(char *)(lVar13 + 0x1577) != '\0') && (*(char *)(lVar16 + 0x34 + lVar7) == '\0')) {
    *(uint *)(lVar13 + 0x1ef0) = *(uint *)(lVar13 + 0x1ef0) | 4;
  }
  uVar5 = *(uint *)(lVar13 + 0x1ef0);
  *(uint *)(lVar13 + 0x1ef0) = uVar5 | 0x20;
  if (bVar12) {
    *(uint *)(lVar13 + 0x1ef0) = uVar5 | 0x60;
  }
  *(int *)(lVar13 + 0x2010) = *(int *)(lVar13 + 0x2010) + -1;
  if (*(char *)(lVar13 + 0x1fb8) != '\0') {
    lVar6 = *(longlong *)(lVar6 + 0x2c8);
    if ((*(byte *)(lVar6 + 0x30) & 1) == 0) {
      local_res8 = DAT_1808ac1e0;
    }
    else {
      local_res8 = DAT_1808ac1f4;
    }
    local_resc = fVar22 - local_res8;
    local_res8 = fVar21 - local_res8;
    local_res10 = fVar3 + DAT_1808ac1f4;
    local_res14 = fVar4 + DAT_1808ac1f4;
    FUN_1803fe160(lVar6,&local_res10,&local_res8,0,0);
    FUN_1803fc600(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),0xffff00ff,
                  DAT_1808ac34c,0x200);
    *(undefined4 *)(lVar6 + 0x50) = 0;
  }
  return;
}



/* ===== 1803ecf50 FUN_1803ecf50 ===== */

float * FUN_1803ecf50(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x98);
  fVar4 = DAT_1808acd08;
  fVar5 = *(float *)(param_2 + 0xa8);
  fVar7 = *(float *)(param_2 + 0x84);
  fVar1 = *(float *)(param_2 + 0x74);
  fVar9 = *(float *)(param_2 + 0x7c);
  if (fVar5 < DAT_1808acd08) {
    fVar2 = *(float *)(param_2 + 0xb8);
    fVar8 = *(float *)(param_2 + 0x80) + *(float *)(param_2 + 0x70) + *(float *)(param_2 + 0x78);
    fVar3 = *(float *)(param_2 + 0xb0);
    if (0.0 < fVar2) {
      if (fVar2 + 0.0 < fVar5) {
        fVar6 = (*(float *)(param_2 + 0xa0) + *(float *)(param_2 + 0x38)) - fVar8;
        if (fVar6 - fVar2 <= fVar5) {
          fVar5 = (fVar6 - fVar5) * fVar3 + fVar5;
        }
      }
      else {
        fVar5 = (fVar5 - 0.0) * fVar3 + 0.0;
      }
    }
    *param_1 = fVar5 - (*(float *)(param_2 + 0x38) - fVar8) * fVar3;
  }
  fVar2 = DAT_1808ac1f4;
  fVar5 = *param_1;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar5 = (float)(longlong)(fVar5 + DAT_1808ac1f4);
  *param_1 = fVar5;
  if ((*(char *)(param_2 + 0xcf) == '\0') && (*(char *)(param_2 + 0xd1) == '\0')) {
    if (*(float *)(param_2 + 0xa0) <= fVar5) {
      fVar5 = *(float *)(param_2 + 0xa0);
    }
    *param_1 = fVar5;
  }
  fVar5 = *(float *)(param_2 + 0xac);
  if (fVar5 < fVar4) {
    fVar4 = *(float *)(param_2 + 0xbc);
    fVar3 = *(float *)(param_2 + 0xb4);
    fVar9 = fVar7 + fVar1 + fVar9;
    if (0.0 < fVar4) {
      if (fVar4 + 0.0 < fVar5) {
        fVar7 = (*(float *)(param_2 + 0xa4) + *(float *)(param_2 + 0x3c)) - fVar9;
        if (fVar7 - fVar4 <= fVar5) {
          fVar5 = (fVar7 - fVar5) * fVar3 + fVar5;
        }
      }
      else {
        fVar5 = (fVar5 - 0.0) * fVar3 + 0.0;
      }
    }
    param_1[1] = fVar5 - (*(float *)(param_2 + 0x3c) - fVar9) * fVar3;
  }
  fVar5 = param_1[1];
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar5 = (float)(longlong)(fVar5 + fVar2);
  param_1[1] = fVar5;
  if ((*(char *)(param_2 + 0xcf) == '\0') && (*(char *)(param_2 + 0xd1) == '\0')) {
    if (*(float *)(param_2 + 0xa4) <= fVar5) {
      fVar5 = *(float *)(param_2 + 0xa4);
    }
    param_1[1] = fVar5;
  }
  return param_1;
}



/* ===== 1803ed160 FUN_1803ed160 ===== */

float * FUN_1803ed160(float *param_1,longlong param_2,float *param_3,ulonglong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res8;
  float local_resc;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  
  lVar8 = DAT_180ca0a50;
  fVar16 = *(float *)(param_2 + 0x230) + DAT_1808ac34c;
  fVar18 = *(float *)(param_2 + 0x234) + DAT_1808ac34c;
  fVar13 = *(float *)(param_2 + 0x84);
  fVar14 = *(float *)(param_2 + 0x80);
  uVar10 = param_4 & 0xffffffff;
  fVar15 = fVar14 + (*(float *)(param_2 + 0x228) - DAT_1808ac34c);
  if (fVar16 <= fVar15) {
    fVar15 = fVar16;
  }
  fVar17 = fVar13 + (*(float *)(param_2 + 0x22c) - DAT_1808ac34c);
  if (fVar18 <= fVar17) {
    fVar17 = fVar18;
  }
  if (((param_4 & 0x15) == 0) &&
     (uVar10 = (ulonglong)((uint)param_4 | 1), *(char *)(param_2 + 200) == '\0')) {
    uVar10 = param_4 & 0xffffffff;
  }
  if ((uVar10 & 0x2a) == 0) {
    uVar12 = 2;
    if (*(char *)(param_2 + 0xd3) != '\0') {
      uVar12 = 0x20;
    }
    uVar10 = (ulonglong)(uVar12 | (uint)uVar10);
  }
  fVar1 = *param_3;
  if ((fVar1 < fVar15) || (fVar16 < param_3[2])) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((param_3[1] < fVar17) || (fVar18 < param_3[3])) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  fVar2 = *(float *)(DAT_180ca0a50 + 0xcec);
  fVar3 = param_3[2];
  if ((((fVar3 - fVar1) + fVar2 + fVar2 <= fVar16 - fVar15) || ('\0' < *(char *)(param_2 + 0xe8)))
     || ((*(byte *)(param_2 + 0x14) & 0x40) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((((param_3[3] - param_3[1]) +
        *(float *)(DAT_180ca0a50 + 0xcf0) + *(float *)(DAT_180ca0a50 + 0xcf0) <= fVar18 - fVar17) ||
      ('\0' < *(char *)(param_2 + 0xe9))) || ((*(byte *)(param_2 + 0x14) & 0x40) != 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if (((uVar10 & 1) == 0) || (bVar4)) {
    if ((((uVar10 & 4) != 0) && (!bVar4)) || ((uVar10 & 0x10) != 0)) {
      *(undefined4 *)(param_2 + 0xb8) = 0;
      if (bVar5) {
        *(undefined4 *)(param_2 + 0xb0) = 0x3f000000;
        iVar9 = (int)(((((float)(int)((fVar1 + fVar3) * DAT_1808ac1f4) - *(float *)(param_2 + 0x28))
                       - *(float *)(param_2 + 0x70)) - fVar14) + *(float *)(param_2 + 0x98));
        goto LAB_1803ed3f8;
      }
      fVar14 = (((fVar1 - *(float *)(param_2 + 0x28)) - *(float *)(param_2 + 0x70)) - fVar14) +
               *(float *)(param_2 + 0x98);
      goto LAB_1803ed3ed;
    }
  }
  else {
    if ((fVar1 < fVar15) || (!bVar5)) {
      *(undefined4 *)(param_2 + 0xb8) = 0;
      fVar14 = ((((fVar1 - fVar2) - *(float *)(param_2 + 0x28)) - *(float *)(param_2 + 0x70)) -
               fVar14) + *(float *)(param_2 + 0x98);
LAB_1803ed3ed:
      *(undefined4 *)(param_2 + 0xb0) = 0;
      iVar9 = (int)fVar14;
    }
    else {
      if (fVar3 < fVar16) goto LAB_1803ed407;
      *(undefined4 *)(param_2 + 0xb0) = 0x3f800000;
      *(undefined4 *)(param_2 + 0xb8) = 0;
      iVar9 = (int)(((((fVar3 + fVar2) - *(float *)(param_2 + 0x28)) - *(float *)(param_2 + 0x70)) -
                    fVar14) + *(float *)(param_2 + 0x98));
    }
LAB_1803ed3f8:
    *(float *)(param_2 + 0xa8) = (float)iVar9;
  }
LAB_1803ed407:
  if (((uVar10 & 2) == 0) || (bVar6)) {
    if ((((uVar10 & 8) == 0) || (bVar6)) && ((uVar10 & 0x20) == 0)) goto LAB_1803ed531;
    fVar14 = param_3[1];
    if (!bVar7) {
      fVar13 = (((fVar14 - *(float *)(param_2 + 0x2c)) - *(float *)(param_2 + 0x74)) - fVar13) +
               *(float *)(param_2 + 0x9c);
      goto LAB_1803ed510;
    }
    fVar15 = param_3[3];
    *(undefined4 *)(param_2 + 0xb4) = 0x3f000000;
    fVar13 = ((((float)(int)((fVar14 + fVar15) * DAT_1808ac1f4) - *(float *)(param_2 + 0x2c)) -
              *(float *)(param_2 + 0x74)) - fVar13) + *(float *)(param_2 + 0x9c);
  }
  else if ((param_3[1] < fVar17) || (!bVar7)) {
    fVar13 = ((((param_3[1] - *(float *)(lVar8 + 0xcf0)) - *(float *)(param_2 + 0x2c)) -
              *(float *)(param_2 + 0x74)) - fVar13) + *(float *)(param_2 + 0x9c);
LAB_1803ed510:
    *(undefined4 *)(param_2 + 0xb4) = 0;
  }
  else {
    fVar14 = param_3[3];
    if (fVar14 < fVar18) goto LAB_1803ed531;
    fVar15 = *(float *)(lVar8 + 0xcf0);
    *(undefined4 *)(param_2 + 0xb4) = 0x3f800000;
    fVar13 = ((((fVar14 + fVar15) - *(float *)(param_2 + 0x2c)) - *(float *)(param_2 + 0x74)) -
             fVar13) + *(float *)(param_2 + 0x9c);
  }
  *(undefined4 *)(param_2 + 0xbc) = 0;
  *(float *)(param_2 + 0xac) = (float)(int)fVar13;
LAB_1803ed531:
  FUN_1803ecf50(&local_res8);
  local_res8 = local_res8 - *(float *)(param_2 + 0x98);
  local_resc = local_resc - *(float *)(param_2 + 0x9c);
  *param_1 = local_res8;
  param_1[1] = local_resc;
  if (((uVar10 & 0x40) == 0) && ((*(uint *)(param_2 + 0x14) & 0x1000000) != 0)) {
    local_88 = *param_3 - local_res8;
    local_84 = param_3[1] - local_resc;
    local_80 = param_3[2] - local_res8;
    local_7c = param_3[3] - local_resc;
    puVar11 = (undefined8 *)FUN_1803ed160(&local_res8,*(undefined8 *)(param_2 + 0x3b0),&local_88);
    *(ulonglong *)param_1 =
         CONCAT44((float)((ulonglong)*puVar11 >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)param_1 >> 0x20),
                  (float)*puVar11 + (float)*(undefined8 *)param_1);
  }
  return param_1;
}



/* ===== 1803ed650 FUN_1803ed650 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1803ed650(ulonglong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  char *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  lVar5 = DAT_180ca0a50;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  if ((*(char *)(DAT_180ca0a50 + 0x2291) == '\0') && (*(char *)(DAT_180ca0a50 + 0x2292) == '\0')) {
    bVar4 = false;
    bVar6 = false;
    if ((param_1 & 2) == 0) goto LAB_1803ed7b5;
  }
  else {
    uVar7 = *(uint *)(DAT_180ca0a50 + 0x1f38);
    if ((uVar7 & 1) == 0) {
      fVar10 = *(float *)(DAT_180ca0a50 + 0xdc4);
      fVar1 = *(float *)(DAT_180ca0a50 + 0x114);
      if (*(int *)(DAT_180ca0a50 + 0x128) == 1) {
        fVar9 = 0.0;
        fVar11 = DAT_1808ace38;
        uVar12 = DAT_1808ac1f4;
        uVar13 = DAT_1808ac34c;
      }
      else {
        uVar12 = 0;
        uVar13 = 0;
        fVar9 = DAT_1808ac918;
        fVar11 = DAT_1808ac864;
      }
      uVar7 = uVar7 | 1;
      fVar2 = *(float *)(DAT_180ca0a50 + 0x110);
      *(undefined4 *)(DAT_180ca0a50 + 0x1f50) = uVar12;
      *(undefined4 *)(lVar5 + 0x1f54) = uVar13;
      *(undefined4 *)(lVar5 + 0x1f3c) = 1;
      *(float *)(lVar5 + 0x1f48) = fVar9 * fVar10 + fVar2;
      *(float *)(lVar5 + 0x1f4c) = fVar11 * fVar10 + fVar1;
    }
    fVar10 = *(float *)(lVar5 + 0xe2c) * DAT_1808ac21c;
    *(uint *)(lVar5 + 0x1f38) = uVar7 | 0x40;
    *(float *)(lVar5 + 0x1fa8) = fVar10;
    bVar6 = true;
  }
  bVar4 = bVar6;
  lVar3 = *(longlong *)(lVar5 + 0x26d8);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xcc) != '\0')) {
    uVar7 = *(int *)(lVar5 + 0x14c8) - 1;
    if (-1 < (int)uVar7) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x14d0) + (ulonglong)uVar7 * 0x88) == lVar3)
        goto LAB_1803ed7b5;
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
    }
    *(undefined1 *)(lVar3 + 0xd1) = 1;
    *(undefined1 *)(lVar3 + 0xd4) = 1;
    *(undefined1 *)(lVar3 + 0xeb) = 1;
    *(short *)(lVar5 + 0x26d2) = *(short *)(lVar5 + 0x26d2) + 1;
  }
LAB_1803ed7b5:
  pcVar8 = "##Tooltip_%02d";
  if (bVar4) {
    pcVar8 = "##Tooltip_DragDrop_%02d";
  }
  FUN_1803d7610(local_38,0x20,pcVar8,(int)*(short *)(lVar5 + 0x26d2));
  FUN_1803e4f20(local_38,0,0x2030347);
  return 1;
}



/* ===== 1803ed810 FUN_1803ed810 ===== */

void FUN_1803ed810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1803ed840(param_1,&local_res10);
  return;
}



/* ===== 1803ed840 FUN_1803ed840 ===== */

void FUN_1803ed840(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  cVar2 = FUN_1803ed650(2);
  lVar1 = DAT_180ca0a50;
  if (cVar2 != '\0') {
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    if (*(char *)(*(longlong *)(lVar1 + 0x14f8) + 0xd1) == '\0') {
      FUN_1803d76b0(&local_res20,&local_res18,param_1,param_2);
      FUN_180414370(local_res20,local_res18,1);
    }
    FUN_1803e75b0();
  }
  return;
}



/* ===== 1803ed8c0 FUN_1803ed8c0 ===== */

void FUN_1803ed8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  cVar1 = FUN_1803dd930(0x1000);
  if (cVar1 != '\0') {
    FUN_1803ed840(param_1,&local_res10);
  }
  return;
}



/* ===== 1803ed900 FUN_1803ed900 ===== */

ulonglong FUN_1803ed900(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar2 = param_2 & 0x800;
  uVar3 = (ulonglong)uVar2;
  iVar1 = *(int *)(DAT_180ca0a50 + 0x2020);
  if ((param_2 >> 10 & 1) != 0) {
    if (uVar2 == 0) {
      return (ulonglong)(*(int *)(DAT_180ca0a50 + 0x2030) < iVar1);
    }
    return (ulonglong)CONCAT31((int3)(uVar2 >> 8),0 < iVar1);
  }
  if (uVar2 == 0) {
    uVar3 = (ulonglong)*(int *)(DAT_180ca0a50 + 0x2030);
    if (*(int *)(DAT_180ca0a50 + 0x2030) < iVar1) {
      lVar4 = uVar3 * 0x58;
      uVar3 = *(ulonglong *)(DAT_180ca0a50 + 0x2028);
      if ((*(int *)(lVar4 + uVar3) == param_1) &&
         (((param_2 >> 0xc & 1) != 0 || (*(char *)(lVar4 + 0x34 + uVar3) == '\0')))) {
LAB_1803ed99f:
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
    }
  }
  else if (0 < iVar1) {
    uVar2 = 0;
    do {
      uVar3 = (ulonglong)uVar2;
      if ((*(int *)(*(longlong *)(DAT_180ca0a50 + 0x2028) + uVar3 * 0x58) == param_1) &&
         (((param_2 & 0x1000) != 0 ||
          (*(char *)(*(longlong *)(DAT_180ca0a50 + 0x2028) + 0x34 + uVar3 * 0x58) == '\0'))))
      goto LAB_1803ed99f;
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar1);
  }
  return uVar3 & 0xffffffffffffff00;
}



/* ===== 1803ed9b0 FUN_1803ed9b0 ===== */

ulonglong FUN_1803ed9b0(uint param_1,byte param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  ulonglong in_RAX;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  undefined1 local_res20 [8];
  ulonglong local_a8;
  undefined8 uStack_90;
  float fStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar5 = DAT_180ca0a50;
  iVar8 = *(int *)(DAT_180ca0a50 + 0x2030);
  if (((char)param_2 < '\0') && (iVar8 < *(int *)(DAT_180ca0a50 + 0x2020))) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar4 = *(undefined8 *)(DAT_180ca0a50 + 0x2068);
  uVar2 = *(undefined4 *)(DAT_180ca0a50 + 4);
  fStack_84 = 0.0;
  uStack_80 = 0;
  fStack_7c = 0.0;
  uVar3 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x110) + -4 +
           (longlong)*(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) * 4);
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_a8 = (ulonglong)param_1;
  uStack_90 = CONCAT44(uVar2,0xffffffff);
  puVar10 = (undefined8 *)FUN_1803f06a0(local_res20,0x4000000);
  uVar6 = local_78;
  pfVar14 = (float *)(lVar5 + 0x110);
  fStack_84 = (float)*puVar10;
  uStack_80 = (undefined4)((ulonglong)*puVar10 >> 0x20);
  if ((*pfVar14 < DAT_1808ace9c) || (*(float *)(lVar5 + 0x114) < DAT_1808ace9c)) {
    pfVar14 = &fStack_84;
    puVar11 = &uStack_80;
  }
  else {
    puVar11 = (undefined4 *)(lVar5 + 0x114);
  }
  fStack_7c = *pfVar14;
  local_78 = CONCAT44(local_78._4_4_,*puVar11);
  uVar7 = local_78;
  local_78._6_2_ = SUB82(uVar6,6);
  local_78._0_6_ = CONCAT15(1,(int5)uVar7);
  if ((*(byte *)(lVar5 + 0x28f4) & 8) != 0) {
    FUN_1803f5060("[popup] OpenPopupEx(0x%08X)\n",param_1);
  }
  piVar1 = (int *)(lVar5 + 0x2020);
  iVar13 = *piVar1;
  if (iVar13 < iVar8 + 1) {
    iVar8 = *(int *)(lVar5 + 0x2024);
    if (iVar13 == iVar8) {
      if (iVar8 == 0) {
        iVar8 = 8;
      }
      else {
        iVar8 = iVar8 / 2 + iVar8;
      }
      iVar9 = iVar13 + 1;
      if (iVar13 + 1 < iVar8) {
        iVar9 = iVar8;
      }
      FUN_1803f6cf0(piVar1,iVar9);
    }
    lVar15 = (longlong)*piVar1 * 0x58;
    lVar5 = *(longlong *)(lVar5 + 0x2028);
    *(ulonglong *)(lVar15 + lVar5) = local_a8;
    ((ulonglong *)(lVar15 + lVar5))[1] = 0;
    puVar10 = (undefined8 *)(lVar15 + 0x10 + lVar5);
    *puVar10 = uVar4;
    puVar10[1] = uStack_90;
    puVar10 = (undefined8 *)(lVar15 + 0x20 + lVar5);
    *puVar10 = CONCAT44(fStack_84,uVar3);
    puVar10[1] = CONCAT44(fStack_7c,uStack_80);
    puVar10 = (undefined8 *)(lVar15 + 0x30 + lVar5);
    *puVar10 = local_78;
    puVar10[1] = uStack_70;
    puVar10 = (undefined8 *)(lVar15 + 0x40 + lVar5);
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined8 *)(lVar15 + 0x50 + lVar5) = 0;
    uVar12 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    *piVar1 = *piVar1 + 1;
  }
  else {
    lVar15 = *(longlong *)(lVar5 + 0x2028);
    lVar17 = (longlong)iVar8 * 0x58;
    if ((*(uint *)(lVar17 + lVar15) == param_1) &&
       ((*(int *)(lVar17 + 0x1c + lVar15) == *(int *)(lVar5 + 4) + -1 || ((param_2 & 0x20) != 0))))
    {
      *(undefined4 *)(lVar17 + 0x1c + lVar15) = uVar2;
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
      iVar9 = iVar8;
      if (iVar8 < iVar13) {
        do {
          iVar16 = iVar9 + 1;
          *(undefined1 *)(*(longlong *)(lVar5 + 0x2028) + 0x34 + (longlong)iVar9 * 0x58) = 1;
          iVar13 = *piVar1;
          iVar9 = iVar16;
        } while (iVar16 < iVar13);
      }
      iVar9 = *(int *)(lVar5 + 0x2024);
      if (iVar13 == iVar9) {
        if (iVar9 == 0) {
          iVar9 = 8;
        }
        else {
          iVar9 = iVar9 / 2 + iVar9;
        }
        iVar16 = iVar13 + 1;
        if (iVar13 + 1 < iVar9) {
          iVar16 = iVar9;
        }
        FUN_1803f6cf0(piVar1,iVar16);
      }
      if (iVar8 < *piVar1) {
        lVar15 = *(longlong *)(lVar5 + 0x2028) + lVar17;
        FUN_180540530(lVar15 + 0x58,lVar15,((longlong)*piVar1 - (longlong)iVar8) * 0x58);
      }
      lVar5 = *(longlong *)(lVar5 + 0x2028);
      *(ulonglong *)(lVar17 + lVar5) = local_a8;
      ((ulonglong *)(lVar17 + lVar5))[1] = 0;
      puVar10 = (undefined8 *)(lVar17 + 0x10 + lVar5);
      *puVar10 = uVar4;
      puVar10[1] = uStack_90;
      puVar10 = (undefined8 *)(lVar17 + 0x20 + lVar5);
      *puVar10 = CONCAT44(fStack_84,uVar3);
      puVar10[1] = CONCAT44(fStack_7c,uStack_80);
      puVar10 = (undefined8 *)(lVar17 + 0x30 + lVar5);
      *puVar10 = local_78;
      puVar10[1] = uStack_70;
      puVar10 = (undefined8 *)(lVar17 + 0x40 + lVar5);
      *puVar10 = 0;
      puVar10[1] = 0;
      *(undefined8 *)(lVar17 + 0x50 + lVar5) = 0;
      *piVar1 = *piVar1 + 1;
    }
  }
  return uVar12;
}



/* ===== 1803edcb0 FUN_1803edcb0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803edcb0(void)

{
  float fVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar10 = DAT_180ca0a50;
  uVar9 = _DAT_1808ade90;
  fVar8 = DAT_1808ac34c;
  fVar7 = DAT_1808ac1f4;
  fVar6 = DAT_1808ac118;
  fVar5 = DAT_1808abf80;
  iVar12 = 0;
  if (0 < *(int *)(DAT_180ca0a50 + 0x2020)) {
    do {
      lVar4 = *(longlong *)(lVar10 + 0x2028);
      lVar11 = (longlong)iVar12 * 0x58;
      cVar2 = *(char *)(lVar11 + 0x34 + lVar4);
      if (cVar2 == '\0') {
        fVar14 = fVar8;
      }
      else {
        fVar14 = 0.0;
      }
      cVar3 = *(char *)(lVar11 + 0x35 + lVar4);
      fVar16 = *(float *)(lVar11 + 0x38 + lVar4);
      if ((cVar3 == '\0') || (fVar1 = *(float *)(lVar11 + 0x3c + lVar4), fVar1 != fVar14)) {
        *(float *)(lVar11 + 0x3c + lVar4) = fVar14;
        *(undefined4 *)(lVar11 + 0x40 + lVar4) = 0;
        fVar1 = fVar16;
        if (fVar14 <= fVar16) {
          fVar1 = fVar14;
        }
        fVar15 = fVar16;
        if (fVar16 <= fVar14) {
          fVar15 = fVar14;
        }
        *(float *)(lVar11 + 0x44 + lVar4) = fVar1;
        *(float *)(lVar11 + 0x48 + lVar4) = fVar15;
        if (cVar3 == '\0') {
          *(float *)(lVar11 + 0x38 + lVar4) = fVar14;
          *(undefined1 *)(lVar11 + 0x35 + lVar4) = 1;
          fVar16 = fVar14;
        }
      }
      else if ((*(int *)(lVar11 + 0x4c + lVar4) != *(int *)(lVar10 + 4)) &&
              (dVar13 = (double)*(float *)(lVar11 + 0x50 + lVar4),
              *(int *)(lVar11 + 0x4c + lVar4) = *(int *)(lVar10 + 4),
              dVar13 < *(double *)(lVar10 + 0x10) || dVar13 == *(double *)(lVar10 + 0x10))) {
        if (fVar5 < (float)((uint)(fVar16 - fVar1) & uVar9)) {
          fVar14 = *(float *)(lVar10 + 0x40) + *(float *)(lVar11 + 0x40 + lVar4);
          *(float *)(lVar11 + 0x40 + lVar4) = fVar14;
          if (fVar14 < fVar6) {
            fVar14 = fVar14 / fVar6;
            if (fVar14 <= fVar8) {
              fVar15 = 0.0;
              if (0.0 <= fVar14) {
                fVar15 = fVar14;
              }
              fVar15 = fVar8 - fVar15;
            }
            else {
              fVar15 = 0.0;
            }
            fVar16 = *(float *)(lVar11 + 0x44 + lVar4);
            fVar14 = *(float *)(lVar11 + 0x48 + lVar4);
            fVar15 = fVar8 - fVar15 * fVar15 * fVar15;
            if (fVar1 <= (fVar16 + fVar14) * fVar7) {
              fVar16 = fVar14 - (fVar14 - fVar1) * fVar15;
              *(float *)(lVar11 + 0x38 + lVar4) = fVar16;
            }
            else {
              fVar16 = (fVar1 - fVar16) * fVar15 + fVar16;
              *(float *)(lVar11 + 0x38 + lVar4) = fVar16;
            }
          }
          else {
            *(undefined4 *)(lVar11 + 0x40 + lVar4) = 0;
            *(float *)(lVar11 + 0x38 + lVar4) = fVar1;
            fVar16 = fVar1;
          }
        }
        else {
          *(undefined4 *)(lVar11 + 0x40 + lVar4) = 0;
          *(float *)(lVar11 + 0x38 + lVar4) = fVar1;
          fVar16 = fVar1;
        }
      }
      if (((fVar16 <= 0.0) && (cVar2 != '\0')) && (*(int *)(lVar10 + 0x2030) <= iVar12)) {
        lVar11 = lVar11 + *(longlong *)(lVar10 + 0x2028);
        FUN_180540530(lVar11,lVar11 + 0x58,
                      ((longlong)*(int *)(lVar10 + 0x2020) - (longlong)iVar12) * 0x58 + -0x58);
        *(int *)(lVar10 + 0x2020) = *(int *)(lVar10 + 0x2020) + -1;
        iVar12 = iVar12 + -1;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(lVar10 + 0x2020));
  }
  return;
}



/* ===== 1803edf20 FUN_1803edf20 ===== */

void FUN_1803edf20(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  lVar3 = DAT_180ca0a50;
  FUN_1803edcb0();
  iVar1 = *(int *)(lVar3 + 0x2020);
  if (iVar1 != 0) {
    uVar6 = 0;
    if ((param_1 != 0) && (0 < iVar1)) {
      do {
        if (*(longlong *)(*(longlong *)(lVar3 + 0x2028) + 8 + uVar6 * 0x58) != 0) {
          uVar8 = uVar6;
          do {
            lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x2028) + 8 + (longlong)(int)uVar8 * 0x58);
            if (lVar2 != 0) {
              lVar4 = param_1;
              if (*(longlong *)(param_1 + 0x3c0) == lVar2) break;
              do {
                if (lVar4 == lVar2) goto LAB_1803edfbb;
                lVar4 = *(longlong *)(lVar4 + 0x3b8);
              } while (lVar4 != 0);
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
            if (iVar1 <= (int)uVar7) goto LAB_1803edfc7;
          } while( true );
        }
LAB_1803edfbb:
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
      } while ((int)uVar7 < iVar1);
    }
    if ((int)uVar6 < iVar1) {
LAB_1803edfc7:
      if ((*(byte *)(lVar3 + 0x28f4) & 8) != 0) {
        if (param_1 == 0) {
          pcVar5 = "<NULL>";
        }
        else {
          pcVar5 = *(char **)(param_1 + 8);
        }
        FUN_1803f5060("[popup] ClosePopupsOverWindow(\"%s\")\n",pcVar5);
      }
      FUN_1803ee010(uVar6,param_2);
    }
  }
  return;
}



/* ===== 1803ee010 FUN_1803ee010 ===== */

void FUN_1803ee010(int param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  lVar3 = DAT_180ca0a50;
  uVar6 = (ulonglong)param_1;
  if ((((*(byte *)(DAT_180ca0a50 + 0x28f4) & 8) != 0) &&
      (FUN_1803f5060("[popup] ClosePopupToLevel(%d), restore_under=%d\n",param_1,param_2),
      (*(byte *)(lVar3 + 0x28f4) & 8) != 0)) &&
     (iVar4 = param_1, param_1 < *(int *)(lVar3 + 0x2020))) {
    do {
      if ((*(byte *)(lVar3 + 0x28f4) & 8) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x2028) + 8 + (longlong)iVar4 * 0x58);
        if (lVar2 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar2 + 8);
        }
        FUN_1803f5060("[popup] - Closing PopupID 0x%08X Window \"%s\"\n",
                      *(undefined4 *)(*(longlong *)(lVar3 + 0x2028) + (longlong)iVar4 * 0x58),uVar7)
        ;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(lVar3 + 0x2020));
  }
  lVar1 = *(longlong *)(uVar6 * 0x58 + *(longlong *)(lVar3 + 0x2028) + 8);
  lVar2 = *(longlong *)(uVar6 * 0x58 + 0x10 + *(longlong *)(lVar3 + 0x2028));
  if (param_1 < *(int *)(lVar3 + 0x2020)) {
    do {
      iVar4 = (int)uVar6;
      uVar5 = iVar4 + 1;
      uVar6 = (ulonglong)uVar5;
      *(undefined1 *)(*(longlong *)(lVar3 + 0x2028) + 0x34 + (longlong)iVar4 * 0x58) = 1;
    } while ((int)uVar5 < *(int *)(lVar3 + 0x2020));
  }
  if ((param_2 != '\0') && (lVar1 != 0)) {
    if ((*(uint *)(lVar1 + 0x14) >> 0x1c & 1) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x3b0);
    }
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0xcd) == '\0')) {
      iVar4 = -1;
      uVar5 = *(uint *)(lVar1 + 0x14) >> 0x18 & 1;
      while (uVar5 != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x3b0);
        iVar4 = 0;
        uVar5 = *(uint *)(lVar1 + 0x14) & 0x1000000;
      }
      uVar5 = *(short *)(lVar1 + 0xe2) + iVar4;
      if (-1 < (int)uVar5) {
        do {
          lVar3 = *(longlong *)(*(longlong *)(DAT_180ca0a50 + 0x14b0) + (ulonglong)uVar5 * 8);
          if (((lVar3 != 0) && (*(char *)(lVar3 + 0xcd) != '\0')) &&
             ((*(uint *)(lVar3 + 0x14) & 0x10200) != 0x10200)) goto LAB_1803ee1b8;
          uVar5 = uVar5 - 1;
        } while (-1 < (int)uVar5);
      }
      lVar3 = 0;
LAB_1803ee1b8:
      FUN_1803ef030(lVar3,1);
      return;
    }
    FUN_1803ef030(lVar2,*(int *)(lVar3 + 0x2074) == 0);
  }
  return;
}



/* ===== 1803ee1f0 FUN_1803ee1f0 ===== */

void FUN_1803ee1f0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar3 = DAT_180ca0a50;
  iVar7 = *(int *)(DAT_180ca0a50 + 0x2030) + -1;
  uVar6 = (ulonglong)iVar7;
  if ((-1 < iVar7) && (iVar7 < *(int *)(DAT_180ca0a50 + 0x2020))) {
    lVar1 = *(longlong *)(DAT_180ca0a50 + 0x2028);
    if (*(int *)(uVar6 * 0x58 + *(longlong *)(DAT_180ca0a50 + 0x2038)) ==
        *(int *)(uVar6 * 0x58 + lVar1)) {
      if (0 < iVar7) {
        while( true ) {
          lVar4 = (uVar6 & 0xffffffff) * 0x58;
          lVar2 = *(longlong *)(lVar1 + 8 + lVar4);
          if (((lVar2 == 0) || ((*(uint *)(lVar2 + 0x14) & 0x10000000) == 0)) ||
             (lVar2 = *(longlong *)(lVar1 + -0x50 + lVar4), lVar2 == 0)) break;
          if (((*(uint *)(lVar2 + 0x14) & 0x400) != 0) ||
             (uVar5 = (int)uVar6 - 1, uVar6 = (ulonglong)uVar5, (int)uVar5 < 1)) break;
        }
      }
      if ((*(byte *)(DAT_180ca0a50 + 0x28f4) & 8) != 0) {
        FUN_1803f5060("[popup] CloseCurrentPopup %d -> %d\n",iVar7,uVar6 & 0xffffffff);
      }
      FUN_1803ee010(uVar6 & 0xffffffff,1);
      if (*(longlong *)(lVar3 + 0x2068) != 0) {
        *(undefined1 *)(*(longlong *)(lVar3 + 0x2068) + 0x179) = 1;
      }
    }
  }
  return;
}



/* ===== 1803ee2d0 FUN_1803ee2d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1803ee2d0(int param_1,uint param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_48;
  uVar2 = (ulonglong)*(int *)(DAT_180ca0a50 + 0x2030);
  if ((*(int *)(DAT_180ca0a50 + 0x2020) <= *(int *)(DAT_180ca0a50 + 0x2030)) ||
     (lVar3 = uVar2 * 0x58, uVar2 = *(ulonglong *)(DAT_180ca0a50 + 0x2028),
     *(int *)(lVar3 + uVar2) != param_1)) {
    *(undefined4 *)(DAT_180ca0a50 + 0x1f38) = 0;
    return uVar2 & 0xffffffffffffff00;
  }
  FUN_1803d7610(local_28,0x14,"##Popup_%08x");
  bVar1 = FUN_1803e4f20(local_28,0,param_2 | 0x4000000);
  if (bVar1 == 0) {
    FUN_1803ee480();
  }
  return (ulonglong)bVar1;
}



/* ===== 1803ee380 FUN_1803ee380 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_1803ee380(int param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  lVar2 = DAT_180ca0a50;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar4 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar4 + *(longlong *)(DAT_180ca0a50 + 0x2028)) == param_1) &&
       (*(char *)(lVar4 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) == '\0')) {
      if ((param_3 & 0x1000040) == 0x1000040) {
        uVar1 = *(uint *)(DAT_180ca0a50 + 0x1f38);
        if ((uVar1 >> 9 & 1) == 0) {
          *(undefined8 *)(DAT_180ca0a50 + 0x1f78) = 0;
        }
        *(uint *)(lVar2 + 0x1f78) = *(uint *)(lVar2 + 0x1f78) | 0x40;
        *(uint *)(lVar2 + 0x1f7c) = *(uint *)(lVar2 + 0x1f7c) & 0xffffffbf;
        *(uint *)(lVar2 + 0x1f38) = uVar1 | 0x200;
      }
      local_a8 = *(undefined4 *)(lVar2 + 0x263c);
      FUN_1803d7610(local_98,0x80,"%s###Menu_%02d",param_2);
      cVar3 = FUN_1803e4f20(local_98,0,param_3 | 0x4000000);
      if (cVar3 == '\0') {
        FUN_1803ee480();
      }
      return cVar3;
    }
  }
  *(undefined4 *)(DAT_180ca0a50 + 0x1f38) = 0;
  return '\0';
}



/* ===== 1803ee480 FUN_1803ee480 ===== */

void FUN_1803ee480(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = DAT_180ca0a50;
  lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if (((*(uint *)(lVar3 + 0x14) & 0x4000000) == 0) || (*(int *)(DAT_180ca0a50 + 0x2030) < 1)) {
    FUN_1803ebc00("Calling EndPopup() in wrong window!");
    return;
  }
  if (((*(longlong *)(DAT_180ca0a50 + 0x2068) == lVar3) &&
      (*(char *)(DAT_180ca0a50 + 0x2109) != '\0')) &&
     (*(int *)(DAT_180ca0a50 + 0x2074) == *(int *)(lVar3 + 0x170))) {
    *(uint *)(DAT_180ca0a50 + 0x210c) = *(uint *)(DAT_180ca0a50 + 0x210c) & 0xfffffff2;
    *(uint *)(lVar4 + 0x210c) = *(uint *)(lVar4 + 0x210c) | 2;
  }
  uVar1 = *(undefined4 *)(lVar4 + 0x1464);
  uVar2 = *(undefined4 *)(lVar4 + 0x1460);
  *(undefined4 *)(lVar4 + 0x1464) = *(undefined4 *)(lVar3 + 0x10);
  if ((*(uint *)(lVar3 + 0x14) & 0x1000000) != 0) {
    *(undefined4 *)(lVar4 + 0x1460) = *(undefined4 *)(lVar3 + 0x10);
  }
  FUN_1803e75b0();
  *(undefined4 *)(lVar4 + 0x1464) = uVar1;
  *(undefined4 *)(lVar4 + 0x1460) = uVar2;
  return;
}



