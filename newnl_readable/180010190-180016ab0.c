/* ===== 180010190 FUN_180010190 ===== */

undefined8
FUN_180010190(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9)

{
  (*DAT_180961f50)(param_2,param_3,0x1c300b,3,0xf);
  *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x4000000000;
  *(byte *)(param_2 + 0x39) = *(byte *)(param_2 + 0x39) | 2;
  (*DAT_180961f60)(param_1,param_4,param_5,param_2,4,1);
  (*DAT_180961f68)(param_1,param_6,param_7,param_8,4,param_9,0);
  return 1;
}



/* ===== 180010250 FUN_180010250 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180010250(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined1 auStack_2f8 [32];
  float *local_2d8;
  float local_2d0;
  undefined4 local_2c8;
  float *local_2c0;
  undefined8 *local_2b8;
  undefined4 local_2b0;
  uint local_2a8;
  uint local_2a4;
  longlong local_2a0;
  longlong local_298;
  undefined8 local_290;
  float local_288;
  undefined8 local_280;
  float local_278;
  undefined8 local_270;
  float local_268;
  undefined8 local_260;
  float local_258;
  undefined4 local_250;
  undefined4 local_24c;
  int local_248 [2];
  float local_240;
  float local_23c;
  float local_238;
  float local_230;
  float local_22c;
  float local_228;
  float local_220;
  float local_21c;
  float local_218;
  undefined1 local_210 [16];
  undefined1 local_200 [24];
  float local_1e8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
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
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_2f8;
  local_298 = param_1;
  plVar15 = (longlong *)FUN_1803a0940(&local_2a0,*(undefined4 *)(param_1 + 0x34));
  lVar18 = *plVar15;
  local_2a0 = lVar18;
  plVar15 = (longlong *)FUN_1803a0940(local_248,*(undefined4 *)(param_1 + 0x30));
  if ((((lVar18 != 0) && (*plVar15 != 0)) && (DAT_180ca1c44 != 0)) &&
     (lVar16 = FUN_18000f3a0(*plVar15 + (ulonglong)DAT_180ca1c44 + 8),
     lVar16 - 0x10000U < 0x7ffffffeffff)) {
    if (lVar18 == param_2) {
      cVar10 = DAT_18095d43c;
    }
    else {
      cVar8 = FUN_180469a20(lVar18,param_2);
      cVar10 = DAT_18095d40c;
      if (cVar8 != '\0') {
        cVar10 = DAT_18095d424;
      }
    }
    if (((cVar10 != '\0') && (DAT_180961f50 != 0)) && ((DAT_180961f60 != 0 && (DAT_180961f68 != 0)))
       ) {
      iVar11 = FUN_180011200((ulonglong)DAT_180ca1c4c + lVar16);
      if (0x10 < iVar11) {
        iVar11 = 0x10;
      }
      if (0 < iVar11) {
        local_2b0 = 0x10;
        local_2b8 = &local_1a8;
        local_2c0 = local_1e8;
        local_1e8[0] = 0.0;
        local_1e8[1] = 0.0;
        local_1e8[2] = 0.0;
        local_1e8[3] = 0.0;
        local_1e8[4] = 0.0;
        local_1e8[5] = 0.0;
        local_1e8[6] = 0.0;
        local_1e8[7] = 0.0;
        local_1e8[8] = 0.0;
        local_1e8[9] = 0.0;
        local_1e8[10] = 0.0;
        local_1e8[0xb] = 0.0;
        local_1e8[0xc] = 0.0;
        local_1e8[0xd] = 0.0;
        local_1e8[0xe] = 0.0;
        local_1e8[0xf] = 0.0;
        local_2c8 = *(undefined4 *)(param_1 + 0x24);
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_2d0 = *(float *)(param_1 + 0x28);
        local_2d8 = (float *)CONCAT44(local_2d8._4_4_,*(undefined4 *)(param_1 + 0x20));
        iVar11 = FUN_1802ad610(*(undefined4 *)(param_1 + 0x2c),iVar11,
                               *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
        local_248[0] = iVar11;
        fVar21 = (float)FUN_18000f3d0((ulonglong)DAT_180ca1c50 + lVar16);
        iVar12 = FUN_180011200((ulonglong)DAT_180ca1c5c + lVar16);
        uVar22 = FUN_18000f3d0((ulonglong)DAT_180ca1c58 + lVar16);
        uVar24 = 0;
        if (DAT_180ca1c54 != 0) {
          uVar24 = FUN_18000f3d0(lVar16 + (ulonglong)DAT_180ca1c54);
        }
        if (DAT_180ca1c48 == 0) {
          uVar20 = 0;
        }
        else {
          bVar9 = FUN_180011220(lVar18 + (ulonglong)DAT_180ca1c48);
          uVar20 = (uint)bVar9;
        }
        uVar19 = 0;
        bVar7 = false;
        local_260 = 0;
        local_258 = 0.0;
        local_2a4 = 0;
        if (0 < iVar11) {
          local_2a8 = uVar20;
          do {
            fVar1 = local_1e8[uVar19];
            fVar2 = local_1e8[uVar19 + 0x10];
            local_280 = 0;
            local_278 = 0.0;
            local_290 = 0;
            local_288 = 0.0;
            local_270 = 0;
            local_268 = 0.0;
            FUN_1803a19a0(param_1 + 0xc,&local_280,&local_290,&local_270);
            local_240 = fVar2 * (float)local_270 + fVar1 * (float)local_290 + (float)local_280;
            local_23c = fVar2 * local_270._4_4_ + fVar1 * local_290._4_4_ + local_280._4_4_;
            local_238 = fVar2 * local_268 + fVar1 * local_288 + local_278;
            FUN_1803a1b30(&local_230,&local_240);
            local_220 = fVar21 * local_230;
            local_21c = fVar21 * local_22c;
            local_218 = fVar21 * local_228;
            FUN_180540170(&DAT_180ca1c70,0,0x1d60);
            local_2b8 = (undefined8 *)CONCAT44(local_2b8._4_4_,uVar20);
            local_2c0 = (float *)CONCAT44(local_2c0._4_4_,uVar24);
            local_250 = 0x42500000;
            _DAT_180ca1c74 = 0x42500000;
            _DAT_180ca1c78 = &DAT_180ca1c88;
            _DAT_180ca3898 = &DAT_180ca38a8;
            local_24c = 0x3f800000;
            _DAT_180ca3980 = 0x3f800000;
            local_2d8 = &local_220;
            _DAT_180ca1c80 = 0x80;
            _DAT_180ca1c84 = 0x80000000;
            _DAT_180ca38a0 = 8;
            _DAT_180ca38a4 = 0x80000000;
            local_168 = 0;
            uStack_160 = 0;
            local_158 = 0;
            uStack_150 = 0;
            local_148 = 0;
            uStack_140 = 0;
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
            local_2d0 = (float)iVar12;
            local_2c8 = uVar22;
            cVar10 = FUN_180010190(&DAT_180ca1c70,&local_168,lVar18,param_1);
            if (cVar10 != '\0') {
              pfVar17 = (float *)FUN_1800111b0(local_210,&DAT_180ca3968);
              fVar1 = *pfVar17;
              fVar2 = pfVar17[1];
              fVar3 = pfVar17[2];
              pfVar17 = (float *)FUN_1800111b0(local_200,&DAT_180ca3974);
              fVar4 = *pfVar17;
              fVar5 = pfVar17[1];
              fVar6 = pfVar17[2];
              iVar13 = FUN_180011200(&DAT_180ca3890);
              if (0x40 < iVar13) {
                iVar13 = 0x40;
              }
              lVar18 = FUN_18000f3a0(&DAT_180ca3898);
              lVar16 = FUN_18000f3a0(&DAT_180ca1c78);
              iVar14 = FUN_180011200(&DAT_180ca1c70);
              if (((0 < iVar13) && (lVar18 - 0x10000U < 0x7ffffffeffff)) &&
                 (lVar16 - 0x10000U < 0x7ffffffeffff)) {
                iVar11 = 0;
                do {
                  uVar19 = FUN_180011220(lVar18 + 0x14 + (longlong)iVar11 * 0x18);
                  if (((uVar19 & 1) == 0) &&
                     (((uVar19 = FUN_180011440(lVar18 + 0x12 + (longlong)iVar11 * 0x18), iVar14 < 1
                       || ((int)((uint)uVar19 & 0xffff) < iVar14)) &&
                      (fVar23 = (float)FUN_18000f3d0((uVar19 & 0xffff) * 0x38 + 0xc + lVar16),
                      ((uint)fVar23 & 0x7f800000) != 0x7f800000)))) {
                    local_258 = fVar6 * fVar23 + fVar3;
                    local_260 = CONCAT44(fVar5 * fVar23 + fVar2,fVar4 * fVar23 + fVar1);
                    bVar7 = true;
                  }
                  iVar11 = iVar11 + 1;
                } while (iVar11 < iVar13);
                uVar19 = (ulonglong)local_2a4;
                iVar11 = local_248[0];
              }
              param_1 = local_298;
              lVar18 = local_2a0;
              uVar20 = local_2a8;
            }
            if (bVar7) {
              FUN_18000e850(lVar18,param_1,&local_260);
            }
            local_2a4 = (int)uVar19 + 1;
            uVar19 = (ulonglong)local_2a4;
          } while ((int)local_2a4 < iVar11);
        }
      }
    }
  }
  return;
}



/* ===== 180010910 FUN_180010910 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180010910(undefined8 param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong local_res10 [3];
  float local_48;
  float local_44;
  float local_40;
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res10);
  }
  else {
    local_res10[0] = DAT_181108a00;
  }
  if ((local_res10[0] != 0) && (lVar1 = FUN_180273f90(param_1,"userid"), lVar1 == local_res10[0])) {
    fVar2 = (float)FUN_180273cc0(param_1,&DAT_1806d23e4);
    local_48 = fVar2;
    fVar3 = (float)FUN_180273cc0(param_1,&DAT_1806d23e8);
    local_44 = fVar3;
    fVar4 = (float)FUN_180273cc0(param_1,&DAT_1806d23ec);
    local_40 = fVar4;
    if ((fVar2 != 0.0) || ((fVar3 != 0.0 || (fVar4 != 0.0)))) {
      FUN_18022d110(&local_48,1);
    }
    uVar5 = (uint)_DAT_1808ade90;
    if ((((DAT_1808ac000 <= (float)((uint)fVar2 & uVar5)) ||
         (DAT_1808ac000 <= (float)((uint)fVar3 & uVar5))) ||
        (DAT_1808ac000 <= (float)((uint)fVar4 & uVar5))) &&
       ((ulonglong)((DAT_180ca1c28 - DAT_180ca1c20 >> 2) * -0x5555555555555555) < 0x40)) {
      FUN_180011250(&DAT_180ca1c20,&local_48);
    }
  }
  return;
}



/* ===== 180010a70 FUN_180010a70 ===== */

void FUN_180010a70(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  DWORD DVar7;
  DWORD DVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined8 *puVar12;
  float *pfVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  float fVar18;
  float local_98;
  float local_94;
  float local_90;
  int local_88;
  undefined8 local_84;
  undefined4 local_7c;
  
  DVar7 = DAT_180ca39d0;
  if (((param_1 != 0) && (DVar8 = GetCurrentThreadId(), iVar9 = DAT_180ca1c38, DVar7 == DVar8)) &&
     (DAT_180cfee60 < 1)) {
    if ((DAT_18095d43c != '\0') && (DAT_180ca0cdd == '\0')) {
      DAT_180ca0cdd = '\x01';
      for (piVar11 = DAT_180ca39e0; piVar11 != DAT_180ca39e8; piVar11 = piVar11 + 4) {
        if (*piVar11 == DAT_180ca1c38) goto LAB_180010b4f;
      }
      if (0x7ff < (ulonglong)((longlong)DAT_180ca39e8 - (longlong)DAT_180ca39e0)) {
        FUN_180540530(DAT_180ca39e0,DAT_180ca39e0 + 4,
                      (longlong)DAT_180ca39e8 - (longlong)(DAT_180ca39e0 + 4));
        DAT_180ca39e8 = DAT_180ca39e8 + -4;
      }
      local_88 = iVar9;
      puVar12 = (undefined8 *)FUN_1800111b0(&local_98,param_1 + 0x1cf8);
      local_84 = *puVar12;
      local_7c = *(undefined4 *)(puVar12 + 1);
      FUN_180011470(local_84,&local_88);
    }
LAB_180010b4f:
    if (DAT_18095d4b8 != '\0') {
      pfVar13 = (float *)FUN_1800111b0(&local_98,param_1 + 0x1cf8);
      fVar1 = *pfVar13;
      fVar2 = pfVar13[1];
      fVar3 = pfVar13[2];
      pfVar13 = (float *)FUN_1800111b0(&local_98,param_1 + 0x1d04);
      fVar4 = *pfVar13;
      fVar5 = pfVar13[1];
      fVar6 = pfVar13[2];
      iVar9 = FUN_180011200(param_1 + 0x1c20);
      if (0x40 < iVar9) {
        iVar9 = 0x40;
      }
      lVar14 = FUN_18000f3a0(param_1 + 0x1c28);
      lVar15 = FUN_18000f3a0(param_1 + 8);
      iVar10 = FUN_180011200(param_1);
      if (((0 < iVar9) && (lVar14 - 0x10000U < 0x7ffffffeffff)) &&
         (lVar15 - 0x10000U < 0x7ffffffeffff)) {
        iVar17 = 0;
        do {
          uVar16 = FUN_180011220(lVar14 + 0x14 + (longlong)iVar17 * 0x18);
          if (((uVar16 & 1) == 0) &&
             (((uVar16 = FUN_180011440(lVar14 + 0x12 + (longlong)iVar17 * 0x18), iVar10 < 1 ||
               ((int)((uint)uVar16 & 0xffff) < iVar10)) &&
              (fVar18 = (float)FUN_18000f3d0((uVar16 & 0xffff) * 0x38 + 0xc + lVar15),
              ((uint)fVar18 & 0x7f800000) != 0x7f800000)))) {
            local_98 = fVar18 * fVar4 + fVar1;
            local_90 = fVar6 * fVar18 + fVar3;
            local_94 = fVar5 * fVar18 + fVar2;
            FUN_18022d110(&local_98,0);
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < iVar9);
      }
    }
  }
  return;
}



/* ===== 180010d70 FUN_180010d70 ===== */

void FUN_180010d70(void)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  int local_58;
  int local_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  
  if ((DAT_180ca1c40 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180ca1c44 = FUN_18038eaf0("C_BaseEntity","m_nSubclassID");
    DAT_180ca1c48 = FUN_18038eaf0("C_BaseEntity","m_iTeamNum");
    DAT_180ca1c4c = FUN_18038eaf0("CCSWeaponBaseVData","m_nNumBullets");
    DAT_180ca1c50 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRange");
    DAT_180ca1c54 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRangeModifier");
    DAT_180ca1c58 = FUN_18038eaf0("CCSWeaponBaseVData","m_flPenetration");
    DAT_180ca1c5c = FUN_18038eaf0("CCSWeaponBaseVData","m_nDamage");
    DAT_180ca1c40 = '\x01';
    if (((DAT_180ca1c44 == 0) ||
        (((DAT_180ca1c4c == 0 || (DAT_180ca1c50 == 0)) || (DAT_180ca1c58 == 0)))) ||
       (DAT_180ca1c5c == 0)) {
      local_58 = DAT_180ca1c58;
      local_50 = DAT_180ca1c5c;
      FUN_1802b2560("[error] bullets | schema: subclass %x bullets %x range %x pen %x damage %x");
    }
  }
  if (((DAT_180ca0cde == '\0') && (DAT_1809620c0 != 0)) && (lVar6 = FUN_18000f3a0(), lVar6 != 0)) {
    DAT_180ca0cde = FUN_180273b60("bullet_impact",FUN_180010910);
  }
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  iVar5 = FUN_1804e4d70(&DAT_1809624a0);
  lVar4 = DAT_180ca3a08;
  lVar7 = DAT_180ca3a00;
  lVar6 = DAT_180ca39f8;
  puVar10 = auStack_78;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809624ec == 0x7fffffff) {
LAB_180011184:
    DAT_1809624ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar10 + -8) = &UNK_180011198;
    FUN_1804e4a90(6);
  }
  local_48 = DAT_180ca39f8;
  DAT_180ca39f8 = 0;
  lStack_40 = DAT_180ca3a00;
  DAT_180ca3a00 = 0;
  local_38 = DAT_180ca3a08;
  DAT_180ca3a08 = 0;
  FUN_1804e4e90(&DAT_1809624a0);
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = local_res8;
    DAT_1811089f8 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  lVar2 = DAT_1811089f8;
  if ((DAT_1811089f8 != 0) && (lVar6 != lVar7)) {
    lVar8 = lVar6;
    do {
      FUN_180010250(lVar8,lVar2);
      lVar8 = lVar8 + 0x38;
    } while (lVar8 != lVar7);
  }
  if (DAT_180ca1c20 != DAT_180ca1c28) {
    if ((((DAT_180961fa8 != 0) && (uVar11 = (ulonglong)DAT_180961fb0, DAT_180961fb0 != 0)) &&
        (lVar7 = FUN_18000f3a0(), lVar7 - 0x10000U < 0x7ffffffeffff)) &&
       (((lVar7 + uVar11) - 0x10000 < 0x7ffffffeffff && (iVar5 = FUN_180011200(), -1 < iVar5)))) {
      uVar11 = 0;
      lVar7 = DAT_180ca39e0;
      lVar8 = DAT_180ca39e8;
      if (DAT_180ca39e8 - DAT_180ca39e0 >> 4 != 0) {
        do {
          lVar9 = uVar11 * 0x10;
          if ((uint)(*(int *)(lVar9 + lVar7) - iVar5) < 0x97) {
            if (*(int *)(lVar9 + lVar7) == iVar5) {
              if (DAT_18095d43c != '\0') {
                if (lVar2 != 0) {
                  FUN_18000e850(lVar2,lVar7 + 4 + lVar9,DAT_180ca1c28 + -0xc);
                  lVar7 = DAT_180ca39e0;
                  lVar8 = DAT_180ca39e8;
                }
              }
              lVar2 = lVar7 + lVar9 + 0x10;
              FUN_180540530(lVar7 + lVar9,lVar2,lVar8 - lVar2);
              DAT_180ca39e8 = DAT_180ca39e8 + -0x10;
              break;
            }
            uVar11 = uVar11 + 1;
          }
          else {
            lVar1 = lVar7 + lVar9 + 0x10;
            FUN_180540530(lVar7 + lVar9,lVar1,lVar8 - lVar1);
            lVar8 = DAT_180ca39e8 + -0x10;
            lVar7 = DAT_180ca39e0;
            DAT_180ca39e8 = lVar8;
          }
        } while (uVar11 < (ulonglong)(lVar8 - lVar7 >> 4));
      }
    }
    if (DAT_180ca1c20 != DAT_180ca1c28) {
      DAT_180ca1c28 = DAT_180ca1c20;
    }
  }
  if (lVar6 != 0) {
    uVar11 = (lVar4 - lVar6 >> 3) * 8;
    lVar7 = lVar6;
    if (0xfff < uVar11) {
      lVar7 = *(longlong *)(lVar6 + -8);
      if (0x1f < (lVar6 - lVar7) - 8U) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar10 = auStack_70;
        goto LAB_180011184;
      }
      uVar11 = uVar11 + 0x27;
    }
    thunk_FUN_1803d64e0(lVar7,uVar11);
  }
  return;
}



/* ===== 1800111b0 FUN_1800111b0 ===== */

undefined8 * FUN_1800111b0(undefined8 *param_1,undefined8 *param_2)

