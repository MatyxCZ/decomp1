/* ===== 180008db0 FUN_180008db0 ===== */

void FUN_180008db0(void)

{
  FUN_18025bb30(&DAT_180ca1980);
  FUN_1804ece40(FUN_180568270);
  return;
}



/* ===== 180008dd0 FUN_180008dd0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180008dd0(void)

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
  DAT_181107788 = (longlong *)0x0;
  _DAT_181107790 = (longlong *)0x0;
  DAT_181107798 = (longlong *)0x0;
  DAT_1811077a0 = 7;
  DAT_1811077a8 = 8;
  DAT_181107770 = 0x3f800000;
  DAT_181107778 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_181107798 - (longlong)DAT_181107788 == 0) goto LAB_180008e86;
  lVar5 = (longlong)DAT_181107788;
  if ((ulonglong)(((longlong)DAT_181107798 - (longlong)DAT_181107788 >> 3) * 8) < 0x1000) {
LAB_180008e7e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181107788 + -8);
    if (0x1f < ((longlong)DAT_181107788 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180008e7e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180008e86;
  thunk_FUN_1803d64e0(lVar5);
LAB_180008e86:
  plVar1 = plVar4 + 0x10;
  _DAT_181107790 = plVar1;
  DAT_181107798 = plVar1;
  DAT_181107788 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180568290);
  return;
}



/* ===== 180008ee0 FUN_180008ee0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180008ee0(void)

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
  DAT_181107128 = (longlong *)0x0;
  _DAT_181107130 = (longlong *)0x0;
  DAT_181107138 = (longlong *)0x0;
  DAT_181107140 = 7;
  DAT_181107148 = 8;
  DAT_181107110 = 0x3f800000;
  DAT_181107118 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_181107138 - (longlong)DAT_181107128 == 0) goto LAB_180008f96;
  lVar5 = (longlong)DAT_181107128;
  if ((ulonglong)(((longlong)DAT_181107138 - (longlong)DAT_181107128 >> 3) * 8) < 0x1000) {
LAB_180008f8e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181107128 + -8);
    if (0x1f < ((longlong)DAT_181107128 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180008f8e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180008f96;
  thunk_FUN_1803d64e0(lVar5);
LAB_180008f96:
  plVar1 = plVar4 + 0x10;
  _DAT_181107130 = plVar1;
  DAT_181107138 = plVar1;
  DAT_181107128 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_1805682b0);
  return;
}



/* ===== 180009000 FUN_180009000 ===== */

void FUN_180009000(void)

{
  FUN_18025bb30(&DAT_180ca16c0);
  FUN_1804ece40(FUN_1805682e0);
  return;
}



/* ===== 180009060 FUN_180009060 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180009060(void)

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
  
  lVar3 = FUN_1804ecaa0(0x68);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_181107438 = (longlong *)0x0;
  _DAT_181107440 = (longlong *)0x0;
  DAT_181107448 = (longlong *)0x0;
  DAT_181107450 = 7;
  DAT_181107458 = 8;
  DAT_181107420 = 0x3f800000;
  DAT_181107428 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_181107448 - (longlong)DAT_181107438 == 0) goto LAB_180009116;
  lVar5 = (longlong)DAT_181107438;
  if ((ulonglong)(((longlong)DAT_181107448 - (longlong)DAT_181107438 >> 3) * 8) < 0x1000) {
LAB_18000910e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181107438 + -8);
    if (0x1f < ((longlong)DAT_181107438 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000910e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180009116;
  thunk_FUN_1803d64e0(lVar5);
LAB_180009116:
  plVar1 = plVar4 + 0x10;
  _DAT_181107440 = plVar1;
  DAT_181107448 = plVar1;
  DAT_181107438 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180568470);
  return;
}



/* ===== 1800091b0 FUN_1800091b0 ===== */

void FUN_1800091b0(void)

{
  FUN_180023b90(&DAT_180ca1800);
  FUN_1804ece40(FUN_180568670);
  return;
}



/* ===== 1800091d0 FUN_1800091d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800091d0(void)

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
  DAT_181106ed8 = (longlong *)0x0;
  _DAT_181106ee0 = (longlong *)0x0;
  DAT_181106ee8 = (longlong *)0x0;
  DAT_181106ef0 = 7;
  DAT_181106ef8 = 8;
  DAT_181106ec0 = 0x3f800000;
  DAT_181106ec8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_181106ee8 - (longlong)DAT_181106ed8 == 0) goto LAB_180009286;
  lVar5 = (longlong)DAT_181106ed8;
  if ((ulonglong)(((longlong)DAT_181106ee8 - (longlong)DAT_181106ed8 >> 3) * 8) < 0x1000) {
LAB_18000927e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181106ed8 + -8);
    if (0x1f < ((longlong)DAT_181106ed8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000927e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180009286;
  thunk_FUN_1803d64e0(lVar5);
LAB_180009286:
  plVar1 = plVar4 + 0x10;
  _DAT_181106ee0 = plVar1;
  DAT_181106ee8 = plVar1;
  DAT_181106ed8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180568690);
  return;
}



/* ===== 180009310 FUN_180009310 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180009310(void)

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
  DAT_181106fe8 = (longlong *)0x0;
  _DAT_181106ff0 = (longlong *)0x0;
  DAT_181106ff8 = (longlong *)0x0;
  DAT_181107000 = 7;
  DAT_181107008 = 8;
  DAT_181106fd0 = 0x3f800000;
  DAT_181106fd8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_181106ff8 - (longlong)DAT_181106fe8 == 0) goto LAB_1800093c6;
  lVar5 = (longlong)DAT_181106fe8;
  if ((ulonglong)(((longlong)DAT_181106ff8 - (longlong)DAT_181106fe8 >> 3) * 8) < 0x1000) {
LAB_1800093be:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181106fe8 + -8);
    if (0x1f < ((longlong)DAT_181106fe8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_1800093be;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800093c6;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800093c6:
  plVar1 = plVar4 + 0x10;
  _DAT_181106ff0 = plVar1;
  DAT_181106ff8 = plVar1;
  DAT_181106fe8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180568770);
  return;
}



/* ===== 1800094f0 FUN_1800094f0 ===== */

void FUN_1800094f0(void)

{
  FUN_180282950(&DAT_180ca17c0);
  FUN_1804ece40(FUN_1805688e0);
  return;
}



/* ===== 180009600 FUN_180009600 ===== */

void FUN_180009600(void)

{
  FUN_180023e90(&DAT_180ca1900);
  FUN_1804ece40(FUN_180568b60);
  return;
}



/* ===== 1800096b0 FUN_1800096b0 ===== */

void FUN_1800096b0(void)

{
  FUN_180023e90(&DAT_180ca1700);
  FUN_1804ece40(FUN_180568d00);
  return;
}



/* ===== 1800096e0 FUN_1800096e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800096e0(void)

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
  DAT_1811077c8 = (longlong *)0x0;
  _DAT_1811077d0 = (longlong *)0x0;
  DAT_1811077d8 = (longlong *)0x0;
  DAT_1811077e0 = 7;
  DAT_1811077e8 = 8;
  DAT_1811077b0 = 0x3f800000;
  DAT_1811077b8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_1811077d8 - (longlong)DAT_1811077c8 == 0) goto LAB_180009796;
  lVar5 = (longlong)DAT_1811077c8;
  if ((ulonglong)(((longlong)DAT_1811077d8 - (longlong)DAT_1811077c8 >> 3) * 8) < 0x1000) {
LAB_18000978e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_1811077c8 + -8);
    if (0x1f < ((longlong)DAT_1811077c8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000978e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180009796;
  thunk_FUN_1803d64e0(lVar5);
LAB_180009796:
  plVar1 = plVar4 + 0x10;
  _DAT_1811077d0 = plVar1;
  DAT_1811077d8 = plVar1;
  DAT_1811077c8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180568dc0);
  return;
}



/* ===== 180009800 FUN_180009800 ===== */

void FUN_180009800(void)

{
  FUN_180282950(&DAT_180ca1880);
  FUN_1804ece40(FUN_180568df0);
  return;
}



/* ===== 180009820 FUN_180009820 ===== */

void FUN_180009820(void)

{
  FUN_180023b90(&DAT_180ca1940);
  FUN_1804ece40(FUN_180568e10);
  return;
}



/* ===== 180009840 FUN_180009840 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180009840(void)

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
  DAT_181107698 = (longlong *)0x0;
  _DAT_1811076a0 = (longlong *)0x0;
  DAT_1811076a8 = (longlong *)0x0;
  DAT_1811076b0 = 7;
  DAT_1811076b8 = 8;
  DAT_181107680 = 0x3f800000;
  DAT_181107688 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_1811076a8 - (longlong)DAT_181107698 == 0) goto LAB_1800098f6;
  lVar5 = (longlong)DAT_181107698;
  if ((ulonglong)(((longlong)DAT_1811076a8 - (longlong)DAT_181107698 >> 3) * 8) < 0x1000) {
LAB_1800098ee:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181107698 + -8);
    if (0x1f < ((longlong)DAT_181107698 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_1800098ee;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800098f6;
  thunk_FUN_1803d64e0(lVar5);
LAB_1800098f6:
  plVar1 = plVar4 + 0x10;
  _DAT_1811076a0 = plVar1;
  DAT_1811076a8 = plVar1;
  DAT_181107698 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180568e30);
  return;
}



/* ===== 180009950 FUN_180009950 ===== */

void FUN_180009950(void)

{
  FUN_180023b90(&DAT_180ca18c0);
  FUN_1804ece40(FUN_180568e50);
  return;
}



/* ===== 180009970 FUN_180009970 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180009970(void)

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
  DAT_181107888 = (longlong *)0x0;
  _DAT_181107890 = (longlong *)0x0;
  DAT_181107898 = (longlong *)0x0;
  DAT_1811078a0 = 7;
  DAT_1811078a8 = 8;
  DAT_181107870 = 0x3f800000;
  DAT_181107878 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_181107898 - (longlong)DAT_181107888 == 0) goto LAB_180009a26;
  lVar5 = (longlong)DAT_181107888;
  if ((ulonglong)(((longlong)DAT_181107898 - (longlong)DAT_181107888 >> 3) * 8) < 0x1000) {
LAB_180009a1e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181107888 + -8);
    if (0x1f < ((longlong)DAT_181107888 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180009a1e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180009a26;
  thunk_FUN_1803d64e0(lVar5);
LAB_180009a26:
  plVar1 = plVar4 + 0x10;
  _DAT_181107890 = plVar1;
  DAT_181107898 = plVar1;
  DAT_181107888 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180568e70);
  return;
}



/* ===== 180009a80 FUN_180009a80 ===== */

void FUN_180009a80(void)

{
  FUN_180023b90(&DAT_180ca1740);
  FUN_1804ece40(FUN_180568e90);
  return;
}



/* ===== 180009af0 FUN_180009af0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180009af0(void)

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
  DAT_181107908 = (longlong *)0x0;
  _DAT_181107910 = (longlong *)0x0;
  DAT_181107918 = (longlong *)0x0;
  DAT_181107920 = 7;
  DAT_181107928 = 8;
  DAT_1811078f0 = 0x3f800000;
  DAT_1811078f8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_181107918 - (longlong)DAT_181107908 == 0) goto LAB_180009ba6;
  lVar5 = (longlong)DAT_181107908;
  if ((ulonglong)(((longlong)DAT_181107918 - (longlong)DAT_181107908 >> 3) * 8) < 0x1000) {
LAB_180009b9e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181107908 + -8);
    if (0x1f < ((longlong)DAT_181107908 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180009b9e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180009ba6;
  thunk_FUN_1803d64e0(lVar5);
LAB_180009ba6:
  plVar1 = plVar4 + 0x10;
  _DAT_181107910 = plVar1;
  DAT_181107918 = plVar1;
  DAT_181107908 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180569060);
  return;
}



/* ===== 180009c00 FUN_180009c00 ===== */

void FUN_180009c00(void)

{
  FUN_180282950(&DAT_180ca19c0);
  FUN_1804ece40(FUN_180569080);
  return;
}



/* ===== 180009cd0 FUN_180009cd0 ===== */

void FUN_180009cd0(void)

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
  DAT_181107e98 = (longlong *)0x0;
  DAT_181107ea0 = (longlong *)0x0;
  DAT_181107ea8 = (longlong *)0x0;
  DAT_181107eb0 = 7;
  DAT_181107eb8 = 8;
  DAT_181107e80 = 0x3f800000;
  DAT_181107e88 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_181107ea8 - (longlong)DAT_181107e98 == 0) goto LAB_180009d86;
  lVar5 = (longlong)DAT_181107e98;
  if ((ulonglong)(((longlong)DAT_181107ea8 - (longlong)DAT_181107e98 >> 3) * 8) < 0x1000) {
LAB_180009d7e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181107e98 + -8);
    if (0x1f < ((longlong)DAT_181107e98 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180009d7e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180009d86;
  thunk_FUN_1803d64e0(lVar5);
LAB_180009d86:
  plVar1 = plVar4 + 0x10;
  DAT_181107ea0 = plVar1;
  DAT_181107ea8 = plVar1;
  DAT_181107e98 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180569420);
  return;
}



/* ===== 180009e00 FUN_180009e00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180009e00(void)

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
  DAT_181108138 = (longlong *)0x0;
  _DAT_181108140 = (longlong *)0x0;
  DAT_181108148 = (longlong *)0x0;
  DAT_181108150 = 7;
  DAT_181108158 = 8;
  DAT_181108120 = 0x3f800000;
  DAT_181108128 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_181108148 - (longlong)DAT_181108138 == 0) goto LAB_180009eb6;
  lVar5 = (longlong)DAT_181108138;
  if ((ulonglong)(((longlong)DAT_181108148 - (longlong)DAT_181108138 >> 3) * 8) < 0x1000) {
LAB_180009eae:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181108138 + -8);
    if (0x1f < ((longlong)DAT_181108138 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_180009eae;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180009eb6;
  thunk_FUN_1803d64e0(lVar5);
LAB_180009eb6:
  plVar1 = plVar4 + 0x10;
  _DAT_181108140 = plVar1;
  DAT_181108148 = plVar1;
  DAT_181108138 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180569620);
  return;
}



/* ===== 180009f60 FUN_180009f60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180009f60(void)

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
  DAT_181108088 = (longlong *)0x0;
  _DAT_181108090 = (longlong *)0x0;
  DAT_181108098 = (longlong *)0x0;
  DAT_1811080a0 = 7;
  DAT_1811080a8 = 8;
  _DAT_181108070 = 0x3f800000;
  DAT_181108078 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_181108098 - (longlong)DAT_181108088 == 0) goto LAB_18000a016;
  lVar5 = (longlong)DAT_181108088;
  if ((ulonglong)(((longlong)DAT_181108098 - (longlong)DAT_181108088 >> 3) * 8) < 0x1000) {
LAB_18000a00e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181108088 + -8);
    if (0x1f < ((longlong)DAT_181108088 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000a00e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x18000a016;
  thunk_FUN_1803d64e0(lVar5);
LAB_18000a016:
  plVar1 = plVar4 + 0x10;
  _DAT_181108090 = plVar1;
  DAT_181108098 = plVar1;
  DAT_181108088 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_1805696f0);
  return;
}



/* ===== 18000a070 FUN_18000a070 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000a070(void)

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
  DAT_181108188 = (longlong *)0x0;
  _DAT_181108190 = (longlong *)0x0;
  DAT_181108198 = (longlong *)0x0;
  DAT_1811081a0 = 7;
  DAT_1811081a8 = 8;
  DAT_181108170 = 0x3f800000;
  DAT_181108178 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_181108198 - (longlong)DAT_181108188 == 0) goto LAB_18000a126;
  lVar5 = (longlong)DAT_181108188;
  if ((ulonglong)(((longlong)DAT_181108198 - (longlong)DAT_181108188 >> 3) * 8) < 0x1000) {
LAB_18000a11e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181108188 + -8);
    if (0x1f < ((longlong)DAT_181108188 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000a11e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x18000a126;
  thunk_FUN_1803d64e0(lVar5);
LAB_18000a126:
  plVar1 = plVar4 + 0x10;
  _DAT_181108190 = plVar1;
  DAT_181108198 = plVar1;
  DAT_181108188 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180569710);
  return;
}



/* ===== 18000a200 FUN_18000a200 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000a200(void)

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
  DAT_1811089c8 = (longlong *)0x0;
  _DAT_1811089d0 = (longlong *)0x0;
  DAT_1811089d8 = (longlong *)0x0;
  DAT_1811089e0 = 7;
  DAT_1811089e8 = 8;
  DAT_1811089b0 = 0x3f800000;
  DAT_1811089b8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_1811089d8 - (longlong)DAT_1811089c8 == 0) goto LAB_18000a2b6;
  lVar5 = (longlong)DAT_1811089c8;
  if ((ulonglong)(((longlong)DAT_1811089d8 - (longlong)DAT_1811089c8 >> 3) * 8) < 0x1000) {
LAB_18000a2ae:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_1811089c8 + -8);
    if (0x1f < ((longlong)DAT_1811089c8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000a2ae;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x18000a2b6;
  thunk_FUN_1803d64e0(lVar5);
LAB_18000a2b6:
  plVar1 = plVar4 + 0x10;
  _DAT_1811089d0 = plVar1;
  DAT_1811089d8 = plVar1;
  DAT_1811089c8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_1805698c0);
  return;
}



/* ===== 18000a310 FUN_18000a310 ===== */

void FUN_18000a310(void)

{
  FUN_1800e5e30(&DAT_180ca1a40);
  FUN_1804ece40(FUN_1805698e0);
  return;
}



/* ===== 18000a330 FUN_18000a330 ===== */

void FUN_18000a330(void)

{
  DAT_180ca1a30 = FUN_1804ecaa0(0x60);
  *(longlong *)DAT_180ca1a30 = DAT_180ca1a30;
  *(longlong *)(DAT_180ca1a30 + 8) = DAT_180ca1a30;
  *(longlong *)(DAT_180ca1a30 + 0x10) = DAT_180ca1a30;
  *(undefined2 *)(DAT_180ca1a30 + 0x18) = 0x101;
  FUN_1804ece40(FUN_180569930);
  return;
}



/* ===== 18000a370 FUN_18000a370 ===== */

void FUN_18000a370(void)

{
  DAT_180ca1a00 = FUN_1804ecaa0(0x60);
  *(longlong *)DAT_180ca1a00 = DAT_180ca1a00;
  *(longlong *)(DAT_180ca1a00 + 8) = DAT_180ca1a00;
  *(longlong *)(DAT_180ca1a00 + 0x10) = DAT_180ca1a00;
  *(undefined2 *)(DAT_180ca1a00 + 0x18) = 0x101;
  FUN_1804ece40(FUN_180569970);
  return;
}



/* ===== 18000a3b0 FUN_18000a3b0 ===== */

void FUN_18000a3b0(void)

{
  DAT_180ca1a10 = FUN_1804ecaa0(0x60);
  *(longlong *)DAT_180ca1a10 = DAT_180ca1a10;
  *(longlong *)(DAT_180ca1a10 + 8) = DAT_180ca1a10;
  *(longlong *)(DAT_180ca1a10 + 0x10) = DAT_180ca1a10;
  *(undefined2 *)(DAT_180ca1a10 + 0x18) = 0x101;
  FUN_1804ece40(FUN_1805699b0);
  return;
}



