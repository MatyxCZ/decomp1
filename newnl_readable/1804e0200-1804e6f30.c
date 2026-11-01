/* ===== 1804e0200 FUN_1804e0200 ===== */

void FUN_1804e0200(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ushort *puVar14;
  uint uVar15;
  byte *pbVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint *puVar19;
  ulonglong uVar20;
  undefined2 uVar21;
  undefined4 local_res18 [2];
  uint local_res20 [2];
  longlong local_58 [3];
  
  uVar20 = 0;
  plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) + 0x188);
  plVar5[2] = *(longlong *)(param_1 + 0x80);
  iVar2 = (int)param_2[2];
  do {
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0xa0) + uVar20 * 4);
    if (uVar10 == 0) {
LAB_1804e0843:
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xb);
    }
    uVar15 = uVar10 & 0x1f000000;
    uVar21 = (undefined2)uVar10;
    iVar12 = (int)uVar20;
    if (uVar15 == 0xa000000) {
      lVar13 = FUN_1804dc0c0(param_1,uVar10,*param_2 + uVar20 * 8);
      lVar17 = *plVar5;
      uVar1 = *(ushort *)(lVar13 + 10);
      uVar18 = (ulonglong)uVar1;
      uVar10 = *(uint *)(lVar17 + uVar18 * 0x18);
      if ((byte)(uVar10 >> 0x1c) == 8) {
        do {
          uVar18 = (ulonglong)*(ushort *)(lVar17 + uVar18 * 0x18);
          uVar10 = *(uint *)(lVar17 + uVar18 * 0x18);
        } while ((byte)(uVar10 >> 0x1c) == 8);
      }
      uVar15 = uVar10 >> 0x1c;
      puVar19 = (uint *)(lVar17 + uVar18 * 0x18);
      if (uVar15 == 5) {
        uVar18 = (ulonglong)uVar10 & 0xffff;
      }
      uVar10 = *(uint *)(lVar17 + uVar18 * 0x18);
      if (uVar10 < 0x10000000) {
        uVar3 = *(uint *)(lVar17 + 4 + uVar18 * 0x18);
        if ((uVar10 >> 0x1a & 1) == 0) {
          uVar6 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> uVar6 == 0; uVar6 = uVar6 - 1) {
            }
          }
          if (3 < uVar6) goto LAB_1804e0368;
          iVar11 = (uVar10 >> 0x17 & 1 | uVar6 * 2) + 0xf;
        }
        else if (uVar3 == 8) {
          iVar11 = 0xe;
        }
        else {
          if (uVar3 != 4) goto LAB_1804e0368;
          iVar11 = 0xd;
        }
      }
      else if ((byte)(uVar10 >> 0x1c) == 2) {
        iVar11 = 5;
        if (*(int *)(lVar17 + 4 + uVar18 * 0x18) == 8) {
          iVar11 = 9;
        }
      }
      else if ((uVar10 & 0xf4000000) == 0x34000000) {
        iVar4 = *(int *)(lVar17 + 4 + uVar18 * 0x18);
        if (iVar4 == 0x10) {
          iVar11 = 0xe;
        }
        else {
          iVar11 = 0xd;
          if (iVar4 != 8) goto LAB_1804e0368;
        }
      }
      else {
LAB_1804e0368:
        iVar11 = 10;
      }
      uVar8 = (ushort)iVar11;
      if (uVar15 == 2) {
        *(undefined2 *)(param_1 + 0xb8) = uVar21;
        *(undefined2 *)(param_1 + 0xba) = 0x15;
        *(ushort *)(param_1 + 0xbc) = uVar8 | 0x4500;
        uVar10 = FUN_1804d6ae0(param_1);
        uVar15 = *puVar19;
        if ((uVar15 & 0xf0800000) == 0x20800000) {
          do {
            uVar15 = *puVar19;
            puVar19 = (uint *)(*plVar5 + (ulonglong)(ushort)uVar15 * 0x18);
          } while ((byte)((uint)*(undefined4 *)(*plVar5 + (ulonglong)(ushort)uVar15 * 0x18) >> 0x1c)
                   == 8);
          iVar11 = FUN_1804de010(plVar5,puVar19);
LAB_1804e04c9:
          uVar15 = *puVar19;
        }
        if ((byte)(uVar15 >> 0x1c) == 5) {
          puVar19 = (uint *)(*plVar5 + ((ulonglong)uVar15 & 0xffff) * 0x18);
        }
        if (*puVar19 < 0x10000000) {
          if (iVar11 != 10) {
            *(short *)(param_1 + 0xb8) = (short)uVar10;
            *(ushort *)(param_1 + 0xbc) = (ushort)iVar11 | 0x4600;
            *(undefined2 *)(param_1 + 0xba) = 0;
            goto LAB_1804e0511;
          }
          uVar10 = 0;
        }
      }
      else if (iVar11 - 0x15U < 2) {
        *(undefined2 *)(param_1 + 0xb8) = uVar21;
        *(ushort *)(param_1 + 0xbc) = uVar8 | 0x4500;
        *(undefined2 *)(param_1 + 0xba) = 0x17;
LAB_1804e0511:
        uVar10 = FUN_1804d6ae0(param_1);
      }
      else if (iVar11 - 0x13U < 2) {
        *(undefined2 *)(param_1 + 0xb8) = uVar21;
        *(ushort *)(param_1 + 0xbc) = uVar8 | 0x4500;
        *(undefined2 *)(param_1 + 0xba) = 0x16;
        uVar10 = FUN_1804d6ae0(param_1);
        if ((byte)(*puVar19 >> 0x1c) == 5) {
          puVar19 = (uint *)(*plVar5 + (ulonglong)(*puVar19 & 0xffff) * 0x18);
        }
      }
      else {
        if (uVar15 != 6) {
          uVar9 = FUN_1804a6410(param_1,0x10);
          *(undefined2 *)(param_1 + 0xbc) = 0x2909;
          *(undefined2 *)(param_1 + 0xb8) = uVar21;
          *(undefined2 *)(param_1 + 0xba) = uVar9;
          uVar10 = FUN_1804d6ae0(param_1);
          goto LAB_1804e04c9;
        }
        if (iVar12 == 0) {
          uVar18 = 0;
        }
        else {
          lVar17 = (local_58[0] - lVar17) / 6 + (local_58[0] - lVar17 >> 0x3f);
          uVar18 = (lVar17 >> 2) - (lVar17 >> 0x3f);
        }
        *(undefined4 *)(param_1 + 0xba) = 0x45090015;
        *(undefined2 *)(param_1 + 0xb8) = uVar21;
        uVar10 = FUN_1804d6ae0(param_1);
        uVar15 = FUN_1804ab7b0(plVar5,uVar1 | 0x20030000);
        puVar19 = (uint *)(*plVar5 + (ulonglong)uVar15 * 0x18);
        if (iVar12 != 0) {
          local_58[0] = *plVar5 + (uVar18 & 0xffffffff) * 0x18;
        }
      }
    }
    else if (uVar15 == 0) {
      if (3 < iVar2 - 4U) goto LAB_1804e0843;
      uVar10 = FUN_1804a66d0(param_1,0x19,0);
      puVar19 = (uint *)(*plVar5 + 0x1c8);
    }
    else {
      lVar17 = *plVar5;
      if ((uVar10 >> 0x18 & 0x1f) - 0xf < 5) {
        puVar19 = (uint *)(lVar17 + 0xd8);
      }
      else if (uVar15 == 0x4000000) {
        lVar13 = FUN_1804dc0c0(param_1,*(undefined4 *)
                                        (*(longlong *)(param_1 + 0xa0) + (ulonglong)(1 - iVar12) * 4
                                        ),*param_2 + (ulonglong)(1 - iVar12) * 8);
        lVar17 = *plVar5;
        uVar18 = (ulonglong)*(ushort *)(lVar13 + 10);
        uVar10 = *(uint *)(lVar17 + uVar18 * 0x18);
        bVar7 = (byte)(uVar10 >> 0x18);
        while (bVar7 >> 4 == 8) {
          uVar18 = (ulonglong)*(ushort *)(lVar17 + uVar18 * 0x18);
          uVar10 = *(uint *)(lVar17 + uVar18 * 0x18);
          bVar7 = (byte)(uVar10 >> 0x18);
        }
        puVar19 = (uint *)(lVar17 + uVar18 * 0x18);
        if (uVar10 >> 0x1c == 5) {
          uVar18 = *(ulonglong *)(*param_2 + uVar20 * 8) & 0x7fffffffffff;
          puVar14 = (ushort *)FUN_1804ab270(plVar5,puVar19,uVar18,local_res18,0);
          if ((puVar14 == (ushort *)0x0) || ((byte)((uint)*(undefined4 *)puVar14 >> 0x1c) != 0xb)) {
                    /* WARNING: Subroutine does not return */
            FUN_1804954a0(param_1,0xb);
          }
          uVar9 = FUN_1804a62e0(param_1,uVar18,4);
          *(undefined2 *)(param_1 + 0xbc) = 0x884;
          *(undefined2 *)(param_1 + 0xb8) = uVar21;
          *(undefined2 *)(param_1 + 0xba) = uVar9;
          FUN_1804d6ae0(param_1);
          puVar19 = (uint *)(*plVar5 + (ulonglong)*puVar14 * 0x18);
          uVar10 = FUN_1804a6370(param_1,local_res18[0]);
        }
        else {
          if (uVar10 >> 0x1c != 2) goto LAB_1804e0843;
          uVar9 = FUN_1804a6410(param_1,0x18);
          *(undefined2 *)(param_1 + 0xbc) = 0x2909;
          *(undefined2 *)(param_1 + 0xb8) = uVar21;
          *(undefined2 *)(param_1 + 0xba) = uVar9;
          uVar10 = FUN_1804d6ae0(param_1);
        }
      }
      else if (uVar15 == 0xe000000) {
        puVar19 = (uint *)(lVar17 + 0x180);
      }
      else {
        uVar10 = 0;
        puVar19 = (uint *)(lVar17 + 0x1c8);
      }
    }
    local_58[uVar20] = (longlong)puVar19;
    local_res20[uVar20] = uVar10;
    uVar20 = (ulonglong)(iVar12 + 1U);
    if (1 < iVar12 + 1U) {
      if (((((iVar2 != 5) && (iVar2 != 8)) &&
           ((iVar12 = FUN_1804dca20(param_1,local_res20,local_58,iVar2), iVar12 != 0 ||
            (iVar12 = FUN_1804dcfb0(param_1,local_res20,local_58,iVar2), iVar12 != 0)))) ||
          (iVar12 = FUN_1804dcdd0(param_1,local_res20,local_58,plVar5,param_2), iVar12 != 0)) &&
         ((((**(int **)(param_1 + 0xa0) = iVar12, *(int *)(param_1 + 0x174) == 2 &&
            (lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20),
            (*(byte *)(lVar17 + -8) & 7) == 2)) && (-1 < *(char *)(param_1 + 0xb6))) &&
          (pbVar16 = (byte *)(*(longlong *)(lVar17 + -0x18) + -4), *pbVar16 < 0xc)))) {
        *(byte **)(param_1 + -0x200) = pbVar16;
        *(undefined4 *)(param_1 + 0x174) = 1;
      }
      return;
    }
  } while( true );
}



/* ===== 1804e0860 FUN_1804e0860 ===== */

void FUN_1804e0860(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  plVar1 = *(longlong **)(param_1 + -0x160);
  lVar5 = FUN_1804dc0c0(param_1,**(undefined4 **)(param_1 + 0xa0),*param_2);
  uVar8 = (ulonglong)*(ushort *)(lVar5 + 10);
  if (*(ushort *)(lVar5 + 10) == 0x18) {
    uVar3 = FUN_1804ddb40(param_1,lVar5,**(undefined4 **)(param_1 + 0xa0));
    uVar8 = (ulonglong)uVar3;
    iVar4 = 0x13;
  }
  else {
    iVar4 = FUN_1804dd410(param_1,param_2,lVar5);
    if (iVar4 != 0) {
      return;
    }
    iVar4 = 9;
  }
  lVar5 = *plVar1;
  uVar3 = *(uint *)(lVar5 + uVar8 * 0x18);
  bVar2 = (byte)(uVar3 >> 0x18);
  uVar6 = uVar8;
  while (bVar2 >> 4 == 8) {
    uVar6 = (ulonglong)*(ushort *)(lVar5 + uVar6 * 0x18);
    uVar3 = *(uint *)(lVar5 + uVar6 * 0x18);
    bVar2 = (byte)(uVar3 >> 0x18);
  }
  uVar6 = (ulonglong)(uVar3 & 0xffff);
  if ((byte)(uVar3 >> 0x1c) != 2) {
    uVar6 = uVar8;
  }
  puVar7 = (undefined8 *)FUN_1804ab8d0(plVar1,uVar6,iVar4);
  if (puVar7 == (undefined8 *)0x0) {
    if (iVar4 == 0x13) {
      FUN_1804dc290(param_1,param_2,uVar8);
      return;
    }
  }
  else if ((int)((longlong)*puVar7 >> 0x2f) == -9) {
    FUN_1804df400(param_1,param_2,puVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804954a0(param_1,0xb);
}



/* ===== 1804e0970 FUN_1804e0970 ===== */

void FUN_1804e0970(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong *puVar16;
  undefined8 uVar17;
  int iVar18;
  uint *puVar19;
  longlong lVar20;
  ushort uVar21;
  ulonglong uVar22;
  bool bVar23;
  uint local_res8;
  uint local_res18 [2];
  longlong local_res20;
  
  local_res20 = 0x10;
  local_res8 = **(uint **)(param_1 + 0xa0);
  lVar13 = FUN_1804dc0c0(param_1,local_res8,*param_2);
  plVar2 = *(longlong **)(param_1 + -0x160);
  uVar22 = (ulonglong)*(ushort *)(lVar13 + 10);
  lVar3 = *plVar2;
  uVar9 = *(uint *)(lVar3 + uVar22 * 0x18);
  bVar6 = (byte)(uVar9 >> 0x18);
  while (bVar6 >> 4 == 8) {
    uVar22 = (ulonglong)*(ushort *)(lVar3 + uVar22 * 0x18);
    uVar9 = *(uint *)(lVar3 + uVar22 * 0x18);
    bVar6 = (byte)(uVar9 >> 0x18);
  }
  puVar15 = (uint *)(lVar3 + uVar22 * 0x18);
  lVar20 = 0x10;
  puVar19 = puVar15;
  if ((byte)(uVar9 >> 0x1c) == 2) {
    if ((uVar9 & 0xf0800000) == 0x20800000) {
      do {
        uVar9 = *puVar19;
        puVar19 = (uint *)(lVar3 + (ulonglong)(ushort)uVar9 * 0x18);
      } while ((byte)((uint)*(undefined4 *)(lVar3 + (ulonglong)(ushort)uVar9 * 0x18) >> 0x1c) == 8);
    }
    uVar9 = puVar15[1];
    uVar7 = 0x4509;
    *(short *)(param_1 + 0xb8) = (short)local_res8;
    if (uVar9 != 8) {
      uVar7 = 0x4505;
    }
    *(undefined2 *)(param_1 + 0xba) = 0x15;
    lVar20 = 0;
    *(undefined2 *)(param_1 + 0xbc) = uVar7;
    local_res20 = 0;
    local_res8 = FUN_1804d6ae0(param_1);
    if ((*(uint *)(param_1 + 0xa8) & 0x10000) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      uVar14 = (ulonglong)(local_res8 & 0xffff);
      uVar21 = *(ushort *)(lVar3 + 2 + uVar14 * 8);
      uVar22 = (ulonglong)uVar21;
      if ((uVar21 < 0x8000) &&
         ((cVar1 = *(char *)(lVar3 + 5 + uVar14 * 8), cVar1 == ')' || ((byte)(cVar1 - 0x35U) < 2))))
      {
        if (*(char *)(lVar3 + 5 + uVar22 * 8) == '\x1d') {
          lVar20 = *(longlong *)(lVar3 + 8 + uVar22 * 8);
        }
        else {
          lVar20 = (longlong)*(int *)(lVar3 + uVar22 * 8);
        }
        local_res8 = (uint)*(ushort *)(lVar3 + uVar14 * 8);
        local_res20 = -lVar20;
        if (cVar1 != '6') {
          local_res20 = lVar20;
        }
        lVar20 = local_res20;
      }
    }
  }
  do {
    uVar9 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 4);
    puVar15 = puVar19;
    if ((uVar9 >> 0x18 & 0x1f) - 0xe < 6) {
      uVar9 = FUN_1804e3bc0(param_1,uVar9);
      if ((byte)(*puVar19 >> 0x1d) == 1) goto LAB_1804e0d3d;
    }
    else {
      uVar7 = (undefined2)uVar9;
      if ((uVar9 & 0x1f000000) == 0xa000000) {
        lVar3 = *plVar2;
        uVar22 = (ulonglong)*(ushort *)((*(ulonglong *)(*param_2 + 8) & 0x7fffffffffff) + 10);
        uVar11 = *(uint *)(lVar3 + uVar22 * 0x18);
        bVar6 = (byte)(uVar11 >> 0x18);
        while (bVar6 >> 4 == 8) {
          uVar22 = (ulonglong)*(ushort *)(lVar3 + uVar22 * 0x18);
          uVar11 = *(uint *)(lVar3 + uVar22 * 0x18);
          bVar6 = (byte)(uVar11 >> 0x18);
        }
        uVar14 = (ulonglong)(uVar11 & 0xffff);
        if ((byte)(uVar11 >> 0x1c) != 5) {
          uVar14 = uVar22;
        }
        uVar11 = *(uint *)(lVar3 + uVar14 * 0x18);
        if (uVar11 < 0x10000000) {
          uVar10 = *(uint *)(lVar3 + 4 + uVar14 * 0x18);
          if ((uVar11 >> 0x1a & 1) == 0) {
            uVar5 = 0x1f;
            if (uVar10 != 0) {
              for (; uVar10 >> uVar5 == 0; uVar5 = uVar5 - 1) {
              }
            }
            if (uVar5 < 4) {
              uVar11 = uVar11 >> 0x17 & 1 | uVar5 * 2;
              uVar21 = (short)uVar11 + 0xf;
            }
            else {
LAB_1804e0c61:
              uVar21 = 10;
              uVar11 = 0xfffffffb;
            }
          }
          else if (uVar10 == 8) {
            uVar21 = 0xe;
            uVar11 = 0xffffffff;
          }
          else {
            bVar23 = uVar10 == 4;
LAB_1804e0bea:
            if (!bVar23) goto LAB_1804e0c61;
            uVar21 = 0xd;
            uVar11 = 0xfffffffe;
          }
        }
        else if ((byte)(uVar11 >> 0x1c) == 2) {
          if (*(int *)(lVar3 + 4 + uVar14 * 0x18) == 8) {
            uVar21 = 9;
            uVar11 = 0xfffffffa;
          }
          else {
            uVar21 = 5;
            uVar11 = 0xfffffff6;
          }
        }
        else {
          if ((uVar11 & 0xf4000000) != 0x34000000) goto LAB_1804e0c61;
          iVar18 = *(int *)(lVar3 + 4 + uVar14 * 0x18);
          if (iVar18 != 0x10) {
            bVar23 = iVar18 == 8;
            goto LAB_1804e0bea;
          }
          uVar21 = 0xe;
          uVar11 = 0xffffffff;
        }
        if (((byte)(*puVar19 >> 0x1d) != 1) || (7 < uVar11)) goto LAB_1804e1034;
        iVar18 = *(int *)(lVar3 + 4 + uVar22 * 0x18);
        if (iVar18 == 8) {
          *(undefined2 *)(param_1 + 0xba) = 0x17;
          uVar21 = uVar21 | 0x4500;
        }
        else if (iVar18 == 4) {
          *(undefined2 *)(param_1 + 0xba) = 0x16;
          uVar21 = uVar21 | 0x4500;
        }
        else {
          uVar8 = FUN_1804a6410(param_1,0x10);
          *(undefined2 *)(param_1 + 0xbc) = 0x2909;
          *(undefined2 *)(param_1 + 0xb8) = uVar7;
          *(undefined2 *)(param_1 + 0xba) = uVar8;
          uVar9 = FUN_1804d6ae0(param_1);
          *(undefined2 *)(param_1 + 0xba) = 0;
          uVar21 = uVar21 | 0x4600;
        }
        *(ushort *)(param_1 + 0xbc) = uVar21;
        *(short *)(param_1 + 0xb8) = (short)uVar9;
        uVar9 = FUN_1804d6ae0(param_1);
        if ((*(uint *)(lVar3 + 4 + uVar22 * 0x18) < 8) &&
           ((*(uint *)(lVar3 + uVar22 * 0x18) & 0x800000) == 0)) {
          *(undefined4 *)(param_1 + 0xba) = 0x5b150ab3;
          *(short *)(param_1 + 0xb8) = (short)uVar9;
          uVar9 = FUN_1804d6ae0(param_1);
        }
LAB_1804e0d3d:
        if ((*puVar19 & 0x4000000) != 0) {
          uVar7 = FUN_1804a6410(param_1,1);
          *(undefined2 *)(param_1 + 0xbc) = 0x2115;
          *(short *)(param_1 + 0xb8) = (short)uVar9;
          *(undefined2 *)(param_1 + 0xba) = uVar7;
          uVar9 = FUN_1804d6ae0(param_1);
        }
        uVar7 = (undefined2)uVar9;
        uVar11 = *puVar19;
        uVar10 = FUN_1804abd40(plVar2,uVar11 & 0xffff);
        if ((*(uint *)(param_1 + 0xa8) & 0x10000) != 0) {
          lVar3 = *(longlong *)(param_1 + 0x20);
          uVar14 = (ulonglong)(uVar9 & 0xffff);
          uVar21 = *(ushort *)(lVar3 + 2 + uVar14 * 8);
          uVar22 = (ulonglong)uVar21;
          if ((uVar21 < 0x8000) &&
             ((cVar1 = *(char *)(lVar3 + 5 + uVar14 * 8), cVar1 == ')' ||
              ((byte)(cVar1 - 0x35U) < 2)))) {
            if (*(char *)(lVar3 + 5 + uVar22 * 8) == '\x1d') {
              lVar13 = *(longlong *)(lVar3 + 8 + uVar22 * 8);
            }
            else {
              lVar13 = (longlong)*(int *)(lVar3 + uVar22 * 8);
            }
            uVar7 = *(undefined2 *)(lVar3 + uVar14 * 8);
            lVar13 = lVar13 * (ulonglong)uVar10;
            lVar3 = -lVar13;
            if (cVar1 != '6') {
              lVar3 = lVar13;
            }
            local_res20 = local_res20 + lVar3;
          }
        }
        uVar8 = FUN_1804a6410(param_1,(ulonglong)uVar10);
        *(undefined2 *)(param_1 + 0xbc) = 0x2b15;
        *(undefined2 *)(param_1 + 0xb8) = uVar7;
        *(undefined2 *)(param_1 + 0xba) = uVar8;
        uVar9 = FUN_1804d6ae0(param_1);
        *(undefined2 *)(param_1 + 0xbc) = 0x2909;
        *(short *)(param_1 + 0xb8) = (short)uVar9;
        *(short *)(param_1 + 0xba) = (short)local_res8;
        local_res8 = FUN_1804d6ae0(param_1);
LAB_1804e1029:
        uVar10 = uVar11 & 0xffff;
        if (uVar10 != 0) {
          if (local_res20 != 0) {
            uVar7 = FUN_1804a6410(param_1,local_res20);
            *(undefined2 *)(param_1 + 0xbc) = 0x2909;
            *(short *)(param_1 + 0xb8) = (short)local_res8;
            *(undefined2 *)(param_1 + 0xba) = uVar7;
            local_res8 = FUN_1804d6ae0(param_1);
          }
          puVar15 = (uint *)(*plVar2 + (ulonglong)uVar10 * 0x18);
          uVar9 = *(uint *)(*plVar2 + (ulonglong)uVar10 * 0x18);
          if ((uVar9 & 0xf0800000) == 0x20800000) {
            *(undefined4 *)(param_1 + 0xba) = 0x46090000;
            *(short *)(param_1 + 0xb8) = (short)local_res8;
            local_res8 = FUN_1804d6ae0(param_1);
            uVar11 = *puVar15;
            puVar15 = (uint *)(*plVar2 + (ulonglong)(uVar11 & 0xffff) * 0x18);
            uVar9 = *(uint *)(*plVar2 + (ulonglong)(uVar11 & 0xffff) * 0x18);
          }
          bVar6 = (byte)(uVar9 >> 0x18);
          while (bVar6 >> 4 == 8) {
            uVar9 = *puVar15;
            puVar15 = (uint *)(*plVar2 + (ulonglong)(ushort)uVar9 * 0x18);
            bVar6 = (byte)((uint)*(undefined4 *)(*plVar2 + (ulonglong)(ushort)uVar9 * 0x18) >> 0x18)
            ;
          }
          if ((int)param_2[2] == 0) {
            puVar4 = *(undefined4 **)(param_1 + 0xa0);
            uVar12 = FUN_1804df460(param_1,puVar15,uVar11 & 0xffff,local_res8);
            *puVar4 = uVar12;
            return;
          }
          param_2[1] = 0;
          *(undefined1 *)(param_1 + 0xb5) = 1;
          FUN_1804de8e0(param_1,puVar15,local_res8,
                        *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 8),*param_2 + 0x10);
          return;
        }
      }
      else {
        if ((uVar9 & 0x1f000000) != 0x4000000) goto LAB_1804e103c;
        uVar22 = *(ulonglong *)(*param_2 + 8) & 0x7fffffffffff;
        if ((lVar13 != 0) && (*(short *)(lVar13 + 10) == 0x18)) {
          uVar11 = FUN_1804ddb40(param_1,lVar13,local_res8);
          lVar3 = *plVar2;
          uVar14 = (ulonglong)uVar11;
          bVar6 = (byte)((uint)*(undefined4 *)(lVar3 + uVar14 * 0x18) >> 0x18);
          while (puVar19 = (uint *)(lVar3 + uVar14 * 0x18), bVar6 >> 4 == 8) {
            uVar14 = (ulonglong)(ushort)*puVar19;
            bVar6 = (byte)((uint)*(undefined4 *)(lVar3 + uVar14 * 0x18) >> 0x18);
          }
        }
        if ((byte)(*puVar19 >> 0x1c) == 1) {
          puVar15 = (uint *)FUN_1804ab270(plVar2,puVar19,uVar22,local_res18,0);
          if (puVar15 != (uint *)0x0) {
            uVar14 = (ulonglong)local_res18[0];
            uVar8 = FUN_1804a62e0(param_1,uVar22,4);
            *(undefined2 *)(param_1 + 0xbc) = 0x884;
            *(undefined2 *)(param_1 + 0xb8) = uVar7;
            *(undefined2 *)(param_1 + 0xba) = uVar8;
            FUN_1804d6ae0(param_1);
            uVar11 = *puVar15;
            if (uVar11 >> 0x1c == 0xb) {
              if ((puVar15[1] < 0x80000000) ||
                 ((*(uint *)(*plVar2 + (ulonglong)(uVar11 & 0xffff) * 0x18) & 0x800000) == 0)) {
                uVar12 = FUN_1804a6370(param_1);
              }
              else {
                uVar12 = FUN_1804a6540(param_1,(double)puVar15[1]);
              }
              **(undefined4 **)(param_1 + 0xa0) = uVar12;
              return;
            }
            local_res20 = local_res20 + uVar14;
            if ((lVar13 == 0) || (*(short *)(lVar13 + 10) != 0x18)) {
              if (uVar11 >> 0x1c == 10) {
                if (local_res20 != 0) {
                  uVar7 = FUN_1804a6410(param_1,local_res20);
                  *(undefined2 *)(param_1 + 0xbc) = 0x2909;
                  *(short *)(param_1 + 0xb8) = (short)local_res8;
                  *(undefined2 *)(param_1 + 0xba) = uVar7;
                  local_res8 = FUN_1804d6ae0(param_1);
                }
                FUN_1804df0e0(param_1,param_2,local_res8,*puVar15);
                return;
              }
              goto LAB_1804e1029;
            }
          }
        }
        else if (((*puVar19 & 0xf4000000) == 0x34000000) && (*(int *)(uVar22 + 0x14) == 2)) {
          if (*(char *)(uVar22 + 0x18) == 'r') {
            if (*(char *)(uVar22 + 0x19) == 'e') goto LAB_1804e0fc6;
          }
          else if ((*(char *)(uVar22 + 0x18) == 'i') && (*(char *)(uVar22 + 0x19) == 'm')) {
LAB_1804e0fc6:
            uVar8 = FUN_1804a62e0(param_1,uVar22,4);
            *(undefined2 *)(param_1 + 0xbc) = 0x884;
            *(undefined2 *)(param_1 + 0xb8) = uVar7;
            *(undefined2 *)(param_1 + 0xba) = uVar8;
            FUN_1804d6ae0(param_1);
            if (*(char *)(uVar22 + 0x18) == 'i') {
              local_res20 = lVar20 + (ulonglong)(puVar19[1] >> 1);
            }
            uVar11 = *puVar19;
            goto LAB_1804e1029;
          }
        }
      }
LAB_1804e1034:
      puVar15 = puVar19;
    }
LAB_1804e103c:
    if ((byte)(*puVar15 >> 0x1c) != 2) {
LAB_1804e1276:
      puVar16 = (ulonglong *)
                FUN_1804ab8d0(plVar2,((longlong)puVar15 - *plVar2) / 0x18,(int)param_2[2] != 0);
      if (puVar16 != (ulonglong *)0x0) {
        iVar18 = (int)((longlong)*puVar16 >> 0x2f);
        if (iVar18 == -9) {
          FUN_1804df400(param_1,param_2,puVar16);
          return;
        }
        if ((((int)param_2[2] == 0) && (iVar18 == -0xc)) &&
           ((*(uint *)(*(longlong *)(param_1 + 0xa0) + 4) & 0x1f000000) == 0x4000000)) {
          uVar17 = FUN_1804926a0(*(undefined8 *)(param_1 + 0x80),*puVar16 & 0x7fffffffffff,
                                 *param_2 + 8);
          puVar4 = *(undefined4 **)(param_1 + 0xa0);
          uVar12 = FUN_1804bf4d0(param_1,uVar17);
          *puVar4 = uVar12;
          if (**(int **)(param_1 + 0xa0) != 0) {
            uVar7 = FUN_1804a62e0(param_1,*(ulonglong *)(*param_2 + 8) & 0x7fffffffffff,4);
            *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(*(longlong *)(param_1 + 0xa0) + 4);
            *(undefined2 *)(param_1 + 0xbc) = 0x884;
            *(undefined2 *)(param_1 + 0xba) = uVar7;
            FUN_1804d6ae0(param_1);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xb);
    }
    puVar19 = puVar15;
    do {
      uVar11 = *puVar19;
      puVar19 = (uint *)(*plVar2 + (ulonglong)(ushort)uVar11 * 0x18);
      uVar11 = *(uint *)(*plVar2 + (ulonglong)(ushort)uVar11 * 0x18) >> 0x1c;
    } while (uVar11 == 8);
    if ((uVar11 != 1) || (puVar15 = puVar19, (uVar9 & 0x1f000000) != 0x4000000)) goto LAB_1804e1276;
    lVar13 = 0;
    lVar20 = local_res20;
  } while( true );
}



/* ===== 1804e13a0 FUN_1804e13a0 ===== */

void FUN_1804e13a0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *local_res8;
  
  if (((**(uint **)(param_1 + 0xa0) & 0x1f000000) == 0xc000000) &&
     (((*(uint **)(param_1 + 0xa0))[1] & 0x1f000000) == 0x4000000)) {
    uVar11 = *(ulonglong *)*param_2 & 0x7fffffffffff;
    if (*(char *)(uVar11 + 10) == '\x02') {
      uVar10 = ((ulonglong *)*param_2)[1] & 0x7fffffffffff;
      plVar2 = *(longlong **)(param_1 + -0x160);
      iVar7 = FUN_1804ab370(plVar2,&local_res8,uVar10,0x1840);
      puVar9 = (ulonglong *)FUN_180492860(*(undefined8 *)(uVar11 + 0x38),uVar10);
      param_2[1] = (ulonglong)*(uint *)(param_2 + 2);
      if (((iVar7 == 0) || (puVar9 == (ulonglong *)0x0)) || (*puVar9 == 0xffffffffffffffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_1804954a0(param_1,0x15);
      }
      uVar6 = FUN_1804a62e0(param_1,uVar10,4);
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(*(longlong *)(param_1 + 0xa0) + 4);
      *(undefined2 *)(param_1 + 0xbc) = 0x884;
      *(undefined2 *)(param_1 + 0xba) = uVar6;
      FUN_1804d6ae0(param_1);
      uVar1 = *local_res8;
      if (uVar1 >> 0x1c == 0xb) {
        if ((local_res8[1] < 0x80000000) ||
           ((*(uint *)(*plVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18) & 0x800000) == 0)) {
          uVar8 = FUN_1804a6370(param_1);
        }
        else {
          uVar8 = FUN_1804a6540(param_1,(double)local_res8[1]);
        }
      }
      else {
        if (uVar1 >> 0x1c == 0xc) {
          uVar11 = *(ulonglong *)((*puVar9 & 0x7fffffffffff) + 0x10);
          lVar3 = *plVar2;
          uVar10 = (ulonglong)(uVar1 & 0xffff);
          bVar5 = (byte)((uint)*(undefined4 *)(lVar3 + uVar10 * 0x18) >> 0x18);
          while (local_res8 = (uint *)(lVar3 + uVar10 * 0x18), bVar5 >> 4 == 8) {
            uVar10 = (ulonglong)(ushort)*local_res8;
            bVar5 = (byte)((uint)*(undefined4 *)(lVar3 + uVar10 * 0x18) >> 0x18);
          }
          if (uVar11 == (uVar11 & 0xffffffff)) {
            uVar8 = FUN_1804a66d0(param_1,0x19);
          }
          else {
            uVar8 = FUN_1804a6410(param_1,uVar11);
          }
          if ((int)param_2[2] == 0) {
            *(undefined1 *)(param_1 + 0xb5) = 1;
            FUN_1804de8e0(param_1,local_res8,uVar8,
                          *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 8),*param_2 + 0x10);
            return;
          }
          puVar4 = *(undefined4 **)(param_1 + 0xa0);
          uVar8 = FUN_1804df460(param_1,local_res8,uVar1 & 0xffff,uVar8);
          *puVar4 = uVar8;
          return;
        }
        uVar8 = FUN_1804a62e0(param_1,*puVar9 & 0x7fffffffffff,10);
      }
      **(undefined4 **)(param_1 + 0xa0) = uVar8;
    }
  }
  return;
}



/* ===== 1804e1600 FUN_1804e1600 ===== */

void FUN_1804e1600(longlong param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  
  if ((**(uint **)(param_1 + 0xa0) & 0x1f000000) != 0x4000000) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0xb);
  }
  uVar1 = FUN_1804a62e0(param_1,*(ulonglong *)*param_2 & 0x7fffffffffff,4);
  *(undefined2 *)(param_1 + 0xb8) = **(undefined2 **)(param_1 + 0xa0);
  *(undefined2 *)(param_1 + 0xbc) = 0x884;
  *(undefined2 *)(param_1 + 0xba) = uVar1;
  FUN_1804d6ae0(param_1);
  *(undefined4 *)(param_1 + 0x174) = 4;
  **(undefined4 **)(param_1 + 0xa0) = 0x2007ffd;
  return;
}