{
  if (param_2 + -0x2000 < (undefined8 *)0x7ffffffeffff) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    return param_1;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



/* ===== 180011200 FUN_180011200 ===== */

undefined4 FUN_180011200(undefined4 *param_1)

{
  if (param_1 + -0x4000 < (undefined4 *)0x7ffffffeffff) {
    return *param_1;
  }
  return 0;
}



/* ===== 180011220 FUN_180011220 ===== */

ulonglong FUN_180011220(byte *param_1)

{
  if (param_1 + -0x10000 < (byte *)0x7ffffffeffff) {
    return (ulonglong)*param_1;
  }
  return (ulonglong)(param_1 + -0x10000) & 0xffffffffffffff00;
}



/* ===== 180011250 FUN_180011250 ===== */

void FUN_180011250(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 != (undefined8 *)param_1[2]) {
    *puVar5 = *param_2;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_2 + 1);
    param_1[1] = param_1[1] + 0xc;
    return;
  }
  lVar4 = (longlong)puVar5 - *param_1;
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  uVar6 = 0x1555555555555555;
  lVar4 = (lVar4 >> 1) - (lVar4 >> 0x3f);
  if (lVar4 == 0x1555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar4 + 1;
  uVar7 = (param_1[2] - *param_1 >> 2) * -0x5555555555555555;
  if (uVar7 <= 0x1555555555555555 - (uVar7 >> 1)) {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar6 = uVar1;
    if (uVar1 <= uVar7) {
      uVar6 = uVar7;
    }
    if (0x1555555555555555 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar3 = FUN_18000fb70(uVar6 * 0xc);
  *(undefined8 *)(lVar3 + lVar4 * 0xc) = *param_2;
  lVar4 = lVar3 + lVar4 * 0xc;
  *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(param_2 + 1);
  puVar2 = (undefined8 *)*param_1;
  if (puVar5 == (undefined8 *)param_1[1]) {
    lVar8 = param_1[1] - (longlong)puVar2;
    lVar4 = lVar3;
    puVar5 = puVar2;
  }
  else {
    FUN_180540530(lVar3,puVar2,(longlong)puVar5 - (longlong)puVar2);
    lVar4 = lVar4 + 0xc;
    lVar8 = param_1[1] - (longlong)puVar5;
  }
  FUN_180540530(lVar4,puVar5,lVar8);
  FUN_1800118f0(param_1,lVar3,uVar1,uVar6);
  return;
}



/* ===== 1800113c0 FUN_1800113c0 ===== */

void FUN_1800113c0(ulonglong *param_1)

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
  uVar3 = ((longlong)(param_1[2] - uVar4) >> 3) * 8;
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
  *(undefined8 *)(puVar5 + -8) = 0x180011423;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180011440 FUN_180011440 ===== */

undefined2 FUN_180011440(undefined2 *param_1)

{
  if (param_1 + -0x8000 < (undefined2 *)0x7ffffffeffff) {
    return *param_1;
  }
  return 0;
}



/* ===== 180011470 FUN_180011470 ===== */

undefined8 * FUN_180011470(undefined8 param_1,undefined8 *param_2)

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
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar6 = DAT_180ca39e8;
  if (DAT_180ca39e8 != DAT_180ca39f0) {
    uVar5 = param_2[1];
    *DAT_180ca39e8 = *param_2;
    puVar6[1] = uVar5;
    puVar6 = DAT_180ca39e8;
    DAT_180ca39e8 = DAT_180ca39e8 + 2;
    return puVar6;
  }
  uVar14 = 0xfffffffffffffff;
  uVar15 = (longlong)DAT_180ca39e8 - (longlong)DAT_180ca39e0;
  lVar10 = (longlong)uVar15 >> 4;
  if (lVar10 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar11 = lVar10 + 1;
  uVar8 = (longlong)DAT_180ca39f0 - (longlong)DAT_180ca39e0 >> 4;
  if (uVar8 <= 0xfffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar14 = uVar11;
    if (uVar11 <= uVar8) {
      uVar14 = uVar8;
    }
    if (0xfffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar14 * 0x10);
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar16 = (undefined8 *)((uVar15 & 0xfffffffffffffff0) + (longlong)puVar7);
  *(undefined4 *)puVar16 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)puVar16 + 4) = uVar2;
  *(undefined4 *)(puVar16 + 1) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0xc) = uVar4;
  if (puVar6 == DAT_180ca39e8) {
    lVar10 = (longlong)DAT_180ca39e8 - (longlong)DAT_180ca39e0;
    puVar9 = puVar7;
    puVar6 = DAT_180ca39e0;
  }
  else {
    FUN_180540530(puVar7,DAT_180ca39e0,(longlong)puVar6 - (longlong)DAT_180ca39e0);
    puVar9 = puVar16 + 2;
    lVar10 = (longlong)DAT_180ca39e8 - (longlong)puVar6;
  }
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  FUN_180540530(puVar9,puVar6,lVar10);
  if (DAT_180ca39e0 == (undefined8 *)0x0) goto LAB_1800115c1;
  puVar6 = DAT_180ca39e0;
  if (((longlong)DAT_180ca39f0 - (longlong)DAT_180ca39e0 & 0xfffffffffffffff0U) < 0x1000) {
LAB_1800115b9:
    puVar13 = puVar12;
  }
  else {
    puVar6 = (undefined8 *)DAT_180ca39e0[-1];
    if (0x1f < (ulonglong)((longlong)DAT_180ca39e0 + (-8 - (longlong)puVar6))) {
      pcVar1 = (code *)swi(0x29);
      puVar6 = (undefined8 *)(*pcVar1)(5);
      puVar12 = auStack_30;
      goto LAB_1800115b9;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x1800115c1;
  thunk_FUN_1803d64e0(puVar6);
LAB_1800115c1:
  DAT_180ca39e8 = puVar7 + uVar11 * 2;
  DAT_180ca39e0 = puVar7;
  DAT_180ca39f0 = puVar7 + uVar14 * 2;
  return puVar16;
}



/* ===== 180011610 FUN_180011610 ===== */

void FUN_180011610(ulonglong *param_1)

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
  uVar2 = ((longlong)(param_1[2] - uVar4) >> 2) * 4;
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
  *(undefined8 *)(puVar5 + -8) = 0x180011677;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180011690 FUN_180011690 ===== */

undefined8 * FUN_180011690(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar14 = (longlong)DAT_180ca39f8;
  uVar15 = 0x492492492492492;
  lVar7 = ((longlong)DAT_180ca3a00 - (longlong)DAT_180ca39f8 >> 3) * 0x6db6db6db6db6db7;
  if (lVar7 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar7 + 1;
  uVar9 = ((longlong)DAT_180ca3a08 - (longlong)DAT_180ca39f8 >> 3) * 0x6db6db6db6db6db7;
  if (uVar9 <= 0x492492492492492 - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar15 = uVar1;
    if (uVar1 <= uVar9) {
      uVar15 = uVar9;
    }
    if (0x492492492492492 < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined8 *)FUN_18000fb70(uVar15 * 0x38);
  uVar6 = param_3[1];
  puVar13 = puVar8 + ((param_2 - lVar14) / 0x38) * 7;
  *puVar13 = *param_3;
  puVar13[1] = uVar6;
  uVar6 = param_3[3];
  puVar13[2] = param_3[2];
  puVar13[3] = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar4 = *(undefined4 *)(param_3 + 5);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar13 + 0x24) = uVar3;
  *(undefined4 *)(puVar13 + 5) = uVar4;
  *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar5;
  puVar13[6] = param_3[6];
  if ((undefined8 *)param_2 == DAT_180ca3a00) {
    lVar14 = (longlong)DAT_180ca3a00 - (longlong)DAT_180ca39f8;
    puVar10 = puVar8;
    param_2 = (longlong)DAT_180ca39f8;
  }
  else {
    FUN_180540530(puVar8,DAT_180ca39f8,param_2 - (longlong)DAT_180ca39f8);
    puVar10 = puVar13 + 7;
    lVar14 = (longlong)DAT_180ca3a00 - param_2;
  }
  puVar11 = auStack_38;
  puVar12 = auStack_38;
  FUN_180540530(puVar10,param_2,lVar14);
  if (DAT_180ca39f8 == (undefined8 *)0x0) goto LAB_180011816;
  lVar14 = (longlong)DAT_180ca39f8;
  if ((ulonglong)(((longlong)DAT_180ca3a08 - (longlong)DAT_180ca39f8 >> 3) * 8) < 0x1000) {
LAB_18001180b:
    puVar12 = puVar11;
  }
  else {
    lVar14 = *(longlong *)((longlong)DAT_180ca39f8 + -8);
    if (0x1f < ((longlong)DAT_180ca39f8 - lVar14) - 8U) {
      lVar14 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar11 = auStack_30;
      goto LAB_18001180b;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x180011816;
  thunk_FUN_1803d64e0(lVar14);
LAB_180011816:
  DAT_180ca3a00 = puVar8 + uVar1 * 7;
  DAT_180ca39f8 = puVar8;
  DAT_180ca3a08 = puVar8 + uVar15 * 7;
  return puVar13;
}



/* ===== 1800118d0 FUN_1800118d0 ===== */

void FUN_1800118d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1804e4cd0("vector too long");
}



/* ===== 1800118f0 FUN_1800118f0 ===== */

void FUN_1800118f0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar3 = auStack_48;
  puVar4 = auStack_48;
  uVar5 = *param_1;
  if (uVar5 == 0) goto LAB_180011962;
  uVar2 = uVar5;
  if ((ulonglong)(((longlong)(param_1[2] - uVar5) >> 2) * 4) < 0x1000) {
LAB_18001195a:
    puVar4 = puVar3;
  }
  else {
    uVar2 = *(ulonglong *)(uVar5 - 8);
    uVar5 = (uVar5 - uVar2) - 8;
    if (0x1f < uVar5) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar3 = auStack_40;
      uVar2 = uVar5;
      goto LAB_18001195a;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x180011962;
  thunk_FUN_1803d64e0(uVar2);
LAB_180011962:
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0xc;
  param_1[2] = param_2 + param_4 * 0xc;
  return;
}



/* ===== 180011990 FUN_180011990 ===== */

void FUN_180011990(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1804e4cd0("string too long");
}



/* ===== 1800119b0 FUN_1800119b0 ===== */

undefined1 FUN_1800119b0(longlong *param_1)

{
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    return 0;
  }
  return 1;
}



/* ===== 1800119d0 FUN_1800119d0 ===== */

ulonglong FUN_1800119d0(longlong *param_1,char *param_2)

{
  int iVar1;
  ulonglong in_RAX;
  char *_Str1;
  undefined4 extraout_var;
  
  if (param_1 != (longlong *)0x0) {
    _Str1 = (char *)(**(code **)(*param_1 + 8))();
    in_RAX = 0;
    if (_Str1 != (char *)0x0) {
      iVar1 = strcmp(_Str1,param_2);
      in_RAX = CONCAT44(extraout_var,iVar1);
      if (iVar1 == 0) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 180011a10 FUN_180011a10 ===== */

uint FUN_180011a10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x18);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      plVar1 = *(longlong **)(lVar3 + 8);
      if (plVar1 == (longlong *)0x0) {
        uVar4 = 0;
      }
      else {
        lVar3 = *plVar1;
        if (lVar3 == 0) {
          uVar4 = 0;
        }
        else {
          lVar2 = FUN_1804ef120(lVar3,"water_fx",param_3,param_4,0);
          uVar4 = 0;
          if (lVar2 != 0) {
            uVar4 = 0x100;
          }
          uVar5 = uVar4;
          lVar2 = FUN_1804ef120(lVar3,"blood",param_3,param_4,uVar4);
          if (lVar2 != 0) {
            uVar4 = uVar4 | 0x200;
            uVar5 = uVar4;
          }
          lVar2 = FUN_1804ef120(lVar3,"particle_cable",param_3,param_4,uVar5);
          if (lVar2 != 0) {
            uVar4 = uVar4 | 0x400;
            uVar5 = uVar4;
          }
          lVar3 = FUN_1804ef120(lVar3,"explosion_flashbang",param_3,param_4,uVar5);
          if (lVar3 != 0) {
            uVar4 = uVar4 | 0x800;
          }
        }
      }
    }
  }
  return uVar4;
}



/* ===== 180011ae0 FUN_180011ae0 ===== */

void FUN_180011ae0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (DAT_18095d3a8 != '\0') {
    cVar1 = FUN_1800119d0(param_2,"team_intro_start");
    if (cVar1 != '\0') goto LAB_180011b20;
  }
  (*DAT_180ca3bb8)(param_1,param_2);
LAB_180011b20:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 180011b40 FUN_180011b40 ===== */

void FUN_180011b40(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (DAT_18095d3ac != '\0') {
    cVar1 = FUN_1800119d0(param_2,"show_survival_respawn_status");
    if (cVar1 != '\0') goto LAB_180011b80;
  }
  (*DAT_180ca3bf0)(param_1,param_2);
LAB_180011b80:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 180011ba0 FUN_180011ba0 ===== */

ulonglong FUN_180011ba0(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (DAT_18095d3ab == '\0') {
    uVar1 = (*DAT_180ca3a48)();
  }
  else {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar1;
}



/* ===== 180011bd0 FUN_180011bd0 ===== */

undefined8 FUN_180011bd0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  uVar4 = 0;
  if (DAT_18095d3b2 != '\0') {
    uVar4 = 0x10;
  }
  if (DAT_18095d3b3 != '\0') {
    uVar4 = uVar4 | 0x20;
  }
  lVar1 = FUN_1800f1c60();
  uVar3 = uVar4 | 0x40;
  if (*(char *)(lVar1 + 0x36d) == '\0') {
    uVar3 = uVar4;
  }
  bVar5 = DAT_18095d3ad == '\0';
  if (!bVar5) {
    uVar3 = uVar3 | 0x80;
  }
  if (((param_2 == 0) || (uVar3 == 0)) ||
     (((((uVar4 = FUN_180011a10(param_2), (uVar3 & 0x10) == 0 || ((uVar4 >> 8 & 1) == 0)) &&
        (((uVar3 & 0x20) == 0 || ((uVar4 >> 9 & 1) == 0)))) &&
       (((uVar3 & 0x40) == 0 || ((uVar4 >> 10 & 1) == 0)))) &&
      ((bVar5 || ((uVar4 >> 0xb & 1) == 0)))))) {
    uVar2 = (*DAT_180ca3a38)(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = 0;
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar2;
}



/* ===== 180011cb0 FUN_180011cb0 ===== */

undefined4
FUN_180011cb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar3 = FUN_180012d90();
  if (lVar3 == 0) {
    FUN_1802b2560("[error] removals | %s: vtable %s (+0x%x) not found in %s",param_7,param_2,param_3
                  ,param_1);
    return 0;
  }
  lVar3 = FUN_18000f3a0(lVar3 + (longlong)param_4 * 8);
  if (lVar3 == 0) {
    FUN_1802b2560("[error] removals | %s: slot %d of %s is empty",param_7,param_4,param_2);
    return 0;
  }
  iVar2 = FUN_180428df0(lVar3,param_5,param_6);
  if (iVar2 != 0) {
    uVar1 = FUN_180429510(iVar2);
    FUN_1802b2560("[error] removals | %s: hook failed | %s",param_7,uVar1);
    *param_6 = 0;
    return 0;
  }
  iVar2 = FUN_1804293b0(lVar3,1);
  if (iVar2 == 0) {
    FUN_1802b2560("[removals] %s hooked | %s+0x%x slot %d -> %p",param_7,param_2,param_3,
                  CONCAT44(uVar4,param_4),lVar3);
    return 1;
  }
  uVar1 = FUN_180429510(iVar2);
  FUN_1802b2560("[error] removals | %s: enable failed | %s",param_7,uVar1);
  return 0;
}



/* ===== 180011e00 FUN_180011e00 ===== */

void FUN_180011e00(void)

{
  if ((DAT_180ca3b80 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180ca3b84 = FUN_18038eaf0("C_CSPlayerPawnBase","m_flFlashBangTime");
    DAT_180ca3b88 = FUN_18038eaf0("C_CSPlayerPawn","m_pHostageServices");
    DAT_180ca3b8c = FUN_18038eaf0("CCSPlayer_HostageServices","m_hCarriedHostageProp");
    DAT_180ca3b90 = FUN_18038eaf0("CCSPlayer_HostageServices","m_hCarriedHostage");
    DAT_180ca3b94 = FUN_18038eaf0("C_BaseEntity","m_lifeState");
    DAT_180ca3b98 = FUN_18038eaf0("CBaseAnimGraph","m_bRagdollClientSide");
    if (DAT_180ca3b98 == 0) {
      DAT_180ca3b98 = FUN_18038eaf0("C_BaseAnimGraph","m_bRagdollClientSide");
    }
    DAT_180ca3b9c = FUN_18038eaf0("C_BaseEntity","m_fEffects");
    DAT_180ca3ba0 = FUN_18038eaf0("CEntityIdentity","m_flags");
    DAT_180ca3ba4 = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
    DAT_180ca3ba8 = FUN_18038eaf0("CEntityIdentity","m_pPrevByClass");
    DAT_180ca3bac = FUN_18038eaf0("CEntityIdentity","m_pNextByClass");
    DAT_180ca3bb0 = FUN_18038eaf0("C_BaseEntity","m_iTeamNum");
    DAT_180ca3b80 = '\x01';
    if ((((((DAT_180ca3b84 == 0) || (DAT_180ca3b88 == 0)) || (DAT_180ca3b8c == 0)) ||
         ((DAT_180ca3b94 == 0 || (DAT_180ca3b98 == 0)))) ||
        ((DAT_180ca3b9c == 0 || ((DAT_180ca3ba0 == 0 || (DAT_180ca3ba4 == 0)))))) ||
       ((DAT_180ca3ba8 == 0 || (DAT_180ca3bac == 0)))) {
      FUN_1802b2560(
                   "[error] removals | schema: flash %x hostage %x prop %x life %x ragdoll %x effects %x identity flags %x group %x class links %x/%x"
                   );
    }
  }
  return;
}



/* ===== 180012030 FUN_180012030 ===== */

void FUN_180012030(longlong *param_1,uint param_2)

{
  (**(code **)((ulonglong)param_2 + *param_1))();
  return;
}



/* ===== 180012050 FUN_180012050 ===== */

int FUN_180012050(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char *_Str1;
  longlong local_res8;
  
  if ((param_1 != 0) &&
     (lVar3 = FUN_18000f3a0((ulonglong)DAT_180ca3b88 + param_1), lVar3 - 0x10000U < 0x7ffffffeffff))
  {
    iVar1 = FUN_180011200((ulonglong)DAT_180ca3b8c + lVar3);
    if (((iVar1 - 1U < 0xfffffffe) &&
        (((FUN_1803a0940(&local_res8,iVar1), local_res8 != 0 &&
          (lVar3 = FUN_18000f3a0((ulonglong)DAT_180961968 + local_res8), lVar3 != 0)) &&
         (lVar3 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar3), lVar3 != 0)))) &&
       (((lVar3 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar3), lVar3 != 0 &&
         (_Str1 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar3),
         _Str1 + -0x10000 < (char *)0x7ffffffeffff)) &&
        (iVar2 = strcmp(_Str1,"C_HostageCarriableProp"), iVar2 == 0)))) {
      return iVar1;
    }
  }
  return -1;
}



/* ===== 180012140 FUN_180012140 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180012140(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  ulonglong uVar14;
  char cVar15;
  char cVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulonglong *puVar22;
  char *_Str1;
  longlong lVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  longlong *plVar26;
  longlong lVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  int iVar32;
  uint uVar33;
  longlong unaff_R14;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [48];
  ulonglong local_170;
  longlong local_168;
  undefined1 local_160 [8];
  longlong *local_158;
  longlong *local_150;
  longlong local_148;
  undefined4 local_138 [64];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  local_168 = param_1;
  FUN_180540170(local_138,0,0x100);
  uVar33 = 0;
  iVar32 = 0;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_170);
    DAT_181108a00 = local_170;
    DAT_1811089f8 = FUN_1803a0c50(&local_170);
    DAT_180cd1304 = '\x01';
  }
  uVar14 = DAT_1811089f8;
  uVar30 = DAT_1811089f8;
  if (DAT_1811089f8 == 0) {
    FUN_1803a1250();
    uVar30 = uVar14;
    if (local_158 != local_150) {
      uVar25 = (ulonglong)DAT_180ca09fc;
      plVar26 = local_158;
      do {
        if ((*plVar26 == 0) || ((int)uVar25 == 0)) {
          uVar30 = 0;
        }
        else {
          uVar17 = FUN_180011200(*plVar26 + uVar25);
          puVar22 = (ulonglong *)FUN_1803a0940(local_160,uVar17);
          uVar30 = *puVar22;
          if (uVar30 != 0) break;
          uVar25 = (ulonglong)DAT_180ca09fc;
        }
        plVar26 = plVar26 + 1;
      } while (plVar26 != local_150);
    }
    if (local_158 == (longlong *)0x0) {
LAB_180012286:
      puVar29 = auStack_1a8;
      if (uVar30 == 0) goto LAB_18001255e;
      goto LAB_18001228f;
    }
    uVar25 = (local_148 - (longlong)local_158 >> 3) * 8;
    plVar26 = local_158;
    if (uVar25 < 0x1000) {
LAB_18001227e:
      thunk_FUN_1803d64e0(plVar26,uVar25);
      goto LAB_180012286;
    }
    plVar26 = (longlong *)local_158[-1];
    if ((ulonglong)((longlong)local_158 + (-8 - (longlong)plVar26)) < 0x20) {
      uVar25 = uVar25 + 0x27;
      goto LAB_18001227e;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    puVar28 = auStack_1a0;
  }
  else {
LAB_18001228f:
    puVar28 = auStack_1a8;
    unaff_R14 = FUN_18000f3a0(DAT_180961968 + uVar30);
    local_170 = uVar30;
    _Str1 = (char *)FUN_1803a0710(&local_170);
    uVar30 = 0x7ffffffefffe;
    puVar29 = auStack_1a8;
    if ((0x7ffffffefffe < unaff_R14 - 0x10000U) || (puVar29 = auStack_1a8, _Str1 == (char *)0x0))
    goto LAB_18001255e;
    iVar18 = strcmp(_Str1,"C_CSPlayerPawn");
    puVar29 = auStack_1a8;
    if (iVar18 != 0) goto LAB_18001255e;
    iVar18 = 0;
    while( true ) {
      lVar23 = FUN_18000f3a0();
      if (0x7ffffffefffe < lVar23 - 0x10000U) break;
      iVar18 = iVar18 + 1;
      puVar29 = auStack_1a8;
      if (0xfff < iVar18) goto LAB_180012335;
      unaff_R14 = lVar23;
    }
  }
  lVar23 = unaff_R14;
  puVar29 = puVar28;
LAB_180012335:
  iVar18 = 0;
  *(undefined4 *)(puVar29 + 0x30) = 0;
  do {
    if (uVar30 < lVar23 - 0x10000U) break;
    *(undefined8 *)(puVar29 + -8) = 0x18001235e;
    cVar15 = FUN_180011200((ulonglong)DAT_180ca3ba0 + lVar23);
    if (-1 < cVar15) {
      *(undefined8 *)(puVar29 + -8) = 0x180012374;
      iVar19 = FUN_180011200((ulonglong)DAT_180ca3ba4 + lVar23);
      if (iVar19 == 0) {
        *(undefined8 *)(puVar29 + -8) = 0x180012384;
        uVar30 = FUN_18000f3a0(lVar23);
        if (uVar30 - 0x10000 < 0x7ffffffeffff) {
          iVar32 = iVar32 + 1;
          *(int *)(puVar29 + 0x34) = iVar32;
          if ((((uVar30 == uVar14) || (DAT_18092093c == '\0')) || (DAT_180ca3bb0 == 0)) ||
             (uVar14 == 0)) {
LAB_18001242d:
            *(undefined8 *)(puVar29 + -8) = 0x18001243b;
            cVar15 = FUN_180011220(DAT_180ca3b94 + uVar30);
            if (cVar15 == '\0') {
              *(undefined8 *)(puVar29 + -8) = 0x18001244d;
              cVar15 = FUN_180011220(DAT_180ca3b98 + uVar30);
              if (cVar15 != '\0') goto LAB_180012455;
              bVar13 = true;
            }
            else {
LAB_180012455:
              bVar13 = false;
            }
            if ((*(int *)(param_1 + 0x10) == 1) && (!bVar13)) goto LAB_1800124bb;
            if ((*(char *)(param_1 + 7) == '\0') || (uVar30 == 0)) {
              if (uVar30 == uVar14) goto LAB_180012715;
            }
            else if (uVar30 == uVar14) {
              if ((uVar14 != 0) && (DAT_180ca09f0 != 0)) {
                *(undefined8 *)(puVar29 + -8) = 0x18001249f;
                iVar19 = FUN_180011200(DAT_180ca09f0 + uVar14);
                if ((iVar19 - 1U < 1000) && (DAT_180ca12ef == '\0')) goto LAB_1800124bb;
              }
LAB_180012715:
              cVar15 = *(char *)(param_1 + 8);
              *(undefined8 *)(puVar29 + -8) = 0x180012722;
              iVar19 = FUN_180012050(uVar14);
              if (iVar19 != -1) {
                *(undefined8 *)(puVar29 + -8) = 0x18001273a;
                FUN_1803a0940(puVar29 + 0x48,iVar19);
                lVar23 = *(longlong *)(puVar29 + 0x48);
                if (lVar23 != 0) {
                  *(undefined8 *)(puVar29 + -8) = 0x180012756;
                  uVar20 = FUN_180011200((ulonglong)DAT_180ca3b9c + lVar23);
                  if (cVar15 == '\0') {
                    if ((uVar14 != 0) && (DAT_180ca09f0 != 0)) {
                      *(undefined8 *)(puVar29 + -8) = 0x18001277a;
                      iVar32 = FUN_180011200(DAT_180ca09f0 + uVar14);
                      if ((iVar32 - 1U < 1000) && (DAT_180ca12ef == '\0')) goto LAB_180012792;
                    }
                    uVar21 = 0;
                  }
                  else {
LAB_180012792:
                    uVar21 = 0x20;
                  }
                  uVar21 = uVar20 & 0xffffffdf | uVar21;
                  *(uint *)(puVar29 + 0x38) = uVar21;
                  if (uVar21 != uVar20) {
                    *(undefined8 *)(puVar29 + -8) = 0x1800127b5;
                    FUN_180013280((ulonglong)DAT_180ca3b9c + lVar23,puVar29 + 0x38);
                  }
                  if (uVar21 != DAT_180962524) {
                    *(undefined8 *)(puVar29 + -8) = 0x1800127d8;
                    DAT_180962524 = uVar21;
                    FUN_1802b2560("[removals] carried hostage prop %08x | m_fEffects 0x%x -> 0x%x",
                                  iVar19,uVar20,uVar21);
                  }
                  iVar18 = *(int *)(puVar29 + 0x30);
                  param_1 = *(longlong *)(puVar29 + 0x40);
                  iVar32 = *(int *)(puVar29 + 0x34);
                  goto LAB_180012529;
                }
                iVar18 = *(int *)(puVar29 + 0x30);
              }
              param_1 = *(longlong *)(puVar29 + 0x40);
            }
          }
          else {
            if (DAT_180ca0d54 == '\0') {
              DAT_180ca0d54 = '\x01';
              *(undefined8 *)(puVar29 + -8) = 0x1800123e1;
              DAT_180ca3a40 = FUN_180264b70("mp_teammates_are_enemies");
            }
            if (DAT_180ca3a40 != 0) {
              *(undefined8 *)(puVar29 + -8) = 0x1800123fe;
              cVar15 = FUN_180264d70(DAT_180ca3a40);
              if (cVar15 != '\0') goto LAB_18001242d;
            }
            *(undefined8 *)(puVar29 + -8) = 0x180012410;
            cVar15 = FUN_180011220(DAT_180ca3bb0 + uVar30);
            *(undefined8 *)(puVar29 + -8) = 0x180012421;
            cVar16 = FUN_180011220(DAT_180ca3bb0 + uVar14);
            if (cVar15 != cVar16) {
              iVar18 = *(int *)(puVar29 + 0x30);
              goto LAB_18001242d;
            }
LAB_1800124bb:
            lVar27 = (ulonglong)DAT_180ca3ba0 + lVar23;
            *(undefined8 *)(puVar29 + -8) = 0x1800124cc;
            uVar20 = FUN_180011200(lVar27);
            *(uint *)(puVar29 + 0x34) = uVar20 | 0x80;
            *(undefined8 *)(puVar29 + -8) = 0x1800124e1;
            FUN_180013280(lVar27,puVar29 + 0x34);
            *(undefined8 *)(puVar29 + -8) = 0x1800124ef;
            FUN_180012030(uVar30,DAT_180962214);
            *(undefined8 *)(puVar29 + -8) = 0x1800124f7;
            uVar20 = FUN_180011200(lVar27);
            *(uint *)(puVar29 + 0x34) = uVar20 & 0xffffff7f;
            *(undefined8 *)(puVar29 + -8) = 0x18001250c;
            FUN_180013280(lVar27,puVar29 + 0x34);
            if ((int)uVar33 < 0x40) {
              *(undefined8 *)(puVar29 + -8) = 0x18001251e;
              uVar17 = FUN_180011200(lVar23 + 0x10);
              *(undefined4 *)(puVar29 + (longlong)(int)uVar33 * 4 + 0x70) = uVar17;
              uVar33 = uVar33 + 1;
            }
            iVar18 = *(int *)(puVar29 + 0x30);
          }
LAB_180012529:
          uVar30 = 0x7ffffffefffe;
        }
        else {
          uVar30 = 0x7ffffffefffe;
        }
      }
    }
    iVar18 = iVar18 + 1;
    *(int *)(puVar29 + 0x30) = iVar18;
    *(undefined8 *)(puVar29 + -8) = 0x180012547;
    lVar23 = FUN_18000f3a0();
  } while (iVar18 < 0x1000);
LAB_18001255e:
  iVar18 = 0;
  if (0 < (int)DAT_180ca3bc0) {
    do {
      bVar13 = false;
      uVar20 = (&DAT_180ca3a80)[iVar18];
      uVar30 = 0;
      if ((int)uVar33 < 1) {
LAB_18001259d:
        if (uVar20 - 1 < 0xfffffffe) {
          *(undefined8 *)(puVar29 + -8) = 0x1800125b1;
          lVar23 = FUN_18000f3a0();
          if (lVar23 != 0) {
            *(undefined8 *)(puVar29 + -8) = 0x1800125d6;
            lVar23 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                                   lVar23 + (ulonglong)((uVar20 >> 9 & 0x3f) * DAT_180961944));
            if (lVar23 - 0x10000U < 0xfffffffffffeffff) {
              *(undefined8 *)(puVar29 + -8) = 0x1800125fd;
              lVar23 = FUN_18000f3a0((ulonglong)((uVar20 & 0x1ff) * DAT_180961948) + lVar23);
              if (lVar23 - 0x10000U < 0xfffffffffffeffff) {
                *(undefined8 *)(puVar29 + -8) = 0x18001261b;
                FUN_180012030(lVar23,DAT_180962214);
              }
            }
          }
        }
      }
      else {
        do {
          if ((bVar13) || (*(uint *)(puVar29 + uVar30 * 4 + 0x70) == uVar20)) {
            bVar13 = true;
          }
          uVar21 = (int)uVar30 + 1;
          uVar30 = (ulonglong)uVar21;
        } while ((int)uVar21 < (int)uVar33);
        if (!bVar13) goto LAB_18001259d;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < (int)DAT_180ca3bc0);
  }
  lVar23 = 2;
  puVar24 = (undefined8 *)(puVar29 + 0x70);
  puVar31 = (undefined8 *)&DAT_180ca3a80;
  do {
    uVar9 = puVar24[1];
    uVar10 = puVar24[2];
    uVar11 = puVar24[3];
    *puVar31 = *puVar24;
    puVar31[1] = uVar9;
    uVar9 = puVar24[4];
    uVar12 = puVar24[5];
    puVar31[2] = uVar10;
    puVar31[3] = uVar11;
    uVar10 = puVar24[6];
    uVar11 = puVar24[7];
    puVar31[4] = uVar9;
    puVar31[5] = uVar12;
    uVar9 = puVar24[8];
    uVar12 = puVar24[9];
    puVar31[6] = uVar10;
    puVar31[7] = uVar11;
    uVar10 = puVar24[10];
    uVar11 = puVar24[0xb];
    puVar31[8] = uVar9;
    puVar31[9] = uVar12;
    uVar17 = *(undefined4 *)(puVar24 + 0xc);
    uVar2 = *(undefined4 *)((longlong)puVar24 + 100);
    uVar3 = *(undefined4 *)(puVar24 + 0xd);
    uVar4 = *(undefined4 *)((longlong)puVar24 + 0x6c);
    puVar31[10] = uVar10;
    puVar31[0xb] = uVar11;
    uVar5 = *(undefined4 *)(puVar24 + 0xe);
    uVar6 = *(undefined4 *)((longlong)puVar24 + 0x74);
    uVar7 = *(undefined4 *)(puVar24 + 0xf);
    uVar8 = *(undefined4 *)((longlong)puVar24 + 0x7c);
    *(undefined4 *)(puVar31 + 0xc) = uVar17;
    *(undefined4 *)((longlong)puVar31 + 100) = uVar2;
    *(undefined4 *)(puVar31 + 0xd) = uVar3;
    *(undefined4 *)((longlong)puVar31 + 0x6c) = uVar4;
    *(undefined4 *)(puVar31 + 0xe) = uVar5;
    *(undefined4 *)((longlong)puVar31 + 0x74) = uVar6;
    *(undefined4 *)(puVar31 + 0xf) = uVar7;
    *(undefined4 *)((longlong)puVar31 + 0x7c) = uVar8;
    lVar23 = lVar23 + -1;
    puVar24 = puVar24 + 0x10;
    puVar31 = puVar31 + 0x10;
  } while (lVar23 != 0);
  uVar20 = iVar32 << 8 | uVar33;
  DAT_180ca3bc0 = uVar33;
  if (uVar20 != DAT_180962518) {
    uVar17 = *(undefined4 *)(param_1 + 0x10);
    cVar15 = *(char *)(param_1 + 7);
    *(undefined4 *)(puVar29 + 0x28) = DAT_180962214;
    *(uint *)(puVar29 + 0x20) = uVar33;
    *(undefined8 *)(puVar29 + -8) = 0x1800126dc;
    DAT_180962518 = uVar20;
    FUN_1802b2560("[removals] pawn walk | legs %d ragdolls %d | pawns %d hidden %d | UpdateVisibility +0x%x"
                  ,cVar15 != '\0',uVar17,iVar32);
  }
  *(undefined8 *)(puVar29 + -8) = 0x1800126fc;
  return;
}



/* ===== 180012810 FUN_180012810 ===== */

void FUN_180012810(byte param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  char *_Str1;
  longlong lVar4;
  undefined *puVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined4 local_res8 [2];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  
  if (param_1 != DAT_180962448) {
    puVar5 = &DAT_1806d2870;
    if (param_1 != 0) {
      puVar5 = &DAT_1806d286c;
    }
    DAT_180962448 = (uint)param_1;
    FUN_1802b2560("[removals] smoke %s | scene object +0x%x, start time +0x%x",puVar5,DAT_180962218,
                  0xe0);
  }
  if ((param_1 != 0) && (DAT_180962218 != 0)) {
    FUN_1803a09f0(&local_38);
    puVar7 = auStack_58;
    plVar6 = local_38;
    if (local_38 != local_30) {
      do {
        _Str1 = (char *)FUN_1803a0710(plVar6);
        if (((_Str1 != (char *)0x0) &&
            (iVar3 = strcmp(_Str1,"C_SmokeGrenadeProjectile"), iVar3 == 0)) &&
           (lVar4 = FUN_18000f3a0((ulonglong)DAT_180962218 + *plVar6),
           lVar4 - 0x10000U < 0x7ffffffeffff)) {
          iVar3 = FUN_180011200(lVar4 + 0xe0);
          if (iVar3 != 0) {
            local_res8[0] = 0;
            FUN_180013280(lVar4 + 0xe0,local_res8);
          }
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != local_30);
    }
    if (local_38 != (longlong *)0x0) {
      uVar1 = (local_28 - (longlong)local_38 >> 3) * 8;
      plVar6 = local_38;
      if (0xfff < uVar1) {
        plVar6 = (longlong *)((longlong)local_38 + (-8 - local_38[-1]));
        if (plVar6 < &DAT_00000020) {
          thunk_FUN_1803d64e0(local_38[-1],uVar1 + 0x27);
          return;
        }
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar7 = auStack_50;
      }
      *(undefined8 *)(puVar7 + -8) = 0x180012977;
      thunk_FUN_1803d64e0(plVar6);
    }
  }
  return;
}



/* ===== 180012990 FUN_180012990 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180012990(char param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  if ((((DAT_180ca3b80 != '\0') && (uVar4 = (ulonglong)DAT_180ca3b90, DAT_180ca3b90 != 0)) &&
      (DAT_180ca3b88 != 0)) && (DAT_180ca3b94 != 0)) {
    if (param_1 == '\0') {
      if ((DAT_180ca0d56 != '\0') && (DAT_180ca3a78 != 0)) {
        if (DAT_180ca3a78 - 0x10000U < 0x7ffffffeffff) {
          FUN_180013280(DAT_180ca3a78 + uVar4,&DAT_1809624f4);
        }
        if (DAT_18096251c != 0) {
          DAT_18096251c = 0;
        }
        _DAT_1809624f4 = 0xffffffff;
        DAT_180ca3a78 = 0;
        return;
      }
    }
    else if (DAT_18095d3b0 != '\0') {
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(&local_res10);
        DAT_181108a00 = CONCAT44(uStackX_14,local_res10);
        DAT_1811089f8 = FUN_1803a0c50(&local_res10);
        uVar4 = (ulonglong)DAT_180ca3b90;
        DAT_180cd1304 = '\x01';
      }
      lVar3 = DAT_1811089f8;
      uVar1 = DAT_180ca3b88;
      if (((DAT_1811089f8 != 0) &&
          (cVar2 = FUN_180011220((ulonglong)DAT_180ca3b94 + DAT_1811089f8), cVar2 == '\0')) &&
         ((lVar3 = FUN_18000f3a0((ulonglong)uVar1 + lVar3), lVar3 - 0x10000U < 0x7ffffffeffff &&
          (DAT_180ca3a78 == 0)))) {
        DAT_180ca0d56 = '\x01';
        _DAT_1809624f4 = FUN_180011200(uVar4 + lVar3);
        local_res10 = 0xffffffff;
        DAT_180ca3a78 = lVar3;
        FUN_180013280(uVar4 + lVar3,&local_res10);
        if (DAT_18096251c != 1) {
          DAT_18096251c = 1;
        }
      }
    }
  }
  return;
}



/* ===== 180012b60 FUN_180012b60 ===== */

void FUN_180012b60(longlong param_1)

{
  char cVar1;
  undefined *puVar2;
  longlong lVar3;
  float fVar4;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  cVar1 = *(char *)(param_1 + 5);
  if ((bool)cVar1 != (DAT_18096244c == 1)) {
    puVar2 = &DAT_1806d2870;
    DAT_18096244c = (uint)(cVar1 != '\0');
    if (cVar1 != '\0') {
      puVar2 = &DAT_1806d286c;
    }
    FUN_1802b2560("[removals] flashbang %s | m_flFlashBangTime 0x%x",puVar2,DAT_180ca3b84);
  }
  if ((*(char *)(param_1 + 5) != '\0') && (DAT_180ca3b84 != 0)) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res8);
      DAT_181108a00 = CONCAT44(uStackX_c,local_res8);
      DAT_1811089f8 = FUN_1803a0c50(&local_res8);
      DAT_180cd1304 = '\x01';
    }
    if (DAT_1811089f8 != 0) {
      lVar3 = (ulonglong)DAT_180ca3b84 + DAT_1811089f8;
      fVar4 = (float)FUN_18000f3d0(lVar3);
      if (fVar4 != 0.0) {
        local_res8 = 0;
        FUN_180013280(lVar3,&local_res8);
      }
    }
  }
  return;
}