/* ===== 18000a3f0 FUN_18000a3f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000a3f0(void)

{
  undefined8 uVar1;
  undefined1 auStack_758 [32];
  undefined8 *local_738;
  undefined1 *local_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  char *local_708;
  char local_700 [8];
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  char *local_6e0;
  char *local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  char *local_6b8;
  char local_6b0 [8];
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  char *local_690;
  char local_688 [8];
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  char *local_668;
  char *local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 local_648;
  char *local_640;
  char local_638 [8];
  ulonglong uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined *local_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 local_5f8;
  char *local_5f0;
  char local_5e8 [8];
  ulonglong uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined *local_5c8;
  char *local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  char *local_5a0;
  char local_598 [8];
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  char *local_578;
  char local_570 [8];
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 local_558;
  char *local_550;
  char local_548 [7];
  char acStack_541 [4];
  undefined1 uStack_53d;
  undefined4 uStack_53c;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined *local_528;
  char local_520 [7];
  char acStack_519 [4];
  undefined1 uStack_515;
  undefined4 uStack_514;
  undefined8 local_510;
  undefined8 local_508;
  undefined *local_500;
  char local_4f8 [8];
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  char *local_4d8;
  undefined7 local_4d0;
  undefined4 uStack_4c9;
  undefined1 uStack_4c5;
  undefined4 uStack_4c4;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined *local_4b0;
  char local_4a8 [8];
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  char *local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined *local_460;
  char local_458 [8];
  ulonglong uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined *local_438;
  char *local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 local_418;
  char *local_410;
  char local_408 [7];
  char acStack_401 [4];
  undefined1 uStack_3fd;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined *local_3e8;
  char local_3e0 [8];
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  char *local_3c0;
  char local_3b8 [8];
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  char *local_398;
  char local_390 [8];
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 local_378;
  char *local_370;
  char local_368 [8];
  ulonglong uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined *local_348;
  char *local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 local_328;
  char *local_320;
  undefined1 local_318 [40];
  undefined1 local_2f0 [40];
  undefined1 local_2c8 [40];
  undefined1 local_2a0 [40];
  undefined1 local_278 [40];
  undefined1 local_250 [40];
  undefined1 local_228 [40];
  undefined1 local_200 [40];
  undefined1 local_1d8 [40];
  undefined1 local_1b0 [40];
  undefined1 local_188 [40];
  undefined1 local_160 [40];
  undefined1 local_138 [40];
  undefined1 local_110 [40];
  undefined1 local_e8 [40];
  undefined1 local_c0 [40];
  undefined1 local_98 [40];
  undefined1 local_70 [40];
  undefined1 local_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_758;
  local_718 = _DAT_1808ad470;
  uStack_710 = _UNK_1808ad478;
  local_728 = 0x656c676145445f43;
  uStack_720 = 0;
  local_708 = "deagle";
  local_6f0 = 0xd;
  local_6e8 = 0xf;
  local_700 = (char  [8])s_C_WeaponElite_18089f838._0_8_;
  uStack_6f8 = (ulonglong)CONCAT14(s_C_WeaponElite_18089f838[0xc],s_C_WeaponElite_18089f838._8_4_);
  local_6e0 = "elite";
  local_6d8 = (char *)0x0;
  uStack_6d0 = 0;
  local_6c8 = 0;
  uStack_6c0 = 0;
  local_6d8 = (char *)FUN_18000fb70(0x20);
  uVar1 = s_C_WeaponFiveSeven_18089f810._8_8_;
  local_6c8 = _DAT_1808ad4e0;
  uStack_6c0 = _UNK_1808ad4e8;
  *(undefined8 *)local_6d8 = s_C_WeaponFiveSeven_18089f810._0_8_;
  *(undefined8 *)(local_6d8 + 8) = uVar1;
  local_6d8[0x10] = s_C_WeaponFiveSeven_18089f810[0x10];
  local_6d8[0x11] = '\0';
  local_6b8 = "fiveseven";
  local_6a0 = 0xd;
  local_698 = 0xf;
  local_6b0[0] = s_C_WeaponGlock_18089f828[0];
  local_6b0[1] = s_C_WeaponGlock_18089f828[1];
  local_6b0[2] = s_C_WeaponGlock_18089f828[2];
  local_6b0[3] = s_C_WeaponGlock_18089f828[3];
  local_6b0[4] = s_C_WeaponGlock_18089f828[4];
  local_6b0[5] = s_C_WeaponGlock_18089f828[5];
  local_6b0[6] = s_C_WeaponGlock_18089f828[6];
  local_6b0[7] = s_C_WeaponGlock_18089f828[7];
  uStack_6a8 = (ulonglong)CONCAT14(s_C_WeaponGlock_18089f828[0xc],s_C_WeaponGlock_18089f828._8_4_);
  local_690 = "glock";
  local_678 = _DAT_1808ad4d0;
  uStack_670 = _UNK_1808ad4d8;
  local_688[0] = s_C_WeaponHKP2000_18089f7e8[0];
  local_688[1] = s_C_WeaponHKP2000_18089f7e8[1];
  local_688[2] = s_C_WeaponHKP2000_18089f7e8[2];
  local_688[3] = s_C_WeaponHKP2000_18089f7e8[3];
  local_688[4] = s_C_WeaponHKP2000_18089f7e8[4];
  local_688[5] = s_C_WeaponHKP2000_18089f7e8[5];
  local_688[6] = s_C_WeaponHKP2000_18089f7e8[6];
  local_688[7] = s_C_WeaponHKP2000_18089f7e8[7];
  uStack_680 = (ulonglong)
               CONCAT16(s_C_WeaponHKP2000_18089f7e8[0xe],
                        CONCAT24(s_C_WeaponHKP2000_18089f7e8._12_2_,
                                 s_C_WeaponHKP2000_18089f7e8._8_4_));
  local_668 = "hkp2000";
  local_660 = (char *)0x0;
  uStack_658 = 0;
  local_650 = 0;
  local_648 = 0;
  local_660 = (char *)FUN_18000fb70(0x20);
  local_650 = 0x13;
  local_648 = 0x1f;
  uVar1 = CONCAT17(s_C_WeaponUSPSilencer_18089f7f8[0xf],s_C_WeaponUSPSilencer_18089f7f8._8_7_);
  *(undefined8 *)local_660 = s_C_WeaponUSPSilencer_18089f7f8._0_8_;
  *(undefined8 *)(local_660 + 8) = uVar1;
  *(undefined4 *)(local_660 + 0xf) = s_C_WeaponUSPSilencer_18089f7f8._15_4_;
  local_660[0x13] = '\0';
  local_640 = "usp_silencer";
  local_628 = _DAT_1808ad4a0;
  uStack_620 = _UNK_1808ad4a8;
  local_638[0] = s_C_WeaponP250_18089f7c8[0];
  local_638[1] = s_C_WeaponP250_18089f7c8[1];
  local_638[2] = s_C_WeaponP250_18089f7c8[2];
  local_638[3] = s_C_WeaponP250_18089f7c8[3];
  local_638[4] = s_C_WeaponP250_18089f7c8[4];
  local_638[5] = s_C_WeaponP250_18089f7c8[5];
  local_638[6] = s_C_WeaponP250_18089f7c8[6];
  local_638[7] = s_C_WeaponP250_18089f7c8[7];
  uStack_630 = (ulonglong)(uint)s_C_WeaponP250_18089f7c8._8_4_;
  local_618 = &DAT_1806f1884;
  local_600 = 0xd;
  local_5f8 = 0xf;
  local_610 = DAT_18089f7d8;
  uStack_608 = (ulonglong)CONCAT14(DAT_18089f7e4,DAT_18089f7e0);
  local_5f0 = "cz75a";
  local_5d8 = _DAT_1808ad4a0;
  uStack_5d0 = _UNK_1808ad4a8;
  local_5e8[0] = s_C_WeaponTec9_18089f8a8[0];
  local_5e8[1] = s_C_WeaponTec9_18089f8a8[1];
  local_5e8[2] = s_C_WeaponTec9_18089f8a8[2];
  local_5e8[3] = s_C_WeaponTec9_18089f8a8[3];
  local_5e8[4] = s_C_WeaponTec9_18089f8a8[4];
  local_5e8[5] = s_C_WeaponTec9_18089f8a8[5];
  local_5e8[6] = s_C_WeaponTec9_18089f8a8[6];
  local_5e8[7] = s_C_WeaponTec9_18089f8a8[7];
  uStack_5e0 = (ulonglong)(uint)s_C_WeaponTec9_18089f8a8._8_4_;
  local_5c8 = &DAT_1806f1864;
  local_5c0 = (char *)0x0;
  uStack_5b8 = 0;
  local_5b0 = 0;
  local_5a8 = 0;
  local_5c0 = (char *)FUN_18000fb70(0x20);
  uVar1 = s_C_WeaponRevolver_18089f8b8._8_8_;
  local_5b0 = 0x10;
  local_5a8 = 0x1f;
  *(undefined8 *)local_5c0 = s_C_WeaponRevolver_18089f8b8._0_8_;
  *(undefined8 *)(local_5c0 + 8) = uVar1;
  local_5c0[0x10] = '\0';
  local_5a0 = "revolver";
  local_588 = _DAT_1808ad4b0;
  uStack_580 = _UNK_1808ad4b8;
  local_598[0] = s_C_WeaponMAC10_18089f888[0];
  local_598[1] = s_C_WeaponMAC10_18089f888[1];
  local_598[2] = s_C_WeaponMAC10_18089f888[2];
  local_598[3] = s_C_WeaponMAC10_18089f888[3];
  local_598[4] = s_C_WeaponMAC10_18089f888[4];
  local_598[5] = s_C_WeaponMAC10_18089f888[5];
  local_598[6] = s_C_WeaponMAC10_18089f888[6];
  local_598[7] = s_C_WeaponMAC10_18089f888[7];
  uStack_590 = (ulonglong)CONCAT14(s_C_WeaponMAC10_18089f888[0xc],s_C_WeaponMAC10_18089f888._8_4_);
  local_578 = "mac10";
  local_560 = 0xd;
  local_558 = 0xf;
  local_570[0] = s_C_WeaponMP5SD_18089f898[0];
  local_570[1] = s_C_WeaponMP5SD_18089f898[1];
  local_570[2] = s_C_WeaponMP5SD_18089f898[2];
  local_570[3] = s_C_WeaponMP5SD_18089f898[3];
  local_570[4] = s_C_WeaponMP5SD_18089f898[4];
  local_570[5] = s_C_WeaponMP5SD_18089f898[5];
  local_570[6] = s_C_WeaponMP5SD_18089f898[6];
  local_570[7] = s_C_WeaponMP5SD_18089f898[7];
  uStack_568 = (ulonglong)CONCAT14(s_C_WeaponMP5SD_18089f898[0xc],s_C_WeaponMP5SD_18089f898._8_4_);
  local_550 = "mp5sd";
  uStack_53c = 0;
  local_538 = _DAT_1808ad490;
  uStack_530 = _UNK_1808ad498;
  local_548[0] = s_C_WeaponMP7_18089f868[0];
  local_548[1] = s_C_WeaponMP7_18089f868[1];
  local_548[2] = s_C_WeaponMP7_18089f868[2];
  local_548[3] = s_C_WeaponMP7_18089f868[3];
  local_548[4] = s_C_WeaponMP7_18089f868[4];
  local_548[5] = s_C_WeaponMP7_18089f868[5];
  local_548[6] = s_C_WeaponMP7_18089f868[6];
  acStack_541[0] = s_C_WeaponMP7_18089f868[7];
  acStack_541[1] = s_C_WeaponMP7_18089f868[8];
  acStack_541[2] = s_C_WeaponMP7_18089f868[9];
  acStack_541[3] = s_C_WeaponMP7_18089f868[10];
  uStack_53d = 0;
  local_528 = &DAT_1806f17cc;
  uStack_514 = 0;
  local_510 = 0xb;
  local_508 = 0xf;
  local_520[0] = s_C_WeaponMP9_18089f878[0];
  local_520[1] = s_C_WeaponMP9_18089f878[1];
  local_520[2] = s_C_WeaponMP9_18089f878[2];
  local_520[3] = s_C_WeaponMP9_18089f878[3];
  local_520[4] = s_C_WeaponMP9_18089f878[4];
  local_520[5] = s_C_WeaponMP9_18089f878[5];
  local_520[6] = s_C_WeaponMP9_18089f878[6];
  acStack_519[0] = s_C_WeaponMP9_18089f878[7];
  acStack_519[1] = s_C_WeaponMP9_18089f878[8];
  acStack_519[2] = s_C_WeaponMP9_18089f878[9];
  acStack_519[3] = s_C_WeaponMP9_18089f878[10];
  uStack_515 = 0;
  local_500 = &DAT_1806f17d8;
  local_4e8 = _DAT_1808ad4b0;
  uStack_4e0 = _UNK_1808ad4b8;
  local_4f8[0] = s_C_WeaponBizon_18089f848[0];
  local_4f8[1] = s_C_WeaponBizon_18089f848[1];
  local_4f8[2] = s_C_WeaponBizon_18089f848[2];
  local_4f8[3] = s_C_WeaponBizon_18089f848[3];
  local_4f8[4] = s_C_WeaponBizon_18089f848[4];
  local_4f8[5] = s_C_WeaponBizon_18089f848[5];
  local_4f8[6] = s_C_WeaponBizon_18089f848[6];
  local_4f8[7] = s_C_WeaponBizon_18089f848[7];
  uStack_4f0 = (ulonglong)CONCAT14(s_C_WeaponBizon_18089f848[0xc],s_C_WeaponBizon_18089f848._8_4_);
  local_4d8 = "bizon";
  uStack_4c4 = 0;
  local_4c0 = 0xb;
  local_4b8 = 0xf;
  local_4d0 = (undefined7)DAT_18089f858;
  uStack_4c9 = ram0x00018089f85f;
  uStack_4c5 = 0;
  local_4b0 = &DAT_1806f17e4;
  local_498 = _DAT_1808ad4b0;
  uStack_490 = _UNK_1808ad4b8;
  local_4a8[0] = s_C_WeaponUMP45_18089f938[0];
  local_4a8[1] = s_C_WeaponUMP45_18089f938[1];
  local_4a8[2] = s_C_WeaponUMP45_18089f938[2];
  local_4a8[3] = s_C_WeaponUMP45_18089f938[3];
  local_4a8[4] = s_C_WeaponUMP45_18089f938[4];
  local_4a8[5] = s_C_WeaponUMP45_18089f938[5];
  local_4a8[6] = s_C_WeaponUMP45_18089f938[6];
  local_4a8[7] = s_C_WeaponUMP45_18089f938[7];
  uStack_4a0 = (ulonglong)CONCAT14(s_C_WeaponUMP45_18089f938[0xc],s_C_WeaponUMP45_18089f938._8_4_);
  local_488 = "ump45";
  uStack_478 = 0;
  local_470 = 6;
  local_468 = 0xf;
  local_480 = (ulonglong)CONCAT24(DAT_18089f94c,DAT_18089f948);
  local_460 = &DAT_1806f1728;
  local_448 = _DAT_1808ad4a0;
  uStack_440 = _UNK_1808ad4a8;
  local_458[0] = s_C_WeaponM4A1_18089f910[0];
  local_458[1] = s_C_WeaponM4A1_18089f910[1];
  local_458[2] = s_C_WeaponM4A1_18089f910[2];
  local_458[3] = s_C_WeaponM4A1_18089f910[3];
  local_458[4] = s_C_WeaponM4A1_18089f910[4];
  local_458[5] = s_C_WeaponM4A1_18089f910[5];
  local_458[6] = s_C_WeaponM4A1_18089f910[6];
  local_458[7] = s_C_WeaponM4A1_18089f910[7];
  uStack_450 = (ulonglong)(uint)s_C_WeaponM4A1_18089f910._8_4_;
  local_438 = &DAT_1806f04fc;
  local_430 = (char *)0x0;
  uStack_428 = 0;
  local_420 = 0;
  local_418 = 0;
  local_430 = (char *)FUN_18000fb70(0x20);
  uVar1 = s_C_WeaponM4A1Silencer_18089f920._8_8_;
  local_420 = 0x14;
  local_418 = 0x1f;
  *(undefined8 *)local_430 = s_C_WeaponM4A1Silencer_18089f920._0_8_;
  *(undefined8 *)(local_430 + 8) = uVar1;
  *(undefined4 *)(local_430 + 0x10) = s_C_WeaponM4A1Silencer_18089f920._16_4_;
  local_430[0x14] = '\0';
  local_410 = "m4a1_silencer";
  uStack_3fc = 0;
  local_3f8 = _DAT_1808ad490;
  uStack_3f0 = _UNK_1808ad498;
  local_408[0] = s_C_WeaponAug_18089f8f0[0];
  local_408[1] = s_C_WeaponAug_18089f8f0[1];
  local_408[2] = s_C_WeaponAug_18089f8f0[2];
  local_408[3] = s_C_WeaponAug_18089f8f0[3];
  local_408[4] = s_C_WeaponAug_18089f8f0[4];
  local_408[5] = s_C_WeaponAug_18089f8f0[5];
  local_408[6] = s_C_WeaponAug_18089f8f0[6];
  acStack_401[0] = s_C_WeaponAug_18089f8f0[7];
  acStack_401[1] = s_C_WeaponAug_18089f8f0[8];
  acStack_401[2] = s_C_WeaponAug_18089f8f0[9];
  acStack_401[3] = s_C_WeaponAug_18089f8f0[10];
  uStack_3fd = 0;
  local_3e8 = &DAT_1806f1788;
  local_3d0 = 0xd;
  local_3c8 = 0xf;
  local_3e0[0] = s_C_WeaponFamas_18089f900[0];
  local_3e0[1] = s_C_WeaponFamas_18089f900[1];
  local_3e0[2] = s_C_WeaponFamas_18089f900[2];
  local_3e0[3] = s_C_WeaponFamas_18089f900[3];
  local_3e0[4] = s_C_WeaponFamas_18089f900[4];
  local_3e0[5] = s_C_WeaponFamas_18089f900[5];
  local_3e0[6] = s_C_WeaponFamas_18089f900[6];
  local_3e0[7] = s_C_WeaponFamas_18089f900[7];
  uStack_3d8 = (ulonglong)CONCAT14(s_C_WeaponFamas_18089f900[0xc],s_C_WeaponFamas_18089f900._8_4_);
  local_3c0 = "famas";
  local_3a8 = _DAT_1808ad4d0;
  uStack_3a0 = _UNK_1808ad4d8;
  local_3b8[0] = s_C_WeaponGalilAR_18089f8d0[0];
  local_3b8[1] = s_C_WeaponGalilAR_18089f8d0[1];
  local_3b8[2] = s_C_WeaponGalilAR_18089f8d0[2];
  local_3b8[3] = s_C_WeaponGalilAR_18089f8d0[3];
  local_3b8[4] = s_C_WeaponGalilAR_18089f8d0[4];
  local_3b8[5] = s_C_WeaponGalilAR_18089f8d0[5];
  local_3b8[6] = s_C_WeaponGalilAR_18089f8d0[6];
  local_3b8[7] = s_C_WeaponGalilAR_18089f8d0[7];
  uStack_3b0 = (ulonglong)
               CONCAT16(s_C_WeaponGalilAR_18089f8d0[0xe],
                        CONCAT24(s_C_WeaponGalilAR_18089f8d0._12_2_,
                                 s_C_WeaponGalilAR_18089f8d0._8_4_));
  local_398 = "galilar";
  local_380 = 0xd;
  local_378 = 0xf;
  local_390[0] = s_C_WeaponSG556_18089f8e0[0];
  local_390[1] = s_C_WeaponSG556_18089f8e0[1];
  local_390[2] = s_C_WeaponSG556_18089f8e0[2];
  local_390[3] = s_C_WeaponSG556_18089f8e0[3];
  local_390[4] = s_C_WeaponSG556_18089f8e0[4];
  local_390[5] = s_C_WeaponSG556_18089f8e0[5];
  local_390[6] = s_C_WeaponSG556_18089f8e0[6];
  local_390[7] = s_C_WeaponSG556_18089f8e0[7];
  uStack_388 = (ulonglong)CONCAT14(s_C_WeaponSG556_18089f8e0[0xc],s_C_WeaponSG556_18089f8e0._8_4_);
  local_370 = "sg556";
  local_358 = _DAT_1808ad4a0;
  uStack_350 = _UNK_1808ad4a8;
  local_368[0] = s_C_WeaponNOVA_18089f9b0[0];
  local_368[1] = s_C_WeaponNOVA_18089f9b0[1];
  local_368[2] = s_C_WeaponNOVA_18089f9b0[2];
  local_368[3] = s_C_WeaponNOVA_18089f9b0[3];
  local_368[4] = s_C_WeaponNOVA_18089f9b0[4];
  local_368[5] = s_C_WeaponNOVA_18089f9b0[5];
  local_368[6] = s_C_WeaponNOVA_18089f9b0[6];
  local_368[7] = s_C_WeaponNOVA_18089f9b0[7];
  uStack_360 = (ulonglong)(uint)s_C_WeaponNOVA_18089f9b0._8_4_;
  local_348 = &DAT_1806f17f8;
  local_340 = (char *)0x0;
  uStack_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_340 = (char *)FUN_18000fb70(0x20);
  uVar1 = s_C_WeaponSawedoff_18089f9c0._8_8_;
  local_330 = 0x10;
  local_328 = 0x1f;
  *(undefined8 *)local_340 = s_C_WeaponSawedoff_18089f9c0._0_8_;
  *(undefined8 *)(local_340 + 8) = uVar1;
  local_340[0x10] = '\0';
  local_320 = "sawedoff";
  FUN_18039f910(local_318,"C_WeaponXM1014","xm1014");
  FUN_18039f910(local_2f0,"C_WeaponMag7",&DAT_1806f181c);
  FUN_18039f910(local_2c8,"C_WeaponAWP",&DAT_1806f178c);
  FUN_18039f910(local_2a0,"C_WeaponG3SG1","g3sg1");
  FUN_18039f910(local_278,"C_WeaponSCAR20","scar20");
  FUN_18039f910(local_250,"C_WeaponSSG08","ssg08");
  FUN_18039f910(local_228,"C_WeaponM249",&DAT_1806f186c);
  FUN_18039f910(local_200,"C_WeaponNegev","negev");
  FUN_18039f910(local_1d8,"C_WeaponTaser","taser");
  FUN_18039f910(local_1b0,"C_HEGrenade","hegrenade");
  FUN_18039f910(local_188,"C_Flashbang","flashbang");
  FUN_18039f970(local_160);
  FUN_18039f9b0(local_138);
  FUN_18039f9f0(local_110);
  FUN_18039fa30(local_e8);
  FUN_18039fa70(local_c0);
  FUN_18039fab0(local_98);
  FUN_18039faf0(local_70);
  uVar1 = FUN_18039fb30(local_48);
  local_738 = &local_728;
  local_730 = local_20;
  FUN_18039fd50(uVar1,&local_738);
  FUN_1804eced0(&local_728,0x28,0x2d,thunk_FUN_18000f890);
  FUN_1804ece40(&LAB_1805699f0);
  return;
}



/* ===== 18000ae30 FUN_18000ae30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000ae30(void)

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
  DAT_181108d68 = (longlong *)0x0;
  _DAT_181108d70 = (longlong *)0x0;
  DAT_181108d78 = (longlong *)0x0;
  DAT_181108d80 = 7;
  DAT_181108d88 = 8;
  DAT_181108d50 = 0x3f800000;
  DAT_181108d58 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_181108d78 - (longlong)DAT_181108d68 == 0) goto LAB_18000aee6;
  lVar5 = (longlong)DAT_181108d68;
  if ((ulonglong)(((longlong)DAT_181108d78 - (longlong)DAT_181108d68 >> 3) * 8) < 0x1000) {
LAB_18000aede:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181108d68 + -8);
    if (0x1f < ((longlong)DAT_181108d68 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000aede;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x18000aee6;
  thunk_FUN_1803d64e0(lVar5);
LAB_18000aee6:
  plVar1 = plVar4 + 0x10;
  _DAT_181108d70 = plVar1;
  DAT_181108d78 = plVar1;
  DAT_181108d68 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180569a20);
  return;
}



/* ===== 18000af70 FUN_18000af70 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000af70(void)

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
  
  lVar3 = FUN_1804ecaa0(0x98);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  DAT_181108e88 = (longlong *)0x0;
  _DAT_181108e90 = (longlong *)0x0;
  DAT_181108e98 = (longlong *)0x0;
  DAT_181108ea0 = 7;
  DAT_181108ea8 = 8;
  DAT_181108e70 = 0x3f800000;
  DAT_181108e78 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_181108e98 - (longlong)DAT_181108e88 == 0) goto LAB_18000b026;
  lVar5 = (longlong)DAT_181108e88;
  if ((ulonglong)(((longlong)DAT_181108e98 - (longlong)DAT_181108e88 >> 3) * 8) < 0x1000) {
LAB_18000b01e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181108e88 + -8);
    if (0x1f < ((longlong)DAT_181108e88 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000b01e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x18000b026;
  thunk_FUN_1803d64e0(lVar5);
LAB_18000b026:
  plVar1 = plVar4 + 0x10;
  _DAT_181108e90 = plVar1;
  DAT_181108e98 = plVar1;
  DAT_181108e88 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180569af0);
  return;
}



/* ===== 18000b080 FUN_18000b080 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000b080(void)

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
  DAT_181108e48 = (longlong *)0x0;
  _DAT_181108e50 = (longlong *)0x0;
  DAT_181108e58 = (longlong *)0x0;
  DAT_181108e60 = 7;
  DAT_181108e68 = 8;
  DAT_181108e30 = 0x3f800000;
  DAT_181108e38 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_181108e58 - (longlong)DAT_181108e48 == 0) goto LAB_18000b136;
  lVar5 = (longlong)DAT_181108e48;
  if ((ulonglong)(((longlong)DAT_181108e58 - (longlong)DAT_181108e48 >> 3) * 8) < 0x1000) {
LAB_18000b12e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_181108e48 + -8);
    if (0x1f < ((longlong)DAT_181108e48 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000b12e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x18000b136;
  thunk_FUN_1803d64e0(lVar5);
LAB_18000b136:
  plVar1 = plVar4 + 0x10;
  _DAT_181108e50 = plVar1;
  DAT_181108e58 = plVar1;
  DAT_181108e48 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180569b10);
  return;
}



/* ===== 18000b1a0 FUN_18000b1a0 ===== */

