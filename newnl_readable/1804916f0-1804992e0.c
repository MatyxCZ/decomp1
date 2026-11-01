/* ===== 1804916f0 FUN_1804916f0 ===== */

undefined8 * FUN_1804916f0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = (undefined8 *)(*(code *)*puVar1)(puVar1[1],0,0,param_2);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180484480(param_1);
  }
  puVar1[2] = puVar1[2] + param_2;
  *puVar2 = puVar1[5];
  puVar1[5] = puVar2;
  *(byte *)(puVar2 + 1) = *(byte *)(puVar1 + 4) & 3;
  return puVar2;
}



/* ===== 180491760 FUN_180491760 ===== */

void FUN_180491760(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  lVar2 = (*(code *)*puVar1)(puVar1[1]);
  if ((lVar2 == 0) && (param_4 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_180484480(param_1);
  }
  puVar1[2] = puVar1[2] + (param_4 - param_3);
  return;
}



/* ===== 1804917a0 FUN_1804917a0 ===== */

ulonglong FUN_1804917a0(longlong param_1)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  cVar2 = *(char *)(lVar3 + 9);
  *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) | 4;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar3 + 0x18);
  if (cVar2 == '\v') {
    iVar6 = FUN_180490450(param_1,lVar3);
    if (0 < iVar6) {
      *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) & 0xfb;
    }
    if (*(int *)(lVar3 + 0x34) == 0) {
      return ((ulonglong)*(uint *)(lVar3 + 0x30) + 8) * 8;
    }
    return (ulonglong)(*(int *)(lVar3 + 0x34) + 1) * 0x18 +
           ((ulonglong)*(uint *)(lVar3 + 0x30) + 8) * 8;
  }
  if (cVar2 == '\b') {
    if ((*(byte *)(*(longlong *)(lVar3 + 0x10) + 8) & 3) != 0) {
      FUN_18048fb70(param_1);
    }
    if (*(char *)(lVar3 + 10) == '\0') {
      if ((*(byte *)(*(longlong *)(lVar3 + 0x20) + -0x60) & 3) != 0) {
        FUN_18048fb70(param_1,*(longlong *)(lVar3 + 0x20) + -0x68);
      }
      uVar10 = 0;
      uVar8 = 0;
      bVar5 = 0;
      if (*(char *)(lVar3 + 0xb) != '\0') {
        do {
          if ((*(byte *)(*(longlong *)(lVar3 + 0x28 + uVar8 * 8) + 8) & 3) != 0) {
            FUN_18048fb70(param_1);
          }
          bVar5 = *(byte *)(lVar3 + 0xb);
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < bVar5);
      }
    }
    else {
      uVar10 = 0;
      uVar8 = 0;
      bVar5 = 0;
      if (*(char *)(lVar3 + 0xb) != '\0') {
        uVar11 = 0x7fffffffffff;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0x30 + uVar8 * 8);
          if ((0xfffffff6 < (int)((longlong)uVar4 >> 0x2f) + 4U) &&
             ((*(byte *)((uVar4 & uVar11) + 8) & 3) != 0)) {
            FUN_18048fb70(param_1);
          }
          bVar5 = *(byte *)(lVar3 + 0xb);
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < bVar5);
      }
    }
    return (CONCAT71((int7)((ulonglong)uVar10 >> 8),*(char *)(lVar3 + 10) != '\0') + 5 +
           (ulonglong)bVar5) * 8;
  }
  if (cVar2 != '\a') {
    if (cVar2 == '\x06') {
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_1 + 0x40);
      *(longlong *)(param_1 + 0x40) = lVar3;
      *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) & 0xfb;
      FUN_180490640();
      return (ulonglong)*(uint *)(lVar3 + 0x58) * 8 + 0x60;
    }
    FUN_1804907b0(param_1,lVar3);
    return ((ulonglong)*(uint *)(lVar3 + 0x2c) +
           (ulonglong)*(ushort *)(lVar3 + 10) * 3 +
           (ulonglong)(uint)(*(int *)(lVar3 + 0xc) - *(int *)(lVar3 + 0x28)) * 2) * 4 + 0x78;
  }
  pbVar1 = (byte *)(*(longlong *)(lVar3 + 0x40) + 8);
  *pbVar1 = *pbVar1 & 0xfc;
  for (lVar9 = -(ulonglong)*(uint *)(lVar3 + 0x30); lVar9 < 0; lVar9 = lVar9 + 1) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + lVar9 * 8) + 8) & 3) != 0) {
      FUN_18048fb70(param_1);
    }
  }
  if (*(ushort *)(lVar3 + 0x3e) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x468) + (ulonglong)*(ushort *)(lVar3 + 0x3e) * 8)
    ;
    if ((*(byte *)(lVar9 + 8) & 3) != 0) {
      *(byte *)(lVar9 + 8) = *(byte *)(lVar9 + 8) & 0xfc;
      *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(param_1 + 0x38);
      *(longlong *)(param_1 + 0x38) = lVar9;
    }
  }
  return (ulonglong)*(uint *)(lVar3 + 0x38);
}



/* ===== 1804919b0 FUN_1804919b0 ===== */

uint FUN_1804919b0(ulonglong param_1,uint param_2,int *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  uVar1 = (uint)(param_1 >> 0x20) ^ param_2;
  uVar2 = uVar1 << 4;
  uVar2 = (uVar1 & 0xfffffff) >> 0x14 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
          (uVar1 >> 0x1c | uVar2) << 0x18;
  if (0xc < param_4) {
    piVar5 = (int *)(((ulonglong)param_4 - 0xc) + (longlong)param_3);
    piVar6 = piVar5;
    do {
      piVar4 = param_3;
      uVar2 = piVar6[1] + uVar2;
      param_2 = (uVar2 ^ piVar6[2] + param_2) - (uVar2 >> 0x12 | uVar2 * 0x4000);
      uVar1 = (*piVar6 + (int)param_1 ^ param_2) - (param_2 >> 0x15 | param_2 * 0x800);
      uVar2 = (uVar1 ^ uVar2) - (uVar1 >> 7 | uVar1 * 0x2000000);
      param_1 = (ulonglong)uVar1;
      param_3 = piVar4 + 3;
      piVar6 = piVar4;
    } while (piVar4 < piVar5);
    uVar3 = (uVar2 ^ param_2) - (uVar2 >> 0x10 | uVar2 * 0x10000);
    uVar1 = (uVar1 ^ uVar3) - (uVar3 >> 0x1c | uVar3 * 0x10);
    uVar2 = (uVar2 ^ uVar1) - (uVar1 >> 0x12 | uVar1 * 0x4000);
  }
  return uVar2;
}



/* ===== 180491a70 FUN_180491a70 ===== */

int FUN_180491a70(uint param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 < 4) {
    bVar1 = *(byte *)((ulonglong)(param_3 >> 1) + (longlong)param_2);
    uVar4 = (uint)bVar1;
    uVar3 = (uint)(byte)*param_2;
    uVar2 = ((uint)(bVar1 ^ *(byte *)(((ulonglong)param_3 - 1) + (longlong)param_2)) ^
            param_1 ^ param_3) + (uint)bVar1 * -0x4000;
  }
  else {
    uVar4 = *(uint *)(((ulonglong)(param_3 >> 1) - 2) + (longlong)param_2);
    uVar3 = *param_2;
    uVar2 = (uVar4 ^ *(uint *)(((ulonglong)param_3 - 4) + (longlong)param_2) ^ param_1 ^ param_3) -
            (uVar4 >> 0x12 | uVar4 << 0xe);
    uVar4 = *(int *)(((ulonglong)(param_3 >> 2) - 1) + (longlong)param_2) + uVar4;
  }
  uVar3 = (uVar3 ^ uVar2) - (uVar2 >> 0x15 | uVar2 << 0xb);
  uVar4 = (uVar4 ^ uVar3) - (uVar3 >> 7 | uVar3 * 0x2000000);
  return (uVar4 ^ uVar2) - (uVar4 >> 0x10 | uVar4 * 0x10000);
}



/* ===== 180491b00 FUN_180491b00 ===== */

int FUN_180491b00(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  
  lVar4 = param_2;
  if (*(uint *)(param_1 + 0x14) <= *(uint *)(param_2 + 0x14)) {
    lVar4 = param_1;
  }
  uVar7 = *(uint *)(lVar4 + 0x14);
  uVar5 = 0;
  if (uVar7 != 0) {
    do {
      uVar2 = *(uint *)(param_1 + 0x18 + uVar5);
      uVar1 = *(uint *)(param_2 + 0x18 + uVar5);
      if (uVar2 != uVar1) {
        iVar3 = (int)uVar5 - uVar7;
        uVar7 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        uVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        if (-4 < iVar3) {
          bVar6 = (char)iVar3 * '\b' + 0x20;
          uVar7 = uVar7 >> (bVar6 & 0x1f);
          uVar2 = uVar2 >> (bVar6 & 0x1f);
          if (uVar7 == uVar2) break;
        }
        iVar3 = 1;
        if (uVar7 < uVar2) {
          iVar3 = -1;
        }
        return iVar3;
      }
      uVar2 = (int)uVar5 + 4;
      uVar5 = (ulonglong)uVar2;
    } while (uVar2 < uVar7);
  }
  return *(uint *)(param_1 + 0x14) - *(uint *)(param_2 + 0x14);
}



/* ===== 180491b90 FUN_180491b90 ===== */

void * FUN_180491b90(void *param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  void *_Buf1;
  undefined1 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  if (param_4 <= param_3) {
    if (param_4 == 0) {
      return param_1;
    }
    uVar1 = *param_2;
    iVar4 = param_3 - (param_4 - 1);
    while ((iVar4 != 0 &&
           (pvVar3 = (void *)FUN_180540ca0(param_1,uVar1,iVar4), pvVar3 != (void *)0x0))) {
      _Buf1 = (void *)((longlong)pvVar3 + 1);
      iVar2 = memcmp(_Buf1,param_2 + 1,(ulonglong)(param_4 - 1));
      if (iVar2 == 0) {
        return pvVar3;
      }
      iVar4 = iVar4 + ((int)param_1 - (int)_Buf1);
      param_1 = _Buf1;
    }
  }
  return (void *)0x0;
}



/* ===== 180491c40 FUN_180491c40 ===== */

void FUN_180491c40(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *(int *)((longlong)param_1 + 0xa4) = *(int *)((longlong)param_1 + 0xa4) + -1;
  lVar1 = ((ulonglong)(*(int *)(param_2 + 0x14) + 4) & 0xfffffffc) + 0x18;
  param_1[2] = param_1[2] - lVar1;
                    /* WARNING: Could not recover jumptable at 0x000180491c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_1[1],param_2,lVar1,0);
  return;
}



/* ===== 180491c70 FUN_180491c70 ===== */

undefined8 FUN_180491c70(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  pbVar3 = (byte *)(param_1 + 0x18);
  while( true ) {
    if ((byte *)((ulonglong)uVar1 + 0x18 + param_1) <= pbVar3) {
      return 0;
    }
    if ((((&DAT_18056fcb1)[*pbVar3] & 4) != 0) &&
       (lVar2 = FUN_1804ef420("^$*+?.([%-",*pbVar3), lVar2 != 0)) break;
    pbVar3 = pbVar3 + 1;
  }
  return 1;
}



/* ===== 180491cf0 FUN_180491cf0 ===== */

void FUN_180491cf0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar2 = FUN_1804b67c0(lVar1 + 400);
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  FUN_1804920c0(param_1,0xff);
  return;
}



/* ===== 180491d30 FUN_180491d30 ===== */

ulonglong * FUN_180491d30(longlong param_1,void *param_2,ulonglong param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  bool local_res8;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (0x7ffffefe < param_3 - 1) {
    if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180484550(param_1,0x38);
    }
    return (ulonglong *)(lVar4 + 0x78);
  }
  uVar6 = FUN_180491a70(*(undefined8 *)(lVar4 + 0xb0));
  uVar3 = *(uint *)(lVar4 + 0xa0);
  uVar12 = 0;
  puVar10 = *(ulonglong **)(*(longlong *)(lVar4 + 0x98) + (ulonglong)(uVar3 & uVar6) * 8);
  bVar13 = ((ulonglong)puVar10 & 1) == 0;
  iVar11 = (int)param_3;
  if (!bVar13) {
    uVar6 = FUN_1804919b0(*(undefined8 *)(lVar4 + 0xb0),uVar6,param_2,param_3 & 0xffffffff);
    puVar10 = (ulonglong *)
              (*(ulonglong *)(*(longlong *)(lVar4 + 0x98) + (ulonglong)(uVar3 & uVar6) * 8) &
              0xfffffffffffffffe);
  }
  local_res8 = !bVar13;
  if (puVar10 != (ulonglong *)0x0) {
    do {
      if (((uint)puVar10[2] == uVar6) && (*(int *)((longlong)puVar10 + 0x14) == iVar11)) {
        iVar7 = memcmp(param_2,puVar10 + 3,param_3 & 0xffffffff);
        if (iVar7 == 0) {
          if ((~*(byte *)(lVar4 + 0x20) & (byte)puVar10[1] & 3) != 0) {
            *(byte *)(puVar10 + 1) = (byte)puVar10[1] ^ 3;
          }
          return puVar10;
        }
        uVar12 = uVar12 + 1;
      }
      puVar10 = (ulonglong *)*puVar10;
      uVar12 = uVar12 + 1;
    } while (puVar10 != (ulonglong *)0x0);
    if ((0x20 < uVar12) && (bVar13)) {
      puVar10 = (ulonglong *)FUN_180491f80(param_1,uVar6,param_2,param_3 & 0xffffffff);
      return puVar10;
    }
  }
  puVar10 = (ulonglong *)FUN_180491760(param_1,0,0,((ulonglong)(iVar11 + 4) & 0xfffffffc) + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x10);
  bVar1 = *(byte *)(lVar4 + 0x20);
  *(undefined1 *)((longlong)puVar10 + 9) = 4;
  *(byte *)(puVar10 + 1) = bVar1 & 3;
  *(int *)((longlong)puVar10 + 0x14) = iVar11;
  *(uint *)(puVar10 + 2) = uVar6;
  cVar2 = *(char *)(lVar4 + 0xac);
  *(char *)(lVar4 + 0xac) = cVar2 + -1;
  if (cVar2 == '\0') {
    uVar8 = FUN_1804b67c0(lVar4 + 400);
    *(int *)(lVar4 + 0xa8) = (int)uVar8;
    *(char *)(lVar4 + 0xac) = (char)((ulonglong)uVar8 >> 0x38);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = *(undefined4 *)(lVar4 + 0xa8);
  *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
  *(bool *)((longlong)puVar10 + 0xb) = local_res8;
  *(undefined1 *)((longlong)puVar10 + 10) = 0;
  *(undefined4 *)((param_3 & 0xfffffffc) + 0x18 + (longlong)puVar10) = 0;
  FUN_180540530(puVar10 + 3,param_2,param_3 & 0xffffffff);
  uVar9 = (ulonglong)(*(uint *)(lVar4 + 0xa0) & uVar6);
  uVar5 = *(ulonglong *)(*(longlong *)(lVar4 + 0x98) + uVar9 * 8);
  *puVar10 = uVar5 & 0xfffffffffffffffe;
  *(ulonglong *)(*(longlong *)(lVar4 + 0x98) + uVar9 * 8) =
       (ulonglong)((uint)uVar5 & 1) | (ulonglong)puVar10;
  uVar3 = *(uint *)(lVar4 + 0xa4);
  *(uint *)(lVar4 + 0xa4) = uVar3 + 1;
  if (*(uint *)(lVar4 + 0xa0) < uVar3) {
    FUN_1804920c0(param_1,*(uint *)(lVar4 + 0xa0) * 2 | 1);
  }
  return puVar10;
}



/* ===== 180491f80 FUN_180491f80 ===== */

void FUN_180491f80(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (*(char *)((longlong)puVar2 + 0x21) == '\x03') {
    bVar8 = *(byte *)(puVar2 + 4) ^ 3;
  }
  else {
    bVar8 = 0;
  }
  uVar1 = *(uint *)(puVar2 + 0x14);
  lVar3 = puVar2[0x13];
  uVar7 = (ulonglong)(uVar1 & param_2);
  puVar4 = *(ulonglong **)(lVar3 + uVar7 * 8);
  *(undefined8 *)(lVar3 + uVar7 * 8) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xad) = 1;
joined_r0x000180491fdd:
  do {
    if (puVar4 == (ulonglong *)0x0) {
      FUN_180491d30(param_1,param_3,param_4);
      return;
    }
    puVar5 = (ulonglong *)*puVar4;
    if (bVar8 != 0) {
      if ((bVar8 & ((byte)puVar4[1] ^ 3)) == 0) {
        *(int *)((longlong)puVar2 + 0xa4) = *(int *)((longlong)puVar2 + 0xa4) + -1;
        lVar9 = ((ulonglong)(*(int *)((longlong)puVar4 + 0x14) + 4) & 0xfffffffc) + 0x18;
        puVar2[2] = puVar2[2] - lVar9;
        (*(code *)*puVar2)(puVar2[1],puVar4,lVar9,0);
        puVar4 = puVar5;
        goto joined_r0x000180491fdd;
      }
      *(byte *)(puVar4 + 1) = *(byte *)(puVar2 + 4) & 3 | (byte)puVar4[1] & 0xf8;
    }
    uVar6 = (uint)puVar4[2];
    if (*(char *)((longlong)puVar4 + 0xb) == '\0') {
      uVar6 = FUN_1804919b0(puVar2[0x16],uVar6,puVar4 + 3);
      *(uint *)(puVar4 + 2) = uVar6;
      *(undefined1 *)((longlong)puVar4 + 0xb) = 1;
    }
    uVar6 = uVar6 & uVar1;
    uVar7 = *(ulonglong *)(lVar3 + (ulonglong)uVar6 * 8);
    *puVar4 = uVar7 & 0xfffffffffffffffe;
    *(ulonglong *)(lVar3 + (ulonglong)uVar6 * 8) = (ulonglong)((uint)uVar7 & 1) | (ulonglong)puVar4;
    puVar4 = puVar5;
  } while( true );
}



/* ===== 1804920c0 FUN_1804920c0 ===== */

void FUN_1804920c0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if ((*(char *)((longlong)puVar3 + 0x21) != '\x03') && (param_2 < 0x3ffffff)) {
    lVar2 = (ulonglong)(param_2 + 1) * 8;
    lVar4 = puVar3[0x13];
    lVar9 = FUN_180491760(param_1,0,0,lVar2);
    FUN_180540170(lVar9,0,lVar2);
    if (*(char *)((longlong)puVar3 + 0xad) != '\0') {
      bVar16 = 0;
      for (uVar12 = *(uint *)(puVar3 + 0x14); uVar7 = param_2, uVar12 != 0xffffffff;
          uVar12 = uVar12 - 1) {
        for (puVar11 = (undefined8 *)
                       (*(ulonglong *)(lVar4 + (ulonglong)uVar12 * 8) & 0xfffffffffffffffe);
            puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)*puVar11) {
          if (*(char *)((longlong)puVar11 + 0xb) == '\0') {
            uVar7 = *(uint *)(puVar11 + 2);
          }
          else {
            uVar7 = FUN_180491a70(puVar3[0x16],puVar11 + 3,*(undefined4 *)((longlong)puVar11 + 0x14)
                                 );
          }
          plVar1 = (longlong *)(lVar9 + (ulonglong)(uVar7 & param_2) * 8);
          *plVar1 = *plVar1 + 1;
        }
      }
      do {
        uVar10 = *(ulonglong *)(lVar9 + (ulonglong)uVar7 * 8);
        bVar16 = bVar16 | 0x20 < uVar10;
        uVar12 = uVar7 - 1;
        *(ulonglong *)(lVar9 + (ulonglong)uVar7 * 8) = (ulonglong)(0x20 < uVar10);
        uVar7 = uVar12;
      } while (uVar12 != 0xffffffff);
      *(byte *)((longlong)puVar3 + 0xad) = bVar16;
    }
    for (uVar12 = *(uint *)(puVar3 + 0x14); uVar12 != 0xffffffff; uVar12 = uVar12 - 1) {
      puVar6 = (ulonglong *)(*(ulonglong *)(lVar4 + (ulonglong)uVar12 * 8) & 0xfffffffffffffffe);
      while (puVar6 != (ulonglong *)0x0) {
        puVar5 = (ulonglong *)*puVar6;
        uVar7 = (uint)puVar6[2];
        if (*(char *)((longlong)puVar6 + 0xb) == '\0') {
          uVar10 = *(ulonglong *)(lVar9 + (ulonglong)(uVar7 & param_2) * 8);
          uVar8 = uVar7;
          if ((uVar10 & 1) != 0) {
            uVar8 = FUN_1804919b0(puVar3[0x16],uVar7,puVar6 + 3,
                                  *(undefined4 *)((longlong)puVar6 + 0x14));
            *(uint *)(puVar6 + 2) = uVar8;
            *(undefined1 *)((longlong)puVar6 + 0xb) = 1;
            uVar10 = *(ulonglong *)(lVar9 + (ulonglong)(uVar8 & param_2) * 8);
          }
        }
        else {
          uVar8 = *(uint *)((longlong)puVar6 + 0x14);
          if (uVar8 < 4) {
            bVar16 = *(byte *)((longlong)puVar6 + (ulonglong)(uVar8 >> 1) + 0x18);
            uVar15 = (uint)bVar16;
            uVar13 = (uint)(byte)puVar6[3];
            uVar14 = ((uint)(bVar16 ^ *(byte *)((longlong)puVar6 + (ulonglong)uVar8 + 0x17)) ^
                     uVar8 ^ *(uint *)(puVar3 + 0x16)) + (uint)bVar16 * -0x4000;
          }
          else {
            uVar15 = *(uint *)((longlong)puVar6 + (ulonglong)(uVar8 >> 1) + 0x16);
            uVar13 = (uint)puVar6[3];
            uVar14 = (uVar15 ^ *(uint *)((longlong)puVar6 + (ulonglong)uVar8 + 0x14) ^
                     uVar8 ^ *(uint *)(puVar3 + 0x16)) - (uVar15 >> 0x12 | uVar15 << 0xe);
            uVar15 = *(int *)((longlong)puVar6 + (ulonglong)(uVar8 >> 2) + 0x17) + uVar15;
          }
          uVar8 = (uVar13 ^ uVar14) - (uVar14 >> 0x15 | uVar14 << 0xb);
          uVar8 = (uVar15 ^ uVar8) - (uVar8 >> 7 | uVar8 * 0x2000000);
          uVar8 = (uVar8 ^ uVar14) - (uVar8 >> 0x10 | uVar8 * 0x10000);
          uVar10 = *(ulonglong *)(lVar9 + (ulonglong)(uVar8 & param_2) * 8);
          if ((uVar10 & 1) == 0) {
            *(uint *)(puVar6 + 2) = uVar8;
            *(undefined1 *)((longlong)puVar6 + 0xb) = 0;
          }
          else {
            uVar10 = *(ulonglong *)(lVar9 + (ulonglong)(uVar7 & param_2) * 8);
            uVar8 = uVar7;
          }
        }
        *puVar6 = uVar10 & 0xfffffffffffffffe;
        *(ulonglong *)(lVar9 + (ulonglong)(param_2 & uVar8) * 8) =
             (ulonglong)((uint)uVar10 & 1) | (ulonglong)puVar6;
        puVar6 = puVar5;
      }
    }
    puVar3[2] = puVar3[2] + (ulonglong)(*(int *)(puVar3 + 0x14) + 1) * -8;
    (*(code *)*puVar3)(puVar3[1],puVar3[0x13],(ulonglong)(*(int *)(puVar3 + 0x14) + 1) * 8,0);
    puVar3[0x13] = lVar9;
    *(uint *)(puVar3 + 0x14) = param_2;
  }
  return;
}



/* ===== 180492370 FUN_180492370 ===== */

longlong FUN_180492370(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  uVar2 = (uint)(uVar1 >> 0x20);
  uVar3 = (int)uVar2 >> 0xf;
  if (uVar3 == 0xfffffffb) {
    return *(longlong *)(param_1 + 0x28) +
           (ulonglong)(*(uint *)((uVar1 & 0x7fffffffffff) + 0xc) & *(uint *)(param_1 + 0x34)) * 0x18
    ;
  }
  if (uVar3 < 0xfffffff2) {
    uVar4 = uVar2 >> 0x11 & 0x3fff | uVar2 << 0xf;
    uVar3 = (uVar2 * 2 ^ (uint)uVar1) - uVar4;
    return *(longlong *)(param_1 + 0x28) +
           (ulonglong)
           ((((uVar2 & 0x1ffff) >> 0xc | uVar4 << 5) ^ uVar3) - (uVar3 >> 0x13 | uVar3 * 0x2000) &
           *(uint *)(param_1 + 0x34)) * 0x18;
  }
  if (uVar3 + 3 < 2) {
    return *(longlong *)(param_1 + 0x28) +
           (ulonglong)(-uVar3 - 2 & *(uint *)(param_1 + 0x34)) * 0x18;
  }
  uVar3 = ((uint)uVar1 ^ uVar2) - (uVar2 >> 0x12 | uVar2 << 0xe);
  return *(longlong *)(param_1 + 0x28) +
         (ulonglong)
         (((uVar2 >> 0xd | uVar2 << 0x13) ^ uVar3) - (uVar3 >> 0x13 | uVar3 * 0x2000) &
         *(uint *)(param_1 + 0x34)) * 0x18;
}



/* ===== 180492440 FUN_180492440 ===== */

void FUN_180492440(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    FUN_180540170(*(undefined8 *)(param_1 + 0x10),0xffffffffffffffff,
                  (ulonglong)*(uint *)(param_1 + 0x30) << 3);
  }
  uVar1 = *(uint *)(param_1 + 0x34);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    uVar3 = 0;
    *(ulonglong *)(param_1 + 0x38) = lVar2 + (ulonglong)(uVar1 + 1) * 0x18;
    do {
      uVar4 = (ulonglong)uVar3;
      uVar3 = uVar3 + 1;
      *(undefined8 *)(lVar2 + 0x10 + uVar4 * 0x18) = 0;
      *(undefined8 *)(lVar2 + 8 + uVar4 * 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(lVar2 + uVar4 * 0x18) = 0xffffffffffffffff;
    } while (uVar3 <= uVar1);
  }
  return;
}



/* ===== 1804924c0 FUN_1804924c0 ===== */

