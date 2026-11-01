/* ===== 1811bd025 FUN_1811bd025 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1811bd025(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  undefined8 *puVar10;
  char *pcVar11;
  size_t sVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int iVar16;
  ulonglong *puVar17;
  int *piVar18;
  longlong lVar19;
  byte *pbVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  undefined8 unaff_RBX;
  undefined8 *puVar26;
  undefined8 *puVar27;
  byte *unaff_RBP;
  ulonglong unaff_RSI;
  int *piVar28;
  longlong unaff_RDI;
  int iVar29;
  longlong *unaff_R12;
  uint uVar30;
  int unaff_R13D;
  ulonglong unaff_R14;
  undefined8 unaff_R15;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 auStackX_8 [24];
  uint uStackX_20;
  byte bStack0000000000000060;
  undefined8 uStack_8;
  
  if (unaff_RDI == 0) {
    if (DAT_180cfc970 != DAT_180cfc978) {
      unaff_RDI = DAT_180cfc970;
      goto LAB_1802de1f8;
    }
    *(int *)(unaff_RBP + 0x150) = (int)param_1;
    *(int *)(unaff_RBP + 0x154) = (int)((ulonglong)param_1 >> 0x20);
    *(undefined4 *)(unaff_RBP + 0x158) = in_XMM0_Dc;
    *(undefined4 *)(unaff_RBP + 0x15c) = in_XMM0_Dd;
    *(undefined8 *)(unaff_RBP + 0x160) = unaff_RBX;
    *(ulonglong *)(unaff_RBP + 0x168) = unaff_RSI;
    unaff_RBP[0x150] = 0;
    pbVar7 = unaff_RBP + 0x150;
    uVar24 = 0x1000;
    uVar22 = unaff_RSI;
  }
  else {
LAB_1802de1f8:
    pbVar7 = (byte *)FUN_180024b50(unaff_RBP + 0x70,unaff_RDI + 0x48);
    uVar24 = 0x800;
    uVar22 = *(ulonglong *)(unaff_RBP + 0x168);
  }
  uStackX_20 = uVar24;
  if (&bStack0000000000000060 != pbVar7) {
    if (*(ulonglong *)(pbVar7 + 0x18) < 0x10) {
      pbVar20 = pbVar7;
    }
    else {
      pbVar20 = *(byte **)pbVar7;
    }
    FUN_180029840(&bStack0000000000000060,pbVar20,*(undefined8 *)(pbVar7 + 0x10));
    uVar22 = *(ulonglong *)(unaff_RBP + 0x168);
  }
  if ((uVar24 >> 0xc == 0) || (uVar24 = uVar24 & 0xffffefff, uVar22 < 0x10)) {
LAB_1802de2b3:
    if ((uVar24 >> 0xb & 1) != 0) {
      uVar24 = uVar24 & 0xfffff7ff;
      FUN_18000f890();
    }
    uVar15 = 0;
    if (unaff_RDI == 0) goto LAB_1802de2dc;
    *(undefined4 *)(unaff_RBP + -0x80) = *(undefined4 *)(unaff_RDI + 0x68);
  }
  else {
    uVar21 = uVar22 + 1;
    lVar1 = *(longlong *)(unaff_RBP + 0x150);
    lVar19 = lVar1;
    if (uVar21 < 0x1000) {
LAB_1802de2ad:
      thunk_FUN_1803d64e0(lVar19,uVar21);
      goto LAB_1802de2b3;
    }
    lVar19 = *(longlong *)(lVar1 + -8);
    if ((lVar1 - lVar19) - 8U < 0x20) {
      uVar21 = uVar22 + 0x28;
      goto LAB_1802de2ad;
    }
    uVar15 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
LAB_1802de2dc:
    *(int *)(unaff_RBP + -0x80) = (int)uVar15;
  }
  *(undefined4 *)(unaff_RBP + -0x7c) = DAT_180960ec8;
  puVar10 = (undefined8 *)register0x00000020;
  if (unaff_RDI == 0) {
    unaff_RBP[0xd0] = 0;
    unaff_RBP[0xd1] = 0;
    unaff_RBP[0xd2] = 0;
    unaff_RBP[0xd3] = 0;
    unaff_RBP[0xd4] = 0;
    unaff_RBP[0xd5] = 0;
    unaff_RBP[0xd6] = 0;
    unaff_RBP[0xd7] = 0;
    unaff_RBP[0xd8] = 0;
    unaff_RBP[0xd9] = 0;
    unaff_RBP[0xda] = 0;
    unaff_RBP[0xdb] = 0;
    unaff_RBP[0xdc] = 0;
    unaff_RBP[0xdd] = 0;
    unaff_RBP[0xde] = 0;
    unaff_RBP[0xdf] = 0;
    unaff_RBP[0xe0] = 5;
    unaff_RBP[0xe1] = 0;
    unaff_RBP[0xe2] = 0;
    unaff_RBP[0xe3] = 0;
    unaff_RBP[0xe4] = 0;
    unaff_RBP[0xe5] = 0;
    unaff_RBP[0xe6] = 0;
    unaff_RBP[0xe7] = 0;
    *(ulonglong *)(unaff_RBP + 0xe8) = unaff_RSI;
    *(undefined4 *)(unaff_RBP + 0xd0) = s_Medal_18075f97c._0_4_;
    unaff_RBP[0xd4] = s_Medal_18075f97c[4];
    unaff_RBP[0xd5] = 0;
    pbVar7 = unaff_RBP + 0xd0;
    uVar24 = uVar24 | 0x4000;
    pbVar8 = *(byte **)(unaff_RBP + 0xd0);
    pbVar20 = unaff_RBP + 0xe0;
    puVar17 = (ulonglong *)(unaff_RBP + 0xe8);
  }
  else {
    unaff_R12 = (longlong *)(unaff_RDI + 0x28);
    unaff_RBP[0xf0] = 0;
    unaff_RBP[0xf1] = 0;
    unaff_RBP[0xf2] = 0;
    unaff_RBP[0xf3] = 0;
    unaff_RBP[0xf4] = 0;
    unaff_RBP[0xf5] = 0;
    unaff_RBP[0xf6] = 0;
    unaff_RBP[0xf7] = 0;
    unaff_RBP[0xf8] = 0;
    unaff_RBP[0xf9] = 0;
    unaff_RBP[0xfa] = 0;
    unaff_RBP[0xfb] = 0;
    unaff_RBP[0xfc] = 0;
    unaff_RBP[0xfd] = 0;
    unaff_RBP[0xfe] = 0;
    unaff_RBP[0xff] = 0;
    *(undefined8 *)(unaff_RBP + 0x100) = uVar15;
    *(undefined8 *)(unaff_RBP + 0x108) = uVar15;
    unaff_R14 = *(ulonglong *)(unaff_RDI + 0x38);
    if (0xf < *(ulonglong *)(unaff_RDI + 0x40)) {
      unaff_R12 = (longlong *)*unaff_R12;
    }
    if (0x7fffffffffffffff < unaff_R14) goto LAB_1802dee61;
    if (unaff_R14 < 0x10) {
      *(ulonglong *)(unaff_RBP + 0x100) = unaff_R14;
      *(ulonglong *)(unaff_RBP + 0x108) = unaff_RSI;
      pbVar8 = (byte *)*unaff_R12;
      lVar1 = unaff_R12[1];
      *(byte **)(unaff_RBP + 0xf0) = pbVar8;
      *(longlong *)(unaff_RBP + 0xf8) = lVar1;
    }
    else {
      uVar21 = unaff_R14 | 0xf;
      uVar22 = 0x7fffffffffffffff;
      if ((uVar21 < 0x8000000000000000) && (uVar22 = uVar21, uVar21 < 0x16)) {
        uVar22 = 0x16;
      }
      *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de37a;
      pbVar8 = (byte *)FUN_18000fb70(uVar22 + 1);
      *(byte **)(unaff_RBP + 0xf0) = pbVar8;
      *(ulonglong *)(unaff_RBP + 0x100) = unaff_R14;
      *(ulonglong *)(unaff_RBP + 0x108) = uVar22;
      *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de3a1;
      FUN_180540530(pbVar8,unaff_R12,unaff_R14 + 1);
    }
    pbVar7 = unaff_RBP + 0xf0;
    uVar24 = uVar24 | 0x2000;
    pbVar20 = unaff_RBP + 0x100;
    puVar17 = (ulonglong *)(unaff_RBP + 0x108);
    unaff_RSI = *(ulonglong *)(unaff_RBP + 0xe8);
    unaff_R15 = *(undefined8 *)((longlong)register0x00000020 + 0x30);
  }
  iVar25 = (int)unaff_R14;
  *(uint *)((longlong)register0x00000020 + 0x20) = uVar24;
  if (unaff_RBP + -0x78 != pbVar7) {
    if (*puVar17 < 0x10) {
      pbVar8 = pbVar7;
    }
    uVar15 = *(undefined8 *)pbVar20;
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de445;
    FUN_180029840(unaff_RBP + -0x78,pbVar8,uVar15);
    unaff_RSI = *(ulonglong *)(unaff_RBP + 0xe8);
  }
  if (uVar24 >> 0xe != 0) {
    uVar24 = uVar24 & 0xffffbfff;
    piVar9 = (int *)(ulonglong)uVar24;
    if (0xf < unaff_RSI) {
      uVar22 = unaff_RSI + 1;
      lVar1 = *(longlong *)(unaff_RBP + 0xd0);
      lVar19 = lVar1;
      if (0xfff < uVar22) {
        lVar19 = *(longlong *)(lVar1 + -8);
        if (0x1f < (lVar1 - lVar19) - 8U) {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          iVar29 = (int)unaff_R12;
          if (unaff_R13D == 1) {
            if (iVar29 == 0) {
              iVar25 = DAT_18092149c;
            }
            else {
              iVar25 = DAT_1809214a4;
              if (DAT_1809214a4 < 0) {
                iVar25 = DAT_18092149c;
              }
            }
            if (iVar25 == 0) {
              pcVar11 = "weapon_knife_t";
              if (iVar29 == 0) {
                pcVar11 = "weapon_knife";
              }
              *(undefined8 *)register0x00000020 = 0x1802de54c;
              piVar9 = (int *)FUN_1802d48a0(pcVar11);
              if (piVar9 == (int *)0x0) {
                iVar25 = 0x3b;
                if (iVar29 == 0) {
                  iVar25 = 0x2a;
                }
                param_4 = 0;
                piVar9 = (int *)0x0;
              }
              else {
                iVar25 = *piVar9;
                param_4 = 0;
                piVar9 = (int *)0x0;
              }
            }
            else {
              param_4 = iVar25 != 0;
              piVar9 = (int *)0x0;
            }
          }
          else if (unaff_R13D == 2) {
            if (iVar29 == 0) {
              iVar16 = DAT_1809214a0;
            }
            else {
              iVar16 = DAT_1809214a8;
              if (DAT_1809214a8 < 0) {
                iVar16 = DAT_1809214a0;
              }
            }
            iVar25 = iVar16;
            if (iVar16 == 0) {
              iVar25 = 0x13a5 - (uint)(iVar29 != 0);
            }
            param_4 = iVar16 != 0;
          }
          *(int *)((longlong)register0x00000020 + 0x5c) = iVar25;
          if (0 < iVar25) {
            piVar28 = &DAT_18092174c;
            do {
              if ((*piVar28 == iVar25) && (piVar28[1] == iVar29)) goto LAB_1802de64d;
              piVar28 = piVar28 + 0x68;
            } while (piVar28 != &DAT_180931b4c);
            piVar28 = &DAT_18092174c;
            do {
              if ((*piVar28 == iVar25) && (piVar28[1] < 0)) goto LAB_1802de64d;
              piVar28 = piVar28 + 0x68;
            } while (piVar28 != &DAT_180931b4c);
          }
          *(int **)((longlong)register0x00000020 + 0x30) = piVar9;
          *(int *)((longlong)register0x00000020 + 0x60) = (int)piVar9;
          piVar28 = piVar9;
          piVar18 = piVar9;
          goto LAB_1802de61c;
        }
        uVar22 = unaff_RSI + 0x28;
      }
      *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de48d;
      thunk_FUN_1803d64e0(lVar19,uVar22);
    }
  }
  if ((uVar24 >> 0xd & 1) != 0) {
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de4a0;
    FUN_18000f890(unaff_RBP + 0xf0);
  }
  *unaff_RBP = DAT_1809216e8 != 0;
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de4b8;
  FUN_1802deeb0(unaff_R15,(undefined8 *)((longlong)register0x00000020 + 0x50));
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de4c2;
  FUN_1800288b0(unaff_RBP + -0x18);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de4cb;
  FUN_18000f890(unaff_RBP + -0x38);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de4d4;
  FUN_18000f890(unaff_RBP + -0x58);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de4dd;
  FUN_18000f890(unaff_RBP + -0x78);
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1802de4e7;
  FUN_18000f890((undefined8 *)((longlong)register0x00000020 + 0x60));
  goto LAB_1802dde0f;
LAB_1802de64d:
  *(int **)((longlong)register0x00000020 + 0x30) = piVar28;
  iVar16 = piVar28[2];
  *(int *)((longlong)register0x00000020 + 0x60) = iVar16;
  if ((iVar16 == 0) &&
     ((((char)piVar28[5] == '\0' && ((char)piVar28[7] == '\0')) && (piVar28[0x62] == 0)))) {
    piVar18 = piVar28 + 0x38;
    if (piVar28 != piVar28 + 0x2a) {
      do {
        if (*piVar18 != 0) goto LAB_1802de6a6;
        piVar18 = piVar18 + 7;
      } while (piVar18 != piVar28 + 0x62);
    }
    piVar18 = (int *)0x0;
LAB_1802de61c:
    iVar16 = (int)piVar18;
    bVar5 = 0;
  }
  else {
LAB_1802de6a6:
    bVar5 = 1;
  }
  *unaff_RBP = param_4 | bVar5;
  piVar18 = piVar28;
  puVar10 = (undefined8 *)((longlong)register0x00000020 + 8);
  if ((unaff_R13D != 2) || (puVar10 = (undefined8 *)((longlong)register0x00000020 + 8), iVar16 != 0)
     ) {
LAB_1802de97d:
    if ((piVar28 == (int *)0x0) || (piVar18[2] == 0)) {
      *(undefined8 *)((longlong)puVar10 + -8) = 0x1802de9c5;
      puVar14 = (undefined8 *)FUN_1802816b0(unaff_RBP + 0x70,iVar25);
      uVar24 = 0x200000;
    }
    else {
      *(undefined8 *)((longlong)puVar10 + -8) = 0x1802de994;
      FUN_1802816b0(unaff_RBP + 0x10,iVar25);
      *(undefined4 *)((longlong)puVar10 + 0x20) = 0x80000;
      *(undefined8 *)((longlong)puVar10 + -8) = 0x1802de9af;
      puVar14 = (undefined8 *)FUN_1802b2ec0(unaff_RBP + 0x30,iVar25,piVar28);
      uVar24 = 0x180000;
    }
    if ((undefined8 *)((longlong)puVar10 + 0x60) == puVar14) {
LAB_1802dea52:
      if (uVar24 >> 0x15 != 0) {
        uVar24 = uVar24 & 0xffdfffff;
        *(undefined8 *)((longlong)puVar10 + -8) = 0x1802dea65;
        FUN_18000f890(unaff_RBP + 0x70);
      }
      if ((uVar24 >> 0x14 & 1) != 0) {
        uVar24 = uVar24 & 0xffefffff;
        *(undefined8 *)((longlong)puVar10 + -8) = 0x1802dea79;
        FUN_18000f890(unaff_RBP + 0x30);
      }
      if ((uVar24 >> 0x13 & 1) != 0) {
        uVar24 = uVar24 & 0xfff7ffff;
        pbVar7 = unaff_RBP + 0x10;
        goto LAB_1802dea88;
      }
      goto LAB_1802dea8d;
    }
    uVar22 = *(ulonglong *)((longlong)puVar10 + 0x78);
    if (uVar22 < 0x10) {
LAB_1802dea14:
      *(undefined8 *)((longlong)puVar10 + 0x70) = 0;
      *(ulonglong *)((longlong)puVar10 + 0x78) = unaff_RSI;
      *(undefined1 *)((longlong)puVar10 + 0x60) = 0;
      *(undefined8 *)((longlong)puVar10 + 0x60) = *puVar14;
      *(undefined8 *)((longlong)puVar10 + 0x68) = puVar14[1];
      *(undefined8 *)((longlong)puVar10 + 0x70) = puVar14[2];
      *(undefined8 *)((longlong)puVar10 + 0x78) = puVar14[3];
      puVar14[2] = 0;
      puVar14[3] = unaff_RSI;
      *(undefined1 *)puVar14 = 0;
      goto LAB_1802dea52;
    }
    uVar21 = uVar22 + 1;
    lVar1 = *(longlong *)((longlong)puVar10 + 0x60);
    lVar19 = lVar1;
    if (uVar21 < 0x1000) {
LAB_1802dea0f:
      *(undefined8 *)((longlong)puVar10 + -8) = 0x1802dea14;
      thunk_FUN_1803d64e0(lVar19,uVar21);
      goto LAB_1802dea14;
    }
    lVar19 = *(longlong *)(lVar1 + -8);
    if ((lVar1 - lVar19) - 8U < 0x20) {
      uVar21 = uVar22 + 0x28;
      goto LAB_1802dea0f;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar10 = (undefined8 *)((longlong)puVar10 + 8);
LAB_1802deb39:
    *(undefined8 *)((longlong)puVar10 + -8) = 0x1802deb42;
    FUN_18000f890(unaff_RBP + 0x70);
    *(undefined8 *)((longlong)puVar10 + -8) = 0x1802deb53;
    pbVar7 = (byte *)FUN_180281250(unaff_RBP + 0x70,iVar25,*(undefined4 *)((longlong)puVar10 + 0x58)
                                  );
    if (unaff_RBP + -0x58 != pbVar7) {
      uVar22 = *(ulonglong *)(unaff_RBP + -0x40);
      if (0xf < uVar22) {
        uVar21 = uVar22 + 1;
        lVar1 = *(longlong *)(unaff_RBP + -0x58);
        lVar19 = lVar1;
        if (0xfff < uVar21) {
          lVar19 = *(longlong *)(lVar1 + -8);
          if (0x1f < (lVar1 - lVar19) - 8U) goto LAB_1802dee5a;
          uVar21 = uVar22 + 0x28;
        }
        *(undefined8 *)((longlong)puVar10 + -8) = 0x1802deb9a;
        thunk_FUN_1803d64e0(lVar19,uVar21);
      }
      unaff_RBP[-0x48] = 0;
      unaff_RBP[-0x47] = 0;
      unaff_RBP[-0x46] = 0;
      unaff_RBP[-0x45] = 0;
      unaff_RBP[-0x44] = 0;
      unaff_RBP[-0x43] = 0;
      unaff_RBP[-0x42] = 0;
      unaff_RBP[-0x41] = 0;
      *(ulonglong *)(unaff_RBP + -0x40) = unaff_RSI;
      unaff_RBP[-0x58] = 0;
      *(undefined8 *)(unaff_RBP + -0x58) = *(undefined8 *)pbVar7;
      *(undefined8 *)(unaff_RBP + -0x50) = *(undefined8 *)(pbVar7 + 8);
      *(undefined8 *)(unaff_RBP + -0x48) = *(undefined8 *)(pbVar7 + 0x10);
      *(undefined8 *)(unaff_RBP + -0x40) = *(undefined8 *)(pbVar7 + 0x18);
      pbVar7[0x10] = 0;
      pbVar7[0x11] = 0;
      pbVar7[0x12] = 0;
      pbVar7[0x13] = 0;
      pbVar7[0x14] = 0;
      pbVar7[0x15] = 0;
      pbVar7[0x16] = 0;
      pbVar7[0x17] = 0;
      *(ulonglong *)(pbVar7 + 0x18) = unaff_RSI;
      *pbVar7 = 0;
    }
    *(undefined8 *)((longlong)puVar10 + -8) = 0x1802debda;
    FUN_18000f890(unaff_RBP + 0x70);
    *(undefined8 *)((longlong)puVar10 + -8) = 0x1802debeb;
    pbVar7 = (byte *)FUN_180281480(unaff_RBP + 0x70,iVar25,*(undefined4 *)((longlong)puVar10 + 0x58)
                                  );
    if (unaff_RBP + -0x38 != pbVar7) {
      uVar22 = *(ulonglong *)(unaff_RBP + -0x20);
      if (0xf < uVar22) {
        uVar21 = uVar22 + 1;
        lVar1 = *(longlong *)(unaff_RBP + -0x38);
        lVar19 = lVar1;
        if (0xfff < uVar21) {
          lVar19 = *(longlong *)(lVar1 + -8);
          if (0x1f < (lVar1 - lVar19) - 8U) goto LAB_1802dee5a;
          uVar21 = uVar22 + 0x28;
        }
        *(undefined8 *)((longlong)puVar10 + -8) = 0x1802dec32;
        thunk_FUN_1803d64e0(lVar19,uVar21);
      }
      unaff_RBP[-0x28] = 0;
      unaff_RBP[-0x27] = 0;
      unaff_RBP[-0x26] = 0;
      unaff_RBP[-0x25] = 0;
      unaff_RBP[-0x24] = 0;
      unaff_RBP[-0x23] = 0;
      unaff_RBP[-0x22] = 0;
      unaff_RBP[-0x21] = 0;
      *(ulonglong *)(unaff_RBP + -0x20) = unaff_RSI;
      unaff_RBP[-0x38] = 0;
      *(undefined8 *)(unaff_RBP + -0x38) = *(undefined8 *)pbVar7;
      *(undefined8 *)(unaff_RBP + -0x30) = *(undefined8 *)(pbVar7 + 8);
      *(undefined8 *)(unaff_RBP + -0x28) = *(undefined8 *)(pbVar7 + 0x10);
      *(undefined8 *)(unaff_RBP + -0x20) = *(undefined8 *)(pbVar7 + 0x18);
      pbVar7[0x10] = 0;
      pbVar7[0x11] = 0;
      pbVar7[0x12] = 0;
      pbVar7[0x13] = 0;
      pbVar7[0x14] = 0;
      pbVar7[0x15] = 0;
      pbVar7[0x16] = 0;
      pbVar7[0x17] = 0;
      *(ulonglong *)(pbVar7 + 0x18) = unaff_RSI;
      *pbVar7 = 0;
    }
    *(undefined8 *)((longlong)puVar10 + -8) = 0x1802dec72;
    FUN_18000f890(unaff_RBP + 0x70);
    if ((piVar28 != (int *)0x0) && (unaff_R13D == 0)) {
      uVar22 = 0;
      do {
        iVar25 = *(int *)(*(longlong *)((longlong)puVar10 + 0x28) + 0xe0 + uVar22 * 0x1c);
        if ((DAT_180ccfeda != '\0') && (piVar9 = DAT_180cfc988, 0 < iVar25)) {
          for (; piVar9 != DAT_180cfc990; piVar9 = piVar9 + 0x26) {
            if (*piVar9 == iVar25) goto LAB_1802dece2;
          }
        }
        piVar9 = (int *)0x0;
LAB_1802dece2:
        if (piVar9 == (int *)0x0) {
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
          *(ulonglong *)(unaff_RBP + 0x48) = unaff_RSI;
          unaff_RBP[0x30] = 0;
          pbVar7 = unaff_RBP + 0x30;
          uVar24 = uVar24 | 0x800000;
        }
        else {
          piVar28 = piVar9 + 0x12;
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
          uVar21 = *(ulonglong *)(piVar9 + 0x16);
          if (0xf < *(ulonglong *)(piVar9 + 0x18)) {
            piVar28 = *(int **)piVar28;
          }
          if (0x7fffffffffffffff < uVar21) goto LAB_1802dee61;
          if (uVar21 < 0x10) {
            *(ulonglong *)(unaff_RBP + 0x20) = uVar21;
            *(ulonglong *)(unaff_RBP + 0x28) = unaff_RSI;
            iVar25 = piVar28[1];
            iVar29 = piVar28[2];
            iVar16 = piVar28[3];
            *(int *)(unaff_RBP + 0x10) = *piVar28;
            *(int *)(unaff_RBP + 0x14) = iVar25;
            *(int *)(unaff_RBP + 0x18) = iVar29;
            *(int *)(unaff_RBP + 0x1c) = iVar16;
          }
          else {
            uVar23 = uVar21 | 0xf;
            if (uVar23 < 0x8000000000000000) {
              if (uVar23 < 0x16) {
                uVar23 = 0x16;
              }
            }
            else {
              uVar23 = 0x7fffffffffffffff;
            }
            *(undefined8 *)((longlong)puVar10 + -8) = 0x1802ded51;
            uVar15 = FUN_18000fb70(uVar23 + 1);
            *(undefined8 *)(unaff_RBP + 0x10) = uVar15;
            *(ulonglong *)(unaff_RBP + 0x20) = uVar21;
            *(ulonglong *)(unaff_RBP + 0x28) = uVar23;
            *(undefined8 *)((longlong)puVar10 + -8) = 0x1802ded6c;
            FUN_180540530(uVar15,piVar28,uVar21 + 1);
          }
          pbVar7 = unaff_RBP + 0x10;
          uVar24 = uVar24 | 0x400000;
        }
        *(uint *)((longlong)puVar10 + 0x20) = uVar24;
        lVar1 = *(longlong *)(unaff_RBP + -0x10);
        if (lVar1 == *(longlong *)(unaff_RBP + -8)) {
          *(undefined8 *)((longlong)puVar10 + -8) = 0x1802dedba;
          FUN_180028f00(unaff_RBP + -0x18,lVar1);
        }
        else {
          *(undefined8 *)((longlong)puVar10 + -8) = 0x1802deda7;
          FUN_180024b50(lVar1,pbVar7);
          *(longlong *)(unaff_RBP + -0x10) = *(longlong *)(unaff_RBP + -0x10) + 0x20;
        }
        if ((uVar24 >> 0x17 & 1) != 0) {
          uVar24 = uVar24 & 0xff7fffff;
          uVar21 = *(ulonglong *)(unaff_RBP + 0x48);
          if (0xf < uVar21) {
            uVar23 = uVar21 + 1;
            lVar1 = *(longlong *)(unaff_RBP + 0x30);
            lVar19 = lVar1;
            if (0xfff < uVar23) {
              lVar19 = *(longlong *)(lVar1 + -8);
              if (0x1f < (lVar1 - lVar19) - 8U) {
                pcVar2 = (code *)swi(0x29);
                (*pcVar2)(5);
                puVar10 = (undefined8 *)((longlong)puVar10 + 8);
                goto LAB_1802dee5a;
              }
              uVar23 = uVar21 + 0x28;
            }
            *(undefined8 *)((longlong)puVar10 + -8) = 0x1802dedfc;
            thunk_FUN_1803d64e0(lVar19,uVar23);
          }
        }
        if ((uVar24 >> 0x16 & 1) != 0) {
          uVar24 = uVar24 & 0xffbfffff;
          uVar21 = *(ulonglong *)(unaff_RBP + 0x28);
          if (0xf < uVar21) {
            uVar23 = uVar21 + 1;
            lVar1 = *(longlong *)(unaff_RBP + 0x10);
            lVar19 = lVar1;
            if (0xfff < uVar23) {
              lVar19 = *(longlong *)(lVar1 + -8);
              if (0x1f < (lVar1 - lVar19) - 8U) goto LAB_1802dee5a;
              uVar23 = uVar21 + 0x28;
            }
            *(undefined8 *)((longlong)puVar10 + -8) = 0x1802dee3e;
            thunk_FUN_1803d64e0(lVar19,uVar23);
          }
        }
        uVar30 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar30;
      } while ((int)uVar30 < 5);
    }
    unaff_R15 = *(undefined8 *)((longlong)puVar10 + 0x30);
    *(undefined8 *)((longlong)puVar10 + -8) = 0x1802ddddd;
    FUN_1802deeb0(unaff_R15,(undefined1 *)((longlong)puVar10 + 0x50));
    *(undefined8 *)((longlong)puVar10 + -8) = 0x1802ddde7;
    FUN_1800288b0(unaff_RBP + -0x18);
    *(undefined8 *)((longlong)puVar10 + -8) = 0x1802dddf0;
    FUN_18000f890(unaff_RBP + -0x38);
    *(undefined8 *)((longlong)puVar10 + -8) = 0x1802dddf9;
    FUN_18000f890(unaff_RBP + -0x58);
    *(undefined8 *)((longlong)puVar10 + -8) = 0x1802dde02;
    FUN_18000f890(unaff_RBP + -0x78);
    *(undefined8 *)((longlong)puVar10 + -8) = 0x1802dde0c;
    FUN_18000f890((undefined1 *)((longlong)puVar10 + 0x60));
LAB_1802dde0f:
    *(undefined8 *)((longlong)puVar10 + -8) = 0x1802dde1e;
    return unaff_R15;
  }
  *(undefined8 *)register0x00000020 = 0x1802de640;
  puVar10 = (undefined8 *)FUN_180280de0(iVar25);
  if (iVar29 == 0) {
    iVar16 = DAT_1809214a0;
  }
  else {
    iVar16 = DAT_1809214a8;
    if (DAT_1809214a8 < 0) {
      iVar16 = DAT_1809214a0;
    }
  }
  if ((iVar16 == 0) || ((undefined4 *)*puVar10 == (undefined4 *)puVar10[1])) {
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
    *(int **)(unaff_RBP + 0x20) = piVar9;
    *(int **)(unaff_RBP + 0x28) = piVar9;
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
    uVar15 = s_panorama_images_econ_weapons_bas_18073ea00._8_8_;
    unaff_RBP[0x29] = 0;
    unaff_RBP[0x2a] = 0;
    unaff_RBP[0x2b] = 0;
    unaff_RBP[0x2c] = 0;
    unaff_RBP[0x2d] = 0;
    unaff_RBP[0x2e] = 0;
    unaff_RBP[0x2f] = 0;
    *(undefined8 *)pcVar11 = s_panorama_images_econ_weapons_bas_18073ea00._0_8_;
    *(undefined8 *)(pcVar11 + 8) = uVar15;
    uVar15 = CONCAT62(s_panorama_images_econ_weapons_bas_18073ea00._26_6_,
                      s_panorama_images_econ_weapons_bas_18073ea00._24_2_);
    *(undefined8 *)(pcVar11 + 0x10) = s_panorama_images_econ_weapons_bas_18073ea00._16_8_;
    *(undefined8 *)(pcVar11 + 0x18) = uVar15;
    uVar15 = s_panorama_images_econ_weapons_bas_18073ea00._34_8_;
    *(ulonglong *)(pcVar11 + 0x1a) =
         CONCAT26(s_panorama_images_econ_weapons_bas_18073ea00._32_2_,
                  s_panorama_images_econ_weapons_bas_18073ea00._26_6_);
    *(undefined8 *)(pcVar11 + 0x22) = uVar15;
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
    uVar6 = puVar13[1];
    uVar3 = puVar13[2];
    uVar4 = puVar13[3];
    *(undefined4 *)(unaff_RBP + 0x30) = *puVar13;
    *(undefined4 *)(unaff_RBP + 0x34) = uVar6;
    *(undefined4 *)(unaff_RBP + 0x38) = uVar3;
    *(undefined4 *)(unaff_RBP + 0x3c) = uVar4;
    uVar6 = puVar13[5];
    uVar3 = puVar13[6];
    uVar4 = puVar13[7];
    *(undefined4 *)(unaff_RBP + 0x40) = puVar13[4];
    *(undefined4 *)(unaff_RBP + 0x44) = uVar6;
    *(undefined4 *)(unaff_RBP + 0x48) = uVar3;
    *(undefined4 *)(unaff_RBP + 0x4c) = uVar4;
    *(undefined8 *)(puVar13 + 4) = 0;
    *(ulonglong *)(puVar13 + 6) = unaff_RSI;
    *(undefined1 *)puVar13 = 0;
    *(undefined4 *)((longlong)register0x00000020 + 0x28) = 0x4030000;
    *(undefined8 *)register0x00000020 = 0x1802de7b6;
    puVar13 = (undefined4 *)FUN_1800134a0(unaff_RBP + 0x30,"_png.vtex_c",0xb);
    uVar6 = puVar13[1];
    uVar3 = puVar13[2];
    uVar4 = puVar13[3];
    *(undefined4 *)(unaff_RBP + 400) = *puVar13;
    *(undefined4 *)(unaff_RBP + 0x194) = uVar6;
    *(undefined4 *)(unaff_RBP + 0x198) = uVar3;
    *(undefined4 *)(unaff_RBP + 0x19c) = uVar4;
    uVar15 = *(undefined8 *)(puVar13 + 6);
    *(undefined8 *)(unaff_RBP + 0x1a0) = *(undefined8 *)(puVar13 + 4);
    *(undefined8 *)(unaff_RBP + 0x1a8) = uVar15;
    *(undefined8 *)(puVar13 + 4) = 0;
    *(ulonglong *)(puVar13 + 6) = unaff_RSI;
    *(undefined1 *)puVar13 = 0;
    pbVar7 = unaff_RBP + 400;
    uVar24 = 0xc070000;
  }
  else {
    uVar6 = *(undefined4 *)*puVar10;
    *(undefined8 *)register0x00000020 = 0x1802de6db;
    pbVar7 = (byte *)FUN_1802816b0(unaff_RBP + 0x70,iVar25,uVar6);
    uVar24 = 0x8000;
  }
  if ((byte *)((longlong)register0x00000020 + 0x68) != pbVar7) {
    uVar22 = *(ulonglong *)((longlong)register0x00000020 + 0x80);
    if (uVar22 < 0x10) {
LAB_1802de829:
      *(undefined8 *)((longlong)register0x00000020 + 0x78) = 0;
      *(ulonglong *)((longlong)register0x00000020 + 0x80) = unaff_RSI;
      *(undefined1 *)((longlong)register0x00000020 + 0x68) = 0;
      *(undefined8 *)((longlong)register0x00000020 + 0x68) = *(undefined8 *)pbVar7;
      *(undefined8 *)((longlong)register0x00000020 + 0x70) = *(undefined8 *)(pbVar7 + 8);
      *(undefined8 *)((longlong)register0x00000020 + 0x78) = *(undefined8 *)(pbVar7 + 0x10);
      *(undefined8 *)((longlong)register0x00000020 + 0x80) = *(undefined8 *)(pbVar7 + 0x18);
      pbVar7[0x10] = 0;
      pbVar7[0x11] = 0;
      pbVar7[0x12] = 0;
      pbVar7[0x13] = 0;
      pbVar7[0x14] = 0;
      pbVar7[0x15] = 0;
      pbVar7[0x16] = 0;
      pbVar7[0x17] = 0;
      *(ulonglong *)(pbVar7 + 0x18) = unaff_RSI;
      *pbVar7 = 0;
      goto LAB_1802de867;
    }
    uVar21 = uVar22 + 1;
    lVar1 = *(longlong *)((longlong)register0x00000020 + 0x68);
    lVar19 = lVar1;
    if (uVar21 < 0x1000) {
LAB_1802de824:
      *(undefined8 *)register0x00000020 = 0x1802de829;
      thunk_FUN_1803d64e0(lVar19,uVar21);
      goto LAB_1802de829;
    }
    lVar19 = *(longlong *)(lVar1 + -8);
    if ((lVar1 - lVar19) - 8U < 0x20) {
      uVar21 = uVar22 + 0x28;
      goto LAB_1802de824;
    }
LAB_1802de968:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar26 = (undefined8 *)((longlong)register0x00000020 + 0x10);
LAB_1802de96f:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar27 = (undefined8 *)((longlong)puVar26 + 8);
LAB_1802de976:
    piVar18 = (int *)&DAT_00000005;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    puVar10 = (undefined8 *)((longlong)puVar27 + 8);
    goto LAB_1802de97d;
  }
LAB_1802de867:
  if ((uVar24 >> 0x12 & 1) != 0) {
    uVar24 = uVar24 & 0xfffbffff;
    uVar22 = *(ulonglong *)(unaff_RBP + 0x1a8);
    if (0xf < uVar22) {
      uVar21 = uVar22 + 1;
      lVar1 = *(longlong *)(unaff_RBP + 400);
      lVar19 = lVar1;
      if (0xfff < uVar21) {
        lVar19 = *(longlong *)(lVar1 + -8);
        if (0x1f < (lVar1 - lVar19) - 8U) goto LAB_1802de968;
        uVar21 = uVar22 + 0x28;
      }
      *(undefined8 *)register0x00000020 = 0x1802de8b2;
      thunk_FUN_1803d64e0(lVar19,uVar21);
    }
  }
  puVar26 = (undefined8 *)((longlong)register0x00000020 + 8);
  if ((uVar24 >> 0x11 & 1) != 0) {
    uVar24 = uVar24 & 0xfffdffff;
    uVar22 = *(ulonglong *)(unaff_RBP + 0x48);
    if (0xf < uVar22) {
      uVar21 = uVar22 + 1;
      lVar1 = *(longlong *)(unaff_RBP + 0x30);
      lVar19 = lVar1;
      if (0xfff < uVar21) {
        lVar19 = *(longlong *)(lVar1 + -8);
        if (0x1f < (lVar1 - lVar19) - 8U) goto LAB_1802de96f;
        uVar21 = uVar22 + 0x28;
      }
      *(undefined8 *)register0x00000020 = 0x1802de8f8;
      thunk_FUN_1803d64e0(lVar19,uVar21);
    }
    unaff_RBP[0x40] = 0;
    unaff_RBP[0x41] = 0;
    unaff_RBP[0x42] = 0;
    unaff_RBP[0x43] = 0;
    unaff_RBP[0x44] = 0;
    unaff_RBP[0x45] = 0;
    unaff_RBP[0x46] = 0;
    unaff_RBP[0x47] = 0;
    *(ulonglong *)(unaff_RBP + 0x48) = unaff_RSI;
    unaff_RBP[0x30] = 0;
  }
  puVar27 = (undefined8 *)((longlong)register0x00000020 + 8);
  if ((uVar24 >> 0x10 & 1) != 0) {
    uVar24 = uVar24 & 0xfffeffff;
    uVar22 = *(ulonglong *)(unaff_RBP + 0x28);
    if (0xf < uVar22) {
      uVar21 = uVar22 + 1;
      lVar1 = *(longlong *)(unaff_RBP + 0x10);
      lVar19 = lVar1;
      if (0xfff < uVar21) {
        lVar19 = *(longlong *)(lVar1 + -8);
        if (0x1f < (lVar1 - lVar19) - 8U) goto LAB_1802de976;
        uVar21 = uVar22 + 0x28;
      }
      *(undefined8 *)register0x00000020 = 0x1802de945;
      thunk_FUN_1803d64e0(lVar19,uVar21);
    }
    unaff_RBP[0x20] = 0;
    unaff_RBP[0x21] = 0;
    unaff_RBP[0x22] = 0;
    unaff_RBP[0x23] = 0;
    unaff_RBP[0x24] = 0;
    unaff_RBP[0x25] = 0;
    unaff_RBP[0x26] = 0;
    unaff_RBP[0x27] = 0;
    *(ulonglong *)(unaff_RBP + 0x28) = unaff_RSI;
    unaff_RBP[0x10] = 0;
  }
  puVar10 = (undefined8 *)((longlong)register0x00000020 + 8);
  if ((uVar24 >> 0xf & 1) != 0) {
    uVar24 = uVar24 & 0xffff7fff;
    pbVar7 = unaff_RBP + 0x70;
    puVar10 = (undefined8 *)((longlong)register0x00000020 + 8);
LAB_1802dea88:
    *(undefined8 *)((longlong)puVar10 + -8) = 0x1802dea8d;
    FUN_18000f890(pbVar7);
  }
LAB_1802dea8d:
  *(undefined8 *)((longlong)puVar10 + -8) = 0x1802dea99;
  uVar6 = FUN_180280fe0(iVar25,*(undefined4 *)((longlong)puVar10 + 0x58));
  *(undefined4 *)(unaff_RBP + -0x80) = uVar6;
  *(undefined8 *)((longlong)puVar10 + -8) = 0x1802deaad;
  pbVar7 = (byte *)FUN_1802d4930(unaff_RBP + 0x70,iVar25,*(undefined4 *)((longlong)puVar10 + 0x58));
  if (unaff_RBP + -0x78 == pbVar7) goto LAB_1802deb39;
  uVar22 = *(ulonglong *)(unaff_RBP + -0x60);
  if (uVar22 < 0x10) {
LAB_1802deaf4:
    unaff_RBP[-0x68] = 0;
    unaff_RBP[-0x67] = 0;
    unaff_RBP[-0x66] = 0;
    unaff_RBP[-0x65] = 0;
    unaff_RBP[-100] = 0;
    unaff_RBP[-99] = 0;
    unaff_RBP[-0x62] = 0;
    unaff_RBP[-0x61] = 0;
    *(ulonglong *)(unaff_RBP + -0x60) = unaff_RSI;
    unaff_RBP[-0x78] = 0;
    *(undefined8 *)(unaff_RBP + -0x78) = *(undefined8 *)pbVar7;
    *(undefined8 *)(unaff_RBP + -0x70) = *(undefined8 *)(pbVar7 + 8);
    *(undefined8 *)(unaff_RBP + -0x68) = *(undefined8 *)(pbVar7 + 0x10);
    *(undefined8 *)(unaff_RBP + -0x60) = *(undefined8 *)(pbVar7 + 0x18);
    pbVar7[0x10] = 0;
    pbVar7[0x11] = 0;
    pbVar7[0x12] = 0;
    pbVar7[0x13] = 0;
    pbVar7[0x14] = 0;
    pbVar7[0x15] = 0;
    pbVar7[0x16] = 0;
    pbVar7[0x17] = 0;
    *(ulonglong *)(pbVar7 + 0x18) = unaff_RSI;
    *pbVar7 = 0;
    goto LAB_1802deb39;
  }
  uVar21 = uVar22 + 1;
  lVar1 = *(longlong *)(unaff_RBP + -0x78);
  lVar19 = lVar1;
  if (uVar21 < 0x1000) {
LAB_1802deaef:
    *(undefined8 *)((longlong)puVar10 + -8) = 0x1802deaf4;
    thunk_FUN_1803d64e0(lVar19,uVar21);
    goto LAB_1802deaf4;
  }
  lVar19 = *(longlong *)(lVar1 + -8);
  if ((lVar1 - lVar19) - 8U < 0x20) {
    uVar21 = uVar22 + 0x28;
    goto LAB_1802deaef;
  }
LAB_1802dee5a:
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  puVar10 = (undefined8 *)((longlong)puVar10 + 8);
LAB_1802dee61:
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar10 + -8) = &UNK_1802dee66;
  FUN_180011990();
}



/* ===== 1811bd091 FUN_1811bd091 ===== */