void FUN_18000b1a0(void)

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
  DAT_18110b5d8 = (longlong *)0x0;
  DAT_18110b5e0 = (longlong *)0x0;
  DAT_18110b5e8 = (longlong *)0x0;
  DAT_18110b5f0 = 7;
  DAT_18110b5f8 = 8;
  DAT_18110b5c0 = 0x3f800000;
  DAT_18110b5c8 = lVar3;
  plVar4 = (longlong *)FUN_1804ecaa0(0x80);
  puVar6 = auStack_28;
  puVar7 = auStack_28;
  if ((longlong)DAT_18110b5e8 - (longlong)DAT_18110b5d8 == 0) goto LAB_18000b256;
  lVar5 = (longlong)DAT_18110b5d8;
  if ((ulonglong)(((longlong)DAT_18110b5e8 - (longlong)DAT_18110b5d8 >> 3) * 8) < 0x1000) {
LAB_18000b24e:
    puVar7 = puVar6;
  }
  else {
    lVar5 = *(longlong *)((longlong)DAT_18110b5d8 + -8);
    if (0x1f < ((longlong)DAT_18110b5d8 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar5 = (*pcVar2)(5);
      puVar6 = auStack_20;
      goto LAB_18000b24e;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x18000b256;
  thunk_FUN_1803d64e0(lVar5);
LAB_18000b256:
  plVar1 = plVar4 + 0x10;
  DAT_18110b5e0 = plVar1;
  DAT_18110b5e8 = plVar1;
  DAT_18110b5d8 = plVar4;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *plVar4 = lVar3;
  }
  FUN_1804ece40(FUN_180569b40);
  return;
}



/* ===== 18000b460 FUN_18000b460 ===== */

void FUN_18000b460(void)

{
  undefined4 *puVar1;
  
  LOCK();
  DAT_1809191dc = DAT_1809191dc + 1;
  UNLOCK();
  if (DAT_1809191dc == 0) {
    puVar1 = (undefined4 *)&DAT_180c9eca0;
    do {
      FUN_1804ec700(puVar1);
      puVar1 = puVar1 + 10;
    } while (puVar1 != &DAT_180c9ede0);
  }
  FUN_1804ece40(FUN_18056a2e0);
  return;
}



/* ===== 18000b4d0 FUN_18000b4d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000b4d0(void)

{
  undefined **local_res10 [3];
  
  local_res10[0] = &PTR_vftable_180919448;
  PTR_vftable_180919448 = (undefined *)std::bad_alloc::vftable;
  _DAT_1809193b0 = 0xe06d7363;
  _DAT_1809193b4 = 1;
  _DAT_1809193b8 = 0;
  _DAT_1809193c0 = 0;
  _DAT_1809193c8 = 4;
  _DAT_1809193d0 = 0x19930520;
  _DAT_1809193d8 = &PTR_vftable_180919448;
  _DAT_1809193e0 = &DAT_180915b00;
  _DAT_1809193e8 = RtlPcToFileHeader(&DAT_180915b00,local_res10);
  if (_DAT_1809193e8 == (PVOID)0x0) {
    _DAT_1809193d0 = 0x1994000;
  }
  FUN_1804ece40(&DAT_18056a3e0);
  return;
}



/* ===== 18000b580 FUN_18000b580 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000b580(void)

{
  undefined **local_res10 [3];
  
  local_res10[0] = &PTR_vftable_180919388;
  PTR_vftable_180919388 = (undefined *)std::bad_exception::vftable;
  _DAT_1809192f0 = 0xe06d7363;
  _DAT_1809192f4 = 1;
  _DAT_1809192f8 = 0;
  _DAT_180919300 = 0;
  _DAT_180919308 = 4;
  _DAT_180919310 = 0x19930520;
  _DAT_180919318 = &PTR_vftable_180919388;
  _DAT_180919320 = &DAT_180915c68;
  _DAT_180919328 = RtlPcToFileHeader(&DAT_180915c68,local_res10);
  if (_DAT_180919328 == (PVOID)0x0) {
    _DAT_180919310 = 0x1994000;
  }
  FUN_1804ece40(&DAT_18056a3f0);
  return;
}



/* ===== 18000b640 FUN_18000b640 ===== */

void FUN_18000b640(void)

{
  FUN_1804ea4a0(&DAT_180c9f210);
  FUN_1804ece40(&LAB_18056a480);
  return;
}



/* ===== 18000b670 FUN_18000b670 ===== */

void FUN_18000b670(void)

{
  FUN_1804ea4a0(&DAT_180c9f2b0);
  FUN_1804ece40(&LAB_18056a4f0);
  return;
}



/* ===== 18000b690 FUN_18000b690 ===== */

void FUN_18000b690(int *param_1,undefined8 *param_2,float param_3,float param_4,float param_5,
                  float param_6,uint param_7,float param_8)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float local_res8;
  float local_resc;
  
  if (param_1 != (int *)0x0) {
    if (*(char *)(param_2 + 1) == '\0') {
      FUN_1803fbe60();
      iVar6 = *param_1;
      lVar4 = (longlong)iVar6;
      lVar3 = *(longlong *)(param_1 + 2);
      *(code **)(lVar3 + -0x18 + lVar4 * 0x48) = FUN_18000c1f0;
      *(undefined8 *)(lVar3 + -0x10 + lVar4 * 0x48) = 0;
      *(undefined4 *)(lVar3 + -8 + lVar4 * 0x48) = 0;
      *(undefined4 *)(lVar3 + -4 + lVar4 * 0x48) = 0xffffffff;
      FUN_1803fbe60(param_1);
      *param_2 = CONCAT44(param_1[8],iVar6 + -1);
    }
    *(undefined1 *)(param_2 + 1) = 1;
    iVar6 = param_1[8];
    if (0.0 <= param_8) {
      fVar7 = DAT_1808ac34c;
      if (param_8 <= DAT_1808ac34c) {
        fVar7 = param_8;
      }
      uVar5 = (uint)(fVar7 * DAT_1808acb94 + DAT_1808ac1f4);
      if (uVar5 != 0) {
        fVar8 = param_3 - param_6;
        fVar7 = (param_4 + param_6 + (param_4 - param_6)) * DAT_1808ac1f4;
        local_res8 = ((param_3 + param_6) - fVar8) / DAT_1808ac658 + fVar8;
        local_resc = fVar7;
        FUN_18000b9c0(param_1 + 0x14,&local_res8);
        local_res8 = fVar8;
        local_resc = param_4 - param_6;
        FUN_18000b9c0(param_1 + 0x14,&local_res8);
        local_res8 = param_3 + param_6;
        local_resc = fVar7;
        FUN_18000b9c0(param_1 + 0x14,&local_res8);
        local_res8 = fVar8;
        local_resc = param_4 + param_6;
        FUN_18000b9c0(param_1 + 0x14,&local_res8);
        FUN_1803fd460(param_1,*(undefined8 *)(param_1 + 0x16),param_1[0x14],
                      (int)((float)uVar5 * DAT_1808ac294) << 0x18 | param_7);
        param_1[0x14] = 0;
      }
    }
    param_5 = DAT_1808ac440 - param_5;
    fVar7 = (float)FUN_180517790(param_5);
    fVar8 = (float)FUN_180517200(param_5);
    if (iVar6 < param_1[8]) {
      do {
        lVar4 = (longlong)iVar6;
        iVar6 = iVar6 + 1;
        lVar3 = *(longlong *)(param_1 + 10);
        fVar1 = *(float *)(lVar3 + lVar4 * 0x14);
        fVar2 = *(float *)(lVar3 + 4 + lVar4 * 0x14);
        *(float *)(lVar3 + lVar4 * 0x14) =
             (fVar1 * fVar7 - fVar2 * fVar8) - ((fVar7 * param_3 - fVar8 * param_4) - param_3);
        *(float *)(lVar3 + 4 + lVar4 * 0x14) =
             (fVar1 * fVar8 + fVar2 * fVar7) - ((fVar8 * param_3 + fVar7 * param_4) - param_4);
      } while (iVar6 < param_1[8]);
    }
  }
  return;
}



/* ===== 18000b9a0 FUN_18000b9a0 ===== */

float * FUN_18000b9a0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = *param_1;
  if (fVar1 < *param_2) {
    param_1 = param_2;
  }
  if (*param_3 <= fVar1 && fVar1 != *param_3) {
    param_1 = param_3;
  }
  return param_1;
}



/* ===== 18000b9c0 FUN_18000b9c0 ===== */

void FUN_18000b9c0(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  if (*param_1 == iVar1) {
    iVar2 = *param_1 + 1;
    if (iVar1 == 0) {
      iVar1 = 8;
    }
    else {
      iVar1 = iVar1 / 2 + iVar1;
    }
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_18000ba20(param_1,iVar2);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 8) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}



/* ===== 18000ba20 FUN_18000ba20 ===== */

void FUN_18000ba20(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[1] < param_2) {
    uVar3 = _malloc_base((longlong)param_2 * 8);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_180540530(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 << 3);
      lVar1 = *(longlong *)(param_1 + 2);
      if ((lVar1 != 0) && (lVar2 != 0)) {
        piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
        if (*piVar6 != *(int *)(lVar2 + 4)) {
          iVar5 = *(short *)(lVar2 + 0x29bc) + 1;
          sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(lVar2 + 0x29bc) = sVar4;
          piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)sVar4 * 8);
          *piVar6 = *(int *)(lVar2 + 4);
          *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar4 * 8) = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar1);
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
    param_1[1] = param_2;
  }
  return;
}



/* ===== 18000bb30 FUN_18000bb30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000bb30(void)

{
  if (DAT_180ca1b70 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b70 + 0x10))();
    DAT_180ca1b70 = (longlong *)0x0;
  }
  if (DAT_180ca1b68 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b68 + 0x10))();
    DAT_180ca1b68 = (longlong *)0x0;
  }
  if (DAT_180ca1b60 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b60 + 0x10))();
    DAT_180ca1b60 = (longlong *)0x0;
  }
  _DAT_180ca1b78 = 0;
  if (DAT_180ca1b08 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b08 + 0x10))();
    DAT_180ca1b08 = (longlong *)0x0;
  }
  if (DAT_180ca1b00 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b00 + 0x10))();
    DAT_180ca1b00 = (longlong *)0x0;
  }
  if (DAT_180ca1af8 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1af8 + 0x10))();
    DAT_180ca1af8 = (longlong *)0x0;
  }
  _DAT_180ca1b10 = 0;
  if (DAT_180ca1b98 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b98 + 0x10))();
    DAT_180ca1b98 = (longlong *)0x0;
  }
  if (DAT_180ca1b90 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b90 + 0x10))();
    DAT_180ca1b90 = (longlong *)0x0;
  }
  if (DAT_180ca1b88 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b88 + 0x10))();
    DAT_180ca1b88 = (longlong *)0x0;
  }
  _DAT_180ca1ba0 = 0;
  if (DAT_180ca1b50 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b50 + 0x10))();
    DAT_180ca1b50 = (longlong *)0x0;
  }
  if (DAT_180ca1b48 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b48 + 0x10))();
    DAT_180ca1b48 = (longlong *)0x0;
  }
  if (DAT_180ca1b40 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b40 + 0x10))();
    DAT_180ca1b40 = (longlong *)0x0;
  }
  _DAT_180ca1b58 = 0;
  return;
}



/* ===== 18000bc90 FUN_18000bc90 ===== */

void FUN_18000bc90(void)

{
  FUN_18000bb30();
  if (DAT_180ca1af0 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1af0 + 0x10))();
    DAT_180ca1af0 = (longlong *)0x0;
  }
  if (DAT_180ca1b28 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b28 + 0x10))();
    DAT_180ca1b28 = (longlong *)0x0;
  }
  DAT_180ca0cd9 = 0;
  if (DAT_180ca1b20 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b20 + 0x10))();
    DAT_180ca1b20 = (longlong *)0x0;
  }
  if (DAT_180ca1b80 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b80 + 0x10))();
    DAT_180ca1b80 = (longlong *)0x0;
  }
  if (DAT_180ca1b30 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b30 + 0x10))();
    DAT_180ca1b30 = (longlong *)0x0;
  }
  if (DAT_180ca1bb0 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1bb0 + 0x10))();
    DAT_180ca1bb0 = (longlong *)0x0;
  }
  if (DAT_180ca1b18 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b18 + 0x10))();
    DAT_180ca1b18 = (longlong *)0x0;
  }
  if (DAT_180ca1b38 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1b38 + 0x10))();
    DAT_180ca1b38 = (longlong *)0x0;
  }
  DAT_180ca1ba8 = 0;
  return;
}



/* ===== 18000bd80 FUN_18000bd80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18000bd80(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_103 [235];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_178;
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  if ((DAT_180ca1ba8 == param_1) && (DAT_180ca1bb0 != 0)) {
    return 1;
  }
  if (DAT_180ca0cd8 != '\0') {
    return 0;
  }
  FUN_18000bc90();
  local_158 = &DAT_180ca1bb0;
  iVar2 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_18058a5b0,0x6c0,0);
  if (iVar2 < 0) {
LAB_18000beac:
    local_138 = 0;
    local_144 = 2;
    local_140 = 4;
    local_13c = 0x10000;
LAB_18000bed5:
    local_148 = 0x170;
  }
  else {
    local_158 = &DAT_180ca1b30;
    iVar2 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_18058ac70,0x950,0);
    if (iVar2 < 0) goto LAB_18000beac;
    local_138 = 0;
    local_144 = 2;
    local_140 = 4;
    local_13c = 0x10000;
    local_148 = 0x30;
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_148,0,&DAT_180ca1b80);
    if (iVar2 < 0) goto LAB_18000bed5;
    local_148 = 0x170;
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_148,0,&DAT_180ca1b20);
    if (-1 < iVar2) {
      bVar1 = true;
      goto LAB_18000bee0;
    }
  }
  bVar1 = false;
LAB_18000bee0:
  local_128 = 0;
  FUN_180540170(local_103,0,0xe3);
  local_118 = _DAT_1808ad6f0;
  uStack_110 = _UNK_1808ad6f8;
  local_120 = 1;
  local_11c = 2;
  local_108 = 1;
  local_104 = 0xf;
  if ((bVar1) &&
     (iVar2 = (**(code **)(*param_1 + 0xa0))(param_1,&local_128,&DAT_180ca1b18), -1 < iVar2)) {
    iVar2 = (**(code **)*param_2)(param_2,&DAT_18058a4d0,&DAT_180ca1b38);
    if (iVar2 < 0) {
      DAT_180ca1b38 = 0;
    }
    DAT_180ca1ba8 = param_1;
    return 1;
  }
  FUN_18000bc90();
  DAT_180ca0cd8 = 1;
  return 0;
}



/* ===== 18000bfb0 FUN_18000bfb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18000bfb0(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_98;
  if (((*param_2 == 0) || ((int)param_2[3] != param_3)) ||
     (*(int *)((longlong)param_2 + 0x1c) != param_4)) {
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[2] + 0x10))();
      param_2[2] = 0;
    }
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[1] + 0x10))();
      param_2[1] = 0;
    }
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
      *param_2 = 0;
    }
    param_2[3] = 0;
    if ((param_3 != 0) && (param_4 != 0)) {
      local_64 = 1;
      local_54 = 0;
      local_70 = 1;
      local_6c = 1;
      local_68 = 0x1c;
      local_5c = 0;
      local_58 = 0x28;
      local_78 = param_3;
      local_74 = param_4;
      iVar1 = (**(code **)(*param_1 + 0x28))(param_1,&local_78,0,param_2);
      if ((-1 < iVar1) && (*param_2 != 0)) {
        iVar1 = (**(code **)(*param_1 + 0x38))(param_1,*param_2,0,param_2 + 1);
        if ((-1 < iVar1) &&
           (iVar1 = (**(code **)(*param_1 + 0x48))(param_1,*param_2,0,param_2 + 2), -1 < iVar1)) {
          *(int *)(param_2 + 3) = param_3;
          *(int *)((longlong)param_2 + 0x1c) = param_4;
          return 1;
        }
        if ((longlong *)param_2[2] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_2[2] + 0x10))();
          param_2[2] = 0;
        }
        if ((longlong *)param_2[1] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_2[1] + 0x10))();
          param_2[1] = 0;
        }
        if ((longlong *)*param_2 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*param_2 + 0x10))();
          *param_2 = 0;
        }
        param_2[3] = 0;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== 18000c150 FUN_18000c150 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000c150(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  if ((DAT_180ca1b38 != (longlong *)0x0) && (param_4 != (int *)0x0)) {
    local_28 = *param_4;
    local_20 = param_4[2];
    if (local_28 < local_20) {
      local_24 = param_4[1];
      local_1c = param_4[3];
      if (local_24 < local_1c) {
        local_38 = 1;
        (**(code **)(*DAT_180ca1b38 + 0x420))(DAT_180ca1b38,param_2,param_3,&local_28);
        return;
      }
    }
  }
  (**(code **)(*param_1 + 400))(param_1);
  return;
}



/* ===== 18000c1f0 FUN_18000c1f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000c1f0(undefined8 param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong *local_98;
  longlong *local_90;
  int local_88;
  int local_84;
  undefined8 local_80;
  ulonglong uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  plVar4 = DAT_1811079f8;
  uVar3 = DAT_1811079e0;
  if (param_2 != 0) {
    local_38 = DAT_180919500 ^ (ulonglong)auStack_c8;
    puVar2 = *(ulonglong **)(param_2 + 0x38);
    if ((puVar2 != (ulonglong *)0x0) && (0x37 < *(int *)(param_2 + 0x40))) {
      local_80 = *puVar2;
      uStack_78 = puVar2[1];
      local_60 = (undefined4)puVar2[4];
      uStack_5c = *(undefined8 *)((longlong)puVar2 + 0x24);
      uStack_54 = *(undefined4 *)((longlong)puVar2 + 0x2c);
      local_50 = puVar2[6];
      auVar1 = *(undefined1 (*) [16])(puVar2 + 2);
      cVar5 = FUN_18000bd80(DAT_1811079e0,DAT_1811079f8);
      if (cVar5 != '\0') {
        if (DAT_180ca1af0 != (longlong *)0x0) {
          (**(code **)(*DAT_180ca1af0 + 0x10))();
          DAT_180ca1af0 = (longlong *)0x0;
        }
        if (DAT_180ca1b28 != (longlong *)0x0) {
          (**(code **)(*DAT_180ca1b28 + 0x10))();
          DAT_180ca1b28 = (longlong *)0x0;
        }
        DAT_180ca0cd9 = 0;
        (**(code **)(*plVar4 + 0x2c8))(plVar4,1,&DAT_180ca1af0,&DAT_180ca1b28);
        if (DAT_180ca1af0 != (longlong *)0x0) {
          local_90 = (longlong *)0x0;
          (**(code **)(*DAT_180ca1af0 + 0x38))(DAT_180ca1af0,&local_90);
          if (local_90 != (longlong *)0x0) {
            local_98 = (longlong *)0x0;
            iVar6 = (**(code **)*local_90)(local_90,&DAT_18058a4c0,&local_98);
            if ((iVar6 < 0) || (local_98 == (longlong *)0x0)) {
              (**(code **)(*local_90 + 0x10))();
            }
            else {
              (**(code **)(*local_90 + 0x10))();
              local_70 = 0;
              uStack_68 = 0;
              local_80 = 0;
              uStack_78 = 0;
              uStack_64 = 0;
              local_60 = 0;
              uStack_5c = 0;
              (**(code **)(*local_98 + 0x50))(local_98,&local_80);
              (**(code **)(*local_98 + 0x10))();
              uVar8 = (uint)local_80;
              uVar7 = local_80._4_4_;
              cVar5 = FUN_18000bfb0(uVar3,&DAT_180ca1b60,local_80 & 0xffffffff,local_80._4_4_);
              if (cVar5 != '\0') {
                uVar7 = uVar7 >> 1;
                uVar8 = uVar8 >> 1;
                cVar5 = FUN_18000bfb0(uVar3,&DAT_180ca1af8,uVar8,uVar7);
                if (((cVar5 != '\0') &&
                    (cVar5 = FUN_18000bfb0(uVar3,&DAT_180ca1b88,uVar8,uVar7), cVar5 != '\0')) &&
                   (cVar5 = FUN_18000bfb0(uVar3,&DAT_180ca1b40,uVar8,uVar7), cVar5 != '\0')) {
                  (**(code **)(*plVar4 + 0x108))(plVar4,1,&DAT_180ca1b70,0);
                  local_48 = 0;
                  uStack_40 = 0;
                  if (((DAT_180ca1b38 == (longlong *)0x0) || (auVar1._8_4_ <= auVar1._0_4_)) ||
                     (auVar1._12_4_ <= auVar1._4_4_)) {
                    (**(code **)(*plVar4 + 400))(plVar4,DAT_180ca1b70,&local_48);
                    DAT_180ca0cd9 = 1;
                    return;
                  }
                  local_90 = auVar1._0_8_;
                  local_a8 = 1;
                  local_88 = auVar1._8_4_;
                  local_84 = auVar1._12_4_;
                  (**(code **)(*DAT_180ca1b38 + 0x420))
                            (DAT_180ca1b38,DAT_180ca1b70,&local_48,&local_90);
                  DAT_180ca0cd9 = 1;
                  return;
                }
              }
            }
          }
          if (DAT_180ca1af0 != (longlong *)0x0) {
            (**(code **)(*DAT_180ca1af0 + 0x10))();
            DAT_180ca1af0 = (longlong *)0x0;
          }
        }
        if (DAT_180ca1b28 != (longlong *)0x0) {
          (**(code **)(*DAT_180ca1b28 + 0x10))();
          DAT_180ca1b28 = (longlong *)0x0;
        }
      }
    }
  }
  return;
}



/* ===== 18000c520 FUN_18000c520 ===== */

