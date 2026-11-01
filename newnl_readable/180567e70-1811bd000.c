/* ===== 180567e70 FUN_180567e70 ===== */

void FUN_180567e70(void)

{
  FUN_1800132b0(&DAT_180cfc888);
  FUN_180282870(&DAT_180cfc878);
  return;
}



/* ===== 180567ef0 FUN_180567ef0 ===== */

void FUN_180567ef0(void)

{
  FUN_1800132b0(&DAT_180cfe6b8);
  FUN_180298fc0(&DAT_180cfe6a8);
  return;
}



/* ===== 180567f10 FUN_180567f10 ===== */

void FUN_180567f10(void)

{
  FUN_1800132b0(&DAT_180ca1658);
  FUN_180023a80(&DAT_180ca1648);
  return;
}



/* ===== 180567f30 FUN_180567f30 ===== */

void FUN_180567f30(void)

{
  FUN_1800132b0(&DAT_180ca1698);
  FUN_18025b950(&DAT_180ca1688);
  return;
}



/* ===== 180567f50 FUN_180567f50 ===== */

void FUN_180567f50(void)

{
  FUN_1800132b0(&DAT_180ca1618);
  FUN_180023a80(&DAT_180ca1608);
  return;
}



/* ===== 180567f70 FUN_180567f70 ===== */

void FUN_180567f70(void)

{
  FUN_180023ca0(&DAT_180cfe748);
  FUN_180298e00(&DAT_180cfe738);
  return;
}



/* ===== 180567fd0 FUN_180567fd0 ===== */

void FUN_180567fd0(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180cfeab8;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180cfeab0;
  if (DAT_180cfeab0 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x50) {
    FUN_1802a9370(uVar2 + 0x38);
    FUN_1802a92f0(uVar2 + 0x20);
  }
  uVar2 = DAT_180cfeab0;
  if (0xfff < (ulonglong)(((longlong)(DAT_180cfeac0 - DAT_180cfeab0) >> 4) << 4)) {
    uVar2 = *(ulonglong *)(DAT_180cfeab0 - 8);
    uVar3 = (DAT_180cfeab0 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_18056806c;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_18056806c:
  *(undefined8 *)(puVar5 + -8) = 0x180568071;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180cfeac0 = 0;
  DAT_180cfeab8 = 0;
  DAT_180cfeab0 = 0;
  return;
}



/* ===== 1805680a0 FUN_1805680a0 ===== */

void FUN_1805680a0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180d00c10 == 0) {
    return;
  }
  lVar2 = DAT_180d00c10;
  if (0xfff < (DAT_180d00c20 - DAT_180d00c10 & 0xfffffffffffffff0U)) {
    lVar2 = *(longlong *)(DAT_180d00c10 + -8);
    if ((DAT_180d00c10 - lVar2) - 8U < 0x20) goto LAB_1805680e8;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_1805680e8:
  *(undefined8 *)(puVar4 + -8) = 0x1805680ed;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180d00c20 = 0;
  DAT_180d00c18 = 0;
  DAT_180d00c10 = 0;
  return;
}



/* ===== 180568110 FUN_180568110 ===== */

void FUN_180568110(void)

{
  FUN_1800132b0(&DAT_180ca1798);
  FUN_18025b950(&DAT_180ca1788);
  return;
}



/* ===== 180568130 FUN_180568130 ===== */

void FUN_180568130(void)

{
  FUN_180023ca0(&DAT_181107628);
  FUN_180023d10(&DAT_181107618);
  return;
}



/* ===== 180568190 FUN_180568190 ===== */

void FUN_180568190(void)

{
  FUN_1800288b0(&DAT_1809f7070);
  FUN_1800288b0(&DAT_1809f7058);
  FUN_18000f890(&DAT_1809f7038);
  return;
}



/* ===== 1805681c0 FUN_1805681c0 ===== */

void FUN_1805681c0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_1811074b8 == 0) {
    return;
  }
  lVar2 = DAT_1811074b8;
  if (0xfff < (ulonglong)((DAT_1811074c8 - DAT_1811074b8 >> 2) * 4)) {
    lVar2 = *(longlong *)(DAT_1811074b8 + -8);
    if ((DAT_1811074b8 - lVar2) - 8U < 0x20) goto LAB_180568222;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180568222:
  *(undefined8 *)(puVar4 + -8) = 0x18056822a;
  thunk_FUN_1803d64e0(lVar2);
  DAT_1811074c8 = 0;
  DAT_1811074c0 = 0;
  DAT_1811074b8 = 0;
  return;
}



/* ===== 180568250 FUN_180568250 ===== */

void FUN_180568250(void)

{
  FUN_1800132b0(&DAT_180ca1858);
  FUN_180023a80(&DAT_180ca1848);
  return;
}



/* ===== 180568270 FUN_180568270 ===== */

void FUN_180568270(void)

{
  FUN_1800132b0(&DAT_180ca1998);
  FUN_18025b950(&DAT_180ca1988);
  return;
}



/* ===== 180568290 FUN_180568290 ===== */

void FUN_180568290(void)

{
  FUN_180023ca0(&DAT_181107788);
  FUN_180349fd0(&DAT_181107778);
  return;
}



/* ===== 1805682b0 FUN_1805682b0 ===== */

void FUN_1805682b0(void)

{
  FUN_180023ca0(&DAT_181107128);
  FUN_180298e00(&DAT_181107118);
  return;
}



/* ===== 1805682e0 FUN_1805682e0 ===== */

void FUN_1805682e0(void)

{
  FUN_1800132b0(&DAT_180ca16d8);
  FUN_18025b950(&DAT_180ca16c8);
  return;
}



/* ===== 180568300 FUN_180568300 ===== */

void FUN_180568300(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_181107838 == 0) {
    return;
  }
  lVar2 = DAT_181107838;
  if (0xfff < (ulonglong)((DAT_181107848 - DAT_181107838 >> 2) * 4)) {
    lVar2 = *(longlong *)(DAT_181107838 + -8);
    if ((DAT_181107838 - lVar2) - 8U < 0x20) goto LAB_180568362;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180568362:
  *(undefined8 *)(puVar4 + -8) = 0x18056836a;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181107848 = 0;
  DAT_181107840 = 0;
  DAT_181107838 = 0;
  return;
}



/* ===== 1805683b0 FUN_1805683b0 ===== */