uint FUN_1811bd091(int param_1)

{
  SHORT SVar1;
  SHORT SVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  SVar1 = GetAsyncKeyState(param_1);
  SVar2 = GetAsyncKeyState(0x2e);
  return CONCAT22(extraout_var_00,SVar2) | CONCAT22(extraout_var,SVar1);
}



/* ===== 1811bd0b3 FUN_1811bd0b3 ===== */

undefined8 FUN_1811bd0b3(void)

{
  undefined8 uVar1;
  
  if (DAT_180cec8f4 == 0) {
    uVar1 = FUN_180209890();
    return uVar1;
  }
  return 1;
}



/* ===== 1811bd0cb FUN_1811bd0cb ===== */

void FUN_1811bd0cb(LPCVOID param_1)

{
  HANDLE hFile;
  uint nNumberOfBytesToWrite;
  ulonglong uVar1;
  LPOVERLAPPED lpOverlapped;
  DWORD local_20 [4];
  
  if (param_1 != (LPCVOID)0x0) {
    hFile = CreateFileW(L"C:\\neverlose\\model-diagnostics.log",4,3,(LPSECURITY_ATTRIBUTES)0x0,4,
                        0x80,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffffffffffff) {
      uVar1 = 0;
      while ((nNumberOfBytesToWrite = (uint)uVar1, nNumberOfBytesToWrite < 0x1ff &&
             (*(char *)((longlong)param_1 + uVar1) != '\0'))) {
        uVar1 = (ulonglong)(nNumberOfBytesToWrite + 1);
      }
      lpOverlapped = (LPOVERLAPPED)0x0;
      WriteFile(hFile,param_1,nNumberOfBytesToWrite,local_20,(LPOVERLAPPED)0x0);
      WriteFile(hFile,"\r\nSetModel wrapper returned",2,local_20,lpOverlapped);
      CloseHandle(hFile);
    }
  }
  return;
}