/* ===== 1804e16a0 FUN_1804e16a0 ===== */

void FUN_1804e16a0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar3 = *(int **)(param_1 + 0xa0);
  if (((*piVar3 != 0) && (uVar1 = piVar3[1], uVar1 != 0)) &&
     ((iVar2 = piVar3[2], iVar2 != 0 || ((uVar1 & 0x1f000000) == 0x4000000)))) {
    plVar4 = *(longlong **)(param_1 + -0x160);
    uVar7 = FUN_1804de8e0(param_1,*plVar4 + 0x1c8,0,*piVar3,*param_2);
    uVar8 = FUN_1804de8e0(param_1,*plVar4 + 0x1e0,0,uVar1,*param_2 + 8);
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(*(longlong *)(param_1 + 0xa0) + 4);
      *(undefined4 *)(param_1 + 0xba) = 0x45130000;
      uVar5 = FUN_1804d6ae0(param_1);
      uVar6 = FUN_1804a6370(param_1,1);
      *(undefined2 *)(param_1 + 0xbc) = 0x2913;
      *(undefined2 *)(param_1 + 0xb8) = uVar5;
      *(undefined2 *)(param_1 + 0xba) = uVar6;
      uVar9 = FUN_1804d6ae0(param_1);
    }
    else {
      uVar9 = FUN_1804de8e0(param_1,*plVar4 + 0xd8,0,iVar2,*param_2 + 0x10);
    }
    param_2[1] = 0;
    FUN_1804ddbb0(param_1,uVar7,uVar8,uVar9,0);
  }
  return;
}



/* ===== 1804e1810 FUN_1804e1810 ===== */

void FUN_1804e1810(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0xa0);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0x17);
  }
  iVar2 = FUN_1804a5e80(param_1,0x65);
  *piVar1 = iVar2;
  return;
}



/* ===== 1804e1850 FUN_1804e1850 ===== */

void FUN_1804e1850(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong *plVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte extraout_var;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 local_res8 [8];
  undefined4 uVar13;
  
  piVar4 = *(int **)(param_1 + 0xa0);
  iVar1 = *piVar4;
  if ((iVar1 != 0) && (iVar2 = piVar4[1], iVar2 != 0)) {
    plVar5 = *(longlong **)(param_1 + -0x160);
    iVar3 = piVar4[2];
    iVar12 = 1;
    if ((int)((longlong)*(ulonglong *)*param_2 >> 0x2f) == -0xb) {
      lVar11 = *plVar5;
      uVar10 = (ulonglong)*(ushort *)((*(ulonglong *)*param_2 & 0x7fffffffffff) + 10);
      bVar6 = (byte)((uint)*(undefined4 *)(lVar11 + uVar10 * 0x18) >> 0x18);
      while (bVar6 >> 4 == 8) {
        uVar10 = (ulonglong)*(ushort *)(lVar11 + uVar10 * 0x18);
        bVar6 = (byte)((uint)*(undefined4 *)(lVar11 + uVar10 * 0x18) >> 0x18);
      }
      if (bVar6 >> 4 == 2) {
        do {
          uVar10 = (ulonglong)*(ushort *)(lVar11 + uVar10 * 0x18);
        } while ((byte)((uint)*(undefined4 *)(lVar11 + uVar10 * 0x18) >> 0x1c) == 8);
      }
      FUN_1804ab410(plVar5,(uVar10 * 0x18) / 0x18,local_res8);
      iVar12 = 1 << (extraout_var & 0xf);
    }
    uVar7 = FUN_1804de8e0(param_1,*plVar5 + 0x1c8,0,iVar1,*param_2);
    lVar11 = *param_2 + 8;
    uVar8 = FUN_1804de8e0(param_1,*plVar5 + 0xd8,0,iVar2,lVar11);
    uVar13 = (undefined4)((ulonglong)lVar11 >> 0x20);
    if (iVar3 == 0) {
      uVar9 = FUN_1804a6370(param_1,0);
    }
    else {
      lVar11 = *param_2 + 0x10;
      uVar9 = FUN_1804de8e0(param_1,*plVar5 + 0xd8,0,iVar3,lVar11);
      uVar13 = (undefined4)((ulonglong)lVar11 >> 0x20);
    }
    param_2[1] = 0;
    FUN_1804dee00(param_1,uVar7,uVar8,uVar9,CONCAT44(uVar13,iVar12));
  }
  return;
}



/* ===== 1804e1a30 FUN_1804e1a30 ===== */

void FUN_1804e1a30(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_1804dc0c0(param_1,**(undefined4 **)(param_1 + 0xa0),*param_2);
  iVar1 = (*(undefined4 **)(param_1 + 0xa0))[1];
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0xb);
  }
  FUN_1804df040(param_1,**(undefined4 **)(param_1 + 0xa0),iVar1,*param_2 + 8);
  return;
}



/* ===== 1804e1a90 FUN_1804e1a90 ===== */

void FUN_1804e1a90(longlong param_1,longlong *param_2)

{
  uint uVar1;
  
  FUN_1804dc160(param_1,**(undefined4 **)(param_1 + 0xa0),*param_2);
  uVar1 = (*(undefined4 **)(param_1 + 0xa0))[1];
  if ((uVar1 & 0x1f000000) == 0xa000000) {
    FUN_1804dc160(param_1,uVar1,*param_2 + 8);
    *(undefined4 *)(param_1 + 0x174) = 4;
    **(undefined4 **)(param_1 + 0xa0) = 0x2007ffd;
    return;
  }
  **(undefined4 **)(param_1 + 0xa0) = 0x1007ffe;
  return;
}



/* ===== 1804e1b10 FUN_1804e1b10 ===== */

void FUN_1804e1b10(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1804dc160(param_1,**(undefined4 **)(param_1 + 0xa0),*param_2);
  FUN_1804dc290(param_1,param_2,uVar1);
  return;
}



/* ===== 1804e1b50 FUN_1804e1b50 ===== */

void FUN_1804e1b50(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  
  iVar1 = **(int **)(param_1 + 0xa0);
  if (iVar1 != 0) {
    uVar2 = (*(int **)(param_1 + 0xa0))[1];
    plVar3 = *(longlong **)(param_1 + -0x160);
    if ((uVar2 & 0x1f000000) == 0) {
      uVar7 = FUN_1804de8e0(param_1,*plVar3 + 0x1f8,0,iVar1,*param_2);
      uVar6 = (undefined2)uVar7;
      uVar5 = FUN_1804a5e80(param_1,0x62,uVar7);
    }
    else {
      uVar5 = FUN_1804de8e0(param_1,*plVar3 + 0xd8,0,uVar2,*param_2 + 8);
      uVar6 = FUN_1804de8e0(param_1,*plVar3 + 0x1e0,0,iVar1,*param_2);
    }
    *(undefined2 *)(param_1 + 0xb8) = uVar6;
    puVar4 = *(undefined4 **)(param_1 + 0xa0);
    *(undefined2 *)(param_1 + 0xbc) = 0x5004;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    uVar7 = FUN_1804d6ae0(param_1);
    *puVar4 = uVar7;
  }
  return;
}



/* ===== 1804e1c50 FUN_1804e1c50 ===== */

void FUN_1804e1c50(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  if ((**(uint **)(param_1 + 0xa0) & 0x1f000000) != 0xa000000) {
    *(ulonglong *)(param_1 + 0xc20) = *(ulonglong *)(param_1 + 0x90) | 0xfffb800000000000;
                    /* WARNING: Subroutine does not return */
    FUN_1804954f0(param_1,0xf);
  }
  uVar4 = FUN_1804dc160(param_1,**(uint **)(param_1 + 0xa0),*param_2);
  uVar2 = FUN_1804a6370(param_1,uVar4);
  uVar3 = FUN_1804a6370(param_1,0x18);
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  *(undefined2 *)(param_1 + 0xbc) = 0x548a;
  *(undefined2 *)(param_1 + 0xb8) = uVar3;
  uVar4 = FUN_1804d6ae0(param_1);
  *puVar1 = uVar4;
  return;
}



/* ===== 1804e1d00 FUN_1804e1d00 ===== */

void FUN_1804e1d00(longlong param_1,longlong *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  uVar2 = FUN_1804dc160(param_1,**(undefined4 **)(param_1 + 0xa0),*param_2);
  if ((int)param_2[2] == 0xc5) {
    puVar3 = (uint *)FUN_1804aba40(*(undefined8 *)(param_1 + -0x160),uVar2);
    if ((*puVar3 & 0xd0100000) == 0x10100000) {
LAB_1804e1e06:
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xb);
    }
  }
  else if ((int)param_2[2] == 199) {
    if ((*(uint *)(*(longlong *)(param_1 + 0xa0) + 4) & 0x1f000000) != 0x4000000)
    goto LAB_1804e1e06;
    uVar1 = FUN_1804a62e0(param_1,*(ulonglong *)(*param_2 + 8) & 0x7fffffffffff,4);
    *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(*(longlong *)(param_1 + 0xa0) + 4);
    *(undefined2 *)(param_1 + 0xbc) = 0x884;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    FUN_1804d6ae0(param_1);
    param_2[1] = 3;
  }
  *(undefined4 *)(param_1 + 0x174) = 5;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 8) = 0x7fff;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 4) = 0x7fff;
  **(undefined4 **)(param_1 + 0xa0) = 0x7fff;
  return;
}



/* ===== 1804e1e20 FUN_1804e1e20 ===== */

undefined8 FUN_1804e1e20(longlong param_1,ushort *param_2,ushort *param_3)

{
  char *pcVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  longlong lVar10;
  ushort uVar11;
  
  if (param_2 == param_3) {
    return 2;
  }
  uVar7 = param_2[1];
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar11 = param_3[1];
  lVar10 = (ulonglong)uVar7 * 8;
  if (*(char *)(lVar10 + 5 + lVar3) == '\x1e') {
    uVar7 = *(ushort *)(lVar10 + lVar3);
    lVar10 = (ulonglong)uVar7 * 8;
  }
  lVar6 = (ulonglong)uVar11 * 8;
  if (*(char *)(lVar6 + 5 + lVar3) == '\x1e') {
    uVar11 = *(ushort *)(lVar6 + lVar3);
    lVar6 = (ulonglong)uVar11 * 8;
  }
  pcVar1 = (char *)((longlong)param_2 + 5);
  if ((byte)(*pcVar1 - 0x38U) < 2) {
    param_2 = (ushort *)(lVar3 + (ulonglong)*param_2 * 8);
  }
  if ((byte)(*(char *)((longlong)param_3 + 5) - 0x38U) < 2) {
    param_3 = (ushort *)(lVar3 + (ulonglong)*param_3 * 8);
  }
  if (uVar7 == uVar11) {
    if (*param_2 == *param_3) {
      return 2;
    }
    uVar5 = FUN_1804e2050(param_1);
    return uVar5;
  }
  if ((0x7fff < uVar7) || (0x7fff < uVar11)) {
    if (*pcVar1 == '8') {
      iVar9 = 0;
      uVar8 = uVar7;
      if ((*(char *)(lVar10 + 5 + lVar3) == ')') &&
         (uVar2 = *(ushort *)(lVar10 + 2 + lVar3), uVar2 < 0x8000)) {
        uVar8 = *(ushort *)(lVar10 + lVar3);
        iVar9 = *(int *)(lVar3 + (ulonglong)uVar2 * 8);
        if ((uVar8 == uVar11) && (iVar9 != 0)) {
          return 0;
        }
      }
      iVar4 = 0;
      if ((*(char *)(lVar6 + 5 + lVar3) == ')') &&
         (uVar2 = *(ushort *)(lVar6 + 2 + lVar3), uVar2 < 0x8000)) {
        uVar11 = *(ushort *)(lVar6 + lVar3);
        iVar4 = *(int *)(lVar3 + (ulonglong)uVar2 * 8);
        if ((uVar7 == uVar11) && (iVar4 != 0)) {
          return 0;
        }
      }
      if ((uVar8 != uVar11) || (iVar9 == iVar4)) {
LAB_1804e1f61:
        if (*param_2 == *param_3) {
          return 1;
        }
        uVar5 = FUN_1804e2050(param_1);
        return uVar5;
      }
    }
    else if (((*(byte *)(lVar6 + 4 + lVar3) ^ *(byte *)(lVar10 + 4 + lVar3)) & 0x1f) == 0)
    goto LAB_1804e1f61;
  }
  return 0;
}



/* ===== 1804e1fc0 FUN_1804e1fc0 ===== */

ushort * FUN_1804e1fc0(longlong param_1,ushort *param_2)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  
  cVar1 = *(char *)((longlong)param_2 + 5);
  while( true ) {
    if (cVar1 != ')') {
      puVar3 = (ushort *)0x0;
      if (*(char *)((longlong)param_2 + 5) == 'S') {
        puVar3 = param_2;
      }
      return puVar3;
    }
    if ((0x7fff < *param_2) &&
       (puVar3 = (ushort *)
                 FUN_1804e1fc0(param_1,*(longlong *)(param_1 + 0x20) + (ulonglong)*param_2 * 8),
       puVar3 != (ushort *)0x0)) break;
    uVar2 = param_2[1];
    if (uVar2 < 0x8000) {
      return (ushort *)0x0;
    }
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x20) + 5 + (ulonglong)uVar2 * 8);
    param_2 = (ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 8);
  }
  return puVar3;
}



/* ===== 1804e2050 FUN_1804e2050 ===== */

undefined8 FUN_1804e2050(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar3 = (ulonglong)param_2;
  uVar4 = lVar1 + uVar3 * 8;
  uVar5 = lVar1 + (ulonglong)param_3 * 8;
  bVar2 = 1 < (byte)(*(char *)(lVar1 + 5 + uVar3 * 8) + 0xafU);
  if ((byte)(*(char *)(uVar5 + 5) + 0xafU) < 2) {
    if (!bVar2) {
      return 0;
    }
    bVar2 = true;
  }
  else {
    if (bVar2) {
      return 1;
    }
    bVar2 = false;
    uVar4 = uVar5;
  }
  uVar5 = (ulonglong)param_3;
  if (!bVar2) {
    uVar5 = uVar3;
  }
  uVar3 = lVar1 + 8 + uVar5 * 8;
  while( true ) {
    if (uVar4 <= uVar3) {
      return 0;
    }
    if (((uint)*(ushort *)(uVar3 + 2) == (uint)uVar5) && ((byte)(*(char *)(uVar3 + 5) + 0xb6U) < 4))
    break;
    uVar3 = uVar3 + 8;
  }
  return 1;
}



/* ===== 1804e20e0 FUN_1804e20e0 ===== */

char FUN_1804e20e0(longlong param_1,ushort *param_2,longlong param_3,ushort *param_4)