longlong FUN_1804924c0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar1 = *(uint *)(param_2 + 0x34);
  if ((uVar1 != 0) && (iVar6 = 0x1f, uVar1 != 0)) {
    for (; uVar1 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  lVar7 = FUN_180493480(param_1,*(undefined4 *)(param_2 + 0x30));
  *(undefined1 *)(lVar7 + 10) = 0;
  uVar1 = *(uint *)(param_2 + 0x30);
  if (uVar1 != 0) {
    uVar11 = *(ulonglong *)(lVar7 + 0x10);
    uVar2 = *(ulonglong *)(param_2 + 0x10);
    if (uVar1 < 0x40) {
      uVar8 = 0;
      if ((uVar1 < 2) ||
         ((uVar11 <= uVar2 + (ulonglong)(uVar1 - 1) * 8 &&
          (uVar2 <= uVar11 + (ulonglong)(uVar1 - 1) * 8)))) {
        do {
          *(undefined8 *)(uVar11 + uVar8 * 8) = *(undefined8 *)(uVar2 + uVar8 * 8);
          uVar10 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar10;
        } while (uVar10 < uVar1);
      }
      else {
        FUN_180540530(uVar11,uVar2,(ulonglong)uVar1 << 3);
      }
    }
    else {
      FUN_180540530(uVar11,uVar2,(ulonglong)uVar1 << 3);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x34);
  if (uVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x28);
    lVar4 = *(longlong *)(lVar7 + 0x28);
    *(longlong *)(lVar7 + 0x38) = *(longlong *)(param_2 + 0x38) + (lVar4 - lVar3);
    uVar11 = 0;
    do {
      uVar5 = *(undefined8 *)(lVar3 + uVar11 * 0x18);
      lVar9 = *(longlong *)(lVar3 + 0x10 + uVar11 * 0x18);
      *(undefined8 *)(lVar4 + uVar11 * 0x18) = uVar5;
      *(undefined8 *)(lVar4 + 8 + uVar11 * 0x18) = *(undefined8 *)(lVar3 + 8 + uVar11 * 0x18);
      if ((int)((longlong)uVar5 >> 0x2f) == -0xc) {
        *(undefined8 *)(lVar4 + uVar11 * 0x18) = 0xffffffffffffffff;
      }
      if (lVar9 != 0) {
        lVar9 = lVar9 + (lVar4 - lVar3);
      }
      uVar10 = (int)uVar11 + 1;
      *(longlong *)(lVar4 + 0x10 + uVar11 * 0x18) = lVar9;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 <= uVar1);
  }
  return lVar7;
}



/* ===== 1804925f0 FUN_1804925f0 ===== */

void FUN_1804925f0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_2 + 0x34) != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = (ulonglong)(*(int *)(param_2 + 0x34) + 1);
    param_1[2] = param_1[2] + uVar4 * -0x18;
    (*(code *)*param_1)(param_1[1],uVar3,uVar4 * 0x18,0);
  }
  uVar2 = *(uint *)(param_2 + 0x30);
  if ((uVar2 != 0) && (*(char *)(param_2 + 0xb) < '\x01')) {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    param_1[2] = param_1[2] + (ulonglong)uVar2 * -8;
    (*(code *)*param_1)(param_1[1],uVar3,(ulonglong)uVar2 * 8,0);
  }
  if (*(byte *)(param_2 + 0xb) == 0) {
    param_1[2] = param_1[2] + -0x40;
                    /* WARNING: Could not recover jumptable at 0x00018049269b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_1[1],param_2,0x40,0);
    return;
  }
  lVar1 = (ulonglong)(*(byte *)(param_2 + 0xb) & 0x7f) * 8 + 0x40;
  param_1[2] = param_1[2] - lVar1;
                    /* WARNING: Could not recover jumptable at 0x000180492680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_1[1],param_2,lVar1,0);
  return;
}



/* ===== 1804926a0 FUN_1804926a0 ===== */

longlong FUN_1804926a0(longlong param_1,longlong param_2,ulonglong *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = *param_3;
  uVar1 = (uint)((longlong)uVar3 >> 0x2f);
  if (uVar1 == 0xfffffffb) {
    lVar4 = *(longlong *)(param_2 + 0x28) +
            (ulonglong)(*(uint *)((uVar3 & 0x7fffffffffff) + 0xc) & *(uint *)(param_2 + 0x34)) *
            0x18;
    do {
      if (((int)((longlong)*(ulonglong *)(lVar4 + 8) >> 0x2f) == -5) &&
         ((*(ulonglong *)(lVar4 + 8) & 0x7fffffffffff) == (uVar3 & 0x7fffffffffff))) {
        return lVar4;
      }
      lVar4 = *(longlong *)(lVar4 + 0x10);
    } while (lVar4 != 0);
  }
  else {
    if (uVar1 < 0xfffffff2) {
      uVar3 = FUN_1800052ed(*param_3);
      if (-1 < (longlong)uVar3) {
        if ((uint)uVar3 < *(uint *)(param_2 + 0x30)) {
          lVar4 = *(longlong *)(param_2 + 0x10) + (longlong)(int)(uint)uVar3 * 8;
        }
        else {
          lVar4 = FUN_1804927e0(param_2,uVar3 & 0xffffffff);
        }
        if (lVar4 != 0) {
          return lVar4;
        }
        goto LAB_180492711;
      }
    }
    else if (uVar3 == 0xffffffffffffffff) goto LAB_180492711;
    lVar4 = FUN_180492370(param_2,param_3);
    do {
      iVar2 = FUN_18048f530(lVar4 + 8,param_3);
      if (iVar2 != 0) {
        return lVar4;
      }
      lVar4 = *(longlong *)(lVar4 + 0x10);
    } while (lVar4 != 0);
  }
LAB_180492711:
  return *(longlong *)(param_1 + 0x10) + 0xf8;
}



/* ===== 1804927e0 FUN_1804927e0 ===== */

longlong FUN_1804927e0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  
  dVar4 = (double)param_2;
  uVar1 = (uint)((ulonglong)dVar4 >> 0x20);
  uVar2 = (uVar1 * 2 ^ SUB84(dVar4,0)) - ((uVar1 & 0x7fffffff) >> 0x11 | uVar1 << 0xf);
  lVar3 = *(longlong *)(param_1 + 0x28) +
          (ulonglong)
          ((((uVar1 & 0x7fffffff) >> 0xc | uVar1 << 0x14) ^ uVar2) -
           (uVar2 >> 0x13 | uVar2 * 0x2000) & *(uint *)(param_1 + 0x34)) * 0x18;
  while ((0xfffffff1 < (uint)((longlong)*(undefined8 *)(lVar3 + 8) >> 0x2f) ||
         (*(double *)(lVar3 + 8) != dVar4))) {
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return 0;
    }
  }
  return lVar3;
}



/* ===== 180492860 FUN_180492860 ===== */

void FUN_180492860(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28) +
          (ulonglong)(*(uint *)(param_1 + 0x34) & *(uint *)(param_2 + 0xc)) * 0x18;
  while (((int)((longlong)*(ulonglong *)(lVar1 + 8) >> 0x2f) != -5 ||
         ((*(ulonglong *)(lVar1 + 8) & 0x7fffffffffff) != param_2))) {
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      return;
    }
  }
  return;
}



/* ===== 1804928b0 FUN_1804928b0 ===== */

int FUN_1804928b0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if ((uint)(lVar3 >> 0x2f) < 0xfffffff2) {
    uVar1 = FUN_1800052ed(*param_2);
    if (uVar1 < *(uint *)(param_1 + 0x30)) {
      return uVar1 + 1;
    }
  }
  if (lVar3 == -1) {
    return 0;
  }
  lVar3 = FUN_180492370(param_1,param_2);
  do {
    iVar2 = FUN_18048f530(lVar3 + 8,param_2);
    if (iVar2 != 0) {
      return (int)(((lVar3 - *(longlong *)(param_1 + 0x28)) + 0x18) / 0x18) +
             *(int *)(param_1 + 0x30);
    }
    lVar3 = *(longlong *)(lVar3 + 0x10);
  } while (lVar3 != 0);
  if (*(int *)((longlong)param_2 + 4) == -0x18001) {
    return (int)*param_2;
  }
  return -1;
}



/* ===== 1804929b0 FUN_1804929b0 ===== */

ulonglong FUN_1804929b0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = ((ulonglong)*(uint *)(param_1 + 0x30) - 1) + (ulonglong)(*(uint *)(param_1 + 0x30) == 0);
  if ((uVar5 == 0) || (*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5 * 8) != -1)) {
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar2 = FUN_1804937c0();
      uVar5 = (ulonglong)uVar2;
    }
    return uVar5 & 0xffffffff;
  }
  uVar1 = 0;
  uVar4 = uVar5;
  while (1 < uVar4) {
    uVar3 = uVar1 + uVar5 >> 1;
    if (*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8) == -1) {
      uVar5 = uVar3;
      uVar3 = uVar1;
    }
    uVar1 = uVar3;
    uVar4 = uVar5 - uVar3;
  }
  return uVar1 & 0xffffffff;
}



/* ===== 180492ab0 FUN_180492ab0 ===== */

longlong FUN_180492ab0(void)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = FUN_180493480();
  if (*(uint *)(lVar4 + 0x30) != 0) {
    FUN_180540170(*(undefined8 *)(lVar4 + 0x10),0xffffffffffffffff,
                  (ulonglong)*(uint *)(lVar4 + 0x30) << 3);
  }
  uVar1 = *(uint *)(lVar4 + 0x34);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(lVar4 + 0x28);
    uVar3 = 0;
    do {
      uVar5 = (ulonglong)uVar3;
      uVar3 = uVar3 + 1;
      *(undefined8 *)(lVar2 + 0x10 + uVar5 * 0x18) = 0;
      *(undefined8 *)(lVar2 + 8 + uVar5 * 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(lVar2 + uVar5 * 0x18) = 0xffffffffffffffff;
    } while (uVar3 <= uVar1);
  }
  return lVar4;
}



/* ===== 180492b20 FUN_180492b20 ===== */

longlong FUN_180492b20(undefined8 param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = FUN_180493480(param_1,param_2 & 0xffffff,param_2 >> 0x18);
  if (*(uint *)(lVar4 + 0x30) != 0) {
    FUN_180540170(*(undefined8 *)(lVar4 + 0x10),0xffffffffffffffff,
                  (ulonglong)*(uint *)(lVar4 + 0x30) << 3);
  }
  uVar1 = *(uint *)(lVar4 + 0x34);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(lVar4 + 0x28);
    uVar3 = 0;
    do {
      uVar5 = (ulonglong)uVar3;
      uVar3 = uVar3 + 1;
      *(undefined8 *)(lVar2 + 0x10 + uVar5 * 0x18) = 0;
      *(undefined8 *)(lVar2 + 8 + uVar5 * 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(lVar2 + uVar5 * 0x18) = 0xffffffffffffffff;
    } while (uVar3 <= uVar1);
  }
  return lVar4;
}



/* ===== 180492ba0 FUN_180492ba0 ===== */

longlong FUN_180492ba0(undefined8 param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar7 = (int)param_3;
  if (iVar7 == 0) {
    param_3 = 0;
  }
  else if (iVar7 != 1) {
    iVar3 = 0x1f;
    if (iVar7 - 1U != 0) {
      for (; iVar7 - 1U >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    param_3 = (ulonglong)(iVar3 + 1);
  }
  iVar7 = param_2 + 1;
  if (param_2 == 0) {
    iVar7 = 0;
  }
  lVar5 = FUN_180493480(param_1,iVar7,param_3);
  if (*(uint *)(lVar5 + 0x30) != 0) {
    FUN_180540170(*(undefined8 *)(lVar5 + 0x10),0xffffffffffffffff,
                  (ulonglong)*(uint *)(lVar5 + 0x30) << 3);
  }
  uVar1 = *(uint *)(lVar5 + 0x34);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(lVar5 + 0x28);
    uVar4 = 0;
    do {
      uVar6 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
      *(undefined8 *)(lVar2 + 0x10 + uVar6 * 0x18) = 0;
      *(undefined8 *)(lVar2 + 8 + uVar6 * 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(lVar2 + uVar6 * 0x18) = 0xffffffffffffffff;
    } while (uVar4 <= uVar1);
  }
  return lVar5;
}



/* ===== 180492c50 FUN_180492c50 ===== */

longlong * FUN_180492c50(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar3 = (longlong *)FUN_180492370(param_2,param_3);
  if ((*plVar3 != -1) || (plVar5 = plVar3, *(int *)(param_2 + 0x34) == 0)) {
    plVar5 = *(longlong **)(param_2 + 0x38);
    do {
      plVar6 = plVar5;
      if (plVar6 == *(longlong **)(param_2 + 0x28)) {
        FUN_1804935a0(param_1,param_2,param_3);
        plVar3 = (longlong *)FUN_1804931f0(param_1,param_2,param_3);
        return plVar3;
      }
      plVar5 = plVar6 + -3;
    } while (plVar6[-2] != -1);
    *(longlong **)(param_2 + 0x38) = plVar5;
    plVar7 = plVar6;
    plVar4 = (longlong *)FUN_180492370(param_2,plVar3 + 1);
    if (plVar4 == plVar3) {
      plVar6[-1] = plVar3[2];
      plVar3[2] = (longlong)plVar5;
    }
    else {
      plVar1 = (longlong *)plVar4[2];
      while (plVar1 != plVar3) {
        plVar4 = (longlong *)plVar4[2];
        plVar1 = (longlong *)plVar4[2];
      }
      plVar4[2] = (longlong)plVar5;
      *plVar5 = *plVar3;
      plVar7[-2] = plVar3[1];
      plVar6[-1] = plVar3[2];
      plVar3[2] = 0;
      *plVar3 = -1;
      lVar2 = plVar6[-1];
      plVar6 = plVar5;
      while (plVar5 = plVar3, lVar2 != 0) {
        plVar5 = (longlong *)plVar6[2];
        if ((*plVar5 != -1) &&
           (plVar4 = (longlong *)FUN_180492370(param_2,plVar5 + 1), plVar4 == plVar3)) {
          plVar6[2] = plVar5[2];
          plVar5[2] = plVar3[2];
          plVar3[2] = (longlong)plVar5;
          plVar4 = (longlong *)plVar6[2];
          while (plVar5 = plVar3, plVar4 != (longlong *)0x0) {
            if (((*plVar4 == -1) ||
                (plVar5 = (longlong *)FUN_180492370(param_2,plVar4 + 1), plVar5 == plVar6)) ||
               (plVar5 == plVar4)) {
              plVar6 = plVar4;
            }
            else {
              plVar6[2] = plVar4[2];
              plVar4[2] = plVar5[2];
              plVar5[2] = (longlong)plVar4;
            }
            plVar4 = (longlong *)plVar6[2];
          }
          break;
        }
        plVar6 = plVar5;
        lVar2 = plVar5[2];
      }
    }
  }
  lVar2 = *param_3;
  plVar5[1] = lVar2;
  if (lVar2 == -0x8000000000000000) {
    plVar5[1] = 0;
  }
  if ((*(byte *)(param_2 + 8) & 4) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfb;
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar2 + 0x40);
    *(longlong *)(lVar2 + 0x40) = param_2;
  }
  return plVar5;
}



/* ===== 180492e20 FUN_180492e20 ===== */

int FUN_180492e20(longlong param_1,uint *param_2,double *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = *(longlong *)param_2;
  if ((uint)(lVar4 >> 0x2f) < 0xfffffff2) {
    uVar2 = FUN_1800052ed(*(longlong *)param_2);
    if (uVar2 < *(uint *)(param_1 + 0x30)) {
      uVar2 = uVar2 + 1;
      goto LAB_180492ec7;
    }
  }
  if (lVar4 == -1) {
    uVar2 = 0;
  }
  else {
    lVar4 = FUN_180492370(param_1,param_2);
    do {
      iVar3 = FUN_18048f530(lVar4 + 8,param_2);
      if (iVar3 != 0) {
        uVar2 = (int)(((lVar4 - *(longlong *)(param_1 + 0x28)) + 0x18) / 0x18) +
                *(int *)(param_1 + 0x30);
        goto LAB_180492ec7;
      }
      lVar4 = *(longlong *)(lVar4 + 0x10);
    } while (lVar4 != 0);
    if (param_2[1] == 0xfffe7fff) {
      uVar2 = *param_2;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
LAB_180492ec7:
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar2 < uVar1) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    do {
      if (*(longlong *)(lVar4 + (ulonglong)uVar2 * 8) != -1) {
        *param_3 = (double)(int)uVar2;
        param_3[1] = *(double *)(lVar4 + (ulonglong)uVar2 * 8);
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  uVar2 = uVar2 - uVar1;
  if (uVar2 <= *(uint *)(param_1 + 0x34)) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    do {
      uVar5 = (ulonglong)uVar2;
      if (*(longlong *)(lVar4 + uVar5 * 0x18) != -1) {
        *param_3 = *(double *)(lVar4 + 8 + uVar5 * 0x18);
        param_3[1] = *(double *)(lVar4 + uVar5 * 0x18);
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(param_1 + 0x34));
  }
  return (int)uVar2 >> 0x1f;
}



/* ===== 180492f60 FUN_180492f60 ===== */

void FUN_180492f60(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 0x34);
  if (uVar1 == 0) {
    FUN_180492f90(param_1,param_2,param_3 + 1,0);
    return;
  }
  iVar2 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  FUN_180492f90(param_1,param_2,param_3 + 1,iVar2 + 1);
  return;
}



/* ===== 180492f90 FUN_180492f90 ===== */

void FUN_180492f90(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar9 = *(uint *)(param_2 + 0x30);
  uVar10 = (ulonglong)uVar9;
  uVar1 = *(uint *)(param_2 + 0x34);
  lVar2 = *(longlong *)(param_2 + 0x28);
  if (uVar9 < param_3) {
    if (0x8000001 < param_3) goto LAB_1804931e0;
    uVar8 = *(ulonglong *)(param_2 + 0x10);
    if (*(char *)(param_2 + 0xb) < '\x01') {
      uVar4 = FUN_180491760(param_1,uVar8,uVar10 << 3);
    }
    else {
      uVar4 = FUN_180491760(param_1,0);
      *(byte *)(param_2 + 0xb) = *(byte *)(param_2 + 0xb) | 0x80;
      if (uVar9 != 0) {
        uVar13 = 0;
        if ((uVar9 < 2) ||
           ((uVar4 <= uVar8 + (ulonglong)(uVar9 - 1) * 8 &&
            (uVar8 <= uVar4 + (ulonglong)(uVar9 - 1) * 8)))) {
          do {
            *(undefined8 *)(uVar4 + uVar13 * 8) = *(undefined8 *)(uVar8 + uVar13 * 8);
            uVar3 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar3;
          } while (uVar3 < uVar9);
        }
        else {
          FUN_180540530(uVar4,uVar8,uVar10 << 3);
        }
      }
    }
    *(ulonglong *)(param_2 + 0x10) = uVar4;
    *(uint *)(param_2 + 0x30) = param_3;
    FUN_180540170(uVar4 + uVar10 * 8,0xffffffffffffffff,(ulonglong)(param_3 - uVar9) << 3);
  }
  if (param_4 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x10) + 0xf8;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(longlong *)(param_2 + 0x28) = lVar5;
    *(longlong *)(param_2 + 0x38) = lVar5;
  }
  else {
    if (0x1a < param_4) {
LAB_1804931e0:
                    /* WARNING: Subroutine does not return */
      FUN_180484550(param_1,0x8b);
    }
    uVar3 = 1 << ((byte)param_4 & 0x1f);
    lVar5 = FUN_180491760(param_1,0,0);
    uVar11 = uVar3 - 1;
    *(longlong *)(param_2 + 0x28) = lVar5;
    *(uint *)(param_2 + 0x34) = uVar11;
    uVar12 = 0;
    *(ulonglong *)(param_2 + 0x38) = (ulonglong)uVar3 * 0x18 + lVar5;
    do {
      uVar8 = (ulonglong)uVar12;
      uVar12 = uVar12 + 1;
      *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18) = 0;
      *(undefined8 *)(lVar5 + 8 + uVar8 * 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(lVar5 + uVar8 * 0x18) = 0xffffffffffffffff;
    } while (uVar12 <= uVar11);
  }
  if (param_3 < uVar9) {
    lVar5 = *(longlong *)(param_2 + 0x10);
    *(uint *)(param_2 + 0x30) = param_3;
    uVar8 = (ulonglong)param_3;
    do {
      if (*(longlong *)(lVar5 + uVar8 * 8) != -1) {
        puVar6 = (undefined8 *)FUN_180493360(param_1,param_2,uVar8);
        *puVar6 = *(undefined8 *)(lVar5 + uVar8 * 8);
      }
      uVar3 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar3;
    } while (uVar3 < uVar9);
    if (*(char *)(param_2 + 0xb) < '\x01') {
      uVar7 = FUN_180491760(param_1,lVar5,uVar10 << 3,(ulonglong)param_3 << 3);
      *(undefined8 *)(param_2 + 0x10) = uVar7;
    }
  }
  if (uVar1 != 0) {
    uVar10 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar10 * 0x18) != -1) {
        puVar6 = (undefined8 *)FUN_1804931f0(param_1,param_2,lVar2 + 8 + uVar10 * 0x18);
        *puVar6 = *(undefined8 *)(lVar2 + uVar10 * 0x18);
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 <= uVar1);
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    puVar6[2] = puVar6[2] + (ulonglong)(uVar1 + 1) * -0x18;
    (*(code *)*puVar6)(puVar6[1],lVar2,(ulonglong)(uVar1 + 1) * 0x18,0);
  }
  return;
}



/* ===== 1804931f0 FUN_1804931f0 ===== */

longlong FUN_1804931f0(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong local_res10;
  
  *(undefined1 *)(param_2 + 10) = 0;
  dVar1 = *param_3;
  uVar2 = (uint)((longlong)dVar1 >> 0x2f);
  if (uVar2 == 0xfffffffb) {
    local_res10 = (ulonglong)dVar1 & 0x7fffffffffff;
    lVar4 = *(longlong *)(param_2 + 0x28) +
            (ulonglong)(*(uint *)(local_res10 + 0xc) & *(uint *)(param_2 + 0x34)) * 0x18;
    while (((int)((longlong)*(ulonglong *)(lVar4 + 8) >> 0x2f) != -5 ||
           ((*(ulonglong *)(lVar4 + 8) & 0x7fffffffffff) != local_res10))) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      if (lVar4 == 0) {
        local_res10 = local_res10 | 0xfffd800000000000;
        lVar4 = FUN_180492c50(param_1,param_2,&local_res10);
        return lVar4;
      }
    }
    return lVar4;
  }
  if (uVar2 < 0xfffffff2) {
    dVar1 = *param_3;
    uVar5 = FUN_1800052ed(SUB84(dVar1,0));
    if (-1 < (longlong)uVar5) {
      if ((uint)uVar5 < *(uint *)(param_2 + 0x30)) {
        return *(longlong *)(param_2 + 0x10) + (longlong)(int)(uint)uVar5 * 8;
      }
      lVar4 = FUN_180493360(param_1,param_2,uVar5 & 0xffffffff);
      return lVar4;
    }
    if (NAN(dVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_180484550(param_1,0x9a);
    }
  }
  else if (dVar1 == -NAN) {
                    /* WARNING: Subroutine does not return */
    FUN_180484550(param_1,0xad);
  }
  lVar4 = FUN_180492370(param_2,param_3);
  do {
    iVar3 = FUN_18048f530(lVar4 + 8,param_3);
    if (iVar3 != 0) {
      return lVar4;
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
  } while (lVar4 != 0);
  lVar4 = FUN_180492c50(param_1,param_2,param_3);
  return lVar4;
}



/* ===== 180493360 FUN_180493360 ===== */

longlong FUN_180493360(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  double local_res10 [3];
  
  local_res10[0] = (double)param_3;
  uVar1 = (uint)((ulonglong)local_res10[0] >> 0x20);
  uVar3 = (uVar1 * 2 ^ SUB84(local_res10[0],0)) - ((uVar1 & 0x7fffffff) >> 0x11 | uVar1 << 0xf);
  lVar2 = *(longlong *)(param_2 + 0x28) +
          (ulonglong)
          ((((uVar1 & 0x7fffffff) >> 0xc | uVar1 << 0x14) ^ uVar3) -
           (uVar3 >> 0x13 | uVar3 * 0x2000) & *(uint *)(param_2 + 0x34)) * 0x18;
  while ((0xfffffff1 < (uint)((longlong)*(undefined8 *)(lVar2 + 8) >> 0x2f) ||
         (*(double *)(lVar2 + 8) != local_res10[0]))) {
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      lVar2 = FUN_180492c50(param_1,param_2,local_res10);
      return lVar2;
    }
  }
  return lVar2;
}



/* ===== 180493400 FUN_180493400 ===== */

void FUN_180493400(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong local_res10 [3];
  
  lVar1 = *(longlong *)(param_2 + 0x28) +
          (ulonglong)(*(uint *)(param_2 + 0x34) & *(uint *)(param_3 + 0xc)) * 0x18;
  while (((int)((longlong)*(ulonglong *)(lVar1 + 8) >> 0x2f) != -5 ||
         ((*(ulonglong *)(lVar1 + 8) & 0x7fffffffffff) != param_3))) {
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      local_res10[0] = param_3 | 0xfffd800000000000;
      FUN_180492c50(param_1,param_2,local_res10);
      return;
    }
  }
  return;
}



/* ===== 180493480 FUN_180493480 ===== */

longlong FUN_180493480(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 - 1 < 0x10) {
    lVar2 = FUN_1804916f0(param_1,(ulonglong)param_2 * 8 + 0x40);
    *(undefined2 *)(lVar2 + 9) = 0xff0b;
    *(longlong *)(lVar2 + 0x10) = lVar2 + 0x40;
    *(char *)(lVar2 + 0xb) = (char)param_2;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined4 *)(lVar2 + 0x34) = 0;
    *(uint *)(lVar2 + 0x30) = param_2;
    lVar5 = *(longlong *)(param_1 + 0x10) + 0xf8;
    *(longlong *)(lVar2 + 0x28) = lVar5;
    *(longlong *)(lVar2 + 0x38) = lVar5;
  }
  else {
    lVar2 = FUN_1804916f0(param_1,0x40);
    *(undefined2 *)(lVar2 + 9) = 0xff0b;
    *(undefined1 *)(lVar2 + 0xb) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    lVar5 = *(longlong *)(param_1 + 0x10) + 0xf8;
    *(longlong *)(lVar2 + 0x28) = lVar5;
    *(longlong *)(lVar2 + 0x38) = lVar5;
    if (param_2 != 0) {
      if (0x8000001 < param_2) goto LAB_180493586;
      uVar3 = FUN_180491760(param_1,0,0,(ulonglong)param_2 << 3);
      *(undefined8 *)(lVar2 + 0x10) = uVar3;
      *(uint *)(lVar2 + 0x30) = param_2;
    }
  }
  if (param_3 != 0) {
    if (0x1a < param_3) {
LAB_180493586:
                    /* WARNING: Subroutine does not return */
      FUN_180484550(param_1,0x8b);
    }
    uVar1 = 1 << ((byte)param_3 & 0x1f);
    lVar5 = (ulonglong)uVar1 * 0x18;
    lVar4 = FUN_180491760(param_1,0,0,lVar5);
    *(longlong *)(lVar2 + 0x28) = lVar4;
    *(longlong *)(lVar2 + 0x38) = lVar4 + lVar5;
    *(uint *)(lVar2 + 0x34) = uVar1 - 1;
  }
  return lVar2;
}