/* ===== 1811bd179 FUN_1811bd179 ===== */

void FUN_1811bd179(void)

{
  undefined8 in_R9;
  
  FUN_1811bd0cb(in_R9);
  return;
}



/* ===== 1811bd181 FUN_1811bd181 ===== */

undefined4 FUN_1811bd181(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_1811bd0cb(param_2);
  uVar1 = FUN_1811bd0b3(param_1,param_2);
  FUN_1811bd0cb("SetModel wrapper returned");
  return uVar1;
}



/* ===== 1811bd21b FUN_1811bd21b ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018021a452) */
/* WARNING: Removing unreachable block (ram,0x00018021a457) */
/* WARNING: Removing unreachable block (ram,0x00018021a465) */
/* WARNING: Removing unreachable block (ram,0x00018021a46a) */
/* WARNING: Removing unreachable block (ram,0x00018021a470) */
/* WARNING: Removing unreachable block (ram,0x00018021a274) */
/* WARNING: Removing unreachable block (ram,0x00018021a3c8) */
/* WARNING: Removing unreachable block (ram,0x00018021a3cd) */
/* WARNING: Removing unreachable block (ram,0x00018021a3d6) */
/* WARNING: Removing unreachable block (ram,0x00018021a3df) */
/* WARNING: Removing unreachable block (ram,0x00018021a3e8) */
/* WARNING: Removing unreachable block (ram,0x00018021a4b3) */
/* WARNING: Removing unreachable block (ram,0x00018021a4b8) */
/* WARNING: Removing unreachable block (ram,0x00018021a4c1) */
/* WARNING: Removing unreachable block (ram,0x00018021a4ca) */
/* WARNING: Removing unreachable block (ram,0x00018021a40c) */
/* WARNING: Removing unreachable block (ram,0x00018021a417) */
/* WARNING: Removing unreachable block (ram,0x00018021a42d) */
/* WARNING: Removing unreachable block (ram,0x00018021a440) */
/* WARNING: Removing unreachable block (ram,0x00018021a2c1) */
/* WARNING: Removing unreachable block (ram,0x00018021a2d3) */
/* WARNING: Removing unreachable block (ram,0x00018021a2ca) */
/* WARNING: Removing unreachable block (ram,0x00018021a2dc) */
/* WARNING: Removing unreachable block (ram,0x00018021a2e3) */
/* WARNING: Removing unreachable block (ram,0x00018021a2e9) */
/* WARNING: Removing unreachable block (ram,0x00018021a2f5) */
/* WARNING: Removing unreachable block (ram,0x00018021a509) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1811bd21b(void)

{
  char cVar1;
  short sVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 unaff_R13D;
  
  if (DAT_180cc4c8d == '\0') {
    if (unaff_RSI != 0) {
      FUN_18021a1c5();
      return;
    }
    DAT_1809f1778 = 0xffffffff;
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(unaff_RBP + -0x48);
      lVar4 = *(longlong *)(unaff_RBP + -0x48);
    }
    else {
      lVar4 = DAT_181108a00;
    }
    uVar3 = (ulonglong)DAT_180cec8e4;
    if ((DAT_180cec8e4 != 0) && (lVar4 != 0)) {
      sVar2 = FUN_180011440();
      if (lVar4 != DAT_180cec900) {
        DAT_180cc4c8b = '\0';
        DAT_180cec900 = lVar4;
      }
      if (DAT_180cc4c8b != '\0') {
        if (sVar2 == DAT_180ce1edc) {
          FUN_180066890(lVar4 + uVar3,&DAT_180ce1f2c);
        }
        DAT_180cc4c8b = '\0';
      }
    }
    lVar4 = *(longlong *)(unaff_RBP + -0x50);
    FUN_180217e10(lVar4,unaff_R13D,0);
    DAT_180cc4c8e = 0;
    if (*(int *)(unaff_RBP + -0x40) == 0xc) {
      if ((((lVar4 != 0) && (DAT_180ca09f8 != 0)) &&
          (lVar4 = FUN_18000f3a0(lVar4 + (ulonglong)DAT_180ca09f8), lVar4 != 0)) &&
         (((DAT_180cec8c4 != 0 && ((ulonglong)DAT_180cec8c4 + lVar4 != 0)) &&
          ((DAT_180cec8c8 != 0 &&
           (lVar4 = FUN_18000f3a0((ulonglong)DAT_180cec8c4 + lVar4 + (ulonglong)DAT_180cec8c8),
           lVar4 - 0x10000U < 0x7ffffffeffff)))))) {
        FUN_18000f3a0(lVar4);
      }
      if (DAT_180cec890 != 0) {
        FUN_180218b90();
      }
      FUN_180218cd0(unaff_RBP + -0x50,0,0);
      FUN_180219030(unaff_RBP + -0x50,0,0);
      FUN_180219750(unaff_RBP + -0x50,0,0);
      cVar1 = DAT_180cc4c8c;
      LOCK();
      DAT_180cc4c8c = '\0';
      UNLOCK();
      if (cVar1 != '\0') {
        FUN_180217550("sleeves | %s | %llx %llx",&DAT_18070b3c4,DAT_180cec8a0,DAT_180cec8a8);
      }
    }
  }
  FUN_18000f890(unaff_RBP + -0x38);
  return;
}



/* ===== 1811be000 FUN_1811be000 ===== */

