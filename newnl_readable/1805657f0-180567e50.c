/* ===== 1805657f0 FUN_1805657f0 ===== */

void FUN_1805657f0(void)

{
  FUN_1800819d0(&DAT_180ca0d30,&DAT_180ca0d30,*(undefined8 *)(DAT_180ca0d30 + 8));
  thunk_FUN_1803d64e0(DAT_180ca0d30,0x40);
  return;
}



/* ===== 180565830 FUN_180565830 ===== */

void FUN_180565830(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180ccfb08;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180ccfb00;
  if (DAT_180ccfb00 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x40) {
    FUN_180081c30(uVar2 + 0x20);
    FUN_18000f890(uVar2);
  }
  uVar2 = DAT_180ccfb00;
  if (0xfff < (DAT_180ccfb10 - DAT_180ccfb00 & 0xffffffffffffffc0)) {
    uVar2 = *(ulonglong *)(DAT_180ccfb00 - 8);
    uVar3 = (DAT_180ccfb00 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_1805658c0;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_1805658c0:
  *(undefined8 *)(puVar5 + -8) = 0x1805658c5;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180ccfb10 = 0;
  DAT_180ccfb08 = 0;
  DAT_180ccfb00 = 0;
  return;
}



/* ===== 1805658f0 FUN_1805658f0 ===== */

void FUN_1805658f0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180ccfbe8 == 0) {
    return;
  }
  lVar2 = DAT_180ccfbe8;
  if (0xfff < (DAT_180ccfbf8 - DAT_180ccfbe8 & 0xfffffffffffffff0U)) {
    lVar2 = *(longlong *)(DAT_180ccfbe8 + -8);
    if ((DAT_180ccfbe8 - lVar2) - 8U < 0x20) goto LAB_180565938;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180565938:
  *(undefined8 *)(puVar4 + -8) = 0x18056593d;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180ccfbf8 = 0;
  DAT_180ccfbf0 = 0;
  DAT_180ccfbe8 = 0;
  return;
}



/* ===== 180565960 FUN_180565960 ===== */

void FUN_180565960(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180ccfc18 == 0) {
    return;
  }
  lVar2 = DAT_180ccfc18;
  if (0xfff < (ulonglong)((DAT_180ccfc28 - DAT_180ccfc18 >> 5) * 0x20)) {
    lVar2 = *(longlong *)(DAT_180ccfc18 + -8);
    if ((DAT_180ccfc18 - lVar2) - 8U < 0x20) goto LAB_1805659bd;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_1805659bd:
  *(undefined8 *)(puVar4 + -8) = 0x1805659c5;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180ccfc28 = 0;
  DAT_180ccfc20 = 0;
  DAT_180ccfc18 = 0;
  return;
}



/* ===== 180565a10 FUN_180565a10 ===== */

void FUN_180565a10(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180ccfeb8 == 0) {
    return;
  }
  lVar2 = DAT_180ccfeb8;
  if (0xfff < (ulonglong)((DAT_180ccfec8 - DAT_180ccfeb8 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_180ccfeb8 + -8);
    if ((DAT_180ccfeb8 - lVar2) - 8U < 0x20) goto LAB_180565a60;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180565a60:
  *(undefined8 *)(puVar4 + -8) = 0x180565a68;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180ccfec8 = 0;
  DAT_180ccfec0 = 0;
  DAT_180ccfeb8 = 0;
  return;
}



/* ===== 180565a90 FUN_180565a90 ===== */

void FUN_180565a90(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180cd00f0 == 0) {
    return;
  }
  lVar2 = DAT_180cd00f0;
  if (0xfff < (ulonglong)((DAT_180cd0100 - DAT_180cd00f0 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_180cd00f0 + -8);
    if ((DAT_180cd00f0 - lVar2) - 8U < 0x20) goto LAB_180565aed;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180565aed:
  *(undefined8 *)(puVar4 + -8) = 0x180565af5;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cd0100 = 0;
  DAT_180cd00f8 = 0;
  DAT_180cd00f0 = 0;
  return;
}



/* ===== 180565b20 FUN_180565b20 ===== */

void FUN_180565b20(void)

{
  FUN_1804eced0(&PTR_s_normal_1809e8670,0x3c8,2,&LAB_180094940);
  return;
}



/* ===== 180565b60 FUN_180565b60 ===== */

void FUN_180565b60(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180cd0278;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180cd0270;
  if (DAT_180cd0270 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 8) {
    FUN_180099040(uVar2);
  }
  uVar2 = DAT_180cd0270;
  if (0xfff < (ulonglong)(((longlong)(DAT_180cd0280 - DAT_180cd0270) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_180cd0270 - 8);
    uVar3 = (DAT_180cd0270 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_180565be4;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_180565be4:
  *(undefined8 *)(puVar5 + -8) = 0x180565be9;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180cd0280 = 0;
  DAT_180cd0278 = 0;
  DAT_180cd0270 = 0;
  return;
}



/* ===== 180565c30 FUN_180565c30 ===== */

void FUN_180565c30(void)

{
  FUN_1800a22a0(&DAT_180ca0d68,&DAT_180ca0d68,*(undefined8 *)(DAT_180ca0d68 + 8));
  thunk_FUN_1803d64e0(DAT_180ca0d68,0xd0);
  return;
}



/* ===== 180565c70 FUN_180565c70 ===== */

void FUN_180565c70(void)

{
  FUN_1800a2200(&DAT_180ca0d58,&DAT_180ca0d58,*(undefined8 *)(DAT_180ca0d58 + 8));
  thunk_FUN_1803d64e0(DAT_180ca0d58,0x90);
  return;
}



/* ===== 180565cb0 FUN_180565cb0 ===== */

void FUN_180565cb0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180cd02b8 == 0) {
    return;
  }
  lVar2 = DAT_180cd02b8;
  if (0xfff < (ulonglong)((DAT_180cd02c8 - DAT_180cd02b8 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_180cd02b8 + -8);
    if ((DAT_180cd02b8 - lVar2) - 8U < 0x20) goto LAB_180565d12;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180565d12:
  *(undefined8 *)(puVar4 + -8) = 0x180565d1a;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cd02c8 = 0;
  DAT_180cd02c0 = 0;
  DAT_180cd02b8 = 0;
  return;
}



/* ===== 180565d70 FUN_180565d70 ===== */

void FUN_180565d70(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (DAT_180ca0d98 != 0) {
    do {
      FUN_1800b0980(*(undefined8 *)
                     (DAT_180ca0d80 + (DAT_180ca0d88 - 1U & DAT_180ca0d90 + -1 + DAT_180ca0d98) * 8)
                   );
      DAT_180ca0d98 = DAT_180ca0d98 + -1;
    } while (DAT_180ca0d98 != 0);
    DAT_180ca0d90 = 0;
    DAT_180ca0d98 = 0;
  }
  lVar3 = DAT_180ca0d80;
  lVar6 = DAT_180ca0d88;
  if (DAT_180ca0d80 != 0) {
    while (0 < lVar6) {
      lVar1 = *(longlong *)(lVar3 + -8 + lVar6 * 8);
      lVar6 = lVar6 + -1;
      if (lVar1 != 0) {
        thunk_FUN_1803d64e0(lVar1,0x148);
        lVar3 = DAT_180ca0d80;
      }
    }
    uVar5 = DAT_180ca0d88 * 8;
    lVar6 = lVar3;
    if (0xfff < uVar5) {
      lVar6 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar6) - 8U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_1803d64e0(lVar6,uVar5);
    DAT_180ca0d80 = 0;
    DAT_180ca0d88 = 0;
  }
  uVar4 = DAT_180ca0d78;
  DAT_180ca0d78 = 0;
  thunk_FUN_1803d64e0(uVar4,0x10);
  return;
}



/* ===== 180565e90 FUN_180565e90 ===== */

void FUN_180565e90(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_180cd0388 == 0) {
    return;
  }
  FUN_1800b7c00(DAT_180cd0388,DAT_180cd0390);
  puVar4 = auStack_28;
  lVar2 = DAT_180cd0388;
  puVar3 = auStack_28;
  if (0xfff < (ulonglong)((DAT_180cd0398 - DAT_180cd0388 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_180cd0388 + -8);
    if ((DAT_180cd0388 - lVar2) - 8U < 0x20) goto LAB_180565ef3;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180565ef3:
  *(undefined8 *)(puVar4 + -8) = 0x180565efb;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cd0398 = 0;
  DAT_180cd0390 = 0;
  DAT_180cd0388 = 0;
  return;
}



/* ===== 180565f20 FUN_180565f20 ===== */

void FUN_180565f20(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180cd03a8;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180cd03a0;
  if (DAT_180cd03a0 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x78) {
    FUN_18000f890(uVar2 + 0x40);
    FUN_18000f890(uVar2 + 0x20);
    FUN_18000f890(uVar2);
  }
  uVar2 = DAT_180cd03a0;
  if (0xfff < (ulonglong)(((longlong)(DAT_180cd03b0 - DAT_180cd03a0) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_180cd03a0 - 8);
    uVar3 = (DAT_180cd03a0 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_180565fc0;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_180565fc0:
  *(undefined8 *)(puVar5 + -8) = 0x180565fc5;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180cd03b0 = 0;
  DAT_180cd03a8 = 0;
  DAT_180cd03a0 = 0;
  return;
}



/* ===== 180565ff0 FUN_180565ff0 ===== */

void FUN_180565ff0(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180cd03c0;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180cd03b8;
  if (DAT_180cd03b8 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x40) {
    FUN_18000f890(uVar2 + 0x20);
    FUN_18000f890(uVar2);
  }
  uVar2 = DAT_180cd03b8;
  if (0xfff < (DAT_180cd03c8 - DAT_180cd03b8 & 0xffffffffffffffc0)) {
    uVar2 = *(ulonglong *)(DAT_180cd03b8 - 8);
    uVar3 = (DAT_180cd03b8 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_180566075;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_180566075:
  *(undefined8 *)(puVar5 + -8) = 0x18056607a;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180cd03c8 = 0;
  DAT_180cd03c0 = 0;
  DAT_180cd03b8 = 0;
  return;
}



/* ===== 1805660a0 FUN_1805660a0 ===== */

void FUN_1805660a0(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180cd03e0;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180cd03d8;
  if (DAT_180cd03d8 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x58) {
    FUN_18000f890(uVar2 + 8);
  }
  uVar2 = DAT_180cd03d8;
  if (0xfff < (ulonglong)(((longlong)(DAT_180cd03e8 - DAT_180cd03d8) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_180cd03d8 - 8);
    uVar3 = (DAT_180cd03d8 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_18056612f;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_18056612f:
  *(undefined8 *)(puVar5 + -8) = 0x180566134;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180cd03e8 = 0;
  DAT_180cd03e0 = 0;
  DAT_180cd03d8 = 0;
  return;
}



/* ===== 180566160 FUN_180566160 ===== */

void FUN_180566160(void)

{
  FUN_1804eced0(&DAT_1809e9cd0,0x2c0,10,FUN_1800bfb10);
  return;
}



/* ===== 180566190 FUN_180566190 ===== */

void FUN_180566190(void)

{
  FUN_1804eced0(&DAT_1809eb870,0x30,10,&LAB_1800bfb40);
  return;
}



/* ===== 1805661d0 FUN_1805661d0 ===== */

void FUN_1805661d0(void)

{
  undefined8 uVar1;
  
  FUN_1800cd840(&DAT_180ca0da0);
  uVar1 = DAT_180ca0da0;
  DAT_180ca0da0 = 0;
  thunk_FUN_1803d64e0(uVar1,0x10);
  return;
}



/* ===== 180566200 FUN_180566200 ===== */

void FUN_180566200(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180cd0490 == 0) {
    return;
  }
  lVar2 = DAT_180cd0490;
  if (0xfff < (DAT_180cd04a0 - DAT_180cd0490 & 0xffffffffffffffe0U)) {
    lVar2 = *(longlong *)(DAT_180cd0490 + -8);
    if ((DAT_180cd0490 - lVar2) - 8U < 0x20) goto LAB_180566248;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180566248:
  *(undefined8 *)(puVar4 + -8) = 0x18056624d;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cd04a0 = 0;
  DAT_180cd0498 = 0;
  DAT_180cd0490 = 0;
  return;
}



/* ===== 180566280 FUN_180566280 ===== */

void FUN_180566280(void)

{
  FUN_180023ca0(&DAT_180cd0d98);
  FUN_1800d35d0();
  thunk_FUN_1803d64e0(DAT_180cd0d88,0x218);
  return;
}



/* ===== 1805662e0 FUN_1805662e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805662e0(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (DAT_180ca0dd0 != 0) {
    local_18 = _DAT_180ca0dc8;
    uStack_14 = DAT_180ca0dc8_4;
    iStack_10 = DAT_180ca0dd0;
    uStack_c = _DAT_180ca0dd4;
    iVar1 = FUN_1804eb410(&local_18);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(1);
    }
    _DAT_180ca0dc8 = 0;
    _DAT_180ca0dd0 = 0;
  }
  return;
}



/* ===== 180566330 FUN_180566330 ===== */

void FUN_180566330(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180cd0e30;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180cd0e28;
  if (DAT_180cd0e28 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x68) {
    FUN_1800288b0(uVar2 + 0x48);
    FUN_1800288b0(uVar2 + 0x30);
    FUN_18000f890(uVar2 + 8);
  }
  uVar2 = DAT_180cd0e28;
  if (0xfff < (ulonglong)(((longlong)(DAT_180cd0e38 - DAT_180cd0e28) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_180cd0e28 - 8);
    uVar3 = (DAT_180cd0e28 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_1805663d1;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_1805663d1:
  *(undefined8 *)(puVar5 + -8) = 0x1805663d6;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180cd0e38 = 0;
  DAT_180cd0e30 = 0;
  DAT_180cd0e28 = 0;
  return;
}



/* ===== 180566430 FUN_180566430 ===== */

void FUN_180566430(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180cd0ed0;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180cd0ec8;
  if (DAT_180cd0ec8 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x28) {
    FUN_18000f890(uVar2);
  }
  uVar2 = DAT_180cd0ec8;
  if (0xfff < (ulonglong)(((longlong)(DAT_180cd0ed8 - DAT_180cd0ec8) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_180cd0ec8 - 8);
    uVar3 = (DAT_180cd0ec8 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_1805664c6;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_1805664c6:
  *(undefined8 *)(puVar5 + -8) = 0x1805664cb;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180cd0ed8 = 0;
  DAT_180cd0ed0 = 0;
  DAT_180cd0ec8 = 0;
  return;
}



/* ===== 180566510 FUN_180566510 ===== */

void FUN_180566510(void)

{
  FUN_180023ca0(&DAT_180cd0f28);
  FUN_1800240b0(&DAT_180cd0f18);
  return;
}



/* ===== 180566540 FUN_180566540 ===== */

void FUN_180566540(void)

{
  FUN_180023ca0(&DAT_180cd1038);
  FUN_1800e13f0(&DAT_180cd1028);
  return;
}



/* ===== 180566560 FUN_180566560 ===== */

void FUN_180566560(void)

{
  FUN_1800132b0(&DAT_180ca0df8);
  FUN_180023e20(&DAT_180ca0de8);
  return;
}



/* ===== 180566580 FUN_180566580 ===== */

void FUN_180566580(void)

{
  FUN_180023ca0(&DAT_180cd10d8);
  FUN_1800e5940();
  thunk_FUN_1803d64e0(DAT_180cd10c8,0x38);
  return;
}



/* ===== 1805665d0 FUN_1805665d0 ===== */

void FUN_1805665d0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180cd1080 == 0) {
    return;
  }
  lVar2 = DAT_180cd1080;
  if (0xfff < (DAT_180cd1090 - DAT_180cd1080 & 0xfffffffffffffff0U)) {
    lVar2 = *(longlong *)(DAT_180cd1080 + -8);
    if ((DAT_180cd1080 - lVar2) - 8U < 0x20) goto LAB_180566618;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180566618:
  *(undefined8 *)(puVar4 + -8) = 0x18056661d;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cd1090 = 0;
  DAT_180cd1088 = 0;
  DAT_180cd1080 = 0;
  return;
}



/* ===== 180566650 FUN_180566650 ===== */

void FUN_180566650(void)

{
  FUN_180023ca0(&DAT_180cd1128);
  FUN_1800e86d0(&DAT_180cd1118);
  return;
}



/* ===== 180566670 FUN_180566670 ===== */

void FUN_180566670(void)

{
  undefined8 uVar1;
  
  FUN_1800e8fc0(&DAT_180ca0f10);
  uVar1 = DAT_180ca0f10;
  DAT_180ca0f10 = 0;
  thunk_FUN_1803d64e0(uVar1,0x10);
  return;
}



/* ===== 1805666a0 FUN_1805666a0 ===== */

void FUN_1805666a0(void)

{
  undefined8 uVar1;
  
  FUN_1800e8ec0(&DAT_180ca0e30);
  uVar1 = DAT_180ca0e30;
  DAT_180ca0e30 = 0;
  thunk_FUN_1803d64e0(uVar1,0x10);
  return;
}



/* ===== 1805666f0 FUN_1805666f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805666f0(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (DAT_180ca0e28 != 0) {
    local_18 = _DAT_180ca0e20;
    uStack_14 = DAT_180ca0e20_4;
    iStack_10 = DAT_180ca0e28;
    uStack_c = _DAT_180ca0e2c;
    iVar1 = FUN_1804eb410(&local_18);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(1);
    }
    _DAT_180ca0e20 = 0;
    _DAT_180ca0e28 = 0;
  }
  return;
}



/* ===== 180566740 FUN_180566740 ===== */

void FUN_180566740(void)

{
  FUN_1800132b0(&DAT_180ca0ee0);
  FUN_1800e8810(&DAT_180ca0ed0);
  FUN_1800289e0(&DAT_180ca0ea0);
  FUN_18000f890(&DAT_180ca0e80);
  FUN_1800289e0(&DAT_180ca0e60);
  return;
}



/* ===== 180566790 FUN_180566790 ===== */

void FUN_180566790(void)

{
  undefined8 uVar1;
  
  FUN_1800ee770(&DAT_180ca0f38);
  uVar1 = DAT_180ca0f38;
  DAT_180ca0f38 = 0;
  thunk_FUN_1803d64e0(uVar1,0x10);
  return;
}



/* ===== 1805667c0 FUN_1805667c0 ===== */

void FUN_1805667c0(void)

{
  FUN_180023ca0(&DAT_180cd1218);
  FUN_1800e86d0(&DAT_180cd1208);
  return;
}



/* ===== 1805667e0 FUN_1805667e0 ===== */

void FUN_1805667e0(void)

{
  FUN_18000f890(&DAT_1809ebe80);
  FUN_18000f890(&DAT_1809ebe60);
  return;
}



/* ===== 180566820 FUN_180566820 ===== */

void FUN_180566820(void)

{
  FUN_1800132b0(&DAT_180cd12d8);
  FUN_1801423b0(&DAT_180cd12c8);
  return;
}



/* ===== 180566840 FUN_180566840 ===== */

void FUN_180566840(void)

{
  FUN_1800132b0(&DAT_180cd1298);
  FUN_180142340(&DAT_180cd1288);
  return;
}



/* ===== 180566870 FUN_180566870 ===== */

void FUN_180566870(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180cd1870 == 0) {
    return;
  }
  lVar2 = DAT_180cd1870;
  if (0xfff < (ulonglong)((DAT_180cd1880 - DAT_180cd1870 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_180cd1870 + -8);
    if ((DAT_180cd1870 - lVar2) - 8U < 0x20) goto LAB_1805668c0;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_1805668c0:
  *(undefined8 *)(puVar4 + -8) = 0x1805668c8;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cd1880 = 0;
  DAT_180cd1878 = 0;
  DAT_180cd1870 = 0;
  return;
}



/* ===== 1805668f0 FUN_1805668f0 ===== */

void FUN_1805668f0(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180cd1890;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180cd1888;
  if (DAT_180cd1888 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x30) {
    FUN_18000f890(uVar2);
  }
  uVar2 = DAT_180cd1888;
  if (0xfff < (ulonglong)(((longlong)(DAT_180cd1898 - DAT_180cd1888) >> 4) << 4)) {
    uVar2 = *(ulonglong *)(DAT_180cd1888 - 8);
    uVar3 = (DAT_180cd1888 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_180566982;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_180566982:
  *(undefined8 *)(puVar5 + -8) = 0x180566987;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180cd1898 = 0;
  DAT_180cd1890 = 0;
  DAT_180cd1888 = 0;
  return;
}



/* ===== 1805669b0 FUN_1805669b0 ===== */

void FUN_1805669b0(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180cd1310;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180cd1308;
  if (DAT_180cd1308 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x48) {
    FUN_180068f30(uVar2 + 0x18);
  }
  uVar2 = DAT_180cd1308;
  if (0xfff < (ulonglong)(((longlong)(DAT_180cd1318 - DAT_180cd1308) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_180cd1308 - 8);
    uVar3 = (DAT_180cd1308 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_180566a47;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_180566a47:
  *(undefined8 *)(puVar5 + -8) = 0x180566a4c;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180cd1318 = 0;
  DAT_180cd1310 = 0;
  DAT_180cd1308 = 0;
  return;
}



/* ===== 180566a70 FUN_180566a70 ===== */

void FUN_180566a70(void)

{
  FUN_1804eced0(&DAT_1809ee160,0x28,0xf,&LAB_1800bbde0);
  return;
}



/* ===== 180566ac0 FUN_180566ac0 ===== */

void FUN_180566ac0(void)

{
  FUN_1800132b0(&DAT_180ce1e98);
  FUN_180023a80(&DAT_180ce1e88);
  return;
}



/* ===== 180566ae0 FUN_180566ae0 ===== */

void FUN_180566ae0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180ce2050 == 0) {
    return;
  }
  lVar2 = DAT_180ce2050;
  if (0xfff < (ulonglong)((DAT_180ce2060 - DAT_180ce2050 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_180ce2050 + -8);
    if ((DAT_180ce2050 - lVar2) - 8U < 0x20) goto LAB_180566b30;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180566b30:
  *(undefined8 *)(puVar4 + -8) = 0x180566b38;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180ce2060 = 0;
  DAT_180ce2058 = 0;
  DAT_180ce2050 = 0;
  return;
}



/* ===== 180566b60 FUN_180566b60 ===== */

void FUN_180566b60(void)

{
  FUN_1800132b0(&DAT_180ce1ef8);
  FUN_180023a80(&DAT_180ce1ee8);
  return;
}



/* ===== 180566b80 FUN_180566b80 ===== */

void FUN_180566b80(void)

{
  FUN_1800132b0(&DAT_180ca0f78);
  FUN_180023a80(&DAT_180ca0f68);
  return;
}



/* ===== 180566ba0 FUN_180566ba0 ===== */

void FUN_180566ba0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180ce1ec0 == 0) {
    return;
  }
  lVar2 = DAT_180ce1ec0;
  if (0xfff < (DAT_180ce1ed0 - DAT_180ce1ec0 & 0xfffffffffffffff0U)) {
    lVar2 = *(longlong *)(DAT_180ce1ec0 + -8);
    if ((DAT_180ce1ec0 - lVar2) - 8U < 0x20) goto LAB_180566be8;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180566be8:
  *(undefined8 *)(puVar4 + -8) = 0x180566bed;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180ce1ed0 = 0;
  DAT_180ce1ec8 = 0;
  DAT_180ce1ec0 = 0;
  return;
}



/* ===== 180566c10 FUN_180566c10 ===== */

void FUN_180566c10(void)

{
  FUN_1800132b0(&DAT_180ca0fb8);
  FUN_180023a80(&DAT_180ca0fa8);
  return;
}



/* ===== 180566c30 FUN_180566c30 ===== */

void FUN_180566c30(void)

{
  FUN_180023ca0(&DAT_180ce2088);
  FUN_180023fa0(&DAT_180ce2078);
  return;
}



/* ===== 180566c50 FUN_180566c50 ===== */

void FUN_180566c50(void)

{
  FUN_1800132b0(&DAT_180ce20d8);
  FUN_1801d6d10(&DAT_180ce20c8);
  return;
}



/* ===== 180566cd0 FUN_180566cd0 ===== */

void FUN_180566cd0(void)

{
  FUN_1804eced0(&DAT_1809f09e0,0x20,0x40,thunk_FUN_18000f890);
  return;
}



/* ===== 180566d10 FUN_180566d10 ===== */

void FUN_180566d10(void)

{
  FUN_18000f890(&DAT_1809f12e8);
  FUN_1800bcd20(&DAT_1809f12c8);
  return;
}



/* ===== 180566d30 FUN_180566d30 ===== */

void FUN_180566d30(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180ceb598 == 0) {
    return;
  }
  lVar2 = DAT_180ceb598;
  if (0xfff < (ulonglong)((DAT_180ceb5a8 - DAT_180ceb598 >> 2) * 4)) {
    lVar2 = *(longlong *)(DAT_180ceb598 + -8);
    if ((DAT_180ceb598 - lVar2) - 8U < 0x20) goto LAB_180566d92;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180566d92:
  *(undefined8 *)(puVar4 + -8) = 0x180566d9a;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180ceb5a8 = 0;
  DAT_180ceb5a0 = 0;
  DAT_180ceb598 = 0;
  return;
}



/* ===== 180566dc0 FUN_180566dc0 ===== */

void FUN_180566dc0(void)

{
  FUN_1800132b0(&DAT_180ceb628);
  FUN_180023a80(&DAT_180ceb618);
  return;
}



/* ===== 180566df0 FUN_180566df0 ===== */

void FUN_180566df0(void)

{
  FUN_180023ca0(&DAT_180ceb6b8);
  FUN_18020da80();
  thunk_FUN_1803d64e0(DAT_180ceb6a8,0x90);
  return;
}



/* ===== 180566e50 FUN_180566e50 ===== */

void FUN_180566e50(void)

{
  FUN_1800132b0(&DAT_180ca0ff8);
  FUN_180023a80(&DAT_180ca0fe8);
  return;
}



/* ===== 180566e70 FUN_180566e70 ===== */

void FUN_180566e70(void)

{
  FUN_18000f890(&DAT_1809f19c8);
  FUN_18000f890(&DAT_1809f19a8);
  FUN_18000f890(&DAT_1809f1988);
  return;
}



/* ===== 180566eb0 FUN_180566eb0 ===== */

void FUN_180566eb0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180cec688 == 0) {
    return;
  }
  lVar2 = DAT_180cec688;
  if (0xfff < (DAT_180cec698 - DAT_180cec688 & 0xfffffffffffffff0U)) {
    lVar2 = *(longlong *)(DAT_180cec688 + -8);
    if ((DAT_180cec688 - lVar2) - 8U < 0x20) goto LAB_180566ef8;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180566ef8:
  *(undefined8 *)(puVar4 + -8) = 0x180566efd;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cec698 = 0;
  DAT_180cec690 = 0;
  DAT_180cec688 = 0;
  return;
}



/* ===== 180566f20 FUN_180566f20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180566f20(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (DAT_180ca1028 != 0) {
    local_18 = _DAT_180ca1020;
    uStack_14 = DAT_180ca1020_4;
    iStack_10 = DAT_180ca1028;
    uStack_c = _DAT_180ca102c;
    iVar1 = FUN_1804eb410(&local_18);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(1);
    }
    _DAT_180ca1020 = 0;
    _DAT_180ca1028 = 0;
  }
  return;
}



/* ===== 180566f70 FUN_180566f70 ===== */

void FUN_180566f70(void)

{
  longlong *plVar1;
  
  FUN_18000f890(&DAT_1809f1aa8);
  FUN_18000f890(&DAT_1809f1a88);
  FUN_18000f890(&DAT_1809f1a68);
  FUN_18000f890(&DAT_1809f1a20);
  plVar1 = DAT_1809f1a10;
  if (DAT_1809f1a10 != (longlong *)0x0) {
    DAT_1809f1a10 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



/* ===== 180567030 FUN_180567030 ===== */

void FUN_180567030(void)

{
  FUN_180023ca0(&DAT_180cec9a8);
  FUN_18021bff0(&DAT_180cec998);
  return;
}



/* ===== 180567080 FUN_180567080 ===== */

void FUN_180567080(void)

{
  FUN_1800132b0(&DAT_180ca10b0);
  FUN_1800e8810(&DAT_180ca10a0);
  FUN_1800289e0(&DAT_180ca1070);
  FUN_18000f890(&DAT_180ca1050);
  FUN_1800289e0(&DAT_180ca1030);
  return;
}



/* ===== 1805670e0 FUN_1805670e0 ===== */

void FUN_1805670e0(void)

{
  FUN_180023ca0(&DAT_180cecad8);
  FUN_180224690(&DAT_180cecac8);
  return;
}



/* ===== 180567100 FUN_180567100 ===== */

void FUN_180567100(void)

{
  FUN_180023ca0(&DAT_180cecb38);
  FUN_1802259a0();
  thunk_FUN_1803d64e0(DAT_180cecb28,0x78);
  return;
}



/* ===== 180567150 FUN_180567150 ===== */

void FUN_180567150(void)

{
  FUN_1800132b0(&DAT_180cecb88);
  FUN_180228b30();
  thunk_FUN_1803d64e0(DAT_180cecb78,0x70);
  return;
}



/* ===== 180567190 FUN_180567190 ===== */

void FUN_180567190(void)

{
  FUN_1800132b0(&DAT_180ca10f8);
  FUN_180228300(&DAT_180ca10e8);
  return;
}



/* ===== 1805671b0 FUN_1805671b0 ===== */

void FUN_1805671b0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180cecbc8 == 0) {
    return;
  }
  lVar2 = DAT_180cecbc8;
  if (0xfff < (ulonglong)((DAT_180cecbd8 - DAT_180cecbc8 >> 2) * 4)) {
    lVar2 = *(longlong *)(DAT_180cecbc8 + -8);
    if ((DAT_180cecbc8 - lVar2) - 8U < 0x20) goto LAB_180567212;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180567212:
  *(undefined8 *)(puVar4 + -8) = 0x18056721a;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cecbd8 = 0;
  DAT_180cecbd0 = 0;
  DAT_180cecbc8 = 0;
  return;
}



/* ===== 180567240 FUN_180567240 ===== */

void FUN_180567240(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180cecbe0 == 0) {
    return;
  }
  lVar2 = DAT_180cecbe0;
  if (0xfff < (DAT_180cecbf0 - DAT_180cecbe0 & 0xfffffffffffffff0U)) {
    lVar2 = *(longlong *)(DAT_180cecbe0 + -8);
    if ((DAT_180cecbe0 - lVar2) - 8U < 0x20) goto LAB_180567288;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180567288:
  *(undefined8 *)(puVar4 + -8) = 0x18056728d;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cecbf0 = 0;
  DAT_180cecbe8 = 0;
  DAT_180cecbe0 = 0;
  return;
}



/* ===== 180567320 FUN_180567320 ===== */

void FUN_180567320(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180cf8d38 == 0) {
    return;
  }
  lVar2 = DAT_180cf8d38;
  if (0xfff < (ulonglong)((DAT_180cf8d48 - DAT_180cf8d38 >> 2) * 4)) {
    lVar2 = *(longlong *)(DAT_180cf8d38 + -8);
    if ((DAT_180cf8d38 - lVar2) - 8U < 0x20) goto LAB_180567382;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180567382:
  *(undefined8 *)(puVar4 + -8) = 0x18056738a;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cf8d48 = 0;
  DAT_180cf8d40 = 0;
  DAT_180cf8d38 = 0;
  return;
}



/* ===== 1805673b0 FUN_1805673b0 ===== */

void FUN_1805673b0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180cecc40 == 0) {
    return;
  }
  lVar2 = DAT_180cecc40;
  if (0xfff < (ulonglong)((DAT_180cecc50 - DAT_180cecc40 >> 2) * 4)) {
    lVar2 = *(longlong *)(DAT_180cecc40 + -8);
    if ((DAT_180cecc40 - lVar2) - 8U < 0x20) goto LAB_180567412;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180567412:
  *(undefined8 *)(puVar4 + -8) = 0x18056741a;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cecc50 = 0;
  DAT_180cecc48 = 0;
  DAT_180cecc40 = 0;
  return;
}



/* ===== 180567480 FUN_180567480 ===== */

void FUN_180567480(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180cf9950 == 0) {
    return;
  }
  lVar2 = DAT_180cf9950;
  if (0xfff < (ulonglong)((DAT_180cf9960 - DAT_180cf9950 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_180cf9950 + -8);
    if ((DAT_180cf9950 - lVar2) - 8U < 0x20) goto LAB_1805674d0;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_1805674d0:
  *(undefined8 *)(puVar4 + -8) = 0x1805674d8;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cf9960 = 0;
  DAT_180cf9958 = 0;
  DAT_180cf9950 = 0;
  return;
}



/* ===== 180567520 FUN_180567520 ===== */

void FUN_180567520(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180cf9c08;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180cf9c00;
  if (DAT_180cf9c00 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x48) {
    FUN_1802422f0(uVar2);
  }
  uVar2 = DAT_180cf9c00;
  if (0xfff < (ulonglong)(((longlong)(DAT_180cf9c10 - DAT_180cf9c00) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_180cf9c00 - 8);
    uVar3 = (DAT_180cf9c00 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_1805675b6;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_1805675b6:
  *(undefined8 *)(puVar5 + -8) = 0x1805675bb;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180cf9c10 = 0;
  DAT_180cf9c08 = 0;
  DAT_180cf9c00 = 0;
  return;
}



/* ===== 1805675e0 FUN_1805675e0 ===== */

void FUN_1805675e0(void)

{
  FUN_180023ca0(&DAT_180cf9d38);
  FUN_18025bc50(&DAT_180cf9d28);
  return;
}



/* ===== 180567620 FUN_180567620 ===== */

void FUN_180567620(void)

{
  FUN_18025deb0(&DAT_1809f3408);
  FUN_180042970(&DAT_1809f33e0);
  FUN_1800132b0(&DAT_1809f33b0);
  FUN_180068f30(&DAT_1809f3398);
  FUN_180011610(&DAT_1809f3380);
  return;
}



/* ===== 180567690 FUN_180567690 ===== */

void FUN_180567690(void)

{
  FUN_1800132b0(&DAT_180ca1158);
  FUN_18025b950(&DAT_180ca1148);
  return;
}



/* ===== 1805676c0 FUN_1805676c0 ===== */

void FUN_1805676c0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_180cf9dc0 == 0) {
    return;
  }
  FUN_18025c450(DAT_180cf9dc0,DAT_180cf9dc8);
  puVar4 = auStack_28;
  lVar2 = DAT_180cf9dc0;
  puVar3 = auStack_28;
  if (0xfff < (ulonglong)((DAT_180cf9dd0 - DAT_180cf9dc0 >> 5) * 0x20)) {
    lVar2 = *(longlong *)(DAT_180cf9dc0 + -8);
    if ((DAT_180cf9dc0 - lVar2) - 8U < 0x20) goto LAB_180567730;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180567730:
  *(undefined8 *)(puVar4 + -8) = 0x180567738;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cf9dd0 = 0;
  DAT_180cf9dc8 = 0;
  DAT_180cf9dc0 = 0;
  return;
}



/* ===== 180567760 FUN_180567760 ===== */

void FUN_180567760(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180cf9e70 == 0) {
    return;
  }
  lVar2 = DAT_180cf9e70;
  if (0xfff < (DAT_180cf9e80 - DAT_180cf9e70 & 0xffffffffffffffe0U)) {
    lVar2 = *(longlong *)(DAT_180cf9e70 + -8);
    if ((DAT_180cf9e70 - lVar2) - 8U < 0x20) goto LAB_1805677a8;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_1805677a8:
  *(undefined8 *)(puVar4 + -8) = 0x1805677ad;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cf9e80 = 0;
  DAT_180cf9e78 = 0;
  DAT_180cf9e70 = 0;
  return;
}



/* ===== 1805677d0 FUN_1805677d0 ===== */

void FUN_1805677d0(void)

{
  FUN_1800132b0(&DAT_180ca11d8);
  FUN_18025b950(&DAT_180ca11c8);
  return;
}



/* ===== 1805677f0 FUN_1805677f0 ===== */

void FUN_1805677f0(void)

{
  FUN_1800132b0(&DAT_180ca1198);
  FUN_18025b950(&DAT_180ca1188);
  return;
}



/* ===== 180567830 FUN_180567830 ===== */

void FUN_180567830(void)

{
  FUN_180200b70(&DAT_1809f32a8);
  FUN_180200b70(&DAT_1809f3250);
  return;
}



/* ===== 180567860 FUN_180567860 ===== */

void FUN_180567860(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180cf9f28;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180cf9f20;
  if (DAT_180cf9f20 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x68) {
    FUN_18000f890(uVar2 + 8);
  }
  uVar2 = DAT_180cf9f20;
  if (0xfff < (ulonglong)(((longlong)(DAT_180cf9f30 - DAT_180cf9f20) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_180cf9f20 - 8);
    uVar3 = (DAT_180cf9f20 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_1805678ef;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_1805678ef:
  *(undefined8 *)(puVar5 + -8) = 0x1805678f4;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180cf9f30 = 0;
  DAT_180cf9f28 = 0;
  DAT_180cf9f20 = 0;
  return;
}



/* ===== 180567910 FUN_180567910 ===== */

void FUN_180567910(void)

{
  FUN_1800132b0(&DAT_180ca1218);
  FUN_18025b950(&DAT_180ca1208);
  return;
}



/* ===== 180567930 FUN_180567930 ===== */

void FUN_180567930(void)

{
  FUN_1800132b0(&DAT_180ca1258);
  FUN_180023e20(&DAT_180ca1248);
  return;
}



/* ===== 180567980 FUN_180567980 ===== */

void FUN_180567980(void)

{
  FUN_1800132b0(&DAT_180cfa208);
  FUN_18025b950(&DAT_180cfa1f8);
  return;
}



/* ===== 1805679c0 FUN_1805679c0 ===== */

void FUN_1805679c0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180cfad30 == 0) {
    return;
  }
  lVar2 = DAT_180cfad30;
  if (0xfff < (ulonglong)((DAT_180cfad40 - DAT_180cfad30 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_180cfad30 + -8);
    if ((DAT_180cfad30 - lVar2) - 8U < 0x20) goto LAB_180567a10;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180567a10:
  *(undefined8 *)(puVar4 + -8) = 0x180567a18;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cfad40 = 0;
  DAT_180cfad38 = 0;
  DAT_180cfad30 = 0;
  return;
}



/* ===== 180567a40 FUN_180567a40 ===== */

void FUN_180567a40(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (DAT_180ca12e0 != 0) {
    do {
      FUN_1802753e0(*(undefined8 *)
                     (DAT_180ca12c8 + (DAT_180ca12d0 - 1U & DAT_180ca12d8 + -1 + DAT_180ca12e0) * 8)
                   );
      DAT_180ca12e0 = DAT_180ca12e0 + -1;
    } while (DAT_180ca12e0 != 0);
    DAT_180ca12d8 = 0;
    DAT_180ca12e0 = 0;
  }
  lVar3 = DAT_180ca12c8;
  lVar6 = DAT_180ca12d0;
  if (DAT_180ca12c8 != 0) {
    while (0 < lVar6) {
      lVar1 = *(longlong *)(lVar3 + -8 + lVar6 * 8);
      lVar6 = lVar6 + -1;
      if (lVar1 != 0) {
        thunk_FUN_1803d64e0(lVar1,0xf8);
        lVar3 = DAT_180ca12c8;
      }
    }
    uVar5 = DAT_180ca12d0 * 8;
    lVar6 = lVar3;
    if (0xfff < uVar5) {
      lVar6 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar6) - 8U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_1803d64e0(lVar6,uVar5);
    DAT_180ca12c8 = 0;
    DAT_180ca12d0 = 0;
  }
  uVar4 = DAT_180ca12c0;
  DAT_180ca12c0 = 0;
  thunk_FUN_1803d64e0(uVar4,0x10);
  return;
}



/* ===== 180567b70 FUN_180567b70 ===== */

void FUN_180567b70(void)

{
  FUN_1800132b0(&DAT_180ca1298);
  FUN_180142340(&DAT_180ca1288);
  return;
}



/* ===== 180567ba0 FUN_180567ba0 ===== */

void FUN_180567ba0(void)

{
  FUN_1800132b0(&DAT_180ca1478);
  FUN_180023a80(&DAT_180ca1468);
  return;
}



/* ===== 180567bd0 FUN_180567bd0 ===== */

void FUN_180567bd0(void)

{
  FUN_1800132b0(&DAT_180ca14b8);
  FUN_180023a80(&DAT_180ca14a8);
  return;
}



/* ===== 180567bf0 FUN_180567bf0 ===== */

void FUN_180567bf0(void)

{
  FUN_1800132b0(&DAT_180cfc8e8);
  FUN_180282a60(&DAT_180cfc8d8);
  return;
}



/* ===== 180567c60 FUN_180567c60 ===== */

void FUN_180567c60(void)

{
  FUN_1800132b0(&DAT_180ca1578);
  FUN_180023a80(&DAT_180ca1568);
  return;
}



/* ===== 180567c90 FUN_180567c90 ===== */

void FUN_180567c90(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180cfc948;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180cfc940;
  if (DAT_180cfc940 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0xf8) {
    FUN_1802753e0(uVar2);
  }
  uVar2 = DAT_180cfc940;
  if (0xfff < (ulonglong)(((longlong)(DAT_180cfc950 - DAT_180cfc940) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_180cfc940 - 8);
    uVar3 = (DAT_180cfc940 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_180567d24;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_180567d24:
  *(undefined8 *)(puVar5 + -8) = 0x180567d29;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180cfc950 = 0;
  DAT_180cfc948 = 0;
  DAT_180cfc940 = 0;
  return;
}



/* ===== 180567d50 FUN_180567d50 ===== */

void FUN_180567d50(void)

{
  FUN_1800132b0(&DAT_180ca1538);
  FUN_180023e20(&DAT_180ca1528);
  return;
}



/* ===== 180567d80 FUN_180567d80 ===== */

void FUN_180567d80(void)

{
  FUN_1800132b0(&DAT_180ca13f8);
  FUN_180023e20(&DAT_180ca13e8);
  return;
}



/* ===== 180567da0 FUN_180567da0 ===== */

void FUN_180567da0(void)

{
  FUN_1800132b0(&DAT_180ca14f8);
  FUN_180023e20(&DAT_180ca14e8);
  return;
}



/* ===== 180567dc0 FUN_180567dc0 ===== */

void FUN_180567dc0(void)

{
  FUN_1800132b0(&DAT_180ca15d8);
  FUN_1802828d0(&DAT_180ca15c8);
  return;
}



/* ===== 180567de0 FUN_180567de0 ===== */

void FUN_180567de0(void)

{
  FUN_1800132b0(&DAT_180ca1438);
  FUN_1802828d0(&DAT_180ca1428);
  return;
}



/* ===== 180567e00 FUN_180567e00 ===== */

void FUN_180567e00(void)

{
  FUN_1800132b0(&DAT_180ca13b0);
  FUN_1800e8810(&DAT_180ca13a0);
  FUN_1800289e0(&DAT_180ca1370);
  FUN_18000f890(&DAT_180ca1350);
  FUN_1800289e0(&DAT_180ca1330);
  return;
}



/* ===== 180567e50 FUN_180567e50 ===== */

void FUN_180567e50(void)

{
  FUN_1800132b0(&DAT_180ca1308);
  FUN_1802828d0(&DAT_180ca12f8);
  return;
}