{
  byte bVar1;
  longlong lVar2;
  ushort *puVar3;
  ushort *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ushort *puVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar8 = (ushort *)(lVar2 + (ulonglong)*param_4 * 8);
  if ((param_2 == puVar8) && (((*(byte *)(param_3 + 4) ^ (byte)param_4[2]) & 0x1f) == 0)) {
    return '\x02';
  }
  lVar7 = 0;
  lVar6 = 0;
  if ((*(char *)((longlong)param_2 + 5) == ')') && (param_2[1] < 0x8000)) {
    uVar5 = (ulonglong)param_2[1];
    param_2 = (ushort *)(lVar2 + (ulonglong)*param_2 * 8);
    if (*(char *)(lVar2 + 5 + uVar5 * 8) == '\x1d') {
      lVar7 = *(longlong *)(lVar2 + 8 + uVar5 * 8);
    }
    else {
      lVar7 = (longlong)*(int *)(lVar2 + uVar5 * 8);
    }
  }
  if ((*(char *)((longlong)puVar8 + 5) == ')') && (puVar8[1] < 0x8000)) {
    uVar5 = (ulonglong)puVar8[1];
    puVar8 = (ushort *)(lVar2 + (ulonglong)*puVar8 * 8);
    if (*(char *)(lVar2 + 5 + uVar5 * 8) == '\x1d') {
      lVar6 = *(longlong *)(lVar2 + 8 + uVar5 * 8);
    }
    else {
      lVar6 = (longlong)*(int *)(lVar2 + uVar5 * 8);
    }
  }
  if ((*(char *)((longlong)param_2 + 5) == '\x19') && (*(char *)((longlong)puVar8 + 5) == '\x19')) {
    lVar6 = lVar6 + (*(longlong *)(puVar8 + 4) - *(longlong *)(param_2 + 4));
  }
  else if (param_2 != puVar8) {
    bVar1 = *(byte *)(param_3 + 4);
    if (((bVar1 ^ (byte)param_4[2]) & 0x1f) != 0) {
      if (7 < (bVar1 & 0x1f) - 0xf) {
        return '\0';
      }
      if (((byte)param_4[2] - 0xf ^ bVar1 - 0xf) != 1) {
        return '\0';
      }
    }
    puVar3 = (ushort *)FUN_1804e1fc0(param_1,param_2);
    puVar4 = (ushort *)FUN_1804e1fc0(param_1,puVar8);
    if (puVar3 == puVar4) {
      return '\x01';
    }
    if (puVar4 != (ushort *)0x0) {
      if (puVar3 != (ushort *)0x0) {
        return '\0';
      }
      puVar3 = puVar4;
    }
    if (puVar4 == (ushort *)0x0) {
      param_2 = puVar8;
    }
    puVar8 = puVar3;
    do {
      puVar4 = puVar8;
      puVar8 = puVar4 + 4;
      if (param_2 <= puVar8) {
        return '\0';
      }
    } while (((uint)puVar4[5] != (uint)((longlong)puVar3 - lVar2 >> 3)) ||
            (3 < (byte)(*(char *)((longlong)puVar4 + 0xd) + 0xb6U)));
    return '\x01';
  }
  if (lVar7 == lVar6) {
    if ((&DAT_18056eea8)[*(byte *)(param_3 + 4)] == (&DAT_18056eea8)[(byte)param_4[2]]) {
      return ((byte)((*(byte *)(param_3 + 4) & 0x1f) - 0xd) < 2 ==
             (byte)(((byte)param_4[2] & 0x1f) - 0xd) < 2) + '\x01';
    }
  }
  else if (((longlong)(lVar7 + (ulonglong)(byte)(&DAT_18056eea8)[*(byte *)(param_3 + 4)]) <= lVar6)
          || ((longlong)(lVar6 + (ulonglong)(byte)(&DAT_18056eea8)[(byte)param_4[2]]) <= lVar7)) {
    return '\0';
  }
  return '\x01';
}



/* ===== 1804e22f0 FUN_1804e22f0 ===== */

undefined8 FUN_1804e22f0(longlong param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar1 = *(ushort *)(param_1 + 0x256);
  uVar7 = (ulonglong)param_3;
  if (param_2 < uVar1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      uVar4 = (ulonglong)uVar1;
      if (*(short *)(lVar2 + 2 + uVar4 * 8) == 0x22) {
        uVar1 = *(ushort *)(lVar2 + uVar4 * 8);
        if (param_3 == uVar1) {
          return 0;
        }
        uVar8 = lVar2 + (ulonglong)uVar1 * 8;
        uVar6 = lVar2 + uVar7 * 8;
        bVar3 = (byte)(*(char *)(lVar2 + 5 + uVar7 * 8) + 0xafU) < 2;
        if ((byte)(*(char *)(uVar8 + 5) + 0xafU) < 2) {
          if (bVar3) goto LAB_1804e2392;
          bVar3 = true;
        }
        else {
          if (!bVar3) {
            return 0;
          }
          bVar3 = false;
          uVar6 = uVar8;
        }
        uVar8 = (ulonglong)(uint)uVar1;
        if (!bVar3) {
          uVar8 = uVar7;
        }
        for (uVar5 = lVar2 + 8 + uVar8 * 8; uVar5 < uVar6; uVar5 = uVar5 + 8) {
          if (((uint)*(ushort *)(uVar5 + 2) == (uint)uVar8) &&
             ((byte)(*(char *)(uVar5 + 5) + 0xb6U) < 4)) {
            return 0;
          }
        }
      }
LAB_1804e2392:
      uVar1 = *(ushort *)(lVar2 + 6 + uVar4 * 8);
    } while (param_2 < uVar1);
  }
  return 1;
}



/* ===== 1804e23b0 FUN_1804e23b0 ===== */

ulonglong FUN_1804e23b0(longlong param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  ushort *puVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ushort *puVar14;
  uint uVar15;
  ushort *local_res8 [2];
  ulonglong local_res18;
  
  lVar6 = *(longlong *)(param_1 + 0x20);
  uVar10 = (ulonglong)param_2;
  local_res18 = (ulonglong)param_2 * 8;
  local_res8[0] = (ushort *)(local_res18 + lVar6);
  uVar3 = *(ushort *)(param_1 + 0x1a2 + (ulonglong)*(byte *)(param_1 + 0xbd) * 2);
  while( true ) {
    uVar13 = (ulonglong)uVar3;
    if (uVar3 <= param_2) break;
    iVar8 = FUN_1804e1e20(param_1,local_res8[0],
                          lVar6 + (ulonglong)*(ushort *)(lVar6 + uVar13 * 8) * 8);
    uVar15 = (uint)uVar3;
    if (iVar8 == 1) goto LAB_1804e246a;
    if (iVar8 == 2) goto LAB_1804e24b2;
    uVar3 = *(ushort *)(lVar6 + 6 + uVar13 * 8);
  }
  cVar1 = *(char *)((longlong)local_res8[0] + 5);
  if ((byte)(cVar1 - 0x38U) < 2) {
    uVar10 = (ulonglong)*local_res8[0];
  }
  uVar4 = *(ushort *)(lVar6 + uVar10 * 8);
  uVar10 = (ulonglong)uVar4;
  cVar2 = *(char *)(lVar6 + 5 + uVar10 * 8);
  uVar15 = param_2;
  if (cVar2 == 'Q') {
    puVar14 = (ushort *)((local_res18 | 2) + lVar6);
  }
  else if ((cVar2 != 'R') || (puVar14 = local_res8[0] + 1, 0x7fff < *puVar14)) goto LAB_1804e246a;
  iVar8 = FUN_1804e22f0(param_1,uVar4,uVar4);
  puVar7 = local_res8[0];
  if (iVar8 == 0) {
LAB_1804e246a:
    uVar3 = *(ushort *)(param_1 + 0x192 + (ulonglong)*(byte *)(param_1 + 0xbd) * 2);
    if (uVar15 < uVar3) {
      do {
        uVar10 = (ulonglong)uVar3;
        if (*(ushort *)(*(longlong *)(param_1 + 0x20) + uVar10 * 8) == param_2) {
          return uVar10;
        }
        uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 6 + uVar10 * 8);
      } while (uVar15 < uVar3);
    }
    return 0;
  }
  if (cVar1 == '8') {
    for (uVar5 = *(ushort *)(param_1 + 0x208); uVar4 < uVar5;
        uVar5 = *(ushort *)(lVar6 + 6 + (ulonglong)uVar5 * 8)) {
      if ((*(byte *)(lVar6 + 4 + (ulonglong)*(ushort *)(lVar6 + 2 + (ulonglong)uVar5 * 8) * 8) &
          0x1f) == 0xe) goto LAB_1804e246a;
    }
  }
  else {
    lVar12 = (ulonglong)*puVar14 * 8;
    if (*(char *)(lVar12 + 5 + lVar6) == '\x1e') {
      lVar12 = (ulonglong)*(ushort *)(lVar12 + lVar6) * 8;
    }
    if (((*(byte *)(lVar12 + 4 + lVar6) & 0x1f) == 0xe) && (uVar4 < *(ushort *)(param_1 + 0x208)))
    goto LAB_1804e246a;
  }
  if ((uint)uVar4 < (uint)uVar3) {
    do {
      iVar8 = FUN_1804e1e20(param_1,puVar7,lVar6 + (ulonglong)*(ushort *)(lVar6 + uVar13 * 8) * 8);
      if (iVar8 == 1) goto LAB_1804e246a;
      if (iVar8 == 2) {
LAB_1804e24b2:
        return (ulonglong)*(ushort *)(lVar6 + 2 + uVar13 * 8);
      }
      uVar3 = *(ushort *)(lVar6 + 6 + uVar13 * 8);
      uVar13 = (ulonglong)uVar3;
    } while (uVar4 < uVar3);
  }
  if (*(char *)(lVar6 + 5 + uVar10 * 8) != 'Q') {
    lVar12 = (ulonglong)*puVar14 * 8;
    if (*(char *)(lVar12 + 5 + lVar6) == '\x1e') {
      lVar12 = (ulonglong)*(ushort *)(lVar12 + lVar6) * 8;
    }
    FUN_1804a6890(*(undefined8 *)(param_1 + 0x80),local_res8,lVar12 + lVar6);
    puVar9 = (ulonglong *)
             FUN_1804926a0(*(undefined8 *)(param_1 + 0x80),
                           *(undefined8 *)
                            (*(longlong *)(param_1 + 0x20) + 8 +
                            (ulonglong)*(ushort *)(lVar6 + uVar10 * 8) * 8),local_res8);
    uVar11 = (uint)((longlong)*puVar9 >> 0x2f);
    if (0xfffffffc < uVar11) {
      return (ulonglong)(~uVar11 * 0xffffff + 0x7fff);
    }
    if (uVar11 < 0xfffffff2) {
      uVar10 = FUN_1804a6540(param_1);
      return uVar10;
    }
    if (uVar11 != 0xfffffff4) {
      if (uVar11 == 0xfffffffb) {
        uVar10 = FUN_1804a62e0(param_1,*puVar9 & 0x7fffffffffff,4);
        return uVar10;
      }
      goto LAB_1804e246a;
    }
  }
  return 0x7fff;
}



/* ===== 1804e2660 FUN_1804e2660 ===== */

undefined8 FUN_1804e2660(longlong param_1)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  ushort *puVar10;
  
  uVar3 = *(ushort *)(param_1 + 0xb8);
  puVar10 = (ushort *)(param_1 + ((ulonglong)*(byte *)(param_1 + 0xbd) + 0xc9) * 2);
  uVar4 = *puVar10;
  if (uVar3 < uVar4) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    sVar5 = *(short *)(param_1 + 0xba);
    do {
      uVar2 = (ulonglong)uVar4 * 8;
      puVar1 = (undefined2 *)(lVar6 + uVar2);
      iVar7 = FUN_1804e1e20(param_1,lVar6 + (ulonglong)uVar3 * 8,
                            lVar6 + (ulonglong)*(ushort *)(lVar6 + uVar2) * 8);
      if (iVar7 == 1) {
        if (puVar1[1] != sVar5) break;
      }
      else if (iVar7 == 2) {
        if (puVar1[1] == sVar5) {
          return 4;
        }
        if (*(ushort *)(param_1 + 0x1b4) < uVar4) {
          puVar8 = (undefined2 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xc) - 1) * 8);
          goto joined_r0x0001804e272e;
        }
        break;
      }
      uVar4 = puVar1[3];
      puVar10 = (ushort *)((uVar2 | 6) + lVar6);
    } while (uVar3 < uVar4);
  }
LAB_1804e275c:
  uVar9 = FUN_1804a5f70(param_1);
  return uVar9;
joined_r0x0001804e272e:
  if (puVar8 <= puVar1) goto LAB_1804e2745;
  if ((*(char *)(puVar8 + 2) < '\0') || (*(char *)((longlong)puVar8 + 5) == 'I'))
  goto LAB_1804e275c;
  puVar8 = puVar8 + -4;
  goto joined_r0x0001804e272e;
LAB_1804e2745:
  *puVar10 = puVar1[3];
  *puVar1 = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xc000000;
  goto LAB_1804e275c;
}



/* ===== 1804e2780 FUN_1804e2780 ===== */

undefined8 FUN_1804e2780(longlong param_1)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  longlong lVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  ushort *puVar12;
  
  uVar3 = *(ushort *)(param_1 + 0xb8);
  puVar12 = (ushort *)(param_1 + 0x22c);
  uVar4 = *puVar12;
  if (uVar3 < uVar4) {
    lVar8 = *(longlong *)(param_1 + 0x20);
    sVar5 = *(short *)(lVar8 + 2 + (ulonglong)uVar3 * 8);
    do {
      uVar2 = (ulonglong)uVar4 * 8;
      puVar1 = (undefined2 *)(uVar2 + lVar8);
      if (sVar5 == *(short *)(lVar8 + 2 + (ulonglong)*(ushort *)(uVar2 + lVar8) * 8)) {
        sVar6 = *(short *)(lVar8 + (ulonglong)*(ushort *)(uVar2 + lVar8) * 8);
        sVar7 = *(short *)(lVar8 + (ulonglong)uVar3 * 8);
        if (sVar7 == sVar6) {
LAB_1804e2812:
          if ((puVar1[1] == *(short *)(param_1 + 0xba)) && (5 < (ushort)(sVar5 - 0xeU))) {
            return 4;
          }
          if (*(ushort *)(param_1 + 0x1b4) < uVar4) {
            puVar10 = (undefined2 *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0xc) - 1) * 8);
            goto joined_r0x0001804e287b;
          }
          break;
        }
        if (((ushort)(sVar5 - 5U) < 6) && (iVar9 = FUN_1804e2050(param_1,sVar7,sVar6), iVar9 != 1))
        {
          if (iVar9 == 2) goto LAB_1804e2812;
        }
        else if (puVar1[1] != *(short *)(param_1 + 0xba)) break;
      }
      uVar4 = puVar1[3];
      puVar12 = (ushort *)((uVar2 | 6) + lVar8);
    } while (uVar3 < uVar4);
  }
LAB_1804e28b2:
  uVar11 = FUN_1804a5f70(param_1);
  return uVar11;
joined_r0x0001804e287b:
  if (puVar10 <= puVar1) goto LAB_1804e289b;
  if ((*(char *)(puVar10 + 2) < '\0') ||
     ((*(char *)((longlong)puVar10 + 5) == 'E' && (puVar10[1] == sVar5)))) goto LAB_1804e28b2;
  puVar10 = puVar10 + -4;
  goto joined_r0x0001804e287b;
LAB_1804e289b:
  *puVar12 = puVar1[3];
  *puVar1 = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xc000000;
  goto LAB_1804e28b2;
}



/* ===== 1804e28d0 FUN_1804e28d0 ===== */

undefined8 FUN_1804e28d0(longlong param_1)

{
  short *psVar1;
  undefined2 *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  uint uVar11;
  ushort *puVar12;
  ulonglong uVar13;
  
  uVar4 = *(ushort *)(param_1 + 0xb8);
  puVar12 = (ushort *)(param_1 + 0x22a);
  uVar5 = *puVar12;
  if (uVar4 < uVar5) {
    lVar10 = *(longlong *)(param_1 + 0x20);
    sVar6 = *(short *)(param_1 + 0xba);
    psVar1 = (short *)(lVar10 + (ulonglong)uVar4 * 8);
    do {
      uVar13 = (ulonglong)*(ushort *)(lVar10 + (ulonglong)uVar5 * 8);
      puVar2 = (undefined2 *)(lVar10 + (ulonglong)uVar5 * 8);
      if (*psVar1 == *(short *)(lVar10 + uVar13 * 8)) {
        if (psVar1[1] == *(short *)(lVar10 + 2 + uVar13 * 8)) {
          if (puVar2[1] == sVar6) {
            return 4;
          }
          if ((uint)*(ushort *)(param_1 + 0x1b4) < (uint)uVar5) {
            puVar9 = (undefined2 *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0xc) - 1) * 8);
            goto joined_r0x0001804e29cd;
          }
          break;
        }
      }
      else if (*(char *)(lVar10 + 2 + uVar13 * 8) == (char)psVar1[1]) {
        if (*(char *)((longlong)psVar1 + 5) == *(char *)(lVar10 + 5 + uVar13 * 8)) {
          if (puVar2[1] != sVar6) break;
        }
        else if ((*(byte *)(psVar1 + 2) & 0x1f) == 0x15) {
          *(byte *)(psVar1 + 2) = *(byte *)(psVar1 + 2) - 0xc;
        }
        else {
          bVar3 = *(byte *)(lVar10 + 4 + uVar13 * 8);
          if ((bVar3 & 0x1f) == 0x15) {
            *(byte *)(lVar10 + 4 + uVar13 * 8) = bVar3 - 0xc;
          }
        }
        lVar10 = *(longlong *)(param_1 + 0x20);
      }
      uVar5 = puVar2[3];
      puVar12 = puVar2 + 3;
    } while (uVar4 < uVar5);
  }
LAB_1804e2a68:
  uVar8 = FUN_1804a5f70(param_1);
  return uVar8;
joined_r0x0001804e29cd:
  if (puVar9 <= puVar2) goto LAB_1804e29e3;
  if (*(char *)(puVar9 + 2) < '\0') goto LAB_1804e2a68;
  puVar9 = puVar9 + -4;
  goto joined_r0x0001804e29cd;
LAB_1804e29e3:
  *puVar12 = puVar2[3];
  uVar11 = uVar5 + 1;
  *(undefined4 *)(puVar2 + 1) = 0xc000000;
  *puVar2 = 0;
  puVar2[3] = 0;
  if (((uVar11 < *(uint *)(param_1 + 0xc)) && (*(char *)((longlong)puVar2 + 0xd) == 'Y')) &&
     (puVar2[4] == uVar4)) {
    lVar10 = *(longlong *)(param_1 + 0x20);
    puVar12 = (ushort *)(param_1 + 0x244);
    uVar4 = *puVar12;
    while (lVar7 = (ulonglong)uVar4 * 8, uVar11 < uVar4) {
      puVar12 = (ushort *)(lVar7 + lVar10 + 6);
      uVar4 = *(ushort *)(lVar7 + lVar10 + 6);
    }
    *puVar12 = *(ushort *)(lVar7 + 6 + lVar10);
    *(undefined2 *)(lVar7 + lVar10) = 0;
    *(undefined2 *)(lVar7 + 6 + lVar10) = 0;
    *(undefined4 *)(lVar7 + 2 + lVar10) = 0xc000000;
  }
  goto LAB_1804e2a68;
}



/* ===== 1804e2a80 FUN_1804e2a80 ===== */

undefined8 FUN_1804e2a80(longlong param_1)

{
  undefined2 *puVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  longlong lVar5;
  ushort uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  ushort uVar12;
  
  uVar2 = *(ushort *)(param_1 + 0xb8);
  puVar11 = (ushort *)(param_1 + 0x22e);
  uVar3 = *puVar11;
  uVar12 = *(ushort *)(param_1 + 600);
  if (*(ushort *)(param_1 + 600) <= uVar2) {
    uVar12 = uVar2;
  }
  uVar6 = *(ushort *)(param_1 + 0x246);
  if (*(ushort *)(param_1 + 0x246) <= uVar12) {
    uVar6 = uVar12;
  }
  uVar12 = *(ushort *)(param_1 + 0x232);
  if (*(ushort *)(param_1 + 0x232) <= uVar6) {
    uVar12 = uVar6;
  }
  if (uVar12 < uVar3) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    sVar4 = *(short *)(param_1 + 0xba);
    do {
      uVar10 = (ulonglong)uVar3;
      puVar1 = (undefined2 *)(uVar10 * 8 + lVar5);
      iVar7 = FUN_1804e20e0(param_1,lVar5 + (ulonglong)uVar2 * 8,param_1 + 0xb8,puVar1);
      if (iVar7 == 1) {
        if (puVar1[1] != sVar4) break;
      }
      else if (iVar7 == 2) {
        if (puVar1[1] == sVar4) {
          return 4;
        }
        if (*(ushort *)(param_1 + 0x1b4) < uVar3) {
          puVar8 = (undefined2 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xc) - 1) * 8);
          goto joined_r0x0001804e2b61;
        }
        break;
      }
      uVar3 = puVar1[3];
      puVar11 = (ushort *)((uVar10 * 8 | 6) + lVar5);
    } while (uVar12 < uVar3);
  }
LAB_1804e2b8f:
  uVar9 = FUN_1804a5f70(param_1);
  return uVar9;
joined_r0x0001804e2b61:
  if (puVar8 <= puVar1) goto LAB_1804e2b78;
  if ((*(char *)(puVar8 + 2) < '\0') || (*(char *)((longlong)puVar8 + 5) == 'F'))
  goto LAB_1804e2b8f;
  puVar8 = puVar8 + -4;
  goto joined_r0x0001804e2b61;
LAB_1804e2b78:
  *puVar11 = puVar1[3];
  *puVar1 = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xc000000;
  goto LAB_1804e2b8f;
}



/* ===== 1804e2bb0 FUN_1804e2bb0 ===== */

ulonglong FUN_1804e2bb0(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort uVar9;
  
  uVar1 = *(ushort *)(param_1 + 0xb8);
  uVar6 = (ulonglong)uVar1;
  uVar2 = *(ushort *)(param_1 + 0x228);
  uVar9 = uVar1;
  if (uVar1 < uVar2) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    do {
      uVar7 = (ulonglong)
              *(ushort *)(lVar3 + 2 + (ulonglong)*(ushort *)(lVar3 + (ulonglong)uVar2 * 8) * 8);
      if (*(char *)(lVar3 + 5 + uVar7 * 8) == '\x1e') {
        uVar7 = (ulonglong)*(ushort *)(lVar3 + uVar7 * 8);
      }
      if ((*(byte *)(lVar3 + 4 + uVar7 * 8) & 0x1f) == 0xe) {
        uVar9 = uVar2;
        break;
      }
      uVar2 = *(ushort *)(lVar3 + 6 + (ulonglong)uVar2 * 8);
    } while (uVar1 < uVar2);
  }
  uVar7 = (ulonglong)*(ushort *)(param_1 + 0x224);
  if (uVar9 < *(ushort *)(param_1 + 0x224)) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    do {
      if (*(ushort *)(lVar3 + uVar7 * 8) == uVar1) {
        iVar4 = FUN_1804e22f0(param_1,uVar7,uVar1);
        if (iVar4 != 0) {
          uVar2 = *(ushort *)(param_1 + 0x226);
          goto joined_r0x0001804e2cfb;
        }
        break;
      }
      uVar2 = *(ushort *)(lVar3 + 6 + uVar7 * 8);
      uVar7 = (ulonglong)uVar2;
    } while (uVar9 < uVar2);
  }
  if (((uVar9 == uVar1) &&
      (lVar3 = *(longlong *)(param_1 + 0x20), (byte)(*(char *)(lVar3 + 5 + uVar6 * 8) + 0xafU) < 2))
     && (iVar4 = FUN_1804e22f0(param_1,uVar1,uVar1), iVar4 != 0)) {
    for (uVar2 = *(ushort *)(param_1 + 0x226); (uint)uVar7 < (uint)uVar2;
        uVar2 = *(ushort *)(lVar3 + 6 + (ulonglong)uVar2 * 8)) {
      uVar9 = *(ushort *)
               (lVar3 + (ulonglong)
                        *(ushort *)
                         (lVar3 + (ulonglong)*(ushort *)(lVar3 + (ulonglong)uVar2 * 8) * 8) * 8);
      if ((uVar1 == uVar9) || (iVar4 = FUN_1804e2050(param_1,uVar1,uVar9), iVar4 != 0))
      goto LAB_1804e2d68;
    }
    uVar5 = 0;
    if (*(char *)(lVar3 + 5 + uVar6 * 8) == 'R') {
      uVar5 = FUN_1804929b0(*(undefined8 *)
                             (lVar3 + 8 + (ulonglong)*(ushort *)(lVar3 + uVar6 * 8) * 8));
    }
    uVar6 = FUN_1804a6370(param_1,uVar5);
  }
  else {
LAB_1804e2d68:
    uVar6 = FUN_1804a5f70(param_1);
  }
  return uVar6;
joined_r0x0001804e2cfb:
  if ((uint)uVar2 <= (uint)uVar7) {
    return uVar7;
  }
  uVar6 = (ulonglong)uVar2;
  uVar8 = (ulonglong)*(ushort *)(lVar3 + uVar6 * 8);
  uVar2 = *(ushort *)(lVar3 + (ulonglong)*(ushort *)(lVar3 + uVar8 * 8) * 8);
  if (uVar1 == uVar2) {
    if ((*(byte *)(lVar3 + 4 + uVar6 * 8) & 0x1f) != 0) {
      uVar1 = *(ushort *)(lVar3 + 2 + uVar8 * 8);
      uVar6 = (ulonglong)uVar1;
      if ((((*(char *)(lVar3 + 5 + uVar6 * 8) == ')') &&
           ((uint)*(ushort *)(lVar3 + uVar6 * 8) == (uint)uVar7)) &&
          (uVar6 = (ulonglong)*(ushort *)(lVar3 + 2 + uVar6 * 8),
          *(char *)(lVar3 + 5 + uVar6 * 8) == '\x17')) && (*(int *)(lVar3 + uVar6 * 8) == 1)) {
        *(ushort *)(param_1 + 0xba) = uVar1;
      }
    }
    goto LAB_1804e2d68;
  }
  iVar4 = FUN_1804e2050(param_1,uVar1,uVar2);
  if (iVar4 != 0) goto LAB_1804e2d68;
  uVar2 = *(ushort *)(lVar3 + 6 + uVar6 * 8);
  goto joined_r0x0001804e2cfb;
}



/* ===== 1804e2d90 FUN_1804e2d90 ===== */