/* ===== 180012c50 FUN_180012c50 ===== */

void FUN_180012c50(void)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  LOCK();
  DAT_180ca3bb4 = DAT_180ca3bb4 + 1;
  UNLOCK();
  if (DAT_180ca0cdf == '\0') {
    FUN_180011e00();
    if (DAT_180ca3b80 != '\0') {
      FUN_180012b60(&DAT_18095d3a8);
      FUN_180012990(1);
      FUN_180012810(DAT_18095d3ae);
    }
  }
  LOCK();
  DAT_180ca3bb4 = DAT_180ca3bb4 + -1;
  UNLOCK();
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 180012cb0 FUN_180012cb0 ===== */

void FUN_180012cb0(void)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  LOCK();
  DAT_180ca3bb4 = DAT_180ca3bb4 + 1;
  UNLOCK();
  FUN_180012990(0);
  LOCK();
  DAT_180ca3bb4 = DAT_180ca3bb4 + -1;
  UNLOCK();
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 180012ce0 FUN_180012ce0 ===== */

void FUN_180012ce0(undefined8 *param_1,char param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 3) != '\0') {
      FUN_180264d90(param_1[1],param_1[2]);
      *(undefined1 *)(param_1 + 3) = 0;
      return;
    }
  }
  else {
    if ((param_1[1] == 0) && (*(char *)((longlong)param_1 + 0x19) == '\0')) {
      lVar1 = FUN_180264b70(*param_1);
      param_1[1] = lVar1;
      *(bool *)((longlong)param_1 + 0x19) = lVar1 == 0;
      if (lVar1 == 0) {
        FUN_1802b2560("[error] removals | ConVar %s not found",*param_1);
      }
    }
    if (param_1[1] != 0) {
      uVar2 = FUN_180264d70();
      if (*(char *)(param_1 + 3) == '\0') {
        param_1[2] = uVar2;
        *(undefined1 *)(param_1 + 3) = 1;
      }
      if ((uVar2 & 0xffffffffffffff00) != uVar2) {
        FUN_180264d90(param_1[1]);
        return;
      }
    }
  }
  return;
}



