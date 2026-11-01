/* ===== 1804d1420 FUN_1804d1420 ===== */

uint FUN_1804d1420(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x90);
  uVar1 = (ulonglong)param_2 * 8;
  uVar7 = param_3 & *(uint *)(param_1 + 0xa8);
  if (uVar7 == 0) {
    uVar6 = FUN_1804d18c0(param_1,param_3);
    pbVar5 = (byte *)((uVar1 | 6) + lVar3);
    goto LAB_1804d14de;
  }
  pbVar5 = (byte *)(lVar3 + 6 + uVar1);
  if (*pbVar5 < 0xfd) {
    uVar6 = *pbVar5 & 0x7f;
    if ((uVar7 >> ((byte)uVar6 & 0x1f) & 1) != 0) goto LAB_1804d14de;
    if (((param_3 >> ((byte)uVar6 & 0x1f) & 1) != 0) &&
       (uVar2 = *(ushort *)(param_1 + (ulonglong)uVar6 * 4), uVar2 < 0x8001)) {
      FUN_1804d1f50(param_1,uVar2);
      goto LAB_1804d14de;
    }
  }
  if ((param_2 < *(uint *)(param_1 + 0x100)) && ((*(byte *)(lVar3 + 4 + uVar1) & 0x40) == 0)) {
    uVar4 = ~*(uint *)(param_1 + 0xac) & uVar7;
    if (uVar4 == 0) {
      uVar4 = uVar7;
    }
    uVar6 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
  }
  else {
    uVar6 = uVar7 & 0xffc0f0f8;
    if ((uVar7 & 0xffc0f0f8) == 0) {
      uVar6 = uVar7;
    }
    uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    uVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    uVar6 = uVar6 ^ 0x18;
  }
LAB_1804d14de:
  *pbVar5 = (byte)uVar6;
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & ~(1 << (uVar6 & 0x1f));
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar6 & 0x1f));
  *(uint *)(param_1 + (ulonglong)uVar6 * 4) =
       (*(byte *)(lVar3 + 4 + uVar1) & 0x40) * 0x10000 + param_2 * 0x10001;
  return uVar6;
}



/* ===== 1804d1530 FUN_1804d1530 ===== */

uint FUN_1804d1530(longlong param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_2 + 6);
  uVar3 = (uint)bVar1;
  uVar2 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    if ((0xfc < bVar1) ||
       (uVar3 = uVar2 & 0x7f,
       ((*(uint *)(param_1 + 0xa8) & param_3) >> ((byte)uVar3 & 0x1f) & 1) == 0)) {
      uVar3 = param_3 & *(uint *)(param_1 + 0xa8);
      if (uVar3 == 0) {
        uVar3 = FUN_1804d18c0(param_1,param_3);
      }
      else {
        uVar2 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        uVar3 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> uVar3 == 0; uVar3 = uVar3 - 1) {
          }
        }
        uVar3 = uVar3 ^ 0x18;
      }
    }
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar3 & 0x1f);
    *(char *)(param_2 + 6) = (char)uVar3;
  }
  else {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (uVar2 & 0x1f);
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar2 & 0x1f);
  }
  if (*(char *)(param_2 + 7) != '\0') {
    FUN_1804d21e0(param_1,param_2,uVar3);
  }
  return uVar3;
}



/* ===== 1804d15e0 FUN_1804d15e0 ===== */

void FUN_1804d15e0(undefined2 *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  bVar1 = *(byte *)(param_2 + 6);
  uVar4 = (uint)bVar1;
  bVar2 = *(byte *)(param_2 + 0xe);
  lVar7 = param_2 + 8;
  if ((0x605fd9U >> (*(byte *)(param_2 + 4) & 0x1f) & 1) != 0) {
    lVar7 = param_2;
  }
  if ((((*(byte *)(param_1 + 0x54) & 1) == 0) && (bVar1 != 0)) && (bVar2 != 0)) {
    FUN_1804d20f0(param_1,*param_1);
  }
  if ((*(byte *)(param_1 + 0x54) & 4) == 0) {
    if (bVar1 != 2) {
      if (bVar2 != 2) {
        FUN_1804d20f0(param_1,param_1[4]);
      }
      goto LAB_1804d1655;
    }
LAB_1804d165a:
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 1 << (bVar1 & 0x1f);
    *(uint *)(param_1 + 0x56) = *(uint *)(param_1 + 0x56) | 1 << (bVar1 & 0x1f);
  }
  else {
LAB_1804d1655:
    if (-1 < (char)bVar1) goto LAB_1804d165a;
    uVar4 = 0;
  }
  if ((char)bVar2 < '\0') {
    uVar5 = 2;
  }
  else {
    uVar5 = (uint)bVar2;
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 1 << (uVar5 & 0x1f);
    *(uint *)(param_1 + 0x56) = *(uint *)(param_1 + 0x56) | 1 << (uVar5 & 0x1f);
  }
  if (uVar4 == 2) {
    if (uVar5 == 0) {
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
      **(undefined1 **)(param_1 + 0x40) = 0x92;
      if ((0x605fd9U >> (*(byte *)(lVar7 + 4) & 0x1f) & 1) != 0) {
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
        **(undefined1 **)(param_1 + 0x40) = 0x48;
      }
      goto LAB_1804d17bc;
    }
    bVar1 = *(byte *)(lVar7 + 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    *(undefined1 *)(lVar3 + -1) = 0xd0;
    *(undefined4 *)(lVar3 + -5) = 0x8b0000fe;
    uVar4 = 0x605fd9U >> (bVar1 & 0x1f) & 1;
    if (uVar4 == 0) {
      lVar6 = -2;
    }
    else {
      *(byte *)(lVar3 + -3) = (char)uVar4 * '\b' | 0x40;
      lVar6 = -3;
    }
    *(longlong *)(param_1 + 0x40) = lVar6 + lVar3;
    if (uVar5 == 2) goto LAB_1804d17bc;
    uVar8 = 2;
    uVar4 = uVar5;
  }
  else {
    if (uVar5 == 0) {
      bVar1 = *(byte *)(lVar7 + 4);
      lVar3 = *(longlong *)(param_1 + 0x40);
      *(undefined1 *)(lVar3 + -1) = 0xc2;
      *(undefined4 *)(lVar3 + -5) = 0x8b0000fe;
      uVar5 = 0x605fd9U >> (bVar1 & 0x1f) & 1;
      if (uVar5 == 0) {
        lVar6 = -2;
      }
      else {
        *(byte *)(lVar3 + -3) = (char)uVar5 * '\b' | 0x40;
        lVar6 = -3;
      }
      *(longlong *)(param_1 + 0x40) = lVar6 + lVar3;
    }
    else if (uVar5 != 2) {
      FUN_1804d0290(param_1,lVar7,uVar5,2);
    }
    if (uVar4 == 0) goto LAB_1804d17bc;
    uVar8 = 0;
  }
  FUN_1804d0290(param_1,lVar7,uVar4,uVar8);
LAB_1804d17bc:
  if (*(byte *)(param_2 + 0xf) != 0) {
    uVar9 = 2;
    if ((0x605fd9U >> (*(byte *)(param_2 + 0xc) & 0x1f) & 1) != 0) {
      uVar9 = 0x80202;
    }
    FUN_1804d0810(param_1,0x890000fe,uVar9,4,(uint)*(byte *)(param_2 + 0xf) << 2);
  }
  if (*(byte *)(param_2 + 7) != 0) {
    FUN_1804d0810(param_1,0x890000fe,
                  -(uint)((0x605fd9U >> (*(byte *)(param_2 + 4) & 0x1f) & 1) != 0) & 0x80200,4,
                  (uint)*(byte *)(param_2 + 7) << 2);
  }
  return;
}



/* ===== 1804d1850 FUN_1804d1850 ===== */

void FUN_1804d1850(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_1804d1530(param_1,param_2,1 << ((byte)param_3 & 0x1f));
  if (uVar1 != param_3) {
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (param_3 & 0x1f);
    FUN_1804d0290(param_1,param_2,uVar1,param_3);
  }
  return;
}



/* ===== 1804d18c0 FUN_1804d18c0 ===== */

void FUN_1804d18c0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (param_2 < 0x10000) {
    uVar2 = 0xffffffff;
    if ((param_2 & 1) != 0) {
      uVar2 = 0xffffffff;
      if (*param_1 != 0xffffffff) {
        uVar2 = *param_1;
      }
    }
    if ((param_2 & 2) == 0) {
      uVar1 = uVar2;
    }
    else {
      uVar1 = param_1[1];
      if (uVar2 <= param_1[1]) {
        uVar1 = uVar2;
      }
    }
    if ((param_2 & 4) == 0) {
      uVar2 = uVar1;
    }
    else {
      uVar2 = param_1[2];
      if (uVar1 <= param_1[2]) {
        uVar2 = uVar1;
      }
    }
    if ((param_2 & 0x20) == 0) {
      uVar1 = uVar2;
    }
    else {
      uVar1 = param_1[5];
      if (uVar2 <= param_1[5]) {
        uVar1 = uVar2;
      }
    }
    if ((param_2 & 0x40) == 0) {
      uVar2 = uVar1;
    }
    else {
      uVar2 = param_1[6];
      if (uVar1 <= param_1[6]) {
        uVar2 = uVar1;
      }
    }
    if ((char)param_2 < '\0') {
      uVar1 = param_1[7];
      if (uVar2 <= param_1[7]) {
        uVar1 = uVar2;
      }
    }
    else {
      uVar1 = uVar2;
    }
    if ((param_2 >> 8 & 1) == 0) {
      uVar2 = uVar1;
    }
    else {
      uVar2 = param_1[8];
      if (uVar1 <= param_1[8]) {
        uVar2 = uVar1;
      }
    }
    if ((param_2 >> 9 & 1) == 0) {
      uVar1 = uVar2;
    }
    else {
      uVar1 = param_1[9];
      if (uVar2 <= param_1[9]) {
        uVar1 = uVar2;
      }
    }
    if ((param_2 >> 10 & 1) == 0) {
      uVar2 = uVar1;
    }
    else {
      uVar2 = param_1[10];
      if (uVar1 <= param_1[10]) {
        uVar2 = uVar1;
      }
    }
    if ((param_2 >> 0xb & 1) == 0) {
      uVar1 = uVar2;
    }
    else {
      uVar1 = param_1[0xb];
      if (uVar2 <= param_1[0xb]) {
        uVar1 = uVar2;
      }
    }
    if ((param_2 >> 0xc & 1) == 0) {
      uVar2 = uVar1;
    }
    else {
      uVar2 = param_1[0xc];
      if (uVar1 <= param_1[0xc]) {
        uVar2 = uVar1;
      }
    }
    if ((param_2 >> 0xd & 1) == 0) {
      uVar1 = uVar2;
    }
    else {
      uVar1 = param_1[0xd];
      if (uVar2 <= param_1[0xd]) {
        uVar1 = uVar2;
      }
    }
    if ((param_2 >> 0xe & 1) == 0) {
      uVar2 = uVar1;
    }
    else {
      uVar2 = param_1[0xe];
      if (uVar1 <= param_1[0xe]) {
        uVar2 = uVar1;
      }
    }
    if ((param_2 & 0x8000) != 0) {
      uVar1 = param_1[0xf];
LAB_1804d1af8:
      if (uVar1 < uVar2) goto LAB_1804d1afe;
    }
  }
  else {
    uVar2 = 0xffffffff;
    if ((param_2 >> 0x10 & 1) != 0) {
      uVar2 = 0xffffffff;
      if (param_1[0x10] != 0xffffffff) {
        uVar2 = param_1[0x10];
      }
    }
    if ((param_2 >> 0x11 & 1) == 0) {
      uVar1 = uVar2;
    }
    else {
      uVar1 = param_1[0x11];
      if (uVar2 <= param_1[0x11]) {
        uVar1 = uVar2;
      }
    }
    if ((param_2 >> 0x12 & 1) == 0) {
      uVar2 = uVar1;
    }
    else {
      uVar2 = param_1[0x12];
      if (uVar1 <= param_1[0x12]) {
        uVar2 = uVar1;
      }
    }
    if ((param_2 >> 0x13 & 1) == 0) {
      uVar1 = uVar2;
    }
    else {
      uVar1 = param_1[0x13];
      if (uVar2 <= param_1[0x13]) {
        uVar1 = uVar2;
      }
    }
    if ((param_2 >> 0x14 & 1) == 0) {
      uVar2 = uVar1;
    }
    else {
      uVar2 = param_1[0x14];
      if (uVar1 <= param_1[0x14]) {
        uVar2 = uVar1;
      }
    }
    if ((param_2 >> 0x15 & 1) == 0) {
      uVar1 = uVar2;
    }
    else {
      uVar1 = param_1[0x15];
      if (uVar2 <= param_1[0x15]) {
        uVar1 = uVar2;
      }
    }
    if ((param_2 >> 0x16 & 1) == 0) {
      uVar2 = uVar1;
    }
    else {
      uVar2 = param_1[0x16];
      if (uVar1 <= param_1[0x16]) {
        uVar2 = uVar1;
      }
    }
    if ((param_2 >> 0x17 & 1) == 0) {
      uVar1 = uVar2;
    }
    else {
      uVar1 = param_1[0x17];
      if (uVar2 <= param_1[0x17]) {
        uVar1 = uVar2;
      }
    }
    if ((param_2 >> 0x18 & 1) == 0) {
      uVar2 = uVar1;
    }
    else {
      uVar2 = param_1[0x18];
      if (uVar1 <= param_1[0x18]) {
        uVar2 = uVar1;
      }
    }
    if ((param_2 >> 0x19 & 1) == 0) {
      uVar1 = uVar2;
    }
    else {
      uVar1 = param_1[0x19];
      if (uVar2 <= param_1[0x19]) {
        uVar1 = uVar2;
      }
    }
    if ((param_2 >> 0x1a & 1) == 0) {
      uVar2 = uVar1;
    }
    else {
      uVar2 = param_1[0x1a];
      if (uVar1 <= param_1[0x1a]) {
        uVar2 = uVar1;
      }
    }
    if ((param_2 >> 0x1b & 1) == 0) {
      uVar1 = uVar2;
    }
    else {
      uVar1 = param_1[0x1b];
      if (uVar2 <= param_1[0x1b]) {
        uVar1 = uVar2;
      }
    }
    if ((param_2 >> 0x1c & 1) == 0) {
      uVar2 = uVar1;
    }
    else {
      uVar2 = param_1[0x1c];
      if (uVar1 <= param_1[0x1c]) {
        uVar2 = uVar1;
      }
    }
    if ((param_2 >> 0x1d & 1) == 0) {
      uVar1 = uVar2;
    }
    else {
      uVar1 = param_1[0x1d];
      if (uVar2 <= param_1[0x1d]) {
        uVar1 = uVar2;
      }
    }
    if ((param_2 >> 0x1e & 1) == 0) {
      uVar2 = uVar1;
    }
    else {
      uVar2 = param_1[0x1e];
      if (uVar1 <= param_1[0x1e]) {
        uVar2 = uVar1;
      }
    }
    if ((int)param_2 < 0) {
      uVar1 = param_1[0x1f];
      goto LAB_1804d1af8;
    }
  }
  uVar1 = uVar2;
LAB_1804d1afe:
  uVar3 = (ulonglong)(uVar1 & 0xffff);
  if (0x7fff < (ushort)uVar1) {
    param_2 = param_1[0x2c] & param_2;
    if ((param_2 != 0) &&
       ((param_1[0x2c] >> (*(byte *)(*(longlong *)(param_1 + 0x24) + 6 + uVar3 * 8) & 0x1f) & 1) ==
        0)) {
      uVar2 = 0;
      if (param_2 != 0) {
        for (; (param_2 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      uVar3 = (ulonglong)(ushort)param_1[uVar2];
    }
  }
  FUN_1804d20f0(param_1,uVar3);
  return;
}



/* ===== 1804d1b50 FUN_1804d1b50 ===== */

void FUN_1804d1b50(longlong param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  for (uVar6 = ~*(uint *)(param_1 + 0xa8) & 0xffff0000; uVar6 != 0;
      uVar6 = uVar6 & ~(1 << (uVar5 & 0x1f))) {
    uVar5 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    uVar4 = *(ushort *)(param_1 + (ulonglong)uVar5 * 4);
    if (uVar4 < 0x8000) {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)uVar4 * 8);
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar4 * 8);
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar2 & 0x1f);
      *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar2 & 0x1f);
      cVar3 = *(char *)((longlong)puVar1 + 5);
      *(undefined1 *)((longlong)puVar1 + 6) = 0xff;
      if (cVar3 == '\x1c') {
        FUN_1804cff60(param_1);
      }
      else {
        if (cVar3 == '\r') {
          *(undefined1 *)((longlong)puVar1 + 6) = 0x82;
          lVar7 = *(longlong *)(param_1 + 0x98) + -0x168;
        }
        else {
          if (cVar3 != '\x16') {
            if (((cVar3 == '\x1d') || (cVar3 == '\x18')) || ((byte)(cVar3 - 0x19U) < 2)) {
              FUN_1804d0150(param_1,bVar2,*(undefined8 *)(puVar1 + 2));
            }
            else {
              FUN_1804cfe80(param_1,bVar2,*puVar1);
            }
            goto LAB_1804d1c40;
          }
          lVar7 = *(longlong *)(param_1 + 0x98) + -0x170;
        }
        FUN_1804d0600(param_1,0x8b0000fe,bVar2 | 0x80200,lVar7);
      }
LAB_1804d1c40:
      if (*(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88)) goto LAB_1804d1ca6;
    }
  }
  uVar6 = ~*(uint *)(param_1 + 0xa8) & 0xffe7;
  while( true ) {
    if (uVar6 == 0) {
      return;
    }
    uVar5 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    uVar4 = *(ushort *)(param_1 + (ulonglong)uVar5 * 4);
    if ((uVar4 < 0x8000) &&
       (FUN_1804d1f50(param_1,uVar4),
       *(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88))) break;
    uVar6 = uVar6 & ~(1 << (uVar5 & 0x1f));
  }