/* ===== 1804935a0 FUN_1804935a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804935a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  int local_b8 [28];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_e8;
  uVar2 = *(uint *)(param_2 + 0x30);
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  iVar11 = 0;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[6] = 0;
  local_b8[7] = 0;
  local_b8[8] = 0;
  local_b8[9] = 0;
  local_b8[10] = 0;
  local_b8[0xb] = 0;
  local_b8[0xc] = 0;
  local_b8[0xd] = 0;
  local_b8[0xe] = 0;
  local_b8[0xf] = 0;
  local_b8[0x10] = 0;
  local_b8[0x11] = 0;
  local_b8[0x12] = 0;
  local_b8[0x13] = 0;
  local_b8[0x14] = 0;
  local_b8[0x15] = 0;
  local_b8[0x16] = 0;
  local_b8[0x17] = 0;
  local_b8[0x18] = 0;
  local_b8[0x19] = 0;
  local_b8[0x1a] = 0;
  local_b8[0x1b] = 0;
  if (uVar2 != 0) {
    uVar10 = 0;
    uVar3 = 0;
    do {
      uVar7 = 2 << ((byte)uVar10 & 0x1f);
      if (uVar7 < uVar2) {
        lVar9 = *(longlong *)(param_2 + 0x10);
        iVar6 = 0;
        if ((uint)uVar3 <= uVar7) goto LAB_180493639;
      }
      else {
        if (uVar2 - 1 < (uint)uVar3) break;
        lVar9 = *(longlong *)(param_2 + 0x10);
        uVar7 = uVar2 - 1;
LAB_180493639:
        iVar6 = 0;
        do {
          iVar5 = iVar6 + 1;
          if (*(longlong *)(lVar9 + uVar3 * 8) == -1) {
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          uVar4 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar4;
        } while (uVar4 <= uVar7);
      }
      local_b8[uVar10] = local_b8[uVar10] + iVar6;
      iVar11 = iVar11 + iVar6;
      uVar7 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar7;
    } while (uVar7 < 0x1c);
  }
  uVar2 = *(uint *)(param_2 + 0x34);
  iVar12 = 0;
  lVar9 = *(longlong *)(param_2 + 0x28);
  iVar5 = 0;
  uVar3 = 0;
  iVar6 = 1;
  local_c8 = param_3;
  local_c0 = param_1;
  do {
    if (*(longlong *)(lVar9 + uVar3 * 0x18) != -1) {
      if ((uint)((longlong)*(undefined8 *)(lVar9 + 8 + uVar3 * 0x18) >> 0x2f) < 0xfffffff2) {
        uVar7 = FUN_1800052ed((int)*(undefined8 *)(lVar9 + 8 + uVar3 * 0x18));
        if (0x8000000 < uVar7) goto LAB_1804936c7;
        if ((int)uVar7 < 3) {
          iVar1 = 1;
          local_b8[0] = local_b8[0] + 1;
        }
        else {
          uVar4 = 0x1f;
          if (uVar7 - 1 != 0) {
            for (; uVar7 - 1 >> uVar4 == 0; uVar4 = uVar4 - 1) {
            }
          }
          iVar1 = 1;
          local_b8[uVar4] = local_b8[uVar4] + 1;
        }
      }
      else {
LAB_1804936c7:
        iVar1 = 0;
      }
      iVar12 = iVar12 + iVar1;
      iVar5 = iVar5 + 1;
    }
    uVar7 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar7;
  } while (uVar7 <= uVar2);
  if ((uint)((longlong)*local_c8 >> 0x2f) < 0xfffffff2) {
    uVar2 = FUN_1800052ed((int)*local_c8);
    if (uVar2 < 0x8000001) {
      if ((int)uVar2 < 3) {
        iVar1 = 1;
        local_b8[0] = local_b8[0] + 1;
      }
      else {
        uVar7 = 0x1f;
        if (uVar2 - 1 != 0) {
          for (; uVar2 - 1 >> uVar7 == 0; uVar7 = uVar7 - 1) {
          }
        }
        iVar1 = 1;
        local_b8[uVar7] = local_b8[uVar7] + 1;
      }
      goto LAB_18049371d;
    }
  }
  iVar1 = 0;
LAB_18049371d:
  iVar1 = iVar1 + iVar12 + iVar11;
  iVar12 = 0;
  uVar2 = iVar1 * 2;
  uVar7 = 0;
  uVar3 = 0;
  iVar8 = 0;
  if (1 < uVar2) {
    do {
      if (iVar8 == iVar1) break;
      if (local_b8[uVar3] != 0) {
        iVar8 = iVar8 + local_b8[uVar3];
        if ((uint)(1 << ((byte)uVar3 & 0x1f)) < (uint)(iVar8 * 2)) {
          uVar7 = 2 << ((byte)uVar3 & 0x1f) | 1;
          iVar12 = iVar8;
        }
      }
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
    } while ((uint)(1 << ((byte)uVar4 & 0x1f)) < uVar2);
  }
  iVar12 = (iVar5 + 1 + iVar11) - iVar12;
  if (iVar12 == 0) {
    iVar6 = 0;
  }
  else if (iVar12 != 1) {
    iVar6 = 0x1f;
    if (iVar12 - 1U != 0) {
      for (; iVar12 - 1U >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar6 = iVar6 + 1;
  }
  FUN_180492f90(local_c0,param_2,uVar7,iVar6);
  return;
}



/* ===== 1804937c0 FUN_1804937c0 ===== */

ulonglong FUN_1804937c0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  double dVar8;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar2 = param_2 + 1;
  do {
    uVar7 = uVar2;
    uVar6 = (uint)uVar7;
    if (uVar6 < uVar1) {
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)uVar6 * 8);
    }
    else {
      dVar8 = (double)(int)uVar6;
      uVar6 = (uint)((ulonglong)dVar8 >> 0x20);
      uVar4 = (uVar6 * 2 ^ SUB84(dVar8,0)) - ((uVar6 & 0x7fffffff) >> 0x11 | uVar6 << 0xf);
      plVar5 = (longlong *)
               (*(longlong *)(param_1 + 0x28) +
               (ulonglong)
               ((((uVar6 & 0x7fffffff) >> 0xc | uVar6 << 0x14) ^ uVar4) -
                (uVar4 >> 0x13 | uVar4 * 0x2000) & *(uint *)(param_1 + 0x34)) * 0x18);
      do {
        if (((uint)(plVar5[1] >> 0x2f) < 0xfffffff2) && ((double)plVar5[1] == dVar8)) break;
        plVar5 = (longlong *)plVar5[2];
      } while (plVar5 != (longlong *)0x0);
    }
    if ((plVar5 == (longlong *)0x0) || (*plVar5 == -1)) {
      uVar2 = uVar7 - param_2;
      do {
        if (uVar2 < 2) {
          return param_2 & 0xffffffff;
        }
        uVar2 = param_2 + uVar7 >> 1;
        uVar6 = (uint)uVar2;
        if (uVar6 < uVar1) {
          plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)uVar6 * 8);
        }
        else {
          dVar8 = (double)(int)uVar6;
          uVar6 = (uint)((ulonglong)dVar8 >> 0x20);
          uVar4 = (uVar6 * 2 ^ SUB84(dVar8,0)) - ((uVar6 & 0x7fffffff) >> 0x11 | uVar6 << 0xf);
          plVar5 = (longlong *)
                   (*(longlong *)(param_1 + 0x28) +
                   (ulonglong)
                   ((((uVar6 & 0x7fffffff) >> 0xc | uVar6 << 0x14) ^ uVar4) -
                    (uVar4 >> 0x13 | uVar4 * 0x2000) & *(uint *)(param_1 + 0x34)) * 0x18);
          do {
            if (((uint)(plVar5[1] >> 0x2f) < 0xfffffff2) && ((double)plVar5[1] == dVar8)) break;
            plVar5 = (longlong *)plVar5[2];
          } while (plVar5 != (longlong *)0x0);
        }
        if ((plVar5 == (longlong *)0x0) || (*plVar5 == -1)) {
          uVar7 = uVar2;
        }
        else {
          param_2 = uVar2;
        }
        uVar2 = uVar7 - param_2;
      } while( true );
    }
    uVar2 = uVar7 * 2;
    param_2 = uVar7;
  } while (uVar7 * 2 < 0x7ffffffe);
  uVar6 = 1;
  do {
    if (uVar6 < uVar1) {
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)uVar6 * 8);
    }
    else {
      dVar8 = (double)(int)uVar6;
      uVar4 = (uint)((ulonglong)dVar8 >> 0x20);
      uVar3 = (uVar4 * 2 ^ SUB84(dVar8,0)) - ((uVar4 & 0x7fffffff) >> 0x11 | uVar4 << 0xf);
      plVar5 = (longlong *)
               (*(longlong *)(param_1 + 0x28) +
               (ulonglong)
               ((((uVar4 & 0x7fffffff) >> 0xc | uVar4 << 0x14) ^ uVar3) -
                (uVar3 >> 0x13 | uVar3 * 0x2000) & *(uint *)(param_1 + 0x34)) * 0x18);
      do {
        if (((uint)(plVar5[1] >> 0x2f) < 0xfffffff2) && ((double)plVar5[1] == dVar8)) break;
        plVar5 = (longlong *)plVar5[2];
      } while (plVar5 != (longlong *)0x0);
    }
    if ((plVar5 == (longlong *)0x0) || (*plVar5 == -1)) {
      return (ulonglong)(uVar6 - 1);
    }
    uVar6 = uVar6 + 1;
  } while( true );
}



/* ===== 1804939e0 FUN_1804939e0 ===== */

void FUN_1804939e0(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    do {
      if ((ulonglong)puVar2[4] < param_2) {
        return;
      }
      *(undefined8 *)(param_1 + 0x40) = *puVar2;
      if ((~*(byte *)(puVar1 + 4) & *(byte *)(puVar2 + 1) & 3) == 0) {
        *(undefined8 *)(puVar2[3] + 0x10) = puVar2[2];
        *(undefined8 *)(puVar2[2] + 0x18) = puVar2[3];
        FUN_180490990(puVar1,puVar2);
      }
      else {
        if (*(char *)((longlong)puVar2 + 10) == '\0') {
          *(undefined8 *)(puVar2[3] + 0x10) = puVar2[2];
          *(undefined8 *)(puVar2[2] + 0x18) = puVar2[3];
        }
        puVar1[2] = puVar1[2] + -0x30;
        (*(code *)*puVar1)(puVar1[1],puVar2,0x30,0);
      }
      puVar2 = *(undefined8 **)(param_1 + 0x40);
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}



/* ===== 180493b30 FUN_180493b30 ===== */

void FUN_180493b30(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_1804916f0(param_1,(ulonglong)param_2 * 8 + 0x30);
  *(char *)(lVar2 + 0xb) = (char)param_2;
  *(undefined2 *)(lVar2 + 9) = 0x108;
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = param_3;
  *(longlong *)(lVar2 + 0x20) = lVar1 + 0x174;
  return;
}



/* ===== 180493b80 FUN_180493b80 ===== */

longlong FUN_180493b80(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar3 = FUN_1804916f0(param_1,(ulonglong)*(byte *)(param_2 + 0x3c) * 8 + 0x28);
  *(longlong *)(lVar3 + 0x20) = param_2 + 0x68;
  *(undefined8 *)(lVar3 + 0x10) = param_3;
  uVar6 = 0;
  *(undefined2 *)(lVar3 + 9) = 8;
  *(undefined1 *)(lVar3 + 0xb) = 0;
  bVar1 = *(byte *)(param_2 + 0x3c);
  uVar5 = *(byte *)(param_2 + 0x3d) + 0x20;
  *(byte *)(param_2 + 0x3d) = (char)uVar5 - ((byte)(uVar5 >> 3) & 0x20);
  if (bVar1 == 0) {
    *(undefined1 *)(lVar3 + 0xb) = 0;
    return lVar3;
  }
  do {
    lVar4 = FUN_1804916f0(param_1,0x30);
    *(undefined8 *)(lVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined2 *)(lVar4 + 9) = 0x105;
    *(longlong *)(lVar4 + 0x20) = lVar4 + 0x10;
    uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x28) + uVar6 * 2);
    *(uint *)(lVar4 + 0x28) = (uint)uVar2 << 0x18 ^ (uint)param_2;
    *(byte *)(lVar4 + 0xb) = (byte)(uVar2 >> 0xe) & 1;
    *(longlong *)(lVar3 + 0x28 + uVar6 * 8) = lVar4;
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 < bVar1);
  *(byte *)(lVar3 + 0xb) = bVar1;
  return lVar3;
}



/* ===== 180493c50 FUN_180493c50 ===== */

longlong FUN_180493c50(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_1804915b0();
  }
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  lVar8 = FUN_1804916f0(param_1,(ulonglong)*(byte *)(param_2 + 0x3c) * 8 + 0x28);
  *(longlong *)(lVar8 + 0x20) = param_2 + 0x68;
  *(undefined2 *)(lVar8 + 9) = 8;
  *(undefined1 *)(lVar8 + 0xb) = 0;
  *(undefined8 *)(lVar8 + 0x10) = uVar4;
  bVar2 = *(byte *)(param_2 + 0x3c);
  uVar11 = *(byte *)(param_2 + 0x3d) + 0x20;
  *(byte *)(param_2 + 0x3d) = (char)uVar11 - ((byte)(uVar11 >> 3) & 0x20);
  if (bVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    uVar12 = 0;
    do {
      plVar10 = (longlong *)(param_1 + 0x40);
      uVar3 = *(ushort *)(*(longlong *)(param_2 + 0x28) + uVar12 * 2);
      if ((short)uVar3 < 0) {
        lVar6 = *(longlong *)(param_1 + 0x10);
        uVar1 = lVar5 + (ulonglong)(byte)uVar3 * 8;
        if (*plVar10 != 0) {
          while( true ) {
            plVar9 = (longlong *)*plVar10;
            if ((ulonglong)plVar9[4] < uVar1) break;
            if (plVar9[4] == uVar1) {
              if ((~*(byte *)(lVar6 + 0x20) & *(byte *)(plVar9 + 1) & 3) != 0) {
                *(byte *)(plVar9 + 1) = *(byte *)(plVar9 + 1) ^ 3;
              }
              goto LAB_180493da2;
            }
            plVar10 = plVar9;
            if (*plVar9 == 0) break;
          }
        }
        plVar9 = (longlong *)FUN_180491760(param_1,0,0,0x30);
        *(byte *)(plVar9 + 1) = *(byte *)(lVar6 + 0x20) & 3;
        *(undefined2 *)((longlong)plVar9 + 9) = 5;
        plVar9[4] = uVar1;
        *plVar9 = *plVar10;
        *plVar10 = (longlong)plVar9;
        plVar9[2] = lVar6 + 0x120;
        lVar7 = *(longlong *)(lVar6 + 0x138);
        plVar9[3] = lVar7;
        *(longlong **)(lVar7 + 0x10) = plVar9;
        *(longlong **)(lVar6 + 0x138) = plVar9;
LAB_180493da2:
        *(byte *)((longlong)plVar9 + 0xb) = (byte)(uVar3 >> 0xe) & 1;
        *(uint *)(plVar9 + 5) = (uint)uVar3 << 0x18 ^ *(uint *)(param_3 + 0x20);
      }
      else {
        plVar9 = *(longlong **)(param_3 + 0x28 + (ulonglong)uVar3 * 8);
      }
      *(longlong **)(lVar8 + 0x28 + uVar12 * 8) = plVar9;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 < bVar2);
  }
  *(byte *)(lVar8 + 0xb) = bVar2;
  return lVar8;
}



/* ===== 180493e30 FUN_180493e30 ===== */

ulonglong FUN_180493e30(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar6 = (uint)(param_2 >> 0x20) & 0xffffff80;
  lVar5 = *(longlong *)(lVar2 + 0x70);
  bVar1 = *(byte *)(lVar2 + 0x23);
  uVar4 = (ulonglong)bVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(uint *)(lVar5 + uVar4 * 4) == uVar6) {
        return param_2 & 0x7fffffffff | uVar4 << 0x27;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 <= bVar1);
    uVar3 = bVar1 + 1;
    uVar4 = (ulonglong)uVar3;
    if (0xfe < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_180484550(param_1,0x366);
    }
  }
  uVar3 = (uint)uVar4;
  if (((uVar3 & uVar3 - 1) == 0) && (uVar3 != 1)) {
    uVar7 = (ulonglong)(uVar3 * 2);
    if (uVar3 == 0) {
      uVar7 = 2;
    }
    lVar5 = FUN_180491760(param_1,lVar5,uVar4 * 4,uVar7 << 2);
    *(longlong *)(lVar2 + 0x70) = lVar5;
  }
  *(char *)(lVar2 + 0x23) = (char)uVar4;
  *(uint *)(lVar5 + uVar4 * 4) = uVar6;
  return param_2 & 0x7fffffffff | uVar4 << 0x27;
}



/* ===== 180493f30 FUN_180493f30 ===== */

void FUN_180493f30(longlong param_1,uint param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_180491760(param_1,0,0,(ulonglong)param_2 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x10);
  bVar1 = *(byte *)(lVar2 + 0x20);
  puVar3[2] = param_3;
  *(byte *)(puVar3 + 1) = bVar1 & 3;
  *(undefined2 *)((longlong)puVar3 + 9) = 0xc;
  *(uint *)(puVar3 + 3) = param_2;
  puVar3[4] = 0;
  *puVar3 = **(undefined8 **)(lVar2 + 0xc0);
  **(undefined8 **)(lVar2 + 0xc0) = puVar3;
  return;
}



/* ===== 180493fb0 FUN_180493fb0 ===== */

ulonglong *
FUN_180493fb0(longlong param_1,undefined8 *param_2,ulonglong *param_3,ulonglong *param_4,
             uint param_5)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  ulonglong local_res18 [2];
  ulonglong local_38 [2];
  
  uVar7 = (uint)(*(ushort *)(&DAT_18056f5e0 + (ulonglong)param_5 * 2) >> 0xb);
  uVar1 = (uint)((longlong)*param_3 >> 0x2f);
  if (uVar1 < 0xfffffff2) {
    puVar8 = param_3;
  }
  else {
    if ((uVar1 != 0xfffffffb) ||
       (iVar2 = FUN_1804972a0(*param_3 & 0x7fffffffffff,local_res18), iVar2 == 0))
    goto LAB_180494068;
    puVar8 = local_res18;
  }
  uVar1 = (uint)((longlong)*param_4 >> 0x2f);
  if (0xfffffff1 < uVar1) {
    if ((uVar1 != 0xfffffffb) ||
       (iVar2 = FUN_1804972a0(*param_4 & 0x7fffffffffff,local_38), iVar2 == 0)) {
LAB_180494068:
      plVar3 = (longlong *)FUN_180494e10(param_1,param_3,uVar7);
      if ((*plVar3 == -1) &&
         (plVar3 = (longlong *)FUN_180494e10(param_1,param_4,uVar7), *plVar3 == -1)) {
        lVar5 = FUN_1804953a0(param_3,local_res18);
        if (lVar5 != 0) {
          param_3 = param_4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_180484560(param_1,param_3,0x199);
      }
      uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
      if (*(char *)(uVar4 + 10) == '\0') {
        puVar6 = (undefined8 *)
                 (*(longlong *)(param_1 + 0x20) +
                 (ulonglong)*(byte *)(*(longlong *)(uVar4 + 0x20) + -0x5d) * 8);
      }
      else {
        puVar6 = *(undefined8 **)(param_1 + 0x28);
      }
      puVar6[1] = 0xffffffffffffffff;
      *puVar6 = &LAB_1800034b2;
      puVar6[2] = *plVar3;
      puVar6[3] = 0xffffffffffffffff;
      puVar6[4] = *param_3;
      puVar6[5] = *param_4;
      return puVar6 + 4;
    }
    param_4 = local_38;
  }
  uVar9 = FUN_1804b8d60(*puVar8,*param_4,uVar7 - 10);
  *param_2 = uVar9;
  return (ulonglong *)0x0;
}



/* ===== 180494130 FUN_180494130 ===== */

void FUN_180494130(undefined8 param_1,double *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  int local_58 [6];
  
  local_58[0] = 0;
  local_58[1] = 0;
  uVar1 = FUN_1804b3810(param_1,param_3,local_58);
  piVar5 = local_58 + 1;
  if (param_5 < 0x5d) {
    piVar5 = local_58;
  }
  uVar2 = FUN_1804b3810(param_1,param_4,piVar5);
  iVar3 = local_58[0];
  if (local_58[0] != 0) {
    if ((uint)((longlong)*param_3 >> 0x2f) < 0xfffffff2) {
      if (local_58[0] == 0xc) {
        uVar1 = FUN_180005312(*param_3);
      }
      else {
        uVar1 = FUN_18000530c();
      }
    }
    if ((uint)((longlong)*param_4 >> 0x2f) < 0xfffffff2) {
      if (iVar3 == 0xc) {
        uVar2 = FUN_180005312(*param_4);
      }
      else {
        uVar2 = FUN_18000530c();
      }
    }
  }
  if (param_5 == 0x59) {
    uVar1 = ~uVar1;
  }
  else if (param_5 == 0x5a) {
    uVar1 = uVar1 & uVar2;
  }
  else if (param_5 == 0x5b) {
    uVar1 = uVar1 | uVar2;
  }
  else if (param_5 == 0x5c) {
    uVar1 = uVar1 ^ uVar2;
  }
  else {
    if (iVar3 == 0) {
      bVar4 = (byte)uVar2;
      if (param_5 == 0x5d) {
        uVar1 = (ulonglong)(uint)((int)uVar1 << (bVar4 & 0x1f));
      }
      else if (param_5 == 0x5e) {
        uVar1 = (uVar1 & 0xffffffff) >> (bVar4 & 0x1f);
      }
      else {
        uVar1 = (ulonglong)(uint)((int)uVar1 >> (bVar4 & 0x1f));
      }
      goto LAB_180494222;
    }
    uVar1 = FUN_1804b3eb0(uVar1,uVar2 & 0xffffffff,param_5 - 0x5d);
    iVar3 = local_58[0];
  }
  if (iVar3 != 0) {
    uVar2 = FUN_1804916f0(param_1,0x18);
    *(undefined1 *)(uVar2 + 9) = 10;
    *(short *)(uVar2 + 10) = (short)iVar3;
    *(ulonglong *)(uVar2 + 0x10) = uVar1;
    *param_2 = (double)(uVar2 | 0xfffa800000000000);
    return;
  }
LAB_180494222:
  *param_2 = (double)(int)uVar1;
  return;
}



/* ===== 1804942b0 FUN_1804942b0 ===== */

longlong * FUN_1804942b0(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180492860(param_1,param_3);
  if ((plVar1 == (longlong *)0x0) || (*plVar1 == -1)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | (byte)(1 << (param_2 & 0x1f));
    plVar1 = (longlong *)0x0;
  }
  return plVar1;
}



/* ===== 1804942f0 FUN_1804942f0 ===== */