/* ===== 180012d90 FUN_180012d90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180012d90(LPCSTR param_1,char *param_2,int param_3)

{
  undefined8 ******ppppppuVar1;
  int iVar2;
  HMODULE pHVar3;
  HANDLE pvVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 ******_Buf2;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  char *local_88;
  size_t local_80;
  undefined8 ******local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_c8;
  pHVar3 = GetModuleHandleA(param_1);
  if (pHVar3 != (HMODULE)0x0) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    pvVar4 = GetCurrentProcess();
    iVar2 = K32GetModuleInformation(pvVar4,pHVar3,&local_a8,0x18);
    lVar5 = local_a8;
    if ((((iVar2 != 0) && (uVar10 = uStack_a0 & 0xffffffff, local_a8 != 0)) && (uVar10 != 0)) &&
       (param_2 != (char *)0x0)) {
      uStack_a0 = uVar10;
      local_80 = strlen(param_2);
      if (param_3 == 0) {
        local_88 = param_2;
        lVar5 = FUN_1801d1f10(&local_a8,&local_88);
        return lVar5;
      }
      uStack_70 = 0;
      local_68 = _DAT_1808ad430;
      uStack_60 = _UNK_1808ad438;
      local_78 = (undefined8 ******)0x56413f2e;
      FUN_1800134a0(&local_78,param_2,local_80);
      FUN_1800134a0(&local_78,&DAT_1806d2a18,2);
      uVar7 = uStack_60;
      lVar8 = local_68;
      ppppppuVar1 = local_78;
      if (local_68 + 0x11U <= uVar10) {
        lVar9 = 0x10;
        do {
          if (*(char *)(lVar9 + lVar5) == '.') {
            _Buf2 = &local_78;
            if (0xf < uVar7) {
              _Buf2 = ppppppuVar1;
            }
            iVar2 = memcmp((char *)(lVar9 + lVar5),_Buf2,lVar8 + 1);
            if (iVar2 == 0) {
              lVar9 = lVar5 + -0x10 + lVar9;
              if (lVar9 != 0) {
                lVar8 = 0;
                if (0x17 < uVar10) goto LAB_180012f20;
              }
              break;
            }
          }
          lVar6 = lVar9 + 2;
          lVar9 = lVar9 + 1;
        } while ((ulonglong)(lVar6 + lVar8) <= uVar10);
      }
      goto LAB_180012ef5;
    }
  }
  return 0;
  while (uVar7 = lVar8 + 0x1c, lVar8 = lVar8 + 4, uVar7 <= uVar10) {
LAB_180012f20:
    if (((*(int *)(lVar8 + lVar5) == 1) && (*(int *)(lVar8 + 4 + lVar5) == param_3)) &&
       (*(int *)(lVar8 + 0xc + lVar5) == (int)lVar9 - (int)lVar5)) {
      if (lVar8 + lVar5 != 0) {
        lVar9 = 0;
        goto LAB_180012f50;
      }
      break;
    }
  }
  goto LAB_180012ef5;
  while (uVar7 = lVar9 + 0x18, lVar9 = lVar9 + 8, uVar7 <= uVar10) {
LAB_180012f50:
    if (*(longlong *)(lVar9 + lVar5) == lVar8 + lVar5) {
      lVar9 = lVar5 + 8 + lVar9;
      goto LAB_180012ef7;
    }
  }
LAB_180012ef5:
  lVar9 = 0;
LAB_180012ef7:
  FUN_18000f890(&local_78);
  return lVar9;
}



/* ===== 180012fa0 FUN_180012fa0 ===== */

void FUN_180012fa0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined8 local_res8;
  
  FUN_180011e00();
  if (DAT_180ca3b80 == '\0') {
    return;
  }
  if ((DAT_180ca0cdf == '\0') && (DAT_180ca0d55 == '\0')) {
    DAT_180ca0d55 = '\x01';
    cVar4 = FUN_18026b620(&DAT_180ca3bc8,"EventClientSimulate_t",FUN_180012c50,0x7fffffff);
    cVar5 = FUN_18026b620(&DAT_180ca3a10,"EventClientSimulate_t",FUN_180012cb0,0x80000000);
    cVar6 = FUN_18026b620(&DAT_180ca3a50,"EventClientFrameSimulate_t",FUN_180012cb0,0x80000000);
    if ((cVar4 == '\0') || ((cVar5 == '\0' || (cVar6 == '\0')))) {
      if (DAT_180ca3be8 != '\0') {
        DAT_180ca3be8 = '\0';
        cVar7 = FUN_18026b600(DAT_180ca3be0,&DAT_180ca3bc8,DAT_180ca3bd8);
        if (cVar7 == '\0') {
          FUN_1802b2560("[error] event listeners | unregister failed");
        }
      }
      if (DAT_180ca3a30 != '\0') {
        DAT_180ca3a30 = '\0';
        cVar7 = FUN_18026b600(DAT_180ca3a28,&DAT_180ca3a10,DAT_180ca3a20);
        if (cVar7 == '\0') {
          FUN_1802b2560("[error] event listeners | unregister failed");
        }
      }
      if (DAT_180ca3a70 != '\0') {
        DAT_180ca3a70 = '\0';
        cVar7 = FUN_18026b600(DAT_180ca3a68,&DAT_180ca3a50,DAT_180ca3a60);
        if (cVar7 == '\0') {
          FUN_1802b2560("[error] event listeners | unregister failed");
        }
      }
    }
    FUN_1802b2560("[removals] EventClientSimulate first / last, EventClientFrameSimulate last listeners: %d %d %d | render start return %p | m_hCarriedHostage +0x%x"
                  ,cVar4,cVar5,cVar6,DAT_180962130,DAT_180ca3b90);
  }
  if (((DAT_180ca3be8 == '\0') || (DAT_180ca3a30 == '\0')) || (DAT_180ca3a70 == '\0')) {
    bVar1 = false;
    FUN_180012b60(&DAT_18095d3a8);
    FUN_180012810(DAT_18095d3ae);
  }
  else {
    bVar1 = true;
  }
  if (((((DAT_180ca3b88 == 0) || (DAT_180ca3b8c == 0)) ||
       ((DAT_180ca3b94 == 0 || ((DAT_180ca3b98 == 0 || (DAT_180ca3b9c == 0)))))) ||
      (DAT_180ca3ba0 == 0)) ||
     ((((DAT_180ca3ba4 == 0 || (DAT_180ca3ba8 == 0)) || (DAT_180ca3bac == 0)) ||
      (DAT_180962214 == 0)))) {
    bVar3 = false;
  }
  else {
    bVar2 = true;
    bVar3 = true;
    if ((DAT_18095d3b0 != '\0') && (!bVar1)) {
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(&local_res8);
        DAT_181108a00 = local_res8;
        DAT_1811089f8 = FUN_1803a0c50(&local_res8);
        DAT_180cd1304 = '\x01';
        DAT_1809624f0 = FUN_180012050(DAT_1811089f8);
      }
      else {
        DAT_1809624f0 = FUN_180012050(DAT_1811089f8);
      }
      goto LAB_180013253;
    }
  }
  bVar2 = bVar3;
  DAT_1809624f0 = 0xffffffff;
LAB_180013253:
  if (bVar2) {
    FUN_180012140(&DAT_18095d3a8);
    return;
  }
  return;
}



/* ===== 180013280 FUN_180013280 ===== */

ulonglong FUN_180013280(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 + -0x4000 < (undefined4 *)0x7ffffffeffff) {
    uVar1 = *param_2;
    *param_1 = uVar1;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return (ulonglong)(param_1 + -0x4000) & 0xffffffffffffff00;
}



/* ===== 1800132b0 FUN_1800132b0 ===== */

void FUN_1800132b0(ulonglong *param_1)

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
  *(undefined8 *)(puVar5 + -8) = 0x180013305;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180013320 FUN_180013320 ===== */

void FUN_180013320(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_1800134a0(param_1,param_2,sVar1);
  return;
}



/* ===== 180013350 FUN_180013350 ===== */

undefined8 * FUN_180013350(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(param_2);
  FUN_1800133a0(param_1,param_2,sVar1);
  return param_1;
}



/* ===== 1800133a0 FUN_1800133a0 ===== */

void FUN_1800133a0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    FUN_180540530();
    *(undefined1 *)(param_3 + (longlong)param_1) = 0;
    return;
  }
  uVar1 = param_3 | 0xf;
  uVar3 = 0x7fffffffffffffff;
  if ((uVar1 < 0x8000000000000000) && (uVar3 = uVar1, uVar1 < 0x16)) {
    uVar3 = 0x16;
  }
  lVar2 = FUN_18000fb70(uVar3 + 1);
  *param_1 = lVar2;
  param_1[2] = param_3;
  param_1[3] = uVar3;
  FUN_180540530(lVar2,param_2,param_3);
  *(undefined1 *)(lVar2 + param_3) = 0;
  return;
}



/* ===== 180013450 FUN_180013450 ===== */

undefined8 FUN_180013450(undefined8 param_1)

{
  FUN_180540530();
  return param_1;
}



/* ===== 180013470 FUN_180013470 ===== */

void FUN_180013470(undefined8 param_1,longlong *param_2)

{
  *param_2 = *param_2 + 1;
  FUN_18000fb70(*param_2);
  *param_2 = *param_2 + -1;
  return;
}



/* ===== 180013490 thunk_FUN_180540530 ===== */

void thunk_FUN_180540530(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [32];
  undefined1 (*pauVar24) [32];
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined1 (*pauVar27) [32];
  undefined1 (*pauVar28) [32];
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar7 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar7 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    *(undefined1 *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(undefined2 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    *(undefined1 *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar26;
    uVar12 = puVar26[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    param_1 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *param_1 = uVar11;
    param_1[1] = uVar12;
    return;
  }
  puVar26 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar26 = param_1;
  }
  if (param_1 < puVar26) {
    uVar10 = *param_2;
    uVar11 = param_2[1];
    lVar30 = (longlong)param_2 - (longlong)param_1;
    puVar26 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
    uVar12 = *puVar26;
    uVar13 = puVar26[1];
    puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    uVar29 = param_3 - 0x10;
    puVar26 = puVar25;
    uVar32 = uVar12;
    uVar33 = uVar13;
    if (((ulonglong)puVar25 & 0xf) != 0) {
      puVar26 = (undefined8 *)((ulonglong)puVar25 & 0xfffffffffffffff0);
      uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
      *puVar25 = uVar12;
      *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
      uVar29 = (longlong)puVar26 - (longlong)param_1;
    }
    uVar31 = uVar29 >> 7;
    if (uVar31 != 0) {
      *puVar26 = uVar32;
      puVar26[1] = uVar33;
      puVar25 = puVar26;
      while( true ) {
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x10);
        uVar12 = puVar1[1];
        puVar26 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x20);
        uVar13 = *puVar26;
        uVar32 = puVar26[1];
        puVar26 = puVar25 + -0x10;
        puVar25[-2] = *puVar1;
        puVar25[-1] = uVar12;
        puVar25[-4] = uVar13;
        puVar25[-3] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x30);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x40);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        uVar31 = uVar31 - 1;
        puVar25[-6] = *puVar1;
        puVar25[-5] = uVar12;
        puVar25[-8] = uVar13;
        puVar25[-7] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x50);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x60);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        puVar25[-10] = *puVar1;
        puVar25[-9] = uVar12;
        puVar25[-0xc] = uVar13;
        puVar25[-0xb] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x70);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
        uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
        if (uVar31 == 0) break;
        puVar25[-0xe] = uVar12;
        puVar25[-0xd] = uVar13;
        *puVar26 = uVar32;
        puVar25[-0xf] = uVar33;
        puVar25 = puVar26;
      }
      puVar25[-0xe] = uVar12;
      puVar25[-0xd] = uVar13;
      uVar29 = uVar29 & 0x7f;
    }
    for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
      *puVar26 = uVar32;
      puVar26[1] = uVar33;
      puVar26 = puVar26 + -2;
      uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
    }
    if ((uVar29 & 0xf) != 0) {
      *param_1 = uVar10;
      param_1[1] = uVar11;
    }
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    return;
  }
  if (DAT_1809194c8 < 3) {
    if ((param_3 < 0x801) || (((byte)DAT_180c9f458 & 2) == 0)) {
      if (0x80 < param_3) {
        lVar30 = ((ulonglong)param_1 & 0xf) - 0x10;
        param_1 = (undefined8 *)((longlong)param_1 - lVar30);
        param_2 = (undefined8 *)((longlong)param_2 - lVar30);
        param_3 = param_3 + lVar30;
        if (0x80 < param_3) {
          do {
            uVar10 = param_2[1];
            uVar11 = param_2[2];
            uVar12 = param_2[3];
            uVar13 = param_2[4];
            uVar32 = param_2[5];
            uVar33 = param_2[6];
            uVar14 = param_2[7];
            *param_1 = *param_2;
            param_1[1] = uVar10;
            param_1[2] = uVar11;
            param_1[3] = uVar12;
            param_1[4] = uVar13;
            param_1[5] = uVar32;
            param_1[6] = uVar33;
            param_1[7] = uVar14;
            uVar10 = param_2[9];
            uVar11 = param_2[10];
            uVar12 = param_2[0xb];
            uVar13 = param_2[0xc];
            uVar32 = param_2[0xd];
            uVar33 = param_2[0xe];
            uVar14 = param_2[0xf];
            param_1[8] = param_2[8];
            param_1[9] = uVar10;
            param_1[10] = uVar11;
            param_1[0xb] = uVar12;
            param_1[0xc] = uVar13;
            param_1[0xd] = uVar32;
            param_1[0xe] = uVar33;
            param_1[0xf] = uVar14;
            param_1 = param_1 + 0x10;
            param_2 = param_2 + 0x10;
            param_3 = param_3 - 0x80;
          } while (0x7f < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000180540a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)*(uint *)(&DAT_1808aec58 + (param_3 + 0xf >> 4) * 4) + 0x180000000))();
      return;
    }
FUN_180540520:
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  if ((0x2000 < param_3) && (param_3 < 0x180001)) {
    puVar26 = param_1 + 8;
    if (param_2 < param_1) {
      puVar26 = param_2;
    }
    if ((puVar26 <= param_2) && (((byte)DAT_180c9f458 & 2) != 0)) goto FUN_180540520;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  uVar12 = param_2[2];
  uVar13 = param_2[3];
  puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
  uVar32 = *puVar26;
  uVar33 = puVar26[1];
  uVar14 = puVar26[2];
  uVar15 = puVar26[3];
  if (0x100 < param_3) {
    lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
    pauVar27 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
    param_3 = param_3 + lVar30;
    if (0x100 < param_3) {
      if (0x180000 < param_3) {
        do {
          uVar29 = param_3;
          pauVar28 = pauVar27;
          pauVar24 = pauVar23;
          auVar3 = pauVar28[1];
          auVar4 = pauVar28[2];
          auVar5 = pauVar28[3];
          auVar6 = vmovntdq_avx(*pauVar28);
          *pauVar24 = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[1] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[2] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[3] = auVar3;
          auVar3 = pauVar28[5];
          auVar4 = pauVar28[6];
          auVar5 = pauVar28[7];
          auVar6 = vmovntdq_avx(pauVar28[4]);
          pauVar24[4] = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[5] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[6] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[7] = auVar3;
          pauVar23 = pauVar24 + 8;
          pauVar27 = pauVar28 + 8;
          param_3 = uVar29 - 0x100;
        } while (0xff < uVar29 - 0x100);
        uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar29) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar28 + uVar31));
          *(undefined1 (*) [32])(*pauVar24 + uVar31) = auVar3;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[1] + uVar31));
          *(undefined1 (*) [32])(pauVar24[1] + uVar31) = auVar3;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[2] + uVar31));
          *(undefined1 (*) [32])(pauVar24[2] + uVar31) = auVar3;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[3] + uVar31));
          *(undefined1 (*) [32])(pauVar24[3] + uVar31) = auVar3;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[4] + uVar31));
          *(undefined1 (*) [32])(pauVar24[4] + uVar31) = auVar3;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[5] + uVar31));
          *(undefined1 (*) [32])(pauVar24[5] + uVar31) = auVar3;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[6] + uVar31));
          *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
        default:
          puVar26 = (undefined8 *)(pauVar24[-1] + uVar29);
          *puVar26 = uVar32;
          puVar26[1] = uVar33;
          puVar26[2] = uVar14;
          puVar26[3] = uVar15;
        case 0x100:
          *param_1 = uVar10;
          param_1[1] = uVar11;
          param_1[2] = uVar12;
          param_1[3] = uVar13;
          return;
        }
      }
      do {
        uVar10 = *(undefined8 *)(*pauVar27 + 8);
        uVar11 = *(undefined8 *)(*pauVar27 + 0x10);
        uVar12 = *(undefined8 *)(*pauVar27 + 0x18);
        uVar13 = *(undefined8 *)pauVar27[1];
        uVar32 = *(undefined8 *)(pauVar27[1] + 8);
        uVar33 = *(undefined8 *)(pauVar27[1] + 0x10);
        uVar14 = *(undefined8 *)(pauVar27[1] + 0x18);
        uVar15 = *(undefined8 *)pauVar27[2];
        uVar16 = *(undefined8 *)(pauVar27[2] + 8);
        uVar17 = *(undefined8 *)(pauVar27[2] + 0x10);
        uVar18 = *(undefined8 *)(pauVar27[2] + 0x18);
        uVar19 = *(undefined8 *)pauVar27[3];
        uVar20 = *(undefined8 *)(pauVar27[3] + 8);
        uVar21 = *(undefined8 *)(pauVar27[3] + 0x10);
        uVar22 = *(undefined8 *)(pauVar27[3] + 0x18);
        *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar27;
        *(undefined8 *)(*pauVar23 + 8) = uVar10;
        *(undefined8 *)(*pauVar23 + 0x10) = uVar11;
        *(undefined8 *)(*pauVar23 + 0x18) = uVar12;
        *(undefined8 *)pauVar23[1] = uVar13;
        *(undefined8 *)(pauVar23[1] + 8) = uVar32;
        *(undefined8 *)(pauVar23[1] + 0x10) = uVar33;
        *(undefined8 *)(pauVar23[1] + 0x18) = uVar14;
        *(undefined8 *)pauVar23[2] = uVar15;
        *(undefined8 *)(pauVar23[2] + 8) = uVar16;
        *(undefined8 *)(pauVar23[2] + 0x10) = uVar17;
        *(undefined8 *)(pauVar23[2] + 0x18) = uVar18;
        *(undefined8 *)pauVar23[3] = uVar19;
        *(undefined8 *)(pauVar23[3] + 8) = uVar20;
        *(undefined8 *)(pauVar23[3] + 0x10) = uVar21;
        *(undefined8 *)(pauVar23[3] + 0x18) = uVar22;
        uVar10 = *(undefined8 *)(pauVar27[4] + 8);
        uVar11 = *(undefined8 *)(pauVar27[4] + 0x10);
        uVar12 = *(undefined8 *)(pauVar27[4] + 0x18);
        uVar13 = *(undefined8 *)pauVar27[5];
        uVar32 = *(undefined8 *)(pauVar27[5] + 8);
        uVar33 = *(undefined8 *)(pauVar27[5] + 0x10);
        uVar14 = *(undefined8 *)(pauVar27[5] + 0x18);
        uVar15 = *(undefined8 *)pauVar27[6];
        uVar16 = *(undefined8 *)(pauVar27[6] + 8);
        uVar17 = *(undefined8 *)(pauVar27[6] + 0x10);
        uVar18 = *(undefined8 *)(pauVar27[6] + 0x18);
        uVar19 = *(undefined8 *)pauVar27[7];
        uVar20 = *(undefined8 *)(pauVar27[7] + 8);
        uVar21 = *(undefined8 *)(pauVar27[7] + 0x10);
        uVar22 = *(undefined8 *)(pauVar27[7] + 0x18);
        *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar27[4];
        *(undefined8 *)(pauVar23[4] + 8) = uVar10;
        *(undefined8 *)(pauVar23[4] + 0x10) = uVar11;
        *(undefined8 *)(pauVar23[4] + 0x18) = uVar12;
        *(undefined8 *)pauVar23[5] = uVar13;
        *(undefined8 *)(pauVar23[5] + 8) = uVar32;
        *(undefined8 *)(pauVar23[5] + 0x10) = uVar33;
        *(undefined8 *)(pauVar23[5] + 0x18) = uVar14;
        *(undefined8 *)pauVar23[6] = uVar15;
        *(undefined8 *)(pauVar23[6] + 8) = uVar16;
        *(undefined8 *)(pauVar23[6] + 0x10) = uVar17;
        *(undefined8 *)(pauVar23[6] + 0x18) = uVar18;
        *(undefined8 *)pauVar23[7] = uVar19;
        *(undefined8 *)(pauVar23[7] + 8) = uVar20;
        *(undefined8 *)(pauVar23[7] + 0x10) = uVar21;
        *(undefined8 *)(pauVar23[7] + 0x18) = uVar22;
        pauVar23 = pauVar23 + 8;
        pauVar27 = pauVar27 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001805407b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulonglong)*(uint *)(&DAT_1808aec10 + (param_3 + 0x1f >> 5) * 4) + 0x180000000))();
  return;
}



/* ===== 1800134a0 FUN_1800134a0 ===== */