LAB_1804d1ca6:
                    /* WARNING: Subroutine does not return */
  FUN_1804ccb30(param_1);
}



/* ===== 1804d1cb0 FUN_1804d1cb0 ===== */

void FUN_1804d1cb0(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | param_2;
  uVar7 = ~*(uint *)(param_1 + 0xa8) & param_2 & 0xffff0000;
  while (uVar7 != 0) {
    uVar4 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    uVar3 = *(ushort *)(param_1 + (ulonglong)uVar4 * 4);
    if (uVar3 < 0x8001) {
      FUN_1804d1f50(param_1,uVar3);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x90) + (ulonglong)uVar3 * 8;
      uVar5 = FUN_1804d2290(param_1,lVar1);
      bVar2 = *(byte *)(lVar1 + 6);
      uVar9 = (uint)bVar2;
      uVar8 = (uint)bVar2;
      *(byte *)(lVar1 + 6) = bVar2 | 0x80;
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (uVar8 & 0x1f);
      if ((*(uint *)(param_1 + 0xb0) >> (bVar2 & 0x1f) & 1) == 0) {
        *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar8 & 0x1f);
        if (bVar2 < 0x10) {
          uVar6 = 0x8b0000fe;
          uVar9 = -(uint)((0x605fd9U >> (*(byte *)(lVar1 + 4) & 0x1f) & 1) != 0) & 0x80200 | uVar8;
        }
        else {
          uVar6 = 0x100ff3fc;
          if ((*(byte *)(lVar1 + 4) & 0x1f) == 0xe) {
            uVar6 = 0x100ff2fc;
          }
        }
        FUN_1804d0810(param_1,uVar6,uVar9,4,uVar5);
      }
    }
    uVar7 = uVar7 & ~(1 << (uVar4 & 0x1f));
    if (*(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88)) goto LAB_1804d1e15;
  }
  param_2 = ~*(uint *)(param_1 + 0xa8) & param_2;
  do {
    if (param_2 == 0) {
      return;
    }
    uVar7 = 0;
    if (param_2 != 0) {
      for (; (param_2 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    FUN_1804d20f0(param_1,*(undefined2 *)(param_1 + (ulonglong)uVar7 * 4));
    param_2 = param_2 & ~(1 << (uVar7 & 0x1f));
  } while (*(ulonglong *)(param_1 + 0x88) <= *(ulonglong *)(param_1 + 0x80));
LAB_1804d1e15:
                    /* WARNING: Subroutine does not return */
  FUN_1804ccb30(param_1);
}



/* ===== 1804d1e20 FUN_1804d1e20 ===== */

void FUN_1804d1e20(longlong param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x90) + (ulonglong)param_3 * 8);
  uVar5 = (ulonglong)param_2;
  bVar2 = *(byte *)((longlong)puVar1 + 6);
  if ((char)bVar2 < '\0') {
    if (param_3 < 0x8000) {
      cVar3 = *(char *)((longlong)puVar1 + 5);
      if (cVar3 == '\x1c') {
        if ((*(longlong *)(puVar1 + 2) == 0) || ((*(uint *)(param_1 + 0xa8) & 0xffff0000) == 0)) {
LAB_1804d1ec6:
          FUN_1804cff60(param_1,uVar5,puVar1);
          return;
        }
      }
      else {
        if ((cVar3 == '\x1d') || ((byte)(cVar3 - 0x18U) < 3)) goto LAB_1804d1ec6;
        if (cVar3 != '\x16') {
          FUN_1804cfe80(param_1,uVar5,*puVar1);
          return;
        }
      }
    }
    if ((0xfc < bVar2) && (*(uint *)(param_1 + 0xfc) <= param_3)) {
      *(byte *)((longlong)puVar1 + 6) = (byte)param_2 | 0x80;
    }
    uVar6 = 0xffff0000;
    if (param_2 < 0x10) {
      uVar6 = 0xffe7;
    }
    uVar4 = FUN_1804d1420(param_1,(ulonglong)param_3,uVar6);
  }
  else {
    uVar4 = (uint)bVar2;
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar4 & 0x1f));
  if (param_2 != uVar4) {
    if (((*(byte *)(puVar1 + 1) & 0x40) != 0) &&
       (*(ushort *)(param_1 + 0x160 + uVar5 * 2) == param_3)) {
      *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar4 & 0x1f);
      FUN_1804d2040(param_1,uVar4,uVar5);
      return;
    }
    FUN_1804d0290(param_1,puVar1,uVar5);
  }
  return;
}



/* ===== 1804d1f50 FUN_1804d1f50 ===== */

uint FUN_1804d1f50(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)param_2 * 8);
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x90) + (ulonglong)param_2 * 8);
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar2 & 0x1f);
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar2 & 0x1f);
  cVar3 = *(char *)((longlong)puVar1 + 5);
  *(undefined1 *)((longlong)puVar1 + 6) = 0xff;
  if (cVar3 == '\x1c') {
    FUN_1804cff60(param_1,bVar2);
    return (uint)bVar2;
  }
  uVar4 = (uint)bVar2;
  if (cVar3 == '\r') {
    *(undefined1 *)((longlong)puVar1 + 6) = 0x82;
    FUN_1804d0600(param_1,0x8b0000fe,uVar4 | 0x80200,*(longlong *)(param_1 + 0x98) + -0x168);
    return uVar4;
  }
  if (cVar3 == '\x16') {
    FUN_1804d0600(param_1,0x8b0000fe,uVar4 | 0x80200,*(longlong *)(param_1 + 0x98) + -0x170);
    return uVar4;
  }
  if (((cVar3 == '\x1d') || (cVar3 == '\x18')) || ((byte)(cVar3 - 0x19U) < 2)) {
    FUN_1804d0150(param_1,uVar4,*(undefined8 *)(puVar1 + 2));
    return uVar4;
  }
  FUN_1804cfe80(param_1,uVar4,*puVar1);
  return uVar4;
}



/* ===== 1804d2040 FUN_1804d2040 ===== */

void FUN_1804d2040(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *(uint *)(param_1 + (ulonglong)param_2 * 4);
  *(uint *)(param_1 + (ulonglong)param_3 * 4) = uVar2;
  lVar1 = *(longlong *)(param_1 + 0x90);
  uVar2 = uVar2 & 0xffff;
  uVar3 = (ulonglong)uVar2;
  *(char *)(lVar1 + 6 + uVar3 * 8) = (char)param_3;
  *(undefined4 *)(param_1 + (ulonglong)param_2 * 4) = 0;
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (param_2 & 0x1f);
  *(uint *)(param_1 + 0xa8) =
       (*(uint *)(param_1 + 0xa8) | 1 << (param_2 & 0x1f)) & ~(1 << (param_3 & 0x1f));
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (param_3 & 0x1f));
  FUN_1804d0290(param_1,lVar1 + uVar3 * 8,param_2,param_3);
  if (*(char *)(*(longlong *)(param_1 + 0x90) + 7 + uVar3 * 8) == '\0') {
    FUN_1804d1370(param_1,param_2,uVar2,*(int *)(param_1 + 0xe4) + *(int *)(param_1 + 0xdc));
  }
  return;
}



/* ===== 1804d20f0 FUN_1804d20f0 ===== */

ulonglong FUN_1804d20f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  if (param_2 < 0x8001) {
    uVar4 = FUN_1804d1f50();
    return uVar4;
  }
  lVar1 = *(longlong *)(param_1 + 0x90) + (ulonglong)param_2 * 8;
  uVar3 = FUN_1804d2290(param_1,lVar1);
  bVar2 = *(byte *)(lVar1 + 6);
  uVar4 = (ulonglong)bVar2;
  *(byte *)(lVar1 + 6) = bVar2 | 0x80;
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar2 & 0x1f);
  if ((*(uint *)(param_1 + 0xb0) >> (bVar2 & 0x1f) & 1) == 0) {
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar2 & 0x1f);
    if (bVar2 < 0x10) {
      uVar5 = 0x8b0000fe;
      uVar6 = (ulonglong)
              (-(uint)((0x605fd9U >> (*(byte *)(lVar1 + 4) & 0x1f) & 1) != 0) & 0x80200 |
              (uint)bVar2);
    }
    else {
      uVar5 = 0x100ff3fc;
      uVar6 = uVar4;
      if ((*(byte *)(lVar1 + 4) & 0x1f) == 0xe) {
        uVar5 = 0x100ff2fc;
      }
    }
    FUN_1804d0810(param_1,uVar5,uVar6,4,uVar3);
  }
  return uVar4;
}



/* ===== 1804d21e0 FUN_1804d21e0 ===== */

void FUN_1804d21e0(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if ((uint)param_3 < 0x10) {
    uVar1 = 0x890000fe;
    param_3 = (ulonglong)
              ((-(uint)((0x605fd9U >> (*(byte *)(param_2 + 4) & 0x1f) & 1) != 0) & 0x80200) +
              (uint)param_3);
  }
  else {
    uVar1 = 0x110ff3fc;
    if ((*(byte *)(param_2 + 4) & 0x1f) == 0xe) {
      uVar1 = 0x110ff2fc;
    }
  }
  FUN_1804d0810(param_1,uVar1,param_3,4,(uint)*(byte *)(param_2 + 7) * 4);
  return;
}



/* ===== 1804d2250 FUN_1804d2250 ===== */

uint FUN_1804d2250(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  param_2 = param_2 & *(uint *)(param_1 + 0xa8);
  if (param_2 == 0) {
    uVar1 = FUN_1804d18c0();
  }
  else {
    uVar2 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
    uVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    uVar1 = uVar1 ^ 0x18;
  }
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar1 & 0x1f);
  return uVar1;
}



/* ===== 1804d2290 FUN_1804d2290 ===== */

int FUN_1804d2290(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (*(byte *)(param_2 + 7) != 0) {
    return (uint)*(byte *)(param_2 + 7) * 4;
  }
  if ((0x605fd9U >> (*(byte *)(param_2 + 4) & 0x1f) & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0xc4);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xc4) = 0;
      goto LAB_1804d22ea;
    }
    iVar1 = *(int *)(param_1 + 0xc0);
    *(int *)(param_1 + 0xc4) = iVar1 + 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc0);
  }
  *(int *)(param_1 + 0xc0) = iVar1 + 2;
LAB_1804d22ea:
  if (0x100 < *(int *)(param_1 + 0xc0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(*(undefined8 *)(param_1 + 0x98),0x1e);
  }
  *(char *)(param_2 + 7) = (char)iVar1;
  return iVar1 * 4;
}



/* ===== 1804d2330 FUN_1804d2330 ===== */

void FUN_1804d2330(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_48 = param_3 + 0x18;
  local_38 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_40 = param_1 + 3;
  local_18 = 100;
  local_58 = param_3 + 0x18 + (ulonglong)*(uint *)(param_3 + 0x14);
  local_50 = local_58;
  local_30 = local_48;
  lVar1 = FUN_1804d2750(local_48,&local_58,param_2);
  if (lVar1 != local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_180484220(param_1,0x1020);
  }
  return;
}



/* ===== 1804d23a0 FUN_1804d23a0 ===== */

