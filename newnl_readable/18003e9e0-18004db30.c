/* ===== 18003e9e0 FUN_18003e9e0 ===== */

void FUN_18003e9e0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int *piVar10;
  ulonglong uVar11;
  char cVar12;
  longlong lVar13;
  undefined4 *puVar14;
  int *piVar15;
  longlong lVar16;
  int *piVar17;
  longlong lVar18;
  undefined4 *puVar19;
  int *piVar20;
  char cVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined8 local_res10;
  int local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint6 local_e0;
  
  piVar15 = DAT_180ccf5f0;
  fVar7 = DAT_1811079b4;
  fVar8 = DAT_1811079b0;
  lVar18 = DAT_180ccf748;
  lVar13 = DAT_180ccf740;
  fVar9 = DAT_1808accdc;
  uVar3 = DAT_1808ac34c;
  uVar4 = DAT_1808ac118;
  for (piVar17 = DAT_180ccf5e8; DAT_1808ac118 = uVar4, DAT_1808ac34c = uVar3, DAT_1808accdc = fVar9,
      DAT_180ccf740 = lVar13, DAT_180ccf748 = lVar18, DAT_1811079b0 = fVar8, DAT_1811079b4 = fVar7,
      piVar17 != piVar15; piVar17 = piVar17 + 8) {
    *(undefined1 *)(piVar17 + 1) = 1;
    lVar18 = *(longlong *)(piVar17 + 4);
    for (lVar13 = *(longlong *)(piVar17 + 2); lVar13 != lVar18; lVar13 = lVar13 + 0x20) {
      *(undefined2 *)(lVar13 + 0x1c) = 0;
    }
    fVar7 = DAT_1811079b4;
    fVar8 = DAT_1811079b0;
    lVar18 = DAT_180ccf748;
    lVar13 = DAT_180ccf740;
    fVar9 = DAT_1808accdc;
    uVar3 = DAT_1808ac34c;
    uVar4 = DAT_1808ac118;
  }
  piVar17 = DAT_180ccf5e8;
  piVar15 = DAT_180ccf5f0;
  if (lVar18 != lVar13) {
    lVar16 = (longlong)DAT_181107a00 * 0x40;
    fVar24 = fVar8 * DAT_1808ac018;
    fVar25 = fVar7 * DAT_1808ac018;
    do {
      piVar17 = DAT_180ccf5f0;
      iVar1 = *(int *)(lVar18 + -0x1c);
      if (-1 < iVar1) {
        piVar15 = DAT_180ccf5e8;
        if (DAT_180ccf5e8 == DAT_180ccf5f0) {
LAB_18003eb33:
          local_f4 = CONCAT31(local_f4._1_3_,1);
          uStack_f0 = 0;
          uStack_ec = 0;
          uStack_e8 = 0;
          uStack_e4 = 0;
          _local_e0 = 0;
          local_f8 = iVar1;
          if (DAT_180ccf5f0 == DAT_180ccf5f8) {
            FUN_180043780(iVar1,DAT_180ccf5f0,&local_f8);
          }
          else {
            *DAT_180ccf5f0 = iVar1;
            *(undefined1 *)(piVar17 + 1) = 1;
            _local_e0 = 0;
            uStack_e8 = 0;
            uStack_e4 = 0;
            uStack_f0 = 0;
            uStack_ec = 0;
            piVar17[2] = 0;
            piVar17[3] = 0;
            piVar17[4] = 0;
            piVar17[5] = 0;
            piVar17[6] = 0;
            piVar17[7] = 0;
            DAT_180ccf5f0 = DAT_180ccf5f0 + 8;
          }
          FUN_180043290(&uStack_f0);
          piVar15 = DAT_180ccf5f0 + -8;
        }
        else {
          do {
            if (*piVar15 == iVar1) break;
            piVar15 = piVar15 + 8;
          } while (piVar15 != DAT_180ccf5f0);
          if (piVar15 == DAT_180ccf5f0) goto LAB_18003eb33;
        }
        piVar17 = *(int **)(piVar15 + 4);
        piVar20 = *(int **)(piVar15 + 2);
        if (piVar20 == piVar17) {
LAB_18003ebc3:
          local_f8 = *(int *)(lVar18 + -0x70);
          local_f4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
          uStack_e8 = 0;
          uStack_e4 = 0;
          uVar11 = (ulonglong)_local_e0 >> 0x30;
          uVar6 = (uint)_local_e0;
          local_e0 = (uint6)(uVar6 & 0xffffff00);
          _local_e0 = CONCAT26((short)uVar11,local_e0);
          FUN_180042d00(piVar15 + 2,&local_f8);
          piVar20 = (int *)(*(longlong *)(piVar15 + 4) + -0x20);
        }
        else {
          do {
            if (*piVar20 == *(int *)(lVar18 + -0x70)) break;
            piVar20 = piVar20 + 8;
          } while (piVar20 != piVar17);
          if (piVar20 == piVar17) goto LAB_18003ebc3;
        }
        *(undefined1 *)((longlong)piVar20 + 0x1d) = 1;
        if (*(int *)(lVar18 + -0x6c) == 0) {
          cVar21 = true;
        }
        else {
          cVar21 = *(float *)(lVar18 + -0x14) <= fVar9;
        }
        if (((char)piVar15[1] != '\0') || (*(char *)(lVar18 + -0x18) != '\0')) {
          local_res10 = 0;
          if (((DAT_1808abfbc <=
                *(float *)(lVar18 + -0xc) * *(float *)(&DAT_181107964 + lVar16) +
                *(float *)(lVar18 + -0x10) * *(float *)(&DAT_181107960 + lVar16) +
                *(float *)(lVar18 + -8) * *(float *)(&DAT_181107968 + lVar16) +
                *(float *)(&DAT_18110796c + lVar16)) &&
              (((cVar12 = FUN_1803a1bf0(&DAT_181107930 + lVar16,(float *)(lVar18 + -0x10),
                                        &local_res10,fVar8,fVar7), cVar12 != '\0' &&
                (fVar24 <= (float)local_res10)) && ((float)local_res10 <= fVar8 - fVar24)))) &&
             (((fVar25 <= local_res10._4_4_ && (local_res10._4_4_ <= fVar7 - fVar25)) &&
              (cVar21 != '\0')))) {
            *(undefined1 *)(piVar20 + 7) = 1;
            *(undefined1 *)(piVar15 + 1) = 0;
          }
        }
        if ((char)piVar20[7] == '\0') {
          uVar23 = 0;
        }
        else {
          uVar23 = uVar3;
        }
        fVar22 = (float)FUN_18003aaa0(piVar20 + 1,uVar23,param_1,uVar4);
        *(float *)(lVar18 + -0x24) = fVar22 * *(float *)(lVar18 + -0x24);
        lVar13 = DAT_180ccf740;
      }
      lVar18 = lVar18 + -0x78;
      piVar17 = DAT_180ccf5e8;
      piVar15 = DAT_180ccf5f0;
    } while (lVar18 != lVar13);
  }
  for (; piVar20 = DAT_180ccf5f0, piVar17 != DAT_180ccf5f0; piVar17 = piVar17 + 8) {
    puVar2 = *(undefined4 **)(piVar17 + 4);
    puVar19 = *(undefined4 **)(piVar17 + 2);
    DAT_180ccf5f0 = piVar15;
    if (puVar19 != puVar2) {
      do {
        if (*(char *)((longlong)puVar19 + 0x1d) == '\0') break;
        puVar19 = puVar19 + 8;
      } while (puVar19 != puVar2);
      if (puVar19 != puVar2) {
        puVar14 = puVar19 + 8;
        if (puVar14 != puVar2) {
          do {
            if (*(char *)((longlong)puVar14 + 0x1d) != '\0') {
              uVar3 = puVar14[1];
              uVar4 = puVar14[2];
              uVar23 = puVar14[3];
              *puVar19 = *puVar14;
              puVar19[1] = uVar3;
              puVar19[2] = uVar4;
              puVar19[3] = uVar23;
              uVar5 = *(undefined8 *)(puVar14 + 6);
              *(undefined8 *)(puVar19 + 4) = *(undefined8 *)(puVar14 + 4);
              *(undefined8 *)(puVar19 + 6) = uVar5;
              puVar19 = puVar19 + 8;
            }
            puVar14 = puVar14 + 8;
          } while (puVar14 != puVar2);
          if (puVar19 == puVar2) goto LAB_18003ed90;
        }
        lVar18 = *(longlong *)(piVar17 + 4);
        FUN_180540530(puVar19,puVar2,lVar18 - (longlong)puVar2);
        *(longlong *)(piVar17 + 4) = (longlong)puVar19 + (lVar18 - (longlong)puVar2);
      }
    }
LAB_18003ed90:
    piVar15 = DAT_180ccf5f0;
    DAT_180ccf5f0 = piVar20;
  }
  piVar17 = DAT_180ccf5e8;
  DAT_180ccf5f0 = piVar15;
  if (DAT_180ccf5e8 != piVar15) {
    do {
      if (*(longlong *)(piVar17 + 2) == *(longlong *)(piVar17 + 4)) break;
      piVar17 = piVar17 + 8;
    } while (piVar17 != piVar15);
    if (piVar17 != piVar15) {
      piVar20 = piVar17 + 8;
      piVar10 = piVar15;
      if (piVar20 == piVar15) goto joined_r0x00018003ee02;
      do {
        if (*(longlong *)(piVar20 + 2) != *(longlong *)(piVar20 + 4)) {
          FUN_1800428c0(piVar17,piVar20);
          piVar17 = piVar17 + 8;
        }
        piVar20 = piVar20 + 8;
      } while (piVar20 != piVar15);
    }
  }
  piVar10 = DAT_180ccf5f0;
  if (piVar17 == piVar15) {
    return;
  }
joined_r0x00018003ee02:
  for (; piVar20 = DAT_180ccf5f0, piVar15 != DAT_180ccf5f0; piVar15 = piVar15 + 8) {
    DAT_180ccf5f0 = piVar10;
    FUN_1800428c0(piVar17,piVar15);
    piVar17 = piVar17 + 8;
    piVar10 = DAT_180ccf5f0;
    DAT_180ccf5f0 = piVar20;
  }
  DAT_180ccf5f0 = piVar10;
  for (piVar15 = piVar17; piVar15 != piVar10; piVar15 = piVar15 + 8) {
    FUN_180043290(piVar15 + 2);
  }
  DAT_180ccf5f0 = piVar17;
  return;
}



/* ===== 18003eeb0 FUN_18003eeb0 ===== */

void FUN_18003eeb0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong local_138;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  
  fVar3 = DAT_1808ac34c;
  lVar1 = *param_1;
  if ((*(int *)((longlong)param_1 + 0xc) == 1) && (DAT_180ccf640 != 0)) {
    fVar19 = *(float *)((longlong)param_1 + 0x14);
    fVar21 = *(float *)(param_1 + 3);
    fVar22 = *(float *)((longlong)param_1 + 0x1c);
    fVar23 = *(float *)(param_1 + 4);
    cVar5 = FUN_180011220(lVar1 + (ulonglong)DAT_180ccf640);
    if ((((cVar5 != '\0') &&
         ((DAT_180ccf644 != 0 &&
          (cVar5 = FUN_180011220(lVar1 + (ulonglong)DAT_180ccf644), cVar5 != '\0')))) &&
        ((DAT_180ccf648 == 0 ||
         (cVar5 = FUN_180011220(lVar1 + (ulonglong)DAT_180ccf648), cVar5 == '\0')))) &&
       ((DAT_180ccf64c == 0 ||
        (cVar5 = FUN_180011220(lVar1 + (ulonglong)DAT_180ccf64c), cVar5 == '\0')))) {
      if ((DAT_180961a50 == 0) || (lVar8 = FUN_18000f3a0(), lVar8 == 0)) {
        fVar13 = 0.0;
      }
      else {
        fVar13 = (float)FUN_18000f3d0(lVar8 + 0x30);
      }
      local_12c = (float)((uint)local_12c & 0xffffff00);
      if (DAT_180ccf654 != 0) {
        FUN_18000f3d0(lVar1 + (ulonglong)DAT_180ccf654);
      }
      if (DAT_180ccf658 != 0) {
        FUN_18000f3d0(lVar1 + (ulonglong)DAT_180ccf658);
      }
      local_118 = *param_1;
      lStack_110 = param_1[1];
      local_12c._0_2_ = CONCAT11(1,(undefined1)local_12c);
      local_108 = param_1[2];
      lStack_100 = param_1[3];
      local_f8 = param_1[4];
      lStack_f0 = param_1[5];
      local_e8 = param_1[6];
      lStack_e0 = param_1[7];
      local_d8 = param_1[8];
      lStack_d0 = param_1[9];
      local_c8 = param_1[10];
      lStack_c0 = param_1[0xb];
      local_b8 = (undefined4)param_1[0xc];
      uStack_b4 = *(undefined4 *)((longlong)param_1 + 100);
      uStack_b0 = (undefined4)param_1[0xd];
      uStack_ac = *(undefined4 *)((longlong)param_1 + 0x6c);
      local_a8 = param_1[0xe];
      if (((DAT_18095cfd8 != '\0') && (iVar7 = FUN_18003b480(&local_118), iVar7 == 5)) &&
         (local_12c._1_1_ != '\0')) {
        if (DAT_180ccf65c == 0) {
          fVar14 = 0.0;
        }
        else {
          fVar14 = (float)FUN_18000f3d0(lVar1 + (ulonglong)DAT_180ccf65c);
        }
        if (DAT_180ccf660 == 0) {
          fVar15 = 0.0;
        }
        else {
          fVar15 = (float)FUN_18000f3d0(lVar1 + (ulonglong)DAT_180ccf660);
        }
        if (DAT_180ccf654 == 0) {
          fVar16 = 0.0;
        }
        else {
          fVar16 = (float)FUN_18000f3d0(lVar1 + (ulonglong)DAT_180ccf654);
        }
        bVar2 = fVar16 < fVar14;
        fVar20 = fVar14 - fVar13;
        fVar17 = DAT_1808abfa0;
        fVar18 = 0.0;
        if (bVar2) {
          fVar14 = fVar16 - (fVar14 - fVar15);
          if (0.0 <= fVar16 - fVar13) {
            fVar18 = fVar16 - fVar13;
          }
          if (DAT_1808abfa0 <= fVar14) {
            fVar17 = fVar14;
          }
          fVar13 = DAT_18095cfec;
        }
        else {
          if (0.0 <= fVar20) {
            fVar18 = fVar20;
          }
          fVar13 = DAT_18095cfdc;
          if (DAT_1808abfa0 <= fVar15) {
            fVar17 = fVar15;
          }
        }
        pfVar9 = (float *)&DAT_18095cfe0;
        if (bVar2) {
          pfVar9 = (float *)&DAT_18095cff0;
        }
        pfVar10 = (float *)&DAT_18095cfe4;
        if (bVar2) {
          pfVar10 = (float *)&DAT_18095cff4;
        }
        fVar14 = fVar18 / fVar17;
        if (fVar3 <= fVar18 / fVar17) {
          fVar14 = fVar3;
        }
        pfVar11 = (float *)&DAT_18095cfe8;
        fVar14 = fVar3 - fVar14;
        if (bVar2) {
          pfVar11 = (float *)&DAT_18095cff8;
        }
        fVar19 = (fVar13 - fVar19) * fVar14 + fVar19;
        fVar21 = (*pfVar9 - fVar21) * fVar14 + fVar21;
        fVar22 = (*pfVar10 - fVar22) * fVar14 + fVar22;
        fVar23 = (*pfVar11 - fVar23) * fVar14 + fVar23;
        if (!bVar2) {
          fVar13 = 0.0;
          if (0.0 <= fVar20) {
            fVar13 = fVar20;
          }
          if (DAT_1808ac140 < fVar13) {
            fVar13 = 0.0;
          }
          else {
            fVar13 = fVar3 - fVar13 * DAT_1808ac710;
          }
          fVar19 = (DAT_18095cfc8 - fVar19) * fVar13 + fVar19;
          fVar21 = (DAT_18095cfcc - fVar21) * fVar13 + fVar21;
          fVar22 = (DAT_18095cfd0 - fVar22) * fVar13 + fVar22;
          fVar23 = (DAT_18095cfd4 - fVar23) * fVar13 + fVar23;
        }
      }
      goto LAB_18003f417;
    }
  }
  if ((int)param_1[2] == 3) {
    if (*(int *)((longlong)param_1 + 0xc) == 6) {
      if ((((int)param_1[0xb] - 0x2cU & 0xfffffff9) == 0) && ((int)param_1[0xb] != 0x32)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      pfVar9 = (float *)&DAT_18095d110;
      if (bVar2) {
        pfVar9 = &DAT_18095d100;
      }
      pfVar10 = (float *)&DAT_18095d114;
      if (bVar2) {
        pfVar10 = &DAT_18095d104;
      }
      pfVar11 = (float *)&DAT_18095d118;
      if (bVar2) {
        pfVar11 = &DAT_18095d108;
      }
      pfVar12 = (float *)&DAT_18095d11c;
      if (bVar2) {
        pfVar12 = &DAT_18095d10c;
      }
      fVar23 = *pfVar12;
      fVar19 = *pfVar9;
      fVar21 = *pfVar10;
      fVar22 = *pfVar11;
    }
    else {
      fVar23 = DAT_18095d10c;
      fVar19 = DAT_18095d100;
      fVar21 = DAT_18095d104;
      fVar22 = DAT_18095d108;
    }
    if (*(char *)((longlong)param_1 + 0x34) != '\0') {
      if (*(char *)((longlong)param_1 + 0x3c) == '\0') {
        fVar13 = fVar3;
      }
      else {
        fVar13 = *(float *)(param_1 + 7);
        if (fVar13 == 0.0) goto LAB_18003f417;
      }
      fVar19 = fVar19 + (*(float *)((longlong)param_1 + 0x24) - fVar19) * fVar13;
      fVar21 = fVar21 + (*(float *)(param_1 + 5) - fVar21) * fVar13;
      fVar22 = fVar22 + (*(float *)((longlong)param_1 + 0x2c) - fVar22) * fVar13;
      fVar23 = fVar23 + (*(float *)(param_1 + 6) - fVar23) * fVar13;
    }
  }
  else {
    fVar19 = *(float *)((longlong)param_1 + 0x14);
    fVar21 = *(float *)(param_1 + 3);
    fVar22 = *(float *)((longlong)param_1 + 0x1c);
    fVar23 = *(float *)(param_1 + 4);
    if (*(char *)((longlong)param_1 + 0x34) != '\0') {
      if (*(char *)((longlong)param_1 + 0x3c) == '\0') {
        fVar13 = fVar3;
      }
      else {
        fVar13 = *(float *)(param_1 + 7);
        if (fVar13 == 0.0) goto LAB_18003f417;
      }
      fVar19 = (*(float *)((longlong)param_1 + 0x24) - fVar19) * fVar13 + fVar19;
      fVar21 = (*(float *)(param_1 + 5) - fVar21) * fVar13 + fVar21;
      fVar22 = (*(float *)((longlong)param_1 + 0x2c) - fVar22) * fVar13 + fVar22;
      fVar23 = (*(float *)(param_1 + 6) - fVar23) * fVar13 + fVar23;
    }
  }
LAB_18003f417:
  fVar13 = *(float *)((longlong)param_1 + 0x54);
  if (0.0 <= fVar13) {
    fVar14 = fVar3;
    if (fVar13 <= fVar3) {
      fVar14 = fVar13;
    }
  }
  else {
    fVar14 = 0.0;
  }
  if ((DAT_180ca0a3c != 0) && (lVar8 = FUN_18000f3a0(lVar1 + (ulonglong)DAT_180ca0a3c), lVar8 != 0))
  {
    fVar13 = fVar3;
    if ((DAT_180ccf6a4 != 0) && (DAT_180ccf6a8 != 0)) {
      lVar8 = FUN_18000f3a0(lVar1 + (ulonglong)DAT_180ccf6a4);
      if (lVar8 == 0) {
        return;
      }
      bVar6 = FUN_180011220((ulonglong)DAT_180ccf6a8 + lVar8);
      fVar13 = (float)bVar6 / DAT_1808acb94;
    }
    if ((DAT_180ccf6ac == 0) ||
       (cVar5 = FUN_180011220(lVar1 + (ulonglong)DAT_180ccf6ac), cVar5 != '\n')) {
      plVar4 = DAT_180ccf6f0;
      fVar23 = fVar23 * fVar14;
      if (0.0 <= fVar23) {
        fVar14 = fVar3;
        if (fVar23 <= fVar3) {
          fVar14 = fVar23;
        }
      }
      else {
        fVar14 = 0.0;
      }
      fVar14 = fVar14 * fVar13;
      if (*(int *)((longlong)param_1 + 0xc) == 1) {
        local_124 = fVar14;
      }
      else {
        local_124 = DAT_1808ac334;
        if (fVar14 <= DAT_1808ac334) {
          local_124 = fVar14;
        }
      }
      if (0.0 < local_124) {
        if (0.0 <= fVar19) {
          local_130 = fVar3;
          if (fVar19 <= fVar3) {
            local_130 = fVar19;
          }
        }
        else {
          local_130 = 0.0;
        }
        if (0.0 <= fVar21) {
          local_12c = fVar3;
          if (fVar21 <= fVar3) {
            local_12c = fVar21;
          }
        }
        else {
          local_12c = 0.0;
        }
        local_128 = 0.0;
        if ((0.0 <= fVar22) && (local_128 = fVar3, fVar22 <= fVar3)) {
          local_128 = fVar22;
        }
        if (DAT_180ccf6f0 == DAT_180ccf6f8) {
          local_138 = lVar1;
          FUN_180043c20(local_12c,DAT_180ccf6f0,&local_138);
        }
        else {
          *DAT_180ccf6f0 = lVar1;
          *(float *)(plVar4 + 1) = local_130;
          *(float *)((longlong)plVar4 + 0xc) = local_12c;
          *(float *)(plVar4 + 2) = local_128;
          *(float *)((longlong)plVar4 + 0x14) = local_124;
          DAT_180ccf6f0 = DAT_180ccf6f0 + 3;
        }
      }
    }
  }
  return;
}



/* ===== 18003f5d0 FUN_18003f5d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18003f5d0(undefined8 *param_1,int param_2,undefined8 *param_3,float *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  int *piVar7;
  undefined8 ****ppppuVar8;
  int *piVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_1d8 [32];
  undefined8 ****local_1b8;
  undefined8 ****local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_188;
  int local_178 [3];
  undefined4 local_16c;
  int local_168 [8];
  ulonglong local_148;
  undefined2 local_13b;
  undefined1 local_139;
  longlong local_138;
  float local_130;
  undefined4 local_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [32];
  undefined8 ****local_f8;
  longlong lStack_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  local_148 = (longlong)param_2 ^ *(longlong *)param_1[1] << 8 ^
              (longlong)(int)((longlong *)param_1[1])[2] << 4;
  plVar6 = (longlong *)FUN_180042e90(param_1,local_128,&local_148);
  lVar14 = DAT_180ca0a50;
  lVar2 = *plVar6;
  *(undefined8 *)(lVar2 + 0xb0) = *(undefined8 *)(DAT_180ca0a50 + 0x10);
  fVar23 = DAT_1808ac34c;
  if (param_3[2] == 0) {
    fVar16 = (float)FUN_18003aaa0(lVar2 + 0x18,0,*(undefined4 *)((longlong)param_1 + 0x24),
                                  DAT_1808ac118);
  }
  else {
    fVar16 = (float)FUN_18003aaa0(lVar2 + 0x18,DAT_1808ac34c,
                                  *(undefined4 *)((longlong)param_1 + 0x24),DAT_1808ac118);
    if ((undefined8 *)(lVar2 + 0x60) != param_3) {
      if ((ulonglong)param_3[3] < 0x10) {
        puVar11 = param_3;
      }
      else {
        puVar11 = (undefined8 *)*param_3;
      }
      FUN_180029840((undefined8 *)(lVar2 + 0x60),puVar11,param_3[2]);
      lVar14 = DAT_180ca0a50;
    }
  }
  if ((0.0 < fVar16) && (*(longlong *)(lVar2 + 0x70) != 0)) {
    local_168[4] = 4;
    local_168[2] = 0;
    local_168[1] = 0xfa;
    local_168[0] = 0x4b;
    piVar9 = local_168;
    if (0x4a < DAT_18091a1ac) {
      piVar9 = &DAT_18091a1ac;
    }
    piVar7 = local_168 + 1;
    if (DAT_18091a1ac < 0xfb) {
      piVar7 = piVar9;
    }
    local_168[3] = (int)(((float)*piVar7 / DAT_1808acb08 - fVar23) * DAT_1808ac710);
    piVar9 = local_168 + 2;
    if (-1 < local_168[3]) {
      piVar9 = local_168 + 3;
    }
    piVar7 = local_168 + 4;
    if (local_168[3] < 5) {
      piVar7 = piVar9;
    }
    iVar1 = *piVar7;
    local_168[6] = iVar1;
    local_178[0] = 4;
    local_168[5] = 0;
    piVar9 = local_168 + 5;
    if (-1 < iVar1) {
      piVar9 = local_168 + 6;
    }
    piVar7 = local_178;
    if (iVar1 < 5) {
      piVar7 = piVar9;
    }
    if (*piVar7 == 0) {
      lVar13 = DAT_1811079f0;
      if (DAT_1811079f0 == 0) {
        lVar13 = *(longlong *)(lVar14 + 0x11f0);
      }
      local_16c._0_1_ = 1;
      fVar17 = DAT_1808ac864;
    }
    else {
      lVar13 = DAT_181107a28;
      if (DAT_181107a28 == 0) {
        lVar13 = *(longlong *)(lVar14 + 0x11f0);
      }
      fVar17 = *(float *)(&DAT_1806de2a8 + (longlong)*piVar7 * 4) * _DAT_1808ac3cc;
      local_16c._0_1_ = 0;
    }
    local_16c = CONCAT13(local_139,CONCAT21(local_13b,(undefined1)local_16c));
    local_12c = local_16c;
    local_138 = lVar13;
    local_130 = fVar17;
    plVar6 = (longlong *)FUN_180024b50(local_118,lVar2 + 0x60);
    if ((ulonglong)plVar6[3] < 0x10) {
      plVar10 = plVar6;
    }
    else {
      plVar10 = (longlong *)*plVar6;
    }
    plVar15 = (longlong *)((longlong)plVar10 + plVar6[2]);
    for (; plVar10 != plVar15; plVar10 = (longlong *)((longlong)plVar10 + 1)) {
      if ((byte)((char)*plVar10 + 0x9fU) < 0x1a) {
        *(char *)plVar10 = (char)*plVar10 + -0x20;
      }
    }
    local_f8 = (undefined8 ****)*plVar6;
    lStack_f0 = plVar6[1];
    local_e8 = plVar6[2];
    uStack_e0 = plVar6[3];
    plVar6[2] = 0;
    plVar6[3] = 0xf;
    *(undefined1 *)plVar6 = 0;
    FUN_18000f890(plVar6);
    ppppuVar8 = &local_f8;
    if (0xf < uStack_e0) {
      ppppuVar8 = local_f8;
    }
    if ((lVar13 == 0) || (ppppuVar8 == (undefined8 ****)0x0)) {
      fVar17 = 0.0;
      fVar18 = 0.0;
    }
    else {
      local_188 = 0;
      local_198 = 0;
      local_1a0 = 0;
      local_1a8 = 0;
      local_1b8 = (undefined8 ****)((ulonglong)local_1b8 & 0xffffffff00000000);
      local_1b0 = ppppuVar8;
      FUN_18040a2f0(local_178,lVar13,fVar17,DAT_1808acd08);
      fVar17 = (float)FUN_18053ef70();
      fVar18 = (float)FUN_18053ef70();
    }
    *(float *)(param_1 + 4) = fVar17;
    fVar5 = DAT_1808acb94;
    fVar4 = DAT_1808ac1f4;
    lVar2 = param_1[1];
    fVar26 = *(float *)(lVar2 + 0x54) * param_4[3] * fVar16;
    if (0.0 < fVar26) {
      ppppuVar8 = &local_f8;
      if (0xf < uStack_e0) {
        ppppuVar8 = local_f8;
      }
      fVar27 = *param_4;
      fVar28 = param_4[1];
      fVar19 = param_4[2];
      if (0.0 <= fVar26) {
        fVar20 = fVar23;
        if (fVar26 <= fVar23) {
          fVar20 = fVar26;
        }
      }
      else {
        fVar20 = 0.0;
      }
      fVar26 = fVar20 * DAT_1808acb94 + DAT_1808ac1f4;
      if (0.0 <= fVar19) {
        fVar20 = fVar23;
        if (fVar19 <= fVar23) {
          fVar20 = fVar19;
        }
      }
      else {
        fVar20 = 0.0;
      }
      fVar19 = fVar20 * DAT_1808acb94 + DAT_1808ac1f4;
      if (0.0 <= fVar28) {
        fVar20 = fVar23;
        if (fVar28 <= fVar23) {
          fVar20 = fVar28;
        }
      }
      else {
        fVar20 = 0.0;
      }
      fVar20 = fVar20 * DAT_1808acb94 + DAT_1808ac1f4;
      fVar28 = 0.0;
      if ((0.0 <= fVar27) && (fVar28 = fVar23, fVar27 <= fVar23)) {
        fVar28 = fVar27;
      }
      fVar27 = (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0x40)) * DAT_1808ac1f4;
      uVar21 = FUN_18053fc00(*(float *)(lVar2 + 0x4c) + DAT_1808ac540 +
                             *(float *)((longlong)param_1 + 0x1c));
      auVar24._0_8_ =
           FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)fVar27) & _DAT_1808ade90 ^ (uint)fVar27) +
                         fVar27);
      auVar24._8_8_ = extraout_XMM0_Qb;
      auVar25._4_12_ = auVar24._4_12_;
      auVar25._0_4_ = ((float)auVar24._0_8_ - fVar17 * fVar4) + *(float *)(param_1 + 3);
      uVar22 = FUN_18053fc00(auVar25._0_8_);
      local_1b8 = ppppuVar8;
      FUN_18003abe0(*param_1,&local_138,CONCAT44(uVar21,uVar22),
                    (int)(fVar28 * fVar5 + fVar4) |
                    (int)fVar26 << 0x18 | (int)fVar19 << 0x10 | (int)fVar20 << 8);
    }
    fVar23 = (float)iVar1 * DAT_1808ac140 + fVar23;
    *(float *)((longlong)param_1 + 0x1c) =
         (fVar23 + fVar23 + fVar18) * fVar16 + *(float *)((longlong)param_1 + 0x1c);
    if (0xf < uStack_e0) {
      uVar12 = uStack_e0 + 1;
      ppppuVar8 = local_f8;
      if (0xfff < uVar12) {
        ppppuVar8 = (undefined8 ****)local_f8[-1];
        if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)ppppuVar8))) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar12 = uStack_e0 + 0x28;
      }
      thunk_FUN_1803d64e0(ppppuVar8,uVar12);
    }
  }
  return;
}



/* ===== 18003fb50 FUN_18003fb50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18003fb50(undefined8 *param_1,int param_2,char param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  longlong *plVar11;
  int *piVar12;
  float *pfVar13;
  float *pfVar14;
  undefined8 *******pppppppuVar15;
  int iVar16;
  int *piVar17;
  undefined8 *******pppppppuVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  float fVar42;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [88];
  ulonglong local_198 [2];
  undefined4 local_188;
  float local_184;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  int local_148 [6];
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 *******local_128;
  longlong lStack_120;
  longlong local_118;
  ulonglong uStack_110;
  longlong local_108;
  float local_100;
  undefined4 local_fc;
  undefined2 local_f3;
  undefined1 local_f1;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  local_198[0] = (longlong)param_2 ^ *(longlong *)param_1[1] << 8 ^
                 (longlong)(int)((longlong *)param_1[1])[2] << 4;
  plVar11 = (longlong *)FUN_180042e90(param_1,&local_108,local_198);
  lVar3 = *plVar11;
  uVar26 = *(undefined8 *)(DAT_180ca0a50 + 0x10);
  *(undefined8 *)(lVar3 + 0xb0) = uVar26;
  fVar8 = DAT_1808ac34c;
  if (param_3 == '\0') {
    fVar22 = (float)FUN_18003aaa0(lVar3 + 0x18,uVar26,*(undefined4 *)((longlong)param_1 + 0x24),
                                  DAT_1808ac118);
LAB_18003fc98:
    local_17c = fVar22;
  }
  else {
    fVar22 = (float)FUN_18003aaa0(lVar3 + 0x18,uVar26,*(undefined4 *)((longlong)param_1 + 0x24),
                                  DAT_1808ac118);
    *(undefined4 *)(lVar3 + 0x80) = param_4;
    puVar1 = (undefined8 *)(lVar3 + 0x88);
    if (puVar1 == param_5) goto LAB_18003fc98;
    local_17c = fVar22;
    if ((ulonglong)param_5[3] < 0x10) {
      FUN_180029840(puVar1,param_5,param_5[2]);
    }
    else {
      FUN_180029840(puVar1,*param_5,param_5[2]);
    }
  }
  puVar21 = auStack_1f8;
  if (fVar22 <= 0.0) goto LAB_180040542;
  local_148[4] = 4;
  local_148[2] = 0;
  local_148[1] = 0xfa;
  local_148[0] = 0x4b;
  piVar17 = local_148;
  if (0x4a < DAT_18091a1ac) {
    piVar17 = &DAT_18091a1ac;
  }
  piVar12 = local_148 + 1;
  if (DAT_18091a1ac < 0xfb) {
    piVar12 = piVar17;
  }
  local_148[3] = (int)(((float)*piVar12 / DAT_1808acb08 - fVar8) * DAT_1808ac710);
  piVar17 = local_148 + 2;
  if (-1 < local_148[3]) {
    piVar17 = local_148 + 3;
  }
  piVar12 = local_148 + 4;
  if (local_148[3] < 5) {
    piVar12 = piVar17;
  }
  lVar4 = param_1[1];
  fVar31 = *(float *)(lVar4 + 0x48);
  fVar34 = *(float *)(lVar4 + 0x40);
  fVar32 = (float)((uint)(fVar31 - fVar34) & _DAT_1808ade90);
  uVar26 = FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)fVar32) & _DAT_1808ade90 ^ (uint)fVar32) +
                         fVar32);
  fVar32 = DAT_1808ac1f4;
  puVar21 = auStack_1f8;
  fVar35 = (float)uVar26;
  uVar36 = (undefined4)((ulonglong)uVar26 >> 0x20);
  uVar37 = (undefined4)extraout_XMM0_Qb;
  uVar38 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  if (*(char *)(lVar4 + 0x50) != '\0') {
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    fVar35 = *(float *)(param_1 + 4) - fVar8;
  }
  if (fVar35 <= 0.0) goto LAB_180040542;
  fVar2 = *(float *)(lVar3 + 0x80);
  if (fVar31 == fVar34) {
    FUN_18053fc00();
  }
  uVar23 = FUN_18053fc00(*(float *)(lVar4 + 0x4c) + DAT_1808ac540 + fVar8 +
                         *(float *)((longlong)param_1 + 0x1c));
  local_188 = uVar23;
  local_158 = FUN_18053fc00();
  local_130 = (undefined4)local_158;
  if ((*(double *)(lVar3 + 0xa8) < 0.0) ||
     (DAT_1808ac4b0 <= (double)param_1[5] - *(double *)(lVar3 + 0xa8))) {
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined4 *)(lVar3 + 0x40) = 0;
    *(undefined1 *)(lVar3 + 0x44) = 0;
    *(undefined2 *)(lVar3 + 0x45) = local_f3;
    *(undefined1 *)(lVar3 + 0x47) = local_f1;
  }
  uStack_150 = extraout_XMM0_Qb_00;
  local_12c = uVar23;
  local_170 = (float)FUN_18003aaa0(lVar3 + 0x30);
  *(undefined8 *)(lVar3 + 0xa8) = param_1[5];
  local_160 = (float)FUN_18003aaa0(lVar3 + 0x48);
  puVar21 = auStack_1f8;
  lVar4 = param_1[2];
  lVar5 = param_1[1];
  local_164 = *(float *)(lVar5 + 0x14);
  local_168 = *(float *)(lVar5 + 0x18);
  local_16c = *(float *)(lVar5 + 0x1c);
  fVar31 = *(float *)(lVar5 + 0x20);
  if (*(char *)(lVar5 + 0x34) != '\0') {
    if (*(char *)(lVar5 + 0x3c) == '\0') {
      fVar34 = fVar8;
    }
    else {
      fVar34 = *(float *)(lVar5 + 0x38);
      if (fVar34 == 0.0) goto LAB_18003ff44;
    }
    local_164 = (*(float *)(lVar5 + 0x24) - local_164) * fVar34 + local_164;
    local_168 = (*(float *)(lVar5 + 0x28) - local_168) * fVar34 + local_168;
    local_16c = (*(float *)(lVar5 + 0x2c) - local_16c) * fVar34 + local_16c;
    fVar31 = (*(float *)(lVar5 + 0x30) - fVar31) * fVar34 + fVar31;
  }
LAB_18003ff44:
  fVar34 = *(float *)(lVar5 + 0x54);
  local_184 = fVar34;
  lStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0xf;
  local_128 = (undefined8 *******)0x0;
  iVar10 = *(int *)(lVar4 + 0x30);
  if (iVar10 == 2) {
    uVar26 = FUN_18003a390(&local_108,(int)fVar2);
    pfVar13 = (float *)FUN_1800134a0(uVar26,&DAT_1806de738,1);
    fVar34 = *pfVar13;
    pppppppuVar15 = *(undefined8 ********)pfVar13;
    lVar7 = *(longlong *)(pfVar13 + 2);
    lVar5 = *(longlong *)(pfVar13 + 4);
    uVar20 = *(ulonglong *)(pfVar13 + 6);
    pfVar13[4] = 0.0;
    pfVar13[5] = 0.0;
    pfVar13[6] = 2.10195e-44;
    pfVar13[7] = 0.0;
    *(undefined1 *)pfVar13 = 0;
    if (0xf < uStack_110) {
      uVar19 = uStack_110 + 1;
      pppppppuVar18 = local_128;
      if (0xfff < uVar19) {
        pppppppuVar18 = (undefined8 *******)local_128[-1];
        if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pppppppuVar18))) {
          pcVar6 = (code *)swi(0x29);
          iVar10 = (*pcVar6)(5);
          puVar21 = auStack_1f0;
          goto LAB_180040005;
        }
        uVar19 = uStack_110 + 0x28;
      }
      thunk_FUN_1803d64e0(pppppppuVar18,uVar19);
    }
    local_128 = pppppppuVar15;
    lStack_120 = lVar7;
    local_118 = lVar5;
    uStack_110 = uVar20;
    FUN_18000f890(&local_108);
    puVar21 = auStack_1f8;
    fVar34 = local_184;
  }
  else {
LAB_180040005:
    if ((iVar10 == 1) &&
       (pppppppuVar15 = (undefined8 *******)(lVar3 + 0x88),
       &local_128 != (undefined8 ********)pppppppuVar15)) {
      if (0xf < *(ulonglong *)(lVar3 + 0xa0)) {
        pppppppuVar15 = (undefined8 *******)*pppppppuVar15;
      }
      uVar26 = *(undefined8 *)(lVar3 + 0x98);
      *(undefined8 *)(puVar21 + -8) = 0x180040037;
      FUN_180029840(&local_128,pppppppuVar15,uVar26);
    }
  }
  fVar2 = DAT_1808ac864;
  iVar10 = *piVar12;
  fVar42 = (float)iVar10 + DAT_1808ac540;
  *(float *)(puVar21 + 0x74) = fVar34 * fVar22;
  *(float *)(puVar21 + 0x78) = fVar31 * fVar34 * fVar22;
  iVar16 = (int)fVar42 + -2;
  if (iVar16 < 0) {
    iVar16 = 0;
  }
  if (4 < iVar16) {
    iVar16 = 4;
  }
  if (iVar16 == 0) {
    local_108 = DAT_1811079f0;
    if (DAT_1811079f0 == 0) {
      local_108 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    puVar21[0x6c] = 1;
    local_100 = DAT_1808ac864;
  }
  else {
    local_108 = DAT_181107a28;
    if (DAT_181107a28 == 0) {
      local_108 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    local_100 = *(float *)(&DAT_1806de2a8 + (longlong)iVar16 * 4) * _DAT_1808ac3cc;
    puVar21[0x6c] = 0;
  }
  *(undefined2 *)(puVar21 + 0x6d) = uStack_150._5_2_;
  puVar21[0x6f] = uStack_150._7_1_;
  local_fc = *(undefined4 *)(puVar21 + 0x6c);
  if (local_118 == 0) {
    fVar22 = 0.0;
    fVar31 = 0.0;
  }
  else {
    pppppppuVar15 = &local_128;
    if (0xf < uStack_110) {
      pppppppuVar15 = local_128;
    }
    if ((local_108 == 0) || (pppppppuVar15 == (undefined8 *******)0x0)) {
      fVar22 = 0.0;
      fVar31 = 0.0;
      uVar39 = 0;
      uVar40 = 0;
      uVar41 = 0;
    }
    else {
      *(undefined4 *)(puVar21 + 0x50) = 0;
      *(undefined8 *)(puVar21 + 0x40) = 0;
      *(undefined8 *)(puVar21 + 0x38) = 0;
      *(undefined8 *)(puVar21 + 0x30) = 0;
      *(undefined8 ********)(puVar21 + 0x28) = pppppppuVar15;
      *(undefined4 *)(puVar21 + 0x20) = 0;
      *(undefined8 *)(puVar21 + -8) = 0x180040160;
      FUN_18040a2f0(puVar21 + 0x60,local_108,local_100,DAT_1808acd08);
      *(undefined8 *)(puVar21 + -8) = 0x18004016b;
      fVar22 = (float)FUN_18053ef70();
      *(undefined8 *)(puVar21 + -8) = 0x18004017a;
      uVar26 = FUN_18053ef70();
      fVar31 = (float)uVar26;
      uVar39 = (uint)((ulonglong)uVar26 >> 0x20);
      uVar40 = (uint)extraout_XMM0_Qb_01;
      uVar41 = (uint)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    }
    if (local_118 == 0) {
      fVar31 = 0.0;
    }
    else {
      fVar32 = (fVar31 - (fVar42 + DAT_1808ac540)) * fVar32;
      auVar27._0_4_ = (float)((DAT_1808ac1ec ^ (uint)fVar32) & _DAT_1808ade90 ^ (uint)fVar32);
      auVar27._4_4_ = uVar39 & _UNK_1808ade94 ^ uVar39;
      auVar27._8_4_ = uVar40 & _UNK_1808ade98 ^ uVar40;
      auVar27._12_4_ = uVar41 & _UNK_1808ade9c ^ uVar41;
      auVar28._4_12_ = auVar27._4_12_;
      auVar28._0_4_ = auVar27._0_4_ + fVar32;
      *(undefined8 *)(puVar21 + -8) = 0x1800401cc;
      fVar31 = (float)FUN_18053fc00(auVar28._0_8_);
    }
  }
  fVar34 = (float)iVar10 + DAT_1808ac540 + DAT_1808ac540;
  *(undefined4 *)(puVar21 + 0x60) = 0x42c80000;
  local_178 = 0.0;
  pfVar13 = &local_178;
  if (0.0 <= local_170) {
    pfVar13 = &local_170;
  }
  pfVar14 = (float *)(puVar21 + 0x60);
  if (local_170 <= DAT_1808acb08) {
    pfVar14 = pfVar13;
  }
  auVar29._4_4_ = uVar36;
  auVar29._0_4_ = fVar35;
  auVar29._8_4_ = uVar37;
  auVar29._12_4_ = uVar38;
  auVar30._4_12_ = auVar29._4_12_;
  auVar30._0_4_ = (fVar35 * *pfVar14) / DAT_1808acb08;
  *(undefined8 *)(puVar21 + -8) = 0x18004022f;
  fVar24 = (float)FUN_18053fc00(auVar30._0_8_);
  fVar32 = *(float *)(puVar21 + 0x78);
  if (0.0 < fVar32) {
    uVar26 = *param_1;
    if (*(char *)(lVar4 + 0x1e) != '\0') {
      *(undefined8 *)(puVar21 + 0x60) = 0;
      local_178 = fVar35 + (float)local_158;
      local_174 = fVar42 + *(float *)(puVar21 + 0x70);
      *(undefined8 *)(puVar21 + -8) = 0x180040280;
      uVar36 = FUN_18003a9e0(lVar4 + 0x20);
      *(undefined4 *)(puVar21 + 0x38) = 0;
      *(undefined4 *)(puVar21 + 0x30) = 0;
      *(undefined1 **)(puVar21 + 0x28) = puVar21 + 0x60;
      *(float *)(puVar21 + 0x20) = fVar2;
      *(undefined8 *)(puVar21 + -8) = 0x1800402af;
      FUN_1804000e0(uVar26,&local_130,&local_178,uVar36);
      fVar32 = *(float *)(puVar21 + 0x78);
    }
    fVar9 = DAT_1808acb94;
    fVar2 = DAT_1808ac1f4;
    if (*(char *)(lVar4 + 0x1d) != '\0') {
      *(float *)(puVar21 + 0x60) = fVar35 + (float)local_158 + fVar8;
      *(float *)(puVar21 + 100) = fVar42 + *(float *)(puVar21 + 0x70) + fVar8;
      local_178 = (float)local_158 - fVar8;
      local_174 = *(float *)(puVar21 + 0x70) - fVar8;
      *(undefined4 *)(puVar21 + 0x28) = 0;
      *(undefined4 *)(puVar21 + 0x20) = 0;
      *(undefined8 *)(puVar21 + -8) = 0x18004034b;
      FUN_1803fe590(uVar26,&local_178,puVar21 + 0x60,
                    (int)(fVar32 * DAT_1808ac1f4 * DAT_1808acb94) << 0x18);
    }
    if (0.0 < fVar24) {
      fVar32 = *(float *)(puVar21 + 0x78);
      if (0.0 <= fVar32) {
        fVar35 = fVar8;
        if (fVar32 <= fVar8) {
          fVar35 = fVar32;
        }
      }
      else {
        fVar35 = 0.0;
      }
      if (0.0 <= local_16c) {
        fVar32 = fVar8;
        if (local_16c <= fVar8) {
          fVar32 = local_16c;
        }
      }
      else {
        fVar32 = 0.0;
      }
      if (0.0 <= local_168) {
        fVar25 = fVar8;
        if (local_168 <= fVar8) {
          fVar25 = local_168;
        }
      }
      else {
        fVar25 = 0.0;
      }
      if (0.0 <= local_164) {
        fVar33 = fVar8;
        if (local_164 <= fVar8) {
          fVar33 = local_164;
        }
      }
      else {
        fVar33 = 0.0;
      }
      *(float *)(puVar21 + 0x60) = (float)local_158 + fVar24;
      *(float *)(puVar21 + 100) = *(float *)(puVar21 + 0x70) + fVar42;
      *(undefined4 *)(puVar21 + 0x28) = 0;
      *(undefined4 *)(puVar21 + 0x20) = 0;
      *(undefined8 *)(puVar21 + -8) = 0x180040446;
      FUN_1803fe590(uVar26,&local_130,puVar21 + 0x60,
                    (int)(fVar35 * fVar9 + fVar2) << 0x18 | (int)(fVar32 * fVar9 + fVar2) << 0x10 |
                    (int)(fVar25 * fVar9 + fVar2) << 8 | (int)(fVar33 * fVar9 + fVar2));
    }
    if ((local_118 != 0) && (0.0 < local_160)) {
      *(undefined8 *)(puVar21 + -8) = 0x180040472;
      fVar32 = (float)FUN_18053fc00();
      pppppppuVar15 = &local_128;
      if (0xf < uStack_110) {
        pppppppuVar15 = local_128;
      }
      fVar42 = local_160 * _DAT_1808ac284 * *(float *)(puVar21 + 0x74);
      fVar35 = 0.0;
      if ((0.0 <= fVar42) && (fVar35 = fVar8, fVar42 <= fVar8)) {
        fVar35 = fVar42;
      }
      *(undefined8 ********)(puVar21 + 0x20) = pppppppuVar15;
      *(undefined8 *)(puVar21 + -8) = 0x1800404ec;
      FUN_18003abe0(uVar26,&local_108,
                    CONCAT44(fVar32 + *(float *)(puVar21 + 0x70),
                             ((float)local_158 + fVar24) - fVar22 * fVar2),
                    (int)(fVar35 * fVar9 + fVar2) << 0x18 | 0xffffff);
    }
  }
  *(float *)((longlong)param_1 + 0x1c) =
       (fVar34 + fVar31 + DAT_1808ac540) * *(float *)(puVar21 + 0x7c) +
       *(float *)((longlong)param_1 + 0x1c);
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    pppppppuVar15 = local_128;
    if (0xfff < uVar20) {
      pppppppuVar15 = (undefined8 *******)local_128[-1];
      if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pppppppuVar15))) {
        pcVar6 = (code *)swi(0x29);
        (*pcVar6)(5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar20 = uStack_110 + 0x28;
    }
    *(undefined8 *)(puVar21 + -8) = 0x180040542;
    thunk_FUN_1803d64e0(pppppppuVar15,uVar20);
  }
LAB_180040542:
  *(undefined8 *)(puVar21 + -8) = 0x18004054e;
  return;
}



/* ===== 1800405b0 FUN_1800405b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800405b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 ****ppppuVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  float extraout_XMM0_Da;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1b8 [32];
  float *local_198;
  uint local_190;
  float local_188;
  float local_184;
  float local_180;
  undefined8 local_178;
  float local_170;
  float local_16c;
  undefined8 local_168;
  int local_160 [3];
  float local_154;
  float local_150 [3];
  float local_144;
  longlong local_140 [2];
  undefined1 local_130 [24];
  undefined8 ****local_118 [3];
  ulonglong local_100;
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  local_168 = *(longlong *)param_1[1] << 8 ^ (longlong)(int)((longlong *)param_1[1])[2] << 4;
  plVar8 = (longlong *)FUN_180042e90(param_1,local_140,&local_168);
  lVar1 = *plVar8;
  *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)(DAT_180ca0a50 + 0x10);
  FUN_18003aff0(local_118,*(undefined4 *)(param_1[1] + 0x58));
  fVar4 = DAT_1808ac34c;
  cVar6 = FUN_18003aaa0(lVar1 + 0x18);
  local_154 = extraout_XMM0_Da;
  if ((cVar6 != '\0') && ((undefined8 *****)(lVar1 + 0x60) != local_118)) {
    ppppuVar12 = local_118;
    if (0xf < local_100) {
      ppppuVar12 = local_118[0];
    }
    FUN_180029840((undefined8 ****)(lVar1 + 0x60),ppppuVar12);
  }
  if ((extraout_XMM0_Da <= 0.0) || (*(longlong *)(lVar1 + 0x70) == 0)) goto LAB_180040cc2;
  local_160[1] = 0xfa;
  local_160[0] = 0x4b;
  piVar11 = local_160;
  if (0x4a < DAT_18091a1ac) {
    piVar11 = &DAT_18091a1ac;
  }
  piVar9 = local_160 + 1;
  if (DAT_18091a1ac < 0xfb) {
    piVar9 = piVar11;
  }
  fVar20 = (float)*piVar9 / DAT_1808acb08;
  fVar16 = *(float *)(param_1[1] + 0x48) - *(float *)(param_1[1] + 0x40);
  if (0.0 < fVar16) {
    fVar21 = fVar20 * DAT_1808ac950;
    if ((fVar16 < fVar20 * DAT_1808ac950) &&
       (fVar21 = fVar20 * DAT_1808ac8d4 * DAT_1808ac254, fVar21 <= fVar16)) {
      fVar21 = fVar16;
    }
    fVar20 = (((fVar21 - fVar20 * DAT_1808ac8d4) * DAT_1808ac154) / (fVar20 * DAT_1808ac7ec) +
             DAT_1808ac254) * fVar20;
  }
  fVar20 = fVar20 * DAT_1808ac8e4;
  iVar15 = 1;
  if (1 < (int)(fVar20 * DAT_1808ac254)) {
    iVar15 = (int)(fVar20 * DAT_1808ac254);
  }
  plVar8 = (longlong *)FUN_18039f3d0(local_130,lVar1 + 0x60,iVar15);
  fVar16 = DAT_1808ac1f4;
  lVar1 = *plVar8;
  local_140[0] = lVar1;
  if (((lVar1 == 0) || ((int)plVar8[1] < 1)) || (*(int *)((longlong)plVar8 + 0xc) < 1))
  goto LAB_180040cc2;
  fVar25 = (float)*(int *)((longlong)plVar8 + 0xc);
  fVar21 = (float)(int)plVar8[1];
  fVar17 = (float)FUN_18053f0d0(fVar20 * _DAT_1808ac400 + DAT_1808ac1f4);
  if ((fVar17 < fVar21) && (0.0 < fVar17)) {
    fVar25 = (float)FUN_18053f0d0((fVar25 * fVar17) / fVar21);
    fVar21 = fVar17;
  }
  lVar10 = param_1[1];
  local_180 = *(float *)(lVar10 + 0x14);
  local_184 = *(float *)(lVar10 + 0x18);
  local_188 = *(float *)(lVar10 + 0x1c);
  fVar17 = *(float *)(lVar10 + 0x20);
  if (*(char *)(lVar10 + 0x34) != '\0') {
    if (*(char *)(lVar10 + 0x3c) == '\0') {
      fVar23 = fVar4;
    }
    else {
      fVar23 = *(float *)(lVar10 + 0x38);
      if (fVar23 == 0.0) goto LAB_1800408f6;
    }
    local_180 = (*(float *)(lVar10 + 0x24) - local_180) * fVar23 + local_180;
    local_184 = (*(float *)(lVar10 + 0x28) - local_184) * fVar23 + local_184;
    local_188 = (*(float *)(lVar10 + 0x2c) - local_188) * fVar23 + local_188;
    fVar17 = (*(float *)(lVar10 + 0x30) - fVar17) * fVar23 + fVar17;
  }
LAB_1800408f6:
  fVar24 = fVar17 * *(float *)(lVar10 + 0x54) * extraout_XMM0_Da;
  fVar23 = *(float *)((longlong)param_1 + 0x1c) + fVar4;
  *(float *)((longlong)param_1 + 0x1c) = fVar23;
  fVar17 = *(float *)(lVar10 + 0x40);
  if (*(float *)(lVar10 + 0x48) == fVar17) {
    fVar17 = (float)FUN_18053fc00(fVar17 - *(float *)(param_1 + 4) * fVar16);
  }
  else {
    fVar17 = fVar17 + *(float *)(param_1 + 3);
  }
  fVar17 = (float)FUN_18053fc00(fVar17);
  local_168 = CONCAT44(local_168._4_4_,fVar17);
  fVar23 = (float)FUN_18053fc00(*(float *)(lVar10 + 0x4c) + DAT_1808ac540 + fVar4 + fVar23);
  fVar23 = fVar23 + fVar4;
  local_168 = CONCAT44(fVar23,(undefined4)local_168);
  if (0.0 < fVar24) {
    lVar10 = FUN_180280c60(*(undefined4 *)(lVar10 + 0x58));
    fVar5 = DAT_1808acb94;
    if ((*(char *)(param_1[2] + 0x1c) == '\0') ||
       ((*(int *)(param_1[1] + 0x58) != 0x1f && ((lVar10 == 0 || (*(int *)(lVar10 + 0x48) != 1))))))
    {
      local_178 = 0;
      local_150[0] = fVar4;
    }
    else {
      local_178 = 0x3f800000;
      local_150[0] = 0.0;
    }
    local_150[1] = 1.0;
    local_16c = fVar23 + fVar4;
    local_170 = fVar17 + fVar4;
    local_150[2] = local_170 + fVar21;
    local_144 = local_16c + fVar25;
    local_160[2] = (int)(fVar24 * fVar16 * DAT_1808acb94) << 0x18;
    iVar15 = 8;
    if (local_160[2] != 0) {
      lVar10 = *param_1;
      if ((lVar1 == *(longlong *)(lVar10 + 0x78)) && (*(longlong *)(lVar10 + 0x70) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
        iVar7 = *(int *)(lVar10 + 0xb4);
        if (*(int *)(lVar10 + 0xb0) == iVar7) {
          iVar13 = *(int *)(lVar10 + 0xb0) + 1;
          if (iVar7 == 0) {
            iVar7 = 8;
          }
          else {
            iVar7 = iVar7 / 2 + iVar7;
          }
          if (iVar13 < iVar7) {
            iVar13 = iVar7;
          }
          FUN_1803f7030(lVar10 + 0xb0,iVar13);
        }
        iVar7 = *(int *)(lVar10 + 0xb0);
        lVar2 = *(longlong *)(lVar10 + 0xb8);
        *(undefined8 *)(lVar2 + (longlong)iVar7 * 0x10) = 0;
        *(longlong *)(lVar2 + 8 + (longlong)iVar7 * 0x10) = lVar1;
        *(int *)(lVar10 + 0xb0) = *(int *)(lVar10 + 0xb0) + 1;
        *(undefined8 *)(lVar10 + 0x70) = 0;
        *(longlong *)(lVar10 + 0x78) = lVar1;
        FUN_1803fc0a0(lVar10);
      }
      FUN_1803fc3a0(lVar10,6,4);
      local_190 = local_160[2];
      local_198 = local_150;
      FUN_1803fc4a0(lVar10,&local_170,local_150 + 2);
      if (bVar3) {
        FUN_1803fc340(lVar10);
      }
    }
    fVar18 = fVar4;
    if (fVar24 <= fVar4) {
      fVar18 = fVar24;
    }
    if (0.0 <= local_188) {
      fVar24 = fVar4;
      if (local_188 <= fVar4) {
        fVar24 = local_188;
      }
    }
    else {
      fVar24 = 0.0;
    }
    if (0.0 <= local_184) {
      fVar19 = fVar4;
      if (local_184 <= fVar4) {
        fVar19 = local_184;
      }
    }
    else {
      fVar19 = 0.0;
    }
    fVar22 = 0.0;
    if ((0.0 <= local_180) && (fVar22 = fVar4, local_180 <= fVar4)) {
      fVar22 = local_180;
    }
    uVar14 = (int)(fVar22 * fVar5 + fVar16) |
             (int)(fVar18 * fVar5 + fVar16) << 0x18 | (int)(fVar24 * fVar5 + fVar16) << 0x10 |
             (int)(fVar19 * fVar5 + fVar16) << 8;
    local_170 = fVar17 + fVar21;
    local_16c = fVar23 + fVar25;
    if ((uVar14 & 0xff000000) != 0) {
      lVar1 = *param_1;
      if ((local_140[0] == *(longlong *)(lVar1 + 0x78)) && (*(longlong *)(lVar1 + 0x70) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
        iVar7 = *(int *)(lVar1 + 0xb4);
        if (*(int *)(lVar1 + 0xb0) == iVar7) {
          iVar13 = *(int *)(lVar1 + 0xb0) + 1;
          if (iVar7 != 0) {
            iVar15 = iVar7 + iVar7 / 2;
          }
          if (iVar13 < iVar15) {
            iVar13 = iVar15;
          }
          FUN_1803f7030(lVar1 + 0xb0,iVar13);
        }
        iVar15 = *(int *)(lVar1 + 0xb0);
        lVar10 = *(longlong *)(lVar1 + 0xb8);
        *(undefined8 *)(lVar10 + (longlong)iVar15 * 0x10) = 0;
        *(longlong *)(lVar10 + 8 + (longlong)iVar15 * 0x10) = local_140[0];
        *(int *)(lVar1 + 0xb0) = *(int *)(lVar1 + 0xb0) + 1;
        *(undefined8 *)(lVar1 + 0x70) = 0;
        *(longlong *)(lVar1 + 0x78) = local_140[0];
        FUN_1803fc0a0(lVar1);
      }
      FUN_1803fc3a0(lVar1,6,4);
      local_198 = local_150;
      local_190 = uVar14;
      FUN_1803fc4a0(lVar1,&local_168,&local_170,&local_178);
      if (bVar3) {
        FUN_1803fc340(lVar1);
      }
    }
  }
  *(float *)((longlong)param_1 + 0x1c) =
       (fVar20 + DAT_1808ac540) * local_154 + *(float *)((longlong)param_1 + 0x1c);
LAB_180040cc2:
  FUN_18000f890(local_118);
  return;
}



/* ===== 180040d30 FUN_180040d30 ===== */

void FUN_180040d30(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  
  fVar6 = DAT_1808acb94;
  fVar5 = DAT_1808ac34c;
  lVar4 = param_1[1];
  fVar1 = *(float *)(lVar4 + 0x40);
  fVar2 = *(float *)(lVar4 + 0x48);
  if ((fVar2 <= fVar1) && (*(float *)(lVar4 + 0x4c) <= *(float *)(lVar4 + 0x44))) {
    return;
  }
  fVar14 = *(float *)(lVar4 + 0x18);
  fVar12 = *(float *)(lVar4 + 0x1c);
  fVar15 = *(float *)(lVar4 + 0x20);
  fVar11 = *(float *)(lVar4 + 0x14);
  fVar3 = *(float *)(lVar4 + 0x4c);
  if (*(char *)(lVar4 + 0x34) != '\0') {
    if (*(char *)(lVar4 + 0x3c) == '\0') {
      fVar16 = DAT_1808ac34c;
    }
    else {
      fVar16 = *(float *)(lVar4 + 0x38);
      if (fVar16 == 0.0) goto LAB_180040e4a;
    }
    fVar11 = (*(float *)(lVar4 + 0x24) - fVar11) * fVar16 + fVar11;
    fVar14 = (*(float *)(lVar4 + 0x28) - fVar14) * fVar16 + fVar14;
    fVar12 = (*(float *)(lVar4 + 0x2c) - fVar12) * fVar16 + fVar12;
    fVar15 = (*(float *)(lVar4 + 0x30) - fVar15) * fVar16 + fVar15;
  }
LAB_180040e4a:
  fVar15 = fVar15 * *(float *)(lVar4 + 0x54);
  fVar16 = *(float *)(lVar4 + 0x44);
  if (DAT_1808abfe4 <= fVar15) {
    if (0.0 <= fVar15) {
      fVar13 = DAT_1808ac34c;
      if (fVar15 <= DAT_1808ac34c) {
        fVar13 = fVar15;
      }
    }
    else {
      fVar13 = 0.0;
    }
    if (0.0 <= fVar12) {
      fVar15 = DAT_1808ac34c;
      if (fVar12 <= DAT_1808ac34c) {
        fVar15 = fVar12;
      }
    }
    else {
      fVar15 = 0.0;
    }
    if (0.0 <= fVar14) {
      fVar12 = DAT_1808ac34c;
      if (fVar14 <= DAT_1808ac34c) {
        fVar12 = fVar14;
      }
    }
    else {
      fVar12 = 0.0;
    }
    if (0.0 <= fVar11) {
      fVar14 = DAT_1808ac34c;
      if (fVar11 <= DAT_1808ac34c) {
        fVar14 = fVar11;
      }
    }
    else {
      fVar14 = 0.0;
    }
    uVar9 = (int)(fVar14 * DAT_1808acb94 + DAT_1808ac1f4) |
            (int)(fVar12 * DAT_1808acb94 + DAT_1808ac1f4) << 8 |
            (int)(fVar15 * DAT_1808acb94 + DAT_1808ac1f4) << 0x10 |
            (int)(fVar13 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18;
    if ((uVar9 & 0xff000000) != 0) {
      lVar4 = *param_1;
      if ((*(byte *)(lVar4 + 0x30) & 1) == 0) {
        pfVar10 = &local_a0;
        local_a0 = fVar2 - DAT_1808ac1e0;
        pfVar7 = &local_a8;
        local_9c = fVar3 - DAT_1808ac1e0;
        local_a8 = fVar1 + DAT_1808ac1f4;
        local_a4 = fVar16 + DAT_1808ac1f4;
      }
      else {
        pfVar10 = &local_a8;
        pfVar7 = &local_a0;
        local_a8 = fVar2 - DAT_1808ac1f4;
        local_a4 = fVar3 - DAT_1808ac1f4;
        local_a0 = fVar1 + DAT_1808ac1f4;
        local_9c = fVar16 + DAT_1808ac1f4;
      }
      FUN_1803fe160(lVar4,pfVar7,pfVar10,0,0);
      FUN_1803fc600(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar9,fVar5,
                    0x200);
      *(undefined4 *)(lVar4 + 0x50) = 0;
    }
  }
  iVar8 = (int)(*(float *)(param_1[1] + 0x54) * DAT_1808ac20c * fVar6);
  if (0 < iVar8) {
    local_a0 = fVar2 + fVar5;
    local_9c = fVar3 + fVar5;
    uVar9 = iVar8 << 0x18 | 0xa0a0a;
    local_a8 = fVar1 - fVar5;
    local_a4 = fVar16 - fVar5;
    FUN_1803fe480(*param_1,&local_a8,&local_a0,uVar9,0,fVar5,0);
    local_a0 = fVar2 - fVar5;
    local_9c = fVar3 - fVar5;
    local_a8 = fVar1 + fVar5;
    local_a4 = fVar16 + fVar5;
    FUN_1803fe480(*param_1,&local_a8,&local_a0,uVar9,0,fVar5,0);
  }
  return;
}



/* ===== 180041100 FUN_180041100 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_180041100(undefined8 *****param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char **ppcVar10;
  longlong lVar11;
  undefined8 ******ppppppuVar12;
  ulonglong uVar13;
  undefined8 *******pppppppuVar14;
  char **ppcVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 *****pppppuVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  char *pcVar21;
  undefined8 *******pppppppuVar22;
  int iVar23;
  uint uVar24;
  char *pcVar25;
  ulonglong uVar26;
  undefined8 ***pppuVar27;
  char *pcVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [24];
  undefined8 *******local_1a8;
  undefined1 local_1a0;
  char *local_198;
  char *local_190;
  char *local_188;
  char *local_180;
  undefined8 ***local_178;
  char *local_170;
  char *local_168;
  char *local_160;
  undefined8 ***local_158;
  undefined8 *****local_150;
  longlong *local_148;
  undefined1 *local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 ****local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  undefined8 *******local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 ******local_c8;
  undefined8 ******ppppppuStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 ******local_a8;
  undefined8 *****pppppuStack_a0;
  undefined8 *****local_98;
  undefined8 *****pppppuStack_90;
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  iVar6 = (int)param_2[2];
  if (iVar6 == 0) {
    local_140 = &DAT_18095cf94;
    local_180 = &DAT_18095cfa8;
    pcVar25 = &DAT_18095cfa9;
    pcVar21 = &DAT_18095cfaa;
    pcVar28 = &DAT_18095cfab;
    pppuVar27 = (undefined8 ***)&DAT_18095cfac;
    local_190 = &DAT_18095cfad;
    local_188 = &DAT_18095cfae;
    local_160 = &DAT_18095cfad;
    local_158 = (undefined8 ***)&DAT_18095cfae;
  }
  else if (iVar6 == 2) {
    local_140 = &DAT_18095d098;
    local_180 = &DAT_18095d0ac;
    pcVar25 = &DAT_18095d0ad;
    pcVar21 = &DAT_18095d0ae;
    pcVar28 = &DAT_18095d0af;
    pppuVar27 = (undefined8 ***)&DAT_18095d0b0;
    local_190 = &DAT_18095d0b1;
    local_188 = &DAT_18095d0b2;
    local_160 = &DAT_18095d0b1;
    local_158 = (undefined8 ***)&DAT_18095d0b2;
  }
  else if (iVar6 == 3) {
    local_140 = &DAT_18095d0cc;
    local_180 = &DAT_18095d0e0;
    pcVar25 = &DAT_18095d0e1;
    pcVar21 = &DAT_18095d0e2;
    pcVar28 = &DAT_18095d0e3;
    pppuVar27 = (undefined8 ***)&DAT_18095d0e4;
    local_190 = &DAT_18095d0e5;
    local_188 = &DAT_18095d0e6;
    local_160 = &DAT_18095d0e5;
    local_158 = (undefined8 ***)&DAT_18095d0e6;
  }
  else {
    local_140 = &DAT_18095d040;
    local_180 = &DAT_18095d054;
    pcVar25 = &DAT_18095d055;
    pcVar21 = &DAT_18095d056;
    pcVar28 = &DAT_18095d057;
    pppuVar27 = (undefined8 ***)&DAT_18095d058;
    local_190 = &DAT_18095d059;
    local_188 = &DAT_18095d05a;
    local_160 = &DAT_18095d059;
    local_158 = (undefined8 ***)&DAT_18095d05a;
  }
  local_138 = 0;
  local_130 = 0x41700000;
  if (*(char *)((longlong)param_2 + 0x51) == '\0') {
    return;
  }
  local_198 = pcVar28;
  local_178 = pppuVar27;
  local_170 = pcVar21;
  local_168 = pcVar28;
  local_150 = param_1;
  local_148 = param_2;
  local_12c = param_3;
  local_128 = param_4;
  local_120 = (undefined8 ****)pppuVar27;
  local_110 = param_1;
  if (iVar6 == 0) {
    if (*local_180 != '\0') {
      FUN_1800405b0(&local_150);
    }
    fVar32 = DAT_1808ac34c;
    uVar24 = 1;
    if (*pcVar25 != '\0') {
      fVar30 = *(float *)((longlong)param_2 + 0x14);
      fVar33 = *(float *)(param_2 + 3);
      fVar31 = *(float *)((longlong)param_2 + 0x1c);
      fVar34 = *(float *)(param_2 + 4);
      if (*(char *)((longlong)param_2 + 0x34) != '\0') {
        if (*(char *)((longlong)param_2 + 0x3c) == '\0') {
          fVar35 = DAT_1808ac34c;
        }
        else {
          fVar35 = *(float *)(param_2 + 7);
          if (fVar35 == 0.0) goto LAB_180041e46;
        }
        fVar30 = (*(float *)((longlong)param_2 + 0x24) - fVar30) * fVar35 + fVar30;
        fVar33 = (*(float *)(param_2 + 5) - fVar33) * fVar35 + fVar33;
        fVar31 = (*(float *)((longlong)param_2 + 0x2c) - fVar31) * fVar35 + fVar31;
        fVar34 = (*(float *)(param_2 + 6) - fVar34) * fVar35 + fVar34;
      }
LAB_180041e46:
      local_110 = (undefined8 *****)CONCAT44(fVar33,fVar30);
      uStack_108 = CONCAT44(fVar34,fVar31);
      uVar8 = FUN_18003bb50(&local_f0,param_2);
      FUN_18003f5d0(&local_150,1,uVar8,&local_110);
      FUN_18000f890(&local_f0);
    }
    if (*local_170 != '\0') {
      local_198 = (char *)((ulonglong)local_198 & 0xffffffff00000000);
      uStack_e8 = 0;
      local_e0 = 0;
      local_d8 = 0xf;
      local_f0 = (undefined8 *******)0x0;
      uVar3 = FUN_18003c060(param_2,&local_198,&local_f0);
      local_1a0 = 1;
      local_1a8 = &local_f0;
      FUN_18003fb50(&local_150,2,uVar3,local_198._0_4_);
      puVar19 = auStack_1c8;
      if (local_d8 < 0x10) goto LAB_180041f25;
      uVar16 = local_d8 + 1;
      pppppppuVar14 = local_f0;
      if (uVar16 < 0x1000) {
LAB_180041f20:
        thunk_FUN_1803d64e0(pppppppuVar14,uVar16);
        goto LAB_180041f25;
      }
      pppppppuVar14 = (undefined8 *******)local_f0[-1];
      if ((ulonglong)((longlong)local_f0 + (-8 - (longlong)pppppppuVar14)) < 0x20) {
        uVar16 = local_d8 + 0x28;
        goto LAB_180041f20;
      }
LAB_1800422c1:
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar20 = puVar19 + 8;
LAB_1800422c8:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar20 + -8) = &UNK_1800422cd;
      FUN_180011990();
    }
LAB_180041f25:
    if (*local_168 != '\0') {
      fVar30 = *(float *)((longlong)param_2 + 0x14);
      fVar33 = *(float *)(param_2 + 3);
      fVar31 = *(float *)((longlong)param_2 + 0x1c);
      fVar34 = *(float *)(param_2 + 4);
      if (*(char *)((longlong)param_2 + 0x34) != '\0') {
        if (*(char *)((longlong)param_2 + 0x3c) == '\0') {
          fVar35 = fVar32;
        }
        else {
          fVar35 = *(float *)(param_2 + 7);
          if (fVar35 == 0.0) goto LAB_180041fb5;
        }
        fVar30 = (*(float *)((longlong)param_2 + 0x24) - fVar30) * fVar35 + fVar30;
        fVar33 = (*(float *)(param_2 + 5) - fVar33) * fVar35 + fVar33;
        fVar31 = (*(float *)((longlong)param_2 + 0x2c) - fVar31) * fVar35 + fVar31;
        fVar34 = (*(float *)(param_2 + 6) - fVar34) * fVar35 + fVar34;
      }
LAB_180041fb5:
      local_110 = (undefined8 *****)CONCAT44(fVar33,fVar30);
      uStack_108 = CONCAT44(fVar34,fVar31);
      uVar8 = FUN_18003bef0(&local_f0,param_2);
      FUN_18003f5d0(&local_150,3,uVar8,&local_110);
      FUN_18000f890(&local_f0);
    }
    if (*(char *)local_120 != '\0') {
      uStack_e8 = 0;
      local_e0 = 0;
      local_d8 = 0xf;
      local_f0 = (undefined8 *******)0x0;
      local_120 = (undefined8 ****)0x0;
      uStack_118 = 0;
      cVar4 = FUN_18003c170(param_2,&local_f0,&local_120);
      uVar26 = local_d8;
      uVar16 = local_e0;
      pppppppuVar14 = local_f0;
      puVar20 = auStack_1c8;
      pppppuVar18 = &local_120;
      if (cVar4 == '\0') {
        pppppuVar18 = (undefined8 *****)&DAT_18095cffc;
      }
      local_110 = pppppuVar18;
      if (cVar4 == '\0') {
        uStack_108 = 0;
        local_100 = 0;
        local_f8 = 0xf;
        local_110 = (undefined8 *****)0x0;
        ppppppuVar12 = (undefined8 ******)&local_110;
        uVar24 = 2;
      }
      else {
        local_c8 = (undefined8 ******)0x0;
        ppppppuStack_c0 = (undefined8 ******)0x0;
        local_b8 = 0;
        local_b0 = 0;
        pppppppuVar22 = &local_f0;
        if (0xf < local_d8) {
          pppppppuVar22 = local_f0;
        }
        if (0x7fffffffffffffff < local_e0) goto LAB_1800422c8;
        if (local_e0 < 0x10) {
          local_b8 = local_e0;
          local_b0 = 0xf;
          local_c8 = *pppppppuVar22;
          ppppppuStack_c0 = pppppppuVar22[1];
        }
        else {
          uVar13 = local_e0 | 0xf;
          uVar29 = 0x7fffffffffffffff;
          if ((uVar13 < 0x8000000000000000) && (uVar29 = uVar13, uVar13 < 0x16)) {
            uVar29 = 0x16;
          }
          local_c8 = (undefined8 ******)FUN_18000fb70(uVar29 + 1);
          local_b8 = uVar16;
          local_b0 = uVar29;
          FUN_180540530(local_c8,pppppppuVar22,uVar16 + 1);
        }
        pppppuVar18 = local_110;
        ppppppuVar12 = &local_c8;
      }
      local_198 = (char *)CONCAT44(local_198._4_4_,uVar24);
      FUN_18003f5d0(&local_150,4,ppppppuVar12,pppppuVar18);
      if (((uVar24 & 2) != 0) && (uVar24 = uVar24 & 0xfffffffd, 0xf < local_f8)) {
        uVar16 = local_f8 + 1;
        pppppuVar18 = local_110;
        if (0xfff < uVar16) {
          pppppuVar18 = (undefined8 *****)local_110[-1];
          if (0x1f < (ulonglong)((longlong)local_110 + (-8 - (longlong)pppppuVar18))) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar19 = auStack_1c0;
            goto LAB_1800422c1;
          }
          uVar16 = local_f8 + 0x28;
        }
        thunk_FUN_1803d64e0(pppppuVar18,uVar16);
      }
      if ((uVar24 & 1) != 0) {
        FUN_18000f890(&local_c8);
      }
      puVar19 = auStack_1c8;
      if (0xf < uVar26) {
        uVar16 = uVar26 + 1;
        pppppppuVar22 = pppppppuVar14;
        if (0xfff < uVar16) {
          pppppppuVar22 = (undefined8 *******)pppppppuVar14[-1];
          if (0x1f < (ulonglong)((longlong)pppppppuVar14 + (-8 - (longlong)pppppppuVar22)))
          goto LAB_1800422c1;
          uVar16 = uVar26 + 0x28;
        }
        thunk_FUN_1803d64e0(pppppppuVar22,uVar16);
      }
    }
    if (*local_160 != '\0') {
      fVar30 = *(float *)((longlong)param_2 + 0x14);
      fVar33 = *(float *)(param_2 + 3);
      fVar31 = *(float *)((longlong)param_2 + 0x1c);
      fVar34 = *(float *)(param_2 + 4);
      if ((*(char *)((longlong)param_2 + 0x34) != '\0') &&
         ((*(char *)((longlong)param_2 + 0x3c) == '\0' ||
          (fVar32 = *(float *)(param_2 + 7), fVar32 != 0.0)))) {
        fVar30 = (*(float *)((longlong)param_2 + 0x24) - fVar30) * fVar32 + fVar30;
        fVar33 = (*(float *)(param_2 + 5) - fVar33) * fVar32 + fVar33;
        fVar31 = (*(float *)((longlong)param_2 + 0x2c) - fVar31) * fVar32 + fVar31;
        fVar34 = (*(float *)(param_2 + 6) - fVar34) * fVar32 + fVar34;
      }
      local_110 = (undefined8 *****)CONCAT44(fVar33,fVar30);
      uStack_108 = CONCAT44(fVar34,fVar31);
      uVar8 = FUN_18003c540(&local_f0,param_2);
      FUN_18003f5d0(&local_150,5,uVar8,&local_110);
      FUN_18000f890(&local_f0);
    }
    pppuVar27 = local_158;
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 != 2) {
        if (iVar6 != 3) {
          return;
        }
        if (*local_180 != '\0') {
          FUN_1800405b0(&local_150);
        }
        fVar32 = DAT_1808ac34c;
        if (*pcVar25 != '\0') {
          fVar30 = *(float *)((longlong)param_2 + 0x14);
          fVar33 = *(float *)(param_2 + 3);
          fVar31 = *(float *)((longlong)param_2 + 0x1c);
          fVar34 = *(float *)(param_2 + 4);
          if (*(char *)((longlong)param_2 + 0x34) != '\0') {
            if (*(char *)((longlong)param_2 + 0x3c) == '\0') {
              fVar35 = DAT_1808ac34c;
            }
            else {
              fVar35 = *(float *)(param_2 + 7);
              if (fVar35 == 0.0) goto LAB_1800413f0;
            }
            fVar30 = (*(float *)((longlong)param_2 + 0x24) - fVar30) * fVar35 + fVar30;
            fVar33 = (*(float *)(param_2 + 5) - fVar33) * fVar35 + fVar33;
            fVar31 = (*(float *)((longlong)param_2 + 0x2c) - fVar31) * fVar35 + fVar31;
            fVar34 = (*(float *)(param_2 + 6) - fVar34) * fVar35 + fVar34;
          }
LAB_1800413f0:
          local_110 = (undefined8 *****)CONCAT44(fVar33,fVar30);
          uStack_108 = CONCAT44(fVar34,fVar31);
          uVar8 = FUN_18003bb50(&local_f0,param_2);
          FUN_18003f5d0(&local_150,1,uVar8,&local_110);
          FUN_18000f890(&local_f0);
        }
        if (*pcVar21 != '\0') {
          local_198 = (char *)((ulonglong)local_198 & 0xffffffff00000000);
          uStack_e8 = 0;
          local_e0 = 0;
          local_d8 = 0xf;
          local_f0 = (undefined8 *******)0x0;
          uVar3 = FUN_18003c060(param_2,&local_198,&local_f0);
          local_1a0 = 1;
          local_1a8 = &local_f0;
          FUN_18003fb50(&local_150,2,uVar3,local_198._0_4_);
          puVar19 = auStack_1c8;
          if (0xf < local_d8) {
            uVar16 = local_d8 + 1;
            pppppppuVar14 = local_f0;
            if (0xfff < uVar16) {
              pppppppuVar14 = (undefined8 *******)local_f0[-1];
              if (0x1f < (ulonglong)((longlong)local_f0 + (-8 - (longlong)pppppppuVar14)))
              goto LAB_1800422c1;
              uVar16 = local_d8 + 0x28;
            }
            thunk_FUN_1803d64e0(pppppppuVar14,uVar16);
          }
        }
        if (*pcVar28 == '\0') goto LAB_180041598;
        fVar30 = *(float *)((longlong)param_2 + 0x14);
        fVar33 = *(float *)(param_2 + 3);
        fVar31 = *(float *)((longlong)param_2 + 0x1c);
        fVar34 = *(float *)(param_2 + 4);
        if (*(char *)((longlong)param_2 + 0x34) != '\0') {
          if (*(char *)((longlong)param_2 + 0x3c) == '\0') {
            fVar35 = fVar32;
          }
          else {
            fVar35 = *(float *)(param_2 + 7);
            if (fVar35 == 0.0) goto LAB_180041557;
          }
          fVar30 = (*(float *)((longlong)param_2 + 0x24) - fVar30) * fVar35 + fVar30;
          fVar33 = (*(float *)(param_2 + 5) - fVar33) * fVar35 + fVar33;
          fVar31 = (*(float *)((longlong)param_2 + 0x2c) - fVar31) * fVar35 + fVar31;
          fVar34 = (*(float *)(param_2 + 6) - fVar34) * fVar35 + fVar34;
        }
LAB_180041557:
        local_110 = (undefined8 *****)CONCAT44(fVar33,fVar30);
        uStack_108 = CONCAT44(fVar34,fVar31);
        uVar8 = FUN_18003bef0(&local_f0,param_2);
        FUN_18003f5d0(&local_150,3,uVar8,&local_110);
        FUN_18000f890(&local_f0);
LAB_180041598:
        if (*(char *)pppuVar27 != '\0') {
          fVar30 = *(float *)((longlong)param_2 + 0x14);
          fVar33 = *(float *)(param_2 + 3);
          fVar31 = *(float *)((longlong)param_2 + 0x1c);
          fVar34 = *(float *)(param_2 + 4);
          if ((*(char *)((longlong)param_2 + 0x34) != '\0') &&
             ((*(char *)((longlong)param_2 + 0x3c) == '\0' ||
              (fVar32 = *(float *)(param_2 + 7), fVar32 != 0.0)))) {
            fVar30 = (*(float *)((longlong)param_2 + 0x24) - fVar30) * fVar32 + fVar30;
            fVar33 = (*(float *)(param_2 + 5) - fVar33) * fVar32 + fVar33;
            fVar31 = (*(float *)((longlong)param_2 + 0x2c) - fVar31) * fVar32 + fVar31;
            fVar34 = (*(float *)(param_2 + 6) - fVar34) * fVar32 + fVar34;
          }
          local_110 = (undefined8 *****)CONCAT44(fVar33,fVar30);
          uStack_108 = CONCAT44(fVar34,fVar31);
          uVar8 = FUN_18003c540(&local_f0,param_2);
          FUN_18003f5d0(&local_150,4,uVar8,&local_110);
          FUN_18000f890(&local_f0);
        }
        if (*local_190 != '\0') {
          FUN_18003eeb0(param_2);
        }
        if (*local_188 == '\0') {
          return;
        }
        if (*(int *)((longlong)param_2 + 0xc) != 6) {
          return;
        }
        plVar17 = local_148;
        puVar9 = (undefined8 *)FUN_18003c780(&local_110);
        local_f0 = (undefined8 *******)*puVar9;
        uStack_e8 = puVar9[1];
        local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)((longlong)plVar17 + 0x54));
        fVar32 = DAT_18095d124;
        if (DAT_18095d124 < DAT_1808ac140) {
          local_190 = (char *)CONCAT44(local_190._4_4_,0xfa);
          local_198 = (char *)CONCAT44(local_198._4_4_,0x4b);
          ppcVar15 = &local_198;
          if (0x4a < DAT_18091a1ac) {
            ppcVar15 = (char **)&DAT_18091a1ac;
          }
          ppcVar10 = &local_190;
          if (DAT_18091a1ac < 0xfb) {
            ppcVar10 = ppcVar15;
          }
          fVar32 = (float)*(int *)ppcVar10 / DAT_1808acb08;
        }
        local_e0 = CONCAT44(fVar32,*(undefined4 *)((longlong)plVar17 + 0x54));
        fVar30 = DAT_18095d128;
        if (DAT_18095d128 < DAT_1808ac140) {
          fVar30 = fVar32;
        }
        local_198 = (char *)CONCAT44(local_198._4_4_,100);
        uVar16 = (ulonglong)local_190 >> 0x20;
        local_190 = (char *)(uVar16 << 0x20);
        ppcVar15 = &local_190;
        if (-1 < DAT_18095d12c) {
          ppcVar15 = (char **)&DAT_18095d12c;
        }
        ppcVar10 = &local_198;
        if (DAT_18095d12c < 0x65) {
          ppcVar10 = ppcVar15;
        }
        local_d8 = CONCAT44((float)*(int *)ppcVar10 / DAT_1808acb08,fVar30);
        local_198 = (char *)CONCAT44(local_198._4_4_,100);
        local_190 = (char *)(uVar16 << 0x20);
        ppcVar15 = &local_190;
        if (-1 < DAT_18095d120) {
          ppcVar15 = (char **)&DAT_18095d120;
        }
        ppcVar10 = &local_198;
        if (DAT_18095d120 < 0x65) {
          ppcVar10 = ppcVar15;
        }
        local_d0 = (float)*(int *)ppcVar10 / DAT_1808acb08;
        FUN_18025acd0(local_150,*local_148,&local_f0);
        return;
      }
      if (*pcVar25 != '\0') {
        local_198 = (char *)((ulonglong)pcVar28 & 0xffffffff00000000);
        uStack_e8 = 0;
        local_e0 = 0;
        local_d8 = 0xf;
        local_f0 = (undefined8 *******)0x0;
        uVar3 = FUN_18003c060(param_2,&local_198,&local_f0);
        local_1a0 = 1;
        local_1a8 = &local_f0;
        FUN_18003fb50(&local_150,1,uVar3,local_198._0_4_);
        puVar19 = auStack_1c8;
        if (0xf < local_d8) {
          uVar16 = local_d8 + 1;
          pppppppuVar14 = local_f0;
          if (0xfff < uVar16) {
            pppppppuVar14 = (undefined8 *******)local_f0[-1];
            if (0x1f < (ulonglong)((longlong)local_f0 + (-8 - (longlong)pppppppuVar14)))
            goto LAB_1800422c1;
            uVar16 = local_d8 + 0x28;
          }
          thunk_FUN_1803d64e0(pppppppuVar14,uVar16);
        }
      }
      fVar32 = DAT_1808ac34c;
      if (*pcVar21 != '\0') {
        fVar30 = *(float *)((longlong)param_2 + 0x14);
        fVar33 = *(float *)(param_2 + 3);
        fVar31 = *(float *)((longlong)param_2 + 0x1c);
        fVar34 = *(float *)(param_2 + 4);
        if (*(char *)((longlong)param_2 + 0x34) != '\0') {
          if (*(char *)((longlong)param_2 + 0x3c) == '\0') {
            fVar35 = DAT_1808ac34c;
          }
          else {
            fVar35 = *(float *)(param_2 + 7);
            if (fVar35 == 0.0) goto LAB_1800418f5;
          }
          fVar30 = (*(float *)((longlong)param_2 + 0x24) - fVar30) * fVar35 + fVar30;
          fVar33 = (*(float *)(param_2 + 5) - fVar33) * fVar35 + fVar33;
          fVar31 = (*(float *)((longlong)param_2 + 0x2c) - fVar31) * fVar35 + fVar31;
          fVar34 = (*(float *)(param_2 + 6) - fVar34) * fVar35 + fVar34;
        }
LAB_1800418f5:
        local_110 = (undefined8 *****)CONCAT44(fVar33,fVar30);
        uStack_108 = CONCAT44(fVar34,fVar31);
        uVar8 = FUN_18003bb50(&local_f0,param_2);
        FUN_18003f5d0(&local_150,2,uVar8,&local_110);
        FUN_18000f890(&local_f0);
      }
      if (*pcVar28 != '\0') {
        fVar30 = *(float *)((longlong)param_2 + 0x14);
        fVar33 = *(float *)(param_2 + 3);
        fVar31 = *(float *)((longlong)param_2 + 0x1c);
        fVar34 = *(float *)(param_2 + 4);
        if ((*(char *)((longlong)param_2 + 0x34) != '\0') &&
           ((*(char *)((longlong)param_2 + 0x3c) == '\0' ||
            (fVar32 = *(float *)(param_2 + 7), fVar32 != 0.0)))) {
          fVar30 = (*(float *)((longlong)param_2 + 0x24) - fVar30) * fVar32 + fVar30;
          fVar33 = (*(float *)(param_2 + 5) - fVar33) * fVar32 + fVar33;
          fVar31 = (*(float *)((longlong)param_2 + 0x2c) - fVar31) * fVar32 + fVar31;
          fVar34 = (*(float *)(param_2 + 6) - fVar34) * fVar32 + fVar34;
        }
        local_110 = (undefined8 *****)CONCAT44(fVar33,fVar30);
        uStack_108 = CONCAT44(fVar34,fVar31);
        uVar8 = FUN_18003c540(&local_f0,param_2);
        FUN_18003f5d0(&local_150,3,uVar8,&local_110);
        FUN_18000f890(&local_f0);
      }
      if (*local_180 != '\0') {
        FUN_180040d30(&local_150);
      }
      cVar4 = *(char *)pppuVar27;
      goto LAB_18004227d;
    }
    if (*local_180 != '\0') {
      FUN_1800405b0(&local_150);
    }
    fVar32 = DAT_1808ac34c;
    if (*pcVar25 != '\0') {
      fVar30 = *(float *)((longlong)param_2 + 0x14);
      fVar33 = *(float *)(param_2 + 3);
      fVar31 = *(float *)((longlong)param_2 + 0x1c);
      fVar34 = *(float *)(param_2 + 4);
      if (*(char *)((longlong)param_2 + 0x34) != '\0') {
        if (*(char *)((longlong)param_2 + 0x3c) == '\0') {
          fVar35 = DAT_1808ac34c;
        }
        else {
          fVar35 = *(float *)(param_2 + 7);
          if (fVar35 == 0.0) goto LAB_180041ac0;
        }
        fVar30 = (*(float *)((longlong)param_2 + 0x24) - fVar30) * fVar35 + fVar30;
        fVar33 = (*(float *)(param_2 + 5) - fVar33) * fVar35 + fVar33;
        fVar31 = (*(float *)((longlong)param_2 + 0x2c) - fVar31) * fVar35 + fVar31;
        fVar34 = (*(float *)(param_2 + 6) - fVar34) * fVar35 + fVar34;
      }
LAB_180041ac0:
      local_110 = (undefined8 *****)CONCAT44(fVar33,fVar30);
      uStack_108 = CONCAT44(fVar34,fVar31);
      uVar8 = FUN_18003bb50(&local_f0,param_2);
      FUN_18003f5d0(&local_150,1,uVar8,&local_110);
      FUN_18000f890(&local_f0);
    }
    if (*pcVar21 != '\0') {
      fVar30 = 0.0;
      pppppuStack_a0 = (undefined8 *****)0x0;
      local_98 = (undefined8 *****)0x0;
      pppppuStack_90 = (undefined8 *****)0xf;
      local_a8 = (undefined8 ******)0x0;
      uVar3 = 0;
      uVar16 = (ulonglong)DAT_180ccf68c;
      if (((DAT_180ccf68c == 0) || (DAT_180ccf628 == 0)) ||
         (uVar26 = (ulonglong)DAT_180ccf694, DAT_180ccf694 == 0)) {
LAB_180041c67:
        uVar8 = 0;
      }
      else {
        lVar1 = *param_2;
        lVar11 = FUN_18000f3a0((ulonglong)DAT_180ccf628 + 8 + lVar1);
        if (0x7ffffffefffe < lVar11 - 0x10000U) goto LAB_180041c67;
        iVar5 = FUN_180011200(lVar1 + uVar16);
        iVar6 = FUN_180011200(uVar26 + lVar11);
        if (iVar6 < iVar5) {
          iVar6 = iVar5;
        }
        if (iVar6 == 0) {
          iVar23 = 0;
        }
        else {
          iVar23 = (int)(((float)iVar5 / (float)iVar6) * DAT_1808acb08);
        }
        if ((((DAT_180ccf614 == 0) ||
             (iVar7 = FUN_180011200(lVar1 + (ulonglong)DAT_180ccf614), iVar7 == -1)) &&
            (iVar23 == 100)) || (iVar6 < 1)) goto LAB_180041c67;
        if (iVar23 < 0) {
          iVar23 = 0;
        }
        fVar30 = (float)iVar23;
        ppppppuVar12 = (undefined8 ******)FUN_18003a390(&local_f0,iVar5);
        if (&local_a8 != (undefined8 *******)ppppppuVar12) {
          local_a8 = (undefined8 ******)*ppppppuVar12;
          pppppuStack_a0 = ppppppuVar12[1];
          local_98 = ppppppuVar12[2];
          pppppuStack_90 = ppppppuVar12[3];
          ppppppuVar12[2] = (undefined8 *****)0x0;
          ppppppuVar12[3] = (undefined8 *****)0xf;
          *(undefined1 *)ppppppuVar12 = 0;
        }
        FUN_18000f890(&local_f0);
        uVar3 = 0;
        if (((int)param_2[0xb] != 0x1f) && ((float)iVar5 / (float)iVar6 <= DAT_1808ac140)) {
          uVar3 = 1;
        }
        uVar8 = 1;
      }
      local_1a8 = &local_a8;
      local_1a0 = uVar3;
      FUN_18003fb50(&local_150,2,uVar8,fVar30);
      puVar19 = auStack_1c8;
      if ((undefined8 *****)0xf < pppppuStack_90) {
        pppppuVar18 = (undefined8 *****)((longlong)pppppuStack_90 + 1);
        ppppppuVar12 = local_a8;
        if ((undefined8 *****)0xfff < pppppuVar18) {
          ppppppuVar12 = (undefined8 ******)local_a8[-1];
          if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppppuVar12)))
          goto LAB_1800422c1;
          pppppuVar18 = pppppuStack_90 + 5;
        }
        thunk_FUN_1803d64e0(ppppppuVar12,pppppuVar18);
      }
    }
    if (*local_198 != '\0') {
      fVar30 = *(float *)((longlong)param_2 + 0x14);
      fVar33 = *(float *)(param_2 + 3);
      fVar31 = *(float *)((longlong)param_2 + 0x1c);
      fVar34 = *(float *)(param_2 + 4);
      if ((*(char *)((longlong)param_2 + 0x34) != '\0') &&
         ((*(char *)((longlong)param_2 + 0x3c) == '\0' ||
          (fVar32 = *(float *)(param_2 + 7), fVar32 != 0.0)))) {
        fVar30 = (*(float *)((longlong)param_2 + 0x24) - fVar30) * fVar32 + fVar30;
        fVar33 = (*(float *)(param_2 + 5) - fVar33) * fVar32 + fVar33;
        fVar31 = (*(float *)((longlong)param_2 + 0x2c) - fVar31) * fVar32 + fVar31;
        fVar34 = (*(float *)(param_2 + 6) - fVar34) * fVar32 + fVar34;
      }
      local_110 = (undefined8 *****)CONCAT44(fVar33,fVar30);
      uStack_108 = CONCAT44(fVar34,fVar31);
      uVar8 = FUN_18003c540(&local_f0,param_2);
      FUN_18003f5d0(&local_150,3,uVar8,&local_110);
      FUN_18000f890(&local_f0);
    }
    pppuVar27 = local_178;
  }
  cVar4 = *(char *)pppuVar27;
LAB_18004227d:
  if (cVar4 != '\0') {
    FUN_18003eeb0(param_2);
  }
  return;
}



/* ===== 1800422d0 FUN_1800422d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800422d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined8 local_res8;
  undefined1 local_28 [32];
  
  lVar7 = DAT_180ccf5f0;
  if (DAT_180ccf740 != DAT_180ccf748) {
    DAT_180ccf748 = DAT_180ccf740;
  }
  if (DAT_180ccf6e8 != DAT_180ccf6f0) {
    DAT_180ccf6f0 = DAT_180ccf6e8;
  }
  if (((((DAT_18095cf94 == '\0') && (DAT_18095d040 == '\0')) && (DAT_18095d098 == '\0')) &&
      ((DAT_18095d0cc == '\0' && (DAT_18095cfd8 == '\0')))) ||
     ((DAT_180cd0fa7 == '\0' || (DAT_181107a40 == 0)))) {
    lVar11 = DAT_180ccf5e8;
    if (DAT_180ccf5e8 == DAT_180ccf5f0) {
      return;
    }
    do {
      FUN_180043290(lVar11 + 8);
      lVar11 = lVar11 + 0x20;
    } while (lVar11 != lVar7);
    DAT_180ccf5f0 = DAT_180ccf5e8;
    return;
  }
  FUN_18003a4d0();
  if ((DAT_180ccf6d0 == 0) && (DAT_1811089f0 != 0)) {
    DAT_180ccf6d0 = FUN_18038eaf0("CGameSceneNode","m_angAbsRotation");
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = local_res8;
    DAT_1811089f8 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  lVar7 = DAT_1811089f8;
  DAT_180ca12e9 = 0;
  if (((DAT_1811089f8 == 0) || (DAT_180ca09f0 == 0)) ||
     (iVar6 = FUN_180011200(DAT_1811089f8 + (ulonglong)DAT_180ca09f0), 999 < iVar6 - 1U)) {
    cVar5 = FUN_1803a1740(&DAT_181107930 + (longlong)DAT_181107a00 * 0x40,&DAT_180ccf6d8);
    if (cVar5 != '\0') goto LAB_18004249c;
  }
  else {
    if (((DAT_180ca09f8 == 0) ||
        (lVar7 = FUN_18000f3a0(lVar7 + (ulonglong)DAT_180ca09f8), lVar7 == 0)) ||
       (DAT_180ca0950 == 0)) {
      _DAT_180ccf6d8 = 0.0;
      _DAT_180ccf6dc = 0.0;
      _DAT_180ccf6e0 = 0.0;
    }
    else {
      pfVar8 = (float *)FUN_1800111b0(local_28,lVar7 + (ulonglong)DAT_180ca0950);
      _DAT_180ccf6d8 = *pfVar8;
      _DAT_180ccf6dc = pfVar8[1];
      _DAT_180ccf6e0 = pfVar8[2];
    }
    _DAT_180ccf6e0 = _DAT_180ccf6e0 + DAT_1808acab0;
    _DAT_180ccf6d8 = _DAT_180ccf6d8 + 0.0;
    _DAT_180ccf6dc = _DAT_180ccf6dc + 0.0;
LAB_18004249c:
    DAT_180ca12e9 = 1;
  }
  if ((DAT_180961a50 == 0) || (lVar7 = FUN_18000f3a0(), lVar7 == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_18000f3d0(lVar7 + 0x30);
  }
  FUN_18003d320(uVar12);
  FUN_18003e9e0(*(undefined4 *)(DAT_180ca0a50 + 0x40));
  puVar4 = DAT_180ccf748;
  puVar10 = DAT_180ccf740;
  if (DAT_180ccf740 != DAT_180ccf748) {
    do {
      if (*(float *)((longlong)puVar10 + 0x54) <= 0.0) break;
      puVar10 = puVar10 + 0xf;
    } while (puVar10 != DAT_180ccf748);
    if (puVar10 != DAT_180ccf748) {
      puVar9 = puVar10 + 0xf;
      if (puVar9 == DAT_180ccf748) goto LAB_18004256f;
      do {
        if (0.0 < *(float *)((longlong)puVar9 + 0x54)) {
          uVar3 = puVar9[1];
          *puVar10 = *puVar9;
          puVar10[1] = uVar3;
          uVar3 = puVar9[3];
          puVar10[2] = puVar9[2];
          puVar10[3] = uVar3;
          uVar3 = puVar9[5];
          puVar10[4] = puVar9[4];
          puVar10[5] = uVar3;
          uVar3 = puVar9[7];
          puVar10[6] = puVar9[6];
          puVar10[7] = uVar3;
          uVar3 = puVar9[9];
          puVar10[8] = puVar9[8];
          puVar10[9] = uVar3;
          uVar3 = puVar9[0xb];
          puVar10[10] = puVar9[10];
          puVar10[0xb] = uVar3;
          uVar12 = *(undefined4 *)((longlong)puVar9 + 100);
          uVar1 = *(undefined4 *)(puVar9 + 0xd);
          uVar2 = *(undefined4 *)((longlong)puVar9 + 0x6c);
          *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar9 + 0xc);
          *(undefined4 *)((longlong)puVar10 + 100) = uVar12;
          *(undefined4 *)(puVar10 + 0xd) = uVar1;
          *(undefined4 *)((longlong)puVar10 + 0x6c) = uVar2;
          puVar10[0xe] = puVar9[0xe];
          puVar10 = puVar10 + 0xf;
        }
        puVar9 = puVar9 + 0xf;
      } while (puVar9 != puVar4);
    }
  }
  if (puVar10 == puVar4) {
    return;
  }
LAB_18004256f:
  lVar7 = (longlong)DAT_180ccf748 - (longlong)puVar4;
  FUN_180540530(puVar10,puVar4,lVar7);
  DAT_180ccf748 = (undefined8 *)(lVar7 + (longlong)puVar10);
  return;
}



/* ===== 1800425e0 FUN_1800425e0 ===== */

void FUN_1800425e0(void)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  char *_Str1;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  longlong local_res8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined4 local_58 [4];
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  
  if ((((DAT_18095d1b4 != '\0') && (FUN_18003a4d0(), DAT_180ccf6b4 != 0)) && (DAT_180ccf6b8 != 0))
     && (DAT_180ccf624 != 0)) {
    FUN_1803a09f0(&local_48);
    puVar6 = auStack_78;
    plVar5 = local_48;
    if (local_48 != local_40) {
      do {
        _Str1 = (char *)FUN_1803a0710(plVar5);
        if ((_Str1 != (char *)0x0) && (iVar3 = strcmp(_Str1,"C_SmokeGrenadeProjectile"), iVar3 == 0)
           ) {
          iVar3 = FUN_180011200((ulonglong)DAT_180ccf6b8 + *plVar5);
          if (iVar3 - 1U < 0xfffffffe) {
            FUN_1803a0940(&local_res8,iVar3);
            if ((local_res8 != 0) &&
               (bVar2 = FUN_180011220((ulonglong)DAT_180ccf624 + local_res8), (bVar2 & 0xfe) == 2))
            {
              bVar9 = bVar2 == 3;
              if (bVar9) {
                local_58[0] = DAT_18095d1b8;
              }
              else {
                local_58[0] = DAT_18095d1c8;
              }
              uVar7 = (ulonglong)DAT_180ccf6b4;
              puVar4 = &DAT_18095d1cc;
              if (bVar9) {
                puVar4 = &DAT_18095d1bc;
              }
              local_58[1] = *puVar4;
              puVar4 = &DAT_18095d1d0;
              if (bVar9) {
                puVar4 = &DAT_18095d1c0;
              }
              uVar8 = 0;
              local_58[2] = *puVar4;
              do {
                FUN_180013280(uVar7 + (ulonglong)uVar8 * 4 + *plVar5,local_58 + uVar8);
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < 3);
            }
          }
          else {
            local_res8 = 0;
          }
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != local_40);
    }
    if (local_48 != (longlong *)0x0) {
      uVar7 = (local_38 - (longlong)local_48 >> 3) * 8;
      plVar5 = local_48;
      if (0xfff < uVar7) {
        plVar5 = (longlong *)((longlong)local_48 + (-8 - local_48[-1]));
        if (plVar5 < &DAT_00000020) {
          thunk_FUN_1803d64e0(local_48[-1],uVar7 + 0x27);
          return;
        }
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar6 = auStack_70;
      }
      *(undefined8 *)(puVar6 + -8) = 0x180042822;
      thunk_FUN_1803d64e0(plVar5);
    }
  }
  return;
}



/* ===== 180042830 FUN_180042830 ===== */

int * FUN_180042830(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (*param_1 < *param_2) {
    piVar1 = param_2;
  }
  if (*param_3 < *param_1) {
    piVar1 = param_3;
  }
  return piVar1;
}



/* ===== 180042850 FUN_180042850 ===== */

undefined8 * FUN_180042850(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  
  sVar2 = strlen(param_3);
  puVar3 = (undefined8 *)FUN_1800134a0(param_2,param_3,sVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar3[1];
  *param_1 = *puVar3;
  param_1[1] = uVar1;
  uVar1 = puVar3[3];
  param_1[2] = puVar3[2];
  param_1[3] = uVar1;
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  return param_1;
}



/* ===== 1800428c0 FUN_1800428c0 ===== */

undefined4 * FUN_1800428c0(undefined4 *param_1,undefined4 *param_2)

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
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *(longlong *)(param_1 + 2);
  if (lVar2 == 0) goto LAB_180042936;
  if ((*(longlong *)(param_1 + 6) - lVar2 & 0xffffffffffffffe0U) < 0x1000) {
LAB_180042922:
    lVar3 = lVar2;
    puVar5 = puVar4;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar3) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)(5);
      puVar4 = auStack_20;
      goto LAB_180042922;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x18004292a;
  thunk_FUN_1803d64e0(lVar3);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
LAB_180042936:
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  return param_1;
}



/* ===== 180042970 FUN_180042970 ===== */

void FUN_180042970(ulonglong *param_1)

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
  uVar2 = ((longlong)(param_1[2] - uVar4) >> 3) * 8;
  uVar3 = uVar4;
  if (0xfff < uVar2) {
    uVar3 = *(ulonglong *)(uVar4 - 8);
    uVar4 = (uVar4 - uVar3) - 8;
    if (uVar4 < 0x20) {
      uVar2 = uVar2 + 0x27;
      puVar5 = auStack_28;
    }
    else {
      pcVar1 = (code *)swi(0x29);
      uVar2 = (*pcVar1)(5);
      puVar5 = auStack_20;
      uVar3 = uVar4;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x1800429d7;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800429f0 FUN_1800429f0 ===== */

void FUN_1800429f0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_18000f890(puVar1 + 0x11);
    FUN_18000f890(puVar1 + 0xc);
    thunk_FUN_1803d64e0(puVar1,0xb8);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0xb8);
  return;
}



/* ===== 180042a70 FUN_180042a70 ===== */

void FUN_180042a70(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1800432f0(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_18000f890(puVar1 + 0x11);
      FUN_18000f890(puVar1 + 0xc);
      thunk_FUN_1803d64e0(puVar1,0xb8);
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



/* ===== 180042b40 FUN_180042b40 ===== */

undefined8 * FUN_180042b40(undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18002a1a0();
  }
  if (uVar1 - param_2 < param_3) {
    param_3 = uVar1 - param_2;
  }
  if ((ulonglong)param_1[3] < 0x10) {
    puVar2 = param_1;
  }
  else {
    puVar2 = (undefined8 *)*param_1;
  }
  FUN_180540530((longlong)puVar2 + param_2,param_3 + (longlong)puVar2 + param_2,
                ((uVar1 - param_3) - param_2) + 1);
  param_1[2] = uVar1 - param_3;
  return param_1;
}



/* ===== 180042bb0 FUN_180042bb0 ===== */

char * FUN_180042bb0(char *param_1,uint param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_2;
  if (param_2 < 10) {
    param_1[-1] = (char)param_2 + '0';
    return param_1 + -1;
  }
  do {
    pcVar2 = param_1;
    param_1 = pcVar2 + -2;
    uVar1 = uVar4 / 100;
    uVar3 = (uint)uVar1;
    *(undefined2 *)param_1 =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulonglong)((int)uVar4 + uVar3 * -100) * 2);
    uVar4 = uVar1;
  } while (9 < uVar3);
  if (uVar3 != 0) {
    param_1 = pcVar2 + -3;
    *param_1 = (char)uVar1 + '0';
  }
  return param_1;
}



/* ===== 180042c10 FUN_180042c10 ===== */

longlong * FUN_180042c10(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 == param_3) {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  uVar4 = param_3 - param_2;
  if (0x7fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (uVar4 < 0x10) {
    param_1[2] = uVar4;
    param_1[3] = 0xf;
    FUN_180540530(0,param_2,uVar4);
    *(undefined1 *)(uVar4 + (longlong)param_1) = 0;
    return param_1;
  }
  uVar1 = uVar4 | 0xf;
  uVar3 = 0x7fffffffffffffff;
  if ((uVar1 < 0x8000000000000000) && (uVar3 = uVar1, uVar1 < 0x16)) {
    uVar3 = 0x16;
  }
  lVar2 = FUN_18000fb70(uVar3 + 1);
  *param_1 = lVar2;
  param_1[2] = uVar4;
  param_1[3] = uVar3;
  FUN_180540530(lVar2,param_2,uVar4);
  *(undefined1 *)(lVar2 + uVar4) = 0;
  return param_1;
}



/* ===== 180042d00 FUN_180042d00 ===== */

undefined4 * FUN_180042d00(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 != (undefined8 *)param_1[2]) {
    uVar6 = param_2[1];
    *puVar11 = *param_2;
    puVar11[1] = uVar6;
    uVar6 = param_2[3];
    puVar11[2] = param_2[2];
    puVar11[3] = uVar6;
    puVar7 = (undefined4 *)param_1[1];
    param_1[1] = (longlong)(puVar7 + 8);
    return puVar7;
  }
  uVar16 = 0x7ffffffffffffff;
  uVar17 = (longlong)puVar11 - *param_1;
  lVar14 = (longlong)uVar17 >> 5;
  if (lVar14 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar15 = lVar14 + 1;
  uVar8 = param_1[2] - *param_1 >> 5;
  if (uVar8 <= 0x7ffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar16 = uVar15;
    if (uVar15 <= uVar8) {
      uVar16 = uVar8;
    }
    if (0x7ffffffffffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined4 *)FUN_18000fb70(uVar16 * 0x20);
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  uVar4 = *(undefined4 *)(param_2 + 1);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar18 = (undefined4 *)((uVar17 & 0xffffffffffffffe0) + (longlong)puVar7);
  *puVar18 = *(undefined4 *)param_2;
  puVar18[1] = uVar3;
  puVar18[2] = uVar4;
  puVar18[3] = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar18[4] = *(undefined4 *)(param_2 + 2);
  puVar18[5] = uVar3;
  puVar18[6] = uVar4;
  puVar18[7] = uVar5;
  puVar1 = (undefined8 *)*param_1;
  if (puVar11 == (undefined8 *)param_1[1]) {
    lVar14 = param_1[1] - (longlong)puVar1;
    puVar9 = puVar7;
    puVar11 = puVar1;
  }
  else {
    FUN_180540530(puVar7,puVar1,(longlong)puVar11 - (longlong)puVar1);
    puVar9 = puVar18 + 8;
    lVar14 = param_1[1] - (longlong)puVar11;
  }
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  FUN_180540530(puVar9,puVar11,lVar14);
  lVar14 = *param_1;
  if (lVar14 == 0) goto LAB_180042e49;
  if ((param_1[2] - lVar14 & 0xffffffffffffffe0U) < 0x1000) {
LAB_180042e41:
    lVar10 = lVar14;
    puVar13 = puVar12;
  }
  else {
    lVar10 = *(longlong *)(lVar14 + -8);
    if (0x1f < (lVar14 - lVar10) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar14 = (*pcVar2)(5);
      puVar12 = auStack_30;
      goto LAB_180042e41;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x180042e49;
  thunk_FUN_1803d64e0(lVar10);
LAB_180042e49:
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)(puVar7 + uVar15 * 8);
  param_1[2] = (longlong)(puVar7 + uVar16 * 8);
  return puVar18;
}



/* ===== 180042e90 FUN_180042e90 ===== */

undefined8 * FUN_180042e90(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(DAT_180ccf730 & uVar7);
  puVar3 = *(undefined8 **)(DAT_180ccf718 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_180ccf708;
  if (puVar3 != DAT_180ccf708) {
    puVar6 = *(undefined8 **)(DAT_180ccf718 + (longlong)puVar6 * 0x10);
    lVar4 = puVar3[2];
    puVar8 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar4 = puVar8[2];
    }
  }
  if (DAT_180ccf710 == 0x1642c8590b21642) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0xb8,puVar6,DAT_180ccf718,param_4,&DAT_180ccf708,0);
  puVar3[2] = *(undefined8 *)param_3;
  *(undefined2 *)((longlong)puVar3 + 0x2d) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x2f) = 0;
  *(undefined2 *)((longlong)puVar3 + 0x45) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x47) = 0;
  *(undefined2 *)((longlong)puVar3 + 0x5d) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x5f) = 0;
  puVar3[0x10] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x2c) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x44) = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x5c) = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0xf;
  *(undefined1 *)(puVar3 + 0xc) = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0xf;
  *(undefined1 *)(puVar3 + 0x11) = 0;
  puVar3[0x15] = 0xbff0000000000000;
  puVar3[0x16] = 0;
  uVar2 = DAT_180ccf738;
  if (DAT_180ccf700 < (float)(DAT_180ccf710 + 1) / (float)DAT_180ccf738) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180ccf710 + 1) / DAT_180ccf700);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar9 = uVar2;
    if ((uVar2 < uVar5) && ((0x1ff < uVar2 || (uVar9 = uVar2 * 8, uVar2 * 8 < uVar5)))) {
      uVar9 = uVar5;
    }
    FUN_180043e70(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_180ccf718 + 8 + (DAT_180ccf730 & uVar7) * 0x10);
    puVar8 = DAT_180ccf708;
    if (puVar6 != DAT_180ccf708) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_180ccf718 + (DAT_180ccf730 & uVar7) * 0x10))
        goto LAB_180043189;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_180043189:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_180ccf710 = DAT_180ccf710 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_180ccf718;
  uVar7 = DAT_180ccf730 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180ccf718 + uVar7 * 0x10);
  if (puVar1 == DAT_180ccf708) {
    *(undefined8 **)(DAT_180ccf718 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_180ccf718 + uVar7 * 0x10) = puVar3;
      goto LAB_1800431e8;
    }
    if (*(undefined8 **)(DAT_180ccf718 + 8 + uVar7 * 0x10) != puVar6) goto LAB_1800431e8;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_1800431e8:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180043210 FUN_180043210 ===== */

ulonglong FUN_180043210(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                       ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_5 == 0) {
    if (param_2 < param_3) {
      param_3 = param_2;
    }
    return param_3;
  }
  if (param_2 < param_5) {
    return 0xffffffffffffffff;
  }
  if (param_2 - param_5 < param_3) {
    param_3 = param_2 - param_5;
  }
  lVar3 = param_1 + param_3 + param_5;
  lVar1 = thunk_FUN_1804e6890(param_1,lVar3,param_4);
  uVar2 = 0xffffffffffffffff;
  if (lVar1 != lVar3) {
    uVar2 = lVar1 - param_1;
  }
  return uVar2;
}



/* ===== 180043290 FUN_180043290 ===== */

void FUN_180043290(longlong *param_1)

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
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  if (0xfff < (param_1[2] - lVar2 & 0xffffffffffffffe0U)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_1800432d6;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar3 = lVar2;
  puVar5 = puVar4;
LAB_1800432d6:
  *(undefined8 *)(puVar5 + -8) = 0x1800432db;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800432f0 FUN_1800432f0 ===== */

longlong * FUN_1800432f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = (undefined8 *)param_2[1];
  puVar3 = *(undefined8 **)(param_1 + 8);
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x17)) * 0x100000001b3) * 0x10;
  plVar7 = (longlong *)(lVar1 + 8 + lVar5);
  plVar6 = (longlong *)(lVar5 + lVar1);
  plVar4 = *(longlong **)(lVar5 + lVar1);
  plVar9 = (longlong *)*plVar7;
  plVar8 = param_2;
  do {
    plVar10 = (longlong *)*plVar8;
    FUN_18000f890(plVar8 + 0x11);
    FUN_18000f890(plVar8 + 0xc);
    thunk_FUN_1803d64e0(plVar8,0xb8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar8 == plVar9) {
      if (plVar4 == param_2) {
        *plVar6 = (longlong)puVar3;
        puVar11 = puVar3;
      }
      else {
        puVar11 = puVar2;
      }
      *plVar7 = (longlong)puVar11;
      while (plVar10 != param_3) {
        uVar12 = *(ulonglong *)(param_1 + 0x30) &
                 (((((((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar10 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar10 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar10 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar10 + 0x17)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar1 + 8 + uVar12 * 0x10);
        plVar6 = (longlong *)(lVar1 + uVar12 * 0x10);
        plVar9 = plVar10;
        while( true ) {
          plVar10 = (longlong *)*plVar9;
          FUN_18000f890(plVar9 + 0x11);
          FUN_18000f890(plVar9 + 0xc);
          thunk_FUN_1803d64e0(plVar9,0xb8);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar9 == plVar4) break;
          plVar9 = plVar10;
          if (plVar10 == param_3) goto LAB_180043554;
        }
        *plVar6 = (longlong)puVar3;
        *(undefined8 **)(lVar1 + 8 + uVar12 * 0x10) = puVar3;
      }
      goto LAB_180043557;
    }
    plVar8 = plVar10;
  } while (plVar10 != param_3);
  if (plVar4 == param_2) {
LAB_180043554:
    *plVar6 = (longlong)plVar10;
  }
LAB_180043557:
  *puVar2 = plVar10;
  plVar10[1] = (longlong)puVar2;
  return param_3;
}



/* ===== 1800435c0 FUN_1800435c0 ===== */

longlong FUN_1800435c0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar3 = *param_1;
  uVar15 = 0xaaaaaaaaaaaaaaa;
  lVar8 = (param_1[1] - lVar3 >> 3) * -0x5555555555555555;
  if (lVar8 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar8 + 1;
  uVar10 = (param_1[2] - lVar3 >> 3) * -0x5555555555555555;
  if (uVar10 <= 0xaaaaaaaaaaaaaaa - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar15 = uVar1;
    if (uVar1 <= uVar10) {
      uVar15 = uVar10;
    }
    if (0xaaaaaaaaaaaaaaa < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar9 = FUN_18000fb70(uVar15 * 0x18);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  lVar3 = (param_2 - lVar3) / 0x18;
  puVar2 = (undefined4 *)(lVar9 + lVar3 * 0x18);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  lVar3 = lVar9 + lVar3 * 0x18;
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_3 + 4);
  lVar8 = *param_1;
  if (param_2 == param_1[1]) {
    lVar14 = param_1[1] - lVar8;
    lVar11 = lVar9;
    param_2 = lVar8;
  }
  else {
    FUN_180540530(lVar9,lVar8,param_2 - lVar8);
    lVar11 = lVar3 + 0x18;
    lVar14 = param_1[1] - param_2;
  }
  puVar12 = auStack_48;
  puVar13 = auStack_48;
  FUN_180540530(lVar11,param_2,lVar14);
  lVar8 = *param_1;
  if (lVar8 == 0) goto LAB_18004372f;
  lVar11 = lVar8;
  if ((ulonglong)((param_1[2] - lVar8 >> 3) * 8) < 0x1000) {
LAB_180043724:
    puVar13 = puVar12;
  }
  else {
    lVar11 = *(longlong *)(lVar8 + -8);
    if (0x1f < (lVar8 - lVar11) - 8U) {
      lVar11 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar12 = auStack_40;
      goto LAB_180043724;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x18004372f;
  thunk_FUN_1803d64e0(lVar11);
LAB_18004372f:
  *param_1 = lVar9;
  param_1[1] = lVar9 + uVar1 * 0x18;
  param_1[2] = uVar15 * 0x18 + lVar9;
  return lVar3;
}



/* ===== 180043780 FUN_180043780 ===== */

undefined4 * FUN_180043780(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar11 = DAT_180ccf5e8;
  if ((longlong)DAT_180ccf5f0 - (longlong)DAT_180ccf5e8 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar10 = (longlong)DAT_180ccf5f8 - (longlong)DAT_180ccf5e8 >> 5;
  uVar1 = ((longlong)DAT_180ccf5f0 - (longlong)DAT_180ccf5e8 >> 5) + 1;
  uVar15 = 0x7ffffffffffffff;
  if (uVar10 <= 0x7ffffffffffffff - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar15 = uVar1;
    if (uVar1 <= uVar10) {
      uVar15 = uVar10;
    }
    if (0x7ffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined4 *)FUN_18000fb70(uVar15 * 0x20);
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  puVar14 = (undefined4 *)
            (((longlong)param_2 - (longlong)puVar11 & 0xffffffffffffffe0U) + (longlong)puVar8);
  *puVar14 = *param_3;
  *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(param_3 + 1);
  uVar2 = *(undefined8 *)(param_3 + 6);
  uVar3 = *(undefined8 *)(param_3 + 4);
  uVar4 = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(puVar14 + 2) = uVar4;
  *(undefined8 *)(puVar14 + 4) = uVar3;
  *(undefined8 *)(puVar14 + 6) = uVar2;
  puVar7 = DAT_180ccf5f0;
  puVar11 = puVar8;
  puVar9 = DAT_180ccf5e8;
  if (param_2 == DAT_180ccf5f0) {
    for (; puVar9 != puVar7; puVar9 = puVar9 + 8) {
      *puVar11 = *puVar9;
      *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar9 + 1);
      uVar2 = *(undefined8 *)(puVar9 + 6);
      uVar3 = *(undefined8 *)(puVar9 + 4);
      uVar4 = *(undefined8 *)(puVar9 + 2);
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar11 + 2) = uVar4;
      *(undefined8 *)(puVar11 + 4) = uVar3;
      *(undefined8 *)(puVar11 + 6) = uVar2;
      puVar11 = puVar11 + 8;
    }
  }
  else {
    while( true ) {
      puVar6 = puVar14;
      DAT_180ccf5f0 = puVar7;
      if (puVar9 == param_2) break;
      *puVar11 = *puVar9;
      *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar9 + 1);
      uVar2 = *(undefined8 *)(puVar9 + 6);
      uVar3 = *(undefined8 *)(puVar9 + 4);
      uVar4 = *(undefined8 *)(puVar9 + 2);
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar11 + 2) = uVar4;
      *(undefined8 *)(puVar11 + 4) = uVar3;
      *(undefined8 *)(puVar11 + 6) = uVar2;
      puVar11 = puVar11 + 8;
      puVar9 = puVar9 + 8;
      puVar7 = DAT_180ccf5f0;
    }
    for (; param_2 != puVar7; param_2 = param_2 + 8) {
      puVar6[8] = *param_2;
      *(undefined1 *)(puVar6 + 9) = *(undefined1 *)(param_2 + 1);
      uVar2 = *(undefined8 *)(param_2 + 6);
      uVar3 = *(undefined8 *)(param_2 + 4);
      uVar4 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(puVar6 + 10) = uVar4;
      *(undefined8 *)(puVar6 + 0xc) = uVar3;
      *(undefined8 *)(puVar6 + 0xe) = uVar2;
      puVar6 = puVar6 + 8;
    }
  }
  puVar7 = DAT_180ccf5f0;
  puVar11 = DAT_180ccf5e8;
  puVar9 = DAT_180ccf5e8;
  if (DAT_180ccf5e8 == (undefined4 *)0x0) goto LAB_1800439cd;
  for (; DAT_180ccf5e8 = puVar9, puVar11 != puVar7; puVar11 = puVar11 + 8) {
    FUN_180043290(puVar11 + 2);
    puVar9 = DAT_180ccf5e8;
  }
  if (((longlong)DAT_180ccf5f8 - (longlong)puVar9 & 0xffffffffffffffe0U) < 0x1000) {
LAB_1800439c5:
    puVar11 = puVar9;
    puVar13 = puVar12;
  }
  else {
    puVar11 = *(undefined4 **)(puVar9 + -2);
    if (0x1f < (ulonglong)((longlong)puVar9 + (-8 - (longlong)puVar11))) {
      pcVar5 = (code *)swi(0x29);
      puVar9 = (undefined4 *)(*pcVar5)(5);
      puVar12 = auStack_30;
      goto LAB_1800439c5;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x1800439cd;
  thunk_FUN_1803d64e0(puVar11);
LAB_1800439cd:
  DAT_180ccf5f0 = puVar8 + uVar1 * 8;
  DAT_180ccf5e8 = puVar8;
  DAT_180ccf5f8 = puVar8 + uVar15 * 8;
  return puVar14;
}



/* ===== 180043a20 FUN_180043a20 ===== */

undefined8 * FUN_180043a20(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar11 = (longlong)DAT_180ccf740;
  uVar15 = 0x222222222222222;
  lVar7 = ((longlong)DAT_180ccf748 - (longlong)DAT_180ccf740 >> 3) * -0x1111111111111111;
  if (lVar7 == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar7 + 1;
  uVar9 = ((longlong)DAT_180ccf750 - (longlong)DAT_180ccf740 >> 3) * -0x1111111111111111;
  if (uVar9 <= 0x222222222222222 - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar15 = uVar1;
    if (uVar1 <= uVar9) {
      uVar15 = uVar9;
    }
    if (0x222222222222222 < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined8 *)FUN_18000fb70(uVar15 * 0x78);
  uVar6 = param_3[1];
  lVar11 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_2 - lVar11),8) + (param_2 - lVar11);
  puVar14 = puVar8 + ((lVar11 >> 6) - (lVar11 >> 0x3f)) * 0xf;
  *puVar14 = *param_3;
  puVar14[1] = uVar6;
  uVar6 = param_3[3];
  puVar14[2] = param_3[2];
  puVar14[3] = uVar6;
  uVar6 = param_3[5];
  puVar14[4] = param_3[4];
  puVar14[5] = uVar6;
  uVar6 = param_3[7];
  puVar14[6] = param_3[6];
  puVar14[7] = uVar6;
  uVar6 = param_3[9];
  puVar14[8] = param_3[8];
  puVar14[9] = uVar6;
  uVar6 = param_3[0xb];
  puVar14[10] = param_3[10];
  puVar14[0xb] = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_3 + 100);
  uVar4 = *(undefined4 *)(param_3 + 0xd);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x6c);
  *(undefined4 *)(puVar14 + 0xc) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)((longlong)puVar14 + 100) = uVar3;
  *(undefined4 *)(puVar14 + 0xd) = uVar4;
  *(undefined4 *)((longlong)puVar14 + 0x6c) = uVar5;
  puVar14[0xe] = param_3[0xe];
  if ((undefined8 *)param_2 == DAT_180ccf748) {
    lVar11 = (longlong)DAT_180ccf748 - (longlong)DAT_180ccf740;
    puVar10 = puVar8;
    param_2 = (longlong)DAT_180ccf740;
  }
  else {
    FUN_180540530(puVar8,DAT_180ccf740,param_2 - (longlong)DAT_180ccf740);
    puVar10 = puVar14 + 0xf;
    lVar11 = (longlong)DAT_180ccf748 - param_2;
  }
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  FUN_180540530(puVar10,param_2,lVar11);
  if (DAT_180ccf740 == (undefined8 *)0x0) goto LAB_180043bcd;
  lVar11 = (longlong)DAT_180ccf740;
  if ((ulonglong)(((longlong)DAT_180ccf750 - (longlong)DAT_180ccf740 >> 3) * 8) < 0x1000) {
LAB_180043bc2:
    puVar13 = puVar12;
  }
  else {
    lVar11 = *(longlong *)((longlong)DAT_180ccf740 + -8);
    if (0x1f < ((longlong)DAT_180ccf740 - lVar11) - 8U) {
      lVar11 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar12 = auStack_30;
      goto LAB_180043bc2;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x180043bcd;
  thunk_FUN_1803d64e0(lVar11);
LAB_180043bcd:
  DAT_180ccf748 = puVar8 + uVar1 * 0xf;
  DAT_180ccf740 = puVar8;
  DAT_180ccf750 = puVar8 + uVar15 * 0xf;
  return puVar14;
}



/* ===== 180043c20 FUN_180043c20 ===== */

longlong FUN_180043c20(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar3 = DAT_180ccf6e8;
  uVar14 = 0xaaaaaaaaaaaaaaa;
  lVar8 = (DAT_180ccf6f0 - DAT_180ccf6e8 >> 3) * -0x5555555555555555;
  if (lVar8 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar8 + 1;
  uVar9 = (DAT_180ccf6f8 - DAT_180ccf6e8 >> 3) * -0x5555555555555555;
  if (uVar9 <= 0xaaaaaaaaaaaaaaa - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar14 = uVar1;
    if (uVar1 <= uVar9) {
      uVar14 = uVar9;
    }
    if (0xaaaaaaaaaaaaaaa < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar8 = FUN_18000fb70(uVar14 * 0x18);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  lVar3 = (param_2 - lVar3) / 0x18;
  puVar2 = (undefined4 *)(lVar8 + lVar3 * 0x18);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  lVar3 = lVar8 + lVar3 * 0x18;
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_3 + 4);
  if (param_2 == DAT_180ccf6f0) {
    lVar13 = DAT_180ccf6f0 - DAT_180ccf6e8;
    lVar10 = lVar8;
    param_2 = DAT_180ccf6e8;
  }
  else {
    FUN_180540530(lVar8,DAT_180ccf6e8,param_2 - DAT_180ccf6e8);
    lVar10 = lVar3 + 0x18;
    lVar13 = DAT_180ccf6f0 - param_2;
  }
  puVar11 = auStack_38;
  puVar12 = auStack_38;
  FUN_180540530(lVar10,param_2,lVar13);
  if (DAT_180ccf6e8 == 0) goto LAB_180043da5;
  lVar10 = DAT_180ccf6e8;
  if ((ulonglong)((DAT_180ccf6f8 - DAT_180ccf6e8 >> 3) * 8) < 0x1000) {
LAB_180043d9a:
    puVar12 = puVar11;
  }
  else {
    lVar10 = *(longlong *)(DAT_180ccf6e8 + -8);
    if (0x1f < (DAT_180ccf6e8 - lVar10) - 8U) {
      lVar10 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar11 = auStack_30;
      goto LAB_180043d9a;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x180043da5;
  thunk_FUN_1803d64e0(lVar10);
LAB_180043da5:
  DAT_180ccf6e8 = lVar8;
  DAT_180ccf6f0 = lVar8 + uVar1 * 0x18;
  DAT_180ccf6f8 = uVar14 * 0x18 + lVar8;
  return lVar3;
}



/* ===== 180043e00 FUN_180043e00 ===== */

void FUN_180043e00(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_18000f890(lVar1 + 0x88);
    FUN_18000f890(lVar1 + 0x60);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0xb8);
  }
  return;
}



/* ===== 180043e70 FUN_180043e70 ===== */

void FUN_180043e70(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180ccf708;
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
  FUN_180029d30(&DAT_180ccf718,2L << (bVar10 & 0x3f),DAT_180ccf708);
  DAT_180ccf730 = lVar11 - 1;
  DAT_180ccf738 = lVar11;
  plVar7 = (longlong *)*DAT_180ccf708;
  lVar11 = DAT_180ccf718;
joined_r0x000180043eec:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180ccf718 = lVar11;
          return;
        }
        plVar1 = (longlong *)*plVar7;
        uVar9 = (((((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar7 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_180ccf730;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180ccf718 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180ccf718;
      }
      plVar3 = *(longlong **)(lVar11 + 8 + uVar9 * 0x10);
      if (plVar7[2] != plVar3[2]) break;
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
      lVar11 = DAT_180ccf718;
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
        lVar11 = DAT_180ccf718;
        goto joined_r0x000180043eec;
      }
      plVar3 = (longlong *)plVar3[1];
    } while (plVar7[2] != plVar3[2]);
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
    lVar11 = DAT_180ccf718;
  } while( true );
}



/* ===== 180044070 FUN_180044070 ===== */

void FUN_180044070(longlong *param_1,int param_2)

{
  (**(code **)(*param_1 + (longlong)param_2 * 8))();
  return;
}



/* ===== 180044090 FUN_180044090 ===== */

undefined4 FUN_180044090(undefined4 param_1)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  (*DAT_180ccf7e0)(param_1,local_res10);
  return local_res10[0];
}



/* ===== 1800440c0 FUN_1800440c0 ===== */

void FUN_1800440c0(code *param_1,undefined8 param_2)

{
  (*param_1)(param_2);
  return;
}



/* ===== 1800440e0 FUN_1800440e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1800440e0(void)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_48 = 0x100000000;
  (*DAT_180ccf7f8)(0,&local_58);
  return local_58._4_1_ != '\0';
}



/* ===== 180044140 FUN_180044140 ===== */

void FUN_180044140(longlong *param_1)

{
  (**(code **)(*param_1 + 0xaf8))();
  return;
}



/* ===== 180044160 FUN_180044160 ===== */

undefined1 FUN_180044160(void)

{
  (*DAT_180961cc8)();
  return 1;
}



/* ===== 180044180 FUN_180044180 ===== */

undefined8 FUN_180044180(void)

{
  (*DAT_180961f48)();
  return 1;
}



/* ===== 1800441b0 FUN_1800441b0 ===== */

void FUN_1800441b0(void)

{
  if (DAT_180962d68 == 0) {
    if (DAT_180962d70 == '\0') {
      DAT_180962d68 = FUN_180264b70(PTR_s_mp_forcecamera_180962d60);
      DAT_180962d70 = DAT_180962d68 == 0;
      if (DAT_180962d68 != 0) goto LAB_180044209;
      FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_mp_forcecamera_180962d60);
    }
    if (DAT_180962d68 == 0) {
      return;
    }
  }
LAB_180044209:
  FUN_180264d70(DAT_180962d68);
  return;
}



/* ===== 180044220 FUN_180044220 ===== */

undefined8 FUN_180044220(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  *(int *)(param_1 + 0x58) = param_2;
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (piVar3 = *(int **)(param_1 + 0x18), piVar3 != (int *)0x0)) {
    piVar2 = (int *)(param_1 + 0x58);
    if (param_2 < *piVar1) {
      piVar2 = piVar1;
    }
    if (param_2 <= *piVar3) {
      piVar3 = piVar2;
    }
    *(int *)(param_1 + 0x58) = *piVar3;
  }
  return 1;
}



/* ===== 180044260 FUN_180044260 ===== */

undefined8 FUN_180044260(longlong *param_1)

{
  (**(code **)(*param_1 + 0x160))();
  return 1;
}



/* ===== 180044280 FUN_180044280 ===== */

undefined8 FUN_180044280(longlong *param_1)

{
  (**(code **)(*param_1 + 0x178))();
  return 1;
}



/* ===== 1800442a0 FUN_1800442a0 ===== */

undefined8 FUN_1800442a0(void)

{
  if (DAT_180961bb0 == (code *)0x0) {
    return 0;
  }
  (*DAT_180961bb0)();
  return 1;
}



/* ===== 1800442d0 FUN_1800442d0 ===== */

void FUN_1800442d0(undefined4 param_1)

{
  if (DAT_180962d68 == 0) {
    if (DAT_180962d70 == '\0') {
      DAT_180962d68 = FUN_180264b70(PTR_s_mp_forcecamera_180962d60);
      DAT_180962d70 = DAT_180962d68 == 0;
      if (DAT_180962d68 != 0) goto LAB_18004432d;
      FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_mp_forcecamera_180962d60);
    }
    if (DAT_180962d68 == 0) {
      return;
    }
  }
LAB_18004432d:
  FUN_180044220(DAT_180962d68,param_1);
  return;
}



/* ===== 180044350 FUN_180044350 ===== */

ulonglong FUN_180044350(void)

{
  bool bVar1;
  int iVar2;
  ulonglong in_RAX;
  char *pcVar3;
  char **ppcVar4;
  char **ppcVar5;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  char *local_1c8;
  char *local_1c0;
  char *local_1b8;
  char *local_1b0;
  char *local_1a8;
  char *local_1a0;
  char *local_198;
  char *local_190;
  char *local_188;
  char *local_180;
  char *local_178;
  char *local_170;
  char *local_168;
  char *local_160;
  char *local_158;
  char *local_150;
  char *local_148;
  char *local_140;
  char *local_138;
  char *local_130;
  char *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  
  ppcVar5 = &local_148;
  if (DAT_180ccf8a0 == '\0') {
    if (DAT_1811089f0 == 0) {
      return in_RAX & 0xffffffffffffff00;
    }
    ppcVar4 = &local_1f8;
    local_1f8 = "CCSPlayerBase_CameraServices";
    DAT_180ccf8a0 = '\x01';
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_iFOV");
      if (iVar2 != 0) goto LAB_1800443e3;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_1f0);
    iVar2 = 0;
LAB_1800443e3:
    ppcVar4 = &local_1f0;
    local_1f0 = "CCSPlayerBase_CameraServices";
    DAT_180ccf8a4 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_iFOVStart");
      if (iVar2 != 0) goto LAB_180044423;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_1e8);
    iVar2 = 0;
LAB_180044423:
    ppcVar4 = &local_1e8;
    local_1e8 = "CCSPlayerBase_CameraServices";
    DAT_180ccf8a8 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_flFOVTime");
      if (iVar2 != 0) goto LAB_180044463;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_1e0);
    iVar2 = 0;
LAB_180044463:
    ppcVar4 = &local_1e0;
    local_1e0 = "CCSPlayerBase_CameraServices";
    DAT_180ccf8ac = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_flFOVRate");
      if (iVar2 != 0) goto LAB_1800444a3;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_1d8);
    iVar2 = 0;
LAB_1800444a3:
    ppcVar4 = &local_1d8;
    local_1d8 = "CCSPlayerBase_CameraServices";
    DAT_180ccf8b0 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_flLastShotFOV");
      if (iVar2 != 0) goto LAB_1800444e3;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_1d0);
    iVar2 = 0;
LAB_1800444e3:
    ppcVar4 = &local_60;
    local_58 = "CCSPlayerBase_CameraServices";
    local_60 = "CPlayer_CameraServices";
    DAT_180ccf8b4 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_nCsViewPunchAngleTick");
      if (iVar2 != 0) goto LAB_180044535;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_50);
    iVar2 = 0;
LAB_180044535:
    local_1d0 = "C_BasePlayerPawn";
    ppcVar4 = &local_1d0;
    DAT_180ccf8b8 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_pCameraServices");
      if (iVar2 != 0) goto LAB_180044572;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_1c8);
    iVar2 = 0;
LAB_180044572:
    ppcVar4 = &local_1c8;
    local_1c8 = "C_BasePlayerPawn";
    DAT_180ccf8bc = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"v_angle");
      if (iVar2 != 0) goto LAB_1800445a2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_1c0);
    iVar2 = 0;
LAB_1800445a2:
    local_48 = "C_CSPlayerPawn";
    ppcVar4 = &local_50;
    local_50 = "C_BasePlayerPawn";
    DAT_180ccf8c0 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_flFOVSensitivityAdjust");
      if (iVar2 != 0) goto LAB_1800445f5;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_40);
    iVar2 = 0;
LAB_1800445f5:
    ppcVar4 = &local_40;
    local_40 = "C_BasePlayerPawn";
    local_38 = "C_CSPlayerPawn";
    DAT_180ccf8c4 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_flMouseSensitivity");
      if (iVar2 != 0) goto LAB_180044635;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_30);
    iVar2 = 0;
LAB_180044635:
    ppcVar4 = &local_1c0;
    local_1c0 = "C_BasePlayerPawn";
    DAT_180ccf8c8 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_pObserverServices");
      if (iVar2 != 0) goto LAB_180044672;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_1b8);
    iVar2 = 0;
LAB_180044672:
    ppcVar4 = &local_1b8;
    local_1b8 = "C_BasePlayerPawn";
    DAT_180ccf8cc = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_pWeaponServices");
      if (iVar2 != 0) goto LAB_1800446a2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_1b0);
    iVar2 = 0;
LAB_1800446a2:
    local_1b0 = "C_BaseEntity";
    ppcVar4 = &local_1b0;
    DAT_180ccf8d0 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_lifeState");
      if (iVar2 != 0) goto LAB_1800446e2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_1a8);
    iVar2 = 0;
LAB_1800446e2:
    ppcVar4 = &local_1a8;
    local_1a8 = "C_BaseEntity";
    DAT_180ccf8d4 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_nSubclassID");
      if (iVar2 != 0) goto LAB_180044712;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_1a0);
    iVar2 = 0;
LAB_180044712:
    ppcVar4 = &local_1a0;
    local_1a0 = "C_BaseEntity";
    DAT_180ccf8d8 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_nActualMoveType");
      if (iVar2 != 0) goto LAB_180044742;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_198);
    iVar2 = 0;
LAB_180044742:
    ppcVar4 = &local_198;
    local_198 = "C_BaseEntity";
    DAT_180ccf8dc = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_fFlags");
      if (iVar2 != 0) goto LAB_180044772;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_190);
    iVar2 = 0;
LAB_180044772:
    ppcVar4 = &local_190;
    local_190 = "C_BaseEntity";
    DAT_180ccf8e0 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_iTeamNum");
      if (iVar2 != 0) goto LAB_1800447a2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_188);
    iVar2 = 0;
LAB_1800447a2:
    ppcVar4 = &local_188;
    local_188 = "C_BaseModelEntity";
    DAT_180ccf8e4 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_vecViewOffset");
      if (iVar2 != 0) goto LAB_1800447e2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_180);
    iVar2 = 0;
LAB_1800447e2:
    ppcVar4 = &local_180;
    local_180 = "C_CSPlayerPawn";
    DAT_180ccf8e8 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_pAimPunchServices");
      if (iVar2 != 0) goto LAB_180044812;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_178);
    iVar2 = 0;
LAB_180044812:
    ppcVar4 = &local_178;
    local_178 = "C_CSPlayerPawn";
    DAT_180ccf8ec = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_bInLanding");
      if (iVar2 != 0) goto LAB_180044842;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_170);
    iVar2 = 0;
LAB_180044842:
    ppcVar4 = &local_170;
    local_170 = "C_CSPlayerPawn";
    DAT_180ccf8f0 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_flOldFallVelocity");
      if (iVar2 != 0) goto LAB_180044872;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_168);
    iVar2 = 0;
LAB_180044872:
    ppcVar4 = &local_168;
    local_168 = "C_BasePlayerPawn";
    DAT_180ccf8f4 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_pMovementServices");
      if (iVar2 != 0) goto LAB_1800448a2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_160);
    iVar2 = 0;
LAB_1800448a2:
    ppcVar4 = &local_160;
    local_160 = "CPlayer_MovementServices_Humanoid";
    DAT_180ccf900 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_flFallVelocity");
      if (iVar2 != 0) goto LAB_1800448e2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_158);
    iVar2 = 0;
LAB_1800448e2:
    ppcVar4 = &local_158;
    local_158 = "C_CSPlayerPawn";
    DAT_180ccf904 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_qDeathEyeAngles");
      if (iVar2 != 0) goto LAB_180044912;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_150);
    iVar2 = 0;
LAB_180044912:
    ppcVar4 = &local_150;
    local_150 = "C_CSPlayerPawn";
    DAT_180ccf8f8 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar4,"m_hHudModelArms");
      if (iVar2 != 0) goto LAB_180044942;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != ppcVar5);
    iVar2 = 0;
LAB_180044942:
    local_148 = "C_CSPlayerPawn";
    DAT_180ccf8fc = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_flViewmodelFOV");
      if (iVar2 != 0) goto LAB_180044972;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_140);
    iVar2 = 0;
LAB_180044972:
    ppcVar5 = &local_140;
    local_140 = "C_CSPlayerPawn";
    DAT_180ccf908 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_bLeftHanded");
      if (iVar2 != 0) goto LAB_1800449a2;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_138);
    iVar2 = 0;
LAB_1800449a2:
    local_28 = "CCSPlayerController";
    local_30 = "CBasePlayerController";
    ppcVar5 = &local_30;
    DAT_180ccf90c = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_hPawn");
      if (iVar2 != 0) goto LAB_1800449f5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_20);
    iVar2 = 0;
LAB_1800449f5:
    local_138 = "CCSPlayer_AimPunchServices";
    ppcVar5 = &local_138;
    DAT_180ccf910 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_predictableBaseTick");
      if (iVar2 != 0) goto LAB_180044a32;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_130);
    iVar2 = 0;
LAB_180044a32:
    ppcVar5 = &local_130;
    local_130 = "CCSPlayer_AimPunchServices";
    DAT_180ccf914 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_unpredictableBaseTick");
      if (iVar2 != 0) goto LAB_180044a62;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_128);
    iVar2 = 0;
LAB_180044a62:
    local_128 = "CPlayer_ObserverServices";
    ppcVar5 = &local_128;
    DAT_180ccf918 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_iObserverMode");
      if (iVar2 != 0) goto LAB_180044aa2;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_120);
    iVar2 = 0;
LAB_180044aa2:
    ppcVar5 = &local_120;
    local_120 = "CPlayer_ObserverServices";
    DAT_180ccf91c = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_hObserverTarget");
      if (iVar2 != 0) goto LAB_180044ad2;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_118);
    iVar2 = 0;
LAB_180044ad2:
    ppcVar5 = &local_118;
    local_118 = "CCSPlayerController";
    DAT_180ccf920 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_hObserverPawn");
      if (iVar2 != 0) goto LAB_180044b02;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_110);
    iVar2 = 0;
LAB_180044b02:
    ppcVar5 = &local_110;
    local_110 = "CPlayer_WeaponServices";
    DAT_180ccf928 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_hActiveWeapon");
      if (iVar2 != 0) goto LAB_180044b42;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_108);
    iVar2 = 0;
LAB_180044b42:
    local_108 = "C_CSWeaponBase";
    ppcVar5 = &local_108;
    DAT_180ccf924 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_IronSightController");
      if (iVar2 != 0) goto LAB_180044b82;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_100);
    iVar2 = 0;
LAB_180044b82:
    local_100 = "C_IronSightController";
    ppcVar5 = &local_100;
    DAT_180ccf92c = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_bIronSightAvailable");
      if (iVar2 != 0) goto LAB_180044bc2;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_f8);
    iVar2 = 0;
LAB_180044bc2:
    ppcVar5 = &local_f8;
    local_f8 = "C_IronSightController";
    DAT_180ccf930 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_flIronSightAmount_Interpolated");
      if (iVar2 != 0) goto LAB_180044bf2;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_f0);
    iVar2 = 0;
LAB_180044bf2:
    ppcVar5 = &local_20;
    local_18 = "C_CSWeaponBase";
    local_20 = "C_CSWeaponBaseGun";
    DAT_180ccf934 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_zoomLevel");
      if (iVar2 != 0) goto LAB_180044c45;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_10);
    iVar2 = 0;
LAB_180044c45:
    ppcVar5 = &local_f0;
    local_f0 = "C_CSWeaponBase";
    DAT_180ccf938 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_fLastShotTime");
      if (iVar2 != 0) goto LAB_180044c82;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_e8);
    iVar2 = 0;
LAB_180044c82:
    local_e8 = "C_CSWeaponBase";
    ppcVar5 = &local_e8;
    DAT_180ccf93c = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_flLastBurstModeChangeTime");
      if (iVar2 != 0) goto LAB_180044cc2;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_e0);
    iVar2 = 0;
LAB_180044cc2:
    ppcVar5 = &local_e0;
    local_e0 = "C_EconEntity";
    DAT_180ccf940 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_AttributeManager");
      if (iVar2 != 0) goto LAB_180044d02;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_d8);
    iVar2 = 0;
LAB_180044d02:
    ppcVar5 = &local_d8;
    local_d8 = "C_AttributeContainer";
    DAT_180ccf944 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_Item");
      if (iVar2 != 0) goto LAB_180044d42;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_d0);
    iVar2 = 0;
LAB_180044d42:
    ppcVar5 = &local_d0;
    local_d0 = "C_EconItemView";
    DAT_180ccf948 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_iItemDefinitionIndex");
      if (iVar2 != 0) goto LAB_180044d85;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_c8);
    iVar2 = 0;
LAB_180044d85:
    local_c8 = "CCSWeaponBaseVData";
    ppcVar5 = &local_c8;
    DAT_180ccf94c = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_WeaponType");
      if (iVar2 != 0) goto LAB_180044dc5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_c0);
    iVar2 = 0;
LAB_180044dc5:
    ppcVar5 = &local_c0;
    local_c0 = "CCSWeaponBaseVData";
    DAT_180ccf950 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_nZoomLevels");
      if (iVar2 != 0) goto LAB_180044e05;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_b8);
    iVar2 = 0;
LAB_180044e05:
    ppcVar5 = &local_b8;
    local_b8 = "CCSWeaponBaseVData";
    DAT_180ccf954 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_nZoomFOV1");
      if (iVar2 != 0) goto LAB_180044e45;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_b0);
    iVar2 = 0;
LAB_180044e45:
    ppcVar5 = &local_b0;
    local_b0 = "CCSWeaponBaseVData";
    DAT_180ccf958 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_nZoomFOV2");
      if (iVar2 != 0) goto LAB_180044e85;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_a8);
    iVar2 = 0;
LAB_180044e85:
    ppcVar5 = &local_a8;
    local_a8 = "CCSWeaponBaseVData";
    DAT_180ccf95c = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_flIronSightFOV");
      if (iVar2 != 0) goto LAB_180044ec5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_a0);
    iVar2 = 0;
LAB_180044ec5:
    ppcVar5 = &local_a0;
    local_a0 = "CCSWeaponBaseVData";
    DAT_180ccf960 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_bUnzoomsAfterShot");
      if (iVar2 != 0) goto LAB_180044f05;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_98);
    iVar2 = 0;
LAB_180044f05:
    ppcVar5 = &local_98;
    local_98 = "CCSWeaponBaseVData";
    DAT_180ccf964 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_bHasBurstMode");
      if (iVar2 != 0) goto LAB_180044f45;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_90);
    iVar2 = 0;
LAB_180044f45:
    ppcVar5 = &local_90;
    local_90 = "C_BaseEntity";
    DAT_180ccf968 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_pCollision");
      if (iVar2 != 0) goto LAB_180044f85;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_88);
    iVar2 = 0;
LAB_180044f85:
    local_88 = "CCollisionProperty";
    ppcVar5 = &local_88;
    DAT_180ccf96c = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_collisionAttribute");
      if (iVar2 != 0) goto LAB_180044fc5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_80);
    iVar2 = 0;
LAB_180044fc5:
    ppcVar5 = &local_80;
    local_80 = "CCollisionProperty";
    DAT_180ccf970 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_usSolidFlags");
      if (iVar2 != 0) goto LAB_180045005;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_78);
    iVar2 = 0;
LAB_180045005:
    local_78 = "C_BaseEntity";
    ppcVar5 = &local_78;
    DAT_180ccf974 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_hOwnerEntity");
      if (iVar2 != 0) goto LAB_180045046;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_70);
    iVar2 = 0;
LAB_180045046:
    local_70 = "VPhysicsCollisionAttribute_t";
    ppcVar5 = &local_70;
    DAT_180ccf978 = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_nHierarchyId");
      if (iVar2 != 0) goto LAB_180045086;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_68);
    iVar2 = 0;
LAB_180045086:
    local_68 = "VPhysicsCollisionAttribute_t";
    ppcVar5 = &local_68;
    DAT_180ccf97c = iVar2;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_nCollisionGroup");
      if (iVar2 != 0) goto LAB_1800450d5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_60);
    iVar2 = 0;
LAB_1800450d5:
    if (((((DAT_180ccf8a4 == 0) || (DAT_180ccf8a8 == 0)) || (DAT_180ccf8ac == 0)) ||
        (((DAT_180ccf8b0 == 0 || (DAT_180ccf8b4 == 0)) ||
         ((DAT_180ccf8bc == 0 || ((DAT_180ccf8d4 == 0 || (DAT_180ccf8d8 == 0)))))))) ||
       ((DAT_180ccf8d0 == 0 ||
        (((((DAT_180ccf924 == 0 || (DAT_180ccf950 == 0)) || (DAT_180ccf954 == 0)) ||
          ((DAT_180ccf958 == 0 || (DAT_180ccf95c == 0)))) || (DAT_180ccf938 == 0)))))) {
      DAT_180ccf8a1 = 0;
      bVar1 = false;
    }
    else {
      DAT_180ccf8a1 = 1;
      bVar1 = true;
    }
    pcVar3 = "MISSING";
    if (bVar1) {
      pcVar3 = "ok";
    }
    DAT_180ccf980 = iVar2;
    FUN_1802b2560("[nl_view] schema %s | fov 0x%x time 0x%x arms 0x%x punch tick 0x%x landing 0x%x zoom 0x%x vdata type 0x%x levels 0x%x"
                  ,pcVar3,DAT_180ccf8a4,DAT_180ccf8ac,DAT_180ccf8fc,DAT_180ccf8b8,DAT_180ccf8f0,
                  DAT_180ccf938,DAT_180ccf950,DAT_180ccf954);
  }
  return (ulonglong)DAT_180ccf8a1;
}



/* ===== 1800451f0 FUN_1800451f0 ===== */

uint FUN_1800451f0(longlong param_1)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    lVar3 = FUN_18000f3a0(param_1 + 0x10);
    if (lVar3 != 0) {
      uVar2 = FUN_180011200(lVar3 + 0x10);
      sVar1 = FUN_180011200(lVar3 + 0x30);
      uVar4 = uVar2 - (ushort)(sVar1 << 0xf);
      return (uVar4 ^ uVar2) & 0x7fff ^ uVar4;
    }
  }
  return 0xffffffff;
}



/* ===== 180045260 FUN_180045260 ===== */

undefined8 FUN_180045260(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong local_res8 [4];
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res8);
  }
  else {
    local_res8[0] = DAT_181108a00;
  }
  if ((local_res8[0] == 0) || (DAT_180ccf910 == 0)) {
    return 0;
  }
  uVar1 = FUN_180011200((ulonglong)DAT_180ccf910 + local_res8[0]);
  puVar2 = (undefined8 *)FUN_1803a0940(local_res8,uVar1);
  return *puVar2;
}



/* ===== 1800452c0 FUN_1800452c0 ===== */

/* WARNING: Removing unreachable block (ram,0x0001800453ac) */

longlong FUN_1800452c0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong local_res8 [4];
  
  lVar4 = FUN_180045260();
  if (lVar4 != 0) {
    local_res8[0] = lVar4;
    pcVar5 = (char *)FUN_1803a0710(local_res8);
    if (((pcVar5 != (char *)0x0) && (iVar2 = strcmp(pcVar5,"C_CSPlayerPawn"), iVar2 == 0)) &&
       (cVar1 = FUN_180011220((ulonglong)DAT_180ccf8d4 + lVar4), cVar1 == '\0')) {
      return lVar4;
    }
    if (((DAT_180ccf8cc != 0) &&
        (lVar4 = FUN_18000f3a0(lVar4 + (ulonglong)DAT_180ccf8cc), lVar4 != 0)) &&
       (cVar1 = FUN_180011220((ulonglong)DAT_180ccf91c + lVar4), cVar1 == '\x02')) {
      uVar3 = FUN_180011200((ulonglong)DAT_180ccf920 + lVar4);
      plVar6 = (longlong *)FUN_1803a0940(local_res8,uVar3);
      lVar4 = *plVar6;
      if (((lVar4 == 0) ||
          (local_res8[0] = lVar4, pcVar5 = (char *)FUN_1803a0710(), pcVar5 == (char *)0x0)) ||
         (iVar2 = strcmp(pcVar5,"C_CSPlayerPawn"), iVar2 != 0)) {
        return 0;
      }
      return lVar4;
    }
  }
  return 0;
}



/* ===== 1800453c0 FUN_1800453c0 ===== */

float FUN_1800453c0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float local_res8 [2];
  
  fVar6 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf8ac + param_1);
  if ((DAT_180962dc8 == 0) && (DAT_180962dd0 == '\0')) {
    DAT_180962dc8 = FUN_180264b70(PTR_s_fov_cs_debug_180962dc0);
    DAT_180962dd0 = DAT_180962dc8 == 0;
    if (DAT_180962dc8 == 0) {
      FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_fov_cs_debug_180962dc0);
    }
  }
  if (((DAT_180962dc8 != 0) &&
      (local_res8[0] = (float)FUN_180264d70(DAT_180962dc8),
      ((uint)local_res8[0] & 0x7f800000) != 0x7f800000)) && (0.0 < local_res8[0])) {
    return fVar6;
  }
  if (((DAT_18095cf40 != '\0') && (lVar4 = FUN_18000f3a0(param_1 + 0x38), lVar4 != 0)) &&
     ((cVar1 = FUN_180011220((ulonglong)DAT_180ccf8d4 + lVar4), cVar1 == '\0' &&
      (lVar4 = FUN_18000f3a0((ulonglong)DAT_180ccf8d0 + lVar4), lVar4 != 0)))) {
    uVar2 = FUN_180011200((ulonglong)DAT_180ccf924 + lVar4);
    plVar5 = (longlong *)FUN_1803a0940(local_res8,uVar2);
    if (((*plVar5 != 0) &&
        (lVar4 = FUN_18000f3a0(*plVar5 + (ulonglong)DAT_180ccf8d8 + 8), lVar4 != 0)) &&
       (iVar3 = FUN_180011200((ulonglong)DAT_180ccf954 + lVar4), 0 < iVar3)) {
      fVar6 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf8b0 + param_1);
      fVar7 = (float)FUN_180044090(param_1);
      return fVar7 - fVar6;
    }
  }
  return fVar6;
}



/* ===== 180045550 FUN_180045550 ===== */

void FUN_180045550(longlong param_1,longlong param_2,float param_3,float param_4)

{
  char cVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_e8;
  float local_e4;
  float local_e0 [2];
  float local_d8 [2];
  float local_d0;
  float local_cc;
  float local_c8 [2];
  float local_c0;
  undefined4 local_b8;
  float *local_b0;
  float *local_a8;
  float *local_a0;
  float *local_98;
  float *local_90;
  float *local_88;
  float *local_80;
  
  if ((DAT_180962dc8 == 0) && (DAT_180962dd0 == '\0')) {
    DAT_180962dc8 = FUN_180264b70(PTR_s_fov_cs_debug_180962dc0);
    DAT_180962dd0 = DAT_180962dc8 == 0;
    if (DAT_180962dc8 == 0) {
      FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_fov_cs_debug_180962dc0);
    }
  }
  if (((DAT_180962dc8 != 0) &&
      (fVar2 = (float)FUN_180264d70(DAT_180962dc8), ((uint)fVar2 & 0x7f800000) != 0x7f800000)) &&
     (0.0 < fVar2)) {
    return;
  }
  fVar2 = DAT_1808ac34c;
  if (DAT_18095cf20 == '\0' && DAT_18095cf35 == '\0') {
    return;
  }
  local_e4 = param_4;
  if (DAT_18095cf20 != '\0') {
    local_e4 = (float)DAT_18095cf24;
  }
  fVar9 = DAT_1808ac34c;
  fVar10 = DAT_1808ac34c;
  if (DAT_18095cf35 != '\0') {
    fVar9 = (float)DAT_18095cf38 * DAT_1808ac000;
    fVar10 = (float)DAT_18095cf3c * DAT_1808ac000;
  }
  if (param_2 == 0) {
    return;
  }
  local_e8 = param_4;
  lVar5 = FUN_18000f3a0((ulonglong)DAT_180ccf8d8 + 8 + param_2);
  if (lVar5 == 0) {
    return;
  }
  if ((DAT_180ccf92c != 0) &&
     (cVar1 = FUN_180011220((ulonglong)DAT_180ccf930 + param_2 + (ulonglong)DAT_180ccf92c),
     cVar1 != '\0')) {
    FUN_180011200((ulonglong)DAT_180ccf938 + param_2);
    fVar2 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf960 + lVar5);
    if (local_e8 == fVar2) {
      return;
    }
    local_d8[0] = (param_3 - local_e8) / (fVar2 - local_e8);
    local_e0[0] = 0.0;
    return;
  }
  iVar3 = FUN_180011200((ulonglong)DAT_180ccf950 + lVar5);
  if (iVar3 != 5) {
    return;
  }
  local_e0[0] = (float)FUN_180011200((ulonglong)DAT_180ccf954 + lVar5);
  if ((int)local_e0[0] < 1) {
    return;
  }
  iVar3 = FUN_180011200((ulonglong)DAT_180ccf958 + lVar5);
  local_d8[0] = (float)iVar3;
  iVar3 = FUN_180011200((ulonglong)DAT_180ccf95c + lVar5);
  local_d0 = (float)iVar3;
  local_c8[0] = (local_d8[0] - local_e4) * fVar9 + local_e4;
  local_cc = (local_d0 - local_e4) * fVar10 + local_e4;
  uVar4 = FUN_180011200((ulonglong)DAT_180ccf8a4 + param_1);
  if (uVar4 == 0) {
    fVar9 = local_e8;
  }
  else {
    fVar9 = (float)uVar4;
  }
  uVar4 = FUN_180011200((ulonglong)DAT_180ccf8a8 + param_1);
  fVar10 = (float)uVar4;
  fVar6 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf8b4 + param_1);
  if (DAT_180962ce8 == 0) {
    if (DAT_180962cf0 == '\0') {
      DAT_180962ce8 = FUN_180264b70(PTR_s_cl_sniper_delay_unscope_180962ce0);
      DAT_180962cf0 = DAT_180962ce8 == 0;
      if (DAT_180962ce8 != 0) goto LAB_1800458e0;
      FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_cl_sniper_delay_unscope_180962ce0)
      ;
    }
    if (DAT_180962ce8 == 0) goto LAB_18004595e;
  }
LAB_1800458e0:
  cVar1 = FUN_180264d70(DAT_180962ce8);
  if (((cVar1 != '\0') && (0.0 < fVar6)) &&
     ((fVar6 != local_e8 &&
      ((cVar1 = FUN_180011220((ulonglong)DAT_180ccf964 + lVar5), cVar1 != '\0' &&
       (1 < (int)local_e0[0])))))) {
    fVar7 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf93c + param_2);
    fVar8 = (float)FUN_180044090(param_1);
    fVar7 = ((fVar8 - fVar7) - DAT_1808ac154) / DAT_1808ac0c0;
    if (0.0 <= fVar7) {
      if (fVar2 <= fVar7) {
        fVar7 = fVar2;
      }
      if (fVar2 <= fVar7) goto LAB_18004595e;
    }
    fVar10 = fVar6;
    fVar9 = local_e8;
  }
LAB_18004595e:
  local_b0 = local_e0;
  local_a8 = local_d8;
  local_a0 = &local_d0;
  local_98 = &local_cc;
  local_90 = local_c8;
  local_88 = &local_e8;
  local_80 = &local_e4;
  if (fVar10 == fVar9) {
    FUN_180045a70(&local_b0,fVar9);
  }
  else {
    local_c0 = (param_3 - fVar10) / (fVar9 - fVar10);
    local_b8 = 0;
    local_b8 = 0;
    FUN_180045a70(&local_b0,fVar10);
    FUN_180045a70(&local_b0,fVar9);
  }
  return;
}



/* ===== 180045a70 FUN_180045a70 ===== */

float FUN_180045a70(undefined8 *param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  float local_res8 [4];
  float local_res18 [4];
  
  if ((*(int *)*param_1 < 2) || (fVar4 = *(float *)param_1[1], fVar4 <= param_2)) {
    fVar4 = *(float *)param_1[1];
    fVar1 = *(float *)param_1[5];
    if (fVar1 == fVar4) {
      lVar3 = 0x30;
      if (fVar4 <= param_2) {
        lVar3 = 0x20;
      }
      return **(float **)(lVar3 + (longlong)param_1);
    }
    local_res8[0] = (param_2 - fVar1) / (fVar4 - fVar1);
    if (NAN(local_res8[0])) {
      fVar4 = 0.0;
    }
    else {
      local_res18[0] = 0.0;
      pfVar2 = local_res8;
      if (local_res8[0] <= 0.0) {
        pfVar2 = local_res18;
      }
      fVar4 = *pfVar2;
      if (DAT_1808ac34c <= *pfVar2) {
        fVar4 = DAT_1808ac34c;
      }
    }
    return (*(float *)param_1[4] - *(float *)param_1[6]) * fVar4 + *(float *)param_1[6];
  }
  fVar1 = *(float *)param_1[2];
  if (fVar4 == fVar1) {
    lVar3 = 0x20;
    if (fVar1 <= param_2) {
      lVar3 = 0x18;
    }
    return **(float **)(lVar3 + (longlong)param_1);
  }
  local_res8[0] = (param_2 - fVar4) / (fVar1 - fVar4);
  if (NAN(local_res8[0])) {
    return (*(float *)param_1[3] - *(float *)param_1[4]) * 0.0 + *(float *)param_1[4];
  }
  local_res18[0] = 0.0;
  pfVar2 = local_res8;
  if (local_res8[0] <= 0.0) {
    pfVar2 = local_res18;
  }
  fVar4 = *pfVar2;
  if (DAT_1808ac34c <= *pfVar2) {
    fVar4 = DAT_1808ac34c;
  }
  return (*(float *)param_1[3] - *(float *)param_1[4]) * fVar4 + *(float *)param_1[4];
}



/* ===== 180045bd0 FUN_180045bd0 ===== */

undefined8 FUN_180045bd0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 local_res8 [32];
  
  lVar5 = FUN_18000f3a0(param_1 + 0x38);
  uVar6 = FUN_180044070(param_1,0x24);
  if ((lVar5 == 0) || (lVar4 = FUN_18000f3a0((ulonglong)DAT_180ccf8d0 + lVar5), lVar4 == 0)) {
    lVar4 = 0;
  }
  else {
    uVar3 = FUN_180011200((ulonglong)DAT_180ccf924 + lVar4);
    plVar1 = (longlong *)FUN_1803a0940(local_res8,uVar3);
    lVar4 = *plVar1;
  }
  uVar3 = 0;
  uVar7 = FUN_180045550(param_1,lVar4,param_2,uVar6);
  if (((DAT_180961a50 == 0) || (lVar2 = FUN_18000f3a0(), lVar2 == 0)) || (lVar5 == 0)) {
    DAT_180962c04 = 0;
  }
  else {
    DAT_180962be8 = param_1;
    DAT_180962bf0 = FUN_1800451f0(lVar5);
    if (lVar4 == 0) {
      DAT_180962bf4 = 0xffffffff;
    }
    else {
      DAT_180962bf4 = FUN_1800451f0(lVar4);
    }
    if ((DAT_180961a50 != 0) && (lVar5 = FUN_18000f3a0(), lVar5 != 0)) {
      uVar3 = FUN_180011200(lVar5 + 4);
    }
    DAT_180962c04 = 1;
    DAT_180962bf8 = uVar3;
    DAT_180962bfc = param_2;
    DAT_180962c00 = uVar6;
  }
  return uVar7;
}



/* ===== 180045d20 FUN_180045d20 ===== */

void FUN_180045d20(longlong param_1)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  uint local_res8 [2];
  
  uVar12 = 1;
  if ((DAT_180ccf8f0 == 0) || (DAT_180ccf8f4 == 0)) {
LAB_180045d7f:
    bVar1 = false;
    iVar8 = 0;
  }
  else {
    if (DAT_18095cf34 == '\0') {
      if (DAT_180ccf7f0 == 0) goto LAB_180045d7f;
      if (param_1 != 0) {
        cVar7 = FUN_1800440c0(DAT_180ccf7f0,param_1);
        if (cVar7 != '\0') goto LAB_180045d7f;
      }
    }
    bVar1 = true;
    iVar8 = 1;
  }
  uVar6 = DAT_180ccf904;
  uVar5 = DAT_180ccf900;
  uVar4 = DAT_180ccf8f4;
  uVar3 = DAT_180ccf8f0;
  fVar14 = 0.0;
  if ((param_1 == DAT_180962c08) && (iVar8 == DAT_180962c10)) goto LAB_180045e70;
  DAT_180962c18 = 0;
  DAT_180962c14 = 0.0;
  DAT_180962c08 = param_1;
  DAT_180962c10 = iVar8;
  if (DAT_180ccf7f0 == 0) {
LAB_180045e0b:
    uVar12 = 0;
  }
  else if (param_1 != 0) {
    cVar7 = FUN_1800440c0(DAT_180ccf7f0,param_1);
    if (cVar7 != '\0') goto LAB_180045e0b;
  }
  puVar11 = &DAT_1806d2870;
  if (bVar1) {
    puVar11 = &DAT_1806d286c;
  }
  FUN_1802b2560("[nl_view] landing bob | suppression %s | setting %d, third person %d | pawn %p | fields m_bInLanding 0x%x m_flOldFallVelocity 0x%x, fall velocity 0x%x/0x%x"
                ,puVar11,DAT_18095cf34 != '\0',uVar12,param_1,uVar3,uVar4,uVar5,uVar6);
LAB_180045e70:
  if (bVar1) {
    if (DAT_180ccf900 != 0) {
      lVar9 = FUN_18000f3a0(param_1 + (ulonglong)DAT_180ccf900);
      if ((lVar9 != 0) && (DAT_180ccf904 != 0)) {
        fVar14 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf904 + lVar9);
      }
    }
    fVar2 = DAT_180962c14;
    if (((DAT_1808acb90 < DAT_180962c14) && (DAT_180962c14 <= DAT_1808acc44)) &&
       (fVar14 <= DAT_1808ac0c0)) {
      cVar7 = FUN_180011220((ulonglong)DAT_180ccf8f0 + param_1);
      fVar13 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf8f4 + param_1);
      pcVar10 = "bob blocked";
      if (cVar7 != '\0') {
        pcVar10 = "BOB STARTED";
      }
      FUN_1802b2560("[nl_view] landing bob | landed: fall velocity %.1f -> %.1f | after CalcView m_bInLanding %d (%s), m_flOldFallVelocity %.1f -> cleared"
                    ,(double)fVar2,(double)fVar14,cVar7,pcVar10,(double)fVar13);
    }
    local_res8[0] = local_res8[0] & 0xffffff00;
    DAT_180962c14 = fVar14;
    FUN_1800233d0((ulonglong)DAT_180ccf8f0 + param_1,local_res8);
    local_res8[0] = 0;
    FUN_180013280((ulonglong)DAT_180ccf8f4 + param_1,local_res8);
  }
  return;
}



/* ===== 180045fb0 FUN_180045fb0 ===== */

void FUN_180045fb0(code *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5,undefined8 param_6)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  uint local_res8 [2];
  undefined4 local_res10 [2];
  
  lVar3 = FUN_18000f3a0(param_2 + 0x38);
  if ((((lVar3 != 0) && (DAT_180ccf8f0 != 0)) && (DAT_180ccf8f4 != 0)) &&
     ((DAT_18095cf34 != '\0' ||
      ((DAT_180ccf7f0 != 0 && (cVar2 = FUN_1800440c0(DAT_180ccf7f0,lVar3), cVar2 == '\0')))))) {
    cVar2 = FUN_180011220((ulonglong)DAT_180ccf8f0 + lVar3);
    fVar5 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf8f4 + lVar3);
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1800233d0((ulonglong)DAT_180ccf8f0 + lVar3,local_res8);
    local_res8[0] = 0;
    fVar6 = 0.0;
    FUN_180013280((ulonglong)DAT_180ccf8f4 + lVar3,local_res8);
    if ((lVar3 == DAT_180962c08) && (DAT_180962c10 == 1)) {
      bVar1 = 0 < DAT_180ccf828;
      if ((DAT_180ccf828 < 1) && (DAT_180962c18 == '\0')) {
        DAT_180962c18 = '\x01';
        FUN_1802b2560("[nl_view] landing bob | slot 34 also runs outside CalcView (return %p): cleared before that call too"
                      ,param_6);
      }
      if (((DAT_180ccf900 != 0) &&
          (lVar3 = FUN_18000f3a0(lVar3 + (ulonglong)DAT_180ccf900), lVar3 != 0)) &&
         (DAT_180ccf904 != 0)) {
        fVar6 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf904 + lVar3);
      }
      if ((cVar2 != '\0') ||
         (((DAT_1808acb90 < fVar5 && (fVar5 <= DAT_1808acc44)) && (fVar6 <= DAT_1808ac0c0)))) {
        pcVar4 = "outside";
        if (bVar1) {
          pcVar4 = "inside";
        }
        FUN_1802b2560("[nl_view] landing bob | blocked before slot 34 (%s CalcView, return %p) | m_bInLanding(0x%x) %d -> 0, m_flOldFallVelocity(0x%x) %.1f -> 0, fall velocity %.1f"
                      ,pcVar4,param_6,DAT_180ccf8f0,cVar2,DAT_180ccf8f4,(double)fVar5,(double)fVar6)
        ;
      }
    }
  }
  local_res10[0] = FUN_18000f3d0((ulonglong)DAT_180ccf8ac + param_2);
  local_res8[0] = FUN_1800453c0(param_2);
  FUN_180013280((ulonglong)DAT_180ccf8ac + param_2,local_res8);
  (*param_1)(param_2,param_3,param_4,param_5);
  if ((param_5 != (float *)0x0) &&
     (((DAT_180ccf7e8 == 0 || (lVar3 = FUN_18000f3a0(), lVar3 == 0)) ||
      (cVar2 = FUN_180011220(lVar3 + 0x34), cVar2 == '\0')))) {
    fVar6 = (float)FUN_180045bd0(param_2,*param_5);
    fVar5 = DAT_1808ac34c;
    if (DAT_1808ac34c <= fVar6) {
      fVar5 = fVar6;
    }
    *param_5 = fVar5;
  }
  FUN_180013280((ulonglong)DAT_180ccf8ac + param_2,local_res10);
  return;
}



/* ===== 180046290 FUN_180046290 ===== */

void FUN_180046290(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_retaddr;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (DAT_180ca15ba != '\0') {
    cVar1 = FUN_180044350();
    if ((cVar1 != '\0') && (param_1 != 0)) {
      lVar2 = FUN_18000f3a0(param_1);
      if (lVar2 == DAT_180ccf790) {
        FUN_180045fb0(DAT_180ccf890,param_1,param_2,param_3,param_4,unaff_retaddr);
        if (param_4 != (undefined4 *)0x0) {
          if (DAT_180ccf7e8 != 0) {
            lVar2 = FUN_18000f3a0();
            if (lVar2 != 0) {
              cVar1 = FUN_180011220(lVar2 + 0x34);
              if (cVar1 != '\0') goto LAB_180046341;
            }
          }
          DAT_180962cf8 = *param_4;
        }
        goto LAB_180046341;
      }
    }
  }
  (*DAT_180ccf890)(param_1,param_2,param_3,param_4);
LAB_180046341:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 180046360 FUN_180046360 ===== */

void FUN_180046360(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_retaddr;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (DAT_180ca15ba != '\0') {
    cVar1 = FUN_180044350();
    if ((cVar1 != '\0') && (param_1 != 0)) {
      lVar2 = FUN_18000f3a0(param_1);
      if (lVar2 == DAT_180ccf798) {
        FUN_180045fb0(DAT_180ccf880,param_1,param_2,param_3,param_4,unaff_retaddr);
        goto LAB_1800463dd;
      }
    }
  }
  (*DAT_180ccf880)(param_1,param_2,param_3,param_4);
LAB_1800463dd:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1800463f0 FUN_1800463f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800463f0(void)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar2 = FUN_1800441b0();
  if (iVar2 == 0) {
    return;
  }
  lVar8 = FUN_180045260();
  if (lVar8 == 0) {
    return;
  }
  cVar1 = FUN_180011220((ulonglong)DAT_180ccf8d4 + lVar8);
  if (cVar1 == '\0') {
    return;
  }
  if ((DAT_180ccf8e0 != 0) &&
     (uVar9 = FUN_180011220(lVar8 + (ulonglong)DAT_180ccf8e0), (uVar9 & 0x20) != 0)) {
    return;
  }
  if (DAT_180ccf8cc == 0) {
    return;
  }
  lVar10 = FUN_18000f3a0(lVar8 + (ulonglong)DAT_180ccf8cc);
  if (lVar10 == 0) {
    return;
  }
  cVar1 = FUN_180011220((ulonglong)DAT_180ccf91c + lVar10);
  if (cVar1 != '\x04') {
    return;
  }
  if (DAT_180961fa8 == 0) {
    return;
  }
  lVar10 = FUN_18000f3a0();
  if (0x7ffffffefffe < lVar10 - 0x10000U) {
    return;
  }
  if (DAT_180ccf8c0 == 0) {
    return;
  }
  DAT_180ccf770 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf8c0 + lVar8);
  fVar11 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf8c0 + 4 + lVar8);
  fVar7 = DAT_1808ac014;
  fVar15 = DAT_180ccf770 * DAT_1808ac014;
  DAT_180ccf778 = 0;
  DAT_180ccf774 = fVar11;
  fVar12 = (float)FUN_180517790(fVar15);
  fVar15 = (float)FUN_180517200(fVar15);
  fVar13 = (float)FUN_180517790(fVar11 * fVar7);
  fVar11 = (float)FUN_180517200(fVar11 * fVar7);
  fVar7 = DAT_1808ac34c;
  if ((DAT_180ccf810 == 0) || (lVar8 = FUN_18000f3a0(), lVar8 == 0)) {
    uVar9 = 0;
LAB_1800465e8:
    fVar14 = 0.0;
  }
  else {
    uVar9 = FUN_18000f3a0(lVar8 + 0x250);
    if ((uVar9 & 8) == 0) goto LAB_1800465e8;
    fVar14 = fVar7;
  }
  if ((uVar9 & 0x10) == 0) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = DAT_1808acda0;
  }
  fVar17 = fVar17 + fVar14;
  if ((uVar9 >> 9 & 1) == 0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = fVar7;
  }
  fVar16 = DAT_1808acda0;
  if ((uVar9 >> 10 & 1) == 0) {
    fVar16 = 0.0;
  }
  fVar16 = fVar16 + fVar14;
  fVar14 = (float)FUN_18000f3d0(lVar10 + 0xc4);
  if (DAT_180ca12ec == '\0') {
    DAT_180ca12ec = '\x01';
    if (DAT_180962db0 == 0) {
      if (DAT_180962db8 == '\0') {
        DAT_180962db0 = FUN_180264b70(PTR_s_sv_friction_180962da8);
        DAT_180962db8 = DAT_180962db0 == 0;
        if (DAT_180962db0 != 0) goto LAB_1800466a1;
        FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_sv_friction_180962da8);
      }
      if (DAT_180962db0 != 0) goto LAB_1800466a1;
LAB_1800466d0:
      fVar3 = 0.0;
    }
    else {
LAB_1800466a1:
      fVar3 = (float)FUN_180264d70(DAT_180962db0);
      if (((uint)fVar3 & 0x7f800000) == 0x7f800000) goto LAB_1800466d0;
    }
    if (DAT_180962cd0 == 0) {
      if (DAT_180962cd8 == '\0') {
        DAT_180962cd0 = FUN_180264b70(PTR_s_sv_maxspeed_180962cc8);
        DAT_180962cd8 = DAT_180962cd0 == 0;
        if (DAT_180962cd0 != 0) goto LAB_180046729;
        FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_sv_maxspeed_180962cc8);
      }
      if (DAT_180962cd0 != 0) goto LAB_180046729;
LAB_180046756:
      fVar4 = 0.0;
    }
    else {
LAB_180046729:
      fVar4 = (float)FUN_180264d70(DAT_180962cd0);
      if (((uint)fVar4 & 0x7f800000) == 0x7f800000) goto LAB_180046756;
    }
    if (DAT_180962d30 == 0) {
      if (DAT_180962d38 == '\0') {
        DAT_180962d30 = FUN_180264b70(PTR_s_sv_specaccelerate_180962d28);
        DAT_180962d38 = DAT_180962d30 == 0;
        if (DAT_180962d30 != 0) goto LAB_1800467ae;
        FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_sv_specaccelerate_180962d28);
      }
      if (DAT_180962d30 != 0) goto LAB_1800467ae;
LAB_1800467db:
      fVar5 = 0.0;
    }
    else {
LAB_1800467ae:
      fVar5 = (float)FUN_180264d70(DAT_180962d30);
      if (((uint)fVar5 & 0x7f800000) == 0x7f800000) goto LAB_1800467db;
    }
    if (DAT_180962d98 == 0) {
      if (DAT_180962da0 == '\0') {
        DAT_180962d98 = FUN_180264b70(PTR_s_sv_specspeed_180962d90);
        DAT_180962da0 = DAT_180962d98 == 0;
        if (DAT_180962d98 != 0) goto LAB_180046833;
        FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_sv_specspeed_180962d90);
      }
      if (DAT_180962d98 != 0) goto LAB_180046833;
LAB_180046860:
      fVar6 = 0.0;
    }
    else {
LAB_180046833:
      fVar6 = (float)FUN_180264d70(DAT_180962d98);
      if (((uint)fVar6 & 0x7f800000) == 0x7f800000) goto LAB_180046860;
    }
    FUN_1802b2560("[nl_view] unlock spectating | roaming simulation active | buttons 0x%llx dt %.4f specspeed %.1f specaccelerate %.1f maxspeed %.1f friction %.2f"
                  ,uVar9,(double)fVar14,(double)fVar6,(double)fVar5,(double)fVar4,(double)fVar3);
  }
  if ((fVar17 != 0.0) || (fVar16 != 0.0)) {
    fVar4 = fVar15 * 0.0 * fVar16 - fVar17 * fVar12;
    fVar3 = (fVar12 * 0.0 * fVar13 + fVar11) * fVar16 + fVar13 * fVar15 * fVar17;
    fVar12 = (fVar12 * 0.0 * fVar11 - fVar13) * fVar16 + fVar11 * fVar15 * fVar17;
    fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar12 * fVar12;
    if (fVar11 < 0.0) {
      fVar11 = (float)FUN_18051af10(fVar11);
    }
    else {
      fVar11 = SQRT(fVar11);
    }
    if ((DAT_1808abf54 <= fVar11) && (fVar11 <= DAT_1808accfc)) {
      fVar11 = fVar7 / fVar11;
      fVar12 = fVar12 * fVar11;
      fVar3 = fVar3 * fVar11;
      fVar4 = fVar4 * fVar11;
    }
    if ((uVar9 >> 0x10 & 1) == 0) {
      fVar11 = fVar7;
    }
    else {
      fVar11 = DAT_1808ac168;
    }
    if (DAT_180962d98 == 0) {
      if (DAT_180962da0 == '\0') {
        DAT_180962d98 = FUN_180264b70(PTR_s_sv_specspeed_180962d90);
        DAT_180962da0 = DAT_180962d98 == 0;
        if (DAT_180962d98 != 0) goto LAB_1800469f6;
        FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_sv_specspeed_180962d90);
      }
      if (DAT_180962d98 != 0) goto LAB_1800469f6;
LAB_180046a23:
      fVar15 = 0.0;
    }
    else {
LAB_1800469f6:
      fVar15 = (float)FUN_180264d70(DAT_180962d98);
      if (((uint)fVar15 & 0x7f800000) == 0x7f800000) goto LAB_180046a23;
    }
    fVar13 = fVar11 * fVar15 -
             (DAT_180ccf760 * fVar4 + DAT_180ccf75c * fVar3 + DAT_180ccf758 * fVar12);
    if (0.0 < fVar13) {
      if (DAT_180962d30 == 0) {
        if (DAT_180962d38 == '\0') {
          DAT_180962d30 = FUN_180264b70(PTR_s_sv_specaccelerate_180962d28);
          DAT_180962d38 = DAT_180962d30 == 0;
          if (DAT_180962d30 != 0) goto LAB_180046ac0;
          FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_sv_specaccelerate_180962d28);
        }
        if (DAT_180962d30 != 0) goto LAB_180046ac0;
LAB_180046aed:
        fVar17 = 0.0;
      }
      else {
LAB_180046ac0:
        fVar17 = (float)FUN_180264d70(DAT_180962d30);
        if (((uint)fVar17 & 0x7f800000) == 0x7f800000) goto LAB_180046aed;
      }
      fVar11 = fVar17 * fVar14 * fVar11 * fVar15;
      if (fVar13 <= fVar11) {
        fVar11 = fVar13;
      }
      _DAT_180ccf758 = CONCAT44(DAT_180ccf75c + fVar3 * fVar11,DAT_180ccf758 + fVar12 * fVar11);
      DAT_180ccf760 = DAT_180ccf760 + fVar4 * fVar11;
    }
  }
  fVar11 = DAT_180ccf760 * DAT_180ccf760 + DAT_180ccf75c * DAT_180ccf75c +
           DAT_180ccf758 * DAT_180ccf758;
  if (fVar11 < 0.0) {
    fVar11 = (float)FUN_18051af10(fVar11);
  }
  else {
    fVar11 = SQRT(fVar11);
  }
  if (fVar11 < fVar7) {
    _DAT_180ccf758 = 0;
    DAT_180ccf760 = 0.0;
    return;
  }
  if (DAT_180962cd0 == 0) {
    if (DAT_180962cd8 == '\0') {
      DAT_180962cd0 = FUN_180264b70(PTR_s_sv_maxspeed_180962cc8);
      DAT_180962cd8 = DAT_180962cd0 == 0;
      if (DAT_180962cd0 != 0) goto LAB_180046c33;
      FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_sv_maxspeed_180962cc8);
    }
    if (DAT_180962cd0 != 0) goto LAB_180046c33;
LAB_180046c60:
    fVar7 = 0.0;
  }
  else {
LAB_180046c33:
    fVar7 = (float)FUN_180264d70(DAT_180962cd0);
    if (((uint)fVar7 & 0x7f800000) == 0x7f800000) goto LAB_180046c60;
  }
  fVar12 = fVar7 * DAT_1808ac140;
  if (fVar7 * DAT_1808ac140 <= fVar11) {
    fVar12 = fVar11;
  }
  if (DAT_180962db0 == 0) {
    if (DAT_180962db8 == '\0') {
      DAT_180962db0 = FUN_180264b70(PTR_s_sv_friction_180962da8);
      DAT_180962db8 = DAT_180962db0 == 0;
      if (DAT_180962db0 != 0) goto LAB_180046cc4;
      FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_sv_friction_180962da8);
    }
    if (DAT_180962db0 != 0) goto LAB_180046cc4;
  }
  else {
LAB_180046cc4:
    fVar7 = (float)FUN_180264d70(DAT_180962db0);
    if (((uint)fVar7 & 0x7f800000) != 0x7f800000) goto LAB_180046cf4;
  }
  fVar7 = 0.0;
LAB_180046cf4:
  fVar12 = fVar11 - fVar12 * fVar7 * fVar14;
  fVar7 = 0.0;
  if (0.0 <= fVar12) {
    fVar7 = fVar12;
  }
  fVar7 = fVar7 / fVar11;
  fVar12 = DAT_180ccf758 * fVar7;
  fVar11 = DAT_180ccf75c * fVar7;
  _DAT_180ccf758 = CONCAT44(fVar11,fVar12);
  DAT_180ccf76c = DAT_180ccf76c + DAT_180ccf760 * fVar7 * fVar14;
  DAT_180ccf768 = DAT_180ccf768 + fVar11 * fVar14;
  DAT_180ccf764 = DAT_180ccf764 + fVar12 * fVar14;
  DAT_180ccf760 = DAT_180ccf760 * fVar7;
  return;
}



/* ===== 180046dd0 FUN_180046dd0 ===== */

void FUN_180046dd0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180045260();
  if ((lVar1 == 0) || (DAT_180ccf8cc == 0)) {
    DAT_180962d18 = 0;
  }
  else {
    DAT_180962d18 = FUN_18000f3a0((ulonglong)DAT_180ccf8cc + lVar1);
    if ((DAT_180962d18 != 0) && (DAT_180ccf920 != 0)) {
      DAT_180962d20 = FUN_180011200((ulonglong)DAT_180ccf920 + DAT_180962d18);
      return;
    }
  }
  DAT_180962d20 = 0xffffffff;
  return;
}



/* ===== 180046e40 FUN_180046e40 ===== */

void FUN_180046e40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  size_t sVar5;
  longlong *plVar6;
  longlong lVar7;
  char *pcVar8;
  byte bVar9;
  byte bVar10;
  char *_Str;
  bool bVar11;
  bool bVar12;
  longlong local_res10;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (DAT_180ca15ba != '\0') {
    cVar2 = FUN_180044350();
    if ((cVar2 != '\0') && (param_1 != 0)) {
      iVar3 = FUN_1800441b0();
      if (iVar3 != 0) {
        bVar12 = DAT_18095cf8e != '\0';
        bVar11 = DAT_18095cf8f != '\0';
        iVar3 = FUN_180011200(param_1 + 0x438);
        if (iVar3 == 0) {
          _Str = "";
        }
        else {
          pcVar8 = (char *)FUN_18000f3a0(param_1 + 0x10);
          _Str = "";
          if (pcVar8 + -0x10000 < (char *)0x7ffffffeffff) {
            _Str = pcVar8;
          }
        }
        sVar5 = strlen(_Str);
        if (sVar5 < 9) {
          bVar9 = 2;
        }
        else {
          iVar3 = strncmp(_Str,"spec_mode",9);
          bVar9 = (iVar3 != 0) + 1;
        }
        if (DAT_180cd1304 == '\0') {
          FUN_1803a0b60(&local_res10);
        }
        else {
          local_res10 = DAT_181108a00;
        }
        if ((local_res10 != 0) && (DAT_180ccf928 != 0)) {
          iVar3 = FUN_180011200((ulonglong)DAT_180ccf928 + local_res10);
          if (iVar3 != -1) {
            plVar6 = (longlong *)FUN_1803a0940(&local_res10,iVar3);
            if ((((*plVar6 != 0) && (bVar10 = bVar12 | -bVar11 & 2U, bVar10 != 0)) &&
                ((bVar10 & bVar9) != 0)) && (DAT_180ccf8cc != 0)) {
              lVar7 = FUN_18000f3a0(*plVar6 + (ulonglong)DAT_180ccf8cc);
              if (lVar7 != 0) {
                if (DAT_180962d68 == 0) {
                  if (DAT_180962d70 == '\0') {
                    DAT_180962d68 = FUN_180264b70(PTR_s_mp_forcecamera_180962d60);
                    DAT_180962d70 = DAT_180962d68 == 0;
                    if (DAT_180962d68 == 0) {
                      FUN_1802b2560("[error] nl_view | convar %s not found",
                                    PTR_s_mp_forcecamera_180962d60);
                    }
                  }
                  if (DAT_180962d68 == 0) goto LAB_18004706e;
                }
                lVar1 = DAT_180962d68;
                uVar4 = FUN_1800441b0();
                cVar2 = FUN_180044220(lVar1,0);
                if (cVar2 != '\0') {
                  cVar2 = FUN_180044260(lVar7,param_1);
                  FUN_1800442d0(uVar4);
                  FUN_180046dd0();
                  pcVar8 = " | FAILED";
                  if (cVar2 != '\0') {
                    pcVar8 = "";
                  }
                  FUN_1802b2560("[nl_view] unlock spectating | \"%.48s\" run on the local observer (mp_forcecamera %d, unlock %d)%s"
                                ,_Str,uVar4,bVar10,pcVar8);
                  goto LAB_180047078;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_18004706e:
  (*DAT_180ccf9d0)(param_1);
LAB_180047078:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1800470a0 FUN_1800470a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800470a0(longlong param_1,undefined4 *param_2,undefined4 *param_3,float *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined4 local_38;
  undefined4 local_34 [3];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (DAT_180ca15ba != '\0') {
    cVar1 = FUN_180044350();
    if (((cVar1 != '\0') && (param_1 != 0)) && (param_4 != (float *)0x0)) {
      lVar3 = FUN_18000f3a0(param_1);
      if (lVar3 == DAT_180ccf7a0) {
        cVar1 = FUN_180011220((ulonglong)DAT_180ccf91c + param_1);
        if (cVar1 == '\x02') {
          lVar3 = FUN_1800452c0();
          if (lVar3 == 0) goto LAB_180047199;
          lVar3 = FUN_18000f3a0((ulonglong)DAT_180ccf8bc + lVar3);
          local_38 = 0;
          if (lVar3 == 0) goto LAB_18004719b;
          local_38 = FUN_18000f3d0((ulonglong)DAT_180ccf8ac + lVar3);
          local_34[0] = FUN_1800453c0(lVar3);
          FUN_180013280((ulonglong)DAT_180ccf8ac + lVar3,local_34);
          (*DAT_180ccf780)(param_1,param_2,param_3,param_4);
          FUN_180013280((ulonglong)DAT_180ccf8ac + lVar3,&local_38);
        }
        else {
LAB_180047199:
          lVar3 = 0;
LAB_18004719b:
          (*DAT_180ccf780)(param_1,param_2,param_3,param_4);
        }
        if ((param_2 != (undefined4 *)0x0) && (param_3 != (undefined4 *)0x0)) {
          iVar2 = FUN_1800441b0();
          if (iVar2 != 0) {
            cVar1 = FUN_180011220((ulonglong)DAT_180ccf91c + param_1);
            if (cVar1 == '\x04') {
              *param_2 = DAT_180ccf764;
              param_2[1] = DAT_180ccf768;
              param_2[2] = DAT_180ccf76c;
              *param_3 = DAT_180ccf770;
              param_3[1] = DAT_180ccf774;
              param_3[2] = DAT_180ccf778;
              lVar4 = FUN_18000f3a0(param_1 + 0x38);
              if (lVar4 != 0) {
                FUN_1800442a0(lVar4,&DAT_180ccf764);
              }
              goto LAB_1800472a3;
            }
          }
          _DAT_180ccf758 = 0;
          DAT_180ccf760 = 0;
          DAT_180ccf768 = param_2[1];
          DAT_180ccf76c = param_2[2];
          DAT_180ccf764 = *param_2;
          DAT_180ccf770 = *param_3;
          DAT_180ccf774 = param_3[1];
          DAT_180ccf778 = 0;
        }
LAB_1800472a3:
        fVar5 = *param_4;
        if (lVar3 == 0) {
          DAT_180962c04 = 0;
          if (DAT_18095cf20 != '\0') {
            fVar5 = (float)DAT_18095cf24;
          }
        }
        else {
          fVar5 = (float)FUN_180045bd0(lVar3);
        }
        fVar6 = DAT_1808ac34c;
        if (DAT_1808ac34c <= fVar5) {
          fVar6 = fVar5;
        }
        *param_4 = fVar6;
        goto LAB_1800472fb;
      }
    }
  }
  (*DAT_180ccf780)(param_1,param_2,param_3,param_4);
LAB_1800472fb:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 180047310 FUN_180047310 ===== */

uint FUN_180047310(void)

{
  uint in_EAX;
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong local_res8;
  
  DAT_180ccf77c = 1;
  if (DAT_18095cf84 != '\0') {
    lVar3 = FUN_180045260();
    in_EAX = (uint)lVar3;
    DAT_180ccf77c = 2;
    if (lVar3 != 0) {
      DAT_180ccf77c = 3;
      local_res8 = lVar3;
      pcVar4 = (char *)FUN_1803a0710(&local_res8);
      in_EAX = (uint)pcVar4;
      if ((pcVar4 != (char *)0x0) && (in_EAX = strcmp(pcVar4,"C_CSPlayerPawn"), in_EAX == 0)) {
        DAT_180ccf77c = 4;
        in_EAX = FUN_180011220((ulonglong)DAT_180ccf8d4 + lVar3);
        if ((char)in_EAX == '\0') {
          DAT_180ccf77c = 5;
          lVar5 = FUN_180266660();
          in_EAX = (uint)lVar5;
          if (lVar5 != 0) {
            DAT_180ccf77c = 6;
            if (DAT_18095cf86 != '\0') {
              lVar3 = FUN_18000f3a0((ulonglong)DAT_180ccf8d0 + lVar3);
              in_EAX = (uint)lVar3;
              if (lVar3 != 0) {
                uVar1 = FUN_180011200((ulonglong)DAT_180ccf924 + lVar3);
                plVar6 = (longlong *)FUN_1803a0940(&local_res8,uVar1);
                in_EAX = (uint)plVar6;
                if (*plVar6 != 0) {
                  lVar3 = FUN_18000f3a0((ulonglong)DAT_180961968 + *plVar6);
                  in_EAX = (uint)lVar3;
                  if (lVar3 != 0) {
                    lVar3 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar3);
                    in_EAX = (uint)lVar3;
                    iVar9 = 0;
                    if (lVar3 != 0) {
                      uVar7 = (ulonglong)DAT_180961974;
                      uVar8 = (ulonglong)DAT_180961970;
                      do {
                        if (0x1f < iVar9) break;
                        lVar5 = FUN_18000f3a0(lVar3 + uVar8);
                        if ((lVar5 != 0) &&
                           (pcVar4 = (char *)FUN_18000f3a0(lVar5 + uVar7),
                           pcVar4 + -0x10000 < (char *)0x7ffffffeffff)) {
                          iVar2 = strcmp(pcVar4,"C_BaseCSGrenade");
                          in_EAX = 0;
                          if (iVar2 == 0) goto LAB_1800474ca;
                        }
                        lVar3 = FUN_18000f3a0(lVar3 + 0x60);
                        in_EAX = (uint)lVar3;
                        if (lVar3 == 0) break;
                        lVar3 = FUN_18000f3a0(lVar3 + 0x18);
                        in_EAX = (uint)lVar3;
                        iVar9 = iVar9 + 1;
                      } while (lVar3 != 0);
                    }
                  }
                }
              }
            }
            DAT_180ccf77c = 0;
            return CONCAT31((int3)(in_EAX >> 8),1);
          }
        }
      }
    }
  }
LAB_1800474ca:
  return in_EAX & 0xffffff00;
}



/* ===== 1800474e0 FUN_1800474e0 ===== */

uint FUN_1800474e0(void)

{
  uint uVar1;
  
  if (DAT_180962bd8 == 0) {
    if (DAT_180962be0 == '\0') {
      DAT_180962bd8 = FUN_180264b70(PTR_s_cl_view_near_hud_player_eye_dist_180962bd0);
      DAT_180962be0 = DAT_180962bd8 == 0;
      if (DAT_180962bd8 != 0) goto LAB_180047539;
      FUN_1802b2560("[error] nl_view | convar %s not found",
                    PTR_s_cl_view_near_hud_player_eye_dist_180962bd0);
    }
    if (DAT_180962bd8 == 0) {
      return 0;
    }
  }
LAB_180047539:
  uVar1 = FUN_180264d70(DAT_180962bd8);
  if ((uVar1 & 0x7f800000) == 0x7f800000) {
    return 0;
  }
  return uVar1;
}



/* ===== 180047570 FUN_180047570 ===== */

void FUN_180047570(void)

{
  int iVar1;
  char **ppcVar2;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  
  if ((DAT_180ccf840 == '\0') && (DAT_1811089f0 != 0)) {
    ppcVar2 = &local_68;
    local_68 = "C_BasePlayerPawn";
    DAT_180ccf840 = '\x01';
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_pMovementServices");
      if (iVar1 != 0) goto LAB_1800475e2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_60);
    iVar1 = 0;
LAB_1800475e2:
    local_60 = "CCSPlayer_MovementServices";
    ppcVar2 = &local_60;
    DAT_180ccf844 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flDuckAmount");
      if (iVar1 != 0) goto LAB_180047622;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_58);
    iVar1 = 0;
LAB_180047622:
    ppcVar2 = &local_58;
    local_58 = "CCSPlayer_MovementServices";
    DAT_180ccf848 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flDuckViewOffset");
      if (iVar1 != 0) goto LAB_180047652;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_50);
    iVar1 = 0;
LAB_180047652:
    ppcVar2 = &local_50;
    local_50 = "CCSPlayer_MovementServices";
    DAT_180ccf84c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bDuckOverride");
      if (iVar1 != 0) goto LAB_180047682;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_48);
    iVar1 = 0;
LAB_180047682:
    ppcVar2 = &local_48;
    local_48 = "C_BaseEntity";
    DAT_180ccf850 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_pGameSceneNode");
      if (iVar1 != 0) goto LAB_1800476c2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_40);
    iVar1 = 0;
LAB_1800476c2:
    local_40 = "CGameSceneNode";
    ppcVar2 = &local_40;
    DAT_180ccf854 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecOrigin");
      if (iVar1 != 0) goto LAB_180047702;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_38);
    iVar1 = 0;
LAB_180047702:
    ppcVar2 = &local_38;
    local_38 = "CSkeletonInstance";
    DAT_180ccf858 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_modelState");
      if (iVar1 != 0) goto LAB_180047742;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_30);
    iVar1 = 0;
LAB_180047742:
    ppcVar2 = &local_30;
    local_30 = "CModelState";
    DAT_180ccf85c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flRootBoneOffset_x");
      if (iVar1 != 0) goto LAB_180047782;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_28);
    iVar1 = 0;
LAB_180047782:
    ppcVar2 = &local_28;
    local_28 = "CCSPlayerController";
    DAT_180ccf860 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_hPlayerPawn");
      if (iVar1 != 0) goto LAB_1800477c2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_20);
    iVar1 = 0;
LAB_1800477c2:
    ppcVar2 = &local_20;
    local_20 = "CGameSceneNode";
    DAT_180ccf864 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecAbsOrigin");
      if (iVar1 != 0) goto LAB_1800477f2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_18);
    iVar1 = 0;
LAB_1800477f2:
    local_18 = "CGameSceneNode";
    ppcVar2 = &local_18;
    DAT_180ccf868 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nodeToWorld");
      if (iVar1 != 0) goto LAB_180047832;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_10);
    iVar1 = 0;
LAB_180047832:
    DAT_180ccf86c = iVar1;
    if ((((DAT_180ccf844 == 0) || (DAT_180ccf848 == 0)) || (DAT_180ccf84c == 0)) ||
       (((DAT_180ccf850 == 0 || (DAT_180ccf854 == 0)) || (DAT_180ccf858 == 0)))) {
      FUN_1802b2560(
                   "[error] nl_view | duck peek view: schema fields missing (movement 0x%x amount 0x%x view 0x%x override 0x%x node 0x%x origin 0x%x)"
                   );
    }
  }
  return;
}



/* ===== 1800478b0 FUN_1800478b0 ===== */

void FUN_1800478b0(undefined8 param_1,undefined8 param_2)

{
  (*DAT_180ccf988)(param_2);
  return;
}



/* ===== 1800478d0 FUN_1800478d0 ===== */

longlong FUN_1800478d0(undefined4 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong in_RCX;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  char local_48 [11];
  uint uStack_3d;
  char cStack_39;
  undefined2 local_38;
  
  if (in_RCX == 0) {
    return 0;
  }
  if ((DAT_180ca12eb == '\0') && (DAT_180ccf8e8 != 0)) {
    DAT_180ca12eb = '\x01';
    lVar2 = FUN_18000f3a0();
    iVar4 = 0x96;
    if (lVar2 != 0) {
      for (; iVar4 < 0xe6; iVar4 = iVar4 + 1) {
        lVar3 = FUN_18000f3a0(lVar2 + (longlong)iVar4 * 8);
        if (lVar3 - 0x10000U < 0x7ffffffeffff) {
          local_48[0] = '\0';
          local_48[1] = '\0';
          local_48[2] = '\0';
          local_48[3] = '\0';
          local_48[4] = '\0';
          local_48[5] = '\0';
          local_48[6] = '\0';
          local_48[7] = '\0';
          stack0xffffffffffffffc0 = 0;
          local_38 = 0;
          uVar6 = 0;
          do {
            cVar1 = FUN_180011220(uVar6 + lVar3);
            local_48[uVar6] = cVar1;
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < 0x12);
          if ((((((local_48[0] == -0xd) && (local_48[1] == '\x0f')) && (local_48[2] == '\x10')) &&
               ((local_48[3] == '\x15' && (local_48[8] == 'H')))) &&
              ((local_48[9] == -0x7f && ((local_48[10] == -0x3f && (uStack_3d == DAT_180ccf8e8))))))
             && ((cStack_39 == '3' && (((char)local_38 == -0x2e && (local_38._1_1_ == -0x17)))))) {
            DAT_180ccf988 = lVar3;
            param_1 = FUN_1802b2560("[nl_view] duck peek view | GetViewOffset = pawn slot %d (%p)",
                                    iVar4,lVar3);
            goto LAB_180047a45;
          }
        }
      }
    }
    param_1 = FUN_1802b2560("[error] nl_view | duck peek view: GetViewOffset slot not found, writing m_vecViewOffset (0x%x) directly"
                            ,DAT_180ccf8e8);
  }
LAB_180047a45:
  if ((DAT_180ccf988 == 0) || (lVar2 = FUN_1800478b0(param_1,in_RCX), lVar2 == 0)) {
    lVar2 = 0;
    if (DAT_180ccf8e8 != 0) {
      lVar2 = in_RCX + (ulonglong)DAT_180ccf8e8;
    }
    if (lVar2 == 0) {
      return 0;
    }
  }
  if (lVar2 - 0x10000U < 0x7ffffffeffff) {
    return lVar2;
  }
  return 0;
}



/* ===== 180047aa0 FUN_180047aa0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180047aa0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined1 local_48 [64];
  
  if (((0x7ffffffefffe < param_1 - 0x10000U) || (DAT_180ccf868 == 0)) || (DAT_180ccf858 == 0)) {
    return 0;
  }
  pfVar4 = (float *)FUN_1800111b0(local_48,param_1 + (ulonglong)DAT_180ccf868);
  fVar1 = *pfVar4;
  fVar2 = pfVar4[1];
  fVar3 = pfVar4[2];
  if ((((fVar1 == DAT_180ccf9b4) && (fVar2 == DAT_180ccf9b8)) && (fVar3 == DAT_180ccf9bc)) ||
     (((pfVar4 = (float *)FUN_1800111b0(local_48,(ulonglong)DAT_180ccf858 + param_1),
       (float)((uint)(fVar1 - DAT_180ccf9b4) & _DAT_1808ade90) <= DAT_1808ac040 &&
       ((float)((uint)(fVar2 - DAT_180ccf9b8) & _DAT_1808ade90) <= DAT_1808ac040)) &&
      (((float)((uint)(fVar3 - DAT_180ccf9bc) & _DAT_1808ade90) <= DAT_1808ac040 &&
       ((((float)((uint)(*pfVar4 - DAT_180ccf9b4) & _DAT_1808ade90) <= DAT_1808ac040 &&
         ((float)((uint)(pfVar4[1] - DAT_180ccf9b8) & _DAT_1808ade90) <= DAT_1808ac040)) &&
        ((float)((uint)(pfVar4[2] - DAT_180ccf9bc) & _DAT_1808ade90) <= DAT_1808ac040)))))))) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* ===== 180047bf0 FUN_180047bf0 ===== */

void FUN_180047bf0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x68))();
  return;
}



/* ===== 180047c10 FUN_180047c10 ===== */

undefined8 FUN_180047c10(longlong *param_1)

{
  (**(code **)(*param_1 + 0x90))();
  return 1;
}



/* ===== 180047c30 FUN_180047c30 ===== */

undefined8 FUN_180047c30(undefined8 param_1)

{
  if (DAT_180962160 == (code *)0x0) {
    return 0;
  }
  (*DAT_180962160)(param_1,0xfffff);
  return 1;
}



/* ===== 180047c60 FUN_180047c60 ===== */

undefined8 FUN_180047c60(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  for (iVar4 = 0; iVar4 < param_2; iVar4 = iVar4 + 1) {
    lVar3 = (longlong)iVar4 * 0x20 + param_1;
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      lVar1 = (longlong)iVar2;
      *(float *)(lVar3 + lVar1 * 4) =
           *(float *)(lVar3 + lVar1 * 4) + *(float *)(param_3 + lVar1 * 4);
    }
  }
  return 1;
}



/* ===== 180047cc0 FUN_180047cc0 ===== */

ulonglong FUN_180047cc0(void)

{
  byte bVar1;
  ushort uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_100 [5];
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0 [4];
  undefined8 local_c0;
  undefined4 local_b8;
  
  if ((((DAT_180ccf85c != 0) && (DAT_180ccf860 != 0)) && (DAT_180ccf868 != 0)) &&
     (DAT_180ccf86c != 0)) {
    lVar3 = FUN_180047bf0();
    in_RAX = lVar3 - 0x10000;
    if (in_RAX < 0x7ffffffeffff) {
      lVar8 = (ulonglong)DAT_180ccf85c + lVar3;
      lVar4 = FUN_18000f3a0(lVar8 + 0x118);
      in_RAX = 0;
      if ((lVar4 != 0) && (in_RAX = FUN_180011200(lVar8 + 0x188), 0 < (int)in_RAX)) {
        lVar4 = FUN_18000f3a0(lVar8 + 400);
        in_RAX = 0;
        if (lVar4 != 0) {
          uVar7 = (ulonglong)DAT_180ccf868;
          puVar5 = (undefined8 *)FUN_1800111b0(&local_e0,uVar7 + lVar3);
          lVar9 = (ulonglong)DAT_180ccf86c + lVar3;
          local_c0 = *puVar5;
          local_b8 = *(undefined4 *)(puVar5 + 1);
          local_d0[0] = 0.0;
          local_d0[1] = 0.0;
          local_d0[2] = 0.0;
          local_d0[3] = 0.0;
          fVar10 = (float)FUN_18000f3d0(lVar9);
          local_d0[0] = fVar10;
          fVar11 = (float)FUN_18000f3d0(lVar8 + 0x160);
          fVar12 = (float)FUN_18000f3d0(lVar8 + 0x170);
          fVar13 = (float)FUN_18000f3d0(lVar9 + 4);
          local_d0[1] = fVar13;
          local_100[4] = (float)FUN_18000f3d0(lVar8 + 0x164);
          fVar14 = (float)FUN_18000f3d0(lVar8 + 0x174);
          local_e8 = (float)FUN_18000f3d0(lVar9 + 8);
          local_d0[2] = local_e8;
          local_ec = (float)FUN_18000f3d0(lVar8 + 0x168);
          fVar15 = (float)FUN_18000f3d0(lVar8 + 0x178);
          uVar16 = FUN_18000f3d0(lVar9 + 0xc);
          local_d0[3] = (float)uVar16;
          fVar17 = (float)FUN_18000f3d0(lVar8 + 0x16c);
          fVar18 = (float)FUN_18000f3d0(lVar8 + 0x17c);
          pfVar6 = (float *)FUN_1800111b0(&local_e0,(ulonglong)DAT_180ccf860 + lVar8);
          fVar19 = *pfVar6;
          fVar23 = pfVar6[1];
          fVar21 = fVar15 * fVar19 - fVar12 * pfVar6[2];
          fVar22 = fVar14 * pfVar6[2] - fVar15 * fVar23;
          fVar21 = fVar21 + fVar21;
          fVar22 = fVar22 + fVar22;
          fVar20 = fVar12 * fVar23 - fVar14 * fVar19;
          fVar20 = fVar20 + fVar20;
          fVar11 = fVar11 - (fVar22 * fVar18 + fVar19 + (fVar20 * fVar14 - fVar21 * fVar15));
          fVar19 = fVar22 * fVar15 - fVar20 * fVar12;
          local_100[3] = fVar17 - 0.0;
          fVar12 = local_ec - (fVar20 * fVar18 + pfVar6[2] + (fVar21 * fVar12 - fVar22 * fVar14));
          fVar23 = local_100[4] - (fVar21 * fVar18 + fVar23 + fVar19);
          local_100[0] = fVar11;
          local_100[1] = fVar23;
          local_100[2] = fVar12;
          local_e0 = fVar11;
          local_dc = fVar23;
          local_d8 = fVar12;
          FUN_180023a50(uVar7 + lVar3,&local_e0,fVar19,fVar11,fVar11);
          lVar4 = 0;
          do {
            FUN_180013280(lVar9 + lVar4 * 4,local_100 + lVar4);
            lVar4 = lVar4 + 1;
          } while (lVar4 != 4);
          FUN_180047c10(lVar3);
          FUN_180047c30(lVar3);
          lVar4 = FUN_18000f3a0(lVar8 + 0x80);
          uVar2 = FUN_180011440(lVar8 + 0x94);
          bVar1 = 0;
          if (((lVar4 != 0) && ((ushort)(uVar2 - 1) < 0x400)) &&
             ((lVar4 - 0x10000U < 0x7ffffffeffff &&
              ((ulonglong)uVar2 * 0x20 + -0x10001 + lVar4 < 0x7ffffffeffff)))) {
            local_100[1] = fVar13 - fVar23;
            local_100[0] = fVar10 - fVar11;
            local_100[2] = local_e8 - fVar12;
            local_100[3] = 0.0;
            bVar1 = FUN_180047c60(lVar4,(ulonglong)uVar2,local_100);
          }
          uVar7 = (ulonglong)DAT_180ccf86c;
          lVar4 = 0;
          do {
            FUN_180013280(lVar3 + uVar7 + lVar4 * 4,local_d0 + lVar4);
            lVar4 = lVar4 + 1;
          } while (lVar4 != 4);
          FUN_180023a50((ulonglong)DAT_180ccf868 + lVar3,&local_c0);
          return (ulonglong)bVar1;
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 180048190 FUN_180048190 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180048190(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *in_RAX;
  longlong lVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float *pfVar9;
  int *piVar10;
  float *pfVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_a8;
  undefined8 local_a4;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  iVar15 = DAT_1809f771c;
  if (-1 < DAT_1809f771c) {
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    in_RAX = (int *)FUN_180090380(&local_88);
    if ((char)in_RAX != '\0') {
      iVar2 = iVar15 + -0x96;
      do {
        if (-1 < iVar15) {
          lVar6 = (longlong)(iVar15 % 0x96);
          lVar16 = lVar6 * 2000;
          iVar3 = (&DAT_180c3df70)[lVar6 * 500];
          in_RAX = (int *)0x0;
          if (iVar3 == iVar15) {
            in_RAX = &DAT_180c3df70 + lVar6 * 500;
          }
          if (in_RAX != (int *)0x0) {
            in_RAX = (int *)(&DAT_180c3e0a0 + lVar16);
            piVar10 = (int *)&DAT_00000130;
            if (iVar3 == iVar15) {
              piVar10 = in_RAX;
            }
            if ((-1 < (int)local_88 - *piVar10) && (iVar1 = iVar15 + 1, -1 < iVar1)) {
              lVar6 = (longlong)(iVar1 % 0x96);
              lVar18 = lVar6 * 2000;
              iVar4 = (&DAT_180c3df70)[lVar6 * 500];
              in_RAX = (int *)0x0;
              if (iVar4 == iVar1) {
                in_RAX = &DAT_180c3df70 + lVar6 * 500;
              }
              if (in_RAX != (int *)0x0) {
                in_RAX = (int *)(&DAT_180c3e0a0 + lVar18);
                piVar10 = (int *)&DAT_00000130;
                if (iVar4 == iVar1) {
                  piVar10 = in_RAX;
                }
                if ((int)local_88 < *piVar10) {
                  pfVar9 = (float *)&DAT_00000010;
                  if (iVar3 == iVar15) {
                    pfVar9 = (float *)(&DAT_180c3df80 + lVar16);
                  }
                  pfVar11 = (float *)&DAT_00000010;
                  if (iVar4 == iVar1) {
                    pfVar11 = (float *)(&DAT_180c3df80 + lVar18);
                  }
                  piVar17 = (int *)&DAT_00000130;
                  if (iVar3 == iVar15) {
                    piVar17 = (int *)(&DAT_180c3e0a0 + lVar16);
                  }
                  fVar20 = ((float)((int)local_88 - *piVar17) + local_88._4_4_) /
                           (float)(*piVar10 - *piVar17);
                  fVar21 = DAT_1808ac34c;
                  if ((fVar20 <= DAT_1808ac34c) && (fVar21 = 0.0, 0.0 <= fVar20)) {
                    fVar21 = fVar20;
                  }
                  puVar7 = (undefined8 *)&DAT_00000014;
                  if (iVar3 == iVar15) {
                    puVar7 = (undefined8 *)(&DAT_180c3df84 + lVar16);
                  }
                  local_a8 = (*pfVar11 - *pfVar9) * fVar21 + *pfVar9;
                  puVar14 = (undefined8 *)&DAT_00000014;
                  if (iVar4 == iVar1) {
                    puVar14 = (undefined8 *)(&DAT_180c3df84 + lVar18);
                  }
                  fVar20 = (float)*puVar7;
                  fVar19 = (float)((ulonglong)*puVar7 >> 0x20);
                  local_a4 = CONCAT44(((float)((ulonglong)*puVar14 >> 0x20) - fVar19) * fVar21 +
                                      fVar19,((float)*puVar14 - fVar20) * fVar21 + fVar20);
                  lVar6 = FUN_18000f3a0((ulonglong)DAT_180ccf854 + param_1);
                  if (((lVar6 == 0) || (0x7ffffffefffe < lVar6 - 0x10000U)) || (DAT_180ccf868 == 0))
                  {
                    DAT_180ccf9c0 = 0;
                    FUN_1800442a0(param_1,&local_a8);
                    if ((lVar6 == 0) || (0x7ffffffefffe < lVar6 - 0x10000U)) goto LAB_1800484e2;
                  }
                  else {
                    if (((DAT_180ccf9c0 == '\0') ||
                        ((DAT_180ccf998 != param_1 || (DAT_180ccf9a0 != lVar6)))) ||
                       (cVar5 = FUN_180047aa0(lVar6), cVar5 == '\0')) {
                      puVar7 = (undefined8 *)
                               FUN_1800111b0(local_98,(ulonglong)DAT_180ccf868 + lVar6);
                      _DAT_180ccf9a8 = *puVar7;
                      _DAT_180ccf9b0 = *(undefined4 *)(puVar7 + 1);
                    }
                    DAT_180ccf9b4 = local_a8;
                    DAT_180ccf9bc = local_a4._4_4_;
                    DAT_180ccf9b8 = (undefined4)local_a4;
                    DAT_180ccf998 = param_1;
                    DAT_180ccf9a0 = lVar6;
                    DAT_180ccf9c0 = FUN_1800442a0(param_1,&local_a8);
                  }
                  FUN_180047cc0(lVar6);
LAB_1800484e2:
                  fVar20 = pfVar11[2];
                  *param_2 = *(undefined8 *)pfVar11;
                  *(float *)(param_2 + 1) = fVar20;
                  puVar12 = (undefined4 *)&DAT_00000078;
                  if (iVar4 == iVar1) {
                    puVar12 = (undefined4 *)(&DAT_180c3dfe8 + lVar18);
                  }
                  *(undefined4 *)((longlong)param_2 + 0xc) = *puVar12;
                  puVar13 = &DAT_00000213;
                  if (iVar4 == iVar1) {
                    puVar13 = &DAT_180c3e183 + lVar18;
                  }
                  *(undefined1 *)(param_2 + 2) = *puVar13;
                  pfVar9 = (float *)&DAT_00000214;
                  if (iVar3 == iVar15) {
                    pfVar9 = (float *)(&DAT_180c3e184 + lVar16);
                  }
                  pfVar11 = (float *)&DAT_00000214;
                  if (iVar4 == iVar1) {
                    pfVar11 = (float *)(&DAT_180c3e184 + lVar18);
                  }
                  pfVar8 = (float *)&DAT_00000250;
                  if (iVar3 == iVar15) {
                    pfVar8 = (float *)(&DAT_180c3e1c0 + lVar16);
                  }
                  fVar20 = *pfVar8;
                  pfVar8 = (float *)&DAT_00000250;
                  if (iVar4 == iVar1) {
                    pfVar8 = (float *)(&DAT_180c3e1c0 + lVar18);
                  }
                  *(float *)((longlong)param_2 + 0x14) = (*pfVar11 - *pfVar9) * fVar21 + *pfVar9;
                  pfVar9 = (float *)&DAT_00000154;
                  if (iVar3 == iVar15) {
                    pfVar9 = (float *)(&DAT_180c3e0c4 + lVar16);
                  }
                  fVar19 = *pfVar9;
                  *(float *)(param_2 + 3) = (*pfVar8 - fVar20) * fVar21 + fVar20;
                  pfVar9 = (float *)&DAT_00000154;
                  if (iVar4 == iVar1) {
                    pfVar9 = (float *)(&DAT_180c3e0c4 + lVar18);
                  }
                  *(float *)((longlong)param_2 + 0x1c) = (*pfVar9 - fVar19) * fVar21 + fVar19;
                  return CONCAT71((int7)((ulonglong)(&DAT_180c3e0c4 + lVar18) >> 8),1);
                }
              }
            }
          }
        }
        if (iVar15 <= iVar2) break;
        iVar15 = iVar15 + -1;
      } while( true );
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



/* ===== 180048630 FUN_180048630 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180048630(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  char cVar13;
  undefined4 *puVar14;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  longlong local_res8;
  undefined8 in_stack_fffffffffffffec8;
  undefined4 uVar23;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  
  uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  FUN_180047570();
  lVar7 = FUN_180045260();
  if (lVar7 == 0) {
LAB_180048edc:
    _DAT_180962c58 = _DAT_180962c58 & 0xff;
    return;
  }
  local_res8 = lVar7;
  pcVar8 = (char *)FUN_1803a0710(&local_res8);
  if ((((pcVar8 == (char *)0x0) || (iVar4 = strcmp(pcVar8,"C_CSPlayerPawn"), iVar4 != 0)) ||
      (cVar3 = FUN_180011220((ulonglong)DAT_180ccf8d4 + lVar7), cVar3 != '\0')) ||
     (((DAT_180ccf844 == 0 || (DAT_180ccf84c == 0)) ||
      ((DAT_180ccf854 == 0 || (DAT_180ccf8e0 == 0)))))) goto LAB_180048edc;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  fStack_b4 = 0.0;
  fStack_b0 = 0.0;
  fStack_ac = 0.0;
  cVar3 = FUN_180048190(lVar7,&local_c8);
  if (cVar3 == '\0') {
    uVar16 = FUN_180011200((ulonglong)DAT_180ccf8e0 + lVar7);
  }
  else {
    uVar16 = uStack_c0._4_4_;
  }
  lVar9 = FUN_18000f3a0((ulonglong)DAT_180ccf844 + lVar7);
  lVar10 = FUN_18000f3a0();
  if (cVar3 == '\0') {
    if (lVar10 == 0) {
      if (((DAT_180ca09f8 != 0) && (lVar15 = FUN_18000f3a0(), lVar15 != 0)) && (DAT_180ca0950 != 0))
      {
        lVar15 = lVar15 + (ulonglong)DAT_180ca0950;
        puVar14 = &local_e8;
        goto LAB_180048826;
      }
      local_108 = 0;
      local_100 = 0.0;
    }
    else {
      puVar14 = &local_d8;
      lVar15 = (ulonglong)DAT_180ccf858 + lVar10;
LAB_180048826:
      puVar11 = (undefined8 *)FUN_1800111b0(puVar14,lVar15);
      local_108 = *puVar11;
      local_100 = *(float *)(puVar11 + 1);
    }
    fVar22 = 0.0;
    local_f8 = local_108;
    local_f0 = local_100;
    if (lVar9 == 0) {
      cVar3 = '\x01';
      fVar18 = 0.0;
      fVar21 = 0.0;
    }
    else {
      fVar21 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf848 + lVar9);
      fVar18 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf84c + lVar9);
      cVar3 = FUN_180011220();
      cVar3 = cVar3 != '\0';
      if (((lVar10 != 0) && (DAT_180ccf85c != 0)) && (DAT_180ccf860 != 0)) {
        fVar22 = (float)FUN_18000f3d0();
      }
    }
  }
  else {
    local_100 = (float)uStack_c0;
    local_108 = local_c8;
    local_f8 = local_c8;
    local_f0 = (float)uStack_c0;
    fVar18 = fStack_b0;
    fVar21 = fStack_b4;
    fVar22 = fStack_ac;
    cVar3 = (char)local_b8;
  }
  if (((uint)fVar21 & 0x7f800000) == 0x7f800000) {
    fVar21 = 0.0;
  }
  if (((uint)fVar18 & 0x7f800000) == 0x7f800000) {
    fVar18 = 0.0;
  }
  if (((uint)fVar22 & 0x7f800000) == 0x7f800000) {
    fVar22 = 0.0;
  }
  if (fVar21 <= DAT_1808abfbc) {
    if (DAT_180962c5a != '\0') goto LAB_18004894f;
    if (fVar18 < 0.0) {
      fVar18 = 0.0;
    }
  }
  else {
    _DAT_180962c58 = CONCAT12(1,_DAT_180962c58);
LAB_18004894f:
    if ((((uVar16 & 1) != 0) && (fVar21 <= DAT_1808abfbc)) && (_DAT_1808acd20 <= fVar18)) {
      _DAT_180962c58 = _DAT_180962c58 & 0xffff;
    }
  }
  bVar17 = true;
  DAT_180962c50 = fVar18 + DAT_1808acab0 + fVar22;
  iVar4 = *(int *)(PTR_DAT_180c873b8 + 0xc);
  if (cVar3 == '\0') {
    if (0.0 <= fVar18) {
      bVar17 = false;
      uVar16 = (uint)DAT_180c8c1e8 & 4;
      goto LAB_180048b80;
    }
    local_100 = local_f0;
    local_108 = local_f8;
    if ((uVar16 & 1) == 0) {
      local_100 = local_f0 - DAT_1808ac844;
    }
    local_c8 = _DAT_1808ad2c0;
    uStack_c0 = _UNK_1808ad2c8;
    local_b8 = 0;
    fStack_b4 = 0.0;
    fStack_b0 = 0.0;
    fStack_ac = 0.0;
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0x3f800000;
    local_d8 = 0xc1800000;
    local_d4 = 0xc1800000;
    local_d0 = 0;
    local_e8 = 0x41800000;
    local_e4 = 0x41800000;
    local_e0 = 0x42900000;
    lVar9 = lVar7;
    cVar3 = FUN_1802aed00(&local_f8,&local_108,&local_d8,&local_e8,lVar7,0x1c1003,4,7,&local_c8,0);
    uVar23 = (undefined4)((ulonglong)lVar9 >> 0x20);
    if (cVar3 == '\0') goto LAB_180048b6d;
    if (local_9c._1_1_ == '\0') {
      if ((float)local_c8 == DAT_1808ac34c) {
        bVar17 = false;
        uVar16 = (uint)DAT_180c8c1e8 & 4;
        goto LAB_180048b80;
      }
      if (DAT_180962ca0 == 0) {
        if (DAT_180962ca8 == '\0') {
          DAT_180962ca0 = FUN_180264b70(PTR_s_sv_standable_normal_180962c98);
          DAT_180962ca8 = DAT_180962ca0 == 0;
          if (DAT_180962ca0 != 0) goto LAB_180048b37;
          FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_sv_standable_normal_180962c98)
          ;
        }
        if (DAT_180962ca0 != 0) goto LAB_180048b37;
LAB_180048b5d:
        fVar5 = DAT_1808ac254;
      }
      else {
LAB_180048b37:
        fVar5 = (float)FUN_180264d70();
        local_res8 = CONCAT44(local_res8._4_4_,fVar5);
        if (((uint)fVar5 & 0x7f800000) == 0x7f800000) goto LAB_180048b5d;
      }
      bVar17 = fStack_b0 < fVar5;
      goto LAB_180048b6d;
    }
    uVar16 = (uint)DAT_180c8c1e8 & 4;
LAB_180048a9c:
    bVar1 = true;
  }
  else {
LAB_180048b6d:
    uVar16 = (uint)DAT_180c8c1e8 & 4;
    if (bVar17 != false) goto LAB_180048a9c;
LAB_180048b80:
    if (uVar16 != 0) goto LAB_180048a9c;
    bVar1 = false;
  }
  if ((iVar4 == 0) || (bVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (fVar18 <= 0.0) {
    fVar5 = fVar18;
    if (fVar18 <= DAT_1808ace34) {
      fVar5 = DAT_1808ace34;
    }
  }
  else {
    fVar5 = 0.0;
  }
  if (DAT_180962c59 == '\0') {
    if (bVar2) {
      _DAT_180962c58 = CONCAT12(DAT_180962c5a,0x100);
      cVar13 = '\0';
      fVar19 = 0.0;
      DAT_180962c54 = fVar5;
      goto LAB_180048d01;
    }
    fVar19 = fVar18;
  }
  else {
    if (bVar1) {
      cVar13 = '\x01';
      cVar3 = DAT_180962c58 == '\0';
LAB_180048c6c:
      _DAT_180962c58 = CONCAT21(_DAT_180962c59,cVar13);
      if (cVar3 != '\0') {
        fVar19 = 0.0;
        goto LAB_180048d01;
      }
    }
    else {
      if (bVar2) {
        cVar13 = '\0';
        cVar3 = DAT_180962c58;
        goto LAB_180048c6c;
      }
      cVar13 = DAT_180962c58;
    }
    if (DAT_180961a50 == 0) {
LAB_180048cbf:
      fVar19 = 0.0;
    }
    else {
      lVar9 = FUN_18000f3a0(DAT_180961a50);
      if (lVar9 == 0) {
        cVar13 = DAT_180962c58;
        goto LAB_180048cbf;
      }
      fVar19 = (float)FUN_18000f3d0(lVar9 + 0x34);
      cVar13 = DAT_180962c58;
    }
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    if (fVar19 <= DAT_1808ac090) {
      fVar19 = fVar19 * _DAT_1808acbb0;
    }
    else {
      fVar19 = DAT_1808ac934;
    }
    if (((uint)fVar19 & 0x7f800000) == 0x7f800000) {
      fVar19 = 0.0;
    }
LAB_180048d01:
    if (cVar13 == '\0') {
      fVar20 = 0.0;
    }
    else {
      fVar20 = fVar5;
    }
    if (fVar20 - DAT_180962c54 <= fVar19) {
      if (fVar20 - DAT_180962c54 < (float)((uint)fVar19 ^ DAT_1808adec0)) {
        fVar20 = DAT_180962c54 - fVar19;
      }
    }
    else {
      fVar20 = fVar19 + DAT_180962c54;
    }
    DAT_180962c54 = fVar20;
    if (fVar20 <= fVar5) {
      DAT_180962c54 = fVar5;
    }
    if (((cVar13 != '\0') && (DAT_180962c54 == fVar5)) ||
       ((fVar19 = DAT_180962c54, !bVar2 && ((cVar13 == '\0' && (_DAT_1808acd2c <= fVar5)))))) {
      _DAT_180962c58 = (ushort)DAT_180962c58;
      fVar19 = fVar5;
    }
    pfVar12 = (float *)FUN_1800478d0(lVar7);
    if (pfVar12 != (float *)0x0) {
      if ((((DAT_180962c68 == '\0') || (DAT_180962c60 != lVar7)) || (*pfVar12 != 0.0)) ||
         ((pfVar12[1] != 0.0 || (pfVar12[2] != _DAT_180962c6c)))) {
        DAT_180962c74 = pfVar12[1];
        DAT_180962c78 = pfVar12[2];
        DAT_180962c70 = *pfVar12;
      }
      pfVar12[0] = 0.0;
      pfVar12[1] = 0.0;
      _DAT_180962c6c = fVar19 + DAT_1808acab0 + fVar22;
      pfVar12[2] = _DAT_180962c6c;
      DAT_180962c68 = '\x01';
      DAT_180962c60 = lVar7;
    }
    if (DAT_180962c59 != '\0') {
      iVar6 = (DAT_180962c58 != '\0') + 1;
      goto LAB_180048bed;
    }
  }
  iVar6 = 0;
LAB_180048bed:
  if (iVar6 != DAT_180962c7c) {
    if (iVar6 == 0) {
      pcVar8 = "off";
    }
    else {
      pcVar8 = "following the body";
      if (iVar6 == 1) {
        pcVar8 = "standing eye";
      }
    }
    DAT_180962c7c = iVar6;
    FUN_1802b2560("[nl_view] duck peek view | %s | dpa mode %d blocked %d user duck %d | duck %.2f view %.2f root %.2f -> shown %.2f base z %.2f"
                  ,pcVar8,iVar4,bVar17,CONCAT44(uVar23,(uint)(uVar16 != 0)),(double)fVar21,
                  (double)fVar18,(double)fVar22,(double)fVar19,(double)DAT_180962c50);
  }
  return;
}



/* ===== 180048ef0 FUN_180048ef0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180048ef0(void)

{
  longlong lVar1;
  float *pfVar2;
  
  if (DAT_180962c68 != '\0') {
    DAT_180962c68 = '\0';
    lVar1 = FUN_180045260();
    if ((((lVar1 != 0) && (lVar1 == DAT_180962c60)) &&
        (pfVar2 = (float *)FUN_1800478d0(lVar1), pfVar2 != (float *)0x0)) &&
       (((*pfVar2 == 0.0 && (pfVar2[1] == 0.0)) && (pfVar2[2] == _DAT_180962c6c)))) {
      *pfVar2 = DAT_180962c70;
      pfVar2[1] = DAT_180962c74;
      pfVar2[2] = DAT_180962c78;
    }
  }
  return;
}



/* ===== 180048f80 FUN_180048f80 ===== */

float * FUN_180048f80(float *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong local_res8;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  
  if (((((DAT_180962c68 == '\0') || (param_2 != DAT_180962c60)) ||
       (lVar4 = FUN_180045260(), param_2 != lVar4)) ||
      ((param_2 == 0 || (cVar1 = FUN_180011220((ulonglong)DAT_180ccf8d4 + param_2), cVar1 != '\0')))
      ) || (DAT_180ccf864 == 0)) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    return param_1;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
  }
  else {
    local_res8 = DAT_181108a00;
  }
  if (local_res8 != 0) {
    iVar2 = FUN_180011200((ulonglong)DAT_180ccf910 + local_res8);
    iVar3 = FUN_180011200((ulonglong)DAT_180ccf864 + local_res8);
    if ((iVar2 == iVar3) && (pfVar5 = (float *)FUN_1800478d0(param_2), pfVar5 != (float *)0x0)) {
      fVar8 = 0.0 - *pfVar5;
      if ((((uint)fVar8 & 0x7f800000) == 0x7f800000) ||
         ((fVar7 = 0.0 - pfVar5[1], ((uint)fVar7 & 0x7f800000) == 0x7f800000 ||
          (fVar6 = (DAT_180962c50 - pfVar5[2]) * DAT_1808ac140,
          ((uint)fVar6 & 0x7f800000) == 0x7f800000)))) {
        param_1[0] = 0.0;
        param_1[1] = 0.0;
        param_1[2] = 0.0;
        return param_1;
      }
      local_68 = 0;
      local_60 = 0.0;
      local_78 = 0;
      local_70 = 0.0;
      local_58 = 0;
      local_50 = 0.0;
      FUN_1803a19a0(param_3,&local_68,&local_78,&local_58);
      *param_1 = (float)local_58 * fVar6 + (float)local_68 * fVar7 + (float)local_78 * fVar8;
      param_1[1] = local_58._4_4_ * fVar6 + local_68._4_4_ * fVar7 + local_78._4_4_ * fVar8;
      param_1[2] = local_50 * fVar6 + local_60 * fVar7 + local_70 * fVar8;
      return param_1;
    }
  }
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return param_1;
}



/* ===== 180049210 FUN_180049210 ===== */

undefined8 FUN_180049210(undefined8 param_1)

{
  return param_1;
}



/* ===== 180049220 FUN_180049220 ===== */

bool FUN_180049220(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x38) != '\v') {
      return true;
    }
    if (DAT_180ccf96c != 0) {
      lVar2 = FUN_18000f3a0(param_2 + (ulonglong)DAT_180ccf96c);
      if ((lVar2 != 0) && (DAT_180ccf980 != 0)) {
        cVar1 = FUN_180011220((ulonglong)DAT_180ccf980 + lVar2 + (ulonglong)DAT_180ccf970);
        return cVar1 != '\x10';
      }
    }
  }
  return false;
}



/* ===== 180049280 FUN_180049280 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180049280(void)

{
  float fVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  longlong lVar10;
  float *pfVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  float *pfVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_328 [32];
  undefined ***local_308;
  undefined1 *local_300;
  undefined1 local_2f8 [8];
  float local_2f0;
  float fStack_2ec;
  float local_2e8;
  undefined8 local_2e0;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  int local_2c4 [2];
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  undefined1 local_2a0 [24];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined8 local_270;
  undefined8 local_268;
  undefined1 local_260;
  undefined8 local_25f;
  undefined8 local_257;
  undefined4 local_24f;
  undefined2 local_24b;
  undefined1 local_249;
  undefined **local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined2 local_218;
  undefined6 uStack_216;
  undefined2 uStack_210;
  undefined6 uStack_20e;
  undefined8 local_208;
  ulonglong uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [48];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  float local_11c;
  undefined4 local_114;
  undefined2 local_110;
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_328;
  if (DAT_180ccf810 == 0) {
    uVar8 = FUN_180045260();
  }
  else {
    lVar6 = FUN_18000f3a0();
    uVar7 = FUN_180045260();
    uVar8 = uVar7;
    if (((lVar6 != 0) && (uVar7 != 0)) && (uVar8 = FUN_180047310(), (char)uVar8 != '\0')) {
      piVar16 = local_2c4;
      if (0xe < DAT_18095cf88) {
        piVar16 = &DAT_18095cf88;
      }
      piVar9 = local_2c4 + 1;
      if (DAT_18095cf88 < 0xfb) {
        piVar9 = piVar16;
      }
      local_2c4[1] = 0xfa;
      fVar22 = 0.0;
      local_2c4[0] = 0xf;
      fVar23 = (float)*piVar9;
      if (((DAT_180ca09f8 == 0) || (lVar10 = FUN_18000f3a0(uVar7 + DAT_180ca09f8), lVar10 == 0)) ||
         (DAT_180ca0950 == 0)) {
        fStack_2ec = 0.0;
        local_2f0 = 0.0;
        local_2e8 = 0.0;
      }
      else {
        pfVar11 = (float *)FUN_1800111b0(&local_2e0,lVar10 + (ulonglong)DAT_180ca0950);
        local_2f0 = *pfVar11;
        fStack_2ec = pfVar11[1];
        local_2e8 = pfVar11[2];
      }
      if (DAT_180ccf8e8 == 0) {
        uVar20 = 0;
        fVar17 = 0.0;
        fVar18 = DAT_1808acab0;
      }
      else {
        puVar12 = (undefined8 *)FUN_1800111b0(local_2a0,uVar7 + DAT_180ccf8e8);
        uVar20 = *puVar12;
        local_2e0._4_4_ = (float)((ulonglong)uVar20 >> 0x20);
        fVar17 = local_2e0._4_4_;
        fVar18 = *(float *)(puVar12 + 1);
        local_2e0 = uVar20;
      }
      local_2f0 = local_2f0 + (float)uVar20;
      local_2e8 = local_2e8 + fVar18;
      fStack_2ec = fStack_2ec + fVar17;
      FUN_1800111b0(local_2a0,(ulonglong)DAT_180961fb4 + lVar6);
      fVar17 = (float)FUN_180517200();
      fVar18 = (float)FUN_180517200();
      local_2b0 = local_2f0 - fVar18 * fVar17 * fVar23;
      fVar18 = (float)FUN_180517790();
      local_2ac = fStack_2ec - fVar18 * fVar17 * fVar23;
      uVar19 = FUN_180517790();
      fVar18 = DAT_1808ac34c;
      local_2a8 = local_2e8 - (float)(uVar19 ^ DAT_1808adec0) * fVar23;
      fVar17 = fVar18;
      if (((DAT_180961f40 != 0) && (lVar10 = FUN_18000f3a0(), lVar10 != 0)) && (DAT_180961f48 != 0))
      {
        local_270 = 0;
        local_218 = 0;
        uStack_216 = 0;
        uStack_210 = 0;
        uStack_20e = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_268 = 0;
        local_25f = 0;
        local_257 = 0;
        local_24f = 0;
        local_24b = 0;
        local_249 = 0;
        FUN_180540170(local_1c8,0,0x140);
        local_288 = _DAT_1808add30;
        uStack_280 = _UNK_1808add38;
        local_228 = _DAT_1808adf90;
        uStack_220 = _UNK_1808adf98;
        local_278 = 0x41000000;
        local_274 = 0x41000000;
        local_260 = 2;
        local_248 = &PTR_FUN_180962c88;
        local_240 = 0x42;
        local_238 = 0x40808;
        local_230 = 0x40000;
        uVar4 = FUN_1800451f0(uVar7);
        local_228 = CONCAT44(local_228._4_4_,uVar4);
        if (((DAT_180ccf96c == 0) || (lVar13 = FUN_18000f3a0(uVar7 + DAT_180ccf96c), lVar13 == 0))
           || ((DAT_180ccf974 != 0 &&
               (uVar8 = FUN_180011220((ulonglong)DAT_180ccf974 + lVar13), (uVar8 & 4) != 0)))) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = 0xffffffff;
          if (((DAT_180ccf978 != 0) && (iVar5 = FUN_180011200(uVar7 + DAT_180ccf978), iVar5 != -1))
             && (plVar14 = (longlong *)FUN_1803a0940(&local_2e0,iVar5), *plVar14 != 0)) {
            uVar4 = FUN_1800451f0();
          }
        }
        uStack_220 = CONCAT44(uStack_220._4_4_,uVar4);
        if (DAT_180ccf96c == 0) {
          uVar3 = 0;
        }
        else {
          lVar13 = FUN_18000f3a0(uVar7 + DAT_180ccf96c);
          uVar3 = 0;
          if (lVar13 != 0) {
            uVar3 = 0;
            if (DAT_180ccf97c != 0) {
              uVar3 = FUN_180011440((ulonglong)DAT_180ccf97c + (ulonglong)DAT_180ccf970 + lVar13);
            }
          }
        }
        local_208 = CONCAT71(local_208._1_7_,1);
        uStack_216 = 0xf00ffff0000;
        uStack_210 = 0x4b0b;
        local_114 = 0xffffffff;
        local_110 = 0xffff;
        local_300 = local_1c8;
        local_308 = &local_248;
        local_198 = _DAT_1808adae0;
        uStack_190 = _UNK_1808adae8;
        local_188 = _DAT_1808adae0;
        uStack_180 = _UNK_1808adae8;
        local_11c = 1.0;
        local_218 = uVar3;
        uStack_200 = uVar7;
        cVar2 = FUN_180044180(lVar10,&local_288,&local_2f0,&local_2b0);
        if ((cVar2 != '\0') && (local_2d0 = local_11c, ((uint)local_11c & 0x7f800000) != 0x7f800000)
           ) {
          local_2b8 = 1.0;
          local_2bc = 0.0;
          pfVar11 = &local_2bc;
          if (0.0 <= local_11c) {
            pfVar11 = &local_2d0;
          }
          pfVar15 = &local_2b8;
          if (local_11c <= fVar18) {
            pfVar15 = pfVar11;
          }
          fVar17 = *pfVar15;
        }
      }
      fVar1 = DAT_180ccf838;
      local_2e0._0_4_ = DAT_180ccf838;
      if (fVar18 <= fVar17 * fVar23) {
        fVar18 = fVar17 * fVar23;
      }
      DAT_180962c80 = fVar17;
      DAT_180962c84 = fVar18;
      if (DAT_180ccf838 <= fVar18) {
        fVar23 = (float)((uint)(fVar18 - DAT_180ccf838) & _DAT_1808ade90);
        if (DAT_1808abf94 < fVar23) {
          if (DAT_180961a50 == 0) {
            local_2c8 = 0.1;
            local_2cc = 0.0001;
            fVar21 = DAT_1808ac0c0;
            fVar17 = DAT_1808abfa0;
          }
          else {
            lVar10 = FUN_18000f3a0();
            fVar21 = DAT_1808ac0c0;
            fVar17 = DAT_1808abfa0;
            local_2c8 = 0.1;
            local_2cc = 0.0001;
            if (lVar10 != 0) {
              fVar22 = (float)FUN_18000f3d0(lVar10 + 0x34);
            }
          }
          local_2b4 = fVar22;
          pfVar11 = &local_2cc;
          if (fVar17 <= fVar22) {
            pfVar11 = &local_2b4;
          }
          pfVar15 = &local_2c8;
          if (fVar22 <= fVar21) {
            pfVar15 = pfVar11;
          }
          fVar23 = fVar23 * *pfVar15 * DAT_1808ac950;
          fVar22 = DAT_1808abf94;
          if (DAT_1808abf94 <= fVar23) {
            fVar22 = fVar23;
          }
          if (fVar18 <= fVar1) {
            local_2e0._0_4_ = fVar1 - fVar22;
            if (fVar1 - fVar22 <= fVar18) {
              local_2e0._0_4_ = fVar18;
            }
          }
          else {
            local_2e0._0_4_ = fVar22 + fVar1;
            if (fVar18 <= fVar22 + fVar1) {
              local_2e0._0_4_ = fVar18;
            }
          }
        }
      }
      else {
        local_2e0._0_4_ = fVar18;
      }
      DAT_180ccf838 = (float)local_2e0;
      if (DAT_18095cf85 == '\0') {
        if ((DAT_180ca15bc != '\0') && ((float)local_2e0 == fVar18)) {
          DAT_180ca12ea = 1;
        }
        if (DAT_180ca12ee == '\0') {
          fVar22 = (float)FUN_1800474e0();
          if (fVar22 <= fVar18) {
            DAT_180ca15bc = '\x01';
          }
          else {
            DAT_180ca12ea = 1;
          }
        }
      }
      else {
        DAT_180ca12ea = 0;
        DAT_180ca15bc = (float)local_2e0 == fVar18;
      }
      local_2f8[0] = 1;
      FUN_1800233d0((ulonglong)DAT_180961fb8 + lVar6,local_2f8);
      FUN_180013280((ulonglong)DAT_180961fc4 + lVar6,&local_2e0);
      local_2e0 = (ulonglong)(uint)local_2e0._4_4_ << 0x20;
      FUN_180013280((ulonglong)DAT_180961fc8 + lVar6,&local_2e0);
      LOCK();
      uVar8 = (ulonglong)DAT_180ca12ef;
      UNLOCK();
      DAT_180ca12ee = 1;
      DAT_180ca12ef = 1;
      DAT_180ca15bb = 1;
      return uVar8;
    }
  }
  LOCK();
  UNLOCK();
  DAT_180ccf838 = 0.0;
  DAT_180ca15bc = 0;
  DAT_180ca12ef = 0;
  DAT_180ca12ee = 0;
  DAT_180ca12ea = 0;
  return uVar8;
}



/* ===== 1800499c0 FUN_1800499c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800499c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [32];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (DAT_180ca15ba != '\0') {
    cVar1 = FUN_180044350();
    if ((cVar1 != '\0') && (param_1 != 0)) {
      lVar2 = FUN_18000f3a0(param_1);
      if (lVar2 == DAT_180ccf790) {
        lVar2 = FUN_18000f3a0(param_1 + 0x38);
        if (lVar2 != 0) {
          if (DAT_180ccf8ec == 0) {
            lVar3 = 0;
LAB_180049a72:
            local_68 = 0;
            local_60 = 0;
          }
          else {
            lVar3 = FUN_18000f3a0(lVar2 + (ulonglong)DAT_180ccf8ec);
            if (lVar3 == 0) goto LAB_180049a72;
            local_68 = FUN_180011200((ulonglong)DAT_180ccf914 + lVar3);
            local_60 = FUN_180011200((ulonglong)DAT_180ccf918 + lVar3);
          }
          if (DAT_180ccf8b8 == 0) {
            local_5c = 0;
          }
          else {
            local_5c = FUN_180011200(param_1 + (ulonglong)DAT_180ccf8b8);
          }
          if ((DAT_18095cf90 != '\0') && (DAT_180ccf8b8 != 0)) {
            local_64 = 0;
            FUN_180013280((ulonglong)DAT_180ccf8b8 + param_1,&local_64);
          }
          if ((DAT_18095cf91 != '\0') && (lVar3 != 0)) {
            local_64 = 0;
            FUN_180013280((ulonglong)DAT_180ccf914 + lVar3,&local_64);
            local_64 = 0;
            FUN_180013280((ulonglong)DAT_180ccf918 + lVar3,&local_64);
          }
          if ((DAT_180ccf8f8 != 0) && (DAT_180ccf8c0 != 0)) {
            cVar1 = FUN_180011220((ulonglong)DAT_180ccf8d4 + lVar2);
            if (cVar1 == '\0') {
              puVar4 = (undefined8 *)FUN_1800111b0(local_58,(ulonglong)DAT_180ccf8c0 + lVar2);
              _DAT_180ccf870 = *puVar4;
              _DAT_180ccf878 = *(undefined4 *)(puVar4 + 1);
              DAT_180ca12ed = '\x01';
            }
            else if (DAT_180ca12ed != '\0') {
              FUN_180023a50((ulonglong)DAT_180ccf8f8 + lVar2,&DAT_180ccf870);
            }
          }
          DAT_180ccf828 = DAT_180ccf828 + 1;
          (*DAT_180ccf9d8)(param_1,param_2,param_3,param_4,param_5,param_6);
          DAT_180ccf828 = DAT_180ccf828 + -1;
          FUN_180045d20(lVar2);
          if (lVar3 != 0) {
            FUN_180013280((ulonglong)DAT_180ccf918 + lVar3,&local_60);
            FUN_180013280((ulonglong)DAT_180ccf914 + lVar3,&local_68);
          }
          if (DAT_180ccf8b8 != 0) {
            FUN_180013280(param_1 + (ulonglong)DAT_180ccf8b8,&local_5c);
          }
          goto LAB_180049c26;
        }
      }
    }
  }
  (*DAT_180ccf9d8)(param_1,param_2,param_3,param_4,param_5,param_6);
LAB_180049c26:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 180049c40 FUN_180049c40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180049c40(longlong param_1,longlong param_2,longlong param_3,float param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  float *pfVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_b8 [176];
  
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_18000f3a0((ulonglong)DAT_180ccf8d8 + 8 + param_3);
  }
  iVar2 = FUN_180011200((ulonglong)DAT_180ccf954 + lVar3);
  fVar11 = DAT_1808ac34c;
  fVar16 = DAT_1808ac294;
  if (0 < iVar2) {
    iVar2 = FUN_180011200((ulonglong)DAT_180ccf938 + param_3);
    if (0 < iVar2) {
      fVar14 = fVar16;
      goto LAB_180049ced;
    }
  }
  fVar14 = fVar11;
LAB_180049ced:
  uVar6 = FUN_18000f3d0(param_1 + 0x1350);
  fVar7 = (float)FUN_18000f3d0(param_1 + 0x1360);
  fVar8 = (float)FUN_180517790(uVar6);
  fVar8 = fVar8 * fVar7 * fVar14;
  uVar4 = FUN_180011200((ulonglong)DAT_180ccf8e0 + param_2);
  if ((uVar4 & 1) == 0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = fVar11;
  }
  fVar13 = fVar8 * DAT_1808ac0c0 * fVar14;
  fVar14 = fVar8 * DAT_1808ac0e8 * fVar14;
  fVar9 = (float)FUN_180517200(uVar6);
  fVar15 = fVar9 * fVar8 * DAT_1808ac0d4;
  pfVar5 = (float *)FUN_1800111b0(local_b8,param_1 + 0x1364);
  fVar8 = *pfVar5;
  fVar9 = pfVar5[1];
  fVar1 = pfVar5[2];
  iVar2 = FUN_1800451f0(param_1);
  if ((DAT_180962d5c == '\0') || (DAT_180962d40 != iVar2)) {
    DAT_180962d50 = fVar8 - fVar13;
    DAT_180962d5c = '\x01';
    fVar11 = fVar9 - fVar14;
    fVar16 = fVar1 - fVar15;
    DAT_180962d40 = iVar2;
  }
  else {
    if (param_4 / DAT_1808ac03c <= fVar11) {
      fVar16 = param_4 / DAT_1808ac03c;
    }
    uVar10 = FUN_18000f3d0(param_1 + 0x1354);
    fVar12 = (float)(uVar10 & _DAT_1808ade90) * DAT_1808acdc0;
    fVar11 = (float)FUN_18000f3d0(param_1 + 0x1358);
    fVar15 = (fVar15 - DAT_180962d4c) * fVar16 + DAT_180962d4c;
    fVar13 = (fVar13 - DAT_180962d44) * fVar16 + DAT_180962d44;
    fVar12 = (fVar12 - DAT_180962d50) * fVar16 + DAT_180962d50;
    fVar14 = (fVar14 - DAT_180962d48) * fVar16 + DAT_180962d48;
    fVar11 = (fVar11 * DAT_1808ac1b0 - DAT_180962d54) * fVar16 + DAT_180962d54;
    DAT_180962d50 = (fVar8 - (fVar13 + fVar12)) + fVar12;
    fVar16 = (fVar7 * DAT_1808acd84 - DAT_180962d58) * fVar16 + DAT_180962d58;
    fVar11 = (fVar9 - (fVar11 + fVar14)) + fVar11;
    fVar16 = (fVar1 - (fVar16 + fVar15)) + fVar16;
  }
  *param_5 = fVar13;
  param_5[1] = fVar14;
  param_5[2] = fVar15;
  DAT_180962d54 = fVar11;
  DAT_180962d58 = fVar16;
  *param_6 = DAT_180962d50;
  param_6[1] = fVar11;
  param_6[2] = fVar16;
  DAT_180962d44 = fVar13;
  DAT_180962d4c = fVar15;
  DAT_180962d48 = fVar14;
  return;
}



/* ===== 180049fb0 FUN_180049fb0 ===== */

void FUN_180049fb0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = DAT_1808ac014;
  fVar4 = *param_1 * DAT_1808ac014;
  fVar1 = (float)FUN_180517790(fVar4);
  fVar4 = (float)FUN_180517200(fVar4);
  fVar5 = param_1[1] * fVar6;
  fVar2 = (float)FUN_180517790(fVar5);
  fVar5 = (float)FUN_180517200(fVar5);
  fVar6 = param_1[2] * fVar6;
  fVar3 = (float)FUN_180517790(fVar6);
  fVar6 = (float)FUN_180517200(fVar6);
  param_2[3] = fVar2 * fVar4;
  *param_2 = fVar5 * fVar4;
  param_2[6] = (float)((uint)fVar1 ^ DAT_1808adec0);
  param_2[1] = fVar3 * fVar1 * fVar5 - fVar6 * fVar2;
  param_2[4] = fVar3 * fVar1 * fVar2 + fVar6 * fVar5;
  param_2[7] = fVar3 * fVar4;
  param_2[2] = fVar6 * fVar1 * fVar5 + fVar3 * fVar2;
  param_2[8] = fVar6 * fVar4;
  param_2[5] = fVar6 * fVar1 * fVar2 - fVar3 * fVar5;
  return;
}



/* ===== 18004a130 FUN_18004a130 ===== */

float * FUN_18004a130(float *param_1,undefined8 param_2,undefined4 param_3)

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
  float fVar10;
  float fVar11;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  
  local_b8 = 0.0;
  local_90 = 0.0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_180049fb0(param_2,&local_d8);
  local_e8 = 0;
  fVar11 = 0.0;
  local_e0 = 0;
  local_e4 = param_3;
  FUN_180049fb0(&local_e8,&local_b0);
  fVar5 = (float)local_d8;
  fVar1 = uStack_d0._4_4_;
  fVar3 = (float)uStack_c0;
  fVar4 = uStack_c0._4_4_;
  fVar8 = (float)uStack_98 * local_b8;
  fVar10 = local_d8._4_4_ * uStack_a8._4_4_ + (float)local_d8 * (float)local_b0 +
           (float)uStack_98 * (float)uStack_d0;
  fVar2 = (float)uStack_c0 * (float)local_b0;
  fVar9 = (float)local_c8 * uStack_a8._4_4_ + uStack_d0._4_4_ * (float)local_b0 +
          (float)uStack_98 * local_c8._4_4_;
  fVar6 = uStack_c0._4_4_ * uStack_a8._4_4_;
  fVar7 = fVar10 * fVar10 + fVar9 * fVar9;
  if (fVar7 < 0.0) {
    fVar7 = (float)FUN_18051af10(fVar7);
  }
  else {
    fVar7 = SQRT(fVar7);
  }
  if (fVar7 <= DAT_1808abfbc) {
    fVar10 = (float)local_c8 * (float)local_a0 + fVar1 * local_b0._4_4_ +
             uStack_98._4_4_ * local_c8._4_4_;
    fVar9 = (float)((uint)(local_d8._4_4_ * (float)local_a0 + fVar5 * local_b0._4_4_ +
                          uStack_98._4_4_ * (float)uStack_d0) ^ DAT_1808adec0);
  }
  else {
    fVar11 = (float)FUN_180516b00(fVar4 * (float)local_a0 + fVar3 * local_b0._4_4_ +
                                  uStack_98._4_4_ * local_b8,
                                  fVar4 * local_a0._4_4_ + fVar3 * (float)uStack_a8 +
                                  local_90 * local_b8);
    fVar11 = fVar11 * DAT_1808aca94;
  }
  fVar3 = (float)FUN_180516b00(fVar9,fVar10);
  fVar3 = fVar3 * DAT_1808aca94;
  fVar4 = (float)FUN_180516b00((uint)(fVar6 + fVar2 + fVar8) ^ DAT_1808adec0,fVar7);
  fVar1 = DAT_1808acbd0;
  fVar5 = DAT_1808ac1f4;
  fVar4 = fVar4 * DAT_1808aca94;
  fVar2 = (float)FUN_18053f0d0(fVar4 / DAT_1808acbd0 + DAT_1808ac1f4);
  *param_1 = fVar4 - fVar2 * fVar1;
  fVar4 = (float)FUN_18053f0d0(fVar3 / fVar1 + fVar5);
  param_1[1] = fVar3 - fVar4 * fVar1;
  fVar5 = (float)FUN_18053f0d0(fVar11 / fVar1 + fVar5);
  param_1[2] = fVar11 - fVar5 * fVar1;
  return param_1;
}



/* ===== 18004a430 FUN_18004a430 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18004a430(float *param_1,float *param_2)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  undefined8 *puVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  char local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined8 local_118;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined8 local_f0;
  float local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_198;
  lVar6 = FUN_1800452c0();
  if (DAT_180961a50 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_18000f3a0();
  }
  if (lVar6 == 0) {
    return;
  }
  if (lVar7 == 0) {
    return;
  }
  fVar27 = *param_1;
  fVar28 = param_1[1];
  fVar23 = param_2[1];
  fVar16 = *param_2;
  fVar32 = param_2[2];
  fVar30 = param_1[2];
  local_154 = fVar23;
  local_150 = fVar27;
  local_148 = fVar16;
  local_144 = fVar23;
  local_140 = fVar32;
  local_130 = fVar28;
  local_f4 = fVar30;
  fVar15 = (float)FUN_18000f3d0(lVar7 + 0x34);
  local_fc = fVar15;
  if ((DAT_180ccf8fc == 0) || (iVar4 = FUN_180011200(lVar6 + (ulonglong)DAT_180ccf8fc), iVar4 == -1)
     ) {
    lVar14 = 0;
  }
  else {
    plVar8 = (longlong *)FUN_1803a0940(&local_118,iVar4);
    lVar14 = *plVar8;
  }
  lVar9 = FUN_18000f3a0((ulonglong)DAT_180ccf8d0 + lVar6);
  if (lVar9 == 0) {
    lVar9 = 0;
LAB_18004a5a4:
    lVar10 = 0;
  }
  else {
    uVar5 = FUN_180011200((ulonglong)DAT_180ccf924 + lVar9);
    plVar8 = (longlong *)FUN_1803a0940(&local_118,uVar5);
    lVar9 = *plVar8;
    if (lVar9 == 0) goto LAB_18004a5a4;
    lVar10 = FUN_18000f3a0((ulonglong)DAT_180ccf8d8 + 8 + lVar9);
  }
  if ((DAT_18095cf68 == '\0') || (lVar14 == 0)) {
    DAT_180962d5c = 0;
    fVar15 = DAT_1808ac34c;
  }
  else {
    fVar28 = (DAT_1808acb08 - (float)_DAT_18095cf6c) * DAT_1808ac000;
    local_108 = (DAT_1808acb08 - (float)_DAT_18095cf70) * DAT_1808ac000;
    fVar27 = (DAT_1808acb08 - (float)_DAT_18095cf74) * DAT_1808ac000;
    local_f8 = (DAT_1808acb08 - (float)_DAT_18095cf78) * DAT_1808ac000;
    local_120 = (DAT_1808acb08 - (float)_DAT_18095cf7c) * DAT_1808ac000;
    local_124 = (DAT_1808acb08 - (float)_DAT_18095cf80) * DAT_1808ac000;
    if ((0.0 < fVar28) || (0.0 < fVar27)) {
      if ((lVar9 == 0) || (lVar10 == 0)) {
        DAT_180962d5c = 0;
        pfVar12 = (float *)FUN_1800111b0(&local_f0,lVar14 + 0x1364);
        local_160 = fVar27 * *pfVar12;
        fVar30 = fVar27 * pfVar12[1];
        fVar27 = fVar27 * pfVar12[2];
      }
      else {
        local_170 = &local_f0;
        local_118 = 0;
        local_178 = &local_118;
        local_110 = 0.0;
        local_f0 = 0;
        local_e8 = 0.0;
        FUN_180049c40(lVar14,lVar6,lVar9,fVar15);
        local_160 = (float)local_118 * fVar28 + (float)local_f0 * fVar27;
        fVar30 = local_f0._4_4_ * fVar27 + local_118._4_4_ * fVar28;
        fVar27 = local_e8 * fVar27 + local_110 * fVar28;
      }
    }
    else {
      DAT_180962d5c = 0;
      local_160 = 0.0;
      fVar30 = 0.0;
      fVar27 = 0.0;
    }
    fVar15 = DAT_1808acbd0;
    fVar28 = DAT_1808ac1f4;
    fVar16 = fVar27 * DAT_1808ac1b0 + fVar16;
    local_15c = fVar27;
    local_158 = fVar30;
    fVar17 = (float)FUN_18053f0d0(fVar16 / DAT_1808acbd0 + DAT_1808ac1f4);
    fVar16 = fVar16 - fVar17 * fVar15;
    fVar23 = fVar30 * DAT_1808ac154 + fVar23;
    local_118 = (ulonglong)(uint)fVar16;
    fVar30 = (float)FUN_18053f0d0(fVar23 / fVar15 + fVar28);
    fVar23 = fVar23 - fVar30 * fVar15;
    fVar32 = fVar32 - fVar27 * fVar28;
    local_154 = fVar23;
    local_144 = fVar23;
    fVar28 = (float)FUN_18053f0d0(fVar32 / fVar15 + fVar28);
    fVar27 = DAT_1808ac014;
    fVar17 = fVar16 * DAT_1808ac014;
    local_164 = fVar32 - fVar28 * fVar15;
    fVar23 = fVar23 * DAT_1808ac014;
    fVar28 = local_164 * DAT_1808ac014;
    local_140 = local_164;
    fVar30 = (float)FUN_180517790(fVar17);
    local_138 = fVar30;
    local_134 = (float)FUN_180517200(fVar17);
    fVar32 = (float)FUN_180517790(fVar23);
    fVar15 = (float)FUN_180517200(fVar23);
    fVar17 = (float)FUN_180517790(fVar28);
    fVar18 = (float)FUN_180517200(fVar28);
    local_104 = (float)((uint)fVar17 ^ DAT_1808adec0);
    local_128 = fVar16 * fVar27;
    local_100 = fVar18;
    fVar16 = (float)FUN_180517200();
    fVar23 = local_154;
    fVar31 = local_154 * DAT_1808ac014;
    fVar19 = (float)FUN_18000f3d0(lVar14 + 0x138c);
    fVar28 = DAT_1808ac09c;
    fVar19 = fVar19 * DAT_1808ac09c;
    fVar20 = (float)FUN_18000f3d0(lVar14 + 5000);
    fVar27 = DAT_1808ac014;
    local_12c = ((float)local_118 - fVar20 * fVar28) * DAT_1808ac014;
    fVar28 = (float)FUN_180517200(local_12c);
    local_160 = (float)((uint)local_160 ^ DAT_1808adec0);
    local_15c = (float)((uint)local_15c ^ DAT_1808adec0);
    fVar27 = (fVar23 - fVar19) * fVar27;
    fVar24 = local_160 * fVar15 * local_134 + local_150;
    fVar26 = (fVar18 * fVar32 - fVar17 * local_138 * fVar15) * local_158;
    fVar29 = local_15c * (fVar17 * fVar32 + fVar15 * fVar18 * fVar30);
    fVar19 = (float)FUN_180517200(fVar27);
    fVar20 = (float)FUN_180517200(fVar31);
    fVar23 = local_15c;
    fVar25 = local_160 * fVar32 * local_134 + local_130;
    local_150 = (fVar20 * fVar16 - fVar19 * fVar28) * local_108 + fVar29 + fVar26 + fVar24;
    fVar17 = local_15c * (fVar32 * fVar18 * fVar30 - fVar17 * fVar15);
    fVar15 = (local_138 * local_104 * fVar32 - local_100 * fVar15) * local_158;
    fVar27 = (float)FUN_180517790(fVar27);
    fVar30 = (float)FUN_180517790(fVar31);
    fVar32 = local_108;
    fVar28 = (fVar30 * fVar16 - fVar27 * fVar28) * local_108 + fVar17 + fVar15 + fVar25;
    local_130 = fVar28;
    fVar27 = (float)FUN_18000f3d0(lVar14 + 0x1398);
    uVar1 = DAT_1808adec0;
    fVar30 = fVar27 * DAT_1808ac1b0 * local_f8;
    fVar16 = (float)local_118 + fVar27 * DAT_1808ac118 * local_f8;
    fVar17 = local_134 * local_104 * local_158;
    fVar18 = local_160 * (float)((uint)local_138 ^ DAT_1808adec0) + local_f4;
    fVar15 = local_100 * local_134;
    local_148 = fVar16;
    uVar21 = FUN_180517790(local_12c);
    uVar22 = FUN_180517790(local_128);
    fVar27 = local_124;
    fVar30 = ((float)(uVar22 ^ uVar1) - (float)(uVar21 ^ uVar1)) * fVar32 +
             fVar23 * fVar15 + fVar17 + fVar18 + fVar30;
    if (local_124 <= 0.0) {
      fVar23 = local_fc;
    }
    else {
      cVar2 = FUN_180011220((ulonglong)DAT_180ccf8dc + lVar6);
      fVar23 = local_fc;
      if (cVar2 == '\t') {
        fVar32 = DAT_1808ac34c;
      }
      else {
        fVar32 = 0.0;
      }
      fVar17 = local_fc + local_fc;
      fVar15 = (float)FUN_18000f3d0(lVar14 + 0x13a0);
      if (fVar32 - fVar15 <= fVar17) {
        if (fVar32 - fVar15 < (float)((uint)fVar17 ^ uVar1)) {
          fVar32 = fVar15 - fVar17;
        }
      }
      else {
        fVar32 = fVar15 + fVar17;
      }
      if (((DAT_180ca09f8 == 0) ||
          (lVar11 = FUN_18000f3a0(lVar6 + (ulonglong)DAT_180ca09f8), lVar11 == 0)) ||
         (DAT_180ca0950 == 0)) {
        fVar15 = 0.0;
      }
      else {
        lVar11 = FUN_1800111b0(&local_f0,lVar11 + (ulonglong)DAT_180ca0950);
        fVar15 = *(float *)(lVar11 + 8);
      }
      fVar15 = (float)FUN_180517790(fVar15 * DAT_1808ac0a0);
      fVar30 = fVar30 - fVar15 * fVar32 * DAT_1808ac140 * fVar27;
    }
    fVar27 = local_120;
    if (local_120 <= 0.0) {
      fVar15 = DAT_1808ac34c;
    }
    else {
      if ((DAT_180ccf808 == 0) || (cVar2 = FUN_1800440c0(DAT_180ccf808,lVar6), cVar2 == '\0')) {
        fVar32 = 0.0;
        fVar17 = DAT_1808ac7ac;
      }
      else {
        fVar32 = DAT_1808ac34c;
        fVar17 = DAT_1808ac710;
      }
      fVar15 = DAT_1808ac34c;
      cVar2 = FUN_180011220(lVar14 + 0x1400);
      if (cVar2 == '\0') {
        fVar17 = fVar17 * fVar23;
        fVar23 = (float)FUN_18000f3d0(lVar14 + 0x139c);
        if (fVar32 - fVar23 <= fVar17) {
          if (fVar32 - fVar23 < (float)((uint)fVar17 ^ uVar1)) {
            fVar32 = fVar23 - fVar17;
          }
        }
        else {
          fVar32 = fVar23 + fVar17;
        }
      }
      fVar23 = (float)FUN_180517200(fVar32 * DAT_1808ac680);
      fVar27 = (fVar15 - fVar23) * DAT_1808acd84 * fVar27;
      fVar16 = fVar16 + fVar27 * DAT_1808ac864;
      fVar30 = fVar30 + fVar27 + fVar27;
      local_148 = fVar16;
    }
    fVar27 = local_150;
    fVar23 = local_154;
    fVar32 = local_164;
  }
  fVar17 = DAT_1808ac1f4;
  if (((DAT_180ccf90c == 0) ||
      (cVar2 = FUN_180011220(lVar6 + (ulonglong)DAT_180ccf90c), cVar2 != '\x01')) ||
     ((lVar9 != 0 &&
      (((DAT_180ccf944 != 0 && (DAT_180ccf94c != 0)) &&
       (sVar3 = FUN_180011440((ulonglong)DAT_180ccf94c + lVar9 + (ulonglong)DAT_180ccf948 +
                              (ulonglong)DAT_180ccf944), sVar3 == 0x2e)))))) {
    local_168 = '\0';
  }
  else {
    local_168 = '\x01';
  }
  if ((((DAT_18095cf93 == '\0') || (lVar14 == 0)) ||
      ((lVar9 == 0 || ((lVar10 == 0 || (DAT_180ccf968 == 0)))))) ||
     (cVar2 = FUN_180011220(lVar10 + (ulonglong)DAT_180ccf968), cVar2 != '\x01')) {
    cVar2 = local_168;
  }
  else {
    fVar17 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf940 + lVar9);
    fVar18 = (float)FUN_18000f3d0(lVar7 + 0x30);
    fVar18 = fVar18 - fVar17;
    if ((0.0 < fVar18) && (fVar18 < DAT_1808ac154)) {
      fVar17 = (float)FUN_180517200((fVar15 - (float)((uint)(fVar18 - DAT_1808ac0e8) &
                                                     _DAT_1808ade90) / DAT_1808ac0e8) *
                                    DAT_1808ac680);
      fVar17 = (fVar15 - fVar17) * DAT_1808ac1f4;
      fVar16 = fVar16 - fVar17;
      if (local_168 != '\0') {
        fVar17 = (float)((uint)fVar17 ^ DAT_1808adec0);
      }
      fVar32 = fVar32 + fVar17;
      local_148 = fVar16;
      local_140 = fVar32;
    }
    cVar2 = local_168;
    fVar17 = DAT_1808ac1f4;
    fVar18 = (float)FUN_18000f3d0(lVar14 + 0x1378);
    fVar18 = (float)FUN_180517200(fVar18 * DAT_1808ac680);
    fVar30 = fVar30 + (fVar15 - fVar18) * fVar17 * DAT_1808ac118;
  }
  if (DAT_18095cf48 != '\0') {
    if (DAT_180962de0 == 0) {
      if (DAT_180962de8 == '\0') {
        DAT_180962de0 = FUN_180264b70(PTR_s_viewmodel_offset_x_180962dd8);
        DAT_180962de8 = DAT_180962de0 == 0;
        if (DAT_180962de0 != 0) goto LAB_18004af9d;
        FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_viewmodel_offset_x_180962dd8);
      }
      if (DAT_180962de0 != 0) goto LAB_18004af9d;
LAB_18004afc4:
      local_120 = 0.0;
    }
    else {
LAB_18004af9d:
      local_120 = (float)FUN_180264d70(DAT_180962de0);
      local_164 = local_120;
      if (((uint)local_120 & 0x7f800000) == 0x7f800000) goto LAB_18004afc4;
    }
    local_120 = DAT_18095cf4c - local_120;
    if (DAT_180962d80 == 0) {
      if (DAT_180962d88 == '\0') {
        DAT_180962d80 = FUN_180264b70(PTR_s_viewmodel_offset_y_180962d78);
        DAT_180962d88 = DAT_180962d80 == 0;
        if (DAT_180962d80 != 0) goto LAB_18004b02e;
        FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_viewmodel_offset_y_180962d78);
      }
      if (DAT_180962d80 != 0) goto LAB_18004b02e;
LAB_18004b055:
      local_124 = 0.0;
    }
    else {
LAB_18004b02e:
      local_124 = (float)FUN_180264d70(DAT_180962d80);
      local_164 = local_124;
      if (((uint)local_124 & 0x7f800000) == 0x7f800000) goto LAB_18004b055;
    }
    local_124 = DAT_18095cf50 - local_124;
    if (DAT_180962c40 == 0) {
      if (DAT_180962c48 == '\0') {
        DAT_180962c40 = FUN_180264b70(PTR_s_viewmodel_offset_z_180962c38);
        DAT_180962c48 = DAT_180962c40 == 0;
        if (DAT_180962c40 != 0) goto LAB_18004b0bf;
        FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_viewmodel_offset_z_180962c38);
      }
      if (DAT_180962c40 != 0) goto LAB_18004b0bf;
LAB_18004b0e6:
      local_164 = 0.0;
    }
    else {
LAB_18004b0bf:
      local_164 = (float)FUN_180264d70(DAT_180962c40);
      if (((uint)local_164 & 0x7f800000) == 0x7f800000) goto LAB_18004b0e6;
    }
    local_164 = DAT_18095cf54 - local_164;
    fVar27 = fVar16 * DAT_1808ac014;
    fVar23 = fVar23 * DAT_1808ac014;
    fVar19 = fVar32 * DAT_1808ac014;
    fVar28 = (float)FUN_180517790(fVar27);
    fVar15 = (float)FUN_180517200(fVar27);
    fVar17 = (float)FUN_180517790(fVar23);
    fVar23 = (float)FUN_180517200(fVar23);
    fVar18 = (float)FUN_180517790(fVar19);
    fVar19 = (float)FUN_180517200(fVar19);
    local_128 = fVar17 * fVar15;
    local_12c = (float)((uint)fVar28 ^ DAT_1808adec0);
    fVar27 = fVar19 * fVar17 - fVar18 * fVar28 * fVar23;
    fVar24 = (float)((uint)fVar18 ^ DAT_1808adec0) * fVar15;
    fVar20 = (float)((uint)fVar18 ^ DAT_1808adec0) * fVar28 * fVar17 - fVar19 * fVar23;
    if (cVar2 != '\0') {
      fVar27 = fVar27 * DAT_1808acda0;
      fVar20 = fVar20 * DAT_1808acda0;
      fVar24 = fVar24 * DAT_1808acda0;
    }
    fVar27 = fVar23 * fVar15 * local_124 + fVar27 * local_120 + local_150 +
             (fVar19 * fVar28 * fVar23 + fVar18 * fVar17) * local_164;
    fVar30 = local_12c * local_124 + fVar24 * local_120 + fVar30 + fVar19 * fVar15 * local_164;
    fVar28 = local_128 * local_124 + fVar20 * local_120 + local_130 +
             (fVar19 * fVar28 * fVar17 - fVar18 * fVar23) * local_164;
    fVar17 = DAT_1808ac1f4;
  }
  pfVar12 = (float *)FUN_180048f80(&local_f0,lVar6,&local_148);
  fVar19 = DAT_1808acbd0;
  fVar23 = pfVar12[1];
  fVar15 = pfVar12[2];
  fVar18 = *pfVar12;
  if (DAT_18095cf58 != '\0') {
    fVar16 = fVar16 + _DAT_18095cf5c;
    fVar20 = (float)FUN_18053f0d0(fVar16 / DAT_1808acbd0 + fVar17);
    fVar32 = fVar32 + _DAT_18095cf64;
    fVar16 = fVar16 - fVar20 * fVar19;
    local_148 = fVar16;
    fVar17 = (float)FUN_18053f0d0(fVar32 / fVar19 + fVar17);
    fVar32 = fVar32 - fVar17 * fVar19;
    local_140 = fVar32;
    if (DAT_18095cf60 != 0.0) {
      puVar13 = (undefined8 *)FUN_18004a130(&local_f0,&local_148);
      fVar16 = (float)*puVar13;
      fVar32 = *(float *)(puVar13 + 1);
      fVar17 = (float)((ulonglong)*puVar13 >> 0x20);
      goto LAB_18004b366;
    }
  }
  fVar17 = local_154;
LAB_18004b366:
  if (((DAT_18095cf92 != '\0') && (DAT_180ccf8ec != 0)) && (DAT_180961cc8 != 0)) {
    lVar6 = FUN_18000f3a0();
    local_f0 = 0;
    local_e8 = 0.0;
    if (((lVar6 != 0) && (cVar2 = FUN_180044160(lVar6,&local_f0), cVar2 != '\0')) &&
       ((((uint)(float)local_f0 & 0x7f800000) != 0x7f800000 &&
        ((((uint)local_f0._4_4_ & 0x7f800000) != 0x7f800000 &&
         (((uint)local_e8 & 0x7f800000) != 0x7f800000)))))) {
      fVar16 = fVar16 - (float)local_f0 * DAT_1808ac160;
      fVar17 = fVar17 - local_f0._4_4_ * DAT_1808ac160;
      fVar32 = fVar32 - local_e8 * DAT_1808ac160;
    }
  }
  if (((((((uint)(fVar27 + fVar18) & 0x7f800000) != 0x7f800000) &&
        (((uint)(fVar23 + fVar28) & 0x7f800000) != 0x7f800000)) &&
       (((uint)(fVar15 + fVar30) & 0x7f800000) != 0x7f800000)) &&
      ((((uint)fVar16 & 0x7f800000) != 0x7f800000 && (((uint)fVar17 & 0x7f800000) != 0x7f800000))))
     && (((uint)fVar32 & 0x7f800000) != 0x7f800000)) {
    *param_1 = fVar27 + fVar18;
    param_1[1] = fVar23 + fVar28;
    param_1[2] = fVar15 + fVar30;
    *param_2 = fVar16;
    param_2[1] = fVar17;
    param_2[2] = fVar32;
  }
  return;
}



/* ===== 18004b550 FUN_18004b550 ===== */

void FUN_18004b550(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong unaff_retaddr;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_180ccf830)();
  if ((((unaff_retaddr == DAT_180ccf7d0) && (param_2 != 0)) && (param_3 != 0)) &&
     (DAT_180ca15ba != '\0')) {
    cVar1 = FUN_180044350();
    if (cVar1 != '\0') {
      FUN_18004a430(param_2,param_3);
    }
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18004b5c0 FUN_18004b5c0 ===== */

longlong * FUN_18004b5c0(longlong *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  if (param_2 == 0) {
    return param_1;
  }
  cVar1 = FUN_180011220((ulonglong)DAT_180ccf8d4 + param_2);
  if (cVar1 != '\0') {
    return param_1;
  }
  if (param_3 == 0) {
    return param_1;
  }
  uVar5 = (ulonglong)DAT_180ccf8d8;
  *param_1 = param_3;
  lVar4 = FUN_18000f3a0(uVar5 + 8 + param_3);
  param_1[1] = lVar4;
  if (lVar4 == 0) {
    return param_1;
  }
  if ((DAT_180ccf92c == 0) ||
     (cVar1 = FUN_180011220((ulonglong)DAT_180ccf92c + (ulonglong)DAT_180ccf930 + param_3),
     lVar4 = DAT_180ccf800, cVar1 == '\0')) {
    uVar5 = (ulonglong)DAT_180ccf950;
    *(undefined1 *)(param_1 + 2) = 0;
    iVar3 = FUN_180011200(uVar5 + param_1[1]);
    if (iVar3 != 5) {
      return param_1;
    }
    if ((DAT_180ccf7f8 != 0) && (cVar1 = FUN_1800440e0(param_2), cVar1 != '\0')) {
      uVar2 = 1;
      goto LAB_18004b6a4;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 1;
    if ((lVar4 != 0) &&
       (cVar1 = FUN_1800440c0(lVar4,(ulonglong)DAT_180ccf92c + param_3), cVar1 != '\0')) {
      uVar2 = 1;
      goto LAB_18004b6a4;
    }
  }
  uVar2 = 0;
LAB_18004b6a4:
  *(undefined1 *)((longlong)param_1 + 0x11) = uVar2;
  return param_1;
}



/* ===== 18004b6c0 FUN_18004b6c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18004b6c0(undefined8 param_1,ulonglong param_2)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  short sVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  float *pfVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  uint uVar20;
  char cVar21;
  longlong lVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  ulonglong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  float local_f8 [2];
  float local_f0 [2];
  float local_e8 [2];
  float local_e0 [2];
  longlong local_d8;
  undefined1 local_d0 [152];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_res10 = param_2;
  (*DAT_180ccf9c8)();
  if (((param_2 == 0) || (DAT_180ca15ba == '\0')) || (cVar4 = FUN_180044350(), cVar4 == '\0'))
  goto LAB_18004bfed;
  lVar12 = FUN_1800452c0();
  if (((lVar12 == 0) || (cVar4 = FUN_180011220((ulonglong)DAT_180ccf8d4 + lVar12), cVar4 != '\0'))
     || ((DAT_180ccf7f0 == 0 ||
         ((cVar4 = FUN_1800440c0(DAT_180ccf7f0,lVar12), cVar4 == '\0' ||
          (lVar13 = FUN_18000f3a0((ulonglong)DAT_180ccf8d0 + lVar12), lVar13 == 0)))))) {
    lVar13 = 0;
  }
  else {
    uVar7 = FUN_180011200((ulonglong)DAT_180ccf924 + lVar13);
    plVar14 = (longlong *)FUN_1803a0940(&local_res18,uVar7);
    lVar13 = *plVar14;
  }
  fVar38 = DAT_1808acabc;
  lVar22 = 0;
  if (DAT_18095cf43 == '\0') {
    if (DAT_180962cb8 == 0) {
      if (DAT_180962cc0 == '\0') {
        DAT_180962cb8 = FUN_180264b70(PTR_s_viewmodel_fov_180962cb0);
        DAT_180962cc0 = DAT_180962cb8 == 0;
        if (DAT_180962cb8 != 0) goto LAB_18004b820;
        FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_viewmodel_fov_180962cb0);
      }
      if (DAT_180962cb8 != 0) goto LAB_18004b820;
    }
    else {
LAB_18004b820:
      uVar8 = FUN_180264d70(DAT_180962cb8);
      local_res18 = CONCAT44(local_res18._4_4_,uVar8);
      auVar36 = ZEXT416(uVar8);
      if ((uVar8 & 0x7f800000) != 0x7f800000) goto LAB_18004b848;
    }
    auVar36 = ZEXT416((uint)fVar38);
  }
  else {
    auVar36 = ZEXT416((uint)(float)DAT_18095cf44);
  }
LAB_18004b848:
  if ((((lVar12 != 0) && (DAT_180ccf7f0 != 0)) &&
      (cVar4 = FUN_1800440c0(DAT_180ccf7f0,lVar12), cVar4 != '\0')) && (DAT_18095cf43 == '\0')) {
    lVar15 = FUN_180045260();
    if (((lVar12 != lVar15) &&
        ((lVar15 = FUN_18000f3a0(lVar12 + 0x10), lVar15 == 0 ||
         (uVar8 = FUN_180011200(lVar15 + 0x30), (uVar8 & 0x840) != 0x800)))) && (DAT_180ccf908 != 0)
       ) {
      uVar29 = FUN_18000f3d0(lVar12 + (ulonglong)DAT_180ccf908);
      auVar36._8_4_ = (int)extraout_XMM0_Qb;
      auVar36._0_8_ = uVar29;
      auVar36._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    }
    if (auVar36._0_4_ <= fVar38) {
      if (auVar36._0_4_ <= DAT_1808acaa8) {
        auVar36._0_4_ = DAT_1808acaa8;
      }
    }
    else {
      auVar36 = ZEXT416((uint)fVar38);
    }
  }
  fVar38 = auVar36._0_4_;
  if (lVar13 == 0) {
    bVar23 = false;
LAB_18004ba79:
    cVar21 = '\0';
    fVar24 = DAT_1808ac34c;
    fVar35 = DAT_1808ac34c;
    fVar28 = DAT_1808acaf4;
    fVar37 = DAT_1808acaf4;
    fVar1 = DAT_1808ac34c;
  }
  else {
    plVar14 = (longlong *)FUN_18004b5c0(local_d0,lVar12,lVar13);
    iVar10 = DAT_18095d2d0;
    if (*plVar14 == 0) {
      bVar23 = false;
      goto LAB_18004ba79;
    }
    lVar15 = plVar14[1];
    lVar3 = plVar14[2];
    local_res18 = CONCAT71(local_res18._1_7_,*(undefined1 *)((longlong)plVar14 + 0x11));
    if (((lVar15 == 0) || (iVar11 = FUN_180011200((ulonglong)DAT_180ccf950 + lVar15), iVar11 != 5))
       || ((iVar10 == 0 || (iVar11 = FUN_180011200((ulonglong)DAT_180ccf954 + lVar15), iVar11 < 1)))
       ) {
      bVar23 = false;
      if ((((char)local_res18 == '\0') || ((char)lVar3 == '\0')) ||
         (bVar23 = iVar10 != 0, iVar10 != 0)) {
        fVar38 = (float)FUN_180044140(lVar13);
      }
      else {
        fVar24 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf92c + (ulonglong)DAT_180ccf934 + lVar13);
        fVar38 = (DAT_1808aca88 - fVar38) * fVar24 + fVar38;
      }
      param_2 = local_res10;
      goto LAB_18004ba79;
    }
    iVar10 = FUN_180011200((ulonglong)DAT_180ccf958 + lVar15);
    fVar37 = (float)iVar10;
    iVar10 = FUN_180011200((ulonglong)DAT_180ccf95c + lVar15);
    fVar24 = DAT_1808ac34c;
    fVar28 = (float)iVar10;
    if (DAT_18095cf35 == '\0') {
      fVar35 = DAT_1808ac34c;
      fVar1 = DAT_1808ac34c;
    }
    else {
      fVar35 = (float)DAT_18095cf38 * DAT_1808ac000;
      fVar1 = (float)DAT_18095cf3c * DAT_1808ac000;
    }
    if ((DAT_18095cf41 == '\0') || (cVar4 = '\x01', DAT_18095cf42 == '\0')) {
      cVar4 = '\x02';
    }
    iVar10 = FUN_180011200((ulonglong)DAT_180ccf954 + lVar15);
    cVar21 = '\x01';
    if (1 < iVar10) {
      cVar21 = cVar4;
    }
    fVar38 = (float)FUN_180044140(lVar13);
    bVar23 = false;
    param_2 = local_res10;
  }
  if (lVar12 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = FUN_18000f3a0((ulonglong)DAT_180ccf8bc + lVar12);
  }
  local_d8 = param_2 + 0x498;
  local_res18 = uVar16;
  fVar25 = (float)FUN_18000f3d0(local_d8);
  if (((DAT_180962c04 == '\0') || (uVar16 == 0)) || (DAT_180962be8 != uVar16)) {
LAB_18004bbd8:
    uVar16 = local_res18;
    if (local_res18 == 0) {
      fVar26 = fVar25;
    }
    else {
      fVar26 = (float)FUN_180044070(local_res18,0x23);
      fVar25 = (float)FUN_180044070(uVar16,0x24);
    }
  }
  else {
    uVar8 = 0xffffffff;
    if (lVar12 == 0) {
LAB_18004bb3c:
      uVar20 = 0xffffffff;
    }
    else {
      local_res20 = FUN_18000f3a0(lVar12 + 0x10);
      if (local_res20 == 0) goto LAB_18004bb3c;
      uVar9 = FUN_180011200(local_res20 + 0x10);
      sVar6 = FUN_180011200(local_res20 + 0x30);
      uVar20 = uVar9 - (ushort)(sVar6 << 0xf);
      uVar20 = (uVar20 ^ uVar9) & 0x7fff ^ uVar20;
    }
    if (DAT_180962bf0 != uVar20) goto LAB_18004bbd8;
    if ((lVar13 != 0) && (lVar13 = FUN_18000f3a0(lVar13 + 0x10), lVar13 != 0)) {
      uVar20 = FUN_180011200(lVar13 + 0x10);
      sVar6 = FUN_180011200(lVar13 + 0x30);
      uVar8 = uVar20 - (ushort)(sVar6 << 0xf);
      uVar8 = (uVar8 ^ uVar20) & 0x7fff ^ uVar8;
    }
    if (DAT_180962bf4 != uVar8) goto LAB_18004bbd8;
    if ((DAT_180961a50 == 0) || (lVar13 = FUN_18000f3a0(), lVar13 == 0)) {
      iVar10 = 0;
    }
    else {
      iVar10 = FUN_180011200(lVar13 + 4);
    }
    if (DAT_180962bf8 != iVar10) goto LAB_18004bbd8;
    fVar25 = DAT_180962c00;
    fVar26 = DAT_180962bfc;
  }
  uVar16 = local_res10;
  DAT_180962c04 = '\0';
  if (bVar23) {
    fVar27 = 0.0;
  }
  else {
    fVar27 = fVar25 - fVar26;
    if (cVar21 != '\0') {
      fVar34 = fVar25 - fVar37;
      if (fVar34 <= 0.0) {
        fVar34 = 0.0;
      }
      if (fVar34 <= 0.0) {
LAB_18004bc6f:
        fVar27 = 0.0;
      }
      else {
        local_f8[0] = fVar27 / fVar34;
        if (NAN(local_f8[0])) goto LAB_18004bc6f;
        local_f0[0] = 0.0;
        pfVar17 = local_f8;
        if (local_f8[0] <= 0.0) {
          pfVar17 = local_f0;
        }
        fVar27 = *pfVar17;
        if (fVar24 <= *pfVar17) {
          fVar27 = fVar24;
        }
      }
      fVar34 = fVar34 * fVar35;
      fVar27 = fVar34 * fVar27;
      if ((cVar21 == '\x02') && (fVar26 < fVar37)) {
        fVar35 = fVar37 - fVar28;
        if (fVar35 <= 0.0) {
          fVar35 = 0.0;
        }
        if (0.0 < fVar35) {
          local_e8[0] = (fVar37 - fVar26) / fVar35;
          if (NAN(local_e8[0]) || NAN(local_e8[0])) {
            fVar37 = 0.0;
          }
          else {
            local_e0[0] = 0.0;
            pfVar17 = local_e8;
            if (local_e8[0] <= 0.0) {
              pfVar17 = local_e0;
            }
            fVar37 = *pfVar17;
            if (fVar24 <= *pfVar17) {
              fVar37 = fVar24;
            }
          }
          fVar25 = fVar25 - fVar28;
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          fVar27 = (fVar25 * fVar1 - fVar34) * fVar37 + fVar34;
        }
      }
    }
  }
  fVar24 = fVar38 - fVar27;
  if (fVar38 - fVar27 <= DAT_1808ac750) {
    fVar24 = DAT_1808ac750;
  }
  local_res18._0_4_ = fVar24;
  if (((uint)fVar24 & 0x7f800000) != 0x7f800000) {
    FUN_180013280(local_res10 + 0x49c,&local_res18);
  }
  iVar10 = FUN_180011200(uVar16 + 0x430);
  iVar11 = FUN_180011200(uVar16 + 0x438);
  if ((0 < iVar11) && (0 < iVar10)) {
    _DAT_180ccf888 = (float)iVar10 / (float)iVar11;
    local_res18._0_4_ = _DAT_180ccf888;
    if (DAT_18095cf28 != '\0') {
      local_res18._0_4_ = 3.50325e-43;
      local_res10 = CONCAT44(local_res10._4_4_,0x14);
      puVar19 = &local_res10;
      if (0x13 < DAT_18095cf30) {
        puVar19 = (ulonglong *)&DAT_18095cf30;
      }
      puVar18 = &local_res18;
      if (DAT_18095cf30 < 0xfb) {
        puVar18 = puVar19;
      }
      local_res18._0_4_ = ((float)(int)*puVar18 * _DAT_180ccf888) / DAT_1808acb08;
    }
    fVar38 = (float)local_res18;
    if (DAT_18095cf2c != 0) {
      fVar38 = _DAT_180ccf888;
    }
    fVar38 = fVar38 / DAT_1808ac3fc;
    uVar5 = FUN_180011220(uVar16 + 0x551);
    local_res10 = CONCAT71(local_res10._1_7_,uVar5) | 2;
    FUN_1800233d0(uVar16 + 0x551,&local_res10);
    FUN_180013280(uVar16 + 0x4d4,&local_res18);
    FUN_18000f3d0(uVar16 + 0x49c);
    lVar13 = local_d8;
    FUN_18000f3d0(local_d8);
    auVar30._0_8_ = FUN_18053f920();
    auVar30._8_8_ = extraout_XMM0_Qb_00;
    auVar31._4_12_ = auVar30._4_12_;
    auVar31._0_4_ = (float)auVar30._0_8_ * fVar38;
    fVar28 = (float)FUN_18053ed70(auVar31._0_8_);
    fVar24 = DAT_1808aca94;
    local_res10._0_4_ = (fVar28 + fVar28) * DAT_1808aca94;
    FUN_180013280(uVar16 + 0x49c,&local_res10);
    auVar32._0_8_ = FUN_18053f920();
    auVar32._8_8_ = extraout_XMM0_Qb_01;
    auVar33._4_12_ = auVar32._4_12_;
    auVar33._0_4_ = (float)auVar32._0_8_ * fVar38;
    fVar38 = (float)FUN_18053ed70(auVar33._0_8_);
    local_res10 = CONCAT44(local_res10._4_4_,(fVar38 + fVar38) * fVar24);
    FUN_180013280(lVar13,&local_res10);
  }
  uVar5 = 0;
  if ((DAT_18095cf41 == '\0') && (lVar12 != 0)) {
    lVar13 = FUN_18000f3a0((ulonglong)DAT_180ccf8d0 + lVar12);
    if (lVar13 != 0) {
      uVar7 = FUN_180011200((ulonglong)DAT_180ccf924 + lVar13);
      plVar14 = (longlong *)FUN_1803a0940(&local_res10,uVar7);
      lVar22 = *plVar14;
    }
    cVar4 = FUN_180011220((ulonglong)DAT_180ccf8d4 + lVar12);
    if ((cVar4 == '\0') && (lVar22 != 0)) {
      bVar23 = false;
      bVar2 = false;
      lVar13 = FUN_18000f3a0((ulonglong)DAT_180ccf8d8 + 8 + lVar22);
      if (lVar13 != 0) {
        if ((DAT_180ccf92c == 0) ||
           (cVar4 = FUN_180011220((ulonglong)DAT_180ccf92c + (ulonglong)DAT_180ccf930 + lVar22),
           cVar4 == '\0')) {
          iVar10 = FUN_180011200((ulonglong)DAT_180ccf950 + lVar13);
          if (((iVar10 == 5) && (DAT_180ccf7f8 != 0)) &&
             (cVar4 = FUN_1800440e0(lVar12), cVar4 != '\0')) {
            bVar2 = true;
          }
        }
        else {
          bVar23 = true;
          if ((DAT_180ccf800 != 0) &&
             (cVar4 = FUN_1800440c0(DAT_180ccf800,(ulonglong)DAT_180ccf92c + lVar22), cVar4 != '\0')
             ) {
            bVar2 = true;
          }
        }
      }
      if ((((DAT_180ccf7f0 != 0) && (cVar4 = FUN_1800440c0(DAT_180ccf7f0,lVar12), cVar4 != '\0')) &&
          ((DAT_18095d2d0 != 0 || (!bVar23)))) && (bVar2)) {
        uVar5 = 1;
        goto LAB_18004bfe7;
      }
    }
    uVar5 = 0;
  }
LAB_18004bfe7:
  DAT_180ca15bd = uVar5;
LAB_18004bfed:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18004c040 FUN_18004c040 ===== */

void FUN_18004c040(void)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  HMODULE pHVar6;
  HANDLE pvVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined4 local_res8;
  undefined2 local_resc;
  undefined1 local_rese;
  undefined2 local_res10;
  undefined1 uStackX_12;
  int iStackX_13;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  longlong lVar22;
  char local_78 [8];
  undefined4 local_70;
  ushort local_6c;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  
  pHVar6 = GetModuleHandleA("client.dll");
  if (pHVar6 == (HMODULE)0x0) {
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    pvVar7 = GetCurrentProcess();
    iVar5 = K32GetModuleInformation(pvVar7,pHVar6,&local_58,0x18);
    if (iVar5 == 0) {
      uStack_50 = 0;
      local_58 = 0;
    }
    else {
      uStack_50 = uStack_50 & 0xffffffff;
    }
  }
  local_68 = "CCSPlayer_CameraServices";
  local_60 = 0x18;
  DAT_180ccf790 = FUN_1801d1f10(&local_58,&local_68);
  local_60 = 0x1a;
  local_68 = "CCSObserver_CameraServices";
  DAT_180ccf798 = FUN_1801d1f10(&local_58,&local_68);
  local_60 = 0x1c;
  local_68 = "CCSObserver_ObserverServices";
  lVar8 = FUN_1801d1f10(&local_58,&local_68);
  lVar9 = DAT_180ccf790;
  DAT_180ccf7a0 = lVar8;
  if (DAT_180ccf790 == 0) {
    DAT_180ccf7a8 = 0;
    DAT_180ccf7b0 = 0;
  }
  else {
    DAT_180ccf7a8 = FUN_18000f3a0(DAT_180ccf790 + 0x108);
    DAT_180ccf7b0 = FUN_18000f3a0(lVar9 + 0x110);
  }
  if (DAT_180ccf798 == 0) {
    DAT_180ccf7b8 = 0;
  }
  else {
    DAT_180ccf7b8 = FUN_18000f3a0(DAT_180ccf798 + 0x110);
  }
  if (lVar8 == 0) {
    DAT_180ccf7c0 = 0;
  }
  else {
    DAT_180ccf7c0 = FUN_18000f3a0(lVar8 + 0x110);
  }
  local_60 = 0x12;
  local_68 = "ClientModeCSNormal";
  lVar9 = FUN_1801d1f10(&local_58,&local_68);
  uVar10 = 0;
  if (lVar9 != 0) {
    uVar10 = FUN_18000f3a0(lVar9 + 0xd8);
  }
  local_60 = 0xc;
  local_68 = "CViewEffects";
  DAT_180ccf7d8 = uVar10;
  lVar9 = FUN_1801d1f10(&local_58,&local_68);
  uVar10 = 0;
  if (lVar9 != 0) {
    uVar10 = FUN_18000f3a0(lVar9 + 0x60);
  }
  local_60 = 0xb;
  local_68 = "CViewRender";
  DAT_180ccf7c8 = uVar10;
  DAT_180ccf818 = FUN_1801d1f10(&local_58);
  lVar9 = 0;
  if (DAT_180ccf818 != 0) {
    lVar9 = FUN_18000f3a0(DAT_180ccf818 + 0x20);
  }
  DAT_180ccf820 = lVar9;
  if (((DAT_180ccf790 != 0) && (lVar9 = FUN_18000f3a0(DAT_180ccf790 + 0x118), lVar9 != 0)) &&
     (DAT_180ccf8ac != 0)) {
    local_res10 = 0x8d48;
    uStackX_12 = 0x93;
    iStackX_13 = DAT_180ccf8ac;
    local_res8 = 0x1010101;
    local_resc = 0x101;
    local_rese = 1;
    lVar8 = 0;
    do {
      bVar2 = true;
      uVar11 = 0;
      do {
        if (!bVar2) goto LAB_18004c30c;
        uVar1 = lVar8 + lVar9;
        if (local_78[uVar11 + 0x80] != '\0') {
          cVar4 = FUN_180011220(uVar11 + uVar1);
          bVar3 = false;
          if (cVar4 == *(char *)((longlong)&local_res10 + uVar11)) {
            bVar3 = bVar2;
          }
          bVar2 = bVar3;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < 7);
      if (bVar2) {
        if (uVar1 != 0) {
          uVar11 = uVar1 + 0x1b;
          lVar8 = uVar1 - 5;
          goto joined_r0x00018004c330;
        }
        break;
      }
LAB_18004c30c:
      uVar11 = lVar8 + 8;
      lVar8 = lVar8 + 1;
    } while (uVar11 < 0x201);
LAB_18004c384:
    local_78[0] = 'H';
    local_78[1] = -0x75;
    local_78[2] = '\x05';
    local_78[3] = '\0';
    local_78[4] = '\0';
    local_78[5] = '\0';
    local_78[6] = '\0';
    local_78[7] = -0x80;
    local_70 = CONCAT13(local_70._3_1_,0x3478);
    local_68 = (char *)0x100000000010101;
    local_60 = CONCAT53(local_60._3_5_,0x10101);
    lVar8 = 0;
    do {
      bVar2 = true;
      uVar11 = 0;
      do {
        if (!bVar2) goto LAB_18004c3fc;
        lVar17 = lVar8 + lVar9;
        if (*(char *)((longlong)&local_68 + uVar11) != '\0') {
          cVar4 = FUN_180011220(uVar11 + lVar17);
          bVar3 = false;
          if (cVar4 == local_78[uVar11]) {
            bVar3 = bVar2;
          }
          bVar2 = bVar3;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < 0xb);
      if (bVar2) {
        if (lVar17 != 0) {
          DAT_180ccf7e8 = (longlong)*(int *)(lVar17 + 3) + 7 + lVar17;
        }
        break;
      }
LAB_18004c3fc:
      uVar11 = lVar8 + 0xc;
      lVar8 = lVar8 + 1;
    } while (uVar11 < 0x201);
  }
  lVar9 = DAT_180962110;
  local_res10 = 0xc933;
  uStackX_12 = 0xe8;
  local_res8 = CONCAT13(local_res8._3_1_,0x10101);
  local_78[0] = -0x18;
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = -0x78;
  local_78[6] = -0x7d;
  local_78[7] = '\0';
  local_70 = 0x48000000;
  local_6c = 0x58b;
  local_68 = (char *)0x1010000000001;
  local_60 = CONCAT26(local_60._6_2_,0x10101000000);
  if (DAT_180962110 != 0) {
    lVar8 = 0;
    do {
      bVar2 = true;
      uVar11 = 0;
      do {
        if (!bVar2) goto LAB_18004c4c7;
        lVar17 = lVar8 + lVar9;
        if (local_78[uVar11 + 0x80] != '\0') {
          cVar4 = FUN_180011220(uVar11 + lVar17);
          bVar3 = false;
          if (cVar4 == *(char *)((longlong)&local_res10 + uVar11)) {
            bVar3 = bVar2;
          }
          bVar2 = bVar3;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < 3);
      if (bVar2) {
        if (((lVar17 != 0) && (lVar17 - 0xfffeU < 0x7ffffffeffff)) &&
           (cVar4 = FUN_180011220(lVar17 + 2), cVar4 == -0x18)) {
          iVar5 = FUN_180011200(lVar17 + 3);
          if (iVar5 + lVar17 != -7) {
            lVar9 = 0;
            goto LAB_18004c530;
          }
        }
        break;
      }
LAB_18004c4c7:
      uVar11 = lVar8 + 4;
      lVar8 = lVar8 + 1;
    } while (uVar11 < 0x21);
  }
  goto LAB_18004c5c9;
joined_r0x00018004c330:
  if (uVar11 <= uVar1) goto LAB_18004c384;
  cVar4 = FUN_180011220(lVar8);
  if (cVar4 == -0x18) {
    if ((lVar8 - 0x10000U < 0x7ffffffeffff) && (cVar4 = FUN_180011220(lVar8), cVar4 == -0x18)) {
      iVar5 = FUN_180011200(lVar8 + 1);
      DAT_180ccf7e0 = (longlong)iVar5 + 5 + lVar8;
    }
    else {
      DAT_180ccf7e0 = 0;
    }
    goto LAB_18004c384;
  }
  uVar11 = lVar8 + 0x1f;
  lVar8 = lVar8 + -1;
  goto joined_r0x00018004c330;
LAB_18004c530:
  do {
    bVar2 = true;
    uVar11 = 0;
    do {
      if (!bVar2) goto LAB_18004c573;
      lVar8 = lVar9 + iVar5 + lVar17;
      if (*(char *)((longlong)&local_68 + uVar11) != '\0') {
        cVar4 = FUN_180011220(lVar8 + 7 + uVar11);
        bVar3 = false;
        if (cVar4 == local_78[uVar11]) {
          bVar3 = bVar2;
        }
        bVar2 = bVar3;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 0xe);
    if (bVar2) {
      if (lVar8 + 7 != 0) {
        if ((lVar8 - 0xfff9U < 0x7ffffffeffff) && (cVar4 = FUN_180011220(lVar8 + 7), cVar4 == -0x18)
           ) {
          iVar5 = FUN_180011200(lVar8 + 8);
          DAT_180ccf7f0 = (longlong)iVar5 + 0xc + lVar8;
        }
        else {
          DAT_180ccf7f0 = 0;
        }
      }
      break;
    }
LAB_18004c573:
    uVar11 = lVar9 + 0xf;
    lVar9 = lVar9 + 1;
  } while (uVar11 < 0x141);
LAB_18004c5c9:
  lVar9 = DAT_180961dc8;
  if (DAT_180961dc8 != 0) {
    local_68 = (char *)0x247c8000000000e8;
    local_60 = CONCAT62(local_60._2_6_,0x34);
    local_78[0] = '\x01';
    local_78[1] = '\0';
    local_78[2] = '\0';
    local_78[3] = '\0';
    local_78[4] = '\0';
    local_78[5] = '\x01';
    local_78[6] = '\x01';
    local_78[7] = '\x01';
    local_70 = CONCAT22(local_70._2_2_,0x101);
    lVar8 = 0;
    do {
      bVar2 = true;
      uVar11 = 0;
      do {
        if (!bVar2) goto LAB_18004c647;
        lVar17 = lVar8 + lVar9;
        if (local_78[uVar11] != '\0') {
          cVar4 = FUN_180011220(uVar11 + lVar17);
          bVar3 = false;
          if (cVar4 == *(char *)((longlong)&local_68 + uVar11)) {
            bVar3 = bVar2;
          }
          bVar2 = bVar3;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < 10);
      if (bVar2) {
        if (lVar17 != 0) {
          if ((lVar17 - 0x10000U < 0x7ffffffeffff) &&
             (cVar4 = FUN_180011220(lVar17), cVar4 == -0x18)) {
            iVar5 = FUN_180011200(lVar17 + 1);
            DAT_180ccf7f8 = (longlong)iVar5 + 5 + lVar17;
          }
          else {
            DAT_180ccf7f8 = 0;
          }
        }
        break;
      }
LAB_18004c647:
      uVar11 = lVar8 + 0xb;
      lVar8 = lVar8 + 1;
    } while (uVar11 < 0x141);
    lVar9 = DAT_180961dc8;
    local_78[0] = 'H';
    local_78[1] = -0x7b;
    local_78[2] = -0x40;
    local_78[3] = 't';
    local_78[4] = '\0';
    local_78[5] = 'H';
    local_78[6] = -0x75;
    local_78[7] = -0x38;
    local_70 = 0xe8;
    local_6c = local_6c & 0xff00;
    local_68 = (char *)0x101010001010101;
    local_60 = CONCAT35(local_60._5_3_,1);
    if (DAT_180961dc8 != 0) {
      lVar8 = 0;
      do {
        bVar2 = true;
        uVar11 = 0;
        do {
          if (!bVar2) goto LAB_18004c71c;
          lVar17 = lVar8 + lVar9;
          if (*(char *)((longlong)&local_68 + uVar11) != '\0') {
            cVar4 = FUN_180011220(uVar11 + lVar17);
            bVar3 = false;
            if (cVar4 == local_78[uVar11]) {
              bVar3 = bVar2;
            }
            bVar2 = bVar3;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < 0xd);
        if (bVar2) {
          if (lVar17 != 0) {
            if ((lVar17 - 0xfff8U < 0x7ffffffeffff) &&
               (cVar4 = FUN_180011220(lVar17 + 8), cVar4 == -0x18)) {
              iVar5 = FUN_180011200(lVar17 + 9);
              DAT_180ccf800 = (longlong)iVar5 + 0xd + lVar17;
            }
            else {
              DAT_180ccf800 = 0;
            }
          }
          break;
        }
LAB_18004c71c:
        uVar11 = lVar8 + 0xe;
        lVar8 = lVar8 + 1;
      } while (uVar11 < 0x141);
    }
  }
  lVar9 = DAT_180961dc0;
  if (DAT_180961dc0 != 0) {
    local_res10 = 0xff41;
    uStackX_12 = 0x51;
    iStackX_13 = CONCAT31(iStackX_13._1_3_,0x60);
    local_res8 = 0x1010101;
    lVar8 = 0;
    do {
      bVar2 = true;
      uVar11 = 0;
      do {
        if (!bVar2) goto LAB_18004c7cc;
        lVar17 = lVar8 + lVar9;
        if (local_78[uVar11 + 0x80] != '\0') {
          cVar4 = FUN_180011220(uVar11 + lVar17);
          bVar3 = false;
          if (cVar4 == *(char *)((longlong)&local_res10 + uVar11)) {
            bVar3 = bVar2;
          }
          bVar2 = bVar3;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < 4);
      if (bVar2) {
        if (lVar17 != 0) {
          DAT_180ccf7d0 = lVar17 + 4;
        }
        break;
      }
LAB_18004c7cc:
      uVar11 = lVar8 + 5;
      lVar8 = lVar8 + 1;
    } while (uVar11 < 0xd01);
  }
  local_60 = 0x39;
  local_68 = "48 83 EC 28 80 B9 ? ? ? ? 00 75 ? 48 89 5C 24 20 48 8B 1D";
  DAT_180ccf808 = FUN_1801d1e00(&local_58,&local_68);
  local_60 = 0x43;
  local_68 = "48 8B 05 ? ? ? ? C6 80 29 02 00 00 00 C7 80 A8 06 00 00 00 00 00 00";
  lVar9 = FUN_1801d1e00(&local_58,&local_68);
  if (lVar9 != 0) {
    DAT_180ccf810 = (longlong)*(int *)(lVar9 + 3) + 7 + lVar9;
  }
  uVar10 = DAT_180ccf7a8;
  uVar12 = DAT_180ccf7b0;
  uVar13 = DAT_180ccf7b8;
  uVar14 = DAT_180ccf7c0;
  uVar15 = DAT_180ccf7c8;
  lVar9 = DAT_180ccf7d0;
  uVar16 = DAT_180ccf7d8;
  lVar8 = DAT_180ccf7e0;
  lVar17 = DAT_180ccf7e8;
  lVar18 = DAT_180ccf7f0;
  lVar19 = DAT_180ccf7f8;
  lVar20 = DAT_180ccf800;
  uVar21 = DAT_180ccf808;
  lVar22 = DAT_180ccf810;
  FUN_1802b2560("[nl_view] game | cam vt %p obs %p svc %p | calc %p fov %p/%p/%p | effects %p ret %p | mode view %p | time %p pred %p fp %p zoom %p sight %p lower %p input %p"
                ,DAT_180ccf790,DAT_180ccf798,DAT_180ccf7a0,DAT_180ccf7a8,DAT_180ccf7b0,DAT_180ccf7b8
                ,DAT_180ccf7c0,DAT_180ccf7c8,DAT_180ccf7d0,DAT_180ccf7d8,DAT_180ccf7e0,DAT_180ccf7e8
                ,DAT_180ccf7f0,DAT_180ccf7f8,DAT_180ccf800,DAT_180ccf808,DAT_180ccf810);
  if (DAT_180ccf7e0 == 0) {
    FUN_1802b2560(
                 "[error] nl_view | camera time function not found: Instant Scope / unscope delay neutral"
                 );
  }
  if (DAT_180ccf7f0 == 0) {
    FUN_1802b2560("[error] nl_view | first-person test not found");
  }
  if (DAT_180ccf810 == 0) {
    FUN_1802b2560("[error] nl_view | CCSGOInput not found: Force Third Person off");
  }
  FUN_1802b2560("[nl_view] third person | CViewRender vt %p slot 4 %p | input %p",DAT_180ccf818,
                DAT_180ccf820,DAT_180ccf810,uVar10,uVar12,uVar13,uVar14,uVar15,lVar9,uVar16,lVar8,
                lVar17,lVar18,lVar19,lVar20,uVar21,lVar22);
  if (DAT_180ccf820 == 0) {
    FUN_1802b2560("[error] nl_view | CViewRender slot 4 not found: Force Third Person off");
  }
  if (DAT_180ccf7d0 == 0) {
    FUN_1802b2560("[error] nl_view | calc_viewmodel slot-12 call not found: viewmodel options off");
  }
  return;
}



/* ===== 18004c9f0 FUN_18004c9f0 ===== */

bool FUN_18004c9f0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  if (DAT_180ca15ba != '\0') {
    return true;
  }
  cVar1 = FUN_180044350();
  if (cVar1 == '\0') {
    FUN_1802b2560("[error] nl_view | schema offsets missing, the View group stays neutral");
  }
  FUN_18004c040();
  iVar6 = 1;
  if (DAT_180ccf7b0 == 0) {
    FUN_1802b2560("[error] nl_view | %s not found","CCSPlayer_CameraServices slot 34");
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_180428df0(DAT_180ccf7b0,FUN_180046290,&DAT_180ccf890);
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    else {
      uVar5 = FUN_180429510(iVar3);
      FUN_1802b2560("[error] nl_view | hook %s failed | %s","CCSPlayer_CameraServices slot 34",uVar5
                   );
      DAT_180ccf890 = 0;
      iVar3 = 0;
    }
  }
  if (DAT_180ccf7b8 == 0) {
    FUN_1802b2560("[error] nl_view | %s not found","CCSObserver_CameraServices slot 34");
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_180428df0(DAT_180ccf7b8,FUN_180046360,&DAT_180ccf880);
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    else {
      uVar5 = FUN_180429510(iVar4);
      FUN_1802b2560("[error] nl_view | hook %s failed | %s","CCSObserver_CameraServices slot 34",
                    uVar5);
      DAT_180ccf880 = 0;
      iVar4 = 0;
    }
  }
  if (DAT_180ccf7c0 == 0) {
    FUN_1802b2560("[error] nl_view | %s not found","CCSObserver_ObserverServices slot 34");
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_180428df0(DAT_180ccf7c0,FUN_1800470a0,&DAT_180ccf780);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else {
      uVar5 = FUN_180429510(iVar2);
      FUN_1802b2560("[error] nl_view | hook %s failed | %s","CCSObserver_ObserverServices slot 34",
                    uVar5);
      DAT_180ccf780 = 0;
      iVar2 = 0;
    }
  }
  if (DAT_180ccf7a8 == 0) {
    FUN_1802b2560("[error] nl_view | %s not found","CalcView slot 33");
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_180428df0(DAT_180ccf7a8,FUN_1800499c0,&DAT_180ccf9d8);
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    else {
      uVar5 = FUN_180429510(iVar7);
      FUN_1802b2560("[error] nl_view | hook %s failed | %s","CalcView slot 33",uVar5);
      iVar7 = 0;
      DAT_180ccf9d8 = 0;
    }
  }
  iVar7 = iVar2 + iVar3 + iVar4 + iVar7;
  if (DAT_180ccf7d0 != 0) {
    if (DAT_180ccf7c8 == 0) {
      FUN_1802b2560("[error] nl_view | %s not found","CViewEffects slot 12");
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_180428df0(DAT_180ccf7c8,FUN_18004b550,&DAT_180ccf830);
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      else {
        uVar5 = FUN_180429510(iVar3);
        FUN_1802b2560("[error] nl_view | hook %s failed | %s","CViewEffects slot 12",uVar5);
        iVar3 = 0;
        DAT_180ccf830 = 0;
      }
    }
    iVar7 = iVar7 + iVar3;
  }
  if (DAT_180ccf7d8 == 0) {
    FUN_1802b2560("[error] nl_view | %s not found","ClientModeCSNormal slot 27");
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_180428df0(DAT_180ccf7d8,FUN_18004b6c0,&DAT_180ccf9c8);
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    else {
      uVar5 = FUN_180429510(iVar3);
      FUN_1802b2560("[error] nl_view | hook %s failed | %s","ClientModeCSNormal slot 27",uVar5);
      iVar3 = 0;
      DAT_180ccf9c8 = 0;
    }
  }
  if (DAT_180962118 == 0) {
    FUN_1802b2560("[error] nl_view | %s not found",
                  "spectator command (spec_mode / spec_next / spec_prev / spec_player / spec_goto)")
    ;
  }
  else {
    iVar4 = FUN_180428df0(DAT_180962118,FUN_180046e40,&DAT_180ccf9d0);
    if (iVar4 == 0) goto LAB_18004cd16;
    uVar5 = FUN_180429510(iVar4);
    FUN_1802b2560("[error] nl_view | hook %s failed | %s",
                  "spectator command (spec_mode / spec_next / spec_prev / spec_player / spec_goto)",
                  uVar5);
    DAT_180ccf9d0 = 0;
  }
  iVar6 = 0;
LAB_18004cd16:
  iVar6 = iVar6 + iVar7 + iVar3;
  DAT_180ca15ba = 1;
  FUN_1802b2560("[nl_view] %d hooks created",iVar6);
  return iVar6 != 0;
}



/* ===== 18004cd50 FUN_18004cd50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18004cd50(int param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  int *piVar7;
  float fVar8;
  float local_res10 [2];
  float local_res18 [4];
  int local_28 [8];
  
  if ((DAT_180ca15ba != '\0') && (cVar1 = FUN_180044350(), cVar1 != '\0')) {
    if (param_1 == 7) {
      lVar4 = FUN_180045260();
      if ((((lVar4 == 0) || (DAT_180ccf8cc == 0)) ||
          (lVar4 = FUN_18000f3a0((ulonglong)DAT_180ccf8cc + lVar4), fVar8 = DAT_180962d20,
          lVar4 == 0)) || ((lVar4 != DAT_180962d18 || (DAT_180ccf920 == 0)))) {
        FUN_180046dd0();
        return;
      }
      local_res10[0] = DAT_180962d20;
      fVar2 = (float)FUN_180011200(lVar4 + (ulonglong)DAT_180ccf920);
      if (fVar2 == fVar8) {
        return;
      }
      iVar3 = FUN_1800441b0();
      if (((iVar3 != 0) && (DAT_18095cf8e != '\0')) && (fVar8 != -NAN)) {
        plVar5 = (longlong *)FUN_1803a0940(local_res18,fVar8);
        if ((*plVar5 != 0) &&
           (cVar1 = FUN_180011220((ulonglong)DAT_180ccf8d4 + *plVar5), cVar1 == '\0')) {
          FUN_180013280((ulonglong)DAT_180ccf920 + lVar4,local_res10);
          FUN_180044280(lVar4);
          _DAT_180962d24 = _DAT_180962d24 + 1;
          return;
        }
      }
      FUN_180046dd0();
      return;
    }
    if (param_1 == 0xc) {
      FUN_180046dd0();
      FUN_1800463f0();
      local_28[1] = 0xfa;
      piVar7 = local_28;
      local_28[0] = 0xf;
      if (0xe < DAT_18095cf88) {
        piVar7 = &DAT_18095cf88;
      }
      piVar6 = local_28 + 1;
      if (DAT_18095cf88 < 0xfb) {
        piVar6 = piVar7;
      }
      iVar3 = *piVar6;
      cVar1 = FUN_180047310();
      if ((cVar1 == '\0') || (DAT_180ca12ea == '\0')) {
        fVar8 = (float)iVar3 - DAT_1808ac864;
        if (DAT_1808ac950 <= (float)iVar3 - DAT_1808ac864) {
          fVar8 = DAT_1808ac950;
        }
      }
      else {
        fVar8 = 0.0;
      }
      local_res18[0] = fVar8;
      if (DAT_180962bd8 == 0) {
        if (DAT_180962be0 == '\0') {
          DAT_180962bd8 = FUN_180264b70(PTR_s_cl_view_near_hud_player_eye_dist_180962bd0);
          DAT_180962be0 = DAT_180962bd8 == 0;
          if (DAT_180962bd8 == 0) {
            FUN_1802b2560("[error] nl_view | convar %s not found",
                          PTR_s_cl_view_near_hud_player_eye_dist_180962bd0);
          }
        }
        if (DAT_180962bd8 == 0) {
          return;
        }
      }
      lVar4 = DAT_180962bd8;
      if (((uint)fVar8 & 0x7f800000) != 0x7f800000) {
        if (DAT_180ca15b8 == '\0') {
          local_res10[0] = (float)FUN_180264d70(DAT_180962bd8);
          _DAT_180ccf82c = local_res10[0];
          if (((uint)local_res10[0] & 0x7f800000) == 0x7f800000) {
            _DAT_180ccf82c = 0.0;
          }
          DAT_180ca15b8 = '\x01';
          FUN_1802b2560("[nl_view] cl_view_near_hud_player_eye_dist %p | game value %.2f",lVar4,
                        (double)_DAT_180ccf82c);
        }
        FUN_180013280(lVar4 + 0x58,local_res18);
      }
    }
  }
  return;
}



/* ===== 18004cfd0 FUN_18004cfd0 ===== */

ulonglong FUN_18004cfd0(undefined8 param_1,float *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulonglong in_RAX;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 local_res18 [16];
  undefined1 local_68 [64];
  
  if ((DAT_180ca15ba == '\0') || (in_RAX = FUN_180044350(), (char)in_RAX == '\0'))
  goto LAB_18004d2eb;
  lVar6 = FUN_1800452c0();
  if (((lVar6 == 0) ||
      (((cVar2 = FUN_180011220((ulonglong)DAT_180ccf8d4 + lVar6), cVar2 != '\0' ||
        (DAT_180ccf7f0 == 0)) || (cVar2 = FUN_1800440c0(DAT_180ccf7f0,lVar6), cVar2 == '\0')))) ||
     (lVar7 = FUN_18000f3a0((ulonglong)DAT_180ccf8d0 + lVar6), lVar7 == 0)) {
    lVar7 = 0;
  }
  else {
    uVar3 = FUN_180011200((ulonglong)DAT_180ccf924 + lVar7);
    plVar8 = (longlong *)FUN_1803a0940(local_res18,uVar3);
    lVar7 = *plVar8;
  }
  fVar11 = DAT_1808acabc;
  if (DAT_18095cf43 == '\0') {
    if (DAT_180962cb8 == 0) {
      if (DAT_180962cc0 == '\0') {
        DAT_180962cb8 = FUN_180264b70(PTR_s_viewmodel_fov_180962cb0);
        DAT_180962cc0 = DAT_180962cb8 == 0;
        if (DAT_180962cb8 != 0) goto LAB_18004d0f7;
        FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_viewmodel_fov_180962cb0);
      }
      if (DAT_180962cb8 != 0) goto LAB_18004d0f7;
    }
    else {
LAB_18004d0f7:
      fVar10 = (float)FUN_180264d70(DAT_180962cb8);
      if (((uint)fVar10 & 0x7f800000) != 0x7f800000) goto LAB_18004d127;
    }
    fVar10 = fVar11;
  }
  else {
    fVar10 = (float)DAT_18095cf44;
  }
LAB_18004d127:
  if ((lVar6 != 0) && (DAT_180ccf7f0 != 0)) {
    cVar2 = FUN_1800440c0(DAT_180ccf7f0,lVar6);
    if ((cVar2 != '\0') && (DAT_18095cf43 == '\0')) {
      lVar9 = FUN_180045260();
      if ((lVar6 != lVar9) &&
         (((lVar9 = FUN_18000f3a0(lVar6 + 0x10), lVar9 == 0 ||
           (uVar4 = FUN_180011200(lVar9 + 0x30), (uVar4 & 0x840) != 0x800)) && (DAT_180ccf908 != 0))
         )) {
        fVar10 = (float)FUN_18000f3d0(lVar6 + (ulonglong)DAT_180ccf908);
      }
      if (fVar10 <= fVar11) {
        if (fVar10 <= DAT_1808acaa8) {
          fVar10 = DAT_1808acaa8;
        }
      }
      else {
        fVar10 = fVar11;
      }
    }
  }
  if (lVar7 != 0) {
    plVar8 = (longlong *)FUN_18004b5c0(local_68,lVar6,lVar7);
    iVar1 = DAT_18095d2d0;
    if (*plVar8 != 0) {
      lVar6 = plVar8[1];
      lVar9 = plVar8[2];
      cVar2 = *(char *)((longlong)plVar8 + 0x11);
      if ((((lVar6 == 0) || (iVar5 = FUN_180011200((ulonglong)DAT_180ccf950 + lVar6), iVar5 != 5))
          || (iVar1 == 0)) || (iVar5 = FUN_180011200((ulonglong)DAT_180ccf954 + lVar6), iVar5 < 1))
      {
        if (cVar2 == '\0') goto LAB_18004d250;
        if ((char)lVar9 != '\0') {
          if (iVar1 == 0) {
            fVar11 = (float)FUN_18000f3d0((ulonglong)DAT_180ccf92c +
                                          (ulonglong)DAT_180ccf934 + lVar7);
            fVar10 = fVar11 * (DAT_1808aca88 - fVar10) + fVar10;
            goto LAB_18004d26d;
          }
          goto LAB_18004d250;
        }
        fVar10 = DAT_1808ac950;
      }
      else {
        FUN_180011200((ulonglong)DAT_180ccf958 + lVar6);
        FUN_180011200((ulonglong)DAT_180ccf95c + lVar6);
        FUN_180011200((ulonglong)DAT_180ccf954 + lVar6);
LAB_18004d250:
      }
      fVar10 = (float)FUN_180044140(lVar7,fVar10);
    }
  }
LAB_18004d26d:
  uVar4 = (uint)fVar10 & 0x7f800000;
  in_RAX = (ulonglong)CONCAT31((int3)(uVar4 >> 8),uVar4 != 0x7f800000);
  if (uVar4 != 0x7f800000) {
    *param_2 = fVar10;
    return in_RAX;
  }
LAB_18004d2eb:
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 18004d300 FUN_18004d300 ===== */

void FUN_18004d300(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_180ca15ba == '\0') {
    return;
  }
  cVar1 = FUN_180044350();
  if (cVar1 == '\0') {
    return;
  }
  if (DAT_180ccf8c4 == 0) {
    return;
  }
  lVar3 = FUN_180045260();
  if (param_1 != lVar3) {
    return;
  }
  if ((DAT_180962dc8 == 0) && (DAT_180962dd0 == '\0')) {
    DAT_180962dc8 = FUN_180264b70(PTR_s_fov_cs_debug_180962dc0);
    DAT_180962dd0 = DAT_180962dc8 == 0;
    if (DAT_180962dc8 == 0) {
      FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_fov_cs_debug_180962dc0);
    }
  }
  fVar13 = 0.0;
  if (((DAT_180962dc8 != 0) &&
      (local_res8[0] = (float)FUN_180264d70(DAT_180962dc8),
      ((uint)local_res8[0] & 0x7f800000) != 0x7f800000)) && (0.0 < local_res8[0])) {
    return;
  }
  if ((DAT_18095cf20 == '\0') && (DAT_18095cf35 == '\0')) {
    return;
  }
  lVar3 = FUN_18000f3a0((ulonglong)DAT_180ccf8bc + param_1);
  if (lVar3 == 0) {
    return;
  }
  local_res10[0] = (float)FUN_18000f3d0((ulonglong)DAT_180ccf8ac + lVar3);
  local_res8[0] = (float)FUN_1800453c0(lVar3);
  FUN_180013280((ulonglong)DAT_180ccf8ac + lVar3,local_res8);
  fVar9 = (float)FUN_180044070(lVar3,0x24);
  fVar10 = (float)FUN_180044070(lVar3,0x2a);
  uVar11 = FUN_180044070(lVar3,0x23);
  lVar4 = FUN_18000f3a0((ulonglong)DAT_180ccf8d0 + param_1);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar2 = FUN_180011200((ulonglong)DAT_180ccf924 + lVar4);
    puVar5 = (undefined8 *)FUN_1803a0940(local_res8,uVar2);
    uVar6 = *puVar5;
  }
  fVar12 = (float)FUN_180045550(lVar3,uVar6,uVar11,fVar9);
  FUN_180013280((ulonglong)DAT_180ccf8ac + lVar3,local_res10);
  if (((uint)fVar12 & 0x7f800000) == 0x7f800000) {
    return;
  }
  if (((uint)fVar10 & 0x7f800000) == 0x7f800000) {
    return;
  }
  if (((uint)fVar9 & 0x7f800000) == 0x7f800000) {
    return;
  }
  fVar8 = (float)(int)fVar9;
  fVar9 = (float)(int)fVar12;
  if ((int)fVar12 < (int)fVar10) {
    fVar9 = (float)(int)fVar10;
  }
  local_res10[0] = fVar8;
  if (fVar9 == fVar8) {
    fVar10 = DAT_1808ac34c;
    fVar12 = DAT_1808ac34c;
  }
  else {
    local_res8[0] = 1.4013e-45;
    pfVar7 = local_res8;
    if (0 < (int)fVar8) {
      pfVar7 = local_res10;
    }
    if ((DAT_180962d08 == 0) && (DAT_180962d10 == '\0')) {
      DAT_180962d08 = FUN_180264b70(PTR_s_zoom_sensitivity_ratio_180962d00);
      DAT_180962d10 = DAT_180962d08 == 0;
      if (DAT_180962d08 == 0) {
        FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_zoom_sensitivity_ratio_180962d00
                     );
      }
    }
    fVar10 = DAT_1808ac34c;
    if ((DAT_180962d08 == 0) ||
       (local_res18 = (float)FUN_180264d70(DAT_180962d08), fVar12 = local_res18,
       ((uint)local_res18 & 0x7f800000) == 0x7f800000)) {
      fVar12 = fVar10;
    }
    fVar12 = ((float)(int)fVar9 * fVar12) / (float)(int)*pfVar7;
  }
  local_res8[0] = fVar12;
  FUN_180013280((ulonglong)DAT_180ccf8c4 + param_1,local_res8);
  if (DAT_180ccf8c8 == 0) {
    return;
  }
  if (fVar9 == fVar8) goto LAB_18004d707;
  if (DAT_180962c28 == 0) {
    if (DAT_180962c30 == '\0') {
      DAT_180962c28 = FUN_180264b70(PTR_s_sensitivity_180962c20);
      DAT_180962c30 = DAT_180962c28 == 0;
      if (DAT_180962c28 != 0) goto LAB_18004d6d2;
      FUN_1802b2560("[error] nl_view | convar %s not found",PTR_s_sensitivity_180962c20);
    }
    if (DAT_180962c28 != 0) goto LAB_18004d6d2;
LAB_18004d6ff:
    fVar13 = fVar10;
  }
  else {
LAB_18004d6d2:
    fVar13 = (float)FUN_180264d70(DAT_180962c28);
    if (((uint)fVar13 & 0x7f800000) == 0x7f800000) goto LAB_18004d6ff;
  }
  fVar13 = fVar13 * fVar12;
LAB_18004d707:
  local_res8[0] = fVar13;
  FUN_180013280((ulonglong)DAT_180ccf8c8 + param_1,local_res8);
  return;
}



/* ===== 18004d750 FUN_18004d750 ===== */

undefined8 FUN_18004d750(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if ((((DAT_180ca15ba == '\0') || (cVar1 = FUN_180044350(), cVar1 == '\0')) ||
      (DAT_18095cf8f == '\0')) ||
     (((iVar2 = FUN_1800441b0(), iVar2 == 0 || (lVar3 = FUN_180045260(), lVar3 == 0)) ||
      (cVar1 = FUN_180011220((ulonglong)DAT_180ccf8d4 + lVar3), cVar1 == '\0')))) {
    return 0;
  }
  if ((DAT_180ccf8e4 != 0) &&
     (cVar1 = FUN_180011220(lVar3 + (ulonglong)DAT_180ccf8e4), cVar1 == '\x01')) {
    return 0;
  }
  if (((DAT_180ccf8cc == 0) || (lVar3 = FUN_18000f3a0(lVar3 + (ulonglong)DAT_180ccf8cc), lVar3 == 0)
      ) || (cVar1 = FUN_180011220((ulonglong)DAT_180ccf91c + lVar3), cVar1 != '\x04')) {
    return 1;
  }
  return 0;
}



/* ===== 18004d7f0 FUN_18004d7f0 ===== */

undefined4 * FUN_18004d7f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_18091a168;
  return param_1;
}



/* ===== 18004d810 FUN_18004d810 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18004d810(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 ****ppppuVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 **local_98 [4];
  undefined8 ****local_78;
  longlong lStack_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 ****local_58;
  undefined1 local_50;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  local_58 = (undefined8 ****)local_98;
  local_c0 = param_1;
  plVar3 = (longlong *)FUN_180024b50(local_98,param_3);
  local_a8 = *(undefined4 *)param_2;
  uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_a0 = *(undefined4 *)(param_2 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_b8 = plVar3;
  if (plVar3[2] != 0) {
    FUN_1800134a0(plVar3,&DAT_1806dfa2c,2);
  }
  puVar4 = (undefined8 *)FUN_180013800(&local_a8,&local_58);
  if ((ulonglong)puVar4[3] < 0x10) {
    puVar6 = puVar4;
  }
  else {
    puVar6 = (undefined8 *)*puVar4;
  }
  FUN_1800134a0(plVar3,puVar6,puVar4[2]);
  FUN_18000f890(&local_58);
  local_78 = (undefined8 ****)*plVar3;
  lStack_70 = plVar3[1];
  local_68 = plVar3[2];
  uStack_60 = plVar3[3];
  plVar3[2] = 0;
  plVar3[3] = 0xf;
  *(undefined1 *)plVar3 = 0;
  local_c8 = 1;
  FUN_18000f890(plVar3);
  local_58 = &local_78;
  if (0xf < uStack_60) {
    local_58 = local_78;
  }
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_50 = 1;
  FUN_1804ef040(&local_58);
  *param_1 = std::runtime_error::vftable;
  local_c8 = 0;
  if (0xf < uStack_60) {
    uVar7 = uStack_60 + 1;
    ppppuVar5 = local_78;
    if (0xfff < uVar7) {
      ppppuVar5 = (undefined8 ****)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar5))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar4 = (undefined8 *)(*pcVar1)();
        return puVar4;
      }
      uVar7 = uStack_60 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar5,uVar7);
  }
  *param_1 = std::_System_error::vftable;
  uVar2 = param_2[1];
  param_1[3] = *param_2;
  param_1[4] = uVar2;
  return param_1;
}



/* ===== 18004d9c0 FUN_18004d9c0 ===== */

undefined8 * FUN_18004d9c0(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_18004d810(local_18,&local_18);
  *param_1 = std::system_error::vftable;
  return param_1;
}



/* ===== 18004da00 FUN_18004da00 ===== */

char * FUN_18004da00(void)

{
  return "iostream";
}



/* ===== 18004da10 FUN_18004da10 ===== */

undefined8 FUN_18004da10(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 1) {
    FUN_180024b20(param_2,"iostream stream error",0x15,param_4,0);
  }
  else {
    uVar1 = FUN_1804ea440(param_3);
    FUN_180013350(param_2,uVar1);
  }
  return param_2;
}



/* ===== 18004da70 FUN_18004da70 ===== */

undefined8 * FUN_18004da70(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}



/* ===== 18004daa0 FUN_18004daa0 ===== */

undefined8 * FUN_18004daa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  FUN_1804ef0e0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x18);
  }
  return param_1;
}



/* ===== 18004daf0 FUN_18004daf0 ===== */

void FUN_18004daf0(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  FUN_1804ef0e0(param_1 + 1);
  return;
}



/* ===== 18004db10 FUN_18004db10 ===== */

void FUN_18004db10(void)

{
  undefined1 local_28 [40];
  
  FUN_18004da70(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_28,&DAT_180915ea0);
}



/* ===== 18004db30 FUN_18004db30 ===== */

undefined8 * FUN_18004db30(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = std::bad_cast::vftable;
  return param_1;
}