void FUN_1804e2d90(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  
  iVar6 = FUN_1804e23b0(param_1,*(undefined2 *)(param_1 + 0xb8));
  if (iVar6 != 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  uVar7 = (ulonglong)*(ushort *)(lVar5 + 2 + (ulonglong)*(ushort *)(param_1 + 0xb8) * 8);
  if ((((*(char *)(lVar5 + 5 + uVar7 * 8) == ')') &&
       (uVar1 = *(ushort *)(lVar5 + 2 + uVar7 * 8), uVar1 < 0x8000)) &&
      (uVar7 = (ulonglong)*(ushort *)(lVar5 + uVar7 * 8), *(char *)(lVar5 + 5 + uVar7 * 8) == ')'))
     && ((uVar2 = *(ushort *)(lVar5 + 2 + uVar7 * 8), uVar2 < 0x8000 &&
         (*(int *)(lVar5 + (ulonglong)uVar1 * 8) == -*(int *)(lVar5 + (ulonglong)uVar2 * 8))))) {
    uVar1 = *(ushort *)(lVar5 + uVar7 * 8);
    uVar2 = *(ushort *)(lVar5 + (ulonglong)*(ushort *)(param_1 + 0xb8) * 8);
    uVar3 = *(ushort *)(param_1 + 0x202);
    uVar4 = uVar2;
    if (uVar2 <= uVar1) {
      uVar4 = uVar1;
    }
    if (uVar4 < uVar3) {
      while ((uVar7 = (ulonglong)uVar3, *(ushort *)(lVar5 + uVar7 * 8) != uVar2 ||
             (*(ushort *)(lVar5 + 2 + uVar7 * 8) != uVar1))) {
        uVar3 = *(ushort *)(lVar5 + 6 + uVar7 * 8);
        if (uVar3 <= uVar4) {
          FUN_1804a5f70(param_1);
          return;
        }
      }
      iVar6 = FUN_1804e23b0(param_1);
      if (iVar6 != 0) {
        return;
      }
    }
  }
  FUN_1804a5f70(param_1);
  return;
}



/* ===== 1804e2e70 FUN_1804e2e70 ===== */

ulonglong FUN_1804e2e70(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar1 = *(ushort *)(param_1 + 0xb8);
  uVar2 = *(ushort *)(param_1 + 0x22c);
  sVar3 = *(short *)(param_1 + 0xba);
  if (uVar1 < uVar2) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    do {
      uVar7 = (ulonglong)uVar2;
      uVar6 = (ulonglong)*(ushort *)(lVar4 + uVar7 * 8);
      if (sVar3 == *(short *)(lVar4 + 2 + uVar6 * 8)) {
        uVar2 = *(ushort *)(lVar4 + uVar6 * 8);
        if (uVar1 == uVar2) {
LAB_1804e2f14:
          return (ulonglong)*(ushort *)(lVar4 + 2 + uVar7 * 8);
        }
        if (5 < (ushort)(sVar3 - 5U)) goto LAB_1804e2f26;
        iVar5 = FUN_1804e2050(param_1,(uint)uVar1,uVar2);
        if (iVar5 == 1) goto LAB_1804e2f26;
        if (iVar5 == 2) goto LAB_1804e2f14;
      }
      uVar2 = *(ushort *)(lVar4 + 6 + uVar7 * 8);
    } while (uVar1 < uVar2);
  }
  uVar7 = (ulonglong)(uint)uVar1;
  if ((sVar3 == 5) &&
     ((byte)(*(char *)(*(longlong *)(param_1 + 0x20) + 5 + (ulonglong)uVar1 * 8) + 0xafU) < 2)) {
    uVar6 = FUN_1804a64b0(param_1,0xb);
    return uVar6;
  }
LAB_1804e2f26:
  uVar6 = FUN_1804d6a90(param_1,uVar7);
  return uVar6;
}



/* ===== 1804e2f40 FUN_1804e2f40 ===== */

void FUN_1804e2f40(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1804e23b0(param_1,*(undefined2 *)(param_1 + 0xb8));
  if (iVar1 == 0) {
    FUN_1804a5f70(param_1);
    return;
  }
  return;
}



/* ===== 1804e2f70 FUN_1804e2f70 ===== */

undefined8 FUN_1804e2f70(longlong param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  longlong lVar14;
  longlong lVar15;
  ushort uVar16;
  
  uVar3 = *(ushort *)(param_1 + 0xb8);
  if (((*(byte *)(param_1 + 0xd4) & 0x1f) == 0xe) && (uVar3 < *(ushort *)(param_1 + 0x208))) {
    for (uVar4 = *(ushort *)(param_1 + 0x226); uVar3 < uVar4;
        uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 6 + (ulonglong)uVar4 * 8)) {
      if (uVar4 < *(ushort *)(param_1 + 0x208)) {
        return 0;
      }
    }
  }
  uVar4 = *(ushort *)(param_1 + 0x228);
  if (uVar3 < uVar4) {
    lVar7 = *(longlong *)(param_1 + 0x20);
    uVar5 = *(ushort *)(param_1 + 0xba);
    do {
      lVar15 = (ulonglong)*(ushort *)(lVar7 + (ulonglong)uVar4 * 8) * 8;
      puVar1 = (ushort *)(lVar15 + lVar7);
      if ((ushort *)(param_1 + 0xb8) == puVar1) {
        return 0;
      }
      uVar13 = puVar1[1];
      lVar10 = (ulonglong)uVar5 * 8;
      if (*(char *)(lVar10 + 5 + lVar7) == '\x1e') {
        puVar2 = (ushort *)(lVar10 + lVar7);
        lVar10 = (ulonglong)*puVar2 * 8;
        uVar16 = *puVar2;
      }
      else {
        uVar16 = uVar5;
      }
      lVar14 = (ulonglong)uVar13 * 8;
      if (*(char *)(lVar14 + 5 + lVar7) == '\x1e') {
        uVar13 = *(ushort *)(lVar14 + lVar7);
        lVar14 = (ulonglong)uVar13 * 8;
      }
      uVar11 = uVar3;
      if ((byte)(*(char *)(param_1 + 0xbd) - 0x38U) < 2) {
        uVar11 = *(ushort *)(lVar7 + (ulonglong)uVar3 * 8);
      }
      if ((byte)(*(char *)((longlong)puVar1 + 5) - 0x38U) < 2) {
        lVar15 = (ulonglong)*puVar1 * 8;
      }
      if (uVar16 == uVar13) goto LAB_1804e312d;
      if ((0x7fff < uVar16) || (0x7fff < uVar13)) {
        if (*(char *)(param_1 + 0xbd) == '8') {
          iVar9 = 0;
          uVar12 = uVar16;
          if ((*(char *)(lVar10 + 5 + lVar7) == ')') &&
             (uVar6 = *(ushort *)(lVar10 + 2 + lVar7), uVar6 < 0x8000)) {
            uVar12 = *(ushort *)(lVar10 + lVar7);
            iVar9 = *(int *)(lVar7 + (ulonglong)uVar6 * 8);
            if ((uVar12 == uVar13) && (iVar9 != 0)) goto LAB_1804e3144;
          }
          iVar8 = 0;
          if ((*(char *)(lVar14 + 5 + lVar7) == ')') &&
             (uVar6 = *(ushort *)(lVar14 + 2 + lVar7), uVar6 < 0x8000)) {
            uVar13 = *(ushort *)(lVar14 + lVar7);
            iVar8 = *(int *)(lVar7 + (ulonglong)uVar6 * 8);
            if ((uVar16 == uVar13) && (iVar8 != 0)) goto LAB_1804e3144;
          }
          if ((uVar12 != uVar13) || (iVar9 == iVar8)) {
LAB_1804e312d:
            if (uVar11 == *(ushort *)(lVar15 + lVar7)) {
              return 0;
            }
            iVar9 = FUN_1804e2050(param_1,uVar11,*(ushort *)(lVar15 + lVar7));
            if (iVar9 != 0) {
              return 0;
            }
          }
        }
        else if (((*(byte *)(lVar14 + 4 + lVar7) ^ *(byte *)(lVar10 + 4 + lVar7)) & 0x1f) == 0)
        goto LAB_1804e312d;
      }
LAB_1804e3144:
      uVar4 = *(ushort *)(lVar7 + 6 + (ulonglong)uVar4 * 8);
    } while (uVar3 < uVar4);
  }
  return 1;
}



/* ===== 1804e3180 FUN_1804e3180 ===== */

ulonglong FUN_1804e3180(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar2 = *(ushort *)(param_1 + 0xc0);
  uVar9 = (ulonglong)uVar2;
  uVar3 = *(ushort *)(param_1 + 0x208);
  if (uVar2 < uVar3) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    do {
      uVar6 = (uint)uVar3;
      lVar1 = lVar4 + (ulonglong)uVar6 * 8;
      uVar3 = *(ushort *)(lVar4 + (ulonglong)uVar6 * 8);
      if (uVar2 == uVar3) {
        if ((*(short *)(param_1 + 0xd0) == *(short *)(lVar1 + 2)) &&
           (iVar7 = FUN_1804e22f0(param_1,uVar6,uVar2), iVar7 != 0)) {
          return (ulonglong)uVar6;
        }
        goto LAB_1804e3261;
      }
      uVar11 = lVar4 + (ulonglong)uVar3 * 8;
      uVar10 = lVar4 + uVar9 * 8;
      bVar5 = 1 < (byte)(*(char *)(lVar4 + 5 + uVar9 * 8) + 0xafU);
      if ((byte)(*(char *)(uVar11 + 5) + 0xafU) < 2) {
        if (bVar5) {
          bVar5 = true;
          goto LAB_1804e31f9;
        }
      }
      else {
        if (bVar5) goto LAB_1804e3261;
        bVar5 = false;
        uVar10 = uVar11;
LAB_1804e31f9:
        uVar11 = (ulonglong)uVar3;
        if (!bVar5) {
          uVar11 = uVar9;
        }
        for (uVar8 = lVar4 + 8 + uVar11 * 8; uVar8 < uVar10; uVar8 = uVar8 + 8) {
          if (((uint)*(ushort *)(uVar8 + 2) == (uint)uVar11) &&
             ((byte)(*(char *)(uVar8 + 5) + 0xb6U) < 4)) goto LAB_1804e3261;
        }
      }
      uVar3 = *(ushort *)(lVar1 + 6);
    } while (uVar2 < uVar3);
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x20) + 5 + uVar9 * 8) == 'R') &&
     (iVar7 = FUN_1804e22f0(param_1,uVar2,uVar2), iVar7 != 0)) {
    *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0x7f;
  }
LAB_1804e3261:
  uVar9 = FUN_1804d3410(param_1);
  return uVar9;
}



/* ===== 1804e32a0 FUN_1804e32a0 ===== */

undefined8 FUN_1804e32a0(longlong param_1,uint param_2)

{
  ushort uVar1;
  
  if (param_2 < *(ushort *)(param_1 + 0x23e)) {
    return 0;
  }
  uVar1 = *(ushort *)(param_1 + 0x256);
  if (param_2 < uVar1) {
    do {
      if ((ushort)(*(short *)(*(longlong *)(param_1 + 0x20) + 2 + (ulonglong)uVar1 * 8) - 7U) < 0x17
         ) {
        return 0;
      }
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 6 + (ulonglong)uVar1 * 8);
    } while (param_2 < uVar1);
  }
  uVar1 = *(ushort *)(param_1 + 0x254);
  if (param_2 < uVar1) {
    do {
      if ((ushort)(*(short *)(*(longlong *)(param_1 + 0x20) + 2 + (ulonglong)uVar1 * 8) - 7U) < 0x17
         ) {
        return 0;
      }
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 6 + (ulonglong)uVar1 * 8);
    } while (param_2 < uVar1);
  }
  return 1;
}



/* ===== 1804e3320 FUN_1804e3320 ===== */

undefined8 FUN_1804e3320(longlong param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar1 = *(ushort *)(param_1 + 0x208);
  uVar2 = *(ushort *)(param_1 + 0xb8);
  uVar9 = (ulonglong)uVar2;
  if (param_2 < uVar1) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    do {
      uVar3 = *(ushort *)(lVar4 + (ulonglong)uVar1 * 8);
      if (uVar2 == uVar3) {
        return 0;
      }
      uVar10 = lVar4 + (ulonglong)uVar3 * 8;
      uVar8 = lVar4 + uVar9 * 8;
      bVar5 = 1 < (byte)(*(char *)(lVar4 + 5 + uVar9 * 8) + 0xafU);
      if ((byte)(*(char *)(uVar10 + 5) + 0xafU) < 2) {
        if (bVar5) {
          bVar5 = true;
          goto LAB_1804e3398;
        }
      }
      else {
        if (bVar5) {
          return 0;
        }
        bVar5 = false;
        uVar8 = uVar10;
LAB_1804e3398:
        uVar10 = (ulonglong)uVar3;
        if (!bVar5) {
          uVar10 = uVar9;
        }
        for (uVar6 = lVar4 + 8 + uVar10 * 8; uVar6 < uVar8; uVar6 = uVar6 + 8) {
          if (((uint)*(ushort *)(uVar6 + 2) == (uint)uVar10) &&
             ((byte)(*(char *)(uVar6 + 5) + 0xb6U) < 4)) {
            return 0;
          }
        }
      }
      uVar1 = *(ushort *)(lVar4 + 6 + (ulonglong)uVar1 * 8);
    } while (param_2 < uVar1);
  }
  uVar7 = FUN_1804e22f0(param_1,param_2,uVar2);
  return uVar7;
}



/* ===== 1804e3400 FUN_1804e3400 ===== */

ulonglong FUN_1804e3400(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar4 = *(ushort *)(param_1 + 0xb8);
  uVar10 = 0x8000;
  uVar9 = 0x8000;
  uVar5 = *(ushort *)(param_1 + 0x22a);
  lVar6 = *(longlong *)(param_1 + 0x20);
  lVar2 = (ulonglong)uVar4 * 8;
  if (uVar5 < 0x8001) {
LAB_1804e34de:
    uVar9 = (uint)uVar10;
  }
  else {
    psVar1 = (short *)(lVar6 + lVar2);
    lVar8 = lVar6;
    do {
      uVar10 = (ulonglong)uVar5;
      uVar7 = (ulonglong)*(ushort *)(lVar8 + uVar10 * 8);
      lVar6 = lVar8;
      if (*psVar1 == *(short *)(lVar8 + uVar7 * 8)) {
        if (psVar1[1] == *(short *)(lVar8 + 2 + uVar7 * 8)) {
          return (ulonglong)*(ushort *)(lVar8 + 2 + uVar10 * 8);
        }
      }
      else if (*(char *)(lVar8 + 2 + uVar7 * 8) == (char)psVar1[1]) {
        if (*(char *)((longlong)psVar1 + 5) == *(char *)(lVar8 + 5 + uVar7 * 8)) goto LAB_1804e34de;
        if ((*(byte *)(psVar1 + 2) & 0x1f) == 0x15) {
          *(byte *)(psVar1 + 2) = *(byte *)(psVar1 + 2) - 0xc;
        }
        else {
          bVar3 = *(byte *)(lVar8 + 4 + uVar7 * 8);
          if ((bVar3 & 0x1f) == 0x15) {
            *(byte *)(lVar8 + 4 + uVar7 * 8) = bVar3 - 0xc;
          }
        }
        lVar6 = *(longlong *)(param_1 + 0x20);
      }
      uVar5 = *(ushort *)(lVar8 + 6 + uVar10 * 8);
      lVar8 = lVar6;
    } while (0x8000 < uVar5);
  }
  uVar5 = *(ushort *)(param_1 + 0x21a);
  while( true ) {
    if (uVar5 <= uVar9) {
      uVar10 = FUN_1804a5f70(param_1);
      return uVar10;
    }
    uVar10 = (ulonglong)uVar5;
    uVar5 = *(ushort *)(lVar6 + uVar10 * 8);
    if ((uVar5 == uVar4) ||
       ((*(int *)(lVar6 + (ulonglong)uVar5 * 8) == *(int *)(lVar6 + lVar2) &&
        (*(char *)(lVar6 + 5 + (ulonglong)uVar5 * 8) == *(char *)(lVar6 + 5 + lVar2))))) break;
    uVar5 = *(ushort *)(lVar6 + 6 + uVar10 * 8);
  }
  return uVar10;
}



/* ===== 1804e3540 FUN_1804e3540 ===== */

bool FUN_1804e3540(longlong param_1,ushort param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  
  uVar2 = *(ushort *)(param_1 + 0x1a2 + (ulonglong)param_2 * 2);
  if (param_3 < uVar2) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    do {
      uVar5 = (ulonglong)uVar2;
      uVar2 = *(ushort *)(lVar4 + uVar5 * 8);
      bVar6 = *(byte *)(lVar4 + 4 + uVar5 * 8) & 0x1f;
      if (uVar2 == param_3) {
        return bVar6 != 0;
      }
      if (bVar6 == 0) {
        uVar2 = *(ushort *)(lVar4 + 2 + (ulonglong)uVar2 * 8);
        uVar3 = *(ushort *)(lVar4 + 2 + (ulonglong)param_3 * 8);
        if (param_2 != 0x42) {
          bVar6 = *(byte *)(lVar4 + 4 + (ulonglong)uVar2 * 8);
          bVar1 = *(byte *)(lVar4 + 4 + (ulonglong)uVar3 * 8);
          if (((bVar6 ^ bVar1) & 0x1f) != 0) {
            if (((bVar6 & 0x1f) == 5) != ((bVar1 & 0x1f) == 5)) {
              return false;
            }
            goto LAB_1804e35ef;
          }
        }
        if (uVar2 == uVar3) {
          return false;
        }
        if (0x7fff < uVar2) {
          return false;
        }
        if (0x7fff < uVar3) {
          return false;
        }
      }
LAB_1804e35ef:
      uVar2 = *(ushort *)(lVar4 + 6 + uVar5 * 8);
    } while (param_3 < uVar2);
  }
  uVar2 = *(ushort *)(param_1 + 0x192 + (ulonglong)param_2 * 2);
  if (uVar2 <= param_3) {
    return false;
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  do {
    uVar5 = (ulonglong)uVar2;
    if (*(ushort *)(lVar4 + uVar5 * 8) == param_3) {
      return (*(byte *)(lVar4 + 4 + uVar5 * 8) & 0x1f) != 0;
    }
    uVar2 = *(ushort *)(lVar4 + 6 + uVar5 * 8);
  } while (param_3 < uVar2);
  return false;
}



/* ===== 1804e3660 FUN_1804e3660 ===== */

ulonglong FUN_1804e3660(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar7 = *(ushort *)(param_1 + 0xb8);
  uVar5 = (ulonglong)uVar7;
  uVar3 = (uint)uVar7;
  uVar6 = (uint)uVar7;
  lVar11 = *(longlong *)(param_1 + 0x20);
  lVar10 = lVar11 + uVar5 * 8;
  if ((*(ushort *)(param_1 + 0xba) & 1) != 0) goto LAB_1804e36b0;
  if ((*(ushort *)(param_1 + 0xba) & 2) != 0) {
LAB_1804e3836:
    uVar5 = FUN_1804a5f70(param_1);
    return uVar5;
  }
  uVar9 = (ulonglong)*(ushort *)(param_1 + 0x22e);
  do {
    uVar3 = (uint)uVar5;
    uVar8 = (uint)*(ushort *)(param_1 + 600);
    if (*(ushort *)(param_1 + 600) <= uVar3) {
      uVar8 = uVar3;
    }
    uVar6 = (uint)*(ushort *)(param_1 + 0x246);
    if (*(ushort *)(param_1 + 0x246) <= uVar8) {
      uVar6 = uVar8;
    }
    uVar8 = (uint)uVar9;
    while (uVar6 < uVar8) {
      lVar1 = lVar11 + uVar9 * 8;
      iVar4 = FUN_1804e20e0(param_1,lVar10,param_1 + 0xb8,lVar1);
      if (iVar4 == 1) {
        uVar6 = (uint)uVar9;
        break;
      }
      if (iVar4 == 2) {
        bVar2 = *(byte *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)*(ushort *)(lVar1 + 2) * 8)
        ;
        if (((bVar2 ^ *(byte *)(param_1 + 0xbc)) & 0x1f) == 0) {
          return (ulonglong)*(ushort *)(lVar1 + 2);
        }
        uVar6 = *(byte *)(param_1 + 0xbc) & 0x1f;
        if ((uVar6 - 0xf & 0xfffffffd) == 0) {
          uVar6 = uVar6 | 0x800;
        }
        else if ((uVar6 - 0x10 & 0xfffffffd) != 0) {
          uVar7 = bVar2 & 0x1f;
          goto LAB_1804e3803;
        }
        uVar7 = (ushort)uVar6;
        uVar6 = 0x13;
LAB_1804e3803:
        *(ushort *)(param_1 + 0xbc) = (ushort)uVar6 | 0x5b00;
        *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(lVar1 + 2);
        *(ushort *)(param_1 + 0xba) = (ushort)uVar6 << 5 | uVar7;
        return 1;
      }
      uVar9 = (ulonglong)*(ushort *)(lVar1 + 6);
      uVar8 = (uint)*(ushort *)(lVar1 + 6);
    }
LAB_1804e36b0:
    uVar7 = *(ushort *)(param_1 + 0x21e);
    if (uVar6 < uVar7) {
      lVar11 = *(longlong *)(param_1 + 0x20);
      do {
        uVar5 = (ulonglong)uVar7;
        if ((*(ushort *)(lVar11 + uVar5 * 8) == uVar3) &&
           (((*(byte *)(lVar11 + 4 + uVar5 * 8) ^ *(byte *)(param_1 + 0xbc)) & 0x1f) == 0)) {
          return uVar5;
        }
        uVar7 = *(ushort *)(lVar11 + 6 + uVar5 * 8);
      } while (uVar6 < uVar7);
    }
    if ((((*(byte *)(param_1 + 0xba) & 1) != 0) || (*(short *)(param_1 + 0x1b4) == 0)) ||
       (uVar3 != *(ushort *)(param_1 + 0xb8))) goto LAB_1804e3836;
    uVar3 = FUN_1804e38b0(param_1,lVar10);
    uVar5 = (ulonglong)uVar3;
    if (uVar3 == 0) goto LAB_1804e3836;
    uVar9 = (ulonglong)*(ushort *)(param_1 + 0x22e);
    if (uVar6 < *(ushort *)(param_1 + 0x22e)) {
      do {
        uVar7 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 6 + uVar9 * 8);
        uVar9 = (ulonglong)uVar7;
      } while (uVar6 < uVar7);
    }
    lVar11 = *(longlong *)(param_1 + 0x20);
    lVar10 = lVar11 + uVar5 * 8;
  } while( true );
}



/* ===== 1804e3850 FUN_1804e3850 ===== */

ulonglong FUN_1804e3850(longlong param_1,int param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x192 + (longlong)param_2 * 2);
  if (param_3 < param_4) {
    uVar4 = param_4;
    param_4 = param_3;
  }
  else {
    uVar4 = param_3;
  }
  if (uVar4 < uVar1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      uVar3 = (ulonglong)uVar1;
      if ((*(ushort *)(lVar2 + uVar3 * 8) == uVar4) &&
         (*(ushort *)(lVar2 + 2 + uVar3 * 8) == param_4)) {
        return uVar3;
      }
      uVar1 = *(ushort *)(lVar2 + 6 + uVar3 * 8);
    } while (uVar4 < uVar1);
  }
  return 0;
}



/* ===== 1804e38b0 FUN_1804e38b0 ===== */

int FUN_1804e38b0(longlong param_1,ushort *param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ushort *puVar10;
  ushort uVar11;
  byte bVar12;
  longlong lVar13;
  
  lVar13 = 0;
  if ((*(char *)((longlong)param_2 + 5) == ')') &&
     (uVar8 = (ulonglong)param_2[1], param_2[1] < 0x8000)) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (*(char *)(lVar4 + 5 + uVar8 * 8) == '\x1d') {
      lVar13 = *(longlong *)(lVar4 + 8 + uVar8 * 8);
    }
    else {
      lVar13 = (longlong)*(int *)(lVar4 + uVar8 * 8);
    }
    param_2 = (ushort *)(lVar4 + (ulonglong)*param_2 * 8);
  }
  if (*(char *)((longlong)param_2 + 5) != ')') {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  uVar8 = (ulonglong)*param_2;
  cVar1 = *(char *)(lVar4 + 5 + uVar8 * 8);
  puVar10 = (ushort *)(lVar4 + uVar8 * 8);
  if (cVar1 == '$') {
    if (puVar10[1] < 0x8000) {
      bVar12 = (byte)*(undefined4 *)(lVar4 + (ulonglong)puVar10[1] * 8);
      uVar9 = (ulonglong)*puVar10;
      goto LAB_1804e3950;
    }
  }
  else if ((cVar1 == ')') && (uVar9 = (ulonglong)*puVar10, *puVar10 == puVar10[1])) {
    bVar12 = 1;
    goto LAB_1804e3950;
  }
  bVar12 = 0;
  uVar9 = uVar8;
  puVar10 = param_2;
LAB_1804e3950:
  if (((*(char *)(lVar4 + 5 + uVar9 * 8) == ')') &&
      ((*(byte *)(lVar4 + 4 + uVar9 * 8) & 0x1f) == 0x13)) &&
     (uVar2 = *(ushort *)(lVar4 + 2 + uVar9 * 8), uVar2 < 0x8000)) {
    uVar3 = *(ushort *)(lVar4 + uVar9 * 8);
    uVar6 = (uint)uVar3;
    if (puVar10 != param_2) {
      if (*(char *)((longlong)puVar10 + 5) == '$') {
        uVar11 = puVar10[1];
      }
      else {
        uVar11 = uVar3;
      }
      uVar6 = FUN_1804e3850(param_1,*(char *)((longlong)puVar10 + 5),uVar3,uVar11);
      if (uVar6 == 0) {
        return 0;
      }
    }
    iVar7 = FUN_1804e3850(param_1,0x29,uVar6,param_2[1]);
    if (iVar7 != 0) {
      if (((longlong)*(int *)(lVar4 + (ulonglong)uVar2 * 8) << (bVar12 & 0x3f)) + lVar13 != 0) {
        uVar5 = FUN_1804a6410(param_1);
        iVar7 = FUN_1804e3850(param_1,0x29,iVar7,uVar5);
        if (iVar7 == 0) {
          return 0;
        }
      }
      return iVar7;
    }
  }
  return 0;
}



/* ===== 1804e3a20 FUN_1804e3a20 ===== */

uint FUN_1804e3a20(longlong param_1,uint param_2,ulonglong *param_3)

