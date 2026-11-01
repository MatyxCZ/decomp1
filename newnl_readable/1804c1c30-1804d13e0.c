/* ===== 1804c1c30 FUN_1804c1c30 ===== */

undefined8 FUN_1804c1c30(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar9 = (uint)param_2[1];
  uVar10 = *param_2 & 0x7fffffffffff;
  uVar6 = *(uint *)(uVar10 + 0x30);
  if (uVar9 < uVar6) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(uVar10 + 0x10) + (ulonglong)uVar9 * 8);
      if (lVar1 != -1) {
        uVar9 = (uint)(lVar1 >> 0x2f);
        if (uVar9 < 0xfffffff2) {
          uVar9 = 0xe0e;
        }
        else {
          uVar9 = ~uVar9 << 8 | 0xe;
        }
        goto LAB_1804c1cbc;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
  }
  uVar9 = uVar9 - uVar6;
  if (uVar9 <= *(uint *)(uVar10 + 0x34)) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(uVar10 + 0x28) + (ulonglong)uVar9 * 0x18);
      if (lVar1 != -1) {
        uVar6 = 0xe;
        uVar9 = (uint)((longlong)
                       *(undefined8 *)(*(longlong *)(uVar10 + 0x28) + 8 + (ulonglong)uVar9 * 0x18)
                      >> 0x2f);
        if (uVar9 < 0xfffffff2) {
          uVar9 = 0xe;
        }
        else {
          uVar9 = ~uVar9;
        }
        uVar5 = (uint)(lVar1 >> 0x2f);
        if (0xfffffff1 < uVar5) {
          uVar6 = ~uVar5;
        }
        uVar9 = uVar6 * 0x100 + uVar9;
        goto LAB_1804c1cbc;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 <= *(uint *)(uVar10 + 0x34));
  }
  uVar9 = 0;
LAB_1804c1cbc:
  bVar8 = (byte)uVar9;
  uVar2 = FUN_1804a5e80(param_1,0x25,(int)param_2[6],*(undefined4 *)((longlong)param_2 + 0x34));
  if (((int)param_2[8] != 0) || (bVar8 == 0)) {
    *(undefined2 *)(param_1 + 0xbc) = 0x1013;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    *(undefined2 *)(param_1 + 0xba) = uVar2;
    uVar4 = FUN_1804d6ae0(param_1);
    if ((int)param_2[8] == 0) {
      uVar3 = FUN_1804a6370(param_1,0xffffffff);
      *(undefined2 *)(param_1 + 0xbc) = 0x993;
      *(short *)(param_1 + 0xb8) = (short)uVar4;
      *(undefined2 *)(param_1 + 0xba) = uVar3;
      FUN_1804d6ae0(param_1);
    }
    *(undefined4 *)(param_2 + 8) = uVar4;
  }
  *(undefined2 *)(param_1 + 0xb8) = uVar2;
  *(undefined2 *)(param_1 + 0xba) = 1;
  *(ushort *)(param_1 + 0xbc) = bVar8 | 0x4880;
  uVar4 = FUN_1804d6ae0(param_1);
  if ((uVar9 & 0xff) < 3) {
    *(uint *)((longlong)param_2 + 0x34) = (uVar9 * 0x1000000 - (uVar9 & 0xff)) + 0x7fff;
    if (bVar8 == 0) goto LAB_1804c1d8a;
  }
  else {
    *(undefined4 *)((longlong)param_2 + 0x34) = uVar4;
  }
  if (*(int *)((longlong)param_2 + 0x44) == 0) {
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    *(ushort *)(param_1 + 0xbc) = (ushort)(uVar9 >> 8) | 0x4880;
    *(undefined2 *)(param_1 + 0xba) = 0;
    iVar7 = FUN_1804d6ae0(param_1);
    if ((uint)((int)uVar9 >> 8) < 3) {
      iVar7 = ((int)uVar9 >> 8) * 0xffffff + 0x7fff;
    }
    *(int *)(param_2 + 7) = iVar7;
    return 2;
  }
LAB_1804c1d8a:
  *(undefined4 *)(param_2 + 7) = 0x7fff;
  return 1;
}



/* ===== 1804c1e60 FUN_1804c1e60 ===== */

bool FUN_1804c1e60(longlong param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  
  iVar1 = FUN_18048f530(param_4,param_5);
  if (0x7fff < (ushort)((ushort)param_2 | (ushort)param_3)) {
    uVar5 = param_2 >> 0x18 & 0x1f;
    if (uVar5 - 0xf < 5) {
      uVar5 = 0x13;
    }
    uVar4 = (ushort)uVar5;
    uVar3 = param_3 >> 0x18 & 0x1f;
    if (uVar3 - 0xf < 5) {
      uVar3 = 0x13;
    }
    if (uVar5 != uVar3) {
      if (uVar5 == 0x13) {
        if (uVar3 != 0xe) {
          return (bool)2;
        }
        *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
        *(ushort *)(param_1 + 0xb8) = (ushort)param_2;
        param_2 = FUN_1804d6ae0(param_1);
        uVar4 = 0xe;
      }
      else {
        if (uVar5 != 0xe) {
          return (bool)2;
        }
        if (uVar3 != 0x13) {
          return (bool)2;
        }
        *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
        *(ushort *)(param_1 + 0xb8) = (ushort)param_3;
        param_3 = FUN_1804d6ae0(param_1);
      }
    }
    *(short *)(param_1 + 0xb8) = (short)param_2;
    uVar2 = 0x880;
    *(short *)(param_1 + 0xba) = (short)param_3;
    if (iVar1 == 0) {
      uVar2 = 0x980;
    }
    *(ushort *)(param_1 + 0xbc) = uVar2 | uVar4;
    FUN_1804d6ae0(param_1);
  }
  return iVar1 == 0;
}



/* ===== 1804c1f80 FUN_1804c1f80 ===== */

void FUN_1804c1f80(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  longlong *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  
  plVar1 = (longlong *)(param_1 + 0xa0);
  uVar26 = (ulonglong)param_2;
  lVar20 = 0;
  puVar25 = (ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + -8);
  if (0 < param_3) {
    do {
      if (*(int *)(lVar20 * 4 + uVar26 * 4 + *plVar1) == 0) {
        FUN_1804c5880(param_1,(int)lVar20 + param_2);
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < param_3);
  }
  uVar16 = 0;
  bVar4 = *(byte *)puVar25;
  while( true ) {
    uVar13 = (uint)uVar26;
    if ((bVar4 & 6) != 6) break;
    uVar17 = *puVar25;
    iVar12 = *(int *)(param_1 + 0xfc) + -1;
    *(int *)(param_1 + 0xfc) = iVar12;
    if (iVar12 < 1) goto LAB_1804c2620;
    iVar12 = (int)((longlong)uVar17 >> 3);
    uVar16 = (ulonglong)(uint)((int)uVar16 + iVar12);
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) - iVar12;
    uVar26 = (ulonglong)((uVar13 - 1) + iVar12);
    param_3 = param_3 + 1;
    *plVar1 = *plVar1 + ((longlong)uVar17 >> 3 & 0xffffffffU) * -4;
    *(undefined4 *)(*plVar1 + uVar26 * 4) = 0x2007ffd;
    uVar17 = *puVar25;
    *(undefined1 *)(param_1 + 0xb5) = 1;
    puVar25 = (ulonglong *)((longlong)puVar25 - (uVar17 & 0xfffffffffffffff8));
    bVar4 = (byte)*puVar25;
  }
  if ((((*(int *)(param_1 + 0xfc) == 0) && (*(longlong *)(param_1 + 0x98) != 0)) &&
      (**(byte **)(param_1 + 0x88) - 0x49 < 4)) &&
     (((*puVar25 & 3) != 0 ||
      (((*(int *)(param_1 + 0xbc8) == 0 && (*(int *)(param_1 + 0xbcc) == 0)) &&
       (3 < *(byte *)(param_1 + 0x50) - 0x49)))))) {
    uVar16 = 0;
    if ((3 < uVar13) &&
       ((plVar7 = (longlong *)*plVar1, plVar1 < plVar7 ||
        ((longlong *)((longlong)plVar7 + uVar26 * 4 + -4) < plVar1)))) {
      FUN_180540170(plVar7,0,((uVar26 >> 2) << 4) / 4 << 2);
      uVar16 = 1;
      if ((uVar26 & 0xfffffffffffffffc) != 0) {
        uVar16 = uVar26 >> 2;
      }
      uVar16 = uVar16 * 4;
    }
    if (uVar16 < uVar26) {
      do {
        *(undefined4 *)(*plVar1 + uVar16 * 4) = 0;
        uVar16 = uVar16 + 1;
      } while ((longlong)uVar16 < (longlong)uVar26);
    }
    *(uint *)(param_1 + 0xac) = (int)param_3 + uVar13;
    FUN_1804c2b90(param_1,7,0);
  }
  else {
    uVar17 = *puVar25;
    if (((byte)uVar17 & 7) == 3) {
      iVar12 = *(int *)(param_1 + 0xfc) + -1;
      *(int *)(param_1 + 0xfc) = iVar12;
      if (iVar12 < 0) goto LAB_1804c2620;
      uVar17 = (longlong)uVar17 >> 3;
      iVar12 = (int)uVar17;
      uVar16 = (ulonglong)(uint)((int)uVar16 + iVar12);
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) - iVar12;
      uVar26 = (ulonglong)(uVar13 + iVar12);
      *plVar1 = *plVar1 + (uVar17 & 0xffffffff) * -4;
      puVar25 = (ulonglong *)((longlong)puVar25 - (*puVar25 & 0xfffffffffffffff8));
    }
    uVar17 = *puVar25;
    iVar12 = (int)uVar26;
    if ((uVar17 & 3) != 0) {
      if (((byte)uVar17 & 7) == 2) {
        puVar8 = (undefined *)puVar25[-3];
        piVar2 = (int *)(param_1 + 0xfc);
        *piVar2 = *piVar2 + -2;
        if (-1 < *piVar2) {
          uVar24 = (longlong)uVar17 >> 3 & 0xffffffff;
          iVar23 = (int)((longlong)uVar17 >> 3);
          *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) - iVar23;
          *plVar1 = *plVar1 + uVar24 * -4;
          uVar13 = iVar23 - 4;
          lVar20 = *plVar1;
          *(uint *)(param_1 + 0xac) = uVar13;
          if (puVar8 == &LAB_1800034b2) {
            bVar4 = *(byte *)(puVar25[-2] - 3);
            if (param_3 == 0) {
              uVar21 = 0x7fff;
            }
            else {
              uVar21 = *(undefined4 *)(lVar20 + (ulonglong)(uint)(iVar12 + iVar23) * 4);
            }
            *(undefined4 *)(lVar20 + (ulonglong)bVar4 * 4) = uVar21;
            if ((uint)bVar4 < *(uint *)(param_1 + 0xac)) {
              return;
            }
          }
          else {
            if (puVar8 == &LAB_1800035a9) {
              return;
            }
            if (puVar8 != &DAT_1800033fb) {
              return;
            }
            uVar22 = *(uint *)(puVar25[-2] - 4) >> 0x18;
            if (param_3 == 0) {
              uVar14 = 0x7fff;
            }
            else {
              uVar14 = *(uint *)(lVar20 + (ulonglong)(uint)(iVar12 + iVar23) * 4);
            }
            if (uVar22 != uVar13) {
              if (*(int *)(param_1 + 0x174) != 0) goto LAB_1804c2620;
              lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + uVar16 * -8;
              *(uint *)(lVar20 + (ulonglong)uVar13 * 4) = uVar14;
              uVar9 = *(undefined8 *)(lVar19 + -0x20);
              if (param_3 == 0) {
                *(undefined8 *)(lVar19 + -0x20) = 0xffffffffffffffff;
              }
              else {
                *(undefined8 *)(lVar19 + -0x20) = *(undefined8 *)(lVar19 + uVar26 * 8);
              }
              *(ulonglong *)(*(longlong *)(param_1 + 0x80) + 0x20) = lVar19 + uVar24 * -8;
              uVar14 = FUN_1804c3030(param_1,uVar22,(ulonglong)uVar13);
              lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20);
              *(ulonglong *)(*(longlong *)(param_1 + 0x80) + 0x20) = lVar20 + (uVar16 + uVar24) * 8;
              *(undefined8 *)(uVar24 * 8 + -0x20 + lVar20) = uVar9;
            }
            if (0xfffffeff < uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_180484920(*(undefined8 *)(param_1 + 0x80),-uVar14);
            }
            if (uVar14 == 0) {
              return;
            }
            bVar4 = *(byte *)(puVar25[-2] - 3);
            *(uint *)(*plVar1 + (ulonglong)bVar4 * 4) = uVar14;
            if ((uint)bVar4 < *(uint *)(param_1 + 0xac)) {
              return;
            }
          }
          *(uint *)(param_1 + 0xac) = bVar4 + 1;
          return;
        }
      }
LAB_1804c2620:
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0x10);
    }
    uVar13 = *(uint *)(uVar17 - 4);
    if (uVar13 < 0x1000000) {
      lVar20 = param_3;
    }
    else {
      lVar20 = (ulonglong)(uVar13 >> 0x18) - 1;
    }
    uVar13 = uVar13 >> 8;
    uVar16 = (ulonglong)((uVar13 & 0xff) + 2);
    lVar19 = *(longlong *)((puVar25[-1 - uVar16] & 0x7fffffffffff) + 0x20);
    if ((*(byte *)(lVar19 + -0x2b) & 8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xc);
    }
    if (((*(int *)(param_1 + 0xfc) == 0) && (*(longlong *)(param_1 + 0x98) != 0)) &&
       (puVar25 == (ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + -8))) {
      if ((*(short *)(param_1 + 0x6c) == 0) && (uVar5 = *(ushort *)(param_1 + 0x1c2), uVar5 != 0)) {
        lVar18 = *(longlong *)(param_1 + 0x20);
        do {
          if ((*(longlong *)(lVar18 + 8 + (ulonglong)uVar5 * 8) == lVar19 + -0x68) &&
             (uVar6 = *(ushort *)(param_1 + 0x1a8), uVar6 != 0)) {
            iVar23 = 0;
            do {
              uVar17 = (ulonglong)uVar6;
              uVar6 = *(ushort *)(lVar18 + 6 + uVar17 * 8);
              iVar15 = iVar23 + 1;
              if (*(ushort *)(lVar18 + uVar17 * 8) != uVar5) {
                iVar15 = iVar23;
              }
              iVar23 = iVar15;
            } while (uVar6 != 0);
            if (iVar15 != 0) {
              if (*(longlong *)(param_1 + 0x88) != *(longlong *)(param_1 + 0xbc0)) {
                    /* WARNING: Subroutine does not return */
                FUN_1804954a0(param_1,0xe);
              }
              if (*(int *)(param_1 + 0x694) < *(int *)(param_1 + 0xf8) + iVar15) {
                *(int *)(param_1 + 0xac) = (int)param_3 + iVar12;
                FUN_1804bc8d0(param_1);
                FUN_1804c2b90(param_1,5,*(undefined2 *)(param_1 + 0x68));
                return;
              }
            }
          }
          uVar5 = *(ushort *)(lVar18 + 6 + (ulonglong)uVar5 * 8);
        } while (uVar5 != 0);
      }
      FUN_1804bc6f0(param_1);
    }
    lVar18 = 0;
    if (0 < lVar20) {
      do {
        lVar3 = lVar18 * 4;
        if (lVar18 < param_3) {
          uVar21 = *(undefined4 *)(lVar3 + uVar26 * 4 + *plVar1);
        }
        else {
          uVar21 = 0x7fff;
        }
        lVar18 = lVar18 + 1;
        *(undefined4 *)(*plVar1 + -8 + lVar3) = uVar21;
      } while (lVar18 < lVar20);
    }
    iVar12 = (uVar13 & 0xff) + (int)lVar20;
    *(int *)(param_1 + 0xac) = iVar12;
    if (*(int *)(param_1 + 0xfc) < 1) {
      if (((*(int *)(param_1 + 0xbc8) == 0) && (*(int *)(param_1 + 0xbcc) == 0)) &&
         (3 < *(byte *)(param_1 + 0x50) - 0x49)) {
                    /* WARNING: Subroutine does not return */
        FUN_1804954a0(param_1,8);
      }
      if (*(char *)(param_1 + 0xb5) != '\0') goto LAB_1804c2620;
      if ((0xf9 < *(byte *)(lVar19 + -0x5d) + 1) ||
         (0xf9 < (uint)(iVar12 + *(int *)(param_1 + 0xb0)))) {
                    /* WARNING: Subroutine does not return */
        FUN_1804954a0(param_1,3);
      }
      uVar10 = FUN_1804a62e0(param_1,lVar19 + -0x68,7);
      uVar11 = FUN_1804a66d0(param_1,0x19,*puVar25);
      *(undefined2 *)(param_1 + 0xbc) = 0xb89;
      *(undefined2 *)(param_1 + 0xb8) = uVar10;
      *(undefined2 *)(param_1 + 0xba) = uVar11;
      FUN_1804d6ae0(param_1);
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
      *(undefined1 *)(param_1 + 0xb5) = 1;
      *(undefined2 *)(param_1 + 0xbb0) = 0x7fff;
      FUN_180540530(*plVar1 + ((ulonglong)uVar13 & 0xff) * 4,*plVar1 + -8,lVar20 * 4);
      FUN_180540170(*plVar1 + -8,0,uVar16 * 4);
    }
    else {
      *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + -1;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + (-2 - (uVar13 & 0xff));
      *plVar1 = *plVar1 + uVar16 * -4;
    }
  }
  return;
}



/* ===== 1804c2680 FUN_1804c2680 ===== */

void FUN_1804c2680(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  FUN_180540170(param_1 + 0x25c,0,0x408);
  FUN_180540170(param_1 + 0x192,0,0xca);
  *(undefined8 *)(param_1 + 0xb24) = 0;
  *(undefined8 *)(param_1 + 0xb2c) = 0;
  *(undefined8 *)(param_1 + 0xb34) = 0;
  *(undefined8 *)(param_1 + 0xb3c) = 0;
  *(undefined8 *)(param_1 + 0xb44) = 0;
  *(undefined8 *)(param_1 + 0xb4c) = 0;
  *(undefined8 *)(param_1 + 0xb54) = 0;
  *(undefined8 *)(param_1 + 0xb5c) = 0;
  *(undefined8 *)(param_1 + 0xb64) = 0;
  *(undefined8 *)(param_1 + 0xb6c) = 0;
  *(undefined8 *)(param_1 + 0xb74) = 0;
  *(undefined8 *)(param_1 + 0xb7c) = 0;
  *(undefined8 *)(param_1 + 0xb84) = 0;
  *(undefined8 *)(param_1 + 0xb8c) = 0;
  *(undefined8 *)(param_1 + 0xb94) = 0;
  *(undefined8 *)(param_1 + 0xb9c) = 0;
  *(longlong *)(param_1 + 0xa0) = param_1 + 0x264;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x688);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x68c);
  *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0xbc8);
  *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xbcc);
  *(undefined2 *)(param_1 + 0xbb0) = 0x7fff;
  *(undefined8 *)(param_1 + 0xba8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 2;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xbc) = 0xd09;
  FUN_1804a5f70(param_1);
  lVar3 = *(longlong *)(param_1 + 0x20);
  *(undefined4 *)(lVar3 + 0x3fff8) = 0;
  *(undefined4 *)(lVar3 + 0x3fffc) = 0x1600;
  lVar3 = *(longlong *)(param_1 + 0x20);
  *(undefined4 *)(lVar3 + 0x3fff0) = 0;
  *(undefined4 *)(lVar3 + 0x3fff4) = 0x1601;
  lVar3 = *(longlong *)(param_1 + 0x20);
  *(undefined4 *)(lVar3 + 0x3ffe8) = 0;
  *(undefined4 *)(lVar3 + 0x3ffec) = 0x1602;
  puVar5 = *(uint **)(param_1 + 0x88);
  uVar4 = *(uint *)(param_1 + 0xbc8);
  *(undefined4 *)(param_1 + 0x28) = 0x7ffd;
  *(uint **)(param_1 + 0xbc0) = puVar5;
  *(uint **)(param_1 + 0x48) = puVar5;
  if (uVar4 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)uVar4 * 8);
    uVar1 = *(ushort *)(lVar3 + 0x6c);
    *(undefined4 *)(param_1 + 0x50) = 0x58;
    uVar6 = (uint)uVar1;
    if (uVar1 == 0) {
      uVar6 = uVar4;
    }
    *(short *)(param_1 + 0x6c) = (short)uVar6;
    if ((*(int *)(param_1 + 0xbcc) == 0) && (*(char *)(*(longlong *)(lVar3 + 0x30) + 10) == '\0')) {
      if (((puVar5 <= (uint *)(*(longlong *)(param_1 + 0x98) + 0x68)) || ((char)puVar5[-1] != 'N'))
         || (puVar5[(ulonglong)(puVar5[-1] >> 0x10) - 0x8001] >> 0x10 != uVar6)) goto LAB_1804c288c;
      FUN_1804bc6f0(param_1);
      FUN_1804c3880(param_1,*(longlong *)(param_1 + 0x88) + -4,param_1 + 0xba8,1);
    }
    else {
      *(undefined8 *)(param_1 + 0xbc0) = 0;
LAB_1804c288c:
      FUN_1804bcb20(param_1,lVar3);
    }
    if ((*(int *)(param_1 + 0x670) <=
         (int)(uint)*(ushort *)
                     (*(longlong *)
                       (*(longlong *)(param_1 + 0x180) + (ulonglong)*(ushort *)(param_1 + 0x6c) * 8)
                     + 100)) ||
       (*(int *)(param_1 + 0x684) + *(int *)(param_1 + 0x680) <=
        (int)(uint)*(byte *)(*(longlong *)(lVar3 + 0x30) + 0xb +
                            (ulonglong)*(uint *)(param_1 + 0xbcc) * 0xc))) {
      if (((char)**(uint **)(param_1 + 0x88) == 'W') &&
         (uVar4 = *(uint *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x180) +
                             (ulonglong)(**(uint **)(param_1 + 0x88) >> 0x10) * 8) + 0x50),
         (char)uVar4 == 'F')) {
        FUN_1804c40d0(param_1,uVar4 >> 8 & 0xff,uVar4 >> 0x18);
      }
      FUN_1804c2b90(param_1,6,0);
    }
    goto LAB_1804c291e;
  }
  *(undefined2 *)(param_1 + 0x6c) = 0;
  *(uint *)(param_1 + 0x50) = *puVar5;
  uVar4 = *puVar5;
  if (0x1f < (uVar4 & 0xff) - 0x41) goto switchD_1804c2983_caseD_43;
  uVar6 = uVar4 >> 8 & 0xff;
  switch(uVar4 & 0xff) {
  case 0x41:
  case 0x42:
  case 0x45:
    goto switchD_1804c2983_caseD_41;
  case 0x46:
    *(uint *)(param_1 + 0xac) = uVar6;
    *(uint *)(param_1 + 0xe8) = (puVar5[1] >> 0x10) * -4 + 0x20000;
    uVar4 = puVar5[1];
    *(undefined4 *)(param_1 + 0xec) = 0x12;
    *(uint **)(param_1 + 0xe0) = puVar5 + ((ulonglong)(uVar4 >> 0x10) - 0x7ffe);
    break;
  case 0x4a:
  case 0x4b:
  case 0x4c:
    *(uint *)(param_1 + 0xac) = ((uVar4 >> 0x10) - 1) + uVar6;
    break;
  case 0x4f:
    *(uint *)(param_1 + 0xe8) = (uVar4 >> 0x10) * -4 + 0x20000;
    puVar5 = puVar5 + ((ulonglong)(uVar4 >> 0x10) - 0x7fff);
    *(uint **)(param_1 + 0xe0) = puVar5;
    break;
  case 0x52:
    if ((char)puVar5[-1] == 'W') {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,9);
    }
    *(uint *)(param_1 + 0xac) = ((puVar5[-1] >> 0x18) - 1) + uVar6;
    *(uint *)(param_1 + 0xe8) = (uVar4 >> 0x10) * -4 + 0x20000;
    puVar5 = puVar5 + ((ulonglong)(uVar4 >> 0x10) - 0x7fff);
    *(uint **)(param_1 + 0xe0) = puVar5;
    break;
  case 0x55:
    uVar2 = puVar5[(ulonglong)(uVar4 >> 0x10) - 0x8000];
    if (((char)uVar2 == 'X') && ((ulonglong)(uVar2 >> 0x10) < 0x8000)) {
      *(uint **)(param_1 + 0xe0) =
           puVar5 + ((ulonglong)(uVar4 >> 0x10) - 0xffff) + (ulonglong)(uVar2 >> 0x10);
      *(uint *)(param_1 + 0xe8) = (uVar2 >> 0x10) * -4 + 0x20000;
    }
    *(uint *)(param_1 + 0xac) = uVar6;
    goto switchD_1804c2983_caseD_41;
  case 0x60:
    *(uint *)(param_1 + 0xac) = (uint)*(byte *)(*(longlong *)(param_1 + 0x98) + 10);
switchD_1804c2983_caseD_41:
    puVar5 = puVar5 + 1;
  }
switchD_1804c2983_caseD_43:
  *(uint **)(param_1 + 0x88) = puVar5;
  FUN_1804bc6f0(param_1);
  uVar4 = *(uint *)(param_1 + 0x50) & 0xff;
  if (uVar4 == 0x4f) {
    FUN_1804c3880(param_1,*(longlong *)(param_1 + 0x88) + -4,param_1 + 0xba8,1);
  }
  else if (uVar4 == 0x45) {
    *(undefined8 *)(param_1 + 0xbc0) = 0;
  }
  if (0xf9 < *(byte *)(*(longlong *)(param_1 + 0x98) + 0xb) + 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,3);
  }
LAB_1804c291e:
  *(undefined8 *)(param_1 + 0xc28) = 0;
  *(undefined4 *)(param_1 + 0xc30) = 0xffffffff;
  return;
}



/* ===== 1804c2b90 FUN_1804c2b90 ===== */

void FUN_1804c2b90(longlong param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0xec) = 0x14;
  *(undefined1 *)(param_1 + 0x74) = param_2;
  *(short *)(param_1 + 0x6a) = (short)param_3;
  if ((param_3 == *(ushort *)(param_1 + 0x68)) &&
     (*(int *)(param_1 + 0x100) + *(int *)(param_1 + 0xfc) == 0)) {
    if ((*(uint *)(param_1 + 0xa8) & 0x400000) != 0) goto LAB_1804c2c7d;
    if (*(short *)(param_1 + 0x6c) != 0) {
      *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6c);
    }
  }
  for (uVar3 = *(int *)(param_1 + 0xac) + -1 + *(int *)(param_1 + 0xb0); uVar3 != 0;
      uVar3 = uVar3 - 1) {
    uVar1 = *(uint *)(param_1 + 0x25c + (ulonglong)uVar3 * 4);
    if (((uVar1 >> 0x18 & 0x1f) - 0xf < 5) && ((uVar1 >> 0x14 & 1) == 0)) {
      if ((*(char *)(*(longlong *)(param_1 + 0x20) + 5 + (ulonglong)(uVar1 & 0xffff) * 8) != 'G') ||
         ((*(byte *)(*(longlong *)(param_1 + 0x20) + 2 + (ulonglong)(uVar1 & 0xffff) * 8) & 0x10) ==
          0)) {
        *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
        *(short *)(param_1 + 0xb8) = (short)uVar1;
        uVar2 = FUN_1804d6ae0(param_1);
        *(undefined4 *)(param_1 + 0x25c + (ulonglong)uVar3 * 4) = uVar2;
      }
    }
  }
LAB_1804c2c7d:
  FUN_1804bc6f0(param_1);
  *(undefined2 *)(param_1 + 0xb4) = 1;
  return;
}



/* ===== 1804c2ca0 FUN_1804c2ca0 ===== */

void FUN_1804c2ca0(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  FUN_1804c2dc0();
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + -8);
  if (((byte)lVar2 & 7) == 3) {
    piVar1 = (int *)(param_1 + 0xfc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0x10);
    }
    uVar4 = lVar2 >> 3;
    iVar3 = (int)uVar4;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) - iVar3;
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + (uVar4 & 0xffffffff) * -4;
    param_2 = param_2 + iVar3;
  }
  if (*(int *)(param_1 + 0xb0) == 2) {
    *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 + 1) * 4) = 0x10000;
  }
  FUN_180540530(*(longlong *)(param_1 + 0xa0) + -8,
                *(longlong *)(param_1 + 0xa0) + (ulonglong)param_2 * 4,
                (ulonglong)(*(int *)(param_1 + 0xac) + 2) << 2);
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
  if (*(int *)(param_1 + 0xf4) < *(int *)(param_1 + 0xf8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,10);
  }
  return;
}



/* ===== 1804c2d70 FUN_1804c2d70 ===== */

ulonglong FUN_1804c2d70(longlong param_1,undefined2 param_2,undefined2 param_3,uint param_4)

{
  ulonglong uVar1;
  
  *(undefined2 *)(param_1 + 0xb8) = param_2;
  *(undefined2 *)(param_1 + 0xba) = param_3;
  *(ushort *)(param_1 + 0xbc) = (ushort)param_4 | 0x4880;
  uVar1 = FUN_1804d6ae0();
  if (param_4 < 3) {
    uVar1 = (ulonglong)(param_4 * 0xffffff + 0x7fff);
  }
  return uVar1;
}



/* ===== 1804c2dc0 FUN_1804c2dc0 ===== */

void FUN_1804c2dc0(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong local_78 [3];
  ulonglong local_60 [3];
  uint local_48;
  uint local_38;
  
  uVar9 = (ulonglong)param_2;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0xa0) + uVar9 * 4);
  puVar8 = (ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + uVar9 * 8);
  if (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar9 * 4) == 0) {
    FUN_1804c5880(param_1,uVar9);
  }
  lVar7 = 1;
  if (0 < param_3) {
    do {
      if (*(int *)((ulonglong)(param_2 + 1) * 4 + lVar7 * 4 + *(longlong *)(param_1 + 0xa0)) == 0) {
        FUN_1804c5880(param_1,param_2 + 1 + (int)lVar7);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 <= param_3);
  }
  uVar6 = *puVar1;
  if ((uVar6 & 0x1f000000) != 0x8000000) {
    local_78[0] = *puVar8;
    local_48 = uVar6;
    iVar5 = FUN_1804c1910(param_1,local_78,9);
    if ((iVar5 == 0) || ((local_38 & 0x1f000000) != 0x8000000)) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0x12);
    }
    param_3 = param_3 + 1;
    for (lVar7 = param_3; 1 < lVar7; lVar7 = lVar7 + -1) {
      puVar1[lVar7 + 1] = puVar1[lVar7];
    }
    puVar8 = local_60;
    puVar1[2] = *puVar1;
    *puVar1 = local_38;
    uVar6 = local_38;
  }
  uVar9 = *puVar8 & 0x7fffffffffff;
  cVar2 = *(char *)(uVar9 + 10);
  uVar3 = (undefined2)uVar6;
  if (cVar2 == '\0') {
    lVar7 = *(longlong *)(uVar9 + 0x20);
    if (0x5f < *(byte *)(lVar7 + -0x2b)) {
      *(undefined4 *)(param_1 + 0xba) = 0x45090002;
      *(undefined2 *)(param_1 + 0xb8) = uVar3;
      uVar3 = FUN_1804d6ae0(param_1);
      uVar4 = FUN_1804a66d0(param_1,0x19,lVar7);
      *(undefined2 *)(param_1 + 0xbc) = 0x889;
      *(undefined2 *)(param_1 + 0xb8) = uVar3;
      *(undefined2 *)(param_1 + 0xba) = uVar4;
      FUN_1804d6ae0(param_1);
      FUN_1804a62e0(param_1,lVar7 + -0x68,7);
      goto LAB_1804c2fec;
    }
  }
  else if ((cVar2 == '%') || (cVar2 == 'W')) {
    *(undefined4 *)(param_1 + 0xba) = 0x45100003;
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    uVar3 = FUN_1804d6ae0(param_1);
    uVar4 = FUN_1804a6370(param_1,*(undefined1 *)(uVar9 + 10));
    *(undefined2 *)(param_1 + 0xbc) = 0x893;
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    *(undefined2 *)(param_1 + 0xba) = uVar4;
    FUN_1804d6ae0(param_1);
    goto LAB_1804c2fec;
  }
  uVar6 = FUN_1804a62e0(param_1,uVar9,8);
  *(undefined2 *)(param_1 + 0xbc) = 0x888;
  *(short *)(param_1 + 0xba) = (short)uVar6;
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  FUN_1804d6ae0(param_1);
LAB_1804c2fec:
  *puVar1 = uVar6;
  puVar1[1] = 0x10000;
  *(int *)(param_1 + 0xac) = (int)param_3;
  return;
}



/* ===== 1804c3030 FUN_1804c3030 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1804c3030(longlong param_1,undefined4 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  int local_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x80);
  lVar4 = *(longlong *)(lVar3 + 0x28);
  lVar5 = *(longlong *)(lVar3 + 0x20);
  uVar9 = (ulonglong)(param_3 - 1);
  lVar6 = *(longlong *)(lVar3 + 0x20);
  puVar1 = (undefined8 *)(lVar6 + uVar9 * 8);
  local_68 = *puVar1;
  uStack_60 = puVar1[1];
  puVar2 = (undefined4 *)(lVar6 + 0x10 + uVar9 * 8);
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  puVar2 = (undefined4 *)(lVar6 + 0x20 + uVar9 * 8);
  local_48 = *puVar2;
  uStack_44 = puVar2[1];
  uStack_40 = puVar2[2];
  uStack_3c = puVar2[3];
  local_38 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  iVar8 = FUN_180003349(lVar3,0,&local_68,FUN_1804c46a0);
  if (iVar8 == 0) {
    lVar3 = *(longlong *)(lVar3 + 0x20);
    uVar9 = (ulonglong)(local_2c - 1);
    puVar1 = (undefined8 *)(lVar3 + uVar9 * 8);
    *puVar1 = local_68;
    puVar1[1] = uStack_60;
    puVar1 = (undefined8 *)(lVar3 + 0x10 + uVar9 * 8);
    *puVar1 = CONCAT44(uStack_54,local_58);
    puVar1[1] = CONCAT44(uStack_4c,uStack_50);
    puVar1 = (undefined8 *)(lVar3 + 0x20 + uVar9 * 8);
    *puVar1 = CONCAT44(uStack_44,local_48);
    puVar1[1] = CONCAT44(uStack_3c,uStack_40);
  }
  else {
    uVar10 = lVar4 - lVar5 & 0xfffffffffffffff8;
    uVar9 = (ulonglong)(local_2c - 1);
    uVar7 = *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + -8);
    lVar4 = *(longlong *)(lVar3 + 0x20);
    puVar1 = (undefined8 *)(lVar4 + uVar9 * 8);
    *puVar1 = local_68;
    puVar1[1] = uStack_60;
    puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar9 * 8);
    *puVar1 = CONCAT44(uStack_54,local_58);
    puVar1[1] = CONCAT44(uStack_4c,uStack_50);
    puVar1 = (undefined8 *)(lVar4 + 0x20 + uVar9 * 8);
    *puVar1 = CONCAT44(uStack_44,local_48);
    puVar1[1] = CONCAT44(uStack_3c,uStack_40);
    *(ulonglong *)(lVar3 + 0x28) = *(longlong *)(lVar3 + 0x20) + 8 + uVar10;
    local_28 = -iVar8;
    *(undefined8 *)(*(longlong *)(lVar3 + 0x20) + uVar10) = uVar7;
  }
  return local_28;
}



/* ===== 1804c3140 FUN_1804c3140 ===== */

void FUN_1804c3140(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (ulonglong)(*(uint *)(param_2 + 4) >> 0x10) - 0x8000;
  }
  uVar2 = (ulonglong)
          ((uint)*(byte *)(*(longlong *)(param_1 + 0x30) + -2 +
                          (ulonglong)*(ushort *)(param_1 + 10) * 0xc) +
          *(int *)(*(longlong *)(param_1 + 0x30) + -0xc + (ulonglong)*(ushort *)(param_1 + 10) * 0xc
                  ));
  uVar1 = *(uint *)(param_2 + 4) >> 8 & 0xff;
  *(ulonglong *)(*(longlong *)(param_1 + 0x38) + uVar2 * 4) =
       (param_2 + 8 + lVar3 * 4) * 0x100 |
       (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x38) + uVar2 * 4);
  *(undefined1 *)(param_1 + 0xb5) = 1;
  if (uVar1 < *(uint *)(param_1 + 0xac)) {
    *(uint *)(param_1 + 0xac) = uVar1;
  }
  FUN_1804bd710(param_1);
  return;
}



/* ===== 1804c31c0 FUN_1804c31c0 ===== */

void FUN_1804c31c0(longlong param_1)

{
  if ((*(short *)(param_1 + 10) == 1) &&
     ((uint)*(ushort *)(*(longlong *)(param_1 + 0x30) + 4) == *(uint *)(param_1 + 0xc))) {
    *(undefined4 *)(param_1 + 0xba) = 0xc000000;
    *(undefined2 *)(param_1 + 0xb8) = 0;
    FUN_1804a5f70();
  }
  FUN_1804bc6f0(param_1);
  return;
}



/* ===== 1804c3210 FUN_1804c3210 ===== */

char FUN_1804c3210(longlong param_1,uint *param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  longlong lVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  char cVar13;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  uint local_res8;
  undefined1 local_58 [12];
  ushort local_4c;
  byte local_48;
  
  bVar3 = *(byte *)((longlong)param_2 + 1);
  uVar12 = (ulonglong)bVar3;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20);
  pdVar1 = (double *)(lVar6 + uVar12 * 8);
  if (((((uint)((longlong)*(undefined8 *)(lVar6 + uVar12 * 8) >> 0x2f) < 0xfffffff2) &&
       (NAN(*pdVar1))) || (((uint)((longlong)pdVar1[1] >> 0x2f) < 0xfffffff2 && (NAN(pdVar1[1])))))
     || ((((uint)((longlong)pdVar1[2] >> 0x2f) < 0xfffffff2 && (NAN(pdVar1[2]))) ||
         (pdVar1[2] == -0.0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0x18);
  }
  lVar6 = *(longlong *)(param_1 + 0xa0);
  if (param_3 == 0) {
    FUN_180494b90(*(longlong *)(param_1 + 0x80),pdVar1);
    if ((*(uint *)(lVar6 + uVar12 * 4) & 0x1f000000) == 0x13000000) {
      uVar8 = FUN_1804e3cc0(param_1,pdVar1);
    }
    else {
      uVar8 = 0xe;
    }
    if (*(int *)(lVar6 + uVar12 * 4) == 0) {
      FUN_1804c5880(param_1,uVar12);
    }
    uVar9 = *(uint *)(lVar6 + uVar12 * 4);
    if ((uVar9 & 0x1f000000) == 0x4000000) {
      *(undefined4 *)(param_1 + 0xba) = 0x5e8e0000;
      *(short *)(param_1 + 0xb8) = (short)uVar9;
      uVar9 = FUN_1804d6ae0(param_1);
      *(uint *)(lVar6 + uVar12 * 4) = uVar9;
    }
    if (uVar8 == 0x13) {
      if (4 < (uVar9 >> 0x18 & 0x1f) - 0xf) {
        *(undefined4 *)(param_1 + 0xba) = 0x5b93326e;
LAB_1804c340f:
        *(short *)(param_1 + 0xb8) = (short)uVar9;
        uVar9 = FUN_1804d6ae0(param_1);
      }
    }
    else if ((uVar9 & 0x1f000000) != 0xe000000) {
      *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
      goto LAB_1804c340f;
    }
    *(uint *)(lVar6 + uVar12 * 4) = uVar9;
    if (*(int *)(lVar6 + 4 + uVar12 * 4) == 0) {
      FUN_1804c5880(param_1,bVar3 + 1);
    }
    uVar9 = *(uint *)(lVar6 + 4 + uVar12 * 4);
    if ((uVar9 & 0x1f000000) == 0x4000000) {
      *(undefined4 *)(param_1 + 0xba) = 0x5e8e0000;
      *(short *)(param_1 + 0xb8) = (short)uVar9;
      uVar9 = FUN_1804d6ae0(param_1);
      *(uint *)(lVar6 + 4 + uVar12 * 4) = uVar9;
    }
    if (uVar8 == 0x13) {
      if (4 < (uVar9 >> 0x18 & 0x1f) - 0xf) {
        *(undefined4 *)(param_1 + 0xba) = 0x5b93326e;
LAB_1804c34a2:
        *(short *)(param_1 + 0xb8) = (short)uVar9;
        uVar9 = FUN_1804d6ae0(param_1);
      }
    }
    else if ((uVar9 & 0x1f000000) != 0xe000000) {
      *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
      goto LAB_1804c34a2;
    }
    *(uint *)(lVar6 + 4 + uVar12 * 4) = uVar9;
    if (*(int *)(lVar6 + 8 + uVar12 * 4) == 0) {
      FUN_1804c5880(param_1,bVar3 + 2);
    }
    uVar9 = *(uint *)(lVar6 + 8 + uVar12 * 4);
    if ((uVar9 & 0x1f000000) == 0x4000000) {
      *(undefined4 *)(param_1 + 0xba) = 0x5e8e0000;
      *(short *)(param_1 + 0xb8) = (short)uVar9;
      uVar9 = FUN_1804d6ae0(param_1);
      *(uint *)(lVar6 + 8 + uVar12 * 4) = uVar9;
    }
    if (uVar8 == 0x13) {
      if (4 < (uVar9 >> 0x18 & 0x1f) - 0xf) {
        *(undefined4 *)(param_1 + 0xba) = 0x5b93326e;
LAB_1804c3536:
        *(short *)(param_1 + 0xb8) = (short)uVar9;
        uVar9 = FUN_1804d6ae0(param_1);
      }
    }
    else if ((uVar9 & 0x1f000000) != 0xe000000) {
      *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
      goto LAB_1804c3536;
    }
    *(uint *)(lVar6 + 8 + uVar12 * 4) = uVar9;
    local_res8 = *(uint *)(lVar6 + 4 + uVar12 * 4);
    *(undefined4 *)(lVar6 + 0xc + uVar12 * 4) = *(undefined4 *)(lVar6 + uVar12 * 4);
    FUN_1804c36d0(param_1,uVar8,~*(uint *)((longlong)pdVar1 + 0x14) >> 0x1f,local_res8,uVar9,1);
    dVar17 = *pdVar1;
    dVar16 = pdVar1[2];
  }
  else {
    if ((*(uint **)(param_1 + 0xba8) == param_2) &&
       (sVar5 = *(short *)(lVar6 + uVar12 * 4), sVar5 == *(short *)(param_1 + 0xbb0))) {
      bVar4 = *(byte *)(param_1 + 3000);
      uVar11 = *(ushort *)(param_1 + 0xbb4);
      *(short *)(param_1 + 0xb8) = sVar5;
      *(ushort *)(param_1 + 0xbc) = bVar4 | 0x2900;
      *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xbb6);
      uVar7 = FUN_1804d6ae0(param_1);
      *(undefined4 *)(lVar6 + uVar12 * 4) = uVar7;
      *(undefined4 *)(lVar6 + 0xc + uVar12 * 4) = uVar7;
      local_48 = bVar4;
      local_4c = uVar11;
    }
    else {
      FUN_1804c3880(param_1,param_2,local_58,0);
    }
    local_res8 = (uint)local_4c;
    uVar8 = (uint)local_48;
    dVar16 = pdVar1[2];
    dVar17 = dVar16 + *pdVar1;
  }
  lVar14 = 4;
  dVar2 = pdVar1[1];
  if (*(int *)((longlong)pdVar1 + 0x14) < 0) {
    if (dVar17 < dVar2) {
      uVar11 = 0x80;
      goto LAB_1804c3604;
    }
    uVar11 = 0x180;
    dVar17 = dVar16 + dVar16 + dVar17;
    bVar15 = dVar2 < dVar17;
  }
  else {
    if (dVar2 < dVar17) {
      uVar11 = 0x380;
LAB_1804c3604:
      cVar13 = '\0';
      *(uint *)(param_1 + 0xac) = bVar3 + 4;
      lVar10 = 4;
      goto LAB_1804c3618;
    }
    uVar11 = 0x280;
    dVar17 = dVar16 + dVar16 + dVar17;
    bVar15 = dVar17 < dVar2;
  }
  *(uint *)(param_1 + 0xac) = (uint)bVar3;
  cVar13 = (bVar15 || dVar17 == dVar2) + '\x01';
  lVar10 = (ulonglong)(*param_2 >> 0x10) * 4 + -0x1fffc;
LAB_1804c3618:
  *(longlong *)(param_1 + 0x88) = lVar10 + (longlong)param_2;
  FUN_1804bc6f0(param_1);
  *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(lVar6 + uVar12 * 4);
  *(short *)(param_1 + 0xba) = (short)local_res8;
  *(ushort *)(param_1 + 0xbc) = uVar11 | (ushort)uVar8;
  FUN_1804d6ae0(param_1);
  if (cVar13 == '\0') {
    *(uint *)(param_1 + 0xac) = (uint)bVar3;
    lVar14 = (ulonglong)(*param_2 >> 0x10) * 4 + -0x1fffc;
  }
  else {
    *(uint *)(param_1 + 0xac) = bVar3 + 4;
  }
  *(longlong *)(param_1 + 0x88) = (longlong)param_2 + lVar14;
  *(undefined1 *)(param_1 + 0xb5) = 1;
  return cVar13;
}



/* ===== 1804c36d0 FUN_1804c36d0 ===== */

void FUN_1804c36d0(longlong param_1,int param_2,int param_3,ushort param_4,ushort param_5,
                  int param_6)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  
  if (param_5 < 0x8000) {
    if (param_6 == 0) {
      return;
    }
    if (param_2 != 0x13) {
      return;
    }
    if (param_4 < 0x8000) {
      return;
    }
    iVar4 = -0x80000000;
    if (param_3 != 0) {
      iVar4 = 0x7fffffff;
    }
    uVar1 = FUN_1804a6370(param_1,iVar4 - *(int *)(*(longlong *)(param_1 + 0x20) +
                                                  (ulonglong)param_5 * 8));
    *(ushort *)(param_1 + 0xb8) = param_4;
    uVar3 = 0x193;
    if (param_3 != 0) {
      uVar3 = 0x293;
    }
    *(undefined2 *)(param_1 + 0xbc) = uVar3;
  }
  else {
    if (param_2 == 0x13) {
      uVar1 = FUN_1804a6370(param_1,0);
    }
    else {
      uVar1 = FUN_1804a6540(param_1,0);
    }
    *(ushort *)(param_1 + 0xb8) = param_5;
    uVar2 = 0x80;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    if (param_3 != 0) {
      uVar2 = 0x180;
    }
    *(ushort *)(param_1 + 0xbc) = uVar2 | (ushort)param_2;
    FUN_1804d6ae0(param_1);
    if (param_6 == 0) {
      return;
    }
    if (param_2 != 0x13) {
      return;
    }
    if (0x7fff < param_4) {
      *(undefined2 *)(param_1 + 0xbc) = 0x3593;
      *(ushort *)(param_1 + 0xb8) = param_5;
      *(ushort *)(param_1 + 0xba) = param_4;
      uVar1 = FUN_1804d6ae0(param_1);
      *(undefined2 *)(param_1 + 0xb8) = uVar1;
      *(undefined4 *)(param_1 + 0xba) = 0x12130000;
      goto LAB_1804c385c;
    }
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)param_4 * 8);
    if (param_3 == 0) {
      if (-1 < iVar4) {
        return;
      }
      uVar1 = FUN_1804a6370(param_1,-0x80000000 - iVar4);
      *(undefined2 *)(param_1 + 0xbc) = 0x193;
      *(ushort *)(param_1 + 0xb8) = param_5;
    }
    else {
      if (iVar4 < 1) {
        return;
      }
      uVar1 = FUN_1804a6370(param_1,0x7fffffff - iVar4);
      *(undefined2 *)(param_1 + 0xbc) = 0x293;
      *(ushort *)(param_1 + 0xb8) = param_5;
    }
  }
  *(undefined2 *)(param_1 + 0xba) = uVar1;
LAB_1804c385c:
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804c3880 FUN_1804c3880 ===== */

void FUN_1804c3880(longlong param_1,longlong param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  bVar2 = *(byte *)(param_2 + 1);
  uVar9 = (ulonglong)bVar2;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + uVar9 * 8;
  uVar6 = *(uint *)(*(longlong *)(param_1 + 0xa0) + uVar9 * 4);
  if (uVar6 == 0) {
    if (param_4 == 0) {
      uVar7 = 0xe;
    }
    else {
      uVar7 = FUN_1804e3cc0(param_1,lVar1);
    }
  }
  else {
    uVar7 = uVar6 >> 0x18 & 0x1f;
  }
  uVar4 = FUN_1804bf2c0(param_1,param_2,bVar2 + 1,uVar7,0x30);
  uVar5 = FUN_1804bf2c0(param_1,param_2,bVar2 + 2,uVar7,0x30);
  uVar8 = ~*(uint *)(lVar1 + 0x14);
  *(char *)(param_3 + 2) = (char)uVar7;
  *(byte *)((longlong)param_3 + 0x11) = (byte)(uVar8 >> 0x1f);
  *(short *)((longlong)param_3 + 0xc) = (short)uVar4;
  *(short *)((longlong)param_3 + 0xe) = (short)uVar5;
  FUN_1804c36d0(param_1,uVar7,uVar8 >> 0x1f,uVar4,uVar5,param_4);
  uVar3 = FUN_1804bf160(param_1,param_2,uVar9,0x13);
  *(undefined2 *)((longlong)param_3 + 10) = uVar3;
  if (uVar6 == 0) {
    uVar6 = FUN_1804bf380(param_1,bVar2,uVar7,(uint)*(ushort *)(param_1 + 0xbb2) << 0x10 | 0x20);
  }
  if (param_4 == 0) {
    *(ushort *)(param_1 + 0xbc) = (ushort)uVar7 | 0x2900;
    *(short *)(param_1 + 0xb8) = (short)uVar6;
    *(short *)(param_1 + 0xba) = (short)uVar5;
    uVar6 = FUN_1804d6ae0(param_1);
    *(uint *)(*(longlong *)(param_1 + 0xa0) + uVar9 * 4) = uVar6;
  }
  *(uint *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(bVar2 + 3) * 4) = uVar6;
  *param_3 = param_2;
  *(short *)(param_3 + 1) = (short)uVar6;
  *(uint *)(param_1 + 0xac) = bVar2 + 4;
  return;
}



/* ===== 1804c3a30 FUN_1804c3a30 ===== */

void FUN_1804c3a30(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x98);
  if ((*(byte *)(lVar3 + 0x3d) & 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0xc);
  }
  if (0xf9 < (uint)*(byte *)(lVar3 + 0xb) + *(int *)(param_1 + 0xb0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,3);
  }
  bVar2 = *(byte *)(lVar3 + 10);
  uVar7 = *(uint *)(param_1 + 0xac);
  uVar8 = (ulonglong)uVar7;
  uVar9 = (uint)bVar2;
  if (uVar7 < bVar2) {
    uVar4 = bVar2 - uVar7;
    if (3 < uVar4) {
      plVar1 = (longlong *)(param_1 + 0xa0);
      plVar5 = (longlong *)(*plVar1 + uVar8 * 4);
      if ((plVar1 < plVar5) || ((longlong *)(*plVar1 + (ulonglong)(bVar2 - 1) * 4) < plVar1)) {
        uVar4 = uVar9 - (uVar4 & 3);
        do {
          uVar6 = (int)uVar8 + 4;
          uVar8 = (ulonglong)uVar6;
        } while (uVar6 < uVar4);
        for (lVar3 = SUB168((ZEXT416((uVar4 - uVar7) + 3 >> 2) << 4) / ZEXT816(4),0); lVar3 != 0;
            lVar3 = lVar3 + -1) {
          *(undefined4 *)plVar5 = 0x7fff;
          plVar5 = (longlong *)((longlong)plVar5 + 4);
        }
        if (uVar9 <= uVar6) goto LAB_1804c3b07;
      }
    }
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 4) = 0x7fff;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < uVar9);
  }
LAB_1804c3b07:
  *(uint *)(param_1 + 0xac) = uVar9;
  return;
}



/* ===== 1804c3b40 FUN_1804c3b40 ===== */

void FUN_1804c3b40(longlong param_1,ushort param_2,ushort param_3,ulonglong param_4)

{
  ushort *puVar1;
  longlong lVar2;
  ushort uVar3;
  undefined2 uVar4;
  longlong lVar5;
  ushort uVar6;
  int iVar7;
  
  if ((*(uint *)(param_1 + 0xa8) & 0xc00000) == 0xc00000) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    iVar7 = 0;
    lVar5 = (ulonglong)param_3 * 8;
    if (*(char *)(lVar5 + 5 + lVar2) == ')') {
      uVar6 = *(ushort *)(lVar5 + 2 + lVar2);
      if (0x7fff < uVar6) goto LAB_1804c3bb7;
      puVar1 = (ushort *)(lVar5 + lVar2);
      iVar7 = *(int *)(lVar2 + (ulonglong)uVar6 * 8);
      lVar5 = (ulonglong)*puVar1 * 8;
      uVar3 = *puVar1;
    }
    else {
LAB_1804c3bb7:
      uVar6 = 0;
      uVar3 = param_3;
    }
    if ((uVar3 == *(ushort *)(param_1 + 0xbb0)) &&
       ((ulonglong)
        ((longlong)
         (int)*(double *)
               (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + 8 +
               ((ulonglong)*(ushort *)(lVar5 + lVar2) - (ulonglong)*(uint *)(param_1 + 0xb0)) * 8) +
        (longlong)iVar7) < (param_4 & 0xffffffff))) {
      uVar4 = *(undefined2 *)(param_1 + 0xbb4);
      if (iVar7 != 0) {
        *(undefined2 *)(param_1 + 0xbc) = 0x2913;
        *(undefined2 *)(param_1 + 0xb8) = uVar4;
        *(ushort *)(param_1 + 0xba) = uVar6;
        uVar4 = FUN_1804d6ae0(param_1);
      }
      *(ushort *)(param_1 + 0xb8) = param_2;
      *(undefined2 *)(param_1 + 0xba) = uVar4;
      uVar4 = 0xa85;
      if (param_2 < 0x8000) {
        uVar4 = 0xa94;
      }
      *(undefined2 *)(param_1 + 0xbc) = uVar4;
      FUN_1804d6ae0(param_1);
      if (((*(char *)(param_1 + 0xbb9) != '\0') && (*(ushort *)(param_1 + 0xbb2) != 0)) &&
         (-1 < (longlong)
               *(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(ushort *)(param_1 + 0xbb2) * 8)
               + (longlong)iVar7)) {
        return;
      }
      *(undefined2 *)(param_1 + 0xbc) = uVar4;
      *(ushort *)(param_1 + 0xba) = param_3;
      goto LAB_1804c3c97;
    }
  }
  *(undefined2 *)(param_1 + 0xbc) = 0xa93;
  *(ushort *)(param_1 + 0xba) = param_3;
LAB_1804c3c97:
  *(ushort *)(param_1 + 0xb8) = param_2;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804c3cc0 FUN_1804c3cc0 ===== */

void FUN_1804c3cc0(longlong param_1,ulonglong *param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = *param_2 & 0x7fffffffffff;
  uVar6 = FUN_1804926a0(*(undefined8 *)(param_1 + 0x80),uVar9,param_2 + 1);
  param_2[5] = uVar6;
  *param_3 = 0;
  *param_4 = 0;
  uVar5 = *(uint *)((longlong)param_2 + 0x34);
  if ((uVar5 >> 0x18 & 0x1f) - 0xe < 6) {
    lVar7 = FUN_1800052ed(param_2[1]);
    if ((lVar7 < 0) || (uVar8 = (uint)lVar7, 0x8000000 < uVar8)) {
      if (0x7fff < (ushort)uVar5) {
        if (*(int *)(uVar9 + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804954a0(param_1,0x14);
        }
        *(short *)(param_1 + 0xb8) = (short)param_2[6];
        *(undefined4 *)(param_1 + 0xba) = 0x45130008;
        uVar1 = FUN_1804d6ae0();
        uVar2 = FUN_1804a6370(param_1,0);
        *(undefined2 *)(param_1 + 0xbc) = 0x893;
        *(undefined2 *)(param_1 + 0xb8) = uVar1;
        *(undefined2 *)(param_1 + 0xba) = uVar2;
        FUN_1804d6ae0(param_1);
      }
      goto LAB_1804c3e00;
    }
    uVar3 = FUN_1804e3d80(param_1,uVar5);
    *(short *)(param_1 + 0xb8) = (short)param_2[6];
    *(undefined4 *)(param_1 + 0xba) = 0x45130008;
    uVar4 = FUN_1804d6ae0(param_1);
    if (*(uint *)(uVar9 + 0x30) <= uVar8) {
      *(undefined2 *)(param_1 + 0xbc) = 0x693;
      *(short *)(param_1 + 0xb8) = (short)uVar4;
      *(short *)(param_1 + 0xba) = (short)uVar3;
      FUN_1804d6ae0(param_1);
      if ((uVar8 == 0) && ((ushort)uVar5 < 0x8000)) {
        uVar5 = FUN_1804a6540(param_1,0);
      }
      goto LAB_1804c3e00;
    }
    FUN_1804c3b40(param_1,uVar4,uVar3);
    *(short *)(param_1 + 0xb8) = (short)param_2[6];
    *(undefined4 *)(param_1 + 0xba) = 0x45090006;
    uVar1 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x3809;
    *(short *)(param_1 + 0xba) = (short)uVar3;
  }
  else {
LAB_1804c3e00:
    if (*(int *)(uVar9 + 0x34) == 0) {
      *(short *)(param_1 + 0xb8) = (short)param_2[6];
      *(undefined4 *)(param_1 + 0xba) = 0x45130009;
      uVar1 = FUN_1804d6ae0(param_1);
      uVar2 = FUN_1804a6370(param_1,0);
      *(undefined2 *)(param_1 + 0xbc) = 0x893;
      *(undefined2 *)(param_1 + 0xb8) = uVar1;
      *(undefined2 *)(param_1 + 0xba) = uVar2;
      FUN_1804d6ae0(param_1);
      FUN_1804a66d0(param_1,0x1a,param_1 + -0x1f0);
      return;
    }
    if ((uVar5 >> 0x18 & 0x1f) - 0xf < 5) {
      *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
      *(short *)(param_1 + 0xb8) = (short)uVar5;
      uVar5 = FUN_1804d6ae0(param_1);
    }
    if ((((ushort)uVar5 < 0x8000) &&
        (uVar6 = param_2[5] - *(longlong *)(uVar9 + 0x28),
        uVar6 <= (ulonglong)*(uint *)(uVar9 + 0x34) * 0x18)) && (uVar6 < 0x17ffe9)) {
      *param_3 = *(undefined4 *)(param_1 + 0xc);
      *param_4 = *(undefined1 *)(param_1 + 0xb6);
      *(short *)(param_1 + 0xb8) = (short)param_2[6];
      *(undefined4 *)(param_1 + 0xba) = 0x45130009;
      uVar1 = FUN_1804d6ae0(param_1);
      uVar2 = FUN_1804a6370(param_1,*(undefined4 *)(uVar9 + 0x34));
      *(undefined2 *)(param_1 + 0xbc) = 0x893;
      *(undefined2 *)(param_1 + 0xb8) = uVar1;
      *(undefined2 *)(param_1 + 0xba) = uVar2;
      FUN_1804d6ae0(param_1);
      *(short *)(param_1 + 0xb8) = (short)param_2[6];
      *(undefined4 *)(param_1 + 0xba) = 0x45090007;
      uVar1 = FUN_1804d6ae0(param_1);
      uVar2 = FUN_1804a6780(param_1,uVar5,uVar6 / 0x18 & 0xffffffff);
      *(undefined2 *)(param_1 + 0xba) = uVar2;
      *(undefined2 *)(param_1 + 0xbc) = 0x3989;
      *(undefined2 *)(param_1 + 0xb8) = uVar1;
      goto LAB_1804c3ff7;
    }
    uVar1 = (undefined2)param_2[6];
    *(undefined2 *)(param_1 + 0xbc) = 0x3a09;
    *(ushort *)(param_1 + 0xba) = (ushort)uVar5;
  }
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
LAB_1804c3ff7:
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804c4020 FUN_1804c4020 ===== */

undefined8 FUN_1804c4020(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = param_2 >> 8 & 0xff;
  uVar3 = (ulonglong)uVar2;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa0) + uVar3 * 4);
  if (uVar1 == 0) {
    uVar1 = FUN_1804c5880(param_1,uVar3);
  }
  if ((uVar1 & 0x1f000000) == 0) {
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 4;
    *(uint *)(param_1 + 0xac) = uVar2 - 3;
    return 0;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar2 - 1) * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + uVar3 * 4);
  *(uint *)(param_1 + 0xac) = ((*(uint *)(*(longlong *)(param_1 + 0x88) + -4) >> 0x18) - 1) + uVar2;
  *(ulonglong *)(param_1 + 0x88) =
       *(longlong *)(param_1 + 0x88) + ((ulonglong)(param_2 >> 0x10) - 0x7fff) * 4;
  return 2;
}



/* ===== 1804c40d0 FUN_1804c40d0 ===== */

undefined8 FUN_1804c40d0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_58;
  undefined8 local_50;
  int local_28;
  uint local_24;
  undefined4 local_20;
  uint local_18;
  uint local_14;
  
  if (((((*(longlong *)(param_1 + 0x88) == *(longlong *)(param_1 + 0xbc0)) &&
        (*(int *)(param_1 + 0x100) + *(int *)(param_1 + 0xfc) == 0)) &&
       (*(int *)(param_1 + 0xbc8) == 0)) && (*(int *)(param_1 + 0xbcc) == 0)) &&
     ((0x8002 < *(uint *)(param_1 + 0xc) ||
      ((*(uint *)(param_1 + 0xc) == 0x8002 &&
       (*(char *)(*(longlong *)(param_1 + 0x20) + 0x4000d) != '\x15')))))) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    FUN_1804c2b90(param_1,2,*(undefined2 *)(param_1 + 0x68));
    return 2;
  }
  *(uint *)(param_1 + 0xac) = param_2;
  FUN_1804bc6f0();
  local_28 = *(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 - 2) * 4);
  if (local_28 == 0) {
    local_28 = FUN_1804c5880(param_1,param_2 - 2);
  }
  uVar4 = (ulonglong)(param_2 - 1);
  local_24 = *(uint *)(*(longlong *)(param_1 + 0xa0) + uVar4 * 4);
  if (local_24 == 0) {
    *(undefined4 *)(param_1 + 0xba) = 0x47930044;
    *(short *)(param_1 + 0xb8) = (short)param_2 + -1 + *(short *)(param_1 + 0xb0);
    local_24 = FUN_1804a5f70(param_1);
    *(uint *)(*(longlong *)(param_1 + 0xa0) + -4 + (longlong)(int)param_2 * 4) = local_24;
  }
  local_18 = 1;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20);
  local_58 = *(undefined8 *)(lVar1 + (ulonglong)(param_2 - 2) * 8);
  local_50 = *(undefined8 *)(lVar1 + uVar4 * 8);
  local_14 = (uint)(param_3 < 3);
  iVar2 = FUN_1804c1c30(param_1,&local_58);
  *(uint *)(param_1 + 0xac) = iVar2 + param_2;
  *(undefined1 *)(param_1 + 0xb5) = 1;
  if ((local_24 & 0x1f000000) == 0) {
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 8;
    *(uint *)(param_1 + 0xac) = param_2 - 3;
    uVar3 = 0;
  }
  else {
    *(uint *)(*(longlong *)(param_1 + 0xa0) + uVar4 * 4) = local_18 | 0x100000;
    *(uint *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)param_2 * 4) = local_24;
    *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 + 1) * 4) = local_20;
    *(ulonglong *)(param_1 + 0x88) =
         *(longlong *)(param_1 + 0x88) +
         ((ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x88) + 4) >> 0x10) - 0x7ffe) * 4;
    uVar3 = 2;
  }
  return uVar3;
}



/* ===== 1804c42d0 FUN_1804c42d0 ===== */

void FUN_1804c42d0(longlong param_1,uint *param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  
  if ((*(int *)(param_1 + 0xbc8) == 0) && (*(int *)(param_1 + 0xbcc) == 0)) {
    if ((param_2 == *(uint **)(param_1 + 0xbc0)) &&
       (*(int *)(param_1 + 0x100) + *(int *)(param_1 + 0xfc) == 0)) {
      if (*(char *)(param_1 + 0x50) != 'F') {
        if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804954a0(param_1,8);
        }
        FUN_1804c2b90(param_1,2,*(undefined2 *)(param_1 + 0x68));
        return;
      }
    }
    else if (param_3 != 0) {
      if (*param_2 >> 0x10 != 0x7fff) {
        lVar2 = 0;
        do {
          if (*(uint **)(param_1 + 0x720 + lVar2 * 0x10) == param_2) {
            if (((ushort)(*(short *)(param_1 + 0x72a + lVar2 * 0x10) - 8U) < 2) &&
               (0x8f < *(ushort *)(param_1 + 0x728 + lVar2 * 0x10))) goto LAB_1804c438f;
            break;
          }
          lVar2 = lVar2 + 1;
        } while (lVar2 < 0x40);
                    /* WARNING: Subroutine does not return */
        FUN_1804954a0(param_1,9);
      }
LAB_1804c438f:
      if (((param_3 == 1) || (*(int *)(param_1 + 0x158) == 0)) ||
         ((uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x158)) < 0x19)) {
        piVar1 = (int *)(param_1 + 0xf4);
        *piVar1 = *piVar1 + -1;
        if (-1 < *piVar1) {
          *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0xc);
          return;
        }
      }
LAB_1804c43df:
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,10);
    }
  }
  else if (param_3 != 0) {
    piVar1 = (int *)(param_1 + 0xf4);
    *piVar1 = *piVar1 + -1;
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0xc);
    if (*piVar1 < 0) goto LAB_1804c43df;
  }
  return;
}



/* ===== 1804c4400 FUN_1804c4400 ===== */

void FUN_1804c4400(longlong param_1,undefined4 param_2,int param_3)

{
  if ((*(int *)(param_1 + 0xbc8) == 0) && (*(int *)(param_1 + 0xbcc) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,9);
  }
  if (param_3 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if ((*(longlong *)(param_1 + 0x88) == *(longlong *)(param_1 + 0xbc0)) &&
     (*(int *)(param_1 + 0x100) + *(int *)(param_1 + 0xfc) == 0)) {
    FUN_1804c2b90(param_1,2,*(undefined2 *)(param_1 + 0x68));
    return;
  }
  FUN_1804c2b90(param_1,1,param_2);
  return;
}



/* ===== 1804c4480 FUN_1804c4480 ===== */

undefined8 FUN_1804c4480(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  ulonglong uVar6;
  
  puVar5 = &LAB_1800034b2;
  if (param_3 == 8) {
    puVar5 = &DAT_1800033fb;
  }
  uVar3 = FUN_1804c4a40(param_1,puVar5);
  lVar1 = *(longlong *)(param_1 + 0xa0);
  uVar6 = (ulonglong)uVar3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20);
  *(undefined4 *)(lVar1 + 8 + uVar6 * 4) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(lVar1 + 0xc + uVar6 * 4) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined8 *)(lVar2 + 0x10 + uVar6 * 8) = *param_2;
  *(undefined8 *)(lVar2 + 0x18 + uVar6 * 8) = param_2[1];
  iVar4 = FUN_1804c1910(param_1,param_2,param_3);
  if (iVar4 != 0) {
LAB_1804c4523:
    *(undefined4 *)(lVar1 + uVar6 * 4) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(lVar1 + 4 + uVar6 * 4) = 0;
    *(undefined8 *)(lVar2 + uVar6 * 8) = param_2[3];
    FUN_1804c2dc0(param_1,uVar6,2);
    *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar3 + 2) * 4;
    iVar4 = *(int *)(param_1 + 0xb0) + uVar3;
    *(int *)(param_1 + 0xb0) = iVar4 + 2;
    if (0xf9 < (uint)(iVar4 + *(int *)(param_1 + 0xac) + 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,3);
    }
    return 0;
  }
  if (param_3 != 0x10) {
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)((longlong)param_2 + 0x34);
    *param_2 = param_2[1];
    iVar4 = FUN_1804c1910(param_1,param_2,param_3);
    if (iVar4 != 0) goto LAB_1804c4523;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804954a0(param_1,0x12);
}



/* ===== 1804c45c0 FUN_1804c45c0 ===== */

void FUN_1804c45c0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  ulonglong uVar6;
  
  puVar5 = &DAT_18000366e;
  if ((param_3 & 1) != 0) {
    puVar5 = &DAT_180003681;
  }
  uVar3 = FUN_1804c4a40(param_1,puVar5);
  lVar1 = *(longlong *)(param_1 + 0xa0);
  uVar6 = (ulonglong)uVar3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20);
  *(undefined4 *)(lVar1 + uVar6 * 4) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(lVar1 + 8 + uVar6 * 4) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(lVar1 + 0xc + uVar6 * 4) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(lVar2 + uVar6 * 8) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar2 + 0x10 + uVar6 * 8) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(lVar2 + 0x18 + uVar6 * 8) = *(undefined8 *)(param_2 + 8);
  FUN_1804c2dc0(param_1,uVar6,2);
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar3 + 2) * 4;
  iVar4 = *(int *)(param_1 + 0xb0) + uVar3;
  *(int *)(param_1 + 0xb0) = iVar4 + 2;
  if (0xf9 < (uint)(iVar4 + *(int *)(param_1 + 0xac) + 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,3);
  }
  return;
}



/* ===== 1804c46a0 FUN_1804c46a0 ===== */

undefined8 FUN_1804c46a0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint *puVar22;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_70;
  uint local_58;
  uint local_54;
  undefined4 local_48;
  
  uVar16 = *(uint *)((longlong)param_3 + 0x3c);
  uVar19 = *(uint *)(param_3 + 7);
  uVar18 = (ulonglong)uVar19;
  lVar6 = param_3[6];
  puVar1 = (uint *)(*(longlong *)(lVar6 + 0xa0) + (ulonglong)uVar16 * 4);
  for (; uVar19 <= uVar16; uVar19 = uVar19 + 1) {
    if (*(int *)(*(longlong *)(lVar6 + 0xa0) + (ulonglong)uVar19 * 4) == 0) {
      FUN_1804c5880(lVar6,uVar19);
    }
  }
  if ((((*puVar1 >> 0x18 & 0x1f) - 0xe < 6) || ((*puVar1 & 0x1f000000) == 0x4000000)) &&
     (((puVar1[-1] >> 0x18 & 0x1f) - 0xe < 6 || ((puVar1[-1] & 0x1f000000) == 0x4000000)))) {
    puVar2 = (uint *)(*(longlong *)(lVar6 + 0xa0) + uVar18 * 4);
    for (puVar22 = puVar1; puVar2 <= puVar22; puVar22 = puVar22 + -1) {
      uVar16 = *puVar22;
      uVar19 = uVar16 >> 0x18 & 0x1f;
      if (uVar19 - 0xe < 6) {
        *(undefined2 *)(lVar6 + 0xbc) = 0x5d04;
        *(short *)(lVar6 + 0xb8) = (short)uVar16;
        *(ushort *)(lVar6 + 0xba) = (ushort)(uVar19 == 0xe);
        uVar16 = FUN_1804d6ae0(lVar6);
        *puVar22 = uVar16;
      }
      else if (uVar19 != 4) break;
    }
    puVar22 = puVar22 + 1;
    uVar14 = FUN_1804a66d0(lVar6,0x19,lVar6 + -0x220);
    *(undefined4 *)(lVar6 + 0xba) = 0x55090000;
    *(undefined2 *)(lVar6 + 0xb8) = uVar14;
    uVar15 = FUN_1804d6ae0(lVar6);
    puVar20 = puVar22;
    uVar14 = uVar15;
    do {
      uVar16 = *puVar20;
      puVar20 = puVar20 + 1;
      *(short *)(lVar6 + 0xba) = (short)uVar16;
      *(undefined2 *)(lVar6 + 0xbc) = 0x5689;
      *(undefined2 *)(lVar6 + 0xb8) = uVar14;
      uVar14 = FUN_1804d6ae0(lVar6);
    } while (puVar20 <= puVar1);
    *(undefined2 *)(lVar6 + 0xbc) = 0x5784;
    *(undefined2 *)(lVar6 + 0xb8) = uVar14;
    *(undefined2 *)(lVar6 + 0xba) = uVar15;
    uVar19 = FUN_1804d6ae0(lVar6);
    uVar16 = (uint)((longlong)puVar22 - *(longlong *)(lVar6 + 0xa0) >> 2);
    *(uint *)(lVar6 + 0xac) = uVar16;
    if (puVar22 == puVar2) {
      *(uint *)(param_3 + 8) = uVar19;
      return 0;
    }
    uVar18 = (ulonglong)(uVar16 - 1);
    *(uint *)((longlong)param_3 + 0x3c) = uVar16;
    *(int *)(lVar6 + 0xac) = *(int *)(lVar6 + 0xac) + -1;
    lVar8 = *(longlong *)(param_1 + 0x20);
    puVar3 = (undefined8 *)(lVar8 + uVar18 * 8);
    uVar13 = puVar3[1];
    *param_3 = *puVar3;
    param_3[1] = uVar13;
    puVar3 = (undefined8 *)(lVar8 + 0x10 + uVar18 * 8);
    uVar13 = puVar3[1];
    param_3[2] = *puVar3;
    param_3[3] = uVar13;
    puVar4 = (undefined4 *)(lVar8 + 0x20 + uVar18 * 8);
    uVar10 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    uVar18 = lVar6 - 0x270U | 0xfffd800000000000;
    *(undefined4 *)(param_3 + 4) = *puVar4;
    *(undefined4 *)((longlong)param_3 + 0x24) = uVar10;
    *(undefined4 *)(param_3 + 5) = uVar11;
    *(undefined4 *)((longlong)param_3 + 0x2c) = uVar12;
    *puVar22 = uVar19;
  }
  else {
    *(uint *)(lVar6 + 0xac) = uVar16 - 1;
    uVar19 = *puVar1;
    uVar18 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(lVar6 + 0x80) + 0x20) + (ulonglong)uVar16 * 8);
    puVar22 = puVar1;
  }
  uVar5 = puVar22[-1];
  uVar7 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x80) + 0x20) + (ulonglong)(uVar16 - 1) * 8);
  local_88 = uVar7;
  local_80 = uVar18;
  local_58 = uVar5;
  local_54 = uVar19;
  uVar16 = FUN_1804c4a40(lVar6,&DAT_1800033fb);
  uVar21 = (ulonglong)uVar16;
  lVar8 = *(longlong *)(lVar6 + 0xa0);
  lVar9 = *(longlong *)(*(longlong *)(lVar6 + 0x80) + 0x20);
  *(uint *)(lVar8 + 8 + uVar21 * 4) = uVar5;
  *(uint *)(lVar8 + 0xc + uVar21 * 4) = uVar19;
  *(ulonglong *)(lVar9 + 0x10 + uVar21 * 8) = uVar7;
  *(ulonglong *)(lVar9 + 0x18 + uVar21 * 8) = uVar18;
  iVar17 = FUN_1804c1910(lVar6,&local_88,8);
  if (iVar17 == 0) {
    local_58 = local_54;
    local_88 = local_80;
    iVar17 = FUN_1804c1910(lVar6,&local_88,8);
    if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(lVar6,0x12);
    }
  }
  *(undefined4 *)(lVar8 + uVar21 * 4) = local_48;
  *(undefined4 *)(lVar8 + 4 + uVar21 * 4) = 0;
  *(undefined8 *)(lVar9 + uVar21 * 8) = local_70;
  FUN_1804c2dc0(lVar6,uVar21,2);
  *(int *)(lVar6 + 0xfc) = *(int *)(lVar6 + 0xfc) + 1;
  *(longlong *)(lVar6 + 0xa0) = *(longlong *)(lVar6 + 0xa0) + (ulonglong)(uVar16 + 2) * 4;
  iVar17 = *(int *)(lVar6 + 0xb0) + uVar16;
  *(int *)(lVar6 + 0xb0) = iVar17 + 2;
  if (0xf9 < (uint)(iVar17 + *(int *)(lVar6 + 0xac) + 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(lVar6,3);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  return 0;
}



/* ===== 1804c4a40 FUN_1804c4a40 ===== */

int FUN_1804c4a40(longlong param_1,undefined *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if (param_2 == &DAT_1800033fb) {
    uVar8 = *(uint *)(param_1 + 0xac);
  }
  else {
    uVar8 = (uint)*(byte *)(*(longlong *)
                             ((*(ulonglong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + -0x10) &
                              0x7fffffffffff) + 0x20) + -0x5d);
  }
  uVar3 = FUN_1804a6210(param_1,0x1c,param_2);
  plVar1 = (longlong *)(param_1 + 0xa0);
  *(undefined4 *)(*plVar1 + (ulonglong)uVar8 * 4) = uVar3;
  *(undefined4 *)(*plVar1 + (ulonglong)(uVar8 + 1) * 4) = 0x20000;
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  uVar6 = *(uint *)(param_1 + 0xac);
  uVar7 = (ulonglong)uVar6;
  if (uVar6 < uVar8) {
    if (3 < uVar8 - uVar6) {
      plVar2 = (longlong *)(*plVar1 + uVar7 * 4);
      if ((plVar1 < plVar2) || ((longlong *)(*plVar1 + (ulonglong)(uVar8 - 1) * 4) < plVar1)) {
        uVar4 = uVar8 - (uVar8 - uVar6 & 3);
        do {
          uVar5 = (int)uVar7 + 4;
          uVar7 = (ulonglong)uVar5;
        } while (uVar5 < uVar4);
        FUN_180540170(plVar2,0,SUB168((ZEXT416((uVar4 - uVar6) + 3 >> 2) << 4) / ZEXT816(4),0) << 2)
        ;
        if (uVar8 <= uVar5) goto LAB_1804c4b3c;
      }
    }
    do {
      *(undefined4 *)(*plVar1 + uVar7 * 4) = 0;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < uVar8);
  }
LAB_1804c4b3c:
  return uVar8 + 2;
}



/* ===== 1804c4b50 FUN_1804c4b50 ===== */

ulonglong FUN_1804c4b50(longlong param_1,uint param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ushort uVar14;
  uint uVar15;
  ushort uVar16;
  
  uVar15 = (uint)param_3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x28 + (ulonglong)param_2 * 8);
  iVar10 = *(int *)(*(longlong *)(param_1 + 0xa0) + -8);
  if (iVar10 == 0) {
    *(undefined4 *)(param_1 + 0xba) = 0x47080010;
    *(short *)(param_1 + 0xb8) = *(short *)(param_1 + 0xb0) + -2;
    iVar10 = FUN_1804a5f70();
    *(int *)(*(longlong *)(param_1 + 0xa0) + -8) = iVar10;
  }
  uVar14 = (ushort)iVar10;
  if (*(char *)(lVar2 + 0xb) == '\0') goto LAB_1804c4ce7;
  iVar11 = (int)((longlong)**(ulonglong **)(lVar2 + 0x20) >> 0x2f);
  if (iVar11 == -0xb) {
    uVar12 = **(ulonglong **)(lVar2 + 0x20) & 0x7fffffffffff;
    bVar1 = *(byte *)(uVar12 + 8);
    if (((char)bVar1 < '\0') || ((bVar1 & 0x10) != 0)) goto LAB_1804c4ce7;
    uVar12 = (ulonglong)*(ushort *)(uVar12 + 10);
    lVar3 = **(longlong **)(param_1 + -0x160);
    bVar1 = (byte)((uint)*(undefined4 *)(lVar3 + uVar12 * 0x18) >> 0x18);
    while (bVar1 >> 4 == 8) {
      uVar12 = (ulonglong)*(ushort *)(lVar3 + uVar12 * 0x18);
      bVar1 = (byte)((uint)*(undefined4 *)(lVar3 + uVar12 * 0x18) >> 0x18);
    }
    if ((bVar1 >> 4 < 6) && (0x10 < *(uint *)(lVar3 + 4 + uVar12 * 0x18))) goto LAB_1804c4ce7;
  }
  else if (((iVar11 == -0xc) || (iVar11 == -0xd)) || (iVar11 == -7)) goto LAB_1804c4ce7;
  if (0x7fff < uVar14) {
    if (0x5f < *(byte *)(*(longlong *)(param_1 + 0x98) + 0x3d)) goto LAB_1804c4ce7;
    iVar10 = FUN_1804a62e0(param_1,*(undefined8 *)(param_1 + 0x90),8);
    *(undefined2 *)(param_1 + 0xbc) = 0x888;
    *(short *)(param_1 + 0xba) = (short)iVar10;
    *(ushort *)(param_1 + 0xb8) = uVar14;
    FUN_1804d6ae0(param_1);
    *(int *)(*(longlong *)(param_1 + 0xa0) + -8) = iVar10;
  }
  uVar14 = (ushort)iVar10;
  uVar12 = FUN_1804bf4d0(param_1,*(undefined8 *)(lVar2 + 0x20));
  if ((int)uVar12 != 0) {
    return uVar12;
  }
LAB_1804c4ce7:
  uVar13 = *(uint *)(lVar2 + 0x28) + 0xfb3ee249;
  iVar10 = (*(uint *)(lVar2 + 0x28) ^ uVar13) - (uVar13 >> 0x12 | uVar13 * 0x4000);
  uVar16 = ((ushort)(uVar13 >> 0xd) ^ (ushort)iVar10) - (ushort)((uint)iVar10 >> 0x13) & 0xff |
           (ushort)(param_2 << 8);
  if (*(char *)(lVar2 + 10) == '\0') {
    lVar3 = *(longlong *)(param_1 + 0x80);
    uVar12 = *(ulonglong *)(lVar2 + 0x20);
    if (((*(ulonglong *)(lVar3 + 0x38) <= uVar12) && (uVar12 < *(ulonglong *)(lVar3 + 0x30))) &&
       (iVar10 = (int)((longlong)
                       (((ulonglong)*(uint *)(param_1 + 0xb0) * 8 - *(longlong *)(lVar3 + 0x20)) +
                       uVar12) >> 3), -1 < iVar10)) {
      *(undefined2 *)(param_1 + 0xbc) = 0x3c09;
      *(ushort *)(param_1 + 0xb8) = uVar14;
      *(ushort *)(param_1 + 0xba) = uVar16;
      uVar7 = FUN_1804d6ae0(param_1);
      uVar8 = FUN_1804a6410(param_1,(longlong)(iVar10 * -8 + 0x10));
      *(undefined2 *)(param_1 + 0xbc) = 0x2909;
      *(undefined2 *)(param_1 + 0xb8) = uVar7;
      *(undefined2 *)(param_1 + 0xba) = uVar8;
      uVar7 = FUN_1804d6ae0(param_1);
      *(undefined2 *)(param_1 + 0xbc) = 0x889;
      *(undefined2 *)(param_1 + 0xb8) = 0x8000;
      *(undefined2 *)(param_1 + 0xba) = uVar7;
      FUN_1804d6ae0(param_1);
      iVar10 = iVar10 - *(int *)(param_1 + 0xb0);
      if (uVar15 == 0) {
        uVar15 = *(uint *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar10 * 4);
        if (uVar15 == 0) {
          uVar12 = FUN_1804c5880(param_1,iVar10);
          return uVar12;
        }
        return (ulonglong)uVar15;
      }
      *(uint *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar10 * 4) = uVar15;
      if (iVar10 < *(int *)(param_1 + 0xac)) {
        return 0;
      }
      *(int *)(param_1 + 0xac) = iVar10 + 1;
      return 0;
    }
    uVar7 = 0x3c95;
    *(ushort *)(param_1 + 0xb8) = uVar14;
    *(ushort *)(param_1 + 0xba) = uVar16;
    bVar6 = false;
    uVar5 = (uint)((ulonglong)param_3 >> 0x18);
    uVar13 = uVar5 & 0xff;
    if ((uVar5 & 0x1f) - 4 < 9) {
      uVar7 = 0x3c89;
    }
    *(undefined2 *)(param_1 + 0xbc) = uVar7;
    uVar7 = FUN_1804d6ae0(param_1);
    *(undefined4 *)(param_1 + 0xba) = 0x2a098000;
    *(undefined2 *)(param_1 + 0xb8) = uVar7;
    uVar8 = FUN_1804a6410(param_1,(*(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0xac)) * 8);
    uVar9 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x789;
    *(undefined2 *)(param_1 + 0xb8) = uVar9;
    *(undefined2 *)(param_1 + 0xba) = uVar8;
    FUN_1804d6ae0(param_1);
  }
  else {
    *(ushort *)(param_1 + 0xb8) = uVar14;
    uVar7 = 0x3d89;
    *(ushort *)(param_1 + 0xba) = uVar16;
    if (uVar14 < 0x8000) {
      uVar7 = 0x3d09;
    }
    bVar6 = true;
    uVar13 = uVar15 >> 0x18;
    *(undefined2 *)(param_1 + 0xbc) = uVar7;
    uVar7 = FUN_1804d6ae0(param_1);
  }
  if (uVar15 != 0) {
    if ((uVar13 & 0x1f) - 0xf < 5) {
      *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
      *(short *)(param_1 + 0xb8) = (short)param_3;
      uVar15 = FUN_1804d6ae0(param_1);
    }
    *(undefined2 *)(param_1 + 0xb8) = uVar7;
    *(short *)(param_1 + 0xba) = (short)uVar15;
    *(ushort *)(param_1 + 0xbc) = (byte)(uVar15 >> 0x18) & 0x1f | 0x4c00;
    FUN_1804d6ae0(param_1);
    if ((bVar6) && ((uVar15 >> 0x18 & 0x1f) - 4 < 9)) {
      *(undefined2 *)(param_1 + 0xbc) = 0x5900;
      *(undefined2 *)(param_1 + 0xb8) = uVar7;
      *(short *)(param_1 + 0xba) = (short)uVar15;
      FUN_1804d6ae0(param_1);
    }
    *(undefined1 *)(param_1 + 0xb5) = 1;
    return 0;
  }
  uVar4 = **(undefined8 **)(lVar2 + 0x20);
  *(undefined2 *)(param_1 + 0xb8) = uVar7;
  uVar15 = (uint)((longlong)uVar4 >> 0x2f);
  if (uVar15 < 0xfffffff2) {
    *(undefined4 *)(param_1 + 0xba) = 0x448e0000;
    uVar12 = FUN_1804d6ae0(param_1);
    return uVar12;
  }
  uVar15 = ~uVar15;
  *(ushort *)(param_1 + 0xbc) = (ushort)uVar15 | 0x4480;
  *(undefined2 *)(param_1 + 0xba) = 0;
  uVar12 = FUN_1804d6ae0(param_1);
  if (uVar15 < 3) {
    return (ulonglong)(uVar15 * 0xffffff + 0x7fff);
  }
  return uVar12;
}



/* ===== 1804c5000 FUN_1804c5000 ===== */

void FUN_1804c5000(longlong param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  uint local_res8;
  ushort local_res10;
  
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x98) + 10);
  uVar13 = ((*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + -8) >> 3) -
           (ulonglong)bVar2) - 2;
  if (*(uint *)(param_1 + 0xac) < param_2) {
    *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 - 1) * 4) = 0;
  }
  if (0 < *(int *)(param_1 + 0xfc)) {
    uVar11 = 0;
    if (-1 < (longlong)uVar13) {
      uVar11 = uVar13;
    }
    if (param_3 == 1) {
      uVar10 = *(uint *)(param_1 + 0xac);
      if (param_2 < uVar10) goto LAB_1804c50be;
      uVar10 = param_2 + 1;
    }
    else {
      if (param_3 == 0xffffffffffffffff) {
        param_3 = uVar11;
      }
      uVar10 = (int)param_3 + param_2;
    }
    *(uint *)(param_1 + 0xac) = uVar10;
LAB_1804c50be:
    if (0xf9 < uVar10 + *(int *)(param_1 + 0xb0)) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,3);
    }
    lVar14 = 0;
    if (0 < (longlong)param_3) {
      do {
        lVar1 = lVar14 * 4;
        if (lVar14 < (longlong)uVar11) {
          iVar7 = *(int *)(lVar1 + uVar11 * -4 + -8 + *(longlong *)(param_1 + 0xa0));
          if (iVar7 == 0) {
            iVar7 = FUN_1804c5880(param_1,((int)lVar14 - (int)uVar11) + -2);
          }
        }
        else {
          iVar7 = 0x7fff;
        }
        lVar14 = lVar14 + 1;
        *(int *)(lVar1 + (ulonglong)param_2 * 4 + *(longlong *)(param_1 + 0xa0)) = iVar7;
      } while (lVar14 < (longlong)param_3);
    }
    return;
  }
  uVar10 = (uint)bVar2;
  *(undefined4 *)(param_1 + 0xba) = 0x47130012;
  *(undefined2 *)(param_1 + 0xb8) = 1;
  uVar4 = FUN_1804d6ae0(param_1);
  local_res8 = (uint)bVar2 * 8 + 0x13;
  if (-1 < (longlong)param_3) {
    if ((longlong)uVar13 < 1) {
      uVar6 = FUN_1804a6370(param_1,local_res8);
      *(undefined2 *)(param_1 + 0xbc) = 0x293;
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      *(undefined2 *)(param_1 + 0xba) = uVar6;
      FUN_1804d6ae0(param_1);
      uVar13 = 0;
    }
    else {
      if ((longlong)uVar13 < (longlong)param_3) {
        uVar6 = 0x893;
        iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + -8);
        uVar11 = uVar13;
      }
      else {
        uVar6 = 0x193;
        iVar7 = (uVar10 + (int)param_3) * 8 + 0x13;
        uVar11 = param_3;
      }
      uVar5 = FUN_1804a6370(param_1,iVar7);
      *(undefined2 *)(param_1 + 0xbc) = uVar6;
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      *(undefined2 *)(param_1 + 0xba) = uVar5;
      FUN_1804d6ae0(param_1);
      *(undefined2 *)(param_1 + 0xbc) = 0x2a15;
      *(undefined2 *)(param_1 + 0xb8) = 0x8000;
      *(undefined2 *)(param_1 + 0xba) = uVar4;
      uVar4 = FUN_1804d6ae0(param_1);
      uVar6 = FUN_1804a6410(param_1,(uint)bVar2 * 8 | 3);
      *(undefined2 *)(param_1 + 0xbc) = 0x2909;
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      *(undefined2 *)(param_1 + 0xba) = uVar6;
      uVar4 = FUN_1804d6ae0(param_1);
      lVar14 = 0;
      if (0 < (longlong)uVar11) {
        do {
          uVar3 = *(undefined8 *)
                   (lVar14 * 8 + uVar13 * -8 + -0x10 +
                   *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20));
          *(undefined2 *)(param_1 + 0xb8) = uVar4;
          *(short *)(param_1 + 0xba) = (short)lVar14;
          uVar10 = (uint)((longlong)uVar3 >> 0x2f);
          if (uVar10 < 0xfffffff2) {
            *(undefined2 *)(param_1 + 0xbc) = 0x488e;
            iVar7 = FUN_1804d6ae0(param_1);
          }
          else {
            uVar10 = ~uVar10;
            *(ushort *)(param_1 + 0xbc) = (ushort)uVar10 | 0x4880;
            iVar7 = FUN_1804d6ae0(param_1);
            if (uVar10 < 3) {
              iVar7 = uVar10 * 0xffffff + 0x7fff;
            }
          }
          lVar1 = lVar14 * 4;
          lVar14 = lVar14 + 1;
          *(int *)(lVar1 + (ulonglong)param_2 * 4 + *(longlong *)(param_1 + 0xa0)) = iVar7;
        } while (lVar14 < (longlong)uVar11);
      }
    }
    if ((longlong)uVar13 < (longlong)param_3) {
      do {
        lVar14 = uVar13 * 4;
        uVar13 = uVar13 + 1;
        *(undefined4 *)((ulonglong)param_2 * 4 + lVar14 + *(longlong *)(param_1 + 0xa0)) = 0x7fff;
      } while ((longlong)uVar13 < (longlong)param_3);
    }
    if ((param_3 == 1) && (param_2 < *(uint *)(param_1 + 0xac))) {
      return;
    }
    *(uint *)(param_1 + 0xac) = (int)param_3 + param_2;
    return;
  }
  uVar8 = *(uint *)(*(longlong *)(param_1 + 0x88) + 4);
  if ((((char)uVar8 != 'A') || ((char)(uVar8 >> 0x18) != '\x02')) || ((uVar8 & 0xff0000) != 0x10000)
     ) {
LAB_1804c5845:
    *(undefined8 *)(param_1 + 0xc20) = 0x4051c00000000000;
                    /* WARNING: Subroutine does not return */
    FUN_1804954f0(param_1,7);
  }
  uVar12 = (ulonglong)(byte)(uVar8 >> 8);
  uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + uVar12 * 8);
  if (((int)((longlong)uVar11 >> 0x2f) != -9) ||
     (uVar11 = uVar11 & 0x7fffffffffff, *(char *)(uVar11 + 10) != '\x11')) goto LAB_1804c5845;
  uVar6 = FUN_1804a62e0(param_1,uVar11,8);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0xa0) + uVar12 * 4);
  uVar5 = (undefined2)iVar7;
  if (iVar7 == 0) {
    uVar5 = FUN_1804c5880(param_1,uVar8 >> 8 & 0xff);
  }
  *(undefined2 *)(param_1 + 0xbc) = 0x888;
  *(undefined2 *)(param_1 + 0xb8) = uVar5;
  *(undefined2 *)(param_1 + 0xba) = uVar6;
  FUN_1804d6ae0(param_1);
  uVar8 = *(uint *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 - 1) * 4);
  if (uVar8 == 0) {
    uVar8 = FUN_1804c5880(param_1);
  }
  iVar7 = FUN_1804db550(param_1,uVar8,
                        *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) +
                        (ulonglong)(param_2 - 1) * 8);
  lVar14 = (longlong)iVar7;
  if (iVar7 < 0) goto LAB_1804c5845;
  uVar9 = 0x7fff;
  local_res10 = (ushort)uVar8;
  if ((iVar7 == 0) || ((uVar8 >> 0x18 & 0x1f) - 0xf < 5)) {
    if (iVar7 != 0) goto LAB_1804c5545;
LAB_1804c55ab:
    if ((longlong)uVar13 < lVar14) {
      uVar6 = FUN_1804a6370(param_1,local_res8);
      if (iVar7 == 0) {
        uVar9 = FUN_1804a6370(param_1,0);
      }
      else {
        uVar5 = FUN_1804a6370(param_1,3);
        *(ushort *)(param_1 + 0xb8) = local_res10;
        *(undefined2 *)(param_1 + 0xbc) = 0x2413;
        *(undefined2 *)(param_1 + 0xba) = uVar5;
        uVar5 = FUN_1804d6ae0(param_1);
        *(undefined2 *)(param_1 + 0xb8) = uVar5;
        *(undefined2 *)(param_1 + 0xba) = uVar6;
        *(undefined2 *)(param_1 + 0xbc) = 0x2913;
        uVar6 = FUN_1804d6ae0(param_1);
        uVar9 = 0x7fff;
      }
      *(undefined2 *)(param_1 + 0xbc) = 0x93;
      *(undefined2 *)(param_1 + 0xb8) = uVar4;
      *(undefined2 *)(param_1 + 0xba) = uVar6;
      FUN_1804d6ae0(param_1);
      if (iVar7 == 0) goto LAB_1804c5820;
      goto LAB_1804c5763;
    }
    uVar6 = FUN_1804a6370(param_1,uVar10 * -8 + -0x13);
    *(undefined2 *)(param_1 + 0xb8) = uVar4;
    *(undefined2 *)(param_1 + 0xbc) = 0x2913;
    *(undefined2 *)(param_1 + 0xba) = uVar6;
    uVar6 = FUN_1804d6ae0(param_1);
    if (bVar2 != 0) {
      uVar5 = FUN_1804a6370(param_1,0);
      *(undefined2 *)(param_1 + 0xbc) = 0x193;
      *(undefined2 *)(param_1 + 0xb8) = uVar6;
      *(undefined2 *)(param_1 + 0xba) = uVar5;
      FUN_1804d6ae0(param_1);
    }
    uVar5 = FUN_1804a6370(param_1,3);
    *(undefined2 *)(param_1 + 0xbc) = 0x2513;
    *(undefined2 *)(param_1 + 0xb8) = uVar6;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    uVar9 = FUN_1804d6ae0(param_1);
    if (iVar7 == 0) goto LAB_1804c5820;
    uVar6 = FUN_1804a6370(param_1,0xffffffff);
    *(ushort *)(param_1 + 0xb8) = local_res10;
    *(undefined2 *)(param_1 + 0xbc) = 0x2913;
    *(undefined2 *)(param_1 + 0xba) = uVar6;
    uVar8 = FUN_1804d6ae0(param_1);
    FUN_1804c3b40(param_1,uVar9,uVar8,uVar13 & 0xffffffff);
  }
  else {
    if ((uVar8 & 0x1f000000) == 0x4000000) {
      *(undefined4 *)(param_1 + 0xba) = 0x5e8e0000;
      *(ushort *)(param_1 + 0xb8) = local_res10;
      uVar8 = FUN_1804d6ae0(param_1);
    }
    *(undefined4 *)(param_1 + 0xba) = 0x5b93226e;
    *(short *)(param_1 + 0xb8) = (short)uVar8;
    uVar8 = FUN_1804d6ae0(param_1);
    local_res10 = (ushort)uVar8;
LAB_1804c5545:
    bVar15 = 0x7fff < local_res10;
    local_res10 = (ushort)uVar8;
    if (bVar15) goto LAB_1804c55ab;
    uVar6 = FUN_1804a6370(param_1,(uVar10 + iVar7) * 8 + 0x13);
    *(undefined2 *)(param_1 + 0xb8) = uVar4;
    uVar5 = 0x93;
    *(undefined2 *)(param_1 + 0xba) = uVar6;
    if (lVar14 <= (longlong)uVar13) {
      uVar5 = 0x193;
    }
    *(undefined2 *)(param_1 + 0xbc) = uVar5;
    FUN_1804d6ae0(param_1);
    local_res8 = uVar10 * 8 + 0xb;
LAB_1804c5763:
    if ((longlong)uVar13 < lVar14) goto LAB_1804c5820;
  }
  *(undefined2 *)(param_1 + 0xbc) = 0x2a15;
  *(undefined2 *)(param_1 + 0xb8) = 0x8000;
  *(undefined2 *)(param_1 + 0xba) = uVar4;
  uVar4 = FUN_1804d6ae0(param_1);
  uVar6 = FUN_1804a6410(param_1,(ulonglong)local_res8 - 0x10);
  *(undefined2 *)(param_1 + 0xbc) = 0x2909;
  *(undefined2 *)(param_1 + 0xb8) = uVar4;
  *(undefined2 *)(param_1 + 0xba) = uVar6;
  uVar4 = FUN_1804d6ae0(param_1);
  uVar10 = (uint)((longlong)
                  *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + -0x18 +
                   (lVar14 - uVar13) * 8) >> 0x2f);
  if (uVar10 < 0xfffffff2) {
    uVar10 = 0xe;
  }
  else {
    uVar10 = ~uVar10;
  }
  *(undefined2 *)(param_1 + 0xbc) = 0x3809;
  *(undefined2 *)(param_1 + 0xb8) = uVar4;
  *(short *)(param_1 + 0xba) = (short)uVar8;
  uVar9 = FUN_1804d6ae0(param_1);
  uVar9 = FUN_1804c2d70(param_1,uVar9,0,uVar10);
LAB_1804c5820:
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 - 3) * 4) = uVar9;
  *(uint *)(param_1 + 0xac) = param_2 - 2;
  *(undefined1 *)(param_1 + 0xb7) = 2;
  return;
}



/* ===== 1804c5880 FUN_1804c5880 ===== */

void FUN_1804c5880(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)((longlong)
                 *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + (longlong)param_2 * 8) >>
                0x2f);
  if (uVar2 < 0xfffffff2) {
    uVar2 = 0xe;
  }
  else {
    uVar2 = ~uVar2;
  }
  *(short *)(param_1 + 0xb8) = (short)param_2 + *(short *)(param_1 + 0xb0);
  *(ushort *)(param_1 + 0xbc) = (ushort)uVar2 | 0x4780;
  *(undefined2 *)(param_1 + 0xba) = 4;
  iVar1 = FUN_1804a5f70();
  if (uVar2 < 3) {
    iVar1 = uVar2 * 0xffffff + 0x7fff;
  }
  *(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)param_2 * 4) = iVar1;
  return;
}



/* ===== 1804c5910 FUN_1804c5910 ===== */

void FUN_1804c5910(longlong param_1,undefined2 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  if (*(char *)(param_2 + 3) != -2) {
    uVar4 = (ulonglong)(ushort)param_2[1];
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x90) + uVar4 * 8);
    if ((*(byte *)(param_2 + 2) & 0x1f) == 0xe) {
      uVar2 = (uint)*(byte *)((longlong)puVar1 + 6);
      if ((char)*(byte *)((longlong)puVar1 + 6) < '\0') {
        uVar2 = FUN_1804d1420(param_1,uVar4,0xffff0000);
      }
      *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar2 & 0x1f));
      FUN_1804c7e00(param_1,*param_2,0xffe7);
      FUN_1804d0390(param_1,0x110ff2fc,uVar2,0x20);
      return;
    }
    if ((ushort)param_2[1] < 0x8000) {
      FUN_1804a6890(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x80),&local_res10,puVar1);
      FUN_1804c7e00(param_1,*param_2,0xffe7);
      if (CONCAT44(uStackX_14,local_res10) == -1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x80) + -4) = 0xffffffff;
        uVar3 = 0x80200;
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
      }
      else {
        *(undefined4 *)(*(longlong *)(param_1 + 0x80) + -4) = local_res10;
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
        FUN_1804d0390(param_1,0xc70000fe,0,0x20);
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 4;
        *(undefined4 *)(*(longlong *)(param_1 + 0x80) + -4) = uStackX_14;
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
        uVar3 = 0;
      }
      FUN_1804d0390(param_1,0xc70000fe,uVar3,0x20);
      return;
    }
    uVar2 = FUN_1804d13e0(param_1,uVar4,0xffe7);
    FUN_1804c7e00(param_1,*param_2,~(1 << (uVar2 & 0x1f)) & 0xffe7);
    if ((char)uVar2 < '\0') {
      if (2 < (*(byte *)(puVar1 + 1) & 0x1f)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x80) + -4) = *puVar1;
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
        FUN_1804d0390(param_1,0xc70000fe,0,0x20);
      }
      uVar5 = 0xc70000fe;
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 4;
      *(undefined4 *)(*(longlong *)(param_1 + 0x80) + -4) = 0xfff90000;
      *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
      uVar2 = 0;
    }
    else {
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 4;
      *(uint *)(*(longlong *)(param_1 + 0x80) + -4) = ~(*(byte *)(param_2 + 2) & 0x1f) << 0xf;
      *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
      FUN_1804d0390(param_1,0x810000fe,1,0x20);
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -4;
      uVar5 = 0x890000fe;
      uVar2 = uVar2 | 0x80200;
    }
    FUN_1804d0390(param_1,uVar5,uVar2,0x20);
  }
  return;
}



/* ===== 1804c5b80 FUN_1804c5b80 ===== */

void FUN_1804c5b80(uint *param_1,undefined2 *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar9;
  
  if ((*(char *)(param_2 + 3) < '\0') && (*(char *)((longlong)param_2 + 7) == '\0')) {
    uVar2 = 0xffe7;
    if ((*(byte *)(param_2 + 2) & 0x1f) - 3 < 10) {
      uVar2 = param_1[0x2a] & 0xffe7;
      if (uVar2 == 0) {
        uVar2 = 0xffffffff;
        if (*param_1 != 0xffffffff) {
          uVar2 = *param_1;
        }
        uVar3 = param_1[1];
        if (uVar2 <= param_1[1]) {
          uVar3 = uVar2;
        }
        uVar2 = param_1[2];
        if (uVar3 <= param_1[2]) {
          uVar2 = uVar3;
        }
        uVar3 = param_1[5];
        if (uVar2 <= param_1[5]) {
          uVar3 = uVar2;
        }
        uVar2 = param_1[6];
        if (uVar3 <= param_1[6]) {
          uVar2 = uVar3;
        }
        uVar3 = param_1[7];
        if (uVar2 <= param_1[7]) {
          uVar3 = uVar2;
        }
        uVar2 = param_1[8];
        if (uVar3 <= param_1[8]) {
          uVar2 = uVar3;
        }
        uVar3 = param_1[9];
        if (uVar2 <= param_1[9]) {
          uVar3 = uVar2;
        }
        uVar2 = param_1[10];
        if (uVar3 <= param_1[10]) {
          uVar2 = uVar3;
        }
        uVar3 = param_1[0xb];
        if (uVar2 <= param_1[0xb]) {
          uVar3 = uVar2;
        }
        uVar2 = param_1[0xc];
        if (uVar3 <= param_1[0xc]) {
          uVar2 = uVar3;
        }
        uVar3 = param_1[0xd];
        if (uVar2 <= param_1[0xd]) {
          uVar3 = uVar2;
        }
        uVar2 = param_1[0xe];
        if (uVar3 <= param_1[0xe]) {
          uVar2 = uVar3;
        }
        uVar3 = param_1[0xf];
        if (uVar2 <= param_1[0xf]) {
          uVar3 = uVar2;
        }
        uVar7 = (ulonglong)(uVar3 & 0xffff);
        if (0x7fff < (ushort)uVar3) {
          uVar2 = param_1[0x2c] & 0xffe7;
          if ((uVar2 != 0) &&
             ((param_1[0x2c] >> (*(byte *)(*(longlong *)(param_1 + 0x24) + 6 + uVar7 * 8) & 0x1f) &
              1) == 0)) {
            uVar3 = 0;
            if (uVar2 != 0) {
              for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
              }
            }
            uVar7 = (ulonglong)(ushort)param_1[uVar3];
          }
        }
        uVar3 = FUN_1804d20f0(param_1,uVar7);
      }
      else {
        uVar2 = (param_1[0x2a] & 0xff00) << 8 | uVar2 << 0x18;
        uVar3 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> uVar3 == 0; uVar3 = uVar3 - 1) {
          }
        }
        uVar3 = uVar3 ^ 0x18;
      }
      param_1[0x2b] = param_1[0x2b] | 1 << (uVar3 & 0x1f);
      uVar2 = ~(1 << (uVar3 & 0x1f)) & 0xffe7;
    }
    else {
      uVar3 = 0x80;
    }
    FUN_1804c7e00(param_1,*param_2,uVar2);
    if (*(char *)((longlong)param_2 + 5) == 'H') {
      param_1[0x28] = param_1[0x28] + (uint)(ushort)param_2[1] * 8;
    }
  }
  else {
    uVar6 = 0xffe7;
    if ((*(byte *)(param_2 + 2) & 0x1f) == 0xe) {
      uVar6 = 0xffff0000;
    }
    uVar2 = FUN_1804d1530(param_1,param_2,uVar6);
    FUN_1804c7e00(param_1,*param_2,0xffe7);
    if (*(char *)((longlong)param_2 + 5) == 'H') {
      param_1[0x28] = param_1[0x28] + (uint)(ushort)param_2[1] * 8;
    }
    if ((*(byte *)(param_2 + 2) & 0x1f) - 3 < 10) {
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
      bVar9 = (byte)uVar2 & 7;
      bVar8 = (byte)(uVar2 >> 3) & 1;
      **(undefined1 **)(param_1 + 0x20) = 0x11;
      lVar1 = *(longlong *)(param_1 + 0x20);
      bVar5 = bVar8 | 0x48;
      *(byte *)(lVar1 + -1) = bVar9 - 0x18;
      *(undefined4 *)(lVar1 + -5) = 0xc10000fe;
      *(byte *)(lVar1 + -3) = bVar5;
      *(byte **)(param_1 + 0x20) = (byte *)(lVar1 + -3);
      FUN_1804c9500(param_1,5);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
      **(byte **)(param_1 + 0x20) = ~(*(byte *)(param_2 + 2) & 0x1f);
      lVar1 = *(longlong *)(param_1 + 0x20);
      *(byte *)(lVar1 + -1) = bVar9 - 8;
      *(undefined4 *)(lVar1 + -5) = 0x830000fe;
      if ((uVar2 & 8) == 0) {
        lVar4 = -3;
      }
      else {
        lVar4 = -4;
        *(byte *)(lVar1 + -3) = bVar8 | 0x40;
      }
      *(undefined1 **)(param_1 + 0x20) = (undefined1 *)(lVar4 + lVar1);
      *(undefined1 *)(lVar4 + lVar1) = 0x66;
      uVar3 = param_1[0x2e];
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
      **(undefined1 **)(param_1 + 0x20) = 0x2f;
      if ((uVar3 >> 6 & 1) == 0) {
        lVar1 = *(longlong *)(param_1 + 0x20);
        uVar6 = 0x8b0000fe;
        *(byte *)(lVar1 + -1) = bVar9 - 0x38;
        *(undefined4 *)(lVar1 + -5) = 0xc10000fe;
        uVar2 = uVar2 | 0x80200;
        *(byte *)(lVar1 + -3) = bVar5;
        *(byte **)(param_1 + 0x20) = (byte *)(lVar1 + -3);
      }
      else {
        uVar6 = 0xf0fbe3c4;
      }
      goto LAB_1804c5fb4;
    }
    uVar6 = 0x100ff2fc;
    if (uVar2 < 0x10) {
      uVar6 = 0x8b0000fe;
    }
    FUN_1804d0390(param_1,uVar6,uVar2,0x20);
    uVar3 = 0x80;
  }
  param_1[0x28] = param_1[0x28] + 4;
  uVar6 = 5;
  if ((*(byte *)(param_2 + 2) & 0x1f) == 0xe) {
    uVar6 = 3;
  }
  FUN_1804c9500(param_1,uVar6);
  bVar5 = *(byte *)(param_2 + 2) & 0x1f;
  if (bVar5 < 0xe) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    uVar2 = *(byte *)(param_2 + 2) & 0x1f;
    if (uVar2 - 3 < 10) {
      param_1[0x28] = param_1[0x28] - 4;
      *(byte **)(param_1 + 0x20) = (byte *)(lVar1 + -1);
      *(byte *)(lVar1 + -1) = ~(*(byte *)(param_2 + 2) & 0x1f);
      FUN_1804d0390(param_1,0x830000fe,7,uVar3);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
      uVar6 = 0x8b0000fe;
      **(undefined1 **)(param_1 + 0x20) = 0x2f;
      lVar1 = *(longlong *)(param_1 + 0x20);
      *(byte *)(lVar1 + -1) = ((byte)uVar3 & 7) - 8;
      *(undefined4 *)(lVar1 + -5) = 0xc10000fe;
      uVar2 = uVar3 | 0x80200;
      *(byte *)(lVar1 + -3) = (byte)(uVar3 >> 3) & 1 | 0x48;
      *(byte **)(param_1 + 0x20) = (byte *)(lVar1 + -3);
    }
    else if (bVar5 == 0) {
      param_1[0x28] = param_1[0x28] - 4;
      *(undefined1 **)(param_1 + 0x20) = (undefined1 *)(lVar1 + -1);
      uVar6 = 0x830000fe;
      *(undefined1 *)(lVar1 + -1) = 0xff;
      uVar2 = 0x80207;
    }
    else {
      uVar6 = 0x810000fe;
      *(uint *)(lVar1 + -4) = ~uVar2 << 0xf | 0x7fff;
      uVar2 = 7;
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -4;
    }
  }
  else {
    if (*(ulonglong *)(param_1 + 0x20) < *(ulonglong *)(param_1 + 0x22)) {
                    /* WARNING: Subroutine does not return */
      FUN_1804ccb30(param_1);
    }
    *(undefined4 *)(*(ulonglong *)(param_1 + 0x20) - 4) = 0xfff90000;
    uVar6 = 0x810000fe;
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -4;
    uVar2 = 7;
  }
LAB_1804c5fb4:
  FUN_1804d0390(param_1,uVar6,uVar2,0x20);
  return;
}



/* ===== 1804c5fd0 FUN_1804c5fd0 ===== */

void FUN_1804c5fd0(uint *param_1,undefined2 *param_2,int param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  
  uVar2 = param_2[1];
  uVar13 = (ulonglong)uVar2;
  lVar3 = *(longlong *)(param_1 + 0x24);
  if (0x7fff < uVar2) {
    if (((param_1[0x2e] & 0x40) != 0) && (param_4 != 0)) {
      uVar6 = FUN_1804d1530(param_1,param_2,0xffe7);
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x24) + 6 + uVar13 * 8);
      uVar4 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar4 = FUN_1804d1420(param_1,uVar2,0xffe7);
      }
      param_1[0x2c] = param_1[0x2c] & ~(1 << (uVar4 & 0x1f));
      uVar7 = FUN_1804c86c0(param_1,*param_2,~(1 << (uVar4 & 0x1f)) & 0xffe7,
                            0x605fd9U >> (*(byte *)(param_2 + 2) & 0x1f) & 1);
      FUN_1804d0390(param_1,param_4 + (0x605fd9U >> (*(byte *)(param_2 + 2) & 0x1f) & 1) * 0x800000
                            ^ uVar4 << 0x13,uVar6,uVar7);
      return;
    }
    uVar4 = FUN_1804d1530(param_1,param_2,0xffe5);
    lVar18 = -3;
    lVar17 = -2;
    if (uVar4 == 1) {
      uVar4 = param_1[0x2a] & 0xffe5;
      if (uVar4 == 0) {
        uVar4 = 0xffffffff;
        if (*param_1 != 0xffffffff) {
          uVar4 = *param_1;
        }
        uVar12 = param_1[2];
        if (uVar4 <= param_1[2]) {
          uVar12 = uVar4;
        }
        uVar4 = param_1[5];
        if (uVar12 <= param_1[5]) {
          uVar4 = uVar12;
        }
        uVar12 = param_1[6];
        if (uVar4 <= param_1[6]) {
          uVar12 = uVar4;
        }
        uVar4 = param_1[7];
        if (uVar12 <= param_1[7]) {
          uVar4 = uVar12;
        }
        uVar12 = param_1[8];
        if (uVar4 <= param_1[8]) {
          uVar12 = uVar4;
        }
        uVar4 = param_1[9];
        if (uVar12 <= param_1[9]) {
          uVar4 = uVar12;
        }
        uVar12 = param_1[10];
        if (uVar4 <= param_1[10]) {
          uVar12 = uVar4;
        }
        uVar4 = param_1[0xb];
        if (uVar12 <= param_1[0xb]) {
          uVar4 = uVar12;
        }
        uVar12 = param_1[0xc];
        if (uVar4 <= param_1[0xc]) {
          uVar12 = uVar4;
        }
        uVar4 = param_1[0xd];
        if (uVar12 <= param_1[0xd]) {
          uVar4 = uVar12;
        }
        uVar12 = param_1[0xe];
        if (uVar4 <= param_1[0xe]) {
          uVar12 = uVar4;
        }
        uVar4 = param_1[0xf];
        if (uVar12 <= param_1[0xf]) {
          uVar4 = uVar12;
        }
        uVar15 = (ulonglong)(uVar4 & 0xffff);
        if (0x7fff < (ushort)uVar4) {
          uVar4 = param_1[0x2c] & 0xffe5;
          if ((uVar4 != 0) &&
             ((param_1[0x2c] >> (*(byte *)(*(longlong *)(param_1 + 0x24) + 6 + uVar15 * 8) & 0x1f) &
              1) == 0)) {
            uVar12 = 0;
            if (uVar4 != 0) {
              for (; (uVar4 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
              }
            }
            uVar15 = (ulonglong)(ushort)param_1[uVar12];
          }
        }
        uVar4 = FUN_1804d20f0(param_1,uVar15);
      }
      else {
        uVar12 = (param_1[0x2a] & 0xff00) << 8 | uVar4 << 0x18;
        uVar4 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> uVar4 == 0; uVar4 = uVar4 - 1) {
          }
        }
        uVar4 = uVar4 ^ 0x18;
      }
      lVar10 = *(longlong *)(param_1 + 0x20);
      param_1[0x2b] = param_1[0x2b] | 1 << (uVar4 & 0x1f);
      bVar1 = *(byte *)(param_2 + 2);
      *(byte *)(lVar10 + -1) = (byte)uVar4 & 7 | 200;
      uVar5 = 0x605fd9U >> (bVar1 & 0x1f) & 1;
      *(undefined4 *)(lVar10 + -5) = 0x8b0000fe;
      uVar12 = uVar4 >> 3 & 1;
      if (uVar5 == 0 && uVar12 == 0) {
        lVar8 = -2;
      }
      else {
        lVar8 = -3;
        *(byte *)(lVar10 + -3) = (byte)uVar12 | (char)uVar5 * '\b' | 0x40;
      }
      *(longlong *)(param_1 + 0x20) = lVar8 + lVar10;
    }
    bVar1 = *(byte *)(lVar3 + 6 + uVar13 * 8);
    if ((char)bVar1 < '\0') {
      uVar12 = FUN_1804d1420(param_1,uVar2,2);
    }
    else {
      uVar12 = (uint)bVar1;
      if (bVar1 != 1) {
        uVar5 = param_1[0x2a] & 2;
        if (uVar5 == 0) {
          uVar5 = 0xffffffff;
          if (param_1[1] != 0xffffffff) {
            uVar5 = param_1[1];
          }
          uVar13 = (ulonglong)(uVar5 & 0xffff);
          if (0x7fff < (ushort)uVar5) {
            uVar5 = param_1[0x2c] & 2;
            if ((uVar5 != 0) &&
               ((param_1[0x2c] >> (*(byte *)(*(longlong *)(param_1 + 0x24) + 6 + uVar13 * 8) & 0x1f)
                & 1) == 0)) {
              uVar14 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
                }
              }
              uVar13 = (ulonglong)(ushort)param_1[uVar14];
            }
          }
          uVar14 = FUN_1804d20f0(param_1,uVar13);
        }
        else {
          uVar14 = 0x1f;
          if (uVar5 != 0) {
            for (; (uVar5 << 0x18) >> uVar14 == 0; uVar14 = uVar14 - 1) {
            }
          }
          uVar14 = uVar14 ^ 0x18;
        }
        param_1[0x2b] = param_1[0x2b] | 1 << (uVar14 & 0x1f);
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x20);
    uVar14 = param_3 + (-(uint)((0x605fd9U >> (*(byte *)(param_2 + 2) & 0x1f) & 1) != 0) & 0x80200);
    *(byte *)(lVar3 + -1) = (((byte)uVar14 & 7) << 3 | (byte)uVar4 & 7) - 0x40;
    *(undefined4 *)(lVar3 + -5) = 0xd30000fe;
    uVar5 = uVar14 >> 1 & 0x104 | uVar4 >> 3 & 1;
    if (uVar5 == 0) {
      lVar10 = -4;
      lVar16 = -7;
      lVar8 = -5;
    }
    else {
      lVar17 = -3;
      lVar18 = -4;
      lVar16 = -8;
      *(byte *)(lVar3 + -3) = (byte)uVar5 | (byte)(uVar14 >> 0x10) | 0x40;
      lVar8 = -6;
      lVar10 = -5;
    }
    *(longlong *)(param_1 + 0x20) = lVar17 + lVar3;
    param_1[0x2c] = param_1[0x2c] & ~(1 << (uVar12 & 0x1f));
    if (uVar12 == 1) goto LAB_1804c6573;
    *(byte *)(lVar18 + lVar3) = ((byte)uVar12 & 7) - 0x38;
    *(undefined4 *)(lVar16 + lVar3) = 0x8b0000fe;
    if ((uVar12 & 8) != 0) {
      *(byte *)(lVar8 + lVar3) = (byte)(uVar12 >> 3) & 1 | 0x40;
      lVar10 = lVar8;
    }
    lVar10 = lVar10 + lVar3;
    goto LAB_1804c656c;
  }
  uVar4 = FUN_1804d1530(param_1,param_2,0xffe7);
  if (*(char *)(lVar3 + 5 + uVar13 * 8) == '\x17') {
    uVar12 = *(uint *)(lVar3 + uVar13 * 8);
  }
  else {
    uVar12 = *(uint *)(lVar3 + 8 + uVar13 * 8);
  }
  uVar12 = ((0x605fd9U >> (*(byte *)(param_2 + 2) & 0x1f) & 1) << 5 | 0x1f) & uVar12;
  cVar11 = (char)uVar12;
  if (param_4 == 0) {
    if (uVar12 == 0) goto LAB_1804c6573;
    if (((param_1[0x2e] & 0x40) != 0) &&
       (uVar5 = FUN_1804c86c0(param_1,*param_2,0xffe7), uVar5 != uVar4)) {
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
      cVar9 = -cVar11;
      if (param_3 != 0) {
        cVar9 = cVar11;
      }
      **(char **)(param_1 + 0x20) = cVar9;
      FUN_1804d0390(param_1,(0x605fd9U >> (*(byte *)(param_2 + 2) & 0x1f) & 1) << 0x17 | 0xf07be3c4,
                    uVar4,uVar5);
      return;
    }
  }
  if (uVar12 == 0) goto LAB_1804c6573;
  if (uVar12 == 1) {
    lVar10 = *(longlong *)(param_1 + 0x20);
    uVar5 = param_3 + (-(uint)((0x605fd9U >> (*(byte *)(param_2 + 2) & 0x1f) & 1) != 0) & 0x80200);
    *(byte *)(lVar10 + -1) = (((byte)uVar5 & 7) << 3 | (byte)uVar4 & 7) - 0x40;
    *(undefined4 *)(lVar10 + -5) = 0xd10000fe;
    uVar12 = uVar5 >> 1 & 0x104 | uVar4 >> 3 & 1;
    if (uVar12 == 0) goto LAB_1804c6153;
    *(byte *)(lVar10 + -3) = (byte)uVar12 | (byte)(uVar5 >> 0x10) | 0x40;
    lVar10 = lVar10 + -3;
  }
  else {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
    **(char **)(param_1 + 0x20) = cVar11;
    lVar10 = *(longlong *)(param_1 + 0x20);
    uVar5 = param_3 + (-(uint)((0x605fd9U >> (*(byte *)(param_2 + 2) & 0x1f) & 1) != 0) & 0x80200);
    *(byte *)(lVar10 + -1) = (((byte)uVar5 & 7) << 3 | (byte)uVar4 & 7) - 0x40;
    *(undefined4 *)(lVar10 + -5) = 0xc10000fe;
    uVar12 = uVar5 >> 1 & 0x104 | uVar4 >> 3 & 1;
    if (uVar12 == 0) {
LAB_1804c6153:
      lVar10 = lVar10 + -2;
    }
    else {
      *(byte *)(lVar10 + -3) = (byte)uVar12 | (byte)(uVar5 >> 0x10) | 0x40;
      lVar10 = lVar10 + -3;
    }
  }
LAB_1804c656c:
  *(longlong *)(param_1 + 0x20) = lVar10;
LAB_1804c6573:
  FUN_1804d1e20(param_1,uVar4,*param_2);
  return;
}



/* ===== 1804c65a0 FUN_1804c65a0 ===== */

void FUN_1804c65a0(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ushort *puVar7;
  uint uVar8;
  undefined4 uVar9;
  
  uVar3 = FUN_1804d1530(param_1,param_2,0xffe7);
  uVar1 = param_2[1];
  if (uVar1 == 0) {
    uVar8 = ~(1 << (uVar3 & 0x1f)) & 0xffe7;
    uVar4 = uVar8 & *(uint *)(param_1 + 0xa8);
    if (uVar4 == 0) {
      uVar4 = FUN_1804d18c0(param_1,uVar8);
    }
    else {
      uVar8 = (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar4 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> uVar4 == 0; uVar4 = uVar4 - 1) {
        }
      }
      uVar4 = uVar4 ^ 0x18;
    }
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar4 & 0x1f);
    if (uVar4 < 0x10) {
      FUN_1804d0810(param_1,0x890000fe,uVar4 + 0x80200,uVar3,0);
      uVar4 = uVar4 + 0x80200;
      uVar5 = 0x8b0000fe;
    }
    else {
      FUN_1804d0810(param_1,0x110ff3fc,uVar4,uVar3,0);
      uVar5 = 0x100ff3fc;
    }
    uVar9 = 0x10;
  }
  else {
    if (uVar1 == 1) {
      uVar6 = (ulonglong)*param_2;
      lVar2 = *(longlong *)(param_1 + 0x90);
      puVar7 = (ushort *)(lVar2 + uVar6 * 8);
      if (((*(char *)(lVar2 + 6 + uVar6 * 8) < '\0') && (puVar7 != param_2 + -4)) &&
         ((puVar7 != param_2 + -8 ||
          ((-1 < (char)param_2[-1] || (*(char *)((longlong)param_2 + -1) != '\0')))))) {
        for (; (*(char *)((longlong)puVar7 + 5) != 'U' || (puVar7[1] != 0));
            puVar7 = (ushort *)(lVar2 + (ulonglong)*puVar7 * 8)) {
        }
        if (*puVar7 < 0x8000) {
          uVar4 = FUN_1804d1420(param_1,uVar6,0xffe7);
          *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | 1 << (uVar4 & 0x1f);
          param_2 = puVar7;
        }
      }
      goto LAB_1804c67b5;
    }
    if (uVar1 != 2) goto LAB_1804c67b5;
    uVar8 = ~(1 << (uVar3 & 0x1f)) & 0xffe7;
    uVar4 = uVar8 & *(uint *)(param_1 + 0xa8);
    if (uVar4 == 0) {
      uVar8 = FUN_1804d18c0(param_1,uVar8);
    }
    else {
      uVar4 = (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar8 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> uVar8 == 0; uVar8 = uVar8 - 1) {
        }
      }
      uVar8 = uVar8 ^ 0x18;
    }
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar8 & 0x1f);
    if (uVar8 < 0x10) {
      uVar5 = 0x890000fe;
      uVar4 = uVar8 + 0x80200;
    }
    else {
      uVar5 = 0x110ff3fc;
      uVar4 = uVar8;
    }
    FUN_1804d0810(param_1,uVar5,uVar4,uVar3,0x18);
    FUN_1804d0600(param_1,0xb0000fe,uVar8 | 0x80200,*(longlong *)(param_1 + 0x98) + -0x170);
    FUN_1804cfda0(param_1,0x838104,uVar8,7);
    uVar9 = 0x18;
    uVar4 = uVar8 + 0x80200;
    if (0xf < uVar8) {
      uVar4 = uVar8;
    }
    uVar5 = 0x8b0000fe;
    if (0xf < uVar8) {
      uVar5 = 0x100ff3fc;
    }
  }
  FUN_1804d0810(param_1,uVar5,uVar4,uVar3,uVar9);
LAB_1804c67b5:
  FUN_1804d1e20(param_1,uVar3,*param_2);
  return;
}



/* ===== 1804c67d0 FUN_1804c67d0 ===== */

void FUN_1804c67d0(longlong param_1,ushort *param_2)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort uVar7;
  undefined **ppuVar8;
  int iVar9;
  uint local_48;
  uint local_44;
  uint local_40;
  
  uVar7 = param_2[1];
  uVar6 = (ulonglong)uVar7;
  ppuVar8 = &PTR_FUN_18056efe0;
  lVar4 = *(longlong *)(param_1 + 0x90);
  local_48 = (uint)*param_2;
  local_44 = (uint)uVar7;
  cVar1 = *(char *)(lVar4 + 5 + uVar6 * 8);
  if (cVar1 == '\x18') {
    lVar5 = *(longlong *)(lVar4 + 8 + uVar6 * 8);
    if (*(int *)(lVar5 + 0x14) == 1) {
      iVar9 = (int)*(char *)(lVar5 + 0x18);
      local_44 = 0x7ffd;
      FUN_1804cda10(param_1,param_2,&PTR_FUN_18056eff0);
      FUN_1804c9160(param_1,&PTR_FUN_18056eff0,&local_48);
      goto LAB_1804c690e;
    }
  }
  else if ((!(local_44 < *(uint *)(param_1 + 0xf8) || (uint)uVar7 == *(uint *)(param_1 + 0xf8))) &&
          (*(char *)(lVar4 + 6 + uVar6 * 8) < '\0')) {
    if (cVar1 == ']') {
      sVar3 = *(short *)(lVar4 + 2 + uVar6 * 8);
      if (sVar3 == 1) {
        local_44 = 0x7ffd;
        iVar9 = -0x81;
        FUN_1804cda10(param_1,param_2,&PTR_LAB_18056ef50);
        FUN_1804c9160(param_1,&PTR_LAB_18056ef50,&local_48);
        goto LAB_1804c690e;
      }
      uVar7 = *(ushort *)(lVar4 + uVar6 * 8);
      local_44 = (uint)uVar7;
      if (sVar3 == 0) {
        ppuVar8 = &PTR_FUN_18056ef40;
      }
      else {
        ppuVar8 = &PTR_FUN_18056eff0;
      }
    }
    else if (cVar1 == 'O') {
      uVar7 = *(ushort *)(lVar4 + uVar6 * 8);
      ppuVar8 = &PTR_FUN_18056efd0;
      local_44 = (uint)uVar7;
      local_40 = (uint)*(ushort *)(lVar4 + 2 + uVar6 * 8);
    }
  }
  FUN_1804cda10(param_1,param_2,ppuVar8);
  FUN_1804c9160(param_1,ppuVar8,&local_48);
  iVar9 = -0x81;
  if (uVar7 != 0x7ffd) {
    return;
  }
LAB_1804c690e:
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x3ffee);
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar2 & 0x1f);
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar2 & 0x1f);
  *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x3ffee) = 0xff;
  if (iVar9 == -0x81) {
    FUN_1804cf530(param_1,bVar2,*(undefined2 *)(lVar4 + uVar6 * 8),1);
    return;
  }
  FUN_1804cfe80(param_1,bVar2,iVar9);
  return;
}



/* ===== 1804c6980 FUN_1804c6980 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804c6980(longlong param_1,ushort *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ushort *puVar7;
  uint *puVar8;
  ushort uVar9;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  uint local_120;
  uint local_118;
  uint local_114 [63];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_148;
  local_120 = FUN_1804c6b60();
  uVar2 = local_120 & 0x100;
  if (uVar2 != 0) {
    local_118 = 0x7fff;
  }
  uVar5 = ((local_120 & 0xff) - 1) + (uint)(uVar2 == 0);
  uVar6 = (ulonglong)uVar5;
  puVar8 = &local_118;
  if (uVar2 != 0) {
    puVar8 = local_114;
  }
  puVar7 = param_2;
  if (1 < uVar5) {
    lVar3 = *(longlong *)(param_1 + 0x90);
    do {
      uVar9 = *puVar7;
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
      puVar7 = (ushort *)(lVar3 + (ulonglong)uVar9 * 8);
      uVar9 = *(ushort *)(lVar3 + 2 + (ulonglong)uVar9 * 8);
      uVar2 = 0;
      if (uVar9 != 0x7fff) {
        uVar2 = (uint)uVar9;
      }
      puVar8[uVar6] = uVar2;
    } while (1 < uVar5);
  }
  uVar2 = 0;
  if (*puVar7 != 0x7fff) {
    uVar2 = (uint)*puVar7;
  }
  *puVar8 = uVar2;
  FUN_1804cda10(param_1,param_2,&local_128);
  uVar9 = param_2[1];
  lVar4 = *(longlong *)(param_1 + 0x90);
  lVar3 = (ulonglong)uVar9 * 8;
  if (*(char *)(lVar3 + 5 + lVar4) == 'd') {
    uVar9 = *(ushort *)(lVar3 + lVar4);
    lVar3 = (ulonglong)uVar9 * 8;
  }
  if (uVar9 < 0x8000) {
    if (*(char *)(lVar3 + 5 + lVar4) == '\x1d') {
      local_128 = *(ulonglong *)(lVar3 + 8 + lVar4);
    }
    else {
      local_128 = (ulonglong)*(uint *)(lVar3 + lVar4);
    }
    if (local_128 - *(longlong *)(param_1 + 0x80) !=
        (longlong)((int)local_128 - (int)*(longlong *)(param_1 + 0x80))) goto LAB_1804c6aa9;
    if (local_128 != 0) goto LAB_1804c6b1e;
  }
  else {
LAB_1804c6aa9:
    local_128 = 0;
  }
  bVar1 = *(byte *)(lVar4 + 6 + (ulonglong)uVar9 * 8);
  uVar2 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    uVar2 = FUN_1804d1420(param_1,uVar9,0xf0e0);
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar2 & 0x1f));
  *(byte *)(lVar3 + -1) = ((byte)uVar2 & 7) - 0x30;
  *(undefined4 *)(lVar3 + -5) = 0xff0000fe;
  if ((uVar2 & 8) == 0) {
    lVar4 = -2;
  }
  else {
    lVar4 = -3;
    *(byte *)(lVar3 + -3) = (byte)(uVar2 >> 3) & 1 | 0x40;
  }
  *(longlong *)(param_1 + 0x80) = lVar4 + lVar3;
LAB_1804c6b1e:
  FUN_1804c9160(param_1,&local_128,&local_118);
  return;
}



/* ===== 1804c6b60 FUN_1804c6b60 ===== */

uint FUN_1804c6b60(longlong param_1,ushort *param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)*param_2;
  uVar4 = 0;
  if (*param_2 != 0x7fff) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    uVar4 = 1;
    cVar1 = *(char *)(lVar2 + 5 + uVar3 * 8);
    while (cVar1 == 'd') {
      uVar3 = (ulonglong)*(ushort *)(lVar2 + uVar3 * 8);
      uVar4 = uVar4 + 1;
      cVar1 = *(char *)(lVar2 + 5 + uVar3 * 8);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  if (*(char *)(lVar2 + 5 + (ulonglong)param_2[1] * 8) == 'd') {
    uVar4 = uVar4 | *(uint *)(**(longlong **)(*(longlong *)(param_1 + 0x98) + -0x160) +
                             (ulonglong)
                             *(uint *)(lVar2 + (ulonglong)
                                               *(ushort *)(lVar2 + 2 + (ulonglong)param_2[1] * 8) *
                                               8) * 0x18) >> 0xc & 0x800;
  }
  return (uint)(byte)param_2[2] << 0x10 | uVar4;
}



/* ===== 1804c6bf0 FUN_1804c6bf0 ===== */

void FUN_1804c6bf0(longlong param_1,ushort *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  int local_res8 [2];
  undefined4 local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x90) + (ulonglong)*param_2 * 8);
  uVar4 = FUN_1804ab410(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + -0x160),iVar3,local_res8);
  *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
  FUN_1804cda10(param_1,param_2,&PTR_FUN_18056f170);
  uVar2 = param_2[1];
  uVar8 = (ulonglong)uVar2;
  if (*(char *)((longlong)param_2 + 5) == 'T') {
    lVar7 = *(longlong *)(param_1 + 0x90);
    uVar4 = 0;
    if (local_res8[0] == 8) {
      uVar4 = 0x80200;
    }
    if (uVar2 < 0x8000) {
      cVar1 = *(char *)(lVar7 + 5 + uVar8 * 8);
      if (((cVar1 - 0x19U & 0xfa) == 0) && (cVar1 != '\x1e')) {
        uVar8 = *(ulonglong *)(lVar7 + 8 + uVar8 * 8);
      }
      else {
        uVar8 = (ulonglong)*(uint *)(lVar7 + uVar8 * 8);
      }
      bVar9 = (byte)(uVar4 >> 0x10);
      if ((local_res8[0] != 4) && (uVar8 != (longlong)(int)uVar8)) {
        lVar7 = *(longlong *)(param_1 + 0x80);
        *(undefined1 *)(lVar7 + -1) = 0x10;
        *(undefined1 *)(lVar7 + -2) = 0x48;
        *(undefined4 *)(lVar7 + -6) = 0x890000fe;
        if ((uVar4 & 0x208) == 0) {
          lVar6 = -3;
        }
        else {
          lVar6 = -4;
          *(byte *)(lVar7 + -4) = bVar9 | 0x40;
        }
        *(longlong *)(param_1 + 0x80) = lVar6 + lVar7;
        FUN_1804d0150(param_1,1,uVar8);
        goto LAB_1804c6d65;
      }
      *(int *)(*(longlong *)(param_1 + 0x80) + -4) = (int)uVar8;
      lVar7 = *(longlong *)(param_1 + 0x80);
      *(undefined2 *)(lVar7 + -6) = 0x1040;
      *(undefined4 *)(lVar7 + -10) = 0xc70000fe;
      if ((uVar4 & 0x208) == 0) {
        lVar6 = -7;
      }
      else {
        lVar6 = -8;
        *(byte *)(lVar7 + -8) = bVar9 | 0x40;
      }
      lVar7 = lVar7 + lVar6;
    }
    else {
      bVar9 = *(byte *)(lVar7 + 6 + uVar8 * 8);
      uVar5 = (uint)bVar9;
      if ((char)bVar9 < '\0') {
        uVar5 = FUN_1804d1420(param_1,uVar8,0xf0e0);
      }
      uVar4 = uVar5 + uVar4;
      lVar7 = *(longlong *)(param_1 + 0x80);
      *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar5 & 0x1f));
      *(undefined1 *)(lVar7 + -1) = 0x10;
      *(byte *)(lVar7 + -2) = ((byte)uVar4 & 7) << 3 | 0x40;
      *(undefined4 *)(lVar7 + -6) = 0x890000fe;
      if ((uVar4 & 0x208) == 0) {
        lVar7 = lVar7 + -3;
      }
      else {
        *(byte *)(lVar7 + -4) = (byte)(uVar4 >> 1) & 4 | (byte)(uVar4 >> 0x10) | 0x40;
        lVar7 = lVar7 + -4;
      }
    }
    *(longlong *)(param_1 + 0x80) = lVar7;
  }
  else if (uVar2 != 0x7fff) {
    local_24 = (uint)*param_2;
    local_28 = 0x7fff;
    local_1c = 0x7ffd;
    local_20 = (uint)uVar2;
    FUN_1804c9160(param_1,&PTR_FUN_18056f4d0,&local_28);
    bVar9 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x3ffee);
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar9 & 0x1f);
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar9 & 0x1f);
    uVar4 = uVar4 >> 0x10 & 0xf;
    *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x3ffee) = 0xff;
    goto LAB_1804c6e38;
  }
LAB_1804c6d65:
  lVar7 = *(longlong *)(param_1 + 0x80);
  *(undefined2 *)(lVar7 + -2) = 0x848;
  *(undefined4 *)(lVar7 + -6) = 0x890000fe;
  *(longlong *)(param_1 + 0x80) = lVar7 + -3;
  FUN_1804cfda0(param_1,0x838101,1,iVar3 << 0x10 | 0xa00);
  FUN_1804cfda0(param_1,0x838104,1,3);
  FUN_1804d0600(param_1,0xb60f00fd,1,*(longlong *)(param_1 + 0x98) + -0x2c8);
  local_28 = 0x7fff;
  local_24 = 0x7ffd;
  FUN_1804c9160(param_1,&PTR_FUN_18056f170,&local_28);
  bVar9 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x3ffee);
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar9 & 0x1f);
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar9 & 0x1f);
  *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x3ffee) = 0xff;
  uVar4 = local_res8[0] + 0x10;
LAB_1804c6e38:
  FUN_1804cfe80(param_1,bVar9,uVar4);
  return;
}



/* ===== 1804c6f60 FUN_1804c6f60 ===== */

void FUN_1804c6f60(longlong param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  byte bVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  char cVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  char cVar22;
  ushort *puVar23;
  uint uVar24;
  
  uVar2 = *(ushort *)(&DAT_180570230 + (ulonglong)*(byte *)((longlong)param_2 + 5) * 2);
  uVar19 = (uint)uVar2;
  if (((byte)param_2[2] & 0x1f) == 0xe) {
    if ((uVar2 >> 0xe & 1) == 0) {
      puVar23 = param_2 + 1;
      puVar10 = param_2;
    }
    else {
      uVar19 = uVar19 ^ 0x6050;
      puVar10 = param_2 + 1;
      puVar23 = param_2;
    }
    uVar2 = *puVar23;
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)*puVar10 * 8);
    uVar7 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar7 = FUN_1804d1420(param_1,*puVar10,0xffff0000);
    }
    lVar21 = *(longlong *)(param_1 + 0x80);
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar7 & 0x1f));
    FUN_1804c9500(param_1,uVar19 >> 4);
    if ((uVar19 >> 0xd & 1) != 0) {
      if ((uVar19 >> 0xc & 1) == 0) {
        FUN_1804c9500();
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x80);
        if (lVar21 == *(longlong *)(param_1 + 0x140)) {
          *(undefined4 *)(param_1 + 0xbc) = 2;
          if (*(longlong *)(param_1 + 0x150) == 0) {
            *(undefined1 *)(lVar5 + -5) = 0x8a;
            *(undefined4 *)(lVar5 + -4) = 0;
            puVar11 = (undefined1 *)(lVar5 + -6);
            *puVar11 = 0xf;
          }
          else {
            *(undefined1 *)(lVar5 + -1) = 0;
            puVar11 = (undefined1 *)(lVar5 + -2);
            *puVar11 = 0x7a;
          }
        }
        else {
          *(undefined1 *)(lVar5 + -2) = 0x7a;
          *(char *)(lVar5 + -1) = (char)lVar21 - (char)lVar5;
          puVar11 = (undefined1 *)(lVar5 + -2);
        }
        *(undefined1 **)(param_1 + 0x80) = puVar11;
      }
    }
    uVar8 = FUN_1804c8200(param_1,uVar2,~(1 << (uVar7 & 0x1f)) & 0xffff0000);
    FUN_1804d0390(param_1,0x2e0f66fc,uVar7,uVar8);
    return;
  }
  uVar3 = *param_2;
  lVar21 = *(longlong *)(param_1 + 0x90);
  uVar4 = param_2[1];
  uVar7 = -(uint)((0x605fd9U >> ((byte)param_2[2] & 0x1f) & 1) != 0) & 0x80200;
  uVar18 = (uint)uVar3;
  if (uVar3 < 0x8000) {
LAB_1804c70fc:
    if (((byte)uVar2 & 0xc) == 0xc) {
      uVar19 = uVar19 ^ 0x53;
    }
    else {
      uVar24 = uVar19 ^ 0x55;
      if (((byte)uVar2 & 10) != 2) {
        uVar24 = uVar19;
      }
      uVar19 = uVar24;
    }
    uVar20 = (ulonglong)uVar4;
    uVar24 = uVar18;
  }
  else {
    uVar20 = (ulonglong)uVar18;
    uVar24 = (uint)uVar4;
    if ((0x7fff < uVar4) && ((byte)(*(char *)(lVar21 + 5 + (ulonglong)uVar3 * 8) + 0xbeU) < 7))
    goto LAB_1804c70fc;
  }
  if (0x7fff < uVar24) {
LAB_1804c7151:
    bVar1 = *(byte *)(lVar21 + 6 + uVar20 * 8);
    uVar18 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar18 = FUN_1804d1420(param_1,uVar20,0xffe7);
    }
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar18 & 0x1f));
    FUN_1804c86c0(param_1,uVar24,~(1 << (uVar18 & 0x1f)) & 0xffe7,uVar7);
    FUN_1804c9500(param_1,uVar19);
    FUN_1804d0390();
    return;
  }
  uVar13 = (ulonglong)uVar24;
  if ((*(char *)(lVar21 + 5 + uVar13 * 8) == '\x1b') ||
     ((0x605fd9U >> (*(byte *)(lVar21 + 4 + uVar13 * 8) & 0x1f) & 1) == 0)) {
    uVar17 = (ulonglong)*(uint *)(lVar21 + uVar13 * 8);
  }
  else {
    uVar17 = (ulonglong)*(int *)(lVar21 + 8 + uVar13 * 8);
    if (*(ulonglong *)(lVar21 + 8 + uVar13 * 8) != uVar17) goto LAB_1804c7151;
  }
  puVar10 = (ushort *)(lVar21 + uVar20 * 8);
  uVar18 = (uint)uVar17;
  cVar15 = (char)uVar17;
  if ((uVar18 == 0) && (((byte)uVar19 & 10) != 2)) {
    bVar6 = true;
    if ((*(char *)((longlong)puVar10 + 5) != '!') ||
       (((puVar10 + 4 != param_2 || (cVar15 <= (char)puVar10[3])) ||
        (*(char *)((longlong)puVar10 + 7) != cVar15)))) goto LAB_1804c73a3;
    uVar20 = (ulonglong)puVar10[1];
    if (puVar10[1] < 0x8000) {
      if ((*(char *)(lVar21 + 5 + uVar20 * 8) == '\x1b') ||
         ((0x605fd9U >> (*(byte *)(lVar21 + 4 + uVar20 * 8) & 0x1f) & 1) == 0)) {
        iVar16 = *(int *)(lVar21 + uVar20 * 8);
      }
      else {
        iVar16 = *(int *)(lVar21 + 8 + uVar20 * 8);
        if (*(longlong *)(lVar21 + 8 + uVar20 * 8) != (longlong)iVar16) goto LAB_1804c730d;
      }
      uVar20 = (ulonglong)*puVar10;
      cVar22 = -0x80;
      uVar24 = 0xffe7;
      cVar15 = -0x80;
      if ((6 < (byte)(*(char *)(lVar21 + 5 + uVar20 * 8) + 0xbeU)) ||
         (bVar1 = *(byte *)(lVar21 + 4 + uVar20 * 8), 1 < (byte)((bVar1 & 0x1f) - 0xf)))
      goto LAB_1804c7328;
      *(byte *)(lVar21 + 4 + uVar20 * 8) = bVar1 & 0xf3 | 0x13;
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + -1;
      iVar9 = FUN_1804c8200(param_1,*puVar10,0xffe7);
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      *(byte *)(lVar21 + 4 + uVar20 * 8) = bVar1;
      if (iVar9 != 0x20) goto LAB_1804c7353;
      FUN_1804c9500(param_1,uVar19);
      *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -1;
      **(undefined1 **)(param_1 + 0x80) = (char)iVar16;
    }
    else {
LAB_1804c730d:
      uVar18 = FUN_1804d13e0(param_1,uVar20,0xffe7);
      uVar24 = ~(1 << (uVar18 & 0x1f)) & 0xffe7;
      iVar16 = 0;
      cVar15 = (char)uVar18;
LAB_1804c7328:
      cVar22 = cVar15;
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + -1;
      FUN_1804c86c0(param_1,*puVar10,uVar24,uVar7);
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
LAB_1804c7353:
      FUN_1804c9500(param_1,uVar19);
      if (cVar22 < '\0') {
        *(int *)(*(longlong *)(param_1 + 0x80) + -4) = iVar16;
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
      }
    }
LAB_1804c72f1:
    FUN_1804d0390();
    goto LAB_1804c72fb;
  }
  bVar6 = false;
LAB_1804c73a3:
  if ((byte)(*(char *)((longlong)puVar10 + 5) + 0xbeU) < 7) {
    bVar1 = (byte)puVar10[2];
    bVar12 = bVar1 & 0x1f;
    if (bVar12 == 0x10) {
      uVar13 = uVar17 & 0xff;
      if (uVar18 == (uint)uVar13) goto LAB_1804c740f;
      goto LAB_1804c73c6;
    }
    if ((((bVar12 - 0xf & 0xfd) != 0) ||
        (uVar13 = (ulonglong)(uint)(int)cVar15, uVar18 != (int)cVar15)) &&
       ((bVar12 != 0x12 ||
        ((uVar18 != (uVar18 & 0xffff) ||
         (uVar13 = (ulonglong)(uint)(int)cVar15, (short)uVar17 != (short)cVar15))))))
    goto LAB_1804c73c6;
LAB_1804c740f:
    *(byte *)(puVar10 + 2) = bVar1 & 0xf3 | 0x13;
    uVar18 = FUN_1804c8200(param_1,uVar20,0xffe7);
    *(byte *)(puVar10 + 2) = bVar1;
    if (uVar18 == 0x20) {
      if (((bVar1 & 0x1f) == 0x10) || ((bVar1 & 0x1f) == 0x12)) {
        uVar19 = uVar19 >> 4;
      }
      FUN_1804c9500(param_1,uVar19);
      *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -1;
      **(undefined1 **)(param_1 + 0x80) = (char)uVar13;
      goto LAB_1804c72f1;
    }
  }
  else {
LAB_1804c73c6:
    uVar18 = FUN_1804c86c0(param_1,uVar20,0xffe7,uVar7);
  }
  FUN_1804c9500(param_1,uVar19);
  if ((!bVar6) || (uVar18 == 0x20)) {
    FUN_1804cfcd0();
  }
  else {
    uVar14 = 0x850000fe;
    if (((param_2[2] & 0x1f) == 0x10) &&
       (uVar14 = 0x840000fe, (0xfU >> ((byte)uVar18 & 0x1f) & 1) == 0)) {
      uVar18 = uVar18 | 0x200;
    }
    FUN_1804d0960(param_1,uVar14,uVar18 + uVar7,uVar18);
    if (puVar10 + 4 == param_2) {
      *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x80);
    }
  }
LAB_1804c72fb:
  return;
}



/* ===== 1804c7530 FUN_1804c7530 ===== */

void FUN_1804c7530(longlong param_1,ushort *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  uVar13 = param_2[1] & 0x1f;
  if ((uVar13 - 0x15 < 2) || (uVar13 == 9)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  bVar1 = (byte)param_2[2];
  uVar15 = (ulonglong)*param_2;
  bVar2 = 1 < uVar13 - 0xd;
  if ((byte)((bVar1 & 0x1f) - 0xd) < 2) {
    uVar6 = FUN_1804d1530(param_1,param_2,0xffff0000);
    if (bVar2) {
      uVar8 = 0x80200;
      if ((uVar13 - 0x14 & 0xfffffffd) == 0) {
        uVar9 = FUN_1804d13e0(param_1,uVar15,0xffe7);
        if (uVar13 == 0x16) {
          uVar12 = *(undefined8 *)(param_1 + 0x80);
          FUN_1804d0600(param_1,0x580ff2fc,uVar6,*(longlong *)(param_1 + 0x98) + 0x140);
          lVar14 = *(longlong *)(param_1 + 0x80);
          *(undefined1 *)(lVar14 + -2) = 0x79;
          *(char *)(lVar14 + -1) = (char)uVar12 - (char)lVar14;
          *(longlong *)(param_1 + 0x80) = lVar14 + -2;
          FUN_1804d0960(param_1,0x850000fe,uVar9 | 0x80200,uVar9);
        }
      }
      else {
        uVar9 = FUN_1804c86c0();
      }
      if ((!bVar3) && (uVar13 != 0x14)) {
        uVar8 = 0;
      }
      uVar12 = 0x2a0ff3fc;
      if ((param_2[2] & 0x1f) == 0xe) {
        uVar12 = 0x2a0ff2fc;
      }
      FUN_1804d0390(param_1,uVar12,uVar8 | uVar6,uVar9);
    }
    else {
      uVar8 = FUN_1804c8200(param_1,uVar15,0xffff0000);
      uVar12 = 0x5a0ff3fc;
      if (uVar13 == 0xe) {
        uVar12 = 0x5a0ff2fc;
      }
      FUN_1804d0390(param_1,uVar12,uVar6,uVar8);
      if (uVar8 == uVar6) {
        return;
      }
    }
    lVar14 = *(longlong *)(param_1 + 0x80);
    *(byte *)(lVar14 + -1) = ((byte)uVar6 & 7) * '\t' + -0x40;
    *(undefined4 *)(lVar14 + -5) = 0x570f00fd;
    uVar13 = uVar6 >> 1 & 0x104 | uVar6 >> 3 & 1;
    if (uVar13 == 0) {
      lVar10 = -3;
    }
    else {
      lVar10 = -4;
      *(byte *)(lVar14 + -4) = (byte)uVar13 | (byte)(uVar6 >> 0x10) | 0x40;
    }
    *(longlong *)(param_1 + 0x80) = lVar10 + lVar14;
  }
  else if (bVar2) {
    if (uVar13 - 0xf < 4) {
      uVar6 = FUN_1804d1530(param_1,param_2,0xffe7);
      if (uVar13 == 0xf) {
        uVar5 = 0xbe0f00fd;
        uVar6 = uVar6 | 0x200;
      }
      else if (uVar13 == 0x10) {
        uVar5 = 0xb60f00fd;
        uVar6 = uVar6 | 0x200;
      }
      else {
        uVar5 = 0xb70f00fd;
        if (uVar13 == 0x11) {
          uVar5 = 0xbf0f00fd;
        }
      }
      uVar7 = FUN_1804c8200(param_1,uVar15,0xffe7);
      FUN_1804d0390(param_1,uVar5,uVar6,uVar7);
    }
    else {
      if ((0x605fd9U >> (bVar1 & 0x1f) & 1) == 0) {
        uVar13 = FUN_1804d1530(param_1,param_2,0xffe7);
        if ((bVar3) && ((param_2[1] & 0x1000) == 0)) {
          uVar5 = FUN_1804c8200(param_1,uVar15,0xffe7);
          FUN_1804d0390(param_1,0x8b0000fe,uVar13,uVar5);
          return;
        }
      }
      else {
        uVar13 = FUN_1804d1530(param_1,param_2,0xffe7);
        if ((!bVar3) && ((param_2[1] & 0x800) != 0)) {
          uVar5 = FUN_1804c8200(param_1,uVar15,0xffe7);
          FUN_1804d0390(param_1,0x630000fe,uVar13 | 0x80200,uVar5);
          return;
        }
      }
      FUN_1804d1e20(param_1,uVar13,uVar15);
    }
  }
  else if ((char)bVar1 < '\0') {
    uVar5 = FUN_1804d13e0(param_1,uVar15,0xffff0000);
    FUN_1804cf320(param_1,param_2,uVar5);
  }
  else {
    uVar6 = FUN_1804d1530(param_1,param_2,0xffe7);
    uVar4 = param_2[2];
    uVar5 = 0x2c0ff3fc;
    if (uVar13 == 0xe) {
      uVar5 = 0x2c0ff2fc;
    }
    if (((byte)uVar4 & 0x1f) == 0x16) {
      if (*(char *)(*(longlong *)(param_1 + 0x90) + 6 + uVar15 * 8) < '\0') {
        uVar7 = FUN_1804d13e0(param_1,uVar15,0xffff0000);
      }
      else {
        uVar7 = FUN_1804d2250(param_1,0xffff0000);
      }
      uVar12 = *(undefined8 *)(param_1 + 0x80);
      uVar6 = uVar6 | 0x80200;
      FUN_1804d0960(param_1,uVar5,uVar6,uVar7);
      uVar11 = 0x580ff2fc;
      if (uVar13 != 0xe) {
        uVar11 = 0x580ff3fc;
      }
      lVar14 = 0x130;
      if (uVar13 != 0xe) {
        lVar14 = 0x104;
      }
      FUN_1804d0600(param_1,uVar11,uVar7,lVar14 + *(longlong *)(param_1 + 0x98));
      lVar14 = *(longlong *)(param_1 + 0x80);
      *(undefined1 *)(lVar14 + -2) = 0x71;
      *(char *)(lVar14 + -1) = (char)uVar12 - (char)lVar14;
      *(longlong *)(param_1 + 0x80) = lVar14 + -2;
      FUN_1804cfcd0(param_1,0x838107,uVar6,1);
      FUN_1804d0960(param_1,uVar5,uVar6,uVar7);
      FUN_1804d1e20(param_1,uVar7,uVar15);
    }
    else {
      uVar7 = FUN_1804c8200(param_1,uVar15,0xffff0000);
      FUN_1804d0390(param_1,uVar5,
                    -(uint)((0x605fd9U >> ((byte)uVar4 & 0x1f) & 1) != 0) & 0x80200 | uVar6,uVar7);
    }
  }
  return;
}



/* ===== 1804c79b0 FUN_1804c79b0 ===== */

void FUN_1804c79b0(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  char cVar10;
  
  if (0x1ff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(*(longlong *)(param_1 + 0x98),4);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x6a0) == 0) {
    for (puVar2 = *(undefined8 **)(param_1 + 0x120); ((ulonglong)puVar2 & 7) != 0;
        puVar2 = (undefined8 *)((longlong)puVar2 + 1)) {
      *(undefined1 *)puVar2 = 0xcc;
    }
    *puVar2 = &DAT_180005048;
    puVar2[1] = &DAT_180004f56;
    *(undefined8 **)(param_1 + 0x120) = puVar2 + 2;
  }
  uVar9 = 0;
  uVar6 = param_2 + 0x1f >> 5;
  if (uVar6 != 0) {
    do {
      uVar8 = (uint)uVar9;
      if (*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x6a0 + uVar9 * 8) == 0) {
        puVar1 = *(undefined1 **)(param_1 + 0x120);
        if (*(undefined1 **)(param_1 + 0x128) <= puVar1 + 0x86) {
                    /* WARNING: Subroutine does not return */
          FUN_1804ccb30(param_1);
        }
        *puVar1 = 0x6a;
        cVar10 = (char)uVar9 * ' ';
        puVar1[1] = cVar10;
        uVar7 = 1;
        puVar4 = puVar1 + 2;
        do {
          puVar3 = puVar4;
          *puVar3 = 0xeb;
          puVar3[2] = 0x6a;
          puVar3[1] = (char)uVar7 * -4 + '~';
          puVar3[3] = (char)uVar7 + cVar10;
          uVar7 = uVar7 + 1;
          puVar4 = puVar3 + 4;
        } while (uVar7 < 0x20);
        *puVar4 = 0x6a;
        puVar3[5] = (char)(uVar8 >> 3);
        if (puVar3 + -0x180004f4b == (undefined1 *)(longlong)((int)puVar4 + 0x7fffb0b1)) {
          puVar3[6] = 0xe9;
          puVar4 = puVar3 + 0xb;
          *(int *)(puVar3 + 7) = -0x7fffb0aa - (int)puVar4;
        }
        else {
          *(undefined2 *)(puVar3 + 6) = 0x25ff;
          puVar4 = puVar3 + 0xc;
          if (uVar8 == 0) {
            puVar5 = puVar1;
          }
          else {
            puVar5 = *(undefined1 **)(*(longlong *)(param_1 + 0x98) + 0x6a0);
          }
          *(int *)(puVar3 + 8) = ((int)puVar5 - (int)puVar4) + -8;
        }
        *(undefined1 **)(*(longlong *)(param_1 + 0x98) + 0xbf8) = puVar4;
        *(undefined1 **)(param_1 + 0x120) = puVar4;
        *(undefined1 **)(param_1 + 0x88) = puVar4 + 0x40;
        *(undefined1 **)(*(longlong *)(param_1 + 0x98) + 0x6a0 + uVar9 * 8) = puVar1;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
    } while (uVar8 + 1 < uVar6);
  }
  return;
}



/* ===== 1804c7b90 FUN_1804c7b90 ===== */

void FUN_1804c7b90(longlong param_1,ushort *param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  
  uVar2 = param_2[1];
  uVar7 = *param_2;
  uVar8 = 0xffff0000;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)uVar2 * 8);
  uVar6 = (uint)bVar1;
  if ((bVar1 & 0x80) == 0) {
    uVar8 = ~(1 << (bVar1 & 0x1f)) & 0xffff0000;
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (bVar1 & 0x1f));
  }
  uVar4 = FUN_1804d1530(param_1,param_2,uVar8);
  if (uVar7 == uVar2) {
    uVar6 = uVar4;
  }
  else if ((bVar1 & 0x80) != 0) {
    iVar5 = FUN_1804cee00(param_1,param_2);
    uVar3 = uVar7;
    if (iVar5 == 0) {
      uVar3 = uVar2;
    }
    uVar6 = FUN_1804c8200(param_1,uVar3,uVar8 & ~(1 << (uVar4 & 0x1f)));
    if (iVar5 == 0) {
      uVar2 = uVar7;
    }
    uVar7 = uVar2;
  }
  FUN_1804d0390(param_1,param_3,uVar4,uVar6);
  FUN_1804d1e20(param_1,uVar4,uVar7);
  return;
}



/* ===== 1804c7c70 FUN_1804c7c70 ===== */

void FUN_1804c7c70(longlong param_1,ushort *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  code *pcVar6;
  uint local_res10;
  uint local_res14;
  
  uVar2 = param_2[1];
  if (uVar2 == 3) {
    uVar3 = FUN_1804d1530(param_1,param_2,0xffff0000);
    uVar4 = FUN_1804c8200(param_1,*param_2,0xffff0000);
    FUN_1804d0390(param_1,0x510ff2fc,uVar3,uVar4);
    return;
  }
  local_res14 = (uint)uVar2;
  if (2 < uVar2) {
    local_res10 = (uint)*param_2;
    FUN_1804cda10(param_1,param_2,&PTR_FUN_18056eed0 + (ulonglong)(uVar2 + 0x3b) * 2);
    FUN_1804c9160(param_1,&PTR_FUN_18056eed0 + (ulonglong)(uVar2 + 0x3b) * 2,&local_res10);
    return;
  }
  if ((*(byte *)(param_1 + 0xb8) & 0x20) != 0) {
    uVar3 = FUN_1804d1530(param_1,param_2,0xffff0000);
    uVar4 = FUN_1804c8200(param_1,*param_2,0xffff0000);
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -1;
    **(char **)(param_1 + 0x80) = (char)uVar2 + '\t';
    FUN_1804d0390(param_1,0xb3a0ffc,uVar3,uVar4);
    cVar1 = (*(char **)(param_1 + 0x80))[1];
    if (cVar1 != ':') {
      **(char **)(param_1 + 0x80) = cVar1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 1) = 0xf;
    }
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -1;
    **(undefined1 **)(param_1 + 0x80) = 0x66;
    return;
  }
  uVar5 = 0xf0001;
  if (-1 < (char)(byte)param_2[3]) {
    uVar5 = ~(1 << ((byte)param_2[3] & 0x1f)) & 0xf0001;
  }
  FUN_1804d1cb0(param_1,uVar5);
  FUN_1804d1850(param_1,param_2,0x10);
  if (uVar2 == 0) {
    pcVar6 = FUN_18000515f;
  }
  else {
    pcVar6 = FUN_180005219;
    if (local_res14 == 1) {
      pcVar6 = FUN_1800051ba;
    }
  }
  FUN_1804cfc80(param_1,pcVar6);
  FUN_1804d1e20(param_1,0x10,*param_2);
  return;
}



/* ===== 1804c7e00 FUN_1804c7e00 ===== */

void FUN_1804c7e00(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  ushort *puVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 0x90);
  bVar2 = *(byte *)(lVar8 + 6 + (param_2 & 0xffffffff) * 8);
  uVar6 = (uint)bVar2;
  puVar1 = (ushort *)(lVar8 + (param_2 & 0xffffffff) * 8);
  if ((char)bVar2 < '\0') {
    cVar3 = *(char *)((longlong)puVar1 + 5);
    if (cVar3 == '8') {
      if (*(uint *)(param_1 + 0xf8) < (uint)param_2) {
        FUN_1804c7f90(param_1,puVar1,param_3);
        return;
      }
    }
    else if (cVar3 == '9') {
      if (*(uint *)(param_1 + 0xf8) < (uint)param_2) {
        uVar5 = FUN_1804d13e0(param_1,*puVar1,param_3);
        *(undefined1 *)(param_1 + 0xa4) = uVar5;
        uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x90) + 2 + (ulonglong)puVar1[1] * 8);
        *(undefined1 *)(param_1 + 0xa5) = 0x80;
        *(uint *)(param_1 + 0xa0) = (uint)uVar4 * 0x18;
        return;
      }
    }
    else if (cVar3 == '=') {
      if (*puVar1 < 0x8000) {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar8 + 8 + (ulonglong)*puVar1 * 8) + 0x28 +
                 (ulonglong)(puVar1[1] >> 8) * 8) - *(longlong *)(param_1 + 0x98);
        iVar7 = (int)(lVar8 + -0xca8);
        if ((lVar8 + -0xca8 == (longlong)iVar7) &&
           (lVar8 + -0xca4 == (longlong)((int)lVar8 + -0xca4))) {
          *(int *)(param_1 + 0xa0) = iVar7;
          *(undefined2 *)(param_1 + 0xa4) = 0x8003;
          return;
        }
      }
    }
    else if (cVar3 == '?') {
      *(undefined4 *)(param_1 + 0xa0) = 0xfffff148;
      *(undefined2 *)(param_1 + 0xa4) = 0x8003;
      return;
    }
  }
  if ((char)bVar2 < '\0') {
    uVar6 = FUN_1804d1420(param_1,param_2,param_3);
  }
  *(char *)(param_1 + 0xa4) = (char)uVar6;
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar6 & 0x1f));
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0x80;
  return;
}



/* ===== 1804c7f90 FUN_1804c7f90 ===== */

void FUN_1804c7f90(longlong param_1,ushort *param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar11 = (ulonglong)*param_2;
  lVar4 = *(longlong *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  cVar1 = *(char *)(lVar4 + 5 + uVar11 * 8);
  if (cVar1 == 'E') {
    uVar3 = *(ushort *)(lVar4 + uVar11 * 8);
    if (((*(char *)(lVar4 + 5 + (ulonglong)uVar3 * 8) != 'Q') ||
        (0x10 < *(ushort *)(lVar4 + (ulonglong)uVar3 * 8))) || (*(int *)(param_1 + 0xf8) == -1))
    goto LAB_1804c802d;
    lVar10 = param_1;
    iVar5 = FUN_1804d12f0(param_1,uVar3,0x3b,0);
    if (iVar5 == 0) goto LAB_1804c802d;
    *(undefined4 *)(lVar10 + 0xa0) = 0x40;
  }
  else {
    if ((cVar1 != ')') ||
       (uVar3 = *(ushort *)(lVar4 + 2 + uVar11 * 8), uVar8 = (ulonglong)uVar3, 0x7fff < uVar3))
    goto LAB_1804c802d;
    if (*(char *)(lVar4 + 5 + uVar8 * 8) == '\x17') {
      uVar9 = *(undefined4 *)(lVar4 + uVar8 * 8);
    }
    else {
      uVar9 = *(undefined4 *)(lVar4 + 8 + uVar8 * 8);
    }
    *(undefined4 *)(param_1 + 0xa0) = uVar9;
  }
  uVar11 = (ulonglong)*(ushort *)(lVar4 + uVar11 * 8);
LAB_1804c802d:
  bVar2 = *(byte *)(lVar4 + 6 + uVar11 * 8);
  uVar6 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar6 = FUN_1804d1420(param_1,uVar11,param_3);
  }
  *(char *)(param_1 + 0xa4) = (char)uVar6;
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar6 & 0x1f));
  if (param_2[1] < 0x8000) {
    *(int *)(param_1 + 0xa0) =
         *(int *)(param_1 + 0xa0) +
         *(int *)(*(longlong *)(param_1 + 0x90) + (ulonglong)param_2[1] * 8) * 8;
    *(undefined1 *)(param_1 + 0xa5) = 0x80;
    return;
  }
  *(undefined1 *)(param_1 + 0xa6) = 0xc0;
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)param_2[1] * 8);
  uVar7 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar7 = FUN_1804d1420(param_1,(ulonglong)param_2[1],param_3 & ~(1 << (uVar6 & 0x1f)));
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar7 & 0x1f));
  *(char *)(param_1 + 0xa5) = (char)uVar7;
  return;
}



/* ===== 1804c80f0 FUN_1804c80f0 ===== */

void FUN_1804c80f0(longlong param_1,ushort *param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  
  *(undefined1 *)(param_1 + 0xa5) = 0x80;
  if (*param_2 == 0x7fff) {
    *(uint *)(param_1 + 0xa0) = (uint)param_2[1] * 4 + -0x1000;
    *(undefined1 *)(param_1 + 0xa4) = 3;
    return;
  }
  bVar1 = (&DAT_180570450)[param_2[1]];
  *(uint *)(param_1 + 0xa0) = (uint)bVar1;
  uVar2 = *param_2;
  uVar5 = (ulonglong)uVar2;
  if (uVar2 < 0x8000) {
    if (uVar2 == 0x7fff) {
      *(uint *)(param_1 + 0xa0) = bVar1 | 0xfffff000;
      *(undefined1 *)(param_1 + 0xa4) = 3;
      return;
    }
    if ((byte)(*(char *)(*(longlong *)(param_1 + 0x90) + 5 + uVar5 * 8) - 0x19U) < 2) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 8 + uVar5 * 8) -
              *(longlong *)(param_1 + 0x98);
      iVar6 = (int)lVar4 + -0xcb8 + (uint)bVar1;
      if (lVar4 + ((ulonglong)bVar1 - 0xcb8) == (longlong)iVar6) {
        *(int *)(param_1 + 0xa0) = iVar6;
        *(undefined1 *)(param_1 + 0xa4) = 3;
        return;
      }
    }
  }
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + uVar5 * 8);
  uVar3 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    uVar3 = FUN_1804d1420(param_1,uVar5,param_3);
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar3 & 0x1f));
  *(char *)(param_1 + 0xa4) = (char)uVar3;
  return;
}



/* ===== 1804c8200 FUN_1804c8200 ===== */

ulonglong FUN_1804c8200(longlong param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_2;
  lVar10 = *(longlong *)(param_1 + 0x90);
  bVar3 = *(byte *)(lVar10 + 6 + uVar6 * 8);
  puVar2 = (ushort *)(lVar10 + uVar6 * 8);
  if ((char)bVar3 < '\0') {
    bVar3 = *(byte *)((longlong)puVar2 + 5);
    if (bVar3 == 0x1c) {
      uVar7 = ~*(uint *)(param_1 + 0xac) & *(uint *)(param_1 + 0xa8);
      if (((uVar7 & 0xffff0000) - 1 & uVar7 & 0xffff0000) == 0) {
LAB_1804c8560:
        puVar1 = puVar2 + 4;
        iVar5 = (int)puVar1;
        if (puVar1 == (ushort *)(longlong)iVar5) {
          *(int *)(param_1 + 0xa0) = iVar5;
          *(undefined2 *)(param_1 + 0xa4) = 0x8080;
          return 0x20;
        }
        iVar9 = (iVar5 - *(int *)(param_1 + 0x98)) + -0xcb8;
        if ((longlong)puVar2 + (-0xcb0 - *(longlong *)(param_1 + 0x98)) == (longlong)iVar9) {
          *(int *)(param_1 + 0xa0) = iVar9;
          *(undefined2 *)(param_1 + 0xa4) = 0x8003;
          return 0x20;
        }
        iVar9 = iVar5 - *(int *)(param_1 + 0x80);
        lVar10 = (longlong)puVar1 - *(longlong *)(param_1 + 0x80);
        if ((lVar10 == iVar9) && (lVar10 + 8 == (longlong)(iVar9 + 8))) {
          iVar5 = iVar5 - *(int *)(param_1 + 0x128);
          lVar10 = (longlong)puVar1 - *(longlong *)(param_1 + 0x128);
          if ((lVar10 == iVar5) && (lVar10 + 8 == (longlong)(iVar5 + 8))) {
            *(int *)(param_1 + 0xa0) = iVar9;
            *(undefined2 *)(param_1 + 0xa4) = 0x8025;
            return 0x20;
          }
        }
        if (*(int *)puVar2 == 0) {
          puVar8 = *(undefined8 **)(param_1 + 0x120);
          while (((ulonglong)puVar8 & 7) != 0) {
            *(undefined1 *)puVar8 = 0xcc;
            puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x120) + 1);
            *(undefined8 **)(param_1 + 0x120) = puVar8;
          }
          *puVar8 = *(undefined8 *)puVar1;
          *(int *)puVar2 = *(int *)(param_1 + 0x128) - *(int *)(param_1 + 0x120);
          lVar10 = *(longlong *)(param_1 + 0x120) + 8;
          *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x120) + 0x48;
          *(longlong *)(param_1 + 0x120) = lVar10;
          *(longlong *)(*(longlong *)(param_1 + 0x98) + 0xbf8) = lVar10;
        }
        *(int *)(param_1 + 0xa0) =
             (*(int *)(param_1 + 0x128) - *(int *)(param_1 + 0x80)) - *(int *)puVar2;
        *(undefined2 *)(param_1 + 0xa4) = 0x8025;
        return 0x20;
      }
      goto LAB_1804c84f2;
    }
    if ((param_2 == 0x8000) || (bVar3 == 0x1d)) {
      uVar7 = ~*(uint *)(param_1 + 0xac) & *(uint *)(param_1 + 0xa8);
      if (((uVar7 & 0xffffffe7) - 1 & uVar7 & 0xffe7) == 0) {
        if (param_2 == 0x8000) {
          *(undefined4 *)(param_1 + 0xa0) = 0xfffff1e0;
          *(undefined2 *)(param_1 + 0xa4) = 0x8003;
          return 0x20;
        }
        goto LAB_1804c8560;
      }
LAB_1804c84c5:
      if (bVar3 == 0x45) {
LAB_1804c84ca:
        if (*puVar2 == 0x7fff) {
          FUN_1804c80f0(param_1,puVar2,0);
          return 0x20;
        }
      }
    }
    else {
      if (param_2 <= *(uint *)(param_1 + 0xf8)) goto LAB_1804c84c5;
      uVar7 = 0xffe7;
      if ((param_3 & 0xffe7) != 0) {
        uVar7 = param_3;
      }
      if (bVar3 != 0x47) {
        if (bVar3 != 0x45) {
          if ((byte)(bVar3 + 0xbe) < 3) {
            iVar5 = FUN_1804d12f0(param_1,uVar6,bVar3 + 8,(bVar3 != 0x44) + '\x02');
            if ((iVar5 != 0) && (9 < ((byte)puVar2[2] & 0x1f) - 3)) {
              FUN_1804c7e00();
              return 0x20;
            }
          }
          else if (bVar3 == 0x46) {
            if ((3 < ((byte)puVar2[2] & 0x1f) - 0xf) &&
               (iVar5 = FUN_1804d12f0(param_1,uVar6,0x4e,2), iVar5 != 0)) {
              FUN_1804c8830();
              return 0x20;
            }
          }
          else if (((bVar3 == 0x48) && (*(char *)(lVar10 + 5 + (ulonglong)*puVar2 * 8) == '8')) &&
                  (9 < ((byte)puVar2[2] & 0x1f) - 3)) {
            FUN_1804c7e00(param_1,*puVar2,uVar7);
            *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + (uint)puVar2[1] * 8;
            return 0x20;
          }
          goto LAB_1804c84f2;
        }
        if ((((byte)(((byte)puVar2[2] & 0x1f) - 0x13) < 2) || (((byte)puVar2[2] & 0x1f) - 3 < 10))
           && (iVar5 = FUN_1804d12f0(param_1,uVar6,0x4d,2), iVar5 != 0)) {
          FUN_1804c80f0();
          return 0x20;
        }
        goto LAB_1804c84ca;
      }
      if ((((puVar2[1] & 9) == 0) && (iVar5 = FUN_1804d12f0(param_1,param_2,0xb,2), iVar5 != 0)) &&
         (9 < ((byte)puVar2[2] & 0x1f) - 3)) {
        uVar4 = FUN_1804d13e0();
        *(undefined1 *)(param_1 + 0xa4) = uVar4;
        iVar5 = (uint)*puVar2 * 8 + -0x10;
        goto LAB_1804c8528;
      }
    }
LAB_1804c84f2:
    if ((((*(uint *)(param_1 + 0xa8) & param_3) != 0) || (param_2 < 0x8001)) ||
       ((param_3 != 0 &&
        ((*(char *)((longlong)puVar2 + 7) == '\0' && (*(uint *)(param_1 + 0xfc) <= param_2)))))) {
      uVar6 = FUN_1804d1420(param_1,uVar6,param_3);
      return uVar6;
    }
  }
  else if (param_3 != 0) {
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (bVar3 & 0x1f));
    return (ulonglong)(byte)puVar2[3];
  }
  *(undefined1 *)(param_1 + 0xa4) = 4;
  iVar5 = FUN_1804d2290(param_1,puVar2);
LAB_1804c8528:
  *(int *)(param_1 + 0xa0) = iVar5;
  *(undefined1 *)(param_1 + 0xa5) = 0x80;
  return 0x20;
}



/* ===== 1804c86c0 FUN_1804c86c0 ===== */

ulonglong FUN_1804c86c0(longlong param_1,uint param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (param_4 != 0) {
    if ((0x605fd9U >> (*(byte *)(*(longlong *)(param_1 + 0x90) + 4 + (ulonglong)param_2 * 8) & 0x1f)
        & 1) == 0) {
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)param_2 * 8);
      uVar2 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar2 = FUN_1804d1420(param_1);
      }
      *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar2 & 0x1f));
      return (ulonglong)uVar2;
    }
  }
  uVar3 = FUN_1804c8200(param_1);
  return uVar3;
}



/* ===== 1804c8730 FUN_1804c8730 ===== */

void FUN_1804c8730(longlong param_1,ushort *param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined2 *)(param_1 + 0xa4) = 0x8080;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x18;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)*param_2 * 8);
  uVar3 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    uVar3 = FUN_1804d1420(param_1,*param_2);
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar3 & 0x1f));
  *(char *)(param_1 + 0xa4) = (char)uVar3;
  uVar2 = param_2[1];
  if (uVar2 < 0x8000) {
    *(int *)(param_1 + 0xa0) =
         *(int *)(param_1 + 0xa0) + *(int *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar2 * 8);
    return;
  }
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)uVar2 * 8);
  uVar4 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    uVar4 = FUN_1804d1420(param_1,uVar2,param_3 & ~(1 << (uVar3 & 0x1f)));
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar4 & 0x1f));
  if (*(char *)(param_1 + 0xa4) == -0x80) {
    *(char *)(param_1 + 0xa4) = (char)uVar4;
    return;
  }
  *(char *)(param_1 + 0xa5) = (char)uVar4;
  return;
}



/* ===== 1804c8830 FUN_1804c8830 ===== */

void FUN_1804c8830(longlong param_1,uint param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ushort *puVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)param_2;
  *(undefined1 *)(param_1 + 0xa5) = 0x80;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x90) + 5 + uVar9 * 8);
  puVar8 = (ushort *)(*(longlong *)(param_1 + 0x90) + uVar9 * 8);
  if (((byte)(cVar1 - 0x19U) < 2) &&
     (lVar7 = (*(longlong *)(puVar8 + 4) - *(longlong *)(param_1 + 0x98)) + -0xcb8,
     iVar5 = (int)lVar7, lVar7 == iVar5)) {
    *(int *)(param_1 + 0xa0) = iVar5;
    *(undefined1 *)(param_1 + 0xa4) = 3;
    return;
  }
  if (cVar1 == '@') {
    FUN_1804c8730(param_1,puVar8);
    return;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((((*(int *)(param_1 + 0xf8) != -1) && ((puVar8[2] & 0x40) == 0)) &&
      (*(char *)((longlong)puVar8 + 5) == ')')) && ((char)puVar8[3] < '\0')) {
    iVar5 = FUN_1804cc740(param_1,puVar8[1]);
    if (iVar5 != 0) {
      uVar9 = (ulonglong)*puVar8;
      puVar8 = (ushort *)(*(longlong *)(param_1 + 0x90) + uVar9 * 8);
      if (((*(char *)(*(longlong *)(param_1 + 0x90) + 5 + uVar9 * 8) != ')') ||
          (*(int *)(param_1 + 0xf8) == -1)) || (((puVar8[2] & 0x40) != 0 || (-1 < (char)puVar8[3])))
         ) goto LAB_1804c89f7;
    }
    lVar7 = *(longlong *)(param_1 + 0x90);
    *(undefined1 *)(param_1 + 0xa6) = 0;
    uVar3 = *puVar8;
    uVar4 = puVar8[1];
    uVar6 = (uint)uVar3;
    cVar1 = *(char *)(lVar7 + 5 + (ulonglong)uVar3 * 8);
    uVar9 = (ulonglong)(uint)uVar4;
    puVar8 = (ushort *)(lVar7 + (ulonglong)uVar3 * 8);
    if ((cVar1 != '$') && (cVar1 != ')')) {
      puVar8 = (ushort *)(lVar7 + (ulonglong)uVar4 * 8);
      uVar9 = (ulonglong)uVar6;
      uVar6 = (uint)uVar4;
    }
    if (((*(int *)(param_1 + 0xf8) != -1) && ((puVar8[2] & 0x40) == 0)) && ((char)puVar8[3] < '\0'))
    {
      if (*(char *)((longlong)puVar8 + 5) == '$') {
        if ((puVar8[1] < 0x8000) && (iVar5 = *(int *)(lVar7 + (ulonglong)puVar8[1] * 8), iVar5 < 4))
        {
          uVar6 = (uint)*puVar8;
          *(char *)(param_1 + 0xa6) = (char)iVar5 << 6;
        }
      }
      else if ((*(char *)((longlong)puVar8 + 5) == ')') && (*puVar8 == puVar8[1])) {
        uVar6 = (uint)*puVar8;
        *(undefined1 *)(param_1 + 0xa6) = 0x40;
      }
    }
    uVar6 = FUN_1804d13e0(param_1,uVar6,param_3);
    param_3 = param_3 & ~(1 << (uVar6 & 0x1f));
    *(char *)(param_1 + 0xa5) = (char)uVar6;
  }
LAB_1804c89f7:
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + uVar9 * 8);
  uVar6 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar6 = FUN_1804d1420(param_1,uVar9,param_3);
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar6 & 0x1f));
  *(char *)(param_1 + 0xa4) = (char)uVar6;
  return;
}



/* ===== 1804c8a40 FUN_1804c8a40 ===== */

void FUN_1804c8a40(undefined8 param_1,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xffff0000;
  if (1 < (byte)((*(byte *)(param_2 + 2) & 0x1f) - 0xd)) {
    uVar3 = 0xffe7;
  }
  uVar1 = FUN_1804d1530(param_1,param_2,uVar3);
  if (*(char *)((longlong)param_2 + 5) == 'E') {
    FUN_1804c80f0(param_1,param_2);
  }
  else {
    FUN_1804c8830(param_1,*param_2,0xffe7);
  }
  switch(*(byte *)(param_2 + 2) & 0x1f) {
  case 0xd:
    uVar3 = 0x100ff3fc;
    break;
  case 0xe:
    uVar3 = 0x100ff2fc;
    break;
  case 0xf:
    uVar3 = 0xbe0f00fd;
    break;
  case 0x10:
    uVar3 = 0xb60f00fd;
    break;
  case 0x11:
    uVar3 = 0xbf0f00fd;
    break;
  case 0x12:
    uVar3 = 0xb70f00fd;
    break;
  default:
    uVar3 = 0x8b0000fe;
    uVar2 = uVar1 | 0x80200;
    if ((0x605fd9U >> (*(byte *)(param_2 + 2) & 0x1f) & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2;
  }
  FUN_1804d0390(param_1,uVar3,uVar1,0x20);
  return;
}



/* ===== 1804c8b30 FUN_1804c8b30 ===== */

void FUN_1804c8b30(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  
  if ((char)param_2[3] == -2) {
    return;
  }
  bVar4 = (byte)param_2[2] & 0x1f;
  uVar7 = 0xffe7;
  if ((byte)(bVar4 - 0x11) < 2) {
LAB_1804c8bbf:
    uVar6 = 0xffe7;
  }
  else {
    if (1 < (byte)(bVar4 - 0xd)) {
      uVar1 = param_2[1];
      if (uVar1 < 0x8000) {
        lVar2 = *(longlong *)(param_1 + 0x90);
        uVar3 = 0x80;
        uVar5 = (ulonglong)uVar1;
        if ((*(char *)(lVar2 + 5 + (ulonglong)uVar1 * 8) == '\x1b') ||
           ((0x605fd9U >> (*(byte *)(lVar2 + 4 + (ulonglong)uVar1 * 8) & 0x1f) & 1) == 0)) {
          iVar8 = *(int *)(lVar2 + uVar5 * 8);
          goto LAB_1804c8bf8;
        }
        iVar8 = *(int *)(lVar2 + 8 + uVar5 * 8);
        if (*(longlong *)(lVar2 + 8 + uVar5 * 8) == (longlong)iVar8) goto LAB_1804c8bf8;
      }
      goto LAB_1804c8bbf;
    }
    uVar6 = 0xffff0000;
  }
  iVar8 = 0;
  bVar4 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)param_2[1] * 8);
  uVar3 = (uint)bVar4;
  if ((char)bVar4 < '\0') {
    uVar3 = FUN_1804d1420(param_1,param_2[1],uVar6);
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar3 & 0x1f));
  uVar7 = ~(1 << (uVar3 & 0x1f)) & 0xffe7;
LAB_1804c8bf8:
  if (*(char *)((longlong)param_2 + 5) == 'M') {
    FUN_1804c80f0(param_1,*(longlong *)(param_1 + 0x90) + (ulonglong)*param_2 * 8);
  }
  else {
    FUN_1804c8830(param_1,(ulonglong)*param_2,uVar7);
  }
  if ((char)uVar3 < '\0') {
    if ((byte)(((byte)param_2[2] & 0x1f) - 0xf) < 2) {
      *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -1;
      uVar6 = 0xc60000fe;
      uVar3 = 0;
      **(undefined1 **)(param_1 + 0x80) = (char)iVar8;
    }
    else {
      uVar6 = 0xc70000fe;
      *(int *)(*(longlong *)(param_1 + 0x80) + -4) = iVar8;
      *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
      uVar3 = -(uint)((0x605fd9U >> ((byte)param_2[2] & 0x1f) & 1) != 0) & 0x80200;
    }
  }
  else {
    bVar4 = (byte)param_2[2] & 0x1f;
    switch(bVar4) {
    case 0xd:
      uVar6 = 0x110ff3fc;
      break;
    case 0xe:
      uVar6 = 0x110ff2fc;
      break;
    case 0xf:
    case 0x10:
      uVar3 = uVar3 | 0x200;
      uVar6 = 0x880000fe;
      break;
    case 0x11:
    case 0x12:
      uVar6 = 0x896600fd;
      break;
    default:
      uVar6 = 0x890000fe;
      uVar7 = uVar3 | 0x80200;
      if ((0x605fd9U >> bVar4 & 1) == 0) {
        uVar7 = uVar3;
      }
      uVar3 = uVar7;
    }
  }
  FUN_1804d0390(param_1,uVar6,uVar3,0x20);
  return;
}



/* ===== 1804c8d60 FUN_1804c8d60 ===== */

void FUN_1804c8d60(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_1804d1cb0(param_1,0x3f0f07);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  FUN_1804c9500(param_1,5);
  puVar4 = PTR_FUN_18056f150;
  lVar3 = *(longlong *)(param_1 + 0x80);
  *(undefined1 *)(lVar3 + -1) = 0xc0;
  *(undefined4 *)(lVar3 + -5) = 0x850000fe;
  *(longlong *)(param_1 + 0x80) = lVar3 + -2;
  local_res8 = 0x7ffd;
  local_resc = 0x7ffe;
  if ((lVar3 - (longlong)puVar4) + -2 != (longlong)(((int)lVar3 - (int)puVar4) + -2)) {
    *(undefined1 **)(param_1 + 0x80) = (undefined1 *)(lVar3 + -3);
    *(undefined1 *)(lVar3 + -3) = 0x90;
  }
  FUN_1804c9160(param_1,&PTR_FUN_18056f150,&local_res8);
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x3ffee);
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar1 & 0x1f);
  uVar5 = bVar1 | 0x80200;
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar1 & 0x1f);
  *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x3ffee) = 0xff;
  FUN_1804d0810(param_1,0x8d0000fe,uVar5,3,0xfffff060);
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x3fff6);
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar1 & 0x1f);
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar1 & 0x1f);
  *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x3fff6) = 0xff;
  FUN_1804cfe80(param_1,bVar1,*(undefined4 *)(param_1 + 0x108));
  lVar3 = *(longlong *)(param_1 + 0x80);
  *(undefined1 *)(lVar3 + -2) = 0x72;
  *(char *)(lVar3 + -1) = (char)uVar2 - (char)lVar3;
  *(longlong *)(param_1 + 0x80) = lVar3 + -2;
  FUN_1804d0600(param_1,0x3b0000fe,uVar5,*(longlong *)(param_1 + 0x98) + -0x2d0);
  FUN_1804d0600(param_1,0x8b0000fe,uVar5,*(longlong *)(param_1 + 0x98) + -0x2d8);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804ccb30(param_1);
  }
  return;
}



/* ===== 1804c8f30 FUN_1804c8f30 ===== */

void FUN_1804c8f30(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  for (uVar5 = *(longlong *)(param_1 + 0x90) + (ulonglong)(*(int *)(param_1 + 0xcc) + 1) * 8;
      uVar5 < param_2; uVar5 = uVar5 + 8) {
    if (((byte)(*(char *)(uVar5 + 5) + 0xafU) < 4) &&
       ((-1 < *(char *)(uVar5 + 6) || (*(char *)(uVar5 + 7) != '\0')))) {
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
    }
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    FUN_1804d1cb0(param_1,0x3f0f07);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    FUN_1804c9500(param_1,5);
    puVar4 = PTR_FUN_18056f150;
    lVar3 = *(longlong *)(param_1 + 0x80);
    *(undefined1 *)(lVar3 + -1) = 0xc0;
    *(undefined4 *)(lVar3 + -5) = 0x850000fe;
    *(longlong *)(param_1 + 0x80) = lVar3 + -2;
    local_res8 = 0x7ffd;
    local_resc = 0x7ffe;
    if ((lVar3 - (longlong)puVar4) + -2 != (longlong)(((int)lVar3 - (int)puVar4) + -2)) {
      *(undefined1 **)(param_1 + 0x80) = (undefined1 *)(lVar3 + -3);
      *(undefined1 *)(lVar3 + -3) = 0x90;
    }
    FUN_1804c9160(param_1,&PTR_FUN_18056f150,&local_res8);
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x3ffee);
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar1 & 0x1f);
    uVar6 = bVar1 | 0x80200;
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar1 & 0x1f);
    *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x3ffee) = 0xff;
    FUN_1804d0810(param_1,0x8d0000fe,uVar6,3,0xfffff060);
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x3fff6);
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar1 & 0x1f);
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar1 & 0x1f);
    *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x3fff6) = 0xff;
    FUN_1804cfe80(param_1,bVar1,*(undefined4 *)(param_1 + 0x108));
    lVar3 = *(longlong *)(param_1 + 0x80);
    *(undefined1 *)(lVar3 + -2) = 0x72;
    *(char *)(lVar3 + -1) = (char)uVar2 - (char)lVar3;
    *(longlong *)(param_1 + 0x80) = lVar3 + -2;
    FUN_1804d0600(param_1,0x3b0000fe,uVar6,*(longlong *)(param_1 + 0x98) + -0x2d0);
    FUN_1804d0600(param_1,0x8b0000fe,uVar6,*(longlong *)(param_1 + 0x98) + -0x2d8);
    *(undefined4 *)(param_1 + 0x108) = 0;
    if (*(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88)) {
                    /* WARNING: Subroutine does not return */
      FUN_1804ccb30(param_1);
    }
  }
  *(undefined4 *)(param_1 + 0x108) = 0x80000000;
  return;
}



/* ===== 1804c9160 FUN_1804c9160 ===== */

void FUN_1804c9160(longlong param_1,longlong *param_2,uint *param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  bVar6 = *(byte *)(param_2 + 1);
  lVar2 = *param_2;
  uVar8 = 0x10;
  iVar13 = 0x20;
  uVar15 = 0x4a041;
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x80);
    puVar5 = (undefined4 *)(lVar3 + -5);
    if (lVar2 - lVar3 == (longlong)((int)lVar2 - (int)lVar3)) {
      *(int *)(lVar3 + -4) = (int)(lVar2 - lVar3);
      *(undefined1 *)puVar5 = 0xe8;
      *(undefined4 **)(param_1 + 0x80) = puVar5;
    }
    else {
      *(undefined1 *)(lVar3 + -1) = 0xd0;
      *puVar5 = 0xff0000fe;
      *(longlong *)(param_1 + 0x80) = lVar3 + -2;
      FUN_1804d0150(param_1);
    }
  }
  uVar14 = (uint)bVar6;
  if ((*(uint *)(param_2 + 1) & 0x800) == 0) {
    if (uVar14 == 0) {
      return;
    }
  }
  else {
    if (bVar6 == 0) {
      return;
    }
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x90) + 4 + (ulonglong)*param_3 * 8) & 0x1f;
    if ((byte)(bVar6 - 0xd) < 2) {
      lVar2 = *(longlong *)(param_1 + 0x80);
      *(undefined1 *)(lVar2 + -1) = 0xc1;
      puVar5 = (undefined4 *)(lVar2 + -5);
      *puVar5 = 0x7e0f66fc;
      if (bVar6 == 0xe) {
        *(undefined1 *)(lVar2 + -4) = 0x48;
        *(undefined1 *)puVar5 = 0x66;
      }
      else {
        puVar5 = (undefined4 *)(lVar2 + -4);
      }
      *(undefined4 **)(param_1 + 0x80) = puVar5;
    }
    if (1 < uVar14) {
      bVar6 = *(byte *)(*(longlong *)(param_1 + 0x90) + 4 + (ulonglong)param_3[1] * 8) & 0x1f;
      if ((byte)(bVar6 - 0xd) < 2) {
        lVar2 = *(longlong *)(param_1 + 0x80);
        *(undefined1 *)(lVar2 + -1) = 0xca;
        puVar5 = (undefined4 *)(lVar2 + -5);
        *puVar5 = 0x7e0f66fc;
        if (bVar6 == 0xe) {
          *(undefined1 *)(lVar2 + -4) = 0x48;
          *(undefined1 *)puVar5 = 0x66;
        }
        else {
          puVar5 = (undefined4 *)(lVar2 + -4);
        }
        *(undefined4 **)(param_1 + 0x80) = puVar5;
      }
      if (2 < uVar14) {
        bVar6 = *(byte *)(*(longlong *)(param_1 + 0x90) + 4 + (ulonglong)param_3[2] * 8) & 0x1f;
        if ((byte)(bVar6 - 0xd) < 2) {
          lVar2 = *(longlong *)(param_1 + 0x80);
          uVar4 = 0x41;
          if (bVar6 == 0xe) {
            uVar4 = 0x49;
          }
          *(undefined1 *)(lVar2 + -1) = 0xd0;
          puVar5 = (undefined4 *)(lVar2 + -5);
          *puVar5 = 0x7e0f66fc;
          *(undefined1 *)(lVar2 + -4) = uVar4;
          *(undefined1 *)puVar5 = 0x66;
          *(undefined4 **)(param_1 + 0x80) = puVar5;
        }
        if ((3 < uVar14) &&
           (bVar6 = *(byte *)(*(longlong *)(param_1 + 0x90) + 4 + (ulonglong)param_3[3] * 8) & 0x1f,
           (byte)(bVar6 - 0xd) < 2)) {
          lVar2 = *(longlong *)(param_1 + 0x80);
          uVar4 = 0x41;
          if (bVar6 == 0xe) {
            uVar4 = 0x49;
          }
          *(undefined1 *)(lVar2 + -1) = 0xd9;
          puVar5 = (undefined4 *)(lVar2 + -5);
          *puVar5 = 0x7e0f66fc;
          *(undefined1 *)(lVar2 + -4) = uVar4;
          *(undefined1 *)puVar5 = 0x66;
          *(undefined4 **)(param_1 + 0x80) = puVar5;
        }
      }
    }
  }
  uVar10 = 0;
  while( true ) {
    uVar12 = (ulonglong)param_3[uVar10];
    puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0x90) + uVar12 * 8);
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x90) + 4 + uVar12 * 8) & 0x1f;
    if ((byte)(bVar6 - 0xd) < 2) {
      uVar9 = 0;
      if (uVar8 < 0x14) {
        uVar9 = uVar8;
      }
    }
    else {
      uVar9 = uVar15 & 0x1f;
    }
    if (uVar9 == 0) {
      bVar1 = *(byte *)((longlong)puVar5 + 6);
      uVar11 = (uint)bVar1;
      uVar9 = (uint)bVar1;
      if ((byte)(bVar6 - 0xd) < 2) {
        if ((char)bVar1 < '\0') {
          uVar11 = FUN_1804d1420(param_1,uVar12,0xffff0000);
        }
        *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar11 & 0x1f));
        uVar7 = 0x110ff3fc;
        if ((*(byte *)(puVar5 + 1) & 0x1f) == 0xe) {
          uVar7 = 0x110ff2fc;
        }
      }
      else {
        if ((char)bVar1 < '\0') {
          uVar9 = FUN_1804d1420(param_1,uVar12,0xffe7);
        }
        uVar7 = 0x890000fe;
        *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar9 & 0x1f));
        uVar11 = uVar9 + 0x80200;
      }
      FUN_1804d0810(param_1,uVar7,uVar11,4,iVar13);
      iVar13 = iVar13 + 8;
    }
    else if ((uVar9 < 0x10) && (param_3[uVar10] < 0x7ffd)) {
      if ((*(char *)((longlong)puVar5 + 5) - 0x17U & 0xfb) == 0) {
        FUN_1804cfe80(param_1,uVar9,*puVar5);
      }
      else {
        FUN_1804d0150(param_1,uVar9,*(undefined8 *)(puVar5 + 2));
      }
    }
    else if ((char)*(byte *)((longlong)puVar5 + 6) < '\0') {
      FUN_1804d1420(param_1,uVar12,1 << ((byte)uVar9 & 0x1f));
    }
    else {
      *(uint *)(param_1 + 0xb0) =
           *(uint *)(param_1 + 0xb0) & ~(1 << (*(byte *)((longlong)puVar5 + 6) & 0x1f));
      FUN_1804d0290(param_1,puVar5,uVar9,*(undefined1 *)((longlong)puVar5 + 6));
    }
    if (*(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88)) break;
    uVar8 = uVar8 + 1;
    uVar15 = uVar15 >> 5;
    uVar9 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar9;
    if (uVar14 <= uVar9) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804ccb30(param_1);
}



/* ===== 1804c9500 FUN_1804c9500 ===== */

void FUN_1804c9500(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x98) + 0x6a0 + (ulonglong)(*(uint *)(param_1 + 0xdc) >> 5) * 8)
          + (ulonglong)((*(uint *)(param_1 + 0xdc) & 0x1f) << 2);
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 == *(longlong *)(param_1 + 0x140)) {
    *(undefined4 *)(param_1 + 0xbc) = 1;
    param_2 = param_2 ^ 1;
    *(int *)(lVar1 + 1) = ((int)lVar2 - (int)lVar1) + -5;
    lVar2 = lVar1;
    if (*(longlong *)(param_1 + 0x150) != 0) {
      if (*(char *)(param_1 + 0xa4) == '%') {
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 2;
      }
      lVar2 = *(longlong *)(param_1 + 0x80);
      *(char *)(lVar2 + -1) = (char)lVar1 - (char)lVar2;
      *(byte *)(lVar2 + -2) = param_2 & 0xf | 0x70;
      *(byte **)(param_1 + 0x80) = (byte *)(lVar2 + -2);
      return;
    }
  }
  if (*(char *)(param_1 + 0xa4) == '%') {
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 6;
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  *(undefined1 *)(lVar1 + -6) = 0xf;
  *(int *)(lVar1 + -4) = (int)lVar2 - (int)lVar1;
  *(byte *)(lVar1 + -5) = param_2 & 0xf | 0x80;
  *(longlong *)(param_1 + 0x80) = lVar1 + -6;
  return;
}



/* ===== 1804c95d0 FUN_1804c95d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804c95d0(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_98;
  int local_94;
  uint local_90;
  int local_8c;
  longlong local_88;
  ushort auStack_78 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_c8;
  iVar14 = 0;
  local_94 = 0;
  uVar11 = 0;
  local_98 = 0;
  uVar15 = 0xffffffe7;
  local_88 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x20);
  local_90 = 0xffe7;
  if ((*(int *)(param_1 + 0xdc) != 0) &&
     ((uint)*(byte *)(*(longlong *)(param_1 + 0x118) + 0x73) < *(uint *)(param_1 + 0x104))) {
    FUN_1804ce150(param_1,0);
  }
  lVar5 = *(longlong *)(param_1 + 0x90);
  bVar7 = *(byte *)(lVar5 + 0x40006);
  if (-1 < (char)bVar7) {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar7 & 0x1f);
    if (((*(uint *)(param_1 + 0xac) >> (bVar7 & 0x1f) & 1) != 0) ||
       ((*(byte *)(lVar5 + 0x40004) & 0x20) != 0)) {
      *(undefined1 *)(lVar5 + 0x40006) = 0xff;
    }
    bVar2 = *(byte *)(local_88 + 0x40006);
    if (bVar2 != bVar7) {
      if (((char)bVar2 < '\0') || ((*(uint *)(param_1 + 0xa8) >> (bVar2 & 0x1f) & 1) == 0)) {
        FUN_1804d0600(param_1,0x8b0000fe,bVar7 | 0x80200,*(longlong *)(param_1 + 0x98) + -0x168);
        goto LAB_1804c9763;
      }
      lVar5 = *(longlong *)(param_1 + 0x80);
      *(byte *)(lVar5 + -1) = ((bVar7 & 7) << 3 | bVar2 & 7) - 0x40;
      *(undefined4 *)(lVar5 + -5) = 0x8b0000fe;
      *(byte *)(lVar5 + -3) = bVar2 >> 3 & 1 | bVar7 >> 1 & 4 | 0x48;
      *(byte **)(param_1 + 0x80) = (byte *)(lVar5 + -3);
      bVar7 = *(byte *)(local_88 + 0x40006);
    }
    if (bVar7 != 0x80) {
      uVar15 = ~(1 << (bVar7 & 0x1f)) & 0xffffffe7;
      local_90 = ~(1 << (bVar7 & 0x1f)) & 0xffe7;
    }
  }
LAB_1804c9763:
  uVar16 = *(uint *)(param_1 + 0xcc);
  iVar9 = 0;
  if (0x8000 < uVar16) {
    do {
      lVar5 = *(longlong *)(param_1 + 0x90);
      uVar8 = *(ushort *)(param_1 + 0x1a0 + (ulonglong)(uVar16 - 0x8001) * 2);
      uVar10 = (ulonglong)uVar16;
      bVar7 = *(byte *)(lVar5 + 6 + uVar10 * 8);
      uVar6 = (uint)bVar7;
      bVar2 = *(byte *)(lVar5 + 7 + uVar10 * 8);
      if ((char)bVar7 < '\0') {
        if (bVar2 != 0) {
          pbVar1 = (byte *)(lVar5 + 4 + uVar10 * 8);
          *pbVar1 = *pbVar1 | 0x20;
          local_94 = 1;
        }
      }
      else {
        uVar12 = (uint)bVar7;
        uVar15 = uVar15 & ~(1 << (uVar12 & 0x1f));
        if (bVar2 != 0) {
          bVar3 = *(byte *)(lVar5 + 4 + uVar10 * 8);
          local_a8 = (uint)bVar2 * 4;
          if (bVar7 < 0x10) {
            uVar13 = 0x890000fe;
            uVar12 = -(uint)((0x605fd9U >> (bVar3 & 0x1f) & 1) != 0) & 0x80200 | uVar12;
          }
          else {
            uVar13 = 0x110ff3fc;
            if ((bVar3 & 0x1f) == 0xe) {
              uVar13 = 0x110ff2fc;
            }
          }
          FUN_1804d0810(param_1,uVar13,uVar12,4);
          if (*(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88)) goto LAB_1804c9d8b;
          uVar6 = (uint)*(byte *)(lVar5 + 6 + uVar10 * 8);
        }
      }
      if ((ushort)uVar6 == uVar8) {
        *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (uVar6 & 0x1f);
        if (uVar8 < 0x100) goto LAB_1804c98b4;
LAB_1804c98c2:
        local_98 = iVar14;
      }
      else {
        if (uVar8 < 0x100) {
          if ((-1 < (char)uVar6) || (*(char *)(lVar5 + 7 + uVar10 * 8) != '\0')) {
            auStack_78[uVar8] = (ushort)uVar16;
            uVar11 = uVar11 | 1 << (uVar8 & 0x1f);
          }
LAB_1804c98b4:
          local_90 = local_90 & ~(1 << (uVar8 & 0x1f));
          goto LAB_1804c98c2;
        }
        if (-1 < (char)uVar6) {
          iVar14 = 1;
          local_98 = 1;
        }
      }
      uVar16 = uVar16 - 1;
    } while (0x8000 < uVar16);
    iVar9 = local_94;
  }
  if (*(int *)(param_1 + 0xc0) < 9) {
    local_8c = 0;
  }
  else {
    local_8c = (*(int *)(param_1 + 0xc0) - 5U & 0xfffffffc) << 2;
  }
  uVar8 = *(ushort *)(*(longlong *)(param_1 + 0x118) + 0x66);
  uVar16 = (uint)uVar8;
  local_94 = local_8c - uVar16;
  if (local_94 < 0) {
    local_94 = 0;
    local_8c = 0;
  }
  else {
    uVar8 = (ushort)local_8c;
    local_8c = uVar16 - local_8c;
  }
  *(ushort *)(*(longlong *)(param_1 + 0x110) + 0x66) = uVar8;
  if (iVar9 != 0) {
    for (uVar16 = *(uint *)(param_1 + 0xcc); 0x8000 < uVar16; uVar16 = uVar16 - 1) {
      lVar5 = *(longlong *)(param_1 + 0x90);
      uVar10 = (ulonglong)uVar16;
      bVar7 = *(byte *)(lVar5 + 4 + uVar10 * 8);
      if ((bVar7 & 0x20) != 0) {
        *(byte *)(lVar5 + 4 + uVar10 * 8) = bVar7 & 0xdf;
        uVar8 = *(ushort *)(param_1 + 0x1a0 + (ulonglong)(uVar16 - 0x8001) * 2);
        if (uVar8 < 0x100) {
          *(byte *)(lVar5 + 6 + uVar10 * 8) = (byte)uVar8 | 0x80;
        }
        else if (local_94 + (uint)(uVar8 >> 8) * 4 == (uint)*(byte *)(lVar5 + 7 + uVar10 * 8) << 2)
        goto LAB_1804c9ab2;
        uVar6 = 0xffff0000;
        if (1 < (byte)((bVar7 & 0x1f) - 0xd)) {
          uVar6 = 0xffe7;
        }
        if ((uVar6 & uVar15) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804954a0(*(undefined8 *)(param_1 + 0x98),0x22);
        }
        uVar6 = FUN_1804d1420(param_1,uVar16);
        bVar7 = *(byte *)(lVar5 + 4 + uVar10 * 8);
        local_a8 = (uint)*(byte *)(lVar5 + 7 + uVar10 * 8) * 4;
        if (uVar6 < 0x10) {
          uVar13 = 0x890000fe;
          uVar12 = (-(uint)((0x605fd9U >> (bVar7 & 0x1f) & 1) != 0) & 0x80200) + uVar6;
        }
        else {
          uVar13 = 0x110ff3fc;
          uVar12 = uVar6;
          if ((bVar7 & 0x1f) == 0xe) {
            uVar13 = 0x110ff2fc;
          }
        }
        FUN_1804d0810(param_1,uVar13,uVar12,4);
        uVar15 = uVar15 & ~(1 << (uVar6 & 0x1f));
        if (uVar6 == uVar8) {
          uVar11 = uVar11 & ~(1 << (uVar6 & 0x1f));
          *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (uVar6 & 0x1f);
        }
        else if (0xff < uVar8) {
          local_98 = 1;
        }
        if (*(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88)) goto LAB_1804c9d8b;
      }
LAB_1804c9ab2:
    }
  }
  *(uint *)(*(longlong *)(param_1 + 0x80) + -4) =
       (uint)*(ushort *)(*(longlong *)(param_1 + 0x110) + 0x68);
  *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
  FUN_1804d0600(param_1,0xc70000fe,0,*(longlong *)(param_1 + 0x98) + -0x230);
  if (local_8c != 0) {
    FUN_1804cfda0(param_1,0x838100,0x80204,local_8c);
  }
  if (local_98 == 0) {
LAB_1804c9c10:
    do {
      uVar16 = *(uint *)(param_1 + 0xa8);
      uVar6 = uVar16 & uVar11;
      while (uVar6 != 0) {
        uVar12 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
          }
        }
        uVar11 = uVar11 & ~(1 << (uVar12 & 0x1f));
        uVar15 = uVar15 & ~(1 << (uVar12 & 0x1f));
        lVar5 = *(longlong *)(param_1 + 0x90) + (ulonglong)auStack_78[uVar12] * 8;
        *(uint *)(param_1 + 0xa8) = uVar16 | 1 << (*(byte *)(lVar5 + 6) & 0x1f);
        FUN_1804d0290(param_1,lVar5,*(undefined1 *)(lVar5 + 6));
        if (*(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88)) goto LAB_1804c9d8b;
        uVar16 = *(uint *)(param_1 + 0xa8);
        uVar6 = uVar16 & uVar11;
      }
      if (uVar11 == 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x110) + 0x73) =
             *(undefined1 *)(*(longlong *)(param_1 + 0x118) + 0x73);
        if ((uint)*(byte *)(*(longlong *)(param_1 + 0x110) + 0x73) < *(uint *)(param_1 + 0x104)) {
          local_a8 = *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0xbcc);
          *(char *)(*(longlong *)(param_1 + 0x110) + 0x73) = (char)*(uint *)(param_1 + 0x104);
          FUN_1804ce830(param_1,*(undefined4 *)(param_1 + 0x104),local_88 + 0x40000,local_90);
        }
        return;
      }
      uVar6 = uVar11 & 0xffe7;
      if (uVar6 != 0) {
        uVar16 = uVar16 & ~uVar11 & uVar15 & 0xffe7;
        if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804954a0(*(undefined8 *)(param_1 + 0x98),0x22);
        }
        iVar14 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> iVar14 & 1) == 0; iVar14 = iVar14 + 1) {
          }
        }
        iVar9 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> iVar9 & 1) == 0; iVar9 = iVar9 + 1) {
          }
        }
        FUN_1804d2040(param_1,iVar9,iVar14);
      }
      uVar16 = uVar11 & 0xffff0000;
      if (uVar16 != 0) {
        uVar6 = *(uint *)(param_1 + 0xa8) & ~uVar11 & uVar15 & 0xffff0000;
        if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804954a0(*(undefined8 *)(param_1 + 0x98),0x22);
        }
        iVar14 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> iVar14 & 1) == 0; iVar14 = iVar14 + 1) {
          }
        }
        iVar9 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> iVar9 & 1) == 0; iVar9 = iVar9 + 1) {
          }
        }
        FUN_1804d2040(param_1,iVar14,iVar9);
      }
    } while (*(ulonglong *)(param_1 + 0x88) <= *(ulonglong *)(param_1 + 0x80));
  }
  else {
    uVar16 = ~*(uint *)(param_1 + 0xa8) & 0xffffffe7;
    do {
      do {
        if (uVar16 == 0) goto LAB_1804c9c10;
        uVar6 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        uVar16 = uVar16 & ~(1 << (uVar6 & 0x1f));
        uVar8 = *(ushort *)(param_1 + (ulonglong)uVar6 * 4);
        uVar4 = *(ushort *)(param_1 + 0x1a0 + (ulonglong)(uVar8 - 0x8001) * 2);
      } while (uVar4 < 0x100);
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (uVar6 & 0x1f);
      local_a8 = (uint)(uVar4 >> 8) << 2;
      bVar7 = *(byte *)(*(longlong *)(param_1 + 0x90) + 4 + (ulonglong)uVar8 * 8);
      if (uVar6 < 0x10) {
        uVar13 = 0x8b0000fe;
        uVar6 = (-(uint)((0x605fd9U >> (bVar7 & 0x1f) & 1) != 0) & 0x80200) + uVar6;
      }
      else {
        uVar13 = 0x100ff3fc;
        if ((bVar7 & 0x1f) == 0xe) {
          uVar13 = 0x100ff2fc;
        }
      }
      FUN_1804d0810(param_1,uVar13,uVar6,4);
    } while (*(ulonglong *)(param_1 + 0x88) <= *(ulonglong *)(param_1 + 0x80));
  }
LAB_1804c9d8b:
                    /* WARNING: Subroutine does not return */
  FUN_1804ccb30(param_1);
}



/* ===== 1804c9dd0 FUN_1804c9dd0 ===== */

void FUN_1804c9dd0(longlong param_1,ushort *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  char cVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  byte bVar21;
  ulonglong uVar22;
  byte bVar23;
  char cVar24;
  int iVar25;
  byte bVar26;
  longlong lVar27;
  longlong lVar28;
  byte bVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  byte bVar35;
  uint uVar36;
  ulonglong uVar37;
  byte local_res10;
  byte local_res18;
  undefined4 uVar38;
  longlong local_70;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  
  iVar25 = 1;
  if (((char)param_2[3] < '\0') && (*(char *)((longlong)param_2 + 7) == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  uVar9 = FUN_1804d1530(param_1,param_2,0xffe7);
  uVar36 = ~(1 << (uVar9 & 0x1f)) & 0xffe7;
  bVar29 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)*param_2 * 8);
  uVar10 = (uint)bVar29;
  if ((char)bVar29 < '\0') {
    uVar10 = FUN_1804d1420(param_1,(ulonglong)*param_2,uVar36);
  }
  lVar13 = *(longlong *)(param_1 + 0x90);
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar10 & 0x1f));
  uVar3 = param_2[1];
  uVar37 = (ulonglong)uVar3;
  bVar29 = *(byte *)(lVar13 + 4 + uVar37 * 8);
  uVar11 = (uint)bVar29;
  if (uVar3 < 0x8000) {
    uVar22 = 0x80;
    uVar36 = 0x80;
  }
  else {
    bVar2 = *(byte *)(lVar13 + 6 + uVar37 * 8);
    uVar22 = (ulonglong)bVar2;
    uVar36 = uVar36 & ~(1 << (uVar10 & 0x1f));
    if ((char)bVar2 < '\0') {
      uVar12 = uVar36;
      if ((bVar29 & 0x1f) == 0xe) {
        uVar12 = 0xffff0000;
      }
      uVar12 = FUN_1804d1420(param_1,uVar37,uVar12);
      uVar22 = (ulonglong)uVar12;
    }
    uVar36 = uVar36 & ~(1 << ((uint)uVar22 & 0x1f));
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << ((uint)uVar22 & 0x1f));
    uVar12 = uVar36 & *(uint *)(param_1 + 0xa8);
    if (uVar12 == 0) {
      uVar36 = FUN_1804d18c0(param_1,uVar36);
    }
    else {
      uVar12 = (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      uVar36 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> uVar36 == 0; uVar36 = uVar36 - 1) {
        }
      }
      uVar36 = uVar36 ^ 0x18;
    }
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar36 & 0x1f);
  }
  uVar18 = *(undefined8 *)(param_1 + 0x80);
  if (param_3 == 9) {
    FUN_1804c9500(param_1,4);
  }
  else if (bVar7) {
    FUN_1804d0150(param_1,uVar9,*(longlong *)(param_1 + 0x98) + -0x1f0);
  }
  lVar34 = *(longlong *)(param_1 + 0x80);
  bVar23 = (byte)uVar9;
  bVar26 = bVar23 & 7;
  *(undefined2 *)(lVar34 + -2) = 0x75;
  cVar6 = bVar26 * '\t';
  uVar12 = uVar9 | 0x80200;
  local_60._0_4_ = uVar9 | 0x80200;
  *(char *)(lVar34 + -3) = cVar6 + -0x40;
  *(undefined4 *)(lVar34 + -7) = 0x850000fe;
  uVar30 = uVar9 >> 3 & 1;
  bVar2 = (byte)uVar30;
  *(byte *)(lVar34 + -5) = (byte)(uVar12 >> 1) & 4 | bVar2 | (byte)(uVar12 >> 0x10) | 0x40;
  *(byte **)(param_1 + 0x80) = (byte *)(lVar34 + -5);
  FUN_1804d0810(param_1,0x8b0000fe,uVar12,uVar9,0x10);
  lVar33 = *(longlong *)(param_1 + 0x80);
  cVar24 = (char)lVar33;
  if (param_3 == 8) {
    FUN_1804c9500(param_1,4);
  }
  else {
    *(undefined1 *)(lVar33 + -2) = 0x74;
    *(char *)(lVar33 + -1) = (char)uVar18 - cVar24;
    *(longlong *)(param_1 + 0x80) = lVar33 + -2;
  }
  uVar5 = *(ulonglong *)(param_1 + 0x80);
  if (uVar5 < *(ulonglong *)(param_1 + 0x88)) goto LAB_1804ca993;
  local_res10 = bVar29 & 0x1f;
  bVar21 = (byte)uVar22;
  bVar35 = (byte)uVar36;
  cVar15 = (char)lVar34;
  if ((bVar29 & 0x1f) == 0xe) {
    if (uVar3 < 0x8000) {
      iVar4 = *(int *)(lVar13 + 8 + uVar37 * 8);
      if (iVar4 == (char)iVar4) {
        uVar18 = 0x830000fe;
        *(char **)(param_1 + 0x80) = (char *)(uVar5 - 1);
        *(char *)(uVar5 - 1) = (char)iVar4;
      }
      else {
        *(int *)(uVar5 - 4) = iVar4;
        uVar18 = 0x810000fe;
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
      }
      FUN_1804d0810(param_1,uVar18,7,uVar9,8);
      lVar33 = *(longlong *)(param_1 + 0x80);
      *(undefined1 *)(lVar33 + -2) = 0x75;
      *(char *)(lVar33 + -1) = cVar24 - (char)lVar33;
      *(longlong *)(param_1 + 0x80) = lVar33 + -2;
      iVar4 = *(int *)(lVar13 + 0xc + uVar37 * 8);
      if (iVar4 == (char)iVar4) {
        *(char **)(param_1 + 0x80) = (char *)(lVar33 + -3);
        *(char *)(lVar33 + -3) = (char)iVar4;
        uVar18 = 0x830000fe;
      }
      else {
        *(int *)(lVar33 + -6) = iVar4;
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
        uVar18 = 0x810000fe;
      }
    }
    else {
      *(undefined1 *)(uVar5 - 2) = 0x7a;
      *(char *)(uVar5 - 1) = cVar24 - (char)uVar5;
      *(ulonglong *)(param_1 + 0x80) = uVar5 - 2;
      FUN_1804d0810(param_1,0x2e0f66fc,uVar22,uVar9,8);
      lVar33 = *(longlong *)(param_1 + 0x80);
      *(char *)(lVar33 + -1) = cVar24 - (char)lVar33;
      *(undefined1 *)(lVar33 + -2) = 0x73;
      *(undefined1 **)(param_1 + 0x80) = (undefined1 *)(lVar33 + -3);
      *(undefined1 *)(lVar33 + -3) = 0xf2;
      uVar18 = 0x830000fe;
    }
LAB_1804ca263:
    FUN_1804d0810(param_1,uVar18,7,uVar9,0xc);
    *(char *)(lVar34 + -1) = *(char *)(param_1 + 0x80) - cVar15;
    if (uVar3 < 0x8000) goto LAB_1804ca1ed;
LAB_1804ca29c:
    if ((uVar11 & 0x1f) - 3 < 10) {
      lVar13 = *(longlong *)(param_1 + 0x80);
      *(byte *)(lVar13 + -1) = ((bVar35 & 7) << 3 | bVar21 & 7) - 0x40;
      *(undefined4 *)(lVar13 + -5) = 0xb0000fe;
      *(byte *)(lVar13 + -3) =
           (byte)((uVar36 | 0x80200) >> 1) & 4 | (byte)(uVar22 >> 3) & 1 |
           (byte)((uVar36 | 0x80200) >> 0x10) | 0x40;
      *(byte **)(param_1 + 0x80) = (byte *)(lVar13 + -3);
      FUN_1804d0150(param_1,uVar36,(ulonglong)~(uVar11 & 0x1f) << 0x2f);
    }
  }
  else {
    if (9 < (uVar11 & 0x1f) - 3) {
      *(uint *)(uVar5 - 4) = ~(uVar11 & 0x1f) << 0xf | 0x7fff;
      uVar18 = 0x810000fe;
      *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
      goto LAB_1804ca263;
    }
    if (0x7fff < uVar3) {
      FUN_1804d0810(param_1,0x3b0000fe,uVar36 | 0x80200,uVar9,8);
      *(char *)(lVar34 + -1) = *(char *)(param_1 + 0x80) - cVar15;
      goto LAB_1804ca29c;
    }
    uVar18 = *(undefined8 *)(lVar13 + 8 + uVar37 * 8);
    local_58._4_4_ =
         (uint)(((ulonglong)~(*(byte *)(lVar13 + 4 + uVar37 * 8) & 0x1f) << 0x2f) >> 0x20) |
         (uint)((ulonglong)uVar18 >> 0x20);
    FUN_1804cfd40(param_1,0x838107,uVar9,8,(int)uVar18);
    lVar33 = *(longlong *)(param_1 + 0x80);
    *(undefined1 *)(lVar33 + -2) = 0x75;
    *(char *)(lVar33 + -1) = cVar24 - (char)lVar33;
    *(longlong *)(param_1 + 0x80) = lVar33 + -2;
    FUN_1804cfd40(param_1,0x838107,uVar9,0xc,local_58._4_4_);
    *(char *)(lVar34 + -1) = *(char *)(param_1 + 0x80) - cVar15;
LAB_1804ca1ed:
    bVar29 = *(byte *)(lVar13 + 4 + uVar37 * 8);
    puVar1 = (uint *)(lVar13 + (uVar37 + 1) * 8);
    bVar8 = bVar29 & 0x1f;
    if (bVar8 == 4) {
      iVar25 = *(int *)(*(longlong *)(lVar13 + 8 + uVar37 * 8) + 0xc);
    }
    else {
      if (bVar8 == 0xe) {
        uVar12 = *(int *)(lVar13 + 0xc + uVar37 * 8) * 2;
      }
      else {
        uVar12 = bVar29 & 0x1f;
        if (bVar8 < 3) {
          iVar25 = uVar12 - 1;
          goto LAB_1804ca3db;
        }
        uVar12 = ~uVar12 << 0xf | (uint)((ulonglong)*(undefined8 *)puVar1 >> 0x20);
      }
      uVar16 = (uVar12 ^ *puVar1) - (uVar12 >> 0x12 | uVar12 << 0xe);
      iVar25 = ((uVar12 >> 0xd | uVar12 << 0x13) ^ uVar16) - (uVar16 >> 0x13 | uVar16 * 0x2000);
    }
LAB_1804ca3db:
    if (iVar25 == 0) {
      uVar38 = 0x28;
      goto LAB_1804ca4a4;
    }
  }
  FUN_1804d0810(param_1,0x30000fe,uVar9 | 0x80200,uVar10,0x28);
  *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -1;
  lVar34 = -4;
  lVar33 = -3;
  **(undefined1 **)(param_1 + 0x80) = 3;
  lVar13 = *(longlong *)(param_1 + 0x80);
  *(byte *)(lVar13 + -1) = bVar26 - 0x20;
  *(undefined4 *)(lVar13 + -5) = 0xc10000fe;
  local_60._0_4_ = uVar9 & 8;
  if ((uVar9 & 8) == 0) {
    lVar27 = -2;
    lVar19 = -3;
  }
  else {
    lVar27 = -3;
    lVar19 = -4;
    *(byte *)(lVar13 + -3) = bVar2 | 0x40;
  }
  if ((bVar23 & 7) == 5) {
    *(undefined1 *)(lVar19 + lVar13) = 0;
    bVar29 = 0x44;
  }
  else {
    bVar29 = 4;
    lVar19 = lVar27;
  }
  lVar19 = lVar19 + lVar13;
  *(char *)(lVar19 + -1) = cVar6 + '@';
  *(byte *)(lVar19 + -2) = bVar26 << 3 | bVar29;
  *(undefined4 *)(lVar19 + -6) = 0x8d0000fe;
  local_50 = uVar9 >> 1 & 0x104;
  uVar12 = uVar9 >> 2 & 2 | uVar9 >> 1 & 0x104 | uVar30;
  bVar29 = (byte)(uVar9 >> 0x10);
  if (uVar12 == 0) {
    lVar13 = -3;
  }
  else {
    lVar13 = -4;
    *(byte *)(lVar19 + -4) = (byte)uVar12 | bVar29 | 0x40;
  }
  *(longlong *)(param_1 + 0x80) = lVar13 + lVar19;
  if (uVar3 < 0x8000) {
    FUN_1804cfda0(param_1,0x838104,uVar9,iVar25);
  }
  else {
    if (local_res10 != 4) {
      FUN_1804d0810(param_1,0x230000fe,uVar9,uVar10,0x34);
      lVar13 = *(longlong *)(param_1 + 0x80);
      uVar10 = uVar36 >> 3 & 1;
      cVar24 = (bVar35 & 7 | bVar26 << 3) - 0x40;
      local_res18 = bVar35 & 7;
      *(char *)(lVar13 + -1) = cVar24;
      uVar12 = uVar10 | local_50;
      *(undefined4 *)(lVar13 + -5) = 0x2b0000fe;
      if (uVar12 == 0) {
        lVar19 = -3;
      }
      else {
        lVar19 = -4;
        *(byte *)(lVar13 + -3) = (byte)uVar12 | bVar29 | 0x40;
      }
      lVar27 = -7;
      *(undefined1 **)(param_1 + 0x80) = (undefined1 *)(lVar19 + lVar13);
      *(undefined1 *)(lVar19 + lVar13) = 0xd;
      lVar13 = *(longlong *)(param_1 + 0x80);
      *(byte *)(lVar13 + -1) = (bVar35 & 7) - 0x40;
      *(undefined4 *)(lVar13 + -5) = 0xc10000fe;
      if ((uVar36 & 8) == 0) {
        local_70 = -7;
        lVar31 = -5;
        local_58 = -4;
        lVar19 = -3;
      }
      else {
        local_70 = -8;
        *(byte *)(lVar13 + -3) = (byte)uVar10 | 0x40;
        lVar19 = -4;
        lVar31 = -6;
        local_58 = -5;
      }
      lVar20 = -5;
      *(char *)(lVar19 + lVar13) = cVar24;
      *(undefined4 *)(local_70 + lVar13) = 0x330000fe;
      if (uVar12 != 0) {
        *(byte *)(lVar31 + lVar13) = (byte)uVar12 | bVar29 | 0x40;
        local_58 = lVar31;
      }
      uVar37 = local_58 + lVar13;
      *(ulonglong *)(param_1 + 0x80) = uVar37;
      if (*(ulonglong *)(param_1 + 0x88) <= uVar37) {
        *(undefined1 **)(param_1 + 0x80) = (undefined1 *)(uVar37 - 1);
        *(undefined1 *)(uVar37 - 1) = 5;
        lVar13 = *(longlong *)(param_1 + 0x80);
        *(byte *)(lVar13 + -1) = bVar26 - 0x40;
        *(undefined4 *)(lVar13 + -5) = 0xc10000fe;
        if ((uint)local_60 == 0) {
          lVar31 = -3;
          lVar28 = -7;
          lVar19 = -4;
          lVar32 = -5;
        }
        else {
          lVar28 = -8;
          lVar31 = -4;
          *(byte *)(lVar13 + -3) = bVar2 | 0x40;
          lVar32 = -6;
          lVar19 = -5;
        }
        cVar24 = (local_res18 << 3 | bVar26) - 0x40;
        *(char *)(lVar31 + lVar13) = cVar24;
        *(undefined4 *)(lVar28 + lVar13) = 0x2b0000fe;
        uVar12 = uVar36 >> 1;
        local_70._0_4_ = uVar12 & 0x104;
        uVar10 = uVar12 & 0x104 | uVar30;
        bVar35 = (byte)(uVar36 >> 0x10);
        if (uVar10 != 0) {
          *(byte *)(lVar32 + lVar13) = (byte)uVar10 | bVar35 | 0x40;
          lVar19 = lVar32;
        }
        puVar14 = (undefined1 *)(lVar13 + -1 + lVar19);
        *(undefined1 **)(param_1 + 0x80) = puVar14;
        *puVar14 = 0xe;
        lVar13 = *(longlong *)(param_1 + 0x80);
        *(byte *)(lVar13 + -1) = bVar26 - 0x40;
        *(undefined4 *)(lVar13 + -5) = 0xc10000fe;
        if ((uint)local_60 == 0) {
          lVar19 = -3;
          local_58 = -5;
          lVar28 = -7;
          local_60 = -3;
          lVar31 = -2;
        }
        else {
          local_58 = -6;
          *(byte *)(lVar13 + -3) = bVar2 | 0x40;
          lVar19 = -4;
          lVar31 = -3;
          local_60 = -4;
          lVar28 = -8;
        }
        lVar31 = lVar31 + lVar13;
        *(char *)(lVar19 + lVar13) = cVar24;
        *(undefined4 *)(lVar28 + lVar13) = 0x330000fe;
        if (uVar10 == 0) {
          lVar19 = -7;
        }
        else {
          lVar33 = -4;
          lVar34 = -5;
          lVar20 = -6;
          *(byte *)(local_58 + lVar13) = (byte)uVar10 | bVar35 | 0x40;
          lVar19 = -8;
        }
        if (local_res10 == 0xe) {
          *(char *)(lVar31 + lVar33) = cVar6 + -0x40;
          *(undefined4 *)(lVar31 + lVar19) = 0x30000fe;
          if ((local_50 | uVar30) != 0) {
            *(byte *)(lVar31 + lVar20) = (byte)(local_50 | uVar30) | bVar29 | 0x40;
            lVar34 = lVar20;
          }
          puVar14 = (undefined1 *)(local_60 + lVar13 + lVar34);
          *(undefined1 **)(param_1 + 0x80) = puVar14;
          *puVar14 = 0x20;
          lVar13 = *(longlong *)(param_1 + 0x80);
          *(byte *)(lVar13 + -1) = bVar26 - 0x18;
          *(undefined4 *)(lVar13 + -5) = 0xc10000fe;
          uVar30 = uVar12 & 0x104 | uVar30;
          *(byte *)(lVar13 + -3) = bVar2 | 0x48;
          *(char *)(lVar13 + -4) = cVar24;
          *(undefined4 *)(lVar13 + -8) = 0x8b0000fe;
          if (uVar30 == 0) {
            lVar34 = -10;
            lVar27 = -6;
            lVar33 = -9;
          }
          else {
            lVar34 = -0xb;
            *(byte *)(lVar13 + -6) = (byte)uVar30 | bVar35 | 0x40;
            lVar33 = -10;
          }
          uVar9 = (uint)uVar22 | 0x80200;
          puVar17 = (undefined4 *)(lVar34 + lVar13);
          *(byte *)(lVar27 + lVar13) = ((bVar21 & 7) << 3 | bVar26) - 0x40;
          *puVar17 = 0x7e0f66fc;
          *(byte *)(lVar33 + lVar13) = (byte)(uVar9 >> 1) & 4 | bVar2 | (byte)(uVar9 >> 0x10) | 0x40
          ;
          *(undefined1 *)puVar17 = 0x66;
          *(undefined4 **)(param_1 + 0x80) = puVar17;
          return;
        }
        *(byte *)(lVar31 + lVar33) = (bVar21 & 7 | local_res18 << 3) - 0x40;
        *(undefined4 *)(lVar31 + lVar19) = 0x8b0000fe;
        local_70._0_4_ = (uint)(uVar22 >> 3) & 1 | (uint)local_70;
        if ((uint)local_70 != 0) {
          *(byte *)(lVar31 + lVar20) = (byte)(uint)local_70 | bVar35 | 0x40;
          lVar34 = lVar20;
        }
        *(longlong *)(param_1 + 0x80) = lVar34 + lVar31;
        FUN_1804cfda0(param_1,0x838106,uVar9,~(uVar11 & 0x1f) << 0xf);
        uVar10 = *(uint *)(param_1 + 0xb8);
        puVar14 = (undefined1 *)(*(longlong *)(param_1 + 0x80) + -1);
        *(undefined1 **)(param_1 + 0x80) = puVar14;
        *puVar14 = 0x20;
        if ((uVar10 & 0x40) == 0) {
          lVar13 = *(longlong *)(param_1 + 0x80);
          *(byte *)(lVar13 + -1) = (bVar23 & 7) - 0x18;
          *(undefined4 *)(lVar13 + -5) = 0xc10000fe;
          *(byte *)(lVar13 + -3) = (byte)(uVar9 >> 3) & 1 | 0x48;
          *(byte **)(param_1 + 0x80) = (byte *)(lVar13 + -3);
          FUN_1804d0960(param_1,0x8b0000fe,uVar9 | 0x80200,(uint)uVar22 | 0x80200);
          return;
        }
        FUN_1804d0390(param_1,0xf0fbe3c4,uVar9,uVar22);
        return;
      }
LAB_1804ca993:
                    /* WARNING: Subroutine does not return */
      FUN_1804ccb30(param_1);
    }
    FUN_1804d0810(param_1,0x230000fe,uVar9,uVar22,0xc);
  }
  uVar38 = 0x34;
  local_60._0_4_ = uVar9;
LAB_1804ca4a4:
  FUN_1804d0810(param_1,0x8b0000fe,(uint)local_60,uVar10,uVar38);
  return;
}



/* ===== 1804ca9a0 FUN_1804ca9a0 ===== */

void FUN_1804ca9a0(longlong param_1,ushort *param_2)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar4 = *(longlong *)(param_1 + 0x90);
  uVar3 = *(ushort *)(lVar4 + 2 + (ulonglong)param_2[1] * 8);
  uVar9 = (ulonglong)*(ushort *)(lVar4 + (ulonglong)param_2[1] * 8);
  iVar1 = (uint)uVar3 * 0x18;
  if (((char)param_2[3] < '\0') && (*(char *)((longlong)param_2 + 7) == '\0')) {
    uVar7 = 0x80;
  }
  else {
    uVar7 = FUN_1804d1530(param_1,param_2,0xffe7);
  }
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)*param_2 * 8);
  uVar6 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar6 = FUN_1804d1420(param_1,*param_2,0xffe7);
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar6 & 0x1f));
  if (-1 < (char)(byte)uVar7) {
    if (uVar3 == 0) {
      if (uVar7 != uVar6) {
        lVar5 = *(longlong *)(param_1 + 0x80);
        *(byte *)(lVar5 + -1) = (((byte)uVar7 & 7) << 3 | (byte)uVar6 & 7) - 0x40;
        *(undefined4 *)(lVar5 + -5) = 0x8b0000fe;
        *(byte *)(lVar5 + -3) =
             (byte)((uVar7 | 0x80200) >> 1) & 4 | (byte)(uVar6 >> 3) & 1 |
             (byte)((uVar7 | 0x80200) >> 0x10) | 0x40;
        *(byte **)(param_1 + 0x80) = (byte *)(lVar5 + -3);
      }
    }
    else if (uVar7 == uVar6) {
      FUN_1804cfda0(param_1,0x838100,uVar7 | 0x80200,iVar1);
    }
    else {
      FUN_1804d0810(param_1,0x8d0000fe,uVar7 | 0x80200,uVar6,iVar1);
    }
  }
  FUN_1804c9500(param_1,5);
  bVar2 = *(byte *)(lVar4 + 4 + uVar9 * 8);
  if ((bVar2 & 0x1f) < 3) {
    *(uint *)(*(longlong *)(param_1 + 0x80) + -4) = ~(bVar2 & 0x1f) << 0xf | 0x7fff;
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
    FUN_1804d0810(param_1,0x810000fe,7,uVar6,iVar1 + 0xc);
  }
  else {
    uVar8 = ~(1 << (uVar6 & 0x1f)) & 0xffe7;
    uVar7 = uVar8 & *(uint *)(param_1 + 0xa8);
    if (uVar7 == 0) {
      uVar7 = FUN_1804d18c0(param_1,uVar8);
    }
    else {
      uVar8 = (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> uVar7 == 0; uVar7 = uVar7 - 1) {
        }
      }
      uVar7 = uVar7 ^ 0x18;
    }
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar7 & 0x1f);
    FUN_1804d0810(param_1,0x3b0000fe,uVar7 | 0x80200,uVar6,iVar1 + 8);
    bVar2 = *(byte *)(lVar4 + 4 + uVar9 * 8);
    uVar9 = *(ulonglong *)(lVar4 + 8 + uVar9 * 8);
    if ((bVar2 & 0x1f) != 0xe) {
      uVar9 = uVar9 | (ulonglong)~(bVar2 & 0x1f) << 0x2f;
    }
    FUN_1804d0150(param_1,uVar7,uVar9);
  }
  return;
}



/* ===== 1804cabc0 FUN_1804cabc0 ===== */

void FUN_1804cabc0(longlong param_1,ushort *param_2,int param_3)

{
  char *pcVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  ulonglong uVar15;
  int iVar16;
  uint local_res20;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar15 = (ulonglong)uVar4;
  pbVar10 = *(byte **)(param_1 + 0x80);
  iVar16 = 0;
  uVar6 = (uint)uVar3;
  local_res20 = 0xffe7;
  if ((*(byte **)(param_1 + 0x148) == pbVar10) && (param_3 != 8)) {
    pbVar10 = pbVar10 + (ulonglong)(*pbVar10 < 0x84) + 2;
    bVar2 = *pbVar10;
    if (bVar2 == 0xf) {
      bVar2 = pbVar10[1];
      pbVar14 = pbVar10 + 1;
    }
    else {
      pbVar14 = pbVar10;
    }
    if ((bVar2 & 0xf) < 0xe) {
      if (0xb < (bVar2 & 0xf)) {
        *pbVar14 = bVar2 - 4;
      }
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(byte **)(param_1 + 0x80) = pbVar10;
    }
  }
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + uVar15 * 8);
  uVar9 = (uint)bVar2;
  if ((bVar2 & 0x80) == 0) {
    local_res20 = ~(1 << (bVar2 & 0x1f)) & 0xffe7;
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (bVar2 & 0x1f));
  }
  uVar7 = FUN_1804d1530(param_1,param_2,local_res20);
  iVar13 = iVar16;
  if (uVar3 == uVar4) {
    uVar9 = uVar7;
LAB_1804caccb:
    iVar16 = iVar13;
  }
  else {
    if ((bVar2 & 0x80) == 0) goto LAB_1804caccb;
    if (uVar4 < 0x8000) {
      lVar5 = *(longlong *)(param_1 + 0x90);
      if ((*(char *)(lVar5 + 5 + uVar15 * 8) == '\x1b') ||
         ((0x605fd9U >> (*(byte *)(lVar5 + 4 + uVar15 * 8) & 0x1f) & 1) == 0)) {
        iVar13 = *(int *)(lVar5 + uVar15 * 8);
      }
      else {
        iVar13 = *(int *)(lVar5 + 8 + uVar15 * 8);
        if (*(longlong *)(lVar5 + 8 + uVar15 * 8) != (longlong)iVar13) goto LAB_1804cad73;
      }
      goto LAB_1804caccb;
    }
LAB_1804cad73:
    iVar13 = FUN_1804cee00(param_1,param_2);
    uVar9 = uVar6;
    if (iVar13 == 0) {
      uVar9 = (uint)uVar4;
    }
    uVar9 = FUN_1804c86c0(param_1,uVar9,local_res20 & ~(1 << (uVar7 & 0x1f)),
                          0x605fd9U >> ((byte)param_2[2] & 0x1f) & 1);
    uVar8 = (uint)uVar4;
    if (iVar13 == 0) {
      uVar8 = uVar6;
    }
    uVar6 = uVar8;
  }
  if ((char)param_2[2] < '\0') {
    FUN_1804c9500(param_1,0);
  }
  uVar8 = 0x605fd9U >> ((byte)param_2[2] & 0x1f) & 1;
  if (param_3 != 8) {
    iVar13 = (-(uint)(uVar8 != 0) & 0x80200) + uVar7;
    if ((uVar9 & 0x80) != 0) {
      FUN_1804cfda0(param_1,param_3 + 0x838100,iVar13,iVar16);
      FUN_1804d1e20(param_1,uVar7,uVar6);
      return;
    }
    uVar12 = param_3 << 0x1b | 0x30000fe;
LAB_1804cae12:
    FUN_1804d0390(param_1,uVar12,iVar13,uVar9);
    FUN_1804d1e20(param_1,uVar7,uVar6);
    return;
  }
  if ((uVar9 & 0x80) == 0) {
    uVar12 = 0xaf0f00fd;
    iVar13 = (-(uint)(uVar8 != 0) & 0x80200) + uVar7;
    goto LAB_1804cae12;
  }
  if (uVar8 != 0) {
    if ((0x605fd9U >> (*(byte *)(*(longlong *)(param_1 + 0x90) + 4 + (ulonglong)uVar6 * 8) & 0x1f) &
        1) == 0) {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)uVar6 * 8);
      uVar9 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar9 = FUN_1804d1420(param_1,uVar6,0xffe7);
      }
      *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar9 & 0x1f));
      goto LAB_1804cae8c;
    }
  }
  uVar9 = FUN_1804c8200(param_1,uVar6,0xffe7);
LAB_1804cae8c:
  if (iVar16 == (char)iVar16) {
    pcVar1 = (char *)(*(longlong *)(param_1 + 0x80) + -1);
    uVar11 = 0x6b0000fe;
    *(char **)(param_1 + 0x80) = pcVar1;
    *pcVar1 = (char)iVar16;
  }
  else {
    *(int *)(*(longlong *)(param_1 + 0x80) + -4) = iVar16;
    uVar11 = 0x690000fe;
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
  }
  FUN_1804d0390(param_1,uVar11,
                (-(uint)((0x605fd9U >> ((byte)param_2[2] & 0x1f) & 1) != 0) & 0x80200) + uVar7,uVar9
               );
  return;
}



/* ===== 1804caf00 FUN_1804caf00 ===== */

void FUN_1804caf00(longlong param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar4 = FUN_1804d1530(param_1,param_2,0xffe7);
  uVar2 = param_2[1];
  uVar9 = (ulonglong)*param_2;
  uVar8 = (uint)uVar2;
  if (0x7fff < uVar2) {
    uVar9 = (ulonglong)(uint)uVar2;
    uVar8 = (uint)*param_2;
  }
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + uVar9 * 8);
  uVar5 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    uVar5 = FUN_1804d1420(param_1,uVar9,~(1 << (uVar4 & 0x1f)) & 0xffe7);
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar5 & 0x1f));
  FUN_1804d0960(param_1,param_3 * 0x1000000 + 0x400f00fd,
                (-(uint)((0x605fd9U >> ((byte)param_2[2] & 0x1f) & 1) != 0) & 0x80200) + uVar4,uVar5
               );
  lVar3 = *(longlong *)(param_1 + 0x80);
  uVar7 = (-(uint)((0x605fd9U >> ((byte)param_2[2] & 0x1f) & 1) != 0) & 0x80200) + uVar4;
  *(byte *)(lVar3 + -1) = (((byte)uVar7 & 7) << 3 | (byte)uVar5 & 7) - 0x40;
  uVar5 = uVar7 >> 1 & 0x104 | uVar5 >> 3 & 1;
  *(undefined4 *)(lVar3 + -5) = 0x3b0000fe;
  if (uVar5 == 0) {
    lVar6 = -2;
  }
  else {
    *(byte *)(lVar3 + -3) = (byte)uVar5 | (byte)(uVar7 >> 0x10) | 0x40;
    lVar6 = -3;
  }
  *(longlong *)(param_1 + 0x80) = lVar6 + lVar3;
  FUN_1804d1e20(param_1,uVar4,uVar8);
  return;
}



/* ===== 1804cb050 FUN_1804cb050 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804cb050(longlong param_1,uint *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  int iVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  longlong lVar21;
  undefined4 *puVar22;
  uint *puVar23;
  uint *puVar24;
  uint uVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_108 [32];
  int local_e8;
  uint local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  uint local_c8;
  uint local_c4 [31];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_108;
  switch(*(byte *)((longlong)param_2 + 5)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
    goto switchD_1804cb09a_caseD_0;
  case 8:
  case 9:
    if ((*(char *)((longlong)param_2 + -3) == ':') &&
       (uVar14 = *(int *)(param_1 + 200) - 1, (ushort)*param_2 == uVar14)) {
      *(uint *)(param_1 + 200) = uVar14;
      FUN_1804c9dd0(param_1,param_2 + -2,*(undefined1 *)((longlong)param_2 + 5));
      return;
    }
    goto switchD_1804cb09a_caseD_0;
  case 0xb:
    bVar13 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x40006);
    uVar14 = (uint)bVar13;
    if ((char)bVar13 < '\0') {
      uVar14 = FUN_1804d1420(param_1,0x8000,0xffe7);
    }
    uVar25 = ~(1 << (uVar14 & 0x1f)) & 0xffe7;
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar14 & 0x1f));
    uVar15 = uVar25 & *(uint *)(param_1 + 0xa8);
    if (uVar15 == 0) {
      uVar15 = FUN_1804d18c0(param_1,uVar25);
    }
    else {
      uVar25 = (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
      uVar15 = 0x1f;
      if (uVar25 != 0) {
        for (; uVar25 >> uVar15 == 0; uVar15 = uVar15 - 1) {
        }
      }
      uVar15 = uVar15 ^ 0x18;
    }
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar15 & 0x1f);
    lVar11 = *(longlong *)
              (*(longlong *)(param_1 + 0x90) + 8 + (ulonglong)*(ushort *)((longlong)param_2 + 2) * 8
              );
    uVar25 = (uint)*(byte *)(lVar11 + -3);
    piVar2 = (int *)(param_1 + 0x104);
    *piVar2 = *piVar2 + (-2 - uVar25);
    if (*piVar2 < 0) {
      *(undefined4 *)(param_1 + 0x104) = 0;
    }
    pbVar16 = (byte *)(*(longlong *)(param_1 + 0x90) + 0x40004);
    *pbVar16 = *pbVar16 | 0x20;
    FUN_1804d0600(param_1,0x890000fe,uVar14 | 0x80200,*(longlong *)(param_1 + 0x98) + -0x168);
    if (uVar25 * -8 != 0x10) {
      FUN_1804cfda0(param_1,0x838100,uVar14 | 0x80200);
    }
    lVar26 = *(longlong *)
              (*(longlong *)(param_1 + 0x98) + 0x6a0 +
              (ulonglong)(*(uint *)(param_1 + 0xdc) >> 5) * 8) +
             (ulonglong)((*(uint *)(param_1 + 0xdc) & 0x1f) << 2);
    lVar21 = *(longlong *)(param_1 + 0x80);
    if (lVar21 == *(longlong *)(param_1 + 0x140)) {
      *(undefined4 *)(param_1 + 0xbc) = 1;
      bVar13 = 4;
      *(int *)(lVar21 + 1) = ((int)lVar26 - (int)lVar21) + -5;
      if (*(longlong *)(param_1 + 0x150) == 0) {
        lVar10 = *(longlong *)(param_1 + 0x80);
        lVar26 = lVar21;
        goto LAB_1804cb654;
      }
      if (*(char *)(param_1 + 0xa4) == '%') {
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 2;
      }
      lVar10 = *(longlong *)(param_1 + 0x80);
      *(undefined1 *)(lVar10 + -2) = 0x74;
      *(char *)(lVar10 + -1) = (char)lVar21 - (char)lVar10;
      lVar10 = lVar10 + -2;
    }
    else {
      bVar13 = 5;
      lVar10 = lVar21;
LAB_1804cb654:
      if (*(char *)(param_1 + 0xa4) == '%') {
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 6;
      }
      *(undefined1 *)(lVar10 + -6) = 0xf;
      *(int *)(lVar10 + -4) = (int)lVar26 - (int)lVar10;
      *(byte *)(lVar10 + -5) = bVar13 | 0x80;
      lVar10 = lVar10 + -6;
    }
    *(longlong *)(param_1 + 0x80) = lVar10;
    local_e8 = 0xfffffff8;
    FUN_1804d0810(param_1,0x3b0000fe,uVar15 | 0x80200,uVar14);
    FUN_1804d0150(param_1,uVar15,lVar11);
    break;
  case 0xc:
  case 0x5a:
  case 100:
    break;
  default:
    *(double *)(*(longlong *)(param_1 + 0x98) + 0xc20) = (double)*(byte *)((longlong)param_2 + 5);
                    /* WARNING: Subroutine does not return */
    FUN_1804954f0(*(undefined8 *)(param_1 + 0x98),0x20);
  case 0xf:
    FUN_1804c8f30(param_1);
    break;
  case 0x10:
    bVar6 = false;
    if ((-1 < *(char *)((longlong)param_2 + -2)) ||
       (bVar7 = false, *(char *)((longlong)param_2 + -1) != '\0')) {
      bVar7 = true;
    }
    if ((-1 < *(char *)((longlong)param_2 + 6)) || (*(char *)((longlong)param_2 + 7) != '\0')) {
      bVar6 = true;
    }
    if ((*(uint *)(param_1 + 0xb8) & 0x40000) == 0) {
      bVar7 = true;
    }
    else if (!bVar6) {
      return;
    }
    cVar12 = *(char *)((longlong)param_2 + -3);
    if (((((cVar12 == '_') || (cVar12 == 'a')) || (cVar12 == 'b')) || (cVar12 == 'c')) && (!bVar7))
    {
      FUN_1804d1420(param_1,(ushort)*param_2,1);
    }
    break;
  case 0x11:
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xdc);
    if (*(int *)(param_1 + 0x108) != 0) {
      FUN_1804c8d60(param_1);
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    if (*(int *)(param_1 + 0xf8) != -1) {
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
    FUN_1804cd120(param_1);
    lVar11 = *(longlong *)(param_1 + 0x80);
    FUN_1804ccc30(param_1);
    puVar9 = *(undefined1 **)(param_1 + 0x128);
    lVar21 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x150) == 0) {
      puVar1 = puVar9 + -5;
      *puVar1 = 0xe9;
      if (*(int *)(param_1 + 0xbc) == 0) {
        lVar26 = 3;
        *(int *)(puVar9 + -4) = (int)lVar21 - (int)puVar9;
      }
      else {
        iVar18 = (int)lVar21 - (int)puVar1;
        *(int *)(puVar9 + -9) = iVar18;
        if (*(int *)(param_1 + 0xbc) == 2) {
          lVar26 = 8;
          *(int *)(puVar9 + -0xf) = iVar18 + 6;
          puVar9 = puVar1;
        }
        else {
          lVar26 = 4;
          puVar9 = puVar1;
        }
      }
      if (puVar9 + -0x80 <= (undefined1 *)(lVar26 + lVar21)) {
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xcc);
        *(undefined1 **)(param_1 + 0x150) = (undefined1 *)(lVar26 + lVar21);
        *(undefined4 *)(*(longlong *)(param_1 + 0x110) + 0xc) = *(undefined4 *)(param_1 + 0xd0);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x150) = 0;
      if (*(int *)(param_1 + 0xbc) == 0) {
        puVar9[-2] = 0xeb;
        puVar9[-1] = (char)lVar21 - (char)puVar9;
      }
      else {
        cVar12 = (char)lVar21 - (char)(puVar9 + -5);
        puVar9[-5] = 0xe9;
        puVar9[-6] = cVar12;
        if (*(int *)(param_1 + 0xbc) == 2) {
          puVar9[-8] = cVar12 + '\x02';
        }
      }
    }
    lVar21 = *(longlong *)(param_1 + 0x80);
    *(longlong *)(param_1 + 0x138) = lVar21;
    if (lVar21 != lVar11) {
      *(undefined1 *)(lVar21 + -5) = 0xe9;
      *(int *)(lVar21 + -4) = (int)lVar11 - (int)lVar21;
      *(longlong *)(param_1 + 0x80) = lVar21 + -5;
    }
    break;
  case 0x12:
    uVar20 = 0xffff0000;
    if (1 < (byte)(((byte)param_2[1] & 0x1f) - 0xd)) {
      uVar20 = 0xffe7;
    }
    FUN_1804d13e0(param_1,(ushort)*param_2,uVar20);
    break;
  case 0x13:
    uVar14 = 0xffff0000;
    if (1 < (byte)(((byte)param_2[1] & 0x1f) - 0xd)) {
      uVar14 = 0xffe7;
    }
    if (*(char *)((longlong)param_2 + 6) != -2) {
      lVar11 = *(longlong *)(param_1 + 0x90);
      uVar17 = (ulonglong)(ushort)*param_2;
      if ((*(char *)(lVar11 + 7 + uVar17 * 8) != '\0') ||
         (lVar21 = lVar11 + (ulonglong)*(ushort *)((longlong)param_2 + 2) * 8,
         *(char *)(lVar11 + 7 + (ulonglong)*(ushort *)((longlong)param_2 + 2) * 8) != '\0')) {
                    /* WARNING: Subroutine does not return */
        FUN_1804954a0(*(undefined8 *)(param_1 + 0x98),0x21);
      }
      uVar14 = ~*(uint *)(param_1 + 0xb4) & uVar14;
      uVar15 = uVar14 & *(uint *)(param_1 + 0xa8);
      if ((uVar15 & uVar15 - 1) == 0) {
        if ((-1 < *(char *)(lVar11 + 6 + uVar17 * 8)) || (-1 < *(char *)(lVar21 + 6))) {
                    /* WARNING: Subroutine does not return */
          FUN_1804954a0(*(undefined8 *)(param_1 + 0x98),0x21);
        }
        FUN_1804d2290(param_1,param_2);
        *(undefined1 *)(lVar21 + 7) = *(undefined1 *)((longlong)param_2 + 7);
      }
      else {
        if (*(char *)(lVar21 + 6) < '\0') {
          uVar14 = FUN_1804d1420();
        }
        else {
          uVar14 = FUN_1804d2250(param_1,uVar14);
          FUN_1804d0290(param_1,lVar21,uVar14,*(undefined1 *)(lVar21 + 6));
        }
        *(byte *)((longlong)param_2 + 6) = (byte)uVar14;
        *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 1 << (uVar14 & 0x1f);
        *(ushort *)(param_1 + 0x160 + (ulonglong)uVar14 * 2) = (ushort)*param_2;
        pbVar16 = (byte *)(lVar11 + 4 + uVar17 * 8);
        *pbVar16 = *pbVar16 | 0x20;
        if (*(char *)(lVar11 + 6 + uVar17 * 8) < '\0') {
          *(byte *)(lVar11 + 6 + uVar17 * 8) = (byte)uVar14 | 0x80;
        }
      }
    }
    break;
  case 0x15:
    lVar11 = *(longlong *)(param_1 + 0x80);
    lVar21 = *(longlong *)
              (*(longlong *)(param_1 + 0x98) + 0x6a0 +
              (ulonglong)(*(uint *)(param_1 + 0xdc) >> 5) * 8) +
             (ulonglong)((*(uint *)(param_1 + 0xdc) & 0x1f) << 2);
    if (lVar11 == *(longlong *)(param_1 + 0x140)) {
      *(undefined4 *)(param_1 + 0xbc) = 1;
      bVar13 = 4;
      *(int *)(lVar11 + 1) = ((int)lVar21 - (int)lVar11) + -5;
      if (*(longlong *)(param_1 + 0x150) == 0) {
        lVar26 = *(longlong *)(param_1 + 0x80);
        lVar21 = lVar11;
        goto LAB_1804cb43c;
      }
      if (*(char *)(param_1 + 0xa4) == '%') {
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 2;
      }
      lVar21 = *(longlong *)(param_1 + 0x80);
      *(char *)(lVar21 + -1) = (char)lVar11 - (char)lVar21;
      *(undefined1 *)(lVar21 + -2) = 0x74;
      puVar9 = (undefined1 *)(lVar21 + -3);
    }
    else {
      bVar13 = 5;
      lVar26 = lVar11;
LAB_1804cb43c:
      if (*(char *)(param_1 + 0xa4) == '%') {
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 6;
      }
      *(undefined1 *)(lVar26 + -6) = 0xf;
      *(int *)(lVar26 + -4) = (int)lVar21 - (int)lVar26;
      *(byte *)(lVar26 + -5) = bVar13 | 0x80;
      puVar9 = (undefined1 *)(lVar26 + -7);
    }
    *(undefined1 **)(param_1 + 0x80) = puVar9;
    *puVar9 = 0x80;
    FUN_1804d0600(param_1,0xf60000fe,0,*(longlong *)(param_1 + 0x98) + -599);
    break;
  case 0x1f:
    uVar20 = 2;
    goto LAB_1804cb6c3;
  case 0x20:
    uVar14 = FUN_1804d1530(param_1,param_2,0xffe7);
    lVar11 = *(longlong *)(param_1 + 0x80);
    iVar18 = (uVar14 & 7) * 0x1000000 + -0x37f0ff03;
    uVar15 = uVar14 >> 3 & 1;
    uVar25 = 0x605fd9U >> ((byte)param_2[1] & 0x1f) & 1;
    *(int *)(lVar11 + -4) = iVar18;
    pbVar16 = (byte *)((char)iVar18 + lVar11);
    if (uVar25 == 0 && uVar15 == 0) {
      pbVar16 = pbVar16 + 1;
    }
    else {
      *pbVar16 = (byte)uVar15 | (char)uVar25 * '\b' | 0x40;
    }
    *(byte **)(param_1 + 0x80) = pbVar16;
    FUN_1804d1e20(param_1,uVar14,(ushort)*param_2);
    break;
  case 0x21:
    FUN_1804cabc0(param_1,param_2,4);
    break;
  case 0x22:
    FUN_1804cabc0(param_1,param_2,1);
    break;
  case 0x23:
    FUN_1804cabc0(param_1,param_2,6);
    break;
  case 0x24:
    FUN_1804c5fd0(param_1,param_2,4,0xf779e2c4);
    break;
  case 0x25:
    FUN_1804c5fd0(param_1,param_2,5,0xf77be2c4);
    break;
  case 0x26:
    FUN_1804c5fd0(param_1,param_2,7,0xf77ae2c4);
    break;
  case 0x27:
    FUN_1804c5fd0(param_1,param_2,0,0);
    break;
  case 0x28:
    FUN_1804c5fd0(param_1,param_2,1,0);
    break;
  case 0x29:
    if (((byte)param_2[1] & 0x1f) == 0xe) {
      FUN_1804c7b90(param_1,param_2,0x580ff2fc);
      return;
    }
    if (((*(longlong *)(param_1 + 0x148) != *(longlong *)(param_1 + 0x80)) &&
        ((0x605fd9U >> ((byte)param_2[1] & 0x1f) & 1) == 0)) &&
       (iVar18 = FUN_1804cc790(param_1), iVar18 != 0)) {
      return;
    }
  case 0x35:
    FUN_1804cabc0(param_1,param_2,0);
    break;
  case 0x2a:
    if ((param_2[1] & 0x1f) == 0xe) {
      FUN_1804c7b90(param_1,param_2,0x5c0ff2fc);
      return;
    }
  case 0x36:
    FUN_1804cabc0(param_1,param_2,5);
    break;
  case 0x2b:
    if ((param_2[1] & 0x1f) == 0xe) {
      FUN_1804c7b90(param_1,param_2,0x590ff2fc);
      return;
    }
  case 0x37:
    FUN_1804cabc0(param_1,param_2,8);
    break;
  case 0x2c:
    bVar13 = (byte)param_2[1] & 0x1f;
    if (bVar13 == 0xe) {
      FUN_1804c7b90(param_1,param_2,0x5e0ff2fc);
      return;
    }
    local_d8 = *param_2;
    lVar11 = 0x5b0;
    if (bVar13 == 0x15) {
      lVar11 = 0x5a0;
    }
    auVar27._4_2_ = (short)(local_d8 >> 0x10);
    auVar27._0_4_ = local_d8;
    auVar27._6_10_ = (unkuint10)0;
    local_d8 = local_d8 & 0xffff;
    uStack_d4 = auVar27._4_4_;
    goto LAB_1804cbe0d;
  case 0x2d:
    bVar13 = (byte)param_2[1] & 0x1f;
    local_d8 = (uint)(ushort)*param_2;
    uStack_d4 = (uint)*(ushort *)((longlong)param_2 + 2);
    if (bVar13 == 0x13) {
      FUN_1804cda10(param_1,param_2,&DAT_18056f190);
      FUN_1804c9160(param_1,&DAT_18056f190,&local_d8);
      return;
    }
    lVar11 = 0x5d0;
    lVar21 = 0x5c0;
    goto LAB_1804cb8e1;
  case 0x2e:
    bVar13 = (byte)param_2[1] & 0x1f;
    local_d8 = (uint)(ushort)*param_2;
    uStack_d4 = (uint)*(ushort *)((longlong)param_2 + 2);
    if (bVar13 == 0xe) {
      FUN_1804cda10(param_1,param_2,&PTR_FUN_18056f2e0);
      FUN_1804c9160(param_1,&PTR_FUN_18056f2e0,&local_d8);
      return;
    }
    lVar11 = 0x5f0;
    lVar21 = 0x5e0;
LAB_1804cb8e1:
    if (bVar13 == 0x15) {
      lVar11 = lVar21;
    }
    goto LAB_1804cbe0d;
  case 0x2f:
    if ((param_2[1] & 0x1f) == 0xe) {
      FUN_1804c7b90(param_1,param_2,0x570f00fd);
      return;
    }
    uVar20 = 3;
LAB_1804cb6c3:
    FUN_1804ccb60(param_1,param_2,uVar20);
    break;
  case 0x30:
    FUN_1804c7b90(param_1,param_2,0x540f00fd);
    break;
  case 0x31:
    bVar13 = *(byte *)((longlong)param_2 + 6);
    iVar18 = (uint)*(byte *)((longlong)param_2 + 7) * 4;
    if (-1 < (char)bVar13) {
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar13 & 0x1f);
      *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar13 & 0x1f);
      local_e8 = iVar18;
      FUN_1804d0810(param_1,0x100ff2fc,bVar13,4);
    }
    local_e8 = iVar18;
    FUN_1804d0810(param_1,0xdd0000fe,3,4);
    *(undefined2 *)(*(longlong *)(param_1 + 0x80) + -2) = 0xd9dd;
    lVar11 = *(longlong *)(param_1 + 0x80);
    *(longlong *)(param_1 + 0x80) = lVar11 + -2;
    *(undefined2 *)(lVar11 + -4) = 0xfdd9;
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -2;
    FUN_1804cfb60(param_1,(ushort)*param_2);
    FUN_1804cfb60(param_1,*(ushort *)((longlong)param_2 + 2));
    break;
  case 0x32:
    if ((param_2[1] & 0x1f) == 0xe) {
      FUN_1804c7b90(param_1,param_2,0x5d0ff2fc);
    }
    else {
      FUN_1804caf00(param_1,param_2,0xf);
    }
    break;
  case 0x33:
    if ((param_2[1] & 0x1f) == 0xe) {
      FUN_1804c7b90(param_1,param_2,0x5f0ff2fc);
    }
    else {
      FUN_1804caf00(param_1,param_2,0xc);
    }
    break;
  case 0x34:
    FUN_1804c7c70(param_1);
    break;
  case 0x38:
    uVar14 = FUN_1804d1530(param_1,param_2,0xffe7);
    FUN_1804c7f90(param_1,param_2,0xffe7);
    if ((*(char *)(param_1 + 0xa5) == -0x80) && (*(int *)(param_1 + 0xa0) == 0)) {
      bVar13 = *(byte *)(param_1 + 0xa4);
      if (bVar13 == uVar14) {
        return;
      }
      lVar11 = *(longlong *)(param_1 + 0x80);
      *(byte *)(lVar11 + -1) = (((byte)uVar14 & 7) << 3 | bVar13 & 7) - 0x40;
      *(undefined4 *)(lVar11 + -5) = 0x8b0000fe;
      *(byte *)(lVar11 + -3) =
           bVar13 >> 3 & 1 | (byte)((uVar14 | 0x80200) >> 1) & 4 |
           (byte)((uVar14 | 0x80200) >> 0x10) | 0x40;
      *(byte **)(param_1 + 0x80) = (byte *)(lVar11 + -3);
      return;
    }
    goto LAB_1804cbbe9;
  case 0x39:
    FUN_1804ca9a0(param_1);
    break;
  case 0x3a:
    FUN_1804c9dd0(param_1,param_2,0);
    break;
  case 0x3b:
    if (*(char *)((longlong)param_2 + 6) != -2) {
      FUN_1804ce680(param_1);
      local_d8 = 0x7fff;
      uStack_d4 = (uint)(ushort)*param_2;
      uStack_d0 = 0x7ffd;
      FUN_1804cda10(param_1,param_2,&PTR_FUN_18056f100);
      FUN_1804c9160(param_1,&PTR_FUN_18056f100,&local_d8);
      bVar13 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x3ffee);
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar13 & 0x1f);
      *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar13 & 0x1f);
      *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x3ffee) = 0xff;
      FUN_1804cf530(param_1,bVar13,*(ushort *)((longlong)param_2 + 2),1);
    }
    break;
  case 0x3c:
  case 0x3d:
    FUN_1804cf760(param_1);
    break;
  case 0x3e:
    uVar14 = FUN_1804d1530(param_1,param_2,0xffe7);
    FUN_1804c80f0(param_1,param_2,0xffe7);
    goto LAB_1804cbbef;
  case 0x3f:
    uVar8 = FUN_1804d1530(param_1,param_2,0xffe7);
    FUN_1804cf530(param_1,uVar8,(ushort)*param_2,*(ushort *)((longlong)param_2 + 2));
    break;
  case 0x40:
    uVar14 = FUN_1804d1530(param_1,param_2,0xffe7);
    FUN_1804c8730(param_1,param_2,0xffe7);
    if (*(byte *)(param_1 + 0xa4) == 0x80) {
      FUN_1804cfe80(param_1,uVar14,*(undefined4 *)(param_1 + 0xa0));
      return;
    }
    if ((*(byte *)(param_1 + 0xa4) == uVar14) && (*(char *)(param_1 + 0xa5) == -0x80)) {
      FUN_1804cfda0(param_1,0x838100,uVar14 | 0x80200,*(undefined4 *)(param_1 + 0xa0));
      return;
    }
LAB_1804cbbe9:
    uVar14 = uVar14 | 0x80200;
LAB_1804cbbef:
    FUN_1804d0390(param_1,0x8d0000fe,uVar14,0x20);
    break;
  case 0x41:
    uVar8 = FUN_1804d1530(param_1,param_2,0xffe7);
    FUN_1804d1e20(param_1,uVar8,0x7fff);
    break;
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x48:
    FUN_1804c5b80(param_1);
    break;
  case 0x45:
  case 0x46:
    FUN_1804c8a40(param_1);
    break;
  case 0x47:
    FUN_1804cdb80(param_1);
    break;
  case 0x49:
    uStack_d4 = (uint)*(ushort *)((longlong)param_2 + 2);
    lVar11 = 0x270;
    if (*(ushort *)((longlong)param_2 + 2) == 0x7fff) {
      lVar11 = 0x260;
    }
    local_d8 = (uint)(ushort)*param_2;
LAB_1804cbe0d:
    FUN_1804cda10(param_1,param_2,(longlong)&PTR_FUN_18056eed0 + lVar11);
    FUN_1804c9160(param_1,(longlong)&PTR_FUN_18056eed0 + lVar11,&local_d8);
    break;
  case 0x4a:
  case 0x4b:
  case 0x4c:
    FUN_1804c5910(param_1);
    break;
  case 0x4d:
  case 0x4e:
    FUN_1804c8b30(param_1);
    break;
  case 0x4f:
  case 0x50:
    FUN_1804ce680(param_1);
    uStack_d4 = *param_2;
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
    local_d8 = 0x7fff;
    auVar28._4_2_ = (short)(uStack_d4 >> 0x10);
    auVar28._0_4_ = uStack_d4;
    auVar28._6_10_ = (unkuint10)0;
    uStack_d4 = uStack_d4 & 0xffff;
    uStack_d0 = auVar28._4_4_;
    FUN_1804cda10(param_1,param_2,&PTR_FUN_18056eef0);
    FUN_1804c9160(param_1,&PTR_FUN_18056eef0,&local_d8);
    break;
  case 0x51:
    FUN_1804ce680(param_1);
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
    local_d8 = 0x7fff;
    uStack_d4 = 0x7ffd;
    FUN_1804cda10(param_1,param_2,&PTR_FUN_18056f0d0);
    FUN_1804c9160(param_1,&PTR_FUN_18056f0d0,&local_d8);
    bVar13 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x3ffee);
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar13 & 0x1f);
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar13 & 0x1f);
    *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x3ffee) = 0xff;
    FUN_1804cfe80(param_1,bVar13,
                  (uint)*(ushort *)((longlong)param_2 + 2) << 0x18 | (uint)(ushort)*param_2);
    break;
  case 0x52:
    FUN_1804ce680(param_1);
    uVar14 = *param_2;
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
    local_d8 = 0x7fff;
    uStack_d4 = (uint)(ushort)uVar14;
    FUN_1804cda10(param_1,param_2,&PTR_FUN_18056f0e0);
    FUN_1804c9160(param_1,&PTR_FUN_18056f0e0,&local_d8);
    break;
  case 0x53:
  case 0x54:
    FUN_1804c6bf0(param_1);
    break;
  case 0x55:
    FUN_1804c65a0(param_1);
    break;
  case 0x56:
    FUN_1804c67d0(param_1);
    break;
  case 0x57:
    uVar14 = *param_2;
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
    local_d8 = (uint)(ushort)uVar14;
    FUN_1804cda10(param_1,param_2,&PTR_FUN_18056f0b0);
    FUN_1804c9160(param_1,&PTR_FUN_18056f0b0,&local_d8);
    break;
  case 0x58:
    bVar13 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)(ushort)*param_2 * 8);
    uVar14 = (uint)bVar13;
    if ((char)bVar13 < '\0') {
      uVar14 = FUN_1804d1420(param_1,(ushort)*param_2,0xffe7);
    }
    uVar25 = ~(1 << (uVar14 & 0x1f)) & 0xffe7;
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar14 & 0x1f));
    uVar15 = uVar25 & *(uint *)(param_1 + 0xa8);
    if (uVar15 == 0) {
      uVar15 = FUN_1804d18c0(param_1,uVar25);
    }
    else {
      uVar25 = (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
      uVar15 = 0x1f;
      if (uVar25 != 0) {
        for (; uVar25 >> uVar15 == 0; uVar15 = uVar15 - 1) {
        }
      }
      uVar15 = uVar15 ^ 0x18;
    }
    cVar12 = (char)*(undefined8 *)(param_1 + 0x80);
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar15 & 0x1f);
    local_e8 = 0x18;
    FUN_1804d0810(param_1,0x890000fe,uVar15 | 0x80200,uVar14);
    FUN_1804d0600(param_1,0x890000fe,uVar14 | 0x80200,*(longlong *)(param_1 + 0x98) + -0x2a8);
    FUN_1804d0600(param_1,0x8b0000fe,uVar15 | 0x80200,*(longlong *)(param_1 + 0x98) + -0x2a8);
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -1;
    local_e8 = 8;
    **(undefined1 **)(param_1 + 0x80) = 0xfb;
    FUN_1804d0810(param_1,0x800000fe,4,uVar14);
    local_e8 = 8;
    goto LAB_1804cc0e4;
  case 0x59:
    FUN_1804d1cb0(param_1,0x3f0f07);
    uVar20 = *(undefined8 *)(param_1 + 0x80);
    uStack_d4 = (uint)(ushort)*param_2;
    local_d8 = 0x7ffd;
    FUN_1804c9160(param_1,&PTR_LAB_18056f160,&local_d8);
    bVar13 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x3ffee);
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar13 & 0x1f);
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar13 & 0x1f);
    *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x3ffee) = 0xff;
    FUN_1804d0150(param_1,bVar13,*(longlong *)(param_1 + 0x98) + -0x2e8);
    bVar13 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)(ushort)*param_2 * 8);
    uVar14 = (uint)bVar13;
    cVar12 = (char)uVar20;
    lVar11 = *(longlong *)(param_1 + 0x80);
    *(char *)(lVar11 + -1) = cVar12 - (char)lVar11;
    *(undefined1 *)(lVar11 + -2) = 0x74;
    *(undefined1 **)(param_1 + 0x80) = (undefined1 *)(lVar11 + -3);
    *(undefined1 *)(lVar11 + -3) = 3;
    uVar4 = *(ushort *)((longlong)param_2 + 2);
    if (uVar4 < 0x8000) {
      FUN_1804d0600(param_1,0xf60000fe,0,
                    *(longlong *)(*(longlong *)(param_1 + 0x90) + 8 + (ulonglong)uVar4 * 8) + 8);
      local_e8 = 0xfffffff8;
    }
    else {
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)uVar4 * 8);
      uVar15 = (uint)bVar3;
      uVar14 = (uint)bVar13;
      if ((char)bVar3 < '\0') {
        uVar15 = FUN_1804d1420(param_1,uVar4,~(1 << (uVar14 & 0x1f)) & 0xf07);
      }
      local_e8 = 8;
      *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar15 & 0x1f));
      FUN_1804d0810(param_1,0xf60000fe,0);
      local_e8 = 0xfffffff8;
    }
LAB_1804cc0e4:
    lVar11 = *(longlong *)(param_1 + 0x80);
    *(char *)(lVar11 + -1) = cVar12 - (char)lVar11;
    *(undefined1 *)(lVar11 + -2) = 0x74;
    *(undefined1 **)(param_1 + 0x80) = (undefined1 *)(lVar11 + -3);
    *(undefined1 *)(lVar11 + -3) = 4;
    FUN_1804d0810(param_1,0xf60000fe,0,uVar14);
    break;
  case 0x5b:
    FUN_1804c7530(param_1);
    break;
  case 0x5c:
    FUN_1804cf140(param_1);
    break;
  case 0x5d:
    FUN_1804ce680(param_1);
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
    local_d8 = 0x7fff;
    if (*(ushort *)((longlong)param_2 + 2) == 1) {
      uStack_d4 = 0x7ffd;
      ppuVar19 = &PTR_FUN_18056ef20;
    }
    else {
      ppuVar19 = &PTR_FUN_18056ef10;
      uStack_d4 = (uint)(ushort)*param_2;
      if (*(ushort *)((longlong)param_2 + 2) != 0) {
        ppuVar19 = &PTR_FUN_18056ef30;
      }
    }
    FUN_1804cda10(param_1,param_2,ppuVar19);
    FUN_1804c9160(param_1,ppuVar19,&local_d8);
    if (*(ushort *)((longlong)param_2 + 2) == 1) {
      bVar13 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x3ffee);
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar13 & 0x1f);
      *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar13 & 0x1f);
      *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x3ffee) = 0xff;
      FUN_1804cf530(param_1,bVar13,(ushort)*param_2,1);
    }
    break;
  case 0x5e:
    uVar14 = 0x3f0f07;
    if (-1 < (char)*(byte *)((longlong)param_2 + 6)) {
      uVar14 = 1 << (*(byte *)((longlong)param_2 + 6) & 0x1f) | 0x3f0f07;
    }
    FUN_1804d1cb0(param_1,uVar14);
    lVar21 = *(longlong *)
              (*(longlong *)(param_1 + 0x98) + 0x6a0 +
              (ulonglong)(*(uint *)(param_1 + 0xdc) >> 5) * 8) +
             (ulonglong)((*(uint *)(param_1 + 0xdc) & 0x1f) << 2);
    lVar11 = *(longlong *)(param_1 + 0x80);
    if (lVar11 == *(longlong *)(param_1 + 0x140)) {
      *(undefined4 *)(param_1 + 0xbc) = 1;
      bVar13 = 5;
      *(int *)(lVar11 + 1) = ((int)lVar21 - (int)lVar11) + -5;
      if (*(longlong *)(param_1 + 0x150) == 0) {
        lVar21 = lVar11;
        lVar11 = *(longlong *)(param_1 + 0x80);
        goto LAB_1804cc3df;
      }
      if (*(char *)(param_1 + 0xa4) == '%') {
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 2;
      }
      lVar21 = *(longlong *)(param_1 + 0x80);
      *(char *)(lVar21 + -1) = (char)lVar11 - (char)lVar21;
      puVar22 = (undefined4 *)(lVar21 + -7);
      puVar9 = (undefined1 *)(lVar21 + -3);
      *(undefined1 *)(lVar21 + -2) = 0x75;
      lVar21 = lVar21 + -4;
    }
    else {
      bVar13 = 4;
LAB_1804cc3df:
      if (*(char *)(param_1 + 0xa4) == '%') {
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 6;
      }
      *(undefined1 *)(lVar11 + -6) = 0xf;
      *(int *)(lVar11 + -4) = (int)lVar21 - (int)lVar11;
      *(byte *)(lVar11 + -5) = bVar13 | 0x80;
      puVar9 = (undefined1 *)(lVar11 + -7);
      lVar21 = lVar11 + -8;
      puVar22 = (undefined4 *)(lVar11 + -0xb);
    }
    *puVar9 = 0xc0;
    *puVar22 = 0x850000fe;
    *(longlong *)(param_1 + 0x80) = lVar21;
    local_d8 = (uint)(ushort)*param_2;
    uStack_d4 = 0x7ffd;
    FUN_1804c9160(param_1,&PTR_FUN_18056ef00,&local_d8);
    bVar13 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x3ffee);
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar13 & 0x1f);
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar13 & 0x1f);
    *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x3ffee) = 0xff;
    local_e8 = (uint)*(byte *)((longlong)param_2 + 7) << 2;
    FUN_1804d0810(param_1,0x8d0000fe,bVar13 | 0x80200,4);
    break;
  case 0x5f:
  case 0x61:
  case 0x62:
    goto switchD_1804cb09a_caseD_5f;
  case 0x60:
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
    goto switchD_1804cb09a_caseD_5f;
  case 99:
    FUN_1804c6980(param_1);
  }
  return;
switchD_1804cb09a_caseD_0:
  FUN_1804c6f60(param_1);
  return;
switchD_1804cb09a_caseD_5f:
  uVar4 = *(ushort *)((longlong)param_2 + 2);
  uVar14 = *(uint *)(&DAT_18056eed8 + (ulonglong)uVar4 * 0x10) & 0x100;
  if (uVar14 != 0) {
    local_c8 = 0x7fff;
  }
  uVar15 = ((*(uint *)(&DAT_18056eed8 + (ulonglong)uVar4 * 0x10) & 0xff) - 1) + (uint)(uVar14 == 0);
  uVar17 = (ulonglong)uVar15;
  puVar24 = &local_c8;
  if (uVar14 != 0) {
    puVar24 = local_c4;
  }
  puVar23 = param_2;
  if (1 < uVar15) {
    lVar11 = *(longlong *)(param_1 + 0x90);
    do {
      uVar14 = *puVar23;
      uVar15 = (int)uVar17 - 1;
      uVar17 = (ulonglong)uVar15;
      puVar23 = (uint *)(lVar11 + (ulonglong)(ushort)uVar14 * 8);
      uVar5 = *(ushort *)(lVar11 + 2 + (ulonglong)(ushort)uVar14 * 8);
      uVar14 = 0;
      if (uVar5 != 0x7fff) {
        uVar14 = (uint)uVar5;
      }
      puVar24[uVar17] = uVar14;
    } while (1 < uVar15);
  }
  uVar14 = 0;
  if ((ushort)*puVar23 != 0x7fff) {
    uVar14 = (uint)(ushort)*puVar23;
  }
  *puVar24 = uVar14;
  FUN_1804cda10(param_1,param_2,&PTR_FUN_18056eed0 + (ulonglong)uVar4 * 2);
  FUN_1804c9160(param_1,&PTR_FUN_18056eed0 + (ulonglong)uVar4 * 2,&local_c8);
  return;
}



/* ===== 1804cc740 FUN_1804cc740 ===== */

undefined8 FUN_1804cc740(longlong param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 < 0x8000) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    uVar3 = (ulonglong)param_2;
    if ((*(char *)(lVar2 + 5 + uVar3 * 8) == '\x1b') ||
       ((0x605fd9U >> (*(byte *)(lVar2 + 4 + uVar3 * 8) & 0x1f) & 1) == 0)) {
      *param_3 = *(int *)(lVar2 + uVar3 * 8);
      return 1;
    }
    iVar1 = *(int *)(lVar2 + 8 + uVar3 * 8);
    if (*(longlong *)(lVar2 + 8 + uVar3 * 8) == (longlong)iVar1) {
      *param_3 = iVar1;
      return 1;
    }
  }
  return 0;
}



/* ===== 1804cc790 FUN_1804cc790 ===== */

undefined8 FUN_1804cc790(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  ushort *puVar8;
  int *piVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  byte bVar13;
  
  uVar1 = *param_2;
  uVar10 = (ulonglong)param_2[1];
  lVar6 = *(longlong *)(param_1 + 0x90);
  *(undefined2 *)(param_1 + 0xa4) = 0x8080;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  puVar8 = (ushort *)(lVar6 + (ulonglong)uVar1 * 8);
  bVar11 = *(byte *)(lVar6 + 6 + (ulonglong)uVar1 * 8);
  if ((char)bVar11 < '\0') {
    if (*param_2 == param_2[1]) {
      return 0;
    }
    if (*(char *)((longlong)puVar8 + 5) != ')') {
      return 0;
    }
    if ((uint)*param_2 <= *(uint *)(param_1 + 0xf8)) {
      return 0;
    }
    if ((0x7fff < param_2[1]) && (0x7fff < puVar8[1])) {
      return 0;
    }
    uVar7 = FUN_1804d13e0(param_1,*puVar8,0xffe7);
    uVar12 = ~(1 << (uVar7 & 0x1f)) & 0xffe7;
    *(char *)(param_1 + 0xa4) = (char)uVar7;
    if (param_2[1] < 0x8000) {
      uVar5 = *(undefined4 *)(lVar6 + uVar10 * 8);
    }
    else {
      uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + (ulonglong)puVar8[1] * 8);
      puVar8 = param_2;
    }
    *(undefined4 *)(param_1 + 0xa0) = uVar5;
    uVar7 = FUN_1804d13e0(param_1,puVar8[1],uVar12);
    uVar12 = uVar12 & ~(1 << (uVar7 & 0x1f));
    *(char *)(param_1 + 0xa5) = (char)uVar7;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xb0) & ~(1 << (bVar11 & 0x1f));
    *(uint *)(param_1 + 0xb0) = uVar7;
    uVar12 = ~(1 << (bVar11 & 0x1f)) & 0xffe7;
    *(char *)(param_1 + 0xa4) = (char)puVar8[3];
    uVar1 = param_2[1];
    if ((uVar1 < 0x8000) || (-1 < *(char *)(lVar6 + 6 + uVar10 * 8))) {
      bVar11 = (byte)param_2[3];
      if (-1 < (char)bVar11) {
        if (((puVar8[2] & 0x40) != 0) &&
           (*(ushort *)(param_1 + 0x160 + (ulonglong)bVar11 * 2) == *param_2)) {
          return 0;
        }
        if (((*(byte *)(lVar6 + 4 + uVar10 * 8) & 0x40) != 0) &&
           (*(ushort *)(param_1 + 0x160 + (ulonglong)bVar11 * 2) == uVar1)) {
          return 0;
        }
      }
      if (uVar1 < 0x8000) {
        *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(lVar6 + uVar10 * 8);
      }
      else {
        uVar4 = (uint)*(byte *)(lVar6 + 6 + uVar10 * 8);
        uVar12 = uVar12 & ~(1 << (uVar4 & 0x1f));
        *(uint *)(param_1 + 0xb0) = uVar7 & ~(1 << (uVar4 & 0x1f));
        *(undefined1 *)(param_1 + 0xa5) = *(undefined1 *)(lVar6 + 6 + uVar10 * 8);
      }
    }
    else {
      if (((*(char *)(lVar6 + 5 + uVar10 * 8) != ')') || ((uint)uVar1 <= *(uint *)(param_1 + 0xf8)))
         || (0x7fff < *(ushort *)(lVar6 + 2 + uVar10 * 8))) {
        return 0;
      }
      uVar7 = FUN_1804d13e0(param_1,*(undefined2 *)(lVar6 + uVar10 * 8),uVar12);
      *(char *)(param_1 + 0xa5) = (char)uVar7;
      uVar12 = uVar12 & ~(1 << (uVar7 & 0x1f));
      *(undefined4 *)(param_1 + 0xa0) =
           *(undefined4 *)
            (*(longlong *)(param_1 + 0x90) + (ulonglong)*(ushort *)(lVar6 + 2 + uVar10 * 8) * 8);
    }
  }
  uVar7 = FUN_1804d1530(param_1,param_2,uVar12);
  piVar9 = *(int **)(param_1 + 0x80);
  bVar11 = *(byte *)(param_1 + 0xa4);
  iVar2 = *(int *)(param_1 + 0xa0);
  bVar3 = (byte)(uVar7 >> 0x10);
  if (bVar11 == 0x80) {
    bVar11 = 0;
    piVar9[-1] = iVar2;
    bVar13 = *(byte *)(param_1 + 0xa5);
    if (bVar13 == 0x80) {
      piVar9 = (int *)((longlong)piVar9 + -5);
      uVar12 = 4;
      *(undefined1 *)piVar9 = 0x25;
      goto LAB_1804ccaa6;
    }
    uVar12 = 5;
    piVar9 = piVar9 + -1;
LAB_1804cca2a:
    *(byte *)((longlong)piVar9 + -1) =
         ((bVar13 & 7) << 3 | (byte)uVar12 & 7) + *(char *)(param_1 + 0xa6);
    *(byte *)((longlong)piVar9 + -2) = ((byte)uVar7 & 7) << 3 | bVar11 | 4;
    bVar11 = *(byte *)(param_1 + 0xa5);
    *(undefined4 *)((longlong)piVar9 + -6) = 0x8d0000fe;
    uVar7 = uVar7 >> 1 & 0x104 | bVar11 >> 2 & 2 | uVar12 >> 3 & 1;
    if (uVar7 != 0) {
      lVar6 = -4;
      *(byte *)(piVar9 + -1) = (byte)uVar7 | bVar3 | 0x40;
      goto LAB_1804ccaf8;
    }
  }
  else {
    uVar12 = (uint)bVar11;
    if (bVar11 == 0x25) {
      piVar9 = piVar9 + -1;
      bVar11 = 0;
      *piVar9 = iVar2;
    }
    else {
      if ((iVar2 == 0) && ((uVar12 & 7) != 5)) {
        bVar11 = 0;
      }
      else if (iVar2 == (char)iVar2) {
        piVar9 = (int *)((longlong)piVar9 + -1);
        bVar11 = 0x40;
        *(char *)piVar9 = (char)iVar2;
      }
      else {
        piVar9 = piVar9 + -1;
        bVar11 = 0x80;
        *piVar9 = iVar2;
      }
      bVar13 = *(byte *)(param_1 + 0xa5);
      if (bVar13 != 0x80) goto LAB_1804cca2a;
      if ((uVar12 & 7) == 4) {
        piVar9 = (int *)((longlong)piVar9 + -1);
        *(undefined1 *)piVar9 = 0x24;
      }
    }
LAB_1804ccaa6:
    *(byte *)((longlong)piVar9 + -1) = ((byte)uVar7 & 7) << 3 | (byte)uVar12 & 7 | bVar11;
    uVar7 = uVar7 >> 1 & 0x104 | uVar12 >> 3 & 1;
    *(undefined4 *)((longlong)piVar9 + -5) = 0x8d0000fe;
    if (uVar7 == 0) {
      lVar6 = -2;
      goto LAB_1804ccaf8;
    }
    *(byte *)((longlong)piVar9 + -3) = (byte)uVar7 | bVar3 | 0x40;
  }
  lVar6 = -3;
LAB_1804ccaf8:
  *(undefined1 **)(param_1 + 0x80) = (undefined1 *)(lVar6 + (longlong)piVar9);
  return 1;
}



/* ===== 1804ccb30 FUN_1804ccb30 ===== */

void FUN_1804ccb30(longlong param_1)

{
  code *pcVar1;
  
  FUN_1804bc1a0(*(undefined8 *)(param_1 + 0x98),
                (*(longlong *)(param_1 + 0x128) - *(longlong *)(param_1 + 0x80)) + 0x100);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 1804ccb60 FUN_1804ccb60 ===== */

void FUN_1804ccb60(longlong param_1,undefined2 *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  ulonglong uVar7;
  
  uVar3 = FUN_1804d1530(param_1,param_2,0xffe7);
  lVar2 = *(longlong *)(param_1 + 0x80);
  uVar7 = (ulonglong)(0x605fd9 >> (*(byte *)(param_2 + 2) & 0x1f)) & 0xffffffffffffff01;
  cVar6 = (char)uVar7;
  uVar1 = (-(uint)(cVar6 != '\0') & 0x80200) + param_3;
  *(byte *)(lVar2 + -1) = (((byte)uVar1 & 7) << 3 | (byte)uVar3 & 7) - 0x40;
  *(undefined4 *)(lVar2 + -5) = 0xf70000fe;
  uVar5 = uVar1 >> 1 & 0x104 | uVar3 >> 3 & 1;
  if (uVar5 == 0) {
    lVar4 = -2;
  }
  else {
    lVar4 = -3;
    *(byte *)(lVar2 + -3) = (byte)uVar5 | (byte)(uVar1 >> 0x10) | 0x40;
  }
  *(longlong *)(param_1 + 0x80) = lVar4 + lVar2;
  FUN_1804d1e20(param_1,uVar3,*param_2,CONCAT71((int7)(uVar7 >> 8),-cVar6));
  return;
}



/* ===== 1804ccc30 FUN_1804ccc30 ===== */

void FUN_1804ccc30(ushort *param_1)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ushort *puVar9;
  undefined8 uVar10;
  byte bVar11;
  uint uVar12;
  undefined4 uVar13;
  
  lVar5 = *(longlong *)(param_1 + 0x48);
  bVar11 = 0;
  bVar7 = false;
  puVar9 = (ushort *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x68) - 1) * 8);
  if (*(char *)(lVar5 + 5 + (ulonglong)(*(int *)(param_1 + 0x68) - 1) * 8) == '\x13') {
    do {
      if ((*(char *)((longlong)puVar9 + 7) != '\0') &&
         (*(char *)(lVar5 + 7 + (ulonglong)*puVar9 * 8) != '\0')) {
        bVar6 = (byte)(((byte)puVar9[2] & 0x1f) - 0xd) < 2;
        bVar11 = bVar11 | bVar6 + 1U;
        bVar7 = (bool)(bVar7 | !bVar6);
      }
      pcVar1 = (char *)((longlong)puVar9 + -3);
      puVar9 = puVar9 + -4;
    } while (*pcVar1 == '\x13');
    if (bVar7) {
      uVar8 = *(uint *)(param_1 + 0x54) & 0xffe7;
      if (uVar8 == 0) {
        uVar12 = 0;
        FUN_1804d0810(param_1,0x8b0000fe,
                      -(uint)((0x605fd9U >> (*(byte *)(lVar5 + 4 + (ulonglong)*param_1 * 8) & 0x1f)
                              & 1) != 0) & 0x80200,4,0);
      }
      else {
        uVar12 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
          }
        }
      }
      cVar2 = *(char *)(*(longlong *)(param_1 + 0x48) + 5 +
                       (ulonglong)(*(int *)(param_1 + 0x68) - 1) * 8);
      puVar9 = (ushort *)
               (*(longlong *)(param_1 + 0x48) + (ulonglong)(*(int *)(param_1 + 0x68) - 1) * 8);
      while (cVar2 == '\x13') {
        if (*(char *)((longlong)puVar9 + 7) != '\0') {
          bVar3 = *(byte *)(*(longlong *)(param_1 + 0x48) + 7 + (ulonglong)*puVar9 * 8);
          if ((bVar3 != 0) && (1 < (byte)(((byte)puVar9[2] & 0x1f) - 0xd))) {
            bVar4 = *(byte *)(*(longlong *)(param_1 + 0x48) + 4 + (ulonglong)*puVar9 * 8);
            if (uVar12 < 0x10) {
              uVar10 = 0x890000fe;
              uVar8 = (-(uint)((0x605fd9U >> (bVar4 & 0x1f) & 1) != 0) & 0x80200) + uVar12;
            }
            else {
              uVar10 = 0x110ff3fc;
              uVar8 = uVar12;
              if ((bVar4 & 0x1f) == 0xe) {
                uVar10 = 0x110ff2fc;
              }
            }
            FUN_1804d0810(param_1,uVar10,uVar8,4,(uint)bVar3 * 4);
            if (uVar12 < 0x10) {
              uVar10 = 0x8b0000fe;
              uVar8 = (-(uint)((0x605fd9U >> ((byte)puVar9[2] & 0x1f) & 1) != 0) & 0x80200) + uVar12
              ;
            }
            else {
              uVar10 = 0x100ff3fc;
              uVar8 = uVar12;
              if (((byte)puVar9[2] & 0x1f) == 0xe) {
                uVar10 = 0x100ff2fc;
              }
            }
            FUN_1804d0810(param_1,uVar10,uVar8,4,(uint)*(byte *)((longlong)puVar9 + 7) * 4);
            if (*(ulonglong *)(param_1 + 0x40) < *(ulonglong *)(param_1 + 0x44)) goto LAB_1804cd10c;
          }
        }
        cVar2 = *(char *)((longlong)puVar9 + -3);
        puVar9 = puVar9 + -4;
      }
      if ((*(uint *)(param_1 + 0x54) >> ((byte)uVar12 & 0x1f) & 1) == 0) {
        bVar3 = *(byte *)(*(longlong *)(param_1 + 0x48) + 4 +
                         (ulonglong)param_1[(ulonglong)uVar12 * 2] * 8);
        if (uVar12 < 0x10) {
          uVar10 = 0x890000fe;
          uVar12 = (-(uint)((0x605fd9U >> (bVar3 & 0x1f) & 1) != 0) & 0x80200) + uVar12;
        }
        else {
          uVar10 = 0x110ff3fc;
          if ((bVar3 & 0x1f) == 0xe) {
            uVar10 = 0x110ff2fc;
          }
        }
        FUN_1804d0810(param_1,uVar10,uVar12,4,0);
      }
    }
    if ((bVar11 & 2) != 0) {
      uVar8 = 0x10;
      uVar12 = *(uint *)(param_1 + 0x54) & 0xffff0000;
      if ((uVar12 != 0) && (uVar8 = 0, uVar12 != 0)) {
        for (; (uVar12 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      if ((*(uint *)(param_1 + 0x54) >> ((byte)uVar8 & 0x1f) & 1) == 0) {
        bVar11 = *(byte *)(*(longlong *)(param_1 + 0x48) + 4 +
                          (ulonglong)param_1[(ulonglong)uVar8 * 2] * 8);
        if (uVar8 < 0x10) {
          FUN_1804d0810(param_1,0x8b0000fe,
                        (-(uint)((0x605fd9U >> (bVar11 & 0x1f) & 1) != 0) & 0x80200) + uVar8,4,0);
        }
        else {
          uVar10 = 0x100ff3fc;
          if ((bVar11 & 0x1f) == 0xe) {
            uVar10 = 0x100ff2fc;
          }
          FUN_1804d0810(param_1,uVar10,uVar8,4,0);
        }
      }
      cVar2 = *(char *)(*(longlong *)(param_1 + 0x48) + 5 +
                       (ulonglong)(*(int *)(param_1 + 0x68) - 1) * 8);
      puVar9 = (ushort *)
               (*(longlong *)(param_1 + 0x48) + (ulonglong)(*(int *)(param_1 + 0x68) - 1) * 8);
      while (cVar2 == '\x13') {
        if (*(char *)((longlong)puVar9 + 7) != '\0') {
          bVar11 = *(byte *)(*(longlong *)(param_1 + 0x48) + 7 + (ulonglong)*puVar9 * 8);
          if ((bVar11 != 0) && ((byte)(((byte)puVar9[2] & 0x1f) - 0xd) < 2)) {
            bVar3 = *(byte *)(*(longlong *)(param_1 + 0x48) + 4 + (ulonglong)*puVar9 * 8);
            if (uVar8 < 0x10) {
              uVar10 = 0x890000fe;
              uVar12 = (-(uint)((0x605fd9U >> (bVar3 & 0x1f) & 1) != 0) & 0x80200) + uVar8;
            }
            else {
              uVar10 = 0x110ff3fc;
              uVar12 = uVar8;
              if ((bVar3 & 0x1f) == 0xe) {
                uVar10 = 0x110ff2fc;
              }
            }
            FUN_1804d0810(param_1,uVar10,uVar12,4,(uint)bVar11 * 4);
            if (uVar8 < 0x10) {
              uVar10 = 0x8b0000fe;
              uVar12 = (-(uint)((0x605fd9U >> ((byte)puVar9[2] & 0x1f) & 1) != 0) & 0x80200) + uVar8
              ;
            }
            else {
              uVar10 = 0x100ff3fc;
              uVar12 = uVar8;
              if (((byte)puVar9[2] & 0x1f) == 0xe) {
                uVar10 = 0x100ff2fc;
              }
            }
            FUN_1804d0810(param_1,uVar10,uVar12,4,(uint)*(byte *)((longlong)puVar9 + 7) * 4);
            if (*(ulonglong *)(param_1 + 0x40) < *(ulonglong *)(param_1 + 0x44)) {
LAB_1804cd10c:
                    /* WARNING: Subroutine does not return */
              FUN_1804ccb30(param_1);
            }
          }
        }
        cVar2 = *(char *)((longlong)puVar9 + -3);
        puVar9 = puVar9 + -4;
      }
      if ((*(uint *)(param_1 + 0x54) >> ((byte)uVar8 & 0x1f) & 1) == 0) {
        bVar11 = *(byte *)(*(longlong *)(param_1 + 0x48) + 4 +
                          (ulonglong)param_1[(ulonglong)uVar8 * 2] * 8);
        if (uVar8 < 0x10) {
          uVar13 = 0x890000fe;
          uVar8 = (-(uint)((0x605fd9U >> (bVar11 & 0x1f) & 1) != 0) & 0x80200) + uVar8;
        }
        else {
          uVar13 = 0x110ff3fc;
          if ((bVar11 & 0x1f) == 0xe) {
            uVar13 = 0x110ff2fc;
          }
        }
        FUN_1804d0810(param_1,uVar13,uVar8,4,0);
      }
    }
  }
  return;
}



/* ===== 1804cd120 FUN_1804cd120 ===== */

void FUN_1804cd120(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  do {
    do {
      uVar10 = 0;
      uVar9 = 0;
      for (uVar7 = *(uint *)(param_1 + 0xb4); uVar7 != 0; uVar7 = uVar7 & ~(1 << (uVar8 & 0x1f))) {
        uVar8 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
        uVar11 = (ulonglong)uVar8;
        bVar2 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 +
                         (ulonglong)*(ushort *)(param_1 + 0x160 + uVar11 * 2) * 8);
        if (uVar8 != bVar2) {
          if ((*(uint *)(param_1 + 0xa8) >> ((byte)uVar8 & 0x1f) & 1) == 0) {
            uVar3 = *(ushort *)(param_1 + uVar11 * 4);
            if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 4 + (ulonglong)uVar3 * 8) & 0x20) != 0) {
              uVar10 = uVar10 | 1 << (uVar8 & 0x1f);
              if (-1 < (char)bVar2) {
                uVar9 = uVar9 | 1 << (bVar2 & 0x1f);
              }
              goto LAB_1804cd1d1;
            }
            FUN_1804d20f0(param_1,uVar3);
            if (*(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88)) goto LAB_1804cd438;
          }
          if ((-1 < (char)bVar2) &&
             (FUN_1804d2040(param_1,bVar2,uVar11),
             *(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88))) goto LAB_1804cd438;
        }
LAB_1804cd1d1:
      }
      uVar7 = *(uint *)(param_1 + 0xa8);
      if (uVar10 == 0) {
        uVar7 = ~(uVar7 | *(uint *)(param_1 + 0xb4)) & *(uint *)(param_1 + 0xac) & 0xffff0000;
        goto joined_r0x0001804cd2cf;
      }
    } while ((uVar10 & uVar7) != 0);
    if ((uVar10 & 0xffe7) != 0) {
      uVar7 = uVar7 & ~uVar10;
      uVar8 = uVar7 & 0xffe7;
      if (uVar8 == 0) {
        FUN_1804d18c0(param_1,~uVar10 & 0xffe7);
      }
      else {
        uVar7 = (uVar7 & 0xff00) << 8 | uVar8 << 0x18;
        iVar5 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
      }
      uVar7 = ~uVar9 & uVar10;
      if ((~uVar9 & uVar10 & 0xffe7) == 0) {
        uVar7 = uVar10;
      }
      uVar8 = (uVar7 & 0xff00) << 8 | (uVar7 & 0xffe7) << 0x18;
      uVar7 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> uVar7 == 0; uVar7 = uVar7 - 1) {
        }
      }
      FUN_1804d2040(param_1,uVar7 ^ 0x18);
    }
    if ((uVar10 & 0xffff0000) != 0) {
      uVar7 = *(uint *)(param_1 + 0xa8) & ~uVar10;
      if ((uVar7 & 0xffff0000) == 0) {
        FUN_1804d18c0(param_1,~uVar10 & 0xffff0000);
      }
      else {
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8;
        iVar5 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
      }
      uVar7 = ~uVar9 & uVar10;
      if ((~uVar9 & uVar10 & 0xffff0000) == 0) {
        uVar7 = uVar10;
      }
      uVar10 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8;
      uVar7 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> uVar7 == 0; uVar7 = uVar7 - 1) {
        }
      }
      FUN_1804d2040(param_1,uVar7 ^ 0x18);
    }
  } while (*(ulonglong *)(param_1 + 0x88) <= *(ulonglong *)(param_1 + 0x80));
  goto LAB_1804cd438;
  while( true ) {
    uVar10 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
    FUN_1804d20f0(param_1,*(undefined2 *)(param_1 + (ulonglong)uVar10 * 4));
    uVar7 = uVar7 & ~(1 << (uVar10 & 0x1f));
    if (*(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88)) break;
joined_r0x0001804cd2cf:
    if (uVar7 == 0) {
      uVar7 = ~(*(uint *)(param_1 + 0xb4) | *(uint *)(param_1 + 0xa8)) & *(uint *)(param_1 + 0xac);
      goto joined_r0x0001804cd30f;
    }
  }
  goto LAB_1804cd438;
joined_r0x0001804cd343:
  if (uVar7 == 0) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x90);
  uVar9 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  uVar10 = 0x1f;
  if (uVar9 != 0) {
    for (; uVar9 >> uVar10 == 0; uVar10 = uVar10 - 1) {
    }
  }
  uVar10 = uVar10 ^ 0x18;
  uVar11 = (ulonglong)*(ushort *)(param_1 + 0x160 + (ulonglong)uVar10 * 2);
  if (*(char *)(lVar4 + 7 + uVar11 * 8) != '\0') {
    pbVar1 = (byte *)(lVar4 + 4 + uVar11 * 8);
    *pbVar1 = *pbVar1 & 0xdf;
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + uVar11 * 8);
    uVar9 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      uVar9 = FUN_1804d1420(param_1,uVar11,1 << ((byte)uVar10 & 0x1f));
    }
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar9 & 0x1f));
    bVar2 = *(byte *)(lVar4 + 4 + uVar11 * 8);
    if (uVar10 < 0x10) {
      uVar6 = 0x890000fe;
      uVar9 = (-(uint)((0x605fd9U >> (bVar2 & 0x1f) & 1) != 0) & 0x80200) + uVar10;
    }
    else {
      uVar6 = 0x110ff3fc;
      uVar9 = uVar10;
      if ((bVar2 & 0x1f) == 0xe) {
        uVar6 = 0x110ff2fc;
      }
    }
    FUN_1804d0810(param_1,uVar6,uVar9,4,(uint)*(byte *)(lVar4 + 7 + uVar11 * 8) * 4);
    if (*(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88)) goto LAB_1804cd438;
  }
  uVar7 = uVar7 & ~(1 << (uVar10 & 0x1f));
  goto joined_r0x0001804cd343;
  while( true ) {
    uVar10 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
    FUN_1804d20f0(param_1,*(undefined2 *)(param_1 + (ulonglong)uVar10 * 4));
    uVar7 = uVar7 & ~(1 << (uVar10 & 0x1f));
    if (*(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88)) break;
joined_r0x0001804cd30f:
    if (uVar7 == 0) {
      uVar7 = *(uint *)(param_1 + 0xb4);
      goto joined_r0x0001804cd343;
    }
  }
LAB_1804cd438:
                    /* WARNING: Subroutine does not return */
  FUN_1804ccb30(param_1);
}



/* ===== 1804cd450 FUN_1804cd450 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804cd450(undefined8 *param_1)

{
  ushort *puVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  undefined4 *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  
  uVar9 = _UNK_180570478;
  uVar8 = _DAT_180570470;
  lVar5 = param_1[0x22];
  cVar2 = *(char *)(lVar5 + 0x72);
  uVar4 = *(uint *)(lVar5 + 0xc);
  *(undefined4 *)(param_1 + 0x15) = 0xffffffe7;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *param_1 = uVar8;
  param_1[1] = uVar9;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar8;
  param_1[0xb] = uVar9;
  param_1[0xc] = uVar8;
  param_1[0xd] = uVar9;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar9;
  lVar6 = param_1[0x12];
  for (puVar14 = (undefined4 *)(lVar6 + (ulonglong)*(uint *)(lVar5 + 0x28) * 8);
      puVar14 < (undefined4 *)(lVar6 + 0x40000); puVar14 = puVar14 + 2) {
    *(undefined2 *)((longlong)puVar14 + 6) = 0xff;
    if (((0x605fd9U >> (*(byte *)(puVar14 + 1) & 0x1f) & 1) != 0) &&
       (*(char *)((longlong)puVar14 + 5) != '\x1b')) {
      *puVar14 = 0;
      puVar14 = puVar14 + 2;
    }
  }
  *(undefined2 *)(lVar6 + 0x40006) = 0x82;
  puVar16 = (ushort *)(param_1[0x12] + 0x40008);
  *(uint *)(param_1 + 0x1b) = uVar4;
  *(uint *)((longlong)param_1 + 0xd4) = uVar4;
  *(uint *)((longlong)param_1 + 0xdc) = (uint)*(ushort *)(lVar5 + 10);
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x8000;
  *(uint *)(param_1 + 0x1a) = uVar4;
  *(uint *)(param_1 + 0x19) = uVar4;
  if (param_1[0x23] != 0) {
    puVar15 = (ushort *)
              FUN_1804bca00(param_1[0x13],param_1[0x23],*(undefined4 *)(param_1[0x13] + 0xbcc),
                            puVar16);
    if (0xfa < (longlong)puVar15 - (longlong)puVar16 >> 3) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1[0x13],0x22);
    }
    puVar1 = (ushort *)(param_1 + 0x34);
    *(int *)((longlong)param_1 + 0xcc) = (int)((longlong)puVar15 + (-8 - param_1[0x12]) >> 3);
    for (; puVar16 < puVar15; puVar16 = puVar16 + 4) {
      uVar12 = puVar16[3];
      *puVar1 = uVar12;
      puVar1 = puVar1 + 1;
      uVar11 = 0xff;
      if (uVar12 < 0x100) {
        uVar11 = uVar12 & 0x7f | 0x80;
      }
      puVar16[3] = uVar11;
    }
  }
  lVar5 = param_1[0x12];
  bVar7 = false;
  *(undefined4 *)(param_1 + 0x18) = 8;
joined_r0x0001804cd647:
  if ((ushort *)(lVar5 + (ulonglong)uVar4 * 8) <= puVar16) {
    uVar4 = *(uint *)(param_1 + 0x18);
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
    }
    else {
      *(uint *)((longlong)param_1 + 0xc4) = uVar4;
      *(uint *)(param_1 + 0x18) = uVar4 + 1;
    }
    return;
  }
  if (cVar2 != '\0') {
    if ((char)puVar16[3] != -2) {
      if ((char)puVar16[3] != -3) goto LAB_1804cd679;
      *(undefined1 *)(puVar16 + 3) = 0xfe;
    }
    goto LAB_1804cd6ab;
  }
LAB_1804cd679:
  switch(*(undefined1 *)((longlong)puVar16 + 5)) {
  case 0x10:
    cVar3 = *(char *)((longlong)puVar16 + -3);
    if (((cVar3 != '_') && (cVar3 != 'a')) && ((cVar3 != 'b' && (cVar3 != 'c'))))
    goto switchD_1804cd69f_caseD_42;
    puVar16[-1] = 0x80;
    puVar16[3] = 0x82;
    break;
  case 0x11:
    bVar7 = true;
    goto switchD_1804cd69f_caseD_42;
  default:
switchD_1804cd69f_caseD_12:
    if (((0x7fff < puVar16[1]) || (*puVar16 < 0x8000)) ||
       (uVar12 = *(ushort *)(param_1[0x12] + 6 + (ulonglong)*puVar16 * 8), 0xfc < (uVar12 & 0xff)))
    goto switchD_1804cd69f_caseD_42;
    puVar16[3] = uVar12;
    break;
  case 0x24:
  case 0x25:
  case 0x26:
    if ((*(byte *)(param_1 + 0x17) & 0x40) == 0) goto switchD_1804cd69f_caseD_27;
    goto switchD_1804cd69f_caseD_42;
  case 0x27:
  case 0x28:
switchD_1804cd69f_caseD_27:
    uVar12 = puVar16[1];
    if (0x7fff < uVar12) {
      if ((0xfc < *(byte *)(param_1[0x12] + 6 + (ulonglong)uVar12 * 8)) &&
         (*(undefined1 *)(param_1[0x12] + 6 + (ulonglong)uVar12 * 8) = 0x81, bVar7)) {
        *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) | 2;
      }
    }
    goto switchD_1804cd69f_caseD_42;
  case 0x2c:
  case 0x2d:
switchD_1804cd69f_caseD_2c:
    if ((puVar16[2] & 0x1f) == 0xe) goto switchD_1804cd69f_caseD_42;
    puVar16[3] = 0x80;
    if (bVar7) {
      *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) | 0xf07;
    }
    break;
  case 0x2e:
    if ((puVar16[2] & 0x1f) != 0xe) goto switchD_1804cd69f_caseD_2c;
LAB_1804cd82a:
    if (bVar7) {
      *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) | 0x3f0f07;
    }
    puVar16[3] = 0x90;
    break;
  case 0x34:
    if (2 < puVar16[1]) goto LAB_1804cd82a;
    if ((*(byte *)(param_1 + 0x17) & 0x20) != 0) goto switchD_1804cd69f_caseD_42;
    puVar16[3] = 0x90;
    if (bVar7) {
      *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) | 0xf0001;
    }
    break;
  case 0x3b:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x56:
  case 0x57:
  case 0x5d:
    puVar16[3] = 0x80;
    if (bVar7) {
      *(undefined4 *)((longlong)param_1 + 0xac) = 0x3f0f07;
    }
    break;
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x46:
  case 0x48:
  case 0x5c:
    goto switchD_1804cd69f_caseD_42;
  case 0x59:
  case 0x5e:
    if (bVar7) {
      *(undefined4 *)((longlong)param_1 + 0xac) = 0x3f0f07;
    }
    goto switchD_1804cd69f_caseD_42;
  case 0x5b:
    if ((1 < (byte)(((byte)puVar16[2] & 0x1f) - 0xd)) && (1 < (ushort)((puVar16[1] & 0x1f) - 0xd)))
    goto switchD_1804cd69f_caseD_12;
switchD_1804cd69f_caseD_42:
    puVar16[3] = 0xff;
    break;
  case 0x5f:
  case 0x60:
  case 0x62:
    goto switchD_1804cd69f_caseD_5f;
  case 0x61:
    if ((puVar16[1] == 0x25) && (*(int *)(param_1 + 0x18) < 0xc)) {
      *(undefined4 *)(param_1 + 0x18) = 0xc;
    }
    goto switchD_1804cd69f_caseD_5f;
  case 99:
    bVar10 = FUN_1804c6b60(param_1,puVar16);
    if (*(int *)(param_1 + 0x18) < (int)((uint)bVar10 * 2)) {
      *(uint *)(param_1 + 0x18) = (uint)bVar10 * 2;
    }
    uVar12 = 0x90;
    if (1 < (byte)(((byte)puVar16[2] & 0x1f) - 0xd)) {
      uVar12 = 0x80;
    }
    puVar16[3] = uVar12;
    if (bVar7) {
      *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) | 0x3f0f07;
    }
  }
LAB_1804cd6ab:
  puVar16 = puVar16 + 4;
  goto joined_r0x0001804cd647;
switchD_1804cd69f_caseD_5f:
  uVar12 = puVar16[1];
  if (*(int *)(param_1 + 0x18) < (int)((uint)(byte)(&DAT_18056eed8)[(ulonglong)uVar12 * 0x10] * 2))
  {
    *(uint *)(param_1 + 0x18) = (uint)(byte)(&DAT_18056eed8)[(ulonglong)uVar12 * 0x10] * 2;
  }
  uVar11 = 0x90;
  if (1 < (byte)(((byte)puVar16[2] & 0x1f) - 0xd)) {
    uVar11 = 0x80;
  }
  puVar16[3] = uVar11;
  if (bVar7) {
    uVar13 = 0x3f0f07;
    if ((*(uint *)(&DAT_18056eed8 + (ulonglong)uVar12 * 0x10) & 0x400) != 0) {
      uVar13 = 0xf07;
    }
    *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) | uVar13;
  }
  goto LAB_1804cd6ab;
}



/* ===== 1804cda10 FUN_1804cda10 ===== */

void FUN_1804cda10(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  
  if ((*(char *)(param_2 + 0xd) == '\x10') && ((*(byte *)(param_2 + 0xc) & 0x1f) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  uVar6 = 0xf07;
  if ((*(uint *)(param_3 + 8) & 0x400) == 0) {
    uVar6 = 0x3f0f07;
  }
  if (-1 < (char)*(byte *)(param_2 + 6)) {
    uVar6 = uVar6 & ~(1 << (*(byte *)(param_2 + 6) & 0x1f));
  }
  if ((bVar5) && (-1 < (char)*(byte *)(param_2 + 0xe))) {
    uVar6 = uVar6 & ~(1 << (*(byte *)(param_2 + 0xe) & 0x1f));
  }
  FUN_1804d1cb0(param_1,uVar6);
  bVar2 = *(byte *)(param_2 + 6);
  if ((-1 < (char)bVar2) || (*(char *)(param_2 + 7) != '\0')) {
    if (1 < (byte)((*(byte *)(param_2 + 4) & 0x1f) - 0xd)) {
      if (bVar5) {
        FUN_1804d15e0();
        return;
      }
      FUN_1804d1850(param_1,param_2,0);
      return;
    }
    if ((*(uint *)(param_3 + 8) & 0x200) == 0) {
      FUN_1804d1850(param_1,param_2,0x10);
    }
    else {
      bVar3 = *(byte *)(param_2 + 7);
      if (-1 < (char)bVar2) {
        lVar4 = *(longlong *)(param_1 + 0x80);
        *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (bVar2 & 0x1f);
        *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (bVar2 & 0x1f);
        *(byte *)(lVar4 + -1) = (bVar2 & 7) * '\b' + -0x40;
        puVar1 = (undefined4 *)(lVar4 + -5);
        *puVar1 = 0x6e0f66fc;
        *(byte *)(lVar4 + -4) = bVar2 >> 1 & 4 | 0x48;
        *(undefined1 *)puVar1 = 0x66;
        *(undefined4 **)(param_1 + 0x80) = puVar1;
      }
      if (bVar3 != 0) {
        FUN_1804d0810(param_1,0x890000fe,0x80200,4,(uint)bVar3 << 2);
        return;
      }
    }
  }
  return;
}



/* ===== 1804cdb80 FUN_1804cdb80 ===== */

void FUN_1804cdb80(longlong param_1,ushort *param_2)

{
  int iVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined8 uVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  ulonglong uVar14;
  byte bVar15;
  bool bVar16;
  
  bVar13 = (byte)param_2[2];
  uVar11 = (uint)bVar13;
  iVar1 = (uint)*param_2 * 8 + -0x10;
  if ((((param_2[1] & 8) == 0) || (-1 < (char)bVar13)) || ((bVar13 & 0x1f) != 0x13)) {
    if (((char)param_2[3] < '\0') && (*(char *)((longlong)param_2 + 7) == '\0')) {
      if ((param_2[1] & 4) == 0) {
        return;
      }
      bVar13 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x40006);
      uVar4 = (uint)bVar13;
      if ((char)bVar13 < '\0') {
        uVar4 = FUN_1804d1420(param_1,0x8000,0xffe7);
      }
      *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar4 & 0x1f));
    }
    else {
      bVar13 = bVar13 & 0x1f;
      uVar10 = 0xffe7;
      if (bVar13 == 0xe) {
        uVar10 = 0xffff0000;
      }
      uVar4 = FUN_1804d1530(param_1,param_2,uVar10);
      bVar12 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x40006);
      uVar5 = (uint)bVar12;
      if ((char)bVar12 < '\0') {
        uVar5 = FUN_1804d1420(param_1,0x8000,0xffe7);
      }
      *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar5 & 0x1f));
      if ((param_2[1] & 8) == 0) {
        if ((uVar11 & 0x1f) - 3 < 10) {
          *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -1;
          bVar12 = (byte)uVar4 & 7;
          bVar15 = (byte)(uVar4 >> 3) & 1;
          **(undefined1 **)(param_1 + 0x80) = 0x11;
          lVar3 = *(longlong *)(param_1 + 0x80);
          bVar13 = bVar15 | 0x48;
          *(byte *)(lVar3 + -1) = bVar12 - 0x18;
          *(undefined4 *)(lVar3 + -5) = 0xc10000fe;
          *(byte *)(lVar3 + -3) = bVar13;
          *(byte **)(param_1 + 0x80) = (byte *)(lVar3 + -3);
          if ((param_2[1] & 4) != 0) {
            FUN_1804c9500(param_1,5);
            *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -1;
            **(byte **)(param_1 + 0x80) = ~(byte)(uVar11 & 0x1f);
            lVar3 = *(longlong *)(param_1 + 0x80);
            *(byte *)(lVar3 + -1) = bVar12 - 8;
            *(undefined4 *)(lVar3 + -5) = 0x830000fe;
            if ((uVar4 & 8) == 0) {
              lVar6 = -3;
            }
            else {
              lVar6 = -4;
              *(byte *)(lVar3 + -3) = bVar15 | 0x40;
            }
            *(undefined1 **)(param_1 + 0x80) = (undefined1 *)(lVar6 + lVar3);
            *(undefined1 *)(lVar6 + lVar3) = 0x66;
          }
          puVar8 = (undefined1 *)(*(longlong *)(param_1 + 0x80) + -1);
          if ((*(byte *)(param_1 + 0xb8) & 0x40) == 0) {
            uVar2 = param_2[1];
            *(undefined1 **)(param_1 + 0x80) = puVar8;
            if ((uVar2 & 4) == 0) {
              *puVar8 = 0x11;
              cVar9 = bVar12 - 0x20;
            }
            else {
              *puVar8 = 0x2f;
              cVar9 = bVar12 - 0x38;
            }
            lVar3 = *(longlong *)(param_1 + 0x80);
            *(char *)(lVar3 + -1) = cVar9;
            *(undefined4 *)(lVar3 + -5) = 0xc10000fe;
            *(byte *)(lVar3 + -3) = bVar13;
            *(longlong *)(param_1 + 0x80) = lVar3 + -3;
          }
          else {
            *(undefined1 **)(param_1 + 0x80) = puVar8;
            *puVar8 = 0x2f;
          }
          goto LAB_1804ce131;
        }
        uVar10 = 0x8b0000fe;
        if (bVar13 == 0xe) {
          uVar10 = 0x100ff2fc;
        }
      }
      else {
        uVar11 = 0x13;
        if (bVar13 == 0x13) {
          uVar11 = 0xe;
        }
        uVar10 = 0x2c0ff2fc;
        if (bVar13 != 0x13) {
          uVar10 = 0x2a0ff2fc;
        }
      }
      FUN_1804d0810(param_1,uVar10,uVar4,uVar5,iVar1);
    }
  }
  else {
    uVar11 = *(uint *)(param_1 + 0xa8);
    if ((uVar11 & 0xffff0000) == 0) {
      uVar11 = 0xffffffff;
      if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
        uVar11 = *(uint *)(param_1 + 0x40);
      }
      uVar4 = *(uint *)(param_1 + 0x44);
      if (uVar11 <= *(uint *)(param_1 + 0x44)) {
        uVar4 = uVar11;
      }
      uVar11 = *(uint *)(param_1 + 0x48);
      if (uVar4 <= *(uint *)(param_1 + 0x48)) {
        uVar11 = uVar4;
      }
      uVar4 = *(uint *)(param_1 + 0x4c);
      if (uVar11 <= *(uint *)(param_1 + 0x4c)) {
        uVar4 = uVar11;
      }
      uVar11 = *(uint *)(param_1 + 0x50);
      if (uVar4 <= *(uint *)(param_1 + 0x50)) {
        uVar11 = uVar4;
      }
      uVar4 = *(uint *)(param_1 + 0x54);
      if (uVar11 <= *(uint *)(param_1 + 0x54)) {
        uVar4 = uVar11;
      }
      uVar11 = *(uint *)(param_1 + 0x58);
      if (uVar4 <= *(uint *)(param_1 + 0x58)) {
        uVar11 = uVar4;
      }
      uVar4 = *(uint *)(param_1 + 0x5c);
      if (uVar11 <= *(uint *)(param_1 + 0x5c)) {
        uVar4 = uVar11;
      }
      uVar11 = *(uint *)(param_1 + 0x60);
      if (uVar4 <= *(uint *)(param_1 + 0x60)) {
        uVar11 = uVar4;
      }
      uVar4 = *(uint *)(param_1 + 100);
      if (uVar11 <= *(uint *)(param_1 + 100)) {
        uVar4 = uVar11;
      }
      uVar11 = *(uint *)(param_1 + 0x68);
      if (uVar4 <= *(uint *)(param_1 + 0x68)) {
        uVar11 = uVar4;
      }
      uVar4 = *(uint *)(param_1 + 0x6c);
      if (uVar11 <= *(uint *)(param_1 + 0x6c)) {
        uVar4 = uVar11;
      }
      uVar11 = *(uint *)(param_1 + 0x70);
      if (uVar4 <= *(uint *)(param_1 + 0x70)) {
        uVar11 = uVar4;
      }
      uVar4 = *(uint *)(param_1 + 0x74);
      if (uVar11 <= *(uint *)(param_1 + 0x74)) {
        uVar4 = uVar11;
      }
      uVar11 = *(uint *)(param_1 + 0x78);
      if (uVar4 <= *(uint *)(param_1 + 0x78)) {
        uVar11 = uVar4;
      }
      uVar4 = *(uint *)(param_1 + 0x7c);
      if (uVar11 <= *(uint *)(param_1 + 0x7c)) {
        uVar4 = uVar11;
      }
      uVar14 = (ulonglong)(uVar4 & 0xffff);
      if (0x7fff < (ushort)uVar4) {
        uVar11 = *(uint *)(param_1 + 0xb0) & 0xffff0000;
        if ((uVar11 != 0) &&
           ((*(uint *)(param_1 + 0xb0) >>
             (*(byte *)(*(longlong *)(param_1 + 0x90) + 6 + uVar14 * 8) & 0x1f) & 1) == 0)) {
          uVar4 = 0;
          if (uVar11 != 0) {
            for (; (uVar11 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          uVar14 = (ulonglong)*(ushort *)(param_1 + (ulonglong)uVar4 * 4);
        }
      }
      uVar11 = FUN_1804d20f0(param_1,uVar14);
    }
    else {
      uVar4 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8;
      uVar11 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> uVar11 == 0; uVar11 = uVar11 - 1) {
        }
      }
      uVar11 = uVar11 ^ 0x18;
    }
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar11 & 0x1f);
    FUN_1804cf320(param_1,param_2,uVar11);
    bVar13 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0x40006);
    uVar4 = (uint)bVar13;
    if ((char)bVar13 < '\0') {
      uVar4 = FUN_1804d1420(param_1,0x8000,0xffe7);
    }
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar4 & 0x1f));
    FUN_1804d0810(param_1,0x100ff2fc,uVar11,uVar4,iVar1);
    uVar11 = 0xe;
  }
  if ((param_2[1] & 4) == 0) {
    return;
  }
  bVar13 = (byte)uVar11 & 0x1f;
  uVar10 = 5;
  if (bVar13 == 0xe) {
    uVar10 = 3;
  }
  FUN_1804c9500(param_1,uVar10);
  if (bVar13 < 0xe) {
    bVar16 = false;
    if ((param_2[1] & 0x40) == 0) {
      if (bVar13 == 0) {
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -1;
        **(undefined1 **)(param_1 + 0x80) = 0xff;
      }
      else if (bVar13 < 3) {
        *(uint *)(*(longlong *)(param_1 + 0x80) + -4) = ~(uVar11 & 0x1f) << 0xf | 0x7fff;
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
      }
      else {
        uVar4 = FUN_1804d2250();
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -1;
        cVar9 = ((byte)uVar4 & 7) - 8;
        **(undefined1 **)(param_1 + 0x80) = (char)~(uVar11 & 0x1f);
        lVar3 = *(longlong *)(param_1 + 0x80);
        bVar13 = (byte)(uVar4 >> 3) & 1;
        *(char *)(lVar3 + -1) = cVar9;
        *(undefined4 *)(lVar3 + -5) = 0x830000fe;
        if ((uVar4 & 8) == 0) {
          lVar6 = -3;
        }
        else {
          *(byte *)(lVar3 + -3) = bVar13 | 0x40;
          lVar6 = -4;
        }
        *(undefined1 **)(param_1 + 0x80) = (undefined1 *)(lVar6 + lVar3);
        *(undefined1 *)(lVar6 + lVar3) = 0x2f;
        lVar3 = *(longlong *)(param_1 + 0x80);
        *(char *)(lVar3 + -1) = cVar9;
        *(undefined4 *)(lVar3 + -5) = 0xc10000fe;
        *(byte *)(lVar3 + -3) = bVar13 | 0x48;
        *(byte **)(param_1 + 0x80) = (byte *)(lVar3 + -3);
      }
      goto LAB_1804ce131;
    }
  }
  else {
    bVar16 = (param_2[1] & 0x40) == 0;
  }
  uVar7 = 0xfff90000;
  if (!bVar16) {
    uVar7 = 0xfffe7fff;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x80) + -4) = uVar7;
  *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
LAB_1804ce131:
  FUN_1804d0810();
  return;
}



/* ===== 1804ce150 FUN_1804ce150 ===== */

void FUN_1804ce150(longlong param_1,int param_2)

{
  ushort *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ushort *puVar7;
  ulonglong uVar8;
  ushort *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  bool bVar13;
  
  uVar11 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x38);
  uVar3 = *(uint *)(lVar4 + (longlong)param_2 * 0xc);
  bVar2 = *(byte *)(lVar4 + 10 + (longlong)param_2 * 0xc);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (bVar2 != 0) {
    do {
      uVar6 = *(uint *)(lVar5 + (ulonglong)uVar3 * 4 + uVar11 * 4);
      if ((uVar6 & 0x8000) != 0) {
        uVar12 = uVar6 & 0xffff;
        puVar1 = (ushort *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar12 * 8);
        *(ulonglong *)(param_1 + 0xe8) = *(ulonglong *)(param_1 + 0xe8) | 1L << (uVar6 & 0x3f);
        uVar6 = uVar12 + 0xfb3ee249;
        uVar10 = (uVar6 ^ uVar12) - (uVar6 >> 0x12 | uVar6 * 0x4000);
        *(ulonglong *)(param_1 + 0xf0) =
             *(ulonglong *)(param_1 + 0xf0) |
             1L << ((uVar6 >> 0xd ^ uVar10) - (uVar10 >> 0x13) & 0x3f);
        if (((char)puVar1[3] < '\0') && (*(char *)((longlong)puVar1 + 7) == '\0')) {
          if ((byte)((char)puVar1[3] + 3U) < 2) {
            *(undefined1 *)(puVar1 + 3) = 0xfd;
            if (*(char *)((longlong)puVar1 + 5) == 'T') {
              FUN_1804ce420(param_1,puVar1[1]);
            }
            else {
              for (puVar7 = (ushort *)
                            (*(longlong *)(param_1 + 0x90) +
                            (ulonglong)(*(int *)(param_1 + 0xd4) - 1) * 8); puVar1 < puVar7;
                  puVar7 = puVar7 + -4) {
                if ((char)puVar7[3] == -2) {
                  if (*(byte *)((longlong)puVar7 + 7) == 0xff) {
                    if ((1 < (byte)(*(char *)((longlong)puVar7 + 5) + 0xb6U)) &&
                       (1 < (byte)(*(char *)((longlong)puVar7 + 5) + 0xb3U))) goto LAB_1804ce3cc;
                    lVar4 = *(longlong *)(param_1 + 0x90);
                    puVar9 = (ushort *)(lVar4 + (ulonglong)*puVar7 * 8);
                    if ((byte)(*(char *)(lVar4 + 5 + (ulonglong)*puVar7 * 8) - 0x38U) < 2) {
                      puVar9 = (ushort *)(lVar4 + (ulonglong)*puVar9 * 8);
                    }
                    bVar13 = (ushort *)(lVar4 + (ulonglong)*puVar9 * 8) == puVar1;
                  }
                  else {
                    bVar13 = puVar1 + (ulonglong)*(byte *)((longlong)puVar7 + 7) * 4 == puVar7;
                  }
                  if (bVar13) {
                    FUN_1804ce420(param_1,puVar7[1]);
                  }
                }
LAB_1804ce3cc:
              }
            }
          }
          else if ((*(char *)((longlong)puVar1 + 5) == '[') && (puVar1[1] == 0x1d3)) {
            for (puVar7 = (ushort *)
                          (*(longlong *)(param_1 + 0x90) + (ulonglong)*(uint *)(param_1 + 200) * 8);
                puVar1 < puVar7; puVar7 = puVar7 + -4) {
              if (((*puVar7 == uVar12) || (puVar7[1] == uVar12)) &&
                 (1 < (byte)((char)puVar7[3] + 3U))) goto LAB_1804ce2a6;
            }
            FUN_1804ce420(param_1,*puVar1);
          }
          else {
LAB_1804ce2a6:
            uVar6 = 0xffff0000;
            if (1 < (byte)(((byte)puVar1[2] & 0x1f) - 0xd)) {
              uVar6 = 0xffe7;
            }
            if ((*(uint *)(param_1 + 0xa8) & uVar6) == 0) {
              if (uVar6 == 0xffff0000) {
                uVar8 = 0x10;
                do {
                  if (*(ushort *)(param_1 + uVar8 * 4) < 0x8000) goto LAB_1804ce2f1;
                  uVar6 = (int)uVar8 + 1;
                  uVar8 = (ulonglong)uVar6;
                } while (uVar6 < 0x20);
              }
              FUN_1804d2290(param_1,puVar1);
            }
            else {
LAB_1804ce2f1:
              uVar6 = FUN_1804d1420(param_1,uVar12);
              if ((puVar1[2] & 0x40) == 0) {
                *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | 1 << (uVar6 & 0x1f);
              }
              if (*(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88)) {
                    /* WARNING: Subroutine does not return */
                FUN_1804ccb30(param_1);
              }
            }
          }
        }
      }
      uVar6 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar6;
    } while (uVar6 < bVar2);
  }
  return;
}



/* ===== 1804ce420 FUN_1804ce420 ===== */

void FUN_1804ce420(longlong param_1,uint param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort *puVar5;
  uint uVar6;
  ushort *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  lVar8 = *(longlong *)(param_1 + 0x90);
  uVar10 = (ulonglong)param_2;
  puVar7 = (ushort *)(lVar8 + uVar10 * 8);
  if (param_2 < 0x8000) {
    return;
  }
  do {
    uVar9 = (uint)uVar10;
    *(ulonglong *)(param_1 + 0xe8) = *(ulonglong *)(param_1 + 0xe8) | 1L << (uVar9 & 0x3f);
    uVar3 = uVar9 + 0xfb3ee249;
    uVar6 = (uVar3 ^ uVar9) - (uVar3 >> 0x12 | uVar3 * 0x4000);
    *(ulonglong *)(param_1 + 0xf0) =
         *(ulonglong *)(param_1 + 0xf0) | 1L << ((uVar3 >> 0xd ^ uVar6) - (uVar6 >> 0x13) & 0x3f);
    if (-1 < (char)puVar7[3]) {
      return;
    }
    if (*(char *)((longlong)puVar7 + 7) != '\0') {
      return;
    }
    if ((byte)((char)puVar7[3] + 3U) < 2) {
      *(undefined1 *)(puVar7 + 3) = 0xfd;
      if (*(char *)((longlong)puVar7 + 5) != 'T') {
        puVar1 = (ushort *)
                 (*(longlong *)(param_1 + 0x90) + (ulonglong)(*(int *)(param_1 + 0xd4) - 1) * 8);
        break;
      }
      uVar2 = puVar7[1];
    }
    else {
      if ((*(char *)((longlong)puVar7 + 5) != '[') || (puVar7[1] != 0x1d3)) {
LAB_1804ce536:
        uVar3 = 0xffff0000;
        if (1 < (byte)(((byte)puVar7[2] & 0x1f) - 0xd)) {
          uVar3 = 0xffe7;
        }
        if ((*(uint *)(param_1 + 0xa8) & uVar3) != 0) goto LAB_1804ce58b;
        if (uVar3 == 0xffff0000) {
          uVar4 = 0x10;
          do {
            if (*(ushort *)(param_1 + uVar4 * 4) < 0x8000) {
LAB_1804ce58b:
              uVar3 = FUN_1804d1420(param_1,uVar10);
              if ((puVar7[2] & 0x40) == 0) {
                *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | 1 << (uVar3 & 0x1f);
              }
              if (*(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88)) {
                    /* WARNING: Subroutine does not return */
                FUN_1804ccb30(param_1);
              }
              return;
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
          } while (uVar3 < 0x20);
        }
        FUN_1804d2290(param_1,puVar7);
        return;
      }
      for (puVar1 = (ushort *)(lVar8 + (ulonglong)*(uint *)(param_1 + 200) * 8); puVar7 < puVar1;
          puVar1 = puVar1 + -4) {
        if (((*puVar1 == uVar9) || (puVar1[1] == uVar9)) && (1 < (byte)((char)puVar1[3] + 3U)))
        goto LAB_1804ce536;
      }
      uVar2 = *puVar7;
    }
    lVar8 = *(longlong *)(param_1 + 0x90);
    uVar10 = (ulonglong)uVar2;
    puVar7 = (ushort *)(lVar8 + (ulonglong)uVar2 * 8);
    if (uVar2 < 0x8000) {
      return;
    }
  } while( true );
joined_r0x0001804ce5df:
  if (puVar1 <= puVar7) {
    return;
  }
  if ((char)puVar1[3] == -2) {
    if (*(byte *)((longlong)puVar1 + 7) == 0xff) {
      if ((1 < (byte)(*(char *)((longlong)puVar1 + 5) + 0xb6U)) &&
         (1 < (byte)(*(char *)((longlong)puVar1 + 5) + 0xb3U))) goto LAB_1804ce650;
      lVar8 = *(longlong *)(param_1 + 0x90);
      puVar5 = (ushort *)(lVar8 + (ulonglong)*puVar1 * 8);
      if ((byte)(*(char *)(lVar8 + 5 + (ulonglong)*puVar1 * 8) - 0x38U) < 2) {
        puVar5 = (ushort *)(lVar8 + (ulonglong)*puVar5 * 8);
      }
      bVar11 = (ushort *)(lVar8 + (ulonglong)*puVar5 * 8) == puVar7;
    }
    else {
      bVar11 = puVar7 + (ulonglong)*(byte *)((longlong)puVar1 + 7) * 4 == puVar1;
    }
    if (bVar11) {
      FUN_1804ce420(param_1,puVar1[1]);
    }
  }
LAB_1804ce650:
  puVar1 = puVar1 + -4;
  goto joined_r0x0001804ce5df;
}



/* ===== 1804ce680 FUN_1804ce680 ===== */

void FUN_1804ce680(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0xe4) != 0) {
    *(undefined4 *)(param_1 + 0xe4) = 0;
    FUN_1804ce150(param_1,*(undefined4 *)(param_1 + 0xdc));
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(*(longlong *)(param_1 + 0x110) + 0xc);
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x110);
  uVar2 = *(uint *)(param_1 + 0xd8);
  if (uVar2 < *(uint *)(lVar4 + 0xc)) {
    do {
      lVar4 = *(longlong *)(lVar4 + 0x20);
      uVar1 = *(ushort *)(lVar4 + (ulonglong)uVar2 * 8);
      if (((*(ulonglong *)(param_1 + 0xe8) >> ((byte)uVar1 & 0x3f) & 1) != 0) &&
         (uVar5 = uVar1 + 0xfb3ee249, uVar3 = (uVar1 ^ uVar5) - (uVar5 >> 0x12 | uVar5 * 0x4000),
         (*(ulonglong *)(param_1 + 0xf0) >>
          (((byte)(uVar5 >> 0xd) ^ (byte)uVar3) - (char)(uVar3 >> 0x13) & 0x3f) & 1) != 0)) {
        FUN_1804d2290(param_1,*(longlong *)(param_1 + 0x90) + (ulonglong)uVar1 * 8);
        *(undefined2 *)(lVar4 + 2 + (ulonglong)uVar2 * 8) = 0x7fff;
      }
      uVar2 = *(int *)(param_1 + 0xd8) + 1;
      *(uint *)(param_1 + 0xd8) = uVar2;
      lVar4 = *(longlong *)(param_1 + 0x110);
    } while (uVar2 < *(uint *)(lVar4 + 0xc));
  }
  return;
}



/* ===== 1804ce790 FUN_1804ce790 ===== */

void FUN_1804ce790(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(uint *)(param_1 + 200) < *(uint *)(param_1 + 0xd4)) {
    uVar2 = *(longlong *)(param_1 + 0x130) - *(longlong *)(param_1 + 0x80);
    if (0xffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(*(undefined8 *)(param_1 + 0x98),0x1c);
    }
    do {
      if (*(int *)(param_1 + 0xdc) == 0) {
        return;
      }
      uVar1 = *(int *)(param_1 + 0xdc) - 1;
      *(uint *)(param_1 + 0xdc) = uVar1;
      *(uint *)(param_1 + 0xd4) =
           (uint)*(ushort *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 4 + (ulonglong)uVar1 * 0xc
                  );
      *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 6 + (ulonglong)uVar1 * 0xc)
           = (short)uVar2;
    } while (*(uint *)(param_1 + 200) < *(uint *)(param_1 + 0xd4));
    *(undefined4 *)(param_1 + 0xe4) = 1;
  }
  return;
}



/* ===== 1804ce830 FUN_1804ce830 ===== */

void FUN_1804ce830(longlong param_1,int param_2,longlong param_3,uint param_4,uint param_5)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    uVar3 = 2;
  }
  else {
    uVar3 = (uint)*(byte *)(param_3 + 6);
  }
  if (param_4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (param_4 != 0) {
      for (; (param_4 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x98) + 0x6a0 + (ulonglong)(param_5 >> 5) * 8);
  *(undefined1 *)(lVar2 + -6) = 0xf;
  *(undefined1 *)(lVar2 + -5) = 0x82;
  *(uint *)(lVar2 + -4) = (iVar1 + (param_5 & 0x1f) * 4) - (int)lVar2;
  *(longlong *)(param_1 + 0x80) = lVar2 + -6;
  if (param_4 == 0) {
    FUN_1804d0810(param_1,0x8b0000fe,uVar4 | 0x80200,4,0);
  }
  else {
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar4 & 0x1f);
  }
  uVar5 = uVar4 | 0x80200;
  FUN_1804cfda0(param_1,0x838107,uVar5,param_2 * 8);
  if (((char)(byte)uVar3 < '\0') || (uVar3 == uVar4)) {
    FUN_1804d0810(param_1,0x2b0000fe,uVar5,3,0xfffff1e0);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x80);
    *(byte *)(lVar2 + -1) = (((byte)uVar4 & 7) << 3 | (byte)uVar3 & 7) - 0x40;
    *(undefined4 *)(lVar2 + -5) = 0x2b0000fe;
    *(byte *)(lVar2 + -3) =
         (byte)(uVar5 >> 1) & 4 | (byte)(uVar3 >> 3) & 1 | (byte)(uVar5 >> 0x10) | 0x40;
    *(byte **)(param_1 + 0x80) = (byte *)(lVar2 + -3);
  }
  FUN_1804d0810(param_1,0x8b0000fe,uVar5,uVar4,0x30);
  FUN_1804d0600(param_1,0x8b0000fe,uVar5,*(longlong *)(param_1 + 0x98) + -0x170);
  if (param_4 == 0) {
    FUN_1804d0810(param_1,0x890000fe,uVar5,4,0);
  }
  return;
}



/* ===== 1804ce9e0 FUN_1804ce9e0 ===== */

void FUN_1804ce9e0(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong local_res8;
  
  bVar3 = *(byte *)((longlong)param_2 + 10);
  if (bVar3 != 0) {
    uVar5 = *param_2;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x44) + 0x38);
    uVar11 = 0;
    do {
      uVar10 = *(uint *)(lVar6 + (ulonglong)uVar5 * 4 + uVar11 * 4);
      if ((uVar10 >> 0x12 & 1) == 0) {
        uVar9 = uVar10 & 0xffff;
        uVar8 = (ulonglong)uVar9;
        uVar2 = (uVar10 >> 0x18) * 8 - 0x10;
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x24) + uVar8 * 8);
        if ((uVar10 >> 0x14 & 1) == 0) {
          if ((*(byte *)(puVar1 + 1) & 0x1f) == 0xe) {
            uVar10 = (uint)*(byte *)((longlong)puVar1 + 6);
            if ((char)*(byte *)((longlong)puVar1 + 6) < '\0') {
              uVar10 = FUN_1804d1420(param_1,uVar9,0xffff0000);
            }
            param_1[0x2c] = param_1[0x2c] & ~(1 << (uVar10 & 0x1f));
            FUN_1804d0810(param_1,0x110ff2fc,uVar10,2,uVar2);
          }
          else if ((uVar10 & 0x8000) == 0) {
            FUN_1804a6890(*(undefined8 *)(*(longlong *)(param_1 + 0x26) + 0x80),&local_res8,puVar1);
            if (local_res8 == -1) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x20) + -4) = 0xffffffff;
              *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -4;
              FUN_1804d0810(param_1,0xc70000fe,0x80200,2,uVar2);
            }
            else {
              uVar10 = param_1[0x2a] & 0xffe3;
              if (uVar10 == 0) {
                uVar10 = 0xffffffff;
                if (*param_1 != 0xffffffff) {
                  uVar10 = *param_1;
                }
                uVar9 = param_1[1];
                if (uVar10 <= param_1[1]) {
                  uVar9 = uVar10;
                }
                uVar10 = param_1[5];
                if (uVar9 <= param_1[5]) {
                  uVar10 = uVar9;
                }
                uVar9 = param_1[6];
                if (uVar10 <= param_1[6]) {
                  uVar9 = uVar10;
                }
                uVar10 = param_1[7];
                if (uVar9 <= param_1[7]) {
                  uVar10 = uVar9;
                }
                uVar9 = param_1[8];
                if (uVar10 <= param_1[8]) {
                  uVar9 = uVar10;
                }
                uVar10 = param_1[9];
                if (uVar9 <= param_1[9]) {
                  uVar10 = uVar9;
                }
                uVar9 = param_1[10];
                if (uVar10 <= param_1[10]) {
                  uVar9 = uVar10;
                }
                uVar10 = param_1[0xb];
                if (uVar9 <= param_1[0xb]) {
                  uVar10 = uVar9;
                }
                uVar9 = param_1[0xc];
                if (uVar10 <= param_1[0xc]) {
                  uVar9 = uVar10;
                }
                uVar10 = param_1[0xd];
                if (uVar9 <= param_1[0xd]) {
                  uVar10 = uVar9;
                }
                uVar9 = param_1[0xe];
                if (uVar10 <= param_1[0xe]) {
                  uVar9 = uVar10;
                }
                uVar10 = param_1[0xf];
                if (uVar9 <= param_1[0xf]) {
                  uVar10 = uVar9;
                }
                uVar8 = (ulonglong)(uVar10 & 0xffff);
                if (0x7fff < (ushort)uVar10) {
                  uVar10 = param_1[0x2c] & 0xffe3;
                  if ((uVar10 != 0) &&
                     ((param_1[0x2c] >>
                       (*(byte *)(*(longlong *)(param_1 + 0x24) + 6 + uVar8 * 8) & 0x1f) & 1) == 0))
                  {
                    uVar9 = 0;
                    if (uVar10 != 0) {
                      for (; (uVar10 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                      }
                    }
                    uVar8 = (ulonglong)(ushort)param_1[uVar9];
                  }
                }
                uVar10 = FUN_1804d20f0(param_1,uVar8);
              }
              else {
                uVar9 = (param_1[0x2a] & 0xff00) << 8 | uVar10 << 0x18;
                uVar10 = 0x1f;
                if (uVar9 != 0) {
                  for (; uVar9 >> uVar10 == 0; uVar10 = uVar10 - 1) {
                  }
                }
                uVar10 = uVar10 ^ 0x18;
              }
              param_1[0x2b] = param_1[0x2b] | 1 << (uVar10 & 0x1f);
              FUN_1804d0810(param_1,0x890000fe,uVar10 | 0x80200,2,uVar2);
              FUN_1804d0150(param_1,uVar10,local_res8);
            }
          }
          else {
            uVar10 = (uint)*(byte *)((longlong)puVar1 + 6);
            if ((char)*(byte *)((longlong)puVar1 + 6) < '\0') {
              uVar10 = FUN_1804d1420(param_1,uVar9,0xffe3);
            }
            param_1[0x2c] = param_1[0x2c] & ~(1 << (uVar10 & 0x1f));
            uVar9 = ~(*(byte *)(puVar1 + 1) & 0x1f) << 0xf;
            bVar12 = (0x605fd9U >> (sbyte)(*(byte *)(puVar1 + 1) & 0x1f) & 1) == 0;
            if (bVar12) {
              *(uint *)(*(longlong *)(param_1 + 0x20) + -4) = uVar9 | 0x7fff;
              uVar7 = 0xc70000fe;
              *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -4;
            }
            else {
              *(uint *)(*(longlong *)(param_1 + 0x20) + -4) = uVar9;
              *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -4;
              uVar7 = 0x810000fe;
            }
            FUN_1804d0810(param_1,uVar7,!bVar12,2,uVar2 | 4);
            FUN_1804d0810(param_1,0x890000fe,
                          (-(uint)((0x605fd9U >> (*(byte *)(puVar1 + 1) & 0x1f) & 1) != 0) & 0x80200
                          ) + uVar10,2,uVar2);
          }
        }
        else {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + -4) = 0xfffe7fff;
          *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -4;
          FUN_1804d0810(param_1,0xc70000fe,0,2,uVar2 | 4);
          if ((uVar10 >> 0xf & 1) == 0) {
            uVar7 = 0xc70000fe;
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + -4) = *puVar1;
            *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -4;
            uVar10 = 0;
          }
          else {
            bVar4 = *(byte *)(*(longlong *)(param_1 + 0x24) + 6 + uVar8 * 8);
            uVar10 = (uint)bVar4;
            if ((char)bVar4 < '\0') {
              uVar10 = FUN_1804d1420(param_1,uVar8,0xffe3);
            }
            uVar7 = 0x890000fe;
            param_1[0x2c] = param_1[0x2c] & ~(1 << (uVar10 & 0x1f));
          }
          FUN_1804d0810(param_1,uVar7,uVar10,2,uVar2);
        }
        if (*(ulonglong *)(param_1 + 0x20) < *(ulonglong *)(param_1 + 0x22)) {
                    /* WARNING: Subroutine does not return */
          FUN_1804ccb30(param_1);
        }
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < bVar3);
  }
  return;
}



/* ===== 1804cee00 FUN_1804cee00 ===== */

bool FUN_1804cee00(longlong param_1,ushort *param_2)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (((&DAT_18056ee40)[*(byte *)((longlong)param_2 + 5)] & 0x10) != 0) {
    uVar2 = param_2[1];
    if (0x7fff < uVar2) {
      lVar4 = *(longlong *)(param_1 + 0x90);
      uVar5 = (ulonglong)*param_2;
      if ((*(char *)(lVar4 + 6 + uVar5 * 8) < '\0') &&
         (((*(byte *)(lVar4 + 6 + (ulonglong)uVar2 * 8) ^ (byte)param_2[3]) & 0x7f) != 0)) {
        uVar3 = *(uint *)(param_1 + 0x100);
        if (uVar3 < *(uint *)(param_1 + 200)) {
          if ((uVar2 < uVar3) && ((*(byte *)(lVar4 + 4 + (ulonglong)uVar2 * 8) & 0x40) == 0)) {
            return false;
          }
          if ((*param_2 < uVar3) && ((*(byte *)(lVar4 + 4 + uVar5 * 8) & 0x40) == 0)) {
            return true;
          }
        }
        cVar1 = *(char *)(lVar4 + 5 + uVar5 * 8);
        if (5 < (byte)(cVar1 + 0xbeU)) {
          return cVar1 == 'H';
        }
      }
      return true;
    }
  }
  return false;
}



/* ===== 1804ceeb0 FUN_1804ceeb0 ===== */

void FUN_1804ceeb0(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  
  lVar4 = *(longlong *)(param_1 + 0x110);
  lVar5 = *(longlong *)(lVar4 + 0x30);
  uVar15 = *(ushort *)(lVar4 + 10) - 1;
  uVar16 = (ulonglong)uVar15;
  bVar2 = *(byte *)(lVar5 + 10 + uVar16 * 0xc);
  uVar8 = (ulonglong)bVar2;
  piVar1 = (int *)(lVar5 + uVar16 * 0xc);
  if (bVar2 != 0) {
    do {
      uVar7 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar7;
      uVar11 = *(uint *)(*(longlong *)(lVar4 + 0x38) +
                         (ulonglong)*(uint *)(lVar5 + uVar16 * 0xc) * 4 + uVar8 * 4);
      if ((uVar11 >> 0x10 & 1) != 0) {
        bVar6 = true;
        uVar11 = (uVar11 >> 0x18) - 1;
        goto LAB_1804cef15;
      }
    } while (uVar7 != 0);
  }
  bVar6 = false;
  uVar11 = 0;
LAB_1804cef15:
  *(uint *)(param_1 + 0x104) = (uint)*(byte *)((longlong)piVar1 + 9);
  if (*(ulonglong *)(param_1 + 0x80) < *(ulonglong *)(param_1 + 0x88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804ccb30(param_1);
  }
  FUN_1804d1420(param_1,0x8000,4);
  if (*(short *)(*(longlong *)(param_1 + 0x110) + 0x6a) != 0) {
    if (uVar11 != 0) {
      FUN_1804d0600(param_1,0x890000fe,0x80202,*(longlong *)(param_1 + 0x98) + -0x168);
    }
    goto LAB_1804cf07d;
  }
  puVar13 = (uint *)(*(ulonglong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x38) +
                      (ulonglong)((uint)*(byte *)((longlong)piVar1 + 10) + *piVar1) * 4) >> 8);
  if ((char)*puVar13 == 'W') {
    puVar10 = (uint *)(*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x180) +
                        (ulonglong)(*puVar13 >> 0x10) * 8) + 0x50);
    if (3 < (*puVar10 & 0xff) - 0x49) {
      puVar10 = puVar13;
    }
  }
  else {
    puVar10 = puVar13;
  }
  FUN_1804d0150(param_1,6,puVar10);
  uVar7 = *puVar10;
  iVar12 = (*(byte *)(piVar1 + 2) - uVar11) + -1;
  uVar9 = uVar7 >> 8;
  uVar14 = uVar7 & 0xff;
  if (uVar14 == 0x3f) {
    iVar12 = iVar12 - (uVar9 & 0xff);
  }
  else {
    if ((uVar14 - 0x41 & 0xfffffffd) == 0) {
      FUN_1804cfe80(param_1,0,iVar12 + ((-2 - (uVar7 >> 0x10 & 0xff)) - (uVar9 & 0xff)));
      goto LAB_1804cf07d;
    }
    if (uVar14 == 0x49) {
      FUN_1804cfe80(param_1,0,iVar12 - ((uVar9 & 0xff) + (uVar7 >> 0x10)));
      goto LAB_1804cf07d;
    }
    if (uVar14 < 0x60) {
      FUN_1804cfe80(param_1,0,0);
      goto LAB_1804cf07d;
    }
  }
  FUN_1804cfe80(param_1,0,iVar12);
LAB_1804cf07d:
  if ((uVar11 & 0x1fffffff) != 0) {
    FUN_1804cfda0(param_1,0x838100,0x80202);
  }
  uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x98) + 400);
  if (uVar3 != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8 + (ulonglong)uVar3 * 8) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x78);
    *(undefined1 *)
     (*(longlong *)(param_1 + 0x90) + 5 +
     (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + 400) * 8) = 0x18;
  }
  FUN_1804ce9e0(param_1,piVar1);
  if ((*(longlong *)(param_1 + 0x118) == 0) && (bVar6)) {
    FUN_1804ce830(param_1,*(undefined4 *)(param_1 + 0x104),0,*(uint *)(param_1 + 0xa8) & 0xffe7,
                  uVar15);
  }
  return;
}



/* ===== 1804cf140 FUN_1804cf140 ===== */

void FUN_1804cf140(longlong param_1,ushort *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  
  uVar2 = FUN_1804d1530(param_1,param_2,0xffe7);
  if (*(char *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)*param_2 * 8) < '\0') {
    uVar3 = FUN_1804d1420(param_1,*param_2,0xffff0000);
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar3 & 0x1f));
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    if ((uVar3 & 0xffff0000) == 0) {
      uVar3 = 0xffffffff;
      if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
        uVar3 = *(uint *)(param_1 + 0x40);
      }
      uVar4 = *(uint *)(param_1 + 0x44);
      if (uVar3 <= *(uint *)(param_1 + 0x44)) {
        uVar4 = uVar3;
      }
      uVar3 = *(uint *)(param_1 + 0x48);
      if (uVar4 <= *(uint *)(param_1 + 0x48)) {
        uVar3 = uVar4;
      }
      uVar4 = *(uint *)(param_1 + 0x4c);
      if (uVar3 <= *(uint *)(param_1 + 0x4c)) {
        uVar4 = uVar3;
      }
      uVar3 = *(uint *)(param_1 + 0x50);
      if (uVar4 <= *(uint *)(param_1 + 0x50)) {
        uVar3 = uVar4;
      }
      uVar4 = *(uint *)(param_1 + 0x54);
      if (uVar3 <= *(uint *)(param_1 + 0x54)) {
        uVar4 = uVar3;
      }
      uVar3 = *(uint *)(param_1 + 0x58);
      if (uVar4 <= *(uint *)(param_1 + 0x58)) {
        uVar3 = uVar4;
      }
      uVar4 = *(uint *)(param_1 + 0x5c);
      if (uVar3 <= *(uint *)(param_1 + 0x5c)) {
        uVar4 = uVar3;
      }
      uVar3 = *(uint *)(param_1 + 0x60);
      if (uVar4 <= *(uint *)(param_1 + 0x60)) {
        uVar3 = uVar4;
      }
      uVar4 = *(uint *)(param_1 + 100);
      if (uVar3 <= *(uint *)(param_1 + 100)) {
        uVar4 = uVar3;
      }
      uVar3 = *(uint *)(param_1 + 0x68);
      if (uVar4 <= *(uint *)(param_1 + 0x68)) {
        uVar3 = uVar4;
      }
      uVar4 = *(uint *)(param_1 + 0x6c);
      if (uVar3 <= *(uint *)(param_1 + 0x6c)) {
        uVar4 = uVar3;
      }
      uVar3 = *(uint *)(param_1 + 0x70);
      if (uVar4 <= *(uint *)(param_1 + 0x70)) {
        uVar3 = uVar4;
      }
      uVar4 = *(uint *)(param_1 + 0x74);
      if (uVar3 <= *(uint *)(param_1 + 0x74)) {
        uVar4 = uVar3;
      }
      uVar3 = *(uint *)(param_1 + 0x78);
      if (uVar4 <= *(uint *)(param_1 + 0x78)) {
        uVar3 = uVar4;
      }
      uVar4 = *(uint *)(param_1 + 0x7c);
      if (uVar3 <= *(uint *)(param_1 + 0x7c)) {
        uVar4 = uVar3;
      }
      uVar6 = (ulonglong)(uVar4 & 0xffff);
      if (0x7fff < (ushort)uVar4) {
        uVar3 = *(uint *)(param_1 + 0xb0) & 0xffff0000;
        if ((uVar3 != 0) &&
           ((*(uint *)(param_1 + 0xb0) >>
             (*(byte *)(*(longlong *)(param_1 + 0x90) + 6 + uVar6 * 8) & 0x1f) & 1) == 0)) {
          uVar4 = 0;
          if (uVar3 != 0) {
            for (; (uVar3 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          uVar6 = (ulonglong)*(ushort *)(param_1 + (ulonglong)uVar4 * 4);
        }
      }
      uVar3 = FUN_1804d20f0(param_1,uVar6);
    }
    else {
      uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8;
      uVar3 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> uVar3 == 0; uVar3 = uVar3 - 1) {
        }
      }
      uVar3 = uVar3 ^ 0x18;
    }
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar3 & 0x1f);
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  puVar7 = (undefined4 *)(lVar1 + -5);
  *(byte *)(lVar1 + -1) = (((byte)uVar3 & 7) << 3 | (byte)uVar2 & 7) - 0x40;
  *puVar7 = 0x7e0f66fc;
  uVar2 = uVar3 >> 1 & 0x104 | uVar2 >> 3 & 1;
  if (uVar2 == 0) {
    puVar7 = (undefined4 *)(lVar1 + -4);
  }
  else {
    *(byte *)(lVar1 + -4) = (byte)uVar2 | (byte)(uVar3 >> 0x10) | 0x40;
    *(undefined1 *)puVar7 = 0x66;
  }
  *(undefined4 **)(param_1 + 0x80) = puVar7;
  uVar5 = FUN_1804c8200(param_1,param_2[1],~(1 << (uVar3 & 0x1f)) & 0xffff0000);
  FUN_1804d0390(param_1,0x580ff2fc,uVar3,uVar5);
  FUN_1804d1e20(param_1,uVar3,*param_2);
  return;
}



/* ===== 1804cf320 FUN_1804cf320 ===== */

void FUN_1804cf320(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  byte bVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  
  uVar4 = ~(1 << ((uint)param_3 & 0x1f)) & 0xffff0000U & *(uint *)(param_1 + 0xa8);
  if (uVar4 == 0) {
    uVar4 = FUN_1804d18c0();
  }
  else {
    uVar5 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8;
    uVar4 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar4 == 0; uVar4 = uVar4 - 1) {
      }
    }
    uVar4 = uVar4 ^ 0x18;
  }
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar4 & 0x1f);
  uVar5 = FUN_1804d1530(param_1,param_2,0xffe7);
  uVar13 = (ulonglong)uVar5;
  FUN_1804c9500(param_1,10);
  FUN_1804c9500();
  lVar12 = *(longlong *)(param_1 + 0x80);
  bVar15 = (byte)param_3 & 7;
  bVar9 = (byte)uVar4 & 7;
  puVar8 = (undefined4 *)(lVar12 + -5);
  *(byte *)(lVar12 + -1) = (bVar15 << 3 | bVar9) - 0x40;
  uVar14 = uVar4 >> 3 & 1;
  *puVar8 = 0x2e0f66fc;
  uVar5 = (uint)(param_3 >> 1) & 0x104 | uVar14;
  if (uVar5 == 0) {
    puVar8 = (undefined4 *)(lVar12 + -4);
  }
  else {
    *(byte *)(lVar12 + -4) = (byte)uVar5 | (byte)(param_3 >> 0x10) | 0x40;
    *(undefined1 *)puVar8 = 0x66;
  }
  bVar10 = (byte)uVar13 & 7;
  *(byte *)((longlong)puVar8 + -1) = (bVar10 | bVar9 << 3) - 0x40;
  *(undefined4 *)((longlong)puVar8 + -5) = 0x2a0ff2fc;
  uVar6 = uVar4 >> 1 & 0x104;
  uVar5 = (uint)(uVar13 >> 3) & 1 | uVar6;
  bVar3 = (byte)(uVar4 >> 0x10);
  if (uVar5 == 0) {
    lVar16 = -5;
    lVar17 = -9;
    lVar11 = -8;
    lVar12 = -7;
  }
  else {
    lVar16 = -6;
    lVar17 = -10;
    *(byte *)(puVar8 + -1) = (byte)uVar5 | bVar3 | 0x40;
    lVar11 = -9;
    *(undefined1 *)((longlong)puVar8 + -5) = 0xf2;
    lVar12 = -8;
  }
  uVar6 = uVar6 | uVar14;
  *(byte *)(lVar16 + (longlong)puVar8) = bVar9 * '\t' + -0x40;
  *(undefined4 *)(lVar17 + (longlong)puVar8) = 0x570f00fd;
  if (uVar6 != 0) {
    *(byte *)(lVar11 + (longlong)puVar8) = (byte)uVar6 | bVar3 | 0x40;
    lVar12 = lVar11;
  }
  puVar2 = (undefined1 *)(lVar12 + (longlong)puVar8);
  *(undefined1 **)(param_1 + 0x80) = puVar2;
  if (puVar2 < *(undefined1 **)(param_1 + 0x88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1804ccb30(param_1);
  }
  pbVar1 = puVar2 + -5;
  pbVar7 = puVar2 + -4;
  puVar2[-1] = (bVar10 << 3 | bVar15) - 0x40;
  pbVar1[0] = 0xfc;
  pbVar1[1] = 0xf2;
  pbVar1[2] = 0xf;
  pbVar1[3] = 0x2c;
  uVar4 = (uint)(uVar13 >> 1) & 0x104 | (uint)param_3 >> 3 & 1;
  if (uVar4 != 0) {
    *pbVar7 = (byte)uVar4 | (byte)(uVar13 >> 0x10) | 0x40;
    *pbVar1 = 0xf2;
    pbVar7 = pbVar1;
  }
  *(byte **)(param_1 + 0x80) = pbVar7;
  return;
}



/* ===== 1804cf530 FUN_1804cf530 ===== */

void FUN_1804cf530(longlong param_1,uint param_2,uint param_3,ulonglong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 local_18 [2];
  
  if ((param_4 & 1) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x90) + (ulonglong)param_3 * 8;
    if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 4 + (ulonglong)param_3 * 8) & 0x1f) == 0xe) {
      if ((param_3 < 0x8000) && ((param_4 & 2) == 0)) {
        lVar4 = lVar4 + 8;
        goto LAB_1804cf73a;
      }
      uVar1 = (uint)*(byte *)(lVar4 + 6);
      if ((char)*(byte *)(lVar4 + 6) < '\0') {
        uVar1 = FUN_1804d1420(param_1,param_3,0xffff0000);
      }
      *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar1 & 0x1f));
      FUN_1804d0810(param_1,0x110ff2fc,uVar1,param_2,0);
    }
    else if (param_3 < 0x8000) {
      FUN_1804a6890(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x80),local_18,lVar4);
      uVar3 = ~(1 << (param_2 & 0x1f)) & 0xffe7;
      uVar1 = uVar3 & *(uint *)(param_1 + 0xa8);
      if (uVar1 == 0) {
        uVar1 = FUN_1804d18c0(param_1,uVar3);
      }
      else {
        uVar3 = (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        uVar1 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> uVar1 == 0; uVar1 = uVar1 - 1) {
          }
        }
        uVar1 = uVar1 ^ 0x18;
      }
      *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << (uVar1 & 0x1f);
      FUN_1804d0810(param_1,0x890000fe,uVar1 | 0x80200,param_2,0);
      FUN_1804d0150(param_1,uVar1,local_18[0]);
    }
    else {
      uVar1 = (uint)*(byte *)(lVar4 + 6);
      if ((char)*(byte *)(lVar4 + 6) < '\0') {
        uVar1 = FUN_1804d1420(param_1,param_3,~(1 << (param_2 & 0x1f)) & 0xffe7);
      }
      *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar1 & 0x1f));
      uVar3 = *(byte *)(lVar4 + 4) & 0x1f;
      *(uint *)(*(longlong *)(param_1 + 0x80) + -4) = ~uVar3 << 0xf;
      *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
      bVar5 = (0x605fd9U >> (sbyte)uVar3 & 1) == 0;
      if (bVar5) {
        uVar2 = 0xc70000fe;
      }
      else {
        uVar2 = 0x810000fe;
      }
      FUN_1804d0810(param_1,uVar2,!bVar5,param_2,4);
      FUN_1804d0810(param_1,0x890000fe,
                    (-(uint)((0x605fd9U >> (*(byte *)(lVar4 + 4) & 0x1f) & 1) != 0) & 0x80200) +
                    uVar1,param_2,0);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x98) + -0x200;
LAB_1804cf73a:
  FUN_1804d0150(param_1,param_2,lVar4);
  return;
}



/* ===== 1804cf760 FUN_1804cf760 ===== */

void FUN_1804cf760(uint *param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined4 uVar8;
  
  uVar2 = FUN_1804d1530(param_1,param_2,0xffe7);
  bVar7 = (byte)param_2[2] & 0x9f;
  if ((*param_2 < 0x8000) && (bVar7 != 0x89)) {
    FUN_1804d0600(param_1,0x8b0000fe,uVar2 | 0x80200,
                  *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x24) + 8 + (ulonglong)*param_2 * 8) +
                    0x28 + (ulonglong)(param_2[1] >> 8) * 8) + 0x20);
    return;
  }
  uVar3 = param_1[0x2a] & 0xffe7;
  if (uVar3 == 0) {
    uVar3 = 0xffffffff;
    if (*param_1 != 0xffffffff) {
      uVar3 = *param_1;
    }
    uVar4 = param_1[1];
    if (uVar3 <= param_1[1]) {
      uVar4 = uVar3;
    }
    uVar3 = param_1[2];
    if (uVar4 <= param_1[2]) {
      uVar3 = uVar4;
    }
    uVar4 = param_1[5];
    if (uVar3 <= param_1[5]) {
      uVar4 = uVar3;
    }
    uVar3 = param_1[6];
    if (uVar4 <= param_1[6]) {
      uVar3 = uVar4;
    }
    uVar4 = param_1[7];
    if (uVar3 <= param_1[7]) {
      uVar4 = uVar3;
    }
    uVar3 = param_1[8];
    if (uVar4 <= param_1[8]) {
      uVar3 = uVar4;
    }
    uVar4 = param_1[9];
    if (uVar3 <= param_1[9]) {
      uVar4 = uVar3;
    }
    uVar3 = param_1[10];
    if (uVar4 <= param_1[10]) {
      uVar3 = uVar4;
    }
    uVar4 = param_1[0xb];
    if (uVar3 <= param_1[0xb]) {
      uVar4 = uVar3;
    }
    uVar3 = param_1[0xc];
    if (uVar4 <= param_1[0xc]) {
      uVar3 = uVar4;
    }
    uVar4 = param_1[0xd];
    if (uVar3 <= param_1[0xd]) {
      uVar4 = uVar3;
    }
    uVar3 = param_1[0xe];
    if (uVar4 <= param_1[0xe]) {
      uVar3 = uVar4;
    }
    uVar4 = param_1[0xf];
    if (uVar3 <= param_1[0xf]) {
      uVar4 = uVar3;
    }
    uVar6 = (ulonglong)(uVar4 & 0xffff);
    if (0x7fff < (ushort)uVar4) {
      uVar3 = param_1[0x2c] & 0xffe7;
      if ((uVar3 != 0) &&
         ((param_1[0x2c] >> (*(byte *)(*(longlong *)(param_1 + 0x24) + 6 + uVar6 * 8) & 0x1f) & 1)
          == 0)) {
        uVar4 = 0;
        if (uVar3 != 0) {
          for (; (uVar3 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        uVar6 = (ulonglong)(ushort)param_1[uVar4];
      }
    }
    uVar3 = FUN_1804d20f0(param_1,uVar6);
  }
  else {
    uVar4 = (param_1[0x2a] & 0xff00) << 8 | uVar3 << 0x18;
    uVar3 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    uVar3 = uVar3 ^ 0x18;
  }
  param_1[0x2b] = param_1[0x2b] | 1 << (uVar3 & 0x1f);
  uVar8 = 0x10;
  if (*(char *)((longlong)param_2 + 5) != '=') {
    uVar8 = 0x20;
  }
  uVar5 = 0x8d0000fe;
  if (*(char *)((longlong)param_2 + 5) != '=') {
    uVar5 = 0x8b0000fe;
  }
  FUN_1804d0810(param_1,uVar5,uVar2 | 0x80200,uVar3,uVar8);
  if (bVar7 == 0x89) {
    FUN_1804c9500(param_1,(*(char *)((longlong)param_2 + 5) != '=') + '\x04');
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
    uVar8 = 10;
    **(undefined1 **)(param_1 + 0x20) = 0;
    FUN_1804d0810();
  }
  uVar1 = *param_2;
  if (uVar1 < 0x8000) {
    FUN_1804d0150(param_1,uVar3,
                  *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x24) + 8 + (ulonglong)uVar1 * 8) + 0x28 +
                   (ulonglong)(param_2[1] >> 8) * 8));
  }
  else {
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x24) + 6 + (ulonglong)uVar1 * 8);
    uVar2 = (uint)bVar7;
    if ((char)bVar7 < '\0') {
      uVar2 = FUN_1804d1420(param_1,uVar1,0xffe7,uVar2,uVar8);
    }
    param_1[0x2c] = param_1[0x2c] & ~(1 << (uVar2 & 0x1f));
    FUN_1804d0810(param_1,0x8b0000fe,uVar3 | 0x80200,uVar2,(param_2[1] >> 8) * 8 + 0x28);
  }
  return;
}



/* ===== 1804cf9f0 FUN_1804cf9f0 ===== */

int FUN_1804cf9f0(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  
  iVar3 = 0;
  uVar6 = 0;
  uVar5 = (uint)(byte)(&DAT_180570250)[*param_1];
switchD_1804cfa26_default:
  switch(uVar5 >> 4) {
  case 0:
    goto switchD_1804cfa26_caseD_0;
  case 1:
    pbVar7 = param_1 + 1;
    param_1 = param_1 + 1;
    uVar6 = uVar6 | uVar5;
    iVar3 = iVar3 + 1;
    uVar5 = (uint)(byte)(&DAT_180570250)[*pbVar7];
    goto switchD_1804cfa26_default;
  case 2:
    pbVar7 = param_1 + 1;
    param_1 = param_1 + 1;
    uVar5 = (uint)(byte)(&DAT_180570350)[*pbVar7];
    goto switchD_1804cfa26_default;
  case 3:
    param_1 = param_1 + 1;
    break;
  case 4:
    iVar3 = iVar3 - (uVar6 & 2);
  case 5:
    return iVar3 + (uVar5 & 0xf);
  case 6:
    if ((param_1[1] & 0x38) == 0) {
      if (((uVar6 & 2) != 0) && (uVar5 == 0x66)) {
        uVar5 = 4;
      }
    }
    else {
      uVar5 = 2;
    }
    break;
  case 7:
    pbVar7 = param_1;
    if (uVar5 == 0x70) {
      uVar5 = (uint)param_1[1];
      pbVar7 = param_1 + 1;
      if ((param_1[1] & 0x1e) != 0) {
        param_1 = param_1 + 3;
        iVar3 = iVar3 + 3;
        break;
      }
      iVar3 = iVar3 + 1;
    }
    iVar3 = iVar3 + 1;
    param_1 = pbVar7 + 2;
    uVar5 = (uint)(byte)(&DAT_180570350)[pbVar7[2]];
    goto switchD_1804cfa26_default;
  case 8:
    iVar3 = iVar3 - (uVar6 & 2);
    break;
  default:
    goto switchD_1804cfa26_default;
  }
  bVar1 = param_1[1];
  iVar3 = iVar3 + (uVar5 & 0xf);
  bVar2 = bVar1 >> 6;
  if (bVar2 == 0) {
    if ((bVar1 & 7) == 5) {
      return iVar3 + 4;
    }
  }
  else if (bVar2 == 1) {
    iVar3 = iVar3 + 1;
  }
  else if (bVar2 == 2) {
    iVar3 = iVar3 + 4;
  }
  else if (bVar2 == 3) {
    return iVar3;
  }
  iVar4 = iVar3;
  if ((((bVar1 & 7) == 4) && (iVar4 = iVar3 + 1, bVar1 < 0x40)) && ((param_1[2] & 7) == 5)) {
    iVar4 = iVar3 + 5;
  }
  return iVar4;
switchD_1804cfa26_caseD_0:
  return uVar5 + (uVar6 & 4) + iVar3;
}



/* ===== 1804cfb60 FUN_1804cfb60 ===== */

void FUN_1804cfb60(longlong param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_2;
  lVar3 = *(longlong *)(param_1 + 0x90);
  cVar1 = *(char *)(lVar3 + 5 + uVar6 * 8);
  if (cVar1 != '\x1c') {
    if ((((cVar1 == '[') && (*(short *)(lVar3 + 2 + uVar6 * 8) == 0x1d3)) &&
        (*(char *)(lVar3 + 6 + uVar6 * 8) < '\0')) && (*(char *)(lVar3 + 7 + uVar6 * 8) == '\0')) {
      uVar2 = *(ushort *)(lVar3 + uVar6 * 8);
      if ((0x7fff < uVar2) && (*(uint *)(param_1 + 0xf8) < (uint)uVar2)) {
        uVar5 = FUN_1804d2290(param_1,lVar3 + (ulonglong)uVar2 * 8);
        FUN_1804d0810(param_1,0xdb0000fe,0,4,uVar5);
        return;
      }
    }
    uVar5 = FUN_1804c8200(param_1,uVar6,0);
    FUN_1804d0390(param_1,0xdd0000fe,0,uVar5);
    return;
  }
  lVar4 = *(longlong *)(lVar3 + ((ulonglong)param_2 + 1) * 8);
  if (lVar4 == 0) {
    *(undefined2 *)(*(longlong *)(param_1 + 0x80) + -2) = 0xeed9;
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -2;
    return;
  }
  if (lVar4 == 0x3ff0000000000000) {
    *(undefined2 *)(*(longlong *)(param_1 + 0x80) + -2) = 0xe8d9;
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -2;
    return;
  }
  FUN_1804d0600(param_1,0xdd0000fe,0,lVar3 + ((ulonglong)param_2 + 1) * 8);
  return;
}



/* ===== 1804cfc80 FUN_1804cfc80 ===== */

void FUN_1804cfc80(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  puVar1 = (undefined4 *)(lVar2 + -5);
  if (param_2 - lVar2 == (longlong)((int)param_2 - (int)lVar2)) {
    *(int *)(lVar2 + -4) = (int)(param_2 - lVar2);
    *(undefined1 *)puVar1 = 0xe8;
    *(undefined4 **)(param_1 + 0x80) = puVar1;
    return;
  }
  *(undefined1 *)(lVar2 + -1) = 0xd0;
  *puVar1 = 0xff0000fe;
  *(longlong *)(param_1 + 0x80) = lVar2 + -2;
  FUN_1804d0150(param_1,0,param_2);
  return;
}



/* ===== 1804cfcd0 FUN_1804cfcd0 ===== */

void FUN_1804cfcd0(longlong param_1,uint param_2,uint param_3,int param_4)

{
  char *pcVar1;
  uint uVar2;
  
  if (param_4 == (char)param_4) {
    pcVar1 = (char *)(*(longlong *)(param_1 + 0x80) + -1);
    *(char **)(param_1 + 0x80) = pcVar1;
    *pcVar1 = (char)param_4;
    uVar2 = param_2 << 8;
  }
  else {
    *(int *)(*(longlong *)(param_1 + 0x80) + -4) = param_4;
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
    uVar2 = param_2 << 0x10;
  }
  FUN_1804d0390(param_1,uVar2 & 0xff000000 | 0xfe,param_3 & 0x80200 | param_2 & 7,
                param_3 & 0xfff7fdff);
  return;
}



/* ===== 1804cfd40 FUN_1804cfd40 ===== */

void FUN_1804cfd40(longlong param_1,uint param_2,undefined4 param_3,undefined8 param_4,int param_5)

{
  char *pcVar1;
  uint uVar2;
  
  if (param_5 == (char)param_5) {
    pcVar1 = (char *)(*(longlong *)(param_1 + 0x80) + -1);
    *(char **)(param_1 + 0x80) = pcVar1;
    *pcVar1 = (char)param_5;
    uVar2 = param_2 << 8;
  }
  else {
    *(int *)(*(longlong *)(param_1 + 0x80) + -4) = param_5;
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -4;
    uVar2 = param_2 << 0x10;
  }
  FUN_1804d0810(param_1,uVar2 & 0xff000000 | 0xfe,param_2 & 7,param_3);
  return;
}



/* ===== 1804cfda0 FUN_1804cfda0 ===== */

void FUN_1804cfda0(longlong param_1,int param_2,uint param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (param_4 == (char)param_4) {
    *(char *)(lVar1 + -1) = (char)param_4;
    lVar5 = -6;
    lVar7 = -1;
    uVar2 = param_2 << 8;
    lVar6 = -2;
  }
  else {
    *(int *)(lVar1 + -4) = param_4;
    lVar5 = -9;
    lVar7 = -4;
    uVar2 = param_2 << 0x10;
    lVar6 = -5;
  }
  iVar3 = (uVar2 & 0xff000000) + 0xfe;
  *(byte *)(lVar6 + lVar1) = (((byte)param_2 & 7) << 3 | (byte)param_3 & 7) - 0x40;
  uVar2 = param_3 >> 3 & 1;
  *(int *)(lVar5 + lVar1) = iVar3;
  lVar5 = (longlong)(char)iVar3;
  if (((param_3 & 0x80200) >> 1 & 0x104) == 0 && uVar2 == 0) {
    *(longlong *)(param_1 + 0x80) = lVar5 + lVar7 + lVar1;
    return;
  }
  pbVar4 = (byte *)(lVar5 + lVar6 + lVar1);
  *pbVar4 = (byte)uVar2 | (byte)((param_3 & 0x80200) >> 0x10) | 0x40;
  *(byte **)(param_1 + 0x80) = pbVar4;
  return;
}



/* ===== 1804cfe80 FUN_1804cfe80 ===== */

void FUN_1804cfe80(longlong param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  longlong lVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    pbVar1 = *(byte **)(param_1 + 0x80);
    if (((*pbVar1 != 0xf) || ((pbVar1[1] & 0xf0) != 0x80)) && ((*pbVar1 & 0xf0) != 0x70)) {
      pbVar1[-1] = ((byte)param_2 & 7) * '\t' - 0x40;
      pbVar1[-5] = 0xfe;
      pbVar1[-4] = 0;
      pbVar1[-3] = 0;
      pbVar1[-2] = 0x33;
      uVar3 = param_2 >> 1 & 0x104 | param_2 >> 3 & 1;
      if (uVar3 == 0) {
        *(byte **)(param_1 + 0x80) = pbVar1 + -2;
        return;
      }
      pbVar1[-3] = (byte)uVar3 | (byte)(param_2 >> 0x10) | 0x40;
      *(byte **)(param_1 + 0x80) = pbVar1 + -3;
      return;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  *(int *)(lVar2 + -4) = param_3;
  *(byte *)(lVar2 + -5) = ((byte)param_2 & 7) + 0xb8;
  if ((param_2 >> 3 & 1) == 0) {
    *(longlong *)(param_1 + 0x80) = lVar2 + -5;
    return;
  }
  *(byte *)(lVar2 + -6) = (byte)(param_2 >> 3) & 1 | 0x40;
  *(longlong *)(param_1 + 0x80) = lVar2 + -6;
  return;
}



/* ===== 1804cff60 FUN_1804cff60 ===== */

void FUN_1804cff60(longlong param_1,uint param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  
  plVar1 = (longlong *)(param_3 + 2);
  uVar6 = 0xffff0000U >> ((byte)param_2 & 0x1f) & 1;
  uVar7 = 0x100ff2fc;
  if (uVar6 == 0) {
    uVar7 = 0x8b0000fe;
  }
  uVar3 = param_2;
  if (uVar6 == 0) {
    uVar3 = param_2 | 0x80200;
  }
  if (*plVar1 == 0) {
    uVar5 = 0x330000fe;
    if (uVar6 != 0) {
      uVar5 = 0x570f00fd;
    }
    FUN_1804d0960(param_1,uVar5,param_2,param_2);
    return;
  }
  iVar8 = (int)plVar1;
  if (((plVar1 == (longlong *)(longlong)iVar8) ||
      ((longlong)param_3 + (-0xcb0 - *(longlong *)(param_1 + 0x98)) ==
       (longlong)((iVar8 - *(int *)(param_1 + 0x98)) + -0xcb8))) ||
     (((longlong)plVar1 - *(longlong *)(param_1 + 0x80) ==
       (longlong)(iVar8 - *(int *)(param_1 + 0x80)) &&
      ((longlong)plVar1 - *(longlong *)(param_1 + 0x128) ==
       (longlong)(iVar8 - *(int *)(param_1 + 0x128)))))) {
    FUN_1804d0600(param_1,uVar7,uVar3);
    return;
  }
  if (*param_3 == 0) {
    if ((*(uint *)(param_1 + 200) <= *(uint *)(param_1 + 0xcc)) &&
       ((0xffe7U >> ((byte)param_2 & 0x1f) & 1) != 0)) {
      FUN_1804d0150(param_1,param_2,*plVar1);
      return;
    }
    plVar4 = *(longlong **)(param_1 + 0x120);
    while (((ulonglong)plVar4 & 7) != 0) {
      *(undefined1 *)plVar4 = 0xcc;
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x120) + 1);
      *(longlong **)(param_1 + 0x120) = plVar4;
    }
    *plVar4 = *plVar1;
    *param_3 = *(int *)(param_1 + 0x128) - *(int *)(param_1 + 0x120);
    lVar2 = *(longlong *)(param_1 + 0x120) + 8;
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x120) + 0x48;
    *(longlong *)(param_1 + 0x120) = lVar2;
    *(longlong *)(*(longlong *)(param_1 + 0x98) + 0xbf8) = lVar2;
  }
  FUN_1804d0810(param_1,uVar7,uVar3,0x25,
                (*(int *)(param_1 + 0x128) - *(int *)(param_1 + 0x80)) - *param_3);
  return;
}



/* ===== 1804d0150 FUN_1804d0150 ===== */

void FUN_1804d0150(longlong param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == (param_3 & 0xffffffff)) {
    FUN_1804cfe80();
    return;
  }
  iVar2 = (int)param_3;
  if (param_3 == (longlong)iVar2) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    *(byte *)(lVar1 + -5) = ((byte)param_2 & 7) - 0x40;
    *(int *)(lVar1 + -4) = iVar2;
    *(undefined4 *)(lVar1 + -9) = 0xc70000fe;
    *(byte *)(lVar1 + -7) = (byte)(param_2 >> 3) & 1 | 0x48;
    *(byte **)(param_1 + 0x80) = (byte *)(lVar1 + -7);
    return;
  }
  iVar3 = (iVar2 - *(int *)(param_1 + 0x98)) + -0xcb8;
  if ((param_3 - *(longlong *)(param_1 + 0x98)) + -0xcb8 == (longlong)iVar3) {
    FUN_1804d0810(param_1,0x8d0000fe,param_2 | 0x80200,3,iVar3);
    return;
  }
  iVar3 = iVar2 - *(int *)(param_1 + 0x80);
  lVar1 = *(longlong *)(param_1 + 0x80);
  if ((param_3 - lVar1 == (longlong)iVar3) &&
     (param_3 - *(longlong *)(param_1 + 0x128) == (longlong)(iVar2 - *(int *)(param_1 + 0x128)))) {
    FUN_1804d0810(param_1,0x8d0000fe,param_2 | 0x80200,0x25,iVar3);
    return;
  }
  *(ulonglong *)(lVar1 + -8) = param_3;
  *(byte *)(lVar1 + -9) = ((byte)param_2 & 7) + 0xb8;
  *(byte *)(lVar1 + -10) = (byte)(param_2 >> 3) & 1 | 0x48;
  *(byte **)(param_1 + 0x80) = (byte *)(lVar1 + -10);
  return;
}



/* ===== 1804d0290 FUN_1804d0290 ===== */

void FUN_1804d0290(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = (byte)param_4 & 7;
  if (0xf < param_3) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    *(byte *)(lVar1 + -1) = (((byte)param_3 & 7) << 3 | bVar3) - 0x40;
    *(undefined4 *)(lVar1 + -5) = 0x280f00fd;
    uVar2 = param_3 >> 1 & 0x104 | param_4 >> 3 & 1;
    if (uVar2 == 0) {
      *(longlong *)(param_1 + 0x80) = lVar1 + -3;
      return;
    }
    *(byte *)(lVar1 + -4) = (byte)uVar2 | (byte)(param_3 >> 0x10) | 0x40;
    *(longlong *)(param_1 + 0x80) = lVar1 + -4;
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  param_3 = (-(uint)((0x605fd9U >> (*(byte *)(param_2 + 4) & 0x1f) & 1) != 0) & 0x80200) + param_3;
  *(byte *)(lVar1 + -1) = (((byte)param_3 & 7) << 3 | bVar3) - 0x40;
  *(undefined4 *)(lVar1 + -5) = 0x8b0000fe;
  uVar2 = param_3 >> 1 & 0x104 | param_4 >> 3 & 1;
  if (uVar2 == 0) {
    *(longlong *)(param_1 + 0x80) = lVar1 + -2;
    return;
  }
  *(byte *)(lVar1 + -3) = (byte)uVar2 | (byte)(param_3 >> 0x10) | 0x40;
  *(longlong *)(param_1 + 0x80) = lVar1 + -3;
  return;
}



/* ===== 1804d0390 FUN_1804d0390 ===== */

void FUN_1804d0390(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  byte *pbVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  byte bVar10;
  
  piVar9 = *(int **)(param_1 + 0x80);
  bVar10 = 0xc0;
  cVar6 = (char)param_2;
  bVar2 = (byte)(param_2 >> 8);
  bVar3 = (byte)(param_3 >> 0x10);
  if (param_4 == 0x20) {
    bVar10 = *(byte *)(param_1 + 0xa4);
    iVar1 = *(int *)(param_1 + 0xa0);
    if (bVar10 == 0x80) {
      piVar9[-1] = iVar1;
      bVar10 = 0;
      bVar7 = *(byte *)(param_1 + 0xa5);
      if (bVar7 != 0x80) {
        piVar9 = piVar9 + -1;
        param_4 = 5;
LAB_1804d0454:
        puVar4 = (uint *)((longlong)piVar9 + -6);
        *(byte *)((longlong)piVar9 + -1) =
             ((bVar7 & 7) << 3 | (byte)param_4 & 7) + *(char *)(param_1 + 0xa6);
        *(byte *)((longlong)piVar9 + -2) = ((byte)param_3 & 7) << 3 | bVar10 | 4;
        bVar10 = *(byte *)(param_1 + 0xa5);
        if (cVar6 != -0x3c) {
          *puVar4 = param_2;
          pbVar5 = (byte *)((longlong)cVar6 + -1 + (longlong)piVar9);
          uVar8 = param_3 >> 1 & 0x104 | bVar10 >> 2 & 2 | param_4 >> 3 & 1;
          if (uVar8 != 0) {
            bVar3 = (byte)uVar8 | bVar3 | 0x40;
            if (cVar6 == -4) {
              *pbVar5 = bVar3;
              *(byte *)((longlong)piVar9 + -6) = bVar2;
              *(byte **)(param_1 + 0x80) = (byte *)((longlong)piVar9 + -6);
              return;
            }
            if ((param_2 & 0xffffff) == 0x6600fd) {
              *pbVar5 = bVar3;
              bVar3 = 0x66;
            }
            pbVar5 = (byte *)((longlong)cVar6 + -2 + (longlong)piVar9);
            *pbVar5 = bVar3;
            *(byte **)(param_1 + 0x80) = pbVar5;
            return;
          }
          goto LAB_1804d05e6;
        }
        uVar8 = ((param_3 & 8) * 2 | bVar10 & 8) * 2;
        goto LAB_1804d0570;
      }
      piVar9 = (int *)((longlong)piVar9 + -5);
      param_4 = 4;
      *(undefined1 *)piVar9 = 0x25;
    }
    else {
      param_4 = (uint)bVar10;
      if (bVar10 == 0x25) {
        bVar10 = 0;
        piVar9[-1] = iVar1;
        piVar9 = piVar9 + -1;
      }
      else {
        if ((iVar1 == 0) && ((param_4 & 7) != 5)) {
          bVar10 = 0;
        }
        else if (iVar1 == (char)iVar1) {
          piVar9 = (int *)((longlong)piVar9 + -1);
          bVar10 = 0x40;
          *(char *)piVar9 = (char)iVar1;
        }
        else {
          piVar9 = piVar9 + -1;
          bVar10 = 0x80;
          *piVar9 = iVar1;
        }
        bVar7 = *(byte *)(param_1 + 0xa5);
        if (bVar7 != 0x80) goto LAB_1804d0454;
        if ((param_4 & 7) == 4) {
          piVar9 = (int *)((longlong)piVar9 + -1);
          *(undefined1 *)piVar9 = 0x24;
        }
      }
    }
  }
  *(byte *)((longlong)piVar9 + -1) = ((byte)param_3 & 7) << 3 | (byte)param_4 & 7 | bVar10;
  puVar4 = (uint *)((longlong)piVar9 + -5);
  if (cVar6 != -0x3c) {
    *puVar4 = param_2;
    pbVar5 = (byte *)((longlong)cVar6 + (longlong)piVar9);
    uVar8 = param_3 >> 1 & 0x104 | param_4 >> 3 & 1;
    if (uVar8 != 0) {
      bVar3 = (byte)uVar8 | bVar3 | 0x40;
      if (cVar6 == -4) {
        *pbVar5 = bVar3;
        bVar3 = bVar2;
      }
      else if ((param_2 & 0xffffff) == 0x6600fd) {
        *pbVar5 = bVar3;
        bVar3 = 0x66;
      }
      pbVar5 = pbVar5 + -1;
      *pbVar5 = bVar3;
    }
LAB_1804d05e6:
    *(byte **)(param_1 + 0x80) = pbVar5;
    return;
  }
  uVar8 = (param_3 & 8) << 2;
LAB_1804d0570:
  *puVar4 = (uVar8 | param_4 & 8) << 10 ^ param_2;
  *(uint **)(param_1 + 0x80) = puVar4;
  return;
}



/* ===== 1804d0600 FUN_1804d0600 ===== */

void FUN_1804d0600(longlong param_1,uint param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  undefined1 *puVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 uVar10;
  
  iVar9 = (int)param_4;
  uVar8 = param_3 & 0xffffffff;
  iVar3 = (iVar9 - *(int *)(param_1 + 0x98)) + -0xcb8;
  if ((param_4 - *(longlong *)(param_1 + 0x98)) + -0xcb8 == (longlong)iVar3) {
    FUN_1804d0810(param_1,param_2,param_3,3,iVar3);
  }
  else {
    puVar5 = *(undefined1 **)(param_1 + 0x80);
    iVar3 = iVar9 - *(int *)(param_1 + 0x80);
    uVar7 = (uint)param_3;
    if ((param_4 - (longlong)puVar5 == (longlong)iVar3) &&
       (param_4 - *(longlong *)(param_1 + 0x128) == (longlong)(iVar9 - *(int *)(param_1 + 0x128))))
    {
      FUN_1804d0810(param_1,param_2,uVar8,0x25,iVar3);
    }
    else if (param_4 == iVar9) {
      *(int *)(puVar5 + -4) = iVar9;
      puVar5[-5] = 0x25;
      puVar4 = (uint *)(puVar5 + -10);
      puVar5[-6] = ((byte)uVar8 & 7) << 3 | 4;
      cVar6 = (char)param_2;
      if (cVar6 == -0x3c) {
        *puVar4 = (uVar7 & 8) << 0xc ^ param_2;
      }
      else {
        *puVar4 = param_2;
        puVar4 = (uint *)(puVar5 + (longlong)cVar6 + -5);
        if ((param_3 & 0x208) != 0) {
          bVar2 = (byte)(uVar7 >> 1) & 4 | (byte)(param_3 >> 0x10) | 0x40;
          if (cVar6 == -4) {
            *(byte *)puVar4 = bVar2;
            bVar2 = (byte)(param_2 >> 8);
          }
          else if ((param_2 & 0xffffff) == 0x6600fd) {
            *(byte *)puVar4 = bVar2;
            bVar2 = 0x66;
          }
          puVar4 = (uint *)(puVar5 + (longlong)cVar6 + -6);
          *(byte *)puVar4 = bVar2;
        }
      }
      *(uint **)(param_1 + 0x80) = puVar4;
    }
    else {
      if (param_2 == 0x8b0000fe) {
        uVar7 = uVar7 & 0xf;
      }
      else {
        uVar1 = *(longlong *)(param_1 + 0x98) + 0xcb8;
        if (param_2 == 0xf60000fe) {
          uVar10 = *puVar5;
          puVar5 = puVar5 + 1;
          *(undefined1 **)(param_1 + 0x80) = puVar5;
        }
        else {
          uVar10 = 0;
        }
        uVar7 = 3;
        if (uVar1 == (uVar1 & 0xffffffff)) {
          FUN_1804cfe80(param_1,3);
        }
        else {
          *(ulonglong *)(puVar5 + -8) = uVar1;
          puVar5[-10] = 0x48;
          puVar5[-9] = 0xbb;
          *(undefined1 **)(param_1 + 0x80) = puVar5 + -10;
        }
        if (param_2 == 0xf60000fe) {
          *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -1;
          **(undefined1 **)(param_1 + 0x80) = uVar10;
        }
      }
      FUN_1804d0810(param_1,param_2,uVar8,uVar7,0);
      FUN_1804d0150(param_1,uVar7,param_4);
    }
  }
  return;
}



/* ===== 1804d0810 FUN_1804d0810 ===== */

void FUN_1804d0810(longlong param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  char cVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x80);
  if ((char)param_4 < '\0') {
    param_4 = 4;
    piVar6[-1] = param_5;
    piVar6 = (int *)((longlong)piVar6 + -5);
    bVar2 = 0;
    *(char *)piVar6 = '%';
  }
  else {
    if (param_4 == 0x25) {
      piVar6 = piVar6 + -1;
      *piVar6 = param_5;
      bVar2 = 0;
    }
    else if ((param_5 == 0) && ((param_4 & 7) != 5)) {
      bVar2 = 0;
    }
    else if (param_5 == (char)param_5) {
      piVar6 = (int *)((longlong)piVar6 + -1);
      bVar2 = 0x40;
      *(char *)piVar6 = (char)param_5;
    }
    else {
      piVar6 = piVar6 + -1;
      bVar2 = 0x80;
      *piVar6 = param_5;
    }
    if ((param_4 & 7) == 4) {
      piVar6 = (int *)((longlong)piVar6 + -1);
      *(char *)piVar6 = '$';
    }
  }
  puVar1 = (uint *)((longlong)piVar6 + -5);
  *(byte *)((longlong)piVar6 + -1) = ((byte)param_3 & 7) << 3 | (byte)param_4 & 7 | bVar2;
  cVar5 = (char)param_2;
  if (cVar5 == -0x3c) {
    *puVar1 = ((param_3 & 8) << 2 | param_4 & 8) << 10 ^ param_2;
    *(uint **)(param_1 + 0x80) = puVar1;
    return;
  }
  *puVar1 = param_2;
  pbVar4 = (byte *)((longlong)cVar5 + (longlong)piVar6);
  uVar3 = param_3 >> 1 & 0x104 | param_4 >> 3 & 1;
  if (uVar3 != 0) {
    bVar2 = (byte)uVar3 | (byte)(param_3 >> 0x10) | 0x40;
    if (cVar5 == -4) {
      *pbVar4 = bVar2;
      pbVar4[-1] = (byte)(param_2 >> 8);
      *(byte **)(param_1 + 0x80) = pbVar4 + -1;
      return;
    }
    if ((param_2 & 0xffffff) == 0x6600fd) {
      *pbVar4 = bVar2;
      bVar2 = 0x66;
    }
    pbVar4 = pbVar4 + -1;
    *pbVar4 = bVar2;
  }
  *(byte **)(param_1 + 0x80) = pbVar4;
  return;
}



/* ===== 1804d0960 FUN_1804d0960 ===== */

void FUN_1804d0960(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  char cVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  *(byte *)(lVar2 + -1) = (((byte)param_3 & 7) << 3 | (byte)param_4 & 7) - 0x40;
  puVar1 = (uint *)(lVar2 + -5);
  cVar6 = (char)param_2;
  if (cVar6 == -0x3c) {
    *puVar1 = ((param_3 & 8) << 2 | param_4 & 8) << 10 ^ param_2;
    *(uint **)(param_1 + 0x80) = puVar1;
    return;
  }
  *puVar1 = param_2;
  pbVar5 = (byte *)(lVar2 + cVar6);
  uVar4 = param_3 >> 1 & 0x104 | param_4 >> 3 & 1;
  if (uVar4 != 0) {
    bVar3 = (byte)uVar4 | (byte)(param_3 >> 0x10) | 0x40;
    if (cVar6 == -4) {
      *pbVar5 = bVar3;
      pbVar5[-1] = (byte)(param_2 >> 8);
      *(byte **)(param_1 + 0x80) = pbVar5 + -1;
      return;
    }
    if ((param_2 & 0xffffff) == 0x6600fd) {
      *pbVar5 = bVar3;
      bVar3 = 0x66;
    }
    pbVar5 = pbVar5 + -1;
    *pbVar5 = bVar3;
  }
  *(byte **)(param_1 + 0x80) = pbVar5;
  return;
}



/* ===== 1804d0a20 FUN_1804d0a20 ===== */

void FUN_1804d0a20(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  ushort *puVar5;
  ushort *puVar6;
  byte *pbVar7;
  ushort *puVar8;
  ulonglong uVar9;
  
  puVar5 = *(ushort **)(param_2 + 0x58);
  uVar3 = FUN_1804bc250(param_1,puVar5,0);
  uVar2 = *(uint *)(param_2 + 0x54);
  uVar9 = (ulonglong)uVar2;
  puVar6 = (ushort *)((longlong)puVar5 + (uVar9 - 6));
  pbVar7 = (byte *)(*(longlong *)(param_1 + 0x6a0 + (ulonglong)(param_3 >> 5) * 8) +
                   (ulonglong)((param_3 & 0x1f) << 2));
  if (((5 < uVar2) && (*(byte *)((ulonglong)(uVar2 - 5) + (longlong)puVar5) == 0xe9)) &&
     ((byte *)((longlong)*(int *)((uVar9 - 4) + (longlong)puVar5) + uVar9 + (longlong)puVar5) ==
      pbVar7)) {
    *(uint *)((uVar9 - 4) + (longlong)puVar5) = (param_4 - uVar2) - (int)puVar5;
  }
  while( true ) {
    if (puVar6 <= puVar5) goto LAB_1804d0bbc;
    bVar4 = (byte)*puVar5 & 0xf0;
    if ((*(int *)((longlong)puVar5 + (ulonglong)(bVar4 == 0x40) + 2) == -0xee8) &&
       (*(byte *)((ulonglong)(bVar4 == 0x40) + (longlong)puVar5) == 199)) break;
    uVar2 = FUN_1804cf9f0(puVar5);
    puVar5 = (ushort *)((longlong)puVar5 + (ulonglong)uVar2);
  }
  puVar8 = (ushort *)0x0;
  for (; puVar5 < puVar6; puVar5 = (ushort *)((longlong)puVar5 + (ulonglong)uVar2)) {
    uVar1 = *puVar5;
    if ((((uVar1 & 0xf0ff) == 0x800f) &&
        ((byte *)((longlong)*(int *)(puVar5 + 1) + (longlong)puVar5) == pbVar7 + -6)) &&
       (puVar5 != puVar8)) {
      *(int *)(puVar5 + 1) = (param_4 - (int)puVar5) + -6;
    }
    else if ((char)uVar1 == -0x18) {
      if ((code *)((longlong)*(int *)((longlong)puVar5 + 1) + 5 + (longlong)puVar5) == FUN_1804915e0
         ) {
        puVar8 = (ushort *)((longlong)puVar5 + 7);
      }
    }
    else if ((((char)uVar1 == -1) && ((char)(uVar1 >> 8) == -0x30)) && ((byte)puVar5[1] == 0x90)) {
      puVar8 = (ushort *)((longlong)puVar5 + 5);
    }
    uVar2 = FUN_1804cf9f0(puVar5);
  }
LAB_1804d0bbc:
  _guard_check_icall(*(longlong *)(param_2 + 0x58),
                     (ulonglong)*(uint *)(param_2 + 0x54) + *(longlong *)(param_2 + 0x58));
  FUN_1804bc250(param_1,uVar3,1);
  return;
}



/* ===== 1804d0bf0 FUN_1804d0bf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804d0bf0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_408 [32];
  undefined1 local_3e8 [128];
  byte *local_368;
  byte *local_360;
  longlong local_358;
  longlong local_350;
  undefined1 local_344;
  uint local_340;
  uint local_33c;
  uint local_334;
  uint local_330;
  int local_32c;
  int local_328;
  uint local_320;
  uint local_31c;
  uint local_318;
  undefined4 local_308;
  int local_2f0;
  int local_2ec;
  int local_2e8;
  undefined8 local_2e4;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  byte *local_2c0;
  byte *local_2b8;
  longlong local_2b0;
  byte *local_2a8;
  undefined8 local_2a0;
  ulonglong local_298;
  byte *local_290;
  ushort auStack_288 [288];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_408;
  iVar10 = *(int *)(param_2 + 0xc);
  lVar14 = *(longlong *)(param_2 + 0x20) + (ulonglong)(iVar10 - 1) * 8;
  if ((*(char *)(*(longlong *)(param_2 + 0x20) + 5 + (ulonglong)(iVar10 - 1) * 8) - 0xcU & 0xf7) ==
      0) {
    do {
      do {
        pcVar1 = (char *)(lVar14 + -3);
        lVar14 = lVar14 + -8;
        iVar10 = iVar10 + -1;
      } while (*pcVar1 == '\f');
    } while (*pcVar1 == '\x14');
    *(int *)(param_2 + 0xc) = iVar10;
  }
  uVar11 = *(uint *)(param_1 + 0xc);
  uVar9 = (ulonglong)uVar11;
  if (*(uint *)(param_1 + 0x150) <= uVar11) {
    FUN_1804a6170(param_1);
  }
  lVar14 = *(longlong *)(param_1 + 0x20);
  *(uint *)(param_1 + 0xc) = uVar11 + 1;
  *(undefined4 *)(lVar14 + 2 + uVar9 * 8) = 0xc000000;
  *(undefined2 *)(lVar14 + uVar9 * 8) = 0;
  *(undefined2 *)(lVar14 + 6 + uVar9 * 8) = 0;
  local_350 = param_1;
  local_318 = uVar11;
  local_2d8 = param_2;
  uVar6 = FUN_1804953f0(*(undefined8 *)(param_1 + 0x80),param_2);
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  local_330 = *(uint *)(param_1 + 0xa8);
  local_2e8 = *(int *)(param_1 + 0x158);
  local_298 = 0;
  local_32c = 0;
  if (*(uint *)(param_1 + 0xbc8) == 0) {
    local_2d0 = 0;
  }
  else {
    local_2d0 = *(longlong *)
                 (*(longlong *)(param_1 + 0x180) + (ulonglong)*(uint *)(param_1 + 0xbc8) * 8);
  }
  local_368 = (byte *)FUN_1804bc380(param_1,&local_2c8);
  local_360 = (byte *)(local_2c8 + 0x40);
  local_2c0 = local_368;
  local_2b8 = local_368;
  FUN_1804c79b0(local_3e8,*(undefined2 *)(local_2d8 + 10));
  local_344 = 0;
  lVar14 = 5;
LAB_1804d0d40:
  do {
    local_358 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
    *(uint *)(param_1 + 0xc) = local_318;
    local_320 = local_318;
    if (local_298 == 0) {
      local_290 = local_2c0 + -(6 - (ulonglong)(*(short *)(param_2 + 0x6a) != 0));
    }
    else {
      uVar11 = (uint)local_298 & 0xf;
      if ((local_298 & 0xf) != 0) {
        do {
          uVar11 = uVar11 - 1;
          local_2c0[-1] = 0x90;
          local_2c0 = local_2c0 + -1;
        } while (0 < (int)uVar11);
      }
      lVar7 = 2;
      if (local_32c != 0) {
        lVar7 = 5;
      }
      local_290 = local_2c0 + -lVar7;
    }
    if (local_2e8 == 0) {
      local_368 = local_290 + -7;
      local_2a8 = (byte *)0x0;
    }
    else {
      local_368 = local_290;
      local_2a8 = local_290;
    }
    local_2ec = local_2e8;
    local_2b0 = 0;
    if (local_2e8 == 0) {
      local_290 = local_290 + -7;
    }
    local_2a0 = 0;
    local_2f0 = -1;
    if ((local_330 & 0x2000000) != 0) {
      local_2f0 = local_2e8;
    }
    local_2e4 = 0;
    FUN_1804cd450(local_3e8);
    if (local_2e8 == 0) {
      FUN_1804ceeb0(local_3e8);
    }
    local_320 = local_320 - 1;
    if (local_31c < local_320) {
      do {
        lVar7 = local_358 + (ulonglong)local_320 * 8;
        FUN_1804ce790(local_3e8);
        if ((((-1 < *(char *)(lVar7 + 6)) || (*(char *)(lVar7 + 7) != '\0')) ||
            (0x5f < ((&DAT_18056ee40)[*(byte *)(lVar7 + 5)] & (*(byte *)(lVar7 + 4) | 0x7f)))) ||
           ((local_330 & 0x40000) == 0)) {
          if (*(char *)(lVar7 + 4) < '\0') {
            FUN_1804ce680(local_3e8);
          }
          if (local_368 < local_360) goto LAB_1804d12c7;
          FUN_1804cb050(local_3e8,lVar7);
        }
        local_320 = local_320 - 1;
      } while (local_31c < local_320);
    }
  } while ((local_298 != 0) &&
          (*(uint *)(param_2 + 0xc) <= *(uint *)(*(longlong *)(param_1 + 0x78) + 0xc)));
  if (local_368 < local_360) {
LAB_1804d12c7:
                    /* WARNING: Subroutine does not return */
    FUN_1804ccb30(local_3e8);
  }
  if (0 < local_2e4._4_4_) {
    local_320 = (uint)*(ushort *)(*(longlong *)(local_2d8 + 0x30) + 4);
    FUN_1804ce680(local_3e8);
    FUN_1804c8d60(local_3e8);
    local_320 = local_31c;
  }
  FUN_1804d1b50(local_3e8);
  if (local_2d0 == 0) {
    bVar2 = *(byte *)(local_358 + 0x40006);
    if (-1 < (char)bVar2) {
      local_340 = local_340 | 1 << (bVar2 & 0x1f);
      if (((local_33c >> (bVar2 & 0x1f) & 1) != 0) || ((*(byte *)(local_358 + 0x40004) & 0x20) != 0)
         ) {
        *(undefined1 *)(local_358 + 0x40006) = 0xff;
      }
      if (bVar2 != 2) {
        local_368[-1] = (bVar2 & 7) * '\b' - 0x3e;
        local_368[-5] = 0xfe;
        local_368[-4] = 0;
        local_368[-3] = 0;
        local_368[-2] = 0x8b;
        local_368[-3] = bVar2 >> 1 & 4 | 0x48;
        local_368 = local_368 + -3;
      }
    }
    *(uint *)(local_368 + -4) = (uint)*(ushort *)(local_2d8 + 0x68);
    local_368 = local_368 + -4;
    FUN_1804d0600(local_3e8,0xc70000fe,0,local_350 + -0x230);
    if (local_328 < 9) {
      *(undefined2 *)(local_2d8 + 0x66) = 0;
    }
    else {
      uVar11 = local_328 - 5U & 0xfffffffc;
      iVar10 = uVar11 * 4;
      *(short *)(local_2d8 + 0x66) = (short)iVar10;
      if (iVar10 != 0) {
        FUN_1804cfda0(local_3e8,0x838100,0x80204,uVar11 * -4);
      }
    }
    *(undefined1 *)(local_2d8 + 0x73) = *(undefined1 *)(*(longlong *)(local_2d8 + 0x40) + 0xb);
    uVar11 = local_334;
  }
  else {
    FUN_1804c95d0(local_3e8);
    uVar11 = local_334;
  }
  for (; uVar11 != 0; uVar11 = uVar11 & ~(1 << (uVar8 & 0x1f))) {
    uVar5 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    uVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar8 == 0; uVar8 = uVar8 - 1) {
      }
    }
    uVar8 = uVar8 ^ 0x18;
    uVar4 = auStack_288[uVar8];
    uVar9 = (ulonglong)uVar4;
    bVar2 = *(byte *)(local_358 + 4 + uVar9 * 8);
    if (((bVar2 & 0x20) != 0) &&
       (*(byte *)(local_358 + 4 + uVar9 * 8) = bVar2 & 0xdf,
       *(char *)(local_358 + 7 + uVar9 * 8) != '\0')) {
      *(undefined2 *)(local_350 + 0xbc) = 0x1400;
      *(ushort *)(local_350 + 0xb8) = uVar4;
      *(short *)(local_350 + 0xba) = (short)local_308;
      uVar4 = FUN_1804a5f70(local_350);
      *(char *)(*(longlong *)(local_350 + 0x20) + 6 + (ulonglong)uVar4 * 8) = (char)uVar8;
      *(undefined1 *)(*(longlong *)(local_350 + 0x20) + 7 + (ulonglong)uVar4 * 8) = 0;
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x78);
  if (*(uint *)(lVar7 + 0xc) < *(uint *)(param_2 + 0xc)) {
    FUN_180495ae0(param_1 + -0x2e8,lVar7);
    *(undefined8 *)(param_1 + 0x78) = 0;
    uVar6 = FUN_1804953f0(*(undefined8 *)(param_1 + 0x80),param_2);
    *(undefined8 *)(param_1 + 0x78) = uVar6;
    local_298 = 0;
    goto LAB_1804d0d40;
  }
  FUN_180540530(*(longlong *)(lVar7 + 0x20) + (ulonglong)local_318 * 8,
                *(longlong *)(param_2 + 0x20) + (ulonglong)local_318 * 8,
                (ulonglong)(*(uint *)(param_2 + 0xc) - local_318) << 3);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xc);
  local_320 = 0x8001;
  FUN_1804ce790(local_3e8);
  if (local_340 != 0xffffffe7) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(local_350,0x1f);
  }
  *(byte **)(param_2 + 0x58) = local_368;
  iVar10 = 0;
  if (local_2b0 != 0) {
    iVar10 = (int)local_2b0 - (int)local_368;
  }
  *(int *)(param_2 + 0x60) = iVar10;
  if (local_2e8 != 0) goto LAB_1804d11f5;
  uVar4 = *(ushort *)(param_2 + 0x6a);
  uVar3 = *(ushort *)(local_2d8 + 0x66);
  pbVar12 = local_290;
  if (uVar3 != 0) {
    *local_290 = 0x48;
    if ((uint)uVar3 == (int)(char)(byte)uVar3) {
      local_290[1] = 0x83;
      local_290[2] = 0xc4;
      local_290[3] = (byte)uVar3;
      pbVar12 = local_290 + 4;
    }
    else {
      local_290[1] = 0x81;
      local_290[2] = 0xc4;
      *(uint *)(local_290 + 3) = (uint)uVar3;
      pbVar12 = local_290 + 7;
    }
  }
  iVar10 = (int)pbVar12;
  if (uVar4 == 0) {
    iVar13 = -0x7fffafb8;
    if (pbVar12 + -0x180005043 == (byte *)(longlong)(iVar10 + 0x7fffafbd)) goto LAB_1804d11c7;
    pbVar12[0] = 0xff;
    pbVar12[1] = 0x25;
    lVar14 = 6;
    *(int *)(pbVar12 + 2) = (*(int *)(local_350 + 0x6a0) - iVar10) + -0x16;
  }
  else {
    iVar13 = (int)*(undefined8 *)
                   (*(longlong *)(*(longlong *)(local_350 + 0x180) + (ulonglong)uVar4 * 8) + 0x58);
LAB_1804d11c7:
    *pbVar12 = 0xe9;
    *(int *)(pbVar12 + 1) = (iVar13 - iVar10) + -5;
  }
  while (pbVar12 + lVar14 < local_2c0) {
    local_2c0 = local_2c0 + -1;
    *local_2c0 = 0x90;
  }
LAB_1804d11f5:
  *(int *)(param_2 + 0x54) = (int)local_2c0 - (int)local_368;
  lVar14 = *(longlong *)(local_2d8 + 0x30);
  uVar11 = *(ushort *)(local_2d8 + 10) - 1;
  while (uVar11 != 0) {
    uVar9 = (ulonglong)uVar11;
    uVar11 = uVar11 - 1;
    *(short *)(lVar14 + 6 + uVar9 * 0xc) =
         ((short)local_2b8 - (short)local_368) - *(short *)(lVar14 + 6 + (ulonglong)uVar11 * 0xc);
  }
  *(undefined2 *)(lVar14 + 6) = 0;
  _guard_check_icall(*(undefined8 *)(param_2 + 0x58),local_2b8);
  return;
}



/* ===== 1804d12f0 FUN_1804d12f0 ===== */

undefined8 FUN_1804d12f0(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_2 + 0x1f < *(uint *)(param_1 + 200)) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 200) - 1;
  if (param_2 < uVar3) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    do {
      uVar4 = (ulonglong)uVar3;
      bVar1 = *(byte *)(lVar2 + 5 + uVar4 * 8);
      if (bVar1 == param_3) {
        return 0;
      }
      if ((param_4 & 1) != 0) {
        if (bVar1 == 0x3b) {
          return 0;
        }
        if (bVar1 == 0x62) {
          return 0;
        }
      }
      if ((param_4 & 2) != 0) {
        if (*(ushort *)(lVar2 + uVar4 * 8) == param_2) {
          return 0;
        }
        if (*(ushort *)(lVar2 + 2 + uVar4 * 8) == param_2) {
          return 0;
        }
      }
      uVar3 = uVar3 - 1;
    } while (param_2 < uVar3);
  }
  return 1;
}



/* ===== 1804d1370 FUN_1804d1370 ===== */

void FUN_1804d1370(longlong param_1,undefined1 param_2,undefined2 param_3,undefined2 param_4)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  *(undefined2 *)(lVar1 + 0xbc) = 0x1400;
  *(undefined2 *)(lVar1 + 0xb8) = param_3;
  *(undefined2 *)(lVar1 + 0xba) = param_4;
  uVar2 = FUN_1804a5f70(*(undefined8 *)(param_1 + 0x98));
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x20) + 6 + (ulonglong)uVar2 * 8) =
       param_2;
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x20) + 7 + (ulonglong)uVar2 * 8) =
       0;
  return;
}



/* ===== 1804d13e0 FUN_1804d13e0 ===== */

uint FUN_1804d13e0(longlong param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x90) + 6 + (ulonglong)param_2 * 8);
  uVar2 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    uVar2 = FUN_1804d1420(param_1);
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & ~(1 << (uVar2 & 0x1f));
  return uVar2;
}