undefined8 FUN_1811be000(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong unaff_RDI;
  uint uVar6;
  ulonglong uVar7;
  undefined1 local_118 [4];
  undefined4 local_114;
  longlong local_48;
  undefined8 local_40;
  
  if ((unaff_RDI == 0) || (*(char *)(unaff_RDI + 0xd0) == '\0')) {
    uVar5 = FUN_1811bd181(param_1,param_2);
  }
  else {
    if (DAT_180cec8f4 == 0) {
      DAT_1811be600 = 0;
      DAT_1811be604 = 0;
      FUN_1811bd0cb(s_preload_begin_1811be645);
      FUN_1811bd0cb(param_2);
    }
    if (DAT_1811be604 == 0) {
      if (param_2 != 0) {
        uVar7 = 0;
        do {
          if (*(char *)(param_2 + uVar7) == '\0') {
            if ((((((int)uVar7 != 0) && (DAT_180961d08 != (code *)0x0)) &&
                 (DAT_180961d10 != (code *)0x0)) &&
                ((hModule = GetModuleHandleA(s_resourcesystem_dll_1811be610),
                 hModule != (HMODULE)0x0 &&
                 (pFVar3 = GetProcAddress(hModule,s_CreateInterface_1811be623),
                 pFVar3 != (FARPROC)0x0)))) &&
               (plVar4 = (longlong *)(*pFVar3)(s_ResourceSystem013_1811be633,0),
               plVar4 != (longlong *)0x0)) {
              FUN_180540170(local_118,0,0xe0);
              local_114 = 0xc00000c8;
              cVar1 = (*DAT_180961d08)(local_118,param_2);
              if ((cVar1 != '\0') && (local_48 != 0)) {
                local_40 = 0x6c646d76;
                iVar2 = (**(code **)(*plVar4 + 0x198))(plVar4,local_118);
                if (iVar2 == 3) {
                  FUN_1811bd0cb(s_preload_ready_1811be668);
                  FUN_1811bd0cb(param_2);
                  uVar5 = FUN_180209890(param_1,param_2);
                  if ((char)uVar5 == '\0') {
                    return uVar5;
                  }
                  DAT_1811be604 = 1;
                  return uVar5;
                }
                if (DAT_1811be600 == 0) {
                  DAT_1811be600 = 1;
                  (*DAT_180961d10)(plVar4,local_118,&DAT_18058b643);
                  FUN_1811bd0cb(s_preload_request_sent_1811be653);
                }
              }
            }
            break;
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < 200);
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}



/* ===== 1811be200 FUN_1811be200 ===== */

byte * FUN_1811be200(void)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  
  pbVar2 = (byte *)FUN_1802b3fe0();
  lVar3 = *(longlong *)(pbVar2 + 0x10);
  pbVar1 = pbVar2;
  if (0xf < *(ulonglong *)(pbVar2 + 0x18)) {
    pbVar1 = *(byte **)pbVar2;
  }
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    if ((0x60 < *pbVar1) && (*pbVar1 < 0x7b)) {
      *pbVar1 = *pbVar1 - 0x20;
    }
    pbVar1 = pbVar1 + 1;
  }
  return pbVar2;
}



/* ===== 1811be250 FUN_1811be250 ===== */

void FUN_1811be250(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x9a) & 0x20) == 0) {
    FUN_18008f840();
    return;
  }
  return;
}



/* ===== 1811be280 FUN_1811be280 ===== */

void FUN_1811be280(void)

{
  undefined1 unaff_BL;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + -0x70) = 0x7379616420353633;
  *(undefined4 *)(unaff_RBP + -0x68) = 0x66656c20;
  *(undefined1 *)(unaff_RBP + -100) = 0x74;
  *(undefined1 *)(unaff_RBP + -99) = unaff_BL;
  *(undefined8 *)(unaff_RBP + -0x60) = 0xd;
  FUN_18031f5fc();
  return;
}



/* ===== 181222200 thunk_FUN_181253d40 ===== */

FARPROC thunk_FUN_181253d40(void)