void FUN_1804d23a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  uint uVar6;
  
  if ((*(int *)(param_2 + 0x34) == 0) && (uVar2 = FUN_1804929b0(param_2), uVar2 != 0)) {
    uVar6 = 1;
    if (uVar2 == 1) {
      FUN_180492f90(param_1,param_2,*(undefined4 *)(param_2 + 0x30),1);
    }
    else {
      iVar3 = 0x1f;
      if (uVar2 - 1 != 0) {
        for (; uVar2 - 1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      FUN_180492f90(param_1,param_2,*(undefined4 *)(param_2 + 0x30),iVar3 + 1);
      if (uVar2 == 0) {
        return;
      }
    }
    do {
      if (*(uint *)(param_2 + 0x30) <= uVar6) {
        return;
      }
      lVar1 = *(longlong *)(param_2 + 0x10) + (ulonglong)uVar6 * 8;
      iVar3 = (int)((longlong)*(undefined8 *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar6 * 8)
                   >> 0x2f);
      if (iVar3 == -0xc) {
        plVar4 = (longlong *)FUN_1804926a0(param_1,param_2,lVar1);
        if (*plVar4 == -1) {
          puVar5 = (ulonglong *)FUN_180492c50(param_1,param_2,lVar1);
          *puVar5 = (ulonglong)(uVar6 - 1);
        }
      }
      else if (iVar3 != -2) {
                    /* WARNING: Subroutine does not return */
        FUN_180484220(param_1,0xf70);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 <= uVar2);
  }
  return;
}



/* ===== 1804d2490 FUN_1804d2490 ===== */

void FUN_1804d2490(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  uint uVar7;
  
  if ((*(int *)(param_2 + 0x34) == 0) && (uVar3 = FUN_1804929b0(param_2), uVar3 != 0)) {
    uVar7 = 1;
    if (uVar3 == 1) {
      FUN_180492f90(param_1,param_2,*(undefined4 *)(param_2 + 0x30),1);
    }
    else {
      iVar4 = 0x1f;
      if (uVar3 - 1 != 0) {
        for (; uVar3 - 1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      FUN_180492f90(param_1,param_2,*(undefined4 *)(param_2 + 0x30),iVar4 + 1);
      if (uVar3 == 0) {
        return;
      }
    }
    do {
      if (*(uint *)(param_2 + 0x30) <= uVar7) {
        return;
      }
      lVar1 = *(longlong *)(param_2 + 0x10);
      uVar2 = *(ulonglong *)(lVar1 + (ulonglong)uVar7 * 8);
      iVar4 = (int)((longlong)uVar2 >> 0x2f);
      if (iVar4 == -5) {
        lVar5 = FUN_180492860(param_2,uVar2 & 0x7fffffffffff);
        if (lVar5 == 0) {
          puVar6 = (ulonglong *)FUN_180492c50(param_1,param_2,lVar1 + (ulonglong)uVar7 * 8);
          *puVar6 = (ulonglong)(uVar7 - 1);
        }
      }
      else if (iVar4 != -2) {
                    /* WARNING: Subroutine does not return */
        FUN_180484220(param_1,0xf70);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 <= uVar3);
  }
  return;
}



/* ===== 1804d2580 FUN_1804d2580 ===== */

void FUN_1804d2580(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_28 = 0;
  uStack_20 = 0;
  local_40 = param_1 + 5;
  local_38 = lVar1 + 200;
  local_58 = *(longlong *)(lVar1 + 0xd8);
  local_50 = *(undefined8 *)(lVar1 + 0xd0);
  local_18 = 100;
  local_48 = local_58;
  local_30 = local_58;
  lVar1 = FUN_1804d2d00(local_58,&local_58,param_2);
  FUN_180491d30(param_1,local_48,lVar1 - local_48);
  return;
}



/* ===== 1804d2610 FUN_1804d2610 ===== */

void FUN_1804d2610(longlong param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = 100;
  FUN_1804d2750(*(undefined8 *)(param_1 + 0x28),param_1,param_2);
  return;
}



/* ===== 1804d2630 FUN_1804d2630 ===== */

undefined8 FUN_1804d2630(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint local_res8 [8];
  
  pbVar3 = (byte *)param_1[5];
  if (pbVar3 < (byte *)*param_1) {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    local_res8[0] = (uint)bVar1;
    uVar2 = (uint)bVar1;
    if (0xdf < bVar1) {
      pbVar3 = (byte *)FUN_1804d3380(pbVar3,(byte *)*param_1,local_res8);
      uVar2 = local_res8[0];
    }
    if (pbVar3 != (byte *)0x0) {
      switch(uVar2) {
      case 0:
        break;
      case 1:
        return 1;
      case 2:
        return 2;
      case 3:
      case 4:
      case 5:
        return 3;
      case 6:
      case 7:
        return 0xe;
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
        return 0xb;
      default:
        return 4;
      case 0x10:
      case 0x11:
      case 0x12:
        return 10;
      }
    }
  }
  return 0;
}



/* ===== 1804d2720 FUN_1804d2720 ===== */

undefined8 * FUN_1804d2720(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 8) = 100;
  uVar1 = FUN_1804d2d00(*param_1,param_1,param_2);
  *param_1 = uVar1;
  return param_1;
}



/* ===== 1804d2750 FUN_1804d2750 ===== */

double * FUN_1804d2750(double *param_1,undefined8 *param_2,double *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  double dVar3;
  double *pdVar4;
  undefined8 uVar5;
  longlong *plVar6;
  double *pdVar7;
  undefined2 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong local_res8;
  undefined1 local_res10 [8];
  
  pdVar7 = (double *)*param_2;
  if (param_1 < pdVar7) {
    bVar1 = *(byte *)param_1;
    param_1 = (double *)((longlong)param_1 + 1);
    local_res8 = CONCAT44(local_res8._4_4_,(uint)bVar1);
    uVar12 = (uint)bVar1;
    if (0xdf < bVar1) {
      param_1 = (double *)FUN_1804d3380(param_1,pdVar7,&local_res8);
      goto LAB_1804d278e;
    }
  }
  else {
    param_1 = (double *)0x0;
LAB_1804d278e:
    uVar12 = (uint)local_res8;
  }
  if (param_1 == (double *)0x0) goto LAB_1804d2cd0;
  if (0x1f < uVar12) {
    uVar12 = uVar12 - 0x20;
    if ((uint)((int)pdVar7 - (int)param_1) < uVar12) goto LAB_1804d2cd0;
    uVar2 = FUN_180491d30(param_2[3] & 0xfffffffffffffff8,param_1,uVar12);
    dVar3 = (double)(uVar2 | 0xfffd800000000000);
    pdVar4 = (double *)((ulonglong)uVar12 + (longlong)param_1);
    goto LAB_1804d2c53;
  }
  if (uVar12 == 6) {
    if ((double *)((longlong)param_1 + 4U) <= pdVar7) {
      *param_3 = (double)(int)*(uint *)param_1;
      return (double *)((longlong)param_1 + 4);
    }
    goto LAB_1804d2cd0;
  }
  if (uVar12 == 7) {
    pdVar4 = param_1 + 1;
    if (pdVar7 < pdVar4) goto LAB_1804d2cd0;
    dVar3 = *param_1;
    *param_3 = dVar3;
    if ((uint)((longlong)dVar3 >> 0x2f) < 0xfffffff2) {
      return pdVar4;
    }
    dVar3 = -NAN;
LAB_1804d2842:
    *param_3 = dVar3;
  }
  else {
    pdVar4 = param_1;
    if (uVar12 < 3) {
      dVar3 = (double)~((ulonglong)uVar12 << 0x2f);
    }
    else {
      if (uVar12 == 0xf) {
        if (pdVar7 <= param_1) {
LAB_1804d2cc7:
          local_res8 = 0;
LAB_1804d2cd0:
                    /* WARNING: Subroutine does not return */
          FUN_180484220(param_2[3] & 0xfffffffffffffff8,0x1007);
        }
        bVar1 = *(byte *)param_1;
        pdVar4 = (double *)((longlong)param_1 + 1);
        local_res8 = CONCAT44(local_res8._4_4_,(uint)bVar1);
        uVar12 = (uint)bVar1;
        if (0xdf < bVar1) {
          pdVar4 = (double *)FUN_1804d3380(pdVar4);
          uVar12 = (uint)local_res8;
        }
        if (pdVar4 == (double *)0x0) goto LAB_1804d2cd0;
        lVar15 = param_2[6];
        if (((lVar15 == 0) || (*(uint *)(lVar15 + 0x30) <= uVar12 + 1)) ||
           (dVar3 = *(double *)(*(longlong *)(lVar15 + 0x10) + (ulonglong)(uVar12 + 1) * 8),
           (int)((longlong)dVar3 >> 0x2f) != -5)) {
                    /* WARNING: Subroutine does not return */
          FUN_1804842f0(param_2[3] & 0xfffffffffffffff8,0xfb6);
        }
        goto LAB_1804d2842;
      }
      if (uVar12 - 8 < 7) {
        uVar14 = 0;
        uVar9 = 0;
        if (*(int *)(param_2 + 8) < 1) {
                    /* WARNING: Subroutine does not return */
          FUN_180484220(param_2[3] & 0xfffffffffffffff8,0xfdd);
        }
        uVar2 = 0;
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
        if (uVar12 == 0xe) {
          if (pdVar7 <= param_1) goto LAB_1804d2cd0;
          bVar1 = *(byte *)param_1;
          param_1 = (double *)((longlong)param_1 + 1);
          local_res8 = CONCAT44(local_res8._4_4_,(uint)bVar1);
          uVar12 = (uint)bVar1;
          if (0xdf < bVar1) {
            param_1 = (double *)FUN_1804d3380(param_1);
            uVar12 = (uint)local_res8;
          }
          if (param_1 == (double *)0x0) goto LAB_1804d2cd0;
          lVar15 = param_2[7];
          if (((lVar15 == 0) || (*(uint *)(lVar15 + 0x30) <= uVar12 + 1)) ||
             (uVar2 = *(ulonglong *)(*(longlong *)(lVar15 + 0x10) + (ulonglong)(uVar12 + 1) * 8),
             (int)((longlong)uVar2 >> 0x2f) != -0xc)) {
                    /* WARNING: Subroutine does not return */
            FUN_1804842f0(param_2[3] & 0xfffffffffffffff8,0xfb6);
          }
          if (pdVar7 <= param_1) goto LAB_1804d2cc7;
          bVar1 = *(byte *)param_1;
          param_1 = (double *)((longlong)param_1 + 1);
          local_res8 = CONCAT44(local_res8._4_4_,(uint)bVar1);
          uVar12 = (uint)bVar1;
          if (0xdf < bVar1) {
            param_1 = (double *)FUN_1804d3380(param_1);
            uVar12 = (uint)local_res8;
          }
          if (param_1 == (double *)0x0) goto LAB_1804d2cd0;
          if (5 < uVar12 - 8) goto LAB_1804d2c78;
          uVar2 = uVar2 & 0x7fffffffffff;
        }
        if (9 < uVar12) {
          if (pdVar7 <= param_1) goto LAB_1804d2cc7;
          bVar1 = *(byte *)param_1;
          param_1 = (double *)((longlong)param_1 + 1);
          local_res8 = CONCAT44(local_res8._4_4_,(uint)bVar1);
          uVar14 = (uint)bVar1;
          if (0xdf < bVar1) {
            param_1 = (double *)FUN_1804d3380(param_1);
            uVar14 = (uint)local_res8;
          }
          if (param_1 == (double *)0x0) goto LAB_1804d2cd0;
        }
        if ((uVar12 & 1) != 0) {
          if (pdVar7 <= param_1) goto LAB_1804d2cc7;
          bVar1 = *(byte *)param_1;
          param_1 = (double *)((longlong)param_1 + 1);
          local_res8 = CONCAT44(local_res8._4_4_,(uint)bVar1);
          uVar9 = (uint)bVar1;
          if (0xdf < bVar1) {
            param_1 = (double *)FUN_1804d3380(param_1);
            uVar9 = (uint)local_res8;
          }
          if (param_1 == (double *)0x0) goto LAB_1804d2cd0;
          if (uVar9 != 0) {
            if (uVar9 == 1) {
              iVar13 = 1;
            }
            else {
              iVar13 = 0x1f;
              if (uVar9 - 1 != 0) {
                for (; uVar9 - 1 >> iVar13 == 0; iVar13 = iVar13 + -1) {
                }
              }
              iVar13 = iVar13 + 1;
            }
            goto LAB_1804d2a5a;
          }
        }
        iVar13 = 0;
LAB_1804d2a5a:
        local_res8 = FUN_180492ab0(param_2[3] & 0xfffffffffffffff8,uVar14,iVar13);
        *(ulonglong *)(local_res8 + 0x20) = uVar2;
        *param_3 = (double)(local_res8 | 0xfffa000000000000);
        uVar2 = local_res8;
        if (uVar14 != 0) {
          lVar15 = *(longlong *)(local_res8 + 0x10);
          lVar10 = 0;
          if (0xb < uVar12) {
            lVar10 = 8;
          }
          for (uVar11 = lVar10 + lVar15; uVar2 = local_res8, uVar11 < lVar15 + (ulonglong)uVar14 * 8
              ; uVar11 = uVar11 + 8) {
            param_1 = (double *)FUN_1804d2750(param_1,param_2,uVar11);
          }
        }
        while( true ) {
          uVar11 = local_res8;
          if (uVar9 == 0) {
            *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
            return param_1;
          }
          local_res8 = uVar2;
          uVar5 = FUN_1804d2750(param_1,param_2,local_res10);
          plVar6 = (longlong *)FUN_1804931f0(param_2[3] & 0xfffffffffffffff8,uVar11,local_res10);
          if (*plVar6 != -1) break;
          param_1 = (double *)FUN_1804d2750(uVar5,param_2,plVar6);
          uVar9 = uVar9 - 1;
          uVar2 = local_res8;
          local_res8 = uVar11;
        }
                    /* WARNING: Subroutine does not return */
        FUN_180484220(param_2[3] & 0xfffffffffffffff8,0xff3);
      }
      if (uVar12 - 0x10 < 3) {
        lVar15 = 8;
        if (uVar12 == 0x12) {
          lVar15 = 0x10;
        }
        iVar13 = 8;
        if (uVar12 == 0x12) {
          iVar13 = 0x10;
        }
        if (pdVar7 < (double *)(lVar15 + (longlong)param_1)) goto LAB_1804d2cd0;
        if (*(longlong *)(*(longlong *)((param_2[3] & 0xfffffffffffffff8) + 0x10) + 0x188) != 0) {
          if (uVar12 == 0x10) {
            uVar8 = 0xb;
          }
          else {
            uVar8 = 0x12;
            if (uVar12 == 0x11) {
              uVar8 = 0xc;
            }
          }
          uVar2 = FUN_1804916f0(param_2[3] & 0xfffffffffffffff8,lVar15 + 0x10);
          *(undefined1 *)(uVar2 + 9) = 10;
          *(undefined2 *)(uVar2 + 10) = uVar8;
          FUN_180540530(uVar2 + 0x10,param_1,lVar15);
          if (iVar13 == 0x10) {
            if (0xfffffff1 < (uint)((longlong)*(undefined8 *)(uVar2 + 0x10) >> 0x2f)) {
              *(undefined8 *)(uVar2 + 0x10) = 0xfff8000000000000;
            }
            if (0xfffffff1 < (uint)((longlong)*(undefined8 *)(uVar2 + 0x18) >> 0x2f)) {
              *(undefined8 *)(uVar2 + 0x18) = 0xfff8000000000000;
            }
          }
          *param_3 = (double)(uVar2 | 0xfffa800000000000);
          return (double *)(lVar15 + (longlong)param_1);
        }
LAB_1804d2c78:
                    /* WARNING: Subroutine does not return */
        FUN_1804842f0(param_2[3] & 0xfffffffffffffff8,0xf98,uVar12);
      }
      if (5 < uVar12) goto LAB_1804d2c78;
      if (uVar12 == 4) {
        if (pdVar7 < (double *)((longlong)param_1 + 4U)) goto LAB_1804d2cd0;
        dVar3 = (double)(ulonglong)*(uint *)param_1;
        pdVar4 = (double *)((longlong)param_1 + 4U);
      }
      else {
        dVar3 = 0.0;
        if (uVar12 == 5) {
          pdVar4 = param_1 + 1;
          if (pdVar7 < pdVar4) goto LAB_1804d2cd0;
          dVar3 = *param_1;
        }
      }
      uVar2 = FUN_180493e30(param_2[3] & 0xfffffffffffffff8,dVar3);
      dVar3 = (double)(uVar2 | 0xfffe000000000000);
    }
LAB_1804d2c53:
    *param_3 = dVar3;
  }
  return pdVar4;
}



/* ===== 1804d2d00 FUN_1804d2d00 ===== */

ulonglong * FUN_1804d2d00(byte *param_1,undefined8 *param_2,ulonglong *param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  int *piVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  
  uVar13 = *param_3;
  uVar11 = (uint)((longlong)uVar13 >> 0x2f);
  iVar16 = (int)param_1;
  if (uVar11 == 0xfffffffb) {
    uVar11 = *(uint *)((uVar13 & 0x7fffffffffff) + 0x14);
    if ((uint)(*(int *)(param_2 + 1) - iVar16) < uVar11 + 5) {
      *param_2 = param_1;
      param_1 = (byte *)FUN_1804a9db0(param_2);
    }
    if (uVar11 + 0x20 < 0xe0) {
      *param_1 = (byte)(uVar11 + 0x20);
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (byte *)FUN_1804d33d0(param_1);
    }
    lVar2 = FUN_180540530(param_1,(uVar13 & 0x7fffffffffff) + 0x18,(ulonglong)uVar11);
    return (ulonglong *)((ulonglong)uVar11 + lVar2);
  }
  if (uVar11 < 0xfffffff2) {
    if ((uint)(*(int *)(param_2 + 1) - iVar16) < 9) {
      *param_2 = param_1;
      param_1 = (byte *)FUN_1804a9db0(param_2,9);
    }
    *param_1 = 7;
    *(ulonglong *)(param_1 + 1) = uVar13;
LAB_1804d3318:
    return (ulonglong *)(param_1 + 9);
  }
  if (0xfffffffc < uVar11) {
    if (*(int *)(param_2 + 1) == iVar16) {
      *param_2 = param_1;
      param_1 = (byte *)FUN_1804a9db0(param_2,1);
    }
    *param_1 = ~(byte)((longlong)*param_3 >> 0x2f);
    return (ulonglong *)(param_1 + 1);
  }
  if (uVar11 == 0xfffffff4) {
    if (*(int *)(param_2 + 8) < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_180484220(param_2[3] & 0xfffffffffffffff8,0xfdd);
    }
    uVar11 = 0;
    uVar13 = uVar13 & 0x7fffffffffff;
    uVar18 = 0;
    uVar17 = 2;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
    if (*(uint *)(uVar13 + 0x30) != 0) {
      lVar2 = (ulonglong)*(uint *)(uVar13 + 0x30) - 1;
      do {
        if ((*(longlong **)(uVar13 + 0x10))[lVar2] != -1) break;
        lVar2 = lVar2 + -1;
      } while (-1 < lVar2);
      uVar11 = (int)lVar2 + 1;
      if ((uVar11 != 0) && (uVar17 = 2, **(longlong **)(uVar13 + 0x10) == -1)) {
        uVar17 = 4;
      }
    }
    if (*(uint *)(uVar13 + 0x34) != 0) {
      uVar8 = 0;
      do {
        uVar10 = (ulonglong)uVar8;
        uVar8 = uVar8 + 1;
        uVar18 = uVar18 + (*(longlong *)(*(longlong *)(uVar13 + 0x28) + uVar10 * 0x18) != -1);
      } while (uVar8 <= *(uint *)(uVar13 + 0x34));
    }
    lVar2 = param_2[7];
    if ((lVar2 != 0) && (uVar10 = *(ulonglong *)(uVar13 + 0x20), uVar10 != 0)) {
      uVar8 = (uint)((uVar10 | 0xfffa000000000000) >> 0x20);
      uVar9 = ((uint)uVar10 ^ uVar8) - (uVar8 >> 0x12 | uVar8 << 0xe);
      puVar15 = (uint *)(*(longlong *)(lVar2 + 0x28) +
                        (ulonglong)
                        (((uVar8 >> 0xd | uVar8 << 0x13) ^ uVar9) - (uVar9 >> 0x13 | uVar9 * 0x2000)
                        & *(uint *)(lVar2 + 0x34)) * 0x18);
      do {
        if (*(ulonglong *)(puVar15 + 2) == (uVar10 | 0xfffa000000000000)) {
          uVar8 = *puVar15;
          if ((uint)(*(int *)(param_2 + 1) - iVar16) < 6) {
            *param_2 = param_1;
            param_1 = (byte *)FUN_1804a9db0(param_2,6);
          }
          *param_1 = 0xe;
          if (uVar8 < 0xe0) {
            param_1[1] = (byte)uVar8;
            param_1 = param_1 + 2;
          }
          else {
            param_1 = (byte *)FUN_1804d33d0(param_1 + 1,uVar8);
          }
          break;
        }
        puVar15 = *(uint **)(puVar15 + 4);
      } while (puVar15 != (uint *)0x0);
    }
    if ((uint)(*(int *)(param_2 + 1) - (int)param_1) < 0xb) {
      *param_2 = param_1;
      param_1 = (byte *)FUN_1804a9db0(param_2,0xb);
    }
    puVar7 = (ulonglong *)(param_1 + 1);
    uVar8 = 0;
    if (uVar11 != 0) {
      uVar8 = uVar17;
    }
    *param_1 = (byte)uVar8 | (uVar18 != 0) + 8U;
    if (uVar11 != 0) {
      if (uVar11 < 0xe0) {
        *(byte *)puVar7 = (byte)uVar11;
        puVar7 = (ulonglong *)(param_1 + 2);
      }
      else {
        puVar7 = (ulonglong *)FUN_1804d33d0(puVar7,uVar11);
      }
    }
    if (uVar18 != 0) {
      if (uVar18 < 0xe0) {
        *(byte *)puVar7 = (byte)uVar18;
        puVar7 = (ulonglong *)((longlong)puVar7 + 1);
      }
      else {
        puVar7 = (ulonglong *)FUN_1804d33d0(puVar7,uVar18);
      }
    }
    if (uVar11 != 0) {
      lVar2 = *(longlong *)(uVar13 + 0x10);
      for (uVar10 = lVar2 + (ulonglong)(uVar17 >> 2) * 8; uVar10 < lVar2 + (ulonglong)uVar11 * 8;
          uVar10 = uVar10 + 8) {
        puVar7 = (ulonglong *)FUN_1804d2d00(puVar7,param_2,uVar10);
      }
    }
    if (uVar18 == 0) {
LAB_1804d3161:
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      return puVar7;
    }
    lVar2 = param_2[6];
    plVar14 = (longlong *)
              (*(longlong *)(uVar13 + 0x28) + (ulonglong)*(uint *)(uVar13 + 0x34) * 0x18);
    if (lVar2 == 0) {
      do {
        if (*plVar14 != -1) {
          uVar5 = FUN_1804d2d00(puVar7,param_2,plVar14 + 1);
          puVar7 = (ulonglong *)FUN_1804d2d00(uVar5,param_2,plVar14);
          uVar18 = uVar18 - 1;
          if (uVar18 == 0) goto LAB_1804d3161;
        }
        plVar14 = plVar14 + -3;
      } while( true );
    }
    do {
      if (*plVar14 != -1) {
        if ((int)(plVar14[1] >> 0x2f) == -5) {
          uVar13 = plVar14[1] & 0x7fffffffffff;
          puVar15 = (uint *)(*(longlong *)(lVar2 + 0x28) +
                            (ulonglong)(*(uint *)(lVar2 + 0x34) & *(uint *)(uVar13 + 0xc)) * 0x18);
          do {
            if (((int)((longlong)*(ulonglong *)(puVar15 + 2) >> 0x2f) == -5) &&
               ((*(ulonglong *)(puVar15 + 2) & 0x7fffffffffff) == uVar13)) {
              uVar11 = *puVar15;
              if ((uint)(*(int *)(param_2 + 1) - (int)puVar7) < 6) {
                *param_2 = puVar7;
                puVar7 = (ulonglong *)FUN_1804a9db0(param_2,6);
              }
              *(byte *)puVar7 = 0xf;
              if (uVar11 < 0xe0) {
                *(byte *)((longlong)puVar7 + 1) = (byte)uVar11;
                pbVar4 = (byte *)((longlong)puVar7 + 2);
              }
              else {
                pbVar4 = (byte *)FUN_1804d33d0((byte *)((longlong)puVar7 + 1),uVar11);
              }
              goto LAB_1804d3112;
            }
            puVar15 = *(uint **)(puVar15 + 4);
          } while (puVar15 != (uint *)0x0);
          uVar11 = *(uint *)(uVar13 + 0x14);
          if ((uint)(*(int *)(param_2 + 1) - (int)puVar7) < uVar11 + 5) {
            *param_2 = puVar7;
            puVar7 = (ulonglong *)FUN_1804a9db0(param_2);
          }
          if (uVar11 + 0x20 < 0xe0) {
            *(byte *)puVar7 = (byte)(uVar11 + 0x20);
            pbVar4 = (byte *)((longlong)puVar7 + 1);
          }
          else {
            pbVar4 = (byte *)FUN_1804d33d0();
          }
          lVar3 = FUN_180540530(pbVar4,uVar13 + 0x18,(ulonglong)uVar11);
          pbVar4 = (byte *)(lVar3 + (ulonglong)uVar11);
        }
        else {
          pbVar4 = (byte *)FUN_1804d2d00(puVar7,param_2,plVar14 + 1);
        }
LAB_1804d3112:
        puVar7 = (ulonglong *)FUN_1804d2d00(pbVar4,param_2,plVar14);
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) goto LAB_1804d3161;
      }
      plVar14 = plVar14 + -3;
    } while( true );
  }
  if (uVar11 == 0xfffffff5) {
    plVar14 = *(longlong **)(*(longlong *)((param_2[3] & 0xfffffffffffffff8) + 0x10) + 0x188);
    plVar14[2] = param_2[3] & 0xfffffffffffffff8;
    uVar13 = *param_3;
    lVar2 = *plVar14;
    uVar12 = uVar13 & 0x7fffffffffff;
    uVar10 = (ulonglong)*(ushort *)(uVar12 + 10);
    uVar11 = *(uint *)(lVar2 + uVar10 * 0x18);
    bVar1 = (byte)(uVar11 >> 0x18);
    while (bVar1 >> 4 == 8) {
      uVar10 = (ulonglong)*(ushort *)(lVar2 + uVar10 * 0x18);
      uVar11 = *(uint *)(lVar2 + uVar10 * 0x18);
      bVar1 = (byte)(uVar11 >> 0x18);
    }
    uVar10 = uVar10 * 0x18;
    if ((uVar11 & 0xfc000000) == 0) {
      piVar6 = (int *)(lVar2 + 4 + uVar10);
      if (*piVar6 == 8) {
        if ((uint)(*(int *)(param_2 + 1) - iVar16) < 9) {
          *param_2 = param_1;
          param_1 = (byte *)FUN_1804a9db0(param_2,9);
        }
        *param_1 = (byte)(*(uint *)(uVar10 + lVar2) >> 0x17) & 1 | 0x10;
        *(undefined8 *)(param_1 + 1) = *(undefined8 *)(uVar12 + 0x10);
        goto LAB_1804d3318;
      }
    }
    else {
      piVar6 = (int *)((uVar10 | 4) + lVar2);
    }
    if (((uVar11 & 0xf4000000) == 0x34000000) && (*piVar6 == 0x10)) {
      if ((uint)(*(int *)(param_2 + 1) - iVar16) < 0x11) {
        *param_2 = param_1;
        param_1 = (byte *)FUN_1804a9db0(param_2,0x11);
      }
      *param_1 = 0x12;
      uVar5 = *(undefined8 *)(uVar12 + 0x18);
      *(undefined8 *)(param_1 + 1) = *(undefined8 *)(uVar12 + 0x10);
      *(undefined8 *)(param_1 + 9) = uVar5;
      return (ulonglong *)(param_1 + 0x11);
    }
  }
  else if (uVar11 == 0xfffffffc) {
    uVar10 = uVar13 >> 0x27 & 0xff;
    if (uVar10 == 0xff) {
      uVar13 = 0;
    }
    else {
      uVar13 = (ulonglong)
               *(uint *)(*(longlong *)
                          (*(longlong *)((param_2[3] & 0xfffffffffffffff8) + 0x10) + 0x70) +
                        uVar10 * 4) << 0x20 | uVar13 & 0x7fffffffff;
    }
    if ((uint)(*(int *)(param_2 + 1) - iVar16) < 9) {
      *param_2 = param_1;
      param_1 = (byte *)FUN_1804a9db0(param_2,9);
    }
    puVar7 = (ulonglong *)(param_1 + 1);
    if (uVar13 == 0) {
      *param_1 = 3;
      return puVar7;
    }
    if (uVar13 == (uVar13 & 0xffffffff)) {
      *param_1 = 4;
      *(int *)puVar7 = (int)uVar13;
      return (ulonglong *)(param_1 + 5);
    }
    *param_1 = 5;
    *puVar7 = uVar13;
    goto LAB_1804d3318;
  }
  uVar11 = (uint)((longlong)uVar13 >> 0x2f);
  if (uVar11 < 0xfffffff3) {
    uVar11 = 0xd;
  }
  else {
    uVar11 = ~uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804842f0(param_2[3] & 0xfffffffffffffff8,0xf82,(&PTR_DAT_18056e940)[uVar11]);
}



/* ===== 1804d3380 FUN_1804d3380 ===== */

uint * FUN_1804d3380(uint *param_1,uint *param_2,uint *param_3)

{
  if (*param_3 == 0xff) {
    if (param_1 + 1 <= param_2) {
      *param_3 = *param_1;
      return param_1 + 1;
    }
  }
  else if (param_1 < param_2) {
    *param_3 = ((*param_3 & 0x1f) << 8 | (uint)(byte)*param_1) + 0xe0;
    return (uint *)((longlong)param_1 + 1);
  }
  return (uint *)0x0;
}



/* ===== 1804d33d0 FUN_1804d33d0 ===== */

byte * FUN_1804d33d0(byte *param_1,uint param_2)

{
  if (param_2 < 0x1fe0) {
    *param_1 = (byte)(param_2 - 0xe0 >> 8) | 0xe0;
    param_1[1] = (byte)(param_2 - 0xe0);
    return param_1 + 2;
  }
  *param_1 = 0xff;
  *(uint *)(param_1 + 1) = param_2;
  return param_1 + 5;
}



/* ===== 1804d3410 FUN_1804d3410 ===== */

uint FUN_1804d3410(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar2 = *(ushort *)(param_1 + 0xb8);
  iVar7 = *(int *)(param_1 + 0xb8);
  uVar9 = (ulonglong)*(byte *)(param_1 + 0xbd);
  if ((*(uint *)(param_1 + 0xa8) & 0x20000) != 0) {
    uVar3 = *(ushort *)(param_1 + 0x192 + uVar9 * 2);
    uVar4 = *(ushort *)(param_1 + 0xba);
    if (*(ushort *)(param_1 + 0xba) <= uVar2) {
      uVar4 = uVar2;
    }
    if (uVar4 < uVar3) {
      lVar6 = *(longlong *)(param_1 + 0x20);
      do {
        uVar8 = (ulonglong)uVar3;
        if (*(int *)(lVar6 + uVar8 * 8) == iVar7) {
          return (uint)*(byte *)(lVar6 + 4 + uVar8 * 8) << 0x18 | (uint)uVar3;
        }
        uVar3 = *(ushort *)(lVar6 + 6 + uVar8 * 8);
      } while (uVar4 < uVar3);
    }
  }
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar8 = (ulonglong)uVar5;
  if (*(uint *)(param_1 + 0x150) <= uVar5) {
    FUN_1804a6170(param_1);
  }
  lVar6 = *(longlong *)(param_1 + 0x20);
  *(uint *)(param_1 + 0xc) = uVar5 + 1;
  *(undefined2 *)(lVar6 + 6 + uVar8 * 8) = *(undefined2 *)(param_1 + 0x192 + uVar9 * 2);
  *(int *)(lVar6 + uVar8 * 8) = iVar7;
  *(short *)(param_1 + 0x192 + uVar9 * 2) = (short)uVar5;
  *(undefined1 *)(lVar6 + 5 + uVar8 * 8) = *(undefined1 *)(param_1 + 0xbd);
  bVar1 = *(byte *)(param_1 + 0xbc);
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | bVar1;
  *(byte *)(lVar6 + 4 + uVar8 * 8) = bVar1;
  return (uint)bVar1 * 0x1000000 + uVar5;
}



/* ===== 1804d3500 FUN_1804d3500 ===== */

void FUN_1804d3500(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1804b8d60(*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd8),
                        *(byte *)(param_1 + 0xbd) - 0x29);
  FUN_1804a6540(param_1,uVar1);
  return;
}



/* ===== 1804d3550 FUN_1804d3550 ===== */

void FUN_1804d3550(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1804b8d60(*(undefined8 *)(param_1 + 200),(int)*(undefined8 *)(param_1 + 200),
                        *(byte *)(param_1 + 0xbd) - 0x29);
  FUN_1804a6540(param_1,uVar1);
  return;
}



/* ===== 1804d3590 FUN_1804d3590 ===== */

void FUN_1804d3590(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1804b8e90(*(undefined8 *)(param_1 + 200),*(undefined2 *)(param_1 + 0xba));
  FUN_1804a6540(param_1,uVar1);
  return;
}



/* ===== 1804d35d0 FUN_1804d35d0 ===== */

undefined8 FUN_1804d35d0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(&DAT_18056eed8 + (ulonglong)*(ushort *)(param_1 + 0xba) * 0x10) & 0x1f0000) ==
      0xe0000) {
    uVar1 = (*(code *)(&PTR_FUN_18056eed0)[(ulonglong)*(ushort *)(param_1 + 0xba) * 2])
                      (*(undefined8 *)(param_1 + 200));
    uVar1 = FUN_1804a6540(param_1,uVar1);
    return uVar1;
  }
  return 0;
}