void FUN_18000c520(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  float *pfVar8;
  int iVar9;
  undefined8 *puVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_208;
  undefined8 *local_200;
  undefined8 uStack_1f8;
  float local_1e8;
  float fStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  float local_1d8;
  undefined1 auStack_1d4 [12];
  float local_1c8 [40];
  float local_128;
  undefined1 auStack_124 [12];
  float local_118 [58];
  
  local_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  local_208 = param_3;
  iVar9 = (**(code **)(*param_1 + 0x70))(param_1,DAT_180ca1b20,0,4,0,&local_200);
  if (-1 < iVar9) {
    FUN_180540170(auStack_1d4,0,0xac);
    FUN_180540170(auStack_124,0,0xac);
    local_1e8 = (float)DAT_180ca1ba0;
    fStack_1e4 = (float)DAT_180ca1ba4;
    uStack_1e0 = param_2;
    local_128 = (float)FUN_18051ab90();
    fVar1 = DAT_1808ac934;
    iVar9 = 1;
    fVar16 = local_128;
    do {
      fVar15 = (float)FUN_18051ab90((float)-(iVar9 * iVar9) / fVar1);
      iVar9 = iVar9 + 1;
      fVar16 = fVar16 + fVar15 + fVar15;
    } while (iVar9 < 9);
    uVar14 = 1;
    fVar16 = DAT_1808ac34c / fVar16;
    local_1d8 = 0.0;
    local_128 = fVar16 * local_128;
    do {
      uVar13 = (ulonglong)uVar14;
      *(float *)(auStack_1d4 + uVar13 * 0x10 + -4) = (float)(int)uVar14;
      fVar15 = (float)FUN_18051ab90((float)(int)-(uVar14 * uVar14) / fVar1);
      uVar14 = uVar14 + 1;
      local_1c8[uVar13 * 4 + 0x28] = fVar15 * fVar16;
    } while ((int)uVar14 < 9);
    lVar12 = 2;
    uStack_1dc = 8;
    puVar7 = local_200;
    pfVar8 = &local_1e8;
    do {
      pfVar11 = pfVar8;
      puVar10 = puVar7;
      uVar3 = *(undefined8 *)(pfVar11 + 2);
      uVar4 = *(undefined8 *)(pfVar11 + 4);
      uVar5 = *(undefined8 *)(pfVar11 + 6);
      *puVar10 = *(undefined8 *)pfVar11;
      puVar10[1] = uVar3;
      uVar3 = *(undefined8 *)(pfVar11 + 8);
      uVar6 = *(undefined8 *)(pfVar11 + 10);
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar4 = *(undefined8 *)(pfVar11 + 0xc);
      uVar5 = *(undefined8 *)(pfVar11 + 0xe);
      puVar10[4] = uVar3;
      puVar10[5] = uVar6;
      uVar3 = *(undefined8 *)(pfVar11 + 0x10);
      uVar6 = *(undefined8 *)(pfVar11 + 0x12);
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar4 = *(undefined8 *)(pfVar11 + 0x14);
      uVar5 = *(undefined8 *)(pfVar11 + 0x16);
      puVar10[8] = uVar3;
      puVar10[9] = uVar6;
      uVar3 = *(undefined8 *)(pfVar11 + 0x18);
      uVar6 = *(undefined8 *)(pfVar11 + 0x1a);
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      uVar4 = *(undefined8 *)(pfVar11 + 0x1c);
      uVar5 = *(undefined8 *)(pfVar11 + 0x1e);
      puVar10[0xc] = uVar3;
      puVar10[0xd] = uVar6;
      puVar10[0xe] = uVar4;
      puVar10[0xf] = uVar5;
      lVar12 = lVar12 + -1;
      puVar7 = puVar10 + 0x10;
      pfVar8 = pfVar11 + 0x20;
    } while (lVar12 != 0);
    uVar3 = *(undefined8 *)(pfVar11 + 0x22);
    uVar4 = *(undefined8 *)(pfVar11 + 0x24);
    uVar5 = *(undefined8 *)(pfVar11 + 0x26);
    puVar10[0x10] = *(undefined8 *)(pfVar11 + 0x20);
    puVar10[0x11] = uVar3;
    uVar3 = *(undefined8 *)(pfVar11 + 0x28);
    uVar6 = *(undefined8 *)(pfVar11 + 0x2a);
    puVar10[0x12] = uVar4;
    puVar10[0x13] = uVar5;
    uVar4 = *(undefined8 *)(pfVar11 + 0x2c);
    uVar5 = *(undefined8 *)(pfVar11 + 0x2e);
    puVar10[0x14] = uVar3;
    puVar10[0x15] = uVar6;
    uVar3 = *(undefined8 *)(pfVar11 + 0x30);
    uVar6 = *(undefined8 *)(pfVar11 + 0x32);
    puVar10[0x16] = uVar4;
    puVar10[0x17] = uVar5;
    fVar1 = pfVar11[0x34];
    fVar16 = pfVar11[0x35];
    fVar15 = pfVar11[0x36];
    fVar2 = pfVar11[0x37];
    puVar10[0x18] = uVar3;
    puVar10[0x19] = uVar6;
    uVar3 = *(undefined8 *)(pfVar11 + 0x38);
    uVar4 = *(undefined8 *)(pfVar11 + 0x3a);
    *(float *)(puVar10 + 0x1a) = fVar1;
    *(float *)((longlong)puVar10 + 0xd4) = fVar16;
    *(float *)(puVar10 + 0x1b) = fVar15;
    *(float *)((longlong)puVar10 + 0xdc) = fVar2;
    puVar10[0x1c] = uVar3;
    puVar10[0x1d] = uVar4;
    (**(code **)(*param_1 + 0x78))(param_1,DAT_180ca1b20,0);
    (**(code **)(*param_1 + 0x80))(param_1,0,1,&DAT_180ca1b20);
    (**(code **)(*param_1 + 0x108))(param_1,1,param_4 + 0x10,0);
    FUN_18000c150(param_1,*(undefined8 *)(param_4 + 0x10),param_5,param_6);
    (**(code **)(*param_1 + 0x40))(param_1,0,1,&local_208);
    (**(code **)(*param_1 + 0x60))(param_1,6,param_7,param_8);
  }
  return;
}



/* ===== 18000c840 FUN_18000c840 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000c840(longlong param_1,float *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  longlong *plVar15;
  int *piVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [12];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined1 (**local_180) [16];
  int local_178;
  float local_170;
  undefined4 local_168 [2];
  longlong local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_128;
  uint local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 (*local_110) [16];
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  plVar15 = DAT_1811079f8;
  if (param_2 != (float *)0x0) {
    local_78 = DAT_180919500 ^ (ulonglong)auStack_1a8;
    puVar2 = *(undefined4 **)(param_2 + 0xe);
    if ((puVar2 != (undefined4 *)0x0) && (0x37 < (int)param_2[0x10])) {
      local_f0 = *(undefined8 *)(puVar2 + 4);
      uStack_e8 = *(undefined8 *)(puVar2 + 6);
      local_e0 = *(undefined1 (*) [16])(puVar2 + 8);
      iVar4 = local_e0._0_4_;
      iVar5 = local_e0._4_4_;
      iVar6 = local_e0._8_4_;
      iVar7 = local_e0._12_4_;
      uVar11 = *puVar2;
      uVar12 = puVar2[1];
      uVar13 = puVar2[2];
      uStack_f4 = puVar2[3];
      local_d0 = *(undefined8 *)(puVar2 + 0xc);
      if ((DAT_180ca0cd9 != '\0') && ((DAT_1811079f8 != (longlong *)0x0 && (DAT_180ca1ba8 != 0)))) {
        lVar3 = **(longlong **)(DAT_180ca0a50 + 0x2058);
        cVar1 = *(char *)(lVar3 + 0x60);
        lVar21 = lVar3 + 0x60;
        if (cVar1 == '\0') {
          lVar21 = 0;
        }
        local_100 = uVar11;
        uStack_fc = uVar12;
        uStack_f8 = uVar13;
        if (lVar21 == 0) {
          fVar25 = param_2[9];
          fVar24 = param_2[8];
        }
        else {
          piVar16 = (int *)(lVar3 + 0xa8);
          iVar22 = 0;
          if (cVar1 == '\0') {
            piVar16 = (int *)&DAT_00000048;
          }
          iVar23 = 0;
          if (0 < *piVar16) {
            plVar17 = (longlong *)(lVar3 + 0x78);
            uVar20 = 0;
            if (cVar1 == '\0') {
              plVar17 = (longlong *)&DAT_00000018;
            }
            do {
              lVar21 = *(longlong *)(*plVar17 + (ulonglong)uVar20 * 8);
              if (lVar21 == param_1) {
                fVar25 = (float)((int)param_2[9] + iVar22);
                local_160 = 0;
                fVar24 = (float)((int)param_2[8] + iVar23);
                local_150 = (longlong *)0x0;
                (**(code **)(*DAT_1811079f8 + 0x250))(DAT_1811079f8,&local_150,0,0);
                local_158 = (longlong *)0x0;
                (**(code **)(*plVar15 + 0x268))(plVar15,0,1,&local_158);
                (**(code **)(*plVar15 + 0x48))(plVar15,DAT_180ca1bb0,0,0);
                local_b0 = CONCAT44((int)(float)((ulonglong)*(undefined8 *)(DAT_180ca0a50 + 0x30) >>
                                                0x20),
                                    (int)(float)*(undefined8 *)(DAT_180ca0a50 + 0x30));
                local_b8 = 0;
                (**(code **)(*plVar15 + 0x168))(plVar15,1,&local_b8);
                local_180 = &local_110;
                local_188 = (undefined4 *)((ulonglong)local_188._4_4_ << 0x20);
                local_110 = (undefined1 (*) [16])0x0;
                uStack_108 = 0;
                iVar22 = (**(code **)(*plVar15 + 0x70))(plVar15,DAT_180ca1b80,0,4);
                if (-1 < iVar22) {
                  uStack_134 = uStack_f4;
                  uVar18 = (ulonglong)DAT_180ca1b10;
                  auVar8._4_8_ = extraout_XMM0_Qb;
                  auVar8._0_4_ = uStack_13c;
                  auVar27._0_8_ = auVar8._0_8_ << 0x20;
                  auVar27._8_4_ = uStack_138;
                  auVar27._12_4_ = uStack_f4;
                  uStack_128 = 0;
                  auVar9._4_8_ = auVar27._8_8_;
                  auVar9._0_4_ = uVar11;
                  auVar28._0_8_ = auVar9._0_8_ << 0x20;
                  auVar28._8_4_ = uStack_138;
                  auVar28._12_4_ = uStack_f4;
                  uVar19 = (ulonglong)DAT_180ca1b14;
                  uStack_11c = 0;
                  uStack_118 = 0;
                  uStack_114 = 0;
                  local_120 = local_d0._4_4_;
                  auVar10._4_8_ = auVar28._8_8_;
                  auVar10._0_4_ = uVar11;
                  auVar26._0_8_ = auVar10._0_8_ << 0x20;
                  auVar26._8_4_ = uVar12;
                  auVar29._0_8_ = auVar26._4_8_;
                  auVar29._8_4_ = uVar13;
                  auVar29._12_4_ = uStack_f4;
                  *local_110 = auVar29;
                  *(float *)local_110[1] = (float)uVar18;
                  *(float *)(local_110[1] + 4) = (float)uVar19;
                  *(undefined4 *)(local_110[1] + 8) = 0;
                  *(undefined4 *)(local_110[1] + 0xc) = 0;
                  *(ulonglong *)local_110[2] = (ulonglong)local_d0._4_4_;
                  *(undefined8 *)(local_110[2] + 8) = 0;
                  (**(code **)(*plVar15 + 0x78))(plVar15,(float)uVar18,0);
                  (**(code **)(*plVar15 + 0x80))(plVar15,0,1);
                  (**(code **)(*plVar15 + 0x108))(plVar15,1,&DAT_180ca1b08,0);
                  local_8c = 0;
                  local_98 = uVar11;
                  local_94 = uVar12;
                  local_90 = uVar13;
                  if (((DAT_180ca1b38 == (longlong *)0x0) || (iVar6 <= iVar4)) || (iVar7 <= iVar5))
                  {
                    (**(code **)(*plVar15 + 400))(plVar15,DAT_180ca1b08,&local_98);
                  }
                  else {
                    local_188 = (undefined4 *)CONCAT44(local_188._4_4_,1);
                    local_c8 = iVar4;
                    local_c4 = iVar5;
                    local_c0 = iVar6;
                    local_bc = iVar7;
                    (**(code **)(*DAT_180ca1b38 + 0x420))
                              (DAT_180ca1b38,DAT_180ca1b08,&local_98,&local_c8);
                  }
                  (**(code **)(*plVar15 + 0x40))(plVar15,0,1,&DAT_180ca1b68);
                  iVar4 = (int)fVar25 + 6;
                  (**(code **)(*plVar15 + 0x60))(plVar15,6,iVar4,fVar24);
                  (**(code **)(*plVar15 + 0x48))(plVar15,DAT_180ca1b30,0,0);
                  local_180 = (undefined1 (**) [16])local_e0;
                  local_188 = &local_98;
                  local_178 = iVar4;
                  local_170 = fVar24;
                  FUN_18000c520(plVar15,0,DAT_180ca1b00,&DAT_180ca1b88);
                  local_180 = (undefined1 (**) [16])local_e0;
                  local_188 = &local_98;
                  local_178 = iVar4;
                  local_170 = fVar24;
                  FUN_18000c520(plVar15,DAT_1808ac34c,DAT_180ca1b90,&DAT_180ca1b40);
                  local_160 = DAT_180ca1b48;
                }
                (**(code **)(*plVar15 + 0x80))(plVar15,0,1,&local_158);
                (**(code **)(*plVar15 + 0x48))(plVar15,local_150,0,0);
                if (local_158 != (longlong *)0x0) {
                  (**(code **)(*local_158 + 0x10))();
                  local_158 = (longlong *)0x0;
                }
                if (local_150 != (longlong *)0x0) {
                  (**(code **)(*local_150 + 0x10))();
                }
                bVar14 = true;
                goto LAB_18000c9b3;
              }
              iVar22 = iVar22 + *(int *)(lVar21 + 0x10);
              uVar20 = uVar20 + 1;
              iVar23 = iVar23 + *(int *)(lVar21 + 0x20);
            } while ((int)uVar20 < *piVar16);
          }
          fVar25 = (float)((int)param_2[9] + iVar22);
          fVar24 = (float)((int)param_2[8] + iVar23);
        }
        bVar14 = false;
        local_160 = 0;
LAB_18000c9b3:
        (**(code **)(*plVar15 + 0x108))(plVar15,1,&DAT_180ca1af0,DAT_180ca1b28);
        if (DAT_180ca1af0 != (longlong *)0x0) {
          (**(code **)(*DAT_180ca1af0 + 0x10))();
          DAT_180ca1af0 = (longlong *)0x0;
        }
        if (DAT_180ca1b28 != (longlong *)0x0) {
          (**(code **)(*DAT_180ca1b28 + 0x10))();
          DAT_180ca1b28 = (longlong *)0x0;
        }
        DAT_180ca0cd9 = '\0';
        if (bVar14) {
          local_a8 = (int)*param_2;
          iStack_a4 = (int)param_2[1];
          iStack_a0 = (int)param_2[2];
          iStack_9c = (int)param_2[3];
          (**(code **)(*plVar15 + 0x168))(plVar15,1,&local_a8);
          if (local_160 != 0) {
            (**(code **)(*plVar15 + 0x40))(plVar15,0,1,&local_160);
            (**(code **)(*plVar15 + 0x60))(plVar15,6,fVar25,fVar24);
          }
          (**(code **)(*plVar15 + 0x40))(plVar15,0,1,&DAT_180ca1b68);
          local_148 = (longlong *)0x0;
          local_88 = 0;
          uStack_80 = 0;
          local_168[0] = 0;
          (**(code **)(*plVar15 + 0x2d8))(plVar15,&local_148,&local_88,local_168);
          if (DAT_180ca1b18 != 0) {
            (**(code **)(*plVar15 + 0x118))(plVar15,DAT_180ca1b18,0,0xffffffff);
          }
          (**(code **)(*plVar15 + 0x60))(plVar15,6,fVar25,fVar24);
          (**(code **)(*plVar15 + 0x118))(plVar15,local_148,&local_88,local_168[0]);
          if (local_148 != (longlong *)0x0) {
            (**(code **)(*local_148 + 0x10))();
          }
        }
      }
    }
  }
  return;
}



/* ===== 18000ced0 FUN_18000ced0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000ced0(int *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
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
  undefined1 auStack_1d8 [32];
  float *local_1b8;
  undefined4 local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  int local_180 [7];
  int iStack_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150 [4];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  int aiStack_108 [2];
  undefined8 local_100;
  uint local_f8 [8];
  ulonglong local_d8;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  if (*param_2 < 0) {
    return;
  }
  if (*param_1 <= *param_2) {
    return;
  }
  iVar11 = param_2[1];
  iVar7 = param_1[8];
  if (iVar7 <= iVar11) {
    return;
  }
  lVar9 = *(longlong *)(param_1 + 10);
  iVar10 = iVar11 + 1;
  local_188 = *(float *)(lVar9 + (longlong)iVar11 * 0x14);
  local_18c = *(float *)(lVar9 + 4 + (longlong)iVar11 * 0x14);
  local_190 = local_188;
  local_184 = local_18c;
  if (iVar10 < iVar7) {
    fVar20 = local_188;
    fVar21 = local_18c;
    fVar23 = local_188;
    fVar22 = local_18c;
    if (3 < iVar7 - iVar10) {
      do {
        lVar6 = (longlong)iVar10;
        iVar10 = iVar10 + 4;
        fVar20 = *(float *)(lVar9 + lVar6 * 0x14);
        fVar21 = *(float *)(lVar9 + 4 + lVar6 * 0x14);
        fVar23 = *(float *)(lVar9 + 0x14 + lVar6 * 0x14);
        fVar22 = fVar20;
        if (local_188 <= fVar20) {
          fVar22 = local_188;
        }
        fVar24 = *(float *)(lVar9 + 0x18 + lVar6 * 0x14);
        fVar25 = fVar21;
        if (local_184 <= fVar21) {
          fVar25 = local_184;
        }
        if (fVar20 <= local_190) {
          fVar20 = local_190;
        }
        local_190 = *(float *)(lVar9 + 0x3c + lVar6 * 0x14);
        if (fVar21 <= local_18c) {
          fVar21 = local_18c;
        }
        local_18c = *(float *)(lVar9 + 0x40 + lVar6 * 0x14);
        fVar27 = fVar23;
        if (fVar22 <= fVar23) {
          fVar27 = fVar22;
        }
        fVar22 = fVar24;
        if (fVar25 <= fVar24) {
          fVar22 = fVar25;
        }
        if (fVar23 <= fVar20) {
          fVar23 = fVar20;
        }
        fVar20 = *(float *)(lVar9 + 0x28 + lVar6 * 0x14);
        if (fVar24 <= fVar21) {
          fVar24 = fVar21;
        }
        fVar21 = *(float *)(lVar9 + 0x2c + lVar6 * 0x14);
        fVar25 = fVar20;
        if (fVar27 <= fVar20) {
          fVar25 = fVar27;
        }
        fVar27 = fVar21;
        if (fVar22 <= fVar21) {
          fVar27 = fVar22;
        }
        if (fVar20 <= fVar23) {
          fVar20 = fVar23;
        }
        if (fVar21 <= fVar24) {
          fVar21 = fVar24;
        }
        local_188 = local_190;
        if (fVar25 <= local_190) {
          local_188 = fVar25;
        }
        local_184 = local_18c;
        if (fVar27 <= local_18c) {
          local_184 = fVar27;
        }
        if (local_190 <= fVar20) {
          local_190 = fVar20;
        }
        if (local_18c <= fVar21) {
          local_18c = fVar21;
        }
      } while (iVar10 < iVar7 + -3);
      fVar20 = local_188;
      fVar21 = local_18c;
      fVar23 = local_190;
      fVar22 = local_184;
      if (iVar7 <= iVar10) goto LAB_18000d07c;
    }
    do {
      lVar6 = (longlong)iVar10;
      iVar10 = iVar10 + 1;
      local_190 = *(float *)(lVar9 + lVar6 * 0x14);
      local_18c = *(float *)(lVar9 + 4 + lVar6 * 0x14);
      local_188 = local_190;
      if (fVar20 <= local_190) {
        local_188 = fVar20;
      }
      local_184 = local_18c;
      if (fVar22 <= local_18c) {
        local_184 = fVar22;
      }
      if (local_190 <= fVar23) {
        local_190 = fVar23;
      }
      if (local_18c <= fVar21) {
        local_18c = fVar21;
      }
      fVar20 = local_188;
      fVar21 = local_18c;
      fVar23 = local_190;
      fVar22 = local_184;
    } while (iVar10 < iVar7);
  }
LAB_18000d07c:
  if ((((local_188 != local_190) || (local_184 != local_18c)) &&
      (*(float *)((longlong)param_3 + 0xc) != 0.0)) &&
     ((local_1a8 = *(float *)(DAT_180ca0a50 + 0x30), 0.0 < local_1a8 &&
      (local_1a4 = *(float *)(DAT_180ca0a50 + 0x34), 0.0 < local_1a4)))) {
    local_184 = local_184 - DAT_1808aca80;
    local_190 = local_190 + DAT_1808aca80;
    local_18c = local_18c + DAT_1808aca80;
    local_188 = local_188 - DAT_1808aca80;
    fVar24 = local_184 - DAT_1808aca80;
    fVar22 = local_18c + DAT_1808aca80;
    fVar25 = local_188 - DAT_1808aca80;
    fVar23 = local_190 + DAT_1808aca80;
    fVar20 = local_1a8 * DAT_1808ac1f4;
    fVar21 = local_1a4 * DAT_1808ac1f4;
    fVar28 = fVar24 * DAT_1808ac1f4;
    fVar26 = fVar22 * DAT_1808ac1f4;
    fVar29 = fVar25 * DAT_1808ac1f4;
    fVar27 = fVar23 * DAT_1808ac1f4;
    local_160 = fVar27;
    local_15c = fVar26;
    local_158 = fVar29;
    local_154 = fVar28;
    FUN_1803fbe60(param_1);
    lVar9 = (longlong)*param_1;
    FUN_1803fc3a0(param_1,0xc,8);
    local_1b8 = &local_1a0;
    local_1a0 = local_190 / local_1a8;
    local_1b0 = 0xffffffff;
    local_19c = local_18c / local_1a4;
    local_198 = local_188 / local_1a8;
    local_194 = local_184 / local_1a4;
    FUN_1803fc4a0(param_1,&local_188,&local_190,&local_198);
    local_198 = fVar27 / fVar20;
    local_194 = fVar26 / fVar21;
    local_1a0 = fVar29 / fVar20;
    local_19c = fVar28 / fVar21;
    local_1b8 = &local_198;
    local_1b0 = 0xffffffff;
    FUN_1803fc4a0(param_1,&local_158,&local_160,&local_1a0);
    local_180[0] = (int)local_1a8;
    local_180[1] = (int)local_1a4;
    local_180[4] = local_180[0] / 2;
    local_130 = *param_3;
    uStack_128 = param_3[1];
    local_180[5] = local_180[1] / 2;
    local_180[2] = local_180[0];
    local_180[3] = local_180[1];
    local_180[6] = local_180[4];
    iStack_164 = local_180[5];
    fVar20 = (float)FUN_18053f0d0(fVar25);
    fVar21 = (float)FUN_18053f0d0(fVar24);
    fVar23 = (float)FUN_18053ef70(fVar23);
    fVar22 = (float)FUN_18053ef70(fVar22);
    local_150[0] = fVar20;
    local_150[1] = fVar21;
    local_150[2] = fVar23;
    local_150[3] = fVar22;
    fVar24 = (float)FUN_18053f0d0(fVar29);
    fVar25 = (float)FUN_18053f0d0(fVar28);
    fVar27 = (float)FUN_18053ef70(fVar27);
    fVar26 = (float)FUN_18053ef70(fVar26);
    local_140 = CONCAT44(fVar25,fVar24);
    uStack_138 = CONCAT44(fVar26,fVar27);
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_f8[2] = 0;
    local_f8[3] = 0;
    local_f8[4] = 0;
    local_f8[5] = 0;
    local_f8[6] = 0;
    local_f8[7] = 0;
    if (DAT_1809194c8 < 2) {
      lVar6 = 0;
      iVar11 = 2;
      lVar8 = 0;
      do {
        piVar1 = local_180 + lVar6;
        iVar7 = (int)local_150[lVar6];
        lVar6 = lVar6 + 4;
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        if (*piVar1 < iVar7) {
          iVar7 = *piVar1;
        }
        iVar10 = *(int *)((longlong)local_180 + lVar8 + 4);
        aiStack_108[lVar6] = iVar7;
        iVar7 = (int)*(float *)((longlong)local_150 + lVar8 + 4);
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        if (iVar10 < iVar7) {
          iVar7 = iVar10;
        }
        iVar10 = *(int *)((longlong)local_180 + lVar8 + 8);
        *(int *)((longlong)local_f8 + lVar8 + 4) = iVar7;
        iVar7 = (int)*(float *)((longlong)local_150 + lVar8 + 8);
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        if (iVar10 < iVar7) {
          iVar7 = iVar10;
        }
        iVar10 = *(int *)((longlong)local_180 + lVar8 + 0xc);
        *(int *)((longlong)local_f8 + lVar8 + 8) = iVar7;
        iVar7 = (int)*(float *)((longlong)local_150 + lVar8 + 0xc);
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        if (iVar10 < iVar7) {
          iVar7 = iVar10;
        }
        *(int *)((longlong)local_f8 + lVar8 + 0xc) = iVar7;
        iVar11 = iVar11 + -1;
        lVar8 = lVar8 + 0x10;
      } while (iVar11 != 0);
      uVar12 = local_f8[0];
      uVar13 = local_f8[1];
      uVar14 = local_f8[2];
      uVar15 = local_f8[3];
      uVar16 = local_f8[4];
      uVar17 = local_f8[5];
      uVar18 = local_f8[6];
      uVar19 = local_f8[7];
    }
    else {
      uVar12 = ~-(uint)((int)fVar20 < 0) & (int)fVar20;
      uVar13 = ~-(uint)((int)fVar21 < 0) & (int)fVar21;
      uVar14 = ~-(uint)((int)fVar23 < 0) & (int)fVar23;
      uVar15 = ~-(uint)((int)fVar22 < 0) & (int)fVar22;
      uVar16 = ~-(uint)((int)fVar24 < 0) & (int)fVar24;
      uVar17 = ~-(uint)((int)fVar25 < 0) & (int)fVar25;
      uVar18 = ~-(uint)((int)fVar27 < 0) & (int)fVar27;
      uVar19 = ~-(uint)((int)fVar26 < 0) & (int)fVar26;
      uVar12 = ((int)uVar12 < local_180[0]) * uVar12 |
               (uint)((int)uVar12 >= local_180[0]) * local_180[0];
      uVar13 = ((int)uVar13 < local_180[1]) * uVar13 |
               (uint)((int)uVar13 >= local_180[1]) * local_180[1];
      uVar14 = ((int)uVar14 < local_180[2]) * uVar14 |
               (uint)((int)uVar14 >= local_180[2]) * local_180[2];
      uVar15 = ((int)uVar15 < local_180[3]) * uVar15 |
               (uint)((int)uVar15 >= local_180[3]) * local_180[3];
      uVar16 = ((int)uVar16 < local_180[4]) * uVar16 |
               (uint)((int)uVar16 >= local_180[4]) * local_180[4];
      uVar17 = ((int)uVar17 < local_180[5]) * uVar17 |
               (uint)((int)uVar17 >= local_180[5]) * local_180[5];
      uVar18 = ((int)uVar18 < local_180[6]) * uVar18 |
               (uint)((int)uVar18 >= local_180[6]) * local_180[6];
      uVar19 = ((int)uVar19 < iStack_164) * uVar19 | (uint)((int)uVar19 >= iStack_164) * iStack_164;
    }
    lVar6 = *(longlong *)(param_1 + 2);
    local_100 = 0;
    piVar1 = param_1 + 0x30;
    *(undefined4 *)(lVar6 + -4 + lVar9 * 0x48) = 0xffffffff;
    *(code **)(lVar6 + -0x18 + lVar9 * 0x48) = FUN_18000c840;
    *(undefined8 *)(lVar6 + -0x10 + lVar9 * 0x48) = 0;
    *(undefined4 *)(lVar6 + -8 + lVar9 * 0x48) = 0x38;
    *(int *)(lVar6 + -4 + lVar9 * 0x48) = *piVar1;
    FUN_18000d5e0(piVar1,*piVar1 + 0x38);
    uVar5 = local_100;
    uVar4 = uStack_128;
    uVar3 = local_130;
    lVar6 = (longlong)*(int *)(lVar6 + -4 + lVar9 * 0x48);
    lVar9 = *(longlong *)(param_1 + 0x32);
    *(undefined8 *)(lVar6 + lVar9) = local_130;
    ((undefined8 *)(lVar6 + lVar9))[1] = uStack_128;
    puVar2 = (uint *)(lVar6 + 0x10 + lVar9);
    *puVar2 = uVar12;
    puVar2[1] = uVar13;
    puVar2[2] = uVar14;
    puVar2[3] = uVar15;
    puVar2 = (uint *)(lVar6 + 0x20 + lVar9);
    *puVar2 = uVar16;
    puVar2[1] = uVar17;
    puVar2[2] = uVar18;
    puVar2[3] = uVar19;
    *(undefined8 *)(lVar6 + 0x30 + lVar9) = local_100;
    lVar6 = (longlong)*param_2;
    lVar9 = *(longlong *)(param_1 + 2);
    *(undefined4 *)(lVar9 + 0x44 + lVar6 * 0x48) = 0xffffffff;
    *(code **)(lVar9 + 0x30 + lVar6 * 0x48) = FUN_18000c1f0;
    *(undefined8 *)(lVar9 + 0x38 + lVar6 * 0x48) = 0;
    *(undefined4 *)(lVar9 + 0x40 + lVar6 * 0x48) = 0x38;
    *(int *)(lVar9 + 0x44 + lVar6 * 0x48) = *piVar1;
    FUN_18000d5e0(piVar1,*piVar1 + 0x38);
    lVar6 = (longlong)*(int *)(lVar9 + 0x44 + lVar6 * 0x48);
    lVar9 = *(longlong *)(param_1 + 0x32);
    *(undefined8 *)(lVar6 + lVar9) = uVar3;
    ((undefined8 *)(lVar6 + lVar9))[1] = uVar4;
    puVar2 = (uint *)(lVar6 + 0x10 + lVar9);
    *puVar2 = uVar12;
    puVar2[1] = uVar13;
    puVar2[2] = uVar14;
    puVar2[3] = uVar15;
    puVar2 = (uint *)(lVar6 + 0x20 + lVar9);
    *puVar2 = uVar16;
    puVar2[1] = uVar17;
    puVar2[2] = uVar18;
    puVar2[3] = uVar19;
    *(undefined8 *)(lVar6 + 0x30 + lVar9) = uVar5;
    FUN_1803fbe60(param_1);
  }
  return;
}



/* ===== 18000d5d0 FUN_18000d5d0 ===== */