{
  BOOL BVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  INT_PTR IVar4;
  HANDLE hFile;
  DWORD aDStack_468 [8];
  undefined1 auStack_448 [528];
  WCHAR aWStack_238 [272];
  
  if (DAT_1812223f0 != (FARPROC)0x0) {
    return DAT_1812223f0;
  }
  pHVar2 = GetModuleHandleA(s_kernel32_dll_181253ef0);
  if ((pHVar2 != (HMODULE)0x0) &&
     (pFVar3 = GetProcAddress(pHVar2,s_GetTempPathW_181253efd), pFVar3 != (FARPROC)0x0)) {
    IVar4 = (*pFVar3)(0x104,auStack_448);
    if (((uint)IVar4 != 0) &&
       ((((uint)IVar4 < 0x104 &&
         (pFVar3 = GetProcAddress(pHVar2,s_GetTempFileNameW_181253f0a), pFVar3 != (FARPROC)0x0)) &&
        (IVar4 = (*pFVar3)(auStack_448,&DAT_181253f27,0), (int)IVar4 != 0)))) {
      pFVar3 = GetProcAddress(pHVar2,s_DeleteFileW_181253f1b);
      hFile = CreateFileW(aWStack_238,0x40000000,5,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
      if (hFile != (HANDLE)0xffffffffffffffff) {
        BVar1 = WriteFile(hFile,&DAT_181253f50,0x19e00,aDStack_468,(LPOVERLAPPED)0x0);
        CloseHandle(hFile);
        if ((BVar1 != 0) && (aDStack_468[0] == 0x19e00)) {
          pHVar2 = LoadLibraryW(aWStack_238);
          if (pFVar3 != (FARPROC)0x0) {
            (*pFVar3)(aWStack_238);
          }
          if (pHVar2 == (HMODULE)0x0) {
            return (FARPROC)0x0;
          }
          pFVar3 = GetProcAddress(pHVar2,s_get_steam_profile_181253f2f);
          if (pFVar3 == (FARPROC)0x0) {
            return (FARPROC)0x0;
          }
          DAT_1812223f0 = pFVar3;
          return pFVar3;
        }
      }
      if (pFVar3 != (FARPROC)0x0) {
        (*pFVar3)(aWStack_238);
      }
    }
  }
  return (FARPROC)0x0;
}



/* ===== 1812222e1 FUN_1812222e1 ===== */

void FUN_1812222e1(void)

{
  code *pcVar1;
  char *local_28;
  undefined1 local_20 [8];
  undefined1 local_18 [24];
  
  pcVar1 = (code *)thunk_FUN_181253d40();
  if (pcVar1 != (code *)0x0) {
    local_28 = (char *)0x0;
    (*pcVar1)(&local_28,local_20,local_18);
  }
  FUN_1801c8237();
  return;
}



/* ===== 18122232f FUN_18122232f ===== */

void FUN_18122232f(undefined8 param_1,undefined8 *param_2,longlong param_3,ulonglong param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  code *pcVar2;
  undefined1 local_98 [8];
  longlong local_90;
  uint local_88 [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  
  pcVar2 = (code *)thunk_FUN_181253d40();
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(local_98,&local_90,local_88);
    if (iVar1 == 3) {
      if ((local_90 != 0) && (local_88[0] != 0)) {
        param_4 = (ulonglong)local_88[0];
        local_78 = 0x76615f6d61657473;
        local_70 = 0x72617461;
        local_6c = 0;
        local_68 = 0xc;
        local_60 = 0xf;
        param_2 = &local_78;
        param_3 = local_90;
      }
    }
  }
  FUN_18039ef70(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* ===== 181253d40 FUN_181253d40 ===== */

FARPROC FUN_181253d40(void)

{
  BOOL BVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  INT_PTR IVar4;
  HANDLE hFile;
  DWORD local_468 [8];
  undefined1 local_448 [528];
  WCHAR local_238 [272];
  
  if (DAT_1812223f0 != (FARPROC)0x0) {
    return DAT_1812223f0;
  }
  pHVar2 = GetModuleHandleA(s_kernel32_dll_181253ef0);
  if ((pHVar2 != (HMODULE)0x0) &&
     (pFVar3 = GetProcAddress(pHVar2,s_GetTempPathW_181253efd), pFVar3 != (FARPROC)0x0)) {
    IVar4 = (*pFVar3)(0x104,local_448);
    if (((uint)IVar4 != 0) &&
       ((((uint)IVar4 < 0x104 &&
         (pFVar3 = GetProcAddress(pHVar2,s_GetTempFileNameW_181253f0a), pFVar3 != (FARPROC)0x0)) &&
        (IVar4 = (*pFVar3)(local_448,&DAT_181253f27,0), (int)IVar4 != 0)))) {
      pFVar3 = GetProcAddress(pHVar2,s_DeleteFileW_181253f1b);
      hFile = CreateFileW(local_238,0x40000000,5,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
      if (hFile != (HANDLE)0xffffffffffffffff) {
        BVar1 = WriteFile(hFile,&DAT_181253f50,0x19e00,local_468,(LPOVERLAPPED)0x0);
        CloseHandle(hFile);
        if ((BVar1 != 0) && (local_468[0] == 0x19e00)) {
          pHVar2 = LoadLibraryW(local_238);
          if (pFVar3 != (FARPROC)0x0) {
            (*pFVar3)(local_238);
          }
          if (pHVar2 == (HMODULE)0x0) {
            return (FARPROC)0x0;
          }
          pFVar3 = GetProcAddress(pHVar2,s_get_steam_profile_181253f2f);
          if (pFVar3 == (FARPROC)0x0) {
            return (FARPROC)0x0;
          }
          DAT_1812223f0 = pFVar3;
          return pFVar3;
        }
      }
      if (pFVar3 != (FARPROC)0x0) {
        (*pFVar3)(local_238);
      }
    }
  }
  return (FARPROC)0x0;
}



/* ===== 181254350 FUN_181254350 ===== */

uint FUN_181254350(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = -((bVar1 ^ uVar2) & 1) & 0xedb88320 ^ (bVar1 ^ uVar2) >> 1;
    uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
    uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
    uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
    uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
    uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
    uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
    uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
  }
  return ~uVar2;
}



/* ===== 181254500 FUN_181254500 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_181254500(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  char *pcVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined *puVar23;
  ulonglong uVar24;
  uint uVar25;
  uint local_res20 [2];
  uint local_68 [2];
  code *local_60;
  code *local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  lVar6 = (*DAT_181262360)(&DAT_181262640);
  if ((((lVar6 != 0) && (param_1 != (undefined8 *)0x0)) && (param_2 != (undefined8 *)0x0)) &&
     (param_3 != (int *)0x0)) {
    local_60 = (code *)(*DAT_181262368)(lVar6,&DAT_181262660);
    pcVar7 = (code *)(*DAT_181262368)(lVar6,&DAT_181262680);
    pcVar8 = (code *)(*DAT_181262368)(lVar6,&DAT_181262698);
    pcVar9 = (code *)(*DAT_181262368)(lVar6,&DAT_1812626b8);
    pcVar10 = (code *)(*DAT_181262368)(lVar6,s___stdcall_1812626d8 + 8);
    pcVar11 = (code *)(*DAT_181262368)(lVar6,s___fastcall_1812626f8 + 8);
    local_58 = pcVar11;
    pcVar12 = (code *)(*DAT_181262368)(lVar6,s___clrcall_181262728 + 8);
    local_50 = (code *)(*DAT_181262368)(lVar6,s___swift_2_181262750 + 8);
    if ((((local_60 != (code *)0x0) && (pcVar7 != (code *)0x0)) &&
        ((pcVar8 != (code *)0x0 && ((pcVar9 != (code *)0x0 && (pcVar10 != (code *)0x0)))))) &&
       ((pcVar11 != (code *)0x0 && ((pcVar12 != (code *)0x0 && (local_50 != (code *)0x0)))))) {
      lVar6 = (*local_60)();
      lVar13 = (*pcVar7)();
      lVar14 = (*pcVar8)();
      if (((lVar6 != 0) &&
          (((lVar13 != 0 && (lVar14 != 0)) &&
           (pcVar15 = (char *)(*pcVar9)(lVar6), pcVar15 != (char *)0x0)))) && (*pcVar15 != '\0')) {
        (*DAT_181262370)(0x18132edd0,pcVar15,0x100);
        *param_1 = 0x18132edd0;
        *param_2 = 0;
        *param_3 = 0;
        uVar16 = (*pcVar10)(lVar13);
        iVar2 = (*local_58)(lVar6,uVar16);
        local_res20[0] = 0;
        local_68[0] = 0;
        if ((((iVar2 < 1) || (iVar3 = (*pcVar12)(lVar14,iVar2,local_res20,local_68), iVar3 == 0)) ||
            ((local_res20[0] == 0 || ((local_68[0] == 0 || (0x100 < local_res20[0])))))) ||
           ((0x100 < local_68[0] ||
            (iVar2 = (*local_50)(lVar14,iVar2,0x1812aecd0,local_68[0] * local_res20[0] * 4),
            uVar25 = local_68[0], uVar18 = local_res20[0], iVar2 == 0)))) {
          return 1;
        }
        uVar24 = (ulonglong)local_res20[0];
        uVar19 = (ulonglong)local_68[0];
        uVar20 = 0;
        iVar3 = local_res20[0] * 4;
        iVar2 = iVar3 + 1;
        if (local_68[0] != 0) {
          do {
            uVar21 = uVar20 * iVar2;
            if (0x400ff < uVar21) {
LAB_181254b34:
              FUN_181254b50();
              pcVar7 = (code *)swi(3);
              uVar16 = (*pcVar7)();
              return uVar16;
            }
            *(undefined1 *)((ulonglong)uVar21 + 0x1812eecd0) = 0;
            FUN_1812609f0(&DAT_1812eecd1 + uVar21,(ulonglong)(uVar20 * uVar18 * 4) + 0x1812aecd0,
                          iVar3);
            if (uVar18 != 0) {
              uVar4 = 0;
              do {
                lVar6 = (uVar4 * 2 | 1) - uVar24;
                lVar13 = (uVar20 * 2 | 1) - uVar19;
                if ((longlong)(uVar19 * uVar19 * uVar24 * uVar24) <
                    (longlong)(uVar19 * uVar19 * lVar6 * lVar6 + uVar24 * uVar24 * lVar13 * lVar13))
                {
                  uVar17 = uVar21 + (uVar4 + 1) * 4;
                  if (0x400ff < uVar17) goto LAB_181254b34;
                  *(undefined1 *)((ulonglong)uVar17 + 0x1812eecd0) = 0;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < uVar18);
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar25);
        }
        local_50._0_7_ = (uint7)(byte)uVar18 << 0x18;
        _DAT_18126ce20 = 0xa1a0a0d474e5089;
        local_50 = (code *)CONCAT17((char)uVar25,(int7)local_50);
        uVar16 = local_50;
        local_50._3_5_ = SUB85(uVar16,3);
        local_50._0_3_ =
             CONCAT12((char)(uVar18 >> 8),CONCAT11((char)(uVar18 >> 0x10),(char)(uVar18 >> 0x18)));
        local_50._0_7_ =
             CONCAT16((char)(uVar25 >> 8),
                      CONCAT15((char)(uVar25 >> 0x10),
                               CONCAT14((char)(uVar25 >> 0x18),(undefined4)local_50)));
        local_50 = (code *)CONCAT17((char)uVar25,(int7)local_50);
        local_48 = 0x608;
        _DAT_18126ce30 = local_50;
        uVar25 = iVar2 * uVar25;
        _DAT_18126ce28 = 0xd000000;
        _DAT_18126ce2c = 0x52444849;
        _DAT_18126ce38 = 0x608;
        DAT_18126ce3c = 0;
        uVar5 = FUN_181254350(&DAT_18126ce2c,0x11);
        DAT_18126ce40 = (undefined1)uVar5;
        DAT_18126ce3d = (undefined1)((uint)uVar5 >> 0x18);
        uVar18 = 0;
        _DAT_18126ce49 = 0x178;
        uVar21 = 0;
        DAT_18126ce3e = (undefined1)((uint)uVar5 >> 0x10);
        uVar20 = 1;
        uVar24 = 0x2b;
        DAT_18126ce3f = (undefined1)((uint)uVar5 >> 8);
        if (uVar25 != 0) {
          do {
            uVar4 = uVar25 - uVar18;
            if (0xffff < uVar4) {
              uVar4 = 0xffff;
            }
            iVar2 = (int)uVar24;
            uVar17 = uVar4 + uVar18;
            (&DAT_18126ce20)[uVar24] = uVar17 == uVar25;
            (&DAT_18126ce20)[iVar2 + 1] = (char)uVar4;
            (&DAT_18126ce20)[iVar2 + 2] = (char)(uVar4 >> 8);
            (&DAT_18126ce20)[iVar2 + 3] = (char)(~uVar4 & 0xffff);
            (&DAT_18126ce20)[iVar2 + 4] = (char)((~uVar4 & 0xffff) >> 8);
            FUN_1812609f0(&DAT_18126ce20 + (iVar2 + 5),(ulonglong)uVar18 + 0x1812eecd0);
            uVar22 = 0;
            if (uVar4 != 0) {
              do {
                uVar1 = uVar22 + uVar18;
                uVar22 = uVar22 + 1;
                uVar20 = (uVar20 + *(byte *)((ulonglong)uVar1 + 0x1812eecd0)) % 0xfff1;
                uVar21 = (uVar21 + uVar20) % 0xfff1;
              } while (uVar22 < uVar4);
            }
            uVar24 = (ulonglong)(iVar2 + 5 + uVar4);
            uVar18 = uVar17;
          } while (uVar17 < uVar25);
        }
        puVar23 = &DAT_18126ce20;
        iVar2 = (int)uVar24;
        (&DAT_18126ce20)[uVar24] = (char)(uVar21 >> 8);
        *(char *)(uVar24 + 0x18126ce21) = (char)uVar21;
        *(char *)(uVar24 + 0x18126ce22) = (char)(uVar20 >> 8);
        *(char *)(uVar24 + 0x18126ce23) = (char)uVar20;
        iVar3 = iVar2 + -0x25;
        DAT_18126ce44 = (undefined1)iVar3;
        DAT_18126ce41 = (undefined1)((uint)iVar3 >> 0x18);
        DAT_18126ce42 = (undefined1)((uint)iVar3 >> 0x10);
        DAT_18126ce43 = (undefined1)((uint)iVar3 >> 8);
        _DAT_18126ce45 = 0x54414449;
        uVar5 = FUN_181254350(&DAT_18126ce45,iVar2 + -0x21);
        uVar24 = (ulonglong)(iVar2 + 4);
        puVar23[uVar24] = (char)((uint)uVar5 >> 0x18);
        puVar23[uVar24 + 1] = (char)((uint)uVar5 >> 0x10);
        puVar23[uVar24 + 3] = (char)uVar5;
        puVar23[uVar24 + 2] = (char)((uint)uVar5 >> 8);
        uVar24 = (ulonglong)(iVar2 + 8U);
        *(undefined4 *)(&DAT_18126ce20 + (iVar2 + 8U)) = 0;
        *(undefined4 *)(&DAT_18126ce24 + uVar24) = 0x444e4549;
        uVar5 = FUN_181254350(&DAT_18126ce24 + uVar24,4);
        *(char *)(uVar24 + 0x18126ce2b) = (char)uVar5;
        (&DAT_18126ce28)[uVar24] = (char)((uint)uVar5 >> 0x18);
        *(char *)(uVar24 + 0x18126ce29) = (char)((uint)uVar5 >> 0x10);
        *(char *)(uVar24 + 0x18126ce2a) = (char)((uint)uVar5 >> 8);
        *param_2 = &DAT_18126ce20;
        *param_3 = iVar2 + 0x14;
        return 3;
      }
    }
  }
  return 0;
}



/* ===== 181254b40 FUN_181254b40 ===== */

void FUN_181254b40(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}



/* ===== 181254b50 FUN_181254b50 ===== */

void FUN_181254b50(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(8);
  return;
}



/* ===== 181254b60 FUN_181254b60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_181254b60(undefined8 param_1,int param_2,longlong param_3)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    uVar8 = FUN_181254cd0(param_3 != 0);
    return uVar8;
  }
  if (param_2 == 1) {
    cVar4 = FUN_181255230(0);
    if (cVar4 != '\0') {
      uVar5 = FUN_181255020();
      bVar2 = true;
      if (_DAT_18132ef10 != 0) {
        FUN_181255390(7);
        pcVar1 = (code *)swi(3);
        uVar8 = (*pcVar1)();
        return uVar8;
      }
      _DAT_18132ef10 = 1;
      cVar4 = FUN_1812550b0();
      if (cVar4 != '\0') {
        FUN_1812553a0();
        FUN_181254fc0();
        FUN_181255000();
        iVar6 = FUN_1812580a4(&DAT_1812625e0,&DAT_181262600);
        if (iVar6 == 0) {
          cVar4 = FUN_181255070();
          if (cVar4 != '\0') {
            FUN_18125806c(&DAT_1812625d0,&DAT_1812625d8);
            _DAT_18132ef10 = 2;
            bVar2 = false;
          }
        }
      }
      FUN_181255310(uVar5);
      if (!bVar2) {
        plVar7 = (longlong *)FUN_181255370();
        if (*plVar7 != 0) {
          cVar4 = FUN_181255270(plVar7);
          if (cVar4 != '\0') {
            (*DAT_1812625a8)(param_1,2,param_3);
          }
        }
        _DAT_18132eee0 = _DAT_18132eee0 + 1;
        return 1;
      }
    }
    return 0;
  }
  if (param_2 == 2) {
    bVar3 = FUN_181255130();
    return (ulonglong)bVar3;
  }
  if (param_2 == 3) {
    bVar3 = FUN_181255160();
    return (ulonglong)bVar3;
  }
  return 1;
}



/* ===== 181254cd0 FUN_181254cd0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_181254cd0(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  
  if (_DAT_18132eee0 < 1) {
    return 0;
  }
  _DAT_18132eee0 = _DAT_18132eee0 + -1;
  uVar2 = FUN_181255020();
  if (_DAT_18132ef10 == 2) {
    uVar5 = uVar2;
    FUN_1812551d0();
    FUN_181254fd0();
    FUN_1812553f0();
    _DAT_18132ef10 = 0;
    FUN_181255310(uVar2);
    bVar3 = FUN_181255340(param_1,0,param_3,param_4,uVar5);
    FUN_181255210();
    return (ulonglong)bVar3;
  }
  FUN_181255390(7);
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}



/* ===== 181254d70 FUN_181254d70 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_181254d70(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) && (_DAT_18132eee0 < 1)) {
    return 0;
  }
  if (param_2 - 1U < 2) {
    if (ram0x000181262780 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = (*DAT_1812625a8)();
    }
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_181254b60(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_181254fb0(param_1,param_2,param_3);
  if ((param_2 == 1) && (iVar1 == 0)) {
    FUN_181254fb0(param_1,0,param_3);
    FUN_181254cd0(param_3 != 0);
    if (ram0x000181262780 != 0) {
      (*DAT_1812625a8)(param_1,0,param_3);
    }
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_181254b60(param_1,param_2,param_3);
    iVar1 = 0;
    if (iVar2 != 0) {
      if (ram0x000181262780 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = (*DAT_1812625a8)(param_1,param_2,param_3);
      }
    }
  }
  return iVar1;
}



/* ===== 181254eb0 FUN_181254eb0 ===== */

void FUN_181254eb0(undefined8 param_1,int param_2,undefined8 param_3)

{
  if (param_2 == 1) {
    FUN_181254ef0();
  }
  FUN_181254d70(param_1,param_2,param_3);
  return;
}



/* ===== 181254ef0 FUN_181254ef0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_181254ef0(void)

{
  uint uVar1;
  ulonglong local_res8;
  ulonglong local_res10 [3];
  ulonglong local_18 [2];
  
  if (DAT_18126c390 != 0x2b992ddfa232) {
    _DAT_18126c3d0 = ~DAT_18126c390;
    return;
  }
  local_res8 = 0;
  (*DAT_181262390)(&local_res8);
  local_18[0] = local_res8;
  uVar1 = (*DAT_181262388)();
  local_18[0] = local_18[0] ^ uVar1;
  uVar1 = (*DAT_181262380)();
  local_18[0] = local_18[0] ^ uVar1;
  (*DAT_181262378)(local_res10);
  DAT_18126c390 =
       (local_res10[0] << 0x20 ^ local_res10[0] ^ local_18[0] ^ (ulonglong)local_18) &
       0xffffffffffff;
  if (DAT_18126c390 == 0x2b992ddfa232) {
    DAT_18126c390 = 0x2b992ddfa233;
  }
  _DAT_18126c3d0 = ~DAT_18126c390;
  return;
}



/* ===== 181254fb0 FUN_181254fb0 ===== */

undefined8 FUN_181254fb0(void)

{
  return 1;
}



/* ===== 181254fc0 FUN_181254fc0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_181254fc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000181254fc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_181262398)(0x18132eef0);
  return;
}



/* ===== 181254fd0 FUN_181254fd0 ===== */

void FUN_181254fd0(void)

{
  FUN_181255960(0x18132eef0);
  return;
}



/* ===== 181254fe0 FUN_181254fe0 ===== */

undefined8 FUN_181254fe0(void)

{
  return 0x18132ef00;
}



/* ===== 181254ff0 FUN_181254ff0 ===== */

undefined8 FUN_181254ff0(void)

{
  return 0x18132ef08;
}



/* ===== 181255000 FUN_181255000 ===== */

void FUN_181255000(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_181254fe0();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_181254ff0();
  *puVar1 = *puVar1 | 2;
  return;
}



/* ===== 181255020 FUN_181255020 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_181255020(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  iVar2 = FUN_181255700();
  if (iVar2 != 0) {
    lVar1 = *(longlong *)((longlong)Self + 8);
    lVar3 = 0;
    LOCK();
    bVar4 = _DAT_18132ef18 == 0;
    if (bVar4) {
      _DAT_18132ef18 = lVar1;
    }
    else {
      lVar3 = _DAT_18132ef18;
    }
    UNLOCK();
    while (!bVar4) {
      if (lVar1 == lVar3) {
        return 1;
      }
      lVar3 = 0;
      LOCK();
      bVar4 = _DAT_18132ef18 == 0;
      if (bVar4) {
        _DAT_18132ef18 = lVar1;
      }
      else {
        lVar3 = _DAT_18132ef18;
      }
      UNLOCK();
    }
  }
  return 0;
}



/* ===== 181255070 FUN_181255070 ===== */

undefined4 FUN_181255070(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_181255700();
  if (iVar1 != 0) {
    FUN_181255450();
    return 1;
  }
  uVar2 = FUN_181254fb0();
  iVar1 = FUN_18125871c(uVar2);
  if (iVar1 == 0) {
    thunk_FUN_18125889c();
    return 1;
  }
  return 0;
}



/* ===== 1812550b0 FUN_1812550b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1812550b0(void)

{
  int iVar1;
  
  if (DAT_18132ef21 == '\0') {
    iVar1 = FUN_181255700();
    if (iVar1 == 0) {
      _DAT_18132ef28 = ram0x000181262790;
      uRam000000018132ef30._0_1_ = s_restrict__181262798[0];
      uRam000000018132ef30._1_1_ = s_restrict__181262798[1];
      uRam000000018132ef30._2_1_ = s_restrict__181262798[2];
      uRam000000018132ef30._3_1_ = s_restrict__181262798[3];
      uRam000000018132ef30._4_1_ = s_restrict__181262798[4];
      uRam000000018132ef30._5_1_ = s_restrict__181262798[5];
      uRam000000018132ef30._6_1_ = s_restrict__181262798[6];
      uRam000000018132ef30._7_1_ = s_restrict__181262798[7];
      _DAT_18132ef38 = 0xffffffffffffffff;
      _DAT_18132ef40 = ram0x000181262790;
      uRam000000018132ef48._0_1_ = s_restrict__181262798[0];
      uRam000000018132ef48._1_1_ = s_restrict__181262798[1];
      uRam000000018132ef48._2_1_ = s_restrict__181262798[2];
      uRam000000018132ef48._3_1_ = s_restrict__181262798[3];
      uRam000000018132ef48._4_1_ = s_restrict__181262798[4];
      uRam000000018132ef48._5_1_ = s_restrict__181262798[5];
      uRam000000018132ef48._6_1_ = s_restrict__181262798[6];
      uRam000000018132ef48._7_1_ = s_restrict__181262798[7];
      _DAT_18132ef50 = 0xffffffffffffffff;
    }
    else {
      iVar1 = _initialize_onexit_table(&DAT_18132ef28);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = _initialize_onexit_table(&DAT_18132ef40);
      if (iVar1 != 0) {
        return 0;
      }
    }
    DAT_18132ef21 = '\x01';
  }
  return 1;
}



/* ===== 181255130 FUN_181255130 ===== */

undefined1 FUN_181255130(void)

{
  char cVar1;
  
  cVar1 = FUN_1812559d0();
  if (cVar1 != '\0') {
    cVar1 = FUN_181258df0();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1812559f0();
  }
  return 0;
}



/* ===== 181255160 FUN_181255160 ===== */

undefined1 FUN_181255160(void)

{
  FUN_181258e04();
  FUN_1812559f0();
  return 1;
}



/* ===== 181255180 FUN_181255180 ===== */

void FUN_181255180(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_181255700();
  if ((iVar1 == 0) && (param_2 == 1)) {
    (*DAT_1812625a8)(param_1,0,param_3);
  }
  FUN_1812580e0(param_5,param_6);
  return;
}



/* ===== 1812551d0 FUN_1812551d0 ===== */

void FUN_1812551d0(void)

{
  int iVar1;
  
  iVar1 = FUN_181255700();
  if (iVar1 != 0) {
    FUN_181258c40(&DAT_18132ef28);
    return;
  }
  iVar1 = FUN_1812584f4();
  if (iVar1 == 0) {
    FUN_1812584d8();
    return;
  }
  return;
}



/* ===== 181255210 FUN_181255210 ===== */

void FUN_181255210(void)

{
  FUN_181258e4c(0);
  FUN_181255a20();
  return;
}



/* ===== 181255230 FUN_181255230 ===== */

undefined1 FUN_181255230(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_18132ef20 = 1;
  }
  FUN_181255450();
  cVar1 = FUN_1812559a0();
  if (cVar1 != '\0') {
    cVar1 = FUN_181258ddc();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_181255a00(0);
  }
  return 0;
}



/* ===== 181255270 FUN_181255270 ===== */

ulonglong FUN_181255270(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint7 uVar3;
  longlong lVar4;
  
  uVar1 = 0x5a4d;
  if (DAT_181253350 == 0x5a4d) {
    lVar4 = (longlong)DAT_18125338c;
    if ((*(int *)((longlong)&DAT_181253350 + lVar4) == 0x4550) &&
       (uVar1 = 0x20b, *(short *)(lVar4 + 0x181253368) == 0x20b)) {
      uVar2 = (ulonglong)*(ushort *)(lVar4 + 0x181253364) + 0x18 + (longlong)&DAT_181253350 + lVar4;
      uVar1 = uVar2 + (ulonglong)*(ushort *)(lVar4 + 0x181253356) * 0x28;
      while( true ) {
        uVar3 = (uint7)(uVar2 >> 8);
        if (uVar2 == uVar1) {
          return (ulonglong)uVar3 << 8;
        }
        if (((ulonglong)*(uint *)(uVar2 + 0xc) <= param_1 - 0x181253350U) &&
           (param_1 - 0x181253350U < (ulonglong)(*(int *)(uVar2 + 8) + *(uint *)(uVar2 + 0xc))))
        break;
        uVar2 = uVar2 + 0x28;
      }
      if (*(int *)(uVar2 + 0x24) < 0) {
        return uVar2 & 0xffffffffffffff00;
      }
      return CONCAT71(uVar3,1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



/* ===== 181255310 FUN_181255310 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_181255310(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_181255700();
  uVar1 = _DAT_18132ef18;
  if (((int)uVar2 != 0) && (param_1 == '\0')) {
    LOCK();
    _DAT_18132ef18 = 0;
    UNLOCK();
    uVar2 = uVar1;
  }
  return uVar2;
}



/* ===== 181255340 FUN_181255340 ===== */

undefined1 FUN_181255340(undefined1 param_1,char param_2)

{
  if ((DAT_18132ef20 == '\0') || (param_2 == '\0')) {
    FUN_181258e14();
    FUN_181255a00(param_1);
  }
  return 1;
}



/* ===== 181255370 FUN_181255370 ===== */

undefined8 FUN_181255370(void)

{
  return 0x18132f9b0;
}



/* ===== 181255380 FUN_181255380 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_181255380(void)

{
  _DAT_18132ef58 = 0;
  return;
}



/* ===== 181255390 FUN_181255390 ===== */

void FUN_181255390(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(param_1);
  return;
}



/* ===== 1812553a0 FUN_1812553a0 ===== */

/* WARNING: Removing unreachable block (ram,0x0001812553c0) */
/* WARNING: Removing unreachable block (ram,0x0001812553c8) */
/* WARNING: Removing unreachable block (ram,0x0001812553ce) */

void FUN_1812553a0(void)

{
  return;
}



/* ===== 1812553f0 FUN_1812553f0 ===== */

/* WARNING: Removing unreachable block (ram,0x000181255410) */
/* WARNING: Removing unreachable block (ram,0x000181255418) */
/* WARNING: Removing unreachable block (ram,0x00018125541e) */

void FUN_1812553f0(void)

{
  return;
}



/* ===== 181255450 FUN_181255450 ===== */

/* WARNING: Removing unreachable block (ram,0x000181255557) */
/* WARNING: Removing unreachable block (ram,0x000181255545) */
/* WARNING: Removing unreachable block (ram,0x000181255533) */
/* WARNING: Removing unreachable block (ram,0x00018125550c) */
/* WARNING: Removing unreachable block (ram,0x000181255487) */
/* WARNING: Removing unreachable block (ram,0x000181255462) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_181255450(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  iVar4 = *piVar1;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    DAT_18126c3e0 = 0x8000;
    DAT_18126c3e8 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      _DAT_18132ef5c = _DAT_18132ef5c | 1;
    }
  }
  uVar13 = 0;
  uVar8 = 0;
  uVar11 = 0;
  if (iVar4 < 7) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    piVar1 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar12 = piVar1[1];
    uVar10 = piVar1[2];
    if ((uVar12 >> 9 & 1) != 0) {
      _DAT_18132ef5c = _DAT_18132ef5c | 2;
    }
    if (0 < *piVar1) {
      lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar13 = *(uint *)(lVar3 + 8);
    }
    if (0x23 < iVar4) {
      lVar3 = cpuid(0x24);
      uVar8 = *(uint *)(lVar3 + 4);
    }
    if (0x28 < iVar4) {
      lVar3 = cpuid(0x29);
      uVar11 = *(uint *)(lVar3 + 4);
    }
  }
  DAT_18126c3d8 = 1;
  DAT_18126c3dc = 2;
  uVar6 = DAT_18126c3f0 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_18126c3d8 = 2;
    DAT_18126c3dc = 6;
    uVar6 = DAT_18126c3f0 & 0xffffffffffffffee;
  }
  DAT_18126c3f0 = uVar6;
  if ((uVar5 >> 0x1b & 1) == 0) {
    return 0;
  }
  uVar6 = xinuse(0);
  uVar9 = in_XCR0 & uVar6 & 0xffffffff;
  uVar6 = DAT_18126c3f0;
  if (((uVar5 >> 0x1c & 1) == 0) || (bVar7 = (byte)uVar9, (bVar7 & 6) != 6)) goto LAB_1812556c4;
  DAT_18126c3d8 = 3;
  uVar5 = DAT_18126c3dc | 8;
  if ((uVar12 & 0x20) == 0) {
LAB_18125566a:
    DAT_18126c3f0 = uVar6;
    DAT_18126c3dc = uVar5;
    uVar5 = DAT_18126c3dc;
    uVar6 = DAT_18126c3f0;
  }
  else {
    DAT_18126c3d8 = 5;
    uVar5 = DAT_18126c3dc | 0x28;
    uVar6 = DAT_18126c3f0 & 0xfffffffffffffffd;
    if ((uVar12 & 0xd0030000) == 0xd0030000) {
      if ((bVar7 & 0xe0) != 0xe0) goto LAB_18125566a;
      DAT_18126c3dc = DAT_18126c3dc | 0x68;
      DAT_18126c3d8 = 6;
      uVar5 = DAT_18126c3dc;
      uVar6 = DAT_18126c3f0 & 0xffffffffffffffd9;
    }
  }
  DAT_18126c3f0 = uVar6;
  DAT_18126c3dc = uVar5;
  if ((uVar10 >> 0x17 & 1) != 0) {
    DAT_18126c3f0 = DAT_18126c3f0 & 0xfffffffffeffffff;
  }
  uVar6 = DAT_18126c3f0;
  if (((uVar13 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
    _DAT_18132ef60 = uVar8 & 0xff;
    uVar6 = DAT_18126c3f0 & 0xfffffffffeffffd0;
    if (1 < _DAT_18132ef60) {
      uVar6 = DAT_18126c3f0 & 0xfffffffffeffff90;
    }
  }
LAB_1812556c4:
  DAT_18126c3f0 = uVar6;
  if ((((uVar13 >> 0x15 & 1) != 0) && ((uVar11 & 1) != 0)) && ((uVar9 >> 0x13 & 1) != 0)) {
    DAT_18126c3f0 = DAT_18126c3f0 & 0xffffffffffffff7f;
  }
  return 0;
}



/* ===== 181255700 FUN_181255700 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_181255700(void)

{
  return _DAT_18132f9ac != 0;
}



/* ===== 181255710 FUN_181255710 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_181255710(int *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int *local_58;
  undefined8 local_50;
  
  __except_validate_context_record(param_3);
  lVar1 = param_4[1];
  puVar2 = (uint *)param_4[7];
  uVar10 = *param_4 - lVar1;
  uVar8 = *(uint *)(param_4 + 9);
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    local_58 = param_1;
    local_50 = param_3;
    if (uVar8 < *puVar2) {
      do {
        if (((puVar2[(ulonglong)uVar8 * 4 + 1] <= uVar10) &&
            (uVar10 < puVar2[(ulonglong)uVar8 * 4 + 2])) && (puVar2[(ulonglong)uVar8 * 4 + 4] != 0))
        {
          if (puVar2[(ulonglong)uVar8 * 4 + 3] != 1) {
            iVar3 = (*(code *)((ulonglong)puVar2[(ulonglong)uVar8 * 4 + 3] + lVar1))
                              (&local_58,param_2);
            if (iVar3 < 0) {
              return 0;
            }
            if (iVar3 < 1) goto LAB_18125582b;
          }
          if (((*param_1 == -0x1f928c9d) && (ram0x0001812627a0 != (code *)0x0)) &&
             (iVar3 = FUN_181260540(s_restrict__181262798 + 8), iVar3 != 0)) {
            (*ram0x0001812627a0)(param_1,1);
          }
          FUN_181255bd0((ulonglong)puVar2[(ulonglong)uVar8 * 4 + 4] + lVar1,param_2,1);
          (*DAT_1812623b8)(param_2,(ulonglong)puVar2[(ulonglong)uVar8 * 4 + 4] + lVar1,param_1,
                           *param_1,param_4[5],param_4[8]);
          FUN_181255c00();
        }
LAB_18125582b:
        uVar8 = uVar8 + 1;
      } while (uVar8 < *puVar2);
    }
  }
  else {
    uVar9 = *puVar2;
    if (uVar8 < uVar9) {
      uVar7 = param_4[4] - lVar1;
      do {
        uVar4 = (ulonglong)uVar8;
        if ((puVar2[uVar4 * 4 + 1] <= uVar10) && (uVar10 < puVar2[uVar4 * 4 + 2])) {
          if ((param_1[1] & 0x20U) != 0) {
            uVar6 = 0;
            if (uVar9 != 0) {
              do {
                if ((((puVar2[uVar6 * 4 + 1] <= uVar7) && (uVar7 < puVar2[uVar6 * 4 + 2])) &&
                    (puVar2[uVar6 * 4 + 4] == puVar2[uVar4 * 4 + 4])) &&
                   (puVar2[uVar6 * 4 + 3] == puVar2[uVar4 * 4 + 3])) break;
                uVar5 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar5;
              } while (uVar5 < uVar9);
            }
            if ((uint)uVar6 != *puVar2) {
              return 1;
            }
          }
          if (puVar2[uVar4 * 4 + 4] == 0) {
            *(uint *)(param_4 + 9) = uVar8 + 1;
            (*(code *)((ulonglong)puVar2[uVar4 * 4 + 3] + lVar1))(1);
          }
          else if ((uVar7 == puVar2[uVar4 * 4 + 4]) && ((param_1[1] & 0x20U) != 0)) {
            return 1;
          }
        }
        uVar9 = *puVar2;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar9);
    }
  }
  return 1;
}



/* ===== 181255960 FUN_181255960 ===== */

void FUN_181255960(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*DAT_1812623c0)();
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    thunk_FUN_181259da0(puVar2);
    puVar2 = puVar1;
  }
  return;
}



/* ===== 1812559a0 FUN_1812559a0 ===== */

undefined1 FUN_1812559a0(void)

{
  char cVar1;
  
  cVar1 = FUN_181255f30();
  if (cVar1 != '\0') {
    cVar1 = FUN_181255e90();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_181255fc0();
  }
  return 0;
}



/* ===== 1812559d0 FUN_1812559d0 ===== */

bool FUN_1812559d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_181255db0();
  return lVar1 != 0;
}



/* ===== 1812559f0 FUN_1812559f0 ===== */

undefined1 FUN_1812559f0(void)

{
  FUN_181255c70();
  return 1;
}



/* ===== 181255a00 FUN_181255a00 ===== */

undefined1 FUN_181255a00(char param_1)

{
  if (param_1 == '\0') {
    FUN_181255f00();
    FUN_181255fc0();
  }
  return 1;
}



/* ===== 181255a20 FUN_181255a20 ===== */

undefined1 FUN_181255a20(void)

{
  FUN_181255f00();
  return 1;
}



/* ===== 181255a30 __DestructExceptionObject ===== */

/* Library Function - Single Match
    __DestructExceptionObject
   
   Library: Visual Studio 2019 Release */

void __DestructExceptionObject(int *param_1)

{
  byte *pbVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
     ((param_1[8] + 0xe66cfae0U < 3 && (pbVar1 = *(byte **)(param_1 + 0xc), pbVar1 != (byte *)0x0)))
     ) {
    if (*(int *)(pbVar1 + 4) == 0) {
      if (((*pbVar1 & 0x10) != 0) && (**(longlong **)(param_1 + 10) != 0)) {
        (*DAT_1812625a8)();
      }
    }
    else {
      FUN_181255aa0(*(undefined8 *)(param_1 + 10),
                    (longlong)*(int *)(pbVar1 + 4) + *(longlong *)(param_1 + 0xe));
    }
  }
  return;
}



/* ===== 181255aa0 FUN_181255aa0 ===== */

void FUN_181255aa0(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000181255aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== 181255ab0 FUN_181255ab0 ===== */

undefined8 FUN_181255ab0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_181255cd0();
  plVar1 = *(longlong **)(lVar2 + 0x58);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (longlong *)plVar1[1];
  }
  return 0;
}



/* ===== 181255af0 FUN_181255af0 ===== */

longlong FUN_181255af0(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if (iVar1 < 0) {
    return *param_2 + param_1;
  }
  return (longlong)*(int *)((longlong)param_2[2] + *(longlong *)(iVar1 + param_1)) + (longlong)iVar1
         + *param_2 + param_1;
}



/* ===== 181255b20 FUN_181255b20 ===== */

undefined8 FUN_181255b20(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  piVar2 = (int *)*param_1;
  iVar1 = *piVar2;
  if ((iVar1 == -0x1fbcbcae) || (iVar1 == -0x1fbcb0b3)) {
    lVar4 = FUN_181255cd0();
    if (0 < *(int *)(lVar4 + 0x30)) {
      lVar4 = FUN_181255cd0();
      *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
    }
  }
  else if (iVar1 == -0x1f928c9d) {
    lVar4 = FUN_181255cd0();
    *(int **)(lVar4 + 0x20) = piVar2;
    uVar3 = param_1[1];
    lVar4 = FUN_181255cd0();
    *(undefined8 *)(lVar4 + 0x28) = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_181258e5c();
  }
  return 0;
}



/* ===== 181255b90 FUN_181255b90 ===== */

void FUN_181255b90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_181258e5c();
}