/* ===== 1804d3630 FUN_1804d3630 ===== */

undefined8 FUN_1804d3630(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(ushort *)(param_1 + 0xc0) < 0x8000) && (*(ushort *)(param_1 + 0xc2) < 0x8000)) {
    uVar1 = (*(code *)(&PTR_FUN_18056eed0)[(ulonglong)*(ushort *)(param_1 + 0xba) * 2])
                      (*(undefined8 *)
                        (*(longlong *)(param_1 + 0x20) + 8 +
                        (ulonglong)*(ushort *)(param_1 + 0xc0) * 8),
                       *(undefined8 *)
                        (*(longlong *)(param_1 + 0x20) + 8 +
                        (ulonglong)*(ushort *)(param_1 + 0xc2) * 8));
    uVar1 = FUN_1804a6540(param_1,uVar1);
    return uVar1;
  }
  return 0;
}



/* ===== 1804d36a0 FUN_1804d36a0 ===== */

void FUN_1804d36a0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1804b8d60(*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd8),5);
  FUN_1804a6540(param_1,uVar1);
  return;
}



/* ===== 1804d36e0 FUN_1804d36e0 ===== */

int FUN_1804d36e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1804a69e0(*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd8),
                        *(undefined1 *)(param_1 + 0xbd));
  return iVar1 + 3;
}