void FUN_1804942f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180494e10(param_1,param_2,9);
  if ((int)((longlong)*puVar2 >> 0x2f) != -9) {
    FUN_180484630(param_1,param_2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  for (; param_2 + 2 < param_3; param_3 = param_3 + -1) {
    *param_3 = param_3[-1];
  }
  param_2[2] = *param_2;
  *param_2 = *puVar2;
  return;
}



/* ===== 180494370 FUN_180494370 ===== */

ulonglong * FUN_180494370(longlong param_1,ulonglong *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = -param_3;
  if (-param_3 < 0) {
    iVar8 = param_3;
  }
  while( true ) {
    uVar6 = *param_2;
    uVar4 = (uint)((longlong)uVar6 >> 0x2f);
    if (((uVar4 != 0xfffffffb) && (0xfffffff2 < uVar4)) &&
       ((uVar4 != 0xfffffff3 || (*(char *)((uVar6 & 0x7fffffffffff) + 10) != '\x03')))) break;
    uVar9 = (uint)((longlong)param_2[-1] >> 0x2f);
    if (((uVar9 != 0xfffffffb) && (0xfffffff2 < uVar9)) &&
       ((uVar9 != 0xfffffff3 || (*(char *)((param_2[-1] & 0x7fffffffffff) + 10) != '\x03')))) break;
    if (uVar4 == 0xfffffffb) {
      uVar4 = *(uint *)((uVar6 & 0x7fffffffffff) + 0x14);
    }
    else if ((uVar4 == 0xfffffff3) &&
            (uVar6 = uVar6 & 0x7fffffffffff, *(char *)(uVar6 + 10) == '\x03')) {
      uVar4 = *(int *)(uVar6 + 0x30) - *(int *)(uVar6 + 0x58);
    }
    else {
      uVar4 = 0x20;
    }
    uVar6 = (ulonglong)uVar4;
    puVar2 = param_2;
    do {
      uVar1 = puVar2[-1];
      puVar7 = puVar2 + -1;
      iVar3 = (int)((longlong)uVar1 >> 0x2f);
      if (iVar3 == -5) {
        uVar4 = *(uint *)((uVar1 & 0x7fffffffffff) + 0x14);
      }
      else if ((iVar3 == -0xd) && (uVar1 = uVar1 & 0x7fffffffffff, *(char *)(uVar1 + 10) == '\x03'))
      {
        uVar4 = *(int *)(uVar1 + 0x30) - *(int *)(uVar1 + 0x58);
      }
      else {
        uVar4 = 0x20;
      }
      iVar8 = iVar8 + -1;
      uVar6 = uVar6 + uVar4;
    } while ((0 < iVar8) &&
            ((uVar4 = (uint)((longlong)puVar2[-2] >> 0x2f), puVar2 = puVar7, uVar4 == 0xfffffffb ||
             (uVar4 < 0xfffffff3))));
    if (0x7ffffeff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_180484550(param_1,0x38);
    }
    lVar5 = *(longlong *)(param_1 + 0x10);
    *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xd8);
    *(longlong *)(lVar5 + 0xe0) = param_1;
    puVar2 = puVar7;
    if ((uint)(*(int *)(lVar5 + 0xd0) - (int)*(undefined8 *)(lVar5 + 0xd8)) < (uint)uVar6) {
      FUN_1804a9db0(lVar5 + 200);
    }
    for (; puVar2 <= param_2; puVar2 = puVar2 + 1) {
      uVar6 = *puVar2;
      iVar3 = (int)((longlong)uVar6 >> 0x2f);
      if (iVar3 == -5) {
        FUN_1804a9f00(lVar5 + 200,(uVar6 & 0x7fffffffffff) + 0x18,
                      *(undefined4 *)((uVar6 & 0x7fffffffffff) + 0x14));
      }
      else if ((iVar3 == -0xd) && (uVar6 = uVar6 & 0x7fffffffffff, *(char *)(uVar6 + 10) == '\x03'))
      {
        FUN_1804a9f00(lVar5 + 200,*(undefined8 *)(uVar6 + 0x58),
                      *(int *)(uVar6 + 0x30) - *(int *)(uVar6 + 0x58));
      }
      else {
        FUN_1804b8ff0(lVar5 + 200,0xf000035,*puVar2);
      }
    }
    uVar6 = FUN_180491d30(param_1,*(undefined8 *)(lVar5 + 0xd8),
                          *(int *)(lVar5 + 200) - *(int *)(lVar5 + 0xd8));
    *puVar7 = uVar6 | 0xfffd800000000000;
    param_2 = puVar7;
    if (iVar8 < 1) {
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
          *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
        if (-1 < param_3) {
          *(ulonglong *)(param_1 + 0x28) =
               *(longlong *)(param_1 + 0x20) +
               (ulonglong)
               *(byte *)(*(longlong *)
                          ((*(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff)
                          + 0x20) + -0x5d) * 8;
        }
        FUN_180491200(param_1);
      }
      return (ulonglong *)0x0;
    }
  }
  uVar6 = param_2[-1];
  uVar9 = 0xd;
  uVar4 = (uint)((longlong)uVar6 >> 0x2f);
  if (uVar4 == 0xfffffff4) {
    lVar5 = *(longlong *)((uVar6 & 0x7fffffffffff) + 0x20);
  }
  else if (uVar4 == 0xfffffff3) {
    lVar5 = *(longlong *)((uVar6 & 0x7fffffffffff) + 0x20);
  }
  else {
    if (uVar4 < 0xfffffff3) {
      uVar4 = 0xd;
    }
    else {
      uVar4 = ~uVar4;
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0 + (ulonglong)(uVar4 + 0x16) * 8);
  }
  if ((lVar5 == 0) ||
     (puVar2 = (ulonglong *)
               FUN_180492860(lVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1f0)),
     puVar2 == (ulonglong *)0x0)) {
    puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + 0xf8);
  }
  if (*puVar2 == 0xffffffffffffffff) {
    uVar4 = (uint)((longlong)*param_2 >> 0x2f);
    if ((uVar4 == 0xfffffff4) || (uVar4 == 0xfffffff3)) {
      lVar5 = *(longlong *)((*param_2 & 0x7fffffffffff) + 0x20);
    }
    else {
      if (0xfffffff2 < uVar4) {
        uVar9 = ~uVar4;
      }
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0 + (ulonglong)(uVar9 + 0x16) * 8);
    }
    if ((lVar5 == 0) ||
       (puVar2 = (ulonglong *)
                 FUN_180492860(lVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1f0)),
       puVar2 == (ulonglong *)0x0)) {
      puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + 0xf8);
    }
    if (*puVar2 == 0xffffffffffffffff) {
      uVar4 = (uint)((longlong)param_2[-1] >> 0x2f);
      if ((uVar4 == 0xfffffffb) || (uVar4 < 0xfffffff3)) {
        param_2 = param_2 + 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_180484560(param_1,param_2 + -1,0x1af);
    }
  }
  param_2[4] = *param_2;
  param_2[3] = param_2[-1];
  param_2[1] = *puVar2;
  param_2[-1] = (ulonglong)&DAT_1800033fb;
  *param_2 = 0xffffffffffffffff;
  param_2[2] = 0xffffffffffffffff;
  return param_2 + 3;
}



/* ===== 180494740 FUN_180494740 ===== */

ulonglong FUN_180494740(undefined8 param_1,ulonglong *param_2,ulonglong *param_3,uint param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  
  iVar8 = (int)((longlong)*param_2 >> 0x2f);
  if (iVar8 != -0xb) {
    iVar3 = (int)((longlong)*param_3 >> 0x2f);
    if (iVar3 != -0xb) {
      if ((iVar8 == -5) && (iVar3 == -5)) {
        uVar4 = FUN_180491b00(*param_2 & 0x7fffffffffff,*param_3 & 0x7fffffffffff);
        if ((param_4 & 2) == 0) {
          return (ulonglong)(param_4 & 1) ^ uVar4 >> 0x1f & 1;
        }
        return (ulonglong)(param_4 & 1) ^ (ulonglong)((int)uVar4 < 1);
      }
      puVar9 = &DAT_18000366e;
      if ((param_4 & 1) != 0) {
        puVar9 = &DAT_180003681;
      }
      uVar7 = ((param_4 & 2) != 0) + 6;
      plVar5 = (longlong *)FUN_180494e10(param_1,param_2,uVar7);
      lVar1 = *plVar5;
      puVar6 = param_3;
      while ((param_3 = puVar6, lVar1 == -1 &&
             (plVar5 = (longlong *)FUN_180494e10(param_1,param_3,uVar7), *plVar5 == -1))) {
        if ((param_4 & 2) == 0) goto LAB_1804948c9;
        param_4 = param_4 ^ 3;
        puVar9 = &DAT_18000366e;
        if ((param_4 & 1) != 0) {
          puVar9 = &DAT_180003681;
        }
        uVar7 = (param_4 & 2 | 0xc) >> 1;
        plVar5 = (longlong *)FUN_180494e10(param_1,param_3,uVar7);
        lVar1 = *plVar5;
        puVar6 = param_2;
        param_2 = param_3;
      }
      goto LAB_1804948a5;
    }
  }
  puVar9 = &DAT_18000366e;
  if ((param_4 & 1) != 0) {
    puVar9 = &DAT_180003681;
  }
  puVar6 = param_3;
  if (iVar8 == -0xb) {
    puVar6 = param_2;
  }
  plVar5 = (longlong *)FUN_180494e10(param_1,puVar6,(param_4 & 2 | 0xc) >> 1);
  if (*plVar5 == -1) {
LAB_1804948c9:
    FUN_180484330(param_1,param_2,param_3);
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
LAB_1804948a5:
  uVar4 = FUN_180495330(param_1,puVar9,plVar5,param_2,param_3);
  return uVar4;
}



/* ===== 1804948e0 FUN_1804948e0 ===== */

ulonglong * FUN_1804948e0(longlong param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  
  lVar3 = *(longlong *)(param_2 + 0x20);
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 10) & 0x10) == 0)) {
    plVar2 = (longlong *)FUN_180492860(lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1d0))
    ;
    if ((plVar2 == (longlong *)0x0) || (*plVar2 == -1)) {
      *(byte *)(lVar3 + 10) = *(byte *)(lVar3 + 10) | 0x10;
    }
    else {
      lVar3 = *(longlong *)(param_3 + 0x20);
      if (*(longlong *)(param_2 + 0x20) == lVar3) {
LAB_180494987:
        uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
        if (*(char *)(uVar4 + 10) == '\0') {
          puVar6 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x20) +
                   (ulonglong)*(byte *)(*(longlong *)(uVar4 + 0x20) + -0x5d) * 8);
        }
        else {
          puVar6 = *(undefined8 **)(param_1 + 0x28);
        }
        puVar6[1] = 0xffffffffffffffff;
        puVar5 = &DAT_18000366e;
        if (param_4 != 0) {
          puVar5 = &DAT_180003681;
        }
        *puVar6 = puVar5;
        puVar6[2] = *plVar2;
        puVar6[3] = 0xffffffffffffffff;
        uVar4 = (ulonglong)~(uint)*(byte *)(param_2 + 9) << 0x2f;
        puVar6[4] = uVar4 | param_2;
        puVar6[5] = uVar4 | param_3;
        return puVar6 + 4;
      }
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 10) & 0x10) == 0)) {
        lVar3 = FUN_1804942b0(lVar3,4,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1d0));
        if (lVar3 != 0) {
          iVar1 = FUN_18048f530(plVar2,lVar3);
          if (iVar1 != 0) goto LAB_180494987;
        }
      }
    }
  }
  return (ulonglong *)(longlong)param_4;
}



/* ===== 180494a30 FUN_180494a30 ===== */

ulonglong * FUN_180494a30(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong local_res8 [4];
  
  uVar4 = param_2 & 0xffffffff;
  puVar7 = &DAT_18000366e;
  if ((param_2 & 1) != 0) {
    puVar7 = &DAT_180003681;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  uVar9 = (uint)param_2 & 0xfe;
  puVar1 = (ulonglong *)(lVar2 + (param_2 >> 8 & 0xff) * 8);
  puVar5 = puVar1;
  if (uVar9 == 4) {
    puVar6 = (ulonglong *)(lVar2 + (uVar4 >> 0x10) * 8);
    if ((int)((longlong)*puVar1 >> 0x2f) != -0xb) {
      puVar5 = puVar6;
    }
  }
  else {
    if (uVar9 == 6) {
      local_res8[0] =
           *(ulonglong *)
            (*(longlong *)
              (*(longlong *)((*(ulonglong *)(lVar2 + -0x10) & 0x7fffffffffff) + 0x20) + -0x48) +
            ~(uVar4 >> 0x10) * 8) | 0xfffd800000000000;
    }
    else {
      if (uVar9 == 8) {
        puVar6 = (ulonglong *)
                 (*(longlong *)
                   (*(longlong *)((*(ulonglong *)(lVar2 + -0x10) & 0x7fffffffffff) + 0x20) + -0x48)
                 + (uVar4 >> 0x10) * 8);
        goto LAB_180494b0c;
      }
      local_res8[0] = ~((param_2 & 0xffff0000) << 0x1f);
    }
    puVar6 = local_res8;
  }
LAB_180494b0c:
  plVar3 = (longlong *)FUN_180494e10(param_1,puVar5,4);
  if (*plVar3 == -1) {
    return (ulonglong *)(ulonglong)((uint)param_2 & 1);
  }
  uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar4 + 10) == '\0') {
    puVar8 = (undefined8 *)
             (*(longlong *)(param_1 + 0x20) +
             (ulonglong)*(byte *)(*(longlong *)(uVar4 + 0x20) + -0x5d) * 8);
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0x28);
  }
  *puVar8 = puVar7;
  puVar8[1] = 0xffffffffffffffff;
  puVar8[2] = *plVar3;
  puVar8[3] = 0xffffffffffffffff;
  puVar8[4] = *puVar1;
  puVar8[5] = *puVar6;
  return puVar8 + 4;
}



/* ===== 180494b90 FUN_180494b90 ===== */

void FUN_180494b90(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)((longlong)*param_2 >> 0x2f);
  if ((0xfffffff2 < uVar1) &&
     ((uVar1 != 0xfffffffb || (iVar2 = FUN_1804972a0(*param_2 & 0x7fffffffffff), iVar2 == 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_180484550(param_1,0x2c9);
  }
  uVar1 = (uint)((longlong)param_2[1] >> 0x2f);
  if ((0xfffffff2 < uVar1) &&
     ((uVar1 != 0xfffffffb ||
      (iVar2 = FUN_1804972a0(param_2[1] & 0x7fffffffffff,param_2 + 1), iVar2 == 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_180484550(param_1,0x2ee);
  }
  uVar1 = (uint)((longlong)param_2[2] >> 0x2f);
  if (uVar1 < 0xfffffff3) {
    return;
  }
  if ((uVar1 != 0xfffffffb) ||
     (iVar2 = FUN_1804972a0(param_2[2] & 0x7fffffffffff,param_2 + 2), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_180484550(param_1,0x30b);
  }
  return;
}



/* ===== 180494c60 FUN_180494c60 ===== */

void FUN_180494c60(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar6 = 0;
  pcVar4 = 
  "__index__newindex__gc__mode__eq__len__lt__le__concat__call__add__sub__mul__div__mod__pow__unm__metatable__tostring__new__pairs__ipairs"
  ;
  do {
    cVar1 = pcVar4[2];
    pcVar5 = pcVar4 + 2;
    while ((cVar1 != '\0' && (*pcVar5 != '_'))) {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    uVar3 = FUN_180491d30(param_1,pcVar4,(longlong)pcVar5 - (longlong)pcVar4);
    *(undefined8 *)(lVar2 + 0x1b0 + uVar6 * 8) = uVar3;
    uVar6 = (ulonglong)((int)uVar6 + 1);
    pcVar4 = pcVar5;
  } while (*pcVar5 != '\0');
  return;
}



/* ===== 180494cd0 FUN_180494cd0 ===== */

void FUN_180494cd0(longlong param_1,int param_2,int param_3)

{
  *(ulonglong *)(param_1 + 0x28) =
       *(longlong *)(param_1 + 0x20) +
       (ulonglong)
       *(byte *)(*(longlong *)
                  ((*(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) + 0x20)
                + -0x5d) * 8;
  if (param_3 == 0xf) {
    FUN_1804a8bb0();
    return;
  }
  if (param_3 != 5) {
                    /* WARNING: Subroutine does not return */
    FUN_180484100(param_1,param_2 + 1,(&PTR_DAT_18056e940)[param_3 - 1]);
  }
  FUN_1804a8d10();
  return;
}



/* ===== 180494d30 FUN_180494d30 ===== */

ulonglong * FUN_180494d30(longlong param_1,ulonglong *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  plVar2 = (longlong *)FUN_180494e10(param_1,param_2,5);
  if (*plVar2 != -1) {
    uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
    if (*(char *)(uVar3 + 10) == '\0') {
      puVar4 = (undefined8 *)
               (*(longlong *)(param_1 + 0x20) +
               (ulonglong)*(byte *)(*(longlong *)(uVar3 + 0x20) + -0x5d) * 8);
    }
    else {
      puVar4 = *(undefined8 **)(param_1 + 0x28);
    }
    puVar4[1] = 0xffffffffffffffff;
    *puVar4 = &LAB_1800034b2;
    puVar4[2] = *plVar2;
    puVar4[3] = 0xffffffffffffffff;
    puVar4[4] = *param_2;
    puVar4[5] = *param_2;
    return puVar4 + 4;
  }
  if ((int)((longlong)*param_2 >> 0x2f) != -0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_180484560(param_1,param_2,0x1bb);
  }
  pbVar1 = (byte *)(*(longlong *)((*param_2 & 0x7fffffffffff) + 0x20) + 10);
  *pbVar1 = *pbVar1 | 0x20;
  return (ulonglong *)0x0;
}



/* ===== 180494e10 FUN_180494e10 ===== */

longlong FUN_180494e10(longlong param_1,ulonglong *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (uint)((longlong)*param_2 >> 0x2f);
  if ((uVar1 == 0xfffffff4) || (uVar1 == 0xfffffff3)) {
    lVar2 = *(longlong *)((*param_2 & 0x7fffffffffff) + 0x20);
  }
  else {
    if (uVar1 < 0xfffffff3) {
      uVar1 = 0xd;
    }
    else {
      uVar1 = ~uVar1;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0 + (ulonglong)(uVar1 + 0x16) * 8);
  }
  if ((lVar2 == 0) ||
     (lVar2 = FUN_180492860(lVar2,*(undefined8 *)
                                   (*(longlong *)(param_1 + 0x10) + 0x1b0 + (longlong)param_3 * 8)),
     lVar2 == 0)) {
    return *(longlong *)(param_1 + 0x10) + 0xf8;
  }
  return lVar2;
}



/* ===== 180494e90 FUN_180494e90 ===== */

undefined8 FUN_180494e90(ulonglong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -0x10) = *param_2;
  *puVar2 = 0;
  puVar2[2] = param_1 | 0xfffc800000000000;
  puVar2[1] = uVar3;
  puVar2[3] = (longlong)puVar2 + (0x22 - lVar1);
  *(undefined8 **)(param_1 + 0x28) = puVar2 + 4;
  *(undefined8 **)(param_1 + 0x20) = puVar2 + 4;
  return 0;
}



/* ===== 180494ee0 FUN_180494ee0 ===== */

longlong * FUN_180494ee0(longlong param_1,ulonglong *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  
  iVar7 = 0;
  while( true ) {
    uVar4 = *param_2;
    uVar1 = (uint)((longlong)uVar4 >> 0x2f);
    if (uVar1 == 0xfffffff4) {
      plVar2 = (longlong *)FUN_1804926a0(param_1,uVar4 & 0x7fffffffffff,param_3);
      if (((*plVar2 != -1) || (lVar5 = *(longlong *)((uVar4 & 0x7fffffffffff) + 0x20), lVar5 == 0))
         || ((*(byte *)(lVar5 + 10) & 1) != 0)) {
        return plVar2;
      }
      puVar3 = (ulonglong *)
               FUN_180492860(lVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1b0));
      if ((puVar3 == (ulonglong *)0x0) || (*puVar3 == 0xffffffffffffffff)) {
        *(byte *)(lVar5 + 10) = *(byte *)(lVar5 + 10) | 1;
        return plVar2;
      }
    }
    else {
      if (uVar1 == 0xfffffff3) {
        lVar5 = *(longlong *)((uVar4 & 0x7fffffffffff) + 0x20);
      }
      else {
        if (uVar1 < 0xfffffff3) {
          uVar1 = 0xd;
        }
        else {
          uVar1 = ~uVar1;
        }
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0 + (ulonglong)(uVar1 + 0x16) * 8)
        ;
      }
      if ((lVar5 == 0) ||
         (puVar3 = (ulonglong *)
                   FUN_180492860(lVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1b0)),
         puVar3 == (ulonglong *)0x0)) {
        puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + 0xf8);
      }
      if (*puVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_180484560(param_1,param_2,0x193);
      }
    }
    if ((int)((longlong)*puVar3 >> 0x2f) == -9) {
      uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
      if (*(char *)(uVar4 + 10) == '\0') {
        puVar6 = (undefined8 *)
                 (*(longlong *)(param_1 + 0x20) +
                 (ulonglong)*(byte *)(*(longlong *)(uVar4 + 0x20) + -0x5d) * 8);
      }
      else {
        puVar6 = *(undefined8 **)(param_1 + 0x28);
      }
      puVar6[1] = 0xffffffffffffffff;
      *puVar6 = &LAB_1800034b2;
      puVar6[2] = *puVar3;
      puVar6[3] = 0xffffffffffffffff;
      puVar6[4] = *param_2;
      puVar6[5] = *param_3;
      *(undefined8 **)(param_1 + 0x28) = puVar6 + 4;
      return (longlong *)0x0;
    }
    iVar7 = iVar7 + 1;
    if (99 < iVar7) break;
    param_2 = puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180484550(param_1,0x16c);
}



/* ===== 1804950a0 FUN_1804950a0 ===== */

longlong * FUN_1804950a0(longlong param_1,ulonglong *param_2,double *param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong local_38 [2];
  
  iVar7 = 0;
  do {
    uVar6 = *param_2;
    uVar1 = (uint)((longlong)uVar6 >> 0x2f);
    if (uVar1 == 0xfffffff4) {
      uVar6 = uVar6 & 0x7fffffffffff;
      plVar2 = (longlong *)FUN_1804926a0(param_1,uVar6,param_3);
      if (*plVar2 != -1) {
        *(undefined1 *)(uVar6 + 10) = 0;
        if ((*(byte *)(uVar6 + 8) & 4) == 0) {
          return plVar2;
        }
        lVar4 = *(longlong *)(param_1 + 0x10);
        *(byte *)(uVar6 + 8) = *(byte *)(uVar6 + 8) & 0xfb;
        *(undefined8 *)(uVar6 + 0x18) = *(undefined8 *)(lVar4 + 0x40);
        *(ulonglong *)(lVar4 + 0x40) = uVar6;
        return plVar2;
      }
      lVar4 = *(longlong *)(uVar6 + 0x20);
      if ((lVar4 == 0) || ((*(byte *)(lVar4 + 10) & 2) != 0)) {
LAB_1804951de:
        *(undefined1 *)(uVar6 + 10) = 0;
        if ((*(byte *)(uVar6 + 8) & 4) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x10);
          *(byte *)(uVar6 + 8) = *(byte *)(uVar6 + 8) & 0xfb;
          *(undefined8 *)(uVar6 + 0x18) = *(undefined8 *)(lVar4 + 0x40);
          *(ulonglong *)(lVar4 + 0x40) = uVar6;
        }
        if (plVar2 != (longlong *)(*(longlong *)(param_1 + 0x10) + 0xf8)) {
          return plVar2;
        }
        if (*param_3 == -NAN) {
                    /* WARNING: Subroutine does not return */
          FUN_180484550(param_1,0xad);
        }
        if (((uint)((longlong)*param_3 >> 0x2f) < 0xfffffff2) && (NAN(*param_3))) {
                    /* WARNING: Subroutine does not return */
          FUN_180484550(param_1,0x9a);
        }
        plVar2 = (longlong *)FUN_180492c50(param_1,uVar6,param_3);
        return plVar2;
      }
      puVar3 = (ulonglong *)
               FUN_180492860(lVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1b8));
      if ((puVar3 == (ulonglong *)0x0) || (*puVar3 == 0xffffffffffffffff)) {
        *(byte *)(lVar4 + 10) = *(byte *)(lVar4 + 10) | 2;
        goto LAB_1804951de;
      }
    }
    else {
      if (uVar1 == 0xfffffff3) {
        lVar4 = *(longlong *)((uVar6 & 0x7fffffffffff) + 0x20);
      }
      else {
        if (uVar1 < 0xfffffff3) {
          uVar1 = 0xd;
        }
        else {
          uVar1 = ~uVar1;
        }
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0 + (ulonglong)(uVar1 + 0x16) * 8)
        ;
      }
      if ((lVar4 == 0) ||
         (puVar3 = (ulonglong *)
                   FUN_180492860(lVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1b8)),
         puVar3 == (ulonglong *)0x0)) {
        puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + 0xf8);
      }
      if (*puVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_180484560(param_1,param_2,0x193);
      }
    }
    if ((int)((longlong)*puVar3 >> 0x2f) == -9) {
      uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
      if (*(char *)(uVar6 + 10) == '\0') {
        puVar5 = (undefined8 *)
                 (*(longlong *)(param_1 + 0x20) +
                 (ulonglong)*(byte *)(*(longlong *)(uVar6 + 0x20) + -0x5d) * 8);
      }
      else {
        puVar5 = *(undefined8 **)(param_1 + 0x28);
      }
      puVar5[1] = 0xffffffffffffffff;
      *puVar5 = &LAB_1800035a9;
      puVar5[2] = *puVar3;
      puVar5[3] = 0xffffffffffffffff;
      puVar5[4] = *param_2;
      puVar5[5] = *param_3;
      *(undefined8 **)(param_1 + 0x28) = puVar5 + 4;
      return (longlong *)0x0;
    }
    iVar7 = iVar7 + 1;
    local_38[0] = *puVar3;
    if (99 < iVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_180484550(param_1,0x17d);
    }
    param_2 = local_38;
  } while( true );
}



/* ===== 180495330 FUN_180495330 ===== */

void FUN_180495330(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar1 + 10) == '\0') {
    puVar2 = (undefined8 *)
             (*(longlong *)(param_1 + 0x20) +
             (ulonglong)*(byte *)(*(longlong *)(uVar1 + 0x20) + -0x5d) * 8);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x28);
  }
  *puVar2 = param_2;
  puVar2[1] = 0xffffffffffffffff;
  puVar2[2] = *param_3;
  puVar2[3] = 0xffffffffffffffff;
  puVar2[4] = *param_4;
  puVar2[5] = *param_5;
  return;
}



/* ===== 1804953a0 FUN_1804953a0 ===== */

ulonglong * FUN_1804953a0(ulonglong *param_1,ulonglong *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)((longlong)*param_1 >> 0x2f);
  if (0xfffffff1 < uVar1) {
    if (uVar1 != 0xfffffffb) {
      return (ulonglong *)0x0;
    }
    iVar2 = FUN_1804972a0(*param_1 & 0x7fffffffffff);
    param_1 = (ulonglong *)0x0;
    if (iVar2 != 0) {
      param_1 = param_2;
    }
  }
  return param_1;
}



/* ===== 1804953f0 FUN_1804953f0 ===== */

longlong FUN_1804953f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (ulonglong)(uint)(*(int *)(param_2 + 0xc) - *(int *)(param_2 + 0x28)) * 8;
  lVar2 = FUN_180491760(param_1,0,0,
                        lVar1 + (((ulonglong)*(ushort *)(param_2 + 10) + 10) * 3 +
                                (ulonglong)*(uint *)(param_2 + 0x2c)) * 4 & 0xffffffff);
  *(undefined2 *)(lVar2 + 8) = 0x900;
  *(undefined2 *)(lVar2 + 0x68) = 0;
  *(ulonglong *)(lVar2 + 0x20) = lVar2 + 0x78 + (ulonglong)*(uint *)(param_2 + 0x28) * -8;
  *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined2 *)(lVar2 + 10) = *(undefined2 *)(param_2 + 10);
  *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  FUN_180540530(lVar2 + 0x78,
                *(longlong *)(param_2 + 0x20) + (ulonglong)*(uint *)(param_2 + 0x28) * 8,lVar1);
  return lVar2;
}



/* ===== 1804954a0 FUN_1804954a0 ===== */

void FUN_1804954a0(longlong param_1,int param_2)

{
  double *pdVar1;
  
  *(undefined8 *)(param_1 + 0xc20) = 0xffffffffffffffff;
  pdVar1 = *(double **)(*(longlong *)(param_1 + 0x80) + 0x28);
  *(double **)(*(longlong *)(param_1 + 0x80) + 0x28) = pdVar1 + 1;
  *pdVar1 = (double)param_2;
                    /* WARNING: Subroutine does not return */
  FUN_180484920(*(undefined8 *)(param_1 + 0x80),2);
}



/* ===== 1804954f0 FUN_1804954f0 ===== */