ulonglong * FUN_1800134a0(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar4 = param_1[3];
  uVar5 = param_1[2];
  if (param_3 <= uVar4 - uVar5) {
    param_1[2] = uVar5 + param_3;
    if (uVar4 < 0x10) {
      puVar7 = param_1;
    }
    else {
      puVar7 = (ulonglong *)*param_1;
    }
    FUN_180540530((longlong)puVar7 + uVar5);
    *(undefined1 *)((longlong)puVar7 + uVar5 + param_3) = 0;
    return param_1;
  }
  if (0x7fffffffffffffff - uVar5 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  uVar8 = uVar5 + param_3 | 0xf;
  uVar9 = 0x7fffffffffffffff;
  if (((uVar8 < 0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) &&
     (uVar2 = (uVar4 >> 1) + uVar4, uVar9 = uVar8, uVar8 < uVar2)) {
    uVar9 = uVar2;
  }
  uVar8 = FUN_18000fb70(uVar9 + 1);
  param_1[2] = uVar5 + param_3;
  param_1[3] = uVar9;
  lVar3 = uVar8 + uVar5;
  if (uVar4 < 0x10) {
    FUN_180540530(uVar8,param_1,uVar5);
    FUN_180540530(lVar3,param_2,param_3);
    *(undefined1 *)(lVar3 + param_3) = 0;
  }
  else {
    uVar9 = *param_1;
    FUN_180540530(uVar8,uVar9,uVar5);
    FUN_180540530(lVar3,param_2,param_3);
    puVar10 = auStack_48;
    *(undefined1 *)(lVar3 + param_3) = 0;
    if (0xfff < uVar4 + 1) {
      plVar1 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar1) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_1803d64e0(*plVar1,uVar4 + 0x28);
        goto LAB_1800135e0;
      }
      pcVar6 = (code *)swi(0x29);
      (*pcVar6)(5);
      puVar10 = auStack_40;
    }
    *(undefined8 *)(puVar10 + -8) = 0x1800135c3;
    thunk_FUN_1803d64e0(uVar9);
  }
LAB_1800135e0:
  *param_1 = uVar8;
  return param_1;
}



/* ===== 180013610 std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Calculate_growth ===== */

/* Library Function - Single Match
    private: static unsigned __int64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::_Calculate_growth(unsigned __int64,unsigned
   __int64,unsigned __int64)
   
   Library: Visual Studio 2019 Release */

__uint64 __cdecl
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Calculate_growth
          (__uint64 param_1,__uint64 param_2,__uint64 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 | 0xf;
  if ((param_3 < uVar2) || (param_3 - (param_2 >> 1) < param_2)) {
    return param_3;
  }
  uVar1 = (param_2 >> 1) + param_2;
  if (uVar2 < uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* ===== 180013640 FUN_180013640 ===== */

undefined * FUN_180013640(void)

{
  return &DAT_180c9ffe8;
}



/* ===== 180013650 FUN_180013650 ===== */

undefined * FUN_180013650(void)

{
  return &DAT_180c9fff0;
}



/* ===== 180013660 vsnprintf ===== */

int __cdecl vsnprintf(char *_DstBuf,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  ulonglong *puVar2;
  
                    /* 0x13660  160  vsnprintf */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2 | 2,_DstBuf,_MaxCount,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1800136b0 snprintf ===== */

int snprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  
                    /* 0x136b0  139  snprintf */
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2 | 2,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 180013710 _vsscanf_l ===== */

void _vsscanf_l(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
                    /* 0x13710  104  _vsscanf_l */
  puVar1 = (undefined8 *)FUN_180013650();
  FUN_18050fa44(*puVar1,param_1,0xffffffffffffffff,param_2,param_3,param_4);
  return;
}



/* ===== 180013760 sscanf ===== */

int __cdecl sscanf(char *_Src,char *_Format,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x13760  142  sscanf */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013650();
  iVar2 = FUN_18050fa44(*puVar1,_Src,0xffffffffffffffff,_Format,0,&local_res18);
  return iVar2;
}



/* ===== 1800137c0 FUN_1800137c0 ===== */

undefined8 * FUN_1800137c0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}



/* ===== 180013800 FUN_180013800 ===== */

undefined8 FUN_180013800(undefined4 *param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 2) + 0x10))(*(longlong **)(param_1 + 2),param_2,*param_1);
  return param_2;
}



/* ===== 180013820 FUN_180013820 ===== */

undefined4 * FUN_180013820(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



/* ===== 180013830 FUN_180013830 ===== */

undefined8 FUN_180013830(longlong *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined1 local_18 [16];
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))(param_1,local_18,param_2);
  if ((*(longlong *)(*(longlong *)(piVar1 + 2) + 8) == *(longlong *)(*(longlong *)(param_3 + 2) + 8)
      ) && (*piVar1 == *param_3)) {
    return 1;
  }
  return 0;
}



/* ===== 180013870 FUN_180013870 ===== */

longlong FUN_180013870(longlong param_1,int *param_2,int param_3)

{
  uint7 uVar1;
  
  uVar1 = (uint7)((ulonglong)*(longlong *)(param_2 + 2) >> 8);
  if ((*(longlong *)(param_1 + 8) == *(longlong *)(*(longlong *)(param_2 + 2) + 8)) &&
     (*param_2 == param_3)) {
    return CONCAT71(uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}



/* ===== 180013890 FUN_180013890 ===== */

undefined4 * FUN_180013890(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_18091a148;
  return param_1;
}



/* ===== 1800138b0 FUN_1800138b0 ===== */

undefined8 * FUN_1800138b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  FUN_1804ef0e0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x28);
  }
  return param_1;
}



/* ===== 180013900 FUN_180013900 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ** FUN_180013900(undefined8 **param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 ***local_58;
  undefined1 local_50;
  undefined8 ***local_48 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_78;
  plVar3 = *(longlong **)(param_2 + 2);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_58 = (undefined8 ***)param_1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_48,uVar1);
  *param_1 = std::exception::vftable;
  local_50 = 1;
  local_58 = local_48;
  if (0xf < local_30) {
    local_58 = local_48[0];
  }
  param_1[1] = (undefined8 *)0x0;
  param_1[2] = (undefined8 *)0x0;
  FUN_1804ef040(&local_58);
  *param_1 = std::runtime_error::vftable;
  FUN_18000f890(local_48);
  *(undefined4 *)(param_1 + 3) = uVar1;
  *param_1 = std::system_error::vftable;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  param_1[4] = plVar3;
  return param_1;
}



/* ===== 1800139d0 FUN_1800139d0 ===== */

void FUN_1800139d0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [56];
  
  puVar1 = (undefined4 *)FUN_180013890(local_48,param_1);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  FUN_180013900(local_38,&local_58);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_38,&DAT_180915d80);
}



/* ===== 180013a10 FUN_180013a10 ===== */

undefined8 * FUN_180013a10(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = std::system_error::vftable;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* ===== 180013a70 FUN_180013a70 ===== */

undefined8 * FUN_180013a70(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  return param_1;
}



/* ===== 180013ad0 FUN_180013ad0 ===== */

char * FUN_180013ad0(void)

{
  return "generic";
}



/* ===== 180013ae0 FUN_180013ae0 ===== */

undefined8 * FUN_180013ae0(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (char *)FUN_1804ea440(param_3);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  sVar1 = strlen(_Str);
  FUN_1800133a0(param_2,_Str,sVar1);
  return param_2;
}



/* ===== 180013b40 FUN_180013b40 ===== */

undefined8 FUN_180013b40(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x10);
  }
  return param_1;
}



/* ===== 180013b70 FUN_180013b70 ===== */

char * FUN_180013b70(void)

{
  return "system";
}



/* ===== 180013b80 FUN_180013b80 ===== */

undefined8 * FUN_180013b80(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  char *pcVar1;
  longlong lVar2;
  char *local_20;
  longlong local_18;
  
  local_20 = (char *)0x0;
  local_18 = FUN_1804e6020(param_3,&local_20);
  if ((local_20 == (char *)0x0) || (local_18 == 0)) {
    lVar2 = 0xd;
    pcVar1 = "unknown error";
  }
  else {
    pcVar1 = local_20;
    lVar2 = local_18;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_1800133a0(param_2,pcVar1,lVar2);
  LocalFree(local_20);
  return param_2;
}



/* ===== 180013c00 FUN_180013c00 ===== */

int * FUN_180013c00(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    *param_2 = 0;
    *(undefined ***)(param_2 + 2) = &PTR_vftable_18091a148;
    return param_2;
  }
  iVar1 = FUN_1804ea470(param_3);
  if (iVar1 == 0) {
    *param_2 = param_3;
    *(undefined ***)(param_2 + 2) = &PTR_vftable_18091a158;
    return param_2;
  }
  *param_2 = iVar1;
  *(undefined ***)(param_2 + 2) = &PTR_vftable_18091a148;
  return param_2;
}



/* ===== 180013c80 FUN_180013c80 ===== */

undefined ** FUN_180013c80(void)

{
  return &PTR_vftable_18091a148;
}



/* ===== 180013c90 FUN_180013c90 ===== */

undefined4 * FUN_180013c90(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_18091a158;
  return param_1;
}



/* ===== 180013cb0 FUN_180013cb0 ===== */

void FUN_180013cb0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [56];
  
  puVar1 = (undefined4 *)FUN_180013c90(local_48,param_1);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  FUN_180013900(local_38,&local_58);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_38,&DAT_180915d80);
}



/* ===== 180013d00 FUN_180013d00 ===== */

void FUN_180013d00(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  LOCK();
  plVar1 = param_1 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)*param_1)();
    LOCK();
    piVar2 = (int *)((longlong)param_1 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return;
}



/* ===== 180013d50 FUN_180013d50 ===== */

undefined8 FUN_180013d50(void)

{
  return 0;
}



/* ===== 180013d60 FUN_180013d60 ===== */

undefined8 * FUN_180013d60(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int extraout_var;
  undefined8 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  uVar1 = param_3[1];
  if (uVar1 != 0) {
    if (0x7fffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800139d0(0x16);
    }
    uVar2 = *param_3;
    uVar3 = FUN_1804e5030(param_2,uVar2,uVar1 & 0xffffffff,0,0);
    if ((int)(uVar3 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013cb0(uVar3 >> 0x20);
    }
    FUN_1800246c0(param_1,(longlong)(int)uVar3,0);
    if ((ulonglong)param_1[3] < 8) {
      puVar4 = param_1;
    }
    else {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1804e5030(param_2,uVar2,uVar1 & 0xffffffff,puVar4,(int)uVar3);
    if (extraout_var != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013cb0(extraout_var);
    }
  }
  return param_1;
}



/* ===== 180013e50 FUN_180013e50 ===== */

uint * FUN_180013e50(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_2 - (longlong)param_1 >> 1;
  if (1 < lVar4) {
    uVar2 = *param_1;
    if ((uVar2 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      return param_1 + 1;
    }
    if (((short)uVar2 == 0x5c) || ((short)uVar2 == 0x2f)) {
      sVar3 = (short)(uVar2 >> 0x10);
      if (lVar4 < 4) {
        if (lVar4 < 3) {
          return param_1;
        }
      }
      else {
        puVar1 = (uint *)((longlong)param_1 + 6);
        if (((*(short *)((longlong)param_1 + 6) == 0x5c) ||
            (*(short *)((longlong)param_1 + 6) == 0x2f)) &&
           (((longlong)param_2 - (longlong)param_1 == 8 ||
            (((short)param_1[2] != 0x5c && ((short)param_1[2] != 0x2f)))))) {
          sVar3 = *(short *)((longlong)param_1 + 2);
          if ((sVar3 == 0x5c) || (sVar3 == 0x2f)) {
            if ((short)param_1[1] == 0x3f) {
              return puVar1;
            }
            if ((short)param_1[1] == 0x2e) {
              return puVar1;
            }
          }
          if (sVar3 == 0x3f) {
            if ((short)param_1[1] == 0x3f) {
              return puVar1;
            }
            return param_1;
          }
        }
      }
      if ((((sVar3 == 0x5c) || (sVar3 == 0x2f)) && ((short)param_1[1] != 0x5c)) &&
         ((short)param_1[1] != 0x2f)) {
        param_1 = (uint *)((longlong)param_1 + 6);
        if (param_1 == param_2) {
          return param_1;
        }
        while( true ) {
          if ((short)*param_1 == 0x5c) {
            return param_1;
          }
          if ((short)*param_1 == 0x2f) break;
          param_1 = (uint *)((longlong)param_1 + 2);
          if (param_1 == param_2) {
            return param_1;
          }
        }
        return param_1;
      }
    }
  }
  return param_1;
}



/* ===== 180013f60 FUN_180013f60 ===== */

longlong * FUN_180013f60(longlong *param_1,longlong *param_2)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  cVar2 = FUN_1800144e0(param_2);
  if (cVar2 != '\0') {
LAB_18001405c:
    if (param_1 == param_2) {
      return param_1;
    }
    if ((ulonglong)param_2[3] < 8) {
      FUN_1800277d0(param_1,param_2,param_2[2]);
      return param_1;
    }
    FUN_1800277d0(param_1,*param_2,param_2[2]);
    return param_1;
  }
  if ((ulonglong)param_1[3] < 8) {
    plVar9 = param_1;
  }
  else {
    plVar9 = (longlong *)*param_1;
  }
  psVar1 = (short *)((longlong)plVar9 + param_1[2] * 2);
  plVar11 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    plVar11 = (longlong *)*param_2;
  }
  plVar6 = (longlong *)(param_2[2] * 2 + (longlong)plVar11);
  psVar4 = (short *)FUN_180013e50(plVar9,psVar1);
  plVar5 = (longlong *)FUN_180013e50(plVar11,plVar6);
  uVar12 = (longlong)psVar4 - (longlong)plVar9;
  uVar7 = (longlong)uVar12 >> 1;
  if (plVar11 != plVar5) {
    uVar10 = (longlong)plVar5 - (longlong)plVar11 >> 1;
    uVar8 = uVar7;
    if (uVar10 < uVar7) {
      uVar8 = uVar10;
    }
    iVar3 = FUN_180028bc0(plVar9,plVar11,uVar8);
    if (((iVar3 != 0) || (uVar7 < uVar10)) || (uVar10 < uVar7)) goto LAB_18001405c;
  }
  if ((plVar5 == plVar6) || (((short)*plVar5 != 0x5c && ((short)*plVar5 != 0x2f)))) {
    if (psVar4 == psVar1) {
      if ((longlong)uVar12 < 6) goto LAB_1800140c4;
    }
    else if ((psVar1[-1] == 0x5c) || (psVar1[-1] == 0x2f)) goto LAB_1800140c4;
    FUN_180024750(param_1,0x5c);
  }
  else {
    if ((ulonglong)param_1[2] < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18002a1a0();
    }
    param_1[2] = uVar7;
    if ((ulonglong)param_1[3] < 8) {
      *(undefined2 *)((uVar12 & 0xfffffffffffffffe) + (longlong)param_1) = 0;
    }
    else {
      *(undefined2 *)((uVar12 & 0xfffffffffffffffe) + *param_1) = 0;
    }
  }
LAB_1800140c4:
  FUN_180025260(param_1,plVar5,(longlong)plVar6 - (longlong)plVar5 >> 1);
  return param_1;
}



/* ===== 180014100 FUN_180014100 ===== */

undefined8 FUN_180014100(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *local_18;
  undefined8 local_10;
  
  if ((ulonglong)param_1[3] < 8) {
    local_18 = param_1;
  }
  else {
    local_18 = (undefined8 *)*param_1;
  }
  local_10 = param_1[2];
  FUN_180024c20(param_2,&local_18);
  return param_2;
}



/* ===== 180014140 FUN_180014140 ===== */

int FUN_180014140(undefined8 *param_1,longlong *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ushort *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  if ((ulonglong)param_1[3] < 8) {
    puVar12 = param_1;
  }
  else {
    puVar12 = (undefined8 *)*param_1;
  }
  puVar1 = (ushort *)((longlong)puVar12 + param_1[2] * 2);
  puVar8 = (ushort *)FUN_180013e50(puVar12,puVar1);
  lVar15 = *param_2;
  puVar2 = (ushort *)(lVar15 + param_2[1] * 2);
  puVar9 = (ushort *)FUN_180013e50(lVar15,puVar2);
  uVar16 = (longlong)puVar9 - lVar15 >> 1;
  uVar11 = (longlong)puVar8 - (longlong)puVar12 >> 1;
  uVar13 = uVar11;
  if (uVar16 < uVar11) {
    uVar13 = uVar16;
  }
  iVar6 = FUN_180028bc0(puVar12,lVar15,uVar13);
  if (iVar6 == 0) {
    if (uVar11 < uVar16) {
      return -1;
    }
    puVar10 = puVar8;
    if (uVar11 <= uVar16) {
      for (; (puVar14 = puVar9, puVar10 != puVar1 && ((*puVar10 == 0x5c || (*puVar10 == 0x2f))));
          puVar10 = puVar10 + 1) {
      }
      for (; (puVar14 != puVar2 && ((*puVar14 == 0x5c || (*puVar14 == 0x2f))));
          puVar14 = puVar14 + 1) {
      }
      iVar6 = (uint)(puVar8 != puVar10) - (uint)(puVar9 != puVar14);
      if (iVar6 == 0) {
        iVar6 = (uint)(puVar14 == puVar2) - (uint)(puVar10 == puVar1);
        while ((puVar10 != puVar1 && (iVar6 == 0))) {
          uVar3 = *puVar10;
          if ((uVar3 == 0x5c) || (uVar3 == 0x2f)) {
            bVar5 = true;
            iVar6 = 1;
          }
          else {
            bVar5 = false;
            iVar6 = 0;
          }
          uVar4 = *puVar14;
          if ((uVar4 == 0x5c) || (uVar4 == 0x2f)) {
            iVar7 = 1;
          }
          else {
            iVar7 = 0;
          }
          if (iVar7 - iVar6 != 0) {
            return iVar7 - iVar6;
          }
          if (bVar5) {
            do {
              puVar10 = puVar10 + 1;
              if (puVar10 == puVar1) break;
            } while ((*puVar10 == 0x5c) || (*puVar10 == 0x2f));
            do {
              puVar14 = puVar14 + 1;
              if (puVar14 == puVar2) break;
            } while ((*puVar14 == 0x5c) || (*puVar14 == 0x2f));
          }
          else {
            if ((uint)uVar3 - (uint)uVar4 != 0) {
              return (uint)uVar3 - (uint)uVar4;
            }
            puVar10 = puVar10 + 1;
            puVar14 = puVar14 + 1;
          }
          iVar6 = (uint)(puVar14 == puVar2) - (uint)(puVar10 == puVar1);
        }
      }
      return iVar6;
    }
    iVar6 = 1;
  }
  return iVar6;
}



/* ===== 180014350 FUN_180014350 ===== */

undefined8 * FUN_180014350(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  undefined8 *puVar4;
  
  if ((ulonglong)param_1[3] < 8) {
    puVar4 = param_1;
  }
  else {
    puVar4 = (undefined8 *)*param_1;
  }
  psVar2 = (short *)((longlong)puVar4 + param_1[2] * 2);
  for (psVar1 = (short *)FUN_180013e50(puVar4); psVar1 != psVar2; psVar1 = psVar1 + 1) {
    if ((*psVar1 != 0x5c) && (psVar3 = psVar2, *psVar1 != 0x2f)) goto LAB_1800143a0;
  }
  goto LAB_1800143ef;
  while (psVar3 = psVar2, psVar1 != psVar2) {
LAB_1800143a0:
    psVar2 = psVar3 + -1;
    if ((psVar3[-1] == 0x5c) || (psVar3[-1] == 0x2f)) goto joined_r0x0001800143c4;
  }
  goto LAB_1800143ef;
  while( true ) {
    psVar3 = psVar2 + -1;
    if ((psVar2[-1] != 0x5c) && (psVar2[-1] != 0x2f)) break;
joined_r0x0001800143c4:
    psVar2 = psVar3;
    if (psVar1 == psVar2) break;
  }
LAB_1800143ef:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_180024d40(param_2,puVar4,(longlong)psVar2 - (longlong)puVar4 >> 1);
  return param_2;
}



/* ===== 180014430 FUN_180014430 ===== */

undefined8 * FUN_180014430(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  undefined8 *puVar4;
  short *psVar5;
  
  if ((ulonglong)param_1[3] < 8) {
    puVar4 = param_1;
  }
  else {
    puVar4 = (undefined8 *)*param_1;
  }
  psVar2 = (short *)((longlong)puVar4 + param_1[2] * 2);
  psVar5 = psVar2;
  for (psVar3 = (short *)FUN_180013e50(puVar4,psVar2); psVar3 != psVar2; psVar3 = psVar3 + 1) {
    if ((*psVar3 != 0x5c) && (*psVar3 != 0x2f)) goto LAB_180014481;
  }
LAB_18001449e:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_180024d40(param_2,psVar5,(longlong)psVar2 - (longlong)psVar5 >> 1);
  return param_2;
LAB_180014481:
  psVar1 = psVar5 + -1;
  if (psVar5[-1] == 0x5c) goto LAB_18001449e;
  if ((psVar5[-1] == 0x2f) || (psVar5 = psVar1, psVar3 == psVar1)) goto LAB_18001449e;
  goto LAB_180014481;
}



/* ===== 1800144e0 FUN_1800144e0 ===== */

bool FUN_1800144e0(uint *param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  
  if (*(ulonglong *)(param_1 + 6) < 8) {
    puVar3 = param_1;
  }
  else {
    puVar3 = *(uint **)param_1;
  }
  lVar2 = *(longlong *)(param_1 + 4) * 2 >> 1;
  if ((lVar2 < 2) || (0x19 < (*puVar3 & 0xffffffdf) - 0x3a0041)) {
    puVar1 = (uint *)FUN_180013e50(puVar3,*(longlong *)(param_1 + 4) * 2 + (longlong)puVar3);
    return puVar3 != puVar1;
  }
  if (2 < lVar2) {
    if (((short)puVar3[1] == 0x5c) || ((short)puVar3[1] == 0x2f)) {
      return true;
    }
  }
  return false;
}



/* ===== 180014560 FUN_180014560 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180014560(short *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  undefined8 *puVar7;
  short *psVar8;
  undefined8 *puVar9;
  char cVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  short *psVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  char local_a8;
  undefined8 *local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  short *local_88;
  undefined8 *local_80;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 8);
  if (*plVar1 == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
    return param_2;
  }
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(short **)param_1;
  }
  psVar13 = param_1 + *plVar1;
  local_88 = psVar13;
  local_80 = param_2;
  local_70 = param_2;
  psVar5 = (short *)FUN_180013e50(param_1,psVar13);
  local_68 = (short *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if (param_1 == psVar5) {
    local_58 = 0;
    uStack_50 = 7;
    local_68 = (short *)0x0;
  }
  else {
    FUN_180024d40(&local_68,param_1,(longlong)psVar5 - (longlong)param_1 >> 1);
  }
  psVar6 = (short *)&local_68;
  if (7 < uStack_50) {
    psVar6 = local_68;
  }
  psVar6 = psVar6 + local_58;
  psVar8 = (short *)&local_68;
  if (7 < uStack_50) {
    psVar8 = local_68;
  }
  for (; psVar8 != psVar6; psVar8 = psVar8 + 1) {
    if (*psVar8 == 0x2f) {
      *psVar8 = 0x5c;
    }
  }
  local_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)FUN_18000fb70(0x130);
  FUN_180540530(puVar7,local_a0,(longlong)puStack_98 - (longlong)local_a0);
  if (local_a0 == (undefined8 *)0x0) {
LAB_1800146d0:
    uVar15 = uStack_50;
    uVar14 = local_58;
    puVar19 = auStack_c8;
    local_90 = puVar7 + 0x26;
    cVar10 = '\0';
    local_a8 = '\0';
    local_a0 = puVar7;
    puStack_98 = puVar7;
    if (psVar5 != psVar13) {
      if ((*psVar5 == 0x5c) || (*psVar5 == 0x2f)) {
        if (local_58 < uStack_50) {
          psVar6 = (short *)&local_68;
          if (7 < uStack_50) {
            psVar6 = local_68;
          }
          psVar6 = psVar6 + local_58;
          local_58 = local_58 + 1;
          psVar6[0] = 0x5c;
          psVar6[1] = 0;
        }
        else {
          if (local_58 == 0x7ffffffffffffffe) goto LAB_180014f33;
          uVar22 = local_58 + 1;
          uVar16 = uVar22 | 7;
          if (uVar16 < 0x7fffffffffffffff) {
            if (0x7ffffffffffffffe - (uStack_50 >> 1) < uStack_50) {
              uVar16 = 0x7ffffffffffffffe;
              uVar12 = 0x7fffffffffffffff;
            }
            else {
              uVar12 = (uStack_50 >> 1) + uStack_50;
              if (uVar16 < uVar12) {
                uVar16 = uVar12;
              }
              uVar12 = uVar16 + 1;
              if (0x7fffffffffffffff < uVar12) {
LAB_180014f3f:
                    /* WARNING: Subroutine does not return */
                FUN_18000d840();
              }
            }
          }
          else {
            uVar16 = 0x7ffffffffffffffe;
            uVar12 = 0x7fffffffffffffff;
          }
          psVar8 = (short *)FUN_18000fb70(uVar12 * 2);
          psVar6 = local_68;
          local_58 = uVar22;
          uStack_50 = uVar16;
          if (uVar15 < 8) {
            FUN_180540530(psVar8,&local_68,uVar14 * 2);
            (psVar8 + uVar14)[0] = 0x5c;
            (psVar8 + uVar14)[1] = 0;
          }
          else {
            FUN_180540530(psVar8,local_68,uVar14 * 2);
            (psVar8 + uVar14)[0] = 0x5c;
            (psVar8 + uVar14)[1] = 0;
            if (uVar15 * 2 + 2 < 0x1000) {
              thunk_FUN_1803d64e0(psVar6);
            }
            else {
              if (0x1f < (ulonglong)((longlong)psVar6 + (-8 - *(longlong *)(psVar6 + -4))))
              goto LAB_180014f1e;
              thunk_FUN_1803d64e0(*(longlong *)(psVar6 + -4),uVar15 * 2 + 0x29);
            }
          }
          local_68 = psVar8;
        }
        cVar10 = '\x01';
        local_a8 = '\x01';
        do {
          psVar5 = psVar5 + 1;
          if (psVar5 == psVar13) {
            puVar7 = puStack_98;
            goto LAB_18001485c;
          }
        } while ((*psVar5 == 0x5c) || (*psVar5 == 0x2f));
      }
      puVar7 = puStack_98;
      local_a8 = cVar10;
      do {
        if ((*psVar5 == 0x5c) || (psVar6 = psVar5, *psVar5 == 0x2f)) {
          if ((local_a0 == puVar7) || (puVar7[-1] != 0)) {
            if (puVar7 == local_90) {
              uVar14 = (longlong)puVar7 - (longlong)local_a0;
              lVar23 = (longlong)uVar14 >> 4;
              if (lVar23 == 0xfffffffffffffff) goto LAB_180014f39;
              uVar22 = lVar23 + 1;
              uVar15 = (longlong)local_90 - (longlong)local_a0 >> 4;
              if (0xfffffffffffffff - (uVar15 >> 1) < uVar15) {
                uVar16 = 0xfffffffffffffff;
              }
              else {
                uVar15 = (uVar15 >> 1) + uVar15;
                uVar16 = uVar22;
                if (uVar22 <= uVar15) {
                  uVar16 = uVar15;
                }
                if (0xfffffffffffffff < uVar16) goto LAB_180014f3f;
              }
              puVar9 = (undefined8 *)FUN_18000fb70(uVar16 * 0x10);
              uVar14 = uVar14 & 0xfffffffffffffff0;
              *(undefined8 *)(uVar14 + (longlong)puVar9) = 0;
              *(undefined8 *)(uVar14 + 8 + (longlong)puVar9) = 0;
              if (puVar7 == puStack_98) {
                lVar23 = (longlong)puStack_98 - (longlong)local_a0;
                puVar11 = puVar9;
                puVar7 = local_a0;
              }
              else {
                FUN_180540530(puVar9,local_a0,(longlong)puVar7 - (longlong)local_a0);
                lVar23 = (longlong)puStack_98 - (longlong)puVar7;
                puVar11 = (undefined8 *)((longlong)puVar9 + uVar14 + 0x10);
              }
              FUN_180540530(puVar11,puVar7,lVar23);
              if (local_a0 != (undefined8 *)0x0) {
                uVar14 = (longlong)local_90 - (longlong)local_a0 & 0xfffffffffffffff0;
                puVar7 = local_a0;
                if (0xfff < uVar14) {
                  puVar7 = (undefined8 *)local_a0[-1];
                  if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)puVar7)))
                  goto LAB_180014f1e;
                  uVar14 = uVar14 + 0x27;
                }
                thunk_FUN_1803d64e0(puVar7,uVar14);
              }
              puVar7 = puVar9 + uVar22 * 2;
              local_90 = puVar9 + uVar16 * 2;
              psVar13 = local_88;
              local_a0 = puVar9;
            }
            else {
              *puVar7 = 0;
              puVar7[1] = 0;
              puVar7 = puStack_98 + 2;
            }
            puStack_98 = puVar7;
          }
          psVar6 = psVar5 + 1;
        }
        else {
          do {
            psVar6 = psVar6 + 1;
            if ((psVar6 == psVar13) || (*psVar6 == 0x5c)) break;
          } while (*psVar6 != 0x2f);
          lVar23 = (longlong)psVar6 - (longlong)psVar5 >> 1;
          if (puVar7 == local_90) {
            uVar14 = (longlong)puVar7 - (longlong)local_a0;
            lVar21 = (longlong)uVar14 >> 4;
            local_80 = puVar7;
            if (lVar21 == 0xfffffffffffffff) {
LAB_180014f39:
                    /* WARNING: Subroutine does not return */
              FUN_1800118d0();
            }
            uVar22 = lVar21 + 1;
            uVar15 = (longlong)local_90 - (longlong)local_a0 >> 4;
            if (0xfffffffffffffff - (uVar15 >> 1) < uVar15) {
              uVar16 = 0xfffffffffffffff;
            }
            else {
              uVar15 = (uVar15 >> 1) + uVar15;
              uVar16 = uVar22;
              if (uVar22 <= uVar15) {
                uVar16 = uVar15;
              }
              if (0xfffffffffffffff < uVar16) goto LAB_180014f3f;
            }
            puVar9 = (undefined8 *)FUN_18000fb70(uVar16 * 0x10);
            puVar7 = local_80;
            uVar14 = uVar14 & 0xfffffffffffffff0;
            *(short **)(uVar14 + (longlong)puVar9) = psVar5;
            *(longlong *)(uVar14 + 8 + (longlong)puVar9) = lVar23;
            if (local_80 == puStack_98) {
              lVar23 = (longlong)puStack_98 - (longlong)local_a0;
              puVar11 = puVar9;
              puVar7 = local_a0;
            }
            else {
              FUN_180540530(puVar9,local_a0,(longlong)local_80 - (longlong)local_a0);
              lVar23 = (longlong)puStack_98 - (longlong)puVar7;
              puVar11 = (undefined8 *)((longlong)puVar9 + uVar14 + 0x10);
            }
            FUN_180540530(puVar11,puVar7,lVar23);
            if (local_a0 != (undefined8 *)0x0) {
              uVar14 = (longlong)local_90 - (longlong)local_a0 & 0xfffffffffffffff0;
              puVar7 = local_a0;
              if (0xfff < uVar14) {
                puVar7 = (undefined8 *)local_a0[-1];
                if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)puVar7)))
                goto LAB_180014f1e;
                uVar14 = uVar14 + 0x27;
              }
              thunk_FUN_1803d64e0(puVar7,uVar14);
            }
            puVar7 = puVar9 + uVar22 * 2;
            local_90 = puVar9 + uVar16 * 2;
            psVar13 = local_88;
            local_a0 = puVar9;
            puStack_98 = puVar7;
          }
          else {
            *puVar7 = psVar5;
            puVar7[1] = lVar23;
            puVar7 = puStack_98 + 2;
            puStack_98 = puVar7;
          }
        }
        psVar5 = psVar6;
      } while (psVar6 != psVar13);
    }