/* ===== 1804d3710 FUN_1804d3710 ===== */

undefined8 FUN_1804d3710(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1804d68c0(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xd0),
                        *(undefined1 *)(param_1 + 0xbd));
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  return 2;
}



/* ===== 1804d3750 FUN_1804d3750 ===== */

undefined8 FUN_1804d3750(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1804d67c0(param_1,(longlong)*(int *)(param_1 + 0xc0),
                        (longlong)*(int *)(param_1 + 0xd0),*(byte *)(param_1 + 0xbd) - 0xc);
  if (lVar1 == (int)lVar1) {
    *(int *)(param_1 + 0xb8) = (int)lVar1;
    return 2;
  }
  return 3;
}



/* ===== 1804d38c0 FUN_1804d38c0 ===== */

void FUN_1804d38c0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1804d67c0(param_1,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd8),
                        *(undefined1 *)(param_1 + 0xbd));
  FUN_1804a6410(param_1,uVar1);
  return;
}



/* ===== 1804d3900 FUN_1804d3900 ===== */

void FUN_1804d3900(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 0xbd);
  if ((*(byte *)(param_1 + 0xbc) & 0x1f) != 0x15) {
    if (cVar1 == ',') {
      uVar2 = FUN_1804b3990();
      FUN_1804a6410(param_1,uVar2);
      return;
    }
    if (cVar1 == '-') {
      uVar2 = FUN_1804b3cf0();
      FUN_1804a6410(param_1,uVar2);
      return;
    }
    uVar2 = FUN_1804b3e60(*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd8));
    FUN_1804a6410(param_1,uVar2);
    return;
  }
  if (cVar1 == ',') {
    uVar2 = FUN_1804b3950();
    FUN_1804a6410(param_1,uVar2);
    return;
  }
  if (cVar1 == '-') {
    uVar2 = FUN_1804b3cc0();
    FUN_1804a6410(param_1,uVar2);
    return;
  }
  uVar2 = FUN_1804b3dd0();
  FUN_1804a6410(param_1,uVar2);
  return;
}



/* ===== 1804d39d0 FUN_1804d39d0 ===== */

void FUN_1804d39d0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1804b3eb0(*(undefined8 *)(param_1 + 200),*(uint *)(param_1 + 0xd0) & 0x3f,
                        *(byte *)(param_1 + 0xbd) - 0x24);
  FUN_1804a6410(param_1,uVar1);
  return;
}



/* ===== 1804d3b00 FUN_1804d3b00 ===== */

void FUN_1804d3b00(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180491d30(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 200),
                        (longlong)*(int *)(param_1 + 0xd0));
  FUN_1804a62e0(param_1,uVar1,4);
  return;
}



/* ===== 1804d3b80 FUN_1804d3b80 ===== */

undefined2 FUN_1804d3b80(longlong param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined2 uVar3;
  ulonglong uVar4;
  
  if ((*(byte *)(param_1 + 0xc4) & 0x40) == 0) {
    if ((*(ushort *)(param_1 + 0xba) < 0x8000) && (*(int *)(param_1 + 0xd0) == 0)) {
      return *(undefined2 *)(param_1 + 0xc0);
    }
    uVar4 = (ulonglong)*(ushort *)(param_1 + 0xc0);
    lVar2 = *(longlong *)(param_1 + 0x20);
    if ((*(char *)(lVar2 + 5 + uVar4 * 8) == '@') &&
       ((*(byte *)(lVar2 + 4 + uVar4 * 8) & 0x40) == 0)) {
      uVar1 = *(undefined2 *)(lVar2 + uVar4 * 8);
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(lVar2 + 2 + uVar4 * 8);
      *(undefined2 *)(param_1 + 0xbc) = 0x2913;
      uVar3 = FUN_1804d6ae0(param_1);
      *(undefined2 *)(param_1 + 0xba) = uVar3;
      *(undefined2 *)(param_1 + 0xb8) = uVar1;
      *(undefined2 *)(param_1 + 0xbc) = 0x4009;
      return 1;
    }
  }
  return 0;
}



/* ===== 1804d3c30 FUN_1804d3c30 ===== */

undefined8 FUN_1804d3c30(longlong param_1)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(param_1 + 0xc0) < 0x8000) && (*(ushort *)(param_1 + 0xc2) < 0x8000)) {
    uVar1 = FUN_180491b00(*(undefined8 *)
                           (*(longlong *)(param_1 + 0x20) + 8 +
                           (ulonglong)*(ushort *)(param_1 + 0xc0) * 8),
                          *(undefined8 *)
                           (*(longlong *)(param_1 + 0x20) + 8 +
                           (ulonglong)*(ushort *)(param_1 + 0xc2) * 8));
    *(undefined4 *)(param_1 + 0xb8) = uVar1;
    return 2;
  }
  return 0;
}



/* ===== 1804d3cb0 FUN_1804d3cb0 ===== */

ulonglong FUN_1804d3cb0(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((*(uint *)(param_1 + 0xa8) & 0x80000) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd2);
    uVar5 = (ulonglong)uVar1;
    if (((((*(char *)(param_1 + 0xc5) == 'U') && (*(short *)(param_1 + 0xc2) == 0)) &&
         (*(ushort *)(param_1 + 0xc6) == uVar1)) &&
        (lVar4 = *(longlong *)(param_1 + 0x20),
        *(short *)(param_1 + 0xc0) == *(short *)(lVar4 + uVar5 * 8))) &&
       ((((*(byte *)(param_1 + 0xd4) & 0x40) == 0 || (*(short *)(lVar4 + 6 + uVar5 * 8) == 0)) &&
        (*(ushort *)(param_1 + 0x252) < uVar1)))) {
      uVar5 = (ulonglong)*(ushort *)(param_1 + 0xb8);
      *(undefined2 *)(lVar4 + 2 + uVar5 * 8) = 1;
      *(undefined2 *)(*(longlong *)(param_1 + 0x20) + uVar5 * 8) = *(undefined2 *)(param_1 + 0xd0);
      return uVar5;
    }
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (((*(short *)(lVar4 + 2 + uVar5 * 8) == 0) && ((*(byte *)(param_1 + 0xd4) & 0x40) == 0)) &&
       ((uVar5 = (ulonglong)*(ushort *)(param_1 + 0xd0), *(char *)(lVar4 + 5 + uVar5 * 8) == 'a' &&
        (sVar2 = *(short *)(lVar4 + 2 + uVar5 * 8), (ushort)(sVar2 - 0x13U) < 4)))) {
      uVar5 = (ulonglong)*(ushort *)(lVar4 + uVar5 * 8);
      uVar3 = *(ushort *)(lVar4 + uVar5 * 8);
      if (sVar2 == 0x16) {
        if (*(ushort *)(lVar4 + (ulonglong)uVar3 * 8) == uVar1) {
          uVar5 = FUN_1804a5e80(param_1,0x16,*(undefined2 *)(param_1 + 0xb8),
                                *(undefined2 *)(lVar4 + 2 + (ulonglong)uVar3 * 8),
                                *(undefined2 *)(lVar4 + 2 + uVar5 * 8));
          return uVar5;
        }
      }
      else if (uVar3 == uVar1) {
        uVar5 = FUN_1804a5e80(param_1,sVar2,*(undefined2 *)(param_1 + 0xb8),
                              *(undefined2 *)(lVar4 + 2 + uVar5 * 8));
        return uVar5;
      }
    }
  }
  uVar5 = FUN_1804a5f70(param_1);
  return uVar5;
}



/* ===== 1804d3df0 FUN_1804d3df0 ===== */

ulonglong FUN_1804d3df0(longlong param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (((*(uint *)(param_1 + 0xa8) & 0x10000) != 0) && (*(char *)(param_1 + 0xd5) == '\x18')) {
    if (*(int *)(*(longlong *)(param_1 + 0xd8) + 0x14) == 0) {
      return (ulonglong)*(ushort *)(param_1 + 0xb8);
    }
    if (((*(char *)(param_1 + 0xc5) == 'V') && (*(ushort *)(param_1 + 0xc2) < 0x8000)) &&
       ((*(byte *)(param_1 + 0xc4) & 0x40) == 0)) {
      uVar2 = FUN_1804a9d10(*(undefined8 *)(param_1 + 0x80),
                            *(undefined8 *)
                             (*(longlong *)(param_1 + 0x20) + 8 +
                             (ulonglong)*(ushort *)(param_1 + 0xc2) * 8));
      uVar1 = FUN_1804a62e0(param_1,uVar2,4);
      *(undefined2 *)
       (*(longlong *)(param_1 + 0x20) + 2 + (ulonglong)*(ushort *)(param_1 + 0xb8) * 8) = uVar1;
      return (ulonglong)*(ushort *)(param_1 + 0xb8);
    }
  }
  uVar3 = FUN_1804a5f70(param_1);
  return uVar3;
}



/* ===== 1804d3eb0 FUN_1804d3eb0 ===== */

ulonglong FUN_1804d3eb0(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ulonglong uVar6;
  
  if ((*(uint *)(param_1 + 0xa8) >> 0x10 & 1) != 0) {
    if (*(char *)(param_1 + 0xc5) == 'U') {
      if (*(short *)(param_1 + 0xc2) == 0) {
        uVar3 = FUN_1804a62e0(param_1,param_1 + -0x270,4);
        return uVar3;
      }
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0xc0);
      *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xc6);
      uVar3 = FUN_1804d3410();
      return uVar3;
    }
    if (*(char *)(param_1 + 0xc5) == 'V') {
      if ((*(char *)(*(longlong *)(param_1 + 0x20) + 5 + (ulonglong)*(ushort *)(param_1 + 0xc0) * 8)
           == 'U') &&
         (*(short *)(*(longlong *)(param_1 + 0x20) + 2 + (ulonglong)*(ushort *)(param_1 + 0xc0) * 8)
          == 0)) {
        return (ulonglong)*(ushort *)(param_1 + 0xc2);
      }
    }
  }
  if (((*(uint *)(param_1 + 0xa8) >> 0x11 & 1) != 0) &&
     (uVar1 = *(ushort *)(param_1 + 0x240), uVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      uVar6 = (ulonglong)uVar1;
      uVar3 = (ulonglong)*(ushort *)(lVar2 + uVar6 * 8);
      puVar4 = (ushort *)(param_1 + 0xc0);
      if (*(char *)(param_1 + 0xc5) == *(char *)(lVar2 + 5 + uVar3 * 8)) {
        do {
          puVar5 = (ushort *)(lVar2 + uVar3 * 8);
          uVar1 = puVar4[1];
          if (uVar1 != puVar5[1]) break;
          if (*(char *)((longlong)puVar4 + 5) == 'U') {
            if (uVar1 == 0) {
              return uVar6;
            }
          }
          else if ((*(char *)((longlong)puVar4 + 5) == 'a') && (uVar1 == 0x17)) break;
          puVar4 = (ushort *)(lVar2 + (ulonglong)*puVar4 * 8);
          uVar3 = (ulonglong)*puVar5;
        } while (*(char *)((longlong)puVar4 + 5) == *(char *)(lVar2 + 5 + uVar3 * 8));
      }
      uVar1 = *(ushort *)(lVar2 + 6 + uVar6 * 8);
    } while (uVar1 != 0);
  }
  uVar3 = FUN_1804a5f70(param_1);
  return uVar3;
}



/* ===== 1804d4020 FUN_1804d4020 ===== */

undefined8 FUN_1804d4020(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  if (*(ushort *)(param_1 + 0xc2) < 0x8000) {
    uVar1 = *(ushort *)(param_1 + 0xba);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
    *(longlong *)(lVar2 + 0xe0) = *(longlong *)(param_1 + 0x80);
    *(undefined8 *)(lVar2 + 200) = *(undefined8 *)(lVar2 + 0xd8);
    uVar4 = (*(code *)(&PTR_FUN_18056eed0)[(ulonglong)uVar1 * 2])
                      ((undefined8 *)(lVar2 + 200),
                       *(undefined8 *)
                        (*(longlong *)(param_1 + 0x20) + 8 +
                        (ulonglong)*(ushort *)(param_1 + 0xc2) * 8));
    *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0xc0);
    *(undefined1 *)(param_1 + 0xbd) = 0x56;
    uVar4 = FUN_1804aa430(uVar4);
    uVar3 = FUN_1804a62e0(param_1,uVar4,4);
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    return 1;
  }
  uVar4 = FUN_1804a5f70();
  return uVar4;
}



/* ===== 1804d40d0 FUN_1804d40d0 ===== */

undefined8 FUN_1804d40d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if (*(ushort *)(param_1 + 0xc2) < 0x8000) {
    uVar5 = (ulonglong)*(ushort *)(param_1 + 0xc0);
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (*(ushort *)(lVar1 + 2 + uVar5 * 8) < 0x8000) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
      *(longlong *)(lVar2 + 0xe0) = *(longlong *)(param_1 + 0x80);
      *(undefined8 *)(lVar2 + 200) = *(undefined8 *)(lVar2 + 0xd8);
      uVar4 = FUN_1804aa040((undefined8 *)(lVar2 + 200),
                            *(undefined8 *)
                             (*(longlong *)(param_1 + 0x20) + 8 +
                             (ulonglong)*(ushort *)(lVar1 + 2 + uVar5 * 8) * 8),
                            *(undefined4 *)
                             (*(longlong *)(param_1 + 0x20) +
                             (ulonglong)*(ushort *)(param_1 + 0xc2) * 8));
      *(undefined1 *)(param_1 + 0xbd) = 0x56;
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(lVar1 + uVar5 * 8);
      uVar4 = FUN_1804aa430(uVar4);
      uVar3 = FUN_1804a62e0(param_1,uVar4,4);
      *(undefined2 *)(param_1 + 0xba) = uVar3;
      return 1;
    }
  }
  uVar4 = FUN_1804a5f70();
  return uVar4;
}



/* ===== 1804d41b0 FUN_1804d41b0 ===== */