void FUN_1804954f0(longlong param_1,int param_2)

{
  double *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = *(double **)(*(longlong *)(param_1 + 0x80) + 0x28);
  *(double **)(*(longlong *)(param_1 + 0x80) + 0x28) = pdVar1 + 1;
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *pdVar1 = (double)param_2;
                    /* WARNING: Subroutine does not return */
  FUN_180484920(uVar2,2);
}



/* ===== 180495530 FUN_180495530 ===== */

int FUN_180495530(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  double *pdVar7;
  byte bVar8;
  DWORD dwErrCode;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong local_48;
  undefined8 local_40;
  uint *local_38;
  
  puVar11 = (undefined4 *)FUN_18051bfb0();
  uVar2 = *puVar11;
  dwErrCode = GetLastError();
  iVar10 = *(int *)(param_1 + 0xbd0);
  uVar14 = 0xffffffffffffffff;
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (iVar10 != 0) {
    *(undefined4 *)(param_1 + 0xbd0) = 0;
    uVar14 = *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + -8);
  }
  local_48 = param_1;
  local_40 = param_2;
  iVar9 = FUN_180003349(lVar4,0,&local_48,FUN_1804963a0);
  if (iVar9 != 0) {
    return -iVar9;
  }
  if (iVar10 != 0) {
    puVar5 = *(undefined8 **)(lVar4 + 0x28);
    *(undefined8 **)(lVar4 + 0x28) = puVar5 + 1;
    *puVar5 = uVar14;
  }
  lVar6 = *(longlong *)(lVar4 + 0x10);
  if ((-1 < *(char *)(lVar6 + 0x91)) && ((*(byte *)(lVar6 + 0x93) & 8) != 0)) {
    lVar6 = *(longlong *)(lVar6 + 0x118);
    lVar12 = FUN_1804b8c00(lVar6,0x94ef9583);
    if (lVar12 != 0) {
      if (*(longlong *)(lVar6 + 0x30) - *(longlong *)(lVar6 + 0x28) < 0x1c1) {
        FUN_18048e920(lVar6,0x38);
      }
      pdVar7 = *(double **)(lVar6 + 0x28);
      *(double **)(lVar6 + 0x28) = pdVar7 + 1;
      *pdVar7 = (double)*(int *)(param_1 + 0xbc8);
      pdVar7 = *(double **)(lVar6 + 0x28);
      *(double **)(lVar6 + 0x28) = pdVar7 + 1;
      *pdVar7 = (double)*(int *)(param_1 + 0xbcc);
      FUN_1804963e0(lVar6,param_2);
      FUN_1804b8af0(lVar6,lVar12);
    }
  }
  *(uint **)((*(ulonglong *)(lVar4 + 0x50) & 0xfffffffffffffffc) + 0x60) = local_38;
  if (iVar10 != 0) {
    return -iVar10;
  }
  bVar8 = *(byte *)(*(longlong *)(lVar4 + 0x10) + 0x91);
  if (-1 < (char)bVar8) {
    cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0x21);
    if ((cVar1 == '\x02') || (cVar1 == '\x05')) {
      if ((bVar8 & 0x40) == 0) {
        FUN_180491200(lVar4);
      }
    }
    else if ((((*(byte *)(param_1 + 0xa8) & 1) != 0) && ((*(byte *)(param_1 + -599) & 0x60) == 0))
            && (*(char *)((*(ulonglong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + -0x10) &
                          0x7fffffffffff) + 10) == '\0')) {
      lVar6 = *(longlong *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x180) + (ulonglong)*(uint *)(param_1 + 0xbc8) * 8) + 0x30
               );
      cVar1 = *(char *)(lVar6 + 0xb + (ulonglong)*(uint *)(param_1 + 0xbcc) * 0xc);
      if ((cVar1 != -1) &&
         (bVar8 = cVar1 + 1,
         *(byte *)(lVar6 + 0xb + (ulonglong)*(uint *)(param_1 + 0xbcc) * 0xc) = bVar8,
         *(int *)(param_1 + 0x680) <= (int)(uint)bVar8)) {
        *(undefined4 *)(param_1 + 0xec) = 0x13;
        FUN_180495d20(param_1,local_38);
      }
    }
  }
  puVar11 = (undefined4 *)FUN_18051bfb0();
  *puVar11 = uVar2;
  SetLastError(dwErrCode);
  uVar3 = *local_38;
  uVar13 = uVar3 & 0xff;
  if (uVar13 == 0x3f) {
    iVar10 = (int)(*(longlong *)(lVar4 + 0x28) - *(longlong *)(lVar4 + 0x20) >> 3);
  }
  else {
    if ((uVar13 - 0x41 & 0xfffffffd) == 0) {
      return (((int)(*(longlong *)(lVar4 + 0x28) - *(longlong *)(lVar4 + 0x20) >> 3) -
              (uVar3 >> 8 & 0xff)) - (uVar3 >> 0x10 & 0xff)) + -1;
    }
    if (uVar13 != 0x49) {
      if (uVar13 == 0x57) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar3 >> 0x10) * 8);
        uVar13 = *(uint *)(lVar4 + 0x50) & 0xff;
        if ((uVar13 - 0x49 < 4) || (uVar13 == 0x46)) {
          if (*(int *)(param_1 + 0xec) != 0x11) {
            return -0x11;
          }
          *(uint *)(param_1 + 0xbe0) = uVar3;
          *(uint **)(param_1 + 0xbd8) = local_38;
          *local_38 = *(uint *)(lVar4 + 0x50);
          *(undefined1 *)(param_1 + 0xb7) = 1;
        }
        return 0;
      }
      if (uVar13 < 0x60) {
        return 0;
      }
      iVar10 = (int)(*(longlong *)(lVar4 + 0x28) - *(longlong *)(lVar4 + 0x20) >> 3);
      goto LAB_180495849;
    }
    iVar10 = (int)(*(longlong *)(lVar4 + 0x28) - *(longlong *)(lVar4 + 0x20) >> 3) - (uVar3 >> 0x10)
    ;
  }
  iVar10 = iVar10 - (uVar3 >> 8 & 0xff);
LAB_180495849:
  return iVar10 + 1;
}



/* ===== 180495870 FUN_180495870 ===== */

void FUN_180495870(longlong param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((((param_2 == 0) || (*(uint *)(param_1 + 0x18c) <= param_2)) ||
      (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)param_2 * 8), lVar3 == 0))
     || (*(short *)(lVar3 + 0x6c) != 0)) {
    return;
  }
  uVar1 = *(ushort *)(*(longlong *)(lVar3 + 0x40) + 0x3e);
  if (uVar1 == *(ushort *)(lVar3 + 0x68)) {
    *(undefined2 *)(*(longlong *)(lVar3 + 0x40) + 0x3e) = *(undefined2 *)(lVar3 + 0x6e);
  }
  else {
    if (uVar1 == 0) {
      return;
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)uVar1 * 8);
    if (lVar6 == 0) {
      return;
    }
    if (*(short *)(lVar6 + 0x6e) == 0) {
      return;
    }
    while (*(ushort *)(lVar6 + 0x6e) != *(ushort *)(lVar3 + 0x68)) {
      lVar6 = *(longlong *)
               (*(longlong *)(param_1 + 0x180) + (ulonglong)*(ushort *)(lVar6 + 0x6e) * 8);
      if (*(short *)(lVar6 + 0x6e) == 0) {
        return;
      }
    }
    *(undefined2 *)(lVar6 + 0x6e) = *(undefined2 *)(lVar3 + 0x6e);
  }
  uVar2 = *(uint *)(lVar3 + 0x50);
  if ((char)uVar2 != 'X') {
    puVar4 = *(uint **)(lVar3 + 0x48);
    if ((*puVar4 & 0xff) == 0x51) {
      *puVar4 = uVar2;
      *(undefined1 *)(puVar4 + ((ulonglong)(*(uint *)(lVar3 + 0x50) >> 0x10) - 0x8000)) = 0x4d;
    }
    else {
      uVar5 = (*puVar4 & 0xff) - 0x54;
      if ((uVar5 < 0xf) && ((0x4009U >> (uVar5 & 0x1f) & 1) != 0)) {
        *puVar4 = uVar2;
        return;
      }
    }
  }
  return;
}



/* ===== 1804958a0 FUN_1804958a0 ===== */

undefined8 FUN_1804958a0(longlong param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((*(byte *)(lVar1 + 0x91) & 0x40) != 0) {
    return 1;
  }
  lVar4 = (ulonglong)*(uint *)(lVar1 + 0x474) - 1;
  if (1 < *(uint *)(lVar1 + 0x474)) {
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x468) + lVar4 * 8);
      if (lVar5 != 0) {
        if (*(short *)(lVar5 + 0x6c) == 0) {
          FUN_1804967b0(lVar1 + 0x2e8,lVar5);
        }
        *(undefined4 *)(lVar5 + 0x68) = 0;
        *(undefined8 *)(*(longlong *)(lVar1 + 0x468) + lVar4 * 8) = 0;
      }
      lVar4 = lVar4 + -1;
    } while (0 < lVar4);
  }
  *(undefined2 *)(lVar1 + 0x350) = 0;
  *(undefined4 *)(lVar1 + 0x470) = 0;
  FUN_180540170(lVar1 + 0xa08,0,0x400);
  FUN_1804bc140(lVar1 + 0x2e8);
  *(undefined8 *)(lVar1 + 0x988) = 0;
  *(undefined8 *)(lVar1 + 0x990) = 0;
  *(undefined8 *)(lVar1 + 0x998) = 0;
  *(undefined8 *)(lVar1 + 0x9a0) = 0;
  *(undefined8 *)(lVar1 + 0x9a8) = 0;
  *(undefined8 *)(lVar1 + 0x9b0) = 0;
  *(undefined8 *)(lVar1 + 0x9b8) = 0;
  *(undefined8 *)(lVar1 + 0x9c0) = 0;
  *(undefined8 *)(lVar1 + 0x9c8) = 0;
  *(undefined8 *)(lVar1 + 0x9d0) = 0;
  *(undefined8 *)(lVar1 + 0x9d8) = 0;
  *(undefined8 *)(lVar1 + 0x9e0) = 0;
  *(undefined8 *)(lVar1 + 0x9e8) = 0;
  *(undefined8 *)(lVar1 + 0x9f0) = 0;
  *(undefined8 *)(lVar1 + 0x9f8) = 0;
  *(undefined8 *)(lVar1 + 0xa00) = 0;
  if ((*(byte *)(lVar1 + 0x93) & 2) != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x118);
    lVar4 = FUN_1804b8c00(lVar1,0x96c8a339);
    if (lVar4 != 0) {
      puVar2 = *(ulonglong **)(lVar1 + 0x28);
      *(ulonglong **)(lVar1 + 0x28) = puVar2 + 1;
      uVar3 = FUN_180491d30(lVar1,"flush",5);
      *puVar2 = uVar3 | 0xfffd800000000000;
      FUN_1804b8af0(lVar1,lVar4);
    }
  }
  return 0;
}



/* ===== 180495a00 FUN_180495a00 ===== */

void FUN_180495a00(longlong param_1,longlong param_2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar1 = *(ushort *)(param_2 + 0x3e);
  do {
    if (uVar1 == 0) {
      return;
    }
    lVar4 = *(longlong *)(param_1 + 0x468);
    lVar5 = *(longlong *)(lVar4 + (ulonglong)uVar1 * 8);
    uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x40) + 0x3e);
    if (uVar1 == *(ushort *)(lVar5 + 0x68)) {
      *(undefined2 *)(*(longlong *)(lVar5 + 0x40) + 0x3e) = *(undefined2 *)(lVar5 + 0x6e);
LAB_180495a7f:
      uVar3 = *(uint *)(lVar5 + 0x50);
      if ((char)uVar3 != 'X') {
        puVar7 = *(uint **)(lVar5 + 0x48);
        if ((*puVar7 & 0xff) == 0x51) {
          *puVar7 = uVar3;
          *(undefined1 *)(puVar7 + ((ulonglong)(*(uint *)(lVar5 + 0x50) >> 0x10) - 0x8000)) = 0x4d;
        }
        else {
          uVar8 = (*puVar7 & 0xff) - 0x54;
          if ((uVar8 < 0xf) && ((0x4009U >> (uVar8 & 0x1f) & 1) != 0)) {
            *puVar7 = uVar3;
          }
        }
      }
    }
    else if ((uVar1 != 0) && (lVar6 = *(longlong *)(lVar4 + (ulonglong)uVar1 * 8), lVar6 != 0)) {
      sVar2 = *(short *)(lVar6 + 0x6e);
      while (sVar2 != 0) {
        if (*(ushort *)(lVar6 + 0x6e) == *(ushort *)(lVar5 + 0x68)) {
          *(undefined2 *)(lVar6 + 0x6e) = *(undefined2 *)(lVar5 + 0x6e);
          goto LAB_180495a7f;
        }
        lVar6 = *(longlong *)(lVar4 + (ulonglong)*(ushort *)(lVar6 + 0x6e) * 8);
        sVar2 = *(short *)(lVar6 + 0x6e);
      }
    }
    uVar1 = *(ushort *)(param_2 + 0x3e);
  } while( true );
}



/* ===== 180495ae0 FUN_180495ae0 ===== */

void FUN_180495ae0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_2 + 0x68);
  if (uVar2 != 0) {
    if ((uint)uVar2 < *(uint *)(param_1 + 0x8e)) {
      *(uint *)(param_1 + 0x8e) = (uint)uVar2;
    }
    *(undefined8 *)(param_1[0x8d] + (ulonglong)*(ushort *)(param_2 + 0x68) * 8) = 0;
  }
  lVar1 = ((ulonglong)*(uint *)(param_2 + 0x2c) +
          (ulonglong)*(ushort *)(param_2 + 10) * 3 +
          (ulonglong)(uint)(*(int *)(param_2 + 0xc) - *(int *)(param_2 + 0x28)) * 2) * 4 + 0x78;
  param_1[2] = param_1[2] - lVar1;
                    /* WARNING: Could not recover jumptable at 0x000180495b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_1[1],param_2,lVar1,0);
  return;
}



/* ===== 180495b50 FUN_180495b50 ===== */

void FUN_180495b50(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_1804bc140(param_1 + 0x5d);
  param_1[2] = param_1[2] + (ulonglong)*(uint *)(param_1 + 0x8b) * -4;
  (*(code *)*param_1)(param_1[1],param_1[0x8a],(ulonglong)*(uint *)(param_1 + 0x8b) * 4,0);
  param_1[2] = param_1[2] + (ulonglong)*(uint *)((longlong)param_1 + 0x444) * -0xc;
  (*(code *)*param_1)(param_1[1],param_1[0x89],(ulonglong)*(uint *)((longlong)param_1 + 0x444) * 0xc
                      ,0);
  uVar1 = (ulonglong)(*(int *)(param_1 + 0x87) - *(uint *)((longlong)param_1 + 0x43c));
  param_1[2] = param_1[2] + uVar1 * -8;
  (*(code *)*param_1)(param_1[1],param_1[0x86] + (ulonglong)*(uint *)((longlong)param_1 + 0x43c) * 8
                      ,uVar1 * 8,0);
  param_1[2] = param_1[2] + (ulonglong)*(uint *)((longlong)param_1 + 0x474) * -8;
                    /* WARNING: Could not recover jumptable at 0x000180495bff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_1[1],param_1[0x8d],(ulonglong)*(uint *)((longlong)param_1 + 0x474) * 8,0
                     );
  return;
}



/* ===== 180495c10 FUN_180495c10 ===== */

void FUN_180495c10(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  DWORD dwErrCode;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_18051bfb0();
  uVar1 = *puVar2;
  dwErrCode = GetLastError();
  *(short *)(param_1 + 0xc38 + (ulonglong)((uint)((param_2 & 0xffffffff) >> 2) & 0x3f) * 2) =
       *(short *)(param_1 + 0x67c) * 2;
  if ((*(int *)(param_1 + 0xec) == 0) && ((*(byte *)(param_1 + -599) & 0x60) == 0)) {
    *(undefined4 *)(param_1 + 0xec) = 0x13;
    *(undefined8 *)(param_1 + 0xbc8) = 0;
    FUN_180495d20(param_1,param_2 - 4);
  }
  puVar2 = (undefined4 *)FUN_18051bfb0();
  *puVar2 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000180495c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}



/* ===== 180495ca0 FUN_180495ca0 ===== */

void FUN_180495ca0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x3ffU & 0xfffffffffffffff0);
  *puVar1 = 0x7fffffffffffffff;
  puVar1[1] = 0x7fffffffffffffff;
  puVar1 = (undefined8 *)(param_1 + 0x40fU & 0xfffffffffffffff0);
  *puVar1 = 0x8000000000000000;
  puVar1[1] = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x418) = 0xc3f0000000000000;
  *(undefined8 *)(param_1 + 0x420) = 0x4338000000000000;
  *(undefined8 *)(param_1 + 0x428) = 0x43f0000000000000;
  *(undefined4 *)(param_1 + 0x3ec) = 0xdf800000;
  return;
}



/* ===== 180495d20 FUN_180495d20 ===== */

void FUN_180495d20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x88) = param_2;
  uVar2 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + -0x10) &
          0x7fffffffffff;
  *(ulonglong *)(param_1 + 0x90) = uVar2;
  if (*(char *)(uVar2 + 10) == '\0') {
    lVar3 = *(longlong *)(uVar2 + 0x20) + -0x68;
  }
  else {
    lVar3 = 0;
  }
  *(longlong *)(param_1 + 0x98) = lVar3;
  iVar1 = FUN_180003349(*(longlong *)(param_1 + 0x80),0,param_1,FUN_180496c30);
  while (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xec) = 0x16;
    iVar1 = FUN_180003349(*(undefined8 *)(param_1 + 0x80),0,param_1,FUN_180496c30);
  }
  return;
}



/* ===== 180495db0 FUN_180495db0 ===== */

void FUN_180495db0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x3d) & 0x10) != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xef;
    if (*(char *)(param_1 + 0x68) == 'a') {
      *(undefined1 *)(param_1 + 0x68) = 0x60;
    }
    uVar4 = 1;
    if (1 < uVar2) {
      do {
        uVar3 = *(uint *)(param_1 + 0x68 + (ulonglong)uVar4 * 4);
        uVar1 = (uVar3 & 0xff) - 0x50;
        if ((uVar1 < 7) && ((0x49U >> (uVar1 & 0x1f) & 1) != 0)) {
          *(char *)(param_1 + 0x68 + (ulonglong)uVar4 * 4) = (char)uVar3 + -1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
  }
  return;
}



/* ===== 180495e10 FUN_180495e10 ===== */

void FUN_180495e10(longlong param_1)

{
  if ((*(int *)(param_1 + 0xec) == 0) && ((*(byte *)(param_1 + -599) & 0x60) == 0)) {
    *(undefined4 *)(param_1 + 0xbc8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0x13;
    FUN_180495d20();
    return;
  }
  return;
}



/* ===== 180495e40 FUN_180495e40 ===== */

longlong FUN_180495e40(longlong param_1,ulonglong param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)*(uint *)(param_1 + -0x230) * 8)
  ;
  if (((lVar1 == 0) || (uVar2 = *(ulonglong *)(lVar1 + 0x58), param_2 < uVar2)) ||
     (*(uint *)(lVar1 + 0x54) + uVar2 <= param_2)) {
    return 0;
  }
  uVar5 = (uint)*(ushort *)(lVar1 + 10);
  uVar4 = 0;
  do {
    uVar3 = uVar5 + uVar4 >> 1;
    if ((ulonglong)*(ushort *)(*(longlong *)(lVar1 + 0x30) + 6 + (ulonglong)uVar3 * 0xc) <=
        param_2 - uVar2) {
      uVar4 = uVar3 + 1;
      uVar3 = uVar5;
    }
    uVar5 = uVar3;
  } while (uVar4 < uVar5);
  uVar5 = uVar5 - 1;
  *param_3 = uVar5;
  return (ulonglong)((uVar5 & 0x1f) << 2) +
         *(longlong *)(param_1 + 0x6a0 + (ulonglong)(uVar5 >> 5) * 8);
}



/* ===== 180495ef0 FUN_180495ef0 ===== */

undefined8 FUN_180495ef0(longlong param_1)

{
  byte *pbVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined2 uVar11;
  double *pdVar12;
  ulonglong *puVar13;
  uint uVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  longlong lVar17;
  int iVar18;
  int local_res8;
  
  lVar3 = *(longlong *)(param_1 + 0x80);
  iVar18 = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  FUN_1804bc080();
  lVar4 = *(longlong *)(param_1 + 0x78);
  if (lVar4 != 0) {
    uVar2 = *(ushort *)(lVar4 + 0x68);
    if (uVar2 != 0) {
      if ((uint)uVar2 < *(uint *)(param_1 + 0x188)) {
        *(uint *)(param_1 + 0x188) = (uint)uVar2;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x180) + (ulonglong)*(ushort *)(lVar4 + 0x68) * 8) = 0
      ;
    }
    lVar8 = ((ulonglong)*(uint *)(lVar4 + 0x2c) +
            (ulonglong)*(ushort *)(lVar4 + 10) * 3 +
            (ulonglong)(uint)(*(int *)(lVar4 + 0xc) - *(int *)(lVar4 + 0x28)) * 2) * 4 + 0x78;
    *(longlong *)(param_1 + -0x2d8) = *(longlong *)(param_1 + -0x2d8) - lVar8;
    (**(code **)(param_1 + -0x2e8))(*(undefined8 *)(param_1 + -0x2e0),lVar4,lVar8,0);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  pdVar12 = (double *)(*(longlong *)(lVar3 + 0x28) + -8);
  if (((uint)((longlong)*pdVar12 >> 0x2f) < 0xfffffff3) && (iVar18 = (int)*pdVar12, iVar18 == 0x1d))
  {
    *(double **)(lVar3 + 0x28) = pdVar12;
    *(undefined4 *)(param_1 + 0xec) = 0x15;
    return 1;
  }
  if ((*(int *)(param_1 + 0xbc8) == 0) && (3 < *(byte *)(param_1 + 0x50) - 0x49)) {
    uVar14 = *(uint *)(param_1 + 0xbcc);
    if (uVar14 == 0) {
      pcVar5 = *(char **)(param_1 + 0x48);
      if (iVar18 == 6) {
        *(undefined2 *)(param_1 + 0xc38 + (ulonglong)((int)pcVar5 + 4U >> 2 & 0x3f) * 2) = 1;
      }
      else {
        uVar9 = 0;
        do {
          if (*(char **)(param_1 + 0x720 + uVar9 * 0x10) == pcVar5) {
            uVar2 = *(ushort *)(param_1 + 0x728 + uVar9 * 0x10);
            lVar4 = *(longlong *)(param_1 + 0x40);
            uVar14 = FUN_1804b67c0(param_1 + -0x158);
            uVar14 = (uVar14 & 0xf) + (uint)uVar2 * 2;
            uVar11 = (undefined2)uVar14;
            if (uVar14 < 0xea61) goto LAB_180496068;
            if ((char)*(undefined4 *)pcVar5 == 'F') {
              *pcVar5 = 'E';
              pcVar5[(ulonglong)(*(uint *)(pcVar5 + 4) >> 0x10) * 4 + -0x1fffc] = 'X';
            }
            else {
              *pcVar5 = (char)*(undefined4 *)pcVar5 + '\x01';
              pbVar1 = (byte *)(lVar4 + 0x3d);
              *pbVar1 = *pbVar1 | 0x10;
            }
            goto LAB_1804960f4;
          }
          uVar14 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar14;
        } while (uVar14 < 0x40);
        uVar9 = (ulonglong)*(uint *)(param_1 + 0xb20);
        uVar11 = 0x48;
        *(uint *)(param_1 + 0xb20) = *(uint *)(param_1 + 0xb20) + 1 & 0x3f;
        *(char **)(param_1 + (uVar9 + 0x72) * 0x10) = pcVar5;
LAB_180496068:
        *(undefined2 *)(param_1 + 0x728 + uVar9 * 0x10) = uVar11;
        *(short *)(param_1 + 0x72a + uVar9 * 0x10) = (short)iVar18;
        *(undefined2 *)(param_1 + 0xc38 + (ulonglong)((int)pcVar5 + 4U >> 2 & 0x3f) * 2) = uVar11;
      }
    }
    else {
      *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)uVar14 * 8) + 0x6a) =
           (short)uVar14;
    }
  }