/* ===== 181255bd0 FUN_181255bd0 ===== */

void FUN_181255bd0(void)

{
  return;
}



/* ===== 181255c00 FUN_181255c00 ===== */

void FUN_181255c00(void)

{
  return;
}



/* ===== 181255c10 __except_validate_context_record ===== */

/* Library Function - Single Match
    __except_validate_context_record
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __except_validate_context_record(longlong param_1)

{
  code *pcVar1;
  
  if (DAT_181262598 != &DAT_181255440) {
    if ((*(ulonglong *)(param_1 + 0x98) < *(ulonglong *)((longlong)Self + 0x10)) ||
       (*(ulonglong *)((longlong)Self + 8) < *(ulonglong *)(param_1 + 0x98))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0xd);
    }
  }
  return;
}



/* ===== 181255c70 FUN_181255c70 ===== */

void FUN_181255c70(void)

{
  longlong lVar1;
  
  if (DAT_18126c400 != -1) {
    lVar1 = (*DAT_1812623e0)();
    (*DAT_1812623e8)(DAT_18126c400,0);
    if ((lVar1 != 0) && (lVar1 != 0x18132ef70)) {
      thunk_FUN_181259da0(lVar1);
      return;
    }
  }
  return;
}



/* ===== 181255cd0 FUN_181255cd0 ===== */