void FUN_1805683b0(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_181107158;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_181107150;
  if (DAT_181107150 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x88) {
    FUN_18000f890(uVar2 + 0x28);
  }
  uVar2 = DAT_181107150;
  if (0xfff < (ulonglong)(((longlong)(DAT_181107160 - DAT_181107150) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_181107150 - 8);
    uVar3 = (DAT_181107150 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_180568445;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_180568445:
  *(undefined8 *)(puVar5 + -8) = 0x18056844a;
  thunk_FUN_1803d64e0(uVar2);
  DAT_181107160 = 0;
  DAT_181107158 = 0;
  DAT_181107150 = 0;
  return;
}



/* ===== 180568470 FUN_180568470 ===== */

void FUN_180568470(void)

{
  FUN_180023ca0(&DAT_181107438);
  FUN_180355520();
  thunk_FUN_1803d64e0(DAT_181107428,0x68);
  return;
}



/* ===== 1805684c0 FUN_1805684c0 ===== */

void FUN_1805684c0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_1811077f0 == 0) {
    return;
  }
  lVar2 = DAT_1811077f0;
  if (0xfff < (DAT_181107800 - DAT_1811077f0 & 0xffffffffffffffe0U)) {
    lVar2 = *(longlong *)(DAT_1811077f0 + -8);
    if ((DAT_1811077f0 - lVar2) - 8U < 0x20) goto LAB_180568508;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180568508:
  *(undefined8 *)(puVar4 + -8) = 0x18056850d;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181107800 = 0;
  DAT_1811077f8 = 0;
  DAT_1811077f0 = 0;
  return;
}



/* ===== 180568530 FUN_180568530 ===== */

void FUN_180568530(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_181107560;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_181107558;
  if (DAT_181107558 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x18) {
    FUN_1800244c0(uVar2);
  }
  uVar2 = DAT_181107558;
  if (0xfff < (ulonglong)(((longlong)(DAT_181107568 - DAT_181107558) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_181107558 - 8);
    uVar3 = (DAT_181107558 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_1805685c6;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_1805685c6:
  *(undefined8 *)(puVar5 + -8) = 0x1805685cb;
  thunk_FUN_1803d64e0(uVar2);
  DAT_181107568 = 0;
  DAT_181107560 = 0;
  DAT_181107558 = 0;
  return;
}



/* ===== 1805685f0 FUN_1805685f0 ===== */

void FUN_1805685f0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_181107710 == 0) {
    return;
  }
  lVar2 = DAT_181107710;
  if (0xfff < (ulonglong)((DAT_181107720 - DAT_181107710 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_181107710 + -8);
    if ((DAT_181107710 - lVar2) - 8U < 0x20) goto LAB_180568640;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180568640:
  *(undefined8 *)(puVar4 + -8) = 0x180568648;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181107720 = 0;
  DAT_181107718 = 0;
  DAT_181107710 = 0;
  return;
}



/* ===== 180568670 FUN_180568670 ===== */

void FUN_180568670(void)

{
  FUN_1800132b0(&DAT_180ca1818);
  FUN_180023a80(&DAT_180ca1808);
  return;
}



/* ===== 180568690 FUN_180568690 ===== */

void FUN_180568690(void)

{
  FUN_1800132b0(&DAT_181106ed8);
  FUN_180349cd0(&DAT_181106ec8);
  return;
}



/* ===== 1805686c0 FUN_1805686c0 ===== */

void FUN_1805686c0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_1811075f0 == 0) {
    return;
  }
  lVar2 = DAT_1811075f0;
  if (0xfff < (ulonglong)((DAT_181107600 - DAT_1811075f0 >> 2) * 4)) {
    lVar2 = *(longlong *)(DAT_1811075f0 + -8);
    if ((DAT_1811075f0 - lVar2) - 8U < 0x20) goto LAB_180568722;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180568722:
  *(undefined8 *)(puVar4 + -8) = 0x18056872a;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181107600 = 0;
  DAT_1811075f8 = 0;
  DAT_1811075f0 = 0;
  return;
}



/* ===== 180568770 FUN_180568770 ===== */

void FUN_180568770(void)

{
  FUN_180023ca0(&DAT_181106fe8);
  FUN_180023fa0(&DAT_181106fd8);
  return;
}



/* ===== 180568790 FUN_180568790 ===== */

void FUN_180568790(void)

{
  FUN_18000f890(&DAT_1809f7008);
  FUN_18000f890(&DAT_1809f6fd0);
  return;
}



/* ===== 1805687b0 FUN_1805687b0 ===== */

void FUN_1805687b0(void)

{
  FUN_18000f890(&DAT_1809f5258);
  FUN_18000f890(&DAT_1809f5220);
  return;
}



/* ===== 1805687d0 FUN_1805687d0 ===== */

void FUN_1805687d0(void)

{
  FUN_18000f890(&DAT_1809f7278);
  FUN_18000f890(&DAT_1809f7240);
  return;
}



/* ===== 1805687f0 FUN_1805687f0 ===== */

void FUN_1805687f0(void)

{
  FUN_18000f890(&DAT_1809f5ad8);
  FUN_18000f890(&DAT_1809f5aa0);
  return;
}



/* ===== 180568810 FUN_180568810 ===== */

void FUN_180568810(void)

{
  FUN_18000f890(&DAT_1809f5bb0);
  FUN_18000f890(&DAT_1809f5b90);
  return;
}



/* ===== 180568860 FUN_180568860 ===== */

void FUN_180568860(void)

{
  FUN_18000f890(&DAT_1809f52c8);
  FUN_18000f890(&DAT_1809f5290);
  return;
}



/* ===== 180568880 FUN_180568880 ===== */

void FUN_180568880(void)

{
  FUN_18000f890(&DAT_1809f5178);
  FUN_18000f890(&DAT_1809f5140);
  return;
}



/* ===== 1805688e0 FUN_1805688e0 ===== */

void FUN_1805688e0(void)

{
  FUN_1800132b0(&DAT_180ca17d8);
  FUN_1802828d0(&DAT_180ca17c8);
  return;
}



/* ===== 180568960 FUN_180568960 ===== */

void FUN_180568960(void)

{
  FUN_18000f890(&DAT_1809f6f88);
  FUN_18000f890(&DAT_1809f6f68);
  return;
}



/* ===== 180568980 FUN_180568980 ===== */

void FUN_180568980(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_181107368;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_181107360;
  if (DAT_181107360 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x108) {
    FUN_180313ad0(uVar2);
  }
  uVar2 = DAT_181107360;
  if (0xfff < (ulonglong)(((longlong)(DAT_181107370 - DAT_181107360) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_181107360 - 8);
    uVar3 = (DAT_181107360 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_180568a14;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_180568a14:
  *(undefined8 *)(puVar5 + -8) = 0x180568a19;
  thunk_FUN_1803d64e0(uVar2);
  DAT_181107370 = 0;
  DAT_181107368 = 0;
  DAT_181107360 = 0;
  return;
}



/* ===== 180568a50 FUN_180568a50 ===== */

void FUN_180568a50(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_181107468;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_181107460;
  if (DAT_181107460 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x28) {
    FUN_18000f890(uVar2);
  }
  uVar2 = DAT_181107460;
  if (0xfff < (ulonglong)(((longlong)(DAT_181107470 - DAT_181107460) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_181107460 - 8);
    uVar3 = (DAT_181107460 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_180568ae6;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_180568ae6:
  *(undefined8 *)(puVar5 + -8) = 0x180568aeb;
  thunk_FUN_1803d64e0(uVar2);
  DAT_181107470 = 0;
  DAT_181107468 = 0;
  DAT_181107460 = 0;
  return;
}



/* ===== 180568b60 FUN_180568b60 ===== */

void FUN_180568b60(void)

{
  FUN_1800132b0(&DAT_180ca1918);
  FUN_180023e20(&DAT_180ca1908);
  return;
}



/* ===== 180568bd0 FUN_180568bd0 ===== */

void FUN_180568bd0(void)

{
  if (DAT_1809f73b8 != (longlong *)0x0) {
    (**(code **)(*DAT_1809f73b8 + 0x20))
              (DAT_1809f73b8,CONCAT71(0x1809f73,DAT_1809f73b8 != (longlong *)&DAT_1809f7380));
    DAT_1809f73b8 = (longlong *)0x0;
  }
  FUN_18000f890(&DAT_1809f7360);
  FUN_18000f890(&DAT_1809f7340);
  return;
}



/* ===== 180568c40 FUN_180568c40 ===== */

void FUN_180568c40(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_181107748;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_181107740;
  if (DAT_181107740 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0xe8) {
    FUN_1803276c0(uVar2);
  }
  uVar2 = DAT_181107740;
  if (0xfff < (ulonglong)(((longlong)(DAT_181107750 - DAT_181107740) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_181107740 - 8);
    uVar3 = (DAT_181107740 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_180568cd4;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_180568cd4:
  *(undefined8 *)(puVar5 + -8) = 0x180568cd9;
  thunk_FUN_1803d64e0(uVar2);
  DAT_181107750 = 0;
  DAT_181107748 = 0;
  DAT_181107740 = 0;
  return;
}



/* ===== 180568d00 FUN_180568d00 ===== */

void FUN_180568d00(void)

{
  FUN_1800132b0(&DAT_180ca1718);
  FUN_180023e20(&DAT_180ca1708);
  return;
}



/* ===== 180568d20 FUN_180568d20 ===== */

void FUN_180568d20(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_181107728 == 0) {
    return;
  }
  FUN_18034e020(DAT_181107728,DAT_181107730);
  puVar4 = auStack_28;
  lVar2 = DAT_181107728;
  puVar3 = auStack_28;
  if (0xfff < (ulonglong)((DAT_181107738 - DAT_181107728 >> 6) << 6)) {
    lVar2 = *(longlong *)(DAT_181107728 + -8);
    if ((DAT_181107728 - lVar2) - 8U < 0x20) goto LAB_180568d91;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180568d91:
  *(undefined8 *)(puVar4 + -8) = 0x180568d99;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181107738 = 0;
  DAT_181107730 = 0;
  DAT_181107728 = 0;
  return;
}



/* ===== 180568dc0 FUN_180568dc0 ===== */

void FUN_180568dc0(void)

{
  FUN_180023ca0(&DAT_1811077c8);
  FUN_180023fa0(&DAT_1811077b8);
  return;
}



/* ===== 180568df0 FUN_180568df0 ===== */

void FUN_180568df0(void)

{
  FUN_1800132b0(&DAT_180ca1898);
  FUN_1802828d0(&DAT_180ca1888);
  return;
}



/* ===== 180568e10 FUN_180568e10 ===== */

void FUN_180568e10(void)

{
  FUN_1800132b0(&DAT_180ca1958);
  FUN_180023a80(&DAT_180ca1948);
  return;
}



/* ===== 180568e30 FUN_180568e30 ===== */

void FUN_180568e30(void)

{
  FUN_1800132b0(&DAT_181107698);
  FUN_18025b950(&DAT_181107688);
  return;
}



/* ===== 180568e50 FUN_180568e50 ===== */

void FUN_180568e50(void)

{
  FUN_1800132b0(&DAT_180ca18d8);
  FUN_180023a80(&DAT_180ca18c8);
  return;
}



/* ===== 180568e70 FUN_180568e70 ===== */

void FUN_180568e70(void)

{
  FUN_1800132b0(&DAT_181107888);
  FUN_180142340(&DAT_181107878);
  return;
}



/* ===== 180568e90 FUN_180568e90 ===== */

void FUN_180568e90(void)

{
  FUN_1800132b0(&DAT_180ca1758);
  FUN_180023a80(&DAT_180ca1748);
  return;
}



/* ===== 180568ed0 FUN_180568ed0 ===== */

void FUN_180568ed0(void)

{
  FUN_18000f890(&DAT_1809f58c8);
  FUN_1800bcd20(&DAT_1809f58a8);
  return;
}



/* ===== 180568ef0 FUN_180568ef0 ===== */

void FUN_180568ef0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1811078b8 == 0) {
    return;
  }
  FUN_180360ca0(DAT_1811078b8,DAT_1811078c0);
  puVar4 = auStack_28;
  lVar2 = DAT_1811078b8;
  puVar3 = auStack_28;
  if (0xfff < (ulonglong)((DAT_1811078c8 - DAT_1811078b8 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_1811078b8 + -8);
    if ((DAT_1811078b8 - lVar2) - 8U < 0x20) goto LAB_180568f60;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180568f60:
  *(undefined8 *)(puVar4 + -8) = 0x180568f68;
  thunk_FUN_1803d64e0(lVar2);
  DAT_1811078c8 = 0;
  DAT_1811078c0 = 0;
  DAT_1811078b8 = 0;
  return;
}



/* ===== 180568f90 FUN_180568f90 ===== */

void FUN_180568f90(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_1811078d8;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_1811078d0;
  if (DAT_1811078d0 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x88) {
    FUN_18000f890(uVar2 + 0x60);
    FUN_18000f890(uVar2 + 0x40);
    FUN_18000f890(uVar2 + 0x20);
    FUN_18000f890(uVar2);
  }
  uVar2 = DAT_1811078d0;
  if (0xfff < (ulonglong)(((longlong)(DAT_1811078e0 - DAT_1811078d0) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_1811078d0 - 8);
    uVar3 = (DAT_1811078d0 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_18056903f;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_18056903f:
  *(undefined8 *)(puVar5 + -8) = 0x180569044;
  thunk_FUN_1803d64e0(uVar2);
  DAT_1811078e0 = 0;
  DAT_1811078d8 = 0;
  DAT_1811078d0 = 0;
  return;
}



/* ===== 180569060 FUN_180569060 ===== */

void FUN_180569060(void)

{
  FUN_1800132b0(&DAT_181107908);
  FUN_180360490(&DAT_1811078f8);
  return;
}



/* ===== 180569080 FUN_180569080 ===== */

void FUN_180569080(void)

{
  FUN_1800132b0(&DAT_180ca19d8);
  FUN_1802828d0(&DAT_180ca19c8);
  return;
}



/* ===== 1805690b0 FUN_1805690b0 ===== */

void FUN_1805690b0(void)

{
  FUN_1804eced0(&DAT_1809f7590,0x20,4,FUN_180364360);
  return;
}



/* ===== 1805690f0 FUN_1805690f0 ===== */

void FUN_1805690f0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_181107d68 == 0) {
    return;
  }
  lVar2 = DAT_181107d68;
  if (0xfff < (ulonglong)((DAT_181107d78 - DAT_181107d68 >> 2) * 4)) {
    lVar2 = *(longlong *)(DAT_181107d68 + -8);
    if ((DAT_181107d68 - lVar2) - 8U < 0x20) goto LAB_180569152;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180569152:
  *(undefined8 *)(puVar4 + -8) = 0x18056915a;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181107d78 = 0;
  DAT_181107d70 = 0;
  DAT_181107d68 = 0;
  return;
}



/* ===== 180569180 FUN_180569180 ===== */

void FUN_180569180(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_181107d50 == 0) {
    return;
  }
  lVar2 = DAT_181107d50;
  if (0xfff < (ulonglong)((DAT_181107d60 - DAT_181107d50 >> 4) << 4)) {
    lVar2 = *(longlong *)(DAT_181107d50 + -8);
    if ((DAT_181107d50 - lVar2) - 8U < 0x20) goto LAB_1805691de;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_1805691de:
  *(undefined8 *)(puVar4 + -8) = 0x1805691e6;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181107d60 = 0;
  DAT_181107d58 = 0;
  DAT_181107d50 = 0;
  return;
}



/* ===== 180569230 FUN_180569230 ===== */

void FUN_180569230(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_181107de0 == 0) {
    return;
  }
  lVar2 = DAT_181107de0;
  if (0xfff < (ulonglong)((DAT_181107df0 - DAT_181107de0 >> 4) << 4)) {
    lVar2 = *(longlong *)(DAT_181107de0 + -8);
    if ((DAT_181107de0 - lVar2) - 8U < 0x20) goto LAB_18056928e;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_18056928e:
  *(undefined8 *)(puVar4 + -8) = 0x180569296;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181107df0 = 0;
  DAT_181107de8 = 0;
  DAT_181107de0 = 0;
  return;
}



/* ===== 1805692c0 FUN_1805692c0 ===== */

void FUN_1805692c0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_181107d90 == 0) {
    return;
  }
  lVar2 = DAT_181107d90;
  if (0xfff < (ulonglong)((DAT_181107da0 - DAT_181107d90 >> 4) << 4)) {
    lVar2 = *(longlong *)(DAT_181107d90 + -8);
    if ((DAT_181107d90 - lVar2) - 8U < 0x20) goto LAB_18056931e;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_18056931e:
  *(undefined8 *)(puVar4 + -8) = 0x180569326;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181107da0 = 0;
  DAT_181107d98 = 0;
  DAT_181107d90 = 0;
  return;
}



/* ===== 180569350 FUN_180569350 ===== */

void FUN_180569350(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_181107e18;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_181107e10;
  if (DAT_181107e10 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x30) {
    FUN_180068f30(uVar2 + 0x18);
    FUN_1800132b0(uVar2);
  }
  uVar2 = DAT_181107e10;
  if (0xfff < (ulonglong)(((longlong)(DAT_181107e20 - DAT_181107e10) >> 4) << 4)) {
    uVar2 = *(ulonglong *)(DAT_181107e10 - 8);
    uVar3 = (DAT_181107e10 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_1805693eb;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_1805693eb:
  *(undefined8 *)(puVar5 + -8) = 0x1805693f0;
  thunk_FUN_1803d64e0(uVar2);
  DAT_181107e20 = 0;
  DAT_181107e18 = 0;
  DAT_181107e10 = 0;
  return;
}



/* ===== 180569420 FUN_180569420 ===== */

void FUN_180569420(void)

{
  FUN_1800132b0(&DAT_181107e98);
  FUN_180023a80(&DAT_181107e88);
  return;
}



/* ===== 180569440 FUN_180569440 ===== */

void FUN_180569440(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1811162b8;
  if (DAT_1811162b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1811162b8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



/* ===== 180569490 FUN_180569490 ===== */

void FUN_180569490(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_181107f40;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_181107f38;
  if (DAT_181107f38 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x48) {
    FUN_18000f890(uVar2 + 0x20);
    FUN_18000f890(uVar2);
  }
  uVar2 = DAT_181107f38;
  if (0xfff < (ulonglong)(((longlong)(DAT_181107f48 - DAT_181107f38) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_181107f38 - 8);
    uVar3 = (DAT_181107f38 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_18056952f;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_18056952f:
  *(undefined8 *)(puVar5 + -8) = 0x180569534;
  thunk_FUN_1803d64e0(uVar2);
  DAT_181107f48 = 0;
  DAT_181107f40 = 0;
  DAT_181107f38 = 0;
  return;
}



/* ===== 180569550 FUN_180569550 ===== */

void FUN_180569550(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_181108110;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_181108108;
  if (DAT_181108108 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x60) {
    FUN_18037e6d0(uVar2 + 0x48);
    FUN_18000f890(uVar2 + 0x20);
    FUN_18000f890(uVar2);
  }
  uVar2 = DAT_181108108;
  if (0xfff < (ulonglong)(((longlong)(DAT_181108118 - DAT_181108108) >> 5) << 5)) {
    uVar2 = *(ulonglong *)(DAT_181108108 - 8);
    uVar3 = (DAT_181108108 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_1805695f4;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_1805695f4:
  *(undefined8 *)(puVar5 + -8) = 0x1805695f9;
  thunk_FUN_1803d64e0(uVar2);
  DAT_181108118 = 0;
  DAT_181108110 = 0;
  DAT_181108108 = 0;
  return;
}



/* ===== 180569620 FUN_180569620 ===== */

void FUN_180569620(void)

{
  FUN_180023ca0(&DAT_181108138);
  FUN_18037c860(&DAT_181108128);
  return;
}



/* ===== 1805696f0 FUN_1805696f0 ===== */

void FUN_1805696f0(void)

{
  FUN_1800132b0(&DAT_181108088);
  FUN_180349cd0(&DAT_181108078);
  return;
}



/* ===== 180569710 FUN_180569710 ===== */

void FUN_180569710(void)

{
  FUN_180023ca0(&DAT_181108188);
  FUN_180023fa0(&DAT_181108178);
  return;
}



/* ===== 180569750 FUN_180569750 ===== */

void FUN_180569750(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_181108828 == 0) {
    return;
  }
  lVar2 = DAT_181108828;
  if (0xfff < (DAT_181108838 - DAT_181108828 & 0xfffffffffffffff0U)) {
    lVar2 = *(longlong *)(DAT_181108828 + -8);
    if ((DAT_181108828 - lVar2) - 8U < 0x20) goto LAB_180569798;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180569798:
  *(undefined8 *)(puVar4 + -8) = 0x18056979d;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181108838 = 0;
  DAT_181108830 = 0;
  DAT_181108828 = 0;
  return;
}



/* ===== 1805697c0 FUN_1805697c0 ===== */

void FUN_1805697c0(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_181108860;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_181108858;
  if (DAT_181108858 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x60) {
    FUN_18000f890(uVar2 + 0x10);
  }
  uVar2 = DAT_181108858;
  if (0xfff < (ulonglong)(((longlong)(DAT_181108868 - DAT_181108858) >> 5) << 5)) {
    uVar2 = *(ulonglong *)(DAT_181108858 - 8);
    uVar3 = (DAT_181108858 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_180569853;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_180569853:
  *(undefined8 *)(puVar5 + -8) = 0x180569858;
  thunk_FUN_1803d64e0(uVar2);
  DAT_181108868 = 0;
  DAT_181108860 = 0;
  DAT_181108858 = 0;
  return;
}



/* ===== 1805698c0 FUN_1805698c0 ===== */

void FUN_1805698c0(void)

{
  FUN_1800132b0(&DAT_1811089c8);
  FUN_180023e20(&DAT_1811089b8);
  return;
}



/* ===== 1805698e0 FUN_1805698e0 ===== */

void FUN_1805698e0(void)

{
  FUN_1800132b0(&DAT_180ca1ac0);
  FUN_1800e8810(&DAT_180ca1ab0);
  FUN_1800289e0(&DAT_180ca1a80);
  FUN_18000f890(&DAT_180ca1a60);
  FUN_1800289e0(&DAT_180ca1a40);
  return;
}



/* ===== 180569930 FUN_180569930 ===== */

void FUN_180569930(void)

{
  FUN_1803a01f0(&DAT_180ca1a30,&DAT_180ca1a30,*(undefined8 *)(DAT_180ca1a30 + 8));
  thunk_FUN_1803d64e0(DAT_180ca1a30,0x60);
  return;
}



/* ===== 180569970 FUN_180569970 ===== */

void FUN_180569970(void)

{
  FUN_1803a0170(&DAT_180ca1a00,&DAT_180ca1a00,*(undefined8 *)(DAT_180ca1a00 + 8));
  thunk_FUN_1803d64e0(DAT_180ca1a00,0x60);
  return;
}



/* ===== 1805699b0 FUN_1805699b0 ===== */

void FUN_1805699b0(void)

{
  FUN_1803a0170(&DAT_180ca1a10,&DAT_180ca1a10,*(undefined8 *)(DAT_180ca1a10 + 8));
  thunk_FUN_1803d64e0(DAT_180ca1a10,0x60);
  return;
}



/* ===== 180569a20 FUN_180569a20 ===== */

void FUN_180569a20(void)

{
  FUN_180023ca0(&DAT_181108d68);
  FUN_1803a9720(&DAT_181108d58);
  return;
}



/* ===== 180569a60 FUN_180569a60 ===== */

void FUN_180569a60(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_181108a40 == 0) {
    return;
  }
  lVar2 = DAT_181108a40;
  if (0xfff < (ulonglong)((DAT_181108a50 - DAT_181108a40 >> 2) * 4)) {
    lVar2 = *(longlong *)(DAT_181108a40 + -8);
    if ((DAT_181108a40 - lVar2) - 8U < 0x20) goto LAB_180569ac2;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180569ac2:
  *(undefined8 *)(puVar4 + -8) = 0x180569aca;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181108a50 = 0;
  DAT_181108a48 = 0;
  DAT_181108a40 = 0;
  return;
}



/* ===== 180569af0 FUN_180569af0 ===== */

void FUN_180569af0(void)

{
  FUN_180023ca0(&DAT_181108e88);
  FUN_1803b5a60(&DAT_181108e78);
  return;
}



/* ===== 180569b10 FUN_180569b10 ===== */

void FUN_180569b10(void)

{
  FUN_180023ca0(&DAT_181108e48);
  FUN_1803b59e0(&DAT_181108e38);
  return;
}



/* ===== 180569b40 FUN_180569b40 ===== */

void FUN_180569b40(void)

{
  FUN_1800132b0(&DAT_18110b5d8);
  FUN_18025b950(&DAT_18110b5c8);
  return;
}



/* ===== 180569b60 FUN_180569b60 ===== */

void FUN_180569b60(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_18110b5a0 == 0) {
    return;
  }
  lVar2 = DAT_18110b5a0;
  if (0xfff < (DAT_18110b5b0 - DAT_18110b5a0 & 0xfffffffffffffff0U)) {
    lVar2 = *(longlong *)(DAT_18110b5a0 + -8);
    if ((DAT_18110b5a0 - lVar2) - 8U < 0x20) goto LAB_180569ba8;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180569ba8:
  *(undefined8 *)(puVar4 + -8) = 0x180569bad;
  thunk_FUN_1803d64e0(lVar2);
  DAT_18110b5b0 = 0;
  DAT_18110b5a8 = 0;
  DAT_18110b5a0 = 0;
  return;
}



/* ===== 180569be0 FUN_180569be0 ===== */

void FUN_180569be0(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_181111850;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_181111848;
  if (DAT_181111848 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x68) {
    FUN_18000f890(uVar2 + 0x40);
    FUN_18000f890(uVar2 + 0x20);
    FUN_18000f890(uVar2);
  }
  uVar2 = DAT_181111848;
  if (0xfff < (ulonglong)(((longlong)(DAT_181111858 - DAT_181111848) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_181111848 - 8);
    uVar3 = (DAT_181111848 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_180569c80;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_180569c80:
  *(undefined8 *)(puVar5 + -8) = 0x180569c85;
  thunk_FUN_1803d64e0(uVar2);
  DAT_181111858 = 0;
  DAT_181111850 = 0;
  DAT_181111848 = 0;
  return;
}



/* ===== 180569cd0 FUN_180569cd0 ===== */

void FUN_180569cd0(void)

{
  FUN_180011610(&DAT_180c3d788);
  FUN_180200b70(&DAT_180c3d770);
  return;
}



/* ===== 180569cf0 FUN_180569cf0 ===== */

void FUN_180569cf0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_1811119c8 == 0) {
    return;
  }
  lVar2 = DAT_1811119c8;
  if (0xfff < (ulonglong)((DAT_1811119d8 - DAT_1811119c8 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_1811119c8 + -8);
    if ((DAT_1811119c8 - lVar2) - 8U < 0x20) goto LAB_180569d52;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180569d52:
  *(undefined8 *)(puVar4 + -8) = 0x180569d5a;
  thunk_FUN_1803d64e0(lVar2);
  DAT_1811119d8 = 0;
  DAT_1811119d0 = 0;
  DAT_1811119c8 = 0;
  return;
}



/* ===== 180569d80 FUN_180569d80 ===== */

void FUN_180569d80(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_181111980 == 0) {
    return;
  }
  lVar2 = DAT_181111980;
  if (0xfff < (ulonglong)((DAT_181111990 - DAT_181111980 >> 4) << 4)) {
    lVar2 = *(longlong *)(DAT_181111980 + -8);
    if ((DAT_181111980 - lVar2) - 8U < 0x20) goto LAB_180569dde;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180569dde:
  *(undefined8 *)(puVar4 + -8) = 0x180569de6;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181111990 = 0;
  DAT_181111988 = 0;
  DAT_181111980 = 0;
  return;
}



/* ===== 180569e30 FUN_180569e30 ===== */

void FUN_180569e30(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_1811119e0 == 0) {
    return;
  }
  lVar2 = DAT_1811119e0;
  if (0xfff < (ulonglong)((DAT_1811119f0 - DAT_1811119e0 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_1811119e0 + -8);
    if ((DAT_1811119e0 - lVar2) - 8U < 0x20) goto LAB_180569e80;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180569e80:
  *(undefined8 *)(puVar4 + -8) = 0x180569e88;
  thunk_FUN_1803d64e0(lVar2);
  DAT_1811119f0 = 0;
  DAT_1811119e8 = 0;
  DAT_1811119e0 = 0;
  return;
}



/* ===== 180569ec0 FUN_180569ec0 ===== */

void FUN_180569ec0(void)

{
  FUN_1804eced0(&DAT_180c3df70,2000,0x96,&LAB_18043b690);
  return;
}



/* ===== 180569f10 FUN_180569f10 ===== */

void FUN_180569f10(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_181111da0 == 0) {
    return;
  }
  lVar2 = DAT_181111da0;
  if (0xfff < (DAT_181111db0 - DAT_181111da0 & 0xffffffffffffffc0U)) {
    lVar2 = *(longlong *)(DAT_181111da0 + -8);
    if ((DAT_181111da0 - lVar2) - 8U < 0x20) goto LAB_180569f58;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180569f58:
  *(undefined8 *)(puVar4 + -8) = 0x180569f5d;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181111db0 = 0;
  DAT_181111da8 = 0;
  DAT_181111da0 = 0;
  return;
}



/* ===== 180569f90 FUN_180569f90 ===== */

void FUN_180569f90(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_181111dd0 == 0) {
    return;
  }
  lVar2 = DAT_181111dd0;
  if (0xfff < (ulonglong)((DAT_181111de0 - DAT_181111dd0 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_181111dd0 + -8);
    if ((DAT_181111dd0 - lVar2) - 8U < 0x20) goto LAB_180569fe0;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180569fe0:
  *(undefined8 *)(puVar4 + -8) = 0x180569fe8;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181111de0 = 0;
  DAT_181111dd8 = 0;
  DAT_181111dd0 = 0;
  return;
}



/* ===== 18056a010 FUN_18056a010 ===== */

void FUN_18056a010(void)

{
  FUN_1804eced0(&DAT_180c87450,0x1008,3,FUN_18045d850);
  return;
}



/* ===== 18056a040 FUN_18056a040 ===== */

void FUN_18056a040(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_181112368 == 0) {
    return;
  }
  FUN_18046bcf0(DAT_181112368,DAT_181112370);
  puVar4 = auStack_28;
  lVar2 = DAT_181112368;
  puVar3 = auStack_28;
  if (0xfff < (ulonglong)((DAT_181112378 - DAT_181112368 >> 4) * 0x10)) {
    lVar2 = *(longlong *)(DAT_181112368 + -8);
    if ((DAT_181112368 - lVar2) - 8U < 0x20) goto LAB_18056a0b0;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_18056a0b0:
  *(undefined8 *)(puVar4 + -8) = 0x18056a0b8;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181112378 = 0;
  DAT_181112370 = 0;
  DAT_181112368 = 0;
  return;
}



/* ===== 18056a0f0 FUN_18056a0f0 ===== */

void FUN_18056a0f0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_181112350 == 0) {
    return;
  }
  lVar2 = DAT_181112350;
  if (0xfff < (ulonglong)((DAT_181112360 - DAT_181112350 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_181112350 + -8);
    if ((DAT_181112350 - lVar2) - 8U < 0x20) goto LAB_18056a140;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_18056a140:
  *(undefined8 *)(puVar4 + -8) = 0x18056a148;
  thunk_FUN_1803d64e0(lVar2);
  DAT_181112360 = 0;
  DAT_181112358 = 0;
  DAT_181112350 = 0;
  return;
}



/* ===== 18056a170 FUN_18056a170 ===== */

void FUN_18056a170(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_1811123b8 == 0) {
    return;
  }
  lVar2 = DAT_1811123b8;
  if (0xfff < (DAT_1811123c8 - DAT_1811123b8 & 0xffffffffffffffc0U)) {
    lVar2 = *(longlong *)(DAT_1811123b8 + -8);
    if ((DAT_1811123b8 - lVar2) - 8U < 0x20) goto LAB_18056a1b8;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_18056a1b8:
  *(undefined8 *)(puVar4 + -8) = 0x18056a1bd;
  thunk_FUN_1803d64e0(lVar2);
  DAT_1811123c8 = 0;
  DAT_1811123c0 = 0;
  DAT_1811123b8 = 0;
  return;
}



/* ===== 18056a200 FUN_18056a200 ===== */

void FUN_18056a200(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_181114270;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_181114268;
  if (DAT_181114268 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x68) {
    FUN_18000f890(uVar2 + 0x48);
    FUN_18000f890(uVar2 + 0x28);
  }
  uVar2 = DAT_181114268;
  if (0xfff < (ulonglong)(((longlong)(DAT_181114278 - DAT_181114268) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_181114268 - 8);
    uVar3 = (DAT_181114268 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_18056a298;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_18056a298:
  *(undefined8 *)(puVar5 + -8) = 0x18056a29d;
  thunk_FUN_1803d64e0(uVar2);
  DAT_181114278 = 0;
  DAT_181114270 = 0;
  DAT_181114268 = 0;
  return;
}



/* ===== 18056a2e0 FUN_18056a2e0 ===== */

void FUN_18056a2e0(void)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  LOCK();
  iVar2 = DAT_1809191dc + -1;
  UNLOCK();
  iVar1 = DAT_1809191dc + -1;
  DAT_1809191dc = iVar2;
  if (iVar1 < 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_180c9eca0;
    do {
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (lpCriticalSection != (LPCRITICAL_SECTION)&DAT_180c9ede0);
  }
  return;
}



/* ===== 18056a330 FUN_18056a330 ===== */

void FUN_18056a330(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = DAT_180c9ee28;
  while (puVar1 != (undefined8 *)0x0) {
    DAT_180c9ee28 = (undefined8 *)*puVar1;
    lVar2 = (*(code *)PTR__guard_dispatch_icall_18056b850)();
    if (lVar2 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18056b850)(lVar2,1);
    }
    thunk_FUN_1805277b0(puVar1);
    puVar1 = DAT_180c9ee28;
  }
  DAT_180c9ee28 = puVar1;
  return;
}



/* ===== 18056a390 FUN_18056a390 ===== */

/* WARNING: Switch with 1 destination removed at 0x00018056a3c7 */

void FUN_18056a390(void)

{
  undefined8 *puVar1;
  
  if ((DAT_180c9ee18 == 0) ||
     (puVar1 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_18056b850)(),
     puVar1 == (undefined8 *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001805400f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,1);
  return;
}



/* ===== 18056a400 FUN_18056a400 ===== */

void FUN_18056a400(void)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_180919460);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809194ac == 0x7fffffff) {
    DAT_1809194ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  while (DAT_180c9f218 != 0) {
    FUN_1804eb6e0(&DAT_180c9f220,&DAT_180919460);
  }
  FUN_1804e4e90(&DAT_180919460);
  return;
}



/* ===== 18056a490 FUN_18056a490 ===== */

void FUN_18056a490(void)

{
  longlong lVar1;
  PVOID pvVar2;
  
  while (DAT_1809194b8 < 10) {
    lVar1 = DAT_1809194b8 * 8;
    DAT_1809194b8 = DAT_1809194b8 + 1;
    pvVar2 = DecodePointer(*(PVOID *)(&DAT_180c9f2c0 + lVar1));
    if (pvVar2 != (PVOID)0x0) {
      (*(code *)PTR__guard_dispatch_icall_18056b850)();
    }
  }
  return;
}



/* ===== 1811bd000 FUN_1811bd000 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1811bd000(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  char *pcVar11;
  size_t sVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  byte *pbVar22;
  longlong unaff_RBX;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  byte *unaff_RBP;
  ulonglong unaff_RSI;
  uint uVar26;
  byte *pbVar27;
  ulonglong *puVar28;
  int iVar29;
  int *piVar30;
  undefined8 *unaff_R12;
  uint uVar31;
  int unaff_R13D;
  ulonglong unaff_R15;
  byte bVar32;
  undefined1 auStackX_8 [24];
  uint uStackX_20;
  byte bStack0000000000000060;
  undefined8 uStack_8;
  
  if (unaff_RBX == 0) {
    if (DAT_180cfc910 != DAT_180cfc918) {
      unaff_RBX = DAT_180cfc910;
      goto LAB_1802dde93;
    }
    unaff_RBP[0x130] = 0;
    unaff_RBP[0x131] = 0;
    unaff_RBP[0x132] = 0;
    unaff_RBP[0x133] = 0;
    unaff_RBP[0x134] = 0;
    unaff_RBP[0x135] = 0;
    unaff_RBP[0x136] = 0;
    unaff_RBP[0x137] = 0;
    unaff_RBP[0x138] = 0;
    unaff_RBP[0x139] = 0;
    unaff_RBP[0x13a] = 0;
    unaff_RBP[0x13b] = 0;
    unaff_RBP[0x13c] = 0;
    unaff_RBP[0x13d] = 0;
    unaff_RBP[0x13e] = 0;
    unaff_RBP[0x13f] = 0;
    unaff_RBP[0x140] = 0;
    unaff_RBP[0x141] = 0;
    unaff_RBP[0x142] = 0;
    unaff_RBP[0x143] = 0;
    unaff_RBP[0x144] = 0;
    unaff_RBP[0x145] = 0;
    unaff_RBP[0x146] = 0;
    unaff_RBP[0x147] = 0;
    *(ulonglong *)(unaff_RBP + 0x148) = unaff_RSI;
    unaff_RBP[0x130] = 0;
    pbVar6 = unaff_RBP + 0x130;
    uVar26 = 0x100;
    uVar7 = unaff_RSI;
  }
  else {
LAB_1802dde93:
    pbVar6 = (byte *)FUN_180024b50(unaff_RBP + 0x70,unaff_RBX + 0x48);
    uVar26 = 0x80;
    uVar7 = *(ulonglong *)(unaff_RBP + 0x148);
  }
  uVar18 = 0;
  uStackX_20 = uVar26;
  if (&bStack0000000000000060 != pbVar6) {
    if (*(ulonglong *)(pbVar6 + 0x18) < 0x10) {
      pbVar10 = pbVar6;
    }
    else {
      pbVar10 = *(byte **)pbVar6;
    }
    FUN_180029840(&bStack0000000000000060,pbVar10,*(undefined8 *)(pbVar6 + 0x10));
    uVar7 = *(ulonglong *)(unaff_RBP + 0x148);
  }
  if ((uVar26 >> 8 == 0) || (uVar26 = uVar26 & 0xfffffeff, uVar7 < 0x10)) {
LAB_1802ddf5b:
    if ((char)uVar26 < '\0') {
      uVar26 = uVar26 & 0xffffff7f;
      FUN_18000f890();
    }
    *(uint *)(unaff_RBP + -0x80) = -(uint)(unaff_RBX != 0) & 3;
    if (unaff_RBX != 0) {
      unaff_R12 = (undefined8 *)(unaff_RBX + 0x28);
      unaff_RBP[0x50] = 0;
      unaff_RBP[0x51] = 0;
      unaff_RBP[0x52] = 0;
      unaff_RBP[0x53] = 0;
      unaff_RBP[0x54] = 0;
      unaff_RBP[0x55] = 0;
      unaff_RBP[0x56] = 0;
      unaff_RBP[0x57] = 0;
      unaff_RBP[0x58] = 0;
      unaff_RBP[0x59] = 0;
      unaff_RBP[0x5a] = 0;
      unaff_RBP[0x5b] = 0;
      unaff_RBP[0x5c] = 0;
      unaff_RBP[0x5d] = 0;
      unaff_RBP[0x5e] = 0;
      unaff_RBP[0x5f] = 0;
      unaff_RBP[0x60] = 0;
      unaff_RBP[0x61] = 0;
      unaff_RBP[0x62] = 0;
      unaff_RBP[99] = 0;
      unaff_RBP[100] = 0;
      unaff_RBP[0x65] = 0;
      unaff_RBP[0x66] = 0;
      unaff_RBP[0x67] = 0;
      unaff_RBP[0x68] = 0;
      unaff_RBP[0x69] = 0;
      unaff_RBP[0x6a] = 0;
      unaff_RBP[0x6b] = 0;
      unaff_RBP[0x6c] = 0;
      unaff_RBP[0x6d] = 0;
      unaff_RBP[0x6e] = 0;
      unaff_RBP[0x6f] = 0;
      uVar18 = *(ulonglong *)(unaff_RBX + 0x38);
      if (0xf < *(ulonglong *)(unaff_RBX + 0x40)) {
        unaff_R12 = (undefined8 *)*unaff_R12;
      }
      unaff_R15 = 0x7fffffffffffffff;
      if (0x7fffffffffffffff < uVar18) goto LAB_1802dee61;
      if (0xf < uVar18) goto LAB_1802ddfde;
      *(ulonglong *)(unaff_RBP + 0x60) = uVar18;
      *(ulonglong *)(unaff_RBP + 0x68) = unaff_RSI;
      pbVar6 = (byte *)*unaff_R12;
      uVar14 = unaff_R12[1];
      *(byte **)(unaff_RBP + 0x50) = pbVar6;
      *(undefined8 *)(unaff_RBP + 0x58) = uVar14;
      uVar7 = unaff_RSI;
      goto LAB_1802de022;
    }
    unaff_RBP[0xb0] = 0;
    unaff_RBP[0xb1] = 0;
    unaff_RBP[0xb2] = 0;
    unaff_RBP[0xb3] = 0;
    unaff_RBP[0xb4] = 0;
    unaff_RBP[0xb5] = 0;
    unaff_RBP[0xb6] = 0;
    unaff_RBP[0xb7] = 0;
    unaff_RBP[0xb8] = 0;
    unaff_RBP[0xb9] = 0;
    unaff_RBP[0xba] = 0;
    unaff_RBP[0xbb] = 0;
    unaff_RBP[0xbc] = 0;
    unaff_RBP[0xbd] = 0;
    unaff_RBP[0xbe] = 0;
    unaff_RBP[0xbf] = 0;
    unaff_RBP[0xc0] = 9;
    unaff_RBP[0xc1] = 0;
    unaff_RBP[0xc2] = 0;
    unaff_RBP[0xc3] = 0;
    unaff_RBP[0xc4] = 0;
    unaff_RBP[0xc5] = 0;
    unaff_RBP[0xc6] = 0;
    unaff_RBP[199] = 0;
    *(ulonglong *)(unaff_RBP + 200) = unaff_RSI;
    pbVar6 = (byte *)s_Music_Kit_18075f988._0_8_;
    *(undefined8 *)(unaff_RBP + 0xb0) = s_Music_Kit_18075f988._0_8_;
    unaff_RBP[0xb8] = s_Music_Kit_18075f988[8];
    unaff_RBP[0xb9] = 0;
    pbVar10 = unaff_RBP + 0xb0;
    uVar26 = uVar26 | 0x400;
    pbVar27 = unaff_RBP + 0xc0;
    puVar28 = (ulonglong *)(unaff_RBP + 200);
    uVar7 = *(ulonglong *)(unaff_RBP + 0x68);
    pbVar22 = *(byte **)(unaff_RBP + 0x50);
    lVar15 = (longlong)pbVar6;
  }
  else {
    uVar17 = uVar7 + 1;
    lVar15 = *(longlong *)(unaff_RBP + 0x130);
    lVar16 = lVar15;
    if (uVar17 < 0x1000) {
LAB_1802ddf55:
      thunk_FUN_1803d64e0(lVar16,uVar17);
      goto LAB_1802ddf5b;
    }
    lVar16 = *(longlong *)(lVar15 + -8);
    if ((lVar15 - lVar16) - 8U < 0x20) {
      uVar17 = uVar7 + 0x28;
      goto LAB_1802ddf55;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
LAB_1802ddfde:
    uVar7 = uVar18 | 0xf;
    if (unaff_R15 < uVar7) {
      uVar7 = unaff_R15;
    }
    else if (uVar7 < 0x16) {
      uVar7 = 0x16;
    }
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de004;
    pbVar6 = (byte *)FUN_18000fb70(uVar7 + 1);
    *(byte **)(unaff_RBP + 0x50) = pbVar6;
    *(ulonglong *)(unaff_RBP + 0x60) = uVar18;
    *(ulonglong *)(unaff_RBP + 0x68) = uVar7;
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de022;
    FUN_180540530(pbVar6,unaff_R12,uVar18 + 1);
LAB_1802de022:
    pbVar10 = unaff_RBP + 0x50;
    uVar26 = uVar26 | 0x200;
    pbVar27 = unaff_RBP + 0x60;
    puVar28 = (ulonglong *)(unaff_RBP + 0x68);
    unaff_RSI = *(ulonglong *)(unaff_RBP + 200);
    unaff_R15 = *(ulonglong *)((longlong)register0x00000020 + 0x30);
    lVar15 = *(longlong *)(unaff_RBP + 0xb0);
    pbVar22 = pbVar6;
  }
  iVar20 = (int)uVar18;
  *(uint *)((longlong)register0x00000020 + 0x20) = uVar26;
  if (unaff_RBP + -0x78 != pbVar10) {
    if (*puVar28 < 0x10) {
      pbVar6 = pbVar10;
    }
    uVar14 = *(undefined8 *)pbVar27;
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de0d7;
    FUN_180029840(unaff_RBP + -0x78,pbVar6,uVar14);
    uVar7 = *(ulonglong *)(unaff_RBP + 0x68);
    pbVar22 = *(byte **)(unaff_RBP + 0x50);
    unaff_RSI = *(ulonglong *)(unaff_RBP + 200);
    lVar15 = *(longlong *)(unaff_RBP + 0xb0);
  }
  bVar32 = (byte)pbVar27;
  if ((uVar26 >> 10 != 0) && (uVar26 = uVar26 & 0xfffffbff, 0xf < unaff_RSI)) {
    uVar18 = unaff_RSI + 1;
    lVar16 = lVar15;
    if (0xfff < uVar18) {
      lVar16 = *(longlong *)(lVar15 + -8);
      if (0x1f < (lVar15 - lVar16) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        if (unaff_R13D == 6) {
          if ((DAT_1809216e8 != 0) || (DAT_180cec7d8 != 0)) {
            *(undefined8 *)register0x00000020 = 0x1802de1e1;
            FUN_180280f20();
          }
          *(int *)((longlong)register0x00000020 + 0x5c) = DAT_1809216e8;
          uVar7 = FUN_1811bd025();
          return uVar7;
        }
        iVar29 = (int)unaff_R12;
        if (unaff_R13D == 1) {
          if (iVar29 == 0) {
            iVar20 = DAT_18092149c;
          }
          else {
            iVar20 = DAT_1809214a4;
            if (DAT_1809214a4 < 0) {
              iVar20 = DAT_18092149c;
            }
          }
          if (iVar20 == 0) {
            pcVar11 = "weapon_knife_t";
            if (iVar29 == 0) {
              pcVar11 = "weapon_knife";
            }
            *(undefined8 *)register0x00000020 = 0x1802de54c;
            piVar8 = (int *)FUN_1802d48a0(pcVar11);
            if (piVar8 == (int *)0x0) {
              iVar20 = 0x3b;
              if (iVar29 == 0) {
                iVar20 = 0x2a;
              }
              bVar32 = 0;
              pbVar22 = (byte *)0x0;
            }
            else {
              iVar20 = *piVar8;
              bVar32 = 0;
              pbVar22 = (byte *)0x0;
            }
          }
          else {
            bVar32 = iVar20 != 0;
            pbVar22 = (byte *)0x0;
          }
        }
        else if (unaff_R13D == 2) {
          if (iVar29 == 0) {
            iVar21 = DAT_1809214a0;
          }
          else {
            iVar21 = DAT_1809214a8;
            if (DAT_1809214a8 < 0) {
              iVar21 = DAT_1809214a0;
            }
          }
          iVar20 = iVar21;
          if (iVar21 == 0) {
            iVar20 = 0x13a5 - (uint)(iVar29 != 0);
          }
          bVar32 = iVar21 != 0;
        }
        *(int *)((longlong)register0x00000020 + 0x5c) = iVar20;
        if (0 < iVar20) {
          pbVar6 = (byte *)&DAT_18092174c;
          do {
            if ((*(int *)pbVar6 == iVar20) && (*(int *)(pbVar6 + 4) == iVar29)) goto LAB_1802de64d;
            pbVar6 = pbVar6 + 0x1a0;
          } while (pbVar6 != (byte *)&DAT_180931b4c);
          pbVar6 = (byte *)&DAT_18092174c;
          do {
            if ((*(int *)pbVar6 == iVar20) && (*(int *)(pbVar6 + 4) < 0)) goto LAB_1802de64d;
            pbVar6 = pbVar6 + 0x1a0;
          } while (pbVar6 != (byte *)&DAT_180931b4c);
        }
        *(byte **)((longlong)register0x00000020 + 0x30) = pbVar22;
        iVar21 = (int)pbVar22;
        *(int *)((longlong)register0x00000020 + 0x60) = iVar21;
        pbVar6 = pbVar22;
        goto LAB_1802de61c;
      }
      uVar18 = unaff_RSI + 0x28;
    }
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de12a;
    thunk_FUN_1803d64e0(lVar16,uVar18);
  }
  if (((uVar26 >> 9 & 1) != 0) && (0xf < uVar7)) {
    uVar18 = uVar7 + 1;
    pbVar6 = pbVar22;
    if (0xfff < uVar18) {
      pbVar6 = *(byte **)(pbVar22 + -8);
      if (pbVar22 + (-8 - (longlong)pbVar6) < (byte *)0x20) {
        uVar18 = uVar7 + 0x28;
        goto LAB_1802de160;
      }
LAB_1802dee5a:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
LAB_1802dee61:
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)register0x00000020 + -8) = &UNK_1802dee66;
      FUN_180011990();
    }
LAB_1802de160:
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de168;
    thunk_FUN_1803d64e0(pbVar6,uVar18);
  }
  *unaff_RBP = DAT_1809216e4 != 0;
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de180;
  FUN_1802deeb0(unaff_R15,(undefined8 *)((longlong)register0x00000020 + 0x50));
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de18a;
  FUN_1800288b0(unaff_RBP + -0x18);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de193;
  FUN_18000f890(unaff_RBP + -0x38);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de19c;
  FUN_18000f890(unaff_RBP + -0x58);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de1a5;
  FUN_18000f890(unaff_RBP + -0x78);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de1af;
  FUN_18000f890((undefined8 *)((longlong)register0x00000020 + 0x60));
  goto LAB_1802dde0f;
LAB_1802de64d:
  *(byte **)((longlong)register0x00000020 + 0x30) = pbVar6;
  iVar21 = *(int *)(pbVar6 + 8);
  *(int *)((longlong)register0x00000020 + 0x60) = iVar21;
  if ((iVar21 == 0) &&
     (((pbVar6[0x14] == 0 && (pbVar6[0x1c] == 0)) && (*(int *)(pbVar6 + 0x188) == 0)))) {
    pbVar10 = pbVar6 + 0xe0;
    if (pbVar6 != pbVar6 + 0xa8) {
      do {
        if (*(int *)pbVar10 != 0) goto LAB_1802de6a6;
        pbVar10 = pbVar10 + 0x1c;
      } while (pbVar10 != pbVar6 + 0x188);
    }
LAB_1802de61c:
    bVar4 = 0;
  }
  else {
LAB_1802de6a6:
    bVar4 = 1;
  }
  *unaff_RBP = bVar32 | bVar4;
  pbVar10 = pbVar6;
  puVar9 = (undefined8 *)((longlong)register0x00000020 + 8);
  if ((unaff_R13D == 2) && (puVar9 = (undefined8 *)((longlong)register0x00000020 + 8), iVar21 == 0))
  {
    *(undefined8 *)register0x00000020 = 0x1802de640;
    puVar9 = (undefined8 *)FUN_180280de0(iVar20);
    if (iVar29 == 0) {
      iVar21 = DAT_1809214a0;
    }
    else {
      iVar21 = DAT_1809214a8;
      if (DAT_1809214a8 < 0) {
        iVar21 = DAT_1809214a0;
      }
    }
    if ((iVar21 == 0) || ((undefined4 *)*puVar9 == (undefined4 *)puVar9[1])) {
      unaff_RBP[0x10] = 0;
      unaff_RBP[0x11] = 0;
      unaff_RBP[0x12] = 0;
      unaff_RBP[0x13] = 0;
      unaff_RBP[0x14] = 0;
      unaff_RBP[0x15] = 0;
      unaff_RBP[0x16] = 0;
      unaff_RBP[0x17] = 0;
      unaff_RBP[0x18] = 0;
      unaff_RBP[0x19] = 0;
      unaff_RBP[0x1a] = 0;
      unaff_RBP[0x1b] = 0;
      unaff_RBP[0x1c] = 0;
      unaff_RBP[0x1d] = 0;
      unaff_RBP[0x1e] = 0;
      unaff_RBP[0x1f] = 0;
      *(byte **)(unaff_RBP + 0x20) = pbVar22;
      *(byte **)(unaff_RBP + 0x28) = pbVar22;
      *(undefined8 *)register0x00000020 = 0x1802de704;
      pcVar11 = (char *)FUN_18000fb70(0x30);
      *(char **)(unaff_RBP + 0x10) = pcVar11;
      unaff_RBP[0x20] = 0x2a;
      unaff_RBP[0x21] = 0;
      unaff_RBP[0x22] = 0;
      unaff_RBP[0x23] = 0;
      unaff_RBP[0x24] = 0;
      unaff_RBP[0x25] = 0;
      unaff_RBP[0x26] = 0;
      unaff_RBP[0x27] = 0;
      unaff_RBP[0x28] = 0x2f;
      uVar14 = s_panorama_images_econ_weapons_bas_18073ea00._8_8_;
      unaff_RBP[0x29] = 0;
      unaff_RBP[0x2a] = 0;
      unaff_RBP[0x2b] = 0;
      unaff_RBP[0x2c] = 0;
      unaff_RBP[0x2d] = 0;
      unaff_RBP[0x2e] = 0;
      unaff_RBP[0x2f] = 0;
      *(undefined8 *)pcVar11 = s_panorama_images_econ_weapons_bas_18073ea00._0_8_;
      *(undefined8 *)(pcVar11 + 8) = uVar14;
      uVar14 = CONCAT62(s_panorama_images_econ_weapons_bas_18073ea00._26_6_,
                        s_panorama_images_econ_weapons_bas_18073ea00._24_2_);
      *(undefined8 *)(pcVar11 + 0x10) = s_panorama_images_econ_weapons_bas_18073ea00._16_8_;
      *(undefined8 *)(pcVar11 + 0x18) = uVar14;
      uVar14 = s_panorama_images_econ_weapons_bas_18073ea00._34_8_;
      *(ulonglong *)(pcVar11 + 0x1a) =
           CONCAT26(s_panorama_images_econ_weapons_bas_18073ea00._32_2_,
                    s_panorama_images_econ_weapons_bas_18073ea00._26_6_);
      *(undefined8 *)(pcVar11 + 0x22) = uVar14;
      pcVar11[0x2a] = '\0';
      *(undefined4 *)((longlong)register0x00000020 + 0x28) = 0x10000;
      pcVar11 = "t_gloves";
      if (iVar29 == 0) {
        pcVar11 = "ct_gloves";
      }
      *(undefined8 *)register0x00000020 = 0x1802de75d;
      sVar12 = strlen(pcVar11);
      *(undefined8 *)register0x00000020 = 0x1802de76c;
      puVar13 = (undefined4 *)FUN_1800134a0(unaff_RBP + 0x10,pcVar11,sVar12);
      unaff_RBP[0x30] = 0;
      unaff_RBP[0x31] = 0;
      unaff_RBP[0x32] = 0;
      unaff_RBP[0x33] = 0;
      unaff_RBP[0x34] = 0;
      unaff_RBP[0x35] = 0;
      unaff_RBP[0x36] = 0;
      unaff_RBP[0x37] = 0;
      unaff_RBP[0x38] = 0;
      unaff_RBP[0x39] = 0;
      unaff_RBP[0x3a] = 0;
      unaff_RBP[0x3b] = 0;
      unaff_RBP[0x3c] = 0;
      unaff_RBP[0x3d] = 0;
      unaff_RBP[0x3e] = 0;
      unaff_RBP[0x3f] = 0;
      unaff_RBP[0x40] = 0;
      unaff_RBP[0x41] = 0;
      unaff_RBP[0x42] = 0;
      unaff_RBP[0x43] = 0;
      unaff_RBP[0x44] = 0;
      unaff_RBP[0x45] = 0;
      unaff_RBP[0x46] = 0;
      unaff_RBP[0x47] = 0;
      unaff_RBP[0x48] = 0;
      unaff_RBP[0x49] = 0;
      unaff_RBP[0x4a] = 0;
      unaff_RBP[0x4b] = 0;
      unaff_RBP[0x4c] = 0;
      unaff_RBP[0x4d] = 0;
      unaff_RBP[0x4e] = 0;
      unaff_RBP[0x4f] = 0;
      uVar5 = puVar13[1];
      uVar2 = puVar13[2];
      uVar3 = puVar13[3];
      *(undefined4 *)(unaff_RBP + 0x30) = *puVar13;
      *(undefined4 *)(unaff_RBP + 0x34) = uVar5;
      *(undefined4 *)(unaff_RBP + 0x38) = uVar2;
      *(undefined4 *)(unaff_RBP + 0x3c) = uVar3;
      uVar5 = puVar13[5];
      uVar2 = puVar13[6];
      uVar3 = puVar13[7];
      *(undefined4 *)(unaff_RBP + 0x40) = puVar13[4];
      *(undefined4 *)(unaff_RBP + 0x44) = uVar5;
      *(undefined4 *)(unaff_RBP + 0x48) = uVar2;
      *(undefined4 *)(unaff_RBP + 0x4c) = uVar3;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(ulonglong *)(puVar13 + 6) = uVar7;
      *(undefined1 *)puVar13 = 0;
      *(undefined4 *)((longlong)register0x00000020 + 0x28) = 0x4030000;
      *(undefined8 *)register0x00000020 = 0x1802de7b6;
      puVar13 = (undefined4 *)FUN_1800134a0(unaff_RBP + 0x30,"_png.vtex_c",0xb);
      uVar5 = puVar13[1];
      uVar2 = puVar13[2];
      uVar3 = puVar13[3];
      *(undefined4 *)(unaff_RBP + 400) = *puVar13;
      *(undefined4 *)(unaff_RBP + 0x194) = uVar5;
      *(undefined4 *)(unaff_RBP + 0x198) = uVar2;
      *(undefined4 *)(unaff_RBP + 0x19c) = uVar3;
      uVar14 = *(undefined8 *)(puVar13 + 6);
      *(undefined8 *)(unaff_RBP + 0x1a0) = *(undefined8 *)(puVar13 + 4);
      *(undefined8 *)(unaff_RBP + 0x1a8) = uVar14;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(ulonglong *)(puVar13 + 6) = uVar7;
      *(undefined1 *)puVar13 = 0;
      pbVar10 = unaff_RBP + 400;
      uVar26 = 0xc070000;
    }
    else {
      uVar5 = *(undefined4 *)*puVar9;
      *(undefined8 *)register0x00000020 = 0x1802de6db;
      pbVar10 = (byte *)FUN_1802816b0(unaff_RBP + 0x70,iVar20,uVar5);
      uVar26 = 0x8000;
    }
    if ((byte *)((longlong)register0x00000020 + 0x68) != pbVar10) {
      uVar18 = *(ulonglong *)((longlong)register0x00000020 + 0x80);
      if (uVar18 < 0x10) {
LAB_1802de829:
        *(undefined8 *)((longlong)register0x00000020 + 0x78) = 0;
        *(ulonglong *)((longlong)register0x00000020 + 0x80) = uVar7;
        *(undefined1 *)((longlong)register0x00000020 + 0x68) = 0;
        *(undefined8 *)((longlong)register0x00000020 + 0x68) = *(undefined8 *)pbVar10;
        *(undefined8 *)((longlong)register0x00000020 + 0x70) = *(undefined8 *)(pbVar10 + 8);
        *(undefined8 *)((longlong)register0x00000020 + 0x78) = *(undefined8 *)(pbVar10 + 0x10);
        *(undefined8 *)((longlong)register0x00000020 + 0x80) = *(undefined8 *)(pbVar10 + 0x18);
        pbVar10[0x10] = 0;
        pbVar10[0x11] = 0;
        pbVar10[0x12] = 0;
        pbVar10[0x13] = 0;
        pbVar10[0x14] = 0;
        pbVar10[0x15] = 0;
        pbVar10[0x16] = 0;
        pbVar10[0x17] = 0;
        *(ulonglong *)(pbVar10 + 0x18) = uVar7;
        *pbVar10 = 0;
        goto LAB_1802de867;
      }
      uVar17 = uVar18 + 1;
      lVar15 = *(longlong *)((longlong)register0x00000020 + 0x68);
      lVar16 = lVar15;
      if (uVar17 < 0x1000) {
LAB_1802de824:
        *(undefined8 *)register0x00000020 = 0x1802de829;
        thunk_FUN_1803d64e0(lVar16,uVar17);
        goto LAB_1802de829;
      }
      lVar16 = *(longlong *)(lVar15 + -8);
      if ((lVar15 - lVar16) - 8U < 0x20) {
        uVar17 = uVar18 + 0x28;
        goto LAB_1802de824;
      }
LAB_1802de968:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar24 = (undefined8 *)((longlong)register0x00000020 + 0x10);
LAB_1802de96f:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar25 = (undefined8 *)((longlong)puVar24 + 8);
LAB_1802de976:
      pbVar10 = &DAT_00000005;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar9 = (undefined8 *)((longlong)puVar25 + 8);
      goto LAB_1802de97d;
    }
LAB_1802de867:
    if ((uVar26 >> 0x12 & 1) != 0) {
      uVar26 = uVar26 & 0xfffbffff;
      uVar18 = *(ulonglong *)(unaff_RBP + 0x1a8);
      if (0xf < uVar18) {
        uVar17 = uVar18 + 1;
        lVar15 = *(longlong *)(unaff_RBP + 400);
        lVar16 = lVar15;
        if (0xfff < uVar17) {
          lVar16 = *(longlong *)(lVar15 + -8);
          if (0x1f < (lVar15 - lVar16) - 8U) goto LAB_1802de968;
          uVar17 = uVar18 + 0x28;
        }
        *(undefined8 *)register0x00000020 = 0x1802de8b2;
        thunk_FUN_1803d64e0(lVar16,uVar17);
      }
    }
    puVar24 = (undefined8 *)((longlong)register0x00000020 + 8);
    if ((uVar26 >> 0x11 & 1) != 0) {
      uVar26 = uVar26 & 0xfffdffff;
      uVar18 = *(ulonglong *)(unaff_RBP + 0x48);
      if (0xf < uVar18) {
        uVar17 = uVar18 + 1;
        lVar15 = *(longlong *)(unaff_RBP + 0x30);
        lVar16 = lVar15;
        if (0xfff < uVar17) {
          lVar16 = *(longlong *)(lVar15 + -8);
          if (0x1f < (lVar15 - lVar16) - 8U) goto LAB_1802de96f;
          uVar17 = uVar18 + 0x28;
        }
        *(undefined8 *)register0x00000020 = 0x1802de8f8;
        thunk_FUN_1803d64e0(lVar16,uVar17);
      }
      unaff_RBP[0x40] = 0;
      unaff_RBP[0x41] = 0;
      unaff_RBP[0x42] = 0;
      unaff_RBP[0x43] = 0;
      unaff_RBP[0x44] = 0;
      unaff_RBP[0x45] = 0;
      unaff_RBP[0x46] = 0;
      unaff_RBP[0x47] = 0;
      *(ulonglong *)(unaff_RBP + 0x48) = uVar7;
      unaff_RBP[0x30] = 0;
    }
    puVar25 = (undefined8 *)((longlong)register0x00000020 + 8);
    if ((uVar26 >> 0x10 & 1) != 0) {
      uVar26 = uVar26 & 0xfffeffff;
      uVar18 = *(ulonglong *)(unaff_RBP + 0x28);
      if (0xf < uVar18) {
        uVar17 = uVar18 + 1;
        lVar15 = *(longlong *)(unaff_RBP + 0x10);
        lVar16 = lVar15;
        if (0xfff < uVar17) {
          lVar16 = *(longlong *)(lVar15 + -8);
          if (0x1f < (lVar15 - lVar16) - 8U) goto LAB_1802de976;
          uVar17 = uVar18 + 0x28;
        }
        *(undefined8 *)register0x00000020 = 0x1802de945;
        thunk_FUN_1803d64e0(lVar16,uVar17);
      }
      unaff_RBP[0x20] = 0;
      unaff_RBP[0x21] = 0;
      unaff_RBP[0x22] = 0;
      unaff_RBP[0x23] = 0;
      unaff_RBP[0x24] = 0;
      unaff_RBP[0x25] = 0;
      unaff_RBP[0x26] = 0;
      unaff_RBP[0x27] = 0;
      *(ulonglong *)(unaff_RBP + 0x28) = uVar7;
      unaff_RBP[0x10] = 0;
    }
    puVar23 = (undefined8 *)((longlong)register0x00000020 + 8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
    if ((uVar26 >> 0xf & 1) != 0) {
      uVar26 = uVar26 & 0xffff7fff;
      pbVar10 = unaff_RBP + 0x70;
      register0x00000020 = (BADSPACEBASE *)puVar23;
      goto LAB_1802dea88;
    }
LAB_1802dea8d:
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802dea99;
    uVar5 = FUN_180280fe0(iVar20,*(undefined4 *)((longlong)register0x00000020 + 0x58));
    *(undefined4 *)(unaff_RBP + -0x80) = uVar5;
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802deaad;
    pbVar10 = (byte *)FUN_1802d4930(unaff_RBP + 0x70,iVar20,
                                    *(undefined4 *)((longlong)register0x00000020 + 0x58));
    if (unaff_RBP + -0x78 != pbVar10) {
      uVar18 = *(ulonglong *)(unaff_RBP + -0x60);
      if (0xf < uVar18) {
        uVar17 = uVar18 + 1;
        lVar15 = *(longlong *)(unaff_RBP + -0x78);
        lVar16 = lVar15;
        if (0xfff < uVar17) {
          lVar16 = *(longlong *)(lVar15 + -8);
          if (0x1f < (lVar15 - lVar16) - 8U) goto LAB_1802dee5a;
          uVar17 = uVar18 + 0x28;
        }
        *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802deaf4;
        thunk_FUN_1803d64e0(lVar16,uVar17);
      }
      unaff_RBP[-0x68] = 0;
      unaff_RBP[-0x67] = 0;
      unaff_RBP[-0x66] = 0;
      unaff_RBP[-0x65] = 0;
      unaff_RBP[-100] = 0;
      unaff_RBP[-99] = 0;
      unaff_RBP[-0x62] = 0;
      unaff_RBP[-0x61] = 0;
      *(ulonglong *)(unaff_RBP + -0x60) = uVar7;
      unaff_RBP[-0x78] = 0;
      *(undefined8 *)(unaff_RBP + -0x78) = *(undefined8 *)pbVar10;
      *(undefined8 *)(unaff_RBP + -0x70) = *(undefined8 *)(pbVar10 + 8);
      *(undefined8 *)(unaff_RBP + -0x68) = *(undefined8 *)(pbVar10 + 0x10);
      *(undefined8 *)(unaff_RBP + -0x60) = *(undefined8 *)(pbVar10 + 0x18);
      pbVar10[0x10] = 0;
      pbVar10[0x11] = 0;
      pbVar10[0x12] = 0;
      pbVar10[0x13] = 0;
      pbVar10[0x14] = 0;
      pbVar10[0x15] = 0;
      pbVar10[0x16] = 0;
      pbVar10[0x17] = 0;
      *(ulonglong *)(pbVar10 + 0x18) = uVar7;
      *pbVar10 = 0;
    }
  }
  else {
LAB_1802de97d:
    register0x00000020 = (BADSPACEBASE *)puVar9;
    if ((pbVar6 == (byte *)0x0) || (*(int *)(pbVar10 + 8) == 0)) {
      *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de9c5;
      puVar9 = (undefined8 *)FUN_1802816b0(unaff_RBP + 0x70,iVar20);
      uVar26 = 0x200000;
    }
    else {
      *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de994;
      FUN_1802816b0(unaff_RBP + 0x10,iVar20);
      *(undefined4 *)((longlong)register0x00000020 + 0x20) = 0x80000;
      *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de9af;
      puVar9 = (undefined8 *)FUN_1802b2ec0(unaff_RBP + 0x30,iVar20,pbVar6);
      uVar26 = 0x180000;
    }
    if ((undefined8 *)((longlong)register0x00000020 + 0x60) == puVar9) {
LAB_1802dea52:
      if (uVar26 >> 0x15 != 0) {
        uVar26 = uVar26 & 0xffdfffff;
        *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802dea65;
        FUN_18000f890(unaff_RBP + 0x70);
      }
      if ((uVar26 >> 0x14 & 1) != 0) {
        uVar26 = uVar26 & 0xffefffff;
        *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802dea79;
        FUN_18000f890(unaff_RBP + 0x30);
      }
      if ((uVar26 >> 0x13 & 1) != 0) {
        uVar26 = uVar26 & 0xfff7ffff;
        pbVar10 = unaff_RBP + 0x10;
LAB_1802dea88:
        *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802dea8d;
        FUN_18000f890(pbVar10);
      }
      goto LAB_1802dea8d;
    }
    uVar18 = *(ulonglong *)((longlong)register0x00000020 + 0x78);
    if (uVar18 < 0x10) {
LAB_1802dea14:
      *(undefined8 *)((longlong)register0x00000020 + 0x70) = 0;
      *(ulonglong *)((longlong)register0x00000020 + 0x78) = uVar7;
      *(undefined1 *)((longlong)register0x00000020 + 0x60) = 0;
      *(undefined8 *)((longlong)register0x00000020 + 0x60) = *puVar9;
      *(undefined8 *)((longlong)register0x00000020 + 0x68) = puVar9[1];
      *(undefined8 *)((longlong)register0x00000020 + 0x70) = puVar9[2];
      *(undefined8 *)((longlong)register0x00000020 + 0x78) = puVar9[3];
      puVar9[2] = 0;
      puVar9[3] = uVar7;
      *(undefined1 *)puVar9 = 0;
      goto LAB_1802dea52;
    }
    uVar17 = uVar18 + 1;
    lVar15 = *(longlong *)((longlong)register0x00000020 + 0x60);
    lVar16 = lVar15;
    if (uVar17 < 0x1000) {
LAB_1802dea0f:
      *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802dea14;
      thunk_FUN_1803d64e0(lVar16,uVar17);
      goto LAB_1802dea14;
    }
    lVar16 = *(longlong *)(lVar15 + -8);
    if ((lVar15 - lVar16) - 8U < 0x20) {
      uVar17 = uVar18 + 0x28;
      goto LAB_1802dea0f;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802deb42;
  FUN_18000f890(unaff_RBP + 0x70);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802deb53;
  pbVar10 = (byte *)FUN_180281250(unaff_RBP + 0x70,iVar20,
                                  *(undefined4 *)((longlong)register0x00000020 + 0x58));
  if (unaff_RBP + -0x58 != pbVar10) {
    uVar18 = *(ulonglong *)(unaff_RBP + -0x40);
    if (0xf < uVar18) {
      uVar17 = uVar18 + 1;
      lVar15 = *(longlong *)(unaff_RBP + -0x58);
      lVar16 = lVar15;
      if (0xfff < uVar17) {
        lVar16 = *(longlong *)(lVar15 + -8);
        if (0x1f < (lVar15 - lVar16) - 8U) goto LAB_1802dee5a;
        uVar17 = uVar18 + 0x28;
      }
      *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802deb9a;
      thunk_FUN_1803d64e0(lVar16,uVar17);
    }
    unaff_RBP[-0x48] = 0;
    unaff_RBP[-0x47] = 0;
    unaff_RBP[-0x46] = 0;
    unaff_RBP[-0x45] = 0;
    unaff_RBP[-0x44] = 0;
    unaff_RBP[-0x43] = 0;
    unaff_RBP[-0x42] = 0;
    unaff_RBP[-0x41] = 0;
    *(ulonglong *)(unaff_RBP + -0x40) = uVar7;
    unaff_RBP[-0x58] = 0;
    *(undefined8 *)(unaff_RBP + -0x58) = *(undefined8 *)pbVar10;
    *(undefined8 *)(unaff_RBP + -0x50) = *(undefined8 *)(pbVar10 + 8);
    *(undefined8 *)(unaff_RBP + -0x48) = *(undefined8 *)(pbVar10 + 0x10);
    *(undefined8 *)(unaff_RBP + -0x40) = *(undefined8 *)(pbVar10 + 0x18);
    pbVar10[0x10] = 0;
    pbVar10[0x11] = 0;
    pbVar10[0x12] = 0;
    pbVar10[0x13] = 0;
    pbVar10[0x14] = 0;
    pbVar10[0x15] = 0;
    pbVar10[0x16] = 0;
    pbVar10[0x17] = 0;
    *(ulonglong *)(pbVar10 + 0x18) = uVar7;
    *pbVar10 = 0;
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802debda;
  FUN_18000f890(unaff_RBP + 0x70);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802debeb;
  pbVar10 = (byte *)FUN_180281480(unaff_RBP + 0x70,iVar20,
                                  *(undefined4 *)((longlong)register0x00000020 + 0x58));
  if (unaff_RBP + -0x38 != pbVar10) {
    uVar18 = *(ulonglong *)(unaff_RBP + -0x20);
    if (0xf < uVar18) {
      uVar17 = uVar18 + 1;
      lVar15 = *(longlong *)(unaff_RBP + -0x38);
      lVar16 = lVar15;
      if (0xfff < uVar17) {
        lVar16 = *(longlong *)(lVar15 + -8);
        if (0x1f < (lVar15 - lVar16) - 8U) goto LAB_1802dee5a;
        uVar17 = uVar18 + 0x28;
      }
      *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802dec32;
      thunk_FUN_1803d64e0(lVar16,uVar17);
    }
    unaff_RBP[-0x28] = 0;
    unaff_RBP[-0x27] = 0;
    unaff_RBP[-0x26] = 0;
    unaff_RBP[-0x25] = 0;
    unaff_RBP[-0x24] = 0;
    unaff_RBP[-0x23] = 0;
    unaff_RBP[-0x22] = 0;
    unaff_RBP[-0x21] = 0;
    *(ulonglong *)(unaff_RBP + -0x20) = uVar7;
    unaff_RBP[-0x38] = 0;
    *(undefined8 *)(unaff_RBP + -0x38) = *(undefined8 *)pbVar10;
    *(undefined8 *)(unaff_RBP + -0x30) = *(undefined8 *)(pbVar10 + 8);
    *(undefined8 *)(unaff_RBP + -0x28) = *(undefined8 *)(pbVar10 + 0x10);
    *(undefined8 *)(unaff_RBP + -0x20) = *(undefined8 *)(pbVar10 + 0x18);
    pbVar10[0x10] = 0;
    pbVar10[0x11] = 0;
    pbVar10[0x12] = 0;
    pbVar10[0x13] = 0;
    pbVar10[0x14] = 0;
    pbVar10[0x15] = 0;
    pbVar10[0x16] = 0;
    pbVar10[0x17] = 0;
    *(ulonglong *)(pbVar10 + 0x18) = uVar7;
    *pbVar10 = 0;
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802dec72;
  FUN_18000f890(unaff_RBP + 0x70);
  if ((pbVar6 != (byte *)0x0) && (unaff_R13D == 0)) {
    uVar18 = 0;
    do {
      iVar20 = *(int *)(*(longlong *)((longlong)register0x00000020 + 0x28) + 0xe0 + uVar18 * 0x1c);
      if ((DAT_180ccfeda != '\0') && (piVar8 = DAT_180cfc988, 0 < iVar20)) {
        for (; piVar8 != DAT_180cfc990; piVar8 = piVar8 + 0x26) {
          if (*piVar8 == iVar20) goto LAB_1802dece2;
        }
      }
      piVar8 = (int *)0x0;
LAB_1802dece2:
      if (piVar8 == (int *)0x0) {
        unaff_RBP[0x30] = 0;
        unaff_RBP[0x31] = 0;
        unaff_RBP[0x32] = 0;
        unaff_RBP[0x33] = 0;
        unaff_RBP[0x34] = 0;
        unaff_RBP[0x35] = 0;
        unaff_RBP[0x36] = 0;
        unaff_RBP[0x37] = 0;
        unaff_RBP[0x38] = 0;
        unaff_RBP[0x39] = 0;
        unaff_RBP[0x3a] = 0;
        unaff_RBP[0x3b] = 0;
        unaff_RBP[0x3c] = 0;
        unaff_RBP[0x3d] = 0;
        unaff_RBP[0x3e] = 0;
        unaff_RBP[0x3f] = 0;
        unaff_RBP[0x40] = 0;
        unaff_RBP[0x41] = 0;
        unaff_RBP[0x42] = 0;
        unaff_RBP[0x43] = 0;
        unaff_RBP[0x44] = 0;
        unaff_RBP[0x45] = 0;
        unaff_RBP[0x46] = 0;
        unaff_RBP[0x47] = 0;
        *(ulonglong *)(unaff_RBP + 0x48) = uVar7;
        unaff_RBP[0x30] = 0;
        pbVar6 = unaff_RBP + 0x30;
        uVar26 = uVar26 | 0x800000;
      }
      else {
        piVar30 = piVar8 + 0x12;
        unaff_RBP[0x10] = 0;
        unaff_RBP[0x11] = 0;
        unaff_RBP[0x12] = 0;
        unaff_RBP[0x13] = 0;
        unaff_RBP[0x14] = 0;
        unaff_RBP[0x15] = 0;
        unaff_RBP[0x16] = 0;
        unaff_RBP[0x17] = 0;
        unaff_RBP[0x18] = 0;
        unaff_RBP[0x19] = 0;
        unaff_RBP[0x1a] = 0;
        unaff_RBP[0x1b] = 0;
        unaff_RBP[0x1c] = 0;
        unaff_RBP[0x1d] = 0;
        unaff_RBP[0x1e] = 0;
        unaff_RBP[0x1f] = 0;
        unaff_RBP[0x20] = 0;
        unaff_RBP[0x21] = 0;
        unaff_RBP[0x22] = 0;
        unaff_RBP[0x23] = 0;
        unaff_RBP[0x24] = 0;
        unaff_RBP[0x25] = 0;
        unaff_RBP[0x26] = 0;
        unaff_RBP[0x27] = 0;
        unaff_RBP[0x28] = 0;
        unaff_RBP[0x29] = 0;
        unaff_RBP[0x2a] = 0;
        unaff_RBP[0x2b] = 0;
        unaff_RBP[0x2c] = 0;
        unaff_RBP[0x2d] = 0;
        unaff_RBP[0x2e] = 0;
        unaff_RBP[0x2f] = 0;
        uVar17 = *(ulonglong *)(piVar8 + 0x16);
        if (0xf < *(ulonglong *)(piVar8 + 0x18)) {
          piVar30 = *(int **)piVar30;
        }
        if (0x7fffffffffffffff < uVar17) goto LAB_1802dee61;
        if (uVar17 < 0x10) {
          *(ulonglong *)(unaff_RBP + 0x20) = uVar17;
          *(ulonglong *)(unaff_RBP + 0x28) = uVar7;
          iVar20 = piVar30[1];
          iVar29 = piVar30[2];
          iVar21 = piVar30[3];
          *(int *)(unaff_RBP + 0x10) = *piVar30;
          *(int *)(unaff_RBP + 0x14) = iVar20;
          *(int *)(unaff_RBP + 0x18) = iVar29;
          *(int *)(unaff_RBP + 0x1c) = iVar21;
        }
        else {
          uVar19 = uVar17 | 0xf;
          if (uVar19 < 0x8000000000000000) {
            if (uVar19 < 0x16) {
              uVar19 = 0x16;
            }
          }
          else {
            uVar19 = 0x7fffffffffffffff;
          }
          *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802ded51;
          uVar14 = FUN_18000fb70(uVar19 + 1);
          *(undefined8 *)(unaff_RBP + 0x10) = uVar14;
          *(ulonglong *)(unaff_RBP + 0x20) = uVar17;
          *(ulonglong *)(unaff_RBP + 0x28) = uVar19;
          *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802ded6c;
          FUN_180540530(uVar14,piVar30,uVar17 + 1);
        }
        pbVar6 = unaff_RBP + 0x10;
        uVar26 = uVar26 | 0x400000;
      }
      *(uint *)((longlong)register0x00000020 + 0x20) = uVar26;
      lVar15 = *(longlong *)(unaff_RBP + -0x10);
      if (lVar15 == *(longlong *)(unaff_RBP + -8)) {
        *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802dedba;
        FUN_180028f00(unaff_RBP + -0x18,lVar15);
      }
      else {
        *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802deda7;
        FUN_180024b50(lVar15,pbVar6);
        *(longlong *)(unaff_RBP + -0x10) = *(longlong *)(unaff_RBP + -0x10) + 0x20;
      }
      if ((uVar26 >> 0x17 & 1) != 0) {
        uVar26 = uVar26 & 0xff7fffff;
        uVar17 = *(ulonglong *)(unaff_RBP + 0x48);
        if (0xf < uVar17) {
          uVar19 = uVar17 + 1;
          lVar15 = *(longlong *)(unaff_RBP + 0x30);
          lVar16 = lVar15;
          if (0xfff < uVar19) {
            lVar16 = *(longlong *)(lVar15 + -8);
            if (0x1f < (lVar15 - lVar16) - 8U) {
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
              goto LAB_1802dee5a;
            }
            uVar19 = uVar17 + 0x28;
          }
          *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802dedfc;
          thunk_FUN_1803d64e0(lVar16,uVar19);
        }
      }
      if ((uVar26 >> 0x16 & 1) != 0) {
        uVar26 = uVar26 & 0xffbfffff;
        uVar17 = *(ulonglong *)(unaff_RBP + 0x28);
        if (0xf < uVar17) {
          uVar19 = uVar17 + 1;
          lVar15 = *(longlong *)(unaff_RBP + 0x10);
          lVar16 = lVar15;
          if (0xfff < uVar19) {
            lVar16 = *(longlong *)(lVar15 + -8);
            if (0x1f < (lVar15 - lVar16) - 8U) goto LAB_1802dee5a;
            uVar19 = uVar17 + 0x28;
          }
          *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802dee3e;
          thunk_FUN_1803d64e0(lVar16,uVar19);
        }
      }
      uVar31 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar31;
    } while ((int)uVar31 < 5);
  }
  unaff_R15 = *(ulonglong *)((longlong)register0x00000020 + 0x30);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802ddddd;
  FUN_1802deeb0(unaff_R15,(undefined1 *)((longlong)register0x00000020 + 0x50));
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802ddde7;
  FUN_1800288b0(unaff_RBP + -0x18);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802dddf0;
  FUN_18000f890(unaff_RBP + -0x38);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802dddf9;
  FUN_18000f890(unaff_RBP + -0x58);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802dde02;
  FUN_18000f890(unaff_RBP + -0x78);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802dde0c;
  FUN_18000f890((undefined1 *)((longlong)register0x00000020 + 0x60));
LAB_1802dde0f:
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802dde1e;
  return unaff_R15;
}