LAB_1804960f4:
  uVar2 = *(ushort *)(param_1 + 0x68);
  if (uVar2 != 0) {
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined1 *)(param_1 + 0x74) = 0;
    if ((*(byte *)(param_1 + -0x255) & 2) != 0) {
      lVar4 = *(longlong *)(param_1 + -0x1d0);
      lVar8 = FUN_1804b8c00(lVar4,0x96c8a339);
      if (lVar8 != 0) {
        puVar15 = *(ulonglong **)(lVar4 + 0x28);
        lVar6 = *(longlong *)(lVar3 + 0x38);
        local_res8 = 0;
        *(ulonglong **)(lVar4 + 0x28) = puVar15 + 1;
        uVar9 = FUN_180491d30(lVar4,"abort",5);
        *puVar15 = uVar9 | 0xfffd800000000000;
        pdVar12 = *(double **)(lVar4 + 0x28);
        *(double **)(lVar4 + 0x28) = pdVar12 + 1;
        lVar17 = *(longlong *)(lVar3 + 0x20);
        puVar15 = (ulonglong *)(lVar17 + -8);
        *pdVar12 = (double)uVar2;
        puVar13 = puVar15;
        if (*(char *)((*(ulonglong *)(lVar17 + -0x10) & 0x7fffffffffff) + 10) == '\0') {
          lVar17 = *(longlong *)(param_1 + 0x88);
        }
        else {
          do {
            uVar9 = *puVar13;
            puVar15 = (ulonglong *)((longlong)puVar13 - (uVar9 & 0xfffffffffffffff8));
            if ((uVar9 & 3) == 0) {
              puVar16 = (ulonglong *)
                        ((longlong)puVar13 - ((ulonglong)*(byte *)(uVar9 - 3) * 8 + 0x10));
            }
            else {
              puVar16 = puVar15;
            }
            if (puVar16 <= (ulonglong *)(lVar6 + 8)) goto LAB_180496257;
            if (((byte)uVar9 & 7) == 2) {
              uVar10 = puVar13[-2];
            }
            else {
              uVar10 = uVar9;
            }
            lVar17 = uVar10 - 4;
            if ((uVar9 & 3) == 0) {
              puVar15 = puVar13 + (-2 - (ulonglong)*(byte *)(uVar9 - 3));
            }
            puVar13 = puVar15;
          } while (*(char *)((puVar15[-1] & 0x7fffffffffff) + 10) != '\0');
        }
        local_res8 = (int)(lVar17 - *(longlong *)((puVar15[-1] & 0x7fffffffffff) + 0x20) >> 2);
        puVar13 = puVar15;
LAB_180496257:
        puVar15 = *(ulonglong **)(lVar4 + 0x28);
        *(ulonglong **)(lVar4 + 0x28) = puVar15 + 1;
        *puVar15 = puVar13[-1] & 0x7fffffffffff | 0xfffb800000000000;
        pdVar12 = *(double **)(lVar4 + 0x28);
        *(double **)(lVar4 + 0x28) = pdVar12 + 1;
        *pdVar12 = (double)local_res8;
        puVar7 = *(undefined8 **)(lVar4 + 0x28);
        *(undefined8 **)(lVar4 + 0x28) = puVar7 + 1;
        *puVar7 = *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + -8);
        puVar7 = *(undefined8 **)(lVar4 + 0x28);
        *(undefined8 **)(lVar4 + 0x28) = puVar7 + 1;
        *puVar7 = *(undefined8 *)(param_1 + 0xc20);
        FUN_1804b8af0(lVar4,lVar8);
      }
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x180) + (ulonglong)uVar2 * 8) = 0;
    if ((uint)uVar2 < *(uint *)(param_1 + 0x188)) {
      *(uint *)(param_1 + 0x188) = (uint)uVar2;
    }
    *(undefined2 *)(param_1 + 0x68) = 0;
  }
  *(longlong *)(lVar3 + 0x28) = *(longlong *)(lVar3 + 0x28) + -8;
  if (iVar18 != 0xe) {
    if (iVar18 == 0x1b) {
      if (*(longlong *)(param_1 + 0xbe8) == 0) {
        *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xfffffffe;
        FUN_1804a7c70(param_1 + -0x2e8,0);
      }
      FUN_1804958a0(lVar3);
    }
    return 0;
  }
  if (**(char **)(param_1 + 0x88) == 'I') {
    return 0;
  }
  *(undefined8 *)(param_1 + 0xbc8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0x11;
  FUN_180496850(param_1);
  return 1;
}



/* ===== 1804963a0 FUN_1804963a0 ===== */

undefined8 FUN_1804963a0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x54) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x50) = 0xfff00240;
  uVar1 = FUN_1804bd410(*param_3,param_3[1]);
  param_3[2] = uVar1;
  return 0;
}



/* ===== 1804963e0 FUN_1804963e0 ===== */

void FUN_1804963e0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  *puVar1 = 0x4030000000000000;
  *(undefined8 **)(param_1 + 0x28) = puVar1 + 2;
  puVar1[1] = 0x4030000000000000;
  puVar1[2] = (double)(longlong)param_2[0x10];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(double **)(param_1 + 0x28) = (double)(longlong)param_2[0x11];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(double **)(param_1 + 0x28) = (double)(longlong)param_2[0x12];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(double **)(param_1 + 0x28) = (double)(longlong)param_2[0x13];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(double **)(param_1 + 0x28) = (double)(longlong)param_2[0x14];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(double **)(param_1 + 0x28) = (double)(longlong)param_2[0x15];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(double **)(param_1 + 0x28) = (double)(longlong)param_2[0x16];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(double **)(param_1 + 0x28) = (double)(longlong)param_2[0x17];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(double **)(param_1 + 0x28) = (double)(longlong)param_2[0x18];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(double **)(param_1 + 0x28) = (double)(longlong)param_2[0x19];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(double **)(param_1 + 0x28) = (double)(longlong)param_2[0x1a];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(double **)(param_1 + 0x28) = (double)(longlong)param_2[0x1b];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(double **)(param_1 + 0x28) = (double)(longlong)param_2[0x1c];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(double **)(param_1 + 0x28) = (double)(longlong)param_2[0x1d];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(double **)(param_1 + 0x28) = (double)(longlong)param_2[0x1e];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(double **)(param_1 + 0x28) = (double)(longlong)param_2[0x1f];
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = *param_2;
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = param_2[1];
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = param_2[2];
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = param_2[3];
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = param_2[4];
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = param_2[5];
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = param_2[6];
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = param_2[7];
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = param_2[8];
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = param_2[9];
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = param_2[10];
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = param_2[0xb];
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = param_2[0xc];
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = param_2[0xd];
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = param_2[0xe];
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  **(undefined8 **)(param_1 + 0x28) = param_2[0xf];
  if (NAN(**(double **)(param_1 + 0x28))) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  return;
}



/* ===== 1804967b0 FUN_1804967b0 ===== */

void FUN_1804967b0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar1 = *(ushort *)(*(longlong *)(param_2 + 0x40) + 0x3e);
  if (uVar1 == *(ushort *)(param_2 + 0x68)) {
    *(undefined2 *)(*(longlong *)(param_2 + 0x40) + 0x3e) = *(undefined2 *)(param_2 + 0x6e);
  }
  else {
    if (uVar1 == 0) {
      return;
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)uVar1 * 8);
    if (lVar5 == 0) {
      return;
    }
    if (*(short *)(lVar5 + 0x6e) == 0) {
      return;
    }
    while (*(ushort *)(lVar5 + 0x6e) != *(ushort *)(param_2 + 0x68)) {
      lVar5 = *(longlong *)
               (*(longlong *)(param_1 + 0x180) + (ulonglong)*(ushort *)(lVar5 + 0x6e) * 8);
      if (*(short *)(lVar5 + 0x6e) == 0) {
        return;
      }
    }
    *(undefined2 *)(lVar5 + 0x6e) = *(undefined2 *)(param_2 + 0x6e);
  }
  uVar2 = *(uint *)(param_2 + 0x50);
  if ((char)uVar2 != 'X') {
    puVar3 = *(uint **)(param_2 + 0x48);
    if ((*puVar3 & 0xff) == 0x51) {
      *puVar3 = uVar2;
      *(undefined1 *)(puVar3 + ((ulonglong)(*(uint *)(param_2 + 0x50) >> 0x10) - 0x8000)) = 0x4d;
    }
    else {
      uVar4 = (*puVar3 & 0xff) - 0x54;
      if ((uVar4 < 0xf) && ((0x4009U >> (uVar4 & 0x1f) & 1) != 0)) {
        *puVar3 = uVar2;
        return;
      }
    }
  }
  return;
}



/* ===== 180496850 FUN_180496850 ===== */

void FUN_180496850(undefined8 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  double *pdVar7;
  undefined8 *puVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  
  if ((*(byte *)(param_1[0x13] + 0x3d) & 8) == 0) {
    if ((*(int *)(param_1 + 0x179) != 0) || (*(char *)param_1[0x11] != 'W')) {
      uVar14 = *(uint *)(param_1 + 0x31);
      if (uVar14 == 0) {
        uVar14 = 1;
        *(undefined4 *)(param_1 + 0x31) = 1;
      }
      uVar13 = *(uint *)((longlong)param_1 + 0x18c);
      if (uVar14 < uVar13) {
        do {
          lVar4 = *(longlong *)(param_1[0x30] + (ulonglong)uVar14 * 8);
          uVar1 = uVar14 + 1;
          *(uint *)(param_1 + 0x31) = uVar1;
          if (lVar4 == 0) goto LAB_18049699d;
          uVar14 = uVar1;
        } while (uVar1 < uVar13);
      }
      uVar14 = *(int *)((longlong)param_1 + 0x664) + 1;
      if (uVar14 < 2) {
        uVar14 = 2;
      }
      else if (0xffff < uVar14) {
        uVar14 = 0xffff;
      }
      if (uVar13 < uVar14) {
        uVar10 = FUN_180491670(param_1[0x10],param_1[0x30],(longlong)param_1 + 0x18c,uVar14,8);
        param_1[0x30] = uVar10;
        if (uVar13 < *(uint *)((longlong)param_1 + 0x18c)) {
          do {
            uVar12 = (ulonglong)uVar13;
            uVar13 = uVar13 + 1;
            *(undefined8 *)(param_1[0x30] + uVar12 * 8) = 0;
          } while (uVar13 < *(uint *)((longlong)param_1 + 0x18c));
        }
        uVar14 = *(uint *)(param_1 + 0x31);
LAB_18049699d:
        if (uVar14 != 0) {
          *(undefined8 **)(param_1[0x30] + (ulonglong)uVar14 * 8) = param_1;
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
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[4] = param_1[0x29];
          param_1[6] = param_1[0x2c];
          param_1[7] = param_1[0x2d];
          param_1[8] = param_1[0x13];
          *(short *)(param_1 + 0xd) = (short)uVar14;
          *(undefined4 *)(param_1 + 5) = 0x8000;
          *(undefined4 *)((longlong)param_1 + 0xc) = 0x8000;
          *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
          *(undefined4 *)((longlong)param_1 + 0x174) = 0;
          *(undefined1 *)(param_1 + 0x2f) = 0;
          *(undefined2 *)(param_1 + 0x32) = 0;
          if ((*(byte *)((longlong)param_1 + -0x255) & 2) != 0) {
            lVar4 = param_1[-0x3a];
            lVar11 = FUN_1804b8c00(lVar4,0x96c8a339);
            if (lVar11 != 0) {
              puVar5 = *(ulonglong **)(lVar4 + 0x28);
              uVar2 = *(undefined4 *)((longlong)param_1 + 0xbcc);
              uVar10 = param_1[-0x3f];
              uVar3 = *(undefined4 *)(param_1 + 0x179);
              uVar6 = param_1[-0x40];
              *(ulonglong **)(lVar4 + 0x28) = puVar5 + 1;
              uVar12 = FUN_180491d30(lVar4,"start",5);
              *puVar5 = uVar12 | 0xfffd800000000000;
              pdVar7 = *(double **)(lVar4 + 0x28);
              *(double **)(lVar4 + 0x28) = pdVar7 + 1;
              *pdVar7 = (double)(int)uVar14;
              puVar5 = *(ulonglong **)(lVar4 + 0x28);
              *(ulonglong **)(lVar4 + 0x28) = puVar5 + 1;
              *puVar5 = param_1[0x12] | 0xfffb800000000000;
              pdVar7 = *(double **)(lVar4 + 0x28);
              *(double **)(lVar4 + 0x28) = pdVar7 + 1;
              *pdVar7 = (double)(int)((param_1[0x11] - param_1[0x13]) + -0x68 >> 2);
              if (*(int *)(param_1 + 0x179) == 0) {
                if ((((*(uint *)param_1[0x11] & 0xff) - 0x41 & 0xfffffffa) == 0) &&
                   ((*(uint *)param_1[0x11] & 0xff) != 0x46)) {
                  pdVar7 = *(double **)(lVar4 + 0x28);
                  *(double **)(lVar4 + 0x28) = pdVar7 + 1;
                  *pdVar7 = (double)*(int *)((longlong)param_1 + 0xbcc);
                  puVar8 = *(undefined8 **)(lVar4 + 0x28);
                  *(undefined8 **)(lVar4 + 0x28) = puVar8 + 1;
                  *puVar8 = 0xbff0000000000000;
                }
              }
              else {
                pdVar7 = *(double **)(lVar4 + 0x28);
                *(double **)(lVar4 + 0x28) = pdVar7 + 1;
                *pdVar7 = (double)*(int *)(param_1 + 0x179);
                pdVar7 = *(double **)(lVar4 + 0x28);
                *(double **)(lVar4 + 0x28) = pdVar7 + 1;
                *pdVar7 = (double)*(int *)((longlong)param_1 + 0xbcc);
              }
              FUN_1804b8af0(lVar4,lVar11);
              param_1[-0x40] = uVar6;
              param_1[-0x3f] = uVar10;
              *(undefined4 *)(param_1 + 0x179) = uVar3;
              *(undefined4 *)((longlong)param_1 + 0xbcc) = uVar2;
            }
          }
          FUN_1804c2680(param_1);
          return;
        }
      }
      FUN_1804958a0(param_1[0x10]);
      *(undefined4 *)((longlong)param_1 + 0xec) = 0;
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x179) == 0) && (*(int *)((longlong)param_1 + 0xbcc) == 0)) {
    cVar9 = (char)*(undefined4 *)param_1[0x11];
    if (cVar9 != 'F') {
      *(char *)param_1[0x11] = cVar9 + '\x01';
      *(byte *)(param_1[0x13] + 0x3d) = *(byte *)(param_1[0x13] + 0x3d) | 0x10;
      *(undefined4 *)((longlong)param_1 + 0xec) = 0;
      return;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  return;
}



/* ===== 180496c30 FUN_180496c30 ===== */

undefined8 FUN_180496c30(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  int iVar9;
  longlong lVar10;
  
LAB_180496c60:
  switch(*(undefined4 *)(param_3 + 0xec)) {
  case 0x11:
    goto switchD_180496c7a_caseD_11;
  case 0x12:
switchD_180496c7a_caseD_12:
    *(undefined4 *)(param_3 + 0xec) = 0x11;
    goto switchD_180496c7a_caseD_11;
  case 0x13:
    *(undefined4 *)(param_3 + 0xec) = 0x11;
    FUN_180496850(param_3);
    FUN_1804a7c70(param_3 + -0x2e8,0);
    if (*(int *)(param_3 + 0xec) == 0x12) goto switchD_180496c7a_caseD_12;
    break;
  case 0x14:
    if (*(undefined4 **)(param_3 + 0xbd8) != (undefined4 *)0x0) {
      **(undefined4 **)(param_3 + 0xbd8) = *(undefined4 *)(param_3 + 0xbe0);
      *(undefined8 *)(param_3 + 0xbd8) = 0;
    }
    *(undefined4 *)(param_3 + 0x158) = 0;
    if ((((*(uint *)(param_3 + 0xa8) & 0x400000) != 0) &&
        (*(short *)(param_3 + 0x6a) == *(short *)(param_3 + 0x68))) &&
       (*(int *)(param_3 + 0x100) + *(int *)(param_3 + 0xfc) == 0)) {
      *(undefined4 *)(param_3 + -0x230) = 0xfffffffa;
      FUN_1804bac70(param_3);
      iVar9 = FUN_1804bad60(param_3);
      if (iVar9 != 0) {
        *(undefined4 *)(param_3 + 0x158) = *(undefined4 *)(param_3 + 0xc);
        *(undefined2 *)(param_3 + 0x6a) = 0;
        *(undefined1 *)(param_3 + 0x74) = 0;
        *(undefined4 *)(param_3 + 0xec) = 0x11;
        break;
      }
      *(uint *)(param_3 + 0x158) = (uint)*(ushort *)(param_3 + 0x1b4);
    }
    FUN_1804bb920(param_3);
    if (*(int *)(param_3 + 0x158) == 0) {
      *(undefined1 *)
       (*(longlong *)(param_3 + 0x30) + -1 + (ulonglong)*(ushort *)(param_3 + 10) * 0xc) = 0xff;
    }
    *(undefined4 *)(param_3 + 0xec) = 0x15;
    break;
  case 0x15:
    *(undefined4 *)(param_3 + -0x230) = 0xfffffff9;
    FUN_1804d0bf0(param_3,param_3);
    FUN_180496f80(param_3);
    goto LAB_180496f29;
  case 0x16:
    goto switchD_180496c7a_caseD_16;
  default:
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    *puVar3 = 0;
    *(undefined8 **)(param_1 + 0x28) = puVar3 + 1;
switchD_180496c7a_caseD_16:
    if (*(undefined4 **)(param_3 + 0xbd8) != (undefined4 *)0x0) {
      **(undefined4 **)(param_3 + 0xbd8) = *(undefined4 *)(param_3 + 0xbe0);
      *(undefined8 *)(param_3 + 0xbd8) = 0;
    }
    iVar9 = FUN_180495ef0(param_3);
    if (iVar9 == 0) {
LAB_180496f29:
      *(undefined4 *)(param_3 + -0x230) = 0xffffffff;
      *(undefined4 *)(param_3 + 0xec) = 0;
      FUN_1804a7c70(param_3 + -0x2e8,0);
      return 0;
    }
    goto LAB_180496c60;
  }
LAB_180496ef6:
  if (*(int *)(param_3 + 0xec) < 0x12) {
    return 0;
  }
  goto LAB_180496c60;
switchD_180496c7a_caseD_11:
  if (*(undefined4 **)(param_3 + 0xbd8) != (undefined4 *)0x0) {
    if (*(char *)(param_3 + 0xb7) == '\0') {
      **(undefined4 **)(param_3 + 0xbd8) = *(undefined4 *)(param_3 + 0xbe0);
      *(undefined8 *)(param_3 + 0xbd8) = 0;
    }
    else {
      *(undefined1 *)(param_3 + 0xb7) = 0;
    }
  }
  *(undefined4 *)(param_3 + -0x230) = 0xfffffffb;
  if ((*(byte *)(param_3 + -0x255) & 4) != 0) {
    lVar4 = *(longlong *)(param_3 + -0x1d0);
    lVar10 = FUN_1804b8c00(lVar4,0x9425fa7a);
    if (lVar10 != 0) {
      pdVar5 = *(double **)(lVar4 + 0x28);
      uVar6 = *(undefined8 *)(param_3 + -0x200);
      uVar7 = *(undefined8 *)(param_3 + -0x1f8);
      uVar1 = *(undefined4 *)(param_3 + 0xbc8);
      uVar2 = *(undefined4 *)(param_3 + 0xbcc);
      *(double **)(lVar4 + 0x28) = pdVar5 + 1;
      *pdVar5 = (double)*(ushort *)(param_3 + 0x68);
      puVar8 = *(ulonglong **)(lVar4 + 0x28);
      *(ulonglong **)(lVar4 + 0x28) = puVar8 + 1;
      *puVar8 = *(ulonglong *)(param_3 + 0x90) | 0xfffb800000000000;
      if (*(longlong *)(param_3 + 0x98) == 0) {
        iVar9 = -1;
      }
      else {
        iVar9 = (int)((*(longlong *)(param_3 + 0x88) - *(longlong *)(param_3 + 0x98)) + -0x68 >> 2);
      }
      pdVar5 = *(double **)(lVar4 + 0x28);
      *(double **)(lVar4 + 0x28) = pdVar5 + 1;
      *pdVar5 = (double)iVar9;
      pdVar5 = *(double **)(lVar4 + 0x28);
      *(double **)(lVar4 + 0x28) = pdVar5 + 1;
      *pdVar5 = (double)*(int *)(param_3 + 0xfc);
      FUN_1804b8af0(lVar4,lVar10);
      *(undefined8 *)(param_3 + -0x200) = uVar6;
      *(undefined8 *)(param_3 + -0x1f8) = uVar7;
      *(undefined4 *)(param_3 + 0xbc8) = uVar1;
      *(undefined4 *)(param_3 + 0xbcc) = uVar2;
    }
  }
  FUN_1804bfdd0(param_3);
  goto LAB_180496ef6;
}



/* ===== 180496f80 FUN_180496f80 ===== */

void FUN_180496f80(undefined8 *param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong *puVar9;
  double *pdVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar3 = *(uint *)(param_1 + 10);
  uVar2 = *(ushort *)(param_1 + 0xd);
  puVar6 = (undefined8 *)param_1[0xf];
  if ((uVar3 & 0xff) - 0x41 < 0x20) {
    puVar7 = (uint *)param_1[9];
    lVar8 = param_1[8];
    switch(uVar3 & 0xff) {
    case 0x41:
    case 0x42:
    case 0x45:
      *(ushort *)
       (*(longlong *)(param_1[0x30] + (ulonglong)*(uint *)((longlong)param_1 + 0xbcc) * 8) + 0x6a) =
           uVar2;
      break;
    case 0x46:
    case 0x4a:
    case 0x4b:
    case 0x4c:
      *puVar7 = (uint)CONCAT21(uVar2,*(undefined1 *)(param_1[6] + 8)) << 8 | 0x57;
      *(undefined2 *)((longlong)param_1 + 0x6e) = *(undefined2 *)(lVar8 + 0x3e);
      *(ushort *)(lVar8 + 0x3e) = uVar2;
      break;
    case 0x4f:
      *(undefined1 *)(puVar7 + ((ulonglong)(uVar3 >> 0x10) - 0x8000)) = 0x4e;
    case 0x52:
    case 0x55:
    case 0x60:
      *(ushort *)((longlong)puVar7 + 2) = uVar2;
      *(char *)puVar7 = (char)uVar3 + '\x02';
      *(undefined2 *)((longlong)param_1 + 0x6e) = *(undefined2 *)(lVar8 + 0x3e);
      *(ushort *)(lVar8 + 0x3e) = uVar2;
      break;
    case 0x58:
      FUN_1804d0a20(param_1,*(undefined8 *)
                             (param_1[0x30] + (ulonglong)*(uint *)(param_1 + 0x179) * 8),
                    *(undefined4 *)((longlong)param_1 + 0xbcc),param_1[0xb]);
      uVar13 = (ulonglong)*(uint *)((longlong)param_1 + 0xbcc);
      lVar8 = *(longlong *)
               (*(longlong *)(param_1[0x30] + (ulonglong)*(uint *)(param_1 + 0x179) * 8) + 0x30);
      *(undefined1 *)(lVar8 + 0xb + uVar13 * 0xc) = 0xff;
      if (*(byte *)(lVar8 + 9 + uVar13 * 0xc) < *(byte *)((longlong)param_1 + 0x73)) {
        *(byte *)(lVar8 + 9 + uVar13 * 0xc) = *(byte *)((longlong)param_1 + 0x73);
      }
      lVar8 = *(longlong *)(param_1[0x30] + (ulonglong)*(ushort *)((longlong)param_1 + 0x6c) * 8);
      *(short *)(lVar8 + 100) = *(short *)(lVar8 + 100) + 1;
      *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(lVar8 + 0x70);
      *(ushort *)(lVar8 + 0x70) = uVar2;
    }
  }
  FUN_1804bc0e0(param_1,param_1[0xb]);
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = *(int *)(param_1 + 5);
  uVar11 = param_1[1];
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *puVar6 = *param_1;
  puVar6[1] = uVar11;
  puVar1 = puVar6 + (ulonglong)(uint)(iVar4 - iVar5) + 0xf;
  uVar11 = param_1[3];
  puVar6[2] = param_1[2];
  puVar6[3] = uVar11;
  uVar11 = param_1[5];
  puVar6[4] = param_1[4];
  puVar6[5] = uVar11;
  uVar11 = param_1[7];
  puVar6[6] = param_1[6];
  puVar6[7] = uVar11;
  uVar11 = param_1[9];
  puVar6[8] = param_1[8];
  puVar6[9] = uVar11;
  uVar11 = param_1[0xb];
  puVar6[10] = param_1[10];
  puVar6[0xb] = uVar11;
  uVar11 = param_1[0xd];
  puVar6[0xc] = param_1[0xc];
  puVar6[0xd] = uVar11;
  puVar6[0xe] = param_1[0xe];
  *puVar6 = param_1[-0x58];
  param_1[-0x58] = puVar6;
  *(byte *)(puVar6 + 1) = *(byte *)(param_1 + -0x59) & 3;
  *(undefined1 *)((longlong)puVar6 + 9) = 9;
  uVar3 = *(uint *)(param_1 + 5);
  puVar6[6] = puVar1;
  puVar6[4] = puVar6 + (0xf - (ulonglong)uVar3);
  FUN_180540530(puVar1,param_1[6],(ulonglong)*(ushort *)((longlong)param_1 + 10) * 0xc);
  lVar8 = (longlong)puVar1 + (ulonglong)*(ushort *)((longlong)param_1 + 10) * 0xc;
  puVar6[7] = lVar8;
  FUN_180540530(lVar8,param_1[7],(ulonglong)*(uint *)((longlong)param_1 + 0x2c) << 2);
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0xf] = 0;
  *(undefined8 **)(param_1[0x30] + (ulonglong)*(ushort *)(puVar6 + 0xd) * 8) = puVar6;
  FUN_180490910(param_1 + -0x5d,*(undefined2 *)(puVar6 + 0xd));
  if ((*(byte *)((longlong)param_1 + -0x255) & 2) != 0) {
    lVar8 = param_1[-0x3a];
    lVar12 = FUN_1804b8c00(lVar8,0x96c8a339);
    if (lVar12 != 0) {
      puVar9 = *(ulonglong **)(lVar8 + 0x28);
      *(ulonglong **)(lVar8 + 0x28) = puVar9 + 1;
      uVar13 = FUN_180491d30(lVar8,&DAT_18089f7c0,4);
      *puVar9 = uVar13 | 0xfffd800000000000;
      pdVar10 = *(double **)(lVar8 + 0x28);
      *(double **)(lVar8 + 0x28) = pdVar10 + 1;
      *pdVar10 = (double)uVar2;
      puVar9 = *(ulonglong **)(lVar8 + 0x28);
      *(ulonglong **)(lVar8 + 0x28) = puVar9 + 1;
      *puVar9 = param_1[0x12] | 0xfffb800000000000;
      FUN_1804b8af0(lVar8,lVar12);
    }
  }
  return;
}



/* ===== 1804972a0 FUN_1804972a0 ===== */

bool FUN_1804972a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1804972d0(param_1 + 0x18,*(undefined4 *)(param_1 + 0x14),param_2,2);
  return iVar1 != 0;
}



/* ===== 1804972d0 FUN_1804972d0 ===== */

/* WARNING: Type propagation algorithm not settling */

