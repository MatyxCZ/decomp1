/* ===== 1803a1d90 FUN_1803a1d90 ===== */

int FUN_1803a1d90(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  iVar5 = FUN_180011200((ulonglong)DAT_1809618d4 + param_1);
  lVar6 = FUN_18000f3a0((ulonglong)DAT_1809618d8 + param_1);
  lVar7 = FUN_18000f3a0((ulonglong)DAT_1809618dc + param_1);
  lVar8 = FUN_18000f3a0((ulonglong)DAT_1809618e0 + param_1);
  if ((((lVar6 != 0) && (lVar7 != 0)) && (lVar8 != 0)) && (0 < iVar5)) {
    uVar1 = FUN_180011440((ulonglong)DAT_1809618fc + param_2);
    uVar2 = FUN_180011440(lVar7);
    uVar3 = FUN_180011440(lVar8);
    uVar9 = (ulonglong)uVar3 + (ulonglong)uVar2 + (ulonglong)uVar1;
    if (uVar9 < (ulonglong)(longlong)iVar5) {
      sVar4 = FUN_180011440(lVar6 + uVar9 * 2);
      return (int)sVar4;
    }
  }
  return -1;
}



/* ===== 1803a1e60 FUN_1803a1e60 ===== */

longlong FUN_1803a1e60(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  undefined1 local_78 [16];
  undefined1 local_68 [64];
  
  FUN_180540170(param_1,0,0x370);
  FUN_1803a24a0(param_1);
  *(undefined4 *)(param_1 + 0x370) = 0;
  if ((param_2 == 0) ||
     ((lVar7 = FUN_18000f3a0((ulonglong)DAT_1809618b0 + param_2), lVar7 == 0 &&
      (lVar7 = FUN_18000f3a0((ulonglong)DAT_1809618b4 + param_2), lVar7 == 0)))) {
    return param_1;
  }
  lVar7 = FUN_18000f3a0(lVar7);
  if ((lVar7 == 0) || (lVar8 = FUN_1803a1d00(lVar7), lVar8 == 0)) {
    return param_1;
  }
  iVar4 = FUN_180011200((ulonglong)DAT_1809618cc + lVar8);
  if (((iVar4 - 1U < 0x14) &&
      (lVar8 = FUN_18000f3a0((ulonglong)DAT_1809618d0 + lVar8), fVar1 = DAT_1808acb08, lVar8 != 0))
     && (uVar10 = 0, 0 < iVar4)) {
    do {
      iVar13 = (int)uVar10;
      lVar11 = DAT_1809618e4 * uVar10 + lVar8;
      iVar5 = FUN_1803a1d90(lVar7,lVar11);
      if (((-1 < iVar5) &&
          (fVar14 = (float)FUN_18000f3d0((ulonglong)DAT_1809618f0 + lVar11),
          ((uint)fVar14 & 0x7f800000) != 0x7f800000)) && ((0.0 <= fVar14 && (fVar14 <= fVar1)))) {
        lVar12 = (longlong)*(int *)(param_1 + 0x370) * 0x2c;
        *(int *)(param_1 + 0x370) = *(int *)(param_1 + 0x370) + 1;
        *(int *)(param_1 + lVar12) = iVar13;
        *(int *)(param_1 + 4 + lVar12) = iVar5;
        switch(iVar13) {
        case 0:
          uVar6 = 1;
          break;
        case 1:
          uVar6 = 8;
          break;
        case 2:
        case 3:
          uVar6 = 3;
          break;
        case 4:
        case 5:
        case 6:
          uVar6 = 2;
          break;
        case 7:
        case 9:
        case 0xb:
          uVar6 = 7;
          break;
        case 8:
        case 10:
        case 0xc:
          uVar6 = 6;
          break;
        case 0xd:
        case 0xf:
        case 0x10:
          uVar6 = 5;
          break;
        case 0xe:
        case 0x11:
        case 0x12:
          uVar6 = 4;
          break;
        default:
          uVar6 = 0;
        }
        uVar10 = (ulonglong)DAT_1809618e8;
        *(undefined4 *)(param_1 + 8 + lVar12) = uVar6;
        puVar9 = (undefined8 *)FUN_1800111b0(local_78,uVar10 + lVar11);
        uVar10 = (ulonglong)DAT_1809618ec;
        uVar6 = *(undefined4 *)(puVar9 + 1);
        *(undefined8 *)(lVar12 + 0xc + param_1) = *puVar9;
        *(undefined4 *)(lVar12 + 0x14 + param_1) = uVar6;
        puVar9 = (undefined8 *)FUN_1800111b0(local_68,uVar10 + lVar11);
        uVar6 = *(undefined4 *)(puVar9 + 1);
        *(undefined8 *)(lVar12 + 0x18 + param_1) = *puVar9;
        *(undefined4 *)(lVar12 + 0x20 + param_1) = uVar6;
        uVar10 = (ulonglong)DAT_1809618f4;
        *(float *)(param_1 + 0x24 + lVar12) = fVar14;
        uVar2 = FUN_180011220(uVar10 + lVar11);
        uVar10 = (ulonglong)DAT_1809618f8;
        *(undefined1 *)(param_1 + 0x28 + lVar12) = uVar2;
        cVar3 = FUN_180011220(uVar10 + lVar11);
        *(bool *)(param_1 + 0x29 + lVar12) = cVar3 != '\0';
      }
      uVar10 = (ulonglong)(iVar13 + 1U);
    } while ((int)(iVar13 + 1U) < iVar4);
  }
  return param_1;
}



/* ===== 1803a2190 FUN_1803a2190 ===== */

undefined1 FUN_1803a2190(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 local_d8 [184];
  
  if ((((param_1 != 0) && (-1 < *(int *)(param_2 + 4))) &&
      (uVar6 = (ulonglong)DAT_180ca0964, DAT_180ca0964 != 0)) &&
     (((DAT_180ca0968 != 0 &&
       (lVar7 = FUN_18000f3a0(uVar6 + (ulonglong)DAT_180ca0968 + param_1), lVar7 != 0)) &&
      ((DAT_180ca096c == 0 ||
       ((iVar5 = FUN_180011200(uVar6 + (ulonglong)DAT_180ca096c + param_1), iVar5 < 1 ||
        (*(int *)(param_2 + 4) < iVar5)))))))) {
    lVar7 = (longlong)*(int *)(param_2 + 4) * 0x20 + lVar7;
    pfVar8 = (float *)FUN_1800111b0(local_d8,lVar7);
    fVar10 = *pfVar8;
    fVar9 = pfVar8[1];
    fVar17 = pfVar8[2];
    if ((fVar10 != 0.0) || ((fVar9 != 0.0 || (fVar17 != 0.0)))) {
      fVar13 = (*(float *)(param_2 + 0x1c) + *(float *)(param_2 + 0x10)) * DAT_1808ac1f4;
      fVar14 = (*(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x14)) * DAT_1808ac1f4;
      fVar15 = (*(float *)(param_2 + 0x18) + *(float *)(param_2 + 0xc)) * DAT_1808ac1f4;
      if (*(char *)(param_2 + 0x29) != '\0') {
        *param_3 = fVar10 + fVar15;
        param_3[1] = fVar13 + fVar9;
        param_3[2] = fVar14 + fVar17;
        return 1;
      }
      pfVar8 = (float *)FUN_1803a2810(local_d8,lVar7 + 0x10);
      fVar1 = pfVar8[1];
      fVar2 = *pfVar8;
      fVar3 = pfVar8[2];
      fVar4 = pfVar8[3];
      fVar12 = fVar1 * fVar14 - fVar3 * fVar13;
      fVar16 = fVar3 * fVar15 - fVar2 * fVar14;
      fVar12 = fVar12 + fVar12;
      fVar11 = fVar2 * fVar13 - fVar1 * fVar15;
      fVar16 = fVar16 + fVar16;
      fVar11 = fVar11 + fVar11;
      fVar10 = (fVar11 * fVar1 - fVar16 * fVar3) + fVar12 * fVar4 + fVar15 + fVar10;
      *param_3 = fVar10;
      fVar9 = (fVar12 * fVar3 - fVar11 * fVar2) + fVar13 + fVar16 * fVar4 + fVar9;
      fVar17 = (fVar16 * fVar2 - fVar12 * fVar1) + fVar14 + fVar11 * fVar4 + fVar17;
      param_3[1] = fVar9;
      param_3[2] = fVar17;
      if (((((uint)fVar10 & 0x7f800000) == 0x7f800000) || (((uint)fVar9 & 0x7f800000) == 0x7f800000)
          ) || (((uint)fVar17 & 0x7f800000) == 0x7f800000)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



/* ===== 1803a24a0 FUN_1803a24a0 ===== */

void FUN_1803a24a0(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined2 *)(param_1 + 0x47) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffffffffffff;
  param_1[0x16] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffffffffffff;
  param_1[0x21] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffffffffffff;
  param_1[0x2c] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffffffffffff;
  param_1[0x37] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0xffffffffffffffff;
  param_1[0x42] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4d] = 0xffffffffffffffff;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined2 *)((longlong)param_1 + 700) = 0;
  param_1[0x58] = 0xffffffffffffffff;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined2 *)(param_1 + 0x5d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x314) = 0;
  param_1[99] = 0xffffffffffffffff;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined2 *)((longlong)param_1 + 0x36c) = 0;
  return;
}



/* ===== 1803a2810 FUN_1803a2810 ===== */

undefined8 * FUN_1803a2810(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 + -0x2000 < (undefined8 *)0x7ffffffeffff) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    return param_1;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  return param_1;
}



/* ===== 1803a2870 FUN_1803a2870 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803a2870(void)

{
  int iVar1;
  char **ppcVar2;
  char **ppcVar3;
  char *local_208;
  char *local_200;
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
  
  ppcVar3 = &local_128;
  if ((DAT_181108a60 == '\0') && (DAT_1811089f0 != 0)) {
    ppcVar2 = &local_208;
    local_208 = "C_BaseEntity";
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_lifeState");
      if (iVar1 != 0) goto LAB_1803a28f3;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_200);
    iVar1 = 0;
LAB_1803a28f3:
    ppcVar2 = &local_200;
    local_200 = "C_BaseEntity";
    DAT_181108a64 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nCreationTick");
      if (iVar1 != 0) goto LAB_1803a2933;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_1f8);
    iVar1 = 0;
LAB_1803a2933:
    ppcVar2 = &local_1f8;
    local_1f8 = "C_BaseEntity";
    DAT_181108a68 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flSimulationTime");
      if (iVar1 != 0) goto LAB_1803a2973;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_1f0);
    iVar1 = 0;
LAB_1803a2973:
    ppcVar2 = &local_1f0;
    local_1f0 = "C_BaseEntity";
    DAT_181108a6c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bTakesDamage");
      if (iVar1 != 0) goto LAB_1803a29b3;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_1e8);
    iVar1 = 0;
LAB_1803a29b3:
    ppcVar2 = &local_1e8;
    local_1e8 = "C_BaseEntity";
    DAT_181108a70 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nActualMoveType");
      if (iVar1 != 0) goto LAB_1803a29f3;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_1e0);
    iVar1 = 0;
LAB_1803a29f3:
    local_d0 = "C_CSPlayerPawnBase";
    local_c8 = "C_CSPlayerPawn";
    ppcVar2 = &local_d0;
    DAT_181108a74 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flLastSpawnTimeIndex");
      if (iVar1 != 0) goto LAB_1803a2a42;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_c0);
    iVar1 = 0;
LAB_1803a2a42:
    ppcVar2 = &local_c0;
    local_c0 = "C_CSPlayerPawn";
    local_b8 = "C_CSPlayerPawnBase";
    DAT_181108a78 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bIsDefusing");
      if (iVar1 != 0) goto LAB_1803a2a82;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_b0);
    iVar1 = 0;
LAB_1803a2a82:
    ppcVar2 = &local_b0;
    local_b0 = "C_CSPlayerPawn";
    local_a8 = "C_CSPlayerPawnBase";
    DAT_181108a7c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bIsScoped");
      if (iVar1 != 0) goto LAB_1803a2ac5;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_a0);
    iVar1 = 0;
LAB_1803a2ac5:
    ppcVar2 = &local_a0;
    local_a0 = "C_CSPlayerPawn";
    local_98 = "C_CSPlayerPawnBase";
    DAT_181108a80 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bGunGameImmunity");
      if (iVar1 != 0) goto LAB_1803a2b05;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_90);
    iVar1 = 0;
LAB_1803a2b05:
    ppcVar2 = &local_90;
    local_90 = "C_CSPlayerPawnBase";
    local_88 = "C_CSPlayerPawn";
    DAT_181108a84 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flFlashOverlayAlpha");
      if (iVar1 != 0) goto LAB_1803a2b45;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_80);
    iVar1 = 0;
LAB_1803a2b45:
    ppcVar2 = &local_80;
    local_80 = "C_CSPlayerPawnBase";
    local_78 = "C_CSPlayerPawn";
    DAT_181108a88 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bFlashBuildUp");
      if (iVar1 != 0) goto LAB_1803a2b85;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_70);
    iVar1 = 0;
LAB_1803a2b85:
    ppcVar2 = &local_70;
    local_70 = "C_CSPlayerPawn";
    local_68 = "C_CSPlayerPawnBase";
    DAT_181108a8c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_ArmorValue");
      if (iVar1 != 0) goto LAB_1803a2bc5;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_60);
    iVar1 = 0;
LAB_1803a2bc5:
    ppcVar2 = &local_60;
    local_60 = "C_CSPlayerPawn";
    local_58 = "C_CSPlayerPawnBase";
    DAT_181108a90 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bIsGrabbingHostage");
      if (iVar1 != 0) goto LAB_1803a2c05;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_50);
    iVar1 = 0;
LAB_1803a2c05:
    ppcVar2 = &local_50;
    local_50 = "C_CSPlayerPawn";
    local_48 = "C_CSPlayerPawnBase";
    DAT_181108a94 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_pHostageServices");
      if (iVar1 != 0) goto LAB_1803a2c45;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_40);
    iVar1 = 0;
LAB_1803a2c45:
    ppcVar2 = &local_1e0;
    local_1e0 = "CCSPlayer_HostageServices";
    DAT_181108a98 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_hCarriedHostage");
      if (iVar1 != 0) goto LAB_1803a2c83;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_1d8);
    iVar1 = 0;
LAB_1803a2c83:
    ppcVar2 = &local_40;
    local_40 = "C_CSPlayerPawn";
    local_38 = "C_CSPlayerPawnBase";
    DAT_181108a9c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flVelocityModifier");
      if (iVar1 != 0) goto LAB_1803a2cc5;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_30);
    iVar1 = 0;
LAB_1803a2cc5:
    local_1d8 = "C_BasePlayerPawn";
    ppcVar2 = &local_1d8;
    DAT_181108aa0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_pItemServices");
      if (iVar1 != 0) goto LAB_1803a2d03;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_1d0);
    iVar1 = 0;
LAB_1803a2d03:
    local_1d0 = "CCSPlayer_ItemServices";
    ppcVar2 = &local_1d0;
    DAT_181108aa4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bHasHelmet");
      if (iVar1 != 0) goto LAB_1803a2d43;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_1c8);
    iVar1 = 0;
LAB_1803a2d43:
    ppcVar2 = &local_1c8;
    local_1c8 = "CCSPlayer_ItemServices";
    DAT_181108aa8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bHasDefuser");
      if (iVar1 != 0) goto LAB_1803a2d83;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_1c0);
    iVar1 = 0;
LAB_1803a2d83:
    ppcVar2 = &local_1c0;
    local_1c0 = "C_BasePlayerPawn";
    DAT_181108aac = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_pMovementServices");
      if (iVar1 != 0) goto LAB_1803a2dc3;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_1b8);
    iVar1 = 0;
LAB_1803a2dc3:
    ppcVar2 = &local_30;
    local_30 = "CCSPlayer_MovementServices";
    local_28 = "CPlayer_MovementServices_Humanoid";
    DAT_181108ab0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flDuckAmount");
      if (iVar1 != 0) goto LAB_1803a2e15;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_20);
    iVar1 = 0;
LAB_1803a2e15:
    ppcVar2 = &local_1b8;
    local_1b8 = "C_BasePlayerPawn";
    DAT_181108ab4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_hController");
      if (iVar1 != 0) goto LAB_1803a2e53;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_1b0);
    iVar1 = 0;
LAB_1803a2e53:
    local_1b0 = "CCSPlayerController";
    ppcVar2 = &local_1b0;
    _DAT_181108ab8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_iPing");
      if (iVar1 != 0) goto LAB_1803a2e92;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_1a8);
    iVar1 = 0;
LAB_1803a2e92:
    ppcVar2 = &local_1a8;
    local_1a8 = "CCSPlayerController";
    DAT_181108abc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_pInGameMoneyServices");
      if (iVar1 != 0) goto LAB_1803a2ec2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_1a0);
    iVar1 = 0;
LAB_1803a2ec2:
    ppcVar2 = &local_1a0;
    local_1a0 = "CCSPlayerController_InGameMoneyServices";
    DAT_181108ac0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_iAccount");
      if (iVar1 != 0) goto LAB_1803a2f02;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_198);
    iVar1 = 0;
LAB_1803a2f02:
    local_198 = "CBasePlayerController";
    ppcVar2 = &local_198;
    DAT_181108ac4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_steamID");
      if (iVar1 != 0) goto LAB_1803a2f42;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_190);
    iVar1 = 0;
LAB_1803a2f42:
    ppcVar2 = &local_190;
    local_190 = "CBasePlayerController";
    DAT_181108ac8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nTickBase");
      if (iVar1 != 0) goto LAB_1803a2f72;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_188);
    iVar1 = 0;
LAB_1803a2f72:
    local_188 = "C_CSWeaponBase";
    ppcVar2 = &local_188;
    DAT_181108acc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bInReload");
      if (iVar1 != 0) goto LAB_1803a2fb2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_180);
    iVar1 = 0;
LAB_1803a2fb2:
    local_180 = "C_BasePlayerWeapon";
    ppcVar2 = &local_180;
    DAT_181108ad0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_iClip1");
      if (iVar1 != 0) goto LAB_1803a2ff2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_178);
    iVar1 = 0;
LAB_1803a2ff2:
    local_178 = "CBasePlayerWeaponVData";
    ppcVar2 = &local_178;
    DAT_181108ad4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_iMaxClip1");
      if (iVar1 != 0) goto LAB_1803a3032;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_170);
    iVar1 = 0;
LAB_1803a3032:
    local_170 = "CCSWeaponBaseVData";
    ppcVar2 = &local_170;
    DAT_181108ad8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_WeaponType");
      if (iVar1 != 0) goto LAB_1803a3072;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_168);
    iVar1 = 0;
LAB_1803a3072:
    ppcVar2 = &local_168;
    local_168 = "C_BaseCSGrenade";
    DAT_181108adc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bPinPulled");
      if (iVar1 != 0) goto LAB_1803a30b2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_160);
    iVar1 = 0;
LAB_1803a30b2:
    ppcVar2 = &local_160;
    local_160 = "C_CSWeaponBase";
    DAT_181108ae0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_iWeaponGameplayAnimState");
      if (iVar1 != 0) goto LAB_1803a30e2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_158);
    iVar1 = 0;
LAB_1803a30e2:
    ppcVar2 = &local_158;
    local_158 = "C_BasePlayerWeapon";
    DAT_181108ae4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nNextSecondaryAttackTick");
      if (iVar1 != 0) goto LAB_1803a3112;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_150);
    iVar1 = 0;
LAB_1803a3112:
    ppcVar2 = &local_150;
    local_150 = "C_BasePlayerWeapon";
    DAT_181108ae8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flNextSecondaryAttackTickRatio");
      if (iVar1 != 0) goto LAB_1803a3142;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_148);
    iVar1 = 0;
LAB_1803a3142:
    ppcVar2 = &local_148;
    local_148 = "CCSWeaponBaseVData";
    DAT_181108aec = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flCycleTime");
      if (iVar1 != 0) goto LAB_1803a3172;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_140);
    iVar1 = 0;
LAB_1803a3172:
    local_140 = "C_CSWeaponBase";
    ppcVar2 = &local_140;
    DAT_181108af0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_weaponMode");
      if (iVar1 != 0) goto LAB_1803a31b2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_138);
    iVar1 = 0;
LAB_1803a31b2:
    ppcVar2 = &local_138;
    local_138 = "CCSWeaponBaseVData";
    DAT_181108af4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flDeployDuration");
      if (iVar1 != 0) goto LAB_1803a31e2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_130);
    iVar1 = 0;
LAB_1803a31e2:
    ppcVar2 = &local_130;
    local_130 = "C_WeaponTaser";
    DAT_181108af8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_fFireTime");
      if (iVar1 != 0) goto LAB_1803a3222;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != ppcVar3);
    iVar1 = 0;
LAB_1803a3222:
    local_128 = "CPlayer_WeaponServices";
    DAT_181108afc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_iAmmo");
      if (iVar1 != 0) goto LAB_1803a3262;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_120);
    iVar1 = 0;
LAB_1803a3262:
    local_120 = "CBasePlayerWeaponVData";
    ppcVar3 = &local_120;
    DAT_181108b00 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_nPrimaryAmmoType");
      if (iVar1 != 0) goto LAB_1803a32a2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_118);
    iVar1 = 0;
LAB_1803a32a2:
    ppcVar3 = &local_118;
    local_118 = "CPlayer_WeaponServices";
    DAT_181108b04 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_hMyWeapons");
      if (iVar1 != 0) goto LAB_1803a32d2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_110);
    iVar1 = 0;
LAB_1803a32d2:
    ppcVar3 = &local_110;
    local_110 = "CCSWeaponBaseVData";
    DAT_181108b08 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_nDamage");
      if (iVar1 != 0) goto LAB_1803a3302;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_108);
    iVar1 = 0;
LAB_1803a3302:
    ppcVar3 = &local_108;
    local_108 = "CCSWeaponBaseVData";
    DAT_181108b0c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flRangeModifier");
      if (iVar1 != 0) goto LAB_1803a3332;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_100);
    iVar1 = 0;
LAB_1803a3332:
    local_100 = "CCSWeaponBaseVData";
    ppcVar3 = &local_100;
    DAT_181108b10 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flArmorRatio");
      if (iVar1 != 0) goto LAB_1803a3372;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_f8);
    iVar1 = 0;
LAB_1803a3372:
    ppcVar3 = &local_f8;
    local_f8 = "CSkeletonInstance";
    DAT_181108b14 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_modelState");
      if (iVar1 != 0) goto LAB_1803a33b2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_f0);
    iVar1 = 0;
LAB_1803a33b2:
    local_f0 = "CModelState";
    ppcVar3 = &local_f0;
    DAT_181108b18 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_hModel");
      if (iVar1 != 0) goto LAB_1803a33f2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_e8);
    iVar1 = 0;
LAB_1803a33f2:
    local_e8 = "CModelState";
    ppcVar3 = &local_e8;
    DAT_181108b1c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flRootBoneOffset_x");
      if (iVar1 != 0) goto LAB_1803a3432;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_e0);
    iVar1 = 0;
LAB_1803a3432:
    ppcVar3 = &local_e0;
    local_e0 = "C_BaseModelEntity";
    DAT_181108b20 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_Collision");
      if (iVar1 != 0) goto LAB_1803a3472;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_d8);
    iVar1 = 0;
LAB_1803a3472:
    ppcVar3 = &local_d8;
    local_d8 = "CCollisionProperty";
    DAT_181108b24 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_vecMaxs");
      if (iVar1 != 0) goto LAB_1803a34b2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_d0);
    iVar1 = 0;
LAB_1803a34b2:
    DAT_181108a60 = '\x01';
    DAT_181108b28 = iVar1;
  }
  return;
}



/* ===== 1803a34d0 FUN_1803a34d0 ===== */

undefined4 FUN_1803a34d0(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  char *_Str1;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  _Str1 = (char *)FUN_1803a0710(local_res8);
  if (_Str1 == (char *)0x0) {
    return 0;
  }
  lVar1 = FUN_1804ef120(_Str1,"Grenade");
  if ((((lVar1 == 0) && (iVar2 = strcmp(_Str1,"C_Flashbang"), iVar2 != 0)) &&
      (iVar2 = strcmp(_Str1,"C_DecoyGrenade"), iVar2 != 0)) &&
     ((iVar2 = strcmp(_Str1,"C_MolotovGrenade"), iVar2 != 0 &&
      (iVar2 = strcmp(_Str1,"C_IncendiaryGrenade"), iVar2 != 0)))) {
    return 0;
  }
  return 1;
}



/* ===== 1803a3560 FUN_1803a3560 ===== */

float FUN_1803a3560(longlong param_1,undefined1 *param_2)

{
  float fVar1;
  uint uVar2;
  undefined1 uVar3;
  float fVar4;
  ulonglong uVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float local_res10 [6];
  
  uVar2 = DAT_181108afc;
  uVar5 = (ulonglong)DAT_181108afc;
  *param_2 = 0;
  if (uVar2 != 0) {
    fVar9 = (float)FUN_18000f3d0(param_1 + uVar5);
    lVar6 = FUN_180264b70("mp_taser_recharge_time");
    if ((((lVar6 != 0) &&
         (fVar4 = (float)FUN_180264d70(lVar6), ((uint)fVar4 & 0x7f800000) != 0x7f800000)) &&
        (0.0 < fVar4)) && (0.0 < fVar9)) {
      if ((DAT_180961a50 == 0) || (local_res10[0] = fVar4, lVar6 = FUN_18000f3a0(), lVar6 == 0)) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = (float)FUN_18000f3d0(lVar6 + 0x30);
      }
      fVar1 = DAT_1808ac34c;
      local_res10[2] = (fVar10 - fVar9) / fVar4;
      if ((local_res10[2] < 0.0) || (DAT_1808ac34c <= local_res10[2])) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      *param_2 = uVar3;
      local_res10[4] = 1.0;
      local_res10[0] = 0.0;
      pfVar8 = local_res10;
      if (0.0 <= local_res10[2]) {
        pfVar8 = local_res10 + 2;
      }
      pfVar7 = local_res10 + 4;
      if (local_res10[2] <= fVar1) {
        pfVar7 = pfVar8;
      }
      return *pfVar7;
    }
  }
  return DAT_1808ac34c;
}



/* ===== 1803a3690 FUN_1803a3690 ===== */

undefined8 FUN_1803a3690(longlong param_1,float *param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float extraout_XMM0_Da;
  float fVar13;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float local_res8 [2];
  float local_res20 [2];
  float local_58 [12];
  
  uVar2 = DAT_1809619a4;
  uVar1 = DAT_180961998;
  if (param_1 == 0) {
    return 0;
  }
  uVar9 = (ulonglong)DAT_1809619a4;
  uVar10 = (ulonglong)DAT_180961998;
  if (((DAT_1809619a4 != 0) && (DAT_180961998 != 0)) &&
     (sVar3 = FUN_180011440(param_1 + uVar10 + (ulonglong)DAT_1809619a8 + uVar9), sVar3 == 0x1f)) {
    local_res8[0] = (float)((uint)local_res8[0] & 0xffffff00);
    FUN_1803a3560(param_1,local_res8);
    if (local_res8[0]._0_1_ == '\0') {
      return 0;
    }
    lVar6 = FUN_180264b70("mp_taser_recharge_time");
    if ((lVar6 == 0) ||
       (fVar4 = (float)FUN_180264d70(lVar6), local_res8[0] = fVar4,
       ((uint)fVar4 & 0x7f800000) == 0x7f800000)) {
      fVar4 = 0.0;
    }
    FUN_18000f3d0((ulonglong)DAT_181108afc + param_1);
    *param_2 = extraout_XMM0_Da;
    *param_3 = extraout_XMM0_Da + fVar4;
    return 1;
  }
  if (DAT_181108ad4 == 0) {
    return 0;
  }
  iVar5 = FUN_180011200(param_1 + (ulonglong)DAT_181108ad4);
  if (iVar5 < 1) {
    return 0;
  }
  uVar11 = (ulonglong)DAT_181108ae8;
  if (DAT_181108ae8 == 0) {
    return 0;
  }
  uVar12 = (ulonglong)DAT_181108ae4;
  if (DAT_181108ae4 == 0) {
    return 0;
  }
  fVar4 = 0.0;
  if (DAT_181108aec == 0) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = (float)FUN_18000f3d0(param_1 + (ulonglong)DAT_181108aec);
  }
  iVar5 = FUN_180011200(param_1 + uVar11);
  *param_3 = ((float)iVar5 + fVar13) * DAT_1808ac00c;
  iVar5 = FUN_180011200(param_1 + uVar12);
  if ((uVar2 == 0) || (uVar1 == 0)) {
    sVar3 = 0;
  }
  else {
    sVar3 = FUN_180011440(param_1 + uVar10 + (ulonglong)DAT_1809619a8 + uVar9);
  }
  if (DAT_1809619a0 == 0) {
    return 0;
  }
  lVar6 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + param_1);
  if (lVar6 == 0) {
    return 0;
  }
  if ((iVar5 - 100U < 2) && (sVar3 != 0x40)) {
    if (DAT_181108af4 == 0) {
      fVar13 = 0.0;
    }
    else {
      local_58[0] = 1.4013e-45;
      local_res8[0] = 0.0;
      local_res20[0] = (float)FUN_180011200((ulonglong)DAT_181108af4 + param_1);
      pfVar8 = local_res8;
      if (-1 < (int)local_res20[0]) {
        pfVar8 = local_res20;
      }
      pfVar7 = local_58;
      if ((int)local_res20[0] < 2) {
        pfVar7 = pfVar8;
      }
      fVar13 = *pfVar7;
    }
    if (DAT_181108af0 != 0) {
      FUN_18000f3d0((ulonglong)DAT_181108af0 + (ulonglong)(uint)((int)fVar13 * 4) + lVar6);
      fVar13 = extraout_XMM0_Da_00;
      goto LAB_1803a3912;
    }
  }
  else {
    if (iVar5 != 0xb) {
      if (iVar5 != 0x32) {
        return 0;
      }
      if (sVar3 == 0x40) {
        return 0;
      }
    }
    if (DAT_181108af8 != 0) {
      FUN_18000f3d0(lVar6 + (ulonglong)DAT_181108af8);
      fVar13 = extraout_XMM0_Da_01;
      goto LAB_1803a3912;
    }
  }
  fVar13 = 0.0;
LAB_1803a3912:
  *param_2 = *param_3 - fVar13;
  if ((DAT_180961a50 != 0) && (lVar6 = FUN_18000f3a0(), lVar6 != 0)) {
    FUN_18000f3d0(lVar6 + 0x30);
    fVar4 = extraout_XMM0_Da_02;
  }
  if ((*param_2 <= fVar4) && (fVar4 < *param_3)) {
    return 1;
  }
  return 0;
}



/* ===== 1803a3980 FUN_1803a3980 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1803a3980(float *param_1,undefined8 *param_2,float *param_3,undefined1 *param_4)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar6;
  float extraout_XMM0_Da_02;
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
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128 [4];
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100 [2];
  float local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  
  pfVar2 = (float *)*param_2;
  fVar8 = pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2 + pfVar2[2] * pfVar2[2];
  if (fVar8 < 0.0) {
    FUN_18051af10(fVar8);
    fVar8 = extraout_XMM0_Da;
  }
  else {
    fVar8 = SQRT(fVar8);
  }
  fVar9 = pfVar2[5] * pfVar2[5] + pfVar2[4] * pfVar2[4] + pfVar2[6] * pfVar2[6];
  local_130 = fVar8;
  if (fVar9 < 0.0) {
    FUN_18051af10(fVar9);
    fVar9 = extraout_XMM0_Da_00;
  }
  else {
    fVar9 = SQRT(fVar9);
  }
  fVar15 = pfVar2[0xd];
  fVar14 = pfVar2[0xc];
  fVar1 = pfVar2[0xe];
  fVar10 = fVar15 * fVar15 + fVar14 * fVar14 + fVar1 * fVar1;
  if (fVar10 < 0.0) {
    FUN_18051af10(fVar10);
    fVar10 = extraout_XMM0_Da_01;
  }
  else {
    fVar10 = SQRT(fVar10);
  }
  fVar3 = DAT_1808acb98;
  if (fVar8 <= 0.0) {
    return 0;
  }
  if (fVar9 <= 0.0) {
    return 0;
  }
  if (fVar10 <= 0.0) {
    return 0;
  }
  local_118 = *param_1;
  local_114 = param_1[1];
  fVar6 = pfVar2[0xf];
  local_110 = param_1[2] + DAT_1808ac918;
  fVar13 = param_1[2] + param_1[3];
  local_138 = local_118;
  local_134 = local_114;
  fVar7 = fVar15 * local_114 + fVar14 * local_118;
  fVar11 = (fVar1 * local_110 + fVar7 + fVar6) / fVar10;
  fVar7 = (fVar1 * fVar13 + fVar7 + fVar6) / fVar10;
  if (DAT_1808ac924 <= fVar11) {
    if (DAT_1808ac924 <= fVar7) {
      local_104 = fVar13;
      goto LAB_1803a3ca1;
    }
  }
  else if (fVar7 < DAT_1808ac924) {
    return 0;
  }
  fVar6 = (DAT_1808ac924 - fVar11) / (fVar7 - fVar11);
  fVar7 = (local_118 - local_118) * fVar6 + local_118;
  local_104 = (fVar13 - local_110) * fVar6 + local_110;
  fVar6 = (local_114 - local_114) * fVar6 + local_114;
  if (DAT_1808ac924 <= fVar11) {
    local_138 = fVar7;
    local_134 = fVar6;
  }
  else {
    local_118 = fVar7;
    local_114 = fVar6;
    local_110 = local_104;
    local_104 = fVar13;
  }
  fVar6 = pfVar2[0xf];
  if ((fVar15 * local_114 + fVar14 * local_118 + fVar1 * local_110 + fVar6) / fVar10 <=
      DAT_1808ac918) {
    return 0;
  }
LAB_1803a3ca1:
  pfVar5 = &local_118;
  local_c8._0_4_ = DAT_1808acd08;
  local_e8 = ZEXT416(DAT_1808acd08);
  local_f8 = DAT_1808aceb0;
  local_d8 = ZEXT416((uint)DAT_1808aceb0);
  local_10c = local_138;
  local_108 = local_134;
  do {
    fVar15 = *pfVar5;
    fVar7 = pfVar5[1];
    fVar11 = pfVar5[2];
    fVar13 = (pfVar2[0xd] * fVar7 + fVar14 * fVar15 + fVar1 * fVar11 + fVar6) / fVar10;
    fVar14 = fVar13 * fVar13;
    fVar16 = fVar14 - fVar3;
    if (fVar16 <= 0.0) {
      return 0;
    }
    fVar12 = (fVar7 * pfVar2[5] + fVar15 * pfVar2[4] + fVar11 * pfVar2[6] + pfVar2[7]) / fVar9;
    fVar8 = (pfVar2[1] * fVar7 + *pfVar2 * fVar15 + pfVar2[2] * fVar11 + pfVar2[3]) / fVar8;
    fVar6 = (fVar8 * fVar8 + fVar14) - fVar3;
    fVar15 = 0.0;
    if (0.0 <= fVar6) {
      fVar15 = fVar6;
    }
    if (fVar15 < 0.0) {
      fVar15 = (float)FUN_18051af10(fVar15);
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    fVar15 = fVar15 * DAT_1808ac918;
    fVar14 = (fVar12 * fVar12 + fVar14) - fVar3;
    fVar7 = 0.0;
    if (0.0 <= fVar14) {
      fVar7 = fVar14;
    }
    if (fVar7 < 0.0) {
      fVar7 = (float)FUN_18051af10(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    local_12c = *(float *)((longlong)param_2 + 0x14) * DAT_1808ac1f4;
    local_134 = *(float *)(param_2 + 2) * DAT_1808ac1f4 + *(float *)(param_2 + 1);
    fVar14 = (local_130 / fVar10) * *(float *)(param_2 + 2) * DAT_1808ac1f4;
    fVar11 = (fVar9 / fVar10) * local_12c;
    local_12c = local_12c + *(float *)((longlong)param_2 + 0xc);
    local_138 = ((fVar13 * fVar8 - fVar15) / fVar16) * fVar14 + local_134;
    local_134 = ((fVar13 * fVar8 + fVar15) / fVar16) * fVar14 + local_134;
    fVar6 = pfVar2[0xf];
    local_128[0] = local_12c - ((fVar13 * fVar12 + fVar7 * DAT_1808ac918) / fVar16) * fVar11;
    pfVar4 = &local_134;
    if (local_138 <= local_134) {
      pfVar4 = &local_138;
    }
    fVar14 = pfVar2[0xc];
    fVar15 = *pfVar4;
    if ((float)local_e8._0_4_ <= *pfVar4) {
      fVar15 = (float)local_e8._0_4_;
    }
    local_e8 = ZEXT416((uint)fVar15);
    pfVar4 = &local_134;
    if (local_134 <= local_138) {
      pfVar4 = &local_138;
    }
    local_12c = local_12c - ((fVar13 * fVar12 - fVar7 * DAT_1808ac918) / fVar16) * fVar11;
    fVar7 = *pfVar4;
    if (*pfVar4 <= (float)local_d8._0_4_) {
      fVar7 = (float)local_d8._0_4_;
    }
    local_d8 = ZEXT416((uint)fVar7);
    pfVar4 = &local_12c;
    if (local_128[0] <= local_12c) {
      pfVar4 = local_128;
    }
    fVar11 = *pfVar4;
    if ((float)local_c8._0_4_ <= *pfVar4) {
      fVar11 = (float)local_c8._0_4_;
    }
    pfVar4 = &local_12c;
    if (local_12c <= local_128[0]) {
      pfVar4 = local_128;
    }
    pfVar5 = pfVar5 + 3;
    local_c8 = ZEXT416((uint)fVar11);
    fVar8 = *pfVar4;
    if (*pfVar4 <= local_f8) {
      fVar8 = local_f8;
    }
    local_f8 = fVar8;
    fVar8 = local_130;
  } while (pfVar5 != local_100);
  fVar8 = (float)FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)fVar15) & _DAT_1808ade90 ^
                                      (uint)fVar15) + fVar15);
  fVar9 = (float)FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)fVar11) & _DAT_1808ade90 ^
                                      (uint)fVar11) + fVar11);
  fVar15 = (float)FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)fVar7) & _DAT_1808ade90 ^ (uint)fVar7
                                       ) + fVar7);
  FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)local_f8) & _DAT_1808ade90 ^ (uint)local_f8) +
                local_f8);
  *param_3 = fVar8;
  param_3[1] = fVar9;
  param_3[2] = fVar15;
  param_3[3] = extraout_XMM0_Da_02;
  if ((((*(float *)(param_2 + 1) <= fVar15) &&
       (*(float *)((longlong)param_2 + 0xc) <= extraout_XMM0_Da_02)) &&
      (fVar8 <= *(float *)(param_2 + 1) + *(float *)(param_2 + 2))) &&
     (fVar9 <= *(float *)((longlong)param_2 + 0xc) + *(float *)((longlong)param_2 + 0x14))) {
    *param_4 = 1;
    return 1;
  }
  *param_4 = 0;
  return 1;
}



/* ===== 1803a40a0 FUN_1803a40a0 ===== */

void FUN_1803a40a0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((((param_1 != 0) && (DAT_180ca09f8 != 0)) &&
      (lVar7 = FUN_18000f3a0(param_1 + (ulonglong)DAT_180ca09f8), lVar7 != 0)) &&
     ((DAT_181108b18 != 0 && (DAT_181108b1c != 0)))) {
    lVar7 = lVar7 + (ulonglong)DAT_181108b18;
    lVar8 = FUN_18000f3a0(lVar7 + (ulonglong)DAT_181108b1c);
    if (lVar8 == 0) {
      FUN_18000f3a0(lVar7 + 0x80);
      return;
    }
    lVar8 = FUN_18000f3a0(lVar8);
    lVar7 = FUN_18000f3a0(lVar7 + 0x80);
    if ((lVar8 != 0) && (lVar7 != 0)) {
      iVar5 = FUN_180011200(lVar8 + 0x178);
      lVar9 = FUN_18000f3a0(lVar8 + 0x1b0);
      lVar8 = FUN_18000f3a0(lVar8 + 0x180);
      if ((iVar5 - 1U < 0x100) && (((lVar9 != 0 && (lVar8 != 0)) && (uVar11 = 0, 0 < iVar5)))) {
        do {
          uVar6 = FUN_180011200(lVar9 + uVar11 * 4);
          if ((((uVar6 >> 8 & 1) != 0) && (sVar4 = FUN_180011440(lVar8 + uVar11 * 2), 0 < sVar4)) &&
             (iVar12 = (int)sVar4, iVar12 <= iVar5)) {
            if (((uint)uVar11 & 0x7ffffffb) == 9) {
              iVar12 = 5;
            }
            puVar10 = (undefined8 *)FUN_1800111b0(local_78,uVar11 * 0x20 + lVar7);
            uVar1 = *puVar10;
            uVar2 = *(undefined4 *)(puVar10 + 1);
            puVar10 = (undefined8 *)FUN_1800111b0(local_68,(longlong)iVar12 * 0x20 + lVar7);
            puVar3 = *(undefined4 **)(param_2 + 8);
            uStack_4c = (undefined4)uVar1;
            uStack_48 = (undefined4)((ulonglong)uVar1 >> 0x20);
            local_58 = *puVar10;
            uStack_50 = *(undefined4 *)(puVar10 + 1);
            uStack_44 = uVar2;
            if (puVar3 == *(undefined4 **)(param_2 + 0x10)) {
              FUN_1803aa1a0(param_2,puVar3,&local_58);
            }
            else {
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              *puVar3 = (undefined4)local_58;
              puVar3[1] = local_58._4_4_;
              puVar3[2] = uStack_50;
              puVar3[3] = uStack_4c;
              *(ulonglong *)(puVar3 + 4) = CONCAT44(uVar2,uStack_48);
              *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x18;
            }
          }
          uVar6 = (uint)uVar11 + 1;
          uVar11 = (ulonglong)uVar6;
        } while ((int)uVar6 < iVar5);
      }
    }
  }
  return;
}



/* ===== 1803a42f0 FUN_1803a42f0 ===== */

void FUN_1803a42f0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  float fVar8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar5 = param_1[1];
  for (lVar7 = *param_1; lVar7 != lVar5; lVar7 = lVar7 + 0x18) {
    uVar1 = *(undefined4 *)(param_2 + 2);
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    cVar6 = FUN_1803a1bf0(*param_2,lVar7,&local_88,uVar1,uVar2);
    if (cVar6 != '\0') {
      fVar3 = *(float *)(param_2 + 1);
      fVar4 = *(float *)((longlong)param_2 + 0xc);
      fVar8 = fVar3 + (float)local_88;
      local_80 = 0;
      local_78 = CONCAT44(fVar4 + local_88._4_4_,fVar8);
      cVar6 = FUN_1803a1bf0(fVar8,lVar7 + 0xc,&local_80,uVar1,uVar2);
      if (cVar6 != '\0') {
        uStack_70 = CONCAT44(fVar4 + local_80._4_4_,fVar3 + (float)local_80);
        FUN_18025d4d0(param_3,&local_78);
      }
    }
  }
  return;
}



/* ===== 1803a4430 FUN_1803a4430 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803a4430(void)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  char *_Str1;
  float *pfVar16;
  ulonglong uVar17;
  float *pfVar18;
  ulonglong *puVar19;
  longlong lVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  ulonglong *puVar24;
  float fVar25;
  float fVar26;
  undefined8 extraout_XMM0_Qa;
  float fVar27;
  undefined4 uVar28;
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [24];
  float local_248 [2];
  longlong local_240 [2];
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  ulonglong *local_220;
  ulonglong *local_218;
  longlong local_210;
  ulonglong local_208;
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [24];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  float fStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [8];
  ULONGLONG local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  undefined4 *puStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_268;
  local_158[0] = 0;
  local_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = (undefined4 *)0x0;
  puStack_f0 = (undefined4 *)0x0;
  FUN_1803a2870();
  if (((DAT_181108a60 == '\0') || (DAT_1809619e0 == 0)) || (DAT_1809619d0 == 0)) {
    iVar12 = FUN_1804e4d70(&DAT_1809f9da0);
    puVar23 = auStack_268;
    puVar22 = auStack_268;
    if (iVar12 != 0) goto LAB_1803a4cce;
    if (DAT_1809f9dec == 0x7fffffff) goto LAB_1803a4cbb;
    local_1c8 = local_1c8 & 0xffffffffffffff00;
    local_1c0 = 0;
    local_1b8 = 0;
    fStack_1b4 = 0.0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    FUN_1803a4ce0();
    FUN_1803a9c70(&local_170);
    puVar23 = auStack_268;
    goto LAB_1803a4c47;
  }
  puVar13 = (undefined8 *)FUN_1802010e0(&local_1c8);
  local_148 = *puVar13;
  uStack_140 = puVar13[1];
  local_138 = puVar13[2];
  uStack_130 = puVar13[3];
  local_128 = puVar13[4];
  uStack_120 = puVar13[5];
  local_118 = puVar13[6];
  uStack_110 = puVar13[7];
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_240);
    DAT_181108a00 = local_240[0];
    DAT_1811089f8 = FUN_1803a0c50(local_240);
    DAT_180cd1304 = '\x01';
  }
  puVar23 = auStack_268;
  local_108 = DAT_1811089f8;
  if (DAT_1811089f8 != 0) {
    FUN_1803a1250(&local_220);
    fVar6 = DAT_1808aca90;
    fVar5 = DAT_1808ac9fc;
    fVar4 = DAT_1808ac934;
    fVar3 = DAT_1808ac710;
    fVar2 = DAT_1808ac34c;
    puVar21 = auStack_268;
    puVar22 = auStack_268;
    puVar19 = local_220;
    if (local_220 != local_218) {
      do {
        if ((*puVar19 == 0) || (DAT_180ca09fc == 0)) {
          lVar20 = 0;
        }
        else {
          uVar11 = FUN_180011200((ulonglong)DAT_180ca09fc + *puVar19);
          plVar14 = (longlong *)FUN_1803a0940(local_1f8,uVar11);
          lVar20 = *plVar14;
        }
        local_240[0] = lVar20;
        if ((((lVar20 != 0) && (DAT_180ca09f8 != 0)) &&
            ((lVar15 = FUN_18000f3a0(lVar20 + (ulonglong)DAT_180ca09f8), lVar15 != 0 &&
             ((((lVar15 = FUN_18000f3a0((ulonglong)DAT_180961968 + lVar20), lVar15 != 0 &&
                (lVar15 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar15), lVar15 != 0)) &&
               (lVar15 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar15), lVar15 != 0)) &&
              ((_Str1 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar15),
               _Str1 + -0x10000 < (char *)0x7ffffffeffff &&
               (iVar12 = strcmp(_Str1,"C_CSPlayerPawn"), iVar12 == 0)))))))) &&
           ((lVar15 = FUN_18000f3a0((ulonglong)DAT_180961968 + lVar20), lVar15 != 0 &&
            (cVar10 = FUN_180011220(lVar15 + 0x30), -1 < cVar10)))) {
          fStack_1b4 = 0.0;
          uStack_1b0 = 0;
          uStack_1ac = 0;
          local_1a8 = 0;
          uStack_1a0 = 0;
          local_198 = 0x4200000000000000;
          uStack_190 = 0;
          local_188 = 0;
          uStack_180 = 0;
          local_208 = *puVar19;
          local_1c0 = local_240[0];
          local_1b8 = CONCAT31(local_1b8._1_3_,lVar20 == local_108);
          local_248[0] = 1.0;
          local_1c8 = local_208;
          if ((DAT_180961a50 == 0) || (lVar15 = FUN_18000f3a0(), lVar15 == 0)) {
            fVar25 = 0.0;
          }
          else {
            fVar25 = (float)FUN_18000f3d0(lVar15 + 0x30);
          }
          if (DAT_181108a68 == 0) {
            fVar27 = fVar2;
          }
          else {
            iVar12 = FUN_180011200(lVar20 + (ulonglong)DAT_181108a68);
            fVar27 = fVar25 - (float)iVar12 * DAT_1808ac00c;
            if (0.0 < fVar27) {
              fVar27 = fVar27 * fVar3;
              local_248[0] = fVar2;
              if (fVar27 <= fVar2) {
                local_248[0] = fVar27;
              }
              fVar27 = local_248[0];
            }
            else {
              local_248[0] = 0.0;
              fVar27 = 0.0;
            }
          }
          if (DAT_181108a78 != 0) {
            fVar26 = (float)FUN_18000f3d0(lVar20 + (ulonglong)DAT_181108a78);
            fVar25 = fVar25 - fVar26;
            if (fVar25 <= DAT_1808ac140) {
              fVar26 = 0.0;
              if (0.0 <= fVar25) {
                fVar26 = fVar25;
              }
              fVar27 = fVar26 * fVar3 * fVar27;
              local_248[0] = fVar27;
            }
            else {
              fVar27 = fVar2 * fVar27;
              local_248[0] = fVar27;
            }
          }
          if ((DAT_181108a64 == 0) ||
             (cVar10 = FUN_180011220(lVar20 + (ulonglong)DAT_181108a64), cVar10 != '\0')) {
            fStack_1b4 = 0.0;
          }
          else {
            cVar10 = FUN_18008f330(lVar20);
            if (cVar10 != '\0') {
              fVar27 = DAT_180963598 * fVar27;
              local_248[0] = fVar27;
            }
            local_22c = 1.0;
            local_230 = 0.0;
            pfVar18 = &local_230;
            if (0.0 <= fVar27) {
              pfVar18 = local_248;
            }
            pfVar16 = &local_22c;
            if (fVar27 <= fVar2) {
              pfVar16 = pfVar18;
            }
            fStack_1b4 = *pfVar16;
          }
          if ((0.0 < fStack_1b4) || ((char)local_1b8 != '\0')) {
            uVar17 = (ulonglong)DAT_180ca09f8;
            if (DAT_180ca09f8 == 0) {
LAB_1803a48d8:
              uStack_1b0 = 0;
              uStack_1ac = 0;
              uVar11 = 0;
            }
            else {
              lVar15 = FUN_18000f3a0(uVar17 + lVar20);
              if ((lVar15 == 0) || (DAT_180ca0950 == 0)) {
                uVar17 = (ulonglong)DAT_180ca09f8;
                goto LAB_1803a48d8;
              }
              plVar14 = (longlong *)FUN_1800111b0(local_1f0,lVar15 + (ulonglong)DAT_180ca0950);
              local_240[0] = *plVar14;
              uStack_1b0 = (undefined4)local_240[0];
              uStack_1ac = (undefined4)((ulonglong)local_240[0] >> 0x20);
              uVar17 = (ulonglong)DAT_180ca09f8;
              uVar11 = (undefined4)plVar14[1];
            }
            local_1a8 = CONCAT44(local_1a8._4_4_,uVar11);
            if ((DAT_181108b24 != 0) && (DAT_181108b28 != 0)) {
              uVar11 = FUN_18000f3d0((ulonglong)DAT_181108b24 + 8 +
                                     (ulonglong)DAT_181108b28 + lVar20);
              local_1a8 = CONCAT44(uVar11,(undefined4)local_1a8);
              uVar17 = (ulonglong)DAT_180ca09f8;
            }
            if ((((lVar20 == 0) || ((int)uVar17 == 0)) ||
                (lVar15 = FUN_18000f3a0(uVar17 + lVar20), lVar15 == 0)) || (DAT_180ca0950 == 0)) {
              uVar28 = 0;
              uVar11 = 0;
              fVar25 = 0.0;
            }
            else {
              plVar14 = (longlong *)FUN_1800111b0(local_1e0,lVar15 + (ulonglong)DAT_180ca0950);
              local_240[0] = *plVar14;
              uVar28 = (undefined4)local_240[0];
              uVar11 = (undefined4)((ulonglong)local_240[0] >> 0x20);
              fVar25 = *(float *)(plVar14 + 1);
            }
            fVar27 = fVar5;
            if ((DAT_181108ab0 != 0) &&
               (lVar15 = FUN_18000f3a0(lVar20 + (ulonglong)DAT_181108ab0), lVar15 != 0)) {
              if (((lVar20 != 0) &&
                  ((DAT_180ca09f8 != 0 &&
                   (lVar15 = FUN_18000f3a0(lVar20 + (ulonglong)DAT_180ca09f8), lVar15 != 0)))) &&
                 ((DAT_181108b18 != 0 && (DAT_181108b20 != 0)))) {
                fVar27 = (float)FUN_18000f3d0((ulonglong)DAT_181108b20 + lVar15 +
                                              (ulonglong)DAT_181108b18 + 8);
                fVar25 = fVar25 + fVar27;
              }
              lVar15 = FUN_18000f3a0((ulonglong)DAT_181108ab0 + lVar20);
              if (DAT_181108ab4 == 0) {
                fVar27 = 0.0;
              }
              else {
                local_240[0] = CONCAT44(local_240[0]._4_4_,0x3f800000);
                local_228 = 0.0;
                local_224 = (float)FUN_18000f3d0((ulonglong)DAT_181108ab4 + lVar15);
                pfVar18 = &local_228;
                if (0.0 <= local_224) {
                  pfVar18 = &local_224;
                }
                pfVar16 = (float *)local_240;
                if (local_224 <= fVar2) {
                  pfVar16 = pfVar18;
                }
                fVar27 = *pfVar16;
              }
              fVar27 = fVar6 - fVar27 * fVar4;
            }
            uStack_1a0 = CONCAT44(uVar11,uVar28);
            local_198 = CONCAT44(fVar27,fVar25);
            FUN_1803a40a0(lVar20,&uStack_190);
            uVar9 = uStack_180;
            uVar8 = local_188;
            uVar7 = uStack_190;
            if (local_f8 == puStack_f0) {
              FUN_1803a9f70(&local_100,local_f8,&local_1c8);
            }
            else {
              *local_f8 = (undefined4)local_1c8;
              local_f8[1] = local_1c8._4_4_;
              local_f8[2] = (undefined4)local_1c0;
              local_f8[3] = local_1c0._4_4_;
              *(char *)(local_f8 + 4) = (char)local_1b8;
              local_f8[5] = fStack_1b4;
              local_f8[6] = uStack_1b0;
              local_f8[7] = uStack_1ac;
              local_f8[8] = (undefined4)local_1a8;
              local_f8[9] = local_1a8._4_4_;
              local_f8[10] = (undefined4)uStack_1a0;
              local_f8[0xb] = uStack_1a0._4_4_;
              local_f8[0xc] = (undefined4)local_198;
              local_f8[0xd] = local_198._4_4_;
              uStack_180 = 0;
              local_188 = 0;
              uStack_190 = 0;
              *(undefined8 *)(local_f8 + 0xe) = uVar7;
              *(undefined8 *)(local_f8 + 0x10) = uVar8;
              *(undefined8 *)(local_f8 + 0x12) = uVar9;
              local_f8 = local_f8 + 0x14;
            }
          }
          FUN_1803a9d20(&uStack_190);
        }
        puVar19 = puVar19 + 1;
      } while (puVar19 != local_218);
    }
    puVar23 = auStack_268;
    if (local_220 != (ulonglong *)0x0) {
      puVar19 = local_220;
      if ((ulonglong)((local_210 - (longlong)local_220 >> 3) * 8) < 0x1000) {
LAB_1803a4ba2:
        puVar22 = puVar21;
      }
      else {
        puVar19 = (ulonglong *)local_220[-1];
        puVar24 = (ulonglong *)((longlong)local_220 + (-8 - (longlong)puVar19));
        if (&DAT_0000001f < puVar24) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar21 = auStack_260;
          puVar19 = puVar24;
          goto LAB_1803a4ba2;
        }
      }
      *(undefined8 *)(puVar22 + -8) = 0x1803a4baa;
      thunk_FUN_1803d64e0(puVar19);
      puVar23 = puVar22;
    }
  }
  local_158[0] = 1;
  *(undefined8 *)(puVar23 + -8) = 0x1803a4bb4;
  local_150 = GetTickCount64();
  *(undefined8 *)(puVar23 + -8) = 0x1803a4bc4;
  iVar12 = FUN_1804e4d70(&DAT_1809f9da0);
  if (iVar12 != 0) {
LAB_1803a4cce:
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar23 + -8) = &UNK_1803a4cd8;
    FUN_1804e4a90(5);
  }
  puVar22 = puVar23;
  if (DAT_1809f9dec == 0x7fffffff) {
LAB_1803a4cbb:
    DAT_1809f9dec = DAT_1809f9dec + -1;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar22 + -8) = &UNK_1803a4ccd;
    FUN_1804e4a90(6);
  }
  *(undefined8 *)(puVar23 + -8) = 0x1803a4be6;
  FUN_1803a4ce0(extraout_XMM0_Qa,local_158);
LAB_1803a4c47:
  *(undefined8 *)(puVar23 + -8) = 0x1803a4c53;
  FUN_1804e4e90(&DAT_1809f9da0);
  *(undefined8 *)(puVar23 + -8) = 0x1803a4c5d;
  FUN_1803a9c70(&local_100);
  *(undefined8 *)(puVar23 + -8) = 0x1803a4c6c;
  return;
}



/* ===== 1803a4ce0 FUN_1803a4ce0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1803a4ce0(undefined8 param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  
  DAT_181108db0 = *param_2;
  puVar1 = (undefined8 *)(param_2 + 0x58);
  DAT_181108db8 = *(undefined8 *)(param_2 + 8);
  _DAT_181108dc0 = *(undefined8 *)(param_2 + 0x10);
  uRam0000000181108dc8 = *(undefined8 *)(param_2 + 0x18);
  _DAT_181108dd0 = *(undefined8 *)(param_2 + 0x20);
  uRam0000000181108dd8 = *(undefined8 *)(param_2 + 0x28);
  _DAT_181108de0 = *(undefined4 *)(param_2 + 0x30);
  uRam0000000181108de4 = *(undefined4 *)(param_2 + 0x34);
  uRam0000000181108de8 = *(undefined4 *)(param_2 + 0x38);
  uRam0000000181108dec = *(undefined4 *)(param_2 + 0x3c);
  _DAT_181108df0 = *(undefined4 *)(param_2 + 0x40);
  uRam0000000181108df4 = *(undefined4 *)(param_2 + 0x44);
  uRam0000000181108df8 = *(undefined4 *)(param_2 + 0x48);
  uRam0000000181108dfc = *(undefined4 *)(param_2 + 0x4c);
  DAT_181108e00 = *(undefined8 *)(param_2 + 0x50);
  if (puVar1 != (undefined8 *)&DAT_181108e08) {
    FUN_1803a9c70();
    _DAT_181108e08 = *puVar1;
    _DAT_181108e10 = *(undefined8 *)(param_2 + 0x60);
    _DAT_181108e18 = *(undefined8 *)(param_2 + 0x68);
    *puVar1 = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  return &DAT_181108db0;
}



/* ===== 1803a4da0 FUN_1803a4da0 ===== */

int FUN_1803a4da0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0xf10) < 1)) {
    iVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xf14) & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    uVar3 = uVar3 + 0x10 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    lVar1 = *(longlong *)((longlong)(int)uVar3 * 0xe8 + 0x110 + param_1);
    lVar2 = *(longlong *)((longlong)(int)uVar3 * 0xe8 + 0x118 + param_1);
    iVar6 = 0;
    for (iVar7 = 0; (iVar6 < (int)(lVar2 - lVar1 >> 3) * 0x38e38e39 && (iVar7 < 0x18));
        iVar7 = iVar7 + 1) {
      lVar4 = (longlong)iVar6;
      lVar5 = (longlong)iVar7 * 0x20;
      *(undefined8 *)(lVar5 + param_2) = *(undefined8 *)(lVar1 + 0xc + lVar4 * 0x48);
      *(undefined4 *)(lVar5 + 8 + param_2) = *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x48);
      *(undefined8 *)(lVar5 + 0xc + param_2) = *(undefined8 *)(lVar1 + 0x18 + lVar4 * 0x48);
      *(undefined4 *)(lVar5 + 0x14 + param_2) = *(undefined4 *)(lVar1 + 0x20 + lVar4 * 0x48);
      *(undefined4 *)(lVar5 + 0x18 + param_2) = *(undefined4 *)(lVar1 + 0x34 + lVar4 * 0x48);
      *(uint *)(lVar5 + 0x1c + param_2) = (uint)*(byte *)(lVar1 + 0x38 + lVar4 * 0x48);
      iVar6 = iVar6 + 1;
    }
  }
  return iVar7;
}



/* ===== 1803a4ea0 FUN_1803a4ea0 ===== */

void FUN_1803a4ea0(longlong *param_1)

{
  ulonglong uVar1;
  float fVar2;
  undefined4 uVar3;
  float *pfVar4;
  longlong lVar5;
  ulonglong uVar6;
  float *pfVar7;
  undefined1 local_res8;
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  
  uVar6 = param_1[1] - *param_1;
  if (0x17 < uVar6) {
    FUN_18008bc40(*param_1,param_1[1],(longlong)uVar6 >> 3,local_res8);
    lVar5 = param_1[1] - *param_1 >> 3;
    uVar6 = lVar5 * 2;
    local_68 = (undefined8 *)0x0;
    puStack_60 = (undefined8 *)0x0;
    local_58 = (undefined8 *)0x0;
    if (uVar6 != 0) {
      if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      local_68 = (undefined8 *)FUN_18000fb70(lVar5 * 0x10);
      local_58 = local_68 + lVar5 * 2;
      puStack_60 = local_68;
      do {
        *puStack_60 = 0;
        puStack_60 = puStack_60 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar6 = 0;
    pfVar4 = (float *)param_1[1];
    for (pfVar7 = (float *)*param_1; pfVar7 != pfVar4; pfVar7 = pfVar7 + 2) {
      if (1 < uVar6) {
        do {
          fVar2 = *(float *)((longlong)local_68 + uVar6 * 8 + -0xc);
          if (0.0 < (*(float *)(local_68 + (uVar6 - 1)) - *(float *)(local_68 + (uVar6 - 2))) *
                    (pfVar7[1] - fVar2) -
                    (*(float *)((longlong)local_68 + uVar6 * 8 + -4) - fVar2) *
                    (*pfVar7 - *(float *)(local_68 + (uVar6 - 2)))) break;
          uVar6 = uVar6 - 1;
        } while (1 < uVar6);
      }
      fVar2 = pfVar7[1];
      *(float *)(local_68 + uVar6) = *pfVar7;
      *(float *)((longlong)local_68 + uVar6 * 8 + 4) = fVar2;
      uVar6 = uVar6 + 1;
    }
    uVar1 = uVar6 + 1;
    lVar5 = param_1[1] - *param_1 >> 3;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      if (uVar1 <= uVar6) {
        do {
          fVar2 = *(float *)((longlong)local_68 + uVar6 * 8 + -0xc);
          if (0.0 < (*(float *)(local_68 + (uVar6 - 1)) - *(float *)(local_68 + (uVar6 - 2))) *
                    (*(float *)(*param_1 + -4 + lVar5 * 8) - fVar2) -
                    (*(float *)(*param_1 + -8 + lVar5 * 8) - *(float *)(local_68 + (uVar6 - 2))) *
                    (*(float *)((longlong)local_68 + uVar6 * 8 + -4) - fVar2)) break;
          uVar6 = uVar6 - 1;
        } while (uVar1 <= uVar6);
      }
      uVar3 = *(undefined4 *)(*param_1 + -4 + lVar5 * 8);
      *(undefined4 *)(local_68 + uVar6) = *(undefined4 *)(*param_1 + -8 + lVar5 * 8);
      *(undefined4 *)((longlong)local_68 + uVar6 * 8 + 4) = uVar3;
      uVar6 = uVar6 + 1;
    }
    lVar5 = uVar6 - 1;
    if (uVar6 == 0) {
      lVar5 = 0;
    }
    FUN_18008b680(&local_68,lVar5);
    FUN_18008b7d0(param_1,&local_68);
    FUN_1800132b0(&local_68);
  }
  return;
}



/* ===== 1803a50e0 FUN_1803a50e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803a50e0(longlong param_1,undefined8 *param_2,float *param_3,longlong param_4)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  uint uVar11;
  float fVar12;
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
  undefined1 auStack_4e8 [32];
  undefined4 local_4c8;
  int local_4b8;
  float local_4b4;
  undefined8 local_4b0;
  uint local_4a8;
  int local_4a4;
  undefined8 local_4a0;
  float local_498;
  float local_494;
  longlong local_490;
  float *local_488;
  float *pfStack_480;
  undefined8 local_478;
  float *local_470;
  float local_468;
  float local_464;
  float local_460;
  float local_458;
  float local_454;
  float local_450;
  float *local_448;
  float *local_440;
  undefined8 local_438;
  uint local_430;
  float local_42c;
  float local_428;
  float local_424;
  float local_420;
  longlong local_418;
  undefined8 local_410;
  float local_408;
  undefined8 local_404;
  float local_3fc;
  float local_3f8 [5];
  float afStack_3e4 [2];
  uint auStack_3dc [185];
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_4e8;
  if (param_1 != 0) {
    uVar7 = 1;
    do {
      iVar5 = (int)uVar7;
      if (*(longlong *)(&DAT_181108b40 + uVar7 * 8) == param_1) goto LAB_1803a5192;
      uVar7 = (ulonglong)(iVar5 + 1U);
    } while ((int)(iVar5 + 1U) < 0x41);
  }
  iVar5 = 0;
LAB_1803a5192:
  if ((iVar5 < (int)(DAT_181112370 - DAT_181112368 >> 4) * -0x194be3ab) &&
     (lVar9 = (longlong)iVar5 * 0xfd0 + DAT_181112368, lVar9 != 0)) {
    local_490 = lVar9;
    local_470 = param_3;
    local_418 = param_4;
    FUN_180540170(local_3f8,0,0x300);
    FUN_1803a93e0(local_3f8);
    iVar5 = FUN_1803a4da0(lVar9,local_3f8);
    local_4b8 = iVar5;
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_4b0);
      lVar8 = local_4b0;
    }
    else {
      lVar8 = DAT_181108a00;
    }
    if ((lVar8 == 0) || (DAT_181108acc == 0)) {
      local_4a4 = 0;
    }
    else {
      local_4a4 = FUN_180011200(lVar8 + (ulonglong)DAT_181108acc);
    }
    local_4a8 = 0;
    if (0 < iVar5) {
      local_450 = DAT_1808ac1f4;
      fVar14 = DAT_1808ac34c;
      do {
        fVar16 = 0.0;
        uVar7 = (ulonglong)local_4a8;
        uVar11 = auStack_3dc[uVar7 * 8];
        if ((uVar11 < 0x13) &&
           (fVar12 = (float)(local_4a4 - *(int *)(lVar9 + 0xf30 + (longlong)(int)uVar11 * 8)) *
                     DAT_1808ac00c, (float)((uint)fVar12 & _DAT_1808ade90) <= DAT_1808ac658)) {
          fVar12 = fVar12 - _DAT_1808ac0cc;
          fVar22 = fVar16;
          if (0.0 <= fVar12) {
            fVar22 = fVar12;
          }
          local_494 = fVar14 - fVar22 / DAT_1808ac0c0;
          if (0.0 < local_494) {
            local_4b4 = afStack_3e4[uVar7 * 8 + 1] * DAT_1808ac3d4;
            fVar12 = local_3f8[uVar7 * 8 + 3];
            fVar22 = local_3f8[uVar7 * 8];
            local_458 = (fVar12 + fVar22) * local_450;
            fVar23 = afStack_3e4[uVar7 * 8 + -1];
            fVar15 = local_3f8[uVar7 * 8 + 1];
            local_454 = (fVar23 + fVar15) * local_450;
            fVar17 = afStack_3e4[uVar7 * 8];
            fVar18 = local_3f8[uVar7 * 8 + 2];
            local_450 = (fVar17 + fVar18) * local_450;
            fVar20 = local_458 - *param_3;
            fVar19 = local_454 - param_3[1];
            fVar21 = local_450 - param_3[2];
            fVar13 = fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21;
            if (fVar13 < 0.0) {
              fVar13 = (float)FUN_18051af10(fVar13);
              fVar14 = DAT_1808ac34c;
            }
            else {
              fVar13 = SQRT(fVar13);
            }
            if (DAT_1808abf8c <= fVar13) {
              fVar14 = fVar14 / fVar13;
              fVar20 = fVar20 * fVar14;
              fVar19 = fVar19 * fVar14;
              fVar21 = fVar21 * fVar14;
            }
            else {
              fVar19 = fVar16;
              fVar20 = fVar16;
              fVar21 = fVar16;
            }
            fVar12 = fVar12 - fVar22;
            fVar23 = fVar23 - fVar15;
            fVar17 = fVar17 - fVar18;
            fVar14 = fVar23 * fVar23 + fVar12 * fVar12 + fVar17 * fVar17;
            if (fVar14 < 0.0) {
              fVar14 = (float)FUN_18051af10(fVar14);
            }
            else {
              fVar14 = SQRT(fVar14);
            }
            fVar22 = DAT_1808abf8c;
            if (DAT_1808abf8c <= fVar14) {
              fVar14 = DAT_1808ac34c / fVar14;
              fVar12 = fVar12 * fVar14;
              fVar23 = fVar23 * fVar14;
              fVar17 = fVar17 * fVar14;
            }
            else {
              fVar17 = fVar16;
              fVar12 = fVar16;
              fVar23 = fVar16;
            }
            fVar14 = fVar17 * fVar19 - fVar23 * fVar21;
            fVar15 = fVar12 * fVar21 - fVar20 * fVar17;
            fVar12 = fVar20 * fVar23 - fVar12 * fVar19;
            if (fVar15 * fVar15 + fVar14 * fVar14 + fVar12 * fVar12 < DAT_1808abf78) {
              fVar14 = fVar19 - fVar21 * 0.0;
              fVar15 = fVar21 * 0.0 - fVar20;
              fVar12 = fVar20 * 0.0 - fVar19 * 0.0;
            }
            fVar23 = fVar15 * fVar15 + fVar14 * fVar14 + fVar12 * fVar12;
            if (fVar23 < 0.0) {
              fVar23 = (float)FUN_18051af10(fVar23);
            }
            else {
              fVar23 = SQRT(fVar23);
            }
            if (fVar22 <= fVar23) {
              fVar23 = DAT_1808ac34c / fVar23;
              fVar14 = fVar23 * fVar14;
              fVar15 = fVar23 * fVar15;
              fVar23 = fVar23 * fVar12;
            }
            else {
              fVar23 = fVar16;
              fVar14 = fVar16;
              fVar15 = fVar16;
            }
            fVar18 = fVar19 * fVar23 - fVar21 * fVar15;
            fVar22 = fVar21 * fVar14 - fVar20 * fVar23;
            fVar12 = fVar20 * fVar15 - fVar19 * fVar14;
            fVar17 = fVar22 * fVar22 + fVar18 * fVar18 + fVar12 * fVar12;
            if (fVar17 < 0.0) {
              fVar17 = (float)FUN_18051af10(fVar17);
            }
            else {
              fVar17 = SQRT(fVar17);
            }
            fVar19 = local_4b4;
            if (DAT_1808abf8c <= fVar17) {
              fVar17 = DAT_1808ac34c / fVar17;
              fVar16 = fVar18 * fVar17;
              fVar22 = fVar22 * fVar17;
              fVar12 = fVar12 * fVar17;
            }
            else {
              fVar12 = fVar16;
              fVar22 = fVar16;
            }
            local_488 = (float *)0x0;
            pfStack_480 = (float *)0x0;
            local_478 = 0;
            local_410 = *(undefined8 *)(local_3f8 + uVar7 * 8);
            local_408 = local_3f8[uVar7 * 8 + 2];
            local_404 = *(undefined8 *)(local_3f8 + uVar7 * 8 + 3);
            local_3fc = afStack_3e4[uVar7 * 8];
            pfVar10 = (float *)&local_410;
            do {
              iVar5 = 0;
              do {
                fVar18 = (float)iVar5 * DAT_1808ac28c;
                fVar17 = (float)FUN_180517790(fVar18);
                fVar18 = (float)FUN_180517200(fVar18);
                local_468 = (fVar17 * fVar16 + fVar18 * fVar14) * fVar19 + *pfVar10;
                local_464 = (fVar17 * fVar22 + fVar18 * fVar15) * fVar19 + pfVar10[1];
                local_460 = (fVar17 * fVar12 + fVar18 * fVar23) * fVar19 + pfVar10[2];
                local_4a0 = 0;
                local_4c8 = *(undefined4 *)((longlong)param_2 + 0x14);
                cVar4 = FUN_1803a1bf0(*param_2,&local_468,&local_4a0,*(undefined4 *)(param_2 + 2));
                if (cVar4 != '\0') {
                  local_4b4 = local_4a0._4_4_ + *(float *)((longlong)param_2 + 0xc);
                  local_498 = (float)local_4a0 + *(float *)(param_2 + 1);
                  FUN_1800668c0(&local_488,&local_498,&local_4b4);
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < 8);
              pfVar10 = pfVar10 + 3;
            } while (pfVar10 != local_3f8);
            FUN_1803a4ea0(&local_488);
            pfVar2 = pfStack_480;
            pfVar10 = local_488;
            if ((ulonglong)((longlong)pfStack_480 - (longlong)local_488) < 0x20) {
LAB_1803a595d:
              FUN_1800132b0(&local_488);
            }
            else {
              local_4b0 = 0;
              local_4c8 = *(undefined4 *)((longlong)param_2 + 0x14);
              cVar4 = FUN_1803a1bf0(*param_2,&local_458,&local_4b0,*(undefined4 *)(param_2 + 2));
              uVar3 = local_478;
              fVar14 = local_494;
              if (cVar4 == '\0') goto LAB_1803a595d;
              local_428 = 0.0;
              fVar22 = local_4b0._4_4_ + *(float *)((longlong)param_2 + 0xc);
              fVar23 = (float)local_4b0 + *(float *)(param_2 + 1);
              local_448 = pfVar10;
              local_440 = pfVar2;
              local_438 = local_478;
              local_488 = (float *)0x0;
              pfStack_480 = (float *)0x0;
              local_478 = 0;
              uVar11 = (uint)(*(char *)(local_490 + 0xf34 + (longlong)(int)uVar11 * 8) != '\0');
              local_42c = local_494;
              fVar12 = 0.0;
              fVar16 = 0.0;
              if (pfVar10 != pfVar2) {
                pfVar6 = pfVar10;
                do {
                  fVar12 = fVar12 + *pfVar6;
                  fVar16 = fVar16 + pfVar6[1];
                  pfVar6 = pfVar6 + 2;
                } while (pfVar6 != pfVar2);
              }
              fVar17 = (float)(ulonglong)((longlong)pfVar2 - (longlong)pfVar10 >> 3);
              pfVar6 = pfVar10;
              fVar15 = 0.0;
              local_430 = uVar11;
              local_424 = fVar23;
              local_420 = fVar22;
              if (pfVar10 != pfVar2) {
                do {
                  fVar19 = pfVar6[1] - fVar16 / fVar17;
                  fVar18 = *pfVar6 - fVar12 / fVar17;
                  fVar18 = fVar19 * fVar19 + fVar18 * fVar18;
                  if (fVar18 < 0.0) {
                    fVar18 = (float)FUN_18051af10(fVar18);
                  }
                  else {
                    fVar18 = SQRT(fVar18);
                  }
                  if (fVar18 <= fVar15) {
                    fVar18 = fVar15;
                  }
                  pfVar6 = pfVar6 + 2;
                  fVar15 = fVar18;
                } while (pfVar6 != pfVar2);
                local_428 = fVar18;
              }
              puVar1 = *(undefined8 **)(local_418 + 8);
              if (puVar1 == *(undefined8 **)(local_418 + 0x10)) {
                FUN_1803aa360(local_418,puVar1,&local_448);
              }
              else {
                local_438 = 0;
                local_440 = (float *)0x0;
                local_448 = (float *)0x0;
                *puVar1 = pfVar10;
                puVar1[1] = pfVar2;
                puVar1[2] = uVar3;
                *(uint *)(puVar1 + 3) = uVar11;
                *(float *)((longlong)puVar1 + 0x1c) = fVar14;
                *(float *)(puVar1 + 4) = local_428;
                *(float *)((longlong)puVar1 + 0x24) = fVar23;
                *(float *)(puVar1 + 5) = fVar22;
                *(longlong *)(local_418 + 8) = *(longlong *)(local_418 + 8) + 0x30;
              }
              FUN_1800132b0(&local_448);
              FUN_1800132b0(&local_488);
            }
            lVar9 = local_490;
            param_3 = local_470;
            local_450 = DAT_1808ac1f4;
            fVar14 = DAT_1808ac34c;
            iVar5 = local_4b8;
          }
        }
        local_4a8 = local_4a8 + 1;
      } while ((int)local_4a8 < iVar5);
    }
  }
  return;
}



/* ===== 1803a5a00 FUN_1803a5a00 ===== */

void FUN_1803a5a00(longlong param_1,int param_2,uint param_3,longlong param_4)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  longlong local_res8;
  float local_res18 [2];
  float local_78;
  float local_74;
  undefined1 local_70 [88];
  
  local_res8 = param_1;
  plVar6 = (longlong *)FUN_1803a9970(param_1,local_70,&local_res8);
  fVar13 = 0.0;
  fVar14 = 0.0;
  lVar2 = *plVar6;
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(DAT_180ca0a50 + 0x10);
  plVar6 = DAT_181108d90;
  if ((param_3 & 1) != 0) {
    for (; plVar6 != DAT_181108d98; plVar6 = plVar6 + 2) {
      if (*plVar6 == local_res8) {
        fVar13 = fVar13 + *(float *)(plVar6 + 1);
      }
    }
  }
  plVar6 = DAT_181108a28;
  if (((param_3 & 2) != 0) && (DAT_181108b30 != 0)) {
    if ((DAT_180961a50 == 0) || (lVar7 = FUN_18000f3a0(), lVar7 == 0)) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = (float)FUN_18000f3d0(lVar7 + 0x30);
    }
    fVar10 = DAT_181108e20 - fVar10;
    local_res18[0] = 0.0;
    plVar6 = DAT_181108a28;
    if ((((0.0 < fVar10) && (fVar10 <= DAT_1808ac750)) &&
        (cVar5 = FUN_1803c5580(DAT_181108b30,local_res8,local_res18), plVar6 = DAT_181108a28,
        cVar5 != '\0')) && (0 < (int)local_res18[0])) {
      fVar13 = fVar13 + (float)(int)local_res18[0];
      fVar14 = fVar10;
    }
  }
  for (; plVar4 = DAT_181108a30, fVar10 = DAT_1808ac34c, plVar6 != DAT_181108a30;
      plVar6 = plVar6 + 2) {
    if (((*plVar6 == local_res8) && (*(uint *)((longlong)plVar6 + 0xc) - 2 < 2)) &&
       (((param_3 >> (*(uint *)((longlong)plVar6 + 0xc) & 0x1f) & 1) != 0 &&
        (0.0 < *(float *)(plVar6 + 1))))) {
      fVar13 = fVar13 + *(float *)(plVar6 + 1);
    }
  }
  fVar1 = *(float *)(DAT_180ca0a50 + 0x40);
  if ((fVar13 <= 0.0) || (param_2 < 1)) {
    bVar3 = false;
    fVar11 = (float)((uint)fVar1 ^ DAT_1808adec0);
  }
  else {
    bVar3 = true;
    fVar11 = fVar1;
  }
  local_78 = 1.0;
  local_74 = fVar11 / DAT_1808ac154 + *(float *)(lVar2 + 0x24);
  pfVar9 = local_res18;
  if (0.0 <= local_74) {
    pfVar9 = &local_74;
  }
  pfVar8 = &local_78;
  if (local_74 <= DAT_1808ac34c) {
    pfVar8 = pfVar9;
  }
  *(float *)(lVar2 + 0x24) = *pfVar8;
  if (bVar3) {
    *(int *)(lVar2 + 0x28) = param_2;
    *(float *)(lVar2 + 0x18) = fVar13;
    *(float *)(lVar2 + 0x1c) = fVar14;
    if (fVar14 <= 0.0) {
      local_78 = 1.0;
      if (param_2 < 1) {
        param_2 = 1;
      }
      local_74 = fVar13 / (float)param_2;
      pfVar9 = local_res18;
      if (0.0 <= local_74) {
        pfVar9 = &local_74;
      }
      pfVar8 = &local_78;
      if (local_74 <= fVar10) {
        pfVar8 = pfVar9;
      }
      fVar14 = DAT_1808ac294 - *pfVar8 * DAT_1808ac1f4;
    }
    local_78 = 1.0;
    local_res18[0] = 0.0;
    fVar13 = DAT_1808ac000;
    if (DAT_1808ac000 <= fVar14) {
      fVar13 = fVar14;
    }
    uVar12 = FUN_180519fe0(pfVar9,fVar10,plVar4,fVar1 / fVar13 + *(float *)(lVar2 + 0x20));
  }
  else {
    uVar12 = 0;
  }
  *(undefined4 *)(lVar2 + 0x20) = uVar12;
  if (0.0 < *(float *)(lVar2 + 0x24)) {
    *(undefined1 *)(param_4 + 0x4d0) = 1;
    *(undefined4 *)(param_4 + 0x4d4) = *(undefined4 *)(lVar2 + 0x18);
    *(undefined4 *)(param_4 + 0x4d8) = *(undefined4 *)(lVar2 + 0x20);
    *(undefined4 *)(param_4 + 0x4dc) = *(undefined4 *)(lVar2 + 0x24);
  }
  return;
}



/* ===== 1803a5cf0 FUN_1803a5cf0 ===== */

bool FUN_1803a5cf0(int param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_68 [80];
  
  if ((((*param_3 != 0) && (DAT_180ca09f0 != 0)) &&
      (iVar5 = FUN_180011200(*param_3 + (ulonglong)DAT_180ca09f0), iVar5 - 1U < 1000)) &&
     ((((lVar6 = FUN_1803a08e0(param_3), lVar6 != 0 && (DAT_1809619a4 != 0)) &&
       ((DAT_180961998 != 0 &&
        ((sVar4 = FUN_180011440((ulonglong)DAT_180961998 + lVar6 + (ulonglong)DAT_1809619a8 +
                                (ulonglong)DAT_1809619a4), sVar4 == 0x28 || (sVar4 == 0x40)))))) &&
      (DAT_1809619a0 != 0)))) {
    lVar6 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + lVar6);
    uVar2 = DAT_180ca09f8;
    uVar1 = DAT_180ca0950;
    if (((lVar6 != 0) && (DAT_181108b0c != 0)) && (DAT_181108b10 != 0)) {
      uVar9 = (ulonglong)DAT_180ca09f8;
      uVar10 = (ulonglong)DAT_180ca0950;
      if (((param_2 == 0) || (DAT_180ca09f8 == 0)) ||
         ((lVar7 = FUN_18000f3a0(uVar9 + param_2), lVar7 == 0 || (uVar1 == 0)))) {
        fVar15 = 0.0;
        fVar14 = 0.0;
        fVar16 = 0.0;
      }
      else {
        pfVar8 = (float *)FUN_1800111b0(local_68,lVar7 + uVar10);
        fVar15 = *pfVar8;
        fVar14 = pfVar8[1];
        fVar16 = pfVar8[2];
      }
      if (((*param_3 == 0) || (uVar2 == 0)) ||
         ((lVar7 = FUN_18000f3a0(*param_3 + uVar9), lVar7 == 0 || (uVar1 == 0)))) {
        fVar11 = 0.0;
        fVar12 = 0.0;
        fVar13 = 0.0;
      }
      else {
        pfVar8 = (float *)FUN_1800111b0(local_68,lVar7 + uVar10);
        fVar11 = *pfVar8;
        fVar12 = pfVar8[1];
        fVar13 = pfVar8[2];
      }
      fVar16 = fVar16 - (fVar13 + DAT_1808acab0);
      fVar15 = fVar15 - (fVar11 + 0.0);
      fVar14 = fVar14 - (fVar12 + 0.0);
      FUN_18000f3d0((ulonglong)DAT_181108b10 + lVar6);
      if (fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16 < 0.0) {
        FUN_18051af10();
      }
      fVar15 = (float)FUN_18051afb0();
      iVar5 = FUN_180011200((ulonglong)DAT_181108b0c + lVar6);
      fVar14 = (float)iVar5 * fVar15 * DAT_1808ac3d4;
      fVar15 = fVar14;
      if (((DAT_181108a90 != 0) &&
          (iVar5 = FUN_180011200((ulonglong)DAT_181108a90 + param_2), 0 < iVar5)) &&
         (DAT_181108b14 != 0)) {
        fVar15 = (float)FUN_18000f3d0((ulonglong)DAT_181108b14 + lVar6);
        fVar16 = (float)iVar5;
        fVar15 = fVar15 * fVar14 * DAT_1808ac1f4;
        if (fVar16 < (fVar14 - fVar15) * DAT_1808ac1f4) {
          fVar15 = fVar14 - (fVar16 + fVar16);
        }
      }
      bVar3 = (float)param_1 <= fVar15;
      goto LAB_1803a5fc3;
    }
  }
  bVar3 = param_1 < 0x5d;
LAB_1803a5fc3:
  return bVar3;
}



/* ===== 1803a5fe0 FUN_1803a5fe0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803a5fe0(longlong *param_1,char ******param_2,longlong *param_3,longlong param_4,
                  char param_5,char *param_6)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 ******ppppppuVar18;
  size_t sVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  char *pcVar22;
  longlong lVar23;
  longlong *plVar24;
  uint uVar25;
  undefined8 ******ppppppuVar26;
  char ******ppppppcVar27;
  undefined4 *puVar28;
  char ******ppppppcVar29;
  ulonglong uVar30;
  uint uVar31;
  ulonglong uVar32;
  char *pcVar33;
  undefined1 *puVar34;
  ulonglong uVar35;
  longlong *plVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [24];
  char local_188 [8];
  ulonglong local_180;
  undefined1 local_178 [8];
  undefined8 ******local_170;
  ulonglong local_168;
  float local_160 [2];
  ulonglong local_158 [2];
  float local_148;
  float fStack_144;
  float local_140;
  longlong *local_138;
  undefined8 ******local_130;
  longlong *local_128;
  longlong local_120;
  char ******local_118;
  longlong *local_110;
  longlong *plStack_108;
  undefined8 local_100;
  short local_f8;
  undefined2 uStack_f6;
  undefined4 uStack_f4;
  char *pcStack_f0;
  undefined4 local_e8;
  char cStack_e4;
  undefined1 uStack_e3;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined2 uStack_d2;
  char ******local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0 [16];
  undefined8 ******local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  
  local_90 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  local_168 = CONCAT44(local_168._4_4_,1);
  plVar24 = param_1 + 1;
  ppppppuVar18 = (undefined8 ******)*plVar24;
  lVar17 = *param_1;
  local_170 = ppppppuVar18;
  local_138 = param_1;
  local_128 = param_3;
  local_120 = lVar17;
  local_118 = param_2;
  if ((DAT_181108a64 == 0) ||
     (cVar5 = FUN_180011220((longlong)ppppppuVar18 + (ulonglong)DAT_181108a64), cVar5 != '\0')) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  local_188[0] = cVar5;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_180);
    DAT_181108a00 = local_180;
    local_180 = FUN_1803a0c50(&local_180);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_180 = DAT_1811089f8;
  }
  uVar35 = local_180;
  DAT_1811089f8 = local_180;
  if ((DAT_180961a50 == 0) || (lVar15 = FUN_18000f3a0(), lVar15 == 0)) {
    fVar37 = 0.0;
  }
  else {
    fVar37 = (float)FUN_18000f3d0(lVar15 + 0x30);
  }
  *(float *)(param_6 + 0x484) = *(float *)(param_4 + 0xc) - *(float *)(param_4 + 4);
  if ((*plVar24 == 0) || (DAT_180ca09f0 == 0)) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_180011200(*plVar24 + (ulonglong)DAT_180ca09f0);
  }
  *param_6 = cVar5;
  *(float *)(param_6 + 0x3c0) = (float)iVar11;
  cVar5 = FUN_1803a5cf0(iVar11,ppppppuVar18,&local_180);
  ppppppcVar27 = local_118;
  param_6[0x434] = cVar5;
  if ((*(char *)((longlong)local_118 + 4) != '\0') &&
     ((*(uint *)((longlong)local_118 + 0x113c) & 0xf) != 0)) {
    FUN_1803a5a00(ppppppuVar18,iVar11,*(uint *)((longlong)local_118 + 0x113c),param_6);
  }
  if (*(char *)((longlong)ppppppcVar27 + 0x2fc) != '\0') {
    FUN_1803a0620(local_138,&local_d0);
    FUN_18002ba60(param_6 + 0xc0);
    FUN_18000f890(&local_d0);
    param_6[5] = *(longlong *)(param_6 + 0xd0) != 0;
    if (((*(char *)((longlong)ppppppcVar27 + 0x1174) != '\0') && (lVar17 != 0)) &&
       (DAT_181108ac8 != 0)) {
      uVar16 = FUN_18000f3a0((ulonglong)DAT_181108ac8 + lVar17);
      uVar16 = FUN_1800dd940(uVar16);
      *(undefined8 *)(param_6 + 0x478) = uVar16;
    }
  }
  local_110 = (longlong *)0x0;
  plStack_108 = (longlong *)0x0;
  local_100 = 0;
  local_168 = CONCAT44(local_168._4_4_,1);
  if (((DAT_180ca0a0c != 0) && (uVar32 = (ulonglong)DAT_181108b08, DAT_181108b08 != 0)) &&
     (lVar17 = FUN_18000f3a0((longlong)ppppppuVar18 + (ulonglong)DAT_180ca0a0c), lVar17 != 0)) {
    iVar11 = FUN_180011200(uVar32 + lVar17);
    ppppppuVar18 = (undefined8 ******)FUN_18000f3a0(uVar32 + lVar17 + 8);
    if (((iVar11 - 1U < 0x40) && (ppppppuVar18 != (undefined8 ******)0x0)) &&
       (uVar32 = 0, 0 < iVar11)) {
      do {
        FUN_180011200((void *)((longlong)ppppppuVar18 + uVar32 * 4));
        FUN_1803a0940(local_158);
        if (local_158[0] != 0) {
          local_180 = local_158[0];
          FUN_1800242d0(&local_110);
        }
        uVar31 = (int)uVar32 + 1;
        uVar32 = (ulonglong)uVar31;
      } while ((int)uVar31 < iVar11);
    }
  }
  local_180 = FUN_1803a08e0(plVar24);
  if (((local_180 == 0) ||
      (ppppppuVar18 = (undefined8 ******)(ulonglong)DAT_1809619a4, DAT_1809619a4 == 0)) ||
     (DAT_180961998 == 0)) {
    sVar8 = 0;
    if (local_180 != 0) goto LAB_1803a62db;
LAB_1803a62fd:
    local_130 = (undefined8 ******)0x0;
  }
  else {
    sVar8 = FUN_180011440(local_180 + DAT_180961998 + (ulonglong)DAT_1809619a8 +
                          (longlong)ppppppuVar18);
LAB_1803a62db:
    if (DAT_1809619a0 == 0) goto LAB_1803a62fd;
    local_130 = (undefined8 ******)
                FUN_18000f3a0((ulonglong)DAT_1809619a0 + DAT_1809619c0 + local_180);
  }
  plVar36 = plStack_108;
  puVar34 = auStack_1a8;
  plVar24 = local_110;
  if (local_188[0] != '\0') {
    for (; plVar24 != plVar36; plVar24 = plVar24 + 1) {
      if (((*plVar24 != 0) &&
          (ppppppuVar18 = (undefined8 ******)(ulonglong)DAT_1809619a4, DAT_1809619a4 != 0)) &&
         ((DAT_180961998 != 0 &&
          (sVar9 = FUN_180011440(*plVar24 + (ulonglong)DAT_180961998 + (ulonglong)DAT_1809619a8 +
                                 (longlong)ppppppuVar18), sVar9 == 0x31)))) {
        param_6[1] = '\x01';
        plVar24 = local_110;
        plVar36 = plStack_108;
        goto joined_r0x0001803a637f;
      }
    }
  }
  param_6[1] = '\0';
  plVar24 = local_110;
  plVar36 = plStack_108;
  if (local_188[0] != '\0') {
joined_r0x0001803a637f:
    do {
      plVar4 = plStack_108;
      bVar3 = plVar24 == plStack_108;
      plStack_108 = plVar36;
      if (bVar3) break;
      if (*plVar24 != 0) {
        ppppppuVar18 = (undefined8 ******)(ulonglong)DAT_1809619a4;
        if (DAT_1809619a4 != 0) {
          if ((DAT_180961998 != 0) &&
             (sVar9 = FUN_180011440(*plVar24 + (ulonglong)DAT_180961998 + (ulonglong)DAT_1809619a8 +
                                    (longlong)ppppppuVar18), sVar9 == 0x1f)) {
            cVar5 = '\x01';
            goto LAB_1803a63c5;
          }
        }
      }
      plVar24 = plVar24 + 1;
      plVar36 = plStack_108;
      plStack_108 = plVar4;
    } while( true );
  }
  cVar5 = '\0';
LAB_1803a63c5:
  param_6[3] = cVar5;
  param_6[0x480] = sVar8 == 0x1f;
  if (DAT_181108aa4 == 0) {
    local_158[0] = 0;
LAB_1803a6429:
    cVar5 = '\0';
  }
  else {
    local_158[0] = FUN_18000f3a0((ulonglong)DAT_181108aa4 + (longlong)local_170);
    if (((local_158[0] == 0) || (DAT_181108aac == 0)) ||
       (cVar5 = FUN_180011220(DAT_181108aac + local_158[0]), cVar5 == '\0')) goto LAB_1803a6429;
    cVar5 = '\x01';
  }
  ppppppuVar26 = local_130;
  local_188[1] = cVar5;
  param_6[2] = cVar5;
  fVar41 = DAT_1808acb08;
  fVar39 = DAT_1808ac1f4;
  if (local_180 == 0) {
LAB_1803a65dc:
    if (sVar8 != 0) goto LAB_1803a65e5;
  }
  else {
    if (sVar8 == 0x1f) {
      fVar38 = (float)FUN_1803a3560(local_180);
      *(float *)(param_6 + 0x414) = fVar38 * fVar41;
      param_6[0x15] = '\x01';
      ppppppuVar26 = ppppppuVar18;
LAB_1803a653e:
      ppppppuVar18 = ppppppuVar26;
    }
    else {
      ppppppuVar18 = local_130;
      if (((local_130 != (undefined8 ******)0x0) && (DAT_181108ad4 != 0)) &&
         (uVar32 = (ulonglong)DAT_181108ad8, DAT_181108ad8 != 0)) {
        iVar14 = FUN_180011200(local_180 + DAT_181108ad4);
        iVar12 = FUN_180011200((longlong)ppppppuVar26 + uVar32);
        iVar11 = iVar14;
        if (iVar14 < iVar12) {
          iVar11 = iVar12;
        }
        if ((0 < iVar11) && (0 < iVar12)) {
          iVar11 = iVar14;
          if (iVar12 < iVar14) {
            iVar11 = iVar12;
          }
          uVar13 = FUN_18053f0d0(((float)iVar11 / (float)iVar12) * fVar41);
          *(undefined4 *)(param_6 + 0x414) = uVar13;
          param_6[0x15] = '\x01';
          FUN_18003a390(&local_d0,iVar14);
          FUN_18002ba60(param_6 + 0x458);
          FUN_18000f890(&local_d0);
          param_6[0x449] = (float)iVar14 / (float)iVar12 < DAT_1808ac140;
        }
        goto LAB_1803a653e;
      }
    }
    if (local_188[0] == '\0') goto LAB_1803a65dc;
    if (sVar8 != 0x1f) {
      local_168 = local_168 & 0xffffffff00000000;
      local_160[0] = 0.0;
      cVar7 = FUN_1803a3690(local_180,&local_168,local_160);
      if (cVar7 != '\0') {
        if (fVar39 <= local_160[0] - (float)local_168) {
          iVar11 = (int)(((fVar37 - (float)local_168) / (local_160[0] - (float)local_168)) * fVar41)
          ;
          *(float *)(param_6 + 0x418) = (float)iVar11;
          param_6[0x16] = iVar11 != 100;
        }
      }
      goto LAB_1803a65dc;
    }
    fVar38 = (float)FUN_1803a3560(local_180,local_178);
    *(float *)(param_6 + 0x418) = fVar38 * fVar41;
    param_6[0x16] = '\x01';
LAB_1803a65e5:
    lVar17 = FUN_180280c60(sVar8);
    if (lVar17 == 0) {
      uStack_a8 = 0;
      local_a0 = 0;
      local_98 = 0xf;
      local_b0 = (undefined8 ******)0x0;
    }
    else {
      FUN_180024b50(&local_b0,lVar17 + 0x28);
    }
    uVar30 = local_98;
    uVar32 = local_a0;
    ppppppuVar18 = local_b0;
    sVar19 = 4;
    if (local_a0 < 4) {
      sVar19 = local_a0;
    }
    ppppppuVar26 = &local_b0;
    if (0xf < local_98) {
      ppppppuVar26 = local_b0;
    }
    iVar11 = memcmp(ppppppuVar26,&DAT_1806de684,sVar19);
    if ((iVar11 == 0) && (3 < sVar19)) {
      ppppppuVar26 = &local_b0;
      if (0xf < uVar30) {
        ppppppuVar26 = ppppppuVar18;
      }
      uVar32 = uVar32 - sVar19;
      FUN_180540530(ppppppuVar26,(longlong)ppppppuVar26 + sVar19,uVar32 + 1);
      local_a0 = uVar32;
    }
    uVar30 = local_180;
    if (uVar32 == 0) {
      if ((((local_180 == 0) || (DAT_1809619a4 == 0)) || (DAT_180961998 == 0)) ||
         (sVar9 = FUN_180011440(DAT_180961998 + local_180 + (ulonglong)DAT_1809619a8 +
                                (ulonglong)DAT_1809619a4), sVar9 != 0x40)) {
        local_168 = uVar30;
        uVar16 = FUN_1803a0710(&local_168);
        pcVar33 = (char *)FUN_18039e5c0(uVar16);
        if (pcVar33 != (char *)0x0) goto LAB_1803a66e1;
      }
      else {
        pcVar33 = "revolver";
LAB_1803a66e1:
        sVar19 = strlen(pcVar33);
        FUN_180029840(&local_b0,pcVar33,sVar19);
      }
      uVar32 = local_a0;
    }
    if ((undefined8 *******)(param_6 + 800) != &local_b0) {
      ppppppuVar26 = &local_b0;
      if (0xf < local_98) {
        ppppppuVar26 = local_b0;
      }
      FUN_180029840(param_6 + 800,ppppppuVar26,uVar32);
      uVar32 = local_a0;
    }
    param_6[0x18] = uVar32 != 0;
    FUN_18000f890(&local_b0);
    cVar5 = local_188[1];
  }
  cVar7 = (char)ppppppuVar18;
  if (uVar35 == 0) {
    local_148 = 0.0;
    fStack_144 = 0.0;
    local_140 = 0.0;
  }
  else {
    if (((DAT_180ca09f8 == 0) || (lVar17 = FUN_18000f3a0(uVar35 + DAT_180ca09f8), lVar17 == 0)) ||
       (DAT_180ca0950 == 0)) {
      fVar40 = 0.0;
      fVar38 = 0.0;
      fVar41 = 0.0;
    }
    else {
      puVar20 = (undefined8 *)FUN_1800111b0(&local_148);
      fVar40 = (float)*puVar20;
      fVar41 = *(float *)(puVar20 + 1);
      fVar38 = (float)((ulonglong)*puVar20 >> 0x20);
    }
    local_148 = fVar40 + 0.0;
    fStack_144 = fVar38 + 0.0;
    local_140 = fVar41 + DAT_1808acab0;
  }
  if ((*local_128 == 0) || (cVar6 = FUN_1803a1740(), cVar6 == '\0')) {
LAB_1803a6991:
    if (DAT_180cd1304 == '\0') goto LAB_1803a69d9;
    uVar32 = DAT_181108a00;
    puVar34 = auStack_1a8;
  }
  else {
    fVar41 = *(float *)((longlong)local_138 + 0x1c) - fStack_144;
    fVar41 = fVar41 * fVar41 +
             (*(float *)(local_138 + 3) - local_148) * (*(float *)(local_138 + 3) - local_148) +
             (*(float *)(local_138 + 4) - local_140) * (*(float *)(local_138 + 4) - local_140);
    if (fVar41 < 0.0) {
      fVar41 = (float)FUN_18051af10();
    }
    else {
      fVar41 = SQRT(fVar41);
    }
    if (DAT_18091a1b8 == 2) goto LAB_1803a68a1;
    if (DAT_18091a1b8 == 1) {
LAB_1803a69c2:
      fVar41 = fVar41 * _DAT_1808ac034;
      cVar7 = '\0';
    }
    else {
      if (DAT_180c9a700 < 0) {
        local_168 = local_168 & 0xffffffff00000000;
        iVar11 = GetLocaleInfoEx((LPCWSTR)0x0,0x2000000d,(LPWSTR)&local_168,2);
        if ((iVar11 < 1) || ((float)local_168 != 1.4013e-45)) {
          DAT_180c9a700 = 0;
          fVar41 = fVar41 * _DAT_1808ac034;
          cVar7 = '\0';
          goto LAB_1803a68cc;
        }
        DAT_180c9a700 = 1;
      }
      else if (DAT_180c9a700 != 1) goto LAB_1803a69c2;
LAB_1803a68a1:
      fVar38 = DAT_1808ac750;
      fVar41 = (float)FUN_18053f0d0();
      fVar41 = fVar41 * fVar38;
      cVar7 = '\x01';
    }
LAB_1803a68cc:
    if (fVar41 <= 0.0) goto LAB_1803a6991;
    fVar41 = (float)FUN_18053f0d0();
    uVar16 = FUN_18003a390(&local_f8,(int)fVar41);
    pcVar33 = " m";
    if (cVar7 != '\0') {
      pcVar33 = " ft";
    }
    sVar19 = strlen(pcVar33);
    puVar20 = (undefined8 *)FUN_1800134a0(uVar16,pcVar33,sVar19);
    local_d0 = (char ******)*puVar20;
    uStack_c8 = puVar20[1];
    local_c0 = *(undefined1 (*) [16])(puVar20 + 2);
    puVar20[2] = 0;
    puVar20[3] = 0xf;
    *(undefined1 *)puVar20 = 0;
    FUN_18002ba60(param_6 + 0x340,&local_d0);
    if ((ulonglong)local_c0._8_8_ < 0x10) {
LAB_1803a6983:
      FUN_18000f890(&local_f8);
      param_6[0x19] = '\x01';
      goto LAB_1803a6991;
    }
    ppppppcVar27 = local_d0;
    if ((local_c0._8_8_ + 1 < 0x1000) ||
       (ppppppcVar27 = (char ******)local_d0[-1],
       (char *)((longlong)local_d0 + (-8 - (longlong)ppppppcVar27)) < (char *)0x20)) {
      thunk_FUN_1803d64e0(ppppppcVar27);
      goto LAB_1803a6983;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar34 = auStack_1a0;
LAB_1803a69d9:
    *(undefined8 *)(puVar34 + -8) = 0x1803a69e3;
    FUN_1803a0b60(puVar34 + 0x40);
    uVar32 = *(ulonglong *)(puVar34 + 0x40);
  }
  lVar17 = local_120;
  if (uVar32 != 0) {
    uVar30 = 1;
    do {
      uVar31 = (uint)uVar30;
      if (*(ulonglong *)(&DAT_181108b40 + uVar30 * 8) == uVar32) goto LAB_1803a6a11;
      uVar30 = (ulonglong)(uVar31 + 1);
    } while ((int)(uVar31 + 1) < 0x41);
  }
  uVar31 = 0;
LAB_1803a6a11:
  if (local_120 != 0) {
    uVar32 = 1;
    do {
      uVar25 = (uint)uVar32;
      if (*(longlong *)(&DAT_181108b40 + uVar32 * 8) == local_120) goto LAB_1803a6a31;
      uVar32 = (ulonglong)(uVar25 + 1);
    } while ((int)(uVar25 + 1) < 0x41);
  }
  uVar25 = 0;
LAB_1803a6a31:
  if ((((uVar35 == 0) || (uVar31 == 0)) || (uVar25 == 0)) || (uVar31 <= uVar25)) {
    param_6[6] = '\0';
  }
  else {
    param_6[6] = '\x01';
    *(undefined8 *)(puVar34 + -8) = 0x1803a6a60;
    FUN_180029840(param_6 + 0xe0,&DAT_18058b670,3);
  }
  if (lVar17 == 0) {
LAB_1803a6bff:
    cVar7 = puVar34[0x20];
    if (cVar7 != '\0') {
      if (lVar17 != 0) {
        if (DAT_181108a90 == 0) goto LAB_1803a6c38;
        *(undefined8 *)(puVar34 + -8) = 0x1803a6c2d;
        iVar11 = FUN_180011200();
        goto LAB_1803a6c3a;
      }
      goto LAB_1803a6cba;
    }
LAB_1803a6ce2:
    param_6[10] = '\0';
    if (cVar7 != '\0') goto LAB_1803a6cef;
    lVar17 = *(longlong *)(puVar34 + 0x38);
LAB_1803a6d33:
    param_6[0xb] = '\0';
  }
  else {
    if (DAT_181108abc == 0) {
LAB_1803a6b6c:
      if ((DAT_181108ac0 != 0) && (uVar32 = (ulonglong)DAT_181108ac4, DAT_181108ac4 != 0)) {
        *(undefined8 *)(puVar34 + -8) = 0x1803a6b8d;
        lVar15 = FUN_18000f3a0();
        if (lVar15 != 0) {
          *(undefined8 *)(puVar34 + -8) = 0x1803a6b9b;
          uVar13 = FUN_180011200(lVar15 + uVar32);
          *(undefined8 *)(puVar34 + -8) = 0x1803a6ba6;
          uVar16 = FUN_18003a390(&local_d0,uVar13);
          *(undefined8 *)(puVar34 + -8) = 0x1803a6bba;
          pcVar33 = (char *)FUN_180066ab0(&local_f8,&DAT_18089fb34,uVar16);
          if (0xf < *(ulonglong *)(pcVar33 + 0x18)) {
            pcVar33 = *(char **)pcVar33;
          }
          param_6[8] = '\x01';
          if (pcVar33 != (char *)0x0) {
            *(undefined8 *)(puVar34 + -8) = 0x1803a6bd9;
            sVar19 = strlen(pcVar33);
            *(undefined8 *)(puVar34 + -8) = 0x1803a6beb;
            FUN_180029840(param_6 + 0x120,pcVar33,sVar19);
          }
          *(undefined8 *)(puVar34 + -8) = 0x1803a6bf5;
          FUN_18000f890(&local_f8);
          *(undefined8 *)(puVar34 + -8) = 0x1803a6bff;
          FUN_18000f890();
        }
      }
      goto LAB_1803a6bff;
    }
    *(undefined8 *)(puVar34 + -8) = 0x1803a6a87;
    iVar11 = FUN_180011200(lVar17 + (ulonglong)DAT_181108abc);
    *(float *)(param_6 + 0x3dc) = (float)iVar11;
    *(undefined8 *)(puVar34 + -8) = 0x1803a6aa4;
    uVar16 = FUN_18003a390(&local_f8,iVar11);
    *(undefined8 *)(puVar34 + -8) = 0x1803a6aba;
    puVar20 = (undefined8 *)FUN_1800134a0(uVar16,&DAT_18089fb38,3);
    local_d0 = (char ******)*puVar20;
    uStack_c8 = puVar20[1];
    local_c0 = *(undefined1 (*) [16])(puVar20 + 2);
    puVar20[2] = 0;
    puVar20[3] = 0xf;
    *(undefined1 *)puVar20 = 0;
    ppppppcVar27 = (char ******)&local_d0;
    if (0xf < (ulonglong)local_c0._8_8_) {
      ppppppcVar27 = local_d0;
    }
    param_6[7] = iVar11 != 0;
    if ((iVar11 != 0) && (ppppppcVar27 != (char ******)0x0)) {
      *(undefined8 *)(puVar34 + -8) = 0x1803a6b11;
      sVar19 = strlen((char *)ppppppcVar27);
      *(undefined8 *)(puVar34 + -8) = 0x1803a6b23;
      FUN_180029840(param_6 + 0x100,ppppppcVar27,sVar19);
    }
    if ((ulonglong)local_c0._8_8_ < 0x10) {
LAB_1803a6b5f:
      *(undefined8 *)(puVar34 + -8) = 0x1803a6b68;
      FUN_18000f890();
      lVar17 = local_120;
      goto LAB_1803a6b6c;
    }
    uVar32 = local_c0._8_8_ + 1;
    ppppppcVar27 = local_d0;
    if (uVar32 < 0x1000) {
LAB_1803a6b59:
      *(undefined8 *)(puVar34 + -8) = 0x1803a6b5e;
      thunk_FUN_1803d64e0(ppppppcVar27,uVar32);
      goto LAB_1803a6b5f;
    }
    ppppppcVar27 = (char ******)local_d0[-1];
    if ((char *)((longlong)local_d0 + (-8 - (longlong)ppppppcVar27)) < (char *)0x20) {
      uVar32 = local_c0._8_8_ + 0x28;
      goto LAB_1803a6b59;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    puVar34 = puVar34 + 8;
LAB_1803a6c38:
    iVar11 = 0;
LAB_1803a6c3a:
    if ((*(longlong *)(puVar34 + 0x50) == 0) || (DAT_181108aa8 == 0)) {
LAB_1803a6c5f:
      bVar3 = false;
    }
    else {
      *(undefined8 *)(puVar34 + -8) = 0x1803a6c57;
      cVar6 = FUN_180011220();
      if (cVar6 == '\0') goto LAB_1803a6c5f;
      bVar3 = true;
    }
    if (iVar11 < 1) {
      param_6[0x3e4] = '\0';
      param_6[0x3e5] = '\0';
      param_6[0x3e6] = '\0';
      param_6[999] = '\0';
      pcVar33 = "NA";
    }
    else {
      param_6[0x3e4] = '\0';
      param_6[0x3e5] = '\0';
      param_6[0x3e6] = -0x80;
      param_6[999] = '?';
      if (bVar3) {
        param_6[9] = '\0';
        goto LAB_1803a6cba;
      }
      pcVar33 = "NH";
    }
    param_6[9] = '\x01';
    if (pcVar33 != (char *)0x0) {
      *(undefined8 *)(puVar34 + -8) = 0x1803a6ca8;
      sVar19 = strlen(pcVar33);
      *(undefined8 *)(puVar34 + -8) = 0x1803a6cba;
      FUN_180029840(param_6 + 0x140,pcVar33,sVar19);
    }
LAB_1803a6cba:
    if (cVar5 == '\0') goto LAB_1803a6ce2;
    param_6[10] = '\x01';
    *(undefined8 *)(puVar34 + -8) = 0x1803a6cdd;
    FUN_180029840(param_6 + 0x160,&DAT_18058b6d4,3);
LAB_1803a6cef:
    lVar17 = *(longlong *)(puVar34 + 0x38);
    if (DAT_181108a80 == 0) goto LAB_1803a6d33;
    *(undefined8 *)(puVar34 + -8) = 0x1803a6d0a;
    cVar5 = FUN_180011220();
    if (cVar5 == '\0') goto LAB_1803a6d33;
    param_6[0xb] = '\x01';
    *(undefined8 *)(puVar34 + -8) = 0x1803a6d2c;
    FUN_180029840(param_6 + 0x180,&DAT_18058b6e0,4);
  }
  if (DAT_181108a8c == 0) {
LAB_1803a6d52:
    if (DAT_181108a88 != 0) {
      *(undefined8 *)(puVar34 + -8) = 0x1803a6d65;
      fVar41 = (float)FUN_18000f3d0();
      if (fVar39 < fVar41) goto LAB_1803a6d6b;
    }
    bVar3 = false;
  }
  else {
    *(undefined8 *)(puVar34 + -8) = 0x1803a6d4b;
    uVar32 = FUN_180011200();
    if ((uVar32 & 0x7fffffff) == 0) goto LAB_1803a6d52;
LAB_1803a6d6b:
    bVar3 = true;
  }
  if ((cVar7 == '\0') || (!bVar3)) {
    param_6[0xc] = '\0';
    cVar5 = '\0';
    if (cVar7 != '\0') goto LAB_1803a6dac;
    lVar15 = *(longlong *)(puVar34 + 0x28);
LAB_1803a6e59:
    param_6[0xd] = cVar5;
    if (cVar5 != '\0') {
LAB_1803a6e61:
      *(undefined8 *)(puVar34 + -8) = 0x1803a6e7a;
      FUN_180029840(param_6 + 0x1c0,"Reload",6);
    }
    if (cVar7 != '\0') goto LAB_1803a6e85;
LAB_1803a6f09:
    param_6[0xe] = '\0';
  }
  else {
    param_6[0xc] = '\x01';
    *(undefined8 *)(puVar34 + -8) = 0x1803a6d98;
    FUN_180029840(param_6 + 0x1a0,"Blind",5);
LAB_1803a6dac:
    cVar5 = '\0';
    lVar15 = *(longlong *)(puVar34 + 0x28);
    if ((lVar15 == 0) || (*(longlong *)(puVar34 + 0x78) == 0)) goto LAB_1803a6e59;
    if (DAT_1809619a0 == 0) {
LAB_1803a6dfa:
      iVar11 = -1;
    }
    else {
      *(undefined8 *)(puVar34 + -8) = 0x1803a6de1;
      lVar15 = FUN_18000f3a0();
      if ((lVar15 == 0) || (DAT_181108adc == 0)) goto LAB_1803a6dfa;
      *(undefined8 *)(puVar34 + -8) = 0x1803a6df8;
      iVar11 = FUN_180011200();
    }
    lVar15 = *(longlong *)(puVar34 + 0x28);
    if (sVar8 == 0x1f) {
      puVar34[0x21] = 0;
      *(undefined8 *)(puVar34 + -8) = 0x1803a6e1c;
      FUN_1803a3560(lVar15,puVar34 + 0x21);
      cVar5 = puVar34[0x21];
      goto LAB_1803a6e59;
    }
    if (5 < iVar11 - 1U) goto LAB_1803a6e59;
    if (DAT_181108ad0 != 0) {
      *(undefined8 *)(puVar34 + -8) = 0x1803a6e3d;
      cVar5 = FUN_180011220();
      if (cVar5 == '\0') goto LAB_1803a6e48;
      param_6[0xd] = '\x01';
      goto LAB_1803a6e61;
    }
LAB_1803a6e48:
    param_6[0xd] = '\0';
LAB_1803a6e85:
    if (DAT_181108a70 == 0) {
LAB_1803a6eaf:
      if (DAT_181108a84 != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x1803a6ec2;
        cVar5 = FUN_180011220();
        if (cVar5 != '\0') {
          pcVar33 = "Spawn";
          param_6[0xe] = '\x01';
          goto LAB_1803a6f18;
        }
      }
      if (DAT_181108a74 != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x1803a6eee;
        cVar5 = FUN_180011220();
        if ((cVar5 == '\a') || (cVar5 == '\b')) {
          pcVar33 = "Noclip";
          param_6[0xe] = '\x01';
          goto LAB_1803a6f18;
        }
      }
      goto LAB_1803a6f09;
    }
    *(undefined8 *)(puVar34 + -8) = 0x1803a6e98;
    cVar5 = FUN_180011220();
    if (cVar5 != '\0') goto LAB_1803a6eaf;
    pcVar33 = "Immune";
    param_6[0xe] = '\x01';
LAB_1803a6f18:
    *(undefined8 *)(puVar34 + -8) = 0x1803a6f20;
    sVar19 = strlen(pcVar33);
    *(undefined8 *)(puVar34 + -8) = 0x1803a6f32;
    FUN_180029840(param_6 + 0x1e0,pcVar33,sVar19);
  }
  if (DAT_181108aa0 == 0) {
LAB_1803a6fee:
    if (cVar7 != '\0') goto LAB_1803a6ff7;
LAB_1803a714f:
    param_6[0x10] = '\0';
  }
  else {
    *(undefined8 *)(puVar34 + -8) = 0x1803a6f49;
    fVar39 = (float)FUN_18000f3d0(lVar17 + (ulonglong)DAT_181108aa0);
    if (DAT_181108a6c == 0) {
      fVar41 = fVar37;
    }
    else {
      *(undefined8 *)(puVar34 + -8) = 0x1803a6f5f;
      fVar41 = (float)FUN_18000f3d0(lVar17 + (ulonglong)DAT_181108a6c);
    }
    fVar38 = DAT_1808ac34c;
    *(undefined4 *)(puVar34 + 0x78) = 0x3f800000;
    *(undefined4 *)(puVar34 + 0x40) = 0;
    fVar37 = (fVar37 - fVar41) * DAT_1808ac1b0 + fVar39;
    *(float *)(puVar34 + 0x48) = fVar37;
    puVar28 = (undefined4 *)(puVar34 + 0x40);
    if (0.0 <= fVar37) {
      puVar28 = (undefined4 *)(puVar34 + 0x48);
    }
    puVar21 = (undefined4 *)(puVar34 + 0x78);
    if (fVar37 <= DAT_1808ac34c) {
      puVar21 = puVar28;
    }
    *(undefined4 *)(param_6 + 0x3fc) = *puVar21;
    if ((cVar7 == '\0') || (fVar38 <= fVar39)) {
      param_6[0xf] = '\0';
      goto LAB_1803a6fee;
    }
    param_6[0xf] = '\x01';
    *(undefined8 *)(puVar34 + -8) = 0x1803a6fe7;
    FUN_180029840(param_6 + 0x200,&DAT_18058b724,4);
LAB_1803a6ff7:
    if ((uVar35 == 0) || (lVar15 == 0)) goto LAB_1803a714f;
    if (DAT_181108a7c == 0) {
LAB_1803a7024:
      if (DAT_181108ad0 != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x1803a7037;
        cVar5 = FUN_180011220((ulonglong)DAT_181108ad0 + lVar15);
        if (cVar5 != '\0') goto LAB_1803a712f;
      }
      if (DAT_1809619a0 != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x1803a705e;
        lVar17 = FUN_18000f3a0();
        if ((lVar17 != 0) && (DAT_181108adc != 0)) {
          *(undefined8 *)(puVar34 + -8) = 0x1803a707d;
          uVar32 = FUN_180011200();
          if ((uVar32 & 0xfffffff7) == 0) {
            if (DAT_180ca09f8 == 0) {
LAB_1803a70d0:
              uVar16 = 0;
              fVar39 = 0.0;
              fVar37 = 0.0;
            }
            else {
              *(undefined8 *)(puVar34 + -8) = 0x1803a709b;
              lVar17 = FUN_18000f3a0();
              if ((lVar17 == 0) || (DAT_180ca0950 == 0)) goto LAB_1803a70d0;
              *(undefined8 *)(puVar34 + -8) = 0x1803a70b8;
              puVar20 = (undefined8 *)
                        FUN_1800111b0(puVar34 + 0x50,lVar17 + (ulonglong)DAT_180ca0950);
              uVar16 = *puVar20;
              fVar37 = *(float *)(puVar20 + 1);
              fVar39 = (float)((ulonglong)uVar16 >> 0x20);
              *(undefined8 *)(puVar34 + 0x50) = uVar16;
            }
            lVar17 = *(longlong *)(puVar34 + 0x70);
            fVar41 = *(float *)(lVar17 + 0x18) - (float)uVar16;
            fVar39 = *(float *)(lVar17 + 0x1c) - fVar39;
            fVar37 = *(float *)(lVar17 + 0x20) - fVar37;
            fVar37 = fVar39 * fVar39 + fVar41 * fVar41 + fVar37 * fVar37;
            if (fVar37 < 0.0) {
              *(undefined8 *)(puVar34 + -8) = 0x1803a7126;
              fVar37 = (float)FUN_18051af10();
            }
            else {
              fVar37 = SQRT(fVar37);
            }
            if (DAT_1808acbc8 < fVar37) goto LAB_1803a712f;
          }
        }
      }
      goto LAB_1803a714f;
    }
    *(undefined8 *)(puVar34 + -8) = 0x1803a701c;
    cVar5 = FUN_180011220(lVar17 + (ulonglong)DAT_181108a7c);
    if (cVar5 == '\0') goto LAB_1803a7024;
LAB_1803a712f:
    param_6[0x10] = '\x01';
    *(undefined8 *)(puVar34 + -8) = 0x1803a714d;
    FUN_180029840(param_6 + 0x220,&DAT_18058b73c,4);
  }
  if (cVar7 == '\0') {
LAB_1803a726b:
    param_6[0x11] = '\0';
    if (cVar7 != '\0') goto LAB_1803a7275;
  }
  else {
    if (DAT_181108a94 == 0) {
LAB_1803a7178:
      if ((DAT_181108a98 != 0) && (uVar32 = (ulonglong)DAT_181108a9c, DAT_181108a9c != 0)) {
        *(undefined8 *)(puVar34 + -8) = 0x1803a719d;
        lVar17 = FUN_18000f3a0();
        if (lVar17 != 0) {
          *(undefined8 *)(puVar34 + -8) = 0x1803a71af;
          uVar13 = FUN_180011200(lVar17 + uVar32);
          *(undefined8 *)(puVar34 + -8) = 0x1803a71bb;
          FUN_1803a0940(puVar34 + 0x50,uVar13);
          if (*(longlong *)(puVar34 + 0x50) != 0) {
            *(undefined8 *)(puVar34 + -8) = 0x1803a71d7;
            lVar17 = FUN_18000f3a0();
            if (lVar17 == 0) {
              pcVar33 = (char *)0x0;
            }
            else {
              *(undefined8 *)(puVar34 + -8) = 0x1803a71ee;
              lVar17 = FUN_18000f3a0();
              if (lVar17 == 0) {
                pcVar33 = (char *)0x0;
              }
              else {
                *(undefined8 *)(puVar34 + -8) = 0x1803a7205;
                lVar17 = FUN_18000f3a0();
                if (lVar17 == 0) {
                  pcVar33 = (char *)0x0;
                }
                else {
                  *(undefined8 *)(puVar34 + -8) = 0x1803a721c;
                  pcVar22 = (char *)FUN_18000f3a0();
                  pcVar33 = (char *)0x0;
                  if (pcVar22 + -0x10000 < (char *)0x7ffffffeffff) {
                    pcVar33 = pcVar22;
                  }
                }
              }
            }
            if (pcVar33 != (char *)0x0) {
              *(undefined8 *)(puVar34 + -8) = 0x1803a7247;
              iVar11 = strcmp(pcVar33,"C_Hostage");
              if (iVar11 == 0) goto LAB_1803a724b;
            }
          }
        }
      }
      goto LAB_1803a726b;
    }
    *(undefined8 *)(puVar34 + -8) = 0x1803a7170;
    cVar5 = FUN_180011220();
    if (cVar5 == '\0') goto LAB_1803a7178;
LAB_1803a724b:
    param_6[0x11] = '\x01';
    *(undefined8 *)(puVar34 + -8) = 0x1803a7269;
    FUN_180029840(param_6 + 0x240,&DAT_18058b750,3);
LAB_1803a7275:
    plVar24 = plStack_108;
    plVar36 = local_110;
    if (local_110 != plStack_108) {
      do {
        if (((*plVar36 != 0) && (DAT_1809619a4 != 0)) && (DAT_180961998 != 0)) {
          *(undefined8 *)(puVar34 + -8) = 0x1803a72b5;
          sVar8 = FUN_180011440();
          if (sVar8 == 0x31) {
            param_6[0x12] = '\x01';
            *(undefined8 *)(puVar34 + -8) = 0x1803a7338;
            FUN_180029840(param_6 + 0x260,&DAT_18058b754,2);
            goto LAB_1803a72d7;
          }
        }
        plVar36 = plVar36 + 1;
      } while (plVar36 != plVar24);
      cVar7 = puVar34[0x20];
    }
  }
  param_6[0x12] = '\0';
  if (cVar7 == '\0') {
LAB_1803a733a:
    param_6[0x13] = '\0';
    cVar5 = puVar34[0x20];
    if (cVar5 != '\0') goto LAB_1803a734a;
LAB_1803a7392:
    param_6[0x14] = '\0';
  }
  else {
LAB_1803a72d7:
    if (DAT_181108a7c == 0) goto LAB_1803a733a;
    *(undefined8 *)(puVar34 + -8) = 0x1803a72ed;
    cVar5 = FUN_180011220();
    if (cVar5 == '\0') goto LAB_1803a733a;
    param_6[0x13] = '\x01';
    *(undefined8 *)(puVar34 + -8) = 0x1803a730f;
    FUN_180029840(param_6 + 0x280,"Defuse",6);
    cVar5 = puVar34[0x20];
LAB_1803a734a:
    if (lVar15 == 0) goto LAB_1803a7392;
    *(undefined8 *)(puVar34 + -8) = 0x1803a7357;
    cVar7 = FUN_1803a34d0();
    if ((cVar7 == '\0') || (DAT_181108ae0 == 0)) goto LAB_1803a7392;
    *(undefined8 *)(puVar34 + -8) = 0x1803a736e;
    cVar7 = FUN_180011220();
    if (cVar7 == '\0') goto LAB_1803a7392;
    param_6[0x14] = '\x01';
    *(undefined8 *)(puVar34 + -8) = 0x1803a7390;
    FUN_180029840(param_6 + 0x2a0,&DAT_18058b774,3);
  }
  ppppppcVar27 = local_118;
  if (param_5 != '\0') {
    if (*(char *)((longlong)local_118 + 0x264) != '\0') {
      if (local_120 != 0) {
        uVar32 = 1;
        do {
          iVar11 = (int)uVar32;
          if (*(longlong *)(&DAT_181108b40 + uVar32 * 8) == local_120) goto LAB_1803a73e1;
          uVar32 = (ulonglong)(iVar11 + 1U);
        } while ((int)(iVar11 + 1U) < 0x41);
      }
      iVar11 = 0;
LAB_1803a73e1:
      if ((iVar11 < (int)(DAT_181112370 - DAT_181112368 >> 4) * -0x194be3ab) &&
         (lVar17 = (longlong)iVar11 * 0xfd0 + DAT_181112368, lVar17 != 0)) {
        if (DAT_180cd1304 == '\0') {
          *(undefined8 *)(puVar34 + -8) = 0x1803a7433;
          FUN_1803a0b60(puVar34 + 0x50);
          uVar32 = *(ulonglong *)(puVar34 + 0x50);
        }
        else {
          uVar32 = DAT_181108a00;
        }
        if ((uVar32 == 0) || (DAT_181108acc == 0)) {
          iVar11 = 0;
        }
        else {
          *(undefined8 *)(puVar34 + -8) = 0x1803a744f;
          iVar11 = FUN_180011200(DAT_181108acc + uVar32);
        }
        iVar11 = *(int *)(lVar17 + 0xfcc) - iVar11;
        iVar14 = -iVar11;
        if (iVar14 < 0) {
          iVar14 = iVar11;
        }
        if (1 < iVar14) goto LAB_1803a746f;
        iVar11 = *(int *)(lVar17 + 0xfc8);
      }
      else {
LAB_1803a746f:
        iVar11 = 0;
      }
      *(undefined8 *)(puVar34 + -8) = 0x1803a747c;
      uVar16 = FUN_18003a390(&local_f8,iVar11);
      *(undefined8 *)(puVar34 + -8) = 0x1803a7492;
      puVar20 = (undefined8 *)FUN_1800134a0(uVar16,&DAT_1806de738,1);
      local_d0 = (char ******)*puVar20;
      uStack_c8 = puVar20[1];
      local_c0 = *(undefined1 (*) [16])(puVar20 + 2);
      puVar20[2] = 0;
      puVar20[3] = 0xf;
      *(undefined1 *)puVar20 = 0;
      ppppppcVar27 = (char ******)&local_d0;
      if (0xf < (ulonglong)local_c0._8_8_) {
        ppppppcVar27 = local_d0;
      }
      param_6[4] = 0 < iVar11;
      if ((0 < iVar11) && (ppppppcVar27 != (char ******)0x0)) {
        *(undefined8 *)(puVar34 + -8) = 0x1803a74e9;
        sVar19 = strlen((char *)ppppppcVar27);
        *(undefined8 *)(puVar34 + -8) = 0x1803a74fb;
        FUN_180029840(param_6 + 0xa0,ppppppcVar27,sVar19);
      }
      if (0xf < (ulonglong)local_c0._8_8_) {
        uVar32 = local_c0._8_8_ + 1;
        ppppppcVar29 = local_d0;
        if (0xfff < uVar32) {
          ppppppcVar29 = (char ******)local_d0[-1];
          if ((char *)0x1f < (char *)((longlong)local_d0 + (-8 - (longlong)ppppppcVar29))) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar34 = puVar34 + 8;
            goto LAB_1803a7573;
          }
          uVar32 = local_c0._8_8_ + 0x28;
        }
        *(undefined8 *)(puVar34 + -8) = 0x1803a7532;
        thunk_FUN_1803d64e0(ppppppcVar29,uVar32);
      }
      *(undefined8 *)(puVar34 + -8) = 0x1803a753c;
      FUN_18000f890(&local_f8);
    }
    ppppppcVar27 = local_118;
    plVar24 = local_128;
    if (*(char *)((longlong)local_118 + 0x10a4) != '\0') {
      if (uVar35 != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x1803a756a;
        FUN_1803a50e0(local_120,local_128,puVar34 + 0x60,param_6 + 0x4b8);
      }
      goto LAB_1803a7577;
    }
  }
LAB_1803a7573:
  plVar24 = local_128;
LAB_1803a7577:
  if (*(char *)((longlong)ppppppcVar27 + 0x100c) != '\0') {
    *(undefined8 *)(puVar34 + -8) = 0x1803a7598;
    FUN_1803a42f0(*(longlong *)(puVar34 + 0x70) + 0x38,plVar24,param_6 + 0x4a0);
  }
  if (((*(char *)((longlong)ppppppcVar27 + 0xdac) != '\0') && (cVar5 != '\0')) && (lVar15 != 0)) {
    if (DAT_180ca0a0c == 0) {
      uVar16 = 0;
    }
    else {
      *(undefined8 *)(puVar34 + -8) = 0x1803a75cd;
      uVar16 = FUN_18000f3a0((ulonglong)DAT_180ca0a0c + *(longlong *)(puVar34 + 0x38));
    }
    *(undefined8 *)(puVar34 + 0x50) = uVar16;
    if (DAT_1811162f4 == 0) {
      *(undefined8 *)(puVar34 + -8) = 0x1803a75f2;
      DAT_1811162f4 = FUN_18038eaf0("C_BaseCSGrenade","m_fThrowTime");
    }
    *(longlong **)(puVar34 + 0x38) = plStack_108;
    if (local_110 != plStack_108) {
      plVar24 = plStack_108;
      plVar36 = local_110;
      do {
        uVar25 = DAT_1809619a4;
        uVar31 = DAT_180961998;
        lVar17 = *plVar36;
        pcStack_f0 = (char *)0x0;
        local_e8 = 0x13;
        cStack_e4 = '\0';
        uStack_e3 = 0;
        uStack_e2 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        local_d8 = 0;
        uStack_d4 = 0;
        uStack_d3 = 0;
        if (((lVar17 == 0) || (uVar35 = (ulonglong)DAT_1809619a4, DAT_1809619a4 == 0)) ||
           (uVar32 = (ulonglong)DAT_180961998, DAT_180961998 == 0)) {
          local_f8 = 0;
          uStack_f6 = 0;
        }
        else {
          uVar30 = (ulonglong)DAT_1809619a8;
          *(undefined8 *)(puVar34 + -8) = 0x1803a767f;
          local_f8 = FUN_180011440(lVar17 + uVar32 + uVar30 + uVar35);
          uStack_f6 = 0;
          if ((local_f8 != 0) && (DAT_1809619a0 != 0)) {
            *(undefined8 *)(puVar34 + -8) = 0x1803a76ad;
            lVar15 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + lVar17);
            if (lVar15 != 0) {
              if ((uVar25 == 0) || (uVar31 == 0)) {
LAB_1803a76e0:
                *(longlong *)(puVar34 + 0x70) = lVar17;
                *(undefined8 *)(puVar34 + -8) = 0x1803a76ef;
                uVar16 = FUN_1803a0710(puVar34 + 0x70);
                *(undefined8 *)(puVar34 + -8) = 0x1803a76f7;
                pcStack_f0 = (char *)FUN_18039e5c0(uVar16);
              }
              else {
                *(undefined8 *)(puVar34 + -8) = 0x1803a76d1;
                sVar8 = FUN_180011440(lVar17 + uVar32 + uVar30 + uVar35);
                if (sVar8 != 0x40) goto LAB_1803a76e0;
                pcStack_f0 = "revolver";
              }
              if (DAT_1809619a0 == 0) {
LAB_1803a772f:
                local_e8 = 0xffffffff;
              }
              else {
                *(undefined8 *)(puVar34 + -8) = 0x1803a7716;
                lVar23 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + lVar17)
                ;
                if ((lVar23 == 0) || (DAT_181108adc == 0)) goto LAB_1803a772f;
                *(undefined8 *)(puVar34 + -8) = 0x1803a772d;
                local_e8 = FUN_180011200((ulonglong)DAT_181108adc + lVar23);
              }
              *(undefined8 *)(puVar34 + -8) = 0x1803a773f;
              cStack_e4 = FUN_1803a34d0(lVar17);
              uStack_e3 = lVar17 == *(longlong *)(puVar34 + 0x28);
              if (cStack_e4 != '\0') {
                if (DAT_181108ae0 == 0) {
LAB_1803a7766:
                  if (DAT_1811162f4 != 0) {
                    *(undefined8 *)(puVar34 + -8) = 0x1803a7779;
                    fVar37 = (float)FUN_18000f3d0(lVar17 + (ulonglong)DAT_1811162f4);
                    if (fVar37 != 0.0) goto LAB_1803a7781;
                  }
                }
                else {
                  *(undefined8 *)(puVar34 + -8) = 0x1803a7762;
                  cVar5 = FUN_180011220(lVar17 + (ulonglong)DAT_181108ae0);
                  if (cVar5 == '\0') goto LAB_1803a7766;
LAB_1803a7781:
                  uStack_e2 = 1;
                }
                lVar23 = *(longlong *)(puVar34 + 0x50);
                if (((lVar23 != 0) && (uVar35 = (ulonglong)DAT_181108b00, DAT_181108b00 != 0)) &&
                   (DAT_181108b04 != 0)) {
                  *(undefined8 *)(puVar34 + -8) = 0x1803a77ac;
                  uVar31 = FUN_180011200((ulonglong)DAT_181108b04 + lVar15);
                  if (uVar31 < 0x20) {
                    *(undefined8 *)(puVar34 + -8) = 0x1803a77bf;
                    uVar10 = FUN_180011440((ulonglong)(uVar31 * 2) + lVar23 + uVar35);
                    uStack_e0 = (uint)uVar10;
                  }
                }
              }
              if (DAT_181108ad4 != 0) {
                *(undefined8 *)(puVar34 + -8) = 0x1803a77d8;
                uStack_dc = FUN_180011200(lVar17 + (ulonglong)DAT_181108ad4);
              }
              if (DAT_181108ad8 != 0) {
                *(undefined8 *)(puVar34 + -8) = 0x1803a77ee;
                local_d8 = FUN_180011200((ulonglong)DAT_181108ad8 + lVar15);
              }
              if (DAT_181108ae4 != 0) {
                *(undefined8 *)(puVar34 + -8) = 0x1803a7804;
                iVar11 = FUN_180011200();
                uStack_d4 = iVar11 == 0xb;
              }
              if (local_f8 == 0x1f) {
                puVar34[0x21] = 0;
                *(undefined8 *)(puVar34 + -8) = 0x1803a7837;
                FUN_1803a3560(lVar17,puVar34 + 0x21);
                uStack_d3 = puVar34[0x21];
              }
              else if (DAT_181108ad0 != 0) {
                *(undefined8 *)(puVar34 + -8) = 0x1803a7854;
                cVar5 = FUN_180011220();
                uStack_d3 = cVar5 != '\0';
              }
              puVar20 = *(undefined8 **)(param_6 + 0x490);
              if (puVar20 == *(undefined8 **)(param_6 + 0x498)) {
                *(undefined8 *)(puVar34 + -8) = 0x1803a78fd;
                FUN_1803aa680(param_6 + 0x488,puVar20,&local_f8);
              }
              else {
                *puVar20 = CONCAT44(uStack_f4,CONCAT22(uStack_f6,local_f8));
                puVar20[1] = pcStack_f0;
                auVar2[4] = cStack_e4;
                auVar2._0_4_ = local_e8;
                auVar2[5] = uStack_e3;
                auVar2[6] = uStack_e2;
                auVar2[7] = uStack_e1;
                auVar2._8_4_ = uStack_e0;
                auVar2._12_4_ = uStack_dc;
                *(undefined1 (*) [16])(puVar20 + 2) = auVar2;
                puVar20[4] = CONCAT26(uStack_d2,CONCAT15(uStack_d3,CONCAT14(uStack_d4,local_d8)));
                *(longlong *)(param_6 + 0x490) = *(longlong *)(param_6 + 0x490) + 0x28;
              }
            }
          }
          plVar24 = *(longlong **)(puVar34 + 0x38);
        }
        plVar36 = plVar36 + 1;
      } while (plVar36 != plVar24);
    }
  }
  *(undefined8 *)(puVar34 + -8) = 0x1803a78ad;
  FUN_1800132b0(&local_110);
  *(undefined8 *)(puVar34 + -8) = 0x1803a78b9;
  return;
}



/* ===== 1803a7910 FUN_1803a7910 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803a7910(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float *pfVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  float local_88;
  undefined4 local_80;
  float local_78;
  float local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  longlong local_50;
  
  if (DAT_1809209f0 == '\0') {
    return;
  }
  if (DAT_180ccf984 == '\0') {
    return;
  }
  local_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1803a42f0(param_2 + 0x38,param_3,&local_60);
  puVar6 = puStack_58;
  auVar3 = _DAT_1808ad9f0;
  fVar2 = DAT_1808ac34c;
  puVar8 = auStack_a8;
  puVar9 = auStack_a8;
  if (local_60 != puStack_58) {
    local_74 = 1.0;
    local_78 = 0.0;
    fVar12 = *(float *)(param_2 + 0x14);
    pfVar5 = &local_78;
    if (0.0 <= fVar12) {
      pfVar5 = (float *)(param_2 + 0x14);
    }
    pfVar4 = &local_74;
    if (fVar12 <= DAT_1808ac34c) {
      pfVar4 = pfVar5;
    }
    fVar12 = DAT_180920a00 * *pfVar4;
    if (0.0 <= fVar12) {
      fVar13 = DAT_1808ac34c;
      if (fVar12 <= DAT_1808ac34c) {
        fVar13 = fVar12;
      }
      fVar12 = fVar13 * DAT_1808acb94 + DAT_1808ac1f4;
    }
    else {
      fVar12 = DAT_1808ac1f4;
    }
    if (0.0 <= DAT_1809209fc) {
      fVar13 = DAT_1808ac34c;
      if (DAT_1809209fc <= DAT_1808ac34c) {
        fVar13 = DAT_1809209fc;
      }
      fVar13 = fVar13 * DAT_1808acb94 + DAT_1808ac1f4;
    }
    else {
      fVar13 = DAT_1808ac1f4;
    }
    if (0.0 <= DAT_1809209f8) {
      fVar14 = DAT_1808ac34c;
      if (DAT_1809209f8 <= DAT_1808ac34c) {
        fVar14 = DAT_1809209f8;
      }
      fVar14 = fVar14 * DAT_1808acb94 + DAT_1808ac1f4;
    }
    else {
      fVar14 = DAT_1808ac1f4;
    }
    fVar11 = DAT_1808ac1f4;
    if (0.0 <= DAT_1809209f4) {
      fVar11 = DAT_1808ac34c;
      if (DAT_1809209f4 <= DAT_1808ac34c) {
        fVar11 = DAT_1809209f4;
      }
      fVar11 = fVar11 * DAT_1808acb94 + DAT_1808ac1f4;
    }
    if ((local_60 != puStack_58) &&
       (uVar10 = (int)fVar12 << 0x18 | (int)fVar13 << 0x10 | (int)fVar14 << 8 | (int)fVar11,
       puVar7 = local_60, (uVar10 & 0xff000000) != 0)) {
      do {
        fVar12 = auVar3._0_4_;
        fVar13 = auVar3._4_4_;
        local_70 = CONCAT44((float)((ulonglong)*puVar7 >> 0x20) + fVar13,(float)*puVar7 + fVar12);
        local_68 = CONCAT44((float)((ulonglong)puVar7[1] >> 0x20) + fVar13,(float)puVar7[1] + fVar12
                           );
        local_80 = 0;
        local_88 = fVar2;
        FUN_1803fc600(param_1,&local_70,2,uVar10);
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar6);
    }
  }
  if (local_60 == (undefined8 *)0x0) {
    return;
  }
  puVar6 = local_60;
  if (0xfff < (local_50 - (longlong)local_60 & 0xfffffffffffffff0U)) {
    puVar6 = (undefined8 *)local_60[-1];
    puVar7 = (undefined8 *)((longlong)local_60 + (-8 - (longlong)puVar6));
    if (puVar7 <= &DAT_0000001f) goto LAB_1803a7b23;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar8 = auStack_a0;
    puVar6 = puVar7;
  }
  puVar9 = puVar8;
LAB_1803a7b23:
  *(undefined8 *)(puVar9 + -8) = 0x1803a7b28;
  thunk_FUN_1803d64e0(puVar6);
  return;
}



/* ===== 1803a7b40 FUN_1803a7b40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803a7b40(longlong param_1,longlong param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104 [8];
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  char local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  
  pfVar4 = DAT_181108a48;
  fVar3 = DAT_1811079b4;
  fVar2 = DAT_1808ac34c;
  local_104[2] = 1.0;
  local_104[0] = 0.0;
  DAT_180962444 = DAT_180962444 + *(float *)(DAT_180ca0a50 + 0x40);
  local_104[1] = DAT_180962444 / DAT_1808ac1b0;
  pfVar8 = local_104;
  if (0.0 <= local_104[1]) {
    pfVar8 = local_104 + 1;
  }
  pfVar6 = local_104 + 2;
  if (local_104[1] <= DAT_1808ac34c) {
    pfVar6 = pfVar8;
  }
  fVar15 = DAT_1808ac34c - *pfVar6;
  _DAT_180962438 =
       (DAT_1808ac34c - fVar15 * fVar15 * fVar15) * (DAT_18096243c - DAT_180962440) + DAT_180962440;
  if ((DAT_1808ac34c <= *pfVar6) ||
     ((float)((uint)(_DAT_180962438 - DAT_18096243c) & _DAT_1808ade90) <= DAT_1808abf80)) {
    bVar1 = DAT_18096243c != DAT_1808ac34c;
    _DAT_180962438 = DAT_18096243c;
    DAT_180962440 = DAT_18096243c;
    DAT_18096243c = 0.5;
    if (bVar1) {
      DAT_18096243c = 1.0;
    }
    DAT_180962444 = 0.0;
  }
  fVar15 = _DAT_180962438;
  if (DAT_181108a40 != DAT_181108a48) {
    fVar20 = *(float *)(param_2 + 0x11c0);
    pfVar8 = local_104 + 3;
    if (0 < (int)fVar20) {
      pfVar8 = (float *)(param_2 + 0x11c0);
    }
    local_10c = 1.4013e-43;
    fVar22 = *(float *)(param_2 + 0x11bc);
    pfVar6 = &local_10c;
    if ((int)fVar20 < 0x65) {
      pfVar6 = pfVar8;
    }
    local_104[3] = 1.4013e-45;
    local_108 = 2.8026e-44;
    local_118 = 7.00649e-45;
    pfVar8 = &local_118;
    if (4 < (int)fVar22) {
      pfVar8 = (float *)(param_2 + 0x11bc);
    }
    pfVar7 = &local_108;
    if ((int)fVar22 < 0x15) {
      pfVar7 = pfVar8;
    }
    if (DAT_18091a1b4 < 1) {
      fVar20 = DAT_1808ac34c;
    }
    else {
      iVar9 = 100;
      if ((99 < DAT_18091a1b4) && (iVar9 = DAT_18091a1b4, 200 < DAT_18091a1b4)) {
        iVar9 = 200;
      }
      fVar20 = (float)iVar9 / DAT_1808acb08;
    }
    local_e0 = *(float *)(param_2 + 0x11ac);
    local_e4 = *(float *)(param_2 + 0x11b0);
    local_dc = *(float *)(param_2 + 0x11b4);
    fVar22 = *(float *)(param_2 + 0x11b8);
    local_110 = fVar22;
    if (0.0 <= local_e0) {
      fVar17 = DAT_1808ac34c;
      if (local_e0 <= DAT_1808ac34c) {
        fVar17 = local_e0;
      }
      fVar17 = fVar17 * DAT_1808acb94 + DAT_1808ac1f4;
    }
    else {
      fVar17 = DAT_1808ac1f4;
    }
    if (0.0 <= local_e4) {
      fVar18 = DAT_1808ac34c;
      if (local_e4 <= DAT_1808ac34c) {
        fVar18 = local_e4;
      }
      fVar18 = fVar18 * DAT_1808acb94 + DAT_1808ac1f4;
    }
    else {
      fVar18 = DAT_1808ac1f4;
    }
    if (0.0 <= local_dc) {
      fVar16 = DAT_1808ac34c;
      if (local_dc <= DAT_1808ac34c) {
        fVar16 = local_dc;
      }
      fVar16 = fVar16 * DAT_1808acb94 + DAT_1808ac1f4;
    }
    else {
      fVar16 = DAT_1808ac1f4;
    }
    local_d8 = 0xffffffff;
    local_d4 = 0;
    local_d0 = '\0';
    if (DAT_181108a40 != DAT_181108a48) {
      fVar19 = DAT_1811079b0 * DAT_1808ac1f4;
      local_114 = DAT_1811079b0;
      local_118 = fVar19;
      local_104[7] = (float)(int)((float)(int)*pfVar7 * fVar20);
      local_108 = DAT_1811079b4 * DAT_1808ac1f4;
      local_10c = DAT_1808ac34c - (float)(int)*pfVar6 / DAT_1808acb08;
      pfVar8 = DAT_181108a40;
      do {
        local_104[6] = 1.0;
        local_104[4] = 0.0;
        local_104[5] = fVar15 * pfVar8[4];
        pfVar6 = local_104 + 4;
        if (0.0 <= local_104[5]) {
          pfVar6 = local_104 + 5;
        }
        pfVar7 = local_104 + 6;
        if (local_104[5] <= fVar2) {
          pfVar7 = pfVar6;
        }
        fVar20 = *pfVar7;
        if (0.0 < fVar22 * fVar20) {
          fVar12 = *pfVar8;
          fVar11 = pfVar8[1];
          fVar24 = pfVar8[2] - (pfVar8[3] + pfVar8[3]);
          fVar21 = fVar11 * param_3[0xd] + fVar12 * param_3[0xc] + fVar24 * param_3[0xe] +
                   param_3[0xf];
          if (DAT_1808abfbc <= fVar21) {
            fVar23 = fVar2 / fVar21;
          }
          else {
            fVar23 = DAT_1808accbc;
          }
          fVar10 = (float)FUN_180519080((fVar11 * param_3[1] + fVar12 * *param_3 +
                                         fVar24 * param_3[2] + param_3[3]) * fVar19 * fVar23 +
                                        fVar19);
          fVar5 = local_108;
          auVar13._0_8_ =
               FUN_180519080(local_108 -
                             (fVar11 * param_3[5] + fVar12 * param_3[4] + fVar24 * param_3[6] +
                             param_3[7]) * local_108 * fVar23);
          fVar12 = local_114;
          fVar19 = local_118;
          auVar13._8_8_ = extraout_XMM0_Qb;
          fVar11 = (float)auVar13._0_8_;
          if (((((fVar21 < DAT_1808abfbc) || (fVar10 <= 0.0)) || (local_114 <= fVar10)) ||
              ((fVar11 <= 0.0 || (fVar3 <= fVar11)))) &&
             (auVar14._4_12_ = auVar13._4_12_, auVar14._0_4_ = fVar11 - fVar5,
             fVar11 = (float)FUN_180516b00(auVar14._0_8_,fVar10 - local_118), fVar11 != 0.0)) {
            fVar21 = fVar3;
            if (fVar12 <= fVar3) {
              fVar21 = fVar12;
            }
            fVar24 = fVar21 * DAT_1808ac1f4 - (float)(int)(local_10c * fVar21 * DAT_1808ac1f4);
            fVar12 = (float)FUN_180517200();
            fVar21 = (float)FUN_180517790();
            FUN_18000b690(param_1,&local_d8,fVar12 * fVar24 + fVar19,fVar21 * fVar24 + fVar5,fVar11,
                          local_104[7],(int)fVar16 << 0x10 | (int)fVar18 << 8 | (int)fVar17,
                          fVar22 * fVar20);
          }
          fVar19 = local_118;
          fVar22 = local_110;
        }
        pfVar8 = pfVar8 + 5;
      } while (pfVar8 != pfVar4);
    }
    if ((param_1 != 0) && (local_d0 != '\0')) {
      local_bc = fVar22 * DAT_1808ac294;
      local_c8 = local_e0;
      local_c4 = local_e4;
      local_c0 = local_dc;
      FUN_18000ced0(param_1,&local_d8,&local_c8);
    }
  }
  return;
}



/* ===== 1803a81c0 FUN_1803a81c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_1803a81c0(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  size_t sVar12;
  int *piVar13;
  longlong lVar14;
  ulonglong uVar15;
  char *pcVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 auStack_9f8 [8];
  undefined1 auStack_9f0 [24];
  code *local_9d8;
  code *local_9d0;
  undefined4 *local_9c8 [4];
  undefined8 local_9a8;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined1 local_998;
  undefined4 uStack_997;
  undefined4 uStack_993;
  undefined4 uStack_98f;
  undefined3 uStack_98b;
  undefined1 local_988 [16];
  longlong alStack_978 [14];
  undefined1 local_908 [32];
  undefined1 local_8e8 [640];
  undefined1 local_668 [128];
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  ulonglong uStack_5d0;
  ulonglong local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined4 local_578;
  undefined8 local_574;
  undefined5 uStack_56c;
  undefined3 uStack_567;
  undefined5 local_564;
  undefined3 uStack_55f;
  undefined5 uStack_55c;
  undefined3 uStack_557;
  undefined4 local_554;
  ulonglong local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined1 local_528;
  undefined4 local_524;
  longlong local_520;
  undefined8 local_518;
  longlong lStack_510;
  longlong local_508;
  undefined8 uStack_500;
  longlong local_4f8;
  longlong local_4f0;
  longlong local_4e8;
  longlong lStack_4e0;
  undefined1 local_4d8;
  undefined8 local_4d4;
  undefined4 local_4cc;
  undefined1 local_4c8 [1152];
  int local_48 [4];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_9f8;
  local_9a8 = 0;
  uStack_9a0 = 0;
  uStack_99c = 0;
  local_998 = 0;
  uStack_997 = 0;
  uStack_993 = 0;
  uStack_98f = 0;
  uStack_98b = 0;
  local_9c8[0] = param_1;
  FUN_1800d2370(local_988,0x1d);
  local_5e8 = 0;
  uStack_5e0 = 0;
  local_5d8 = 0;
  uStack_5d0 = 0;
  local_5c8 = 0;
  uStack_5c0 = 0;
  local_5b8 = 0;
  uStack_5b0 = 0;
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_598 = 0;
  uStack_590 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_578 = 0;
  local_574 = 0;
  uStack_56c = 0;
  uStack_567 = 0;
  local_564 = 0;
  uStack_55f = 0;
  uStack_55c = 0;
  uStack_557 = 0;
  local_554 = 0;
  uStack_548 = 0;
  local_540 = 0;
  local_538 = 0xf;
  local_550 = 0;
  local_530 = 0;
  local_528 = 0;
  local_524 = 0;
  local_520 = 0;
  local_518 = 0;
  lStack_510 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_4f8 = 0;
  local_4f0 = 0;
  local_4e8 = 0;
  lStack_4e0 = 0;
  local_4d8 = 0;
  local_4d4 = 0;
  local_4cc = 0;
  FUN_180540170(local_4c8,0,0x480);
  FUN_1803a9390(local_4c8);
  puVar18 = auStack_9f8;
  puVar17 = auStack_9f8;
  uVar15 = 0;
  do {
    *(undefined1 *)((longlong)local_9c8 + uVar15 + 0x20) = 1;
    pcVar16 = (char *)(&DAT_1806b3190)[uVar15 * 0x23];
    if ((pcVar16 != (char *)0x0) && (alStack_978[uVar15 * 4] == 0)) {
      sVar12 = strlen(pcVar16);
      FUN_180029840(local_988 + uVar15 * 0x20,pcVar16,sVar12);
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 < 0x1d);
  FUN_180029840(local_908,&DAT_18089fb74,3);
  local_9c8[0] = (undefined4 *)((ulonglong)local_9c8[0] & 0xffffffff00000000);
  iVar11 = GetLocaleInfoEx((LPCWSTR)0x0,0x2000000d,(LPWSTR)local_9c8,2);
  if ((iVar11 < 1) || ((int)local_9c8[0] != 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pcVar16 = "50 m";
  if (bVar2) {
    pcVar16 = "120 ft";
  }
  sVar12 = strlen(pcVar16);
  FUN_180029840(local_668,pcVar16,sVar12);
  FUN_180029840(local_8e8,"neverlose",9);
  local_48[0] = 0;
  local_48[1] = 0x15;
  local_48[2] = 0x16;
  piVar13 = local_48;
  do {
    iVar11 = *piVar13;
    *(undefined4 *)(local_668 + (longlong)iVar11 * 4 + 0x80) = 0x42480000;
    *(undefined1 *)((longlong)&local_574 + (longlong)iVar11) = 1;
    piVar13 = piVar13 + 1;
  } while (piVar13 != local_48 + 3);
  FUN_180029840(&local_550,&DAT_18089fb78,1);
  uStack_5b0 = CONCAT44(0x3f000000,(undefined4)uStack_5b0);
  uStack_5d0 = uStack_5d0 & 0xffffffff;
  local_5c8 = local_5c8 & 0xffffffff;
  *param_1 = (undefined4)local_9a8;
  param_1[1] = local_9a8._4_4_;
  param_1[2] = uStack_9a0;
  param_1[3] = uStack_99c;
  *(uint *)((longlong)param_1 + 0xd) = CONCAT13(local_998,uStack_99c._1_3_);
  *(undefined4 *)((longlong)param_1 + 0x11) = uStack_997;
  *(undefined4 *)((longlong)param_1 + 0x15) = uStack_993;
  *(undefined4 *)((longlong)param_1 + 0x19) = uStack_98f;
  local_9d0 = thunk_FUN_18000f890;
  local_9d8 = FUN_180024af0;
  FUN_1804ed050(param_1 + 8,local_988,0x20,0x1d);
  lVar10 = lStack_4e0;
  lVar9 = local_4e8;
  lVar8 = local_4f0;
  lVar7 = local_4f8;
  uVar6 = uStack_500;
  lVar5 = local_508;
  lVar4 = lStack_510;
  uVar3 = local_518;
  lVar14 = local_520;
  *(undefined8 *)(param_1 + 0xf0) = local_5e8;
  *(undefined8 *)(param_1 + 0xf2) = uStack_5e0;
  *(undefined8 *)(param_1 + 0xf4) = local_5d8;
  *(ulonglong *)(param_1 + 0xf6) = uStack_5d0;
  *(ulonglong *)(param_1 + 0xf8) = local_5c8;
  *(undefined8 *)(param_1 + 0xfa) = uStack_5c0;
  *(undefined8 *)(param_1 + 0xfc) = local_5b8;
  *(undefined8 *)(param_1 + 0xfe) = uStack_5b0;
  *(undefined8 *)(param_1 + 0x100) = local_5a8;
  *(undefined8 *)(param_1 + 0x102) = uStack_5a0;
  *(undefined8 *)(param_1 + 0x104) = local_598;
  *(undefined8 *)(param_1 + 0x106) = uStack_590;
  *(undefined8 *)(param_1 + 0x108) = local_588;
  *(undefined8 *)(param_1 + 0x10a) = uStack_580;
  param_1[0x10c] = local_578;
  *(undefined8 *)(param_1 + 0x10d) = local_574;
  *(ulonglong *)(param_1 + 0x10f) = CONCAT35(uStack_567,uStack_56c);
  *(ulonglong *)((longlong)param_1 + 0x441) = CONCAT53(local_564,uStack_567);
  *(ulonglong *)((longlong)param_1 + 0x449) = CONCAT53(uStack_55c,uStack_55f);
  *(ulonglong *)(param_1 + 0x116) = local_550;
  *(undefined8 *)(param_1 + 0x118) = uStack_548;
  *(undefined8 *)(param_1 + 0x11a) = local_540;
  *(undefined8 *)(param_1 + 0x11c) = local_538;
  local_540 = 0;
  local_538 = 0xf;
  local_550 = local_550 & 0xffffffffffffff00;
  *(undefined8 *)(param_1 + 0x11e) = local_530;
  *(undefined1 *)(param_1 + 0x120) = local_528;
  param_1[0x121] = local_524;
  lStack_510 = 0;
  local_518 = 0;
  local_520 = 0;
  *(longlong *)(param_1 + 0x122) = lVar14;
  *(undefined8 *)(param_1 + 0x124) = uVar3;
  *(longlong *)(param_1 + 0x126) = lVar4;
  local_4f8 = 0;
  uStack_500 = 0;
  local_508 = 0;
  *(longlong *)(param_1 + 0x128) = lVar5;
  *(undefined8 *)(param_1 + 0x12a) = uVar6;
  *(longlong *)(param_1 + 300) = lVar7;
  lStack_4e0 = 0;
  local_4e8 = 0;
  local_4f0 = 0;
  *(longlong *)(param_1 + 0x12e) = lVar8;
  *(longlong *)(param_1 + 0x130) = lVar9;
  *(longlong *)(param_1 + 0x132) = lVar10;
  *(undefined1 *)(param_1 + 0x134) = local_4d8;
  param_1[0x135] = (undefined4)local_4d4;
  param_1[0x136] = local_4d4._4_4_;
  param_1[0x137] = local_4cc;
  local_9d0 = FUN_180058d00;
  local_9d8 = (code *)&LAB_1803a88c0;
  FUN_1804ed050(param_1 + 0x138,local_4c8,0x48,0x10);
  FUN_1804eced0(local_4c8,0x48,0x10,FUN_180058d00);
  lVar4 = local_4e8;
  lVar14 = local_4f0;
  if (local_4f0 == 0) {
LAB_1803a879e:
    if (local_508 != 0) {
      uVar15 = local_4f8 - local_508 & 0xfffffffffffffff0;
      if (uVar15 < 0x1000) {
        lVar14 = local_508;
      }
      else {
        if (0x1f < (local_508 - *(longlong *)(local_508 + -8)) - 8U) goto LAB_1803a8846;
        uVar15 = uVar15 + 0x27;
        lVar14 = *(longlong *)(local_508 + -8);
      }
      thunk_FUN_1803d64e0(lVar14,uVar15);
      local_508 = 0;
      uStack_500 = 0;
      local_4f8 = 0;
    }
    if (local_520 == 0) goto LAB_1803a886a;
    lVar14 = local_520;
    if ((ulonglong)((lStack_510 - local_520 >> 3) * 8) < 0x1000) goto LAB_1803a884d;
    lVar14 = *(longlong *)(local_520 + -8);
    puVar18 = auStack_9f8;
    if (0x1f < (local_520 - lVar14) - 8U) goto LAB_1803a8846;
  }
  else {
    for (; lVar14 != lVar4; lVar14 = lVar14 + 0x30) {
      FUN_1800132b0(lVar14);
    }
    uVar15 = (lStack_4e0 - local_4f0 >> 4) * 0x10;
    if (uVar15 < 0x1000) {
      lVar14 = local_4f0;
LAB_1803a8787:
      thunk_FUN_1803d64e0(lVar14,uVar15);
      local_4f0 = 0;
      local_4e8 = 0;
      lStack_4e0 = 0;
      goto LAB_1803a879e;
    }
    if ((local_4f0 - *(longlong *)(local_4f0 + -8)) - 8U < 0x20) {
      uVar15 = uVar15 + 0x27;
      lVar14 = *(longlong *)(local_4f0 + -8);
      goto LAB_1803a8787;
    }
LAB_1803a8846:
    lVar14 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar17 = auStack_9f0;
LAB_1803a884d:
    puVar18 = puVar17;
  }
  *(undefined8 *)(puVar18 + -8) = 0x1803a8858;
  thunk_FUN_1803d64e0(lVar14);
  local_520 = 0;
  local_518 = 0;
  lStack_510 = 0;
LAB_1803a886a:
  *(undefined8 *)(puVar18 + -8) = 0x1803a8876;
  FUN_18000f890(&local_550);
  *(undefined8 *)(puVar18 + -8) = 0x1803a888f;
  FUN_1804eced0(puVar18 + 0x70,0x20,0x1d,thunk_FUN_18000f890);
  *(undefined8 *)(puVar18 + -8) = 0x1803a88a2;
  return param_1;
}



/* ===== 1803a8920 FUN_1803a8920 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001803a8e93) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00018091b388 : 0x0001803a8e97 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1803a8920(longlong param_1)

{
  float fVar1;
  undefined4 uVar2;
  double dVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  int iVar7;
  undefined8 *puVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  ULONGLONG UVar12;
  char *pcVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  undefined1 auStack_b18 [8];
  undefined1 auStack_b10 [64];
  undefined *local_ad0;
  longlong *local_ac8;
  longlong *plStack_ac0;
  longlong local_ab8;
  longlong local_a98;
  undefined4 local_a90;
  undefined4 uStack_a8c;
  undefined4 uStack_a88;
  undefined4 uStack_a84;
  char local_a80;
  int local_a7c;
  undefined1 local_a78;
  float local_a74;
  undefined1 local_a70;
  undefined4 local_a6c;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 local_a50;
  char local_a48;
  longlong local_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined4 local_a18;
  undefined4 uStack_a14;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  undefined4 local_a08;
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  longlong local_9f8;
  longlong *local_9f0;
  longlong *local_9e8;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined1 local_9b8 [928];
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined4 local_5a8;
  undefined8 local_5a4;
  undefined8 uStack_59c;
  undefined8 local_594;
  undefined8 uStack_58c;
  undefined4 local_584;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined1 local_558;
  undefined4 local_554;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined1 local_508;
  undefined8 local_504;
  undefined4 local_4fc;
  undefined1 local_4f8 [1152];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_b18;
  puVar23 = auStack_b18;
  if (((DAT_180cd0fa7 == '\0') || (puVar23 = auStack_b18, DAT_181107a40 == 0)) ||
     (puVar23 = auStack_b18, param_1 == 0)) goto LAB_1803a89b4;
  FUN_1803a2870();
  FUN_1800aa690();
  if (DAT_181108a40 != DAT_181108a48) {
    DAT_181108a48 = DAT_181108a40;
  }
  if (((DAT_18091a1e0 == '\0') && (DAT_18091bb0c == '\0')) && (DAT_1809209f0 == '\0')) {
    FUN_1803b5790();
    puVar23 = auStack_b18;
    goto LAB_1803a89b4;
  }
  local_ad0 = &DAT_1809f9da0;
  iVar11 = FUN_1804e4d70(&DAT_1809f9da0);
  if (iVar11 != 0) {
LAB_1803a9350:
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f9dec == 0x7fffffff) {
LAB_1803a935b:
    DAT_1809f9dec = DAT_1809f9dec + -1;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((DAT_181108db0 == '\0') || (UVar12 = GetTickCount64(), 0xf9 < UVar12 - DAT_181108db8)) {
    FUN_1804e4e90(&DAT_1809f9da0);
    FUN_1803a4430();
    local_ad0 = &DAT_1809f9da0;
    iVar11 = FUN_1804e4d70(&DAT_1809f9da0);
    if (iVar11 != 0) goto LAB_1803a9350;
    if (DAT_1809f9dec == 0x7fffffff) goto LAB_1803a935b;
    local_a48 = DAT_181108db0;
    local_a40 = DAT_181108db8;
    local_a38 = _DAT_181108dc0;
    uStack_a30 = uRam0000000181108dc8;
    local_a28 = _DAT_181108dd0;
    uStack_a20 = uRam0000000181108dd8;
    local_a18 = _DAT_181108de0;
    uStack_a14 = uRam0000000181108de4;
    uStack_a10 = uRam0000000181108de8;
    uStack_a0c = uRam0000000181108dec;
    local_a08 = _DAT_181108df0;
    uStack_a04 = uRam0000000181108df4;
    uStack_a00 = uRam0000000181108df8;
    uStack_9fc = uRam0000000181108dfc;
    local_9f8 = DAT_181108e00;
    FUN_1803a9780(&local_9f0,&DAT_181108e08);
  }
  else {
    local_a48 = DAT_181108db0;
    local_a40 = DAT_181108db8;
    local_a38 = _DAT_181108dc0;
    uStack_a30 = uRam0000000181108dc8;
    local_a28 = _DAT_181108dd0;
    uStack_a20 = uRam0000000181108dd8;
    local_a18 = _DAT_181108de0;
    uStack_a14 = uRam0000000181108de4;
    uStack_a10 = uRam0000000181108de8;
    uStack_a0c = uRam0000000181108dec;
    local_a08 = _DAT_181108df0;
    uStack_a04 = uRam0000000181108df4;
    uStack_a00 = uRam0000000181108df8;
    uStack_9fc = uRam0000000181108dfc;
    local_9f8 = DAT_181108e00;
    FUN_1803a9780(&local_9f0,&DAT_181108e08);
  }
  FUN_1804e4e90(&DAT_1809f9da0);
  local_ad0 = (undefined *)local_9f8;
  puVar23 = auStack_b18;
  if ((local_a48 != '\0') && (puVar23 = auStack_b18, local_9f8 != 0)) {
    dVar3 = *(double *)(DAT_180ca0a50 + 0x10);
    puVar23 = auStack_b18;
    if (DAT_1808ac458 <= dVar3 - _DAT_1809f9d90) {
      DAT_181108b30 = 0;
      _DAT_1809f9d90 = dVar3;
      if (DAT_1811162f8 == 0) {
        DAT_1811162f8 = FUN_18038eaf0("C_PlantedC4","m_flC4Blow");
      }
      FUN_1803a09f0(&local_ac8);
      puVar21 = auStack_b18;
      puVar22 = auStack_b18;
      for (plVar17 = local_ac8; plVar17 != plStack_ac0; plVar17 = plVar17 + 1) {
        pcVar13 = (char *)FUN_1803a0710(plVar17);
        if ((pcVar13 != (char *)0x0) && (iVar11 = strcmp(pcVar13,"C_PlantedC4"), iVar11 == 0)) {
          DAT_181108b30 = *plVar17;
          if (DAT_1811162f8 == 0) {
            DAT_181108e20 = 0;
          }
          else {
            DAT_181108e20 = FUN_18000f3d0((ulonglong)DAT_1811162f8 + DAT_181108b30);
          }
          break;
        }
      }
      puVar23 = auStack_b18;
      if (local_ac8 != (longlong *)0x0) {
        plVar17 = local_ac8;
        if ((ulonglong)((local_ab8 - (longlong)local_ac8 >> 3) * 8) < 0x1000) {
LAB_1803a8c60:
          puVar22 = puVar21;
        }
        else {
          plVar17 = (longlong *)local_ac8[-1];
          if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_ac8 + (-8 - (longlong)plVar17))) {
            plVar17 = (longlong *)&DAT_00000005;
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar21 = auStack_b10;
            goto LAB_1803a8c60;
          }
        }
        *(undefined8 *)(puVar22 + -8) = 0x1803a8c6b;
        thunk_FUN_1803d64e0(plVar17);
        puVar23 = puVar22;
      }
    }
    iVar7 = DAT_180961948;
    iVar11 = DAT_180961944;
    uVar20 = 1;
    uVar24 = (ulonglong)DAT_180961940;
    do {
      *(undefined8 *)(puVar23 + -8) = 0x1803a8c9c;
      lVar14 = FUN_18000f3a0(DAT_1809619d0);
      if (lVar14 == 0) {
LAB_1803a8cef:
        lVar14 = 0;
      }
      else {
        *(undefined8 *)(puVar23 + -8) = 0x1803a8cb4;
        lVar14 = FUN_18000f3a0((ulonglong)((uVar20 >> 9) * iVar11) + lVar14 + uVar24);
        if (0xfffffffffffefffe < lVar14 - 0x10000U) goto LAB_1803a8cef;
        *(undefined8 *)(puVar23 + -8) = 0x1803a8cd8;
        lVar15 = FUN_18000f3a0((ulonglong)((uVar20 & 0x1ff) * iVar7) + lVar14);
        lVar14 = 0;
        if (lVar15 - 0x10000U < 0xfffffffffffeffff) {
          lVar14 = lVar15;
        }
      }
      *(longlong *)(&DAT_181108b40 + (ulonglong)uVar20 * 8) = lVar14;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < 0x41);
    *(undefined **)(puVar23 + 0x38) = &DAT_1809f2e50;
    *(undefined8 *)(puVar23 + -8) = 0x1803a8d17;
    iVar11 = FUN_1804e4d70(&DAT_1809f2e50);
    if (iVar11 != 0) {
LAB_1803a9345:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar23 + -8) = 0x1803a934f;
      FUN_1804e4a90(5);
    }
    if (DAT_1809f2e9c == 0x7fffffff) {
      DAT_1809f2e9c = 0x7ffffffe;
LAB_1803a9376:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar23 + -8) = &UNK_1803a9380;
      FUN_1804e4a90(6);
    }
    *(undefined8 *)(puVar23 + -8) = 0x1803a8d66;
    FUN_18025d650(&DAT_181108d90,DAT_180cf9ea0,DAT_180cf9ea8 - DAT_180cf9ea0 >> 4);
    *(undefined8 *)(puVar23 + -8) = 0x1803a8d6f;
    FUN_1804e4e90(&DAT_1809f2e50);
    *(undefined **)(puVar23 + 0x38) = &DAT_1809f2f40;
    *(undefined8 *)(puVar23 + -8) = 0x1803a8d83;
    iVar11 = FUN_1804e4d70(&DAT_1809f2f40);
    if (iVar11 != 0) goto LAB_1803a9345;
    if (DAT_1809f2f8c == 0x7fffffff) {
      DAT_1809f2f8c = 0x7ffffffe;
      goto LAB_1803a9376;
    }
    *(undefined8 *)(puVar23 + -8) = 0x1803a8dc9;
    FUN_18025d330(&DAT_181108a28,DAT_180cf9da8,DAT_180cf9db0 - DAT_180cf9da8 >> 4);
    *(undefined8 *)(puVar23 + -8) = 0x1803a8dd2;
    FUN_1804e4e90(&DAT_1809f2f40);
    *(undefined8 **)(puVar23 + 0x68) = &local_a38;
    *(undefined8 *)(puVar23 + 0x70) = 0;
    *(undefined4 *)(puVar23 + 0x78) = DAT_1811079b0;
    *(undefined4 *)(puVar23 + 0x7c) = DAT_1811079b4;
    for (plVar17 = local_9f0; plVar17 != local_9e8; plVar17 = plVar17 + 10) {
      if ((char)plVar17[2] == '\0') {
        lVar14 = plVar17[1];
        *(undefined8 *)(puVar23 + -8) = 0x1803a8e42;
        iVar11 = FUN_1801d76c0(plVar17 + 1,puVar23 + 0x48);
        puVar8 = DAT_181108a48;
        lVar15 = 0;
        if (iVar11 == 1) {
          lVar15 = 0x192c;
        }
        lVar18 = 0x50;
        if (iVar11 == 1) {
          lVar18 = 0x197c;
        }
        if (((&DAT_18091a190)[lVar18] != '\0') &&
           (fVar1 = *(float *)((longlong)plVar17 + 0x14), 0.0 < fVar1)) {
          if ((iVar11 != 1) && (DAT_18091b388 != '\0')) {
            *(longlong *)(puVar23 + 0x50) = plVar17[3];
            *(int *)(puVar23 + 0x58) = (int)plVar17[4];
            uVar2 = *(undefined4 *)((longlong)plVar17 + 0x24);
            *(undefined4 *)(puVar23 + 0x5c) = uVar2;
            *(float *)(puVar23 + 0x60) = fVar1;
            if (DAT_181108a48 == DAT_181108a50) {
              *(undefined8 *)(puVar23 + -8) = 0x1803a8ef6;
              FUN_1803a9da0(uVar2,DAT_181108a48,puVar23 + 0x50);
            }
            else {
              uVar5 = *(undefined8 *)(puVar23 + 0x58);
              *DAT_181108a48 = *(undefined8 *)(puVar23 + 0x50);
              puVar8[1] = uVar5;
              *(float *)(puVar8 + 2) = fVar1;
              DAT_181108a48 = (undefined8 *)((longlong)DAT_181108a48 + 0x14);
            }
          }
          *(undefined8 *)(puVar23 + 0x38) = 0;
          *(undefined8 *)(puVar23 + 0x40) = 0;
          puVar23[0x30] = 0;
          *(undefined8 *)(puVar23 + -8) = 0x1803a8f1b;
          cVar9 = FUN_1803a3980(plVar17 + 5,puVar23 + 0x68,puVar23 + 0x38,puVar23 + 0x30);
          if ((cVar9 != '\0') && (cVar9 = puVar23[0x30], cVar9 != '\0')) {
            lVar18 = *plVar17;
            *(undefined8 *)(puVar23 + -8) = 0x1803a8f3f;
            cVar10 = FUN_1800729f0(param_1,lVar14,lVar18);
            if (cVar10 == '\0') {
              pcVar13 = &DAT_18091a1e0 + lVar15;
              local_9d8 = 0;
              uStack_9d0 = 0;
              local_9c8 = 0;
              uStack_9c0 = 0;
              *(undefined8 *)(puVar23 + -8) = 0x1803a8f71;
              FUN_1800d2370(local_9b8,0x1d);
              local_618 = 0;
              uStack_610 = 0;
              local_608 = 0;
              uStack_600 = 0;
              local_5f8 = 0;
              uStack_5f0 = 0;
              local_5e8 = 0;
              uStack_5e0 = 0;
              local_5d8 = 0;
              uStack_5d0 = 0;
              local_5c8 = 0;
              uStack_5c0 = 0;
              local_5b8 = 0;
              uStack_5b0 = 0;
              local_5a8 = 0;
              local_5a4 = 0;
              uStack_59c = 0;
              local_594 = 0;
              uStack_58c = 0;
              local_584 = 0;
              uStack_578 = 0;
              local_570 = 0;
              local_568 = 0xf;
              local_580 = 0;
              local_560 = 0;
              local_558 = 0;
              local_554 = 0;
              local_550 = 0;
              local_548 = 0;
              uStack_540 = 0;
              local_538 = 0;
              uStack_530 = 0;
              local_528 = 0;
              local_520 = 0;
              local_518 = 0;
              uStack_510 = 0;
              local_508 = 0;
              local_504 = 0;
              local_4fc = 0;
              *(undefined8 *)(puVar23 + -8) = 0x1803a9048;
              FUN_180540170(local_4f8,0,0x480);
              *(undefined8 *)(puVar23 + -8) = 0x1803a9054;
              FUN_1803a9390(local_4f8);
              *(undefined8 **)(puVar23 + 0x28) = &local_9d8;
              puVar23[0x20] = iVar11 != 1;
              *(undefined8 *)(puVar23 + -8) = 0x1803a9078;
              FUN_1803a5fe0(plVar17,pcVar13,puVar23 + 0x68,puVar23 + 0x38);
              if (DAT_180cd02d8 != DAT_180cd02e0) {
                *(undefined1 **)(puVar23 + 0x20) = local_4f8;
                lVar15 = *plVar17;
                *(undefined8 *)(puVar23 + -8) = 0x1803a90a5;
                FUN_180073120(lVar14,lVar15,pcVar13,0);
              }
              local_a78 = 0;
              local_a6c = 0;
              local_a68 = 0;
              uStack_a60 = 0;
              local_a58 = 0;
              local_a50 = 0;
              local_a90 = *(undefined4 *)(puVar23 + 0x38);
              uStack_a8c = *(undefined4 *)(puVar23 + 0x3c);
              uStack_a88 = *(undefined4 *)(puVar23 + 0x40);
              uStack_a84 = *(undefined4 *)(puVar23 + 0x44);
              if (*plVar17 != 0) {
                uVar24 = 1;
                do {
                  local_a7c = (int)uVar24;
                  if (*(longlong *)(&DAT_181108b40 + uVar24 * 8) == *plVar17) goto LAB_1803a9105;
                  uVar24 = (ulonglong)(local_a7c + 1U);
                } while ((int)(local_a7c + 1U) < 0x41);
              }
              local_a7c = 0;
LAB_1803a9105:
              *(undefined8 *)(puVar23 + -8) = 0x1803a9124;
              local_a98 = param_1;
              local_a80 = cVar9;
              local_a74 = fVar1;
              local_a70 = iVar11 != 1;
              FUN_1803b3e40(&local_a98,&local_9d8,pcVar13,0);
              *(undefined4 *)(puVar23 + 0x28) = *(undefined4 *)(puVar23 + 0x44);
              *(undefined4 *)(puVar23 + 0x20) = *(undefined4 *)(puVar23 + 0x40);
              *(undefined8 *)(puVar23 + -8) = 0x1803a9153;
              FUN_180072870(param_1,lVar14,*(undefined4 *)(puVar23 + 0x38),
                            *(undefined4 *)(puVar23 + 0x3c));
              *(undefined8 *)(puVar23 + -8) = 0x1803a9172;
              FUN_1804eced0(local_4f8,0x48,0x10,FUN_180058d00);
              *(undefined8 *)(puVar23 + -8) = 0x1803a917f;
              FUN_18034a030(&local_520);
              *(undefined8 *)(puVar23 + -8) = 0x1803a918b;
              FUN_1800244c0(&local_538);
              *(undefined8 *)(puVar23 + -8) = 0x1803a9197;
              FUN_1802a92f0(&local_550);
              *(undefined8 *)(puVar23 + -8) = 0x1803a91a3;
              FUN_18000f890(&local_580);
              *(undefined8 *)(puVar23 + -8) = 0x1803a91bf;
              FUN_1804eced0(local_9b8,0x20,0x1d,thunk_FUN_18000f890);
            }
          }
        }
      }
      else {
        *(undefined8 *)(puVar23 + -8) = 0x1803a8e2c;
        FUN_1803a7910(param_1,plVar17,puVar23 + 0x68);
      }
    }
    if ((DAT_18091a1e0 != '\0') && (DAT_18091b388 != '\0')) {
      *(undefined8 *)(puVar23 + -8) = 0x1803a91f7;
      FUN_1803a7b40(param_1,&DAT_18091a1e0,&local_a38);
    }
    dVar6 = DAT_1808ac500;
    dVar3 = *(double *)(DAT_180ca0a50 + 0x10);
    if ((longlong *)*DAT_181108d58 != DAT_181108d58) {
      plVar17 = (longlong *)*DAT_181108d58;
      plVar19 = DAT_181108d58;
      do {
        lVar14 = DAT_181108d68;
        if (dVar3 - (double)plVar17[6] <= dVar6) {
          plVar16 = (longlong *)*plVar17;
        }
        else {
          uVar24 = DAT_181108d80 &
                   (((((((((ulonglong)*(byte *)(plVar17 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar17 + 0x11)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar17 + 0x12)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar17 + 0x13)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar17 + 0x14)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar17 + 0x15)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar17 + 0x16)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar17 + 0x17)) * 0x100000001b3;
          plVar16 = *(longlong **)(DAT_181108d68 + uVar24 * 0x10);
          if (*(longlong **)(DAT_181108d68 + 8 + uVar24 * 0x10) == plVar17) {
            if (plVar16 == plVar17) {
              *(longlong **)(DAT_181108d68 + uVar24 * 0x10) = plVar19;
              *(longlong **)(lVar14 + 8 + uVar24 * 0x10) = plVar19;
            }
            else {
              *(longlong *)(DAT_181108d68 + 8 + uVar24 * 0x10) = plVar17[1];
            }
          }
          else if (plVar16 == plVar17) {
            *(longlong *)(DAT_181108d68 + uVar24 * 0x10) = *plVar17;
          }
          plVar16 = (longlong *)*plVar17;
          DAT_181108d60 = DAT_181108d60 + -1;
          *(longlong **)plVar17[1] = plVar16;
          plVar16[1] = plVar17[1];
          *(undefined8 *)(puVar23 + -8) = 0x1803a9316;
          thunk_FUN_1803d64e0(plVar17,0x38);
          plVar19 = DAT_181108d58;
        }
        plVar17 = plVar16;
      } while (plVar16 != plVar19);
    }
  }
  *(undefined8 *)(puVar23 + -8) = 0x1803a9336;
  FUN_1803b5790();
  *(undefined8 *)(puVar23 + -8) = 0x1803a9340;
  FUN_1803a9c70(&local_9f0);
LAB_1803a89b4:
  *(undefined8 *)(puVar23 + -8) = 0x1803a89c3;
  return;
}



/* ===== 1803a9390 FUN_1803a9390 ===== */

void FUN_1803a9390(longlong param_1)

{
  ulonglong uVar1;
  
  for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 1) {
    FUN_1803a9930(param_1 + uVar1 * 0x48);
  }
  return;
}



/* ===== 1803a93e0 FUN_1803a93e0 ===== */

void FUN_1803a93e0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0xffffffff;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0xffffffff;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0xffffffff;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0xffffffff;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0xffffffff;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0xffffffff;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined4 *)((longlong)param_1 + 700) = 0xffffffff;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0xffffffff;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0xffffffff;
  return;
}



/* ===== 1803a9720 FUN_1803a9720 ===== */

void FUN_1803a9720(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1803d64e0(puVar1,0x38);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x38);
  return;
}



/* ===== 1803a9780 FUN_1803a9780 ===== */

undefined8 *
FUN_1803a9780(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    lVar6 = param_2[1] - *param_2 >> 4;
    if (0x333333333333333 < (ulonglong)(lVar6 * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_18000fb10();
    }
    puVar7 = (undefined8 *)FUN_18000fb70(lVar6 * 0x10);
    *param_1 = puVar7;
    param_1[1] = puVar7;
    param_1[2] = puVar7 + lVar6 * 2;
    puVar1 = (undefined8 *)param_2[1];
    puVar10 = puVar7;
    puVar12 = param_1;
    for (puVar9 = (undefined8 *)*param_2; puVar9 != puVar1; puVar9 = puVar9 + 10) {
      uVar5 = puVar9[1];
      *puVar7 = *puVar9;
      puVar7[1] = uVar5;
      *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar9 + 2);
      *(undefined4 *)((longlong)puVar7 + 0x14) = *(undefined4 *)((longlong)puVar9 + 0x14);
      puVar7[3] = puVar9[3];
      *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar9 + 4);
      *(undefined4 *)((longlong)puVar7 + 0x24) = *(undefined4 *)((longlong)puVar9 + 0x24);
      uVar2 = *(undefined4 *)((longlong)puVar9 + 0x2c);
      uVar3 = *(undefined4 *)(puVar9 + 6);
      uVar4 = *(undefined4 *)((longlong)puVar9 + 0x34);
      *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(puVar9 + 5);
      *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar2;
      *(undefined4 *)(puVar7 + 6) = uVar3;
      *(undefined4 *)((longlong)puVar7 + 0x34) = uVar4;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      if (puVar9[8] - puVar9[7] != 0) {
        lVar6 = (longlong)(puVar9[8] - puVar9[7]) >> 3;
        if (0xaaaaaaaaaaaaaaa < (ulonglong)(lVar6 * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
          FUN_1800118d0();
        }
        lVar6 = lVar6 * 8;
        puVar11 = puVar7;
        lVar8 = FUN_18000fb70(lVar6);
        puVar7[7] = lVar8;
        puVar7[8] = lVar8;
        puVar7[9] = lVar6 + lVar8;
        lVar6 = puVar9[8] - puVar9[7];
        FUN_180540530(lVar8,puVar9[7],lVar6,param_4,puVar10,puVar11,puVar12);
        puVar7[8] = lVar8 + (lVar6 >> 3) * 8;
      }
      puVar7 = puVar7 + 10;
    }
    param_1[1] = puVar7;
  }
  return param_1;
}



/* ===== 1803a9930 FUN_1803a9930 ===== */

void FUN_1803a9930(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  param_1[8] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* ===== 1803a9970 FUN_1803a9970 ===== */

undefined8 * FUN_1803a9970(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  puVar6 = (undefined8 *)(DAT_181108d80 & uVar7);
  puVar3 = *(undefined8 **)(DAT_181108d68 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_181108d58;
  if (puVar3 != DAT_181108d58) {
    puVar6 = *(undefined8 **)(DAT_181108d68 + (longlong)puVar6 * 0x10);
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
  if (DAT_181108d60 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x38,puVar6,DAT_181108d68,param_4,&DAT_181108d58,0);
  puVar3[2] = *(undefined8 *)param_3;
  puVar3[5] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[6] = 0;
  uVar2 = DAT_181108d88;
  if (DAT_181108d50 < (float)(DAT_181108d60 + 1) / (float)DAT_181108d88) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_181108d60 + 1) / DAT_181108d50);
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
    FUN_1803aa930(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_181108d68 + 8 + (DAT_181108d80 & uVar7) * 0x10);
    puVar8 = DAT_181108d58;
    if (puVar6 != DAT_181108d58) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_181108d68 + (DAT_181108d80 & uVar7) * 0x10))
        goto LAB_1803a9bdd;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_1803a9bdd:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_181108d60 = DAT_181108d60 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_181108d68;
  uVar7 = DAT_181108d80 & uVar7;
  puVar1 = *(undefined8 **)(DAT_181108d68 + uVar7 * 0x10);
  if (puVar1 == DAT_181108d58) {
    *(undefined8 **)(DAT_181108d68 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_181108d68 + uVar7 * 0x10) = puVar3;
      goto LAB_1803a9c3c;
    }
    if (*(undefined8 **)(DAT_181108d68 + 8 + uVar7 * 0x10) != puVar6) goto LAB_1803a9c3c;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_1803a9c3c:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1803a9c70 FUN_1803a9c70 ===== */

void FUN_1803a9c70(longlong *param_1)

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
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar2 = param_1[1];
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x50) {
    FUN_1803a9d20(lVar3 + 0x38);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 4) << 4)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1803a9cfc;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1803a9cfc:
  *(undefined8 *)(puVar5 + -8) = 0x1803a9d04;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1803a9d20 FUN_1803a9d20 ===== */

void FUN_1803a9d20(ulonglong *param_1)

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
  *(undefined8 *)(puVar5 + -8) = 0x1803a9d87;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1803a9da0 FUN_1803a9da0 ===== */

longlong FUN_1803a9da0(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  
  lVar3 = DAT_181108a40;
  uVar14 = 0xccccccccccccccc;
  lVar8 = (DAT_181108a48 - DAT_181108a40 >> 2) * -0x3333333333333333;
  if (lVar8 == 0xccccccccccccccc) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar8 + 1;
  uVar9 = (DAT_181108a50 - DAT_181108a40 >> 2) * -0x3333333333333333;
  if (uVar9 <= 0xccccccccccccccc - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar14 = uVar1;
    if (uVar1 <= uVar9) {
      uVar14 = uVar9;
    }
    if (0xccccccccccccccc < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar8 = FUN_18000fb70(uVar14 * 0x14);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  lVar3 = (param_2 - lVar3) / 0x14;
  puVar2 = (undefined4 *)(lVar8 + lVar3 * 0x14);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  lVar3 = lVar8 + lVar3 * 0x14;
  *(undefined4 *)(lVar3 + 0x10) = param_3[4];
  if (param_2 == DAT_181108a48) {
    lVar13 = DAT_181108a48 - DAT_181108a40;
    lVar10 = lVar8;
    param_2 = DAT_181108a40;
  }
  else {
    FUN_180540530(lVar8,DAT_181108a40,param_2 - DAT_181108a40);
    lVar10 = lVar3 + 0x14;
    lVar13 = DAT_181108a48 - param_2;
  }
  puVar11 = auStack_38;
  puVar12 = auStack_38;
  FUN_180540530(lVar10,param_2,lVar13);
  if (DAT_181108a40 == 0) goto LAB_1803a9f21;
  lVar10 = DAT_181108a40;
  if ((ulonglong)((DAT_181108a50 - DAT_181108a40 >> 2) * 4) < 0x1000) {
LAB_1803a9f16:
    puVar12 = puVar11;
  }
  else {
    lVar10 = *(longlong *)(DAT_181108a40 + -8);
    if (0x1f < (DAT_181108a40 - lVar10) - 8U) {
      lVar10 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar11 = auStack_30;
      goto LAB_1803a9f16;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1803a9f21;
  thunk_FUN_1803d64e0(lVar10);
LAB_1803a9f21:
  DAT_181108a40 = lVar8;
  DAT_181108a48 = lVar8 + uVar1 * 0x14;
  DAT_181108a50 = uVar14 * 0x14 + lVar8;
  return lVar3;
}



/* ===== 1803a9f70 FUN_1803a9f70 ===== */

undefined8 * FUN_1803a9f70(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar12 = *param_1;
  uVar16 = 0x333333333333333;
  lVar9 = (param_1[1] - lVar12 >> 4) * -0x3333333333333333;
  if (lVar9 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar9 + 1;
  uVar11 = (param_1[2] - lVar12 >> 4) * -0x3333333333333333;
  if (uVar11 <= 0x333333333333333 - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar16 = uVar1;
    if (uVar1 <= uVar11) {
      uVar16 = uVar11;
    }
    if (0x333333333333333 < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar10 = (undefined8 *)FUN_18000fb70(uVar16 * 0x50);
  uVar2 = param_3[1];
  puVar17 = puVar10 + ((param_2 - lVar12) / 0x50) * 10;
  *puVar17 = *param_3;
  puVar17[1] = uVar2;
  *(undefined1 *)(puVar17 + 2) = *(undefined1 *)(param_3 + 2);
  *(undefined4 *)((longlong)puVar17 + 0x14) = *(undefined4 *)((longlong)param_3 + 0x14);
  puVar17[3] = param_3[3];
  *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar17 + 0x24) = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar7 = *(undefined4 *)(param_3 + 6);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x34);
  *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(param_3 + 5);
  *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar6;
  *(undefined4 *)(puVar17 + 6) = uVar7;
  *(undefined4 *)((longlong)puVar17 + 0x34) = uVar8;
  uVar2 = param_3[9];
  uVar3 = param_3[8];
  uVar4 = param_3[7];
  param_3[9] = 0;
  param_3[8] = 0;
  param_3[7] = 0;
  puVar17[7] = uVar4;
  puVar17[8] = uVar3;
  puVar17[9] = uVar2;
  lVar12 = param_1[1];
  lVar9 = *param_1;
  puVar15 = puVar10;
  if (param_2 != lVar12) {
    FUN_1803aa850(*param_1,param_2,puVar10);
    lVar12 = param_1[1];
    puVar15 = puVar17 + 10;
    lVar9 = param_2;
  }
  puVar13 = auStack_48;
  puVar14 = auStack_48;
  FUN_1803aa850(lVar9,lVar12,puVar15);
  lVar12 = *param_1;
  if (lVar12 == 0) goto LAB_1803aa14a;
  lVar9 = param_1[1];
  for (; lVar12 != lVar9; lVar12 = lVar12 + 0x50) {
    FUN_1803a9d20(lVar12 + 0x38);
  }
  lVar12 = *param_1;
  lVar9 = lVar12;
  if ((ulonglong)((param_1[2] - lVar12 >> 4) << 4) < 0x1000) {
LAB_1803aa13f:
    puVar14 = puVar13;
  }
  else {
    lVar9 = *(longlong *)(lVar12 + -8);
    if (0x1f < (lVar12 - lVar9) - 8U) {
      lVar9 = 5;
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar13 = auStack_40;
      goto LAB_1803aa13f;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x1803aa14a;
  thunk_FUN_1803d64e0(lVar9);
LAB_1803aa14a:
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + uVar1 * 10);
  param_1[2] = (longlong)(puVar10 + uVar16 * 10);
  return puVar17;
}



/* ===== 1803aa1a0 FUN_1803aa1a0 ===== */

longlong FUN_1803aa1a0(longlong *param_1,longlong param_2,undefined4 *param_3)

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
    FUN_1800118d0();
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
  if (lVar8 == 0) goto LAB_1803aa30f;
  lVar11 = lVar8;
  if ((ulonglong)((param_1[2] - lVar8 >> 3) * 8) < 0x1000) {
LAB_1803aa304:
    puVar13 = puVar12;
  }
  else {
    lVar11 = *(longlong *)(lVar8 + -8);
    if (0x1f < (lVar8 - lVar11) - 8U) {
      lVar11 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar12 = auStack_40;
      goto LAB_1803aa304;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x1803aa30f;
  thunk_FUN_1803d64e0(lVar11);
LAB_1803aa30f:
  *param_1 = lVar9;
  param_1[1] = lVar9 + uVar1 * 0x18;
  param_1[2] = uVar15 * 0x18 + lVar9;
  return lVar3;
}



/* ===== 1803aa360 FUN_1803aa360 ===== */

undefined8 * FUN_1803aa360(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar12 = *param_1;
  uVar11 = 0x555555555555555;
  lVar8 = (param_1[1] - lVar12 >> 4) * -0x5555555555555555;
  if (lVar8 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar8 + 1;
  uVar10 = (param_1[2] - lVar12 >> 4) * -0x5555555555555555;
  if (uVar10 <= 0x555555555555555 - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar11 = uVar1;
    if (uVar1 <= uVar10) {
      uVar11 = uVar10;
    }
    if (0x555555555555555 < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar11 * 0x30);
  puVar13 = auStack_48;
  puVar14 = auStack_48;
  uVar2 = *param_3;
  *param_3 = 0;
  uVar3 = param_3[1];
  param_3[1] = 0;
  uVar4 = param_3[2];
  param_3[2] = 0;
  puVar16 = puVar9 + (((longlong)param_2 - lVar12) / 0x30) * 6;
  *puVar16 = uVar2;
  puVar16[1] = uVar3;
  puVar16[2] = uVar4;
  *(undefined4 *)(puVar16 + 3) = *(undefined4 *)(param_3 + 3);
  *(undefined4 *)((longlong)puVar16 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined8 *)((longlong)puVar16 + 0x24) = *(undefined8 *)((longlong)param_3 + 0x24);
  puVar5 = (undefined8 *)param_1[1];
  puVar15 = (undefined8 *)*param_1;
  puVar7 = puVar9;
  if (param_2 == puVar5) {
    for (; puVar15 != puVar5; puVar15 = puVar15 + 6) {
      uVar2 = *puVar15;
      uVar3 = puVar15[2];
      uVar4 = puVar15[1];
      puVar15[2] = 0;
      puVar15[1] = 0;
      *puVar15 = 0;
      *puVar7 = uVar2;
      puVar7[1] = uVar4;
      puVar7[2] = uVar3;
      *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(puVar15 + 3);
      *(undefined4 *)((longlong)puVar7 + 0x1c) = *(undefined4 *)((longlong)puVar15 + 0x1c);
      *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar15 + 4);
      *(undefined8 *)((longlong)puVar7 + 0x24) = *(undefined8 *)((longlong)puVar15 + 0x24);
      puVar7 = puVar7 + 6;
    }
  }
  else {
    for (; puVar15 != param_2; puVar15 = puVar15 + 6) {
      uVar2 = *puVar15;
      uVar3 = puVar15[2];
      uVar4 = puVar15[1];
      puVar15[2] = 0;
      puVar15[1] = 0;
      *puVar15 = 0;
      *puVar7 = uVar2;
      puVar7[1] = uVar4;
      puVar7[2] = uVar3;
      *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(puVar15 + 3);
      *(undefined4 *)((longlong)puVar7 + 0x1c) = *(undefined4 *)((longlong)puVar15 + 0x1c);
      *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar15 + 4);
      *(undefined8 *)((longlong)puVar7 + 0x24) = *(undefined8 *)((longlong)puVar15 + 0x24);
      puVar7 = puVar7 + 6;
    }
    puVar5 = (undefined8 *)param_1[1];
    puVar15 = puVar16;
    for (; param_2 != puVar5; param_2 = param_2 + 6) {
      uVar2 = *param_2;
      uVar3 = param_2[2];
      uVar4 = param_2[1];
      param_2[2] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      puVar15[6] = uVar2;
      puVar15[7] = uVar4;
      puVar15[8] = uVar3;
      *(undefined4 *)(puVar15 + 9) = *(undefined4 *)(param_2 + 3);
      *(undefined4 *)((longlong)puVar15 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(puVar15 + 10) = *(undefined4 *)(param_2 + 4);
      *(undefined8 *)((longlong)puVar15 + 0x54) = *(undefined8 *)((longlong)param_2 + 0x24);
      puVar15 = puVar15 + 6;
    }
  }
  lVar12 = *param_1;
  if (lVar12 == 0) goto LAB_1803aa628;
  lVar8 = param_1[1];
  for (; lVar12 != lVar8; lVar12 = lVar12 + 0x30) {
    FUN_1800132b0(lVar12);
  }
  lVar12 = *param_1;
  lVar8 = lVar12;
  if ((ulonglong)((param_1[2] - lVar12 >> 4) << 4) < 0x1000) {
LAB_1803aa61d:
    puVar14 = puVar13;
  }
  else {
    lVar8 = *(longlong *)(lVar12 + -8);
    if (0x1f < (lVar12 - lVar8) - 8U) {
      lVar8 = 5;
      pcVar6 = (code *)swi(0x29);
      (*pcVar6)(5);
      puVar13 = auStack_40;
      goto LAB_1803aa61d;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x1803aa628;
  thunk_FUN_1803d64e0(lVar8);
LAB_1803aa628:
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + uVar1 * 6);
  param_1[2] = (longlong)(puVar9 + uVar11 * 6);
  return puVar16;
}



/* ===== 1803aa680 FUN_1803aa680 ===== */

longlong FUN_1803aa680(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar3 = *param_1;
  uVar16 = 0x666666666666666;
  lVar9 = (param_1[1] - lVar3 >> 3) * -0x3333333333333333;
  if (lVar9 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar9 + 1;
  uVar11 = (param_1[2] - lVar3 >> 3) * -0x3333333333333333;
  if (uVar11 <= 0x666666666666666 - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar16 = uVar1;
    if (uVar1 <= uVar11) {
      uVar16 = uVar11;
    }
    if (0x666666666666666 < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar10 = FUN_18000fb70(uVar16 * 0x28);
  uVar8 = param_3[1];
  lVar3 = (param_2 - lVar3) / 0x28;
  puVar2 = (undefined8 *)(lVar10 + lVar3 * 0x28);
  *puVar2 = *param_3;
  puVar2[1] = uVar8;
  lVar3 = lVar10 + lVar3 * 0x28;
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar6 = *(undefined4 *)(param_3 + 3);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)(lVar3 + 0x14) = uVar5;
  *(undefined4 *)(lVar3 + 0x18) = uVar6;
  *(undefined4 *)(lVar3 + 0x1c) = uVar7;
  *(undefined8 *)(lVar3 + 0x20) = param_3[4];
  lVar9 = *param_1;
  if (param_2 == param_1[1]) {
    lVar15 = param_1[1] - lVar9;
    lVar12 = lVar10;
    param_2 = lVar9;
  }
  else {
    FUN_180540530(lVar10,lVar9,param_2 - lVar9);
    lVar12 = lVar3 + 0x28;
    lVar15 = param_1[1] - param_2;
  }
  puVar13 = auStack_48;
  puVar14 = auStack_48;
  FUN_180540530(lVar12,param_2,lVar15);
  lVar9 = *param_1;
  if (lVar9 == 0) goto LAB_1803aa7f7;
  lVar12 = lVar9;
  if ((ulonglong)((param_1[2] - lVar9 >> 3) * 8) < 0x1000) {
LAB_1803aa7ec:
    puVar14 = puVar13;
  }
  else {
    lVar12 = *(longlong *)(lVar9 + -8);
    if (0x1f < (lVar9 - lVar12) - 8U) {
      lVar12 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar13 = auStack_40;
      goto LAB_1803aa7ec;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x1803aa7f7;
  thunk_FUN_1803d64e0(lVar12);
LAB_1803aa7f7:
  *param_1 = lVar10;
  param_1[1] = lVar10 + uVar1 * 0x28;
  param_1[2] = uVar16 * 0x28 + lVar10;
  return lVar3;
}



/* ===== 1803aa850 FUN_1803aa850 ===== */

undefined8 * FUN_1803aa850(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 10) {
    uVar1 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar1;
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_1 + 2);
    *(undefined4 *)((longlong)param_3 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x14);
    param_3[3] = param_1[3];
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)((longlong)param_3 + 0x24) = *(undefined4 *)((longlong)param_1 + 0x24);
    uVar1 = param_1[6];
    param_3[5] = param_1[5];
    param_3[6] = uVar1;
    uVar1 = param_1[9];
    uVar2 = param_1[8];
    uVar3 = param_1[7];
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_3[7] = uVar3;
    param_3[8] = uVar2;
    param_3[9] = uVar1;
    param_3 = param_3 + 10;
  }
  return param_3;
}



/* ===== 1803aa8f0 FUN_1803aa8f0 ===== */

void FUN_1803aa8f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_1803a9d20(lVar2 + 0x38);
  }
  return;
}



/* ===== 1803aa930 FUN_1803aa930 ===== */

void FUN_1803aa930(undefined8 param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  
  plVar9 = DAT_181108d58;
  for (lVar12 = 0x3f; 0xfffffffffffffffU >> lVar12 == 0; lVar12 = lVar12 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar12 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar10 = param_2 - 1 | 1;
  lVar12 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  bVar11 = (char)lVar12 + 1;
  lVar12 = 1L << (bVar11 & 0x3f);
  FUN_180029d30(&DAT_181108d68,2L << (bVar11 & 0x3f),DAT_181108d58);
  DAT_181108d80 = lVar12 - 1;
  DAT_181108d88 = lVar12;
  plVar8 = (longlong *)*DAT_181108d58;
joined_r0x0001803aa9ac:
  do {
    while( true ) {
      while( true ) {
        if (plVar8 == plVar9) {
          return;
        }
        plVar2 = (longlong *)*plVar8;
        uVar10 = (((((((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar8 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar8 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x17)) * 0x100000001b3 & DAT_181108d80;
        plVar3 = *(longlong **)(DAT_181108d68 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_181108d68 + uVar10 * 0x10);
        lVar12 = DAT_181108d68 + uVar10 * 0x10;
        if (plVar3 != plVar9) break;
        *puVar1 = plVar8;
        *(longlong **)(lVar12 + 8) = plVar8;
        plVar8 = plVar2;
      }
      plVar4 = *(longlong **)(lVar12 + 8);
      if (plVar8[2] != plVar4[2]) break;
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != plVar8) {
        puVar1 = (undefined8 *)plVar8[1];
        *puVar1 = plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar8;
        plVar4[1] = (longlong)puVar5;
        plVar2[1] = (longlong)puVar1;
        plVar8[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar12 + 8) = plVar8;
      plVar8 = plVar2;
    }
    do {
      if (plVar3 == plVar4) {
        puVar5 = (undefined8 *)plVar8[1];
        *puVar5 = plVar2;
        puVar6 = (undefined8 *)plVar2[1];
        *puVar6 = plVar4;
        puVar7 = (undefined8 *)plVar4[1];
        *puVar7 = plVar8;
        plVar4[1] = (longlong)puVar6;
        plVar2[1] = (longlong)puVar5;
        plVar8[1] = (longlong)puVar7;
        *puVar1 = plVar8;
        plVar8 = plVar2;
        goto joined_r0x0001803aa9ac;
      }
      plVar4 = (longlong *)plVar4[1];
    } while (plVar8[2] != plVar4[2]);
    lVar12 = *plVar4;
    puVar1 = (undefined8 *)plVar8[1];
    *puVar1 = plVar2;
    plVar3 = (longlong *)plVar2[1];
    *plVar3 = lVar12;
    puVar5 = *(undefined8 **)(lVar12 + 8);
    *puVar5 = plVar8;
    *(longlong **)(lVar12 + 8) = plVar3;
    plVar2[1] = (longlong)puVar1;
    plVar8[1] = (longlong)puVar5;
    plVar8 = plVar2;
  } while( true );
}



/* ===== 1803aab30 FUN_1803aab30 ===== */

uint FUN_1803aab30(float *param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_68 [2];
  float local_60 [2];
  float local_58 [2];
  float local_50 [2];
  float local_48 [2];
  float local_40 [2];
  float local_38 [2];
  float local_30 [12];
  
  local_60[0] = 0.0;
  local_38[0] = *param_1;
  local_58[0] = param_1[2];
  local_48[0] = param_1[1];
  local_50[0] = 0.0;
  local_40[0] = 0.0;
  local_30[0] = 0.0;
  local_68[0] = param_2 * param_1[3];
  pfVar1 = local_68;
  if (param_2 * param_1[3] <= 0.0) {
    pfVar1 = local_60;
  }
  fVar2 = *pfVar1;
  if (DAT_1808ac34c <= *pfVar1) {
    fVar2 = DAT_1808ac34c;
  }
  pfVar1 = local_58;
  if (param_1[2] <= 0.0) {
    pfVar1 = local_50;
  }
  fVar3 = *pfVar1;
  if (DAT_1808ac34c <= *pfVar1) {
    fVar3 = DAT_1808ac34c;
  }
  pfVar1 = local_48;
  if (param_1[1] <= 0.0) {
    pfVar1 = local_40;
  }
  fVar4 = *pfVar1;
  if (DAT_1808ac34c <= *pfVar1) {
    fVar4 = DAT_1808ac34c;
  }
  pfVar1 = local_38;
  if (*param_1 <= 0.0) {
    pfVar1 = local_30;
  }
  fVar5 = *pfVar1;
  if (DAT_1808ac34c <= *pfVar1) {
    fVar5 = DAT_1808ac34c;
  }
  return (int)(fVar5 * DAT_1808acb94 + DAT_1808ac1f4) |
         (((int)(fVar2 * DAT_1808acb94 + DAT_1808ac1f4) << 8 |
          (int)(fVar3 * DAT_1808acb94 + DAT_1808ac1f4)) << 8 |
         (int)(fVar4 * DAT_1808acb94 + DAT_1808ac1f4)) << 8;
}



/* ===== 1803aac50 FUN_1803aac50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1803aac50(float *param_1,undefined8 param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar6 = (float)param_2;
  if (*(char *)(param_1 + 5) == '\0') {
    param_1[4] = fVar6;
    param_1[3] = fVar6;
    param_1[1] = fVar6;
    *param_1 = fVar6;
    param_1[2] = param_4;
    *(undefined1 *)(param_1 + 5) = 1;
    return param_2;
  }
  if (fVar6 == param_1[1]) {
    fVar5 = param_1[3];
    fVar4 = param_1[4];
    fVar6 = param_1[1];
    uVar7 = 0;
  }
  else {
    param_1[1] = fVar6;
    param_1[2] = 0.0;
    fVar8 = *param_1;
    fVar5 = fVar6;
    if (fVar8 <= fVar6) {
      fVar5 = fVar8;
    }
    fVar4 = fVar6;
    if (fVar6 <= fVar8) {
      fVar4 = fVar8;
    }
    param_1[3] = fVar5;
    param_1[4] = fVar4;
  }
  fVar2 = DAT_1808ac34c;
  fVar8 = param_1[2];
  param_1[2] = param_3 + fVar8;
  fVar1 = DAT_1808abf80;
  param_4 = (param_3 + fVar8) / param_4;
  fVar8 = 0.0;
  if ((0.0 <= param_4) && (fVar8 = fVar2, param_4 <= fVar2)) {
    fVar8 = param_4;
  }
  fVar3 = fVar2 - fVar8;
  fVar3 = fVar2 - fVar3 * fVar3 * fVar3;
  if (fVar6 <= (fVar4 + fVar5) * DAT_1808ac1f4) {
    fVar5 = fVar4 - (fVar4 - fVar6) * fVar3;
  }
  else {
    fVar5 = (fVar6 - fVar5) * fVar3 + fVar5;
  }
  *param_1 = fVar5;
  if (((float)((uint)(fVar5 - fVar6) & _DAT_1808ade90) <= fVar1) || (fVar2 <= fVar8)) {
    *param_1 = fVar6;
    fVar5 = fVar6;
  }
  return CONCAT44(uVar7,fVar5);
}



/* ===== 1803aad90 FUN_1803aad90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1803aad90(longlong *param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  int local_res8 [2];
  int local_res10 [6];
  
  local_res10[2] = param_3;
  local_res10[0] = param_2;
  if ((param_4 != '\0') && (0 < DAT_18091a1b4)) {
    if (DAT_18091a1b4 < 100) {
      iVar5 = 100;
    }
    else {
      iVar5 = DAT_18091a1b4;
      if (200 < DAT_18091a1b4) {
        iVar5 = 200;
      }
    }
    if (DAT_1808ac34c < (float)iVar5 / DAT_1808acb08) {
      iVar5 = 100;
      if ((99 < DAT_18091a1b4) && (iVar5 = DAT_18091a1b4, 200 < DAT_18091a1b4)) {
        iVar5 = 200;
      }
      param_2 = param_2 + (int)(((float)iVar5 / DAT_1808acb08 - DAT_1808ac34c) * DAT_1808ac710);
      local_res10[0] = param_2;
    }
  }
  local_res8[0] = 4;
  local_res10[4] = 0;
  piVar4 = local_res10 + 4;
  if (-1 < param_2) {
    piVar4 = local_res10;
  }
  piVar1 = local_res8;
  if (param_2 < 5) {
    piVar1 = piVar4;
  }
  lVar6 = (longlong)*piVar1;
  piVar4 = local_res10 + 4;
  if (-1 < param_3) {
    piVar4 = local_res10 + 2;
  }
  local_res10[0] = 3;
  local_res10[4] = 0;
  piVar2 = local_res10;
  if (param_3 < 4) {
    piVar2 = piVar4;
  }
  iVar5 = *piVar2;
  if (iVar5 == 1) {
    if (*piVar1 == 0) {
      lVar6 = DAT_1811079f0;
      if (DAT_1811079f0 == 0) {
        lVar6 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      *param_1 = lVar6;
      *(undefined4 *)(param_1 + 1) = 0x41200000;
      *(undefined1 *)((longlong)param_1 + 0xc) = 1;
      return param_1;
    }
    lVar3 = DAT_181107a28;
    if (DAT_181107a28 == 0) {
      lVar3 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    *param_1 = lVar3;
    fVar7 = *(float *)(&DAT_1806de2a8 + lVar6 * 4);
  }
  else {
    if (iVar5 == 2) {
      lVar3 = DAT_181107a10;
      if (DAT_181107a10 == 0) {
        lVar3 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      *param_1 = lVar3;
      fVar7 = *(float *)(&DAT_18089fb98 + lVar6 * 4) * DAT_1808ac3c4;
      *(undefined1 *)((longlong)param_1 + 0xc) = 0;
      *(float *)(param_1 + 1) = fVar7;
      return param_1;
    }
    if (((iVar5 != 3) || (lVar3 = DAT_181107a30, DAT_181107a30 == 0)) &&
       (lVar3 = DAT_181107a28, DAT_181107a28 == 0)) {
      lVar3 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    *param_1 = lVar3;
    fVar7 = *(float *)(&DAT_18089fb80 + lVar6 * 4);
  }
  fVar7 = fVar7 * _DAT_1808ac3cc;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(float *)(param_1 + 1) = fVar7;
  return param_1;
}



/* ===== 1803aaf90 FUN_1803aaf90 ===== */

undefined8 * FUN_1803aaf90(undefined8 *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_3 == 1) {
    if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
      pcVar4 = param_2;
    }
    else {
      pcVar4 = *(char **)param_2;
    }
    pcVar5 = pcVar4 + *(longlong *)(param_2 + 0x10);
    for (; pcVar4 != pcVar5; pcVar4 = pcVar4 + 1) {
      if ((byte)(*pcVar4 + 0x9fU) < 0x1a) {
        *pcVar4 = *pcVar4 + -0x20;
      }
    }
  }
  else if (param_3 == 2) {
    if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
      pcVar4 = param_2;
    }
    else {
      pcVar4 = *(char **)param_2;
    }
    pcVar5 = pcVar4 + *(longlong *)(param_2 + 0x10);
    for (; pcVar4 != pcVar5; pcVar4 = pcVar4 + 1) {
      if ((byte)(*pcVar4 + 0xbfU) < 0x1a) {
        *pcVar4 = *pcVar4 + ' ';
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *param_2 = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\x0f';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  FUN_18000f890(param_2);
  return param_1;
}



/* ===== 1803ab060 FUN_1803ab060 ===== */

undefined8 * FUN_1803ab060(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 local_res10 [2];
  
  if ((*param_2 == 0) || (param_3 == 0)) {
    *param_1 = 0;
  }
  else {
    FUN_18040a2f0(local_res10,*param_2,(int)param_2[1],DAT_1808acd08,0,param_3,0,0,0);
    if (*param_2 == 0) {
      fVar4 = 0.0;
    }
    else {
      lVar1 = FUN_180409a40(*param_2,(int)param_2[1],DAT_1808acda0);
      if ((lVar1 == 0) || (lVar1 = FUN_1804098c0(lVar1,0x41), lVar1 == 0)) {
        fVar4 = *(float *)(param_2 + 1);
      }
      else {
        fVar3 = (float)FUN_18053f0d0(*(undefined4 *)(lVar1 + 0xc));
        fVar4 = (float)FUN_18053ef70(*(undefined4 *)(lVar1 + 0x14));
        fVar4 = fVar4 - fVar3;
      }
    }
    if (*(char *)((longlong)param_2 + 0xc) == '\0') {
      fVar3 = 0.0;
    }
    else {
      fVar3 = DAT_1808ac540;
    }
    uVar2 = FUN_18053ef70(local_res10[0]);
    *(undefined4 *)param_1 = uVar2;
    *(float *)((longlong)param_1 + 4) = fVar3 + fVar4;
  }
  return param_1;
}



/* ===== 1803ab1a0 FUN_1803ab1a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803ab1a0(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,char *param_5,
                  float *param_6)

{
  char cVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res10;
  float local_res14;
  uint local_res20;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  
  fVar12 = DAT_1808acda0;
  if (((*param_2 != 0) && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
    local_res20 = param_4;
    local_d8 = param_3;
    lVar4 = FUN_180409a40(*param_2,(int)param_2[1],DAT_1808acda0);
    if ((lVar4 == 0) || (lVar4 = FUN_1804098c0(lVar4,0x41), lVar4 == 0)) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = (float)FUN_18053f0d0();
    }
    fVar13 = *(float *)(param_2 + 1);
    fVar10 = (float)FUN_18053f0d0();
    fVar2 = DAT_1808ac34c;
    cVar1 = *(char *)((longlong)param_2 + 0xc);
    local_d8 = CONCAT44(local_d8._4_4_,fVar10);
    if (cVar1 == '\0') {
      fVar14 = 0.0;
    }
    else {
      fVar14 = DAT_1808ac34c;
    }
    fVar11 = (float)FUN_18053f0d0();
    fVar3 = DAT_1808acb94;
    fVar14 = (fVar11 - fVar9) + fVar14;
    fVar9 = (float)(param_4 >> 0x18) / DAT_1808acb94;
    local_d8 = CONCAT44(fVar14,(undefined4)local_d8);
    if (cVar1 == '\0') {
      local_res10 = fVar10 + fVar2;
      local_res14 = fVar14 + fVar2;
      iVar6 = (int)(fVar9 * _DAT_1808ac288 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18;
      if ((iVar6 != 0) && (*param_5 != '\0')) {
        if (*param_2 == 0) {
          plVar5 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
        }
        else {
          plVar5 = param_2;
        }
        if (fVar13 == 0.0) {
          fVar13 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
        }
        local_d0 = *(undefined8 *)(param_1 + 0x60);
        uStack_c8 = *(undefined8 *)(param_1 + 0x68);
        if (param_6 != (float *)0x0) {
          local_d0._4_4_ = (float)((ulonglong)local_d0 >> 0x20);
          if ((float)local_d0 <= *param_6) {
            local_d0._0_4_ = *param_6;
          }
          if (local_d0._4_4_ <= param_6[1]) {
            local_d0._4_4_ = param_6[1];
          }
          fVar12 = (float)uStack_c8;
          if (param_6[2] <= (float)uStack_c8) {
            fVar12 = param_6[2];
          }
          uStack_c8._4_4_ = (float)((ulonglong)uStack_c8 >> 0x20);
          if (param_6[3] <= uStack_c8._4_4_) {
            uStack_c8._4_4_ = param_6[3];
          }
          uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar12);
        }
        FUN_18040a900(*plVar5,param_1,fVar13,&local_res10,iVar6,&local_d0,param_5,0,0,
                      param_6 != (float *)0x0);
      }
    }
    else {
      iVar6 = -1;
      fVar9 = fVar2 - fVar9 * _DAT_1808ac244;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      if (fVar9 < 0.0) {
        fVar9 = (float)FUN_18051af10();
      }
      else {
        fVar9 = SQRT(fVar9);
      }
      iVar7 = (int)((fVar2 - fVar9) * fVar3 + DAT_1808ac1f4) << 0x18;
      bVar8 = param_6 != (float *)0x0;
      do {
        local_res14 = fVar14 + fVar12;
        local_res10 = (float)iVar6 + fVar10;
        if ((iVar7 != 0) && (*param_5 != '\0')) {
          fVar9 = *(float *)(param_2 + 1);
          if (*param_2 == 0) {
            plVar5 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
          }
          else {
            plVar5 = param_2;
          }
          if (fVar9 == 0.0) {
            fVar9 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
          }
          local_d0 = *(undefined8 *)(param_1 + 0x60);
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          if (param_6 != (float *)0x0) {
            local_d0._4_4_ = (float)((ulonglong)local_d0 >> 0x20);
            if ((float)local_d0 <= *param_6) {
              local_d0._0_4_ = *param_6;
            }
            if (local_d0._4_4_ <= param_6[1]) {
              local_d0._4_4_ = param_6[1];
            }
            fVar13 = (float)uStack_c8;
            if (param_6[2] <= (float)uStack_c8) {
              fVar13 = param_6[2];
            }
            uStack_c8._4_4_ = (float)((ulonglong)uStack_c8 >> 0x20);
            if (param_6[3] <= uStack_c8._4_4_) {
              uStack_c8._4_4_ = param_6[3];
            }
            uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar13);
          }
          FUN_18040a900(*plVar5,param_1,fVar9,&local_res10,iVar7,&local_d0,param_5,0,0,bVar8);
        }
        if (((iVar6 == 0) || (local_res14 = fVar14 + 0.0, iVar7 == 0)) || (*param_5 == '\0')) {
          local_res14 = fVar14 + fVar2;
          if (iVar7 != 0) goto LAB_1803ab548;
        }
        else {
          fVar9 = *(float *)(param_2 + 1);
          if (*param_2 == 0) {
            plVar5 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
          }
          else {
            plVar5 = param_2;
          }
          if (fVar9 == 0.0) {
            fVar9 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
          }
          local_d0 = *(undefined8 *)(param_1 + 0x60);
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          if (param_6 != (float *)0x0) {
            local_d0._4_4_ = (float)((ulonglong)local_d0 >> 0x20);
            if ((float)local_d0 <= *param_6) {
              local_d0._0_4_ = *param_6;
            }
            if (local_d0._4_4_ <= param_6[1]) {
              local_d0._4_4_ = param_6[1];
            }
            fVar13 = (float)uStack_c8;
            if (param_6[2] <= (float)uStack_c8) {
              fVar13 = param_6[2];
            }
            uStack_c8._4_4_ = (float)((ulonglong)uStack_c8 >> 0x20);
            if (param_6[3] <= uStack_c8._4_4_) {
              uStack_c8._4_4_ = param_6[3];
            }
            uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar13);
          }
          FUN_18040a900(*plVar5,param_1,fVar9,&local_res10,iVar7,&local_d0,param_5,0,0,bVar8);
LAB_1803ab548:
          local_res14 = fVar14 + fVar2;
          if (*param_5 != '\0') {
            fVar9 = *(float *)(param_2 + 1);
            if (*param_2 == 0) {
              plVar5 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
            }
            else {
              plVar5 = param_2;
            }
            if (fVar9 == 0.0) {
              fVar9 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
            }
            local_d0 = *(undefined8 *)(param_1 + 0x60);
            uStack_c8 = *(undefined8 *)(param_1 + 0x68);
            if (param_6 != (float *)0x0) {
              local_d0._4_4_ = (float)((ulonglong)local_d0 >> 0x20);
              if ((float)local_d0 <= *param_6) {
                local_d0._0_4_ = *param_6;
              }
              if (local_d0._4_4_ <= param_6[1]) {
                local_d0._4_4_ = param_6[1];
              }
              fVar13 = (float)uStack_c8;
              if (param_6[2] <= (float)uStack_c8) {
                fVar13 = param_6[2];
              }
              uStack_c8._4_4_ = (float)((ulonglong)uStack_c8 >> 0x20);
              if (param_6[3] <= uStack_c8._4_4_) {
                uStack_c8._4_4_ = param_6[3];
              }
              uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar13);
            }
            FUN_18040a900(*plVar5,param_1,fVar9,&local_res10,iVar7,&local_d0,param_5,0,0,bVar8);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
      param_4 = local_res20;
    }
    if (((param_4 & 0xff000000) != 0) && (*param_5 != '\0')) {
      fVar12 = *(float *)(param_2 + 1);
      if (*param_2 == 0) {
        param_2 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
      }
      if (fVar12 == 0.0) {
        fVar12 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
      }
      local_d0 = *(undefined8 *)(param_1 + 0x60);
      uStack_c8 = *(undefined8 *)(param_1 + 0x68);
      if (param_6 != (float *)0x0) {
        local_d0._4_4_ = (float)((ulonglong)local_d0 >> 0x20);
        if ((float)local_d0 <= *param_6) {
          local_d0._0_4_ = *param_6;
        }
        if (local_d0._4_4_ <= param_6[1]) {
          local_d0._4_4_ = param_6[1];
        }
        fVar9 = (float)uStack_c8;
        if (param_6[2] <= (float)uStack_c8) {
          fVar9 = param_6[2];
        }
        uStack_c8._4_4_ = (float)((ulonglong)uStack_c8 >> 0x20);
        if (param_6[3] <= uStack_c8._4_4_) {
          uStack_c8._4_4_ = param_6[3];
        }
        uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar9);
      }
      FUN_18040a900(*param_2,param_1,fVar12,&local_d8,param_4,&local_d0,param_5,0,0,
                    param_6 != (float *)0x0);
    }
  }
  return;
}



/* ===== 1803ab850 FUN_1803ab850 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1803ab850(undefined8 *param_1,float *param_2,int param_3,char param_4,float *param_5,
             float *param_6)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = param_2[2];
  fVar5 = *param_2;
  fVar4 = (fVar2 + fVar5) * DAT_1808ac1f4;
  fVar1 = (float)FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)fVar4) & _DAT_1808ade90 ^ (uint)fVar4)
                               + fVar4);
  fVar4 = *param_5;
  if (param_3 == 0) {
    fVar5 = (((fVar5 - DAT_1808ac540) - fVar4) - DAT_1808ac34c) - *param_6;
    if (param_4 == '\0') {
      fVar4 = param_2[1] + param_6[1];
    }
    else {
      fVar4 = param_2[1] - param_6[1];
    }
  }
  else if (param_3 == 1) {
    if (param_4 == '\0') {
      fVar5 = fVar1 - fVar4 * DAT_1808ac1f4;
    }
    fVar5 = fVar5 - *param_6;
    fVar4 = (((param_2[1] - DAT_1808ac540) - param_5[1]) - DAT_1808ac34c) - param_6[1];
  }
  else if (param_3 == 2) {
    if (param_4 == '\0') {
      fVar5 = 0.0;
    }
    else {
      fVar5 = DAT_1808ac34c;
    }
    fVar4 = param_2[1] + param_6[1];
    fVar5 = fVar2 + DAT_1808ac540 + fVar5 + *param_6;
  }
  else {
    if (param_3 != 3) {
      *param_1 = 0;
      return param_1;
    }
    if (param_4 == '\0') {
      fVar5 = fVar1 - fVar4 * DAT_1808ac1f4;
      fVar2 = 0.0;
    }
    else {
      fVar2 = DAT_1808ac34c;
    }
    fVar5 = *param_6 + fVar5;
    fVar4 = param_2[3] + DAT_1808ac540 + fVar2 + param_6[1];
  }
  uVar3 = FUN_18053fc00(fVar5);
  *(undefined4 *)param_1 = uVar3;
  uVar3 = FUN_18053fc00(fVar4);
  *(undefined4 *)((longlong)param_1 + 4) = uVar3;
  return param_1;
}



/* ===== 1803aba20 FUN_1803aba20 ===== */

float * FUN_1803aba20(float *param_1,int param_2,longlong param_3,float param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_2 == 7) {
    if (*(int *)(param_3 + 0x10) != 0) {
      if (DAT_1808acb08 < param_4) {
        uVar1 = *(undefined8 *)(param_3 + 0x4c);
        *(undefined8 *)param_1 = *(undefined8 *)(param_3 + 0x44);
        *(undefined8 *)(param_1 + 2) = uVar1;
        return param_1;
      }
      if (param_4 <= DAT_1808aca80) {
        fVar3 = 0.0;
        if (0.0 <= param_4) {
          fVar3 = param_4;
        }
        fVar8 = *(float *)(param_3 + 0x24);
        fVar3 = fVar3 / DAT_1808aca80;
        fVar6 = (*(float *)(param_3 + 0x3c) - *(float *)(param_3 + 0x2c)) * fVar3 +
                *(float *)(param_3 + 0x2c);
        fVar7 = (*(float *)(param_3 + 0x38) - *(float *)(param_3 + 0x28)) * fVar3 +
                *(float *)(param_3 + 0x28);
        fVar4 = *(float *)(param_3 + 0x30);
        fVar5 = (*(float *)(param_3 + 0x34) - fVar8) * fVar3;
        fVar3 = (*(float *)(param_3 + 0x40) - fVar4) * fVar3;
      }
      else {
        fVar8 = *(float *)(param_3 + 0x34);
        fVar3 = (param_4 - DAT_1808aca80) / DAT_1808aca80;
        fVar6 = (*(float *)(param_3 + 0x4c) - *(float *)(param_3 + 0x3c)) * fVar3 +
                *(float *)(param_3 + 0x3c);
        fVar7 = (*(float *)(param_3 + 0x48) - *(float *)(param_3 + 0x38)) * fVar3 +
                *(float *)(param_3 + 0x38);
        fVar4 = *(float *)(param_3 + 0x40);
        fVar5 = (*(float *)(param_3 + 0x44) - fVar8) * fVar3;
        fVar3 = (*(float *)(param_3 + 0x50) - fVar4) * fVar3;
      }
      *param_1 = fVar5 + fVar8;
      param_1[1] = fVar7;
      param_1[2] = fVar6;
      param_1[3] = fVar3 + fVar4;
      return param_1;
    }
LAB_1803aba47:
    uVar1 = *(undefined8 *)(param_3 + 0x1c);
    *(undefined8 *)param_1 = *(undefined8 *)(param_3 + 0x14);
    *(undefined8 *)(param_1 + 2) = uVar1;
    return param_1;
  }
  if (param_2 == 9) {
    if (*(int *)(param_3 + 0x10) != 0) {
      lVar2 = 0x24;
      if (DAT_1808ac1f4 < param_4) {
        lVar2 = 0x34;
      }
      uVar1 = ((undefined8 *)(lVar2 + param_3))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + param_3);
      *(undefined8 *)(param_1 + 2) = uVar1;
      return param_1;
    }
    goto LAB_1803aba47;
  }
  if ((param_2 != 0xf) || (*(int *)(param_3 + 0x10) == 0)) goto LAB_1803aba47;
  fVar3 = 0.0;
  if (0.0 <= param_4) {
    fVar3 = DAT_1808ac34c;
    if (param_4 <= DAT_1808ac34c) {
      fVar3 = param_4;
    }
    fVar8 = DAT_1808ac34c;
    if (DAT_1808ac2cc < fVar3) goto LAB_1803abaa2;
  }
  if (fVar3 <= DAT_1808ac1f4) {
    fVar3 = DAT_1808ac1f4;
  }
  fVar8 = (fVar3 - DAT_1808ac1f4) / DAT_1808ac1b0;
LAB_1803abaa2:
  fVar3 = *(float *)(param_3 + 0x30);
  fVar4 = *(float *)(param_3 + 0x40);
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  fVar5 = (float)*(undefined8 *)(param_3 + 0x28);
  fVar6 = (float)((ulonglong)*(undefined8 *)(param_3 + 0x28) >> 0x20);
  *param_1 = (*(float *)(param_3 + 0x34) - *(float *)(param_3 + 0x24)) * fVar8 +
             *(float *)(param_3 + 0x24);
  *(ulonglong *)(param_1 + 1) =
       CONCAT44(((float)((ulonglong)uVar1 >> 0x20) - fVar6) * fVar8 + fVar6,
                ((float)uVar1 - fVar5) * fVar8 + fVar5);
  param_1[3] = (fVar4 - fVar3) * fVar8 + fVar3;
  return param_1;
}



/* ===== 1803abc70 FUN_1803abc70 ===== */

void FUN_1803abc70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  char cVar1;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar2;
  undefined8 local_38 [3];
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  if (DAT_1811079e0 != 0) {
    cVar1 = FUN_180369310();
    if (cVar1 != '\0') {
      FUN_180369c70(param_1,param_2,param_3,0,param_5,CONCAT44(uVar2,param_4),0,0);
      return;
    }
  }
  local_38[0] = 0;
  FUN_1804000e0(param_1,param_2,param_3,param_4,param_5,local_38,0,0);
  return;
}



/* ===== 1803abd30 FUN_1803abd30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1803abd30(undefined8 *param_1,longlong *param_2,ulonglong param_3,undefined8 *param_4,
             float *param_5,float param_6)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_res10;
  char local_e8;
  char local_e7 [7];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  
  lVar6 = DAT_180ca0a50;
  lVar4 = *(longlong *)(*param_2 + 0x48);
  if (lVar4 == 0) {
    *param_1 = *param_4;
    return param_1;
  }
  uVar1 = *(undefined8 *)(*param_2 + 0x2c);
  fVar16 = (float)uVar1;
  fVar17 = (float)((ulonglong)uVar1 >> 0x20);
  fVar14 = (float)*param_4 - fVar16;
  fVar15 = (float)((ulonglong)*param_4 >> 0x20) - fVar17;
  uVar1 = *(undefined8 *)(DAT_180ca0a50 + 0x110);
  fVar20 = (float)((ulonglong)uVar1 >> 0x20);
  lVar11 = param_3 * 0x34 + lVar4;
  cVar8 = *(char *)(lVar11 + 0x2b);
  if (cVar8 != '\0') {
    if (*(char *)(DAT_180ca0a50 + 0x118) == '\0') {
      *(undefined1 *)(lVar11 + 0x2b) = 0;
      cVar8 = '\0';
    }
    if (cVar8 != '\0') {
      *(undefined2 *)(lVar11 + 0x29) = 0x101;
      *(ulonglong *)(lVar4 + 0x944) =
           CONCAT44((float)((ulonglong)*(undefined8 *)param_5 >> 0x20) * _UNK_1808ad9f4,
                    (float)*(undefined8 *)param_5 * _DAT_1808ad9f0);
    }
  }
  fVar5 = DAT_1808ac34c;
  cVar8 = *(char *)(lVar11 + 0x29);
  if (cVar8 == '\0') {
    *(ulonglong *)(lVar11 + 0x20) = CONCAT44(fVar15,fVar14);
    if ((*(float *)(lVar11 + 0x18) == 0.0) && (*(float *)(lVar11 + 0x1c) == 0.0)) {
      *(ulonglong *)(lVar11 + 0x18) = CONCAT44(fVar15,fVar14);
    }
    fVar20 = DAT_1808ac864;
    fVar19 = *(float *)(lVar11 + 0x18);
    if (fVar14 - fVar19 <= fVar5) {
      if (fVar5 < fVar19 - fVar14) {
        fVar18 = (fVar19 - fVar14) * DAT_1808ac864;
        fVar14 = fVar5;
        if (fVar5 <= fVar18) {
          fVar14 = fVar18;
        }
        fVar19 = fVar19 - fVar14 * *(float *)(lVar6 + 0x40);
        goto LAB_1803abf2e;
      }
    }
    else {
      fVar18 = (fVar14 - fVar19) * DAT_1808ac864;
      fVar14 = fVar5;
      if (fVar5 <= fVar18) {
        fVar14 = fVar18;
      }
      fVar19 = fVar14 * *(float *)(lVar6 + 0x40) + fVar19;
LAB_1803abf2e:
      *(float *)(lVar11 + 0x18) = fVar19;
    }
    fVar14 = *(float *)(lVar11 + 0x1c);
    if (fVar15 - fVar14 <= fVar5) {
      if (fVar5 < fVar14 - fVar15) {
        fVar20 = (fVar14 - fVar15) * fVar20;
        fVar15 = fVar5;
        if (fVar5 <= fVar20) {
          fVar15 = fVar20;
        }
        *(float *)(lVar11 + 0x1c) = fVar14 - fVar15 * *(float *)(lVar6 + 0x40);
      }
    }
    else {
      fVar20 = (fVar15 - fVar14) * fVar20;
      fVar15 = fVar5;
      if (fVar5 <= fVar20) {
        fVar15 = fVar20;
      }
      *(float *)(lVar11 + 0x1c) = fVar15 * *(float *)(lVar6 + 0x40) + fVar14;
    }
    fVar20 = *(float *)(lVar11 + 0x1c);
  }
  else {
    if (*(char *)(lVar11 + 0x2a) == '\0') {
      *(ulonglong *)(lVar4 + 0x944) =
           CONCAT44(fVar20 - (fVar15 + fVar17),(float)uVar1 - (fVar14 + fVar16));
      cVar8 = *(char *)(lVar11 + 0x29);
    }
    fVar19 = (float)uVar1 - ((float)*(undefined8 *)(lVar4 + 0x944) + fVar16);
    fVar20 = fVar20 - ((float)((ulonglong)*(undefined8 *)(lVar4 + 0x944) >> 0x20) + fVar17);
    *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar11 + 0x20);
    *(ulonglong *)(lVar11 + 0x20) = CONCAT44(fVar20,fVar19);
  }
  local_d0 = DAT_1808ac658;
  fVar19 = fVar19 + fVar16;
  fVar20 = fVar20 + fVar17;
  *(char *)(lVar11 + 0x2a) = cVar8;
  iVar13 = (int)param_3;
  local_d8 = fVar19 - local_d0;
  local_d4 = fVar20 - param_6;
  local_d0 = fVar19 + *param_5 + local_d0;
  local_cc = fVar20 + param_5[1] + param_6;
  local_res10 = param_2;
  local_e0 = fVar19;
  local_dc = fVar20;
  FUN_1803e8a70(param_3 & 0xffffffff);
  uVar9 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##esp_item");
  lVar10 = DAT_180ca0a50;
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar10 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  local_e7[0] = '\0';
  local_e8 = '\0';
  if (*(char *)(lVar11 + 0x2b) != '\0') {
    *(undefined1 *)(*(longlong *)(lVar10 + 0x14f8) + 0xce) = 1;
    FUN_1803dd660(uVar9,*(undefined8 *)(lVar10 + 0x14f8));
    lVar10 = DAT_180ca0a50;
    *(undefined1 *)(DAT_180ca0a50 + 0x158d) = 0;
    *(undefined4 *)(lVar10 + 0x1cc0) = uVar9;
    *(undefined4 *)(lVar10 + 0x1cbc) = uVar9;
    *(undefined2 *)(lVar10 + 0x1cc4) = 0;
  }
  cVar8 = FUN_1803ec2f0(&local_d8,uVar9,0,2);
  if (cVar8 != '\0') {
    FUN_180415270(&local_d8,uVar9,local_e7,&local_e8,0);
  }
  if (local_e8 != '\0') {
    *(undefined1 *)(lVar11 + 0x2b) = 0;
  }
  *(char *)(lVar11 + 0x28) = local_e8;
  if ((local_e8 != '\0') && (*(char *)(lVar11 + 0x29) == '\0')) {
    *(undefined8 *)(lVar4 + 0x93c) = uVar1;
  }
  *(char *)(lVar11 + 0x29) = local_e8;
  lVar10 = DAT_180ca0a50;
  if (local_e7[0] == '\0') {
    if (*(int *)(lVar4 + 0x988) != iVar13) {
      fVar14 = 0.0;
      goto LAB_1803ac163;
    }
  }
  else {
    *(int *)(lVar4 + 0x994) = iVar13;
    *(undefined4 *)(lVar10 + 0x1d08) = uVar9;
    *(undefined4 *)(lVar10 + 0x1d04) = uVar9;
    *(undefined2 *)(lVar10 + 0x1d0c) = 0;
  }
  fVar14 = fVar5;
LAB_1803ac163:
  fVar14 = (float)FUN_1803aac50(lVar11,fVar14,*(undefined4 *)(lVar6 + 0x40),DAT_1808ac118);
  plVar7 = local_res10;
  if (((local_e8 == '\0') && (local_e7[0] != '\0')) &&
     (*(int *)(lVar4 + 0x98c) = iVar13, *(float *)(lVar6 + 0xba0) == 0.0)) {
    *(int *)(lVar4 + 0x990) = iVar13;
  }
  if (0.0 < fVar14) {
    fVar14 = fVar14 * DAT_1808ac27c;
    puVar12 = (undefined8 *)*local_res10;
    uVar3 = *(uint *)(puVar12[9] + 0x980);
    fVar18 = (float)(uVar3 & 0xff) * DAT_1808abfe4;
    fVar17 = (float)(uVar3 >> 8 & 0xff) * DAT_1808abfe4;
    fVar15 = (float)(uVar3 >> 0x10 & 0xff) * DAT_1808abfe4;
    fVar16 = (float)(uVar3 >> 0x18) * DAT_1808abfe4;
    local_res10 = (longlong *)CONCAT44(fVar20 + param_5[1],fVar19 + *param_5);
    local_bc = fVar14 * DAT_1808ac1f4 * fVar16;
    if (fVar5 <= local_bc) {
      local_bc = fVar5;
    }
    local_c8 = fVar18;
    local_c4 = fVar17;
    local_c0 = fVar15;
    uVar9 = FUN_1803d7f30(&local_c8);
    FUN_1803fe590(*puVar12,&local_e0,&local_res10,uVar9,0,0);
    local_bc = fVar16 * fVar14;
    if (fVar5 <= local_bc) {
      local_bc = fVar5;
    }
    local_c8 = fVar18;
    local_c4 = fVar17;
    local_c0 = fVar15;
    uVar9 = FUN_1803d7f30(&local_c8);
    FUN_1803abc70(*(undefined8 *)*plVar7,&local_e0,&local_res10,uVar9,DAT_1808ac900);
  }
  *param_1 = CONCAT44(fVar20,fVar19);
  return param_1;
}



/* ===== 1803ac370 FUN_1803ac370 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803ac370(longlong *param_1,float *param_2,float param_3,float param_4,char param_5,
                  float param_6,float param_7,float *param_8,float param_9)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
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
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined8 local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0 [4];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  ulonglong local_c0;
  
  fVar4 = DAT_1808ac34c;
  local_c0 = DAT_180919500 ^ (ulonglong)auStack_138;
  lVar1 = param_1[2];
  if ((*(byte *)(lVar1 + 0x113c) & 0xf) == 0) {
    return;
  }
  if (param_6 <= 0.0) {
    return;
  }
  if (param_9 <= 0.0) {
    return;
  }
  if (param_3 <= 0.0) {
    return;
  }
  puVar2 = (undefined8 *)*param_1;
  local_e4 = param_4;
  if (*(char *)(puVar2 + 4) == '\0') {
    lVar3 = param_1[1];
    if (*(char *)(lVar3 + 0x4d0) == '\0') {
      return;
    }
    local_100 = *(float *)(lVar3 + 0x4d8);
    local_f8 = *(float *)(lVar3 + 0x4dc);
    fVar15 = *(float *)(lVar3 + 0x4d4);
  }
  else {
    fVar15 = param_6 * DAT_1808ac1b0;
    local_f8 = DAT_1808ac34c;
    local_100 = (float)FUN_180519fe0((float)*(double *)(DAT_180ca0a50 + 0x10) +
                                     (float)*(double *)(DAT_180ca0a50 + 0x10),DAT_1808ac34c);
  }
  fVar14 = param_6 / DAT_1808acb08;
  local_e0[1] = 0.0;
  if (0.0 <= param_6 - fVar15) {
    local_e0[1] = param_6 - fVar15;
  }
  local_e0[2] = fVar4;
  if (fVar14 <= fVar4) {
    local_e0[2] = fVar14;
  }
  local_e0[1] = local_e0[1] / DAT_1808acb08;
  if (local_e0[1] <= 0.0) {
    local_fc = 0.0;
  }
  else {
    local_e0[0] = 0.02;
    pfVar8 = local_e0;
    if (DAT_1808ac01c <= local_e0[1]) {
      pfVar8 = local_e0 + 1;
    }
    pfVar7 = local_e0 + 2;
    if (local_e0[1] <= local_e0[2]) {
      pfVar7 = pfVar8;
    }
    local_fc = *pfVar7;
  }
  fVar15 = param_7 / param_3;
  if (local_e0[2] <= param_7 / param_3) {
    fVar15 = local_e0[2];
  }
  if (fVar15 <= local_fc) {
    return;
  }
  if (*(int *)(lVar1 + 0x1140) != 0) {
    local_f0 = *(float *)(lVar1 + 0x1154);
    local_ec = *(float *)(lVar1 + 0x1158);
    local_e8 = *(float *)(lVar1 + 0x115c);
    fVar14 = *(float *)(lVar1 + 0x1164);
    fVar17 = *(float *)(lVar1 + 0x1168);
    fVar18 = *(float *)(lVar1 + 0x116c);
    fVar16 = *(float *)(lVar1 + 0x1170);
    fVar9 = *(float *)(lVar1 + 0x1160);
    goto LAB_1803ac672;
  }
  local_f0 = *(float *)(lVar1 + 0x1144);
  local_ec = *(float *)(lVar1 + 0x1148);
  local_e8 = *(float *)(lVar1 + 0x114c);
  fVar9 = *(float *)(lVar1 + 0x1150);
  if (param_7 <= 0.0) {
    param_7 = fVar4;
LAB_1803ac5a2:
    fVar16 = fVar4;
    if (param_7 <= fVar4) {
      fVar16 = param_7;
    }
  }
  else {
    param_7 = (param_3 * fVar14) / param_7;
    if (0.0 <= param_7) goto LAB_1803ac5a2;
    fVar16 = 0.0;
  }
  fVar14 = (param_8[4] - *param_8) * fVar16 + *param_8;
  fVar17 = (param_8[5] - param_8[1]) * fVar16 + param_8[1];
  fVar18 = (param_8[6] - param_8[2]) * fVar16 + param_8[2];
  fVar16 = (param_8[7] - param_8[3]) * fVar16 + param_8[3];
LAB_1803ac672:
  fVar13 = local_100 + local_100;
  if (DAT_1808ac1f4 <= local_100) {
    fVar13 = fVar13 - fVar4;
  }
  fVar12 = 0.0;
  iVar5 = 2;
  fVar11 = DAT_1808ac1f4;
  fVar10 = fVar4;
  do {
    if ((fVar4 - fVar11) * DAT_1808ac490 * fVar11 * fVar11 + fVar11 * fVar11 * fVar11 < fVar13) {
      fVar12 = fVar11;
      fVar11 = fVar10;
    }
    fVar10 = (fVar11 + fVar12) * DAT_1808ac1f4;
    if ((fVar4 - fVar10) * DAT_1808ac490 * fVar10 * fVar10 + fVar10 * fVar10 * fVar10 < fVar13) {
      fVar12 = fVar10;
      fVar10 = fVar11;
    }
    fVar11 = (fVar10 + fVar12) * DAT_1808ac1f4;
    if ((fVar4 - fVar11) * DAT_1808ac490 * fVar11 * fVar11 + fVar11 * fVar11 * fVar11 < fVar13) {
      fVar12 = fVar11;
      fVar11 = fVar10;
    }
    fVar10 = (fVar11 + fVar12) * DAT_1808ac1f4;
    if ((fVar4 - fVar10) * DAT_1808ac490 * fVar10 * fVar10 + fVar10 * fVar10 * fVar10 < fVar13) {
      fVar12 = fVar10;
      fVar10 = fVar11;
    }
    fVar11 = (fVar10 + fVar12) * DAT_1808ac1f4;
    if ((fVar4 - fVar11) * DAT_1808ac490 * fVar11 * fVar11 + fVar11 * fVar11 * fVar11 < fVar13) {
      fVar12 = fVar11;
      fVar11 = fVar10;
    }
    fVar10 = (fVar11 + fVar12) * DAT_1808ac1f4;
    if ((fVar4 - fVar10) * DAT_1808ac490 * fVar10 * fVar10 + fVar10 * fVar10 * fVar10 < fVar13) {
      fVar12 = fVar10;
      fVar10 = fVar11;
    }
    fVar11 = (fVar10 + fVar12) * DAT_1808ac1f4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  fVar13 = (DAT_1808ac658 - (fVar11 + fVar11)) * fVar11 * fVar11;
  if (DAT_1808ac1f4 <= local_100) {
    fVar13 = fVar4 - fVar13;
  }
  param_9 = local_f8 * param_9;
  local_d0 = (fVar14 - local_f0) * fVar13 + local_f0;
  local_cc = (fVar17 - local_ec) * fVar13 + local_ec;
  local_c8 = (fVar18 - local_e8) * fVar13 + local_e8;
  if (0.0 <= param_9) {
    fVar14 = fVar4;
    if (param_9 <= fVar4) {
      fVar14 = param_9;
    }
  }
  else {
    fVar14 = 0.0;
  }
  fVar17 = *param_2;
  fVar18 = param_2[1];
  local_108 = *(undefined8 *)param_2;
  local_c4 = ((fVar16 - fVar9) * fVar13 + fVar9) * fVar14 * *(float *)((longlong)puVar2 + 0x24);
  if (param_5 == '\0') {
    fVar15 = (float)FUN_18053fc00((fVar4 - fVar15) * param_3);
    fVar9 = fVar17 + local_e4;
    fVar15 = local_108._4_4_ + fVar15;
    local_f8 = fVar9;
    local_108._4_4_ = fVar15;
    local_f4 = (float)FUN_18053fc00((fVar4 - local_fc) * param_3);
    fVar14 = (float)local_108;
  }
  else {
    fVar14 = (float)FUN_18053fc00(param_3 * local_fc);
    fVar14 = (float)local_108 + fVar14;
    local_108._0_4_ = fVar14;
    fVar9 = (float)FUN_18053fc00(param_3 * fVar15);
    fVar9 = fVar9 + fVar17;
    fVar15 = local_108._4_4_;
    local_f8 = fVar9;
    local_f4 = local_e4;
  }
  local_f4 = fVar18 + local_f4;
  if ((fVar14 < fVar9) && (fVar15 < local_f4)) {
    uVar6 = FUN_1803aab30(&local_d0,fVar4);
    local_110 = 0;
    local_118 = 0;
    FUN_1803fe590(*puVar2,&local_108,&local_f8,uVar6);
  }
  return;
}



/* ===== 1803aca70 FUN_1803aca70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803aca70(longlong *param_1,ulonglong param_2,int param_3,float *param_4,float *param_5)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  float *pfVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 *******pppppppuVar15;
  longlong lVar16;
  double *pdVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *******pppppppuVar20;
  undefined1 *puVar21;
  uint uVar22;
  float *pfVar23;
  undefined8 *puVar24;
  ulonglong *puVar25;
  undefined1 *puVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [24];
  float *local_288;
  float local_280;
  float local_258;
  float local_254;
  float local_250;
  undefined8 local_248;
  float local_240;
  float local_23c;
  float local_238;
  ulonglong local_230;
  float local_228;
  undefined8 local_220;
  float *local_218;
  ulonglong local_208;
  uint5 uStack_200;
  undefined3 uStack_1fb;
  float local_1f8;
  int local_1f4;
  float local_1f0;
  undefined8 local_1e8;
  double *local_1e0;
  float local_1d8 [2];
  longlong local_1d0;
  float local_1c8;
  float local_1c4;
  undefined4 *local_1c0;
  undefined4 *local_1b8;
  undefined4 *local_1b0;
  undefined4 *local_1a8;
  undefined4 *local_1a0;
  undefined4 *local_198;
  undefined1 *local_190;
  undefined2 *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  uint local_160;
  undefined8 *******local_158;
  longlong lStack_150;
  longlong local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  uint local_108;
  undefined8 *******local_100 [2];
  longlong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  
  uVar7 = DAT_1808ac118;
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_2a8;
  fVar40 = 0.0;
  local_230 = param_2;
  local_218 = param_4;
  local_1f4 = param_3;
  if (*(char *)(*param_1 + 0x20) == '\0') {
    local_208 = (ulonglong)*(uint *)(*param_1 + 0x1c) << 8 | param_2;
    plVar11 = (longlong *)FUN_1803b68b0(0,&local_180,&local_208);
    lVar16 = *plVar11;
    local_1d0 = lVar16 + 0x18;
    *(longlong *)(lVar16 + 0x90) = param_1[5];
    fVar39 = DAT_1808ac34c;
    local_238 = (float)FUN_1803aac50(local_1d0,lVar16,(int)param_1[4]);
    pfVar23 = (float *)(lVar16 + 0x60);
    pppppppuVar20 = (undefined8 *******)(lVar16 + 0x68);
    puVar26 = (undefined1 *)(lVar16 + 100);
    puVar24 = (undefined8 *)(lVar16 + 0x78);
    puVar25 = (ulonglong *)(lVar16 + 0x80);
    local_1e0 = (double *)(lVar16 + 0x88);
    local_1c0 = (undefined4 *)(lVar16 + 0x30);
    local_1b8 = (undefined4 *)(lVar16 + 0x30);
    local_1b0 = (undefined4 *)(lVar16 + 0x34);
    local_1a8 = (undefined4 *)(lVar16 + 0x38);
    local_1a0 = (undefined4 *)(lVar16 + 0x3c);
    local_198 = (undefined4 *)(lVar16 + 0x40);
    local_190 = (undefined1 *)(lVar16 + 0x44);
    local_188 = (undefined2 *)(lVar16 + 0x45);
    local_1e8 = (double *)(lVar16 + 0x88);
    local_138 = lVar16 + 0x48;
  }
  else {
    local_1d0 = 0;
    local_238 = DAT_1808ac34c;
    pfVar23 = (float *)&DAT_00000048;
    pppppppuVar20 = (undefined8 *******)&DAT_00000050;
    puVar26 = &DAT_0000004c;
    puVar24 = (undefined8 *)&DAT_00000060;
    puVar25 = (ulonglong *)&DAT_00000068;
    local_1e0 = (double *)&DAT_00000070;
    local_1c0 = (undefined4 *)&DAT_00000018;
    local_1b8 = (undefined4 *)&DAT_00000018;
    local_1b0 = (undefined4 *)&DAT_0000001c;
    local_1a8 = (undefined4 *)&DAT_00000020;
    local_1a0 = (undefined4 *)&DAT_00000024;
    local_198 = (undefined4 *)&DAT_00000028;
    local_190 = &DAT_0000002c;
    local_188 = (undefined2 *)&DAT_0000002d;
    local_1e8 = (double *)&DAT_00000070;
    local_138 = 0x30;
    fVar39 = DAT_1808ac34c;
  }
  fVar32 = local_238;
  fVar30 = *param_5;
  local_228 = fVar30;
  FUN_180024b50(local_100,param_5 + 2);
  if (local_1d0 != 0) {
    if (*(char *)(param_5 + 1) == '\0') {
      fVar30 = *pfVar23;
      local_228 = fVar30;
      if (local_100 != (undefined8 ********)pppppppuVar20) {
        if (0xf < *puVar25) {
          pppppppuVar20 = (undefined8 *******)*pppppppuVar20;
        }
        FUN_180029840(local_100,pppppppuVar20,*puVar24);
      }
    }
    else {
      *pfVar23 = fVar30;
      if ((undefined8 ********)pppppppuVar20 != local_100) {
        pppppppuVar15 = local_100;
        if (0xf < local_e8) {
          pppppppuVar15 = local_100[0];
        }
        FUN_180029840(pppppppuVar20,pppppppuVar15,local_f0);
      }
      *puVar26 = 1;
    }
  }
  iVar14 = local_1f4;
  fVar31 = DAT_1808acb08;
  fVar34 = DAT_1808ac540;
  puVar26 = auStack_2a8;
  if ((fVar32 <= 0.0) && (*(char *)(*param_1 + 0x20) == '\0')) goto LAB_1803ad9b8;
  fVar37 = fVar39;
  if (0 < DAT_18091a1b4) {
    if (DAT_18091a1b4 < 100) {
      iVar6 = 100;
    }
    else {
      iVar6 = DAT_18091a1b4;
      if (200 < DAT_18091a1b4) {
        iVar6 = 200;
      }
    }
    fVar37 = (float)iVar6 / DAT_1808acb08;
  }
  if (DAT_18091a1b0 == '\0') {
    fVar37 = (float)(int)param_5[0xc];
  }
  else {
    fVar37 = (float)(int)((fVar37 - fVar39) * DAT_1808ac710) + DAT_1808ac540;
  }
  lVar16 = *param_1;
  bVar27 = (local_1f4 - 1U & 0xfffffffd) == 0;
  if (bVar27) {
    fVar36 = (float)((uint)(*(float *)(lVar16 + 0x10) - *(float *)(lVar16 + 8)) & _DAT_1808ade90) +
             DAT_1808ac1f4;
    local_240 = (float)FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)fVar36) & _DAT_1808ade90 ^
                                            (uint)fVar36) + fVar36);
    local_23c = fVar37;
    local_250 = local_240;
  }
  else {
    fVar36 = (float)((uint)(*(float *)(lVar16 + 0x14) - *(float *)(lVar16 + 0xc)) & _DAT_1808ade90);
    local_250 = (float)FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)fVar36) & _DAT_1808ade90 ^
                                            (uint)fVar36) + fVar36);
    local_240 = fVar37;
    local_23c = local_250;
  }
  local_258 = local_240;
  local_254 = local_23c;
  if (iVar14 == 0) {
    fVar32 = *(float *)(lVar16 + 0xc) - local_218[1];
LAB_1803acf14:
    uVar28 = FUN_18053fc00(fVar32);
    uVar29 = FUN_18053fc00();
    local_248 = CONCAT44(uVar28,uVar29);
    fVar32 = local_238;
  }
  else {
    if (iVar14 == 1) {
      fVar32 = (((*(float *)(lVar16 + 0xc) - fVar34) - local_23c) - fVar39) - local_218[1];
      goto LAB_1803acf14;
    }
    if (iVar14 == 2) {
      fVar32 = local_218[1] + *(float *)(lVar16 + 0xc);
      goto LAB_1803acf14;
    }
    if (iVar14 == 3) {
      fVar32 = *(float *)(lVar16 + 0x14) + fVar34 + fVar39 + local_218[1];
      goto LAB_1803acf14;
    }
    local_248 = 0;
  }
  uVar19 = local_230;
  local_280 = fVar34;
  local_288 = &local_258;
  FUN_1803abd30(&local_230,param_1,local_230,&local_248);
  local_1f8 = fVar30;
  local_1f0 = fVar39;
  if (local_1d0 != 0) {
    if (((fVar32 == 0.0) || (*local_1e0 < 0.0)) ||
       (DAT_1808ac4b0 <= (double)param_1[5] - *local_1e0)) {
      *local_1b8 = 0;
      *local_1b0 = 0;
      *local_1a8 = 0;
      *local_1a0 = 0;
      *local_198 = 0;
      *local_190 = 0;
      *local_188 = local_170._5_2_;
      *(undefined1 *)(local_188 + 1) = local_170._7_1_;
      puVar9 = local_1b8;
      pdVar17 = local_1e8;
    }
    else {
      puVar9 = local_1c0;
      pdVar17 = local_1e0;
    }
    fVar30 = (float)FUN_1803aac50(puVar9,pdVar17,(int)param_1[4],uVar7);
    *pdVar17 = (double)param_1[5];
    local_1f8 = fVar30;
    local_1f0 = (float)FUN_1803aac50(local_138);
  }
  puVar21 = auStack_2a8;
  fStack_11c = 0.0;
  local_118 = 0;
  uStack_110 = 0;
  uVar22 = 0;
  local_108 = local_108 & 0xffffff00;
  lVar16 = *(longlong *)(param_5 + 0x14);
  if (lVar16 == 0) {
    local_128 = param_5[0x16];
    fStack_124 = param_5[0x17];
    fStack_11c = param_5[0x19];
    local_118 = *(undefined8 *)(param_5 + 0x16);
    uStack_110 = *(undefined8 *)(param_5 + 0x18);
    fStack_120 = (float)*(undefined8 *)(param_5 + 0x18);
    fVar32 = fStack_11c;
  }
  else {
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    uVar22 = local_160 >> 8;
    local_160 = local_160 & 0xffffff00;
    if (*(int *)(lVar16 + 0x10) == 0) {
      local_1c8 = 0.75;
      local_1d8[0] = 0.25;
      local_1c4 = fVar30 / fVar31;
      pfVar23 = local_1d8;
      if (DAT_1808ac140 <= local_1c4) {
        pfVar23 = &local_1c4;
      }
      pfVar12 = &local_1c8;
      if (local_1c4 <= DAT_1808ac27c) {
        pfVar12 = pfVar23;
      }
      fVar32 = (*pfVar12 - DAT_1808ac140) + (*pfVar12 - DAT_1808ac140);
      local_128 = (*(float *)(lVar16 + 0x24) - *(float *)(lVar16 + 0x14)) * fVar32 +
                  *(float *)(lVar16 + 0x14);
      fStack_124 = (*(float *)(lVar16 + 0x28) - *(float *)(lVar16 + 0x18)) * fVar32 +
                   *(float *)(lVar16 + 0x18);
      fStack_120 = (*(float *)(lVar16 + 0x2c) - *(float *)(lVar16 + 0x1c)) * fVar32 +
                   *(float *)(lVar16 + 0x1c);
      fStack_11c = (*(float *)(lVar16 + 0x30) - *(float *)(lVar16 + 0x20)) * fVar32 +
                   *(float *)(lVar16 + 0x20);
      fVar36 = local_128;
      fVar31 = fStack_124;
      fVar33 = fStack_120;
      fVar32 = fStack_11c;
    }
    else if (*(int *)(lVar16 + 0x10) == 1) {
      local_128 = *(float *)(lVar16 + 0x34);
      fStack_124 = *(float *)(lVar16 + 0x38);
      local_180 = *(undefined8 *)(lVar16 + 0x34);
      fStack_120 = *(float *)(lVar16 + 0x3c);
      fStack_11c = *(float *)(lVar16 + 0x40);
      uStack_178 = *(undefined8 *)(lVar16 + 0x3c);
      fVar36 = local_128;
      fVar31 = fStack_124;
      fVar33 = fStack_120;
      fVar32 = fStack_11c;
    }
    else {
      fVar36 = *(float *)(lVar16 + 0x44);
      uVar10 = *(undefined8 *)(lVar16 + 0x44);
      fVar33 = *(float *)(lVar16 + 0x4c);
      uVar3 = *(undefined8 *)(lVar16 + 0x4c);
      fVar31 = fVar30 / fVar31;
      if (0.0 <= fVar31) {
        fVar32 = fVar39;
        if (fVar31 <= fVar39) {
          fVar32 = fVar31;
        }
      }
      else {
        fVar32 = 0.0;
      }
      fVar36 = (*(float *)(lVar16 + 0x54) - fVar36) * fVar32 + fVar36;
      fVar31 = (*(float *)(lVar16 + 0x58) - *(float *)(lVar16 + 0x48)) * fVar32 +
               *(float *)(lVar16 + 0x48);
      fVar33 = (*(float *)(lVar16 + 0x5c) - fVar33) * fVar32 + fVar33;
      fVar32 = (*(float *)(lVar16 + 0x60) - *(float *)(lVar16 + 0x50)) * fVar32 +
               *(float *)(lVar16 + 0x50);
      local_160 = CONCAT31((int3)uVar22,1);
      local_170 = CONCAT44(fVar31,fVar36);
      uStack_168 = CONCAT44(fVar32,fVar33);
      local_180._0_4_ = (float)uVar10;
      local_180._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
      uStack_178._0_4_ = (float)uVar3;
      uStack_178._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
      local_128 = (float)local_180;
      fStack_124 = local_180._4_4_;
      fStack_120 = (float)uStack_178;
      fStack_11c = uStack_178._4_4_;
      local_180 = uVar10;
      uStack_178 = uVar3;
    }
    local_118 = CONCAT44(fVar31,fVar36);
    uStack_110 = CONCAT44(fVar32,fVar33);
    local_108 = local_160;
    uVar22 = local_160;
  }
  fVar31 = *(float *)(*param_1 + 0x24);
  pfVar23 = (float *)((longlong)&uStack_110 + 4);
  if (fVar32 <= fStack_11c) {
    pfVar23 = &fStack_11c;
  }
  if (param_5[0xb] == 0.0) {
LAB_1803ad2b5:
    bVar4 = false;
  }
  else {
    if (*(char *)(*param_1 + 0x20) == '\0') {
      if (local_1f0 <= 0.0) goto LAB_1803ad2b5;
    }
    else if (((*(char *)((longlong)param_5 + 5) == '\0') && (*(char *)(param_5 + 0x12) == '\0')) &&
            (local_f0 == 0)) goto LAB_1803ad2b5;
    bVar4 = true;
  }
  lStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0xf;
  local_158 = (undefined8 *******)0x0;
  puVar26 = auStack_2a8;
  if (bVar4) {
    if (param_5[0xb] == 2.8026e-45) {
      uVar10 = FUN_18003a390(&local_180,(int)local_228);
      plVar11 = (longlong *)FUN_1800134a0(uVar10,&DAT_1806de738,1);
      pppppppuVar20 = (undefined8 *******)*plVar11;
      lVar16 = plVar11[1];
      lVar2 = plVar11[2];
      uVar13 = plVar11[3];
      plVar11[2] = 0;
      plVar11[3] = 0xf;
      *(undefined1 *)plVar11 = 0;
      if (0xf < uStack_140) {
        uVar18 = uStack_140 + 1;
        pppppppuVar15 = local_158;
        if (0xfff < uVar18) {
          pppppppuVar15 = (undefined8 *******)local_158[-1];
          if (0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)pppppppuVar15))) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar21 = auStack_2a0;
            goto LAB_1803ad38c;
          }
          uVar18 = uStack_140 + 0x28;
        }
        thunk_FUN_1803d64e0(pppppppuVar15,uVar18);
      }
      local_158 = pppppppuVar20;
      lStack_150 = lVar16;
      local_148 = lVar2;
      uStack_140 = uVar13;
      FUN_18000f890(&local_180);
      puVar26 = auStack_2a8;
    }
    else {
LAB_1803ad38c:
      pppppppuVar20 = local_100;
      if (0xf < local_e8) {
        pppppppuVar20 = local_100[0];
      }
      *(undefined8 *)(puVar21 + -8) = 0x1803ad3ac;
      FUN_180029840(&local_158,pppppppuVar20);
      puVar26 = puVar21;
    }
  }
  fVar32 = fVar31 * *(float *)(puVar26 + 0x70) * *pfVar23;
  iVar14 = (int)fVar37 + -2;
  if (iVar14 < 0) {
    iVar14 = 0;
  }
  if (4 < iVar14) {
    iVar14 = 4;
  }
  if (iVar14 == 0) {
    if (DAT_1811079f0 == 0) {
      local_208 = *(ulonglong *)(DAT_180ca0a50 + 0x11f0);
      _uStack_200 = CONCAT35(uStack_1fb,0x141200000);
    }
    else {
      local_208 = DAT_1811079f0;
      _uStack_200 = CONCAT35(uStack_1fb,0x141200000);
    }
  }
  else {
    local_208 = DAT_181107a28;
    if (DAT_181107a28 == 0) {
      local_208 = *(ulonglong *)(DAT_180ca0a50 + 0x11f0);
    }
    uStack_200 = (uint5)(uint)(*(float *)(&DAT_1806de2a8 + (longlong)iVar14 * 4) * _DAT_1808ac3cc);
  }
  if (local_148 == 0) {
    local_220 = 0;
  }
  else {
    pppppppuVar20 = &local_158;
    if (0xf < uStack_140) {
      pppppppuVar20 = local_158;
    }
    *(undefined8 *)(puVar26 + -8) = 0x1803ad485;
    FUN_1803ab060(&local_220,&local_208,pppppppuVar20);
  }
  if ((bVar27) && (local_148 != 0)) {
    fVar34 = (local_220._4_4_ - (fVar37 + fVar34)) * DAT_1808ac1f4;
    *(undefined8 *)(puVar26 + -8) = 0x1803ad4c8;
    fVar34 = (float)FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)fVar34) & _DAT_1808ade90 ^
                                         (uint)fVar34) + fVar34);
  }
  else {
    fVar34 = 0.0;
  }
  *(undefined4 *)(puVar26 + 0x50) = 0x42c80000;
  *(undefined4 *)(puVar26 + 0x60) = 0;
  pfVar23 = (float *)(puVar26 + 0x60);
  if (0.0 <= fVar30) {
    pfVar23 = &local_1f8;
  }
  pfVar12 = (float *)(puVar26 + 0x50);
  if (fVar30 <= DAT_1808acb08) {
    pfVar12 = pfVar23;
  }
  fVar30 = *pfVar12;
  fVar31 = *(float *)(puVar26 + 0x58);
  *(undefined8 *)(puVar26 + -8) = 0x1803ad51f;
  fVar33 = (float)FUN_18053fc00((fVar30 / DAT_1808acb08) * fVar31);
  fVar30 = *(float *)(puVar26 + 0x7c);
  fVar36 = *(float *)(puVar26 + 0x78);
  if (0.0 < fVar32) {
    uVar10 = *(undefined8 *)*param_1;
    if (*(char *)((longlong)param_5 + 0x35) != '\0') {
      *(undefined8 *)(puVar26 + -8) = 0x1803ad54d;
      fVar31 = (float)FUN_18033c790();
      fVar31 = fVar31 * DAT_1808ac864;
      local_138 = CONCAT44(*(float *)(puVar26 + 0x6c) + fVar30,*(float *)(puVar26 + 0x68) + fVar36);
      *(undefined8 *)(puVar26 + -8) = 0x1803ad585;
      uVar7 = FUN_1803aab30(param_5 + 0xe);
      *(float *)(puVar26 + 0x20) = fVar31;
      *(undefined8 *)(puVar26 + -8) = 0x1803ad59f;
      FUN_1803abc70(uVar10,puVar26 + 0x78,&local_138,uVar7);
      fVar31 = *(float *)(puVar26 + 0x58);
    }
    if (*(char *)(param_5 + 0xd) != '\0') {
      local_138 = CONCAT44(*(float *)(puVar26 + 0x6c) + fVar30 + fVar39,
                           *(float *)(puVar26 + 0x68) + fVar36 + fVar39);
      local_1e8 = (double *)CONCAT44(fVar30 - fVar39,fVar36 - fVar39);
      *(undefined4 *)(puVar26 + 0x28) = 0;
      *(undefined4 *)(puVar26 + 0x20) = 0;
      *(undefined8 *)(puVar26 + -8) = 0x1803ad630;
      FUN_1803fe590(uVar10,&local_1e8,&local_138,
                    (int)(fVar32 * DAT_1808ac1f4 * DAT_1808acb94) << 0x18);
    }
    if (0.0 < fVar33) {
      *(float *)(puVar26 + 0x60) = fVar36;
      if (bVar27) {
        *(float *)(puVar26 + 100) = fVar30;
        fVar38 = fVar37;
        fVar32 = fVar33;
      }
      else {
        *(float *)(puVar26 + 100) = (fVar30 + fVar31) - fVar33;
        fVar32 = *(float *)(puVar26 + 0x68);
        fVar38 = *(float *)(puVar26 + 0x6c);
      }
      *(float *)(puVar26 + 0x54) = fVar30 + fVar38;
      *(float *)(puVar26 + 0x50) = fVar36 + fVar32;
      *(undefined8 *)(puVar26 + -8) = 0x1803ad6a5;
      uVar8 = FUN_1803aab30(&local_128);
      uVar18 = (ulonglong)uVar8;
      *(undefined8 *)(puVar26 + -8) = 0x1803ad6b8;
      uVar13 = FUN_1803aab30(&local_118);
      if ((char)uVar22 == '\0') {
        *(undefined4 *)(puVar26 + 0x28) = 0;
        *(undefined4 *)(puVar26 + 0x20) = 0;
        *(undefined8 *)(puVar26 + -8) = 0x1803ad6e1;
        FUN_1803fe590(uVar10,puVar26 + 0x60,puVar26 + 0x50,uVar18 & 0xffffffff);
      }
      else {
        *(int *)(puVar26 + 0x30) = (int)uVar18;
        uVar7 = (undefined4)uVar13;
        if (bVar27) {
          *(undefined4 *)(puVar26 + 0x28) = uVar7;
          uVar13 = uVar18;
        }
        else {
          *(int *)(puVar26 + 0x28) = (int)uVar18;
        }
        *(undefined4 *)(puVar26 + 0x20) = uVar7;
        *(undefined8 *)(puVar26 + -8) = 0x1803ad70c;
        FUN_1803fe730(uVar10,puVar26 + 0x60,puVar26 + 0x50,uVar13 & 0xffffffff);
      }
    }
    if (*(char *)(param_5 + 0x12) != '\0') {
      *(undefined4 *)(puVar26 + 0x40) = *(undefined4 *)(puVar26 + 0x70);
      *(float **)(puVar26 + 0x38) = &local_128;
      *(float *)(puVar26 + 0x30) = fVar33;
      *(float *)(puVar26 + 0x28) = local_228;
      puVar26[0x20] = bVar27;
      *(undefined8 *)(puVar26 + -8) = 0x1803ad755;
      FUN_1803ac370(param_1,puVar26 + 0x78,fVar31,fVar37);
      fVar30 = *(float *)(puVar26 + 0x7c);
      fVar36 = *(float *)(puVar26 + 0x78);
    }
    if (local_148 != 0) {
      if (bVar27) {
        if (local_1f4 == 1) {
          fVar38 = fVar39;
        }
        else {
          fVar38 = 0.0;
        }
        fVar31 = fVar33 - (float)local_220 * DAT_1808ac1f4;
        *(undefined8 *)(puVar26 + -8) = 0x1803ad7ae;
        fVar32 = (float)FUN_18053fc00((fVar37 - local_220._4_4_) * DAT_1808ac1f4);
        fVar32 = fVar32 - fVar38;
      }
      else {
        fVar31 = (fVar37 - (float)local_220 * DAT_1808ac1f4) - fVar39;
        fVar32 = (*(float *)(puVar26 + 0x58) - fVar33) - local_220._4_4_ * DAT_1808ac1f4;
      }
      pppppppuVar20 = &local_158;
      if (0xf < uStack_140) {
        pppppppuVar20 = local_158;
      }
      local_138 = _DAT_1808adc30;
      uStack_130 = _UNK_1808adc38;
      *(float *)(puVar26 + 0x58) = fVar32 + fVar30;
      *(undefined8 *)(puVar26 + -8) = 0x1803ad83e;
      uVar7 = FUN_1803aab30(&local_138);
      *(undefined8 *)(puVar26 + 0x28) = 0;
      *(undefined8 ********)(puVar26 + 0x20) = pppppppuVar20;
      *(undefined8 *)(puVar26 + -8) = 0x1803ad869;
      FUN_1803ab1a0(uVar10,&local_208,CONCAT44(*(undefined4 *)(puVar26 + 0x58),fVar31 + fVar36),
                    uVar7);
    }
  }
  lVar16 = param_1[3];
  if (lVar16 != 0) {
    auVar35._0_4_ = fVar36 - fVar39;
    auVar35._4_4_ = fVar30 - fVar39;
    auVar35._8_4_ = *(float *)(puVar26 + 0x68) + fVar36 + fVar39;
    auVar35._12_4_ = *(float *)(puVar26 + 0x6c) + fVar30 + fVar39;
    *(undefined1 (*) [16])(lVar16 + uVar19 * 0x14) = auVar35;
    *(undefined1 *)(lVar16 + 0x10 + uVar19 * 0x14) = 1;
    *(undefined2 *)(lVar16 + 0x11 + uVar19 * 0x14) = local_170._1_2_;
    *(undefined1 *)(lVar16 + 0x13 + uVar19 * 0x14) = local_170._3_1_;
  }
  fVar39 = DAT_1808ac540;
  if (*(longlong *)(*param_1 + 0x48) != 0) {
    *(float *)(uVar19 * 0x34 + 0x2c + *(longlong *)(*param_1 + 0x48)) =
         fVar37 + DAT_1808ac540 + fVar34;
    *(undefined4 *)(uVar19 * 0x34 + 0x30 + *(longlong *)(*param_1 + 0x48)) = 0x40000000;
  }
  if (*(longlong *)(*param_1 + 0x48) == 0) {
LAB_1803ad933:
    fVar40 = *(float *)(puVar26 + 0x70);
  }
  else {
    lVar16 = param_1[2];
    *(undefined8 *)(puVar26 + -8) = 0x1803ad92f;
    cVar5 = FUN_1803b3750(lVar16,uVar19 & 0xffffffff);
    if (cVar5 != '\0') goto LAB_1803ad933;
  }
  fVar40 = (fVar37 + fVar39 + fVar34 + fVar39) * fVar40;
  if (bVar27) {
    local_218[1] = fVar40 + local_218[1];
  }
  else {
    *local_218 = fVar40 + *local_218;
  }
  if (0xf < uStack_140) {
    uVar19 = uStack_140 + 1;
    pppppppuVar20 = local_158;
    if (0xfff < uVar19) {
      pppppppuVar20 = (undefined8 *******)local_158[-1];
      if (0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)pppppppuVar20))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar19 = uStack_140 + 0x28;
    }
    *(undefined8 *)(puVar26 + -8) = 0x1803ad9a4;
    thunk_FUN_1803d64e0(pppppppuVar20,uVar19);
  }
  local_148 = 0;
  uStack_140 = 0xf;
  local_158 = (undefined8 *******)((ulonglong)local_158 & 0xffffffffffffff00);
LAB_1803ad9b8:
  *(undefined8 *)(puVar26 + -8) = 0x1803ad9c4;
  FUN_18000f890(local_100);
  *(undefined8 *)(puVar26 + -8) = 0x1803ad9d3;
  return;
}



/* ===== 1803ada30 FUN_1803ada30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803ada30(longlong *param_1,ulonglong param_2,int param_3,longlong param_4,
                  undefined8 *param_5,char param_6,longlong param_7,float param_8,float param_9,
                  float param_10)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 ****ppppuVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_188 [32];
  undefined8 ****local_168;
  undefined8 local_160;
  undefined8 local_158;
  float local_150 [2];
  float local_148;
  float fStack_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined2 local_127;
  undefined1 local_125;
  ulonglong local_120;
  undefined1 local_118 [32];
  undefined8 ****local_f8 [3];
  ulonglong local_e0;
  undefined8 local_d8 [2];
  longlong local_c8;
  ulonglong local_b8;
  
  local_b8 = DAT_180919500 ^ (ulonglong)auStack_188;
  local_150[0] = param_9;
  local_148 = param_10;
  if (*(char *)(*param_1 + 0x20) == '\0') {
    local_120 = (ulonglong)*(uint *)(*param_1 + 0x1c) << 8 | param_2;
    plVar5 = (longlong *)FUN_1803b68b0(param_1,&local_138,&local_120);
    lVar10 = *plVar5;
    lVar13 = lVar10 + 0x18;
    *(longlong *)(lVar10 + 0x90) = param_1[5];
    fVar16 = DAT_1808ac34c;
    if (param_6 == '\0') {
      fVar14 = 0.0;
    }
    else {
      fVar14 = DAT_1808ac34c;
    }
    fVar14 = (float)FUN_1803aac50(lVar13,fVar14,(int)param_1[4],DAT_1808ac118);
    puVar11 = (undefined8 *)(lVar10 + 0x68);
    local_158 = (undefined8 *)(lVar10 + 0x78);
    local_140 = (undefined8 ***)(lVar10 + 0x80);
  }
  else {
    lVar13 = 0;
    puVar11 = (undefined8 *)&DAT_00000050;
    local_158 = (undefined8 *)&DAT_00000060;
    local_140 = (undefined8 ***)&DAT_00000068;
    fVar16 = DAT_1808ac34c;
    fVar14 = DAT_1808ac34c;
  }
  FUN_180024b50(local_d8,param_5);
  if (lVar13 != 0) {
    if (param_6 == '\0') {
      if (local_d8 != puVar11) {
        param_5 = puVar11;
        if ((undefined8 **)0xf < *local_140) {
          param_5 = (undefined8 *)*puVar11;
        }
        uVar7 = *local_158;
        puVar11 = local_d8;
        goto LAB_1803adbc5;
      }
    }
    else if (puVar11 != param_5) {
      if ((ulonglong)param_5[3] < 0x10) {
        uVar7 = param_5[2];
      }
      else {
        uVar7 = param_5[2];
        param_5 = (undefined8 *)*param_5;
      }
LAB_1803adbc5:
      FUN_180029840(puVar11,param_5,uVar7);
    }
  }
  if (((fVar14 <= 0.0) && (*(char *)(*param_1 + 0x20) == '\0')) || (local_c8 == 0))
  goto LAB_1803adf36;
  if (DAT_18091a1b0 != '\0') {
    fVar15 = fVar16;
    if (0 < DAT_18091a1b4) {
      if (DAT_18091a1b4 < 100) {
        iVar3 = 100;
      }
      else {
        iVar3 = DAT_18091a1b4;
        if (200 < DAT_18091a1b4) {
          iVar3 = 200;
        }
      }
      fVar15 = (float)iVar3 / DAT_1808acb08;
    }
    param_8 = (float)(int)((fVar15 - fVar16) * DAT_1808ac710);
  }
  local_158._0_4_ = param_8;
  puVar6 = (undefined4 *)FUN_1803aad90(&local_138,param_8,local_150[0],0);
  local_138 = *puVar6;
  uStack_134 = puVar6[1];
  uStack_130 = puVar6[2];
  uStack_12c = puVar6[3];
  uVar7 = FUN_180024b50(local_118,local_d8);
  FUN_1803aaf90(local_f8,uVar7,local_148);
  ppppuVar12 = local_f8;
  if (0xf < local_e0) {
    ppppuVar12 = local_f8[0];
  }
  FUN_1803ab060(&local_140,&local_138,ppppuVar12);
  local_150[0] = 5.60519e-45;
  local_148 = 0.0;
  pfVar9 = &local_148;
  if (-1 < (int)param_8) {
    pfVar9 = (float *)&local_158;
  }
  pfVar8 = local_150;
  if ((int)param_8 < 5) {
    pfVar8 = pfVar9;
  }
  fVar16 = (float)(int)*pfVar8 * DAT_1808ac140 + fVar16;
  fVar16 = fVar16 + fVar16;
  fVar15 = (*(float *)(*param_1 + 0x10) + *(float *)(*param_1 + 8)) * DAT_1808ac1f4;
  FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)fVar15) & _DAT_1808ade90 ^ (uint)fVar15) + fVar15);
  fVar15 = (float)local_140;
  fVar1 = local_140._4_4_;
  if (((param_3 == 0) || (param_3 == 1)) || ((param_3 == 2 || (param_3 == 3)))) {
    uVar4 = FUN_18053fc00();
    local_158 = (undefined8 *)CONCAT44(local_158._4_4_,uVar4);
    uVar4 = FUN_18053fc00();
    local_158 = (undefined8 *)CONCAT44(uVar4,(float)local_158);
  }
  else {
    local_158 = (undefined8 *)0x0;
  }
  local_160 = CONCAT44(local_160._4_4_,fVar16);
  local_168 = (undefined8 ****)&local_140;
  FUN_1803abd30(&local_148,param_1,param_2,&local_158);
  puVar11 = (undefined8 *)*param_1;
  if (0.0 < fVar14 * *(float *)((longlong)puVar11 + 0x24) * *(float *)(param_7 + 0xc)) {
    ppppuVar12 = local_f8;
    if (0xf < local_e0) {
      ppppuVar12 = local_f8[0];
    }
    uVar4 = FUN_1803aab30();
    local_160 = 0;
    local_168 = ppppuVar12;
    FUN_1803ab1a0(*puVar11,&local_138,CONCAT44(fStack_144,local_148),uVar4);
  }
  lVar13 = param_1[3];
  if (lVar13 != 0) {
    pfVar9 = (float *)(lVar13 + param_2 * 0x14);
    *pfVar9 = local_148;
    pfVar9[1] = fStack_144;
    pfVar9[2] = fVar15 + local_148;
    pfVar9[3] = fVar1 + fStack_144;
    *(undefined1 *)(lVar13 + 0x10 + param_2 * 0x14) = 1;
    *(undefined2 *)(lVar13 + 0x11 + param_2 * 0x14) = local_127;
    *(undefined1 *)(lVar13 + 0x13 + param_2 * 0x14) = local_125;
  }
  if (*(longlong *)(*param_1 + 0x48) != 0) {
    *(float *)(param_2 * 0x34 + 0x2c + *(longlong *)(*param_1 + 0x48)) = fVar1;
    *(float *)(param_2 * 0x34 + 0x30 + *(longlong *)(*param_1 + 0x48)) = fVar16;
  }
  if (*(longlong *)(*param_1 + 0x48) == 0) {
LAB_1803adf14:
    fVar15 = fVar14;
  }
  else {
    cVar2 = FUN_1803b3750(param_1[2],param_2 & 0xffffffff);
    fVar15 = 0.0;
    if (cVar2 != '\0') goto LAB_1803adf14;
  }
  *(float *)(param_4 + 4) = (fVar16 + fVar1) * fVar15 + *(float *)(param_4 + 4);
  FUN_18000f890(local_f8);
LAB_1803adf36:
  FUN_18000f890(local_d8);
  return;
}



/* ===== 1803adf90 FUN_1803adf90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803adf90(longlong *param_1,ulonglong param_2,int param_3,float *param_4,
                  undefined8 ***param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  float *pfVar11;
  int iVar12;
  char ****ppppcVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  char ****ppppcVar17;
  ulonglong uVar18;
  char ****ppppcVar19;
  ulonglong uVar20;
  undefined8 ****ppppuVar21;
  undefined8 *puVar22;
  ulonglong *puVar23;
  undefined8 ***pppuVar24;
  float fVar25;
  ulonglong *puVar26;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_1f8 [32];
  undefined8 ****local_1d8;
  undefined8 *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1a8;
  float local_1a0;
  float local_198 [2];
  undefined8 local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  int local_174;
  float *local_170;
  undefined8 local_168;
  undefined8 local_160;
  float local_158 [2];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  char ***local_140;
  char ***pppcStack_138;
  undefined8 local_130;
  ulonglong local_128;
  char ****local_120 [2];
  ulonglong local_110;
  ulonglong local_108;
  undefined8 ****local_100 [3];
  ulonglong local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  local_1a8 = param_5;
  cVar6 = *(char *)(param_1[1] + 5);
  local_174 = param_3;
  local_170 = param_4;
  local_168 = param_2;
  if (*(char *)(*param_1 + 0x20) == '\0') {
    local_190 = (undefined8 ***)((ulonglong)*(uint *)(*param_1 + 0x1c) << 8 | param_2);
    plVar8 = (longlong *)FUN_1803b68b0(param_1,&local_140,&local_190);
    lVar16 = *plVar8;
    lVar14 = lVar16 + 0x18;
    *(longlong *)(lVar16 + 0x90) = param_1[5];
    fVar32 = DAT_1808ac34c;
    if (cVar6 == '\0') {
      fVar25 = 0.0;
    }
    else {
      fVar25 = DAT_1808ac34c;
    }
    local_178 = (float)FUN_1803aac50(lVar14,fVar25,(int)param_1[4],DAT_1808ac118);
    ppppcVar19 = (char ****)(lVar16 + 0x68);
    puVar23 = (ulonglong *)(lVar16 + 0x78);
    puVar26 = (ulonglong *)(lVar16 + 0x80);
  }
  else {
    lVar14 = 0;
    local_178 = DAT_1808ac34c;
    ppppcVar19 = (char ****)&DAT_00000050;
    puVar23 = (ulonglong *)&DAT_00000060;
    puVar26 = (ulonglong *)&DAT_00000068;
    fVar32 = DAT_1808ac34c;
  }
  fVar25 = local_178;
  FUN_180024b50(local_120,param_1[1] + 0xc0);
  if (lVar14 != 0) {
    if (cVar6 == '\0') {
      if (local_120 != (char *****)ppppcVar19) {
        ppppcVar17 = ppppcVar19;
        if (0xf < *puVar26) {
          ppppcVar17 = (char ****)*ppppcVar19;
        }
        uVar20 = *puVar23;
        ppppcVar19 = (char ****)local_120;
        goto LAB_1803ae121;
      }
    }
    else if ((char *****)ppppcVar19 != local_120) {
      ppppcVar17 = (char ****)local_120;
      if (0xf < local_108) {
        ppppcVar17 = local_120[0];
      }
      uVar20 = local_110;
LAB_1803ae121:
      FUN_180029840(ppppcVar19,ppppcVar17,uVar20);
    }
  }
  if (((fVar25 <= 0.0) && (*(char *)(*param_1 + 0x20) == '\0')) || (local_110 == 0))
  goto LAB_1803ae8c7;
  if (local_108 < 0x10) {
    ppppcVar19 = (char ****)local_120;
  }
  else {
    ppppcVar19 = local_120[0];
  }
  ppppcVar13 = (char ****)((longlong)ppppcVar19 + local_110);
  ppppcVar17 = local_120[0];
  uVar20 = local_110;
  uVar18 = local_108;
  if (ppppcVar19 != ppppcVar13) {
    do {
      if (*(char *)ppppcVar19 == '\n') {
        *(char *)ppppcVar19 = ' ';
      }
      ppppcVar19 = (char ****)((longlong)ppppcVar19 + 1);
    } while (ppppcVar19 != ppppcVar13);
    ppppcVar17 = local_120[0];
    uVar20 = local_110;
    uVar18 = local_108;
  }
  if (DAT_18091a1b0 == '\0') {
    fVar25 = *(float *)((longlong)local_1a8 + 0xc);
  }
  else {
    fVar25 = 0.0;
  }
  local_1a0 = fVar25;
  local_188 = fVar25;
  cVar6 = DAT_18091a1b0;
  puVar9 = (undefined4 *)
           FUN_1803aad90(&local_140,fVar25,*(undefined4 *)((longlong)local_1a8 + 0x8c));
  fVar37 = DAT_1808acb08;
  local_150 = *puVar9;
  uStack_14c = puVar9[1];
  uStack_148 = puVar9[2];
  uStack_144 = puVar9[3];
  if ((cVar6 != '\0') && (0 < DAT_18091a1b4)) {
    if (DAT_18091a1b4 < 100) {
      iVar12 = 100;
    }
    else {
      iVar12 = DAT_18091a1b4;
      if (200 < DAT_18091a1b4) {
        iVar12 = 200;
      }
    }
    if (fVar32 < (float)iVar12 / DAT_1808acb08) {
      if (DAT_18091a1b4 < 100) {
        iVar12 = 100;
      }
      else {
        iVar12 = DAT_18091a1b4;
        if (200 < DAT_18091a1b4) {
          iVar12 = 200;
        }
      }
      fVar25 = (float)((int)fVar25 -
                      (int)(((float)iVar12 / DAT_1808acb08 - fVar32) * _DAT_1808acddc));
      if (4 < (int)fVar25) {
        fVar25 = 5.60519e-45;
      }
    }
  }
  pppcStack_138 = (char ***)0x0;
  ppppcVar19 = (char ****)local_120;
  if (0xf < uVar18) {
    ppppcVar19 = ppppcVar17;
  }
  if (0x7fffffffffffffff < uVar20) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  uVar7 = *(undefined4 *)(local_1a8 + 0x12);
  local_130 = uVar20;
  if (uVar20 < 0x10) {
    local_128 = 0xf;
    local_140 = *ppppcVar19;
    pppcStack_138 = ppppcVar19[1];
  }
  else {
    uVar10 = uVar20 | 0xf;
    uVar18 = 0x7fffffffffffffff;
    if ((uVar10 < 0x8000000000000000) && (uVar18 = uVar10, uVar10 < 0x16)) {
      uVar18 = 0x16;
    }
    local_140 = (char ***)FUN_18000fb70(uVar18 + 1);
    local_128 = uVar18;
    FUN_180540530(local_140,ppppcVar19,uVar20 + 1);
  }
  FUN_1803aaf90(local_100,&local_140,uVar7);
  FUN_1803ab060(&local_190,&local_150);
  fVar5 = local_1a0;
  pppuVar24 = local_1a8;
  if (DAT_18091a1b4 < 1) {
    fVar37 = fVar32;
  }
  else {
    iVar12 = 100;
    if ((99 < DAT_18091a1b4) && (iVar12 = DAT_18091a1b4, 200 < DAT_18091a1b4)) {
      iVar12 = 200;
    }
    fVar37 = (float)iVar12 / fVar37;
  }
  fVar3 = fVar37 * DAT_1808acb18;
  if ((float)local_190 <= fVar37 * DAT_1808acb18) {
    fVar3 = (float)local_190;
  }
  if ((*(char *)(param_1[2] + 0x1174) == '\0') || (*(longlong *)(param_1[1] + 0x478) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  local_198[0] = fVar25;
  local_180 = 5.60519e-45;
  local_158[0] = 0.0;
  pfVar15 = local_158;
  if (-1 < (int)fVar25) {
    pfVar15 = local_198;
  }
  pfVar11 = &local_180;
  if ((int)fVar25 < 5) {
    pfVar11 = pfVar15;
  }
  lVar14 = (longlong)(int)*pfVar11;
  if (*(int *)((longlong)local_1a8 + 0x8c) == 1) {
    fVar37 = *(float *)(&DAT_1806de2a8 + lVar14 * 4);
  }
  else if (*(int *)((longlong)local_1a8 + 0x8c) == 2) {
    fVar37 = *(float *)(&DAT_18089fb98 + lVar14 * 4);
  }
  else {
    fVar37 = *(float *)(&DAT_18089fb80 + lVar14 * 4);
  }
  fVar35 = DAT_1808ac880;
  if (DAT_1808ac880 <= fVar37) {
    fVar35 = fVar37;
  }
  if (bVar4) {
    fVar37 = fVar35 + DAT_1808ac750;
  }
  else {
    fVar37 = 0.0;
  }
  fVar33 = local_190._4_4_;
  local_198[0] = 5.60519e-45;
  local_180 = 0.0;
  pfVar15 = &local_180;
  if (-1 < (int)local_1a0) {
    pfVar15 = &local_188;
  }
  pfVar11 = local_198;
  if ((int)local_1a0 < 5) {
    pfVar11 = pfVar15;
  }
  local_1a0 = (float)(int)*pfVar11 * DAT_1808ac140 + fVar32;
  local_1a0 = local_1a0 + local_1a0;
  fVar36 = fVar3 + fVar37;
  local_190 = (undefined8 ***)CONCAT44(local_190._4_4_,fVar36);
  fVar1 = *(float *)(*param_1 + 8);
  fVar2 = *(float *)(*param_1 + 0x10);
  fVar31 = (fVar2 + fVar1) * DAT_1808ac1f4;
  auVar27._0_8_ =
       FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)fVar31) & _DAT_1808ade90 ^ (uint)fVar31) +
                     fVar31);
  fVar31 = DAT_1808ac540;
  auVar27._8_8_ = extraout_XMM0_Qb;
  auVar28._4_12_ = auVar27._4_12_;
  if (local_174 == 0) {
    auVar30._4_12_ = ZEXT812(0);
    auVar30._0_4_ = (((fVar1 - DAT_1808ac540) - fVar36) - fVar32) - *local_170;
    uVar20 = auVar30._0_8_;
LAB_1803ae594:
LAB_1803ae599:
    uVar7 = FUN_18053fc00(uVar20);
    local_1a8 = (undefined8 ***)CONCAT44(local_1a8._4_4_,uVar7);
    uVar7 = FUN_18053fc00();
    local_1a8 = (undefined8 ***)CONCAT44(uVar7,(undefined4)local_1a8);
  }
  else {
    if (local_174 == 1) {
      auVar29._0_4_ = ((float)auVar27._0_8_ - fVar36 * DAT_1808ac1f4) - *local_170;
      auVar29._4_12_ = auVar28._4_12_;
      uVar20 = auVar29._0_8_;
      pppuVar24 = local_1a8;
      goto LAB_1803ae599;
    }
    if (local_174 == 2) {
      uVar20 = (ulonglong)(uint)(fVar2 + DAT_1808ac540 + 0.0 + *local_170);
      pppuVar24 = local_1a8;
      goto LAB_1803ae594;
    }
    if (local_174 == 3) {
      auVar28._0_4_ = ((float)auVar27._0_8_ - fVar36 * DAT_1808ac1f4) + *local_170;
      uVar20 = auVar28._0_8_;
      pppuVar24 = local_1a8;
      goto LAB_1803ae599;
    }
    local_1a8 = (undefined8 ***)0x0;
  }
  uVar20 = local_168;
  local_1d0 = (undefined8 *)CONCAT44(local_1d0._4_4_,local_1a0);
  local_1d8 = (undefined8 ****)&local_190;
  FUN_1803abd30(&local_188,param_1,local_168,&local_1a8);
  fVar2 = local_184;
  fVar1 = local_188;
  puVar22 = (undefined8 *)*param_1;
  fVar36 = local_178 * *(float *)((longlong)puVar22 + 0x24);
  if (bVar4) {
    if (local_174 == 3) {
      local_180 = fVar25;
      local_198[0] = 5.60519e-45;
      local_188 = 0.0;
      pfVar15 = &local_188;
      if (-1 < (int)fVar25) {
        pfVar15 = &local_180;
      }
      pfVar11 = local_198;
      if ((int)fVar25 < 5) {
        pfVar11 = pfVar15;
      }
      lVar14 = (longlong)(int)*pfVar11;
      if (*(int *)((longlong)pppuVar24 + 0x8c) == 1) {
        fVar25 = *(float *)(&DAT_1806de2a8 + lVar14 * 4);
      }
      else if (*(int *)((longlong)pppuVar24 + 0x8c) == 2) {
        fVar25 = *(float *)(&DAT_18089fb98 + lVar14 * 4);
      }
      else {
        fVar25 = *(float *)(&DAT_18089fb80 + lVar14 * 4);
      }
      local_17c = (fVar35 - fVar25) * DAT_1808ac1f4 + local_184;
      fVar25 = fVar33 + fVar31;
    }
    else {
      local_17c = ((local_184 + fVar33) - fVar35) + fVar32;
      fVar25 = fVar33;
    }
    fVar33 = fVar35;
    if (fVar35 <= fVar25) {
      fVar33 = fVar25;
    }
    local_140 = _DAT_1808adc30;
    pppcStack_138 = _UNK_1808adc38;
    local_190 = (undefined8 ***)&DAT_3f8000003f800000;
    local_1a8 = (undefined8 ***)0x0;
    local_188 = fVar1 + fVar35;
    local_184 = local_17c + fVar35;
    local_180 = fVar1;
    local_168 = 0;
    local_160 = *(undefined8 *)(param_1[1] + 0x478);
    local_1c8 = FUN_1803aab30(&local_140,fVar36);
    local_1c0 = DAT_1808ac658;
    local_1d0 = &local_190;
    local_1d8 = (undefined8 ****)&local_1a8;
    FUN_1803febc0(*puVar22,&local_168,&local_180,&local_188);
    puVar22 = (undefined8 *)*param_1;
  }
  fVar25 = fVar1 + fVar37;
  local_168 = CONCAT44(0xff7fffff,fVar25 - fVar32);
  local_160 = CONCAT44(0x7f7fffff,fVar25 + fVar3 + fVar32);
  if (0.0 < fVar36 * *(float *)(pppuVar24 + 4)) {
    ppppuVar21 = local_100;
    if (0xf < local_e8) {
      ppppuVar21 = local_100[0];
    }
    uVar7 = FUN_1803aab30((longlong)pppuVar24 + 0x14,fVar36);
    local_1d0 = &local_168;
    local_1d8 = ppppuVar21;
    FUN_1803ab1a0(*puVar22,&local_150,CONCAT44(fVar2,fVar25),uVar7);
  }
  lVar14 = param_1[3];
  if (lVar14 != 0) {
    auVar34._4_4_ = fVar2;
    auVar34._0_4_ = fVar1;
    auVar34._8_4_ = fVar1 + fVar3 + fVar37;
    auVar34._12_4_ = fVar2 + fVar33;
    *(undefined1 (*) [16])(lVar14 + uVar20 * 0x14) = auVar34;
    *(undefined1 *)(lVar14 + 0x10 + uVar20 * 0x14) = 1;
    *(undefined2 *)(lVar14 + 0x11 + uVar20 * 0x14) = local_130._1_2_;
    *(undefined1 *)(lVar14 + 0x13 + uVar20 * 0x14) = local_130._3_1_;
  }
  fVar32 = (float)(int)fVar5 * DAT_1808ac140 + fVar32;
  fVar33 = fVar32 + fVar32 + fVar33;
  if (*(longlong *)(*param_1 + 0x48) != 0) {
    *(float *)(uVar20 * 0x34 + 0x2c + *(longlong *)(*param_1 + 0x48)) = fVar33;
    *(float *)(uVar20 * 0x34 + 0x30 + *(longlong *)(*param_1 + 0x48)) = local_1a0;
  }
  if ((*(longlong *)(*param_1 + 0x48) == 0) ||
     (cVar6 = FUN_1803b3750(param_1[2],uVar20 & 0xffffffff), fVar32 = 0.0, cVar6 != '\0')) {
    fVar32 = local_178;
  }
  local_170[1] = fVar32 * fVar33 + local_170[1];
  FUN_18000f890(local_100);
LAB_1803ae8c7:
  FUN_18000f890(local_120);
  return;
}



/* ===== 1803ae940 FUN_1803ae940 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803ae940(ulonglong *param_1,float param_2,int param_3,float *param_4,int param_5,
                  longlong param_6)

{
  undefined8 *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  size_t sVar10;
  longlong *plVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong in_RDX;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  char *_Str;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float unaff_XMM7_Da;
  float fVar27;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float fVar28;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [48];
  undefined8 local_150;
  float local_148;
  float local_140;
  float local_13c;
  longlong local_130;
  float local_128;
  float local_124;
  ulonglong local_120;
  ulonglong local_118 [2];
  undefined2 local_107;
  undefined1 local_105;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_188;
  local_120 = in_RDX;
  if (*(char *)(*param_1 + 0x20) == '\0') {
    cVar6 = *(char *)((longlong)param_5 + param_1[1]);
    local_118[0] = (ulonglong)*(uint *)(*param_1 + 0x1c) << 8 | in_RDX;
    plVar11 = (longlong *)FUN_1803b68b0(param_1,&local_100,local_118);
    lVar15 = *plVar11;
    *(ulonglong *)(lVar15 + 0x90) = param_1[5];
    fVar27 = DAT_1808ac34c;
    if (cVar6 == '\0') {
      param_2 = 0.0;
    }
    else {
      param_2 = DAT_1808ac34c;
    }
    local_148 = (float)FUN_1803aac50(lVar15 + 0x18,param_2,(int)param_1[4],DAT_1808ac118);
  }
  else {
    local_148 = DAT_1808ac34c;
    fVar27 = DAT_1808ac34c;
  }
  if ((local_148 <= 0.0) && (puVar18 = auStack_188, *(char *)(*param_1 + 0x20) == '\0'))
  goto LAB_1803af342;
  fVar25 = fVar27;
  if (0 < DAT_18091a1b4) {
    if (DAT_18091a1b4 < 100) {
      iVar7 = 100;
    }
    else {
      iVar7 = DAT_18091a1b4;
      if (200 < DAT_18091a1b4) {
        iVar7 = 200;
      }
    }
    fVar25 = (float)iVar7 / DAT_1808acb08;
  }
  if (DAT_18091a1b0 == '\0') {
    fVar25 = (float)*(int *)(param_6 + 0xc) * DAT_1808ac140 + fVar27;
  }
  if (*(char *)(*param_1 + 0x20) == '\0') {
    fVar28 = *(float *)(param_1[1] + 0x484);
    if (0.0 < fVar28) {
      local_124 = fVar25 * DAT_1808ac950;
      local_128 = fVar25 * _DAT_1808ac850;
      pfVar9 = &local_128;
      if (fVar25 * _DAT_1808ac850 <= fVar28) {
        pfVar9 = (float *)(param_1[1] + 0x484);
      }
      pfVar13 = &local_124;
      if (fVar28 <= fVar25 * DAT_1808ac950) {
        pfVar13 = pfVar9;
      }
      param_2 = (((*pfVar13 - fVar25 * DAT_1808ac8d4) * DAT_1808ac154) / (fVar25 * DAT_1808ac7ec) +
                DAT_1808ac254) * fVar25;
      fVar25 = param_2;
    }
  }
  if (param_5 == 1) {
    fVar25 = fVar25 * DAT_1808ac934;
    iVar7 = 1;
    if (1 < (int)(fVar25 * DAT_1808ac254)) {
      iVar7 = (int)(fVar25 * DAT_1808ac254);
    }
    _Str = "c4";
  }
  else {
    fVar25 = fVar25 * DAT_1808ac8e4;
    iVar7 = 1;
    if (1 < (int)(fVar25 * DAT_1808ac254)) {
      iVar7 = (int)(fVar25 * DAT_1808ac254);
    }
    _Str = "taser";
    if (param_5 == 2) {
      _Str = "defuser";
    }
  }
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  sVar10 = strlen(_Str);
  FUN_1800133a0(&local_100,_Str,sVar10);
  plVar11 = (longlong *)FUN_18039f3d0(local_118,&local_100,iVar7);
  local_130 = *plVar11;
  uVar8 = *(uint *)(plVar11 + 1);
  uVar16 = (ulonglong)uVar8;
  iVar7 = *(int *)((longlong)plVar11 + 0xc);
  if (local_e8 < 0x10) {
LAB_1803aec2f:
    unaff_XMM13_Da = DAT_1808ac1f4;
    puVar18 = auStack_188;
    if (((local_130 == 0) || (puVar18 = auStack_188, (int)uVar8 < 1)) ||
       (puVar18 = auStack_188, iVar7 < 1)) goto LAB_1803af342;
    fVar25 = (float)FUN_18053f0d0(fVar25 * _DAT_1808ac400 + DAT_1808ac1f4);
    local_140 = (float)(int)uVar8;
    local_13c = (float)iVar7;
    if ((fVar25 < local_140) && (0.0 < fVar25)) {
      local_13c = (float)FUN_18053f0d0((local_13c * fVar25) / local_140);
      local_140 = fVar25;
    }
    unaff_XMM7_Da = local_13c;
    unaff_XMM12_Da = local_140;
    if (param_3 == 3) {
      param_4[1] = param_4[1] + fVar27;
    }
    uVar16 = *param_1;
    fVar25 = *(float *)(uVar16 + 0x10);
    fVar28 = *(float *)(uVar16 + 8);
    fVar24 = (fVar25 + fVar28) * unaff_XMM13_Da;
    param_2 = (float)FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)fVar24) & _DAT_1808ade90 ^
                                          (uint)fVar24) + fVar24);
    puVar17 = auStack_188;
    puVar18 = auStack_188;
    unaff_XMM10_Da = DAT_1808ac540;
    if (param_3 == 0) {
      fVar25 = (((fVar28 - DAT_1808ac540) - unaff_XMM12_Da) - fVar27) - *param_4;
LAB_1803aedc8:
      fVar28 = param_4[1] + *(float *)(uVar16 + 0xc);
      puVar18 = auStack_188;
      goto LAB_1803aedd3;
    }
    if (param_3 == 1) {
      fVar25 = (param_2 - unaff_XMM12_Da * unaff_XMM13_Da) - *param_4;
      fVar28 = (((*(float *)(uVar16 + 0xc) - DAT_1808ac540) - unaff_XMM7_Da) - fVar27) - param_4[1];
      goto LAB_1803aedd3;
    }
    if (param_3 == 2) {
      fVar25 = fVar25 + DAT_1808ac540 + 0.0 + *param_4;
      goto LAB_1803aedc8;
    }
    if (param_3 == 3) goto LAB_1803aed42;
    local_150 = 0;
    puVar18 = auStack_188;
  }
  else {
    uVar14 = local_e8 + 1;
    lVar15 = local_100;
    if (uVar14 < 0x1000) {
LAB_1803aec25:
      thunk_FUN_1803d64e0(lVar15,uVar14);
      goto LAB_1803aec2f;
    }
    lVar15 = *(longlong *)(local_100 + -8);
    if ((local_100 - lVar15) - 8U < 0x20) {
      uVar14 = local_e8 + 0x28;
      goto LAB_1803aec25;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar17 = auStack_180;
LAB_1803aed42:
    fVar25 = (param_2 - unaff_XMM12_Da * unaff_XMM13_Da) + *param_4;
    fVar28 = *(float *)(uVar16 + 0x14) + unaff_XMM10_Da + 0.0 + param_4[1];
    puVar18 = puVar17;
LAB_1803aedd3:
    *(undefined8 *)(puVar18 + -8) = 0x1803aeddb;
    uVar21 = FUN_18053fc00(fVar25);
    *(undefined4 *)(puVar18 + 0x38) = uVar21;
    *(undefined8 *)(puVar18 + -8) = 0x1803aede9;
    uVar21 = FUN_18053fc00(fVar28);
    *(undefined4 *)(puVar18 + 0x3c) = uVar21;
  }
  *(float *)(puVar18 + 0x28) = unaff_XMM10_Da;
  *(undefined1 **)(puVar18 + 0x20) = puVar18 + 0x48;
  lVar15 = *(longlong *)(puVar18 + 0x68);
  *(undefined8 *)(puVar18 + -8) = 0x1803aee1a;
  FUN_1803abd30(puVar18 + 0x50,param_1,lVar15,puVar18 + 0x38);
  fVar25 = *(float *)(puVar18 + 0x54);
  if (param_3 != 1) {
    fVar25 = fVar25 + fVar27;
    *(float *)(puVar18 + 0x54) = fVar25;
  }
  if (*(longlong *)(*param_1 + 0x48) != 0) {
    lVar15 = lVar15 * 0x34;
    *(float *)(lVar15 + 0x2c + *(longlong *)(*param_1 + 0x48)) = unaff_XMM7_Da;
    *(undefined4 *)(lVar15 + 0x30 + *(longlong *)(*param_1 + 0x48)) = 0x40000000;
  }
  puVar1 = (undefined8 *)*param_1;
  if (puVar1[9] == 0) {
LAB_1803aee76:
    fVar28 = fVar27;
  }
  else {
    uVar16 = param_1[2];
    *(undefined8 *)(puVar18 + -8) = 0x1803aee6d;
    cVar6 = FUN_1803b3750(uVar16);
    if (cVar6 != '\0') goto LAB_1803aee76;
    fVar28 = 0.0;
  }
  puVar18[0x31] = 0.0 < fVar28;
  fVar28 = *(float *)(param_6 + 0x14);
  fVar24 = *(float *)(param_6 + 0x18);
  fVar23 = *(float *)(param_6 + 0x1c);
  fVar22 = *(float *)(param_6 + 0x20);
  if ((param_5 == 3) && (*(char *)(param_1[1] + 0x480) != '\0')) {
    puVar18[0x30] = 1;
    uVar16 = param_1[2];
    fVar28 = (*(float *)(uVar16 + 0x1198) - fVar28) * DAT_1808ac140 + fVar28;
    fVar24 = (*(float *)(uVar16 + 0x119c) - fVar24) * DAT_1808ac140 + fVar24;
    *(float *)(puVar18 + 0x48) = (*(float *)(uVar16 + 0x11a0) - fVar23) * DAT_1808ac140 + fVar23;
    fVar22 = (*(float *)(uVar16 + 0x11a4) - fVar22) * DAT_1808ac140 + fVar22;
  }
  else {
    *(float *)(puVar18 + 0x48) = fVar23;
    puVar18[0x30] = 0;
  }
  fVar23 = fVar22 * *(float *)((longlong)puVar1 + 0x24) * *(float *)(puVar18 + 0x40);
  if (*(char *)(puVar1 + 4) == '\0') {
    fVar22 = fVar23;
  }
  else {
    fVar22 = DAT_1808ac0c0;
    if (DAT_1808ac0c0 <= fVar23) {
      fVar22 = fVar23;
    }
  }
  if (0.0 < fVar22) {
    if ((*(char *)(param_6 + 0x94) == '\0') || (param_5 != 3)) {
      *(undefined8 *)(puVar18 + 0x40) = 0;
      fVar23 = fVar27;
    }
    else {
      *(undefined8 *)(puVar18 + 0x40) = 0x3f800000;
      fVar23 = 0.0;
    }
    local_100 = CONCAT44(0x3f800000,fVar23);
    piVar2 = (int *)*puVar1;
    iVar20 = (int)(fVar22 * unaff_XMM13_Da * DAT_1808acb94) << 0x18;
    fVar23 = *(float *)(puVar18 + 0x50);
    *(float *)(puVar18 + 0x38) = fVar23 + fVar27 + unaff_XMM12_Da;
    *(float *)(puVar18 + 0x3c) = fVar25 + fVar27 + unaff_XMM7_Da;
    *(float *)(puVar18 + 0x70) = fVar23 + fVar27;
    *(float *)(puVar18 + 0x74) = fVar25 + fVar27;
    iVar7 = 8;
    if (iVar20 != 0) {
      lVar15 = *(longlong *)(puVar18 + 0x58);
      if ((lVar15 == *(longlong *)(piVar2 + 0x1e)) && (*(longlong *)(piVar2 + 0x1c) == 0)) {
        bVar4 = false;
      }
      else {
        if (piVar2[0x2c] == piVar2[0x2d]) {
          *(undefined8 *)(puVar18 + -8) = 0x1803af056;
          FUN_1803f7030(piVar2 + 0x2c);
        }
        iVar19 = piVar2[0x2c];
        lVar12 = *(longlong *)(piVar2 + 0x2e);
        *(undefined8 *)(lVar12 + (longlong)iVar19 * 0x10) = 0;
        *(longlong *)(lVar12 + 8 + (longlong)iVar19 * 0x10) = lVar15;
        piVar2[0x2c] = piVar2[0x2c] + 1;
        piVar2[0x1c] = 0;
        piVar2[0x1d] = 0;
        *(longlong *)(piVar2 + 0x1e) = lVar15;
        *(undefined8 *)(puVar18 + -8) = 0x1803af088;
        FUN_1803fc0a0(piVar2);
        bVar4 = true;
      }
      *(undefined8 *)(puVar18 + -8) = 0x1803af09d;
      FUN_1803fc3a0(piVar2,6,4);
      *(int *)(puVar18 + 0x28) = iVar20;
      *(undefined8 **)(puVar18 + 0x20) = &local_100;
      *(undefined8 *)(puVar18 + -8) = 0x1803af0c2;
      FUN_1803fc4a0(piVar2,puVar18 + 0x70,puVar18 + 0x38,puVar18 + 0x40);
      if (bVar4) {
        *(undefined8 *)(puVar18 + -8) = 0x1803af0ce;
        FUN_1803fc340(piVar2);
      }
    }
    if ((puVar18[0x30] == '\0') || (*(char *)(*param_1 + 0x20) != '\0')) {
      bVar4 = false;
      iVar20 = -1;
      *(undefined4 *)(puVar18 + 0x3c) = 0;
    }
    else {
      bVar4 = true;
      if (piVar2 == (int *)0x0) {
        iVar20 = -1;
        *(undefined4 *)(puVar18 + 0x3c) = 0;
      }
      else {
        *(undefined8 *)(puVar18 + -8) = 0x1803af0fb;
        FUN_1803fbe60(piVar2);
        iVar20 = *piVar2 + -1;
        lVar12 = (longlong)iVar20;
        lVar15 = *(longlong *)(piVar2 + 2);
        *(code **)(lVar15 + 0x30 + lVar12 * 0x48) = FUN_18000c1f0;
        *(undefined8 *)(lVar15 + 0x38 + lVar12 * 0x48) = 0;
        *(undefined4 *)(lVar15 + 0x40 + lVar12 * 0x48) = 0;
        *(undefined4 *)(lVar15 + 0x44 + lVar12 * 0x48) = 0xffffffff;
        *(undefined8 *)(puVar18 + -8) = 0x1803af131;
        FUN_1803fbe60(piVar2);
        *(int *)(puVar18 + 0x3c) = piVar2[8];
      }
    }
    *(int *)(puVar18 + 0x38) = iVar20;
    *(float *)(puVar18 + 0x70) = fVar28;
    *(float *)(puVar18 + 0x74) = fVar24;
    *(undefined4 *)(puVar18 + 0x78) = *(undefined4 *)(puVar18 + 0x48);
    *(undefined4 *)(puVar18 + 0x7c) = 0x3f800000;
    *(undefined8 *)(puVar18 + -8) = 0x1803af180;
    uVar8 = FUN_1803aab30(puVar18 + 0x70,fVar22);
    *(float *)(puVar18 + 0x70) = fVar23 + unaff_XMM12_Da;
    *(float *)(puVar18 + 0x74) = fVar25 + unaff_XMM7_Da;
    if ((uVar8 & 0xff000000) != 0) {
      lVar15 = *(longlong *)(puVar18 + 0x58);
      if ((lVar15 == *(longlong *)(piVar2 + 0x1e)) && (*(longlong *)(piVar2 + 0x1c) == 0)) {
        bVar5 = false;
      }
      else {
        iVar20 = piVar2[0x2d];
        if (piVar2[0x2c] == iVar20) {
          iVar19 = piVar2[0x2c] + 1;
          if (iVar20 != 0) {
            iVar7 = iVar20 + iVar20 / 2;
          }
          if (iVar19 < iVar7) {
            iVar19 = iVar7;
          }
          *(undefined8 *)(puVar18 + -8) = 0x1803af1fe;
          FUN_1803f7030(piVar2 + 0x2c,iVar19);
          lVar15 = *(longlong *)(puVar18 + 0x58);
        }
        iVar7 = piVar2[0x2c];
        lVar12 = *(longlong *)(piVar2 + 0x2e);
        *(undefined8 *)(lVar12 + (longlong)iVar7 * 0x10) = 0;
        *(longlong *)(lVar12 + 8 + (longlong)iVar7 * 0x10) = lVar15;
        piVar2[0x2c] = piVar2[0x2c] + 1;
        piVar2[0x1c] = 0;
        piVar2[0x1d] = 0;
        *(longlong *)(piVar2 + 0x1e) = lVar15;
        *(undefined8 *)(puVar18 + -8) = 0x1803af236;
        FUN_1803fc0a0(piVar2);
        bVar5 = true;
      }
      *(undefined8 *)(puVar18 + -8) = 0x1803af24b;
      FUN_1803fc3a0(piVar2,6,4);
      *(uint *)(puVar18 + 0x28) = uVar8;
      *(undefined8 **)(puVar18 + 0x20) = &local_100;
      *(undefined8 *)(puVar18 + -8) = 0x1803af270;
      FUN_1803fc4a0(piVar2,puVar18 + 0x50,puVar18 + 0x70,puVar18 + 0x40);
      if (bVar5) {
        *(undefined8 *)(puVar18 + -8) = 0x1803af27c;
        FUN_1803fc340(piVar2);
      }
    }
    if (bVar4) {
      uVar16 = param_1[2];
      *(undefined4 *)(puVar18 + 0x70) = *(undefined4 *)(uVar16 + 0x1198);
      *(undefined4 *)(puVar18 + 0x74) = *(undefined4 *)(uVar16 + 0x119c);
      *(undefined4 *)(puVar18 + 0x78) = *(undefined4 *)(uVar16 + 0x11a0);
      *(float *)(puVar18 + 0x7c) = *(float *)(uVar16 + 0x11a4) * DAT_1808ac294;
      *(undefined8 *)(puVar18 + -8) = 0x1803af2d7;
      FUN_18000ced0(piVar2,puVar18 + 0x38,puVar18 + 0x70);
    }
    uVar16 = param_1[3];
    if (uVar16 != 0) {
      lVar15 = *(longlong *)(puVar18 + 0x68);
      auVar26._4_4_ = fVar25;
      auVar26._0_4_ = fVar23;
      auVar26._8_4_ = fVar23 + unaff_XMM12_Da;
      auVar26._12_4_ = fVar25 + unaff_XMM7_Da;
      *(undefined1 (*) [16])(uVar16 + lVar15 * 0x14) = auVar26;
      *(undefined1 *)(uVar16 + 0x10 + lVar15 * 0x14) = 1;
      *(undefined2 *)(uVar16 + 0x11 + lVar15 * 0x14) = local_107;
      *(undefined1 *)(uVar16 + 0x13 + lVar15 * 0x14) = local_105;
    }
    if (puVar18[0x31] != '\0') {
      param_4[1] = unaff_XMM7_Da + fVar27 + DAT_1808ac710 + param_4[1];
    }
  }
LAB_1803af342:
  *(undefined8 *)(puVar18 + -8) = 0x1803af34e;
  return;
}



/* ===== 1803af3b0 FUN_1803af3b0 ===== */

int * FUN_1803af3b0(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  int local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  uint uStack_84;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  piVar3 = (int *)*param_1;
  piVar1 = (int *)param_1[1];
  if (piVar3 != piVar1) {
    do {
      if (*piVar3 == *param_2) {
        return piVar3;
      }
      piVar3 = piVar3 + 0x28;
    } while (piVar3 != piVar1);
  }
  local_98 = 0x13;
  uStack_a0 = 0;
  uStack_94 = uStack_94 & 0xffffff00;
  uStack_90 = 0;
  uStack_8c = uStack_8c & 0xffffff00;
  local_88 = 0;
  uStack_84 = uStack_84 & 0xffffff00;
  local_a8 = *param_2;
  uStack_6c = CONCAT31(uStack_6c._1_3_,1);
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  local_78 = 0x3e4ccccd;
  uStack_54 = CONCAT31(uStack_54._1_3_,1);
  uStack_5c = 0;
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0x3e4ccccd;
  uStack_3c = CONCAT31(uStack_3c._1_3_,1);
  uStack_40 = 0x3f800000;
  uStack_44 = 0x3f800000;
  uStack_4c = 0x3f800000;
  uStack_50 = 0x3f800000;
  local_48 = 0x3e4ccccd;
  uStack_24 = CONCAT31(uStack_24._1_3_,1);
  uStack_2c = 0;
  uStack_28 = 0;
  local_38 = 0;
  uStack_30 = 0x3e4ccccd;
  uStack_c = CONCAT31(uStack_c._1_3_,1);
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_20 = 0;
  local_18 = 0x3e4ccccd;
  if (piVar1 == (int *)param_1[2]) {
    FUN_1803b7d80(param_1,piVar1,&local_a8);
  }
  else {
    *(ulonglong *)piVar1 = CONCAT44(uStack_a4,local_a8);
    piVar1[2] = 0;
    piVar1[3] = 0;
    *(ulonglong *)(piVar1 + 4) = CONCAT44(uStack_94,0x13);
    *(ulonglong *)(piVar1 + 6) = (ulonglong)uStack_8c << 0x20;
    *(ulonglong *)(piVar1 + 8) = (ulonglong)uStack_84 << 0x20;
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    piVar1[0xc] = 0x3e4ccccd;
    piVar1[0xd] = 0;
    *(ulonglong *)(piVar1 + 0xe) = (ulonglong)uStack_6c << 0x20;
    piVar1[0x10] = 0;
    piVar1[0x11] = 0;
    piVar1[0x12] = 0x3e4ccccd;
    piVar1[0x13] = 0;
    *(ulonglong *)(piVar1 + 0x14) = (ulonglong)uStack_54 << 0x20;
    *(undefined1 **)(piVar1 + 0x16) = &DAT_3f8000003f800000;
    piVar1[0x18] = 0x3e4ccccd;
    piVar1[0x19] = 0x3f800000;
    *(ulonglong *)(piVar1 + 0x1a) = CONCAT44(uStack_3c,0x3f800000);
    piVar1[0x1c] = 0;
    piVar1[0x1d] = 0;
    piVar1[0x1e] = 0x3e4ccccd;
    piVar1[0x1f] = 0;
    *(ulonglong *)(piVar1 + 0x20) = (ulonglong)uStack_24 << 0x20;
    piVar1[0x22] = 0;
    piVar1[0x23] = 0;
    piVar1[0x24] = 0x3e4ccccd;
    piVar1[0x25] = 0;
    *(ulonglong *)(piVar1 + 0x26) = (ulonglong)uStack_c << 0x20;
    param_1[1] = param_1[1] + 0xa0;
  }
  lVar2 = param_1[1];
  *(undefined8 *)(lVar2 + -0x98) = *(undefined8 *)(param_2 + 2);
  *(int *)(lVar2 + -0x90) = param_2[4];
  return (int *)(lVar2 + -0xa0);
}



/* ===== 1803af550 FUN_1803af550 ===== */

void FUN_1803af550(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  
  uVar1 = DAT_1808ac118;
  lVar4 = *param_1;
  if (lVar4 != param_1[1]) {
    do {
      lVar2 = lVar4 + 0xa0;
      if (*(char *)(lVar4 + 0x14) == '\0') {
        pfVar3 = (float *)(lVar4 + 0x28);
        lVar2 = FUN_1803aac50(pfVar3,0,param_2,uVar1);
        if (0.0 < *pfVar3) goto LAB_1803af5a1;
        FUN_180540530(lVar4,lVar2,param_1[1] - lVar2);
        param_1[1] = param_1[1] + -0xa0;
      }
      else {
        *(undefined1 *)(lVar4 + 0x14) = 0;
LAB_1803af5a1:
        lVar4 = lVar2;
      }
    } while (lVar4 != param_1[1]);
  }
  return;
}



/* ===== 1803af600 FUN_1803af600 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803af600(longlong param_1,float param_2,char param_3,char param_4,float param_5,
                  int param_6,char param_7,float param_8,char param_9)

{
  undefined4 uVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res10 [6];
  float local_58;
  float local_54 [21];
  
  fVar6 = DAT_1808ac34c;
  *(char *)(param_1 + 0x14) = param_3;
  uVar1 = DAT_1808ac118;
  if (param_3 == '\0') {
    fVar5 = 0.0;
  }
  else {
    fVar5 = fVar6;
  }
  local_res10[0] = param_2;
  FUN_1803aac50(param_1 + 0x28,fVar5,param_2,DAT_1808ac118);
  if (param_4 == '\0') {
    fVar5 = 0.0;
  }
  else {
    fVar5 = fVar6;
  }
  FUN_1803aac50(param_1 + 0x40,fVar5,param_2,uVar1);
  if (0.0 <= param_5) {
    fVar5 = fVar6;
    if (param_5 <= fVar6) {
      fVar5 = param_5;
    }
  }
  else {
    fVar5 = 0.0;
  }
  FUN_1803aac50(param_1 + 0x58,fVar5,param_2,uVar1);
  pfVar3 = (float *)(param_1 + 0x70);
  if (param_7 == '\0') {
    FUN_1803aac50(pfVar3,0,param_2,uVar1);
    if (*pfVar3 <= 0.0) {
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x18) = param_6;
    *(undefined1 *)(param_1 + 0x1c) = 1;
    if (param_6 == 0) {
      FUN_1803aac50(pfVar3,DAT_1808ac1f4,param_2,uVar1);
    }
    else {
      FUN_1803aac50(pfVar3,fVar6,param_2,uVar1);
    }
  }
  if (param_9 == '\0') {
    FUN_1803aac50(param_1 + 0x88,0,param_2,DAT_1808ac188);
    if (*(char *)(param_1 + 0x24) == '\0') {
      return;
    }
  }
  else {
    FUN_1803aac50(param_1 + 0x88,fVar6,param_2,DAT_1808ac188);
    if (*(char *)(param_1 + 0x24) == '\0') {
      *(float *)(param_1 + 0x20) = param_8;
      *(undefined1 *)(param_1 + 0x24) = 1;
      return;
    }
  }
  fVar6 = param_8 - *(float *)(param_1 + 0x20);
  local_54[0] = 0.1;
  local_58 = 0.0001;
  pfVar3 = &local_58;
  if (DAT_1808abfa0 <= param_2) {
    pfVar3 = local_res10;
  }
  pfVar2 = local_54;
  if (param_2 <= DAT_1808ac0c0) {
    pfVar2 = pfVar3;
  }
  fVar4 = (float)((uint)fVar6 & _DAT_1808ade90) * *pfVar2 * DAT_1808ac900;
  fVar5 = DAT_1808abf94;
  if (DAT_1808abf94 <= fVar4) {
    fVar5 = fVar4;
  }
  if (fVar5 < (float)((uint)fVar6 & _DAT_1808ade90)) {
    param_8 = (float)(((uint)fVar5 ^ (uint)fVar6) & _DAT_1808ade90 ^ (uint)fVar6) +
              *(float *)(param_1 + 0x20);
  }
  *(float *)(param_1 + 0x20) = param_8;
  if ((param_9 == '\0') && (*(float *)(param_1 + 0x88) <= 0.0)) {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  return;
}



/* ===== 1803af820 FUN_1803af820 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803af820(int *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5,char *param_6)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  bool bVar6;
  float fVar7;
  int iVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  undefined1 uVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *******pppppppuVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_248 [32];
  undefined8 *******local_228;
  undefined8 local_220;
  char local_218;
  float local_214;
  float local_210 [2];
  float local_208;
  float local_204;
  float local_200 [2];
  undefined8 local_1f8;
  undefined8 local_1f0;
  float local_1e8 [4];
  float local_1d8 [2];
  float local_1d0 [2];
  float local_1c8 [2];
  float local_1c0 [2];
  float local_1b8 [2];
  float local_1b0 [2];
  float local_1a8 [2];
  float local_1a0 [2];
  float local_198 [2];
  float local_190 [2];
  float local_188 [2];
  float local_180 [2];
  float local_178 [2];
  float local_170 [2];
  float local_168 [2];
  float local_160 [2];
  float local_158 [2];
  float local_150 [2];
  float local_148 [2];
  float local_140 [2];
  float local_138;
  float local_134;
  float local_130 [2];
  float local_128 [2];
  float local_120 [2];
  undefined8 local_118;
  undefined8 local_110;
  float local_108;
  float local_104;
  undefined8 *******local_100 [3];
  ulonglong local_e8;
  ulonglong local_e0;
  
  fVar7 = DAT_1808ac1f4;
  if (param_1 != (int *)0x0) {
    local_e0 = DAT_180919500 ^ (ulonglong)auStack_248;
    lVar2 = *param_2;
    if ((((lVar2 != 0) && (0 < (int)param_2[1])) && (0 < *(int *)((longlong)param_2 + 0xc))) &&
       (fVar1 = param_5[3], 0.0 < fVar1)) {
      local_1f8._4_4_ = (float)((ulonglong)param_3 >> 0x20);
      fVar16 = local_1f8._4_4_ + DAT_1808ac1f4;
      local_1f8 = param_3;
      local_118 = param_4;
      fVar17 = (float)FUN_18053fc00(fVar16);
      fVar18 = (float)FUN_18053fc00((float)local_1f8 + fVar7);
      local_1f8 = CONCAT44(fVar17,fVar18);
      fVar19 = (float)FUN_18053fc00(local_118._4_4_ + fVar7);
      local_214 = (float)FUN_18053fc00();
      fVar16 = DAT_1808ac34c;
      local_200[1] = 0.0;
      if (param_6[0x34] == '\0') {
        local_200[0] = 0.0;
        local_1e8[0] = DAT_1808ac34c;
      }
      else {
        local_200[0] = DAT_1808ac34c;
        local_1e8[0] = 0.0;
      }
      local_1e8[1] = 1.0;
      if (param_6[0x28] == '\0') {
        fVar24 = 0.0;
        fVar22 = DAT_1808ac34c;
      }
      else {
        fVar24 = *(float *)(param_6 + 0x30);
        fVar22 = *(float *)(param_6 + 0x2c);
      }
      fVar19 = fVar19 + fVar17;
      fVar23 = local_214 + fVar18;
      local_208 = fVar23;
      local_204 = fVar19;
      if ((*param_6 != '\0') && (0.0 < *(float *)(param_6 + 4))) {
        local_110 = 0;
        local_108 = 0.0;
        if (0.0 <= fVar1) {
          local_104 = DAT_1808ac34c;
          if (fVar1 <= DAT_1808ac34c) {
            local_104 = fVar1;
          }
        }
        else {
          local_104 = 0.0;
        }
        local_104 = *(float *)(param_6 + 4) * local_104;
        local_210[0] = (float)FUN_1803aab30(&local_110,DAT_1808ac34c);
        local_1f0 = CONCAT44(fVar19 + fVar16,fVar23 + fVar16);
        local_110 = CONCAT44(fVar17 + fVar16,fVar18 + fVar16);
        if (((uint)local_210[0] & 0xff000000) != 0) {
          if ((lVar2 == *(longlong *)(param_1 + 0x1e)) && (*(longlong *)(param_1 + 0x1c) == 0)) {
            bVar6 = false;
          }
          else {
            iVar8 = param_1[0x2d];
            if (param_1[0x2c] == iVar8) {
              iVar14 = param_1[0x2c] + 1;
              if (iVar8 == 0) {
                iVar8 = 8;
              }
              else {
                iVar8 = iVar8 / 2 + iVar8;
              }
              if (iVar14 < iVar8) {
                iVar14 = iVar8;
              }
              FUN_1803f7030(param_1 + 0x2c,iVar14);
            }
            iVar8 = param_1[0x2c];
            lVar13 = *(longlong *)(param_1 + 0x2e);
            *(undefined8 *)(lVar13 + (longlong)iVar8 * 0x10) = 0;
            *(longlong *)(lVar13 + 8 + (longlong)iVar8 * 0x10) = lVar2;
            param_1[0x2c] = param_1[0x2c] + 1;
            param_1[0x1c] = 0;
            param_1[0x1d] = 0;
            *(longlong *)(param_1 + 0x1e) = lVar2;
            FUN_1803fc0a0(param_1);
            bVar6 = true;
          }
          FUN_1803fc3a0(param_1,6,4);
          local_220 = CONCAT44(local_220._4_4_,local_210[0]);
          local_228 = (undefined8 *******)local_1e8;
          FUN_1803fc4a0(param_1,&local_110,&local_1f0,local_200);
          if (bVar6) {
            FUN_1803fc340(param_1);
          }
        }
      }
      if (((param_6[8] == '\0') || (*(float *)(param_6 + 0x18) <= 0.0)) || (fVar22 <= 0.0)) {
        local_218 = '\0';
        local_1f0 = 0xffffffff;
      }
      else {
        local_218 = '\x01';
        FUN_1803fbe60(param_1);
        iVar8 = *param_1;
        lVar13 = (longlong)iVar8;
        lVar2 = *(longlong *)(param_1 + 2);
        *(code **)(lVar2 + -0x18 + lVar13 * 0x48) = FUN_18000c1f0;
        *(undefined8 *)(lVar2 + -0x10 + lVar13 * 0x48) = 0;
        *(undefined4 *)(lVar2 + -8 + lVar13 * 0x48) = 0;
        *(undefined4 *)(lVar2 + -4 + lVar13 * 0x48) = 0xffffffff;
        FUN_1803fbe60(param_1);
        local_1f0 = CONCAT44(param_1[8],iVar8 + -1);
      }
      fVar1 = DAT_1808acb94;
      fVar20 = fVar16 - fVar24;
      if (0.0 <= fVar20) {
        fVar21 = fVar16;
        if (fVar20 <= fVar16) {
          fVar21 = fVar20;
        }
      }
      else {
        fVar21 = 0.0;
      }
      local_120[0] = fVar21 * param_5[3];
      local_1e8[2] = 0.0;
      local_130[0] = param_5[2];
      local_128[0] = 0.0;
      local_148[0] = param_5[1];
      local_134 = 0.0;
      local_1d8[0] = *param_5;
      local_1d0[0] = 0.0;
      pfVar10 = local_148;
      if (param_5[1] <= 0.0) {
        pfVar10 = &local_134;
      }
      fVar20 = *pfVar10;
      if (fVar16 <= *pfVar10) {
        fVar20 = fVar16;
      }
      pfVar10 = local_130;
      if (param_5[2] <= 0.0) {
        pfVar10 = local_128;
      }
      fVar3 = *pfVar10;
      if (fVar16 <= *pfVar10) {
        fVar3 = fVar16;
      }
      pfVar10 = local_120;
      if (fVar21 * param_5[3] <= 0.0) {
        pfVar10 = local_1e8 + 2;
      }
      fVar21 = *pfVar10;
      if (fVar16 <= *pfVar10) {
        fVar21 = fVar16;
      }
      pfVar10 = local_1d8;
      if (*param_5 <= 0.0) {
        pfVar10 = local_1d0;
      }
      fVar4 = *pfVar10;
      if (fVar16 <= *pfVar10) {
        fVar4 = fVar16;
      }
      local_210[0] = (float)((int)(fVar4 * DAT_1808acb94 + fVar7) |
                            (int)(fVar21 * DAT_1808acb94 + fVar7) << 0x18 |
                            (int)(fVar3 * DAT_1808acb94 + fVar7) << 0x10 |
                            (int)(fVar20 * DAT_1808acb94 + fVar7) << 8);
      if (((uint)local_210[0] & 0xff000000) != 0) {
        lVar2 = *param_2;
        if ((lVar2 == *(longlong *)(param_1 + 0x1e)) && (*(longlong *)(param_1 + 0x1c) == 0)) {
          bVar6 = false;
        }
        else {
          if (param_1[0x2c] == param_1[0x2d]) {
            FUN_1803f7030(param_1 + 0x2c);
          }
          iVar8 = param_1[0x2c];
          lVar13 = *(longlong *)(param_1 + 0x2e);
          *(undefined8 *)(lVar13 + (longlong)iVar8 * 0x10) = 0;
          *(longlong *)(lVar13 + 8 + (longlong)iVar8 * 0x10) = lVar2;
          param_1[0x2c] = param_1[0x2c] + 1;
          param_1[0x1c] = 0;
          param_1[0x1d] = 0;
          *(longlong *)(param_1 + 0x1e) = lVar2;
          FUN_1803fc0a0(param_1);
          bVar6 = true;
        }
        FUN_1803fc3a0(param_1,6,4);
        local_220 = CONCAT44(local_220._4_4_,local_210[0]);
        local_228 = (undefined8 *******)local_1e8;
        FUN_1803fc4a0(param_1,&local_1f8,&local_208,local_200);
        if (bVar6) {
          FUN_1803fc340(param_1);
        }
      }
      if (0.0 < fVar24) {
        fVar18 = fVar22 * local_214 + fVar18;
        local_110 = CONCAT44(fVar19,fVar18);
        FUN_1803fc200(param_1,&local_1f8,&local_110,0);
        fVar22 = fVar24;
        if (fVar16 <= fVar24) {
          fVar22 = fVar16;
        }
        local_1a8[0] = fVar22 * param_5[3];
        local_1a0[0] = 0.0;
        local_1b8[0] = param_5[2];
        local_1b0[0] = 0.0;
        local_1c8[0] = param_5[1];
        local_1c0[0] = 0.0;
        local_198[0] = *param_5;
        local_190[0] = 0.0;
        pfVar10 = local_1c8;
        if (param_5[1] <= 0.0) {
          pfVar10 = local_1c0;
        }
        fVar20 = *pfVar10;
        if (fVar16 <= *pfVar10) {
          fVar20 = fVar16;
        }
        pfVar10 = local_1b8;
        if (param_5[2] <= 0.0) {
          pfVar10 = local_1b0;
        }
        fVar21 = *pfVar10;
        if (fVar16 <= *pfVar10) {
          fVar21 = fVar16;
        }
        pfVar10 = local_1a8;
        if (fVar22 * param_5[3] <= 0.0) {
          pfVar10 = local_1a0;
        }
        fVar22 = *pfVar10;
        if (fVar16 <= *pfVar10) {
          fVar22 = fVar16;
        }
        pfVar10 = local_198;
        if (*param_5 <= 0.0) {
          pfVar10 = local_190;
        }
        fVar3 = *pfVar10;
        if (fVar16 <= *pfVar10) {
          fVar3 = fVar16;
        }
        local_214 = (float)((int)(fVar3 * fVar1 + fVar7) |
                           (int)(fVar22 * fVar1 + fVar7) << 0x18 |
                           (int)(fVar21 * fVar1 + fVar7) << 0x10 |
                           (int)(fVar20 * fVar1 + fVar7) << 8);
        if (((uint)local_214 & 0xff000000) != 0) {
          lVar2 = *param_2;
          if ((lVar2 == *(longlong *)(param_1 + 0x1e)) && (*(longlong *)(param_1 + 0x1c) == 0)) {
            bVar6 = false;
          }
          else {
            if (param_1[0x2c] == param_1[0x2d]) {
              FUN_1803f7030(param_1 + 0x2c);
            }
            iVar8 = param_1[0x2c];
            lVar13 = *(longlong *)(param_1 + 0x2e);
            *(undefined8 *)(lVar13 + (longlong)iVar8 * 0x10) = 0;
            *(longlong *)(lVar13 + 8 + (longlong)iVar8 * 0x10) = lVar2;
            param_1[0x2c] = param_1[0x2c] + 1;
            param_1[0x1c] = 0;
            param_1[0x1d] = 0;
            *(longlong *)(param_1 + 0x1e) = lVar2;
            FUN_1803fc0a0(param_1);
            bVar6 = true;
          }
          FUN_1803fc3a0(param_1,6,4);
          local_220 = CONCAT44(local_220._4_4_,local_214);
          local_228 = (undefined8 *******)local_1e8;
          FUN_1803fc4a0(param_1,&local_1f8,&local_208,local_200);
          if (bVar6) {
            FUN_1803fc340(param_1);
          }
        }
        iVar14 = param_1[0x28];
        iVar8 = iVar14 + -1;
        param_1[0x28] = iVar8;
        if (iVar8 == 0) {
          puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0xe) + 0x34);
        }
        else {
          puVar9 = (undefined8 *)((longlong)(iVar14 + -2) * 0x10 + *(longlong *)(param_1 + 0x2a));
        }
        uVar5 = puVar9[1];
        *(undefined8 *)(param_1 + 0x18) = *puVar9;
        *(undefined8 *)(param_1 + 0x1a) = uVar5;
        FUN_1803fbff0(param_1);
        local_110 = CONCAT44(fVar17,fVar18);
        FUN_1803fc200(param_1,&local_110,&local_208,0);
        fVar17 = fVar24 * fVar7;
        if (fVar16 <= fVar24 * fVar7) {
          fVar17 = fVar16;
        }
        local_168[0] = fVar17 * param_5[3];
        local_160[0] = 0.0;
        local_178[0] = param_5[2];
        local_170[0] = 0.0;
        local_188[0] = param_5[1];
        local_180[0] = 0.0;
        local_158[0] = *param_5;
        local_150[0] = 0.0;
        pfVar10 = local_188;
        if (param_5[1] <= 0.0) {
          pfVar10 = local_180;
        }
        fVar18 = *pfVar10;
        if (fVar16 <= *pfVar10) {
          fVar18 = fVar16;
        }
        pfVar10 = local_178;
        if (param_5[2] <= 0.0) {
          pfVar10 = local_170;
        }
        fVar24 = *pfVar10;
        if (fVar16 <= *pfVar10) {
          fVar24 = fVar16;
        }
        pfVar10 = local_168;
        if (fVar17 * param_5[3] <= 0.0) {
          pfVar10 = local_160;
        }
        fVar17 = *pfVar10;
        if (fVar16 <= *pfVar10) {
          fVar17 = fVar16;
        }
        pfVar10 = local_158;
        if (*param_5 <= 0.0) {
          pfVar10 = local_150;
        }
        fVar22 = *pfVar10;
        if (fVar16 <= *pfVar10) {
          fVar22 = fVar16;
        }
        local_214 = (float)((int)(fVar22 * fVar1 + fVar7) |
                           (int)(fVar17 * fVar1 + fVar7) << 0x18 |
                           (int)(fVar24 * fVar1 + fVar7) << 0x10 |
                           (int)(fVar18 * fVar1 + fVar7) << 8);
        if (((uint)local_214 & 0xff000000) != 0) {
          lVar2 = *param_2;
          if ((lVar2 == *(longlong *)(param_1 + 0x1e)) && (*(longlong *)(param_1 + 0x1c) == 0)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
            if (param_1[0x2c] == param_1[0x2d]) {
              FUN_1803f7030(param_1 + 0x2c);
            }
            iVar8 = param_1[0x2c];
            lVar13 = *(longlong *)(param_1 + 0x2e);
            *(undefined8 *)(lVar13 + (longlong)iVar8 * 0x10) = 0;
            *(longlong *)(lVar13 + 8 + (longlong)iVar8 * 0x10) = lVar2;
            param_1[0x2c] = param_1[0x2c] + 1;
            param_1[0x1c] = 0;
            param_1[0x1d] = 0;
            *(longlong *)(param_1 + 0x1e) = lVar2;
            FUN_1803fc0a0(param_1);
          }
          FUN_1803fc3a0(param_1,6,4);
          local_220 = CONCAT44(local_220._4_4_,local_214);
          local_228 = (undefined8 *******)local_1e8;
          FUN_1803fc4a0(param_1,&local_1f8,&local_208,local_200);
          if (bVar6) {
            FUN_1803fc340(param_1);
          }
        }
        iVar14 = param_1[0x28];
        iVar8 = iVar14 + -1;
        param_1[0x28] = iVar8;
        if (iVar8 == 0) {
          puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0xe) + 0x34);
        }
        else {
          puVar9 = (undefined8 *)((longlong)(iVar14 + -2) * 0x10 + *(longlong *)(param_1 + 0x2a));
        }
        uVar5 = puVar9[1];
        *(undefined8 *)(param_1 + 0x18) = *puVar9;
        *(undefined8 *)(param_1 + 0x1a) = uVar5;
        FUN_1803fbff0(param_1);
      }
      if (local_218 != '\0') {
        fVar17 = param_5[3];
        if (0.0 <= fVar17) {
          local_104 = fVar16;
          if (fVar17 <= fVar16) {
            local_104 = fVar17;
          }
        }
        else {
          local_104 = 0.0;
        }
        local_110 = *(longlong *)(param_6 + 0xc);
        local_108 = *(float *)(param_6 + 0x14);
        local_104 = local_104 * *(float *)(param_6 + 0x18);
        FUN_18000ced0(param_1,&local_1f0,&local_110);
      }
      if ((param_6[0x1c] != '\0') && (0.0 < *(float *)(param_6 + 0x24))) {
        local_210[0] = 0.0;
        if ((DAT_18091a1b0 != '\0') && (0 < DAT_18091a1b4)) {
          if (DAT_18091a1b4 < 100) {
            iVar8 = 100;
          }
          else {
            iVar8 = DAT_18091a1b4;
            if (200 < DAT_18091a1b4) {
              iVar8 = 200;
            }
          }
          if (fVar16 < (float)iVar8 / DAT_1808acb08) {
            iVar8 = 100;
            if ((99 < DAT_18091a1b4) && (iVar8 = DAT_18091a1b4, 200 < DAT_18091a1b4)) {
              iVar8 = 200;
            }
            local_210[0] = (float)(int)(((float)iVar8 / DAT_1808acb08 - fVar16) * DAT_1808ac710);
          }
        }
        local_200[0] = 5.60519e-45;
        local_214 = 0.0;
        pfVar10 = &local_214;
        if (-1 < (int)local_210[0]) {
          pfVar10 = local_210;
        }
        pfVar11 = local_200;
        if ((int)local_210[0] < 5) {
          pfVar11 = pfVar10;
        }
        if (*pfVar11 == 0.0) {
          local_110 = DAT_1811079f0;
          if (DAT_1811079f0 == 0) {
            local_110 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
          }
          uVar12 = 1;
          local_108 = DAT_1808ac864;
        }
        else {
          local_110 = DAT_181107a28;
          if (DAT_181107a28 == 0) {
            local_110 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
          }
          local_108 = *(float *)(&DAT_1806de2a8 + (longlong)(int)*pfVar11 * 4) * _DAT_1808ac3cc;
          uVar12 = 0;
        }
        local_104._0_3_ = CONCAT21(local_104._1_2_,uVar12);
        FUN_18003a390(local_100,*(undefined4 *)(param_6 + 0x20));
        pppppppuVar15 = local_100;
        if (0xf < local_e8) {
          pppppppuVar15 = local_100[0];
        }
        FUN_1803ab060(&local_208,&local_110,pppppppuVar15);
        fVar17 = local_208;
        fVar18 = local_204;
        if (fVar16 < *(float *)(param_6 + 0x38)) {
          fVar17 = local_208 * DAT_1808ac27c;
          fVar18 = local_204 + _DAT_1808acdc8;
        }
        local_228 = local_100;
        if (0xf < local_e8) {
          local_228 = local_100[0];
        }
        local_140[0] = *(float *)(param_6 + 0x24) * param_5[3] * DAT_1808ac294;
        local_138 = 0.0;
        pfVar10 = local_140;
        if (local_140[0] <= 0.0) {
          pfVar10 = &local_138;
        }
        fVar24 = *pfVar10;
        if (fVar16 <= *pfVar10) {
          fVar24 = fVar16;
        }
        local_220 = 0;
        FUN_1803ab1a0(param_1,&local_110,CONCAT44(fVar19 - fVar18,fVar23 - fVar17),
                      (int)(fVar24 * fVar1 + fVar7) << 0x18 | 0xffffff);
        FUN_18000f890(local_100);
      }
    }
  }
  return;
}



/* ===== 1803b04e0 FUN_1803b04e0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803b04e0(longlong *param_1,ulonglong param_2,float param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  code *pcVar4;
  uint3 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float *pfVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulonglong *puVar25;
  int *piVar26;
  longlong *plVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  char cVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined8 *puVar36;
  undefined8 uVar37;
  undefined1 uVar38;
  char cVar39;
  longlong *plVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uStack_1330;
  undefined1 auStack_1328 [8];
  undefined1 auStack_1320 [24];
  ulonglong local_1308;
  int local_1300;
  char local_12f8;
  float local_12f0;
  undefined1 local_12e8;
  bool local_12d8;
  char local_12d7;
  char local_12d6;
  float *local_12d0;
  float *local_12c8;
  float *pfStack_12c0;
  longlong lStack_12b8;
  undefined4 local_12b0;
  undefined2 uStack_12ac;
  undefined1 local_12a8;
  undefined8 local_12a4;
  undefined1 local_129c;
  float local_1298;
  float local_1290;
  undefined8 *local_1288;
  undefined8 *puStack_1280;
  undefined8 *local_1278;
  undefined8 local_1270;
  float local_1268;
  float local_1264;
  float local_1260;
  float local_125c;
  undefined8 local_1258;
  undefined4 local_1250;
  float local_124c;
  float local_1248;
  float local_1244;
  float local_1240;
  undefined4 local_123c;
  undefined4 local_1238;
  undefined4 local_1234;
  undefined8 local_1230;
  longlong *local_1228;
  longlong *plStack_1220;
  longlong local_1218;
  float local_1210;
  longlong *local_1208;
  longlong local_1200;
  undefined1 local_11f8 [16];
  undefined1 local_11e8 [17];
  undefined2 local_11d7;
  undefined1 local_11d5;
  undefined2 local_11d3;
  undefined1 local_11d1;
  longlong *local_11d0;
  longlong *local_11c8;
  longlong local_11c0;
  float local_11b8;
  float local_11b4;
  float local_11b0 [2];
  longlong local_11a8;
  float local_11a0;
  float local_119c;
  undefined1 *local_1198;
  ulonglong local_1190;
  undefined1 local_1188 [4096];
  undefined4 local_188 [2];
  char *local_180;
  undefined4 local_178;
  undefined2 local_174;
  undefined1 local_172;
  undefined8 local_170;
  undefined4 local_168;
  undefined2 local_164;
  undefined4 local_160;
  char *local_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined1 local_14a;
  undefined8 local_148;
  undefined4 local_140;
  undefined2 local_13c;
  undefined4 local_138;
  char *local_130;
  undefined4 local_128;
  undefined2 local_124;
  undefined1 local_122;
  undefined8 local_120;
  undefined4 local_118;
  undefined2 local_114;
  undefined4 local_110;
  char *local_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined1 local_fa;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  ulonglong local_e8 [22];
  
  local_e8[0] = DAT_180919500 ^ (ulonglong)auStack_1328;
  local_11f8._0_8_ = param_4;
  local_1200 = param_5;
  local_11a8 = param_1[2];
  cVar11 = *(char *)(local_11a8 + 0x1180);
  cVar39 = *(char *)(local_11a8 + 0x1181);
  if (cVar39 == '\0') {
    local_12d8 = *(char *)(local_11a8 + 0x1187) == '\0';
  }
  else {
    local_12d8 = true;
  }
  if (*(char *)(*param_1 + 0x20) == '\0') {
    local_125c = *(float *)(*param_1 + 0x1c);
  }
  else {
    local_125c = -NAN;
  }
  local_12d7 = cVar39;
  local_12d6 = cVar11;
  local_1260 = param_3;
  local_1258 = param_2;
  local_1208 = param_1;
  plVar13 = (longlong *)FUN_1803b65e0(param_1,local_11e8);
  lVar32 = *plVar13;
  lVar21 = lVar32 + 0x18;
  *(longlong *)(lVar32 + 0x48) = param_1[5];
  fVar43 = DAT_1808ac34c;
  fVar41 = DAT_1808ac1f4;
  fVar50 = DAT_1808ac140;
  local_1270 = lVar32;
  local_1230 = lVar21;
  if (*(char *)(*param_1 + 0x20) == '\0') {
    FUN_1803af550(lVar21);
    FUN_1803af550(lVar32 + 0x30);
    bVar7 = false;
    piVar26 = *(int **)(param_1[1] + 0x488);
    piVar2 = *(int **)(param_1[1] + 0x490);
    piVar16 = piVar26;
    if (piVar26 != piVar2) {
      do {
        if ((bVar7) || ((*(char *)((longlong)piVar16 + 0x15) != '\0' && ((char)piVar16[5] != '\0')))
           ) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        piVar16 = piVar16 + 10;
      } while (piVar16 != piVar2);
      do {
        if (*piVar26 != 0) {
          if (((char)piVar26[5] == '\0') || (iVar12 = piVar26[6], iVar12 < 2)) {
            lVar21 = 0;
            iVar12 = 0;
          }
          else {
            lVar21 = 1;
          }
          cVar31 = (char)lVar21;
          if (cVar11 == '\0') {
LAB_1803b0b73:
            if (((char)piVar26[5] != '\0') && (cVar39 != '\0')) {
              uVar17 = FUN_1803af3b0(local_1270 + 0x30,piVar26);
              fVar44 = fVar41;
              if (*(char *)((longlong)piVar26 + 0x15) != '\0') {
                fVar44 = fVar43;
              }
              local_12e8 = 0;
              local_12f0 = 0.0;
              local_1308 = CONCAT44(local_1308._4_4_,fVar44);
              local_1300 = iVar12;
              local_12f8 = cVar31;
              FUN_1803af600(uVar17);
            }
          }
          else {
            uVar17 = FUN_1803af3b0(local_1230,piVar26);
            if (((local_12d8 != false) || (!bVar7)) || ((char)piVar26[5] == '\0')) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            iVar1 = piVar26[8];
            local_1300 = iVar1;
            if (piVar26[7] < iVar1) {
              local_1300 = piVar26[7];
            }
            if (iVar1 < 1) {
              local_12f0 = 0.0;
            }
            else {
              local_12f0 = (float)local_1300 / (float)iVar1;
            }
            bVar3 = 5 < piVar26[4] - 1U;
            uVar5 = (uint3)((uint)iVar1 >> 8);
            if (((char)piVar26[5] == '\0') || (bVar8 = false, local_12d8 != false)) {
              if ((*(char *)(local_11a8 + 0x1182) == '\0') || ((char)piVar26[9] == '\0')) {
                if (*piVar26 == 0x1f) {
                  if ((*(char *)(local_11a8 + 0x1183) == '\0') ||
                     (*(char *)((longlong)piVar26 + 0x25) == '\0')) goto LAB_1803b0a82;
                  bVar8 = true;
                }
                else if (((*(char *)(local_11a8 + 0x1183) != '\0') &&
                         (*(char *)((longlong)piVar26 + 0x25) != '\0')) ||
                        ((*(char *)(local_11a8 + 0x1184) != '\0' && ((!bVar3 && (local_1300 < 1)))))
                        ) {
                  bVar8 = true;
                }
                else {
LAB_1803b0a82:
                  bVar8 = false;
                }
              }
              else {
                bVar8 = true;
              }
            }
            if ((((*(char *)(local_11a8 + 0x1185) == '\0') || (bVar3)) || (bVar8)) ||
               (local_1300 < 0)) {
              local_12e8 = 0;
            }
            else {
              local_12e8 = 1;
            }
            if (*(char *)(local_11a8 + 0x1186) == '\0') {
              local_1300 = iVar12;
            }
            else {
              if (((bVar3) || (cVar31 != '\0')) || ((local_1300 < 0 || (fVar50 < local_12f0)))) {
                if (cVar31 == '\0') {
                  lVar21 = (ulonglong)uVar5 << 8;
                  local_1300 = 0;
                  goto LAB_1803b0b02;
                }
                local_1300 = iVar12;
              }
              lVar21 = CONCAT71((uint7)uVar5,1);
            }
LAB_1803b0b02:
            if ((bVar8) || (*(char *)((longlong)piVar26 + 0x15) == '\0')) {
              uVar38 = *(undefined1 *)((longlong)piVar26 + 0x16);
              fVar44 = fVar41;
              if ((*(char *)((longlong)piVar26 + 0x15) != '\0') || (bVar9)) goto LAB_1803b0b18;
              uVar37 = 0;
            }
            else {
              uVar38 = *(undefined1 *)((longlong)piVar26 + 0x16);
              fVar44 = fVar43;
LAB_1803b0b18:
              uVar37 = 1;
            }
            local_12f8 = (char)lVar21;
            local_1308 = CONCAT44(local_1308._4_4_,fVar44);
            FUN_1803af600(uVar17,lVar21,uVar37,uVar38);
            if (*(char *)((longlong)piVar26 + 0x15) == '\0') {
              cVar39 = local_12d7;
              goto LAB_1803b0b73;
            }
          }
          cVar11 = local_12d6;
        }
        piVar26 = piVar26 + 10;
        cVar39 = local_12d7;
      } while (piVar26 != piVar2);
      lVar21 = local_1230;
      param_5 = local_1200;
    }
    lVar32 = local_1270;
  }
  else {
    local_12d0 = (float *)CONCAT44(local_12d0._4_4_,0x28);
    local_12c8 = (float *)0x1806f1780;
    pfStack_12c0 = (float *)CONCAT17(pfStack_12c0._7_1_,5);
    lStack_12b8 = 0;
    local_12b0 = 0;
    uStack_12ac = 0;
    lVar14 = FUN_1803af3b0(lVar21,&local_12d0);
    *(undefined1 *)(lVar14 + 0x14) = 1;
    FUN_1803aac50(lVar14 + 0x28);
    local_188[0] = 0x2c;
    local_180 = "hegrenade";
    local_178 = 9;
    local_174 = 1;
    local_172 = 0;
    local_170 = 0;
    local_168 = 0;
    local_164 = 0;
    local_160 = 0x2e;
    local_158 = "molotov";
    local_150 = 9;
    local_14c = 1;
    local_14a = 0;
    local_148 = 0;
    local_140 = 0;
    local_13c = 0;
    local_138 = 0x2d;
    local_130 = "smokegrenade";
    local_128 = 9;
    local_124 = 1;
    local_122 = 0;
    local_120 = 0;
    local_118 = 0;
    local_114 = 0;
    local_110 = 0x2b;
    local_108 = "flashbang";
    local_100 = 9;
    local_fc = 1;
    local_fa = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 0;
    puVar25 = (ulonglong *)local_188;
    if (cVar39 == '\0') {
      do {
        lVar14 = FUN_1803af3b0(lVar32 + 0x30,puVar25);
        *(undefined1 *)(lVar14 + 0x14) = 1;
        *(undefined8 *)(lVar14 + 0x58) = 0;
        *(undefined8 *)(lVar14 + 0x60) = 0;
        *(undefined4 *)(lVar14 + 0x68) = 0;
        *(undefined1 *)(lVar14 + 0x6c) = 0;
        *(undefined2 *)(lVar14 + 0x6d) = local_11d3;
        *(undefined1 *)(lVar14 + 0x6f) = local_11d1;
        lVar15 = FUN_1803aac50(lVar14 + 0x58);
        if ((int)*puVar25 == 0x2b) {
          *(undefined4 *)(lVar15 + 0x18) = 2;
          *(undefined1 *)(lVar15 + 0x1c) = 1;
          *(undefined4 *)(lVar15 + 0x70) = 0;
          *(undefined8 *)(lVar15 + 0x74) = 0;
          *(undefined8 *)(lVar15 + 0x7c) = 0;
          *(undefined1 *)(lVar15 + 0x84) = 0;
          *(undefined2 *)(lVar14 + 0x85) = local_11d3;
          *(undefined1 *)(lVar14 + 0x87) = local_11d1;
          FUN_1803aac50();
        }
        FUN_1803aac50(lVar14 + 0x28);
        puVar25 = puVar25 + 5;
      } while (puVar25 != local_e8);
    }
    else {
      do {
        lVar14 = FUN_1803af3b0(lVar32 + 0x30,puVar25);
        *(undefined1 *)(lVar14 + 0x14) = 1;
        *(undefined8 *)(lVar14 + 0x58) = 0;
        *(undefined8 *)(lVar14 + 0x60) = 0;
        *(undefined4 *)(lVar14 + 0x68) = 0;
        *(undefined1 *)(lVar14 + 0x6c) = 0;
        *(undefined2 *)(lVar14 + 0x6d) = local_11d3;
        *(undefined1 *)(lVar14 + 0x6f) = local_11d1;
        lVar15 = FUN_1803aac50(lVar14 + 0x58);
        if ((int)*puVar25 == 0x2b) {
          *(undefined4 *)(lVar15 + 0x18) = 2;
          *(undefined1 *)(lVar15 + 0x1c) = 1;
          *(undefined4 *)(lVar15 + 0x70) = 0;
          *(undefined8 *)(lVar15 + 0x74) = 0;
          *(undefined8 *)(lVar15 + 0x7c) = 0;
          *(undefined1 *)(lVar15 + 0x84) = 0;
          *(undefined2 *)(lVar14 + 0x85) = local_11d3;
          *(undefined1 *)(lVar14 + 0x87) = local_11d1;
          FUN_1803aac50();
        }
        FUN_1803aac50(lVar14 + 0x28);
        puVar25 = puVar25 + 5;
      } while (puVar25 != local_e8);
    }
  }
  plVar13 = local_1208;
  puVar30 = auStack_1328;
  puVar29 = auStack_1328;
  puVar28 = auStack_1328;
  local_1290 = fVar43;
  if (0 < DAT_18091a1b4) {
    if (DAT_18091a1b4 < 100) {
      iVar12 = 100;
    }
    else {
      iVar12 = DAT_18091a1b4;
      if (200 < DAT_18091a1b4) {
        iVar12 = 200;
      }
    }
    local_1290 = (float)iVar12 / DAT_1808acb08;
  }
  if (DAT_18091a1b0 == '\0') {
    local_1290 = (float)*(int *)(param_5 + 0xc) * fVar50 + fVar43;
  }
  fVar50 = local_1290;
  local_1240 = *(float *)(param_5 + 0x20);
  lVar14 = *local_1208;
  fVar41 = local_1240 * *(float *)(lVar14 + 0x24);
  local_1268 = fVar41;
  if ((*(char *)(lVar14 + 0x20) != '\0') && (local_1268 = DAT_1808ac0c0, DAT_1808ac0c0 <= fVar41)) {
    local_1268 = fVar41;
  }
  if (local_1268 <= 0.0) goto LAB_1803b1ff4;
  local_123c = *(undefined4 *)(param_5 + 0x14);
  local_1238 = *(undefined4 *)(param_5 + 0x18);
  local_1234 = *(undefined4 *)(param_5 + 0x1c);
  local_11a0 = local_1290 * DAT_1808ac8d4;
  local_11b8 = local_1290 * DAT_1808ac880;
  if (*(char *)(lVar14 + 0x20) == '\0') {
    local_119c = *(float *)(lVar14 + 0x14) - *(float *)(lVar14 + 0xc);
  }
  else {
    local_119c = 0.0;
  }
  local_12d0 = &local_11b8;
  local_12c8 = &local_11a0;
  pfStack_12c0 = &local_119c;
  lStack_12b8 = param_5;
  FUN_1803b2070(&local_12d0,&local_11d0,lVar21,0);
  FUN_1803b2070(&local_12d0,&local_1228,lVar32 + 0x30,1);
  plVar40 = local_11c8;
  plVar27 = local_11d0;
  lVar21 = (longlong)local_11c8 - (longlong)local_11d0;
  lVar32 = (lVar21 >> 4) * -0x5555555555555555;
  if (lVar32 < 0x21) {
    FUN_1803b5ad0(local_11d0,local_11c8);
  }
  else {
    lVar21 = lVar21 / 6 + (lVar21 >> 0x3f);
    FUN_1803b5c10(&local_1198,lVar32 - ((lVar21 >> 4) - (lVar21 >> 0x3f)));
    local_1300 = CONCAT31(local_1300._1_3_,local_12d7);
    local_1308 = local_1190;
    FUN_1803b5cc0(plVar27,plVar40,lVar32,local_1198);
    if (0x55 < local_1190) {
      FUN_1803d64e0(local_1198);
    }
  }
  plVar40 = plStack_1220;
  plVar27 = local_1228;
  lVar21 = (longlong)plStack_1220 - (longlong)local_1228;
  lVar32 = (lVar21 >> 4) * -0x5555555555555555;
  if (lVar32 < 0x21) {
    FUN_1803b5dc0();
  }
  else {
    lVar21 = lVar21 / 6 + (lVar21 >> 0x3f);
    FUN_1803b5c10(&local_1198,lVar32 - ((lVar21 >> 4) - (lVar21 >> 0x3f)));
    local_1300 = CONCAT31(local_1300._1_3_,local_12d7);
    local_1308 = local_1190;
    FUN_1803b6000(plVar27,plVar40,lVar32,local_1198);
    if (0x55 < local_1190) {
      FUN_1803d64e0();
    }
  }
  plVar27 = local_11c8;
  if ((local_11d0 != local_11c8) || (plVar40 = local_1228, local_1228 != plStack_1220)) {
    local_1244 = fVar50 + fVar50;
    bVar7 = false;
    fVar41 = 0.0;
    for (plVar40 = local_11d0; plVar40 != local_11c8; plVar40 = plVar40 + 6) {
      fVar44 = *(float *)(*plVar40 + 0x28);
      if (fVar44 <= fVar41) {
        fVar44 = fVar41;
      }
      if ((bVar7) || (bVar7 = false, *(char *)(*plVar40 + 0x14) != '\0')) {
        bVar7 = true;
      }
      fVar41 = fVar44;
    }
    cVar11 = *(char *)(*plVar13 + 0x20);
    if ((cVar11 != '\0') || (!bVar7)) {
      if (0.0 <= fVar41) {
        fVar44 = fVar43;
        if (fVar41 <= fVar43) {
          fVar44 = fVar41;
        }
      }
      else {
        fVar44 = 0.0;
      }
      fVar41 = (DAT_1808ac658 - (fVar44 + fVar44)) * fVar44 * fVar44;
    }
    else {
      fVar41 = fVar43;
    }
    bVar7 = false;
    fVar44 = 0.0;
    for (plVar40 = local_1228; plVar40 != plStack_1220; plVar40 = plVar40 + 6) {
      fVar54 = *(float *)(*plVar40 + 0x28);
      if (fVar54 <= fVar44) {
        fVar54 = fVar44;
      }
      if ((bVar7) || (bVar7 = false, *(char *)(*plVar40 + 0x14) != '\0')) {
        bVar7 = true;
      }
      fVar44 = fVar54;
    }
    if ((cVar11 != '\0') || (!bVar7)) {
      if (0.0 <= fVar44) {
        fVar54 = fVar43;
        if (fVar44 <= fVar43) {
          fVar54 = fVar44;
        }
      }
      else {
        fVar54 = 0.0;
      }
      fVar44 = (DAT_1808ac658 - (fVar54 + fVar54)) * fVar54 * fVar54;
    }
    else {
      fVar44 = fVar43;
    }
    fVar52 = 0.0;
    local_1248 = 0.0;
    fVar54 = 0.0;
    uVar35 = 0;
    if (((longlong)plStack_1220 - (longlong)local_1228 >> 4) * -0x5555555555555555 != 0) {
      while( true ) {
        fVar45 = (float)((int *)local_1228[uVar35 * 6])[10];
        if (0.0 <= fVar45) {
          fVar51 = fVar43;
          if (fVar45 <= fVar43) {
            fVar51 = fVar45;
          }
        }
        else {
          fVar51 = 0.0;
        }
        fVar45 = (DAT_1808ac658 - (fVar51 + fVar51)) * fVar51 * fVar51;
        local_1248 = fVar45 * *(float *)(local_1228 + uVar35 * 6 + 4) + fVar52;
        if ((ulonglong)(((longlong)plStack_1220 - (longlong)local_1228 >> 4) * -0x5555555555555555)
            <= uVar35 + 1) break;
        fVar52 = local_1244;
        if (*(int *)local_1228[uVar35 * 6] == 0x2b) {
          fVar52 = local_1244 * DAT_1808ac21c;
        }
        fVar52 = fVar52 * fVar45 + local_1248;
        fVar45 = *(float *)((longlong)local_1228 + uVar35 * 0x30 + 0x24);
        if (fVar45 <= fVar54) {
          fVar45 = fVar54;
        }
        fVar54 = fVar45;
        uVar35 = uVar35 + 1;
      }
      fVar43 = *(float *)((longlong)local_1228 + uVar35 * 0x30 + 0x24);
      if (fVar43 <= fVar54) {
        fVar43 = fVar54;
      }
      fVar54 = fVar43;
    }
    fVar43 = local_1248;
    fVar52 = 0.0;
    fVar45 = 0.0;
    local_1288 = (undefined8 *)0x0;
    puStack_1280 = (undefined8 *)0x0;
    puVar36 = (undefined8 *)0x0;
    local_1278 = (undefined8 *)0x0;
    puVar19 = (undefined8 *)0x0;
    if (local_11d0 != local_11c8) {
      plVar40 = local_11d0;
      fVar51 = fVar52;
      fVar53 = fVar45;
      cVar11 = local_12d8;
      do {
        fVar49 = *(float *)(plVar40 + 4);
        fVar47 = *(float *)((longlong)plVar40 + 0x24);
        if (cVar11 == '\0') {
          if (*(int *)(*plVar40 + 0x10) == 9) {
            if (puVar19 == puVar36) {
              uVar35 = (longlong)puVar19 - (longlong)local_1288;
              lVar21 = (longlong)uVar35 >> 3;
              if (lVar21 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_18000fb10();
              }
              uVar34 = lVar21 + 1;
              uVar33 = (longlong)puVar36 - (longlong)local_1288 >> 3;
              if (0x1fffffffffffffff - (uVar33 >> 1) < uVar33) {
                uVar22 = 0x1fffffffffffffff;
              }
              else {
                uVar33 = (uVar33 >> 1) + uVar33;
                uVar22 = uVar34;
                if (uVar34 <= uVar33) {
                  uVar22 = uVar33;
                }
                if (0x1fffffffffffffff < uVar22) {
                    /* WARNING: Subroutine does not return */
                  FUN_18000d840();
                }
              }
              plVar13 = (longlong *)(uVar22 * 8);
              puVar18 = (undefined8 *)FUN_18000fb70(plVar13);
              puVar36 = (undefined8 *)(uVar35 & 0xfffffffffffffff8);
              *(longlong **)((longlong)puVar36 + (longlong)puVar18) = plVar40;
              if (puVar19 == puStack_1280) {
                uVar35 = (longlong)puStack_1280 - (longlong)local_1288;
                puVar23 = puVar18;
                puVar24 = local_1288;
              }
              else {
                FUN_180540530(puVar18,local_1288,(longlong)puVar19 - (longlong)local_1288);
                uVar35 = (longlong)puStack_1280 - (longlong)puVar19;
                puVar23 = (undefined8 *)((longlong)(puVar18 + 1) + (longlong)puVar36);
                puVar24 = puVar19;
              }
              FUN_180540530(puVar23,puVar24);
              if (local_1288 != (undefined8 *)0x0) {
                uVar33 = ((longlong)local_1278 - (longlong)local_1288 >> 3) * 8;
                if (uVar33 < 0x1000) {
                  puVar19 = local_1288;
                }
                else {
                  if (0x1f < (ulonglong)((longlong)local_1288 + (-8 - (longlong)local_1288[-1]))) {
                    pcVar4 = (code *)swi(0x29);
                    (*pcVar4)(5);
                    puVar28 = auStack_1320;
                    goto LAB_1803b1257;
                  }
                  uVar33 = uVar33 + 0x27;
                  puVar19 = (undefined8 *)local_1288[-1];
                }
                thunk_FUN_1803d64e0(puVar19,uVar33);
              }
              puVar19 = puVar18 + uVar34;
              local_1278 = (undefined8 *)((longlong)plVar13 + (longlong)puVar18);
              local_1288 = puVar18;
            }
            else {
              *puVar19 = plVar40;
              puVar19 = puStack_1280 + 1;
            }
            puVar36 = local_1278;
            puStack_1280 = puVar19;
          }
          cVar11 = local_12d8;
        }
        fVar52 = fVar49;
        if (fVar49 <= fVar51) {
          fVar52 = fVar51;
        }
        fVar45 = fVar47;
        if (fVar47 <= fVar53) {
          fVar45 = fVar53;
        }
        plVar40 = plVar40 + 6;
        fVar51 = fVar52;
        fVar53 = fVar45;
      } while (plVar40 != plVar27);
      plVar13 = local_1208;
    }
    fVar49 = local_1244;
    fVar47 = DAT_1808ac21c;
    uVar35 = 0x1fffffffffffffff;
    plVar40 = (longlong *)((longlong)puVar19 - (longlong)local_1288 >> 3);
    puVar36 = local_1288;
    fVar51 = fVar52;
    fVar53 = fVar45;
    if ((longlong)plVar40 < 0x21) {
      FUN_1803b6100(local_1288);
      puVar29 = auStack_1328;
    }
    else {
LAB_1803b1257:
      uVar33 = (longlong)plVar40 - (longlong)plVar40 / 2;
      uVar34 = 0x7fffffffffffffff;
      if ((longlong)uVar33 < 0x7fffffffffffffff) {
        uVar34 = uVar33;
      }
      if (0x200 < uVar33) {
        if ((uVar34 <= uVar35) && (0 < (longlong)uVar34)) {
          do {
            *(undefined8 *)(puVar28 + -8) = 0x1803b12a4;
            local_1198 = (undefined1 *)FUN_1804ed030(uVar34 * 8,&DAT_1805757b2);
            if (local_1198 != (undefined1 *)0x0) {
              if (0x200 < uVar34) goto LAB_1803b12d3;
              goto LAB_1803b12b8;
            }
            uVar34 = uVar34 >> 1;
          } while (uVar34 != 0);
        }
        local_1198 = (undefined1 *)0x0;
LAB_1803b12b8:
        *(undefined8 *)(puVar28 + -8) = 0x1803b12c0;
        FUN_1803d64e0(local_1198);
        uVar33 = 0x200;
      }
      uVar34 = uVar33;
      local_1198 = local_1188;
LAB_1803b12d3:
      puVar28[0x28] = puVar28[0x51];
      *(ulonglong *)(puVar28 + 0x20) = uVar34;
      *(undefined8 *)(puVar28 + -8) = 0x1803b12f6;
      local_1190 = uVar34;
      FUN_1803b62e0(puVar36,puVar19,plVar40);
      puVar29 = puVar28;
      if (0x200 < local_1190) {
        *(undefined8 *)(puVar28 + -8) = 0x1803b1310;
        FUN_1803d64e0(local_1198);
      }
    }
    fVar52 = local_1260;
    if (local_1288 != puStack_1280) {
      fVar51 = 0.0;
      uVar35 = 0;
      if ((longlong)puStack_1280 - (longlong)local_1288 >> 3 != 0) {
        while( true ) {
          puVar19 = (undefined8 *)local_1288[uVar35];
          if ((ulonglong)((longlong)puStack_1280 - (longlong)local_1288 >> 3) <= uVar35 + 1) break;
          fVar45 = fVar49;
          if (*(int *)*puVar19 == 0x2b) {
            fVar45 = fVar49 * fVar47;
          }
          fVar51 = fVar51 + fVar45 + *(float *)(puVar19 + 4);
          uVar35 = uVar35 + 1;
        }
        fVar51 = *(float *)(puVar19 + 4) + 0.0 + fVar51;
      }
    }
    if ((local_11d0 == local_11c8) || (local_1228 == plStack_1220)) {
      fVar45 = 0.0;
    }
    else {
      fVar45 = fVar44;
      if (fVar41 <= fVar44) {
        fVar45 = fVar41;
      }
      fVar45 = fVar45 * fVar50 * DAT_1808ac658;
    }
    fVar53 = fVar53 * fVar41;
    local_1264 = fVar53;
    if (local_1228 != plStack_1220) {
      if (0.0 < fVar53) {
        local_1264 = fVar53 + fVar45;
      }
      local_1264 = fVar54 * fVar44 + local_1264;
    }
    fVar50 = local_1264;
    local_1200 = CONCAT44(local_1200._4_4_,fVar54 * fVar44);
    fVar41 = fVar51;
    if (fVar51 <= fVar43) {
      fVar41 = fVar43;
    }
    local_1208 = (longlong *)CONCAT44(local_1208._4_4_,fVar41);
    uVar17 = local_11f8._0_8_;
    if (local_1260 == 4.2039e-45) {
      *(float *)(local_11f8._0_8_ + 4) = *(float *)(local_11f8._0_8_ + 4) + DAT_1808ac34c;
    }
    local_11f8._4_4_ = local_1264;
    local_11f8._0_4_ = fVar41;
    fVar44 = (*(float *)(*plVar13 + 0x10) + *(float *)(*plVar13 + 8)) * DAT_1808ac1f4;
    *(undefined8 *)(puVar29 + -8) = 0x1803b148c;
    local_1210 = fVar53;
    FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)fVar44) & _DAT_1808ade90 ^ (uint)fVar44) + fVar44);
    uVar10 = DAT_1808ac540;
    if ((((fVar52 == 0.0) || (fVar52 == 1.4013e-45)) || (fVar52 == 2.8026e-45)) ||
       (fVar52 == 4.2039e-45)) {
      *(undefined8 *)(puVar29 + -8) = 0x1803b155e;
      uVar42 = FUN_18053fc00();
      local_1270 = CONCAT44(local_1270._4_4_,uVar42);
      *(undefined8 *)(puVar29 + -8) = 0x1803b156b;
      uVar42 = FUN_18053fc00();
      local_1270._4_4_ = uVar42;
    }
    else {
      local_1270._0_4_ = 0.0;
      local_1270._4_4_ = 0;
    }
    uVar35 = local_1258;
    *(undefined4 *)(puVar29 + 0x28) = uVar10;
    *(undefined1 **)(puVar29 + 0x20) = local_11f8;
    *(undefined8 *)(puVar29 + -8) = 0x1803b1597;
    FUN_1803abd30(&local_1230,plVar13,local_1258,&local_1270);
    lVar21 = local_11a8;
    fVar46 = local_1210;
    fVar48 = local_1240;
    fVar47 = local_1268;
    fVar49 = local_1290;
    fVar54 = DAT_1808ac230;
    fVar44 = DAT_1808ac188;
    local_125c = local_1230._4_4_;
    if (fVar52 != 1.4013e-45) {
      local_125c = local_1230._4_4_ + DAT_1808ac34c;
    }
    if (*(int *)(local_11a8 + 0x1178) == 1) {
      if (local_1228 == plStack_1220) {
        fVar52 = 0.0;
      }
      else {
        fVar52 = (float)local_1200 + fVar45;
      }
      fVar52 = fVar52 + local_125c;
      local_1260 = local_125c;
    }
    else {
      fVar52 = local_125c;
      if (local_11d0 == local_11c8) {
        local_1260 = local_125c + 0.0;
      }
      else {
        local_1260 = fVar53 + fVar45 + local_125c;
      }
    }
    fVar41 = fVar41 - fVar51;
    local_1270 = CONCAT44(local_1270._4_4_,fVar41);
    local_11f8 = ZEXT416((uint)(float)local_1230);
    fVar45 = (float)local_1230;
    if (local_11d0 != local_11c8) {
      fVar50 = (float)local_1230 + fVar41 * DAT_1808ac1f4;
      plVar27 = local_11d0;
      do {
        *(undefined8 *)(puVar29 + -8) = 0x1803b168f;
        puVar19 = (undefined8 *)thunk_FUN_1804e6f30(local_1288,puStack_1280,plVar27);
        if (puVar19 == puStack_1280) {
          lVar32 = *plVar27;
          fVar41 = *(float *)(lVar32 + 0x58);
          fVar43 = fVar41 * *(float *)(lVar32 + 0x28) * fVar47;
          if (0.0 <= fVar43) {
            local_124c = DAT_1808ac34c;
            if (fVar43 <= DAT_1808ac34c) {
              local_124c = fVar43;
            }
          }
          else {
            local_124c = 0.0;
          }
          local_124c = local_124c * fVar48;
          puVar29[0x58] = 0;
          *(undefined4 *)(puVar29 + 0x5c) = 0;
          puVar29[0x60] = 0;
          *(undefined8 *)(puVar29 + 100) = 0;
          *(undefined8 *)(puVar29 + 0x6c) = 0;
          puVar29[0x74] = 0;
          *(undefined8 *)(puVar29 + 0x78) = 0;
          local_12a8 = 0;
          local_12a4 = 0x3f800000;
          local_1298 = fVar49;
          local_129c = (undefined1)plVar27[5];
          if (fVar44 <= fVar41) {
            puVar29[0x58] = 1;
            *(float *)(puVar29 + 0x5c) = (fVar47 * DAT_1808ac1f4 * (fVar41 - fVar44)) / fVar54;
          }
          fVar41 = *(float *)(lVar32 + 0x40);
          if (0.0 < fVar41) {
            puVar29[0x60] = 1;
            *(undefined4 *)(puVar29 + 100) = *(undefined4 *)(lVar21 + 0x1188);
            *(undefined4 *)(puVar29 + 0x68) = *(undefined4 *)(lVar21 + 0x118c);
            *(undefined4 *)(puVar29 + 0x6c) = *(undefined4 *)(lVar21 + 0x1190);
            if (DAT_1808ac34c <= fVar41) {
              fVar41 = DAT_1808ac34c;
            }
            *(float *)(puVar29 + 0x70) = fVar41 * *(float *)(lVar21 + 0x1194);
          }
          if (*(char *)(lVar32 + 0x1c) != '\0') {
            puVar29[0x74] = 1;
            *(undefined4 *)(puVar29 + 0x78) = *(undefined4 *)(lVar32 + 0x18);
            *(undefined4 *)(puVar29 + 0x7c) = *(undefined4 *)(lVar32 + 0x70);
          }
          if (*(char *)(lVar32 + 0x24) != '\0') {
            local_12a8 = 1;
            local_12a4 = CONCAT44(*(undefined4 *)(lVar32 + 0x88),*(undefined4 *)(lVar32 + 0x20));
          }
          local_1258 = CONCAT44(local_1238,local_123c);
          local_1250 = local_1234;
          fVar41 = *(float *)((longlong)plVar27 + 0x24);
          fVar43 = *(float *)(plVar27 + 4);
          uVar6 = plVar27[4];
          puVar19 = (undefined8 *)*plVar13;
          *(undefined1 **)(puVar29 + 0x28) = puVar29 + 0x58;
          *(undefined8 **)(puVar29 + 0x20) = &local_1258;
          uVar37 = *puVar19;
          *(undefined8 *)(puVar29 + -8) = 0x1803b1851;
          FUN_1803af820(uVar37,plVar27 + 1,
                        CONCAT44((fVar46 - fVar41) * DAT_1808ac1f4 + fVar52,
                                 (fVar51 - fVar43) * DAT_1808ac1f4 + fVar50),uVar6);
        }
        plVar27 = plVar27 + 6;
      } while (plVar27 != local_11c8);
      fVar45 = (float)local_11f8._0_4_;
      fVar41 = (float)local_1270;
      fVar43 = local_1248;
      fVar50 = local_1264;
    }
    fVar48 = local_1210;
    fVar47 = local_1244;
    fVar49 = local_1268;
    fVar53 = local_1290;
    fVar51 = DAT_1808ac21c;
    if (local_1288 != puStack_1280) {
      fVar41 = fVar41 * DAT_1808ac1f4 + fVar45;
      uVar34 = 0;
      if ((longlong)puStack_1280 - (longlong)local_1288 >> 3 != 0) {
        do {
          plVar27 = (longlong *)local_1288[uVar34];
          lVar32 = *plVar27;
          fVar50 = *(float *)(lVar32 + 0x58);
          fVar43 = fVar50 * *(float *)(lVar32 + 0x28) * fVar49;
          if (0.0 <= fVar43) {
            local_124c = DAT_1808ac34c;
            if (fVar43 <= DAT_1808ac34c) {
              local_124c = fVar43;
            }
          }
          else {
            local_124c = 0.0;
          }
          local_124c = local_124c * local_1240;
          puVar29[0x58] = 0;
          *(undefined4 *)(puVar29 + 0x5c) = 0;
          puVar29[0x60] = 0;
          *(undefined8 *)(puVar29 + 100) = 0;
          *(undefined8 *)(puVar29 + 0x6c) = 0;
          puVar29[0x74] = 0;
          *(undefined8 *)(puVar29 + 0x78) = 0;
          local_12a8 = 0;
          local_12a4 = 0x3f800000;
          local_1298 = fVar53;
          local_129c = (undefined1)plVar27[5];
          if (fVar44 <= fVar50) {
            puVar29[0x58] = 1;
            *(float *)(puVar29 + 0x5c) = (fVar49 * DAT_1808ac1f4 * (fVar50 - fVar44)) / fVar54;
          }
          fVar50 = *(float *)(lVar32 + 0x40);
          if (0.0 < fVar50) {
            puVar29[0x60] = 1;
            *(undefined4 *)(puVar29 + 100) = *(undefined4 *)(lVar21 + 0x1188);
            *(undefined4 *)(puVar29 + 0x68) = *(undefined4 *)(lVar21 + 0x118c);
            *(undefined4 *)(puVar29 + 0x6c) = *(undefined4 *)(lVar21 + 0x1190);
            if (DAT_1808ac34c <= fVar50) {
              fVar50 = DAT_1808ac34c;
            }
            *(float *)(puVar29 + 0x70) = fVar50 * *(float *)(lVar21 + 0x1194);
          }
          if (*(char *)(lVar32 + 0x1c) != '\0') {
            puVar29[0x74] = 1;
            *(undefined4 *)(puVar29 + 0x78) = *(undefined4 *)(lVar32 + 0x18);
            *(undefined4 *)(puVar29 + 0x7c) = *(undefined4 *)(lVar32 + 0x70);
          }
          if (*(char *)(lVar32 + 0x24) != '\0') {
            local_12a8 = 1;
            local_12a4 = CONCAT44(*(undefined4 *)(lVar32 + 0x88),*(undefined4 *)(lVar32 + 0x20));
          }
          local_1258 = CONCAT44(local_1238,local_123c);
          local_1250 = local_1234;
          fVar50 = *(float *)((longlong)plVar27 + 0x24);
          puVar19 = (undefined8 *)*plVar13;
          *(undefined1 **)(puVar29 + 0x28) = puVar29 + 0x58;
          *(undefined8 **)(puVar29 + 0x20) = &local_1258;
          lVar32 = plVar27[4];
          uVar37 = *puVar19;
          *(undefined8 *)(puVar29 + -8) = 0x1803b1a71;
          FUN_1803af820(uVar37,plVar27 + 1,
                        CONCAT44((fVar48 - fVar50) * DAT_1808ac1f4 + fVar52,fVar41),
                        CONCAT44(fVar50,(int)lVar32));
          fVar50 = fVar47;
          if (*(int *)*plVar27 == 0x2b) {
            fVar50 = fVar47 * fVar51;
          }
          fVar41 = fVar41 + fVar50 + *(float *)(plVar27 + 4);
          uVar34 = uVar34 + 1;
        } while (uVar34 < (ulonglong)((longlong)puStack_1280 - (longlong)local_1288 >> 3));
        fVar45 = (float)local_11f8._0_4_;
        fVar43 = local_1248;
        fVar50 = local_1264;
      }
    }
    fVar53 = local_1244;
    fVar51 = local_1260;
    fVar52 = local_1290;
    fVar41 = DAT_1808abfbc;
    fVar49 = 0.0;
    fVar43 = (local_1208._0_4_ - fVar43) * DAT_1808ac1f4;
    uVar34 = 0;
    plVar40 = local_1228;
    if (((longlong)plStack_1220 - (longlong)local_1228 >> 4) * -0x5555555555555555 != 0) {
      do {
        fVar47 = DAT_1808ac34c;
        plVar27 = plVar40 + uVar34 * 6;
        lVar32 = *plVar27;
        fVar50 = *(float *)(lVar32 + 0x28);
        if (*(char *)(lVar32 + 0x14) == '\0') {
          fVar48 = fVar50;
        }
        else {
          local_11b4 = DAT_1808ac34c - (float)uVar34 * DAT_1808ac0c0;
          local_11b0[0] = 0.1;
          pfVar20 = &local_11b4;
          if (local_11b4 <= DAT_1808ac0c0) {
            pfVar20 = local_11b0;
          }
          fVar48 = fVar50 - (float)uVar34 * DAT_1808ac0c0;
          if (0.0 <= fVar48) {
            fVar46 = DAT_1808ac34c;
            if (fVar48 <= DAT_1808ac34c) {
              fVar46 = fVar48;
            }
            fVar48 = fVar46 / *pfVar20;
          }
          else {
            fVar48 = 0.0 / *pfVar20;
          }
        }
        if (0.0 <= fVar48) {
          fVar46 = DAT_1808ac34c;
          if (fVar48 <= DAT_1808ac34c) {
            fVar46 = fVar48;
          }
        }
        else {
          fVar46 = 0.0;
        }
        fVar48 = (DAT_1808ac658 - (fVar46 + fVar46)) * fVar46 * fVar46;
        if (fVar41 < fVar48) {
          local_124c = fVar50 * fVar48 * *(float *)(lVar32 + 0x58) * local_1268 * local_1240;
          puVar29[0x58] = 0;
          *(undefined4 *)(puVar29 + 0x5c) = 0;
          puVar29[0x60] = 0;
          *(undefined8 *)(puVar29 + 100) = 0;
          *(undefined8 *)(puVar29 + 0x6c) = 0;
          puVar29[0x74] = 0;
          *(undefined8 *)(puVar29 + 0x78) = 0;
          local_12a8 = 0;
          local_12a4 = 0x3f800000;
          local_1298 = fVar52;
          local_129c = (undefined1)plVar27[5];
          if (fVar44 <= fVar50) {
            puVar29[0x58] = 1;
            *(float *)(puVar29 + 0x5c) = ((fVar50 - fVar44) * local_1268 * DAT_1808ac1f4) / fVar54;
          }
          fVar50 = *(float *)(lVar32 + 0x40);
          if (0.0 < fVar50) {
            puVar29[0x60] = 1;
            *(undefined4 *)(puVar29 + 100) = *(undefined4 *)(lVar21 + 0x1188);
            *(undefined4 *)(puVar29 + 0x68) = *(undefined4 *)(lVar21 + 0x118c);
            *(undefined4 *)(puVar29 + 0x6c) = *(undefined4 *)(lVar21 + 0x1190);
            if (DAT_1808ac34c <= fVar50) {
              fVar50 = DAT_1808ac34c;
            }
            *(float *)(puVar29 + 0x70) = fVar50 * *(float *)(lVar21 + 0x1194);
          }
          if (*(char *)(lVar32 + 0x1c) != '\0') {
            puVar29[0x74] = 1;
            *(undefined4 *)(puVar29 + 0x78) = *(undefined4 *)(lVar32 + 0x18);
            *(undefined4 *)(puVar29 + 0x7c) = *(undefined4 *)(lVar32 + 0x70);
          }
          local_1258 = CONCAT44(local_1238,local_123c);
          local_1250 = local_1234;
          lVar32 = plVar27[4];
          fVar50 = *(float *)((longlong)plVar27 + 0x24);
          puVar19 = (undefined8 *)*plVar13;
          *(undefined1 **)(puVar29 + 0x28) = puVar29 + 0x58;
          *(undefined8 **)(puVar29 + 0x20) = &local_1258;
          uVar37 = *puVar19;
          *(undefined8 *)(puVar29 + -8) = 0x1803b1d81;
          FUN_1803af820(uVar37,plVar27 + 1,
                        CONCAT44(((float)local_1200 - fVar48 * fVar50) * DAT_1808ac1f4 + fVar51,
                                 fVar43 + fVar45 + fVar49),
                        CONCAT44((float)((ulonglong)lVar32 >> 0x20) * fVar48,(float)lVar32 * fVar48)
                       );
          plVar40 = local_1228;
        }
        fVar50 = fVar53;
        if (*(int *)*plVar27 == 0x2b) {
          fVar50 = fVar53 * DAT_1808ac21c;
        }
        fVar48 = (float)((int *)*plVar27)[10];
        if (0.0 <= fVar48) {
          if (fVar48 <= fVar47) {
            fVar47 = fVar48;
          }
        }
        else {
          fVar47 = 0.0;
        }
        fVar49 = fVar49 + (DAT_1808ac658 - (fVar47 + fVar47)) * fVar47 * fVar47 *
                          (fVar50 + *(float *)(plVar27 + 4));
        uVar34 = uVar34 + 1;
      } while (uVar34 < (ulonglong)
                        (((longlong)plStack_1220 - (longlong)plVar40 >> 4) * -0x5555555555555555));
      fVar45 = (float)local_11f8._0_4_;
      fVar50 = local_1264;
    }
    puVar19 = local_1288;
    lVar21 = plVar13[3];
    if (lVar21 != 0) {
      pfVar20 = (float *)(lVar21 + uVar35 * 0x14);
      *pfVar20 = fVar45;
      pfVar20[1] = local_125c;
      pfVar20[2] = fVar45 + local_1208._0_4_;
      pfVar20[3] = local_125c + fVar50;
      *(undefined1 *)(lVar21 + 0x10 + uVar35 * 0x14) = 1;
      *(undefined2 *)(lVar21 + 0x11 + uVar35 * 0x14) = local_11d7;
      *(undefined1 *)(lVar21 + 0x13 + uVar35 * 0x14) = local_11d5;
      plVar40 = local_1228;
    }
    if (*(longlong *)(*plVar13 + 0x48) != 0) {
      *(float *)(uVar35 * 0x34 + 0x2c + *(longlong *)(*plVar13 + 0x48)) = fVar50;
      *(undefined4 *)(uVar35 * 0x34 + 0x30 + *(longlong *)(*plVar13 + 0x48)) = 0x40000000;
      plVar40 = local_1228;
    }
    if (*(longlong *)(*plVar13 + 0x48) == 0) {
LAB_1803b1ec4:
      *(float *)(uVar17 + 4) = fVar50 + DAT_1808ac34c + DAT_1808ac710 + *(float *)(uVar17 + 4);
    }
    else {
      lVar21 = plVar13[2];
      *(undefined8 *)(puVar29 + -8) = 0x1803b1ec0;
      cVar11 = FUN_1803b3750(lVar21,uVar35 & 0xffffffff);
      if (cVar11 != '\0') goto LAB_1803b1ec4;
    }
    if (puVar19 != (undefined8 *)0x0) {
      puVar36 = puVar19;
      if (0xfff < (ulonglong)(((longlong)local_1278 - (longlong)puVar19 >> 3) * 8)) {
        puVar36 = (undefined8 *)puVar19[-1];
        puVar19 = (undefined8 *)((longlong)puVar19 + (-8 - (longlong)puVar36));
        if (&DAT_0000001f < puVar19) {
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar29 = puVar29 + 8;
          puVar36 = puVar19;
        }
      }
      *(undefined8 *)(puVar29 + -8) = 0x1803b1f29;
      thunk_FUN_1803d64e0(puVar36);
      local_1288 = (undefined8 *)0x0;
      puStack_1280 = (undefined8 *)0x0;
      local_1278 = (undefined8 *)0x0;
      plVar40 = local_1228;
    }
  }
  puVar30 = puVar29;
  if (plVar40 != (longlong *)0x0) {
    plVar13 = plVar40;
    if (0xfff < (ulonglong)((local_1218 - (longlong)plVar40 >> 4) << 4)) {
      plVar13 = (longlong *)plVar40[-1];
      plVar40 = (longlong *)((longlong)plVar40 + (-8 - (longlong)plVar13));
      if (&DAT_0000001f < plVar40) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar29 = puVar29 + 8;
        plVar13 = plVar40;
      }
    }
    *(undefined8 *)(puVar29 + -8) = 0x1803b1f92;
    thunk_FUN_1803d64e0(plVar13);
    local_1228 = (longlong *)0x0;
    plStack_1220 = (longlong *)0x0;
    local_1218 = 0;
    puVar30 = puVar29;
  }
  if (local_11d0 != (longlong *)0x0) {
    plVar13 = local_11d0;
    if ((0xfff < (ulonglong)((local_11c0 - (longlong)local_11d0 >> 4) << 4)) &&
       (plVar13 = (longlong *)local_11d0[-1],
       (undefined1 *)0x1f < (undefined1 *)((longlong)local_11d0 + (-8 - (longlong)plVar13)))) {
      plVar13 = (longlong *)&DAT_00000005;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar30 = puVar30 + 8;
    }
    *(undefined8 *)(puVar30 + -8) = 0x1803b1ff4;
    thunk_FUN_1803d64e0(plVar13);
  }
LAB_1803b1ff4:
  *(undefined8 *)(puVar30 + -8) = 0x1803b2003;
  return;
}



/* ===== 1803b2070 FUN_1803b2070 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1803b2070(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  size_t sVar10;
  longlong *plVar11;
  int *piVar12;
  undefined8 *puVar13;
  float *pfVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  longlong lVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_178 [32];
  char local_158;
  int *local_150;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  undefined4 local_13c;
  undefined8 *local_138;
  undefined1 local_130 [24];
  int *local_118;
  longlong lStack_110;
  int local_108;
  int iStack_104;
  ulonglong uStack_100;
  float local_f8;
  float fStack_f4;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_178;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  fVar9 = DAT_1808ac710;
  fVar8 = DAT_1808ac540;
  fVar7 = DAT_1808ac34c;
  fVar6 = DAT_1808ac1f4;
  fVar5 = DAT_1808ac188;
  fVar4 = DAT_1808ac140;
  local_148 = 1;
  piVar18 = (int *)*param_3;
  piVar12 = (int *)param_3[1];
  local_158 = param_4;
  local_150 = piVar12;
  local_138 = param_2;
  if (piVar18 != piVar12) {
    do {
      if ((0.0 < (float)piVar18[10]) && (pcVar1 = *(char **)(piVar18 + 2), pcVar1 != (char *)0x0)) {
        if (param_4 == '\0') {
          pfVar14 = (float *)param_1[1];
        }
        else {
          puVar13 = param_1;
          if (piVar18[4] != 9) {
            puVar13 = param_1 + 1;
          }
          pfVar14 = (float *)*puVar13;
        }
        iVar16 = 1;
        if (1 < (int)(*pfVar14 + fVar6)) {
          iVar16 = (int)(*pfVar14 + fVar6);
        }
        local_118 = (int *)0x0;
        lStack_110 = 0;
        local_108 = 0;
        iStack_104 = 0;
        uStack_100 = 0;
        sVar10 = strlen(pcVar1);
        FUN_1800133a0(&local_118,pcVar1,sVar10);
        plVar11 = (longlong *)FUN_18039f3d0(local_130,&local_118,iVar16);
        lVar19 = *plVar11;
        iVar16 = (int)plVar11[1];
        iVar20 = *(int *)((longlong)plVar11 + 0xc);
        lVar17 = plVar11[2];
        if (0xf < uStack_100) {
          uVar15 = uStack_100 + 1;
          piVar12 = local_118;
          if (0xfff < uVar15) {
            piVar12 = *(int **)(local_118 + -2);
            if (0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)piVar12)))
            goto LAB_1803b2505;
            uVar15 = uStack_100 + 0x28;
          }
          thunk_FUN_1803d64e0(piVar12,uVar15);
        }
        if (((lVar19 != 0) && (0 < iVar16)) && (0 < iVar20)) {
          if (0.0 < *(float *)param_1[2]) {
            fVar22 = (float)iVar16;
            fVar23 = (float)iVar20;
            fVar21 = fVar23;
            if (fVar23 <= fVar22) {
              fVar21 = fVar22;
            }
            fVar21 = *(float *)param_1[2] / fVar21;
            if ((0.0 < fVar23) && (fVar8 < fVar22 / fVar23)) {
              fVar22 = fVar4;
              if (fVar21 < fVar6) {
                fVar22 = fVar5;
              }
              fVar21 = (fVar21 - fVar6) * fVar22 * fVar9 + fVar7;
            }
            if (fVar7 <= fVar21) {
              local_13c = 0x3fa66666;
              local_144 = 0x3f800000;
              local_140 = (fVar21 - fVar7) * DAT_1808ac154 + fVar7;
            }
            fVar21 = (float)FUN_18053fc00();
            iVar16 = 1;
            if (1 < (int)(fVar21 + fVar6)) {
              iVar16 = (int)(fVar21 + fVar6);
            }
            pcVar1 = *(char **)(piVar18 + 2);
            local_118 = (int *)0x0;
            lStack_110 = 0;
            local_108 = 0;
            iStack_104 = 0;
            uStack_100 = 0;
            sVar10 = strlen(pcVar1);
            FUN_1800133a0(&local_118,pcVar1,sVar10);
            plVar11 = (longlong *)FUN_18039f3d0(local_130,&local_118,iVar16);
            lVar19 = *plVar11;
            iVar16 = (int)plVar11[1];
            iVar20 = *(int *)((longlong)plVar11 + 0xc);
            lVar17 = plVar11[2];
            if (0xf < uStack_100) {
              uVar15 = uStack_100 + 1;
              piVar12 = local_118;
              if (0xfff < uVar15) {
                piVar12 = *(int **)(local_118 + -2);
                if (0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)piVar12))) {
LAB_1803b2505:
                  pcVar2 = (code *)swi(0x29);
                  (*pcVar2)(5);
                  pcVar2 = (code *)swi(3);
                  puVar13 = (undefined8 *)(*pcVar2)();
                  return puVar13;
                }
                uVar15 = uStack_100 + 0x28;
              }
              thunk_FUN_1803d64e0(piVar12,uVar15);
            }
            if (((lVar19 == 0) || (iVar16 < 1)) || (iVar20 < 1)) goto LAB_1803b2488;
          }
          if ((*(char *)(param_1[3] + 0x94) == '\0') ||
             ((5 < piVar18[4] - 1U && (*piVar18 != 0x1f)))) {
            uStack_f0 = 0;
          }
          else {
            uStack_f0 = 1;
          }
          local_f8 = (float)iVar16;
          fStack_f4 = (float)iVar20;
          puVar13 = (undefined8 *)param_2[1];
          if (puVar13 == (undefined8 *)param_2[2]) {
            local_118 = piVar18;
            lStack_110 = lVar19;
            local_108 = iVar16;
            iStack_104 = iVar20;
            uStack_100 = lVar17;
            FUN_180352090(param_2,puVar13,&local_118);
          }
          else {
            *puVar13 = piVar18;
            puVar13[1] = lVar19;
            auVar3._4_4_ = iVar20;
            auVar3._0_4_ = iVar16;
            auVar3._8_8_ = lVar17;
            *(undefined1 (*) [16])(puVar13 + 2) = auVar3;
            puVar13[4] = CONCAT44(fStack_f4,local_f8);
            puVar13[5] = CONCAT71(uStack_ef,uStack_f0);
            param_2[1] = param_2[1] + 0x30;
          }
        }
LAB_1803b2488:
        piVar12 = local_150;
        param_4 = local_158;
      }
      piVar18 = piVar18 + 0x28;
    } while (piVar18 != piVar12);
  }
  return param_2;
}



/* ===== 1803b2510 FUN_1803b2510 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803b2510(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  float fVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_198 [32];
  float local_178;
  undefined8 *local_170;
  float local_168;
  undefined4 local_158;
  undefined8 local_154;
  longlong local_148;
  longlong *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *puStack_128;
  undefined8 *local_120;
  undefined8 local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  ulonglong local_d8;
  
  fVar10 = DAT_1808ac980;
  fVar9 = DAT_1808ac864;
  fVar8 = DAT_1808ac34c;
  fVar7 = DAT_1808ac1f4;
  fVar6 = DAT_1808ac140;
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_198;
  plVar20 = *(longlong **)(param_1[1] + 0x4b8);
  plVar18 = *(longlong **)(param_1[1] + 0x4c0);
  local_110 = plVar18;
  local_108 = param_1;
  local_100 = param_2;
  if (plVar20 != plVar18) {
    do {
      lVar15 = *plVar20;
      uVar22 = plVar20[1] - lVar15 >> 3;
      if (3 < uVar22) {
        lVar14 = 0x14;
        if ((int)plVar20[3] != 0) {
          lVar14 = 0x24;
        }
        puVar1 = (undefined4 *)(param_2 + lVar14);
        local_f8 = *puVar1;
        uStack_f4 = puVar1[1];
        uStack_f0 = puVar1[2];
        fStack_ec = (float)puVar1[3] *
                    *(float *)(*param_1 + 0x24) * *(float *)((longlong)plVar20 + 0x1c);
        if (0.0 < fStack_ec) {
          fVar23 = fVar9;
          if (*(float *)(plVar20 + 4) <= fVar9) {
            fVar23 = *(float *)(plVar20 + 4);
          }
          fVar23 = fVar8 - fVar23 / fVar9;
          lVar14 = *(longlong *)*param_1;
          iVar21 = (int)uVar22;
          local_148 = lVar14;
          if (0.0 < fVar23) {
            local_154 = 0;
            uVar12 = FUN_1803aab30(&local_f8,fVar8);
            local_178 = fVar23 * fVar10;
            local_168 = 1.469368e-39;
            local_170 = &local_154;
            FUN_180400420(lVar14,lVar15,uVar22 & 0xffffffff,uVar12);
          }
          lVar15 = *plVar20;
          lVar14 = plVar20[1];
          if (fVar23 <= fVar6) {
            fVar24 = 0.0;
            if (0.0 <= fVar23) {
              fVar24 = fVar23;
            }
            fVar23 = fVar8 - (fVar24 + fVar24);
            if (0.0 <= fVar23) goto LAB_1803b26c1;
            fVar24 = 0.0;
          }
          else {
            fVar23 = fVar7;
LAB_1803b26c1:
            fVar24 = fVar8;
            if (fVar23 <= fVar8) {
              fVar24 = fVar23;
            }
          }
          lVar19 = local_148;
          fVar13 = (float)FUN_1803aab30(&local_f8,fVar8);
          local_e8 = local_f8;
          local_e4 = uStack_f4;
          local_e0 = uStack_f0;
          local_dc = 0;
          local_158 = FUN_1803aab30(&local_e8,fVar8);
          local_118 = **(undefined8 **)(lVar19 + 0x38);
          local_140 = &local_148;
          local_138 = &local_118;
          fVar23 = *(float *)((longlong)plVar20 + 0x24);
          fVar2 = *(float *)(plVar20 + 5);
          puVar5 = *(undefined8 **)((longlong)plVar20 + 0x24);
          local_130 = (undefined8 *)0x0;
          puStack_128 = (undefined8 *)0x0;
          local_120 = (undefined8 *)0x0;
          if (lVar14 - lVar15 != 0) {
            uVar22 = lVar14 - lVar15 >> 3;
            if (0x1fffffffffffffff < uVar22) {
                    /* WARNING: Subroutine does not return */
              FUN_1800118d0();
            }
            local_130 = (undefined8 *)FUN_18000fb70(uVar22 * 8);
            local_120 = local_130 + uVar22;
            puStack_128 = local_130;
            for (; uVar22 != 0; uVar22 = uVar22 - 1) {
              *puStack_128 = 0;
              puStack_128 = puStack_128 + 1;
            }
          }
          puVar11 = local_130;
          uVar16 = 0;
          uVar22 = uVar16;
          if (3 < iVar21) {
            do {
              lVar15 = (longlong)(int)uVar22;
              fVar3 = *(float *)(*plVar20 + lVar15 * 8);
              fVar4 = *(float *)(*plVar20 + 4 + lVar15 * 8);
              *(float *)(local_130 + lVar15) = (fVar23 - fVar3) * fVar24 + fVar3;
              *(float *)((longlong)local_130 + lVar15 * 8 + 4) = (fVar2 - fVar4) * fVar24 + fVar4;
              fVar3 = *(float *)(*plVar20 + 8 + lVar15 * 8);
              fVar4 = *(float *)(*plVar20 + 0xc + lVar15 * 8);
              *(float *)(local_130 + lVar15 + 1) = (fVar23 - fVar3) * fVar24 + fVar3;
              *(float *)((longlong)local_130 + lVar15 * 8 + 0xc) = (fVar2 - fVar4) * fVar24 + fVar4;
              fVar3 = *(float *)(*plVar20 + 0x10 + lVar15 * 8);
              fVar4 = *(float *)(*plVar20 + 0x14 + lVar15 * 8);
              *(float *)(local_130 + lVar15 + 2) = (fVar23 - fVar3) * fVar24 + fVar3;
              *(float *)((longlong)local_130 + lVar15 * 8 + 0x14) = (fVar2 - fVar4) * fVar24 + fVar4
              ;
              fVar3 = *(float *)(*plVar20 + 0x1c + lVar15 * 8);
              fVar4 = *(float *)(*plVar20 + 0x18 + lVar15 * 8);
              *(float *)(local_130 + lVar15 + 3) = (fVar23 - fVar4) * fVar24 + fVar4;
              *(float *)((longlong)local_130 + lVar15 * 8 + 0x1c) = (fVar2 - fVar3) * fVar24 + fVar3
              ;
              uVar17 = (int)uVar22 + 4;
              uVar22 = (ulonglong)uVar17;
            } while ((int)uVar17 < iVar21 + -3);
          }
          uVar17 = (uint)uVar22;
          while ((int)uVar17 < iVar21) {
            lVar15 = (longlong)(int)uVar22;
            fVar3 = *(float *)(*plVar20 + 4 + lVar15 * 8);
            fVar4 = *(float *)(*plVar20 + lVar15 * 8);
            *(float *)(local_130 + lVar15) = (fVar23 - fVar4) * fVar24 + fVar4;
            *(float *)((longlong)local_130 + lVar15 * 8 + 4) = (fVar2 - fVar3) * fVar24 + fVar3;
            uVar17 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar17;
          }
          if (0 < iVar21) {
            do {
              uVar17 = (int)uVar16 + 1;
              lVar15 = (longlong)((int)uVar17 % iVar21);
              local_170 = (undefined8 *)
                          CONCAT44(*(undefined4 *)((longlong)puVar11 + lVar15 * 8 + 4),
                                   *(undefined4 *)(puVar11 + lVar15));
              local_178 = (float)local_158;
              local_168 = fVar13;
              FUN_180089a80(&local_140,*(undefined8 *)(*plVar20 + uVar16 * 8),local_158,
                            *(undefined8 *)(*plVar20 + lVar15 * 8));
              local_170 = (undefined8 *)puVar11[uVar16];
              local_178 = fVar13;
              local_168 = fVar13;
              FUN_180089a80(&local_140,*(undefined8 *)(*plVar20 + uVar16 * 8),local_158,
                            CONCAT44(*(undefined4 *)((longlong)puVar11 + lVar15 * 8 + 4),
                                     *(undefined4 *)(puVar11 + lVar15)));
              uVar16 = (ulonglong)uVar17;
            } while ((int)uVar17 < iVar21);
            plVar18 = local_110;
          }
          uVar22 = 0;
          if ((fVar24 < fVar8) && (0 < iVar21)) {
            do {
              uVar17 = (int)uVar22 + 1;
              local_178 = fVar13;
              local_170 = puVar5;
              local_168 = fVar13;
              FUN_180089a80(&local_140,puVar11[uVar22],fVar13,puVar11[(int)uVar17 % iVar21]);
              uVar22 = (ulonglong)uVar17;
            } while ((int)uVar17 < iVar21);
          }
          FUN_1800132b0(&local_130);
          param_1 = local_108;
          param_2 = local_100;
        }
      }
      plVar20 = plVar20 + 6;
    } while (plVar20 != plVar18);
  }
  return;
}



/* ===== 1803b2ad0 FUN_1803b2ad0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803b2ad0(longlong *param_1,ulonglong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_258 [32];
  float *local_238;
  undefined8 *local_230;
  undefined8 *local_228;
  undefined4 local_220;
  uint local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined2 local_1c7;
  undefined1 local_1c5;
  float local_1b8 [2];
  float local_1b0 [2];
  float local_1a8 [2];
  float local_1a0 [2];
  float local_198 [2];
  float local_190 [2];
  float local_188 [2];
  float local_180 [2];
  float local_178;
  undefined1 local_174;
  undefined1 local_173;
  longlong local_170 [4];
  undefined4 local_150;
  uint local_14c;
  undefined4 local_148;
  undefined2 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_108;
  float local_100;
  float local_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_258;
  lVar1 = param_2 - 0x1d;
  lVar3 = param_1[2];
  local_1f8 = param_2;
  lVar10 = FUN_1800aa7a0(lVar3,lVar1);
  if (lVar10 == 0) goto LAB_1803b334d;
  local_200 = (undefined1 *)(lVar1 * 0x74);
  lVar5 = lVar1 * 9;
  lVar4 = param_1[1];
  if (*(char *)(lVar4 + 0x508 + lVar1 * 0x48) == '\0') {
    fVar20 = *(float *)((longlong)local_200 + 0x1224 + lVar3);
    fVar21 = *(float *)((longlong)local_200 + 0x1228 + lVar3);
    fVar22 = *(float *)((longlong)local_200 + 0x122c + lVar3);
    fVar17 = *(float *)((longlong)local_200 + 0x1230 + lVar3);
  }
  else {
    uVar2 = *(uint *)(lVar4 + 0x50c + lVar1 * 0x48);
    fVar20 = (float)(uVar2 & 0xff) / DAT_1808acb94;
    fVar21 = (float)(uVar2 >> 8 & 0xff) / DAT_1808acb94;
    fVar22 = (float)(uVar2 >> 0x10 & 0xff) / DAT_1808acb94;
    fVar17 = (float)(uVar2 >> 0x18) / DAT_1808acb94;
  }
  local_108 = (undefined1 *)CONCAT44(fVar21,fVar20);
  local_100 = fVar22;
  local_fc = fVar17;
  if (*(int *)(lVar10 + 0x60) == 1) {
    local_170[1] = 0;
    local_170[2] = 0;
    local_170[3] = 0xf;
    local_170[0] = 0;
    local_150 = 0x3f666666;
    local_14c = 1;
    local_148 = 2;
    local_144 = 1;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_1f0 = 1.0;
    local_208 = (ulonglong)(uint)local_208._4_4_ << 0x20;
    pfVar13 = (float *)(lVar4 + (lVar5 + 0xa2) * 8);
    fVar19 = *pfVar13;
    pfVar12 = (float *)&local_208;
    if (0.0 <= fVar19) {
      pfVar12 = pfVar13;
    }
    pfVar13 = &local_1f0;
    if (fVar19 <= DAT_1808ac34c) {
      pfVar13 = pfVar12;
    }
    local_178 = *pfVar13 * DAT_1808acb08;
    local_174 = *(undefined1 *)(lVar4 + 0x4e0 + lVar1 * 0x48);
    if ((*(char *)((longlong)local_200 + 0x1249 + lVar3) == '\0') ||
       (local_173 = 1, *(longlong *)(lVar4 + 0x4f8 + lVar1 * 0x48) == 0)) {
      local_173 = 0;
    }
    plVar11 = (longlong *)(lVar4 + (lVar5 + 0x9d) * 8);
    if (local_170 != plVar11) {
      if (0xf < *(ulonglong *)(lVar4 + 0x500 + lVar1 * 0x48)) {
        plVar11 = (longlong *)*plVar11;
      }
      FUN_180029840(local_170,plVar11,*(undefined8 *)(lVar4 + 0x4f8 + lVar1 * 0x48));
    }
    local_14c = (uint)(*(char *)((longlong)local_200 + 0x1249 + lVar3) != '\0');
    local_148 = 2;
    local_120 = CONCAT44(fVar21,fVar20);
    uStack_118 = CONCAT44(fVar17,fVar22);
    local_150 = 0x3f47ae14;
    local_238 = &local_178;
    FUN_1803aca70(param_1,local_1f8,param_3,param_4);
    FUN_18000f890(local_170);
    goto LAB_1803b334d;
  }
  if (*(int *)(lVar10 + 0x60) != 2) {
    local_238 = (float *)(lVar4 + (lVar5 + 0x9d) * 8);
    local_210 = 0;
    local_218 = (uint)(*(char *)((longlong)local_200 + 0x1248 + lVar3) != '\0');
    local_220 = 0;
    local_228 = &local_108;
    local_230 = (undefined8 *)
                CONCAT71(local_230._1_7_,*(undefined1 *)(lVar4 + 0x4e0 + lVar1 * 0x48));
    FUN_1803ada30(param_1,local_1f8,param_3,param_4);
    goto LAB_1803b334d;
  }
  if (*(char *)(*param_1 + 0x20) == '\0') {
    cVar8 = *(char *)(lVar4 + 0x4e0 + lVar1 * 0x48);
    local_108 = (undefined1 *)((ulonglong)*(uint *)(*param_1 + 0x1c) << 8 | local_1f8);
    plVar11 = (longlong *)FUN_1803b68b0(1,&local_1d8,&local_108);
    lVar10 = *plVar11;
    *(longlong *)(lVar10 + 0x90) = param_1[5];
    fVar19 = DAT_1808ac34c;
    if (cVar8 == '\0') {
      fVar16 = 0.0;
    }
    else {
      fVar16 = DAT_1808ac34c;
    }
    local_1e8 = (float)FUN_1803aac50(lVar10 + 0x18,fVar16,(int)param_1[4],DAT_1808ac118);
    if ((local_1e8 <= 0.0) && (*(char *)(*param_1 + 0x20) == '\0')) {
      return;
    }
  }
  else {
    local_1e8 = DAT_1808ac34c;
    fVar19 = DAT_1808ac34c;
  }
  if ((*(longlong *)(lVar4 + 0x518 + lVar1 * 0x48) == 0) ||
     (fVar16 = *(float *)(lVar4 + 0x524 + lVar1 * 0x48), fVar16 <= 0.0)) goto LAB_1803b334d;
  if ((DAT_18091a1b0 == '\0') || (DAT_18091a1b4 < 1)) {
    fVar18 = fVar19;
  }
  else if (DAT_18091a1b4 < 100) {
    fVar18 = 100.0 / DAT_1808acb08;
  }
  else {
    iVar9 = DAT_18091a1b4;
    if (200 < DAT_18091a1b4) {
      iVar9 = 200;
    }
    fVar18 = (float)iVar9 / DAT_1808acb08;
  }
  local_208._0_4_ = 8.96831e-44;
  local_1f0 = 8.40779e-45;
  pfVar12 = (float *)(lVar3 + 0x1244 + (longlong)local_200);
  fVar14 = *pfVar12;
  pfVar13 = &local_1f0;
  if (5 < (int)fVar14) {
    pfVar13 = pfVar12;
  }
  pfVar12 = (float *)&local_208;
  if ((int)fVar14 < 0x41) {
    pfVar12 = pfVar13;
  }
  fVar18 = (float)(int)*pfVar12 * fVar18;
  fVar14 = (float)FUN_18053f0d0((fVar18 * *(float *)(lVar4 + 0x520 + lVar1 * 0x48)) / fVar16);
  local_200 = (undefined1 *)CONCAT44(fVar18,fVar14);
  fVar16 = (*(float *)(*param_1 + 0x10) + *(float *)(*param_1 + 8)) * DAT_1808ac1f4;
  FUN_18053fc00((float)((DAT_1808ac1ec ^ (uint)fVar16) & _DAT_1808ade90 ^ (uint)fVar16) + fVar16);
  fVar16 = DAT_1808ac540;
  if ((((param_3 == 0) || (param_3 == 1)) || (param_3 == 2)) || (param_3 == 3)) {
    uVar15 = FUN_18053fc00();
    local_208 = CONCAT44(local_208._4_4_,uVar15);
    uVar15 = FUN_18053fc00();
    local_208 = CONCAT44(uVar15,(float)local_208);
  }
  else {
    local_208 = 0;
  }
  uVar6 = local_1f8;
  local_230 = (undefined8 *)CONCAT44(local_230._4_4_,fVar16);
  local_238 = (float *)&local_200;
  FUN_1803abd30(&local_1f0,param_1,local_1f8,&local_208);
  fVar7 = local_1f0;
  fVar17 = local_1e8 * *(float *)(*param_1 + 0x24) * fVar17;
  local_200 = &DAT_3f8000003f800000;
  local_1f8 = 0;
  local_208._0_4_ = local_1f0 + fVar19 + fVar14;
  local_208._4_4_ = local_1ec + fVar19 + fVar18;
  local_108 = (undefined1 *)CONCAT44(local_1ec + fVar19,local_1f0 + fVar19);
  local_1d8 = 0;
  local_1d0 = *(undefined8 *)(lVar4 + 0x518 + lVar1 * 0x48);
  local_228._0_4_ = (int)(fVar17 * DAT_1808ac1f4 * DAT_1808acb94) << 0x18;
  local_230 = &local_200;
  local_238 = (float *)&local_1f8;
  FUN_1803fea90(*(undefined8 *)*param_1,&local_1d8,&local_108,&local_208);
  local_1b8[0] = fVar17;
  local_1b0[0] = 0.0;
  local_1a8[0] = fVar22;
  local_1a0[0] = 0.0;
  local_198[0] = fVar21;
  local_190[0] = 0.0;
  local_188[0] = fVar20;
  local_180[0] = 0.0;
  local_108 = &DAT_3f8000003f800000;
  local_200 = (undefined1 *)0x0;
  fVar14 = fVar7 + fVar14;
  local_208 = CONCAT44(local_208._4_4_,fVar14);
  fVar23 = local_1ec + fVar18;
  local_1f8 = CONCAT44(fVar23,fVar14);
  local_1d8 = 0;
  local_1d0 = *(undefined8 *)(lVar4 + 0x518 + lVar1 * 0x48);
  pfVar13 = local_1b8;
  if (fVar17 <= 0.0) {
    pfVar13 = local_1b0;
  }
  fVar17 = *pfVar13;
  if (fVar19 <= *pfVar13) {
    fVar17 = fVar19;
  }
  pfVar13 = local_1a8;
  if (fVar22 <= 0.0) {
    pfVar13 = local_1a0;
  }
  fVar22 = *pfVar13;
  if (fVar19 <= *pfVar13) {
    fVar22 = fVar19;
  }
  pfVar13 = local_198;
  if (fVar21 <= 0.0) {
    pfVar13 = local_190;
  }
  fVar21 = *pfVar13;
  if (fVar19 <= *pfVar13) {
    fVar21 = fVar19;
  }
  pfVar13 = local_188;
  if (fVar20 <= 0.0) {
    pfVar13 = local_180;
  }
  fVar20 = *pfVar13;
  if (fVar19 <= *pfVar13) {
    fVar20 = fVar19;
  }
  local_228 = (undefined8 *)
              CONCAT44(local_228._4_4_,
                       (((int)(fVar17 * DAT_1808acb94 + DAT_1808ac1f4) << 8 |
                        (int)(fVar22 * DAT_1808acb94 + DAT_1808ac1f4)) << 8 |
                       (int)(fVar21 * DAT_1808acb94 + DAT_1808ac1f4)) << 8 |
                       (int)(fVar20 * DAT_1808acb94 + DAT_1808ac1f4));
  local_230 = &local_108;
  local_238 = (float *)&local_200;
  FUN_1803fea90(*(undefined8 *)*param_1,&local_1d8,&local_1f0,&local_1f8);
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    pfVar13 = (float *)(lVar1 + uVar6 * 0x14);
    *pfVar13 = fVar7;
    pfVar13[1] = local_1ec;
    pfVar13[2] = (float)local_208;
    pfVar13[3] = fVar23;
    *(undefined1 *)(lVar1 + 0x10 + uVar6 * 0x14) = 1;
    *(undefined2 *)(lVar1 + 0x11 + uVar6 * 0x14) = local_1c7;
    *(undefined1 *)(lVar1 + 0x13 + uVar6 * 0x14) = local_1c5;
  }
  if (*(longlong *)(*param_1 + 0x48) != 0) {
    *(float *)(*(longlong *)(*param_1 + 0x48) + 0x2c + uVar6 * 0x34) = fVar18;
    *(undefined4 *)(*(longlong *)(*param_1 + 0x48) + 0x30 + uVar6 * 0x34) = 0x40000000;
  }
  if (*(longlong *)(*param_1 + 0x48) == 0) {
LAB_1803b31e8:
    fVar20 = local_1e8;
  }
  else {
    cVar8 = FUN_1803b3750(param_1[2],uVar6 & 0xffffffff);
    fVar20 = 0.0;
    if (cVar8 != '\0') goto LAB_1803b31e8;
  }
  *(float *)(param_4 + 4) = (fVar18 + fVar16) * fVar20 + *(float *)(param_4 + 4);
LAB_1803b334d:
  return;
}



/* ===== 1803b33b0 FUN_1803b33b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803b33b0(longlong param_1,int param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_158 [32];
  float *local_138;
  longlong local_130;
  undefined4 *local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_110;
  uint local_108;
  float local_f8;
  undefined1 local_f4;
  undefined1 uStack_f3;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 uStack_c3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_158;
  uVar10 = param_3 & 0xffffffff;
  lVar9 = (longlong)param_2;
  local_108 = 0;
  if (param_2 - 0x1dU < 0x10) {
    FUN_1803b2ad0(param_1,lVar9,param_3,param_4);
  }
  else {
    lVar7 = lVar9 * 0x98;
    lVar8 = *(longlong *)(param_1 + 0x10);
    local_a8 = lVar8 + 4 + lVar7;
    iVar1 = *(int *)(&DAT_1806b317c + lVar9 * 0x118);
    if (iVar1 == 0) {
      uStack_e8 = 0;
      local_e0 = 0;
      local_d8 = 0xf;
      local_f0 = 0;
      uVar5 = 1;
      local_a0 = 0;
      uStack_98 = 0;
      lVar6 = *(longlong *)(param_1 + 8);
      local_f8 = *(float *)(lVar6 + 0x3c0 + lVar9 * 4);
      _local_f4 = CONCAT11(*(undefined1 *)(lVar9 + 0x434 + lVar6),*(undefined1 *)(lVar9 + lVar6));
      if (param_2 == 0x16) {
        local_cc = 0;
      }
      else {
        local_cc = *(undefined4 *)(lVar7 + 0x8c + lVar8);
      }
      local_c8 = *(undefined4 *)(lVar7 + 0x10 + lVar8);
      _local_c4 = CONCAT11(*(undefined1 *)(lVar7 + 0x79 + lVar8),
                           *(undefined1 *)(lVar7 + 0x78 + lVar8));
      puVar3 = (undefined8 *)(lVar7 + 0x7c + lVar8);
      local_c0 = *puVar3;
      uStack_b8 = puVar3[1];
      local_b0 = param_2 == 0;
      local_d0 = 0x3f666666;
      if (!(bool)local_b0) {
        local_d0 = 0x3f47ae14;
      }
      if (param_2 == 0x15) {
        puVar3 = (undefined8 *)FUN_180024b50(&local_88,lVar6 + 0x458);
      }
      else {
        puVar3 = (undefined8 *)FUN_18003a390(local_68,(int)local_f8);
        uVar5 = 2;
      }
      local_108 = uVar5;
      if (&local_f0 != puVar3) {
        if ((ulonglong)puVar3[3] < 0x10) {
          puVar4 = puVar3;
        }
        else {
          puVar4 = (undefined8 *)*puVar3;
        }
        FUN_180029840(&local_f0,puVar4,puVar3[2]);
      }
      if ((uVar5 & 2) != 0) {
        uVar5 = uVar5 & 0xfffffffd;
        FUN_18000f890(local_68);
      }
      if ((uVar5 & 1) != 0) {
        FUN_18000f890(&local_88);
      }
      local_138 = &local_f8;
      FUN_1803aca70(param_1,lVar9,uVar10,param_4);
      FUN_18000f890(&local_f0);
    }
    else if (iVar1 == 1) {
      lVar6 = *(longlong *)(param_1 + 8);
      puVar2 = (undefined4 *)
               FUN_1803aba20(local_68,param_2,local_a8,*(undefined4 *)(lVar6 + 0x3c0 + lVar9 * 4));
      local_88 = *puVar2;
      uStack_84 = puVar2[1];
      uStack_80 = puVar2[2];
      uStack_7c = puVar2[3];
      local_138 = (float *)(lVar6 + 0x20 + lVar9 * 0x20);
      local_110 = *(undefined4 *)(lVar7 + 0x94 + lVar8);
      local_118 = *(undefined4 *)(lVar7 + 0x90 + lVar8);
      local_120 = *(undefined4 *)(lVar7 + 0x10 + lVar8);
      local_128 = &local_88;
      local_130 = CONCAT71(local_130._1_7_,*(undefined1 *)(lVar9 + lVar6));
      FUN_1803ada30(param_1,lVar9,uVar10,param_4);
    }
    else if (iVar1 == 2) {
      local_138 = (float *)local_a8;
      FUN_1803adf90(param_1,lVar9,uVar10,param_4);
    }
    else if (iVar1 == 3) {
      local_138 = (float *)CONCAT44(local_138._4_4_,param_2);
      local_130 = local_a8;
      FUN_1803ae940(param_1,lVar9,uVar10,param_4);
    }
    else if (iVar1 == 4) {
      local_138 = (float *)local_a8;
      FUN_1803b04e0(param_1,lVar9,uVar10,param_4);
    }
  }
  return;
}



/* ===== 1803b36b0 FUN_1803b36b0 ===== */

int FUN_1803b36b0(longlong param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_res10 [2];
  int local_res18 [4];
  
  if (param_2 - 0x1d < 0x10) {
    iVar1 = *(int *)((longlong)(int)param_2 * 0x74 + 0x4f8 + param_1);
    if (iVar1 == 0) {
      return 1;
    }
    if (iVar1 == 1) {
      return 3;
    }
    if (iVar1 != 2) {
      return 2;
    }
  }
  else if (param_2 < 0x1d) {
    if (*(int *)(&DAT_1806b317c + (longlong)(int)param_2 * 0x118) == 5) {
      return 4;
    }
    local_res18[0] = 3;
    local_res10[0] = 0;
    piVar2 = (int *)(param_1 + 8 + (longlong)(int)param_2 * 0x98);
    iVar1 = *piVar2;
    piVar3 = local_res10;
    if (-1 < iVar1) {
      piVar3 = piVar2;
    }
    piVar2 = local_res18;
    if (iVar1 < 4) {
      piVar2 = piVar3;
    }
    return *piVar2;
  }
  return 0;
}



/* ===== 1803b3750 FUN_1803b3750 ===== */

ulonglong FUN_1803b3750(longlong param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  char *_Str2;
  
  pcVar2 = DAT_180cd02e0;
  if (0xf < param_2 - 0x1d) {
    if (param_2 < 0x1d) {
      return (ulonglong)*(byte *)((longlong)(int)param_2 * 0x98 + 4 + param_1);
    }
    return (ulonglong)(uint3)(param_2 - 0x1d >> 8) << 8;
  }
  uVar4 = (longlong)(int)param_2 - 0x1d;
  if (((*(char *)(uVar4 * 0x74 + 0x1218 + param_1) != '\0') && (uVar4 < 0x10)) &&
     (param_1 = uVar4 * 0x74 + param_1, pcVar1 = DAT_180cd02d8, *(char *)(param_1 + 0x11d8) != '\0')
     ) {
    for (; pcVar1 != pcVar2; pcVar1 = pcVar1 + 0xa0) {
      if (*(ulonglong *)(pcVar1 + 0x10) < 0x40) {
        if (*(ulonglong *)(pcVar1 + 0x18) < 0x10) {
          _Str2 = pcVar1;
        }
        else {
          _Str2 = *(char **)pcVar1;
        }
        iVar3 = strncmp((char *)(param_1 + 0x11d8),_Str2,0x40);
        uVar4 = CONCAT44(extraout_var,iVar3);
        if (iVar3 == 0) {
          return CONCAT71((int7)(uVar4 >> 8),1);
        }
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



/* ===== 1803b3840 FUN_1803b3840 ===== */

undefined8 * FUN_1803b3840(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_2 - 0x1d < 0x10) {
    lVar1 = FUN_1800aa7a0(param_1,(longlong)(int)param_2 + -0x1d);
    if (lVar1 == 0) {
      return (undefined8 *)&DAT_18075bf54;
    }
    puVar2 = (undefined8 *)(lVar1 + 0x20);
    if (0xf < *(ulonglong *)(lVar1 + 0x38)) {
      return (undefined8 *)*puVar2;
    }
  }
  else {
    if (param_2 < 0x1d) {
      return (undefined8 *)(&PTR_s_health_bar_1806b3170)[(longlong)(int)param_2 * 0x23];
    }
    puVar2 = (undefined8 *)&DAT_18058b643;
  }
  return puVar2;
}



/* ===== 1803b38b0 FUN_1803b38b0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1803b38b0(longlong *param_1,longlong param_2,uint param_3,char param_4,uint param_5)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 auStack_10a8 [32];
  ulonglong local_1088;
  longlong local_1080;
  uint local_1078 [4];
  longlong *local_1068;
  undefined8 local_1058;
  ulonglong local_1050;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1803b38ca;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_10a8;
  local_1068 = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_1078[1] = 1;
  local_1078[0] = 0;
  do {
    uVar3 = local_1078[0];
    if ((local_1078[0] != param_5) && (local_1078[0] < 0x2d)) {
      if (local_1078[0] - 0x1d < 0x10) {
        iVar1 = *(int *)(param_2 + 0x4f8 + (longlong)(int)local_1078[0] * 0x74);
        if (iVar1 == 0) {
          uVar4 = 1;
        }
        else if (iVar1 == 1) {
          uVar4 = 3;
        }
        else {
          if (iVar1 == 2) goto LAB_1803b39eb;
          uVar4 = 2;
        }
      }
      else {
        if ((param_4 == '\0') && ((&DAT_1806b3188)[(longlong)(int)local_1078[0] * 0x118] != '\0'))
        goto LAB_1803b3a2e;
        if ((int)local_1078[0] < 0x1d) {
          if (*(int *)(&DAT_1806b317c + (longlong)(int)local_1078[0] * 0x118) == 5) {
            uVar4 = 4;
          }
          else {
            local_1078[3] = 3;
            local_1078[2] = 0;
            lVar6 = (longlong)(int)local_1078[0] * 0x98;
            iVar1 = *(int *)(param_2 + 8 + lVar6);
            puVar7 = local_1078 + 2;
            if (-1 < iVar1) {
              puVar7 = (uint *)(lVar6 + 8 + param_2);
            }
            puVar5 = local_1078 + 3;
            if (iVar1 < 4) {
              puVar5 = puVar7;
            }
            uVar4 = *puVar5;
          }
        }
        else {
LAB_1803b39eb:
          uVar4 = 0;
        }
      }
      if (uVar4 == param_3) {
        if (local_1078[0] - 0x1d < 0x10) {
          lVar6 = FUN_1800aa7a0(param_2,(longlong)(int)local_1078[0] + -0x1d);
          if (lVar6 == 0) goto LAB_1803b3a2e;
        }
        puVar7 = (uint *)param_1[1];
        if (puVar7 == (uint *)param_1[2]) {
          FUN_18006a410(param_1,puVar7,local_1078);
        }
        else {
          *puVar7 = uVar3;
          param_1[1] = param_1[1] + 4;
        }
      }
    }
LAB_1803b3a2e:
    local_1078[0] = uVar3 + 1;
    if (0x2c < (int)local_1078[0]) {
      lVar6 = param_1[1];
      lVar2 = *param_1;
      lVar8 = lVar6 - lVar2 >> 2;
      if (lVar8 < 0x21) {
        FUN_1803b63e0(lVar2,lVar6,param_2);
      }
      else {
        FUN_18034bdc0(&local_1058,lVar8 - (lVar8 - (lVar6 - lVar2 >> 0x3f) >> 1));
        local_1088 = local_1050;
        local_1080 = param_2;
        FUN_1803b64d0(lVar2,lVar6,lVar8,local_1058);
        if (0x400 < local_1050) {
          FUN_1803d64e0(local_1058);
        }
      }
      return param_1;
    }
  } while( true );
}



/* ===== 1803b3af0 FUN_1803b3af0 ===== */

uint FUN_1803b3af0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  lVar4 = (longlong)param_2;
  lVar3 = (longlong)param_3;
  if (param_2 - 0x1dU < 0x10) {
    lVar2 = FUN_1800aa7a0(*param_1,lVar4 + -0x1d);
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0x60) != 1)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
  }
  else {
    bVar6 = *(int *)(&DAT_1806b317c + lVar4 * 0x118) == 0;
  }
  if (param_3 - 0x1dU < 0x10) {
    lVar2 = FUN_1800aa7a0(*param_1,lVar3 + -0x1d);
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0x60) != 1)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
  }
  else {
    bVar7 = *(int *)(&DAT_1806b317c + lVar3 * 0x118) == 0;
  }
  if (bVar6 != bVar7) {
    return (uint)bVar6;
  }
  lVar2 = *param_1;
  if (param_2 - 0x1dU < 0x10) {
    iVar5 = *(int *)((lVar4 + 0xb) * 0x74 + lVar2);
  }
  else {
    iVar5 = *(int *)(lVar4 * 0x98 + 0xc + lVar2);
  }
  if (param_3 - 0x1dU < 0x10) {
    iVar1 = *(int *)((lVar3 + 0xb) * 0x74 + lVar2);
  }
  else {
    iVar1 = *(int *)(lVar3 * 0x98 + 0xc + lVar2);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar5 < iVar1);
}



/* ===== 1803b3bf0 FUN_1803b3bf0 ===== */

void FUN_1803b3bf0(longlong param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  int local_res10 [4];
  int local_res20 [2];
  int local_68;
  int local_64;
  longlong local_60;
  int *local_58;
  int *local_50;
  longlong local_48;
  longlong local_40;
  
  lVar6 = (longlong)param_2;
  local_res10[0] = param_2;
  local_res20[0] = param_4;
  iVar2 = FUN_1803b36b0(param_1,param_2);
  FUN_1803b38b0(&local_60,param_1,param_3,param_5,param_2);
  local_64 = (int)((longlong)local_58 - local_60 >> 2);
  local_68 = 0;
  piVar4 = &local_68;
  if (-1 < param_4) {
    piVar4 = local_res20;
  }
  piVar3 = &local_64;
  if (param_4 <= local_64) {
    piVar3 = piVar4;
  }
  piVar4 = (int *)(local_60 + (longlong)*piVar3 * 4);
  if (local_58 == local_50) {
    FUN_18006a410(&local_60,piVar4,local_res10);
  }
  else if (piVar4 == local_58) {
    *local_58 = param_2;
    local_58 = local_58 + 1;
  }
  else {
    *local_58 = local_58[-1];
    local_58 = local_58 + 1;
    FUN_180540530(piVar4 + 1);
    *piVar4 = param_2;
  }
  if (param_2 - 0x1dU < 0x10) {
    if (param_3 == 0) {
      *(undefined4 *)(lVar6 * 0x74 + 0x4f8 + param_1) = 2;
    }
    else if (param_3 == 1) {
      *(undefined4 *)(lVar6 * 0x74 + 0x4f8 + param_1) = 0;
    }
    else if (param_3 == 3) {
      *(undefined4 *)(lVar6 * 0x74 + 0x4f8 + param_1) = 1;
    }
    else {
      *(undefined4 *)(lVar6 * 0x74 + 0x4f8 + param_1) = 3;
    }
  }
  else {
    *(int *)(lVar6 * 0x98 + 8 + param_1) = param_3;
  }
  uVar5 = 0;
  if ((longlong)local_58 - local_60 >> 2 != 0) {
    do {
      iVar1 = *(int *)(local_60 + uVar5 * 4);
      if (iVar1 - 0x1dU < 0x10) {
        *(int *)((longlong)iVar1 * 0x74 + 0x4fc + param_1) = (int)uVar5;
      }
      else {
        *(int *)(param_1 + 0xc + (longlong)iVar1 * 0x98) = (int)uVar5;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)((longlong)local_58 - local_60 >> 2));
  }
  if (iVar2 != param_3) {
    FUN_1803b38b0(&local_48,param_1,iVar2,param_5,0xffffffff);
    uVar5 = 0;
    if (local_40 - local_48 >> 2 != 0) {
      do {
        iVar2 = *(int *)(local_48 + uVar5 * 4);
        if (iVar2 - 0x1dU < 0x10) {
          *(int *)((longlong)iVar2 * 0x74 + 0x4fc + param_1) = (int)uVar5;
        }
        else {
          *(int *)(param_1 + 0xc + (longlong)iVar2 * 0x98) = (int)uVar5;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < (ulonglong)(local_40 - local_48 >> 2));
    }
    FUN_180068f30(&local_48);
  }
  FUN_180068f30(&local_60);
  return;
}



/* ===== 1803b3e40 FUN_1803b3e40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803b3e40(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  int iVar25;
  int *piVar26;
  float *pfVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_268 [32];
  float local_248;
  float local_240;
  undefined4 local_238;
  float local_228;
  int local_224;
  int *local_220;
  longlong *local_218;
  undefined8 local_210;
  float local_208;
  float local_204;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  float fStack_1e8;
  float fStack_1e4;
  undefined2 local_1df;
  undefined1 local_1dd;
  int *local_1d8;
  int *piStack_1d0;
  int *local_1c8;
  int *local_1c0;
  int *local_1b8;
  undefined4 local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  longlong *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 *local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 *local_140;
  longlong local_138;
  undefined8 *local_130;
  char local_128 [48];
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_268;
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
    param_4[1] = 0;
    *(undefined1 *)(param_4 + 2) = 0;
    *(undefined2 *)((longlong)param_4 + 0x11) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x13) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x14) = 0;
    *(undefined8 *)((longlong)param_4 + 0x1c) = 0;
    *(undefined1 *)((longlong)param_4 + 0x24) = 0;
    *(undefined2 *)((longlong)param_4 + 0x25) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x27) = local_1dd;
    param_4[5] = 0;
    param_4[6] = 0;
    *(undefined1 *)(param_4 + 7) = 0;
    *(undefined2 *)((longlong)param_4 + 0x39) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x3b) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x3c) = 0;
    *(undefined8 *)((longlong)param_4 + 0x44) = 0;
    *(undefined1 *)((longlong)param_4 + 0x4c) = 0;
    *(undefined2 *)((longlong)param_4 + 0x4d) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x4f) = local_1dd;
    param_4[10] = 0;
    param_4[0xb] = 0;
    *(undefined1 *)(param_4 + 0xc) = 0;
    *(undefined2 *)((longlong)param_4 + 0x61) = local_1df;
    *(undefined1 *)((longlong)param_4 + 99) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 100) = 0;
    *(undefined8 *)((longlong)param_4 + 0x6c) = 0;
    *(undefined1 *)((longlong)param_4 + 0x74) = 0;
    *(undefined2 *)((longlong)param_4 + 0x75) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x77) = local_1dd;
    param_4[0xf] = 0;
    param_4[0x10] = 0;
    *(undefined1 *)(param_4 + 0x11) = 0;
    *(undefined2 *)((longlong)param_4 + 0x89) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x8b) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x8c) = 0;
    *(undefined8 *)((longlong)param_4 + 0x94) = 0;
    *(undefined1 *)((longlong)param_4 + 0x9c) = 0;
    *(undefined2 *)((longlong)param_4 + 0x9d) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x9f) = local_1dd;
    param_4[0x14] = 0;
    param_4[0x15] = 0;
    *(undefined1 *)(param_4 + 0x16) = 0;
    *(undefined2 *)((longlong)param_4 + 0xb1) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0xb3) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0xb4) = 0;
    *(undefined8 *)((longlong)param_4 + 0xbc) = 0;
    *(undefined1 *)((longlong)param_4 + 0xc4) = 0;
    *(undefined2 *)((longlong)param_4 + 0xc5) = local_1df;
    *(undefined1 *)((longlong)param_4 + 199) = local_1dd;
    param_4[0x19] = 0;
    param_4[0x1a] = 0;
    *(undefined1 *)(param_4 + 0x1b) = 0;
    *(undefined2 *)((longlong)param_4 + 0xd9) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0xdb) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0xdc) = 0;
    *(undefined8 *)((longlong)param_4 + 0xe4) = 0;
    *(undefined1 *)((longlong)param_4 + 0xec) = 0;
    *(undefined2 *)((longlong)param_4 + 0xed) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0xef) = local_1dd;
    param_4[0x1e] = 0;
    param_4[0x1f] = 0;
    *(undefined1 *)(param_4 + 0x20) = 0;
    *(undefined2 *)((longlong)param_4 + 0x101) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x103) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x104) = 0;
    *(undefined8 *)((longlong)param_4 + 0x10c) = 0;
    *(undefined1 *)((longlong)param_4 + 0x114) = 0;
    *(undefined2 *)((longlong)param_4 + 0x115) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x117) = local_1dd;
    param_4[0x23] = 0;
    param_4[0x24] = 0;
    *(undefined1 *)(param_4 + 0x25) = 0;
    *(undefined2 *)((longlong)param_4 + 0x129) = local_1df;
    *(undefined1 *)((longlong)param_4 + 299) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 300) = 0;
    *(undefined8 *)((longlong)param_4 + 0x134) = 0;
    *(undefined1 *)((longlong)param_4 + 0x13c) = 0;
    *(undefined2 *)((longlong)param_4 + 0x13d) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x13f) = local_1dd;
    param_4[0x28] = 0;
    param_4[0x29] = 0;
    *(undefined1 *)(param_4 + 0x2a) = 0;
    *(undefined2 *)((longlong)param_4 + 0x151) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x153) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x154) = 0;
    *(undefined8 *)((longlong)param_4 + 0x15c) = 0;
    *(undefined1 *)((longlong)param_4 + 0x164) = 0;
    *(undefined2 *)((longlong)param_4 + 0x165) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x167) = local_1dd;
    param_4[0x2d] = 0;
    param_4[0x2e] = 0;
    *(undefined1 *)(param_4 + 0x2f) = 0;
    *(undefined2 *)((longlong)param_4 + 0x179) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x17b) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x17c) = 0;
    *(undefined8 *)((longlong)param_4 + 0x184) = 0;
    *(undefined1 *)((longlong)param_4 + 0x18c) = 0;
    *(undefined2 *)((longlong)param_4 + 0x18d) = local_1df;
    *(undefined1 *)((longlong)param_4 + 399) = local_1dd;
    param_4[0x32] = 0;
    param_4[0x33] = 0;
    *(undefined1 *)(param_4 + 0x34) = 0;
    *(undefined2 *)((longlong)param_4 + 0x1a1) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x1a3) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x1a4) = 0;
    *(undefined8 *)((longlong)param_4 + 0x1ac) = 0;
    *(undefined1 *)((longlong)param_4 + 0x1b4) = 0;
    *(undefined2 *)((longlong)param_4 + 0x1b5) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x1b7) = local_1dd;
    param_4[0x37] = 0;
    param_4[0x38] = 0;
    *(undefined1 *)(param_4 + 0x39) = 0;
    *(undefined2 *)((longlong)param_4 + 0x1c9) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x1cb) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x1cc) = 0;
    *(undefined8 *)((longlong)param_4 + 0x1d4) = 0;
    *(undefined1 *)((longlong)param_4 + 0x1dc) = 0;
    *(undefined2 *)((longlong)param_4 + 0x1dd) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x1df) = local_1dd;
    param_4[0x3c] = 0;
    param_4[0x3d] = 0;
    *(undefined1 *)(param_4 + 0x3e) = 0;
    *(undefined2 *)((longlong)param_4 + 0x1f1) = local_1df;
    *(undefined1 *)((longlong)param_4 + 499) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 500) = 0;
    *(undefined8 *)((longlong)param_4 + 0x1fc) = 0;
    *(undefined1 *)((longlong)param_4 + 0x204) = 0;
    *(undefined2 *)((longlong)param_4 + 0x205) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x207) = local_1dd;
    param_4[0x41] = 0;
    param_4[0x42] = 0;
    *(undefined1 *)(param_4 + 0x43) = 0;
    *(undefined2 *)((longlong)param_4 + 0x219) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x21b) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x21c) = 0;
    *(undefined8 *)((longlong)param_4 + 0x224) = 0;
    *(undefined1 *)((longlong)param_4 + 0x22c) = 0;
    *(undefined2 *)((longlong)param_4 + 0x22d) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x22f) = local_1dd;
    param_4[0x46] = 0;
    param_4[0x47] = 0;
    *(undefined1 *)(param_4 + 0x48) = 0;
    *(undefined2 *)((longlong)param_4 + 0x241) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x243) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x244) = 0;
    *(undefined8 *)((longlong)param_4 + 0x24c) = 0;
    *(undefined1 *)((longlong)param_4 + 0x254) = 0;
    *(undefined2 *)((longlong)param_4 + 0x255) = local_1df;
    *(undefined1 *)((longlong)param_4 + 599) = local_1dd;
    param_4[0x4b] = 0;
    param_4[0x4c] = 0;
    *(undefined1 *)(param_4 + 0x4d) = 0;
    *(undefined2 *)((longlong)param_4 + 0x269) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x26b) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x26c) = 0;
    *(undefined8 *)((longlong)param_4 + 0x274) = 0;
    *(undefined1 *)((longlong)param_4 + 0x27c) = 0;
    *(undefined2 *)((longlong)param_4 + 0x27d) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x27f) = local_1dd;
    param_4[0x50] = 0;
    param_4[0x51] = 0;
    *(undefined1 *)(param_4 + 0x52) = 0;
    *(undefined2 *)((longlong)param_4 + 0x291) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x293) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x294) = 0;
    *(undefined8 *)((longlong)param_4 + 0x29c) = 0;
    *(undefined1 *)((longlong)param_4 + 0x2a4) = 0;
    *(undefined2 *)((longlong)param_4 + 0x2a5) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x2a7) = local_1dd;
    param_4[0x55] = 0;
    param_4[0x56] = 0;
    *(undefined1 *)(param_4 + 0x57) = 0;
    *(undefined2 *)((longlong)param_4 + 0x2b9) = local_1df;
    *(undefined1 *)((longlong)param_4 + 699) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 700) = 0;
    *(undefined8 *)((longlong)param_4 + 0x2c4) = 0;
    *(undefined1 *)((longlong)param_4 + 0x2cc) = 0;
    *(undefined2 *)((longlong)param_4 + 0x2cd) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x2cf) = local_1dd;
    param_4[0x5a] = 0;
    param_4[0x5b] = 0;
    *(undefined1 *)(param_4 + 0x5c) = 0;
    *(undefined2 *)((longlong)param_4 + 0x2e1) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x2e3) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x2e4) = 0;
    *(undefined8 *)((longlong)param_4 + 0x2ec) = 0;
    *(undefined1 *)((longlong)param_4 + 0x2f4) = 0;
    *(undefined2 *)((longlong)param_4 + 0x2f5) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x2f7) = local_1dd;
    param_4[0x5f] = 0;
    param_4[0x60] = 0;
    *(undefined1 *)(param_4 + 0x61) = 0;
    *(undefined2 *)((longlong)param_4 + 0x309) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x30b) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x30c) = 0;
    *(undefined8 *)((longlong)param_4 + 0x314) = 0;
    *(undefined1 *)((longlong)param_4 + 0x31c) = 0;
    *(undefined2 *)((longlong)param_4 + 0x31d) = local_1df;
    *(undefined1 *)((longlong)param_4 + 799) = local_1dd;
    param_4[100] = 0;
    param_4[0x65] = 0;
    *(undefined1 *)(param_4 + 0x66) = 0;
    *(undefined2 *)((longlong)param_4 + 0x331) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x333) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x334) = 0;
    *(undefined8 *)((longlong)param_4 + 0x33c) = 0;
    *(undefined1 *)((longlong)param_4 + 0x344) = 0;
    *(undefined2 *)((longlong)param_4 + 0x345) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x347) = local_1dd;
    param_4[0x69] = 0;
    param_4[0x6a] = 0;
    *(undefined1 *)(param_4 + 0x6b) = 0;
    *(undefined2 *)((longlong)param_4 + 0x359) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x35b) = local_1dd;
    *(undefined8 *)((longlong)param_4 + 0x35c) = 0;
    *(undefined8 *)((longlong)param_4 + 0x364) = 0;
    *(undefined1 *)((longlong)param_4 + 0x36c) = 0;
    *(undefined2 *)((longlong)param_4 + 0x36d) = local_1df;
    *(undefined1 *)((longlong)param_4 + 0x36f) = local_1dd;
    param_4[0x6e] = 0;
    param_4[0x6f] = 0;
    *(undefined1 *)(param_4 + 0x70) = 0;
    *(undefined2 *)((longlong)param_4 + 0x381) = local_1df;
    *(undefined1 *)((longlong)param_4 + 899) = local_1dd;
  }
  if ((*param_1 == 0) || ((char)param_1[3] == '\0')) {
    return;
  }
  lVar20 = param_1[9];
  local_150 = *(undefined4 *)(DAT_180ca0a50 + 0x40);
  local_148 = *(undefined8 *)(DAT_180ca0a50 + 0x10);
  if (lVar20 != 0) {
    *(undefined1 *)(lVar20 + 0x938) = 0;
    *(undefined8 *)(lVar20 + 0x990) = 0xffffffffffffffff;
    *(undefined4 *)(lVar20 + 0x98c) = 0xffffffff;
  }
  fVar33 = _UNK_1808ad9fc;
  fVar12 = _UNK_1808ad9f8;
  fVar11 = _UNK_1808ad9f4;
  fVar10 = _DAT_1808ad9f0;
  fVar9 = DAT_1808ac34c;
  fVar8 = DAT_1808ac1f4;
  fVar2 = DAT_1808ac1e0;
  fVar28 = DAT_1808abfe4;
  local_228 = 0.0;
  local_128[0] = '\0';
  local_128[1] = '\0';
  local_128[2] = '\0';
  local_128[3] = '\0';
  local_128[4] = '\0';
  local_128[5] = '\0';
  local_128[6] = '\0';
  local_128[7] = '\0';
  local_128[8] = '\0';
  local_128[9] = '\0';
  local_128[10] = '\0';
  local_128[0xb] = '\0';
  local_128[0xc] = '\0';
  local_128[0xd] = '\0';
  local_128[0xe] = '\0';
  local_128[0xf] = '\0';
  local_128[0x10] = '\0';
  local_128[0x11] = '\0';
  local_128[0x12] = '\0';
  local_128[0x13] = '\0';
  local_128[0x14] = '\0';
  local_128[0x15] = '\0';
  local_128[0x16] = '\0';
  local_128[0x17] = '\0';
  local_128[0x18] = '\0';
  local_128[0x19] = '\0';
  local_128[0x1a] = '\0';
  local_128[0x1b] = '\0';
  local_128[0x1c] = '\0';
  local_128[0x1d] = '\0';
  local_128[0x1e] = '\0';
  local_128[0x1f] = '\0';
  local_128[0x20] = '\0';
  local_128[0x21] = '\0';
  local_128[0x22] = '\0';
  local_128[0x23] = '\0';
  local_128[0x24] = '\0';
  local_128[0x25] = '\0';
  local_128[0x26] = '\0';
  local_128[0x27] = '\0';
  local_128[0x28] = '\0';
  local_128[0x29] = '\0';
  local_128[0x2a] = '\0';
  local_128[0x2b] = '\0';
  local_128[0x2c] = '\0';
  local_224 = 0;
  puVar18 = (undefined4 *)((longlong)param_1 + 0x3c);
  fVar30 = 0.0;
  local_218 = param_1;
  local_200 = param_3;
  local_170 = param_1;
  local_168 = param_2;
  local_160 = param_3;
  local_158 = param_4;
  local_140 = puVar18;
  local_138 = lVar20;
  local_130 = param_4;
  do {
    lVar21 = local_200;
    iVar25 = 4;
    if (local_224 != 0) {
      iVar25 = local_224 + -1;
    }
    local_1d8 = (int *)0x0;
    piStack_1d0 = (int *)0x0;
    local_1c8 = (int *)0x0;
    local_248 = -NAN;
    FUN_1803b38b0(&local_1c0,local_200,iVar25,(char)param_1[5]);
    local_1f0 = local_1b8;
    piVar26 = local_1c0;
    if (local_1c0 != local_1b8) {
      do {
        iVar16 = *piVar26;
        local_220 = (int *)CONCAT44(local_220._4_4_,iVar16);
        if ((lVar20 == 0) || (*(char *)(lVar20 + 0x28 + (longlong)iVar16 * 0x34) == '\0')) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        cVar13 = FUN_1803b3750(lVar21,iVar16);
        if ((cVar13 != '\0') || (bVar7)) {
          if (piStack_1d0 == local_1c8) {
            FUN_18006a410(&local_1d8);
          }
          else {
            *piStack_1d0 = iVar16;
            piStack_1d0 = piStack_1d0 + 1;
          }
        }
        piVar26 = piVar26 + 1;
      } while (piVar26 != local_1f0);
      param_1 = local_218;
      puVar18 = local_140;
    }
    FUN_180068f30(&local_1c0);
    if (lVar20 != 0) {
      local_1a8 = *puVar18;
      local_1a4 = *(undefined4 *)((longlong)param_1 + 0x44);
      FUN_1803fc200(*param_1,(longlong)param_1 + 0x34,&local_1a8,1);
    }
    lVar21 = local_200;
    fVar32 = fVar30;
    if (iVar25 == 4) {
      local_220 = piStack_1d0;
      piVar26 = piStack_1d0;
      piVar17 = local_1d8;
      if (local_1d8 != piStack_1d0) {
        do {
          iVar25 = *piVar17;
          lVar20 = (longlong)iVar25;
          if (iVar25 == 0x1a) {
            fVar30 = *(float *)((longlong)local_170 + 0xc);
            fVar32 = *(float *)(local_170 + 1);
            fVar31 = *(float *)((longlong)local_170 + 0x14);
            fVar29 = *(float *)(local_170 + 2);
            lVar19 = *local_170;
            if ((fVar28 <= *(float *)((longlong)local_170 + 0x24) * *(float *)(lVar21 + 0xf94)) &&
               (uVar14 = FUN_1803aab30(lVar21 + 0xf88), (uVar14 & 0xff000000) != 0)) {
              local_248 = 0.0;
              if ((*(byte *)(lVar19 + 0x30) & 1) == 0) {
                local_190 = fVar29 - fVar2;
                local_18c = fVar31 - fVar2;
                local_188 = fVar32 + fVar8;
                local_184 = fVar30 + fVar8;
                pfVar27 = &local_190;
                pfVar22 = &local_188;
              }
              else {
                local_1a0 = fVar29 - fVar8;
                local_19c = fVar31 - fVar8;
                local_198 = fVar32 + fVar8;
                local_194 = fVar30 + fVar8;
                pfVar27 = &local_1a0;
                pfVar22 = &local_198;
              }
              FUN_1803fe160(lVar19,pfVar22,pfVar27,0);
              local_240 = 7.17465e-43;
              local_248 = fVar9;
              FUN_1803fc600(lVar19,*(undefined8 *)(lVar19 + 0x58),*(undefined4 *)(lVar19 + 0x50),
                            uVar14);
              *(undefined4 *)(lVar19 + 0x50) = 0;
            }
            uVar14 = (int)(*(float *)((longlong)local_170 + 0x24) * DAT_1808ac20c * DAT_1808acb94)
                     << 0x18 | 0xa0a0a;
            local_180 = fVar29 + fVar9;
            local_17c = fVar31 + fVar9;
            local_178 = fVar32 - fVar9;
            local_174 = fVar30 - fVar9;
            local_238 = 0;
            local_240 = fVar9;
            local_248 = 0.0;
            FUN_1803fe480(lVar19,&local_178,&local_180,uVar14);
            local_210 = CONCAT44(fVar31 - fVar9,fVar29 - fVar9);
            local_208 = fVar32 + fVar9;
            local_204 = fVar30 + fVar9;
            local_238 = 0;
            local_240 = fVar9;
            local_248 = 0.0;
            FUN_1803fe480(lVar19,&local_208,&local_210,uVar14);
LAB_1803b4964:
            piVar26 = local_220;
          }
          else if (iVar25 == 0x1b) {
            uVar14 = FUN_1803aab30(lVar21 + 0x1020);
            pfVar27 = *(float **)(local_168 + 0x4a8);
            pfVar22 = *(float **)(local_168 + 0x4a0);
            if ((pfVar22 != pfVar27) && ((uVar14 & 0xff000000) != 0)) {
              do {
                fStack_1e8 = pfVar22[2] + fVar12;
                fStack_1e4 = pfVar22[3] + fVar33;
                local_1f0 = (int *)CONCAT44(pfVar22[1] + fVar11,*pfVar22 + fVar10);
                local_240 = 0.0;
                local_248 = fVar9;
                FUN_1803fc600(*local_170,&local_1f0,2,uVar14);
                pfVar22 = pfVar22 + 4;
              } while (pfVar22 != pfVar27);
              goto LAB_1803b4964;
            }
          }
          else if (iVar25 == 0x1c) {
            FUN_1803b2510(&local_170,lVar21 + 0x10a4);
            goto LAB_1803b4964;
          }
          local_128[lVar20] = '\x01';
          if (param_4 != (undefined8 *)0x0) {
            uVar24 = *(undefined4 *)((longlong)local_218 + 0xc);
            uVar1 = *(undefined4 *)((longlong)local_218 + 0x14);
            lVar19 = local_218[2];
            *(int *)((longlong)param_4 + lVar20 * 0x14) = (int)local_218[1];
            *(undefined4 *)((longlong)param_4 + lVar20 * 0x14 + 4) = uVar24;
            *(int *)((longlong)param_4 + lVar20 * 0x14 + 8) = (int)lVar19;
            *(undefined4 *)((longlong)param_4 + lVar20 * 0x14 + 0xc) = uVar1;
            *(undefined1 *)((longlong)param_4 + lVar20 * 0x14 + 0x10) = 1;
            *(undefined2 *)((longlong)param_4 + lVar20 * 0x14 + 0x11) = local_1df;
            *(undefined1 *)((longlong)param_4 + lVar20 * 0x14 + 0x13) = local_1dd;
          }
          piVar17 = piVar17 + 1;
        } while (piVar17 != piVar26);
        lVar20 = local_138;
        fVar32 = local_228;
      }
    }
    else {
      local_1f8 = 0;
      fVar31 = 0.0;
      local_1f0 = piStack_1d0;
      piVar26 = local_1d8;
      if (local_1d8 != piStack_1d0) {
        do {
          iVar16 = *piVar26;
          local_128[iVar16] = '\x01';
          lVar19 = (longlong)iVar16 * 0x34;
          if ((lVar20 == 0) || (*(char *)(lVar20 + 0x28 + lVar19) == '\0')) {
            FUN_1803b33b0(&local_170,iVar16,iVar25,&local_1f8);
            if (lVar20 != 0) goto LAB_1803b4ab6;
          }
          else {
            FUN_1803fc200(*param_1,(longlong)param_1 + 0x34,(longlong)param_1 + 0x3c,0);
            FUN_1803b33b0(&local_170,iVar16);
            lVar4 = *param_1;
            iVar3 = *(int *)(lVar4 + 0xa0);
            iVar15 = iVar3 + -1;
            *(int *)(lVar4 + 0xa0) = iVar15;
            if (iVar15 == 0) {
              lVar5 = *(longlong *)(lVar4 + 0x38);
              uVar24 = *(undefined4 *)(lVar5 + 0x38);
              uVar1 = *(undefined4 *)(lVar5 + 0x3c);
              uVar6 = *(undefined4 *)(lVar5 + 0x40);
              *(undefined4 *)(lVar4 + 0x60) = *(undefined4 *)(lVar5 + 0x34);
              *(undefined4 *)(lVar4 + 100) = uVar24;
              *(undefined4 *)(lVar4 + 0x68) = uVar1;
              *(undefined4 *)(lVar4 + 0x6c) = uVar6;
              FUN_1803fbff0();
            }
            else {
              puVar18 = (undefined4 *)((longlong)(iVar3 + -2) * 0x10 + *(longlong *)(lVar4 + 0xa8));
              uVar24 = puVar18[1];
              uVar1 = puVar18[2];
              uVar6 = puVar18[3];
              *(undefined4 *)(lVar4 + 0x60) = *puVar18;
              *(undefined4 *)(lVar4 + 100) = uVar24;
              *(undefined4 *)(lVar4 + 0x68) = uVar1;
              *(undefined4 *)(lVar4 + 0x6c) = uVar6;
              FUN_1803fbff0();
            }
LAB_1803b4ab6:
            if (*(char *)(lVar20 + 0x28 + lVar19) != '\0') {
              *(int *)(lVar20 + 0x928) = iVar25;
              local_248 = -NAN;
              FUN_1803b38b0(&local_1c0,lVar21,iVar25);
              piVar17 = (int *)thunk_FUN_1804e6e50(local_1c0,local_1b8);
              if (piVar17 == local_1b8) {
                uVar24 = 0;
              }
              else {
                uVar24 = (undefined4)((longlong)piVar17 - (longlong)local_1c0 >> 2);
              }
              FUN_180068f30(&local_1c0);
              *(undefined4 *)(lVar20 + 0x92c) = uVar24;
              if (*(int *)(lVar20 + 0x924) != iVar16) {
                *(int *)(lVar20 + 0x924) = iVar16;
                *(int *)(lVar20 + 0x930) = iVar25;
                *(undefined4 *)(lVar20 + 0x934) = uVar24;
              }
              *(undefined1 *)(lVar20 + 0x938) = 1;
            }
            cVar13 = FUN_1803b3750(lVar21,iVar16);
            if (cVar13 != '\0') {
              fVar31 = *(float *)(lVar20 + 0x30 + lVar19) + *(float *)(lVar20 + 0x2c + lVar19) +
                       fVar31;
            }
          }
          piVar26 = piVar26 + 1;
          param_1 = local_218;
        } while (piVar26 != local_1f0);
        param_4 = local_130;
      }
      if ((iVar25 - 1U & 0xfffffffd) == 0) {
        fVar32 = fVar31;
        if (fVar31 <= fVar30) {
          fVar32 = fVar30;
        }
        local_228 = fVar32;
      }
    }
    param_1 = local_218;
    if (lVar20 != 0) {
      lVar21 = *local_218;
      iVar25 = *(int *)(lVar21 + 0xa0);
      iVar16 = iVar25 + -1;
      *(int *)(lVar21 + 0xa0) = iVar16;
      if (iVar16 == 0) {
        puVar18 = (undefined4 *)(*(longlong *)(lVar21 + 0x38) + 0x34);
      }
      else {
        puVar18 = (undefined4 *)((longlong)(iVar25 + -2) * 0x10 + *(longlong *)(lVar21 + 0xa8));
      }
      uVar24 = puVar18[1];
      uVar1 = puVar18[2];
      uVar6 = puVar18[3];
      *(undefined4 *)(lVar21 + 0x60) = *puVar18;
      *(undefined4 *)(lVar21 + 100) = uVar24;
      *(undefined4 *)(lVar21 + 0x68) = uVar1;
      *(undefined4 *)(lVar21 + 0x6c) = uVar6;
      FUN_1803fbff0();
    }
    FUN_180068f30(&local_1d8);
    local_224 = local_224 + 1;
    if (4 < local_224) {
      if (lVar20 == 0) {
        return;
      }
      uVar23 = 0;
      lVar21 = 0;
      do {
        if (local_128[uVar23] == '\0') {
          *(undefined8 *)(lVar20 + 0x18 + uVar23 * 0x34) = 0;
        }
        if (local_128[uVar23 + 1] == '\0') {
          *(undefined8 *)(lVar20 + 0x4c + lVar21) = 0;
        }
        if (local_128[uVar23 + 2] == '\0') {
          *(undefined8 *)(lVar20 + 0x80 + lVar21) = 0;
        }
        if (local_128[uVar23 + 3] == '\0') {
          *(undefined8 *)(lVar20 + 0xb4 + lVar21) = 0;
        }
        if (local_128[uVar23 + 4] == '\0') {
          *(undefined8 *)(lVar20 + 0xe8 + lVar21) = 0;
        }
        if (local_128[uVar23 + 5] == '\0') {
          *(undefined8 *)(lVar20 + 0x11c + lVar21) = 0;
        }
        if (local_128[uVar23 + 6] == '\0') {
          *(undefined8 *)(lVar20 + 0x150 + lVar21) = 0;
        }
        if (local_128[uVar23 + 7] == '\0') {
          *(undefined8 *)(lVar20 + 0x184 + lVar21) = 0;
        }
        if (local_128[uVar23 + 8] == '\0') {
          *(undefined8 *)(lVar20 + 0x1b8 + lVar21) = 0;
        }
        if (local_128[uVar23 + 9] == '\0') {
          *(undefined8 *)(lVar20 + 0x1ec + lVar21) = 0;
        }
        if (local_128[uVar23 + 10] == '\0') {
          *(undefined8 *)(lVar20 + 0x220 + lVar21) = 0;
        }
        if (local_128[uVar23 + 0xb] == '\0') {
          *(undefined8 *)(lVar20 + 0x254 + lVar21) = 0;
        }
        if (local_128[uVar23 + 0xc] == '\0') {
          *(undefined8 *)(lVar20 + 0x288 + lVar21) = 0;
        }
        if (local_128[uVar23 + 0xd] == '\0') {
          *(undefined8 *)(lVar20 + 700 + lVar21) = 0;
        }
        if (local_128[uVar23 + 0xe] == '\0') {
          *(undefined8 *)(lVar20 + 0x2f0 + lVar21) = 0;
        }
        uVar23 = uVar23 + 0xf;
        lVar21 = lVar21 + 0x30c;
      } while (uVar23 < 0x2d);
      *(float *)(lVar20 + 0x94c) = fVar32;
      if (*(char *)(lVar20 + 0x938) == '\0') {
        *(undefined4 *)(lVar20 + 0x924) = 0xffffffff;
      }
      fVar28 = (float)FUN_1803aac50(lVar20 + 0x950,uVar23,local_150,DAT_1808ac118);
      if (fVar28 <= 0.0) {
        return;
      }
      if ((*(int *)(lVar20 + 0x924) < 0) ||
         (cVar13 = FUN_1803b3750(local_200), fVar28 = fVar9, cVar13 != '\0')) {
        fVar28 = 0.0;
      }
      fVar28 = (float)FUN_1803aac50(lVar20 + 0x968,fVar28,local_150);
      FUN_1803fc200(*param_1,(longlong)param_1 + 0x34,(longlong)param_1 + 0x3c,0);
      if (0.0 < fVar28) {
        lVar21 = *param_1;
        fVar2 = *(float *)((longlong)param_1 + 0x34);
        fVar33 = *(float *)(param_1 + 8) - DAT_1808aca54;
        local_210 = *(undefined8 *)((longlong)param_1 + 0x3c);
        fVar28 = fVar28 * DAT_1808ac140;
        iVar25 = *(int *)(lVar21 + 0x20);
        local_240 = 2.69049e-43;
        local_248 = *(float *)(lVar20 + 0x984);
        local_208 = fVar2;
        local_204 = fVar33;
        FUN_1803fe590(lVar21,&local_208,&local_210,0xff292ed9);
        fVar12 = DAT_1808aca80;
        fVar11 = DAT_1808aca28;
        fVar10 = DAT_1808ac900;
        if (iVar25 < *(int *)(lVar21 + 0x20)) {
          do {
            lVar19 = (longlong)iVar25;
            lVar20 = *(longlong *)(lVar21 + 0x28);
            fVar30 = (*(float *)(lVar20 + 4 + lVar19 * 0x14) - fVar33) / (local_210._4_4_ - fVar33);
            if (0.0 <= fVar30) {
              fVar32 = fVar9;
              if (fVar30 <= fVar9) {
                fVar32 = fVar30;
              }
            }
            else {
              fVar32 = 0.0;
            }
            fVar30 = *(float *)(lVar20 + lVar19 * 0x14);
            fVar31 = (fVar30 - (fVar2 - fVar11)) / fVar12;
            if (0.0 <= fVar31) {
              fVar29 = fVar9;
              if (fVar31 <= fVar9) {
                fVar29 = fVar31;
              }
            }
            else {
              fVar29 = 0.0;
            }
            if (fVar2 + fVar10 <= fVar30) {
              fVar29 = fVar9;
            }
            fVar29 = fVar32 * fVar28 * fVar29;
            if (0.0 <= fVar29) {
              fVar30 = fVar9;
              if (fVar29 <= fVar9) {
                fVar30 = fVar29;
              }
            }
            else {
              fVar30 = 0.0;
            }
            *(uint *)(lVar20 + 0x10 + lVar19 * 0x14) =
                 (int)(longlong)(fVar30 * DAT_1808acb94 + fVar8) << 0x18 |
                 *(uint *)(lVar20 + 0x10 + lVar19 * 0x14) & 0xffffff;
            iVar25 = iVar25 + 1;
          } while (iVar25 < *(int *)(lVar21 + 0x20));
        }
      }
      lVar20 = *param_1;
      iVar25 = *(int *)(lVar20 + 0xa0);
      iVar16 = iVar25 + -1;
      *(int *)(lVar20 + 0xa0) = iVar16;
      if (iVar16 == 0) {
        puVar18 = (undefined4 *)(*(longlong *)(lVar20 + 0x38) + 0x34);
      }
      else {
        puVar18 = (undefined4 *)((longlong)(iVar25 + -2) * 0x10 + *(longlong *)(lVar20 + 0xa8));
      }
      uVar24 = puVar18[1];
      uVar1 = puVar18[2];
      uVar6 = puVar18[3];
      *(undefined4 *)(lVar20 + 0x60) = *puVar18;
      *(undefined4 *)(lVar20 + 100) = uVar24;
      *(undefined4 *)(lVar20 + 0x68) = uVar1;
      *(undefined4 *)(lVar20 + 0x6c) = uVar6;
      FUN_1803fbff0();
      return;
    }
    puVar18 = (undefined4 *)((longlong)param_1 + 0x3c);
    fVar30 = fVar32;
  } while( true );
}



/* ===== 1803b4fa0 FUN_1803b4fa0 ===== */

void FUN_1803b4fa0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_128;
  float local_124;
  ulonglong local_120;
  longlong local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong local_e8;
  
  lVar5 = *(longlong *)(param_1 + 0x48);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x938) != '\0')) {
    iVar4 = *(int *)(lVar5 + 0x924);
    lVar11 = (longlong)iVar4;
    if (-1 < iVar4) {
      fVar1 = *(float *)(DAT_180ca0a50 + 0x110);
      fVar2 = *(float *)(DAT_180ca0a50 + 0x114);
      fVar17 = *(float *)(lVar5 + 0x93c) - fVar1;
      fVar19 = *(float *)(lVar5 + 0x940) - fVar2;
      fVar17 = fVar19 * fVar19 + fVar17 * fVar17;
      if (0.0 < fVar17) {
        if (fVar17 < 0.0) {
          fVar17 = (float)FUN_18051af10(fVar17);
        }
        else {
          fVar17 = SQRT(fVar17);
        }
        if (DAT_1808ac34c < fVar17) {
          uVar3 = *(undefined1 *)(param_1 + 0x28);
          cVar7 = FUN_1803b3750(param_2,iVar4);
          if (fVar2 < *(float *)(param_1 + 0x44) || fVar2 == *(float *)(param_1 + 0x44)) {
            if (cVar7 == '\0') {
              if (iVar4 - 0x1dU < 0x10) {
                *(undefined1 *)(lVar11 * 0x74 + 0x4f4 + param_2) = 1;
              }
              else if (iVar4 < 0x1d) {
                *(undefined1 *)(lVar11 * 0x98 + 4 + param_2) = 1;
              }
            }
            if (*(float *)(param_1 + 0xc) <= fVar2) {
              if (fVar2 < *(float *)(param_1 + 0x14) || fVar2 == *(float *)(param_1 + 0x14)) {
                if (*(float *)(param_1 + 0x2c) <= fVar1) {
                  if (fVar1 <= *(float *)(param_1 + 0x2c)) {
                    return;
                  }
                  uVar12 = 2;
                }
                else {
                  uVar12 = 0;
                }
              }
              else {
                uVar12 = 3;
              }
            }
            else {
              uVar12 = 1;
            }
            FUN_1803b38b0(&local_f0,param_2,uVar12,uVar3,0xffffffff);
            if (iVar4 - 0x1dU < 0x10) {
              lVar11 = FUN_1800aa7a0(param_2,lVar11 + -0x1d);
              if ((lVar11 == 0) || (*(int *)(lVar11 + 0x60) != 1)) {
                bVar14 = true;
                bVar15 = false;
              }
              else {
                bVar14 = false;
                bVar15 = true;
              }
            }
            else {
              bVar14 = *(int *)(&DAT_1806b317c + lVar11 * 0x118) != 0;
              bVar15 = *(int *)(&DAT_1806b317c + lVar11 * 0x118) == 0;
            }
            uVar6 = DAT_1808adec0;
            fVar17 = DAT_1808ac1f4;
            local_120 = local_e8 - local_f0 >> 2;
            uVar13 = 0;
            local_f8 = (uVar12 != *(uint *)(lVar5 + 0x928)) + local_120;
            if (local_f8 != 0) {
              fVar23 = 0.0;
              fVar21 = 0.0;
              uVar10 = 0;
              local_100 = param_1 + 8;
              fVar19 = DAT_1808acd08;
              do {
                if (uVar10 < local_120) {
                  iVar9 = *(int *)(local_f0 + uVar10 * 4);
                  cVar7 = FUN_1803b3750(param_2,iVar9);
                  if (cVar7 != '\0') goto LAB_1803b528e;
                }
                else {
                  iVar9 = iVar4;
LAB_1803b528e:
                  lVar11 = (longlong)iVar9;
                  local_118 = lVar11 * 0x34;
                  fVar20 = *(float *)(lVar5 + 0x2c + local_118);
                  if (iVar9 - 0x1dU < 0x10) {
                    lVar11 = FUN_1800aa7a0(param_2,lVar11 + -0x1d);
                    if ((lVar11 == 0) || (*(int *)(lVar11 + 0x60) != 1)) {
                      bVar16 = true;
                    }
                    else {
                      bVar16 = false;
                    }
                  }
                  else {
                    bVar16 = *(int *)(&DAT_1806b317c + lVar11 * 0x118) != 0;
                  }
                  if (bVar16 == false) {
                    fVar22 = 0.0;
                  }
                  else {
                    fVar22 = fVar20;
                  }
                  local_108 = fVar20;
                  local_104 = fVar22;
                  if ((uVar10 < local_120) && (bVar16 != bVar14)) {
                    if (bVar14 != false) {
                      fVar20 = fVar20 + *(float *)(lVar5 + 0x30 + local_118);
                      if ((uVar12 - 1 & 0xfffffffd) == 0) {
                        fVar21 = fVar21 + fVar20;
                      }
                      else {
                        fVar23 = fVar23 + fVar20;
                      }
                    }
                  }
                  else {
                    if (bVar14 == false) {
                      if (uVar12 < 2) {
                        local_110 = (float)((uint)fVar20 ^ uVar6) * fVar17;
                        if (uVar12 == 1) goto LAB_1803b5395;
                      }
                      else {
                        local_110 = fVar20 * fVar17;
                      }
                      if (uVar12 == 3) goto LAB_1803b5395;
                      local_110 = local_110 + fVar23;
                      local_10c = fVar21;
                    }
                    else {
                      local_110 = fVar20;
                      if (uVar12 == 1) {
                        local_110 = (float)((uint)fVar20 ^ uVar6);
                      }
                      local_110 = local_110 * fVar17;
LAB_1803b5395:
                      local_10c = local_110 + fVar21;
                      local_110 = fVar23;
                    }
                    FUN_1803ab850(&local_128,local_100,uVar12,bVar15,&local_108,&local_110);
                    if (bVar16 != false) {
                      fVar18 = (float)FUN_18053fc00(fVar20 * DAT_1808ac140);
                      local_124 = local_124 - fVar18;
                      fVar20 = fVar20 - fVar18;
                    }
                    if (bVar14 == false) {
                      if ((uVar12 - 1 & 0xfffffffd) == 0) {
                        local_128 = *(float *)(param_1 + 0x2c);
                      }
                      else {
                        local_124 = *(float *)(param_1 + 0x30);
                      }
                    }
                    fVar18 = (fVar2 - local_124) * (fVar2 - local_124) +
                             (fVar1 - local_128) * (fVar1 - local_128);
                    if (fVar18 < 0.0) {
                      fVar18 = (float)FUN_18051af10(fVar18);
                    }
                    else {
                      fVar18 = SQRT(fVar18);
                    }
                    uVar8 = (int)uVar10;
                    if (fVar19 <= fVar18) {
                      uVar8 = uVar13;
                    }
                    if (fVar18 <= fVar19) {
                      fVar19 = fVar18;
                    }
                    fVar18 = *(float *)(lVar5 + 0x30 + local_118);
                    uVar13 = uVar8;
                    if (bVar14 == false) {
                      fVar18 = fVar18 + fVar20;
                      if ((uVar12 - 1 & 0xfffffffd) == 0) {
                        fVar21 = fVar21 + fVar18;
                      }
                      else {
                        fVar23 = fVar23 + fVar18;
                      }
                    }
                    else {
                      fVar21 = fVar21 + fVar18 + fVar22;
                    }
                  }
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < local_f8);
            }
            FUN_1803b3bf0(param_2,iVar4,uVar12,uVar13,uVar3);
            FUN_180068f30(&local_f0);
          }
          else {
            if (cVar7 != '\0') {
              if (iVar4 - 0x1dU < 0x10) {
                *(undefined1 *)(lVar11 * 0x74 + 0x4f4 + param_2) = 0;
              }
              else if (iVar4 < 0x1d) {
                *(undefined1 *)(lVar11 * 0x98 + 4 + param_2) = 0;
              }
            }
            if (*(uint *)(lVar5 + 0x930) < 4) {
              FUN_1803b3bf0(param_2,iVar4,*(uint *)(lVar5 + 0x930),*(undefined4 *)(lVar5 + 0x934),
                            uVar3);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== 1803b5560 FUN_1803b5560 ===== */

void FUN_1803b5560(longlong param_1,undefined1 param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong local_28;
  longlong local_20;
  
  FUN_1803b38b0(&local_28,param_1,0,param_2,0xffffffff);
  uVar2 = 0;
  if (local_20 - local_28 >> 2 != 0) {
    do {
      iVar1 = *(int *)(local_28 + uVar2 * 4);
      if (iVar1 - 0x1dU < 0x10) {
        *(int *)((longlong)iVar1 * 0x74 + 0x4fc + param_1) = (int)uVar2;
      }
      else {
        *(int *)(param_1 + 0xc + (longlong)iVar1 * 0x98) = (int)uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)(local_20 - local_28 >> 2));
  }
  FUN_180068f30(&local_28);
  FUN_1803b38b0(&local_28,param_1,1,param_2,0xffffffff);
  uVar2 = 0;
  if (local_20 - local_28 >> 2 != 0) {
    do {
      iVar1 = *(int *)(local_28 + uVar2 * 4);
      if (iVar1 - 0x1dU < 0x10) {
        *(int *)((longlong)iVar1 * 0x74 + 0x4fc + param_1) = (int)uVar2;
      }
      else {
        *(int *)(param_1 + 0xc + (longlong)iVar1 * 0x98) = (int)uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)(local_20 - local_28 >> 2));
  }
  FUN_180068f30(&local_28);
  FUN_1803b38b0(&local_28,param_1,2,param_2,0xffffffff);
  uVar2 = 0;
  if (local_20 - local_28 >> 2 != 0) {
    do {
      iVar1 = *(int *)(local_28 + uVar2 * 4);
      if (iVar1 - 0x1dU < 0x10) {
        *(int *)((longlong)iVar1 * 0x74 + 0x4fc + param_1) = (int)uVar2;
      }
      else {
        *(int *)(param_1 + 0xc + (longlong)iVar1 * 0x98) = (int)uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)(local_20 - local_28 >> 2));
  }
  FUN_180068f30(&local_28);
  FUN_1803b38b0(&local_28,param_1,3,param_2,0xffffffff);
  uVar2 = 0;
  if (local_20 - local_28 >> 2 != 0) {
    do {
      iVar1 = *(int *)(local_28 + uVar2 * 4);
      if (iVar1 - 0x1dU < 0x10) {
        *(int *)((longlong)iVar1 * 0x74 + 0x4fc + param_1) = (int)uVar2;
      }
      else {
        *(int *)(param_1 + 0xc + (longlong)iVar1 * 0x98) = (int)uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)(local_20 - local_28 >> 2));
  }
  FUN_180068f30(&local_28);
  return;
}



/* ===== 1803b5790 FUN_1803b5790 ===== */

void FUN_1803b5790(void)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  dVar2 = DAT_1808ac548;
  dVar1 = *(double *)(DAT_180ca0a50 + 0x10);
  if ((longlong *)*DAT_181108e78 != DAT_181108e78) {
    plVar4 = DAT_181108e78;
    plVar5 = (longlong *)*DAT_181108e78;
    do {
      lVar3 = DAT_181108e88;
      if (dVar1 - (double)plVar5[0x12] <= dVar2) {
        plVar6 = (longlong *)*plVar5;
      }
      else {
        uVar7 = DAT_181108ea0 &
                (((((((((ulonglong)*(byte *)(plVar5 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar5 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar5 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar5 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar5 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar5 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar5 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar5 + 0x17)) * 0x100000001b3;
        plVar6 = *(longlong **)(DAT_181108e88 + uVar7 * 0x10);
        if (*(longlong **)(DAT_181108e88 + 8 + uVar7 * 0x10) == plVar5) {
          if (plVar6 == plVar5) {
            *(longlong **)(DAT_181108e88 + uVar7 * 0x10) = plVar4;
            *(longlong **)(lVar3 + 8 + uVar7 * 0x10) = plVar4;
          }
          else {
            *(longlong *)(DAT_181108e88 + 8 + uVar7 * 0x10) = plVar5[1];
          }
        }
        else if (plVar6 == plVar5) {
          *(longlong *)(DAT_181108e88 + uVar7 * 0x10) = *plVar5;
        }
        plVar6 = (longlong *)*plVar5;
        DAT_181108e80 = DAT_181108e80 + -1;
        *(longlong **)plVar5[1] = plVar6;
        plVar6[1] = plVar5[1];
        FUN_18000f890(plVar5 + 0xd);
        thunk_FUN_1803d64e0(plVar5,0x98);
        plVar4 = DAT_181108e78;
      }
      plVar5 = plVar6;
    } while (plVar6 != plVar4);
  }
  if ((longlong *)*DAT_181108e38 != DAT_181108e38) {
    plVar4 = DAT_181108e38;
    plVar5 = (longlong *)*DAT_181108e38;
    do {
      lVar3 = DAT_181108e48;
      if (dVar1 - (double)plVar5[9] <= dVar2) {
        plVar6 = (longlong *)*plVar5;
      }
      else {
        uVar7 = (((((ulonglong)*(byte *)(plVar5 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar5 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar5 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar5 + 0x13)) * 0x100000001b3 & DAT_181108e60;
        plVar6 = *(longlong **)(DAT_181108e48 + uVar7 * 0x10);
        if (*(longlong **)(DAT_181108e48 + 8 + uVar7 * 0x10) == plVar5) {
          if (plVar6 == plVar5) {
            *(longlong **)(DAT_181108e48 + uVar7 * 0x10) = plVar4;
            *(longlong **)(lVar3 + 8 + uVar7 * 0x10) = plVar4;
          }
          else {
            *(longlong *)(DAT_181108e48 + 8 + uVar7 * 0x10) = plVar5[1];
          }
        }
        else if (plVar6 == plVar5) {
          *(longlong *)(DAT_181108e48 + uVar7 * 0x10) = *plVar5;
        }
        plVar6 = (longlong *)*plVar5;
        DAT_181108e40 = DAT_181108e40 + -1;
        *(longlong **)plVar5[1] = plVar6;
        plVar6[1] = plVar5[1];
        FUN_1803ba380(plVar5 + 6);
        FUN_1803ba380(plVar5 + 3);
        thunk_FUN_1803d64e0(plVar5,0x50);
        plVar4 = DAT_181108e38;
      }
      plVar5 = plVar6;
    } while (plVar6 != plVar4);
  }
  return;
}



/* ===== 1803b59e0 FUN_1803b59e0 ===== */

void FUN_1803b59e0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1803ba380(puVar1 + 6);
    FUN_1803ba380(puVar1 + 3);
    thunk_FUN_1803d64e0(puVar1,0x50);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x50);
  return;
}



/* ===== 1803b5a60 FUN_1803b5a60 ===== */

void FUN_1803b5a60(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_18000f890(puVar1 + 0xd);
    thunk_FUN_1803d64e0(puVar1,0x98);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x98);
  return;
}



/* ===== 1803b5ad0 FUN_1803b5ad0 ===== */

longlong * FUN_1803b5ad0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (param_1 == param_2) {
    return param_2;
  }
  for (plVar10 = param_1 + 6; plVar10 != param_2; plVar10 = plVar10 + 6) {
    lVar3 = *plVar10;
    lVar4 = plVar10[1];
    lVar5 = plVar10[2];
    lVar6 = plVar10[3];
    lVar7 = plVar10[4];
    lVar2 = plVar10[5];
    if (*(float *)(*param_1 + 0x28) <= *(float *)(lVar3 + 0x28)) {
      plVar8 = plVar10;
      plVar9 = plVar10;
      if (*(float *)(lVar3 + 0x28) < *(float *)(plVar10[-6] + 0x28)) {
        do {
          plVar9 = plVar8 + -6;
          *plVar8 = *plVar9;
          plVar8[1] = plVar8[-5];
          plVar8[2] = plVar8[-4];
          plVar8[3] = plVar8[-3];
          plVar8[4] = plVar8[-2];
          plVar8[5] = plVar8[-1];
          plVar1 = plVar8 + -0xc;
          plVar8 = plVar9;
        } while (*(float *)(lVar3 + 0x28) <= *(float *)(*plVar1 + 0x28) &&
                 *(float *)(*plVar1 + 0x28) != *(float *)(lVar3 + 0x28));
      }
      plVar9[1] = lVar4;
      plVar9[2] = lVar5;
      *plVar9 = lVar3;
      plVar9[3] = lVar6;
      plVar9[4] = lVar7;
      plVar9[5] = lVar2;
    }
    else {
      FUN_180540530(param_1 + 6,param_1,(longlong)plVar10 - (longlong)param_1);
      param_1[1] = lVar4;
      param_1[2] = lVar5;
      *param_1 = lVar3;
      param_1[3] = lVar6;
      param_1[4] = lVar7;
      param_1[5] = lVar2;
    }
  }
  return param_2;
}



/* ===== 1803b5c10 FUN_1803b5c10 ===== */

longlong * FUN_1803b5c10(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x56) {
    plVar1 = param_1 + 2;
    uVar2 = param_2;
  }
  else {
    uVar2 = 0x7fffffffffffffff;
    if ((longlong)param_2 < 0x7fffffffffffffff) {
      uVar2 = param_2;
    }
    if ((uVar2 < 0x555555555555556) && (0 < (longlong)uVar2)) {
      do {
        plVar1 = (longlong *)FUN_1804ed030(uVar2 * 0x30,&DAT_1805757b2);
        if (plVar1 != (longlong *)0x0) {
          if (uVar2 < 0x56) goto LAB_1803b5c84;
          goto LAB_1803b5c95;
        }
        uVar2 = uVar2 >> 1;
      } while (uVar2 != 0);
    }
    plVar1 = (longlong *)0x0;
LAB_1803b5c84:
    FUN_1803d64e0(plVar1);
    plVar1 = param_1 + 2;
    uVar2 = 0x55;
  }
LAB_1803b5c95:
  *param_1 = (longlong)plVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* ===== 1803b5cc0 FUN_1803b5cc0 ===== */

void FUN_1803b5cc0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_1803b5ad0();
    return;
  }
  uVar1 = param_3 >> 1;
  lVar2 = param_3 - uVar1;
  lVar3 = lVar2 * 0x30 + param_1;
  if (param_5 < lVar2) {
    FUN_1803b5cc0(param_1,lVar3,lVar2,param_4,param_5,param_6);
    FUN_1803b5cc0(lVar3,param_2,uVar1,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_1803b6c20();
    FUN_1803b6c20(lVar3,param_2,uVar1,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_1803b6e50(param_1,lVar3,param_2,lVar2,uVar1,param_4,param_5,param_6);
  return;
}



/* ===== 1803b5dc0 FUN_1803b5dc0 ===== */

undefined8 * FUN_1803b5dc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if (param_1 == param_2) {
    return param_2;
  }
  for (puVar9 = param_1 + 6; puVar9 != param_2; puVar9 = puVar9 + 6) {
    piVar2 = (int *)*puVar9;
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    uVar5 = puVar9[3];
    uVar6 = puVar9[4];
    iVar8 = *piVar2;
    uVar1 = puVar9[5];
    if (iVar8 == 0x2b) {
      iVar8 = 4;
    }
    else if (iVar8 == 0x2c) {
      iVar8 = 0;
    }
    else if (iVar8 == 0x2d) {
      iVar8 = 3;
    }
    else if (iVar8 == 0x2e) {
      iVar8 = 1;
    }
    else if (iVar8 == 0x30) {
      iVar8 = 2;
    }
    else {
      iVar8 = iVar8 + 1000;
    }
    iVar7 = *(int *)*param_1;
    if (iVar7 == 0x2b) {
      iVar7 = 4;
    }
    else if (iVar7 == 0x2c) {
      iVar7 = 0;
    }
    else if (iVar7 == 0x2d) {
      iVar7 = 3;
    }
    else if (iVar7 == 0x2e) {
      iVar7 = 1;
    }
    else if (iVar7 == 0x30) {
      iVar7 = 2;
    }
    else {
      iVar7 = iVar7 + 1000;
    }
    if (iVar8 < iVar7) {
      FUN_180540530(param_1 + 6,param_1,(longlong)puVar9 - (longlong)param_1);
      param_1[1] = uVar3;
      param_1[2] = uVar4;
      *param_1 = piVar2;
      param_1[3] = uVar5;
      param_1[4] = uVar6;
      param_1[5] = uVar1;
    }
    else {
      puVar11 = puVar9;
      while( true ) {
        iVar8 = *piVar2;
        puVar10 = puVar11 + -6;
        if (iVar8 == 0x2b) {
          iVar8 = 4;
        }
        else if (iVar8 == 0x2c) {
          iVar8 = 0;
        }
        else if (iVar8 == 0x2d) {
          iVar8 = 3;
        }
        else if (iVar8 == 0x2e) {
          iVar8 = 1;
        }
        else if (iVar8 == 0x30) {
          iVar8 = 2;
        }
        else {
          iVar8 = iVar8 + 1000;
        }
        iVar7 = *(int *)*puVar10;
        if (iVar7 == 0x2b) {
          iVar7 = 4;
        }
        else if (iVar7 == 0x2c) {
          iVar7 = 0;
        }
        else if (iVar7 == 0x2d) {
          iVar7 = 3;
        }
        else if (iVar7 == 0x2e) {
          iVar7 = 1;
        }
        else if (iVar7 == 0x30) {
          iVar7 = 2;
        }
        else {
          iVar7 = iVar7 + 1000;
        }
        if (iVar7 <= iVar8) break;
        *puVar11 = *puVar10;
        puVar11[1] = puVar11[-5];
        puVar11[2] = puVar11[-4];
        puVar11[3] = puVar11[-3];
        *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(puVar11 + -2);
        *(undefined4 *)((longlong)puVar11 + 0x24) = *(undefined4 *)((longlong)puVar11 + -0xc);
        *(undefined4 *)(puVar11 + 5) = *(undefined4 *)(puVar11 + -1);
        *(undefined4 *)((longlong)puVar11 + 0x2c) = *(undefined4 *)((longlong)puVar11 + -4);
        puVar11 = puVar10;
      }
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      *puVar11 = piVar2;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar1;
    }
  }
  return param_2;
}



/* ===== 1803b6000 FUN_1803b6000 ===== */

void FUN_1803b6000(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_1803b5dc0();
    return;
  }
  uVar1 = param_3 >> 1;
  lVar2 = param_3 - uVar1;
  lVar3 = lVar2 * 0x30 + param_1;
  if (param_5 < lVar2) {
    FUN_1803b6000(param_1,lVar3,lVar2,param_4,param_5,param_6);
    FUN_1803b6000(lVar3,param_2,uVar1,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_1803b6fb0();
    FUN_1803b6fb0(lVar3,param_2,uVar1,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_1803b7260(param_1,lVar3,param_2,lVar2,uVar1,param_4,param_5,param_6);
  return;
}



/* ===== 1803b6100 FUN_1803b6100 ===== */

undefined8 * FUN_1803b6100(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_1 == param_2) {
    return param_2;
  }
  for (puVar5 = param_1 + 1; puVar5 != param_2; puVar5 = puVar5 + 1) {
    puVar1 = (undefined8 *)*puVar5;
    iVar4 = *(int *)*puVar1;
    if (iVar4 == 0x2b) {
      iVar4 = 4;
    }
    else if (iVar4 == 0x2c) {
      iVar4 = 0;
    }
    else if (iVar4 == 0x2d) {
      iVar4 = 3;
    }
    else if (iVar4 == 0x2e) {
      iVar4 = 1;
    }
    else if (iVar4 == 0x30) {
      iVar4 = 2;
    }
    else {
      iVar4 = iVar4 + 1000;
    }
    iVar3 = **(int **)*param_1;
    if (iVar3 == 0x2b) {
      iVar3 = 4;
    }
    else if (iVar3 == 0x2c) {
      iVar3 = 0;
    }
    else if (iVar3 == 0x2d) {
      iVar3 = 3;
    }
    else if (iVar3 == 0x2e) {
      iVar3 = 1;
    }
    else if (iVar3 == 0x30) {
      iVar3 = 2;
    }
    else {
      iVar3 = iVar3 + 1000;
    }
    if (iVar4 < iVar3) {
      FUN_180540530(param_1 + 1,param_1,(longlong)puVar5 - (longlong)param_1);
      *param_1 = puVar1;
    }
    else {
      puVar6 = puVar5;
      while( true ) {
        iVar4 = *(int *)*puVar1;
        if (iVar4 == 0x2b) {
          iVar4 = 4;
        }
        else if (iVar4 == 0x2c) {
          iVar4 = 0;
        }
        else if (iVar4 == 0x2d) {
          iVar4 = 3;
        }
        else if (iVar4 == 0x2e) {
          iVar4 = 1;
        }
        else if (iVar4 == 0x30) {
          iVar4 = 2;
        }
        else {
          iVar4 = iVar4 + 1000;
        }
        puVar2 = (undefined8 *)puVar6[-1];
        iVar3 = *(int *)*puVar2;
        if (iVar3 == 0x2b) {
          iVar3 = 4;
        }
        else if (iVar3 == 0x2c) {
          iVar3 = 0;
        }
        else if (iVar3 == 0x2d) {
          iVar3 = 3;
        }
        else if (iVar3 == 0x2e) {
          iVar3 = 1;
        }
        else if (iVar3 == 0x30) {
          iVar3 = 2;
        }
        else {
          iVar3 = iVar3 + 1000;
        }
        if (iVar3 <= iVar4) break;
        *puVar6 = puVar2;
        puVar6 = puVar6 + -1;
      }
      *puVar6 = puVar1;
    }
  }
  return param_2;
}



/* ===== 1803b62e0 FUN_1803b62e0 ===== */

void FUN_1803b62e0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_1803b6100();
    return;
  }
  uVar2 = param_3 >> 1;
  lVar3 = param_3 - uVar2;
  lVar1 = param_1 + lVar3 * 8;
  if (param_5 < lVar3) {
    FUN_1803b62e0(param_1,lVar1,lVar3,param_4,param_5,param_6);
    FUN_1803b62e0(lVar1,param_2,uVar2,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_1803b74f0();
    FUN_1803b74f0(lVar1,param_2,uVar2,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_1803b7790(param_1,lVar1,param_2,lVar3,uVar2,param_4,param_5,param_6);
  return;
}



/* ===== 1803b63e0 FUN_1803b63e0 ===== */

undefined4 * FUN_1803b63e0(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 local_res18 [2];
  
  if (param_1 == param_2) {
    return param_2;
  }
  local_res18[0] = param_3;
  for (puVar4 = param_1 + 1; puVar4 != param_2; puVar4 = puVar4 + 1) {
    uVar1 = *puVar4;
    cVar3 = FUN_1803b3af0(local_res18,uVar1,*param_1);
    if (cVar3 == '\0') {
      cVar3 = FUN_1803b3af0(local_res18,uVar1,puVar4[-1]);
      puVar2 = puVar4;
      while (cVar3 != '\0') {
        *puVar2 = puVar2[-1];
        cVar3 = FUN_1803b3af0(local_res18,uVar1,puVar2[-2]);
        puVar2 = puVar2 + -1;
      }
      *puVar2 = uVar1;
    }
    else {
      FUN_180540530(param_1 + 1,param_1,(longlong)puVar4 - (longlong)param_1);
      *param_1 = uVar1;
    }
  }
  return param_2;
}



/* ===== 1803b64d0 FUN_1803b64d0 ===== */

void FUN_1803b64d0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((longlong)param_3 < 0x21) {
    FUN_1803b63e0(param_1,param_2,param_6);
    return;
  }
  uVar2 = param_3 >> 1;
  lVar3 = param_3 - uVar2;
  lVar1 = param_1 + lVar3 * 4;
  if (param_5 < lVar3) {
    FUN_1803b64d0(param_1,lVar1,lVar3,param_4,param_5,param_6);
    FUN_1803b64d0(lVar1,param_2,uVar2,param_4,param_5,param_6);
  }
  else {
    FUN_1803b79d0();
    FUN_1803b79d0(lVar1,param_2,uVar2,param_4,param_6);
  }
  FUN_1803b7c30(param_1,lVar1,param_2,lVar3,uVar2,param_4,param_5,param_6);
  return;
}



/* ===== 1803b65e0 FUN_1803b65e0 ===== */

undefined8 * FUN_1803b65e0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar8 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar7 = (undefined8 *)(DAT_181108e60 & uVar8);
  puVar4 = *(undefined8 **)(DAT_181108e48 + 8 + (longlong)puVar7 * 0x10);
  puVar9 = DAT_181108e38;
  if (puVar4 != DAT_181108e38) {
    puVar7 = *(undefined8 **)(DAT_181108e48 + (longlong)puVar7 * 0x10);
    iVar1 = *(int *)(puVar4 + 2);
    puVar9 = puVar4;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == puVar7) break;
      puVar9 = (undefined8 *)puVar9[1];
      iVar1 = *(int *)(puVar9 + 2);
    }
  }
  if (DAT_181108e40 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x50,puVar7,DAT_181108e48,param_4,&DAT_181108e38,0);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_3;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  uVar3 = DAT_181108e68;
  if (DAT_181108e30 < (float)(DAT_181108e40 + 1) / (float)DAT_181108e68) {
    fVar11 = (float)FUN_18053ef70((float)(DAT_181108e40 + 1) / DAT_181108e30);
    lVar5 = 0;
    if ((DAT_1808acd00 <= fVar11) && (fVar11 = fVar11 - DAT_1808acd00, fVar11 < DAT_1808acd00)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar5)) {
      uVar6 = (longlong)fVar11 + lVar5;
    }
    uVar10 = uVar3;
    if ((uVar3 < uVar6) && ((0x1ff < uVar3 || (uVar10 = uVar3 * 8, uVar3 * 8 < uVar6)))) {
      uVar10 = uVar6;
    }
    FUN_1803b93b0(uVar6,uVar10);
    puVar7 = *(undefined8 **)(DAT_181108e48 + 8 + (DAT_181108e60 & uVar8) * 0x10);
    puVar9 = DAT_181108e38;
    if (puVar7 != DAT_181108e38) {
      iVar1 = *(int *)(puVar7 + 2);
      puVar9 = puVar7;
      while (*(int *)(puVar4 + 2) != iVar1) {
        if (puVar9 == *(undefined8 **)(DAT_181108e48 + (DAT_181108e60 & uVar8) * 0x10))
        goto LAB_1803b6828;
        puVar9 = (undefined8 *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_1803b6828:
  puVar7 = (undefined8 *)puVar9[1];
  DAT_181108e40 = DAT_181108e40 + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar9[1] = puVar4;
  lVar5 = DAT_181108e48;
  uVar8 = DAT_181108e60 & uVar8;
  puVar2 = *(undefined8 **)(DAT_181108e48 + uVar8 * 0x10);
  if (puVar2 == DAT_181108e38) {
    *(undefined8 **)(DAT_181108e48 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar9) {
      *(undefined8 **)(DAT_181108e48 + uVar8 * 0x10) = puVar4;
      goto LAB_1803b6887;
    }
    if (*(undefined8 **)(DAT_181108e48 + 8 + uVar8 * 0x10) != puVar7) goto LAB_1803b6887;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
LAB_1803b6887:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1803b68b0 FUN_1803b68b0 ===== */

undefined8 * FUN_1803b68b0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  puVar6 = (undefined8 *)(DAT_181108ea0 & uVar7);
  puVar3 = *(undefined8 **)(DAT_181108e88 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_181108e78;
  if (puVar3 != DAT_181108e78) {
    puVar6 = *(undefined8 **)(DAT_181108e88 + (longlong)puVar6 * 0x10);
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
  if (DAT_181108e80 == 0x1af286bca1af286) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x98,puVar6,DAT_181108e88,param_4,&DAT_181108e78,0);
  puVar3[2] = *(undefined8 *)param_3;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined4 *)(puVar3 + 8) = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  puVar3[0x10] = 0xf;
  puVar3[0x11] = 0xbff0000000000000;
  puVar3[0x12] = 0;
  uVar2 = DAT_181108ea8;
  if (DAT_181108e70 < (float)(DAT_181108e80 + 1) / (float)DAT_181108ea8) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_181108e80 + 1) / DAT_181108e70);
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
    FUN_1803b9580(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_181108e88 + 8 + (DAT_181108ea0 & uVar7) * 0x10);
    puVar8 = DAT_181108e78;
    if (puVar6 != DAT_181108e78) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_181108e88 + (DAT_181108ea0 & uVar7) * 0x10))
        goto LAB_1803b6b7e;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_1803b6b7e:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_181108e80 = DAT_181108e80 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_181108e88;
  uVar7 = DAT_181108ea0 & uVar7;
  puVar1 = *(undefined8 **)(DAT_181108e88 + uVar7 * 0x10);
  if (puVar1 == DAT_181108e78) {
    *(undefined8 **)(DAT_181108e88 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_181108e88 + uVar7 * 0x10) = puVar3;
      goto LAB_1803b6bdd;
    }
    if (*(undefined8 **)(DAT_181108e88 + 8 + uVar7 * 0x10) != puVar6) goto LAB_1803b6bdd;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_1803b6bdd:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1803b6c20 FUN_1803b6c20 ===== */

void FUN_1803b6c20(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  plVar7 = param_1;
  for (lVar10 = param_3; 0x20 < lVar10; lVar10 = lVar10 + -0x20) {
    plVar7 = (longlong *)FUN_1803b5ad0(plVar7,plVar7 + 0xc0);
  }
  FUN_1803b5ad0(plVar7,param_2);
  if (0x20 < param_3) {
    plVar7 = param_4;
    lVar10 = param_3;
    plVar13 = param_1;
    do {
      lVar1 = lVar10 + -0x20;
      plVar2 = plVar13 + 0xc0;
      lVar11 = lVar10 + -0x40;
      plVar3 = plVar13 + 0xba;
      if (lVar1 < 0x20) {
        lVar11 = 0;
      }
      lVar8 = 0xc00;
      if (lVar1 < 0x20) {
        lVar8 = lVar10 * 0x30;
      }
      plVar12 = (longlong *)(lVar8 + (longlong)plVar13);
      lVar8 = 0xbd0;
      if (lVar1 < 0x20) {
        lVar8 = lVar10 * 0x30 + -0x30;
      }
      plVar4 = (longlong *)(lVar8 + (longlong)plVar13);
      plVar9 = plVar2;
      while( true ) {
        while (*(float *)(*plVar9 + 0x28) <= *(float *)(*plVar13 + 0x28) &&
               *(float *)(*plVar13 + 0x28) != *(float *)(*plVar9 + 0x28)) {
          lVar10 = plVar9[1];
          *plVar7 = *plVar9;
          plVar7[1] = lVar10;
          uVar5 = *(undefined4 *)((longlong)plVar9 + 0x14);
          lVar10 = plVar9[3];
          uVar6 = *(undefined4 *)((longlong)plVar9 + 0x1c);
          *(int *)(plVar7 + 2) = (int)plVar9[2];
          *(undefined4 *)((longlong)plVar7 + 0x14) = uVar5;
          *(int *)(plVar7 + 3) = (int)lVar10;
          *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar6;
          uVar5 = *(undefined4 *)((longlong)plVar9 + 0x24);
          lVar10 = plVar9[5];
          uVar6 = *(undefined4 *)((longlong)plVar9 + 0x2c);
          *(int *)(plVar7 + 4) = (int)plVar9[4];
          *(undefined4 *)((longlong)plVar7 + 0x24) = uVar5;
          *(int *)(plVar7 + 5) = (int)lVar10;
          *(undefined4 *)((longlong)plVar7 + 0x2c) = uVar6;
          if (plVar9 == plVar4) {
            lVar10 = (longlong)plVar2 - (longlong)plVar13;
            plVar9 = plVar13;
            goto LAB_1803b6d72;
          }
          plVar9 = plVar9 + 6;
          plVar7 = plVar7 + 6;
        }
        lVar10 = plVar13[1];
        *plVar7 = *plVar13;
        plVar7[1] = lVar10;
        uVar5 = *(undefined4 *)((longlong)plVar13 + 0x14);
        lVar10 = plVar13[3];
        uVar6 = *(undefined4 *)((longlong)plVar13 + 0x1c);
        *(int *)(plVar7 + 2) = (int)plVar13[2];
        *(undefined4 *)((longlong)plVar7 + 0x14) = uVar5;
        *(int *)(plVar7 + 3) = (int)lVar10;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar6;
        uVar5 = *(undefined4 *)((longlong)plVar13 + 0x24);
        lVar10 = plVar13[5];
        uVar6 = *(undefined4 *)((longlong)plVar13 + 0x2c);
        *(int *)(plVar7 + 4) = (int)plVar13[4];
        *(undefined4 *)((longlong)plVar7 + 0x24) = uVar5;
        *(int *)(plVar7 + 5) = (int)lVar10;
        *(undefined4 *)((longlong)plVar7 + 0x2c) = uVar6;
        if (plVar13 == plVar3) break;
        plVar13 = plVar13 + 6;
        plVar7 = plVar7 + 6;
      }
      lVar10 = (longlong)plVar12 - (longlong)plVar9;
LAB_1803b6d72:
      FUN_180540530(plVar7 + 6,plVar9,lVar10);
      plVar7 = (longlong *)((longlong)plVar7 + lVar10 + 0x30);
      lVar10 = lVar11;
      plVar13 = plVar12;
    } while (0x20 < lVar11);
    FUN_180540530(plVar7,plVar12,param_2 - (longlong)plVar12);
    lVar10 = 0x40;
    FUN_1803b8020(param_4,param_4 + param_3 * 6,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_1803b8020(param_1,param_2,param_4,lVar10 * 2,param_3,param_5);
        lVar10 = lVar10 * 4;
        FUN_1803b8020(param_4,param_4 + param_3 * 6,param_1,lVar10,param_3,param_5);
      } while (lVar10 <= (param_3 + -1) / 2);
    }
  }
  return;
}



/* ===== 1803b6e50 FUN_1803b6e50 ===== */

void FUN_1803b6e50(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    fVar1 = *(float *)(*param_2 + 0x28);
    while (*(float *)(*param_1 + 0x28) <= fVar1) {
      param_1 = param_1 + 6;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    plVar10 = param_3 + -6;
    if (param_2 != plVar10) {
      plVar9 = plVar10;
      do {
        if (*(float *)(*plVar9 + 0x28) <= *(float *)(param_2[-6] + 0x28) &&
            *(float *)(param_2[-6] + 0x28) != *(float *)(*plVar9 + 0x28)) {
          if (param_4 == 1) {
            lVar2 = *param_1;
            lVar3 = param_1[1];
            lVar8 = (longlong)param_3 - (longlong)param_2;
            lVar4 = param_1[2];
            lVar5 = param_1[3];
            lVar6 = param_1[4];
            lVar7 = param_1[5];
            FUN_180540530(param_1,fVar1,lVar8);
            *(longlong *)(lVar8 + (longlong)param_1) = lVar2;
            ((longlong *)(lVar8 + (longlong)param_1))[1] = lVar3;
            plVar10 = (longlong *)(lVar8 + 0x10 + (longlong)param_1);
            *plVar10 = lVar4;
            plVar10[1] = lVar5;
            param_1 = (longlong *)(lVar8 + 0x20 + (longlong)param_1);
            *param_1 = lVar6;
            param_1[1] = lVar7;
            return;
          }
          FUN_1803b8170(param_1,fVar1,param_3,param_4,param_5,param_6,param_7,param_8);
          return;
        }
        param_5 = param_5 + -1;
        plVar10 = plVar9 + -6;
        param_3 = plVar9;
        plVar9 = plVar10;
      } while (param_2 != plVar10);
    }
    lVar2 = *param_2;
    lVar3 = param_2[1];
    lVar4 = param_2[2];
    lVar5 = param_2[3];
    lVar6 = param_2[4];
    lVar7 = param_2[5];
    FUN_180540530((longlong)plVar10 + (0x30 - ((longlong)param_2 - (longlong)param_1)),param_1,
                  (longlong)param_2 - (longlong)param_1);
    *param_1 = lVar2;
    param_1[1] = lVar3;
    param_1[2] = lVar4;
    param_1[3] = lVar5;
    param_1[4] = lVar6;
    param_1[5] = lVar7;
  }
  return;
}



/* ===== 1803b6fb0 FUN_1803b6fb0 ===== */

void FUN_1803b6fb0(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  
  puVar10 = param_1;
  for (lVar13 = param_3; 0x20 < lVar13; lVar13 = lVar13 + -0x20) {
    puVar10 = (undefined8 *)FUN_1803b5dc0(puVar10,puVar10 + 0xc0);
  }
  FUN_1803b5dc0(puVar10,param_2);
  if (0x20 < param_3) {
    puVar10 = param_4;
    puVar16 = param_1;
    lVar13 = param_3;
    do {
      lVar1 = lVar13 + -0x20;
      puVar3 = puVar16 + 0xc0;
      lVar18 = lVar13 + -0x40;
      puVar4 = puVar16 + 0xba;
      if (lVar1 < 0x20) {
        lVar18 = 0;
      }
      lVar14 = 0xc00;
      if (lVar1 < 0x20) {
        lVar14 = lVar13 * 0x30;
      }
      puVar15 = (undefined8 *)(lVar14 + (longlong)puVar16);
      lVar14 = 0xbd0;
      if (lVar1 < 0x20) {
        lVar14 = lVar13 * 0x30 + -0x30;
      }
      puVar17 = (undefined8 *)(lVar14 + (longlong)puVar16);
      puVar12 = puVar3;
      while( true ) {
        while( true ) {
          iVar11 = *(int *)*puVar12;
          if (iVar11 == 0x2b) {
            iVar11 = 4;
          }
          else if (iVar11 == 0x2c) {
            iVar11 = 0;
          }
          else if (iVar11 == 0x2d) {
            iVar11 = 3;
          }
          else if (iVar11 == 0x2e) {
            iVar11 = 1;
          }
          else if (iVar11 == 0x30) {
            iVar11 = 2;
          }
          else {
            iVar11 = iVar11 + 1000;
          }
          iVar9 = *(int *)*puVar16;
          if (iVar9 == 0x2b) {
            iVar9 = 4;
          }
          else if (iVar9 == 0x2c) {
            iVar9 = 0;
          }
          else if (iVar9 == 0x2d) {
            iVar9 = 3;
          }
          else if (iVar9 == 0x2e) {
            iVar9 = 1;
          }
          else if (iVar9 == 0x30) {
            iVar9 = 2;
          }
          else {
            iVar9 = iVar9 + 1000;
          }
          puVar2 = puVar10 + 6;
          if (iVar9 <= iVar11) break;
          uVar8 = puVar12[1];
          *puVar10 = *puVar12;
          puVar10[1] = uVar8;
          uVar5 = *(undefined4 *)((longlong)puVar12 + 0x14);
          uVar6 = *(undefined4 *)(puVar12 + 3);
          uVar7 = *(undefined4 *)((longlong)puVar12 + 0x1c);
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar12 + 2);
          *(undefined4 *)((longlong)puVar10 + 0x14) = uVar5;
          *(undefined4 *)(puVar10 + 3) = uVar6;
          *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar7;
          uVar5 = *(undefined4 *)((longlong)puVar12 + 0x24);
          uVar6 = *(undefined4 *)(puVar12 + 5);
          uVar7 = *(undefined4 *)((longlong)puVar12 + 0x2c);
          *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar12 + 4);
          *(undefined4 *)((longlong)puVar10 + 0x24) = uVar5;
          *(undefined4 *)(puVar10 + 5) = uVar6;
          *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar7;
          if (puVar12 == puVar17) {
            lVar13 = (longlong)puVar3 - (longlong)puVar16;
            puVar12 = puVar16;
            goto LAB_1803b717f;
          }
          puVar12 = puVar12 + 6;
          puVar10 = puVar2;
        }
        uVar8 = puVar16[1];
        *puVar10 = *puVar16;
        puVar10[1] = uVar8;
        uVar5 = *(undefined4 *)((longlong)puVar16 + 0x14);
        uVar6 = *(undefined4 *)(puVar16 + 3);
        uVar7 = *(undefined4 *)((longlong)puVar16 + 0x1c);
        *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar16 + 2);
        *(undefined4 *)((longlong)puVar10 + 0x14) = uVar5;
        *(undefined4 *)(puVar10 + 3) = uVar6;
        *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar7;
        uVar5 = *(undefined4 *)((longlong)puVar16 + 0x24);
        uVar6 = *(undefined4 *)(puVar16 + 5);
        uVar7 = *(undefined4 *)((longlong)puVar16 + 0x2c);
        *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar16 + 4);
        *(undefined4 *)((longlong)puVar10 + 0x24) = uVar5;
        *(undefined4 *)(puVar10 + 5) = uVar6;
        *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar7;
        if (puVar16 == puVar4) break;
        puVar16 = puVar16 + 6;
        puVar10 = puVar2;
      }
      lVar13 = (longlong)puVar15 - (longlong)puVar12;
LAB_1803b717f:
      FUN_180540530(puVar2,puVar12,lVar13);
      puVar10 = (undefined8 *)((longlong)puVar10 + lVar13 + 0x30);
      puVar16 = puVar15;
      lVar13 = lVar18;
    } while (0x20 < lVar18);
    FUN_180540530(puVar10,puVar15,param_2 - (longlong)puVar15);
    lVar13 = 0x40;
    FUN_1803b8440(param_4,param_4 + param_3 * 6,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_1803b8440(param_1,param_2,param_4,lVar13 * 2,param_3,param_5);
        lVar13 = lVar13 * 4;
        FUN_1803b8440(param_4,param_4 + param_3 * 6,param_1,lVar13,param_3,param_5);
      } while (lVar13 <= (param_3 + -1) / 2);
    }
  }
  return;
}



/* ===== 1803b7260 FUN_1803b7260 ===== */

void FUN_1803b7260(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    iVar1 = *(int *)*param_2;
    while( true ) {
      if (iVar1 == 0x2b) {
        iVar9 = 4;
      }
      else if (iVar1 == 0x2c) {
        iVar9 = 0;
      }
      else if (iVar1 == 0x2d) {
        iVar9 = 3;
      }
      else if (iVar1 == 0x2e) {
        iVar9 = 1;
      }
      else if (iVar1 == 0x30) {
        iVar9 = 2;
      }
      else {
        iVar9 = iVar1 + 1000;
      }
      iVar8 = *(int *)*param_1;
      if (iVar8 == 0x2b) {
        iVar8 = 4;
      }
      else if (iVar8 == 0x2c) {
        iVar8 = 0;
      }
      else if (iVar8 == 0x2d) {
        iVar8 = 3;
      }
      else if (iVar8 == 0x2e) {
        iVar8 = 1;
      }
      else if (iVar8 == 0x30) {
        iVar8 = 2;
      }
      else {
        iVar8 = iVar8 + 1000;
      }
      if (iVar9 < iVar8) break;
      param_1 = param_1 + 6;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    puVar12 = param_3 + -6;
    if (param_2 != puVar12) {
      iVar1 = *(int *)param_2[-6];
      puVar11 = puVar12;
      do {
        iVar9 = *(int *)*puVar11;
        if (iVar9 == 0x2b) {
          iVar9 = 4;
        }
        else if (iVar9 == 0x2c) {
          iVar9 = 0;
        }
        else if (iVar9 == 0x2d) {
          iVar9 = 3;
        }
        else if (iVar9 == 0x2e) {
          iVar9 = 1;
        }
        else if (iVar9 == 0x30) {
          iVar9 = 2;
        }
        else {
          iVar9 = iVar9 + 1000;
        }
        if (iVar1 == 0x2b) {
          iVar8 = 4;
        }
        else if (iVar1 == 0x2c) {
          iVar8 = 0;
        }
        else if (iVar1 == 0x2d) {
          iVar8 = 3;
        }
        else if (iVar1 == 0x2e) {
          iVar8 = 1;
        }
        else if (iVar1 == 0x30) {
          iVar8 = 2;
        }
        else {
          iVar8 = iVar1 + 1000;
        }
        if (iVar9 < iVar8) {
          if (param_4 == 1) {
            uVar2 = *param_1;
            uVar3 = param_1[1];
            lVar10 = (longlong)param_3 - (longlong)param_2;
            uVar4 = param_1[2];
            uVar5 = param_1[3];
            uVar6 = param_1[4];
            uVar7 = param_1[5];
            FUN_180540530(param_1,param_2,lVar10);
            *(undefined8 *)(lVar10 + (longlong)param_1) = uVar2;
            ((undefined8 *)(lVar10 + (longlong)param_1))[1] = uVar3;
            puVar12 = (undefined8 *)(lVar10 + 0x10 + (longlong)param_1);
            *puVar12 = uVar4;
            puVar12[1] = uVar5;
            param_1 = (undefined8 *)(lVar10 + 0x20 + (longlong)param_1);
            *param_1 = uVar6;
            param_1[1] = uVar7;
            return;
          }
          FUN_1803b8600(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return;
        }
        param_5 = param_5 + -1;
        puVar12 = puVar11 + -6;
        param_3 = puVar11;
        puVar11 = puVar12;
      } while (param_2 != puVar12);
    }
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    FUN_180540530((longlong)puVar12 + (0x30 - ((longlong)param_2 - (longlong)param_1)),param_1,
                  (longlong)param_2 - (longlong)param_1);
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    param_1[4] = uVar6;
    param_1[5] = uVar7;
  }
  return;
}



/* ===== 1803b74f0 FUN_1803b74f0 ===== */

void FUN_1803b74f0(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar11;
  undefined8 *puVar10;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  puVar6 = param_1;
  for (lVar9 = param_3; 0x20 < lVar9; lVar9 = lVar9 + -0x20) {
    puVar6 = (undefined8 *)FUN_1803b6100(puVar6,puVar6 + 0x20);
  }
  FUN_1803b6100(puVar6,param_2);
  if (0x20 < param_3) {
    puVar6 = param_4;
    lVar9 = param_3;
    puVar13 = param_1;
    do {
      lVar1 = lVar9 + -0x20;
      puVar3 = puVar13 + 0x20;
      lVar12 = lVar9 + -0x40;
      puVar4 = puVar13 + 0x1f;
      if (lVar1 < 0x20) {
        lVar12 = 0;
      }
      lVar11 = 0x200;
      if (lVar1 < 0x20) {
        lVar11 = lVar9 * 8;
      }
      puVar14 = (undefined8 *)(lVar11 + (longlong)puVar13);
      lVar11 = 0x1f8;
      if (lVar1 < 0x20) {
        lVar11 = lVar9 * 8 + -8;
      }
      puVar10 = (undefined8 *)(lVar11 + (longlong)puVar13);
      puVar8 = puVar3;
      while( true ) {
        while( true ) {
          iVar7 = **(int **)*puVar8;
          if (iVar7 == 0x2b) {
            iVar7 = 4;
          }
          else if (iVar7 == 0x2c) {
            iVar7 = 0;
          }
          else if (iVar7 == 0x2d) {
            iVar7 = 3;
          }
          else if (iVar7 == 0x2e) {
            iVar7 = 1;
          }
          else if (iVar7 == 0x30) {
            iVar7 = 2;
          }
          else {
            iVar7 = iVar7 + 1000;
          }
          iVar5 = **(int **)*puVar13;
          if (iVar5 == 0x2b) {
            iVar5 = 4;
          }
          else if (iVar5 == 0x2c) {
            iVar5 = 0;
          }
          else if (iVar5 == 0x2d) {
            iVar5 = 3;
          }
          else if (iVar5 == 0x2e) {
            iVar5 = 1;
          }
          else if (iVar5 == 0x30) {
            iVar5 = 2;
          }
          else {
            iVar5 = iVar5 + 1000;
          }
          puVar2 = puVar6 + 1;
          if (iVar5 <= iVar7) break;
          *puVar6 = (undefined8 *)*puVar8;
          if (puVar8 == puVar10) {
            lVar9 = (longlong)puVar3 - (longlong)puVar13;
            puVar8 = puVar13;
            goto LAB_1803b76a6;
          }
          puVar8 = puVar8 + 1;
          puVar6 = puVar2;
        }
        *puVar6 = (undefined8 *)*puVar13;
        if (puVar13 == puVar4) break;
        puVar13 = puVar13 + 1;
        puVar6 = puVar2;
      }
      lVar9 = (longlong)puVar14 - (longlong)puVar8;
LAB_1803b76a6:
      FUN_180540530(puVar2,puVar8,lVar9);
      puVar6 = (undefined8 *)((longlong)puVar6 + lVar9 + 8);
      lVar9 = lVar12;
      puVar13 = puVar14;
    } while (0x20 < lVar12);
    FUN_180540530(puVar6,puVar14,param_2 - (longlong)puVar14);
    lVar9 = 0x40;
    FUN_1803b89e0(param_4,param_4 + param_3,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_1803b89e0(param_1,param_2,param_4,lVar9 * 2,param_3,param_5);
        lVar9 = lVar9 * 4;
        FUN_1803b89e0(param_4,param_4 + param_3,param_1,lVar9,param_3,param_5);
      } while (lVar9 <= (param_3 + -1) / 2);
    }
  }
  return;
}



/* ===== 1803b7790 FUN_1803b7790 ===== */

void FUN_1803b7790(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_2 == param_3) {
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  puVar2 = (undefined8 *)*param_2;
  iVar1 = *(int *)*puVar2;
  while( true ) {
    if (iVar1 == 0x2b) {
      iVar5 = 4;
    }
    else if (iVar1 == 0x2c) {
      iVar5 = 0;
    }
    else if (iVar1 == 0x2d) {
      iVar5 = 3;
    }
    else if (iVar1 == 0x2e) {
      iVar5 = 1;
    }
    else if (iVar1 == 0x30) {
      iVar5 = 2;
    }
    else {
      iVar5 = iVar1 + 1000;
    }
    puVar3 = (undefined8 *)*param_1;
    iVar4 = *(int *)*puVar3;
    if (iVar4 == 0x2b) {
      iVar4 = 4;
    }
    else if (iVar4 == 0x2c) {
      iVar4 = 0;
    }
    else if (iVar4 == 0x2d) {
      iVar4 = 3;
    }
    else if (iVar4 == 0x2e) {
      iVar4 = 1;
    }
    else if (iVar4 == 0x30) {
      iVar4 = 2;
    }
    else {
      iVar4 = iVar4 + 1000;
    }
    if (iVar5 < iVar4) break;
    param_1 = param_1 + 1;
    param_4 = param_4 + -1;
    if (param_1 == param_2) {
      return;
    }
  }
  puVar7 = param_3 + -1;
  if (param_2 != puVar7) {
    iVar1 = **(int **)param_2[-1];
    puVar6 = puVar7;
    do {
      iVar5 = **(int **)*puVar6;
      if (iVar5 == 0x2b) {
        iVar5 = 4;
      }
      else if (iVar5 == 0x2c) {
        iVar5 = 0;
      }
      else if (iVar5 == 0x2d) {
        iVar5 = 3;
      }
      else if (iVar5 == 0x2e) {
        iVar5 = 1;
      }
      else if (iVar5 == 0x30) {
        iVar5 = 2;
      }
      else {
        iVar5 = iVar5 + 1000;
      }
      if (iVar1 == 0x2b) {
        iVar4 = 4;
      }
      else if (iVar1 == 0x2c) {
        iVar4 = 0;
      }
      else if (iVar1 == 0x2d) {
        iVar4 = 3;
      }
      else if (iVar1 == 0x2e) {
        iVar4 = 1;
      }
      else if (iVar1 == 0x30) {
        iVar4 = 2;
      }
      else {
        iVar4 = iVar1 + 1000;
      }
      if (iVar5 < iVar4) {
        if (param_4 == 1) {
          FUN_180540530(param_1,param_2,(longlong)param_3 - (longlong)param_2);
          *(undefined8 **)(((longlong)param_3 - (longlong)param_2) + (longlong)param_1) = puVar3;
          return;
        }
        FUN_1803b8b70(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return;
      }
      param_5 = param_5 + -1;
      puVar7 = puVar6 + -1;
      param_3 = puVar6;
      puVar6 = puVar7;
    } while (param_2 != puVar7);
  }
  FUN_180540530((longlong)puVar7 + (8 - ((longlong)param_2 - (longlong)param_1)),param_1,
                (longlong)param_2 - (longlong)param_1);
  *param_1 = puVar2;
  return;
}



/* ===== 1803b79d0 FUN_1803b79d0 ===== */

void FUN_1803b79d0(undefined4 *param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  longlong local_58;
  
  puVar6 = param_1;
  for (lVar9 = param_3; 0x20 < lVar9; lVar9 = lVar9 + -0x20) {
    puVar6 = (undefined4 *)FUN_1803b63e0(puVar6,puVar6 + 0x20,param_5);
  }
  FUN_1803b63e0(puVar6,param_2,param_5);
  if (0x20 < param_3) {
    puVar6 = param_4;
    puVar10 = param_1;
    lVar9 = param_3;
    do {
      local_70 = param_5;
      lVar1 = lVar9 + -0x20;
      local_58 = lVar9 + -0x40;
      puVar2 = puVar10 + 0x20;
      if (lVar1 < 0x20) {
        local_58 = 0;
      }
      lVar8 = 0x100;
      if (lVar1 < 0x20) {
        lVar8 = lVar9 * 4;
      }
      puVar7 = (undefined4 *)(lVar8 + (longlong)puVar10);
      lVar8 = 0xfc;
      if (lVar1 < 0x20) {
        lVar8 = lVar9 * 4 + -4;
      }
      local_68 = (undefined4 *)(lVar8 + (longlong)puVar10);
      local_60 = puVar10 + 0x1f;
      puVar11 = puVar2;
      while( true ) {
        while( true ) {
          uVar3 = *puVar10;
          uVar4 = *puVar11;
          cVar5 = FUN_1803b3af0(&local_70,uVar4,uVar3);
          if (cVar5 == '\0') break;
          *puVar6 = uVar4;
          if (puVar11 == local_68) {
            lVar9 = (longlong)puVar2 - (longlong)puVar10;
            FUN_180540530(puVar6 + 1,puVar10,lVar9);
            goto LAB_1803b7b43;
          }
          puVar11 = puVar11 + 1;
          puVar6 = puVar6 + 1;
        }
        *puVar6 = uVar3;
        if (puVar10 == local_60) break;
        puVar10 = puVar10 + 1;
        puVar6 = puVar6 + 1;
      }
      lVar9 = (longlong)puVar7 - (longlong)puVar11;
      FUN_180540530(puVar6 + 1,puVar11,lVar9);
LAB_1803b7b43:
      puVar6 = (undefined4 *)((longlong)puVar6 + lVar9 + 4);
      puVar10 = puVar7;
      lVar9 = local_58;
    } while (0x20 < local_58);
    FUN_180540530(puVar6,puVar7,param_2 - (longlong)puVar7);
    lVar9 = 0x40;
    FUN_1803b8e70(param_4,param_4 + param_3,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_1803b8e70(param_1,param_2,param_4,lVar9 * 2,param_3,param_5);
        lVar9 = lVar9 * 4;
        FUN_1803b8e70(param_4,param_4 + param_3,param_1,lVar9,param_3,param_5);
      } while (lVar9 <= (param_3 + -1) / 2);
    }
  }
  return;
}



/* ===== 1803b7c30 FUN_1803b7c30 ===== */

void FUN_1803b7c30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 == param_3) {
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  uVar1 = *param_2;
  do {
    uVar2 = *param_1;
    cVar3 = FUN_1803b3af0(&param_8,uVar1,uVar2);
    if (cVar3 != '\0') {
      puVar5 = param_3 + -1;
      if (param_2 != puVar5) {
        do {
          puVar4 = puVar5;
          cVar3 = FUN_1803b3af0(&param_8,*puVar4,param_2[-1]);
          if (cVar3 != '\0') {
            if (param_4 == 1) {
              FUN_180540530(param_1,param_2,(longlong)param_3 - (longlong)param_2);
              *(undefined4 *)(((longlong)param_3 - (longlong)param_2) + (longlong)param_1) = uVar2;
              return;
            }
            FUN_1803b8fd0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
            return;
          }
          param_5 = param_5 + -1;
          puVar5 = puVar4 + -1;
          param_3 = puVar4;
        } while (param_2 != puVar5);
      }
      FUN_180540530((longlong)puVar5 + (4 - ((longlong)param_2 - (longlong)param_1)),param_1,
                    (longlong)param_2 - (longlong)param_1);
      *param_1 = uVar1;
      return;
    }
    param_1 = param_1 + 1;
    param_4 = param_4 + -1;
  } while (param_1 != param_2);
  return;
}



/* ===== 1803b7d80 FUN_1803b7d80 ===== */

undefined8 * FUN_1803b7d80(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar2 = *param_1;
  uVar14 = 0x199999999999999;
  lVar8 = (param_1[1] - lVar2 >> 5) * -0x3333333333333333;
  if (lVar8 == 0x199999999999999) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar8 + 1;
  uVar10 = (param_1[2] - lVar2 >> 5) * -0x3333333333333333;
  if (uVar10 <= 0x199999999999999 - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar14 = uVar1;
    if (uVar1 <= uVar10) {
      uVar14 = uVar10;
    }
    if (0x199999999999999 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar14 * 0xa0);
  uVar7 = param_3[1];
  puVar15 = puVar9 + ((param_2 - lVar2) / 0xa0) * 0x14;
  *puVar15 = *param_3;
  puVar15[1] = uVar7;
  uVar7 = param_3[3];
  puVar15[2] = param_3[2];
  puVar15[3] = uVar7;
  uVar7 = param_3[5];
  puVar15[4] = param_3[4];
  puVar15[5] = uVar7;
  uVar7 = param_3[7];
  puVar15[6] = param_3[6];
  puVar15[7] = uVar7;
  uVar7 = param_3[9];
  puVar15[8] = param_3[8];
  puVar15[9] = uVar7;
  uVar7 = param_3[0xb];
  puVar15[10] = param_3[10];
  puVar15[0xb] = uVar7;
  uVar7 = param_3[0xd];
  puVar15[0xc] = param_3[0xc];
  puVar15[0xd] = uVar7;
  uVar7 = param_3[0xf];
  puVar15[0xe] = param_3[0xe];
  puVar15[0xf] = uVar7;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x84);
  uVar5 = *(undefined4 *)(param_3 + 0x11);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x8c);
  *(undefined4 *)(puVar15 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((longlong)puVar15 + 0x84) = uVar4;
  *(undefined4 *)(puVar15 + 0x11) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0x8c) = uVar6;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x94);
  uVar5 = *(undefined4 *)(param_3 + 0x13);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x9c);
  *(undefined4 *)(puVar15 + 0x12) = *(undefined4 *)(param_3 + 0x12);
  *(undefined4 *)((longlong)puVar15 + 0x94) = uVar4;
  *(undefined4 *)(puVar15 + 0x13) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0x9c) = uVar6;
  lVar2 = *param_1;
  if (param_2 == param_1[1]) {
    lVar8 = param_1[1] - lVar2;
    puVar11 = puVar9;
    param_2 = lVar2;
  }
  else {
    FUN_180540530(puVar9,lVar2,param_2 - lVar2);
    puVar11 = puVar15 + 0x14;
    lVar8 = param_1[1] - param_2;
  }
  puVar12 = auStack_48;
  puVar13 = auStack_48;
  FUN_180540530(puVar11,param_2,lVar8);
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_1803b7f45;
  lVar8 = lVar2;
  if ((ulonglong)((param_1[2] - lVar2 >> 5) << 5) < 0x1000) {
LAB_1803b7f3a:
    puVar13 = puVar12;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar8) - 8U) {
      lVar8 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar12 = auStack_40;
      goto LAB_1803b7f3a;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x1803b7f45;
  thunk_FUN_1803d64e0(lVar8);
LAB_1803b7f45:
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + uVar1 * 0x14);
  param_1[2] = (longlong)(puVar9 + uVar14 * 0x14);
  return puVar15;
}



/* ===== 1803b7f90 FUN_1803b7f90 ===== */

void FUN_1803b7f90(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18000f890(*(longlong *)(param_1 + 8) + 0x68);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x98);
  return;
}



/* ===== 1803b7fd0 FUN_1803b7fd0 ===== */

void FUN_1803b7fd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_1803ba380(lVar1 + 0x30);
    FUN_1803ba380(lVar1 + 0x18);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x50);
  }
  return;
}



/* ===== 1803b8020 FUN_1803b8020 ===== */

void FUN_1803b8020(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (param_5 <= param_4) {
LAB_1803b8149:
    FUN_180540530(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  plVar9 = param_1;
LAB_1803b8070:
  plVar2 = plVar9 + param_4 * 6;
  lVar7 = param_5 - param_4;
  lVar5 = param_4;
  if (lVar7 < param_4) {
    lVar5 = lVar7;
  }
  lVar8 = param_4 * 2;
  if (lVar7 < param_4) {
    lVar8 = param_5;
  }
  param_1 = plVar9 + lVar8 * 6;
  plVar6 = plVar2;
  do {
    if (*(float *)(*plVar9 + 0x28) < *(float *)(*plVar6 + 0x28) ||
        *(float *)(*plVar9 + 0x28) == *(float *)(*plVar6 + 0x28)) {
      lVar8 = plVar9[1];
      *param_3 = *plVar9;
      param_3[1] = lVar8;
      uVar3 = *(undefined4 *)((longlong)plVar9 + 0x14);
      lVar8 = plVar9[3];
      uVar4 = *(undefined4 *)((longlong)plVar9 + 0x1c);
      *(int *)(param_3 + 2) = (int)plVar9[2];
      *(undefined4 *)((longlong)param_3 + 0x14) = uVar3;
      *(int *)(param_3 + 3) = (int)lVar8;
      *(undefined4 *)((longlong)param_3 + 0x1c) = uVar4;
      plVar1 = plVar9 + 4;
      uVar3 = *(undefined4 *)((longlong)plVar9 + 0x24);
      lVar8 = plVar9[5];
      uVar4 = *(undefined4 *)((longlong)plVar9 + 0x2c);
      plVar9 = plVar9 + 6;
      *(int *)(param_3 + 4) = (int)*plVar1;
      *(undefined4 *)((longlong)param_3 + 0x24) = uVar3;
      *(int *)(param_3 + 5) = (int)lVar8;
      *(undefined4 *)((longlong)param_3 + 0x2c) = uVar4;
      if (plVar9 == plVar2) {
        lVar8 = (longlong)param_1 - (longlong)plVar6;
        goto LAB_1803b8116;
      }
    }
    else {
      lVar8 = plVar6[1];
      *param_3 = *plVar6;
      param_3[1] = lVar8;
      uVar3 = *(undefined4 *)((longlong)plVar6 + 0x14);
      lVar8 = plVar6[3];
      uVar4 = *(undefined4 *)((longlong)plVar6 + 0x1c);
      *(int *)(param_3 + 2) = (int)plVar6[2];
      *(undefined4 *)((longlong)param_3 + 0x14) = uVar3;
      *(int *)(param_3 + 3) = (int)lVar8;
      *(undefined4 *)((longlong)param_3 + 0x1c) = uVar4;
      plVar1 = plVar6 + 4;
      uVar3 = *(undefined4 *)((longlong)plVar6 + 0x24);
      lVar8 = plVar6[5];
      uVar4 = *(undefined4 *)((longlong)plVar6 + 0x2c);
      plVar6 = plVar6 + 6;
      *(int *)(param_3 + 4) = (int)*plVar1;
      *(undefined4 *)((longlong)param_3 + 0x24) = uVar3;
      *(int *)(param_3 + 5) = (int)lVar8;
      *(undefined4 *)((longlong)param_3 + 0x2c) = uVar4;
      if (plVar6 == param_1) break;
    }
    param_3 = param_3 + 6;
  } while( true );
  lVar8 = (longlong)plVar2 - (longlong)plVar9;
  plVar6 = plVar9;
LAB_1803b8116:
  FUN_180540530(param_3 + 6,plVar6,lVar8);
  param_3 = (longlong *)((longlong)param_3 + lVar8 + 0x30);
  param_5 = lVar7 - lVar5;
  plVar9 = param_1;
  if (lVar7 - lVar5 <= param_4) goto LAB_1803b8149;
  goto LAB_1803b8070;
}



/* ===== 1803b8170 FUN_1803b8170 ===== */

void FUN_1803b8170(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6,longlong param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    lVar13 = (longlong)param_2 - (longlong)param_1;
    FUN_180540530(param_6,param_1,lVar13);
    lVar14 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar14;
    plVar15 = param_2 + 6;
    lVar14 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar14;
    lVar14 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar14;
    plVar12 = param_1 + 6;
    plVar16 = param_6;
    do {
      plVar1 = plVar12 + 6;
      if (*(float *)(*plVar16 + 0x28) < *(float *)(*plVar15 + 0x28) ||
          *(float *)(*plVar16 + 0x28) == *(float *)(*plVar15 + 0x28)) {
        lVar14 = plVar16[1];
        *plVar12 = *plVar16;
        plVar12[1] = lVar14;
        uVar4 = *(undefined4 *)((longlong)plVar16 + 0x14);
        lVar14 = plVar16[3];
        uVar5 = *(undefined4 *)((longlong)plVar16 + 0x1c);
        *(int *)(plVar12 + 2) = (int)plVar16[2];
        *(undefined4 *)((longlong)plVar12 + 0x14) = uVar4;
        *(int *)(plVar12 + 3) = (int)lVar14;
        *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar5;
        uVar4 = *(undefined4 *)((longlong)plVar16 + 0x24);
        lVar14 = plVar16[5];
        uVar5 = *(undefined4 *)((longlong)plVar16 + 0x2c);
        *(int *)(plVar12 + 4) = (int)plVar16[4];
        *(undefined4 *)((longlong)plVar12 + 0x24) = uVar4;
        *(int *)(plVar12 + 5) = (int)lVar14;
        *(undefined4 *)((longlong)plVar12 + 0x2c) = uVar5;
        if (plVar16 == (longlong *)((longlong)param_6 + lVar13 + -0x60)) {
          lVar14 = (longlong)param_3 - (longlong)plVar15;
          uVar6 = *(undefined8 *)((longlong)param_6 + lVar13 + -0x30);
          uVar7 = *(undefined8 *)((longlong)param_6 + lVar13 + -0x28);
          uVar8 = *(undefined8 *)((longlong)param_6 + lVar13 + -0x20);
          uVar9 = *(undefined8 *)((longlong)param_6 + lVar13 + -0x18);
          uVar10 = *(undefined8 *)((longlong)param_6 + lVar13 + -0x10);
          uVar11 = *(undefined8 *)((longlong)param_6 + lVar13 + -8);
          FUN_180540530(plVar1,plVar15,lVar14);
          *(undefined8 *)(lVar14 + (longlong)plVar1) = uVar6;
          ((undefined8 *)(lVar14 + (longlong)plVar1))[1] = uVar7;
          puVar3 = (undefined8 *)(lVar14 + 0x10 + (longlong)plVar1);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          puVar3 = (undefined8 *)(lVar14 + 0x20 + (longlong)plVar1);
          *puVar3 = uVar10;
          puVar3[1] = uVar11;
          return;
        }
        plVar16 = plVar16 + 6;
      }
      else {
        lVar14 = plVar15[1];
        *plVar12 = *plVar15;
        plVar12[1] = lVar14;
        uVar4 = *(undefined4 *)((longlong)plVar15 + 0x14);
        lVar14 = plVar15[3];
        uVar5 = *(undefined4 *)((longlong)plVar15 + 0x1c);
        *(int *)(plVar12 + 2) = (int)plVar15[2];
        *(undefined4 *)((longlong)plVar12 + 0x14) = uVar4;
        *(int *)(plVar12 + 3) = (int)lVar14;
        *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar5;
        plVar2 = plVar15 + 4;
        uVar4 = *(undefined4 *)((longlong)plVar15 + 0x24);
        lVar14 = plVar15[5];
        uVar5 = *(undefined4 *)((longlong)plVar15 + 0x2c);
        plVar15 = plVar15 + 6;
        *(int *)(plVar12 + 4) = (int)*plVar2;
        *(undefined4 *)((longlong)plVar12 + 0x24) = uVar4;
        *(int *)(plVar12 + 5) = (int)lVar14;
        *(undefined4 *)((longlong)plVar12 + 0x2c) = uVar5;
        if (plVar15 == param_3) {
          FUN_180540530(plVar1,plVar16,(longlong)param_6 + (lVar13 - (longlong)plVar16));
          return;
        }
      }
      plVar12 = plVar1;
    } while( true );
  }
  if (param_7 < param_5) {
    FUN_1803b9780(param_1,param_2);
    return;
  }
  FUN_180540530(param_6,param_2,(longlong)param_3 - (longlong)param_2);
  lVar14 = param_2[-5];
  plVar15 = param_3 + -6;
  *plVar15 = param_2[-6];
  param_3[-5] = lVar14;
  plVar16 = (longlong *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -0x30);
  plVar12 = param_2 + -0xc;
  lVar14 = param_2[-3];
  param_3[-4] = param_2[-4];
  param_3[-3] = lVar14;
  lVar14 = param_2[-1];
  param_3[-2] = param_2[-2];
  param_3[-1] = lVar14;
  while( true ) {
    while (*(float *)(*plVar12 + 0x28) < *(float *)(*plVar16 + 0x28) ||
           *(float *)(*plVar12 + 0x28) == *(float *)(*plVar16 + 0x28)) {
      lVar14 = plVar16[1];
      plVar15[-6] = *plVar16;
      plVar15[-5] = lVar14;
      lVar14 = plVar16[3];
      plVar15[-4] = plVar16[2];
      plVar15[-3] = lVar14;
      plVar1 = plVar16 + 4;
      lVar14 = plVar16[5];
      plVar16 = plVar16 + -6;
      plVar15[-2] = *plVar1;
      plVar15[-1] = lVar14;
      if (param_6 == plVar16) {
        lVar14 = plVar12[1];
        plVar15[-0xc] = *plVar12;
        plVar15[-0xb] = lVar14;
        uVar4 = *(undefined4 *)((longlong)plVar12 + 0x14);
        lVar14 = plVar12[3];
        uVar5 = *(undefined4 *)((longlong)plVar12 + 0x1c);
        *(int *)(plVar15 + -10) = (int)plVar12[2];
        *(undefined4 *)((longlong)plVar15 + -0x4c) = uVar4;
        *(int *)(plVar15 + -9) = (int)lVar14;
        *(undefined4 *)((longlong)plVar15 + -0x44) = uVar5;
        uVar4 = *(undefined4 *)((longlong)plVar12 + 0x24);
        lVar14 = plVar12[5];
        uVar5 = *(undefined4 *)((longlong)plVar12 + 0x2c);
        *(int *)(plVar15 + -8) = (int)plVar12[4];
        *(undefined4 *)((longlong)plVar15 + -0x3c) = uVar4;
        *(int *)(plVar15 + -7) = (int)lVar14;
        *(undefined4 *)((longlong)plVar15 + -0x34) = uVar5;
        FUN_180540530((longlong)(plVar15 + -0xc) - ((longlong)plVar12 - (longlong)param_1),param_1);
        lVar14 = param_6[1];
        *param_1 = *param_6;
        param_1[1] = lVar14;
        lVar14 = param_6[3];
        param_1[2] = param_6[2];
        param_1[3] = lVar14;
        lVar14 = param_6[5];
        param_1[4] = param_6[4];
        param_1[5] = lVar14;
        return;
      }
      plVar15 = plVar15 + -6;
    }
    lVar14 = plVar12[1];
    plVar15[-6] = *plVar12;
    plVar15[-5] = lVar14;
    lVar14 = plVar12[3];
    plVar15[-4] = plVar12[2];
    plVar15[-3] = lVar14;
    lVar14 = plVar12[5];
    plVar15[-2] = plVar12[4];
    plVar15[-1] = lVar14;
    if (param_1 == plVar12) break;
    plVar12 = plVar12 + -6;
    plVar15 = plVar15 + -6;
  }
  lVar14 = plVar16[1];
  plVar15[-0xc] = *plVar16;
  plVar15[-0xb] = lVar14;
  uVar4 = *(undefined4 *)((longlong)plVar16 + 0x14);
  lVar14 = plVar16[3];
  uVar5 = *(undefined4 *)((longlong)plVar16 + 0x1c);
  *(int *)(plVar15 + -10) = (int)plVar16[2];
  *(undefined4 *)((longlong)plVar15 + -0x4c) = uVar4;
  *(int *)(plVar15 + -9) = (int)lVar14;
  *(undefined4 *)((longlong)plVar15 + -0x44) = uVar5;
  uVar4 = *(undefined4 *)((longlong)plVar16 + 0x24);
  lVar14 = plVar16[5];
  uVar5 = *(undefined4 *)((longlong)plVar16 + 0x2c);
  *(int *)(plVar15 + -8) = (int)plVar16[4];
  *(undefined4 *)((longlong)plVar15 + -0x3c) = uVar4;
  *(int *)(plVar15 + -7) = (int)lVar14;
  *(undefined4 *)((longlong)plVar15 + -0x34) = uVar5;
  FUN_180540530((longlong)(plVar15 + -0xc) - ((longlong)plVar16 - (longlong)param_6),param_6,
                (longlong)plVar16 - (longlong)param_6);
  return;
}