{
  int iVar1;
  
  if ((param_2 & 0x1f000000) == 0x4000000) {
    *(undefined4 *)(param_1 + 0xba) = 0x5e8e0000;
    *(short *)(param_1 + 0xb8) = (short)param_2;
    param_2 = FUN_1804d6ae0();
    iVar1 = FUN_1804972a0(*param_3 & 0x7fffffffffff,param_3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804954a0(param_1,0xb);
    }
  }
  return param_2;
}



/* ===== 1804e3aa0 FUN_1804e3aa0 ===== */

void FUN_1804e3aa0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ushort uVar4;
  
  uVar1 = FUN_1804e3a20(param_1,param_2,param_4);
  uVar2 = FUN_1804e3a20(param_1,param_3,param_5);
  if (((param_6 - 0x29U < 2) && ((uVar1 >> 0x18 & 0x1f) - 0xf < 5)) &&
     ((uVar2 >> 0x18 & 0x1f) - 0xf < 5)) {
    FUN_1804b8d60(*param_4,*param_5,param_6 + -0x29);
    lVar3 = FUN_1800052ed();
    if (-1 < lVar3) {
      uVar4 = (short)param_6 * 0x100 + 0xc00U | 0x93;
      goto LAB_1804e3b8e;
    }
  }
  if ((uVar1 & 0x1f000000) != 0xe000000) {
    *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
    *(short *)(param_1 + 0xb8) = (short)uVar1;
    uVar1 = FUN_1804d6ae0(param_1);
  }
  if ((uVar2 & 0x1f000000) != 0xe000000) {
    *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
    *(short *)(param_1 + 0xb8) = (short)uVar2;
    uVar2 = FUN_1804d6ae0(param_1);
  }
  uVar4 = (short)param_6 << 8 | 0xe;
LAB_1804e3b8e:
  *(ushort *)(param_1 + 0xbc) = uVar4;
  *(short *)(param_1 + 0xb8) = (short)uVar1;
  *(short *)(param_1 + 0xba) = (short)uVar2;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804e3bc0 FUN_1804e3bc0 ===== */

void FUN_1804e3bc0(longlong param_1,uint param_2)

{
  if ((param_2 & 0x1f000000) == 0xe000000) {
    *(undefined4 *)(param_1 + 0xba) = 0x5b1512ae;
    *(short *)(param_1 + 0xb8) = (short)param_2;
    FUN_1804d6ae0();
    return;
  }
  FUN_1804e46b0(param_1,param_2,0x37,0xab3);
  return;
}



/* ===== 1804e3c00 FUN_1804e3c00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804e3c00(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_458 [32];
  longlong local_438;
  undefined1 *local_430;
  undefined1 *local_428;
  uint local_420;
  uint local_41c;
  undefined1 local_418 [1008];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_458;
  if ((*(uint *)(param_1 + 0xa8) & 0x200000) != 0) {
    local_430 = local_418;
    local_428 = local_28;
    local_41c = *(byte *)(param_1 + 0xbc) & 0x1f;
    if (*(char *)(param_1 + 0xbd) == '\\') {
      local_420 = 0;
    }
    else {
      local_420 = (uint)*(ushort *)(param_1 + 0xba);
    }
    local_438 = param_1;
    iVar1 = FUN_1804e41f0(&local_438,*(undefined2 *)(param_1 + 0xb8),0);
    if (iVar1 < 2) {
      uVar2 = FUN_1804e4460(param_1,&local_438);
      return uVar2;
    }
  }
  return 0;
}



/* ===== 1804e3cc0 FUN_1804e3cc0 ===== */

undefined8 FUN_1804e3cc0(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if ((*(uint *)(param_1 + 0xa8) & 0x200000) != 0) {
    lVar3 = FUN_1800052ed(*param_2);
    if (-1 < lVar3) {
      dVar1 = (double)param_2[1];
      lVar3 = FUN_1800052ed(dVar1);
      if (-1 < lVar3) {
        dVar2 = (double)param_2[2];
        lVar3 = FUN_1800052ed(dVar2);
        if (-1 < lVar3) {
          dVar1 = dVar1 + dVar2;
          if (dVar2 < 0.0) {
            bVar5 = dVar1 < DAT_1808ace48;
          }
          else {
            bVar5 = DAT_1808ac9c8 < dVar1;
          }
          uVar4 = 0xe;
          if (!bVar5) {
            uVar4 = 0x13;
          }
          return uVar4;
        }
      }
    }
  }
  return 0xe;
}



/* ===== 1804e3d80 FUN_1804e3d80 ===== */

ulonglong FUN_1804e3d80(longlong param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((param_2 & 0x1f000000) == 0xe000000) {
    *(undefined4 *)(param_1 + 0xba) = 0x5b93226e;
    *(short *)(param_1 + 0xb8) = (short)param_2;
    uVar4 = FUN_1804d6ae0();
    return uVar4;
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar4 = (ulonglong)(param_2 & 0xffff);
  if ((byte)(*(char *)(lVar3 + 5 + uVar4 * 8) - 0x35U) < 2) {
    uVar2 = *(ushort *)(lVar3 + 2 + uVar4 * 8);
    if ((uVar2 < 0x8000) && (*(int *)(lVar3 + (ulonglong)uVar2 * 8) + 0x40000000U < 0x80000000)) {
      bVar1 = *(byte *)(lVar3 + 5 + uVar4 * 8);
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(lVar3 + uVar4 * 8);
      *(ushort *)(param_1 + 0xbc) = (bVar1 - 0xc) * 0x100 | 0x13;
      *(ushort *)(param_1 + 0xba) = uVar2;
      uVar4 = FUN_1804d6ae0(param_1);
      return uVar4;
    }
  }
  return (ulonglong)param_2;
}



/* ===== 1804e3e20 FUN_1804e3e20 ===== */

void FUN_1804e3e20(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  ulonglong *param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FUN_1804e3a20(param_1,param_2,param_4);
  uVar4 = FUN_1804e3a20(param_1,param_3,param_5);
  if (((((*(uint *)(param_1 + 0xa8) & 0x200000) == 0) || (4 < (uVar3 >> 0x18 & 0x1f) - 0xf)) ||
      (4 < (uVar4 >> 0x18 & 0x1f) - 0xf)) || ((*param_5 & 0x7fffffffffffffff) == 0)) {
    uVar3 = FUN_1804a6b20(param_1,uVar3);
    uVar1 = FUN_1804a6b20(param_1,uVar4);
    *(undefined2 *)(param_1 + 0xbc) = 0x2c0e;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    *(short *)(param_1 + 0xb8) = (short)uVar3;
    uVar2 = FUN_1804d6ae0(param_1);
    *(undefined4 *)(param_1 + 0xba) = 0x340e0000;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    uVar2 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x2b0e;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    uVar1 = FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    *(undefined2 *)(param_1 + 0xbc) = 0x2a0e;
  }
  else {
    uVar1 = FUN_1804a6370(param_1,0);
    *(undefined2 *)(param_1 + 0xbc) = 0x993;
    *(short *)(param_1 + 0xb8) = (short)uVar4;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    FUN_1804d6ae0(param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0x2d13;
    *(short *)(param_1 + 0xba) = (short)uVar4;
  }
  *(short *)(param_1 + 0xb8) = (short)uVar3;
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804e3f60 FUN_1804e3f60 ===== */

void FUN_1804e3f60(longlong param_1,uint param_2)

{
  undefined2 uVar1;
  
  if ((param_2 & 0x1f000000) == 0x4000000) {
    *(undefined4 *)(param_1 + 0xba) = 0x5e8e0000;
    *(short *)(param_1 + 0xb8) = (short)param_2;
    param_2 = FUN_1804d6ae0();
  }
  if ((param_2 & 0x1f000000) == 0xe000000) {
    uVar1 = FUN_1804a6540(param_1,0x4338000000000000);
    *(undefined2 *)(param_1 + 0xbc) = 0x5c13;
    *(short *)(param_1 + 0xb8) = (short)param_2;
    *(undefined2 *)(param_1 + 0xba) = uVar1;
    FUN_1804d6ae0(param_1);
    return;
  }
  if (4 < (param_2 >> 0x18 & 0x1f) - 0xf) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0xb);
  }
  FUN_1804e46b0(param_1,param_2,0x36,0x273);
  return;
}



/* ===== 1804e4020 FUN_1804e4020 ===== */

void FUN_1804e4020(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  
  if (((uint)param_2 & 0x1f000000) == 0x4000000) {
    *(undefined4 *)(param_1 + 0xba) = 0x5e8e0000;
    *(short *)(param_1 + 0xb8) = (short)param_2;
    uVar1 = FUN_1804d6ae0();
    param_2 = (ulonglong)uVar1;
  }
  if (((uint)param_2 & 0x1f000000) == 0xe000000) {
    *(undefined4 *)(param_1 + 0xba) = 0x5b13126e;
    *(short *)(param_1 + 0xb8) = (short)param_2;
    FUN_1804d6ae0();
    return;
  }
  if (4 < ((uint)(param_2 >> 0x18) & 0x1f) - 0xf) {
                    /* WARNING: Subroutine does not return */
    FUN_1804954a0(param_1,0xb);
  }
  FUN_1804e46b0(param_1,param_2,0x37,0x273);
  return;
}



/* ===== 1804e40b0 FUN_1804e40b0 ===== */

void FUN_1804e40b0(longlong param_1,undefined8 param_2,double *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  
  uVar3 = FUN_1804e3a20();
  if ((uVar3 >> 0x18 & 0x1f) - 0xf < 5) {
    uVar2 = (undefined2)uVar3;
    if (((int)*param_3 & 0x7fffffffU) != 0) {
      uVar1 = FUN_1804a6370(param_1,0);
      *(undefined2 *)(param_1 + 0xbc) = 0x993;
      *(undefined2 *)(param_1 + 0xba) = uVar1;
      *(undefined2 *)(param_1 + 0xb8) = uVar2;
      FUN_1804d6ae0(param_1);
      *(undefined2 *)(param_1 + 0xbc) = 0x3693;
      *(undefined2 *)(param_1 + 0xb8) = uVar1;
      *(undefined2 *)(param_1 + 0xba) = uVar2;
      goto LAB_1804e417d;
    }
    *(undefined4 *)(param_1 + 0xba) = 0x5b0e01d3;
    *(undefined2 *)(param_1 + 0xb8) = uVar2;
    uVar3 = FUN_1804d6ae0(param_1);
  }
  uVar2 = FUN_1804a6000(param_1,0xe,((param_1 + 0x127U & 0xfffffffffffffff0) - param_1) + 0x348);
  *(undefined2 *)(param_1 + 0xba) = uVar2;
  *(undefined2 *)(param_1 + 0xbc) = 0x2f0e;
  *(short *)(param_1 + 0xb8) = (short)uVar3;
LAB_1804e417d:
  FUN_1804d6ae0(param_1);
  return;
}



/* ===== 1804e41a0 FUN_1804e41a0 ===== */

longlong FUN_1804e41a0(longlong param_1,short param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  while (((*(short *)(param_1 + 0xb24 + lVar2 * 8) != param_2 ||
          (uVar1 = *(uint *)(param_1 + 0xb28 + lVar2 * 8), uVar1 < param_3)) ||
         (((uVar1 ^ param_3) & 0xfff) != 0))) {
    lVar2 = lVar2 + 1;
    if (0xf < lVar2) {
      return 0;
    }
  }
  return lVar2 * 8 + 0xb24 + param_1;
}



/* ===== 1804e41f0 FUN_1804e41f0 ===== */

int FUN_1804e41f0(longlong *param_1,uint param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 extraout_XMM0_Qa;
  
  puVar5 = (uint *)param_1[1];
  uVar11 = (ulonglong)param_2;
  if ((uint *)param_1[2] <= puVar5) {
    return 10;
  }
  lVar10 = *param_1;
  lVar6 = *(longlong *)(lVar10 + 0x20);
  cVar2 = *(char *)(lVar6 + 5 + uVar11 * 8);
  if (cVar2 == '[') {
    if ((*(byte *)(lVar6 + 2 + uVar11 * 8) & 0x1f) == 0x13) {
      uVar3 = *(ushort *)(lVar6 + uVar11 * 8);
      if ((*(uint *)(param_1 + 3) & 0xf000) < 0x1001) {
        FUN_1804e4840(param_1,uVar3,param_3 + 1);
      }
      else {
        *puVar5 = (uint)uVar3;
        param_1[1] = param_1[1] + 4;
      }
      if (*(int *)((longlong)param_1 + 0x1c) != 0x15) {
        return 0;
      }
      goto LAB_1804e4266;
    }
  }
  else if (cVar2 == '\x1c') {
    uVar1 = *(undefined8 *)(lVar6 + 8 + uVar11 * 8);
    if ((*(uint *)(param_1 + 3) & 0xf000) == 0) {
      lVar10 = FUN_1800052ed(uVar1);
      if (lVar10 < 0) {
        return 10;
      }
    }
    else {
      lVar10 = FUN_1800052ed(uVar1);
      if ((int)lVar10 != (int)(short)lVar10) {
        return 10;
      }
    }
    *puVar5 = 0x30000;
    param_1[1] = param_1[1] + 4;
    *(int *)param_1[1] = (int)lVar10;
    goto LAB_1804e42b6;
  }
  uVar3 = *(ushort *)(lVar10 + 0x192 + (ulonglong)*(byte *)(lVar10 + 0xbd) * 2);
  while (param_2 < uVar3) {
    uVar12 = (ulonglong)uVar3;
    if ((*(ushort *)(lVar6 + uVar12 * 8) == param_2) &&
       ((*(byte *)(lVar10 + 0xbd) == 0x5c ||
        (((*(ushort *)(lVar6 + 2 + uVar12 * 8) & 0xfff) == (*(uint *)(param_1 + 3) & 0xfff) &&
         ((*(byte *)(lVar10 + 0xbc) & 0x80) <= (*(byte *)(lVar6 + 4 + uVar12 * 8) & 0x80))))))) {
      *puVar5 = (uint)uVar3;
      goto LAB_1804e42b6;
    }
    uVar3 = *(ushort *)(lVar6 + 6 + uVar12 * 8);
  }
  if ((byte)(cVar2 - 0x29U) < 2) {
    uVar4 = *(uint *)(param_1 + 3);
    uVar7 = uVar4;
    if (((uVar4 & 0xf000) == 0x2000) && (uVar7 = uVar4 + 0x1000, param_3 < 1)) {
      uVar7 = uVar4;
    }
    lVar10 = FUN_1804e41a0(lVar10,param_2 & 0xffff,uVar7);
    if (lVar10 != 0) {
      *puVar5 = (uint)*(ushort *)(lVar10 + 2);
LAB_1804e42b6:
      param_1[1] = param_1[1] + 4;
      return 0;
    }
    if ((*(int *)((longlong)param_1 + 0x1c) == 0x15) &&
       (lVar10 = FUN_1804e41a0(extraout_XMM0_Qa,param_2 & 0xffff,0x226e), lVar10 != 0)) {
      *puVar5 = (uint)*(ushort *)(lVar10 + 2);
      param_1[1] = param_1[1] + 4;
LAB_1804e4266:
      *(undefined4 *)param_1[1] = 0x20000;
      param_1[1] = param_1[1] + 4;
      return 0;
    }
    param_3 = param_3 + 1;
    if (param_3 < 100) {
      iVar8 = FUN_1804e41f0(param_1,*(undefined2 *)(lVar6 + uVar11 * 8),param_3);
      iVar9 = FUN_1804e41f0(param_1,*(undefined2 *)(lVar6 + 2 + uVar11 * 8),param_3);
      if ((iVar9 + iVar8 < 2) && ((int *)param_1[1] < (int *)param_1[2])) {
        *(int *)param_1[1] =
             ((uint)*(byte *)(lVar6 + 5 + uVar11 * 8) << 8 | *(uint *)((longlong)param_1 + 0x1c)) *
             0x10000 + param_2;
        param_1[1] = param_1[1] + 4;
        return iVar9 + iVar8;
      }
      param_1[1] = (longlong)puVar5;
    }
  }
  *(uint *)param_1[1] = param_2 + 0x10000;
  param_1[1] = param_1[1] + 4;
  return 1;
}



/* ===== 1804e4460 FUN_1804e4460 ===== */

uint FUN_1804e4460(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  short sVar11;
  uint *puVar12;
  uint *puVar13;
  short sVar14;
  ushort uVar15;
  
  uVar2 = *(undefined2 *)(param_1 + 0xbc);
  uVar15 = (short)*(char *)(param_1 + 0xbc) >> 0xf & 0xc80;
  puVar4 = *(uint **)(param_2 + 8);
  puVar1 = (uint *)(param_2 + 0x20);
  uVar3 = *(ushort *)(param_1 + 0xba);
  puVar5 = puVar1;
  puVar6 = puVar1;
  while (puVar5 < puVar4) {
    uVar9 = (uint)uVar3;
    uVar8 = *puVar5;
    puVar12 = puVar5 + 1;
    sVar14 = (short)(uVar8 >> 0x10);
    if (sVar14 == 0) {
      *puVar6 = uVar8;
      puVar5 = puVar12;
      puVar6 = puVar6 + 1;
    }
    else {
      sVar11 = (short)uVar8;
      if (sVar14 == 1) {
        *(undefined2 *)(param_1 + 0xbc) = uVar2;
        *(short *)(param_1 + 0xb8) = sVar11;
        *(ushort *)(param_1 + 0xba) = uVar3;
        uVar8 = FUN_1804a5f70(param_1);
        *puVar6 = uVar8;
        puVar5 = puVar12;
        puVar6 = puVar6 + 1;
      }
      else if (sVar14 == 2) {
        *(ushort *)(param_1 + 0xb8) = (ushort)puVar6[-1];
        *(undefined4 *)(param_1 + 0xba) = 0x5b150ab3;
        uVar8 = FUN_1804d6ae0(param_1,uVar9,uVar8 >> 0x10,0x5b15);
        puVar6[-1] = uVar8;
        puVar5 = puVar12;
      }
      else if (sVar14 == 3) {
        if (*(int *)(param_2 + 0x1c) == 0x15) {
          uVar8 = FUN_1804a6410();
          *puVar6 = uVar8;
          puVar5 = puVar5 + 2;
          puVar6 = puVar6 + 1;
        }
        else {
          uVar8 = FUN_1804a6370(param_1,(longlong)(int)*puVar12);
          *puVar6 = uVar8;
          puVar5 = puVar5 + 2;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        uVar8 = *(uint *)(param_2 + 0x18);
        puVar13 = puVar6 + -1;
        if ((uVar8 & 0xf000) == 0x2000) {
          if (((puVar12 == puVar4) && ((ushort)*puVar13 < 0x8000)) &&
             (uVar9 = *(int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(ushort)*puVar13 * 8) +
                      0x40000000, uVar9 < 0x80000000)) {
            uVar15 = 0;
          }
          else {
            uVar8 = uVar8 + 0x1000;
          }
        }
        uVar7 = puVar6[-2];
        *(ushort *)(param_1 + 0xba) = (ushort)*puVar13;
        *(ushort *)(param_1 + 0xbc) = sVar14 + uVar15;
        *(ushort *)(param_1 + 0xb8) = (ushort)uVar7;
        uVar9 = FUN_1804d6ae0(param_1,uVar9,sVar14 + uVar15,0x5b15);
        puVar6[-2] = uVar9;
        puVar5 = puVar12;
        puVar6 = puVar13;
        if (sVar11 != 0) {
          uVar10 = (ulonglong)*(uint *)(param_1 + 0xba4);
          *(uint *)(param_1 + 0xba4) = *(uint *)(param_1 + 0xba4) + 1 & 0xf;
          *(short *)(param_1 + 0xb24 + uVar10 * 8) = sVar11;
          *(short *)(param_1 + 0xb26 + uVar10 * 8) = (short)uVar9;
          *(uint *)(param_1 + 0xb28 + uVar10 * 8) = uVar8;
        }
      }
    }
  }
  return *puVar1;
}



/* ===== 1804e46b0 FUN_1804e46b0 ===== */

ulonglong FUN_1804e46b0(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  short sVar9;
  
  uVar8 = param_2 & 0xffff;
  lVar3 = *(longlong *)(param_1 + 0x20);
  bVar1 = *(byte *)(lVar3 + 5 + uVar8 * 8);
  sVar9 = (short)param_2;
  if ((bVar1 < 0x35) || ((int)param_3 < (int)(uint)bVar1)) {
    if (((param_4 >> 0xb & 1) != 0) &&
       ((0x605fd9U >> (*(byte *)(lVar3 + 4 + uVar8 * 8) & 0x1f) & 1) == 0)) {
      *(undefined2 *)(param_1 + 0xbc) = 0x5b15;
      *(short *)(param_1 + 0xb8) = sVar9;
      *(short *)(param_1 + 0xba) = (short)param_4;
      uVar6 = FUN_1804d6ae0(param_1);
      param_2 = (ulonglong)uVar6;
    }
  }
  else {
    lVar7 = 0;
    do {
      if (((*(short *)(param_1 + 0xb24 + lVar7 * 8) == sVar9) &&
          (uVar6 = *(uint *)(param_1 + 0xb28 + lVar7 * 8), param_4 <= uVar6)) &&
         (((uVar6 ^ param_4) & 0xfff) == 0)) {
        if (param_1 + 0xb24 + lVar7 * 8 != 0) {
          uVar2 = *(ushort *)(param_1 + 0xb26 + lVar7 * 8);
          return (ulonglong)
                 ((uint)*(byte *)(lVar3 + 4 + (ulonglong)uVar2 * 8) << 0x18 | (uint)uVar2);
        }
        break;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < 0x10);
    uVar5 = *(undefined2 *)(lVar3 + 2 + uVar8 * 8);
    uVar4 = FUN_1804e46b0(param_1,*(undefined2 *)(lVar3 + uVar8 * 8),param_3,param_4);
    uVar5 = FUN_1804e46b0(param_1,uVar5,param_3 & 0xffffffff,param_4);
    *(undefined2 *)(param_1 + 0xb8) = uVar4;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    *(ushort *)(param_1 + 0xbc) = (ushort)bVar1 * 0x100 - 0xc00 | (ushort)(param_4 >> 5) & 0x1f;
    uVar6 = FUN_1804d6ae0(param_1);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0xba4);
    param_2 = (ulonglong)uVar6;
    *(uint *)(param_1 + 0xba4) = *(uint *)(param_1 + 0xba4) + 1 & 0xf;
    *(short *)(param_1 + 0xb24 + uVar8 * 8) = sVar9;
    *(short *)(param_1 + 0xb26 + uVar8 * 8) = (short)uVar6;
    *(uint *)(param_1 + 0xb28 + uVar8 * 8) = param_4;
  }
  return param_2 & 0xffffffff;
}



/* ===== 1804e4840 FUN_1804e4840 ===== */

void FUN_1804e4840(longlong *param_1,uint param_2,int param_3)

{
  undefined2 *puVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  cVar2 = *(char *)(*(longlong *)(lVar3 + 0x20) + 5 + (ulonglong)param_2 * 8);
  puVar1 = (undefined2 *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)param_2 * 8);
  if (((byte)(cVar2 - 0x35U) < 2) ||
     ((cVar2 == '7' && ((*(uint *)(param_1 + 3) & 0xf000) == 0x1000)))) {
    lVar5 = 0;
    do {
      if ((*(short *)(lVar3 + 0xb24 + lVar5 * 8) == (short)param_2) &&
         ((*(uint *)(lVar3 + 0xb28 + lVar5 * 8) & 0xfff) == 0)) {
        if (lVar3 + 0xb24 + lVar5 * 8 != 0) {
          param_2 = (uint)*(ushort *)(lVar3 + 0xb26 + lVar5 * 8);
          goto LAB_1804e4930;
        }
        break;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < 0x10);
    param_3 = param_3 + 1;
    if ((param_3 < 100) && (uVar4 = param_1[1], uVar4 < (ulonglong)param_1[2])) {
      FUN_1804e4840(param_1,*puVar1,param_3);
      if ((ulonglong)param_1[1] < (ulonglong)param_1[2]) {
        FUN_1804e4840(param_1,puVar1[1],param_3);
        if ((int *)param_1[1] < (int *)param_1[2]) {
          *(int *)param_1[1] =
               ((uint)*(byte *)((longlong)puVar1 + 5) * 0x100 - 0xc00 | 0x13) * 0x10000 + param_2;
          param_1[1] = param_1[1] + 4;
          return;
        }
      }
      param_1[1] = uVar4;
    }
  }
LAB_1804e4930:
  *(uint *)param_1[1] = param_2;
  param_1[1] = param_1[1] + 4;
  return;
}



/* ===== 1804e4950 FUN_1804e4950 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1804e4950(undefined8 *param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38 [6];
  
  local_38[4] = DAT_180919500 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)(param_4 + lVar5) != '\0');
  local_48 = param_1;
  FUN_1800133a0(local_38,param_4);
  local_48 = (undefined8 *)CONCAT44(local_48._4_4_,param_2);
  local_40 = param_3;
  FUN_18004d810(param_1,&local_48,local_38);
  puVar4 = auStack_68;
  if ((ulonglong)local_38[3] < 0x10) goto LAB_1804e4a56;
  if (DAT_18058a4b8 != '\0') {
    uVar7 = local_38[3] + 1U + local_38[0];
    uVar8 = local_38[2] + 1 + local_38[0];
    uVar2 = uVar7 + 7 & 0xfffffffffffffff8;
    uVar6 = uVar2;
    if (uVar8 <= uVar2) {
      uVar6 = uVar8;
    }
    if (uVar2 < uVar7) {
      uVar7 = uVar2;
    }
    _guard_check_icall(local_38[0],uVar2,uVar6,uVar7);
  }
  puVar3 = auStack_68;
  puVar4 = auStack_68;
  lVar5 = local_38[0];
  if (local_38[3] + 1U < 0x1000) {
LAB_1804e4a4e:
    puVar4 = puVar3;
  }
  else {
    lVar5 = *(longlong *)(local_38[0] + -8);
    if (0x1f < (local_38[0] - lVar5) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar5 = (*pcVar1)(5);
      puVar3 = auStack_60;
      goto LAB_1804e4a4e;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x1804e4a56;
  thunk_FUN_1803d64e0(lVar5);
LAB_1804e4a56:
  *param_1 = std::system_error::vftable;
  *(undefined8 *)(puVar4 + -8) = 0x1804e4a70;
  return param_1;
}



/* ===== 1804e4a90 FUN_1804e4a90 ===== */

void FUN_1804e4a90(int param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [48];
  
  uVar1 = FUN_180013c80();
  FUN_1804e4950(local_38,*(undefined4 *)(&DAT_180571dc8 + (longlong)param_1 * 4),uVar1,
                (&PTR_s_device_or_resource_busy_180571d90)[param_1]);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_38,&DAT_180915d80);
}



/* ===== 1804e4ae0 FUN_1804e4ae0 ===== */

undefined8 * FUN_1804e4ae0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



/* ===== 1804e4b10 FUN_1804e4b10 ===== */

undefined8 * FUN_1804e4b10(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = std::bad_function_call::vftable;
  return param_1;
}



/* ===== 1804e4b50 FUN_1804e4b50 ===== */

undefined8 * FUN_1804e4b50(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = std::bad_function_call::vftable;
  return param_1;
}



/* ===== 1804e4b70 FUN_1804e4b70 ===== */

undefined8 * FUN_1804e4b70(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = std::length_error::vftable;
  return param_1;
}



/* ===== 1804e4bb0 FUN_1804e4bb0 ===== */

undefined8 * FUN_1804e4bb0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  FUN_1804ef040(&local_18);
  *param_1 = std::length_error::vftable;
  return param_1;
}