undefined8 FUN_1804d41b0(longlong param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  if (0x7fff < *(ushort *)(param_1 + 0xc2)) {
    uVar7 = FUN_1804a5f70(param_1);
    return uVar7;
  }
  uVar2 = *(ushort *)(param_1 + 0xc0);
  uVar8 = (ulonglong)*(ushort *)(param_1 + 0xc2);
  lVar4 = *(longlong *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(lVar4 + (ulonglong)*(ushort *)(lVar4 + 2 + (ulonglong)uVar2 * 8) * 8);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
  *(longlong *)(lVar5 + 0xe0) = *(longlong *)(param_1 + 0x80);
  puVar1 = (undefined8 *)(lVar5 + 200);
  *puVar1 = *(undefined8 *)(lVar5 + 0xd8);
  switch(*(ushort *)(param_1 + 0xba)) {
  case 10:
    uVar7 = FUN_180498fa0(puVar1,uVar3,*(undefined8 *)(lVar4 + 8 + uVar8 * 8));
    break;
  default:
    uVar7 = (*(code *)(&PTR_FUN_18056eed0)[(ulonglong)*(ushort *)(param_1 + 0xba) * 2])
                      (puVar1,uVar3,*(undefined8 *)(lVar4 + 8 + uVar8 * 8));
    break;
  case 0xe:
    uVar7 = FUN_180498f90(puVar1,uVar3,*(undefined8 *)(lVar4 + 8 + uVar8 * 8));
    break;
  case 0xf:
    uVar7 = FUN_180498e40(puVar1,uVar3,*(undefined4 *)(lVar4 + uVar8 * 8));
  }
  *(undefined1 *)(param_1 + 0xbd) = 0x56;
  *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(lVar4 + (ulonglong)uVar2 * 8);
  uVar7 = FUN_1804aa430(uVar7);
  uVar6 = FUN_1804a62e0(param_1,uVar7,4);
  *(undefined2 *)(param_1 + 0xba) = uVar6;
  return 1;
}



/* ===== 1804d42f0 FUN_1804d42f0 ===== */

void FUN_1804d42f0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_1 + 200);
  if ((*(byte *)(param_1 + 0xc4) & 0x1f) == 10) {
    lVar3 = **(longlong **)(param_1 + -0x160);
    uVar5 = (ulonglong)*(ushort *)(lVar2 + 10);
    uVar1 = *(uint *)(lVar3 + uVar5 * 0x18);
    bVar4 = (byte)(uVar1 >> 0x18);
    while (bVar4 >> 4 == 8) {
      uVar5 = (ulonglong)*(ushort *)(lVar3 + uVar5 * 0x18);
      uVar1 = *(uint *)(lVar3 + uVar5 * 0x18);
      bVar4 = (byte)(uVar1 >> 0x18);
    }
    if ((((uVar1 < 0x10000000) || ((uVar1 >> 0x1c) - 5 < 2)) || (uVar1 >> 0x1c == 2)) ||
       (((uVar1 & 0xf4000000) == 0x34000000 || ((uVar1 & 0xf8000000) == 0x38000000)))) {
      FUN_1804a66d0(param_1,0x1a,*(longlong *)(param_1 + 0xd8) + lVar2);
      return;
    }
  }
  FUN_1804a66d0(param_1,0x19,*(longlong *)(param_1 + 0xd8) + lVar2);
  return;
}



/* ===== 1804d4420 FUN_1804d4420 ===== */

undefined8 FUN_1804d4420(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_180005337(*(undefined8 *)(param_1 + 200));
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  return 2;
}



/* ===== 1804d45b0 FUN_1804d45b0 ===== */

undefined8 FUN_1804d45b0(longlong param_1)

{
  longlong lVar1;
  
  if (-1 < *(char *)(param_1 + 0xbc)) {
    *(int *)(param_1 + 0xb8) = (int)*(double *)(param_1 + 200);
    return 2;
  }
  lVar1 = FUN_1800052ed();
  if (lVar1 < 0) {
    return 3;
  }
  *(int *)(param_1 + 0xb8) = (int)lVar1;
  return 2;
}



/* ===== 1804d4610 FUN_1804d4610 ===== */

void FUN_1804d4610(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18000530c(*(undefined8 *)(param_1 + 200));
  FUN_1804a6410(param_1,uVar1);
  return;
}



/* ===== 1804d4640 FUN_1804d4640 ===== */

void FUN_1804d4640(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180005312(*(undefined8 *)(param_1 + 200));
  FUN_1804a6410(param_1,uVar1);
  return;
}



/* ===== 1804d4670 FUN_1804d4670 ===== */

void FUN_1804d4670(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1804b8f90(*(undefined8 *)(param_1 + 0x80),param_1 + 200);
  FUN_1804a62e0(param_1,uVar1,4);
  return;
}



/* ===== 1804d46b0 FUN_1804d46b0 ===== */

void FUN_1804d46b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(short *)(param_1 + 0xba) == 0) {
    uVar1 = FUN_180498220();
  }
  else {
    uVar1 = FUN_180498200(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0xc0));
  }
  FUN_1804a62e0(param_1,uVar1,4);
  return;
}



/* ===== 1804d4700 FUN_1804d4700 ===== */

undefined8 FUN_1804d4700(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  
  iVar1 = FUN_1804972a0(*(undefined8 *)(param_1 + 200),&local_res8);
  if (iVar1 == 0) {
    return 3;
  }
  local_res10 = local_res8;
  uVar2 = FUN_1804a6540(param_1,local_res8);
  return uVar2;
}



/* ===== 1804d4880 FUN_1804d4880 ===== */

undefined8 FUN_1804d4880(longlong param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0xc4) & 0x40) == 0) {
    uVar2 = CONCAT44((uint)((ulonglong)*(undefined8 *)(param_1 + 0xd8) >> 0x20) ^
                     DAT_1808adeb0._4_4_,(uint)*(undefined8 *)(param_1 + 0xd8) ^ (uint)DAT_1808adeb0
                    );
    *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xc0);
    uVar1 = FUN_1804a6540(uVar2,uVar2);
    *(undefined2 *)(param_1 + 0xb8) = uVar1;
    return 1;
  }
  return 0;
}



/* ===== 1804d4910 FUN_1804d4910 ===== */

undefined2 FUN_1804d4910(longlong param_1)

{
  double dVar1;
  ulonglong uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  
  dVar1 = *(double *)(param_1 + 0xd8);
  if (dVar1 == DAT_1808ac500) {
    return *(undefined2 *)(param_1 + 0xb8);
  }
  if (dVar1 == DAT_1808acdb8) {
    uVar4 = *(undefined2 *)(param_1 + 0xb8);
    uVar3 = FUN_1804a6000(dVar1,0xe,((param_1 + 0x127U & 0xfffffffffffffff0) - param_1) + 0x348);
    *(undefined2 *)(param_1 + 0xba) = uVar3;
    *(undefined2 *)(param_1 + 0xb8) = uVar4;
    *(undefined1 *)(param_1 + 0xbd) = 0x2f;
    return 1;
  }
  if (*(char *)(param_1 + 0xbd) == '+') {
    if (dVar1 == DAT_1808ac548) {
      *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xb8);
      *(undefined1 *)(param_1 + 0xbd) = 0x29;
      return 1;
    }
  }
  else if (((*(char *)(param_1 + 0xbd) == ',') &&
           (uVar2 = *(ulonglong *)(param_1 + 0xd8), (uVar2 & 0xfffffffffffff) == 0)) &&
          (uVar5 = (uint)(uVar2 >> 0x34) & 0x7ff, uVar5 - 1 < 0x7fd)) {
    *(undefined1 *)(param_1 + 0xbd) = 0x2b;
    uVar4 = FUN_1804a6540(param_1,(ulonglong)(0x7fe - uVar5) << 0x34 | uVar2 & 0x8000000000000000);
    *(undefined2 *)(param_1 + 0xba) = uVar4;
    return 1;
  }
  return 0;
}



/* ===== 1804d4a50 FUN_1804d4a50 ===== */

undefined8 FUN_1804d4a50(longlong param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0xc4) & 0x40) == 0) {
    uVar2 = CONCAT44((uint)((ulonglong)*(undefined8 *)(param_1 + 0xd8) >> 0x20) ^
                     DAT_1808adeb0._4_4_,(uint)*(undefined8 *)(param_1 + 0xd8) ^ (uint)DAT_1808adeb0
                    );
    *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0xc0);
    uVar1 = FUN_1804a6540(uVar2,uVar2);
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    return 1;
  }
  return 0;
}



/* ===== 1804d4e00 FUN_1804d4e00 ===== */

ulonglong FUN_1804d4e00(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((*(uint *)(param_1 + 0xa8) & 0x20000) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xb8);
    uVar2 = *(ushort *)(param_1 + 0x248);
    if (uVar1 < uVar2) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      do {
        uVar4 = (ulonglong)uVar2;
        if (((*(ushort *)(lVar3 + uVar4 * 8) == uVar1) &&
            ((*(ushort *)(lVar3 + 2 + uVar4 * 8) & 0xfff) == (*(ushort *)(param_1 + 0xba) & 0xfff)))
           && ((*(byte *)(param_1 + 0xbc) & 0x80) <= (*(byte *)(lVar3 + 4 + uVar4 * 8) & 0x80))) {
          return uVar4;
        }
        uVar2 = *(ushort *)(lVar3 + 6 + uVar4 * 8);
      } while (uVar1 < uVar2);
    }
  }
  uVar4 = FUN_1804a5f70();
  return uVar4;
}



/* ===== 1804d4f70 FUN_1804d4f70 ===== */

undefined2 FUN_1804d4f70(longlong param_1)

{
  undefined2 uVar1;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    return *(undefined2 *)(param_1 + 0xb8);
  }
  *(undefined1 *)(param_1 + 0xbd) = 0x29;
  uVar1 = FUN_1804a6370(param_1,-*(int *)(param_1 + 0xd0));
  *(undefined2 *)(param_1 + 0xba) = uVar1;
  return 1;
}



/* ===== 1804d4ff0 FUN_1804d4ff0 ===== */

undefined2 FUN_1804d4ff0(longlong param_1)

{
  undefined2 uVar1;
  
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    return *(undefined2 *)(param_1 + 0xb8);
  }
  *(undefined1 *)(param_1 + 0xbd) = 0x29;
  uVar1 = FUN_1804a6410(param_1,-*(longlong *)(param_1 + 0xd8));
  *(undefined2 *)(param_1 + 0xba) = uVar1;
  return 1;
}



/* ===== 1804d5040 FUN_1804d5040 ===== */

undefined2 FUN_1804d5040(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xd0);
  if (-1 < (int)uVar1) {
    if (uVar1 == 0) {
      return *(undefined2 *)(param_1 + 0xba);
    }
    if (uVar1 == 1) {
      return *(undefined2 *)(param_1 + 0xb8);
    }
    if ((uVar1 & uVar1 - 1) == 0) {
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      *(undefined1 *)(param_1 + 0xbd) = 0x24;
      uVar3 = FUN_1804a6370(param_1,iVar2);
      *(undefined2 *)(param_1 + 0xba) = uVar3;
      return 1;
    }
  }
  return 0;
}



/* ===== 1804d50b0 FUN_1804d50b0 ===== */

undefined2 FUN_1804d50b0(longlong param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  
  if (*(ulonglong *)(param_1 + 0xd8) < 0x80000000) {
    uVar3 = (uint)*(ulonglong *)(param_1 + 0xd8);
    if (uVar3 == 0) {
      return *(undefined2 *)(param_1 + 0xba);
    }
    if (uVar3 == 1) {
      return *(undefined2 *)(param_1 + 0xb8);
    }
    if ((uVar3 & uVar3 - 1) == 0) {
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      *(undefined1 *)(param_1 + 0xbd) = 0x24;
      uVar2 = FUN_1804a6370(param_1,iVar1);
      *(undefined2 *)(param_1 + 0xba) = uVar2;
      return 1;
    }
  }
  return 0;
}



/* ===== 1804d5120 FUN_1804d5120 ===== */

undefined8 FUN_1804d5120(longlong param_1)

{
  uint uVar1;
  undefined2 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xd0);
  if (((int)uVar1 < 1) || ((uVar1 & uVar1 - 1) != 0)) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0xbd) = 0x21;
  uVar2 = FUN_1804a6370();
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  return 1;
}



/* ===== 1804d5220 FUN_1804d5220 ===== */

undefined8 FUN_1804d5220(longlong param_1)

{
  undefined2 uVar1;
  
  if ((((*(byte *)(param_1 + 0xbc) & 0x1f) == 0xe) || ((*(byte *)(param_1 + 0xc4) & 0x40) != 0)) ||
     (*(short *)(param_1 + 0xba) != *(short *)(param_1 + 0xc0))) {
    return 0;
  }
  uVar1 = FUN_1804a6370(param_1,0);
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xc2);
  return 1;
}



/* ===== 1804d52c0 FUN_1804d52c0 ===== */

undefined8 FUN_1804d52c0(longlong param_1)

{
  undefined2 uVar1;
  
  if (((*(byte *)(param_1 + 0xbc) & 0x1f) == 0xe) || ((*(byte *)(param_1 + 0xd4) & 0x40) != 0)) {
    return 0;
  }
  if (*(short *)(param_1 + 0xb8) == *(short *)(param_1 + 0xd0)) {
    *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xd2);
  }
  else {
    if (*(short *)(param_1 + 0xb8) != *(short *)(param_1 + 0xd2)) {
      return 0;
    }
    *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xd0);
  }
  uVar1 = FUN_1804a6370(param_1,0);
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  return 1;
}



/* ===== 1804d54d0 FUN_1804d54d0 ===== */

undefined2 FUN_1804d54d0(longlong param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (0x605fd9U >> (*(byte *)(param_1 + 0xbc) & 0x1f) & 1) << 5 | 0x1f;
  uVar2 = uVar3 & *(uint *)(param_1 + 0xd0);
  if (uVar2 == 0) {
    return *(undefined2 *)(param_1 + 0xb8);
  }
  if ((uVar2 == 1) && (*(char *)(param_1 + 0xbd) == '$')) {
    *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0xbd) = 0x29;
    return 1;
  }
  if (uVar2 == *(uint *)(param_1 + 0xd0)) {
    if (*(char *)(param_1 + 0xbd) != '(') {
      return 0;
    }
    *(undefined1 *)(param_1 + 0xbd) = 0x27;
    uVar2 = -uVar2 & uVar3;
  }
  uVar1 = FUN_1804a6370(param_1,uVar2);
  *(undefined2 *)(param_1 + 0xba) = uVar1;
  return 1;
}



/* ===== 1804d5640 FUN_1804d5640 ===== */

undefined8 FUN_1804d5640(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  if ((*(byte *)(param_1 + 0xc4) & 0x40) == 0) {
    uVar7 = (ulonglong)*(ushort *)(param_1 + 0xc2);
    lVar2 = *(longlong *)(param_1 + 0x20);
    cVar1 = *(char *)(lVar2 + 5 + uVar7 * 8);
    if (cVar1 == '\x17') {
      uVar5 = FUN_1804d68c0(*(undefined4 *)(lVar2 + uVar7 * 8),*(undefined4 *)(param_1 + 0xd0),
                            *(undefined1 *)(param_1 + 0xbd));
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0xc0);
      uVar3 = FUN_1804d6ae0(param_1);
      *(undefined2 *)(param_1 + 0xb8) = uVar3;
      uVar3 = FUN_1804a6370(param_1,uVar5);
      *(undefined2 *)(param_1 + 0xba) = uVar3;
      *(undefined2 *)(param_1 + 0xbc) = 0x2113;
      return 1;
    }
    if (cVar1 == '\x1d') {
      uVar6 = FUN_1804d67c0(param_1,*(undefined8 *)(lVar2 + 8 + uVar7 * 8),
                            (longlong)*(int *)(param_1 + 0xd0),*(undefined1 *)(param_1 + 0xbd));
      uVar3 = *(undefined2 *)(param_1 + 0xc4);
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0xc0);
      uVar4 = FUN_1804d6ae0(param_1);
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      uVar4 = FUN_1804a6410(param_1,uVar6);
      *(undefined2 *)(param_1 + 0xba) = uVar4;
      *(undefined2 *)(param_1 + 0xbc) = uVar3;
      return 1;
    }
  }
  return 0;
}



/* ===== 1804d5760 FUN_1804d5760 ===== */

undefined2 FUN_1804d5760(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 5 + (ulonglong)*(ushort *)(param_1 + 0xc2) * 8) ==
      '\x17') {
    iVar1 = *(int *)(param_1 + 0xd0);
    iVar2 = FUN_1804d68c0(0xffffffff,
                          *(undefined4 *)
                           (*(longlong *)(param_1 + 0x20) +
                           (ulonglong)*(ushort *)(param_1 + 0xc2) * 8),
                          *(undefined1 *)(param_1 + 0xc5));
    if (iVar2 == iVar1) {
      return *(undefined2 *)(param_1 + 0xb8);
    }
  }
  return 0;
}



/* ===== 1804d57c0 FUN_1804d57c0 ===== */