longlong FUN_181255cd0(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (DAT_18126c400 != -1) {
    uVar1 = (*DAT_1812623c8)();
    lVar3 = (*DAT_1812623e0)(DAT_18126c400);
    if (lVar3 != -1) {
      if (lVar3 != 0) {
LAB_181255d68:
        (*DAT_1812623d0)(uVar1);
        return lVar3;
      }
      iVar2 = (*DAT_1812623e8)(DAT_18126c400,0xffffffffffffffff);
      if (iVar2 != 0) {
        lVar3 = _calloc_base(1,0x80);
        if (lVar3 == 0) {
          (*DAT_1812623e8)(DAT_18126c400,0);
          lVar3 = 0;
        }
        else {
          iVar2 = (*DAT_1812623e8)(DAT_18126c400,lVar3);
          if (iVar2 != 0) {
            *(undefined4 *)(lVar3 + 0x78) = 0xfffffffe;
            thunk_FUN_181259da0(0);
            goto LAB_181255d68;
          }
          (*DAT_1812623e8)(DAT_18126c400,0);
        }
        thunk_FUN_181259da0(lVar3);
      }
    }
    (*DAT_1812623d0)(uVar1);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 181255db0 FUN_181255db0 ===== */

longlong FUN_181255db0(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (DAT_18126c400 == -1) {
    return 0;
  }
  uVar1 = (*DAT_1812623c8)();
  lVar3 = (*DAT_1812623e0)(DAT_18126c400);
  if (lVar3 != -1) {
    if (lVar3 != 0) goto LAB_181255e67;
    iVar2 = (*DAT_1812623e8)(DAT_18126c400,0xffffffffffffffff);
    if (iVar2 != 0) {
      lVar4 = _calloc_base(1,0x80);
      if ((lVar4 == 0) || (iVar2 = (*DAT_1812623e8)(DAT_18126c400,lVar4), iVar2 == 0)) {
        (*DAT_1812623e8)(DAT_18126c400,0);
        lVar3 = 0;
        lVar5 = lVar4;
      }
      else {
        *(undefined4 *)(lVar4 + 0x78) = 0xfffffffe;
        lVar5 = 0;
        lVar3 = lVar4;
      }
      thunk_FUN_181259da0(lVar5);
      goto LAB_181255e67;
    }
  }
  lVar3 = 0;
LAB_181255e67:
  (*DAT_1812623d0)(uVar1);
  return lVar3;
}



/* ===== 181255e90 FUN_181255e90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_181255e90(void)

{
  int iVar1;
  
  DAT_18126c400 = (*DAT_1812623d8)(&LAB_181255c50);
  if (DAT_18126c400 != -1) {
    iVar1 = (*DAT_1812623e8)(DAT_18126c400,0x18132ef70);
    if (iVar1 != 0) {
      _DAT_18132efe8 = 0xfffffffe;
      return 1;
    }
    if (DAT_18126c400 != -1) {
      (*DAT_1812623f0)();
      DAT_18126c400 = -1;
    }
  }
  return 0;
}



/* ===== 181255f00 FUN_181255f00 ===== */

undefined1 FUN_181255f00(void)

{
  if (DAT_18126c400 != -1) {
    (*DAT_1812623f0)();
    DAT_18126c400 = -1;
  }
  return 1;
}



/* ===== 181255f30 FUN_181255f30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_181255f30(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = (*DAT_181262408)(uVar3 * 0x28 + 0x18132eff0,4000,0);
    if (iVar1 == 0) {
      uVar3 = (ulonglong)_DAT_18132f018;
      uVar2 = _DAT_18132f018;
      while (uVar2 != 0) {
        uVar2 = (int)uVar3 - 1;
        uVar3 = (ulonglong)uVar2;
        (*DAT_181262410)(uVar3 * 0x28 + 0x18132eff0);
        _DAT_18132f018 = _DAT_18132f018 - 1;
      }
      return 0;
    }
    _DAT_18132f018 = _DAT_18132f018 + 1;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 == 0);
  return 1;
}



/* ===== 181255fc0 FUN_181255fc0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_181255fc0(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)_DAT_18132f018;
  uVar1 = _DAT_18132f018;
  while (uVar1 != 0) {
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
    (*DAT_181262410)(uVar2 * 0x28 + 0x18132eff0);
    _DAT_18132f018 = _DAT_18132f018 - 1;
  }
  return 1;
}



/* ===== 181256010 FUN_181256010 ===== */

undefined8 FUN_181256010(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *local_28;
  undefined8 local_20;
  
  local_28 = param_1;
  local_20 = param_3;
  FUN_181255cd0();
  (*DAT_1812625a8)(*param_1,&local_28);
  return 0;
}



/* ===== 1812560d0 FUN_1812560d0 ===== */

void FUN_1812560d0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong local_res8;
  longlong local_res18 [2];
  
  uVar8 = *(uint *)(param_3 + 0xc);
  uVar7 = (ulonglong)uVar8;
  iVar2 = FUN_181256810(param_3);
  local_res8 = *param_1;
  do {
    do {
      if (uVar8 == 0) goto LAB_181256195;
      uVar8 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar8;
      lVar6 = (longlong)*(int *)(param_3 + 0x10) + uVar7 * 0x14 + param_2[1];
    } while ((iVar2 <= *(int *)(lVar6 + 4)) || (*(int *)(lVar6 + 8) < iVar2));
    puVar4 = (uint *)(*DAT_181262418)(*param_2,local_res18,0);
    lVar10 = *(int *)(lVar6 + 0x10) + local_res18[0];
    uVar1 = *(uint *)(lVar6 + 0xc);
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        if ((longlong)*(int *)(lVar10 + 0xc + uVar5 * 0x14) == (ulonglong)*puVar4)
        goto LAB_181256180;
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
      } while (uVar3 < uVar1);
    }
  } while (uVar1 <= (uint)uVar5);
LAB_181256180:
  local_res8 = *(longlong *)((longlong)*(int *)(lVar10 + 0x10 + uVar5 * 0x14) + *param_1);
LAB_181256195:
  iVar2 = FUN_181256810(param_3,param_2);
  uVar8 = *(uint *)(param_3 + 0xc);
  uVar7 = (ulonglong)uVar8;
  do {
    if (uVar8 == 0) {
      iVar9 = -1;
      break;
    }
    lVar6 = FUN_181255cd0();
    uVar8 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar8;
    lVar6 = (longlong)*(int *)(param_3 + 0x10) + *(longlong *)(lVar6 + 0x60);
    iVar9 = *(int *)(lVar6 + 4 + uVar7 * 0x14);
  } while ((iVar2 <= iVar9) || (*(int *)(lVar6 + 8 + uVar7 * 0x14) < iVar2));
  FUN_181257ad0(&local_res8,param_2,param_3,iVar9);
  return;
}



/* ===== 181256200 FUN_181256200 ===== */

longlong * FUN_181256200(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong local_res8;
  
  uVar7 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar7;
  iVar2 = FUN_181256810(param_3);
  *param_4 = *param_1;
  if (uVar7 == 0) {
    return param_4;
  }
  do {
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
    lVar6 = (longlong)*(int *)(param_3 + 0x10) + uVar8 * 0x14 + param_2[1];
    if ((*(int *)(lVar6 + 4) < iVar2) && (iVar2 <= *(int *)(lVar6 + 8))) {
      puVar4 = (uint *)(*DAT_181262418)(*param_2,&local_res8,0);
      lVar9 = *(int *)(lVar6 + 0x10) + local_res8;
      uVar1 = *(uint *)(lVar6 + 0xc);
      uVar5 = 0;
      if (uVar1 != 0) {
        do {
          if ((longlong)*(int *)(lVar9 + 0xc + uVar5 * 0x14) == (ulonglong)*puVar4)
          goto LAB_1812562b0;
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
        } while (uVar3 < uVar1);
      }
      if ((uint)uVar5 < uVar1) {
LAB_1812562b0:
        *param_4 = *(longlong *)((longlong)*(int *)(lVar9 + 0x10 + uVar5 * 0x14) + *param_1);
        return param_4;
      }
    }
    if (uVar7 == 0) {
      return param_4;
    }
  } while( true );
}



/* ===== 181256300 FUN_181256300 ===== */