/* ===== 1804e4c00 FUN_1804e4c00 ===== */

undefined8 * FUN_1804e4c00(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = std::out_of_range::vftable;
  return param_1;
}



/* ===== 1804e4c40 FUN_1804e4c40 ===== */

undefined8 * FUN_1804e4c40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  FUN_1804ef040(&local_18);
  *param_1 = std::out_of_range::vftable;
  return param_1;
}



/* ===== 1804e4c90 FUN_1804e4c90 ===== */

void FUN_1804e4c90(void)

{
  undefined1 local_28 [40];
  
  FUN_1804e4ae0(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_28,&DAT_180915b00);
}



/* ===== 1804e4cb0 FUN_1804e4cb0 ===== */

void FUN_1804e4cb0(void)

{
  undefined1 local_28 [40];
  
  FUN_1804e4b50(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_28,&DAT_180915c08);
}



/* ===== 1804e4cd0 FUN_1804e4cd0 ===== */

void FUN_1804e4cd0(undefined8 param_1)

{
  undefined1 local_28 [40];
  
  FUN_1804e4bb0(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_28,&DAT_180915b38);
}



/* ===== 1804e4d00 FUN_1804e4d00 ===== */

void FUN_1804e4d00(undefined8 param_1)

{
  undefined1 local_28 [40];
  
  FUN_1804e4c40(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_28,&DAT_180915ba0);
}



/* ===== 1804e4d30 FUN_1804e4d30 ===== */

void FUN_1804e4d30(undefined8 param_1)

{
  undefined1 local_28 [40];
  
  FUN_180371700(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_28,&DAT_180915fd8);
}



/* ===== 1804e4d60 FUN_1804e4d60 ===== */

char * FUN_1804e4d60(void)

{
  return "bad function call";
}



/* ===== 1804e4d70 FUN_1804e4d70 ===== */

undefined8 FUN_1804e4d70(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  DWORD DVar3;
  
  DVar3 = GetCurrentThreadId();
  if ((*param_1 & 0xfffffeff) == 1) {
    if (param_1[0x12] != DVar3) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 4));
      param_1[0x12] = DVar3;
    }
    param_1[0x13] = param_1[0x13] + 1;
    return 0;
  }
  if (param_1[0x12] != DVar3) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 4));
  }
  uVar2 = param_1[0x13];
  uVar1 = uVar2 + 1;
  param_1[0x13] = uVar1;
  if ((int)uVar1 < 2) {
    param_1[0x12] = DVar3;
  }
  else if ((*param_1 & 0x100) == 0) {
    param_1[0x13] = uVar2;
    return 3;
  }
  return 0;
}



/* ===== 1804e4e00 FUN_1804e4e00 ===== */

undefined8 FUN_1804e4e00(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  BOOLEAN BVar3;
  DWORD DVar4;
  
  DVar4 = GetCurrentThreadId();
  if ((*param_1 & 0xfffffeff) == 1) {
    if (param_1[0x12] != DVar4) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 4));
      param_1[0x12] = DVar4;
    }
    param_1[0x13] = param_1[0x13] + 1;
    return 0;
  }
  if ((param_1[0x12] != DVar4) &&
     (BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 4)), BVar3 == '\0')) {
    return 3;
  }
  uVar2 = param_1[0x13];
  uVar1 = uVar2 + 1;
  param_1[0x13] = uVar1;
  if ((int)uVar1 < 2) {
    param_1[0x12] = DVar4;
  }
  else if ((*param_1 & 0x100) == 0) {
    param_1[0x13] = uVar2;
    return 3;
  }
  return 0;
}



/* ===== 1804e4e90 FUN_1804e4e90 ===== */

undefined8 FUN_1804e4e90(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x4c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  }
  return 0;
}



/* ===== 1804e4ec0 FUN_1804e4ec0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD FUN_1804e4ec0(HANDLE param_1,ulonglong *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined1 auStack_68 [32];
  _BY_HANDLE_FILE_INFORMATION local_48;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_68;
  BVar1 = GetFileInformationByHandleEx(param_1,0x12,param_2,0x18);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if ((DVar2 == 0x32) || (DVar2 == 0x57)) {
      BVar1 = GetFileInformationByHandle(param_1,&local_48);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
      }
      else {
        *param_2 = (ulonglong)local_48.dwVolumeSerialNumber;
        *(DWORD *)(param_2 + 1) = local_48.nFileIndexHigh;
        *(DWORD *)((longlong)param_2 + 0xc) = local_48.nFileIndexLow;
        DVar2 = 0;
        param_2[2] = 0;
      }
    }
  }
  else {
    DVar2 = 0;
  }
  return DVar2;
}



/* ===== 1804e4f60 FUN_1804e4f60 ===== */

DWORD FUN_1804e4f60(HANDLE param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  
  local_res18[0] = 3;
  BVar1 = SetFileInformationByHandle(param_1,0x15,local_res18,4);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 1) {
      if (DVar2 == 5) {
        return 5;
      }
      if ((DVar2 != 0x32) && (DVar2 != 0x57)) {
        return DVar2;
      }
    }
    local_res10[0] = 1;
    BVar1 = SetFileInformationByHandle(param_1,FileDispositionInfo,local_res10,1);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      return DVar2;
    }
  }
  return 0;
}



/* ===== 1804e4fe0 FUN_1804e4fe0 ===== */

void FUN_1804e4fe0(HANDLE param_1)

{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffffffffffff) {
    BVar1 = CloseHandle(param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}



/* ===== 1804e5000 FUN_1804e5000 ===== */

ulonglong FUN_1804e5000(void)

{
  BOOL BVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_180520030();
  if ((int)uVar2 == 0xfde9) {
    return uVar2;
  }
  BVar1 = AreFileApisANSI();
  return (ulonglong)(BVar1 == 0);
}



/* ===== 1804e5030 FUN_1804e5030 ===== */

ulonglong FUN_1804e5030(UINT param_1,LPCSTR param_2,int param_3,LPWSTR param_4,int param_5)

{
  uint uVar1;
  DWORD DVar2;
  
  uVar1 = MultiByteToWideChar(param_1,8,param_2,param_3,param_4,param_5);
  if (uVar1 == 0) {
    DVar2 = GetLastError();
    return (ulonglong)DVar2 << 0x20;
  }
  return (ulonglong)uVar1;
}



/* ===== 1804e5080 FUN_1804e5080 ===== */

undefined8 FUN_1804e5080(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  BOOL local_res8 [8];
  int local_48;
  DWORD DStack_44;
  
  if ((param_1 == 0xfde9) || (param_1 == 0xd698)) {
    local_48 = WideCharToMultiByte(param_1,0x80,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   (LPBOOL)0x0);
  }
  else {
    local_res8[0] = 0;
    local_48 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   local_res8);
    if (local_res8[0] != 0) {
      return 0x45900000000;
    }
  }
  if (local_48 == 0) {
    DStack_44 = GetLastError();
    if (DStack_44 != 0x3ec) goto LAB_1804e5181;
    local_48 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_48 == 0) {
      DStack_44 = GetLastError();
      goto LAB_1804e5181;
    }
  }
  DStack_44 = 0;
LAB_1804e5181:
  return CONCAT44(DStack_44,local_48);
}



/* ===== 1804e51a0 FUN_1804e51a0 ===== */

undefined8 FUN_1804e51a0(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  int local_48;
  DWORD DStack_44;
  
  local_48 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                 (LPBOOL)0x0);
  if (local_48 == 0) {
    DStack_44 = GetLastError();
    if (DStack_44 != 0x3ec) goto LAB_1804e523e;
    local_48 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_48 == 0) {
      DStack_44 = GetLastError();
      goto LAB_1804e523e;
    }
  }
  DStack_44 = 0;
LAB_1804e523e:
  return CONCAT44(DStack_44,local_48);
}



/* ===== 1804e5250 FUN_1804e5250 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804e5250(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  DWORD DVar3;
  BOOL BVar4;
  int iVar5;
  HANDLE hFile;
  HANDLE hFile_00;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  bool local_c8;
  undefined2 uStack_c7;
  undefined1 uStack_c5;
  uint uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  longlong local_70;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_f8;
  param_3 = param_3 & 0xf;
  if (param_3 == 2) {
LAB_1804e54ca:
    local_a8 = 0;
    local_c0 = 0x20;
    local_b8 = 0;
    uStack_b0 = 0;
    uVar2 = CopyFile2(param_1,param_2,&local_c0);
    local_c8 = (bool)((byte)(uVar2 >> 0x1f) ^ 1);
    uStack_c4 = 0;
    if ((int)uVar2 < 0) {
      uStack_c4 = uVar2 & 0xffff;
    }
    goto LAB_1804e5517;
  }
  local_a8 = 0;
  local_c0 = 0x100000020;
  local_b8 = 0;
  uStack_b0 = 0;
  uVar2 = CopyFile2(0,param_2,&local_c0);
  if ((int)uVar2 < 0) {
    uStack_c4 = uVar2 & 0xffff;
  }
  else {
    uStack_c4 = 0;
  }
  local_c8 = (int)uVar2 >= 0;
  uVar1 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
  if (uStack_c4 != 0x50) {
    return uVar1;
  }
  if (param_3 == 0) {
    return uVar1;
  }
  local_98 = 0;
  local_d8 = &local_a0;
  local_a0 = 0x20;
  uVar6 = 3;
  if (param_3 != 1) {
    uVar6 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  hFile = (HANDLE)CreateFile2(param_1,0x80,uVar6,3);
  if ((hFile == (HANDLE)0xffffffffffffffff) && (DVar3 = GetLastError(), DVar3 != 0)) {
    local_c8 = false;
    uStack_c4 = DVar3;
    goto LAB_1804e5517;
  }
  local_b8 = 0;
  local_d8 = &local_c0;
  local_c0 = 0x20;
  uStack_b0 = 0;
  local_a8 = 0;
  hFile_00 = (HANDLE)CreateFile2(param_2,0x80,uVar6,3);
  if ((hFile_00 == (HANDLE)0xffffffffffffffff) && (DVar3 = GetLastError(), DVar3 != 0)) {
    if ((hFile == (HANDLE)0xffffffffffffffff) || (BVar4 = CloseHandle(hFile), BVar4 != 0)) {
      local_c8 = false;
      uStack_c4 = DVar3;
      goto LAB_1804e5517;
    }
    goto LAB_1804e563b;
  }
  if (param_3 == 4) {
    BVar4 = GetFileInformationByHandleEx(hFile,FileBasicInfo,local_80,0x28);
    if (BVar4 != 0) {
      lVar7 = local_70;
LAB_1804e5464:
      BVar4 = GetFileInformationByHandleEx(hFile_00,FileBasicInfo,local_80,0x28);
      if (BVar4 == 0) {
        DVar3 = GetLastError();
        if (DVar3 != 0) goto LAB_1804e5417;
        local_70 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
      }
      if (local_70 < lVar7) {
        if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar4 = CloseHandle(hFile_00), BVar4 == 0)
            ) || ((hFile != (HANDLE)0xffffffffffffffff && (BVar4 = CloseHandle(hFile), BVar4 == 0)))
           ) goto LAB_1804e563b;
        goto LAB_1804e54ca;
      }
      goto LAB_1804e5542;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0) {
      lVar7 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
      goto LAB_1804e5464;
    }
LAB_1804e5417:
    if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar4 = CloseHandle(hFile_00), BVar4 == 0)) ||
       ((hFile != (HANDLE)0xffffffffffffffff && (BVar4 = CloseHandle(hFile), BVar4 == 0)))) {
LAB_1804e563b:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
LAB_1804e5542:
    DVar3 = FUN_1804e4ec0(hFile,local_80);
    if ((DVar3 == 0) && (DVar3 = FUN_1804e4ec0(hFile_00,local_58), DVar3 == 0)) {
      iVar5 = memcmp(local_80,local_58,0x18);
      if (iVar5 == 0) {
        if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar4 = CloseHandle(hFile_00), BVar4 == 0)
            ) || ((hFile != (HANDLE)0xffffffffffffffff && (BVar4 = CloseHandle(hFile), BVar4 == 0)))
           ) goto LAB_1804e5641;
        local_c8 = false;
        uStack_c4 = 0x20;
      }
      else {
        if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar4 = CloseHandle(hFile_00), BVar4 == 0)
            ) || ((hFile != (HANDLE)0xffffffffffffffff && (BVar4 = CloseHandle(hFile), BVar4 == 0)))
           ) {
LAB_1804e5641:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        local_c8 = false;
        uStack_c4 = 0;
      }
      goto LAB_1804e5517;
    }
    if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar4 = CloseHandle(hFile_00), BVar4 == 0)) ||
       ((hFile != (HANDLE)0xffffffffffffffff && (BVar4 = CloseHandle(hFile), BVar4 == 0))))
    goto LAB_1804e5641;
  }
  local_c8 = false;
  uStack_c4 = DVar3;
LAB_1804e5517:
  return CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
}



/* ===== 1804e5650 FUN_1804e5650 ===== */

ulonglong FUN_1804e5650(LPCWSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint local_res10;
  undefined1 local_28 [16];
  byte local_18;
  
  BVar1 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 != 0) {
    local_res10 = CONCAT31(local_res10._1_3_,1);
    return (ulonglong)local_res10;
  }
  DVar2 = GetLastError();
  if (DVar2 == 0xb7) {
    DVar2 = FUN_1804e5830(param_1,local_28,3,0xffffffff);
    if ((DVar2 == 0) && ((local_18 & 0x10) == 0)) {
      DVar2 = 0xb7;
    }
  }
  return (ulonglong)CONCAT43(DVar2,local_res10._1_3_) << 8;
}



/* ===== 1804e56d0 FUN_1804e56d0 ===== */

DWORD FUN_1804e56d0(HANDLE param_1,LPWIN32_FIND_DATAW param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = FindNextFileW(param_1,param_2);
  if (BVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001804e56e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar2 = GetLastError();
    return DVar2;
  }
  return 0;
}



/* ===== 1804e56f0 FUN_1804e56f0 ===== */

void FUN_1804e56f0(HANDLE param_1)

{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffffffffffff) {
    BVar1 = FindClose(param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}



/* ===== 1804e5710 FUN_1804e5710 ===== */

DWORD FUN_1804e5710(LPCWSTR param_1,undefined8 *param_2,LPVOID param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  
  if ((HANDLE)*param_2 != (HANDLE)0xffffffffffffffff) {
    BVar1 = FindClose((HANDLE)*param_2);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  pvVar3 = FindFirstFileExW(param_1,FindExInfoBasic,param_3,FindExSearchNameMatch,(LPVOID)0x0,0);
  *param_2 = pvVar3;
  if (pvVar3 == (HANDLE)0xffffffffffffffff) {
                    /* WARNING: Could not recover jumptable at 0x0001804e5784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar2 = GetLastError();
    return DVar2;
  }
  return 0;
}



/* ===== 1804e57a0 FUN_1804e57a0 ===== */

ulonglong FUN_1804e57a0(DWORD param_1,LPWSTR param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar1 = GetCurrentDirectoryW(param_1,param_2);
  if ((DVar1 == 0) || (param_1 < DVar1)) {
    DVar2 = GetLastError();
    return CONCAT44(DVar2,DVar1);
  }
  return (ulonglong)DVar1;
}



/* ===== 1804e57f0 FUN_1804e57f0 ===== */

ulonglong FUN_1804e57f0(HANDLE param_1,LPWSTR param_2,DWORD param_3,DWORD param_4)

{
  DWORD DVar1;
  
  DVar1 = GetFinalPathNameByHandleW(param_1,param_2,param_3,param_4);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    return (ulonglong)DVar1 << 0x20;
  }
  return (ulonglong)DVar1;
}



/* ===== 1804e5830 FUN_1804e5830 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD FUN_1804e5830(LPCWSTR param_1,ulonglong *param_2,uint param_3,uint param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  uint local_2a0 [2];
  ulonglong local_298;
  undefined4 local_290;
  uint local_28c;
  DWORD DStack_288;
  DWORD local_284;
  uint local_280;
  _WIN32_FIND_DATAW local_278;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_2c8;
  uVar4 = param_3 & 0xfffffffe;
  if (((param_3 & 1) != 0) && ((param_3 & 4) != 0)) {
    return 0x57;
  }
  if ((((param_3 & 2) != 0) && (param_4 != 0xffffffff)) &&
     (((param_4 >> 10 & 1) == 0 || ((param_3 & 1) == 0)))) {
    uVar4 = param_3 & 0xfffffffc;
    *(uint *)(param_2 + 2) = param_4;
  }
  if (uVar4 == 0) {
    return 0;
  }
  if (((uVar4 & 0x2a) != 0) &&
     (((param_4 == 0xffffffff || ((param_4 >> 10 & 1) == 0)) || ((param_3 & 1) == 0)))) {
    BVar1 = GetFileAttributesExW(param_1,GetFileExInfoStandard,local_2a0);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 != 0x20) {
        return DVar2;
      }
      pvVar3 = FindFirstFileW(param_1,&local_278);
      if (pvVar3 == (HANDLE)0xffffffffffffffff) {
        DVar2 = GetLastError();
        return DVar2;
      }
      FindClose(pvVar3);
      local_28c = local_278.ftLastWriteTime.dwLowDateTime;
      DStack_288 = local_278.ftLastWriteTime.dwHighDateTime;
    }
    else {
      local_278.ftLastWriteTime.dwHighDateTime = DStack_288;
      local_278.ftLastWriteTime.dwLowDateTime = local_28c;
      local_278.dwFileAttributes = local_2a0[0];
      local_278.nFileSizeLow = local_280;
      local_278.nFileSizeHigh = local_284;
    }
    if (((param_3 & 1) == 0) || ((local_278.dwFileAttributes & 0x400) == 0)) {
      *(DWORD *)(param_2 + 2) = local_278.dwFileAttributes;
      param_2[1] = CONCAT44(local_278.nFileSizeHigh,local_278.nFileSizeLow);
      *param_2 = (ulonglong)local_278.ftLastWriteTime & 0xffffffff00000000 | (ulonglong)local_28c;
      uVar5 = uVar4 & 0xffffffd5;
      if (((local_278.dwFileAttributes & 0x400) == 0) && ((uVar4 & 4) != 0)) {
        *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        uVar5 = uVar4 & 0xffffffd1;
      }
      uVar4 = uVar5;
      if (uVar4 == 0) {
        return 0;
      }
    }
  }
  DVar2 = FUN_1804e5b70(&local_2a8,param_1,0x80,(((byte)param_3 & 1 ^ 1) + 0x10) * 0x200000);
  if (DVar2 == 0) {
    pvVar3 = (HANDLE)CONCAT44(uStack_2a4,local_2a8);
    uVar5 = uVar4;
    if ((uVar4 & 0x26) != 0) {
      BVar1 = GetFileInformationByHandleEx(pvVar3,FileBasicInfo,local_2a0,0x28);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        if (pvVar3 == (HANDLE)0xffffffffffffffff) {
          return DVar2;
        }
        BVar1 = CloseHandle(pvVar3);
        if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        return DVar2;
      }
      uVar5 = uVar4 & 0xffffffdd;
      *(uint *)(param_2 + 2) = local_280;
      *param_2 = CONCAT44(local_28c,local_290);
      if ((uVar4 & 4) != 0) {
        if ((local_280 >> 10 & 1) == 0) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        }
        else {
          BVar1 = GetFileInformationByHandleEx(pvVar3,FileAttributeTagInfo,&local_2a8,8);
          if (BVar1 == 0) {
            DVar2 = GetLastError();
            if (pvVar3 == (HANDLE)0xffffffffffffffff) {
              return DVar2;
            }
            BVar1 = CloseHandle(pvVar3);
            if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            return DVar2;
          }
          *(undefined4 *)((longlong)param_2 + 0x14) = uStack_2a4;
        }
        uVar5 = uVar4 & 0xffffffd9;
      }
    }
    if ((uVar5 & 0x18) != 0) {
      BVar1 = GetFileInformationByHandleEx(pvVar3,FileStandardInfo,local_2a0,0x18);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        if ((pvVar3 != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(pvVar3), BVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        return DVar2;
      }
      uVar5 = uVar5 & 0xffffffe7;
      param_2[1] = local_298;
      *(undefined4 *)(param_2 + 3) = local_290;
    }
    if (uVar5 == 0) {
      if (pvVar3 == (HANDLE)0xffffffffffffffff) {
        return 0;
      }
      BVar1 = CloseHandle(pvVar3);
      if (BVar1 != 0) {
        return 0;
      }
    }
    else if ((pvVar3 == (HANDLE)0xffffffffffffffff) || (BVar1 = CloseHandle(pvVar3), BVar1 != 0)) {
      return 0x32;
    }
  }
  else if (((HANDLE)CONCAT44(uStack_2a4,local_2a8) == (HANDLE)0xffffffffffffffff) ||
          (BVar1 = CloseHandle((HANDLE)CONCAT44(uStack_2a4,local_2a8)), BVar1 != 0)) {
    return DVar2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 1804e5b70 FUN_1804e5b70 ===== */

DWORD FUN_1804e5b70(longlong *param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  DWORD DVar1;
  longlong lVar2;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_24 = param_4 & 0xffff;
  local_20 = param_4 & 0xffff0000;
  local_1c = 0;
  local_28 = 0x20;
  local_18 = 0;
  uStack_10 = 0;
  lVar2 = CreateFile2(param_2,param_3,7,3,&local_28);
  *param_1 = lVar2;
  if (lVar2 == -1) {
                    /* WARNING: Could not recover jumptable at 0x0001804e5be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar1 = GetLastError();
    return DVar1;
  }
  return 0;
}



/* ===== 1804e5bf0 FUN_1804e5bf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804e5bf0(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  HANDLE pvVar6;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_58;
  undefined2 uStack_57;
  undefined1 uStack_55;
  uint uStack_54;
  undefined1 local_50;
  undefined2 uStack_4f;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_88;
  uVar2 = FUN_1804e5b70(&local_50,param_1,0x10180,0x2200000);
  if (uVar2 == 0) {
    pvVar6 = (HANDLE)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,local_50)));
    bVar1 = true;
LAB_1804e5c3e:
    local_58 = 0x13;
    uStack_57 = 0;
    uStack_55 = 0;
    BVar3 = SetFileInformationByHandle(pvVar6,0x15,&local_58,4);
    if (BVar3 != 0) {
LAB_1804e5c65:
      if ((pvVar6 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(pvVar6), BVar3 == 0)) {
LAB_1804e5f13:
                    /* WARNING: Subroutine does not return */
        abort();
      }
LAB_1804e5c7c:
      local_58 = 1;
      uStack_54 = 0;
      goto LAB_1804e5edf;
    }
    DVar4 = GetLastError();
    if (((DVar4 != 1) && (DVar4 != 0x32)) && (DVar4 != 0x57)) {
LAB_1804e5d1f:
      if ((pvVar6 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(pvVar6), BVar3 == 0))
      goto LAB_1804e5f13;
      uStack_54 = DVar4;
      goto LAB_1804e5edb;
    }
    DVar4 = FUN_1804e4f60(pvVar6);
    if (DVar4 == 0) goto LAB_1804e5c65;
    if ((DVar4 != 5) || (!bVar1)) goto LAB_1804e5d1f;
    BVar3 = GetFileInformationByHandleEx(pvVar6,FileBasicInfo,&local_48,0x28);
    if (BVar3 != 0) {
      if ((local_28 & 1) == 0) {
        if (pvVar6 != (HANDLE)0xffffffffffffffff) {
          iVar5 = CloseHandle(pvVar6);
joined_r0x0001804e5e92:
          if (iVar5 == 0) goto LAB_1804e5f19;
        }
LAB_1804e5e41:
        uStack_54 = 5;
        goto LAB_1804e5edb;
      }
      local_28 = local_28 ^ 1;
      BVar3 = SetFileInformationByHandle(pvVar6,FileBasicInfo,&local_48,0x28);
      if (BVar3 == 0) goto LAB_1804e5d73;
      iVar5 = FUN_1804e4f60(pvVar6);
      if (iVar5 != 0) {
        if (iVar5 == 5) {
          local_28 = local_28 | 1;
          BVar3 = SetFileInformationByHandle(pvVar6,FileBasicInfo,&local_48,0x28);
          if (BVar3 != 0) {
            if (pvVar6 != (HANDLE)0xffffffffffffffff) {
              iVar5 = CloseHandle(pvVar6);
              goto joined_r0x0001804e5e92;
            }
            goto LAB_1804e5e41;
          }
          goto LAB_1804e5d73;
        }
        uStack_54 = GetLastError();
        if (pvVar6 == (HANDLE)0xffffffffffffffff) goto LAB_1804e5d92;
        BVar3 = CloseHandle(pvVar6);
        if (BVar3 == 0) goto LAB_1804e5f13;
        uStack_57 = uStack_4f;
        local_58 = 0;
        goto LAB_1804e5ee7;
      }
      if (pvVar6 == (HANDLE)0xffffffffffffffff) goto LAB_1804e5c7c;
      BVar3 = CloseHandle(pvVar6);
      if (BVar3 == 0) goto LAB_1804e5f19;
      local_58 = 1;
      uStack_54 = 0;
      goto LAB_1804e5edf;
    }
LAB_1804e5d73:
    uStack_54 = GetLastError();
    if ((pvVar6 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(pvVar6), BVar3 == 0)) {
LAB_1804e5f19:
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_1804e5d92:
    uStack_57 = uStack_4f;
    local_58 = 0;
  }
  else {
    if (uVar2 == 5) {
      local_40 = 0x2200000;
      local_68 = &local_48;
      local_48 = 0x20;
      bVar1 = false;
      local_38 = 0;
      uStack_30 = 0;
      pvVar6 = (HANDLE)CreateFile2(param_1,0x10000,7,3);
      if ((pvVar6 == (HANDLE)0xffffffffffffffff) && (uStack_54 = GetLastError(), uStack_54 != 0)) {
        uStack_57 = uStack_4f;
        uStack_55 = uStack_4d;
        local_58 = 0;
        goto LAB_1804e5eee;
      }
      goto LAB_1804e5c3e;
    }
    if (uVar2 < 0x41) {
      if (((uVar2 == 0x40) || (uVar2 == 2)) || ((uVar2 == 3 || (uVar2 == 0x35)))) {
LAB_1804e5ec1:
        uVar2 = 0;
      }
    }
    else if (((uVar2 == 0x7b) || (uVar2 == 0xa1)) || (uVar2 == 0x10b)) goto LAB_1804e5ec1;
    pvVar6 = (HANDLE)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,local_50)));
    if ((pvVar6 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(pvVar6), BVar3 == 0))
    goto LAB_1804e5f13;
    uStack_54 = uVar2;
LAB_1804e5edb:
    local_58 = 0;
LAB_1804e5edf:
    uStack_57 = uStack_4f;
  }
