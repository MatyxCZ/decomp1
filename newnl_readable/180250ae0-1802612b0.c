/* ===== 180250ae0 FUN_180250ae0 ===== */

undefined1 FUN_180250ae0(longlong *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float local_res20 [2];
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_78;
  
  plVar7 = (longlong *)0x0;
  fVar9 = 0.0;
  FUN_1803a13a0();
  lVar6 = local_80;
  if (local_80 != local_78) {
    do {
      if ((((*(longlong *)(lVar6 + 8) != 0) && (*(longlong *)(lVar6 + 8) != *param_1)) &&
          (DAT_180ca09f0 != 0)) && (iVar4 = FUN_180011200(), iVar4 - 1U < 1000)) {
        if (((DAT_1811160e8 == 0) && (DAT_1811160e8 = FUN_180264b70(), DAT_1811160e8 == 0)) ||
           (cVar1 = FUN_180264d70(), cVar1 == '\0')) {
          if ((*(longlong *)(lVar6 + 8) == 0) || (DAT_180ca09f4 == 0)) {
            cVar1 = '\0';
          }
          else {
            cVar1 = FUN_180011220();
          }
          if ((*param_1 == 0) || (DAT_180ca09f4 == 0)) {
            cVar2 = '\0';
          }
          else {
            cVar2 = FUN_180011220();
          }
          if (cVar1 == cVar2) goto LAB_180250c37;
        }
        if ((DAT_180cf9c78 == 0) || (cVar1 = FUN_180011220(), cVar1 != '\0')) {
          local_res20[0] = 0.0;
          FUN_18024ffd0(lVar6 + 8,param_2,local_res20,local_88);
          if (fVar9 < local_res20[0]) {
            plVar7 = (longlong *)(lVar6 + 8);
            fVar9 = local_res20[0];
          }
        }
      }
LAB_180250c37:
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != local_78);
    if ((plVar7 != (longlong *)0x0) && (0.0 < fVar9)) {
      if ((*plVar7 == 0) || (DAT_180ca09f0 == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_180011200();
      }
      if (DAT_180ca0a14 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_180011200((ulonglong)DAT_180ca0a14 + *plVar7);
      }
      if (param_3 < 1) {
        uVar3 = FUN_1802509f0(plVar7,fVar9);
      }
      else {
        if (iVar4 + 10 < param_3) {
          param_3 = iVar4 + 10;
        }
        if (iVar5 < 1) {
          fVar8 = DAT_1808ac4a0;
        }
        else {
          fVar8 = DAT_1808ac34c;
        }
        uVar3 = (float)param_3 * fVar8 <= fVar9;
      }
      goto LAB_180250cd8;
    }
  }
  uVar3 = 0;
LAB_180250cd8:
  FUN_1800244c0(&local_80);
  return uVar3;
}



/* ===== 180250d00 FUN_180250d00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_180250d00(float *param_1,longlong *param_2,float param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  ulonglong uVar10;
  float fVar11;
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
  undefined1 auStack_200 [96];
  undefined8 uStack_1a0;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined1 local_160;
  undefined8 *local_158;
  undefined8 local_150;
  float local_148;
  float local_144;
  float local_140 [2];
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110 [2];
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined4 local_c8;
  
  fVar14 = 0.0;
  if ((*param_2 != 0) && (DAT_180ca09f8 != 0)) {
    uStack_1a0 = 0x180250d80;
    lVar6 = FUN_18000f3a0(*param_2 + (ulonglong)DAT_180ca09f8);
    if ((lVar6 != 0) && (DAT_180ca0950 != 0)) {
      uStack_1a0 = 0x180250d9d;
      pfVar7 = (float *)FUN_1800111b0(&local_138,lVar6 + (ulonglong)DAT_180ca0950);
      fVar15 = *pfVar7;
      fVar16 = pfVar7[1];
      fVar17 = pfVar7[2];
      goto LAB_180250dba;
    }
  }
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
LAB_180250dba:
  uVar4 = (uint)DAT_180ca09b0;
  fVar20 = DAT_1808ace30;
  fVar22 = DAT_1808acad0;
  fVar19 = DAT_1808ac918;
  fVar21 = fVar19;
  fVar18 = fVar20;
  if (((DAT_180ca0a3c != 0) && ((uint)DAT_180ca09b0 != 0)) &&
     (uVar10 = (ulonglong)DAT_180ca09b0._4_4_, DAT_180ca09b0._4_4_ != 0)) {
    uStack_1a0 = 0x180250e10;
    lVar6 = FUN_18000f3a0((ulonglong)DAT_180ca0a3c + *param_2);
    if (lVar6 - 0x10000U < 0x7ffffffeffff) {
      uStack_1a0 = 0x180250e38;
      pfVar7 = (float *)FUN_1800111b0(&local_138,(ulonglong)uVar4 + lVar6);
      fVar18 = *pfVar7;
      fVar20 = pfVar7[1];
      fVar14 = pfVar7[2];
      uStack_1a0 = 0x180250e56;
      pfVar7 = (float *)FUN_1800111b0(&local_138,lVar6 + uVar10);
      fVar19 = *pfVar7;
      fVar21 = pfVar7[1];
      fVar22 = pfVar7[2];
    }
  }
  uVar3 = _UNK_1808ad2c8;
  uVar2 = _DAT_1808ad2c0;
  fVar1 = DAT_1808ac308;
  local_110[0] = 70.0;
  local_110[1] = 40.0;
  pfVar7 = local_110;
  do {
    local_148 = *param_1;
    local_144 = param_1[1];
    local_140[0] = param_1[2] + *pfVar7;
    local_124 = fVar15 + fVar19;
    pfVar9 = &local_128;
    if (fVar15 + fVar18 <= local_148) {
      pfVar9 = &local_148;
    }
    local_128 = fVar15 + fVar18;
    pfVar8 = &local_124;
    if (local_148 <= fVar15 + fVar19) {
      pfVar8 = pfVar9;
    }
    local_11c = fVar16 + fVar21;
    local_120 = fVar16 + fVar20;
    pfVar9 = &local_120;
    if (fVar16 + fVar20 <= local_144) {
      pfVar9 = &local_144;
    }
    local_138 = *pfVar8;
    fVar13 = *pfVar8 - local_148;
    local_114 = fVar17 + fVar22;
    local_118 = fVar17 + fVar14;
    pfVar8 = &local_11c;
    if (local_144 <= fVar16 + fVar21) {
      pfVar8 = pfVar9;
    }
    local_134 = *pfVar8;
    fVar12 = *pfVar8 - local_144;
    pfVar9 = &local_118;
    if (fVar17 + fVar14 <= local_140[0]) {
      pfVar9 = local_140;
    }
    pfVar8 = &local_114;
    if (local_140[0] <= fVar17 + fVar22) {
      pfVar8 = pfVar9;
    }
    local_130 = *pfVar8;
    fVar11 = *pfVar8 - local_140[0];
    if (fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11 <= param_3 * param_3) {
      lVar6 = *param_2;
      local_158 = &local_f8;
      local_150 = 0;
      local_160 = 0xf;
      local_168 = 4;
      local_170 = 0x1c3003;
      local_178 = 0;
      local_f8 = uVar2;
      uStack_f0 = uVar3;
      local_d8 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d0 = 0;
      local_cc = 0;
      local_c8 = 0x3f800000;
      local_108 = 0;
      local_100 = 0;
      uStack_1a0 = 0x180251032;
      cVar5 = FUN_1802aed00(&local_148,&local_138,&local_108,&local_108);
      if ((cVar5 != '\0') && ((fVar1 <= (float)local_f8 || (local_d8 == lVar6)))) {
        return (undefined1 *)0x1;
      }
    }
    pfVar7 = pfVar7 + 1;
    if (pfVar7 == (float *)&local_108) {
      return auStack_200;
    }
  } while( true );
}



/* ===== 1802510c0 FUN_1802510c0 ===== */

void FUN_1802510c0(undefined8 param_1,undefined8 param_2,char param_3,undefined4 param_4,
                  longlong *param_5,undefined4 param_6)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 local_b8;
  float local_b0;
  undefined4 local_ac;
  longlong local_a8;
  longlong local_a0;
  
  if (*param_5 == param_5[1]) {
    return;
  }
  if (param_3 == '\0') {
LAB_180251196:
    lVar5 = DAT_1809f31e0;
    if (DAT_1809f31e0 != 0) goto LAB_1802511cc;
    if (DAT_1809f31e8 == '\0') {
      lVar5 = FUN_180264b70(PTR_s_inferno_damage_1809f31d8);
      DAT_1809f31e8 = lVar5 == 0;
      DAT_1809f31e0 = lVar5;
LAB_1802511c7:
      if (lVar5 != 0) goto LAB_1802511cc;
    }
  }
  else {
    if (DAT_1809f2f10 == 0) {
      if (DAT_1809f2f18 == '\0') {
        DAT_1809f2f10 = FUN_180264b70(PTR_s_inferno_ct_experiment_1809f2f08);
        DAT_1809f2f18 = DAT_1809f2f10 == 0;
        if (DAT_1809f2f10 != 0) goto LAB_180251153;
      }
      goto LAB_180251196;
    }
LAB_180251153:
    cVar2 = FUN_180264d70(DAT_1809f2f10);
    if (cVar2 == '\0') goto LAB_180251196;
    lVar5 = DAT_1809f2ef8;
    if (DAT_1809f2ef8 == 0) {
      if (DAT_1809f2f00 == '\0') {
        lVar5 = FUN_180264b70(PTR_s_inferno_damage_ct_1809f2ef0);
        DAT_1809f2f00 = lVar5 == 0;
        DAT_1809f2ef8 = lVar5;
        goto LAB_1802511c7;
      }
      goto LAB_1802511f9;
    }
LAB_1802511cc:
    fVar3 = (float)FUN_180264d70(lVar5);
    if (((uint)fVar3 & 0x7f800000) != 0x7f800000) goto LAB_180251201;
  }
LAB_1802511f9:
  fVar3 = DAT_1808aca54;
LAB_180251201:
  uVar9 = 0;
  if (0.0 < fVar3) {
    if (param_3 == '\0') {
      uVar7 = DAT_1808acaa8;
    }
    else {
      uVar7 = DAT_1808aca80;
    }
    if ((DAT_180961a50 != 0) && (lVar5 = FUN_18000f3a0(), lVar5 != 0)) {
      uVar9 = FUN_18000f3d0(lVar5 + 0x30);
    }
    iVar4 = FUN_18026b500();
    if (iVar4 < 0) {
      fVar8 = DAT_1808acda0;
    }
    else {
      fVar8 = (float)iVar4 * DAT_1808ac00c;
    }
    FUN_1803a13a0(&local_a8);
    for (lVar5 = local_a8; lVar5 != local_a0; lVar5 = lVar5 + 0x10) {
      if ((((*(longlong *)(lVar5 + 8) != 0) &&
           (lVar6 = FUN_18000f3a0(*(longlong *)(lVar5 + 8) + 0x10), lVar6 != 0)) &&
          (cVar2 = FUN_180011220(lVar6 + 0x30), -1 < cVar2)) &&
         (((*(longlong *)(lVar5 + 8) != 0 && (DAT_180ca09f8 != 0)) &&
          ((lVar6 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + *(longlong *)(lVar5 + 8)), lVar6 != 0
           && (cVar2 = FUN_18038db70(param_2,*(undefined8 *)(lVar5 + 8),param_3,param_6,uVar9,fVar8)
              , cVar2 != '\0')))))) {
        lVar1 = param_5[1];
        for (lVar6 = *param_5; lVar6 != lVar1; lVar6 = lVar6 + 0xc) {
          cVar2 = FUN_180250d00(lVar6,lVar5 + 8,uVar7);
          if (cVar2 != '\0') {
            local_b8 = *(undefined8 *)(lVar5 + 8);
            local_b0 = fVar3;
            local_ac = param_4;
            FUN_18025d4d0(param_1,&local_b8);
            break;
          }
        }
      }
    }
    FUN_1800244c0(&local_a8);
  }
  return;
}



/* ===== 1802513d0 FUN_1802513d0 ===== */

void FUN_1802513d0(undefined8 param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  char *_Str1;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int iVar18;
  longlong *plVar19;
  bool bVar20;
  float fVar21;
  undefined1 local_res18 [16];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  
  if (DAT_180cf9c90 == 0) {
    return;
  }
  if (DAT_180cf9c94 == 0) {
    return;
  }
  if (DAT_180cf9ca4 == 0) {
    return;
  }
  if (DAT_180cf9c9c == 0) {
    return;
  }
  if (DAT_180cf9cac == 0) {
    return;
  }
  if ((DAT_180961a50 == 0) || (lVar10 = FUN_18000f3a0(), lVar10 == 0)) {
    fVar21 = 0.0;
  }
  else {
    fVar21 = (float)FUN_18000f3d0(lVar10 + 0x30);
  }
  FUN_1803a09f0(&local_b0);
  fVar4 = DAT_1808ac7ec;
  fVar3 = DAT_1808ac790;
  fVar2 = DAT_1808ac00c;
  puVar16 = auStack_118;
  puVar17 = auStack_118;
  plVar12 = local_b0;
  if (local_b0 != local_a8) {
    do {
      _Str1 = (char *)FUN_1803a0710(plVar12);
      if ((_Str1 != (char *)0x0) && (iVar6 = strcmp(_Str1,"C_Inferno"), iVar6 == 0)) {
        lVar10 = *plVar12;
        uVar15 = 0;
        bVar20 = false;
        do {
          if (bVar20) goto LAB_18025150f;
          cVar5 = FUN_180011220((ulonglong)DAT_180cf9c94 + uVar15 + lVar10);
          bVar20 = cVar5 != '\0';
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
        } while ((int)uVar14 < 0x40);
        if (cVar5 != '\0') {
LAB_18025150f:
          iVar6 = FUN_180011200((ulonglong)DAT_180cf9cac + lVar10);
          if (iVar6 == 1) {
            if (DAT_1809f2e38 == 0) {
              if (DAT_1809f2e40 == '\0') {
                DAT_1809f2e38 = FUN_180264b70(PTR_s_inferno_flame_lifetime_incendiar_1809f2e30);
                DAT_1809f2e40 = DAT_1809f2e38 == 0;
                if (DAT_1809f2e38 != 0) goto LAB_180251564;
              }
              fVar7 = fVar3;
            }
            else {
LAB_180251564:
              fVar7 = (float)FUN_180264d70(DAT_1809f2e38);
              if (((uint)fVar7 & 0x7f800000) == 0x7f800000) {
                fVar7 = fVar3;
              }
            }
          }
          else {
            if (DAT_1809f2f28 == 0) {
              if (DAT_1809f2f30 == '\0') {
                DAT_1809f2f28 = FUN_180264b70(PTR_s_inferno_flame_lifetime_1809f2f20);
                DAT_1809f2f30 = DAT_1809f2f28 == 0;
                if (DAT_1809f2f28 != 0) goto LAB_1802515cc;
              }
            }
            else {
LAB_1802515cc:
              fVar7 = (float)FUN_180264d70(DAT_1809f2f28);
              if (((uint)fVar7 & 0x7f800000) != 0x7f800000) goto LAB_1802515fd;
            }
            fVar7 = fVar4;
          }
LAB_1802515fd:
          iVar8 = FUN_180011200((ulonglong)DAT_180cf9c9c + lVar10);
          if ((fVar21 - (float)iVar8 * fVar2 < fVar7) &&
             (((DAT_180cf9ca8 == 0 ||
               (cVar5 = FUN_180011220(lVar10 + (ulonglong)DAT_180cf9ca8), cVar5 == '\0')) &&
              (iVar8 = FUN_180011200((ulonglong)DAT_180cf9c90 + lVar10), 0 < iVar8)))) {
            iVar18 = 0x40;
            if (iVar8 < 0x40) {
              iVar18 = iVar8;
            }
            local_c8 = 0;
            uStack_c0 = 0;
            local_b8 = 0;
            uVar15 = 0;
            if (0 < iVar18) {
              do {
                cVar5 = FUN_180011220(DAT_180cf9c94 + uVar15 + lVar10);
                if (cVar5 == '\x01') {
                  puVar11 = (undefined8 *)
                            FUN_1800111b0(local_d8,(ulonglong)DAT_180cf9ca4 + lVar10 + uVar15 * 0xc)
                  ;
                  local_e8 = *puVar11;
                  local_e0 = *(undefined4 *)(puVar11 + 1);
                  FUN_180081aa0(&local_c8,&local_e8);
                }
                uVar14 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar14;
              } while ((int)uVar14 < iVar18);
            }
            if (DAT_180cf9cb0 == 0) {
              uVar13 = 0;
            }
            else {
              uVar9 = FUN_180011200(lVar10 + (ulonglong)DAT_180cf9cb0);
              puVar11 = (undefined8 *)FUN_1803a0940(local_res18,uVar9);
              uVar13 = *puVar11;
            }
            local_f0 = 0;
            local_f8 = &local_c8;
            FUN_1802510c0(param_1,uVar13,iVar6 == 1,3);
            FUN_180011610(&local_c8);
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != local_a8);
  }
  if (local_b0 == (longlong *)0x0) {
    return;
  }
  plVar12 = local_b0;
  if (0xfff < (ulonglong)((local_a0 - (longlong)local_b0 >> 3) * 8)) {
    plVar12 = (longlong *)local_b0[-1];
    plVar19 = (longlong *)((longlong)local_b0 + (-8 - (longlong)plVar12));
    if (plVar19 <= &DAT_0000001f) goto LAB_180251784;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar16 = auStack_110;
    plVar12 = plVar19;
  }
  puVar17 = puVar16;
LAB_180251784:
  *(undefined8 *)(puVar17 + -8) = 0x180251789;
  thunk_FUN_1803d64e0(plVar12);
  return;
}



/* ===== 1802517d0 FUN_1802517d0 ===== */

undefined1 FUN_1802517d0(longlong *param_1,int param_2,float *param_3,int param_4)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_a8 [16];
  longlong local_98;
  longlong local_90;
  
  fVar16 = DAT_1808acaa8;
  fVar15 = DAT_1808aca80;
  bVar10 = param_2 == 0x30;
  if (bVar10) {
    fVar11 = (float)FUN_1802490c0(bVar10);
    fVar14 = DAT_1808aca20;
    fVar16 = fVar15;
  }
  else {
    fVar11 = (float)FUN_1802490c0(bVar10);
    fVar14 = DAT_1808aca64;
  }
  fVar15 = DAT_1808acd08;
  if (fVar14 <= fVar11 + fVar14) {
    fVar14 = fVar11 + fVar14;
  }
  lVar9 = 0;
  cVar8 = '\0';
  FUN_1803a13a0(&local_98);
  lVar7 = local_98;
  if (local_98 != local_90) {
    do {
      lVar5 = *(longlong *)(lVar7 + 8);
      if ((((lVar5 != 0) && (lVar5 != *param_1)) && (DAT_180ca09f0 != 0)) &&
         (iVar4 = FUN_180011200((ulonglong)DAT_180ca09f0 + lVar5), iVar4 - 1U < 1000)) {
        if (((DAT_1811160e8 == 0) &&
            (DAT_1811160e8 = FUN_180264b70("mp_teammates_are_enemies"), DAT_1811160e8 == 0)) ||
           (cVar1 = FUN_180264d70(DAT_1811160e8), cVar1 == '\0')) {
          if ((*(longlong *)(lVar7 + 8) == 0) || (DAT_180ca09f4 == 0)) {
            cVar1 = '\0';
          }
          else {
            cVar1 = FUN_180011220(*(longlong *)(lVar7 + 8) + (ulonglong)DAT_180ca09f4);
          }
          if ((*param_1 == 0) || (DAT_180ca09f4 == 0)) {
            cVar2 = '\0';
          }
          else {
            cVar2 = FUN_180011220(*param_1 + (ulonglong)DAT_180ca09f4);
          }
          if (cVar1 == cVar2) goto LAB_1802519f4;
        }
        cVar1 = FUN_180250d00(param_3,lVar7 + 8);
        if ((cVar1 != '\0') || (cVar2 = FUN_180250d00(param_3,lVar7 + 8), cVar2 != '\0')) {
          if ((*(longlong *)(lVar7 + 8) == 0) ||
             (((DAT_180ca09f8 == 0 ||
               (lVar5 = FUN_18000f3a0(*(longlong *)(lVar7 + 8) + (ulonglong)DAT_180ca09f8),
               lVar5 == 0)) || (DAT_180ca0950 == 0)))) {
            fVar11 = 0.0;
            fVar12 = 0.0;
            fVar13 = 0.0;
          }
          else {
            pfVar6 = (float *)FUN_1800111b0(local_a8,lVar5 + (ulonglong)DAT_180ca0950);
            fVar11 = *pfVar6;
            fVar12 = pfVar6[1];
            fVar13 = pfVar6[2];
          }
          fVar11 = (fVar12 - param_3[1]) * (fVar12 - param_3[1]) +
                   (fVar11 - *param_3) * (fVar11 - *param_3) +
                   (fVar13 - param_3[2]) * (fVar13 - param_3[2]);
          if (fVar11 < 0.0) {
            fVar11 = (float)FUN_18051af10();
          }
          else {
            fVar11 = SQRT(fVar11);
          }
          if (fVar11 < fVar15) {
            lVar9 = lVar7 + 8;
            fVar15 = fVar11;
            cVar8 = cVar1;
          }
        }
      }
LAB_1802519f4:
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != local_90);
    if (lVar9 != 0) {
      if (cVar8 == '\0') {
        uVar3 = FUN_180250d00(param_3,lVar9,
                              (fVar14 - fVar16) * (float)param_4 * DAT_1808ac000 + fVar16);
      }
      else {
        uVar3 = 1;
      }
      goto LAB_180251a46;
    }
  }
  uVar3 = 0;
LAB_180251a46:
  FUN_1800244c0(&local_98);
  return uVar3;
}



/* ===== 180251a80 FUN_180251a80 ===== */

undefined8 FUN_180251a80(longlong *param_1,undefined8 *param_2,ulonglong param_3,int param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  float *pfVar13;
  char *_Str1;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulonglong local_res18 [2];
  undefined8 local_c8;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == -1) {
    return 0;
  }
  local_res18[0] = param_3;
  puVar11 = (ulonglong *)FUN_1803a0940(&local_c8,param_4);
  if (*puVar11 != param_3) {
    return 0;
  }
  lVar16 = 0;
  if (((DAT_180ca09f8 == 0) || (lVar12 = FUN_18000f3a0(param_3 + DAT_180ca09f8), lVar12 == 0)) ||
     (DAT_180ca0950 == 0)) {
    fVar17 = 0.0;
    fVar19 = 0.0;
    fVar20 = 0.0;
  }
  else {
    pfVar13 = (float *)FUN_1800111b0(&local_b8,lVar12 + (ulonglong)DAT_180ca0950);
    fVar17 = *pfVar13;
    fVar19 = pfVar13[1];
    fVar20 = pfVar13[2];
  }
  local_c8 = param_3;
  _Str1 = (char *)FUN_1803a0710(&local_c8);
  if ((_Str1 != (char *)0x0) && (iVar9 = strcmp(_Str1,"C_Inferno"), iVar9 == 0)) {
    if (DAT_180cf9cb0 != 0) {
      uVar10 = FUN_180011200(param_3 + DAT_180cf9cb0);
      plVar14 = (longlong *)FUN_1803a0940(local_res18,uVar10);
      lVar16 = *plVar14;
    }
    if ((DAT_180cf9cac == 0) || (iVar9 = FUN_180011200(param_3 + DAT_180cf9cac), iVar9 != 1)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    goto LAB_180251ccf;
  }
  uVar15 = ((((((((param_3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ local_res18[0] >> 8 & 0xff
                 ) * 0x100000001b3 ^ local_res18[0] >> 0x10 & 0xff) * 0x100000001b3 ^
               local_res18[0] >> 0x18 & 0xff) * 0x100000001b3 ^ local_res18[0] >> 0x20 & 0xff) *
              0x100000001b3 ^ local_res18[0] >> 0x28 & 0xff) * 0x100000001b3 ^
            local_res18[0] >> 0x30 & 0xff) * 0x100000001b3 ^ local_res18[0] >> 0x38) * 0x100000001b3
           & DAT_180cf9d50;
  lVar12 = *(longlong *)(DAT_180cf9d38 + (uVar15 * 2 + 1) * 8);
  if (lVar12 == DAT_180cf9d28) {
LAB_180251c54:
    lVar12 = DAT_180cf9d28;
  }
  else {
    uVar2 = *(ulonglong *)(lVar12 + 0x10);
    while (param_3 != uVar2) {
      if (lVar12 == *(longlong *)(DAT_180cf9d38 + uVar15 * 0x10)) goto LAB_180251c54;
      lVar12 = *(longlong *)(lVar12 + 8);
      uVar2 = *(ulonglong *)(lVar12 + 0x10);
    }
    if (lVar12 == 0) goto LAB_180251c54;
  }
  if (lVar12 == DAT_180cf9d28) {
    return 0;
  }
  if (*(int *)(lVar12 + 0x18) != 0x2e) {
    return 0;
  }
  if (DAT_180cf9c80 != 0) {
    uVar10 = FUN_180011200(param_3 + DAT_180cf9c80);
    plVar14 = (longlong *)FUN_1803a0940(local_res18,uVar10);
    lVar16 = *plVar14;
  }
  if ((DAT_180cf9cb4 == 0) || (cVar7 = FUN_180011220(param_3 + DAT_180cf9cb4), cVar7 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(lVar12 + 0xb2) != '\0') &&
     (lVar3 = *(longlong *)(lVar12 + 0x40), *(longlong *)(lVar12 + 0x38) != lVar3)) {
    fVar17 = *(float *)(lVar3 + -0xc);
    fVar19 = *(float *)(lVar3 + -8);
    fVar20 = *(float *)(lVar3 + -4);
  }
LAB_180251ccf:
  if ((lVar16 != 0) && (*param_1 != 0)) {
    if (lVar16 == *param_1) {
      return 0;
    }
    if (((DAT_1811160e8 == 0) &&
        (DAT_1811160e8 = FUN_180264b70("mp_teammates_are_enemies"), DAT_1811160e8 == 0)) ||
       (cVar7 = FUN_180264d70(DAT_1811160e8), cVar7 == '\0')) {
      uVar6 = DAT_180ca09f4;
      uVar15 = (ulonglong)DAT_180ca09f4;
      if (DAT_180ca09f4 == 0) {
        cVar7 = '\0';
      }
      else {
        cVar7 = FUN_180011220(lVar16 + uVar15);
      }
      if ((*param_1 == 0) || (uVar6 == 0)) {
        cVar8 = '\0';
      }
      else {
        cVar8 = FUN_180011220(*param_1 + uVar15);
      }
      if (cVar7 == cVar8) {
        return 0;
      }
    }
  }
  fVar5 = DAT_1808ac34c;
  if (bVar4) {
    fVar18 = DAT_1808aca80;
  }
  else {
    fVar18 = DAT_1808acaa8;
  }
  uVar1 = *param_2;
  local_b8 = fVar17 + 0.0;
  local_c0 = *(float *)(param_2 + 1);
  local_b4 = fVar19 + 0.0;
  local_b0 = fVar20 + DAT_1808aca54;
  local_c8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  fVar17 = (float)uVar1 - local_b8;
  if ((local_c8._4_4_ - local_b4) * (local_c8._4_4_ - local_b4) + fVar17 * fVar17 +
      (local_c0 - local_b0) * (local_c0 - local_b0) < fVar18 * fVar18) {
    local_a8 = 1.0;
    local_a4 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    local_c8 = uVar1;
    cVar7 = FUN_18023bcf0(&local_b8,&local_c8,&PTR_FUN_1809f2ba8,0x1001,0x40000,3,&local_a8,0);
    if (cVar7 == '\0') {
      local_a8 = fVar5;
    }
    else if (local_a8 < fVar5) {
      local_c8 = CONCAT44(local_b4,local_b8);
      local_c0 = local_b0;
      if (fVar18 * fVar18 <=
          (local_b4 - local_b4) * (local_b4 - local_b4) +
          (local_b8 - local_b8) * (local_b8 - local_b8) +
          (local_b0 - local_b0) * (local_b0 - local_b0)) {
        return 0;
      }
      local_a8 = 1.0;
      local_a4 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      cVar7 = FUN_18023bcf0(&local_b8,&local_c8,&PTR_FUN_1809f2ba8,0x1001,0x40000,3,&local_a8,0);
      if (cVar7 == '\0') {
        local_a8 = fVar5;
      }
    }
    if (local_a8 == fVar5) {
      return 1;
    }
  }
  return 0;
}



/* ===== 180251f50 FUN_180251f50 ===== */

void FUN_180251f50(longlong param_1,float *param_2,int param_3,ulonglong param_4,char param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  float *pfVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  char *_Str1;
  longlong lVar9;
  float *pfVar10;
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  ulonglong local_res8;
  float *local_res10;
  int local_res18;
  char local_res20;
  longlong local_e8;
  char *local_e0;
  ulonglong local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  char local_b0;
  undefined1 uStack_af;
  undefined6 uStack_ae;
  longlong local_a8;
  longlong local_a0;
  
  *(int *)(param_1 + 0x58) = param_3;
  if (*(longlong *)(param_1 + 0x60) != *(longlong *)(param_1 + 0x68)) {
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x60);
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  if ((((param_3 == 0x2d) && (lVar9 = *(longlong *)(param_1 + 0x168), lVar9 != 0)) &&
      (*(int *)(param_1 + 0x170) != -1)) &&
     (plVar8 = (longlong *)FUN_1803a0940(&local_res8), *plVar8 == lVar9)) {
    *(undefined1 *)(param_1 + 0x79) = 1;
    cVar4 = '\0';
  }
  else {
    *(undefined1 *)(param_1 + 0x79) = 0;
    if ((param_3 - 0x2eU & 0xfffffffd) == 0) {
      cVar4 = '\x01';
    }
    else {
      cVar4 = '\0';
    }
  }
  local_e0 = (char *)(param_1 + 0x79);
  local_res20 = cVar4;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = local_res8;
    local_d8 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_d8 = DAT_1811089f8;
  }
  DAT_1811089f8 = local_d8;
  if ((*(char *)(param_1 + 0x7a) != '\0') && ((param_3 - 0x2bU < 2 || (cVar4 != '\0')))) {
    if ((param_4 == 0) ||
       (local_res8 = param_4, _Str1 = (char *)FUN_1803a0710(&local_res8), _Str1 == (char *)0x0)) {
LAB_1802520a6:
      local_res8 = local_res8 & 0xffffffffffffff00;
    }
    else {
      iVar7 = strcmp(_Str1,"C_CSPlayerPawn");
      local_res8 = CONCAT71(local_res8._1_7_,1);
      if (iVar7 != 0) goto LAB_1802520a6;
    }
    if (param_5 == '\0') {
      uVar18 = DAT_1808acaa8;
    }
    else {
      uVar18 = DAT_1808aca80;
    }
    if (cVar4 == '\0') {
      fVar13 = 0.0;
    }
    else {
      fVar13 = (float)FUN_1802490c0(param_5);
    }
    if (param_5 == '\0') {
      fVar17 = DAT_1808aca64;
    }
    else {
      fVar17 = DAT_1808aca20;
    }
    if (fVar17 <= fVar13 + fVar17) {
      fVar17 = fVar13 + fVar17;
    }
    FUN_1803a13a0(&local_a8);
    pfVar3 = local_res10;
    fVar13 = DAT_1808ac294;
    if (local_a8 != local_a0) {
      local_e8 = local_a8 + 8;
      uVar11 = (ulonglong)DAT_180ca09f4;
      lVar9 = DAT_1811160e8;
      lVar12 = local_a8;
      do {
        if (((*(longlong *)(lVar12 + 8) != 0) && (DAT_180ca09f0 != 0)) &&
           (iVar7 = FUN_180011200(*(longlong *)(lVar12 + 8) + (ulonglong)DAT_180ca09f0),
           iVar7 - 1U < 1000)) {
          uStack_b8 = 0;
          local_b0 = '\0';
          local_c0 = *(ulonglong *)(lVar12 + 8);
          if ((char)local_res8 == '\0') {
LAB_180252210:
            uStack_af = 1;
          }
          else {
            if (local_c0 != param_4) {
              if (lVar9 == 0) {
                lVar9 = FUN_180264b70("mp_teammates_are_enemies");
                uVar11 = (ulonglong)DAT_180ca09f4;
                DAT_1811160e8 = lVar9;
                if (lVar9 != 0) goto LAB_1802521ba;
              }
              else {
LAB_1802521ba:
                cVar4 = FUN_180264d70(lVar9);
                if (cVar4 != '\0') goto LAB_180252210;
              }
              if ((*(longlong *)(lVar12 + 8) == 0) || ((int)uVar11 == 0)) {
                cVar4 = '\0';
              }
              else {
                cVar4 = FUN_180011220(uVar11 + *(longlong *)(lVar12 + 8));
              }
              if ((param_4 == 0) || ((int)uVar11 == 0)) {
                cVar5 = '\0';
              }
              else {
                cVar5 = FUN_180011220(uVar11 + param_4);
              }
              if (cVar4 != cVar5) goto LAB_180252210;
            }
            uStack_af = 0;
          }
          if (local_res18 == 0x2c) {
            if ((DAT_180cf9c78 != 0) &&
               (cVar4 = FUN_180011220((ulonglong)DAT_180cf9c78 + *(longlong *)(lVar12 + 8)),
               cVar4 == '\0')) goto LAB_180252444;
            cVar4 = FUN_18024ffd0(local_e8,pfVar3,&uStack_b8,(longlong)&uStack_b8 + 4);
            if (cVar4 == '\0') goto LAB_180252437;
            local_b0 = FUN_1802509f0(local_e8,uStack_b8 & 0xffffffff);
LAB_180252408:
            puVar1 = *(undefined4 **)(param_1 + 0x68);
            if (puVar1 == *(undefined4 **)(param_1 + 0x70)) {
              FUN_1800435c0(param_1 + 0x60,puVar1,&local_c0);
            }
            else {
              *puVar1 = (undefined4)local_c0;
              puVar1[1] = local_c0._4_4_;
              puVar1[2] = (undefined4)uStack_b8;
              puVar1[3] = uStack_b8._4_4_;
              *(ulonglong *)(puVar1 + 4) = CONCAT62(uStack_ae,CONCAT11(uStack_af,local_b0));
              *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 0x18;
            }
          }
          else if (local_res18 == 0x2b) {
            fVar14 = (float)FUN_1802504e0(local_e8,pfVar3);
            uStack_b8 = CONCAT44(fVar14,fVar14);
            if (0.0 < fVar14) {
              local_b0 = fVar13 < fVar14;
              goto LAB_180252408;
            }
          }
          else {
            if ((DAT_180cf9c78 != 0) &&
               (cVar4 = FUN_180011220((ulonglong)DAT_180cf9c78 + *(longlong *)(lVar12 + 8)),
               cVar4 == '\0')) goto LAB_180252444;
            if ((param_4 != 0) && (param_4 != *(ulonglong *)(lVar12 + 8))) {
              if (lVar9 == 0) {
                lVar9 = FUN_180264b70("mp_teammates_are_enemies");
                uVar11 = (ulonglong)DAT_180ca09f4;
                DAT_1811160e8 = lVar9;
                if (lVar9 != 0) goto LAB_1802522e7;
              }
              else {
LAB_1802522e7:
                cVar4 = FUN_180264d70(lVar9);
                if (cVar4 != '\0') goto LAB_180252336;
              }
              if ((int)uVar11 == 0) {
                cVar4 = '\0';
              }
              else {
                cVar4 = FUN_180011220(uVar11 + param_4);
              }
              if ((*(longlong *)(lVar12 + 8) == 0) || ((int)uVar11 == 0)) {
                cVar5 = '\0';
              }
              else {
                cVar5 = FUN_180011220(uVar11 + *(longlong *)(lVar12 + 8));
              }
              if (cVar4 == cVar5) goto LAB_180252444;
            }
LAB_180252336:
            cVar4 = FUN_180250d00(pfVar3,local_e8,uVar18);
            if ((cVar4 != '\0') || (cVar5 = FUN_180250d00(pfVar3,local_e8,fVar17), cVar5 != '\0')) {
              if ((*(longlong *)(lVar12 + 8) == 0) ||
                 (((DAT_180ca09f8 == 0 ||
                   (lVar9 = FUN_18000f3a0(*(longlong *)(lVar12 + 8) + (ulonglong)DAT_180ca09f8),
                   lVar9 == 0)) || (DAT_180ca0950 == 0)))) {
                fVar14 = 0.0;
                fVar15 = 0.0;
                fVar16 = 0.0;
              }
              else {
                pfVar10 = (float *)FUN_1800111b0(local_d0,lVar9 + (ulonglong)DAT_180ca0950);
                fVar14 = *pfVar10;
                fVar15 = pfVar10[1];
                fVar16 = pfVar10[2];
              }
              fVar14 = (pfVar3[1] - fVar15) * (pfVar3[1] - fVar15) +
                       (*pfVar3 - fVar14) * (*pfVar3 - fVar14) +
                       (pfVar3[2] - fVar16) * (pfVar3[2] - fVar16);
              if (fVar14 < 0.0) {
                fVar14 = (float)FUN_18051af10(fVar14);
              }
              else {
                fVar14 = SQRT(fVar14);
              }
              uStack_b8 = CONCAT44(fVar14,fVar14);
              local_b0 = cVar4;
              goto LAB_180252408;
            }
          }
LAB_180252437:
          uVar11 = (ulonglong)DAT_180ca09f4;
          lVar9 = DAT_1811160e8;
        }
LAB_180252444:
        lVar12 = lVar12 + 0x10;
        local_e8 = local_e8 + 0x10;
      } while (lVar12 != local_a0);
      cVar4 = local_res20;
    }
    FUN_1800244c0(&local_a8);
  }
  bVar2 = false;
  if (((param_4 == 0) || (local_d8 == 0)) ||
     (*(longlong *)(param_1 + 0x60) == *(longlong *)(param_1 + 0x68))) goto LAB_180252535;
  if (param_4 == local_d8) {
    cVar5 = '\x01';
  }
  else {
    if (((DAT_1811160e8 == 0) && (DAT_1811160e8 = FUN_180264b70(), DAT_1811160e8 == 0)) ||
       (cVar5 = FUN_180264d70(), cVar5 == '\0')) {
      if (DAT_180ca09f4 == 0) {
        cVar5 = '\0';
        cVar6 = '\0';
      }
      else {
        cVar5 = FUN_180011220();
        cVar6 = FUN_180011220();
      }
      if (cVar5 == cVar6) {
        cVar5 = '\x01';
        goto LAB_180252508;
      }
    }
    cVar5 = '\0';
  }
LAB_180252508:
  bVar2 = false;
  for (lVar9 = *(longlong *)(param_1 + 0x60); lVar9 != *(longlong *)(param_1 + 0x68);
      lVar9 = lVar9 + 0x18) {
    if ((*(char *)(lVar9 + 0x11) == cVar5) && ((cVar4 != '\0' || (0.0 < *(float *)(lVar9 + 8))))) {
      bVar2 = true;
    }
  }
LAB_180252535:
  *(bool *)(param_1 + 0x78) = bVar2 || *local_e0 != '\0';
  return;
}



/* ===== 180252570 FUN_180252570 ===== */

ulonglong FUN_180252570(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 param_5,longlong param_6)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  longlong local_78;
  longlong local_70;
  
  iVar5 = (int)param_2;
  if (iVar5 == 0x2b) {
    FUN_1803a13a0(&local_78);
    fVar2 = DAT_1808ac294;
    if (local_78 != local_70) {
      uVar6 = (ulonglong)DAT_180ca09f4;
      lVar8 = local_78;
      lVar7 = DAT_1811160e8;
      do {
        lVar1 = *(longlong *)(lVar8 + 8);
        if (((lVar1 != 0) && (lVar1 != *param_1)) && (DAT_180ca09f0 != 0)) {
          iVar5 = FUN_180011200((ulonglong)DAT_180ca09f0 + lVar1);
          if (iVar5 - 1U < 1000) {
            if (lVar7 == 0) {
              lVar7 = FUN_180264b70("mp_teammates_are_enemies");
              uVar6 = (ulonglong)DAT_180ca09f4;
              DAT_1811160e8 = lVar7;
              if (lVar7 != 0) goto LAB_180252690;
LAB_18025269c:
              if ((*(longlong *)(lVar8 + 8) == 0) || ((int)uVar6 == 0)) {
                cVar3 = '\0';
              }
              else {
                cVar3 = FUN_180011220(uVar6 + *(longlong *)(lVar8 + 8));
              }
              if ((*param_1 == 0) || ((int)uVar6 == 0)) {
                cVar4 = '\0';
              }
              else {
                cVar4 = FUN_180011220(uVar6 + *param_1);
              }
              if (cVar3 == cVar4) goto LAB_1802526f9;
            }
            else {
LAB_180252690:
              cVar3 = FUN_180264d70(lVar7);
              if (cVar3 == '\0') goto LAB_18025269c;
            }
            fVar9 = (float)FUN_1802504e0(lVar8 + 8,param_3);
            if (fVar2 < fVar9) {
              uVar6 = 1;
              goto LAB_180252708;
            }
            uVar6 = (ulonglong)DAT_180ca09f4;
            lVar7 = DAT_1811160e8;
          }
        }
LAB_1802526f9:
        lVar8 = lVar8 + 0x10;
      } while (lVar8 != local_70);
    }
    uVar6 = 0;
LAB_180252708:
    FUN_1800244c0(&local_78);
  }
  else if (iVar5 == 0x2c) {
    uVar6 = FUN_180250ae0(param_1,param_3,*(undefined4 *)(param_6 + 0xc));
  }
  else if (iVar5 == 0x2d) {
    uVar6 = FUN_180251a80(param_1,param_3,param_4,param_5);
  }
  else if ((iVar5 == 0x2e) || (iVar5 == 0x30)) {
    uVar6 = FUN_1802517d0(param_1,param_2,param_3,*(undefined4 *)(param_6 + 0x10));
  }
  else {
    uVar6 = in_RAX & 0xffffffffffffff00;
  }
  return uVar6;
}



/* ===== 180252730 FUN_180252730 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180252730(longlong *param_1,byte param_2,undefined4 param_3,longlong param_4,char param_5)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uStack_7c;
  undefined4 local_78;
  uint local_70;
  undefined1 local_68 [80];
  
  uVar4 = _UNK_1808ad318;
  uVar3 = _DAT_1808ad310;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  local_78 = CONCAT22(local_78._2_2_,0x100);
  local_70 = local_70 & 0xffffff00;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  uStack_7c = (undefined4)((ulonglong)uVar4 >> 0x20);
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x114) = uVar4;
  *(undefined4 *)(param_1 + 0x23) = uStack_7c;
  *(undefined4 *)((longlong)param_1 + 0x11c) = local_78;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(uint *)((longlong)param_1 + 0x124) = local_70;
  if ((DAT_180961a50 == 0) || (lVar7 = FUN_18000f3a0(), lVar7 == 0)) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = (float)FUN_18000f3d0(lVar7 + 0x30);
  }
  if (param_2 == 0) {
    if ((DAT_180cf9cb8 == 0) ||
       (iVar6 = FUN_180011200((ulonglong)DAT_180cf9cb8 + param_1[9]), iVar6 < 1)) {
      fVar16 = DAT_1808acda0;
    }
    else {
      fVar16 = (float)iVar6 * DAT_1808ac00c;
    }
    if (fVar16 < 0.0) goto LAB_180252844;
  }
  else {
LAB_180252844:
    fVar16 = fVar9;
  }
  *(float *)(param_1 + 0x20) = fVar9;
  *(float *)((longlong)param_1 + 0x104) = fVar16;
  fVar10 = *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x23) = fVar9;
  fVar14 = 0.0;
  if (0.0 <= fVar10) {
    fVar14 = fVar10;
  }
  *(byte *)((longlong)param_1 + 0x11c) = param_2;
  *(byte *)((longlong)param_1 + 0x124) = param_2 ^ 1;
  *(float *)(param_1 + 0x21) = fVar14 + fVar16;
  *(undefined4 *)((longlong)param_1 + 0x114) = param_3;
  fVar16 = DAT_1808ac34c;
  *(undefined1 *)((longlong)param_1 + 0x11d) = 1;
  if ((param_2 == 0) || (param_5 != '\0')) {
    *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
    if (param_2 == 0) {
      if (*(char *)((longlong)param_1 + 0xa4) == '\0') {
        fVar10 = fVar14;
      }
      *(float *)((longlong)param_1 + 0x10c) = fVar10;
      if ((((param_1[9] == 0) || (DAT_180ca09f8 == 0)) ||
          (lVar7 = FUN_18000f3a0(param_1[9] + (ulonglong)DAT_180ca09f8), lVar7 == 0)) ||
         (DAT_180ca0950 == 0)) {
        uVar12 = 0;
        uVar13 = 0;
        uVar15 = 0;
      }
      else {
        puVar8 = (undefined4 *)FUN_1800111b0(local_68,lVar7 + (ulonglong)DAT_180ca0950);
        uVar12 = *puVar8;
        uVar13 = puVar8[1];
        uVar15 = puVar8[2];
      }
      *(undefined4 *)(param_1 + 0x1d) = uVar12;
      *(undefined4 *)((longlong)param_1 + 0xec) = uVar13;
      *(undefined4 *)(param_1 + 0x1e) = uVar15;
    }
    goto LAB_180252a54;
  }
  if (((param_4 == 0) || (DAT_180cf9c48 == 0)) ||
     ((fVar10 = (float)FUN_18000f3d0((ulonglong)DAT_180cf9c48 + param_4), fVar10 == 0.0 ||
      (((uint)fVar10 & 0x7f800000) == 0x7f800000)))) {
LAB_1802529a1:
    fVar9 = 0.0;
  }
  else {
    if ((DAT_180cf9c50 == 0) ||
       (cVar5 = FUN_180011220((ulonglong)DAT_180cf9c50 + param_4), cVar5 != '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (DAT_180cf9c4c == 0) {
LAB_180252952:
      bVar2 = false;
    }
    else {
      cVar5 = FUN_180011220((ulonglong)DAT_180cf9c4c + param_4);
      bVar2 = true;
      if (cVar5 != '\x01') goto LAB_180252952;
    }
    if ((bVar1) || (!bVar2)) {
      fVar14 = fVar10;
    }
    else {
      fVar14 = fVar9;
    }
    fVar11 = fVar14 - (fVar10 - DAT_1808ac0c0);
    fVar10 = 0.0;
    if (0.0 <= fVar11) {
      fVar10 = fVar11;
    }
    if (fVar10 <= 0.0) goto LAB_1802529a1;
    fVar11 = 0.0;
    if (0.0 <= fVar14 - fVar9) {
      fVar11 = fVar14 - fVar9;
    }
    fVar9 = fVar11 / fVar10;
    if (fVar16 <= fVar11 / fVar10) {
      fVar9 = fVar16;
    }
    fVar9 = fVar16 - fVar9;
  }
  *(float *)(param_1 + 0x22) = fVar9;
LAB_180252a54:
  if (*(char *)((longlong)param_1 + 0x7a) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x11d) = 0;
    fVar9 = DAT_1808ac188;
    if (param_2 == 0) {
      fVar9 = 0.0;
    }
    else {
      *(float *)((longlong)param_1 + 0x114) =
           (fVar16 - *(float *)(param_1 + 0x22)) * *(float *)((longlong)param_1 + 0x114);
    }
    *(float *)((longlong)param_1 + 0x114) = fVar9 * *(float *)((longlong)param_1 + 0x114);
  }
  lVar7 = param_1[1];
  if (*param_1 == lVar7) {
    uVar12 = 0;
    uVar13 = 0;
    uVar15 = 0;
  }
  else {
    uVar12 = *(undefined4 *)(lVar7 + -0xc);
    uVar13 = *(undefined4 *)(lVar7 + -8);
    uVar15 = *(undefined4 *)(lVar7 + -4);
  }
  if (((param_2 != 0) && (DAT_18095d2ca == '\0')) && (*(char *)((longlong)param_1 + 0x7b) != '\0'))
  {
    uVar12 = *(undefined4 *)((longlong)param_1 + 0x7c);
    uVar13 = (undefined4)param_1[0x10];
    uVar15 = *(undefined4 *)((longlong)param_1 + 0x84);
  }
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar12;
  *(undefined4 *)(param_1 + 0x1c) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar15;
  fVar9 = DAT_1808ac15c;
  fVar10 = DAT_1808ac15c;
  if ((char)param_1[0xf] == '\0') {
    if ((((int)param_1[0xb] - 0x2cU & 0xfffffff9) == 0) && ((int)param_1[0xb] != 0x32)) {
      fVar9 = fVar16;
      fVar16 = 0.0;
      fVar10 = 0.0;
    }
    else if (*(char *)((longlong)param_1 + 0x79) == '\0') {
      fVar9 = fVar16;
      fVar10 = fVar16;
    }
  }
  else {
  }
  *(float *)((longlong)param_1 + 0xcc) = fVar9;
  *(float *)(param_1 + 0x1a) = fVar16;
  *(float *)((longlong)param_1 + 0xd4) = fVar10;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  return;
}



/* ===== 180252bb0 FUN_180252bb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180252bb0(undefined8 *param_1,int param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  undefined *puVar4;
  char *pcVar5;
  float fVar6;
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined8 *local_48 [2];
  char local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  local_38[0x10] = '\0';
  local_38[0x11] = '\0';
  local_38[0x12] = '\0';
  local_38[0x13] = '\0';
  local_38[0x14] = '\0';
  local_38[0x15] = '\0';
  local_38[0x16] = '\0';
  local_38[0x17] = '\0';
  local_38[0x18] = '\0';
  local_38[0x19] = '\0';
  local_38[0x1a] = '\0';
  local_38[0x1b] = '\0';
  local_38[0x1c] = '\0';
  local_38[0x1d] = '\0';
  local_38[0x1e] = '\0';
  local_38[0x1f] = '\0';
  local_48[0] = param_1;
  if (param_2 == 0x2c) {
    pcVar5 = "%d dmg";
    fVar6 = (*(float *)(param_3 + 0xc) + *(float *)(param_3 + 8)) * DAT_1808ac1f4;
  }
  else {
    if (param_2 != 0x2b) {
      if ((param_2 - 0x2eU & 0xfffffffd) != 0) goto LAB_180252d1d;
      if (DAT_18091a1b8 == 2) {
LAB_180252cb8:
        fVar6 = (float)FUN_18053f0d0((*(float *)(param_3 + 8) / DAT_1808ac8b0) / DAT_1808ac750 +
                                     DAT_1808ac1f4);
        fVar6 = fVar6 * DAT_1808ac750;
        bVar1 = true;
      }
      else {
        if (DAT_18091a1b8 != 1) {
          if (DAT_1809f2f3c < 0) {
            local_48[0] = (undefined8 *)((ulonglong)param_1 & 0xffffffff00000000);
            iVar2 = GetLocaleInfoEx((LPCWSTR)0x0,0x2000000d,(LPWSTR)local_48,2);
            if (0 < iVar2) {
              DAT_1809f2f3c = 1;
              if ((int)local_48[0] == 1) goto LAB_180252c9d;
            }
            DAT_1809f2f3c = 0;
          }
LAB_180252c9d:
          if (DAT_1809f2f3c == 1) goto LAB_180252cb8;
        }
        fVar6 = (float)FUN_18053f0d0(*(float *)(param_3 + 8) * _DAT_1808ac034);
        bVar1 = false;
      }
      puVar4 = &DAT_1806e0448;
      if (bVar1) {
        puVar4 = &DAT_1806e0444;
      }
      fVar6 = (float)FUN_18053f0d0(fVar6);
      local_58 = puVar4;
      snprintf(local_38,0x20,"%d %s",(int)fVar6);
      goto LAB_180252d1d;
    }
    pcVar5 = "%d%%";
    fVar6 = *(float *)(param_3 + 8) * DAT_1808acb08;
  }
  snprintf(local_38,0x20,pcVar5,(int)fVar6);
LAB_180252d1d:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar3 = strlen(local_38);
  FUN_1800133a0(param_1,local_38,sVar3);
  return param_1;
}



/* ===== 180252d70 FUN_180252d70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180252d70(longlong param_1,longlong param_2,float param_3,char param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  ulonglong uVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  ulonglong *puVar9;
  float *pfVar10;
  undefined4 *puVar11;
  int *piVar12;
  longlong lVar13;
  int *piVar14;
  float *pfVar15;
  ulonglong *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined *puVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [24];
  float local_218;
  ulonglong *local_210;
  ulonglong *local_208;
  undefined8 local_200;
  ulonglong local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  char local_1d8;
  char local_1d7;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  int local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  ulonglong *local_1a0;
  ulonglong *puStack_198;
  ulonglong *local_190;
  undefined8 local_188;
  float local_180 [4];
  int local_170;
  int local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  longlong local_138;
  ulonglong local_130;
  ulonglong uStack_128;
  ulonglong local_120;
  ulonglong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  ulonglong local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  ulonglong local_e0;
  
  if (param_1 == 0) {
    return;
  }
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_238;
  puVar19 = auStack_238;
  if (((param_3 <= 0.0) ||
      (puVar19 = auStack_238, *(longlong *)(param_2 + 0x60) == *(longlong *)(param_2 + 0x68))) ||
     (puVar19 = auStack_238, *(longlong *)(param_2 + 0x88) == *(longlong *)(param_2 + 0x90)))
  goto LAB_1802537c8;
  local_1d7 = param_4;
  local_164 = param_3;
  local_138 = param_1;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_1d0);
    DAT_181108a00 = local_1d0;
    DAT_1811089f8 = FUN_1803a0c50();
    DAT_180cd1304 = '\x01';
  }
  lVar21 = DAT_1811089f8;
  uVar3 = _UNK_1808adab8;
  uVar2 = _DAT_1808adab0;
  fVar29 = DAT_1808ac34c;
  puVar17 = auStack_238;
  puVar18 = auStack_238;
  puVar19 = auStack_238;
  if (DAT_1811089f8 == 0) goto LAB_1802537c8;
  if ((local_1d7 == '\0') || (DAT_180921338 == '\0')) {
    local_1d8 = '\0';
  }
  else {
    local_1d8 = '\x01';
  }
  local_1a0 = (ulonglong *)0x0;
  puStack_198 = (ulonglong *)0x0;
  local_190 = (ulonglong *)0x0;
  plVar20 = *(longlong **)(param_2 + 0x60);
  local_188 = *(longlong **)(param_2 + 0x68);
  if (plVar20 != local_188) {
    do {
      uVar24 = 0;
      if (((*plVar20 != 0) && ((local_1d8 == '\0' || (*plVar20 != lVar21)))) &&
         ((*(int *)(param_2 + 0x58) != 0x2c ||
          (fVar29 < *(float *)((longlong)plVar20 + 0xc) ||
           fVar29 == *(float *)((longlong)plVar20 + 0xc))))) {
        uStack_128 = 0;
        local_120 = 0;
        uVar25 = 0xf;
        local_118 = 0xf;
        local_130 = 0;
        local_110 = uVar2;
        uStack_108 = uVar3;
        puVar9 = (ulonglong *)FUN_180252bb0(&local_100,*(int *)(param_2 + 0x58),plVar20);
        if (&local_130 != puVar9) {
          local_130 = *puVar9;
          uStack_128 = puVar9[1];
          uVar24 = puVar9[2];
          uVar25 = puVar9[3];
          puVar9[2] = 0;
          puVar9[3] = 0xf;
          *(undefined1 *)puVar9 = 0;
          local_120 = uVar24;
          local_118 = uVar25;
        }
        uVar5 = uStack_128;
        local_1d0 = local_130;
        FUN_18000f890(&local_100);
        if (uVar24 != 0) {
          lVar13 = *plVar20;
          if (lVar13 == lVar21) {
LAB_180253048:
            uVar30 = DAT_18095d2a8;
            uVar31 = DAT_18095d2ac;
            uVar32 = DAT_18095d2b0;
            uVar26 = DAT_18095d2a4;
LAB_180253068:
            uStack_108 = CONCAT44(uVar32,uVar31);
            local_110 = CONCAT44(uVar30,uVar26);
          }
          else {
            if (((DAT_1811160e8 == 0) &&
                (DAT_1811160e8 = FUN_180264b70("mp_teammates_are_enemies"), DAT_1811160e8 == 0)) ||
               (cVar6 = FUN_180264d70(DAT_1811160e8), cVar6 == '\0')) {
              if ((lVar13 == 0) || (DAT_180ca09f4 == 0)) {
                cVar6 = '\0';
              }
              else {
                cVar6 = FUN_180011220(lVar13 + (ulonglong)DAT_180ca09f4);
              }
              if (DAT_180ca09f4 == 0) {
                cVar7 = '\0';
              }
              else {
                cVar7 = FUN_180011220((ulonglong)DAT_180ca09f4 + lVar21);
              }
              if (cVar6 == cVar7) goto LAB_180253048;
            }
            if ((char)plVar20[2] != '\0') {
              uVar30 = DAT_18095d298;
              uVar31 = DAT_18095d29c;
              uVar32 = DAT_18095d2a0;
              uVar26 = DAT_18095d294;
              goto LAB_180253068;
            }
            uVar30 = local_110._4_4_;
            uVar31 = (undefined4)uStack_108;
            uVar32 = uStack_108._4_4_;
            uVar26 = (undefined4)local_110;
          }
          if (puStack_198 == local_190) {
            FUN_18025ef60(&local_1a0,puStack_198,&local_130);
          }
          else {
            *puStack_198 = local_1d0;
            puStack_198[1] = uVar5;
            puStack_198[2] = uVar24;
            puStack_198[3] = uVar25;
            local_120 = 0;
            local_118 = 0xf;
            local_130 = local_130 & 0xffffffffffffff00;
            *(undefined4 *)(puStack_198 + 4) = uVar26;
            *(undefined4 *)((longlong)puStack_198 + 0x24) = uVar30;
            *(undefined4 *)(puStack_198 + 5) = uVar31;
            *(undefined4 *)((longlong)puStack_198 + 0x2c) = uVar32;
            puStack_198 = puStack_198 + 6;
          }
        }
        FUN_18000f890(&local_130);
      }
      fVar35 = DAT_1811079b4;
      uVar26 = DAT_1811079b0;
      plVar20 = plVar20 + 3;
    } while (plVar20 != local_188);
    if (local_1a0 != puStack_198) {
      puVar22 = &DAT_181107930 + (longlong)DAT_181107a00 * 0x40;
      local_1d0 = 0;
      local_1c8 = *(undefined4 *)(param_2 + 0xdc);
      local_1c4 = *(undefined4 *)(param_2 + 0xe0);
      local_1c0 = *(undefined4 *)(param_2 + 0xe4);
      local_218 = DAT_1811079b4;
      cVar6 = FUN_1803a1bf0(puVar22,&local_1c8,&local_1d0,DAT_1811079b0);
      if (cVar6 == '\0') {
        local_1c8 = *(undefined4 *)(param_2 + 0xe8);
        local_1c4 = *(undefined4 *)(param_2 + 0xec);
        local_1c0 = *(undefined4 *)(param_2 + 0xf0);
        if ((local_1d7 == '\0') &&
           (puVar11 = *(undefined4 **)(param_2 + 0x88), puVar11 != *(undefined4 **)(param_2 + 0x90))
           ) {
          local_1c8 = *puVar11;
          local_1c4 = puVar11[1];
          local_1c0 = puVar11[2];
        }
        local_180[0] = 0.0;
        local_180[1] = *(float *)(param_2 + 0x100) - *(float *)(param_2 + 0x104);
        pfVar10 = local_180;
        if (0.0 <= local_180[1]) {
          pfVar10 = local_180 + 1;
        }
        local_180[2] = 0.0;
        local_180[3] = *(float *)(param_2 + 0x108) - *(float *)(param_2 + 0x104);
        pfVar15 = local_180 + 2;
        if (0.0 <= local_180[3]) {
          pfVar15 = local_180 + 3;
        }
        if (*pfVar10 <= *pfVar15 && *pfVar15 != *pfVar10) {
          pfVar15 = pfVar10;
        }
        for (puVar11 = *(undefined4 **)(param_2 + 0x88); puVar11 != *(undefined4 **)(param_2 + 0x90)
            ; puVar11 = puVar11 + 9) {
          if (*(char *)(puVar11 + 8) == '\x01') {
            if (*pfVar15 <= (float)puVar11[6] && (float)puVar11[6] != *pfVar15) {
              local_1c8 = *puVar11;
              local_1c4 = puVar11[1];
              local_1c0 = puVar11[2];
            }
            break;
          }
        }
        local_218 = fVar35;
        cVar6 = FUN_1803a1bf0(puVar22,&local_1c8,&local_1d0,uVar26);
        if (cVar6 == '\0') goto LAB_18025374d;
      }
      fVar29 = DAT_1808ac34c;
      if (DAT_18091a1b4 < 1) {
        fVar35 = DAT_1808ac34c;
      }
      else {
        if (DAT_18091a1b4 < 100) {
          iVar8 = 100;
        }
        else {
          iVar8 = DAT_18091a1b4;
          if (200 < DAT_18091a1b4) {
            iVar8 = 200;
          }
        }
        fVar35 = (float)iVar8 / DAT_1808acb08;
      }
      if ((local_1a0 != puStack_198) &&
         ((lVar21 = DAT_181107a28, DAT_181107a28 != 0 ||
          (lVar21 = *(longlong *)(DAT_180ca0a50 + 0x11f0), lVar21 != 0)))) {
        local_100 = _DAT_1808addd0;
        uStack_f8 = _UNK_1808addd8;
        local_f0 = 0x41900000;
        local_1b8 = 0;
        if (DAT_1808ac34c < fVar35) {
          local_1b8 = -(int)((fVar35 - DAT_1808ac34c) * _DAT_1808acddc);
        }
        local_16c = 4;
        local_170 = 0;
        piVar14 = &local_170;
        if (-1 < local_1b8) {
          piVar14 = &local_1b8;
        }
        piVar12 = &local_16c;
        if (local_1b8 < 5) {
          piVar12 = piVar14;
        }
        fVar34 = *(float *)((longlong)&local_100 + (longlong)*piVar12 * 4) * _DAT_1808ac3cc;
        local_168 = (float)FUN_18053fc00();
        lVar13 = FUN_180409a40(lVar21,fVar34,DAT_1808acda0);
        if ((lVar13 == 0) || (lVar13 = FUN_1804098c0(lVar13,0x41), lVar13 == 0)) {
          local_1b4 = 0.0;
          local_1a8 = fVar34;
        }
        else {
          fVar27 = (float)FUN_18053f0d0();
          local_1b4 = fVar27;
          fVar28 = (float)FUN_18053ef70();
          local_1a8 = fVar28 - fVar27;
        }
        puVar9 = puStack_198;
        if (local_1a0 != puStack_198) {
          if (param_3 <= fVar29) {
            fVar29 = param_3;
          }
          fVar28 = local_1d0._4_4_ - fVar35 * DAT_1808ac900;
          fVar33 = fVar35 * DAT_1808ac838;
          fVar27 = fVar35 * DAT_1808ac864;
          local_1d0 = CONCAT44(local_1d0._4_4_,fVar27);
          fVar36 = 0.0;
          local_160 = fVar35 * DAT_1808ac750;
          puVar16 = local_1a0;
          local_1ac = fVar33;
          local_15c = fVar29;
          local_158 = fVar28;
          do {
            fVar4 = local_1a8;
            if (0.0 < fVar29 * *(float *)((longlong)puVar16 + 0x2c)) {
              if (puVar16[2] != 0) {
                local_210 = puVar16;
                if (0xf < puVar16[3]) {
                  local_210 = (ulonglong *)*puVar16;
                }
                local_1e8 = 0;
                local_1f8 = 0;
                local_200 = 0;
                local_208 = (ulonglong *)0x0;
                local_218 = 0.0;
                FUN_18040a2f0(&local_1c8,lVar21,fVar34,DAT_1808acd08);
                fVar29 = (float)FUN_18053ef70();
                local_1b0 = fVar27 + fVar4;
                fVar28 = (float)FUN_18053fc00(fVar28 - fVar36);
                lVar13 = local_138;
                fVar28 = fVar28 - (fVar27 + fVar4);
                local_148 = local_168 - (fVar33 + fVar29) * DAT_1808ac1f4;
                local_150 = local_148 + fVar33 + fVar29;
                local_14c = fVar28 + local_1b0;
                local_218 = local_164;
                local_144 = fVar28;
                FUN_1800d3b00(local_138,&local_148,&local_150,local_1ac);
                fVar29 = (float)FUN_18053f0d0((local_160 + fVar28) - fVar35);
                fVar29 = fVar29 - local_1b4;
                fVar27 = (float)FUN_18053f0d0();
                local_188 = (longlong *)CONCAT44(fVar29,fVar27);
                puVar23 = puVar16;
                if (0xf < puVar16[3]) {
                  puVar23 = (ulonglong *)*puVar16;
                }
                fVar28 = (float)FUN_1800d39b0();
                local_140 = fVar27 + DAT_1808ac34c;
                local_13c = fVar29 + DAT_1808ac34c;
                if (((((uint)fVar28 & 0xff000000) != 0) && (puVar23 != (ulonglong *)0x0)) &&
                   ((char)*puVar23 != '\0')) {
                  fVar29 = fVar34;
                  if (fVar34 == 0.0) {
                    fVar29 = *(float *)(*(longlong *)(lVar13 + 0x38) + 0x20);
                  }
                  local_100 = *(ulonglong *)(lVar13 + 0x60);
                  uStack_f8 = *(undefined8 *)(lVar13 + 0x68);
                  local_1f0 = 0;
                  local_1f8 = local_1f8 & 0xffffffff00000000;
                  local_200 = 0;
                  local_210 = &local_100;
                  local_218 = fVar28;
                  local_208 = puVar23;
                  FUN_18040a900(lVar21,lVar13,fVar29,&local_140);
                }
                if (puVar16[3] < 0x10) {
                  puVar23 = puVar16;
                }
                else {
                  puVar23 = (ulonglong *)*puVar16;
                }
                fVar29 = (float)FUN_1800d39b0();
                if (((((uint)fVar29 & 0xff000000) != 0) && (puVar23 != (ulonglong *)0x0)) &&
                   ((char)*puVar23 != '\0')) {
                  fVar27 = fVar34;
                  if (fVar34 == 0.0) {
                    fVar27 = *(float *)(*(longlong *)(lVar13 + 0x38) + 0x20);
                  }
                  local_100 = *(ulonglong *)(lVar13 + 0x60);
                  uStack_f8 = *(undefined8 *)(lVar13 + 0x68);
                  local_1f0 = 0;
                  local_1f8 = local_1f8 & 0xffffffff00000000;
                  local_200 = 0;
                  local_210 = &local_100;
                  local_218 = fVar29;
                  local_208 = puVar23;
                  FUN_18040a900(lVar21,lVar13,fVar27,&local_188);
                }
                fVar36 = fVar36 + local_1b0;
                fVar29 = local_15c;
                fVar27 = (float)local_1d0;
                fVar28 = local_158;
                fVar33 = local_1ac;
              }
            }
            puVar16 = puVar16 + 6;
          } while (puVar16 != puVar9);
        }
      }
      DAT_180ccf89a = 1;
    }
  }
LAB_18025374d:
  puVar16 = puStack_198;
  puVar19 = auStack_238;
  puVar9 = local_1a0;
  if (local_1a0 == (ulonglong *)0x0) goto LAB_1802537c8;
  for (; puVar9 != puVar16; puVar9 = puVar9 + 6) {
    FUN_18000f890(puVar9);
  }
  puVar9 = local_1a0;
  if ((ulonglong)(((longlong)local_190 - (longlong)local_1a0 >> 4) << 4) < 0x1000) {
LAB_1802537bd:
    puVar18 = puVar17;
  }
  else {
    puVar9 = (ulonglong *)local_1a0[-1];
    if ((char *)0x1f < (char *)((longlong)local_1a0 + (-8 - (longlong)puVar9))) {
      puVar9 = (ulonglong *)&DAT_00000005;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar17 = auStack_230;
      goto LAB_1802537bd;
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x1802537c8;
  thunk_FUN_1803d64e0(puVar9);
  puVar19 = puVar18;
LAB_1802537c8:
  *(undefined8 *)(puVar19 + -8) = 0x1802537d4;
  return;
}



/* ===== 180253830 FUN_180253830 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180253830(ulonglong param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((((DAT_180cf9d70 != 0) ||
       ((DAT_1811089f0 != 0 &&
        (DAT_180cf9d70 = FUN_18038eaf0("C_BaseEntity","m_nCreationTick"), DAT_180cf9d70 != 0)))) &&
      (iVar2 = FUN_180011200(DAT_180cf9d70 + param_1), 0 < iVar2)) &&
     ((DAT_180961a50 != 0 && (lVar3 = FUN_18000f3a0(), lVar3 != 0)))) {
    FUN_18000f3d0(lVar3 + 0x30);
  }
  uVar4 = ((((((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_1 >> 8 & 0xff) *
                0x100000001b3 ^ param_1 >> 0x10 & 0xff) * 0x100000001b3 ^ param_1 >> 0x18 & 0xff) *
              0x100000001b3 ^ param_1 >> 0x20 & 0xff) * 0x100000001b3 ^ param_1 >> 0x28 & 0xff) *
            0x100000001b3 ^ param_1 >> 0x30 & 0xff) * 0x100000001b3 ^ param_1 >> 0x38) *
          0x100000001b3 & _DAT_180ca11b0;
  lVar3 = *(longlong *)(DAT_180ca1198 + 8 + uVar4 * 0x10);
  if (lVar3 != DAT_180ca1188) {
    uVar1 = *(ulonglong *)(lVar3 + 0x10);
    while ((param_1 != uVar1 && (lVar3 != *(longlong *)(DAT_180ca1198 + uVar4 * 0x10)))) {
      lVar3 = *(longlong *)(lVar3 + 8);
      uVar1 = *(ulonglong *)(lVar3 + 0x10);
    }
  }
  if (*(char *)(param_3 + 0x7a) != '\0') {
    if ((DAT_180961a50 != 0) && (lVar3 = FUN_18000f3a0(), lVar3 != 0)) {
      FUN_18000f3d0(lVar3 + 0x30);
    }
    if ((param_2 == 0x2d) &&
       ((DAT_180cf9d6c != 0 ||
        ((DAT_1811089f0 != 0 &&
         (DAT_180cf9d6c = FUN_18038eaf0("C_SmokeGrenadeProjectile","m_nSmokeEffectTickBegin"),
         DAT_180cf9d6c != 0)))))) {
      FUN_180011200(DAT_180cf9d6c + param_1);
    }
  }
  return;
}



/* ===== 180253b80 FUN_180253b80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180253b80(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uint *puVar18;
  undefined8 uVar19;
  char cVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [24];
  undefined1 local_248;
  undefined *local_238;
  undefined4 local_230;
  float local_22c;
  uint local_228 [4];
  undefined8 local_218;
  longlong lStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined2 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_268;
  if ((((((DAT_180961f40 == 0) || (DAT_180961f48 == 0)) || (DAT_180961f50 == 0)) ||
       ((DAT_180961f60 == 0 || (DAT_180961f68 == 0)))) || (DAT_180cfee68 == 0)) ||
     ((DAT_180cfee80 == 0 || (DAT_1809619a0 == 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((DAT_18095d281 == '\0') || (DAT_18095d2c8 == '\0')) &&
     ((DAT_18095d0cc == '\0' || (DAT_18095d0e6 == '\0')))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar20 = DAT_18095d281;
  if (bVar2) {
    if ((((!bVar3 && DAT_18095d281 == '\0') && (DAT_1809213ac == '\0')) && (DAT_180921338 == '\0'))
       && ((cVar5 = FUN_180241710(), cVar5 == '\0' && (DAT_18095d190 == '\0')))) {
      uVar17 = 0;
      local_228[0] = 0;
      local_228[1] = 1;
      puVar18 = local_228;
      do {
        lVar9 = 0;
        if (*puVar18 < 4) {
          lVar9 = (longlong)(int)*puVar18;
        }
        if (((&DAT_18091a1e0)[lVar9 * 0x192c] != '\0') && ((&DAT_18091a1e4)[lVar9 * 0x192c] != '\0')
           ) {
          uVar17 = uVar17 | (&DAT_18091b31c)[lVar9 * 0x64b] & 0xc;
        }
        puVar18 = puVar18 + 1;
      } while (puVar18 != local_228 + 2);
      if (uVar17 == 0) goto LAB_180253ce7;
    }
    cVar5 = '\x01';
LAB_180253cee:
    if (cVar20 == '\0') goto LAB_180253cfc;
LAB_180253d07:
    DAT_180ccf89b = 0;
    FUN_180241850();
    FUN_180241d40();
  }
  else {
LAB_180253ce7:
    cVar5 = '\0';
    if (bVar2) goto LAB_180253cee;
LAB_180253cfc:
    DAT_180ccf89b = 0;
    if (cVar5 != '\0') goto LAB_180253d07;
  }
  puVar13 = auStack_268;
  puVar14 = auStack_268;
  FUN_18024ec70();
  FUN_1802491a0(cVar5);
  if ((DAT_180961a50 == 0) || (lVar9 = FUN_18000f3a0(), lVar9 == 0)) {
    fVar21 = 0.0;
  }
  else {
    fVar21 = (float)FUN_18000f3d0(lVar9 + 0x30);
  }
  fVar23 = DAT_1808ac34c;
  if ((DAT_180cf9bf0 <= 0.0) || (fVar21 < DAT_180cf9bf0)) {
    fVar22 = 0.0;
  }
  else {
    fVar22 = DAT_1808ac0c0;
    if (fVar21 - DAT_180cf9bf0 <= DAT_1808ac0c0) {
      fVar22 = fVar21 - DAT_180cf9bf0;
    }
  }
  local_218 = 0;
  lStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0x10000;
  local_19c = 0;
  local_194 = 0;
  local_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_15c = 0;
  uStack_154 = 0;
  local_14c = 0;
  uStack_144 = 0;
  local_13c = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  local_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0x3f800000;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = CONCAT22(uStack_fc._2_2_,0x100);
  uStack_f8 = 0;
  uStack_f4 = uStack_f4 & 0xffffff00;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_9c = 0;
  local_94 = 0;
  local_8c = 0;
  local_238 = &DAT_1809f30e0;
  DAT_180cf9bf0 = fVar21;
  iVar6 = FUN_1804e4d70(&DAT_1809f30e0);
  if (iVar6 != 0) {
LAB_180254282:
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f312c == 0x7fffffff) {
LAB_18025426f:
    DAT_1809f312c = DAT_1809f312c + -1;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  iVar6 = 0;
  if (DAT_1809f3408 != DAT_1809f3410) {
    FUN_180254290(&local_218,&DAT_1809f3380);
    iVar6 = DAT_180cf9c38;
  }
  FUN_1804e4e90(&DAT_1809f30e0);
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_238);
    DAT_181108a00 = local_238;
    DAT_1811089f8 = FUN_1803a0c50(&local_238);
    DAT_180cd1304 = '\x01';
  }
  lVar9 = DAT_1811089f8;
  if ((((DAT_18095d281 == '\0') || (!bVar2)) || (iVar6 == 0)) || (DAT_1811089f8 == 0)) {
    DAT_180cf9d14 = 0.0;
    DAT_180cf9d0c = 0.0;
    fVar23 = 0.0;
  }
  else if (DAT_180ccf88d == '\0') {
    DAT_180ccf88d = '\x01';
    DAT_180cf9d14 = 0.5;
  }
  else {
    if (DAT_180cf9d14 == 0.0) {
      DAT_180cf9d0c = DAT_180cf9c3c;
    }
    DAT_180cf9d14 = DAT_180cf9d14 + fVar22;
    local_238 = (undefined *)CONCAT44(local_238._4_4_,0x3f800000);
    local_230 = 0;
    local_22c = DAT_180cf9d14 + DAT_180cf9d14;
    ppuVar12 = (undefined **)&local_230;
    if (0.0 <= local_22c) {
      ppuVar12 = (undefined **)&local_22c;
    }
    ppuVar10 = &local_238;
    if (local_22c <= fVar23) {
      ppuVar10 = ppuVar12;
    }
    fVar21 = fVar23 - *(float *)ppuVar10;
    fVar23 = (fVar23 - fVar21 * fVar21 * fVar21) * (fVar23 - DAT_180cf9d0c) + DAT_180cf9d0c;
  }
  puVar15 = auStack_268;
  DAT_180cf9c3c = fVar23;
  if (((DAT_18095d281 == '\0') || (puVar15 = auStack_268, !bVar2)) ||
     ((puVar15 = auStack_268, iVar6 == 0 || (puVar15 = auStack_268, DAT_1811089f8 == 0))))
  goto LAB_18025420c;
  local_248 = iVar6 == 0x30;
  FUN_180251f50(&local_218,lStack_210 + -0xc,iVar6,DAT_1811089f8);
  uVar4 = DAT_180ccf89c;
  if (((DAT_180ca0a0c == 0) || (uVar16 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 == 0)) ||
     (lVar9 = FUN_18000f3a0(lVar9 + (ulonglong)DAT_180ca0a0c), lVar9 == 0)) {
    uVar19 = 0;
  }
  else {
    uVar7 = FUN_180011200(lVar9 + uVar16);
    puVar11 = (undefined8 *)FUN_1803a0940(&local_238,uVar7);
    uVar19 = *puVar11;
  }
  local_248 = uVar4;
  FUN_180252730(&local_218,1,fVar23,uVar19);
  iVar8 = FUN_1804e4d70(&DAT_1809f30e0);
  if (iVar8 != 0) goto LAB_180254282;
  if (DAT_1809f312c == 0x7fffffff) goto LAB_18025426f;
  puVar15 = auStack_268;
  if ((DAT_180cf9c38 == iVar6) && (puVar15 = auStack_268, DAT_1809f3408 != DAT_1809f3410)) {
    _DAT_1809f33d8 = local_1c0;
    puVar15 = auStack_268;
    if (DAT_1809f33e0 != 0) {
      lVar9 = DAT_1809f33e0;
      if ((ulonglong)((DAT_1809f33f0 - DAT_1809f33e0 >> 3) * 8) < 0x1000) {
LAB_18025416a:
        puVar14 = puVar13;
      }
      else {
        lVar9 = *(longlong *)(DAT_1809f33e0 + -8);
        if (0x1f < (DAT_1809f33e0 - lVar9) - 8U) {
          lVar9 = 5;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar13 = auStack_260;
          goto LAB_18025416a;
        }
      }
      *(undefined8 *)(puVar14 + -8) = 0x180254175;
      thunk_FUN_1803d64e0(lVar9);
      puVar15 = puVar14;
    }
    DAT_1809f33e0 = local_1b8;
    _DAT_1809f33e8 = uStack_1b0;
    DAT_1809f33f0 = local_1a8;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    DAT_1809f33f8 = (undefined1)local_1a0;
    DAT_1809f33f9 = local_1a0._1_1_;
    _DAT_1809f343c = local_15c;
    uRam00000001809f3444 = uStack_154;
    _DAT_1809f344c = local_14c;
    uRam00000001809f3454 = uStack_144;
    uRam00000001809f3464 = CONCAT44(uStack_130,uStack_134);
    _DAT_1809f345c = local_13c;
    _DAT_1809f346c = CONCAT44(uStack_128,uStack_12c);
    uRam00000001809f3474 = CONCAT44(uStack_120,uStack_124);
    _DAT_1809f347c = CONCAT44(uStack_118,uStack_11c);
    uRam00000001809f3484 = CONCAT44(local_110,uStack_114);
    _DAT_1809f348c = CONCAT44(uStack_108,uStack_10c);
    uRam00000001809f3494 = CONCAT44(uStack_100,uStack_104);
    uRam00000001809f349c = uStack_fc;
    uRam00000001809f34a0 = uStack_f8;
    uRam00000001809f34a4 = uStack_f4;
  }
  *(undefined8 *)(puVar15 + -8) = 0x18025420b;
  FUN_1804e4e90(&DAT_1809f30e0);
LAB_18025420c:
  *(undefined8 *)(puVar15 + -8) = 0x180254215;
  FUN_18025deb0(&local_190);
  *(undefined8 *)(puVar15 + -8) = 0x18025421e;
  FUN_180042970(&local_1b8);
  *(undefined8 *)(puVar15 + -8) = 0x180254227;
  FUN_1800132b0(&local_1e8);
  *(undefined8 *)(puVar15 + -8) = 0x180254231;
  FUN_180068f30(puVar15 + 0x68);
  *(undefined8 *)(puVar15 + -8) = 0x18025423b;
  FUN_180011610(puVar15 + 0x50);
  *(undefined8 *)(puVar15 + -8) = 0x18025424a;
  return;
}



/* ===== 180254290 FUN_180254290 ===== */

longlong * FUN_180254290(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    FUN_18025ce80(param_1,*param_2,(param_2[1] - *param_2 >> 2) * -0x5555555555555555);
    FUN_180068ca0(param_1 + 3,param_2[3],param_2[4] - param_2[3] >> 2);
    FUN_18025d1c0(param_1 + 6,param_2[6],param_2[7] - param_2[6] >> 3);
  }
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  *(int *)(param_1 + 0xb) = (int)param_2[0xb];
  if (param_1 != param_2) {
    FUN_18025cce0(param_1 + 0xc,param_2[0xc],
                  (param_2[0xd] - param_2[0xc] >> 3) * -0x5555555555555555);
  }
  *(char *)(param_1 + 0xf) = (char)param_2[0xf];
  *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined1 *)((longlong)param_1 + 0x7a) = *(undefined1 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x7b) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined8 *)((longlong)param_1 + 0x7c) = *(undefined8 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  if (param_1 != param_2) {
    FUN_18025d020(param_1 + 0x11,param_2[0x11],
                  (param_2[0x12] - param_2[0x11] >> 2) * -0x71c71c71c71c71c7);
  }
  *(int *)(param_1 + 0x14) = (int)param_2[0x14];
  *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)((longlong)param_2 + 0xa4);
  *(undefined1 *)((longlong)param_1 + 0xa5) = *(undefined1 *)((longlong)param_2 + 0xa5);
  *(int *)(param_1 + 0x15) = (int)param_2[0x15];
  *(undefined8 *)((longlong)param_1 + 0xac) = *(undefined8 *)((longlong)param_2 + 0xac);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(int *)(param_1 + 0x17) = (int)param_2[0x17];
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xc4);
  *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)((longlong)param_2 + 0xbc);
  *(undefined8 *)((longlong)param_1 + 0xc4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xd4);
  *(undefined8 *)((longlong)param_1 + 0xcc) = *(undefined8 *)((longlong)param_2 + 0xcc);
  *(undefined8 *)((longlong)param_1 + 0xd4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xe4);
  *(undefined8 *)((longlong)param_1 + 0xdc) = *(undefined8 *)((longlong)param_2 + 0xdc);
  *(undefined8 *)((longlong)param_1 + 0xe4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xf4);
  *(undefined8 *)((longlong)param_1 + 0xec) = *(undefined8 *)((longlong)param_2 + 0xec);
  *(undefined8 *)((longlong)param_1 + 0xf4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x104);
  *(undefined8 *)((longlong)param_1 + 0xfc) = *(undefined8 *)((longlong)param_2 + 0xfc);
  *(undefined8 *)((longlong)param_1 + 0x104) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x114);
  *(undefined8 *)((longlong)param_1 + 0x10c) = *(undefined8 *)((longlong)param_2 + 0x10c);
  *(undefined8 *)((longlong)param_1 + 0x114) = uVar1;
  lVar2 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = lVar2;
  *(int *)(param_1 + 0x25) = (int)param_2[0x25];
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x134);
  *(undefined8 *)((longlong)param_1 + 300) = *(undefined8 *)((longlong)param_2 + 300);
  *(undefined8 *)((longlong)param_1 + 0x134) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x144);
  *(undefined8 *)((longlong)param_1 + 0x13c) = *(undefined8 *)((longlong)param_2 + 0x13c);
  *(undefined8 *)((longlong)param_1 + 0x144) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x154);
  *(undefined8 *)((longlong)param_1 + 0x14c) = *(undefined8 *)((longlong)param_2 + 0x14c);
  *(undefined8 *)((longlong)param_1 + 0x154) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x15c);
  *(char *)(param_1 + 0x2c) = (char)param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  *(int *)(param_1 + 0x2e) = (int)param_2[0x2e];
  *(undefined4 *)((longlong)param_1 + 0x174) = *(undefined4 *)((longlong)param_2 + 0x174);
  param_1[0x2f] = param_2[0x2f];
  *(int *)(param_1 + 0x30) = (int)param_2[0x30];
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x184);
  *(int *)(param_1 + 0x31) = (int)param_2[0x31];
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_2 + 0x18c);
  *(int *)(param_1 + 0x32) = (int)param_2[0x32];
  return param_1;
}



/* ===== 180254530 FUN_180254530 ===== */

ulonglong FUN_180254530(float *param_1,float *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((((((*param_1 == *param_2) && (param_1[3] == param_2[3])) && (param_1[6] == param_2[6])) &&
       ((param_1[1] == param_2[1] && (param_1[4] == param_2[4])))) && (param_1[7] == param_2[7])) &&
     ((((param_1[2] == param_2[2] && (param_1[5] == param_2[5])) &&
       ((param_1[8] == param_2[8] &&
        (((in_RAX = *(ulonglong *)(param_2 + 10), *(ulonglong *)(param_1 + 10) == in_RAX &&
          (in_RAX = *(ulonglong *)(param_2 + 0xc), *(ulonglong *)(param_1 + 0xc) == in_RAX)) &&
         (in_RAX = 0, *(char *)((longlong)param_1 + 0x25) == *(char *)((longlong)param_2 + 0x25)))))
       )) && (in_RAX = 0, *(char *)(param_1 + 9) == *(char *)(param_2 + 9))))) {
    lVar1 = *(longlong *)(param_1 + 0xe);
    lVar2 = *(longlong *)(param_2 + 0xe);
    in_RAX = *(longlong *)(param_2 + 0x10) - lVar2;
    if (*(longlong *)(param_1 + 0x10) - lVar1 == in_RAX) {
      in_RAX = 0x8e38e38e38e38e39;
      uVar4 = (*(longlong *)(param_1 + 0x10) - lVar1 >> 3) * -0x71c71c71c71c71c7;
      uVar3 = 0;
      if (uVar4 != 0) {
        do {
          if ((((*(float *)(lVar1 + uVar3 * 0x48) != *(float *)(lVar2 + uVar3 * 0x48)) ||
               (in_RAX = *(ulonglong *)(lVar2 + 8 + uVar3 * 0x48),
               *(ulonglong *)(lVar1 + 8 + uVar3 * 0x48) != in_RAX)) ||
              ((((in_RAX = 0,
                 *(char *)(lVar1 + 0x10 + uVar3 * 0x48) != *(char *)(lVar2 + 0x10 + uVar3 * 0x48) ||
                 ((in_RAX = 0,
                  *(char *)(lVar1 + 0x20 + uVar3 * 0x48) != *(char *)(lVar2 + 0x20 + uVar3 * 0x48)
                  || (in_RAX = 0,
                     *(char *)(lVar1 + 0x30 + uVar3 * 0x48) !=
                     *(char *)(lVar2 + 0x30 + uVar3 * 0x48))))) ||
                (in_RAX = 0,
                *(char *)(lVar1 + 0x40 + uVar3 * 0x48) != *(char *)(lVar2 + 0x40 + uVar3 * 0x48)))
               || ((((in_RAX = 0,
                     *(char *)(lVar1 + 0x41 + uVar3 * 0x48) !=
                     *(char *)(lVar2 + 0x41 + uVar3 * 0x48) ||
                     (in_RAX = 0,
                     *(char *)(lVar1 + 0x42 + uVar3 * 0x48) !=
                     *(char *)(lVar2 + 0x42 + uVar3 * 0x48))) ||
                    (*(float *)(lVar1 + 0x14 + uVar3 * 0x48) !=
                     *(float *)(lVar2 + 0x14 + uVar3 * 0x48))) ||
                   (((*(float *)(lVar1 + 0x24 + uVar3 * 0x48) !=
                      *(float *)(lVar2 + 0x24 + uVar3 * 0x48) ||
                     (*(float *)(lVar1 + 0x34 + uVar3 * 0x48) !=
                      *(float *)(lVar2 + 0x34 + uVar3 * 0x48))) ||
                    ((*(float *)(lVar1 + 0x18 + uVar3 * 0x48) !=
                      *(float *)(lVar2 + 0x18 + uVar3 * 0x48) ||
                     ((*(float *)(lVar1 + 0x28 + uVar3 * 0x48) !=
                       *(float *)(lVar2 + 0x28 + uVar3 * 0x48) ||
                      (*(float *)(lVar1 + 0x38 + uVar3 * 0x48) !=
                       *(float *)(lVar2 + 0x38 + uVar3 * 0x48))))))))))))) ||
             ((*(float *)(lVar1 + 0x1c + uVar3 * 0x48) != *(float *)(lVar2 + 0x1c + uVar3 * 0x48) ||
              ((*(float *)(lVar1 + 0x2c + uVar3 * 0x48) != *(float *)(lVar2 + 0x2c + uVar3 * 0x48)
               || (*(float *)(lVar1 + 0x3c + uVar3 * 0x48) !=
                   *(float *)(lVar2 + 0x3c + uVar3 * 0x48))))))) goto LAB_18025479e;
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
LAB_18025479e:
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 1802547b0 FUN_1802547b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1802547b0(longlong *param_1,int param_2,undefined8 *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  char cVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  int extraout_XMM0_Da;
  float fVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float local_res18 [4];
  undefined8 local_238;
  float local_230;
  float local_228;
  float local_224;
  float local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined2 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined8 uStack_1dc;
  undefined8 uStack_1d4;
  undefined8 uStack_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 uStack_18c;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined2 uStack_178;
  undefined8 uStack_174;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined8 uStack_14c;
  undefined2 uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  
  puVar12 = (undefined8 *)
            FUN_180242a40(&local_228,*(undefined4 *)((longlong)param_3 + 0x24),
                          *(undefined4 *)(param_3 + 5));
  fVar22 = (float)*puVar12;
  fVar23 = (float)((ulonglong)*puVar12 >> 0x20);
  fVar1 = *(float *)(puVar12 + 1);
  uVar14 = *param_3;
  local_238._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
  iVar18 = (int)local_238._4_4_;
  fVar20 = *(float *)(param_3 + 1) + (*(float *)(param_3 + 6) * DAT_1808ac8b0 - DAT_1808ac8b0);
  local_238 = uVar14;
  local_230 = fVar20;
  cVar10 = FUN_180243960();
  iVar21 = (int)uVar14;
  if (cVar10 == '\0') {
    local_218 = _DAT_1808ad2c0;
    uStack_210 = _UNK_1808ad2c8;
    local_208 = 0;
    uStack_200 = 0;
    local_224 = fVar23 * DAT_1808ac918 + local_238._4_4_;
    local_220 = fVar1 * DAT_1808ac918 + local_230;
    local_1f8 = 0;
    local_1f0 = 0;
    local_228 = fVar22 * DAT_1808ac918 + (float)local_238;
    local_1ec = 0;
    local_1e8 = 0x3f800000;
    cVar10 = FUN_1802aed00(&local_238,&local_228,&DAT_18063fd08,&DAT_18063fd30,*param_1,0x2000c3001,
                           4,0xf,&local_218,0);
    if (cVar10 == '\0') {
      return 0;
    }
    fVar20 = uStack_210._4_4_;
    iVar21 = local_218._4_4_;
    iVar18 = (int)uStack_210;
  }
  local_1e0 = 0;
  uStack_1dc = 0;
  uStack_1d4 = 0;
  local_c8 = 0x200003001;
  lVar16 = 2;
  local_19c = 0xbf800000;
  local_1bc = _DAT_1808ad9b0;
  uStack_1b4 = _UNK_1808ad9b8;
  local_c0 = 0x8000100000;
  local_198 = 0;
  local_1ac = 0;
  uStack_1a4 = 0;
  local_190 = 0;
  local_160 = 0;
  uStack_158 = 0;
  uStack_18c = 0;
  local_140 = 0;
  uStack_138 = 0;
  uStack_188 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_180 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_178 = 0;
  uStack_1cc = 0;
  uStack_1c4 = 0;
  uStack_174 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  local_150 = 0;
  uStack_14c = 0;
  uStack_144 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_110 = 0;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0x10;
  local_a8 = 0;
  piVar9 = param_4;
  puVar12 = (undefined8 *)&local_1e0;
  do {
    puVar15 = puVar12;
    piVar13 = piVar9;
    uVar14 = puVar15[1];
    uVar6 = puVar15[2];
    uVar7 = puVar15[3];
    *(undefined8 *)piVar13 = *puVar15;
    *(undefined8 *)(piVar13 + 2) = uVar14;
    uVar14 = puVar15[4];
    uVar8 = puVar15[5];
    *(undefined8 *)(piVar13 + 4) = uVar6;
    *(undefined8 *)(piVar13 + 6) = uVar7;
    uVar6 = puVar15[6];
    uVar7 = puVar15[7];
    *(undefined8 *)(piVar13 + 8) = uVar14;
    *(undefined8 *)(piVar13 + 10) = uVar8;
    uVar14 = puVar15[8];
    uVar8 = puVar15[9];
    *(undefined8 *)(piVar13 + 0xc) = uVar6;
    *(undefined8 *)(piVar13 + 0xe) = uVar7;
    uVar6 = puVar15[10];
    uVar7 = puVar15[0xb];
    *(undefined8 *)(piVar13 + 0x10) = uVar14;
    *(undefined8 *)(piVar13 + 0x12) = uVar8;
    uVar14 = puVar15[0xc];
    uVar8 = puVar15[0xd];
    *(undefined8 *)(piVar13 + 0x14) = uVar6;
    *(undefined8 *)(piVar13 + 0x16) = uVar7;
    uVar6 = puVar15[0xe];
    uVar7 = puVar15[0xf];
    *(undefined8 *)(piVar13 + 0x18) = uVar14;
    *(undefined8 *)(piVar13 + 0x1a) = uVar8;
    *(undefined8 *)(piVar13 + 0x1c) = uVar6;
    *(undefined8 *)(piVar13 + 0x1e) = uVar7;
    lVar16 = lVar16 + -1;
    piVar9 = piVar13 + 0x20;
    puVar12 = puVar15 + 0x10;
  } while (lVar16 != 0);
  uVar14 = puVar15[0x11];
  uVar6 = puVar15[0x12];
  uVar7 = puVar15[0x13];
  *(undefined8 *)(piVar13 + 0x20) = puVar15[0x10];
  *(undefined8 *)(piVar13 + 0x22) = uVar14;
  uVar14 = puVar15[0x14];
  uVar8 = puVar15[0x15];
  *(undefined8 *)(piVar13 + 0x24) = uVar6;
  *(undefined8 *)(piVar13 + 0x26) = uVar7;
  iVar2 = *(int *)(puVar15 + 0x16);
  iVar3 = *(int *)((longlong)puVar15 + 0xb4);
  iVar4 = *(int *)(puVar15 + 0x17);
  iVar5 = *(int *)((longlong)puVar15 + 0xbc);
  *(undefined8 *)(piVar13 + 0x28) = uVar14;
  *(undefined8 *)(piVar13 + 0x2a) = uVar8;
  piVar13[0x2c] = iVar2;
  piVar13[0x2d] = iVar3;
  piVar13[0x2e] = iVar4;
  piVar13[0x2f] = iVar5;
  *param_4 = param_2;
  *(longlong *)(param_4 + 0x1e) = *param_1;
  if ((((*param_1 == 0) || (DAT_180ca0a0c == 0)) ||
      (uVar17 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 == 0)) ||
     (lVar16 = FUN_18000f3a0(*param_1 + (ulonglong)DAT_180ca0a0c), lVar16 == 0)) {
    uVar14 = 0;
  }
  else {
    uVar11 = FUN_180011200(lVar16 + uVar17);
    puVar12 = (undefined8 *)FUN_1803a0940(local_res18,uVar11);
    uVar14 = *puVar12;
  }
  param_4[1] = iVar21;
  param_4[2] = iVar18;
  param_4[3] = (int)fVar20;
  *(undefined8 *)(param_4 + 0x40) = uVar14;
  fVar20 = *(float *)((longlong)param_3 + 0x34);
  fVar19 = *(float *)(param_3 + 4) * DAT_1808ac3d4;
  *(ulonglong *)(param_4 + 4) =
       CONCAT44((float)((ulonglong)param_3[3] >> 0x20) * _UNK_1808adc54 + fVar23 * fVar20,
                (float)param_3[3] * _DAT_1808adc50 + fVar22 * fVar20);
  param_4[6] = (int)(fVar19 + fVar1 * fVar20);
  if (DAT_1809f3060 == 0) {
    if (DAT_1809f3068 == '\0') {
      DAT_1809f3060 = FUN_180264b70(PTR_s_sv_gravity_1809f3058);
      DAT_1809f3068 = DAT_1809f3060 == 0;
      if (DAT_1809f3060 != 0) goto LAB_180254b89;
    }
LAB_180254bb4:
    fVar1 = DAT_1808acc30;
  }
  else {
LAB_180254b89:
    local_res18[0] = (float)FUN_180264d70(DAT_1809f3060);
    fVar1 = local_res18[0];
    if (((uint)local_res18[0] & 0x7f800000) == 0x7f800000) goto LAB_180254bb4;
  }
  param_4[10] = (int)(fVar1 * DAT_1808ac1b0);
  if (DAT_1809f3138 == 0) {
    if (DAT_1809f3140 == '\0') {
      DAT_1809f3138 = FUN_180264b70(PTR_s_weapon_molotov_maxdetonateslope_1809f3130);
      DAT_1809f3140 = DAT_1809f3138 == 0;
      if (DAT_1809f3138 != 0) goto LAB_180254c00;
    }
  }
  else {
LAB_180254c00:
    local_res18[0] = (float)FUN_180264d70(DAT_1809f3138);
    fVar1 = local_res18[0];
    if (((uint)local_res18[0] & 0x7f800000) != 0x7f800000) goto LAB_180254c33;
  }
  fVar1 = DAT_1808aca54;
LAB_180254c33:
  iVar18 = FUN_180517200(fVar1 * DAT_1808ac014);
  param_4[0xd] = iVar18;
  param_4[0xe] = 0;
  FUN_180242810(param_2);
  param_4[0xf] = extraout_XMM0_Da;
  if (*param_4 == 0x2f) {
    iVar18 = DAT_1808ac540;
  }
  else {
    iVar18 = 0;
  }
  param_4[0x10] = iVar18;
  return 1;
}



/* ===== 180254ca0 FUN_180254ca0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180254ca0(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = DAT_1809f2fe8;
  _DAT_1809f2fec = _DAT_1809f2fb0;
  uRam00000001809f2ff4 = uRam00000001809f2fb8;
  DAT_1809f3020._5_2_ = DAT_1809f2fe9;
  _DAT_1809f2ffc = _DAT_1809f2fc0;
  uRam00000001809f3004 = uRam00000001809f2fc8;
  DAT_1809f3020._7_1_ = DAT_1809f2feb;
  _DAT_1809f300c = _DAT_1809f2fd0;
  uRam00000001809f3014 = uRam00000001809f2fd8;
  DAT_1809f3020._4_1_ = DAT_1809f2fe8;
  _DAT_1809f301c = DAT_1809f2fe0;
  _DAT_1809f2fb0 = *param_1;
  uRam00000001809f2fb8 = param_1[1];
  _DAT_1809f2fc0 = param_1[2];
  uRam00000001809f2fc8 = param_1[3];
  _DAT_1809f2fd0 = param_1[4];
  uRam00000001809f2fd8 = param_1[5];
  DAT_1809f2fe0 = param_1[6];
  DAT_1809f2fe8 = *(undefined1 *)(param_1 + 7);
  DAT_1809f2fe9 = *(undefined2 *)((longlong)param_1 + 0x39);
  DAT_1809f2feb = *(undefined1 *)((longlong)param_1 + 0x3b);
  if ((*(char *)(param_1 + 7) != '\0') && (cVar1 == '\0')) {
    _DAT_1809f2fec = *param_1;
    uRam00000001809f2ff4 = param_1[1];
    _DAT_1809f2ffc = param_1[2];
    uRam00000001809f3004 = param_1[3];
    _DAT_1809f300c = param_1[4];
    uRam00000001809f3014 = param_1[5];
    _DAT_1809f301c = param_1[6];
    DAT_1809f3020._4_1_ = *(char *)(param_1 + 7);
    DAT_1809f3020._5_2_ = *(undefined2 *)((longlong)param_1 + 0x39);
    DAT_1809f3020._7_1_ = *(undefined1 *)((longlong)param_1 + 0x3b);
  }
  return;
}



/* ===== 180254db0 FUN_180254db0 ===== */

void FUN_180254db0(undefined8 param_1,char param_2)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f3070);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f30bc == 0x7fffffff) {
    DAT_1809f30bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (param_2 == '\0') {
    if (DAT_1809f2f90 == '\0') {
      FUN_180254ca0(param_1);
    }
  }
  else {
    FUN_180254ca0(param_1);
    DAT_1809f2f90 = '\x01';
  }
  FUN_180254ca0(param_1);
  DAT_1809f2f90 = 1;
  DAT_1809f2fac = param_2;
  FUN_1804e4e90(&DAT_1809f3070);
  return;
}



/* ===== 180254e50 FUN_180254e50 ===== */

float * FUN_180254e50(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = DAT_1808abff8;
  param_2 = param_2 * DAT_1808abff8;
  fVar1 = (float)FUN_180517790(param_2);
  fVar2 = (float)FUN_180517200(param_2);
  param_3 = param_3 * fVar5;
  fVar3 = (float)FUN_180517790(param_3);
  fVar4 = (float)FUN_180517200(param_3);
  param_4 = param_4 * fVar5;
  fVar5 = (float)FUN_180517790(param_4);
  fVar6 = (float)FUN_180517200(param_4);
  *param_1 = fVar5 * fVar2 * fVar4 - fVar6 * fVar1 * fVar3;
  param_1[1] = fVar6 * fVar1 * fVar4 + fVar5 * fVar2 * fVar3;
  param_1[3] = fVar6 * fVar2 * fVar4 + fVar5 * fVar1 * fVar3;
  param_1[2] = fVar6 * fVar2 * fVar3 - fVar5 * fVar1 * fVar4;
  return param_1;
}



/* ===== 180254f90 FUN_180254f90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_180254f90(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_118 [32];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0 [21];
  
  fVar1 = DAT_1808acbd0;
  fVar7 = DAT_1808acb58;
  fVar12 = DAT_1808acaf4;
  fVar6 = DAT_1808ac1f4;
  fVar5 = DAT_1808abfd0;
  local_c0[0] = DAT_180919500 ^ (ulonglong)auStack_118;
  fVar11 = *param_3;
  fVar10 = *param_2;
  fVar8 = param_2[1];
  fVar9 = param_3[1];
  local_f8 = param_4;
  if (DAT_1808acaf4 <= fVar11) {
    fVar9 = fVar9 + DAT_1808acb58;
    fVar4 = (float)FUN_18053f0d0(fVar9 * DAT_1808abfd0 + DAT_1808ac1f4);
    fVar9 = fVar9 - fVar4 * fVar1;
    fVar11 = (fVar7 - fVar11) / DAT_1808ac3d4;
  }
  if (fVar12 <= fVar10) {
    fVar5 = (float)FUN_18053f0d0((fVar8 + fVar7) * fVar5 + fVar6);
    fVar8 = (fVar8 + fVar7) - fVar5 * fVar1;
    fVar10 = (fVar7 - fVar10) / DAT_1808ac3d4;
  }
  pfVar3 = (float *)FUN_180254e50(local_e0,fVar10,fVar8,param_2[2]);
  fVar10 = *pfVar3;
  fVar8 = pfVar3[1];
  fVar5 = pfVar3[2];
  fVar12 = pfVar3[3];
  pfVar3 = (float *)FUN_180254e50(local_e0,fVar11,fVar9,param_3[2]);
  fVar9 = local_f8;
  uVar2 = DAT_1808adec0;
  fVar6 = local_f8 - fVar6;
  fVar7 = pfVar3[3] * fVar12 + pfVar3[2] * fVar5 + pfVar3[1] * fVar8 + *pfVar3 * fVar10;
  fVar11 = (float)((uint)fVar7 & _DAT_1808ade90);
  local_f8 = 0.0;
  fVar9 = ((((DAT_1808ac6c0 - fVar11 * _DAT_1808ac418) * fVar11 - _DAT_1808ac690) * fVar11 +
           DAT_1808ac390) * fVar6 * fVar6 + (fVar11 * _DAT_1808ac128 - _DAT_1808ac384) * fVar11 +
          _DAT_1808ac2b0) * fVar6 * (fVar9 - DAT_1808ac34c) * fVar9 + fVar9;
  fVar11 = fVar9;
  if ((fVar7 <= 0.0) && (!NAN(fVar7))) {
    fVar11 = (float)((uint)fVar9 ^ DAT_1808adec0);
  }
  fVar9 = DAT_1808ac34c - fVar9;
  fVar8 = fVar8 * fVar9 + pfVar3[1] * fVar11;
  fVar6 = fVar10 * fVar9 + *pfVar3 * fVar11;
  fVar10 = fVar5 * fVar9 + pfVar3[2] * fVar11;
  fVar11 = fVar12 * fVar9 + pfVar3[3] * fVar11;
  local_d0 = CONCAT44(fVar8,fVar6);
  uStack_c8 = CONCAT44(fVar11,fVar10);
  fVar11 = fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8 + fVar6 * fVar6;
  if (fVar11 == 0.0) {
    local_d0 = _DAT_1808adae0;
    uStack_c8 = _UNK_1808adae8;
  }
  else {
    if (fVar11 < 0.0) {
      fVar11 = (float)FUN_18051af10();
    }
    else {
      fVar11 = SQRT(fVar11);
    }
    pfVar3 = (float *)&local_d0;
    do {
      *pfVar3 = *pfVar3 / fVar11;
      pfVar3 = pfVar3 + 1;
    } while (pfVar3 != (float *)local_c0);
  }
  fVar8 = uStack_c8._4_4_;
  fVar11 = (float)local_d0;
  fVar12 = (float)((uint)(float)uStack_c8 ^ uVar2);
  fVar10 = local_d0._4_4_;
  fVar7 = (float)((uint)local_d0._4_4_ ^ uVar2);
  local_ec = (float)((uint)(float)local_d0 ^ uVar2);
  local_e4 = fVar12 * (float)uStack_c8 + uStack_c8._4_4_ * uStack_c8._4_4_;
  fVar6 = (float)((uint)local_d0._4_4_ ^ uVar2);
  fVar5 = local_e4 + fVar7 * local_d0._4_4_ + (float)((uint)(float)local_d0 ^ uVar2) * local_ec;
  local_f0 = (float)((uint)(float)uStack_c8 ^ uVar2);
  fVar9 = uStack_c8._4_4_ * (float)uStack_c8 + uStack_c8._4_4_ * (float)uStack_c8 + fVar7 * local_ec
          + (float)((uint)(float)local_d0 ^ uVar2) * fVar7;
  local_e8 = (float)local_d0 * local_ec;
  local_f4 = fVar5 * fVar5 + fVar9 * fVar9;
  if (local_f4 < 0.0) {
    local_f4 = (float)FUN_18051af10();
  }
  else {
    local_f4 = SQRT(local_f4);
  }
  if (DAT_1808abfbc < local_f4) {
    local_f8 = (float)FUN_180516b00(fVar12 * fVar7 + fVar8 * fVar11 + fVar8 * fVar11 +
                                    fVar6 * fVar12,
                                    fVar10 * fVar7 + local_e8 + fVar8 * fVar8 + local_f0 * fVar12);
    local_f8 = local_f8 * DAT_1808aca94;
  }
  fVar11 = DAT_1808aca94;
  fVar10 = (float)FUN_180516b00();
  *param_1 = fVar10 * fVar11;
  fVar10 = (float)FUN_180516b00();
  param_1[2] = local_f8;
  param_1[1] = fVar10 * fVar11;
  return param_1;
}



/* ===== 180255520 FUN_180255520 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_180255520(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 *param_5,undefined1 *param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 *puVar23;
  char cVar24;
  int iVar25;
  longlong lVar26;
  undefined4 *puVar27;
  float *pfVar28;
  float *pfVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  longlong lVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  undefined4 local_218 [2];
  undefined8 local_210;
  undefined8 uStack_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float fStack_1e4;
  float local_1e0;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined4 local_1cc;
  undefined1 local_1c8;
  float local_1c0 [4];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  longlong lStack_170;
  undefined1 local_168 [16];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  
  puVar23 = param_6;
  *param_6 = 0;
  iVar25 = FUN_1804e4d70(&DAT_1809f3070);
  fVar22 = _DAT_1809f300c;
  fVar21 = fRam00000001809f3008;
  fVar20 = fRam00000001809f3004;
  fVar19 = _DAT_1809f3000;
  fVar18 = _DAT_1809f2ffc;
  fVar17 = fRam00000001809f2ff8;
  fVar16 = fRam00000001809f2ff4;
  fVar15 = _DAT_1809f2ff0;
  auVar14 = _DAT_1809f2fe0;
  fVar13 = fRam00000001809f2fcc;
  fVar12 = fRam00000001809f2fc8;
  fVar11 = fRam00000001809f2fc4;
  fVar10 = _DAT_1809f2fc0;
  fVar9 = fRam00000001809f2fbc;
  fVar8 = fRam00000001809f2fb8;
  fVar7 = fRam00000001809f2fb4;
  fVar36 = _DAT_1809f2fb0;
  auVar6 = _DAT_1809f2fa0;
  lVar26 = DAT_1809f2f98;
  uVar5 = _DAT_1809f2f90;
  if (iVar25 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f30bc == 0x7fffffff) {
    DAT_1809f30bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  fVar2 = (float)DAT_1809f2fe0;
  fVar3 = DAT_1809f2fe0._4_4_;
  fVar4 = DAT_1809f2fe0._12_4_;
  lVar33 = DAT_1809f2fa0;
  fVar35 = (float)DAT_1809f3020;
  local_210 = _DAT_1809f2fd0;
  uStack_208 = uRam00000001809f2fd8;
  local_138 = _DAT_1809f2fd0;
  uStack_130 = uRam00000001809f2fd8;
  local_108 = _DAT_1809f3000;
  fStack_104 = fRam00000001809f3004;
  fStack_100 = fRam00000001809f3008;
  fStack_fc = _DAT_1809f300c;
  local_178 = _DAT_1809f2f90;
  lStack_170 = DAT_1809f2f98;
  local_168 = _DAT_1809f2fa0;
  local_158 = _DAT_1809f2fb0;
  fStack_154 = fRam00000001809f2fb4;
  fStack_150 = fRam00000001809f2fb8;
  fStack_14c = fRam00000001809f2fbc;
  local_148 = _DAT_1809f2fc0;
  fStack_144 = fRam00000001809f2fc4;
  fStack_140 = fRam00000001809f2fc8;
  fStack_13c = fRam00000001809f2fcc;
  local_128 = _DAT_1809f2fe0;
  local_118 = _DAT_1809f2ff0;
  fStack_114 = fRam00000001809f2ff4;
  fStack_110 = fRam00000001809f2ff8;
  fStack_10c = _DAT_1809f2ffc;
  local_1b0 = _DAT_1809f3010;
  uStack_1a8 = uRam00000001809f3018;
  local_f8 = _DAT_1809f3010;
  uStack_f0 = uRam00000001809f3018;
  local_e8 = DAT_1809f3020;
  FUN_1804e4e90(&DAT_1809f3070);
  if ((char)uVar5 == '\0') {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (lVar26 != *param_1) {
    return 0;
  }
  if (lVar33 != param_2) {
    return 0;
  }
  if ((DAT_180961a50 == 0) || (lVar26 = FUN_18000f3a0(), lVar26 == 0)) {
    fVar30 = 0.0;
  }
  else {
    fVar30 = (float)FUN_18000f3d0(lVar26 + 0x3c);
  }
  local_1dc = _DAT_1808adae0;
  uStack_1d4 = _UNK_1808adae8;
  local_1cc = 0;
  local_1c8 = 0;
  local_1fc = (fVar7 - fVar15) * fVar30 + fVar15;
  local_200 = (fVar36 - fVar4) * fVar30 + fVar4;
  fStack_194 = fVar7;
  fStack_190 = fVar7;
  fStack_18c = fVar7;
  local_1f8 = (fVar8 - fVar16) * fVar30 + fVar16;
  local_1ec = (fVar11 - fVar19) * fVar30 + fVar19;
  fStack_184 = fVar8;
  fStack_180 = fVar8;
  fStack_17c = fVar8;
  local_1f4 = (fVar9 - fVar17) * fVar30 + fVar17;
  local_1f0 = (fVar10 - fVar18) * fVar30 + fVar18;
  local_1e8 = (fVar12 - fVar20) * fVar30 + fVar20;
  fStack_1e4 = (fVar13 - fVar21) * fVar30 + fVar21;
  local_1e0 = ((float)local_210 - fVar22) * fVar30 + fVar22;
  fVar36 = (fVar2 - uStack_1a8._4_4_) * fVar30 + uStack_1a8._4_4_;
  local_1c0[1] = fVar36;
  local_1c0[3] = local_200;
  local_198 = local_1fc;
  local_188 = local_1f8;
  if ((auVar6[0xc] == '\0') && (auVar14[8] == '\0')) {
    if (DAT_1809f3310 == '\0') {
      param_6._0_4_ = 0;
      local_218[0] = 0;
      cVar24 = FUN_1802425e0(param_1,&param_6,local_218);
      if (cVar24 == '\0') {
        return 0;
      }
      uVar34 = 0;
      uVar31 = param_6._0_4_;
      uVar32 = local_218[0];
    }
    else {
      uVar34 = DAT_1809f3328;
      uVar31 = DAT_1809f3320;
      uVar32 = DAT_1809f3324;
    }
    uStack_1d4 = CONCAT44(uStack_1d4._4_4_,uVar34);
    local_1dc = CONCAT44(uVar32,uVar31);
    if (((DAT_1809f351c == 2) ||
        ((((DAT_1809f351c == 1 && (lVar26 = FUN_180266660(), lVar26 != 0)) && (DAT_180cf9f80 != 0))
         && (cVar24 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar26), cVar24 != '\0')))) ||
       (cVar24 = FUN_18026b810(1), cVar24 != '\0')) goto LAB_1802559ae;
    local_210 = CONCAT44(uVar32,uVar31);
    uStack_208 = CONCAT44(uStack_208._4_4_,uVar34);
    cVar24 = FUN_180242d10(&local_210,&local_1e8,(fVar3 - fVar35) * fVar30 + fVar35,0);
    if (cVar24 == '\0') goto LAB_1802559ae;
    uVar1 = (uint)uStack_208;
    uVar31 = (float)local_210;
    uVar32 = local_210._4_4_;
  }
  else {
    puVar27 = (undefined4 *)FUN_180254f90(&local_210,&local_f8,(longlong)&local_138 + 4,fVar30);
    uVar31 = *puVar27;
    uVar32 = puVar27[1];
    uVar1 = puVar27[2];
  }
  uStack_1d4 = (ulonglong)uVar1;
  local_1dc = CONCAT44(uVar32,uVar31);
LAB_1802559ae:
  local_1c0[2] = 1.0;
  local_1c0[0] = 0.0;
  pfVar29 = local_1c0;
  if (0.0 <= fVar36) {
    pfVar29 = local_1c0 + 1;
  }
  pfVar28 = local_1c0 + 2;
  if (fVar36 <= DAT_1808ac34c) {
    pfVar28 = pfVar29;
  }
  fVar36 = DAT_1808ac1f4;
  if (DAT_1808ac0c0 < (float)((uint)(*pfVar28 - DAT_1808ac1f4) & _DAT_1808ade90)) {
    fVar36 = *pfVar28;
  }
  uStack_1d4 = CONCAT44(fVar36,(undefined4)uStack_1d4);
  local_1cc = FUN_180242b90(param_2,fVar36);
  *(float *)(param_5 + 0x18) = local_1c0[3];
  *(float *)(param_5 + 0x1c) = local_198;
  *(ulonglong *)(param_5 + 0x24) = CONCAT44(fStack_1e4,local_1e8);
  *(float *)(param_5 + 0x2c) = local_1e0;
  *(undefined4 *)(param_5 + 0xc) = uVar31;
  *(undefined4 *)(param_5 + 0x10) = uVar32;
  *(float *)(param_5 + 0x14) = fVar36;
  *(float *)(param_5 + 0x20) = local_188;
  *param_5 = 1;
  *(undefined4 *)(param_5 + 8) = param_3;
  cVar24 = FUN_1802547b0(param_1,param_3,&local_200,param_4);
  if (cVar24 == '\0') {
    *puVar23 = 1;
    return 0;
  }
  return 1;
}



/* ===== 180255b20 FUN_180255b20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180255b20(longlong *param_1,int param_2,float *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  float *pfVar5;
  ulonglong uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  int local_160;
  float *local_158;
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined1 local_120 [32];
  undefined8 local_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined1 local_c8 [32];
  ulonglong local_a8;
  
  local_a8 = DAT_180919500 ^ (ulonglong)auStack_188;
  lVar14 = *param_4;
  lVar2 = param_4[1];
  local_160 = param_2;
  local_158 = param_3;
  local_148 = param_4;
  local_140 = param_1;
  if (lVar14 != lVar2) {
    do {
      FUN_18000f890(lVar14 + 8);
      lVar14 = lVar14 + 0x38;
    } while (lVar14 != lVar2);
    param_4[1] = *param_4;
  }
  if (param_2 == 0x30) {
    FUN_1802490c0(1);
  }
  else {
    FUN_1802490c0(param_2 == 0x30);
  }
  FUN_1803a13a0(&local_138);
  fVar4 = DAT_1808ac294;
  local_168 = local_138;
  if (local_138 != local_130) {
    lVar14 = DAT_1811160e8;
    puVar10 = local_138;
    uVar16 = DAT_180ca09f4;
    do {
      plVar1 = puVar10 + 1;
      lVar2 = *plVar1;
      if (lVar2 != 0) {
        if (lVar2 != *param_1) {
          if (DAT_180ca09f0 != 0) {
            local_168 = puVar10;
            iVar9 = FUN_180011200((ulonglong)DAT_180ca09f0 + lVar2);
            if (iVar9 - 1U < 1000) {
              if (lVar14 == 0) {
                lVar14 = FUN_180264b70("mp_teammates_are_enemies");
                uVar16 = DAT_180ca09f4;
                DAT_1811160e8 = lVar14;
                if (lVar14 != 0) goto LAB_180255c93;
LAB_180255c9f:
                if ((*plVar1 == 0) || (uVar16 == 0)) {
                  cVar7 = '\0';
                }
                else {
                  cVar7 = FUN_180011220((ulonglong)uVar16 + *plVar1);
                }
                if ((*param_1 == 0) || (uVar16 == 0)) {
                  cVar8 = '\0';
                }
                else {
                  cVar8 = FUN_180011220((ulonglong)uVar16 + *param_1);
                }
                if (cVar7 == cVar8) goto LAB_180255fd8;
              }
              else {
LAB_180255c93:
                cVar7 = FUN_180264d70(lVar14);
                if (cVar7 == '\0') goto LAB_180255c9f;
              }
              pfVar5 = local_158;
              uStack_f0 = 0;
              uVar13 = 0;
              local_e8 = 0;
              uVar15 = 0xf;
              local_e0 = 0xf;
              local_f8 = 0;
              local_d8 = 0;
              local_d0 = 0;
              uVar17 = 0;
              local_150 = *puVar10;
              local_100 = local_150;
              if (local_160 == 0x2c) {
                if (DAT_180cf9c78 != 0) {
                  cVar7 = FUN_180011220((ulonglong)DAT_180cf9c78 + *plVar1);
                  if (cVar7 == '\0') goto LAB_180255fbd;
                }
                cVar7 = FUN_18024ffd0(plVar1,local_158,&local_d8,(longlong)&local_d8 + 4);
                if (cVar7 != '\0') {
                  fVar19 = (float)local_d8;
                  cVar7 = FUN_1802509f0(plVar1,(float)local_d8);
                  local_d0 = CONCAT11(local_d0._1_1_,cVar7);
                  local_150 = local_100;
                  uVar15 = local_e0;
                  uVar13 = local_e8;
                  fVar18 = local_d8._4_4_;
                  uVar17 = local_d0._1_1_;
LAB_180255ec4:
                  puVar11 = (ulonglong *)FUN_1803a0620(local_168,local_c8);
                  if (&local_f8 != puVar11) {
                    if (0xf < uVar15) {
                      uVar13 = uVar15 + 1;
                      uVar12 = local_f8;
                      if (0xfff < uVar13) {
                        uVar12 = *(ulonglong *)(local_f8 - 8);
                        if (0x1f < (local_f8 - uVar12) - 8) {
                          pcVar3 = (code *)swi(0x29);
                          (*pcVar3)(5);
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        uVar13 = uVar15 + 0x28;
                      }
                      thunk_FUN_1803d64e0(uVar12,uVar13);
                    }
                    local_f8 = *puVar11;
                    uStack_f0 = puVar11[1];
                    uVar13 = puVar11[2];
                    uVar15 = puVar11[3];
                    puVar11[2] = 0;
                    puVar11[3] = 0xf;
                    *(undefined1 *)puVar11 = 0;
                    local_e8 = uVar13;
                    local_e0 = uVar15;
                  }
                  uVar6 = uStack_f0;
                  uVar12 = local_f8;
                  FUN_18000f890(local_c8);
                  puVar10 = (undefined8 *)local_148[1];
                  if (puVar10 == (undefined8 *)local_148[2]) {
                    FUN_18025dff0(local_148,puVar10,&local_100);
                  }
                  else {
                    *puVar10 = local_150;
                    puVar10[1] = uVar12;
                    puVar10[2] = uVar6;
                    puVar10[3] = uVar13;
                    puVar10[4] = uVar15;
                    local_e8 = 0;
                    local_e0 = 0xf;
                    local_f8 = local_f8 & 0xffffffffffffff00;
                    *(float *)(puVar10 + 5) = fVar19;
                    *(float *)((longlong)puVar10 + 0x2c) = fVar18;
                    *(char *)(puVar10 + 6) = cVar7;
                    *(undefined1 *)((longlong)puVar10 + 0x31) = uVar17;
                    local_148[1] = local_148[1] + 0x38;
                  }
LAB_180255fb8:
                  puVar10 = local_168;
                }
              }
              else if (local_160 == 0x2b) {
                fVar18 = (float)FUN_1802504e0(plVar1,local_158);
                local_d8 = CONCAT44(fVar18,fVar18);
                if (0.0 < fVar18) {
                  cVar7 = fVar4 < fVar18;
LAB_180255ec0:
                  local_d0 = CONCAT11(local_d0._1_1_,cVar7);
                  fVar19 = fVar18;
                  goto LAB_180255ec4;
                }
              }
              else if ((local_160 - 0x2eU & 0xfffffffd) == 0) {
                cVar7 = FUN_180250d00(local_158,plVar1);
                if ((cVar7 != '\0') || (cVar8 = FUN_180250d00(pfVar5,plVar1), cVar8 != '\0')) {
                  if ((*plVar1 == 0) ||
                     (((DAT_180ca09f8 == 0 ||
                       (lVar14 = FUN_18000f3a0(*plVar1 + (ulonglong)DAT_180ca09f8), lVar14 == 0)) ||
                      (DAT_180ca0950 == 0)))) {
                    uVar21 = 0;
                    fVar19 = 0.0;
                    fVar18 = 0.0;
                  }
                  else {
                    puVar10 = (undefined8 *)
                              FUN_1800111b0(local_120,lVar14 + (ulonglong)DAT_180ca0950);
                    uVar21 = *puVar10;
                    fVar18 = *(float *)(puVar10 + 1);
                    fVar19 = (float)((ulonglong)uVar21 >> 0x20);
                  }
                  fVar20 = *pfVar5 - (float)uVar21;
                  fVar18 = (pfVar5[1] - fVar19) * (pfVar5[1] - fVar19) + fVar20 * fVar20 +
                           (pfVar5[2] - fVar18) * (pfVar5[2] - fVar18);
                  if (fVar18 < 0.0) {
                    fVar18 = (float)FUN_18051af10(fVar18);
                  }
                  else {
                    fVar18 = SQRT(fVar18);
                  }
                  local_d8 = CONCAT44(fVar18,fVar18);
                  goto LAB_180255ec0;
                }
                goto LAB_180255fb8;
              }
LAB_180255fbd:
              FUN_18000f890(&local_f8);
              lVar14 = DAT_1811160e8;
              param_1 = local_140;
              uVar16 = DAT_180ca09f4;
            }
          }
        }
      }
LAB_180255fd8:
      puVar10 = puVar10 + 2;
      local_168 = puVar10;
    } while (puVar10 != local_130);
  }
  FUN_1800244c0(&local_138);
  return;
}



/* ===== 180256050 FUN_180256050 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180256050(longlong param_1,byte param_2,undefined4 param_3)

{
  DAT_180cf9fd0 = DAT_180cf9fd0 & 0xfffffffffffff7fe;
  DAT_180cf9fc8 = DAT_180cf9fc8 & 0xfffffffffffff7fe | (ulonglong)param_2;
  *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffff7fe;
  DAT_1809f3344 = DAT_180cf9e44;
  DAT_1809f3345 = DAT_180cf9e45;
  _DAT_1809f3320 = DAT_180cf9e20;
  _DAT_1809f3328 = _DAT_180cf9e28;
  DAT_1809f3350 = DAT_180cf9e50;
  _DAT_1809f3330 = ram0x000180cf9e30;
  _DAT_1809f3338 = DAT_180cf9e38;
  DAT_1809f3340 = DAT_180cf9e40;
  DAT_1809f3348 = DAT_180cf9e48;
  FUN_1802009d0(&DAT_1809f3358,DAT_180cf9e58,
                (DAT_180cf9e60 - DAT_180cf9e58 >> 3) * -0x71c71c71c71c71c7);
  DAT_1809f3314 = param_3;
  DAT_1809f3370 = DAT_180cf9c28 & 0xfffffffffffff7fe;
  DAT_1809f3348 = DAT_1809f3348 & 0xfffffffffffff7fe;
  DAT_1809f3318 = *(undefined4 *)(param_1 + 8);
  DAT_1809f331c = 0;
  DAT_1809f3310 = 1;
  return;
}



/* ===== 180256180 FUN_180256180 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180256180(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  undefined4 uVar2;
  float fVar3;
  longlong lVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong local_res18 [2];
  
  if ((DAT_180cf9de0 != '\0') && (DAT_180cf9e18 == '\0')) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(local_res18);
    }
    else {
      local_res18[0] = DAT_181108a00;
    }
    if ((local_res18[0] != 0) && (lVar4 = FUN_180273f90(param_1,"userid"), lVar4 == local_res18[0]))
    {
      if ((DAT_180961a50 == 0) || (lVar4 = FUN_18000f3a0(), lVar4 == 0)) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = (float)FUN_18000f3d0(lVar4 + 0x30);
      }
      if (fVar6 - _DAT_180cf9dec <= DAT_1808ac8b0) {
        fVar7 = (float)FUN_180273cc0(param_1,&DAT_1806d23e4);
        fVar8 = (float)FUN_180273cc0(param_1,&DAT_1806d23e8);
        fVar9 = (float)FUN_180273cc0(param_1,&DAT_1806d23ec);
        fVar3 = DAT_180cf9df0;
        uVar2 = DAT_180cf9de8;
        DAT_180cf9e18 = '\x01';
        if (DAT_180cf9d68 < 6000) {
          fVar6 = fVar6 - _DAT_180cf9dec;
          DAT_180cf9d68 = DAT_180cf9d68 + 1;
          dVar1 = (double)DAT_180cf9dfc;
          fVar10 = (fVar8 - DAT_180cf9df4) * (fVar8 - DAT_180cf9df4) +
                   (fVar7 - DAT_180cf9df0) * (fVar7 - DAT_180cf9df0) +
                   (fVar9 - DAT_180cf9df8) * (fVar9 - DAT_180cf9df8);
          if (fVar10 < 0.0) {
            fVar10 = (float)FUN_18051af10(fVar10);
          }
          else {
            fVar10 = SQRT(fVar10);
          }
          switch(DAT_180cf9de4) {
          case 0x2b:
            pcVar5 = "flashbang";
            break;
          case 0x2c:
            pcVar5 = "hegrenade";
            break;
          case 0x2d:
            pcVar5 = "smoke";
            break;
          case 0x2e:
            pcVar5 = "molotov";
            break;
          case 0x2f:
            pcVar5 = "decoy";
            break;
          case 0x30:
            pcVar5 = "incgrenade";
            break;
          default:
            pcVar5 = "?";
          }
          FUN_1802b2560("[grenade release] result | %s %s at %.1f %.1f %.1f | predicted %.1f %.1f %.1f | off by %.1fu | %.2fs after release (predicted flight %.2fs) | cmd %d"
                        ,pcVar5,param_2,(double)fVar7,(double)fVar8,(double)fVar9,(double)fVar3,
                        (double)DAT_180cf9df4,(double)DAT_180cf9df8,(double)fVar10,(double)fVar6,
                        dVar1,uVar2);
        }
      }
      else {
        DAT_180cf9de0 = '\0';
      }
    }
  }
  return;
}



/* ===== 1802564f0 FUN_1802564f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802564f0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *******pppppppuVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_c8 [32];
  char *local_a8;
  double local_a0;
  undefined4 local_98;
  longlong local_88;
  undefined8 *******local_80 [2];
  ulonglong local_70;
  ulonglong local_68;
  undefined8 *******local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if (DAT_180cf9de0 == '\0') {
    return;
  }
  if ((DAT_180cf9de4 - 0x2cU & 0xfffffff9) != 0) {
    return;
  }
  if (DAT_180cf9de4 == 0x32) {
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_88);
    lVar2 = local_88;
  }
  else {
    lVar2 = DAT_181108a00;
  }
  if (lVar2 == 0) {
    return;
  }
  lVar1 = FUN_180273f90(param_1,"attacker");
  if (lVar1 != lVar2) {
    return;
  }
  if ((DAT_180961a50 == 0) || (lVar2 = FUN_18000f3a0(), lVar2 == 0)) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = (float)FUN_18000f3d0(lVar2 + 0x30);
  }
  if (DAT_1808ac8b0 < fVar10 - _DAT_180cf9dec) {
    DAT_180cf9de0 = 0;
    return;
  }
  FUN_180273d10(local_80,param_1,"weapon");
  pppppppuVar5 = local_80;
  if (0xf < local_68) {
    pppppppuVar5 = local_80[0];
  }
  if ((local_70 < 9) ||
     (lVar2 = local_70 + (longlong)pppppppuVar5,
     lVar1 = thunk_FUN_1804e92d0(pppppppuVar5,lVar2,"hegrenade",9), lVar1 == lVar2)) {
    lVar1 = -1;
  }
  else {
    lVar1 = lVar1 - (longlong)pppppppuVar5;
  }
  pppppppuVar5 = local_80;
  if (0xf < local_68) {
    pppppppuVar5 = local_80[0];
  }
  if (((local_70 < 7) ||
      (lVar2 = local_70 + (longlong)pppppppuVar5,
      lVar3 = thunk_FUN_1804e92d0(pppppppuVar5,lVar2,"inferno",7), lVar3 == lVar2)) ||
     (lVar3 - (longlong)pppppppuVar5 == -1)) {
    pppppppuVar5 = local_80;
    if (0xf < local_68) {
      pppppppuVar5 = local_80[0];
    }
    if (((local_70 < 7) ||
        (lVar2 = local_70 + (longlong)pppppppuVar5,
        lVar3 = thunk_FUN_1804e92d0(pppppppuVar5,lVar2,"molotov",7), lVar3 == lVar2)) ||
       (lVar3 - (longlong)pppppppuVar5 == -1)) {
      pppppppuVar5 = local_80;
      if (0xf < local_68) {
        pppppppuVar5 = local_80[0];
      }
      if (((local_70 < 10) ||
          (lVar2 = thunk_FUN_1804e92d0(pppppppuVar5,(longlong)pppppppuVar5 + local_70,"incgrenade",
                                       10), lVar2 == (longlong)pppppppuVar5 + local_70)) ||
         (lVar2 - (longlong)pppppppuVar5 == -1)) {
        bVar9 = false;
        goto LAB_1802566fe;
      }
    }
  }
  bVar9 = true;
LAB_1802566fe:
  if (DAT_180cf9de4 == 0x2c) {
    bVar9 = lVar1 == -1;
  }
  else {
    bVar9 = !bVar9;
  }
  if (!bVar9) {
    lVar2 = FUN_180273f90(param_1,"userid");
    fVar10 = (float)FUN_180273cc0(param_1,"dmg_health");
    fVar11 = (float)FUN_180273cc0(param_1,"health");
    for (plVar4 = DAT_180cf9e00; plVar6 = (longlong *)0x0, plVar4 != DAT_180cf9e08;
        plVar4 = plVar4 + 7) {
      if (*plVar4 == lVar2) {
        if ((DAT_180cf9de4 != 0x2c) && (*(char *)((longlong)plVar4 + 0x31) != '\0'))
        goto LAB_1802568a1;
        *(undefined1 *)((longlong)plVar4 + 0x31) = 1;
        plVar6 = plVar4;
        break;
      }
    }
    if (lVar2 == 0) {
      uStack_58 = 0;
      local_50 = _DAT_1808ad410;
      uStack_48 = _UNK_1808ad418;
      local_60 = (undefined8 *******)0x0;
    }
    else {
      local_88 = lVar2;
      FUN_1803a0620(&local_88,&local_60);
    }
    if (DAT_180cf9d68 < 6000) {
      DAT_180cf9d68 = DAT_180cf9d68 + 1;
      iVar7 = (int)fVar10;
      iVar8 = (int)fVar11;
      if (DAT_180cf9de4 == 0x2c) {
        if (plVar6 == (longlong *)0x0) {
          pppppppuVar5 = &local_60;
          if (0xf < uStack_48) {
            pppppppuVar5 = local_60;
          }
          local_a8 = (char *)CONCAT44(local_a8._4_4_,DAT_180cf9de8);
          FUN_1802b2560("[grenade release] result | hurt %s for %d (%d left) | not a predicted target | cmd %d"
                        ,pppppppuVar5,iVar7,iVar8);
        }
        else {
          local_a0 = (double)*(float *)((longlong)plVar6 + 0x2c);
          local_a8 = (char *)(double)*(float *)(plVar6 + 5);
          pppppppuVar5 = &local_60;
          if (0xf < uStack_48) {
            pppppppuVar5 = local_60;
          }
          local_98 = DAT_180cf9de8;
          FUN_1802b2560("[grenade release] result | hurt %s for %d (%d left) | predicted far %.1f near %.1f | cmd %d"
                        ,pppppppuVar5,iVar7,iVar8);
        }
      }
      else {
        if (plVar6 == (longlong *)0x0) {
          local_a8 = "not a predicted target";
        }
        else {
          local_a8 = "predicted outer";
          if ((char)plVar6[6] != '\0') {
            local_a8 = "predicted inner";
          }
        }
        pppppppuVar5 = &local_60;
        if (0xf < uStack_48) {
          pppppppuVar5 = local_60;
        }
        local_a0 = (double)CONCAT44(local_a0._4_4_,DAT_180cf9de8);
        FUN_1802b2560("[grenade release] result | fire hurt %s for %d (%d left) | %s | cmd %d",
                      pppppppuVar5,iVar7,iVar8);
      }
    }
    FUN_18000f890(&local_60);
  }
LAB_1802568a1:
  FUN_18000f890(local_80);
  return;
}



/* ===== 1802568e0 FUN_1802568e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802568e0(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_888 [32];
  undefined8 local_868;
  double local_860;
  char *local_858;
  uint local_850;
  double local_848;
  undefined8 local_838 [2];
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined4 local_7c0;
  undefined4 local_7bc;
  undefined4 local_7b8;
  undefined8 local_7b4;
  undefined4 local_7ac;
  undefined8 local_7a8;
  undefined4 local_7a0;
  undefined8 local_79c;
  undefined4 local_794;
  undefined8 local_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined4 local_750;
  undefined1 local_74c;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined8 local_700;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined2 local_6f0;
  undefined8 local_6ec;
  undefined4 local_6e4;
  longlong local_6e0;
  undefined8 local_6d8;
  undefined4 local_6d0;
  int iStack_6cc;
  undefined8 local_6c8;
  undefined4 local_6c0;
  undefined1 local_6bc;
  undefined4 local_6b8;
  undefined1 local_6b4;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined4 local_678;
  undefined8 local_674;
  undefined8 uStack_66c;
  undefined8 local_664;
  undefined4 local_65c;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined2 local_648;
  undefined8 local_644;
  undefined4 local_63c;
  undefined4 local_638;
  undefined8 local_630;
  undefined4 local_628;
  undefined8 local_624;
  undefined4 local_61c;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined1 local_600;
  undefined8 local_5fc;
  undefined8 local_5f4;
  undefined8 local_5ec;
  undefined4 local_5e4;
  undefined1 local_5e0;
  undefined8 local_5dc;
  undefined4 local_5d4;
  undefined1 local_5d0;
  undefined8 local_5cc;
  undefined8 local_5c4;
  undefined8 local_5bc;
  undefined8 local_5b4;
  undefined8 local_5ac;
  undefined4 local_5a4;
  undefined8 local_5a0;
  undefined1 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined4 local_560;
  undefined2 local_55c;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined2 local_4e0;
  undefined4 local_4dc;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined1 local_4a4;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined1 local_490 [640];
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined8 local_1f4;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 local_17c;
  undefined8 local_174;
  undefined8 local_16c;
  undefined8 local_164;
  undefined8 local_15c;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined1 local_e4;
  undefined4 local_e0;
  char local_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined1 local_be;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined2 local_70;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_888;
  if ((DAT_1809620c0 != 0) && (lVar7 = FUN_18000f3a0(), lVar7 != 0)) {
    if (DAT_180ccf88f == '\0') {
      DAT_180ccf88f = FUN_180273b60("hegrenade_detonate",&LAB_180256490);
    }
    if (DAT_180ccf898 == '\0') {
      DAT_180ccf898 = FUN_180273b60("flashbang_detonate",&LAB_1802564b0);
    }
    if (DAT_180ccf89d == '\0') {
      DAT_180ccf89d = FUN_180273b60("inferno_startburn",&LAB_1802564d0);
    }
    if (DAT_180ccf88c == '\0') {
      DAT_180ccf88c = FUN_180273b60("player_hurt",FUN_1802564f0);
    }
  }
  DAT_180cf9e20 = _DAT_180cfa020;
  _DAT_180cf9e28 = uRam0000000180cfa028;
  ram0x000180cf9e30 = _DAT_180cfa030;
  DAT_180cf9e38 = uRam0000000180cfa038;
  DAT_180cf9e40 = DAT_180cfa040;
  DAT_180cf9e44 = DAT_180cfa044;
  DAT_180cf9e45 = DAT_180cfa045;
  DAT_180cf9e48 = DAT_180cfa048;
  DAT_180cf9e50 = DAT_180cfa050;
  FUN_1802009d0(&DAT_180cf9e58,DAT_180cfa058,
                (DAT_180cfa060 - DAT_180cfa058 >> 3) * -0x71c71c71c71c71c7);
  if (param_1 == 0) {
    DAT_1809f2708 = 0xffffffff;
    DAT_180cf9c28 = 0;
    return;
  }
  DAT_180cf9c28 = *(undefined8 *)(param_1 + 0x70);
  DAT_1809f2708 = *(undefined4 *)(param_1 + 8);
  if (DAT_1809f3310 == '\0') {
    return;
  }
  if (DAT_180ccfae7 == '\0') {
    return;
  }
  if (DAT_1809f351c == 2) {
    return;
  }
  if ((((DAT_1809f351c == 1) && (lVar7 = FUN_180266660(), lVar7 != 0)) && (DAT_180cf9f80 != 0)) &&
     (cVar5 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar7), cVar5 != '\0')) {
    return;
  }
  cVar5 = FUN_18026b810(1);
  if (cVar5 != '\0') {
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_838);
    DAT_181108a00 = local_838[0];
    DAT_1811089f8 = FUN_1803a0c50(local_838);
    DAT_180cd1304 = '\x01';
  }
  lVar7 = DAT_1811089f8;
  local_828 = 0;
  uStack_820 = 0;
  local_818 = 0;
  uStack_810 = 0;
  local_808 = 0;
  uStack_800 = 0;
  local_7f8 = _DAT_1808adae0;
  uStack_7f0 = _UNK_1808adae8;
  local_7e8 = _DAT_1808adae0;
  uStack_7e0 = _UNK_1808adae8;
  local_7d8 = 0;
  uStack_7d0 = 0;
  local_7c8 = 0;
  local_7c0 = 0;
  local_7bc = 0xffffffff;
  local_7b8 = 2;
  local_7b4 = 0;
  local_7ac = 0x3f800000;
  local_7a8 = 0;
  local_7a0 = 0x3f800000;
  local_79c = 0x3f800000;
  local_794 = 0;
  local_790 = 1;
  local_788 = 0;
  local_780 = 0;
  local_778 = 0;
  uStack_770 = 0;
  local_768 = 0;
  local_760 = 0;
  local_758 = 0;
  local_750 = 0;
  local_74c = 0;
  local_748 = 0;
  uStack_740 = 0;
  local_738 = 0;
  uStack_730 = 0;
  local_728 = 0;
  uStack_720 = 0;
  local_718 = 0;
  local_710 = 0;
  local_708 = 0;
  local_700 = 0;
  local_6f8 = 0;
  local_6f4 = 0x43820000;
  local_6f0 = 0;
  local_6ec = 0;
  local_6e4 = 0;
  local_6e0 = 0;
  local_6d8 = 0;
  local_6d0 = 0x11;
  iStack_6cc = 0;
  local_6c8 = 0x3c800000;
  local_6c0 = 0;
  local_6bc = 0;
  local_6b8 = 0;
  local_6b4 = 0;
  local_6b0 = 0;
  uStack_6a8 = 0;
  local_6a0 = 0;
  local_698 = 0;
  local_690 = 0;
  local_688 = 0;
  uStack_680 = 0;
  local_678 = 0;
  local_674 = 0;
  uStack_66c = 0;
  local_664 = 0;
  local_65c = 0;
  local_658 = 0;
  uStack_650 = 0;
  local_648 = 0;
  local_644 = 0;
  local_63c = 0;
  local_638 = 0x3f800000;
  local_630 = 0;
  local_628 = 0;
  local_624 = 0;
  local_61c = 0;
  local_618 = 0;
  local_610 = 0;
  local_608 = 0;
  local_600 = 0;
  local_5fc = 0;
  local_5f4 = 0;
  local_5ec = 0;
  local_5e4 = 0;
  local_5e0 = 0;
  local_5dc = 0;
  local_5d4 = 0;
  local_5d0 = 0;
  local_5cc = 0;
  local_5c4 = 0;
  local_5bc = 0;
  local_5b4 = 0;
  local_5ac = 0;
  local_5a4 = 0xffffffff;
  local_5a0 = 0;
  local_598 = 0;
  local_590 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_578 = 0;
  local_570 = 0;
  local_568 = 0;
  local_560 = 0;
  local_55c = 0;
  local_558 = _DAT_1808ade10;
  uStack_550 = _UNK_1808ade18;
  local_548 = _DAT_1808ad580;
  uStack_540 = _UNK_1808ad588;
  local_538 = _DAT_1808ada50;
  uStack_530 = _UNK_1808ada58;
  local_528 = _DAT_1808ad590;
  uStack_520 = _UNK_1808ad598;
  local_518 = _DAT_1808adbb0;
  uStack_510 = _UNK_1808adbb8;
  local_508 = _DAT_1808ad570;
  uStack_500 = _UNK_1808ad578;
  local_4f8 = _DAT_1808ade50;
  uStack_4f0 = _UNK_1808ade58;
  local_4e8 = 0;
  local_4e0 = 1;
  local_4dc = 0xffffffff;
  local_4d8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  local_4c0 = 0;
  local_4b8 = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a4 = 0;
  local_4a0 = 0;
  local_498 = 0;
  FUN_180540170(local_490,0,0x280);
  FUN_18008b430(local_490);
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  FUN_180540170(&local_1fc,0);
  local_1fc = 0;
  local_1f4 = 0;
  local_1ec = 0;
  local_1e4 = 0;
  local_1dc = 0;
  local_1d4 = 0;
  local_1cc = 0;
  local_1c4 = 0;
  local_1bc = 0;
  local_1b4 = 0;
  local_1ac = 0;
  local_1a4 = 0;
  local_19c = 0;
  local_194 = 0;
  local_18c = 0;
  local_184 = 0;
  local_17c = 0;
  local_174 = 0;
  local_16c = 0;
  local_164 = 0;
  local_15c = 0;
  local_154 = 0;
  local_14c = 0;
  local_144 = 0;
  local_13c = 0;
  local_134 = 0;
  local_12c = 0;
  local_124 = 0;
  local_11c = 0;
  local_114 = 0;
  local_10c = 0;
  local_104 = 0;
  local_fc = 0;
  local_f4 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_dc = '\0';
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 2;
  local_be = 0;
  local_bc = 0;
  local_b4 = 0;
  local_b0 = 0x4396ff27;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0x3f800000;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  if (((lVar7 == 0) || (DAT_180ca09f0 == 0)) ||
     (iVar6 = FUN_180011200(lVar7 + (ulonglong)DAT_180ca09f0), 999 < iVar6 - 1U)) {
    bVar4 = false;
LAB_18025744e:
    bVar3 = false;
LAB_180257457:
    bVar2 = bVar4;
    bVar4 = false;
  }
  else {
    piVar1 = (int *)(param_1 + 8);
    lVar9 = 0;
    if (DAT_1809f31f4 == *piVar1) {
      lVar9 = DAT_180cfa070;
    }
    if ((lVar9 == 0) || (*(longlong *)(lVar9 + 0x158) != lVar7)) {
      if (*piVar1 <= DAT_1809f3318 + 0x40) {
        if (DAT_180cf9d68 < 6000) {
          DAT_180cf9d68 = DAT_180cf9d68 + 1;
          FUN_1802b2560("[grenade release] replay skipped | cmd %lld | no cmd-1 record for the snapshot | armed at cmd %d until tick %d"
                        ,*(undefined8 *)piVar1,DAT_1809f3318,DAT_1809f3314);
        }
        goto LAB_1802574f4;
      }
      bVar4 = true;
      goto LAB_18025744e;
    }
    bVar4 = true;
    bVar2 = true;
    FUN_1801fd810(&local_828,lVar9 + 0x10);
    _local_6d0 = CONCAT44(iStack_6cc,0x11);
    if (local_6e0 != 0) {
      if (((DAT_181112110 == 0) ||
          (0x7ffffffefffe < (local_6e0 + (ulonglong)DAT_181112110) - 0x10000)) ||
         (iVar6 = FUN_180011200(), 0xfffffffd < iVar6 - 1U)) {
        local_6d8 = 0;
      }
      else {
        puVar8 = (undefined8 *)FUN_1803a0940(local_838,iVar6);
        local_6d8 = *puVar8;
      }
    }
    FUN_1804624c0(&local_828);
    FUN_180463020(&local_828);
    local_d8 = *(undefined4 *)(lVar9 + 0x760);
    iVar6 = (int)local_708 + 1;
    local_6c8 = CONCAT44((float)iVar6 * DAT_1808ac00c,(undefined4)local_6c8);
    local_bc = CONCAT44((float)iVar6 * DAT_1808ac00c,iVar6);
    bVar3 = true;
    iStack_6cc = iVar6;
    if (((DAT_18095d281 == '\0') && (DAT_1809213ac == '\0')) || (local_dc == '\0'))
    goto LAB_180257457;
    if ((char)local_4a8 == '\0') {
      if (local_4a0._4_4_ <= 0.0) goto LAB_180257457;
    }
    bVar4 = true;
    if ((iVar6 <= DAT_1809f3314) && (DAT_1809f3314 + -0x10 <= iVar6)) {
      if ((DAT_180cf9fa0 == DAT_1809f3320) &&
         ((DAT_180cf9fa4 == DAT_1809f3324 && (DAT_180cf9fa8 == DAT_1809f3328)))) {
        bVar2 = false;
      }
      DAT_180cf9fa0 = DAT_1809f3320;
      DAT_180cf9fb8 = DAT_1809f3338;
      DAT_180cf9fac = DAT_1809f332c;
      DAT_180cf9fa4 = DAT_1809f3324;
      DAT_180cf9fbc = DAT_1809f333c;
      DAT_180cf9fb0 = DAT_1809f3330;
      DAT_180cf9fa8 = DAT_1809f3328;
      DAT_180cf9fc0 = DAT_1809f3340;
      DAT_180cf9fb4 = DAT_1809f3334;
      DAT_180cf9fc8 = DAT_1809f3348;
      DAT_180cf9fd0 = DAT_1809f3350;
      FUN_1802009d0(&DAT_180cf9fd8,DAT_1809f3358,
                    (DAT_1809f3360 - DAT_1809f3358 >> 3) * -0x71c71c71c71c71c7);
      *(undefined8 *)(param_1 + 0x70) = DAT_1809f3370;
      DAT_180cf9e20 = CONCAT44(DAT_180cf9fa4,DAT_180cf9fa0);
      _DAT_180cf9e28 = CONCAT44(DAT_180cf9fac,DAT_180cf9fa8);
      unique0x10000578 = CONCAT44(DAT_180cf9fb4,DAT_180cf9fb0);
      DAT_180cf9e38 = CONCAT44(DAT_180cf9fbc,DAT_180cf9fb8);
      DAT_180cf9e40 = DAT_180cf9fc0;
      DAT_180cf9e44 = DAT_180cf9fc4;
      DAT_180cf9e45 = DAT_180cf9fc5;
      DAT_180cf9e48 = DAT_180cf9fc8;
      DAT_180cf9e50 = DAT_180cf9fd0;
      FUN_1802009d0(&DAT_180cf9e58,DAT_180cf9fd8,
                    (DAT_180cf9fe0 - DAT_180cf9fd8 >> 3) * -0x71c71c71c71c71c7);
      DAT_180cf9c28 = DAT_1809f3370;
      if (bVar2) {
        DAT_180ceb098 = 2;
      }
      DAT_1809f331c = DAT_1809f331c + 1;
      if (DAT_180cf9d68 < 6000) {
        DAT_180cf9d68 = DAT_180cf9d68 + 1;
        local_848 = (double)local_4a0._4_4_;
        local_858 = (char *)(double)DAT_180cf9fa4;
        local_860 = (double)DAT_180cf9fa0;
        local_850 = (uint)((char)local_4a8 != '\0');
        local_868 = DAT_180cf9fc8;
        FUN_1802b2560("[grenade release] replay | cmd %lld tick %d (until %d) | buttons 0x%llx view %.3f %.3f | pin %d throw_time %.4f"
                      ,*(undefined8 *)piVar1,iStack_6cc,DAT_1809f3314);
      }
      goto LAB_1802574f4;
    }
  }
  if (DAT_180cf9d68 < 6000) {
    DAT_180cf9d68 = DAT_180cf9d68 + 1;
    if (bVar3) {
      if (bVar4) {
        local_858 = "window passed";
      }
      else {
        local_858 = "no grenade";
        if (local_dc != '\0') {
          local_858 = "grenade out of the hands";
        }
      }
    }
    else {
      local_858 = "dead";
      if (bVar2) {
        local_858 = "no snapshot";
      }
    }
    iVar6 = 0;
    if (bVar3) {
      iVar6 = iStack_6cc;
    }
    local_860 = (double)CONCAT44(local_860._4_4_,DAT_1809f331c);
    local_868 = CONCAT44(local_868._4_4_,DAT_1809f3314);
    FUN_1802b2560("[grenade release] replay end | cmd %lld tick %d | armed at cmd %d until tick %d | replayed %d commands | %s"
                  ,*(undefined8 *)(param_1 + 8),iVar6,DAT_1809f3318);
  }
  DAT_1809f3310 = '\0';
LAB_1802574f4:
  FUN_1800244c0(&local_590);
  return;
}



/* ===== 180257540 FUN_180257540 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180257540(longlong param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  ushort uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  ulonglong *puVar17;
  undefined8 uVar18;
  longlong lVar19;
  size_t sVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  undefined8 *******pppppppuVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  longlong lVar32;
  char *pcVar33;
  char *pcVar34;
  uint *puVar35;
  undefined1 *puVar36;
  char *pcVar37;
  uint uVar38;
  char *pcVar39;
  char *pcVar40;
  bool bVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uStack_1780;
  undefined1 auStack_1778 [8];
  undefined1 auStack_1770 [24];
  char *local_1758;
  undefined1 *local_1750;
  char *local_1748;
  char *local_1740;
  char *local_1738;
  char *local_1730;
  char *local_1728;
  double local_1720;
  double local_1718;
  char *local_1710;
  float local_1708;
  double local_1700;
  double local_16f8;
  double local_16f0;
  double local_16e8;
  double local_16e0;
  double local_16d8;
  double local_16d0;
  double local_16c8;
  double local_16c0;
  double local_16b8;
  double local_16b0;
  char *local_16a8;
  double local_16a0;
  double local_1698;
  double local_1690;
  double local_1688;
  undefined4 local_1680;
  undefined8 *******local_1678;
  char *local_1670;
  char *local_1668;
  char local_1658;
  char local_1657;
  byte local_1656;
  char local_1655;
  uint local_1654;
  float local_1650 [2];
  undefined8 local_1648;
  float local_1640;
  uint local_1638;
  char *local_1630;
  int local_1628;
  uint local_1624;
  int local_1620;
  int local_161c;
  char *local_1618;
  undefined8 local_1610;
  undefined8 uStack_1608;
  undefined8 local_1600;
  undefined8 uStack_15f8;
  undefined8 local_15f0;
  float fStack_15e8;
  undefined4 uStack_15e4;
  float local_15e0;
  float fStack_15dc;
  char local_15d8;
  undefined2 local_15d7;
  undefined1 local_15d5;
  longlong local_15d0;
  char *local_15c8;
  char *pcStack_15c0;
  longlong local_15b8;
  float local_15b0;
  longlong local_15a8;
  longlong lStack_15a0;
  undefined8 local_1598;
  undefined8 uStack_1590;
  undefined8 local_1588;
  undefined8 uStack_1580;
  longlong local_1578;
  longlong lStack_1570;
  undefined8 local_1568;
  undefined8 local_1560;
  undefined8 local_1558;
  undefined4 local_1550;
  undefined8 local_1548;
  undefined8 uStack_1540;
  undefined8 local_1538;
  undefined4 local_1530;
  undefined8 local_152c;
  undefined4 local_1524;
  undefined8 local_1520;
  undefined8 local_1518;
  undefined8 uStack_1510;
  float local_1508;
  undefined2 local_1504;
  undefined8 local_1500;
  undefined8 local_14f8;
  float local_14f0;
  undefined8 local_14ec;
  undefined8 uStack_14e4;
  undefined8 local_14dc;
  undefined8 uStack_14d4;
  undefined8 local_14cc;
  undefined4 local_14c4;
  undefined8 local_14c0;
  undefined8 local_14b8;
  undefined8 local_14b0;
  undefined8 local_14a8;
  undefined8 local_14a0;
  undefined8 local_1498;
  undefined4 local_1490;
  undefined2 local_148c;
  undefined4 local_1488;
  undefined1 local_1484;
  undefined4 local_1480;
  undefined2 local_147c;
  undefined8 local_1478;
  undefined8 uStack_1470;
  undefined8 local_1468;
  undefined8 uStack_1460;
  undefined8 local_1458;
  undefined8 uStack_1450;
  undefined1 local_1448;
  ulonglong local_1440;
  undefined4 local_1438;
  undefined8 local_1434;
  undefined8 local_142c;
  undefined8 local_1424;
  undefined8 local_141c;
  undefined8 local_1408;
  undefined8 uStack_1400;
  undefined8 local_13f8;
  undefined8 uStack_13f0;
  undefined8 local_13e8;
  undefined8 uStack_13e0;
  undefined8 local_13d8;
  undefined8 uStack_13d0;
  undefined8 local_13c8;
  undefined8 uStack_13c0;
  undefined8 local_13b8;
  undefined8 uStack_13b0;
  undefined8 local_13a8;
  undefined4 local_13a0;
  undefined4 local_139c;
  undefined4 local_1398;
  undefined8 local_1394;
  undefined4 local_138c;
  undefined8 local_1388;
  undefined4 local_1380;
  undefined8 local_137c;
  undefined4 local_1374;
  undefined8 local_1370;
  undefined8 local_1368;
  undefined8 local_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  undefined8 local_1340;
  undefined8 local_1338;
  undefined4 local_1330;
  char local_132c;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 local_12f0;
  undefined8 local_12e8;
  undefined8 local_12e0;
  undefined4 local_12d8;
  undefined4 local_12d4;
  undefined2 local_12d0;
  undefined8 local_12cc;
  undefined4 local_12c4;
  longlong local_12c0;
  undefined8 local_12b8;
  undefined8 local_12b0;
  undefined8 local_12a8;
  float local_12a0;
  undefined1 local_129c;
  undefined4 local_1298;
  undefined1 local_1294;
  undefined8 local_1290;
  undefined8 uStack_1288;
  undefined8 local_1280;
  undefined8 local_1278;
  undefined8 local_1270;
  undefined8 local_1268;
  undefined8 uStack_1260;
  undefined4 local_1258;
  undefined8 local_1254;
  undefined8 uStack_124c;
  undefined8 local_1244;
  undefined4 local_123c;
  undefined8 local_1238;
  undefined8 uStack_1230;
  undefined2 local_1228;
  undefined8 local_1224;
  undefined4 local_121c;
  undefined4 local_1218;
  undefined8 local_1210;
  undefined4 local_1208;
  undefined8 local_1204;
  undefined4 local_11fc;
  undefined8 local_11f8;
  undefined8 local_11f0;
  undefined8 local_11e8;
  undefined1 local_11e0;
  undefined8 local_11dc;
  undefined8 local_11d4;
  undefined8 local_11cc;
  undefined4 local_11c4;
  undefined1 local_11c0;
  undefined8 local_11bc;
  undefined4 local_11b4;
  undefined1 local_11b0;
  undefined8 local_11ac;
  undefined8 local_11a4;
  undefined8 local_119c;
  undefined8 local_1194;
  undefined8 local_118c;
  undefined4 local_1184;
  undefined8 local_1180;
  undefined1 local_1178;
  undefined8 local_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined8 local_1158;
  undefined8 local_1150;
  undefined8 local_1148;
  undefined4 local_1140;
  undefined2 local_113c;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined8 local_1108;
  undefined8 uStack_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined2 local_10c0;
  undefined4 local_10bc;
  undefined8 local_10b8;
  undefined8 local_10b0;
  undefined8 local_10a8;
  undefined8 local_10a0;
  undefined8 local_1098;
  undefined8 local_1090;
  undefined4 local_1088;
  undefined1 local_1084;
  undefined8 local_1080;
  undefined8 local_1078;
  undefined1 local_1070 [640];
  undefined8 local_df0;
  undefined8 local_de8;
  undefined4 local_de0;
  undefined8 local_ddc;
  undefined8 local_dd4;
  undefined8 local_dcc;
  undefined8 local_dc4;
  undefined8 local_dbc;
  undefined8 local_db4;
  undefined8 local_dac;
  undefined8 local_da4;
  undefined8 local_d9c;
  undefined8 local_d94;
  undefined8 local_d8c;
  undefined8 local_d84;
  undefined8 local_d7c;
  undefined8 local_d74;
  undefined8 local_d6c;
  undefined8 local_d64;
  undefined8 local_d5c;
  undefined8 local_d54;
  undefined8 local_d4c;
  undefined8 local_d44;
  undefined8 local_d3c;
  undefined8 local_d34;
  undefined8 local_d2c;
  undefined8 local_d24;
  undefined8 local_d1c;
  undefined8 local_d14;
  undefined8 local_d0c;
  undefined8 local_d04;
  undefined8 local_cfc;
  undefined8 local_cf4;
  undefined8 local_cec;
  undefined8 local_ce4;
  undefined8 local_cdc;
  undefined8 local_cd4;
  undefined8 local_ccc;
  undefined1 local_cc4;
  undefined4 local_cc0;
  undefined1 local_cbc;
  undefined4 local_cb8;
  undefined8 local_cb0;
  undefined8 local_ca8;
  undefined2 local_ca0;
  undefined1 local_c9e;
  undefined8 local_c9c;
  undefined4 local_c94;
  undefined8 local_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined4 local_c78;
  undefined1 local_c74;
  undefined8 local_c70;
  undefined1 local_c68;
  undefined8 local_c60;
  longlong local_c58;
  undefined2 local_c50;
  uint local_c48;
  undefined4 uStack_c44;
  undefined4 uStack_c40;
  undefined4 uStack_c3c;
  undefined4 uStack_c38;
  undefined4 uStack_c34;
  undefined4 uStack_c30;
  undefined4 uStack_c2c;
  undefined8 local_c28;
  ulonglong uStack_c20;
  undefined8 local_c18;
  undefined1 local_c10 [24];
  undefined8 *******local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  ulonglong uStack_be0;
  ulonglong local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  ulonglong uStack_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined4 local_b98;
  undefined4 uStack_b94;
  undefined8 uStack_b90;
  ulonglong local_b88;
  uint uStack_b80;
  undefined4 uStack_b7c;
  uint uStack_b78;
  undefined4 uStack_b74;
  undefined2 uStack_b70;
  undefined2 uStack_b6e;
  undefined4 uStack_b6c;
  undefined4 uStack_b68;
  undefined4 uStack_b64;
  undefined4 uStack_b60;
  undefined4 local_b5c;
  undefined4 uStack_b58;
  undefined4 uStack_b54;
  undefined4 uStack_b50;
  undefined4 local_b4c;
  uint uStack_b48;
  uint uStack_b44;
  undefined4 uStack_b40;
  undefined2 uStack_b3c;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined4 local_b00;
  undefined4 local_afc;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined4 local_ae0;
  undefined8 local_ad8;
  undefined4 local_ad0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  undefined1 local_aa8;
  undefined8 local_aa0;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined4 local_9d0;
  undefined4 local_9cc;
  undefined4 local_9c8;
  undefined8 local_9c4;
  undefined4 local_9bc;
  undefined8 local_9b8;
  undefined4 local_9b0;
  undefined8 local_9ac;
  undefined4 local_9a4;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 local_970;
  undefined8 local_968;
  undefined4 local_960;
  undefined1 local_95c;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 local_920;
  undefined8 local_918;
  undefined8 local_910;
  undefined4 local_908;
  undefined4 local_904;
  undefined2 local_900;
  undefined8 local_8fc;
  undefined4 local_8f4;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined4 local_8e0;
  int iStack_8dc;
  undefined8 local_8d8;
  undefined4 local_8d0;
  undefined1 local_8cc;
  undefined4 local_8c8;
  undefined1 local_8c4;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined4 local_888;
  undefined8 local_884;
  undefined8 uStack_87c;
  undefined8 local_874;
  undefined4 local_86c;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined2 local_858;
  undefined8 local_854;
  undefined4 local_84c;
  undefined4 local_848;
  undefined8 local_840;
  undefined4 local_838;
  undefined8 local_834;
  undefined4 local_82c;
  undefined8 local_828;
  undefined8 local_820;
  undefined8 local_818;
  undefined1 local_810;
  undefined8 local_80c;
  undefined8 local_804;
  undefined8 local_7fc;
  undefined4 local_7f4;
  undefined1 local_7f0;
  undefined8 local_7ec;
  undefined4 local_7e4;
  undefined1 local_7e0;
  undefined8 local_7dc;
  undefined8 local_7d4;
  undefined8 local_7cc;
  undefined8 local_7c4;
  undefined8 local_7bc;
  undefined4 local_7b4;
  undefined8 local_7b0;
  undefined1 local_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined8 local_778;
  undefined4 local_770;
  undefined2 local_76c;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined2 local_6f0;
  undefined4 local_6ec;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined4 local_6b8;
  undefined1 local_6b4;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined1 local_6a0 [640];
  undefined8 local_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_40c;
  undefined8 local_404;
  undefined8 local_3fc;
  undefined8 local_3f4;
  undefined8 local_3ec;
  undefined8 local_3e4;
  undefined8 local_3dc;
  undefined8 local_3d4;
  undefined8 local_3cc;
  undefined8 local_3c4;
  undefined8 local_3bc;
  undefined8 local_3b4;
  undefined8 local_3ac;
  undefined8 local_3a4;
  undefined8 local_39c;
  undefined8 local_394;
  undefined8 local_38c;
  undefined8 local_384;
  undefined8 local_37c;
  undefined8 local_374;
  undefined8 local_36c;
  undefined8 local_364;
  undefined8 local_35c;
  undefined8 local_354;
  undefined8 local_34c;
  undefined8 local_344;
  undefined8 local_33c;
  undefined8 local_334;
  undefined8 local_32c;
  undefined8 local_324;
  undefined8 local_31c;
  undefined8 local_314;
  undefined8 local_30c;
  undefined8 local_304;
  undefined8 local_2fc;
  undefined1 local_2f4;
  undefined4 local_2f0;
  char local_2ec;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined2 local_2d0;
  undefined1 local_2ce;
  undefined8 local_2cc;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined1 local_2a4;
  undefined8 local_2a0;
  undefined1 local_298;
  longlong local_290;
  undefined8 local_288;
  ushort local_280;
  ulonglong local_278 [48];
  ulonglong local_f8;
  undefined8 local_48;
  
  if (param_1 == 0) {
    return;
  }
  local_48 = 0x180257567;
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_1778;
  puVar36 = auStack_1778;
  if ((DAT_180ccfae7 == '\0') ||
     (((DAT_18095d281 == '\0' && (puVar36 = auStack_1778, DAT_1809213ac == '\0')) ||
      (puVar36 = auStack_1778, DAT_1809f351c == 2)))) goto LAB_18025a0c6;
  local_15d0 = param_1;
  if (((DAT_1809f351c == 1) && (lVar14 = FUN_180266660(), lVar14 != 0)) && (DAT_180cf9f80 != 0)) {
    cVar8 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar14);
    puVar36 = auStack_1778;
    if (cVar8 != '\0') goto LAB_18025a0c6;
  }
  cVar8 = FUN_18026b810(1);
  puVar36 = auStack_1778;
  if (((cVar8 != '\0') || (puVar36 = auStack_1778, DAT_180961f40 == 0)) ||
     (((puVar36 = auStack_1778, DAT_180961f48 == 0 ||
       (((((puVar36 = auStack_1778, DAT_180961f50 == 0 ||
           (puVar36 = auStack_1778, DAT_180961f60 == 0)) ||
          (puVar36 = auStack_1778, DAT_180961f68 == 0)) ||
         ((puVar36 = auStack_1778, DAT_180cfee68 == 0 ||
          (puVar36 = auStack_1778, DAT_180cfee80 == 0)))) ||
        (puVar36 = auStack_1778, DAT_1809619a0 == 0)))) ||
      (puVar36 = auStack_1778, DAT_1809f2708 != *(int *)(param_1 + 8))))) goto LAB_18025a0c6;
  FUN_180241850();
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_1630);
    DAT_181108a00 = local_1630;
    local_1630 = (char *)FUN_1803a0c50(&local_1630);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_1630 = DAT_1811089f8;
  }
  pcVar39 = local_1630;
  puVar36 = auStack_1778;
  DAT_1811089f8 = local_1630;
  if (local_1630 == (char *)0x0) goto LAB_18025a0c6;
  puVar36 = auStack_1778;
  if (DAT_180ca09f0 == 0) goto LAB_18025a0c6;
  iVar10 = FUN_180011200(local_1630 + DAT_180ca09f0);
  puVar36 = auStack_1778;
  if (999 < iVar10 - 1U) goto LAB_18025a0c6;
  uVar38 = *(uint *)(param_1 + 8);
  local_1638 = uVar38;
  if (((DAT_180ca0a0c == 0) || (uVar28 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 == 0)) ||
     (lVar14 = FUN_18000f3a0(pcVar39 + DAT_180ca0a0c), lVar14 == 0)) {
    lVar14 = 0;
  }
  else {
    uVar11 = FUN_180011200(lVar14 + uVar28);
    plVar15 = (longlong *)FUN_1803a0940(&local_1618,uVar11);
    lVar14 = *plVar15;
  }
  iVar10 = FUN_1804e4d70(&DAT_1809f3070);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f30bc == 0x7fffffff) {
    DAT_1809f30bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((((lVar14 == 0) || (DAT_1809f2f98 != pcVar39)) || (DAT_1809f2fa0 != lVar14)) ||
     ((int)uVar38 < DAT_1809f2fa8)) {
    local_bd8 = local_bd8 & 0xffffffffffffff00;
    uStack_bd0 = 0;
    local_bc8 = 0;
    uStack_bc0 = CONCAT35(uStack_bc0._5_3_,0xffffffff);
    local_b88 = 0x3f800000;
    uStack_b80 = uStack_b80 & 0xffffff00;
    uStack_b7c = 0;
    uStack_b78 = 0;
    uStack_b74 = 0;
    uStack_b70 = 0;
    uStack_b6e = 0;
    uStack_b6c = 0;
    uStack_b68 = 0;
    uStack_b64 = 0;
    uStack_b60 = 0;
    local_b5c = 0;
    uStack_b58 = 0;
    uStack_b54 = 0;
    uStack_b50 = 0;
    local_b4c = 0x3f800000;
    uStack_b48 = 0;
    uStack_b44 = uStack_b44 & 0xffffff00;
    _DAT_1809f2f90 = local_bd8;
    _DAT_1809f2fa8 = uStack_bc0;
    _DAT_1809f2fb0 = 0;
    uRam00000001809f2fb8 = 0;
    _DAT_1809f2fc0 = 0;
    uRam00000001809f2fc8 = 0;
    _DAT_1809f2fd0 = 0;
    uRam00000001809f2fd8 = 0;
    _DAT_1809f2fe8 = (ulonglong)uStack_b80;
    DAT_1809f2fe0 = 0x3f800000;
    _DAT_1809f2ff0 = 0;
    uRam00000001809f2ff8 = 0;
    _DAT_1809f3000 = 0;
    uRam00000001809f3008 = 0;
    _DAT_1809f3010 = 0;
    uRam00000001809f3018 = 0x3f80000000000000;
    DAT_1809f3020 = (ulonglong)uStack_b44 << 0x20;
  }
  _DAT_1809f2fa8 = CONCAT44(_DAT_1809f2fac,uVar38);
  DAT_1809f2f98 = pcVar39;
  DAT_1809f2fa0 = lVar14;
  FUN_1804e4e90(&DAT_1809f3070);
  fVar47 = DAT_1808ac00c;
  local_a38 = 0;
  uStack_a30 = 0;
  local_a28 = 0;
  uStack_a20 = 0;
  local_a18 = 0;
  uStack_a10 = 0;
  local_a08 = _DAT_1808adae0;
  uStack_a00 = _UNK_1808adae8;
  local_9f8 = _DAT_1808adae0;
  uStack_9f0 = _UNK_1808adae8;
  local_9e8 = 0;
  uStack_9e0 = 0;
  local_9d8 = 0;
  local_9d0 = 0;
  local_9cc = 0xffffffff;
  local_9c8 = 2;
  local_9c4 = 0;
  local_9bc = 0x3f800000;
  local_9b8 = 0;
  local_9b0 = 0x3f800000;
  local_9ac = 0x3f800000;
  local_9a4 = 0;
  local_9a0 = 1;
  local_998 = 0;
  local_990 = 0;
  local_988 = 0;
  uStack_980 = 0;
  local_978 = 0;
  local_970 = 0;
  local_968 = 0;
  local_960 = 0;
  local_95c = 0;
  local_958 = 0;
  uStack_950 = 0;
  local_948 = 0;
  uStack_940 = 0;
  local_938 = 0;
  uStack_930 = 0;
  local_928 = 0;
  local_920 = 0;
  local_918 = 0;
  local_910 = 0;
  local_908 = 0;
  local_904 = 0x43820000;
  local_900 = 0;
  local_8fc = 0;
  local_8f4 = 0;
  local_8f0 = 0;
  local_8e8 = 0;
  local_8e0 = 0x11;
  iStack_8dc = 0;
  local_8d8 = 0x3c800000;
  local_8d0 = 0;
  local_8cc = 0;
  local_8c8 = 0;
  local_8c4 = 0;
  local_8c0 = 0;
  uStack_8b8 = 0;
  local_8b0 = 0;
  local_8a8 = 0;
  local_8a0 = 0;
  local_898 = 0;
  uStack_890 = 0;
  local_888 = 0;
  local_884 = 0;
  uStack_87c = 0;
  local_874 = 0;
  local_86c = 0;
  local_868 = 0;
  uStack_860 = 0;
  local_858 = 0;
  local_854 = 0;
  local_84c = 0;
  local_848 = 0x3f800000;
  local_840 = 0;
  local_838 = 0;
  local_834 = 0;
  local_82c = 0;
  local_828 = 0;
  local_820 = 0;
  local_818 = 0;
  local_810 = 0;
  local_80c = 0;
  local_804 = 0;
  local_7fc = 0;
  local_7f4 = 0;
  local_7f0 = 0;
  local_7ec = 0;
  local_7e4 = 0;
  local_7e0 = 0;
  local_7dc = 0;
  local_7d4 = 0;
  local_7cc = 0;
  local_7c4 = 0;
  local_7bc = 0;
  local_7b4 = 0xffffffff;
  local_7b0 = 0;
  local_7a8 = 0;
  local_7a0 = 0;
  local_798 = 0;
  uStack_790 = 0;
  local_788 = 0;
  local_780 = 0;
  local_778 = 0;
  local_770 = 0;
  local_76c = 0;
  local_768 = _DAT_1808ade10;
  uStack_760 = _UNK_1808ade18;
  local_758 = _DAT_1808ad580;
  uStack_750 = _UNK_1808ad588;
  local_748 = _DAT_1808ada50;
  uStack_740 = _UNK_1808ada58;
  local_738 = _DAT_1808ad590;
  uStack_730 = _UNK_1808ad598;
  local_728 = _DAT_1808adbb0;
  uStack_720 = _UNK_1808adbb8;
  local_718 = _DAT_1808ad570;
  uStack_710 = _UNK_1808ad578;
  local_708 = _DAT_1808ade50;
  uStack_700 = _UNK_1808ade58;
  local_6f8 = 0;
  local_6f0 = 1;
  local_6ec = 0xffffffff;
  local_6e8 = 0;
  local_6e0 = 0;
  local_6d8 = 0;
  local_6d0 = 0;
  local_6c8 = 0;
  local_6c0 = 0;
  local_6b8 = 0;
  local_6b4 = 0;
  local_6b0 = 0;
  local_6a8 = 0;
  FUN_180540170(local_6a0,0,0x280);
  FUN_18008b430(local_6a0);
  local_420 = 0;
  local_418 = 0;
  local_410 = 0;
  FUN_180540170(&local_40c,0,0x100);
  lVar14 = local_15d0;
  local_40c = 0;
  local_404 = 0;
  local_3fc = 0;
  local_3f4 = 0;
  local_3ec = 0;
  local_3e4 = 0;
  local_3dc = 0;
  local_3d4 = 0;
  local_3cc = 0;
  local_3c4 = 0;
  local_3bc = 0;
  local_3b4 = 0;
  local_3ac = 0;
  local_3a4 = 0;
  local_39c = 0;
  local_394 = 0;
  local_38c = 0;
  local_384 = 0;
  local_37c = 0;
  local_374 = 0;
  local_36c = 0;
  local_364 = 0;
  local_35c = 0;
  local_354 = 0;
  local_34c = 0;
  local_344 = 0;
  local_33c = 0;
  local_334 = 0;
  local_32c = 0;
  local_324 = 0;
  local_31c = 0;
  local_314 = 0;
  local_30c = 0;
  local_304 = 0;
  local_2fc = 0;
  local_2f4 = 0;
  local_2f0 = 0;
  local_2ec = '\0';
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 2;
  local_2ce = 0;
  local_2cc = 0;
  local_2c4 = 0;
  local_2c0 = 0x4396ff27;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  local_2a4 = 0;
  local_2a0 = 0x3f800000;
  local_298 = 0;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  lVar26 = 0;
  if (DAT_1809f31f4 == *(int *)(local_15d0 + 8)) {
    lVar26 = DAT_180cfa070;
  }
  puVar36 = auStack_1778;
  if (lVar26 != 0) {
    puVar36 = auStack_1778;
    if (*(char **)(lVar26 + 0x158) == pcVar39) {
      FUN_180466580(&local_a38,lVar26 + 0x10,0x11);
      uVar5 = local_280;
      iStack_8dc = (int)local_918 + 1;
      fVar42 = (float)iStack_8dc * fVar47;
      local_8d8 = CONCAT44(fVar42,(undefined4)local_8d8);
      local_2cc = CONCAT44(fVar42,iStack_8dc);
      puVar36 = auStack_1778;
      if (local_2ec != '\0') {
        puVar36 = auStack_1778;
        if (local_290 != 0) {
          if ((local_6b8._2_1_ != '\0') && (local_6b8._3_1_ == '\0')) {
            puVar36 = auStack_1778;
            if (local_6b0._4_4_ == 0.0) goto LAB_18025a0ba;
          }
          uVar13 = (uint)local_280;
          puVar36 = auStack_1778;
          local_1654 = uVar13;
          if (local_280 - 0x2b < 6) {
            bVar41 = (float)local_6e8 <= fVar42;
            cVar8 = (char)local_6b8;
            local_1655 = (char)local_6b8;
            if ((char)local_6b8 != '\0' || bVar41) {
              bVar3 = true;
              bVar2 = true;
              if (((char)local_6b8 != '\0') || (local_1658 = '\x01', !bVar41)) goto LAB_180257f24;
            }
            else {
              bVar2 = false;
LAB_180257f24:
              bVar3 = bVar2;
              local_1658 = '\0';
            }
            local_1656 = bVar41;
            if (DAT_1809213ac == '\0') {
LAB_180257f6a:
              bVar2 = false;
              fVar42 = local_6b0._4_4_;
            }
            else {
              cVar9 = FUN_18026b8a0();
              if ((cVar9 != '\0') || ((DAT_1809213c0 != '\0' && (cVar8 == '\0'))))
              goto LAB_180257f6a;
              bVar2 = true;
              fVar42 = local_6b0._4_4_;
            }
            iVar10 = iStack_8dc;
            if ((((DAT_1809f3200 == '\0') || (DAT_1809f3204 != uVar38)) ||
                (DAT_1809f3208 != iStack_8dc)) ||
               ((((DAT_1809f320c != cVar8 || (DAT_1809f3210 != fVar42)) ||
                 ((DAT_1809f3268 != *(longlong *)(lVar14 + 0x70) ||
                  ((DAT_1809f32c0 != DAT_180cf9c28 ||
                   (cVar9 = FUN_180254530(&DAT_1809f3218,&DAT_180cf9fa0), cVar9 == '\0')))))) ||
                (cVar9 = FUN_180254530(&DAT_1809f3270,&DAT_180cf9e20), cVar9 == '\0')))) {
              DAT_1809f32d0 = 0;
              DAT_1809f3200 = '\x01';
              DAT_1809f320c = cVar8;
              _DAT_1809f3218 = _DAT_180cf9fa0;
              uRam00000001809f3220 = _DAT_180cf9fa8;
              _DAT_1809f3228 = _DAT_180cf9fb0;
              uRam00000001809f3230 = _DAT_180cf9fb8;
              _DAT_1809f3238 = DAT_180cf9fc0;
              DAT_1809f323c = DAT_180cf9fc4;
              DAT_1809f323d = DAT_180cf9fc5;
              _DAT_1809f3240 = DAT_180cf9fc8;
              _DAT_1809f3248 = DAT_180cf9fd0;
              DAT_1809f3204 = uVar38;
              DAT_1809f3208 = iVar10;
              DAT_1809f3210 = fVar42;
              FUN_1802009d0(&DAT_1809f3250,DAT_180cf9fd8,
                            (DAT_180cf9fe0 - DAT_180cf9fd8 >> 3) * -0x71c71c71c71c71c7);
              DAT_1809f3268 = *(longlong *)(lVar14 + 0x70);
              _DAT_1809f3270 = DAT_180cf9e20;
              uRam00000001809f3278 = _DAT_180cf9e28;
              _DAT_1809f3280 = ram0x000180cf9e30;
              uRam00000001809f3288 = DAT_180cf9e38;
              _DAT_1809f3290 = DAT_180cf9e40;
              DAT_1809f3294 = DAT_180cf9e44;
              DAT_1809f3295 = DAT_180cf9e45;
              _DAT_1809f3298 = DAT_180cf9e48;
              _DAT_1809f32a0 = DAT_180cf9e50;
              FUN_1802009d0(&DAT_1809f32a8,DAT_180cf9e58,
                            (DAT_180cf9e60 - DAT_180cf9e58 >> 3) * -0x71c71c71c71c71c7);
              DAT_1809f32c0 = DAT_180cf9c28;
              _DAT_1809f32c8 = 0;
              DAT_1809f32cc = 0;
              FUN_1800ad890(&local_1618);
              local_1620 = 9;
              if (bVar41) {
                local_1620 = 0x10;
              }
              local_1408 = 0;
              uStack_1400 = 0;
              local_13f8 = 0;
              uStack_13f0 = 0;
              local_13e8 = 0;
              uStack_13e0 = 0;
              local_13d8 = _DAT_1808adae0;
              uStack_13d0 = _UNK_1808adae8;
              local_13c8 = _DAT_1808adae0;
              uStack_13c0 = _UNK_1808adae8;
              local_13b8 = 0;
              uStack_13b0 = 0;
              local_13a8 = 0;
              local_13a0 = 0;
              local_139c = 0xffffffff;
              local_1398 = 2;
              local_1394 = 0;
              local_138c = 0x3f800000;
              local_1388 = 0;
              local_1380 = 0x3f800000;
              local_137c = 0x3f800000;
              local_1374 = 0;
              local_1370 = 1;
              local_1368 = 0;
              local_1360 = 0;
              local_1358 = 0;
              uStack_1350 = 0;
              local_1348 = 0;
              local_1340 = 0;
              local_1338 = 0;
              local_1330 = 0;
              local_132c = '\0';
              local_1328 = 0;
              uStack_1320 = 0;
              local_1318 = 0;
              uStack_1310 = 0;
              local_1308 = 0;
              uStack_1300 = 0;
              local_12f8 = 0;
              local_12f0 = 0;
              local_12e8 = 0;
              local_12e0 = 0;
              local_12d8 = 0;
              local_12d4 = 0x43820000;
              local_12d0 = 0;
              local_12cc = 0;
              local_12c4 = 0;
              local_12c0 = 0;
              local_12b8 = 0;
              local_12b0 = 0x11;
              local_12a8 = 0x3c800000;
              local_12a0 = 0.0;
              local_129c = 0;
              local_1298 = 0;
              local_1294 = 0;
              local_1290 = 0;
              uStack_1288 = 0;
              local_1280 = 0;
              local_1278 = 0;
              local_1270 = 0;
              local_1268 = 0;
              uStack_1260 = 0;
              local_1258 = 0;
              local_1254 = 0;
              uStack_124c = 0;
              local_1244 = 0;
              local_123c = 0;
              local_1238 = 0;
              uStack_1230 = 0;
              local_1228 = 0;
              local_1224 = 0;
              local_121c = 0;
              local_1218 = 0x3f800000;
              local_1210 = 0;
              local_1208 = 0;
              local_1204 = 0;
              local_11fc = 0;
              local_11f8 = 0;
              local_11f0 = 0;
              local_11e8 = 0;
              local_11e0 = 0;
              local_11dc = 0;
              local_11d4 = 0;
              local_11cc = 0;
              local_11c4 = 0;
              local_11c0 = 0;
              local_11bc = 0;
              local_11b4 = 0;
              local_11b0 = 0;
              local_11ac = 0;
              local_11a4 = 0;
              local_119c = 0;
              local_1194 = 0;
              local_118c = 0;
              local_1184 = 0xffffffff;
              local_1180 = 0;
              local_1178 = 0;
              local_1170 = 0;
              local_1168 = 0;
              uStack_1160 = 0;
              local_1158 = 0;
              local_1150 = 0;
              local_1148 = 0;
              local_1140 = 0;
              local_113c = 0;
              local_1138 = _DAT_1808ade10;
              uStack_1130 = _UNK_1808ade18;
              local_1128 = _DAT_1808ad580;
              uStack_1120 = _UNK_1808ad588;
              local_1118 = _DAT_1808ada50;
              uStack_1110 = _UNK_1808ada58;
              local_1108 = _DAT_1808ad590;
              uStack_1100 = _UNK_1808ad598;
              local_10f8 = _DAT_1808adbb0;
              uStack_10f0 = _UNK_1808adbb8;
              local_10e8 = _DAT_1808ad570;
              uStack_10e0 = _UNK_1808ad578;
              local_10d8 = _DAT_1808ade50;
              uStack_10d0 = _UNK_1808ade58;
              local_10c8 = 0;
              local_10c0 = 1;
              local_10bc = 0xffffffff;
              local_10b8 = 0;
              local_10b0 = 0;
              local_10a8 = 0;
              local_10a0 = 0;
              local_1098 = 0;
              local_1090 = 0;
              local_1088 = 0;
              local_1084 = 0;
              local_1080 = 0;
              local_1078 = 0;
              FUN_180540170(local_1070,0,0x280);
              FUN_18008b430(local_1070);
              local_df0 = 0;
              local_de8 = 0;
              local_de0 = 0;
              FUN_180540170(&local_ddc,0,0x100);
              local_ddc = 0;
              local_dd4 = 0;
              local_dcc = 0;
              local_dc4 = 0;
              local_dbc = 0;
              local_db4 = 0;
              local_dac = 0;
              local_da4 = 0;
              local_d9c = 0;
              local_d94 = 0;
              local_d8c = 0;
              local_d84 = 0;
              local_d7c = 0;
              local_d74 = 0;
              local_d6c = 0;
              local_d64 = 0;
              local_d5c = 0;
              local_d54 = 0;
              local_d4c = 0;
              local_d44 = 0;
              local_d3c = 0;
              local_d34 = 0;
              local_d2c = 0;
              local_d24 = 0;
              local_d1c = 0;
              local_d14 = 0;
              local_d0c = 0;
              local_d04 = 0;
              local_cfc = 0;
              local_cf4 = 0;
              local_cec = 0;
              local_ce4 = 0;
              local_cdc = 0;
              local_cd4 = 0;
              local_ccc = 0;
              local_cc4 = 0;
              local_cc0 = 0;
              local_cbc = 0;
              local_cb8 = 0;
              local_cb0 = 0;
              local_ca8 = 0;
              local_ca0 = 2;
              local_c9e = 0;
              local_c9c = 0;
              local_c94 = 0;
              local_c90 = 0x4396ff27;
              local_c88 = 0;
              uStack_c80 = 0;
              local_c78 = 0;
              local_c74 = 0;
              local_c70 = 0x3f800000;
              local_c68 = 0;
              local_c60 = 0;
              local_c58 = 0;
              local_c50 = 0;
              FUN_1801fd810(&local_1408,&local_a38);
              local_12b0 = CONCAT44(local_12b0._4_4_,0x11);
              if (local_12c0 != 0) {
                if (((DAT_181112110 == 0) ||
                    (0x7ffffffefffe < (local_12c0 + (ulonglong)DAT_181112110) - 0x10000)) ||
                   (iVar10 = FUN_180011200(), 0xfffffffd < iVar10 - 1U)) {
                  local_12b8 = 0;
                }
                else {
                  puVar16 = (undefined8 *)FUN_1803a0940(&local_1648,iVar10);
                  local_12b8 = *puVar16;
                }
              }
              FUN_1804624c0(&local_1408);
              FUN_180463020(&local_1408);
              puVar30 = auStack_1778;
              puVar29 = auStack_1778;
              puVar31 = auStack_1778;
              local_cb8 = local_2e8;
              local_1610 = 0;
              uStack_1608 = 0;
              local_1600 = 0;
              uStack_15f8 = 0;
              local_15f0 = 0;
              fStack_15e8 = 0.0;
              uStack_15e4 = 0;
              local_15e0 = 1.0;
              fStack_15dc = 0.0;
              local_15d8 = '\0';
              iVar10 = 0;
              while( true ) {
                uVar18 = local_c28;
                fVar42 = 0.0;
                puVar16 = &DAT_180cf9e20;
                bVar41 = iVar10 == 0;
                if (bVar41) {
                  puVar16 = (undefined8 *)&DAT_180cf9fa0;
                }
                local_c48 = (uint)*puVar16;
                uStack_c44 = (undefined4)((ulonglong)*puVar16 >> 0x20);
                uStack_c40 = *(undefined4 *)(puVar16 + 1);
                puVar16 = &DAT_180cf9e2c;
                if (bVar41) {
                  puVar16 = (undefined8 *)&DAT_180cf9fac;
                }
                uStack_c3c = (undefined4)*puVar16;
                uStack_c38 = (undefined4)((ulonglong)*puVar16 >> 0x20);
                uStack_c34 = *(undefined4 *)(puVar16 + 1);
                puVar16 = &DAT_180cf9e38;
                if (bVar41) {
                  puVar16 = (undefined8 *)&DAT_180cf9fb8;
                }
                uStack_c30 = (undefined4)*puVar16;
                uStack_c2c = (undefined4)((ulonglong)*puVar16 >> 0x20);
                uVar21 = DAT_180cf9e44;
                if (bVar41) {
                  uVar21 = DAT_180cf9fc4;
                }
                uVar22 = DAT_180cf9e45;
                if (bVar41) {
                  uVar22 = DAT_180cf9fc5;
                }
                local_c28._6_2_ = SUB82(uVar18,6);
                local_c28._0_6_ = CONCAT15(uVar22,CONCAT14(uVar21,*(undefined4 *)(puVar16 + 1)));
                local_c18 = DAT_180cf9e50;
                uStack_c20 = DAT_180cf9e48;
                if (bVar41) {
                  local_c18 = DAT_180cf9fd0;
                  uStack_c20 = DAT_180cf9fc8;
                }
                puVar16 = &DAT_180cf9e58;
                if (bVar41) {
                  puVar16 = &DAT_180cf9fd8;
                }
                local_1628 = iVar10;
                FUN_180200720(local_c10,puVar16);
                if (iVar10 == 0) {
                  local_1648 = (char *)*(ulonglong *)(lVar14 + 0x70);
                }
                else {
                  local_1648 = (char *)DAT_180cf9c28;
                }
                uVar38 = uVar38 + iVar10;
                if ((char)local_1088 == '\0') {
                  if ((uStack_c20 & 0x801) == 0) {
                    uStack_c20 = uStack_c20 | 1;
                  }
                }
                else {
                  uStack_c20 = uStack_c20 & 0xfffffffffffff7fe;
                  local_1648 = (char *)((ulonglong)local_1648 & 0xfffffffffffff7fe);
                }
                local_1624 = uVar38;
                if (iVar10 != 0) {
                  iVar12 = (int)local_12e8 + 1;
                  local_12b0 = CONCAT44(iVar12,(undefined4)local_12b0);
                  local_12a8 = CONCAT44((float)iVar12 * fVar47,(undefined4)local_12a8);
                  local_c9c = CONCAT44((float)iVar12 * fVar47,iVar12);
                  FUN_1801fc3c0(&local_1408,&local_c48,&local_1648,(longlong)(int)uVar38);
                }
                local_1758 = (char *)((ulonglong)local_1758 & 0xffffffffffffff00);
                FUN_18045a7d0(&local_bd8,&local_c48,local_1648,uVar38);
                FUN_18045ad20(&local_1408);
                FUN_180011610(&uStack_b80);
                FUN_180200b70(&local_b98);
                lVar14 = local_c58;
                iVar10 = iVar10 + 1;
                cVar8 = '\0';
                local_1650[0] = (float)local_13b8;
                local_15b0 = local_13b8._4_4_;
                local_1648 = (char *)CONCAT44(local_1648._4_4_,(undefined4)uStack_13b0);
                fVar49 = local_13e8._4_4_ + (float)local_1408;
                fVar50 = (float)uStack_13e0 + local_1408._4_4_;
                fVar51 = uStack_13e0._4_4_ + (float)uStack_1400;
                fVar47 = (float)local_1408 + 0.0;
                fVar48 = local_1408._4_4_ + 0.0;
                if ((char)local_1208 == '\0') {
                  fVar44 = DAT_1808aca34;
                }
                else {
                  fVar44 = DAT_1808ac9b4;
                }
                fVar44 = fVar44 + (float)uStack_1400;
                uVar11 = uStack_1400._4_4_;
                uVar45 = (undefined4)local_13f8;
                uVar46 = local_13f8._4_4_;
                if (local_132c != '\0') {
                  fVar43 = (local_12a8._4_4_ + 0.0) - (float)local_1328;
                  if ((0.0 < fVar43) && (fVar43 <= DAT_1808ac118)) {
                    cVar8 = '\x01';
                  }
                }
                if ((((char)local_1088 == '\0') && (local_1080._4_4_ == 0.0)) &&
                   ((local_1088._3_1_ != '\0' || (local_1088._2_1_ == '\0')))) {
                  fVar42 = DAT_1808ac34c;
                }
                else if (DAT_1808ac0c0 <
                         (float)((uint)((float)local_1080 - DAT_1808ac1f4) & _DAT_1808ade90)) {
                  if ((float)local_1080 <= DAT_1808ac34c) {
                    if (0.0 <= (float)local_1080) {
                      fVar42 = (float)local_1080;
                    }
                  }
                  else {
                    fVar42 = DAT_1808ac34c;
                  }
                }
                else {
                  fVar42 = DAT_1808ac1f4;
                }
                local_161c = iVar10;
                FUN_180241850();
                if (((lVar14 == 0) || (DAT_180cf9c68 == 0)) || (0x7ffffffefffe < lVar14 - 0x10000U))
                {
                  fStack_15dc = 0.0;
                }
                else {
                  fVar43 = (float)FUN_18000f3d0((ulonglong)DAT_180cf9c68 + lVar14);
                  fVar43 = fVar43 * DAT_1808ac2cc;
                  fStack_15dc = DAT_1808acc2c;
                  if ((fVar43 <= DAT_1808acc2c) &&
                     (fStack_15dc = DAT_1808ac900, DAT_1808ac900 <= fVar43)) {
                    fStack_15dc = fVar43;
                  }
                  fStack_15dc = (fVar42 * DAT_1808ac254 + DAT_1808ac154) * fStack_15dc;
                }
                if (cVar8 == '\0') {
                  fStack_15e8 = local_15b0;
                  uStack_15e4 = (float)local_1648;
                  fVar43 = local_1650[0];
                }
                else {
                  fStack_15e8 = (float)uStack_1320;
                  uStack_15e4 = uStack_1320._4_4_;
                  fVar44 = local_1308._4_4_;
                  uVar11 = (undefined4)uStack_1300;
                  uVar45 = uStack_1300._4_4_;
                  uVar46 = (undefined4)local_12f8;
                  fVar47 = uStack_1310._4_4_;
                  fVar48 = (float)local_1308;
                  fVar49 = (float)local_1318;
                  fVar50 = local_1318._4_4_;
                  fVar51 = (float)uStack_1310;
                  fVar43 = local_1328._4_4_;
                }
                local_1610 = CONCAT44(fVar50,fVar49);
                uStack_1608 = CONCAT44(fVar47,fVar51);
                local_1600 = CONCAT44(fVar44,fVar48);
                uStack_15f8 = CONCAT44(uVar45,uVar11);
                local_15f0 = CONCAT44(fVar43,uVar46);
                local_15e0 = fVar42;
                local_15d8 = cVar8;
                if (((local_1088._2_1_ != '\0') && (local_1088._3_1_ == '\0')) &&
                   (local_1080._4_4_ == 0.0)) {
                  FUN_180200b70(local_c10);
                  uRam00000001809f3308 =
                       CONCAT17(local_15d5,CONCAT25(local_15d7,CONCAT14(local_15d8,fStack_15dc)));
                  if (local_1628 != 0) {
                    bVar41 = true;
                    local_1624 = uVar38;
                    local_161c = iVar10;
                    goto LAB_180258d49;
                  }
                  DAT_1809f32d1 = 1;
                  bVar41 = true;
                  local_161c = iVar10;
                  goto LAB_180258d4b;
                }
                FUN_180200b70(local_c10);
                if (local_1620 <= iVar10) break;
                lVar14 = local_15d0;
                fVar47 = DAT_1808ac00c;
                uVar38 = local_1638;
              }
              bVar41 = false;
              local_1628 = -1;
              local_1624 = local_1638;
              uRam00000001809f3308 =
                   CONCAT17(local_15d5,CONCAT25(local_15d7,CONCAT14(local_15d8,fStack_15dc)));
LAB_180258d49:
              DAT_1809f32d1 = 0;
LAB_180258d4b:
              DAT_1809f32d0 = '\x01';
              _DAT_1809f32d4 = local_1610;
              uRam00000001809f32dc = uStack_1608;
              _DAT_1809f32e4 = local_1600;
              uRam00000001809f32ec = uStack_15f8;
              _DAT_1809f32f4 = local_15f0;
              fRam00000001809f32fc = fStack_15e8;
              _DAT_1809f3300 = uStack_15e4;
              fRam00000001809f3304 = local_15e0;
              FUN_180254db0(&DAT_1809f32d4);
              pcVar39 = local_1618;
              puVar36 = auStack_1778;
              if (bVar2) {
                plVar15 = (longlong *)FUN_1800ad890(&local_1618);
                dVar4 = DAT_1808ac878;
                fVar47 = DAT_1808ac34c;
                lVar14 = *plVar15 - (longlong)local_1618;
                local_1618 = (char *)((double)lVar14 / DAT_1808ac878);
                if (bVar41) {
                  fVar42 = local_12b0._4_4_;
                  local_1650[0] = local_12b0._4_4_;
                  if ((local_12a0 < 0.0) || (fVar48 = local_12a0, DAT_1808ac34c <= local_12a0)) {
                    local_1650[0] = 0.0;
                    fVar48 = (float)FUN_180512fd0(lVar14,local_1650);
                    if (fVar48 < 0.0) {
                      fVar48 = fVar48 + fVar47;
                      if (fVar48 < fVar47) {
                        local_1650[0] = local_1650[0] + DAT_1808acda0;
                      }
                      else {
                        fVar48 = 0.0;
                      }
                    }
                    local_1650[0] = (float)((int)fVar42 + (int)local_1650[0]);
                  }
                  local_1657 = '\0';
                  local_15a8 = 0;
                  lStack_15a0 = 0;
                  local_1598 = 0;
                  uStack_1590 = 0;
                  local_1588 = 0;
                  uStack_1580 = 0;
                  local_1578 = 0;
                  lStack_1570 = 0;
                  local_1568 = 0;
                  local_1560 = 0;
                  local_1558 = 0;
                  local_1550 = 0;
                  local_1548 = 0;
                  uStack_1540 = 0;
                  local_1538 = 0;
                  local_1530 = 0x10000;
                  local_152c = 0;
                  local_1524 = 0;
                  local_1520 = 0;
                  local_1518 = 0;
                  uStack_1510 = 0;
                  fVar47 = 0.0;
                  local_1508 = 0.0;
                  local_1504 = 0;
                  local_1500 = 0;
                  local_14f8 = 0;
                  local_14f0 = 0.0;
                  local_14ec = 0;
                  uStack_14e4 = 0;
                  local_14dc = 0;
                  uStack_14d4 = 0;
                  local_14cc = 0;
                  local_14c4 = 0;
                  local_14c0 = 0;
                  local_14b8 = 0;
                  local_14b0 = 0;
                  local_14a8 = 0;
                  local_14a0 = 0;
                  local_1498 = 0x3f800000;
                  local_1490 = 0;
                  local_148c = 0x100;
                  local_1488 = 0;
                  local_1484 = 0;
                  local_1480 = 0;
                  local_147c = 0;
                  local_1478 = 0;
                  uStack_1470 = 0;
                  local_1468 = 0;
                  uStack_1460 = 0;
                  local_1458 = 0;
                  uStack_1450 = 0;
                  local_1448 = 0;
                  local_1440 = 0;
                  local_1438 = 0xffffffff;
                  local_1434 = 0;
                  local_142c = 0;
                  local_1424 = 0;
                  local_141c = 0;
                  local_15c8 = (char *)0x0;
                  pcStack_15c0 = (char *)0x0;
                  local_15b8 = 0;
                  if (bVar3) {
                    local_bd8 = 0;
                    uStack_bd0 = 0;
                    local_bc8 = 0;
                    uStack_bc0 = 0;
                    local_bb8 = _DAT_1808ad960;
                    uStack_bb0 = _UNK_1808ad968;
                    local_ba8 = _DAT_1808ad2b0;
                    uStack_ba0 = _UNK_1808ad2b8;
                    local_b98 = 0;
                    uStack_b94 = 0xbf800000;
                    uStack_b90 = 0;
                    local_b88 = local_b88 & 0xffffff0000000000;
                    uStack_b80 = 0;
                    uStack_b7c = 0;
                    uStack_b78 = 0;
                    uStack_b74 = 0;
                    uStack_b70 = 0;
                    uStack_b6c = 0;
                    uStack_b68 = 0;
                    uStack_b64 = 0;
                    uStack_b60 = 0;
                    local_b5c = 0;
                    uStack_b58 = 0;
                    uStack_b54 = 0;
                    uStack_b50 = 0;
                    local_b4c = 0;
                    uStack_b48 = uStack_b48 & 0xffffff00;
                    uStack_b44 = 0;
                    uStack_b40 = 0;
                    uStack_b3c = 0;
                    local_b38 = 0;
                    uStack_b30 = 0;
                    local_b28 = 0;
                    uStack_b20 = 0;
                    local_b18 = 0;
                    uStack_b10 = 0;
                    local_b08 = 0;
                    local_b00 = 0xffffffff;
                    local_afc = 0;
                    local_af8 = 0;
                    uStack_af0 = 0;
                    local_ae8 = 0;
                    local_ae0 = 0;
                    local_ad8 = 0;
                    local_ad0 = 0;
                    local_ac8 = 0;
                    local_ac0 = 0x200003001;
                    local_ab8 = 0x8000100000;
                    local_ab0 = 0;
                    local_aa8 = 0x10;
                    local_aa0 = 0;
                    cVar8 = FUN_1802547b0(&local_1630,uVar13,&local_1610,&local_bd8);
                    if (cVar8 == '\0') {
                      local_1648 = "start trace failed";
                      lVar26 = lStack_15a0;
                      lVar14 = local_15a8;
                      goto LAB_180259995;
                    }
                    lVar14 = 2;
                    puVar6 = local_278;
                    puVar7 = &local_bd8;
                    do {
                      puVar23 = puVar7;
                      puVar17 = puVar6;
                      uVar28 = puVar23[1];
                      *puVar17 = *puVar23;
                      puVar17[1] = uVar28;
                      uVar28 = puVar23[3];
                      puVar17[2] = puVar23[2];
                      puVar17[3] = uVar28;
                      uVar28 = puVar23[5];
                      puVar17[4] = puVar23[4];
                      puVar17[5] = uVar28;
                      uVar28 = puVar23[7];
                      puVar17[6] = puVar23[6];
                      puVar17[7] = uVar28;
                      uVar28 = puVar23[9];
                      puVar17[8] = puVar23[8];
                      puVar17[9] = uVar28;
                      uVar28 = puVar23[0xb];
                      puVar17[10] = puVar23[10];
                      puVar17[0xb] = uVar28;
                      uVar28 = puVar23[0xd];
                      puVar17[0xc] = puVar23[0xc];
                      puVar17[0xd] = uVar28;
                      uVar28 = puVar23[0xf];
                      puVar17[0xe] = puVar23[0xe];
                      puVar17[0xf] = uVar28;
                      lVar14 = lVar14 + -1;
                      puVar6 = puVar17 + 0x10;
                      puVar7 = puVar23 + 0x10;
                    } while (lVar14 != 0);
                    uVar28 = puVar23[0x11];
                    puVar17[0x10] = puVar23[0x10];
                    puVar17[0x11] = uVar28;
                    uVar28 = puVar23[0x13];
                    puVar17[0x12] = puVar23[0x12];
                    puVar17[0x13] = uVar28;
                    uVar28 = puVar23[0x15];
                    puVar17[0x14] = puVar23[0x14];
                    puVar17[0x15] = uVar28;
                    uVar28 = puVar23[0x17];
                    puVar17[0x16] = puVar23[0x16];
                    puVar17[0x17] = uVar28;
                    uVar18 = FUN_1802464e0(&local_bd8,local_278);
                    FUN_180247990(&local_15a8,uVar18);
                    FUN_18025deb0(&uStack_b50);
                    FUN_180042970(&uStack_b78);
                    FUN_1800132b0(&local_ba8);
                    FUN_180068f30(&uStack_bc0);
                    FUN_180011610(&local_bd8);
                    fVar47 = local_1508;
                    iVar10 = (int)local_1500;
                    cVar8 = local_1530._2_1_;
                    if ((((uVar5 - 0x2e & 0xfffffffd) == 0) && ((char)local_1504 != '\0')) &&
                       ((int)local_1500 != DAT_1809f2f38)) {
                      DAT_1809f2f38 = (int)local_1500;
                      local_1710 = "trajectory invalid (NL T+0x8C == 0): no release";
                      if (local_1530._2_1_ != '\0') {
                        local_1710 = "trajectory valid, release decided by the targets";
                      }
                      local_1718 = (double)(float)uStack_1470;
                      local_1720 = (double)local_1478._4_4_;
                      local_1728 = (char *)(double)(float)local_1478;
                      if ((int)local_1500 == 1) {
                        local_1730 = "air burst: nothing within 128u below, no fire";
                      }
                      else {
                        local_1730 = "fire spawns";
                        if ((int)local_1500 == 2) {
                          local_1730 = "goes out in a smoke";
                        }
                      }
                      switch(uVar5) {
                      case 0x2b:
                        pcVar40 = "flashbang";
                        break;
                      case 0x2c:
                        pcVar40 = "hegrenade";
                        break;
                      case 0x2d:
                        pcVar40 = "smoke";
                        break;
                      case 0x2e:
                        pcVar40 = "molotov";
                        break;
                      case 0x2f:
                        pcVar40 = "decoy";
                        break;
                      case 0x30:
                        pcVar40 = "incgrenade";
                        break;
                      default:
                        pcVar40 = "?";
                      }
                      local_1738 = (char *)(double)local_14f0;
                      local_1740 = (char *)(double)local_1508;
                      local_1748 = (char *)(double)local_14f8._4_4_;
                      local_1750 = (undefined1 *)(double)(float)local_14f8;
                      local_1758 = (char *)(double)local_1500._4_4_;
                      FUN_1802b2840("wl_grenade.log",
                                    "[grenade release] cmd %d | %s detonation at %.1f %.1f %.1f t %.2fs (fuse %.2f) | %s | fire at %.1f %.1f %.1f | %s"
                                    ,local_1638,pcVar40);
                    }
                    uVar28 = local_1440;
                    lVar26 = lStack_15a0;
                    lVar14 = local_15a8;
                    if (local_1654 != 0x2d) {
LAB_18025970d:
                      uVar38 = local_1654;
                      if ((local_1530._2_1_ == '\0') ||
                         ((ulonglong)((lVar26 - lVar14 >> 2) * -0x5555555555555555) < 2)) {
                        if (iVar10 != 1) {
                          local_1648 = "trajectory invalid";
                          if (iVar10 == 2) {
                            local_1648 = "molotov goes out in a smoke";
                          }
                          goto LAB_180259995;
                        }
                        local_1648 = "molotov bursts in the air (no fire)";
                        goto LAB_18025999d;
                      }
                      if (((local_1654 - 0x2e & 0xfffffffd) == 0) && (local_1504._1_1_ != '\0')) {
                        local_1648 = "molotov touched a player";
                        goto LAB_180259999;
                      }
                      local_1750 = &DAT_1809213ac;
                      local_1758 = (char *)CONCAT44(local_1758._4_4_,local_1438);
                      local_1657 = FUN_180252570(&local_1630,local_1654,lVar26 + -0xc,uVar28);
                      if (local_1657 == '\0') {
                        if ((uVar38 == 0x2d) && (uVar28 == 0)) {
                          local_1648 = "smoke meets no fire in flight";
                        }
                        else {
                          local_1648 = "not worth";
                        }
                        goto LAB_180259999;
                      }
                      local_1648 = "release";
                      if (local_1658 != '\0') {
                        local_1648 = "pull the pin";
                      }
                      goto LAB_1802597ab;
                    }
                    uVar24 = 4;
                    if (cVar8 != '\0') {
                      uVar24 = 0;
                    }
                    uVar24 = (uint)local_1434 & 3 | uVar24 | local_1440;
                    if (uVar24 == DAT_1809f3178) goto LAB_18025970d;
                    if (local_15a8 == lStack_15a0) {
                      uVar11 = 0;
                      uVar45 = 0;
                      local_1640 = 0.0;
                    }
                    else {
                      uVar11 = *(undefined4 *)(lStack_15a0 + -0xc);
                      uVar45 = *(undefined4 *)(lStack_15a0 + -8);
                      local_1640 = *(float *)(lStack_15a0 + -4);
                    }
                    local_1648 = (char *)CONCAT44(uVar45,uVar11);
                    DAT_1809f3178 = uVar24;
                    if ((cVar8 == '\0') ||
                       ((ulonglong)((lStack_15a0 - local_15a8 >> 2) * -0x5555555555555555) < 2)) {
LAB_18025953d:
                      bVar41 = false;
                    }
                    else {
                      local_1750 = &DAT_1809213ac;
                      local_1758 = (char *)CONCAT44(local_1758._4_4_,local_1438);
                      cVar8 = FUN_180252570(&local_1630,0x2d,&local_1648,local_1440);
                      if (cVar8 == '\0') goto LAB_18025953d;
                      bVar41 = true;
                    }
                    if (uVar28 == 0) {
                      pcVar40 = "no fire met, no release";
                    }
                    else {
                      pcVar40 = "fire met but owner is a teammate / fire out of reach, no release";
                      if (bVar41) {
                        pcVar40 = "fire reached, release";
                      }
                    }
                    pcVar33 = (char *)(double)local_1640;
                    puVar36 = (undefined1 *)(double)local_1648._4_4_;
                    pcVar37 = (char *)(double)(float)local_1648;
                    FUN_180540170(local_278,0,0x180);
                    if (uVar28 == 0) {
                      local_1750 = (undefined1 *)CONCAT44(local_1750._4_4_,local_141c._4_4_);
                      local_1758 = (char *)CONCAT44(local_1758._4_4_,(undefined4)local_141c);
                      snprintf(local_278,0x180,
                               "no fire met: %d bounce checks, burning infernos within 512u %d, molotovs in flight with fires at that time %d"
                               ,local_1424._4_4_);
                    }
                    else {
                      local_1738 = (char *)(double)(float)local_1424;
                      local_1740 = (char *)(double)local_142c._4_4_;
                      local_1748 = (char *)(double)(float)local_142c;
                      local_1750 = (undefined1 *)(double)local_1434._4_4_;
                      pcVar34 = "predicted fire of molotov in flight";
                      if ((uint)local_1434 == 1) {
                        pcVar34 = "live inferno";
                      }
                      local_1758 = (char *)uVar28;
                      snprintf(local_278,0x180,
                               "meets %s %llx: fire at %.1f %.1f %.1f, %.3fs from now, trace to it from the bounce point -> detonates there (T+0xFC set)"
                               ,pcVar34);
                    }
                    local_c48 = 0;
                    uStack_c44 = 0;
                    uStack_c40 = 0;
                    uStack_c3c = 0;
                    uStack_c38 = 0;
                    uStack_c34 = 0;
                    uStack_c30 = 0;
                    uStack_c2c = 0;
                    sVar20 = strlen((char *)local_278);
                    FUN_1800133a0(&local_c48,local_278,sVar20);
                    puVar35 = &local_c48;
                    if (0xf < CONCAT44(uStack_c2c,uStack_c30)) {
                      puVar35 = (uint *)CONCAT44(uStack_c44,local_c48);
                    }
                    local_1740 = (char *)(double)fVar47;
                    local_1758 = pcVar37;
                    local_1750 = puVar36;
                    local_1748 = pcVar33;
                    local_1738 = pcVar40;
                    FUN_1802b2840("wl_grenade.log",
                                  "[grenade release] cmd %d | smoke in flight (NL 0x3ef5e0) | %s | ends at %.1f %.1f %.1f t %.2fs | smoke rule (0x3caae0): %s"
                                  ,local_1638,puVar35);
                    uVar24 = CONCAT44(uStack_c2c,uStack_c30);
                    if (uVar24 < 0x10) goto LAB_18025970d;
                    uVar27 = uVar24 + 1;
                    lVar19 = CONCAT44(uStack_c44,local_c48);
                    lVar32 = lVar19;
                    if (uVar27 < 0x1000) {
LAB_180259701:
                      thunk_FUN_1803d64e0(lVar32,uVar27);
                      goto LAB_18025970d;
                    }
                    lVar32 = *(longlong *)(lVar19 + -8);
                    if ((lVar19 - lVar32) - 8U < 0x20) {
                      uVar27 = uVar24 + 0x28;
                      goto LAB_180259701;
                    }
LAB_18025a053:
                    pcVar1 = (code *)swi(0x29);
                    (*pcVar1)(5);
                    puVar29 = auStack_1770;
LAB_18025a05a:
                    pcVar1 = (code *)swi(0x29);
                    (*pcVar1)(5);
                    puVar30 = puVar29 + 8;
                    pcVar40 = pcVar39;
LAB_18025a061:
                    puVar31 = puVar30;
LAB_18025a064:
                    *(undefined8 *)(puVar31 + -8) = 0x18025a069;
                    thunk_FUN_1803d64e0(pcVar40);
                    local_15c8 = (char *)0x0;
                    pcStack_15c0 = (char *)0x0;
                    local_15b8 = 0;
                    puVar36 = puVar31;
                  }
                  else {
                    local_1648 = "cannot attack yet";
                    lVar26 = 0;
                    lVar14 = 0;
LAB_180259995:
                    uVar38 = local_1654;
LAB_180259999:
LAB_18025999d:
                    uVar13 = DAT_180cf9bf4 & 0x8000001f;
                    if ((int)uVar13 < 0) {
                      uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
                    }
                    DAT_180cf9bf4 = DAT_180cf9bf4 + 1;
                    if (uVar13 == 0) {
LAB_1802597ab:
                      bVar41 = true;
                      if ((local_1530._2_1_ != '\0') &&
                         (1 < (ulonglong)((lVar26 - lVar14 >> 2) * -0x5555555555555555))) {
                        FUN_180255b20(&local_1630,uVar38,lVar26 + -0xc,&local_15c8);
                      }
                    }
                    else {
                      bVar41 = false;
                    }
                    plVar15 = (longlong *)FUN_1800ad890(&local_1630);
                    lVar32 = *plVar15;
                    iVar10 = (int)local_12b0._4_4_;
                    fVar42 = 0.0;
                    fVar49 = (local_12a8._4_4_ + 0.0) - (float)local_1328;
                    if ((0.0 < fVar49) && (fVar49 <= DAT_1808ac118)) {
                      fVar49 = (float)FUN_18053ef70((float)local_1328 * DAT_1808acab0);
                      if ((int)fVar49 < iVar10) {
                        iVar10 = (int)fVar49;
                      }
                    }
                    if (local_1657 != '\0') {
                      _DAT_1809f32c8 = CONCAT11(local_1658,1);
                      DAT_1809f32cc = iVar10;
                      FUN_180256050(local_15d0,local_1658,iVar10);
                      if (local_1658 == '\0') {
                        local_c48 = local_c48 & 0xffffff00;
                        uStack_c44 = 0;
                        uStack_c40 = 0;
                        uStack_c3c = 0;
                        uStack_c38 = 0;
                        uStack_c34 = 0;
                        uStack_c30 = 0;
                        uStack_c2c = 0;
                        local_c10[0] = 0;
                        DAT_180cf9de0 = 0;
                        _DAT_180cf9de4 = 0;
                        _DAT_180cf9dec = 0;
                        _DAT_180cf9df0 = 0;
                        _DAT_180cf9df8 = 0;
                        FUN_18025d840(&DAT_180cf9e00);
                        DAT_180cf9e00 = 0;
                        DAT_180cf9e08 = 0;
                        _DAT_180cf9e10 = 0;
                        local_c28 = 0;
                        uStack_c20 = 0;
                        local_c18 = 0;
                        DAT_180cf9e18 = 0;
                        FUN_18025d840(&local_c28);
                        DAT_180cf9de0 = 1;
                        _DAT_180cf9de4 = CONCAT44(local_1638,local_1654);
                        if ((DAT_180961a50 == 0) || (lVar19 = FUN_18000f3a0(), lVar19 == 0)) {
                          _DAT_180cf9dec = 0;
                        }
                        else {
                          _DAT_180cf9dec = FUN_18000f3d0(lVar19 + 0x30);
                        }
                        _DAT_180cf9df0 = *(undefined8 *)(lVar26 + -0xc);
                        _DAT_180cf9df8 = CONCAT44(fVar47,*(undefined4 *)(lVar26 + -4));
                        FUN_18025c010(&DAT_180cf9e00,local_15c8,
                                      ((longlong)pcStack_15c0 - (longlong)local_15c8 >> 3) *
                                      0x6db6db6db6db6db7);
                      }
                    }
                    pcVar40 = pcStack_15c0;
                    uVar38 = local_1654;
                    if ((bVar41) && (DAT_180cf9d68 < 6000)) {
                      lVar32 = lVar32 - (longlong)pcVar39;
                      DAT_180cf9d68 = DAT_180cf9d68 + 1;
                      if (lVar14 == lVar26) {
                        fVar49 = 0.0;
                        fVar50 = 0.0;
                      }
                      else {
                        fVar42 = *(float *)(lVar26 + -0xc);
                        fVar49 = *(float *)(lVar26 + -8);
                        fVar50 = *(float *)(lVar26 + -4);
                      }
                      pcVar33 = "";
                      if (local_1657 == '\0') {
                        pcVar37 = "";
                      }
                      else {
                        pcVar37 = " -> attack/attack2 released this command, replay armed";
                        if (local_1658 != '\0') {
                          pcVar37 = " -> IN_ATTACK held this command, replay armed";
                        }
                      }
                      local_1630 = pcVar37;
                      if (local_15c8 == pcStack_15c0) {
                        uStack_bf0 = 0;
                        local_be8 = 4;
                        uStack_be0 = 0xf;
                        local_bf8 = (undefined8 *******)(ulonglong)_DAT_1806dfd84;
                      }
                      else {
                        uStack_c44 = 0;
                        uStack_c40 = 0;
                        uStack_c3c = 0;
                        lVar14 = 0;
                        uStack_c38 = 0;
                        uStack_c34 = 0;
                        uStack_c30 = 0xf;
                        uStack_c2c = 0;
                        local_c48 = 0;
                        if (local_15c8 != pcStack_15c0) {
                          pcVar39 = local_15c8;
                          if (local_1654 == 0x2b) {
                            while( true ) {
                              local_1748 = "";
                              if (pcVar39[0x30] != '\0') {
                                local_1748 = " (flag)";
                              }
                              local_1750 = (undefined1 *)(double)*(float *)(pcVar39 + 0x28);
                              local_1758 = pcVar39 + 8;
                              if (0xf < *(ulonglong *)(pcVar39 + 0x20)) {
                                local_1758 = *(char **)local_1758;
                              }
                              puVar36 = &DAT_1806f0594;
                              if (lVar14 == 0) {
                                puVar36 = &DAT_18058b643;
                              }
                              snprintf(&local_bd8,0xa0,"%s%s blind %.2f%s",puVar36);
                              sVar20 = strlen((char *)&local_bd8);
                              FUN_1800134a0(&local_c48,&local_bd8,sVar20);
                              if (pcVar39 + 0x38 == pcVar40) break;
                              lVar14 = CONCAT44(uStack_c34,uStack_c38);
                              pcVar39 = pcVar39 + 0x38;
                            }
                          }
                          else {
                            while( true ) {
                              local_1758 = pcVar39 + 8;
                              if (uVar38 == 0x2c) {
                                local_1740 = "";
                                if (pcVar39[0x30] != '\0') {
                                  local_1740 = " (flag)";
                                }
                                local_1748 = (char *)(double)*(float *)(pcVar39 + 0x2c);
                                local_1750 = (undefined1 *)(double)*(float *)(pcVar39 + 0x28);
                                if (0xf < *(ulonglong *)(pcVar39 + 0x20)) {
                                  local_1758 = *(char **)local_1758;
                                }
                                puVar36 = &DAT_1806f0594;
                                if (lVar14 == 0) {
                                  puVar36 = &DAT_18058b643;
                                }
                                snprintf(&local_bd8,0xa0,"%s%s far %.1f near %.1f%s",puVar36);
                              }
                              else {
                                local_1748 = " (outer)";
                                if (pcVar39[0x30] != '\0') {
                                  local_1748 = " (inner)";
                                }
                                local_1750 = (undefined1 *)(double)*(float *)(pcVar39 + 0x28);
                                if (0xf < *(ulonglong *)(pcVar39 + 0x20)) {
                                  local_1758 = *(char **)local_1758;
                                }
                                puVar36 = &DAT_1806f0594;
                                if (lVar14 == 0) {
                                  puVar36 = &DAT_18058b643;
                                }
                                snprintf(&local_bd8,0xa0,"%s%s %.0fu%s",puVar36);
                              }
                              sVar20 = strlen((char *)&local_bd8);
                              FUN_1800134a0(&local_c48,&local_bd8,sVar20);
                              if (pcVar39 + 0x38 == pcVar40) break;
                              lVar14 = CONCAT44(uStack_c34,uStack_c38);
                              pcVar39 = pcVar39 + 0x38;
                            }
                            pcVar37 = local_1630;
                          }
                        }
                        local_bf8 = (undefined8 *******)CONCAT44(uStack_c44,local_c48);
                        uStack_bf0 = CONCAT44(uStack_c3c,uStack_c40);
                        local_be8 = CONCAT44(uStack_c34,uStack_c38);
                        uStack_be0 = CONCAT44(uStack_c2c,uStack_c30);
                      }
                      uVar38 = local_1638;
                      pcVar40 = "flashbang";
                      local_1678 = &local_bf8;
                      if (0xf < uStack_be0) {
                        local_1678 = local_bf8;
                      }
                      switch(local_1654) {
                      case 0x2b:
                        break;
                      case 0x2c:
                        pcVar40 = "hegrenade";
                        break;
                      case 0x2d:
                        pcVar40 = "smoke";
                        break;
                      case 0x2e:
                        pcVar40 = "molotov";
                        break;
                      case 0x2f:
                        pcVar40 = "decoy";
                        break;
                      case 0x30:
                        pcVar40 = "incgrenade";
                        break;
                      default:
                        pcVar40 = "?";
                      }
                      local_1688 = (double)fVar47;
                      local_1690 = (double)fVar50;
                      local_1698 = (double)fVar49;
                      local_16a0 = (double)fVar42;
                      local_16a8 = "";
                      if (local_15d8 != '\0') {
                        local_16a8 = " (stashed)";
                      }
                      local_16b0 = (double)fStack_15dc;
                      local_16b8 = (double)local_15e0;
                      local_16c0 = (double)(float)local_15f0;
                      local_16c8 = (double)uStack_15f8._4_4_;
                      local_16d0 = (double)(float)uStack_15f8;
                      local_16d8 = (double)fStack_15e8;
                      local_16e0 = (double)local_15f0._4_4_;
                      local_16e8 = (double)(float)uStack_1608;
                      local_16f0 = (double)local_1610._4_4_;
                      local_16f8 = (double)(float)local_1610;
                      local_1700 = (double)fVar48;
                      local_1670 = local_1648;
                      local_1680 = (undefined4)(lStack_1570 - local_1578 >> 3);
                      local_1708 = local_1650[0];
                      local_1710 = (char *)CONCAT44(local_1710._4_4_,local_1624);
                      local_1718 = (double)CONCAT44(local_1718._4_4_,local_1628);
                      local_1728 = local_1618;
                      local_1730 = (char *)CONCAT44(local_1730._4_4_,local_1620);
                      local_1738 = (char *)CONCAT44(local_1738._4_4_,local_161c);
                      local_1740 = (char *)CONCAT44(local_1740._4_4_,DAT_1809213bc);
                      local_1748 = (char *)CONCAT44(local_1748._4_4_,DAT_1809213b8);
                      local_1750 = (undefined1 *)CONCAT44(local_1750._4_4_,(uint)local_1656);
                      local_1758 = (char *)CONCAT44(local_1758._4_4_,(uint)(local_1655 != '\0'));
                      pcVar39 = (char *)(ulonglong)local_1638;
                      local_1720 = (double)lVar32 / dVar4;
                      local_1668 = pcVar37;
                      FUN_1802b2560("[grenade release] cmd %d tick %d | %s pin %d can attack %d min dmg %d molotov %d%% | sim %d/%d ticks %.2f ms, total %.2f ms | out at sim tick %d (cmd %d) tick %d frac %.3f | launch eye %.1f %.1f %.1f ang %.2f %.2f vel %.1f %.1f %.1f strength %.3f speed %.1f%s | landing %.1f %.1f %.1f t %.2fs bounces %d | targets: %s | %s%s"
                                    ,pcVar39,iStack_8dc,pcVar40);
                      if (0xf < uStack_be0) {
                        uVar28 = uStack_be0 + 1;
                        pppppppuVar25 = local_bf8;
                        if (0xfff < uVar28) {
                          pppppppuVar25 = (undefined8 *******)local_bf8[-1];
                          if (0x1f < (ulonglong)
                                     ((longlong)local_bf8 + (-8 - (longlong)pppppppuVar25)))
                          goto LAB_18025a053;
                          uVar28 = uStack_be0 + 0x28;
                        }
                        thunk_FUN_1803d64e0(pppppppuVar25,uVar28);
                      }
                      if ((local_1657 != '\0') && (DAT_180cf9d68 < 6000)) {
                        DAT_180cf9d68 = DAT_180cf9d68 + 1;
                        if ((float)iVar10 != local_12b0._4_4_) {
                          pcVar33 = " (stash tick)";
                        }
                        local_1748 = (char *)CONCAT44(local_1748._4_4_,iVar10);
                        local_1750 = (undefined1 *)CONCAT44(local_1750._4_4_,uVar38);
                        local_1758 = *(char **)(local_15d0 + 0x70);
                        local_1740 = pcVar33;
                        FUN_1802b2560("[grenade release] written | cmd %d buttons 0x%llx changed 0x%llx scroll 0x%llx | replay of cmd %d input until tick %d%s"
                                      ,pcVar39,DAT_180cf9fc8,DAT_180cf9fd0);
                      }
                    }
                    pcVar40 = pcStack_15c0;
                    puVar36 = auStack_1778;
                    pcVar39 = local_15c8;
                    if (local_15c8 != (char *)0x0) {
                      for (; pcVar39 != pcVar40; pcVar39 = pcVar39 + 0x38) {
                        FUN_18000f890(pcVar39 + 8);
                      }
                      pcVar40 = local_15c8;
                      if ((ulonglong)((local_15b8 - (longlong)local_15c8 >> 3) * 8) < 0x1000)
                      goto LAB_18025a061;
                      pcVar40 = *(char **)(local_15c8 + -8);
                      pcVar39 = local_15c8 + (-8 - (longlong)pcVar40);
                      if ((char *)0x1f < pcVar39) goto LAB_18025a05a;
                      goto LAB_18025a064;
                    }
                  }
                  *(undefined8 *)(puVar36 + -8) = 0x18025a085;
                  FUN_18025deb0(&local_1520);
                  *(undefined8 *)(puVar36 + -8) = 0x18025a091;
                  FUN_180042970(&local_1548);
                  *(undefined8 *)(puVar36 + -8) = 0x18025a09a;
                  FUN_1800132b0(&local_1578);
                  *(undefined8 *)(puVar36 + -8) = 0x18025a0a3;
                  FUN_180068f30(&uStack_1590);
                  *(undefined8 *)(puVar36 + -8) = 0x18025a0ac;
                  FUN_180011610(&local_15a8);
                }
                else {
                  uVar38 = DAT_180cf9bf4 & 0x8000001f;
                  if ((int)uVar38 < 0) {
                    uVar38 = (uVar38 - 1 | 0xffffffe0) + 1;
                  }
                  DAT_180cf9bf4 = DAT_180cf9bf4 + 1;
                  puVar36 = auStack_1778;
                  if ((uVar38 == 0) && (puVar36 = auStack_1778, DAT_180cf9d68 < 6000)) {
                    DAT_180cf9d68 = DAT_180cf9d68 + 1;
                    switch(uVar5) {
                    case 0x2b:
                      pcVar39 = "flashbang";
                      break;
                    case 0x2c:
                      pcVar39 = "hegrenade";
                      break;
                    case 0x2d:
                      pcVar39 = "smoke";
                      break;
                    case 0x2e:
                      pcVar39 = "molotov";
                      break;
                    case 0x2f:
                      pcVar39 = "decoy";
                      break;
                    case 0x30:
                      pcVar39 = "incgrenade";
                      break;
                    default:
                      pcVar39 = "?";
                    }
                    local_1730 = (char *)(double)local_1080._4_4_;
                    local_1728 = (char *)CONCAT44(local_1728._4_4_,(uint)(local_1088._3_1_ != '\0'))
                    ;
                    local_1738 = (char *)CONCAT44(local_1738._4_4_,local_1620);
                    local_1748 = (char *)CONCAT44(local_1748._4_4_,iVar10);
                    local_1750 = (undefined1 *)CONCAT44(local_1750._4_4_,(uint)local_1656);
                    local_1758 = (char *)CONCAT44(local_1758._4_4_,(uint)(local_1655 != '\0'));
                    local_1740 = local_1618;
                    FUN_1802b2560("[grenade release] cmd %d tick %d | %s pin %d can attack %d | %d ticks simulated in %.2f ms | grenade not out within %d ticks (throw_time %.4f held %d)"
                                  ,local_1638,iStack_8dc,pcVar39);
                    puVar36 = auStack_1778;
                  }
                }
              }
              *(undefined8 *)(puVar36 + -8) = 0x18025a0b9;
              FUN_1800244c0(&local_1170);
            }
            else {
              if (DAT_1809f32d0 != '\0') {
                FUN_180254db0(&DAT_1809f32d4,DAT_1809f32d1);
              }
              puVar36 = auStack_1778;
              if (DAT_1809f32c8 != '\0') {
                FUN_180256050(lVar14,DAT_1809f32c9,DAT_1809f32cc);
                puVar36 = auStack_1778;
              }
            }
          }
        }
      }
    }
  }
LAB_18025a0ba:
  *(undefined8 *)(puVar36 + -8) = 0x18025a0c6;
  FUN_1800244c0(&local_7a0);
LAB_18025a0c6:
  *(undefined8 *)(puVar36 + -8) = 0x18025a0d5;
  return;
}



/* ===== 18025a190 FUN_18025a190 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18025a190(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined8 **ppuVar11;
  longlong *plVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  longlong lVar22;
  bool bVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_418 [8];
  undefined1 auStack_410 [24];
  undefined8 *local_3f8;
  undefined4 *local_3f0;
  double local_3e8;
  undefined *local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined8 *local_3c8;
  undefined8 *puStack_3c0;
  undefined8 *local_3b8;
  undefined8 *puStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined4 uStack_384;
  float fStack_380;
  float fStack_37c;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  float fStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined8 local_314;
  longlong local_308;
  longlong lStack_300;
  undefined8 local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  longlong local_210;
  longlong local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined2 local_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  float fStack_184;
  undefined4 uStack_180;
  undefined2 uStack_17c;
  undefined2 uStack_17a;
  undefined4 uStack_178;
  uint uStack_174;
  undefined4 local_170;
  undefined2 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  ulonglong local_f8;
  
  fVar30 = DAT_1808ac34c;
  puVar21 = auStack_418;
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_418;
  DAT_180ccf89a = 0;
  if (param_1 == 0) goto LAB_18025ac2a;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  cVar8 = '\0';
  local_220 = 0x10000;
  local_21c = 0;
  local_214 = 0;
  lVar17 = 0;
  local_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1f4 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  uVar27 = 0;
  uVar28 = 0;
  uVar29 = 0;
  local_1dc = 0;
  uStack_1d4 = 0;
  uVar31 = 0;
  uVar32 = 0;
  uVar33 = 0;
  uVar34 = 0;
  local_1cc = 0;
  uStack_1c4 = 0;
  local_1bc = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  local_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0x3f800000;
  fVar35 = 0.0;
  fStack_184 = 0.0;
  uStack_180 = 0;
  uStack_17c = 0x100;
  uStack_178 = 0;
  uStack_174 = uStack_174 & 0xffffff00;
  local_170 = 0;
  local_16c = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0xffffffff;
  local_124 = 0;
  local_11c = 0;
  local_114 = 0;
  local_10c = 0;
  local_308 = 0;
  lStack_300 = 0;
  local_2f8 = 0;
  local_3d8 = &DAT_1809f30e0;
  iVar9 = FUN_1804e4d70(&DAT_1809f30e0);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f312c == 0x7fffffff) {
    DAT_1809f312c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_18095d281 != '\0') {
    FUN_180254290(&local_298,&DAT_1809f3380);
    fVar35 = fStack_184;
    lVar17 = local_210;
    uVar31 = (undefined4)local_1cc;
    uVar32 = local_1cc._4_4_;
    uVar33 = (undefined4)uStack_1c4;
    uVar34 = uStack_1c4._4_4_;
    uVar27 = local_1dc._4_4_;
    uVar28 = (undefined4)uStack_1d4;
    uVar29 = uStack_1d4._4_4_;
    cVar8 = (char)local_220;
    if ((DAT_18095d281 != '\0') && (DAT_18095d2c8 != '\0')) {
      FUN_18025c7f0(&local_308,DAT_180cf9d90,
                    (DAT_180cf9d98 - DAT_180cf9d90 >> 3) * -0x505050505050505);
    }
  }
  FUN_1804e4e90(&DAT_1809f30e0);
  if (DAT_18095d281 != '\0') {
    local_398 = 0;
    uStack_390 = 0;
    lVar14 = (longlong)DAT_181107a00 * 0x40;
    local_2e8 = *(undefined8 *)(&DAT_181107930 + lVar14);
    uStack_2e0 = *(undefined8 *)(&DAT_181107938 + lVar14);
    local_2d8 = *(undefined8 *)(&DAT_181107940 + lVar14);
    uStack_2d0 = *(undefined8 *)(&DAT_181107948 + lVar14);
    local_2c8 = *(undefined8 *)(&DAT_181107950 + lVar14);
    uStack_2c0 = *(undefined8 *)(&DAT_181107958 + lVar14);
    local_2b8 = *(undefined8 *)(&DAT_181107960 + lVar14);
    uStack_2b0 = *(undefined8 *)(&DAT_181107968 + lVar14);
    local_388 = *(undefined4 *)(DAT_180ca0a50 + 0x30);
    uStack_384 = *(undefined4 *)(DAT_180ca0a50 + 0x34);
    fStack_380 = DAT_1811079b0;
    fStack_37c = DAT_1811079b4;
    local_2a8 = *(undefined4 *)(DAT_180ca0a50 + 0x30);
    uStack_2a4 = *(undefined4 *)(DAT_180ca0a50 + 0x34);
    fStack_2a0 = DAT_1811079b0;
    fStack_29c = DAT_1811079b4;
    local_3c8 = _DAT_18095d284;
    puVar16 = local_3c8;
    puStack_3c0 = puRam000000018095d28c;
    local_3b8 = _DAT_18095d294;
    puVar18 = local_3b8;
    puStack_3b0 = _DAT_18095d29c;
    fVar24 = DAT_18095d2b8;
    if (DAT_18095d2b8 < DAT_1808ac140) {
      if (DAT_18091a1b4 < 1) {
        fVar24 = fVar30;
      }
      else {
        if (DAT_18091a1b4 < 100) {
          iVar9 = 100;
        }
        else {
          iVar9 = DAT_18091a1b4;
          if (200 < DAT_18091a1b4) {
            iVar9 = 200;
          }
        }
        fVar24 = (float)iVar9 / DAT_1808acb08;
      }
    }
    fVar26 = DAT_18095d2bc;
    if (DAT_18095d2bc < DAT_1808ac140) {
      fVar26 = fVar24;
    }
    local_3a8 = CONCAT44(fVar26,fVar24);
    fVar36 = (float)DAT_18095d2b4 / DAT_1808acb08;
    uStack_3a0 = (ulonglong)(uint)fVar36;
    local_3d0 = 100;
    local_3d8 = (undefined *)((ulonglong)local_3d8 & 0xffffffff00000000);
    ppuVar15 = &local_3d8;
    if (-1 < DAT_18095d2c4) {
      ppuVar15 = (undefined **)&DAT_18095d2c4;
    }
    ppuVar10 = (undefined **)&local_3d0;
    if (DAT_18095d2c4 < 0x65) {
      ppuVar10 = ppuVar15;
    }
    uVar1 = *(undefined4 *)ppuVar10;
    local_3b8._0_4_ = SUB84(_DAT_18095d294,0);
    uVar7 = local_3b8._0_4_;
    local_3c8._0_4_ = SUB84(_DAT_18095d284,0);
    uVar5 = local_3c8._0_4_;
    if (lVar17 != local_208) {
      uVar13 = 0;
      if (DAT_18095d2c0 != '\0') {
        uVar13 = uVar1;
      }
      uStack_3a0 = CONCAT44(uVar13,fVar36);
      uStack_370 = CONCAT44(uVar29,uVar28);
      local_368 = CONCAT44(uVar32,uVar31);
      uStack_360 = CONCAT44(uVar34,uVar33);
      local_358 = local_1bc;
      uStack_350 = CONCAT44(uStack_1b0,uStack_1b4);
      local_348 = CONCAT44(uStack_1a8,uStack_1ac);
      uStack_340 = CONCAT44(uStack_1a0,uStack_1a4);
      local_338 = CONCAT44(uStack_198,uStack_19c);
      uStack_330 = CONCAT44(local_190,uStack_194);
      local_328 = CONCAT44(uStack_188,uStack_18c);
      fStack_320 = fStack_184;
      uStack_31c = uStack_180;
      local_318 = (undefined4)(CONCAT26(uStack_17a,CONCAT24(uStack_17c,uStack_180)) >> 0x20);
      local_314 = CONCAT44(uStack_174,uStack_178);
      if (cVar8 == '\0') {
        ppuVar3 = &local_3c8;
        ppuVar11 = &puStack_3c0;
        ppuVar4 = &puStack_3c0;
        local_3b8._0_4_ = local_3c8._0_4_;
      }
      else {
        ppuVar3 = &local_3b8;
        ppuVar11 = &puStack_3b0;
        ppuVar4 = &puStack_3b0;
      }
      local_378 = CONCAT44(uVar27,local_3b8._0_4_);
      local_378 = CONCAT44(*(undefined4 *)((longlong)ppuVar3 + 4),local_3b8._0_4_);
      uStack_370 = CONCAT44(uVar29,*(undefined4 *)ppuVar11);
      uStack_370 = CONCAT44(*(undefined4 *)((longlong)ppuVar4 + 4),*(undefined4 *)ppuVar11);
      uStack_340 = CONCAT44(fVar26,fVar24);
      local_338 = CONCAT44(uStack_198,fVar36);
      local_314 = CONCAT44(uStack_174,uVar13);
      local_3c8 = puVar16;
      local_3b8 = puVar18;
      if (0.0 < fStack_184) {
        local_3f8 = (undefined8 *)((local_208 - lVar17 >> 2) * -0x71c71c71c71c71c7);
        FUN_180231f40(param_1,&local_2e8,&local_378,lVar17);
      }
      FUN_180252d70(param_1,&local_298,fVar35,0);
      puVar16 = local_3c8;
      puVar18 = local_3b8;
    }
    local_3b8 = puVar18;
    local_3c8 = puVar16;
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_3d8);
      DAT_181108a00 = local_3d8;
      DAT_1811089f8 = FUN_1803a0c50(&local_3d8);
      DAT_180cd1304 = '\x01';
    }
    lVar14 = lStack_300;
    lVar17 = DAT_1811089f8;
    uVar27 = 0;
    if (DAT_18095d2c1 != '\0') {
      uVar27 = uVar1;
    }
    uStack_3a0 = CONCAT44(uVar27,(undefined4)uStack_3a0);
    for (lVar22 = local_308; lVar22 != lVar14; lVar22 = lVar22 + 0x198) {
      if ((lVar17 != 0) && (*(longlong *)(lVar22 + 0x50) == lVar17)) {
        if (*(longlong *)(lVar22 + 0x88) != *(longlong *)(lVar22 + 0x90)) {
          uStack_370 = *(undefined8 *)(lVar22 + 0xc4);
          local_368 = *(undefined8 *)(lVar22 + 0xcc);
          uStack_360 = *(undefined8 *)(lVar22 + 0xd4);
          local_358 = *(undefined8 *)(lVar22 + 0xdc);
          uStack_350 = *(undefined8 *)(lVar22 + 0xe4);
          local_348 = *(undefined8 *)(lVar22 + 0xec);
          uStack_340 = *(undefined8 *)(lVar22 + 0xf4);
          local_338 = *(undefined8 *)(lVar22 + 0xfc);
          uStack_330 = *(undefined8 *)(lVar22 + 0x104);
          local_328 = *(undefined8 *)(lVar22 + 0x10c);
          fStack_320 = *(float *)(lVar22 + 0x114);
          uStack_31c = (undefined4)*(undefined8 *)(lVar22 + 0x118);
          local_318 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0x118) >> 0x20);
          local_314 = *(undefined8 *)(lVar22 + 0x120);
          if (*(char *)(lVar22 + 0x78) == '\0') {
            uVar28 = uVar5;
          }
          else {
            uVar28 = uVar7;
          }
          local_378 = CONCAT44((int)((ulonglong)*(undefined8 *)(lVar22 + 0xbc) >> 0x20),uVar28);
          bVar23 = *(char *)(lVar22 + 0x78) != '\0';
          ppuVar11 = &local_3c8;
          if (bVar23) {
            ppuVar11 = &local_3b8;
          }
          local_378 = CONCAT44(*(undefined4 *)((longlong)ppuVar11 + 4),uVar28);
          ppuVar11 = &puStack_3c0;
          if (bVar23) {
            ppuVar11 = &puStack_3b0;
          }
          uStack_370 = CONCAT44((int)((ulonglong)*(undefined8 *)(lVar22 + 0xc4) >> 0x20),
                                *(undefined4 *)ppuVar11);
          ppuVar3 = &puStack_3c0;
          if (bVar23) {
            ppuVar3 = &puStack_3b0;
          }
          uStack_370 = CONCAT44(*(undefined4 *)((longlong)ppuVar3 + 4),*(undefined4 *)ppuVar11);
          uStack_340 = CONCAT44(fVar26,fVar24);
          local_338 = CONCAT44((int)((ulonglong)*(undefined8 *)(lVar22 + 0xfc) >> 0x20),fVar36);
          local_314 = CONCAT44((int)((ulonglong)*(undefined8 *)(lVar22 + 0x120) >> 0x20),uVar27);
          if (0.0 < *(float *)(lVar22 + 0x114)) {
            local_3f8 = (undefined8 *)
                        ((*(longlong *)(lVar22 + 0x90) - *(longlong *)(lVar22 + 0x88) >> 2) *
                        -0x71c71c71c71c71c7);
            FUN_180231f40(param_1,&local_2e8,&local_378);
          }
        }
        FUN_180252d70(param_1,lVar22,*(undefined4 *)(lVar22 + 0x114),1);
      }
    }
  }
  fVar35 = DAT_1808acb08;
  puVar20 = auStack_418;
  puVar19 = auStack_418;
  puVar21 = auStack_418;
  if (DAT_180921338 != '\0') {
    DAT_180ca006c = 0;
    local_3c8 = (undefined8 *)0x0;
    puStack_3c0 = (undefined8 *)0x0;
    local_3b8 = (undefined8 *)0x0;
    local_3d8 = &DAT_1809ebb20;
    iVar9 = FUN_1804e4d70(&DAT_1809ebb20);
    if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809ebb6c == 0x7fffffff) {
      DAT_1809ebb6c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    FUN_1800d2810(&local_3c8,DAT_180cd0dc8,
                  (DAT_180cd0dd0 - DAT_180cd0dc8 >> 3) * -0x79435e50d79435e5);
    FUN_1804e4e90(&DAT_1809ebb20);
    puVar16 = puStack_3c0;
    fVar26 = DAT_1811079b4;
    fVar24 = DAT_1811079b0;
    if (local_3c8 == puStack_3c0) {
      puVar21 = auStack_418;
      puVar18 = local_3c8;
      if (local_3c8 != (undefined8 *)0x0) {
        for (; puVar18 != puVar16; puVar18 = puVar18 + 0x13) {
          FUN_1804eced0(puVar18 + 5,0x38,2,thunk_FUN_18000f890);
        }
        puVar16 = local_3c8;
        puVar19 = auStack_418;
        if ((ulonglong)(((longlong)local_3b8 - (longlong)local_3c8 >> 3) * 8) < 0x1000)
        goto LAB_18025abdb;
        puVar16 = (undefined8 *)local_3c8[-1];
        puVar18 = (undefined8 *)((longlong)local_3c8 + (-8 - (longlong)puVar16));
        if (&DAT_0000001f < puVar18) goto LAB_18025abd4;
LAB_18025abde:
        *(undefined8 *)(puVar20 + -8) = 0x18025abe3;
        thunk_FUN_1803d64e0(puVar16);
        puVar21 = puVar20;
      }
    }
    else if ((DAT_1811079b0 <= 0.0) || (DAT_1811079b4 <= 0.0)) {
      puVar21 = auStack_418;
      puVar18 = local_3c8;
      if (local_3c8 != (undefined8 *)0x0) {
        for (; puVar18 != puVar16; puVar18 = puVar18 + 0x13) {
          FUN_1804eced0(puVar18 + 5,0x38,2,thunk_FUN_18000f890);
        }
        puVar16 = local_3c8;
        if (0xfff < (ulonglong)(((longlong)local_3b8 - (longlong)local_3c8 >> 3) * 8)) {
          puVar16 = (undefined8 *)local_3c8[-1];
          puVar18 = (undefined8 *)((longlong)local_3c8 + (-8 - (longlong)puVar16));
          puVar20 = auStack_418;
          if (&DAT_0000001f < puVar18) goto LAB_18025abd4;
          goto LAB_18025abde;
        }
        goto LAB_18025abdb;
      }
    }
    else {
      if (0 < DAT_18091a1b4) {
        iVar9 = 100;
        if ((99 < DAT_18091a1b4) && (iVar9 = DAT_18091a1b4, 200 < DAT_18091a1b4)) {
          iVar9 = 200;
        }
        fVar30 = (float)iVar9 / fVar35;
      }
      plVar12 = (longlong *)FUN_1800ad890(&local_3d8);
      puVar6 = puStack_3c0;
      dVar25 = (double)*plVar12 / DAT_1808ac9a0;
      puVar18 = puStack_3c0;
      for (puVar16 = local_3c8; puStack_3c0 = puVar18, puVar16 != puVar6; puVar16 = puVar16 + 0x13)
      {
        local_3d8 = (undefined *)((ulonglong)local_3d8 & 0xffffffff00000000);
        local_3d0 = 0;
        local_3cc = 0;
        local_3f0 = &local_3cc;
        local_3f8 = (undefined8 *)&local_3d0;
        cVar8 = FUN_1800d1230(puVar16 + 1,fVar24,fVar26,&local_3d8);
        if (cVar8 != '\0') {
          local_3f0 = (undefined4 *)CONCAT44(local_3f0._4_4_,fVar30);
          local_3f8 = puVar16;
          local_3e8 = dVar25;
          FUN_1800d00e0(param_1,local_3d8._0_4_,local_3d0,local_3cc);
          DAT_180ca006c = 1;
        }
        puVar18 = puStack_3c0;
      }
      puVar21 = auStack_418;
      puVar16 = local_3c8;
      if (local_3c8 != (undefined8 *)0x0) {
        for (; puVar16 != puVar18; puVar16 = puVar16 + 0x13) {
          FUN_1804eced0(puVar16 + 5,0x38,2,thunk_FUN_18000f890);
        }
        puVar16 = local_3c8;
        puVar19 = auStack_418;
        if (0xfff < (ulonglong)(((longlong)local_3b8 - (longlong)local_3c8 >> 3) * 8)) {
          puVar16 = (undefined8 *)local_3c8[-1];
          puVar18 = (undefined8 *)((longlong)local_3c8 + (-8 - (longlong)puVar16));
          puVar20 = auStack_418;
          if (puVar18 < &DAT_00000020) goto LAB_18025abde;
LAB_18025abd4:
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar16 = puVar18;
          puVar19 = auStack_410;
        }
LAB_18025abdb:
        puVar20 = puVar19;
        goto LAB_18025abde;
      }
    }
  }
  *(undefined8 *)(puVar21 + -8) = 0x18025abed;
  FUN_18025db60(&local_308);
  *(undefined8 *)(puVar21 + -8) = 0x18025abfa;
  FUN_18025deb0(&local_210);
  *(undefined8 *)(puVar21 + -8) = 0x18025ac06;
  FUN_180042970(&local_238);
  *(undefined8 *)(puVar21 + -8) = 0x18025ac12;
  FUN_1800132b0(&local_268);
  *(undefined8 *)(puVar21 + -8) = 0x18025ac1e;
  FUN_180068f30(&uStack_280);
  *(undefined8 *)(puVar21 + -8) = 0x18025ac2a;
  FUN_180011610(&local_298);
LAB_18025ac2a:
  *(undefined8 *)(puVar21 + -8) = 0x18025ac39;
  return;
}



/* ===== 18025acd0 FUN_18025acd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18025acd0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined1 auStack_338 [32];
  longlong local_318;
  undefined4 local_308 [2];
  undefined *local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  float fStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 local_294;
  uint uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined2 local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined8 local_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  undefined4 uStack_118;
  uint uStack_114;
  undefined4 local_110;
  undefined2 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  ulonglong local_98;
  
  if (param_1 == 0) {
    return;
  }
  local_98 = DAT_180919500 ^ (ulonglong)auStack_338;
  if (param_2 == 0) {
    return;
  }
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0x10000;
  local_1bc = 0;
  local_1b4 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_194 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_17c = 0;
  uStack_174 = 0;
  local_16c = 0;
  uStack_164 = 0;
  local_15c = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  local_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0x3f800000;
  fStack_124 = 0.0;
  uStack_120 = 0;
  uStack_11c = 0x100;
  uStack_118 = 0;
  uStack_114 = uStack_114 & 0xffffff00;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_ac = 0;
  local_300 = &DAT_1809f30e0;
  iVar2 = FUN_1804e4d70(&DAT_1809f30e0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f312c == 0x7fffffff) {
    DAT_1809f312c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar5 = DAT_180cf9d90;
  if (DAT_180cf9d90 != DAT_180cf9d98) {
    do {
      if (*(longlong *)(lVar5 + 0x48) == param_2) break;
      lVar5 = lVar5 + 0x198;
    } while (lVar5 != DAT_180cf9d98);
    if (lVar5 != DAT_180cf9d98) {
      FUN_180254290(&local_238);
      FUN_1804e4e90(&DAT_1809f30e0);
      local_2f8 = 0;
      uStack_2f0 = 0;
      local_2e8 = 0;
      uStack_2e0 = 0;
      local_300 = (undefined *)CONCAT44(local_300._4_4_,0x3f800000);
      local_308[0] = 0;
      fVar1 = *(float *)((longlong)param_3 + 0x1c);
      ppuVar4 = (undefined **)local_308;
      if (0.0 <= fVar1) {
        ppuVar4 = (undefined **)((longlong)param_3 + 0x1c);
      }
      ppuVar3 = &local_300;
      if (fVar1 <= DAT_1808ac34c) {
        ppuVar3 = ppuVar4;
      }
      fStack_124 = *(float *)(param_3 + 2);
      if (local_1c0._2_1_ == '\0') {
        fStack_124 = 0.0;
      }
      fVar1 = fStack_124;
      local_2f8 = 0;
      uStack_2f0 = 0;
      local_2e8 = 0;
      uStack_2e0 = 0;
      local_2d8 = 0;
      uStack_2d0 = 0;
      local_2c8 = 0;
      uStack_2c0 = 0;
      lVar5 = (longlong)DAT_181107a00 * 0x40;
      local_248 = *(undefined4 *)(DAT_180ca0a50 + 0x30);
      uStack_244 = *(undefined4 *)(DAT_180ca0a50 + 0x34);
      local_2b8 = *(undefined8 *)(DAT_180ca0a50 + 0x30);
      local_288 = *(undefined8 *)(&DAT_181107930 + lVar5);
      uStack_280 = *(undefined8 *)(&DAT_181107938 + lVar5);
      local_278 = *(undefined8 *)(&DAT_181107940 + lVar5);
      uStack_270 = *(undefined8 *)(&DAT_181107948 + lVar5);
      local_268 = *(undefined4 *)(&DAT_181107950 + lVar5);
      uStack_264 = *(undefined4 *)(lVar5 + 0x181107954);
      uStack_260 = *(undefined4 *)(&DAT_181107958 + lVar5);
      uStack_25c = *(undefined4 *)(lVar5 + 0x18110795c);
      local_258 = *(undefined8 *)(&DAT_181107960 + lVar5);
      uStack_250 = *(undefined8 *)(&DAT_181107968 + lVar5);
      uStack_2b0 = CONCAT44(DAT_1811079b4,DAT_1811079b0);
      uStack_240 = DAT_1811079b0;
      uStack_23c = DAT_1811079b4;
      if (local_1b0 != local_1a8) {
        local_2e8 = local_16c;
        uStack_2e0 = uStack_164;
        uStack_2d0 = CONCAT44(uStack_150,uStack_154);
        local_2d8 = local_15c;
        local_2c8 = CONCAT44(uStack_148,uStack_14c);
        uStack_2b0 = CONCAT44(local_130,uStack_134);
        local_2a8 = CONCAT44(uStack_128,uStack_12c);
        fStack_2a0 = fStack_124;
        uStack_29c = uStack_120;
        uStack_298 = (undefined4)(CONCAT26(uStack_11a,CONCAT24(uStack_11c,uStack_120)) >> 0x20);
        local_2b8 = CONCAT44(uStack_138,*(undefined4 *)(param_3 + 4));
        _local_294 = CONCAT44(uStack_114,
                              (int)(longlong)(*(float *)ppuVar3 * DAT_1808acb08 + DAT_1808ac1f4));
        local_2f8 = *param_3;
        uStack_2f0 = param_3[1];
        uStack_2c0 = *(undefined8 *)((longlong)param_3 + 0x14);
        if (0.0 < fStack_124) {
          local_318 = (local_1a8 - local_1b0 >> 2) * -0x71c71c71c71c71c7;
          FUN_180231f40(param_1,&local_288,&local_2f8);
        }
      }
      FUN_180252d70(param_1,&local_238,fVar1,1);
      goto LAB_18025b123;
    }
  }
  FUN_1804e4e90(&DAT_1809f30e0);
LAB_18025b123:
  FUN_18025deb0(&local_1b0);
  FUN_180042970(&local_1d8);
  FUN_1800132b0(&local_208);
  FUN_180068f30(&uStack_220);
  FUN_180011610(&local_238);
  return;
}



/* ===== 18025b1c0 FUN_18025b1c0 ===== */

void FUN_18025b1c0(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *local_res8;
  
  FUN_1802477c0();
  iVar1 = FUN_1804e4d70(&DAT_1809f2ea0);
  if (iVar1 != 0) {
LAB_18025b482:
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f2eec == 0x7fffffff) {
    DAT_1809f2eec = 0x7ffffffe;
  }
  else {
    if (DAT_180cf9dc0 != DAT_180cf9dc8) {
      FUN_18025c450();
      DAT_180cf9dc8 = DAT_180cf9dc0;
    }
    if (DAT_180cf9e70 != DAT_180cf9e78) {
      DAT_180cf9e78 = DAT_180cf9e70;
    }
    FUN_18025ba80(&DAT_180ca11c0);
    DAT_180962435 = 1;
    FUN_18025ba80(&DAT_180ca1180);
    FUN_1804e4e90(&DAT_1809f2ea0);
    FUN_18025bcc0(&DAT_180cf9d20);
    iVar1 = FUN_1804e4d70(&DAT_1809f30e0);
    if (iVar1 != 0) goto LAB_18025b482;
    if (DAT_1809f312c == 0x7fffffff) {
      DAT_1809f312c = 0x7ffffffe;
    }
    else {
      if (DAT_180cf9d90 != DAT_180cf9d98) {
        FUN_18025c780();
        DAT_180cf9d98 = DAT_180cf9d90;
      }
      FUN_1804e4e90(&DAT_1809f30e0);
      if (DAT_180cd0d90 != 0) {
        if (DAT_180cd0d90 < DAT_180cd0db8 >> 3) {
          FUN_1800d2f40(&DAT_180cd0d80,*DAT_180cd0d88,DAT_180cd0d88);
        }
        else {
          FUN_1800d35d0();
          *DAT_180cd0d88 = DAT_180cd0d88;
          DAT_180cd0d88[1] = DAT_180cd0d88;
          DAT_180cd0d90 = 0;
          local_res8 = DAT_180cd0d88;
          FUN_180026ac0(DAT_180cd0d98,DAT_180cd0da0,&local_res8);
        }
      }
      iVar1 = FUN_1804e4d70(&DAT_1809ebb20);
      lVar4 = DAT_180cd0dd0;
      if (iVar1 != 0) goto LAB_18025b482;
      if (DAT_1809ebb6c != 0x7fffffff) {
        lVar3 = DAT_180cd0dc8;
        if (DAT_180cd0dc8 != DAT_180cd0dd0) {
          do {
            FUN_1804eced0(lVar3 + 0x28,0x38,2,thunk_FUN_18000f890);
            lVar3 = lVar3 + 0x98;
          } while (lVar3 != lVar4);
          DAT_180cd0dd0 = DAT_180cd0dc8;
        }
        FUN_1804e4e90(&DAT_1809ebb20);
        FUN_180230650();
        DAT_180ccf78a = 0;
        if (DAT_180cf8f20 != DAT_180cf8f28) {
          DAT_180cf8f28 = DAT_180cf8f20;
        }
        if (DAT_180cf8f28 != DAT_180cf8f30) {
          if (DAT_180cf8f20 == DAT_180cf8f28) {
            FUN_180081c30(&DAT_180cf8f20);
            FUN_180263c50();
            return;
          }
          lVar4 = DAT_180cf8f28 - DAT_180cf8f20;
          uVar2 = FUN_18000fb70(lVar4);
          FUN_180540530(uVar2,DAT_180cf8f20,DAT_180cf8f28 - DAT_180cf8f20);
          FUN_180082ac0(&DAT_180cf8f20,uVar2,lVar4,lVar4);
        }
        FUN_180263c50();
        return;
      }
      DAT_1809ebb6c = 0x7ffffffe;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804e4a90(6);
}



/* ===== 18025b490 FUN_18025b490 ===== */

void FUN_18025b490(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x25) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x31) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x37) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x43) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x49) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x55) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5b) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x61) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x67) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x6d) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x73) = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  param_1[3] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2d] = 0xffffffff;
  param_1[0x30] = 0xffffffff;
  param_1[0x33] = 0xffffffff;
  param_1[0x36] = 0xffffffff;
  param_1[0x39] = 0xffffffff;
  param_1[0x3c] = 0xffffffff;
  param_1[0x3f] = 0xffffffff;
  param_1[0x42] = 0xffffffff;
  param_1[0x45] = 0xffffffff;
  param_1[0x48] = 0xffffffff;
  param_1[0x4b] = 0xffffffff;
  param_1[0x4e] = 0xffffffff;
  param_1[0x51] = 0xffffffff;
  param_1[0x54] = 0xffffffff;
  param_1[0x57] = 0xffffffff;
  param_1[0x5a] = 0xffffffff;
  param_1[0x5d] = 0xffffffff;
  param_1[0x60] = 0xffffffff;
  param_1[99] = 0xffffffff;
  param_1[0x66] = 0xffffffff;
  param_1[0x69] = 0xffffffff;
  param_1[0x6c] = 0xffffffff;
  param_1[0x6f] = 0xffffffff;
  param_1[0x72] = 0xffffffff;
  param_1[0x75] = 0xffffffff;
  param_1[0x78] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x79) = 0;
  param_1[0x7b] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  param_1[0x7e] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x7f) = 0;
  param_1[0x81] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x82) = 0;
  param_1[0x84] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x85) = 0;
  param_1[0x87] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x88) = 0;
  param_1[0x8a] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x8b) = 0;
  param_1[0x8d] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  param_1[0x90] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x91) = 0;
  param_1[0x93] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x94) = 0;
  param_1[0x96] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x97) = 0;
  param_1[0x99] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x9a) = 0;
  param_1[0x9c] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x9d) = 0;
  param_1[0x9f] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  param_1[0xa2] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xa3) = 0;
  param_1[0xa5] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xa6) = 0;
  param_1[0xa8] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xa9) = 0;
  param_1[0xab] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xac) = 0;
  param_1[0xae] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xaf) = 0;
  param_1[0xb1] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xb2) = 0;
  param_1[0xb4] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xb5) = 0;
  param_1[0xb7] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  param_1[0xba] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xbb) = 0;
  param_1[0xbd] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xbe) = 0;
  return;
}



/* ===== 18025b890 FUN_18025b890 ===== */

undefined4 * FUN_18025b890(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0x1e) = *(undefined1 *)((longlong)param_2 + 0x1e);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  uVar1 = param_2[0x13];
  uVar2 = param_2[0x14];
  uVar3 = param_2[0x15];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar3;
  uVar1 = param_2[0x17];
  uVar2 = param_2[0x18];
  uVar3 = param_2[0x19];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  param_1[0x18] = uVar2;
  param_1[0x19] = uVar3;
  FUN_180247990(param_1 + 0x1a,param_2 + 0x1a);
  FUN_18024d2d0(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



/* ===== 18025b950 FUN_18025b950 ===== */

void FUN_18025b950(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1803d64e0(puVar1,0x18);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x18);
  return;
}



/* ===== 18025b9b0 FUN_18025b9b0 ===== */

bool FUN_18025b9b0(longlong param_1,byte *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_2[1])
                * 0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^ (ulonglong)param_2[3]) *
              0x100000001b3 ^ (ulonglong)param_2[4]) * 0x100000001b3 ^ (ulonglong)param_2[5]) *
            0x100000001b3 ^ (ulonglong)param_2[6]) * 0x100000001b3 ^ (ulonglong)param_2[7]) *
          0x100000001b3;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar2 * 0x10);
  if (lVar1 != *(longlong *)(param_1 + 8)) {
    if (*(longlong *)param_2 == *(longlong *)(lVar1 + 0x10)) goto LAB_18025ba6d;
    while (lVar1 != *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar2 * 0x10)) {
      lVar1 = *(longlong *)(lVar1 + 8);
      if (*(longlong *)param_2 == *(longlong *)(lVar1 + 0x10)) {
        return lVar1 != 0;
      }
    }
  }
  lVar1 = 0;
LAB_18025ba6d:
  return lVar1 != 0;
}



/* ===== 18025ba80 FUN_18025ba80 ===== */

void FUN_18025ba80(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_18025d8f0(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      thunk_FUN_1803d64e0(puVar1,0x18);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_180026a10(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8);
  }
  return;
}



/* ===== 18025bb30 FUN_18025bb30 ===== */

undefined4 * FUN_18025bb30(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 local_res10;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar4 = FUN_1804ecaa0(0x18);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(param_1 + 2) = lVar4;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  uVar2 = *(undefined8 *)(param_1 + 2);
  local_res10 = uVar2;
  if (0x7f < *(ulonglong *)(param_1 + 8)) {
    FUN_180026a10(0,*(ulonglong *)(param_1 + 8),&local_res10);
    return param_1;
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x80);
  puVar7 = auStack_28;
  puVar8 = auStack_28;
  lVar4 = *(longlong *)(param_1 + 6);
  if (*(longlong *)(param_1 + 10) - lVar4 == 0) goto LAB_18025bbf5;
  if ((ulonglong)((*(longlong *)(param_1 + 10) - lVar4 >> 3) * 8) < 0x1000) {
LAB_18025bbed:
    lVar6 = lVar4;
    puVar8 = puVar7;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar6) - 8U) {
      pcVar3 = (code *)swi(0x29);
      lVar4 = (*pcVar3)(5);
      puVar7 = auStack_20;
      goto LAB_18025bbed;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x18025bbf5;
  thunk_FUN_1803d64e0(lVar6);
LAB_18025bbf5:
  *(undefined8 **)(param_1 + 6) = puVar5;
  puVar1 = puVar5 + 0x10;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *(undefined8 **)(param_1 + 10) = puVar1;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    *puVar5 = uVar2;
  }
  return param_1;
}



/* ===== 18025bc50 FUN_18025bc50 ===== */

void FUN_18025bc50(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1802486e0(puVar1 + 3);
    thunk_FUN_1803d64e0(puVar1,0x1f0);
    puVar1 = puVar2;
  }
  thunk_FUN_1803d64e0(*param_1,0x1f0);
  return;
}



/* ===== 18025bcc0 FUN_18025bcc0 ===== */

void FUN_18025bcc0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_18025dbf0(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_1802486e0(puVar1 + 3);
      thunk_FUN_1803d64e0(puVar1,0x1f0);
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



/* ===== 18025bd90 FUN_18025bd90 ===== */

undefined8 * FUN_18025bd90(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  plVar6 = (longlong *)param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar5;
  if (plVar6 == (longlong *)0x0) {
    return param_1;
  }
  LOCK();
  plVar1 = plVar6 + 1;
  lVar7 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar7 == 1) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  return param_1;
}



/* ===== 18025be20 FUN_18025be20 ===== */

longlong * FUN_18025be20(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = *param_1;
  if (lVar1 == 0) goto LAB_18025beaa;
  lVar3 = lVar1;
  if ((ulonglong)((param_1[2] - lVar1 >> 3) * 8) < 0x1000) {
LAB_18025be94:
    puVar5 = puVar4;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + -8);
    if (0x1f < (lVar1 - lVar3) - 8U) {
      lVar3 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar4 = auStack_20;
      goto LAB_18025be94;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x18025be9f;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_18025beaa:
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}



/* ===== 18025bee0 FUN_18025bee0 ===== */

void FUN_18025bee0(ulonglong *param_1)

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
  uVar3 = ((longlong)(param_1[2] - uVar4) >> 4) * 0x10;
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
  *(undefined8 *)(puVar5 + -8) = 0x18025bf47;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18025bf60 FUN_18025bf60 ===== */

void FUN_18025bf60(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x30) {
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 4) << 4)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18025bfeb;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18025bfeb:
  *(undefined8 *)(puVar5 + -8) = 0x18025bff3;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18025c010 FUN_18025c010 ===== */

void FUN_18025c010(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar8 = auStack_48;
  puVar9 = auStack_48;
  puVar6 = (undefined8 *)*param_1;
  uVar3 = (param_1[2] - (longlong)puVar6 >> 3) * 0x6db6db6db6db6db7;
  if (param_3 <= uVar3) {
    puVar11 = (undefined8 *)param_1[1];
    lVar2 = (longlong)puVar11 - (longlong)puVar6 >> 3;
    if (param_3 <= (ulonglong)(lVar2 * 0x6db6db6db6db6db7)) {
      puVar11 = puVar6 + param_3 * 7;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *puVar6 = *param_2;
        if (puVar6 != param_2) {
          plVar5 = param_2 + 1;
          if (0xf < (ulonglong)param_2[4]) {
            plVar5 = (longlong *)*plVar5;
          }
          FUN_180029840(puVar6 + 1,plVar5,param_2[3]);
        }
        *(undefined4 *)(puVar6 + 5) = *(undefined4 *)(param_2 + 5);
        *(undefined4 *)((longlong)puVar6 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
        *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_2 + 6);
        puVar9 = (undefined1 *)((longlong)param_2 + 0x31);
        param_2 = param_2 + 7;
        *(undefined1 *)((longlong)puVar6 + 0x31) = *puVar9;
        puVar6 = puVar6 + 7;
      }
      puVar6 = (undefined8 *)param_1[1];
      for (puVar7 = puVar11; puVar7 != puVar6; puVar7 = puVar7 + 7) {
        FUN_18000f890(puVar7 + 1);
      }
      param_1[1] = (longlong)puVar11;
      return;
    }
    if (puVar6 != puVar11) {
      do {
        *puVar6 = *param_2;
        if (puVar6 != param_2) {
          plVar5 = param_2 + 1;
          if (0xf < (ulonglong)param_2[4]) {
            plVar5 = (longlong *)*plVar5;
          }
          FUN_180029840(puVar6 + 1,plVar5,param_2[3]);
        }
        *(undefined4 *)(puVar6 + 5) = *(undefined4 *)(param_2 + 5);
        *(undefined4 *)((longlong)puVar6 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
        *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_2 + 6);
        puVar9 = (undefined1 *)((longlong)param_2 + 0x31);
        param_2 = param_2 + 7;
        *(undefined1 *)((longlong)puVar6 + 0x31) = *puVar9;
        puVar6 = puVar6 + 7;
        puVar11 = (undefined8 *)param_1[1];
      } while (puVar6 != puVar11);
    }
    lVar2 = FUN_18025df60(param_2,param_3 + lVar2 * -0x6db6db6db6db6db7,puVar11,param_1);
    param_1[1] = lVar2;
    return;
  }
  if (0x492492492492492 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  if (0x492492492492492 - (uVar3 >> 1) < uVar3) {
    uVar3 = 0x492492492492492;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar3 < param_3) {
      uVar3 = param_3;
    }
  }
  puVar10 = auStack_48;
  if (puVar6 == (undefined8 *)0x0) goto LAB_18025c107;
  puVar11 = (undefined8 *)param_1[1];
  for (; puVar6 != puVar11; puVar6 = puVar6 + 7) {
    FUN_18000f890(puVar6 + 1);
  }
  lVar2 = *param_1;
  lVar4 = lVar2;
  if ((ulonglong)((param_1[2] - lVar2 >> 3) * 8) < 0x1000) {
LAB_18025c0ef:
    puVar9 = puVar8;
  }
  else {
    lVar4 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar4) - 8U) {
      lVar4 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar8 = auStack_40;
      goto LAB_18025c0ef;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x18025c0fa;
  thunk_FUN_1803d64e0(lVar4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar10 = puVar9;
LAB_18025c107:
  if (0x492492492492492 < uVar3) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar10 + -8) = &UNK_18025c28c;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar10 + -8) = 0x18025c11c;
  lVar2 = FUN_18000fb70(uVar3 * 0x38);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = uVar3 * 0x38 + lVar2;
  *(undefined8 *)(puVar10 + -8) = 0x18025c13c;
  lVar2 = FUN_18025df60(param_2,param_3,lVar2,param_1);
  param_1[1] = lVar2;
  return;
}



/* ===== 18025c2a0 FUN_18025c2a0 ===== */

undefined8 * FUN_18025c2a0(undefined8 param_1,undefined8 *param_2)

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
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar6 = DAT_180cf9e78;
  if (DAT_180cf9e78 != DAT_180cf9e80) {
    uVar5 = param_2[1];
    *DAT_180cf9e78 = *param_2;
    puVar6[1] = uVar5;
    uVar5 = param_2[3];
    puVar6[2] = param_2[2];
    puVar6[3] = uVar5;
    puVar6 = DAT_180cf9e78;
    DAT_180cf9e78 = DAT_180cf9e78 + 4;
    return puVar6;
  }
  uVar12 = 0x7ffffffffffffff;
  uVar15 = (longlong)DAT_180cf9e78 - (longlong)DAT_180cf9e70;
  lVar13 = (longlong)uVar15 >> 5;
  if (lVar13 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar14 = lVar13 + 1;
  uVar8 = (longlong)DAT_180cf9e80 - (longlong)DAT_180cf9e70 >> 5;
  if (uVar8 <= 0x7ffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar12 = uVar14;
    if (uVar14 <= uVar8) {
      uVar12 = uVar8;
    }
    if (0x7ffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar12 * 0x20);
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar16 = (undefined8 *)((uVar15 & 0xffffffffffffffe0) + (longlong)puVar7);
  *(undefined4 *)puVar16 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)puVar16 + 4) = uVar2;
  *(undefined4 *)(puVar16 + 1) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0xc) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)puVar16 + 0x14) = uVar2;
  *(undefined4 *)(puVar16 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar4;
  if (puVar6 == DAT_180cf9e78) {
    lVar13 = (longlong)DAT_180cf9e78 - (longlong)DAT_180cf9e70;
    puVar9 = puVar7;
    puVar6 = DAT_180cf9e70;
  }
  else {
    FUN_180540530(puVar7,DAT_180cf9e70,(longlong)puVar6 - (longlong)DAT_180cf9e70);
    puVar9 = puVar16 + 4;
    lVar13 = (longlong)DAT_180cf9e78 - (longlong)puVar6;
  }
  puVar10 = auStack_38;
  puVar11 = auStack_38;
  FUN_180540530(puVar9,puVar6,lVar13);
  if (DAT_180cf9e70 == (undefined8 *)0x0) goto LAB_18025c403;
  puVar6 = DAT_180cf9e70;
  if (((longlong)DAT_180cf9e80 - (longlong)DAT_180cf9e70 & 0xffffffffffffffe0U) < 0x1000) {
LAB_18025c3fb:
    puVar11 = puVar10;
  }
  else {
    puVar6 = (undefined8 *)DAT_180cf9e70[-1];
    if (0x1f < (ulonglong)((longlong)DAT_180cf9e70 + (-8 - (longlong)puVar6))) {
      pcVar1 = (code *)swi(0x29);
      puVar6 = (undefined8 *)(*pcVar1)(5);
      puVar10 = auStack_30;
      goto LAB_18025c3fb;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x18025c403;
  thunk_FUN_1803d64e0(puVar6);
LAB_18025c403:
  DAT_180cf9e78 = puVar7 + uVar14 * 4;
  DAT_180cf9e70 = puVar7;
  DAT_180cf9e80 = puVar7 + uVar12 * 4;
  return puVar16;
}



/* ===== 18025c450 FUN_18025c450 ===== */

void FUN_18025c450(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    do {
      FUN_18025bee0(param_1 + 0x200);
      FUN_18025deb0(param_1 + 0xf0);
      FUN_180042970(param_1 + 200);
      FUN_1800132b0(param_1 + 0x98);
      FUN_180068f30(param_1 + 0x80);
      FUN_180011610(param_1 + 0x68);
      param_1 = param_1 + 0x220;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 18025c4d0 FUN_18025c4d0 ===== */

undefined8 * FUN_18025c4d0(float *param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  float *pfVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  float fVar12;
  
  uVar11 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]
                 ) * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3])
               * 0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
             0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
           0x100000001b3;
  puVar8 = (undefined8 *)(uVar11 & *(ulonglong *)(param_1 + 0xc));
  lVar6 = *(longlong *)(param_1 + 6);
  puVar5 = *(undefined8 **)(lVar6 + 8 + (longlong)puVar8 * 0x10);
  pfVar1 = param_1 + 2;
  puVar10 = *(undefined8 **)pfVar1;
  if (puVar5 != puVar10) {
    puVar8 = *(undefined8 **)(lVar6 + (longlong)puVar8 * 0x10);
    lVar2 = puVar5[2];
    puVar10 = puVar5;
    while( true ) {
      if (*(longlong *)param_3 == lVar2) {
        *param_2 = puVar10;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar10 == puVar8) break;
      puVar10 = (undefined8 *)puVar10[1];
      lVar2 = puVar10[2];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x18,puVar8,lVar6,param_4,pfVar1,0);
  puVar5[2] = *(undefined8 *)param_3;
  uVar3 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar3) {
    fVar12 = (float)FUN_18053ef70((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar6 = 0;
    if ((DAT_1808acd00 <= fVar12) && (fVar12 = fVar12 - DAT_1808acd00, fVar12 < DAT_1808acd00)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar6)) {
      uVar7 = (longlong)fVar12 + lVar6;
    }
    uVar9 = uVar3;
    if ((uVar3 < uVar7) && ((0x1ff < uVar3 || (uVar9 = uVar3 * 8, uVar3 * 8 < uVar7)))) {
      uVar9 = uVar7;
    }
    FUN_18025fd90(param_1,uVar9);
    puVar8 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar10 = *(undefined8 **)pfVar1;
    if (puVar8 != puVar10) {
      lVar6 = puVar8[2];
      puVar10 = puVar8;
      while (puVar5[2] != lVar6) {
        if (puVar10 ==
            *(undefined8 **)
             (*(longlong *)(param_1 + 6) + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
        goto LAB_18025c712;
        puVar10 = (undefined8 *)puVar10[1];
        lVar6 = puVar10[2];
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_18025c712:
  puVar8 = (undefined8 *)puVar10[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar10;
  puVar5[1] = puVar8;
  *puVar8 = puVar5;
  puVar10[1] = puVar5;
  lVar6 = *(longlong *)(param_1 + 6);
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  puVar4 = *(undefined8 **)(lVar6 + uVar11 * 0x10);
  if (puVar4 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar6 + uVar11 * 0x10) = puVar5;
  }
  else {
    if (puVar4 == puVar10) {
      *(undefined8 **)(lVar6 + uVar11 * 0x10) = puVar5;
      goto LAB_18025c762;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) != puVar8) goto LAB_18025c762;
  }
  *(undefined8 **)(lVar6 + 8 + uVar11 * 0x10) = puVar5;
LAB_18025c762:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18025c780 FUN_18025c780 ===== */

void FUN_18025c780(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    do {
      FUN_18025deb0(param_1 + 0x88);
      FUN_180042970(param_1 + 0x60);
      FUN_1800132b0(param_1 + 0x30);
      FUN_180068f30(param_1 + 0x18);
      FUN_180011610(param_1);
      param_1 = param_1 + 0x198;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 18025c7f0 FUN_18025c7f0 ===== */

void FUN_18025c7f0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar6 = auStack_58;
  lVar2 = *param_1;
  uVar3 = (param_1[2] - lVar2 >> 3) * -0x505050505050505;
  if (param_3 <= uVar3) {
    lVar4 = param_1[1];
    lVar7 = lVar4 - lVar2 >> 3;
    if (param_3 <= (ulonglong)(lVar7 * -0x505050505050505)) {
      lVar4 = param_3 * 0x198 + lVar2;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        FUN_180254290(lVar2,param_2);
        lVar2 = lVar2 + 0x198;
        param_2 = param_2 + 0x198;
      }
      FUN_18025c780(lVar4,param_1[1]);
      param_1[1] = lVar4;
      return;
    }
    if (lVar2 != lVar4) {
      do {
        FUN_180254290(lVar2,param_2);
        lVar4 = param_1[1];
        lVar2 = lVar2 + 0x198;
        param_2 = param_2 + 0x198;
      } while (lVar2 != lVar4);
    }
    lVar2 = FUN_18025e5a0(param_2,param_3 + lVar7 * 0x505050505050505,lVar4,param_1);
    param_1[1] = lVar2;
    return;
  }
  if (0xa0a0a0a0a0a0a0 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  if (0xa0a0a0a0a0a0a0 - (uVar3 >> 1) < uVar3) {
    uVar3 = 0xa0a0a0a0a0a0a0;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar3 < param_3) {
      uVar3 = param_3;
    }
  }
  if (lVar2 == 0) goto LAB_18025c8cd;
  FUN_18025c780(lVar2,param_1[1]);
  puVar5 = auStack_58;
  puVar6 = auStack_58;
  lVar2 = *param_1;
  lVar4 = lVar2;
  if ((ulonglong)((param_1[2] - lVar2 >> 3) * 8) < 0x1000) {
LAB_18025c8b5:
    puVar6 = puVar5;
  }
  else {
    lVar4 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar4) - 8U) {
      lVar4 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar5 = auStack_50;
      goto LAB_18025c8b5;
    }
  }
  *(undefined8 *)(puVar6 + -8) = 0x18025c8c0;
  thunk_FUN_1803d64e0(lVar4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_18025c8cd:
  if (0xa0a0a0a0a0a0a0 < uVar3) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar6 + -8) = &UNK_18025c9d4;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar6 + -8) = 0x18025c8e5;
  lVar2 = FUN_18000fb70(uVar3 * 0x198);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = uVar3 * 0x198 + lVar2;
  *(undefined8 *)(puVar6 + -8) = 0x18025c905;
  lVar2 = FUN_18025e5a0(param_2,param_3,lVar2,param_1);
  param_1[1] = lVar2;
  return;
}



/* ===== 18025c9e0 FUN_18025c9e0 ===== */

undefined8 * FUN_18025c9e0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  float fVar10;
  
  uVar8 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(DAT_180cf9d50 & uVar8);
  puVar3 = *(undefined8 **)(DAT_180cf9d38 + 8 + (longlong)puVar6 * 0x10);
  puVar9 = DAT_180cf9d28;
  if (puVar3 != DAT_180cf9d28) {
    puVar6 = *(undefined8 **)(DAT_180cf9d38 + (longlong)puVar6 * 0x10);
    lVar4 = puVar3[2];
    puVar9 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == puVar6) break;
      puVar9 = (undefined8 *)puVar9[1];
      lVar4 = puVar9[2];
    }
  }
  if (DAT_180cf9d30 == 0x84210842108421) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x1f0,puVar6,DAT_180cf9d38,param_4,&DAT_180cf9d28,0);
  puVar3[2] = *(undefined8 *)param_3;
  FUN_180540170(puVar3 + 3,0,0x1d8);
  FUN_180260270(puVar3 + 3);
  uVar2 = DAT_180cf9d58;
  if (DAT_180cf9d20 < (float)(DAT_180cf9d30 + 1) / (float)DAT_180cf9d58) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180cf9d30 + 1) / DAT_180cf9d20);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar7 = uVar2;
    if ((uVar2 < uVar5) && ((0x1ff < uVar2 || (uVar7 = uVar2 * 8, uVar2 * 8 < uVar5)))) {
      uVar7 = uVar5;
    }
    FUN_18025ff80(uVar5,uVar7);
    puVar6 = *(undefined8 **)(DAT_180cf9d38 + 8 + (DAT_180cf9d50 & uVar8) * 0x10);
    puVar9 = DAT_180cf9d28;
    if (puVar6 != DAT_180cf9d28) {
      lVar4 = puVar6[2];
      puVar9 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar9 == *(undefined8 **)(DAT_180cf9d38 + (DAT_180cf9d50 & uVar8) * 0x10))
        goto LAB_18025cc59;
        puVar9 = (undefined8 *)puVar9[1];
        lVar4 = puVar9[2];
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_18025cc59:
  puVar6 = (undefined8 *)puVar9[1];
  DAT_180cf9d30 = DAT_180cf9d30 + 1;
  *puVar3 = puVar9;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar9[1] = puVar3;
  lVar4 = DAT_180cf9d38;
  uVar8 = DAT_180cf9d50 & uVar8;
  puVar1 = *(undefined8 **)(DAT_180cf9d38 + uVar8 * 0x10);
  if (puVar1 == DAT_180cf9d28) {
    *(undefined8 **)(DAT_180cf9d38 + uVar8 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar9) {
      *(undefined8 **)(DAT_180cf9d38 + uVar8 * 0x10) = puVar3;
      goto LAB_18025ccb8;
    }
    if (*(undefined8 **)(DAT_180cf9d38 + 8 + uVar8 * 0x10) != puVar6) goto LAB_18025ccb8;
  }
  *(undefined8 **)(lVar4 + 8 + uVar8 * 0x10) = puVar3;
LAB_18025ccb8:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18025cce0 FUN_18025cce0 ===== */

void FUN_18025cce0(ulonglong *param_1,longlong param_2,ulonglong param_3)

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
  uVar2 = ((longlong)(param_1[2] - uVar9) >> 3) * -0x5555555555555555;
  if (param_3 <= uVar2) {
    lVar4 = (longlong)(param_1[1] - uVar9) >> 3;
    if ((ulonglong)(lVar4 * -0x5555555555555555) < param_3) {
      FUN_180540530(uVar9,param_2,lVar4 * 8);
      uVar9 = param_1[1];
      lVar5 = (param_3 + lVar4 * 0x5555555555555555) * 0x18;
      FUN_180540530(uVar9,lVar4 * 8 + param_2,lVar5);
    }
    else {
      lVar5 = param_3 * 0x18;
      FUN_180540530(uVar9,param_2,lVar5);
    }
    goto LAB_18025ce58;
  }
  if (0xaaaaaaaaaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  if (0xaaaaaaaaaaaaaaa - (uVar2 >> 1) < uVar2) {
    uVar2 = 0xaaaaaaaaaaaaaaa;
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
    if ((ulonglong)(((longlong)(param_1[2] - uVar9) >> 3) * 8) < 0x1000) {
LAB_18025cd95:
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
        goto LAB_18025cd95;
      }
    }
    *(undefined8 *)(puVar7 + -8) = 0x18025cd9d;
    thunk_FUN_1803d64e0(uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar8 = puVar7;
  }
  if (0xaaaaaaaaaaaaaaa < uVar2) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_18025ce72;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar8 + -8) = 0x18025cdc7;
  uVar9 = FUN_18000fb70(uVar2 * 0x18);
  *param_1 = uVar9;
  param_1[1] = uVar9;
  param_1[2] = uVar2 * 0x18 + uVar9;
  lVar5 = param_3 * 0x18;
  *(undefined8 *)(puVar8 + -8) = 0x18025cdf3;
  FUN_180540530(uVar9,param_2,lVar5);
LAB_18025ce58:
  param_1[1] = lVar5 + uVar9;
  return;
}



/* ===== 18025ce80 FUN_18025ce80 ===== */

void FUN_18025ce80(ulonglong *param_1,longlong param_2,ulonglong param_3)

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
  uVar2 = ((longlong)(param_1[2] - uVar9) >> 2) * -0x5555555555555555;
  if (param_3 <= uVar2) {
    lVar4 = (longlong)(param_1[1] - uVar9) >> 2;
    if ((ulonglong)(lVar4 * -0x5555555555555555) < param_3) {
      FUN_180540530(uVar9,param_2,lVar4 * 4);
      uVar9 = param_1[1];
      lVar5 = (param_3 + lVar4 * 0x5555555555555555) * 0xc;
      FUN_180540530(uVar9,lVar4 * 4 + param_2,lVar5);
    }
    else {
      lVar5 = param_3 * 0xc;
      FUN_180540530(uVar9,param_2,lVar5);
    }
    goto LAB_18025cff8;
  }
  if (0x1555555555555555 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  if (0x1555555555555555 - (uVar2 >> 1) < uVar2) {
    uVar2 = 0x1555555555555555;
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
LAB_18025cf35:
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
        goto LAB_18025cf35;
      }
    }
    *(undefined8 *)(puVar7 + -8) = 0x18025cf3d;
    thunk_FUN_1803d64e0(uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar8 = puVar7;
  }
  if (0x1555555555555555 < uVar2) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_18025d012;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar8 + -8) = 0x18025cf67;
  uVar9 = FUN_18000fb70(uVar2 * 0xc);
  *param_1 = uVar9;
  param_1[1] = uVar9;
  param_1[2] = uVar2 * 0xc + uVar9;
  lVar5 = param_3 * 0xc;
  *(undefined8 *)(puVar8 + -8) = 0x18025cf93;
  FUN_180540530(uVar9,param_2,lVar5);
LAB_18025cff8:
  param_1[1] = lVar5 + uVar9;
  return;
}



/* ===== 18025d020 FUN_18025d020 ===== */

void FUN_18025d020(ulonglong *param_1,longlong param_2,ulonglong param_3)

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
  uVar2 = ((longlong)(param_1[2] - uVar9) >> 2) * -0x71c71c71c71c71c7;
  if (param_3 <= uVar2) {
    lVar4 = (longlong)(param_1[1] - uVar9) >> 2;
    if ((ulonglong)(lVar4 * -0x71c71c71c71c71c7) < param_3) {
      FUN_180540530(uVar9,param_2,lVar4 * 4);
      uVar9 = param_1[1];
      lVar5 = (param_3 + lVar4 * 0x71c71c71c71c71c7) * 0x24;
      FUN_180540530(uVar9,lVar4 * 4 + param_2,lVar5);
    }
    else {
      lVar5 = param_3 * 0x24;
      FUN_180540530(uVar9,param_2,lVar5);
    }
    goto LAB_18025d198;
  }
  if (0x71c71c71c71c71c < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  if (0x71c71c71c71c71c - (uVar2 >> 1) < uVar2) {
    uVar2 = 0x71c71c71c71c71c;
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
LAB_18025d0d5:
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
        goto LAB_18025d0d5;
      }
    }
    *(undefined8 *)(puVar7 + -8) = 0x18025d0dd;
    thunk_FUN_1803d64e0(uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar8 = puVar7;
  }
  if (0x71c71c71c71c71c < uVar2) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_18025d1b2;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar8 + -8) = 0x18025d107;
  uVar9 = FUN_18000fb70(uVar2 * 0x24);
  *param_1 = uVar9;
  param_1[1] = uVar9;
  param_1[2] = uVar2 * 0x24 + uVar9;
  lVar5 = param_3 * 0x24;
  *(undefined8 *)(puVar8 + -8) = 0x18025d133;
  FUN_180540530(uVar9,param_2,lVar5);
LAB_18025d198:
  param_1[1] = lVar5 + uVar9;
  return;
}



/* ===== 18025d1c0 FUN_18025d1c0 ===== */

void FUN_18025d1c0(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar5 = auStack_58;
  puVar6 = auStack_58;
  uVar8 = *param_1;
  uVar2 = (longlong)(param_1[2] - uVar8) >> 3;
  if (param_3 <= uVar2) {
    uVar2 = (longlong)(param_1[1] - uVar8) >> 3;
    if (uVar2 < param_3) {
      FUN_180540530(uVar8,param_2,uVar2 * 8);
      uVar8 = param_1[1];
      lVar4 = (param_3 - uVar2) * 8;
      FUN_180540530(uVar8,uVar2 * 8 + param_2,lVar4);
    }
    else {
      lVar4 = param_3 * 8;
      FUN_180540530(uVar8,param_2,lVar4);
    }
    goto LAB_18025d30a;
  }
  if (0x1fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  if (0x1fffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar2 = 0x1fffffffffffffff;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    if (uVar2 < param_3) {
      uVar2 = param_3;
    }
  }
  puVar7 = auStack_58;
  if (uVar8 != 0) {
    uVar3 = uVar8;
    if ((ulonglong)(((longlong)(param_1[2] - uVar8) >> 3) * 8) < 0x1000) {
LAB_18025d25f:
      puVar6 = puVar5;
    }
    else {
      uVar3 = *(ulonglong *)(uVar8 - 8);
      uVar8 = (uVar8 - uVar3) - 8;
      if (0x1f < uVar8) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar5 = auStack_50;
        uVar3 = uVar8;
        goto LAB_18025d25f;
      }
    }
    *(undefined8 *)(puVar6 + -8) = 0x18025d267;
    thunk_FUN_1803d64e0(uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar7 = puVar6;
  }
  if (0x1fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + -8) = &UNK_18025d324;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar7 + -8) = 0x18025d28d;
  uVar8 = FUN_18000fb70(uVar2 * 8);
  *param_1 = uVar8;
  param_1[1] = uVar8;
  param_1[2] = uVar2 * 8 + uVar8;
  lVar4 = param_3 * 8;
  *(undefined8 *)(puVar7 + -8) = 0x18025d2b5;
  FUN_180540530(uVar8,param_2,lVar4);
LAB_18025d30a:
  param_1[1] = lVar4 + uVar8;
  return;
}



/* ===== 18025d330 FUN_18025d330 ===== */

void FUN_18025d330(undefined4 param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined8 unaff_RBP;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar4 = auStack_48;
  uVar3 = DAT_181108a38 - DAT_181108a28 >> 4;
  lVar2 = DAT_181108a28;
  if (param_3 <= uVar3) {
LAB_18025d436:
    *(undefined8 *)(puVar4 + 0x50) = unaff_RBP;
    uVar3 = DAT_181108a30 - lVar2 >> 4;
    if (uVar3 < param_3) {
      *(undefined8 *)(puVar4 + -8) = 0x18025d460;
      FUN_180540530(param_1,param_2,uVar3 * 0x10);
      lVar2 = DAT_181108a30;
      lVar5 = (param_3 - uVar3) * 0x10;
      *(undefined8 *)(puVar4 + -8) = 0x18025d47d;
      FUN_180540530(DAT_181108a30,uVar3 * 0x10 + param_2,lVar5);
      DAT_181108a30 = lVar5 + lVar2;
      return;
    }
    *(undefined8 *)(puVar4 + -8) = 0x18025d4a7;
    FUN_180540530(param_1,param_2,param_3 * 0x10);
    DAT_181108a30 = param_3 * 0x10 + lVar2;
    return;
  }
  if (0xfffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  if (0xfffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar6 = 0xfffffffffffffff;
  }
  else {
    uVar6 = (uVar3 >> 1) + uVar3;
    if (uVar6 < param_3) {
      uVar6 = param_3;
    }
  }
  if (DAT_181108a28 != 0) {
    uVar3 = uVar3 * 0x10;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(DAT_181108a28 + -8);
      if (0x1f < (DAT_181108a28 - lVar2) - 8U) {
        lVar2 = 5;
        pcVar1 = (code *)swi(0x29);
        param_1 = (*pcVar1)();
        puVar4 = auStack_40;
        goto LAB_18025d436;
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_1803d64e0(lVar2,uVar3);
    DAT_181108a38 = 0;
    DAT_181108a28 = 0;
    DAT_181108a30 = 0;
  }
  if (0xfffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
  lVar2 = FUN_18000fb70(uVar6 * 0x10);
  DAT_181108a38 = uVar6 * 0x10 + lVar2;
  DAT_181108a28 = lVar2;
  DAT_181108a30 = lVar2;
  FUN_180540530(lVar2,param_2,param_3 * 0x10);
  DAT_181108a30 = param_3 * 0x10 + lVar2;
  return;
}



/* ===== 18025d4d0 FUN_18025d4d0 ===== */

undefined4 * FUN_18025d4d0(longlong *param_1,undefined8 *param_2)

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
    puVar7 = (undefined4 *)param_1[1];
    param_1[1] = (longlong)(puVar7 + 4);
    return puVar7;
  }
  uVar16 = 0xfffffffffffffff;
  uVar17 = (longlong)puVar11 - *param_1;
  lVar14 = (longlong)uVar17 >> 4;
  if (lVar14 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar15 = lVar14 + 1;
  uVar8 = param_1[2] - *param_1 >> 4;
  if (uVar8 <= 0xfffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar16 = uVar15;
    if (uVar15 <= uVar8) {
      uVar16 = uVar8;
    }
    if (0xfffffffffffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined4 *)FUN_18000fb70(uVar16 * 0x10);
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  uVar4 = *(undefined4 *)(param_2 + 1);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar18 = (undefined4 *)((uVar17 & 0xfffffffffffffff0) + (longlong)puVar7);
  *puVar18 = *(undefined4 *)param_2;
  puVar18[1] = uVar3;
  puVar18[2] = uVar4;
  puVar18[3] = uVar5;
  puVar1 = (undefined8 *)*param_1;
  if (puVar11 == (undefined8 *)param_1[1]) {
    lVar14 = param_1[1] - (longlong)puVar1;
    puVar9 = puVar7;
    puVar11 = puVar1;
  }
  else {
    FUN_180540530(puVar7,puVar1,(longlong)puVar11 - (longlong)puVar1);
    puVar9 = puVar18 + 4;
    lVar14 = param_1[1] - (longlong)puVar11;
  }
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  FUN_180540530(puVar9,puVar11,lVar14);
  lVar14 = *param_1;
  if (lVar14 == 0) goto LAB_18025d606;
  if ((param_1[2] - lVar14 & 0xfffffffffffffff0U) < 0x1000) {
LAB_18025d5fe:
    lVar10 = lVar14;
    puVar13 = puVar12;
  }
  else {
    lVar10 = *(longlong *)(lVar14 + -8);
    if (0x1f < (lVar14 - lVar10) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar14 = (*pcVar2)(5);
      puVar12 = auStack_30;
      goto LAB_18025d5fe;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x18025d606;
  thunk_FUN_1803d64e0(lVar10);
LAB_18025d606:
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)(puVar7 + uVar15 * 4);
  param_1[2] = (longlong)(puVar7 + uVar16 * 4);
  return puVar18;
}



/* ===== 18025d650 FUN_18025d650 ===== */

void FUN_18025d650(undefined8 param_1,undefined8 *param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar6 = auStack_28;
  uVar5 = DAT_181108da0 - (longlong)DAT_181108d90 >> 4;
  puVar4 = DAT_181108d90;
  if (param_3 <= uVar5) {
LAB_18025d76f:
    uVar5 = (longlong)DAT_181108d98 - (longlong)puVar4 >> 4;
    if (param_3 <= uVar5) {
      lVar3 = param_3 * 2;
      puVar2 = puVar4;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *puVar2 = *param_2;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 1);
        puVar2 = puVar2 + 2;
        param_2 = param_2 + 2;
      }
      DAT_181108d98 = puVar4 + lVar3;
      return;
    }
    if (puVar4 != DAT_181108d98) {
      do {
        *puVar4 = *param_2;
        puVar2 = param_2 + 1;
        param_2 = param_2 + 2;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)puVar2;
        puVar4 = puVar4 + 2;
      } while (puVar4 != DAT_181108d98);
    }
    puVar4 = DAT_181108d98;
    lVar3 = param_3 - uVar5;
    *(undefined8 *)(puVar6 + -8) = 0x18025d7c5;
    FUN_180540530(DAT_181108d98,param_2,lVar3 * 0x10);
    DAT_181108d98 = puVar4 + lVar3 * 2;
    return;
  }
  if (0xfffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  if (0xfffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar7 = 0xfffffffffffffff;
  }
  else {
    uVar7 = (uVar5 >> 1) + uVar5;
    if (uVar7 < param_3) {
      uVar7 = param_3;
    }
  }
  if (DAT_181108d90 != (undefined8 *)0x0) {
    uVar5 = uVar5 * 0x10;
    if (0xfff < uVar5) {
      puVar4 = (undefined8 *)DAT_181108d90[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_181108d90 + (-8 - (longlong)puVar4))) {
        puVar4 = (undefined8 *)&DAT_00000005;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar6 = auStack_20;
        goto LAB_18025d76f;
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_1803d64e0(puVar4,uVar5);
    DAT_181108da0 = 0;
    DAT_181108d90 = (undefined8 *)0x0;
    DAT_181108d98 = (undefined8 *)0x0;
  }
  if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
  lVar3 = FUN_18000fb70(uVar7 * 0x10);
  DAT_181108da0 = uVar7 * 0x10 + lVar3;
  DAT_181108d90 = (undefined8 *)lVar3;
  DAT_181108d98 = (undefined8 *)lVar3;
  FUN_180540530(lVar3,param_2,param_3 * 0x10);
  DAT_181108d98 = (undefined8 *)(param_3 * 0x10 + lVar3);
  return;
}



/* ===== 18025d830 FUN_18025d830 ===== */

void FUN_18025d830(longlong param_1)

{
  FUN_1802414e0(param_1 + 0x1ea0);
  return;
}



/* ===== 18025d840 FUN_18025d840 ===== */

void FUN_18025d840(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x38) {
    FUN_18000f890(lVar3 + 8);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18025d8c8;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18025d8c8:
  *(undefined8 *)(puVar5 + -8) = 0x18025d8d0;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18025d8f0 FUN_18025d8f0 ===== */

longlong * FUN_18025d8f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = (undefined8 *)param_2[1];
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x17)) * 0x100000001b3) * 0x10;
  plVar8 = (longlong *)(lVar3 + 8 + lVar5);
  plVar7 = (longlong *)(lVar5 + lVar3);
  plVar4 = *(longlong **)(lVar5 + lVar3);
  plVar10 = (longlong *)*plVar8;
  plVar9 = param_2;
  do {
    plVar11 = (longlong *)*plVar9;
    thunk_FUN_1803d64e0(plVar9,0x18);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar10) {
      if (plVar4 == param_2) {
        *plVar7 = (longlong)puVar1;
        puVar6 = puVar1;
      }
      else {
        puVar6 = puVar2;
      }
      *plVar8 = (longlong)puVar6;
      while (plVar11 != param_3) {
        uVar12 = *(ulonglong *)(param_1 + 0x30) &
                 (((((((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar11 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar11 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar11 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar11 + 0x17)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar3 + 8 + uVar12 * 0x10);
        plVar7 = (longlong *)(lVar3 + uVar12 * 0x10);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_1803d64e0(plVar10,0x18);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) goto LAB_18025db09;
        }
        *plVar7 = (longlong)puVar1;
        *(undefined8 **)(lVar3 + 8 + uVar12 * 0x10) = puVar1;
      }
      goto LAB_18025db0c;
    }
    plVar9 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
LAB_18025db09:
    *plVar7 = (longlong)plVar11;
  }
LAB_18025db0c:
  *puVar2 = plVar11;
  plVar11[1] = (longlong)puVar2;
  return param_3;
}



/* ===== 18025db60 FUN_18025db60 ===== */

void FUN_18025db60(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (*param_1 == 0) {
    return;
  }
  FUN_18025c780(*param_1,param_1[1]);
  puVar5 = auStack_28;
  uVar4 = *param_1;
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
  *(undefined8 *)(puVar5 + -8) = 0x18025dbd2;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18025dbf0 FUN_18025dbf0 ===== */

longlong * FUN_18025dbf0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  if (param_2 == param_3) {
    return param_3;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = (undefined8 *)param_2[1];
  puVar3 = *(undefined8 **)(param_1 + 8);
  lVar6 = (*(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x17)) * 0x100000001b3) * 0x10;
  plVar8 = (longlong *)(lVar1 + 8 + lVar6);
  plVar4 = *(longlong **)(lVar6 + lVar1);
  plVar5 = (longlong *)*plVar8;
  plVar9 = param_2;
  do {
    plVar10 = (longlong *)*plVar9;
    FUN_1802486e0(plVar9 + 3);
    thunk_FUN_1803d64e0(plVar9,0x1f0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar5) {
      if (plVar4 == param_2) {
        *(longlong *)(lVar6 + lVar1) = (longlong)puVar3;
        puVar7 = puVar3;
      }
      else {
        puVar7 = puVar2;
      }
      *plVar8 = (longlong)puVar7;
      while (plVar10 != param_3) {
        uVar11 = *(ulonglong *)(param_1 + 0x30) &
                 (((((((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar10 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar10 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar10 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar10 + 0x17)) * 0x100000001b3;
        plVar5 = *(longlong **)(lVar1 + 8 + uVar11 * 0x10);
        plVar4 = (longlong *)(lVar1 + uVar11 * 0x10);
        plVar9 = plVar10;
        while( true ) {
          plVar10 = (longlong *)*plVar9;
          FUN_1802486e0(plVar9 + 3);
          thunk_FUN_1803d64e0(plVar9,0x1f0);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar9 == plVar5) break;
          plVar9 = plVar10;
          if (plVar10 == param_3) {
            *plVar4 = (longlong)plVar10;
            *puVar2 = plVar10;
            plVar10[1] = (longlong)puVar2;
            return param_3;
          }
        }
        *plVar4 = (longlong)puVar3;
        *(undefined8 **)(lVar1 + 8 + uVar11 * 0x10) = puVar3;
      }
      goto LAB_18025de72;
    }
    plVar9 = plVar10;
  } while (plVar10 != param_3);
  if (plVar4 == param_2) {
    *(longlong *)(lVar6 + lVar1) = (longlong)plVar10;
  }
LAB_18025de72:
  *puVar2 = plVar10;
  plVar10[1] = (longlong)puVar2;
  return param_3;
}



/* ===== 18025deb0 FUN_18025deb0 ===== */

void FUN_18025deb0(ulonglong *param_1)

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
  *(undefined8 *)(puVar5 + -8) = 0x18025df17;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18025df30 FUN_18025df30 ===== */

undefined8 * FUN_18025df30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Ref_count_obj2<grenade_fire::simulation>::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x1f10);
  }
  return param_1;
}



/* ===== 18025df60 FUN_18025df60 ===== */

undefined8 * FUN_18025df60(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_3 = *param_1;
    FUN_180024b50(param_3 + 1,param_1 + 1);
    *(undefined4 *)(param_3 + 5) = *(undefined4 *)(param_1 + 5);
    *(undefined4 *)((longlong)param_3 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x2c);
    *(undefined1 *)(param_3 + 6) = *(undefined1 *)(param_1 + 6);
    *(undefined1 *)((longlong)param_3 + 0x31) = *(undefined1 *)((longlong)param_1 + 0x31);
    param_3 = param_3 + 7;
    param_1 = param_1 + 7;
  }
  return param_3;
}



/* ===== 18025dff0 FUN_18025dff0 ===== */

undefined8 * FUN_18025dff0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar14 = *param_1;
  uVar13 = 0x492492492492492;
  lVar9 = (param_1[1] - lVar14 >> 3) * 0x6db6db6db6db6db7;
  if (lVar9 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar9 + 1;
  uVar11 = (param_1[2] - lVar14 >> 3) * 0x6db6db6db6db6db7;
  if (uVar11 <= 0x492492492492492 - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar13 = uVar1;
    if (uVar1 <= uVar11) {
      uVar13 = uVar11;
    }
    if (0x492492492492492 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar10 = (undefined8 *)FUN_18000fb70(uVar13 * 0x38);
  puVar15 = auStack_48;
  puVar16 = auStack_48;
  puVar17 = puVar10 + (((longlong)param_2 - lVar14) / 0x38) * 7;
  *puVar17 = *param_3;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  puVar17[4] = 0;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar5 = *(undefined4 *)(param_3 + 2);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
  *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)puVar17 + 0xc) = uVar4;
  *(undefined4 *)(puVar17 + 2) = uVar5;
  *(undefined4 *)((longlong)puVar17 + 0x14) = uVar6;
  uVar7 = param_3[4];
  puVar17[3] = param_3[3];
  puVar17[4] = uVar7;
  param_3[3] = 0;
  param_3[4] = 0xf;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(param_3 + 5);
  *(undefined4 *)((longlong)puVar17 + 0x2c) = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined1 *)(puVar17 + 6) = *(undefined1 *)(param_3 + 6);
  *(undefined1 *)((longlong)puVar17 + 0x31) = *(undefined1 *)((longlong)param_3 + 0x31);
  puVar2 = (undefined8 *)param_1[1];
  puVar12 = (undefined8 *)*param_1;
  puVar8 = puVar10;
  if (param_2 == puVar2) {
    for (; puVar12 != puVar2; puVar12 = puVar12 + 7) {
      *puVar8 = *puVar12;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      uVar4 = *(undefined4 *)((longlong)puVar12 + 0xc);
      uVar5 = *(undefined4 *)(puVar12 + 2);
      uVar6 = *(undefined4 *)((longlong)puVar12 + 0x14);
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar12 + 1);
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar4;
      *(undefined4 *)(puVar8 + 2) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0x14) = uVar6;
      uVar7 = puVar12[4];
      puVar8[3] = puVar12[3];
      puVar8[4] = uVar7;
      puVar12[3] = 0;
      puVar12[4] = 0xf;
      *(undefined1 *)(puVar12 + 1) = 0;
      *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar12 + 5);
      *(undefined4 *)((longlong)puVar8 + 0x2c) = *(undefined4 *)((longlong)puVar12 + 0x2c);
      *(undefined1 *)(puVar8 + 6) = *(undefined1 *)(puVar12 + 6);
      *(undefined1 *)((longlong)puVar8 + 0x31) = *(undefined1 *)((longlong)puVar12 + 0x31);
      puVar8 = puVar8 + 7;
    }
  }
  else {
    for (; puVar12 != param_2; puVar12 = puVar12 + 7) {
      *puVar8 = *puVar12;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      uVar4 = *(undefined4 *)((longlong)puVar12 + 0xc);
      uVar5 = *(undefined4 *)(puVar12 + 2);
      uVar6 = *(undefined4 *)((longlong)puVar12 + 0x14);
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar12 + 1);
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar4;
      *(undefined4 *)(puVar8 + 2) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0x14) = uVar6;
      uVar7 = puVar12[4];
      puVar8[3] = puVar12[3];
      puVar8[4] = uVar7;
      puVar12[3] = 0;
      puVar12[4] = 0xf;
      *(undefined1 *)(puVar12 + 1) = 0;
      *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar12 + 5);
      *(undefined4 *)((longlong)puVar8 + 0x2c) = *(undefined4 *)((longlong)puVar12 + 0x2c);
      *(undefined1 *)(puVar8 + 6) = *(undefined1 *)(puVar12 + 6);
      *(undefined1 *)((longlong)puVar8 + 0x31) = *(undefined1 *)((longlong)puVar12 + 0x31);
      puVar8 = puVar8 + 7;
    }
    puVar2 = (undefined8 *)param_1[1];
    puVar12 = puVar17;
    for (; param_2 != puVar2; param_2 = param_2 + 7) {
      puVar12[7] = *param_2;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar5 = *(undefined4 *)(param_2 + 2);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar12 + 8) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar12 + 0x44) = uVar4;
      *(undefined4 *)(puVar12 + 9) = uVar5;
      *(undefined4 *)((longlong)puVar12 + 0x4c) = uVar6;
      uVar7 = param_2[4];
      puVar12[10] = param_2[3];
      puVar12[0xb] = uVar7;
      param_2[3] = 0;
      param_2[4] = 0xf;
      *(undefined1 *)(param_2 + 1) = 0;
      *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)(param_2 + 5);
      *(undefined4 *)((longlong)puVar12 + 100) = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(undefined1 *)(puVar12 + 0xd) = *(undefined1 *)(param_2 + 6);
      *(undefined1 *)((longlong)puVar12 + 0x69) = *(undefined1 *)((longlong)param_2 + 0x31);
      puVar12 = puVar12 + 7;
    }
  }
  lVar14 = *param_1;
  if (lVar14 == 0) goto LAB_18025e2f4;
  lVar9 = param_1[1];
  for (; lVar14 != lVar9; lVar14 = lVar14 + 0x38) {
    FUN_18000f890(lVar14 + 8);
  }
  lVar14 = *param_1;
  lVar9 = lVar14;
  if ((ulonglong)((param_1[2] - lVar14 >> 3) * 8) < 0x1000) {
LAB_18025e2e9:
    puVar16 = puVar15;
  }
  else {
    lVar9 = *(longlong *)(lVar14 + -8);
    if (0x1f < (lVar14 - lVar9) - 8U) {
      lVar9 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar15 = auStack_40;
      goto LAB_18025e2e9;
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x18025e2f4;
  thunk_FUN_1803d64e0(lVar9);
LAB_18025e2f4:
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + uVar1 * 7);
  param_1[2] = (longlong)(puVar10 + uVar13 * 7);
  return puVar17;
}



/* ===== 18025e340 FUN_18025e340 ===== */

longlong FUN_18025e340(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar7 = DAT_180cf9dc0;
  uVar8 = 0x78787878787878;
  lVar4 = (DAT_180cf9dc8 - DAT_180cf9dc0 >> 5) * -0xf0f0f0f0f0f0f0f;
  if (lVar4 == 0x78787878787878) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar4 + 1;
  uVar6 = (DAT_180cf9dd0 - DAT_180cf9dc0 >> 5) * -0xf0f0f0f0f0f0f0f;
  if (uVar6 <= 0x78787878787878 - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar8 = uVar1;
    if (uVar1 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0x78787878787878 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar5 = FUN_18000fb70(uVar8 * 0x220);
  lVar11 = ((param_2 - lVar7) / 0x220) * 0x220 + lVar5;
  FUN_180260180(lVar11,param_3);
  lVar3 = DAT_180cf9dc8;
  puVar9 = auStack_48;
  puVar10 = auStack_48;
  lVar7 = lVar5;
  lVar4 = DAT_180cf9dc0;
  if (param_2 == DAT_180cf9dc8) {
    for (; lVar4 != lVar3; lVar4 = lVar4 + 0x220) {
      FUN_180260180(lVar7,lVar4);
      lVar7 = lVar7 + 0x220;
    }
  }
  else {
    for (; lVar4 != param_2; lVar4 = lVar4 + 0x220) {
      FUN_180260180(lVar7,lVar4);
      lVar7 = lVar7 + 0x220;
    }
    FUN_18025c450(lVar7,lVar7);
    lVar4 = DAT_180cf9dc8;
    lVar7 = lVar11;
    for (; lVar7 = lVar7 + 0x220, param_2 != lVar4; param_2 = param_2 + 0x220) {
      FUN_180260180(lVar7,param_2);
    }
  }
  FUN_18025c450(lVar7,lVar7);
  if (DAT_180cf9dc0 == 0) goto LAB_18025e543;
  FUN_18025c450(DAT_180cf9dc0,DAT_180cf9dc8);
  lVar7 = DAT_180cf9dc0;
  if ((ulonglong)((DAT_180cf9dd0 - DAT_180cf9dc0 >> 5) * 0x20) < 0x1000) {
LAB_18025e538:
    puVar10 = puVar9;
  }
  else {
    lVar7 = *(longlong *)(DAT_180cf9dc0 + -8);
    if (0x1f < (DAT_180cf9dc0 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_40;
      goto LAB_18025e538;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x18025e543;
  thunk_FUN_1803d64e0(lVar7);
LAB_18025e543:
  DAT_180cf9dc8 = uVar1 * 0x220 + lVar5;
  DAT_180cf9dc0 = lVar5;
  DAT_180cf9dd0 = uVar8 * 0x220 + lVar5;
  return lVar11;
}



/* ===== 18025e5a0 FUN_18025e5a0 ===== */

longlong FUN_18025e5a0(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_18024c730(param_3,param_1);
    param_3 = param_3 + 0x198;
    param_1 = param_1 + 0x198;
  }
  FUN_18025c780(param_3,param_3);
  return param_3;
}



/* ===== 18025e620 FUN_18025e620 ===== */

longlong FUN_18025e620(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar7 = *param_1;
  uVar6 = 0xa0a0a0a0a0a0a0;
  lVar3 = (param_1[1] - lVar7 >> 3) * -0x505050505050505;
  if (lVar3 == 0xa0a0a0a0a0a0a0) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (param_1[2] - lVar7 >> 3) * -0x505050505050505;
  if (uVar5 <= 0xa0a0a0a0a0a0a0 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar6 = uVar1;
    if (uVar1 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0xa0a0a0a0a0a0a0 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar6 * 0x198);
  lVar7 = SUB168(SEXT816(-0x5f5f5f5f5f5f5f5f) * SEXT816(param_2 - lVar7),8) + (param_2 - lVar7);
  lVar11 = ((lVar7 >> 8) - (lVar7 >> 0x3f)) * 0x198 + lVar4;
  FUN_180246d00(lVar11,param_3);
  puVar9 = auStack_48;
  puVar10 = auStack_48;
  lVar7 = param_1[1];
  lVar3 = *param_1;
  lVar8 = lVar4;
  if (param_2 == lVar7) {
    for (; lVar3 != lVar7; lVar3 = lVar3 + 0x198) {
      FUN_180246d00(lVar8,lVar3);
      lVar8 = lVar8 + 0x198;
    }
  }
  else {
    for (; lVar3 != param_2; lVar3 = lVar3 + 0x198) {
      FUN_180246d00(lVar8,lVar3);
      lVar8 = lVar8 + 0x198;
    }
    FUN_18025c780(lVar8,lVar8);
    lVar7 = param_1[1];
    lVar8 = lVar11;
    for (; lVar8 = lVar8 + 0x198, param_2 != lVar7; param_2 = param_2 + 0x198) {
      FUN_180246d00(lVar8,param_2);
    }
  }
  FUN_18025c780(lVar8,lVar8);
  if (*param_1 == 0) goto LAB_18025e80f;
  FUN_18025c780(*param_1,param_1[1]);
  lVar7 = *param_1;
  lVar3 = lVar7;
  if ((ulonglong)((param_1[2] - lVar7 >> 3) * 8) < 0x1000) {
LAB_18025e804:
    puVar10 = puVar9;
  }
  else {
    lVar3 = *(longlong *)(lVar7 + -8);
    if (0x1f < (lVar7 - lVar3) - 8U) {
      lVar3 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_40;
      goto LAB_18025e804;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x18025e80f;
  thunk_FUN_1803d64e0(lVar3);
LAB_18025e80f:
  *param_1 = lVar4;
  param_1[1] = uVar1 * 0x198 + lVar4;
  param_1[2] = uVar6 * 0x198 + lVar4;
  return lVar11;
}



/* ===== 18025e860 FUN_18025e860 ===== */

longlong FUN_18025e860(longlong *param_1,longlong param_2,undefined4 *param_3)

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
  uVar15 = 0x71c71c71c71c71c;
  lVar8 = (param_1[1] - lVar3 >> 2) * -0x71c71c71c71c71c7;
  if (lVar8 == 0x71c71c71c71c71c) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar8 + 1;
  uVar10 = (param_1[2] - lVar3 >> 2) * -0x71c71c71c71c71c7;
  if (uVar10 <= 0x71c71c71c71c71c - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar15 = uVar1;
    if (uVar1 <= uVar10) {
      uVar15 = uVar10;
    }
    if (0x71c71c71c71c71c < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar9 = FUN_18000fb70(uVar15 * 0x24);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  lVar3 = (param_2 - lVar3) / 0x24;
  puVar2 = (undefined4 *)(lVar9 + lVar3 * 0x24);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  lVar3 = lVar9 + lVar3 * 0x24;
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  *(undefined4 *)(lVar3 + 0x10) = param_3[4];
  *(undefined4 *)(lVar3 + 0x14) = uVar5;
  *(undefined4 *)(lVar3 + 0x18) = uVar6;
  *(undefined4 *)(lVar3 + 0x1c) = uVar7;
  *(undefined4 *)(lVar3 + 0x20) = param_3[8];
  lVar8 = *param_1;
  if (param_2 == param_1[1]) {
    lVar14 = param_1[1] - lVar8;
    lVar11 = lVar9;
    param_2 = lVar8;
  }
  else {
    FUN_180540530(lVar9,lVar8,param_2 - lVar8);
    lVar11 = lVar3 + 0x24;
    lVar14 = param_1[1] - param_2;
  }
  puVar12 = auStack_48;
  puVar13 = auStack_48;
  FUN_180540530(lVar11,param_2,lVar14);
  lVar8 = *param_1;
  if (lVar8 == 0) goto LAB_18025e9d2;
  lVar11 = lVar8;
  if ((ulonglong)((param_1[2] - lVar8 >> 2) * 4) < 0x1000) {
LAB_18025e9c7:
    puVar13 = puVar12;
  }
  else {
    lVar11 = *(longlong *)(lVar8 + -8);
    if (0x1f < (lVar8 - lVar11) - 8U) {
      lVar11 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar12 = auStack_40;
      goto LAB_18025e9c7;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x18025e9d2;
  thunk_FUN_1803d64e0(lVar11);
LAB_18025e9d2:
  *param_1 = lVar9;
  param_1[1] = lVar9 + uVar1 * 0x24;
  param_1[2] = uVar15 * 0x24 + lVar9;
  return lVar3;
}



/* ===== 18025ea20 FUN_18025ea20 ===== */

undefined8 * FUN_18025ea20(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar2 = DAT_180cf9c00;
  uVar14 = 0x38e38e38e38e38e;
  lVar10 = ((longlong)DAT_180cf9c08 - (longlong)DAT_180cf9c00 >> 3) * -0x71c71c71c71c71c7;
  if (lVar10 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar10 + 1;
  uVar12 = ((longlong)DAT_180cf9c10 - (longlong)DAT_180cf9c00 >> 3) * -0x71c71c71c71c71c7;
  if (uVar12 <= 0x38e38e38e38e38e - (uVar12 >> 1)) {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar14 = uVar1;
    if (uVar1 <= uVar12) {
      uVar14 = uVar12;
    }
    if (0x38e38e38e38e38e < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar11 = (undefined8 *)FUN_18000fb70(uVar14 * 0x48);
  puVar15 = auStack_48;
  puVar16 = auStack_48;
  lVar10 = ((longlong)param_2 - (longlong)puVar2) / 0x48;
  puVar11[lVar10 * 9] = *param_3;
  puVar2 = puVar11 + lVar10 * 9;
  puVar2[1] = param_3[1];
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_3 + 2);
  uVar3 = param_3[3];
  uVar4 = param_3[5];
  uVar5 = param_3[4];
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[3] = 0;
  puVar2[3] = uVar3;
  puVar2[4] = uVar5;
  puVar2[5] = uVar4;
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_3 + 6);
  puVar2[7] = param_3[7];
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_3 + 8);
  puVar8 = DAT_180cf9c08;
  puVar13 = puVar11;
  puVar7 = DAT_180cf9c00;
  if (param_2 == DAT_180cf9c08) {
    for (; puVar7 != puVar8; puVar7 = puVar7 + 9) {
      *puVar13 = *puVar7;
      puVar13[1] = puVar7[1];
      *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(puVar7 + 2);
      uVar3 = puVar7[3];
      uVar4 = puVar7[5];
      uVar5 = puVar7[4];
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[3] = 0;
      puVar13[3] = uVar3;
      puVar13[4] = uVar5;
      puVar13[5] = uVar4;
      *(undefined1 *)(puVar13 + 6) = *(undefined1 *)(puVar7 + 6);
      puVar13[7] = puVar7[7];
      *(undefined4 *)(puVar13 + 8) = *(undefined4 *)(puVar7 + 8);
      puVar13 = puVar13 + 9;
    }
  }
  else {
    while( true ) {
      puVar9 = puVar2;
      DAT_180cf9c08 = puVar8;
      if (puVar7 == param_2) break;
      *puVar13 = *puVar7;
      puVar13[1] = puVar7[1];
      *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(puVar7 + 2);
      uVar3 = puVar7[3];
      uVar4 = puVar7[5];
      uVar5 = puVar7[4];
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[3] = 0;
      puVar13[3] = uVar3;
      puVar13[4] = uVar5;
      puVar13[5] = uVar4;
      *(undefined1 *)(puVar13 + 6) = *(undefined1 *)(puVar7 + 6);
      puVar13[7] = puVar7[7];
      *(undefined4 *)(puVar13 + 8) = *(undefined4 *)(puVar7 + 8);
      puVar13 = puVar13 + 9;
      puVar7 = puVar7 + 9;
      puVar8 = DAT_180cf9c08;
    }
    for (; param_2 != puVar8; param_2 = param_2 + 9) {
      puVar9[9] = *param_2;
      puVar9[10] = param_2[1];
      *(undefined4 *)(puVar9 + 0xb) = *(undefined4 *)(param_2 + 2);
      uVar3 = param_2[3];
      uVar4 = param_2[5];
      uVar5 = param_2[4];
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[3] = 0;
      puVar9[0xc] = uVar3;
      puVar9[0xd] = uVar5;
      puVar9[0xe] = uVar4;
      *(undefined1 *)(puVar9 + 0xf) = *(undefined1 *)(param_2 + 6);
      puVar9[0x10] = param_2[7];
      *(undefined4 *)(puVar9 + 0x11) = *(undefined4 *)(param_2 + 8);
      puVar9 = puVar9 + 9;
    }
  }
  puVar7 = DAT_180cf9c08;
  puVar13 = DAT_180cf9c00;
  if (DAT_180cf9c00 == (undefined8 *)0x0) goto LAB_18025ed50;
  for (; puVar13 != puVar7; puVar13 = puVar13 + 9) {
    FUN_1802422f0(puVar13);
  }
  puVar13 = DAT_180cf9c00;
  if ((ulonglong)(((longlong)DAT_180cf9c10 - (longlong)DAT_180cf9c00 >> 3) * 8) < 0x1000) {
LAB_18025ed45:
    puVar16 = puVar15;
  }
  else {
    puVar13 = (undefined8 *)DAT_180cf9c00[-1];
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_180cf9c00 + (-8 - (longlong)puVar13))) {
      puVar13 = (undefined8 *)&DAT_00000005;
      pcVar6 = (code *)swi(0x29);
      (*pcVar6)(5);
      puVar15 = auStack_40;
      goto LAB_18025ed45;
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x18025ed50;
  thunk_FUN_1803d64e0(puVar13);
LAB_18025ed50:
  DAT_180cf9c00 = puVar11;
  DAT_180cf9c08 = puVar11 + uVar1 * 9;
  DAT_180cf9c10 = puVar11 + uVar14 * 9;
  return puVar2;
}



/* ===== 18025eda0 FUN_18025eda0 ===== */

undefined8 * FUN_18025eda0(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  uVar14 = 0x555555555555555;
  lVar8 = (param_1[1] - lVar2 >> 4) * -0x5555555555555555;
  if (lVar8 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar8 + 1;
  uVar10 = (param_1[2] - lVar2 >> 4) * -0x5555555555555555;
  if (uVar10 <= 0x555555555555555 - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar14 = uVar1;
    if (uVar1 <= uVar10) {
      uVar14 = uVar10;
    }
    if (0x555555555555555 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar14 * 0x30);
  uVar7 = param_3[1];
  puVar15 = puVar9 + ((param_2 - lVar2) / 0x30) * 6;
  *puVar15 = *param_3;
  puVar15[1] = uVar7;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar5 = *(undefined4 *)(param_3 + 3);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)puVar15 + 0x14) = uVar4;
  *(undefined4 *)(puVar15 + 3) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar6;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar5 = *(undefined4 *)(param_3 + 5);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar15 + 0x24) = uVar4;
  *(undefined4 *)(puVar15 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar6;
  lVar2 = *param_1;
  if (param_2 == param_1[1]) {
    lVar8 = param_1[1] - lVar2;
    puVar11 = puVar9;
    param_2 = lVar2;
  }
  else {
    FUN_180540530(puVar9,lVar2,param_2 - lVar2);
    puVar11 = puVar15 + 6;
    lVar8 = param_1[1] - param_2;
  }
  puVar12 = auStack_48;
  puVar13 = auStack_48;
  FUN_180540530(puVar11,param_2,lVar8);
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_18025ef13;
  lVar8 = lVar2;
  if ((ulonglong)((param_1[2] - lVar2 >> 4) << 4) < 0x1000) {
LAB_18025ef08:
    puVar13 = puVar12;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar8) - 8U) {
      lVar8 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar12 = auStack_40;
      goto LAB_18025ef08;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x18025ef13;
  thunk_FUN_1803d64e0(lVar8);
LAB_18025ef13:
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + uVar1 * 6);
  param_1[2] = (longlong)(puVar9 + uVar14 * 6);
  return puVar15;
}



/* ===== 18025ef60 FUN_18025ef60 ===== */

undefined8 * FUN_18025ef60(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar14 = *param_1;
  uVar13 = 0x555555555555555;
  lVar8 = (param_1[1] - lVar14 >> 4) * -0x5555555555555555;
  if (lVar8 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar8 + 1;
  uVar12 = (param_1[2] - lVar14 >> 4) * -0x5555555555555555;
  if (uVar12 <= 0x555555555555555 - (uVar12 >> 1)) {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar13 = uVar1;
    if (uVar1 <= uVar12) {
      uVar13 = uVar12;
    }
    if (0x555555555555555 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar13 * 0x30);
  puVar15 = auStack_48;
  puVar16 = auStack_48;
  puVar17 = puVar9 + (((longlong)param_2 - lVar14) / 0x30) * 6;
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  uVar7 = param_3[1];
  *puVar17 = *param_3;
  puVar17[1] = uVar7;
  uVar7 = param_3[3];
  puVar17[2] = param_3[2];
  puVar17[3] = uVar7;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar5 = *(undefined4 *)(param_3 + 5);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar17 + 0x24) = uVar4;
  *(undefined4 *)(puVar17 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar6;
  puVar2 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)*param_1;
  puVar11 = puVar9;
  if (param_2 == puVar2) {
    for (; puVar10 != puVar2; puVar10 = puVar10 + 6) {
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      uVar7 = puVar10[1];
      *puVar11 = *puVar10;
      puVar11[1] = uVar7;
      uVar7 = puVar10[3];
      puVar11[2] = puVar10[2];
      puVar11[3] = uVar7;
      puVar10[2] = 0;
      puVar10[3] = 0xf;
      *(undefined1 *)puVar10 = 0;
      uVar4 = *(undefined4 *)((longlong)puVar10 + 0x24);
      uVar5 = *(undefined4 *)(puVar10 + 5);
      uVar6 = *(undefined4 *)((longlong)puVar10 + 0x2c);
      *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(puVar10 + 4);
      *(undefined4 *)((longlong)puVar11 + 0x24) = uVar4;
      *(undefined4 *)(puVar11 + 5) = uVar5;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar6;
      puVar11 = puVar11 + 6;
    }
  }
  else {
    for (; puVar10 != param_2; puVar10 = puVar10 + 6) {
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      uVar7 = puVar10[1];
      *puVar11 = *puVar10;
      puVar11[1] = uVar7;
      uVar7 = puVar10[3];
      puVar11[2] = puVar10[2];
      puVar11[3] = uVar7;
      puVar10[2] = 0;
      puVar10[3] = 0xf;
      *(undefined1 *)puVar10 = 0;
      uVar4 = *(undefined4 *)((longlong)puVar10 + 0x24);
      uVar5 = *(undefined4 *)(puVar10 + 5);
      uVar6 = *(undefined4 *)((longlong)puVar10 + 0x2c);
      *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(puVar10 + 4);
      *(undefined4 *)((longlong)puVar11 + 0x24) = uVar4;
      *(undefined4 *)(puVar11 + 5) = uVar5;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar6;
      puVar11 = puVar11 + 6;
    }
    puVar2 = (undefined8 *)param_1[1];
    puVar10 = puVar17;
    for (; param_2 != puVar2; param_2 = param_2 + 6) {
      puVar11 = puVar10 + 6;
      *puVar11 = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      uVar7 = param_2[1];
      *puVar11 = *param_2;
      puVar10[7] = uVar7;
      uVar7 = param_2[3];
      puVar10[8] = param_2[2];
      puVar10[9] = uVar7;
      param_2[2] = 0;
      param_2[3] = 0xf;
      *(undefined1 *)param_2 = 0;
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
      uVar5 = *(undefined4 *)(param_2 + 5);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(undefined4 *)(puVar10 + 10) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)((longlong)puVar10 + 0x54) = uVar4;
      *(undefined4 *)(puVar10 + 0xb) = uVar5;
      *(undefined4 *)((longlong)puVar10 + 0x5c) = uVar6;
      puVar10 = puVar11;
    }
  }
  lVar14 = *param_1;
  if (lVar14 == 0) goto LAB_18025f1e9;
  lVar8 = param_1[1];
  for (; lVar14 != lVar8; lVar14 = lVar14 + 0x30) {
    FUN_18000f890(lVar14);
  }
  lVar14 = *param_1;
  lVar8 = lVar14;
  if ((ulonglong)((param_1[2] - lVar14 >> 4) << 4) < 0x1000) {
LAB_18025f1de:
    puVar16 = puVar15;
  }
  else {
    lVar8 = *(longlong *)(lVar14 + -8);
    if (0x1f < (lVar14 - lVar8) - 8U) {
      lVar8 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar15 = auStack_40;
      goto LAB_18025f1de;
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x18025f1e9;
  thunk_FUN_1803d64e0(lVar8);
LAB_18025f1e9:
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + uVar1 * 6);
  param_1[2] = (longlong)(puVar9 + uVar13 * 6);
  return puVar17;
}



/* ===== 18025f230 FUN_18025f230 ===== */

longlong FUN_18025f230(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar2 = *param_1;
  uVar10 = 0x1b2036406c80d9;
  lVar4 = (param_1[1] - lVar2 >> 4) * 0x6fe4dfc9bf937f27;
  if (lVar4 == 0x1b2036406c80d9) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar4 + 1;
  uVar5 = (param_1[2] - lVar2 >> 4) * 0x6fe4dfc9bf937f27;
  if (uVar5 <= 0x1b2036406c80d9 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar10 = uVar1;
    if (uVar1 <= uVar5) {
      uVar10 = uVar5;
    }
    if (0x1b2036406c80d9 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar10 * 0x970);
  lVar11 = ((param_2 - lVar2) / 0x970) * 0x970 + lVar4;
  FUN_180540530(lVar11,param_3,0x970);
  lVar2 = *param_1;
  if (param_2 == param_1[1]) {
    lVar9 = param_1[1] - lVar2;
    lVar6 = lVar4;
    param_2 = lVar2;
  }
  else {
    FUN_180540530(lVar4,lVar2,param_2 - lVar2);
    lVar6 = lVar11 + 0x970;
    lVar9 = param_1[1] - param_2;
  }
  puVar7 = auStack_48;
  puVar8 = auStack_48;
  FUN_180540530(lVar6,param_2,lVar9);
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_18025f395;
  lVar6 = lVar2;
  if ((ulonglong)((param_1[2] - lVar2 >> 4) * 0x10) < 0x1000) {
LAB_18025f38a:
    puVar8 = puVar7;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar6) - 8U) {
      lVar6 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar7 = auStack_40;
      goto LAB_18025f38a;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x18025f395;
  thunk_FUN_1803d64e0(lVar6);
LAB_18025f395:
  *param_1 = lVar4;
  param_1[1] = uVar1 * 0x970 + lVar4;
  param_1[2] = uVar10 * 0x970 + lVar4;
  return lVar11;
}



/* ===== 18025f3e0 FUN_18025f3e0 ===== */

void FUN_18025f3e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1802486e0(*(longlong *)(param_1 + 8) + 0x18);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x1f0);
  return;
}



/* ===== 18025f440 FUN_18025f440 ===== */

undefined4 * FUN_18025f440(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 4) = 0x40;
  FUN_180540170(param_1 + 0x14,0,0x1500);
  FUN_180240980(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x554) = 0;
  *(undefined8 *)(param_1 + 0x556) = 0;
  *(undefined8 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x55a) = 0;
  *(undefined8 *)(param_1 + 0x55c) = 0;
  *(undefined8 *)(param_1 + 0x55e) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined8 *)(param_1 + 0x562) = 0;
  *(undefined8 *)(param_1 + 0x564) = 0;
  *(undefined8 *)(param_1 + 0x566) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x56a) = 0;
  *(undefined8 *)(param_1 + 0x56c) = 0;
  *(undefined8 *)(param_1 + 0x56e) = 0;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x572) = 0;
  *(undefined8 *)(param_1 + 0x574) = 0;
  *(undefined8 *)(param_1 + 0x576) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x57a) = 0;
  *(undefined8 *)(param_1 + 0x57c) = 0;
  *(undefined8 *)(param_1 + 0x57e) = 0;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x582) = 0;
  *(undefined8 *)(param_1 + 0x584) = 0;
  *(undefined8 *)(param_1 + 0x586) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x58a) = 0;
  *(undefined8 *)(param_1 + 0x58c) = 0;
  *(undefined8 *)(param_1 + 0x58e) = 0;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x592) = 0;
  *(undefined8 *)(param_1 + 0x594) = 0;
  *(undefined8 *)(param_1 + 0x596) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x59a) = 0;
  *(undefined8 *)(param_1 + 0x59c) = 0;
  *(undefined8 *)(param_1 + 0x59e) = 0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined8 *)(param_1 + 0x5a2) = 0;
  *(undefined8 *)(param_1 + 0x5a4) = 0;
  *(undefined8 *)(param_1 + 0x5a6) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5aa) = 0;
  *(undefined8 *)(param_1 + 0x5ac) = 0;
  *(undefined8 *)(param_1 + 0x5ae) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  *(undefined8 *)(param_1 + 0x5b2) = 0;
  *(undefined8 *)(param_1 + 0x5b4) = 0;
  *(undefined8 *)(param_1 + 0x5b6) = 0;
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  *(undefined8 *)(param_1 + 0x5ba) = 0;
  *(undefined8 *)(param_1 + 0x5bc) = 0;
  *(undefined8 *)(param_1 + 0x5be) = 0;
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  *(undefined8 *)(param_1 + 0x5c2) = 0;
  *(undefined8 *)(param_1 + 0x5c4) = 0;
  *(undefined8 *)(param_1 + 0x5c6) = 0;
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  *(undefined8 *)(param_1 + 0x5ca) = 0;
  *(undefined8 *)(param_1 + 0x5cc) = 0;
  *(undefined8 *)(param_1 + 0x5ce) = 0;
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  *(undefined8 *)(param_1 + 0x5d2) = 0;
  *(undefined8 *)(param_1 + 0x5d4) = 0;
  *(undefined8 *)(param_1 + 0x5d6) = 0;
  *(undefined8 *)(param_1 + 0x5d8) = 0;
  *(undefined8 *)(param_1 + 0x5da) = 0;
  *(undefined8 *)(param_1 + 0x5dc) = 0;
  *(undefined8 *)(param_1 + 0x5de) = 0;
  *(undefined8 *)(param_1 + 0x5e0) = 0;
  *(undefined8 *)(param_1 + 0x5e2) = 0;
  *(undefined8 *)(param_1 + 0x5e4) = 0;
  *(undefined8 *)(param_1 + 0x5e6) = 0;
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  *(undefined8 *)(param_1 + 0x5ea) = 0;
  *(undefined8 *)(param_1 + 0x5ec) = 0;
  *(undefined8 *)(param_1 + 0x5ee) = 0;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined8 *)(param_1 + 0x5f2) = 0;
  *(undefined8 *)(param_1 + 0x5f4) = 0;
  *(undefined8 *)(param_1 + 0x5f6) = 0;
  *(undefined8 *)(param_1 + 0x5f8) = 0;
  *(undefined8 *)(param_1 + 0x5fa) = 0;
  *(undefined8 *)(param_1 + 0x5fc) = 0;
  *(undefined8 *)(param_1 + 0x5fe) = 0;
  *(undefined8 *)(param_1 + 0x600) = 0;
  *(undefined8 *)(param_1 + 0x602) = 0;
  *(undefined8 *)(param_1 + 0x604) = 0;
  *(undefined8 *)(param_1 + 0x606) = 0;
  *(undefined8 *)(param_1 + 0x608) = 0;
  *(undefined8 *)(param_1 + 0x60a) = 0;
  *(undefined8 *)(param_1 + 0x60c) = 0;
  *(undefined8 *)(param_1 + 0x60e) = 0;
  *(undefined8 *)(param_1 + 0x610) = 0;
  *(undefined8 *)(param_1 + 0x612) = 0;
  *(undefined8 *)(param_1 + 0x614) = 0;
  *(undefined8 *)(param_1 + 0x616) = 0;
  *(undefined8 *)(param_1 + 0x618) = 0;
  *(undefined8 *)(param_1 + 0x61a) = 0;
  *(undefined8 *)(param_1 + 0x61c) = 0;
  *(undefined8 *)(param_1 + 0x61e) = 0;
  *(undefined8 *)(param_1 + 0x620) = 0;
  *(undefined8 *)(param_1 + 0x622) = 0;
  *(undefined8 *)(param_1 + 0x624) = 0;
  *(undefined8 *)(param_1 + 0x626) = 0;
  *(undefined8 *)(param_1 + 0x628) = 0;
  *(undefined8 *)(param_1 + 0x62a) = 0;
  *(undefined8 *)(param_1 + 0x62c) = 0;
  *(undefined8 *)(param_1 + 0x62e) = 0;
  *(undefined8 *)(param_1 + 0x630) = 0;
  *(undefined8 *)(param_1 + 0x632) = 0;
  *(undefined8 *)(param_1 + 0x634) = 0;
  *(undefined8 *)(param_1 + 0x636) = 0;
  *(undefined8 *)(param_1 + 0x638) = 0;
  *(undefined8 *)(param_1 + 0x63a) = 0;
  *(undefined8 *)(param_1 + 0x63c) = 0;
  *(undefined8 *)(param_1 + 0x63e) = 0;
  *(undefined8 *)(param_1 + 0x640) = 0;
  *(undefined8 *)(param_1 + 0x642) = 0;
  *(undefined8 *)(param_1 + 0x644) = 0;
  *(undefined8 *)(param_1 + 0x646) = 0;
  *(undefined8 *)(param_1 + 0x648) = 0;
  *(undefined8 *)(param_1 + 0x64a) = 0;
  *(undefined8 *)(param_1 + 0x64c) = 0;
  *(undefined8 *)(param_1 + 0x64e) = 0;
  *(undefined8 *)(param_1 + 0x650) = 0;
  *(undefined8 *)(param_1 + 0x652) = 0;
  *(undefined8 *)(param_1 + 0x654) = 0;
  *(undefined8 *)(param_1 + 0x656) = 0;
  *(undefined8 *)(param_1 + 0x658) = 0;
  *(undefined8 *)(param_1 + 0x65a) = 0;
  *(undefined8 *)(param_1 + 0x65c) = 0;
  *(undefined8 *)(param_1 + 0x65e) = 0;
  *(undefined8 *)(param_1 + 0x660) = 0;
  *(undefined8 *)(param_1 + 0x662) = 0;
  *(undefined8 *)(param_1 + 0x664) = 0;
  *(undefined8 *)(param_1 + 0x666) = 0;
  *(undefined8 *)(param_1 + 0x668) = 0;
  *(undefined8 *)(param_1 + 0x66a) = 0;
  *(undefined8 *)(param_1 + 0x66c) = 0;
  *(undefined8 *)(param_1 + 0x66e) = 0;
  *(undefined8 *)(param_1 + 0x670) = 0;
  *(undefined8 *)(param_1 + 0x672) = 0;
  *(undefined8 *)(param_1 + 0x674) = 0;
  *(undefined8 *)(param_1 + 0x676) = 0;
  *(undefined8 *)(param_1 + 0x678) = 0;
  *(undefined8 *)(param_1 + 0x67a) = 0;
  *(undefined8 *)(param_1 + 0x67c) = 0;
  *(undefined8 *)(param_1 + 0x67e) = 0;
  *(undefined8 *)(param_1 + 0x680) = 0;
  *(undefined8 *)(param_1 + 0x682) = 0;
  *(undefined8 *)(param_1 + 0x684) = 0;
  *(undefined8 *)(param_1 + 0x686) = 0;
  *(undefined8 *)(param_1 + 0x688) = 0;
  *(undefined8 *)(param_1 + 0x68a) = 0;
  *(undefined8 *)(param_1 + 0x68c) = 0;
  *(undefined8 *)(param_1 + 0x68e) = 0;
  *(undefined8 *)(param_1 + 0x690) = 0;
  *(undefined8 *)(param_1 + 0x692) = 0;
  *(undefined8 *)(param_1 + 0x694) = 0;
  *(undefined8 *)(param_1 + 0x696) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0;
  *(undefined8 *)(param_1 + 0x69a) = 0;
  *(undefined8 *)(param_1 + 0x69c) = 0;
  *(undefined8 *)(param_1 + 0x69e) = 0;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined8 *)(param_1 + 0x6a2) = 0;
  *(undefined8 *)(param_1 + 0x6a4) = 0;
  *(undefined8 *)(param_1 + 0x6a6) = 0;
  *(undefined8 *)(param_1 + 0x6a8) = 0;
  *(undefined8 *)(param_1 + 0x6aa) = 0;
  *(undefined8 *)(param_1 + 0x6ac) = 0;
  *(undefined8 *)(param_1 + 0x6ae) = 0;
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  *(undefined8 *)(param_1 + 0x6b2) = 0;
  *(undefined8 *)(param_1 + 0x6b4) = 0;
  *(undefined8 *)(param_1 + 0x6b6) = 0;
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  *(undefined8 *)(param_1 + 0x6ba) = 0;
  *(undefined8 *)(param_1 + 0x6bc) = 0;
  *(undefined8 *)(param_1 + 0x6be) = 0;
  *(undefined8 *)(param_1 + 0x6c0) = 0;
  *(undefined8 *)(param_1 + 0x6c2) = 0;
  *(undefined8 *)(param_1 + 0x6c4) = 0;
  *(undefined8 *)(param_1 + 0x6c6) = 0;
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  *(undefined8 *)(param_1 + 0x6ca) = 0;
  *(undefined8 *)(param_1 + 0x6cc) = 0;
  *(undefined8 *)(param_1 + 0x6ce) = 0;
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  *(undefined8 *)(param_1 + 0x6d2) = 0;
  *(undefined8 *)(param_1 + 0x6d4) = 0;
  *(undefined8 *)(param_1 + 0x6d6) = 0;
  *(undefined8 *)(param_1 + 0x6d8) = 0;
  *(undefined8 *)(param_1 + 0x6da) = 0;
  *(undefined8 *)(param_1 + 0x6dc) = 0;
  *(undefined8 *)(param_1 + 0x6de) = 0;
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  *(undefined8 *)(param_1 + 0x6e2) = 0;
  *(undefined8 *)(param_1 + 0x6e4) = 0;
  *(undefined8 *)(param_1 + 0x6e6) = 0;
  *(undefined8 *)(param_1 + 0x6e8) = 0;
  *(undefined8 *)(param_1 + 0x6ea) = 0;
  *(undefined8 *)(param_1 + 0x6ec) = 0;
  *(undefined8 *)(param_1 + 0x6ee) = 0;
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  *(undefined8 *)(param_1 + 0x6f2) = 0;
  *(undefined8 *)(param_1 + 0x6f4) = 0;
  *(undefined8 *)(param_1 + 0x6f6) = 0;
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  *(undefined8 *)(param_1 + 0x6fa) = 0;
  *(undefined8 *)(param_1 + 0x6fc) = 0;
  *(undefined8 *)(param_1 + 0x6fe) = 0;
  *(undefined8 *)(param_1 + 0x700) = 0;
  *(undefined8 *)(param_1 + 0x702) = 0;
  *(undefined8 *)(param_1 + 0x704) = 0;
  *(undefined8 *)(param_1 + 0x706) = 0;
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined8 *)(param_1 + 0x70a) = 0;
  *(undefined8 *)(param_1 + 0x70c) = 0;
  *(undefined8 *)(param_1 + 0x70e) = 0;
  *(undefined8 *)(param_1 + 0x710) = 0;
  *(undefined8 *)(param_1 + 0x712) = 0;
  *(undefined8 *)(param_1 + 0x714) = 0;
  *(undefined8 *)(param_1 + 0x716) = 0;
  *(undefined8 *)(param_1 + 0x718) = 0;
  *(undefined8 *)(param_1 + 0x71a) = 0;
  *(undefined8 *)(param_1 + 0x71c) = 0;
  *(undefined8 *)(param_1 + 0x71e) = 0;
  *(undefined8 *)(param_1 + 0x720) = 0;
  *(undefined8 *)(param_1 + 0x722) = 0;
  *(undefined8 *)(param_1 + 0x724) = 0;
  *(undefined8 *)(param_1 + 0x726) = 0;
  *(undefined8 *)(param_1 + 0x728) = 0;
  *(undefined8 *)(param_1 + 0x72a) = 0;
  *(undefined8 *)(param_1 + 0x72c) = 0;
  *(undefined8 *)(param_1 + 0x72e) = 0;
  *(undefined8 *)(param_1 + 0x730) = 0;
  *(undefined8 *)(param_1 + 0x732) = 0;
  *(undefined8 *)(param_1 + 0x734) = 0;
  *(undefined8 *)(param_1 + 0x736) = 0;
  *(undefined8 *)(param_1 + 0x738) = 0;
  *(undefined8 *)(param_1 + 0x73a) = 0;
  *(undefined8 *)(param_1 + 0x73c) = 0;
  *(undefined8 *)(param_1 + 0x73e) = 0;
  *(undefined8 *)(param_1 + 0x740) = 0;
  *(undefined8 *)(param_1 + 0x742) = 0;
  *(undefined8 *)(param_1 + 0x744) = 0;
  *(undefined8 *)(param_1 + 0x746) = 0;
  *(undefined8 *)(param_1 + 0x748) = 0;
  *(undefined8 *)(param_1 + 0x74a) = 0;
  *(undefined8 *)(param_1 + 0x74c) = 0;
  *(undefined8 *)(param_1 + 0x74e) = 0;
  *(undefined8 *)(param_1 + 0x750) = 0;
  *(undefined8 *)(param_1 + 0x752) = 0;
  *(undefined8 *)(param_1 + 0x754) = 0;
  *(undefined8 *)(param_1 + 0x756) = 0;
  *(undefined8 *)(param_1 + 0x758) = 0;
  *(undefined8 *)(param_1 + 0x75a) = 0;
  *(undefined8 *)(param_1 + 0x75c) = 0;
  *(undefined8 *)(param_1 + 0x75e) = 0;
  *(undefined8 *)(param_1 + 0x760) = 0;
  *(undefined8 *)(param_1 + 0x762) = 0;
  *(undefined8 *)(param_1 + 0x764) = 0;
  *(undefined8 *)(param_1 + 0x766) = 0;
  *(undefined8 *)(param_1 + 0x768) = 0;
  *(undefined8 *)(param_1 + 0x76a) = 0;
  *(undefined8 *)(param_1 + 0x76c) = 0;
  *(undefined8 *)(param_1 + 0x76e) = 0;
  *(undefined8 *)(param_1 + 0x770) = 0;
  *(undefined8 *)(param_1 + 0x772) = 0;
  *(undefined8 *)(param_1 + 0x774) = 0;
  *(undefined8 *)(param_1 + 0x776) = 0;
  *(undefined8 *)(param_1 + 0x778) = 0;
  *(undefined8 *)(param_1 + 0x77a) = 0;
  *(undefined8 *)(param_1 + 0x77c) = 0;
  *(undefined8 *)(param_1 + 0x77e) = 0;
  *(undefined8 *)(param_1 + 0x780) = 0;
  *(undefined8 *)(param_1 + 0x782) = 0;
  *(undefined8 *)(param_1 + 0x784) = 0;
  *(undefined8 *)(param_1 + 0x786) = 0;
  *(undefined8 *)(param_1 + 0x788) = 0;
  *(undefined8 *)(param_1 + 0x78a) = 0;
  *(undefined8 *)(param_1 + 0x78c) = 0;
  *(undefined8 *)(param_1 + 0x78e) = 0;
  *(undefined8 *)(param_1 + 0x790) = 0;
  *(undefined8 *)(param_1 + 0x792) = 0;
  *(undefined8 *)(param_1 + 0x794) = 0;
  *(undefined8 *)(param_1 + 0x796) = 0;
  *(undefined8 *)(param_1 + 0x798) = 0;
  *(undefined8 *)(param_1 + 0x79a) = 0;
  *(undefined8 *)(param_1 + 0x79c) = 0;
  *(undefined8 *)(param_1 + 0x79e) = 0;
  *(undefined8 *)(param_1 + 0x7a0) = 0;
  *(undefined8 *)(param_1 + 0x7a2) = 0;
  *(undefined8 *)(param_1 + 0x7a4) = 0;
  *(undefined8 *)(param_1 + 0x7a6) = 0;
  *(undefined8 *)(param_1 + 0x7a8) = 0;
  *(undefined2 *)(param_1 + 0x7aa) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1eaa) = 0;
  *(undefined8 *)(param_1 + 0x7ab) = 0;
  *(undefined8 *)(param_1 + 0x7ad) = 0;
  *(undefined8 *)(param_1 + 0x7af) = 0;
  *(undefined8 *)(param_1 + 0x7b1) = 0;
  *(undefined8 *)(param_1 + 0x7b3) = 0;
  *(undefined8 *)(param_1 + 0x7b5) = 0;
  *(undefined8 *)(param_1 + 0x7b7) = 0;
  *(undefined8 *)(param_1 + 0x7b9) = 0;
  *(undefined8 *)(param_1 + 0x7bb) = 0;
  *(undefined8 *)(param_1 + 0x7bd) = 0;
  param_1[0x7bf] = 0;
  return param_1;
}



/* ===== 18025fd30 FUN_18025fd30 ===== */

void FUN_18025fd30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    FUN_18000f890(lVar2 + 8);
  }
  return;
}



/* ===== 18025fd90 FUN_18025fd90 ===== */

void FUN_18025fd90(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  
  for (lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar10 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar8 = param_2 - 1 | 1;
  lVar10 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  bVar9 = (char)lVar10 + 1;
  lVar10 = 1L << (bVar9 & 0x3f);
  FUN_180029a30(param_1 + 0x18,2L << (bVar9 & 0x3f),plVar1);
  *(longlong *)(param_1 + 0x38) = lVar10;
  *(longlong *)(param_1 + 0x30) = lVar10 + -1;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x00018025fe06:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar1) {
          return;
        }
        lVar10 = *(longlong *)(param_1 + 0x18);
        plVar2 = (longlong *)*plVar7;
        uVar8 = *(ulonglong *)(param_1 + 0x30) &
                (((((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar7 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3;
        plVar3 = *(longlong **)(lVar10 + uVar8 * 0x10);
        if (plVar3 != plVar1) break;
        *(longlong **)(lVar10 + uVar8 * 0x10) = plVar7;
        *(longlong **)(lVar10 + 8 + uVar8 * 0x10) = plVar7;
        plVar7 = plVar2;
      }
      plVar4 = *(longlong **)(lVar10 + 8 + uVar8 * 0x10);
      if (plVar7[2] != plVar4[2]) break;
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != plVar7) {
        plVar3 = (longlong *)plVar7[1];
        *plVar3 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar7;
        plVar4[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar3;
        plVar7[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar10 + 8 + uVar8 * 0x10) = plVar7;
      plVar7 = plVar2;
    }
    do {
      if (plVar3 == plVar4) {
        plVar3 = (longlong *)plVar7[1];
        *plVar3 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar7;
        plVar4[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar3;
        plVar7[1] = (longlong)puVar6;
        *(longlong **)(lVar10 + uVar8 * 0x10) = plVar7;
        plVar7 = plVar2;
        goto joined_r0x00018025fe06;
      }
      plVar4 = (longlong *)plVar4[1];
    } while (plVar7[2] != plVar4[2]);
    lVar10 = *plVar4;
    plVar3 = (longlong *)plVar7[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar10;
    puVar5 = *(undefined8 **)(lVar10 + 8);
    *puVar5 = plVar7;
    *(longlong **)(lVar10 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar7[1] = (longlong)puVar5;
    plVar7 = plVar2;
  } while( true );
}



/* ===== 18025ff80 FUN_18025ff80 ===== */

void FUN_18025ff80(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180cf9d28;
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
  FUN_180029d30(&DAT_180cf9d38,2L << (bVar10 & 0x3f),DAT_180cf9d28);
  DAT_180cf9d50 = lVar11 - 1;
  DAT_180cf9d58 = lVar11;
  plVar7 = (longlong *)*DAT_180cf9d28;
  lVar11 = DAT_180cf9d38;
joined_r0x00018025fffc:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180cf9d38 = lVar11;
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
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_180cf9d50;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180cf9d38 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180cf9d38;
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
      lVar11 = DAT_180cf9d38;
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
        lVar11 = DAT_180cf9d38;
        goto joined_r0x00018025fffc;
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
    lVar11 = DAT_180cf9d38;
  } while( true );
}



/* ===== 180260180 FUN_180260180 ===== */

undefined4 * FUN_180260180(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0x1e) = *(undefined1 *)((longlong)param_2 + 0x1e);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar4 = param_2[0x13];
  uVar5 = param_2[0x14];
  uVar6 = param_2[0x15];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar4;
  param_1[0x14] = uVar5;
  param_1[0x15] = uVar6;
  uVar4 = param_2[0x17];
  uVar5 = param_2[0x18];
  uVar6 = param_2[0x19];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar4;
  param_1[0x18] = uVar5;
  param_1[0x19] = uVar6;
  FUN_180246d00(param_1 + 0x1a,param_2 + 0x1a);
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x84);
  uVar3 = *(undefined8 *)(param_2 + 0x82);
  *(undefined8 *)(param_2 + 0x84) = 0;
  *(undefined8 *)(param_2 + 0x82) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined8 *)(param_1 + 0x82) = uVar3;
  *(undefined8 *)(param_1 + 0x84) = uVar2;
  *(undefined1 *)(param_1 + 0x86) = *(undefined1 *)(param_2 + 0x86);
  return param_1;
}



/* ===== 180260270 FUN_180260270 ===== */

undefined4 * FUN_180260270(undefined4 *param_1)

{
  param_1[2] = 0xbf800000;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[4] = 0xbf800000;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 0x31) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[0x36] = 0;
  param_1[0x26] = 0x10000;
  *(undefined8 *)(param_1 + 0x27) = 0;
  param_1[0x29] = 0;
  *(undefined8 *)(param_1 + 0x37) = 0;
  *(undefined8 *)(param_1 + 0x39) = 0;
  *(undefined8 *)(param_1 + 0x3b) = 0;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)(param_1 + 0x3f) = 0;
  param_1[0x41] = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined2 *)(param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0x3f800000;
  param_1[0x4e] = 0;
  *(undefined2 *)(param_1 + 0x4f) = 0x100;
  param_1[0x50] = 0;
  param_1[0x52] = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  param_1[100] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x65) = 0;
  *(undefined8 *)(param_1 + 0x67) = 0;
  *(undefined8 *)(param_1 + 0x69) = 0;
  *(undefined8 *)(param_1 + 0x6b) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  param_1[0x72] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x74) = 0xffffffffffffffff;
  return param_1;
}



/* ===== 180260420 FUN_180260420 ===== */

void FUN_180260420(void)

{
  if ((DAT_180cf9ee0 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cf9ee0 = '\x01';
    DAT_180cf9ee4 = FUN_18038eaf0("CEntityInstance","m_pEntity");
    DAT_180cf9ee8 = FUN_18038eaf0("CEntityIdentity","m_designerName");
    DAT_180cf9eec = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
    DAT_180cf9ef0 = FUN_18038eaf0("C_BaseEntity","m_pGameSceneNode");
    DAT_180cf9ef4 = FUN_18038eaf0("CGameSceneNode","m_vecOrigin");
    DAT_180cf9ef8 = FUN_18038eaf0("CGameSceneNode","m_angRotation");
    DAT_180cf9efc = FUN_18038eaf0("CGameSceneNode","m_pParent");
    DAT_180cf9f00 = FUN_18038eaf0("CSkeletonInstance","m_modelState");
    DAT_180cf9f04 = FUN_18038eaf0("CModelState","m_ModelName");
    DAT_180cf9f08 = FUN_18038eaf0("CModelState","m_hModel");
  }
  return;
}



/* ===== 180260550 FUN_180260550 ===== */

void FUN_180260550(void)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  
  if (DAT_180ccf89f == '\0') {
LAB_180260579:
    if (DAT_180cf9f10 != 0) goto LAB_1802605c2;
  }
  else if (DAT_180cf9f10 != 0) {
    if (DAT_180cf9ec0 != 0) {
      return;
    }
    goto LAB_180260579;
  }
  pHVar1 = GetModuleHandleA("worldrenderer.dll");
  if ((pHVar1 == (HMODULE)0x0) ||
     (pFVar2 = GetProcAddress(pHVar1,"CreateInterface"), pFVar2 == (FARPROC)0x0)) {
    DAT_180cf9f10 = 0;
  }
  else {
    DAT_180cf9f10 = (*pFVar2)("WorldRendererMgr001",0);
  }
LAB_1802605c2:
  if (DAT_180cf9ec0 == 0) {
    pHVar1 = GetModuleHandleA("resourcesystem.dll");
    if ((pHVar1 == (HMODULE)0x0) ||
       (pFVar2 = GetProcAddress(pHVar1,"CreateInterface"), pFVar2 == (FARPROC)0x0)) {
      DAT_180cf9ec0 = 0;
    }
    else {
      DAT_180cf9ec0 = (*pFVar2)("ResourceSystem013",0);
    }
  }
  if (DAT_180ccf89f == '\0') {
    DAT_180ccf89f = '\x01';
    pHVar1 = GetModuleHandleA("tier0.dll");
    if (pHVar1 != (HMODULE)0x0) {
      DAT_180cf9ed0 = GetProcAddress(pHVar1,"V_StringToInt32");
      DAT_180cf9eb8 = GetProcAddress(pHVar1,"V_StringToUint32");
      DAT_180cf9f18 = GetProcAddress(pHVar1,"V_StringToFloat32");
      DAT_180cf9ed8 = GetProcAddress(pHVar1,"V_stricmp_fast");
    }
    FUN_1802b2560("[grenade breakables] imports: V_StringToInt32 %p V_StringToUint32 %p V_StringToFloat32 %p V_stricmp_fast %p | WorldRendererMgr001 %p ResourceSystem013 %p | kv_find %p kv3_find_member %p kv3_get_vector %p"
                  ,DAT_180cf9ed0,DAT_180cf9eb8,DAT_180cf9f18,DAT_180cf9ed8,DAT_180cf9f10,
                  DAT_180cf9ec0,DAT_180961b70,DAT_180961b88,DAT_180961b90);
  }
  return;
}



/* ===== 180260710 FUN_180260710 ===== */

uint FUN_180260710(longlong param_1,ulonglong param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  
  lVar3 = 0;
  uVar9 = (uint)param_2 ^ 0x31415926;
  uVar4 = param_2;
  while (3 < uVar4) {
    bVar5 = *(byte *)(param_1 + lVar3);
    bVar11 = *(byte *)(param_1 + 1 + lVar3);
    if (param_3 == '\0') {
      bVar7 = *(byte *)(param_1 + 3 + lVar3);
      uVar10 = (uint)CONCAT12(*(undefined1 *)(param_1 + 2 + lVar3),CONCAT11(bVar11,bVar5));
    }
    else {
      bVar1 = *(byte *)(param_1 + 3 + lVar3);
      bVar2 = *(byte *)(param_1 + 2 + lVar3);
      bVar7 = bVar1 + 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar7 = bVar1;
      }
      uVar10 = bVar5 + 0x20 & 0xff;
      if (0x19 < (byte)(bVar5 + 0xbf)) {
        uVar10 = (uint)bVar5;
      }
      uVar6 = bVar11 + 0x20 & 0xff;
      if (0x19 < (byte)(bVar11 + 0xbf)) {
        uVar6 = (uint)bVar11;
      }
      bVar5 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar5 = bVar2;
      }
      uVar10 = (uint)bVar5 << 0x10 | uVar6 << 8 | uVar10;
    }
    lVar3 = lVar3 + 4;
    uVar10 = ((uint)bVar7 << 0x18 | uVar10) * 0x5bd1e995;
    uVar9 = uVar9 * 0x5bd1e995 ^ (uVar10 >> 0x18 ^ uVar10) * 0x5bd1e995;
    uVar4 = param_2 - lVar3;
  }
  lVar8 = param_2 - lVar3;
  if (lVar8 != 1) {
    if (lVar8 != 2) {
      if (lVar8 != 3) goto LAB_1802608bc;
      bVar5 = *(byte *)(param_1 + 2 + lVar3);
      if (param_3 == '\0') {
        bVar11 = bVar5;
      }
      else {
        bVar11 = bVar5 + 0x20;
        if (0x19 < (byte)(bVar5 + 0xbf)) {
          bVar11 = bVar5;
        }
      }
      uVar9 = uVar9 ^ (uint)bVar11 << 0x10;
    }
    bVar5 = *(byte *)(param_1 + 1 + lVar3);
    if (param_3 == '\0') {
      bVar11 = bVar5;
    }
    else {
      bVar11 = bVar5 + 0x20;
      if (0x19 < (byte)(bVar5 + 0xbf)) {
        bVar11 = bVar5;
      }
    }
    uVar9 = uVar9 ^ (uint)bVar11 << 8;
  }
  bVar5 = *(byte *)(param_1 + lVar3);
  if (param_3 == '\0') {
    bVar11 = bVar5;
  }
  else {
    bVar11 = bVar5 + 0x20;
    if (0x19 < (byte)(bVar5 + 0xbf)) {
      bVar11 = bVar5;
    }
  }
  uVar9 = (bVar11 ^ uVar9) * 0x5bd1e995;
LAB_1802608bc:
  uVar9 = (uVar9 >> 0xd ^ uVar9) * 0x5bd1e995;
  return uVar9 >> 0xf ^ uVar9;
}



/* ===== 1802608e0 FUN_1802608e0 ===== */

longlong * FUN_1802608e0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  if (param_2 - 0x10000U < 0x7ffffffeffff) {
    uVar10 = 0;
    while (cVar6 = FUN_180011220(uVar10 + param_2), cVar6 != '\0') {
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      if (uVar2 < uVar3) {
        param_1[2] = uVar2 + 1;
        plVar8 = param_1;
        if (0xf < uVar3) {
          plVar8 = (longlong *)*param_1;
        }
        *(char *)((longlong)plVar8 + uVar2) = cVar6;
        *(undefined1 *)((longlong)plVar8 + uVar2 + 1) = 0;
      }
      else {
        if (uVar2 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_180011990();
        }
        uVar9 = uVar2 + 1 | 0xf;
        if (uVar9 < 0x8000000000000000) {
          if (0x7fffffffffffffff - (uVar3 >> 1) < uVar3) {
            uVar9 = 0x7fffffffffffffff;
          }
          else {
            uVar1 = (uVar3 >> 1) + uVar3;
            if (uVar9 < uVar1) {
              uVar9 = uVar1;
            }
          }
        }
        else {
          uVar9 = 0x7fffffffffffffff;
        }
        lVar7 = FUN_18000fb70(uVar9 + 1);
        param_1[2] = uVar2 + 1;
        param_1[3] = uVar9;
        if (uVar3 < 0x10) {
          FUN_180540530(lVar7,param_1,uVar2);
          *(char *)(lVar7 + uVar2) = cVar6;
          *(undefined1 *)(lVar7 + 1 + uVar2) = 0;
        }
        else {
          lVar4 = *param_1;
          FUN_180540530(lVar7,lVar4,uVar2);
          *(char *)(lVar7 + uVar2) = cVar6;
          *(undefined1 *)(lVar7 + 1 + uVar2) = 0;
          if (uVar3 + 1 < 0x1000) {
            thunk_FUN_1803d64e0(lVar4);
          }
          else {
            if (0x1f < (lVar4 - *(longlong *)(lVar4 + -8)) - 8U) {
              pcVar5 = (code *)swi(0x29);
              (*pcVar5)(5);
              return param_1;
            }
            thunk_FUN_1803d64e0(*(longlong *)(lVar4 + -8),uVar3 + 0x28);
          }
        }
        *param_1 = lVar7;
      }
      uVar10 = uVar10 + 1;
      if (0x1ff < uVar10) {
        return param_1;
      }
    }
  }
  return param_1;
}



/* ===== 180260aa0 FUN_180260aa0 ===== */

void FUN_180260aa0(code *param_1,undefined8 param_2)

{
  (*param_1)(param_2,0,0,0,0,0);
  return;
}



/* ===== 180260ad0 FUN_180260ad0 ===== */

void FUN_180260ad0(code *param_1,undefined8 param_2)

{
  (*param_1)(param_2,0,0,0,0,0);
  return;
}



/* ===== 180260b00 FUN_180260b00 ===== */

void FUN_180260b00(code *param_1,undefined8 param_2,undefined8 param_3)

{
  (*param_1)(param_2,param_3);
  return;
}



/* ===== 180260b20 FUN_180260b20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180260b20(ulonglong param_1)

{
  code *pcVar1;
  double dVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  undefined8 ****local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar4 = FUN_18000f3a0();
  puVar7 = auStack_58;
  uVar8 = (uint)(uVar4 >> 2) & 0xf;
  if (uVar8 == 2) {
    bVar3 = FUN_180011220(param_1 + 8);
    return (ulonglong)bVar3;
  }
  if (uVar8 == 3) {
LAB_180260c9c:
    uVar4 = FUN_180011200(param_1 + 8);
    return uVar4;
  }
  if (uVar8 == 4) {
    if (((uint)uVar4 & 0x3fc00) != 0x6c00) goto LAB_180260c9c;
  }
  else {
    if (uVar8 == 5) {
LAB_180260c6b:
      *(undefined8 *)(puVar7 + -8) = 0x180260c74;
      dVar2 = (double)FUN_180066860(param_1 + 8);
      *(undefined8 *)(puVar7 + -8) = 0x180260c85;
      return (ulonglong)(uint)(int)dVar2;
    }
    if ((uVar8 == 6) && (DAT_180cf9ed0 != 0)) {
      uVar4 = FUN_18000f3a0(param_1);
      bVar3 = (byte)(uVar4 >> 2);
      if ((bVar3 | 0x20) == 0x26) {
        uVar5 = FUN_18000f3a0(param_1 + 8);
        FUN_1802608e0(&local_30,uVar5);
      }
      else if (bVar3 == 0x16) {
        FUN_1802608e0(&local_30,param_1 + 8);
      }
      else {
        uStack_28 = 0;
        local_20 = 0;
        local_18 = 0xf;
        local_30 = (undefined8 ****)0x0;
      }
      ppppuVar6 = &local_30;
      if (0xf < local_18) {
        ppppuVar6 = local_30;
      }
      uVar8 = FUN_180260aa0(DAT_180cf9ed0,ppppuVar6);
      param_1 = (ulonglong)uVar8;
      if (0xf < local_18) {
        uVar4 = local_18 + 1;
        ppppuVar6 = local_30;
        if (0xfff < uVar4) {
          ppppuVar6 = (undefined8 ****)local_30[-1];
          if (0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)ppppuVar6))) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar7 = auStack_50;
            goto LAB_180260c6b;
          }
          uVar4 = local_18 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppuVar6,uVar4);
      }
      return param_1;
    }
  }
  return 0;
}



/* ===== 180260ce0 FUN_180260ce0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180260ce0(ulonglong param_1)

{
  code *pcVar1;
  double dVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  undefined8 ****local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_58;
  uVar4 = FUN_18000f3a0();
  puVar7 = auStack_58;
  uVar8 = (uint)(uVar4 >> 2) & 0xf;
  if (uVar8 == 2) {
    bVar3 = FUN_180011220(param_1 + 8);
    return (ulonglong)bVar3;
  }
  if (uVar8 == 3) {
LAB_180260e5d:
    uVar4 = FUN_180011200(param_1 + 8);
    return uVar4;
  }
  if (uVar8 == 4) {
    if (((uint)uVar4 & 0x3fc00) != 0x6c00) goto LAB_180260e5d;
  }
  else {
    if (uVar8 == 5) {
LAB_180260e2b:
      *(undefined8 *)(puVar7 + -8) = 0x180260e34;
      dVar2 = (double)FUN_180066860(param_1 + 8);
      *(undefined8 *)(puVar7 + -8) = 0x180260e46;
      return (longlong)dVar2;
    }
    if ((uVar8 == 6) && (DAT_180cf9eb8 != 0)) {
      uVar4 = FUN_18000f3a0(param_1);
      bVar3 = (byte)(uVar4 >> 2);
      if ((bVar3 | 0x20) == 0x26) {
        uVar5 = FUN_18000f3a0(param_1 + 8);
        FUN_1802608e0(&local_30,uVar5);
      }
      else if (bVar3 == 0x16) {
        FUN_1802608e0(&local_30,param_1 + 8);
      }
      else {
        uStack_28 = 0;
        local_20 = 0;
        local_18 = 0xf;
        local_30 = (undefined8 ****)0x0;
      }
      ppppuVar6 = &local_30;
      if (0xf < local_18) {
        ppppuVar6 = local_30;
      }
      uVar8 = FUN_180260aa0(DAT_180cf9eb8,ppppuVar6);
      param_1 = (ulonglong)uVar8;
      if (0xf < local_18) {
        uVar4 = local_18 + 1;
        ppppuVar6 = local_30;
        if (0xfff < uVar4) {
          ppppuVar6 = (undefined8 ****)local_30[-1];
          if (0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)ppppuVar6))) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar7 = auStack_50;
            goto LAB_180260e2b;
          }
          uVar4 = local_18 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppuVar6,uVar4);
      }
      return param_1;
    }
  }
  return 0;
}



/* ===== 180260ea0 FUN_180260ea0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180260ea0(longlong param_1)

{
  code *pcVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  undefined8 ****local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar3 = FUN_18000f3a0();
  puVar7 = auStack_68;
  puVar8 = auStack_68;
  uVar9 = (uint)(uVar3 >> 2) & 0xf;
  if (uVar9 == 2) {
    FUN_180011220(param_1 + 8);
    puVar8 = auStack_68;
    goto LAB_180261049;
  }
  if (uVar9 == 3) {
    FUN_18000f3a0(param_1 + 8);
    puVar8 = auStack_68;
    goto LAB_180261049;
  }
  if (uVar9 == 4) {
    if (((uint)uVar3 & 0x3fc00) != 0x6c00) {
      lVar5 = FUN_18000f3a0(param_1 + 8);
      puVar8 = auStack_68;
      if (-1 < lVar5) {
        puVar8 = auStack_68;
      }
    }
    goto LAB_180261049;
  }
  if (uVar9 == 5) {
LAB_180260fd4:
    *(undefined8 *)(puVar7 + -8) = 0x180260fdd;
    FUN_180066860(param_1 + 8);
    puVar8 = puVar7;
  }
  else {
    puVar8 = auStack_68;
    if ((uVar9 != 6) || (puVar8 = auStack_68, DAT_180cf9f18 == 0)) goto LAB_180261049;
    uVar3 = FUN_18000f3a0(param_1);
    bVar2 = (byte)(uVar3 >> 2);
    if ((bVar2 | 0x20) == 0x26) {
      uVar4 = FUN_18000f3a0(param_1 + 8);
      FUN_1802608e0(&local_40,uVar4);
    }
    else if (bVar2 == 0x16) {
      FUN_1802608e0(&local_40,param_1 + 8);
    }
    else {
      uStack_38 = 0;
      local_30 = 0;
      local_28 = 0xf;
      local_40 = (undefined8 ****)0x0;
    }
    ppppuVar6 = &local_40;
    if (0xf < local_28) {
      ppppuVar6 = local_40;
    }
    FUN_180260ad0(DAT_180cf9f18,ppppuVar6);
    if (0xf < local_28) {
      uVar3 = local_28 + 1;
      ppppuVar6 = local_40;
      if (0xfff < uVar3) {
        ppppuVar6 = (undefined8 ****)local_40[-1];
        if (0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)ppppuVar6))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar7 = auStack_60;
          goto LAB_180260fd4;
        }
        uVar3 = local_28 + 0x28;
      }
      thunk_FUN_1803d64e0(ppppuVar6,uVar3);
    }
    puVar8 = auStack_68;
  }
LAB_180261049:
  *(undefined8 *)(puVar8 + -8) = 0x180261056;
  return;
}



/* ===== 180261070 FUN_180261070 ===== */

void FUN_180261070(void)

{
  (*DAT_180961b70)();
  return;
}



/* ===== 180261090 FUN_180261090 ===== */

void FUN_180261090(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = 0xffffffff;
  (*DAT_180961b88)(param_1,param_2,local_res18,0);
  return;
}



/* ===== 1802610c0 FUN_1802610c0 ===== */

void FUN_1802610c0(undefined8 param_1,undefined8 param_2)

{
  (*DAT_180961b90)(param_1,3,param_2);
  return;
}



/* ===== 1802610e0 FUN_1802610e0 ===== */

undefined8 FUN_1802610e0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x60))();
  return 1;
}



/* ===== 180261100 FUN_180261100 ===== */

void FUN_180261100(longlong *param_1)

{
  (**(code **)(*param_1 + 0x30))(param_1,"default_ents");
  return;
}



/* ===== 180261120 FUN_180261120 ===== */

void FUN_180261120(void)

{
  (**(code **)(*(longlong *)(DAT_180cf9ec0 + 0x30) + 0x30))();
  return;
}



/* ===== 180261140 FUN_180261140 ===== */

undefined8 FUN_180261140(longlong param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  char *local_10;
  
  if ((param_1 == 0) || (DAT_180961b88 == 0)) {
    return 0;
  }
  sVar1 = strlen(param_2);
  local_18 = FUN_180260710(param_2,sVar1,1);
  local_14 = 0xffffffff;
  local_10 = param_2;
  uVar2 = FUN_180261090(param_1,&local_18);
  return uVar2;
}



/* ===== 1802611b0 FUN_1802611b0 ===== */

longlong FUN_1802611b0(undefined8 param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = DAT_180cf9ec8;
  if ((DAT_180cf9ec8 != 0) && (DAT_180cf9ec0 != 0)) {
    iVar1 = FUN_180261120(param_1,DAT_180cf9ec8);
    if (iVar1 == 3) {
      uVar2 = FUN_180011220(lVar3 + 0x18);
      if ((uVar2 & 2) == 0) {
        lVar3 = FUN_18000f3a0(lVar3);
        if (lVar3 != 0) {
          uVar2 = FUN_180011220(lVar3 + 0x1138);
          if ((uVar2 & 4) != 0) {
            uVar2 = FUN_18000f3a0(lVar3 + 0x80);
            lVar4 = 0;
            if (((byte)(uVar2 >> 2) & 0xf) == 9) {
              lVar4 = lVar3 + 0x80;
            }
            return lVar4;
          }
        }
      }
    }
  }
  return 0;
}



/* ===== 180261240 FUN_180261240 ===== */

undefined8 FUN_180261240(longlong param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_1 - 0x10000U < 0x7ffffffeffff) {
    cVar2 = FUN_180011220(param_1);
    lVar3 = 0;
    if (cVar2 == *param_2) {
      do {
        if (cVar2 == '\0') {
          return 1;
        }
        cVar2 = FUN_180011220(lVar3 + 1 + param_1);
        lVar1 = lVar3 + 1;
        lVar3 = lVar3 + 1;
      } while (cVar2 == param_2[lVar1]);
    }
  }
  return 0;
}



/* ===== 1802612b0 FUN_1802612b0 ===== */

undefined8 FUN_1802612b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar2 = FUN_18000f3a0((ulonglong)DAT_180961968 + param_1);
  if (lVar2 != 0) {
    lVar2 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar2);
    for (iVar5 = 0; (lVar2 != 0 && (iVar5 < 0x20)); iVar5 = iVar5 + 1) {
      lVar3 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar2);
      uVar4 = 0;
      if (lVar3 != 0) {
        uVar4 = FUN_18000f3a0((ulonglong)DAT_180961974 + lVar3);
      }
      cVar1 = FUN_180261240(uVar4,param_2);
      if (cVar1 != '\0') {
        return 1;
      }
      lVar2 = FUN_18000f3a0(lVar2 + 0x60);
      if (lVar2 == 0) {
        return 0;
      }
      lVar2 = FUN_18000f3a0(lVar2 + 0x18);
    }
  }
  return 0;
}