LAB_18001485c:
    cVar10 = local_a8;
    puVar19 = auStack_c8;
    puVar17 = auStack_c8;
    puVar18 = auStack_c8;
    if (local_a0 == puVar7) {
LAB_180014c6e:
      puVar20 = puVar7;
    }
    else {
      puVar7 = local_a0;
      puVar9 = local_a0;
      do {
        puVar11 = puVar7 + 2;
        uVar2 = *puVar7;
        lVar23 = puVar7[1];
        puVar20 = puVar9;
        if (lVar23 == 1) {
          iVar4 = FUN_180028bc0(uVar2,&DAT_1806d2b54,1);
          if (iVar4 == 0) goto joined_r0x000180014bf2;
LAB_180014c27:
          puVar20 = puVar9 + 2;
          *puVar9 = uVar2;
          puVar9[1] = lVar23;
          if (puVar11 == puStack_98) break;
          puVar20 = puVar9 + 4;
        }
        else {
          if ((lVar23 != 2) || (iVar4 = FUN_180028bc0(uVar2,&DAT_1806d2b58,2), iVar4 != 0))
          goto LAB_180014c27;
          if ((puVar9 == local_a0) ||
             ((puVar9[-3] == 2 && (iVar4 = FUN_180028bc0(puVar9[-4],&DAT_1806d2b58), iVar4 == 0))))
          {
            if (cVar10 != '\0') goto joined_r0x000180014bf2;
            puVar20 = puVar9 + 2;
            *puVar9 = &DAT_1806d2b58;
            puVar9[1] = 2;
            if (puVar11 == puStack_98) break;
            puVar20 = puVar9 + 4;
          }
          else {
            puVar20 = puVar9 + -4;
joined_r0x000180014bf2:
            if (puVar11 == puStack_98) break;
          }
        }
        puVar7 = puVar7 + 4;
        puVar9 = puVar20;
      } while (puVar7 != puStack_98);
      puVar7 = puStack_98;
      if (puVar20 == puStack_98) goto LAB_180014c6e;
      puStack_98 = puVar20;
    }
    puVar7 = local_a0;
    uVar14 = local_58;
    uVar15 = uStack_50;
    if ((((0x1f < (ulonglong)((longlong)puVar20 - (longlong)local_a0)) && (puVar20[-1] == 0)) &&
        (puVar20[-3] == 2)) &&
       (iVar4 = FUN_180028bc0(puVar20[-4],&DAT_1806d2b58), puVar7 = local_a0, uVar14 = local_58,
       uVar15 = uStack_50, puVar20 = puStack_98, iVar4 == 0)) {
      puStack_98 = puStack_98 + -2;
      puVar20 = puStack_98;
    }
    for (; local_58 = uVar14, uStack_50 = uVar15, puVar7 != puVar20; puVar7 = puVar7 + 2) {
      if (puVar7[1] == 0) {
        if (uVar14 < uVar15) {
          local_58 = uVar14 + 1;
          psVar13 = (short *)&local_68;
          if (7 < uVar15) {
            psVar13 = local_68;
          }
          (psVar13 + uVar14)[0] = 0x5c;
          (psVar13 + uVar14)[1] = 0;
        }
        else {
          if (uVar14 == 0x7ffffffffffffffe) goto LAB_180014f33;
          uVar22 = uVar14 + 1;
          uVar16 = uVar22 | 7;
          if (uVar16 < 0x7fffffffffffffff) {
            if (0x7ffffffffffffffe - (uVar15 >> 1) < uVar15) {
              uVar16 = 0x7ffffffffffffffe;
              uVar12 = 0x7fffffffffffffff;
            }
            else {
              uVar12 = (uVar15 >> 1) + uVar15;
              if (uVar16 < uVar12) {
                uVar16 = uVar12;
              }
              uVar12 = uVar16 + 1;
              if (0x7fffffffffffffff < uVar12) goto LAB_180014f3f;
            }
          }
          else {
            uVar16 = 0x7ffffffffffffffe;
            uVar12 = 0x7fffffffffffffff;
          }
          psVar5 = (short *)FUN_18000fb70(uVar12 * 2);
          psVar13 = local_68;
          local_58 = uVar22;
          uStack_50 = uVar16;
          if (uVar15 < 8) {
            FUN_180540530(psVar5,&local_68,uVar14 * 2);
            (psVar5 + uVar14)[0] = 0x5c;
            (psVar5 + uVar14)[1] = 0;
            local_68 = psVar5;
          }
          else {
            FUN_180540530(psVar5,local_68,uVar14 * 2);
            (psVar5 + uVar14)[0] = 0x5c;
            (psVar5 + uVar14)[1] = 0;
            if (uVar15 * 2 + 2 < 0x1000) {
              thunk_FUN_1803d64e0(psVar13);
              local_68 = psVar5;
            }
            else {
              if (0x1f < (ulonglong)((longlong)psVar13 + (-8 - *(longlong *)(psVar13 + -4))))
              goto LAB_180014f1e;
              thunk_FUN_1803d64e0(*(longlong *)(psVar13 + -4),uVar15 * 2 + 0x29);
              local_68 = psVar5;
            }
          }
        }
      }
      else {
        FUN_180025260(&local_68,*puVar7);
      }
      uVar14 = local_58;
      uVar15 = uStack_50;
    }
    if (uVar14 == 0) {
      FUN_1800277d0(&local_68,&DAT_1806d2b54,1);
    }
    puVar7 = local_70;
    *(undefined4 *)local_70 = (undefined4)local_68;
    *(undefined4 *)((longlong)local_70 + 4) = local_68._4_4_;
    *(undefined4 *)(local_70 + 1) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)local_70 + 0xc) = uStack_60._4_4_;
    *(undefined4 *)(local_70 + 2) = (undefined4)local_58;
    *(undefined4 *)((longlong)local_70 + 0x14) = local_58._4_4_;
    *(undefined4 *)(local_70 + 3) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)local_70 + 0x1c) = uStack_50._4_4_;
    local_58 = 0;
    uStack_50 = 7;
    local_68 = (short *)((ulonglong)local_68 & 0xffffffffffff0000);
    if (local_a0 != (undefined8 *)0x0) {
      uVar14 = (longlong)local_90 - (longlong)local_a0 & 0xfffffffffffffff0;
      puVar9 = local_a0;
      if (0xfff < uVar14) {
        puVar9 = (undefined8 *)local_a0[-1];
        if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)puVar9))) goto LAB_180014f25;
        uVar14 = uVar14 + 0x27;
      }
      thunk_FUN_1803d64e0(puVar9,uVar14);
      local_a0 = (undefined8 *)0x0;
      puStack_98 = (undefined8 *)0x0;
      local_90 = (undefined8 *)0x0;
    }
    if (uStack_50 < 8) {
      return puVar7;
    }
    uVar14 = uStack_50 * 2 + 2;
    psVar13 = local_68;
    if (uVar14 < 0x1000) {
LAB_180014eef:
      thunk_FUN_1803d64e0(psVar13,uVar14);
      return puVar7;
    }
    psVar13 = *(short **)(local_68 + -4);
    if ((ulonglong)((longlong)local_68 + (-8 - (longlong)psVar13)) < 0x20) {
      uVar14 = uStack_50 * 2 + 0x29;
      goto LAB_180014eef;
    }
  }
  else {
    uVar14 = (longlong)local_90 - (longlong)local_a0 & 0xfffffffffffffff0;
    puVar9 = local_a0;
    if (uVar14 < 0x1000) {
LAB_1800146cb:
      thunk_FUN_1803d64e0(puVar9,uVar14);
      goto LAB_1800146d0;
    }
    puVar9 = (undefined8 *)local_a0[-1];
    if ((ulonglong)((longlong)local_a0 + (-8 - (longlong)puVar9)) < 0x20) {
      uVar14 = uVar14 + 0x27;
      goto LAB_1800146cb;
    }
LAB_180014f1e:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar17 = auStack_c0;
LAB_180014f25:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar18 = puVar17 + 8;
  }
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(5);
  puVar19 = puVar18 + 8;
LAB_180014f33:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar19 + -8) = &UNK_180014f38;
  FUN_180011990();
}



/* ===== 180014f50 FUN_180014f50 ===== */

undefined8 * FUN_180014f50(undefined8 *param_1,uint *param_2,uint *param_3)

{
  short sVar1;
  longlong lVar2;
  uint *local_38;
  longlong local_30;
  undefined1 local_28;
  uint *local_20;
  longlong local_18;
  
  local_18 = *(longlong *)(param_3 + 4);
  local_20 = param_3;
  if (7 < *(ulonglong *)(param_3 + 6)) {
    local_20 = *(uint **)param_3;
  }
  if (((local_18 == 0) ||
      (((3 < local_18 * 2 && ((*local_20 & 0xffffffdf) - 0x3a0041 < 0x1a)) ||
       ((short)*local_20 == 0x5c)))) || ((short)*local_20 == 0x2f)) {
    FUN_180024980();
    FUN_180013f60(param_1,param_3);
    return param_1;
  }
  local_30 = *(longlong *)(param_2 + 4);
  if (7 < *(ulonglong *)(param_2 + 6)) {
    param_2 = *(uint **)param_2;
  }
  if (local_30 == 2) {
    if (0x19 < (*param_2 & 0xffffffdf) - 0x3a0041) {
LAB_18001506e:
      sVar1 = *(short *)((longlong)param_2 + local_30 * 2 + -2);
      if ((sVar1 != 0x5c) && (sVar1 != 0x2f)) {
        local_28 = 1;
        lVar2 = 1;
        goto LAB_180014feb;
      }
    }
  }
  else if (local_30 != 0) goto LAB_18001506e;
  local_28 = 0;
  lVar2 = 0;
LAB_180014feb:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  local_38 = param_2;
  FUN_1800223a0(param_1,lVar2 + local_30 + local_18,&local_38);
  return param_1;
}