LAB_1804e5ee7:
  uStack_55 = uStack_4d;
LAB_1804e5eee:
  return CONCAT44(uStack_54,CONCAT13(uStack_55,CONCAT21(uStack_57,local_58)));
}



/* ===== 1804e5f20 FUN_1804e5f20 ===== */

DWORD FUN_1804e5f20(LPCWSTR param_1,LPCWSTR param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = MoveFileExW(param_1,param_2,3);
  if (BVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001804e5f3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar2 = GetLastError();
    return DVar2;
  }
  return 0;
}



/* ===== 1804e5f50 FUN_1804e5f50 ===== */

DWORD FUN_1804e5f50(FILETIME param_1,undefined8 param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  HANDLE hFile;
  FILETIME local_res8;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_20 = 0x2000000;
  local_28 = 0x20;
  local_18 = 0;
  uStack_10 = 0;
  local_res8 = param_1;
  hFile = (HANDLE)CreateFile2(param_2,0x100,7,3,&local_28);
  if ((hFile == (HANDLE)0xffffffffffffffff) && (DVar1 = GetLastError(), DVar1 != 0)) {
    return DVar1;
  }
  BVar2 = SetFileTime(hFile,(FILETIME *)0x0,(FILETIME *)0x0,&local_res8);
  if (BVar2 == 0) {
    DVar1 = GetLastError();
    if ((hFile == (HANDLE)0xffffffffffffffff) || (BVar2 = CloseHandle(hFile), BVar2 != 0)) {
      return DVar1;
    }
  }
  else if ((hFile == (HANDLE)0xffffffffffffffff) || (BVar2 = CloseHandle(hFile), BVar2 != 0)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 1804e6020 FUN_1804e6020 ===== */

void FUN_1804e6020(DWORD param_1,longlong *param_2)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  int iVar4;
  DWORD local_res18 [4];
  
  local_res18[0] = 0;
  DVar2 = 0;
  iVar4 = 0;
  do {
    if (DVar2 != 0) break;
    if (iVar4 == 0) {
      local_res18[0] = 0x409;
LAB_1804e608f:
      DVar2 = FormatMessageA(0x1300,(LPCVOID)0x0,param_1,local_res18[0],(LPSTR)param_2,0,
                             (va_list *)0x0);
    }
    else {
      if (iVar4 != 1) {
        local_res18[0] = 0;
        goto LAB_1804e608f;
      }
      iVar1 = GetLocaleInfoEx(L"!x-sys-default-locale",0x20000001,(LPWSTR)local_res18,2);
      if (iVar1 != 0) goto LAB_1804e608f;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  uVar3 = (ulonglong)DVar2;
  if (DVar2 != 0) {
    do {
      if ((&DAT_180571ff0)[*(byte *)(*param_2 + -1 + uVar3)] == '\0') {
        return;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



/* ===== 1804e6100 KERNEL32.DLL::LocalFree ===== */

HLOCAL __stdcall LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001804e6100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}



/* ===== 1804e6110 FUN_1804e6110 ===== */

undefined1 (*) [32] FUN_1804e6110(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [16];
  ushort uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  undefined1 *puVar11;
  undefined1 auVar12 [16];
  
  if (param_1 != param_2) {
    puVar11 = (undefined1 *)((longlong)param_2 + (-4 - (longlong)param_1));
    if ((((ulonglong)puVar11 & 0xffffffffffffffe0) != 0) && ((DAT_1809194cc & 0x20) != 0)) {
      pauVar10 = param_1;
      do {
        pauVar9 = pauVar10;
        auVar3 = vpcmpeqd_avx2(*pauVar9,*(undefined1 (*) [32])(*pauVar9 + 4));
        uVar6 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
        if (uVar6 != 0) {
          uVar7 = 0;
          for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          return (undefined1 (*) [32])(*pauVar9 + uVar7);
        }
        pauVar10 = pauVar9 + 1;
      } while (pauVar10 !=
               (undefined1 (*) [32])(*param_1 + ((ulonglong)puVar11 & 0xffffffffffffffe0)));
      if (((ulonglong)puVar11 & 0x1c) != 0) {
        auVar3 = *(undefined1 (*) [32])(&DAT_180574630 + -(ulonglong)((uint)puVar11 & 0x1c));
        auVar4 = vpmaskmovd_avx2(auVar3,*pauVar10);
        auVar5 = vpmaskmovd_avx2(auVar3,*(undefined1 (*) [32])(pauVar9[1] + 4));
        auVar4 = vpcmpeqd_avx2(auVar5,auVar4);
        auVar3 = vpand_avx2(auVar4,auVar3);
        uVar6 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
        if (uVar6 != 0) {
          uVar7 = 0;
          for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          return (undefined1 (*) [32])(*pauVar10 + uVar7);
        }
      }
      return param_2;
    }
    pauVar10 = param_1;
    if ((((ulonglong)puVar11 & 0xfffffffffffffff0) != 0) && ((DAT_1809194cc & 4) != 0)) {
      puVar8 = *param_1;
      do {
        auVar1 = *(undefined1 (*) [16])*param_1;
        auVar12._0_4_ = -(uint)(*(int *)(*param_1 + 4) == auVar1._0_4_);
        auVar12._4_4_ = -(uint)(*(int *)(*param_1 + 8) == auVar1._4_4_);
        auVar12._8_4_ = -(uint)(*(int *)(*param_1 + 0xc) == auVar1._8_4_);
        auVar12._12_4_ = -(uint)(*(int *)(*param_1 + 0x10) == auVar1._12_4_);
        uVar2 = (ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                (ushort)((byte)(auVar12._12_4_ >> 7) & 1) << 0xc |
                (ushort)((byte)(auVar12._12_4_ >> 0xf) & 1) << 0xd |
                (ushort)((byte)(auVar12._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar12._12_4_ >> 0x1f) << 0xf;
        if (uVar2 != 0) {
          uVar6 = 0;
          if (uVar2 != 0) {
            for (; (uVar2 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar6);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
        pauVar10 = param_1;
      } while (param_1 != (undefined1 (*) [32])(puVar8 + ((ulonglong)puVar11 & 0xfffffffffffffff0)))
      ;
    }
    while (pauVar10 = (undefined1 (*) [32])(*pauVar10 + 4), pauVar10 != param_2) {
      if (*(int *)*param_1 == *(int *)*pauVar10) {
        return param_1;
      }
      param_1 = (undefined1 (*) [32])(*param_1 + 4);
    }
  }
  return param_2;
}



/* ===== 1804e6210 FUN_1804e6210 ===== */

longlong FUN_1804e6210(longlong param_1,longlong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char local_140 [280];
  
  if ((DAT_1809194cc & 4) == 0) {
    FUN_180540170(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    lVar3 = 0;
    if (param_2 == 0) {
      return -1;
    }
    while (local_140[*(byte *)(param_1 + lVar3)] != '\0') {
      lVar3 = lVar3 + 1;
      if (lVar3 == param_2) {
        return -1;
      }
    }
  }
  else {
    iVar2 = FUN_1804e8d80(param_2,param_4,
                          CONCAT31((uint3)(DAT_1809194cc >> 0xd),(char)(DAT_1809194cc >> 5)) &
                          0xffffff01);
    if (iVar2 == 2) {
      lVar3 = FUN_1804e7590(param_1,param_2,param_3);
      return lVar3;
    }
    if (iVar2 == 1) {
      FUN_180540170(local_140,0,0x100);
      pbVar1 = param_3 + param_4;
      for (; param_3 != pbVar1; param_3 = param_3 + 1) {
        local_140[*param_3] = '\x01';
      }
      lVar3 = 0;
      if (param_2 == 0) {
        return -1;
      }
      do {
        if (local_140[*(byte *)(param_1 + lVar3)] == '\0') {
          return lVar3;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != param_2);
      return -1;
    }
    lVar4 = FUN_1804e7e50(param_1,param_2,param_3);
    lVar3 = -1;
    if (lVar4 != param_2 + param_1) {
      lVar3 = lVar4 - param_1;
    }
  }
  return lVar3;
}



/* ===== 1804e6380 FUN_1804e6380 ===== */

longlong FUN_1804e6380(longlong param_1,longlong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char local_140 [280];
  
  if ((DAT_1809194cc & 4) == 0) {
    FUN_180540170(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    lVar3 = 0;
    if (param_2 == 0) {
      return -1;
    }
    while (local_140[*(byte *)(param_1 + lVar3)] == '\0') {
      lVar3 = lVar3 + 1;
      if (lVar3 == param_2) {
        return -1;
      }
    }
  }
  else {
    iVar2 = FUN_1804e8d80(param_2,param_4,
                          CONCAT31((uint3)(DAT_1809194cc >> 0xd),(char)(DAT_1809194cc >> 5)) &
                          0xffffff01);
    if (iVar2 == 2) {
      lVar3 = FUN_1804e77c0(param_1,param_2,param_3);
      return lVar3;
    }
    if (iVar2 == 1) {
      FUN_180540170(local_140,0,0x100);
      pbVar1 = param_3 + param_4;
      for (; param_3 != pbVar1; param_3 = param_3 + 1) {
        local_140[*param_3] = '\x01';
      }
      lVar3 = 0;
      if (param_2 == 0) {
        return -1;
      }
      do {
        if (local_140[*(byte *)(param_1 + lVar3)] != '\0') {
          return lVar3;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != param_2);
      return -1;
    }
    lVar4 = FUN_1804e8070(param_1,param_2,param_3);
    lVar3 = -1;
    if (lVar4 != param_2 + param_1) {
      lVar3 = lVar4 - param_1;
    }
  }
  return lVar3;
}



/* ===== 1804e64f0 FUN_1804e64f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [32]
FUN_1804e64f0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],
             ulonglong param_4)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  uint uVar10;
  int iVar11;
  undefined1 (*pauVar12) [32];
  longlong lVar13;
  uint uVar14;
  undefined1 uVar15;
  undefined1 auStack_128 [40];
  ulonglong local_100;
  undefined1 (*local_f8) [32];
  undefined1 (*local_f0) [32];
  undefined1 (*local_e8) [32];
  undefined1 local_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_128;
  lVar13 = (longlong)param_2 - (longlong)param_1;
  local_100 = lVar13;
  local_f8 = param_1;
  local_f0 = param_2;
  if (param_4 < 0x21) {
    lVar13 = -param_4;
    uVar4 = *(undefined8 *)*(undefined1 (*) [32])(&DAT_180574630 + lVar13);
    uVar5 = *(undefined8 *)(&UNK_180574638 + lVar13);
    uVar6 = *(undefined8 *)(&UNK_180574640 + lVar13);
    uVar7 = *(undefined8 *)(&UNK_180574648 + lVar13);
    local_e0 = (undefined1)uVar4;
    uStack_df = (undefined1)((ulonglong)uVar4 >> 8);
    uStack_de = (undefined1)((ulonglong)uVar4 >> 0x10);
    uStack_dd = (undefined1)((ulonglong)uVar4 >> 0x18);
    uStack_dc = (undefined1)((ulonglong)uVar4 >> 0x20);
    uStack_db = (undefined1)((ulonglong)uVar4 >> 0x28);
    uStack_da = (undefined1)((ulonglong)uVar4 >> 0x30);
    uStack_d9 = (undefined1)((ulonglong)uVar4 >> 0x38);
    uStack_d8 = (undefined1)uVar5;
    uStack_d7 = (undefined1)((ulonglong)uVar5 >> 8);
    uStack_d6 = (undefined1)((ulonglong)uVar5 >> 0x10);
    uStack_d5 = (undefined1)((ulonglong)uVar5 >> 0x18);
    uStack_d4 = (undefined1)((ulonglong)uVar5 >> 0x20);
    uStack_d3 = (undefined1)((ulonglong)uVar5 >> 0x28);
    uStack_d2 = (undefined1)((ulonglong)uVar5 >> 0x30);
    uStack_d1 = (undefined1)((ulonglong)uVar5 >> 0x38);
    uStack_d0 = (undefined1)uVar6;
    uStack_cf = (undefined1)((ulonglong)uVar6 >> 8);
    uStack_ce = (undefined1)((ulonglong)uVar6 >> 0x10);
    uStack_cd = (undefined1)((ulonglong)uVar6 >> 0x18);
    uStack_cc = (undefined1)((ulonglong)uVar6 >> 0x20);
    uStack_cb = (undefined1)((ulonglong)uVar6 >> 0x28);
    uStack_ca = (undefined1)((ulonglong)uVar6 >> 0x30);
    uStack_c9 = (undefined1)((ulonglong)uVar6 >> 0x38);
    uStack_c8 = (undefined1)uVar7;
    uStack_c7 = (undefined1)((ulonglong)uVar7 >> 8);
    uStack_c6 = (undefined1)((ulonglong)uVar7 >> 0x10);
    uStack_c5 = (undefined1)((ulonglong)uVar7 >> 0x18);
    uStack_c4 = (undefined1)((ulonglong)uVar7 >> 0x20);
    uStack_c3 = (undefined1)((ulonglong)uVar7 >> 0x28);
    uStack_c2 = (undefined1)((ulonglong)uVar7 >> 0x30);
    uStack_c1 = (undefined1)((ulonglong)uVar7 >> 0x38);
    FUN_180540530(local_a0,param_3,param_4);
    uVar15 = local_a0[0];
    local_c0[1] = uVar15;
    local_c0[0] = uVar15;
    local_c0[2] = uVar15;
    local_c0[3] = uVar15;
    local_c0[4] = uVar15;
    local_c0[5] = uVar15;
    local_c0[6] = uVar15;
    local_c0[7] = uVar15;
    local_c0[8] = uVar15;
    local_c0[9] = uVar15;
    local_c0[10] = uVar15;
    local_c0[0xb] = uVar15;
    local_c0[0xc] = uVar15;
    local_c0[0xd] = uVar15;
    local_c0[0xe] = uVar15;
    local_c0[0xf] = uVar15;
    local_c0[0x10] = uVar15;
    local_c0[0x11] = uVar15;
    local_c0[0x12] = uVar15;
    local_c0[0x13] = uVar15;
    local_c0[0x14] = uVar15;
    local_c0[0x15] = uVar15;
    local_c0[0x16] = uVar15;
    local_c0[0x17] = uVar15;
    local_c0[0x18] = uVar15;
    local_c0[0x19] = uVar15;
    local_c0[0x1a] = uVar15;
    local_c0[0x1b] = uVar15;
    local_c0[0x1c] = uVar15;
    local_c0[0x1d] = uVar15;
    local_c0[0x1e] = uVar15;
    local_c0[0x1f] = uVar15;
    auVar3 = vpcmpeqb_avx2(local_c0,local_f0[-1]);
    pauVar12 = local_f0 + -1;
    uVar14 = ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f
             ) & (1 << (0x21U - (char)param_4 & 0x1f)) - 1U;
    if (uVar14 == 0) {
      auVar2[1] = uStack_df;
      auVar2[0] = local_e0;
      auVar2[2] = uStack_de;
      auVar2[3] = uStack_dd;
      auVar2[4] = uStack_dc;
      auVar2[5] = uStack_db;
      auVar2[6] = uStack_da;
      auVar2[7] = uStack_d9;
      auVar2[8] = uStack_d8;
      auVar2[9] = uStack_d7;
      auVar2[10] = uStack_d6;
      auVar2[0xb] = uStack_d5;
      auVar2[0xc] = uStack_d4;
      auVar2[0xd] = uStack_d3;
      auVar2[0xe] = uStack_d2;
      auVar2[0xf] = uStack_d1;
      auVar2[0x10] = uStack_d0;
      auVar2[0x11] = uStack_cf;
      auVar2[0x12] = uStack_ce;
      auVar2[0x13] = uStack_cd;
      auVar2[0x14] = uStack_cc;
      auVar2[0x15] = uStack_cb;
      auVar2[0x16] = uStack_ca;
      auVar2[0x17] = uStack_c9;
      auVar2[0x18] = uStack_c8;
      auVar2[0x19] = uStack_c7;
      auVar2[0x1a] = uStack_c6;
      auVar2[0x1b] = uStack_c5;
      auVar2[0x1c] = uStack_c4;
      auVar2[0x1d] = uStack_c3;
      auVar2[0x1e] = uStack_c2;
      auVar2[0x1f] = uStack_c1;
    }
    else {
      do {
        pauVar1 = (undefined1 (*) [32])(*pauVar12 + (0x1fU - LZCOUNT(uVar14)));
        FUN_180540530(local_80,pauVar1,(longlong)local_f0 - (longlong)pauVar1);
        auVar2 = *(undefined1 (*) [32])(&DAT_180574630 + lVar13);
        if ((auVar2 & (local_a0 ^ local_80)) == (undefined1  [32])0x0) {
          return pauVar1;
        }
        uVar14 = uVar14 ^ 1 << ((byte)(0x1fU - LZCOUNT(uVar14)) & 0x1f);
      } while (uVar14 != 0);
    }
    uVar14 = (uint)local_100 & 0x1f;
    while (pauVar12 != (undefined1 (*) [32])(*local_f8 + uVar14)) {
      auVar3 = vpcmpeqb_avx2(local_c0,pauVar12[-1]);
      pauVar12 = pauVar12 + -1;
      for (uVar10 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
                    (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 |
                    (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
                    (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
                    (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
                    (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 |
                    (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
                    (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 |
                    (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
                    (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
                    (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
                    (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
                    (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
                    (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe |
                    (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
                    (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                    (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                    (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                    (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                    (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                    (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                    (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                    (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
                    (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
                    (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                    (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                    (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                    (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                    (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                    (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                    (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f; uVar10 != 0;
          uVar10 = uVar10 ^ 1 << ((byte)(0x1fU - LZCOUNT(uVar10)) & 0x1f)) {
        if ((auVar2 & (local_a0 ^ *(undefined1 (*) [32])(*pauVar12 + (0x1fU - LZCOUNT(uVar10))))) ==
            (undefined1  [32])0x0) {
          return (undefined1 (*) [32])(*pauVar12 + (0x1fU - LZCOUNT(uVar10)));
        }
      }
    }
    if ((ulonglong)uVar14 != 0) {
      auVar3 = vpcmpeqb_avx2(*local_f8,local_c0);
      uVar10 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
      if ((uVar10 != 0) && (uVar10 = (1 << (sbyte)uVar14) - 1U & uVar10, uVar10 != 0)) {
        auVar8[1] = uStack_df;
        auVar8[0] = local_e0;
        auVar8[2] = uStack_de;
        auVar8[3] = uStack_dd;
        auVar8[4] = uStack_dc;
        auVar8[5] = uStack_db;
        auVar8[6] = uStack_da;
        auVar8[7] = uStack_d9;
        auVar8[8] = uStack_d8;
        auVar8[9] = uStack_d7;
        auVar8[10] = uStack_d6;
        auVar8[0xb] = uStack_d5;
        auVar8[0xc] = uStack_d4;
        auVar8[0xd] = uStack_d3;
        auVar8[0xe] = uStack_d2;
        auVar8[0xf] = uStack_d1;
        auVar8[0x10] = uStack_d0;
        auVar8[0x11] = uStack_cf;
        auVar8[0x12] = uStack_ce;
        auVar8[0x13] = uStack_cd;
        auVar8[0x14] = uStack_cc;
        auVar8[0x15] = uStack_cb;
        auVar8[0x16] = uStack_ca;
        auVar8[0x17] = uStack_c9;
        auVar8[0x18] = uStack_c8;
        auVar8[0x19] = uStack_c7;
        auVar8[0x1a] = uStack_c6;
        auVar8[0x1b] = uStack_c5;
        auVar8[0x1c] = uStack_c4;
        auVar8[0x1d] = uStack_c3;
        auVar8[0x1e] = uStack_c2;
        auVar8[0x1f] = uStack_c1;
        do {
          uVar14 = 0x1f - LZCOUNT(uVar10);
          if ((auVar8 & (local_a0 ^ *(undefined1 (*) [32])(*local_f8 + uVar14))) ==
              (undefined1  [32])0x0) {
            return (undefined1 (*) [32])(*local_f8 + uVar14);
          }
          uVar10 = uVar10 ^ 1 << ((byte)uVar14 & 0x1f);
        } while (uVar10 != 0);
      }
    }
  }
  else {
    local_e0 = SUB321(*param_3,0);
    param_2 = (undefined1 (*) [32])((longlong)param_2 - param_4);
    uStack_df = local_e0;
    uStack_de = local_e0;
    uStack_dd = local_e0;
    uStack_dc = local_e0;
    uStack_db = local_e0;
    uStack_da = local_e0;
    uStack_d9 = local_e0;
    uStack_d8 = local_e0;
    uStack_d7 = local_e0;
    uStack_d6 = local_e0;
    uStack_d5 = local_e0;
    uStack_d4 = local_e0;
    uStack_d3 = local_e0;
    uStack_d2 = local_e0;
    uStack_d1 = local_e0;
    uStack_d0 = local_e0;
    uStack_cf = local_e0;
    uStack_ce = local_e0;
    uStack_cd = local_e0;
    uStack_cc = local_e0;
    uStack_cb = local_e0;
    uStack_ca = local_e0;
    uStack_c9 = local_e0;
    uStack_c8 = local_e0;
    uStack_c7 = local_e0;
    uStack_c6 = local_e0;
    uStack_c5 = local_e0;
    uStack_c4 = local_e0;
    uStack_c3 = local_e0;
    uStack_c2 = local_e0;
    uStack_c1 = local_e0;
    if ((*param_3 == *param_2) &&
       (iVar11 = memcmp(param_2 + 1,param_3 + 1,param_4 - 0x20), iVar11 == 0)) {
      return param_2;
    }
    local_100 = (ulonglong)((int)lVar13 - (int)param_4 & 0x1f);
    pauVar12 = (undefined1 (*) [32])(*param_1 + local_100);
    local_e8 = pauVar12;
    if (param_2 != pauVar12) {
      do {
        auVar3[1] = uStack_df;
        auVar3[0] = local_e0;
        auVar3[2] = uStack_de;
        auVar3[3] = uStack_dd;
        auVar3[4] = uStack_dc;
        auVar3[5] = uStack_db;
        auVar3[6] = uStack_da;
        auVar3[7] = uStack_d9;
        auVar3[8] = uStack_d8;
        auVar3[9] = uStack_d7;
        auVar3[10] = uStack_d6;
        auVar3[0xb] = uStack_d5;
        auVar3[0xc] = uStack_d4;
        auVar3[0xd] = uStack_d3;
        auVar3[0xe] = uStack_d2;
        auVar3[0xf] = uStack_d1;
        auVar3[0x10] = uStack_d0;
        auVar3[0x11] = uStack_cf;
        auVar3[0x12] = uStack_ce;
        auVar3[0x13] = uStack_cd;
        auVar3[0x14] = uStack_cc;
        auVar3[0x15] = uStack_cb;
        auVar3[0x16] = uStack_ca;
        auVar3[0x17] = uStack_c9;
        auVar3[0x18] = uStack_c8;
        auVar3[0x19] = uStack_c7;
        auVar3[0x1a] = uStack_c6;
        auVar3[0x1b] = uStack_c5;
        auVar3[0x1c] = uStack_c4;
        auVar3[0x1d] = uStack_c3;
        auVar3[0x1e] = uStack_c2;
        auVar3[0x1f] = uStack_c1;
        auVar3 = vpcmpeqb_avx2(param_2[-1],auVar3);
        param_2 = param_2 + -1;
        uVar14 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf
                 | (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
        if (uVar14 != 0) {
          do {
            uVar10 = 0x1f - LZCOUNT(uVar14);
            if ((*(undefined1 (*) [32])(*param_2 + uVar10) == *param_3) &&
               (iVar11 = memcmp((undefined1 (*) [32])(*param_2 + uVar10) + 1,param_3 + 1,
                                param_4 - 0x20), iVar11 == 0)) {
              return (undefined1 (*) [32])(*param_2 + uVar10);
            }
            uVar14 = uVar14 ^ 1 << ((byte)uVar10 & 0x1f);
          } while (uVar14 != 0);
          pauVar12 = local_e8;
        }
      } while (param_2 != pauVar12);
      param_1 = local_f8;
    }
    if (local_100 != 0) {
      auVar9[1] = uStack_df;
      auVar9[0] = local_e0;
      auVar9[2] = uStack_de;
      auVar9[3] = uStack_dd;
      auVar9[4] = uStack_dc;
      auVar9[5] = uStack_db;
      auVar9[6] = uStack_da;
      auVar9[7] = uStack_d9;
      auVar9[8] = uStack_d8;
      auVar9[9] = uStack_d7;
      auVar9[10] = uStack_d6;
      auVar9[0xb] = uStack_d5;
      auVar9[0xc] = uStack_d4;
      auVar9[0xd] = uStack_d3;
      auVar9[0xe] = uStack_d2;
      auVar9[0xf] = uStack_d1;
      auVar9[0x10] = uStack_d0;
      auVar9[0x11] = uStack_cf;
      auVar9[0x12] = uStack_ce;
      auVar9[0x13] = uStack_cd;
      auVar9[0x14] = uStack_cc;
      auVar9[0x15] = uStack_cb;
      auVar9[0x16] = uStack_ca;
      auVar9[0x17] = uStack_c9;
      auVar9[0x18] = uStack_c8;
      auVar9[0x19] = uStack_c7;
      auVar9[0x1a] = uStack_c6;
      auVar9[0x1b] = uStack_c5;
      auVar9[0x1c] = uStack_c4;
      auVar9[0x1d] = uStack_c3;
      auVar9[0x1e] = uStack_c2;
      auVar9[0x1f] = uStack_c1;
      auVar3 = vpcmpeqb_avx2(*param_1,auVar9);
      uVar14 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
      if ((uVar14 != 0) && (uVar14 = (1 << ((byte)local_100 & 0x1f)) - 1U & uVar14, uVar14 != 0)) {
        while( true ) {
          pauVar12 = (undefined1 (*) [32])(*param_1 + (0x1fU - LZCOUNT(uVar14)));
          if ((*pauVar12 == *param_3) &&
             (iVar11 = memcmp(pauVar12 + 1,param_3 + 1,param_4 - 0x20), iVar11 == 0)) break;
          uVar14 = uVar14 ^ 1 << ((byte)(0x1fU - LZCOUNT(uVar14)) & 0x1f);
          if (uVar14 == 0) {
            return local_f0;
          }
          param_1 = local_f8;
        }
        return pauVar12;
      }
    }
  }
  return local_f0;
}



/* ===== 1804e6890 FUN_1804e6890 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [16]
FUN_1804e6890(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             ulonglong param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  uint uVar17;
  undefined1 auStack_d8 [32];
  undefined1 (*local_b8) [16];
  undefined1 (*local_b0) [16];
  undefined1 (**local_a8 [2]) [16];
  undefined1 local_98 [16];
  undefined1 (*local_88) [16];
  ulonglong local_80;
  undefined1 (*local_78) [16];
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_b0 = param_2;
  if (param_4 != 0) {
    local_b8 = param_1;
    if (param_4 == 1) {
      pauVar6 = (undefined1 (*) [16])FUN_1804e7010(param_1,param_2,(*param_3)[0]);
      return pauVar6;
    }
    uVar10 = (longlong)param_2 - (longlong)param_1;
    if (param_4 <= uVar10) {
      if (((DAT_1809194cc & 0x20) != 0) && (0x1f < uVar10)) {
        pauVar6 = (undefined1 (*) [16])FUN_1804e64f0();
        return pauVar6;
      }
      if (((DAT_1809194cc & 4) == 0) || (uVar10 < 0x10)) {
        pauVar6 = (undefined1 (*) [16])((longlong)param_2 - param_4);
        while( true ) {
          if ((*pauVar6)[0] == (*param_3)[0]) {
            uVar10 = 1;
            while ((*pauVar6)[uVar10] == (*param_3)[uVar10]) {
              uVar10 = uVar10 + 1;
              if (uVar10 == param_4) {
                return pauVar6;
              }
            }
          }
          if (pauVar6 == param_1) break;
          pauVar6 = (undefined1 (*) [16])(pauVar6[-1] + 0xf);
        }
        return param_2;
      }
      iVar5 = (int)param_4;
      if (param_4 < 0x11) {
        uVar8 = (1 << (0x11U - (char)param_4 & 0x1f)) - 1;
        FUN_180540530(&local_78,param_3,param_4);
        auVar12._8_8_ = uStack_70;
        auVar12._0_8_ = local_78;
        param_2 = param_2 + -1;
        auVar11 = pcmpestrm(auVar12,*param_2,0xc,iVar5,0x10);
        uVar3 = auVar11._0_4_ & uVar8;
        if (uVar3 != 0) {
          uVar8 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> uVar8 == 0; uVar8 = uVar8 - 1) {
            }
          }
          return (undefined1 (*) [16])(*param_2 + uVar8);
        }
        uVar3 = (uint)uVar10 & 0xf;
        uVar16 = (uint)((ulonglong)local_78 >> 0x20);
        uVar17 = (uint)((ulonglong)uStack_70 >> 0x20);
        if (param_2 != (undefined1 (*) [16])(*param_1 + uVar3)) {
          do {
            param_2 = param_2 + -1;
            auVar11 = pcmpestrm(auVar12,*param_2,0xc,iVar5,0x10);
            uVar9 = auVar11._0_4_;
            if (uVar9 != 0) {
              uVar7 = (uVar8 ^ 0xffff) & uVar9;
              if (uVar7 != 0) {
                do {
                  uVar1 = 0x1f;
                  if (uVar7 != 0) {
                    for (; uVar7 >> uVar1 == 0; uVar1 = uVar1 - 1) {
                    }
                  }
                  pauVar6 = (undefined1 (*) [16])(*param_2 + uVar1);
                  auVar14._0_4_ = (uint)local_78 ^ *(uint *)*pauVar6;
                  auVar14._4_4_ = uVar16 ^ *(uint *)(*pauVar6 + 4);
                  auVar14._8_4_ = (uint)uStack_70 ^ *(uint *)(*pauVar6 + 8);
                  auVar14._12_4_ = uVar17 ^ *(uint *)(*pauVar6 + 0xc);
                  if ((*(undefined1 (*) [16])(&DAT_1805746d0 + -param_4) & auVar14) ==
                      (undefined1  [16])0x0) {
                    return pauVar6;
                  }
                  uVar7 = uVar7 ^ 1 << ((byte)uVar1 & 0x1f);
                } while (uVar7 != 0);
              }
              uVar9 = uVar9 & uVar8;
              if (uVar9 != 0) {
                uVar3 = 0x1f;
                if (uVar9 != 0) {
                  for (; uVar9 >> uVar3 == 0; uVar3 = uVar3 - 1) {
                  }
                }
                return (undefined1 (*) [16])(*param_2 + uVar3);
              }
            }
          } while (param_2 != (undefined1 (*) [16])(*param_1 + uVar3));
          param_1 = local_b8;
        }
        if ((ulonglong)uVar3 != 0) {
          auVar12 = pcmpestrm(auVar12,*param_1,0xc,iVar5,0x10);
          uVar3 = auVar12._0_4_ & (1 << (sbyte)uVar3) - 1U;
          if (uVar3 != 0) {
            uVar9 = (uVar8 ^ 0xffff) & uVar3;
            if (uVar9 != 0) {
              do {
                uVar7 = 0x1f;
                if (uVar9 != 0) {
                  for (; uVar9 >> uVar7 == 0; uVar7 = uVar7 - 1) {
                  }
                }
                pauVar6 = (undefined1 (*) [16])(*param_1 + uVar7);
                auVar13._0_4_ = *(uint *)*pauVar6 ^ (uint)local_78;
                auVar13._4_4_ = *(uint *)(*pauVar6 + 4) ^ uVar16;
                auVar13._8_4_ = *(uint *)(*pauVar6 + 8) ^ (uint)uStack_70;
                auVar13._12_4_ = *(uint *)(*pauVar6 + 0xc) ^ uVar17;
                if ((*(undefined1 (*) [16])(&DAT_1805746d0 + -param_4) & auVar13) ==
                    (undefined1  [16])0x0) {
                  return pauVar6;
                }
                uVar9 = uVar9 ^ 1 << ((byte)uVar7 & 0x1f);
              } while (uVar9 != 0);
            }
            uVar3 = uVar3 & uVar8;
            if (uVar3 != 0) {
              uVar8 = 0x1f;
              if (uVar3 != 0) {
                for (; uVar3 >> uVar8 == 0; uVar8 = uVar8 - 1) {
                }
              }
              return (undefined1 (*) [16])(*param_1 + uVar8);
            }
          }
        }
      }
      else {
        auVar12 = *param_3;
        param_2 = (undefined1 (*) [16])((longlong)param_2 - param_4);
        param_3 = param_3 + 1;
        local_a8[0] = &local_78;
        auVar11._0_4_ = *(uint *)*param_2 ^ auVar12._0_4_;
        auVar11._4_4_ = *(uint *)(*param_2 + 4) ^ auVar12._4_4_;
        auVar11._8_4_ = *(uint *)(*param_2 + 8) ^ auVar12._8_4_;
        auVar11._12_4_ = *(uint *)(*param_2 + 0xc) ^ auVar12._12_4_;
        local_98 = auVar12;
        local_88 = param_3;
        local_80 = param_4;
        if ((auVar11 == (undefined1  [16])0x0) &&
           (local_78 = param_2, iVar4 = memcmp(param_2 + 1,param_3,param_4 - 0x10), iVar4 == 0)) {
          return param_2;
        }
        uVar3 = (uint)uVar10 - iVar5 & 0xf;
        uVar10 = (ulonglong)uVar3;
        if (param_2 != (undefined1 (*) [16])(*param_1 + uVar10)) {
          do {
            param_2 = param_2 + -1;
            auVar11 = pcmpestrm(auVar12,*param_2,0xc,0x10,0x10);
            uVar8 = auVar11._0_4_;
            local_78 = param_2;
            if (uVar8 != 0) {
              do {
                uVar16 = 0x1f;
                if (uVar8 != 0) {
                  for (; uVar8 >> uVar16 == 0; uVar16 = uVar16 - 1) {
                  }
                }
                if (uVar16 == 0) {
                  pauVar6 = param_2;
LAB_1804e6b63:
                  iVar5 = memcmp(pauVar6 + 1,param_3,param_4 - 0x10);
                  if (iVar5 == 0) {
                    return pauVar6;
                  }
                }
                else {
                  pauVar6 = (undefined1 (*) [16])(*param_2 + uVar16);
                  auVar15._0_4_ = auVar12._0_4_ ^ *(uint *)*pauVar6;
                  auVar15._4_4_ = auVar12._4_4_ ^ *(uint *)(*pauVar6 + 4);
                  auVar15._8_4_ = auVar12._8_4_ ^ *(uint *)(*pauVar6 + 8);
                  auVar15._12_4_ = auVar12._12_4_ ^ *(uint *)(*pauVar6 + 0xc);
                  if (auVar15 == (undefined1  [16])0x0) goto LAB_1804e6b63;
                }
                uVar8 = uVar8 ^ 1 << ((byte)uVar16 & 0x1f);
              } while (uVar8 != 0);
              param_1 = local_b8;
            }
          } while (param_2 != (undefined1 (*) [16])(*param_1 + uVar10));
        }
        if (((uVar10 != 0) &&
            (auVar12 = pcmpestrm(auVar12,*param_1,0xc,0x10,0x10),
            (auVar12._0_4_ & (1 << (sbyte)uVar3) - 1U) != 0)) &&
           (local_78 = param_1, cVar2 = FUN_1804e96f0(local_a8), cVar2 != '\0')) {
          return local_78;
        }
      }
    }
  }
  return local_b0;
}



/* ===== 1804e6c50 FUN_1804e6c50 ===== */

undefined1 (*) [32]
FUN_1804e6c50(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_1809194cc & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_1809194cc & 4) != 0)) {
      puVar4 = *param_1;
      auVar9 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auVar8[0] = -((*param_1)[0] == auVar9[0]);
        auVar8[1] = -((*param_1)[1] == auVar9[1]);
        auVar8[2] = -((*param_1)[2] == auVar9[2]);
        auVar8[3] = -((*param_1)[3] == auVar9[3]);
        auVar8[4] = -((*param_1)[4] == auVar9[4]);
        auVar8[5] = -((*param_1)[5] == auVar9[5]);
        auVar8[6] = -((*param_1)[6] == auVar9[6]);
        auVar8[7] = -((*param_1)[7] == auVar9[7]);
        auVar8[8] = -((*param_1)[8] == auVar9[8]);
        auVar8[9] = -((*param_1)[9] == auVar9[9]);
        auVar8[10] = -((*param_1)[10] == auVar9[10]);
        auVar8[0xb] = -((*param_1)[0xb] == auVar9[0xb]);
        auVar8[0xc] = -((*param_1)[0xc] == auVar9[0xc]);
        auVar8[0xd] = -((*param_1)[0xd] == auVar9[0xd]);
        auVar8[0xe] = -((*param_1)[0xe] == auVar9[0xe]);
        auVar8[0xf] = -((*param_1)[0xf] == auVar9[0xf]);
        uVar1 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar5);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar4 = *param_1;
    auVar9 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar10._16_16_ = auVar9;
    auVar10._0_16_ = auVar9;
    do {
      auVar2 = vpcmpeqb_avx2(auVar10,*param_1);
      uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0) goto LAB_1804e6cf1;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0)));
    uVar7 = (ulonglong)((uint)uVar6 & 0x1c);
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar7),*param_1);
      auVar10 = vpcmpeqb_avx2(auVar2,auVar10);
      auVar10 = vpand_avx2(auVar10,*(undefined1 (*) [32])(&DAT_180574630 + -uVar7));
      uVar5 = (uint)(SUB321(auVar10 >> 7,0) & 1) | (uint)(SUB321(auVar10 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar10 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar10 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar10 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar10 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar10 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar10 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar10 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar10 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar10 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar10 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar10 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar10 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar10 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar10 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar10 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar10 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar10 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar10 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar10 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar10 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar10 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar10 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar10 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar10 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar10 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar10 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar10 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar10 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar10 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar10[0x1f] >> 7) << 0x1f;
      if (uVar5 != 0) {
LAB_1804e6cf1:
        uVar3 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return (undefined1 (*) [32])(*param_1 + uVar3);
      }
      param_1 = (undefined1 (*) [32])(*param_1 + uVar7);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (undefined1 (*) [32])(*param_1 + 1)) {
  }
  return param_1;
}



/* ===== 1804e6d50 FUN_1804e6d50 ===== */

undefined1 (*) [32]
FUN_1804e6d50(undefined1 (*param_1) [32],undefined1 (*param_2) [32],short param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_1809194cc & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_1809194cc & 4) != 0)) {
      puVar4 = *param_1;
      do {
        auVar8._0_2_ = -(ushort)(*(short *)*param_1 == param_3);
        auVar8._2_2_ = -(ushort)(*(short *)(*param_1 + 2) == param_3);
        auVar8._4_2_ = -(ushort)(*(short *)(*param_1 + 4) == param_3);
        auVar8._6_2_ = -(ushort)(*(short *)(*param_1 + 6) == param_3);
        auVar8._8_2_ = -(ushort)(*(short *)(*param_1 + 8) == param_3);
        auVar8._10_2_ = -(ushort)(*(short *)(*param_1 + 10) == param_3);
        auVar8._12_2_ = -(ushort)(*(short *)(*param_1 + 0xc) == param_3);
        auVar8._14_2_ = -(ushort)(*(short *)(*param_1 + 0xe) == param_3);
        uVar1 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                (ushort)((byte)(auVar8._14_2_ >> 7) & 1) << 0xe | auVar8._14_2_ & 0x8000;
        if (uVar1 != 0) {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar5);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar4 = *param_1;
    auVar8 = vpunpcklwd_avx(ZEXT416((uint)(int)param_3),ZEXT416((uint)(int)param_3));
    auVar8 = vpshufd_avx(auVar8,0);
    auVar9._16_16_ = auVar8;
    auVar9._0_16_ = auVar8;
    do {
      auVar2 = vpcmpeqw_avx2(auVar9,*param_1);
      uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0) goto LAB_1804e6df3;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0)));
    uVar7 = (ulonglong)((uint)uVar6 & 0x1c);
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar7),*param_1);
      auVar9 = vpcmpeqw_avx2(auVar2,auVar9);
      auVar9 = vpand_avx2(auVar9,*(undefined1 (*) [32])(&DAT_180574630 + -uVar7));
      uVar5 = (uint)(SUB321(auVar9 >> 7,0) & 1) | (uint)(SUB321(auVar9 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar9 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar9 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar9 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar9 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar9 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar9 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar9 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar9 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar9 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar9 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar9 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar9 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar9 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar9 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar9 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar9 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar9 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar9 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar9 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar9 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar9 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar9 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar9 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar9 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar9 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar9 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar9 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar9 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar9 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar9[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0) {
LAB_1804e6df3:
        uVar3 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return (undefined1 (*) [32])(*param_1 + uVar3);
      }
      param_1 = (undefined1 (*) [32])(*param_1 + uVar7);
    }
  }
  for (; (param_1 != param_2 && (*(short *)*param_1 != param_3));
      param_1 = (undefined1 (*) [32])(*param_1 + 2)) {
  }
  return param_1;
}



/* ===== 1804e6e50 FUN_1804e6e50 ===== */

undefined1 (*) [32]
FUN_1804e6e50(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_1809194cc & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_1809194cc & 4) != 0)) {
      puVar4 = *param_1;
      do {
        auVar8._0_4_ = -(uint)(*(uint *)*param_1 == param_3);
        auVar8._4_4_ = -(uint)(*(uint *)(*param_1 + 4) == param_3);
        auVar8._8_4_ = -(uint)(*(uint *)(*param_1 + 8) == param_3);
        auVar8._12_4_ = -(uint)(*(uint *)(*param_1 + 0xc) == param_3);
        uVar1 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (ushort)((byte)(auVar8._12_4_ >> 7) & 1) << 0xc |
                (ushort)((byte)(auVar8._12_4_ >> 0xf) & 1) << 0xd |
                (ushort)((byte)(auVar8._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar8._12_4_ >> 0x1f) << 0xf;
        if (uVar1 != 0) {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar5);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0)));
    }
    for (; (param_1 != param_2 && (*(uint *)*param_1 != param_3));
        param_1 = (undefined1 (*) [32])(*param_1 + 4)) {
    }
    return param_1;
  }
  auVar8 = vpshufd_avx(ZEXT416(param_3),0);
  auVar9._16_16_ = auVar8;
  auVar9._0_16_ = auVar8;
  puVar4 = *param_1;
  do {
    auVar2 = vpcmpeqd_avx2(auVar9,*param_1);
    uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
    if (uVar5 != 0) goto LAB_1804e6ec8;
    param_1 = param_1 + 1;
  } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0)));
  uVar7 = (ulonglong)((uint)uVar6 & 0x1c);
  if ((uVar6 & 0x1c) != 0) {
    auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar7),*param_1);
    auVar9 = vpcmpeqd_avx2(auVar2,auVar9);
    auVar9 = vpand_avx2(auVar9,*(undefined1 (*) [32])(&DAT_180574630 + -uVar7));
    uVar5 = (uint)(SUB321(auVar9 >> 7,0) & 1) | (uint)(SUB321(auVar9 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar9 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar9 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar9 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar9 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar9 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar9 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar9 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar9 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar9 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar9 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar9 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar9 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar9 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar9 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar9 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar9 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar9 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar9 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar9 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar9 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar9 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar9 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar9 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar9 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar9 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar9 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar9 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar9 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar9 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar9[0x1f] >> 7) << 0x1f;
    if (uVar5 != 0) {
LAB_1804e6ec8:
      uVar3 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      return (undefined1 (*) [32])(*param_1 + uVar3);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + uVar7);
  }
  return param_1;
}