int * FUN_18000d5d0(int *param_1,int *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* ===== 18000d5e0 FUN_18000d5e0 ===== */

void FUN_18000d5e0(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar6 = param_1[1];
  if (param_2 <= iVar6) {
    *param_1 = param_2;
    return;
  }
  if (iVar6 == 0) {
    iVar3 = 8;
  }
  else {
    iVar3 = iVar6 / 2 + iVar6;
  }
  iVar8 = param_2;
  if (param_2 < iVar3) {
    iVar8 = iVar3;
  }
  if (iVar8 <= iVar6) {
    *param_1 = param_2;
    return;
  }
  uVar4 = _malloc_base((longlong)iVar8);
  lVar2 = DAT_180ca0a50;
  if (DAT_180ca0a50 != 0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    FUN_180540530(uVar4,*(longlong *)(param_1 + 2),(longlong)*param_1);
    lVar1 = *(longlong *)(param_1 + 2);
    if ((lVar1 != 0) && (lVar2 != 0)) {
      piVar7 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
      if (*piVar7 != *(int *)(lVar2 + 4)) {
        iVar6 = *(short *)(lVar2 + 0x29bc) + 1;
        sVar5 = (short)iVar6 + (short)(iVar6 / 6) * -6;
        *(short *)(lVar2 + 0x29bc) = sVar5;
        piVar7 = (int *)(lVar2 + 0x29c0 + (longlong)sVar5 * 8);
        *piVar7 = *(int *)(lVar2 + 4);
        *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar5 * 8) = 0;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar1);
  }
  *(undefined8 *)(param_1 + 2) = uVar4;
  param_1[1] = iVar8;
  *param_1 = param_2;
  return;
}



/* ===== 18000d730 FUN_18000d730 ===== */

undefined8 FUN_18000d730(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* ===== 18000d740 std::exception::exception ===== */

/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Library: Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  FUN_1804ef040(param_1 + 8);
  return this;
}



/* ===== 18000d7a0 FUN_18000d7a0 ===== */

char * FUN_18000d7a0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



/* ===== 18000d7c0 FUN_18000d7c0 ===== */

undefined8 * FUN_18000d7c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  FUN_1804ef0e0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x18);
  }
  return param_1;
}



/* ===== 18000d810 FUN_18000d810 ===== */

undefined8 * FUN_18000d810(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



/* ===== 18000d840 FUN_18000d840 ===== */

void FUN_18000d840(void)

{
  undefined1 local_28 [40];
  
  FUN_18000d810(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_28,&DAT_180915d60);
}



/* ===== 18000d860 FUN_18000d860 ===== */

undefined8 * FUN_18000d860(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



/* ===== 18000d8a0 FUN_18000d8a0 ===== */

undefined8 * FUN_18000d8a0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



/* ===== 18000d8e0 FUN_18000d8e0 ===== */

void FUN_18000d8e0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 != (longlong *)0x0) {
    plVar3 = param_1 + 1;
    (**(code **)(*plVar4 + 0x38))(plVar4,0,2,plVar3);
    plVar4 = param_1 + 3;
    (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,0,2,plVar4);
    plVar2 = param_1 + 5;
    (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,0,2,plVar2);
    plVar1 = param_1 + 7;
    (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,0,1,plVar1);
    if (param_1 != param_1 + 2) {
      do {
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x10))();
          *plVar3 = 0;
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar4);
      do {
        if ((longlong *)*plVar4 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar4 + 0x10))();
          *plVar4 = 0;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar2);
      do {
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar2 + 0x10))();
          *plVar2 = 0;
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != plVar1);
    }
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
      *plVar1 = 0;
    }
  }
  return;
}



/* ===== 18000d9e0 FUN_18000d9e0 ===== */

void FUN_18000d9e0(void)

{
  if (DAT_180ca1be0 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1be0 + 0x10))();
    DAT_180ca1be0 = (longlong *)0x0;
  }
  if (DAT_180ca1bb8 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1bb8 + 0x10))();
    DAT_180ca1bb8 = (longlong *)0x0;
  }
  if (DAT_180ca1bc8 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1bc8 + 0x10))();
    DAT_180ca1bc8 = (longlong *)0x0;
  }
  if (DAT_180ca1bc0 != (longlong *)0x0) {
    (**(code **)(*DAT_180ca1bc0 + 0x10))();
    DAT_180ca1bc0 = (longlong *)0x0;
  }
  DAT_180ca1bd0 = 0;
  return;
}