uint FUN_1804972d0(byte *param_1,uint param_2,double *param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  bool bVar21;
  
  pbVar17 = param_1 + param_2;
  uVar20 = 0;
  bVar10 = *param_1;
  bVar2 = (&DAT_18056fcb1)[bVar10];
  if ((bVar2 & 8) == 0) {
    while ((bVar2 & 2) != 0) {
      bVar10 = param_1[1];
      param_1 = param_1 + 1;
      bVar2 = (&DAT_18056fcb1)[bVar10];
    }
    if ((bVar10 - 0x2b & 0xfd) == 0) {
      param_1 = param_1 + 1;
      bVar2 = *param_1;
      uVar20 = (uint)(bVar10 == 0x2d);
      uVar14 = (ulonglong)(bVar10 != 0x2d);
    }
    else {
      uVar14 = 1;
      bVar2 = bVar10;
    }
    if (0x40 < bVar2) {
      bVar2 = *param_1;
      if ((((bVar2 | 0x20) == 0x69) && ((param_1[1] | 0x20) == 0x6e)) &&
         ((param_1[2] | 0x20) == 0x66)) {
        pbVar18 = param_1 + 3;
        dVar5 = (double)((uVar14 << 0x3f) + 0xfff0000000000000);
        if ((((param_1[3] | 0x20) == 0x69) && ((param_1[4] | 0x20) == 0x6e)) &&
           (((param_1[5] | 0x20) == 0x69 &&
            (((param_1[6] | 0x20) == 0x74 && ((param_1[7] | 0x20) == 0x79)))))) {
          pbVar18 = param_1 + 8;
        }
      }
      else {
        dVar5 = -NAN;
        if ((((bVar2 | 0x20) != 0x6e) || ((param_1[1] | 0x20) != 0x61)) ||
           ((param_1[2] | 0x20) != 0x6e)) goto LAB_180497421;
        pbVar18 = param_1 + 3;
      }
      bVar2 = *pbVar18;
      param_1 = pbVar18;
LAB_180497421:
      bVar2 = (&DAT_18056fcb1)[bVar2];
      while ((bVar2 & 2) != 0) {
        pbVar18 = param_1 + 1;
        param_1 = param_1 + 1;
        bVar2 = (&DAT_18056fcb1)[*pbVar18];
      }
      if (*param_1 != 0) {
        return 0;
      }
      if (param_1 < pbVar17) {
        return 0;
      }
      *param_3 = dVar5;
      return 1;
    }
  }
  bVar10 = 8;
  bVar2 = 8;
  uVar11 = param_4 & 0x10;
  if ((uVar11 == 0) || (*param_1 != 0x30)) {
    uVar9 = 10;
  }
  else {
    uVar9 = 0;
  }
  pbVar18 = (byte *)0x0;
  bVar1 = false;
  bVar21 = false;
  if (*param_1 < 0x31) {
    bVar2 = bVar10;
    bVar21 = bVar1;
    if (*param_1 == 0x30) {
      if ((param_1[1] | 0x20) == 0x78) {
        uVar9 = 0x10;
        param_1 = param_1 + 2;
        bVar2 = 0x10;
      }
      else if ((param_1[1] | 0x20) == 0x62) {
        uVar9 = 2;
        param_1 = param_1 + 2;
      }
    }
    while( true ) {
      for (; *param_1 == 0x30; param_1 = param_1 + 1) {
        bVar21 = true;
      }
      if (*param_1 != 0x2e) break;
      if (pbVar18 != (byte *)0x0) {
        return 0;
      }
      pbVar18 = param_1;
      param_1 = param_1 + 1;
    }
  }
  uVar13 = 0;
  uVar16 = 0;
  pbVar19 = param_1;
  while( true ) {
    while( true ) {
      bVar10 = *pbVar19;
      if (((&DAT_18056fcb1)[bVar10] & bVar2) == 0) break;
      uVar13 = uVar13 + 1;
      uVar16 = (bVar10 & 0xf) + uVar16 * 10;
      pbVar19 = pbVar19 + 1;
    }
    if (bVar10 != 0x2e) break;
    if (pbVar18 != (byte *)0x0) {
      return 0;
    }
    pbVar18 = pbVar19;
    pbVar19 = pbVar19 + 1;
  }
  if (!bVar21 && uVar13 == 0) {
    return 0;
  }
  iVar12 = 0;
  uVar4 = 3;
  if (pbVar18 == (byte *)0x0) {
LAB_18049758c:
    if (9 < uVar9) goto LAB_180497596;
  }
  else {
    if (uVar9 == 2) {
      return 0;
    }
    uVar4 = 1;
    if (uVar13 == 0) goto LAB_18049758c;
    iVar12 = (int)pbVar18 - (int)pbVar19;
    pbVar18 = pbVar19;
    while ((iVar12 = iVar12 + 1, iVar12 < 0 && (pbVar18 = pbVar18 + -1, *pbVar18 == 0x30))) {
      uVar13 = uVar13 - 1;
    }
    if (iVar12 < -0xfffff) {
      return 0;
    }
    if (uVar9 != 0x10) goto LAB_18049758c;
    iVar12 = iVar12 * 4;
LAB_180497596:
    uVar8 = 0x65;
    if (uVar9 == 0x10) {
      uVar8 = 0x70;
    }
    if ((bVar10 | 0x20) == uVar8) {
      bVar2 = pbVar19[1];
      pbVar18 = pbVar19 + 1;
      if ((bVar2 == 0x2b) || (bVar21 = false, bVar2 == 0x2d)) {
        pbVar18 = pbVar19 + 2;
        bVar21 = bVar2 == 0x2d;
      }
      uVar4 = 1;
      if (((&DAT_18056fcb1)[*pbVar18] & 8) == 0) {
        return 0;
      }
      uVar8 = *pbVar18 & 0xf;
      bVar2 = (&DAT_18056fcb1)[pbVar18[1]];
      while ((bVar2 & 8) != 0) {
        uVar8 = (pbVar18[1] & 0xf) + uVar8 * 10;
        if (0xfffff < uVar8) {
          return 0;
        }
        bVar2 = (&DAT_18056fcb1)[pbVar18[2]];
        pbVar18 = pbVar18 + 1;
      }
      pbVar19 = pbVar18 + 1;
      uVar3 = -uVar8;
      if (!bVar21) {
        uVar3 = uVar8;
      }
      iVar12 = iVar12 + uVar3;
    }
  }
  if (*pbVar19 != 0) {
    bVar2 = *pbVar19 | 0x20;
    if (bVar2 == 0x69) {
      if ((param_4 & 4) == 0) {
        return 0;
      }
      pbVar19 = pbVar19 + 1;
      uVar4 = 2;
    }
    else if (uVar4 == 3) {
      pbVar18 = pbVar19;
      if (bVar2 == 0x75) {
        pbVar18 = pbVar19 + 1;
        uVar4 = 4;
      }
      pbVar19 = pbVar18;
      if ((*pbVar18 | 0x20) == 0x6c) {
        pbVar19 = pbVar18 + 1;
        if ((pbVar18[1] | 0x20) == 0x6c) {
          pbVar19 = pbVar18 + 2;
          uVar4 = uVar4 + 2;
        }
        else if (uVar11 == 0) {
          return 0;
        }
      }
      if (((*pbVar19 | 0x20) == 0x75) && ((uVar4 - 3 & 0xfffffffd) == 0)) {
        pbVar19 = pbVar19 + 1;
        uVar4 = uVar4 + 1;
      }
      if (uVar4 == 4) {
        uVar8 = uVar11;
      }
      else {
        if (uVar4 < 5) goto LAB_1804976f2;
        uVar8 = param_4 & 8;
      }
      if (uVar8 == 0) {
        return 0;
      }
    }
LAB_1804976f2:
    bVar2 = *pbVar19;
    bVar10 = (&DAT_18056fcb1)[bVar2];
    while ((bVar10 & 2) != 0) {
      bVar2 = pbVar19[1];
      pbVar19 = pbVar19 + 1;
      bVar10 = (&DAT_18056fcb1)[bVar2];
    }
    if (bVar2 != 0) {
      return 0;
    }
  }
  if (pbVar19 < pbVar17) {
    return 0;
  }
  if ((uVar4 == 3) && (uVar9 == 10)) {
    if ((uVar13 < 10) || (((uVar13 == 10 && (*param_1 < 0x33)) && (uVar16 < (uVar20 | 0x80000000))))
       ) {
      if ((param_4 & 2) != 0) {
        dVar5 = (double)uVar16;
        if (uVar20 != 0) {
          dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^ DAT_1808adeb0._4_4_,
                                   SUB84(dVar5,0) ^ (uint)DAT_1808adeb0);
        }
        *param_3 = dVar5;
        return 1;
      }
      if (uVar20 != 0) {
        if (uVar16 == 0) {
          *param_3 = -0.0;
          return 1;
        }
        uVar16 = -uVar16;
      }
      *(uint *)param_3 = uVar16;
      return 3;
    }
  }
  else if (uVar9 == 0) {
    if (1 < uVar4 - 1) {
      if ((uVar13 < 0x17) && ((uVar13 != 0x16 || (*param_1 < 0x32)))) {
        dVar5 = 0.0;
        for (; uVar13 != 0; uVar13 = uVar13 - 1) {
          bVar2 = *param_1;
          if (7 < (byte)(bVar2 - 0x30)) {
            return 0;
          }
          param_1 = param_1 + 1;
          dVar5 = (double)((ulonglong)(bVar2 & 7) | (longlong)dVar5 * 8);
        }
        if (uVar4 == 3) {
          uVar11 = 4 - ((ulonglong)dVar5 < (ulonglong)(uVar20 | 0x80000000));
        }
        else {
          if (uVar4 != 4) {
            dVar6 = (double)-(longlong)dVar5;
            if (uVar20 == 0) {
              dVar6 = dVar5;
            }
            *param_3 = dVar6;
            return uVar4;
          }
          uVar11 = 4;
        }
        if ((ulonglong)dVar5 >> 0x20 == 0) {
          iVar12 = -SUB84(dVar5,0);
          if (uVar20 == 0) {
            iVar12 = SUB84(dVar5,0);
          }
          *(int *)param_3 = iVar12;
          return uVar11;
        }
      }
      return 0;
    }
  }
  else {
    if (uVar9 == 0x10) {
      uVar4 = FUN_180498070(param_1,param_3,uVar4,param_4,iVar12,uVar20,uVar13);
      goto LAB_1804979d4;
    }
    if (uVar9 == 2) {
      if ((iVar12 != 0) || (0x40 < uVar13)) {
LAB_180497911:
        uVar4 = 0;
        goto LAB_1804979d4;
      }
      dVar5 = 0.0;
      for (uVar9 = uVar13; uVar9 != 0; uVar9 = uVar9 - 1) {
        bVar2 = *param_1;
        if ((bVar2 & 0xfe) != 0x30) goto LAB_180497911;
        param_1 = param_1 + 1;
        dVar5 = (double)((ulonglong)(bVar2 & 1) | (longlong)dVar5 * 2);
      }
      uVar9 = SUB84(dVar5,0);
      if (uVar4 == 3) {
        if (((param_4 & 2) == 0) && ((ulonglong)dVar5 < (ulonglong)(uVar20 | 0x80000000))) {
          uVar4 = 3;
          uVar11 = -uVar9;
          if (uVar20 == 0) {
            uVar11 = uVar9;
          }
          *(uint *)param_3 = uVar11;
          goto LAB_1804979d4;
        }
        if (uVar11 == 0) {
          uVar4 = 1;
          goto LAB_18049794e;
        }
      }
      else if (uVar4 != 4) {
        if ((uVar4 == 5) || (uVar4 == 6)) {
          dVar6 = (double)-(longlong)dVar5;
          if (uVar20 == 0) {
            dVar6 = dVar5;
          }
          *param_3 = dVar6;
          goto LAB_1804979d4;
        }
LAB_18049794e:
        uVar15 = 0;
        if (((ulonglong)dVar5 & 0xc000000000000000) != 0) {
          uVar15 = 2;
          dVar5 = (double)((ulonglong)dVar5 >> 2 | (ulonglong)(uVar9 & 3));
        }
        FUN_180497fc0(dVar5,param_3,uVar15,uVar20);
        goto LAB_1804979d4;
      }
      if (uVar13 < 0x21) {
        uVar4 = 4;
        uVar11 = -uVar9;
        if (uVar20 == 0) {
          uVar11 = uVar9;
        }
        *(uint *)param_3 = uVar11;
      }
      else {
        uVar4 = 0;
      }
      goto LAB_1804979d4;
    }
  }
  uVar4 = FUN_180497a30(param_1,param_3,uVar4,param_4,iVar12,uVar20,uVar13);
LAB_1804979d4:
  if (((uVar4 != 1) || ((param_4 & 1) == 0)) || (lVar7 = FUN_1800052ed(*param_3), lVar7 < 0)) {
    return uVar4;
  }
  *(int *)param_3 = (int)lVar7;
  uVar20 = 1;
  if (*param_3 != -0.0) {
    uVar20 = 3;
  }
  return uVar20;
}



/* ===== 180497a30 FUN_180497a30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180497a30(byte *param_1,double *param_2,int param_3,uint param_4,uint param_5,int param_6,
                 uint param_7)

{
  byte bVar1;
  byte *pbVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_268 [32];
  byte local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_268;
  pbVar13 = local_248;
  if (param_7 == 0) {
    param_5 = 0;
    local_248[0] = 0;
LAB_180497bec:
    dVar4 = (double)(ulonglong)local_248[0];
    pbVar2 = local_248;
    while (pbVar2 = pbVar2 + 1, pbVar2 < pbVar13) {
      dVar4 = (double)((longlong)dVar4 * 100 + (ulonglong)*pbVar2);
    }
    if ((param_7 == 0x14) && ((0x12 < local_248[0] || (-1 < (longlong)dVar4)))) goto LAB_180497b9d;
    iVar8 = SUB84(dVar4,0);
    if (param_3 == 3) {
      if (((param_4 & 2) == 0) && ((ulonglong)dVar4 < (ulonglong)(param_6 + 0x80000000))) {
        iVar12 = -iVar8;
        if (param_6 == 0) {
          iVar12 = iVar8;
        }
        *(int *)param_2 = iVar12;
        return 3;
      }
      if ((param_4 & 0x10) == 0) {
        param_3 = 1;
        goto LAB_180497c9d;
      }
    }
    else if (param_3 != 4) {
      if ((param_3 == 5) || (param_3 == 6)) {
        dVar3 = (double)-(longlong)dVar4;
        if (param_6 == 0) {
          dVar3 = dVar4;
        }
        *param_2 = dVar3;
        return param_3;
      }
LAB_180497c9d:
      if (-1 < (longlong)dVar4) {
        dVar4 = (double)(longlong)dVar4;
        if (param_6 != 0) {
          dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ DAT_1808adeb0._4_4_,
                                   SUB84(dVar4,0) ^ (uint)DAT_1808adeb0);
        }
        *param_2 = dVar4;
        return param_3;
      }
      goto LAB_180497b9d;
    }
    if ((ulonglong)dVar4 >> 0x20 == 0) {
      iVar12 = -iVar8;
      if (param_6 == 0) {
        iVar12 = iVar8;
      }
      *(int *)param_2 = iVar12;
      return 4;
    }
LAB_180497f90:
    param_3 = 0;
  }
  else {
    if (800 < param_7) {
      param_5 = (param_5 - 800) + param_7;
    }
    uVar9 = 800;
    if (param_7 < 0x321) {
      uVar9 = param_7;
    }
    if (((uVar9 ^ param_5) & 1) != 0) {
      pbVar2 = param_1;
      if (*param_1 == 0x2e) {
        pbVar2 = param_1 + 1;
      }
      pbVar13 = local_248 + 1;
      uVar9 = uVar9 - 1;
      local_248[0] = *pbVar2 & 0xf;
      if (*param_1 == 0x2e) {
        param_1 = param_1 + 1;
      }
      param_1 = param_1 + 1;
    }
    for (; 1 < uVar9; uVar9 = uVar9 - 2) {
      if (*param_1 == 0x2e) {
        param_1 = param_1 + 1;
      }
      bVar1 = param_1[1];
      *pbVar13 = (param_1[(ulonglong)(bVar1 == 0x2e) + 1] & 0xf) + (*param_1 & 0xf) * '\n';
      pbVar13 = pbVar13 + 1;
      param_1 = param_1 + (ulonglong)(bVar1 == 0x2e) + 2;
    }
    if (uVar9 != 0) {
      bVar1 = *param_1;
      pbVar2 = param_1;
      if (bVar1 == 0x2e) {
        pbVar2 = param_1 + 1;
      }
      param_5 = param_5 - 1;
      param_7 = param_7 + 1;
      *pbVar13 = (*pbVar2 & 0xf) * '\n';
      pbVar13 = pbVar13 + 1;
      if (bVar1 == 0x2e) {
        param_1 = param_1 + 1;
      }
      param_1 = param_1 + 1;
    }
    if (param_7 < 0x321) {
      for (; (0 < (int)param_5 && (param_7 < 0x13)); param_7 = param_7 + 2) {
        *pbVar13 = 0;
        param_5 = param_5 - 2;
        pbVar13 = pbVar13 + 1;
      }
      if ((param_7 < 0x15) && (param_5 == 0)) goto LAB_180497bec;
    }
    else {
      while( true ) {
        if (*param_1 == 0x2e) {
          param_1 = param_1 + 1;
        }
        if (*param_1 != 0x30) break;
        param_7 = param_7 - 1;
        if (param_7 < 0x321) goto LAB_180497b9d;
        param_1 = param_1 + 1;
      }
      pbVar13[-1] = pbVar13[-1] | 1;
    }
LAB_180497b9d:
    if (param_3 == 3) {
      if ((param_4 & 0x10) != 0) goto LAB_180497f90;
      param_3 = 1;
    }
    else if (3 < param_3) goto LAB_180497f90;
    uVar9 = (int)pbVar13 - (int)local_248;
    uVar11 = ((int)param_5 >> 1) + uVar9;
    if ((int)uVar11 < 0x9c) {
      if ((int)uVar11 < -0xa3) {
        if (param_6 == 0) {
          *param_2 = 0.0;
        }
        else {
          *param_2 = DAT_18056eaf8;
        }
      }
      else {
        uVar6 = 0;
        iVar8 = 0;
        while ((int)uVar11 < 9) {
          uVar5 = (uint)uVar6;
          if ((int)(uVar9 - uVar5 & 0x1ff) <= (int)uVar11) goto LAB_180497ee7;
          iVar8 = iVar8 + -6;
          uVar14 = uVar9 - 1 & 0x1ff;
          uVar15 = (ulonglong)uVar14;
          uVar10 = (uint)local_248[uVar15] * 0x147b0 >> 0x11;
          uVar7 = (uint)local_248[uVar15] * 0x40 + uVar10 * -100;
          local_248[uVar15] = (byte)uVar7;
          while (uVar14 != uVar5) {
            uVar14 = (uint)uVar15;
            if (uVar7 == 0) {
              uVar7 = uVar14;
              if (uVar14 != (uVar9 - 1 & 0x1ff)) {
                uVar7 = uVar9;
              }
              uVar9 = uVar7;
            }
            uVar14 = uVar14 - 1 & 0x1ff;
            uVar15 = (ulonglong)uVar14;
            uVar7 = (uint)local_248[uVar15] * 0x40 + uVar10;
            uVar10 = uVar7 / 100;
            uVar7 = uVar7 % 100;
            local_248[uVar15] = (byte)uVar7;
          }
          if (uVar10 != 0) {
            uVar7 = uVar9 - 1;
            uVar5 = uVar5 - 1 & 0x1ff;
            uVar6 = (ulonglong)uVar5;
            if (local_248[uVar7 & 0x1ff] == 0) {
              uVar9 = uVar7 & 0x1ff;
            }
            else if (uVar5 == uVar9) {
              uVar9 = uVar7 & 0x1ff;
              local_248[uVar9 - 1 & 0x1ff] = local_248[uVar9 - 1 & 0x1ff] | local_248[uVar9];
            }
            local_248[uVar6] = (byte)uVar10;
            uVar11 = uVar11 + 1;
          }
        }
        if (9 < uVar11) {
          do {
            uVar5 = 0;
            iVar8 = iVar8 + 6;
            uVar15 = uVar6;
            do {
              uVar7 = local_248[uVar15] + uVar5;
              uVar10 = uVar7 & 0x3f;
              uVar5 = uVar10 * 100;
              bVar1 = (byte)(uVar7 >> 6);
              local_248[uVar15] = bVar1;
              if ((bVar1 == 0) && ((int)uVar15 == (int)uVar6)) {
                uVar6 = (ulonglong)((int)uVar6 + 1U & 0x1ff);
                uVar11 = uVar11 - 1;
              }
              uVar7 = (int)uVar15 + 1U & 0x1ff;
              uVar15 = (ulonglong)uVar7;
            } while (uVar7 != uVar9);
            while (uVar10 != 0) {
              if ((uint)uVar6 == uVar9) {
                local_248[uVar9 - 1 & 0x1ff] = local_248[uVar9 - 1 & 0x1ff] | 1;
                break;
              }
              uVar15 = (ulonglong)uVar9;
              uVar10 = uVar5 & 0x3f;
              uVar9 = uVar9 + 1 & 0x1ff;
              local_248[uVar15] = (byte)(uVar5 >> 6);
              uVar5 = uVar10 * 100;
            }
          } while (9 < (int)uVar11);
        }
LAB_180497ee7:
        uVar15 = (ulonglong)local_248[uVar6];
        uVar5 = (uint)uVar6;
        while( true ) {
          uVar5 = uVar5 + 1 & 0x1ff;
          uVar6 = (ulonglong)uVar5;
          if ((int)(uVar11 - 1) < 1) break;
          if (uVar5 == uVar9) goto LAB_180497f26;
          uVar15 = uVar15 * 100 + (ulonglong)local_248[uVar6];
          uVar11 = uVar11 - 1;
        }
        if (uVar5 == uVar9) {
LAB_180497f26:
          for (iVar12 = uVar11 - 2; -1 < iVar12; iVar12 = iVar12 + -1) {
            uVar15 = uVar15 * 100;
          }
        }
        else {
          uVar15 = uVar15 * 2;
          iVar8 = iVar8 + -1;
          do {
            if (local_248[uVar6] != 0) {
              uVar15 = uVar15 | 1;
              break;
            }
            uVar11 = (int)uVar6 + 1U & 0x1ff;
            uVar6 = (ulonglong)uVar11;
          } while (uVar11 != uVar9);
        }
        FUN_180497fc0(uVar15,param_2,iVar8,param_6);
      }
    }
    else {
      dVar4 = -INFINITY;
      if (param_6 == 0) {
        dVar4 = INFINITY;
      }
      *param_2 = dVar4;
    }
  }
  return param_3;
}



/* ===== 180497fc0 FUN_180497fc0 ===== */