/* ===== 1800150c0 thunk_FUN_1800289e0 ===== */

void thunk_FUN_1800289e0(longlong *param_1)

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
  if ((ulonglong)param_1[3] < 8) goto LAB_180028a34;
  lVar2 = *param_1;
  if (param_1[3] * 2 + 2U < 0x1000) {
LAB_180028a29:
    puVar4 = puVar3;
    lVar5 = lVar2;
  }
  else {
    lVar5 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar5) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)(5);
      puVar3 = auStack_20;
      goto LAB_180028a29;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x180028a34;
  thunk_FUN_1803d64e0(lVar5);
LAB_180028a34:
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  param_1[3] = 7;
  return;
}



/* ===== 1800150d0 FUN_1800150d0 ===== */

undefined8 FUN_1800150d0(undefined8 param_1)

{
  FUN_180024980();
  return param_1;
}



/* ===== 1800150f0 FUN_1800150f0 ===== */

undefined8 FUN_1800150f0(undefined8 *param_1)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  if ((ulonglong)param_1[3] < 8) {
    puVar5 = param_1;
  }
  else {
    puVar5 = (undefined8 *)*param_1;
  }
  psVar1 = (short *)((longlong)puVar5 + param_1[2] * 2);
  for (psVar2 = (short *)FUN_180013e50(puVar5,psVar1); psVar2 != psVar1; psVar2 = psVar2 + 1) {
    if ((*psVar2 != 0x5c) && (*psVar2 != 0x2f)) break;
  }
  do {
    if (psVar2 == psVar1) {
      return 0;
    }
    psVar4 = psVar2;
    do {
      if ((*psVar4 == 0x5c) || (*psVar4 == 0x2f)) break;
      psVar4 = psVar4 + 1;
    } while (psVar4 != psVar1);
    psVar3 = (short *)FUN_180013e50(psVar2);
    bVar6 = psVar3 != psVar2;
    psVar2 = psVar4;
    if (bVar6) {
      return 1;
    }
    for (; psVar2 != psVar1; psVar2 = psVar2 + 1) {
      if ((*psVar2 != 0x5c) && (*psVar2 != 0x2f)) break;
    }
  } while( true );
}



/* ===== 1800151a0 FUN_1800151a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800151a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  longlong lVar6;
  short *psVar7;
  undefined8 ******ppppppuVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 ******ppppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 ******ppppppuVar13;
  short *psVar14;
  ulonglong *puVar15;
  undefined8 *****pppppuVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auStack_3f8 [32];
  undefined8 ******local_3d8;
  uint local_3c8;
  char local_3c4;
  undefined8 ******local_3c0;
  ulonglong *local_3b8;
  undefined8 ******local_3b0;
  undefined8 ******local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  undefined8 ******local_390;
  undefined8 ******local_388;
  undefined8 local_380;
  undefined8 ******local_378;
  undefined1 local_370 [32];
  undefined8 ******local_350;
  undefined8 ******local_348;
  undefined8 *****local_340;
  undefined1 local_338 [32];
  undefined8 *****local_318;
  undefined8 ******local_310;
  undefined1 local_308 [32];
  undefined8 ******local_2e8;
  undefined8 ******local_2e0;
  undefined1 local_2d8 [32];
  undefined8 ******local_2b8;
  undefined8 *local_2b0;
  undefined8 ******local_2a8;
  undefined1 local_2a0 [48];
  undefined8 ******local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  ulonglong local_258;
  undefined8 *****local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  ulonglong local_220;
  undefined8 ******local_218;
  undefined8 uStack_210;
  longlong local_208;
  ulonglong local_200;
  undefined8 ****local_1f8;
  undefined8 uStack_1f0;
  undefined8 *****local_1e8;
  undefined8 *****local_1e0;
  undefined8 ******local_1d8 [2];
  longlong local_1c8;
  ulonglong local_1c0;
  undefined8 ******local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 ******local_190;
  undefined8 *****local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 *****local_160;
  undefined8 ****local_158 [2];
  undefined8 *****local_148;
  undefined8 *****local_140;
  undefined8 *****local_138;
  undefined1 local_130 [16];
  longlong local_120;
  undefined8 ******local_108;
  undefined1 local_100 [16];
  longlong local_f0;
  undefined8 *****local_e0;
  undefined8 ******local_d8;
  undefined1 local_d0 [32];
  undefined8 ******local_b0;
  undefined8 ******local_a8;
  undefined1 local_a0 [32];
  undefined8 ******local_80;
  undefined8 ******local_78;
  undefined1 local_70 [32];
  undefined8 *****local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_3f8;
  local_3c8 = 0;
  if ((ulonglong)param_1[3] < 8) {
    puVar10 = param_1;
  }
  else {
    puVar10 = (undefined8 *)*param_1;
  }
  local_2b0 = param_2;
  if ((((ulonglong)param_1[2] < 6) || (iVar4 = FUN_180028bc0(puVar10,L"\\\\?\\",4), iVar4 != 0)) ||
     (0x19 < (*(uint *)(puVar10 + 1) & 0xffffffdf) - 0x3a0041)) {
LAB_18001538f:
    FUN_180024980(local_158,param_1);
    local_3c8 = 2;
    pppppuVar16 = local_158;
    FUN_180024980(local_1d8,param_3);
    ppppppuVar13 = local_1d8;
    uVar20 = 10;
    puVar15 = &local_1c0;
    plVar17 = &local_1c8;
    ppppppuVar8 = &local_140;
    local_3c0 = &local_148;
  }
  else {
    if ((ulonglong)param_3[3] < 8) {
      puVar10 = param_3;
    }
    else {
      puVar10 = (undefined8 *)*param_3;
    }
    puVar15 = param_3 + 2;
    if (((*puVar15 < 6) || (iVar4 = FUN_180028bc0(puVar10,L"\\\\?\\",4), iVar4 != 0)) ||
       (0x19 < (*(uint *)(puVar10 + 1) & 0xffffffdf) - 0x3a0041)) goto LAB_18001538f;
    if ((ulonglong)param_1[3] < 8) {
      puVar10 = param_1;
    }
    else {
      puVar10 = (undefined8 *)*param_1;
    }
    psVar14 = (short *)((longlong)puVar10 + param_1[2] * 2);
    for (psVar5 = (short *)FUN_180013e50();
        (psVar5 != psVar14 && ((*psVar5 == 0x5c || (*psVar5 == 0x2f)))); psVar5 = psVar5 + 1) {
    }
    local_1f8 = (undefined8 ****)0x0;
    uStack_1f0 = 0;
    local_1e8 = (undefined8 *****)0x0;
    local_1e0 = (undefined8 *****)0x0;
    FUN_180024d40(&local_1f8,psVar5,(longlong)psVar14 - (longlong)psVar5 >> 1);
    pppppuVar16 = &local_1f8;
    local_3c8 = 0xe0001;
    if (7 < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    psVar14 = (short *)((longlong)param_3 + *puVar15 * 2);
    for (psVar5 = (short *)FUN_180013e50(param_3);
        (psVar5 != psVar14 && ((*psVar5 == 0x5c || (*psVar5 == 0x2f)))); psVar5 = psVar5 + 1) {
    }
    local_218 = (undefined8 ******)0x0;
    uStack_210 = 0;
    local_208 = 0;
    local_200 = 0;
    FUN_180024d40(&local_218,psVar5,(longlong)psVar14 - (longlong)psVar5 >> 1);
    ppppppuVar13 = &local_218;
    uVar20 = 0x7e0005;
    puVar15 = &local_200;
    plVar17 = &local_208;
    ppppppuVar8 = &local_1e0;
    local_3c0 = &local_1e8;
    local_1d8[0] = local_218;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  local_3c8 = uVar20 | 0x10;
  ppppppuVar11 = local_1d8[0];
  if (*puVar15 < 8) {
    ppppppuVar11 = ppppppuVar13;
  }
  local_3b8 = puVar15;
  local_3b0 = ppppppuVar8;
  local_398 = plVar17;
  lVar6 = FUN_180013e50(ppppppuVar11,(longlong)ppppppuVar11 + *plVar17 * 2);
  local_238 = (undefined8 ******)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  uStack_230 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  local_228 = 0;
  local_220 = 0;
  FUN_180024d40(&local_238,ppppppuVar11,lVar6 - (longlong)ppppppuVar11 >> 1);
  local_3c8 = uVar20 | 0xe30;
  pppppuVar12 = pppppuVar16;
  if ((undefined8 *****)0x7 < *ppppppuVar8) {
    pppppuVar12 = (undefined8 *****)*pppppuVar16;
  }
  lVar6 = FUN_180013e50(pppppuVar12,(longlong)pppppuVar12 + (longlong)*local_3c0 * 2);
  local_270 = (undefined8 ******)0x0;
  uStack_268 = 0;
  local_260 = 0;
  local_258 = 0;
  FUN_180024d40(&local_270,pppppuVar12,lVar6 - (longlong)pppppuVar12 >> 1);
  local_3c8 = uVar20 | 0x7e70;
  local_3a8 = (undefined8 ******)&local_238;
  if (7 < local_220) {
    local_3a8 = local_238;
  }
  local_3a0 = local_228;
  iVar4 = FUN_180014140(&local_270,&local_3a8);
  if (iVar4 == 0) {
    cVar2 = FUN_1800144e0(ppppppuVar13);
    cVar3 = FUN_1800144e0(pppppuVar16);
    ppppppuVar8 = local_3b0;
    if (cVar3 != cVar2) goto LAB_1800155ed;
    if (*local_3b0 < (undefined8 *****)0x8) {
      pppppuVar12 = pppppuVar16;
    }
    else {
      pppppuVar12 = (undefined8 *****)*pppppuVar16;
    }
    psVar14 = (short *)((longlong)pppppuVar12 + (longlong)*local_3c0 * 2);
    psVar7 = (short *)FUN_180013e50(pppppuVar12,psVar14);
    for (psVar5 = psVar7; (psVar5 != psVar14 && ((*psVar5 == 0x5c || (*psVar5 == 0x2f))));
        psVar5 = psVar5 + 1) {
    }
    if (psVar5 == psVar7) {
      if (*puVar15 < 8) {
        ppppppuVar11 = ppppppuVar13;
      }
      else {
        ppppppuVar11 = (undefined8 ******)*ppppppuVar13;
      }
      psVar14 = (short *)((longlong)ppppppuVar11 + *plVar17 * 2);
      psVar7 = (short *)FUN_180013e50(ppppppuVar11,psVar14);
      for (psVar5 = psVar7; (psVar5 != psVar14 && ((*psVar5 == 0x5c || (*psVar5 == 0x2f))));
          psVar5 = psVar5 + 1) {
      }
      if (psVar5 != psVar7) goto LAB_1800155ed;
    }
    cVar2 = FUN_1800150f0(pppppuVar16);
    if (cVar2 != '\0') goto LAB_1800155ed;
    cVar2 = FUN_1800150f0(ppppppuVar13);
    local_3c4 = '\0';
    if (cVar2 != '\0') goto LAB_1800155ed;
  }
  else {
LAB_1800155ed:
    local_3c4 = '\x01';
  }
  local_3c8 = uVar20 | 0x7e30;
  FUN_1800289e0(&local_270);
  uVar19 = uVar20 | 0x7e10;
  local_3c8 = uVar19;
  FUN_1800289e0(&local_238);
  if (local_3c4 != '\0') goto LAB_180015dde;
  if (*ppppppuVar8 < (undefined8 *****)0x8) {
    pppppuVar12 = pppppuVar16;
  }
  else {
    pppppuVar12 = (undefined8 *****)*pppppuVar16;
  }
  pppppuVar12 = (undefined8 *****)((longlong)pppppuVar12 + (longlong)*local_3c0 * 2);
  uStack_178 = 0;
  local_170 = 0;
  local_168 = 7;
  local_180 = 0;
  local_188 = pppppuVar12;
  local_160 = pppppuVar16;
  FUN_180015ea0(ppppppuVar13,&local_a8);
  local_2e0 = ppppppuVar13;
  if (7 < *puVar15) {
    local_2e0 = (undefined8 ******)*ppppppuVar13;
  }
  local_2e0 = (undefined8 ******)((longlong)local_2e0 + *plVar17 * 2);
  uStack_1a8 = 0;
  local_1a0 = 0;
  local_198 = 7;
  local_1b0 = 0;
  local_390 = &local_2e0;
  local_1b8 = local_2e0;
  local_190 = ppppppuVar13;
  FUN_180024980(local_2d8,&local_1b0);
  local_2b8 = local_190;
  local_3b0 = &local_2e0;
  local_3c0 = &local_310;
  local_310 = local_a8;
  FUN_180024980(local_308,local_a0);
  local_2e8 = local_80;
  local_2a8 = &local_310;
  local_348 = &local_340;
  local_340 = pppppuVar12;
  FUN_180024980(local_338,&local_180);
  local_318 = local_160;
  local_388 = &local_340;
  ppppppuVar8 = (undefined8 ******)FUN_180015ea0(pppppuVar16,local_2a0);
  local_348 = &local_d8;
  local_d8 = local_2e0;
  local_238 = ppppppuVar8;
  FUN_180024980(local_d0,local_2d8);
  local_b0 = local_2b8;
  local_390 = &local_378;
  local_378 = local_310;
  FUN_180024980(local_370,local_308);
  local_350 = local_2e8;
  local_3c0 = &local_270;
  local_270 = (undefined8 ******)local_340;
  FUN_180024980(&uStack_268,local_338);
  local_248 = local_318;
  local_78 = (undefined8 ******)*ppppppuVar8;
  FUN_180024980(local_70,ppppppuVar8 + 1);
  local_50 = ppppppuVar8[5];
  local_3d8 = &local_d8;
  FUN_180024e20(&local_138,&local_78,&local_270,&local_378);
  uVar19 = uVar20 | 0x807e10;
  local_3c8 = uVar19;
  FUN_1800289e0(ppppppuVar8 + 1);
  FUN_1800289e0(local_338);
  FUN_1800289e0(local_308);
  FUN_1800289e0(local_2d8);
  pppppuVar16 = local_188;
  ppppppuVar8 = local_1b8;
  if ((local_138 == local_188) && (local_108 == local_1b8)) {
    local_270 = (undefined8 ******)0x0;
    uStack_268 = 0;
    local_260 = 0;
    local_258 = 0;
    FUN_180024d40(&local_270,&DAT_1806d2b54,1);
LAB_180015d41:
    FUN_1800248e0(param_2,&local_270);
    if (7 < local_258) {
      uVar18 = local_258 * 2 + 2;
      ppppppuVar13 = local_270;
      if (0xfff < uVar18) {
        ppppppuVar13 = (undefined8 ******)local_270[-1];
        if (0x1f < (ulonglong)((longlong)local_270 + (-8 - (longlong)ppppppuVar13))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          puVar10 = (undefined8 *)(*pcVar1)();
          return puVar10;
        }
        uVar18 = local_258 * 2 + 0x29;
      }
      thunk_FUN_1803d64e0(ppppppuVar13,uVar18);
    }
  }
  else {
    local_3a8 = &local_270;
    local_270 = local_108;
    FUN_180024980(&uStack_268,local_100);
    local_248 = local_e0;
    local_238 = &local_270;
    local_378 = local_a8;
    FUN_180024980(local_370,local_a0);
    local_350 = local_80;
    local_3a8 = &local_378;
    local_d8 = local_378;
    FUN_180024980(local_d0,local_370);
    pppppuVar12 = local_248;
    local_b0 = local_80;
    local_3c8 = uVar20 | 0xc807e10;
    local_78 = local_270;
    FUN_180024980(local_70,&uStack_268);
    ppppppuVar11 = local_78;
    uVar19 = uVar20 | 0x3c807e10;
    lVar6 = 0;
    local_3c8 = uVar19;
    local_50 = pppppuVar12;
    while (local_d8 != ppppppuVar11) {
      lVar6 = lVar6 + 1;
      FUN_180027990(&local_d8);
    }
    FUN_1800289e0(local_70);
    FUN_1800289e0(local_d0);
    FUN_1800289e0(local_370);
    FUN_1800289e0(&uStack_268);
    if (*local_3b8 < 8) {
      local_3b8 = (ulonglong *)(*local_398 * 2);
      lVar9 = FUN_180013e50(ppppppuVar13,(longlong)local_3b8 + (longlong)ppppppuVar13);
      uVar18 = lVar9 - (longlong)ppppppuVar13;
    }
    else {
      ppppppuVar13 = (undefined8 ******)*ppppppuVar13;
      local_3b8 = (ulonglong *)(*local_398 * 2);
      ppppppuVar11 = ppppppuVar13;
      lVar9 = FUN_180013e50(ppppppuVar13,(longlong)local_3b8 + (longlong)ppppppuVar13);
      uVar18 = lVar9 - (longlong)ppppppuVar11;
    }
    psVar7 = (short *)((longlong)local_3b8 + (longlong)ppppppuVar13);
    psVar5 = (short *)FUN_180013e50(ppppppuVar13,psVar7);
    for (psVar14 = psVar5; (psVar14 != psVar7 && ((*psVar14 == 0x5c || (*psVar14 == 0x2f))));
        psVar14 = psVar14 + 1) {
    }
    for (; lVar6 < (longlong)((ulonglong)(psVar14 != psVar5) + (ulonglong)(1 < uVar18));
        lVar6 = lVar6 + 1) {
      FUN_180024520(&local_108);
    }
    lVar6 = 0;
    if (local_108 == ppppppuVar8) {
LAB_180015cb8:
      if ((local_138 == pppppuVar16) || (local_120 == 0)) {
        local_270 = (undefined8 ******)0x0;
        uStack_268 = 0;
        local_260 = 0;
        local_258 = 0;
        FUN_180024d40(&local_270,&DAT_1806d2b54,1);
        goto LAB_180015d41;
      }
joined_r0x000180015cd1:
      while (local_138 != pppppuVar16) {
        FUN_180013f60(param_2,local_130);
        FUN_180024520(&local_138);
      }
    }
    else {
      do {
        uVar20 = uVar19;
        if (local_f0 != 0) {
          local_270 = (undefined8 ******)0x0;
          uStack_268 = 0;
          local_260 = 0;
          local_258 = 0;
          FUN_180024d40(&local_270,&DAT_1806d2b54,1);
          local_238 = &local_270;
          if (7 < local_258) {
            local_238 = local_270;
          }
          uStack_230 = local_260;
          local_3c8 = uVar19 | 0x18000;
          iVar4 = FUN_180014140(local_100,&local_238);
          FUN_1800289e0(&local_270);
          uVar20 = uVar19 | 0x18000;
          if (iVar4 != 0) {
            local_270 = (undefined8 ******)0x0;
            uStack_268 = 0;
            local_260 = 0;
            local_258 = 0;
            FUN_180024d40(&local_270,&DAT_1806d2b58,2);
            uVar20 = uVar19 | 0x3018000;
            local_388 = &local_270;
            if (7 < local_258) {
              local_388 = local_270;
            }
            local_380 = local_260;
            local_3c8 = uVar20;
            iVar4 = FUN_180014140(local_100,&local_388);
            FUN_1800289e0(&local_270);
            if (iVar4 == 0) {
              lVar6 = lVar6 + -1;
            }
            else {
              lVar6 = lVar6 + 1;
            }
          }
        }
        uVar19 = uVar20;
        FUN_180024520(&local_108);
      } while (local_108 != ppppppuVar8);
      if (-1 < lVar6) {
        if (lVar6 == 0) goto LAB_180015cb8;
        for (; 0 < lVar6; lVar6 = lVar6 + -1) {
          local_270 = (undefined8 ******)0x0;
          uStack_268 = 0;
          local_260 = 0;
          local_258 = 0;
          FUN_180024d40(&local_270,&DAT_1806d2b58,2);
          uVar19 = uVar19 | 0x180;
          local_3c8 = uVar19;
          FUN_180013f60(param_2,&local_270);
          FUN_1800289e0(&local_270);
        }
        goto joined_r0x000180015cd1;
      }
    }
  }
  FUN_1800289e0(local_100);
  FUN_1800289e0(local_130);
  FUN_1800289e0(&local_1b0);
  FUN_1800289e0(local_a0);
  FUN_1800289e0(&local_180);
LAB_180015dde:
  uVar20 = uVar19 & 0xffffffef;
  if ((uVar19 & 8) != 0) {
    uVar20 = uVar19 & 0xffffffe7;
    FUN_1800289e0(local_1d8);
  }
  if ((uVar20 & 4) != 0) {
    uVar20 = uVar20 & 0xfffffffb;
    FUN_1800289e0(&local_218);
  }
  if ((uVar20 & 2) != 0) {
    uVar20 = uVar20 & 0xfffffffd;
    FUN_1800289e0(local_158);
  }
  if ((uVar20 & 1) != 0) {
    FUN_1800289e0(&local_1f8);
  }
  return param_2;
}



/* ===== 180015e80 FUN_180015e80 ===== */

void FUN_180015e80(longlong param_1)