undefined8 *
FUN_181256300(undefined8 *param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_3c;
  
  uVar5 = *(uint *)(param_5 + 0xc);
  iVar4 = FUN_181256810(param_5,param_4);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(longlong *)(param_4 + 8);
  uVar9 = 0xffffffff;
  lVar8 = (longlong)*(int *)(param_5 + 0x10);
  uVar10 = 0xffffffff;
  lVar2 = lVar3 + lVar8;
  uVar7 = uVar5;
  while( true ) {
    uVar1 = uVar7 - 1;
    if ((*(int *)(lVar3 + (ulonglong)uVar1 * 0x14 + 4 + lVar8) < iVar4) &&
       (iVar4 <= *(int *)(lVar2 + 8 + (ulonglong)uVar1 * 0x14))) break;
    uVar7 = uVar1;
    if (uVar1 == 0) {
      lVar8 = 0;
LAB_18125638c:
      uVar7 = 0;
      do {
        uVar6 = (ulonglong)uVar7;
        if ((((lVar8 == 0) ||
             ((*(int *)(lVar8 + 4) < *(int *)(lVar2 + uVar6 * 0x14) &&
              (*(int *)(lVar2 + 4 + uVar6 * 0x14) <= *(int *)(lVar8 + 8))))) &&
            (*(int *)(lVar2 + uVar6 * 0x14) <= param_3)) &&
           (param_3 <= *(int *)(lVar2 + 4 + uVar6 * 0x14))) {
          uVar10 = uVar7;
          if (uVar9 == 0xffffffff) {
            uVar9 = uVar7;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
      *param_1 = param_2;
      param_1[2] = param_2;
      uVar5 = 0;
      if (uVar9 != 0xffffffff) {
        uVar5 = uVar9;
      }
      *(uint *)(param_1 + 1) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
      uVar5 = 0;
      if (uVar9 != 0xffffffff) {
        uVar5 = uVar10 + 1;
      }
      *(undefined4 *)((longlong)param_1 + 0x1c) = local_3c;
      *(uint *)(param_1 + 3) = uVar5;
      return param_1;
    }
  }
  lVar8 = lVar3 + (ulonglong)(uVar7 - 1) * 0x14 + lVar8;
  goto LAB_18125638c;
}



/* ===== 181256430 FUN_181256430 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_181256430(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,byte param_11)

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  wchar_t local_b8 [4];
  wchar_t awStack_b0 [4];
  wchar_t local_a8 [4];
  wchar_t awStack_a0 [4];
  undefined1 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  wchar_t awStack_50 [4];
  wchar_t local_48 [4];
  wchar_t awStack_40 [4];
  wchar_t local_38 [2];
  wchar_t awStack_34 [2];
  wchar_t awStack_30 [2];
  undefined4 uStack_2c;
  wchar_t local_28 [8];
  ulonglong local_18;
  
  local_18 = DAT_18126c390 ^ (ulonglong)auStack_e8;
  local_b8 = (wchar_t  [4])u_api_ms_win_core_processthreads_l_181263590._0_8_;
  awStack_b0 = (wchar_t  [4])u_api_ms_win_core_processthreads_l_181263590._8_8_;
  local_a8 = (wchar_t  [4])u_api_ms_win_core_processthreads_l_181263590._16_8_;
  awStack_a0 = (wchar_t  [4])u_api_ms_win_core_processthreads_l_181263590._24_8_;
  awStack_50 = (wchar_t  [4])u_api_ms_win_core_string_l1_1_0_1812635e0._24_8_;
  local_48 = (wchar_t  [4])u_api_ms_win_core_string_l1_1_0_1812635e0._32_8_;
  awStack_40 = (wchar_t  [4])u_api_ms_win_core_string_l1_1_0_1812635e0._40_8_;
  local_28._0_8_ = u_api_ms_win_core_synch_l1_2_0_181263620._0_8_;
  local_38 = (wchar_t  [2])u_api_ms_win_core_string_l1_1_0_1812635e0._48_4_;
  awStack_34 = (wchar_t  [2])u_api_ms_win_core_string_l1_1_0_1812635e0._52_4_;
  awStack_30 = (wchar_t  [2])u_api_ms_win_core_string_l1_1_0_1812635e0._56_4_;
  uStack_2c = uRam000000018126361c;
  local_98 = &LAB_181257830;
  local_88 = param_5;
  lStack_80 = (longlong)param_7;
  uStack_70 = param_6;
  uStack_60 = (ulonglong)param_11;
  local_c0 = param_10[8];
  local_c8 = param_10[5];
  local_58 = 0x19930520;
  uStack_90 = param_4;
  local_78 = param_3;
  local_68 = param_2;
  (*DAT_1812623b8)(*param_1,*param_10,local_b8,0);
  return;
}



/* ===== 181256560 _CreateFrameInfo ===== */

/* Library Function - Single Match
    _CreateFrameInfo
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 * _CreateFrameInfo(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  lVar1 = FUN_181255cd0();
  if (param_1 < *(undefined8 **)(lVar1 + 0x58)) {
    lVar1 = FUN_181255cd0();
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  lVar1 = FUN_181255cd0();
  *(undefined8 **)(lVar1 + 0x58) = param_1;
  return param_1;
}



/* ===== 1812565a0 FUN_1812565a0 ===== */

void FUN_1812565a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_181255cd0();
  if (param_1 == *(longlong *)(lVar2 + 0x58)) {
    lVar2 = FUN_181255cd0();
    lVar2 = *(longlong *)(lVar2 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar3 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = FUN_181255cd0();
        *(longlong *)(lVar2 + 0x58) = lVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 181256600 FUN_181256600 ===== */

undefined8 FUN_181256600(void)

{
  longlong lVar1;
  
  lVar1 = FUN_181255cd0();
  return *(undefined8 *)(lVar1 + 0x60);
}



/* ===== 181256620 FUN_181256620 ===== */

undefined8 FUN_181256620(void)

{
  longlong lVar1;
  
  lVar1 = FUN_181255cd0();
  return *(undefined8 *)(lVar1 + 0x68);
}



/* ===== 181256640 FUN_181256640 ===== */

void FUN_181256640(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_181255cd0();
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  return;
}



/* ===== 181256660 FUN_181256660 ===== */

void FUN_181256660(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_181255cd0();
  *(undefined8 *)(lVar1 + 0x68) = param_1;
  return;
}



/* ===== 181256700 FUN_181256700 ===== */

int FUN_181256700(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)((longlong)*(int *)(param_3 + 0x1c) + *param_1);
  if (iVar2 != -2) {
    return iVar2;
  }
  uVar3 = param_2[1];
  lVar1 = uVar3 + (longlong)*(int *)(param_3 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(uint *)(param_3 + 0x14) != 0) {
    uVar5 = 0;
    do {
      if (*param_2 < (longlong)*(int *)(lVar1 + uVar5 * 8) + uVar3) break;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_3 + 0x14));
    if ((int)uVar5 != 0) {
      return *(int *)(uVar3 + (ulonglong)((int)uVar5 - 1) * 8 + 4 +
                     (longlong)*(int *)(param_3 + 0x18));
    }
  }
  return -1;
}



/* ===== 181256790 GetUnwindTryBlock ===== */

/* Library Function - Multiple Matches With Same Base Name
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
    int __cdecl __GetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio */

undefined4 GetUnwindTryBlock(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_181256200();
  return *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1);
}



/* ===== 1812567c0 FUN_1812567c0 ===== */

void FUN_1812567c0(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + *param_1) = param_4;
  return;
}



/* ===== 1812567d0 SetUnwindTryBlock ===== */

/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl __FrameHandler3::SetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
    void __cdecl __SetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void SetUnwindTryBlock(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_181256200();
  if (*(int *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1) < param_4) {
    *(int *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1) = param_4;
  }
  return;
}



/* ===== 181256810 FUN_181256810 ===== */

undefined4 FUN_181256810(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    uVar2 = param_2[1];
    lVar1 = uVar2 + (longlong)*(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVar4 = 0;
        do {
          if (*param_2 < (longlong)*(int *)(lVar1 + uVar4 * 8) + uVar2) break;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x14));
        if ((int)uVar4 != 0) {
          return *(undefined4 *)
                  (uVar2 + (ulonglong)((int)uVar4 - 1) * 8 + 4 + (longlong)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 181256880 FUN_181256880 ===== */

undefined4 FUN_181256880(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = lVar2 + *(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVar4 = 0;
        do {
          if (param_3 < (ulonglong)(*(int *)(lVar1 + uVar4 * 8) + lVar2)) break;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x14));
        if ((int)uVar4 != 0) {
          return *(undefined4 *)
                  (lVar2 + (ulonglong)((int)uVar4 - 1) * 8 + 4 + (longlong)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 1812568f0 FUN_1812568f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1812568f0(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar1 = param_3[1];
  if ((uVar1 != 0) && (lVar4 = FUN_181256600(), lVar4 + (int)uVar1 != 0)) {
    uVar1 = param_3[1];
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_181256600();
      lVar4 = lVar4 + (int)uVar1;
    }
    if ((*(char *)(lVar4 + 0x10) != '\0') && ((param_3[2] != 0 || ((int)*param_3 < 0)))) {
      uVar1 = *param_3;
      if (-1 < (int)uVar1) {
        param_2 = (longlong *)((longlong)(int)param_3[2] + *param_2);
      }
      if ((((char)uVar1 < '\0') && ((*param_4 & 0x10) != 0)) && (_DAT_18132ef68 != 0)) {
        lVar4 = (*DAT_1812625a8)();
        if ((lVar4 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVar4;
        lVar4 = FUN_181255af0(lVar4,param_4 + 8);
        *param_2 = lVar4;
      }
      else if ((uVar1 & 8) == 0) {
        if ((*param_4 & 1) == 0) {
          iVar2 = *(int *)(param_4 + 0x18);
          if (iVar2 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = FUN_181256620();
            lVar4 = lVar4 + iVar2;
          }
          lVar3 = *(longlong *)(param_1 + 0x28);
          if (lVar4 != 0) {
            if (((lVar3 == 0) || (param_2 == (longlong *)0x0)) ||
               ((iVar2 = *(int *)(param_4 + 0x18), iVar2 == 0 ||
                (lVar4 = FUN_181256620(), lVar4 + iVar2 == 0)))) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            return ((*param_4 & 4) != 0) + '\x01';
          }
          if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          iVar2 = *(int *)(param_4 + 0x14);
          uVar5 = FUN_181255af0(lVar3,param_4 + 8);
          FUN_1812609f0(param_2,uVar5,(longlong)iVar2);
        }
        else {
          if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          FUN_1812609f0(param_2,*(longlong *)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
          if ((*(int *)(param_4 + 0x14) == 8) && (*param_2 != 0)) {
            lVar4 = FUN_181255af0(*param_2,param_4 + 8);
            *param_2 = lVar4;
          }
        }
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if ((lVar4 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVar4;
        lVar4 = FUN_181255af0(lVar4,param_4 + 8);
        *param_2 = lVar4;
      }
      return '\0';
    }
  }
  return '\0';
}



/* ===== 181256ad0 FUN_181256ad0 ===== */

void FUN_181256ad0(longlong param_1,longlong *param_2,int *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (-1 < *param_3) {
    param_2 = (longlong *)((longlong)param_3[2] + *param_2);
  }
  iVar1 = FUN_1812568f0();
  if (iVar1 == 1) {
    uVar2 = FUN_181255af0(*(undefined8 *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_181256620();
      lVar3 = lVar3 + iVar1;
    }
    FUN_181257e20(param_2,lVar3,uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_181255af0(*(undefined8 *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_181256620();
      lVar3 = lVar3 + iVar1;
    }
    FUN_181257e30(param_2,lVar3,uVar2,1);
  }
  return;
}



/* ===== 181257140 FUN_181257140 ===== */

void FUN_181257140(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,int param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  uint uVar8;
  int *piVar9;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar10;
  undefined8 in_stack_ffffffffffffff58;
  undefined1 local_70 [8];
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  uint local_40;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  if (*param_1 != -0x7ffffffd) {
    lVar4 = FUN_181255cd0();
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      lVar4 = FUN_181255cd0();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      lVar5 = (*DAT_181262420)(0);
      if (((lVar4 != lVar5) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) {
        uVar6 = CONCAT44(uVar10,param_7);
        iVar3 = FUN_181256010(param_1,param_2,param_3,param_4,param_5,uVar6,param_8,param_6);
        uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
        in_stack_ffffffffffffff58 = param_8;
        if (iVar3 != 0) {
          return;
        }
      }
    }
    local_60 = *(undefined8 *)(param_4 + 8);
    local_68 = param_5;
    if (*(int *)(param_5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_181256300(&local_58,&local_68,param_6,param_4,param_5,CONCAT44(uVar10,param_7));
    uVar8 = local_50;
    if (local_50 < local_40) {
      do {
        piVar9 = (int *)((longlong)*(int *)(*local_58 + 0x10) + (ulonglong)uVar8 * 0x14 +
                        local_58[1]);
        iVar3 = *piVar9;
        if ((iVar3 <= param_6) && (param_6 <= piVar9[1])) {
          iVar1 = piVar9[2];
          pbVar7 = (byte *)(*(longlong *)(param_4 + 8) + -0x14 +
                           (longlong)piVar9[4] + (ulonglong)(uint)piVar9[3] * 0x14);
          iVar2 = *(int *)(pbVar7 + 4);
          if ((iVar2 != 0) && (lVar4 = FUN_181256600(), lVar4 + iVar2 != 0)) {
            iVar2 = *(int *)(pbVar7 + 4);
            if (iVar2 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = FUN_181256600();
              lVar4 = lVar4 + iVar2;
            }
            if (*(char *)(lVar4 + 0x10) != '\0') goto LAB_18125734d;
          }
          uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
          if ((*pbVar7 & 0x40) == 0) {
            uVar6 = FUN_181256200(param_2,param_4,param_5,local_70);
            lVar4 = FUN_181256600();
            in_stack_ffffffffffffff58 = CONCAT44(uVar10,iVar3);
            FUN_181256430(param_2,param_1,param_3,uVar6,*(int *)(pbVar7 + 0xc) + lVar4,param_5,
                          in_stack_ffffffffffffff58,iVar1,pbVar7,param_4,0);
          }
        }
LAB_18125734d:
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_40);
    }
  }
  return;
}



/* ===== 181257710 FUN_181257710 ===== */

undefined8 * FUN_181257710(undefined8 *param_1,longlong param_2)

{
  *param_1 = u_api_ms_win_core_synch_l1_2_0_181263620 + 8;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_181257ee0(param_2 + 8);
  *param_1 = u_api_ms_win_core_sysinfo_l1_2_1_181263660;
  return param_1;
}



/* ===== 181257780 std::exception::exception ===== */

/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Library: Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(wchar_t **)this = u_api_ms_win_core_synch_l1_2_0_181263620 + 8;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  FUN_181257ee0(param_1 + 8);
  return this;
}



/* ===== 1812577e0 FUN_1812577e0 ===== */

undefined8 * FUN_1812577e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = u_api_ms_win_core_synch_l1_2_0_181263620 + 8;
  FUN_181257f80(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_181259da0(param_1,0x18);
  }
  return param_1;
}



/* ===== 181257a40 FUN_181257a40 ===== */

undefined8 FUN_181257a40(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)*param_1;
  *param_3 = 0;
  if (*piVar1 == -0x1f928c9d) {
    if (((piVar1[6] == 4) && (piVar1[8] + 0xe66cfae0U < 3)) &&
       (*(longlong *)(piVar1 + 10) == *(longlong *)(param_2 + 0x28))) {
      *param_3 = 1;
    }
    if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
       ((piVar1[8] + 0xe66cfae0U < 3 && (*(longlong *)(piVar1 + 0xc) == 0)))) {
      lVar2 = FUN_181255cd0();
      *(undefined4 *)(lVar2 + 0x40) = 1;
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}



/* ===== 181257ad0 FUN_181257ad0 ===== */

void FUN_181257ad0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  uVar3 = FUN_181256600();
  iVar2 = FUN_181256700(param_1,param_2,param_3);
  lVar4 = FUN_181255cd0();
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = FUN_181256600();
    lVar5 = (longlong)iVar2 * 8;
    iVar2 = *(int *)(*(int *)(param_3 + 8) + lVar5 + lVar4);
    iVar1 = *(int *)(param_3 + 8);
    iVar6 = iVar2;
    lVar4 = FUN_181256600();
    if (*(int *)(lVar4 + iVar1 + 4 + lVar5) != 0) {
      iVar1 = *(int *)(param_3 + 8);
      lVar4 = FUN_181256600();
      iVar1 = *(int *)(lVar4 + iVar1 + 4 + lVar5);
      lVar4 = FUN_181256600();
      if (lVar4 + iVar1 != 0) {
        FUN_1812567c0(param_1,param_2,param_3,iVar2,iVar6);
        iVar1 = *(int *)(param_3 + 8);
        lVar4 = FUN_181256600();
        if (*(int *)(lVar4 + iVar1 + 4 + lVar5) == 0) {
          lVar4 = 0;
        }
        else {
          iVar1 = *(int *)(param_3 + 8);
          lVar4 = FUN_181256600();
          iVar1 = *(int *)(lVar4 + iVar1 + 4 + lVar5);
          lVar4 = FUN_181256600();
          lVar4 = lVar4 + iVar1;
        }
        _CallSettingFrame(lVar4,param_1,0x103);
        FUN_181256640(uVar3);
      }
    }
  }
  lVar4 = FUN_181255cd0();
  if (0 < *(int *)(lVar4 + 0x30)) {
    lVar4 = FUN_181255cd0();
    *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_1812567c0(param_1,param_2,param_3,iVar2);
  return;
}



/* ===== 181257e20 FUN_181257e20 ===== */

void FUN_181257e20(undefined8 param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000181257e26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_3);
  return;
}



/* ===== 181257e30 FUN_181257e30 ===== */

void FUN_181257e30(undefined8 param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3,
                  undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000181257e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_3,param_4);
  return;
}



/* ===== 181257ea0 _CallSettingFrame ===== */

/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */

void _CallSettingFrame(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)FUN_181255bd0(param_1,*param_2);
  (*pcVar1)();
  uVar2 = FUN_181255c00();
  FUN_181255bd0(uVar2,*param_2,2);
  return;
}