undefined8 FUN_1804d57c0(longlong param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xc4) & 0x40) == 0) {
    if (*(char *)(*(longlong *)(param_1 + 0x20) + 5 + (ulonglong)*(ushort *)(param_1 + 0xc2) * 8) ==
        '\x17') {
      iVar1 = FUN_1804d68c0(*(undefined4 *)
                             (*(longlong *)(param_1 + 0x20) +
                             (ulonglong)*(ushort *)(param_1 + 0xc2) * 8),
                            *(undefined4 *)(param_1 + 0xd0),*(undefined1 *)(param_1 + 0xbd));
      if (iVar1 == -(uint)(*(char *)(param_1 + 0xbd) != '!')) {
        *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0xc0);
        return 1;
      }
    }
  }
  return 0;
}



/* ===== 1804d5830 FUN_1804d5830 ===== */

undefined8 FUN_1804d5830(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(byte *)(param_1 + 0xc4) & 0x40) == 0) {
    if (*(char *)(*(longlong *)(param_1 + 0x20) + 5 + (ulonglong)*(ushort *)(param_1 + 0xc2) * 8) ==
        '\x1d') {
      cVar2 = *(char *)(param_1 + 0xbd);
      lVar1 = FUN_1804d67c0(param_1,*(undefined8 *)
                                     (*(longlong *)(param_1 + 0x20) + 8 +
                                     (ulonglong)*(ushort *)(param_1 + 0xc2) * 8),
                            *(undefined8 *)(param_1 + 0xd8),cVar2);
      if (lVar1 == -(ulonglong)(cVar2 != '!')) {
        *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0xc0);
        return 1;
      }
    }
  }
  return 0;
}



/* ===== 1804d58a0 FUN_1804d58a0 ===== */

undefined2 FUN_1804d58a0(longlong param_1)

{
  longlong lVar1;
  undefined2 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)*(ushort *)(param_1 + 0xc2);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 5 + uVar4 * 8) == '\x17') {
    iVar3 = FUN_1804d68c0(*(undefined4 *)(lVar1 + uVar4 * 8),*(undefined4 *)(param_1 + 0xd0),
                          *(undefined1 *)(param_1 + 0xbd));
    if (iVar3 == *(int *)(lVar1 + uVar4 * 8)) {
      return *(undefined2 *)(param_1 + 0xb8);
    }
    if ((*(byte *)(param_1 + 0xc4) & 0x40) == 0) {
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0xc0);
      uVar2 = FUN_1804a6370(param_1,iVar3);
      *(undefined2 *)(param_1 + 0xba) = uVar2;
      return 1;
    }
  }
  return 0;
}



/* ===== 1804d5950 FUN_1804d5950 ===== */

undefined8 FUN_1804d5950(longlong param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 5 + (ulonglong)*(ushort *)(param_1 + 0xc2) * 8) ==
      '\x1d') {
    uVar2 = FUN_1804d67c0(param_1,*(undefined8 *)
                                   (*(longlong *)(param_1 + 0x20) + 8 +
                                   (ulonglong)*(ushort *)(param_1 + 0xc2) * 8),
                          *(undefined8 *)(param_1 + 0xd8),*(undefined1 *)(param_1 + 0xbd));
    if ((*(byte *)(param_1 + 0xc4) & 0x40) == 0) {
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0xc0);
      uVar1 = FUN_1804a6410(param_1,uVar2);
      *(undefined2 *)(param_1 + 0xba) = uVar1;
      return 1;
    }
  }
  return 0;
}



/* ===== 1804d5a50 FUN_1804d5a50 ===== */

undefined8 FUN_1804d5a50(longlong param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((*(byte *)(param_1 + 0xc4) & 0x40) == 0) {
    if (*(char *)(*(longlong *)(param_1 + 0x20) + 5 + (ulonglong)*(ushort *)(param_1 + 0xc2) * 8) ==
        '\x17') {
      uVar5 = 0x605fd9U >> (*(byte *)(param_1 + 0xbc) & 0x1f) & 1;
      uVar4 = uVar5 << 5 | 0x1f;
      uVar3 = (*(uint *)(param_1 + 0xd0) & uVar4) +
              (uVar4 & *(uint *)(*(longlong *)(param_1 + 0x20) +
                                (ulonglong)*(ushort *)(param_1 + 0xc2) * 8));
      if (uVar4 < uVar3) {
        if ((byte)(*(char *)(param_1 + 0xbd) - 0x24U) < 2) {
          if (uVar5 == 0) {
            *(undefined4 *)(param_1 + 0xb8) = 0;
            return 2;
          }
          uVar2 = FUN_1804a6410(param_1,0);
          return uVar2;
        }
        if (*(char *)(param_1 + 0xbd) == '&') {
          uVar3 = uVar4;
        }
        else {
          uVar3 = uVar3 & uVar4;
        }
      }
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0xc0);
      uVar1 = FUN_1804a6370(param_1,uVar3);
      *(undefined2 *)(param_1 + 0xba) = uVar1;
      return 1;
    }
  }
  return 0;
}



/* ===== 1804d5b30 FUN_1804d5b30 ===== */

undefined2 FUN_1804d5b30(longlong param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 5 + (ulonglong)*(ushort *)(param_1 + 0xc2) * 8) ==
      '\x17') {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(ushort *)(param_1 + 0xc2) * 8);
    iVar3 = FUN_1804d68c0(iVar1,*(undefined4 *)(param_1 + 0xd0),*(undefined1 *)(param_1 + 0xbd));
    if (iVar1 == iVar3) {
      return *(undefined2 *)(param_1 + 0xb8);
    }
    if ((*(byte *)(param_1 + 0xc4) & 0x40) == 0) {
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0xc0);
      uVar2 = FUN_1804a6370(param_1,iVar3);
      *(undefined2 *)(param_1 + 0xba) = uVar2;
      return 1;
    }
  }
  return 0;
}



/* ===== 1804d5f00 FUN_1804d5f00 ===== */

undefined8 FUN_1804d5f00(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined2 uVar4;
  short sVar5;
  ushort uVar6;
  undefined2 uVar7;
  
  if ((*(byte *)(param_1 + 0xc4) & 0x40) != 0) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0xd8);
  iVar2 = *(int *)(lVar3 + 0x14);
  if (4 < iVar2) {
    return 0;
  }
  uVar6 = *(ushort *)(param_1 + 0xc0);
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 5 + (ulonglong)uVar6 * 8) != '@') {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0xbd);
  if (bVar1 == 8) {
    uVar4 = FUN_1804a6370(param_1,iVar2);
    *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0xc2);
    *(undefined2 *)(param_1 + 0xbc) = 0x893;
    *(undefined2 *)(param_1 + 0xba) = uVar4;
    FUN_1804d6ae0(param_1);
  }
  else {
    if (0x7fff < *(ushort *)(param_1 + 0xc2)) {
      return 0;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(ushort *)(param_1 + 0xc2) * 8) !=
        iVar2) {
      return 4;
    }
  }
  if (iVar2 < 1) {
    return 4;
  }
  if (iVar2 == 1) {
    sVar5 = 0x460f;
  }
  else {
    sVar5 = (iVar2 != 2) + 0x4612;
  }
  *(short *)(param_1 + 0xbc) = sVar5;
  uVar4 = 1;
  *(ushort *)(param_1 + 0xb8) = uVar6;
  if (1 < iVar2) {
    uVar4 = 5;
  }
  *(undefined2 *)(param_1 + 0xba) = uVar4;
  uVar6 = FUN_1804d6ae0(param_1);
  uVar4 = FUN_1804d6a00(param_1,*(longlong *)(param_1 + 0x20) + (ulonglong)uVar6 * 8,lVar3 + 0x18);
  if (iVar2 == 3) {
    uVar7 = FUN_1804a6370(param_1,0xffffff);
    *(undefined2 *)(param_1 + 0xbc) = 0x2113;
    *(ushort *)(param_1 + 0xb8) = uVar6;
    *(undefined2 *)(param_1 + 0xba) = uVar7;
    uVar6 = FUN_1804d6ae0(param_1);
  }
  *(ushort *)(param_1 + 0xb8) = uVar6;
  *(ushort *)(param_1 + 0xbc) = (ushort)bVar1 << 8 | 0x93;
  *(undefined2 *)(param_1 + 0xba) = uVar4;
  return 1;
}



/* ===== 1804d60b0 FUN_1804d60b0 ===== */

void FUN_1804d60b0(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (((*(uint *)(param_1 + 0xa8) & 0x20000) != 0) &&
     (uVar2 = *(ushort *)(param_1 + 0x192 + (ulonglong)*(byte *)(param_1 + 0xbd) * 2), uVar2 != 0))
  {
    lVar3 = *(longlong *)(param_1 + 0x20);
    do {
      uVar4 = (ulonglong)uVar2;
      uVar2 = *(ushort *)(lVar3 + uVar4 * 8);
      lVar1 = lVar3 + uVar4 * 8;
      if ((uVar2 < 0x8000) &&
         (*(longlong *)
           (*(longlong *)(lVar3 + 8 + (ulonglong)uVar2 * 8) + 0x28 +
           (ulonglong)(*(ushort *)(lVar1 + 2) >> 8) * 8) ==
          *(longlong *)
           (*(longlong *)(param_1 + 200) + 0x28 + (ulonglong)(*(ushort *)(param_1 + 0xba) >> 8) * 8)
         )) {
        FUN_1804d6d70(param_1,uVar4);
        return;
      }
      uVar2 = *(ushort *)(lVar1 + 6);
    } while (uVar2 != 0);
  }
  FUN_1804a5f70(param_1);
  return;
}



/* ===== 1804d61b0 FUN_1804d61b0 ===== */

undefined8 FUN_1804d61b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1804e2f70();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1804a66d0(param_1,0x1a,param_1 + -0x1f0);
  return uVar2;
}



/* ===== 1804d61f0 FUN_1804d61f0 ===== */

undefined8 FUN_1804d61f0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_res8 [32];
  
  FUN_1804a6890(*(undefined8 *)(param_1 + 0x80),local_res8,param_1 + 0xd0);
  plVar2 = (longlong *)
           FUN_1804926a0(*(undefined8 *)(param_1 + 0x80),
                         *(undefined8 *)
                          (*(longlong *)(param_1 + 0x20) + 8 +
                          (ulonglong)*(ushort *)(param_1 + 0xc0) * 8),local_res8);
  if ((*plVar2 == -1) || ((int)(*plVar2 >> 0x2f) == -0xc)) {
    iVar1 = FUN_1804e2f70(param_1);
    if (iVar1 != 0) {
      uVar3 = FUN_1804a66d0(param_1,0x1a,param_1 + -0x1f0);
      return uVar3;
    }
  }
  return 0;
}



/* ===== 1804d6280 FUN_1804d6280 ===== */

undefined8 FUN_1804d6280(longlong param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xa8) & 0x10000) != 0) {
    iVar1 = FUN_1804e3320(param_1,*(undefined2 *)(param_1 + 0xb8));
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0xb8) = (uint)*(ushort *)(param_1 + 0xc0);
      return 2;
    }
  }
  return 0;
}



/* ===== 1804d62d0 FUN_1804d62d0 ===== */

undefined8 FUN_1804d62d0(longlong param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xa8) & 0x10000) != 0) {
    iVar1 = FUN_1804e3320(param_1,*(undefined2 *)(param_1 + 0xb8));
    if (iVar1 != 0) {
      *(int *)(param_1 + 0xb8) = (1 << (*(byte *)(param_1 + 0xc2) & 0x1f)) + -1;
      return 2;
    }
  }
  return 0;
}



/* ===== 1804d6320 FUN_1804d6320 ===== */

undefined8 FUN_1804d6320(longlong param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xa8) & 0x10000) != 0) {
    iVar1 = FUN_1804e3320(param_1,*(undefined2 *)(param_1 + 0xb8));
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xb8) =
           *(undefined4 *)
            (*(longlong *)
              (*(longlong *)(param_1 + 0x20) + 8 + (ulonglong)*(ushort *)(param_1 + 0xc0) * 8) +
            0x30);
      return 2;
    }
  }
  return 0;
}



/* ===== 1804d6380 FUN_1804d6380 ===== */

undefined8 FUN_1804d6380(longlong param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xa8) & 0x10000) != 0) {
    iVar1 = FUN_1804e3320(param_1,*(undefined2 *)(param_1 + 0xb8));
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xb8) =
           *(undefined4 *)
            (*(longlong *)
              (*(longlong *)(param_1 + 0x20) + 8 + (ulonglong)*(ushort *)(param_1 + 0xc0) * 8) +
            0x34);
      return 2;
    }
  }
  return 0;
}



/* ===== 1804d63e0 FUN_1804d63e0 ===== */

ulonglong FUN_1804d63e0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_1804d3410();
  iVar2 = FUN_1804e3320(param_1,(short)uVar1);
  if (iVar2 == 0) {
    uVar3 = FUN_1804a5f70(param_1);
    return uVar3;
  }
  return (ulonglong)uVar1;
}



/* ===== 1804d64b0 FUN_1804d64b0 ===== */

ulonglong FUN_1804d64b0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_1804e2e70();
  iVar2 = FUN_1804e32a0(param_1,(short)uVar1);
  if (iVar2 == 0) {
    uVar3 = FUN_1804a5f70(param_1);
    return uVar3;
  }
  return (ulonglong)uVar1;
}



/* ===== 1804d65f0 FUN_1804d65f0 ===== */

ulonglong FUN_1804d65f0(longlong param_1)

{
  ulonglong uVar1;
  
  if ((*(byte *)(param_1 + 0xba) & 2) == 0) {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x25c + (ulonglong)*(ushort *)(param_1 + 0xb8) * 4);
  }
  else {
    uVar1 = FUN_1804d3410();
    if ((ushort)uVar1 < *(ushort *)(param_1 + 0x1a8)) {
      uVar1 = FUN_1804a5f70(param_1);
      return uVar1;
    }
  }
  return uVar1;
}



/* ===== 1804d66c0 FUN_1804d66c0 ===== */

void FUN_1804d66c0(longlong param_1)

{
  ushort uVar1;
  
  uVar1 = FUN_1804d3410();
  if ((uVar1 < *(ushort *)(param_1 + 0x1b4)) &&
     ((((((*(short *)(param_1 + 0x230) != 0 || (*(short *)(param_1 + 0x232) != 0)) ||
         (*(short *)(param_1 + 0x234) != 0)) ||
        ((*(short *)(param_1 + 0x236) != 0 || (*(short *)(param_1 + 0x238) != 0)))) ||
       ((*(short *)(param_1 + 0x23a) != 0 ||
        ((*(short *)(param_1 + 0x240) != 0 || (*(short *)(param_1 + 0x24c) != 0)))))) ||
      (*(short *)(param_1 + 0x252) != 0)))) {
    FUN_1804a5f70(param_1);
    return;
  }
  return;
}



/* ===== 1804d6790 FUN_1804d6790 ===== */

void FUN_1804d6790(longlong param_1)

{
  ushort uVar1;
  
  uVar1 = FUN_1804d3410();
  if (uVar1 < *(ushort *)(param_1 + 0x1b4)) {
    FUN_1804a5f70(param_1);
    return;
  }
  return;
}



/* ===== 1804d67c0 FUN_1804d67c0 ===== */

ulonglong FUN_1804d67c0(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  byte bVar1;
  
  bVar1 = (byte)param_3;
  switch(param_4) {
  case 0x21:
    return param_2 & param_3;
  case 0x22:
    return param_2 | param_3;
  case 0x23:
    return param_2 ^ param_3;
  case 0x24:
    return param_2 << (bVar1 & 0x3f);
  case 0x25:
    return param_2 >> (bVar1 & 0x3f);
  case 0x26:
    return (longlong)param_2 >> (bVar1 & 0x3f);
  case 0x27:
    return param_2 >> (-bVar1 & 0x3f) | param_2 << (bVar1 & 0x3f);
  case 0x28:
    param_2 = param_2 << (-bVar1 & 0x3f) | param_2 >> (bVar1 & 0x3f);
    break;
  case 0x29:
    return param_2 + param_3;
  case 0x2a:
    return param_2 - param_3;
  case 0x2b:
    return param_2 * param_3;
  }
  return param_2;
}



/* ===== 1804d68c0 FUN_1804d68c0 ===== */