{
  FUN_1800289e0(param_1 + 0x38);
  FUN_1800289e0(param_1 + 8);
  return;
}



/* ===== 180015ea0 FUN_180015ea0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180015ea0(short *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  ulonglong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_68;
  psVar5 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar5 = *(short **)param_1;
  }
  psVar6 = psVar5 + *(longlong *)(param_1 + 8);
  local_40 = param_2;
  psVar4 = (short *)FUN_180013e50(psVar5);
  if ((psVar5 == psVar4) && (psVar4 != psVar6)) {
    do {
      if ((*psVar4 != 0x5c) && (*psVar4 != 0x2f)) break;
      psVar4 = psVar4 + 1;
    } while (psVar4 != psVar6);
    if ((psVar5 == psVar4) && (psVar4 != psVar6)) {
      while (*psVar4 != 0x5c) {
        if ((*psVar4 == 0x2f) || (psVar4 = psVar4 + 1, psVar4 == psVar6)) break;
      }
    }
  }
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_180024d40(&local_38,psVar5,(longlong)psVar4 - (longlong)psVar5 >> 1);
  uVar3 = local_38;
  if (*(ulonglong *)(param_1 + 0xc) < 8) {
    psVar5 = param_1;
  }
  else {
    psVar5 = *(short **)param_1;
  }
  *param_2 = psVar5;
  local_38 = local_38 & 0xffffffffffff0000;
  param_2[1] = uVar3;
  param_2[2] = uStack_30;
  uVar2 = _UNK_1808ad3e8;
  uVar1 = _DAT_1808ad3e0;
  *(undefined4 *)(param_2 + 3) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x1c) = local_28._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_20._4_4_;
  param_2[5] = param_1;
  local_28 = uVar1;
  uStack_20 = uVar2;
  FUN_1800289e0(&local_38);
  return param_2;
}



/* ===== 180015fc0 FUN_180015fc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_180015fc0(longlong param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  uint local_28;
  int local_24;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0xffff;
  if ((*(uint *)(param_1 + 0x1c) & (uint)param_3) == (uint)param_3) {
    param_2[2] = 0;
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar2 = 0x16d;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0x1ff;
    }
    param_2[1] = uVar2;
    if ((uVar1 >> 10 & 1) != 0) {
      if (*(int *)(param_1 + 0x14) == -0x5ffffff4) {
LAB_180016094:
        uVar1 = 4;
        goto LAB_1800160ee;
      }
      if (*(int *)(param_1 + 0x14) == -0x5ffffffd) {
LAB_1800160a2:
        uVar1 = 10;
        goto LAB_1800160ee;
      }
    }
    uVar1 = (uVar1 & 0x10 | 0x20) >> 4;
    goto LAB_1800160ee;
  }
  if ((*(uint *)(param_1 + 0x1c) & 2) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
  }
  plVar3 = (longlong *)(param_1 + 0x20);
  if (7 < *(ulonglong *)(param_1 + 0x38)) {
    plVar3 = (longlong *)*plVar3;
  }
  uVar1 = FUN_1804e5830(plVar3,local_38,param_3,uVar4);
  param_2[2] = uVar1;
  if (uVar1 == 0) {
    uVar1 = 0x16d;
    if ((local_28 & 1) == 0) {
      uVar1 = 0x1ff;
    }
    param_2[1] = uVar1;
    if ((local_28 >> 10 & 1) != 0) {
      if (local_24 == -0x5ffffff4) goto LAB_180016094;
      if (local_24 == -0x5ffffffd) goto LAB_1800160a2;
    }
    uVar1 = ((local_28 & 0x10) != 0) + 2;
    goto LAB_1800160ee;
  }
  param_2[1] = 0xffff;
  if (uVar1 < 0x41) {
    if (((uVar1 != 0x40) && (uVar1 != 2)) && (uVar1 != 3)) {
      bVar5 = uVar1 == 0x35;
LAB_1800160e3:
      if (!bVar5) {
        uVar1 = 0;
        goto LAB_1800160ee;
      }
    }
  }
  else if ((uVar1 != 0x7b) && (uVar1 != 0xa1)) {
    bVar5 = uVar1 == 0x10b;
    goto LAB_1800160e3;
  }
  uVar1 = 1;
LAB_1800160ee:
  *param_2 = uVar1;
  return param_2;
}



/* ===== 180016110 FUN_180016110 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180016110(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined **local_60;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  lVar3 = FUN_180512c70(puVar5);
  if ((lVar3 == 0) || (lVar3 != param_1[2])) {
    iVar2 = 2;
  }
  else {
    FUN_180024980(local_58,param_1);
    local_78 = &DAT_1806d2b60;
    local_70 = 1;
    FUN_180022540(param_1,&local_78);
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    iVar2 = FUN_1804e5710(param_1,param_3,param_4);
    if (iVar2 == 0) {
      uVar1 = *param_3;
      do {
        if ((*(short *)(param_4 + 0x2c) != 0x2e) ||
           ((*(short *)(param_4 + 0x2e) != 0 &&
            ((*(short *)(param_4 + 0x2e) != 0x2e || (*(short *)(param_4 + 0x30) != 0)))))) {
          iVar2 = 0;
          break;
        }
        iVar2 = FUN_1804e56d0(uVar1,param_4);
      } while (iVar2 == 0);
    }
    else if (iVar2 == 5) {
      if ((param_2 & 2) != 0) {
        iVar2 = 0x12;
      }
    }
    else if (iVar2 == 2) {
      local_68[0] = 0;
      local_60 = &PTR_vftable_18091a158;
      puVar4 = (uint *)FUN_180016ab0(&local_78,local_58,local_68);
      if (1 < *puVar4) {
        iVar2 = 0x12;
      }
    }
    FUN_1800289e0(local_58);
  }
  return iVar2;
}



/* ===== 180016260 FUN_180016260 ===== */

longlong FUN_180016260(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uStackX_9;
  undefined1 uStackX_b;
  
  FUN_180024980();
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  iVar1 = FUN_180016110(param_1,param_3,(undefined8 *)(param_1 + 0x20),param_1 + 0x28);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x278) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x278) = 0;
    if (iVar1 != 0x12) goto LAB_1800162b1;
  }
  iVar1 = 0;
LAB_1800162b1:
  uStackX_9 = (undefined2)((ulonglong)param_1 >> 8);
  *(undefined2 *)(param_1 + 0x279) = uStackX_9;
  uStackX_b = (undefined1)((ulonglong)param_1 >> 0x18);
  *(undefined1 *)(param_1 + 0x27b) = uStackX_b;
  *(int *)(param_1 + 0x27c) = iVar1;
  return param_1;
}



/* ===== 1800162e0 FUN_1800162e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800162e0(undefined8 *param_1,uint *param_2)

{
  short *psVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  short *psVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  short *psVar8;
  undefined8 *puVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_78;
  *(uint *)(param_1 + 2) = *param_2;
  *(uint *)((longlong)param_1 + 0x14) = param_2[9];
  *(undefined4 *)((longlong)param_1 + 0x1c) = 6;
  if ((*param_2 & 0x400) == 0) {
    param_1[1] = CONCAT44(param_2[7],param_2[8]);
    *param_1 = *(undefined8 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x2e;
  }
  uVar4 = FUN_180512c70(param_2 + 0xb);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_180024d40(&local_50,param_2 + 0xb,uVar4);
  uVar2 = param_1[7];
  if (uVar2 < 8) {
    puVar9 = param_1 + 4;
  }
  else {
    puVar9 = (undefined8 *)param_1[4];
  }
  uVar3 = param_1[6];
  psVar8 = (short *)((longlong)puVar9 + uVar3 * 2);
  for (psVar5 = (short *)FUN_180013e50(puVar9); psVar5 != psVar8; psVar5 = psVar5 + 1) {
    if ((*psVar5 != 0x5c) && (*psVar5 != 0x2f)) goto LAB_1800163b0;
  }
LAB_1800163cc:
  uVar6 = (longlong)psVar8 - (longlong)puVar9 >> 1;
  if (uVar3 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_18002a1a0();
  }
  param_1[6] = uVar6;
  if (uVar2 < 8) {
    puVar7 = param_1 + 4;
  }
  else {
    puVar7 = (undefined8 *)param_1[4];
  }
  *(undefined2 *)(((longlong)psVar8 - (longlong)puVar9 & 0xfffffffffffffffeU) + (longlong)puVar7) =
       0;
  FUN_180013f60(param_1 + 4,&local_50);
  FUN_1800289e0(&local_50);
  return;
LAB_1800163b0:
  psVar1 = psVar8 + -1;
  if (*psVar1 == 0x5c) goto LAB_1800163cc;
  if ((*psVar1 == 0x2f) || (psVar8 = psVar1, psVar5 == psVar1)) goto LAB_1800163cc;
  goto LAB_1800163b0;
}



/* ===== 180016430 FUN_180016430 ===== */

undefined8 * FUN_180016430(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 7;
  *(undefined2 *)(param_1 + 4) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0xffffffffffffffff;
  param_1[8] = uVar1;
  FUN_1800248e0();
  FUN_1800162e0(param_1,param_2 + 0x28);
  return param_1;
}



/* ===== 1800164b0 FUN_1800164b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1800164b0(longlong *param_1)

{
  longlong *plVar1;
  short *psVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  short *psVar11;
  byte bVar12;
  uint uVar13;
  short *psVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  short *psVar18;
  longlong lVar19;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [16];
  uint local_2b8;
  undefined1 local_2a8 [44];
  short local_27c;
  short local_27a;
  short local_278;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_2e8;
  lVar5 = *param_1;
  bVar12 = 0;
  if (*(char *)(lVar5 + 100) == '\0') {
LAB_180016631:
    if (bVar12 != 0) {
      puVar6 = *(undefined8 **)(lVar5 + 0x50);
      if (puVar6 == *(undefined8 **)(lVar5 + 0x58)) {
        FUN_1800290d0(lVar5 + 0x48,puVar6,lVar5 + 0x40);
      }
      else {
        uVar7 = *(undefined8 *)(lVar5 + 0x40);
        *(undefined8 *)(lVar5 + 0x40) = 0xffffffffffffffff;
        *puVar6 = uVar7;
        *(longlong *)(lVar5 + 0x50) = *(longlong *)(lVar5 + 0x50) + 8;
      }
      uVar13 = FUN_180016110(lVar5 + 0x20,*(undefined4 *)(lVar5 + 0x60),lVar5 + 0x40,local_2a8);
      goto LAB_18001667e;
    }
  }
  else {
    uVar13 = *(uint *)(lVar5 + 0x10);
    if (((uVar13 >> 10 & 1) == 0) ||
       ((*(int *)(lVar5 + 0x14) != -0x5ffffff4 && (*(int *)(lVar5 + 0x14) != -0x5ffffffd)))) {
      bVar12 = (byte)(uVar13 >> 4) & 1;
      goto LAB_180016631;
    }
    if ((*(byte *)(lVar5 + 0x60) & 1) == 0) goto LAB_180016631;
    plVar16 = (longlong *)(lVar5 + 0x20);
    if (7 < *(ulonglong *)(lVar5 + 0x38)) {
      plVar16 = (longlong *)*plVar16;
    }
    uVar13 = FUN_1804e5830(plVar16,local_2c8,3,uVar13);
    if (uVar13 == 0) {
      bVar12 = (byte)(local_2b8 >> 4) & 1;
      goto LAB_180016631;
    }
    if (uVar13 < 0x41) {
      if ((((uVar13 != 0x40) && (uVar13 != 2)) && ((uVar13 != 3 && (uVar13 != 0x35)))) &&
         ((uVar13 != 5 || ((*(byte *)(lVar5 + 0x60) & 2) == 0)))) {
LAB_1800165e4:
        *param_1 = 0;
        plVar16 = (longlong *)param_1[1];
        param_1[1] = 0;
        if (plVar16 == (longlong *)0x0) {
          return uVar13;
        }
        LOCK();
        plVar1 = plVar16 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return uVar13;
        }
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar3 = (int *)((longlong)plVar16 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16);
          return uVar13;
        }
        return uVar13;
      }
    }
    else if (((uVar13 != 0x7b) && (uVar13 != 0xa1)) && (uVar13 != 0x10b)) goto LAB_1800165e4;
  }
  uVar13 = FUN_1804e56d0(*(undefined8 *)(lVar5 + 0x40),local_2a8);
  if (uVar13 == 0) {
    uVar7 = *(undefined8 *)(lVar5 + 0x40);
    do {
      if ((local_27c != 0x2e) || ((local_27a != 0 && ((local_27a != 0x2e || (local_278 != 0)))))) {
        uVar13 = 0;
        break;
      }
      uVar13 = FUN_1804e56d0(uVar7,local_2a8);
    } while (uVar13 == 0);
  }
LAB_18001667e:
  *(undefined1 *)(lVar5 + 100) = 1;
  do {
    if (uVar13 == 0) {
      FUN_1800162e0(lVar5,local_2a8);
      return 0;
    }
    do {
      if (uVar13 != 0x12) {
LAB_18001680c:
        *param_1 = 0;
        plVar16 = (longlong *)param_1[1];
        param_1[1] = 0;
        if (plVar16 == (longlong *)0x0) {
          return uVar13;
        }
        LOCK();
        plVar1 = plVar16 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return uVar13;
        }
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar3 = (int *)((longlong)plVar16 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16);
          return uVar13;
        }
        return uVar13;
      }
      lVar19 = *(longlong *)(lVar5 + 0x50);
      if (*(longlong *)(lVar5 + 0x48) == lVar19) {
        uVar13 = 0;
        goto LAB_18001680c;
      }
      uVar7 = *(undefined8 *)(lVar19 + -8);
      *(undefined8 *)(lVar19 + -8) = 0xffffffffffffffff;
      uVar8 = *(undefined8 *)(lVar5 + 0x40);
      *(undefined8 *)(lVar5 + 0x40) = uVar7;
      FUN_1804e56f0(uVar8);
      FUN_1804e56f0(*(undefined8 *)(*(longlong *)(lVar5 + 0x50) + -8));
      *(longlong *)(lVar5 + 0x50) = *(longlong *)(lVar5 + 0x50) + -8;
      uVar9 = *(ulonglong *)(lVar5 + 0x38);
      if (uVar9 < 8) {
        lVar19 = lVar5 + 0x20;
      }
      else {
        lVar19 = *(longlong *)(lVar5 + 0x20);
      }
      uVar10 = *(ulonglong *)(lVar5 + 0x30);
      psVar18 = (short *)(lVar19 + uVar10 * 2);
      psVar14 = (short *)FUN_180013e50(lVar19);
      if ((psVar14 != psVar18) && ((*psVar14 == 0x5c || (*psVar14 == 0x2f)))) {
        psVar14 = psVar14 + 1;
      }
      if (psVar18 != psVar14) {
        do {
          psVar2 = psVar18 + -1;
          psVar11 = psVar18;
          if ((*psVar2 == 0x5c) || (*psVar2 == 0x2f)) break;
          psVar18 = psVar2;
          psVar11 = psVar2;
        } while (psVar2 != psVar14);
        do {
          psVar18 = psVar11;
          if (psVar18 == psVar14) break;
          psVar11 = psVar18 + -1;
        } while ((*psVar11 == 0x5c) || (*psVar11 == 0x2f));
      }
      uVar15 = (longlong)psVar18 - lVar19 >> 1;
      if (uVar10 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_18002a1a0();
      }
      *(ulonglong *)(lVar5 + 0x30) = uVar15;
      lVar17 = lVar5 + 0x20;
      if (7 < uVar9) {
        lVar17 = *(longlong *)(lVar5 + 0x20);
      }
      *(undefined2 *)(lVar17 + ((longlong)psVar18 - lVar19 & 0xfffffffffffffffeU)) = 0;
      uVar13 = FUN_1804e56d0(*(undefined8 *)(lVar5 + 0x40),local_2a8);
    } while (uVar13 != 0);
    uVar7 = *(undefined8 *)(lVar5 + 0x40);
    do {
      if ((local_27c != 0x2e) || ((local_27a != 0 && ((local_27a != 0x2e || (local_278 != 0)))))) {
        uVar13 = 0;
        break;
      }
      uVar13 = FUN_1804e56d0(uVar7,local_2a8);
    } while (uVar13 == 0);
  } while( true );
}



/* ===== 180016860 FUN_180016860 ===== */

void FUN_180016860(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}



/* ===== 1800168b0 FUN_1800168b0 ===== */

ulonglong FUN_1800168b0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 local_res10;
  
  if (param_2[2] != 0) {
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    uVar2 = FUN_1804e5b70(&local_res10,param_2,0x80,0x2000000);
    uVar6 = (ulonglong)uVar2;
    if (uVar2 != 0) {
LAB_180016a01:
      FUN_1804e4fe0(local_res10);
      return uVar6;
    }
    iVar3 = 0;
    FUN_1800246c0(param_1,0x104,0);
    puVar1 = param_1 + 2;
    do {
      while( true ) {
        uVar6 = *puVar1;
        puVar5 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar5 = (undefined8 *)*param_1;
        }
        uVar4 = FUN_1804e57f0(local_res10,puVar5,(uint)uVar6,iVar3);
        if ((uint)uVar4 != 0) break;
        uVar6 = uVar4 >> 0x20;
        if (((int)(uVar4 >> 0x20) != 3) || (iVar3 != 0)) {
          *puVar1 = 0;
          if (7 < (ulonglong)param_1[3]) {
            param_1 = (undefined8 *)*param_1;
          }
          *(undefined2 *)param_1 = 0;
          goto LAB_180016a01;
        }
        iVar3 = 2;
      }
      FUN_1800246c0(param_1,uVar4 & 0xffffffff,0);
    } while ((uint)uVar6 <= (uint)uVar4);
    FUN_1804e4fe0(local_res10);
    if (iVar3 == 0) {
      puVar5 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      if (5 < *puVar1) {
        iVar3 = FUN_180028bc0(puVar5,L"\\\\?\\",4);
        if ((iVar3 == 0) && ((*(uint *)(puVar5 + 1) & 0xffffffdf) - 0x3a0041 < 0x1a)) {
          uVar6 = *puVar1;
          uVar4 = 4;
          if (uVar6 < 4) {
            uVar4 = uVar6;
          }
          if (7 < (ulonglong)param_1[3]) {
            param_1 = (undefined8 *)*param_1;
          }
          FUN_180540530(param_1,(undefined2 *)((longlong)param_1 + uVar4 * 2),
                        (uVar6 - uVar4) * 2 + 2);
          *puVar1 = uVar6 - uVar4;
          return 0;
        }
      }
      puVar5 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      if ((7 < *puVar1) && (iVar3 = FUN_180028bc0(puVar5,L"\\\\?\\UNC\\",8), iVar3 == 0)) {
        uVar6 = *puVar1;
        if (uVar6 < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_18002a1a0();
        }
        uVar4 = 6;
        if (uVar6 - 2 < 6) {
          uVar4 = uVar6 - 2;
        }
        if (7 < (ulonglong)param_1[3]) {
          param_1 = (undefined8 *)*param_1;
        }
        FUN_180540530((longlong)param_1 + 4,(longlong)param_1 + (uVar4 + 2) * 2,
                      (uVar6 - uVar4) * 2 + -2);
        *puVar1 = uVar6 - uVar4;
      }
    }
    else {
      FUN_180025060(param_1);
    }
  }
  return 0;
}



/* ===== 180016ab0 FUN_180016ab0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180016ab0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  uint local_38;
  int local_34;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar3 = 3;
  uVar1 = FUN_1804e5830(param_2,local_48,3,0xffffffff);
  if (uVar1 == 0) {
    uVar2 = 0x16d;
    if ((local_38 & 1) == 0) {
      uVar2 = 0x1ff;
    }
    if ((local_38 >> 10 & 1) != 0) {
      if (local_34 == -0x5ffffff4) {
        uVar3 = 4;
        goto LAB_180016b78;
      }
      if (local_34 == -0x5ffffffd) {
        uVar3 = 10;
        goto LAB_180016b78;
      }
    }
    if ((local_38 & 0x10) == 0) {
      uVar3 = 2;
    }
    goto LAB_180016b78;
  }
  uVar2 = 0xffff;
  if (uVar1 < 0x41) {
    if (((uVar1 != 0x40) && (uVar1 != 2)) && (uVar1 != 3)) {
      bVar4 = uVar1 == 0x35;
LAB_180016b6d:
      if (!bVar4) {
        uVar3 = 0;
        goto LAB_180016b78;
      }
    }
  }
  else if ((uVar1 != 0x7b) && (uVar1 != 0xa1)) {
    bVar4 = uVar1 == 0x10b;
    goto LAB_180016b6d;
  }
  uVar3 = 1;
LAB_180016b78:
  param_3[1] = uVar2;
  *(undefined ***)(param_3 + 2) = &PTR_vftable_18091a158;
  *param_3 = uVar1;
  *param_1 = CONCAT44(uVar2,uVar3);
  return param_1;
}