/* ===== 18000da60 FUN_18000da60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18000da60(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [24];
  char *local_1b8;
  undefined4 local_1b0;
  undefined8 ****local_1a8;
  undefined8 ****local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  ulonglong local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined1 local_134;
  undefined1 local_133 [235];
  ulonglong local_48;
  
  puVar12 = auStack_1d8;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  if ((DAT_180ca1bd0 == param_1) && (DAT_180ca1bc8 != 0)) {
    uVar5 = CONCAT71((int7)(local_48 >> 8),1);
    goto LAB_18000dd3b;
  }
  puVar12 = auStack_1d8;
  if ((DAT_180ca0cdb == '\0') && (puVar12 = auStack_1d8, param_1 != (longlong *)0x0)) {
    FUN_18000d9e0();
    uStack_190 = 0;
    local_188 = 0;
    local_180 = 0xf;
    local_198 = (undefined8 ****)0x0;
    local_1a8 = &local_198;
    local_1b0 = 0x8000;
    local_1b8 = "vs_5_0";
    plVar6 = (longlong *)
             FUN_18036e5f0("\ncbuffer tracer : register(b0) {\n    float2 viewport;\n    float start_fade;\n    float end_fade;\n    float4 endpoints;\n    float4 perspective;\n    float4 color;\n    float4 shape;\n    float4 glow;\n    float4 quad01;\n    float4 quad23;\n};\n\nstruct vs_output {\n    float4 position : SV_Position;\n};\n\nvs_output vs_main(uint id : SV_VertexID) {\n    uint corner = id < 3 ? id : (id == 3 ? 0 : id - 2);\n    float2 p = corner == 0 ? quad01.xy : (corner == 1 ? quad01.zw : (corner == 2 ? quad23.xy : quad23.zw));\n    vs_output output;\n    output.position = float4(p / viewport * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return output;\n}\n\n// neverlose\'s PS 0xf07060 (tools/re/nl/shaders/f07060.txt), instruction for instruction.\nfloat4 ps_main(vs_output input) : SV_Target {\n    float2 p = input.position.xy;\n    float2 a = endpoints.xy;\n    float2 ab = endpoints.zw - endpoints.xy;\n    float len2 = dot(ab, ab);\n    float t = len2 > 0.0 ? saturate(dot(p - a, ab) / len2) : (shape.x >= shape.y ? 0.0 : 1.0);\n    float2 dv = p - (a + t * ab);\n    float d2 = dot(dv, dv);\n    float d = sqrt(d2);\n    float hw = lerp(shape.x, shape.y, t);\n    float gr = lerp(shape.z, shape.w, t);\n    float e = d - hw;\n    float aa = max(abs(ddx_coarse(e)) + abs(ddy_coarse(e)), 1.0);\n    float glow_a = saturate(1.0 - max(e, 0.0) / gr);\n    float core = saturate((hw - d) / aa + 0.5) - saturate((-d - hw) / aa + 0.5);\n    float w = max(lerp(perspective.x, perspective.y, t), 0.0);\n    float u = perspective.z + (t * perspective.y / w) * (perspective.w - perspective.z);\n    float fs = start_fade > 0.0 ? saturate(u / start_fade) : 1.0;\n    float fe = end_fade > 0.0 ? saturate((1.0 - u) / end_fade) : 1.0;\n    float fade = fs * fe;\n    float highlight = max(1.0 - d2 / max(hw * hw, 0.0), 0.0) * core * fade * color.a * 0.25;\n    float glow_t = (glow.x > 0.0 && gr > 0.0) ? glow_a * glow_a * glow_a * glow.x : 0.0;\n    float alpha = fade * max(glow_t, core) * color.a;\n    return float4(color.rgb * alpha + highlight * (1.0 - color.rgb), alpha);\n}\n"
                           ,0x7ee,"neverlose_nl_tracer","vs_main");
    if (plVar6 == (longlong *)0x0) {
LAB_18000dcce:
      DAT_180ca0cdb = '\x01';
      ppppuVar10 = &local_198;
      if (0xf < local_180) {
        ppppuVar10 = local_198;
      }
      FUN_1802b2560("[error] tracers | shader: %s",ppppuVar10);
LAB_18000dcf2:
      uVar5 = 0;
    }
    else {
      local_1a8 = &local_198;
      local_1b0 = 0x8000;
      local_1b8 = "ps_5_0";
      plVar7 = (longlong *)
               FUN_18036e5f0("\ncbuffer tracer : register(b0) {\n    float2 viewport;\n    float start_fade;\n    float end_fade;\n    float4 endpoints;\n    float4 perspective;\n    float4 color;\n    float4 shape;\n    float4 glow;\n    float4 quad01;\n    float4 quad23;\n};\n\nstruct vs_output {\n    float4 position : SV_Position;\n};\n\nvs_output vs_main(uint id : SV_VertexID) {\n    uint corner = id < 3 ? id : (id == 3 ? 0 : id - 2);\n    float2 p = corner == 0 ? quad01.xy : (corner == 1 ? quad01.zw : (corner == 2 ? quad23.xy : quad23.zw));\n    vs_output output;\n    output.position = float4(p / viewport * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return output;\n}\n\n// neverlose\'s PS 0xf07060 (tools/re/nl/shaders/f07060.txt), instruction for instruction.\nfloat4 ps_main(vs_output input) : SV_Target {\n    float2 p = input.position.xy;\n    float2 a = endpoints.xy;\n    float2 ab = endpoints.zw - endpoints.xy;\n    float len2 = dot(ab, ab);\n    float t = len2 > 0.0 ? saturate(dot(p - a, ab) / len2) : (shape.x >= shape.y ? 0.0 : 1.0);\n    float2 dv = p - (a + t * ab);\n    float d2 = dot(dv, dv);\n    float d = sqrt(d2);\n    float hw = lerp(shape.x, shape.y, t);\n    float gr = lerp(shape.z, shape.w, t);\n    float e = d - hw;\n    float aa = max(abs(ddx_coarse(e)) + abs(ddy_coarse(e)), 1.0);\n    float glow_a = saturate(1.0 - max(e, 0.0) / gr);\n    float core = saturate((hw - d) / aa + 0.5) - saturate((-d - hw) / aa + 0.5);\n    float w = max(lerp(perspective.x, perspective.y, t), 0.0);\n    float u = perspective.z + (t * perspective.y / w) * (perspective.w - perspective.z);\n    float fs = start_fade > 0.0 ? saturate(u / start_fade) : 1.0;\n    float fe = end_fade > 0.0 ? saturate((1.0 - u) / end_fade) : 1.0;\n    float fade = fs * fe;\n    float highlight = max(1.0 - d2 / max(hw * hw, 0.0), 0.0) * core * fade * color.a * 0.25;\n    float glow_t = (glow.x > 0.0 && gr > 0.0) ? glow_a * glow_a * glow_a * glow.x : 0.0;\n    float alpha = fade * max(glow_t, core) * color.a;\n    return float4(color.rgb * alpha + highlight * (1.0 - color.rgb), alpha);\n}\n"
                             ,0x7ee,"neverlose_nl_tracer","ps_main");
      if (plVar7 == (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto LAB_18000dcce;
      }
      lVar1 = *param_1;
      uVar8 = (**(code **)(*plVar6 + 0x20))();
      uVar9 = (**(code **)(*plVar6 + 0x18))(plVar6);
      local_1b8 = (char *)&DAT_180ca1bc0;
      iVar4 = (**(code **)(lVar1 + 0x60))(param_1,uVar9,uVar8,0);
      if (iVar4 < 0) {
LAB_18000dbe4:
        bVar3 = false;
      }
      else {
        lVar1 = *param_1;
        uVar8 = (**(code **)(*plVar7 + 0x20))(plVar7);
        uVar9 = (**(code **)(*plVar7 + 0x18))(plVar7);
        local_1b8 = (char *)&DAT_180ca1bc8;
        iVar4 = (**(code **)(lVar1 + 0x78))(param_1,uVar9,uVar8,0);
        if (iVar4 < 0) goto LAB_18000dbe4;
        bVar3 = true;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      local_168 = 0;
      local_178 = 0x80;
      local_174 = 2;
      local_170 = 4;
      local_16c = 0x10000;
      if ((!bVar3) ||
         (iVar4 = (**(code **)(*param_1 + 0x18))(param_1,&local_178,0,&DAT_180ca1bb8), iVar4 < 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      local_158 = 0;
      FUN_180540170(local_133,0,0xe3);
      local_150 = 1;
      local_14c = 2;
      local_148 = _DAT_1808ad6f0;
      uStack_140 = _UNK_1808ad6f8;
      local_138 = 1;
      local_134 = 0xf;
      if ((!bVar3) ||
         (iVar4 = (**(code **)(*param_1 + 0xa0))(param_1,&local_158,&DAT_180ca1be0), iVar4 < 0)) {
        FUN_18000d9e0();
        DAT_180ca0cdb = '\x01';
        FUN_1802b2560("[error] tracers | D3D resources");
        goto LAB_18000dcf2;
      }
      uVar5 = 1;
      DAT_180ca1bd0 = param_1;
    }
    puVar12 = auStack_1d8;
    if (local_180 < 0x10) goto LAB_18000dd3b;
    uVar11 = local_180 + 1;
    ppppuVar10 = local_198;
    if (0xfff < uVar11) {
      ppppuVar10 = (undefined8 ****)local_198[-1];
      if (0x1f < (ulonglong)((longlong)local_198 + (-8 - (longlong)ppppuVar10))) {
        pcVar2 = (code *)swi(0x29);
        local_48 = (*pcVar2)(5);
        puVar12 = auStack_1d0;
        goto LAB_18000dd39;
      }
      uVar11 = local_180 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar10,uVar11);
  }
  else {
LAB_18000dd39:
    uVar5 = local_48 & 0xffffffffffffff00;
  }
LAB_18000dd3b:
  *(undefined8 *)(puVar12 + -8) = 0x18000dd4a;
  return uVar5;
}



/* ===== 18000dd60 FUN_18000dd60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000dd60(undefined8 param_1,float *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong **pplVar15;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 **local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined8 uStack_88;
  longlong *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  plVar14 = DAT_1811079f8;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_e8;
  lVar2 = **(longlong **)(DAT_180ca0a50 + 0x2058);
  pcVar10 = (char *)(lVar2 + 0x60);
  cVar1 = *pcVar10;
  if (cVar1 == '\0') {
    pcVar10 = (char *)0x0;
  }
  if ((((DAT_1811079f8 != (longlong *)0x0) && (pcVar10 != (char *)0x0)) &&
      (DAT_180ca1bf0 != DAT_180ca1bf8)) && (cVar8 = FUN_18000da60(DAT_1811079e0), cVar8 != '\0')) {
    local_b8 = plVar14;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = (longlong *)0x0;
    uStack_98 = 0;
    local_90 = (longlong *)0x0;
    uStack_88 = 0;
    local_80 = (longlong *)0x0;
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x240))(plVar14,0,2,&local_b0);
      (**(code **)(*local_b8 + 0x268))(local_b8,0,2,&local_a0);
      (**(code **)(*local_b8 + 0x248))(local_b8,0,2,&local_90);
      (**(code **)(*local_b8 + 600))(local_b8,0,1,&local_80);
    }
    pfVar12 = (float *)(lVar2 + 0x80);
    if (cVar1 == '\0') {
      pfVar12 = (float *)&DAT_00000020;
    }
    local_68 = (int)(*param_2 - *pfVar12);
    pfVar11 = (float *)(lVar2 + 0x84);
    if (cVar1 == '\0') {
      pfVar11 = (float *)&DAT_00000024;
    }
    local_64 = (int)(param_2[1] - *pfVar11);
    local_60 = (int)(param_2[2] - *pfVar12);
    local_5c = (int)(param_2[3] - *pfVar11);
    (**(code **)(*plVar14 + 0x168))(plVar14,1,&local_68);
    local_58 = 0;
    uStack_50 = 0;
    (**(code **)(*plVar14 + 0x118))(plVar14,DAT_180ca1be0,&local_58,0xffffffff);
    (**(code **)(*plVar14 + 0x88))(plVar14,0);
    (**(code **)(*plVar14 + 0xc0))(plVar14,4);
    (**(code **)(*plVar14 + 0x58))(plVar14,DAT_180ca1bc0,0,0);
    (**(code **)(*plVar14 + 0x38))(plVar14,0,1,&DAT_180ca1bb8);
    (**(code **)(*plVar14 + 0x48))(plVar14,DAT_180ca1bc8,0,0);
    (**(code **)(*plVar14 + 0x80))(plVar14,0,1,&DAT_180ca1bb8);
    puVar7 = DAT_180ca1bf8;
    for (puVar13 = DAT_180ca1bf0; puVar13 != puVar7; puVar13 = puVar13 + 0x10) {
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      local_c0 = &local_78;
      local_c8 = 0;
      iVar9 = (**(code **)(*plVar14 + 0x70))(plVar14,DAT_180ca1bb8,0,4);
      if (-1 < iVar9) {
        uVar6 = puVar13[1];
        *local_78 = *puVar13;
        local_78[1] = uVar6;
        uVar6 = puVar13[3];
        local_78[2] = puVar13[2];
        local_78[3] = uVar6;
        uVar6 = puVar13[5];
        local_78[4] = puVar13[4];
        local_78[5] = uVar6;
        uVar6 = puVar13[7];
        local_78[6] = puVar13[6];
        local_78[7] = uVar6;
        uVar6 = puVar13[9];
        local_78[8] = puVar13[8];
        local_78[9] = uVar6;
        uVar6 = puVar13[0xb];
        local_78[10] = puVar13[10];
        local_78[0xb] = uVar6;
        uVar3 = *(undefined4 *)((longlong)puVar13 + 100);
        uVar4 = *(undefined4 *)(puVar13 + 0xd);
        uVar5 = *(undefined4 *)((longlong)puVar13 + 0x6c);
        *(undefined4 *)(local_78 + 0xc) = *(undefined4 *)(puVar13 + 0xc);
        *(undefined4 *)((longlong)local_78 + 100) = uVar3;
        *(undefined4 *)(local_78 + 0xd) = uVar4;
        *(undefined4 *)((longlong)local_78 + 0x6c) = uVar5;
        uVar3 = *(undefined4 *)((longlong)puVar13 + 0x74);
        uVar4 = *(undefined4 *)(puVar13 + 0xf);
        uVar5 = *(undefined4 *)((longlong)puVar13 + 0x7c);
        *(undefined4 *)(local_78 + 0xe) = *(undefined4 *)(puVar13 + 0xe);
        *(undefined4 *)((longlong)local_78 + 0x74) = uVar3;
        *(undefined4 *)(local_78 + 0xf) = uVar4;
        *(undefined4 *)((longlong)local_78 + 0x7c) = uVar5;
        (**(code **)(*plVar14 + 0x78))(plVar14,DAT_180ca1bb8);
        (**(code **)(*plVar14 + 0x68))(plVar14,6);
      }
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x38))(local_b8,0,2,&local_b0);
      (**(code **)(*local_b8 + 0x80))(local_b8,0,2,&local_a0);
      (**(code **)(*local_b8 + 0x40))(local_b8,0,2,&local_90);
      (**(code **)(*local_b8 + 0x50))(local_b8,0,1,&local_80);
      plVar14 = &local_b0;
      do {
        if ((longlong *)*plVar14 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar14 + 0x10))();
          *plVar14 = 0;
        }
        plVar14 = plVar14 + 1;
      } while ((longlong **)plVar14 != &local_a0);
      pplVar15 = &local_a0;
      do {
        if (*pplVar15 != (longlong *)0x0) {
          (**(code **)(**pplVar15 + 0x10))();
          *pplVar15 = (longlong *)0x0;
        }
        pplVar15 = pplVar15 + 1;
      } while (pplVar15 != &local_90);
      pplVar15 = &local_90;
      do {
        if (*pplVar15 != (longlong *)0x0) {
          (**(code **)(**pplVar15 + 0x10))();
          *pplVar15 = (longlong *)0x0;
        }
        pplVar15 = pplVar15 + 1;
      } while (pplVar15 != &local_80);
      if (local_80 != (longlong *)0x0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
  }
  return;
}



/* ===== 18000e140 FUN_18000e140 ===== */

undefined8
FUN_18000e140(longlong param_1,float param_2,float *param_3,char *param_4,float *param_5,
             float param_6,float param_7,float *param_8)