void FUN_180497fc0(ulonglong param_1,double *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  
  iVar4 = -0x433;
  if ((param_3 < -0x432) && (param_1 != 0)) {
    if (param_1 >> 0x20 == 0) {
      iVar2 = 0x1f;
      if ((uint)param_1 != 0) {
        for (; (uint)param_1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
    }
    else {
      iVar2 = 0x1f;
      uVar1 = (uint)(param_1 >> 0x20);
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = iVar2 + 0x20;
    }
    if ((uint)(iVar2 + 0x433 + param_3) < 0x35) {
      iVar4 = -0x433 - param_3;
      uVar3 = 1L << ((byte)iVar4 & 0x3f);
      lVar5 = 2L << ((byte)iVar4 & 0x3f);
      if (((uVar3 & param_1) != 0) && ((param_1 & uVar3 * 3 - 1) != 0)) {
        param_1 = lVar5 + param_1;
      }
      param_1 = ~(lVar5 - 1U) & param_1;
    }
  }
  dVar6 = (double)(longlong)param_1;
  if (param_4 != 0) {
    dVar6 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ DAT_1808adeb0._4_4_,
                             SUB84(dVar6,0) ^ (uint)DAT_1808adeb0);
  }
  if (param_3 != 0) {
    dVar6 = (double)FUN_18051fbc0(iVar4,param_3);
  }
  *param_2 = dVar6;
  return;
}



/* ===== 180498070 FUN_180498070 ===== */

int FUN_180498070(byte *param_1,ulonglong *param_2,int param_3,ulonglong param_4,int param_5,
                 int param_6,uint param_7)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar5 = 0;
  uVar6 = 0x10;
  uVar4 = param_7;
  if (0x10 < param_7) {
    uVar4 = 0x10;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (*param_1 == 0x2e) {
      param_1 = param_1 + 1;
    }
    bVar1 = *param_1;
    uVar3 = bVar1 + 9;
    if (bVar1 < 0x3a) {
      uVar3 = (uint)bVar1;
    }
    param_1 = param_1 + 1;
    uVar5 = (ulonglong)(uVar3 & 0xf) | uVar5 << 4;
  }
  if (0x10 < param_7) {
    do {
      if (*param_1 == 0x2e) {
        param_1 = param_1 + 1;
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar5 | *param_1 != 0x30;
      param_1 = param_1 + 1;
    } while (uVar6 < param_7);
    param_5 = param_5 + param_7 * 4 + -0x40;
  }
  uVar4 = (uint)uVar5;
  if (param_3 == 3) {
    if ((((param_4 & 2) == 0) && (uVar5 < param_6 + 0x80000000)) && ((uVar5 != 0 || (param_6 == 0)))
       ) {
      uVar6 = -uVar4;
      if (param_6 == 0) {
        uVar6 = uVar4;
      }
      *(uint *)param_2 = uVar6;
      return 3;
    }
    if ((param_4 & 0x10) == 0) {
      param_3 = 1;
      goto LAB_180498183;
    }
  }
  else if (param_3 != 4) {
    if ((param_3 == 5) || (param_3 == 6)) {
      if (0x10 < param_7) {
        return 0;
      }
      uVar2 = -uVar5;
      if (param_6 == 0) {
        uVar2 = uVar5;
      }
      *param_2 = uVar2;
      return param_3;
    }
LAB_180498183:
    if ((uVar5 & 0xc000000000000000) != 0) {
      uVar5 = uVar5 >> 2 | (ulonglong)(uVar4 & 3);
      param_5 = param_5 + 2;
    }
    FUN_180497fc0(uVar5,param_2,param_5,param_6);
    return param_3;
  }
  if (8 < param_7) {
    return 0;
  }
  uVar6 = -uVar4;
  if (param_6 == 0) {
    uVar6 = uVar4;
  }
  *(uint *)param_2 = uVar6;
  return 4;
}



/* ===== 180498200 FUN_180498200 ===== */

void FUN_180498200(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  FUN_180491d30(param_1,local_res10,1);
  return;
}



/* ===== 180498220 FUN_180498220 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180498220(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_48;
  iVar1 = FUN_180499410(local_28);
  FUN_180491d30(param_1,local_28,iVar1 - (int)local_28);
  return;
}



/* ===== 180498270 thunk_FUN_1804b8f90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_1804b8f90(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1804b9010(0,0xf000035,*param_2,auStack_38);
  FUN_180491d30(param_1,auStack_38,iVar1 - (int)auStack_38);
  return;
}



/* ===== 180498280 FUN_180498280 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180498280(longlong param_1,ulonglong *param_2)

{
  char *_Str;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  size_t sVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar3 = *param_2;
  uVar2 = (uint)((longlong)uVar3 >> 0x2f);
  if (uVar2 == 0xfffffffb) {
    uVar3 = uVar3 & 0x7fffffffffff;
  }
  else if (uVar2 < 0xfffffff3) {
    uVar3 = FUN_1804b8f90(param_1);
  }
  else if (uVar3 == 0xffffffffffffffff) {
    uVar3 = FUN_180491d30(param_1,&DAT_18056e9bc,3);
  }
  else if (uVar2 == 0xfffffffe) {
    uVar3 = FUN_180491d30(param_1,"false",5);
  }
  else if (uVar2 == 0xfffffffd) {
    uVar3 = FUN_180491d30(param_1,&DAT_1806dfa60,4);
  }
  else {
    _Str = (&PTR_DAT_18056e940)[~uVar2];
    sVar4 = strlen(_Str);
    lVar5 = FUN_180540530(local_48,_Str,sVar4 & 0xffffffff);
    *(undefined2 *)(lVar5 + (sVar4 & 0xffffffff)) = 0x203a;
    lVar5 = lVar5 + (sVar4 & 0xffffffff);
    if (((int)((longlong)*param_2 >> 0x2f) == -9) &&
       (1 < *(byte *)((*param_2 & 0x7fffffffffff) + 10))) {
      *(undefined8 *)(lVar5 + 2) = 0x236e69746c697562;
      lVar5 = FUN_180499410(lVar5 + 10,*(undefined1 *)((*param_2 & 0x7fffffffffff) + 10));
    }
    else {
      lVar6 = FUN_18048f580(*(undefined8 *)(param_1 + 0x10),param_2);
      if (lVar6 == 0) {
        *(undefined4 *)(lVar5 + 2) = 0x4c4c554e;
        lVar5 = lVar5 + 6;
      }
      else {
        if (lVar6 >> 0x20 == 0) {
          uVar3 = 9;
          uVar8 = 10;
        }
        else {
          uVar2 = 0x1f;
          uVar7 = (uint)((ulonglong)lVar6 >> 0x20);
          if (uVar7 != 0) {
            for (; uVar7 >> uVar2 == 0; uVar2 = uVar2 - 1) {
            }
          }
          iVar1 = (uVar2 >> 3) * 2;
          uVar8 = (ulonglong)(iVar1 + 0xc);
          uVar3 = (ulonglong)(iVar1 + 0xb);
        }
        *(undefined2 *)(lVar5 + 2) = 0x7830;
        do {
          uVar2 = (uint)lVar6;
          lVar6 = lVar6 >> 4;
          uVar7 = (int)uVar3 - 1;
          *(char *)(lVar5 + 2 + uVar3) = "0123456789abcdef"[uVar2 & 0xf];
          uVar3 = (ulonglong)uVar7;
        } while (1 < uVar7);
        lVar5 = uVar8 + 2 + lVar5;
      }
    }
    uVar3 = FUN_180491d30(param_1,local_48,lVar5 - (longlong)local_48);
  }
  return uVar3;
}



/* ===== 180498480 FUN_180498480 ===== */

uint FUN_180498480(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  
  pcVar7 = (char *)*param_1;
  param_1[2] = (longlong)pcVar7;
  do {
    if ((char *)param_1[1] <= pcVar7) {
LAB_1804984a2:
      *param_1 = (longlong)pcVar7;
      iVar5 = (int)pcVar7 - (int)param_1[2];
      *(int *)(param_1 + 3) = iVar5;
      return -(uint)(iVar5 != 0) & 2;
    }
    if (*pcVar7 == '%') {
      bVar1 = pcVar7[1];
      pbVar3 = (byte *)(pcVar7 + 1);
      if (bVar1 == 0x25) {
        iVar5 = ((int)pcVar7 + 1) - (int)param_1[2];
        *param_1 = (longlong)(pcVar7 + 2);
        *(int *)(param_1 + 3) = iVar5;
        return -(uint)(iVar5 != 0) & 2;
      }
      if (pcVar7 == (char *)param_1[2]) {
        uVar8 = 0;
        break;
      }
      goto LAB_1804984a2;
    }
    pcVar7 = pcVar7 + 1;
  } while( true );
joined_r0x0001804984f0:
  if (0x10 < bVar1 - 0x20) {
LAB_18049853a:
    uVar6 = *pbVar3 - 0x30;
    if (uVar6 < 10) {
      if (pbVar3[1] - 0x30 < 10) {
        uVar6 = (uint)pbVar3[1] + (uint)*pbVar3 * 10 + -0x210;
        lVar2 = 2;
      }
      else {
        lVar2 = 1;
      }
      pbVar3 = pbVar3 + lVar2;
      uVar8 = uVar8 | uVar6 << 0x10;
    }
    pbVar4 = pbVar3;
    if (*pbVar3 == 0x2e) {
      pbVar4 = pbVar3 + 1;
      uVar9 = pbVar3[1] - 0x30;
      uVar6 = 0;
      if (uVar9 < 10) {
        pbVar4 = pbVar3 + 2;
        if (pbVar3[2] - 0x30 < 10) {
          pbVar4 = pbVar3 + 3;
          uVar6 = (uint)pbVar3[2] + (uint)pbVar3[1] * 10 + -0x210;
        }
        else {
          uVar6 = uVar9;
        }
      }
      uVar8 = uVar8 | uVar6 * 0x1000000 + 0x1000000;
    }
    uVar6 = *pbVar4 - 0x41;
    if ((uVar6 < 0x38) && (bVar1 = (&DAT_18056eb00)[uVar6], bVar1 != 0)) {
      *param_1 = (longlong)(pbVar4 + 1);
      return (uint)bVar1 | ~(uVar6 * 0x100) & 0x2000 | uVar8;
    }
    if (0x1f < *pbVar4) {
      pbVar4 = pbVar4 + 1;
    }
    *(int *)(param_1 + 3) = (int)pbVar4 - (int)param_1[2];
    *param_1 = param_1[1];
    return 1;
  }
  bVar1 = *pbVar3;
  if (bVar1 == 0x2d) {
    uVar6 = 0x100;
  }
  else if (bVar1 == 0x2b) {
    uVar6 = 0x200;
  }
  else if (bVar1 == 0x30) {
    uVar6 = 0x400;
  }
  else if (bVar1 == 0x20) {
    uVar6 = 0x800;
  }
  else {
    if (bVar1 != 0x23) goto LAB_18049853a;
    uVar6 = 0x1000;
  }
  uVar8 = uVar8 | uVar6;
  pbVar3 = pbVar3 + 1;
  bVar1 = *pbVar3;
  goto joined_r0x0001804984f0;
}



/* ===== 180498630 FUN_180498630 ===== */

void FUN_180498630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180498660(param_1,param_2,&local_res18);
  return;
}



/* ===== 180498660 FUN_180498660 ===== */

longlong FUN_180498660(longlong param_1,char *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  char *_Str;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  char *local_38;
  char *local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  piVar1 = (int *)(lVar2 + 200);
  *(longlong *)(lVar2 + 0xe0) = param_1;
  *(undefined8 *)piVar1 = *(undefined8 *)(lVar2 + 0xd8);
  local_38 = param_2;
  sVar6 = strlen(param_2);
  local_30 = param_2 + (sVar6 & 0xffffffff);
  uVar5 = FUN_180498480(&local_38);
  do {
    if (uVar5 == 0) {
      uVar9 = FUN_180491d30(param_1,*(undefined8 *)(lVar2 + 0xd8),*piVar1 - *(int *)(lVar2 + 0xd8));
      **(ulonglong **)(param_1 + 0x28) = uVar9 | 0xfffd800000000000;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
      if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x28)) {
        FUN_18048ea20(param_1);
      }
      return uVar9 + 0x18;
    }
    switch(uVar5 & 0xf) {
    default:
      if (*(int *)(lVar2 + 0xd0) == *piVar1) {
        puVar7 = (undefined1 *)FUN_1804a9db0(piVar1,1);
      }
      else {
        puVar7 = *(undefined1 **)piVar1;
      }
      *puVar7 = 0x3f;
      plVar12 = param_3;
      goto LAB_18049887a;
    case 2:
      FUN_1804a9f00(piVar1,local_28,local_20);
      break;
    case 3:
      lVar11 = *param_3;
      param_3 = param_3 + 1;
      FUN_180498fa0(piVar1,uVar5,(longlong)(int)lVar11);
      break;
    case 4:
      lVar11 = *param_3;
      param_3 = param_3 + 1;
      FUN_180498fa0(piVar1,uVar5,(int)lVar11);
      break;
    case 5:
      lVar11 = *param_3;
      param_3 = param_3 + 1;
      FUN_1804b8ff0(piVar1,0xf000035,lVar11);
      break;
    case 6:
      pcVar3 = (char *)*param_3;
      param_3 = param_3 + 1;
      _Str = "(null)";
      if (pcVar3 != (char *)0x0) {
        _Str = pcVar3;
      }
      sVar6 = strlen(_Str);
      FUN_1804a9f00(piVar1,_Str,sVar6 & 0xffffffff);
      break;
    case 7:
      plVar12 = param_3 + 1;
      lVar11 = *param_3;
      if (*(int *)(lVar2 + 0xd0) == *piVar1) {
        puVar7 = (undefined1 *)FUN_1804a9db0(piVar1,1);
        *puVar7 = (char)lVar11;
      }
      else {
        puVar7 = *(undefined1 **)piVar1;
        *puVar7 = (char)lVar11;
      }
LAB_18049887a:
      puVar8 = (undefined4 *)(puVar7 + 1);
LAB_18049887d:
      *(undefined4 **)piVar1 = puVar8;
      param_3 = plVar12;
      break;
    case 8:
      plVar12 = param_3 + 1;
      lVar11 = *param_3;
      if ((uint)(*(int *)(lVar2 + 0xd0) - *piVar1) < 0x12) {
        puVar8 = (undefined4 *)FUN_1804a9db0(piVar1,0x12);
      }
      else {
        puVar8 = *(undefined4 **)piVar1;
      }
      if (lVar11 == 0) {
        *puVar8 = 0x4c4c554e;
        puVar8 = puVar8 + 1;
      }
      else {
        if (lVar11 >> 0x20 == 0) {
          uVar9 = 9;
          uVar13 = 10;
        }
        else {
          uVar5 = 0x1f;
          uVar10 = (uint)((ulonglong)lVar11 >> 0x20);
          if (uVar10 != 0) {
            for (; uVar10 >> uVar5 == 0; uVar5 = uVar5 - 1) {
            }
          }
          iVar4 = (uVar5 >> 3) * 2;
          uVar13 = (ulonglong)(iVar4 + 0xc);
          uVar9 = (ulonglong)(iVar4 + 0xb);
        }
        *(undefined2 *)puVar8 = 0x7830;
        do {
          uVar5 = (uint)lVar11;
          lVar11 = lVar11 >> 4;
          uVar10 = (int)uVar9 - 1;
          *(char *)((longlong)puVar8 + uVar9) = "0123456789abcdef"[uVar5 & 0xf];
          uVar9 = (ulonglong)uVar10;
        } while (1 < uVar10);
        puVar8 = (undefined4 *)(uVar13 + (longlong)puVar8);
      }
      goto LAB_18049887d;
    }
    uVar5 = FUN_180498480(&local_38);
  } while( true );
}



/* ===== 180498920 FUN_180498920 ===== */

int FUN_180498920(longlong param_1,int *param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong *puVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  undefined4 uVar19;
  int local_res20;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  lVar11 = *(longlong *)(param_1 + 0x28);
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_60 = FUN_1804a8d10(param_1,param_3);
  local_68 = local_60 + 0x18;
  local_60 = local_60 + (ulonglong)*(uint *)(local_60 + 0x14) + 0x18;
  local_res20 = param_4;
  do {
    while( true ) {
      while( true ) {
        uVar5 = FUN_180498480(&local_68);
        if (uVar5 == 0) {
          return local_res20;
        }
        if (uVar5 != 2) break;
        FUN_1804a9f00(param_2,local_58,local_50);
      }
      if (uVar5 == 1) {
        lVar11 = FUN_180491d30(param_1,local_58,local_50);
                    /* WARNING: Subroutine does not return */
        FUN_1804842f0(param_1,0x7c4,lVar11 + 0x18);
      }
      iVar18 = param_3 + 1;
      if ((int)(lVar11 - lVar1 >> 3) < iVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_1804840c0(param_1,iVar18,0x227);
      }
      if ((uVar5 & 0xf) - 3 < 6) break;
LAB_180498db9:
      param_3 = iVar18;
    }
    puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_3 * 8);
    switch(uVar5 & 0xf) {
    case 3:
      if (((int)((longlong)*puVar15 >> 0x2f) == -0xb) &&
         (uVar13 = *puVar15 & 0x7fffffffffff, (ushort)(*(short *)(uVar13 + 10) - 0xbU) < 2)) {
        FUN_180498fa0(param_2,uVar5,*(undefined8 *)(uVar13 + 0x10));
        param_3 = iVar18;
      }
      else {
        FUN_1804a8bb0(param_1,iVar18);
        uVar13 = FUN_18000530c();
        if ((uVar13 == (longlong)(int)uVar13) && (uVar5 == 3)) {
          if ((uint)(param_2[2] - *param_2) < 0xb) {
            uVar6 = FUN_1804a9db0(param_2,0xb);
            uVar6 = FUN_180499410(uVar6,uVar13 & 0xffffffff);
            *(undefined8 *)param_2 = uVar6;
            param_3 = iVar18;
          }
          else {
            uVar6 = FUN_180499410(*(undefined8 *)param_2,uVar13 & 0xffffffff);
            *(undefined8 *)param_2 = uVar6;
            param_3 = iVar18;
          }
        }
        else {
          FUN_180498fa0(param_2,uVar5,uVar13);
          param_3 = iVar18;
        }
      }
      break;
    case 4:
      if (((int)((longlong)*puVar15 >> 0x2f) == -0xb) &&
         (uVar13 = *puVar15 & 0x7fffffffffff, (ushort)(*(short *)(uVar13 + 10) - 0xbU) < 2)) {
        FUN_180498fa0(param_2,uVar5,*(undefined8 *)(uVar13 + 0x10));
        param_3 = iVar18;
      }
      else {
        FUN_1804a8bb0(param_1,iVar18);
        uVar6 = FUN_180005312();
        FUN_180498fa0(param_2,uVar5,uVar6);
        param_3 = iVar18;
      }
      break;
    case 5:
      uVar19 = FUN_1804a8bb0(param_1,iVar18);
      FUN_1804b8ff0(param_2,uVar5,uVar19);
      param_3 = iVar18;
      break;
    case 6:
      iVar16 = (int)((longlong)*puVar15 >> 0x2f);
      if ((iVar16 != -5) &&
         ((((iVar16 != -0xd || (*(char *)((*puVar15 & 0x7fffffffffff) + 10) != '\x03')) &&
           (-1 < local_res20)) &&
          (plVar7 = (longlong *)FUN_180494e10(param_1,puVar15,0x12), *plVar7 != -1)))) {
        plVar2 = *(longlong **)(param_1 + 0x28);
        *(longlong **)(param_1 + 0x28) = plVar2 + 1;
        *plVar2 = *plVar7;
        puVar3 = *(ulonglong **)(param_1 + 0x28);
        *(ulonglong **)(param_1 + 0x28) = puVar3 + 1;
        *puVar3 = *puVar15;
        FUN_18047e730(param_1,1,1);
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
        puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_3 * 8);
        *puVar15 = **(ulonglong **)(param_1 + 0x28);
        if (local_res20 < 2) {
          local_res20 = 1;
          param_3 = iVar18;
          break;
        }
      }
      uVar13 = *puVar15;
      iVar16 = (int)((longlong)uVar13 >> 0x2f);
      if (iVar16 == -5) {
        uVar13 = uVar13 & 0x7fffffffffff;
LAB_180498c3e:
        iVar16 = *(int *)(uVar13 + 0x14);
        lVar8 = uVar13 + 0x18;
      }
      else {
        if ((iVar16 != -0xd) || (uVar13 = uVar13 & 0x7fffffffffff, *(char *)(uVar13 + 10) != '\x03')
           ) {
          uVar13 = FUN_180498280(param_1,puVar15);
          goto LAB_180498c3e;
        }
        if ((int *)(uVar13 + 0x30) == param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_1804840c0(param_1,param_3 + 2,0xf52);
        }
        iVar16 = *(int *)(uVar13 + 0x30) - *(int *)(uVar13 + 0x58);
        lVar8 = *(longlong *)(uVar13 + 0x58);
      }
      if ((uVar5 & 0x10) == 0) {
        FUN_180499660(param_2,uVar5,lVar8);
        param_3 = iVar18;
      }
      else {
        FUN_180499740(param_2,lVar8,iVar16);
        param_3 = iVar18;
      }
      break;
    case 7:
      uVar4 = FUN_1804a8a70(param_1,iVar18);
      uVar14 = uVar5 >> 0x10 & 0xff;
      uVar12 = 1;
      if (0x10000 < (uVar5 & 0xff0000)) {
        uVar12 = uVar14;
      }
      if ((uint)(param_2[2] - *param_2) < uVar12) {
        puVar10 = (undefined1 *)FUN_1804a9db0(param_2);
      }
      else {
        puVar10 = *(undefined1 **)param_2;
      }
      if ((uVar5 & 0x100) != 0) {
        *puVar10 = uVar4;
        puVar10 = puVar10 + 1;
      }
      if (0x10000 < (uVar5 & 0xff0000)) {
        do {
          *puVar10 = 0x20;
          uVar14 = uVar14 - 1;
          puVar10 = puVar10 + 1;
        } while (1 < uVar14);
      }
      if ((uVar5 & 0x100) != 0) {
LAB_180498db6:
        *(undefined1 **)param_2 = puVar10;
        goto LAB_180498db9;
      }
      *puVar10 = uVar4;
      *(undefined1 **)param_2 = puVar10 + 1;
      param_3 = iVar18;
      break;
    case 8:
      lVar8 = FUN_18048f580(*(undefined8 *)(param_1 + 0x10),puVar15);
      if ((uint)(param_2[2] - *param_2) < 0x12) {
        puVar9 = (undefined4 *)FUN_1804a9db0(param_2,0x12);
      }
      else {
        puVar9 = *(undefined4 **)param_2;
      }
      if (lVar8 != 0) {
        if (lVar8 >> 0x20 == 0) {
          uVar13 = 9;
          uVar17 = 10;
        }
        else {
          uVar5 = 0x1f;
          uVar12 = (uint)((ulonglong)lVar8 >> 0x20);
          if (uVar12 != 0) {
            for (; uVar12 >> uVar5 == 0; uVar5 = uVar5 - 1) {
            }
          }
          iVar16 = (uVar5 >> 3) * 2;
          uVar17 = (ulonglong)(iVar16 + 0xc);
          uVar13 = (ulonglong)(iVar16 + 0xb);
        }
        *(undefined2 *)puVar9 = 0x7830;
        do {
          uVar5 = (uint)lVar8;
          lVar8 = lVar8 >> 4;
          uVar12 = (int)uVar13 - 1;
          *(char *)((longlong)puVar9 + uVar13) = "0123456789abcdef"[uVar5 & 0xf];
          uVar13 = (ulonglong)uVar12;
        } while (1 < uVar12);
        puVar10 = (undefined1 *)(uVar17 + (longlong)puVar9);
        goto LAB_180498db6;
      }
      *puVar9 = 0x4c4c554e;
      *(undefined4 **)param_2 = puVar9 + 1;
      param_3 = iVar18;
    }
  } while( true );
}



/* ===== 180498e40 FUN_180498e40 ===== */

int * FUN_180498e40(int *param_1,uint param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 >> 0x10 & 0xff;
  uVar2 = 1;
  if (0x10000 < (param_2 & 0xff0000)) {
    uVar2 = uVar3;
  }
  if ((uint)(param_1[2] - *param_1) < uVar2) {
    puVar1 = (undefined1 *)FUN_1804a9db0();
  }
  else {
    puVar1 = *(undefined1 **)param_1;
  }
  if ((param_2 & 0x100) != 0) {
    *puVar1 = param_3;
    puVar1 = puVar1 + 1;
  }
  if (0x10000 < (param_2 & 0xff0000)) {
    do {
      *puVar1 = 0x20;
      uVar3 = uVar3 - 1;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
  }
  if ((param_2 & 0x100) == 0) {
    *puVar1 = param_3;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 **)param_1 = puVar1;
  return param_1;
}



/* ===== 180498ed0 FUN_180498ed0 ===== */

int * FUN_180498ed0(int *param_1,int param_2,undefined4 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  uVar1 = FUN_18000530c(param_3);
  if ((uVar1 != (longlong)(int)uVar1) || (param_2 != 3)) {
    piVar3 = (int *)FUN_180498fa0(param_1,param_2,uVar1);
    return piVar3;
  }
  if ((uint)(param_1[2] - *param_1) < 0xb) {
    uVar2 = FUN_1804a9db0(param_1,0xb);
  }
  else {
    uVar2 = *(undefined8 *)param_1;
  }
  uVar2 = FUN_180499410(uVar2,uVar1 & 0xffffffff);
  *(undefined8 *)param_1 = uVar2;
  return param_1;
}



/* ===== 180498f60 FUN_180498f60 ===== */

void FUN_180498f60(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180005312(param_3);
  FUN_180498fa0(param_1,param_2,uVar1);
  return;
}



/* ===== 180498f90 FUN_180498f90 ===== */

void FUN_180498f90(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_180499660(param_1,param_2,param_3 + 0x18,*(undefined4 *)(param_3 + 0x14));
  return;
}



/* ===== 180498fa0 FUN_180498fa0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_180498fa0(int *param_1,uint param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_64;
  ulonglong local_60;
  byte local_43 [3];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_88;
  pbVar7 = local_43 + 2;
  uVar3 = 0;
  if (((byte)param_2 & 0xf) == 3) {
    if ((longlong)param_3 < 0) {
      param_3 = -param_3;
      uVar3 = 0x12d;
    }
    else if ((param_2 >> 9 & 1) == 0) {
      uVar3 = 0;
      if ((param_2 >> 0xb & 1) != 0) {
        uVar3 = 0x120;
      }
    }
    else {
      uVar3 = 299;
    }
  }
  uVar8 = (param_2 >> 0x18) - 1;
  uVar10 = param_2 & 0xfffffbff;
  if ((int)uVar8 < 0) {
    uVar10 = param_2;
  }
  if (param_3 == 0) {
    if ((uVar8 != 0) || ((uVar10 & 0x1020) == 0x1020)) {
      pbVar7 = local_43 + 1;
      local_43[1] = 0x30;
    }
  }
  else if ((uVar10 & 0x30) == 0) {
    while (param_3 >> 0x20 != 0) {
      pbVar7 = pbVar7 + -1;
      *pbVar7 = (char)param_3 + (char)(param_3 / 10) * -10 + 0x30;
      param_3 = param_3 / 10;
    }
    do {
      pbVar7 = pbVar7 + -1;
      uVar2 = (param_3 & 0xffffffff) / 10;
      *pbVar7 = (char)param_3 + (char)uVar2 * -10 + 0x30;
      param_3 = uVar2;
    } while ((int)uVar2 != 0);
  }
  else if ((uVar10 & 0x10) == 0) {
    do {
      pbVar4 = pbVar7;
      pbVar7 = pbVar4 + -1;
      *pbVar7 = (byte)param_3 & 7 | 0x30;
      bVar11 = 7 < param_3;
      param_3 = param_3 >> 3;
    } while (bVar11);
    if ((uVar10 >> 0xc & 1) != 0) {
      pbVar7 = pbVar4 + -2;
      *pbVar7 = 0x30;
    }
  }
  else {
    pcVar5 = "0123456789abcdef";
    if ((uVar10 & 0x2000) != 0) {
      pcVar5 = "0123456789ABCDEF";
    }
    do {
      pbVar7 = pbVar7 + -1;
      *pbVar7 = pcVar5[(uint)param_3 & 0xf];
      bVar11 = 0xf < param_3;
      param_3 = param_3 >> 4;
    } while (bVar11);
    if (((uVar10 >> 0xc & 1) != 0) && (uVar3 = 0x278, (uVar10 & 0x2000) != 0)) {
      uVar3 = 600;
    }
  }
  local_64 = ((int)local_43 + 2) - (int)pbVar7;
  local_60 = (ulonglong)local_64;
  if ((int)local_64 < (int)uVar8) {
    local_64 = uVar8;
  }
  uVar6 = uVar10 >> 0x10 & 0xff;
  uVar9 = (uVar3 >> 8) + local_64;
  uVar8 = uVar9;
  if (uVar9 < uVar6) {
    uVar8 = uVar6;
  }
  if ((uint)(param_1[2] - *param_1) < uVar8) {
    pbVar4 = (byte *)FUN_1804a9db0(param_1);
  }
  else {
    pbVar4 = *(byte **)param_1;
  }
  local_68 = uVar10 & 0x500;
  if (local_68 == 0) {
    if (uVar9 < uVar6) {
      FUN_180540170(pbVar4,0x20,uVar6 - uVar9);
      pbVar4 = pbVar4 + (uVar6 - uVar9);
      uVar6 = uVar9;
    }
    uVar6 = uVar6 - 1;
  }
  if (uVar3 != 0) {
    if (0x57 < (byte)uVar3) {
      *pbVar4 = 0x30;
      pbVar4 = pbVar4 + 1;
    }
    *pbVar4 = (byte)uVar3;
    pbVar4 = pbVar4 + 1;
  }
  if (local_68 == 0x400) {
    if (uVar9 < uVar6) {
      FUN_180540170(pbVar4,0x30,uVar6 - uVar9);
      pbVar4 = pbVar4 + (uVar6 - uVar9);
      uVar6 = uVar9;
    }
    uVar6 = uVar6 - 1;
  }
  if ((uint)local_60 < local_64) {
    uVar3 = local_64 - (uint)local_60;
    FUN_180540170(pbVar4,0x30,uVar3);
    pbVar4 = pbVar4 + uVar3;
  }
  if (pbVar7 < local_43 + 2) {
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      *pbVar4 = bVar1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar7 < local_43 + 2);
  }
  if (((uVar10 >> 8 & 1) == 0) || (uVar6 <= uVar9)) {
    *(byte **)param_1 = pbVar4;
  }
  else {
    FUN_180540170(pbVar4,0x20,uVar6 - uVar9);
    *(byte **)param_1 = pbVar4 + (uVar6 - uVar9);
  }
  return param_1;
}



/* ===== 1804992e0 FUN_1804992e0 ===== */

int * FUN_1804992e0(int *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if ((uint)(param_1[2] - *param_1) < 0xb) {
    uVar1 = FUN_1804a9db0(param_1,0xb);
  }
  else {
    uVar1 = *(undefined8 *)param_1;
  }
  uVar1 = FUN_180499410(uVar1,param_2);
  *(undefined8 *)param_1 = uVar1;
  return param_1;
}