/* ===== 1804e6f30 FUN_1804e6f30 ===== */

undefined1 (*) [32]
FUN_1804e6f30(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  longlong lVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  
  uVar5 = (longlong)param_2 - (longlong)param_1;
  if (((uVar5 & 0xffffffffffffffe0) == 0) || ((DAT_1809194cc & 0x20) == 0)) {
    if (((uVar5 & 0xfffffffffffffff0) != 0) && ((DAT_1809194cc & 4) != 0)) {
      puVar3 = *param_1;
      do {
        auVar7._0_8_ = -(ulonglong)(*(ulonglong *)*param_1 == param_3);
        auVar7._8_8_ = -(ulonglong)(*(ulonglong *)(*param_1 + 8) == param_3);
        uVar1 = (ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                (ushort)((byte)(auVar7._8_8_ >> 7) & 1) << 8 |
                (ushort)((byte)(auVar7._8_8_ >> 0xf) & 1) << 9 |
                (ushort)((byte)(auVar7._8_8_ >> 0x17) & 1) << 10 |
                (ushort)((byte)(auVar7._8_8_ >> 0x1f) & 1) << 0xb |
                (ushort)((byte)(auVar7._8_8_ >> 0x27) & 1) << 0xc |
                (ushort)((byte)(auVar7._8_8_ >> 0x2f) & 1) << 0xd |
                (ushort)((byte)(auVar7._8_8_ >> 0x37) & 1) << 0xe |
                (ushort)(byte)(auVar7._8_8_ >> 0x3f) << 0xf;
        if (uVar1 != 0) {
          uVar4 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar4);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar3 + (uVar5 & 0xfffffffffffffff0)));
    }
    for (; (param_1 != param_2 && (*(ulonglong *)*param_1 != param_3));
        param_1 = (undefined1 (*) [32])(*param_1 + 8)) {
    }
    return param_1;
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_3;
  auVar7 = vpunpcklqdq_avx(auVar11,auVar11);
  puVar3 = *param_1;
  do {
    lVar10 = auVar7._0_8_;
    auVar8._0_8_ = -(ulonglong)(lVar10 == *(longlong *)*param_1);
    lVar12 = auVar7._8_8_;
    auVar8._8_8_ = -(ulonglong)(lVar12 == *(longlong *)(*param_1 + 8));
    auVar8._16_8_ = -(ulonglong)(lVar10 == SUB248(*(undefined1 (*) [24])*param_1,0x10));
    auVar8._24_8_ = -(ulonglong)(lVar12 == *(longlong *)(*param_1 + 0x18));
    uVar4 = (uint)(SUB321(auVar8 >> 7,0) & 1) | (uint)(SUB321(auVar8 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar8 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar8 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar8 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar8 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar8 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar8 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar8 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar8 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar8 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar8 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar8 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar8 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar8 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar8 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar8 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar8 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar8 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar8 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar8 >> 0xbf,0) << 0x17 |
            (uint)((byte)(auVar8._24_8_ >> 7) & 1) << 0x18 |
            (uint)((byte)(auVar8._24_8_ >> 0xf) & 1) << 0x19 |
            (uint)((byte)(auVar8._24_8_ >> 0x17) & 1) << 0x1a |
            (uint)((byte)(auVar8._24_8_ >> 0x1f) & 1) << 0x1b |
            (uint)((byte)(auVar8._24_8_ >> 0x27) & 1) << 0x1c |
            (uint)((byte)(auVar8._24_8_ >> 0x2f) & 1) << 0x1d |
            (uint)((byte)(auVar8._24_8_ >> 0x37) & 1) << 0x1e |
            (uint)(byte)(auVar8._24_8_ >> 0x3f) << 0x1f;
    if (uVar4 != 0) goto LAB_1804e6faa;
    param_1 = param_1 + 1;
  } while (param_1 != (undefined1 (*) [32])(puVar3 + (uVar5 & 0xffffffffffffffe0)));
  uVar6 = (ulonglong)((uint)uVar5 & 0x1c);
  if ((uVar5 & 0x1c) != 0) {
    auVar8 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar6),*param_1);
    auVar9._0_8_ = -(ulonglong)(auVar8._0_8_ == lVar10);
    auVar9._8_8_ = -(ulonglong)(auVar8._8_8_ == lVar12);
    auVar9._16_8_ = -(ulonglong)(auVar8._16_8_ == lVar10);
    auVar9._24_8_ = -(ulonglong)(auVar8._24_8_ == lVar12);
    auVar8 = vpand_avx2(auVar9,*(undefined1 (*) [32])(&DAT_180574630 + -uVar6));
    uVar4 = (uint)(SUB321(auVar8 >> 7,0) & 1) | (uint)(SUB321(auVar8 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar8 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar8 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar8 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar8 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar8 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar8 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar8 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar8 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar8 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar8 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar8 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar8 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar8 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar8 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar8 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar8 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar8 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar8 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar8 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar8 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar8 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar8 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar8 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar8 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar8 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar8 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar8[0x1f] >> 7) << 0x1f;
    if (uVar4 != 0) {
LAB_1804e6faa:
      uVar2 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      return (undefined1 (*) [32])(*param_1 + uVar2);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + uVar6);
  }
  return param_1;
}