{
  char cVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  float extraout_XMM0_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res8 [2];
  float local_res10 [2];
  float local_b8;
  float local_ac [41];
  
  pfVar2 = param_5;
  fVar12 = DAT_1808ac34c;
  local_res10[0] = param_2;
  fVar15 = param_5[0xd];
  fVar18 = *(float *)(param_1 + 0xc);
  fVar13 = fVar15 * *(float *)(param_1 + 8) + param_5[0xc] * *(float *)(param_1 + 4) +
           param_5[0xe] * fVar18 + param_5[0xf];
  fVar10 = fVar15 * *(float *)(param_1 + 0x14) + param_5[0xc] * *(float *)(param_1 + 0x10) +
           param_5[0xe] * *(float *)(param_1 + 0x18) + param_5[0xf];
  if ((DAT_1808ac34c <= fVar13) || (DAT_1808ac34c <= fVar10)) {
    local_b8 = DAT_1808ac34c;
    fVar16 = param_5[1] * *(float *)(param_1 + 8) + *(float *)(param_1 + 4) * *param_5 +
             param_5[2] * fVar18 + param_5[3];
    fVar18 = param_5[5] * *(float *)(param_1 + 8) + param_5[4] * *(float *)(param_1 + 4) +
             param_5[6] * fVar18 + param_5[7];
    fVar9 = param_5[1] * *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x10) * *param_5 +
            param_5[2] * *(float *)(param_1 + 0x18) + param_5[3];
    fVar14 = param_5[5] * *(float *)(param_1 + 0x14) + param_5[4] * *(float *)(param_1 + 0x10) +
             param_5[6] * *(float *)(param_1 + 0x18) + param_5[7];
    if (DAT_1808ac34c <= fVar13) {
      local_res8[0] = 0.0;
      if (fVar10 < DAT_1808ac34c) {
        local_b8 = (DAT_1808ac34c - fVar13) / (fVar10 - fVar13);
        fVar9 = (fVar9 - fVar16) * local_b8 + fVar16;
        fVar14 = (fVar14 - fVar18) * local_b8 + fVar18;
        fVar10 = DAT_1808ac34c;
      }
    }
    else {
      local_res8[0] = (DAT_1808ac34c - fVar13) / (fVar10 - fVar13);
      fVar16 = (fVar9 - fVar16) * local_res8[0] + fVar16;
      fVar18 = (fVar14 - fVar18) * local_res8[0] + fVar18;
      fVar13 = DAT_1808ac34c;
    }
    cVar1 = *param_4;
    if (cVar1 == '\0') {
      param_5._0_4_ = *(float *)(param_4 + 8);
    }
    else {
      param_5._0_4_ = (float)*(int *)(param_4 + 0xc) * DAT_1808ac27c * DAT_1808ac000;
    }
    fVar7 = pfVar2[0xc];
    lVar3 = 0x14;
    if (cVar1 == '\0') {
      lVar3 = 0x10;
    }
    fVar11 = *(float *)(param_4 + lVar3);
    fVar19 = pfVar2[0xe];
    fVar8 = (float)*(int *)(param_4 + 4) * DAT_1808ac000;
    fVar15 = fVar15 * fVar15 + fVar7 * fVar7 + fVar19 * fVar19;
    local_ac[0] = fVar8;
    if (fVar15 < 0.0) {
      fVar15 = (float)FUN_18051af10(fVar15);
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    pfVar2 = param_8;
    if (cVar1 == '\0') {
      fVar7 = fVar12;
      fVar15 = fVar12;
    }
    else {
      fVar15 = fVar15 * param_7 * DAT_1808ac1f4;
      fVar7 = fVar15 / fVar10;
      fVar15 = fVar15 / fVar13;
    }
    if (fVar8 <= 0.0) {
      fVar19 = 0.0;
      fVar17 = 0.0;
    }
    else {
      fVar19 = fVar11 * fVar15;
      fVar17 = fVar11 * fVar7;
    }
    fVar16 = ((fVar16 * DAT_1808ac1f4) / fVar13 + DAT_1808ac1f4) * param_6;
    if (((uint)fVar16 & 0x7f800000) != 0x7f800000) {
      fVar18 = (DAT_1808ac1f4 - (fVar18 * DAT_1808ac1f4) / fVar13) * param_7;
      if (((uint)fVar18 & 0x7f800000) != 0x7f800000) {
        fVar9 = ((fVar9 * DAT_1808ac1f4) / fVar10 + DAT_1808ac1f4) * param_6;
        if (((uint)fVar9 & 0x7f800000) != 0x7f800000) {
          fVar14 = (DAT_1808ac1f4 - (fVar14 * DAT_1808ac1f4) / fVar10) * param_7;
          if (((uint)fVar14 & 0x7f800000) != 0x7f800000) {
            fVar6 = param_5._0_4_ * DAT_1808ac1f4;
            param_5._0_4_ = 0.0;
            fVar7 = fVar6 * fVar7;
            fVar6 = fVar6 * fVar15;
            param_8[0] = 0.0;
            param_8[1] = 0.0;
            param_8[2] = 0.0;
            param_8[3] = 0.0;
            param_8[4] = 0.0;
            param_8[5] = 0.0;
            param_8[6] = 0.0;
            param_8[7] = 0.0;
            param_8[8] = 0.0;
            param_8[9] = 0.0;
            param_8[10] = 0.0;
            param_8[0xb] = 0.0;
            param_8[0xc] = 0.0;
            param_8[0xd] = 0.0;
            param_8[0xe] = 0.0;
            param_8[0xf] = 0.0;
            param_8[0x10] = 0.0;
            param_8[0x11] = 0.0;
            param_8[0x12] = 0.0;
            param_8[0x13] = 0.0;
            param_8[0x14] = 0.0;
            param_8[0x15] = 0.0;
            param_8[0x16] = 0.0;
            param_8[0x17] = 0.0;
            param_8[0x18] = 0.0;
            param_8[0x19] = 0.0;
            param_8[0x1a] = 0.0;
            param_8[0x1b] = 0.0;
            param_8[0x1c] = 0.0;
            param_8[0x1d] = 0.0;
            param_8[0x1e] = 0.0;
            param_8[0x1f] = 0.0;
            *param_8 = param_6;
            param_8[2] = 0.1;
            param_8[3] = 0.05;
            param_8[1] = param_7;
            param_8[8] = fVar12 / fVar13;
            param_8[10] = local_res8[0];
            local_res8[0] = 1.0;
            param_8[4] = fVar16;
            param_8[5] = fVar18;
            param_8[6] = fVar9;
            param_8[7] = fVar14;
            param_8[0xb] = local_b8;
            param_8[9] = fVar12 / fVar10;
            param_8[0xc] = *param_3;
            param_8[0xd] = param_3[1];
            param_8[0xe] = param_3[2];
            pfVar5 = (float *)&param_5;
            if (0.0 <= local_res10[0]) {
              pfVar5 = local_res10;
            }
            pfVar4 = local_res8;
            if (local_res10[0] <= fVar12) {
              pfVar4 = pfVar5;
            }
            fVar15 = *pfVar4;
            fVar10 = param_3[3];
            param_8[0x10] = fVar6;
            param_8[0x11] = fVar7;
            param_8[0xf] = fVar15 * fVar10;
            param_8[0x12] = fVar19;
            param_8[0x13] = fVar17;
            if (fVar11 <= 0.0) {
              fVar15 = 0.0;
            }
            else {
              local_res8[0] = 1.0;
              param_5._0_4_ = 0.0;
              pfVar5 = (float *)&param_5;
              if (0.0 <= fVar8) {
                pfVar5 = local_ac;
              }
              pfVar4 = local_res8;
              if (fVar8 <= fVar12) {
                pfVar4 = pfVar5;
              }
              fVar15 = *pfVar4;
            }
            param_5._0_4_ = 0.0;
            local_res8[0] = 1.0;
            param_8[0x14] = fVar15;
            fVar13 = fVar14 - fVar18;
            fVar11 = fVar9 - fVar16;
            fVar10 = fVar19 + fVar6 + DAT_1808ac540;
            fVar7 = fVar17 + fVar7 + DAT_1808ac540;
            fVar15 = fVar13 * fVar13 + fVar11 * fVar11;
            if (fVar15 < 0.0) {
              FUN_18051af10(fVar15);
              fVar15 = extraout_XMM0_Da;
            }
            else {
              fVar15 = SQRT(fVar15);
            }
            if (fVar15 <= DAT_1808abfa0) {
              fVar13 = 0.0;
            }
            else {
              fVar12 = fVar11 / fVar15;
              fVar13 = fVar13 / fVar15;
            }
            fVar11 = fVar12 * fVar10;
            fVar18 = fVar18 - fVar13 * fVar10;
            fVar12 = fVar12 * fVar7;
            fVar10 = (float)((uint)fVar13 ^ DAT_1808adec0) * fVar10;
            fVar15 = (float)((uint)fVar13 ^ DAT_1808adec0) * fVar7;
            fVar14 = fVar13 * fVar7 + fVar14;
            pfVar2[0x18] = fVar10 + (fVar16 - fVar11);
            pfVar2[0x19] = fVar18 + fVar11;
            pfVar2[0x1a] = fVar15 + fVar12 + fVar9;
            pfVar2[0x1b] = fVar14 + fVar12;
            pfVar2[0x1c] = (fVar12 + fVar9) - fVar15;
            pfVar2[0x1d] = fVar14 - fVar12;
            pfVar2[0x1e] = (fVar16 - fVar11) - fVar10;
            pfVar2[0x1f] = fVar18 - fVar11;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



/* ===== 18000e850 FUN_18000e850 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000e850(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float *pfVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  char *pcVar12;
  float *pfVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_f8 [32];
  char local_d8 [4];
  float local_d4;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float *local_b8;
  undefined4 uStack_b0;
  float fStack_ac;
  undefined4 local_a8;
  float local_a4;
  undefined4 local_a0;
  float local_98 [4];
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_f8;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_d0);
    DAT_181108a00 = local_d0;
    DAT_1811089f8 = FUN_1803a0c50(&local_d0);
    DAT_180cd1304 = '\x01';
  }
  if (param_1 == 0) {
    return;
  }
  if (DAT_1811089f8 == 0) {
    return;
  }
  if (param_1 == DAT_1811089f8) {
    uVar14 = 2;
  }
  else {
    bVar4 = FUN_180469a20(param_1);
    uVar14 = (ulonglong)bVar4;
  }
  local_d8[0] = DAT_18095d40c;
  local_d8[1] = DAT_18095d424;
  local_d8[2] = DAT_18095d43c;
  fVar17 = (float)uVar14;
  if (local_d8[uVar14] == '\0') {
    return;
  }
  if ((DAT_180ca0cda == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180ca0cda = '\x01';
    DAT_180ca1be8 = FUN_18038eaf0("C_CSGameRules");
  }
  lVar7 = FUN_180266660();
  if ((lVar7 == 0) || (DAT_180ca1be8 == 0)) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = (float)FUN_18000f3d0((ulonglong)DAT_180ca1be8 + lVar7);
  }
  local_98[0] = DAT_18095d420;
  local_98[1] = (float)DAT_18095d438;
  local_98[2] = (float)DAT_18095d450;
  if ((DAT_180961a50 == 0) || (lVar7 = FUN_18000f3a0(), 0x7ffffffefffe < lVar7 - 0x10000U)) {
    local_d4 = 0.0;
  }
  else {
    local_d4 = (float)FUN_18000f3d0(lVar7 + 0x30);
  }
  local_d0 = &DAT_180962450;
  iVar6 = FUN_1804e4d70(&DAT_180962450);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_18096249c == 0x7fffffff) {
    DAT_18096249c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (fVar15 == _DAT_180ca1bd8) {
  }
  else {
    _DAT_180ca1bd8 = fVar15;
    if (DAT_180ca1c08 != DAT_180ca1c10) {
      DAT_180ca1c10 = DAT_180ca1c08;
    }
  }
  pfVar3 = DAT_180ca1c10;
  pcVar12 = local_d8;
  local_c8._0_4_ = SUB84(pcVar12,0);
  local_c8._4_4_ = (undefined4)((ulonglong)pcVar12 >> 0x20);
  pfVar13 = &local_d4;
  uStack_c0._0_4_ = SUB84(pfVar13,0);
  uStack_c0._4_4_ = (undefined4)((ulonglong)pfVar13 >> 0x20);
  pfVar11 = local_98;
  local_b8 = pfVar11;
  local_c8 = pcVar12;
  uStack_c0 = pfVar13;
  pfVar8 = DAT_180ca1c08;
  for (pfVar9 = DAT_180ca1c08; pfVar9 != pfVar3; pfVar9 = pfVar9 + 0xb) {
    cVar5 = FUN_18000ed80(&local_c8);
    if (cVar5 != '\0') break;
  }
  fVar15 = DAT_1808ac154;
  pfVar10 = pfVar3;
  if (pfVar9 == pfVar3) {
LAB_18000eb35:
    if (pfVar9 == pfVar3) goto LAB_18000eb5c;
  }
  else {
    pfVar8 = pfVar9 + 0xb;
    if (pfVar8 != pfVar3) {
      do {
        if (pcVar12[(int)pfVar8[7]] != '\0') {
          fVar18 = *pfVar13;
          if (*pfVar8 <= fVar18) {
            fVar16 = fVar18 - *pfVar8;
            if (fVar16 <= 0.0) {
              fVar16 = 0.0;
            }
            if (fVar16 < pfVar11[(int)pfVar8[7]] + fVar15) {
              if (*(char *)(pfVar8 + 9) != '\0') {
                fVar18 = fVar18 - pfVar8[8];
                if (fVar18 <= 0.0) {
                  fVar18 = 0.0;
                }
                if (fVar15 <= fVar18) goto LAB_18000eb1e;
              }
              uVar2 = *(undefined8 *)(pfVar8 + 2);
              *(undefined8 *)pfVar9 = *(undefined8 *)pfVar8;
              *(undefined8 *)(pfVar9 + 2) = uVar2;
              uVar2 = *(undefined8 *)(pfVar8 + 6);
              *(undefined8 *)(pfVar9 + 4) = *(undefined8 *)(pfVar8 + 4);
              *(undefined8 *)(pfVar9 + 6) = uVar2;
              fVar18 = pfVar8[8];
              fVar16 = pfVar8[9];
              fVar1 = pfVar8[10];
              pfVar9[7] = pfVar8[7];
              pfVar9[8] = fVar18;
              pfVar9[9] = fVar16;
              pfVar9[10] = fVar1;
              pfVar9 = pfVar9 + 0xb;
              pfVar11 = local_b8;
              pcVar12 = local_c8;
              pfVar13 = uStack_c0;
            }
          }
        }
LAB_18000eb1e:
        pfVar8 = pfVar8 + 0xb;
      } while (pfVar8 != pfVar3);
      pfVar10 = DAT_180ca1c10;
      pfVar8 = DAT_180ca1c08;
      goto LAB_18000eb35;
    }
  }
  FUN_180540530(pfVar9,pfVar3,(longlong)pfVar10 - (longlong)pfVar3);
  pfVar10 = (float *)(((longlong)pfVar10 - (longlong)pfVar3) + (longlong)pfVar9);
  pfVar8 = DAT_180ca1c08;
  DAT_180ca1c10 = pfVar10;
LAB_18000eb5c:
  if (0x3ff < (ulonglong)(((longlong)pfVar10 - (longlong)pfVar8 >> 2) * 0x2e8ba2e8ba2e8ba3)) {
    FUN_180540530(pfVar8,pfVar8 + 0xb,(longlong)pfVar10 - (longlong)(pfVar8 + 0xb));
    pfVar10 = DAT_180ca1c10 + -0xb;
    DAT_180ca1c10 = pfVar10;
  }
  fVar18 = DAT_1808ac34c;
  local_a8 = 0;
  local_a4 = (float)((uint)local_a4 & 0xffffff00);
  local_a0 = 0x3f800000;
  local_c8._0_4_ = local_d4;
  local_c8._4_4_ = (undefined4)*param_2;
  uStack_c0._0_4_ = (undefined4)((ulonglong)*param_2 >> 0x20);
  uStack_c0._4_4_ = *(undefined4 *)(param_2 + 1);
  local_b8 = (float *)*param_3;
  uStack_b0 = *(undefined4 *)(param_3 + 1);
  fStack_ac = fVar17;
  if (pfVar10 == DAT_180ca1c18) {
    FUN_18000f900((int)local_b8,pfVar10,&local_c8);
  }
  else {
    *(ulonglong *)pfVar10 = CONCAT44(local_c8._4_4_,local_d4);
    *(ulonglong *)(pfVar10 + 2) = CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0);
    *(float **)(pfVar10 + 4) = local_b8;
    *(ulonglong *)(pfVar10 + 6) = CONCAT44(fVar17,uStack_b0);
    pfVar10[7] = fVar17;
    pfVar10[8] = 0.0;
    pfVar10[9] = local_a4;
    pfVar10[10] = 1.0;
    DAT_180ca1c10 = DAT_180ca1c10 + 0xb;
  }
  pfVar13 = DAT_180ca1c10;
  uVar14 = 0;
  pfVar11 = DAT_180ca1c08;
  if (DAT_180ca1c08 != DAT_180ca1c10) {
    do {
      uVar14 = uVar14 + (*(char *)(pfVar11 + 9) == '\0');
      pfVar11 = pfVar11 + 0xb;
      pfVar9 = DAT_180ca1c08;
    } while (pfVar11 != DAT_180ca1c10);
    do {
      if (uVar14 < 0x201) break;
      if (*(char *)(pfVar9 + 9) == '\0') {
        fVar17 = local_d4 - *pfVar9;
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        if (fVar17 < local_98[(int)pfVar9[7]] + fVar15) {
          fVar16 = fVar17;
          if (fVar15 <= fVar17) {
            fVar16 = fVar15;
          }
          fVar17 = fVar17 - local_98[(int)pfVar9[7]];
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          if (fVar17 / fVar15 <= fVar18) {
            fVar17 = fVar18 - fVar17 / fVar15;
          }
          else {
            fVar17 = 0.0;
          }
          fVar17 = fVar18 - fVar17 * (fVar16 / fVar15);
          fVar17 = fVar18 - fVar17 * fVar17 * fVar17;
        }
        else {
          fVar17 = 0.0;
        }
        pfVar9[10] = fVar17;
        pfVar9[8] = local_d4;
        *(undefined1 *)(pfVar9 + 9) = 1;
        uVar14 = uVar14 - 1;
      }
      pfVar9 = pfVar9 + 0xb;
    } while (pfVar9 != pfVar13);
  }
  FUN_1804e4e90(&DAT_180962450);
  return;
}



/* ===== 18000ed80 FUN_18000ed80 ===== */

ulonglong FUN_18000ed80(undefined8 *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = (float *)*param_1;
  if (*(char *)((longlong)(int)param_2[7] + (longlong)pfVar1) != '\0') {
    pfVar1 = (float *)param_1[1];
    fVar3 = *pfVar1;
    if (*param_2 <= fVar3) {
      pfVar1 = (float *)param_1[2];
      fVar2 = fVar3 - *param_2;
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      if (fVar2 < pfVar1[(int)param_2[7]] + DAT_1808ac154) {
        if (*(char *)(param_2 + 9) != '\0') {
          fVar3 = fVar3 - param_2[8];
          if (fVar3 <= 0.0) {
            fVar3 = 0.0;
          }
          if (DAT_1808ac154 <= fVar3) goto LAB_18000eddf;
        }
        return (ulonglong)pfVar1 & 0xffffffffffffff00;
      }
    }
  }
LAB_18000eddf:
  return CONCAT71((int7)((ulonglong)pfVar1 >> 8),1);
}



/* ===== 18000edf0 FUN_18000edf0 ===== */

/* WARNING: Removing unreachable block (ram,0x00018000f189) */
/* WARNING: Removing unreachable block (ram,0x00018000f196) */
/* WARNING: Removing unreachable block (ram,0x00018000f1a0) */

void FUN_18000edf0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  longlong lVar17;
  undefined *puVar18;
  undefined4 extraout_XMM0_Da;
  float fVar19;
  float fVar20;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [24];
  undefined *local_188;
  float local_180;
  float local_178;
  undefined8 *local_170;
  undefined *local_168;
  float local_160 [4];
  float *local_150;
  float *pfStack_148;
  longlong local_140;
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
  
  if (DAT_180ca1bf0 != DAT_180ca1bf8) {
    DAT_180ca1bf8 = DAT_180ca1bf0;
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  if (DAT_180cd0fa7 == '\0') {
    return;
  }
  if (DAT_181107a40 == 0) {
    return;
  }
  local_150 = (float *)0x0;
  pfStack_148 = (float *)0x0;
  local_140 = 0;
  local_168 = &DAT_180962450;
  iVar10 = FUN_1804e4d70(&DAT_180962450);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_18096249c == 0x7fffffff) {
    DAT_18096249c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180ca1c08 == DAT_180ca1c10) {
    FUN_1804e4e90(&DAT_180962450);
  }
  else {
    FUN_18000f700(&local_150,DAT_180ca1c08,(DAT_180ca1c10 - DAT_180ca1c08 >> 2) * 0x2e8ba2e8ba2e8ba3
                 );
    FUN_1804e4e90(&DAT_180962450);
    pfVar12 = pfStack_148;
    fVar8 = DAT_180c9ffe4;
    fVar7 = DAT_1808acda0;
    fVar6 = DAT_1808ac34c;
    fVar5 = DAT_1808ac154;
    local_160[0] = DAT_18095d420;
    local_160[1] = (float)DAT_18095d438;
    local_160[2] = (float)DAT_18095d450;
    local_168 = (undefined *)CONCAT44(local_168._4_4_,DAT_180c9ffe4);
    fVar1 = *(float *)(DAT_180ca0a50 + 0x30);
    if ((0.0 < fVar1) && (fVar2 = *(float *)(DAT_180ca0a50 + 0x34), 0.0 < fVar2)) {
      lVar17 = (longlong)DAT_181107a00;
      lVar11 = DAT_180ca1bf0;
      for (pfVar14 = local_150; pfVar14 != pfVar12; pfVar14 = pfVar14 + 0xb) {
        fVar3 = pfVar14[7];
        lVar13 = (longlong)(int)fVar3;
        fVar19 = fVar8 - *pfVar14;
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        if (local_160[lVar13] + fVar5 <= fVar19) {
LAB_18000f07f:
          fVar19 = fVar7;
        }
        else {
          fVar20 = fVar19;
          if (fVar5 <= fVar19) {
            fVar20 = fVar5;
          }
          fVar19 = fVar19 - local_160[lVar13];
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          if (fVar19 / fVar5 <= fVar6) {
            fVar19 = fVar6 - fVar19 / fVar5;
          }
          else {
            fVar19 = 0.0;
          }
          fVar19 = fVar6 - fVar19 * (fVar20 / fVar5);
          fVar19 = fVar6 - fVar19 * fVar19 * fVar19;
          if (*(char *)(pfVar14 + 9) != '\0') {
            fVar20 = fVar8 - pfVar14[8];
            if (fVar20 <= 0.0) {
              fVar20 = 0.0;
            }
            if (fVar5 <= fVar20) goto LAB_18000f07f;
            fVar20 = fVar20 / fVar5;
            fVar20 = (fVar6 - fVar20 * fVar20 * fVar20) * pfVar14[10];
            if (fVar19 <= fVar20) {
              fVar20 = fVar19;
            }
            fVar19 = fVar20;
          }
        }
        if (0.0 < fVar19) {
          if (DAT_18095d454 != '\0') {
            lVar13 = 3;
          }
          local_138 = 0;
          uStack_130 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          if (fVar3 == 0.0) {
            puVar18 = &DAT_18095d410;
          }
          else {
            puVar18 = &DAT_18095d428;
            if (fVar3 != 1.4013e-45) {
              puVar18 = &DAT_18095d440;
            }
          }
          local_170 = &local_138;
          local_188 = &DAT_181107930 + lVar17 * 0x40;
          local_180 = fVar1;
          local_178 = fVar2;
          cVar9 = FUN_18000e140(pfVar14,fVar19,puVar18,&DAT_18095d458 + lVar13 * 0x18);
          if (cVar9 != '\0') {
            FUN_18000f4e0(extraout_XMM0_Da,&local_138);
          }
          lVar11 = DAT_180ca1bf0;
          if (0x1ffff < (ulonglong)(DAT_180ca1bf8 - DAT_180ca1bf0)) break;
        }
      }
      if (lVar11 != DAT_180ca1bf8) {
        cVar9 = FUN_18000da60(DAT_1811079e0);
        if (cVar9 == '\0') {
          if (DAT_180ca1bf0 != DAT_180ca1bf8) {
            DAT_180ca1bf8 = DAT_180ca1bf0;
          }
        }
        else {
          lVar11 = *(longlong *)(param_1 + 2) + ((longlong)*param_1 + -1) * 0x48;
          if (*(int *)(lVar11 + 0x28) != 0) {
            FUN_1803fbe60(param_1);
            lVar11 = *(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1) * 0x48;
          }
          *(code **)(lVar11 + 0x30) = FUN_18000dd60;
          *(undefined8 *)(lVar11 + 0x38) = 0;
          *(undefined4 *)(lVar11 + 0x40) = 0;
          *(undefined4 *)(lVar11 + 0x44) = 0xffffffff;
          FUN_1803fbe60(param_1);
          lVar11 = -8;
          if ((*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) != 0) &&
             (lVar17 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) + 0xc60),
             lVar17 != 0)) {
            lVar11 = lVar17;
          }
          lVar17 = *(longlong *)(param_1 + 2) + ((longlong)*param_1 + -1) * 0x48;
          if (*(int *)(lVar17 + 0x28) != 0) {
            FUN_1803fbe60(param_1);
            lVar17 = *(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1) * 0x48;
          }
          *(longlong *)(lVar17 + 0x30) = lVar11;
          *(undefined8 *)(lVar17 + 0x38) = 0;
          *(undefined4 *)(lVar17 + 0x40) = 0;
          *(undefined4 *)(lVar17 + 0x44) = 0xffffffff;
          FUN_1803fbe60(param_1);
        }
      }
    }
  }
  puVar15 = auStack_1a8;
  puVar16 = auStack_1a8;
  if (local_150 == (float *)0x0) {
    return;
  }
  pfVar12 = local_150;
  if (0xfff < (ulonglong)((local_140 - (longlong)local_150 >> 2) * 4)) {
    pfVar12 = *(float **)(local_150 + -2);
    if ((undefined1 *)((longlong)local_150 + (-8 - (longlong)pfVar12)) < (undefined1 *)0x20)
    goto LAB_18000f2cb;
    pfVar12 = (float *)&DAT_00000005;
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar15 = auStack_1a0;
  }
  puVar16 = puVar15;
LAB_18000f2cb:
  *(undefined8 *)(puVar16 + -8) = 0x18000f2d3;
  thunk_FUN_1803d64e0(pfVar12);
  return;
}



/* ===== 18000f330 FUN_18000f330 ===== */

void FUN_18000f330(void)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_180962450);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_18096249c == 0x7fffffff) {
    DAT_18096249c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180ca1c08 != DAT_180ca1c10) {
    DAT_180ca1c10 = DAT_180ca1c08;
  }
  FUN_1804e4e90(&DAT_180962450);
  return;
}



/* ===== 18000f3a0 FUN_18000f3a0 ===== */

undefined8 FUN_18000f3a0(undefined8 *param_1)

{
  if (param_1 + -0x2000 < (undefined8 *)0x7ffffffeffff) {
    return *param_1;
  }
  return 0;
}



/* ===== 18000f3d0 FUN_18000f3d0 ===== */

undefined4 FUN_18000f3d0(undefined4 *param_1)

{
  if (param_1 + -0x4000 < (undefined4 *)0x7ffffffeffff) {
    return *param_1;
  }
  return 0;
}



/* ===== 18000f400 FUN_18000f400 ===== */

void FUN_18000f400(ulonglong *param_1)

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
  uVar3 = ((longlong)(param_1[2] - uVar4) >> 2) * 4;
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
  *(undefined8 *)(puVar5 + -8) = 0x18000f463;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18000f490 FUN_18000f490 ===== */

undefined8 * FUN_18000f490(undefined8 *param_1)

{
  if ((ulonglong)param_1[3] < 0x10) {
    return param_1;
  }
  return (undefined8 *)*param_1;
}



/* ===== 18000f4a0 thunk_FUN_18000f890 ===== */

void thunk_FUN_18000f890(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if ((ulonglong)param_1[3] < 0x10) goto LAB_18000f8dc;
  lVar2 = *param_1;
  if (param_1[3] + 1U < 0x1000) {
LAB_18000f8d1:
    puVar4 = puVar3;
    lVar5 = lVar2;
  }
  else {
    lVar5 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar5) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)(5);
      puVar3 = auStack_20;
      goto LAB_18000f8d1;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x18000f8dc;
  thunk_FUN_1803d64e0(lVar5);
LAB_18000f8dc:
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



/* ===== 18000f4b0 _guard_check_icall ===== */

void _guard_check_icall(void)

{
  return;
}



/* ===== 18000f4c0 FUN_18000f4c0 ===== */

undefined8 * FUN_18000f4c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return param_1;
}



/* ===== 18000f4e0 FUN_18000f4e0 ===== */