ulonglong FUN_1804d68c0(uint param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (ulonglong)param_1;
  bVar1 = (byte)param_2;
  switch(param_3) {
  case 0x21:
    return (ulonglong)(param_1 & param_2);
  case 0x22:
    return (ulonglong)(param_1 | param_2);
  case 0x23:
    return (ulonglong)(param_1 ^ param_2);
  case 0x24:
    return (ulonglong)(param_1 << (bVar1 & 0x1f));
  case 0x25:
    return (ulonglong)(param_1 >> (bVar1 & 0x1f));
  case 0x26:
    return (ulonglong)(uint)((int)param_1 >> (bVar1 & 0x1f));
  case 0x27:
    return (ulonglong)(param_1 >> (-(bVar1 & 0x1f) & 0x1f) | param_1 << (bVar1 & 0x1f));
  case 0x28:
    return (ulonglong)(param_1 << (-(bVar1 & 0x1f) & 0x1f) | param_1 >> (bVar1 & 0x1f));
  case 0x29:
    return (ulonglong)(param_1 + param_2);
  case 0x2a:
    return (ulonglong)(param_1 - param_2);
  case 0x2b:
    return (ulonglong)(param_1 * param_2);
  case 0x2d:
    uVar2 = FUN_1804b8f50(uVar2);
    return uVar2;
  case 0x2f:
    return (ulonglong)-param_1;
  case 0x32:
    uVar3 = (ulonglong)param_2;
    if ((int)param_1 < (int)param_2) {
      uVar3 = uVar2;
    }
    return uVar3;
  case 0x33:
    uVar3 = (ulonglong)param_2;
    if ((int)param_2 < (int)param_1) {
      uVar3 = uVar2;
    }
    uVar2 = uVar3;
  }
  return uVar2;
}



/* ===== 1804d6a00 FUN_1804d6a00 ===== */

undefined8 FUN_1804d6a00(undefined8 param_1,longlong param_2,short *param_3)

{
  undefined8 uVar1;
  
  switch(*(byte *)(param_2 + 4) & 0x1f) {
  case 0xe:
    uVar1 = FUN_1804a6540(param_1,*(undefined8 *)param_3);
    return uVar1;
  case 0xf:
    uVar1 = FUN_1804a6370(param_1,(int)(char)*param_3);
    return uVar1;
  case 0x10:
    uVar1 = FUN_1804a6370(param_1,(char)*param_3);
    return uVar1;
  case 0x11:
    uVar1 = FUN_1804a6370(param_1,(int)*param_3);
    return uVar1;
  case 0x12:
    uVar1 = FUN_1804a6370(param_1,*param_3);
    return uVar1;
  case 0x13:
  case 0x14:
    uVar1 = FUN_1804a6370(param_1,*(undefined4 *)param_3);
    return uVar1;
  case 0x15:
  case 0x16:
    uVar1 = FUN_1804a6410(param_1,*(undefined8 *)param_3);
    return uVar1;
  default:
    return 0;
  }
}



/* ===== 1804d6a90 FUN_1804d6a90 ===== */

void FUN_1804d6a90(longlong param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x192 + (ulonglong)*(byte *)(param_1 + 0xbd) * 2);
  if (param_2 < uVar1) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar1 * 8) == *(int *)(param_1 + 0xb8)
         ) {
        return;
      }
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 6 + (ulonglong)uVar1 * 8);
    } while (param_2 < uVar1);
  }
  FUN_1804a5f70();
  return;
}



/* ===== 1804d6ae0 FUN_1804d6ae0 ===== */

ulonglong FUN_1804d6ae0(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar4 = *(uint *)(param_1 + 0xa8);
  if ((uVar4 & 0xfff0000) != 0x3ff0000) {
    if (((uVar4 >> 0x10 & 1) == 0) && (((&DAT_18056ee40)[*(byte *)(param_1 + 0xbd)] & 0x60) == 0)) {
      uVar3 = FUN_1804d3410(param_1);
      return uVar3;
    }
    if (((((uVar4 & 0xb0000) != 0xb0000) &&
         (((&DAT_18056ee40)[*(byte *)(param_1 + 0xbd)] & 0x60) == 0x40)) &&
        (*(byte *)(param_1 + 0xbd) != 0x47)) ||
       (((uVar4 & 0x110000) != 0x110000 &&
        (((&DAT_18056ee40)[*(byte *)(param_1 + 0xbd)] & 0x60) == 0x60)))) {
      uVar3 = FUN_1804a5f70(param_1);
      return uVar3;
    }
  }
  do {
    uVar2 = *(ushort *)(param_1 + 0xb8);
    uVar3 = (ulonglong)uVar2;
    iVar6 = (uint)*(byte *)(param_1 + 0xbd) * 0x20000;
    if (*(uint *)(param_1 + 0x28) <= (uint)uVar2) {
      lVar1 = *(longlong *)(param_1 + 0x20);
      iVar6 = iVar6 + (uint)*(byte *)(lVar1 + 5 + uVar3 * 8) * 0x400;
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar1 + uVar3 * 8);
      if (uVar2 < 0x7ffd) {
        *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar1 + 8 + uVar3 * 8);
      }
    }
    uVar2 = *(ushort *)(param_1 + 0xba);
    uVar3 = (ulonglong)uVar2;
    if ((uint)uVar2 < *(uint *)(param_1 + 0x28)) {
      uVar4 = uVar2 & 0x3ff;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x20);
      uVar4 = (uint)*(byte *)(lVar1 + 5 + uVar3 * 8);
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar1 + uVar3 * 8);
      if (uVar2 < 0x7ffd) {
        *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar1 + 8 + uVar3 * 8);
      }
    }
    uVar3 = 0;
    while( true ) {
      uVar7 = (uint)uVar3;
      uVar9 = uVar7 & 0x1ffff | uVar4 + iVar6;
      uVar8 = ((uVar9 >> 0xb | uVar9 << 0x15) - uVar9 >> 0x12 |
              ((uVar9 & 0xfffff800) + uVar9 * -0x800) * 8) % 0x3e9;
      uVar5 = *(uint *)(&DAT_180570980 + (ulonglong)uVar8 * 4);
      if ((((uVar5 & 0xffffff) == uVar9) ||
          (uVar5 = *(uint *)(&DAT_180570980 + (ulonglong)(uVar8 + 1) * 4),
          (uVar5 & 0xffffff) == uVar9)) &&
         (uVar2 = (*(code *)(&PTR_FUN_180570480)[uVar5 >> 0x18])(param_1), uVar2 != 0)) break;
      if (uVar7 == 0xfffff) {
        uVar3 = FUN_1804d3410(param_1);
        return uVar3;
      }
      uVar3 = (ulonglong)((uVar7 | (uint)(uVar3 >> 10)) ^ 0xffc00);
    }
    if (4 < uVar2) {
      return (ulonglong)
             ((uint)*(byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)uVar2 * 8) << 0x18 |
             (uint)uVar2);
    }
  } while (uVar2 == 1);
  if (uVar2 == 2) {
    uVar3 = FUN_1804a6370(param_1,*(undefined4 *)(param_1 + 0xb8));
  }
  else {
    if (uVar2 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0x18);
    }
    uVar3 = 0xffff;
  }
  return uVar3;
}



/* ===== 1804d6d70 FUN_1804d6d70 ===== */

ulonglong FUN_1804d6d70(longlong param_1,uint param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_3 + 5) == '<') {
    bVar1 = *(byte *)(param_3 + 4);
    if ((char)bVar1 < '\0') {
      if ((param_2 < *(ushort *)(param_1 + 0x1b4)) &&
         ((((((*(short *)(param_1 + 0x230) != 0 || (*(short *)(param_1 + 0x232) != 0)) ||
             (*(short *)(param_1 + 0x234) != 0)) ||
            ((*(short *)(param_1 + 0x236) != 0 || (*(short *)(param_1 + 0x238) != 0)))) ||
           ((*(short *)(param_1 + 0x23a) != 0 ||
            ((*(short *)(param_1 + 0x240) != 0 || (*(short *)(param_1 + 0x24c) != 0)))))) ||
          (*(short *)(param_1 + 0x252) != 0)))) {
        uVar2 = FUN_1804a5f70();
        return uVar2;
      }
      if (((*(byte *)(param_1 + 0xbc) & 0x9f) == 0x89) && ((bVar1 & 0x1f) == 0x15)) {
        *(byte *)(param_3 + 4) = bVar1 - 0xc;
      }
    }
  }
  return (ulonglong)param_2;
}



/* ===== 1804d6e20 FUN_1804d6e20 ===== */

void FUN_1804d6e20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  
  if (*(uint *)(param_1 + 0xc) < *(int *)(param_1 + 0x678) + 0x8000U) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954f0(param_1,1);
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    puVar5 = *(undefined8 **)(lVar4 + 0x20);
    pbVar6 = (byte *)puVar5[-1];
    if (((((ulonglong)pbVar6 & 3) == 0) &&
        (((10 < *pbVar6 - 0x3f || ((0x415U >> (*pbVar6 - 0x3f & 0x1f) & 1) == 0)) &&
         (cVar2 = *(char *)(*(longlong *)(param_1 + 0x90) + 10), cVar2 != '\x14')))) &&
       ((cVar2 != -0x71 && (cVar2 != -0x6b)))) {
      uVar7 = *(int *)(param_1 + 0xac) + 2;
      bVar3 = pbVar6[-3];
      FUN_180540530(*(longlong *)(param_1 + 0xa0) + 4,*(longlong *)(param_1 + 0xa0) + -8,
                    (ulonglong)uVar7 * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 8) = 0x10000;
      uVar8 = FUN_1804a6210(param_1,0x1c,&DAT_180004e8e);
      *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + -4) = uVar8;
      uVar9 = FUN_1804a6210(param_1,0x1c,pbVar6);
      **(uint **)(param_1 + 0xa0) = uVar9 | 0x20000;
      uVar8 = FUN_1804a6830(param_1);
      lVar1 = (ulonglong)uVar7 * 8;
      *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + -8) = uVar8;
      *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 0xc;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 3;
      *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
      *(short *)(param_1 + 400) = (short)uVar8;
      FUN_180540530(puVar5 + 1,puVar5 + -2,lVar1);
      puVar5[2] = (ulonglong)bVar3 * 8 + 0x2a;
      *puVar5 = pbVar6;
      puVar5[-1] = &DAT_180004e8e;
      puVar5[-2] = 0xffffffffffffffff;
      *(longlong *)(lVar4 + 0x20) = *(longlong *)(lVar4 + 0x20) + 0x18;
      *(longlong *)(lVar4 + 0x28) = *(longlong *)(lVar4 + 0x28) + 0x18;
      iVar10 = FUN_180003349(lVar4,0,param_1,FUN_1804db670);
      FUN_180540530(puVar5 + -2,puVar5 + 1,lVar1);
      puVar5[-1] = pbVar6;
      lVar1 = *(longlong *)(lVar4 + 0x28);
      *(longlong *)(lVar4 + 0x20) = *(longlong *)(lVar4 + 0x20) + -0x18;
      *(longlong *)(lVar4 + 0x28) = lVar1 + -0x18;
      if (iVar10 != 0) {
        if (iVar10 == 2) {
          *(undefined8 *)(lVar1 + -0x20) = *(undefined8 *)(lVar1 + -8);
        }
        else {
          *(undefined8 *)(lVar1 + -0x20) = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_180484920(lVar4,iVar10);
      }
      goto LAB_1804d7015;
    }
  }
  FUN_1804c2b90(param_1,7,0);
LAB_1804d7015:
  *(undefined8 *)(param_2 + 8) = 0xffffffffffffffff;
  return;
}



/* ===== 1804d7080 FUN_1804d7080 ===== */

void FUN_1804d7080(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)((longlong)*(undefined8 *)*param_2 >> 0x2f);
  if (uVar3 < 0xfffffff3) {
    uVar3 = 0xd;
  }
  else {
    uVar3 = ~uVar3;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  uVar2 = FUN_1804a62e0(param_1,*(ulonglong *)
                                 (*(longlong *)(param_1 + 0x90) + 0x30 + (ulonglong)uVar3 * 8) &
                                0x7fffffffffff,4);
  *puVar1 = uVar2;
  return;
}



/* ===== 1804d70e0 FUN_1804d70e0 ===== */

void FUN_1804d70e0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_58 [6];
  int local_28;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_28 = **(int **)(param_1 + 0xa0);
  if (local_28 != 0) {
    local_58[0] = *(undefined8 *)*param_2;
    iVar1 = FUN_1804c1910(param_1,local_58,0x11);
    if (iVar1 != 0) {
      local_1c = local_18;
    }
    **(undefined4 **)(param_1 + 0xa0) = local_1c;
  }
  return;
}



/* ===== 1804d7140 FUN_1804d7140 ===== */

void FUN_1804d7140(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined8 local_78 [6];
  uint local_48;
  
  uVar1 = **(uint **)(param_1 + 0xa0);
  if ((uVar1 & 0x1f000000) == 0xb000000) {
    uVar2 = (*(uint **)(param_1 + 0xa0))[1];
    uVar7 = uVar2 & 0x1f000000;
    if ((uVar7 == 0xb000000) || ((uVar2 != 0 && (uVar7 == 0)))) {
      local_78[0] = *(undefined8 *)*param_2;
      local_48 = uVar1;
      FUN_1804c1910(param_1,local_78,0x11);
      *(undefined4 *)(param_1 + 0xba) = 0x3e090005;
      uVar6 = (undefined2)uVar1;
      *(undefined2 *)(param_1 + 0xb8) = uVar6;
      uVar3 = FUN_1804d6ae0(param_1);
      if (uVar7 == 0) {
        uVar4 = FUN_1804a64b0(param_1,0xb);
        uVar5 = 0x4d0b;
        uVar6 = uVar3;
      }
      else {
        *(undefined2 *)(param_1 + 0xbc) = 0x4d0b;
        *(undefined2 *)(param_1 + 0xb8) = uVar3;
        *(short *)(param_1 + 0xba) = (short)uVar2;
        FUN_1804d6ae0(param_1);
        uVar4 = 0;
        uVar5 = 0x5800;
      }
      *(undefined2 *)(param_1 + 0xbc) = uVar5;
      *(undefined2 *)(param_1 + 0xb8) = uVar6;
      *(undefined2 *)(param_1 + 0xba) = uVar4;
      FUN_1804d6ae0(param_1);
      **(uint **)(param_1 + 0xa0) = uVar1;
      *(undefined1 *)(param_1 + 0xb5) = 1;
    }
  }
  return;
}



/* ===== 1804d7290 FUN_1804d7290 ===== */

void FUN_1804d7290(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong local_58;
  ulonglong local_50;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_14;
  
  local_28 = **(uint **)(param_1 + 0xa0);
  local_24 = (*(uint **)(param_1 + 0xa0))[1];
  if (((local_28 & 0x1f000000) == 0xb000000) && (local_24 != 0)) {
    local_20 = 0;
    local_14 = 0;
    puVar1 = *(undefined4 **)(param_1 + 0xa0);
    local_58 = *(ulonglong *)*param_2 & 0x7fffffffffff | 0xfffa000000000000;
    local_50 = ((ulonglong *)*param_2)[1];
    uVar2 = FUN_1804bf540(param_1,&local_58);
    *puVar1 = uVar2;
  }
  return;
}



/* ===== 1804d7330 FUN_1804d7330 ===== */

void FUN_1804d7330(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined4 local_14;
  
  puVar1 = *(uint **)(param_1 + 0xa0);
  local_28 = *puVar1;
  local_24 = puVar1[1];
  local_20 = puVar1[2];
  if ((((local_28 & 0x1f000000) == 0xb000000) && (local_24 != 0)) && (local_20 != 0)) {
    puVar2 = (ulonglong *)*param_2;
    local_14 = 0;
    local_58 = *puVar2 & 0x7fffffffffff | 0xfffa000000000000;
    local_50 = puVar2[1];
    local_48 = puVar2[2];
    FUN_1804bf540(param_1,&local_58);
  }
  return;
}