undefined8 * FUN_18000f4e0(undefined8 param_1,undefined8 *param_2)

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
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar6 = DAT_180ca1bf8;
  if (DAT_180ca1bf8 != DAT_180ca1c00) {
    uVar5 = param_2[1];
    *DAT_180ca1bf8 = *param_2;
    puVar6[1] = uVar5;
    uVar5 = param_2[3];
    puVar6[2] = param_2[2];
    puVar6[3] = uVar5;
    uVar5 = param_2[5];
    puVar6[4] = param_2[4];
    puVar6[5] = uVar5;
    uVar5 = param_2[7];
    puVar6[6] = param_2[6];
    puVar6[7] = uVar5;
    uVar5 = param_2[9];
    puVar6[8] = param_2[8];
    puVar6[9] = uVar5;
    uVar5 = param_2[0xb];
    puVar6[10] = param_2[10];
    puVar6[0xb] = uVar5;
    uVar5 = param_2[0xd];
    puVar6[0xc] = param_2[0xc];
    puVar6[0xd] = uVar5;
    uVar5 = param_2[0xf];
    puVar6[0xe] = param_2[0xe];
    puVar6[0xf] = uVar5;
    puVar6 = DAT_180ca1bf8;
    DAT_180ca1bf8 = DAT_180ca1bf8 + 0x10;
    return puVar6;
  }
  uVar14 = 0x1ffffffffffffff;
  uVar15 = (longlong)DAT_180ca1bf8 - (longlong)DAT_180ca1bf0;
  lVar12 = (longlong)uVar15 >> 7;
  if (lVar12 == 0x1ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar13 = lVar12 + 1;
  uVar8 = (longlong)DAT_180ca1c00 - (longlong)DAT_180ca1bf0 >> 7;
  if (uVar8 <= 0x1ffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar14 = uVar13;
    if (uVar13 <= uVar8) {
      uVar14 = uVar8;
    }
    if (0x1ffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar14 * 0x80);
  uVar5 = param_2[1];
  puVar16 = (undefined8 *)((uVar15 & 0xffffffffffffff80) + (longlong)puVar7);
  *puVar16 = *param_2;
  puVar16[1] = uVar5;
  uVar5 = param_2[3];
  puVar16[2] = param_2[2];
  puVar16[3] = uVar5;
  uVar5 = param_2[5];
  puVar16[4] = param_2[4];
  puVar16[5] = uVar5;
  uVar5 = param_2[7];
  puVar16[6] = param_2[6];
  puVar16[7] = uVar5;
  uVar5 = param_2[9];
  puVar16[8] = param_2[8];
  puVar16[9] = uVar5;
  uVar5 = param_2[0xb];
  puVar16[10] = param_2[10];
  puVar16[0xb] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 100);
  uVar3 = *(undefined4 *)(param_2 + 0xd);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(puVar16 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)puVar16 + 100) = uVar2;
  *(undefined4 *)(puVar16 + 0xd) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x6c) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar3 = *(undefined4 *)(param_2 + 0xf);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(puVar16 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)puVar16 + 0x74) = uVar2;
  *(undefined4 *)(puVar16 + 0xf) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uVar4;
  if (puVar6 == DAT_180ca1bf8) {
    lVar12 = (longlong)DAT_180ca1bf8 - (longlong)DAT_180ca1bf0;
    puVar9 = puVar7;
    puVar6 = DAT_180ca1bf0;
  }
  else {
    FUN_180540530(puVar7,DAT_180ca1bf0,(longlong)puVar6 - (longlong)DAT_180ca1bf0);
    puVar9 = puVar16 + 0x10;
    lVar12 = (longlong)DAT_180ca1bf8 - (longlong)puVar6;
  }
  puVar10 = auStack_38;
  puVar11 = auStack_38;
  FUN_180540530(puVar9,puVar6,lVar12);
  if (DAT_180ca1bf0 == (undefined8 *)0x0) goto LAB_18000f6ab;
  puVar6 = DAT_180ca1bf0;
  if (((longlong)DAT_180ca1c00 - (longlong)DAT_180ca1bf0 & 0xffffffffffffff80U) < 0x1000) {
LAB_18000f6a3:
    puVar11 = puVar10;
  }
  else {
    puVar6 = (undefined8 *)DAT_180ca1bf0[-1];
    if (0x1f < (ulonglong)((longlong)DAT_180ca1bf0 + (-8 - (longlong)puVar6))) {
      pcVar1 = (code *)swi(0x29);
      puVar6 = (undefined8 *)(*pcVar1)(5);
      puVar10 = auStack_30;
      goto LAB_18000f6a3;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x18000f6ab;
  thunk_FUN_1803d64e0(puVar6);
LAB_18000f6ab:
  DAT_180ca1bf8 = puVar7 + uVar13 * 0x10;
  DAT_180ca1bf0 = puVar7;
  DAT_180ca1c00 = puVar7 + uVar14 * 0x10;
  return puVar16;
}



/* ===== 18000f700 FUN_18000f700 ===== */

void FUN_18000f700(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar6 = auStack_58;
  puVar7 = auStack_58;
  uVar9 = *param_1;
  uVar2 = ((longlong)(param_1[2] - uVar9) >> 2) * 0x2e8ba2e8ba2e8ba3;
  if (param_3 <= uVar2) {
    lVar5 = (longlong)(param_1[1] - uVar9) >> 2;
    if ((ulonglong)(lVar5 * 0x2e8ba2e8ba2e8ba3) < param_3) {
      FUN_180540530(uVar9,param_2,lVar5 * 4);
      uVar9 = param_1[1];
      lVar4 = (param_3 + lVar5 * -0x2e8ba2e8ba2e8ba3) * 0x2c;
      FUN_180540530(uVar9,lVar5 * 4 + param_2,lVar4);
    }
    else {
      lVar4 = param_3 * 0x2c;
      FUN_180540530(uVar9,param_2,lVar4);
    }
    goto LAB_18000f848;
  }
  if (0x5d1745d1745d174 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  if (0x5d1745d1745d174 - (uVar2 >> 1) < uVar2) {
    uVar2 = 0x5d1745d1745d174;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    if (uVar2 < param_3) {
      uVar2 = param_3;
    }
  }
  puVar8 = auStack_58;
  if (uVar9 != 0) {
    uVar3 = uVar9;
    if ((ulonglong)(((longlong)(param_1[2] - uVar9) >> 2) * 4) < 0x1000) {
LAB_18000f7ad:
      puVar7 = puVar6;
    }
    else {
      uVar3 = *(ulonglong *)(uVar9 - 8);
      uVar9 = (uVar9 - uVar3) - 8;
      if (0x1f < uVar9) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar6 = auStack_50;
        uVar3 = uVar9;
        goto LAB_18000f7ad;
      }
    }
    *(undefined8 *)(puVar7 + -8) = 0x18000f7b5;
    thunk_FUN_1803d64e0(uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar8 = puVar7;
  }
  if (0x5d1745d1745d174 < uVar2) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_18000f862;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar8 + -8) = 0x18000f7d7;
  uVar9 = FUN_18000fb70(uVar2 * 0x2c);
  *param_1 = uVar9;
  param_1[1] = uVar9;
  lVar4 = param_3 * 0x2c;
  param_1[2] = uVar2 * 0x2c + uVar9;
  *(undefined8 *)(puVar8 + -8) = 0x18000f7fb;
  FUN_180540530(uVar9,param_2,lVar4);
LAB_18000f848:
  param_1[1] = lVar4 + uVar9;
  return;
}



/* ===== 18000f870 FUN_18000f870 ===== */

undefined8 * FUN_18000f870(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



/* ===== 18000f890 FUN_18000f890 ===== */

void FUN_18000f890(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if ((ulonglong)param_1[3] < 0x10) goto LAB_18000f8dc;
  lVar2 = *param_1;
  if (param_1[3] + 1U < 0x1000) {
LAB_18000f8d1:
    puVar4 = puVar3;
    lVar5 = lVar2;
  }
  else {
    lVar5 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar5) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)(5);
      puVar3 = auStack_20;
      goto LAB_18000f8d1;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x18000f8dc;
  thunk_FUN_1803d64e0(lVar5);
LAB_18000f8dc:
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



/* ===== 18000f900 FUN_18000f900 ===== */

undefined8 * FUN_18000f900(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar9 = DAT_180ca1c08;
  uVar14 = 0x5d1745d1745d174;
  lVar7 = (DAT_180ca1c10 - DAT_180ca1c08 >> 2) * 0x2e8ba2e8ba2e8ba3;
  if (lVar7 == 0x5d1745d1745d174) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar7 + 1;
  uVar8 = (DAT_180ca1c18 - DAT_180ca1c08 >> 2) * 0x2e8ba2e8ba2e8ba3;
  if (uVar8 <= 0x5d1745d1745d174 - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar14 = uVar1;
    if (uVar1 <= uVar8) {
      uVar14 = uVar8;
    }
    if (0x5d1745d1745d174 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar7 = FUN_18000fb70(uVar14 * 0x2c);
  uVar6 = param_3[1];
  puVar12 = (undefined8 *)(((param_2 - lVar9) / 0x2c) * 0x2c + lVar7);
  *puVar12 = *param_3;
  puVar12[1] = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar4 = *(undefined4 *)(param_3 + 3);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)puVar12 + 0x14) = uVar3;
  *(undefined4 *)(puVar12 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar5;
  uVar3 = *(undefined4 *)(param_3 + 4);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar5 = *(undefined4 *)(param_3 + 5);
  *(undefined4 *)((longlong)puVar12 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(puVar12 + 4) = uVar3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = uVar4;
  *(undefined4 *)(puVar12 + 5) = uVar5;
  if (param_2 == DAT_180ca1c10) {
    lVar13 = DAT_180ca1c10 - DAT_180ca1c08;
    lVar9 = lVar7;
    param_2 = DAT_180ca1c08;
  }
  else {
    FUN_180540530(lVar7,DAT_180ca1c08,param_2 - DAT_180ca1c08);
    lVar9 = (longlong)puVar12 + 0x2c;
    lVar13 = DAT_180ca1c10 - param_2;
  }
  puVar10 = auStack_38;
  puVar11 = auStack_38;
  FUN_180540530(lVar9,param_2,lVar13);
  if (DAT_180ca1c08 == 0) goto LAB_18000fa74;
  lVar9 = DAT_180ca1c08;
  if ((ulonglong)((DAT_180ca1c18 - DAT_180ca1c08 >> 2) * 4) < 0x1000) {
LAB_18000fa69:
    puVar11 = puVar10;
  }
  else {
    lVar9 = *(longlong *)(DAT_180ca1c08 + -8);
    if (0x1f < (DAT_180ca1c08 - lVar9) - 8U) {
      lVar9 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar10 = auStack_30;
      goto LAB_18000fa69;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x18000fa74;
  thunk_FUN_1803d64e0(lVar9);
LAB_18000fa74:
  DAT_180ca1c10 = uVar1 * 0x2c + lVar7;
  DAT_180ca1c08 = lVar7;
  DAT_180ca1c18 = uVar14 * 0x2c + lVar7;
  return puVar12;
}



/* ===== 18000fad0 FUN_18000fad0 ===== */

void FUN_18000fad0(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  uVar3 = param_3 + 1;
  if (0xfff < uVar3) {
    plVar1 = (longlong *)(param_2 - 8);
    param_2 = (param_2 - *plVar1) - 8;
    if (param_2 < 0x20) {
      thunk_FUN_1803d64e0(*plVar1,param_3 + 0x28);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
  }
  thunk_FUN_1803d64e0(param_2,uVar3);
  return;
}



/* ===== 18000fb10 FUN_18000fb10 ===== */

void FUN_18000fb10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1804e4cd0("vector too long");
}



/* ===== 18000fb30 FUN_18000fb30 ===== */

void FUN_18000fb30(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  
  if (0xfff < param_3) {
    plVar1 = (longlong *)(param_2 - 8);
    param_2 = (param_2 - *plVar1) - 8;
    if (param_2 < 0x20) {
      thunk_FUN_1803d64e0(*plVar1,param_3 + 0x27);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
  }
  thunk_FUN_1803d64e0(param_2,param_3);
  return;
}



/* ===== 18000fb70 FUN_18000fb70 ===== */

ulonglong FUN_18000fb70(ulonglong param_1)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 < 0x1000) {
    uVar3 = FUN_1804ecaa0();
    return uVar3;
  }
  if (param_1 + 0x27 <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
  lVar2 = FUN_1804ecaa0(param_1 + 0x27);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    lVar4 = 5;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)();
  }
  uVar3 = lVar2 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar3 - 8) = lVar4;
  return uVar3;
}



/* ===== 18000fbd0 FUN_18000fbd0 ===== */

undefined8 FUN_18000fbd0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *param_2 = uVar3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
}



/* ===== 18000fc10 FUN_18000fc10 ===== */

undefined8 FUN_18000fc10(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  puVar3 = (undefined8 *)&local_38;
  lVar2 = *(longlong *)((ulonglong)param_2 + param_1);
  if (lVar2 == 0) {
    local_2c = 0;
    local_24 = 0;
    puVar3 = &local_2c;
  }
  else {
    local_38 = *(undefined4 *)(lVar2 + 0x18);
    uStack_34 = *(undefined4 *)(lVar2 + 0x1c);
    local_30 = *(undefined4 *)(lVar2 + 0x20);
  }
  *param_3 = *puVar3;
  uVar1 = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)(param_3 + 1) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



/* ===== 18000fc90 FUN_18000fc90 ===== */

ulonglong FUN_18000fc90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_18000fc10(param_1,0x18,param_2);
  if (((char)uVar2 == '\0') ||
     (uVar2 = FUN_18000fc10(param_1,0x20,param_2 + 0xc), (char)uVar2 == '\0')) {
    return uVar2 & 0xffffffffffffff00;
  }
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x48);
  *(uint *)(param_2 + 0x2c) = (uint)*(ushort *)(param_1 + 0x50);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



/* ===== 18000fd50 FUN_18000fd50 ===== */

longlong FUN_18000fd50(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  lVar3 = (*DAT_180ca1c60)();
  uStack_38 = 0;
  uStack_30 = 0;
  if ((lVar3 != 0) && (param_1 != 0)) {
    cVar1 = FUN_18000fbd0(param_1,&uStack_38);
    if ((cVar1 != '\0') && (DAT_18095d3dc != '\0')) {
      iVar2 = FUN_1804e4d70(&DAT_1809f29b0);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f29fc == 0x7fffffff) {
        DAT_1809f29fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      uStack_28 = DAT_180c9ffe4;
      uStack_24 = (undefined4)uStack_38;
      uStack_20 = uStack_38._4_4_;
      uStack_1c = uStack_30;
      uVar4 = uStack_30;
      if (0x1ff < (ulonglong)(DAT_180cecbe8 - DAT_180cecbe0)) {
        uVar4 = FUN_180540530(DAT_180cecbe0,DAT_180cecbe0 + 0x10,
                              DAT_180cecbe8 - (DAT_180cecbe0 + 0x10));
        DAT_180cecbe8 = DAT_180cecbe8 + -0x10;
      }
      FUN_18022b5a0(uVar4,&uStack_28);
      FUN_1804e4e90(&DAT_1809f29b0);
    }
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return lVar3;
}



/* ===== 18000fd70 FUN_18000fd70 ===== */

void FUN_18000fd70(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  longlong in_RAX;
  longlong unaff_RBX;
  undefined4 uVar3;
  undefined1 auStackX_8 [24];
  undefined8 uVar4;
  undefined4 uStack0000000000000034;
  undefined4 uStack000000000000003c;
  undefined *in_stack_00000078;
  
  uVar4 = 0;
  param_5._0_4_ = 0;
  if ((in_RAX != 0) && (unaff_RBX != 0)) {
    cVar1 = FUN_18000fbd0(param_1,auStackX_8 + 0x18,param_3,param_4,0);
    if ((cVar1 != '\0') && (DAT_18095d3dc != '\0')) {
      in_stack_00000078 = &DAT_1809f29b0;
      iVar2 = FUN_1804e4d70(&DAT_1809f29b0);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f29fc == 0x7fffffff) {
        DAT_1809f29fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      param_6 = DAT_180c9ffe4;
      uStack0000000000000034 = (undefined4)uVar4;
      param_7 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack000000000000003c = (undefined4)param_5;
      uVar3 = (undefined4)param_5;
      if (0x1ff < (ulonglong)(DAT_180cecbe8 - DAT_180cecbe0)) {
        uVar3 = FUN_180540530(DAT_180cecbe0,DAT_180cecbe0 + 0x10,
                              DAT_180cecbe8 - (DAT_180cecbe0 + 0x10));
        DAT_180cecbe8 = DAT_180cecbe8 + -0x10;
      }
      FUN_18022b5a0(uVar3,&param_6);
      FUN_1804e4e90(&DAT_1809f29b0);
    }
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18000fda8 FUN_18000fda8 ===== */

void FUN_18000fda8(void)

{
  int iVar1;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined *puStack0000000000000078;
  
  if (DAT_18095d3dc != '\0') {
    puStack0000000000000078 = &DAT_1809f29b0;
    iVar1 = FUN_1804e4d70(&DAT_1809f29b0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f29fc == 0x7fffffff) {
      DAT_1809f29fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    uStack0000000000000030 = DAT_180c9ffe4;
    uStack000000000000003c = in_stack_00000028;
    if (0x1ff < (ulonglong)(DAT_180cecbe8 - DAT_180cecbe0)) {
      in_stack_00000028 =
           FUN_180540530(DAT_180cecbe0,DAT_180cecbe0 + 0x10,DAT_180cecbe8 - (DAT_180cecbe0 + 0x10));
      DAT_180cecbe8 = DAT_180cecbe8 + -0x10;
    }
    FUN_18022b5a0(in_stack_00000028,&uStack0000000000000030);
    FUN_1804e4e90(&DAT_1809f29b0);
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18000fe90 FUN_18000fe90 ===== */

longlong FUN_18000fe90(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  lVar4 = (*DAT_180ca39d8)();
  if (((lVar4 != 0) && (param_1 != 0)) &&
     ((DAT_18095d40c != '\0' || ((DAT_18095d424 != '\0' || (DAT_18095d43c != '\0')))))) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    uStack_18 = 0xffffffffffffffff;
    cVar2 = FUN_18000fc90(param_1,&local_48);
    if (cVar2 != '\0') {
      iVar3 = FUN_1804e4d70(&DAT_1809624a0);
      puVar1 = DAT_180ca3a00;
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809624ec == 0x7fffffff) {
        DAT_1809624ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      if ((ulonglong)(((longlong)DAT_180ca3a00 - DAT_180ca39f8 >> 3) * 0x6db6db6db6db6db7) < 0x100)
      {
        if (DAT_180ca3a00 == DAT_180ca3a08) {
          FUN_180011690(0x6db6db6db6db6db7,DAT_180ca3a00,&local_48);
        }
        else {
          *DAT_180ca3a00 = local_48;
          puVar1[1] = uStack_40;
          puVar1[2] = local_38;
          puVar1[3] = local_30;
          *(undefined4 *)(puVar1 + 4) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar1 + 0x24) = local_28._4_4_;
          *(undefined4 *)(puVar1 + 5) = (undefined4)local_20;
          *(undefined4 *)((longlong)puVar1 + 0x2c) = local_20._4_4_;
          puVar1[6] = uStack_18;
          DAT_180ca3a00 = DAT_180ca3a00 + 7;
        }
      }
      FUN_1804e4e90(&DAT_1809624a0);
    }
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return lVar4;
}



/* ===== 18000ff00 FUN_18000ff00 ===== */

void FUN_18000ff00(undefined4 param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 local_res20;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000050 = 0xffffffffffffffff;
  cVar2 = FUN_18000fc90(param_1,&local_res20);
  if (cVar2 != '\0') {
    iVar3 = FUN_1804e4d70(&DAT_1809624a0);
    puVar1 = DAT_180ca3a00;
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809624ec == 0x7fffffff) {
      DAT_1809624ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    if ((ulonglong)(((longlong)DAT_180ca3a00 - DAT_180ca39f8 >> 3) * 0x6db6db6db6db6db7) < 0x100) {
      if (DAT_180ca3a00 == DAT_180ca3a08) {
        FUN_180011690(0x6db6db6db6db6db7,DAT_180ca3a00,&local_res20);
      }
      else {
        *DAT_180ca3a00 = local_res20;
        puVar1[1] = in_stack_00000028;
        puVar1[2] = in_stack_00000030;
        puVar1[3] = in_stack_00000038;
        *(undefined4 *)(puVar1 + 4) = uStack0000000000000040;
        *(undefined4 *)((longlong)puVar1 + 0x24) = uStack0000000000000044;
        *(undefined4 *)(puVar1 + 5) = uStack0000000000000048;
        *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack000000000000004c;
        puVar1[6] = uStack0000000000000050;
        DAT_180ca3a00 = DAT_180ca3a00 + 7;
      }
    }
    FUN_1804e4e90(&DAT_1809624a0);
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18000ff30 FUN_18000ff30 ===== */

void FUN_18000ff30(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uStackX_20;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  
  iVar2 = FUN_1804e4d70();
  puVar1 = DAT_180ca3a00;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809624ec == 0x7fffffff) {
    DAT_1809624ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((ulonglong)(((longlong)DAT_180ca3a00 - DAT_180ca39f8 >> 3) * 0x6db6db6db6db6db7) < 0x100) {
    if (DAT_180ca3a00 == DAT_180ca3a08) {
      FUN_180011690(0x6db6db6db6db6db7,DAT_180ca3a00,&uStackX_20);
    }
    else {
      *DAT_180ca3a00 = uStackX_20;
      puVar1[1] = in_stack_00000028;
      puVar1[2] = in_stack_00000030;
      puVar1[3] = in_stack_00000038;
      *(undefined4 *)(puVar1 + 4) = uStack0000000000000040;
      *(undefined4 *)((longlong)puVar1 + 0x24) = uStack0000000000000044;
      *(undefined4 *)(puVar1 + 5) = uStack0000000000000048;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack000000000000004c;
      puVar1[6] = in_stack_00000050;
      DAT_180ca3a00 = DAT_180ca3a00 + 7;
    }
  }
  FUN_1804e4e90();
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18000ff54 FUN_18000ff54 ===== */

void FUN_18000ff54(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 local_res20;
  
  if ((ulonglong)(((longlong)param_2 - DAT_180ca39f8 >> 3) * 0x6db6db6db6db6db7) < 0x100) {
    if (param_2 == DAT_180ca3a08) {
      FUN_180011690(0x6db6db6db6db6db7,param_2,&local_res20);
    }
    else {
      *param_2 = local_res20;
      param_2[1] = param_5;
      param_2[2] = param_6;
      param_2[3] = param_7;
      *(undefined4 *)(param_2 + 4) = (undefined4)param_8;
      *(undefined4 *)((longlong)param_2 + 0x24) = param_8._4_4_;
      *(undefined4 *)(param_2 + 5) = (undefined4)param_9;
      *(undefined4 *)((longlong)param_2 + 0x2c) = param_9._4_4_;
      param_2[6] = param_10;
      DAT_180ca3a00 = DAT_180ca3a00 + 0x38;
    }
  }
  FUN_1804e4e90();
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18000ffe8 thunk_FUN_1804e4a90 ===== */

void thunk_FUN_1804e4a90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1804e4a90();
}



/* ===== 180010000 FUN_180010000 ===== */

undefined8 FUN_180010000(char *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  size_t sVar2;
  HMODULE pHVar3;
  HANDLE pvVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *local_58;
  size_t local_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  
  sVar2 = strlen(param_1);
  pHVar3 = GetModuleHandleA("client.dll");
  if (pHVar3 == (HMODULE)0x0) {
    uStack_40 = 0;
    local_48 = 0;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    pvVar4 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar4,pHVar3,&local_48,0x18);
    if (iVar1 == 0) {
      uStack_40 = 0;
      local_48 = 0;
    }
    else {
      uStack_40 = uStack_40 & 0xffffffff;
    }
  }
  local_58 = param_1;
  local_50 = sVar2;
  lVar5 = FUN_1801d1f10(&local_48,&local_58);
  if (lVar5 == 0) {
    FUN_1802b2560("[error] bullets | vtable %s not found",param_1);
  }
  else {
    lVar5 = FUN_18000f3a0(lVar5 + 0x48);
    if (lVar5 != 0) {
      iVar1 = FUN_180428df0(lVar5,param_2,param_3);
      if (iVar1 != 0) {
        uVar6 = FUN_180429510(iVar1);
        FUN_1802b2560("[error] bullets | %s parse hook failed | %s",param_1,uVar6);
        *param_3 = 0;
        return 0;
      }
      iVar1 = FUN_1804293b0(lVar5,1);
      if (iVar1 == 0) {
        FUN_1802b2560("[bullets] %s parse hooked -> %p",param_1,lVar5);
        return 1;
      }
      uVar6 = FUN_180429510(iVar1);
      FUN_1802b2560("[error] bullets | %s parse enable failed | %s",param_1,uVar6);
      return 0;
    }
  }
  return 0;
}



/* ===== 180010160 FUN_180010160 ===== */

undefined8 * FUN_180010160(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  
  *param_1 = param_2;
  sVar1 = strlen(param_2);
  param_1[1] = sVar1;
  return param_1;
}



